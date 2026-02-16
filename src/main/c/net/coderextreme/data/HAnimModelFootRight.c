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
meta3.content = "HAnimModelFootRight.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "Right foot, using high-fidelity definitions for HAnim version 2.0";
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
meta8.name = "warning";
meta8.content = "not yet to scale";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "TODO";
meta9.content = "Update all values to match HAnim2 A.7 Level of articulation four LOA-4";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "TODO";
meta10.content = "Add links to figures";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "TODO";
meta11.content = "Add Viewpoints to enable inspection";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "info";
meta12.content = "TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "warning";
meta13.content = "TODO will X3D HAnim component add a new level to support LOA-4 functionality?";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "https://www.web3d.org/working-groups/humanoid-animation-HAnim";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "reference";
meta15.content = "https://www.web3d.org/documents/specifications/19774/V2.0";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "reference";
meta16.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "reference";
meta17.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "reference";
meta18.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "reference";
meta19.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "subject";
meta20.content = "X3D HAnim humanoid animation";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "TODO";
meta21.content = "Integrate and confirm Segment/Joint names, Viewpoints.";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "identifier";
meta22.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "generator";
meta23.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "license";
meta24.content = "../license.html";
head1.meta[22] = meta24;

head = head1;

WorldInfo WorldInfo26 = createNode("WorldInfo");
WorldInfo26.title = "HAnimModelFootRight.x3d";
children = new MFNode();

children[0] = WorldInfo26;

HAnimHumanoid HAnimHumanoid27 = createNode("HAnimHumanoid");
HAnimHumanoid27.name = "Foot_Right";
HAnimHumanoid27.DEF = "hanim_Foot_Right";
HAnimHumanoid27.loa = 4;
HAnimHumanoid27.version = "2.0";
//original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
MetadataSet MetadataSet28 = createNode("MetadataSet");
MetadataSet28.name = "HAnimHumanoid.info";
MetadataSet28.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
MetadataString MetadataString29 = createNode("MetadataString");
MetadataString29.name = "authorName";
MetadataString29.value = new MFString(new java.lang.String["Kwan-Hee YOO, Don Brutzman and Joe Williams"]);
MetadataSet28.value = new MFNode();

MetadataSet28.value[0] = MetadataString29;

HAnimHumanoid27.metadata = new SFNode();

HAnimHumanoid27.metadata[0] = MetadataSet28;

HAnimJoint HAnimJoint30 = createNode("HAnimJoint");
HAnimJoint30.name = "humanoid_root";
HAnimJoint30.DEF = "hanim_humanoid_root";
HAnimJoint30.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint30.llimit = new MFFloat(new float[0,0,0]);
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model
HAnimJoint HAnimJoint31 = createNode("HAnimJoint");
HAnimJoint31.name = "r_talocrural";
HAnimJoint31.DEF = "hanim_r_talocrural";
HAnimJoint31.description = "connection joint of foot to leg above";
HAnimJoint31.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint31.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment32 = createNode("HAnimSegment");
HAnimSegment32.name = "r_talus";
HAnimSegment32.DEF = "hanim_r_talus";
Transform Transform33 = createNode("Transform");
Shape Shape34 = createNode("Shape");
Shape34.DEF = "HAnimJointShape";
Sphere Sphere35 = createNode("Sphere");
Sphere35.radius = 0.025;
Shape34.geometry = Sphere35;

Appearance Appearance36 = createNode("Appearance");
Appearance36.DEF = "HAnimJointAppearance";
Material Material37 = createNode("Material");
Material37.diffuseColor = new SFColor(new float[0,0,1]);
Appearance36.material = Material37;

Shape34.appearance = Appearance36;

Transform33.child = new undefined();

Transform33.child[0] = Shape34;

HAnimSegment32.children = new MFNode();

HAnimSegment32.children[0] = Transform33;

Shape Shape38 = createNode("Shape");
Appearance Appearance39 = createNode("Appearance");
Material Material40 = createNode("Material");
Material40.emissiveColor = new SFColor(new float[1,1,1]);
Appearance39.material = Material40;

Shape38.appearance = Appearance39;

IndexedLineSet IndexedLineSet41 = createNode("IndexedLineSet");
IndexedLineSet41.DEF = "TCtoTCN";
IndexedLineSet41.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate42 = createNode("Coordinate");
Coordinate42.point = new MFVec3f(new float[0,0,0,0,-0.3,0]);
IndexedLineSet41.coord = Coordinate42;

Shape38.geometry = IndexedLineSet41;

HAnimSegment32.children[1] = Shape38;

Shape Shape43 = createNode("Shape");
Appearance Appearance44 = createNode("Appearance");
Material Material45 = createNode("Material");
Material45.emissiveColor = new SFColor(new float[1,1,1]);
Appearance44.material = Material45;

Shape43.appearance = Appearance44;

IndexedLineSet IndexedLineSet46 = createNode("IndexedLineSet");
IndexedLineSet46.DEF = "TCtoCC";
IndexedLineSet46.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate47 = createNode("Coordinate");
Coordinate47.point = new MFVec3f(new float[0,0,0,-0.2,0.3,0]);
IndexedLineSet46.coord = Coordinate47;

Shape43.geometry = IndexedLineSet46;

HAnimSegment32.children[2] = Shape43;

HAnimJoint31.children = new MFNode();

HAnimJoint31.children[0] = HAnimSegment32;

//TCN
HAnimJoint HAnimJoint48 = createNode("HAnimJoint");
HAnimJoint48.name = "r_talocalcaneonavicular";
HAnimJoint48.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint48.center = new SFVec3f(new float[0,-0.3,0]);
HAnimJoint48.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint48.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment49 = createNode("HAnimSegment");
HAnimSegment49.name = "r_navicular";
HAnimSegment49.DEF = "hanim_r_navicular";
Transform Transform50 = createNode("Transform");
Transform50.translation = new SFVec3f(new float[0,-0.3,0]);
Shape Shape51 = createNode("Shape");
Shape51.USE = "HAnimJointShape";
Transform50.child = new undefined();

Transform50.child[0] = Shape51;

HAnimSegment49.children = new MFNode();

HAnimSegment49.children[0] = Transform50;

Shape Shape52 = createNode("Shape");
Appearance Appearance53 = createNode("Appearance");
Material Material54 = createNode("Material");
Material54.emissiveColor = new SFColor(new float[1,1,1]);
Appearance53.material = Material54;

Shape52.appearance = Appearance53;

IndexedLineSet IndexedLineSet55 = createNode("IndexedLineSet");
IndexedLineSet55.DEF = "TCNtoCN1";
IndexedLineSet55.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate56 = createNode("Coordinate");
Coordinate56.point = new MFVec3f(new float[0,-0.3,0,0.1,-0.45,0]);
IndexedLineSet55.coord = Coordinate56;

Shape52.geometry = IndexedLineSet55;

HAnimSegment49.children[1] = Shape52;

Shape Shape57 = createNode("Shape");
Appearance Appearance58 = createNode("Appearance");
Material Material59 = createNode("Material");
Material59.emissiveColor = new SFColor(new float[1,1,1]);
Appearance58.material = Material59;

Shape57.appearance = Appearance58;

IndexedLineSet IndexedLineSet60 = createNode("IndexedLineSet");
IndexedLineSet60.DEF = "TCNtoCN2";
IndexedLineSet60.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate61 = createNode("Coordinate");
Coordinate61.point = new MFVec3f(new float[0,-0.3,0,0,-0.45,0]);
IndexedLineSet60.coord = Coordinate61;

Shape57.geometry = IndexedLineSet60;

HAnimSegment49.children[2] = Shape57;

Shape Shape62 = createNode("Shape");
Appearance Appearance63 = createNode("Appearance");
Material Material64 = createNode("Material");
Material64.emissiveColor = new SFColor(new float[1,1,1]);
Appearance63.material = Material64;

Shape62.appearance = Appearance63;

IndexedLineSet IndexedLineSet65 = createNode("IndexedLineSet");
IndexedLineSet65.DEF = "TCNtoCN3";
IndexedLineSet65.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate66 = createNode("Coordinate");
Coordinate66.point = new MFVec3f(new float[0,-0.3,0,-0.1,-0.4,0]);
IndexedLineSet65.coord = Coordinate66;

Shape62.geometry = IndexedLineSet65;

HAnimSegment49.children[3] = Shape62;

HAnimJoint48.children = new MFNode();

HAnimJoint48.children[0] = HAnimSegment49;

//CN1
HAnimJoint HAnimJoint67 = createNode("HAnimJoint");
HAnimJoint67.name = "r_cuneonavicular_1";
HAnimJoint67.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint67.center = new SFVec3f(new float[0.1,-0.45,0]);
HAnimJoint67.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint67.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment68 = createNode("HAnimSegment");
HAnimSegment68.name = "r_cuneiform_1";
HAnimSegment68.DEF = "hanim_r_cuneiform_1";
Transform Transform69 = createNode("Transform");
Transform69.translation = new SFVec3f(new float[0.1,-0.45,0]);
Shape Shape70 = createNode("Shape");
Shape70.USE = "HAnimJointShape";
Transform69.child = new undefined();

Transform69.child[0] = Shape70;

HAnimSegment68.children = new MFNode();

HAnimSegment68.children[0] = Transform69;

Shape Shape71 = createNode("Shape");
Appearance Appearance72 = createNode("Appearance");
Material Material73 = createNode("Material");
Material73.emissiveColor = new SFColor(new float[1,1,1]);
Appearance72.material = Material73;

Shape71.appearance = Appearance72;

IndexedLineSet IndexedLineSet74 = createNode("IndexedLineSet");
IndexedLineSet74.DEF = "CN1toTMT1";
IndexedLineSet74.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate75 = createNode("Coordinate");
Coordinate75.point = new MFVec3f(new float[0.1,-0.45,0,0.1,-0.6,0]);
IndexedLineSet74.coord = Coordinate75;

Shape71.geometry = IndexedLineSet74;

HAnimSegment68.children[1] = Shape71;

HAnimJoint67.children = new MFNode();

HAnimJoint67.children[0] = HAnimSegment68;

HAnimJoint HAnimJoint76 = createNode("HAnimJoint");
HAnimJoint76.name = "r_tarsometatarsal_1";
HAnimJoint76.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint76.center = new SFVec3f(new float[0.1,-0.6,0]);
HAnimJoint76.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint76.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment77 = createNode("HAnimSegment");
HAnimSegment77.name = "r_metatarsal_1";
HAnimSegment77.DEF = "hanim_r_metatarsal_1";
Transform Transform78 = createNode("Transform");
Transform78.translation = new SFVec3f(new float[0.1,-0.6,0]);
Shape Shape79 = createNode("Shape");
Shape79.USE = "HAnimJointShape";
Transform78.child = new undefined();

Transform78.child[0] = Shape79;

HAnimSegment77.children = new MFNode();

HAnimSegment77.children[0] = Transform78;

Shape Shape80 = createNode("Shape");
Appearance Appearance81 = createNode("Appearance");
Material Material82 = createNode("Material");
Material82.emissiveColor = new SFColor(new float[1,1,1]);
Appearance81.material = Material82;

Shape80.appearance = Appearance81;

IndexedLineSet IndexedLineSet83 = createNode("IndexedLineSet");
IndexedLineSet83.DEF = "TMT1toMTP1";
IndexedLineSet83.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate84 = createNode("Coordinate");
Coordinate84.point = new MFVec3f(new float[0.1,-0.6,0,0.1,-0.9,0]);
IndexedLineSet83.coord = Coordinate84;

Shape80.geometry = IndexedLineSet83;

HAnimSegment77.children[1] = Shape80;

HAnimJoint76.children = new MFNode();

HAnimJoint76.children[0] = HAnimSegment77;

HAnimJoint HAnimJoint85 = createNode("HAnimJoint");
HAnimJoint85.name = "r_metatarsophalangeal_1";
HAnimJoint85.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint85.center = new SFVec3f(new float[0.1,-0.9,0]);
HAnimJoint85.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint85.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment86 = createNode("HAnimSegment");
HAnimSegment86.name = "r_tarsal_proximal_phalanx_1";
HAnimSegment86.DEF = "hanim_r_tarsal_proximal_phalanx_1";
Transform Transform87 = createNode("Transform");
Transform87.translation = new SFVec3f(new float[0.1,-0.9,0]);
Shape Shape88 = createNode("Shape");
Shape88.USE = "HAnimJointShape";
Transform87.child = new undefined();

Transform87.child[0] = Shape88;

HAnimSegment86.children = new MFNode();

HAnimSegment86.children[0] = Transform87;

Shape Shape89 = createNode("Shape");
Appearance Appearance90 = createNode("Appearance");
Material Material91 = createNode("Material");
Material91.emissiveColor = new SFColor(new float[1,1,1]);
Appearance90.material = Material91;

Shape89.appearance = Appearance90;

IndexedLineSet IndexedLineSet92 = createNode("IndexedLineSet");
IndexedLineSet92.DEF = "MTP1toIP1";
IndexedLineSet92.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate93 = createNode("Coordinate");
Coordinate93.point = new MFVec3f(new float[0.1,-0.9,0,0.1,-1.05,0]);
IndexedLineSet92.coord = Coordinate93;

Shape89.geometry = IndexedLineSet92;

HAnimSegment86.children[1] = Shape89;

HAnimJoint85.children = new MFNode();

HAnimJoint85.children[0] = HAnimSegment86;

HAnimJoint HAnimJoint94 = createNode("HAnimJoint");
HAnimJoint94.name = "r_tarsal_interphalangeal_1";
HAnimJoint94.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint94.center = new SFVec3f(new float[0.1,-1.05,0]);
HAnimJoint94.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint94.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment95 = createNode("HAnimSegment");
HAnimSegment95.name = "r_tarsal_distal_phalanx_1";
HAnimSegment95.DEF = "hanim_r_tarsal_distal_phalanx_1";
Transform Transform96 = createNode("Transform");
Transform96.translation = new SFVec3f(new float[0.1,-1.05,0]);
Shape Shape97 = createNode("Shape");
Shape97.USE = "HAnimJointShape";
Transform96.child = new undefined();

Transform96.child[0] = Shape97;

HAnimSegment95.children = new MFNode();

HAnimSegment95.children[0] = Transform96;

Shape Shape98 = createNode("Shape");
Appearance Appearance99 = createNode("Appearance");
Material Material100 = createNode("Material");
Material100.emissiveColor = new SFColor(new float[1,1,1]);
Appearance99.material = Material100;

Shape98.appearance = Appearance99;

IndexedLineSet IndexedLineSet101 = createNode("IndexedLineSet");
IndexedLineSet101.DEF = "tiptoe_r_interphalangeal_";
IndexedLineSet101.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate102 = createNode("Coordinate");
Coordinate102.point = new MFVec3f(new float[0.1,-1.05,0,0.1,-1.1,0]);
IndexedLineSet101.coord = Coordinate102;

Shape98.geometry = IndexedLineSet101;

HAnimSegment95.children[1] = Shape98;

HAnimJoint94.children = new MFNode();

HAnimJoint94.children[0] = HAnimSegment95;

HAnimJoint85.children[1] = HAnimJoint94;

HAnimJoint76.children[1] = HAnimJoint85;

HAnimJoint67.children[1] = HAnimJoint76;

HAnimJoint48.children[1] = HAnimJoint67;

//CN2
HAnimJoint HAnimJoint103 = createNode("HAnimJoint");
HAnimJoint103.name = "r_cuneonavicular_2";
HAnimJoint103.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint103.center = new SFVec3f(new float[0,-0.45,0]);
HAnimJoint103.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint103.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment104 = createNode("HAnimSegment");
HAnimSegment104.name = "r_cuneiform_2";
HAnimSegment104.DEF = "hanim_r_cuneiform_2";
Transform Transform105 = createNode("Transform");
Transform105.translation = new SFVec3f(new float[0,-0.45,0]);
Shape Shape106 = createNode("Shape");
Shape106.USE = "HAnimJointShape";
Transform105.child = new undefined();

Transform105.child[0] = Shape106;

HAnimSegment104.children = new MFNode();

HAnimSegment104.children[0] = Transform105;

Shape Shape107 = createNode("Shape");
Appearance Appearance108 = createNode("Appearance");
Material Material109 = createNode("Material");
Material109.emissiveColor = new SFColor(new float[1,1,1]);
Appearance108.material = Material109;

Shape107.appearance = Appearance108;

IndexedLineSet IndexedLineSet110 = createNode("IndexedLineSet");
IndexedLineSet110.DEF = "CN2toTMT2";
IndexedLineSet110.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate111 = createNode("Coordinate");
Coordinate111.point = new MFVec3f(new float[0,-0.45,0,-0.05,-0.6,0]);
IndexedLineSet110.coord = Coordinate111;

Shape107.geometry = IndexedLineSet110;

HAnimSegment104.children[1] = Shape107;

HAnimJoint103.children = new MFNode();

HAnimJoint103.children[0] = HAnimSegment104;

HAnimJoint HAnimJoint112 = createNode("HAnimJoint");
HAnimJoint112.name = "r_tarsometatarsal_2";
HAnimJoint112.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint112.center = new SFVec3f(new float[-0.05,-0.6,0]);
HAnimJoint112.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint112.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment113 = createNode("HAnimSegment");
HAnimSegment113.name = "r_metatarsal_2";
HAnimSegment113.DEF = "hanim_r_metatarsal_2";
Transform Transform114 = createNode("Transform");
Transform114.translation = new SFVec3f(new float[-0.05,-0.6,0]);
Shape Shape115 = createNode("Shape");
Shape115.USE = "HAnimJointShape";
Transform114.child = new undefined();

Transform114.child[0] = Shape115;

HAnimSegment113.children = new MFNode();

HAnimSegment113.children[0] = Transform114;

Shape Shape116 = createNode("Shape");
Appearance Appearance117 = createNode("Appearance");
Material Material118 = createNode("Material");
Material118.emissiveColor = new SFColor(new float[1,1,1]);
Appearance117.material = Material118;

Shape116.appearance = Appearance117;

IndexedLineSet IndexedLineSet119 = createNode("IndexedLineSet");
IndexedLineSet119.DEF = "TMT2toMTP2";
IndexedLineSet119.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate120 = createNode("Coordinate");
Coordinate120.point = new MFVec3f(new float[-0.05,-0.6,0,-0.05,-0.9,0]);
IndexedLineSet119.coord = Coordinate120;

Shape116.geometry = IndexedLineSet119;

HAnimSegment113.children[1] = Shape116;

HAnimJoint112.children = new MFNode();

HAnimJoint112.children[0] = HAnimSegment113;

HAnimJoint HAnimJoint121 = createNode("HAnimJoint");
HAnimJoint121.name = "r_metatarsophalangeal_2";
HAnimJoint121.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint121.center = new SFVec3f(new float[-0.05,-0.9,0]);
HAnimJoint121.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint121.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment122 = createNode("HAnimSegment");
HAnimSegment122.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment122.DEF = "hanim_r_tarsal_proximal_phalanx_2";
Transform Transform123 = createNode("Transform");
Transform123.translation = new SFVec3f(new float[-0.05,-0.9,0]);
Shape Shape124 = createNode("Shape");
Shape124.USE = "HAnimJointShape";
Transform123.child = new undefined();

Transform123.child[0] = Shape124;

HAnimSegment122.children = new MFNode();

HAnimSegment122.children[0] = Transform123;

Shape Shape125 = createNode("Shape");
Appearance Appearance126 = createNode("Appearance");
Material Material127 = createNode("Material");
Material127.emissiveColor = new SFColor(new float[1,1,1]);
Appearance126.material = Material127;

Shape125.appearance = Appearance126;

IndexedLineSet IndexedLineSet128 = createNode("IndexedLineSet");
IndexedLineSet128.DEF = "MTP2toPIP2";
IndexedLineSet128.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate129 = createNode("Coordinate");
Coordinate129.point = new MFVec3f(new float[-0.05,-0.9,0,-0.05,-1.05,0]);
IndexedLineSet128.coord = Coordinate129;

Shape125.geometry = IndexedLineSet128;

HAnimSegment122.children[1] = Shape125;

HAnimJoint121.children = new MFNode();

HAnimJoint121.children[0] = HAnimSegment122;

HAnimJoint HAnimJoint130 = createNode("HAnimJoint");
HAnimJoint130.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint130.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint130.center = new SFVec3f(new float[-0.05,-1.05,0]);
HAnimJoint130.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint130.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment131 = createNode("HAnimSegment");
HAnimSegment131.name = "r_tarsal_middle_phalanx_2";
HAnimSegment131.DEF = "hanim_r_tarsal_middle_phalanx_2";
Transform Transform132 = createNode("Transform");
Transform132.translation = new SFVec3f(new float[-0.05,-1.05,0]);
Shape Shape133 = createNode("Shape");
Shape133.USE = "HAnimJointShape";
Transform132.child = new undefined();

Transform132.child[0] = Shape133;

HAnimSegment131.children = new MFNode();

HAnimSegment131.children[0] = Transform132;

Shape Shape134 = createNode("Shape");
Appearance Appearance135 = createNode("Appearance");
Material Material136 = createNode("Material");
Material136.emissiveColor = new SFColor(new float[1,1,1]);
Appearance135.material = Material136;

Shape134.appearance = Appearance135;

IndexedLineSet IndexedLineSet137 = createNode("IndexedLineSet");
IndexedLineSet137.DEF = "PIP2toDIP2";
IndexedLineSet137.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate138 = createNode("Coordinate");
Coordinate138.point = new MFVec3f(new float[-0.05,-1.05,0,-0.05,-1.12,0]);
IndexedLineSet137.coord = Coordinate138;

Shape134.geometry = IndexedLineSet137;

HAnimSegment131.children[1] = Shape134;

HAnimJoint130.children = new MFNode();

HAnimJoint130.children[0] = HAnimSegment131;

HAnimJoint HAnimJoint139 = createNode("HAnimJoint");
HAnimJoint139.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint139.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint139.center = new SFVec3f(new float[-0.05,-1.12,0]);
HAnimJoint139.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint139.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment140 = createNode("HAnimSegment");
HAnimSegment140.name = "r_tarsal_distal_phalanx_2";
HAnimSegment140.DEF = "hanim_r_tarsal_distal_phalanx_2";
Transform Transform141 = createNode("Transform");
Transform141.translation = new SFVec3f(new float[-0.05,-1.12,0]);
Shape Shape142 = createNode("Shape");
Shape142.USE = "HAnimJointShape";
Transform141.child = new undefined();

Transform141.child[0] = Shape142;

HAnimSegment140.children = new MFNode();

HAnimSegment140.children[0] = Transform141;

Shape Shape143 = createNode("Shape");
Appearance Appearance144 = createNode("Appearance");
Material Material145 = createNode("Material");
Material145.emissiveColor = new SFColor(new float[1,1,1]);
Appearance144.material = Material145;

Shape143.appearance = Appearance144;

IndexedLineSet IndexedLineSet146 = createNode("IndexedLineSet");
IndexedLineSet146.DEF = "tiptoe_r_tarsal_distal_interphalangeal_2";
IndexedLineSet146.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate147 = createNode("Coordinate");
Coordinate147.point = new MFVec3f(new float[-0.05,-1.12,0,-0.05,-1.16,0]);
IndexedLineSet146.coord = Coordinate147;

Shape143.geometry = IndexedLineSet146;

HAnimSegment140.children[1] = Shape143;

HAnimJoint139.children = new MFNode();

HAnimJoint139.children[0] = HAnimSegment140;

HAnimJoint130.children[1] = HAnimJoint139;

HAnimJoint121.children[1] = HAnimJoint130;

HAnimJoint112.children[1] = HAnimJoint121;

HAnimJoint103.children[1] = HAnimJoint112;

HAnimJoint48.children[2] = HAnimJoint103;

//CN3
HAnimJoint HAnimJoint148 = createNode("HAnimJoint");
HAnimJoint148.name = "r_cuneonavicular_3";
HAnimJoint148.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint148.center = new SFVec3f(new float[-0.1,-0.4,0]);
HAnimJoint148.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint148.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment149 = createNode("HAnimSegment");
HAnimSegment149.name = "r_cuneiform_3";
HAnimSegment149.DEF = "hanim_r_cuneiform_3";
Transform Transform150 = createNode("Transform");
Transform150.translation = new SFVec3f(new float[-0.1,-0.4,0]);
Shape Shape151 = createNode("Shape");
Shape151.USE = "HAnimJointShape";
Transform150.child = new undefined();

Transform150.child[0] = Shape151;

HAnimSegment149.children = new MFNode();

HAnimSegment149.children[0] = Transform150;

Shape Shape152 = createNode("Shape");
Appearance Appearance153 = createNode("Appearance");
Material Material154 = createNode("Material");
Material154.emissiveColor = new SFColor(new float[1,1,1]);
Appearance153.material = Material154;

Shape152.appearance = Appearance153;

IndexedLineSet IndexedLineSet155 = createNode("IndexedLineSet");
IndexedLineSet155.DEF = "CN3toTMT3";
IndexedLineSet155.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate156 = createNode("Coordinate");
Coordinate156.point = new MFVec3f(new float[-0.1,-0.4,0,-0.15,-0.6,0]);
IndexedLineSet155.coord = Coordinate156;

Shape152.geometry = IndexedLineSet155;

HAnimSegment149.children[1] = Shape152;

HAnimJoint148.children = new MFNode();

HAnimJoint148.children[0] = HAnimSegment149;

HAnimJoint HAnimJoint157 = createNode("HAnimJoint");
HAnimJoint157.name = "r_tarsometatarsal_3";
HAnimJoint157.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint157.center = new SFVec3f(new float[-0.15,-0.6,0]);
HAnimJoint157.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint157.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment158 = createNode("HAnimSegment");
HAnimSegment158.name = "r_metatarsal_3";
HAnimSegment158.DEF = "hanim_r_metatarsal_3";
Transform Transform159 = createNode("Transform");
Transform159.translation = new SFVec3f(new float[-0.15,-0.6,0]);
Shape Shape160 = createNode("Shape");
Shape160.USE = "HAnimJointShape";
Transform159.child = new undefined();

Transform159.child[0] = Shape160;

HAnimSegment158.children = new MFNode();

HAnimSegment158.children[0] = Transform159;

Shape Shape161 = createNode("Shape");
Appearance Appearance162 = createNode("Appearance");
Material Material163 = createNode("Material");
Material163.emissiveColor = new SFColor(new float[1,1,1]);
Appearance162.material = Material163;

Shape161.appearance = Appearance162;

IndexedLineSet IndexedLineSet164 = createNode("IndexedLineSet");
IndexedLineSet164.DEF = "TMT3toMTP3";
IndexedLineSet164.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate165 = createNode("Coordinate");
Coordinate165.point = new MFVec3f(new float[-0.15,-0.6,0,-0.15,-0.9,0]);
IndexedLineSet164.coord = Coordinate165;

Shape161.geometry = IndexedLineSet164;

HAnimSegment158.children[1] = Shape161;

HAnimJoint157.children = new MFNode();

HAnimJoint157.children[0] = HAnimSegment158;

HAnimJoint HAnimJoint166 = createNode("HAnimJoint");
HAnimJoint166.name = "r_metatarsophalangeal_3";
HAnimJoint166.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint166.center = new SFVec3f(new float[-0.15,-0.9,0]);
HAnimJoint166.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint166.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment167 = createNode("HAnimSegment");
HAnimSegment167.name = "r_tarsal_proximal_phalanx_3";
HAnimSegment167.DEF = "hanim_r_tarsal_proximal_phalanx_3";
Transform Transform168 = createNode("Transform");
Transform168.translation = new SFVec3f(new float[-0.15,-0.9,0]);
Shape Shape169 = createNode("Shape");
Shape169.USE = "HAnimJointShape";
Transform168.child = new undefined();

Transform168.child[0] = Shape169;

HAnimSegment167.children = new MFNode();

HAnimSegment167.children[0] = Transform168;

Shape Shape170 = createNode("Shape");
Appearance Appearance171 = createNode("Appearance");
Material Material172 = createNode("Material");
Material172.emissiveColor = new SFColor(new float[1,1,1]);
Appearance171.material = Material172;

Shape170.appearance = Appearance171;

IndexedLineSet IndexedLineSet173 = createNode("IndexedLineSet");
IndexedLineSet173.DEF = "MTP3toPIP3";
IndexedLineSet173.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate174 = createNode("Coordinate");
Coordinate174.point = new MFVec3f(new float[-0.15,-0.9,0,-0.15,-1.05,0]);
IndexedLineSet173.coord = Coordinate174;

Shape170.geometry = IndexedLineSet173;

HAnimSegment167.children[1] = Shape170;

HAnimJoint166.children = new MFNode();

HAnimJoint166.children[0] = HAnimSegment167;

HAnimJoint HAnimJoint175 = createNode("HAnimJoint");
HAnimJoint175.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint175.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint175.center = new SFVec3f(new float[-0.15,-1.05,0]);
HAnimJoint175.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint175.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment176 = createNode("HAnimSegment");
HAnimSegment176.name = "r_tarsal_middle_phalanx_3";
HAnimSegment176.DEF = "hanim_r_tarsal_middle_phalanx_3";
Transform Transform177 = createNode("Transform");
Transform177.translation = new SFVec3f(new float[-0.15,-1.05,0]);
Shape Shape178 = createNode("Shape");
Shape178.USE = "HAnimJointShape";
Transform177.child = new undefined();

Transform177.child[0] = Shape178;

HAnimSegment176.children = new MFNode();

HAnimSegment176.children[0] = Transform177;

Shape Shape179 = createNode("Shape");
Appearance Appearance180 = createNode("Appearance");
Material Material181 = createNode("Material");
Material181.emissiveColor = new SFColor(new float[1,1,1]);
Appearance180.material = Material181;

Shape179.appearance = Appearance180;

IndexedLineSet IndexedLineSet182 = createNode("IndexedLineSet");
IndexedLineSet182.DEF = "PIP3toDIP3";
IndexedLineSet182.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate183 = createNode("Coordinate");
Coordinate183.point = new MFVec3f(new float[-0.15,-1.05,0,-0.15,-1.13,0]);
IndexedLineSet182.coord = Coordinate183;

Shape179.geometry = IndexedLineSet182;

HAnimSegment176.children[1] = Shape179;

HAnimJoint175.children = new MFNode();

HAnimJoint175.children[0] = HAnimSegment176;

HAnimJoint HAnimJoint184 = createNode("HAnimJoint");
HAnimJoint184.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint184.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint184.center = new SFVec3f(new float[-0.15,-1.13,0]);
HAnimJoint184.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint184.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment185 = createNode("HAnimSegment");
HAnimSegment185.name = "r_tarsal_distal_phalanx_3";
HAnimSegment185.DEF = "hanim_r_tarsal_distal_phalanx_3";
Transform Transform186 = createNode("Transform");
Transform186.translation = new SFVec3f(new float[-0.15,-1.13,0]);
Shape Shape187 = createNode("Shape");
Shape187.USE = "HAnimJointShape";
Transform186.child = new undefined();

Transform186.child[0] = Shape187;

HAnimSegment185.children = new MFNode();

HAnimSegment185.children[0] = Transform186;

Shape Shape188 = createNode("Shape");
Appearance Appearance189 = createNode("Appearance");
Material Material190 = createNode("Material");
Material190.emissiveColor = new SFColor(new float[1,1,1]);
Appearance189.material = Material190;

Shape188.appearance = Appearance189;

IndexedLineSet IndexedLineSet191 = createNode("IndexedLineSet");
IndexedLineSet191.DEF = "tiptoe_r_tarsal_distal_interphalangeal_3";
IndexedLineSet191.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate192 = createNode("Coordinate");
Coordinate192.point = new MFVec3f(new float[-0.15,-1.13,0,-0.15,-1.16,0]);
IndexedLineSet191.coord = Coordinate192;

Shape188.geometry = IndexedLineSet191;

HAnimSegment185.children[1] = Shape188;

HAnimJoint184.children = new MFNode();

HAnimJoint184.children[0] = HAnimSegment185;

HAnimJoint175.children[1] = HAnimJoint184;

HAnimJoint166.children[1] = HAnimJoint175;

HAnimJoint157.children[1] = HAnimJoint166;

HAnimJoint148.children[1] = HAnimJoint157;

HAnimJoint48.children[3] = HAnimJoint148;

HAnimJoint31.children[1] = HAnimJoint48;

//CC
HAnimJoint HAnimJoint193 = createNode("HAnimJoint");
HAnimJoint193.name = "r_calcaneocuboid";
HAnimJoint193.DEF = "hanim_r_calcaneocuboid";
HAnimJoint193.center = new SFVec3f(new float[-0.2,0.3,0]);
HAnimJoint193.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint193.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment194 = createNode("HAnimSegment");
HAnimSegment194.name = "r_calcaneus";
HAnimSegment194.DEF = "hanim_r_calcaneus";
Transform Transform195 = createNode("Transform");
Transform195.translation = new SFVec3f(new float[-0.2,0.3,0]);
Shape Shape196 = createNode("Shape");
Shape196.USE = "HAnimJointShape";
Transform195.child = new undefined();

Transform195.child[0] = Shape196;

HAnimSegment194.children = new MFNode();

HAnimSegment194.children[0] = Transform195;

Shape Shape197 = createNode("Shape");
Appearance Appearance198 = createNode("Appearance");
Material Material199 = createNode("Material");
Material199.emissiveColor = new SFColor(new float[1,1,1]);
Appearance198.material = Material199;

Shape197.appearance = Appearance198;

IndexedLineSet IndexedLineSet200 = createNode("IndexedLineSet");
IndexedLineSet200.DEF = "CCtoTT";
IndexedLineSet200.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate201 = createNode("Coordinate");
Coordinate201.point = new MFVec3f(new float[-0.2,0.3,0,-0.21,-0.3,0]);
IndexedLineSet200.coord = Coordinate201;

Shape197.geometry = IndexedLineSet200;

HAnimSegment194.children[1] = Shape197;

HAnimJoint193.children = new MFNode();

HAnimJoint193.children[0] = HAnimSegment194;

//TT
HAnimJoint HAnimJoint202 = createNode("HAnimJoint");
HAnimJoint202.name = "r_transversetarsal";
HAnimJoint202.DEF = "hanim_r_transversetarsal";
HAnimJoint202.center = new SFVec3f(new float[-0.21,-0.3,0]);
HAnimJoint202.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint202.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment203 = createNode("HAnimSegment");
HAnimSegment203.name = "r_cuboid";
HAnimSegment203.DEF = "hanim_r_cuboid";
Transform Transform204 = createNode("Transform");
Transform204.translation = new SFVec3f(new float[-0.21,-0.3,0]);
Shape Shape205 = createNode("Shape");
Shape205.USE = "HAnimJointShape";
Transform204.child = new undefined();

Transform204.child[0] = Shape205;

HAnimSegment203.children = new MFNode();

HAnimSegment203.children[0] = Transform204;

Shape Shape206 = createNode("Shape");
Appearance Appearance207 = createNode("Appearance");
Material Material208 = createNode("Material");
Material208.emissiveColor = new SFColor(new float[1,1,1]);
Appearance207.material = Material208;

Shape206.appearance = Appearance207;

IndexedLineSet IndexedLineSet209 = createNode("IndexedLineSet");
IndexedLineSet209.DEF = "TTtoTMT4";
IndexedLineSet209.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate210 = createNode("Coordinate");
Coordinate210.point = new MFVec3f(new float[-0.21,-0.3,0,-0.25,-0.58,0]);
IndexedLineSet209.coord = Coordinate210;

Shape206.geometry = IndexedLineSet209;

HAnimSegment203.children[1] = Shape206;

Shape Shape211 = createNode("Shape");
Appearance Appearance212 = createNode("Appearance");
Material Material213 = createNode("Material");
Material213.emissiveColor = new SFColor(new float[1,1,1]);
Appearance212.material = Material213;

Shape211.appearance = Appearance212;

IndexedLineSet IndexedLineSet214 = createNode("IndexedLineSet");
IndexedLineSet214.DEF = "TTtoTMT5";
IndexedLineSet214.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate215 = createNode("Coordinate");
Coordinate215.point = new MFVec3f(new float[-0.21,-0.3,0,-0.33,-0.52,0]);
IndexedLineSet214.coord = Coordinate215;

Shape211.geometry = IndexedLineSet214;

HAnimSegment203.children[2] = Shape211;

HAnimJoint202.children = new MFNode();

HAnimJoint202.children[0] = HAnimSegment203;

//TMT4
HAnimJoint HAnimJoint216 = createNode("HAnimJoint");
HAnimJoint216.name = "r_tarsometatarsal_4";
HAnimJoint216.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint216.center = new SFVec3f(new float[-0.25,-0.58,0]);
HAnimJoint216.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint216.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment217 = createNode("HAnimSegment");
HAnimSegment217.name = "r_metatarsal_4";
HAnimSegment217.DEF = "hanim_r_metatarsal_4";
Transform Transform218 = createNode("Transform");
Transform218.translation = new SFVec3f(new float[-0.25,-0.58,0]);
Shape Shape219 = createNode("Shape");
Shape219.USE = "HAnimJointShape";
Transform218.child = new undefined();

Transform218.child[0] = Shape219;

HAnimSegment217.children = new MFNode();

HAnimSegment217.children[0] = Transform218;

Shape Shape220 = createNode("Shape");
Appearance Appearance221 = createNode("Appearance");
Material Material222 = createNode("Material");
Material222.emissiveColor = new SFColor(new float[1,1,1]);
Appearance221.material = Material222;

Shape220.appearance = Appearance221;

IndexedLineSet IndexedLineSet223 = createNode("IndexedLineSet");
IndexedLineSet223.DEF = "TMT4toMTP4";
IndexedLineSet223.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate224 = createNode("Coordinate");
Coordinate224.point = new MFVec3f(new float[-0.25,-0.58,0,-0.25,-0.87,0]);
IndexedLineSet223.coord = Coordinate224;

Shape220.geometry = IndexedLineSet223;

HAnimSegment217.children[1] = Shape220;

HAnimJoint216.children = new MFNode();

HAnimJoint216.children[0] = HAnimSegment217;

HAnimJoint HAnimJoint225 = createNode("HAnimJoint");
HAnimJoint225.name = "r_metatarsophalangeal_4";
HAnimJoint225.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint225.center = new SFVec3f(new float[-0.25,-0.87,0]);
HAnimJoint225.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint225.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment226 = createNode("HAnimSegment");
HAnimSegment226.name = "r_tarsal_proximal_phalanx_4";
HAnimSegment226.DEF = "hanim_r_tarsal_proximal_phalanx_4";
Transform Transform227 = createNode("Transform");
Transform227.translation = new SFVec3f(new float[-0.25,-0.87,0]);
Shape Shape228 = createNode("Shape");
Shape228.USE = "HAnimJointShape";
Transform227.child = new undefined();

Transform227.child[0] = Shape228;

HAnimSegment226.children = new MFNode();

HAnimSegment226.children[0] = Transform227;

Shape Shape229 = createNode("Shape");
Appearance Appearance230 = createNode("Appearance");
Material Material231 = createNode("Material");
Material231.emissiveColor = new SFColor(new float[1,1,1]);
Appearance230.material = Material231;

Shape229.appearance = Appearance230;

IndexedLineSet IndexedLineSet232 = createNode("IndexedLineSet");
IndexedLineSet232.DEF = "MTP4toPIP4";
IndexedLineSet232.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate233 = createNode("Coordinate");
Coordinate233.point = new MFVec3f(new float[-0.25,-0.87,0,-0.25,-1,0]);
IndexedLineSet232.coord = Coordinate233;

Shape229.geometry = IndexedLineSet232;

HAnimSegment226.children[1] = Shape229;

HAnimJoint225.children = new MFNode();

HAnimJoint225.children[0] = HAnimSegment226;

HAnimJoint HAnimJoint234 = createNode("HAnimJoint");
HAnimJoint234.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint234.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint234.center = new SFVec3f(new float[-0.25,-1,0]);
HAnimJoint234.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint234.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment235 = createNode("HAnimSegment");
HAnimSegment235.name = "r_tarsal_middle_phalanx_4";
HAnimSegment235.DEF = "hanim_r_tarsal_middle_phalanx_4";
Transform Transform236 = createNode("Transform");
Transform236.translation = new SFVec3f(new float[-0.25,-1,0]);
Shape Shape237 = createNode("Shape");
Shape237.USE = "HAnimJointShape";
Transform236.child = new undefined();

Transform236.child[0] = Shape237;

HAnimSegment235.children = new MFNode();

HAnimSegment235.children[0] = Transform236;

Shape Shape238 = createNode("Shape");
Appearance Appearance239 = createNode("Appearance");
Material Material240 = createNode("Material");
Material240.emissiveColor = new SFColor(new float[1,1,1]);
Appearance239.material = Material240;

Shape238.appearance = Appearance239;

IndexedLineSet IndexedLineSet241 = createNode("IndexedLineSet");
IndexedLineSet241.DEF = "PIP4toDIP4";
IndexedLineSet241.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate242 = createNode("Coordinate");
Coordinate242.point = new MFVec3f(new float[-0.25,-1,0,-0.25,-1.1,0]);
IndexedLineSet241.coord = Coordinate242;

Shape238.geometry = IndexedLineSet241;

HAnimSegment235.children[1] = Shape238;

HAnimJoint234.children = new MFNode();

HAnimJoint234.children[0] = HAnimSegment235;

HAnimJoint HAnimJoint243 = createNode("HAnimJoint");
HAnimJoint243.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint243.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint243.center = new SFVec3f(new float[-0.25,-1.1,0]);
HAnimJoint243.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint243.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment244 = createNode("HAnimSegment");
HAnimSegment244.name = "r_tarsal_distal_phalanx_4";
HAnimSegment244.DEF = "hanim_r_tarsal_distal_phalanx_4";
Transform Transform245 = createNode("Transform");
Transform245.translation = new SFVec3f(new float[-0.25,-1.1,0]);
Shape Shape246 = createNode("Shape");
Shape246.USE = "HAnimJointShape";
Transform245.child = new undefined();

Transform245.child[0] = Shape246;

HAnimSegment244.children = new MFNode();

HAnimSegment244.children[0] = Transform245;

Shape Shape247 = createNode("Shape");
Appearance Appearance248 = createNode("Appearance");
Material Material249 = createNode("Material");
Material249.emissiveColor = new SFColor(new float[1,1,1]);
Appearance248.material = Material249;

Shape247.appearance = Appearance248;

IndexedLineSet IndexedLineSet250 = createNode("IndexedLineSet");
IndexedLineSet250.DEF = "tiptoe_r_tarsal_distal_interphalangeal_4";
IndexedLineSet250.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate251 = createNode("Coordinate");
Coordinate251.point = new MFVec3f(new float[-0.25,-1.1,0,-0.25,-1.15,0]);
IndexedLineSet250.coord = Coordinate251;

Shape247.geometry = IndexedLineSet250;

HAnimSegment244.children[1] = Shape247;

HAnimJoint243.children = new MFNode();

HAnimJoint243.children[0] = HAnimSegment244;

HAnimJoint234.children[1] = HAnimJoint243;

HAnimJoint225.children[1] = HAnimJoint234;

HAnimJoint216.children[1] = HAnimJoint225;

HAnimJoint202.children[1] = HAnimJoint216;

//TMT5
HAnimJoint HAnimJoint252 = createNode("HAnimJoint");
HAnimJoint252.name = "r_tarsometatarsal_5";
HAnimJoint252.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint252.center = new SFVec3f(new float[-0.33,-0.52,0]);
HAnimJoint252.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint252.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment253 = createNode("HAnimSegment");
HAnimSegment253.name = "r_metatarsal_5";
HAnimSegment253.DEF = "hanim_r_metatarsal_5";
Transform Transform254 = createNode("Transform");
Transform254.translation = new SFVec3f(new float[-0.33,-0.52,0]);
Shape Shape255 = createNode("Shape");
Shape255.USE = "HAnimJointShape";
Transform254.child = new undefined();

Transform254.child[0] = Shape255;

HAnimSegment253.children = new MFNode();

HAnimSegment253.children[0] = Transform254;

Shape Shape256 = createNode("Shape");
Appearance Appearance257 = createNode("Appearance");
Material Material258 = createNode("Material");
Material258.emissiveColor = new SFColor(new float[1,1,1]);
Appearance257.material = Material258;

Shape256.appearance = Appearance257;

IndexedLineSet IndexedLineSet259 = createNode("IndexedLineSet");
IndexedLineSet259.DEF = "TMT5toMTP5";
IndexedLineSet259.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate260 = createNode("Coordinate");
Coordinate260.point = new MFVec3f(new float[-0.33,-0.52,0,-0.34,-0.8,0]);
IndexedLineSet259.coord = Coordinate260;

Shape256.geometry = IndexedLineSet259;

HAnimSegment253.children[1] = Shape256;

HAnimJoint252.children = new MFNode();

HAnimJoint252.children[0] = HAnimSegment253;

HAnimJoint HAnimJoint261 = createNode("HAnimJoint");
HAnimJoint261.name = "r_metatarsophalangeal_5";
HAnimJoint261.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint261.center = new SFVec3f(new float[-0.34,-0.8,0]);
HAnimJoint261.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint261.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment262 = createNode("HAnimSegment");
HAnimSegment262.name = "r_tarsal_proximal_phalanx_5";
HAnimSegment262.DEF = "hanim_r_tarsal_proximal_phalanx_5";
Transform Transform263 = createNode("Transform");
Transform263.translation = new SFVec3f(new float[-0.34,-0.8,0]);
Shape Shape264 = createNode("Shape");
Shape264.USE = "HAnimJointShape";
Transform263.child = new undefined();

Transform263.child[0] = Shape264;

HAnimSegment262.children = new MFNode();

HAnimSegment262.children[0] = Transform263;

Shape Shape265 = createNode("Shape");
Appearance Appearance266 = createNode("Appearance");
Material Material267 = createNode("Material");
Material267.emissiveColor = new SFColor(new float[1,1,1]);
Appearance266.material = Material267;

Shape265.appearance = Appearance266;

IndexedLineSet IndexedLineSet268 = createNode("IndexedLineSet");
IndexedLineSet268.DEF = "MTP5toPIP5";
IndexedLineSet268.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate269 = createNode("Coordinate");
Coordinate269.point = new MFVec3f(new float[-0.34,-0.8,0,-0.34,-0.95,0]);
IndexedLineSet268.coord = Coordinate269;

Shape265.geometry = IndexedLineSet268;

HAnimSegment262.children[1] = Shape265;

HAnimJoint261.children = new MFNode();

HAnimJoint261.children[0] = HAnimSegment262;

HAnimJoint HAnimJoint270 = createNode("HAnimJoint");
HAnimJoint270.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint270.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint270.center = new SFVec3f(new float[-0.34,-0.95,0]);
HAnimJoint270.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint270.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment271 = createNode("HAnimSegment");
HAnimSegment271.name = "r_tarsal_middle_phalanx_5";
HAnimSegment271.DEF = "hanim_r_tarsal_middle_phalanx_5";
Transform Transform272 = createNode("Transform");
Transform272.translation = new SFVec3f(new float[-0.34,-0.95,0]);
Shape Shape273 = createNode("Shape");
Shape273.USE = "HAnimJointShape";
Transform272.child = new undefined();

Transform272.child[0] = Shape273;

HAnimSegment271.children = new MFNode();

HAnimSegment271.children[0] = Transform272;

Shape Shape274 = createNode("Shape");
Appearance Appearance275 = createNode("Appearance");
Material Material276 = createNode("Material");
Material276.emissiveColor = new SFColor(new float[1,1,1]);
Appearance275.material = Material276;

Shape274.appearance = Appearance275;

IndexedLineSet IndexedLineSet277 = createNode("IndexedLineSet");
IndexedLineSet277.DEF = "PIP5toDIP5";
IndexedLineSet277.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate278 = createNode("Coordinate");
Coordinate278.point = new MFVec3f(new float[-0.34,-0.95,0,-0.34,-1.05,0]);
IndexedLineSet277.coord = Coordinate278;

Shape274.geometry = IndexedLineSet277;

HAnimSegment271.children[1] = Shape274;

HAnimJoint270.children = new MFNode();

HAnimJoint270.children[0] = HAnimSegment271;

HAnimJoint HAnimJoint279 = createNode("HAnimJoint");
HAnimJoint279.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint279.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint279.center = new SFVec3f(new float[-0.34,-1.05,0]);
HAnimJoint279.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint279.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment280 = createNode("HAnimSegment");
HAnimSegment280.name = "r_tarsal_distal_phalanx_5";
HAnimSegment280.DEF = "hanim_r_tarsal_distal_phalanx_5";
Transform Transform281 = createNode("Transform");
Transform281.translation = new SFVec3f(new float[-0.34,-1.05,0]);
Shape Shape282 = createNode("Shape");
Shape282.USE = "HAnimJointShape";
Transform281.child = new undefined();

Transform281.child[0] = Shape282;

HAnimSegment280.children = new MFNode();

HAnimSegment280.children[0] = Transform281;

Shape Shape283 = createNode("Shape");
Appearance Appearance284 = createNode("Appearance");
Material Material285 = createNode("Material");
Material285.emissiveColor = new SFColor(new float[1,1,1]);
Appearance284.material = Material285;

Shape283.appearance = Appearance284;

IndexedLineSet IndexedLineSet286 = createNode("IndexedLineSet");
IndexedLineSet286.DEF = "tiptoe_r_tarsal_distal_interphalangeal_5";
IndexedLineSet286.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate287 = createNode("Coordinate");
Coordinate287.point = new MFVec3f(new float[-0.34,-1.05,0,-0.34,-1.08,0]);
IndexedLineSet286.coord = Coordinate287;

Shape283.geometry = IndexedLineSet286;

HAnimSegment280.children[1] = Shape283;

HAnimJoint279.children = new MFNode();

HAnimJoint279.children[0] = HAnimSegment280;

HAnimJoint270.children[1] = HAnimJoint279;

HAnimJoint261.children[1] = HAnimJoint270;

HAnimJoint252.children[1] = HAnimJoint261;

HAnimJoint202.children[2] = HAnimJoint252;

HAnimJoint193.children[1] = HAnimJoint202;

HAnimJoint31.children[2] = HAnimJoint193;

HAnimJoint30.children = new MFNode();

HAnimJoint30.children[0] = HAnimJoint31;

HAnimHumanoid27.joints[1] = HAnimJoint30;

HAnimJoint HAnimJoint288 = createNode("HAnimJoint");
HAnimJoint288.USE = "hanim_humanoid_root";
HAnimHumanoid27.joints[2] = HAnimJoint288;

HAnimJoint HAnimJoint289 = createNode("HAnimJoint");
HAnimJoint289.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid27.joints[3] = HAnimJoint289;

HAnimJoint HAnimJoint290 = createNode("HAnimJoint");
HAnimJoint290.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid27.joints[4] = HAnimJoint290;

HAnimJoint HAnimJoint291 = createNode("HAnimJoint");
HAnimJoint291.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid27.joints[5] = HAnimJoint291;

HAnimJoint HAnimJoint292 = createNode("HAnimJoint");
HAnimJoint292.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid27.joints[6] = HAnimJoint292;

HAnimJoint HAnimJoint293 = createNode("HAnimJoint");
HAnimJoint293.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid27.joints[7] = HAnimJoint293;

HAnimJoint HAnimJoint294 = createNode("HAnimJoint");
HAnimJoint294.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid27.joints[8] = HAnimJoint294;

HAnimJoint HAnimJoint295 = createNode("HAnimJoint");
HAnimJoint295.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid27.joints[9] = HAnimJoint295;

HAnimJoint HAnimJoint296 = createNode("HAnimJoint");
HAnimJoint296.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid27.joints[10] = HAnimJoint296;

HAnimJoint HAnimJoint297 = createNode("HAnimJoint");
HAnimJoint297.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid27.joints[11] = HAnimJoint297;

HAnimJoint HAnimJoint298 = createNode("HAnimJoint");
HAnimJoint298.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid27.joints[12] = HAnimJoint298;

HAnimJoint HAnimJoint299 = createNode("HAnimJoint");
HAnimJoint299.USE = "hanim_r_talocrural";
HAnimHumanoid27.joints[13] = HAnimJoint299;

HAnimJoint HAnimJoint300 = createNode("HAnimJoint");
HAnimJoint300.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid27.joints[14] = HAnimJoint300;

HAnimJoint HAnimJoint301 = createNode("HAnimJoint");
HAnimJoint301.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid27.joints[15] = HAnimJoint301;

HAnimJoint HAnimJoint302 = createNode("HAnimJoint");
HAnimJoint302.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid27.joints[16] = HAnimJoint302;

HAnimJoint HAnimJoint303 = createNode("HAnimJoint");
HAnimJoint303.USE = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimHumanoid27.joints[17] = HAnimJoint303;

HAnimJoint HAnimJoint304 = createNode("HAnimJoint");
HAnimJoint304.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid27.joints[18] = HAnimJoint304;

HAnimJoint HAnimJoint305 = createNode("HAnimJoint");
HAnimJoint305.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid27.joints[19] = HAnimJoint305;

HAnimJoint HAnimJoint306 = createNode("HAnimJoint");
HAnimJoint306.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid27.joints[20] = HAnimJoint306;

HAnimJoint HAnimJoint307 = createNode("HAnimJoint");
HAnimJoint307.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid27.joints[21] = HAnimJoint307;

HAnimJoint HAnimJoint308 = createNode("HAnimJoint");
HAnimJoint308.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimHumanoid27.joints[22] = HAnimJoint308;

HAnimJoint HAnimJoint309 = createNode("HAnimJoint");
HAnimJoint309.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid27.joints[23] = HAnimJoint309;

HAnimJoint HAnimJoint310 = createNode("HAnimJoint");
HAnimJoint310.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid27.joints[24] = HAnimJoint310;

HAnimJoint HAnimJoint311 = createNode("HAnimJoint");
HAnimJoint311.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid27.joints[25] = HAnimJoint311;

HAnimJoint HAnimJoint312 = createNode("HAnimJoint");
HAnimJoint312.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid27.joints[26] = HAnimJoint312;

HAnimJoint HAnimJoint313 = createNode("HAnimJoint");
HAnimJoint313.USE = "hanim_r_tarsometatarsal_5";
HAnimHumanoid27.joints[27] = HAnimJoint313;

HAnimJoint HAnimJoint314 = createNode("HAnimJoint");
HAnimJoint314.USE = "hanim_r_transversetarsal";
HAnimHumanoid27.joints[28] = HAnimJoint314;

children[1] = HAnimHumanoid27;

}

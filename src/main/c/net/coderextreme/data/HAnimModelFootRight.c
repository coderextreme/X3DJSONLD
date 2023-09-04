#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "HAnimModelFootRight.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Right foot, using high-fidelity definitions for HAnim version 2.0";
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
meta7.name = "warning";
meta7.content = "not yet to scale";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "warning";
meta8.content = "TODO will X3D HAnim component add a new level to support LOA-4 functionality?";
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
meta12.name = "TODO";
meta12.content = "Integrate and confirm Segment/Joint names, Viewpoints.";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "info";
meta13.content = "TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body";
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
meta21.name = "identifier";
meta21.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "generator";
meta22.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[20] = meta22;

component component23 = createNode("component");
component23.name = "HAnim";
component23.level = 1;
head1.component[21] = component23;

head = head1;

WorldInfo WorldInfo25 = createNode("WorldInfo");
WorldInfo25.title = "HAnimModelFootRight.x3d";
children = new MFNode();

children[0] = WorldInfo25;

HAnimHumanoid HAnimHumanoid26 = createNode("HAnimHumanoid");
HAnimHumanoid26.DEF = "hanim_Foot_Right";
HAnimHumanoid26.version = "2.0";
HAnimHumanoid26.name = "Foot_Right";
HAnimHumanoid26.loa = 4;
MetadataSet MetadataSet27 = createNode("MetadataSet");
MetadataSet27.name = "HAnimHumanoid.info";
MetadataSet27.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
MetadataString MetadataString28 = createNode("MetadataString");
MetadataString28.name = "authorName";
MetadataSet27.value = new MFNode();

MetadataSet27.value[0] = MetadataString28;

HAnimHumanoid26.metadata = new SFNode();

HAnimHumanoid26.metadata[0] = MetadataSet27;

HAnimJoint HAnimJoint29 = createNode("HAnimJoint");
HAnimJoint29.DEF = "hanim_humanoid_root";
HAnimJoint29.name = "humanoid_root";
HAnimJoint HAnimJoint30 = createNode("HAnimJoint");
HAnimJoint30.DEF = "hanim_r_talocrural";
HAnimJoint30.description = "connection joint of foot to leg above";
HAnimJoint30.name = "r_talocrural";
HAnimSegment HAnimSegment31 = createNode("HAnimSegment");
HAnimSegment31.DEF = "hanim_r_talus";
HAnimSegment31.name = "r_talus";
Transform Transform32 = createNode("Transform");
Shape Shape33 = createNode("Shape");
Shape33.DEF = "HAnimJointShape";
Appearance Appearance34 = createNode("Appearance");
Appearance34.DEF = "HAnimJointAppearance";
Material Material35 = createNode("Material");
Material35.diffuseColor = new SFColor(new float[0,0,1]);
Appearance34.material = Material35;

Shape33.appearance = Appearance34;

Sphere Sphere36 = createNode("Sphere");
Sphere36.radius = 0.025;
Shape33.geometry = Sphere36;

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
IndexedLineSet40.DEF = "TCtoTCN";
IndexedLineSet40.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate41 = createNode("Coordinate");
Coordinate41.point = new MFVec3f(new float[0,0,0,0,-0.3,0]);
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
IndexedLineSet45.DEF = "TCtoCC";
IndexedLineSet45.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate46 = createNode("Coordinate");
Coordinate46.point = new MFVec3f(new float[0,0,0,-0.2,0.3,0]);
IndexedLineSet45.coord = Coordinate46;

Shape42.geometry = IndexedLineSet45;

HAnimSegment31.children[2] = Shape42;

HAnimJoint30.children = new MFNode();

HAnimJoint30.children[0] = HAnimSegment31;

HAnimJoint HAnimJoint47 = createNode("HAnimJoint");
HAnimJoint47.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint47.name = "r_talocalcaneonavicular";
HAnimJoint47.center = new SFVec3f(new float[0,-0.3,0]);
HAnimSegment HAnimSegment48 = createNode("HAnimSegment");
HAnimSegment48.DEF = "hanim_r_navicular";
HAnimSegment48.name = "r_navicular";
Transform Transform49 = createNode("Transform");
Transform49.translation = new SFVec3f(new float[0,-0.3,0]);
Shape Shape50 = createNode("Shape");
Shape50.USE = "HAnimJointShape";
Transform49.child = new undefined();

Transform49.child[0] = Shape50;

HAnimSegment48.children = new MFNode();

HAnimSegment48.children[0] = Transform49;

Shape Shape51 = createNode("Shape");
Appearance Appearance52 = createNode("Appearance");
Material Material53 = createNode("Material");
Material53.emissiveColor = new SFColor(new float[1,1,1]);
Appearance52.material = Material53;

Shape51.appearance = Appearance52;

IndexedLineSet IndexedLineSet54 = createNode("IndexedLineSet");
IndexedLineSet54.DEF = "TCNtoCN1";
IndexedLineSet54.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate55 = createNode("Coordinate");
Coordinate55.point = new MFVec3f(new float[0,-0.3,0,0.1,-0.45,0]);
IndexedLineSet54.coord = Coordinate55;

Shape51.geometry = IndexedLineSet54;

HAnimSegment48.children[1] = Shape51;

Shape Shape56 = createNode("Shape");
Appearance Appearance57 = createNode("Appearance");
Material Material58 = createNode("Material");
Material58.emissiveColor = new SFColor(new float[1,1,1]);
Appearance57.material = Material58;

Shape56.appearance = Appearance57;

IndexedLineSet IndexedLineSet59 = createNode("IndexedLineSet");
IndexedLineSet59.DEF = "TCNtoCN2";
IndexedLineSet59.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate60 = createNode("Coordinate");
Coordinate60.point = new MFVec3f(new float[0,-0.3,0,0,-0.45,0]);
IndexedLineSet59.coord = Coordinate60;

Shape56.geometry = IndexedLineSet59;

HAnimSegment48.children[2] = Shape56;

Shape Shape61 = createNode("Shape");
Appearance Appearance62 = createNode("Appearance");
Material Material63 = createNode("Material");
Material63.emissiveColor = new SFColor(new float[1,1,1]);
Appearance62.material = Material63;

Shape61.appearance = Appearance62;

IndexedLineSet IndexedLineSet64 = createNode("IndexedLineSet");
IndexedLineSet64.DEF = "TCNtoCN3";
IndexedLineSet64.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate65 = createNode("Coordinate");
Coordinate65.point = new MFVec3f(new float[0,-0.3,0,-0.1,-0.4,0]);
IndexedLineSet64.coord = Coordinate65;

Shape61.geometry = IndexedLineSet64;

HAnimSegment48.children[3] = Shape61;

HAnimJoint47.children = new MFNode();

HAnimJoint47.children[0] = HAnimSegment48;

HAnimJoint HAnimJoint66 = createNode("HAnimJoint");
HAnimJoint66.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint66.name = "r_cuneonavicular_1";
HAnimJoint66.center = new SFVec3f(new float[0.1,-0.45,0]);
HAnimSegment HAnimSegment67 = createNode("HAnimSegment");
HAnimSegment67.DEF = "hanim_r_cuneiform_1";
HAnimSegment67.name = "r_cuneiform_1";
Transform Transform68 = createNode("Transform");
Transform68.translation = new SFVec3f(new float[0.1,-0.45,0]);
Shape Shape69 = createNode("Shape");
Shape69.USE = "HAnimJointShape";
Transform68.child = new undefined();

Transform68.child[0] = Shape69;

HAnimSegment67.children = new MFNode();

HAnimSegment67.children[0] = Transform68;

Shape Shape70 = createNode("Shape");
Appearance Appearance71 = createNode("Appearance");
Material Material72 = createNode("Material");
Material72.emissiveColor = new SFColor(new float[1,1,1]);
Appearance71.material = Material72;

Shape70.appearance = Appearance71;

IndexedLineSet IndexedLineSet73 = createNode("IndexedLineSet");
IndexedLineSet73.DEF = "CN1toTMT1";
IndexedLineSet73.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate74 = createNode("Coordinate");
Coordinate74.point = new MFVec3f(new float[0.1,-0.45,0,0.1,-0.6,0]);
IndexedLineSet73.coord = Coordinate74;

Shape70.geometry = IndexedLineSet73;

HAnimSegment67.children[1] = Shape70;

HAnimJoint66.children = new MFNode();

HAnimJoint66.children[0] = HAnimSegment67;

HAnimJoint HAnimJoint75 = createNode("HAnimJoint");
HAnimJoint75.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint75.name = "r_tarsometatarsal_1";
HAnimJoint75.center = new SFVec3f(new float[0.1,-0.6,0]);
HAnimSegment HAnimSegment76 = createNode("HAnimSegment");
HAnimSegment76.DEF = "hanim_r_metatarsal_1";
HAnimSegment76.name = "r_metatarsal_1";
Transform Transform77 = createNode("Transform");
Transform77.translation = new SFVec3f(new float[0.1,-0.6,0]);
Shape Shape78 = createNode("Shape");
Shape78.USE = "HAnimJointShape";
Transform77.child = new undefined();

Transform77.child[0] = Shape78;

HAnimSegment76.children = new MFNode();

HAnimSegment76.children[0] = Transform77;

Shape Shape79 = createNode("Shape");
Appearance Appearance80 = createNode("Appearance");
Material Material81 = createNode("Material");
Material81.emissiveColor = new SFColor(new float[1,1,1]);
Appearance80.material = Material81;

Shape79.appearance = Appearance80;

IndexedLineSet IndexedLineSet82 = createNode("IndexedLineSet");
IndexedLineSet82.DEF = "TMT1toMTP1";
IndexedLineSet82.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate83 = createNode("Coordinate");
Coordinate83.point = new MFVec3f(new float[0.1,-0.6,0,0.1,-0.9,0]);
IndexedLineSet82.coord = Coordinate83;

Shape79.geometry = IndexedLineSet82;

HAnimSegment76.children[1] = Shape79;

HAnimJoint75.children = new MFNode();

HAnimJoint75.children[0] = HAnimSegment76;

HAnimJoint HAnimJoint84 = createNode("HAnimJoint");
HAnimJoint84.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint84.name = "r_metatarsophalangeal_1";
HAnimJoint84.center = new SFVec3f(new float[0.1,-0.9,0]);
HAnimSegment HAnimSegment85 = createNode("HAnimSegment");
HAnimSegment85.DEF = "hanim_r_tarsal_proximal_phalanx_1";
HAnimSegment85.name = "r_tarsal_proximal_phalanx_1";
Transform Transform86 = createNode("Transform");
Transform86.translation = new SFVec3f(new float[0.1,-0.9,0]);
Shape Shape87 = createNode("Shape");
Shape87.USE = "HAnimJointShape";
Transform86.child = new undefined();

Transform86.child[0] = Shape87;

HAnimSegment85.children = new MFNode();

HAnimSegment85.children[0] = Transform86;

Shape Shape88 = createNode("Shape");
Appearance Appearance89 = createNode("Appearance");
Material Material90 = createNode("Material");
Material90.emissiveColor = new SFColor(new float[1,1,1]);
Appearance89.material = Material90;

Shape88.appearance = Appearance89;

IndexedLineSet IndexedLineSet91 = createNode("IndexedLineSet");
IndexedLineSet91.DEF = "MTP1toIP1";
IndexedLineSet91.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate92 = createNode("Coordinate");
Coordinate92.point = new MFVec3f(new float[0.1,-0.9,0,0.1,-1.05,0]);
IndexedLineSet91.coord = Coordinate92;

Shape88.geometry = IndexedLineSet91;

HAnimSegment85.children[1] = Shape88;

HAnimJoint84.children = new MFNode();

HAnimJoint84.children[0] = HAnimSegment85;

HAnimJoint HAnimJoint93 = createNode("HAnimJoint");
HAnimJoint93.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint93.name = "r_tarsal_interphalangeal_1";
HAnimJoint93.center = new SFVec3f(new float[0.1,-1.05,0]);
HAnimSegment HAnimSegment94 = createNode("HAnimSegment");
HAnimSegment94.DEF = "hanim_r_tarsal_distal_phalanx_1";
HAnimSegment94.name = "r_tarsal_distal_phalanx_1";
Transform Transform95 = createNode("Transform");
Transform95.translation = new SFVec3f(new float[0.1,-1.05,0]);
Shape Shape96 = createNode("Shape");
Shape96.USE = "HAnimJointShape";
Transform95.child = new undefined();

Transform95.child[0] = Shape96;

HAnimSegment94.children = new MFNode();

HAnimSegment94.children[0] = Transform95;

Shape Shape97 = createNode("Shape");
Appearance Appearance98 = createNode("Appearance");
Material Material99 = createNode("Material");
Material99.emissiveColor = new SFColor(new float[1,1,1]);
Appearance98.material = Material99;

Shape97.appearance = Appearance98;

IndexedLineSet IndexedLineSet100 = createNode("IndexedLineSet");
IndexedLineSet100.DEF = "tiptoe_r_interphalangeal_";
IndexedLineSet100.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate101 = createNode("Coordinate");
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

HAnimJoint HAnimJoint102 = createNode("HAnimJoint");
HAnimJoint102.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint102.name = "r_cuneonavicular_2";
HAnimJoint102.center = new SFVec3f(new float[0,-0.45,0]);
HAnimSegment HAnimSegment103 = createNode("HAnimSegment");
HAnimSegment103.DEF = "hanim_r_cuneiform_2";
HAnimSegment103.name = "r_cuneiform_2";
Transform Transform104 = createNode("Transform");
Transform104.translation = new SFVec3f(new float[0,-0.45,0]);
Shape Shape105 = createNode("Shape");
Shape105.USE = "HAnimJointShape";
Transform104.child = new undefined();

Transform104.child[0] = Shape105;

HAnimSegment103.children = new MFNode();

HAnimSegment103.children[0] = Transform104;

Shape Shape106 = createNode("Shape");
Appearance Appearance107 = createNode("Appearance");
Material Material108 = createNode("Material");
Material108.emissiveColor = new SFColor(new float[1,1,1]);
Appearance107.material = Material108;

Shape106.appearance = Appearance107;

IndexedLineSet IndexedLineSet109 = createNode("IndexedLineSet");
IndexedLineSet109.DEF = "CN2toTMT2";
IndexedLineSet109.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate110 = createNode("Coordinate");
Coordinate110.point = new MFVec3f(new float[0,-0.45,0,-0.05,-0.6,0]);
IndexedLineSet109.coord = Coordinate110;

Shape106.geometry = IndexedLineSet109;

HAnimSegment103.children[1] = Shape106;

HAnimJoint102.children = new MFNode();

HAnimJoint102.children[0] = HAnimSegment103;

HAnimJoint HAnimJoint111 = createNode("HAnimJoint");
HAnimJoint111.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint111.name = "r_tarsometatarsal_2";
HAnimJoint111.center = new SFVec3f(new float[-0.05,-0.6,0]);
HAnimSegment HAnimSegment112 = createNode("HAnimSegment");
HAnimSegment112.DEF = "hanim_r_metatarsal_2";
HAnimSegment112.name = "r_metatarsal_2";
Transform Transform113 = createNode("Transform");
Transform113.translation = new SFVec3f(new float[-0.05,-0.6,0]);
Shape Shape114 = createNode("Shape");
Shape114.USE = "HAnimJointShape";
Transform113.child = new undefined();

Transform113.child[0] = Shape114;

HAnimSegment112.children = new MFNode();

HAnimSegment112.children[0] = Transform113;

Shape Shape115 = createNode("Shape");
Appearance Appearance116 = createNode("Appearance");
Material Material117 = createNode("Material");
Material117.emissiveColor = new SFColor(new float[1,1,1]);
Appearance116.material = Material117;

Shape115.appearance = Appearance116;

IndexedLineSet IndexedLineSet118 = createNode("IndexedLineSet");
IndexedLineSet118.DEF = "TMT2toMTP2";
IndexedLineSet118.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate119 = createNode("Coordinate");
Coordinate119.point = new MFVec3f(new float[-0.05,-0.6,0,-0.05,-0.9,0]);
IndexedLineSet118.coord = Coordinate119;

Shape115.geometry = IndexedLineSet118;

HAnimSegment112.children[1] = Shape115;

HAnimJoint111.children = new MFNode();

HAnimJoint111.children[0] = HAnimSegment112;

HAnimJoint HAnimJoint120 = createNode("HAnimJoint");
HAnimJoint120.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint120.name = "r_metatarsophalangeal_2";
HAnimJoint120.center = new SFVec3f(new float[-0.05,-0.9,0]);
HAnimSegment HAnimSegment121 = createNode("HAnimSegment");
HAnimSegment121.DEF = "hanim_r_tarsal_proximal_phalanx_2";
HAnimSegment121.name = "r_tarsal_proximal_phalanx_2";
Transform Transform122 = createNode("Transform");
Transform122.translation = new SFVec3f(new float[-0.05,-0.9,0]);
Shape Shape123 = createNode("Shape");
Shape123.USE = "HAnimJointShape";
Transform122.child = new undefined();

Transform122.child[0] = Shape123;

HAnimSegment121.children = new MFNode();

HAnimSegment121.children[0] = Transform122;

Shape Shape124 = createNode("Shape");
Appearance Appearance125 = createNode("Appearance");
Material Material126 = createNode("Material");
Material126.emissiveColor = new SFColor(new float[1,1,1]);
Appearance125.material = Material126;

Shape124.appearance = Appearance125;

IndexedLineSet IndexedLineSet127 = createNode("IndexedLineSet");
IndexedLineSet127.DEF = "MTP2toPIP2";
IndexedLineSet127.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate128 = createNode("Coordinate");
Coordinate128.point = new MFVec3f(new float[-0.05,-0.9,0,-0.05,-1.05,0]);
IndexedLineSet127.coord = Coordinate128;

Shape124.geometry = IndexedLineSet127;

HAnimSegment121.children[1] = Shape124;

HAnimJoint120.children = new MFNode();

HAnimJoint120.children[0] = HAnimSegment121;

HAnimJoint HAnimJoint129 = createNode("HAnimJoint");
HAnimJoint129.DEF = "hanim_r_tarsal_proximal_interphalangeal_1";
HAnimJoint129.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint129.center = new SFVec3f(new float[-0.05,-1.05,0]);
HAnimSegment HAnimSegment130 = createNode("HAnimSegment");
HAnimSegment130.DEF = "hanim_r_tarsal_middle_phalanx_1";
HAnimSegment130.name = "r_tarsal_middle_phalanx_2";
Transform Transform131 = createNode("Transform");
Transform131.translation = new SFVec3f(new float[-0.05,-1.05,0]);
Shape Shape132 = createNode("Shape");
Shape132.USE = "HAnimJointShape";
Transform131.child = new undefined();

Transform131.child[0] = Shape132;

HAnimSegment130.children = new MFNode();

HAnimSegment130.children[0] = Transform131;

Shape Shape133 = createNode("Shape");
Appearance Appearance134 = createNode("Appearance");
Material Material135 = createNode("Material");
Material135.emissiveColor = new SFColor(new float[1,1,1]);
Appearance134.material = Material135;

Shape133.appearance = Appearance134;

IndexedLineSet IndexedLineSet136 = createNode("IndexedLineSet");
IndexedLineSet136.DEF = "PIP2toDIP2";
IndexedLineSet136.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate137 = createNode("Coordinate");
Coordinate137.point = new MFVec3f(new float[-0.05,-1.05,0,-0.05,-1.12,0]);
IndexedLineSet136.coord = Coordinate137;

Shape133.geometry = IndexedLineSet136;

HAnimSegment130.children[1] = Shape133;

HAnimJoint129.children = new MFNode();

HAnimJoint129.children[0] = HAnimSegment130;

HAnimJoint HAnimJoint138 = createNode("HAnimJoint");
HAnimJoint138.DEF = "hanim_r_tarsal_distal_interphalangeal_1";
HAnimJoint138.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint138.center = new SFVec3f(new float[-0.05,-1.12,0]);
HAnimSegment HAnimSegment139 = createNode("HAnimSegment");
HAnimSegment139.DEF = "hanim_r_tarsal_distal_phalanx_2";
HAnimSegment139.name = "r_tarsal_distal_phalanx_2";
Transform Transform140 = createNode("Transform");
Transform140.translation = new SFVec3f(new float[-0.05,-1.12,0]);
Shape Shape141 = createNode("Shape");
Shape141.USE = "HAnimJointShape";
Transform140.child = new undefined();

Transform140.child[0] = Shape141;

HAnimSegment139.children = new MFNode();

HAnimSegment139.children[0] = Transform140;

Shape Shape142 = createNode("Shape");
Appearance Appearance143 = createNode("Appearance");
Material Material144 = createNode("Material");
Material144.emissiveColor = new SFColor(new float[1,1,1]);
Appearance143.material = Material144;

Shape142.appearance = Appearance143;

IndexedLineSet IndexedLineSet145 = createNode("IndexedLineSet");
IndexedLineSet145.DEF = "tiptoe_r_tarsal_distal_interphalangeal_1";
IndexedLineSet145.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate146 = createNode("Coordinate");
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

HAnimJoint HAnimJoint147 = createNode("HAnimJoint");
HAnimJoint147.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint147.name = "r_cuneonavicular_3";
HAnimJoint147.center = new SFVec3f(new float[-0.1,-0.4,0]);
HAnimSegment HAnimSegment148 = createNode("HAnimSegment");
HAnimSegment148.DEF = "hanim_r_cuneiform_3";
HAnimSegment148.name = "r_cuneiform_3";
Transform Transform149 = createNode("Transform");
Transform149.translation = new SFVec3f(new float[-0.1,-0.4,0]);
Shape Shape150 = createNode("Shape");
Shape150.USE = "HAnimJointShape";
Transform149.child = new undefined();

Transform149.child[0] = Shape150;

HAnimSegment148.children = new MFNode();

HAnimSegment148.children[0] = Transform149;

Shape Shape151 = createNode("Shape");
Appearance Appearance152 = createNode("Appearance");
Material Material153 = createNode("Material");
Material153.emissiveColor = new SFColor(new float[1,1,1]);
Appearance152.material = Material153;

Shape151.appearance = Appearance152;

IndexedLineSet IndexedLineSet154 = createNode("IndexedLineSet");
IndexedLineSet154.DEF = "CN3toTMT3";
IndexedLineSet154.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate155 = createNode("Coordinate");
Coordinate155.point = new MFVec3f(new float[-0.1,-0.4,0,-0.15,-0.6,0]);
IndexedLineSet154.coord = Coordinate155;

Shape151.geometry = IndexedLineSet154;

HAnimSegment148.children[1] = Shape151;

HAnimJoint147.children = new MFNode();

HAnimJoint147.children[0] = HAnimSegment148;

HAnimJoint HAnimJoint156 = createNode("HAnimJoint");
HAnimJoint156.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint156.name = "r_tarsometatarsal_3";
HAnimJoint156.center = new SFVec3f(new float[-0.15,-0.6,0]);
HAnimSegment HAnimSegment157 = createNode("HAnimSegment");
HAnimSegment157.DEF = "hanim_r_metatarsal_3";
HAnimSegment157.name = "r_metatarsal_3";
Transform Transform158 = createNode("Transform");
Transform158.translation = new SFVec3f(new float[-0.15,-0.6,0]);
Shape Shape159 = createNode("Shape");
Shape159.USE = "HAnimJointShape";
Transform158.child = new undefined();

Transform158.child[0] = Shape159;

HAnimSegment157.children = new MFNode();

HAnimSegment157.children[0] = Transform158;

Shape Shape160 = createNode("Shape");
Appearance Appearance161 = createNode("Appearance");
Material Material162 = createNode("Material");
Material162.emissiveColor = new SFColor(new float[1,1,1]);
Appearance161.material = Material162;

Shape160.appearance = Appearance161;

IndexedLineSet IndexedLineSet163 = createNode("IndexedLineSet");
IndexedLineSet163.DEF = "TMT3toMTP3";
IndexedLineSet163.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate164 = createNode("Coordinate");
Coordinate164.point = new MFVec3f(new float[-0.15,-0.6,0,-0.15,-0.9,0]);
IndexedLineSet163.coord = Coordinate164;

Shape160.geometry = IndexedLineSet163;

HAnimSegment157.children[1] = Shape160;

HAnimJoint156.children = new MFNode();

HAnimJoint156.children[0] = HAnimSegment157;

HAnimJoint HAnimJoint165 = createNode("HAnimJoint");
HAnimJoint165.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint165.name = "r_metatarsophalangeal_3";
HAnimJoint165.center = new SFVec3f(new float[-0.15,-0.9,0]);
HAnimSegment HAnimSegment166 = createNode("HAnimSegment");
HAnimSegment166.DEF = "hanim_r_tarsal_proximal_phalanx_3";
HAnimSegment166.name = "r_tarsal_proximal_phalanx_3";
Transform Transform167 = createNode("Transform");
Transform167.translation = new SFVec3f(new float[-0.15,-0.9,0]);
Shape Shape168 = createNode("Shape");
Shape168.USE = "HAnimJointShape";
Transform167.child = new undefined();

Transform167.child[0] = Shape168;

HAnimSegment166.children = new MFNode();

HAnimSegment166.children[0] = Transform167;

Shape Shape169 = createNode("Shape");
Appearance Appearance170 = createNode("Appearance");
Material Material171 = createNode("Material");
Material171.emissiveColor = new SFColor(new float[1,1,1]);
Appearance170.material = Material171;

Shape169.appearance = Appearance170;

IndexedLineSet IndexedLineSet172 = createNode("IndexedLineSet");
IndexedLineSet172.DEF = "MTP3toPIP3";
IndexedLineSet172.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate173 = createNode("Coordinate");
Coordinate173.point = new MFVec3f(new float[-0.15,-0.9,0,-0.15,-1.05,0]);
IndexedLineSet172.coord = Coordinate173;

Shape169.geometry = IndexedLineSet172;

HAnimSegment166.children[1] = Shape169;

HAnimJoint165.children = new MFNode();

HAnimJoint165.children[0] = HAnimSegment166;

HAnimJoint HAnimJoint174 = createNode("HAnimJoint");
HAnimJoint174.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint174.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint174.center = new SFVec3f(new float[-0.15,-1.05,0]);
HAnimSegment HAnimSegment175 = createNode("HAnimSegment");
HAnimSegment175.DEF = "hanim_r_tarsal_middle_phalanx_2";
HAnimSegment175.name = "r_tarsal_middle_phalanx_3";
Transform Transform176 = createNode("Transform");
Transform176.translation = new SFVec3f(new float[-0.15,-1.05,0]);
Shape Shape177 = createNode("Shape");
Shape177.USE = "HAnimJointShape";
Transform176.child = new undefined();

Transform176.child[0] = Shape177;

HAnimSegment175.children = new MFNode();

HAnimSegment175.children[0] = Transform176;

Shape Shape178 = createNode("Shape");
Appearance Appearance179 = createNode("Appearance");
Material Material180 = createNode("Material");
Material180.emissiveColor = new SFColor(new float[1,1,1]);
Appearance179.material = Material180;

Shape178.appearance = Appearance179;

IndexedLineSet IndexedLineSet181 = createNode("IndexedLineSet");
IndexedLineSet181.DEF = "PIP3toDIP3";
IndexedLineSet181.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate182 = createNode("Coordinate");
Coordinate182.point = new MFVec3f(new float[-0.15,-1.05,0,-0.15,-1.13,0]);
IndexedLineSet181.coord = Coordinate182;

Shape178.geometry = IndexedLineSet181;

HAnimSegment175.children[1] = Shape178;

HAnimJoint174.children = new MFNode();

HAnimJoint174.children[0] = HAnimSegment175;

HAnimJoint HAnimJoint183 = createNode("HAnimJoint");
HAnimJoint183.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint183.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint183.center = new SFVec3f(new float[-0.15,-1.13,0]);
HAnimSegment HAnimSegment184 = createNode("HAnimSegment");
HAnimSegment184.DEF = "hanim_r_tarsal_distal_phalanx_3";
HAnimSegment184.name = "r_tarsal_distal_phalanx_3";
Transform Transform185 = createNode("Transform");
Transform185.translation = new SFVec3f(new float[-0.15,-1.13,0]);
Shape Shape186 = createNode("Shape");
Shape186.USE = "HAnimJointShape";
Transform185.child = new undefined();

Transform185.child[0] = Shape186;

HAnimSegment184.children = new MFNode();

HAnimSegment184.children[0] = Transform185;

Shape Shape187 = createNode("Shape");
Appearance Appearance188 = createNode("Appearance");
Material Material189 = createNode("Material");
Material189.emissiveColor = new SFColor(new float[1,1,1]);
Appearance188.material = Material189;

Shape187.appearance = Appearance188;

IndexedLineSet IndexedLineSet190 = createNode("IndexedLineSet");
IndexedLineSet190.DEF = "tiptoe_r_tarsal_distal_interphalangeal_2";
IndexedLineSet190.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate191 = createNode("Coordinate");
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

HAnimJoint HAnimJoint192 = createNode("HAnimJoint");
HAnimJoint192.DEF = "hanim_r_calcaneocuboid";
HAnimJoint192.name = "r_calcaneocuboid";
HAnimJoint192.center = new SFVec3f(new float[-0.2,0.3,0]);
HAnimSegment HAnimSegment193 = createNode("HAnimSegment");
HAnimSegment193.DEF = "hanim_r_calcaneus";
HAnimSegment193.name = "r_calcaneus";
Transform Transform194 = createNode("Transform");
Transform194.translation = new SFVec3f(new float[-0.2,0.3,0]);
Shape Shape195 = createNode("Shape");
Shape195.USE = "HAnimJointShape";
Transform194.child = new undefined();

Transform194.child[0] = Shape195;

HAnimSegment193.children = new MFNode();

HAnimSegment193.children[0] = Transform194;

Shape Shape196 = createNode("Shape");
Appearance Appearance197 = createNode("Appearance");
Material Material198 = createNode("Material");
Material198.emissiveColor = new SFColor(new float[1,1,1]);
Appearance197.material = Material198;

Shape196.appearance = Appearance197;

IndexedLineSet IndexedLineSet199 = createNode("IndexedLineSet");
IndexedLineSet199.DEF = "CCtoTT";
IndexedLineSet199.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate200 = createNode("Coordinate");
Coordinate200.point = new MFVec3f(new float[-0.2,0.3,0,-0.21,-0.3,0]);
IndexedLineSet199.coord = Coordinate200;

Shape196.geometry = IndexedLineSet199;

HAnimSegment193.children[1] = Shape196;

HAnimJoint192.children = new MFNode();

HAnimJoint192.children[0] = HAnimSegment193;

HAnimJoint HAnimJoint201 = createNode("HAnimJoint");
HAnimJoint201.DEF = "hanim_r_transversetarsal";
HAnimJoint201.name = "r_transversetarsal";
HAnimJoint201.center = new SFVec3f(new float[-0.21,-0.3,0]);
HAnimSegment HAnimSegment202 = createNode("HAnimSegment");
HAnimSegment202.DEF = "hanim_r_cuboid";
HAnimSegment202.name = "r_cuboid";
Transform Transform203 = createNode("Transform");
Transform203.translation = new SFVec3f(new float[-0.21,-0.3,0]);
Shape Shape204 = createNode("Shape");
Shape204.USE = "HAnimJointShape";
Transform203.child = new undefined();

Transform203.child[0] = Shape204;

HAnimSegment202.children = new MFNode();

HAnimSegment202.children[0] = Transform203;

Shape Shape205 = createNode("Shape");
Appearance Appearance206 = createNode("Appearance");
Material Material207 = createNode("Material");
Material207.emissiveColor = new SFColor(new float[1,1,1]);
Appearance206.material = Material207;

Shape205.appearance = Appearance206;

IndexedLineSet IndexedLineSet208 = createNode("IndexedLineSet");
IndexedLineSet208.DEF = "TTtoTMT4";
IndexedLineSet208.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate209 = createNode("Coordinate");
Coordinate209.point = new MFVec3f(new float[-0.21,-0.3,0,-0.25,-0.58,0]);
IndexedLineSet208.coord = Coordinate209;

Shape205.geometry = IndexedLineSet208;

HAnimSegment202.children[1] = Shape205;

Shape Shape210 = createNode("Shape");
Appearance Appearance211 = createNode("Appearance");
Material Material212 = createNode("Material");
Material212.emissiveColor = new SFColor(new float[1,1,1]);
Appearance211.material = Material212;

Shape210.appearance = Appearance211;

IndexedLineSet IndexedLineSet213 = createNode("IndexedLineSet");
IndexedLineSet213.DEF = "TTtoTMT5";
IndexedLineSet213.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate214 = createNode("Coordinate");
Coordinate214.point = new MFVec3f(new float[-0.21,-0.3,0,-0.33,-0.52,0]);
IndexedLineSet213.coord = Coordinate214;

Shape210.geometry = IndexedLineSet213;

HAnimSegment202.children[2] = Shape210;

HAnimJoint201.children = new MFNode();

HAnimJoint201.children[0] = HAnimSegment202;

HAnimJoint HAnimJoint215 = createNode("HAnimJoint");
HAnimJoint215.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint215.name = "r_tarsometatarsal_4";
HAnimJoint215.center = new SFVec3f(new float[-0.25,-0.58,0]);
HAnimSegment HAnimSegment216 = createNode("HAnimSegment");
HAnimSegment216.DEF = "hanim_r_metatarsal_4";
HAnimSegment216.name = "r_metatarsal_4";
Transform Transform217 = createNode("Transform");
Transform217.translation = new SFVec3f(new float[-0.25,-0.58,0]);
Shape Shape218 = createNode("Shape");
Shape218.USE = "HAnimJointShape";
Transform217.child = new undefined();

Transform217.child[0] = Shape218;

HAnimSegment216.children = new MFNode();

HAnimSegment216.children[0] = Transform217;

Shape Shape219 = createNode("Shape");
Appearance Appearance220 = createNode("Appearance");
Material Material221 = createNode("Material");
Material221.emissiveColor = new SFColor(new float[1,1,1]);
Appearance220.material = Material221;

Shape219.appearance = Appearance220;

IndexedLineSet IndexedLineSet222 = createNode("IndexedLineSet");
IndexedLineSet222.DEF = "TMT4toMTP4";
IndexedLineSet222.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate223 = createNode("Coordinate");
Coordinate223.point = new MFVec3f(new float[-0.25,-0.58,0,-0.25,-0.87,0]);
IndexedLineSet222.coord = Coordinate223;

Shape219.geometry = IndexedLineSet222;

HAnimSegment216.children[1] = Shape219;

HAnimJoint215.children = new MFNode();

HAnimJoint215.children[0] = HAnimSegment216;

HAnimJoint HAnimJoint224 = createNode("HAnimJoint");
HAnimJoint224.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint224.name = "r_metatarsophalangeal_4";
HAnimJoint224.center = new SFVec3f(new float[-0.25,-0.87,0]);
HAnimSegment HAnimSegment225 = createNode("HAnimSegment");
HAnimSegment225.DEF = "hanim_r_tarsal_proximal_phalanx_4";
HAnimSegment225.name = "r_tarsal_proximal_phalanx_4";
Transform Transform226 = createNode("Transform");
Transform226.translation = new SFVec3f(new float[-0.25,-0.87,0]);
Shape Shape227 = createNode("Shape");
Shape227.USE = "HAnimJointShape";
Transform226.child = new undefined();

Transform226.child[0] = Shape227;

HAnimSegment225.children = new MFNode();

HAnimSegment225.children[0] = Transform226;

Shape Shape228 = createNode("Shape");
Appearance Appearance229 = createNode("Appearance");
Material Material230 = createNode("Material");
Material230.emissiveColor = new SFColor(new float[1,1,1]);
Appearance229.material = Material230;

Shape228.appearance = Appearance229;

IndexedLineSet IndexedLineSet231 = createNode("IndexedLineSet");
IndexedLineSet231.DEF = "MTP4toPIP4";
IndexedLineSet231.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate232 = createNode("Coordinate");
Coordinate232.point = new MFVec3f(new float[-0.25,-0.87,0,-0.25,-1,0]);
IndexedLineSet231.coord = Coordinate232;

Shape228.geometry = IndexedLineSet231;

HAnimSegment225.children[1] = Shape228;

HAnimJoint224.children = new MFNode();

HAnimJoint224.children[0] = HAnimSegment225;

HAnimJoint HAnimJoint233 = createNode("HAnimJoint");
HAnimJoint233.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint233.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint233.center = new SFVec3f(new float[-0.25,-1,0]);
HAnimSegment HAnimSegment234 = createNode("HAnimSegment");
HAnimSegment234.DEF = "hanim_r_tarsal_middle_phalanx_3";
HAnimSegment234.name = "r_tarsal_middle_phalanx_4";
Transform Transform235 = createNode("Transform");
Transform235.translation = new SFVec3f(new float[-0.25,-1,0]);
Shape Shape236 = createNode("Shape");
Shape236.USE = "HAnimJointShape";
Transform235.child = new undefined();

Transform235.child[0] = Shape236;

HAnimSegment234.children = new MFNode();

HAnimSegment234.children[0] = Transform235;

Shape Shape237 = createNode("Shape");
Appearance Appearance238 = createNode("Appearance");
Material Material239 = createNode("Material");
Material239.emissiveColor = new SFColor(new float[1,1,1]);
Appearance238.material = Material239;

Shape237.appearance = Appearance238;

IndexedLineSet IndexedLineSet240 = createNode("IndexedLineSet");
IndexedLineSet240.DEF = "PIP4toDIP4";
IndexedLineSet240.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate241 = createNode("Coordinate");
Coordinate241.point = new MFVec3f(new float[-0.25,-1,0,-0.25,-1.1,0]);
IndexedLineSet240.coord = Coordinate241;

Shape237.geometry = IndexedLineSet240;

HAnimSegment234.children[1] = Shape237;

HAnimJoint233.children = new MFNode();

HAnimJoint233.children[0] = HAnimSegment234;

HAnimJoint HAnimJoint242 = createNode("HAnimJoint");
HAnimJoint242.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint242.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint242.center = new SFVec3f(new float[-0.25,-1.1,0]);
HAnimSegment HAnimSegment243 = createNode("HAnimSegment");
HAnimSegment243.DEF = "hanim_r_tarsal_distal_phalanx_4";
HAnimSegment243.name = "r_tarsal_distal_phalanx_4";
Transform Transform244 = createNode("Transform");
Transform244.translation = new SFVec3f(new float[-0.25,-1.1,0]);
Shape Shape245 = createNode("Shape");
Shape245.USE = "HAnimJointShape";
Transform244.child = new undefined();

Transform244.child[0] = Shape245;

HAnimSegment243.children = new MFNode();

HAnimSegment243.children[0] = Transform244;

Shape Shape246 = createNode("Shape");
Appearance Appearance247 = createNode("Appearance");
Material Material248 = createNode("Material");
Material248.emissiveColor = new SFColor(new float[1,1,1]);
Appearance247.material = Material248;

Shape246.appearance = Appearance247;

IndexedLineSet IndexedLineSet249 = createNode("IndexedLineSet");
IndexedLineSet249.DEF = "tiptoe_r_tarsal_distal_interphalangeal_3";
IndexedLineSet249.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate250 = createNode("Coordinate");
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

HAnimJoint HAnimJoint251 = createNode("HAnimJoint");
HAnimJoint251.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint251.name = "r_tarsometatarsal_5";
HAnimJoint251.center = new SFVec3f(new float[-0.33,-0.52,0]);
HAnimSegment HAnimSegment252 = createNode("HAnimSegment");
HAnimSegment252.DEF = "hanim_r_metatarsal_5";
HAnimSegment252.name = "r_metatarsal_5";
Transform Transform253 = createNode("Transform");
Transform253.translation = new SFVec3f(new float[-0.33,-0.52,0]);
Shape Shape254 = createNode("Shape");
Shape254.USE = "HAnimJointShape";
Transform253.child = new undefined();

Transform253.child[0] = Shape254;

HAnimSegment252.children = new MFNode();

HAnimSegment252.children[0] = Transform253;

Shape Shape255 = createNode("Shape");
Appearance Appearance256 = createNode("Appearance");
Material Material257 = createNode("Material");
Material257.emissiveColor = new SFColor(new float[1,1,1]);
Appearance256.material = Material257;

Shape255.appearance = Appearance256;

IndexedLineSet IndexedLineSet258 = createNode("IndexedLineSet");
IndexedLineSet258.DEF = "TMT5toMTP5";
IndexedLineSet258.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate259 = createNode("Coordinate");
Coordinate259.point = new MFVec3f(new float[-0.33,-0.52,0,-0.34,-0.8,0]);
IndexedLineSet258.coord = Coordinate259;

Shape255.geometry = IndexedLineSet258;

HAnimSegment252.children[1] = Shape255;

HAnimJoint251.children = new MFNode();

HAnimJoint251.children[0] = HAnimSegment252;

HAnimJoint HAnimJoint260 = createNode("HAnimJoint");
HAnimJoint260.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint260.name = "r_metatarsophalangeal_5";
HAnimJoint260.center = new SFVec3f(new float[-0.34,-0.8,0]);
HAnimSegment HAnimSegment261 = createNode("HAnimSegment");
HAnimSegment261.DEF = "hanim_r_tarsal_proximal_phalanx_5";
HAnimSegment261.name = "r_tarsal_proximal_phalanx_5";
Transform Transform262 = createNode("Transform");
Transform262.translation = new SFVec3f(new float[-0.34,-0.8,0]);
Shape Shape263 = createNode("Shape");
Shape263.USE = "HAnimJointShape";
Transform262.child = new undefined();

Transform262.child[0] = Shape263;

HAnimSegment261.children = new MFNode();

HAnimSegment261.children[0] = Transform262;

Shape Shape264 = createNode("Shape");
Appearance Appearance265 = createNode("Appearance");
Material Material266 = createNode("Material");
Material266.emissiveColor = new SFColor(new float[1,1,1]);
Appearance265.material = Material266;

Shape264.appearance = Appearance265;

IndexedLineSet IndexedLineSet267 = createNode("IndexedLineSet");
IndexedLineSet267.DEF = "MTP5toPIP5";
IndexedLineSet267.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate268 = createNode("Coordinate");
Coordinate268.point = new MFVec3f(new float[-0.34,-0.8,0,-0.34,-0.95,0]);
IndexedLineSet267.coord = Coordinate268;

Shape264.geometry = IndexedLineSet267;

HAnimSegment261.children[1] = Shape264;

HAnimJoint260.children = new MFNode();

HAnimJoint260.children[0] = HAnimSegment261;

HAnimJoint HAnimJoint269 = createNode("HAnimJoint");
HAnimJoint269.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint269.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint269.center = new SFVec3f(new float[-0.34,-0.95,0]);
HAnimSegment HAnimSegment270 = createNode("HAnimSegment");
HAnimSegment270.DEF = "hanim_r_tarsal_middle_phalanx_4";
HAnimSegment270.name = "r_tarsal_middle_phalanx_5";
Transform Transform271 = createNode("Transform");
Transform271.translation = new SFVec3f(new float[-0.34,-0.95,0]);
Shape Shape272 = createNode("Shape");
Shape272.USE = "HAnimJointShape";
Transform271.child = new undefined();

Transform271.child[0] = Shape272;

HAnimSegment270.children = new MFNode();

HAnimSegment270.children[0] = Transform271;

Shape Shape273 = createNode("Shape");
Appearance Appearance274 = createNode("Appearance");
Material Material275 = createNode("Material");
Material275.emissiveColor = new SFColor(new float[1,1,1]);
Appearance274.material = Material275;

Shape273.appearance = Appearance274;

IndexedLineSet IndexedLineSet276 = createNode("IndexedLineSet");
IndexedLineSet276.DEF = "PIP5toDIP5";
IndexedLineSet276.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate277 = createNode("Coordinate");
Coordinate277.point = new MFVec3f(new float[-0.34,-0.95,0,-0.34,-1.05,0]);
IndexedLineSet276.coord = Coordinate277;

Shape273.geometry = IndexedLineSet276;

HAnimSegment270.children[1] = Shape273;

HAnimJoint269.children = new MFNode();

HAnimJoint269.children[0] = HAnimSegment270;

HAnimJoint HAnimJoint278 = createNode("HAnimJoint");
HAnimJoint278.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint278.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint278.center = new SFVec3f(new float[-0.34,-1.05,0]);
HAnimSegment HAnimSegment279 = createNode("HAnimSegment");
HAnimSegment279.DEF = "hanim_r_tarsal_distal_phalanx_5";
HAnimSegment279.name = "r_tarsal_distal_phalanx_5";
Transform Transform280 = createNode("Transform");
Transform280.translation = new SFVec3f(new float[-0.34,-1.05,0]);
Shape Shape281 = createNode("Shape");
Shape281.USE = "HAnimJointShape";
Transform280.child = new undefined();

Transform280.child[0] = Shape281;

HAnimSegment279.children = new MFNode();

HAnimSegment279.children[0] = Transform280;

Shape Shape282 = createNode("Shape");
Appearance Appearance283 = createNode("Appearance");
Material Material284 = createNode("Material");
Material284.emissiveColor = new SFColor(new float[1,1,1]);
Appearance283.material = Material284;

Shape282.appearance = Appearance283;

IndexedLineSet IndexedLineSet285 = createNode("IndexedLineSet");
IndexedLineSet285.DEF = "tiptoe_r_tarsal_distal_interphalangeal_4";
IndexedLineSet285.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate286 = createNode("Coordinate");
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

HAnimSegment HAnimSegment287 = createNode("HAnimSegment");
HAnimSegment287.USE = "hanim_r_calcaneus";
HAnimHumanoid26.segments[2] = HAnimSegment287;

HAnimSegment HAnimSegment288 = createNode("HAnimSegment");
HAnimSegment288.USE = "hanim_r_cuboid";
HAnimHumanoid26.segments[3] = HAnimSegment288;

HAnimSegment HAnimSegment289 = createNode("HAnimSegment");
HAnimSegment289.USE = "hanim_r_cuneiform_1";
HAnimHumanoid26.segments[4] = HAnimSegment289;

HAnimSegment HAnimSegment290 = createNode("HAnimSegment");
HAnimSegment290.USE = "hanim_r_cuneiform_2";
HAnimHumanoid26.segments[5] = HAnimSegment290;

HAnimSegment HAnimSegment291 = createNode("HAnimSegment");
HAnimSegment291.USE = "hanim_r_cuneiform_3";
HAnimHumanoid26.segments[6] = HAnimSegment291;

HAnimSegment HAnimSegment292 = createNode("HAnimSegment");
HAnimSegment292.USE = "hanim_r_metatarsal_1";
HAnimHumanoid26.segments[7] = HAnimSegment292;

HAnimSegment HAnimSegment293 = createNode("HAnimSegment");
HAnimSegment293.USE = "hanim_r_metatarsal_2";
HAnimHumanoid26.segments[8] = HAnimSegment293;

HAnimSegment HAnimSegment294 = createNode("HAnimSegment");
HAnimSegment294.USE = "hanim_r_metatarsal_3";
HAnimHumanoid26.segments[9] = HAnimSegment294;

HAnimSegment HAnimSegment295 = createNode("HAnimSegment");
HAnimSegment295.USE = "hanim_r_metatarsal_4";
HAnimHumanoid26.segments[10] = HAnimSegment295;

HAnimSegment HAnimSegment296 = createNode("HAnimSegment");
HAnimSegment296.USE = "hanim_r_metatarsal_5";
HAnimHumanoid26.segments[11] = HAnimSegment296;

HAnimSegment HAnimSegment297 = createNode("HAnimSegment");
HAnimSegment297.USE = "hanim_r_navicular";
HAnimHumanoid26.segments[12] = HAnimSegment297;

HAnimSegment HAnimSegment298 = createNode("HAnimSegment");
HAnimSegment298.USE = "hanim_r_talus";
HAnimHumanoid26.segments[13] = HAnimSegment298;

HAnimSegment HAnimSegment299 = createNode("HAnimSegment");
HAnimSegment299.USE = "hanim_r_tarsal_distal_phalanx_1";
HAnimHumanoid26.segments[14] = HAnimSegment299;

HAnimSegment HAnimSegment300 = createNode("HAnimSegment");
HAnimSegment300.USE = "hanim_r_tarsal_distal_phalanx_2";
HAnimHumanoid26.segments[15] = HAnimSegment300;

HAnimSegment HAnimSegment301 = createNode("HAnimSegment");
HAnimSegment301.USE = "hanim_r_tarsal_distal_phalanx_3";
HAnimHumanoid26.segments[16] = HAnimSegment301;

HAnimSegment HAnimSegment302 = createNode("HAnimSegment");
HAnimSegment302.USE = "hanim_r_tarsal_distal_phalanx_4";
HAnimHumanoid26.segments[17] = HAnimSegment302;

HAnimSegment HAnimSegment303 = createNode("HAnimSegment");
HAnimSegment303.USE = "hanim_r_tarsal_distal_phalanx_5";
HAnimHumanoid26.segments[18] = HAnimSegment303;

HAnimSegment HAnimSegment304 = createNode("HAnimSegment");
HAnimSegment304.USE = "hanim_r_tarsal_middle_phalanx_1";
HAnimHumanoid26.segments[19] = HAnimSegment304;

HAnimSegment HAnimSegment305 = createNode("HAnimSegment");
HAnimSegment305.USE = "hanim_r_tarsal_middle_phalanx_2";
HAnimHumanoid26.segments[20] = HAnimSegment305;

HAnimSegment HAnimSegment306 = createNode("HAnimSegment");
HAnimSegment306.USE = "hanim_r_tarsal_middle_phalanx_3";
HAnimHumanoid26.segments[21] = HAnimSegment306;

HAnimSegment HAnimSegment307 = createNode("HAnimSegment");
HAnimSegment307.USE = "hanim_r_tarsal_middle_phalanx_4";
HAnimHumanoid26.segments[22] = HAnimSegment307;

HAnimSegment HAnimSegment308 = createNode("HAnimSegment");
HAnimSegment308.USE = "hanim_r_tarsal_proximal_phalanx_1";
HAnimHumanoid26.segments[23] = HAnimSegment308;

HAnimSegment HAnimSegment309 = createNode("HAnimSegment");
HAnimSegment309.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid26.segments[24] = HAnimSegment309;

HAnimSegment HAnimSegment310 = createNode("HAnimSegment");
HAnimSegment310.USE = "hanim_r_tarsal_proximal_phalanx_3";
HAnimHumanoid26.segments[25] = HAnimSegment310;

HAnimSegment HAnimSegment311 = createNode("HAnimSegment");
HAnimSegment311.USE = "hanim_r_tarsal_proximal_phalanx_4";
HAnimHumanoid26.segments[26] = HAnimSegment311;

HAnimSegment HAnimSegment312 = createNode("HAnimSegment");
HAnimSegment312.USE = "hanim_r_tarsal_proximal_phalanx_5";
HAnimHumanoid26.segments[27] = HAnimSegment312;

HAnimJoint HAnimJoint313 = createNode("HAnimJoint");
HAnimJoint313.USE = "hanim_humanoid_root";
HAnimHumanoid26.joints[28] = HAnimJoint313;

HAnimJoint HAnimJoint314 = createNode("HAnimJoint");
HAnimJoint314.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid26.joints[29] = HAnimJoint314;

HAnimJoint HAnimJoint315 = createNode("HAnimJoint");
HAnimJoint315.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid26.joints[30] = HAnimJoint315;

HAnimJoint HAnimJoint316 = createNode("HAnimJoint");
HAnimJoint316.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid26.joints[31] = HAnimJoint316;

HAnimJoint HAnimJoint317 = createNode("HAnimJoint");
HAnimJoint317.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid26.joints[32] = HAnimJoint317;

HAnimJoint HAnimJoint318 = createNode("HAnimJoint");
HAnimJoint318.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid26.joints[33] = HAnimJoint318;

HAnimJoint HAnimJoint319 = createNode("HAnimJoint");
HAnimJoint319.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid26.joints[34] = HAnimJoint319;

HAnimJoint HAnimJoint320 = createNode("HAnimJoint");
HAnimJoint320.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid26.joints[35] = HAnimJoint320;

HAnimJoint HAnimJoint321 = createNode("HAnimJoint");
HAnimJoint321.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid26.joints[36] = HAnimJoint321;

HAnimJoint HAnimJoint322 = createNode("HAnimJoint");
HAnimJoint322.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid26.joints[37] = HAnimJoint322;

HAnimJoint HAnimJoint323 = createNode("HAnimJoint");
HAnimJoint323.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid26.joints[38] = HAnimJoint323;

HAnimJoint HAnimJoint324 = createNode("HAnimJoint");
HAnimJoint324.USE = "hanim_r_talocrural";
HAnimHumanoid26.joints[39] = HAnimJoint324;

HAnimJoint HAnimJoint325 = createNode("HAnimJoint");
HAnimJoint325.USE = "hanim_r_tarsal_distal_interphalangeal_1";
HAnimHumanoid26.joints[40] = HAnimJoint325;

HAnimJoint HAnimJoint326 = createNode("HAnimJoint");
HAnimJoint326.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid26.joints[41] = HAnimJoint326;

HAnimJoint HAnimJoint327 = createNode("HAnimJoint");
HAnimJoint327.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid26.joints[42] = HAnimJoint327;

HAnimJoint HAnimJoint328 = createNode("HAnimJoint");
HAnimJoint328.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid26.joints[43] = HAnimJoint328;

HAnimJoint HAnimJoint329 = createNode("HAnimJoint");
HAnimJoint329.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid26.joints[44] = HAnimJoint329;

HAnimJoint HAnimJoint330 = createNode("HAnimJoint");
HAnimJoint330.USE = "hanim_r_tarsal_proximal_interphalangeal_1";
HAnimHumanoid26.joints[45] = HAnimJoint330;

HAnimJoint HAnimJoint331 = createNode("HAnimJoint");
HAnimJoint331.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid26.joints[46] = HAnimJoint331;

HAnimJoint HAnimJoint332 = createNode("HAnimJoint");
HAnimJoint332.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid26.joints[47] = HAnimJoint332;

HAnimJoint HAnimJoint333 = createNode("HAnimJoint");
HAnimJoint333.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid26.joints[48] = HAnimJoint333;

HAnimJoint HAnimJoint334 = createNode("HAnimJoint");
HAnimJoint334.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid26.joints[49] = HAnimJoint334;

HAnimJoint HAnimJoint335 = createNode("HAnimJoint");
HAnimJoint335.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid26.joints[50] = HAnimJoint335;

HAnimJoint HAnimJoint336 = createNode("HAnimJoint");
HAnimJoint336.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid26.joints[51] = HAnimJoint336;

HAnimJoint HAnimJoint337 = createNode("HAnimJoint");
HAnimJoint337.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid26.joints[52] = HAnimJoint337;

HAnimJoint HAnimJoint338 = createNode("HAnimJoint");
HAnimJoint338.USE = "hanim_r_tarsometatarsal_5";
HAnimHumanoid26.joints[53] = HAnimJoint338;

HAnimJoint HAnimJoint339 = createNode("HAnimJoint");
HAnimJoint339.USE = "hanim_r_transversetarsal";
HAnimHumanoid26.joints[54] = HAnimJoint339;

children[1] = HAnimHumanoid26;

}

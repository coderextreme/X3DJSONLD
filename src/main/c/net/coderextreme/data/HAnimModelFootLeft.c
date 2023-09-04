#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "HAnimModelFootLeft.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Left foot, using high-fidelity definitions for HAnim version 2.0";
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
meta9.name = "info";
meta9.content = "TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "https://www.web3d.org/working-groups/humanoid-animation-HAnim";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "https://www.web3d.org/documents/specifications/19774/V2.0";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "reference";
meta15.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "subject";
meta16.content = "X3D HAnim humanoid animation";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "TODO";
meta17.content = "Integrate and confirm Segment/Joint names, Viewpoints.";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "identifier";
meta18.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "generator";
meta19.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[17] = meta19;

component component20 = createNode("component");
component20.name = "HAnim";
component20.level = 1;
head1.component[18] = component20;

head = head1;

WorldInfo WorldInfo22 = createNode("WorldInfo");
WorldInfo22.title = "HAnimModelFootLeft.x3d";
children = new MFNode();

children[0] = WorldInfo22;

HAnimHumanoid HAnimHumanoid23 = createNode("HAnimHumanoid");
HAnimHumanoid23.DEF = "hanim_Foot_Left";
HAnimHumanoid23.version = "2.0";
HAnimHumanoid23.name = "Foot_Left";
HAnimHumanoid23.loa = 4;
MetadataSet MetadataSet24 = createNode("MetadataSet");
MetadataSet24.name = "HAnimHumanoid.info";
MetadataSet24.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
MetadataString MetadataString25 = createNode("MetadataString");
MetadataString25.name = "authorName";
MetadataSet24.value = new MFNode();

MetadataSet24.value[0] = MetadataString25;

HAnimHumanoid23.metadata = new SFNode();

HAnimHumanoid23.metadata[0] = MetadataSet24;

HAnimJoint HAnimJoint26 = createNode("HAnimJoint");
HAnimJoint26.DEF = "hanim_humanoid_root";
HAnimJoint26.name = "humanoid_root";
HAnimJoint HAnimJoint27 = createNode("HAnimJoint");
HAnimJoint27.DEF = "hanim_l_talocrural";
HAnimJoint27.description = "connection joint of foot to leg above";
HAnimJoint27.name = "l_talocrural";
HAnimSegment HAnimSegment28 = createNode("HAnimSegment");
HAnimSegment28.DEF = "hanim_l_talus";
HAnimSegment28.name = "l_talus";
Transform Transform29 = createNode("Transform");
Shape Shape30 = createNode("Shape");
Shape30.DEF = "HAnimJointShape";
Appearance Appearance31 = createNode("Appearance");
Appearance31.DEF = "HAnimJointAppearance";
Material Material32 = createNode("Material");
Material32.diffuseColor = new SFColor(new float[0,0,1]);
Appearance31.material = Material32;

Shape30.appearance = Appearance31;

Sphere Sphere33 = createNode("Sphere");
Sphere33.radius = 0.025;
Shape30.geometry = Sphere33;

Transform29.child = new undefined();

Transform29.child[0] = Shape30;

HAnimSegment28.children = new MFNode();

HAnimSegment28.children[0] = Transform29;

Shape Shape34 = createNode("Shape");
Appearance Appearance35 = createNode("Appearance");
Material Material36 = createNode("Material");
Material36.emissiveColor = new SFColor(new float[1,1,1]);
Appearance35.material = Material36;

Shape34.appearance = Appearance35;

IndexedLineSet IndexedLineSet37 = createNode("IndexedLineSet");
IndexedLineSet37.DEF = "TCtoTCN";
IndexedLineSet37.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate38 = createNode("Coordinate");
Coordinate38.point = new MFVec3f(new float[0,0,0,0,-0.3,0]);
IndexedLineSet37.coord = Coordinate38;

Shape34.geometry = IndexedLineSet37;

HAnimSegment28.children[1] = Shape34;

Shape Shape39 = createNode("Shape");
Appearance Appearance40 = createNode("Appearance");
Material Material41 = createNode("Material");
Material41.emissiveColor = new SFColor(new float[1,1,1]);
Appearance40.material = Material41;

Shape39.appearance = Appearance40;

IndexedLineSet IndexedLineSet42 = createNode("IndexedLineSet");
IndexedLineSet42.DEF = "TCtoCC";
IndexedLineSet42.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate43 = createNode("Coordinate");
Coordinate43.point = new MFVec3f(new float[0,0,0,0.2,0.3,0]);
IndexedLineSet42.coord = Coordinate43;

Shape39.geometry = IndexedLineSet42;

HAnimSegment28.children[2] = Shape39;

HAnimJoint27.children = new MFNode();

HAnimJoint27.children[0] = HAnimSegment28;

HAnimJoint HAnimJoint44 = createNode("HAnimJoint");
HAnimJoint44.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint44.name = "l_talocalcaneonavicular";
HAnimJoint44.center = new SFVec3f(new float[0,-0.3,0]);
HAnimSegment HAnimSegment45 = createNode("HAnimSegment");
HAnimSegment45.DEF = "hanim_l_navicular";
HAnimSegment45.name = "l_navicular";
Transform Transform46 = createNode("Transform");
Transform46.translation = new SFVec3f(new float[0,-0.3,0]);
Shape Shape47 = createNode("Shape");
Shape47.USE = "HAnimJointShape";
Transform46.child = new undefined();

Transform46.child[0] = Shape47;

HAnimSegment45.children = new MFNode();

HAnimSegment45.children[0] = Transform46;

Shape Shape48 = createNode("Shape");
Appearance Appearance49 = createNode("Appearance");
Material Material50 = createNode("Material");
Material50.emissiveColor = new SFColor(new float[1,1,1]);
Appearance49.material = Material50;

Shape48.appearance = Appearance49;

IndexedLineSet IndexedLineSet51 = createNode("IndexedLineSet");
IndexedLineSet51.DEF = "TCNtoCN1";
IndexedLineSet51.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate52 = createNode("Coordinate");
Coordinate52.point = new MFVec3f(new float[0,-0.3,0,-0.1,-0.45,0]);
IndexedLineSet51.coord = Coordinate52;

Shape48.geometry = IndexedLineSet51;

HAnimSegment45.children[1] = Shape48;

Shape Shape53 = createNode("Shape");
Appearance Appearance54 = createNode("Appearance");
Material Material55 = createNode("Material");
Material55.emissiveColor = new SFColor(new float[1,1,1]);
Appearance54.material = Material55;

Shape53.appearance = Appearance54;

IndexedLineSet IndexedLineSet56 = createNode("IndexedLineSet");
IndexedLineSet56.DEF = "TCNtoCN2";
IndexedLineSet56.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate57 = createNode("Coordinate");
Coordinate57.point = new MFVec3f(new float[0,-0.3,0,0,-0.45,0]);
IndexedLineSet56.coord = Coordinate57;

Shape53.geometry = IndexedLineSet56;

HAnimSegment45.children[2] = Shape53;

Shape Shape58 = createNode("Shape");
Appearance Appearance59 = createNode("Appearance");
Material Material60 = createNode("Material");
Material60.emissiveColor = new SFColor(new float[1,1,1]);
Appearance59.material = Material60;

Shape58.appearance = Appearance59;

IndexedLineSet IndexedLineSet61 = createNode("IndexedLineSet");
IndexedLineSet61.DEF = "TCNtoCN3";
IndexedLineSet61.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate62 = createNode("Coordinate");
Coordinate62.point = new MFVec3f(new float[0,-0.3,0,0.1,-0.4,0]);
IndexedLineSet61.coord = Coordinate62;

Shape58.geometry = IndexedLineSet61;

HAnimSegment45.children[3] = Shape58;

HAnimJoint44.children = new MFNode();

HAnimJoint44.children[0] = HAnimSegment45;

HAnimJoint HAnimJoint63 = createNode("HAnimJoint");
HAnimJoint63.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint63.name = "l_cuneonavicular_1";
HAnimJoint63.center = new SFVec3f(new float[-0.1,-0.45,0]);
HAnimSegment HAnimSegment64 = createNode("HAnimSegment");
HAnimSegment64.DEF = "hanim_l_cuneiform_1";
HAnimSegment64.name = "l_cuneiform_1";
Transform Transform65 = createNode("Transform");
Transform65.translation = new SFVec3f(new float[-0.1,-0.45,0]);
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
IndexedLineSet70.DEF = "CN1toTMT1";
IndexedLineSet70.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate71 = createNode("Coordinate");
Coordinate71.point = new MFVec3f(new float[-0.1,-0.45,0,-0.1,-0.6,0]);
IndexedLineSet70.coord = Coordinate71;

Shape67.geometry = IndexedLineSet70;

HAnimSegment64.children[1] = Shape67;

HAnimJoint63.children = new MFNode();

HAnimJoint63.children[0] = HAnimSegment64;

HAnimJoint HAnimJoint72 = createNode("HAnimJoint");
HAnimJoint72.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint72.name = "l_tarsometatarsal_1";
HAnimJoint72.center = new SFVec3f(new float[-0.1,-0.6,0]);
HAnimSegment HAnimSegment73 = createNode("HAnimSegment");
HAnimSegment73.DEF = "hanim_l_metatarsal_1";
HAnimSegment73.name = "l_metatarsal_1";
Transform Transform74 = createNode("Transform");
Transform74.translation = new SFVec3f(new float[-0.1,-0.6,0]);
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
IndexedLineSet79.DEF = "TMT1toMTP1";
IndexedLineSet79.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate80 = createNode("Coordinate");
Coordinate80.point = new MFVec3f(new float[-0.1,-0.6,0,-0.1,-0.9,0]);
IndexedLineSet79.coord = Coordinate80;

Shape76.geometry = IndexedLineSet79;

HAnimSegment73.children[1] = Shape76;

HAnimJoint72.children = new MFNode();

HAnimJoint72.children[0] = HAnimSegment73;

HAnimJoint HAnimJoint81 = createNode("HAnimJoint");
HAnimJoint81.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint81.name = "l_metatarsophalangeal_1";
HAnimJoint81.center = new SFVec3f(new float[-0.1,-0.9,0]);
HAnimSegment HAnimSegment82 = createNode("HAnimSegment");
HAnimSegment82.DEF = "hanim_l_tarsal_proximal_phalanx_1";
HAnimSegment82.name = "l_tarsal_proximal_phalanx_1";
Transform Transform83 = createNode("Transform");
Transform83.translation = new SFVec3f(new float[-0.1,-0.9,0]);
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
IndexedLineSet88.DEF = "MTP1toIP1";
IndexedLineSet88.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate89 = createNode("Coordinate");
Coordinate89.point = new MFVec3f(new float[-0.1,-0.9,0,-0.1,-1.05,0]);
IndexedLineSet88.coord = Coordinate89;

Shape85.geometry = IndexedLineSet88;

HAnimSegment82.children[1] = Shape85;

HAnimJoint81.children = new MFNode();

HAnimJoint81.children[0] = HAnimSegment82;

HAnimJoint HAnimJoint90 = createNode("HAnimJoint");
HAnimJoint90.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint90.name = "l_tarsal_interphalangeal_1";
HAnimJoint90.center = new SFVec3f(new float[-0.1,-1.05,0]);
HAnimSegment HAnimSegment91 = createNode("HAnimSegment");
HAnimSegment91.DEF = "hanim_l_tarsal_distal_phalanx_1";
HAnimSegment91.name = "l_tarsal_distal_phalanx_1";
Transform Transform92 = createNode("Transform");
Transform92.translation = new SFVec3f(new float[-0.1,-1.05,0]);
Shape Shape93 = createNode("Shape");
Shape93.USE = "HAnimJointShape";
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
IndexedLineSet97.DEF = "tiptoe_l_tarsal_distal_interphalangeal_1";
IndexedLineSet97.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate98 = createNode("Coordinate");
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

HAnimJoint HAnimJoint99 = createNode("HAnimJoint");
HAnimJoint99.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint99.name = "l_cuneonavicular_2";
HAnimJoint99.center = new SFVec3f(new float[0,-0.45,0]);
HAnimSegment HAnimSegment100 = createNode("HAnimSegment");
HAnimSegment100.DEF = "hanim_l_cuneiform_2";
HAnimSegment100.name = "l_cuneiform_2";
Transform Transform101 = createNode("Transform");
Transform101.translation = new SFVec3f(new float[0,-0.45,0]);
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
IndexedLineSet106.DEF = "CN2toTMT2";
IndexedLineSet106.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate107 = createNode("Coordinate");
Coordinate107.point = new MFVec3f(new float[0,-0.45,0,0.05,-0.6,0]);
IndexedLineSet106.coord = Coordinate107;

Shape103.geometry = IndexedLineSet106;

HAnimSegment100.children[1] = Shape103;

HAnimJoint99.children = new MFNode();

HAnimJoint99.children[0] = HAnimSegment100;

HAnimJoint HAnimJoint108 = createNode("HAnimJoint");
HAnimJoint108.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint108.name = "l_tarsometatarsal_2";
HAnimJoint108.center = new SFVec3f(new float[0.05,-0.6,0]);
HAnimSegment HAnimSegment109 = createNode("HAnimSegment");
HAnimSegment109.DEF = "hanim_l_metatarsal_2";
HAnimSegment109.name = "l_metatarsal_2";
Transform Transform110 = createNode("Transform");
Transform110.translation = new SFVec3f(new float[0.05,-0.6,0]);
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
IndexedLineSet115.DEF = "TMT2toMTP2";
IndexedLineSet115.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate116 = createNode("Coordinate");
Coordinate116.point = new MFVec3f(new float[0.05,-0.6,0,0.05,-0.9,0]);
IndexedLineSet115.coord = Coordinate116;

Shape112.geometry = IndexedLineSet115;

HAnimSegment109.children[1] = Shape112;

HAnimJoint108.children = new MFNode();

HAnimJoint108.children[0] = HAnimSegment109;

HAnimJoint HAnimJoint117 = createNode("HAnimJoint");
HAnimJoint117.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint117.name = "l_metatarsophalangeal_2";
HAnimJoint117.center = new SFVec3f(new float[0.05,-0.9,0]);
HAnimSegment HAnimSegment118 = createNode("HAnimSegment");
HAnimSegment118.DEF = "hanim_l_tarsal_proximal_phalanx_2";
HAnimSegment118.name = "l_tarsal_proximal_phalanx_2";
Transform Transform119 = createNode("Transform");
Transform119.translation = new SFVec3f(new float[0.05,-0.9,0]);
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
IndexedLineSet124.DEF = "MTP2toPIP2";
IndexedLineSet124.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate125 = createNode("Coordinate");
Coordinate125.point = new MFVec3f(new float[0.05,-0.9,0,0.05,-1.05,0]);
IndexedLineSet124.coord = Coordinate125;

Shape121.geometry = IndexedLineSet124;

HAnimSegment118.children[1] = Shape121;

HAnimJoint117.children = new MFNode();

HAnimJoint117.children[0] = HAnimSegment118;

HAnimJoint HAnimJoint126 = createNode("HAnimJoint");
HAnimJoint126.DEF = "hanim_l_tarsal_proximal_interphalangeal_1";
HAnimJoint126.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint126.center = new SFVec3f(new float[0.05,-1.05,0]);
HAnimSegment HAnimSegment127 = createNode("HAnimSegment");
HAnimSegment127.DEF = "hanim_l_tarsal_middle_phalanx_1";
HAnimSegment127.name = "l_tarsal_middle_phalanx_2";
Transform Transform128 = createNode("Transform");
Transform128.translation = new SFVec3f(new float[0.05,-1.05,0]);
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
IndexedLineSet133.DEF = "PIP2toDIP2";
IndexedLineSet133.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate134 = createNode("Coordinate");
Coordinate134.point = new MFVec3f(new float[0.05,-1.05,0,0.05,-1.12,0]);
IndexedLineSet133.coord = Coordinate134;

Shape130.geometry = IndexedLineSet133;

HAnimSegment127.children[1] = Shape130;

HAnimJoint126.children = new MFNode();

HAnimJoint126.children[0] = HAnimSegment127;

HAnimJoint HAnimJoint135 = createNode("HAnimJoint");
HAnimJoint135.DEF = "hanim_l_tarsal_distal_interphalangeal_1";
HAnimJoint135.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint135.center = new SFVec3f(new float[0.05,-1.12,0]);
HAnimSegment HAnimSegment136 = createNode("HAnimSegment");
HAnimSegment136.DEF = "hanim_l_tarsal_distal_phalanx_2";
HAnimSegment136.name = "l_tarsal_distal_phalanx_2";
Transform Transform137 = createNode("Transform");
Transform137.translation = new SFVec3f(new float[0.05,-1.12,0]);
Shape Shape138 = createNode("Shape");
Shape138.USE = "HAnimJointShape";
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
IndexedLineSet142.DEF = "tiptoe_l_tarsal_distal_phalanx_1";
IndexedLineSet142.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate143 = createNode("Coordinate");
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

HAnimJoint HAnimJoint144 = createNode("HAnimJoint");
HAnimJoint144.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint144.name = "l_cuneonavicular_3";
HAnimJoint144.center = new SFVec3f(new float[0.1,-0.4,0]);
HAnimSegment HAnimSegment145 = createNode("HAnimSegment");
HAnimSegment145.DEF = "hanim_l_cuneiform_3";
HAnimSegment145.name = "l_cuneiform_3";
Transform Transform146 = createNode("Transform");
Transform146.translation = new SFVec3f(new float[0.1,-0.4,0]);
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
IndexedLineSet151.DEF = "CN3toTMT3";
IndexedLineSet151.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate152 = createNode("Coordinate");
Coordinate152.point = new MFVec3f(new float[0.1,-0.4,0,0.15,-0.6,0]);
IndexedLineSet151.coord = Coordinate152;

Shape148.geometry = IndexedLineSet151;

HAnimSegment145.children[1] = Shape148;

HAnimJoint144.children = new MFNode();

HAnimJoint144.children[0] = HAnimSegment145;

HAnimJoint HAnimJoint153 = createNode("HAnimJoint");
HAnimJoint153.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint153.name = "l_tarsometatarsal_3";
HAnimJoint153.center = new SFVec3f(new float[0.15,-0.6,0]);
HAnimSegment HAnimSegment154 = createNode("HAnimSegment");
HAnimSegment154.DEF = "hanim_l_metatarsal_3";
HAnimSegment154.name = "l_metatarsal_3";
Transform Transform155 = createNode("Transform");
Transform155.translation = new SFVec3f(new float[0.15,-0.6,0]);
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
IndexedLineSet160.DEF = "TMT3toMTP3";
IndexedLineSet160.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate161 = createNode("Coordinate");
Coordinate161.point = new MFVec3f(new float[0.15,-0.6,0,0.15,-0.9,0]);
IndexedLineSet160.coord = Coordinate161;

Shape157.geometry = IndexedLineSet160;

HAnimSegment154.children[1] = Shape157;

HAnimJoint153.children = new MFNode();

HAnimJoint153.children[0] = HAnimSegment154;

HAnimJoint HAnimJoint162 = createNode("HAnimJoint");
HAnimJoint162.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint162.name = "l_metatarsophalangeal_3";
HAnimJoint162.center = new SFVec3f(new float[0.15,-0.9,0]);
HAnimSegment HAnimSegment163 = createNode("HAnimSegment");
HAnimSegment163.DEF = "hanim_l_tarsal_proximal_phalanx_3";
HAnimSegment163.name = "l_tarsal_proximal_phalanx_3";
Transform Transform164 = createNode("Transform");
Transform164.translation = new SFVec3f(new float[0.15,-0.9,0]);
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
IndexedLineSet169.DEF = "MTP3toPIP3";
IndexedLineSet169.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate170 = createNode("Coordinate");
Coordinate170.point = new MFVec3f(new float[0.15,-0.9,0,0.15,-1.05,0]);
IndexedLineSet169.coord = Coordinate170;

Shape166.geometry = IndexedLineSet169;

HAnimSegment163.children[1] = Shape166;

HAnimJoint162.children = new MFNode();

HAnimJoint162.children[0] = HAnimSegment163;

HAnimJoint HAnimJoint171 = createNode("HAnimJoint");
HAnimJoint171.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint171.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint171.center = new SFVec3f(new float[0.15,-1.05,0]);
HAnimSegment HAnimSegment172 = createNode("HAnimSegment");
HAnimSegment172.DEF = "hanim_l_tarsal_middle_phalanx_2";
HAnimSegment172.name = "l_tarsal_middle_phalanx_3";
Transform Transform173 = createNode("Transform");
Transform173.translation = new SFVec3f(new float[0.15,-1.05,0]);
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
IndexedLineSet178.DEF = "PIP3toDIP3";
IndexedLineSet178.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate179 = createNode("Coordinate");
Coordinate179.point = new MFVec3f(new float[0.15,-1.05,0,0.15,-1.13,0]);
IndexedLineSet178.coord = Coordinate179;

Shape175.geometry = IndexedLineSet178;

HAnimSegment172.children[1] = Shape175;

HAnimJoint171.children = new MFNode();

HAnimJoint171.children[0] = HAnimSegment172;

HAnimJoint HAnimJoint180 = createNode("HAnimJoint");
HAnimJoint180.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint180.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint180.center = new SFVec3f(new float[0.15,-1.13,0]);
HAnimSegment HAnimSegment181 = createNode("HAnimSegment");
HAnimSegment181.DEF = "hanim_l_tarsal_distal_phalanx_3";
HAnimSegment181.name = "l_tarsal_distal_phalanx_3";
Transform Transform182 = createNode("Transform");
Transform182.translation = new SFVec3f(new float[0.15,-1.13,0]);
Shape Shape183 = createNode("Shape");
Shape183.USE = "HAnimJointShape";
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
IndexedLineSet187.DEF = "tiptoe_l_tarsal_distal_interphalangeal_2";
IndexedLineSet187.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate188 = createNode("Coordinate");
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

HAnimJoint HAnimJoint189 = createNode("HAnimJoint");
HAnimJoint189.DEF = "hanim_l_calcaneocuboid";
HAnimJoint189.name = "l_calcaneocuboid";
HAnimJoint189.center = new SFVec3f(new float[0.2,0.3,0]);
HAnimSegment HAnimSegment190 = createNode("HAnimSegment");
HAnimSegment190.DEF = "hanim_l_calcaneus";
HAnimSegment190.name = "l_calcaneus";
Transform Transform191 = createNode("Transform");
Transform191.translation = new SFVec3f(new float[0.2,0.3,0]);
Shape Shape192 = createNode("Shape");
Shape192.USE = "HAnimJointShape";
Transform191.child = new undefined();

Transform191.child[0] = Shape192;

HAnimSegment190.children = new MFNode();

HAnimSegment190.children[0] = Transform191;

Shape Shape193 = createNode("Shape");
Appearance Appearance194 = createNode("Appearance");
Material Material195 = createNode("Material");
Material195.emissiveColor = new SFColor(new float[1,1,1]);
Appearance194.material = Material195;

Shape193.appearance = Appearance194;

IndexedLineSet IndexedLineSet196 = createNode("IndexedLineSet");
IndexedLineSet196.DEF = "CCtoTT";
IndexedLineSet196.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate197 = createNode("Coordinate");
Coordinate197.point = new MFVec3f(new float[0.2,0.3,0,0.21,-0.3,0]);
IndexedLineSet196.coord = Coordinate197;

Shape193.geometry = IndexedLineSet196;

HAnimSegment190.children[1] = Shape193;

HAnimJoint189.children = new MFNode();

HAnimJoint189.children[0] = HAnimSegment190;

HAnimJoint HAnimJoint198 = createNode("HAnimJoint");
HAnimJoint198.DEF = "hanim_l_transversetarsal";
HAnimJoint198.name = "l_transversetarsal";
HAnimJoint198.center = new SFVec3f(new float[0.21,-0.3,0]);
HAnimSegment HAnimSegment199 = createNode("HAnimSegment");
HAnimSegment199.DEF = "hanim_l_cuboid";
HAnimSegment199.name = "l_cuboid";
Transform Transform200 = createNode("Transform");
Transform200.translation = new SFVec3f(new float[0.21,-0.3,0]);
Shape Shape201 = createNode("Shape");
Shape201.USE = "HAnimJointShape";
Transform200.child = new undefined();

Transform200.child[0] = Shape201;

HAnimSegment199.children = new MFNode();

HAnimSegment199.children[0] = Transform200;

Shape Shape202 = createNode("Shape");
Appearance Appearance203 = createNode("Appearance");
Material Material204 = createNode("Material");
Material204.emissiveColor = new SFColor(new float[1,1,1]);
Appearance203.material = Material204;

Shape202.appearance = Appearance203;

IndexedLineSet IndexedLineSet205 = createNode("IndexedLineSet");
IndexedLineSet205.DEF = "TTtoTMT4";
IndexedLineSet205.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate206 = createNode("Coordinate");
Coordinate206.point = new MFVec3f(new float[0.21,-0.3,0,0.25,-0.58,0]);
IndexedLineSet205.coord = Coordinate206;

Shape202.geometry = IndexedLineSet205;

HAnimSegment199.children[1] = Shape202;

Shape Shape207 = createNode("Shape");
Appearance Appearance208 = createNode("Appearance");
Material Material209 = createNode("Material");
Material209.emissiveColor = new SFColor(new float[1,1,1]);
Appearance208.material = Material209;

Shape207.appearance = Appearance208;

IndexedLineSet IndexedLineSet210 = createNode("IndexedLineSet");
IndexedLineSet210.DEF = "TTtoTMT5";
IndexedLineSet210.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate211 = createNode("Coordinate");
Coordinate211.point = new MFVec3f(new float[0.21,-0.3,0,0.33,-0.52,0]);
IndexedLineSet210.coord = Coordinate211;

Shape207.geometry = IndexedLineSet210;

HAnimSegment199.children[2] = Shape207;

HAnimJoint198.children = new MFNode();

HAnimJoint198.children[0] = HAnimSegment199;

HAnimJoint HAnimJoint212 = createNode("HAnimJoint");
HAnimJoint212.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint212.name = "l_tarsometatarsal_4";
HAnimJoint212.center = new SFVec3f(new float[0.25,-0.58,0]);
HAnimSegment HAnimSegment213 = createNode("HAnimSegment");
HAnimSegment213.DEF = "hanim_l_metatarsal_4";
HAnimSegment213.name = "l_metatarsal_4";
Transform Transform214 = createNode("Transform");
Transform214.translation = new SFVec3f(new float[0.25,-0.58,0]);
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
IndexedLineSet219.DEF = "TMT4toMTP4";
IndexedLineSet219.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate220 = createNode("Coordinate");
Coordinate220.point = new MFVec3f(new float[0.25,-0.58,0,0.25,-0.87,0]);
IndexedLineSet219.coord = Coordinate220;

Shape216.geometry = IndexedLineSet219;

HAnimSegment213.children[1] = Shape216;

HAnimJoint212.children = new MFNode();

HAnimJoint212.children[0] = HAnimSegment213;

HAnimJoint HAnimJoint221 = createNode("HAnimJoint");
HAnimJoint221.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint221.name = "l_metatarsophalangeal_4";
HAnimJoint221.center = new SFVec3f(new float[0.25,-0.87,0]);
HAnimSegment HAnimSegment222 = createNode("HAnimSegment");
HAnimSegment222.DEF = "hanim_l_tarsal_proximal_phalanx_4";
HAnimSegment222.name = "l_tarsal_proximal_phalanx_4";
Transform Transform223 = createNode("Transform");
Transform223.translation = new SFVec3f(new float[0.25,-0.87,0]);
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
IndexedLineSet228.DEF = "MTP4toPIP4";
IndexedLineSet228.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate229 = createNode("Coordinate");
Coordinate229.point = new MFVec3f(new float[0.25,-0.87,0,0.25,-1,0]);
IndexedLineSet228.coord = Coordinate229;

Shape225.geometry = IndexedLineSet228;

HAnimSegment222.children[1] = Shape225;

HAnimJoint221.children = new MFNode();

HAnimJoint221.children[0] = HAnimSegment222;

HAnimJoint HAnimJoint230 = createNode("HAnimJoint");
HAnimJoint230.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint230.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint230.center = new SFVec3f(new float[0.25,-1,0]);
HAnimSegment HAnimSegment231 = createNode("HAnimSegment");
HAnimSegment231.DEF = "hanim_l_tarsal_middle_phalanx_3";
HAnimSegment231.name = "l_tarsal_middle_phalanx_4";
Transform Transform232 = createNode("Transform");
Transform232.translation = new SFVec3f(new float[0.25,-1,0]);
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
IndexedLineSet237.DEF = "PIP4toDIP4";
IndexedLineSet237.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate238 = createNode("Coordinate");
Coordinate238.point = new MFVec3f(new float[0.25,-1,0,0.25,-1.1,0]);
IndexedLineSet237.coord = Coordinate238;

Shape234.geometry = IndexedLineSet237;

HAnimSegment231.children[1] = Shape234;

HAnimJoint230.children = new MFNode();

HAnimJoint230.children[0] = HAnimSegment231;

HAnimJoint HAnimJoint239 = createNode("HAnimJoint");
HAnimJoint239.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint239.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint239.center = new SFVec3f(new float[0.25,-1.1,0]);
HAnimSegment HAnimSegment240 = createNode("HAnimSegment");
HAnimSegment240.DEF = "hanim_l_tarsal_distal_phalanx_4";
HAnimSegment240.name = "l_tarsal_distal_phalanx_4";
Transform Transform241 = createNode("Transform");
Transform241.translation = new SFVec3f(new float[0.25,-1.1,0]);
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
IndexedLineSet246.DEF = "tiptoe_l_tarsal_distal_interphalangeal_3";
IndexedLineSet246.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate247 = createNode("Coordinate");
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

HAnimJoint HAnimJoint248 = createNode("HAnimJoint");
HAnimJoint248.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint248.name = "l_tarsometatarsal_5";
HAnimJoint248.center = new SFVec3f(new float[0.33,-0.52,0]);
HAnimSegment HAnimSegment249 = createNode("HAnimSegment");
HAnimSegment249.DEF = "hanim_l_metatarsal_5";
HAnimSegment249.name = "l_metatarsal_5";
Transform Transform250 = createNode("Transform");
Transform250.translation = new SFVec3f(new float[0.33,-0.52,0]);
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
IndexedLineSet255.DEF = "TMT5toMTP5";
IndexedLineSet255.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate256 = createNode("Coordinate");
Coordinate256.point = new MFVec3f(new float[0.33,-0.52,0,0.34,-0.8,0]);
IndexedLineSet255.coord = Coordinate256;

Shape252.geometry = IndexedLineSet255;

HAnimSegment249.children[1] = Shape252;

HAnimJoint248.children = new MFNode();

HAnimJoint248.children[0] = HAnimSegment249;

HAnimJoint HAnimJoint257 = createNode("HAnimJoint");
HAnimJoint257.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint257.name = "l_metatarsophalangeal_5";
HAnimJoint257.center = new SFVec3f(new float[0.34,-0.8,0]);
HAnimSegment HAnimSegment258 = createNode("HAnimSegment");
HAnimSegment258.DEF = "hanim_l_tarsal_proximal_phalanx_5";
HAnimSegment258.name = "l_tarsal_proximal_phalanx_5";
Transform Transform259 = createNode("Transform");
Transform259.translation = new SFVec3f(new float[0.34,-0.8,0]);
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
IndexedLineSet264.DEF = "MTP5toPIP5";
IndexedLineSet264.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate265 = createNode("Coordinate");
Coordinate265.point = new MFVec3f(new float[0.34,-0.8,0,0.34,-0.95,0]);
IndexedLineSet264.coord = Coordinate265;

Shape261.geometry = IndexedLineSet264;

HAnimSegment258.children[1] = Shape261;

HAnimJoint257.children = new MFNode();

HAnimJoint257.children[0] = HAnimSegment258;

HAnimJoint HAnimJoint266 = createNode("HAnimJoint");
HAnimJoint266.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint266.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint266.center = new SFVec3f(new float[0.34,-0.95,0]);
HAnimSegment HAnimSegment267 = createNode("HAnimSegment");
HAnimSegment267.DEF = "hanim_l_tarsal_middle_phalanx_4";
HAnimSegment267.name = "l_tarsal_middle_phalanx_5";
Transform Transform268 = createNode("Transform");
Transform268.translation = new SFVec3f(new float[0.34,-0.95,0]);
Shape Shape269 = createNode("Shape");
Shape269.USE = "HAnimJointShape";
Transform268.child = new undefined();

Transform268.child[0] = Shape269;

HAnimSegment267.children = new MFNode();

HAnimSegment267.children[0] = Transform268;

Shape Shape270 = createNode("Shape");
Appearance Appearance271 = createNode("Appearance");
Material Material272 = createNode("Material");
Material272.emissiveColor = new SFColor(new float[1,1,1]);
Appearance271.material = Material272;

Shape270.appearance = Appearance271;

IndexedLineSet IndexedLineSet273 = createNode("IndexedLineSet");
IndexedLineSet273.DEF = "PIP5toDIP5";
IndexedLineSet273.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate274 = createNode("Coordinate");
Coordinate274.point = new MFVec3f(new float[0.34,-0.95,0,0.34,-1.05,0]);
IndexedLineSet273.coord = Coordinate274;

Shape270.geometry = IndexedLineSet273;

HAnimSegment267.children[1] = Shape270;

HAnimJoint266.children = new MFNode();

HAnimJoint266.children[0] = HAnimSegment267;

HAnimJoint HAnimJoint275 = createNode("HAnimJoint");
HAnimJoint275.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint275.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint275.center = new SFVec3f(new float[0.34,-1.05,0]);
HAnimSegment HAnimSegment276 = createNode("HAnimSegment");
HAnimSegment276.DEF = "hanim_l_tarsal_distal_phalanx_5";
HAnimSegment276.name = "l_tarsal_distal_phalanx_5";
Transform Transform277 = createNode("Transform");
Transform277.translation = new SFVec3f(new float[0.34,-1.05,0]);
Shape Shape278 = createNode("Shape");
Shape278.USE = "HAnimJointShape";
Transform277.child = new undefined();

Transform277.child[0] = Shape278;

HAnimSegment276.children = new MFNode();

HAnimSegment276.children[0] = Transform277;

Shape Shape279 = createNode("Shape");
Appearance Appearance280 = createNode("Appearance");
Material Material281 = createNode("Material");
Material281.emissiveColor = new SFColor(new float[1,1,1]);
Appearance280.material = Material281;

Shape279.appearance = Appearance280;

IndexedLineSet IndexedLineSet282 = createNode("IndexedLineSet");
IndexedLineSet282.DEF = "tiptoe_l_tarsal_distal_interphalangeal_4";
IndexedLineSet282.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate283 = createNode("Coordinate");
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

HAnimSegment HAnimSegment284 = createNode("HAnimSegment");
HAnimSegment284.USE = "hanim_l_calcaneus";
HAnimHumanoid23.segments[2] = HAnimSegment284;

HAnimSegment HAnimSegment285 = createNode("HAnimSegment");
HAnimSegment285.USE = "hanim_l_cuboid";
HAnimHumanoid23.segments[3] = HAnimSegment285;

HAnimSegment HAnimSegment286 = createNode("HAnimSegment");
HAnimSegment286.USE = "hanim_l_cuneiform_1";
HAnimHumanoid23.segments[4] = HAnimSegment286;

HAnimSegment HAnimSegment287 = createNode("HAnimSegment");
HAnimSegment287.USE = "hanim_l_cuneiform_2";
HAnimHumanoid23.segments[5] = HAnimSegment287;

HAnimSegment HAnimSegment288 = createNode("HAnimSegment");
HAnimSegment288.USE = "hanim_l_cuneiform_3";
HAnimHumanoid23.segments[6] = HAnimSegment288;

HAnimSegment HAnimSegment289 = createNode("HAnimSegment");
HAnimSegment289.USE = "hanim_l_metatarsal_1";
HAnimHumanoid23.segments[7] = HAnimSegment289;

HAnimSegment HAnimSegment290 = createNode("HAnimSegment");
HAnimSegment290.USE = "hanim_l_metatarsal_2";
HAnimHumanoid23.segments[8] = HAnimSegment290;

HAnimSegment HAnimSegment291 = createNode("HAnimSegment");
HAnimSegment291.USE = "hanim_l_metatarsal_3";
HAnimHumanoid23.segments[9] = HAnimSegment291;

HAnimSegment HAnimSegment292 = createNode("HAnimSegment");
HAnimSegment292.USE = "hanim_l_metatarsal_4";
HAnimHumanoid23.segments[10] = HAnimSegment292;

HAnimSegment HAnimSegment293 = createNode("HAnimSegment");
HAnimSegment293.USE = "hanim_l_metatarsal_5";
HAnimHumanoid23.segments[11] = HAnimSegment293;

HAnimSegment HAnimSegment294 = createNode("HAnimSegment");
HAnimSegment294.USE = "hanim_l_navicular";
HAnimHumanoid23.segments[12] = HAnimSegment294;

HAnimSegment HAnimSegment295 = createNode("HAnimSegment");
HAnimSegment295.USE = "hanim_l_talus";
HAnimHumanoid23.segments[13] = HAnimSegment295;

HAnimSegment HAnimSegment296 = createNode("HAnimSegment");
HAnimSegment296.USE = "hanim_l_tarsal_distal_phalanx_1";
HAnimHumanoid23.segments[14] = HAnimSegment296;

HAnimSegment HAnimSegment297 = createNode("HAnimSegment");
HAnimSegment297.USE = "hanim_l_tarsal_distal_phalanx_2";
HAnimHumanoid23.segments[15] = HAnimSegment297;

HAnimSegment HAnimSegment298 = createNode("HAnimSegment");
HAnimSegment298.USE = "hanim_l_tarsal_distal_phalanx_3";
HAnimHumanoid23.segments[16] = HAnimSegment298;

HAnimSegment HAnimSegment299 = createNode("HAnimSegment");
HAnimSegment299.USE = "hanim_l_tarsal_distal_phalanx_4";
HAnimHumanoid23.segments[17] = HAnimSegment299;

HAnimSegment HAnimSegment300 = createNode("HAnimSegment");
HAnimSegment300.USE = "hanim_l_tarsal_distal_phalanx_5";
HAnimHumanoid23.segments[18] = HAnimSegment300;

HAnimSegment HAnimSegment301 = createNode("HAnimSegment");
HAnimSegment301.USE = "hanim_l_tarsal_middle_phalanx_1";
HAnimHumanoid23.segments[19] = HAnimSegment301;

HAnimSegment HAnimSegment302 = createNode("HAnimSegment");
HAnimSegment302.USE = "hanim_l_tarsal_middle_phalanx_2";
HAnimHumanoid23.segments[20] = HAnimSegment302;

HAnimSegment HAnimSegment303 = createNode("HAnimSegment");
HAnimSegment303.USE = "hanim_l_tarsal_middle_phalanx_3";
HAnimHumanoid23.segments[21] = HAnimSegment303;

HAnimSegment HAnimSegment304 = createNode("HAnimSegment");
HAnimSegment304.USE = "hanim_l_tarsal_middle_phalanx_4";
HAnimHumanoid23.segments[22] = HAnimSegment304;

HAnimSegment HAnimSegment305 = createNode("HAnimSegment");
HAnimSegment305.USE = "hanim_l_tarsal_proximal_phalanx_1";
HAnimHumanoid23.segments[23] = HAnimSegment305;

HAnimSegment HAnimSegment306 = createNode("HAnimSegment");
HAnimSegment306.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid23.segments[24] = HAnimSegment306;

HAnimSegment HAnimSegment307 = createNode("HAnimSegment");
HAnimSegment307.USE = "hanim_l_tarsal_proximal_phalanx_3";
HAnimHumanoid23.segments[25] = HAnimSegment307;

HAnimSegment HAnimSegment308 = createNode("HAnimSegment");
HAnimSegment308.USE = "hanim_l_tarsal_proximal_phalanx_4";
HAnimHumanoid23.segments[26] = HAnimSegment308;

HAnimSegment HAnimSegment309 = createNode("HAnimSegment");
HAnimSegment309.USE = "hanim_l_tarsal_proximal_phalanx_5";
HAnimHumanoid23.segments[27] = HAnimSegment309;

HAnimJoint HAnimJoint310 = createNode("HAnimJoint");
HAnimJoint310.USE = "hanim_humanoid_root";
HAnimHumanoid23.joints[28] = HAnimJoint310;

HAnimJoint HAnimJoint311 = createNode("HAnimJoint");
HAnimJoint311.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid23.joints[29] = HAnimJoint311;

HAnimJoint HAnimJoint312 = createNode("HAnimJoint");
HAnimJoint312.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid23.joints[30] = HAnimJoint312;

HAnimJoint HAnimJoint313 = createNode("HAnimJoint");
HAnimJoint313.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid23.joints[31] = HAnimJoint313;

HAnimJoint HAnimJoint314 = createNode("HAnimJoint");
HAnimJoint314.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid23.joints[32] = HAnimJoint314;

HAnimJoint HAnimJoint315 = createNode("HAnimJoint");
HAnimJoint315.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid23.joints[33] = HAnimJoint315;

HAnimJoint HAnimJoint316 = createNode("HAnimJoint");
HAnimJoint316.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid23.joints[34] = HAnimJoint316;

HAnimJoint HAnimJoint317 = createNode("HAnimJoint");
HAnimJoint317.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid23.joints[35] = HAnimJoint317;

HAnimJoint HAnimJoint318 = createNode("HAnimJoint");
HAnimJoint318.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid23.joints[36] = HAnimJoint318;

HAnimJoint HAnimJoint319 = createNode("HAnimJoint");
HAnimJoint319.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid23.joints[37] = HAnimJoint319;

HAnimJoint HAnimJoint320 = createNode("HAnimJoint");
HAnimJoint320.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid23.joints[38] = HAnimJoint320;

HAnimJoint HAnimJoint321 = createNode("HAnimJoint");
HAnimJoint321.USE = "hanim_l_talocrural";
HAnimHumanoid23.joints[39] = HAnimJoint321;

HAnimJoint HAnimJoint322 = createNode("HAnimJoint");
HAnimJoint322.USE = "hanim_l_tarsal_distal_interphalangeal_1";
HAnimHumanoid23.joints[40] = HAnimJoint322;

HAnimJoint HAnimJoint323 = createNode("HAnimJoint");
HAnimJoint323.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid23.joints[41] = HAnimJoint323;

HAnimJoint HAnimJoint324 = createNode("HAnimJoint");
HAnimJoint324.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid23.joints[42] = HAnimJoint324;

HAnimJoint HAnimJoint325 = createNode("HAnimJoint");
HAnimJoint325.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid23.joints[43] = HAnimJoint325;

HAnimJoint HAnimJoint326 = createNode("HAnimJoint");
HAnimJoint326.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid23.joints[44] = HAnimJoint326;

HAnimJoint HAnimJoint327 = createNode("HAnimJoint");
HAnimJoint327.USE = "hanim_l_tarsal_proximal_interphalangeal_1";
HAnimHumanoid23.joints[45] = HAnimJoint327;

HAnimJoint HAnimJoint328 = createNode("HAnimJoint");
HAnimJoint328.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid23.joints[46] = HAnimJoint328;

HAnimJoint HAnimJoint329 = createNode("HAnimJoint");
HAnimJoint329.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid23.joints[47] = HAnimJoint329;

HAnimJoint HAnimJoint330 = createNode("HAnimJoint");
HAnimJoint330.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid23.joints[48] = HAnimJoint330;

HAnimJoint HAnimJoint331 = createNode("HAnimJoint");
HAnimJoint331.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid23.joints[49] = HAnimJoint331;

HAnimJoint HAnimJoint332 = createNode("HAnimJoint");
HAnimJoint332.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid23.joints[50] = HAnimJoint332;

HAnimJoint HAnimJoint333 = createNode("HAnimJoint");
HAnimJoint333.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid23.joints[51] = HAnimJoint333;

HAnimJoint HAnimJoint334 = createNode("HAnimJoint");
HAnimJoint334.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid23.joints[52] = HAnimJoint334;

HAnimJoint HAnimJoint335 = createNode("HAnimJoint");
HAnimJoint335.USE = "hanim_l_tarsometatarsal_5";
HAnimHumanoid23.joints[53] = HAnimJoint335;

HAnimJoint HAnimJoint336 = createNode("HAnimJoint");
HAnimJoint336.USE = "hanim_l_transversetarsal";
HAnimHumanoid23.joints[54] = HAnimJoint336;

children[1] = HAnimHumanoid23;

}

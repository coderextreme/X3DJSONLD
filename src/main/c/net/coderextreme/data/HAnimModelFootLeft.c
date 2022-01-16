#include "/c/x3d-code/www.web3d.org/x3d/languages/c/X3DLib/X3DLib.h"
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
meta3.content = "HAnimModelFootLeft.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "Left foot, using high-fidelity definitions for HAnim version 2.0";
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
meta9.name = "warning";
meta9.content = "TODO will X3D HAnim component add a new level to support LOA-4 functionality?";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "info";
meta10.content = "TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "https://www.web3d.org/working-groups/humanoid-animation-HAnim";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "https://www.web3d.org/documents/specifications/19774/V2.0";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "reference";
meta15.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "reference";
meta16.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "subject";
meta17.content = "X3D HAnim humanoid animation";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "TODO";
meta18.content = "Integrate and confirm Segment/Joint names, Viewpoints.";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "identifier";
meta19.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "generator";
meta20.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "license";
meta21.content = "../license.html";
head1.meta[19] = meta21;

head = head1;

WorldInfo WorldInfo23 = createNode("WorldInfo");
WorldInfo23.title = "HAnimModelFootLeft.x3d";
children = new MFNode();

children[0] = WorldInfo23;

HAnimHumanoid HAnimHumanoid24 = createNode("HAnimHumanoid");
HAnimHumanoid24.name = "Foot_Left";
HAnimHumanoid24.DEF = "hanim_Foot_Left";
HAnimHumanoid24.loa = 4;
HAnimHumanoid24.version = "2.0";
//original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
MetadataSet MetadataSet25 = createNode("MetadataSet");
MetadataSet25.name = "HAnimHumanoid.info";
MetadataSet25.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
MetadataString MetadataString26 = createNode("MetadataString");
MetadataString26.name = "authorName";
MetadataString26.value = new MFString(new java.lang.String["Kwan-Hee YOO, Don Brutzman and Joe Williams"]);
MetadataSet25.value = new MFNode();

MetadataSet25.value[0] = MetadataString26;

HAnimHumanoid24.metadata = MetadataSet25;

HAnimJoint HAnimJoint27 = createNode("HAnimJoint");
HAnimJoint27.name = "humanoid_root";
HAnimJoint27.DEF = "hanim_humanoid_root";
HAnimJoint27.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint27.llimit = new MFFloat(new float[0,0,0]);
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model
HAnimJoint HAnimJoint28 = createNode("HAnimJoint");
HAnimJoint28.name = "l_talocrural";
HAnimJoint28.DEF = "hanim_l_talocrural";
HAnimJoint28.description = "connection joint of foot to leg above";
HAnimJoint28.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint28.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment29 = createNode("HAnimSegment");
HAnimSegment29.name = "l_talus";
HAnimSegment29.DEF = "hanim_l_talus";
Transform Transform30 = createNode("Transform");
Shape Shape31 = createNode("Shape");
Shape31.DEF = "HAnimJointShape";
Sphere Sphere32 = createNode("Sphere");
Sphere32.radius = 0.025;
Shape31.geometry = Sphere32;

Appearance Appearance33 = createNode("Appearance");
Appearance33.DEF = "HAnimJointAppearance";
Material Material34 = createNode("Material");
Material34.diffuseColor = new SFColor(new float[0,0,1]);
Appearance33.material = Material34;

Shape31.appearance = Appearance33;

Transform30.children = new MFNode();

Transform30.children[0] = Shape31;

HAnimSegment29.children = new MFNode();

HAnimSegment29.children[0] = Transform30;

Shape Shape35 = createNode("Shape");
Appearance Appearance36 = createNode("Appearance");
Material Material37 = createNode("Material");
Material37.emissiveColor = new SFColor(new float[1,1,1]);
Appearance36.material = Material37;

Shape35.appearance = Appearance36;

IndexedLineSet IndexedLineSet38 = createNode("IndexedLineSet");
IndexedLineSet38.DEF = "TCtoTCN";
IndexedLineSet38.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate39 = createNode("Coordinate");
Coordinate39.point = new MFVec3f(new float[0,0,0,0,-0.3,0]);
IndexedLineSet38.coord = Coordinate39;

Shape35.geometry = IndexedLineSet38;

HAnimSegment29.children[1] = Shape35;

Shape Shape40 = createNode("Shape");
Appearance Appearance41 = createNode("Appearance");
Material Material42 = createNode("Material");
Material42.emissiveColor = new SFColor(new float[1,1,1]);
Appearance41.material = Material42;

Shape40.appearance = Appearance41;

IndexedLineSet IndexedLineSet43 = createNode("IndexedLineSet");
IndexedLineSet43.DEF = "TCtoCC";
IndexedLineSet43.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate44 = createNode("Coordinate");
Coordinate44.point = new MFVec3f(new float[0,0,0,0.2,0.3,0]);
IndexedLineSet43.coord = Coordinate44;

Shape40.geometry = IndexedLineSet43;

HAnimSegment29.children[2] = Shape40;

HAnimJoint28.children = new MFNode();

HAnimJoint28.children[0] = HAnimSegment29;

//TCN
HAnimJoint HAnimJoint45 = createNode("HAnimJoint");
HAnimJoint45.name = "l_talocalcaneonavicular";
HAnimJoint45.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint45.center = new SFVec3f(new float[0,-0.3,0]);
HAnimJoint45.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint45.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment46 = createNode("HAnimSegment");
HAnimSegment46.name = "l_navicular";
HAnimSegment46.DEF = "hanim_l_navicular";
Transform Transform47 = createNode("Transform");
Transform47.translation = new SFVec3f(new float[0,-0.3,0]);
Shape Shape48 = createNode("Shape");
Shape48.USE = "HAnimJointShape";
Transform47.children = new MFNode();

Transform47.children[0] = Shape48;

HAnimSegment46.children = new MFNode();

HAnimSegment46.children[0] = Transform47;

Shape Shape49 = createNode("Shape");
Appearance Appearance50 = createNode("Appearance");
Material Material51 = createNode("Material");
Material51.emissiveColor = new SFColor(new float[1,1,1]);
Appearance50.material = Material51;

Shape49.appearance = Appearance50;

IndexedLineSet IndexedLineSet52 = createNode("IndexedLineSet");
IndexedLineSet52.DEF = "TCNtoCN1";
IndexedLineSet52.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate53 = createNode("Coordinate");
Coordinate53.point = new MFVec3f(new float[0,-0.3,0,-0.1,-0.45,0]);
IndexedLineSet52.coord = Coordinate53;

Shape49.geometry = IndexedLineSet52;

HAnimSegment46.children[1] = Shape49;

Shape Shape54 = createNode("Shape");
Appearance Appearance55 = createNode("Appearance");
Material Material56 = createNode("Material");
Material56.emissiveColor = new SFColor(new float[1,1,1]);
Appearance55.material = Material56;

Shape54.appearance = Appearance55;

IndexedLineSet IndexedLineSet57 = createNode("IndexedLineSet");
IndexedLineSet57.DEF = "TCNtoCN2";
IndexedLineSet57.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate58 = createNode("Coordinate");
Coordinate58.point = new MFVec3f(new float[0,-0.3,0,0,-0.45,0]);
IndexedLineSet57.coord = Coordinate58;

Shape54.geometry = IndexedLineSet57;

HAnimSegment46.children[2] = Shape54;

Shape Shape59 = createNode("Shape");
Appearance Appearance60 = createNode("Appearance");
Material Material61 = createNode("Material");
Material61.emissiveColor = new SFColor(new float[1,1,1]);
Appearance60.material = Material61;

Shape59.appearance = Appearance60;

IndexedLineSet IndexedLineSet62 = createNode("IndexedLineSet");
IndexedLineSet62.DEF = "TCNtoCN3";
IndexedLineSet62.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate63 = createNode("Coordinate");
Coordinate63.point = new MFVec3f(new float[0,-0.3,0,0.1,-0.4,0]);
IndexedLineSet62.coord = Coordinate63;

Shape59.geometry = IndexedLineSet62;

HAnimSegment46.children[3] = Shape59;

HAnimJoint45.children = new MFNode();

HAnimJoint45.children[0] = HAnimSegment46;

//CN1
HAnimJoint HAnimJoint64 = createNode("HAnimJoint");
HAnimJoint64.name = "l_cuneonavicular_1";
HAnimJoint64.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint64.center = new SFVec3f(new float[-0.1,-0.45,0]);
HAnimJoint64.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint64.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment65 = createNode("HAnimSegment");
HAnimSegment65.name = "l_cuneiform_1";
HAnimSegment65.DEF = "hanim_l_cuneiform_1";
Transform Transform66 = createNode("Transform");
Transform66.translation = new SFVec3f(new float[-0.1,-0.45,0]);
Shape Shape67 = createNode("Shape");
Shape67.USE = "HAnimJointShape";
Transform66.children = new MFNode();

Transform66.children[0] = Shape67;

HAnimSegment65.children = new MFNode();

HAnimSegment65.children[0] = Transform66;

Shape Shape68 = createNode("Shape");
Appearance Appearance69 = createNode("Appearance");
Material Material70 = createNode("Material");
Material70.emissiveColor = new SFColor(new float[1,1,1]);
Appearance69.material = Material70;

Shape68.appearance = Appearance69;

IndexedLineSet IndexedLineSet71 = createNode("IndexedLineSet");
IndexedLineSet71.DEF = "CN1toTMT1";
IndexedLineSet71.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate72 = createNode("Coordinate");
Coordinate72.point = new MFVec3f(new float[-0.1,-0.45,0,-0.1,-0.6,0]);
IndexedLineSet71.coord = Coordinate72;

Shape68.geometry = IndexedLineSet71;

HAnimSegment65.children[1] = Shape68;

HAnimJoint64.children = new MFNode();

HAnimJoint64.children[0] = HAnimSegment65;

HAnimJoint HAnimJoint73 = createNode("HAnimJoint");
HAnimJoint73.name = "l_tarsometatarsal_1";
HAnimJoint73.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint73.center = new SFVec3f(new float[-0.1,-0.6,0]);
HAnimJoint73.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint73.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment74 = createNode("HAnimSegment");
HAnimSegment74.name = "l_metatarsal_1";
HAnimSegment74.DEF = "hanim_l_metatarsal_1";
Transform Transform75 = createNode("Transform");
Transform75.translation = new SFVec3f(new float[-0.1,-0.6,0]);
Shape Shape76 = createNode("Shape");
Shape76.USE = "HAnimJointShape";
Transform75.children = new MFNode();

Transform75.children[0] = Shape76;

HAnimSegment74.children = new MFNode();

HAnimSegment74.children[0] = Transform75;

Shape Shape77 = createNode("Shape");
Appearance Appearance78 = createNode("Appearance");
Material Material79 = createNode("Material");
Material79.emissiveColor = new SFColor(new float[1,1,1]);
Appearance78.material = Material79;

Shape77.appearance = Appearance78;

IndexedLineSet IndexedLineSet80 = createNode("IndexedLineSet");
IndexedLineSet80.DEF = "TMT1toMTP1";
IndexedLineSet80.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate81 = createNode("Coordinate");
Coordinate81.point = new MFVec3f(new float[-0.1,-0.6,0,-0.1,-0.9,0]);
IndexedLineSet80.coord = Coordinate81;

Shape77.geometry = IndexedLineSet80;

HAnimSegment74.children[1] = Shape77;

HAnimJoint73.children = new MFNode();

HAnimJoint73.children[0] = HAnimSegment74;

HAnimJoint HAnimJoint82 = createNode("HAnimJoint");
HAnimJoint82.name = "l_metatarsophalangeal_1";
HAnimJoint82.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint82.center = new SFVec3f(new float[-0.1,-0.9,0]);
HAnimJoint82.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint82.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment83 = createNode("HAnimSegment");
HAnimSegment83.name = "l_tarsal_proximal_phalanx_1";
HAnimSegment83.DEF = "hanim_l_tarsal_proximal_phalanx_1";
Transform Transform84 = createNode("Transform");
Transform84.translation = new SFVec3f(new float[-0.1,-0.9,0]);
Shape Shape85 = createNode("Shape");
Shape85.USE = "HAnimJointShape";
Transform84.children = new MFNode();

Transform84.children[0] = Shape85;

HAnimSegment83.children = new MFNode();

HAnimSegment83.children[0] = Transform84;

Shape Shape86 = createNode("Shape");
Appearance Appearance87 = createNode("Appearance");
Material Material88 = createNode("Material");
Material88.emissiveColor = new SFColor(new float[1,1,1]);
Appearance87.material = Material88;

Shape86.appearance = Appearance87;

IndexedLineSet IndexedLineSet89 = createNode("IndexedLineSet");
IndexedLineSet89.DEF = "MTP1toIP1";
IndexedLineSet89.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate90 = createNode("Coordinate");
Coordinate90.point = new MFVec3f(new float[-0.1,-0.9,0,-0.1,-1.05,0]);
IndexedLineSet89.coord = Coordinate90;

Shape86.geometry = IndexedLineSet89;

HAnimSegment83.children[1] = Shape86;

HAnimJoint82.children = new MFNode();

HAnimJoint82.children[0] = HAnimSegment83;

HAnimJoint HAnimJoint91 = createNode("HAnimJoint");
HAnimJoint91.name = "l_tarsal_interphalangeal_1";
HAnimJoint91.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint91.center = new SFVec3f(new float[-0.1,-1.05,0]);
HAnimJoint91.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint91.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment92 = createNode("HAnimSegment");
HAnimSegment92.name = "l_tarsal_distal_phalanx_1";
HAnimSegment92.DEF = "hanim_l_tarsal_distal_phalanx_1";
Transform Transform93 = createNode("Transform");
Transform93.translation = new SFVec3f(new float[-0.1,-1.05,0]);
Shape Shape94 = createNode("Shape");
Shape94.USE = "HAnimJointShape";
Transform93.children = new MFNode();

Transform93.children[0] = Shape94;

HAnimSegment92.children = new MFNode();

HAnimSegment92.children[0] = Transform93;

Shape Shape95 = createNode("Shape");
Appearance Appearance96 = createNode("Appearance");
Material Material97 = createNode("Material");
Material97.emissiveColor = new SFColor(new float[1,1,1]);
Appearance96.material = Material97;

Shape95.appearance = Appearance96;

IndexedLineSet IndexedLineSet98 = createNode("IndexedLineSet");
IndexedLineSet98.DEF = "tiptoe_l_tarsal_distal_interphalangeal_1";
IndexedLineSet98.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate99 = createNode("Coordinate");
Coordinate99.point = new MFVec3f(new float[-0.1,-1.05,0,-0.1,-1.1,0]);
IndexedLineSet98.coord = Coordinate99;

Shape95.geometry = IndexedLineSet98;

HAnimSegment92.children[1] = Shape95;

HAnimJoint91.children = new MFNode();

HAnimJoint91.children[0] = HAnimSegment92;

HAnimJoint82.children[1] = HAnimJoint91;

HAnimJoint73.children[1] = HAnimJoint82;

HAnimJoint64.children[1] = HAnimJoint73;

HAnimJoint45.children[1] = HAnimJoint64;

//CN2
HAnimJoint HAnimJoint100 = createNode("HAnimJoint");
HAnimJoint100.name = "l_cuneonavicular_2";
HAnimJoint100.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint100.center = new SFVec3f(new float[0,-0.45,0]);
HAnimJoint100.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint100.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment101 = createNode("HAnimSegment");
HAnimSegment101.name = "l_cuneiform_2";
HAnimSegment101.DEF = "hanim_l_cuneiform_2";
Transform Transform102 = createNode("Transform");
Transform102.translation = new SFVec3f(new float[0,-0.45,0]);
Shape Shape103 = createNode("Shape");
Shape103.USE = "HAnimJointShape";
Transform102.children = new MFNode();

Transform102.children[0] = Shape103;

HAnimSegment101.children = new MFNode();

HAnimSegment101.children[0] = Transform102;

Shape Shape104 = createNode("Shape");
Appearance Appearance105 = createNode("Appearance");
Material Material106 = createNode("Material");
Material106.emissiveColor = new SFColor(new float[1,1,1]);
Appearance105.material = Material106;

Shape104.appearance = Appearance105;

IndexedLineSet IndexedLineSet107 = createNode("IndexedLineSet");
IndexedLineSet107.DEF = "CN2toTMT2";
IndexedLineSet107.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate108 = createNode("Coordinate");
Coordinate108.point = new MFVec3f(new float[0,-0.45,0,0.05,-0.6,0]);
IndexedLineSet107.coord = Coordinate108;

Shape104.geometry = IndexedLineSet107;

HAnimSegment101.children[1] = Shape104;

HAnimJoint100.children = new MFNode();

HAnimJoint100.children[0] = HAnimSegment101;

HAnimJoint HAnimJoint109 = createNode("HAnimJoint");
HAnimJoint109.name = "l_tarsometatarsal_2";
HAnimJoint109.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint109.center = new SFVec3f(new float[0.05,-0.6,0]);
HAnimJoint109.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint109.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment110 = createNode("HAnimSegment");
HAnimSegment110.name = "l_metatarsal_2";
HAnimSegment110.DEF = "hanim_l_metatarsal_2";
Transform Transform111 = createNode("Transform");
Transform111.translation = new SFVec3f(new float[0.05,-0.6,0]);
Shape Shape112 = createNode("Shape");
Shape112.USE = "HAnimJointShape";
Transform111.children = new MFNode();

Transform111.children[0] = Shape112;

HAnimSegment110.children = new MFNode();

HAnimSegment110.children[0] = Transform111;

Shape Shape113 = createNode("Shape");
Appearance Appearance114 = createNode("Appearance");
Material Material115 = createNode("Material");
Material115.emissiveColor = new SFColor(new float[1,1,1]);
Appearance114.material = Material115;

Shape113.appearance = Appearance114;

IndexedLineSet IndexedLineSet116 = createNode("IndexedLineSet");
IndexedLineSet116.DEF = "TMT2toMTP2";
IndexedLineSet116.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate117 = createNode("Coordinate");
Coordinate117.point = new MFVec3f(new float[0.05,-0.6,0,0.05,-0.9,0]);
IndexedLineSet116.coord = Coordinate117;

Shape113.geometry = IndexedLineSet116;

HAnimSegment110.children[1] = Shape113;

HAnimJoint109.children = new MFNode();

HAnimJoint109.children[0] = HAnimSegment110;

HAnimJoint HAnimJoint118 = createNode("HAnimJoint");
HAnimJoint118.name = "l_metatarsophalangeal_2";
HAnimJoint118.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint118.center = new SFVec3f(new float[0.05,-0.9,0]);
HAnimJoint118.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint118.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment119 = createNode("HAnimSegment");
HAnimSegment119.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment119.DEF = "hanim_l_tarsal_proximal_phalanx_2";
Transform Transform120 = createNode("Transform");
Transform120.translation = new SFVec3f(new float[0.05,-0.9,0]);
Shape Shape121 = createNode("Shape");
Shape121.USE = "HAnimJointShape";
Transform120.children = new MFNode();

Transform120.children[0] = Shape121;

HAnimSegment119.children = new MFNode();

HAnimSegment119.children[0] = Transform120;

Shape Shape122 = createNode("Shape");
Appearance Appearance123 = createNode("Appearance");
Material Material124 = createNode("Material");
Material124.emissiveColor = new SFColor(new float[1,1,1]);
Appearance123.material = Material124;

Shape122.appearance = Appearance123;

IndexedLineSet IndexedLineSet125 = createNode("IndexedLineSet");
IndexedLineSet125.DEF = "MTP2toPIP2";
IndexedLineSet125.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate126 = createNode("Coordinate");
Coordinate126.point = new MFVec3f(new float[0.05,-0.9,0,0.05,-1.05,0]);
IndexedLineSet125.coord = Coordinate126;

Shape122.geometry = IndexedLineSet125;

HAnimSegment119.children[1] = Shape122;

HAnimJoint118.children = new MFNode();

HAnimJoint118.children[0] = HAnimSegment119;

HAnimJoint HAnimJoint127 = createNode("HAnimJoint");
HAnimJoint127.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint127.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint127.center = new SFVec3f(new float[0.05,-1.05,0]);
HAnimJoint127.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint127.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment128 = createNode("HAnimSegment");
HAnimSegment128.name = "l_tarsal_middle_phalanx_2";
HAnimSegment128.DEF = "hanim_l_tarsal_middle_phalanx_2";
Transform Transform129 = createNode("Transform");
Transform129.translation = new SFVec3f(new float[0.05,-1.05,0]);
Shape Shape130 = createNode("Shape");
Shape130.USE = "HAnimJointShape";
Transform129.children = new MFNode();

Transform129.children[0] = Shape130;

HAnimSegment128.children = new MFNode();

HAnimSegment128.children[0] = Transform129;

Shape Shape131 = createNode("Shape");
Appearance Appearance132 = createNode("Appearance");
Material Material133 = createNode("Material");
Material133.emissiveColor = new SFColor(new float[1,1,1]);
Appearance132.material = Material133;

Shape131.appearance = Appearance132;

IndexedLineSet IndexedLineSet134 = createNode("IndexedLineSet");
IndexedLineSet134.DEF = "PIP2toDIP2";
IndexedLineSet134.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate135 = createNode("Coordinate");
Coordinate135.point = new MFVec3f(new float[0.05,-1.05,0,0.05,-1.12,0]);
IndexedLineSet134.coord = Coordinate135;

Shape131.geometry = IndexedLineSet134;

HAnimSegment128.children[1] = Shape131;

HAnimJoint127.children = new MFNode();

HAnimJoint127.children[0] = HAnimSegment128;

HAnimJoint HAnimJoint136 = createNode("HAnimJoint");
HAnimJoint136.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint136.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint136.center = new SFVec3f(new float[0.05,-1.12,0]);
HAnimJoint136.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint136.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment137 = createNode("HAnimSegment");
HAnimSegment137.name = "l_tarsal_distal_phalanx_2";
HAnimSegment137.DEF = "hanim_l_tarsal_distal_phalanx_2";
Transform Transform138 = createNode("Transform");
Transform138.translation = new SFVec3f(new float[0.05,-1.12,0]);
Shape Shape139 = createNode("Shape");
Shape139.USE = "HAnimJointShape";
Transform138.children = new MFNode();

Transform138.children[0] = Shape139;

HAnimSegment137.children = new MFNode();

HAnimSegment137.children[0] = Transform138;

Shape Shape140 = createNode("Shape");
Appearance Appearance141 = createNode("Appearance");
Material Material142 = createNode("Material");
Material142.emissiveColor = new SFColor(new float[1,1,1]);
Appearance141.material = Material142;

Shape140.appearance = Appearance141;

IndexedLineSet IndexedLineSet143 = createNode("IndexedLineSet");
IndexedLineSet143.DEF = "tiptoe_l_tarsal_distal_phalanx_2";
IndexedLineSet143.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate144 = createNode("Coordinate");
Coordinate144.point = new MFVec3f(new float[0.05,-1.12,0,0.05,-1.16,0]);
IndexedLineSet143.coord = Coordinate144;

Shape140.geometry = IndexedLineSet143;

HAnimSegment137.children[1] = Shape140;

HAnimJoint136.children = new MFNode();

HAnimJoint136.children[0] = HAnimSegment137;

HAnimJoint127.children[1] = HAnimJoint136;

HAnimJoint118.children[1] = HAnimJoint127;

HAnimJoint109.children[1] = HAnimJoint118;

HAnimJoint100.children[1] = HAnimJoint109;

HAnimJoint45.children[2] = HAnimJoint100;

//CN3
HAnimJoint HAnimJoint145 = createNode("HAnimJoint");
HAnimJoint145.name = "l_cuneonavicular_3";
HAnimJoint145.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint145.center = new SFVec3f(new float[0.1,-0.4,0]);
HAnimJoint145.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint145.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment146 = createNode("HAnimSegment");
HAnimSegment146.name = "l_cuneiform_3";
HAnimSegment146.DEF = "hanim_l_cuneiform_3";
Transform Transform147 = createNode("Transform");
Transform147.translation = new SFVec3f(new float[0.1,-0.4,0]);
Shape Shape148 = createNode("Shape");
Shape148.USE = "HAnimJointShape";
Transform147.children = new MFNode();

Transform147.children[0] = Shape148;

HAnimSegment146.children = new MFNode();

HAnimSegment146.children[0] = Transform147;

Shape Shape149 = createNode("Shape");
Appearance Appearance150 = createNode("Appearance");
Material Material151 = createNode("Material");
Material151.emissiveColor = new SFColor(new float[1,1,1]);
Appearance150.material = Material151;

Shape149.appearance = Appearance150;

IndexedLineSet IndexedLineSet152 = createNode("IndexedLineSet");
IndexedLineSet152.DEF = "CN3toTMT3";
IndexedLineSet152.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate153 = createNode("Coordinate");
Coordinate153.point = new MFVec3f(new float[0.1,-0.4,0,0.15,-0.6,0]);
IndexedLineSet152.coord = Coordinate153;

Shape149.geometry = IndexedLineSet152;

HAnimSegment146.children[1] = Shape149;

HAnimJoint145.children = new MFNode();

HAnimJoint145.children[0] = HAnimSegment146;

HAnimJoint HAnimJoint154 = createNode("HAnimJoint");
HAnimJoint154.name = "l_tarsometatarsal_3";
HAnimJoint154.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint154.center = new SFVec3f(new float[0.15,-0.6,0]);
HAnimJoint154.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint154.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment155 = createNode("HAnimSegment");
HAnimSegment155.name = "l_metatarsal_3";
HAnimSegment155.DEF = "hanim_l_metatarsal_3";
Transform Transform156 = createNode("Transform");
Transform156.translation = new SFVec3f(new float[0.15,-0.6,0]);
Shape Shape157 = createNode("Shape");
Shape157.USE = "HAnimJointShape";
Transform156.children = new MFNode();

Transform156.children[0] = Shape157;

HAnimSegment155.children = new MFNode();

HAnimSegment155.children[0] = Transform156;

Shape Shape158 = createNode("Shape");
Appearance Appearance159 = createNode("Appearance");
Material Material160 = createNode("Material");
Material160.emissiveColor = new SFColor(new float[1,1,1]);
Appearance159.material = Material160;

Shape158.appearance = Appearance159;

IndexedLineSet IndexedLineSet161 = createNode("IndexedLineSet");
IndexedLineSet161.DEF = "TMT3toMTP3";
IndexedLineSet161.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate162 = createNode("Coordinate");
Coordinate162.point = new MFVec3f(new float[0.15,-0.6,0,0.15,-0.9,0]);
IndexedLineSet161.coord = Coordinate162;

Shape158.geometry = IndexedLineSet161;

HAnimSegment155.children[1] = Shape158;

HAnimJoint154.children = new MFNode();

HAnimJoint154.children[0] = HAnimSegment155;

HAnimJoint HAnimJoint163 = createNode("HAnimJoint");
HAnimJoint163.name = "l_metatarsophalangeal_3";
HAnimJoint163.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint163.center = new SFVec3f(new float[0.15,-0.9,0]);
HAnimJoint163.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint163.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment164 = createNode("HAnimSegment");
HAnimSegment164.name = "l_tarsal_proximal_phalanx_3";
HAnimSegment164.DEF = "hanim_l_tarsal_proximal_phalanx_3";
Transform Transform165 = createNode("Transform");
Transform165.translation = new SFVec3f(new float[0.15,-0.9,0]);
Shape Shape166 = createNode("Shape");
Shape166.USE = "HAnimJointShape";
Transform165.children = new MFNode();

Transform165.children[0] = Shape166;

HAnimSegment164.children = new MFNode();

HAnimSegment164.children[0] = Transform165;

Shape Shape167 = createNode("Shape");
Appearance Appearance168 = createNode("Appearance");
Material Material169 = createNode("Material");
Material169.emissiveColor = new SFColor(new float[1,1,1]);
Appearance168.material = Material169;

Shape167.appearance = Appearance168;

IndexedLineSet IndexedLineSet170 = createNode("IndexedLineSet");
IndexedLineSet170.DEF = "MTP3toPIP3";
IndexedLineSet170.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate171 = createNode("Coordinate");
Coordinate171.point = new MFVec3f(new float[0.15,-0.9,0,0.15,-1.05,0]);
IndexedLineSet170.coord = Coordinate171;

Shape167.geometry = IndexedLineSet170;

HAnimSegment164.children[1] = Shape167;

HAnimJoint163.children = new MFNode();

HAnimJoint163.children[0] = HAnimSegment164;

HAnimJoint HAnimJoint172 = createNode("HAnimJoint");
HAnimJoint172.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint172.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint172.center = new SFVec3f(new float[0.15,-1.05,0]);
HAnimJoint172.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint172.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment173 = createNode("HAnimSegment");
HAnimSegment173.name = "l_tarsal_middle_phalanx_3";
HAnimSegment173.DEF = "hanim_l_tarsal_middle_phalanx_3";
Transform Transform174 = createNode("Transform");
Transform174.translation = new SFVec3f(new float[0.15,-1.05,0]);
Shape Shape175 = createNode("Shape");
Shape175.USE = "HAnimJointShape";
Transform174.children = new MFNode();

Transform174.children[0] = Shape175;

HAnimSegment173.children = new MFNode();

HAnimSegment173.children[0] = Transform174;

Shape Shape176 = createNode("Shape");
Appearance Appearance177 = createNode("Appearance");
Material Material178 = createNode("Material");
Material178.emissiveColor = new SFColor(new float[1,1,1]);
Appearance177.material = Material178;

Shape176.appearance = Appearance177;

IndexedLineSet IndexedLineSet179 = createNode("IndexedLineSet");
IndexedLineSet179.DEF = "PIP3toDIP3";
IndexedLineSet179.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate180 = createNode("Coordinate");
Coordinate180.point = new MFVec3f(new float[0.15,-1.05,0,0.15,-1.13,0]);
IndexedLineSet179.coord = Coordinate180;

Shape176.geometry = IndexedLineSet179;

HAnimSegment173.children[1] = Shape176;

HAnimJoint172.children = new MFNode();

HAnimJoint172.children[0] = HAnimSegment173;

HAnimJoint HAnimJoint181 = createNode("HAnimJoint");
HAnimJoint181.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint181.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint181.center = new SFVec3f(new float[0.15,-1.13,0]);
HAnimJoint181.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint181.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment182 = createNode("HAnimSegment");
HAnimSegment182.name = "l_tarsal_distal_phalanx_3";
HAnimSegment182.DEF = "hanim_l_tarsal_distal_phalanx_3";
Transform Transform183 = createNode("Transform");
Transform183.translation = new SFVec3f(new float[0.15,-1.13,0]);
Shape Shape184 = createNode("Shape");
Shape184.USE = "HAnimJointShape";
Transform183.children = new MFNode();

Transform183.children[0] = Shape184;

HAnimSegment182.children = new MFNode();

HAnimSegment182.children[0] = Transform183;

Shape Shape185 = createNode("Shape");
Appearance Appearance186 = createNode("Appearance");
Material Material187 = createNode("Material");
Material187.emissiveColor = new SFColor(new float[1,1,1]);
Appearance186.material = Material187;

Shape185.appearance = Appearance186;

IndexedLineSet IndexedLineSet188 = createNode("IndexedLineSet");
IndexedLineSet188.DEF = "tiptoe_l_tarsal_distal_interphalangeal_3";
IndexedLineSet188.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate189 = createNode("Coordinate");
Coordinate189.point = new MFVec3f(new float[0.15,-1.13,0,0.15,-1.16,0]);
IndexedLineSet188.coord = Coordinate189;

Shape185.geometry = IndexedLineSet188;

HAnimSegment182.children[1] = Shape185;

HAnimJoint181.children = new MFNode();

HAnimJoint181.children[0] = HAnimSegment182;

HAnimJoint172.children[1] = HAnimJoint181;

HAnimJoint163.children[1] = HAnimJoint172;

HAnimJoint154.children[1] = HAnimJoint163;

HAnimJoint145.children[1] = HAnimJoint154;

HAnimJoint45.children[3] = HAnimJoint145;

HAnimJoint28.children[1] = HAnimJoint45;

//CC
HAnimJoint HAnimJoint190 = createNode("HAnimJoint");
HAnimJoint190.name = "l_calcaneocuboid";
HAnimJoint190.DEF = "hanim_l_calcaneocuboid";
HAnimJoint190.center = new SFVec3f(new float[0.2,0.3,0]);
HAnimJoint190.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint190.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment191 = createNode("HAnimSegment");
HAnimSegment191.name = "l_calcaneus";
HAnimSegment191.DEF = "hanim_l_calcaneus";
Transform Transform192 = createNode("Transform");
Transform192.translation = new SFVec3f(new float[0.2,0.3,0]);
Shape Shape193 = createNode("Shape");
Shape193.USE = "HAnimJointShape";
Transform192.children = new MFNode();

Transform192.children[0] = Shape193;

HAnimSegment191.children = new MFNode();

HAnimSegment191.children[0] = Transform192;

Shape Shape194 = createNode("Shape");
Appearance Appearance195 = createNode("Appearance");
Material Material196 = createNode("Material");
Material196.emissiveColor = new SFColor(new float[1,1,1]);
Appearance195.material = Material196;

Shape194.appearance = Appearance195;

IndexedLineSet IndexedLineSet197 = createNode("IndexedLineSet");
IndexedLineSet197.DEF = "CCtoTT";
IndexedLineSet197.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate198 = createNode("Coordinate");
Coordinate198.point = new MFVec3f(new float[0.2,0.3,0,0.21,-0.3,0]);
IndexedLineSet197.coord = Coordinate198;

Shape194.geometry = IndexedLineSet197;

HAnimSegment191.children[1] = Shape194;

HAnimJoint190.children = new MFNode();

HAnimJoint190.children[0] = HAnimSegment191;

//TT
HAnimJoint HAnimJoint199 = createNode("HAnimJoint");
HAnimJoint199.name = "l_transversetarsal";
HAnimJoint199.DEF = "hanim_l_transversetarsal";
HAnimJoint199.center = new SFVec3f(new float[0.21,-0.3,0]);
HAnimJoint199.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint199.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment200 = createNode("HAnimSegment");
HAnimSegment200.name = "l_cuboid";
HAnimSegment200.DEF = "hanim_l_cuboid";
Transform Transform201 = createNode("Transform");
Transform201.translation = new SFVec3f(new float[0.21,-0.3,0]);
Shape Shape202 = createNode("Shape");
Shape202.USE = "HAnimJointShape";
Transform201.children = new MFNode();

Transform201.children[0] = Shape202;

HAnimSegment200.children = new MFNode();

HAnimSegment200.children[0] = Transform201;

Shape Shape203 = createNode("Shape");
Appearance Appearance204 = createNode("Appearance");
Material Material205 = createNode("Material");
Material205.emissiveColor = new SFColor(new float[1,1,1]);
Appearance204.material = Material205;

Shape203.appearance = Appearance204;

IndexedLineSet IndexedLineSet206 = createNode("IndexedLineSet");
IndexedLineSet206.DEF = "TTtoTMT4";
IndexedLineSet206.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate207 = createNode("Coordinate");
Coordinate207.point = new MFVec3f(new float[0.21,-0.3,0,0.25,-0.58,0]);
IndexedLineSet206.coord = Coordinate207;

Shape203.geometry = IndexedLineSet206;

HAnimSegment200.children[1] = Shape203;

Shape Shape208 = createNode("Shape");
Appearance Appearance209 = createNode("Appearance");
Material Material210 = createNode("Material");
Material210.emissiveColor = new SFColor(new float[1,1,1]);
Appearance209.material = Material210;

Shape208.appearance = Appearance209;

IndexedLineSet IndexedLineSet211 = createNode("IndexedLineSet");
IndexedLineSet211.DEF = "TTtoTMT5";
IndexedLineSet211.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate212 = createNode("Coordinate");
Coordinate212.point = new MFVec3f(new float[0.21,-0.3,0,0.33,-0.52,0]);
IndexedLineSet211.coord = Coordinate212;

Shape208.geometry = IndexedLineSet211;

HAnimSegment200.children[2] = Shape208;

HAnimJoint199.children = new MFNode();

HAnimJoint199.children[0] = HAnimSegment200;

//TMT4
HAnimJoint HAnimJoint213 = createNode("HAnimJoint");
HAnimJoint213.name = "l_tarsometatarsal_4";
HAnimJoint213.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint213.center = new SFVec3f(new float[0.25,-0.58,0]);
HAnimJoint213.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint213.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment214 = createNode("HAnimSegment");
HAnimSegment214.name = "l_metatarsal_4";
HAnimSegment214.DEF = "hanim_l_metatarsal_4";
Transform Transform215 = createNode("Transform");
Transform215.translation = new SFVec3f(new float[0.25,-0.58,0]);
Shape Shape216 = createNode("Shape");
Shape216.USE = "HAnimJointShape";
Transform215.children = new MFNode();

Transform215.children[0] = Shape216;

HAnimSegment214.children = new MFNode();

HAnimSegment214.children[0] = Transform215;

Shape Shape217 = createNode("Shape");
Appearance Appearance218 = createNode("Appearance");
Material Material219 = createNode("Material");
Material219.emissiveColor = new SFColor(new float[1,1,1]);
Appearance218.material = Material219;

Shape217.appearance = Appearance218;

IndexedLineSet IndexedLineSet220 = createNode("IndexedLineSet");
IndexedLineSet220.DEF = "TMT4toMTP4";
IndexedLineSet220.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate221 = createNode("Coordinate");
Coordinate221.point = new MFVec3f(new float[0.25,-0.58,0,0.25,-0.87,0]);
IndexedLineSet220.coord = Coordinate221;

Shape217.geometry = IndexedLineSet220;

HAnimSegment214.children[1] = Shape217;

HAnimJoint213.children = new MFNode();

HAnimJoint213.children[0] = HAnimSegment214;

HAnimJoint HAnimJoint222 = createNode("HAnimJoint");
HAnimJoint222.name = "l_metatarsophalangeal_4";
HAnimJoint222.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint222.center = new SFVec3f(new float[0.25,-0.87,0]);
HAnimJoint222.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint222.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment223 = createNode("HAnimSegment");
HAnimSegment223.name = "l_tarsal_proximal_phalanx_4";
HAnimSegment223.DEF = "hanim_l_tarsal_proximal_phalanx_4";
Transform Transform224 = createNode("Transform");
Transform224.translation = new SFVec3f(new float[0.25,-0.87,0]);
Shape Shape225 = createNode("Shape");
Shape225.USE = "HAnimJointShape";
Transform224.children = new MFNode();

Transform224.children[0] = Shape225;

HAnimSegment223.children = new MFNode();

HAnimSegment223.children[0] = Transform224;

Shape Shape226 = createNode("Shape");
Appearance Appearance227 = createNode("Appearance");
Material Material228 = createNode("Material");
Material228.emissiveColor = new SFColor(new float[1,1,1]);
Appearance227.material = Material228;

Shape226.appearance = Appearance227;

IndexedLineSet IndexedLineSet229 = createNode("IndexedLineSet");
IndexedLineSet229.DEF = "MTP4toPIP4";
IndexedLineSet229.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate230 = createNode("Coordinate");
Coordinate230.point = new MFVec3f(new float[0.25,-0.87,0,0.25,-1,0]);
IndexedLineSet229.coord = Coordinate230;

Shape226.geometry = IndexedLineSet229;

HAnimSegment223.children[1] = Shape226;

HAnimJoint222.children = new MFNode();

HAnimJoint222.children[0] = HAnimSegment223;

HAnimJoint HAnimJoint231 = createNode("HAnimJoint");
HAnimJoint231.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint231.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint231.center = new SFVec3f(new float[0.25,-1,0]);
HAnimJoint231.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint231.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment232 = createNode("HAnimSegment");
HAnimSegment232.name = "l_tarsal_middle_phalanx_4";
HAnimSegment232.DEF = "hanim_l_tarsal_middle_phalanx_4";
Transform Transform233 = createNode("Transform");
Transform233.translation = new SFVec3f(new float[0.25,-1,0]);
Shape Shape234 = createNode("Shape");
Shape234.USE = "HAnimJointShape";
Transform233.children = new MFNode();

Transform233.children[0] = Shape234;

HAnimSegment232.children = new MFNode();

HAnimSegment232.children[0] = Transform233;

Shape Shape235 = createNode("Shape");
Appearance Appearance236 = createNode("Appearance");
Material Material237 = createNode("Material");
Material237.emissiveColor = new SFColor(new float[1,1,1]);
Appearance236.material = Material237;

Shape235.appearance = Appearance236;

IndexedLineSet IndexedLineSet238 = createNode("IndexedLineSet");
IndexedLineSet238.DEF = "PIP4toDIP4";
IndexedLineSet238.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate239 = createNode("Coordinate");
Coordinate239.point = new MFVec3f(new float[0.25,-1,0,0.25,-1.1,0]);
IndexedLineSet238.coord = Coordinate239;

Shape235.geometry = IndexedLineSet238;

HAnimSegment232.children[1] = Shape235;

HAnimJoint231.children = new MFNode();

HAnimJoint231.children[0] = HAnimSegment232;

HAnimJoint HAnimJoint240 = createNode("HAnimJoint");
HAnimJoint240.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint240.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint240.center = new SFVec3f(new float[0.25,-1.1,0]);
HAnimJoint240.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint240.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment241 = createNode("HAnimSegment");
HAnimSegment241.name = "l_tarsal_distal_phalanx_4";
HAnimSegment241.DEF = "hanim_l_tarsal_distal_phalanx_4";
Transform Transform242 = createNode("Transform");
Transform242.translation = new SFVec3f(new float[0.25,-1.1,0]);
Shape Shape243 = createNode("Shape");
Shape243.USE = "HAnimJointShape";
Transform242.children = new MFNode();

Transform242.children[0] = Shape243;

HAnimSegment241.children = new MFNode();

HAnimSegment241.children[0] = Transform242;

Shape Shape244 = createNode("Shape");
Appearance Appearance245 = createNode("Appearance");
Material Material246 = createNode("Material");
Material246.emissiveColor = new SFColor(new float[1,1,1]);
Appearance245.material = Material246;

Shape244.appearance = Appearance245;

IndexedLineSet IndexedLineSet247 = createNode("IndexedLineSet");
IndexedLineSet247.DEF = "tiptoe_l_tarsal_distal_interphalangeal_4";
IndexedLineSet247.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate248 = createNode("Coordinate");
Coordinate248.point = new MFVec3f(new float[0.25,-1.1,0,0.25,-1.15,0]);
IndexedLineSet247.coord = Coordinate248;

Shape244.geometry = IndexedLineSet247;

HAnimSegment241.children[1] = Shape244;

HAnimJoint240.children = new MFNode();

HAnimJoint240.children[0] = HAnimSegment241;

HAnimJoint231.children[1] = HAnimJoint240;

HAnimJoint222.children[1] = HAnimJoint231;

HAnimJoint213.children[1] = HAnimJoint222;

HAnimJoint199.children[1] = HAnimJoint213;

//TMT5
HAnimJoint HAnimJoint249 = createNode("HAnimJoint");
HAnimJoint249.name = "l_tarsometatarsal_5";
HAnimJoint249.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint249.center = new SFVec3f(new float[0.33,-0.52,0]);
HAnimJoint249.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint249.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment250 = createNode("HAnimSegment");
HAnimSegment250.name = "l_metatarsal_5";
HAnimSegment250.DEF = "hanim_l_metatarsal_5";
Transform Transform251 = createNode("Transform");
Transform251.translation = new SFVec3f(new float[0.33,-0.52,0]);
Shape Shape252 = createNode("Shape");
Shape252.USE = "HAnimJointShape";
Transform251.children = new MFNode();

Transform251.children[0] = Shape252;

HAnimSegment250.children = new MFNode();

HAnimSegment250.children[0] = Transform251;

Shape Shape253 = createNode("Shape");
Appearance Appearance254 = createNode("Appearance");
Material Material255 = createNode("Material");
Material255.emissiveColor = new SFColor(new float[1,1,1]);
Appearance254.material = Material255;

Shape253.appearance = Appearance254;

IndexedLineSet IndexedLineSet256 = createNode("IndexedLineSet");
IndexedLineSet256.DEF = "TMT5toMTP5";
IndexedLineSet256.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate257 = createNode("Coordinate");
Coordinate257.point = new MFVec3f(new float[0.33,-0.52,0,0.34,-0.8,0]);
IndexedLineSet256.coord = Coordinate257;

Shape253.geometry = IndexedLineSet256;

HAnimSegment250.children[1] = Shape253;

HAnimJoint249.children = new MFNode();

HAnimJoint249.children[0] = HAnimSegment250;

HAnimJoint HAnimJoint258 = createNode("HAnimJoint");
HAnimJoint258.name = "l_metatarsophalangeal_5";
HAnimJoint258.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint258.center = new SFVec3f(new float[0.34,-0.8,0]);
HAnimJoint258.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint258.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment259 = createNode("HAnimSegment");
HAnimSegment259.name = "l_tarsal_proximal_phalanx_5";
HAnimSegment259.DEF = "hanim_l_tarsal_proximal_phalanx_5";
Transform Transform260 = createNode("Transform");
Transform260.translation = new SFVec3f(new float[0.34,-0.8,0]);
Shape Shape261 = createNode("Shape");
Shape261.USE = "HAnimJointShape";
Transform260.children = new MFNode();

Transform260.children[0] = Shape261;

HAnimSegment259.children = new MFNode();

HAnimSegment259.children[0] = Transform260;

Shape Shape262 = createNode("Shape");
Appearance Appearance263 = createNode("Appearance");
Material Material264 = createNode("Material");
Material264.emissiveColor = new SFColor(new float[1,1,1]);
Appearance263.material = Material264;

Shape262.appearance = Appearance263;

IndexedLineSet IndexedLineSet265 = createNode("IndexedLineSet");
IndexedLineSet265.DEF = "MTP5toPIP5";
IndexedLineSet265.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate266 = createNode("Coordinate");
Coordinate266.point = new MFVec3f(new float[0.34,-0.8,0,0.34,-0.95,0]);
IndexedLineSet265.coord = Coordinate266;

Shape262.geometry = IndexedLineSet265;

HAnimSegment259.children[1] = Shape262;

HAnimJoint258.children = new MFNode();

HAnimJoint258.children[0] = HAnimSegment259;

HAnimJoint HAnimJoint267 = createNode("HAnimJoint");
HAnimJoint267.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint267.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint267.center = new SFVec3f(new float[0.34,-0.95,0]);
HAnimJoint267.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint267.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment268 = createNode("HAnimSegment");
HAnimSegment268.name = "l_tarsal_middle_phalanx_5";
HAnimSegment268.DEF = "hanim_l_tarsal_middle_phalanx_5";
Transform Transform269 = createNode("Transform");
Transform269.translation = new SFVec3f(new float[0.34,-0.95,0]);
Shape Shape270 = createNode("Shape");
Shape270.USE = "HAnimJointShape";
Transform269.children = new MFNode();

Transform269.children[0] = Shape270;

HAnimSegment268.children = new MFNode();

HAnimSegment268.children[0] = Transform269;

Shape Shape271 = createNode("Shape");
Appearance Appearance272 = createNode("Appearance");
Material Material273 = createNode("Material");
Material273.emissiveColor = new SFColor(new float[1,1,1]);
Appearance272.material = Material273;

Shape271.appearance = Appearance272;

IndexedLineSet IndexedLineSet274 = createNode("IndexedLineSet");
IndexedLineSet274.DEF = "PIP5toDIP5";
IndexedLineSet274.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate275 = createNode("Coordinate");
Coordinate275.point = new MFVec3f(new float[0.34,-0.95,0,0.34,-1.05,0]);
IndexedLineSet274.coord = Coordinate275;

Shape271.geometry = IndexedLineSet274;

HAnimSegment268.children[1] = Shape271;

HAnimJoint267.children = new MFNode();

HAnimJoint267.children[0] = HAnimSegment268;

HAnimJoint HAnimJoint276 = createNode("HAnimJoint");
HAnimJoint276.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint276.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint276.center = new SFVec3f(new float[0.34,-1.05,0]);
HAnimJoint276.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint276.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment277 = createNode("HAnimSegment");
HAnimSegment277.name = "l_tarsal_distal_phalanx_5";
HAnimSegment277.DEF = "hanim_l_tarsal_distal_phalanx_5";
Transform Transform278 = createNode("Transform");
Transform278.translation = new SFVec3f(new float[0.34,-1.05,0]);
Shape Shape279 = createNode("Shape");
Shape279.USE = "HAnimJointShape";
Transform278.children = new MFNode();

Transform278.children[0] = Shape279;

HAnimSegment277.children = new MFNode();

HAnimSegment277.children[0] = Transform278;

Shape Shape280 = createNode("Shape");
Appearance Appearance281 = createNode("Appearance");
Material Material282 = createNode("Material");
Material282.emissiveColor = new SFColor(new float[1,1,1]);
Appearance281.material = Material282;

Shape280.appearance = Appearance281;

IndexedLineSet IndexedLineSet283 = createNode("IndexedLineSet");
IndexedLineSet283.DEF = "tiptoe_l_tarsal_distal_interphalangeal_5";
IndexedLineSet283.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate284 = createNode("Coordinate");
Coordinate284.point = new MFVec3f(new float[0.34,-1.05,0,0.34,-1.08,0]);
IndexedLineSet283.coord = Coordinate284;

Shape280.geometry = IndexedLineSet283;

HAnimSegment277.children[1] = Shape280;

HAnimJoint276.children = new MFNode();

HAnimJoint276.children[0] = HAnimSegment277;

HAnimJoint267.children[1] = HAnimJoint276;

HAnimJoint258.children[1] = HAnimJoint267;

HAnimJoint249.children[1] = HAnimJoint258;

HAnimJoint199.children[2] = HAnimJoint249;

HAnimJoint190.children[1] = HAnimJoint199;

HAnimJoint28.children[2] = HAnimJoint190;

HAnimJoint27.children = new MFNode();

HAnimJoint27.children[0] = HAnimJoint28;

HAnimHumanoid24.joints = new MFNode();

HAnimHumanoid24.joints[0] = HAnimJoint27;

HAnimJoint HAnimJoint285 = createNode("HAnimJoint");
HAnimJoint285.USE = "hanim_humanoid_root";
HAnimHumanoid24.joints[1] = HAnimJoint285;

HAnimJoint HAnimJoint286 = createNode("HAnimJoint");
HAnimJoint286.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid24.joints[2] = HAnimJoint286;

HAnimJoint HAnimJoint287 = createNode("HAnimJoint");
HAnimJoint287.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid24.joints[3] = HAnimJoint287;

HAnimJoint HAnimJoint288 = createNode("HAnimJoint");
HAnimJoint288.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid24.joints[4] = HAnimJoint288;

HAnimJoint HAnimJoint289 = createNode("HAnimJoint");
HAnimJoint289.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid24.joints[5] = HAnimJoint289;

HAnimJoint HAnimJoint290 = createNode("HAnimJoint");
HAnimJoint290.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid24.joints[6] = HAnimJoint290;

HAnimJoint HAnimJoint291 = createNode("HAnimJoint");
HAnimJoint291.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid24.joints[7] = HAnimJoint291;

HAnimJoint HAnimJoint292 = createNode("HAnimJoint");
HAnimJoint292.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid24.joints[8] = HAnimJoint292;

HAnimJoint HAnimJoint293 = createNode("HAnimJoint");
HAnimJoint293.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid24.joints[9] = HAnimJoint293;

HAnimJoint HAnimJoint294 = createNode("HAnimJoint");
HAnimJoint294.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid24.joints[10] = HAnimJoint294;

HAnimJoint HAnimJoint295 = createNode("HAnimJoint");
HAnimJoint295.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid24.joints[11] = HAnimJoint295;

HAnimJoint HAnimJoint296 = createNode("HAnimJoint");
HAnimJoint296.USE = "hanim_l_talocrural";
HAnimHumanoid24.joints[12] = HAnimJoint296;

HAnimJoint HAnimJoint297 = createNode("HAnimJoint");
HAnimJoint297.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid24.joints[13] = HAnimJoint297;

HAnimJoint HAnimJoint298 = createNode("HAnimJoint");
HAnimJoint298.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid24.joints[14] = HAnimJoint298;

HAnimJoint HAnimJoint299 = createNode("HAnimJoint");
HAnimJoint299.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid24.joints[15] = HAnimJoint299;

HAnimJoint HAnimJoint300 = createNode("HAnimJoint");
HAnimJoint300.USE = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimHumanoid24.joints[16] = HAnimJoint300;

HAnimJoint HAnimJoint301 = createNode("HAnimJoint");
HAnimJoint301.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid24.joints[17] = HAnimJoint301;

HAnimJoint HAnimJoint302 = createNode("HAnimJoint");
HAnimJoint302.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid24.joints[18] = HAnimJoint302;

HAnimJoint HAnimJoint303 = createNode("HAnimJoint");
HAnimJoint303.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid24.joints[19] = HAnimJoint303;

HAnimJoint HAnimJoint304 = createNode("HAnimJoint");
HAnimJoint304.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid24.joints[20] = HAnimJoint304;

HAnimJoint HAnimJoint305 = createNode("HAnimJoint");
HAnimJoint305.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimHumanoid24.joints[21] = HAnimJoint305;

HAnimJoint HAnimJoint306 = createNode("HAnimJoint");
HAnimJoint306.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid24.joints[22] = HAnimJoint306;

HAnimJoint HAnimJoint307 = createNode("HAnimJoint");
HAnimJoint307.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid24.joints[23] = HAnimJoint307;

HAnimJoint HAnimJoint308 = createNode("HAnimJoint");
HAnimJoint308.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid24.joints[24] = HAnimJoint308;

HAnimJoint HAnimJoint309 = createNode("HAnimJoint");
HAnimJoint309.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid24.joints[25] = HAnimJoint309;

HAnimJoint HAnimJoint310 = createNode("HAnimJoint");
HAnimJoint310.USE = "hanim_l_tarsometatarsal_5";
HAnimHumanoid24.joints[26] = HAnimJoint310;

HAnimJoint HAnimJoint311 = createNode("HAnimJoint");
HAnimJoint311.USE = "hanim_l_transversetarsal";
HAnimHumanoid24.joints[27] = HAnimJoint311;

HAnimSegment HAnimSegment312 = createNode("HAnimSegment");
HAnimSegment312.USE = "hanim_l_calcaneus";
HAnimHumanoid24.segments[28] = HAnimSegment312;

HAnimSegment HAnimSegment313 = createNode("HAnimSegment");
HAnimSegment313.USE = "hanim_l_cuboid";
HAnimHumanoid24.segments[29] = HAnimSegment313;

HAnimSegment HAnimSegment314 = createNode("HAnimSegment");
HAnimSegment314.USE = "hanim_l_cuneiform_1";
HAnimHumanoid24.segments[30] = HAnimSegment314;

HAnimSegment HAnimSegment315 = createNode("HAnimSegment");
HAnimSegment315.USE = "hanim_l_cuneiform_2";
HAnimHumanoid24.segments[31] = HAnimSegment315;

HAnimSegment HAnimSegment316 = createNode("HAnimSegment");
HAnimSegment316.USE = "hanim_l_cuneiform_3";
HAnimHumanoid24.segments[32] = HAnimSegment316;

HAnimSegment HAnimSegment317 = createNode("HAnimSegment");
HAnimSegment317.USE = "hanim_l_metatarsal_1";
HAnimHumanoid24.segments[33] = HAnimSegment317;

HAnimSegment HAnimSegment318 = createNode("HAnimSegment");
HAnimSegment318.USE = "hanim_l_metatarsal_2";
HAnimHumanoid24.segments[34] = HAnimSegment318;

HAnimSegment HAnimSegment319 = createNode("HAnimSegment");
HAnimSegment319.USE = "hanim_l_metatarsal_3";
HAnimHumanoid24.segments[35] = HAnimSegment319;

HAnimSegment HAnimSegment320 = createNode("HAnimSegment");
HAnimSegment320.USE = "hanim_l_metatarsal_4";
HAnimHumanoid24.segments[36] = HAnimSegment320;

HAnimSegment HAnimSegment321 = createNode("HAnimSegment");
HAnimSegment321.USE = "hanim_l_metatarsal_5";
HAnimHumanoid24.segments[37] = HAnimSegment321;

HAnimSegment HAnimSegment322 = createNode("HAnimSegment");
HAnimSegment322.USE = "hanim_l_navicular";
HAnimHumanoid24.segments[38] = HAnimSegment322;

HAnimSegment HAnimSegment323 = createNode("HAnimSegment");
HAnimSegment323.USE = "hanim_l_talus";
HAnimHumanoid24.segments[39] = HAnimSegment323;

HAnimSegment HAnimSegment324 = createNode("HAnimSegment");
HAnimSegment324.USE = "hanim_l_tarsal_distal_phalanx_1";
HAnimHumanoid24.segments[40] = HAnimSegment324;

HAnimSegment HAnimSegment325 = createNode("HAnimSegment");
HAnimSegment325.USE = "hanim_l_tarsal_distal_phalanx_2";
HAnimHumanoid24.segments[41] = HAnimSegment325;

HAnimSegment HAnimSegment326 = createNode("HAnimSegment");
HAnimSegment326.USE = "hanim_l_tarsal_distal_phalanx_3";
HAnimHumanoid24.segments[42] = HAnimSegment326;

HAnimSegment HAnimSegment327 = createNode("HAnimSegment");
HAnimSegment327.USE = "hanim_l_tarsal_distal_phalanx_4";
HAnimHumanoid24.segments[43] = HAnimSegment327;

HAnimSegment HAnimSegment328 = createNode("HAnimSegment");
HAnimSegment328.USE = "hanim_l_tarsal_distal_phalanx_5";
HAnimHumanoid24.segments[44] = HAnimSegment328;

HAnimSegment HAnimSegment329 = createNode("HAnimSegment");
HAnimSegment329.USE = "hanim_l_tarsal_middle_phalanx_2";
HAnimHumanoid24.segments[45] = HAnimSegment329;

HAnimSegment HAnimSegment330 = createNode("HAnimSegment");
HAnimSegment330.USE = "hanim_l_tarsal_middle_phalanx_3";
HAnimHumanoid24.segments[46] = HAnimSegment330;

HAnimSegment HAnimSegment331 = createNode("HAnimSegment");
HAnimSegment331.USE = "hanim_l_tarsal_middle_phalanx_4";
HAnimHumanoid24.segments[47] = HAnimSegment331;

HAnimSegment HAnimSegment332 = createNode("HAnimSegment");
HAnimSegment332.USE = "hanim_l_tarsal_middle_phalanx_5";
HAnimHumanoid24.segments[48] = HAnimSegment332;

HAnimSegment HAnimSegment333 = createNode("HAnimSegment");
HAnimSegment333.USE = "hanim_l_tarsal_proximal_phalanx_1";
HAnimHumanoid24.segments[49] = HAnimSegment333;

HAnimSegment HAnimSegment334 = createNode("HAnimSegment");
HAnimSegment334.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid24.segments[50] = HAnimSegment334;

HAnimSegment HAnimSegment335 = createNode("HAnimSegment");
HAnimSegment335.USE = "hanim_l_tarsal_proximal_phalanx_3";
HAnimHumanoid24.segments[51] = HAnimSegment335;

HAnimSegment HAnimSegment336 = createNode("HAnimSegment");
HAnimSegment336.USE = "hanim_l_tarsal_proximal_phalanx_4";
HAnimHumanoid24.segments[52] = HAnimSegment336;

HAnimSegment HAnimSegment337 = createNode("HAnimSegment");
HAnimSegment337.USE = "hanim_l_tarsal_proximal_phalanx_5";
HAnimHumanoid24.segments[53] = HAnimSegment337;

children[1] = HAnimHumanoid24;

}

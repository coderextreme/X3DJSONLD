let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "HAnim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "title";
meta3.content = "HAnimModelFootLeft.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "description";
meta4.content = "Left foot, using high-fidelity definitions for HAnim version 2.0";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "creator";
meta5.content = "Kwan-Hee YOO, Don Brutzman and Joe Williams";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "created";
meta6.content = "26 January 2015";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "modified";
meta7.content = "23 December 2021";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "warning";
meta8.content = "not yet to scale";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "warning";
meta9.content = "TODO will X3D HAnim component add a new level to support LOA-4 functionality?";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "info";
meta10.content = "TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "reference";
meta11.content = "https://www.web3d.org/working-groups/humanoid-animation-HAnim";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "reference";
meta12.content = "https://www.web3d.org/documents/specifications/19774/V2.0";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "reference";
meta13.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "reference";
meta14.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "reference";
meta15.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "reference";
meta16.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "subject";
meta17.content = "X3D HAnim humanoid animation";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "TODO";
meta18.content = "Integrate and confirm Segment/Joint names, Viewpoints.";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "identifier";
meta19.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d";
head1.meta[17] = meta19;

let meta20 = browser.currentScene.createNode("meta");
meta20.name = "generator";
meta20.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[18] = meta20;

let meta21 = browser.currentScene.createNode("meta");
meta21.name = "license";
meta21.content = "../license.html";
head1.meta[19] = meta21;

head = head1;

let WorldInfo23 = browser.currentScene.createNode("WorldInfo");
WorldInfo23.title = "HAnimModelFootLeft.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo23;

let HAnimHumanoid24 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid24.name = "Foot_Left";
HAnimHumanoid24.DEF = "hanim_Foot_Left";
HAnimHumanoid24.loa = 4;
HAnimHumanoid24.version = "2.0";
//original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
let MetadataSet25 = browser.currentScene.createNode("MetadataSet");
MetadataSet25.name = "HAnimHumanoid.info";
MetadataSet25.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString26 = browser.currentScene.createNode("MetadataString");
MetadataString26.name = "authorName";
MetadataString26.value = new MFString(new java.lang.String["Kwan-Hee YOO, Don Brutzman and Joe Williams"]);
MetadataSet25.value = new MFNode();

MetadataSet25.value[0] = MetadataString26;

HAnimHumanoid24.metadata = new SFNode();

HAnimHumanoid24.metadata[0] = MetadataSet25;

let HAnimJoint27 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint27.name = "humanoid_root";
HAnimJoint27.DEF = "hanim_humanoid_root";
HAnimJoint27.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint27.llimit = new MFFloat(new float[0,0,0]);
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model
let HAnimJoint28 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint28.name = "l_talocrural";
HAnimJoint28.DEF = "hanim_l_talocrural";
HAnimJoint28.description = "connection joint of foot to leg above";
HAnimJoint28.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint28.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment29 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment29.name = "l_talus";
HAnimSegment29.DEF = "hanim_l_talus";
let Transform30 = browser.currentScene.createNode("Transform");
let Shape31 = browser.currentScene.createNode("Shape");
Shape31.DEF = "HAnimJointShape";
let Sphere32 = browser.currentScene.createNode("Sphere");
Sphere32.radius = 0.025;
Shape31.geometry = Sphere32;

let Appearance33 = browser.currentScene.createNode("Appearance");
Appearance33.DEF = "HAnimJointAppearance";
let Material34 = browser.currentScene.createNode("Material");
Material34.diffuseColor = new SFColor(new float[0,0,1]);
Appearance33.material = Material34;

Shape31.appearance = Appearance33;

Transform30.child = new undefined();

Transform30.child[0] = Shape31;

HAnimSegment29.children = new MFNode();

HAnimSegment29.children[0] = Transform30;

let Shape35 = browser.currentScene.createNode("Shape");
let Appearance36 = browser.currentScene.createNode("Appearance");
let Material37 = browser.currentScene.createNode("Material");
Material37.emissiveColor = new SFColor(new float[1,1,1]);
Appearance36.material = Material37;

Shape35.appearance = Appearance36;

let IndexedLineSet38 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet38.DEF = "TCtoTCN";
IndexedLineSet38.coordIndex = new MFInt32(new int[0,1]);
let Coordinate39 = browser.currentScene.createNode("Coordinate");
Coordinate39.point = new MFVec3f(new float[0,0,0,0,-0.3,0]);
IndexedLineSet38.coord = Coordinate39;

Shape35.geometry = IndexedLineSet38;

HAnimSegment29.children[1] = Shape35;

let Shape40 = browser.currentScene.createNode("Shape");
let Appearance41 = browser.currentScene.createNode("Appearance");
let Material42 = browser.currentScene.createNode("Material");
Material42.emissiveColor = new SFColor(new float[1,1,1]);
Appearance41.material = Material42;

Shape40.appearance = Appearance41;

let IndexedLineSet43 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet43.DEF = "TCtoCC";
IndexedLineSet43.coordIndex = new MFInt32(new int[0,1]);
let Coordinate44 = browser.currentScene.createNode("Coordinate");
Coordinate44.point = new MFVec3f(new float[0,0,0,0.2,0.3,0]);
IndexedLineSet43.coord = Coordinate44;

Shape40.geometry = IndexedLineSet43;

HAnimSegment29.children[2] = Shape40;

HAnimJoint28.children = new MFNode();

HAnimJoint28.children[0] = HAnimSegment29;

//TCN
let HAnimJoint45 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint45.name = "l_talocalcaneonavicular";
HAnimJoint45.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint45.center = new SFVec3f(new float[0,-0.3,0]);
HAnimJoint45.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint45.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment46 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment46.name = "l_navicular";
HAnimSegment46.DEF = "hanim_l_navicular";
let Transform47 = browser.currentScene.createNode("Transform");
Transform47.translation = new SFVec3f(new float[0,-0.3,0]);
let Shape48 = browser.currentScene.createNode("Shape");
Shape48.USE = "HAnimJointShape";
Transform47.child = new undefined();

Transform47.child[0] = Shape48;

HAnimSegment46.children = new MFNode();

HAnimSegment46.children[0] = Transform47;

let Shape49 = browser.currentScene.createNode("Shape");
let Appearance50 = browser.currentScene.createNode("Appearance");
let Material51 = browser.currentScene.createNode("Material");
Material51.emissiveColor = new SFColor(new float[1,1,1]);
Appearance50.material = Material51;

Shape49.appearance = Appearance50;

let IndexedLineSet52 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet52.DEF = "TCNtoCN1";
IndexedLineSet52.coordIndex = new MFInt32(new int[0,1]);
let Coordinate53 = browser.currentScene.createNode("Coordinate");
Coordinate53.point = new MFVec3f(new float[0,-0.3,0,-0.1,-0.45,0]);
IndexedLineSet52.coord = Coordinate53;

Shape49.geometry = IndexedLineSet52;

HAnimSegment46.children[1] = Shape49;

let Shape54 = browser.currentScene.createNode("Shape");
let Appearance55 = browser.currentScene.createNode("Appearance");
let Material56 = browser.currentScene.createNode("Material");
Material56.emissiveColor = new SFColor(new float[1,1,1]);
Appearance55.material = Material56;

Shape54.appearance = Appearance55;

let IndexedLineSet57 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet57.DEF = "TCNtoCN2";
IndexedLineSet57.coordIndex = new MFInt32(new int[0,1]);
let Coordinate58 = browser.currentScene.createNode("Coordinate");
Coordinate58.point = new MFVec3f(new float[0,-0.3,0,0,-0.45,0]);
IndexedLineSet57.coord = Coordinate58;

Shape54.geometry = IndexedLineSet57;

HAnimSegment46.children[2] = Shape54;

let Shape59 = browser.currentScene.createNode("Shape");
let Appearance60 = browser.currentScene.createNode("Appearance");
let Material61 = browser.currentScene.createNode("Material");
Material61.emissiveColor = new SFColor(new float[1,1,1]);
Appearance60.material = Material61;

Shape59.appearance = Appearance60;

let IndexedLineSet62 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet62.DEF = "TCNtoCN3";
IndexedLineSet62.coordIndex = new MFInt32(new int[0,1]);
let Coordinate63 = browser.currentScene.createNode("Coordinate");
Coordinate63.point = new MFVec3f(new float[0,-0.3,0,0.1,-0.4,0]);
IndexedLineSet62.coord = Coordinate63;

Shape59.geometry = IndexedLineSet62;

HAnimSegment46.children[3] = Shape59;

HAnimJoint45.children = new MFNode();

HAnimJoint45.children[0] = HAnimSegment46;

//CN1
let HAnimJoint64 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint64.name = "l_cuneonavicular_1";
HAnimJoint64.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint64.center = new SFVec3f(new float[-0.1,-0.45,0]);
HAnimJoint64.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint64.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment65 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment65.name = "l_cuneiform_1";
HAnimSegment65.DEF = "hanim_l_cuneiform_1";
let Transform66 = browser.currentScene.createNode("Transform");
Transform66.translation = new SFVec3f(new float[-0.1,-0.45,0]);
let Shape67 = browser.currentScene.createNode("Shape");
Shape67.USE = "HAnimJointShape";
Transform66.child = new undefined();

Transform66.child[0] = Shape67;

HAnimSegment65.children = new MFNode();

HAnimSegment65.children[0] = Transform66;

let Shape68 = browser.currentScene.createNode("Shape");
let Appearance69 = browser.currentScene.createNode("Appearance");
let Material70 = browser.currentScene.createNode("Material");
Material70.emissiveColor = new SFColor(new float[1,1,1]);
Appearance69.material = Material70;

Shape68.appearance = Appearance69;

let IndexedLineSet71 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet71.DEF = "CN1toTMT1";
IndexedLineSet71.coordIndex = new MFInt32(new int[0,1]);
let Coordinate72 = browser.currentScene.createNode("Coordinate");
Coordinate72.point = new MFVec3f(new float[-0.1,-0.45,0,-0.1,-0.6,0]);
IndexedLineSet71.coord = Coordinate72;

Shape68.geometry = IndexedLineSet71;

HAnimSegment65.children[1] = Shape68;

HAnimJoint64.children = new MFNode();

HAnimJoint64.children[0] = HAnimSegment65;

let HAnimJoint73 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint73.name = "l_tarsometatarsal_1";
HAnimJoint73.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint73.center = new SFVec3f(new float[-0.1,-0.6,0]);
HAnimJoint73.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint73.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment74 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment74.name = "l_metatarsal_1";
HAnimSegment74.DEF = "hanim_l_metatarsal_1";
let Transform75 = browser.currentScene.createNode("Transform");
Transform75.translation = new SFVec3f(new float[-0.1,-0.6,0]);
let Shape76 = browser.currentScene.createNode("Shape");
Shape76.USE = "HAnimJointShape";
Transform75.child = new undefined();

Transform75.child[0] = Shape76;

HAnimSegment74.children = new MFNode();

HAnimSegment74.children[0] = Transform75;

let Shape77 = browser.currentScene.createNode("Shape");
let Appearance78 = browser.currentScene.createNode("Appearance");
let Material79 = browser.currentScene.createNode("Material");
Material79.emissiveColor = new SFColor(new float[1,1,1]);
Appearance78.material = Material79;

Shape77.appearance = Appearance78;

let IndexedLineSet80 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet80.DEF = "TMT1toMTP1";
IndexedLineSet80.coordIndex = new MFInt32(new int[0,1]);
let Coordinate81 = browser.currentScene.createNode("Coordinate");
Coordinate81.point = new MFVec3f(new float[-0.1,-0.6,0,-0.1,-0.9,0]);
IndexedLineSet80.coord = Coordinate81;

Shape77.geometry = IndexedLineSet80;

HAnimSegment74.children[1] = Shape77;

HAnimJoint73.children = new MFNode();

HAnimJoint73.children[0] = HAnimSegment74;

let HAnimJoint82 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint82.name = "l_metatarsophalangeal_1";
HAnimJoint82.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint82.center = new SFVec3f(new float[-0.1,-0.9,0]);
HAnimJoint82.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint82.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment83 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment83.name = "l_tarsal_proximal_phalanx_1";
HAnimSegment83.DEF = "hanim_l_tarsal_proximal_phalanx_1";
let Transform84 = browser.currentScene.createNode("Transform");
Transform84.translation = new SFVec3f(new float[-0.1,-0.9,0]);
let Shape85 = browser.currentScene.createNode("Shape");
Shape85.USE = "HAnimJointShape";
Transform84.child = new undefined();

Transform84.child[0] = Shape85;

HAnimSegment83.children = new MFNode();

HAnimSegment83.children[0] = Transform84;

let Shape86 = browser.currentScene.createNode("Shape");
let Appearance87 = browser.currentScene.createNode("Appearance");
let Material88 = browser.currentScene.createNode("Material");
Material88.emissiveColor = new SFColor(new float[1,1,1]);
Appearance87.material = Material88;

Shape86.appearance = Appearance87;

let IndexedLineSet89 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet89.DEF = "MTP1toIP1";
IndexedLineSet89.coordIndex = new MFInt32(new int[0,1]);
let Coordinate90 = browser.currentScene.createNode("Coordinate");
Coordinate90.point = new MFVec3f(new float[-0.1,-0.9,0,-0.1,-1.05,0]);
IndexedLineSet89.coord = Coordinate90;

Shape86.geometry = IndexedLineSet89;

HAnimSegment83.children[1] = Shape86;

HAnimJoint82.children = new MFNode();

HAnimJoint82.children[0] = HAnimSegment83;

let HAnimJoint91 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint91.name = "l_tarsal_interphalangeal_1";
HAnimJoint91.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint91.center = new SFVec3f(new float[-0.1,-1.05,0]);
HAnimJoint91.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint91.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment92 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment92.name = "l_tarsal_distal_phalanx_1";
HAnimSegment92.DEF = "hanim_l_tarsal_distal_phalanx_1";
let Transform93 = browser.currentScene.createNode("Transform");
Transform93.translation = new SFVec3f(new float[-0.1,-1.05,0]);
let Shape94 = browser.currentScene.createNode("Shape");
Shape94.USE = "HAnimJointShape";
Transform93.child = new undefined();

Transform93.child[0] = Shape94;

HAnimSegment92.children = new MFNode();

HAnimSegment92.children[0] = Transform93;

let Shape95 = browser.currentScene.createNode("Shape");
let Appearance96 = browser.currentScene.createNode("Appearance");
let Material97 = browser.currentScene.createNode("Material");
Material97.emissiveColor = new SFColor(new float[1,1,1]);
Appearance96.material = Material97;

Shape95.appearance = Appearance96;

let IndexedLineSet98 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet98.DEF = "tiptoe_l_tarsal_distal_interphalangeal_1";
IndexedLineSet98.coordIndex = new MFInt32(new int[0,1]);
let Coordinate99 = browser.currentScene.createNode("Coordinate");
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
let HAnimJoint100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint100.name = "l_cuneonavicular_2";
HAnimJoint100.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint100.center = new SFVec3f(new float[0,-0.45,0]);
HAnimJoint100.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint100.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment101 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment101.name = "l_cuneiform_2";
HAnimSegment101.DEF = "hanim_l_cuneiform_2";
let Transform102 = browser.currentScene.createNode("Transform");
Transform102.translation = new SFVec3f(new float[0,-0.45,0]);
let Shape103 = browser.currentScene.createNode("Shape");
Shape103.USE = "HAnimJointShape";
Transform102.child = new undefined();

Transform102.child[0] = Shape103;

HAnimSegment101.children = new MFNode();

HAnimSegment101.children[0] = Transform102;

let Shape104 = browser.currentScene.createNode("Shape");
let Appearance105 = browser.currentScene.createNode("Appearance");
let Material106 = browser.currentScene.createNode("Material");
Material106.emissiveColor = new SFColor(new float[1,1,1]);
Appearance105.material = Material106;

Shape104.appearance = Appearance105;

let IndexedLineSet107 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet107.DEF = "CN2toTMT2";
IndexedLineSet107.coordIndex = new MFInt32(new int[0,1]);
let Coordinate108 = browser.currentScene.createNode("Coordinate");
Coordinate108.point = new MFVec3f(new float[0,-0.45,0,0.05,-0.6,0]);
IndexedLineSet107.coord = Coordinate108;

Shape104.geometry = IndexedLineSet107;

HAnimSegment101.children[1] = Shape104;

HAnimJoint100.children = new MFNode();

HAnimJoint100.children[0] = HAnimSegment101;

let HAnimJoint109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint109.name = "l_tarsometatarsal_2";
HAnimJoint109.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint109.center = new SFVec3f(new float[0.05,-0.6,0]);
HAnimJoint109.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint109.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment110 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment110.name = "l_metatarsal_2";
HAnimSegment110.DEF = "hanim_l_metatarsal_2";
let Transform111 = browser.currentScene.createNode("Transform");
Transform111.translation = new SFVec3f(new float[0.05,-0.6,0]);
let Shape112 = browser.currentScene.createNode("Shape");
Shape112.USE = "HAnimJointShape";
Transform111.child = new undefined();

Transform111.child[0] = Shape112;

HAnimSegment110.children = new MFNode();

HAnimSegment110.children[0] = Transform111;

let Shape113 = browser.currentScene.createNode("Shape");
let Appearance114 = browser.currentScene.createNode("Appearance");
let Material115 = browser.currentScene.createNode("Material");
Material115.emissiveColor = new SFColor(new float[1,1,1]);
Appearance114.material = Material115;

Shape113.appearance = Appearance114;

let IndexedLineSet116 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet116.DEF = "TMT2toMTP2";
IndexedLineSet116.coordIndex = new MFInt32(new int[0,1]);
let Coordinate117 = browser.currentScene.createNode("Coordinate");
Coordinate117.point = new MFVec3f(new float[0.05,-0.6,0,0.05,-0.9,0]);
IndexedLineSet116.coord = Coordinate117;

Shape113.geometry = IndexedLineSet116;

HAnimSegment110.children[1] = Shape113;

HAnimJoint109.children = new MFNode();

HAnimJoint109.children[0] = HAnimSegment110;

let HAnimJoint118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint118.name = "l_metatarsophalangeal_2";
HAnimJoint118.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint118.center = new SFVec3f(new float[0.05,-0.9,0]);
HAnimJoint118.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint118.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment119 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment119.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment119.DEF = "hanim_l_tarsal_proximal_phalanx_2";
let Transform120 = browser.currentScene.createNode("Transform");
Transform120.translation = new SFVec3f(new float[0.05,-0.9,0]);
let Shape121 = browser.currentScene.createNode("Shape");
Shape121.USE = "HAnimJointShape";
Transform120.child = new undefined();

Transform120.child[0] = Shape121;

HAnimSegment119.children = new MFNode();

HAnimSegment119.children[0] = Transform120;

let Shape122 = browser.currentScene.createNode("Shape");
let Appearance123 = browser.currentScene.createNode("Appearance");
let Material124 = browser.currentScene.createNode("Material");
Material124.emissiveColor = new SFColor(new float[1,1,1]);
Appearance123.material = Material124;

Shape122.appearance = Appearance123;

let IndexedLineSet125 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet125.DEF = "MTP2toPIP2";
IndexedLineSet125.coordIndex = new MFInt32(new int[0,1]);
let Coordinate126 = browser.currentScene.createNode("Coordinate");
Coordinate126.point = new MFVec3f(new float[0.05,-0.9,0,0.05,-1.05,0]);
IndexedLineSet125.coord = Coordinate126;

Shape122.geometry = IndexedLineSet125;

HAnimSegment119.children[1] = Shape122;

HAnimJoint118.children = new MFNode();

HAnimJoint118.children[0] = HAnimSegment119;

let HAnimJoint127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint127.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint127.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint127.center = new SFVec3f(new float[0.05,-1.05,0]);
HAnimJoint127.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint127.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment128 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment128.name = "l_tarsal_middle_phalanx_2";
HAnimSegment128.DEF = "hanim_l_tarsal_middle_phalanx_2";
let Transform129 = browser.currentScene.createNode("Transform");
Transform129.translation = new SFVec3f(new float[0.05,-1.05,0]);
let Shape130 = browser.currentScene.createNode("Shape");
Shape130.USE = "HAnimJointShape";
Transform129.child = new undefined();

Transform129.child[0] = Shape130;

HAnimSegment128.children = new MFNode();

HAnimSegment128.children[0] = Transform129;

let Shape131 = browser.currentScene.createNode("Shape");
let Appearance132 = browser.currentScene.createNode("Appearance");
let Material133 = browser.currentScene.createNode("Material");
Material133.emissiveColor = new SFColor(new float[1,1,1]);
Appearance132.material = Material133;

Shape131.appearance = Appearance132;

let IndexedLineSet134 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet134.DEF = "PIP2toDIP2";
IndexedLineSet134.coordIndex = new MFInt32(new int[0,1]);
let Coordinate135 = browser.currentScene.createNode("Coordinate");
Coordinate135.point = new MFVec3f(new float[0.05,-1.05,0,0.05,-1.12,0]);
IndexedLineSet134.coord = Coordinate135;

Shape131.geometry = IndexedLineSet134;

HAnimSegment128.children[1] = Shape131;

HAnimJoint127.children = new MFNode();

HAnimJoint127.children[0] = HAnimSegment128;

let HAnimJoint136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint136.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint136.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint136.center = new SFVec3f(new float[0.05,-1.12,0]);
HAnimJoint136.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint136.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment137 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment137.name = "l_tarsal_distal_phalanx_2";
HAnimSegment137.DEF = "hanim_l_tarsal_distal_phalanx_2";
let Transform138 = browser.currentScene.createNode("Transform");
Transform138.translation = new SFVec3f(new float[0.05,-1.12,0]);
let Shape139 = browser.currentScene.createNode("Shape");
Shape139.USE = "HAnimJointShape";
Transform138.child = new undefined();

Transform138.child[0] = Shape139;

HAnimSegment137.children = new MFNode();

HAnimSegment137.children[0] = Transform138;

let Shape140 = browser.currentScene.createNode("Shape");
let Appearance141 = browser.currentScene.createNode("Appearance");
let Material142 = browser.currentScene.createNode("Material");
Material142.emissiveColor = new SFColor(new float[1,1,1]);
Appearance141.material = Material142;

Shape140.appearance = Appearance141;

let IndexedLineSet143 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet143.DEF = "tiptoe_l_tarsal_distal_phalanx_2";
IndexedLineSet143.coordIndex = new MFInt32(new int[0,1]);
let Coordinate144 = browser.currentScene.createNode("Coordinate");
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
let HAnimJoint145 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint145.name = "l_cuneonavicular_3";
HAnimJoint145.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint145.center = new SFVec3f(new float[0.1,-0.4,0]);
HAnimJoint145.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint145.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment146 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment146.name = "l_cuneiform_3";
HAnimSegment146.DEF = "hanim_l_cuneiform_3";
let Transform147 = browser.currentScene.createNode("Transform");
Transform147.translation = new SFVec3f(new float[0.1,-0.4,0]);
let Shape148 = browser.currentScene.createNode("Shape");
Shape148.USE = "HAnimJointShape";
Transform147.child = new undefined();

Transform147.child[0] = Shape148;

HAnimSegment146.children = new MFNode();

HAnimSegment146.children[0] = Transform147;

let Shape149 = browser.currentScene.createNode("Shape");
let Appearance150 = browser.currentScene.createNode("Appearance");
let Material151 = browser.currentScene.createNode("Material");
Material151.emissiveColor = new SFColor(new float[1,1,1]);
Appearance150.material = Material151;

Shape149.appearance = Appearance150;

let IndexedLineSet152 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet152.DEF = "CN3toTMT3";
IndexedLineSet152.coordIndex = new MFInt32(new int[0,1]);
let Coordinate153 = browser.currentScene.createNode("Coordinate");
Coordinate153.point = new MFVec3f(new float[0.1,-0.4,0,0.15,-0.6,0]);
IndexedLineSet152.coord = Coordinate153;

Shape149.geometry = IndexedLineSet152;

HAnimSegment146.children[1] = Shape149;

HAnimJoint145.children = new MFNode();

HAnimJoint145.children[0] = HAnimSegment146;

let HAnimJoint154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint154.name = "l_tarsometatarsal_3";
HAnimJoint154.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint154.center = new SFVec3f(new float[0.15,-0.6,0]);
HAnimJoint154.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint154.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment155 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment155.name = "l_metatarsal_3";
HAnimSegment155.DEF = "hanim_l_metatarsal_3";
let Transform156 = browser.currentScene.createNode("Transform");
Transform156.translation = new SFVec3f(new float[0.15,-0.6,0]);
let Shape157 = browser.currentScene.createNode("Shape");
Shape157.USE = "HAnimJointShape";
Transform156.child = new undefined();

Transform156.child[0] = Shape157;

HAnimSegment155.children = new MFNode();

HAnimSegment155.children[0] = Transform156;

let Shape158 = browser.currentScene.createNode("Shape");
let Appearance159 = browser.currentScene.createNode("Appearance");
let Material160 = browser.currentScene.createNode("Material");
Material160.emissiveColor = new SFColor(new float[1,1,1]);
Appearance159.material = Material160;

Shape158.appearance = Appearance159;

let IndexedLineSet161 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet161.DEF = "TMT3toMTP3";
IndexedLineSet161.coordIndex = new MFInt32(new int[0,1]);
let Coordinate162 = browser.currentScene.createNode("Coordinate");
Coordinate162.point = new MFVec3f(new float[0.15,-0.6,0,0.15,-0.9,0]);
IndexedLineSet161.coord = Coordinate162;

Shape158.geometry = IndexedLineSet161;

HAnimSegment155.children[1] = Shape158;

HAnimJoint154.children = new MFNode();

HAnimJoint154.children[0] = HAnimSegment155;

let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.name = "l_metatarsophalangeal_3";
HAnimJoint163.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint163.center = new SFVec3f(new float[0.15,-0.9,0]);
HAnimJoint163.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint163.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment164 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment164.name = "l_tarsal_proximal_phalanx_3";
HAnimSegment164.DEF = "hanim_l_tarsal_proximal_phalanx_3";
let Transform165 = browser.currentScene.createNode("Transform");
Transform165.translation = new SFVec3f(new float[0.15,-0.9,0]);
let Shape166 = browser.currentScene.createNode("Shape");
Shape166.USE = "HAnimJointShape";
Transform165.child = new undefined();

Transform165.child[0] = Shape166;

HAnimSegment164.children = new MFNode();

HAnimSegment164.children[0] = Transform165;

let Shape167 = browser.currentScene.createNode("Shape");
let Appearance168 = browser.currentScene.createNode("Appearance");
let Material169 = browser.currentScene.createNode("Material");
Material169.emissiveColor = new SFColor(new float[1,1,1]);
Appearance168.material = Material169;

Shape167.appearance = Appearance168;

let IndexedLineSet170 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet170.DEF = "MTP3toPIP3";
IndexedLineSet170.coordIndex = new MFInt32(new int[0,1]);
let Coordinate171 = browser.currentScene.createNode("Coordinate");
Coordinate171.point = new MFVec3f(new float[0.15,-0.9,0,0.15,-1.05,0]);
IndexedLineSet170.coord = Coordinate171;

Shape167.geometry = IndexedLineSet170;

HAnimSegment164.children[1] = Shape167;

HAnimJoint163.children = new MFNode();

HAnimJoint163.children[0] = HAnimSegment164;

let HAnimJoint172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint172.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint172.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint172.center = new SFVec3f(new float[0.15,-1.05,0]);
HAnimJoint172.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint172.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment173 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment173.name = "l_tarsal_middle_phalanx_3";
HAnimSegment173.DEF = "hanim_l_tarsal_middle_phalanx_3";
let Transform174 = browser.currentScene.createNode("Transform");
Transform174.translation = new SFVec3f(new float[0.15,-1.05,0]);
let Shape175 = browser.currentScene.createNode("Shape");
Shape175.USE = "HAnimJointShape";
Transform174.child = new undefined();

Transform174.child[0] = Shape175;

HAnimSegment173.children = new MFNode();

HAnimSegment173.children[0] = Transform174;

let Shape176 = browser.currentScene.createNode("Shape");
let Appearance177 = browser.currentScene.createNode("Appearance");
let Material178 = browser.currentScene.createNode("Material");
Material178.emissiveColor = new SFColor(new float[1,1,1]);
Appearance177.material = Material178;

Shape176.appearance = Appearance177;

let IndexedLineSet179 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet179.DEF = "PIP3toDIP3";
IndexedLineSet179.coordIndex = new MFInt32(new int[0,1]);
let Coordinate180 = browser.currentScene.createNode("Coordinate");
Coordinate180.point = new MFVec3f(new float[0.15,-1.05,0,0.15,-1.13,0]);
IndexedLineSet179.coord = Coordinate180;

Shape176.geometry = IndexedLineSet179;

HAnimSegment173.children[1] = Shape176;

HAnimJoint172.children = new MFNode();

HAnimJoint172.children[0] = HAnimSegment173;

let HAnimJoint181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint181.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint181.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint181.center = new SFVec3f(new float[0.15,-1.13,0]);
HAnimJoint181.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint181.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment182 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment182.name = "l_tarsal_distal_phalanx_3";
HAnimSegment182.DEF = "hanim_l_tarsal_distal_phalanx_3";
let Transform183 = browser.currentScene.createNode("Transform");
Transform183.translation = new SFVec3f(new float[0.15,-1.13,0]);
let Shape184 = browser.currentScene.createNode("Shape");
Shape184.USE = "HAnimJointShape";
Transform183.child = new undefined();

Transform183.child[0] = Shape184;

HAnimSegment182.children = new MFNode();

HAnimSegment182.children[0] = Transform183;

let Shape185 = browser.currentScene.createNode("Shape");
let Appearance186 = browser.currentScene.createNode("Appearance");
let Material187 = browser.currentScene.createNode("Material");
Material187.emissiveColor = new SFColor(new float[1,1,1]);
Appearance186.material = Material187;

Shape185.appearance = Appearance186;

let IndexedLineSet188 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet188.DEF = "tiptoe_l_tarsal_distal_interphalangeal_3";
IndexedLineSet188.coordIndex = new MFInt32(new int[0,1]);
let Coordinate189 = browser.currentScene.createNode("Coordinate");
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
let HAnimJoint190 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint190.name = "l_calcaneocuboid";
HAnimJoint190.DEF = "hanim_l_calcaneocuboid";
HAnimJoint190.center = new SFVec3f(new float[0.2,0.3,0]);
HAnimJoint190.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint190.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment191 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment191.name = "l_calcaneus";
HAnimSegment191.DEF = "hanim_l_calcaneus";
let Transform192 = browser.currentScene.createNode("Transform");
Transform192.translation = new SFVec3f(new float[0.2,0.3,0]);
let Shape193 = browser.currentScene.createNode("Shape");
Shape193.USE = "HAnimJointShape";
Transform192.child = new undefined();

Transform192.child[0] = Shape193;

HAnimSegment191.children = new MFNode();

HAnimSegment191.children[0] = Transform192;

let Shape194 = browser.currentScene.createNode("Shape");
let Appearance195 = browser.currentScene.createNode("Appearance");
let Material196 = browser.currentScene.createNode("Material");
Material196.emissiveColor = new SFColor(new float[1,1,1]);
Appearance195.material = Material196;

Shape194.appearance = Appearance195;

let IndexedLineSet197 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet197.DEF = "CCtoTT";
IndexedLineSet197.coordIndex = new MFInt32(new int[0,1]);
let Coordinate198 = browser.currentScene.createNode("Coordinate");
Coordinate198.point = new MFVec3f(new float[0.2,0.3,0,0.21,-0.3,0]);
IndexedLineSet197.coord = Coordinate198;

Shape194.geometry = IndexedLineSet197;

HAnimSegment191.children[1] = Shape194;

HAnimJoint190.children = new MFNode();

HAnimJoint190.children[0] = HAnimSegment191;

//TT
let HAnimJoint199 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint199.name = "l_transversetarsal";
HAnimJoint199.DEF = "hanim_l_transversetarsal";
HAnimJoint199.center = new SFVec3f(new float[0.21,-0.3,0]);
HAnimJoint199.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint199.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment200 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment200.name = "l_cuboid";
HAnimSegment200.DEF = "hanim_l_cuboid";
let Transform201 = browser.currentScene.createNode("Transform");
Transform201.translation = new SFVec3f(new float[0.21,-0.3,0]);
let Shape202 = browser.currentScene.createNode("Shape");
Shape202.USE = "HAnimJointShape";
Transform201.child = new undefined();

Transform201.child[0] = Shape202;

HAnimSegment200.children = new MFNode();

HAnimSegment200.children[0] = Transform201;

let Shape203 = browser.currentScene.createNode("Shape");
let Appearance204 = browser.currentScene.createNode("Appearance");
let Material205 = browser.currentScene.createNode("Material");
Material205.emissiveColor = new SFColor(new float[1,1,1]);
Appearance204.material = Material205;

Shape203.appearance = Appearance204;

let IndexedLineSet206 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet206.DEF = "TTtoTMT4";
IndexedLineSet206.coordIndex = new MFInt32(new int[0,1]);
let Coordinate207 = browser.currentScene.createNode("Coordinate");
Coordinate207.point = new MFVec3f(new float[0.21,-0.3,0,0.25,-0.58,0]);
IndexedLineSet206.coord = Coordinate207;

Shape203.geometry = IndexedLineSet206;

HAnimSegment200.children[1] = Shape203;

let Shape208 = browser.currentScene.createNode("Shape");
let Appearance209 = browser.currentScene.createNode("Appearance");
let Material210 = browser.currentScene.createNode("Material");
Material210.emissiveColor = new SFColor(new float[1,1,1]);
Appearance209.material = Material210;

Shape208.appearance = Appearance209;

let IndexedLineSet211 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet211.DEF = "TTtoTMT5";
IndexedLineSet211.coordIndex = new MFInt32(new int[0,1]);
let Coordinate212 = browser.currentScene.createNode("Coordinate");
Coordinate212.point = new MFVec3f(new float[0.21,-0.3,0,0.33,-0.52,0]);
IndexedLineSet211.coord = Coordinate212;

Shape208.geometry = IndexedLineSet211;

HAnimSegment200.children[2] = Shape208;

HAnimJoint199.children = new MFNode();

HAnimJoint199.children[0] = HAnimSegment200;

//TMT4
let HAnimJoint213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint213.name = "l_tarsometatarsal_4";
HAnimJoint213.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint213.center = new SFVec3f(new float[0.25,-0.58,0]);
HAnimJoint213.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint213.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment214 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment214.name = "l_metatarsal_4";
HAnimSegment214.DEF = "hanim_l_metatarsal_4";
let Transform215 = browser.currentScene.createNode("Transform");
Transform215.translation = new SFVec3f(new float[0.25,-0.58,0]);
let Shape216 = browser.currentScene.createNode("Shape");
Shape216.USE = "HAnimJointShape";
Transform215.child = new undefined();

Transform215.child[0] = Shape216;

HAnimSegment214.children = new MFNode();

HAnimSegment214.children[0] = Transform215;

let Shape217 = browser.currentScene.createNode("Shape");
let Appearance218 = browser.currentScene.createNode("Appearance");
let Material219 = browser.currentScene.createNode("Material");
Material219.emissiveColor = new SFColor(new float[1,1,1]);
Appearance218.material = Material219;

Shape217.appearance = Appearance218;

let IndexedLineSet220 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet220.DEF = "TMT4toMTP4";
IndexedLineSet220.coordIndex = new MFInt32(new int[0,1]);
let Coordinate221 = browser.currentScene.createNode("Coordinate");
Coordinate221.point = new MFVec3f(new float[0.25,-0.58,0,0.25,-0.87,0]);
IndexedLineSet220.coord = Coordinate221;

Shape217.geometry = IndexedLineSet220;

HAnimSegment214.children[1] = Shape217;

HAnimJoint213.children = new MFNode();

HAnimJoint213.children[0] = HAnimSegment214;

let HAnimJoint222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint222.name = "l_metatarsophalangeal_4";
HAnimJoint222.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint222.center = new SFVec3f(new float[0.25,-0.87,0]);
HAnimJoint222.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint222.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment223 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment223.name = "l_tarsal_proximal_phalanx_4";
HAnimSegment223.DEF = "hanim_l_tarsal_proximal_phalanx_4";
let Transform224 = browser.currentScene.createNode("Transform");
Transform224.translation = new SFVec3f(new float[0.25,-0.87,0]);
let Shape225 = browser.currentScene.createNode("Shape");
Shape225.USE = "HAnimJointShape";
Transform224.child = new undefined();

Transform224.child[0] = Shape225;

HAnimSegment223.children = new MFNode();

HAnimSegment223.children[0] = Transform224;

let Shape226 = browser.currentScene.createNode("Shape");
let Appearance227 = browser.currentScene.createNode("Appearance");
let Material228 = browser.currentScene.createNode("Material");
Material228.emissiveColor = new SFColor(new float[1,1,1]);
Appearance227.material = Material228;

Shape226.appearance = Appearance227;

let IndexedLineSet229 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet229.DEF = "MTP4toPIP4";
IndexedLineSet229.coordIndex = new MFInt32(new int[0,1]);
let Coordinate230 = browser.currentScene.createNode("Coordinate");
Coordinate230.point = new MFVec3f(new float[0.25,-0.87,0,0.25,-1,0]);
IndexedLineSet229.coord = Coordinate230;

Shape226.geometry = IndexedLineSet229;

HAnimSegment223.children[1] = Shape226;

HAnimJoint222.children = new MFNode();

HAnimJoint222.children[0] = HAnimSegment223;

let HAnimJoint231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint231.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint231.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint231.center = new SFVec3f(new float[0.25,-1,0]);
HAnimJoint231.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint231.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment232 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment232.name = "l_tarsal_middle_phalanx_4";
HAnimSegment232.DEF = "hanim_l_tarsal_middle_phalanx_4";
let Transform233 = browser.currentScene.createNode("Transform");
Transform233.translation = new SFVec3f(new float[0.25,-1,0]);
let Shape234 = browser.currentScene.createNode("Shape");
Shape234.USE = "HAnimJointShape";
Transform233.child = new undefined();

Transform233.child[0] = Shape234;

HAnimSegment232.children = new MFNode();

HAnimSegment232.children[0] = Transform233;

let Shape235 = browser.currentScene.createNode("Shape");
let Appearance236 = browser.currentScene.createNode("Appearance");
let Material237 = browser.currentScene.createNode("Material");
Material237.emissiveColor = new SFColor(new float[1,1,1]);
Appearance236.material = Material237;

Shape235.appearance = Appearance236;

let IndexedLineSet238 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet238.DEF = "PIP4toDIP4";
IndexedLineSet238.coordIndex = new MFInt32(new int[0,1]);
let Coordinate239 = browser.currentScene.createNode("Coordinate");
Coordinate239.point = new MFVec3f(new float[0.25,-1,0,0.25,-1.1,0]);
IndexedLineSet238.coord = Coordinate239;

Shape235.geometry = IndexedLineSet238;

HAnimSegment232.children[1] = Shape235;

HAnimJoint231.children = new MFNode();

HAnimJoint231.children[0] = HAnimSegment232;

let HAnimJoint240 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint240.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint240.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint240.center = new SFVec3f(new float[0.25,-1.1,0]);
HAnimJoint240.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint240.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment241 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment241.name = "l_tarsal_distal_phalanx_4";
HAnimSegment241.DEF = "hanim_l_tarsal_distal_phalanx_4";
let Transform242 = browser.currentScene.createNode("Transform");
Transform242.translation = new SFVec3f(new float[0.25,-1.1,0]);
let Shape243 = browser.currentScene.createNode("Shape");
Shape243.USE = "HAnimJointShape";
Transform242.child = new undefined();

Transform242.child[0] = Shape243;

HAnimSegment241.children = new MFNode();

HAnimSegment241.children[0] = Transform242;

let Shape244 = browser.currentScene.createNode("Shape");
let Appearance245 = browser.currentScene.createNode("Appearance");
let Material246 = browser.currentScene.createNode("Material");
Material246.emissiveColor = new SFColor(new float[1,1,1]);
Appearance245.material = Material246;

Shape244.appearance = Appearance245;

let IndexedLineSet247 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet247.DEF = "tiptoe_l_tarsal_distal_interphalangeal_4";
IndexedLineSet247.coordIndex = new MFInt32(new int[0,1]);
let Coordinate248 = browser.currentScene.createNode("Coordinate");
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
let HAnimJoint249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint249.name = "l_tarsometatarsal_5";
HAnimJoint249.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint249.center = new SFVec3f(new float[0.33,-0.52,0]);
HAnimJoint249.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint249.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment250 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment250.name = "l_metatarsal_5";
HAnimSegment250.DEF = "hanim_l_metatarsal_5";
let Transform251 = browser.currentScene.createNode("Transform");
Transform251.translation = new SFVec3f(new float[0.33,-0.52,0]);
let Shape252 = browser.currentScene.createNode("Shape");
Shape252.USE = "HAnimJointShape";
Transform251.child = new undefined();

Transform251.child[0] = Shape252;

HAnimSegment250.children = new MFNode();

HAnimSegment250.children[0] = Transform251;

let Shape253 = browser.currentScene.createNode("Shape");
let Appearance254 = browser.currentScene.createNode("Appearance");
let Material255 = browser.currentScene.createNode("Material");
Material255.emissiveColor = new SFColor(new float[1,1,1]);
Appearance254.material = Material255;

Shape253.appearance = Appearance254;

let IndexedLineSet256 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet256.DEF = "TMT5toMTP5";
IndexedLineSet256.coordIndex = new MFInt32(new int[0,1]);
let Coordinate257 = browser.currentScene.createNode("Coordinate");
Coordinate257.point = new MFVec3f(new float[0.33,-0.52,0,0.34,-0.8,0]);
IndexedLineSet256.coord = Coordinate257;

Shape253.geometry = IndexedLineSet256;

HAnimSegment250.children[1] = Shape253;

HAnimJoint249.children = new MFNode();

HAnimJoint249.children[0] = HAnimSegment250;

let HAnimJoint258 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint258.name = "l_metatarsophalangeal_5";
HAnimJoint258.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint258.center = new SFVec3f(new float[0.34,-0.8,0]);
HAnimJoint258.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint258.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment259 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment259.name = "l_tarsal_proximal_phalanx_5";
HAnimSegment259.DEF = "hanim_l_tarsal_proximal_phalanx_5";
let Transform260 = browser.currentScene.createNode("Transform");
Transform260.translation = new SFVec3f(new float[0.34,-0.8,0]);
let Shape261 = browser.currentScene.createNode("Shape");
Shape261.USE = "HAnimJointShape";
Transform260.child = new undefined();

Transform260.child[0] = Shape261;

HAnimSegment259.children = new MFNode();

HAnimSegment259.children[0] = Transform260;

let Shape262 = browser.currentScene.createNode("Shape");
let Appearance263 = browser.currentScene.createNode("Appearance");
let Material264 = browser.currentScene.createNode("Material");
Material264.emissiveColor = new SFColor(new float[1,1,1]);
Appearance263.material = Material264;

Shape262.appearance = Appearance263;

let IndexedLineSet265 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet265.DEF = "MTP5toPIP5";
IndexedLineSet265.coordIndex = new MFInt32(new int[0,1]);
let Coordinate266 = browser.currentScene.createNode("Coordinate");
Coordinate266.point = new MFVec3f(new float[0.34,-0.8,0,0.34,-0.95,0]);
IndexedLineSet265.coord = Coordinate266;

Shape262.geometry = IndexedLineSet265;

HAnimSegment259.children[1] = Shape262;

HAnimJoint258.children = new MFNode();

HAnimJoint258.children[0] = HAnimSegment259;

let HAnimJoint267 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint267.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint267.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint267.center = new SFVec3f(new float[0.34,-0.95,0]);
HAnimJoint267.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint267.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment268 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment268.name = "l_tarsal_middle_phalanx_5";
HAnimSegment268.DEF = "hanim_l_tarsal_middle_phalanx_5";
let Transform269 = browser.currentScene.createNode("Transform");
Transform269.translation = new SFVec3f(new float[0.34,-0.95,0]);
let Shape270 = browser.currentScene.createNode("Shape");
Shape270.USE = "HAnimJointShape";
Transform269.child = new undefined();

Transform269.child[0] = Shape270;

HAnimSegment268.children = new MFNode();

HAnimSegment268.children[0] = Transform269;

let Shape271 = browser.currentScene.createNode("Shape");
let Appearance272 = browser.currentScene.createNode("Appearance");
let Material273 = browser.currentScene.createNode("Material");
Material273.emissiveColor = new SFColor(new float[1,1,1]);
Appearance272.material = Material273;

Shape271.appearance = Appearance272;

let IndexedLineSet274 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet274.DEF = "PIP5toDIP5";
IndexedLineSet274.coordIndex = new MFInt32(new int[0,1]);
let Coordinate275 = browser.currentScene.createNode("Coordinate");
Coordinate275.point = new MFVec3f(new float[0.34,-0.95,0,0.34,-1.05,0]);
IndexedLineSet274.coord = Coordinate275;

Shape271.geometry = IndexedLineSet274;

HAnimSegment268.children[1] = Shape271;

HAnimJoint267.children = new MFNode();

HAnimJoint267.children[0] = HAnimSegment268;

let HAnimJoint276 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint276.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint276.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint276.center = new SFVec3f(new float[0.34,-1.05,0]);
HAnimJoint276.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint276.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment277 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment277.name = "l_tarsal_distal_phalanx_5";
HAnimSegment277.DEF = "hanim_l_tarsal_distal_phalanx_5";
let Transform278 = browser.currentScene.createNode("Transform");
Transform278.translation = new SFVec3f(new float[0.34,-1.05,0]);
let Shape279 = browser.currentScene.createNode("Shape");
Shape279.USE = "HAnimJointShape";
Transform278.child = new undefined();

Transform278.child[0] = Shape279;

HAnimSegment277.children = new MFNode();

HAnimSegment277.children[0] = Transform278;

let Shape280 = browser.currentScene.createNode("Shape");
let Appearance281 = browser.currentScene.createNode("Appearance");
let Material282 = browser.currentScene.createNode("Material");
Material282.emissiveColor = new SFColor(new float[1,1,1]);
Appearance281.material = Material282;

Shape280.appearance = Appearance281;

let IndexedLineSet283 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet283.DEF = "tiptoe_l_tarsal_distal_interphalangeal_5";
IndexedLineSet283.coordIndex = new MFInt32(new int[0,1]);
let Coordinate284 = browser.currentScene.createNode("Coordinate");
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

HAnimHumanoid24.joints[1] = HAnimJoint27;

let HAnimJoint285 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint285.USE = "hanim_humanoid_root";
HAnimHumanoid24.joints[2] = HAnimJoint285;

let HAnimJoint286 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint286.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid24.joints[3] = HAnimJoint286;

let HAnimJoint287 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint287.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid24.joints[4] = HAnimJoint287;

let HAnimJoint288 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint288.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid24.joints[5] = HAnimJoint288;

let HAnimJoint289 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint289.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid24.joints[6] = HAnimJoint289;

let HAnimJoint290 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint290.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid24.joints[7] = HAnimJoint290;

let HAnimJoint291 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint291.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid24.joints[8] = HAnimJoint291;

let HAnimJoint292 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint292.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid24.joints[9] = HAnimJoint292;

let HAnimJoint293 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint293.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid24.joints[10] = HAnimJoint293;

let HAnimJoint294 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint294.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid24.joints[11] = HAnimJoint294;

let HAnimJoint295 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint295.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid24.joints[12] = HAnimJoint295;

let HAnimJoint296 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint296.USE = "hanim_l_talocrural";
HAnimHumanoid24.joints[13] = HAnimJoint296;

let HAnimJoint297 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint297.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid24.joints[14] = HAnimJoint297;

let HAnimJoint298 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint298.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid24.joints[15] = HAnimJoint298;

let HAnimJoint299 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint299.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid24.joints[16] = HAnimJoint299;

let HAnimJoint300 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint300.USE = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimHumanoid24.joints[17] = HAnimJoint300;

let HAnimJoint301 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint301.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid24.joints[18] = HAnimJoint301;

let HAnimJoint302 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint302.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid24.joints[19] = HAnimJoint302;

let HAnimJoint303 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint303.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid24.joints[20] = HAnimJoint303;

let HAnimJoint304 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint304.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid24.joints[21] = HAnimJoint304;

let HAnimJoint305 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint305.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimHumanoid24.joints[22] = HAnimJoint305;

let HAnimJoint306 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint306.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid24.joints[23] = HAnimJoint306;

let HAnimJoint307 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint307.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid24.joints[24] = HAnimJoint307;

let HAnimJoint308 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint308.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid24.joints[25] = HAnimJoint308;

let HAnimJoint309 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint309.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid24.joints[26] = HAnimJoint309;

let HAnimJoint310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint310.USE = "hanim_l_tarsometatarsal_5";
HAnimHumanoid24.joints[27] = HAnimJoint310;

let HAnimJoint311 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint311.USE = "hanim_l_transversetarsal";
HAnimHumanoid24.joints[28] = HAnimJoint311;

let HAnimSegment312 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment312.USE = "hanim_l_calcaneus";
HAnimHumanoid24.segments[29] = HAnimSegment312;

let HAnimSegment313 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment313.USE = "hanim_l_cuboid";
HAnimHumanoid24.segments[30] = HAnimSegment313;

let HAnimSegment314 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment314.USE = "hanim_l_cuneiform_1";
HAnimHumanoid24.segments[31] = HAnimSegment314;

let HAnimSegment315 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment315.USE = "hanim_l_cuneiform_2";
HAnimHumanoid24.segments[32] = HAnimSegment315;

let HAnimSegment316 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment316.USE = "hanim_l_cuneiform_3";
HAnimHumanoid24.segments[33] = HAnimSegment316;

let HAnimSegment317 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment317.USE = "hanim_l_metatarsal_1";
HAnimHumanoid24.segments[34] = HAnimSegment317;

let HAnimSegment318 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment318.USE = "hanim_l_metatarsal_2";
HAnimHumanoid24.segments[35] = HAnimSegment318;

let HAnimSegment319 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment319.USE = "hanim_l_metatarsal_3";
HAnimHumanoid24.segments[36] = HAnimSegment319;

let HAnimSegment320 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment320.USE = "hanim_l_metatarsal_4";
HAnimHumanoid24.segments[37] = HAnimSegment320;

let HAnimSegment321 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment321.USE = "hanim_l_metatarsal_5";
HAnimHumanoid24.segments[38] = HAnimSegment321;

let HAnimSegment322 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment322.USE = "hanim_l_navicular";
HAnimHumanoid24.segments[39] = HAnimSegment322;

let HAnimSegment323 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment323.USE = "hanim_l_talus";
HAnimHumanoid24.segments[40] = HAnimSegment323;

let HAnimSegment324 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment324.USE = "hanim_l_tarsal_distal_phalanx_1";
HAnimHumanoid24.segments[41] = HAnimSegment324;

let HAnimSegment325 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment325.USE = "hanim_l_tarsal_distal_phalanx_2";
HAnimHumanoid24.segments[42] = HAnimSegment325;

let HAnimSegment326 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment326.USE = "hanim_l_tarsal_distal_phalanx_3";
HAnimHumanoid24.segments[43] = HAnimSegment326;

let HAnimSegment327 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment327.USE = "hanim_l_tarsal_distal_phalanx_4";
HAnimHumanoid24.segments[44] = HAnimSegment327;

let HAnimSegment328 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment328.USE = "hanim_l_tarsal_distal_phalanx_5";
HAnimHumanoid24.segments[45] = HAnimSegment328;

let HAnimSegment329 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment329.USE = "hanim_l_tarsal_middle_phalanx_2";
HAnimHumanoid24.segments[46] = HAnimSegment329;

let HAnimSegment330 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment330.USE = "hanim_l_tarsal_middle_phalanx_3";
HAnimHumanoid24.segments[47] = HAnimSegment330;

let HAnimSegment331 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment331.USE = "hanim_l_tarsal_middle_phalanx_4";
HAnimHumanoid24.segments[48] = HAnimSegment331;

let HAnimSegment332 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment332.USE = "hanim_l_tarsal_middle_phalanx_5";
HAnimHumanoid24.segments[49] = HAnimSegment332;

let HAnimSegment333 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment333.USE = "hanim_l_tarsal_proximal_phalanx_1";
HAnimHumanoid24.segments[50] = HAnimSegment333;

let HAnimSegment334 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment334.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid24.segments[51] = HAnimSegment334;

let HAnimSegment335 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment335.USE = "hanim_l_tarsal_proximal_phalanx_3";
HAnimHumanoid24.segments[52] = HAnimSegment335;

let HAnimSegment336 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment336.USE = "hanim_l_tarsal_proximal_phalanx_4";
HAnimHumanoid24.segments[53] = HAnimSegment336;

let HAnimSegment337 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment337.USE = "hanim_l_tarsal_proximal_phalanx_5";
HAnimHumanoid24.segments[54] = HAnimSegment337;

browser.currentScene.children[1] = HAnimHumanoid24;


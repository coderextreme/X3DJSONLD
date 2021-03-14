let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "HAnimModelFootRight.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let HAnimHumanoid3 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid3.name = "Foot_Right";
HAnimHumanoid3.DEF = "hanim_Foot_Right";
HAnimHumanoid3.loa = 4;
HAnimHumanoid3.version = "2.0";
//HAnimHumanoid original info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
let MetadataSet4 = browser.currentScene.createNode("MetadataSet");
MetadataSet4.name = "HAnimHumanoid.info";
MetadataSet4.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString5 = browser.currentScene.createNode("MetadataString");
MetadataString5.name = "authorName";
MetadataString5.value = new MFString(new java.lang.String["Kwan-Hee YOO, Don Brutzman and Joe Williams"]);
MetadataSet4.value = new MFNode();

MetadataSet4.value[0] = MetadataString5;

HAnimHumanoid3.metadata = MetadataSet4;

let HAnimJoint6 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint6.name = "humanoid_root";
HAnimJoint6.DEF = "hanim_humanoid_root";
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model
let HAnimJoint7 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint7.name = "r_talocrural";
HAnimJoint7.DEF = "hanim_r_talocrural";
HAnimJoint7.description = "connection joint of foot to leg above";
let HAnimSegment8 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment8.name = "r_talus";
HAnimSegment8.DEF = "hanim_r_talus";
let Transform9 = browser.currentScene.createNode("Transform");
let Shape10 = browser.currentScene.createNode("Shape");
Shape10.DEF = "HAnimJointShape";
let Sphere11 = browser.currentScene.createNode("Sphere");
Sphere11.radius = 0.025;
Shape10.geometry = Sphere11;

let Appearance12 = browser.currentScene.createNode("Appearance");
Appearance12.DEF = "HAnimJointAppearance";
let Material13 = browser.currentScene.createNode("Material");
Material13.diffuseColor = new SFColor(new float[0,0,1]);
Appearance12.material = Material13;

Shape10.appearance = Appearance12;

Transform9.children = new MFNode();

Transform9.children[0] = Shape10;

HAnimSegment8.children = new MFNode();

HAnimSegment8.children[0] = Transform9;

let Shape14 = browser.currentScene.createNode("Shape");
let Appearance15 = browser.currentScene.createNode("Appearance");
let Material16 = browser.currentScene.createNode("Material");
Material16.emissiveColor = new SFColor(new float[1,1,1]);
Appearance15.material = Material16;

Shape14.appearance = Appearance15;

let IndexedLineSet17 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet17.DEF = "TCtoTCN";
IndexedLineSet17.coordIndex = new MFInt32(new int[0,1]);
let Coordinate18 = browser.currentScene.createNode("Coordinate");
Coordinate18.point = new MFVec3f(new float[0,0,0,0,-0.3,0]);
IndexedLineSet17.coord = Coordinate18;

Shape14.geometry = IndexedLineSet17;

HAnimSegment8.children[1] = Shape14;

let Shape19 = browser.currentScene.createNode("Shape");
let Appearance20 = browser.currentScene.createNode("Appearance");
let Material21 = browser.currentScene.createNode("Material");
Material21.emissiveColor = new SFColor(new float[1,1,1]);
Appearance20.material = Material21;

Shape19.appearance = Appearance20;

let IndexedLineSet22 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet22.DEF = "TCtoCC";
IndexedLineSet22.coordIndex = new MFInt32(new int[0,1]);
let Coordinate23 = browser.currentScene.createNode("Coordinate");
Coordinate23.point = new MFVec3f(new float[0,0,0,-0.2,0.3,0]);
IndexedLineSet22.coord = Coordinate23;

Shape19.geometry = IndexedLineSet22;

HAnimSegment8.children[2] = Shape19;

HAnimJoint7.children = new MFNode();

HAnimJoint7.children[0] = HAnimSegment8;

//TCN
let HAnimJoint24 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint24.name = "r_talocalcaneonavicular";
HAnimJoint24.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint24.center = new SFVec3f(new float[0,-0.3,0]);
let HAnimSegment25 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment25.name = "r_navicular";
HAnimSegment25.DEF = "hanim_r_navicular";
let Transform26 = browser.currentScene.createNode("Transform");
Transform26.translation = new SFVec3f(new float[0,-0.3,0]);
let Shape27 = browser.currentScene.createNode("Shape");
Shape27.USE = "HAnimJointShape";
Transform26.children = new MFNode();

Transform26.children[0] = Shape27;

HAnimSegment25.children = new MFNode();

HAnimSegment25.children[0] = Transform26;

let Shape28 = browser.currentScene.createNode("Shape");
let Appearance29 = browser.currentScene.createNode("Appearance");
let Material30 = browser.currentScene.createNode("Material");
Material30.emissiveColor = new SFColor(new float[1,1,1]);
Appearance29.material = Material30;

Shape28.appearance = Appearance29;

let IndexedLineSet31 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet31.DEF = "TCNtoCN1";
IndexedLineSet31.coordIndex = new MFInt32(new int[0,1]);
let Coordinate32 = browser.currentScene.createNode("Coordinate");
Coordinate32.point = new MFVec3f(new float[0,-0.3,0,0.1,-0.45,0]);
IndexedLineSet31.coord = Coordinate32;

Shape28.geometry = IndexedLineSet31;

HAnimSegment25.children[1] = Shape28;

let Shape33 = browser.currentScene.createNode("Shape");
let Appearance34 = browser.currentScene.createNode("Appearance");
let Material35 = browser.currentScene.createNode("Material");
Material35.emissiveColor = new SFColor(new float[1,1,1]);
Appearance34.material = Material35;

Shape33.appearance = Appearance34;

let IndexedLineSet36 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet36.DEF = "TCNtoCN2";
IndexedLineSet36.coordIndex = new MFInt32(new int[0,1]);
let Coordinate37 = browser.currentScene.createNode("Coordinate");
Coordinate37.point = new MFVec3f(new float[0,-0.3,0,0,-0.45,0]);
IndexedLineSet36.coord = Coordinate37;

Shape33.geometry = IndexedLineSet36;

HAnimSegment25.children[2] = Shape33;

let Shape38 = browser.currentScene.createNode("Shape");
let Appearance39 = browser.currentScene.createNode("Appearance");
let Material40 = browser.currentScene.createNode("Material");
Material40.emissiveColor = new SFColor(new float[1,1,1]);
Appearance39.material = Material40;

Shape38.appearance = Appearance39;

let IndexedLineSet41 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet41.DEF = "TCNtoCN3";
IndexedLineSet41.coordIndex = new MFInt32(new int[0,1]);
let Coordinate42 = browser.currentScene.createNode("Coordinate");
Coordinate42.point = new MFVec3f(new float[0,-0.3,0,-0.1,-0.4,0]);
IndexedLineSet41.coord = Coordinate42;

Shape38.geometry = IndexedLineSet41;

HAnimSegment25.children[3] = Shape38;

HAnimJoint24.children = new MFNode();

HAnimJoint24.children[0] = HAnimSegment25;

//CN1
let HAnimJoint43 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint43.name = "r_cuneonavicular_1";
HAnimJoint43.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint43.center = new SFVec3f(new float[0.1,-0.45,0]);
let HAnimSegment44 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment44.name = "r_cuneiform_1";
HAnimSegment44.DEF = "hanim_r_cuneiform_1";
let Transform45 = browser.currentScene.createNode("Transform");
Transform45.translation = new SFVec3f(new float[0.1,-0.45,0]);
let Shape46 = browser.currentScene.createNode("Shape");
Shape46.USE = "HAnimJointShape";
Transform45.children = new MFNode();

Transform45.children[0] = Shape46;

HAnimSegment44.children = new MFNode();

HAnimSegment44.children[0] = Transform45;

let Shape47 = browser.currentScene.createNode("Shape");
let Appearance48 = browser.currentScene.createNode("Appearance");
let Material49 = browser.currentScene.createNode("Material");
Material49.emissiveColor = new SFColor(new float[1,1,1]);
Appearance48.material = Material49;

Shape47.appearance = Appearance48;

let IndexedLineSet50 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet50.DEF = "CN1toTMT1";
IndexedLineSet50.coordIndex = new MFInt32(new int[0,1]);
let Coordinate51 = browser.currentScene.createNode("Coordinate");
Coordinate51.point = new MFVec3f(new float[0.1,-0.45,0,0.1,-0.6,0]);
IndexedLineSet50.coord = Coordinate51;

Shape47.geometry = IndexedLineSet50;

HAnimSegment44.children[1] = Shape47;

HAnimJoint43.children = new MFNode();

HAnimJoint43.children[0] = HAnimSegment44;

let HAnimJoint52 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint52.name = "r_tarsometatarsal_1";
HAnimJoint52.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint52.center = new SFVec3f(new float[0.1,-0.6,0]);
let HAnimSegment53 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment53.name = "r_metatarsal_1";
HAnimSegment53.DEF = "hanim_r_metatarsal_1";
let Transform54 = browser.currentScene.createNode("Transform");
Transform54.translation = new SFVec3f(new float[0.1,-0.6,0]);
let Shape55 = browser.currentScene.createNode("Shape");
Shape55.USE = "HAnimJointShape";
Transform54.children = new MFNode();

Transform54.children[0] = Shape55;

HAnimSegment53.children = new MFNode();

HAnimSegment53.children[0] = Transform54;

let Shape56 = browser.currentScene.createNode("Shape");
let Appearance57 = browser.currentScene.createNode("Appearance");
let Material58 = browser.currentScene.createNode("Material");
Material58.emissiveColor = new SFColor(new float[1,1,1]);
Appearance57.material = Material58;

Shape56.appearance = Appearance57;

let IndexedLineSet59 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet59.DEF = "TMT1toMTP1";
IndexedLineSet59.coordIndex = new MFInt32(new int[0,1]);
let Coordinate60 = browser.currentScene.createNode("Coordinate");
Coordinate60.point = new MFVec3f(new float[0.1,-0.6,0,0.1,-0.9,0]);
IndexedLineSet59.coord = Coordinate60;

Shape56.geometry = IndexedLineSet59;

HAnimSegment53.children[1] = Shape56;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimSegment53;

let HAnimJoint61 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint61.name = "r_metatarsophalangeal_1";
HAnimJoint61.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint61.center = new SFVec3f(new float[0.1,-0.9,0]);
let HAnimSegment62 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment62.name = "r_tarsal_proximal_phalanx_1";
HAnimSegment62.DEF = "hanim_r_tarsal_proximal_phalanx_1";
let Transform63 = browser.currentScene.createNode("Transform");
Transform63.translation = new SFVec3f(new float[0.1,-0.9,0]);
let Shape64 = browser.currentScene.createNode("Shape");
Shape64.USE = "HAnimJointShape";
Transform63.children = new MFNode();

Transform63.children[0] = Shape64;

HAnimSegment62.children = new MFNode();

HAnimSegment62.children[0] = Transform63;

let Shape65 = browser.currentScene.createNode("Shape");
let Appearance66 = browser.currentScene.createNode("Appearance");
let Material67 = browser.currentScene.createNode("Material");
Material67.emissiveColor = new SFColor(new float[1,1,1]);
Appearance66.material = Material67;

Shape65.appearance = Appearance66;

let IndexedLineSet68 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet68.DEF = "MTP1toIP1";
IndexedLineSet68.coordIndex = new MFInt32(new int[0,1]);
let Coordinate69 = browser.currentScene.createNode("Coordinate");
Coordinate69.point = new MFVec3f(new float[0.1,-0.9,0,0.1,-1.05,0]);
IndexedLineSet68.coord = Coordinate69;

Shape65.geometry = IndexedLineSet68;

HAnimSegment62.children[1] = Shape65;

HAnimJoint61.children = new MFNode();

HAnimJoint61.children[0] = HAnimSegment62;

let HAnimJoint70 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint70.name = "r_tarsal_interphalangeal_1";
HAnimJoint70.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint70.center = new SFVec3f(new float[0.1,-1.05,0]);
let HAnimSegment71 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment71.name = "r_tarsal_distal_phalanx_1";
HAnimSegment71.DEF = "hanim_r_tarsal_distal_phalanx_1";
let Transform72 = browser.currentScene.createNode("Transform");
Transform72.translation = new SFVec3f(new float[0.1,-1.05,0]);
let Shape73 = browser.currentScene.createNode("Shape");
Shape73.USE = "HAnimJointShape";
Transform72.children = new MFNode();

Transform72.children[0] = Shape73;

HAnimSegment71.children = new MFNode();

HAnimSegment71.children[0] = Transform72;

let Shape74 = browser.currentScene.createNode("Shape");
let Appearance75 = browser.currentScene.createNode("Appearance");
let Material76 = browser.currentScene.createNode("Material");
Material76.emissiveColor = new SFColor(new float[1,1,1]);
Appearance75.material = Material76;

Shape74.appearance = Appearance75;

let IndexedLineSet77 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet77.DEF = "tiptoe_r_interphalangeal_";
IndexedLineSet77.coordIndex = new MFInt32(new int[0,1]);
let Coordinate78 = browser.currentScene.createNode("Coordinate");
Coordinate78.point = new MFVec3f(new float[0.1,-1.05,0,0.1,-1.1,0]);
IndexedLineSet77.coord = Coordinate78;

Shape74.geometry = IndexedLineSet77;

HAnimSegment71.children[1] = Shape74;

HAnimJoint70.children = new MFNode();

HAnimJoint70.children[0] = HAnimSegment71;

HAnimJoint61.children[1] = HAnimJoint70;

HAnimJoint52.children[1] = HAnimJoint61;

HAnimJoint43.children[1] = HAnimJoint52;

HAnimJoint24.children[1] = HAnimJoint43;

//CN2
let HAnimJoint79 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint79.name = "r_cuneonavicular_2";
HAnimJoint79.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint79.center = new SFVec3f(new float[0,-0.45,0]);
let HAnimSegment80 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment80.name = "r_cuneiform_2";
HAnimSegment80.DEF = "hanim_r_cuneiform_2";
let Transform81 = browser.currentScene.createNode("Transform");
Transform81.translation = new SFVec3f(new float[0,-0.45,0]);
let Shape82 = browser.currentScene.createNode("Shape");
Shape82.USE = "HAnimJointShape";
Transform81.children = new MFNode();

Transform81.children[0] = Shape82;

HAnimSegment80.children = new MFNode();

HAnimSegment80.children[0] = Transform81;

let Shape83 = browser.currentScene.createNode("Shape");
let Appearance84 = browser.currentScene.createNode("Appearance");
let Material85 = browser.currentScene.createNode("Material");
Material85.emissiveColor = new SFColor(new float[1,1,1]);
Appearance84.material = Material85;

Shape83.appearance = Appearance84;

let IndexedLineSet86 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet86.DEF = "CN2toTMT2";
IndexedLineSet86.coordIndex = new MFInt32(new int[0,1]);
let Coordinate87 = browser.currentScene.createNode("Coordinate");
Coordinate87.point = new MFVec3f(new float[0,-0.45,0,-0.05,-0.6,0]);
IndexedLineSet86.coord = Coordinate87;

Shape83.geometry = IndexedLineSet86;

HAnimSegment80.children[1] = Shape83;

HAnimJoint79.children = new MFNode();

HAnimJoint79.children[0] = HAnimSegment80;

let HAnimJoint88 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint88.name = "r_tarsometatarsal_2";
HAnimJoint88.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint88.center = new SFVec3f(new float[-0.05,-0.6,0]);
let HAnimSegment89 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment89.name = "r_metatarsal_2";
HAnimSegment89.DEF = "hanim_r_metatarsal_2";
let Transform90 = browser.currentScene.createNode("Transform");
Transform90.translation = new SFVec3f(new float[-0.05,-0.6,0]);
let Shape91 = browser.currentScene.createNode("Shape");
Shape91.USE = "HAnimJointShape";
Transform90.children = new MFNode();

Transform90.children[0] = Shape91;

HAnimSegment89.children = new MFNode();

HAnimSegment89.children[0] = Transform90;

let Shape92 = browser.currentScene.createNode("Shape");
let Appearance93 = browser.currentScene.createNode("Appearance");
let Material94 = browser.currentScene.createNode("Material");
Material94.emissiveColor = new SFColor(new float[1,1,1]);
Appearance93.material = Material94;

Shape92.appearance = Appearance93;

let IndexedLineSet95 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet95.DEF = "TMT2toMTP2";
IndexedLineSet95.coordIndex = new MFInt32(new int[0,1]);
let Coordinate96 = browser.currentScene.createNode("Coordinate");
Coordinate96.point = new MFVec3f(new float[-0.05,-0.6,0,-0.05,-0.9,0]);
IndexedLineSet95.coord = Coordinate96;

Shape92.geometry = IndexedLineSet95;

HAnimSegment89.children[1] = Shape92;

HAnimJoint88.children = new MFNode();

HAnimJoint88.children[0] = HAnimSegment89;

let HAnimJoint97 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint97.name = "r_metatarsophalangeal_2";
HAnimJoint97.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint97.center = new SFVec3f(new float[-0.05,-0.9,0]);
let HAnimSegment98 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment98.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment98.DEF = "hanim_r_tarsal_proximal_phalanx_2";
let Transform99 = browser.currentScene.createNode("Transform");
Transform99.translation = new SFVec3f(new float[-0.05,-0.9,0]);
let Shape100 = browser.currentScene.createNode("Shape");
Shape100.USE = "HAnimJointShape";
Transform99.children = new MFNode();

Transform99.children[0] = Shape100;

HAnimSegment98.children = new MFNode();

HAnimSegment98.children[0] = Transform99;

let Shape101 = browser.currentScene.createNode("Shape");
let Appearance102 = browser.currentScene.createNode("Appearance");
let Material103 = browser.currentScene.createNode("Material");
Material103.emissiveColor = new SFColor(new float[1,1,1]);
Appearance102.material = Material103;

Shape101.appearance = Appearance102;

let IndexedLineSet104 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet104.DEF = "MTP2toPIP2";
IndexedLineSet104.coordIndex = new MFInt32(new int[0,1]);
let Coordinate105 = browser.currentScene.createNode("Coordinate");
Coordinate105.point = new MFVec3f(new float[-0.05,-0.9,0,-0.05,-1.05,0]);
IndexedLineSet104.coord = Coordinate105;

Shape101.geometry = IndexedLineSet104;

HAnimSegment98.children[1] = Shape101;

HAnimJoint97.children = new MFNode();

HAnimJoint97.children[0] = HAnimSegment98;

let HAnimJoint106 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint106.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint106.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint106.center = new SFVec3f(new float[-0.05,-1.05,0]);
let HAnimSegment107 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment107.name = "r_tarsal_middle_phalanx_2";
HAnimSegment107.DEF = "hanim_r_tarsal_middle_phalanx_2";
let Transform108 = browser.currentScene.createNode("Transform");
Transform108.translation = new SFVec3f(new float[-0.05,-1.05,0]);
let Shape109 = browser.currentScene.createNode("Shape");
Shape109.USE = "HAnimJointShape";
Transform108.children = new MFNode();

Transform108.children[0] = Shape109;

HAnimSegment107.children = new MFNode();

HAnimSegment107.children[0] = Transform108;

let Shape110 = browser.currentScene.createNode("Shape");
let Appearance111 = browser.currentScene.createNode("Appearance");
let Material112 = browser.currentScene.createNode("Material");
Material112.emissiveColor = new SFColor(new float[1,1,1]);
Appearance111.material = Material112;

Shape110.appearance = Appearance111;

let IndexedLineSet113 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet113.DEF = "PIP2toDIP2";
IndexedLineSet113.coordIndex = new MFInt32(new int[0,1]);
let Coordinate114 = browser.currentScene.createNode("Coordinate");
Coordinate114.point = new MFVec3f(new float[-0.05,-1.05,0,-0.05,-1.12,0]);
IndexedLineSet113.coord = Coordinate114;

Shape110.geometry = IndexedLineSet113;

HAnimSegment107.children[1] = Shape110;

HAnimJoint106.children = new MFNode();

HAnimJoint106.children[0] = HAnimSegment107;

let HAnimJoint115 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint115.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint115.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint115.center = new SFVec3f(new float[-0.05,-1.12,0]);
let HAnimSegment116 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment116.name = "r_tarsal_distal_phalanx_2";
HAnimSegment116.DEF = "hanim_r_tarsal_distal_phalanx_2";
let Transform117 = browser.currentScene.createNode("Transform");
Transform117.translation = new SFVec3f(new float[-0.05,-1.12,0]);
let Shape118 = browser.currentScene.createNode("Shape");
Shape118.USE = "HAnimJointShape";
Transform117.children = new MFNode();

Transform117.children[0] = Shape118;

HAnimSegment116.children = new MFNode();

HAnimSegment116.children[0] = Transform117;

let Shape119 = browser.currentScene.createNode("Shape");
let Appearance120 = browser.currentScene.createNode("Appearance");
let Material121 = browser.currentScene.createNode("Material");
Material121.emissiveColor = new SFColor(new float[1,1,1]);
Appearance120.material = Material121;

Shape119.appearance = Appearance120;

let IndexedLineSet122 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet122.DEF = "tiptoe_r_tarsal_distal_interphalangeal_2";
IndexedLineSet122.coordIndex = new MFInt32(new int[0,1]);
let Coordinate123 = browser.currentScene.createNode("Coordinate");
Coordinate123.point = new MFVec3f(new float[-0.05,-1.12,0,-0.05,-1.16,0]);
IndexedLineSet122.coord = Coordinate123;

Shape119.geometry = IndexedLineSet122;

HAnimSegment116.children[1] = Shape119;

HAnimJoint115.children = new MFNode();

HAnimJoint115.children[0] = HAnimSegment116;

HAnimJoint106.children[1] = HAnimJoint115;

HAnimJoint97.children[1] = HAnimJoint106;

HAnimJoint88.children[1] = HAnimJoint97;

HAnimJoint79.children[1] = HAnimJoint88;

HAnimJoint24.children[2] = HAnimJoint79;

//CN3
let HAnimJoint124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint124.name = "r_cuneonavicular_3";
HAnimJoint124.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint124.center = new SFVec3f(new float[-0.1,-0.4,0]);
let HAnimSegment125 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment125.name = "r_cuneiform_3";
HAnimSegment125.DEF = "hanim_r_cuneiform_3";
let Transform126 = browser.currentScene.createNode("Transform");
Transform126.translation = new SFVec3f(new float[-0.1,-0.4,0]);
let Shape127 = browser.currentScene.createNode("Shape");
Shape127.USE = "HAnimJointShape";
Transform126.children = new MFNode();

Transform126.children[0] = Shape127;

HAnimSegment125.children = new MFNode();

HAnimSegment125.children[0] = Transform126;

let Shape128 = browser.currentScene.createNode("Shape");
let Appearance129 = browser.currentScene.createNode("Appearance");
let Material130 = browser.currentScene.createNode("Material");
Material130.emissiveColor = new SFColor(new float[1,1,1]);
Appearance129.material = Material130;

Shape128.appearance = Appearance129;

let IndexedLineSet131 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet131.DEF = "CN3toTMT3";
IndexedLineSet131.coordIndex = new MFInt32(new int[0,1]);
let Coordinate132 = browser.currentScene.createNode("Coordinate");
Coordinate132.point = new MFVec3f(new float[-0.1,-0.4,0,-0.15,-0.6,0]);
IndexedLineSet131.coord = Coordinate132;

Shape128.geometry = IndexedLineSet131;

HAnimSegment125.children[1] = Shape128;

HAnimJoint124.children = new MFNode();

HAnimJoint124.children[0] = HAnimSegment125;

let HAnimJoint133 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint133.name = "r_tarsometatarsal_3";
HAnimJoint133.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint133.center = new SFVec3f(new float[-0.15,-0.6,0]);
let HAnimSegment134 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment134.name = "r_metatarsal_3";
HAnimSegment134.DEF = "hanim_r_metatarsal_3";
let Transform135 = browser.currentScene.createNode("Transform");
Transform135.translation = new SFVec3f(new float[-0.15,-0.6,0]);
let Shape136 = browser.currentScene.createNode("Shape");
Shape136.USE = "HAnimJointShape";
Transform135.children = new MFNode();

Transform135.children[0] = Shape136;

HAnimSegment134.children = new MFNode();

HAnimSegment134.children[0] = Transform135;

let Shape137 = browser.currentScene.createNode("Shape");
let Appearance138 = browser.currentScene.createNode("Appearance");
let Material139 = browser.currentScene.createNode("Material");
Material139.emissiveColor = new SFColor(new float[1,1,1]);
Appearance138.material = Material139;

Shape137.appearance = Appearance138;

let IndexedLineSet140 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet140.DEF = "TMT3toMTP3";
IndexedLineSet140.coordIndex = new MFInt32(new int[0,1]);
let Coordinate141 = browser.currentScene.createNode("Coordinate");
Coordinate141.point = new MFVec3f(new float[-0.15,-0.6,0,-0.15,-0.9,0]);
IndexedLineSet140.coord = Coordinate141;

Shape137.geometry = IndexedLineSet140;

HAnimSegment134.children[1] = Shape137;

HAnimJoint133.children = new MFNode();

HAnimJoint133.children[0] = HAnimSegment134;

let HAnimJoint142 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint142.name = "r_metatarsophalangeal_3";
HAnimJoint142.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint142.center = new SFVec3f(new float[-0.15,-0.9,0]);
let HAnimSegment143 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment143.name = "r_tarsal_proximal_phalanx_3";
HAnimSegment143.DEF = "hanim_r_tarsal_proximal_phalanx_3";
let Transform144 = browser.currentScene.createNode("Transform");
Transform144.translation = new SFVec3f(new float[-0.15,-0.9,0]);
let Shape145 = browser.currentScene.createNode("Shape");
Shape145.USE = "HAnimJointShape";
Transform144.children = new MFNode();

Transform144.children[0] = Shape145;

HAnimSegment143.children = new MFNode();

HAnimSegment143.children[0] = Transform144;

let Shape146 = browser.currentScene.createNode("Shape");
let Appearance147 = browser.currentScene.createNode("Appearance");
let Material148 = browser.currentScene.createNode("Material");
Material148.emissiveColor = new SFColor(new float[1,1,1]);
Appearance147.material = Material148;

Shape146.appearance = Appearance147;

let IndexedLineSet149 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet149.DEF = "MTP3toPIP3";
IndexedLineSet149.coordIndex = new MFInt32(new int[0,1]);
let Coordinate150 = browser.currentScene.createNode("Coordinate");
Coordinate150.point = new MFVec3f(new float[-0.15,-0.9,0,-0.15,-1.05,0]);
IndexedLineSet149.coord = Coordinate150;

Shape146.geometry = IndexedLineSet149;

HAnimSegment143.children[1] = Shape146;

HAnimJoint142.children = new MFNode();

HAnimJoint142.children[0] = HAnimSegment143;

let HAnimJoint151 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint151.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint151.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint151.center = new SFVec3f(new float[-0.15,-1.05,0]);
let HAnimSegment152 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment152.name = "r_tarsal_middle_phalanx_3";
HAnimSegment152.DEF = "hanim_r_tarsal_middle_phalanx_3";
let Transform153 = browser.currentScene.createNode("Transform");
Transform153.translation = new SFVec3f(new float[-0.15,-1.05,0]);
let Shape154 = browser.currentScene.createNode("Shape");
Shape154.USE = "HAnimJointShape";
Transform153.children = new MFNode();

Transform153.children[0] = Shape154;

HAnimSegment152.children = new MFNode();

HAnimSegment152.children[0] = Transform153;

let Shape155 = browser.currentScene.createNode("Shape");
let Appearance156 = browser.currentScene.createNode("Appearance");
let Material157 = browser.currentScene.createNode("Material");
Material157.emissiveColor = new SFColor(new float[1,1,1]);
Appearance156.material = Material157;

Shape155.appearance = Appearance156;

let IndexedLineSet158 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet158.DEF = "PIP3toDIP3";
IndexedLineSet158.coordIndex = new MFInt32(new int[0,1]);
let Coordinate159 = browser.currentScene.createNode("Coordinate");
Coordinate159.point = new MFVec3f(new float[-0.15,-1.05,0,-0.15,-1.13,0]);
IndexedLineSet158.coord = Coordinate159;

Shape155.geometry = IndexedLineSet158;

HAnimSegment152.children[1] = Shape155;

HAnimJoint151.children = new MFNode();

HAnimJoint151.children[0] = HAnimSegment152;

let HAnimJoint160 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint160.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint160.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint160.center = new SFVec3f(new float[-0.15,-1.13,0]);
let HAnimSegment161 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment161.name = "r_tarsal_distal_phalanx_3";
HAnimSegment161.DEF = "hanim_r_tarsal_distal_phalanx_3";
let Transform162 = browser.currentScene.createNode("Transform");
Transform162.translation = new SFVec3f(new float[-0.15,-1.13,0]);
let Shape163 = browser.currentScene.createNode("Shape");
Shape163.USE = "HAnimJointShape";
Transform162.children = new MFNode();

Transform162.children[0] = Shape163;

HAnimSegment161.children = new MFNode();

HAnimSegment161.children[0] = Transform162;

let Shape164 = browser.currentScene.createNode("Shape");
let Appearance165 = browser.currentScene.createNode("Appearance");
let Material166 = browser.currentScene.createNode("Material");
Material166.emissiveColor = new SFColor(new float[1,1,1]);
Appearance165.material = Material166;

Shape164.appearance = Appearance165;

let IndexedLineSet167 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet167.DEF = "tiptoe_r_tarsal_distal_interphalangeal_3";
IndexedLineSet167.coordIndex = new MFInt32(new int[0,1]);
let Coordinate168 = browser.currentScene.createNode("Coordinate");
Coordinate168.point = new MFVec3f(new float[-0.15,-1.13,0,-0.15,-1.16,0]);
IndexedLineSet167.coord = Coordinate168;

Shape164.geometry = IndexedLineSet167;

HAnimSegment161.children[1] = Shape164;

HAnimJoint160.children = new MFNode();

HAnimJoint160.children[0] = HAnimSegment161;

HAnimJoint151.children[1] = HAnimJoint160;

HAnimJoint142.children[1] = HAnimJoint151;

HAnimJoint133.children[1] = HAnimJoint142;

HAnimJoint124.children[1] = HAnimJoint133;

HAnimJoint24.children[3] = HAnimJoint124;

HAnimJoint7.children[1] = HAnimJoint24;

//CC
let HAnimJoint169 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint169.name = "r_calcaneocuboid";
HAnimJoint169.DEF = "hanim_r_calcaneocuboid";
HAnimJoint169.center = new SFVec3f(new float[-0.2,0.3,0]);
let HAnimSegment170 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment170.name = "r_calcaneus";
HAnimSegment170.DEF = "hanim_r_calcaneus";
let Transform171 = browser.currentScene.createNode("Transform");
Transform171.translation = new SFVec3f(new float[-0.2,0.3,0]);
let Shape172 = browser.currentScene.createNode("Shape");
Shape172.USE = "HAnimJointShape";
Transform171.children = new MFNode();

Transform171.children[0] = Shape172;

HAnimSegment170.children = new MFNode();

HAnimSegment170.children[0] = Transform171;

let Shape173 = browser.currentScene.createNode("Shape");
let Appearance174 = browser.currentScene.createNode("Appearance");
let Material175 = browser.currentScene.createNode("Material");
Material175.emissiveColor = new SFColor(new float[1,1,1]);
Appearance174.material = Material175;

Shape173.appearance = Appearance174;

let IndexedLineSet176 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet176.DEF = "CCtoTT";
IndexedLineSet176.coordIndex = new MFInt32(new int[0,1]);
let Coordinate177 = browser.currentScene.createNode("Coordinate");
Coordinate177.point = new MFVec3f(new float[-0.2,0.3,0,-0.21,-0.3,0]);
IndexedLineSet176.coord = Coordinate177;

Shape173.geometry = IndexedLineSet176;

HAnimSegment170.children[1] = Shape173;

HAnimJoint169.children = new MFNode();

HAnimJoint169.children[0] = HAnimSegment170;

//TT
let HAnimJoint178 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint178.name = "r_transversetarsal";
HAnimJoint178.DEF = "hanim_r_transversetarsal";
HAnimJoint178.center = new SFVec3f(new float[-0.21,-0.3,0]);
let HAnimSegment179 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment179.name = "r_cuboid";
HAnimSegment179.DEF = "hanim_r_cuboid";
let Transform180 = browser.currentScene.createNode("Transform");
Transform180.translation = new SFVec3f(new float[-0.21,-0.3,0]);
let Shape181 = browser.currentScene.createNode("Shape");
Shape181.USE = "HAnimJointShape";
Transform180.children = new MFNode();

Transform180.children[0] = Shape181;

HAnimSegment179.children = new MFNode();

HAnimSegment179.children[0] = Transform180;

let Shape182 = browser.currentScene.createNode("Shape");
let Appearance183 = browser.currentScene.createNode("Appearance");
let Material184 = browser.currentScene.createNode("Material");
Material184.emissiveColor = new SFColor(new float[1,1,1]);
Appearance183.material = Material184;

Shape182.appearance = Appearance183;

let IndexedLineSet185 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet185.DEF = "TTtoTMT4";
IndexedLineSet185.coordIndex = new MFInt32(new int[0,1]);
let Coordinate186 = browser.currentScene.createNode("Coordinate");
Coordinate186.point = new MFVec3f(new float[-0.21,-0.3,0,-0.25,-0.58,0]);
IndexedLineSet185.coord = Coordinate186;

Shape182.geometry = IndexedLineSet185;

HAnimSegment179.children[1] = Shape182;

let Shape187 = browser.currentScene.createNode("Shape");
let Appearance188 = browser.currentScene.createNode("Appearance");
let Material189 = browser.currentScene.createNode("Material");
Material189.emissiveColor = new SFColor(new float[1,1,1]);
Appearance188.material = Material189;

Shape187.appearance = Appearance188;

let IndexedLineSet190 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet190.DEF = "TTtoTMT5";
IndexedLineSet190.coordIndex = new MFInt32(new int[0,1]);
let Coordinate191 = browser.currentScene.createNode("Coordinate");
Coordinate191.point = new MFVec3f(new float[-0.21,-0.3,0,-0.33,-0.52,0]);
IndexedLineSet190.coord = Coordinate191;

Shape187.geometry = IndexedLineSet190;

HAnimSegment179.children[2] = Shape187;

HAnimJoint178.children = new MFNode();

HAnimJoint178.children[0] = HAnimSegment179;

//TMT4
let HAnimJoint192 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint192.name = "r_tarsometatarsal_4";
HAnimJoint192.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint192.center = new SFVec3f(new float[-0.25,-0.58,0]);
let HAnimSegment193 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment193.name = "r_metatarsal_4";
HAnimSegment193.DEF = "hanim_r_metatarsal_4";
let Transform194 = browser.currentScene.createNode("Transform");
Transform194.translation = new SFVec3f(new float[-0.25,-0.58,0]);
let Shape195 = browser.currentScene.createNode("Shape");
Shape195.USE = "HAnimJointShape";
Transform194.children = new MFNode();

Transform194.children[0] = Shape195;

HAnimSegment193.children = new MFNode();

HAnimSegment193.children[0] = Transform194;

let Shape196 = browser.currentScene.createNode("Shape");
let Appearance197 = browser.currentScene.createNode("Appearance");
let Material198 = browser.currentScene.createNode("Material");
Material198.emissiveColor = new SFColor(new float[1,1,1]);
Appearance197.material = Material198;

Shape196.appearance = Appearance197;

let IndexedLineSet199 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet199.DEF = "TMT4toMTP4";
IndexedLineSet199.coordIndex = new MFInt32(new int[0,1]);
let Coordinate200 = browser.currentScene.createNode("Coordinate");
Coordinate200.point = new MFVec3f(new float[-0.25,-0.58,0,-0.25,-0.87,0]);
IndexedLineSet199.coord = Coordinate200;

Shape196.geometry = IndexedLineSet199;

HAnimSegment193.children[1] = Shape196;

HAnimJoint192.children = new MFNode();

HAnimJoint192.children[0] = HAnimSegment193;

let HAnimJoint201 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint201.name = "r_metatarsophalangeal_4";
HAnimJoint201.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint201.center = new SFVec3f(new float[-0.25,-0.87,0]);
let HAnimSegment202 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment202.name = "r_tarsal_proximal_phalanx_4";
HAnimSegment202.DEF = "hanim_r_tarsal_proximal_phalanx_4";
let Transform203 = browser.currentScene.createNode("Transform");
Transform203.translation = new SFVec3f(new float[-0.25,-0.87,0]);
let Shape204 = browser.currentScene.createNode("Shape");
Shape204.USE = "HAnimJointShape";
Transform203.children = new MFNode();

Transform203.children[0] = Shape204;

HAnimSegment202.children = new MFNode();

HAnimSegment202.children[0] = Transform203;

let Shape205 = browser.currentScene.createNode("Shape");
let Appearance206 = browser.currentScene.createNode("Appearance");
let Material207 = browser.currentScene.createNode("Material");
Material207.emissiveColor = new SFColor(new float[1,1,1]);
Appearance206.material = Material207;

Shape205.appearance = Appearance206;

let IndexedLineSet208 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet208.DEF = "MTP4toPIP4";
IndexedLineSet208.coordIndex = new MFInt32(new int[0,1]);
let Coordinate209 = browser.currentScene.createNode("Coordinate");
Coordinate209.point = new MFVec3f(new float[-0.25,-0.87,0,-0.25,-1,0]);
IndexedLineSet208.coord = Coordinate209;

Shape205.geometry = IndexedLineSet208;

HAnimSegment202.children[1] = Shape205;

HAnimJoint201.children = new MFNode();

HAnimJoint201.children[0] = HAnimSegment202;

let HAnimJoint210 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint210.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint210.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint210.center = new SFVec3f(new float[-0.25,-1,0]);
let HAnimSegment211 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment211.name = "r_tarsal_middle_phalanx_4";
HAnimSegment211.DEF = "hanim_r_tarsal_middle_phalanx_4";
let Transform212 = browser.currentScene.createNode("Transform");
Transform212.translation = new SFVec3f(new float[-0.25,-1,0]);
let Shape213 = browser.currentScene.createNode("Shape");
Shape213.USE = "HAnimJointShape";
Transform212.children = new MFNode();

Transform212.children[0] = Shape213;

HAnimSegment211.children = new MFNode();

HAnimSegment211.children[0] = Transform212;

let Shape214 = browser.currentScene.createNode("Shape");
let Appearance215 = browser.currentScene.createNode("Appearance");
let Material216 = browser.currentScene.createNode("Material");
Material216.emissiveColor = new SFColor(new float[1,1,1]);
Appearance215.material = Material216;

Shape214.appearance = Appearance215;

let IndexedLineSet217 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet217.DEF = "PIP4toDIP4";
IndexedLineSet217.coordIndex = new MFInt32(new int[0,1]);
let Coordinate218 = browser.currentScene.createNode("Coordinate");
Coordinate218.point = new MFVec3f(new float[-0.25,-1,0,-0.25,-1.1,0]);
IndexedLineSet217.coord = Coordinate218;

Shape214.geometry = IndexedLineSet217;

HAnimSegment211.children[1] = Shape214;

HAnimJoint210.children = new MFNode();

HAnimJoint210.children[0] = HAnimSegment211;

let HAnimJoint219 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint219.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint219.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint219.center = new SFVec3f(new float[-0.25,-1.1,0]);
let HAnimSegment220 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment220.name = "r_tarsal_distal_phalanx_4";
HAnimSegment220.DEF = "hanim_r_tarsal_distal_phalanx_4";
let Transform221 = browser.currentScene.createNode("Transform");
Transform221.translation = new SFVec3f(new float[-0.25,-1.1,0]);
let Shape222 = browser.currentScene.createNode("Shape");
Shape222.USE = "HAnimJointShape";
Transform221.children = new MFNode();

Transform221.children[0] = Shape222;

HAnimSegment220.children = new MFNode();

HAnimSegment220.children[0] = Transform221;

let Shape223 = browser.currentScene.createNode("Shape");
let Appearance224 = browser.currentScene.createNode("Appearance");
let Material225 = browser.currentScene.createNode("Material");
Material225.emissiveColor = new SFColor(new float[1,1,1]);
Appearance224.material = Material225;

Shape223.appearance = Appearance224;

let IndexedLineSet226 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet226.DEF = "tiptoe_r_tarsal_distal_interphalangeal_4";
IndexedLineSet226.coordIndex = new MFInt32(new int[0,1]);
let Coordinate227 = browser.currentScene.createNode("Coordinate");
Coordinate227.point = new MFVec3f(new float[-0.25,-1.1,0,-0.25,-1.15,0]);
IndexedLineSet226.coord = Coordinate227;

Shape223.geometry = IndexedLineSet226;

HAnimSegment220.children[1] = Shape223;

HAnimJoint219.children = new MFNode();

HAnimJoint219.children[0] = HAnimSegment220;

HAnimJoint210.children[1] = HAnimJoint219;

HAnimJoint201.children[1] = HAnimJoint210;

HAnimJoint192.children[1] = HAnimJoint201;

HAnimJoint178.children[1] = HAnimJoint192;

//TMT5
let HAnimJoint228 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint228.name = "r_tarsometatarsal_5";
HAnimJoint228.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint228.center = new SFVec3f(new float[-0.33,-0.52,0]);
let HAnimSegment229 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment229.name = "r_metatarsal_5";
HAnimSegment229.DEF = "hanim_r_metatarsal_5";
let Transform230 = browser.currentScene.createNode("Transform");
Transform230.translation = new SFVec3f(new float[-0.33,-0.52,0]);
let Shape231 = browser.currentScene.createNode("Shape");
Shape231.USE = "HAnimJointShape";
Transform230.children = new MFNode();

Transform230.children[0] = Shape231;

HAnimSegment229.children = new MFNode();

HAnimSegment229.children[0] = Transform230;

let Shape232 = browser.currentScene.createNode("Shape");
let Appearance233 = browser.currentScene.createNode("Appearance");
let Material234 = browser.currentScene.createNode("Material");
Material234.emissiveColor = new SFColor(new float[1,1,1]);
Appearance233.material = Material234;

Shape232.appearance = Appearance233;

let IndexedLineSet235 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet235.DEF = "TMT5toMTP5";
IndexedLineSet235.coordIndex = new MFInt32(new int[0,1]);
let Coordinate236 = browser.currentScene.createNode("Coordinate");
Coordinate236.point = new MFVec3f(new float[-0.33,-0.52,0,-0.34,-0.8,0]);
IndexedLineSet235.coord = Coordinate236;

Shape232.geometry = IndexedLineSet235;

HAnimSegment229.children[1] = Shape232;

HAnimJoint228.children = new MFNode();

HAnimJoint228.children[0] = HAnimSegment229;

let HAnimJoint237 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint237.name = "r_metatarsophalangeal_5";
HAnimJoint237.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint237.center = new SFVec3f(new float[-0.34,-0.8,0]);
let HAnimSegment238 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment238.name = "r_tarsal_proximal_phalanx_5";
HAnimSegment238.DEF = "hanim_r_tarsal_proximal_phalanx_5";
let Transform239 = browser.currentScene.createNode("Transform");
Transform239.translation = new SFVec3f(new float[-0.34,-0.8,0]);
let Shape240 = browser.currentScene.createNode("Shape");
Shape240.USE = "HAnimJointShape";
Transform239.children = new MFNode();

Transform239.children[0] = Shape240;

HAnimSegment238.children = new MFNode();

HAnimSegment238.children[0] = Transform239;

let Shape241 = browser.currentScene.createNode("Shape");
let Appearance242 = browser.currentScene.createNode("Appearance");
let Material243 = browser.currentScene.createNode("Material");
Material243.emissiveColor = new SFColor(new float[1,1,1]);
Appearance242.material = Material243;

Shape241.appearance = Appearance242;

let IndexedLineSet244 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet244.DEF = "MTP5toPIP5";
IndexedLineSet244.coordIndex = new MFInt32(new int[0,1]);
let Coordinate245 = browser.currentScene.createNode("Coordinate");
Coordinate245.point = new MFVec3f(new float[-0.34,-0.8,0,-0.34,-0.95,0]);
IndexedLineSet244.coord = Coordinate245;

Shape241.geometry = IndexedLineSet244;

HAnimSegment238.children[1] = Shape241;

HAnimJoint237.children = new MFNode();

HAnimJoint237.children[0] = HAnimSegment238;

let HAnimJoint246 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint246.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint246.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint246.center = new SFVec3f(new float[-0.34,-0.95,0]);
let HAnimSegment247 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment247.name = "r_tarsal_middle_phalanx_5";
HAnimSegment247.DEF = "hanim_r_tarsal_middle_phalanx_5";
let Transform248 = browser.currentScene.createNode("Transform");
Transform248.translation = new SFVec3f(new float[-0.34,-0.95,0]);
let Shape249 = browser.currentScene.createNode("Shape");
Shape249.USE = "HAnimJointShape";
Transform248.children = new MFNode();

Transform248.children[0] = Shape249;

HAnimSegment247.children = new MFNode();

HAnimSegment247.children[0] = Transform248;

let Shape250 = browser.currentScene.createNode("Shape");
let Appearance251 = browser.currentScene.createNode("Appearance");
let Material252 = browser.currentScene.createNode("Material");
Material252.emissiveColor = new SFColor(new float[1,1,1]);
Appearance251.material = Material252;

Shape250.appearance = Appearance251;

let IndexedLineSet253 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet253.DEF = "PIP5toDIP5";
IndexedLineSet253.coordIndex = new MFInt32(new int[0,1]);
let Coordinate254 = browser.currentScene.createNode("Coordinate");
Coordinate254.point = new MFVec3f(new float[-0.34,-0.95,0,-0.34,-1.05,0]);
IndexedLineSet253.coord = Coordinate254;

Shape250.geometry = IndexedLineSet253;

HAnimSegment247.children[1] = Shape250;

HAnimJoint246.children = new MFNode();

HAnimJoint246.children[0] = HAnimSegment247;

let HAnimJoint255 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint255.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint255.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint255.center = new SFVec3f(new float[-0.34,-1.05,0]);
let HAnimSegment256 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment256.name = "r_tarsal_distal_phalanx_5";
HAnimSegment256.DEF = "hanim_r_tarsal_distal_phalanx_5";
let Transform257 = browser.currentScene.createNode("Transform");
Transform257.translation = new SFVec3f(new float[-0.34,-1.05,0]);
let Shape258 = browser.currentScene.createNode("Shape");
Shape258.USE = "HAnimJointShape";
Transform257.children = new MFNode();

Transform257.children[0] = Shape258;

HAnimSegment256.children = new MFNode();

HAnimSegment256.children[0] = Transform257;

let Shape259 = browser.currentScene.createNode("Shape");
let Appearance260 = browser.currentScene.createNode("Appearance");
let Material261 = browser.currentScene.createNode("Material");
Material261.emissiveColor = new SFColor(new float[1,1,1]);
Appearance260.material = Material261;

Shape259.appearance = Appearance260;

let IndexedLineSet262 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet262.DEF = "tiptoe_r_tarsal_distal_interphalangeal_5";
IndexedLineSet262.coordIndex = new MFInt32(new int[0,1]);
let Coordinate263 = browser.currentScene.createNode("Coordinate");
Coordinate263.point = new MFVec3f(new float[-0.34,-1.05,0,-0.34,-1.08,0]);
IndexedLineSet262.coord = Coordinate263;

Shape259.geometry = IndexedLineSet262;

HAnimSegment256.children[1] = Shape259;

HAnimJoint255.children = new MFNode();

HAnimJoint255.children[0] = HAnimSegment256;

HAnimJoint246.children[1] = HAnimJoint255;

HAnimJoint237.children[1] = HAnimJoint246;

HAnimJoint228.children[1] = HAnimJoint237;

HAnimJoint178.children[2] = HAnimJoint228;

HAnimJoint169.children[1] = HAnimJoint178;

HAnimJoint7.children[2] = HAnimJoint169;

HAnimJoint6.children = new MFNode();

HAnimJoint6.children[0] = HAnimJoint7;

HAnimHumanoid3.joints = new MFNode();

HAnimHumanoid3.joints[0] = HAnimJoint6;

let HAnimJoint264 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint264.USE = "hanim_humanoid_root";
HAnimHumanoid3.joints[1] = HAnimJoint264;

let HAnimJoint265 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint265.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid3.joints[2] = HAnimJoint265;

let HAnimJoint266 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint266.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid3.joints[3] = HAnimJoint266;

let HAnimJoint267 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint267.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid3.joints[4] = HAnimJoint267;

let HAnimJoint268 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint268.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid3.joints[5] = HAnimJoint268;

let HAnimJoint269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint269.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid3.joints[6] = HAnimJoint269;

let HAnimJoint270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint270.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid3.joints[7] = HAnimJoint270;

let HAnimJoint271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint271.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid3.joints[8] = HAnimJoint271;

let HAnimJoint272 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint272.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid3.joints[9] = HAnimJoint272;

let HAnimJoint273 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint273.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid3.joints[10] = HAnimJoint273;

let HAnimJoint274 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint274.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid3.joints[11] = HAnimJoint274;

let HAnimJoint275 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint275.USE = "hanim_r_talocrural";
HAnimHumanoid3.joints[12] = HAnimJoint275;

let HAnimJoint276 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint276.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid3.joints[13] = HAnimJoint276;

let HAnimJoint277 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint277.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid3.joints[14] = HAnimJoint277;

let HAnimJoint278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint278.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid3.joints[15] = HAnimJoint278;

let HAnimJoint279 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint279.USE = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimHumanoid3.joints[16] = HAnimJoint279;

let HAnimJoint280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint280.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid3.joints[17] = HAnimJoint280;

let HAnimJoint281 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint281.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid3.joints[18] = HAnimJoint281;

let HAnimJoint282 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint282.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid3.joints[19] = HAnimJoint282;

let HAnimJoint283 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint283.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid3.joints[20] = HAnimJoint283;

let HAnimJoint284 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint284.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimHumanoid3.joints[21] = HAnimJoint284;

let HAnimJoint285 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint285.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid3.joints[22] = HAnimJoint285;

let HAnimJoint286 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint286.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid3.joints[23] = HAnimJoint286;

let HAnimJoint287 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint287.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid3.joints[24] = HAnimJoint287;

let HAnimJoint288 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint288.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid3.joints[25] = HAnimJoint288;

let HAnimJoint289 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint289.USE = "hanim_r_tarsometatarsal_5";
HAnimHumanoid3.joints[26] = HAnimJoint289;

let HAnimJoint290 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint290.USE = "hanim_r_transversetarsal";
HAnimHumanoid3.joints[27] = HAnimJoint290;

let HAnimSegment291 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment291.USE = "hanim_r_calcaneus";
HAnimHumanoid3.segments[28] = HAnimSegment291;

let HAnimSegment292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment292.USE = "hanim_r_cuboid";
HAnimHumanoid3.segments[29] = HAnimSegment292;

let HAnimSegment293 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment293.USE = "hanim_r_cuneiform_1";
HAnimHumanoid3.segments[30] = HAnimSegment293;

let HAnimSegment294 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment294.USE = "hanim_r_cuneiform_2";
HAnimHumanoid3.segments[31] = HAnimSegment294;

let HAnimSegment295 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment295.USE = "hanim_r_cuneiform_3";
HAnimHumanoid3.segments[32] = HAnimSegment295;

let HAnimSegment296 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment296.USE = "hanim_r_metatarsal_1";
HAnimHumanoid3.segments[33] = HAnimSegment296;

let HAnimSegment297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment297.USE = "hanim_r_metatarsal_2";
HAnimHumanoid3.segments[34] = HAnimSegment297;

let HAnimSegment298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment298.USE = "hanim_r_metatarsal_3";
HAnimHumanoid3.segments[35] = HAnimSegment298;

let HAnimSegment299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment299.USE = "hanim_r_metatarsal_4";
HAnimHumanoid3.segments[36] = HAnimSegment299;

let HAnimSegment300 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment300.USE = "hanim_r_metatarsal_5";
HAnimHumanoid3.segments[37] = HAnimSegment300;

let HAnimSegment301 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment301.USE = "hanim_r_navicular";
HAnimHumanoid3.segments[38] = HAnimSegment301;

let HAnimSegment302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment302.USE = "hanim_r_talus";
HAnimHumanoid3.segments[39] = HAnimSegment302;

let HAnimSegment303 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment303.USE = "hanim_r_tarsal_distal_phalanx_1";
HAnimHumanoid3.segments[40] = HAnimSegment303;

let HAnimSegment304 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment304.USE = "hanim_r_tarsal_distal_phalanx_2";
HAnimHumanoid3.segments[41] = HAnimSegment304;

let HAnimSegment305 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment305.USE = "hanim_r_tarsal_distal_phalanx_3";
HAnimHumanoid3.segments[42] = HAnimSegment305;

let HAnimSegment306 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment306.USE = "hanim_r_tarsal_distal_phalanx_4";
HAnimHumanoid3.segments[43] = HAnimSegment306;

let HAnimSegment307 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment307.USE = "hanim_r_tarsal_distal_phalanx_5";
HAnimHumanoid3.segments[44] = HAnimSegment307;

let HAnimSegment308 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment308.USE = "hanim_r_tarsal_middle_phalanx_2";
HAnimHumanoid3.segments[45] = HAnimSegment308;

let HAnimSegment309 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment309.USE = "hanim_r_tarsal_middle_phalanx_3";
HAnimHumanoid3.segments[46] = HAnimSegment309;

let HAnimSegment310 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment310.USE = "hanim_r_tarsal_middle_phalanx_4";
HAnimHumanoid3.segments[47] = HAnimSegment310;

let HAnimSegment311 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment311.USE = "hanim_r_tarsal_middle_phalanx_5";
HAnimHumanoid3.segments[48] = HAnimSegment311;

let HAnimSegment312 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment312.USE = "hanim_r_tarsal_proximal_phalanx_1";
HAnimHumanoid3.segments[49] = HAnimSegment312;

let HAnimSegment313 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment313.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid3.segments[50] = HAnimSegment313;

let HAnimSegment314 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment314.USE = "hanim_r_tarsal_proximal_phalanx_3";
HAnimHumanoid3.segments[51] = HAnimSegment314;

let HAnimSegment315 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment315.USE = "hanim_r_tarsal_proximal_phalanx_4";
HAnimHumanoid3.segments[52] = HAnimSegment315;

let HAnimSegment316 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment316.USE = "hanim_r_tarsal_proximal_phalanx_5";
HAnimHumanoid3.segments[53] = HAnimSegment316;

browser.currentScene.children[1] = HAnimHumanoid3;


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
meta3.content = "HAnimModelHandRight.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "description";
meta4.content = "Right hand using high-fidelity definitions for HAnim version 2.0";
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
meta8.name = "TODO";
meta8.content = "fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "Image";
meta9.content = "HAnimModelHandRightSegmentVisualizationError.png";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "error";
meta10.content = "not yet to scale, also relatively flat";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "warning";
meta11.content = "TODO will X3D HAnim component add a new level to support LOA-4 functionality?";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "info";
meta12.content = "TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "reference";
meta13.content = "https://www.web3d.org/working-groups/humanoid-animation-HAnim";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "reference";
meta14.content = "https://www.web3d.org/documents/specifications/19774/V2.0";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "reference";
meta15.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "reference";
meta16.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "reference";
meta17.content = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "reference";
meta18.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "subject";
meta19.content = "X3D HAnim humanoid animation";
head1.meta[17] = meta19;

let meta20 = browser.currentScene.createNode("meta");
meta20.name = "TODO";
meta20.content = "Integrate and confirm Segment/Joint names, Viewpoints.";
head1.meta[18] = meta20;

let meta21 = browser.currentScene.createNode("meta");
meta21.name = "identifier";
meta21.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d";
head1.meta[19] = meta21;

let meta22 = browser.currentScene.createNode("meta");
meta22.name = "generator";
meta22.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[20] = meta22;

let meta23 = browser.currentScene.createNode("meta");
meta23.name = "license";
meta23.content = "../license.html";
head1.meta[21] = meta23;

head = head1;

let WorldInfo25 = browser.currentScene.createNode("WorldInfo");
WorldInfo25.title = "HAnimModelHandRight.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo25;

let HAnimHumanoid26 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid26.name = "Hand_Right";
HAnimHumanoid26.DEF = "hanim_Hand_Right";
HAnimHumanoid26.loa = 4;
HAnimHumanoid26.version = "2.0";
//original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
let MetadataSet27 = browser.currentScene.createNode("MetadataSet");
MetadataSet27.name = "HAnimHumanoid.info";
MetadataSet27.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString28 = browser.currentScene.createNode("MetadataString");
MetadataString28.name = "authorName";
MetadataString28.value = new MFString(new java.lang.String["Kwan-Hee YOO, Don Brutzman and Joe Williams"]);
MetadataSet27.value = new MFNode();

MetadataSet27.value[0] = MetadataString28;

HAnimHumanoid26.metadata = MetadataSet27;

let HAnimJoint29 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint29.name = "humanoid_root";
HAnimJoint29.DEF = "hanim_humanoid_root";
HAnimJoint29.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint29.llimit = new MFFloat(new float[0,0,0]);
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model
let HAnimJoint30 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint30.name = "r_radiocarpal";
HAnimJoint30.DEF = "hanim_r_radiocarpal";
HAnimJoint30.description = "connection joint of hand to leg above";
HAnimJoint30.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint30.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment31 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment31.name = "r_carpal";
HAnimSegment31.DEF = "hanim_r_carpal";
let Transform32 = browser.currentScene.createNode("Transform");
let Shape33 = browser.currentScene.createNode("Shape");
Shape33.DEF = "HAnimJointShape";
let Sphere34 = browser.currentScene.createNode("Sphere");
Sphere34.radius = 0.025;
Shape33.geometry = Sphere34;

let Appearance35 = browser.currentScene.createNode("Appearance");
Appearance35.DEF = "HAnimJointAppearanceBlue";
let Material36 = browser.currentScene.createNode("Material");
Material36.diffuseColor = new SFColor(new float[0,0,1]);
Appearance35.material = Material36;

Shape33.appearance = Appearance35;

Transform32.children = new MFNode();

Transform32.children[0] = Shape33;

HAnimSegment31.children = new MFNode();

HAnimSegment31.children[0] = Transform32;

let Shape37 = browser.currentScene.createNode("Shape");
let Appearance38 = browser.currentScene.createNode("Appearance");
let Material39 = browser.currentScene.createNode("Material");
Material39.emissiveColor = new SFColor(new float[1,1,1]);
Appearance38.material = Material39;

Shape37.appearance = Appearance38;

let IndexedLineSet40 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet40.DEF = "RCToMC12";
IndexedLineSet40.coordIndex = new MFInt32(new int[0,1]);
let Coordinate41 = browser.currentScene.createNode("Coordinate");
Coordinate41.point = new MFVec3f(new float[0,0,0,-0.1,0.1,0]);
IndexedLineSet40.coord = Coordinate41;

Shape37.geometry = IndexedLineSet40;

HAnimSegment31.children[1] = Shape37;

let Shape42 = browser.currentScene.createNode("Shape");
let Appearance43 = browser.currentScene.createNode("Appearance");
let Material44 = browser.currentScene.createNode("Material");
Material44.emissiveColor = new SFColor(new float[1,1,1]);
Appearance43.material = Material44;

Shape42.appearance = Appearance43;

let IndexedLineSet45 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet45.DEF = "RCToMC3";
IndexedLineSet45.coordIndex = new MFInt32(new int[0,1]);
let Coordinate46 = browser.currentScene.createNode("Coordinate");
Coordinate46.point = new MFVec3f(new float[0,0,0,0,0.07,0]);
IndexedLineSet45.coord = Coordinate46;

Shape42.geometry = IndexedLineSet45;

HAnimSegment31.children[2] = Shape42;

let Shape47 = browser.currentScene.createNode("Shape");
let Appearance48 = browser.currentScene.createNode("Appearance");
let Material49 = browser.currentScene.createNode("Material");
Material49.emissiveColor = new SFColor(new float[1,1,1]);
Appearance48.material = Material49;

Shape47.appearance = Appearance48;

let IndexedLineSet50 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet50.DEF = "RCToMC45";
IndexedLineSet50.coordIndex = new MFInt32(new int[0,1]);
let Coordinate51 = browser.currentScene.createNode("Coordinate");
Coordinate51.point = new MFVec3f(new float[0,0,0,0.1,0.1,0]);
IndexedLineSet50.coord = Coordinate51;

Shape47.geometry = IndexedLineSet50;

HAnimSegment31.children[3] = Shape47;

HAnimJoint30.children = new MFNode();

HAnimJoint30.children[0] = HAnimSegment31;

//MC1
let HAnimJoint52 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint52.name = "r_midcarpal_1";
HAnimJoint52.DEF = "hanim_r_midcarpal_1";
HAnimJoint52.center = new SFVec3f(new float[-0.14,0.09,0]);
HAnimJoint52.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint52.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment53 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment53.name = "r_trapezium";
HAnimSegment53.DEF = "hanim_r_trapezium";
let Transform54 = browser.currentScene.createNode("Transform");
Transform54.translation = new SFVec3f(new float[-0.14,0.09,0]);
let Shape55 = browser.currentScene.createNode("Shape");
Shape55.DEF = "HAnimNewJointShape";
let Sphere56 = browser.currentScene.createNode("Sphere");
Sphere56.radius = 0.025;
Shape55.geometry = Sphere56;

let Appearance57 = browser.currentScene.createNode("Appearance");
Appearance57.DEF = "HAnimJointAppearanceRed";
let Material58 = browser.currentScene.createNode("Material");
Material58.diffuseColor = new SFColor(new float[1,0,0]);
Appearance57.material = Material58;

Shape55.appearance = Appearance57;

Transform54.children = new MFNode();

Transform54.children[0] = Shape55;

HAnimSegment53.children = new MFNode();

HAnimSegment53.children[0] = Transform54;

let Shape59 = browser.currentScene.createNode("Shape");
let Appearance60 = browser.currentScene.createNode("Appearance");
let Material61 = browser.currentScene.createNode("Material");
Material61.emissiveColor = new SFColor(new float[1,1,1]);
Appearance60.material = Material61;

Shape59.appearance = Appearance60;

let IndexedLineSet62 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet62.DEF = "MC12toCMC1";
IndexedLineSet62.coordIndex = new MFInt32(new int[0,1]);
let Coordinate63 = browser.currentScene.createNode("Coordinate");
Coordinate63.point = new MFVec3f(new float[-0.1,0.1,0,-0.2,0.15,0]);
IndexedLineSet62.coord = Coordinate63;

Shape59.geometry = IndexedLineSet62;

HAnimSegment53.children[1] = Shape59;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimSegment53;

//thumb finger
let HAnimJoint64 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint64.name = "r_carpometacarpal_1";
HAnimJoint64.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint64.center = new SFVec3f(new float[-0.2,0.15,0]);
HAnimJoint64.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint64.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment65 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment65.name = "r_metacarpal_1";
HAnimSegment65.DEF = "hanim_r_metacarpal_1";
let Transform66 = browser.currentScene.createNode("Transform");
Transform66.translation = new SFVec3f(new float[-0.2,0.15,0]);
let Shape67 = browser.currentScene.createNode("Shape");
Shape67.USE = "HAnimJointShape";
Transform66.children = new MFNode();

Transform66.children[0] = Shape67;

HAnimSegment65.children = new MFNode();

HAnimSegment65.children[0] = Transform66;

let Shape68 = browser.currentScene.createNode("Shape");
let Appearance69 = browser.currentScene.createNode("Appearance");
let Material70 = browser.currentScene.createNode("Material");
Material70.emissiveColor = new SFColor(new float[1,1,1]);
Appearance69.material = Material70;

Shape68.appearance = Appearance69;

let IndexedLineSet71 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet71.DEF = "CMC1toMCP1xxx";
IndexedLineSet71.coordIndex = new MFInt32(new int[0,1]);
let Coordinate72 = browser.currentScene.createNode("Coordinate");
Coordinate72.point = new MFVec3f(new float[-0.2,0.15,0,-0.3,0.3,0]);
IndexedLineSet71.coord = Coordinate72;

Shape68.geometry = IndexedLineSet71;

HAnimSegment65.children[1] = Shape68;

HAnimJoint64.children = new MFNode();

HAnimJoint64.children[0] = HAnimSegment65;

let HAnimJoint73 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint73.name = "r_metacarpophalangeal_1";
HAnimJoint73.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint73.center = new SFVec3f(new float[-0.3,0.3,0]);
HAnimJoint73.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint73.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment74 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment74.name = "r_carpal_proximal_phalanx_1";
HAnimSegment74.DEF = "hanim_r_carpal_proximal_phalanx_1";
let Transform75 = browser.currentScene.createNode("Transform");
Transform75.translation = new SFVec3f(new float[-0.3,0.3,0]);
let Shape76 = browser.currentScene.createNode("Shape");
Shape76.USE = "HAnimJointShape";
Transform75.children = new MFNode();

Transform75.children[0] = Shape76;

HAnimSegment74.children = new MFNode();

HAnimSegment74.children[0] = Transform75;

let Shape77 = browser.currentScene.createNode("Shape");
let Appearance78 = browser.currentScene.createNode("Appearance");
let Material79 = browser.currentScene.createNode("Material");
Material79.emissiveColor = new SFColor(new float[1,1,1]);
Appearance78.material = Material79;

Shape77.appearance = Appearance78;

let IndexedLineSet80 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet80.DEF = "MCP11toIP1";
IndexedLineSet80.coordIndex = new MFInt32(new int[0,1]);
let Coordinate81 = browser.currentScene.createNode("Coordinate");
Coordinate81.point = new MFVec3f(new float[-0.3,0.3,0,-0.35,0.4,0]);
IndexedLineSet80.coord = Coordinate81;

Shape77.geometry = IndexedLineSet80;

HAnimSegment74.children[1] = Shape77;

HAnimJoint73.children = new MFNode();

HAnimJoint73.children[0] = HAnimSegment74;

let HAnimJoint82 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint82.name = "r_carpal_interphalangeal_1";
HAnimJoint82.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint82.center = new SFVec3f(new float[-0.35,0.4,0]);
HAnimJoint82.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint82.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment83 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment83.name = "r_carpal_distal_phalanx_1";
HAnimSegment83.DEF = "hanim_r_carpal_distal_phalanx_1";
let Transform84 = browser.currentScene.createNode("Transform");
Transform84.translation = new SFVec3f(new float[-0.35,0.4,0]);
let Shape85 = browser.currentScene.createNode("Shape");
Shape85.USE = "HAnimJointShape";
Transform84.children = new MFNode();

Transform84.children[0] = Shape85;

HAnimSegment83.children = new MFNode();

HAnimSegment83.children[0] = Transform84;

let Shape86 = browser.currentScene.createNode("Shape");
let Appearance87 = browser.currentScene.createNode("Appearance");
let Material88 = browser.currentScene.createNode("Material");
Material88.emissiveColor = new SFColor(new float[1,1,1]);
Appearance87.material = Material88;

Shape86.appearance = Appearance87;

let IndexedLineSet89 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet89.DEF = "fingertip_r_carpal_interphalangeal_1";
IndexedLineSet89.coordIndex = new MFInt32(new int[0,1]);
let Coordinate90 = browser.currentScene.createNode("Coordinate");
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
let HAnimJoint91 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint91.name = "r_midcarpal_2";
HAnimJoint91.DEF = "hanim_r_midcarpal_2";
HAnimJoint91.center = new SFVec3f(new float[-0.07,0.07,0]);
HAnimJoint91.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint91.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment92 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment92.name = "r_trapezoid";
HAnimSegment92.DEF = "hanim_r_trapezoid";
let Transform93 = browser.currentScene.createNode("Transform");
Transform93.translation = new SFVec3f(new float[-0.07,0.07,0]);
let Shape94 = browser.currentScene.createNode("Shape");
Shape94.USE = "HAnimNewJointShape";
Transform93.children = new MFNode();

Transform93.children[0] = Shape94;

HAnimSegment92.children = new MFNode();

HAnimSegment92.children[0] = Transform93;

let Shape95 = browser.currentScene.createNode("Shape");
let Appearance96 = browser.currentScene.createNode("Appearance");
let Material97 = browser.currentScene.createNode("Material");
Material97.emissiveColor = new SFColor(new float[1,1,1]);
Appearance96.material = Material97;

Shape95.appearance = Appearance96;

let IndexedLineSet98 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet98.DEF = "MC12toCMC2";
IndexedLineSet98.coordIndex = new MFInt32(new int[0,1]);
let Coordinate99 = browser.currentScene.createNode("Coordinate");
Coordinate99.point = new MFVec3f(new float[-0.1,0.1,0,-0.1,0.2,0]);
IndexedLineSet98.coord = Coordinate99;

Shape95.geometry = IndexedLineSet98;

HAnimSegment92.children[1] = Shape95;

HAnimJoint91.children = new MFNode();

HAnimJoint91.children[0] = HAnimSegment92;

//index finger
let HAnimJoint100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint100.name = "r_carpometacarpal_2";
HAnimJoint100.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint100.center = new SFVec3f(new float[-0.1,0.2,0]);
HAnimJoint100.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint100.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment101 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment101.name = "r_metacarpal_2";
HAnimSegment101.DEF = "hanim_r_metacarpal_2";
let Transform102 = browser.currentScene.createNode("Transform");
Transform102.translation = new SFVec3f(new float[-0.1,0.2,0]);
let Shape103 = browser.currentScene.createNode("Shape");
Shape103.USE = "HAnimJointShape";
Transform102.children = new MFNode();

Transform102.children[0] = Shape103;

HAnimSegment101.children = new MFNode();

HAnimSegment101.children[0] = Transform102;

let Shape104 = browser.currentScene.createNode("Shape");
let Appearance105 = browser.currentScene.createNode("Appearance");
let Material106 = browser.currentScene.createNode("Material");
Material106.emissiveColor = new SFColor(new float[1,1,1]);
Appearance105.material = Material106;

Shape104.appearance = Appearance105;

let IndexedLineSet107 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet107.DEF = "CMC2toMCP2";
IndexedLineSet107.coordIndex = new MFInt32(new int[0,1]);
let Coordinate108 = browser.currentScene.createNode("Coordinate");
Coordinate108.point = new MFVec3f(new float[-0.1,0.2,0,-0.15,0.5,0]);
IndexedLineSet107.coord = Coordinate108;

Shape104.geometry = IndexedLineSet107;

HAnimSegment101.children[1] = Shape104;

HAnimJoint100.children = new MFNode();

HAnimJoint100.children[0] = HAnimSegment101;

let HAnimJoint109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint109.name = "r_metacarpophalangeal_2";
HAnimJoint109.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint109.center = new SFVec3f(new float[-0.15,0.5,0]);
HAnimJoint109.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint109.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment110 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment110.name = "r_carpal_proximal_phalanx_2";
HAnimSegment110.DEF = "hanim_r_carpal_proximal_phalanx_2";
let Transform111 = browser.currentScene.createNode("Transform");
Transform111.translation = new SFVec3f(new float[-0.15,0.5,0]);
let Shape112 = browser.currentScene.createNode("Shape");
Shape112.USE = "HAnimJointShape";
Transform111.children = new MFNode();

Transform111.children[0] = Shape112;

HAnimSegment110.children = new MFNode();

HAnimSegment110.children[0] = Transform111;

let Shape113 = browser.currentScene.createNode("Shape");
let Appearance114 = browser.currentScene.createNode("Appearance");
let Material115 = browser.currentScene.createNode("Material");
Material115.emissiveColor = new SFColor(new float[1,1,1]);
Appearance114.material = Material115;

Shape113.appearance = Appearance114;

let IndexedLineSet116 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet116.DEF = "MCP2toPIP2";
IndexedLineSet116.coordIndex = new MFInt32(new int[0,1]);
let Coordinate117 = browser.currentScene.createNode("Coordinate");
Coordinate117.point = new MFVec3f(new float[-0.15,0.5,0,-0.2,0.7,0]);
IndexedLineSet116.coord = Coordinate117;

Shape113.geometry = IndexedLineSet116;

HAnimSegment110.children[1] = Shape113;

HAnimJoint109.children = new MFNode();

HAnimJoint109.children[0] = HAnimSegment110;

let HAnimJoint118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint118.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint118.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint118.center = new SFVec3f(new float[-0.2,0.7,0]);
HAnimJoint118.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint118.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment119 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment119.name = "r_carpal_middle_phalanx_2";
HAnimSegment119.DEF = "hanim_r_carpal_middle_phalanx_2";
let Transform120 = browser.currentScene.createNode("Transform");
Transform120.translation = new SFVec3f(new float[-0.2,0.7,0]);
let Shape121 = browser.currentScene.createNode("Shape");
Shape121.USE = "HAnimJointShape";
Transform120.children = new MFNode();

Transform120.children[0] = Shape121;

HAnimSegment119.children = new MFNode();

HAnimSegment119.children[0] = Transform120;

let Shape122 = browser.currentScene.createNode("Shape");
let Appearance123 = browser.currentScene.createNode("Appearance");
let Material124 = browser.currentScene.createNode("Material");
Material124.emissiveColor = new SFColor(new float[1,1,1]);
Appearance123.material = Material124;

Shape122.appearance = Appearance123;

let IndexedLineSet125 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet125.DEF = "PIP2toDIP2";
IndexedLineSet125.coordIndex = new MFInt32(new int[0,1]);
let Coordinate126 = browser.currentScene.createNode("Coordinate");
Coordinate126.point = new MFVec3f(new float[-0.2,0.7,0,-0.24,0.87,0]);
IndexedLineSet125.coord = Coordinate126;

Shape122.geometry = IndexedLineSet125;

HAnimSegment119.children[1] = Shape122;

HAnimJoint118.children = new MFNode();

HAnimJoint118.children[0] = HAnimSegment119;

let HAnimJoint127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint127.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint127.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint127.center = new SFVec3f(new float[-0.24,0.87,0]);
HAnimJoint127.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint127.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment128 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment128.name = "r_carpal_distal_phalanx_2";
HAnimSegment128.DEF = "hanim_r_carpal_distal_phalanx_2";
let Transform129 = browser.currentScene.createNode("Transform");
Transform129.translation = new SFVec3f(new float[-0.24,0.87,0]);
let Shape130 = browser.currentScene.createNode("Shape");
Shape130.USE = "HAnimJointShape";
Transform129.children = new MFNode();

Transform129.children[0] = Shape130;

HAnimSegment128.children = new MFNode();

HAnimSegment128.children[0] = Transform129;

let Shape131 = browser.currentScene.createNode("Shape");
let Appearance132 = browser.currentScene.createNode("Appearance");
let Material133 = browser.currentScene.createNode("Material");
Material133.emissiveColor = new SFColor(new float[1,1,1]);
Appearance132.material = Material133;

Shape131.appearance = Appearance132;

let IndexedLineSet134 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet134.DEF = "fingertip_r_carpal_distal_interphalangeal_2";
IndexedLineSet134.coordIndex = new MFInt32(new int[0,1]);
let Coordinate135 = browser.currentScene.createNode("Coordinate");
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
let HAnimJoint136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint136.name = "r_midcarpal_3";
HAnimJoint136.DEF = "hanim_r_midcarpal_3";
HAnimJoint136.center = new SFVec3f(new float[0,0.07,0]);
HAnimJoint136.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint136.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment137 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment137.name = "r_capitate";
HAnimSegment137.DEF = "hanim_r_capitate";
let Transform138 = browser.currentScene.createNode("Transform");
Transform138.translation = new SFVec3f(new float[0,0.07,0]);
let Shape139 = browser.currentScene.createNode("Shape");
Shape139.USE = "HAnimNewJointShape";
Transform138.children = new MFNode();

Transform138.children[0] = Shape139;

HAnimSegment137.children = new MFNode();

HAnimSegment137.children[0] = Transform138;

let Shape140 = browser.currentScene.createNode("Shape");
let Appearance141 = browser.currentScene.createNode("Appearance");
let Material142 = browser.currentScene.createNode("Material");
Material142.emissiveColor = new SFColor(new float[1,1,1]);
Appearance141.material = Material142;

Shape140.appearance = Appearance141;

let IndexedLineSet143 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet143.DEF = "MC3toCMC3";
IndexedLineSet143.coordIndex = new MFInt32(new int[0,1]);
let Coordinate144 = browser.currentScene.createNode("Coordinate");
Coordinate144.point = new MFVec3f(new float[0,0.07,0,0,0.2,0]);
IndexedLineSet143.coord = Coordinate144;

Shape140.geometry = IndexedLineSet143;

HAnimSegment137.children[1] = Shape140;

HAnimJoint136.children = new MFNode();

HAnimJoint136.children[0] = HAnimSegment137;

//Middle fingle
let HAnimJoint145 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint145.name = "r_carpometacarpal_3";
HAnimJoint145.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint145.center = new SFVec3f(new float[0,0.2,0]);
HAnimJoint145.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint145.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment146 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment146.name = "r_metacarpal_3";
HAnimSegment146.DEF = "hanim_r_metacarpal_3";
let Transform147 = browser.currentScene.createNode("Transform");
Transform147.translation = new SFVec3f(new float[0,0.2,0]);
let Shape148 = browser.currentScene.createNode("Shape");
Shape148.USE = "HAnimJointShape";
Transform147.children = new MFNode();

Transform147.children[0] = Shape148;

HAnimSegment146.children = new MFNode();

HAnimSegment146.children[0] = Transform147;

let Shape149 = browser.currentScene.createNode("Shape");
let Appearance150 = browser.currentScene.createNode("Appearance");
let Material151 = browser.currentScene.createNode("Material");
Material151.emissiveColor = new SFColor(new float[1,1,1]);
Appearance150.material = Material151;

Shape149.appearance = Appearance150;

let IndexedLineSet152 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet152.DEF = "CMC3toMCP3";
IndexedLineSet152.coordIndex = new MFInt32(new int[0,1]);
let Coordinate153 = browser.currentScene.createNode("Coordinate");
Coordinate153.point = new MFVec3f(new float[0,0.2,0,-0.03,0.5,0]);
IndexedLineSet152.coord = Coordinate153;

Shape149.geometry = IndexedLineSet152;

HAnimSegment146.children[1] = Shape149;

HAnimJoint145.children = new MFNode();

HAnimJoint145.children[0] = HAnimSegment146;

let HAnimJoint154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint154.name = "r_metacarpophalangeal_3";
HAnimJoint154.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint154.center = new SFVec3f(new float[-0.03,0.5,0]);
HAnimJoint154.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint154.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment155 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment155.name = "r_carpal_proximal_phalanx_3";
HAnimSegment155.DEF = "hanim_r_carpal_proximal_phalanx_3";
let Transform156 = browser.currentScene.createNode("Transform");
Transform156.translation = new SFVec3f(new float[-0.03,0.5,0]);
let Shape157 = browser.currentScene.createNode("Shape");
Shape157.USE = "HAnimJointShape";
Transform156.children = new MFNode();

Transform156.children[0] = Shape157;

HAnimSegment155.children = new MFNode();

HAnimSegment155.children[0] = Transform156;

let Shape158 = browser.currentScene.createNode("Shape");
let Appearance159 = browser.currentScene.createNode("Appearance");
let Material160 = browser.currentScene.createNode("Material");
Material160.emissiveColor = new SFColor(new float[1,1,1]);
Appearance159.material = Material160;

Shape158.appearance = Appearance159;

let IndexedLineSet161 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet161.DEF = "MCP3toPIP3";
IndexedLineSet161.coordIndex = new MFInt32(new int[0,1]);
let Coordinate162 = browser.currentScene.createNode("Coordinate");
Coordinate162.point = new MFVec3f(new float[-0.03,0.5,0,-0.05,0.75,0]);
IndexedLineSet161.coord = Coordinate162;

Shape158.geometry = IndexedLineSet161;

HAnimSegment155.children[1] = Shape158;

HAnimJoint154.children = new MFNode();

HAnimJoint154.children[0] = HAnimSegment155;

let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint163.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint163.center = new SFVec3f(new float[-0.05,0.75,0]);
HAnimJoint163.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint163.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment164 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment164.name = "r_carpal_middle_phalanx_3";
HAnimSegment164.DEF = "hanim_r_carpal_middle_phalanx_3";
let Transform165 = browser.currentScene.createNode("Transform");
Transform165.translation = new SFVec3f(new float[-0.05,0.75,0]);
let Shape166 = browser.currentScene.createNode("Shape");
Shape166.USE = "HAnimJointShape";
Transform165.children = new MFNode();

Transform165.children[0] = Shape166;

HAnimSegment164.children = new MFNode();

HAnimSegment164.children[0] = Transform165;

let Shape167 = browser.currentScene.createNode("Shape");
let Appearance168 = browser.currentScene.createNode("Appearance");
let Material169 = browser.currentScene.createNode("Material");
Material169.emissiveColor = new SFColor(new float[1,1,1]);
Appearance168.material = Material169;

Shape167.appearance = Appearance168;

let IndexedLineSet170 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet170.DEF = "PIP3toDIP3";
IndexedLineSet170.coordIndex = new MFInt32(new int[0,1]);
let Coordinate171 = browser.currentScene.createNode("Coordinate");
Coordinate171.point = new MFVec3f(new float[-0.05,0.75,0,-0.08,0.96,0]);
IndexedLineSet170.coord = Coordinate171;

Shape167.geometry = IndexedLineSet170;

HAnimSegment164.children[1] = Shape167;

HAnimJoint163.children = new MFNode();

HAnimJoint163.children[0] = HAnimSegment164;

let HAnimJoint172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint172.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint172.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint172.center = new SFVec3f(new float[-0.08,0.96,0]);
HAnimJoint172.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint172.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment173 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment173.name = "r_carpal_distal_phalanx_3";
HAnimSegment173.DEF = "hanim_r_carpal_distal_phalanx_3";
let Transform174 = browser.currentScene.createNode("Transform");
Transform174.translation = new SFVec3f(new float[-0.08,0.96,0]);
let Shape175 = browser.currentScene.createNode("Shape");
Shape175.USE = "HAnimJointShape";
Transform174.children = new MFNode();

Transform174.children[0] = Shape175;

HAnimSegment173.children = new MFNode();

HAnimSegment173.children[0] = Transform174;

let Shape176 = browser.currentScene.createNode("Shape");
let Appearance177 = browser.currentScene.createNode("Appearance");
let Material178 = browser.currentScene.createNode("Material");
Material178.emissiveColor = new SFColor(new float[1,1,1]);
Appearance177.material = Material178;

Shape176.appearance = Appearance177;

let IndexedLineSet179 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet179.DEF = "fingertip_r_carpal_distal_interphalangeal_3";
IndexedLineSet179.coordIndex = new MFInt32(new int[0,1]);
let Coordinate180 = browser.currentScene.createNode("Coordinate");
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
let HAnimJoint181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint181.name = "r_midcarpal_4_5";
HAnimJoint181.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint181.center = new SFVec3f(new float[0.1,0.1,0]);
HAnimJoint181.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint181.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment182 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment182.name = "r_hamate";
HAnimSegment182.DEF = "hanim_r_hamate";
let Transform183 = browser.currentScene.createNode("Transform");
Transform183.translation = new SFVec3f(new float[0.1,0.1,0]);
let Shape184 = browser.currentScene.createNode("Shape");
Shape184.USE = "HAnimNewJointShape";
Transform183.children = new MFNode();

Transform183.children[0] = Shape184;

HAnimSegment182.children = new MFNode();

HAnimSegment182.children[0] = Transform183;

let Shape185 = browser.currentScene.createNode("Shape");
let Appearance186 = browser.currentScene.createNode("Appearance");
let Material187 = browser.currentScene.createNode("Material");
Material187.emissiveColor = new SFColor(new float[1,1,1]);
Appearance186.material = Material187;

Shape185.appearance = Appearance186;

let IndexedLineSet188 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet188.DEF = "MC45toCMC4";
IndexedLineSet188.coordIndex = new MFInt32(new int[0,1]);
let Coordinate189 = browser.currentScene.createNode("Coordinate");
Coordinate189.point = new MFVec3f(new float[0.1,0.1,0,0.1,0.2,0]);
IndexedLineSet188.coord = Coordinate189;

Shape185.geometry = IndexedLineSet188;

HAnimSegment182.children[1] = Shape185;

let Shape190 = browser.currentScene.createNode("Shape");
let Appearance191 = browser.currentScene.createNode("Appearance");
let Material192 = browser.currentScene.createNode("Material");
Material192.emissiveColor = new SFColor(new float[1,1,1]);
Appearance191.material = Material192;

Shape190.appearance = Appearance191;

let IndexedLineSet193 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet193.DEF = "MC45toCMC5";
IndexedLineSet193.coordIndex = new MFInt32(new int[0,1]);
let Coordinate194 = browser.currentScene.createNode("Coordinate");
Coordinate194.point = new MFVec3f(new float[0.1,0.1,0,0.15,0.17,0]);
IndexedLineSet193.coord = Coordinate194;

Shape190.geometry = IndexedLineSet193;

HAnimSegment182.children[2] = Shape190;

HAnimJoint181.children = new MFNode();

HAnimJoint181.children[0] = HAnimSegment182;

//ring finger
let HAnimJoint195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint195.name = "r_carpometacarpal_4";
HAnimJoint195.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint195.center = new SFVec3f(new float[0.1,0.2,0]);
HAnimJoint195.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint195.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment196 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment196.name = "r_metacarpal_4";
HAnimSegment196.DEF = "hanim_r_metacarpal_4";
let Transform197 = browser.currentScene.createNode("Transform");
Transform197.translation = new SFVec3f(new float[0.1,0.2,0]);
let Shape198 = browser.currentScene.createNode("Shape");
Shape198.USE = "HAnimJointShape";
Transform197.children = new MFNode();

Transform197.children[0] = Shape198;

HAnimSegment196.children = new MFNode();

HAnimSegment196.children[0] = Transform197;

let Shape199 = browser.currentScene.createNode("Shape");
let Appearance200 = browser.currentScene.createNode("Appearance");
let Material201 = browser.currentScene.createNode("Material");
Material201.emissiveColor = new SFColor(new float[1,1,1]);
Appearance200.material = Material201;

Shape199.appearance = Appearance200;

let IndexedLineSet202 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet202.DEF = "CMC4toMCP4";
IndexedLineSet202.coordIndex = new MFInt32(new int[0,1]);
let Coordinate203 = browser.currentScene.createNode("Coordinate");
Coordinate203.point = new MFVec3f(new float[0.1,0.2,0,0.1,0.47,0]);
IndexedLineSet202.coord = Coordinate203;

Shape199.geometry = IndexedLineSet202;

HAnimSegment196.children[1] = Shape199;

HAnimJoint195.children = new MFNode();

HAnimJoint195.children[0] = HAnimSegment196;

let HAnimJoint204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint204.name = "r_metacarpophalangeal_4";
HAnimJoint204.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint204.center = new SFVec3f(new float[0.1,0.47,0]);
HAnimJoint204.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint204.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment205 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment205.name = "r_carpal_proximal_phalanx_4";
HAnimSegment205.DEF = "hanim_r_carpal_proximal_phalanx_4";
let Transform206 = browser.currentScene.createNode("Transform");
Transform206.translation = new SFVec3f(new float[0.1,0.47,0]);
let Shape207 = browser.currentScene.createNode("Shape");
Shape207.USE = "HAnimJointShape";
Transform206.children = new MFNode();

Transform206.children[0] = Shape207;

HAnimSegment205.children = new MFNode();

HAnimSegment205.children[0] = Transform206;

let Shape208 = browser.currentScene.createNode("Shape");
let Appearance209 = browser.currentScene.createNode("Appearance");
let Material210 = browser.currentScene.createNode("Material");
Material210.emissiveColor = new SFColor(new float[1,1,1]);
Appearance209.material = Material210;

Shape208.appearance = Appearance209;

let IndexedLineSet211 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet211.DEF = "MCP4toPIP4";
IndexedLineSet211.coordIndex = new MFInt32(new int[0,1]);
let Coordinate212 = browser.currentScene.createNode("Coordinate");
Coordinate212.point = new MFVec3f(new float[0.1,0.47,0,0.1,0.7,0]);
IndexedLineSet211.coord = Coordinate212;

Shape208.geometry = IndexedLineSet211;

HAnimSegment205.children[1] = Shape208;

HAnimJoint204.children = new MFNode();

HAnimJoint204.children[0] = HAnimSegment205;

let HAnimJoint213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint213.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint213.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint213.center = new SFVec3f(new float[0.1,0.7,0]);
HAnimJoint213.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint213.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment214 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment214.name = "r_carpal_middle_phalanx_4";
HAnimSegment214.DEF = "hanim_r_carpal_middle_phalanx_4";
let Transform215 = browser.currentScene.createNode("Transform");
Transform215.translation = new SFVec3f(new float[0.1,0.7,0]);
let Shape216 = browser.currentScene.createNode("Shape");
Shape216.USE = "HAnimJointShape";
Transform215.children = new MFNode();

Transform215.children[0] = Shape216;

HAnimSegment214.children = new MFNode();

HAnimSegment214.children[0] = Transform215;

let Shape217 = browser.currentScene.createNode("Shape");
let Appearance218 = browser.currentScene.createNode("Appearance");
let Material219 = browser.currentScene.createNode("Material");
Material219.emissiveColor = new SFColor(new float[1,1,1]);
Appearance218.material = Material219;

Shape217.appearance = Appearance218;

let IndexedLineSet220 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet220.DEF = "PIP4toDIP4";
IndexedLineSet220.coordIndex = new MFInt32(new int[0,1]);
let Coordinate221 = browser.currentScene.createNode("Coordinate");
Coordinate221.point = new MFVec3f(new float[0.1,0.7,0,0.1,0.93,0]);
IndexedLineSet220.coord = Coordinate221;

Shape217.geometry = IndexedLineSet220;

HAnimSegment214.children[1] = Shape217;

HAnimJoint213.children = new MFNode();

HAnimJoint213.children[0] = HAnimSegment214;

let HAnimJoint222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint222.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint222.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint222.center = new SFVec3f(new float[0.1,0.93,0]);
HAnimJoint222.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint222.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment223 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment223.name = "r_carpal_distal_phalanx_4";
HAnimSegment223.DEF = "hanim_r_carpal_distal_phalanx_4";
let Transform224 = browser.currentScene.createNode("Transform");
Transform224.translation = new SFVec3f(new float[0.1,0.93,0]);
let Shape225 = browser.currentScene.createNode("Shape");
Shape225.USE = "HAnimJointShape";
Transform224.children = new MFNode();

Transform224.children[0] = Shape225;

HAnimSegment223.children = new MFNode();

HAnimSegment223.children[0] = Transform224;

let Shape226 = browser.currentScene.createNode("Shape");
let Appearance227 = browser.currentScene.createNode("Appearance");
let Material228 = browser.currentScene.createNode("Material");
Material228.emissiveColor = new SFColor(new float[1,1,1]);
Appearance227.material = Material228;

Shape226.appearance = Appearance227;

let IndexedLineSet229 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet229.DEF = "fingertip_r_carpal_distal_interphalangeal_4";
IndexedLineSet229.coordIndex = new MFInt32(new int[0,1]);
let Coordinate230 = browser.currentScene.createNode("Coordinate");
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
let HAnimJoint231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint231.name = "r_carpometacarpal_5";
HAnimJoint231.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint231.center = new SFVec3f(new float[0.15,0.17,0]);
HAnimJoint231.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint231.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment232 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment232.name = "r_metacarpal_5";
HAnimSegment232.DEF = "hanim_r_metacarpal_5";
let Transform233 = browser.currentScene.createNode("Transform");
Transform233.translation = new SFVec3f(new float[0.15,0.17,0]);
let Shape234 = browser.currentScene.createNode("Shape");
Shape234.USE = "HAnimJointShape";
Transform233.children = new MFNode();

Transform233.children[0] = Shape234;

HAnimSegment232.children = new MFNode();

HAnimSegment232.children[0] = Transform233;

let Shape235 = browser.currentScene.createNode("Shape");
let Appearance236 = browser.currentScene.createNode("Appearance");
let Material237 = browser.currentScene.createNode("Material");
Material237.emissiveColor = new SFColor(new float[1,1,1]);
Appearance236.material = Material237;

Shape235.appearance = Appearance236;

let IndexedLineSet238 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet238.DEF = "CMC5toMCP5";
IndexedLineSet238.coordIndex = new MFInt32(new int[0,1]);
let Coordinate239 = browser.currentScene.createNode("Coordinate");
Coordinate239.point = new MFVec3f(new float[0.15,0.17,0,0.2,0.4,0]);
IndexedLineSet238.coord = Coordinate239;

Shape235.geometry = IndexedLineSet238;

HAnimSegment232.children[1] = Shape235;

HAnimJoint231.children = new MFNode();

HAnimJoint231.children[0] = HAnimSegment232;

let HAnimJoint240 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint240.name = "r_metacarpophalangeal_5";
HAnimJoint240.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint240.center = new SFVec3f(new float[0.2,0.4,0]);
HAnimJoint240.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint240.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment241 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment241.name = "r_carpal_proximal_phalanx_5";
HAnimSegment241.DEF = "hanim_r_carpal_proximal_phalanx_5";
let Transform242 = browser.currentScene.createNode("Transform");
Transform242.translation = new SFVec3f(new float[0.2,0.4,0]);
let Shape243 = browser.currentScene.createNode("Shape");
Shape243.USE = "HAnimJointShape";
Transform242.children = new MFNode();

Transform242.children[0] = Shape243;

HAnimSegment241.children = new MFNode();

HAnimSegment241.children[0] = Transform242;

let Shape244 = browser.currentScene.createNode("Shape");
let Appearance245 = browser.currentScene.createNode("Appearance");
let Material246 = browser.currentScene.createNode("Material");
Material246.emissiveColor = new SFColor(new float[1,1,1]);
Appearance245.material = Material246;

Shape244.appearance = Appearance245;

let IndexedLineSet247 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet247.DEF = "MCP5toPIP5";
IndexedLineSet247.coordIndex = new MFInt32(new int[0,1]);
let Coordinate248 = browser.currentScene.createNode("Coordinate");
Coordinate248.point = new MFVec3f(new float[0.2,0.4,0,0.23,0.63,0]);
IndexedLineSet247.coord = Coordinate248;

Shape244.geometry = IndexedLineSet247;

HAnimSegment241.children[1] = Shape244;

HAnimJoint240.children = new MFNode();

HAnimJoint240.children[0] = HAnimSegment241;

let HAnimJoint249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint249.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint249.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint249.center = new SFVec3f(new float[0.23,0.63,0]);
HAnimJoint249.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint249.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment250 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment250.name = "r_carpal_middle_phalanx_5";
HAnimSegment250.DEF = "hanim_r_carpal_middle_phalanx_5";
let Transform251 = browser.currentScene.createNode("Transform");
Transform251.translation = new SFVec3f(new float[0.23,0.63,0]);
let Shape252 = browser.currentScene.createNode("Shape");
Shape252.USE = "HAnimJointShape";
Transform251.children = new MFNode();

Transform251.children[0] = Shape252;

HAnimSegment250.children = new MFNode();

HAnimSegment250.children[0] = Transform251;

let Shape253 = browser.currentScene.createNode("Shape");
let Appearance254 = browser.currentScene.createNode("Appearance");
let Material255 = browser.currentScene.createNode("Material");
Material255.emissiveColor = new SFColor(new float[1,1,1]);
Appearance254.material = Material255;

Shape253.appearance = Appearance254;

let IndexedLineSet256 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet256.DEF = "PIP5toDIP5";
IndexedLineSet256.coordIndex = new MFInt32(new int[0,1]);
let Coordinate257 = browser.currentScene.createNode("Coordinate");
Coordinate257.point = new MFVec3f(new float[0.23,0.63,0,0.25,0.79,0]);
IndexedLineSet256.coord = Coordinate257;

Shape253.geometry = IndexedLineSet256;

HAnimSegment250.children[1] = Shape253;

HAnimJoint249.children = new MFNode();

HAnimJoint249.children[0] = HAnimSegment250;

let HAnimJoint258 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint258.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint258.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint258.center = new SFVec3f(new float[0.25,0.79,0]);
HAnimJoint258.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint258.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment259 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment259.name = "r_carpal_distal_phalanx_5";
HAnimSegment259.DEF = "hanim_r_carpal_distal_phalanx_5";
let Transform260 = browser.currentScene.createNode("Transform");
Transform260.translation = new SFVec3f(new float[0.25,0.79,0]);
let Shape261 = browser.currentScene.createNode("Shape");
Shape261.USE = "HAnimJointShape";
Transform260.children = new MFNode();

Transform260.children[0] = Shape261;

HAnimSegment259.children = new MFNode();

HAnimSegment259.children[0] = Transform260;

let Shape262 = browser.currentScene.createNode("Shape");
let Appearance263 = browser.currentScene.createNode("Appearance");
let Material264 = browser.currentScene.createNode("Material");
Material264.emissiveColor = new SFColor(new float[1,1,1]);
Appearance263.material = Material264;

Shape262.appearance = Appearance263;

let IndexedLineSet265 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet265.DEF = "fingertip_r_carpal_distal_interphalangeal_5";
IndexedLineSet265.coordIndex = new MFInt32(new int[0,1]);
let Coordinate266 = browser.currentScene.createNode("Coordinate");
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

HAnimHumanoid26.joints = new MFNode();

HAnimHumanoid26.joints[0] = HAnimJoint29;

let HAnimJoint267 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint267.USE = "hanim_humanoid_root";
HAnimHumanoid26.joints[1] = HAnimJoint267;

let HAnimJoint268 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint268.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid26.joints[2] = HAnimJoint268;

let HAnimJoint269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint269.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid26.joints[3] = HAnimJoint269;

let HAnimJoint270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint270.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid26.joints[4] = HAnimJoint270;

let HAnimJoint271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint271.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid26.joints[5] = HAnimJoint271;

let HAnimJoint272 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint272.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid26.joints[6] = HAnimJoint272;

let HAnimJoint273 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint273.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid26.joints[7] = HAnimJoint273;

let HAnimJoint274 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint274.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid26.joints[8] = HAnimJoint274;

let HAnimJoint275 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint275.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid26.joints[9] = HAnimJoint275;

let HAnimJoint276 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint276.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid26.joints[10] = HAnimJoint276;

let HAnimJoint277 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint277.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid26.joints[11] = HAnimJoint277;

let HAnimJoint278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint278.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid26.joints[12] = HAnimJoint278;

let HAnimJoint279 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint279.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid26.joints[13] = HAnimJoint279;

let HAnimJoint280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint280.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid26.joints[14] = HAnimJoint280;

let HAnimJoint281 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint281.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid26.joints[15] = HAnimJoint281;

let HAnimJoint282 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint282.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid26.joints[16] = HAnimJoint282;

let HAnimJoint283 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint283.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid26.joints[17] = HAnimJoint283;

let HAnimJoint284 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint284.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid26.joints[18] = HAnimJoint284;

let HAnimJoint285 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint285.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid26.joints[19] = HAnimJoint285;

let HAnimJoint286 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint286.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid26.joints[20] = HAnimJoint286;

let HAnimJoint287 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint287.USE = "hanim_r_midcarpal_1";
HAnimHumanoid26.joints[21] = HAnimJoint287;

let HAnimJoint288 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint288.USE = "hanim_r_midcarpal_2";
HAnimHumanoid26.joints[22] = HAnimJoint288;

let HAnimJoint289 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint289.USE = "hanim_r_midcarpal_3";
HAnimHumanoid26.joints[23] = HAnimJoint289;

let HAnimJoint290 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint290.USE = "hanim_r_midcarpal_4_5";
HAnimHumanoid26.joints[24] = HAnimJoint290;

let HAnimJoint291 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint291.USE = "hanim_r_radiocarpal";
HAnimHumanoid26.joints[25] = HAnimJoint291;

let HAnimSegment292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment292.USE = "hanim_r_capitate";
HAnimHumanoid26.segments[26] = HAnimSegment292;

let HAnimSegment293 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment293.USE = "hanim_r_carpal";
HAnimHumanoid26.segments[27] = HAnimSegment293;

let HAnimSegment294 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment294.USE = "hanim_r_carpal_distal_phalanx_1";
HAnimHumanoid26.segments[28] = HAnimSegment294;

let HAnimSegment295 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment295.USE = "hanim_r_carpal_distal_phalanx_2";
HAnimHumanoid26.segments[29] = HAnimSegment295;

let HAnimSegment296 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment296.USE = "hanim_r_carpal_distal_phalanx_3";
HAnimHumanoid26.segments[30] = HAnimSegment296;

let HAnimSegment297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment297.USE = "hanim_r_carpal_distal_phalanx_4";
HAnimHumanoid26.segments[31] = HAnimSegment297;

let HAnimSegment298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment298.USE = "hanim_r_carpal_distal_phalanx_5";
HAnimHumanoid26.segments[32] = HAnimSegment298;

let HAnimSegment299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment299.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid26.segments[33] = HAnimSegment299;

let HAnimSegment300 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment300.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid26.segments[34] = HAnimSegment300;

let HAnimSegment301 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment301.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid26.segments[35] = HAnimSegment301;

let HAnimSegment302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment302.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid26.segments[36] = HAnimSegment302;

let HAnimSegment303 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment303.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid26.segments[37] = HAnimSegment303;

let HAnimSegment304 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment304.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid26.segments[38] = HAnimSegment304;

let HAnimSegment305 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment305.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid26.segments[39] = HAnimSegment305;

let HAnimSegment306 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment306.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid26.segments[40] = HAnimSegment306;

let HAnimSegment307 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment307.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid26.segments[41] = HAnimSegment307;

let HAnimSegment308 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment308.USE = "hanim_r_hamate";
HAnimHumanoid26.segments[42] = HAnimSegment308;

let HAnimSegment309 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment309.USE = "hanim_r_metacarpal_1";
HAnimHumanoid26.segments[43] = HAnimSegment309;

let HAnimSegment310 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment310.USE = "hanim_r_metacarpal_2";
HAnimHumanoid26.segments[44] = HAnimSegment310;

let HAnimSegment311 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment311.USE = "hanim_r_metacarpal_3";
HAnimHumanoid26.segments[45] = HAnimSegment311;

let HAnimSegment312 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment312.USE = "hanim_r_metacarpal_4";
HAnimHumanoid26.segments[46] = HAnimSegment312;

let HAnimSegment313 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment313.USE = "hanim_r_metacarpal_5";
HAnimHumanoid26.segments[47] = HAnimSegment313;

let HAnimSegment314 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment314.USE = "hanim_r_trapezium";
HAnimHumanoid26.segments[48] = HAnimSegment314;

let HAnimSegment315 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment315.USE = "hanim_r_trapezoid";
HAnimHumanoid26.segments[49] = HAnimSegment315;

browser.currentScene.children[1] = HAnimHumanoid26;


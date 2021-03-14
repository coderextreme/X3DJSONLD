let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "HAnimModelHandRight.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let HAnimHumanoid3 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid3.name = "Hand_Right";
HAnimHumanoid3.DEF = "hanim_Hand_Right";
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
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model
let HAnimJoint7 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint7.name = "r_radiocarpal";
HAnimJoint7.DEF = "hanim_r_radiocarpal";
HAnimJoint7.description = "connection joint of hand to leg above";
let HAnimSegment8 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment8.name = "r_carpal";
HAnimSegment8.DEF = "hanim_r_carpal";
let Transform9 = browser.currentScene.createNode("Transform");
let Shape10 = browser.currentScene.createNode("Shape");
Shape10.DEF = "HAnimJointShape";
let Sphere11 = browser.currentScene.createNode("Sphere");
Sphere11.radius = 0.025;
Shape10.geometry = Sphere11;

let Appearance12 = browser.currentScene.createNode("Appearance");
Appearance12.DEF = "HAnimJointAppearanceBlue";
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
IndexedLineSet17.DEF = "RCToMC12";
IndexedLineSet17.coordIndex = new MFInt32(new int[0,1]);
let Coordinate18 = browser.currentScene.createNode("Coordinate");
Coordinate18.point = new MFVec3f(new float[0,0,0,-0.1,0.1,0]);
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
IndexedLineSet22.DEF = "RCToMC3";
IndexedLineSet22.coordIndex = new MFInt32(new int[0,1]);
let Coordinate23 = browser.currentScene.createNode("Coordinate");
Coordinate23.point = new MFVec3f(new float[0,0,0,0,0.07,0]);
IndexedLineSet22.coord = Coordinate23;

Shape19.geometry = IndexedLineSet22;

HAnimSegment8.children[2] = Shape19;

let Shape24 = browser.currentScene.createNode("Shape");
let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
Material26.emissiveColor = new SFColor(new float[1,1,1]);
Appearance25.material = Material26;

Shape24.appearance = Appearance25;

let IndexedLineSet27 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet27.DEF = "RCToMC45";
IndexedLineSet27.coordIndex = new MFInt32(new int[0,1]);
let Coordinate28 = browser.currentScene.createNode("Coordinate");
Coordinate28.point = new MFVec3f(new float[0,0,0,0.1,0.1,0]);
IndexedLineSet27.coord = Coordinate28;

Shape24.geometry = IndexedLineSet27;

HAnimSegment8.children[3] = Shape24;

HAnimJoint7.children = new MFNode();

HAnimJoint7.children[0] = HAnimSegment8;

//MC1
let HAnimJoint29 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint29.name = "r_midcarpal_1";
HAnimJoint29.DEF = "hanim_r_midcarpal_1";
HAnimJoint29.center = new SFVec3f(new float[-0.1,0.1,0]);
let HAnimSegment30 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment30.name = "r_trapezium";
HAnimSegment30.DEF = "hanim_r_trapezium";
let Transform31 = browser.currentScene.createNode("Transform");
Transform31.translation = new SFVec3f(new float[-0.1,0.1,0]);
let Shape32 = browser.currentScene.createNode("Shape");
Shape32.DEF = "HAnimNewJointShape";
let Sphere33 = browser.currentScene.createNode("Sphere");
Sphere33.radius = 0.025;
Shape32.geometry = Sphere33;

let Appearance34 = browser.currentScene.createNode("Appearance");
Appearance34.DEF = "HAnimJointAppearanceRed";
let Material35 = browser.currentScene.createNode("Material");
Material35.diffuseColor = new SFColor(new float[1,0,0]);
Appearance34.material = Material35;

Shape32.appearance = Appearance34;

Transform31.children = new MFNode();

Transform31.children[0] = Shape32;

HAnimSegment30.children = new MFNode();

HAnimSegment30.children[0] = Transform31;

let Shape36 = browser.currentScene.createNode("Shape");
let Appearance37 = browser.currentScene.createNode("Appearance");
let Material38 = browser.currentScene.createNode("Material");
Material38.emissiveColor = new SFColor(new float[1,1,1]);
Appearance37.material = Material38;

Shape36.appearance = Appearance37;

let IndexedLineSet39 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet39.DEF = "MC12toCMC1";
IndexedLineSet39.coordIndex = new MFInt32(new int[0,1]);
let Coordinate40 = browser.currentScene.createNode("Coordinate");
Coordinate40.point = new MFVec3f(new float[-0.1,0.1,0,-0.2,0.15,0]);
IndexedLineSet39.coord = Coordinate40;

Shape36.geometry = IndexedLineSet39;

HAnimSegment30.children[1] = Shape36;

HAnimJoint29.children = new MFNode();

HAnimJoint29.children[0] = HAnimSegment30;

//thumb finger
let HAnimJoint41 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint41.name = "r_carpometacarpal_1";
HAnimJoint41.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint41.center = new SFVec3f(new float[-0.2,0.15,0]);
let HAnimSegment42 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment42.name = "r_metacarpal_1";
HAnimSegment42.DEF = "hanim_r_metacarpal_1";
let Transform43 = browser.currentScene.createNode("Transform");
Transform43.translation = new SFVec3f(new float[-0.2,0.15,0]);
let Shape44 = browser.currentScene.createNode("Shape");
Shape44.USE = "HAnimJointShape";
Transform43.children = new MFNode();

Transform43.children[0] = Shape44;

HAnimSegment42.children = new MFNode();

HAnimSegment42.children[0] = Transform43;

let Shape45 = browser.currentScene.createNode("Shape");
let Appearance46 = browser.currentScene.createNode("Appearance");
let Material47 = browser.currentScene.createNode("Material");
Material47.emissiveColor = new SFColor(new float[1,1,1]);
Appearance46.material = Material47;

Shape45.appearance = Appearance46;

let IndexedLineSet48 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet48.DEF = "CMC1toMCP1xxx";
IndexedLineSet48.coordIndex = new MFInt32(new int[0,1]);
let Coordinate49 = browser.currentScene.createNode("Coordinate");
Coordinate49.point = new MFVec3f(new float[-0.2,0.15,0,-0.3,0.3,0]);
IndexedLineSet48.coord = Coordinate49;

Shape45.geometry = IndexedLineSet48;

HAnimSegment42.children[1] = Shape45;

HAnimJoint41.children = new MFNode();

HAnimJoint41.children[0] = HAnimSegment42;

let HAnimJoint50 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint50.name = "r_metacarpophalangeal_1";
HAnimJoint50.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint50.center = new SFVec3f(new float[-0.3,0.3,0]);
let HAnimSegment51 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment51.name = "r_carpal_proximal_phalanx_1";
HAnimSegment51.DEF = "hanim_r_carpal_proximal_phalanx_1";
let Transform52 = browser.currentScene.createNode("Transform");
Transform52.translation = new SFVec3f(new float[-0.3,0.3,0]);
let Shape53 = browser.currentScene.createNode("Shape");
Shape53.USE = "HAnimJointShape";
Transform52.children = new MFNode();

Transform52.children[0] = Shape53;

HAnimSegment51.children = new MFNode();

HAnimSegment51.children[0] = Transform52;

let Shape54 = browser.currentScene.createNode("Shape");
let Appearance55 = browser.currentScene.createNode("Appearance");
let Material56 = browser.currentScene.createNode("Material");
Material56.emissiveColor = new SFColor(new float[1,1,1]);
Appearance55.material = Material56;

Shape54.appearance = Appearance55;

let IndexedLineSet57 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet57.DEF = "MCP11toIP1";
IndexedLineSet57.coordIndex = new MFInt32(new int[0,1]);
let Coordinate58 = browser.currentScene.createNode("Coordinate");
Coordinate58.point = new MFVec3f(new float[-0.3,0.3,0,-0.35,0.4,0]);
IndexedLineSet57.coord = Coordinate58;

Shape54.geometry = IndexedLineSet57;

HAnimSegment51.children[1] = Shape54;

HAnimJoint50.children = new MFNode();

HAnimJoint50.children[0] = HAnimSegment51;

let HAnimJoint59 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint59.name = "r_carpal_interphalangeal_1";
HAnimJoint59.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint59.center = new SFVec3f(new float[-0.35,0.4,0]);
let HAnimSegment60 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment60.name = "r_carpal_distal_phalanx_1";
HAnimSegment60.DEF = "hanim_r_carpal_distal_phalanx_1";
let Transform61 = browser.currentScene.createNode("Transform");
Transform61.translation = new SFVec3f(new float[-0.35,0.4,0]);
let Shape62 = browser.currentScene.createNode("Shape");
Shape62.USE = "HAnimJointShape";
Transform61.children = new MFNode();

Transform61.children[0] = Shape62;

HAnimSegment60.children = new MFNode();

HAnimSegment60.children[0] = Transform61;

let Shape63 = browser.currentScene.createNode("Shape");
let Appearance64 = browser.currentScene.createNode("Appearance");
let Material65 = browser.currentScene.createNode("Material");
Material65.emissiveColor = new SFColor(new float[1,1,1]);
Appearance64.material = Material65;

Shape63.appearance = Appearance64;

let IndexedLineSet66 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet66.DEF = "fingertip_r_carpal_interphalangeal_1";
IndexedLineSet66.coordIndex = new MFInt32(new int[0,1]);
let Coordinate67 = browser.currentScene.createNode("Coordinate");
Coordinate67.point = new MFVec3f(new float[-0.35,0.4,0,-0.36,0.45,0]);
IndexedLineSet66.coord = Coordinate67;

Shape63.geometry = IndexedLineSet66;

HAnimSegment60.children[1] = Shape63;

HAnimJoint59.children = new MFNode();

HAnimJoint59.children[0] = HAnimSegment60;

HAnimJoint50.children[1] = HAnimJoint59;

HAnimJoint41.children[1] = HAnimJoint50;

HAnimJoint29.children[1] = HAnimJoint41;

HAnimJoint7.children[1] = HAnimJoint29;

//MC2
let HAnimJoint68 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint68.name = "r_midcarpal_2";
HAnimJoint68.DEF = "hanim_r_midcarpal_2";
HAnimJoint68.center = new SFVec3f(new float[-0.1,0.1,0]);
let HAnimSegment69 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment69.name = "r_trapezoid";
HAnimSegment69.DEF = "hanim_r_trapezoid";
let Transform70 = browser.currentScene.createNode("Transform");
Transform70.translation = new SFVec3f(new float[-0.1,0.1,0]);
let Shape71 = browser.currentScene.createNode("Shape");
Shape71.USE = "HAnimNewJointShape";
Transform70.children = new MFNode();

Transform70.children[0] = Shape71;

HAnimSegment69.children = new MFNode();

HAnimSegment69.children[0] = Transform70;

let Shape72 = browser.currentScene.createNode("Shape");
let Appearance73 = browser.currentScene.createNode("Appearance");
let Material74 = browser.currentScene.createNode("Material");
Material74.emissiveColor = new SFColor(new float[1,1,1]);
Appearance73.material = Material74;

Shape72.appearance = Appearance73;

let IndexedLineSet75 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet75.DEF = "MC12toCMC2";
IndexedLineSet75.coordIndex = new MFInt32(new int[0,1]);
let Coordinate76 = browser.currentScene.createNode("Coordinate");
Coordinate76.point = new MFVec3f(new float[-0.1,0.1,0,-0.1,0.2,0]);
IndexedLineSet75.coord = Coordinate76;

Shape72.geometry = IndexedLineSet75;

HAnimSegment69.children[1] = Shape72;

HAnimJoint68.children = new MFNode();

HAnimJoint68.children[0] = HAnimSegment69;

//index finger
let HAnimJoint77 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint77.name = "r_carpometacarpal_2";
HAnimJoint77.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint77.center = new SFVec3f(new float[-0.1,0.2,0]);
let HAnimSegment78 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment78.name = "r_metacarpal_2";
HAnimSegment78.DEF = "hanim_r_metacarpal_2";
let Transform79 = browser.currentScene.createNode("Transform");
Transform79.translation = new SFVec3f(new float[-0.1,0.2,0]);
let Shape80 = browser.currentScene.createNode("Shape");
Shape80.USE = "HAnimJointShape";
Transform79.children = new MFNode();

Transform79.children[0] = Shape80;

HAnimSegment78.children = new MFNode();

HAnimSegment78.children[0] = Transform79;

let Shape81 = browser.currentScene.createNode("Shape");
let Appearance82 = browser.currentScene.createNode("Appearance");
let Material83 = browser.currentScene.createNode("Material");
Material83.emissiveColor = new SFColor(new float[1,1,1]);
Appearance82.material = Material83;

Shape81.appearance = Appearance82;

let IndexedLineSet84 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet84.DEF = "CMC2toMCP2";
IndexedLineSet84.coordIndex = new MFInt32(new int[0,1]);
let Coordinate85 = browser.currentScene.createNode("Coordinate");
Coordinate85.point = new MFVec3f(new float[-0.1,0.2,0,-0.15,0.5,0]);
IndexedLineSet84.coord = Coordinate85;

Shape81.geometry = IndexedLineSet84;

HAnimSegment78.children[1] = Shape81;

HAnimJoint77.children = new MFNode();

HAnimJoint77.children[0] = HAnimSegment78;

let HAnimJoint86 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint86.name = "r_metacarpophalangeal_2";
HAnimJoint86.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint86.center = new SFVec3f(new float[-0.15,0.5,0]);
let HAnimSegment87 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment87.name = "r_carpal_proximal_phalanx_2";
HAnimSegment87.DEF = "hanim_r_carpal_proximal_phalanx_2";
let Transform88 = browser.currentScene.createNode("Transform");
Transform88.translation = new SFVec3f(new float[-0.15,0.5,0]);
let Shape89 = browser.currentScene.createNode("Shape");
Shape89.USE = "HAnimJointShape";
Transform88.children = new MFNode();

Transform88.children[0] = Shape89;

HAnimSegment87.children = new MFNode();

HAnimSegment87.children[0] = Transform88;

let Shape90 = browser.currentScene.createNode("Shape");
let Appearance91 = browser.currentScene.createNode("Appearance");
let Material92 = browser.currentScene.createNode("Material");
Material92.emissiveColor = new SFColor(new float[1,1,1]);
Appearance91.material = Material92;

Shape90.appearance = Appearance91;

let IndexedLineSet93 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet93.DEF = "MCP2toPIP2";
IndexedLineSet93.coordIndex = new MFInt32(new int[0,1]);
let Coordinate94 = browser.currentScene.createNode("Coordinate");
Coordinate94.point = new MFVec3f(new float[-0.15,0.5,0,-0.2,0.7,0]);
IndexedLineSet93.coord = Coordinate94;

Shape90.geometry = IndexedLineSet93;

HAnimSegment87.children[1] = Shape90;

HAnimJoint86.children = new MFNode();

HAnimJoint86.children[0] = HAnimSegment87;

let HAnimJoint95 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint95.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint95.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint95.center = new SFVec3f(new float[-0.2,0.7,0]);
let HAnimSegment96 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment96.name = "r_carpal_middle_phalanx_2";
HAnimSegment96.DEF = "hanim_r_carpal_middle_phalanx_2";
let Transform97 = browser.currentScene.createNode("Transform");
Transform97.translation = new SFVec3f(new float[-0.2,0.7,0]);
let Shape98 = browser.currentScene.createNode("Shape");
Shape98.USE = "HAnimJointShape";
Transform97.children = new MFNode();

Transform97.children[0] = Shape98;

HAnimSegment96.children = new MFNode();

HAnimSegment96.children[0] = Transform97;

let Shape99 = browser.currentScene.createNode("Shape");
let Appearance100 = browser.currentScene.createNode("Appearance");
let Material101 = browser.currentScene.createNode("Material");
Material101.emissiveColor = new SFColor(new float[1,1,1]);
Appearance100.material = Material101;

Shape99.appearance = Appearance100;

let IndexedLineSet102 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet102.DEF = "PIP2toDIP2";
IndexedLineSet102.coordIndex = new MFInt32(new int[0,1]);
let Coordinate103 = browser.currentScene.createNode("Coordinate");
Coordinate103.point = new MFVec3f(new float[-0.2,0.7,0,-0.24,0.87,0]);
IndexedLineSet102.coord = Coordinate103;

Shape99.geometry = IndexedLineSet102;

HAnimSegment96.children[1] = Shape99;

HAnimJoint95.children = new MFNode();

HAnimJoint95.children[0] = HAnimSegment96;

let HAnimJoint104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint104.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint104.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint104.center = new SFVec3f(new float[-0.24,0.87,0]);
let HAnimSegment105 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment105.name = "r_carpal_distal_phalanx_2";
HAnimSegment105.DEF = "hanim_r_carpal_distal_phalanx_2";
let Transform106 = browser.currentScene.createNode("Transform");
Transform106.translation = new SFVec3f(new float[-0.24,0.87,0]);
let Shape107 = browser.currentScene.createNode("Shape");
Shape107.USE = "HAnimJointShape";
Transform106.children = new MFNode();

Transform106.children[0] = Shape107;

HAnimSegment105.children = new MFNode();

HAnimSegment105.children[0] = Transform106;

let Shape108 = browser.currentScene.createNode("Shape");
let Appearance109 = browser.currentScene.createNode("Appearance");
let Material110 = browser.currentScene.createNode("Material");
Material110.emissiveColor = new SFColor(new float[1,1,1]);
Appearance109.material = Material110;

Shape108.appearance = Appearance109;

let IndexedLineSet111 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet111.DEF = "fingertip_r_carpal_distal_interphalangeal_2";
IndexedLineSet111.coordIndex = new MFInt32(new int[0,1]);
let Coordinate112 = browser.currentScene.createNode("Coordinate");
Coordinate112.point = new MFVec3f(new float[-0.24,0.87,0,-0.26,0.93,0]);
IndexedLineSet111.coord = Coordinate112;

Shape108.geometry = IndexedLineSet111;

HAnimSegment105.children[1] = Shape108;

HAnimJoint104.children = new MFNode();

HAnimJoint104.children[0] = HAnimSegment105;

HAnimJoint95.children[1] = HAnimJoint104;

HAnimJoint86.children[1] = HAnimJoint95;

HAnimJoint77.children[1] = HAnimJoint86;

HAnimJoint68.children[1] = HAnimJoint77;

HAnimJoint7.children[2] = HAnimJoint68;

//MC3
let HAnimJoint113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint113.name = "r_midcarpal_3";
HAnimJoint113.DEF = "hanim_r_midcarpal_3";
HAnimJoint113.center = new SFVec3f(new float[0,0.07,0]);
let HAnimSegment114 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment114.name = "r_capitate";
HAnimSegment114.DEF = "hanim_r_capitate";
let Transform115 = browser.currentScene.createNode("Transform");
Transform115.translation = new SFVec3f(new float[0,0.07,0]);
let Shape116 = browser.currentScene.createNode("Shape");
Shape116.USE = "HAnimNewJointShape";
Transform115.children = new MFNode();

Transform115.children[0] = Shape116;

HAnimSegment114.children = new MFNode();

HAnimSegment114.children[0] = Transform115;

let Shape117 = browser.currentScene.createNode("Shape");
let Appearance118 = browser.currentScene.createNode("Appearance");
let Material119 = browser.currentScene.createNode("Material");
Material119.emissiveColor = new SFColor(new float[1,1,1]);
Appearance118.material = Material119;

Shape117.appearance = Appearance118;

let IndexedLineSet120 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet120.DEF = "MC3toCMC3";
IndexedLineSet120.coordIndex = new MFInt32(new int[0,1]);
let Coordinate121 = browser.currentScene.createNode("Coordinate");
Coordinate121.point = new MFVec3f(new float[0,0.07,0,0,0.2,0]);
IndexedLineSet120.coord = Coordinate121;

Shape117.geometry = IndexedLineSet120;

HAnimSegment114.children[1] = Shape117;

HAnimJoint113.children = new MFNode();

HAnimJoint113.children[0] = HAnimSegment114;

//Middle fingle
let HAnimJoint122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint122.name = "r_carpometacarpal_3";
HAnimJoint122.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint122.center = new SFVec3f(new float[0,0.2,0]);
let HAnimSegment123 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment123.name = "r_metacarpal_3";
HAnimSegment123.DEF = "hanim_r_metacarpal_3";
let Transform124 = browser.currentScene.createNode("Transform");
Transform124.translation = new SFVec3f(new float[0,0.2,0]);
let Shape125 = browser.currentScene.createNode("Shape");
Shape125.USE = "HAnimJointShape";
Transform124.children = new MFNode();

Transform124.children[0] = Shape125;

HAnimSegment123.children = new MFNode();

HAnimSegment123.children[0] = Transform124;

let Shape126 = browser.currentScene.createNode("Shape");
let Appearance127 = browser.currentScene.createNode("Appearance");
let Material128 = browser.currentScene.createNode("Material");
Material128.emissiveColor = new SFColor(new float[1,1,1]);
Appearance127.material = Material128;

Shape126.appearance = Appearance127;

let IndexedLineSet129 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet129.DEF = "CMC3toMCP3";
IndexedLineSet129.coordIndex = new MFInt32(new int[0,1]);
let Coordinate130 = browser.currentScene.createNode("Coordinate");
Coordinate130.point = new MFVec3f(new float[0,0.2,0,-0.03,0.5,0]);
IndexedLineSet129.coord = Coordinate130;

Shape126.geometry = IndexedLineSet129;

HAnimSegment123.children[1] = Shape126;

HAnimJoint122.children = new MFNode();

HAnimJoint122.children[0] = HAnimSegment123;

let HAnimJoint131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint131.name = "r_metacarpophalangeal_3";
HAnimJoint131.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint131.center = new SFVec3f(new float[-0.03,0.5,0]);
let HAnimSegment132 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment132.name = "r_carpal_proximal_phalanx_3";
HAnimSegment132.DEF = "hanim_r_carpal_proximal_phalanx_3";
let Transform133 = browser.currentScene.createNode("Transform");
Transform133.translation = new SFVec3f(new float[-0.03,0.5,0]);
let Shape134 = browser.currentScene.createNode("Shape");
Shape134.USE = "HAnimJointShape";
Transform133.children = new MFNode();

Transform133.children[0] = Shape134;

HAnimSegment132.children = new MFNode();

HAnimSegment132.children[0] = Transform133;

let Shape135 = browser.currentScene.createNode("Shape");
let Appearance136 = browser.currentScene.createNode("Appearance");
let Material137 = browser.currentScene.createNode("Material");
Material137.emissiveColor = new SFColor(new float[1,1,1]);
Appearance136.material = Material137;

Shape135.appearance = Appearance136;

let IndexedLineSet138 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet138.DEF = "MCP3toPIP3";
IndexedLineSet138.coordIndex = new MFInt32(new int[0,1]);
let Coordinate139 = browser.currentScene.createNode("Coordinate");
Coordinate139.point = new MFVec3f(new float[-0.03,0.5,0,-0.05,0.75,0]);
IndexedLineSet138.coord = Coordinate139;

Shape135.geometry = IndexedLineSet138;

HAnimSegment132.children[1] = Shape135;

HAnimJoint131.children = new MFNode();

HAnimJoint131.children[0] = HAnimSegment132;

let HAnimJoint140 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint140.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint140.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint140.center = new SFVec3f(new float[-0.05,0.75,0]);
let HAnimSegment141 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment141.name = "r_carpal_middle_phalanx_3";
HAnimSegment141.DEF = "hanim_r_carpal_middle_phalanx_3";
let Transform142 = browser.currentScene.createNode("Transform");
Transform142.translation = new SFVec3f(new float[-0.05,0.75,0]);
let Shape143 = browser.currentScene.createNode("Shape");
Shape143.USE = "HAnimJointShape";
Transform142.children = new MFNode();

Transform142.children[0] = Shape143;

HAnimSegment141.children = new MFNode();

HAnimSegment141.children[0] = Transform142;

let Shape144 = browser.currentScene.createNode("Shape");
let Appearance145 = browser.currentScene.createNode("Appearance");
let Material146 = browser.currentScene.createNode("Material");
Material146.emissiveColor = new SFColor(new float[1,1,1]);
Appearance145.material = Material146;

Shape144.appearance = Appearance145;

let IndexedLineSet147 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet147.DEF = "PIP3toDIP3";
IndexedLineSet147.coordIndex = new MFInt32(new int[0,1]);
let Coordinate148 = browser.currentScene.createNode("Coordinate");
Coordinate148.point = new MFVec3f(new float[-0.05,0.75,0,-0.08,0.96,0]);
IndexedLineSet147.coord = Coordinate148;

Shape144.geometry = IndexedLineSet147;

HAnimSegment141.children[1] = Shape144;

HAnimJoint140.children = new MFNode();

HAnimJoint140.children[0] = HAnimSegment141;

let HAnimJoint149 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint149.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint149.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint149.center = new SFVec3f(new float[-0.08,0.96,0]);
let HAnimSegment150 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment150.name = "r_carpal_distal_phalanx_3";
HAnimSegment150.DEF = "hanim_r_carpal_distal_phalanx_3";
let Transform151 = browser.currentScene.createNode("Transform");
Transform151.translation = new SFVec3f(new float[-0.08,0.96,0]);
let Shape152 = browser.currentScene.createNode("Shape");
Shape152.USE = "HAnimJointShape";
Transform151.children = new MFNode();

Transform151.children[0] = Shape152;

HAnimSegment150.children = new MFNode();

HAnimSegment150.children[0] = Transform151;

let Shape153 = browser.currentScene.createNode("Shape");
let Appearance154 = browser.currentScene.createNode("Appearance");
let Material155 = browser.currentScene.createNode("Material");
Material155.emissiveColor = new SFColor(new float[1,1,1]);
Appearance154.material = Material155;

Shape153.appearance = Appearance154;

let IndexedLineSet156 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet156.DEF = "fingertip_r_carpal_distal_interphalangeal_3";
IndexedLineSet156.coordIndex = new MFInt32(new int[0,1]);
let Coordinate157 = browser.currentScene.createNode("Coordinate");
Coordinate157.point = new MFVec3f(new float[-0.08,0.96,0,-0.09,1.05,0]);
IndexedLineSet156.coord = Coordinate157;

Shape153.geometry = IndexedLineSet156;

HAnimSegment150.children[1] = Shape153;

HAnimJoint149.children = new MFNode();

HAnimJoint149.children[0] = HAnimSegment150;

HAnimJoint140.children[1] = HAnimJoint149;

HAnimJoint131.children[1] = HAnimJoint140;

HAnimJoint122.children[1] = HAnimJoint131;

HAnimJoint113.children[1] = HAnimJoint122;

HAnimJoint7.children[3] = HAnimJoint113;

//MC4_5
let HAnimJoint158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint158.name = "r_midcarpal_4_5";
HAnimJoint158.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint158.center = new SFVec3f(new float[0.1,0.1,0]);
let HAnimSegment159 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment159.name = "r_hamate";
HAnimSegment159.DEF = "hanim_r_hamate";
let Transform160 = browser.currentScene.createNode("Transform");
Transform160.translation = new SFVec3f(new float[0.1,0.1,0]);
let Shape161 = browser.currentScene.createNode("Shape");
Shape161.USE = "HAnimNewJointShape";
Transform160.children = new MFNode();

Transform160.children[0] = Shape161;

HAnimSegment159.children = new MFNode();

HAnimSegment159.children[0] = Transform160;

let Shape162 = browser.currentScene.createNode("Shape");
let Appearance163 = browser.currentScene.createNode("Appearance");
let Material164 = browser.currentScene.createNode("Material");
Material164.emissiveColor = new SFColor(new float[1,1,1]);
Appearance163.material = Material164;

Shape162.appearance = Appearance163;

let IndexedLineSet165 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet165.DEF = "MC45toCMC4";
IndexedLineSet165.coordIndex = new MFInt32(new int[0,1]);
let Coordinate166 = browser.currentScene.createNode("Coordinate");
Coordinate166.point = new MFVec3f(new float[0.1,0.1,0,0.1,0.2,0]);
IndexedLineSet165.coord = Coordinate166;

Shape162.geometry = IndexedLineSet165;

HAnimSegment159.children[1] = Shape162;

let Shape167 = browser.currentScene.createNode("Shape");
let Appearance168 = browser.currentScene.createNode("Appearance");
let Material169 = browser.currentScene.createNode("Material");
Material169.emissiveColor = new SFColor(new float[1,1,1]);
Appearance168.material = Material169;

Shape167.appearance = Appearance168;

let IndexedLineSet170 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet170.DEF = "MC45toCMC5";
IndexedLineSet170.coordIndex = new MFInt32(new int[0,1]);
let Coordinate171 = browser.currentScene.createNode("Coordinate");
Coordinate171.point = new MFVec3f(new float[0.1,0.1,0,0.15,0.17,0]);
IndexedLineSet170.coord = Coordinate171;

Shape167.geometry = IndexedLineSet170;

HAnimSegment159.children[2] = Shape167;

HAnimJoint158.children = new MFNode();

HAnimJoint158.children[0] = HAnimSegment159;

//ring finger
let HAnimJoint172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint172.name = "r_carpometacarpal_4";
HAnimJoint172.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint172.center = new SFVec3f(new float[0.1,0.2,0]);
let HAnimSegment173 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment173.name = "r_metacarpal_4";
HAnimSegment173.DEF = "hanim_r_metacarpal_4";
let Transform174 = browser.currentScene.createNode("Transform");
Transform174.translation = new SFVec3f(new float[0.1,0.2,0]);
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
IndexedLineSet179.DEF = "CMC4toMCP4";
IndexedLineSet179.coordIndex = new MFInt32(new int[0,1]);
let Coordinate180 = browser.currentScene.createNode("Coordinate");
Coordinate180.point = new MFVec3f(new float[0.1,0.2,0,0.1,0.47,0]);
IndexedLineSet179.coord = Coordinate180;

Shape176.geometry = IndexedLineSet179;

HAnimSegment173.children[1] = Shape176;

HAnimJoint172.children = new MFNode();

HAnimJoint172.children[0] = HAnimSegment173;

let HAnimJoint181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint181.name = "r_metacarpophalangeal_4";
HAnimJoint181.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint181.center = new SFVec3f(new float[0.1,0.47,0]);
let HAnimSegment182 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment182.name = "r_carpal_proximal_phalanx_4";
HAnimSegment182.DEF = "hanim_r_carpal_proximal_phalanx_4";
let Transform183 = browser.currentScene.createNode("Transform");
Transform183.translation = new SFVec3f(new float[0.1,0.47,0]);
let Shape184 = browser.currentScene.createNode("Shape");
Shape184.USE = "HAnimJointShape";
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
IndexedLineSet188.DEF = "MCP4toPIP4";
IndexedLineSet188.coordIndex = new MFInt32(new int[0,1]);
let Coordinate189 = browser.currentScene.createNode("Coordinate");
Coordinate189.point = new MFVec3f(new float[0.1,0.47,0,0.1,0.7,0]);
IndexedLineSet188.coord = Coordinate189;

Shape185.geometry = IndexedLineSet188;

HAnimSegment182.children[1] = Shape185;

HAnimJoint181.children = new MFNode();

HAnimJoint181.children[0] = HAnimSegment182;

let HAnimJoint190 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint190.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint190.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint190.center = new SFVec3f(new float[0.1,0.7,0]);
let HAnimSegment191 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment191.name = "r_carpal_middle_phalanx_4";
HAnimSegment191.DEF = "hanim_r_carpal_middle_phalanx_4";
let Transform192 = browser.currentScene.createNode("Transform");
Transform192.translation = new SFVec3f(new float[0.1,0.7,0]);
let Shape193 = browser.currentScene.createNode("Shape");
Shape193.USE = "HAnimJointShape";
Transform192.children = new MFNode();

Transform192.children[0] = Shape193;

HAnimSegment191.children = new MFNode();

HAnimSegment191.children[0] = Transform192;

let Shape194 = browser.currentScene.createNode("Shape");
let Appearance195 = browser.currentScene.createNode("Appearance");
let Material196 = browser.currentScene.createNode("Material");
Material196.emissiveColor = new SFColor(new float[1,1,1]);
Appearance195.material = Material196;

Shape194.appearance = Appearance195;

let IndexedLineSet197 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet197.DEF = "PIP4toDIP4";
IndexedLineSet197.coordIndex = new MFInt32(new int[0,1]);
let Coordinate198 = browser.currentScene.createNode("Coordinate");
Coordinate198.point = new MFVec3f(new float[0.1,0.7,0,0.1,0.93,0]);
IndexedLineSet197.coord = Coordinate198;

Shape194.geometry = IndexedLineSet197;

HAnimSegment191.children[1] = Shape194;

HAnimJoint190.children = new MFNode();

HAnimJoint190.children[0] = HAnimSegment191;

let HAnimJoint199 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint199.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint199.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint199.center = new SFVec3f(new float[0.1,0.93,0]);
let HAnimSegment200 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment200.name = "r_carpal_distal_phalanx_4";
HAnimSegment200.DEF = "hanim_r_carpal_distal_phalanx_4";
let Transform201 = browser.currentScene.createNode("Transform");
Transform201.translation = new SFVec3f(new float[0.1,0.93,0]);
let Shape202 = browser.currentScene.createNode("Shape");
Shape202.USE = "HAnimJointShape";
Transform201.children = new MFNode();

Transform201.children[0] = Shape202;

HAnimSegment200.children = new MFNode();

HAnimSegment200.children[0] = Transform201;

let Shape203 = browser.currentScene.createNode("Shape");
let Appearance204 = browser.currentScene.createNode("Appearance");
let Material205 = browser.currentScene.createNode("Material");
Material205.emissiveColor = new SFColor(new float[1,1,1]);
Appearance204.material = Material205;

Shape203.appearance = Appearance204;

let IndexedLineSet206 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet206.DEF = "fingertip_r_carpal_distal_interphalangeal_4";
IndexedLineSet206.coordIndex = new MFInt32(new int[0,1]);
let Coordinate207 = browser.currentScene.createNode("Coordinate");
Coordinate207.point = new MFVec3f(new float[0.1,0.93,0,0.1,1,0]);
IndexedLineSet206.coord = Coordinate207;

Shape203.geometry = IndexedLineSet206;

HAnimSegment200.children[1] = Shape203;

HAnimJoint199.children = new MFNode();

HAnimJoint199.children[0] = HAnimSegment200;

HAnimJoint190.children[1] = HAnimJoint199;

HAnimJoint181.children[1] = HAnimJoint190;

HAnimJoint172.children[1] = HAnimJoint181;

HAnimJoint158.children[1] = HAnimJoint172;

//pinky finger
let HAnimJoint208 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint208.name = "r_carpometacarpal_5";
HAnimJoint208.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint208.center = new SFVec3f(new float[0.15,0.17,0]);
let HAnimSegment209 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment209.name = "r_metacarpal_5";
HAnimSegment209.DEF = "hanim_r_metacarpal_5";
let Transform210 = browser.currentScene.createNode("Transform");
Transform210.translation = new SFVec3f(new float[0.15,0.17,0]);
let Shape211 = browser.currentScene.createNode("Shape");
Shape211.USE = "HAnimJointShape";
Transform210.children = new MFNode();

Transform210.children[0] = Shape211;

HAnimSegment209.children = new MFNode();

HAnimSegment209.children[0] = Transform210;

let Shape212 = browser.currentScene.createNode("Shape");
let Appearance213 = browser.currentScene.createNode("Appearance");
let Material214 = browser.currentScene.createNode("Material");
Material214.emissiveColor = new SFColor(new float[1,1,1]);
Appearance213.material = Material214;

Shape212.appearance = Appearance213;

let IndexedLineSet215 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet215.DEF = "CMC5toMCP5";
IndexedLineSet215.coordIndex = new MFInt32(new int[0,1]);
let Coordinate216 = browser.currentScene.createNode("Coordinate");
Coordinate216.point = new MFVec3f(new float[0.15,0.17,0,0.2,0.4,0]);
IndexedLineSet215.coord = Coordinate216;

Shape212.geometry = IndexedLineSet215;

HAnimSegment209.children[1] = Shape212;

HAnimJoint208.children = new MFNode();

HAnimJoint208.children[0] = HAnimSegment209;

let HAnimJoint217 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint217.name = "r_metacarpophalangeal_5";
HAnimJoint217.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint217.center = new SFVec3f(new float[0.2,0.4,0]);
let HAnimSegment218 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment218.name = "r_carpal_proximal_phalanx_5";
HAnimSegment218.DEF = "hanim_r_carpal_proximal_phalanx_5";
let Transform219 = browser.currentScene.createNode("Transform");
Transform219.translation = new SFVec3f(new float[0.2,0.4,0]);
let Shape220 = browser.currentScene.createNode("Shape");
Shape220.USE = "HAnimJointShape";
Transform219.children = new MFNode();

Transform219.children[0] = Shape220;

HAnimSegment218.children = new MFNode();

HAnimSegment218.children[0] = Transform219;

let Shape221 = browser.currentScene.createNode("Shape");
let Appearance222 = browser.currentScene.createNode("Appearance");
let Material223 = browser.currentScene.createNode("Material");
Material223.emissiveColor = new SFColor(new float[1,1,1]);
Appearance222.material = Material223;

Shape221.appearance = Appearance222;

let IndexedLineSet224 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet224.DEF = "MCP5toPIP5";
IndexedLineSet224.coordIndex = new MFInt32(new int[0,1]);
let Coordinate225 = browser.currentScene.createNode("Coordinate");
Coordinate225.point = new MFVec3f(new float[0.2,0.4,0,0.23,0.63,0]);
IndexedLineSet224.coord = Coordinate225;

Shape221.geometry = IndexedLineSet224;

HAnimSegment218.children[1] = Shape221;

HAnimJoint217.children = new MFNode();

HAnimJoint217.children[0] = HAnimSegment218;

let HAnimJoint226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint226.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint226.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint226.center = new SFVec3f(new float[0.23,0.63,0]);
let HAnimSegment227 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment227.name = "r_carpal_middle_phalanx_5";
HAnimSegment227.DEF = "hanim_r_carpal_middle_phalanx_5";
let Transform228 = browser.currentScene.createNode("Transform");
Transform228.translation = new SFVec3f(new float[0.23,0.63,0]);
let Shape229 = browser.currentScene.createNode("Shape");
Shape229.USE = "HAnimJointShape";
Transform228.children = new MFNode();

Transform228.children[0] = Shape229;

HAnimSegment227.children = new MFNode();

HAnimSegment227.children[0] = Transform228;

let Shape230 = browser.currentScene.createNode("Shape");
let Appearance231 = browser.currentScene.createNode("Appearance");
let Material232 = browser.currentScene.createNode("Material");
Material232.emissiveColor = new SFColor(new float[1,1,1]);
Appearance231.material = Material232;

Shape230.appearance = Appearance231;

let IndexedLineSet233 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet233.DEF = "PIP5toDIP5";
IndexedLineSet233.coordIndex = new MFInt32(new int[0,1]);
let Coordinate234 = browser.currentScene.createNode("Coordinate");
Coordinate234.point = new MFVec3f(new float[0.23,0.63,0,0.25,0.79,0]);
IndexedLineSet233.coord = Coordinate234;

Shape230.geometry = IndexedLineSet233;

HAnimSegment227.children[1] = Shape230;

HAnimJoint226.children = new MFNode();

HAnimJoint226.children[0] = HAnimSegment227;

let HAnimJoint235 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint235.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint235.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint235.center = new SFVec3f(new float[0.25,0.79,0]);
let HAnimSegment236 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment236.name = "r_carpal_distal_phalanx_5";
HAnimSegment236.DEF = "hanim_r_carpal_distal_phalanx_5";
let Transform237 = browser.currentScene.createNode("Transform");
Transform237.translation = new SFVec3f(new float[0.25,0.79,0]);
let Shape238 = browser.currentScene.createNode("Shape");
Shape238.USE = "HAnimJointShape";
Transform237.children = new MFNode();

Transform237.children[0] = Shape238;

HAnimSegment236.children = new MFNode();

HAnimSegment236.children[0] = Transform237;

let Shape239 = browser.currentScene.createNode("Shape");
let Appearance240 = browser.currentScene.createNode("Appearance");
let Material241 = browser.currentScene.createNode("Material");
Material241.emissiveColor = new SFColor(new float[1,1,1]);
Appearance240.material = Material241;

Shape239.appearance = Appearance240;

let IndexedLineSet242 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet242.DEF = "fingertip_r_carpal_distal_interphalangeal_5";
IndexedLineSet242.coordIndex = new MFInt32(new int[0,1]);
let Coordinate243 = browser.currentScene.createNode("Coordinate");
Coordinate243.point = new MFVec3f(new float[0.25,0.79,0,0.26,0.85,0]);
IndexedLineSet242.coord = Coordinate243;

Shape239.geometry = IndexedLineSet242;

HAnimSegment236.children[1] = Shape239;

HAnimJoint235.children = new MFNode();

HAnimJoint235.children[0] = HAnimSegment236;

HAnimJoint226.children[1] = HAnimJoint235;

HAnimJoint217.children[1] = HAnimJoint226;

HAnimJoint208.children[1] = HAnimJoint217;

HAnimJoint158.children[2] = HAnimJoint208;

HAnimJoint7.children[4] = HAnimJoint158;

HAnimJoint6.children = new MFNode();

HAnimJoint6.children[0] = HAnimJoint7;

HAnimHumanoid3.joints = new MFNode();

HAnimHumanoid3.joints[0] = HAnimJoint6;

let HAnimJoint244 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint244.USE = "hanim_humanoid_root";
HAnimHumanoid3.joints[1] = HAnimJoint244;

let HAnimJoint245 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint245.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid3.joints[2] = HAnimJoint245;

let HAnimJoint246 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint246.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid3.joints[3] = HAnimJoint246;

let HAnimJoint247 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint247.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid3.joints[4] = HAnimJoint247;

let HAnimJoint248 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint248.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid3.joints[5] = HAnimJoint248;

let HAnimJoint249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint249.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid3.joints[6] = HAnimJoint249;

let HAnimJoint250 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint250.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid3.joints[7] = HAnimJoint250;

let HAnimJoint251 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint251.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid3.joints[8] = HAnimJoint251;

let HAnimJoint252 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint252.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid3.joints[9] = HAnimJoint252;

let HAnimJoint253 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint253.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid3.joints[10] = HAnimJoint253;

let HAnimJoint254 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint254.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid3.joints[11] = HAnimJoint254;

let HAnimJoint255 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint255.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid3.joints[12] = HAnimJoint255;

let HAnimJoint256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint256.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid3.joints[13] = HAnimJoint256;

let HAnimJoint257 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint257.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid3.joints[14] = HAnimJoint257;

let HAnimJoint258 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint258.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid3.joints[15] = HAnimJoint258;

let HAnimJoint259 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint259.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid3.joints[16] = HAnimJoint259;

let HAnimJoint260 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint260.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid3.joints[17] = HAnimJoint260;

let HAnimJoint261 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint261.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid3.joints[18] = HAnimJoint261;

let HAnimJoint262 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint262.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid3.joints[19] = HAnimJoint262;

let HAnimJoint263 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint263.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid3.joints[20] = HAnimJoint263;

let HAnimJoint264 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint264.USE = "hanim_r_midcarpal_1";
HAnimHumanoid3.joints[21] = HAnimJoint264;

let HAnimJoint265 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint265.USE = "hanim_r_midcarpal_2";
HAnimHumanoid3.joints[22] = HAnimJoint265;

let HAnimJoint266 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint266.USE = "hanim_r_midcarpal_3";
HAnimHumanoid3.joints[23] = HAnimJoint266;

let HAnimJoint267 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint267.USE = "hanim_r_midcarpal_4_5";
HAnimHumanoid3.joints[24] = HAnimJoint267;

let HAnimJoint268 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint268.USE = "hanim_r_radiocarpal";
HAnimHumanoid3.joints[25] = HAnimJoint268;

let HAnimSegment269 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment269.USE = "hanim_r_capitate";
HAnimHumanoid3.segments[26] = HAnimSegment269;

let HAnimSegment270 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment270.USE = "hanim_r_carpal";
HAnimHumanoid3.segments[27] = HAnimSegment270;

let HAnimSegment271 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment271.USE = "hanim_r_carpal_distal_phalanx_1";
HAnimHumanoid3.segments[28] = HAnimSegment271;

let HAnimSegment272 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment272.USE = "hanim_r_carpal_distal_phalanx_2";
HAnimHumanoid3.segments[29] = HAnimSegment272;

let HAnimSegment273 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment273.USE = "hanim_r_carpal_distal_phalanx_3";
HAnimHumanoid3.segments[30] = HAnimSegment273;

let HAnimSegment274 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment274.USE = "hanim_r_carpal_distal_phalanx_4";
HAnimHumanoid3.segments[31] = HAnimSegment274;

let HAnimSegment275 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment275.USE = "hanim_r_carpal_distal_phalanx_5";
HAnimHumanoid3.segments[32] = HAnimSegment275;

let HAnimSegment276 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment276.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid3.segments[33] = HAnimSegment276;

let HAnimSegment277 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment277.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid3.segments[34] = HAnimSegment277;

let HAnimSegment278 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment278.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid3.segments[35] = HAnimSegment278;

let HAnimSegment279 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment279.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid3.segments[36] = HAnimSegment279;

let HAnimSegment280 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment280.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid3.segments[37] = HAnimSegment280;

let HAnimSegment281 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment281.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid3.segments[38] = HAnimSegment281;

let HAnimSegment282 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment282.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid3.segments[39] = HAnimSegment282;

let HAnimSegment283 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment283.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid3.segments[40] = HAnimSegment283;

let HAnimSegment284 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment284.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid3.segments[41] = HAnimSegment284;

let HAnimSegment285 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment285.USE = "hanim_r_hamate";
HAnimHumanoid3.segments[42] = HAnimSegment285;

let HAnimSegment286 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment286.USE = "hanim_r_metacarpal_1";
HAnimHumanoid3.segments[43] = HAnimSegment286;

let HAnimSegment287 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment287.USE = "hanim_r_metacarpal_2";
HAnimHumanoid3.segments[44] = HAnimSegment287;

let HAnimSegment288 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment288.USE = "hanim_r_metacarpal_3";
HAnimHumanoid3.segments[45] = HAnimSegment288;

let HAnimSegment289 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment289.USE = "hanim_r_metacarpal_4";
HAnimHumanoid3.segments[46] = HAnimSegment289;

let HAnimSegment290 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment290.USE = "hanim_r_metacarpal_5";
HAnimHumanoid3.segments[47] = HAnimSegment290;

let HAnimSegment291 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment291.USE = "hanim_r_trapezium";
HAnimHumanoid3.segments[48] = HAnimSegment291;

let HAnimSegment292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment292.USE = "hanim_r_trapezoid";
HAnimHumanoid3.segments[49] = HAnimSegment292;

browser.currentScene.children[1] = HAnimHumanoid3;


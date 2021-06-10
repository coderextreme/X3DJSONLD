let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "HAnimModelHandLeft.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let HAnimHumanoid3 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid3.name = "Hand_Left";
HAnimHumanoid3.DEF = "hanim_Hand_Left";
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
HAnimJoint6.stiffness = new SFVec3f(new float[0,0,0]);
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model
let HAnimJoint7 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint7.name = "l_radiocarpal";
HAnimJoint7.DEF = "hanim_l_radiocarpal";
HAnimJoint7.description = "connection joint of hand to leg above";
HAnimJoint7.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment8 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment8.name = "l_carpal";
HAnimSegment8.DEF = "hanim_l_carpal";
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
Coordinate18.point = new MFVec3f(new float[0,0,0,0.1,0.1,0]);
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
Coordinate28.point = new MFVec3f(new float[0,0,0,-0.1,0.1,0]);
IndexedLineSet27.coord = Coordinate28;

Shape24.geometry = IndexedLineSet27;

HAnimSegment8.children[3] = Shape24;

HAnimJoint7.children = new MFNode();

HAnimJoint7.children[0] = HAnimSegment8;

//MC1
let HAnimJoint29 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint29.name = "l_midcarpal_1";
HAnimJoint29.DEF = "hanim_l_midcarpal_1";
HAnimJoint29.center = new SFVec3f(new float[0.14,0.09,0]);
HAnimJoint29.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment30 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment30.name = "l_trapezium";
HAnimSegment30.DEF = "hanim_l_trapezium";
let Transform31 = browser.currentScene.createNode("Transform");
Transform31.translation = new SFVec3f(new float[0.14,0.09,0]);
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
Coordinate40.point = new MFVec3f(new float[0.1,0.1,0,0.2,0.15,0]);
IndexedLineSet39.coord = Coordinate40;

Shape36.geometry = IndexedLineSet39;

HAnimSegment30.children[1] = Shape36;

let Shape41 = browser.currentScene.createNode("Shape");
let Appearance42 = browser.currentScene.createNode("Appearance");
let Material43 = browser.currentScene.createNode("Material");
Material43.emissiveColor = new SFColor(new float[1,1,1]);
Appearance42.material = Material43;

Shape41.appearance = Appearance42;

let IndexedLineSet44 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet44.DEF = "MC1toCMC1";
IndexedLineSet44.coordIndex = new MFInt32(new int[0,1]);
let Coordinate45 = browser.currentScene.createNode("Coordinate");
Coordinate45.point = new MFVec3f(new float[0.1,0.1,0,0.1,0.2,0]);
IndexedLineSet44.coord = Coordinate45;

Shape41.geometry = IndexedLineSet44;

HAnimSegment30.children[2] = Shape41;

HAnimJoint29.children = new MFNode();

HAnimJoint29.children[0] = HAnimSegment30;

//thumb finger
let HAnimJoint46 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint46.name = "l_carpometacarpal_1";
HAnimJoint46.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint46.center = new SFVec3f(new float[0.2,0.15,0]);
HAnimJoint46.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment47 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment47.name = "l_metacarpal_1";
HAnimSegment47.DEF = "hanim_l_metacarpal_1";
let Transform48 = browser.currentScene.createNode("Transform");
Transform48.translation = new SFVec3f(new float[0.2,0.15,0]);
let Shape49 = browser.currentScene.createNode("Shape");
Shape49.USE = "HAnimJointShape";
Transform48.children = new MFNode();

Transform48.children[0] = Shape49;

HAnimSegment47.children = new MFNode();

HAnimSegment47.children[0] = Transform48;

let Shape50 = browser.currentScene.createNode("Shape");
let Appearance51 = browser.currentScene.createNode("Appearance");
let Material52 = browser.currentScene.createNode("Material");
Material52.emissiveColor = new SFColor(new float[1,1,1]);
Appearance51.material = Material52;

Shape50.appearance = Appearance51;

let IndexedLineSet53 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet53.DEF = "CMC1toMCP1";
IndexedLineSet53.coordIndex = new MFInt32(new int[0,1]);
let Coordinate54 = browser.currentScene.createNode("Coordinate");
Coordinate54.point = new MFVec3f(new float[0.2,0.15,0,0.3,0.3,0]);
IndexedLineSet53.coord = Coordinate54;

Shape50.geometry = IndexedLineSet53;

HAnimSegment47.children[1] = Shape50;

HAnimJoint46.children = new MFNode();

HAnimJoint46.children[0] = HAnimSegment47;

let HAnimJoint55 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint55.name = "l_metacarpophalangeal_1";
HAnimJoint55.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint55.center = new SFVec3f(new float[0.3,0.3,0]);
HAnimJoint55.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment56 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment56.name = "l_carpal_proximal_phalanx_1";
HAnimSegment56.DEF = "hanim_l_carpal_proximal_phalanx_1";
let Transform57 = browser.currentScene.createNode("Transform");
Transform57.translation = new SFVec3f(new float[0.3,0.3,0]);
let Shape58 = browser.currentScene.createNode("Shape");
Shape58.USE = "HAnimJointShape";
Transform57.children = new MFNode();

Transform57.children[0] = Shape58;

HAnimSegment56.children = new MFNode();

HAnimSegment56.children[0] = Transform57;

let Shape59 = browser.currentScene.createNode("Shape");
let Appearance60 = browser.currentScene.createNode("Appearance");
let Material61 = browser.currentScene.createNode("Material");
Material61.emissiveColor = new SFColor(new float[1,1,1]);
Appearance60.material = Material61;

Shape59.appearance = Appearance60;

let IndexedLineSet62 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet62.DEF = "MCP11toIP1";
IndexedLineSet62.coordIndex = new MFInt32(new int[0,1]);
let Coordinate63 = browser.currentScene.createNode("Coordinate");
Coordinate63.point = new MFVec3f(new float[0.3,0.3,0,0.35,0.4,0]);
IndexedLineSet62.coord = Coordinate63;

Shape59.geometry = IndexedLineSet62;

HAnimSegment56.children[1] = Shape59;

HAnimJoint55.children = new MFNode();

HAnimJoint55.children[0] = HAnimSegment56;

let HAnimJoint64 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint64.name = "l_carpal_interphalangeal_1";
HAnimJoint64.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint64.center = new SFVec3f(new float[0.35,0.4,0]);
HAnimJoint64.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment65 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment65.name = "l_carpal_distal_phalanx_1";
HAnimSegment65.DEF = "hanim_l_carpal_distal_phalanx_1";
let Transform66 = browser.currentScene.createNode("Transform");
Transform66.translation = new SFVec3f(new float[0.35,0.4,0]);
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
IndexedLineSet71.DEF = "fingertip_l_carpal_interphalangeal_1";
IndexedLineSet71.coordIndex = new MFInt32(new int[0,1]);
let Coordinate72 = browser.currentScene.createNode("Coordinate");
Coordinate72.point = new MFVec3f(new float[0.35,0.4,0,0.36,0.45,0]);
IndexedLineSet71.coord = Coordinate72;

Shape68.geometry = IndexedLineSet71;

HAnimSegment65.children[1] = Shape68;

HAnimJoint64.children = new MFNode();

HAnimJoint64.children[0] = HAnimSegment65;

HAnimJoint55.children[1] = HAnimJoint64;

HAnimJoint46.children[1] = HAnimJoint55;

HAnimJoint29.children[1] = HAnimJoint46;

HAnimJoint7.children[1] = HAnimJoint29;

//MC2
let HAnimJoint73 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint73.name = "l_midcarpal_2";
HAnimJoint73.DEF = "hanim_l_midcarpal_2";
HAnimJoint73.center = new SFVec3f(new float[0.07,0.07,0]);
HAnimJoint73.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment74 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment74.name = "l_trapezoid";
HAnimSegment74.DEF = "hanim_l_trapezoid";
let Transform75 = browser.currentScene.createNode("Transform");
Transform75.translation = new SFVec3f(new float[0.07,0.07,0]);
let Shape76 = browser.currentScene.createNode("Shape");
Shape76.USE = "HAnimNewJointShape";
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
IndexedLineSet80.DEF = "MC2toCMC2";
IndexedLineSet80.coordIndex = new MFInt32(new int[0,1]);
let Coordinate81 = browser.currentScene.createNode("Coordinate");
Coordinate81.point = new MFVec3f(new float[-0.1,0.1,0,-0.1,0.2,0]);
IndexedLineSet80.coord = Coordinate81;

Shape77.geometry = IndexedLineSet80;

HAnimSegment74.children[1] = Shape77;

HAnimJoint73.children = new MFNode();

HAnimJoint73.children[0] = HAnimSegment74;

//index finger
let HAnimJoint82 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint82.name = "l_carpometacarpal_2";
HAnimJoint82.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint82.center = new SFVec3f(new float[0.1,0.2,0]);
HAnimJoint82.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment83 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment83.name = "l_metacarpal_2";
HAnimSegment83.DEF = "hanim_l_metacarpal_2";
let Transform84 = browser.currentScene.createNode("Transform");
Transform84.translation = new SFVec3f(new float[0.1,0.2,0]);
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
IndexedLineSet89.DEF = "CMC2toMCP2";
IndexedLineSet89.coordIndex = new MFInt32(new int[0,1]);
let Coordinate90 = browser.currentScene.createNode("Coordinate");
Coordinate90.point = new MFVec3f(new float[0.1,0.2,0,0.15,0.5,0]);
IndexedLineSet89.coord = Coordinate90;

Shape86.geometry = IndexedLineSet89;

HAnimSegment83.children[1] = Shape86;

HAnimJoint82.children = new MFNode();

HAnimJoint82.children[0] = HAnimSegment83;

let HAnimJoint91 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint91.name = "l_metacarpophalangeal_2";
HAnimJoint91.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint91.center = new SFVec3f(new float[0.15,0.5,0]);
HAnimJoint91.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment92 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment92.name = "l_carpal_proximal_phalanx_2";
HAnimSegment92.DEF = "hanim_l_carpal_proximal_phalanx_2";
let Transform93 = browser.currentScene.createNode("Transform");
Transform93.translation = new SFVec3f(new float[0.15,0.5,0]);
let Shape94 = browser.currentScene.createNode("Shape");
Shape94.USE = "HAnimJointShape";
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
IndexedLineSet98.DEF = "MCP2toPIP2";
IndexedLineSet98.coordIndex = new MFInt32(new int[0,1]);
let Coordinate99 = browser.currentScene.createNode("Coordinate");
Coordinate99.point = new MFVec3f(new float[0.15,0.5,0,0.2,0.7,0]);
IndexedLineSet98.coord = Coordinate99;

Shape95.geometry = IndexedLineSet98;

HAnimSegment92.children[1] = Shape95;

HAnimJoint91.children = new MFNode();

HAnimJoint91.children[0] = HAnimSegment92;

let HAnimJoint100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint100.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint100.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint100.center = new SFVec3f(new float[0.2,0.7,0]);
HAnimJoint100.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment101 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment101.name = "l_carpal_middle_phalanx_2";
HAnimSegment101.DEF = "hanim_l_carpal_middle_phalanx_2";
let Transform102 = browser.currentScene.createNode("Transform");
Transform102.translation = new SFVec3f(new float[0.2,0.7,0]);
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
IndexedLineSet107.DEF = "PIP2toDIP2";
IndexedLineSet107.coordIndex = new MFInt32(new int[0,1]);
let Coordinate108 = browser.currentScene.createNode("Coordinate");
Coordinate108.point = new MFVec3f(new float[0.2,0.7,0,0.24,0.87,0]);
IndexedLineSet107.coord = Coordinate108;

Shape104.geometry = IndexedLineSet107;

HAnimSegment101.children[1] = Shape104;

HAnimJoint100.children = new MFNode();

HAnimJoint100.children[0] = HAnimSegment101;

let HAnimJoint109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint109.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint109.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint109.center = new SFVec3f(new float[0.24,0.87,0]);
HAnimJoint109.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment110 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment110.name = "l_carpal_distal_phalanx_2";
HAnimSegment110.DEF = "hanim_l_carpal_distal_phalanx_2";
let Transform111 = browser.currentScene.createNode("Transform");
Transform111.translation = new SFVec3f(new float[0.24,0.87,0]);
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
IndexedLineSet116.DEF = "fingertip_l_carpal_distal_interphalangeal_2";
IndexedLineSet116.coordIndex = new MFInt32(new int[0,1]);
let Coordinate117 = browser.currentScene.createNode("Coordinate");
Coordinate117.point = new MFVec3f(new float[0.24,0.87,0,0.26,0.93,0]);
IndexedLineSet116.coord = Coordinate117;

Shape113.geometry = IndexedLineSet116;

HAnimSegment110.children[1] = Shape113;

HAnimJoint109.children = new MFNode();

HAnimJoint109.children[0] = HAnimSegment110;

HAnimJoint100.children[1] = HAnimJoint109;

HAnimJoint91.children[1] = HAnimJoint100;

HAnimJoint82.children[1] = HAnimJoint91;

HAnimJoint73.children[1] = HAnimJoint82;

HAnimJoint7.children[2] = HAnimJoint73;

//MC3
let HAnimJoint118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint118.name = "l_midcarpal_3";
HAnimJoint118.DEF = "hanim_l_midcarpal_3";
HAnimJoint118.center = new SFVec3f(new float[0,0.07,0]);
HAnimJoint118.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment119 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment119.name = "l_capitate";
HAnimSegment119.DEF = "hanim_l_capitate";
let Transform120 = browser.currentScene.createNode("Transform");
Transform120.translation = new SFVec3f(new float[0,0.07,0]);
let Shape121 = browser.currentScene.createNode("Shape");
Shape121.USE = "HAnimNewJointShape";
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
IndexedLineSet125.DEF = "MC3toCMC3";
IndexedLineSet125.coordIndex = new MFInt32(new int[0,1]);
let Coordinate126 = browser.currentScene.createNode("Coordinate");
Coordinate126.point = new MFVec3f(new float[0,0.07,0,0,0.2,0]);
IndexedLineSet125.coord = Coordinate126;

Shape122.geometry = IndexedLineSet125;

HAnimSegment119.children[1] = Shape122;

HAnimJoint118.children = new MFNode();

HAnimJoint118.children[0] = HAnimSegment119;

//Middle fingle
let HAnimJoint127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint127.name = "l_carpometacarpal_3";
HAnimJoint127.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint127.center = new SFVec3f(new float[0,0.2,0]);
HAnimJoint127.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment128 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment128.name = "l_metacarpal_3";
HAnimSegment128.DEF = "hanim_l_metacarpal_3";
let Transform129 = browser.currentScene.createNode("Transform");
Transform129.translation = new SFVec3f(new float[0,0.2,0]);
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
IndexedLineSet134.DEF = "CMC3toMCP3";
IndexedLineSet134.coordIndex = new MFInt32(new int[0,1]);
let Coordinate135 = browser.currentScene.createNode("Coordinate");
Coordinate135.point = new MFVec3f(new float[0,0.2,0,0.03,0.5,0]);
IndexedLineSet134.coord = Coordinate135;

Shape131.geometry = IndexedLineSet134;

HAnimSegment128.children[1] = Shape131;

HAnimJoint127.children = new MFNode();

HAnimJoint127.children[0] = HAnimSegment128;

let HAnimJoint136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint136.name = "l_metacarpophalangeal_3";
HAnimJoint136.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint136.center = new SFVec3f(new float[0.03,0.5,0]);
HAnimJoint136.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment137 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment137.name = "l_carpal_proximal_phalanx_3";
HAnimSegment137.DEF = "hanim_l_carpal_proximal_phalanx_3";
let Transform138 = browser.currentScene.createNode("Transform");
Transform138.translation = new SFVec3f(new float[0.03,0.5,0]);
let Shape139 = browser.currentScene.createNode("Shape");
Shape139.USE = "HAnimJointShape";
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
IndexedLineSet143.DEF = "MCP3toPIP3";
IndexedLineSet143.coordIndex = new MFInt32(new int[0,1]);
let Coordinate144 = browser.currentScene.createNode("Coordinate");
Coordinate144.point = new MFVec3f(new float[0.03,0.5,0,0.05,0.75,0]);
IndexedLineSet143.coord = Coordinate144;

Shape140.geometry = IndexedLineSet143;

HAnimSegment137.children[1] = Shape140;

HAnimJoint136.children = new MFNode();

HAnimJoint136.children[0] = HAnimSegment137;

let HAnimJoint145 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint145.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint145.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint145.center = new SFVec3f(new float[0.05,0.75,0]);
HAnimJoint145.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment146 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment146.name = "l_carpal_middle_phalanx_3";
HAnimSegment146.DEF = "hanim_l_carpal_middle_phalanx_3";
let Transform147 = browser.currentScene.createNode("Transform");
Transform147.translation = new SFVec3f(new float[0.05,0.75,0]);
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
IndexedLineSet152.DEF = "PIP3toDIP3";
IndexedLineSet152.coordIndex = new MFInt32(new int[0,1]);
let Coordinate153 = browser.currentScene.createNode("Coordinate");
Coordinate153.point = new MFVec3f(new float[0.05,0.75,0,0.08,0.96,0]);
IndexedLineSet152.coord = Coordinate153;

Shape149.geometry = IndexedLineSet152;

HAnimSegment146.children[1] = Shape149;

HAnimJoint145.children = new MFNode();

HAnimJoint145.children[0] = HAnimSegment146;

let HAnimJoint154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint154.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint154.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint154.center = new SFVec3f(new float[0.08,0.96,0]);
HAnimJoint154.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment155 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment155.name = "l_carpal_distal_phalanx_3";
HAnimSegment155.DEF = "hanim_l_carpal_distal_phalanx_3";
let Transform156 = browser.currentScene.createNode("Transform");
Transform156.translation = new SFVec3f(new float[0.08,0.96,0]);
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
IndexedLineSet161.DEF = "fingertip_l_carpal_distal_interphalangeal_3";
IndexedLineSet161.coordIndex = new MFInt32(new int[0,1]);
let Coordinate162 = browser.currentScene.createNode("Coordinate");
Coordinate162.point = new MFVec3f(new float[0.08,0.96,0,0.09,1.05,0]);
IndexedLineSet161.coord = Coordinate162;

Shape158.geometry = IndexedLineSet161;

HAnimSegment155.children[1] = Shape158;

HAnimJoint154.children = new MFNode();

HAnimJoint154.children[0] = HAnimSegment155;

HAnimJoint145.children[1] = HAnimJoint154;

HAnimJoint136.children[1] = HAnimJoint145;

HAnimJoint127.children[1] = HAnimJoint136;

HAnimJoint118.children[1] = HAnimJoint127;

HAnimJoint7.children[3] = HAnimJoint118;

//MC45
let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.name = "l_midcarpal_4_5";
HAnimJoint163.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint163.center = new SFVec3f(new float[-0.1,0.1,0]);
HAnimJoint163.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment164 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment164.name = "l_hamate";
HAnimSegment164.DEF = "hanim_l_hamate";
let Transform165 = browser.currentScene.createNode("Transform");
Transform165.translation = new SFVec3f(new float[-0.1,0.1,0]);
let Shape166 = browser.currentScene.createNode("Shape");
Shape166.USE = "HAnimNewJointShape";
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
IndexedLineSet170.DEF = "MC45toCMC4";
IndexedLineSet170.coordIndex = new MFInt32(new int[0,1]);
let Coordinate171 = browser.currentScene.createNode("Coordinate");
Coordinate171.point = new MFVec3f(new float[-0.1,0.1,0,-0.1,0.2,0]);
IndexedLineSet170.coord = Coordinate171;

Shape167.geometry = IndexedLineSet170;

HAnimSegment164.children[1] = Shape167;

let Shape172 = browser.currentScene.createNode("Shape");
let Appearance173 = browser.currentScene.createNode("Appearance");
let Material174 = browser.currentScene.createNode("Material");
Material174.emissiveColor = new SFColor(new float[1,1,1]);
Appearance173.material = Material174;

Shape172.appearance = Appearance173;

let IndexedLineSet175 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet175.DEF = "MC45toCMC5";
IndexedLineSet175.coordIndex = new MFInt32(new int[0,1]);
let Coordinate176 = browser.currentScene.createNode("Coordinate");
Coordinate176.point = new MFVec3f(new float[-0.1,0.1,0,-0.15,0.17,0]);
IndexedLineSet175.coord = Coordinate176;

Shape172.geometry = IndexedLineSet175;

HAnimSegment164.children[2] = Shape172;

HAnimJoint163.children = new MFNode();

HAnimJoint163.children[0] = HAnimSegment164;

//ring finger
let HAnimJoint177 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint177.name = "l_carpometacarpal_4";
HAnimJoint177.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint177.center = new SFVec3f(new float[-0.1,0.2,0]);
HAnimJoint177.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment178 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment178.name = "l_metacarpal_4";
HAnimSegment178.DEF = "hanim_l_metacarpal_4";
let Transform179 = browser.currentScene.createNode("Transform");
Transform179.translation = new SFVec3f(new float[-0.1,0.2,0]);
let Shape180 = browser.currentScene.createNode("Shape");
Shape180.USE = "HAnimJointShape";
Transform179.children = new MFNode();

Transform179.children[0] = Shape180;

HAnimSegment178.children = new MFNode();

HAnimSegment178.children[0] = Transform179;

let Shape181 = browser.currentScene.createNode("Shape");
let Appearance182 = browser.currentScene.createNode("Appearance");
let Material183 = browser.currentScene.createNode("Material");
Material183.emissiveColor = new SFColor(new float[1,1,1]);
Appearance182.material = Material183;

Shape181.appearance = Appearance182;

let IndexedLineSet184 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet184.DEF = "CMC4toMCP4";
IndexedLineSet184.coordIndex = new MFInt32(new int[0,1]);
let Coordinate185 = browser.currentScene.createNode("Coordinate");
Coordinate185.point = new MFVec3f(new float[-0.1,0.2,0,-0.1,0.47,0]);
IndexedLineSet184.coord = Coordinate185;

Shape181.geometry = IndexedLineSet184;

HAnimSegment178.children[1] = Shape181;

HAnimJoint177.children = new MFNode();

HAnimJoint177.children[0] = HAnimSegment178;

let HAnimJoint186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint186.name = "l_metacarpophalangeal_4";
HAnimJoint186.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint186.center = new SFVec3f(new float[-0.1,0.47,0]);
HAnimJoint186.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment187 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment187.name = "l_carpal_proximal_phalanx_4";
HAnimSegment187.DEF = "hanim_l_carpal_proximal_phalanx_4";
let Transform188 = browser.currentScene.createNode("Transform");
Transform188.translation = new SFVec3f(new float[-0.1,0.47,0]);
let Shape189 = browser.currentScene.createNode("Shape");
Shape189.USE = "HAnimJointShape";
Transform188.children = new MFNode();

Transform188.children[0] = Shape189;

HAnimSegment187.children = new MFNode();

HAnimSegment187.children[0] = Transform188;

let Shape190 = browser.currentScene.createNode("Shape");
let Appearance191 = browser.currentScene.createNode("Appearance");
let Material192 = browser.currentScene.createNode("Material");
Material192.emissiveColor = new SFColor(new float[1,1,1]);
Appearance191.material = Material192;

Shape190.appearance = Appearance191;

let IndexedLineSet193 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet193.DEF = "MCP4toPIP4";
IndexedLineSet193.coordIndex = new MFInt32(new int[0,1]);
let Coordinate194 = browser.currentScene.createNode("Coordinate");
Coordinate194.point = new MFVec3f(new float[-0.1,0.47,0,-0.1,0.7,0]);
IndexedLineSet193.coord = Coordinate194;

Shape190.geometry = IndexedLineSet193;

HAnimSegment187.children[1] = Shape190;

HAnimJoint186.children = new MFNode();

HAnimJoint186.children[0] = HAnimSegment187;

let HAnimJoint195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint195.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint195.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint195.center = new SFVec3f(new float[-0.1,0.7,0]);
HAnimJoint195.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment196 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment196.name = "l_carpal_middle_phalanx_4";
HAnimSegment196.DEF = "hanim_l_carpal_middle_phalanx_4";
let Transform197 = browser.currentScene.createNode("Transform");
Transform197.translation = new SFVec3f(new float[-0.1,0.7,0]);
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
IndexedLineSet202.DEF = "PIP4toDIP4";
IndexedLineSet202.coordIndex = new MFInt32(new int[0,1]);
let Coordinate203 = browser.currentScene.createNode("Coordinate");
Coordinate203.point = new MFVec3f(new float[-0.1,0.7,0,-0.1,0.93,0]);
IndexedLineSet202.coord = Coordinate203;

Shape199.geometry = IndexedLineSet202;

HAnimSegment196.children[1] = Shape199;

HAnimJoint195.children = new MFNode();

HAnimJoint195.children[0] = HAnimSegment196;

let HAnimJoint204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint204.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint204.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint204.center = new SFVec3f(new float[-0.1,0.93,0]);
HAnimJoint204.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment205 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment205.name = "l_carpal_distal_phalanx_4";
HAnimSegment205.DEF = "hanim_l_carpal_distal_phalanx_4";
let Transform206 = browser.currentScene.createNode("Transform");
Transform206.translation = new SFVec3f(new float[-0.1,0.93,0]);
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
IndexedLineSet211.DEF = "fingertip_l_carpal_distal_interphalangeal_4";
IndexedLineSet211.coordIndex = new MFInt32(new int[0,1]);
let Coordinate212 = browser.currentScene.createNode("Coordinate");
Coordinate212.point = new MFVec3f(new float[-0.1,0.93,0,-0.1,1,0]);
IndexedLineSet211.coord = Coordinate212;

Shape208.geometry = IndexedLineSet211;

HAnimSegment205.children[1] = Shape208;

HAnimJoint204.children = new MFNode();

HAnimJoint204.children[0] = HAnimSegment205;

HAnimJoint195.children[1] = HAnimJoint204;

HAnimJoint186.children[1] = HAnimJoint195;

HAnimJoint177.children[1] = HAnimJoint186;

HAnimJoint163.children[1] = HAnimJoint177;

//pinky finger
let HAnimJoint213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint213.name = "l_carpometacarpal_5";
HAnimJoint213.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint213.center = new SFVec3f(new float[-0.15,0.17,0]);
HAnimJoint213.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment214 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment214.name = "l_metacarpal_5";
HAnimSegment214.DEF = "hanim_l_metacarpal_5";
let Transform215 = browser.currentScene.createNode("Transform");
Transform215.translation = new SFVec3f(new float[-0.15,0.17,0]);
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
IndexedLineSet220.DEF = "CMC5toMCP5";
IndexedLineSet220.coordIndex = new MFInt32(new int[0,1]);
let Coordinate221 = browser.currentScene.createNode("Coordinate");
Coordinate221.point = new MFVec3f(new float[-0.15,0.17,0,-0.2,0.4,0]);
IndexedLineSet220.coord = Coordinate221;

Shape217.geometry = IndexedLineSet220;

HAnimSegment214.children[1] = Shape217;

HAnimJoint213.children = new MFNode();

HAnimJoint213.children[0] = HAnimSegment214;

let HAnimJoint222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint222.name = "l_metacarpophalangeal_5";
HAnimJoint222.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint222.center = new SFVec3f(new float[-0.2,0.4,0]);
HAnimJoint222.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment223 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment223.name = "l_carpal_proximal_phalanx_5";
HAnimSegment223.DEF = "hanim_l_carpal_proximal_phalanx_5";
let Transform224 = browser.currentScene.createNode("Transform");
Transform224.translation = new SFVec3f(new float[-0.2,0.4,0]);
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
IndexedLineSet229.DEF = "MCP5toPIP5";
IndexedLineSet229.coordIndex = new MFInt32(new int[0,1]);
let Coordinate230 = browser.currentScene.createNode("Coordinate");
Coordinate230.point = new MFVec3f(new float[-0.2,0.4,0,-0.23,0.63,0]);
IndexedLineSet229.coord = Coordinate230;

Shape226.geometry = IndexedLineSet229;

HAnimSegment223.children[1] = Shape226;

HAnimJoint222.children = new MFNode();

HAnimJoint222.children[0] = HAnimSegment223;

let HAnimJoint231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint231.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint231.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint231.center = new SFVec3f(new float[-0.23,0.63,0]);
HAnimJoint231.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment232 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment232.name = "l_carpal_middle_phalanx_5";
HAnimSegment232.DEF = "hanim_l_carpal_middle_phalanx_5";
let Transform233 = browser.currentScene.createNode("Transform");
Transform233.translation = new SFVec3f(new float[-0.23,0.63,0]);
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
IndexedLineSet238.DEF = "PIP5toDIP5";
IndexedLineSet238.coordIndex = new MFInt32(new int[0,1]);
let Coordinate239 = browser.currentScene.createNode("Coordinate");
Coordinate239.point = new MFVec3f(new float[-0.23,0.63,0,-0.25,0.79,0]);
IndexedLineSet238.coord = Coordinate239;

Shape235.geometry = IndexedLineSet238;

HAnimSegment232.children[1] = Shape235;

HAnimJoint231.children = new MFNode();

HAnimJoint231.children[0] = HAnimSegment232;

let HAnimJoint240 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint240.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint240.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint240.center = new SFVec3f(new float[-0.25,0.79,0]);
HAnimJoint240.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment241 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment241.name = "l_carpal_distal_phalanx_5";
HAnimSegment241.DEF = "hanim_l_carpal_distal_phalanx_5";
let Transform242 = browser.currentScene.createNode("Transform");
Transform242.translation = new SFVec3f(new float[-0.25,0.79,0]);
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
IndexedLineSet247.DEF = "fingertip_l_carpal_distal_interphalangeal_5";
IndexedLineSet247.coordIndex = new MFInt32(new int[0,1]);
let Coordinate248 = browser.currentScene.createNode("Coordinate");
Coordinate248.point = new MFVec3f(new float[-0.25,0.79,0,-0.26,0.85,0]);
IndexedLineSet247.coord = Coordinate248;

Shape244.geometry = IndexedLineSet247;

HAnimSegment241.children[1] = Shape244;

HAnimJoint240.children = new MFNode();

HAnimJoint240.children[0] = HAnimSegment241;

HAnimJoint231.children[1] = HAnimJoint240;

HAnimJoint222.children[1] = HAnimJoint231;

HAnimJoint213.children[1] = HAnimJoint222;

HAnimJoint163.children[2] = HAnimJoint213;

HAnimJoint7.children[4] = HAnimJoint163;

HAnimJoint6.children = new MFNode();

HAnimJoint6.children[0] = HAnimJoint7;

HAnimHumanoid3.joints = new MFNode();

HAnimHumanoid3.joints[0] = HAnimJoint6;

let HAnimJoint249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint249.USE = "hanim_humanoid_root";
HAnimHumanoid3.joints[1] = HAnimJoint249;

let HAnimJoint250 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint250.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid3.joints[2] = HAnimJoint250;

let HAnimJoint251 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint251.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid3.joints[3] = HAnimJoint251;

let HAnimJoint252 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint252.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid3.joints[4] = HAnimJoint252;

let HAnimJoint253 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint253.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid3.joints[5] = HAnimJoint253;

let HAnimJoint254 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint254.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid3.joints[6] = HAnimJoint254;

let HAnimJoint255 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint255.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid3.joints[7] = HAnimJoint255;

let HAnimJoint256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint256.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid3.joints[8] = HAnimJoint256;

let HAnimJoint257 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint257.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid3.joints[9] = HAnimJoint257;

let HAnimJoint258 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint258.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid3.joints[10] = HAnimJoint258;

let HAnimJoint259 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint259.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid3.joints[11] = HAnimJoint259;

let HAnimJoint260 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint260.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid3.joints[12] = HAnimJoint260;

let HAnimJoint261 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint261.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid3.joints[13] = HAnimJoint261;

let HAnimJoint262 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint262.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid3.joints[14] = HAnimJoint262;

let HAnimJoint263 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint263.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid3.joints[15] = HAnimJoint263;

let HAnimJoint264 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint264.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid3.joints[16] = HAnimJoint264;

let HAnimJoint265 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint265.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid3.joints[17] = HAnimJoint265;

let HAnimJoint266 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint266.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid3.joints[18] = HAnimJoint266;

let HAnimJoint267 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint267.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid3.joints[19] = HAnimJoint267;

let HAnimJoint268 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint268.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid3.joints[20] = HAnimJoint268;

let HAnimJoint269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint269.USE = "hanim_l_midcarpal_1";
HAnimHumanoid3.joints[21] = HAnimJoint269;

let HAnimJoint270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint270.USE = "hanim_l_midcarpal_2";
HAnimHumanoid3.joints[22] = HAnimJoint270;

let HAnimJoint271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint271.USE = "hanim_l_midcarpal_3";
HAnimHumanoid3.joints[23] = HAnimJoint271;

let HAnimJoint272 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint272.USE = "hanim_l_midcarpal_4_5";
HAnimHumanoid3.joints[24] = HAnimJoint272;

let HAnimJoint273 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint273.USE = "hanim_l_radiocarpal";
HAnimHumanoid3.joints[25] = HAnimJoint273;

let HAnimSegment274 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment274.USE = "hanim_l_capitate";
HAnimHumanoid3.segments[26] = HAnimSegment274;

let HAnimSegment275 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment275.USE = "hanim_l_carpal";
HAnimHumanoid3.segments[27] = HAnimSegment275;

let HAnimSegment276 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment276.USE = "hanim_l_carpal_distal_phalanx_1";
HAnimHumanoid3.segments[28] = HAnimSegment276;

let HAnimSegment277 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment277.USE = "hanim_l_carpal_distal_phalanx_2";
HAnimHumanoid3.segments[29] = HAnimSegment277;

let HAnimSegment278 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment278.USE = "hanim_l_carpal_distal_phalanx_3";
HAnimHumanoid3.segments[30] = HAnimSegment278;

let HAnimSegment279 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment279.USE = "hanim_l_carpal_distal_phalanx_4";
HAnimHumanoid3.segments[31] = HAnimSegment279;

let HAnimSegment280 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment280.USE = "hanim_l_carpal_distal_phalanx_5";
HAnimHumanoid3.segments[32] = HAnimSegment280;

let HAnimSegment281 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment281.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid3.segments[33] = HAnimSegment281;

let HAnimSegment282 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment282.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid3.segments[34] = HAnimSegment282;

let HAnimSegment283 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment283.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid3.segments[35] = HAnimSegment283;

let HAnimSegment284 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment284.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid3.segments[36] = HAnimSegment284;

let HAnimSegment285 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment285.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid3.segments[37] = HAnimSegment285;

let HAnimSegment286 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment286.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid3.segments[38] = HAnimSegment286;

let HAnimSegment287 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment287.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid3.segments[39] = HAnimSegment287;

let HAnimSegment288 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment288.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid3.segments[40] = HAnimSegment288;

let HAnimSegment289 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment289.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid3.segments[41] = HAnimSegment289;

let HAnimSegment290 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment290.USE = "hanim_l_hamate";
HAnimHumanoid3.segments[42] = HAnimSegment290;

let HAnimSegment291 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment291.USE = "hanim_l_metacarpal_1";
HAnimHumanoid3.segments[43] = HAnimSegment291;

let HAnimSegment292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment292.USE = "hanim_l_metacarpal_2";
HAnimHumanoid3.segments[44] = HAnimSegment292;

let HAnimSegment293 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment293.USE = "hanim_l_metacarpal_3";
HAnimHumanoid3.segments[45] = HAnimSegment293;

let HAnimSegment294 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment294.USE = "hanim_l_metacarpal_4";
HAnimHumanoid3.segments[46] = HAnimSegment294;

let HAnimSegment295 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment295.USE = "hanim_l_metacarpal_5";
HAnimHumanoid3.segments[47] = HAnimSegment295;

let HAnimSegment296 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment296.USE = "hanim_l_trapezium";
HAnimHumanoid3.segments[48] = HAnimSegment296;

let HAnimSegment297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment297.USE = "hanim_l_trapezoid";
HAnimHumanoid3.segments[49] = HAnimSegment297;

browser.currentScene.children[1] = HAnimHumanoid3;


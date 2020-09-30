let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "HAnimModelHandLeft.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let HAnimHumanoid3 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid3.name = "Humanoid_Left_hand";
HAnimHumanoid3.DEF = "Humanoid_Left_hand";
HAnimHumanoid3.version = "2.0";
HAnimHumanoid3.bboxDisplay = False;
HAnimHumanoid3.visible = True;
let HAnimJoint4 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint4.name = "humanoid_root";
HAnimJoint4.DEF = "hanim_HumanoidRoot";
HAnimJoint4.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint4.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint4.bboxDisplay = False;
HAnimJoint4.visible = True;
let HAnimJoint5 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint5.name = "l_radiocarpal_joint";
HAnimJoint5.DEF = "l_radiocarpal_joint";
HAnimJoint5.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint5.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint5.bboxDisplay = False;
HAnimJoint5.visible = True;
let HAnimSegment6 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment6.name = "l_wrist";
HAnimSegment6.DEF = "l_wrist";
HAnimSegment6.bboxDisplay = False;
HAnimSegment6.visible = True;
let Transform7 = browser.currentScene.createNode("Transform");
Transform7.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform7.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform7.bboxDisplay = False;
Transform7.visible = True;
let Shape8 = browser.currentScene.createNode("Shape");
Shape8.DEF = "HAnimJointShape";
Shape8.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape8.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape8.bboxDisplay = False;
Shape8.visible = True;
let Sphere9 = browser.currentScene.createNode("Sphere");
Sphere9.radius = 0.025;
Shape8.geometry = Sphere9;

let Appearance10 = browser.currentScene.createNode("Appearance");
Appearance10.DEF = "HAnimJointAppearanceBlue";
let Material11 = browser.currentScene.createNode("Material");
Material11.diffuseColor = new SFColor(new float[0,0,1]);
Appearance10.material = Material11;

Shape8.appearance = Appearance10;

Transform7.children = new MFNode();

Transform7.children[0] = Shape8;

HAnimSegment6.children = new MFNode();

HAnimSegment6.children[0] = Transform7;

let Shape12 = browser.currentScene.createNode("Shape");
Shape12.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape12.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape12.bboxDisplay = False;
Shape12.visible = True;
let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
Material14.emissiveColor = new SFColor(new float[1,1,1]);
Appearance13.material = Material14;

Shape12.appearance = Appearance13;

let IndexedLineSet15 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet15.DEF = "RCToMC12";
IndexedLineSet15.coordIndex = new MFInt32(new int[0,1]);
let Coordinate16 = browser.currentScene.createNode("Coordinate");
Coordinate16.point = new MFVec3f(new float[0,0,0,0.1,0.1,0]);
IndexedLineSet15.coord = Coordinate16;

Shape12.geometry = IndexedLineSet15;

HAnimSegment6.children[1] = Shape12;

let Shape17 = browser.currentScene.createNode("Shape");
Shape17.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape17.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape17.bboxDisplay = False;
Shape17.visible = True;
let Appearance18 = browser.currentScene.createNode("Appearance");
let Material19 = browser.currentScene.createNode("Material");
Material19.emissiveColor = new SFColor(new float[1,1,1]);
Appearance18.material = Material19;

Shape17.appearance = Appearance18;

let IndexedLineSet20 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet20.DEF = "RCToMC3";
IndexedLineSet20.coordIndex = new MFInt32(new int[0,1]);
let Coordinate21 = browser.currentScene.createNode("Coordinate");
Coordinate21.point = new MFVec3f(new float[0,0,0,0,0.07,0]);
IndexedLineSet20.coord = Coordinate21;

Shape17.geometry = IndexedLineSet20;

HAnimSegment6.children[2] = Shape17;

let Shape22 = browser.currentScene.createNode("Shape");
Shape22.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape22.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape22.bboxDisplay = False;
Shape22.visible = True;
let Appearance23 = browser.currentScene.createNode("Appearance");
let Material24 = browser.currentScene.createNode("Material");
Material24.emissiveColor = new SFColor(new float[1,1,1]);
Appearance23.material = Material24;

Shape22.appearance = Appearance23;

let IndexedLineSet25 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet25.DEF = "RCToMC45";
IndexedLineSet25.coordIndex = new MFInt32(new int[0,1]);
let Coordinate26 = browser.currentScene.createNode("Coordinate");
Coordinate26.point = new MFVec3f(new float[0,0,0,-0.1,0.1,0]);
IndexedLineSet25.coord = Coordinate26;

Shape22.geometry = IndexedLineSet25;

HAnimSegment6.children[3] = Shape22;

HAnimJoint5.children = new MFNode();

HAnimJoint5.children[0] = HAnimSegment6;

//MC12
let HAnimJoint27 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint27.name = "l_midcarpal_joint_12";
HAnimJoint27.DEF = "l_midcarpal_joint_12";
HAnimJoint27.center = new SFVec3f(new float[0.1,0.1,0]);
HAnimJoint27.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint27.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint27.bboxDisplay = False;
HAnimJoint27.visible = True;
let HAnimSegment28 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment28.name = "l_trapezoid";
HAnimSegment28.DEF = "l_trapezoid";
HAnimSegment28.bboxDisplay = False;
HAnimSegment28.visible = True;
let Transform29 = browser.currentScene.createNode("Transform");
Transform29.translation = new SFVec3f(new float[0.1,0.1,0]);
Transform29.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform29.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform29.bboxDisplay = False;
Transform29.visible = True;
let Shape30 = browser.currentScene.createNode("Shape");
Shape30.DEF = "HAnimNewJointShape";
Shape30.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape30.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape30.bboxDisplay = False;
Shape30.visible = True;
let Sphere31 = browser.currentScene.createNode("Sphere");
Sphere31.radius = 0.025;
Shape30.geometry = Sphere31;

let Appearance32 = browser.currentScene.createNode("Appearance");
Appearance32.DEF = "HAnimJointAppearanceRed";
let Material33 = browser.currentScene.createNode("Material");
Material33.diffuseColor = new SFColor(new float[1,0,0]);
Appearance32.material = Material33;

Shape30.appearance = Appearance32;

Transform29.children = new MFNode();

Transform29.children[0] = Shape30;

HAnimSegment28.children = new MFNode();

HAnimSegment28.children[0] = Transform29;

let Shape34 = browser.currentScene.createNode("Shape");
Shape34.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape34.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape34.bboxDisplay = False;
Shape34.visible = True;
let Appearance35 = browser.currentScene.createNode("Appearance");
let Material36 = browser.currentScene.createNode("Material");
Material36.emissiveColor = new SFColor(new float[1,1,1]);
Appearance35.material = Material36;

Shape34.appearance = Appearance35;

let IndexedLineSet37 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet37.DEF = "MC12toCMC1";
IndexedLineSet37.coordIndex = new MFInt32(new int[0,1]);
let Coordinate38 = browser.currentScene.createNode("Coordinate");
Coordinate38.point = new MFVec3f(new float[0.1,0.1,0,0.2,0.15,0]);
IndexedLineSet37.coord = Coordinate38;

Shape34.geometry = IndexedLineSet37;

HAnimSegment28.children[1] = Shape34;

let Shape39 = browser.currentScene.createNode("Shape");
Shape39.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape39.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape39.bboxDisplay = False;
Shape39.visible = True;
let Appearance40 = browser.currentScene.createNode("Appearance");
let Material41 = browser.currentScene.createNode("Material");
Material41.emissiveColor = new SFColor(new float[1,1,1]);
Appearance40.material = Material41;

Shape39.appearance = Appearance40;

let IndexedLineSet42 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet42.DEF = "MC12toCMC2";
IndexedLineSet42.coordIndex = new MFInt32(new int[0,1]);
let Coordinate43 = browser.currentScene.createNode("Coordinate");
Coordinate43.point = new MFVec3f(new float[0.1,0.1,0,0.1,0.2,0]);
IndexedLineSet42.coord = Coordinate43;

Shape39.geometry = IndexedLineSet42;

HAnimSegment28.children[2] = Shape39;

HAnimJoint27.children = new MFNode();

HAnimJoint27.children[0] = HAnimSegment28;

//thumb finger
let HAnimJoint44 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint44.name = "l_carpometacarpal_joint_1";
HAnimJoint44.DEF = "l_carpometacarpal_joint_1";
HAnimJoint44.center = new SFVec3f(new float[0.2,0.15,0]);
HAnimJoint44.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint44.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint44.bboxDisplay = False;
HAnimJoint44.visible = True;
let HAnimSegment45 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment45.name = "l_metacarpal_1";
HAnimSegment45.DEF = "l_metacarpal_1";
HAnimSegment45.bboxDisplay = False;
HAnimSegment45.visible = True;
let Transform46 = browser.currentScene.createNode("Transform");
Transform46.translation = new SFVec3f(new float[0.2,0.15,0]);
Transform46.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform46.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform46.bboxDisplay = False;
Transform46.visible = True;
let Shape47 = browser.currentScene.createNode("Shape");
Shape47.USE = "HAnimJointShape";
Transform46.children = new MFNode();

Transform46.children[0] = Shape47;

HAnimSegment45.children = new MFNode();

HAnimSegment45.children[0] = Transform46;

let Shape48 = browser.currentScene.createNode("Shape");
Shape48.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape48.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape48.bboxDisplay = False;
Shape48.visible = True;
let Appearance49 = browser.currentScene.createNode("Appearance");
let Material50 = browser.currentScene.createNode("Material");
Material50.emissiveColor = new SFColor(new float[1,1,1]);
Appearance49.material = Material50;

Shape48.appearance = Appearance49;

let IndexedLineSet51 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet51.DEF = "CMC1toMCP1";
IndexedLineSet51.coordIndex = new MFInt32(new int[0,1]);
let Coordinate52 = browser.currentScene.createNode("Coordinate");
Coordinate52.point = new MFVec3f(new float[0.2,0.15,0,0.3,0.3,0]);
IndexedLineSet51.coord = Coordinate52;

Shape48.geometry = IndexedLineSet51;

HAnimSegment45.children[1] = Shape48;

HAnimJoint44.children = new MFNode();

HAnimJoint44.children[0] = HAnimSegment45;

let HAnimJoint53 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint53.name = "l_metacarpophalangeal_joint_1";
HAnimJoint53.DEF = "l_metacarpophalangeal_joint_1";
HAnimJoint53.center = new SFVec3f(new float[0.3,0.3,0]);
HAnimJoint53.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint53.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint53.bboxDisplay = False;
HAnimJoint53.visible = True;
let HAnimSegment54 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment54.name = "l_proximal_phalanges1";
HAnimSegment54.DEF = "l_proximal_phalanges1";
HAnimSegment54.bboxDisplay = False;
HAnimSegment54.visible = True;
let Transform55 = browser.currentScene.createNode("Transform");
Transform55.translation = new SFVec3f(new float[0.3,0.3,0]);
Transform55.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform55.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform55.bboxDisplay = False;
Transform55.visible = True;
let Shape56 = browser.currentScene.createNode("Shape");
Shape56.USE = "HAnimJointShape";
Transform55.children = new MFNode();

Transform55.children[0] = Shape56;

HAnimSegment54.children = new MFNode();

HAnimSegment54.children[0] = Transform55;

let Shape57 = browser.currentScene.createNode("Shape");
Shape57.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape57.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape57.bboxDisplay = False;
Shape57.visible = True;
let Appearance58 = browser.currentScene.createNode("Appearance");
let Material59 = browser.currentScene.createNode("Material");
Material59.emissiveColor = new SFColor(new float[1,1,1]);
Appearance58.material = Material59;

Shape57.appearance = Appearance58;

let IndexedLineSet60 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet60.DEF = "MCP11toIP1";
IndexedLineSet60.coordIndex = new MFInt32(new int[0,1]);
let Coordinate61 = browser.currentScene.createNode("Coordinate");
Coordinate61.point = new MFVec3f(new float[0.3,0.3,0,0.35,0.4,0]);
IndexedLineSet60.coord = Coordinate61;

Shape57.geometry = IndexedLineSet60;

HAnimSegment54.children[1] = Shape57;

HAnimJoint53.children = new MFNode();

HAnimJoint53.children[0] = HAnimSegment54;

let HAnimJoint62 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint62.name = "l_interphalangeal_joint_1";
HAnimJoint62.DEF = "l_interphalangeal_joint_1";
HAnimJoint62.center = new SFVec3f(new float[0.35,0.4,0]);
HAnimJoint62.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint62.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint62.bboxDisplay = False;
HAnimJoint62.visible = True;
let HAnimSegment63 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment63.name = "l_distal_phalanges1";
HAnimSegment63.DEF = "l_distal_phalanges1";
HAnimSegment63.bboxDisplay = False;
HAnimSegment63.visible = True;
let Transform64 = browser.currentScene.createNode("Transform");
Transform64.translation = new SFVec3f(new float[0.35,0.4,0]);
Transform64.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform64.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform64.bboxDisplay = False;
Transform64.visible = True;
let Shape65 = browser.currentScene.createNode("Shape");
Shape65.USE = "HAnimJointShape";
Transform64.children = new MFNode();

Transform64.children[0] = Shape65;

HAnimSegment63.children = new MFNode();

HAnimSegment63.children[0] = Transform64;

let Shape66 = browser.currentScene.createNode("Shape");
Shape66.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape66.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape66.bboxDisplay = False;
Shape66.visible = True;
let Appearance67 = browser.currentScene.createNode("Appearance");
let Material68 = browser.currentScene.createNode("Material");
Material68.emissiveColor = new SFColor(new float[1,1,1]);
Appearance67.material = Material68;

Shape66.appearance = Appearance67;

let IndexedLineSet69 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet69.DEF = "fingertip_l_interphalangeal_joint_1";
IndexedLineSet69.coordIndex = new MFInt32(new int[0,1]);
let Coordinate70 = browser.currentScene.createNode("Coordinate");
Coordinate70.point = new MFVec3f(new float[0.35,0.4,0,0.36,0.45,0]);
IndexedLineSet69.coord = Coordinate70;

Shape66.geometry = IndexedLineSet69;

HAnimSegment63.children[1] = Shape66;

HAnimJoint62.children = new MFNode();

HAnimJoint62.children[0] = HAnimSegment63;

HAnimJoint53.children[1] = HAnimJoint62;

HAnimJoint44.children[1] = HAnimJoint53;

HAnimJoint27.children[1] = HAnimJoint44;

//index finger
let HAnimJoint71 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint71.name = "l_carpometacarpal_joint_2";
HAnimJoint71.DEF = "l_carpometacarpal_joint_2";
HAnimJoint71.center = new SFVec3f(new float[0.1,0.2,0]);
HAnimJoint71.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint71.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint71.bboxDisplay = False;
HAnimJoint71.visible = True;
let HAnimSegment72 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment72.name = "l_metacarpal2";
HAnimSegment72.DEF = "l_metacarpal2";
HAnimSegment72.bboxDisplay = False;
HAnimSegment72.visible = True;
let Transform73 = browser.currentScene.createNode("Transform");
Transform73.translation = new SFVec3f(new float[0.1,0.2,0]);
Transform73.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform73.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform73.bboxDisplay = False;
Transform73.visible = True;
let Shape74 = browser.currentScene.createNode("Shape");
Shape74.USE = "HAnimJointShape";
Transform73.children = new MFNode();

Transform73.children[0] = Shape74;

HAnimSegment72.children = new MFNode();

HAnimSegment72.children[0] = Transform73;

let Shape75 = browser.currentScene.createNode("Shape");
Shape75.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape75.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape75.bboxDisplay = False;
Shape75.visible = True;
let Appearance76 = browser.currentScene.createNode("Appearance");
let Material77 = browser.currentScene.createNode("Material");
Material77.emissiveColor = new SFColor(new float[1,1,1]);
Appearance76.material = Material77;

Shape75.appearance = Appearance76;

let IndexedLineSet78 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet78.DEF = "CMC2toMCP2";
IndexedLineSet78.coordIndex = new MFInt32(new int[0,1]);
let Coordinate79 = browser.currentScene.createNode("Coordinate");
Coordinate79.point = new MFVec3f(new float[0.1,0.2,0,0.15,0.5,0]);
IndexedLineSet78.coord = Coordinate79;

Shape75.geometry = IndexedLineSet78;

HAnimSegment72.children[1] = Shape75;

HAnimJoint71.children = new MFNode();

HAnimJoint71.children[0] = HAnimSegment72;

let HAnimJoint80 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint80.name = "l_metacarpophalangeal_joint_2";
HAnimJoint80.DEF = "l_metacarpophalangeal_joint_2";
HAnimJoint80.center = new SFVec3f(new float[0.15,0.5,0]);
HAnimJoint80.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint80.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint80.bboxDisplay = False;
HAnimJoint80.visible = True;
let HAnimSegment81 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment81.name = "l_proximal_phalanges2";
HAnimSegment81.DEF = "l_proximal_phalanges2";
HAnimSegment81.bboxDisplay = False;
HAnimSegment81.visible = True;
let Transform82 = browser.currentScene.createNode("Transform");
Transform82.translation = new SFVec3f(new float[0.15,0.5,0]);
Transform82.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform82.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform82.bboxDisplay = False;
Transform82.visible = True;
let Shape83 = browser.currentScene.createNode("Shape");
Shape83.USE = "HAnimJointShape";
Transform82.children = new MFNode();

Transform82.children[0] = Shape83;

HAnimSegment81.children = new MFNode();

HAnimSegment81.children[0] = Transform82;

let Shape84 = browser.currentScene.createNode("Shape");
Shape84.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape84.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape84.bboxDisplay = False;
Shape84.visible = True;
let Appearance85 = browser.currentScene.createNode("Appearance");
let Material86 = browser.currentScene.createNode("Material");
Material86.emissiveColor = new SFColor(new float[1,1,1]);
Appearance85.material = Material86;

Shape84.appearance = Appearance85;

let IndexedLineSet87 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet87.DEF = "MCP2toPIP2";
IndexedLineSet87.coordIndex = new MFInt32(new int[0,1]);
let Coordinate88 = browser.currentScene.createNode("Coordinate");
Coordinate88.point = new MFVec3f(new float[0.15,0.5,0,0.2,0.7,0]);
IndexedLineSet87.coord = Coordinate88;

Shape84.geometry = IndexedLineSet87;

HAnimSegment81.children[1] = Shape84;

HAnimJoint80.children = new MFNode();

HAnimJoint80.children[0] = HAnimSegment81;

let HAnimJoint89 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint89.name = "l_proximal_interphalangeal_joint_2";
HAnimJoint89.DEF = "l_proximal_interphalangeal_joint_2";
HAnimJoint89.center = new SFVec3f(new float[0.2,0.7,0]);
HAnimJoint89.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint89.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint89.bboxDisplay = False;
HAnimJoint89.visible = True;
let HAnimSegment90 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment90.name = "l_middle_phalanges2";
HAnimSegment90.DEF = "l_middle_phalanges2";
HAnimSegment90.bboxDisplay = False;
HAnimSegment90.visible = True;
let Transform91 = browser.currentScene.createNode("Transform");
Transform91.translation = new SFVec3f(new float[0.2,0.7,0]);
Transform91.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform91.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform91.bboxDisplay = False;
Transform91.visible = True;
let Shape92 = browser.currentScene.createNode("Shape");
Shape92.USE = "HAnimJointShape";
Transform91.children = new MFNode();

Transform91.children[0] = Shape92;

HAnimSegment90.children = new MFNode();

HAnimSegment90.children[0] = Transform91;

let Shape93 = browser.currentScene.createNode("Shape");
Shape93.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape93.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape93.bboxDisplay = False;
Shape93.visible = True;
let Appearance94 = browser.currentScene.createNode("Appearance");
let Material95 = browser.currentScene.createNode("Material");
Material95.emissiveColor = new SFColor(new float[1,1,1]);
Appearance94.material = Material95;

Shape93.appearance = Appearance94;

let IndexedLineSet96 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet96.DEF = "PIP2toDIP2";
IndexedLineSet96.coordIndex = new MFInt32(new int[0,1]);
let Coordinate97 = browser.currentScene.createNode("Coordinate");
Coordinate97.point = new MFVec3f(new float[0.2,0.7,0,0.24,0.87,0]);
IndexedLineSet96.coord = Coordinate97;

Shape93.geometry = IndexedLineSet96;

HAnimSegment90.children[1] = Shape93;

HAnimJoint89.children = new MFNode();

HAnimJoint89.children[0] = HAnimSegment90;

let HAnimJoint98 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint98.name = "l_distal_interphalangeal_joint_2";
HAnimJoint98.DEF = "l_distal_interphalangeal_joint_2";
HAnimJoint98.center = new SFVec3f(new float[0.24,0.87,0]);
HAnimJoint98.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint98.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint98.bboxDisplay = False;
HAnimJoint98.visible = True;
let HAnimSegment99 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment99.name = "l_distal_phalanges2";
HAnimSegment99.DEF = "l_distal_phalanges2";
HAnimSegment99.bboxDisplay = False;
HAnimSegment99.visible = True;
let Transform100 = browser.currentScene.createNode("Transform");
Transform100.translation = new SFVec3f(new float[0.24,0.87,0]);
Transform100.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform100.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform100.bboxDisplay = False;
Transform100.visible = True;
let Shape101 = browser.currentScene.createNode("Shape");
Shape101.USE = "HAnimJointShape";
Transform100.children = new MFNode();

Transform100.children[0] = Shape101;

HAnimSegment99.children = new MFNode();

HAnimSegment99.children[0] = Transform100;

let Shape102 = browser.currentScene.createNode("Shape");
Shape102.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape102.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape102.bboxDisplay = False;
Shape102.visible = True;
let Appearance103 = browser.currentScene.createNode("Appearance");
let Material104 = browser.currentScene.createNode("Material");
Material104.emissiveColor = new SFColor(new float[1,1,1]);
Appearance103.material = Material104;

Shape102.appearance = Appearance103;

let IndexedLineSet105 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet105.DEF = "fingertip_l_distal_interphalangeal_joint_2";
IndexedLineSet105.coordIndex = new MFInt32(new int[0,1]);
let Coordinate106 = browser.currentScene.createNode("Coordinate");
Coordinate106.point = new MFVec3f(new float[0.24,0.87,0,0.26,0.93,0]);
IndexedLineSet105.coord = Coordinate106;

Shape102.geometry = IndexedLineSet105;

HAnimSegment99.children[1] = Shape102;

HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimSegment99;

HAnimJoint89.children[1] = HAnimJoint98;

HAnimJoint80.children[1] = HAnimJoint89;

HAnimJoint71.children[1] = HAnimJoint80;

HAnimJoint27.children[2] = HAnimJoint71;

HAnimJoint5.children[1] = HAnimJoint27;

//MC3
let HAnimJoint107 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint107.name = "l_midcarpal_joint_3";
HAnimJoint107.DEF = "l_midcarpal_joint_3";
HAnimJoint107.center = new SFVec3f(new float[0,0.07,0]);
HAnimJoint107.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint107.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint107.bboxDisplay = False;
HAnimJoint107.visible = True;
let HAnimSegment108 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment108.name = "l_capitate";
HAnimSegment108.DEF = "l_capitate";
HAnimSegment108.bboxDisplay = False;
HAnimSegment108.visible = True;
let Transform109 = browser.currentScene.createNode("Transform");
Transform109.translation = new SFVec3f(new float[0,0.07,0]);
Transform109.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform109.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform109.bboxDisplay = False;
Transform109.visible = True;
let Shape110 = browser.currentScene.createNode("Shape");
Shape110.USE = "HAnimNewJointShape";
Transform109.children = new MFNode();

Transform109.children[0] = Shape110;

HAnimSegment108.children = new MFNode();

HAnimSegment108.children[0] = Transform109;

let Shape111 = browser.currentScene.createNode("Shape");
Shape111.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape111.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape111.bboxDisplay = False;
Shape111.visible = True;
let Appearance112 = browser.currentScene.createNode("Appearance");
let Material113 = browser.currentScene.createNode("Material");
Material113.emissiveColor = new SFColor(new float[1,1,1]);
Appearance112.material = Material113;

Shape111.appearance = Appearance112;

let IndexedLineSet114 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet114.DEF = "MC3toCMC3";
IndexedLineSet114.coordIndex = new MFInt32(new int[0,1]);
let Coordinate115 = browser.currentScene.createNode("Coordinate");
Coordinate115.point = new MFVec3f(new float[0,0.07,0,0,0.2,0]);
IndexedLineSet114.coord = Coordinate115;

Shape111.geometry = IndexedLineSet114;

HAnimSegment108.children[1] = Shape111;

HAnimJoint107.children = new MFNode();

HAnimJoint107.children[0] = HAnimSegment108;

//Middle fingle
let HAnimJoint116 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint116.name = "l_carpometacarpal_joint_3";
HAnimJoint116.DEF = "l_carpometacarpal_joint_3";
HAnimJoint116.center = new SFVec3f(new float[0,0.2,0]);
HAnimJoint116.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint116.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint116.bboxDisplay = False;
HAnimJoint116.visible = True;
let HAnimSegment117 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment117.name = "l_metacarpal3";
HAnimSegment117.DEF = "l_metacarpal3";
HAnimSegment117.bboxDisplay = False;
HAnimSegment117.visible = True;
let Transform118 = browser.currentScene.createNode("Transform");
Transform118.translation = new SFVec3f(new float[0,0.2,0]);
Transform118.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform118.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform118.bboxDisplay = False;
Transform118.visible = True;
let Shape119 = browser.currentScene.createNode("Shape");
Shape119.USE = "HAnimJointShape";
Transform118.children = new MFNode();

Transform118.children[0] = Shape119;

HAnimSegment117.children = new MFNode();

HAnimSegment117.children[0] = Transform118;

let Shape120 = browser.currentScene.createNode("Shape");
Shape120.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape120.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape120.bboxDisplay = False;
Shape120.visible = True;
let Appearance121 = browser.currentScene.createNode("Appearance");
let Material122 = browser.currentScene.createNode("Material");
Material122.emissiveColor = new SFColor(new float[1,1,1]);
Appearance121.material = Material122;

Shape120.appearance = Appearance121;

let IndexedLineSet123 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet123.DEF = "CMC3toMCP3";
IndexedLineSet123.coordIndex = new MFInt32(new int[0,1]);
let Coordinate124 = browser.currentScene.createNode("Coordinate");
Coordinate124.point = new MFVec3f(new float[0,0.2,0,0.03,0.5,0]);
IndexedLineSet123.coord = Coordinate124;

Shape120.geometry = IndexedLineSet123;

HAnimSegment117.children[1] = Shape120;

HAnimJoint116.children = new MFNode();

HAnimJoint116.children[0] = HAnimSegment117;

let HAnimJoint125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint125.name = "l_metacarpophalangeal_joint_3";
HAnimJoint125.DEF = "l_metacarpophalangeal_joint_3";
HAnimJoint125.center = new SFVec3f(new float[0.03,0.5,0]);
HAnimJoint125.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint125.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint125.bboxDisplay = False;
HAnimJoint125.visible = True;
let HAnimSegment126 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment126.name = "l_proximal_phalanges3";
HAnimSegment126.DEF = "l_proximal_phalanges3";
HAnimSegment126.bboxDisplay = False;
HAnimSegment126.visible = True;
let Transform127 = browser.currentScene.createNode("Transform");
Transform127.translation = new SFVec3f(new float[0.03,0.5,0]);
Transform127.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform127.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform127.bboxDisplay = False;
Transform127.visible = True;
let Shape128 = browser.currentScene.createNode("Shape");
Shape128.USE = "HAnimJointShape";
Transform127.children = new MFNode();

Transform127.children[0] = Shape128;

HAnimSegment126.children = new MFNode();

HAnimSegment126.children[0] = Transform127;

let Shape129 = browser.currentScene.createNode("Shape");
Shape129.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape129.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape129.bboxDisplay = False;
Shape129.visible = True;
let Appearance130 = browser.currentScene.createNode("Appearance");
let Material131 = browser.currentScene.createNode("Material");
Material131.emissiveColor = new SFColor(new float[1,1,1]);
Appearance130.material = Material131;

Shape129.appearance = Appearance130;

let IndexedLineSet132 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet132.DEF = "MCP3toPIP3";
IndexedLineSet132.coordIndex = new MFInt32(new int[0,1]);
let Coordinate133 = browser.currentScene.createNode("Coordinate");
Coordinate133.point = new MFVec3f(new float[0.03,0.5,0,0.05,0.75,0]);
IndexedLineSet132.coord = Coordinate133;

Shape129.geometry = IndexedLineSet132;

HAnimSegment126.children[1] = Shape129;

HAnimJoint125.children = new MFNode();

HAnimJoint125.children[0] = HAnimSegment126;

let HAnimJoint134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint134.name = "l_proximal_interphalangeal_joint_3";
HAnimJoint134.DEF = "l_proximal_interphalangeal_joint_3";
HAnimJoint134.center = new SFVec3f(new float[0.05,0.75,0]);
HAnimJoint134.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint134.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint134.bboxDisplay = False;
HAnimJoint134.visible = True;
let HAnimSegment135 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment135.name = "l_middle_phalanges3";
HAnimSegment135.DEF = "l_middle_phalanges3";
HAnimSegment135.bboxDisplay = False;
HAnimSegment135.visible = True;
let Transform136 = browser.currentScene.createNode("Transform");
Transform136.translation = new SFVec3f(new float[0.05,0.75,0]);
Transform136.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform136.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform136.bboxDisplay = False;
Transform136.visible = True;
let Shape137 = browser.currentScene.createNode("Shape");
Shape137.USE = "HAnimJointShape";
Transform136.children = new MFNode();

Transform136.children[0] = Shape137;

HAnimSegment135.children = new MFNode();

HAnimSegment135.children[0] = Transform136;

let Shape138 = browser.currentScene.createNode("Shape");
Shape138.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape138.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape138.bboxDisplay = False;
Shape138.visible = True;
let Appearance139 = browser.currentScene.createNode("Appearance");
let Material140 = browser.currentScene.createNode("Material");
Material140.emissiveColor = new SFColor(new float[1,1,1]);
Appearance139.material = Material140;

Shape138.appearance = Appearance139;

let IndexedLineSet141 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet141.DEF = "PIP3toDIP3";
IndexedLineSet141.coordIndex = new MFInt32(new int[0,1]);
let Coordinate142 = browser.currentScene.createNode("Coordinate");
Coordinate142.point = new MFVec3f(new float[0.05,0.75,0,0.08,0.96,0]);
IndexedLineSet141.coord = Coordinate142;

Shape138.geometry = IndexedLineSet141;

HAnimSegment135.children[1] = Shape138;

HAnimJoint134.children = new MFNode();

HAnimJoint134.children[0] = HAnimSegment135;

let HAnimJoint143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint143.name = "l_distal_interphalangeal_joint_3";
HAnimJoint143.DEF = "l_distal_interphalangeal_joint_3";
HAnimJoint143.center = new SFVec3f(new float[0.08,0.96,0]);
HAnimJoint143.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint143.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint143.bboxDisplay = False;
HAnimJoint143.visible = True;
let HAnimSegment144 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment144.name = "l_distal_phalanges3";
HAnimSegment144.DEF = "l_distal_phalanges3";
HAnimSegment144.bboxDisplay = False;
HAnimSegment144.visible = True;
let Transform145 = browser.currentScene.createNode("Transform");
Transform145.translation = new SFVec3f(new float[0.08,0.96,0]);
Transform145.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform145.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform145.bboxDisplay = False;
Transform145.visible = True;
let Shape146 = browser.currentScene.createNode("Shape");
Shape146.USE = "HAnimJointShape";
Transform145.children = new MFNode();

Transform145.children[0] = Shape146;

HAnimSegment144.children = new MFNode();

HAnimSegment144.children[0] = Transform145;

let Shape147 = browser.currentScene.createNode("Shape");
Shape147.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape147.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape147.bboxDisplay = False;
Shape147.visible = True;
let Appearance148 = browser.currentScene.createNode("Appearance");
let Material149 = browser.currentScene.createNode("Material");
Material149.emissiveColor = new SFColor(new float[1,1,1]);
Appearance148.material = Material149;

Shape147.appearance = Appearance148;

let IndexedLineSet150 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet150.DEF = "fingertip_l_distal_interphalangeal_joint_3";
IndexedLineSet150.coordIndex = new MFInt32(new int[0,1]);
let Coordinate151 = browser.currentScene.createNode("Coordinate");
Coordinate151.point = new MFVec3f(new float[0.08,0.96,0,0.09,1.05,0]);
IndexedLineSet150.coord = Coordinate151;

Shape147.geometry = IndexedLineSet150;

HAnimSegment144.children[1] = Shape147;

HAnimJoint143.children = new MFNode();

HAnimJoint143.children[0] = HAnimSegment144;

HAnimJoint134.children[1] = HAnimJoint143;

HAnimJoint125.children[1] = HAnimJoint134;

HAnimJoint116.children[1] = HAnimJoint125;

HAnimJoint107.children[1] = HAnimJoint116;

HAnimJoint5.children[2] = HAnimJoint107;

//MC45
let HAnimJoint152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint152.name = "l_midcarpal_joint_12";
HAnimJoint152.DEF = "l_midcarpal_joint_45";
HAnimJoint152.center = new SFVec3f(new float[-0.1,0.1,0]);
HAnimJoint152.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint152.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint152.bboxDisplay = False;
HAnimJoint152.visible = True;
let HAnimSegment153 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment153.name = "l_hamate";
HAnimSegment153.DEF = "l_hamate";
HAnimSegment153.bboxDisplay = False;
HAnimSegment153.visible = True;
let Transform154 = browser.currentScene.createNode("Transform");
Transform154.translation = new SFVec3f(new float[-0.1,0.1,0]);
Transform154.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform154.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform154.bboxDisplay = False;
Transform154.visible = True;
let Shape155 = browser.currentScene.createNode("Shape");
Shape155.USE = "HAnimNewJointShape";
Transform154.children = new MFNode();

Transform154.children[0] = Shape155;

HAnimSegment153.children = new MFNode();

HAnimSegment153.children[0] = Transform154;

let Shape156 = browser.currentScene.createNode("Shape");
Shape156.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape156.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape156.bboxDisplay = False;
Shape156.visible = True;
let Appearance157 = browser.currentScene.createNode("Appearance");
let Material158 = browser.currentScene.createNode("Material");
Material158.emissiveColor = new SFColor(new float[1,1,1]);
Appearance157.material = Material158;

Shape156.appearance = Appearance157;

let IndexedLineSet159 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet159.DEF = "MC45toCMC4";
IndexedLineSet159.coordIndex = new MFInt32(new int[0,1]);
let Coordinate160 = browser.currentScene.createNode("Coordinate");
Coordinate160.point = new MFVec3f(new float[-0.1,0.1,0,-0.1,0.2,0]);
IndexedLineSet159.coord = Coordinate160;

Shape156.geometry = IndexedLineSet159;

HAnimSegment153.children[1] = Shape156;

let Shape161 = browser.currentScene.createNode("Shape");
Shape161.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape161.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape161.bboxDisplay = False;
Shape161.visible = True;
let Appearance162 = browser.currentScene.createNode("Appearance");
let Material163 = browser.currentScene.createNode("Material");
Material163.emissiveColor = new SFColor(new float[1,1,1]);
Appearance162.material = Material163;

Shape161.appearance = Appearance162;

let IndexedLineSet164 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet164.DEF = "MC45toCMC5";
IndexedLineSet164.coordIndex = new MFInt32(new int[0,1]);
let Coordinate165 = browser.currentScene.createNode("Coordinate");
Coordinate165.point = new MFVec3f(new float[-0.1,0.1,0,-0.15,0.17,0]);
IndexedLineSet164.coord = Coordinate165;

Shape161.geometry = IndexedLineSet164;

HAnimSegment153.children[2] = Shape161;

HAnimJoint152.children = new MFNode();

HAnimJoint152.children[0] = HAnimSegment153;

//ring finger
let HAnimJoint166 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint166.name = "l_carpometacarpal_joint_4";
HAnimJoint166.DEF = "l_carpometacarpal_joint_4";
HAnimJoint166.center = new SFVec3f(new float[-0.1,0.2,0]);
HAnimJoint166.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint166.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint166.bboxDisplay = False;
HAnimJoint166.visible = True;
let HAnimSegment167 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment167.name = "l_metacarpal4";
HAnimSegment167.DEF = "l_metacarpal4";
HAnimSegment167.bboxDisplay = False;
HAnimSegment167.visible = True;
let Transform168 = browser.currentScene.createNode("Transform");
Transform168.translation = new SFVec3f(new float[-0.1,0.2,0]);
Transform168.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform168.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform168.bboxDisplay = False;
Transform168.visible = True;
let Shape169 = browser.currentScene.createNode("Shape");
Shape169.USE = "HAnimJointShape";
Transform168.children = new MFNode();

Transform168.children[0] = Shape169;

HAnimSegment167.children = new MFNode();

HAnimSegment167.children[0] = Transform168;

let Shape170 = browser.currentScene.createNode("Shape");
Shape170.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape170.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape170.bboxDisplay = False;
Shape170.visible = True;
let Appearance171 = browser.currentScene.createNode("Appearance");
let Material172 = browser.currentScene.createNode("Material");
Material172.emissiveColor = new SFColor(new float[1,1,1]);
Appearance171.material = Material172;

Shape170.appearance = Appearance171;

let IndexedLineSet173 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet173.DEF = "CMC4toMCP4";
IndexedLineSet173.coordIndex = new MFInt32(new int[0,1]);
let Coordinate174 = browser.currentScene.createNode("Coordinate");
Coordinate174.point = new MFVec3f(new float[-0.1,0.2,0,-0.1,0.47,0]);
IndexedLineSet173.coord = Coordinate174;

Shape170.geometry = IndexedLineSet173;

HAnimSegment167.children[1] = Shape170;

HAnimJoint166.children = new MFNode();

HAnimJoint166.children[0] = HAnimSegment167;

let HAnimJoint175 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint175.name = "l_metacarpophalangeal_joint_4";
HAnimJoint175.DEF = "l_metacarpophalangeal_joint_4";
HAnimJoint175.center = new SFVec3f(new float[-0.1,0.47,0]);
HAnimJoint175.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint175.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint175.bboxDisplay = False;
HAnimJoint175.visible = True;
let HAnimSegment176 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment176.name = "l_proximal_phalanges4";
HAnimSegment176.DEF = "l_proximal_phalanges4";
HAnimSegment176.bboxDisplay = False;
HAnimSegment176.visible = True;
let Transform177 = browser.currentScene.createNode("Transform");
Transform177.translation = new SFVec3f(new float[-0.1,0.47,0]);
Transform177.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform177.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform177.bboxDisplay = False;
Transform177.visible = True;
let Shape178 = browser.currentScene.createNode("Shape");
Shape178.USE = "HAnimJointShape";
Transform177.children = new MFNode();

Transform177.children[0] = Shape178;

HAnimSegment176.children = new MFNode();

HAnimSegment176.children[0] = Transform177;

let Shape179 = browser.currentScene.createNode("Shape");
Shape179.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape179.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape179.bboxDisplay = False;
Shape179.visible = True;
let Appearance180 = browser.currentScene.createNode("Appearance");
let Material181 = browser.currentScene.createNode("Material");
Material181.emissiveColor = new SFColor(new float[1,1,1]);
Appearance180.material = Material181;

Shape179.appearance = Appearance180;

let IndexedLineSet182 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet182.DEF = "MCP4toPIP4";
IndexedLineSet182.coordIndex = new MFInt32(new int[0,1]);
let Coordinate183 = browser.currentScene.createNode("Coordinate");
Coordinate183.point = new MFVec3f(new float[-0.1,0.47,0,-0.1,0.7,0]);
IndexedLineSet182.coord = Coordinate183;

Shape179.geometry = IndexedLineSet182;

HAnimSegment176.children[1] = Shape179;

HAnimJoint175.children = new MFNode();

HAnimJoint175.children[0] = HAnimSegment176;

let HAnimJoint184 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint184.name = "l_proximal_interphalangeal_joint_4";
HAnimJoint184.DEF = "l_proximal_interphalangeal_joint_4";
HAnimJoint184.center = new SFVec3f(new float[-0.1,0.7,0]);
HAnimJoint184.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint184.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint184.bboxDisplay = False;
HAnimJoint184.visible = True;
let HAnimSegment185 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment185.name = "l_middle_phalanges4";
HAnimSegment185.DEF = "l_middle_phalanges4";
HAnimSegment185.bboxDisplay = False;
HAnimSegment185.visible = True;
let Transform186 = browser.currentScene.createNode("Transform");
Transform186.translation = new SFVec3f(new float[-0.1,0.7,0]);
Transform186.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform186.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform186.bboxDisplay = False;
Transform186.visible = True;
let Shape187 = browser.currentScene.createNode("Shape");
Shape187.USE = "HAnimJointShape";
Transform186.children = new MFNode();

Transform186.children[0] = Shape187;

HAnimSegment185.children = new MFNode();

HAnimSegment185.children[0] = Transform186;

let Shape188 = browser.currentScene.createNode("Shape");
Shape188.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape188.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape188.bboxDisplay = False;
Shape188.visible = True;
let Appearance189 = browser.currentScene.createNode("Appearance");
let Material190 = browser.currentScene.createNode("Material");
Material190.emissiveColor = new SFColor(new float[1,1,1]);
Appearance189.material = Material190;

Shape188.appearance = Appearance189;

let IndexedLineSet191 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet191.DEF = "PIP4toDIP4";
IndexedLineSet191.coordIndex = new MFInt32(new int[0,1]);
let Coordinate192 = browser.currentScene.createNode("Coordinate");
Coordinate192.point = new MFVec3f(new float[-0.1,0.7,0,-0.1,0.93,0]);
IndexedLineSet191.coord = Coordinate192;

Shape188.geometry = IndexedLineSet191;

HAnimSegment185.children[1] = Shape188;

HAnimJoint184.children = new MFNode();

HAnimJoint184.children[0] = HAnimSegment185;

let HAnimJoint193 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint193.name = "l_distal_interphalangeal_joint_4";
HAnimJoint193.DEF = "l_distal_interphalangeal_joint_4";
HAnimJoint193.center = new SFVec3f(new float[-0.1,0.93,0]);
HAnimJoint193.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint193.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint193.bboxDisplay = False;
HAnimJoint193.visible = True;
let HAnimSegment194 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment194.name = "l_distal_phalanx4";
HAnimSegment194.DEF = "l_distal_phalanx4";
HAnimSegment194.bboxDisplay = False;
HAnimSegment194.visible = True;
let Transform195 = browser.currentScene.createNode("Transform");
Transform195.translation = new SFVec3f(new float[-0.1,0.93,0]);
Transform195.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform195.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform195.bboxDisplay = False;
Transform195.visible = True;
let Shape196 = browser.currentScene.createNode("Shape");
Shape196.USE = "HAnimJointShape";
Transform195.children = new MFNode();

Transform195.children[0] = Shape196;

HAnimSegment194.children = new MFNode();

HAnimSegment194.children[0] = Transform195;

let Shape197 = browser.currentScene.createNode("Shape");
Shape197.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape197.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape197.bboxDisplay = False;
Shape197.visible = True;
let Appearance198 = browser.currentScene.createNode("Appearance");
let Material199 = browser.currentScene.createNode("Material");
Material199.emissiveColor = new SFColor(new float[1,1,1]);
Appearance198.material = Material199;

Shape197.appearance = Appearance198;

let IndexedLineSet200 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet200.DEF = "fingertip_l_distal_interphalangeal_joint_4";
IndexedLineSet200.coordIndex = new MFInt32(new int[0,1]);
let Coordinate201 = browser.currentScene.createNode("Coordinate");
Coordinate201.point = new MFVec3f(new float[-0.1,0.93,0,-0.1,1,0]);
IndexedLineSet200.coord = Coordinate201;

Shape197.geometry = IndexedLineSet200;

HAnimSegment194.children[1] = Shape197;

HAnimJoint193.children = new MFNode();

HAnimJoint193.children[0] = HAnimSegment194;

HAnimJoint184.children[1] = HAnimJoint193;

HAnimJoint175.children[1] = HAnimJoint184;

HAnimJoint166.children[1] = HAnimJoint175;

HAnimJoint152.children[1] = HAnimJoint166;

//pinky finger
let HAnimJoint202 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint202.name = "l_carpometacarpal_joint_5";
HAnimJoint202.DEF = "l_carpometacarpal_joint_5";
HAnimJoint202.center = new SFVec3f(new float[-0.15,0.17,0]);
HAnimJoint202.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint202.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint202.bboxDisplay = False;
HAnimJoint202.visible = True;
let HAnimSegment203 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment203.name = "l_metacarpal5";
HAnimSegment203.DEF = "l_metacarpal5";
HAnimSegment203.bboxDisplay = False;
HAnimSegment203.visible = True;
let Transform204 = browser.currentScene.createNode("Transform");
Transform204.translation = new SFVec3f(new float[-0.15,0.17,0]);
Transform204.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform204.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform204.bboxDisplay = False;
Transform204.visible = True;
let Shape205 = browser.currentScene.createNode("Shape");
Shape205.USE = "HAnimJointShape";
Transform204.children = new MFNode();

Transform204.children[0] = Shape205;

HAnimSegment203.children = new MFNode();

HAnimSegment203.children[0] = Transform204;

let Shape206 = browser.currentScene.createNode("Shape");
Shape206.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape206.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape206.bboxDisplay = False;
Shape206.visible = True;
let Appearance207 = browser.currentScene.createNode("Appearance");
let Material208 = browser.currentScene.createNode("Material");
Material208.emissiveColor = new SFColor(new float[1,1,1]);
Appearance207.material = Material208;

Shape206.appearance = Appearance207;

let IndexedLineSet209 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet209.DEF = "CMC5toMCP5";
IndexedLineSet209.coordIndex = new MFInt32(new int[0,1]);
let Coordinate210 = browser.currentScene.createNode("Coordinate");
Coordinate210.point = new MFVec3f(new float[-0.15,0.17,0,-0.2,0.4,0]);
IndexedLineSet209.coord = Coordinate210;

Shape206.geometry = IndexedLineSet209;

HAnimSegment203.children[1] = Shape206;

HAnimJoint202.children = new MFNode();

HAnimJoint202.children[0] = HAnimSegment203;

let HAnimJoint211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint211.name = "l_metacarpophalangeal_joint_5";
HAnimJoint211.DEF = "l_metacarpophalangeal_joint_5";
HAnimJoint211.center = new SFVec3f(new float[-0.2,0.4,0]);
HAnimJoint211.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint211.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint211.bboxDisplay = False;
HAnimJoint211.visible = True;
let HAnimSegment212 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment212.name = "l_proximal_phalanges2";
HAnimSegment212.DEF = "l_proximal_phalanges5";
HAnimSegment212.bboxDisplay = False;
HAnimSegment212.visible = True;
let Transform213 = browser.currentScene.createNode("Transform");
Transform213.translation = new SFVec3f(new float[-0.2,0.4,0]);
Transform213.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform213.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform213.bboxDisplay = False;
Transform213.visible = True;
let Shape214 = browser.currentScene.createNode("Shape");
Shape214.USE = "HAnimJointShape";
Transform213.children = new MFNode();

Transform213.children[0] = Shape214;

HAnimSegment212.children = new MFNode();

HAnimSegment212.children[0] = Transform213;

let Shape215 = browser.currentScene.createNode("Shape");
Shape215.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape215.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape215.bboxDisplay = False;
Shape215.visible = True;
let Appearance216 = browser.currentScene.createNode("Appearance");
let Material217 = browser.currentScene.createNode("Material");
Material217.emissiveColor = new SFColor(new float[1,1,1]);
Appearance216.material = Material217;

Shape215.appearance = Appearance216;

let IndexedLineSet218 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet218.DEF = "MCP5toPIP5";
IndexedLineSet218.coordIndex = new MFInt32(new int[0,1]);
let Coordinate219 = browser.currentScene.createNode("Coordinate");
Coordinate219.point = new MFVec3f(new float[-0.2,0.4,0,-0.23,0.63,0]);
IndexedLineSet218.coord = Coordinate219;

Shape215.geometry = IndexedLineSet218;

HAnimSegment212.children[1] = Shape215;

HAnimJoint211.children = new MFNode();

HAnimJoint211.children[0] = HAnimSegment212;

let HAnimJoint220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint220.name = "l_proximal_interphalangeal_joint_5";
HAnimJoint220.DEF = "l_proximal_interphalangeal_joint_5";
HAnimJoint220.center = new SFVec3f(new float[-0.23,0.63,0]);
HAnimJoint220.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint220.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint220.bboxDisplay = False;
HAnimJoint220.visible = True;
let HAnimSegment221 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment221.name = "l_middle_phalanges5";
HAnimSegment221.DEF = "l_middle_phalanges5";
HAnimSegment221.bboxDisplay = False;
HAnimSegment221.visible = True;
let Transform222 = browser.currentScene.createNode("Transform");
Transform222.translation = new SFVec3f(new float[-0.23,0.63,0]);
Transform222.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform222.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform222.bboxDisplay = False;
Transform222.visible = True;
let Shape223 = browser.currentScene.createNode("Shape");
Shape223.USE = "HAnimJointShape";
Transform222.children = new MFNode();

Transform222.children[0] = Shape223;

HAnimSegment221.children = new MFNode();

HAnimSegment221.children[0] = Transform222;

let Shape224 = browser.currentScene.createNode("Shape");
Shape224.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape224.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape224.bboxDisplay = False;
Shape224.visible = True;
let Appearance225 = browser.currentScene.createNode("Appearance");
let Material226 = browser.currentScene.createNode("Material");
Material226.emissiveColor = new SFColor(new float[1,1,1]);
Appearance225.material = Material226;

Shape224.appearance = Appearance225;

let IndexedLineSet227 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet227.DEF = "PIP5toDIP5";
IndexedLineSet227.coordIndex = new MFInt32(new int[0,1]);
let Coordinate228 = browser.currentScene.createNode("Coordinate");
Coordinate228.point = new MFVec3f(new float[-0.23,0.63,0,-0.25,0.79,0]);
IndexedLineSet227.coord = Coordinate228;

Shape224.geometry = IndexedLineSet227;

HAnimSegment221.children[1] = Shape224;

HAnimJoint220.children = new MFNode();

HAnimJoint220.children[0] = HAnimSegment221;

let HAnimJoint229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint229.name = "l_distal_interphalangeal_joint_5";
HAnimJoint229.DEF = "l_distal_interphalangeal_joint_5";
HAnimJoint229.center = new SFVec3f(new float[-0.25,0.79,0]);
HAnimJoint229.bboxCenter = new SFVec3f(new float[0,0,0]);
HAnimJoint229.bboxSize = new SFVec3f(new float[-1,-1,-1]);
HAnimJoint229.bboxDisplay = False;
HAnimJoint229.visible = True;
let HAnimSegment230 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment230.name = "l_distal_phalanges5";
HAnimSegment230.DEF = "l_distal_phalanges5";
HAnimSegment230.bboxDisplay = False;
HAnimSegment230.visible = True;
let Transform231 = browser.currentScene.createNode("Transform");
Transform231.translation = new SFVec3f(new float[-0.25,0.79,0]);
Transform231.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform231.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform231.bboxDisplay = False;
Transform231.visible = True;
let Shape232 = browser.currentScene.createNode("Shape");
Shape232.USE = "HAnimJointShape";
Transform231.children = new MFNode();

Transform231.children[0] = Shape232;

HAnimSegment230.children = new MFNode();

HAnimSegment230.children[0] = Transform231;

let Shape233 = browser.currentScene.createNode("Shape");
Shape233.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape233.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Shape233.bboxDisplay = False;
Shape233.visible = True;
let Appearance234 = browser.currentScene.createNode("Appearance");
let Material235 = browser.currentScene.createNode("Material");
Material235.emissiveColor = new SFColor(new float[1,1,1]);
Appearance234.material = Material235;

Shape233.appearance = Appearance234;

let IndexedLineSet236 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet236.DEF = "fingertip_l_distal_interphalangeal_joint_5";
IndexedLineSet236.coordIndex = new MFInt32(new int[0,1]);
let Coordinate237 = browser.currentScene.createNode("Coordinate");
Coordinate237.point = new MFVec3f(new float[-0.25,0.79,0,-0.26,0.85,0]);
IndexedLineSet236.coord = Coordinate237;

Shape233.geometry = IndexedLineSet236;

HAnimSegment230.children[1] = Shape233;

HAnimJoint229.children = new MFNode();

HAnimJoint229.children[0] = HAnimSegment230;

HAnimJoint220.children[1] = HAnimJoint229;

HAnimJoint211.children[1] = HAnimJoint220;

HAnimJoint202.children[1] = HAnimJoint211;

HAnimJoint152.children[2] = HAnimJoint202;

HAnimJoint5.children[3] = HAnimJoint152;

HAnimJoint4.children = new MFNode();

HAnimJoint4.children[0] = HAnimJoint5;

HAnimHumanoid3.joints = new MFNode();

HAnimHumanoid3.joints[0] = HAnimJoint4;

let HAnimJoint238 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint238.USE = "hanim_HumanoidRoot";
HAnimHumanoid3.joints[1] = HAnimJoint238;

let HAnimJoint239 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint239.USE = "l_radiocarpal_joint";
HAnimHumanoid3.joints[2] = HAnimJoint239;

let HAnimJoint240 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint240.USE = "l_midcarpal_joint_12";
HAnimHumanoid3.joints[3] = HAnimJoint240;

let HAnimJoint241 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint241.USE = "l_carpometacarpal_joint_1";
HAnimHumanoid3.joints[4] = HAnimJoint241;

let HAnimJoint242 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint242.USE = "l_metacarpophalangeal_joint_1";
HAnimHumanoid3.joints[5] = HAnimJoint242;

let HAnimJoint243 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint243.USE = "l_interphalangeal_joint_1";
HAnimHumanoid3.joints[6] = HAnimJoint243;

let HAnimJoint244 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint244.USE = "l_carpometacarpal_joint_2";
HAnimHumanoid3.joints[7] = HAnimJoint244;

let HAnimJoint245 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint245.USE = "l_metacarpophalangeal_joint_2";
HAnimHumanoid3.joints[8] = HAnimJoint245;

let HAnimJoint246 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint246.USE = "l_proximal_interphalangeal_joint_2";
HAnimHumanoid3.joints[9] = HAnimJoint246;

let HAnimJoint247 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint247.USE = "l_distal_interphalangeal_joint_2";
HAnimHumanoid3.joints[10] = HAnimJoint247;

let HAnimJoint248 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint248.USE = "l_midcarpal_joint_3";
HAnimHumanoid3.joints[11] = HAnimJoint248;

let HAnimJoint249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint249.USE = "l_carpometacarpal_joint_3";
HAnimHumanoid3.joints[12] = HAnimJoint249;

let HAnimJoint250 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint250.USE = "l_metacarpophalangeal_joint_3";
HAnimHumanoid3.joints[13] = HAnimJoint250;

let HAnimJoint251 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint251.USE = "l_proximal_interphalangeal_joint_3";
HAnimHumanoid3.joints[14] = HAnimJoint251;

let HAnimJoint252 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint252.USE = "l_distal_interphalangeal_joint_3";
HAnimHumanoid3.joints[15] = HAnimJoint252;

let HAnimJoint253 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint253.USE = "l_midcarpal_joint_45";
HAnimHumanoid3.joints[16] = HAnimJoint253;

let HAnimJoint254 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint254.USE = "l_carpometacarpal_joint_4";
HAnimHumanoid3.joints[17] = HAnimJoint254;

let HAnimJoint255 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint255.USE = "l_metacarpophalangeal_joint_4";
HAnimHumanoid3.joints[18] = HAnimJoint255;

let HAnimJoint256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint256.USE = "l_proximal_interphalangeal_joint_4";
HAnimHumanoid3.joints[19] = HAnimJoint256;

let HAnimJoint257 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint257.USE = "l_distal_interphalangeal_joint_4";
HAnimHumanoid3.joints[20] = HAnimJoint257;

let HAnimJoint258 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint258.USE = "l_carpometacarpal_joint_5";
HAnimHumanoid3.joints[21] = HAnimJoint258;

let HAnimJoint259 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint259.USE = "l_metacarpophalangeal_joint_5";
HAnimHumanoid3.joints[22] = HAnimJoint259;

let HAnimJoint260 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint260.USE = "l_proximal_interphalangeal_joint_5";
HAnimHumanoid3.joints[23] = HAnimJoint260;

let HAnimJoint261 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint261.USE = "l_distal_interphalangeal_joint_5";
HAnimHumanoid3.joints[24] = HAnimJoint261;

let HAnimSegment262 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment262.USE = "l_wrist";
HAnimHumanoid3.segments[25] = HAnimSegment262;

let HAnimSegment263 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment263.USE = "l_trapezoid";
HAnimHumanoid3.segments[26] = HAnimSegment263;

let HAnimSegment264 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment264.USE = "l_metacarpal_1";
HAnimHumanoid3.segments[27] = HAnimSegment264;

let HAnimSegment265 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment265.USE = "l_proximal_phalanges1";
HAnimHumanoid3.segments[28] = HAnimSegment265;

let HAnimSegment266 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment266.USE = "l_distal_phalanges1";
HAnimHumanoid3.segments[29] = HAnimSegment266;

let HAnimSegment267 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment267.USE = "l_metacarpal2";
HAnimHumanoid3.segments[30] = HAnimSegment267;

let HAnimSegment268 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment268.USE = "l_proximal_phalanges2";
HAnimHumanoid3.segments[31] = HAnimSegment268;

let HAnimSegment269 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment269.USE = "l_middle_phalanges2";
HAnimHumanoid3.segments[32] = HAnimSegment269;

let HAnimSegment270 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment270.USE = "l_distal_phalanges2";
HAnimHumanoid3.segments[33] = HAnimSegment270;

let HAnimSegment271 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment271.USE = "l_capitate";
HAnimHumanoid3.segments[34] = HAnimSegment271;

let HAnimSegment272 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment272.USE = "l_metacarpal3";
HAnimHumanoid3.segments[35] = HAnimSegment272;

let HAnimSegment273 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment273.USE = "l_proximal_phalanges3";
HAnimHumanoid3.segments[36] = HAnimSegment273;

let HAnimSegment274 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment274.USE = "l_middle_phalanges3";
HAnimHumanoid3.segments[37] = HAnimSegment274;

let HAnimSegment275 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment275.USE = "l_distal_phalanges3";
HAnimHumanoid3.segments[38] = HAnimSegment275;

let HAnimSegment276 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment276.USE = "l_hamate";
HAnimHumanoid3.segments[39] = HAnimSegment276;

let HAnimSegment277 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment277.USE = "l_metacarpal4";
HAnimHumanoid3.segments[40] = HAnimSegment277;

let HAnimSegment278 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment278.USE = "l_proximal_phalanges4";
HAnimHumanoid3.segments[41] = HAnimSegment278;

let HAnimSegment279 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment279.USE = "l_middle_phalanges4";
HAnimHumanoid3.segments[42] = HAnimSegment279;

let HAnimSegment280 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment280.USE = "l_distal_phalanx4";
HAnimHumanoid3.segments[43] = HAnimSegment280;

let HAnimSegment281 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment281.USE = "l_metacarpal5";
HAnimHumanoid3.segments[44] = HAnimSegment281;

let HAnimSegment282 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment282.USE = "l_proximal_phalanges5";
HAnimHumanoid3.segments[45] = HAnimSegment282;

let HAnimSegment283 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment283.USE = "l_middle_phalanges5";
HAnimHumanoid3.segments[46] = HAnimSegment283;

let HAnimSegment284 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment284.USE = "l_distal_phalanges5";
HAnimHumanoid3.segments[47] = HAnimSegment284;

browser.currentScene.children[1] = HAnimHumanoid3;


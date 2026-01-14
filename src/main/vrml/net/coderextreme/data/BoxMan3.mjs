const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "BoxMan3.x3d");
scene.addMetaData("description", "A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation scripting via an external prototype (ExternProtoDeclare).");
scene.addMetaData("creator", "James Smith - james@vapourtech.com");
scene.addMetaData("translator", "Don Brutzman and Matt Beitler");
scene.addMetaData("created", "1 March 2001");
scene.addMetaData("translated", "19 October 2001");
scene.addMetaData("modified", "Tue, 09 Sep 2025 19:37:50 GMT");
scene.addMetaData("error", "Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported");
scene.addMetaData("reference", "http://HAnim.org");
scene.addMetaData("reference", "originals/boxman.wrl");
scene.addMetaData("reference", "BoxMan3.js");
scene.addMetaData("reference", "BoxManAnimationPanel.x3d");
scene.addMetaData("reference", "http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl");
scene.addMetaData("reference", "http://www.vapourtech.com/team/james/boxman.wrl");
scene.addMetaData("reference", "http://HAnim.org/Specifications/HAnim2001");
scene.addMetaData("reference", "http://HAnim.org/Models");
scene.addMetaData("reference", "http://HAnim.org/Nodes");
scene.addMetaData("reference", "https://www.web3d.org/x3d/content/X3dToVrml97.xslt");
scene.addMetaData("reference", "http://www.vapourtech.com");
scene.addMetaData("warning", "Skin mesh is split across multiple shapes within a Group, should that be allowed?");
scene.addMetaData("TODO", "What does the original animation script accomplish? It is not hooked up, script source contains errors...");
scene.addMetaData("TODO", "InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org");
scene.addMetaData("Image", "BoxManViewInclined.png");
scene.addMetaData("Image", "BoxManViewFront.png");
scene.addMetaData("Image", "BoxManViewRight.png");
scene.addMetaData("Image", "BoxManViewLeft.png");
scene.addMetaData("Image", "BoxManViewTop.png");
scene.addMetaData("rights", "(C) 2000 James Smith - james@vapourtech.com");
scene.addMetaData("subject", "BoxMan HAnim 2.0");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan3.x3d");
await browser .loadComponents (scene);
let ExternProtoDeclare34 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare34.name = "LOA1_WalkAnimation";
ExternProtoDeclare34.url = new X3D.MFString([new X3D.SFString("../Prototypes/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation"), new X3D.SFString("../Prototypes/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation")]);
ExternProtoDeclare35.getField("cycleInterval")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare36.getField("enabled")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare37.getField("loop")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare38.getField("startTime")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare39.getField("stopTime")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare40.getField("fraction_changed")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare41.getField("HumanoidRoot_translation_changed")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare42.getField("HumanoidRoot_rotation_changed")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare43.getField("l_hip_rotation_changed")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare44.getField("l_knee_rotation_changed")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare45.getField("l_ankle_rotation_changed")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare46.getField("l_midtarsal_rotation_changed")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare47.getField("r_hip_rotation_changed")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare48.getField("r_knee_rotation_changed")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare49.getField("r_ankle_rotation_changed")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare50.getField("r_midtarsal_rotation_changed")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare51.getField("vl5_rotation_changed")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare52.getField("skullbase_rotation_changed")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare53.getField("l_shoulder_rotation_changed")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare54.getField("l_elbow_rotation_changed")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare55.getField("l_wrist_rotation_changed")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare56.getField("r_shoulder_rotation_changed")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare57.getField("r_elbow_rotation_changed")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare58.getField("r_wrist_rotation_changed")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare59.getField("isActive")ExternProtoDeclare34YYY.field = new X3D.MFNode();

ExternProtoDeclare60.getField("lower_body_rotation_changed")ExternProtoDeclare34YYY.field = new X3D.MFNode();

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = ExternProtoDeclare34;

let WorldInfo61 = browser.currentScene.createNode("WorldInfo");
WorldInfo61.title = "BoxMan3 - A Seamless VRML Human";
WorldInfo61.info = new X3D.MFString([new X3D.SFString("(C) 2000 James Smith - james@vapourtech.com"), new X3D.SFString("http://www.vapourtech.com/team/james/boxman.wrl"), new X3D.SFString("Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com")]);
browser.currentScene.children[1] = WorldInfo61;

let Background62 = browser.currentScene.createNode("Background");
Background62.skyColor = new X3D.MFColor([0.75,0.75,0.75]);
Background62.groundColor = new X3D.MFColor([0.6,0.6,0.6]);
browser.currentScene.children[2] = Background62;

let HAnimHumanoid63 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid63.DEF = "boxman_Humanoid";
HAnimHumanoid63.name = "Humanoid";
HAnimHumanoid63.info = new X3D.MFString([new X3D.SFString("authorName=James Smith"), new X3D.SFString("authorEmail=james@vapourtech.com"), new X3D.SFString("copyright=(C) 2000 James Smith - james@vapourtech.com"), new X3D.SFString("humanoidVersion=1.0")]);
HAnimHumanoid63.version = "1.0";
let HAnimJoint64 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint64.DEF = "boxman_humanoid_root";
HAnimJoint64.name = "humanoid_root";
HAnimJoint64.center = new X3D.SFVec3f([0,0.9723,-0.0728]);
HAnimJoint64.skinCoordIndex = new X3D.MFInt32([0,1,2,3,4,5,6,7,8,9,10,11]);
HAnimJoint64.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment65 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment65.DEF = "boxman_sacrum";
HAnimSegment65.name = "sacrum";
let Transform66 = browser.currentScene.createNode("Transform");
Transform66.translation = new X3D.SFVec3f([0,0.9723,-0.0728]);
let Shape67 = browser.currentScene.createNode("Shape");
Shape67.DEF = "SphereYellow";
let Appearance68 = browser.currentScene.createNode("Appearance");
let Material69 = browser.currentScene.createNode("Material");
Material69.diffuseColor = new X3D.SFColor([1,1,0]);
material = Material69;

appearance = Appearance68;

let Sphere70 = browser.currentScene.createNode("Sphere");
Sphere70.radius = 0.02;
geometry = Sphere70;

Transform66YYY.child = new X3D.undefined();

Transform66ZZZ.child[0] = Shape67;

HAnimSegment65YYY.children = new X3D.MFNode();

HAnimSegment65ZZZ.children[0] = Transform66;

HAnimJoint64YYY.children = new X3D.MFNode();

HAnimJoint64ZZZ.children[0] = HAnimSegment65;

let HAnimJoint71 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint71.DEF = "boxman_l_hip";
HAnimJoint71.name = "l_hip";
HAnimJoint71.center = new X3D.SFVec3f([0.0956,0.9364,0]);
HAnimJoint71.skinCoordIndex = new X3D.MFInt32([12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43]);
HAnimJoint71.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
let HAnimSegment72 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment72.DEF = "boxman_l_thigh";
HAnimSegment72.name = "l_thigh";
let Transform73 = browser.currentScene.createNode("Transform");
Transform73.translation = new X3D.SFVec3f([0.0956,0.9364,0]);
let Shape74 = browser.currentScene.createNode("Shape");
Shape74.USE = "SphereYellow";
Transform73YYY.child = new X3D.undefined();

Transform73ZZZ.child[0] = Shape74;

HAnimSegment72YYY.children = new X3D.MFNode();

HAnimSegment72ZZZ.children[0] = Transform73;

HAnimJoint71YYY.children = new X3D.MFNode();

HAnimJoint71ZZZ.children[0] = HAnimSegment72;

let HAnimJoint75 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint75.DEF = "boxman_l_knee";
HAnimJoint75.name = "l_knee";
HAnimJoint75.center = new X3D.SFVec3f([0.0956,0.5095,-0.0036]);
HAnimJoint75.skinCoordIndex = new X3D.MFInt32([36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63]);
HAnimJoint75.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment76 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment76.DEF = "boxman_l_calf";
HAnimSegment76.name = "l_calf";
let Transform77 = browser.currentScene.createNode("Transform");
Transform77.translation = new X3D.SFVec3f([0.0956,0.5095,-0.0036]);
let Shape78 = browser.currentScene.createNode("Shape");
Shape78.USE = "SphereYellow";
Transform77YYY.child = new X3D.undefined();

Transform77ZZZ.child[0] = Shape78;

HAnimSegment76YYY.children = new X3D.MFNode();

HAnimSegment76ZZZ.children[0] = Transform77;

HAnimJoint75YYY.children = new X3D.MFNode();

HAnimJoint75ZZZ.children[0] = HAnimSegment76;

let HAnimJoint79 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint79.DEF = "boxman_l_ankle";
HAnimJoint79.name = "l_ankle";
HAnimJoint79.center = new X3D.SFVec3f([0.0946,0.0762,-0.0261]);
HAnimJoint79.skinCoordIndex = new X3D.MFInt32([64,65,66,67,68,69,70,71]);
HAnimJoint79.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment80 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment80.DEF = "boxman_l_hindfoot";
HAnimSegment80.name = "l_hindfoot";
let Transform81 = browser.currentScene.createNode("Transform");
Transform81.translation = new X3D.SFVec3f([0.0946,0.0762,-0.0261]);
let Shape82 = browser.currentScene.createNode("Shape");
Shape82.USE = "SphereYellow";
Transform81YYY.child = new X3D.undefined();

Transform81ZZZ.child[0] = Shape82;

HAnimSegment80YYY.children = new X3D.MFNode();

HAnimSegment80ZZZ.children[0] = Transform81;

HAnimJoint79YYY.children = new X3D.MFNode();

HAnimJoint79ZZZ.children[0] = HAnimSegment80;

let HAnimJoint83 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint83.DEF = "boxman_l_midtarsal";
HAnimJoint83.name = "l_midtarsal";
HAnimJoint83.center = new X3D.SFVec3f([0.1079,0.0317,0.067]);
HAnimJoint83.skinCoordIndex = new X3D.MFInt32([72,73,74,75,76,77,78,79]);
HAnimJoint83.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment84 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment84.DEF = "boxman_l_middistal";
HAnimSegment84.name = "l_middistal";
let Transform85 = browser.currentScene.createNode("Transform");
Transform85.translation = new X3D.SFVec3f([0.1079,0.0317,0.067]);
let Shape86 = browser.currentScene.createNode("Shape");
Shape86.USE = "SphereYellow";
Transform85YYY.child = new X3D.undefined();

Transform85ZZZ.child[0] = Shape86;

HAnimSegment84YYY.children = new X3D.MFNode();

HAnimSegment84ZZZ.children[0] = Transform85;

let HAnimSite87 = browser.currentScene.createNode("HAnimSite");
HAnimSite87.DEF = "boxman_l_middistal_tip";
HAnimSite87.name = "l_middistal_tip";
HAnimSite87.translation = new X3D.SFVec3f([0.095,0.0005,0.1924]);
let Shape88 = browser.currentScene.createNode("Shape");
Shape88.DEF = "SphereRed";
let Appearance89 = browser.currentScene.createNode("Appearance");
let Material90 = browser.currentScene.createNode("Material");
Material90.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material90;

appearance = Appearance89;

let Sphere91 = browser.currentScene.createNode("Sphere");
Sphere91.radius = 0.02;
geometry = Sphere91;

HAnimSite87YYY.children = new X3D.MFNode();

HAnimSite87ZZZ.children[0] = Shape88;

HAnimSegment84ZZZ.children[1] = HAnimSite87;

HAnimJoint83YYY.children = new X3D.MFNode();

HAnimJoint83ZZZ.children[0] = HAnimSegment84;

HAnimJoint79ZZZ.children[1] = HAnimJoint83;

HAnimJoint75ZZZ.children[1] = HAnimJoint79;

HAnimJoint71ZZZ.children[1] = HAnimJoint75;

HAnimJoint64ZZZ.children[1] = HAnimJoint71;

let HAnimJoint92 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint92.DEF = "boxman_r_hip";
HAnimJoint92.name = "r_hip";
HAnimJoint92.center = new X3D.SFVec3f([-0.0956,0.9364,0]);
HAnimJoint92.skinCoordIndex = new X3D.MFInt32([80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111]);
HAnimJoint92.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
let HAnimSegment93 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment93.DEF = "boxman_r_thigh";
HAnimSegment93.name = "r_thigh";
let Transform94 = browser.currentScene.createNode("Transform");
Transform94.translation = new X3D.SFVec3f([-0.0956,0.9364,0]);
let Shape95 = browser.currentScene.createNode("Shape");
Shape95.USE = "SphereYellow";
Transform94YYY.child = new X3D.undefined();

Transform94ZZZ.child[0] = Shape95;

HAnimSegment93YYY.children = new X3D.MFNode();

HAnimSegment93ZZZ.children[0] = Transform94;

HAnimJoint92YYY.children = new X3D.MFNode();

HAnimJoint92ZZZ.children[0] = HAnimSegment93;

let HAnimJoint96 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint96.DEF = "boxman_r_knee";
HAnimJoint96.name = "r_knee";
HAnimJoint96.center = new X3D.SFVec3f([-0.0956,0.5095,-0.0036]);
HAnimJoint96.skinCoordIndex = new X3D.MFInt32([104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131]);
HAnimJoint96.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment97 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment97.DEF = "boxman_r_calf";
HAnimSegment97.name = "r_calf";
let Transform98 = browser.currentScene.createNode("Transform");
Transform98.translation = new X3D.SFVec3f([-0.0956,0.5095,-0.0036]);
let Shape99 = browser.currentScene.createNode("Shape");
Shape99.USE = "SphereYellow";
Transform98YYY.child = new X3D.undefined();

Transform98ZZZ.child[0] = Shape99;

HAnimSegment97YYY.children = new X3D.MFNode();

HAnimSegment97ZZZ.children[0] = Transform98;

HAnimJoint96YYY.children = new X3D.MFNode();

HAnimJoint96ZZZ.children[0] = HAnimSegment97;

let HAnimJoint100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint100.DEF = "boxman_r_ankle";
HAnimJoint100.name = "r_ankle";
HAnimJoint100.center = new X3D.SFVec3f([-0.0946,0.0762,-0.0261]);
HAnimJoint100.skinCoordIndex = new X3D.MFInt32([132,133,134,135,136,137,138,139]);
HAnimJoint100.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment101 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment101.DEF = "boxman_r_hindfoot";
HAnimSegment101.name = "r_hindfoot";
let Transform102 = browser.currentScene.createNode("Transform");
Transform102.translation = new X3D.SFVec3f([-0.0946,0.0762,-0.0261]);
let Shape103 = browser.currentScene.createNode("Shape");
Shape103.USE = "SphereYellow";
Transform102YYY.child = new X3D.undefined();

Transform102ZZZ.child[0] = Shape103;

HAnimSegment101YYY.children = new X3D.MFNode();

HAnimSegment101ZZZ.children[0] = Transform102;

HAnimJoint100YYY.children = new X3D.MFNode();

HAnimJoint100ZZZ.children[0] = HAnimSegment101;

let HAnimJoint104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint104.DEF = "boxman_r_midtarsal";
HAnimJoint104.name = "r_midtarsal";
HAnimJoint104.center = new X3D.SFVec3f([-0.1079,0.0317,0.067]);
HAnimJoint104.skinCoordIndex = new X3D.MFInt32([140,141,142,143,144,145,146,147]);
HAnimJoint104.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment105 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment105.DEF = "boxman_r_middistal";
HAnimSegment105.name = "r_middistal";
let Transform106 = browser.currentScene.createNode("Transform");
Transform106.translation = new X3D.SFVec3f([-0.1079,0.0317,0.067]);
let Shape107 = browser.currentScene.createNode("Shape");
Shape107.USE = "SphereYellow";
Transform106YYY.child = new X3D.undefined();

Transform106ZZZ.child[0] = Shape107;

HAnimSegment105YYY.children = new X3D.MFNode();

HAnimSegment105ZZZ.children[0] = Transform106;

let HAnimSite108 = browser.currentScene.createNode("HAnimSite");
HAnimSite108.DEF = "boxman_r_middistal_tip";
HAnimSite108.name = "r_middistal_tip";
HAnimSite108.translation = new X3D.SFVec3f([-0.095,0.0005,0.1924]);
let Shape109 = browser.currentScene.createNode("Shape");
Shape109.USE = "SphereRed";
HAnimSite108YYY.children = new X3D.MFNode();

HAnimSite108ZZZ.children[0] = Shape109;

HAnimSegment105ZZZ.children[1] = HAnimSite108;

HAnimJoint104YYY.children = new X3D.MFNode();

HAnimJoint104ZZZ.children[0] = HAnimSegment105;

HAnimJoint100ZZZ.children[1] = HAnimJoint104;

HAnimJoint96ZZZ.children[1] = HAnimJoint100;

HAnimJoint92ZZZ.children[1] = HAnimJoint96;

HAnimJoint64ZZZ.children[2] = HAnimJoint92;

let HAnimJoint110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint110.DEF = "boxman_vl5";
HAnimJoint110.name = "vl5";
HAnimJoint110.center = new X3D.SFVec3f([0,1.0817,-0.0728]);
HAnimJoint110.skinCoordIndex = new X3D.MFInt32([148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167]);
HAnimJoint110.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment111 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment111.DEF = "boxman_l5";
HAnimSegment111.name = "l5";
let Transform112 = browser.currentScene.createNode("Transform");
Transform112.translation = new X3D.SFVec3f([0,1.0817,-0.0728]);
let Shape113 = browser.currentScene.createNode("Shape");
Shape113.USE = "SphereYellow";
Transform112YYY.child = new X3D.undefined();

Transform112ZZZ.child[0] = Shape113;

HAnimSegment111YYY.children = new X3D.MFNode();

HAnimSegment111ZZZ.children[0] = Transform112;

HAnimJoint110YYY.children = new X3D.MFNode();

HAnimJoint110ZZZ.children[0] = HAnimSegment111;

let HAnimJoint114 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint114.DEF = "boxman_skullbase";
HAnimJoint114.name = "skullbase";
HAnimJoint114.center = new X3D.SFVec3f([0,1.644,0.036]);
HAnimJoint114.skinCoordIndex = new X3D.MFInt32([168,169,170,171,172,173,174,175]);
HAnimJoint114.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment115 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment115.DEF = "boxman_skull";
HAnimSegment115.name = "skull";
let Transform116 = browser.currentScene.createNode("Transform");
Transform116.translation = new X3D.SFVec3f([0,1.644,0.036]);
let Shape117 = browser.currentScene.createNode("Shape");
Shape117.USE = "SphereYellow";
Transform116YYY.child = new X3D.undefined();

Transform116ZZZ.child[0] = Shape117;

HAnimSegment115YYY.children = new X3D.MFNode();

HAnimSegment115ZZZ.children[0] = Transform116;

let HAnimSite118 = browser.currentScene.createNode("HAnimSite");
HAnimSite118.DEF = "boxman_skull_tip";
HAnimSite118.name = "skull_tip";
HAnimSite118.translation = new X3D.SFVec3f([-0.0029,1.7771,0.0274]);
let Shape119 = browser.currentScene.createNode("Shape");
Shape119.USE = "SphereYellow";
HAnimSite118YYY.children = new X3D.MFNode();

HAnimSite118ZZZ.children[0] = Shape119;

HAnimSegment115ZZZ.children[1] = HAnimSite118;

HAnimJoint114YYY.children = new X3D.MFNode();

HAnimJoint114ZZZ.children[0] = HAnimSegment115;

HAnimJoint110ZZZ.children[1] = HAnimJoint114;

let HAnimJoint120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint120.DEF = "boxman_l_shoulder";
HAnimJoint120.name = "l_shoulder";
HAnimJoint120.center = new X3D.SFVec3f([0.1968,1.4642,-0.0265]);
HAnimJoint120.skinCoordIndex = new X3D.MFInt32([176,177,178,179,180,181,182,183]);
HAnimJoint120.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment121 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment121.DEF = "boxman_l_upperarm";
HAnimSegment121.name = "l_upperarm";
let Transform122 = browser.currentScene.createNode("Transform");
Transform122.translation = new X3D.SFVec3f([0.1968,1.4642,-0.0265]);
let Shape123 = browser.currentScene.createNode("Shape");
Shape123.USE = "SphereYellow";
Transform122YYY.child = new X3D.undefined();

Transform122ZZZ.child[0] = Shape123;

HAnimSegment121YYY.children = new X3D.MFNode();

HAnimSegment121ZZZ.children[0] = Transform122;

HAnimJoint120YYY.children = new X3D.MFNode();

HAnimJoint120ZZZ.children[0] = HAnimSegment121;

let HAnimJoint124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint124.DEF = "boxman_l_elbow";
HAnimJoint124.name = "l_elbow";
HAnimJoint124.center = new X3D.SFVec3f([0.1982,1.1622,-0.0557]);
HAnimJoint124.skinCoordIndex = new X3D.MFInt32([184,185,186,187,188,189,190,191]);
HAnimJoint124.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment125 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment125.DEF = "boxman_l_forearm";
HAnimSegment125.name = "l_forearm";
let Transform126 = browser.currentScene.createNode("Transform");
Transform126.translation = new X3D.SFVec3f([0.1982,1.1622,-0.0557]);
let Shape127 = browser.currentScene.createNode("Shape");
Shape127.USE = "SphereYellow";
Transform126YYY.child = new X3D.undefined();

Transform126ZZZ.child[0] = Shape127;

HAnimSegment125YYY.children = new X3D.MFNode();

HAnimSegment125ZZZ.children[0] = Transform126;

HAnimJoint124YYY.children = new X3D.MFNode();

HAnimJoint124ZZZ.children[0] = HAnimSegment125;

let HAnimJoint128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint128.DEF = "boxman_l_wrist";
HAnimJoint128.name = "l_wrist";
HAnimJoint128.center = new X3D.SFVec3f([0.1972,0.8929,-0.069]);
HAnimJoint128.skinCoordIndex = new X3D.MFInt32([192,193,194,195,196,197,198,199]);
HAnimJoint128.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment129 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment129.DEF = "boxman_l_hand";
HAnimSegment129.name = "l_hand";
let Transform130 = browser.currentScene.createNode("Transform");
Transform130.translation = new X3D.SFVec3f([0.1972,0.8929,-0.069]);
let Shape131 = browser.currentScene.createNode("Shape");
Shape131.USE = "SphereYellow";
Transform130YYY.child = new X3D.undefined();

Transform130ZZZ.child[0] = Shape131;

HAnimSegment129YYY.children = new X3D.MFNode();

HAnimSegment129ZZZ.children[0] = Transform130;

let HAnimSite132 = browser.currentScene.createNode("HAnimSite");
HAnimSite132.DEF = "boxman_l_hand_tip";
HAnimSite132.name = "l_hand_tip";
HAnimSite132.translation = new X3D.SFVec3f([0.1912,0.6976,-0.071]);
let Shape133 = browser.currentScene.createNode("Shape");
Shape133.USE = "SphereRed";
HAnimSite132YYY.children = new X3D.MFNode();

HAnimSite132ZZZ.children[0] = Shape133;

HAnimSegment129ZZZ.children[1] = HAnimSite132;

HAnimJoint128YYY.children = new X3D.MFNode();

HAnimJoint128ZZZ.children[0] = HAnimSegment129;

HAnimJoint124ZZZ.children[1] = HAnimJoint128;

HAnimJoint120ZZZ.children[1] = HAnimJoint124;

HAnimJoint110ZZZ.children[2] = HAnimJoint120;

let HAnimJoint134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint134.DEF = "boxman_r_shoulder";
HAnimJoint134.name = "r_shoulder";
HAnimJoint134.center = new X3D.SFVec3f([-0.1968,1.4642,-0.0265]);
HAnimJoint134.skinCoordIndex = new X3D.MFInt32([200,201,202,203,204,205,206,207]);
HAnimJoint134.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment135 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment135.DEF = "boxman_r_upperarm";
HAnimSegment135.name = "r_upperarm";
let Transform136 = browser.currentScene.createNode("Transform");
Transform136.translation = new X3D.SFVec3f([-0.1968,1.4642,-0.0265]);
let Shape137 = browser.currentScene.createNode("Shape");
Shape137.USE = "SphereYellow";
Transform136YYY.child = new X3D.undefined();

Transform136ZZZ.child[0] = Shape137;

HAnimSegment135YYY.children = new X3D.MFNode();

HAnimSegment135ZZZ.children[0] = Transform136;

HAnimJoint134YYY.children = new X3D.MFNode();

HAnimJoint134ZZZ.children[0] = HAnimSegment135;

let HAnimJoint138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint138.DEF = "boxman_r_elbow";
HAnimJoint138.name = "r_elbow";
HAnimJoint138.center = new X3D.SFVec3f([-0.1982,1.1622,-0.0557]);
HAnimJoint138.skinCoordIndex = new X3D.MFInt32([208,209,210,211,212,213,214,215]);
HAnimJoint138.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment139 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment139.DEF = "boxman_r_forearm";
HAnimSegment139.name = "r_forearm";
let Transform140 = browser.currentScene.createNode("Transform");
Transform140.translation = new X3D.SFVec3f([-0.1982,1.1622,-0.0557]);
let Shape141 = browser.currentScene.createNode("Shape");
Shape141.USE = "SphereYellow";
Transform140YYY.child = new X3D.undefined();

Transform140ZZZ.child[0] = Shape141;

HAnimSegment139YYY.children = new X3D.MFNode();

HAnimSegment139ZZZ.children[0] = Transform140;

HAnimJoint138YYY.children = new X3D.MFNode();

HAnimJoint138ZZZ.children[0] = HAnimSegment139;

let HAnimJoint142 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint142.DEF = "boxman_r_wrist";
HAnimJoint142.name = "r_wrist";
HAnimJoint142.center = new X3D.SFVec3f([-0.1972,0.8929,-0.069]);
HAnimJoint142.skinCoordIndex = new X3D.MFInt32([216,217,218,219,220,221,222,223]);
HAnimJoint142.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment143 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment143.DEF = "boxman_r_hand";
HAnimSegment143.name = "r_hand";
let Transform144 = browser.currentScene.createNode("Transform");
Transform144.translation = new X3D.SFVec3f([-0.1972,0.8929,-0.069]);
let Shape145 = browser.currentScene.createNode("Shape");
Shape145.USE = "SphereYellow";
Transform144YYY.child = new X3D.undefined();

Transform144ZZZ.child[0] = Shape145;

HAnimSegment143YYY.children = new X3D.MFNode();

HAnimSegment143ZZZ.children[0] = Transform144;

let HAnimSite146 = browser.currentScene.createNode("HAnimSite");
HAnimSite146.DEF = "boxman_r_hand_tip";
HAnimSite146.name = "r_hand_tip";
HAnimSite146.translation = new X3D.SFVec3f([-0.1912,0.6976,-0.071]);
let Shape147 = browser.currentScene.createNode("Shape");
Shape147.USE = "SphereRed";
HAnimSite146YYY.children = new X3D.MFNode();

HAnimSite146ZZZ.children[0] = Shape147;

HAnimSegment143ZZZ.children[1] = HAnimSite146;

HAnimJoint142YYY.children = new X3D.MFNode();

HAnimJoint142ZZZ.children[0] = HAnimSegment143;

HAnimJoint138ZZZ.children[1] = HAnimJoint142;

HAnimJoint134ZZZ.children[1] = HAnimJoint138;

HAnimJoint110ZZZ.children[3] = HAnimJoint134;

HAnimJoint64ZZZ.children[3] = HAnimJoint110;

HAnimHumanoid63.joints = new X3D.MFNode();

HAnimHumanoid63XXX.joints[0] = HAnimJoint64;

let HAnimJoint148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint148.USE = "boxman_humanoid_root";
joints[1] = HAnimJoint148;

let HAnimJoint149 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint149.USE = "boxman_skullbase";
joints[2] = HAnimJoint149;

let HAnimJoint150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint150.USE = "boxman_vl5";
joints[3] = HAnimJoint150;

let HAnimJoint151 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint151.USE = "boxman_l_ankle";
joints[4] = HAnimJoint151;

let HAnimJoint152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint152.USE = "boxman_r_ankle";
joints[5] = HAnimJoint152;

let HAnimJoint153 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint153.USE = "boxman_l_elbow";
joints[6] = HAnimJoint153;

let HAnimJoint154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint154.USE = "boxman_r_elbow";
joints[7] = HAnimJoint154;

let HAnimJoint155 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint155.USE = "boxman_l_hip";
joints[8] = HAnimJoint155;

let HAnimJoint156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint156.USE = "boxman_r_hip";
joints[9] = HAnimJoint156;

let HAnimJoint157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint157.USE = "boxman_l_knee";
joints[10] = HAnimJoint157;

let HAnimJoint158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint158.USE = "boxman_r_knee";
joints[11] = HAnimJoint158;

let HAnimJoint159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint159.USE = "boxman_l_midtarsal";
joints[12] = HAnimJoint159;

let HAnimJoint160 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint160.USE = "boxman_r_midtarsal";
joints[13] = HAnimJoint160;

let HAnimJoint161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint161.USE = "boxman_l_shoulder";
joints[14] = HAnimJoint161;

let HAnimJoint162 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint162.USE = "boxman_r_shoulder";
joints[15] = HAnimJoint162;

let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.USE = "boxman_l_wrist";
joints[16] = HAnimJoint163;

let HAnimJoint164 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint164.USE = "boxman_r_wrist";
joints[17] = HAnimJoint164;

let HAnimSegment165 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment165.USE = "boxman_l5";
segments[18] = HAnimSegment165;

let HAnimSegment166 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment166.USE = "boxman_sacrum";
segments[19] = HAnimSegment166;

let HAnimSegment167 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment167.USE = "boxman_skull";
segments[20] = HAnimSegment167;

let HAnimSegment168 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment168.USE = "boxman_l_calf";
segments[21] = HAnimSegment168;

let HAnimSegment169 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment169.USE = "boxman_r_calf";
segments[22] = HAnimSegment169;

let HAnimSegment170 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment170.USE = "boxman_l_forearm";
segments[23] = HAnimSegment170;

let HAnimSegment171 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment171.USE = "boxman_r_forearm";
segments[24] = HAnimSegment171;

let HAnimSegment172 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment172.USE = "boxman_l_hand";
segments[25] = HAnimSegment172;

let HAnimSegment173 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment173.USE = "boxman_r_hand";
segments[26] = HAnimSegment173;

let HAnimSegment174 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment174.USE = "boxman_l_hindfoot";
segments[27] = HAnimSegment174;

let HAnimSegment175 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment175.USE = "boxman_r_hindfoot";
segments[28] = HAnimSegment175;

let HAnimSegment176 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment176.USE = "boxman_l_middistal";
segments[29] = HAnimSegment176;

let HAnimSegment177 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment177.USE = "boxman_r_middistal";
segments[30] = HAnimSegment177;

let HAnimSegment178 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment178.USE = "boxman_l_thigh";
segments[31] = HAnimSegment178;

let HAnimSegment179 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment179.USE = "boxman_r_thigh";
segments[32] = HAnimSegment179;

let HAnimSegment180 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment180.USE = "boxman_l_upperarm";
segments[33] = HAnimSegment180;

let HAnimSegment181 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment181.USE = "boxman_r_upperarm";
segments[34] = HAnimSegment181;

let HAnimSite182 = browser.currentScene.createNode("HAnimSite");
HAnimSite182.USE = "boxman_skull_tip";
viewpoints[35] = HAnimSite182;

let HAnimSite183 = browser.currentScene.createNode("HAnimSite");
HAnimSite183.USE = "boxman_l_hand_tip";
viewpoints[36] = HAnimSite183;

let HAnimSite184 = browser.currentScene.createNode("HAnimSite");
HAnimSite184.USE = "boxman_r_hand_tip";
viewpoints[37] = HAnimSite184;

let HAnimSite185 = browser.currentScene.createNode("HAnimSite");
HAnimSite185.USE = "boxman_l_middistal_tip";
viewpoints[38] = HAnimSite185;

let HAnimSite186 = browser.currentScene.createNode("HAnimSite");
HAnimSite186.USE = "boxman_r_middistal_tip";
viewpoints[39] = HAnimSite186;

let HAnimSite187 = browser.currentScene.createNode("HAnimSite");
HAnimSite187.DEF = "boxman_BoxMan_view";
HAnimSite187.name = "BoxMan_view";
let Viewpoint188 = browser.currentScene.createNode("Viewpoint");
Viewpoint188.DEF = "Inclined_View";
Viewpoint188.description = "Inclined View";
Viewpoint188.position = new X3D.SFVec3f([2,0.9,2]);
Viewpoint188.orientation = new X3D.SFRotation([0,1,0,0.78]);
HAnimSite187YYY.children = new X3D.MFNode();

HAnimSite187ZZZ.children[0] = Viewpoint188;

let Viewpoint189 = browser.currentScene.createNode("Viewpoint");
Viewpoint189.DEF = "Front_View";
Viewpoint189.description = "Front View";
Viewpoint189.position = new X3D.SFVec3f([0,1,3]);
HAnimSite187ZZZ.children[1] = Viewpoint189;

let Viewpoint190 = browser.currentScene.createNode("Viewpoint");
Viewpoint190.DEF = "Right_View";
Viewpoint190.description = "Right-side View";
Viewpoint190.position = new X3D.SFVec3f([-3,1,0]);
Viewpoint190.orientation = new X3D.SFRotation([0,1,0,-1.57]);
HAnimSite187ZZZ.children[2] = Viewpoint190;

let Viewpoint191 = browser.currentScene.createNode("Viewpoint");
Viewpoint191.DEF = "Left_View";
Viewpoint191.description = "Left-side View";
Viewpoint191.position = new X3D.SFVec3f([3,1,0]);
Viewpoint191.orientation = new X3D.SFRotation([0,1,0,1.57]);
HAnimSite187ZZZ.children[3] = Viewpoint191;

let Viewpoint192 = browser.currentScene.createNode("Viewpoint");
Viewpoint192.DEF = "Top_View";
Viewpoint192.description = "Top View";
Viewpoint192.position = new X3D.SFVec3f([0,3,0]);
Viewpoint192.orientation = new X3D.SFRotation([1,0,0,-1.57]);
HAnimSite187ZZZ.children[4] = Viewpoint192;

viewpoints[40] = HAnimSite187;

let Coordinate193 = browser.currentScene.createNode("Coordinate");
Coordinate193.DEF = "SKINCOORD";
Coordinate193.point = new X3D.MFVec3f([-0.05,1,0.05,0.05,1,0.05,0.03,0.97,-0.1,-0.03,0.97,-0.1,0.03,0.94,-0.075,-0.03,0.94,-0.075,0,0.92,0,0,0.94,0.03,-0.12,1.06,0.05,0.12,1.06,0.05,0.12,1.06,-0.1,-0.12,1.06,-0.1,0.0456,0.9364,0.05,0.1456,0.9364,0.05,0.1456,0.9364,-0.05,0.0456,0.9364,-0.05,0.0456,0.9,0.05,0.1456,0.9,0.05,0.1456,0.9,-0.05,0.0456,0.9,-0.05,0.0456,0.8,0.05,0.1456,0.8,0.05,0.1456,0.8,-0.05,0.0456,0.8,-0.05,0.0456,0.7,0.05,0.1456,0.7,0.05,0.1456,0.7,-0.05,0.0456,0.7,-0.05,0.0456,0.6,0.05,0.1456,0.6,0.05,0.1456,0.6,-0.05,0.0456,0.6,-0.05,0.0456,0.55,0.05,0.1456,0.55,0.05,0.1456,0.55,-0.05,0.0456,0.55,-0.05,0.0456,0.52,0.05,0.1456,0.52,0.05,0.1456,0.52,-0.05,0.0456,0.52,-0.05,0.0456,0.5,0.05,0.1456,0.5,0.05,0.1456,0.5,-0.05,0.0456,0.5,-0.05,0.0454,0.43,0.045,0.1454,0.43,0.045,0.1454,0.43,-0.055,0.0454,0.43,-0.055,0.0452,0.36,0.04,0.1452,0.36,0.04,0.1452,0.36,-0.06,0.0452,0.36,-0.06,0.045,0.29,0.035,0.145,0.29,0.035,0.145,0.29,-0.065,0.045,0.29,-0.065,0.0448,0.21,0.03,0.1448,0.21,0.03,0.1448,0.21,-0.07,0.0448,0.21,-0.07,0.0446,0.1262,0.025,0.1446,0.1262,0.025,0.1446,0.1262,-0.075,0.0446,0.1262,-0.075,0.0446,0.0762,0.025,0.1446,0.0762,0.025,0.1446,0,-0.075,0.0446,0,-0.075,0.0446,0.0562,0.057,0.1446,0.0562,0.057,0.1446,0,0.057,0.0446,0,0.057,0.0446,0.0562,0.087,0.1446,0.0562,0.087,0.1446,0,0.087,0.0446,0,0.087,0.0446,0.0562,0.1924,0.1446,0.0562,0.1924,0.1446,0,0.1924,0.0446,0,0.1924,-0.0456,0.9364,0.05,-0.1456,0.9364,0.05,-0.1456,0.9364,-0.05,-0.0456,0.9364,-0.05,-0.0456,0.9,0.05,-0.1456,0.9,0.05,-0.1456,0.9,-0.05,-0.0456,0.9,-0.05,-0.0456,0.8,0.05,-0.1456,0.8,0.05,-0.1456,0.8,-0.05,-0.0456,0.8,-0.05,-0.0456,0.7,0.05,-0.1456,0.7,0.05,-0.1456,0.7,-0.05,-0.0456,0.7,-0.05,-0.0456,0.6,0.05,-0.1456,0.6,0.05,-0.1456,0.6,-0.05,-0.0456,0.6,-0.05,-0.0456,0.55,0.05,-0.1456,0.55,0.05,-0.1456,0.55,-0.05,-0.0456,0.55,-0.05,-0.0456,0.52,0.05,-0.1456,0.52,0.05,-0.1456,0.52,-0.05,-0.0456,0.52,-0.05,-0.0456,0.5,0.05,-0.1456,0.5,0.05,-0.1456,0.5,-0.05,-0.0456,0.5,-0.05,-0.0454,0.43,0.045,-0.1454,0.43,0.045,-0.1454,0.43,-0.055,-0.0454,0.43,-0.055,-0.0452,0.36,0.04,-0.1452,0.36,0.04,-0.1452,0.36,-0.06,-0.0452,0.36,-0.06,-0.045,0.29,0.035,-0.145,0.29,0.035,-0.145,0.29,-0.065,-0.045,0.29,-0.065,-0.0448,0.21,0.03,-0.1448,0.21,0.03,-0.1448,0.21,-0.07,-0.0448,0.21,-0.07,-0.0446,0.1262,0.025,-0.1446,0.1262,0.025,-0.1446,0.1262,-0.075,-0.0446,0.1262,-0.075,-0.0446,0.0762,0.025,-0.1446,0.0762,0.025,-0.1446,0,-0.075,-0.0446,0,-0.075,-0.0446,0.0562,0.057,-0.1446,0.0562,0.057,-0.1446,0,0.057,-0.0446,0,0.057,-0.0446,0.0562,0.087,-0.1446,0.0562,0.087,-0.1446,0,0.087,-0.0446,0,0.087,-0.0446,0.0562,0.1924,-0.1446,0.0562,0.1924,-0.1446,0,0.1924,-0.0446,0,0.1924,-0.12,1.1,0.05,0.12,1.1,0.05,0.12,1.1,-0.1,-0.12,1.1,-0.1,-0.14,1.42,0.045,0.14,1.42,0.045,0.14,1.42,-0.09,-0.14,1.42,-0.09,-0.24,1.52,0.035,0.24,1.52,0.035,0.24,1.52,-0.09,-0.24,1.52,-0.09,-0.05,1.56,0.03,0.05,1.56,0.03,0.05,1.56,-0.06,-0.05,1.56,-0.06,-0.05,1.6,0.06,0.05,1.6,0.06,0.05,1.62,-0.03,-0.05,1.62,-0.03,-0.07,1.777,0.13,0.07,1.777,0.13,0.07,1.777,-0.03,-0.07,1.777,-0.03,-0.07,1.6,0.13,0.07,1.6,0.13,0.07,1.66,-0.03,-0.07,1.66,-0.03,0.16,1.42,0.015,0.24,1.5,0.015,0.24,1.5,-0.075,0.16,1.42,-0.075,0.17,1.18,-0.025,0.23,1.18,-0.025,0.23,1.18,-0.085,0.17,1.18,-0.085,0.17,1.14,-0.025,0.23,1.14,-0.025,0.23,1.14,-0.085,0.17,1.14,-0.085,0.18,0.91,-0.05,0.22,0.91,-0.05,0.22,0.91,-0.09,0.18,0.91,-0.09,0.18,0.87,-0.02,0.22,0.87,-0.02,0.22,0.87,-0.1,0.18,0.87,-0.1,0.18,0.6976,-0.02,0.22,0.6976,-0.02,0.22,0.6976,-0.1,0.18,0.6976,-0.1,-0.16,1.42,0.015,-0.24,1.5,0.015,-0.24,1.5,-0.075,-0.16,1.42,-0.075,-0.17,1.18,-0.025,-0.23,1.18,-0.025,-0.23,1.18,-0.085,-0.17,1.18,-0.085,-0.17,1.14,-0.025,-0.23,1.14,-0.025,-0.23,1.14,-0.085,-0.17,1.14,-0.085,-0.18,0.91,-0.05,-0.22,0.91,-0.05,-0.22,0.91,-0.09,-0.18,0.91,-0.09,-0.18,0.87,-0.02,-0.22,0.87,-0.02,-0.22,0.87,-0.1,-0.18,0.87,-0.1,-0.18,0.6976,-0.02,-0.22,0.6976,-0.02,-0.22,0.6976,-0.1,-0.18,0.6976,-0.1]);
skinCoord = Coordinate193;

let Group194 = browser.currentScene.createNode("Group");
let Shape195 = browser.currentScene.createNode("Shape");
Shape195.DEF = "TrouserSkin";
let Appearance196 = browser.currentScene.createNode("Appearance");
let Material197 = browser.currentScene.createNode("Material");
Material197.diffuseColor = new X3D.SFColor([0,0,1]);
Material197.transparency = 0.5;
material = Material197;

appearance = Appearance196;

let IndexedFaceSet198 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet198.coordIndex = new X3D.MFInt32([0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1]);
let Coordinate199 = browser.currentScene.createNode("Coordinate");
Coordinate199.USE = "SKINCOORD";
coord = Coordinate199;

geometry = IndexedFaceSet198;

Group194YYY.children = new X3D.MFNode();

Group194ZZZ.children[0] = Shape195;

let Shape200 = browser.currentScene.createNode("Shape");
Shape200.DEF = "ShoeSkin";
let Appearance201 = browser.currentScene.createNode("Appearance");
let Material202 = browser.currentScene.createNode("Material");
Material202.diffuseColor = new X3D.SFColor([0,0,0]);
Material202.transparency = 0.5;
material = Material202;

appearance = Appearance201;

let IndexedFaceSet203 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet203.coordIndex = new X3D.MFInt32([60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1]);
let Coordinate204 = browser.currentScene.createNode("Coordinate");
Coordinate204.USE = "SKINCOORD";
coord = Coordinate204;

geometry = IndexedFaceSet203;

Group194ZZZ.children[1] = Shape200;

let Shape205 = browser.currentScene.createNode("Shape");
Shape205.DEF = "ShirtSkin";
let Appearance206 = browser.currentScene.createNode("Appearance");
let Material207 = browser.currentScene.createNode("Material");
Material207.diffuseColor = new X3D.SFColor([1,1,0]);
Material207.transparency = 0.5;
material = Material207;

appearance = Appearance206;

let IndexedFaceSet208 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet208.coordIndex = new X3D.MFInt32([148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1]);
let Coordinate209 = browser.currentScene.createNode("Coordinate");
Coordinate209.USE = "SKINCOORD";
coord = Coordinate209;

geometry = IndexedFaceSet208;

Group194ZZZ.children[2] = Shape205;

let Shape210 = browser.currentScene.createNode("Shape");
Shape210.DEF = "HeadHandsFleshToneSkin";
let Appearance211 = browser.currentScene.createNode("Appearance");
let Material212 = browser.currentScene.createNode("Material");
Material212.diffuseColor = new X3D.SFColor([1,0.75,0.75]);
Material212.transparency = 0.5;
material = Material212;

appearance = Appearance211;

let IndexedFaceSet213 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet213.coordIndex = new X3D.MFInt32([172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
let Coordinate214 = browser.currentScene.createNode("Coordinate");
Coordinate214.USE = "SKINCOORD";
coord = Coordinate214;

geometry = IndexedFaceSet213;

Group194ZZZ.children[3] = Shape210;

let Shape215 = browser.currentScene.createNode("Shape");
Shape215.DEF = "SkinLines";
let Appearance216 = browser.currentScene.createNode("Appearance");
let Material217 = browser.currentScene.createNode("Material");
Material217.diffuseColor = new X3D.SFColor([0,0,0]);
material = Material217;

appearance = Appearance216;

let IndexedLineSet218 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet218.coordIndex = new X3D.MFInt32([0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
let Coordinate219 = browser.currentScene.createNode("Coordinate");
Coordinate219.USE = "SKINCOORD";
coord = Coordinate219;

geometry = IndexedLineSet218;

Group194ZZZ.children[4] = Shape215;

skin[41] = Group194;

browser.currentScene.children[3] = HAnimHumanoid63;

let ProtoInstance220 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance220.DEF = "ANIMATOR";
ProtoInstance220.name = "LOA1_WalkAnimation";
browser.currentScene.children[4] = ProtoInstance220;

let Script221 = browser.currentScene.createNode("Script");
Script221.DEF = "ENGINE";
Script221.url = new X3D.MFString([new X3D.SFString("BoxMan3.js"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan3.js")]);
Script221.directOutput = True;
Script222.getField("update")Script221YYY.field = new X3D.MFNode();

Script223.getField("humanoid")let HAnimHumanoid224 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid224.USE = "boxman_Humanoid";
field223YYY.children = new X3D.MFNode();

field223ZZZ.children[0] = HAnimHumanoid224;

Script221YYY.field = new X3D.MFNode();

Script225.getField("coordList")Script221YYY.field = new X3D.MFNode();

Script226.getField("joint")Script221YYY.field = new X3D.MFNode();

Script227.getField("translation")Script221YYY.field = new X3D.MFNode();

Script228.getField("rotation")Script221YYY.field = new X3D.MFNode();

Script229.getField("scale").setValue("1 1 1");
Script221YYY.field = new X3D.MFNode();

browser.currentScene.children[5] = Script221;

let ROUTE230 = browser.currentScene.createNode("ROUTE");
ROUTE230.fromNode = "ANIMATOR";
ROUTE230.fromField = "HumanoidRoot_translation_changed";
ROUTE230.toNode = "boxman_humanoid_root";
ROUTE230.toField = "set_translation";
browser.currentScene.children[6] = ROUTE230;

let ROUTE231 = browser.currentScene.createNode("ROUTE");
ROUTE231.fromNode = "ANIMATOR";
ROUTE231.fromField = "HumanoidRoot_rotation_changed";
ROUTE231.toNode = "boxman_humanoid_root";
ROUTE231.toField = "set_rotation";
browser.currentScene.children[7] = ROUTE231;

let ROUTE232 = browser.currentScene.createNode("ROUTE");
ROUTE232.fromNode = "ANIMATOR";
ROUTE232.fromField = "l_hip_rotation_changed";
ROUTE232.toNode = "boxman_l_hip";
ROUTE232.toField = "set_rotation";
browser.currentScene.children[8] = ROUTE232;

let ROUTE233 = browser.currentScene.createNode("ROUTE");
ROUTE233.fromNode = "ANIMATOR";
ROUTE233.fromField = "l_knee_rotation_changed";
ROUTE233.toNode = "boxman_l_knee";
ROUTE233.toField = "set_rotation";
browser.currentScene.children[9] = ROUTE233;

let ROUTE234 = browser.currentScene.createNode("ROUTE");
ROUTE234.fromNode = "ANIMATOR";
ROUTE234.fromField = "l_ankle_rotation_changed";
ROUTE234.toNode = "boxman_l_ankle";
ROUTE234.toField = "set_rotation";
browser.currentScene.children[10] = ROUTE234;

let ROUTE235 = browser.currentScene.createNode("ROUTE");
ROUTE235.fromNode = "ANIMATOR";
ROUTE235.fromField = "l_midtarsal_rotation_changed";
ROUTE235.toNode = "boxman_l_midtarsal";
ROUTE235.toField = "set_rotation";
browser.currentScene.children[11] = ROUTE235;

let ROUTE236 = browser.currentScene.createNode("ROUTE");
ROUTE236.fromNode = "ANIMATOR";
ROUTE236.fromField = "r_hip_rotation_changed";
ROUTE236.toNode = "boxman_r_hip";
ROUTE236.toField = "set_rotation";
browser.currentScene.children[12] = ROUTE236;

let ROUTE237 = browser.currentScene.createNode("ROUTE");
ROUTE237.fromNode = "ANIMATOR";
ROUTE237.fromField = "r_knee_rotation_changed";
ROUTE237.toNode = "boxman_r_knee";
ROUTE237.toField = "set_rotation";
browser.currentScene.children[13] = ROUTE237;

let ROUTE238 = browser.currentScene.createNode("ROUTE");
ROUTE238.fromNode = "ANIMATOR";
ROUTE238.fromField = "r_ankle_rotation_changed";
ROUTE238.toNode = "boxman_r_ankle";
ROUTE238.toField = "set_rotation";
browser.currentScene.children[14] = ROUTE238;

let ROUTE239 = browser.currentScene.createNode("ROUTE");
ROUTE239.fromNode = "ANIMATOR";
ROUTE239.fromField = "r_midtarsal_rotation_changed";
ROUTE239.toNode = "boxman_r_midtarsal";
ROUTE239.toField = "set_rotation";
browser.currentScene.children[15] = ROUTE239;

let ROUTE240 = browser.currentScene.createNode("ROUTE");
ROUTE240.fromNode = "ANIMATOR";
ROUTE240.fromField = "vl5_rotation_changed";
ROUTE240.toNode = "boxman_vl5";
ROUTE240.toField = "set_rotation";
browser.currentScene.children[16] = ROUTE240;

let ROUTE241 = browser.currentScene.createNode("ROUTE");
ROUTE241.fromNode = "ANIMATOR";
ROUTE241.fromField = "skullbase_rotation_changed";
ROUTE241.toNode = "boxman_skullbase";
ROUTE241.toField = "set_rotation";
browser.currentScene.children[17] = ROUTE241;

let ROUTE242 = browser.currentScene.createNode("ROUTE");
ROUTE242.fromNode = "ANIMATOR";
ROUTE242.fromField = "l_shoulder_rotation_changed";
ROUTE242.toNode = "boxman_l_shoulder";
ROUTE242.toField = "set_rotation";
browser.currentScene.children[18] = ROUTE242;

let ROUTE243 = browser.currentScene.createNode("ROUTE");
ROUTE243.fromNode = "ANIMATOR";
ROUTE243.fromField = "l_elbow_rotation_changed";
ROUTE243.toNode = "boxman_l_elbow";
ROUTE243.toField = "set_rotation";
browser.currentScene.children[19] = ROUTE243;

let ROUTE244 = browser.currentScene.createNode("ROUTE");
ROUTE244.fromNode = "ANIMATOR";
ROUTE244.fromField = "l_wrist_rotation_changed";
ROUTE244.toNode = "boxman_l_wrist";
ROUTE244.toField = "set_rotation";
browser.currentScene.children[20] = ROUTE244;

let ROUTE245 = browser.currentScene.createNode("ROUTE");
ROUTE245.fromNode = "ANIMATOR";
ROUTE245.fromField = "r_shoulder_rotation_changed";
ROUTE245.toNode = "boxman_r_shoulder";
ROUTE245.toField = "set_rotation";
browser.currentScene.children[21] = ROUTE245;

let ROUTE246 = browser.currentScene.createNode("ROUTE");
ROUTE246.fromNode = "ANIMATOR";
ROUTE246.fromField = "r_elbow_rotation_changed";
ROUTE246.toNode = "boxman_r_elbow";
ROUTE246.toField = "set_rotation";
browser.currentScene.children[22] = ROUTE246;

let ROUTE247 = browser.currentScene.createNode("ROUTE");
ROUTE247.fromNode = "ANIMATOR";
ROUTE247.fromField = "r_wrist_rotation_changed";
ROUTE247.toNode = "boxman_r_wrist";
ROUTE247.toField = "set_rotation";
browser.currentScene.children[23] = ROUTE247;

}
main ();

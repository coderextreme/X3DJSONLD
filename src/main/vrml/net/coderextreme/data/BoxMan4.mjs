const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "BoxMan.x3d");
scene.addMetaData("description", "A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation scripting via an external prototype (ExternProtoDeclare).");
scene.addMetaData("creator", "James Smith - james@vapourtech.com");
scene.addMetaData("translator", "Don Brutzman and Matt Beitler");
scene.addMetaData("created", "1 March 2001");
scene.addMetaData("translated", "19 October 2001");
scene.addMetaData("modified", "Tue, 09 Sep 2025 19:37:51 GMT");
scene.addMetaData("reference", "Original site http://HAnim.org");
scene.addMetaData("reference", "../Legacy/originals/boxman.wrl");
scene.addMetaData("reference", "BoxMan.js");
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
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan.x3d");
await browser .loadComponents (scene);
let ExternProtoDeclare33 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare33.name = "LOA1_WalkAnimation";
ExternProtoDeclare33.url = new X3D.MFString([new X3D.SFString("../Prototypes/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation"), new X3D.SFString("../Prototypes/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation")]);
ExternProtoDeclare34.getField("cycleInterval")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare35.getField("enabled")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare36.getField("loop")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare37.getField("startTime")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare38.getField("stopTime")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare39.getField("fraction_changed")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare40.getField("HumanoidRoot_translation_changed")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare41.getField("HumanoidRoot_rotation_changed")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare42.getField("l_hip_rotation_changed")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare43.getField("l_knee_rotation_changed")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare44.getField("l_ankle_rotation_changed")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare45.getField("l_midtarsal_rotation_changed")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare46.getField("r_hip_rotation_changed")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare47.getField("r_knee_rotation_changed")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare48.getField("r_ankle_rotation_changed")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare49.getField("r_midtarsal_rotation_changed")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare50.getField("vl5_rotation_changed")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare51.getField("skullbase_rotation_changed")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare52.getField("l_shoulder_rotation_changed")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare53.getField("l_elbow_rotation_changed")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare54.getField("l_wrist_rotation_changed")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare55.getField("r_shoulder_rotation_changed")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare56.getField("r_elbow_rotation_changed")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare57.getField("r_wrist_rotation_changed")ExternProtoDeclare33YYY.field = new X3D.MFNode();

ExternProtoDeclare58.getField("isActive")ExternProtoDeclare33YYY.field = new X3D.MFNode();

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = ExternProtoDeclare33;

let WorldInfo59 = browser.currentScene.createNode("WorldInfo");
WorldInfo59.title = "BoxMan - A Seamless VRML Human";
WorldInfo59.info = new X3D.MFString([new X3D.SFString("(C) 2000 James Smith - james@vapourtech.com"), new X3D.SFString("http://www.vapourtech.com/team/james/boxman.wrl"), new X3D.SFString("Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com")]);
browser.currentScene.children[1] = WorldInfo59;

let Background60 = browser.currentScene.createNode("Background");
Background60.skyColor = new X3D.MFColor([0.75,0.75,0.75]);
Background60.groundColor = new X3D.MFColor([0.6,0.6,0.6]);
browser.currentScene.children[2] = Background60;

let HAnimHumanoid61 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid61.DEF = "boxman_Humanoid";
HAnimHumanoid61.name = "Humanoid";
HAnimHumanoid61.info = new X3D.MFString([new X3D.SFString("authorName=James Smith"), new X3D.SFString("authorEmail=james@vapourtech.com"), new X3D.SFString("copyright=(C) 2000 James Smith - james@vapourtech.com"), new X3D.SFString("humanoidVersion=1.0")]);
HAnimHumanoid61.version = "1.0";
let HAnimJoint62 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint62.DEF = "boxman_humanoid_root";
HAnimJoint62.name = "humanoid_root";
HAnimJoint62.center = new X3D.SFVec3f([0,0.9723,-0.0728]);
HAnimJoint62.skinCoordIndex = new X3D.MFInt32([0,1,2,3,4,5,6,7,8,9,10,11]);
HAnimJoint62.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment63 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment63.DEF = "boxman_sacrum";
HAnimSegment63.name = "sacrum";
let Transform64 = browser.currentScene.createNode("Transform");
Transform64.translation = new X3D.SFVec3f([0,0.9723,-0.0728]);
let Shape65 = browser.currentScene.createNode("Shape");
Shape65.DEF = "SphereYellow";
let Appearance66 = browser.currentScene.createNode("Appearance");
let Material67 = browser.currentScene.createNode("Material");
Material67.diffuseColor = new X3D.SFColor([1,1,0]);
material = Material67;

appearance = Appearance66;

let Sphere68 = browser.currentScene.createNode("Sphere");
Sphere68.radius = 0.02;
geometry = Sphere68;

Transform64YYY.child = new X3D.undefined();

Transform64ZZZ.child[0] = Shape65;

HAnimSegment63YYY.children = new X3D.MFNode();

HAnimSegment63ZZZ.children[0] = Transform64;

HAnimJoint62YYY.children = new X3D.MFNode();

HAnimJoint62ZZZ.children[0] = HAnimSegment63;

let HAnimJoint69 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint69.DEF = "boxman_l_hip";
HAnimJoint69.name = "l_hip";
HAnimJoint69.center = new X3D.SFVec3f([0.0956,0.9364,0]);
HAnimJoint69.skinCoordIndex = new X3D.MFInt32([12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43]);
HAnimJoint69.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
let HAnimSegment70 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment70.DEF = "boxman_l_thigh";
HAnimSegment70.name = "l_thigh";
let Transform71 = browser.currentScene.createNode("Transform");
Transform71.translation = new X3D.SFVec3f([0.0956,0.9364,0]);
let Shape72 = browser.currentScene.createNode("Shape");
Shape72.USE = "SphereYellow";
Transform71YYY.child = new X3D.undefined();

Transform71ZZZ.child[0] = Shape72;

HAnimSegment70YYY.children = new X3D.MFNode();

HAnimSegment70ZZZ.children[0] = Transform71;

HAnimJoint69YYY.children = new X3D.MFNode();

HAnimJoint69ZZZ.children[0] = HAnimSegment70;

let HAnimJoint73 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint73.DEF = "boxman_l_knee";
HAnimJoint73.name = "l_knee";
HAnimJoint73.center = new X3D.SFVec3f([0.0956,0.5095,-0.0036]);
HAnimJoint73.skinCoordIndex = new X3D.MFInt32([36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63]);
HAnimJoint73.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment74 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment74.DEF = "boxman_l_calf";
HAnimSegment74.name = "l_calf";
let Transform75 = browser.currentScene.createNode("Transform");
Transform75.translation = new X3D.SFVec3f([0.0956,0.5095,-0.0036]);
let Shape76 = browser.currentScene.createNode("Shape");
Shape76.USE = "SphereYellow";
Transform75YYY.child = new X3D.undefined();

Transform75ZZZ.child[0] = Shape76;

HAnimSegment74YYY.children = new X3D.MFNode();

HAnimSegment74ZZZ.children[0] = Transform75;

HAnimJoint73YYY.children = new X3D.MFNode();

HAnimJoint73ZZZ.children[0] = HAnimSegment74;

let HAnimJoint77 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint77.DEF = "boxman_l_ankle";
HAnimJoint77.name = "l_ankle";
HAnimJoint77.center = new X3D.SFVec3f([0.0946,0.0762,-0.0261]);
HAnimJoint77.skinCoordIndex = new X3D.MFInt32([64,65,66,67,68,69,70,71]);
HAnimJoint77.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment78 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment78.DEF = "boxman_l_hindfoot";
HAnimSegment78.name = "l_hindfoot";
let Transform79 = browser.currentScene.createNode("Transform");
Transform79.translation = new X3D.SFVec3f([0.0946,0.0762,-0.0261]);
let Shape80 = browser.currentScene.createNode("Shape");
Shape80.USE = "SphereYellow";
Transform79YYY.child = new X3D.undefined();

Transform79ZZZ.child[0] = Shape80;

HAnimSegment78YYY.children = new X3D.MFNode();

HAnimSegment78ZZZ.children[0] = Transform79;

HAnimJoint77YYY.children = new X3D.MFNode();

HAnimJoint77ZZZ.children[0] = HAnimSegment78;

let HAnimJoint81 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint81.DEF = "boxman_l_midtarsal";
HAnimJoint81.name = "l_midtarsal";
HAnimJoint81.center = new X3D.SFVec3f([0.1079,0.0317,0.067]);
HAnimJoint81.skinCoordIndex = new X3D.MFInt32([72,73,74,75,76,77,78,79]);
HAnimJoint81.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment82 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment82.DEF = "boxman_l_middistal";
HAnimSegment82.name = "l_middistal";
let Transform83 = browser.currentScene.createNode("Transform");
Transform83.translation = new X3D.SFVec3f([0.1079,0.0317,0.067]);
let Shape84 = browser.currentScene.createNode("Shape");
Shape84.USE = "SphereYellow";
Transform83YYY.child = new X3D.undefined();

Transform83ZZZ.child[0] = Shape84;

HAnimSegment82YYY.children = new X3D.MFNode();

HAnimSegment82ZZZ.children[0] = Transform83;

let HAnimSite85 = browser.currentScene.createNode("HAnimSite");
HAnimSite85.DEF = "boxman_l_middistal_tip";
HAnimSite85.name = "l_middistal_tip";
HAnimSite85.translation = new X3D.SFVec3f([0.095,0.0005,0.1924]);
let Shape86 = browser.currentScene.createNode("Shape");
Shape86.DEF = "SphereRed";
let Appearance87 = browser.currentScene.createNode("Appearance");
let Material88 = browser.currentScene.createNode("Material");
Material88.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material88;

appearance = Appearance87;

let Sphere89 = browser.currentScene.createNode("Sphere");
Sphere89.radius = 0.02;
geometry = Sphere89;

HAnimSite85YYY.children = new X3D.MFNode();

HAnimSite85ZZZ.children[0] = Shape86;

HAnimSegment82ZZZ.children[1] = HAnimSite85;

HAnimJoint81YYY.children = new X3D.MFNode();

HAnimJoint81ZZZ.children[0] = HAnimSegment82;

HAnimJoint77ZZZ.children[1] = HAnimJoint81;

HAnimJoint73ZZZ.children[1] = HAnimJoint77;

HAnimJoint69ZZZ.children[1] = HAnimJoint73;

HAnimJoint62ZZZ.children[1] = HAnimJoint69;

let HAnimJoint90 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint90.DEF = "boxman_r_hip";
HAnimJoint90.name = "r_hip";
HAnimJoint90.center = new X3D.SFVec3f([-0.0956,0.9364,0]);
HAnimJoint90.skinCoordIndex = new X3D.MFInt32([80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111]);
HAnimJoint90.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
let HAnimSegment91 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment91.DEF = "boxman_r_thigh";
HAnimSegment91.name = "r_thigh";
let Transform92 = browser.currentScene.createNode("Transform");
Transform92.translation = new X3D.SFVec3f([-0.0956,0.9364,0]);
let Shape93 = browser.currentScene.createNode("Shape");
Shape93.USE = "SphereYellow";
Transform92YYY.child = new X3D.undefined();

Transform92ZZZ.child[0] = Shape93;

HAnimSegment91YYY.children = new X3D.MFNode();

HAnimSegment91ZZZ.children[0] = Transform92;

HAnimJoint90YYY.children = new X3D.MFNode();

HAnimJoint90ZZZ.children[0] = HAnimSegment91;

let HAnimJoint94 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint94.DEF = "boxman_r_knee";
HAnimJoint94.name = "r_knee";
HAnimJoint94.center = new X3D.SFVec3f([-0.0956,0.5095,-0.0036]);
HAnimJoint94.skinCoordIndex = new X3D.MFInt32([104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131]);
HAnimJoint94.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment95 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment95.DEF = "boxman_r_calf";
HAnimSegment95.name = "r_calf";
let Transform96 = browser.currentScene.createNode("Transform");
Transform96.translation = new X3D.SFVec3f([-0.0956,0.5095,-0.0036]);
let Shape97 = browser.currentScene.createNode("Shape");
Shape97.USE = "SphereYellow";
Transform96YYY.child = new X3D.undefined();

Transform96ZZZ.child[0] = Shape97;

HAnimSegment95YYY.children = new X3D.MFNode();

HAnimSegment95ZZZ.children[0] = Transform96;

HAnimJoint94YYY.children = new X3D.MFNode();

HAnimJoint94ZZZ.children[0] = HAnimSegment95;

let HAnimJoint98 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint98.DEF = "boxman_r_ankle";
HAnimJoint98.name = "r_ankle";
HAnimJoint98.center = new X3D.SFVec3f([-0.0946,0.0762,-0.0261]);
HAnimJoint98.skinCoordIndex = new X3D.MFInt32([132,133,134,135,136,137,138,139]);
HAnimJoint98.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment99 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment99.DEF = "boxman_r_hindfoot";
HAnimSegment99.name = "r_hindfoot";
let Transform100 = browser.currentScene.createNode("Transform");
Transform100.translation = new X3D.SFVec3f([-0.0946,0.0762,-0.0261]);
let Shape101 = browser.currentScene.createNode("Shape");
Shape101.USE = "SphereYellow";
Transform100YYY.child = new X3D.undefined();

Transform100ZZZ.child[0] = Shape101;

HAnimSegment99YYY.children = new X3D.MFNode();

HAnimSegment99ZZZ.children[0] = Transform100;

HAnimJoint98YYY.children = new X3D.MFNode();

HAnimJoint98ZZZ.children[0] = HAnimSegment99;

let HAnimJoint102 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint102.DEF = "boxman_r_midtarsal";
HAnimJoint102.name = "r_midtarsal";
HAnimJoint102.center = new X3D.SFVec3f([-0.1079,0.0317,0.067]);
HAnimJoint102.skinCoordIndex = new X3D.MFInt32([140,141,142,143,144,145,146,147]);
HAnimJoint102.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment103 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment103.DEF = "boxman_r_middistal";
HAnimSegment103.name = "r_middistal";
let Transform104 = browser.currentScene.createNode("Transform");
Transform104.translation = new X3D.SFVec3f([-0.1079,0.0317,0.067]);
let Shape105 = browser.currentScene.createNode("Shape");
Shape105.USE = "SphereYellow";
Transform104YYY.child = new X3D.undefined();

Transform104ZZZ.child[0] = Shape105;

HAnimSegment103YYY.children = new X3D.MFNode();

HAnimSegment103ZZZ.children[0] = Transform104;

let HAnimSite106 = browser.currentScene.createNode("HAnimSite");
HAnimSite106.DEF = "boxman_r_middistal_tip";
HAnimSite106.name = "r_middistal_tip";
HAnimSite106.translation = new X3D.SFVec3f([-0.095,0.0005,0.1924]);
let Shape107 = browser.currentScene.createNode("Shape");
Shape107.USE = "SphereRed";
HAnimSite106YYY.children = new X3D.MFNode();

HAnimSite106ZZZ.children[0] = Shape107;

HAnimSegment103ZZZ.children[1] = HAnimSite106;

HAnimJoint102YYY.children = new X3D.MFNode();

HAnimJoint102ZZZ.children[0] = HAnimSegment103;

HAnimJoint98ZZZ.children[1] = HAnimJoint102;

HAnimJoint94ZZZ.children[1] = HAnimJoint98;

HAnimJoint90ZZZ.children[1] = HAnimJoint94;

HAnimJoint62ZZZ.children[2] = HAnimJoint90;

let HAnimJoint108 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint108.DEF = "boxman_vl5";
HAnimJoint108.name = "vl5";
HAnimJoint108.center = new X3D.SFVec3f([0,1.0817,-0.0728]);
HAnimJoint108.skinCoordIndex = new X3D.MFInt32([148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167]);
HAnimJoint108.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment109 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment109.DEF = "boxman_l5";
HAnimSegment109.name = "l5";
let Transform110 = browser.currentScene.createNode("Transform");
Transform110.translation = new X3D.SFVec3f([0,1.0817,-0.0728]);
let Shape111 = browser.currentScene.createNode("Shape");
Shape111.USE = "SphereYellow";
Transform110YYY.child = new X3D.undefined();

Transform110ZZZ.child[0] = Shape111;

HAnimSegment109YYY.children = new X3D.MFNode();

HAnimSegment109ZZZ.children[0] = Transform110;

HAnimJoint108YYY.children = new X3D.MFNode();

HAnimJoint108ZZZ.children[0] = HAnimSegment109;

let HAnimJoint112 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint112.DEF = "boxman_skullbase";
HAnimJoint112.name = "skullbase";
HAnimJoint112.center = new X3D.SFVec3f([0,1.644,0.036]);
HAnimJoint112.skinCoordIndex = new X3D.MFInt32([168,169,170,171,172,173,174,175]);
HAnimJoint112.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment113 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment113.DEF = "boxman_skull";
HAnimSegment113.name = "skull";
let Transform114 = browser.currentScene.createNode("Transform");
Transform114.translation = new X3D.SFVec3f([0,1.644,0.036]);
let Shape115 = browser.currentScene.createNode("Shape");
Shape115.USE = "SphereYellow";
Transform114YYY.child = new X3D.undefined();

Transform114ZZZ.child[0] = Shape115;

HAnimSegment113YYY.children = new X3D.MFNode();

HAnimSegment113ZZZ.children[0] = Transform114;

let HAnimSite116 = browser.currentScene.createNode("HAnimSite");
HAnimSite116.DEF = "boxman_skull_tip";
HAnimSite116.name = "skull_tip";
HAnimSite116.translation = new X3D.SFVec3f([-0.0029,1.7771,0.0274]);
let Shape117 = browser.currentScene.createNode("Shape");
Shape117.USE = "SphereYellow";
HAnimSite116YYY.children = new X3D.MFNode();

HAnimSite116ZZZ.children[0] = Shape117;

HAnimSegment113ZZZ.children[1] = HAnimSite116;

HAnimJoint112YYY.children = new X3D.MFNode();

HAnimJoint112ZZZ.children[0] = HAnimSegment113;

HAnimJoint108ZZZ.children[1] = HAnimJoint112;

let HAnimJoint118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint118.DEF = "boxman_l_shoulder";
HAnimJoint118.name = "l_shoulder";
HAnimJoint118.center = new X3D.SFVec3f([0.1968,1.4642,-0.0265]);
HAnimJoint118.skinCoordIndex = new X3D.MFInt32([176,177,178,179,180,181,182,183]);
HAnimJoint118.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment119 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment119.DEF = "boxman_l_upperarm";
HAnimSegment119.name = "l_upperarm";
let Transform120 = browser.currentScene.createNode("Transform");
Transform120.translation = new X3D.SFVec3f([0.1968,1.4642,-0.0265]);
let Shape121 = browser.currentScene.createNode("Shape");
Shape121.USE = "SphereYellow";
Transform120YYY.child = new X3D.undefined();

Transform120ZZZ.child[0] = Shape121;

HAnimSegment119YYY.children = new X3D.MFNode();

HAnimSegment119ZZZ.children[0] = Transform120;

HAnimJoint118YYY.children = new X3D.MFNode();

HAnimJoint118ZZZ.children[0] = HAnimSegment119;

let HAnimJoint122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint122.DEF = "boxman_l_elbow";
HAnimJoint122.name = "l_elbow";
HAnimJoint122.center = new X3D.SFVec3f([0.1982,1.1622,-0.0557]);
HAnimJoint122.skinCoordIndex = new X3D.MFInt32([184,185,186,187,188,189,190,191]);
HAnimJoint122.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment123 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment123.DEF = "boxman_l_forearm";
HAnimSegment123.name = "l_forearm";
let Transform124 = browser.currentScene.createNode("Transform");
Transform124.translation = new X3D.SFVec3f([0.1982,1.1622,-0.0557]);
let Shape125 = browser.currentScene.createNode("Shape");
Shape125.USE = "SphereYellow";
Transform124YYY.child = new X3D.undefined();

Transform124ZZZ.child[0] = Shape125;

HAnimSegment123YYY.children = new X3D.MFNode();

HAnimSegment123ZZZ.children[0] = Transform124;

HAnimJoint122YYY.children = new X3D.MFNode();

HAnimJoint122ZZZ.children[0] = HAnimSegment123;

let HAnimJoint126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint126.DEF = "boxman_l_wrist";
HAnimJoint126.name = "l_wrist";
HAnimJoint126.center = new X3D.SFVec3f([0.1972,0.8929,-0.069]);
HAnimJoint126.skinCoordIndex = new X3D.MFInt32([192,193,194,195,196,197,198,199]);
HAnimJoint126.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment127 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment127.DEF = "boxman_l_hand";
HAnimSegment127.name = "l_hand";
let Transform128 = browser.currentScene.createNode("Transform");
Transform128.translation = new X3D.SFVec3f([0.1972,0.8929,-0.069]);
let Shape129 = browser.currentScene.createNode("Shape");
Shape129.USE = "SphereYellow";
Transform128YYY.child = new X3D.undefined();

Transform128ZZZ.child[0] = Shape129;

HAnimSegment127YYY.children = new X3D.MFNode();

HAnimSegment127ZZZ.children[0] = Transform128;

let HAnimSite130 = browser.currentScene.createNode("HAnimSite");
HAnimSite130.DEF = "boxman_l_hand_tip";
HAnimSite130.name = "l_hand_tip";
HAnimSite130.translation = new X3D.SFVec3f([0.1912,0.6976,-0.071]);
let Shape131 = browser.currentScene.createNode("Shape");
Shape131.USE = "SphereRed";
HAnimSite130YYY.children = new X3D.MFNode();

HAnimSite130ZZZ.children[0] = Shape131;

HAnimSegment127ZZZ.children[1] = HAnimSite130;

HAnimJoint126YYY.children = new X3D.MFNode();

HAnimJoint126ZZZ.children[0] = HAnimSegment127;

HAnimJoint122ZZZ.children[1] = HAnimJoint126;

HAnimJoint118ZZZ.children[1] = HAnimJoint122;

HAnimJoint108ZZZ.children[2] = HAnimJoint118;

let HAnimJoint132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint132.DEF = "boxman_r_shoulder";
HAnimJoint132.name = "r_shoulder";
HAnimJoint132.center = new X3D.SFVec3f([-0.1968,1.4642,-0.0265]);
HAnimJoint132.skinCoordIndex = new X3D.MFInt32([200,201,202,203,204,205,206,207]);
HAnimJoint132.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment133 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment133.DEF = "boxman_r_upperarm";
HAnimSegment133.name = "r_upperarm";
let Transform134 = browser.currentScene.createNode("Transform");
Transform134.translation = new X3D.SFVec3f([-0.1968,1.4642,-0.0265]);
let Shape135 = browser.currentScene.createNode("Shape");
Shape135.USE = "SphereYellow";
Transform134YYY.child = new X3D.undefined();

Transform134ZZZ.child[0] = Shape135;

HAnimSegment133YYY.children = new X3D.MFNode();

HAnimSegment133ZZZ.children[0] = Transform134;

HAnimJoint132YYY.children = new X3D.MFNode();

HAnimJoint132ZZZ.children[0] = HAnimSegment133;

let HAnimJoint136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint136.DEF = "boxman_r_elbow";
HAnimJoint136.name = "r_elbow";
HAnimJoint136.center = new X3D.SFVec3f([-0.1982,1.1622,-0.0557]);
HAnimJoint136.skinCoordIndex = new X3D.MFInt32([208,209,210,211,212,213,214,215]);
HAnimJoint136.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment137 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment137.DEF = "boxman_r_forearm";
HAnimSegment137.name = "r_forearm";
let Transform138 = browser.currentScene.createNode("Transform");
Transform138.translation = new X3D.SFVec3f([-0.1982,1.1622,-0.0557]);
let Shape139 = browser.currentScene.createNode("Shape");
Shape139.USE = "SphereYellow";
Transform138YYY.child = new X3D.undefined();

Transform138ZZZ.child[0] = Shape139;

HAnimSegment137YYY.children = new X3D.MFNode();

HAnimSegment137ZZZ.children[0] = Transform138;

HAnimJoint136YYY.children = new X3D.MFNode();

HAnimJoint136ZZZ.children[0] = HAnimSegment137;

let HAnimJoint140 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint140.DEF = "boxman_r_wrist";
HAnimJoint140.name = "r_wrist";
HAnimJoint140.center = new X3D.SFVec3f([-0.1972,0.8929,-0.069]);
HAnimJoint140.skinCoordIndex = new X3D.MFInt32([216,217,218,219,220,221,222,223]);
HAnimJoint140.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment141 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment141.DEF = "boxman_r_hand";
HAnimSegment141.name = "r_hand";
let Transform142 = browser.currentScene.createNode("Transform");
Transform142.translation = new X3D.SFVec3f([-0.1972,0.8929,-0.069]);
let Shape143 = browser.currentScene.createNode("Shape");
Shape143.USE = "SphereYellow";
Transform142YYY.child = new X3D.undefined();

Transform142ZZZ.child[0] = Shape143;

HAnimSegment141YYY.children = new X3D.MFNode();

HAnimSegment141ZZZ.children[0] = Transform142;

let HAnimSite144 = browser.currentScene.createNode("HAnimSite");
HAnimSite144.DEF = "boxman_r_hand_tip";
HAnimSite144.name = "r_hand_tip";
HAnimSite144.translation = new X3D.SFVec3f([-0.1912,0.6976,-0.071]);
let Shape145 = browser.currentScene.createNode("Shape");
Shape145.USE = "SphereRed";
HAnimSite144YYY.children = new X3D.MFNode();

HAnimSite144ZZZ.children[0] = Shape145;

HAnimSegment141ZZZ.children[1] = HAnimSite144;

HAnimJoint140YYY.children = new X3D.MFNode();

HAnimJoint140ZZZ.children[0] = HAnimSegment141;

HAnimJoint136ZZZ.children[1] = HAnimJoint140;

HAnimJoint132ZZZ.children[1] = HAnimJoint136;

HAnimJoint108ZZZ.children[3] = HAnimJoint132;

HAnimJoint62ZZZ.children[3] = HAnimJoint108;

HAnimHumanoid61.joints = new X3D.MFNode();

HAnimHumanoid61XXX.joints[0] = HAnimJoint62;

let HAnimJoint146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint146.USE = "boxman_humanoid_root";
joints[1] = HAnimJoint146;

let HAnimJoint147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint147.USE = "boxman_skullbase";
joints[2] = HAnimJoint147;

let HAnimJoint148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint148.USE = "boxman_vl5";
joints[3] = HAnimJoint148;

let HAnimJoint149 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint149.USE = "boxman_l_ankle";
joints[4] = HAnimJoint149;

let HAnimJoint150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint150.USE = "boxman_r_ankle";
joints[5] = HAnimJoint150;

let HAnimJoint151 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint151.USE = "boxman_l_elbow";
joints[6] = HAnimJoint151;

let HAnimJoint152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint152.USE = "boxman_r_elbow";
joints[7] = HAnimJoint152;

let HAnimJoint153 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint153.USE = "boxman_l_hip";
joints[8] = HAnimJoint153;

let HAnimJoint154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint154.USE = "boxman_r_hip";
joints[9] = HAnimJoint154;

let HAnimJoint155 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint155.USE = "boxman_l_knee";
joints[10] = HAnimJoint155;

let HAnimJoint156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint156.USE = "boxman_r_knee";
joints[11] = HAnimJoint156;

let HAnimJoint157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint157.USE = "boxman_l_midtarsal";
joints[12] = HAnimJoint157;

let HAnimJoint158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint158.USE = "boxman_r_midtarsal";
joints[13] = HAnimJoint158;

let HAnimJoint159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint159.USE = "boxman_l_shoulder";
joints[14] = HAnimJoint159;

let HAnimJoint160 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint160.USE = "boxman_r_shoulder";
joints[15] = HAnimJoint160;

let HAnimJoint161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint161.USE = "boxman_l_wrist";
joints[16] = HAnimJoint161;

let HAnimJoint162 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint162.USE = "boxman_r_wrist";
joints[17] = HAnimJoint162;

let HAnimSegment163 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment163.USE = "boxman_l5";
segments[18] = HAnimSegment163;

let HAnimSegment164 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment164.USE = "boxman_sacrum";
segments[19] = HAnimSegment164;

let HAnimSegment165 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment165.USE = "boxman_skull";
segments[20] = HAnimSegment165;

let HAnimSegment166 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment166.USE = "boxman_l_calf";
segments[21] = HAnimSegment166;

let HAnimSegment167 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment167.USE = "boxman_r_calf";
segments[22] = HAnimSegment167;

let HAnimSegment168 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment168.USE = "boxman_l_forearm";
segments[23] = HAnimSegment168;

let HAnimSegment169 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment169.USE = "boxman_r_forearm";
segments[24] = HAnimSegment169;

let HAnimSegment170 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment170.USE = "boxman_l_hand";
segments[25] = HAnimSegment170;

let HAnimSegment171 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment171.USE = "boxman_r_hand";
segments[26] = HAnimSegment171;

let HAnimSegment172 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment172.USE = "boxman_l_hindfoot";
segments[27] = HAnimSegment172;

let HAnimSegment173 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment173.USE = "boxman_r_hindfoot";
segments[28] = HAnimSegment173;

let HAnimSegment174 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment174.USE = "boxman_l_middistal";
segments[29] = HAnimSegment174;

let HAnimSegment175 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment175.USE = "boxman_r_middistal";
segments[30] = HAnimSegment175;

let HAnimSegment176 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment176.USE = "boxman_l_thigh";
segments[31] = HAnimSegment176;

let HAnimSegment177 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment177.USE = "boxman_r_thigh";
segments[32] = HAnimSegment177;

let HAnimSegment178 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment178.USE = "boxman_l_upperarm";
segments[33] = HAnimSegment178;

let HAnimSegment179 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment179.USE = "boxman_r_upperarm";
segments[34] = HAnimSegment179;

let HAnimSite180 = browser.currentScene.createNode("HAnimSite");
HAnimSite180.USE = "boxman_skull_tip";
viewpoints[35] = HAnimSite180;

let HAnimSite181 = browser.currentScene.createNode("HAnimSite");
HAnimSite181.USE = "boxman_l_hand_tip";
viewpoints[36] = HAnimSite181;

let HAnimSite182 = browser.currentScene.createNode("HAnimSite");
HAnimSite182.USE = "boxman_r_hand_tip";
viewpoints[37] = HAnimSite182;

let HAnimSite183 = browser.currentScene.createNode("HAnimSite");
HAnimSite183.USE = "boxman_l_middistal_tip";
viewpoints[38] = HAnimSite183;

let HAnimSite184 = browser.currentScene.createNode("HAnimSite");
HAnimSite184.USE = "boxman_r_middistal_tip";
viewpoints[39] = HAnimSite184;

let HAnimSite185 = browser.currentScene.createNode("HAnimSite");
HAnimSite185.DEF = "boxman_BoxMan_view";
HAnimSite185.name = "BoxMan_view";
let Viewpoint186 = browser.currentScene.createNode("Viewpoint");
Viewpoint186.DEF = "Inclined_View";
Viewpoint186.description = "Inclined View";
Viewpoint186.position = new X3D.SFVec3f([2,0.9,2]);
Viewpoint186.orientation = new X3D.SFRotation([0,1,0,0.78]);
HAnimSite185YYY.children = new X3D.MFNode();

HAnimSite185ZZZ.children[0] = Viewpoint186;

let Viewpoint187 = browser.currentScene.createNode("Viewpoint");
Viewpoint187.DEF = "Front_View";
Viewpoint187.description = "Front View";
Viewpoint187.position = new X3D.SFVec3f([0,1,3]);
HAnimSite185ZZZ.children[1] = Viewpoint187;

let Viewpoint188 = browser.currentScene.createNode("Viewpoint");
Viewpoint188.DEF = "Right_View";
Viewpoint188.description = "Right-side View";
Viewpoint188.position = new X3D.SFVec3f([-3,1,0]);
Viewpoint188.orientation = new X3D.SFRotation([0,1,0,-1.57]);
HAnimSite185ZZZ.children[2] = Viewpoint188;

let Viewpoint189 = browser.currentScene.createNode("Viewpoint");
Viewpoint189.DEF = "Left_View";
Viewpoint189.description = "Left-side View";
Viewpoint189.position = new X3D.SFVec3f([3,1,0]);
Viewpoint189.orientation = new X3D.SFRotation([0,1,0,1.57]);
HAnimSite185ZZZ.children[3] = Viewpoint189;

let Viewpoint190 = browser.currentScene.createNode("Viewpoint");
Viewpoint190.DEF = "Top_View";
Viewpoint190.description = "Top View";
Viewpoint190.position = new X3D.SFVec3f([0,3,0]);
Viewpoint190.orientation = new X3D.SFRotation([1,0,0,-1.57]);
HAnimSite185ZZZ.children[4] = Viewpoint190;

viewpoints[40] = HAnimSite185;

let Coordinate191 = browser.currentScene.createNode("Coordinate");
Coordinate191.DEF = "SKINCOORD";
Coordinate191.point = new X3D.MFVec3f([-0.05,1,0.05,0.05,1,0.05,0.03,0.97,-0.1,-0.03,0.97,-0.1,0.03,0.94,-0.075,-0.03,0.94,-0.075,0,0.92,0,0,0.94,0.03,-0.12,1.06,0.05,0.12,1.06,0.05,0.12,1.06,-0.1,-0.12,1.06,-0.1,0.0456,0.9364,0.05,0.1456,0.9364,0.05,0.1456,0.9364,-0.05,0.0456,0.9364,-0.05,0.0456,0.9,0.05,0.1456,0.9,0.05,0.1456,0.9,-0.05,0.0456,0.9,-0.05,0.0456,0.8,0.05,0.1456,0.8,0.05,0.1456,0.8,-0.05,0.0456,0.8,-0.05,0.0456,0.7,0.05,0.1456,0.7,0.05,0.1456,0.7,-0.05,0.0456,0.7,-0.05,0.0456,0.6,0.05,0.1456,0.6,0.05,0.1456,0.6,-0.05,0.0456,0.6,-0.05,0.0456,0.55,0.05,0.1456,0.55,0.05,0.1456,0.55,-0.05,0.0456,0.55,-0.05,0.0456,0.52,0.05,0.1456,0.52,0.05,0.1456,0.52,-0.05,0.0456,0.52,-0.05,0.0456,0.5,0.05,0.1456,0.5,0.05,0.1456,0.5,-0.05,0.0456,0.5,-0.05,0.0454,0.43,0.045,0.1454,0.43,0.045,0.1454,0.43,-0.055,0.0454,0.43,-0.055,0.0452,0.36,0.04,0.1452,0.36,0.04,0.1452,0.36,-0.06,0.0452,0.36,-0.06,0.045,0.29,0.035,0.145,0.29,0.035,0.145,0.29,-0.065,0.045,0.29,-0.065,0.0448,0.21,0.03,0.1448,0.21,0.03,0.1448,0.21,-0.07,0.0448,0.21,-0.07,0.0446,0.1262,0.025,0.1446,0.1262,0.025,0.1446,0.1262,-0.075,0.0446,0.1262,-0.075,0.0446,0.0762,0.025,0.1446,0.0762,0.025,0.1446,0,-0.075,0.0446,0,-0.075,0.0446,0.0562,0.057,0.1446,0.0562,0.057,0.1446,0,0.057,0.0446,0,0.057,0.0446,0.0562,0.087,0.1446,0.0562,0.087,0.1446,0,0.087,0.0446,0,0.087,0.0446,0.0562,0.1924,0.1446,0.0562,0.1924,0.1446,0,0.1924,0.0446,0,0.1924,-0.0456,0.9364,0.05,-0.1456,0.9364,0.05,-0.1456,0.9364,-0.05,-0.0456,0.9364,-0.05,-0.0456,0.9,0.05,-0.1456,0.9,0.05,-0.1456,0.9,-0.05,-0.0456,0.9,-0.05,-0.0456,0.8,0.05,-0.1456,0.8,0.05,-0.1456,0.8,-0.05,-0.0456,0.8,-0.05,-0.0456,0.7,0.05,-0.1456,0.7,0.05,-0.1456,0.7,-0.05,-0.0456,0.7,-0.05,-0.0456,0.6,0.05,-0.1456,0.6,0.05,-0.1456,0.6,-0.05,-0.0456,0.6,-0.05,-0.0456,0.55,0.05,-0.1456,0.55,0.05,-0.1456,0.55,-0.05,-0.0456,0.55,-0.05,-0.0456,0.52,0.05,-0.1456,0.52,0.05,-0.1456,0.52,-0.05,-0.0456,0.52,-0.05,-0.0456,0.5,0.05,-0.1456,0.5,0.05,-0.1456,0.5,-0.05,-0.0456,0.5,-0.05,-0.0454,0.43,0.045,-0.1454,0.43,0.045,-0.1454,0.43,-0.055,-0.0454,0.43,-0.055,-0.0452,0.36,0.04,-0.1452,0.36,0.04,-0.1452,0.36,-0.06,-0.0452,0.36,-0.06,-0.045,0.29,0.035,-0.145,0.29,0.035,-0.145,0.29,-0.065,-0.045,0.29,-0.065,-0.0448,0.21,0.03,-0.1448,0.21,0.03,-0.1448,0.21,-0.07,-0.0448,0.21,-0.07,-0.0446,0.1262,0.025,-0.1446,0.1262,0.025,-0.1446,0.1262,-0.075,-0.0446,0.1262,-0.075,-0.0446,0.0762,0.025,-0.1446,0.0762,0.025,-0.1446,0,-0.075,-0.0446,0,-0.075,-0.0446,0.0562,0.057,-0.1446,0.0562,0.057,-0.1446,0,0.057,-0.0446,0,0.057,-0.0446,0.0562,0.087,-0.1446,0.0562,0.087,-0.1446,0,0.087,-0.0446,0,0.087,-0.0446,0.0562,0.1924,-0.1446,0.0562,0.1924,-0.1446,0,0.1924,-0.0446,0,0.1924,-0.12,1.1,0.05,0.12,1.1,0.05,0.12,1.1,-0.1,-0.12,1.1,-0.1,-0.14,1.42,0.045,0.14,1.42,0.045,0.14,1.42,-0.09,-0.14,1.42,-0.09,-0.24,1.52,0.035,0.24,1.52,0.035,0.24,1.52,-0.09,-0.24,1.52,-0.09,-0.05,1.56,0.03,0.05,1.56,0.03,0.05,1.56,-0.06,-0.05,1.56,-0.06,-0.05,1.6,0.06,0.05,1.6,0.06,0.05,1.62,-0.03,-0.05,1.62,-0.03,-0.07,1.777,0.13,0.07,1.777,0.13,0.07,1.777,-0.03,-0.07,1.777,-0.03,-0.07,1.6,0.13,0.07,1.6,0.13,0.07,1.66,-0.03,-0.07,1.66,-0.03,0.16,1.42,0.015,0.24,1.5,0.015,0.24,1.5,-0.075,0.16,1.42,-0.075,0.17,1.18,-0.025,0.23,1.18,-0.025,0.23,1.18,-0.085,0.17,1.18,-0.085,0.17,1.14,-0.025,0.23,1.14,-0.025,0.23,1.14,-0.085,0.17,1.14,-0.085,0.18,0.91,-0.05,0.22,0.91,-0.05,0.22,0.91,-0.09,0.18,0.91,-0.09,0.18,0.87,-0.02,0.22,0.87,-0.02,0.22,0.87,-0.1,0.18,0.87,-0.1,0.18,0.6976,-0.02,0.22,0.6976,-0.02,0.22,0.6976,-0.1,0.18,0.6976,-0.1,-0.16,1.42,0.015,-0.24,1.5,0.015,-0.24,1.5,-0.075,-0.16,1.42,-0.075,-0.17,1.18,-0.025,-0.23,1.18,-0.025,-0.23,1.18,-0.085,-0.17,1.18,-0.085,-0.17,1.14,-0.025,-0.23,1.14,-0.025,-0.23,1.14,-0.085,-0.17,1.14,-0.085,-0.18,0.91,-0.05,-0.22,0.91,-0.05,-0.22,0.91,-0.09,-0.18,0.91,-0.09,-0.18,0.87,-0.02,-0.22,0.87,-0.02,-0.22,0.87,-0.1,-0.18,0.87,-0.1,-0.18,0.6976,-0.02,-0.22,0.6976,-0.02,-0.22,0.6976,-0.1,-0.18,0.6976,-0.1]);
skinCoord = Coordinate191;

let Group192 = browser.currentScene.createNode("Group");
let Shape193 = browser.currentScene.createNode("Shape");
Shape193.DEF = "TrouserSkin";
let Appearance194 = browser.currentScene.createNode("Appearance");
let Material195 = browser.currentScene.createNode("Material");
Material195.diffuseColor = new X3D.SFColor([0,0,1]);
Material195.transparency = 0.5;
material = Material195;

appearance = Appearance194;

let IndexedFaceSet196 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet196.coordIndex = new X3D.MFInt32([0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1]);
let Coordinate197 = browser.currentScene.createNode("Coordinate");
Coordinate197.USE = "SKINCOORD";
coord = Coordinate197;

geometry = IndexedFaceSet196;

Group192YYY.children = new X3D.MFNode();

Group192ZZZ.children[0] = Shape193;

let Shape198 = browser.currentScene.createNode("Shape");
Shape198.DEF = "ShoeSkin";
let Appearance199 = browser.currentScene.createNode("Appearance");
let Material200 = browser.currentScene.createNode("Material");
Material200.diffuseColor = new X3D.SFColor([0,0,0]);
Material200.transparency = 0.5;
material = Material200;

appearance = Appearance199;

let IndexedFaceSet201 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet201.coordIndex = new X3D.MFInt32([60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1]);
let Coordinate202 = browser.currentScene.createNode("Coordinate");
Coordinate202.USE = "SKINCOORD";
coord = Coordinate202;

geometry = IndexedFaceSet201;

Group192ZZZ.children[1] = Shape198;

let Shape203 = browser.currentScene.createNode("Shape");
Shape203.DEF = "ShirtSkin";
let Appearance204 = browser.currentScene.createNode("Appearance");
let Material205 = browser.currentScene.createNode("Material");
Material205.diffuseColor = new X3D.SFColor([1,1,0]);
Material205.transparency = 0.5;
material = Material205;

appearance = Appearance204;

let IndexedFaceSet206 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet206.coordIndex = new X3D.MFInt32([148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1]);
let Coordinate207 = browser.currentScene.createNode("Coordinate");
Coordinate207.USE = "SKINCOORD";
coord = Coordinate207;

geometry = IndexedFaceSet206;

Group192ZZZ.children[2] = Shape203;

let Shape208 = browser.currentScene.createNode("Shape");
Shape208.DEF = "HeadHandsFleshToneSkin";
let Appearance209 = browser.currentScene.createNode("Appearance");
let Material210 = browser.currentScene.createNode("Material");
Material210.diffuseColor = new X3D.SFColor([1,0.75,0.75]);
Material210.transparency = 0.5;
material = Material210;

appearance = Appearance209;

let IndexedFaceSet211 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet211.coordIndex = new X3D.MFInt32([172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
let Coordinate212 = browser.currentScene.createNode("Coordinate");
Coordinate212.USE = "SKINCOORD";
coord = Coordinate212;

geometry = IndexedFaceSet211;

Group192ZZZ.children[3] = Shape208;

let Shape213 = browser.currentScene.createNode("Shape");
Shape213.DEF = "SkinLines";
let Appearance214 = browser.currentScene.createNode("Appearance");
let Material215 = browser.currentScene.createNode("Material");
Material215.diffuseColor = new X3D.SFColor([0,0,0]);
material = Material215;

appearance = Appearance214;

let IndexedLineSet216 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet216.coordIndex = new X3D.MFInt32([0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
let Coordinate217 = browser.currentScene.createNode("Coordinate");
Coordinate217.USE = "SKINCOORD";
coord = Coordinate217;

geometry = IndexedLineSet216;

Group192ZZZ.children[4] = Shape213;

skin[41] = Group192;

browser.currentScene.children[3] = HAnimHumanoid61;

let ProtoInstance218 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance218.DEF = "ANIMATOR";
ProtoInstance218.name = "LOA1_WalkAnimation";
browser.currentScene.children[4] = ProtoInstance218;

let Script219 = browser.currentScene.createNode("Script");
Script219.DEF = "ENGINE";
Script219.url = new X3D.MFString([new X3D.SFString("BoxMan.js"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan.js")]);
Script219.directOutput = True;
Script220.getField("update")Script219YYY.field = new X3D.MFNode();

Script221.getField("humanoid")let HAnimHumanoid222 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid222.USE = "boxman_Humanoid";
field221YYY.children = new X3D.MFNode();

field221ZZZ.children[0] = HAnimHumanoid222;

Script219YYY.field = new X3D.MFNode();

Script223.getField("coordList")Script219YYY.field = new X3D.MFNode();

Script224.getField("joint")Script219YYY.field = new X3D.MFNode();

Script225.getField("translation")Script219YYY.field = new X3D.MFNode();

Script226.getField("rotation")Script219YYY.field = new X3D.MFNode();

Script227.getField("scale").setValue("1 1 1");
Script219YYY.field = new X3D.MFNode();

browser.currentScene.children[5] = Script219;

let ROUTE228 = browser.currentScene.createNode("ROUTE");
ROUTE228.fromNode = "ANIMATOR";
ROUTE228.fromField = "HumanoidRoot_translation_changed";
ROUTE228.toNode = "boxman_humanoid_root";
ROUTE228.toField = "set_translation";
browser.currentScene.children[6] = ROUTE228;

let ROUTE229 = browser.currentScene.createNode("ROUTE");
ROUTE229.fromNode = "ANIMATOR";
ROUTE229.fromField = "HumanoidRoot_rotation_changed";
ROUTE229.toNode = "boxman_humanoid_root";
ROUTE229.toField = "set_rotation";
browser.currentScene.children[7] = ROUTE229;

let ROUTE230 = browser.currentScene.createNode("ROUTE");
ROUTE230.fromNode = "ANIMATOR";
ROUTE230.fromField = "l_hip_rotation_changed";
ROUTE230.toNode = "boxman_l_hip";
ROUTE230.toField = "set_rotation";
browser.currentScene.children[8] = ROUTE230;

let ROUTE231 = browser.currentScene.createNode("ROUTE");
ROUTE231.fromNode = "ANIMATOR";
ROUTE231.fromField = "l_knee_rotation_changed";
ROUTE231.toNode = "boxman_l_knee";
ROUTE231.toField = "set_rotation";
browser.currentScene.children[9] = ROUTE231;

let ROUTE232 = browser.currentScene.createNode("ROUTE");
ROUTE232.fromNode = "ANIMATOR";
ROUTE232.fromField = "l_ankle_rotation_changed";
ROUTE232.toNode = "boxman_l_ankle";
ROUTE232.toField = "set_rotation";
browser.currentScene.children[10] = ROUTE232;

let ROUTE233 = browser.currentScene.createNode("ROUTE");
ROUTE233.fromNode = "ANIMATOR";
ROUTE233.fromField = "l_midtarsal_rotation_changed";
ROUTE233.toNode = "boxman_l_midtarsal";
ROUTE233.toField = "set_rotation";
browser.currentScene.children[11] = ROUTE233;

let ROUTE234 = browser.currentScene.createNode("ROUTE");
ROUTE234.fromNode = "ANIMATOR";
ROUTE234.fromField = "r_hip_rotation_changed";
ROUTE234.toNode = "boxman_r_hip";
ROUTE234.toField = "set_rotation";
browser.currentScene.children[12] = ROUTE234;

let ROUTE235 = browser.currentScene.createNode("ROUTE");
ROUTE235.fromNode = "ANIMATOR";
ROUTE235.fromField = "r_knee_rotation_changed";
ROUTE235.toNode = "boxman_r_knee";
ROUTE235.toField = "set_rotation";
browser.currentScene.children[13] = ROUTE235;

let ROUTE236 = browser.currentScene.createNode("ROUTE");
ROUTE236.fromNode = "ANIMATOR";
ROUTE236.fromField = "r_ankle_rotation_changed";
ROUTE236.toNode = "boxman_r_ankle";
ROUTE236.toField = "set_rotation";
browser.currentScene.children[14] = ROUTE236;

let ROUTE237 = browser.currentScene.createNode("ROUTE");
ROUTE237.fromNode = "ANIMATOR";
ROUTE237.fromField = "r_midtarsal_rotation_changed";
ROUTE237.toNode = "boxman_r_midtarsal";
ROUTE237.toField = "set_rotation";
browser.currentScene.children[15] = ROUTE237;

let ROUTE238 = browser.currentScene.createNode("ROUTE");
ROUTE238.fromNode = "ANIMATOR";
ROUTE238.fromField = "vl5_rotation_changed";
ROUTE238.toNode = "boxman_vl5";
ROUTE238.toField = "set_rotation";
browser.currentScene.children[16] = ROUTE238;

let ROUTE239 = browser.currentScene.createNode("ROUTE");
ROUTE239.fromNode = "ANIMATOR";
ROUTE239.fromField = "skullbase_rotation_changed";
ROUTE239.toNode = "boxman_skullbase";
ROUTE239.toField = "set_rotation";
browser.currentScene.children[17] = ROUTE239;

let ROUTE240 = browser.currentScene.createNode("ROUTE");
ROUTE240.fromNode = "ANIMATOR";
ROUTE240.fromField = "l_shoulder_rotation_changed";
ROUTE240.toNode = "boxman_l_shoulder";
ROUTE240.toField = "set_rotation";
browser.currentScene.children[18] = ROUTE240;

let ROUTE241 = browser.currentScene.createNode("ROUTE");
ROUTE241.fromNode = "ANIMATOR";
ROUTE241.fromField = "l_elbow_rotation_changed";
ROUTE241.toNode = "boxman_l_elbow";
ROUTE241.toField = "set_rotation";
browser.currentScene.children[19] = ROUTE241;

let ROUTE242 = browser.currentScene.createNode("ROUTE");
ROUTE242.fromNode = "ANIMATOR";
ROUTE242.fromField = "l_wrist_rotation_changed";
ROUTE242.toNode = "boxman_l_wrist";
ROUTE242.toField = "set_rotation";
browser.currentScene.children[20] = ROUTE242;

let ROUTE243 = browser.currentScene.createNode("ROUTE");
ROUTE243.fromNode = "ANIMATOR";
ROUTE243.fromField = "r_shoulder_rotation_changed";
ROUTE243.toNode = "boxman_r_shoulder";
ROUTE243.toField = "set_rotation";
browser.currentScene.children[21] = ROUTE243;

let ROUTE244 = browser.currentScene.createNode("ROUTE");
ROUTE244.fromNode = "ANIMATOR";
ROUTE244.fromField = "r_elbow_rotation_changed";
ROUTE244.toNode = "boxman_r_elbow";
ROUTE244.toField = "set_rotation";
browser.currentScene.children[22] = ROUTE244;

let ROUTE245 = browser.currentScene.createNode("ROUTE");
ROUTE245.fromNode = "ANIMATOR";
ROUTE245.fromField = "r_wrist_rotation_changed";
ROUTE245.toNode = "boxman_r_wrist";
ROUTE245.toField = "set_rotation";
browser.currentScene.children[23] = ROUTE245;

}
main ();

const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "BoxMan3AnimationPanel.x3d");
scene.addMetaData("description", "A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation panel shows multiple behaviors.");
scene.addMetaData("creator", "Joe Williams and James Smith - james@vapourtech.com");
scene.addMetaData("translator", "Joe Williams and Don Brutzman");
scene.addMetaData("generator", ".x3d to .x3d translation used BS Contact Geo 8.203");
scene.addMetaData("generator", "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit");
scene.addMetaData("generator", "x3d-tidy V2.2.1, https://www.npmjs.com/package/x3d-tidy");
scene.addMetaData("created", "1 March 2001");
scene.addMetaData("revision", "12 January 2017");
scene.addMetaData("translated", "14 January 2017");
scene.addMetaData("modified", "Tue, 09 Sep 2025 19:37:50 GMT");
scene.addMetaData("error", "Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported");
scene.addMetaData("Image", "BoxManAnimationPanelInclined.png");
scene.addMetaData("MovingImage", "BoxManAnimationPanel.mp4");
scene.addMetaData("MovingImage", "https://www.youtube.com/watch?v=8tI83Rtg_DU");
scene.addMetaData("reference", "https://twitter.com/Web3DConsortium/status/820638047523913728");
scene.addMetaData("reference", "https://twitter.com/Web3DConsortium/status/820642726009978881");
scene.addMetaData("reference", "http://HAnim.org");
scene.addMetaData("reference", "originals/boxman.wrl");
scene.addMetaData("reference", "BoxMan3.x3d");
scene.addMetaData("reference", "http://HAnim.org/Models/HAnim2001/boxman");
scene.addMetaData("reference", "http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl");
scene.addMetaData("reference", "http://www.vapourtech.com/team/james/boxman.wrl");
scene.addMetaData("reference", "http://HAnim.org/Specifications/HAnim2001");
scene.addMetaData("reference", "http://HAnim.org/Models");
scene.addMetaData("reference", "http://HAnim.org/Nodes");
scene.addMetaData("reference", "https://www.web3d.org/x3d/content/X3dToVrml97.xslt");
scene.addMetaData("reference", "http://www.vapourtech.com");
scene.addMetaData("TODO", "InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org");
scene.addMetaData("rights", "(C) 2000 James Smith - james@vapourtech.com");
await browser .loadComponents (scene);
let WorldInfo34 = browser.currentScene.createNode("WorldInfo");
WorldInfo34.title = "BoxMan3 - A Seamless VRML Human";
WorldInfo34.info = new X3D.MFString([new X3D.SFString("(C) 2000 James Smith - james@vapourtech.com"), new X3D.SFString("http://www.vapourtech.com/team/james/boxman.wrl"), new X3D.SFString("Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com")]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo34;

let Background35 = browser.currentScene.createNode("Background");
Background35.skyColor = new X3D.MFColor([0.75,0.75,0.75]);
Background35.groundColor = new X3D.MFColor([0.6,0.6,0.6]);
browser.currentScene.children[1] = Background35;

let HAnimHumanoid36 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid36.DEF = "boxman_Humanoid";
HAnimHumanoid36.name = "Humanoid";
HAnimHumanoid36.info = new X3D.MFString([new X3D.SFString("authorName=James Smith"), new X3D.SFString("authorEmail=james@vapourtech.com"), new X3D.SFString("copyright=(C) 2000 James Smith - james@vapourtech.com"), new X3D.SFString("humanoidVersion=1.0")]);
HAnimHumanoid36.version = "1.0";
let HAnimJoint37 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint37.DEF = "boxman_humanoid_root";
HAnimJoint37.name = "humanoid_root";
HAnimJoint37.center = new X3D.SFVec3f([0,0.9723,-0.0728]);
HAnimJoint37.skinCoordIndex = new X3D.MFInt32([0,1,2,3,4,5,6,7,8,9,10,11]);
HAnimJoint37.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment38 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment38.DEF = "boxman_sacrum";
HAnimSegment38.name = "sacrum";
let Transform39 = browser.currentScene.createNode("Transform");
Transform39.translation = new X3D.SFVec3f([0,0.9723,-0.0728]);
let Shape40 = browser.currentScene.createNode("Shape");
Shape40.DEF = "SphereYellow";
let Appearance41 = browser.currentScene.createNode("Appearance");
let Material42 = browser.currentScene.createNode("Material");
Material42.diffuseColor = new X3D.SFColor([1,1,0]);
material = Material42;

appearance = Appearance41;

let Sphere43 = browser.currentScene.createNode("Sphere");
Sphere43.radius = 0.02;
geometry = Sphere43;

Transform39YYY.child = new X3D.undefined();

Transform39ZZZ.child[0] = Shape40;

HAnimSegment38YYY.children = new X3D.MFNode();

HAnimSegment38ZZZ.children[0] = Transform39;

HAnimJoint37YYY.children = new X3D.MFNode();

HAnimJoint37ZZZ.children[0] = HAnimSegment38;

let HAnimJoint44 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint44.DEF = "boxman_l_hip";
HAnimJoint44.name = "l_hip";
HAnimJoint44.center = new X3D.SFVec3f([0.0956,0.9364,0]);
HAnimJoint44.skinCoordIndex = new X3D.MFInt32([12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43]);
HAnimJoint44.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
let HAnimSegment45 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment45.DEF = "boxman_l_thigh";
HAnimSegment45.name = "l_thigh";
let Transform46 = browser.currentScene.createNode("Transform");
Transform46.translation = new X3D.SFVec3f([0.0956,0.9364,0]);
let Shape47 = browser.currentScene.createNode("Shape");
Shape47.USE = "SphereYellow";
Transform46YYY.child = new X3D.undefined();

Transform46ZZZ.child[0] = Shape47;

HAnimSegment45YYY.children = new X3D.MFNode();

HAnimSegment45ZZZ.children[0] = Transform46;

HAnimJoint44YYY.children = new X3D.MFNode();

HAnimJoint44ZZZ.children[0] = HAnimSegment45;

let HAnimJoint48 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint48.DEF = "boxman_l_knee";
HAnimJoint48.name = "l_knee";
HAnimJoint48.center = new X3D.SFVec3f([0.0956,0.5095,-0.0036]);
HAnimJoint48.skinCoordIndex = new X3D.MFInt32([36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63]);
HAnimJoint48.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment49 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment49.DEF = "boxman_l_calf";
HAnimSegment49.name = "l_calf";
let Transform50 = browser.currentScene.createNode("Transform");
Transform50.translation = new X3D.SFVec3f([0.0956,0.5095,-0.0036]);
let Shape51 = browser.currentScene.createNode("Shape");
Shape51.USE = "SphereYellow";
Transform50YYY.child = new X3D.undefined();

Transform50ZZZ.child[0] = Shape51;

HAnimSegment49YYY.children = new X3D.MFNode();

HAnimSegment49ZZZ.children[0] = Transform50;

HAnimJoint48YYY.children = new X3D.MFNode();

HAnimJoint48ZZZ.children[0] = HAnimSegment49;

let HAnimJoint52 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint52.DEF = "boxman_l_ankle";
HAnimJoint52.name = "l_ankle";
HAnimJoint52.rotation = new X3D.SFRotation([-0.999999999999999,0,0,0.934517418078819]);
HAnimJoint52.center = new X3D.SFVec3f([0.0946,0.0762,-0.0261]);
HAnimJoint52.skinCoordIndex = new X3D.MFInt32([64,65,66,67,68,69,70,71]);
HAnimJoint52.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment53 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment53.DEF = "boxman_l_hindfoot";
HAnimSegment53.name = "l_hindfoot";
let Transform54 = browser.currentScene.createNode("Transform");
Transform54.translation = new X3D.SFVec3f([0.0946,0.0762,-0.0261]);
let Shape55 = browser.currentScene.createNode("Shape");
Shape55.USE = "SphereYellow";
Transform54YYY.child = new X3D.undefined();

Transform54ZZZ.child[0] = Shape55;

HAnimSegment53YYY.children = new X3D.MFNode();

HAnimSegment53ZZZ.children[0] = Transform54;

HAnimJoint52YYY.children = new X3D.MFNode();

HAnimJoint52ZZZ.children[0] = HAnimSegment53;

let HAnimJoint56 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint56.DEF = "boxman_l_midtarsal";
HAnimJoint56.name = "l_midtarsal";
HAnimJoint56.center = new X3D.SFVec3f([0.1079,0.0317,0.067]);
HAnimJoint56.skinCoordIndex = new X3D.MFInt32([72,73,74,75,76,77,78,79]);
HAnimJoint56.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment57 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment57.DEF = "boxman_l_middistal";
HAnimSegment57.name = "l_middistal";
let Transform58 = browser.currentScene.createNode("Transform");
Transform58.translation = new X3D.SFVec3f([0.1079,0.0317,0.067]);
let Shape59 = browser.currentScene.createNode("Shape");
Shape59.USE = "SphereYellow";
Transform58YYY.child = new X3D.undefined();

Transform58ZZZ.child[0] = Shape59;

HAnimSegment57YYY.children = new X3D.MFNode();

HAnimSegment57ZZZ.children[0] = Transform58;

let HAnimSite60 = browser.currentScene.createNode("HAnimSite");
HAnimSite60.DEF = "boxman_l_middistal_tip";
HAnimSite60.name = "l_middistal_tip";
HAnimSite60.translation = new X3D.SFVec3f([0.095,0.0005,0.1924]);
let Shape61 = browser.currentScene.createNode("Shape");
Shape61.DEF = "SphereRed";
let Appearance62 = browser.currentScene.createNode("Appearance");
let Material63 = browser.currentScene.createNode("Material");
Material63.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material63;

appearance = Appearance62;

let Sphere64 = browser.currentScene.createNode("Sphere");
Sphere64.radius = 0.02;
geometry = Sphere64;

HAnimSite60YYY.children = new X3D.MFNode();

HAnimSite60ZZZ.children[0] = Shape61;

HAnimSegment57ZZZ.children[1] = HAnimSite60;

HAnimJoint56YYY.children = new X3D.MFNode();

HAnimJoint56ZZZ.children[0] = HAnimSegment57;

HAnimJoint52ZZZ.children[1] = HAnimJoint56;

HAnimJoint48ZZZ.children[1] = HAnimJoint52;

HAnimJoint44ZZZ.children[1] = HAnimJoint48;

HAnimJoint37ZZZ.children[1] = HAnimJoint44;

let HAnimJoint65 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint65.DEF = "boxman_r_hip";
HAnimJoint65.name = "r_hip";
HAnimJoint65.rotation = new X3D.SFRotation([-1,0,0,1.84517416925276]);
HAnimJoint65.center = new X3D.SFVec3f([-0.0956,0.9364,0]);
HAnimJoint65.skinCoordIndex = new X3D.MFInt32([80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111]);
HAnimJoint65.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
let HAnimSegment66 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment66.DEF = "boxman_r_thigh";
HAnimSegment66.name = "r_thigh";
let Transform67 = browser.currentScene.createNode("Transform");
Transform67.translation = new X3D.SFVec3f([-0.0956,0.9364,0]);
let Shape68 = browser.currentScene.createNode("Shape");
Shape68.USE = "SphereYellow";
Transform67YYY.child = new X3D.undefined();

Transform67ZZZ.child[0] = Shape68;

HAnimSegment66YYY.children = new X3D.MFNode();

HAnimSegment66ZZZ.children[0] = Transform67;

HAnimJoint65YYY.children = new X3D.MFNode();

HAnimJoint65ZZZ.children[0] = HAnimSegment66;

let HAnimJoint69 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint69.DEF = "boxman_r_knee";
HAnimJoint69.name = "r_knee";
HAnimJoint69.rotation = new X3D.SFRotation([1,0,0,1.81193032768473]);
HAnimJoint69.center = new X3D.SFVec3f([-0.0956,0.5095,-0.0036]);
HAnimJoint69.skinCoordIndex = new X3D.MFInt32([104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131]);
HAnimJoint69.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment70 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment70.DEF = "boxman_r_calf";
HAnimSegment70.name = "r_calf";
let Transform71 = browser.currentScene.createNode("Transform");
Transform71.translation = new X3D.SFVec3f([-0.0956,0.5095,-0.0036]);
let Shape72 = browser.currentScene.createNode("Shape");
Shape72.USE = "SphereYellow";
Transform71YYY.child = new X3D.undefined();

Transform71ZZZ.child[0] = Shape72;

HAnimSegment70YYY.children = new X3D.MFNode();

HAnimSegment70ZZZ.children[0] = Transform71;

HAnimJoint69YYY.children = new X3D.MFNode();

HAnimJoint69ZZZ.children[0] = HAnimSegment70;

let HAnimJoint73 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint73.DEF = "boxman_r_ankle";
HAnimJoint73.name = "r_ankle";
HAnimJoint73.rotation = new X3D.SFRotation([-0.999999999999999,0,0,0.934517418078819]);
HAnimJoint73.center = new X3D.SFVec3f([-0.0946,0.0762,-0.0261]);
HAnimJoint73.skinCoordIndex = new X3D.MFInt32([132,133,134,135,136,137,138,139]);
HAnimJoint73.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment74 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment74.DEF = "boxman_r_hindfoot";
HAnimSegment74.name = "r_hindfoot";
let Transform75 = browser.currentScene.createNode("Transform");
Transform75.translation = new X3D.SFVec3f([-0.0946,0.0762,-0.0261]);
let Shape76 = browser.currentScene.createNode("Shape");
Shape76.USE = "SphereYellow";
Transform75YYY.child = new X3D.undefined();

Transform75ZZZ.child[0] = Shape76;

HAnimSegment74YYY.children = new X3D.MFNode();

HAnimSegment74ZZZ.children[0] = Transform75;

HAnimJoint73YYY.children = new X3D.MFNode();

HAnimJoint73ZZZ.children[0] = HAnimSegment74;

let HAnimJoint77 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint77.DEF = "boxman_r_midtarsal";
HAnimJoint77.name = "r_midtarsal";
HAnimJoint77.center = new X3D.SFVec3f([-0.1079,0.0317,0.067]);
HAnimJoint77.skinCoordIndex = new X3D.MFInt32([140,141,142,143,144,145,146,147]);
HAnimJoint77.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment78 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment78.DEF = "boxman_r_middistal";
HAnimSegment78.name = "r_middistal";
let Transform79 = browser.currentScene.createNode("Transform");
Transform79.translation = new X3D.SFVec3f([-0.1079,0.0317,0.067]);
let Shape80 = browser.currentScene.createNode("Shape");
Shape80.USE = "SphereYellow";
Transform79YYY.child = new X3D.undefined();

Transform79ZZZ.child[0] = Shape80;

HAnimSegment78YYY.children = new X3D.MFNode();

HAnimSegment78ZZZ.children[0] = Transform79;

let HAnimSite81 = browser.currentScene.createNode("HAnimSite");
HAnimSite81.DEF = "boxman_r_middistal_tip";
HAnimSite81.name = "r_middistal_tip";
HAnimSite81.translation = new X3D.SFVec3f([-0.095,0.0005,0.1924]);
let Shape82 = browser.currentScene.createNode("Shape");
Shape82.USE = "SphereRed";
HAnimSite81YYY.children = new X3D.MFNode();

HAnimSite81ZZZ.children[0] = Shape82;

HAnimSegment78ZZZ.children[1] = HAnimSite81;

HAnimJoint77YYY.children = new X3D.MFNode();

HAnimJoint77ZZZ.children[0] = HAnimSegment78;

HAnimJoint73ZZZ.children[1] = HAnimJoint77;

HAnimJoint69ZZZ.children[1] = HAnimJoint73;

HAnimJoint65ZZZ.children[1] = HAnimJoint69;

HAnimJoint37ZZZ.children[2] = HAnimJoint65;

let HAnimJoint83 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint83.DEF = "boxman_vl5";
HAnimJoint83.name = "vl5";
HAnimJoint83.center = new X3D.SFVec3f([0,1.0817,-0.0728]);
HAnimJoint83.skinCoordIndex = new X3D.MFInt32([148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167]);
HAnimJoint83.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment84 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment84.DEF = "boxman_l5";
HAnimSegment84.name = "l5";
let Transform85 = browser.currentScene.createNode("Transform");
Transform85.translation = new X3D.SFVec3f([0,1.0817,-0.0728]);
let Shape86 = browser.currentScene.createNode("Shape");
Shape86.USE = "SphereYellow";
Transform85YYY.child = new X3D.undefined();

Transform85ZZZ.child[0] = Shape86;

HAnimSegment84YYY.children = new X3D.MFNode();

HAnimSegment84ZZZ.children[0] = Transform85;

HAnimJoint83YYY.children = new X3D.MFNode();

HAnimJoint83ZZZ.children[0] = HAnimSegment84;

let HAnimJoint87 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint87.DEF = "boxman_skullbase";
HAnimJoint87.name = "skullbase";
HAnimJoint87.rotation = new X3D.SFRotation([-0.999999999999998,0,0,0.567582977341481]);
HAnimJoint87.center = new X3D.SFVec3f([0,1.644,0.036]);
HAnimJoint87.skinCoordIndex = new X3D.MFInt32([168,169,170,171,172,173,174,175]);
HAnimJoint87.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment88 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment88.DEF = "boxman_skull";
HAnimSegment88.name = "skull";
let Transform89 = browser.currentScene.createNode("Transform");
Transform89.translation = new X3D.SFVec3f([0,1.644,0.036]);
let Shape90 = browser.currentScene.createNode("Shape");
Shape90.USE = "SphereYellow";
Transform89YYY.child = new X3D.undefined();

Transform89ZZZ.child[0] = Shape90;

HAnimSegment88YYY.children = new X3D.MFNode();

HAnimSegment88ZZZ.children[0] = Transform89;

let HAnimSite91 = browser.currentScene.createNode("HAnimSite");
HAnimSite91.DEF = "boxman_skull_tip";
HAnimSite91.name = "skull_tip";
HAnimSite91.translation = new X3D.SFVec3f([-0.0029,1.7771,0.0274]);
let Shape92 = browser.currentScene.createNode("Shape");
Shape92.USE = "SphereYellow";
HAnimSite91YYY.children = new X3D.MFNode();

HAnimSite91ZZZ.children[0] = Shape92;

HAnimSegment88ZZZ.children[1] = HAnimSite91;

HAnimJoint87YYY.children = new X3D.MFNode();

HAnimJoint87ZZZ.children[0] = HAnimSegment88;

HAnimJoint83ZZZ.children[1] = HAnimJoint87;

let HAnimJoint93 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint93.DEF = "boxman_l_shoulder";
HAnimJoint93.name = "l_shoulder";
HAnimJoint93.rotation = new X3D.SFRotation([-0.168396082523642,0,0.98571941209996,1.75368175088092]);
HAnimJoint93.center = new X3D.SFVec3f([0.1968,1.4642,-0.0265]);
HAnimJoint93.skinCoordIndex = new X3D.MFInt32([176,177,178,179,180,181,182,183]);
HAnimJoint93.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment94 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment94.DEF = "boxman_l_upperarm";
HAnimSegment94.name = "l_upperarm";
let Transform95 = browser.currentScene.createNode("Transform");
Transform95.translation = new X3D.SFVec3f([0.1968,1.4642,-0.0265]);
let Shape96 = browser.currentScene.createNode("Shape");
Shape96.USE = "SphereYellow";
Transform95YYY.child = new X3D.undefined();

Transform95ZZZ.child[0] = Shape96;

HAnimSegment94YYY.children = new X3D.MFNode();

HAnimSegment94ZZZ.children[0] = Transform95;

HAnimJoint93YYY.children = new X3D.MFNode();

HAnimJoint93ZZZ.children[0] = HAnimSegment94;

let HAnimJoint97 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint97.DEF = "boxman_l_elbow";
HAnimJoint97.name = "l_elbow";
HAnimJoint97.rotation = new X3D.SFRotation([0.976795664618561,-0.214173363382058,0,4.35600755948079]);
HAnimJoint97.center = new X3D.SFVec3f([0.1982,1.1622,-0.0557]);
HAnimJoint97.skinCoordIndex = new X3D.MFInt32([184,185,186,187,188,189,190,191]);
HAnimJoint97.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment98 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment98.DEF = "boxman_l_forearm";
HAnimSegment98.name = "l_forearm";
let Transform99 = browser.currentScene.createNode("Transform");
Transform99.translation = new X3D.SFVec3f([0.1982,1.1622,-0.0557]);
let Shape100 = browser.currentScene.createNode("Shape");
Shape100.USE = "SphereYellow";
Transform99YYY.child = new X3D.undefined();

Transform99ZZZ.child[0] = Shape100;

HAnimSegment98YYY.children = new X3D.MFNode();

HAnimSegment98ZZZ.children[0] = Transform99;

HAnimJoint97YYY.children = new X3D.MFNode();

HAnimJoint97ZZZ.children[0] = HAnimSegment98;

let HAnimJoint101 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint101.DEF = "boxman_l_wrist";
HAnimJoint101.name = "l_wrist";
HAnimJoint101.rotation = new X3D.SFRotation([0,1,0,0.379691598867005]);
HAnimJoint101.center = new X3D.SFVec3f([0.1972,0.8929,-0.069]);
HAnimJoint101.skinCoordIndex = new X3D.MFInt32([192,193,194,195,196,197,198,199]);
HAnimJoint101.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment102 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment102.DEF = "boxman_l_hand";
HAnimSegment102.name = "l_hand";
let Transform103 = browser.currentScene.createNode("Transform");
Transform103.translation = new X3D.SFVec3f([0.1972,0.8929,-0.069]);
let Shape104 = browser.currentScene.createNode("Shape");
Shape104.USE = "SphereYellow";
Transform103YYY.child = new X3D.undefined();

Transform103ZZZ.child[0] = Shape104;

HAnimSegment102YYY.children = new X3D.MFNode();

HAnimSegment102ZZZ.children[0] = Transform103;

let HAnimSite105 = browser.currentScene.createNode("HAnimSite");
HAnimSite105.DEF = "boxman_l_hand_tip";
HAnimSite105.name = "l_hand_tip";
HAnimSite105.translation = new X3D.SFVec3f([0.1912,0.6976,-0.071]);
let Shape106 = browser.currentScene.createNode("Shape");
Shape106.USE = "SphereRed";
HAnimSite105YYY.children = new X3D.MFNode();

HAnimSite105ZZZ.children[0] = Shape106;

HAnimSegment102ZZZ.children[1] = HAnimSite105;

HAnimJoint101YYY.children = new X3D.MFNode();

HAnimJoint101ZZZ.children[0] = HAnimSegment102;

HAnimJoint97ZZZ.children[1] = HAnimJoint101;

HAnimJoint93ZZZ.children[1] = HAnimJoint97;

HAnimJoint83ZZZ.children[2] = HAnimJoint93;

let HAnimJoint107 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint107.DEF = "boxman_r_shoulder";
HAnimJoint107.name = "r_shoulder";
HAnimJoint107.rotation = new X3D.SFRotation([0.168396082523642,0,0.98571941209996,4.52950355629867]);
HAnimJoint107.center = new X3D.SFVec3f([-0.1968,1.4642,-0.0265]);
HAnimJoint107.skinCoordIndex = new X3D.MFInt32([200,201,202,203,204,205,206,207]);
HAnimJoint107.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment108 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment108.DEF = "boxman_r_upperarm";
HAnimSegment108.name = "r_upperarm";
let Transform109 = browser.currentScene.createNode("Transform");
Transform109.translation = new X3D.SFVec3f([-0.1968,1.4642,-0.0265]);
let Shape110 = browser.currentScene.createNode("Shape");
Shape110.USE = "SphereYellow";
Transform109YYY.child = new X3D.undefined();

Transform109ZZZ.child[0] = Shape110;

HAnimSegment108YYY.children = new X3D.MFNode();

HAnimSegment108ZZZ.children[0] = Transform109;

HAnimJoint107YYY.children = new X3D.MFNode();

HAnimJoint107ZZZ.children[0] = HAnimSegment108;

let HAnimJoint111 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint111.DEF = "boxman_r_elbow";
HAnimJoint111.name = "r_elbow";
HAnimJoint111.rotation = new X3D.SFRotation([0.976795664618562,0.214173363382058,0,4.35600755948079]);
HAnimJoint111.center = new X3D.SFVec3f([-0.1982,1.1622,-0.0557]);
HAnimJoint111.skinCoordIndex = new X3D.MFInt32([208,209,210,211,212,213,214,215]);
HAnimJoint111.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment112 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment112.DEF = "boxman_r_forearm";
HAnimSegment112.name = "r_forearm";
let Transform113 = browser.currentScene.createNode("Transform");
Transform113.translation = new X3D.SFVec3f([-0.1982,1.1622,-0.0557]);
let Shape114 = browser.currentScene.createNode("Shape");
Shape114.USE = "SphereYellow";
Transform113YYY.child = new X3D.undefined();

Transform113ZZZ.child[0] = Shape114;

HAnimSegment112YYY.children = new X3D.MFNode();

HAnimSegment112ZZZ.children[0] = Transform113;

HAnimJoint111YYY.children = new X3D.MFNode();

HAnimJoint111ZZZ.children[0] = HAnimSegment112;

let HAnimJoint115 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint115.DEF = "boxman_r_wrist";
HAnimJoint115.name = "r_wrist";
HAnimJoint115.rotation = new X3D.SFRotation([0,-1,0,0.379691598867005]);
HAnimJoint115.center = new X3D.SFVec3f([-0.1972,0.8929,-0.069]);
HAnimJoint115.skinCoordIndex = new X3D.MFInt32([216,217,218,219,220,221,222,223]);
HAnimJoint115.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment116 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment116.DEF = "boxman_r_hand";
HAnimSegment116.name = "r_hand";
let Transform117 = browser.currentScene.createNode("Transform");
Transform117.translation = new X3D.SFVec3f([-0.1972,0.8929,-0.069]);
let Shape118 = browser.currentScene.createNode("Shape");
Shape118.USE = "SphereYellow";
Transform117YYY.child = new X3D.undefined();

Transform117ZZZ.child[0] = Shape118;

HAnimSegment116YYY.children = new X3D.MFNode();

HAnimSegment116ZZZ.children[0] = Transform117;

let HAnimSite119 = browser.currentScene.createNode("HAnimSite");
HAnimSite119.DEF = "boxman_r_hand_tip";
HAnimSite119.name = "r_hand_tip";
HAnimSite119.translation = new X3D.SFVec3f([-0.1912,0.6976,-0.071]);
let Shape120 = browser.currentScene.createNode("Shape");
Shape120.USE = "SphereRed";
HAnimSite119YYY.children = new X3D.MFNode();

HAnimSite119ZZZ.children[0] = Shape120;

HAnimSegment116ZZZ.children[1] = HAnimSite119;

HAnimJoint115YYY.children = new X3D.MFNode();

HAnimJoint115ZZZ.children[0] = HAnimSegment116;

HAnimJoint111ZZZ.children[1] = HAnimJoint115;

HAnimJoint107ZZZ.children[1] = HAnimJoint111;

HAnimJoint83ZZZ.children[3] = HAnimJoint107;

HAnimJoint37ZZZ.children[3] = HAnimJoint83;

HAnimHumanoid36.joints = new X3D.MFNode();

HAnimHumanoid36XXX.joints[0] = HAnimJoint37;

let HAnimJoint121 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint121.USE = "boxman_humanoid_root";
joints[1] = HAnimJoint121;

let HAnimJoint122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint122.USE = "boxman_skullbase";
joints[2] = HAnimJoint122;

let HAnimJoint123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint123.USE = "boxman_vl5";
joints[3] = HAnimJoint123;

let HAnimJoint124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint124.USE = "boxman_r_ankle";
joints[4] = HAnimJoint124;

let HAnimJoint125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint125.USE = "boxman_l_ankle";
joints[5] = HAnimJoint125;

let HAnimJoint126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint126.USE = "boxman_r_elbow";
joints[6] = HAnimJoint126;

let HAnimJoint127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint127.USE = "boxman_l_elbow";
joints[7] = HAnimJoint127;

let HAnimJoint128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint128.USE = "boxman_r_hip";
joints[8] = HAnimJoint128;

let HAnimJoint129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint129.USE = "boxman_l_hip";
joints[9] = HAnimJoint129;

let HAnimJoint130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint130.USE = "boxman_r_knee";
joints[10] = HAnimJoint130;

let HAnimJoint131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint131.USE = "boxman_l_knee";
joints[11] = HAnimJoint131;

let HAnimJoint132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint132.USE = "boxman_r_midtarsal";
joints[12] = HAnimJoint132;

let HAnimJoint133 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint133.USE = "boxman_l_midtarsal";
joints[13] = HAnimJoint133;

let HAnimJoint134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint134.USE = "boxman_r_shoulder";
joints[14] = HAnimJoint134;

let HAnimJoint135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint135.USE = "boxman_l_shoulder";
joints[15] = HAnimJoint135;

let HAnimJoint136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint136.USE = "boxman_r_wrist";
joints[16] = HAnimJoint136;

let HAnimJoint137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint137.USE = "boxman_l_wrist";
joints[17] = HAnimJoint137;

let HAnimSegment138 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment138.USE = "boxman_sacrum";
segments[18] = HAnimSegment138;

let HAnimSegment139 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment139.USE = "boxman_l5";
segments[19] = HAnimSegment139;

let HAnimSegment140 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment140.USE = "boxman_skull";
segments[20] = HAnimSegment140;

let HAnimSegment141 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment141.USE = "boxman_l_calf";
segments[21] = HAnimSegment141;

let HAnimSegment142 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment142.USE = "boxman_r_calf";
segments[22] = HAnimSegment142;

let HAnimSegment143 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment143.USE = "boxman_l_forearm";
segments[23] = HAnimSegment143;

let HAnimSegment144 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment144.USE = "boxman_r_forearm";
segments[24] = HAnimSegment144;

let HAnimSegment145 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment145.USE = "boxman_l_hand";
segments[25] = HAnimSegment145;

let HAnimSegment146 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment146.USE = "boxman_r_hand";
segments[26] = HAnimSegment146;

let HAnimSegment147 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment147.USE = "boxman_l_hindfoot";
segments[27] = HAnimSegment147;

let HAnimSegment148 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment148.USE = "boxman_r_hindfoot";
segments[28] = HAnimSegment148;

let HAnimSegment149 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment149.USE = "boxman_l_middistal";
segments[29] = HAnimSegment149;

let HAnimSegment150 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment150.USE = "boxman_r_middistal";
segments[30] = HAnimSegment150;

let HAnimSegment151 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment151.USE = "boxman_l_thigh";
segments[31] = HAnimSegment151;

let HAnimSegment152 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment152.USE = "boxman_r_thigh";
segments[32] = HAnimSegment152;

let HAnimSegment153 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment153.USE = "boxman_l_upperarm";
segments[33] = HAnimSegment153;

let HAnimSegment154 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment154.USE = "boxman_r_upperarm";
segments[34] = HAnimSegment154;

let HAnimSite155 = browser.currentScene.createNode("HAnimSite");
HAnimSite155.USE = "boxman_skull_tip";
viewpoints[35] = HAnimSite155;

let HAnimSite156 = browser.currentScene.createNode("HAnimSite");
HAnimSite156.USE = "boxman_l_hand_tip";
viewpoints[36] = HAnimSite156;

let HAnimSite157 = browser.currentScene.createNode("HAnimSite");
HAnimSite157.USE = "boxman_r_hand_tip";
viewpoints[37] = HAnimSite157;

let HAnimSite158 = browser.currentScene.createNode("HAnimSite");
HAnimSite158.USE = "boxman_l_middistal_tip";
viewpoints[38] = HAnimSite158;

let HAnimSite159 = browser.currentScene.createNode("HAnimSite");
HAnimSite159.USE = "boxman_r_middistal_tip";
viewpoints[39] = HAnimSite159;

let HAnimSite160 = browser.currentScene.createNode("HAnimSite");
HAnimSite160.DEF = "boxman_BoxMan_view";
HAnimSite160.name = "BoxMan_view";
let Viewpoint161 = browser.currentScene.createNode("Viewpoint");
Viewpoint161.DEF = "Inclined_View";
Viewpoint161.description = "Inclined View";
Viewpoint161.position = new X3D.SFVec3f([2,0.9,2]);
Viewpoint161.orientation = new X3D.SFRotation([0,1,0,0.78]);
HAnimSite160YYY.children = new X3D.MFNode();

HAnimSite160ZZZ.children[0] = Viewpoint161;

let Viewpoint162 = browser.currentScene.createNode("Viewpoint");
Viewpoint162.DEF = "Front_View";
Viewpoint162.description = "Front View";
Viewpoint162.position = new X3D.SFVec3f([0,1,3]);
HAnimSite160ZZZ.children[1] = Viewpoint162;

let Viewpoint163 = browser.currentScene.createNode("Viewpoint");
Viewpoint163.DEF = "Best_View";
Viewpoint163.description = "Right-side View";
Viewpoint163.position = new X3D.SFVec3f([-3,1,0]);
Viewpoint163.orientation = new X3D.SFRotation([0,1,0,-1.57]);
HAnimSite160ZZZ.children[2] = Viewpoint163;

let Viewpoint164 = browser.currentScene.createNode("Viewpoint");
Viewpoint164.DEF = "Side_View";
Viewpoint164.description = "Left-side View";
Viewpoint164.position = new X3D.SFVec3f([3,1,0]);
Viewpoint164.orientation = new X3D.SFRotation([0,1,0,1.57]);
HAnimSite160ZZZ.children[3] = Viewpoint164;

let Viewpoint165 = browser.currentScene.createNode("Viewpoint");
Viewpoint165.DEF = "Top_View";
Viewpoint165.description = "Top View";
Viewpoint165.position = new X3D.SFVec3f([0,3,0]);
Viewpoint165.orientation = new X3D.SFRotation([1,0,0,-1.57]);
HAnimSite160ZZZ.children[4] = Viewpoint165;

viewpoints[40] = HAnimSite160;

let Coordinate166 = browser.currentScene.createNode("Coordinate");
Coordinate166.DEF = "SKINCOORD";
Coordinate166.point = new X3D.MFVec3f([-0.05,1,0.05,0.05,1,0.05,0.03,0.97,-0.1,-0.03,0.97,-0.1,0.03,0.94,-0.075,-0.03,0.94,-0.075,0,0.92,0,0,0.94,0.03,-0.12,1.06,0.05,0.12,1.06,0.05,0.12,1.06,-0.1,-0.12,1.06,-0.1,0.0456,0.9364,0.05,0.1456,0.9364,0.05,0.1456,0.9364,-0.05,0.0456,0.9364,-0.05,0.0456,0.9,0.05,0.1456,0.9,0.05,0.1456,0.9,-0.05,0.0456,0.9,-0.05,0.0456,0.8,0.05,0.1456,0.8,0.05,0.1456,0.8,-0.05,0.0456,0.8,-0.05,0.0456,0.7,0.05,0.1456,0.7,0.05,0.1456,0.7,-0.05,0.0456,0.7,-0.05,0.0456,0.6,0.05,0.1456,0.6,0.05,0.1456,0.6,-0.05,0.0456,0.6,-0.05,0.0456,0.55,0.05,0.1456,0.55,0.05,0.1456,0.55,-0.05,0.0456,0.55,-0.05,0.0456,0.52,0.05,0.1456,0.52,0.05,0.1456,0.52,-0.05,0.0456,0.52,-0.05,0.0456,0.5,0.05,0.1456,0.5,0.05,0.1456,0.5,-0.05,0.0456,0.5,-0.05,0.0454,0.43,0.045,0.1454,0.43,0.045,0.1454,0.43,-0.055,0.0454,0.43,-0.055,0.0452,0.36,0.04,0.1452,0.36,0.04,0.1452,0.36,-0.06,0.0452,0.36,-0.06,0.045,0.29,0.035,0.145,0.29,0.035,0.145,0.29,-0.065,0.045,0.29,-0.065,0.0448,0.21,0.03,0.1448,0.21,0.03,0.1448,0.21,-0.07,0.0448,0.21,-0.07,0.0446,0.1262,0.025,0.1446,0.1262,0.025,0.1446,0.1262,-0.075,0.0446,0.1262,-0.075,0.0446,0.0762,0.025,0.1446,0.0762,0.025,0.1446,0,-0.075,0.0446,0,-0.075,0.0446,0.0562,0.057,0.1446,0.0562,0.057,0.1446,0,0.057,0.0446,0,0.057,0.0446,0.0562,0.087,0.1446,0.0562,0.087,0.1446,0,0.087,0.0446,0,0.087,0.0446,0.0562,0.1924,0.1446,0.0562,0.1924,0.1446,0,0.1924,0.0446,0,0.1924,-0.0456,0.9364,0.05,-0.1456,0.9364,0.05,-0.1456,0.9364,-0.05,-0.0456,0.9364,-0.05,-0.0456,0.9,0.05,-0.1456,0.9,0.05,-0.1456,0.9,-0.05,-0.0456,0.9,-0.05,-0.0456,0.8,0.05,-0.1456,0.8,0.05,-0.1456,0.8,-0.05,-0.0456,0.8,-0.05,-0.0456,0.7,0.05,-0.1456,0.7,0.05,-0.1456,0.7,-0.05,-0.0456,0.7,-0.05,-0.0456,0.6,0.05,-0.1456,0.6,0.05,-0.1456,0.6,-0.05,-0.0456,0.6,-0.05,-0.0456,0.55,0.05,-0.1456,0.55,0.05,-0.1456,0.55,-0.05,-0.0456,0.55,-0.05,-0.0456,0.52,0.05,-0.1456,0.52,0.05,-0.1456,0.52,-0.05,-0.0456,0.52,-0.05,-0.0456,0.5,0.05,-0.1456,0.5,0.05,-0.1456,0.5,-0.05,-0.0456,0.5,-0.05,-0.0454,0.43,0.045,-0.1454,0.43,0.045,-0.1454,0.43,-0.055,-0.0454,0.43,-0.055,-0.0452,0.36,0.04,-0.1452,0.36,0.04,-0.1452,0.36,-0.06,-0.0452,0.36,-0.06,-0.045,0.29,0.035,-0.145,0.29,0.035,-0.145,0.29,-0.065,-0.045,0.29,-0.065,-0.0448,0.21,0.03,-0.1448,0.21,0.03,-0.1448,0.21,-0.07,-0.0448,0.21,-0.07,-0.0446,0.1262,0.025,-0.1446,0.1262,0.025,-0.1446,0.1262,-0.075,-0.0446,0.1262,-0.075,-0.0446,0.0762,0.025,-0.1446,0.0762,0.025,-0.1446,0,-0.075,-0.0446,0,-0.075,-0.0446,0.0562,0.057,-0.1446,0.0562,0.057,-0.1446,0,0.057,-0.0446,0,0.057,-0.0446,0.0562,0.087,-0.1446,0.0562,0.087,-0.1446,0,0.087,-0.0446,0,0.087,-0.0446,0.0562,0.1924,-0.1446,0.0562,0.1924,-0.1446,0,0.1924,-0.0446,0,0.1924,-0.12,1.1,0.05,0.12,1.1,0.05,0.12,1.1,-0.1,-0.12,1.1,-0.1,-0.14,1.42,0.045,0.14,1.42,0.045,0.14,1.42,-0.09,-0.14,1.42,-0.09,-0.24,1.52,0.035,0.24,1.52,0.035,0.24,1.52,-0.09,-0.24,1.52,-0.09,-0.05,1.56,0.03,0.05,1.56,0.03,0.05,1.56,-0.06,-0.05,1.56,-0.06,-0.05,1.6,0.06,0.05,1.6,0.06,0.05,1.62,-0.03,-0.05,1.62,-0.03,-0.07,1.777,0.13,0.07,1.777,0.13,0.07,1.777,-0.03,-0.07,1.777,-0.03,-0.07,1.6,0.13,0.07,1.6,0.13,0.07,1.66,-0.03,-0.07,1.66,-0.03,0.16,1.42,0.015,0.24,1.5,0.015,0.24,1.5,-0.075,0.16,1.42,-0.075,0.17,1.18,-0.025,0.23,1.18,-0.025,0.23,1.18,-0.085,0.17,1.18,-0.085,0.17,1.14,-0.025,0.23,1.14,-0.025,0.23,1.14,-0.085,0.17,1.14,-0.085,0.18,0.91,-0.05,0.22,0.91,-0.05,0.22,0.91,-0.09,0.18,0.91,-0.09,0.18,0.87,-0.02,0.22,0.87,-0.02,0.22,0.87,-0.1,0.18,0.87,-0.1,0.18,0.6976,-0.02,0.22,0.6976,-0.02,0.22,0.6976,-0.1,0.18,0.6976,-0.1,-0.16,1.42,0.015,-0.24,1.5,0.015,-0.24,1.5,-0.075,-0.16,1.42,-0.075,-0.17,1.18,-0.025,-0.23,1.18,-0.025,-0.23,1.18,-0.085,-0.17,1.18,-0.085,-0.17,1.14,-0.025,-0.23,1.14,-0.025,-0.23,1.14,-0.085,-0.17,1.14,-0.085,-0.18,0.91,-0.05,-0.22,0.91,-0.05,-0.22,0.91,-0.09,-0.18,0.91,-0.09,-0.18,0.87,-0.02,-0.22,0.87,-0.02,-0.22,0.87,-0.1,-0.18,0.87,-0.1,-0.18,0.6976,-0.02,-0.22,0.6976,-0.02,-0.22,0.6976,-0.1,-0.18,0.6976,-0.1]);
skinCoord = Coordinate166;

let Group167 = browser.currentScene.createNode("Group");
let Shape168 = browser.currentScene.createNode("Shape");
Shape168.DEF = "TrouserSkin";
let Appearance169 = browser.currentScene.createNode("Appearance");
let Material170 = browser.currentScene.createNode("Material");
Material170.diffuseColor = new X3D.SFColor([0,0,1]);
Material170.transparency = 0.5;
material = Material170;

appearance = Appearance169;

let IndexedFaceSet171 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet171.coordIndex = new X3D.MFInt32([0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1]);
let Coordinate172 = browser.currentScene.createNode("Coordinate");
Coordinate172.USE = "SKINCOORD";
coord = Coordinate172;

geometry = IndexedFaceSet171;

Group167YYY.children = new X3D.MFNode();

Group167ZZZ.children[0] = Shape168;

let Shape173 = browser.currentScene.createNode("Shape");
Shape173.DEF = "ShoeSkin";
let Appearance174 = browser.currentScene.createNode("Appearance");
let Material175 = browser.currentScene.createNode("Material");
Material175.diffuseColor = new X3D.SFColor([0,0,0]);
Material175.transparency = 0.5;
material = Material175;

appearance = Appearance174;

let IndexedFaceSet176 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet176.coordIndex = new X3D.MFInt32([60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1]);
let Coordinate177 = browser.currentScene.createNode("Coordinate");
Coordinate177.USE = "SKINCOORD";
coord = Coordinate177;

geometry = IndexedFaceSet176;

Group167ZZZ.children[1] = Shape173;

let Shape178 = browser.currentScene.createNode("Shape");
Shape178.DEF = "ShirtSkin";
let Appearance179 = browser.currentScene.createNode("Appearance");
let Material180 = browser.currentScene.createNode("Material");
Material180.diffuseColor = new X3D.SFColor([1,1,0]);
Material180.transparency = 0.5;
material = Material180;

appearance = Appearance179;

let IndexedFaceSet181 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet181.coordIndex = new X3D.MFInt32([148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1]);
let Coordinate182 = browser.currentScene.createNode("Coordinate");
Coordinate182.USE = "SKINCOORD";
coord = Coordinate182;

geometry = IndexedFaceSet181;

Group167ZZZ.children[2] = Shape178;

let Shape183 = browser.currentScene.createNode("Shape");
Shape183.DEF = "HeadHandsFleshToneSkin";
let Appearance184 = browser.currentScene.createNode("Appearance");
let Material185 = browser.currentScene.createNode("Material");
Material185.diffuseColor = new X3D.SFColor([1,0.75,0.75]);
Material185.transparency = 0.5;
material = Material185;

appearance = Appearance184;

let IndexedFaceSet186 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet186.coordIndex = new X3D.MFInt32([172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
let Coordinate187 = browser.currentScene.createNode("Coordinate");
Coordinate187.USE = "SKINCOORD";
coord = Coordinate187;

geometry = IndexedFaceSet186;

Group167ZZZ.children[3] = Shape183;

let Shape188 = browser.currentScene.createNode("Shape");
Shape188.DEF = "SkinLines";
let Appearance189 = browser.currentScene.createNode("Appearance");
let Material190 = browser.currentScene.createNode("Material");
Material190.diffuseColor = new X3D.SFColor([0,0,0]);
material = Material190;

appearance = Appearance189;

let IndexedLineSet191 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet191.coordIndex = new X3D.MFInt32([0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
let Coordinate192 = browser.currentScene.createNode("Coordinate");
Coordinate192.USE = "SKINCOORD";
coord = Coordinate192;

geometry = IndexedLineSet191;

Group167ZZZ.children[4] = Shape188;

skin[41] = Group167;

browser.currentScene.children[2] = HAnimHumanoid36;

let Group193 = browser.currentScene.createNode("Group");
Group193.DEF = "StopAnimation";
let TimeSensor194 = browser.currentScene.createNode("TimeSensor");
TimeSensor194.DEF = "StopTimer";
TimeSensor194.cycleInterval = 5.73;
TimeSensor194.loop = True;
Group193YYY.children = new X3D.MFNode();

Group193ZZZ.children[0] = TimeSensor194;

let PositionInterpolator195 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator195.DEF = "Stop_humanoid_root_TranslationInterpolator";
PositionInterpolator195.key = new X3D.MFFloat([0,0.5,1]);
PositionInterpolator195.keyValue = new X3D.MFVec3f([0,0,0,0,0,0,0,0,0]);
Group193ZZZ.children[1] = PositionInterpolator195;

let OrientationInterpolator196 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator196.DEF = "Stop_humanoid_root_RotationInterpolator";
OrientationInterpolator196.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator196.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[2] = OrientationInterpolator196;

let OrientationInterpolator197 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator197.DEF = "Stop_sacroiliac_RotationInterpolator";
OrientationInterpolator197.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator197.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[3] = OrientationInterpolator197;

let OrientationInterpolator198 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator198.DEF = "Stop_l_hip_RotationInterpolator";
OrientationInterpolator198.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator198.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[4] = OrientationInterpolator198;

let OrientationInterpolator199 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator199.DEF = "Stop_l_knee_RotationInterpolator";
OrientationInterpolator199.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator199.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[5] = OrientationInterpolator199;

let OrientationInterpolator200 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator200.DEF = "Stop_l_ankle_RotationInterpolator";
OrientationInterpolator200.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator200.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[6] = OrientationInterpolator200;

let OrientationInterpolator201 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator201.DEF = "Stop_l_subtalar_RotationInterpolator";
OrientationInterpolator201.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator201.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[7] = OrientationInterpolator201;

let OrientationInterpolator202 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator202.DEF = "Stop_l_midtarsal_RotationInterpolator";
OrientationInterpolator202.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator202.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[8] = OrientationInterpolator202;

let OrientationInterpolator203 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator203.DEF = "Stop_l_metatarsal_RotationInterpolator";
OrientationInterpolator203.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator203.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[9] = OrientationInterpolator203;

let OrientationInterpolator204 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator204.DEF = "Stop_r_hip_RotationInterpolator";
OrientationInterpolator204.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator204.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[10] = OrientationInterpolator204;

let OrientationInterpolator205 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator205.DEF = "Stop_r_knee_RotationInterpolator";
OrientationInterpolator205.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator205.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[11] = OrientationInterpolator205;

let OrientationInterpolator206 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator206.DEF = "Stop_r_ankle_RotationInterpolator";
OrientationInterpolator206.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator206.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[12] = OrientationInterpolator206;

let OrientationInterpolator207 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator207.DEF = "Stop_r_subtalar_RotationInterpolator";
OrientationInterpolator207.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator207.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[13] = OrientationInterpolator207;

let OrientationInterpolator208 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator208.DEF = "Stop_r_midtarsal_RotationInterpolator";
OrientationInterpolator208.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator208.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[14] = OrientationInterpolator208;

let OrientationInterpolator209 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator209.DEF = "Stop_r_metatarsal_RotationInterpolator";
OrientationInterpolator209.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator209.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[15] = OrientationInterpolator209;

let OrientationInterpolator210 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator210.DEF = "Stop_vl5_RotationInterpolator";
OrientationInterpolator210.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator210.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[16] = OrientationInterpolator210;

let OrientationInterpolator211 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator211.DEF = "Stop_vl4_RotationInterpolator";
OrientationInterpolator211.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator211.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[17] = OrientationInterpolator211;

let OrientationInterpolator212 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator212.DEF = "Stop_vl3_RotationInterpolator";
OrientationInterpolator212.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator212.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[18] = OrientationInterpolator212;

let OrientationInterpolator213 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator213.DEF = "Stop_vl2_RotationInterpolator";
OrientationInterpolator213.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator213.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[19] = OrientationInterpolator213;

let OrientationInterpolator214 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator214.DEF = "Stop_vl1_RotationInterpolator";
OrientationInterpolator214.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator214.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[20] = OrientationInterpolator214;

let OrientationInterpolator215 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator215.DEF = "Stop_vt12_RotationInterpolator";
OrientationInterpolator215.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator215.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[21] = OrientationInterpolator215;

let OrientationInterpolator216 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator216.DEF = "Stop_vt11_RotationInterpolator";
OrientationInterpolator216.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator216.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[22] = OrientationInterpolator216;

let OrientationInterpolator217 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator217.DEF = "Stop_vt10_RotationInterpolator";
OrientationInterpolator217.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator217.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[23] = OrientationInterpolator217;

let OrientationInterpolator218 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator218.DEF = "Stop_vt9_RotationInterpolator";
OrientationInterpolator218.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator218.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[24] = OrientationInterpolator218;

let OrientationInterpolator219 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator219.DEF = "Stop_vt8_RotationInterpolator";
OrientationInterpolator219.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator219.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[25] = OrientationInterpolator219;

let OrientationInterpolator220 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator220.DEF = "Stop_vt7_RotationInterpolator";
OrientationInterpolator220.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator220.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[26] = OrientationInterpolator220;

let OrientationInterpolator221 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator221.DEF = "Stop_vt6_RotationInterpolator";
OrientationInterpolator221.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator221.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[27] = OrientationInterpolator221;

let OrientationInterpolator222 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator222.DEF = "Stop_vt5_RotationInterpolator";
OrientationInterpolator222.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator222.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[28] = OrientationInterpolator222;

let OrientationInterpolator223 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator223.DEF = "Stop_vt4_RotationInterpolator";
OrientationInterpolator223.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator223.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[29] = OrientationInterpolator223;

let OrientationInterpolator224 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator224.DEF = "Stop_vt3_RotationInterpolator";
OrientationInterpolator224.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator224.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[30] = OrientationInterpolator224;

let OrientationInterpolator225 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator225.DEF = "Stop_vt2_RotationInterpolator";
OrientationInterpolator225.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator225.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[31] = OrientationInterpolator225;

let OrientationInterpolator226 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator226.DEF = "Stop_vt1_RotationInterpolator";
OrientationInterpolator226.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator226.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[32] = OrientationInterpolator226;

let OrientationInterpolator227 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator227.DEF = "Stop_vc7_RotationInterpolator";
OrientationInterpolator227.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator227.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[33] = OrientationInterpolator227;

let OrientationInterpolator228 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator228.DEF = "Stop_vc6_RotationInterpolator";
OrientationInterpolator228.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator228.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[34] = OrientationInterpolator228;

let OrientationInterpolator229 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator229.DEF = "Stop_vc5_RotationInterpolator";
OrientationInterpolator229.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator229.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[35] = OrientationInterpolator229;

let OrientationInterpolator230 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator230.DEF = "Stop_vc4_RotationInterpolator";
OrientationInterpolator230.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator230.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[36] = OrientationInterpolator230;

let OrientationInterpolator231 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator231.DEF = "Stop_vc3_RotationInterpolator";
OrientationInterpolator231.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator231.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[37] = OrientationInterpolator231;

let OrientationInterpolator232 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator232.DEF = "Stop_vc2_RotationInterpolator";
OrientationInterpolator232.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator232.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[38] = OrientationInterpolator232;

let OrientationInterpolator233 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator233.DEF = "Stop_vc1_RotationInterpolator";
OrientationInterpolator233.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator233.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[39] = OrientationInterpolator233;

let OrientationInterpolator234 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator234.DEF = "Stop_skullbase_RotationInterpolator";
OrientationInterpolator234.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator234.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[40] = OrientationInterpolator234;

let OrientationInterpolator235 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator235.DEF = "Stop_l_eyeball_joint_RotationInterpolator";
OrientationInterpolator235.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator235.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[41] = OrientationInterpolator235;

let OrientationInterpolator236 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator236.DEF = "Stop_r_eyeball_joint_RotationInterpolator";
OrientationInterpolator236.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator236.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[42] = OrientationInterpolator236;

let OrientationInterpolator237 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator237.DEF = "Stop_l_sternoclavicular_RotationInterpolator";
OrientationInterpolator237.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator237.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[43] = OrientationInterpolator237;

let OrientationInterpolator238 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator238.DEF = "Stop_l_acromioclavicular_RotationInterpolator";
OrientationInterpolator238.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator238.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[44] = OrientationInterpolator238;

let OrientationInterpolator239 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator239.DEF = "Stop_l_shoulder_RotationInterpolator";
OrientationInterpolator239.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator239.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[45] = OrientationInterpolator239;

let OrientationInterpolator240 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator240.DEF = "Stop_l_elbow_RotationInterpolator";
OrientationInterpolator240.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator240.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[46] = OrientationInterpolator240;

let OrientationInterpolator241 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator241.DEF = "Stop_l_wrist_RotationInterpolator";
OrientationInterpolator241.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator241.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[47] = OrientationInterpolator241;

let OrientationInterpolator242 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator242.DEF = "Stop_l_thumb1_RotationInterpolator";
OrientationInterpolator242.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator242.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[48] = OrientationInterpolator242;

let OrientationInterpolator243 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator243.DEF = "Stop_l_thumb2_RotationInterpolator";
OrientationInterpolator243.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator243.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[49] = OrientationInterpolator243;

let OrientationInterpolator244 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator244.DEF = "Stop_l_thumb3_RotationInterpolator";
OrientationInterpolator244.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator244.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[50] = OrientationInterpolator244;

let OrientationInterpolator245 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator245.DEF = "Stop_l_index0_RotationInterpolator";
OrientationInterpolator245.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator245.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[51] = OrientationInterpolator245;

let OrientationInterpolator246 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator246.DEF = "Stop_l_index1_RotationInterpolator";
OrientationInterpolator246.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator246.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[52] = OrientationInterpolator246;

let OrientationInterpolator247 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator247.DEF = "Stop_l_index2_RotationInterpolator";
OrientationInterpolator247.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator247.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[53] = OrientationInterpolator247;

let OrientationInterpolator248 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator248.DEF = "Stop_l_index3_RotationInterpolator";
OrientationInterpolator248.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator248.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[54] = OrientationInterpolator248;

let OrientationInterpolator249 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator249.DEF = "Stop_l_middle0_RotationInterpolator";
OrientationInterpolator249.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator249.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[55] = OrientationInterpolator249;

let OrientationInterpolator250 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator250.DEF = "Stop_l_middle1_RotationInterpolator";
OrientationInterpolator250.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator250.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[56] = OrientationInterpolator250;

let OrientationInterpolator251 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator251.DEF = "Stop_l_middle2_RotationInterpolator";
OrientationInterpolator251.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator251.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[57] = OrientationInterpolator251;

let OrientationInterpolator252 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator252.DEF = "Stop_l_middle3_RotationInterpolator";
OrientationInterpolator252.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator252.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[58] = OrientationInterpolator252;

let OrientationInterpolator253 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator253.DEF = "Stop_l_ring0_RotationInterpolator";
OrientationInterpolator253.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator253.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[59] = OrientationInterpolator253;

let OrientationInterpolator254 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator254.DEF = "Stop_l_ring1_RotationInterpolator";
OrientationInterpolator254.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator254.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[60] = OrientationInterpolator254;

let OrientationInterpolator255 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator255.DEF = "Stop_l_ring2_RotationInterpolator";
OrientationInterpolator255.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator255.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[61] = OrientationInterpolator255;

let OrientationInterpolator256 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator256.DEF = "Stop_l_ring3_RotationInterpolator";
OrientationInterpolator256.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator256.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[62] = OrientationInterpolator256;

let OrientationInterpolator257 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator257.DEF = "Stop_l_pinky0_RotationInterpolator";
OrientationInterpolator257.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator257.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[63] = OrientationInterpolator257;

let OrientationInterpolator258 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator258.DEF = "Stop_l_pinky1_RotationInterpolator";
OrientationInterpolator258.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator258.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[64] = OrientationInterpolator258;

let OrientationInterpolator259 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator259.DEF = "Stop_l_pinky2_RotationInterpolator";
OrientationInterpolator259.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator259.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[65] = OrientationInterpolator259;

let OrientationInterpolator260 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator260.DEF = "Stop_l_pinky3_RotationInterpolator";
OrientationInterpolator260.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator260.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[66] = OrientationInterpolator260;

let OrientationInterpolator261 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator261.DEF = "Stop_r_sternoclavicular_RotationInterpolator";
OrientationInterpolator261.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator261.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[67] = OrientationInterpolator261;

let OrientationInterpolator262 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator262.DEF = "Stop_r_acromioclavicular_RotationInterpolator";
OrientationInterpolator262.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator262.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[68] = OrientationInterpolator262;

let OrientationInterpolator263 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator263.DEF = "Stop_r_shoulder_RotationInterpolator";
OrientationInterpolator263.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator263.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[69] = OrientationInterpolator263;

let OrientationInterpolator264 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator264.DEF = "Stop_r_elbow_RotationInterpolator";
OrientationInterpolator264.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator264.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[70] = OrientationInterpolator264;

let OrientationInterpolator265 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator265.DEF = "Stop_r_wrist_RotationInterpolator";
OrientationInterpolator265.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator265.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[71] = OrientationInterpolator265;

let OrientationInterpolator266 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator266.DEF = "Stop_r_thumb1_RotationInterpolator";
OrientationInterpolator266.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator266.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[72] = OrientationInterpolator266;

let OrientationInterpolator267 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator267.DEF = "Stop_r_thumb2_RotationInterpolator";
OrientationInterpolator267.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator267.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[73] = OrientationInterpolator267;

let OrientationInterpolator268 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator268.DEF = "Stop_r_thumb3_RotationInterpolator";
OrientationInterpolator268.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator268.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[74] = OrientationInterpolator268;

let OrientationInterpolator269 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator269.DEF = "Stop_r_index0_RotationInterpolator";
OrientationInterpolator269.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator269.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[75] = OrientationInterpolator269;

let OrientationInterpolator270 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator270.DEF = "Stop_r_index1_RotationInterpolator";
OrientationInterpolator270.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator270.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[76] = OrientationInterpolator270;

let OrientationInterpolator271 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator271.DEF = "Stop_r_index2_RotationInterpolator";
OrientationInterpolator271.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator271.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[77] = OrientationInterpolator271;

let OrientationInterpolator272 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator272.DEF = "Stop_r_index3_RotationInterpolator";
OrientationInterpolator272.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator272.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[78] = OrientationInterpolator272;

let OrientationInterpolator273 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator273.DEF = "Stop_r_middle0_RotationInterpolator";
OrientationInterpolator273.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator273.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[79] = OrientationInterpolator273;

let OrientationInterpolator274 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator274.DEF = "Stop_r_middle1_RotationInterpolator";
OrientationInterpolator274.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator274.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[80] = OrientationInterpolator274;

let OrientationInterpolator275 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator275.DEF = "Stop_r_middle2_RotationInterpolator";
OrientationInterpolator275.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator275.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[81] = OrientationInterpolator275;

let OrientationInterpolator276 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator276.DEF = "Stop_r_middle3_RotationInterpolator";
OrientationInterpolator276.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator276.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[82] = OrientationInterpolator276;

let OrientationInterpolator277 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator277.DEF = "Stop_r_ring0_RotationInterpolator";
OrientationInterpolator277.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator277.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[83] = OrientationInterpolator277;

let OrientationInterpolator278 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator278.DEF = "Stop_r_ring1_RotationInterpolator";
OrientationInterpolator278.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator278.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[84] = OrientationInterpolator278;

let OrientationInterpolator279 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator279.DEF = "Stop_r_ring2_RotationInterpolator";
OrientationInterpolator279.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator279.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[85] = OrientationInterpolator279;

let OrientationInterpolator280 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator280.DEF = "Stop_r_ring3_RotationInterpolator";
OrientationInterpolator280.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator280.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[86] = OrientationInterpolator280;

let OrientationInterpolator281 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator281.DEF = "Stop_r_pinky0_RotationInterpolator";
OrientationInterpolator281.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator281.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[87] = OrientationInterpolator281;

let OrientationInterpolator282 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator282.DEF = "Stop_r_pinky1_RotationInterpolator";
OrientationInterpolator282.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator282.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[88] = OrientationInterpolator282;

let OrientationInterpolator283 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator283.DEF = "Stop_r_pinky2_RotationInterpolator";
OrientationInterpolator283.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator283.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[89] = OrientationInterpolator283;

let OrientationInterpolator284 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator284.DEF = "Stop_r_pinky3_RotationInterpolator";
OrientationInterpolator284.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator284.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group193ZZZ.children[90] = OrientationInterpolator284;

browser.currentScene.children[3] = Group193;

let Group285 = browser.currentScene.createNode("Group");
Group285.DEF = "StandAnimation";
let TimeSensor286 = browser.currentScene.createNode("TimeSensor");
TimeSensor286.DEF = "StandTimer";
TimeSensor286.cycleInterval = 5.73;
TimeSensor286.loop = True;
Group285YYY.children = new X3D.MFNode();

Group285ZZZ.children[0] = TimeSensor286;

let OrientationInterpolator287 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator287.DEF = "Stand_r_metatarsal_PitchInterpolator";
OrientationInterpolator287.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator287.keyValue = new X3D.MFRotation([1,0,0,0,-1,0,0,0.015,1,0,0,0.17,-1,0,0,0.025,1,0,0,0.01,1,0,0,0]);
Group285ZZZ.children[1] = OrientationInterpolator287;

let OrientationInterpolator288 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator288.DEF = "Stand_r_ankle_RotationInterpolator";
OrientationInterpolator288.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator288.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group285ZZZ.children[2] = OrientationInterpolator288;

let OrientationInterpolator289 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator289.DEF = "Stand_r_knee_RotationInterpolator";
OrientationInterpolator289.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator289.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group285ZZZ.children[3] = OrientationInterpolator289;

let OrientationInterpolator290 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator290.DEF = "Stand_r_hip_RotationInterpolator";
OrientationInterpolator290.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator290.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group285ZZZ.children[4] = OrientationInterpolator290;

let OrientationInterpolator291 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator291.DEF = "Stand_l_ankle_RotationInterpolator";
OrientationInterpolator291.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator291.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group285ZZZ.children[5] = OrientationInterpolator291;

let OrientationInterpolator292 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator292.DEF = "Stand_l_knee_RotationInterpolator";
OrientationInterpolator292.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator292.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group285ZZZ.children[6] = OrientationInterpolator292;

let OrientationInterpolator293 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator293.DEF = "Stand_l_hip_RotationInterpolator";
OrientationInterpolator293.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator293.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group285ZZZ.children[7] = OrientationInterpolator293;

let OrientationInterpolator294 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator294.DEF = "Stand_r_wrist_RotationInterpolator";
OrientationInterpolator294.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator294.keyValue = new X3D.MFRotation([0,0,1,0,0,0,-1,0.25,0,0,1,0]);
Group285ZZZ.children[8] = OrientationInterpolator294;

let OrientationInterpolator295 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator295.DEF = "Stand_r_elbow_RotationInterpolator";
OrientationInterpolator295.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator295.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group285ZZZ.children[9] = OrientationInterpolator295;

let OrientationInterpolator296 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator296.DEF = "Stand_r_shoulder_RotationInterpolator";
OrientationInterpolator296.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator296.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group285ZZZ.children[10] = OrientationInterpolator296;

let OrientationInterpolator297 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator297.DEF = "Stand_l_wrist_RotationInterpolator";
OrientationInterpolator297.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator297.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group285ZZZ.children[11] = OrientationInterpolator297;

let OrientationInterpolator298 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator298.DEF = "Stand_l_elbow_RotationInterpolator";
OrientationInterpolator298.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator298.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group285ZZZ.children[12] = OrientationInterpolator298;

let OrientationInterpolator299 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator299.DEF = "Stand_l_shoulder_RotationInterpolator";
OrientationInterpolator299.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator299.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group285ZZZ.children[13] = OrientationInterpolator299;

let OrientationInterpolator300 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator300.DEF = "Stand_head_RotationInterpolator";
OrientationInterpolator300.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator300.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group285ZZZ.children[14] = OrientationInterpolator300;

let OrientationInterpolator301 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator301.DEF = "Stand_neck_RotationInterpolator";
OrientationInterpolator301.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator301.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.5,0,0,1,0]);
Group285ZZZ.children[15] = OrientationInterpolator301;

let OrientationInterpolator302 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator302.DEF = "Stand_l_eyeball_RotationInterpolator";
OrientationInterpolator302.key = new X3D.MFFloat([0,0.4,0.7,1]);
OrientationInterpolator302.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group285ZZZ.children[16] = OrientationInterpolator302;

let OrientationInterpolator303 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator303.DEF = "Stand_r_eyeball_RotationInterpolator";
OrientationInterpolator303.key = new X3D.MFFloat([0,0.4,0.7,1]);
OrientationInterpolator303.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group285ZZZ.children[17] = OrientationInterpolator303;

let OrientationInterpolator304 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator304.DEF = "Stand_lower_body_RotationInterpolator";
OrientationInterpolator304.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator304.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group285ZZZ.children[18] = OrientationInterpolator304;

let OrientationInterpolator305 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator305.DEF = "Stand_upper_body_RotationInterpolator";
OrientationInterpolator305.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator305.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group285ZZZ.children[19] = OrientationInterpolator305;

let OrientationInterpolator306 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator306.DEF = "Stand_whole_body_RotationInterpolator";
OrientationInterpolator306.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator306.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group285ZZZ.children[20] = OrientationInterpolator306;

let PositionInterpolator307 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator307.DEF = "Stand_whole_body_TranslationInterpolator";
PositionInterpolator307.key = new X3D.MFFloat([0,0.5,1]);
PositionInterpolator307.keyValue = new X3D.MFVec3f([0,0,0,0,0,0,0,0,0]);
Group285ZZZ.children[21] = PositionInterpolator307;

let OrientationInterpolator308 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator308.DEF = "Stand_l_sternoclavicular_RollInterpolator";
OrientationInterpolator308.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator308.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group285ZZZ.children[22] = OrientationInterpolator308;

let OrientationInterpolator309 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator309.DEF = "Stand_l_acromioclavicular_RollInterpolator";
OrientationInterpolator309.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator309.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group285ZZZ.children[23] = OrientationInterpolator309;

let OrientationInterpolator310 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator310.DEF = "Stand_r_sternoclavicular_RollInterpolator";
OrientationInterpolator310.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator310.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group285ZZZ.children[24] = OrientationInterpolator310;

let OrientationInterpolator311 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator311.DEF = "Stand_r_acromioclavicular_RollInterpolator";
OrientationInterpolator311.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator311.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group285ZZZ.children[25] = OrientationInterpolator311;

let OrientationInterpolator312 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator312.DEF = "Stand_sacroiliac_YawInterpolator";
OrientationInterpolator312.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator312.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group285ZZZ.children[26] = OrientationInterpolator312;

let OrientationInterpolator313 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator313.DEF = "Stand_vl5_YawInterpolator";
OrientationInterpolator313.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator313.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group285ZZZ.children[27] = OrientationInterpolator313;

let OrientationInterpolator314 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator314.DEF = "Stand_vc6_YawInterpolator";
OrientationInterpolator314.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator314.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,0,0]);
Group285ZZZ.children[28] = OrientationInterpolator314;

let OrientationInterpolator315 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator315.DEF = "Stand_l_thumb1_PitchInterpolator";
OrientationInterpolator315.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator315.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group285ZZZ.children[29] = OrientationInterpolator315;

let OrientationInterpolator316 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator316.DEF = "Stand_r_thumb1_PitchInterpolator";
OrientationInterpolator316.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator316.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,0.1,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group285ZZZ.children[30] = OrientationInterpolator316;

let OrientationInterpolator317 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator317.DEF = "Stand_r_index1_RollInterpolator";
OrientationInterpolator317.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator317.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0.1,0,0,1,0.2,0,0,1,0.3,0,0,1,0,0,0,1,0]);
Group285ZZZ.children[31] = OrientationInterpolator317;

let OrientationInterpolator318 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator318.DEF = "Stand_r_index2_RollInterpolator";
OrientationInterpolator318.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator318.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0.4,0,0,1,0.32,0,0,1,0.25,0,0,1,0.2,0,0,1,0]);
Group285ZZZ.children[32] = OrientationInterpolator318;

let OrientationInterpolator319 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator319.DEF = "Stand_r_index3_RollInterpolator";
OrientationInterpolator319.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator319.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0.2,0,0,1,0.3,0,0,1,0.35,0,0,1,0.2,0,0,1,0]);
Group285ZZZ.children[33] = OrientationInterpolator319;

browser.currentScene.children[4] = Group285;

let Group320 = browser.currentScene.createNode("Group");
Group320.DEF = "PitchesAnimation";
let TimeSensor321 = browser.currentScene.createNode("TimeSensor");
TimeSensor321.DEF = "PitchTimer";
TimeSensor321.cycleInterval = 5.73;
TimeSensor321.loop = True;
Group320YYY.children = new X3D.MFNode();

Group320ZZZ.children[0] = TimeSensor321;

let OrientationInterpolator322 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator322.DEF = "Pitch_r_metatarsal_PitchInterpolator";
OrientationInterpolator322.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator322.keyValue = new X3D.MFRotation([1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group320ZZZ.children[1] = OrientationInterpolator322;

let OrientationInterpolator323 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator323.DEF = "Pitches_r_ankle_RotationInterpolator";
OrientationInterpolator323.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator323.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group320ZZZ.children[2] = OrientationInterpolator323;

let OrientationInterpolator324 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator324.DEF = "Pitches_r_knee_RotationInterpolator";
OrientationInterpolator324.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator324.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group320ZZZ.children[3] = OrientationInterpolator324;

let OrientationInterpolator325 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator325.DEF = "Pitches_r_hip_RotationInterpolator";
OrientationInterpolator325.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator325.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group320ZZZ.children[4] = OrientationInterpolator325;

let OrientationInterpolator326 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator326.DEF = "Pitches_l_ankle_RotationInterpolator";
OrientationInterpolator326.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator326.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group320ZZZ.children[5] = OrientationInterpolator326;

let OrientationInterpolator327 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator327.DEF = "Pitches_l_knee_RotationInterpolator";
OrientationInterpolator327.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator327.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group320ZZZ.children[6] = OrientationInterpolator327;

let OrientationInterpolator328 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator328.DEF = "Pitches_l_hip_RotationInterpolator";
OrientationInterpolator328.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator328.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group320ZZZ.children[7] = OrientationInterpolator328;

let OrientationInterpolator329 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator329.DEF = "Pitches_r_wrist_RotationInterpolator";
OrientationInterpolator329.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator329.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group320ZZZ.children[8] = OrientationInterpolator329;

let OrientationInterpolator330 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator330.DEF = "Pitches_r_elbow_RotationInterpolator";
OrientationInterpolator330.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator330.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group320ZZZ.children[9] = OrientationInterpolator330;

let OrientationInterpolator331 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator331.DEF = "Pitches_r_shoulder_RotationInterpolator";
OrientationInterpolator331.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator331.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group320ZZZ.children[10] = OrientationInterpolator331;

let OrientationInterpolator332 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator332.DEF = "Pitches_l_wrist_RotationInterpolator";
OrientationInterpolator332.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator332.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group320ZZZ.children[11] = OrientationInterpolator332;

let OrientationInterpolator333 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator333.DEF = "Pitches_l_elbow_RotationInterpolator";
OrientationInterpolator333.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator333.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group320ZZZ.children[12] = OrientationInterpolator333;

let OrientationInterpolator334 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator334.DEF = "Pitches_l_shoulder_RotationInterpolator";
OrientationInterpolator334.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator334.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group320ZZZ.children[13] = OrientationInterpolator334;

let OrientationInterpolator335 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator335.DEF = "Pitches_head_RotationInterpolator";
OrientationInterpolator335.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator335.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group320ZZZ.children[14] = OrientationInterpolator335;

let OrientationInterpolator336 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator336.DEF = "Pitches_neck_RotationInterpolator";
OrientationInterpolator336.key = new X3D.MFFloat([0,0.25,0.55,1]);
OrientationInterpolator336.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,0.55,-1,0,0,1.05,0,0,1,0]);
Group320ZZZ.children[15] = OrientationInterpolator336;

let OrientationInterpolator337 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator337.DEF = "Pitches_lower_body_RotationInterpolator";
OrientationInterpolator337.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator337.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group320ZZZ.children[16] = OrientationInterpolator337;

let OrientationInterpolator338 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator338.DEF = "Pitches_upper_body_RotationInterpolator";
OrientationInterpolator338.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator338.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group320ZZZ.children[17] = OrientationInterpolator338;

let OrientationInterpolator339 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator339.DEF = "Pitches_whole_body_RotationInterpolator";
OrientationInterpolator339.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator339.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group320ZZZ.children[18] = OrientationInterpolator339;

let PositionInterpolator340 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator340.DEF = "Pitches_whole_body_TranslationInterpolator";
PositionInterpolator340.key = new X3D.MFFloat([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator340.keyValue = new X3D.MFVec3f([0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0]);
Group320ZZZ.children[19] = PositionInterpolator340;

let OrientationInterpolator341 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator341.DEF = "Pitch_l_sternoclavicular_RollInterpolator";
OrientationInterpolator341.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator341.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group320ZZZ.children[20] = OrientationInterpolator341;

let OrientationInterpolator342 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator342.DEF = "Pitch_l_acromioclavicular_RollInterpolator";
OrientationInterpolator342.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator342.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group320ZZZ.children[21] = OrientationInterpolator342;

let OrientationInterpolator343 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator343.DEF = "Pitch_r_sternoclavicular_RollInterpolator";
OrientationInterpolator343.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator343.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group320ZZZ.children[22] = OrientationInterpolator343;

let OrientationInterpolator344 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator344.DEF = "Pitch_r_acromioclavicular_RollInterpolator";
OrientationInterpolator344.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator344.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group320ZZZ.children[23] = OrientationInterpolator344;

let OrientationInterpolator345 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator345.DEF = "Pitch_sacroiliac_YawInterpolator";
OrientationInterpolator345.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator345.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group320ZZZ.children[24] = OrientationInterpolator345;

let OrientationInterpolator346 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator346.DEF = "Pitch_vl5_YawInterpolator";
OrientationInterpolator346.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator346.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group320ZZZ.children[25] = OrientationInterpolator346;

let OrientationInterpolator347 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator347.DEF = "Pitch_vc6_YawInterpolator";
OrientationInterpolator347.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator347.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group320ZZZ.children[26] = OrientationInterpolator347;

let OrientationInterpolator348 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator348.DEF = "Pitch_l_thumb1_PitchInterpolator";
OrientationInterpolator348.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator348.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group320ZZZ.children[27] = OrientationInterpolator348;

let OrientationInterpolator349 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator349.DEF = "Pitch_r_thumb1_PitchInterpolator";
OrientationInterpolator349.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator349.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group320ZZZ.children[28] = OrientationInterpolator349;

browser.currentScene.children[5] = Group320;

let Group350 = browser.currentScene.createNode("Group");
Group350.DEF = "YawsAnimation";
let TimeSensor351 = browser.currentScene.createNode("TimeSensor");
TimeSensor351.DEF = "YawTimer";
TimeSensor351.cycleInterval = 5.73;
TimeSensor351.loop = True;
Group350YYY.children = new X3D.MFNode();

Group350ZZZ.children[0] = TimeSensor351;

let OrientationInterpolator352 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator352.DEF = "Yaw_r_metatarsal_PitchInterpolator";
OrientationInterpolator352.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator352.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group350ZZZ.children[1] = OrientationInterpolator352;

let OrientationInterpolator353 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator353.DEF = "Yaws_r_ankle_RotationInterpolator";
OrientationInterpolator353.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator353.keyValue = new X3D.MFRotation([0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group350ZZZ.children[2] = OrientationInterpolator353;

let OrientationInterpolator354 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator354.DEF = "Yaws_r_knee_RotationInterpolator";
OrientationInterpolator354.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator354.keyValue = new X3D.MFRotation([0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group350ZZZ.children[3] = OrientationInterpolator354;

let OrientationInterpolator355 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator355.DEF = "Yaws_r_hip_RotationInterpolator";
OrientationInterpolator355.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator355.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group350ZZZ.children[4] = OrientationInterpolator355;

let OrientationInterpolator356 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator356.DEF = "Yaws_l_ankle_RotationInterpolator";
OrientationInterpolator356.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator356.keyValue = new X3D.MFRotation([0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group350ZZZ.children[5] = OrientationInterpolator356;

let OrientationInterpolator357 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator357.DEF = "Yaws_l_knee_RotationInterpolator";
OrientationInterpolator357.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator357.keyValue = new X3D.MFRotation([0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group350ZZZ.children[6] = OrientationInterpolator357;

let OrientationInterpolator358 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator358.DEF = "Yaws_l_hip_RotationInterpolator";
OrientationInterpolator358.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator358.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group350ZZZ.children[7] = OrientationInterpolator358;

let OrientationInterpolator359 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator359.DEF = "Yaws_r_wrist_RotationInterpolator";
OrientationInterpolator359.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator359.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group350ZZZ.children[8] = OrientationInterpolator359;

let OrientationInterpolator360 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator360.DEF = "Yaws_r_elbow_RotationInterpolator";
OrientationInterpolator360.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator360.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group350ZZZ.children[9] = OrientationInterpolator360;

let OrientationInterpolator361 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator361.DEF = "Yaws_r_shoulder_RotationInterpolator";
OrientationInterpolator361.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator361.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group350ZZZ.children[10] = OrientationInterpolator361;

let OrientationInterpolator362 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator362.DEF = "Yaws_l_wrist_RotationInterpolator";
OrientationInterpolator362.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator362.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group350ZZZ.children[11] = OrientationInterpolator362;

let OrientationInterpolator363 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator363.DEF = "Yaws_l_elbow_RotationInterpolator";
OrientationInterpolator363.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator363.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group350ZZZ.children[12] = OrientationInterpolator363;

let OrientationInterpolator364 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator364.DEF = "Yaws_l_shoulder_RotationInterpolator";
OrientationInterpolator364.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator364.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group350ZZZ.children[13] = OrientationInterpolator364;

let OrientationInterpolator365 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator365.DEF = "Yaws_head_RotationInterpolator";
OrientationInterpolator365.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator365.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group350ZZZ.children[14] = OrientationInterpolator365;

let OrientationInterpolator366 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator366.DEF = "Yaws_neck_RotationInterpolator";
OrientationInterpolator366.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator366.keyValue = new X3D.MFRotation([0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group350ZZZ.children[15] = OrientationInterpolator366;

let OrientationInterpolator367 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator367.DEF = "Yaws_upper_body_RotationInterpolator";
OrientationInterpolator367.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator367.keyValue = new X3D.MFRotation([0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group350ZZZ.children[16] = OrientationInterpolator367;

let OrientationInterpolator368 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator368.DEF = "Yaws_lower_body_RotationInterpolator";
OrientationInterpolator368.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator368.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group350ZZZ.children[17] = OrientationInterpolator368;

let OrientationInterpolator369 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator369.DEF = "Yaws_whole_body_RotationInterpolator";
OrientationInterpolator369.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator369.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group350ZZZ.children[18] = OrientationInterpolator369;

let PositionInterpolator370 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator370.DEF = "Yaws_whole_body_TranslationInterpolator";
PositionInterpolator370.key = new X3D.MFFloat([0,0.5,1]);
PositionInterpolator370.keyValue = new X3D.MFVec3f([0,0,0,0,0,0,0,0,0]);
Group350ZZZ.children[19] = PositionInterpolator370;

let OrientationInterpolator371 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator371.DEF = "Yaw_l_sternoclavicular_RollInterpolator";
OrientationInterpolator371.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator371.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group350ZZZ.children[20] = OrientationInterpolator371;

let OrientationInterpolator372 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator372.DEF = "Yaw_l_acromioclavicular_RollInterpolator";
OrientationInterpolator372.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator372.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group350ZZZ.children[21] = OrientationInterpolator372;

let OrientationInterpolator373 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator373.DEF = "Yaw_r_sternoclavicular_RollInterpolator";
OrientationInterpolator373.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator373.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group350ZZZ.children[22] = OrientationInterpolator373;

let OrientationInterpolator374 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator374.DEF = "Yaw_r_acromioclavicular_RollInterpolator";
OrientationInterpolator374.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator374.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group350ZZZ.children[23] = OrientationInterpolator374;

let OrientationInterpolator375 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator375.DEF = "Yaw_sacroiliac_YawInterpolator";
OrientationInterpolator375.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator375.keyValue = new X3D.MFRotation([0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,0,0.24,0,-1,0,0.4,0,1,0,0]);
Group350ZZZ.children[24] = OrientationInterpolator375;

let OrientationInterpolator376 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator376.DEF = "Yaw_vl5_YawInterpolator";
OrientationInterpolator376.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator376.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group350ZZZ.children[25] = OrientationInterpolator376;

let OrientationInterpolator377 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator377.DEF = "Yaw_vc6_YawInterpolator";
OrientationInterpolator377.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator377.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group350ZZZ.children[26] = OrientationInterpolator377;

let OrientationInterpolator378 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator378.DEF = "Yaw_l_thumb1_PitchInterpolator";
OrientationInterpolator378.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator378.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group350ZZZ.children[27] = OrientationInterpolator378;

let OrientationInterpolator379 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator379.DEF = "Yaw_r_thumb1_PitchInterpolator";
OrientationInterpolator379.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator379.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group350ZZZ.children[28] = OrientationInterpolator379;

browser.currentScene.children[6] = Group350;

let Group380 = browser.currentScene.createNode("Group");
Group380.DEF = "RollsAnimation";
let TimeSensor381 = browser.currentScene.createNode("TimeSensor");
TimeSensor381.DEF = "RollTimer";
TimeSensor381.cycleInterval = 5.73;
TimeSensor381.loop = True;
Group380YYY.children = new X3D.MFNode();

Group380ZZZ.children[0] = TimeSensor381;

let OrientationInterpolator382 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator382.DEF = "Roll_r_metatarsal_PitchInterpolator";
OrientationInterpolator382.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator382.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group380ZZZ.children[1] = OrientationInterpolator382;

let OrientationInterpolator383 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator383.DEF = "Rolls_r_ankle_RotationInterpolator";
OrientationInterpolator383.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator383.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group380ZZZ.children[2] = OrientationInterpolator383;

let OrientationInterpolator384 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator384.DEF = "Rolls_r_knee_RotationInterpolator";
OrientationInterpolator384.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator384.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group380ZZZ.children[3] = OrientationInterpolator384;

let OrientationInterpolator385 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator385.DEF = "Rolls_r_hip_RotationInterpolator";
OrientationInterpolator385.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator385.keyValue = new X3D.MFRotation([0,0,-1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group380ZZZ.children[4] = OrientationInterpolator385;

let OrientationInterpolator386 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator386.DEF = "Rolls_l_ankle_RotationInterpolator";
OrientationInterpolator386.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator386.keyValue = new X3D.MFRotation([0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group380ZZZ.children[5] = OrientationInterpolator386;

let OrientationInterpolator387 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator387.DEF = "Rolls_l_knee_RotationInterpolator";
OrientationInterpolator387.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator387.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group380ZZZ.children[6] = OrientationInterpolator387;

let OrientationInterpolator388 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator388.DEF = "Rolls_l_hip_RotationInterpolator";
OrientationInterpolator388.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator388.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group380ZZZ.children[7] = OrientationInterpolator388;

let OrientationInterpolator389 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator389.DEF = "Rolls_r_wrist_RotationInterpolator";
OrientationInterpolator389.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator389.keyValue = new X3D.MFRotation([0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group380ZZZ.children[8] = OrientationInterpolator389;

let OrientationInterpolator390 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator390.DEF = "Rolls_r_elbow_RotationInterpolator";
OrientationInterpolator390.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator390.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group380ZZZ.children[9] = OrientationInterpolator390;

let OrientationInterpolator391 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator391.DEF = "Rolls_r_shoulder_RotationInterpolator";
OrientationInterpolator391.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator391.keyValue = new X3D.MFRotation([0,0,1,0,0,0,-1,1.5,0,0,-1,3,0,0,-1,1.5,0,0,1,0]);
Group380ZZZ.children[10] = OrientationInterpolator391;

let OrientationInterpolator392 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator392.DEF = "Rolls_l_wrist_RotationInterpolator";
OrientationInterpolator392.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator392.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group380ZZZ.children[11] = OrientationInterpolator392;

let OrientationInterpolator393 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator393.DEF = "Rolls_l_elbow_RotationInterpolator";
OrientationInterpolator393.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator393.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group380ZZZ.children[12] = OrientationInterpolator393;

let OrientationInterpolator394 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator394.DEF = "Rolls_l_shoulder_RotationInterpolator";
OrientationInterpolator394.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator394.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,1.5,0,0,1,3,0,0,1,1.5,0,0,1,0]);
Group380ZZZ.children[13] = OrientationInterpolator394;

let OrientationInterpolator395 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator395.DEF = "Rolls_head_RotationInterpolator";
OrientationInterpolator395.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator395.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group380ZZZ.children[14] = OrientationInterpolator395;

let OrientationInterpolator396 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator396.DEF = "Rolls_neck_RotationInterpolator";
OrientationInterpolator396.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator396.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,1.25,0,0,1,0,0,0,-1,1.25,0,0,1,0]);
Group380ZZZ.children[15] = OrientationInterpolator396;

let OrientationInterpolator397 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator397.DEF = "Rolls_lower_body_RotationInterpolator";
OrientationInterpolator397.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator397.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group380ZZZ.children[16] = OrientationInterpolator397;

let OrientationInterpolator398 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator398.DEF = "Rolls_upper_body_RotationInterpolator";
OrientationInterpolator398.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator398.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group380ZZZ.children[17] = OrientationInterpolator398;

let OrientationInterpolator399 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator399.DEF = "Rolls_whole_body_RotationInterpolator";
OrientationInterpolator399.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator399.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group380ZZZ.children[18] = OrientationInterpolator399;

let PositionInterpolator400 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator400.DEF = "Rolls_whole_body_TranslationInterpolator";
PositionInterpolator400.key = new X3D.MFFloat([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator400.keyValue = new X3D.MFVec3f([0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0]);
Group380ZZZ.children[19] = PositionInterpolator400;

let OrientationInterpolator401 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator401.DEF = "Roll_l_sternoclavicular_RollInterpolator";
OrientationInterpolator401.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator401.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group380ZZZ.children[20] = OrientationInterpolator401;

let OrientationInterpolator402 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator402.DEF = "Roll_l_acromioclavicular_RollInterpolator";
OrientationInterpolator402.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator402.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group380ZZZ.children[21] = OrientationInterpolator402;

let OrientationInterpolator403 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator403.DEF = "Roll_r_sternoclavicular_RollInterpolator";
OrientationInterpolator403.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator403.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group380ZZZ.children[22] = OrientationInterpolator403;

let OrientationInterpolator404 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator404.DEF = "Roll_r_acromioclavicular_RollInterpolator";
OrientationInterpolator404.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator404.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group380ZZZ.children[23] = OrientationInterpolator404;

let OrientationInterpolator405 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator405.DEF = "Roll_sacroiliac_YawInterpolator";
OrientationInterpolator405.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator405.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group380ZZZ.children[24] = OrientationInterpolator405;

let OrientationInterpolator406 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator406.DEF = "Roll_vl5_YawInterpolator";
OrientationInterpolator406.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator406.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group380ZZZ.children[25] = OrientationInterpolator406;

let OrientationInterpolator407 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator407.DEF = "Roll_vc6_YawInterpolator";
OrientationInterpolator407.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator407.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group380ZZZ.children[26] = OrientationInterpolator407;

let OrientationInterpolator408 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator408.DEF = "Roll_l_thumb1_PitchInterpolator";
OrientationInterpolator408.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator408.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group380ZZZ.children[27] = OrientationInterpolator408;

let OrientationInterpolator409 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator409.DEF = "Roll_r_thumb1_PitchInterpolator";
OrientationInterpolator409.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator409.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group380ZZZ.children[28] = OrientationInterpolator409;

browser.currentScene.children[7] = Group380;

let Group410 = browser.currentScene.createNode("Group");
Group410.DEF = "WalkAnimation";
let TimeSensor411 = browser.currentScene.createNode("TimeSensor");
TimeSensor411.DEF = "WalkTimer";
TimeSensor411.cycleInterval = 1.73;
TimeSensor411.loop = True;
Group410YYY.children = new X3D.MFNode();

Group410ZZZ.children[0] = TimeSensor411;

let OrientationInterpolator412 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator412.DEF = "Walk_r_metatarsal_PitchInterpolator";
OrientationInterpolator412.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator412.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group410ZZZ.children[1] = OrientationInterpolator412;

let OrientationInterpolator413 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator413.DEF = "Walk_r_ankle_RotationInterpolator";
OrientationInterpolator413.key = new X3D.MFFloat([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator413.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0]);
Group410ZZZ.children[2] = OrientationInterpolator413;

let OrientationInterpolator414 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator414.DEF = "Walk_r_knee_RotationInterpolator";
OrientationInterpolator414.key = new X3D.MFFloat([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator414.keyValue = new X3D.MFRotation([1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573]);
Group410ZZZ.children[3] = OrientationInterpolator414;

let OrientationInterpolator415 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator415.DEF = "Walk_r_hip_RotationInterpolator";
OrientationInterpolator415.key = new X3D.MFFloat([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator415.keyValue = new X3D.MFRotation([-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
Group410ZZZ.children[4] = OrientationInterpolator415;

let OrientationInterpolator416 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator416.DEF = "Walk_l_ankle_RotationInterpolator";
OrientationInterpolator416.key = new X3D.MFFloat([0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator416.keyValue = new X3D.MFRotation([-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714]);
Group410ZZZ.children[5] = OrientationInterpolator416;

let OrientationInterpolator417 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator417.DEF = "Walk_l_knee_RotationInterpolator";
OrientationInterpolator417.key = new X3D.MFFloat([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator417.keyValue = new X3D.MFRotation([1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
Group410ZZZ.children[6] = OrientationInterpolator417;

let OrientationInterpolator418 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator418.DEF = "Walk_l_hip_RotationInterpolator";
OrientationInterpolator418.key = new X3D.MFFloat([0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator418.keyValue = new X3D.MFRotation([-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
Group410ZZZ.children[7] = OrientationInterpolator418;

let OrientationInterpolator419 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator419.DEF = "Walk_lower_body_RotationInterpolator";
OrientationInterpolator419.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator419.keyValue = new X3D.MFRotation([0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
Group410ZZZ.children[8] = OrientationInterpolator419;

let OrientationInterpolator420 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator420.DEF = "Walk_r_wrist_RotationInterpolator";
OrientationInterpolator420.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator420.keyValue = new X3D.MFRotation([-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]);
Group410ZZZ.children[9] = OrientationInterpolator420;

let OrientationInterpolator421 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator421.DEF = "Walk_r_elbow_RotationInterpolator";
OrientationInterpolator421.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator421.keyValue = new X3D.MFRotation([-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508]);
Group410ZZZ.children[10] = OrientationInterpolator421;

let OrientationInterpolator422 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator422.DEF = "Walk_r_shoulder_RotationInterpolator";
OrientationInterpolator422.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator422.keyValue = new X3D.MFRotation([-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346]);
Group410ZZZ.children[11] = OrientationInterpolator422;

let OrientationInterpolator423 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator423.DEF = "Walk_l_wrist_RotationInterpolator";
OrientationInterpolator423.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator423.keyValue = new X3D.MFRotation([0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076]);
Group410ZZZ.children[12] = OrientationInterpolator423;

let OrientationInterpolator424 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator424.DEF = "Walk_l_elbow_RotationInterpolator";
OrientationInterpolator424.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator424.keyValue = new X3D.MFRotation([-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878]);
Group410ZZZ.children[13] = OrientationInterpolator424;

let OrientationInterpolator425 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator425.DEF = "Walk_l_shoulder_RotationInterpolator";
OrientationInterpolator425.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator425.keyValue = new X3D.MFRotation([1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189]);
Group410ZZZ.children[14] = OrientationInterpolator425;

let OrientationInterpolator426 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator426.DEF = "Walk_head_RotationInterpolator";
OrientationInterpolator426.key = new X3D.MFFloat([0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator426.keyValue = new X3D.MFRotation([0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642]);
Group410ZZZ.children[15] = OrientationInterpolator426;

let OrientationInterpolator427 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator427.DEF = "Walk_neck_RotationInterpolator";
OrientationInterpolator427.key = new X3D.MFFloat([0,1]);
OrientationInterpolator427.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group410ZZZ.children[16] = OrientationInterpolator427;

let OrientationInterpolator428 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator428.DEF = "Walk_upper_body_RotationInterpolator";
OrientationInterpolator428.key = new X3D.MFFloat([0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator428.keyValue = new X3D.MFRotation([0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
Group410ZZZ.children[17] = OrientationInterpolator428;

let OrientationInterpolator429 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator429.DEF = "Walk_whole_body_RotationInterpolator";
OrientationInterpolator429.key = new X3D.MFFloat([0,1]);
OrientationInterpolator429.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group410ZZZ.children[18] = OrientationInterpolator429;

let PositionInterpolator430 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator430.DEF = "Walk_whole_body_TranslationInterpolator";
PositionInterpolator430.key = new X3D.MFFloat([0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator430.keyValue = new X3D.MFVec3f([0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
Group410ZZZ.children[19] = PositionInterpolator430;

let OrientationInterpolator431 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator431.DEF = "Walk_l_sternoclavicular_RollInterpolator";
OrientationInterpolator431.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator431.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group410ZZZ.children[20] = OrientationInterpolator431;

let OrientationInterpolator432 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator432.DEF = "Walk_l_acromioclavicular_RollInterpolator";
OrientationInterpolator432.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator432.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group410ZZZ.children[21] = OrientationInterpolator432;

let OrientationInterpolator433 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator433.DEF = "Walk_r_sternoclavicular_RollInterpolator";
OrientationInterpolator433.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator433.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group410ZZZ.children[22] = OrientationInterpolator433;

let OrientationInterpolator434 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator434.DEF = "Walk_r_acromioclavicular_RollInterpolator";
OrientationInterpolator434.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator434.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group410ZZZ.children[23] = OrientationInterpolator434;

let OrientationInterpolator435 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator435.DEF = "Walk_sacroiliac_YawInterpolator";
OrientationInterpolator435.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator435.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group410ZZZ.children[24] = OrientationInterpolator435;

let OrientationInterpolator436 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator436.DEF = "Walk_vl5_YawInterpolator";
OrientationInterpolator436.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator436.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group410ZZZ.children[25] = OrientationInterpolator436;

let OrientationInterpolator437 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator437.DEF = "Walk_vc6_YawInterpolator";
OrientationInterpolator437.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator437.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group410ZZZ.children[26] = OrientationInterpolator437;

let OrientationInterpolator438 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator438.DEF = "Walk_l_thumb1_PitchInterpolator";
OrientationInterpolator438.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator438.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group410ZZZ.children[27] = OrientationInterpolator438;

let OrientationInterpolator439 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator439.DEF = "Walk_r_thumb1_PitchInterpolator";
OrientationInterpolator439.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator439.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group410ZZZ.children[28] = OrientationInterpolator439;

browser.currentScene.children[8] = Group410;

let Group440 = browser.currentScene.createNode("Group");
Group440.DEF = "RunAnimation";
let TimeSensor441 = browser.currentScene.createNode("TimeSensor");
TimeSensor441.DEF = "RunTimer";
TimeSensor441.cycleInterval = 0.9;
TimeSensor441.loop = True;
Group440YYY.children = new X3D.MFNode();

Group440ZZZ.children[0] = TimeSensor441;

let OrientationInterpolator442 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator442.DEF = "Run_r_metatarsal_PitchInterpolator";
OrientationInterpolator442.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator442.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group440ZZZ.children[1] = OrientationInterpolator442;

let OrientationInterpolator443 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator443.DEF = "Run_l_hip_RotationInterpolator_Run";
OrientationInterpolator443.key = new X3D.MFFloat([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator443.keyValue = new X3D.MFRotation([-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42]);
Group440ZZZ.children[2] = OrientationInterpolator443;

let OrientationInterpolator444 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator444.DEF = "Run_l_knee_RotationInterpolator_Run";
OrientationInterpolator444.key = new X3D.MFFloat([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator444.keyValue = new X3D.MFRotation([1,0,0,1.01,1,0,0,0.426,1,0,0,0.705,1,0,0,2.179,1,0,0,1.01]);
Group440ZZZ.children[3] = OrientationInterpolator444;

let OrientationInterpolator445 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator445.DEF = "Run_l_ankle_RotationInterpolator_Run";
OrientationInterpolator445.key = new X3D.MFFloat([0,0.22,0.3,0.4,1]);
OrientationInterpolator445.keyValue = new X3D.MFRotation([1,0,0,0.0374,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03574]);
Group440ZZZ.children[4] = OrientationInterpolator445;

let OrientationInterpolator446 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator446.DEF = "Run_r_hip_RotationInterpolator_Run";
OrientationInterpolator446.key = new X3D.MFFloat([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator446.keyValue = new X3D.MFRotation([0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9]);
Group440ZZZ.children[5] = OrientationInterpolator446;

let OrientationInterpolator447 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator447.DEF = "Run_r_knee_RotationInterpolator_Run";
OrientationInterpolator447.key = new X3D.MFFloat([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator447.keyValue = new X3D.MFRotation([1,0,0,0.705,1,0,0,2.179,1,0,0,1.01,1,0,0,0.426,1,0,0,0.705]);
Group440ZZZ.children[6] = OrientationInterpolator447;

let OrientationInterpolator448 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator448.DEF = "Run_r_ankle_RotationInterpolator_Run";
OrientationInterpolator448.key = new X3D.MFFloat([0,0.4,0.71,0.8,0.82,1]);
OrientationInterpolator448.keyValue = new X3D.MFRotation([1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.32,-1,0,0,0.374,-1,0,0,0.3478,1,0,0,0.2323]);
Group440ZZZ.children[7] = OrientationInterpolator448;

let OrientationInterpolator449 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator449.DEF = "Run_l_shoulder_RotationInterpolator_Run";
OrientationInterpolator449.key = new X3D.MFFloat([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator449.keyValue = new X3D.MFRotation([0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5]);
Group440ZZZ.children[8] = OrientationInterpolator449;

let OrientationInterpolator450 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator450.DEF = "Run_l_elbow_RotationInterpolator_Run";
OrientationInterpolator450.key = new X3D.MFFloat([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator450.keyValue = new X3D.MFRotation([-1,0,0,1.85,-0.99,-0.19,0.18,1.35,-1,0,0,0.975,-0.99,-0.09,-0.02,1.55,-1,0,0,1.85]);
Group440ZZZ.children[9] = OrientationInterpolator450;

let OrientationInterpolator451 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator451.DEF = "Run_l_wrist_RotationInterpolator_Run";
OrientationInterpolator451.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator451.keyValue = new X3D.MFRotation([-0.25,-1,0.08,0.14,0.25,1,0.08,0.14,0,0,1,0,-0.25,1,0.08,-0.14,-0.25,1,0.08,0.14]);
Group440ZZZ.children[10] = OrientationInterpolator451;

let OrientationInterpolator452 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator452.DEF = "Run_r_shoulder_RotationInterpolator_Run";
OrientationInterpolator452.key = new X3D.MFFloat([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator452.keyValue = new X3D.MFRotation([-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85]);
Group440ZZZ.children[11] = OrientationInterpolator452;

let OrientationInterpolator453 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator453.DEF = "Run_r_elbow_RotationInterpolator_Run";
OrientationInterpolator453.key = new X3D.MFFloat([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator453.keyValue = new X3D.MFRotation([-1,0,0,0.975,-0.99,0.09,0.02,1.55,-1,0,0,1.85,-0.99,0.19,-0.18,1.35,-1,0,0,0.975]);
Group440ZZZ.children[12] = OrientationInterpolator453;

let OrientationInterpolator454 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator454.DEF = "Run_r_wrist_RotationInterpolator_Run";
OrientationInterpolator454.key = new X3D.MFFloat([0,1]);
OrientationInterpolator454.keyValue = new X3D.MFRotation([-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273]);
Group440ZZZ.children[13] = OrientationInterpolator454;

let OrientationInterpolator455 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator455.DEF = "Run_lower_body_RotationInterpolator_Run";
OrientationInterpolator455.key = new X3D.MFFloat([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator455.keyValue = new X3D.MFRotation([0,-1,0,0.125,0,0,1,0,0,1,0,0.125,0,0,1,0,0,-1,0,0.125]);
Group440ZZZ.children[14] = OrientationInterpolator455;

let OrientationInterpolator456 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator456.DEF = "Run_head_RotationInterpolator_Run";
OrientationInterpolator456.key = new X3D.MFFloat([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator456.keyValue = new X3D.MFRotation([1,0,0,0.08,1,0,0,0.12,1,0,0,0.3,1,0,0,0.3,1,0,0,0.08]);
Group440ZZZ.children[15] = OrientationInterpolator456;

let OrientationInterpolator457 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator457.DEF = "Run_neck_RotationInterpolator_Run";
OrientationInterpolator457.key = new X3D.MFFloat([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator457.keyValue = new X3D.MFRotation([0.7,0,0,0.4,-0.7,-0.7,0,0.4,0,0,0,0.4,-0.7,0.7,0,0.4,0.7,0,0,0.4]);
Group440ZZZ.children[16] = OrientationInterpolator457;

let OrientationInterpolator458 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator458.DEF = "Run_upper_body_RotationInterpolator_Run";
OrientationInterpolator458.key = new X3D.MFFloat([0,0.2545,0.4909,0.7636,1]);
OrientationInterpolator458.keyValue = new X3D.MFRotation([0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5]);
Group440ZZZ.children[17] = OrientationInterpolator458;

let OrientationInterpolator459 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator459.DEF = "Run_whole_body_RotationInterpolator_Run";
OrientationInterpolator459.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator459.keyValue = new X3D.MFRotation([1,0,0,0.06,1,0,0,0.167,1,0,0,0.06,1,0,0,0.168,1,0,0,0.06]);
Group440ZZZ.children[18] = OrientationInterpolator459;

let PositionInterpolator460 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator460.DEF = "Run_whole_body_TranslationInterpolator_Run";
PositionInterpolator460.key = new X3D.MFFloat([0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1]);
PositionInterpolator460.keyValue = new X3D.MFVec3f([0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0]);
Group440ZZZ.children[19] = PositionInterpolator460;

let OrientationInterpolator461 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator461.DEF = "Run_l_sternoclavicular_RollInterpolator";
OrientationInterpolator461.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator461.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group440ZZZ.children[20] = OrientationInterpolator461;

let OrientationInterpolator462 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator462.DEF = "Run_l_acromioclavicular_RollInterpolator";
OrientationInterpolator462.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator462.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group440ZZZ.children[21] = OrientationInterpolator462;

let OrientationInterpolator463 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator463.DEF = "Run_r_sternoclavicular_RollInterpolator";
OrientationInterpolator463.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator463.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group440ZZZ.children[22] = OrientationInterpolator463;

let OrientationInterpolator464 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator464.DEF = "Run_r_acromioclavicular_RollInterpolator";
OrientationInterpolator464.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator464.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group440ZZZ.children[23] = OrientationInterpolator464;

let OrientationInterpolator465 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator465.DEF = "Run_sacroiliac_YawInterpolator";
OrientationInterpolator465.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator465.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group440ZZZ.children[24] = OrientationInterpolator465;

let OrientationInterpolator466 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator466.DEF = "Run_vl5_YawInterpolator";
OrientationInterpolator466.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator466.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group440ZZZ.children[25] = OrientationInterpolator466;

let OrientationInterpolator467 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator467.DEF = "Run_vc6_YawInterpolator";
OrientationInterpolator467.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator467.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group440ZZZ.children[26] = OrientationInterpolator467;

let OrientationInterpolator468 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator468.DEF = "Run_l_thumb1_PitchInterpolator";
OrientationInterpolator468.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator468.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group440ZZZ.children[27] = OrientationInterpolator468;

let OrientationInterpolator469 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator469.DEF = "Run_r_thumb1_PitchInterpolator";
OrientationInterpolator469.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator469.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group440ZZZ.children[28] = OrientationInterpolator469;

browser.currentScene.children[9] = Group440;

let Group470 = browser.currentScene.createNode("Group");
Group470.DEF = "JumpAnimation";
let TimeSensor471 = browser.currentScene.createNode("TimeSensor");
TimeSensor471.DEF = "JumpTimer";
TimeSensor471.cycleInterval = 3.73;
TimeSensor471.loop = True;
Group470YYY.children = new X3D.MFNode();

Group470ZZZ.children[0] = TimeSensor471;

let OrientationInterpolator472 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator472.DEF = "Jump_r_metatarsal_PitchInterpolator";
OrientationInterpolator472.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator472.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group470ZZZ.children[1] = OrientationInterpolator472;

let OrientationInterpolator473 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator473.DEF = "Jump_r_ankle_RotationInterpolator";
OrientationInterpolator473.key = new X3D.MFFloat([0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator473.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,1.3,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0]);
Group470ZZZ.children[2] = OrientationInterpolator473;

let OrientationInterpolator474 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator474.DEF = "Jump_r_knee_RotationInterpolator";
OrientationInterpolator474.key = new X3D.MFFloat([0,0.2,0.25,0.3,0.64,0.76,0.88,1]);
OrientationInterpolator474.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,2.5,1,0,0,1.7,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0]);
Group470ZZZ.children[3] = OrientationInterpolator474;

let OrientationInterpolator475 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator475.DEF = "Jump_r_hip_RotationInterpolator";
OrientationInterpolator475.key = new X3D.MFFloat([0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator475.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,1.63,-1,0,0,1.7,-1,0,0,1.55,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0]);
Group470ZZZ.children[4] = OrientationInterpolator475;

let OrientationInterpolator476 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator476.DEF = "Jump_l_ankle_RotationInterpolator";
OrientationInterpolator476.key = new X3D.MFFloat([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator476.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0]);
Group470ZZZ.children[5] = OrientationInterpolator476;

let OrientationInterpolator477 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator477.DEF = "Jump_l_knee_RotationInterpolator";
OrientationInterpolator477.key = new X3D.MFFloat([0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator477.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0]);
Group470ZZZ.children[6] = OrientationInterpolator477;

let OrientationInterpolator478 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator478.DEF = "Jump_l_hip_RotationInterpolator";
OrientationInterpolator478.key = new X3D.MFFloat([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator478.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0]);
Group470ZZZ.children[7] = OrientationInterpolator478;

let OrientationInterpolator479 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator479.DEF = "Jump_lower_body_RotationInterpolator";
OrientationInterpolator479.key = new X3D.MFFloat([0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator479.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0]);
Group470ZZZ.children[8] = OrientationInterpolator479;

let OrientationInterpolator480 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator480.DEF = "Jump_r_wrist_RotationInterpolator";
OrientationInterpolator480.key = new X3D.MFFloat([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator480.keyValue = new X3D.MFRotation([0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
Group470ZZZ.children[9] = OrientationInterpolator480;

let OrientationInterpolator481 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator481.DEF = "Jump_r_elbow_RotationInterpolator";
OrientationInterpolator481.key = new X3D.MFFloat([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator481.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
Group470ZZZ.children[10] = OrientationInterpolator481;

let OrientationInterpolator482 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator482.DEF = "Jump_r_shoulder_RotationInterpolator";
OrientationInterpolator482.key = new X3D.MFFloat([0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator482.keyValue = new X3D.MFRotation([0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
Group470ZZZ.children[11] = OrientationInterpolator482;

let OrientationInterpolator483 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator483.DEF = "Jump_l_wrist_RotationInterpolator";
OrientationInterpolator483.key = new X3D.MFFloat([0,0.48,0.52,0.64,0.76,0.88,1]);
OrientationInterpolator483.keyValue = new X3D.MFRotation([0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0]);
Group470ZZZ.children[12] = OrientationInterpolator483;

let OrientationInterpolator484 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator484.DEF = "Jump_l_elbow_RotationInterpolator";
OrientationInterpolator484.key = new X3D.MFFloat([0,0.28,0.32,0.58,0.72,1]);
OrientationInterpolator484.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,1.13,-1,0,0,1.7,-1,0,0,1.7,-1,0,0,0.4,0,0,1,0]);
Group470ZZZ.children[13] = OrientationInterpolator484;

let OrientationInterpolator485 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator485.DEF = "Jump_l_shoulder_RotationInterpolator";
OrientationInterpolator485.key = new X3D.MFFloat([0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator485.keyValue = new X3D.MFRotation([0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0]);
Group470ZZZ.children[14] = OrientationInterpolator485;

let OrientationInterpolator486 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator486.DEF = "Jump_head_RotationInterpolator";
OrientationInterpolator486.key = new X3D.MFFloat([0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator486.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0]);
Group470ZZZ.children[15] = OrientationInterpolator486;

let OrientationInterpolator487 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator487.DEF = "Jump_neck_RotationInterpolator";
OrientationInterpolator487.key = new X3D.MFFloat([0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator487.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0]);
Group470ZZZ.children[16] = OrientationInterpolator487;

let OrientationInterpolator488 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator488.DEF = "Jump_upper_body_RotationInterpolator";
OrientationInterpolator488.key = new X3D.MFFloat([0,0.22,0.28,0.34,0.71,0.88,1]);
OrientationInterpolator488.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,1.05,1,0,0,1.051,-1,0,0,0.257,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0]);
Group470ZZZ.children[17] = OrientationInterpolator488;

let OrientationInterpolator489 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator489.DEF = "Jump_whole_body_RotationInterpolator";
OrientationInterpolator489.key = new X3D.MFFloat([0,0.28,0.32,0.48,0.64,0.76,1]);
OrientationInterpolator489.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group470ZZZ.children[18] = OrientationInterpolator489;

let PositionInterpolator490 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator490.DEF = "Jump_whole_body_TranslationInterpolator";
PositionInterpolator490.key = new X3D.MFFloat([0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1]);
PositionInterpolator490.keyValue = new X3D.MFVec3f([0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0,0.35,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0]);
Group470ZZZ.children[19] = PositionInterpolator490;

let OrientationInterpolator491 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator491.DEF = "Jump_l_sternoclavicular_RollInterpolator";
OrientationInterpolator491.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator491.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group470ZZZ.children[20] = OrientationInterpolator491;

let OrientationInterpolator492 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator492.DEF = "Jump_l_acromioclavicular_RollInterpolator";
OrientationInterpolator492.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator492.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group470ZZZ.children[21] = OrientationInterpolator492;

let OrientationInterpolator493 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator493.DEF = "Jump_r_sternoclavicular_RollInterpolator";
OrientationInterpolator493.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator493.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group470ZZZ.children[22] = OrientationInterpolator493;

let OrientationInterpolator494 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator494.DEF = "Jump_r_acromioclavicular_RollInterpolator";
OrientationInterpolator494.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator494.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group470ZZZ.children[23] = OrientationInterpolator494;

let OrientationInterpolator495 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator495.DEF = "Jump_sacroiliac_YawInterpolator";
OrientationInterpolator495.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator495.keyValue = new X3D.MFRotation([0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group470ZZZ.children[24] = OrientationInterpolator495;

let OrientationInterpolator496 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator496.DEF = "Jump_vl5_YawInterpolator";
OrientationInterpolator496.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator496.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,-0.1,0,1,0,0,0,1,0,0,1,0,0,0.6,0,1,0,0.1,0,1,0,0]);
Group470ZZZ.children[25] = OrientationInterpolator496;

let OrientationInterpolator497 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator497.DEF = "Jump_vc6_YawInterpolator";
OrientationInterpolator497.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator497.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0.8,0,1,0,0,0,1,0,0,-1,0,0,0.6,0,-1,0,0.8,0,1,0,0]);
Group470ZZZ.children[26] = OrientationInterpolator497;

let OrientationInterpolator498 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator498.DEF = "Jump_l_thumb1_PitchInterpolator";
OrientationInterpolator498.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator498.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group470ZZZ.children[27] = OrientationInterpolator498;

let OrientationInterpolator499 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator499.DEF = "Jump_r_thumb1_PitchInterpolator";
OrientationInterpolator499.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator499.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group470ZZZ.children[28] = OrientationInterpolator499;

browser.currentScene.children[10] = Group470;

let Group500 = browser.currentScene.createNode("Group");
Group500.DEF = "KickAnimation";
let TimeSensor501 = browser.currentScene.createNode("TimeSensor");
TimeSensor501.DEF = "KickTimer";
TimeSensor501.cycleInterval = 3.73;
TimeSensor501.loop = True;
Group500YYY.children = new X3D.MFNode();

Group500ZZZ.children[0] = TimeSensor501;

let OrientationInterpolator502 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator502.DEF = "Kick_l_sternoclavicular_RollInterpolator";
OrientationInterpolator502.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator502.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group500ZZZ.children[1] = OrientationInterpolator502;

let OrientationInterpolator503 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator503.DEF = "Kick_l_acromioclavicular_RollInterpolator";
OrientationInterpolator503.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator503.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group500ZZZ.children[2] = OrientationInterpolator503;

let OrientationInterpolator504 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator504.DEF = "Kick_l_shoulder_RollInterpolator";
OrientationInterpolator504.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator504.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,1.76,-0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0,0,1,0]);
Group500ZZZ.children[3] = OrientationInterpolator504;

let OrientationInterpolator505 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator505.DEF = "Kick_l_ForeArm_PitchInterpolator";
OrientationInterpolator505.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator505.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,-0.55,-1,0.25,0,2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group500ZZZ.children[4] = OrientationInterpolator505;

let OrientationInterpolator506 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator506.DEF = "Kick_l_wrist_RollInterpolator";
OrientationInterpolator506.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator506.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,1,0,0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group500ZZZ.children[5] = OrientationInterpolator506;

let OrientationInterpolator507 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator507.DEF = "Kick_l_thumb1_PitchInterpolator";
OrientationInterpolator507.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator507.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group500ZZZ.children[6] = OrientationInterpolator507;

let OrientationInterpolator508 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator508.DEF = "Kick_r_sternoclavicular_RollInterpolator";
OrientationInterpolator508.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator508.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group500ZZZ.children[7] = OrientationInterpolator508;

let OrientationInterpolator509 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator509.DEF = "Kick_r_acromioclavicular_RollInterpolator";
OrientationInterpolator509.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator509.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group500ZZZ.children[8] = OrientationInterpolator509;

let OrientationInterpolator510 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator510.DEF = "Kick_r_shoulder_RollInterpolator";
OrientationInterpolator510.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator510.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,-1.76,0.25,0,1,-1.76,0,0,1,-1.256,0,0,1,-0.05,0,0,1,0]);
Group500ZZZ.children[9] = OrientationInterpolator510;

let OrientationInterpolator511 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator511.DEF = "Kick_r_ForeArm_PitchInterpolator";
OrientationInterpolator511.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator511.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,-0.55,1,0.25,0,-2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group500ZZZ.children[10] = OrientationInterpolator511;

let OrientationInterpolator512 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator512.DEF = "Kick_r_wrist_RollInterpolator";
OrientationInterpolator512.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator512.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group500ZZZ.children[11] = OrientationInterpolator512;

let OrientationInterpolator513 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator513.DEF = "Kick_r_thumb1_PitchInterpolator";
OrientationInterpolator513.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator513.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group500ZZZ.children[12] = OrientationInterpolator513;

let OrientationInterpolator514 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator514.DEF = "Kick_r_hip_PitchInterpolator";
OrientationInterpolator514.key = new X3D.MFFloat([0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator514.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.9,-1,0,0,1.75,-1,0,0,2.25,-1,0,0,2,1,0,0,0,1,0,0,0]);
Group500ZZZ.children[13] = OrientationInterpolator514;

let OrientationInterpolator515 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator515.DEF = "Kick_r_knee_PitchInterpolator";
OrientationInterpolator515.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator515.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,1.95,1,0,0,1.75,-1,0,0,0.28,1,0,0,0,1,0,0,0]);
Group500ZZZ.children[14] = OrientationInterpolator515;

let OrientationInterpolator516 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator516.DEF = "Kick_l_hip_PitchInterpolator";
OrientationInterpolator516.key = new X3D.MFFloat([0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator516.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group500ZZZ.children[15] = OrientationInterpolator516;

let OrientationInterpolator517 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator517.DEF = "Kick_l_knee_PitchInterpolator";
OrientationInterpolator517.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator517.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group500ZZZ.children[16] = OrientationInterpolator517;

let OrientationInterpolator518 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator518.DEF = "Kick_r_ankle_PitchInterpolator";
OrientationInterpolator518.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator518.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.9,-1,0,0,0.95,1,0,0,0.75,-1,0,0,0.05,1,0,0,0]);
Group500ZZZ.children[17] = OrientationInterpolator518;

let OrientationInterpolator519 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator519.DEF = "Kick_r_metatarsal_PitchInterpolator";
OrientationInterpolator519.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator519.keyValue = new X3D.MFRotation([1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group500ZZZ.children[18] = OrientationInterpolator519;

let OrientationInterpolator520 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator520.DEF = "Kick_sacroiliac_YawInterpolator";
OrientationInterpolator520.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator520.keyValue = new X3D.MFRotation([0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group500ZZZ.children[19] = OrientationInterpolator520;

let OrientationInterpolator521 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator521.DEF = "Kick_vl5_YawInterpolator";
OrientationInterpolator521.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator521.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group500ZZZ.children[20] = OrientationInterpolator521;

let OrientationInterpolator522 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator522.DEF = "Kick_vc6_YawInterpolator";
OrientationInterpolator522.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator522.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group500ZZZ.children[21] = OrientationInterpolator522;

let OrientationInterpolator523 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator523.DEF = "Kick_lower_body_RotationInterpolator";
OrientationInterpolator523.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator523.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group500ZZZ.children[22] = OrientationInterpolator523;

let OrientationInterpolator524 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator524.DEF = "Kick_upper_body_RotationInterpolator";
OrientationInterpolator524.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator524.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group500ZZZ.children[23] = OrientationInterpolator524;

let OrientationInterpolator525 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator525.DEF = "Kick_whole_body_RotationInterpolator";
OrientationInterpolator525.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator525.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group500ZZZ.children[24] = OrientationInterpolator525;

let PositionInterpolator526 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator526.DEF = "Kick_whole_body_TranslationInterpolator";
PositionInterpolator526.key = new X3D.MFFloat([0,0.5,1]);
PositionInterpolator526.keyValue = new X3D.MFVec3f([0,0,0,0,0,0,0,0,0]);
Group500ZZZ.children[25] = PositionInterpolator526;

let OrientationInterpolator527 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator527.DEF = "Kick_neck_RotationInterpolator";
OrientationInterpolator527.key = new X3D.MFFloat([0,0.25,0.55,1]);
OrientationInterpolator527.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0]);
Group500ZZZ.children[26] = OrientationInterpolator527;

browser.currentScene.children[11] = Group500;

let Group528 = browser.currentScene.createNode("Group");
Group528.DEF = "Interface";
let Transform529 = browser.currentScene.createNode("Transform");
Transform529.DEF = "CoordinateSystemFloor";
Transform529.scale = new X3D.SFVec3f([0.1,0.1,0.1]);
let Shape530 = browser.currentScene.createNode("Shape");
Shape530.DEF = "AxisLinesShape";
let IndexedLineSet531 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet531.colorPerVertex = False;
IndexedLineSet531.colorIndex = new X3D.MFInt32([0,1,2]);
IndexedLineSet531.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1,0,3,-1]);
let Color532 = browser.currentScene.createNode("Color");
Color532.color = new X3D.MFColor([1,0,0,0,0.6,0,0,0,1]);
color = Color532;

let Coordinate533 = browser.currentScene.createNode("Coordinate");
Coordinate533.point = new X3D.MFVec3f([0,0,0,1,0,0,0,1,0,0,0,1]);
coord = Coordinate533;

geometry = IndexedLineSet531;

Transform529YYY.child = new X3D.undefined();

Transform529ZZZ.child[0] = Shape530;

Group528YYY.children = new X3D.MFNode();

Group528ZZZ.children[0] = Transform529;

let ProximitySensor534 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor534.DEF = "HudProx";
ProximitySensor534.size = new X3D.SFVec3f([50,50,50]);
Group528ZZZ.children[1] = ProximitySensor534;

let Transform535 = browser.currentScene.createNode("Transform");
Transform535.DEF = "HudXform";
Transform535.translation = new X3D.SFVec3f([2,1,2]);
Transform535.rotation = new X3D.SFRotation([0,1,0,0.78]);
let Transform536 = browser.currentScene.createNode("Transform");
Transform536.translation = new X3D.SFVec3f([-0.4,-0.01,-0.75]);
Transform536.scale = new X3D.SFVec3f([0.02,0.02,0.02]);
let Transform537 = browser.currentScene.createNode("Transform");
Transform537.DEF = "Stand_Text";
Transform537.translation = new X3D.SFVec3f([0,-0.9,0]);
let TouchSensor538 = browser.currentScene.createNode("TouchSensor");
TouchSensor538.DEF = "Stand_Touch";
Transform537YYY.children = new X3D.MFNode();

Transform537ZZZ.children[0] = TouchSensor538;

let Shape539 = browser.currentScene.createNode("Shape");
Shape539.DEF = "StandText";
let Appearance540 = browser.currentScene.createNode("Appearance");
let Material541 = browser.currentScene.createNode("Material");
Material541.DEF = "text_color";
Material541.ambientIntensity = 1;
Material541.diffuseColor = new X3D.SFColor([0.819,0.521,0.169]);
Material541.specularColor = new X3D.SFColor([0.819,0.521,0.169]);
Material541.emissiveColor = new X3D.SFColor([0.819,0.521,0.169]);
material = Material541;

appearance = Appearance540;

let Text542 = browser.currentScene.createNode("Text");
Text542.string = new X3D.MFString([new X3D.SFString("Stand")]);
let FontStyle543 = browser.currentScene.createNode("FontStyle");
FontStyle543.family = new X3D.MFString([new X3D.SFString("SANS")]);
fontStyle = FontStyle543;

geometry = Text542;

Transform537ZZZ.child[1] = Shape539;

let Shape544 = browser.currentScene.createNode("Shape");
Shape544.DEF = "Stand_Back";
let Appearance545 = browser.currentScene.createNode("Appearance");
let Material546 = browser.currentScene.createNode("Material");
Material546.DEF = "Clear";
Material546.ambientIntensity = 1;
Material546.diffuseColor = new X3D.SFColor([0,0.5,0]);
Material546.emissiveColor = new X3D.SFColor([0,0.5,0]);
Material546.transparency = 0.8;
material = Material546;

appearance = Appearance545;

let IndexedFaceSet547 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet547.DEF = "Backing";
IndexedFaceSet547.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate548 = browser.currentScene.createNode("Coordinate");
Coordinate548.point = new X3D.MFVec3f([-0.2,-0.25,-0.01,3,-0.25,-0.01,3,1,-0.01,-0.2,1,-0.01]);
coord = Coordinate548;

geometry = IndexedFaceSet547;

Transform537ZZZ.child[2] = Shape544;

Transform536YYY.children = new X3D.MFNode();

Transform536ZZZ.children[0] = Transform537;

let Transform549 = browser.currentScene.createNode("Transform");
Transform549.DEF = "Pitch_Text";
Transform549.translation = new X3D.SFVec3f([0,-2.4,0]);
let TouchSensor550 = browser.currentScene.createNode("TouchSensor");
TouchSensor550.DEF = "Pitch_Touch";
Transform549YYY.children = new X3D.MFNode();

Transform549ZZZ.children[0] = TouchSensor550;

let Shape551 = browser.currentScene.createNode("Shape");
Shape551.DEF = "PitchText";
let Appearance552 = browser.currentScene.createNode("Appearance");
let Material553 = browser.currentScene.createNode("Material");
Material553.USE = "text_color";
material = Material553;

appearance = Appearance552;

let Text554 = browser.currentScene.createNode("Text");
Text554.string = new X3D.MFString([new X3D.SFString("Pitch")]);
let FontStyle555 = browser.currentScene.createNode("FontStyle");
FontStyle555.family = new X3D.MFString([new X3D.SFString("SANS")]);
fontStyle = FontStyle555;

geometry = Text554;

Transform549ZZZ.child[1] = Shape551;

let Shape556 = browser.currentScene.createNode("Shape");
Shape556.DEF = "Pitch_Back";
let Appearance557 = browser.currentScene.createNode("Appearance");
let Material558 = browser.currentScene.createNode("Material");
Material558.USE = "Clear";
material = Material558;

appearance = Appearance557;

let IndexedFaceSet559 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet559.USE = "Backing";
geometry = IndexedFaceSet559;

Transform549ZZZ.child[2] = Shape556;

Transform536ZZZ.children[1] = Transform549;

let Transform560 = browser.currentScene.createNode("Transform");
Transform560.DEF = "Yaw_Text";
Transform560.translation = new X3D.SFVec3f([0,-3.8,0]);
let TouchSensor561 = browser.currentScene.createNode("TouchSensor");
TouchSensor561.DEF = "Yaw_Touch";
Transform560YYY.children = new X3D.MFNode();

Transform560ZZZ.children[0] = TouchSensor561;

let Shape562 = browser.currentScene.createNode("Shape");
Shape562.DEF = "YawText";
let Appearance563 = browser.currentScene.createNode("Appearance");
let Material564 = browser.currentScene.createNode("Material");
Material564.USE = "text_color";
material = Material564;

appearance = Appearance563;

let Text565 = browser.currentScene.createNode("Text");
Text565.string = new X3D.MFString([new X3D.SFString("Yaw")]);
let FontStyle566 = browser.currentScene.createNode("FontStyle");
FontStyle566.family = new X3D.MFString([new X3D.SFString("SANS")]);
fontStyle = FontStyle566;

geometry = Text565;

Transform560ZZZ.child[1] = Shape562;

let Shape567 = browser.currentScene.createNode("Shape");
Shape567.DEF = "Yaw_Back";
let Appearance568 = browser.currentScene.createNode("Appearance");
let Material569 = browser.currentScene.createNode("Material");
Material569.USE = "Clear";
material = Material569;

appearance = Appearance568;

let IndexedFaceSet570 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet570.USE = "Backing";
geometry = IndexedFaceSet570;

Transform560ZZZ.child[2] = Shape567;

Transform536ZZZ.children[2] = Transform560;

let Transform571 = browser.currentScene.createNode("Transform");
Transform571.DEF = "Roll_Text";
Transform571.translation = new X3D.SFVec3f([0,-5.2,0]);
let TouchSensor572 = browser.currentScene.createNode("TouchSensor");
TouchSensor572.DEF = "Roll_Touch";
Transform571YYY.children = new X3D.MFNode();

Transform571ZZZ.children[0] = TouchSensor572;

let Shape573 = browser.currentScene.createNode("Shape");
Shape573.DEF = "RollText";
let Appearance574 = browser.currentScene.createNode("Appearance");
let Material575 = browser.currentScene.createNode("Material");
Material575.USE = "text_color";
material = Material575;

appearance = Appearance574;

let Text576 = browser.currentScene.createNode("Text");
Text576.string = new X3D.MFString([new X3D.SFString("Roll")]);
let FontStyle577 = browser.currentScene.createNode("FontStyle");
FontStyle577.family = new X3D.MFString([new X3D.SFString("SANS")]);
fontStyle = FontStyle577;

geometry = Text576;

Transform571ZZZ.child[1] = Shape573;

let Shape578 = browser.currentScene.createNode("Shape");
Shape578.DEF = "Roll_Back";
let Appearance579 = browser.currentScene.createNode("Appearance");
let Material580 = browser.currentScene.createNode("Material");
Material580.USE = "Clear";
material = Material580;

appearance = Appearance579;

let IndexedFaceSet581 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet581.USE = "Backing";
geometry = IndexedFaceSet581;

Transform571ZZZ.child[2] = Shape578;

Transform536ZZZ.children[3] = Transform571;

let Transform582 = browser.currentScene.createNode("Transform");
Transform582.DEF = "Walk_Text";
Transform582.translation = new X3D.SFVec3f([0,-6.6,0]);
let TouchSensor583 = browser.currentScene.createNode("TouchSensor");
TouchSensor583.DEF = "Walk_Touch";
Transform582YYY.children = new X3D.MFNode();

Transform582ZZZ.children[0] = TouchSensor583;

let Shape584 = browser.currentScene.createNode("Shape");
Shape584.DEF = "WalkText";
let Appearance585 = browser.currentScene.createNode("Appearance");
let Material586 = browser.currentScene.createNode("Material");
Material586.USE = "text_color";
material = Material586;

appearance = Appearance585;

let Text587 = browser.currentScene.createNode("Text");
Text587.string = new X3D.MFString([new X3D.SFString("Walk")]);
let FontStyle588 = browser.currentScene.createNode("FontStyle");
FontStyle588.family = new X3D.MFString([new X3D.SFString("SANS")]);
fontStyle = FontStyle588;

geometry = Text587;

Transform582ZZZ.child[1] = Shape584;

let Shape589 = browser.currentScene.createNode("Shape");
Shape589.DEF = "Walk_Back";
let Appearance590 = browser.currentScene.createNode("Appearance");
let Material591 = browser.currentScene.createNode("Material");
Material591.USE = "Clear";
material = Material591;

appearance = Appearance590;

let IndexedFaceSet592 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet592.USE = "Backing";
geometry = IndexedFaceSet592;

Transform582ZZZ.child[2] = Shape589;

Transform536ZZZ.children[4] = Transform582;

let Transform593 = browser.currentScene.createNode("Transform");
Transform593.DEF = "Run_Text";
Transform593.translation = new X3D.SFVec3f([0,-8,0]);
let TouchSensor594 = browser.currentScene.createNode("TouchSensor");
TouchSensor594.DEF = "Run_Touch";
Transform593YYY.children = new X3D.MFNode();

Transform593ZZZ.children[0] = TouchSensor594;

let Shape595 = browser.currentScene.createNode("Shape");
Shape595.DEF = "RunText";
let Appearance596 = browser.currentScene.createNode("Appearance");
let Material597 = browser.currentScene.createNode("Material");
Material597.USE = "text_color";
material = Material597;

appearance = Appearance596;

let Text598 = browser.currentScene.createNode("Text");
Text598.string = new X3D.MFString([new X3D.SFString("Run")]);
let FontStyle599 = browser.currentScene.createNode("FontStyle");
FontStyle599.family = new X3D.MFString([new X3D.SFString("SANS")]);
fontStyle = FontStyle599;

geometry = Text598;

Transform593ZZZ.child[1] = Shape595;

let Shape600 = browser.currentScene.createNode("Shape");
Shape600.DEF = "Run_Back";
let Appearance601 = browser.currentScene.createNode("Appearance");
let Material602 = browser.currentScene.createNode("Material");
Material602.USE = "Clear";
material = Material602;

appearance = Appearance601;

let IndexedFaceSet603 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet603.USE = "Backing";
geometry = IndexedFaceSet603;

Transform593ZZZ.child[2] = Shape600;

Transform536ZZZ.children[5] = Transform593;

let Transform604 = browser.currentScene.createNode("Transform");
Transform604.DEF = "Jump_Text";
Transform604.translation = new X3D.SFVec3f([0,-9.4,0]);
let TouchSensor605 = browser.currentScene.createNode("TouchSensor");
TouchSensor605.DEF = "Jump_Touch";
Transform604YYY.children = new X3D.MFNode();

Transform604ZZZ.children[0] = TouchSensor605;

let Shape606 = browser.currentScene.createNode("Shape");
Shape606.DEF = "JumpText";
let Appearance607 = browser.currentScene.createNode("Appearance");
let Material608 = browser.currentScene.createNode("Material");
Material608.USE = "text_color";
material = Material608;

appearance = Appearance607;

let Text609 = browser.currentScene.createNode("Text");
Text609.string = new X3D.MFString([new X3D.SFString("Jump")]);
let FontStyle610 = browser.currentScene.createNode("FontStyle");
FontStyle610.family = new X3D.MFString([new X3D.SFString("SANS")]);
fontStyle = FontStyle610;

geometry = Text609;

Transform604ZZZ.child[1] = Shape606;

let Shape611 = browser.currentScene.createNode("Shape");
Shape611.DEF = "Jump_Back";
let Appearance612 = browser.currentScene.createNode("Appearance");
let Material613 = browser.currentScene.createNode("Material");
Material613.USE = "Clear";
material = Material613;

appearance = Appearance612;

let IndexedFaceSet614 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet614.USE = "Backing";
geometry = IndexedFaceSet614;

Transform604ZZZ.child[2] = Shape611;

Transform536ZZZ.children[6] = Transform604;

let Transform615 = browser.currentScene.createNode("Transform");
Transform615.DEF = "Kick_Text";
Transform615.translation = new X3D.SFVec3f([0,-10.8,0]);
let TouchSensor616 = browser.currentScene.createNode("TouchSensor");
TouchSensor616.DEF = "Kick_Touch";
Transform615YYY.children = new X3D.MFNode();

Transform615ZZZ.children[0] = TouchSensor616;

let Shape617 = browser.currentScene.createNode("Shape");
Shape617.DEF = "KickText";
let Appearance618 = browser.currentScene.createNode("Appearance");
let Material619 = browser.currentScene.createNode("Material");
Material619.USE = "text_color";
material = Material619;

appearance = Appearance618;

let Text620 = browser.currentScene.createNode("Text");
Text620.string = new X3D.MFString([new X3D.SFString("Kick")]);
let FontStyle621 = browser.currentScene.createNode("FontStyle");
FontStyle621.family = new X3D.MFString([new X3D.SFString("SANS")]);
fontStyle = FontStyle621;

geometry = Text620;

Transform615ZZZ.child[1] = Shape617;

let Shape622 = browser.currentScene.createNode("Shape");
Shape622.DEF = "Kick_Back";
let Appearance623 = browser.currentScene.createNode("Appearance");
let Material624 = browser.currentScene.createNode("Material");
Material624.USE = "Clear";
material = Material624;

appearance = Appearance623;

let IndexedFaceSet625 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet625.USE = "Backing";
geometry = IndexedFaceSet625;

Transform615ZZZ.child[2] = Shape622;

Transform536ZZZ.children[7] = Transform615;

let Transform626 = browser.currentScene.createNode("Transform");
Transform626.DEF = "Stop_Text";
Transform626.translation = new X3D.SFVec3f([0,0.4,0]);
let TouchSensor627 = browser.currentScene.createNode("TouchSensor");
TouchSensor627.DEF = "Stop_Touch";
Transform626YYY.children = new X3D.MFNode();

Transform626ZZZ.children[0] = TouchSensor627;

let Shape628 = browser.currentScene.createNode("Shape");
Shape628.DEF = "StopText";
let Appearance629 = browser.currentScene.createNode("Appearance");
let Material630 = browser.currentScene.createNode("Material");
Material630.USE = "text_color";
material = Material630;

appearance = Appearance629;

let Text631 = browser.currentScene.createNode("Text");
Text631.string = new X3D.MFString([new X3D.SFString("Default")]);
let FontStyle632 = browser.currentScene.createNode("FontStyle");
FontStyle632.family = new X3D.MFString([new X3D.SFString("SANS")]);
fontStyle = FontStyle632;

geometry = Text631;

Transform626ZZZ.child[1] = Shape628;

let Shape633 = browser.currentScene.createNode("Shape");
Shape633.DEF = "Stop_Back";
let Appearance634 = browser.currentScene.createNode("Appearance");
let Material635 = browser.currentScene.createNode("Material");
Material635.USE = "Clear";
material = Material635;

appearance = Appearance634;

let IndexedFaceSet636 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet636.USE = "Backing";
geometry = IndexedFaceSet636;

Transform626ZZZ.child[2] = Shape633;

Transform536ZZZ.children[8] = Transform626;

let Transform637 = browser.currentScene.createNode("Transform");
Transform637.DEF = "SceneLabel";
Transform637.translation = new X3D.SFVec3f([1.3,3,0]);
let Shape638 = browser.currentScene.createNode("Shape");
Shape638.DEF = "SceneLabelText";
let Appearance639 = browser.currentScene.createNode("Appearance");
let Material640 = browser.currentScene.createNode("Material");
Material640.USE = "text_color";
material = Material640;

appearance = Appearance639;

let Text641 = browser.currentScene.createNode("Text");
Text641.string = new X3D.MFString([new X3D.SFString("BoxMan3"), new X3D.SFString("Animation")]);
let FontStyle642 = browser.currentScene.createNode("FontStyle");
FontStyle642.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle642.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle642;

geometry = Text641;

Transform637YYY.child = new X3D.undefined();

Transform637ZZZ.child[0] = Shape638;

Transform536ZZZ.children[9] = Transform637;

Transform535YYY.children = new X3D.MFNode();

Transform535ZZZ.children[0] = Transform536;

Group528ZZZ.children[2] = Transform535;

browser.currentScene.children[12] = Group528;

let ROUTE643 = browser.currentScene.createNode("ROUTE");
ROUTE643.fromNode = "StopTimer";
ROUTE643.fromField = "fraction_changed";
ROUTE643.toNode = "Stop_humanoid_root_TranslationInterpolator";
ROUTE643.toField = "set_fraction";
browser.currentScene.children[13] = ROUTE643;

let ROUTE644 = browser.currentScene.createNode("ROUTE");
ROUTE644.fromNode = "StopTimer";
ROUTE644.fromField = "fraction_changed";
ROUTE644.toNode = "Stop_humanoid_root_RotationInterpolator";
ROUTE644.toField = "set_fraction";
browser.currentScene.children[14] = ROUTE644;

let ROUTE645 = browser.currentScene.createNode("ROUTE");
ROUTE645.fromNode = "StopTimer";
ROUTE645.fromField = "fraction_changed";
ROUTE645.toNode = "Stop_sacroiliac_RotationInterpolator";
ROUTE645.toField = "set_fraction";
browser.currentScene.children[15] = ROUTE645;

let ROUTE646 = browser.currentScene.createNode("ROUTE");
ROUTE646.fromNode = "StopTimer";
ROUTE646.fromField = "fraction_changed";
ROUTE646.toNode = "Stop_l_hip_RotationInterpolator";
ROUTE646.toField = "set_fraction";
browser.currentScene.children[16] = ROUTE646;

let ROUTE647 = browser.currentScene.createNode("ROUTE");
ROUTE647.fromNode = "StopTimer";
ROUTE647.fromField = "fraction_changed";
ROUTE647.toNode = "Stop_l_knee_RotationInterpolator";
ROUTE647.toField = "set_fraction";
browser.currentScene.children[17] = ROUTE647;

let ROUTE648 = browser.currentScene.createNode("ROUTE");
ROUTE648.fromNode = "StopTimer";
ROUTE648.fromField = "fraction_changed";
ROUTE648.toNode = "Stop_l_ankle_RotationInterpolator";
ROUTE648.toField = "set_fraction";
browser.currentScene.children[18] = ROUTE648;

let ROUTE649 = browser.currentScene.createNode("ROUTE");
ROUTE649.fromNode = "StopTimer";
ROUTE649.fromField = "fraction_changed";
ROUTE649.toNode = "Stop_l_subtalar_RotationInterpolator";
ROUTE649.toField = "set_fraction";
browser.currentScene.children[19] = ROUTE649;

let ROUTE650 = browser.currentScene.createNode("ROUTE");
ROUTE650.fromNode = "StopTimer";
ROUTE650.fromField = "fraction_changed";
ROUTE650.toNode = "Stop_l_midtarsal_RotationInterpolator";
ROUTE650.toField = "set_fraction";
browser.currentScene.children[20] = ROUTE650;

let ROUTE651 = browser.currentScene.createNode("ROUTE");
ROUTE651.fromNode = "StopTimer";
ROUTE651.fromField = "fraction_changed";
ROUTE651.toNode = "Stop_l_metatarsal_RotationInterpolator";
ROUTE651.toField = "set_fraction";
browser.currentScene.children[21] = ROUTE651;

let ROUTE652 = browser.currentScene.createNode("ROUTE");
ROUTE652.fromNode = "StopTimer";
ROUTE652.fromField = "fraction_changed";
ROUTE652.toNode = "Stop_r_hip_RotationInterpolator";
ROUTE652.toField = "set_fraction";
browser.currentScene.children[22] = ROUTE652;

let ROUTE653 = browser.currentScene.createNode("ROUTE");
ROUTE653.fromNode = "StopTimer";
ROUTE653.fromField = "fraction_changed";
ROUTE653.toNode = "Stop_r_knee_RotationInterpolator";
ROUTE653.toField = "set_fraction";
browser.currentScene.children[23] = ROUTE653;

let ROUTE654 = browser.currentScene.createNode("ROUTE");
ROUTE654.fromNode = "StopTimer";
ROUTE654.fromField = "fraction_changed";
ROUTE654.toNode = "Stop_r_ankle_RotationInterpolator";
ROUTE654.toField = "set_fraction";
browser.currentScene.children[24] = ROUTE654;

let ROUTE655 = browser.currentScene.createNode("ROUTE");
ROUTE655.fromNode = "StopTimer";
ROUTE655.fromField = "fraction_changed";
ROUTE655.toNode = "Stop_r_subtalar_RotationInterpolator";
ROUTE655.toField = "set_fraction";
browser.currentScene.children[25] = ROUTE655;

let ROUTE656 = browser.currentScene.createNode("ROUTE");
ROUTE656.fromNode = "StopTimer";
ROUTE656.fromField = "fraction_changed";
ROUTE656.toNode = "Stop_r_midtarsal_RotationInterpolator";
ROUTE656.toField = "set_fraction";
browser.currentScene.children[26] = ROUTE656;

let ROUTE657 = browser.currentScene.createNode("ROUTE");
ROUTE657.fromNode = "StopTimer";
ROUTE657.fromField = "fraction_changed";
ROUTE657.toNode = "Stop_r_metatarsal_RotationInterpolator";
ROUTE657.toField = "set_fraction";
browser.currentScene.children[27] = ROUTE657;

let ROUTE658 = browser.currentScene.createNode("ROUTE");
ROUTE658.fromNode = "StopTimer";
ROUTE658.fromField = "fraction_changed";
ROUTE658.toNode = "Stop_vl5_RotationInterpolator";
ROUTE658.toField = "set_fraction";
browser.currentScene.children[28] = ROUTE658;

let ROUTE659 = browser.currentScene.createNode("ROUTE");
ROUTE659.fromNode = "StopTimer";
ROUTE659.fromField = "fraction_changed";
ROUTE659.toNode = "Stop_vl4_RotationInterpolator";
ROUTE659.toField = "set_fraction";
browser.currentScene.children[29] = ROUTE659;

let ROUTE660 = browser.currentScene.createNode("ROUTE");
ROUTE660.fromNode = "StopTimer";
ROUTE660.fromField = "fraction_changed";
ROUTE660.toNode = "Stop_vl3_RotationInterpolator";
ROUTE660.toField = "set_fraction";
browser.currentScene.children[30] = ROUTE660;

let ROUTE661 = browser.currentScene.createNode("ROUTE");
ROUTE661.fromNode = "StopTimer";
ROUTE661.fromField = "fraction_changed";
ROUTE661.toNode = "Stop_vl2_RotationInterpolator";
ROUTE661.toField = "set_fraction";
browser.currentScene.children[31] = ROUTE661;

let ROUTE662 = browser.currentScene.createNode("ROUTE");
ROUTE662.fromNode = "StopTimer";
ROUTE662.fromField = "fraction_changed";
ROUTE662.toNode = "Stop_vl1_RotationInterpolator";
ROUTE662.toField = "set_fraction";
browser.currentScene.children[32] = ROUTE662;

let ROUTE663 = browser.currentScene.createNode("ROUTE");
ROUTE663.fromNode = "StopTimer";
ROUTE663.fromField = "fraction_changed";
ROUTE663.toNode = "Stop_vt12_RotationInterpolator";
ROUTE663.toField = "set_fraction";
browser.currentScene.children[33] = ROUTE663;

let ROUTE664 = browser.currentScene.createNode("ROUTE");
ROUTE664.fromNode = "StopTimer";
ROUTE664.fromField = "fraction_changed";
ROUTE664.toNode = "Stop_vt11_RotationInterpolator";
ROUTE664.toField = "set_fraction";
browser.currentScene.children[34] = ROUTE664;

let ROUTE665 = browser.currentScene.createNode("ROUTE");
ROUTE665.fromNode = "StopTimer";
ROUTE665.fromField = "fraction_changed";
ROUTE665.toNode = "Stop_vt10_RotationInterpolator";
ROUTE665.toField = "set_fraction";
browser.currentScene.children[35] = ROUTE665;

let ROUTE666 = browser.currentScene.createNode("ROUTE");
ROUTE666.fromNode = "StopTimer";
ROUTE666.fromField = "fraction_changed";
ROUTE666.toNode = "Stop_vt9_RotationInterpolator";
ROUTE666.toField = "set_fraction";
browser.currentScene.children[36] = ROUTE666;

let ROUTE667 = browser.currentScene.createNode("ROUTE");
ROUTE667.fromNode = "StopTimer";
ROUTE667.fromField = "fraction_changed";
ROUTE667.toNode = "Stop_vt8_RotationInterpolator";
ROUTE667.toField = "set_fraction";
browser.currentScene.children[37] = ROUTE667;

let ROUTE668 = browser.currentScene.createNode("ROUTE");
ROUTE668.fromNode = "StopTimer";
ROUTE668.fromField = "fraction_changed";
ROUTE668.toNode = "Stop_vt7_RotationInterpolator";
ROUTE668.toField = "set_fraction";
browser.currentScene.children[38] = ROUTE668;

let ROUTE669 = browser.currentScene.createNode("ROUTE");
ROUTE669.fromNode = "StopTimer";
ROUTE669.fromField = "fraction_changed";
ROUTE669.toNode = "Stop_vt6_RotationInterpolator";
ROUTE669.toField = "set_fraction";
browser.currentScene.children[39] = ROUTE669;

let ROUTE670 = browser.currentScene.createNode("ROUTE");
ROUTE670.fromNode = "StopTimer";
ROUTE670.fromField = "fraction_changed";
ROUTE670.toNode = "Stop_vt5_RotationInterpolator";
ROUTE670.toField = "set_fraction";
browser.currentScene.children[40] = ROUTE670;

let ROUTE671 = browser.currentScene.createNode("ROUTE");
ROUTE671.fromNode = "StopTimer";
ROUTE671.fromField = "fraction_changed";
ROUTE671.toNode = "Stop_vt4_RotationInterpolator";
ROUTE671.toField = "set_fraction";
browser.currentScene.children[41] = ROUTE671;

let ROUTE672 = browser.currentScene.createNode("ROUTE");
ROUTE672.fromNode = "StopTimer";
ROUTE672.fromField = "fraction_changed";
ROUTE672.toNode = "Stop_vt3_RotationInterpolator";
ROUTE672.toField = "set_fraction";
browser.currentScene.children[42] = ROUTE672;

let ROUTE673 = browser.currentScene.createNode("ROUTE");
ROUTE673.fromNode = "StopTimer";
ROUTE673.fromField = "fraction_changed";
ROUTE673.toNode = "Stop_vt2_RotationInterpolator";
ROUTE673.toField = "set_fraction";
browser.currentScene.children[43] = ROUTE673;

let ROUTE674 = browser.currentScene.createNode("ROUTE");
ROUTE674.fromNode = "StopTimer";
ROUTE674.fromField = "fraction_changed";
ROUTE674.toNode = "Stop_vt1_RotationInterpolator";
ROUTE674.toField = "set_fraction";
browser.currentScene.children[44] = ROUTE674;

let ROUTE675 = browser.currentScene.createNode("ROUTE");
ROUTE675.fromNode = "StopTimer";
ROUTE675.fromField = "fraction_changed";
ROUTE675.toNode = "Stop_vc7_RotationInterpolator";
ROUTE675.toField = "set_fraction";
browser.currentScene.children[45] = ROUTE675;

let ROUTE676 = browser.currentScene.createNode("ROUTE");
ROUTE676.fromNode = "StopTimer";
ROUTE676.fromField = "fraction_changed";
ROUTE676.toNode = "Stop_vc6_RotationInterpolator";
ROUTE676.toField = "set_fraction";
browser.currentScene.children[46] = ROUTE676;

let ROUTE677 = browser.currentScene.createNode("ROUTE");
ROUTE677.fromNode = "StopTimer";
ROUTE677.fromField = "fraction_changed";
ROUTE677.toNode = "Stop_vc5_RotationInterpolator";
ROUTE677.toField = "set_fraction";
browser.currentScene.children[47] = ROUTE677;

let ROUTE678 = browser.currentScene.createNode("ROUTE");
ROUTE678.fromNode = "StopTimer";
ROUTE678.fromField = "fraction_changed";
ROUTE678.toNode = "Stop_vc4_RotationInterpolator";
ROUTE678.toField = "set_fraction";
browser.currentScene.children[48] = ROUTE678;

let ROUTE679 = browser.currentScene.createNode("ROUTE");
ROUTE679.fromNode = "StopTimer";
ROUTE679.fromField = "fraction_changed";
ROUTE679.toNode = "Stop_vc3_RotationInterpolator";
ROUTE679.toField = "set_fraction";
browser.currentScene.children[49] = ROUTE679;

let ROUTE680 = browser.currentScene.createNode("ROUTE");
ROUTE680.fromNode = "StopTimer";
ROUTE680.fromField = "fraction_changed";
ROUTE680.toNode = "Stop_vc2_RotationInterpolator";
ROUTE680.toField = "set_fraction";
browser.currentScene.children[50] = ROUTE680;

let ROUTE681 = browser.currentScene.createNode("ROUTE");
ROUTE681.fromNode = "StopTimer";
ROUTE681.fromField = "fraction_changed";
ROUTE681.toNode = "Stop_vc1_RotationInterpolator";
ROUTE681.toField = "set_fraction";
browser.currentScene.children[51] = ROUTE681;

let ROUTE682 = browser.currentScene.createNode("ROUTE");
ROUTE682.fromNode = "StopTimer";
ROUTE682.fromField = "fraction_changed";
ROUTE682.toNode = "Stop_skullbase_RotationInterpolator";
ROUTE682.toField = "set_fraction";
browser.currentScene.children[52] = ROUTE682;

let ROUTE683 = browser.currentScene.createNode("ROUTE");
ROUTE683.fromNode = "StopTimer";
ROUTE683.fromField = "fraction_changed";
ROUTE683.toNode = "Stop_l_eyeball_joint_RotationInterpolator";
ROUTE683.toField = "set_fraction";
browser.currentScene.children[53] = ROUTE683;

let ROUTE684 = browser.currentScene.createNode("ROUTE");
ROUTE684.fromNode = "StopTimer";
ROUTE684.fromField = "fraction_changed";
ROUTE684.toNode = "Stop_r_eyeball_joint_RotationInterpolator";
ROUTE684.toField = "set_fraction";
browser.currentScene.children[54] = ROUTE684;

let ROUTE685 = browser.currentScene.createNode("ROUTE");
ROUTE685.fromNode = "StopTimer";
ROUTE685.fromField = "fraction_changed";
ROUTE685.toNode = "Stop_l_sternoclavicular_RotationInterpolator";
ROUTE685.toField = "set_fraction";
browser.currentScene.children[55] = ROUTE685;

let ROUTE686 = browser.currentScene.createNode("ROUTE");
ROUTE686.fromNode = "StopTimer";
ROUTE686.fromField = "fraction_changed";
ROUTE686.toNode = "Stop_l_acromioclavicular_RotationInterpolator";
ROUTE686.toField = "set_fraction";
browser.currentScene.children[56] = ROUTE686;

let ROUTE687 = browser.currentScene.createNode("ROUTE");
ROUTE687.fromNode = "StopTimer";
ROUTE687.fromField = "fraction_changed";
ROUTE687.toNode = "Stop_l_shoulder_RotationInterpolator";
ROUTE687.toField = "set_fraction";
browser.currentScene.children[57] = ROUTE687;

let ROUTE688 = browser.currentScene.createNode("ROUTE");
ROUTE688.fromNode = "StopTimer";
ROUTE688.fromField = "fraction_changed";
ROUTE688.toNode = "Stop_l_elbow_RotationInterpolator";
ROUTE688.toField = "set_fraction";
browser.currentScene.children[58] = ROUTE688;

let ROUTE689 = browser.currentScene.createNode("ROUTE");
ROUTE689.fromNode = "StopTimer";
ROUTE689.fromField = "fraction_changed";
ROUTE689.toNode = "Stop_l_wrist_RotationInterpolator";
ROUTE689.toField = "set_fraction";
browser.currentScene.children[59] = ROUTE689;

let ROUTE690 = browser.currentScene.createNode("ROUTE");
ROUTE690.fromNode = "StopTimer";
ROUTE690.fromField = "fraction_changed";
ROUTE690.toNode = "Stop_l_thumb1_RotationInterpolator";
ROUTE690.toField = "set_fraction";
browser.currentScene.children[60] = ROUTE690;

let ROUTE691 = browser.currentScene.createNode("ROUTE");
ROUTE691.fromNode = "StopTimer";
ROUTE691.fromField = "fraction_changed";
ROUTE691.toNode = "Stop_l_thumb2_RotationInterpolator";
ROUTE691.toField = "set_fraction";
browser.currentScene.children[61] = ROUTE691;

let ROUTE692 = browser.currentScene.createNode("ROUTE");
ROUTE692.fromNode = "StopTimer";
ROUTE692.fromField = "fraction_changed";
ROUTE692.toNode = "Stop_l_thumb3_RotationInterpolator";
ROUTE692.toField = "set_fraction";
browser.currentScene.children[62] = ROUTE692;

let ROUTE693 = browser.currentScene.createNode("ROUTE");
ROUTE693.fromNode = "StopTimer";
ROUTE693.fromField = "fraction_changed";
ROUTE693.toNode = "Stop_l_index0_RotationInterpolator";
ROUTE693.toField = "set_fraction";
browser.currentScene.children[63] = ROUTE693;

let ROUTE694 = browser.currentScene.createNode("ROUTE");
ROUTE694.fromNode = "StopTimer";
ROUTE694.fromField = "fraction_changed";
ROUTE694.toNode = "Stop_l_index1_RotationInterpolator";
ROUTE694.toField = "set_fraction";
browser.currentScene.children[64] = ROUTE694;

let ROUTE695 = browser.currentScene.createNode("ROUTE");
ROUTE695.fromNode = "StopTimer";
ROUTE695.fromField = "fraction_changed";
ROUTE695.toNode = "Stop_l_index2_RotationInterpolator";
ROUTE695.toField = "set_fraction";
browser.currentScene.children[65] = ROUTE695;

let ROUTE696 = browser.currentScene.createNode("ROUTE");
ROUTE696.fromNode = "StopTimer";
ROUTE696.fromField = "fraction_changed";
ROUTE696.toNode = "Stop_l_index3_RotationInterpolator";
ROUTE696.toField = "set_fraction";
browser.currentScene.children[66] = ROUTE696;

let ROUTE697 = browser.currentScene.createNode("ROUTE");
ROUTE697.fromNode = "StopTimer";
ROUTE697.fromField = "fraction_changed";
ROUTE697.toNode = "Stop_l_middle0_RotationInterpolator";
ROUTE697.toField = "set_fraction";
browser.currentScene.children[67] = ROUTE697;

let ROUTE698 = browser.currentScene.createNode("ROUTE");
ROUTE698.fromNode = "StopTimer";
ROUTE698.fromField = "fraction_changed";
ROUTE698.toNode = "Stop_l_middle1_RotationInterpolator";
ROUTE698.toField = "set_fraction";
browser.currentScene.children[68] = ROUTE698;

let ROUTE699 = browser.currentScene.createNode("ROUTE");
ROUTE699.fromNode = "StopTimer";
ROUTE699.fromField = "fraction_changed";
ROUTE699.toNode = "Stop_l_middle2_RotationInterpolator";
ROUTE699.toField = "set_fraction";
browser.currentScene.children[69] = ROUTE699;

let ROUTE700 = browser.currentScene.createNode("ROUTE");
ROUTE700.fromNode = "StopTimer";
ROUTE700.fromField = "fraction_changed";
ROUTE700.toNode = "Stop_l_middle3_RotationInterpolator";
ROUTE700.toField = "set_fraction";
browser.currentScene.children[70] = ROUTE700;

let ROUTE701 = browser.currentScene.createNode("ROUTE");
ROUTE701.fromNode = "StopTimer";
ROUTE701.fromField = "fraction_changed";
ROUTE701.toNode = "Stop_l_ring0_RotationInterpolator";
ROUTE701.toField = "set_fraction";
browser.currentScene.children[71] = ROUTE701;

let ROUTE702 = browser.currentScene.createNode("ROUTE");
ROUTE702.fromNode = "StopTimer";
ROUTE702.fromField = "fraction_changed";
ROUTE702.toNode = "Stop_l_ring1_RotationInterpolator";
ROUTE702.toField = "set_fraction";
browser.currentScene.children[72] = ROUTE702;

let ROUTE703 = browser.currentScene.createNode("ROUTE");
ROUTE703.fromNode = "StopTimer";
ROUTE703.fromField = "fraction_changed";
ROUTE703.toNode = "Stop_l_ring2_RotationInterpolator";
ROUTE703.toField = "set_fraction";
browser.currentScene.children[73] = ROUTE703;

let ROUTE704 = browser.currentScene.createNode("ROUTE");
ROUTE704.fromNode = "StopTimer";
ROUTE704.fromField = "fraction_changed";
ROUTE704.toNode = "Stop_l_ring3_RotationInterpolator";
ROUTE704.toField = "set_fraction";
browser.currentScene.children[74] = ROUTE704;

let ROUTE705 = browser.currentScene.createNode("ROUTE");
ROUTE705.fromNode = "StopTimer";
ROUTE705.fromField = "fraction_changed";
ROUTE705.toNode = "Stop_l_pinky0_RotationInterpolator";
ROUTE705.toField = "set_fraction";
browser.currentScene.children[75] = ROUTE705;

let ROUTE706 = browser.currentScene.createNode("ROUTE");
ROUTE706.fromNode = "StopTimer";
ROUTE706.fromField = "fraction_changed";
ROUTE706.toNode = "Stop_l_pinky1_RotationInterpolator";
ROUTE706.toField = "set_fraction";
browser.currentScene.children[76] = ROUTE706;

let ROUTE707 = browser.currentScene.createNode("ROUTE");
ROUTE707.fromNode = "StopTimer";
ROUTE707.fromField = "fraction_changed";
ROUTE707.toNode = "Stop_l_pinky2_RotationInterpolator";
ROUTE707.toField = "set_fraction";
browser.currentScene.children[77] = ROUTE707;

let ROUTE708 = browser.currentScene.createNode("ROUTE");
ROUTE708.fromNode = "StopTimer";
ROUTE708.fromField = "fraction_changed";
ROUTE708.toNode = "Stop_l_pinky3_RotationInterpolator";
ROUTE708.toField = "set_fraction";
browser.currentScene.children[78] = ROUTE708;

let ROUTE709 = browser.currentScene.createNode("ROUTE");
ROUTE709.fromNode = "StopTimer";
ROUTE709.fromField = "fraction_changed";
ROUTE709.toNode = "Stop_r_sternoclavicular_RotationInterpolator";
ROUTE709.toField = "set_fraction";
browser.currentScene.children[79] = ROUTE709;

let ROUTE710 = browser.currentScene.createNode("ROUTE");
ROUTE710.fromNode = "StopTimer";
ROUTE710.fromField = "fraction_changed";
ROUTE710.toNode = "Stop_r_acromioclavicular_RotationInterpolator";
ROUTE710.toField = "set_fraction";
browser.currentScene.children[80] = ROUTE710;

let ROUTE711 = browser.currentScene.createNode("ROUTE");
ROUTE711.fromNode = "StopTimer";
ROUTE711.fromField = "fraction_changed";
ROUTE711.toNode = "Stop_r_shoulder_RotationInterpolator";
ROUTE711.toField = "set_fraction";
browser.currentScene.children[81] = ROUTE711;

let ROUTE712 = browser.currentScene.createNode("ROUTE");
ROUTE712.fromNode = "StopTimer";
ROUTE712.fromField = "fraction_changed";
ROUTE712.toNode = "Stop_r_elbow_RotationInterpolator";
ROUTE712.toField = "set_fraction";
browser.currentScene.children[82] = ROUTE712;

let ROUTE713 = browser.currentScene.createNode("ROUTE");
ROUTE713.fromNode = "StopTimer";
ROUTE713.fromField = "fraction_changed";
ROUTE713.toNode = "Stop_r_wrist_RotationInterpolator";
ROUTE713.toField = "set_fraction";
browser.currentScene.children[83] = ROUTE713;

let ROUTE714 = browser.currentScene.createNode("ROUTE");
ROUTE714.fromNode = "StopTimer";
ROUTE714.fromField = "fraction_changed";
ROUTE714.toNode = "Stop_r_thumb1_RotationInterpolator";
ROUTE714.toField = "set_fraction";
browser.currentScene.children[84] = ROUTE714;

let ROUTE715 = browser.currentScene.createNode("ROUTE");
ROUTE715.fromNode = "StopTimer";
ROUTE715.fromField = "fraction_changed";
ROUTE715.toNode = "Stop_r_thumb2_RotationInterpolator";
ROUTE715.toField = "set_fraction";
browser.currentScene.children[85] = ROUTE715;

let ROUTE716 = browser.currentScene.createNode("ROUTE");
ROUTE716.fromNode = "StopTimer";
ROUTE716.fromField = "fraction_changed";
ROUTE716.toNode = "Stop_r_thumb3_RotationInterpolator";
ROUTE716.toField = "set_fraction";
browser.currentScene.children[86] = ROUTE716;

let ROUTE717 = browser.currentScene.createNode("ROUTE");
ROUTE717.fromNode = "StopTimer";
ROUTE717.fromField = "fraction_changed";
ROUTE717.toNode = "Stop_r_index0_RotationInterpolator";
ROUTE717.toField = "set_fraction";
browser.currentScene.children[87] = ROUTE717;

let ROUTE718 = browser.currentScene.createNode("ROUTE");
ROUTE718.fromNode = "StopTimer";
ROUTE718.fromField = "fraction_changed";
ROUTE718.toNode = "Stop_r_index1_RotationInterpolator";
ROUTE718.toField = "set_fraction";
browser.currentScene.children[88] = ROUTE718;

let ROUTE719 = browser.currentScene.createNode("ROUTE");
ROUTE719.fromNode = "StopTimer";
ROUTE719.fromField = "fraction_changed";
ROUTE719.toNode = "Stop_r_index2_RotationInterpolator";
ROUTE719.toField = "set_fraction";
browser.currentScene.children[89] = ROUTE719;

let ROUTE720 = browser.currentScene.createNode("ROUTE");
ROUTE720.fromNode = "StopTimer";
ROUTE720.fromField = "fraction_changed";
ROUTE720.toNode = "Stop_r_index3_RotationInterpolator";
ROUTE720.toField = "set_fraction";
browser.currentScene.children[90] = ROUTE720;

let ROUTE721 = browser.currentScene.createNode("ROUTE");
ROUTE721.fromNode = "StopTimer";
ROUTE721.fromField = "fraction_changed";
ROUTE721.toNode = "Stop_r_middle0_RotationInterpolator";
ROUTE721.toField = "set_fraction";
browser.currentScene.children[91] = ROUTE721;

let ROUTE722 = browser.currentScene.createNode("ROUTE");
ROUTE722.fromNode = "StopTimer";
ROUTE722.fromField = "fraction_changed";
ROUTE722.toNode = "Stop_r_middle1_RotationInterpolator";
ROUTE722.toField = "set_fraction";
browser.currentScene.children[92] = ROUTE722;

let ROUTE723 = browser.currentScene.createNode("ROUTE");
ROUTE723.fromNode = "StopTimer";
ROUTE723.fromField = "fraction_changed";
ROUTE723.toNode = "Stop_r_middle2_RotationInterpolator";
ROUTE723.toField = "set_fraction";
browser.currentScene.children[93] = ROUTE723;

let ROUTE724 = browser.currentScene.createNode("ROUTE");
ROUTE724.fromNode = "StopTimer";
ROUTE724.fromField = "fraction_changed";
ROUTE724.toNode = "Stop_r_middle3_RotationInterpolator";
ROUTE724.toField = "set_fraction";
browser.currentScene.children[94] = ROUTE724;

let ROUTE725 = browser.currentScene.createNode("ROUTE");
ROUTE725.fromNode = "StopTimer";
ROUTE725.fromField = "fraction_changed";
ROUTE725.toNode = "Stop_r_ring0_RotationInterpolator";
ROUTE725.toField = "set_fraction";
browser.currentScene.children[95] = ROUTE725;

let ROUTE726 = browser.currentScene.createNode("ROUTE");
ROUTE726.fromNode = "StopTimer";
ROUTE726.fromField = "fraction_changed";
ROUTE726.toNode = "Stop_r_ring1_RotationInterpolator";
ROUTE726.toField = "set_fraction";
browser.currentScene.children[96] = ROUTE726;

let ROUTE727 = browser.currentScene.createNode("ROUTE");
ROUTE727.fromNode = "StopTimer";
ROUTE727.fromField = "fraction_changed";
ROUTE727.toNode = "Stop_r_ring2_RotationInterpolator";
ROUTE727.toField = "set_fraction";
browser.currentScene.children[97] = ROUTE727;

let ROUTE728 = browser.currentScene.createNode("ROUTE");
ROUTE728.fromNode = "StopTimer";
ROUTE728.fromField = "fraction_changed";
ROUTE728.toNode = "Stop_r_ring3_RotationInterpolator";
ROUTE728.toField = "set_fraction";
browser.currentScene.children[98] = ROUTE728;

let ROUTE729 = browser.currentScene.createNode("ROUTE");
ROUTE729.fromNode = "StopTimer";
ROUTE729.fromField = "fraction_changed";
ROUTE729.toNode = "Stop_r_pinky0_RotationInterpolator";
ROUTE729.toField = "set_fraction";
browser.currentScene.children[99] = ROUTE729;

let ROUTE730 = browser.currentScene.createNode("ROUTE");
ROUTE730.fromNode = "StopTimer";
ROUTE730.fromField = "fraction_changed";
ROUTE730.toNode = "Stop_r_pinky1_RotationInterpolator";
ROUTE730.toField = "set_fraction";
browser.currentScene.children[100] = ROUTE730;

let ROUTE731 = browser.currentScene.createNode("ROUTE");
ROUTE731.fromNode = "StopTimer";
ROUTE731.fromField = "fraction_changed";
ROUTE731.toNode = "Stop_r_pinky2_RotationInterpolator";
ROUTE731.toField = "set_fraction";
browser.currentScene.children[101] = ROUTE731;

let ROUTE732 = browser.currentScene.createNode("ROUTE");
ROUTE732.fromNode = "StopTimer";
ROUTE732.fromField = "fraction_changed";
ROUTE732.toNode = "Stop_r_pinky3_RotationInterpolator";
ROUTE732.toField = "set_fraction";
browser.currentScene.children[102] = ROUTE732;

let ROUTE733 = browser.currentScene.createNode("ROUTE");
ROUTE733.fromNode = "Stop_humanoid_root_TranslationInterpolator";
ROUTE733.fromField = "value_changed";
ROUTE733.toNode = "boxman_humanoid_root";
ROUTE733.toField = "set_translation";
browser.currentScene.children[103] = ROUTE733;

let ROUTE734 = browser.currentScene.createNode("ROUTE");
ROUTE734.fromNode = "Stop_humanoid_root_RotationInterpolator";
ROUTE734.fromField = "value_changed";
ROUTE734.toNode = "boxman_humanoid_root";
ROUTE734.toField = "set_rotation";
browser.currentScene.children[104] = ROUTE734;

let ROUTE735 = browser.currentScene.createNode("ROUTE");
ROUTE735.fromNode = "Stop_l_hip_RotationInterpolator";
ROUTE735.fromField = "value_changed";
ROUTE735.toNode = "boxman_l_hip";
ROUTE735.toField = "set_rotation";
browser.currentScene.children[105] = ROUTE735;

let ROUTE736 = browser.currentScene.createNode("ROUTE");
ROUTE736.fromNode = "Stop_l_knee_RotationInterpolator";
ROUTE736.fromField = "value_changed";
ROUTE736.toNode = "boxman_l_knee";
ROUTE736.toField = "set_rotation";
browser.currentScene.children[106] = ROUTE736;

let ROUTE737 = browser.currentScene.createNode("ROUTE");
ROUTE737.fromNode = "Stop_l_ankle_RotationInterpolator";
ROUTE737.fromField = "value_changed";
ROUTE737.toNode = "boxman_l_ankle";
ROUTE737.toField = "set_rotation";
browser.currentScene.children[107] = ROUTE737;

let ROUTE738 = browser.currentScene.createNode("ROUTE");
ROUTE738.fromNode = "Stop_l_midtarsal_RotationInterpolator";
ROUTE738.fromField = "value_changed";
ROUTE738.toNode = "boxman_l_midtarsal";
ROUTE738.toField = "set_rotation";
browser.currentScene.children[108] = ROUTE738;

let ROUTE739 = browser.currentScene.createNode("ROUTE");
ROUTE739.fromNode = "Stop_r_hip_RotationInterpolator";
ROUTE739.fromField = "value_changed";
ROUTE739.toNode = "boxman_r_hip";
ROUTE739.toField = "set_rotation";
browser.currentScene.children[109] = ROUTE739;

let ROUTE740 = browser.currentScene.createNode("ROUTE");
ROUTE740.fromNode = "Stop_r_knee_RotationInterpolator";
ROUTE740.fromField = "value_changed";
ROUTE740.toNode = "boxman_r_knee";
ROUTE740.toField = "set_rotation";
browser.currentScene.children[110] = ROUTE740;

let ROUTE741 = browser.currentScene.createNode("ROUTE");
ROUTE741.fromNode = "Stop_r_ankle_RotationInterpolator";
ROUTE741.fromField = "value_changed";
ROUTE741.toNode = "boxman_r_ankle";
ROUTE741.toField = "set_rotation";
browser.currentScene.children[111] = ROUTE741;

let ROUTE742 = browser.currentScene.createNode("ROUTE");
ROUTE742.fromNode = "Stop_r_midtarsal_RotationInterpolator";
ROUTE742.fromField = "value_changed";
ROUTE742.toNode = "boxman_r_midtarsal";
ROUTE742.toField = "set_rotation";
browser.currentScene.children[112] = ROUTE742;

let ROUTE743 = browser.currentScene.createNode("ROUTE");
ROUTE743.fromNode = "Stop_vl5_RotationInterpolator";
ROUTE743.fromField = "value_changed";
ROUTE743.toNode = "boxman_vl5";
ROUTE743.toField = "set_rotation";
browser.currentScene.children[113] = ROUTE743;

let ROUTE744 = browser.currentScene.createNode("ROUTE");
ROUTE744.fromNode = "Stop_skullbase_RotationInterpolator";
ROUTE744.fromField = "value_changed";
ROUTE744.toNode = "boxman_skullbase";
ROUTE744.toField = "set_rotation";
browser.currentScene.children[114] = ROUTE744;

let ROUTE745 = browser.currentScene.createNode("ROUTE");
ROUTE745.fromNode = "Stop_l_shoulder_RotationInterpolator";
ROUTE745.fromField = "value_changed";
ROUTE745.toNode = "boxman_l_shoulder";
ROUTE745.toField = "set_rotation";
browser.currentScene.children[115] = ROUTE745;

let ROUTE746 = browser.currentScene.createNode("ROUTE");
ROUTE746.fromNode = "Stop_l_elbow_RotationInterpolator";
ROUTE746.fromField = "value_changed";
ROUTE746.toNode = "boxman_l_elbow";
ROUTE746.toField = "set_rotation";
browser.currentScene.children[116] = ROUTE746;

let ROUTE747 = browser.currentScene.createNode("ROUTE");
ROUTE747.fromNode = "Stop_l_wrist_RotationInterpolator";
ROUTE747.fromField = "value_changed";
ROUTE747.toNode = "boxman_l_wrist";
ROUTE747.toField = "set_rotation";
browser.currentScene.children[117] = ROUTE747;

let ROUTE748 = browser.currentScene.createNode("ROUTE");
ROUTE748.fromNode = "Stop_r_shoulder_RotationInterpolator";
ROUTE748.fromField = "value_changed";
ROUTE748.toNode = "boxman_r_shoulder";
ROUTE748.toField = "set_rotation";
browser.currentScene.children[118] = ROUTE748;

let ROUTE749 = browser.currentScene.createNode("ROUTE");
ROUTE749.fromNode = "Stop_r_elbow_RotationInterpolator";
ROUTE749.fromField = "value_changed";
ROUTE749.toNode = "boxman_r_elbow";
ROUTE749.toField = "set_rotation";
browser.currentScene.children[119] = ROUTE749;

let ROUTE750 = browser.currentScene.createNode("ROUTE");
ROUTE750.fromNode = "Stop_r_wrist_RotationInterpolator";
ROUTE750.fromField = "value_changed";
ROUTE750.toNode = "boxman_r_wrist";
ROUTE750.toField = "set_rotation";
browser.currentScene.children[120] = ROUTE750;

let ROUTE751 = browser.currentScene.createNode("ROUTE");
ROUTE751.fromNode = "StandTimer";
ROUTE751.fromField = "fraction_changed";
ROUTE751.toNode = "Stand_r_ankle_RotationInterpolator";
ROUTE751.toField = "set_fraction";
browser.currentScene.children[121] = ROUTE751;

let ROUTE752 = browser.currentScene.createNode("ROUTE");
ROUTE752.fromNode = "StandTimer";
ROUTE752.fromField = "fraction_changed";
ROUTE752.toNode = "Stand_r_knee_RotationInterpolator";
ROUTE752.toField = "set_fraction";
browser.currentScene.children[122] = ROUTE752;

let ROUTE753 = browser.currentScene.createNode("ROUTE");
ROUTE753.fromNode = "StandTimer";
ROUTE753.fromField = "fraction_changed";
ROUTE753.toNode = "Stand_r_hip_RotationInterpolator";
ROUTE753.toField = "set_fraction";
browser.currentScene.children[123] = ROUTE753;

let ROUTE754 = browser.currentScene.createNode("ROUTE");
ROUTE754.fromNode = "StandTimer";
ROUTE754.fromField = "fraction_changed";
ROUTE754.toNode = "Stand_l_ankle_RotationInterpolator";
ROUTE754.toField = "set_fraction";
browser.currentScene.children[124] = ROUTE754;

let ROUTE755 = browser.currentScene.createNode("ROUTE");
ROUTE755.fromNode = "StandTimer";
ROUTE755.fromField = "fraction_changed";
ROUTE755.toNode = "Stand_l_knee_RotationInterpolator";
ROUTE755.toField = "set_fraction";
browser.currentScene.children[125] = ROUTE755;

let ROUTE756 = browser.currentScene.createNode("ROUTE");
ROUTE756.fromNode = "StandTimer";
ROUTE756.fromField = "fraction_changed";
ROUTE756.toNode = "Stand_l_hip_RotationInterpolator";
ROUTE756.toField = "set_fraction";
browser.currentScene.children[126] = ROUTE756;

let ROUTE757 = browser.currentScene.createNode("ROUTE");
ROUTE757.fromNode = "StandTimer";
ROUTE757.fromField = "fraction_changed";
ROUTE757.toNode = "Stand_lower_body_RotationInterpolator";
ROUTE757.toField = "set_fraction";
browser.currentScene.children[127] = ROUTE757;

let ROUTE758 = browser.currentScene.createNode("ROUTE");
ROUTE758.fromNode = "StandTimer";
ROUTE758.fromField = "fraction_changed";
ROUTE758.toNode = "Stand_r_wrist_RotationInterpolator";
ROUTE758.toField = "set_fraction";
browser.currentScene.children[128] = ROUTE758;

let ROUTE759 = browser.currentScene.createNode("ROUTE");
ROUTE759.fromNode = "StandTimer";
ROUTE759.fromField = "fraction_changed";
ROUTE759.toNode = "Stand_r_elbow_RotationInterpolator";
ROUTE759.toField = "set_fraction";
browser.currentScene.children[129] = ROUTE759;

let ROUTE760 = browser.currentScene.createNode("ROUTE");
ROUTE760.fromNode = "StandTimer";
ROUTE760.fromField = "fraction_changed";
ROUTE760.toNode = "Stand_r_shoulder_RotationInterpolator";
ROUTE760.toField = "set_fraction";
browser.currentScene.children[130] = ROUTE760;

let ROUTE761 = browser.currentScene.createNode("ROUTE");
ROUTE761.fromNode = "StandTimer";
ROUTE761.fromField = "fraction_changed";
ROUTE761.toNode = "Stand_l_wrist_RotationInterpolator";
ROUTE761.toField = "set_fraction";
browser.currentScene.children[131] = ROUTE761;

let ROUTE762 = browser.currentScene.createNode("ROUTE");
ROUTE762.fromNode = "StandTimer";
ROUTE762.fromField = "fraction_changed";
ROUTE762.toNode = "Stand_l_elbow_RotationInterpolator";
ROUTE762.toField = "set_fraction";
browser.currentScene.children[132] = ROUTE762;

let ROUTE763 = browser.currentScene.createNode("ROUTE");
ROUTE763.fromNode = "StandTimer";
ROUTE763.fromField = "fraction_changed";
ROUTE763.toNode = "Stand_l_shoulder_RotationInterpolator";
ROUTE763.toField = "set_fraction";
browser.currentScene.children[133] = ROUTE763;

let ROUTE764 = browser.currentScene.createNode("ROUTE");
ROUTE764.fromNode = "StandTimer";
ROUTE764.fromField = "fraction_changed";
ROUTE764.toNode = "Stand_head_RotationInterpolator";
ROUTE764.toField = "set_fraction";
browser.currentScene.children[134] = ROUTE764;

let ROUTE765 = browser.currentScene.createNode("ROUTE");
ROUTE765.fromNode = "StandTimer";
ROUTE765.fromField = "fraction_changed";
ROUTE765.toNode = "Stand_neck_RotationInterpolator";
ROUTE765.toField = "set_fraction";
browser.currentScene.children[135] = ROUTE765;

let ROUTE766 = browser.currentScene.createNode("ROUTE");
ROUTE766.fromNode = "StandTimer";
ROUTE766.fromField = "fraction_changed";
ROUTE766.toNode = "Stand_l_eyeball_RotationInterpolator";
ROUTE766.toField = "set_fraction";
browser.currentScene.children[136] = ROUTE766;

let ROUTE767 = browser.currentScene.createNode("ROUTE");
ROUTE767.fromNode = "StandTimer";
ROUTE767.fromField = "fraction_changed";
ROUTE767.toNode = "Stand_r_eyeball_RotationInterpolator";
ROUTE767.toField = "set_fraction";
browser.currentScene.children[137] = ROUTE767;

let ROUTE768 = browser.currentScene.createNode("ROUTE");
ROUTE768.fromNode = "StandTimer";
ROUTE768.fromField = "fraction_changed";
ROUTE768.toNode = "Stand_upper_body_RotationInterpolator";
ROUTE768.toField = "set_fraction";
browser.currentScene.children[138] = ROUTE768;

let ROUTE769 = browser.currentScene.createNode("ROUTE");
ROUTE769.fromNode = "StandTimer";
ROUTE769.fromField = "fraction_changed";
ROUTE769.toNode = "Stand_whole_body_RotationInterpolator";
ROUTE769.toField = "set_fraction";
browser.currentScene.children[139] = ROUTE769;

let ROUTE770 = browser.currentScene.createNode("ROUTE");
ROUTE770.fromNode = "StandTimer";
ROUTE770.fromField = "fraction_changed";
ROUTE770.toNode = "Stand_whole_body_TranslationInterpolator";
ROUTE770.toField = "set_fraction";
browser.currentScene.children[140] = ROUTE770;

let ROUTE771 = browser.currentScene.createNode("ROUTE");
ROUTE771.fromNode = "StandTimer";
ROUTE771.fromField = "fraction_changed";
ROUTE771.toNode = "Stand_l_sternoclavicular_RollInterpolator";
ROUTE771.toField = "set_fraction";
browser.currentScene.children[141] = ROUTE771;

let ROUTE772 = browser.currentScene.createNode("ROUTE");
ROUTE772.fromNode = "StandTimer";
ROUTE772.fromField = "fraction_changed";
ROUTE772.toNode = "Stand_l_acromioclavicular_RollInterpolator";
ROUTE772.toField = "set_fraction";
browser.currentScene.children[142] = ROUTE772;

let ROUTE773 = browser.currentScene.createNode("ROUTE");
ROUTE773.fromNode = "StandTimer";
ROUTE773.fromField = "fraction_changed";
ROUTE773.toNode = "Stand_r_sternoclavicular_RollInterpolator";
ROUTE773.toField = "set_fraction";
browser.currentScene.children[143] = ROUTE773;

let ROUTE774 = browser.currentScene.createNode("ROUTE");
ROUTE774.fromNode = "StandTimer";
ROUTE774.fromField = "fraction_changed";
ROUTE774.toNode = "Stand_r_acromioclavicular_RollInterpolator";
ROUTE774.toField = "set_fraction";
browser.currentScene.children[144] = ROUTE774;

let ROUTE775 = browser.currentScene.createNode("ROUTE");
ROUTE775.fromNode = "StandTimer";
ROUTE775.fromField = "fraction_changed";
ROUTE775.toNode = "Stand_r_metatarsal_PitchInterpolator";
ROUTE775.toField = "set_fraction";
browser.currentScene.children[145] = ROUTE775;

let ROUTE776 = browser.currentScene.createNode("ROUTE");
ROUTE776.fromNode = "StandTimer";
ROUTE776.fromField = "fraction_changed";
ROUTE776.toNode = "Stand_sacroiliac_YawInterpolator";
ROUTE776.toField = "set_fraction";
browser.currentScene.children[146] = ROUTE776;

let ROUTE777 = browser.currentScene.createNode("ROUTE");
ROUTE777.fromNode = "StandTimer";
ROUTE777.fromField = "fraction_changed";
ROUTE777.toNode = "Stand_vl5_YawInterpolator";
ROUTE777.toField = "set_fraction";
browser.currentScene.children[147] = ROUTE777;

let ROUTE778 = browser.currentScene.createNode("ROUTE");
ROUTE778.fromNode = "StandTimer";
ROUTE778.fromField = "fraction_changed";
ROUTE778.toNode = "Stand_vc6_YawInterpolator";
ROUTE778.toField = "set_fraction";
browser.currentScene.children[148] = ROUTE778;

let ROUTE779 = browser.currentScene.createNode("ROUTE");
ROUTE779.fromNode = "StandTimer";
ROUTE779.fromField = "fraction_changed";
ROUTE779.toNode = "Stand_l_thumb1_PitchInterpolator";
ROUTE779.toField = "set_fraction";
browser.currentScene.children[149] = ROUTE779;

let ROUTE780 = browser.currentScene.createNode("ROUTE");
ROUTE780.fromNode = "StandTimer";
ROUTE780.fromField = "fraction_changed";
ROUTE780.toNode = "Stand_r_thumb1_PitchInterpolator";
ROUTE780.toField = "set_fraction";
browser.currentScene.children[150] = ROUTE780;

let ROUTE781 = browser.currentScene.createNode("ROUTE");
ROUTE781.fromNode = "StandTimer";
ROUTE781.fromField = "fraction_changed";
ROUTE781.toNode = "Stand_r_index1_RollInterpolator";
ROUTE781.toField = "set_fraction";
browser.currentScene.children[151] = ROUTE781;

let ROUTE782 = browser.currentScene.createNode("ROUTE");
ROUTE782.fromNode = "StandTimer";
ROUTE782.fromField = "fraction_changed";
ROUTE782.toNode = "Stand_r_index2_RollInterpolator";
ROUTE782.toField = "set_fraction";
browser.currentScene.children[152] = ROUTE782;

let ROUTE783 = browser.currentScene.createNode("ROUTE");
ROUTE783.fromNode = "StandTimer";
ROUTE783.fromField = "fraction_changed";
ROUTE783.toNode = "Stand_r_index3_RollInterpolator";
ROUTE783.toField = "set_fraction";
browser.currentScene.children[153] = ROUTE783;

let ROUTE784 = browser.currentScene.createNode("ROUTE");
ROUTE784.fromNode = "Stand_r_ankle_RotationInterpolator";
ROUTE784.fromField = "value_changed";
ROUTE784.toNode = "boxman_r_ankle";
ROUTE784.toField = "set_rotation";
browser.currentScene.children[154] = ROUTE784;

let ROUTE785 = browser.currentScene.createNode("ROUTE");
ROUTE785.fromNode = "Stand_r_knee_RotationInterpolator";
ROUTE785.fromField = "value_changed";
ROUTE785.toNode = "boxman_r_knee";
ROUTE785.toField = "set_rotation";
browser.currentScene.children[155] = ROUTE785;

let ROUTE786 = browser.currentScene.createNode("ROUTE");
ROUTE786.fromNode = "Stand_r_hip_RotationInterpolator";
ROUTE786.fromField = "value_changed";
ROUTE786.toNode = "boxman_r_hip";
ROUTE786.toField = "set_rotation";
browser.currentScene.children[156] = ROUTE786;

let ROUTE787 = browser.currentScene.createNode("ROUTE");
ROUTE787.fromNode = "Stand_l_ankle_RotationInterpolator";
ROUTE787.fromField = "value_changed";
ROUTE787.toNode = "boxman_l_ankle";
ROUTE787.toField = "set_rotation";
browser.currentScene.children[157] = ROUTE787;

let ROUTE788 = browser.currentScene.createNode("ROUTE");
ROUTE788.fromNode = "Stand_l_knee_RotationInterpolator";
ROUTE788.fromField = "value_changed";
ROUTE788.toNode = "boxman_l_knee";
ROUTE788.toField = "set_rotation";
browser.currentScene.children[158] = ROUTE788;

let ROUTE789 = browser.currentScene.createNode("ROUTE");
ROUTE789.fromNode = "Stand_l_hip_RotationInterpolator";
ROUTE789.fromField = "value_changed";
ROUTE789.toNode = "boxman_l_hip";
ROUTE789.toField = "set_rotation";
browser.currentScene.children[159] = ROUTE789;

let ROUTE790 = browser.currentScene.createNode("ROUTE");
ROUTE790.fromNode = "Stand_r_wrist_RotationInterpolator";
ROUTE790.fromField = "value_changed";
ROUTE790.toNode = "boxman_r_wrist";
ROUTE790.toField = "set_rotation";
browser.currentScene.children[160] = ROUTE790;

let ROUTE791 = browser.currentScene.createNode("ROUTE");
ROUTE791.fromNode = "Stand_r_elbow_RotationInterpolator";
ROUTE791.fromField = "value_changed";
ROUTE791.toNode = "boxman_r_elbow";
ROUTE791.toField = "set_rotation";
browser.currentScene.children[161] = ROUTE791;

let ROUTE792 = browser.currentScene.createNode("ROUTE");
ROUTE792.fromNode = "Stand_r_shoulder_RotationInterpolator";
ROUTE792.fromField = "value_changed";
ROUTE792.toNode = "boxman_r_shoulder";
ROUTE792.toField = "set_rotation";
browser.currentScene.children[162] = ROUTE792;

let ROUTE793 = browser.currentScene.createNode("ROUTE");
ROUTE793.fromNode = "Stand_l_wrist_RotationInterpolator";
ROUTE793.fromField = "value_changed";
ROUTE793.toNode = "boxman_l_wrist";
ROUTE793.toField = "set_rotation";
browser.currentScene.children[163] = ROUTE793;

let ROUTE794 = browser.currentScene.createNode("ROUTE");
ROUTE794.fromNode = "Stand_l_elbow_RotationInterpolator";
ROUTE794.fromField = "value_changed";
ROUTE794.toNode = "boxman_l_elbow";
ROUTE794.toField = "set_rotation";
browser.currentScene.children[164] = ROUTE794;

let ROUTE795 = browser.currentScene.createNode("ROUTE");
ROUTE795.fromNode = "Stand_l_shoulder_RotationInterpolator";
ROUTE795.fromField = "value_changed";
ROUTE795.toNode = "boxman_l_shoulder";
ROUTE795.toField = "set_rotation";
browser.currentScene.children[165] = ROUTE795;

let ROUTE796 = browser.currentScene.createNode("ROUTE");
ROUTE796.fromNode = "Stand_head_RotationInterpolator";
ROUTE796.fromField = "value_changed";
ROUTE796.toNode = "boxman_skullbase";
ROUTE796.toField = "set_rotation";
browser.currentScene.children[166] = ROUTE796;

let ROUTE797 = browser.currentScene.createNode("ROUTE");
ROUTE797.fromNode = "Stand_whole_body_RotationInterpolator";
ROUTE797.fromField = "value_changed";
ROUTE797.toNode = "boxman_humanoid_root";
ROUTE797.toField = "set_rotation";
browser.currentScene.children[167] = ROUTE797;

let ROUTE798 = browser.currentScene.createNode("ROUTE");
ROUTE798.fromNode = "Stand_whole_body_TranslationInterpolator";
ROUTE798.fromField = "value_changed";
ROUTE798.toNode = "boxman_humanoid_root";
ROUTE798.toField = "set_translation";
browser.currentScene.children[168] = ROUTE798;

let ROUTE799 = browser.currentScene.createNode("ROUTE");
ROUTE799.fromNode = "Stand_vl5_YawInterpolator";
ROUTE799.fromField = "value_changed";
ROUTE799.toNode = "boxman_vl5";
ROUTE799.toField = "set_rotation";
browser.currentScene.children[169] = ROUTE799;

let ROUTE800 = browser.currentScene.createNode("ROUTE");
ROUTE800.fromNode = "PitchTimer";
ROUTE800.fromField = "fraction_changed";
ROUTE800.toNode = "Pitches_r_ankle_RotationInterpolator";
ROUTE800.toField = "set_fraction";
browser.currentScene.children[170] = ROUTE800;

let ROUTE801 = browser.currentScene.createNode("ROUTE");
ROUTE801.fromNode = "PitchTimer";
ROUTE801.fromField = "fraction_changed";
ROUTE801.toNode = "Pitches_r_knee_RotationInterpolator";
ROUTE801.toField = "set_fraction";
browser.currentScene.children[171] = ROUTE801;

let ROUTE802 = browser.currentScene.createNode("ROUTE");
ROUTE802.fromNode = "PitchTimer";
ROUTE802.fromField = "fraction_changed";
ROUTE802.toNode = "Pitches_r_hip_RotationInterpolator";
ROUTE802.toField = "set_fraction";
browser.currentScene.children[172] = ROUTE802;

let ROUTE803 = browser.currentScene.createNode("ROUTE");
ROUTE803.fromNode = "PitchTimer";
ROUTE803.fromField = "fraction_changed";
ROUTE803.toNode = "Pitches_l_ankle_RotationInterpolator";
ROUTE803.toField = "set_fraction";
browser.currentScene.children[173] = ROUTE803;

let ROUTE804 = browser.currentScene.createNode("ROUTE");
ROUTE804.fromNode = "PitchTimer";
ROUTE804.fromField = "fraction_changed";
ROUTE804.toNode = "Pitches_l_knee_RotationInterpolator";
ROUTE804.toField = "set_fraction";
browser.currentScene.children[174] = ROUTE804;

let ROUTE805 = browser.currentScene.createNode("ROUTE");
ROUTE805.fromNode = "PitchTimer";
ROUTE805.fromField = "fraction_changed";
ROUTE805.toNode = "Pitches_l_hip_RotationInterpolator";
ROUTE805.toField = "set_fraction";
browser.currentScene.children[175] = ROUTE805;

let ROUTE806 = browser.currentScene.createNode("ROUTE");
ROUTE806.fromNode = "PitchTimer";
ROUTE806.fromField = "fraction_changed";
ROUTE806.toNode = "Pitches_lower_body_RotationInterpolator";
ROUTE806.toField = "set_fraction";
browser.currentScene.children[176] = ROUTE806;

let ROUTE807 = browser.currentScene.createNode("ROUTE");
ROUTE807.fromNode = "PitchTimer";
ROUTE807.fromField = "fraction_changed";
ROUTE807.toNode = "Pitches_r_wrist_RotationInterpolator";
ROUTE807.toField = "set_fraction";
browser.currentScene.children[177] = ROUTE807;

let ROUTE808 = browser.currentScene.createNode("ROUTE");
ROUTE808.fromNode = "PitchTimer";
ROUTE808.fromField = "fraction_changed";
ROUTE808.toNode = "Pitches_r_elbow_RotationInterpolator";
ROUTE808.toField = "set_fraction";
browser.currentScene.children[178] = ROUTE808;

let ROUTE809 = browser.currentScene.createNode("ROUTE");
ROUTE809.fromNode = "PitchTimer";
ROUTE809.fromField = "fraction_changed";
ROUTE809.toNode = "Pitches_r_shoulder_RotationInterpolator";
ROUTE809.toField = "set_fraction";
browser.currentScene.children[179] = ROUTE809;

let ROUTE810 = browser.currentScene.createNode("ROUTE");
ROUTE810.fromNode = "PitchTimer";
ROUTE810.fromField = "fraction_changed";
ROUTE810.toNode = "Pitches_l_wrist_RotationInterpolator";
ROUTE810.toField = "set_fraction";
browser.currentScene.children[180] = ROUTE810;

let ROUTE811 = browser.currentScene.createNode("ROUTE");
ROUTE811.fromNode = "PitchTimer";
ROUTE811.fromField = "fraction_changed";
ROUTE811.toNode = "Pitches_l_elbow_RotationInterpolator";
ROUTE811.toField = "set_fraction";
browser.currentScene.children[181] = ROUTE811;

let ROUTE812 = browser.currentScene.createNode("ROUTE");
ROUTE812.fromNode = "PitchTimer";
ROUTE812.fromField = "fraction_changed";
ROUTE812.toNode = "Pitches_l_shoulder_RotationInterpolator";
ROUTE812.toField = "set_fraction";
browser.currentScene.children[182] = ROUTE812;

let ROUTE813 = browser.currentScene.createNode("ROUTE");
ROUTE813.fromNode = "PitchTimer";
ROUTE813.fromField = "fraction_changed";
ROUTE813.toNode = "Pitches_head_RotationInterpolator";
ROUTE813.toField = "set_fraction";
browser.currentScene.children[183] = ROUTE813;

let ROUTE814 = browser.currentScene.createNode("ROUTE");
ROUTE814.fromNode = "PitchTimer";
ROUTE814.fromField = "fraction_changed";
ROUTE814.toNode = "Pitches_neck_RotationInterpolator";
ROUTE814.toField = "set_fraction";
browser.currentScene.children[184] = ROUTE814;

let ROUTE815 = browser.currentScene.createNode("ROUTE");
ROUTE815.fromNode = "PitchTimer";
ROUTE815.fromField = "fraction_changed";
ROUTE815.toNode = "Pitches_upper_body_RotationInterpolator";
ROUTE815.toField = "set_fraction";
browser.currentScene.children[185] = ROUTE815;

let ROUTE816 = browser.currentScene.createNode("ROUTE");
ROUTE816.fromNode = "PitchTimer";
ROUTE816.fromField = "fraction_changed";
ROUTE816.toNode = "Pitches_whole_body_RotationInterpolator";
ROUTE816.toField = "set_fraction";
browser.currentScene.children[186] = ROUTE816;

let ROUTE817 = browser.currentScene.createNode("ROUTE");
ROUTE817.fromNode = "PitchTimer";
ROUTE817.fromField = "fraction_changed";
ROUTE817.toNode = "Pitches_whole_body_TranslationInterpolator";
ROUTE817.toField = "set_fraction";
browser.currentScene.children[187] = ROUTE817;

let ROUTE818 = browser.currentScene.createNode("ROUTE");
ROUTE818.fromNode = "PitchTimer";
ROUTE818.fromField = "fraction_changed";
ROUTE818.toNode = "Pitch_l_sternoclavicular_RollInterpolator";
ROUTE818.toField = "set_fraction";
browser.currentScene.children[188] = ROUTE818;

let ROUTE819 = browser.currentScene.createNode("ROUTE");
ROUTE819.fromNode = "PitchTimer";
ROUTE819.fromField = "fraction_changed";
ROUTE819.toNode = "Pitch_l_acromioclavicular_RollInterpolator";
ROUTE819.toField = "set_fraction";
browser.currentScene.children[189] = ROUTE819;

let ROUTE820 = browser.currentScene.createNode("ROUTE");
ROUTE820.fromNode = "PitchTimer";
ROUTE820.fromField = "fraction_changed";
ROUTE820.toNode = "Pitch_r_sternoclavicular_RollInterpolator";
ROUTE820.toField = "set_fraction";
browser.currentScene.children[190] = ROUTE820;

let ROUTE821 = browser.currentScene.createNode("ROUTE");
ROUTE821.fromNode = "PitchTimer";
ROUTE821.fromField = "fraction_changed";
ROUTE821.toNode = "Pitch_r_acromioclavicular_RollInterpolator";
ROUTE821.toField = "set_fraction";
browser.currentScene.children[191] = ROUTE821;

let ROUTE822 = browser.currentScene.createNode("ROUTE");
ROUTE822.fromNode = "PitchTimer";
ROUTE822.fromField = "fraction_changed";
ROUTE822.toNode = "Pitch_r_metatarsal_PitchInterpolator";
ROUTE822.toField = "set_fraction";
browser.currentScene.children[192] = ROUTE822;

let ROUTE823 = browser.currentScene.createNode("ROUTE");
ROUTE823.fromNode = "PitchTimer";
ROUTE823.fromField = "fraction_changed";
ROUTE823.toNode = "Pitch_sacroiliac_YawInterpolator";
ROUTE823.toField = "set_fraction";
browser.currentScene.children[193] = ROUTE823;

let ROUTE824 = browser.currentScene.createNode("ROUTE");
ROUTE824.fromNode = "PitchTimer";
ROUTE824.fromField = "fraction_changed";
ROUTE824.toNode = "Pitch_vl5_YawInterpolator";
ROUTE824.toField = "set_fraction";
browser.currentScene.children[194] = ROUTE824;

let ROUTE825 = browser.currentScene.createNode("ROUTE");
ROUTE825.fromNode = "PitchTimer";
ROUTE825.fromField = "fraction_changed";
ROUTE825.toNode = "Pitch_vc6_YawInterpolator";
ROUTE825.toField = "set_fraction";
browser.currentScene.children[195] = ROUTE825;

let ROUTE826 = browser.currentScene.createNode("ROUTE");
ROUTE826.fromNode = "PitchTimer";
ROUTE826.fromField = "fraction_changed";
ROUTE826.toNode = "Pitch_l_thumb1_PitchInterpolator";
ROUTE826.toField = "set_fraction";
browser.currentScene.children[196] = ROUTE826;

let ROUTE827 = browser.currentScene.createNode("ROUTE");
ROUTE827.fromNode = "PitchTimer";
ROUTE827.fromField = "fraction_changed";
ROUTE827.toNode = "Pitch_r_thumb1_PitchInterpolator";
ROUTE827.toField = "set_fraction";
browser.currentScene.children[197] = ROUTE827;

let ROUTE828 = browser.currentScene.createNode("ROUTE");
ROUTE828.fromNode = "Pitches_r_ankle_RotationInterpolator";
ROUTE828.fromField = "value_changed";
ROUTE828.toNode = "boxman_r_ankle";
ROUTE828.toField = "set_rotation";
browser.currentScene.children[198] = ROUTE828;

let ROUTE829 = browser.currentScene.createNode("ROUTE");
ROUTE829.fromNode = "Pitches_r_knee_RotationInterpolator";
ROUTE829.fromField = "value_changed";
ROUTE829.toNode = "boxman_r_knee";
ROUTE829.toField = "set_rotation";
browser.currentScene.children[199] = ROUTE829;

let ROUTE830 = browser.currentScene.createNode("ROUTE");
ROUTE830.fromNode = "Pitches_r_hip_RotationInterpolator";
ROUTE830.fromField = "value_changed";
ROUTE830.toNode = "boxman_r_hip";
ROUTE830.toField = "set_rotation";
browser.currentScene.children[200] = ROUTE830;

let ROUTE831 = browser.currentScene.createNode("ROUTE");
ROUTE831.fromNode = "Pitches_l_ankle_RotationInterpolator";
ROUTE831.fromField = "value_changed";
ROUTE831.toNode = "boxman_l_ankle";
ROUTE831.toField = "set_rotation";
browser.currentScene.children[201] = ROUTE831;

let ROUTE832 = browser.currentScene.createNode("ROUTE");
ROUTE832.fromNode = "Pitches_l_knee_RotationInterpolator";
ROUTE832.fromField = "value_changed";
ROUTE832.toNode = "boxman_l_knee";
ROUTE832.toField = "set_rotation";
browser.currentScene.children[202] = ROUTE832;

let ROUTE833 = browser.currentScene.createNode("ROUTE");
ROUTE833.fromNode = "Pitches_l_hip_RotationInterpolator";
ROUTE833.fromField = "value_changed";
ROUTE833.toNode = "boxman_l_hip";
ROUTE833.toField = "set_rotation";
browser.currentScene.children[203] = ROUTE833;

let ROUTE834 = browser.currentScene.createNode("ROUTE");
ROUTE834.fromNode = "Pitches_r_wrist_RotationInterpolator";
ROUTE834.fromField = "value_changed";
ROUTE834.toNode = "boxman_r_wrist";
ROUTE834.toField = "set_rotation";
browser.currentScene.children[204] = ROUTE834;

let ROUTE835 = browser.currentScene.createNode("ROUTE");
ROUTE835.fromNode = "Pitches_r_elbow_RotationInterpolator";
ROUTE835.fromField = "value_changed";
ROUTE835.toNode = "boxman_r_elbow";
ROUTE835.toField = "set_rotation";
browser.currentScene.children[205] = ROUTE835;

let ROUTE836 = browser.currentScene.createNode("ROUTE");
ROUTE836.fromNode = "Pitches_r_shoulder_RotationInterpolator";
ROUTE836.fromField = "value_changed";
ROUTE836.toNode = "boxman_r_shoulder";
ROUTE836.toField = "set_rotation";
browser.currentScene.children[206] = ROUTE836;

let ROUTE837 = browser.currentScene.createNode("ROUTE");
ROUTE837.fromNode = "Pitches_l_wrist_RotationInterpolator";
ROUTE837.fromField = "value_changed";
ROUTE837.toNode = "boxman_l_wrist";
ROUTE837.toField = "set_rotation";
browser.currentScene.children[207] = ROUTE837;

let ROUTE838 = browser.currentScene.createNode("ROUTE");
ROUTE838.fromNode = "Pitches_l_elbow_RotationInterpolator";
ROUTE838.fromField = "value_changed";
ROUTE838.toNode = "boxman_l_elbow";
ROUTE838.toField = "set_rotation";
browser.currentScene.children[208] = ROUTE838;

let ROUTE839 = browser.currentScene.createNode("ROUTE");
ROUTE839.fromNode = "Pitches_l_shoulder_RotationInterpolator";
ROUTE839.fromField = "value_changed";
ROUTE839.toNode = "boxman_l_shoulder";
ROUTE839.toField = "set_rotation";
browser.currentScene.children[209] = ROUTE839;

let ROUTE840 = browser.currentScene.createNode("ROUTE");
ROUTE840.fromNode = "Pitches_head_RotationInterpolator";
ROUTE840.fromField = "value_changed";
ROUTE840.toNode = "boxman_skullbase";
ROUTE840.toField = "set_rotation";
browser.currentScene.children[210] = ROUTE840;

let ROUTE841 = browser.currentScene.createNode("ROUTE");
ROUTE841.fromNode = "Pitches_whole_body_RotationInterpolator";
ROUTE841.fromField = "value_changed";
ROUTE841.toNode = "boxman_humanoid_root";
ROUTE841.toField = "set_rotation";
browser.currentScene.children[211] = ROUTE841;

let ROUTE842 = browser.currentScene.createNode("ROUTE");
ROUTE842.fromNode = "Pitches_whole_body_TranslationInterpolator";
ROUTE842.fromField = "value_changed";
ROUTE842.toNode = "boxman_humanoid_root";
ROUTE842.toField = "set_translation";
browser.currentScene.children[212] = ROUTE842;

let ROUTE843 = browser.currentScene.createNode("ROUTE");
ROUTE843.fromNode = "Pitch_vl5_YawInterpolator";
ROUTE843.fromField = "value_changed";
ROUTE843.toNode = "boxman_vl5";
ROUTE843.toField = "set_rotation";
browser.currentScene.children[213] = ROUTE843;

let ROUTE844 = browser.currentScene.createNode("ROUTE");
ROUTE844.fromNode = "YawTimer";
ROUTE844.fromField = "fraction_changed";
ROUTE844.toNode = "Yaws_r_ankle_RotationInterpolator";
ROUTE844.toField = "set_fraction";
browser.currentScene.children[214] = ROUTE844;

let ROUTE845 = browser.currentScene.createNode("ROUTE");
ROUTE845.fromNode = "YawTimer";
ROUTE845.fromField = "fraction_changed";
ROUTE845.toNode = "Yaws_r_knee_RotationInterpolator";
ROUTE845.toField = "set_fraction";
browser.currentScene.children[215] = ROUTE845;

let ROUTE846 = browser.currentScene.createNode("ROUTE");
ROUTE846.fromNode = "YawTimer";
ROUTE846.fromField = "fraction_changed";
ROUTE846.toNode = "Yaws_r_hip_RotationInterpolator";
ROUTE846.toField = "set_fraction";
browser.currentScene.children[216] = ROUTE846;

let ROUTE847 = browser.currentScene.createNode("ROUTE");
ROUTE847.fromNode = "YawTimer";
ROUTE847.fromField = "fraction_changed";
ROUTE847.toNode = "Yaws_l_ankle_RotationInterpolator";
ROUTE847.toField = "set_fraction";
browser.currentScene.children[217] = ROUTE847;

let ROUTE848 = browser.currentScene.createNode("ROUTE");
ROUTE848.fromNode = "YawTimer";
ROUTE848.fromField = "fraction_changed";
ROUTE848.toNode = "Yaws_l_knee_RotationInterpolator";
ROUTE848.toField = "set_fraction";
browser.currentScene.children[218] = ROUTE848;

let ROUTE849 = browser.currentScene.createNode("ROUTE");
ROUTE849.fromNode = "YawTimer";
ROUTE849.fromField = "fraction_changed";
ROUTE849.toNode = "Yaws_l_hip_RotationInterpolator";
ROUTE849.toField = "set_fraction";
browser.currentScene.children[219] = ROUTE849;

let ROUTE850 = browser.currentScene.createNode("ROUTE");
ROUTE850.fromNode = "YawTimer";
ROUTE850.fromField = "fraction_changed";
ROUTE850.toNode = "Yaws_lower_body_RotationInterpolator";
ROUTE850.toField = "set_fraction";
browser.currentScene.children[220] = ROUTE850;

let ROUTE851 = browser.currentScene.createNode("ROUTE");
ROUTE851.fromNode = "YawTimer";
ROUTE851.fromField = "fraction_changed";
ROUTE851.toNode = "Yaws_r_wrist_RotationInterpolator";
ROUTE851.toField = "set_fraction";
browser.currentScene.children[221] = ROUTE851;

let ROUTE852 = browser.currentScene.createNode("ROUTE");
ROUTE852.fromNode = "YawTimer";
ROUTE852.fromField = "fraction_changed";
ROUTE852.toNode = "Yaws_r_elbow_RotationInterpolator";
ROUTE852.toField = "set_fraction";
browser.currentScene.children[222] = ROUTE852;

let ROUTE853 = browser.currentScene.createNode("ROUTE");
ROUTE853.fromNode = "YawTimer";
ROUTE853.fromField = "fraction_changed";
ROUTE853.toNode = "Yaws_r_shoulder_RotationInterpolator";
ROUTE853.toField = "set_fraction";
browser.currentScene.children[223] = ROUTE853;

let ROUTE854 = browser.currentScene.createNode("ROUTE");
ROUTE854.fromNode = "YawTimer";
ROUTE854.fromField = "fraction_changed";
ROUTE854.toNode = "Yaws_l_wrist_RotationInterpolator";
ROUTE854.toField = "set_fraction";
browser.currentScene.children[224] = ROUTE854;

let ROUTE855 = browser.currentScene.createNode("ROUTE");
ROUTE855.fromNode = "YawTimer";
ROUTE855.fromField = "fraction_changed";
ROUTE855.toNode = "Yaws_l_elbow_RotationInterpolator";
ROUTE855.toField = "set_fraction";
browser.currentScene.children[225] = ROUTE855;

let ROUTE856 = browser.currentScene.createNode("ROUTE");
ROUTE856.fromNode = "YawTimer";
ROUTE856.fromField = "fraction_changed";
ROUTE856.toNode = "Yaws_l_shoulder_RotationInterpolator";
ROUTE856.toField = "set_fraction";
browser.currentScene.children[226] = ROUTE856;

let ROUTE857 = browser.currentScene.createNode("ROUTE");
ROUTE857.fromNode = "YawTimer";
ROUTE857.fromField = "fraction_changed";
ROUTE857.toNode = "Yaws_head_RotationInterpolator";
ROUTE857.toField = "set_fraction";
browser.currentScene.children[227] = ROUTE857;

let ROUTE858 = browser.currentScene.createNode("ROUTE");
ROUTE858.fromNode = "YawTimer";
ROUTE858.fromField = "fraction_changed";
ROUTE858.toNode = "Yaws_neck_RotationInterpolator";
ROUTE858.toField = "set_fraction";
browser.currentScene.children[228] = ROUTE858;

let ROUTE859 = browser.currentScene.createNode("ROUTE");
ROUTE859.fromNode = "YawTimer";
ROUTE859.fromField = "fraction_changed";
ROUTE859.toNode = "Yaws_upper_body_RotationInterpolator";
ROUTE859.toField = "set_fraction";
browser.currentScene.children[229] = ROUTE859;

let ROUTE860 = browser.currentScene.createNode("ROUTE");
ROUTE860.fromNode = "YawTimer";
ROUTE860.fromField = "fraction_changed";
ROUTE860.toNode = "Yaws_whole_body_RotationInterpolator";
ROUTE860.toField = "set_fraction";
browser.currentScene.children[230] = ROUTE860;

let ROUTE861 = browser.currentScene.createNode("ROUTE");
ROUTE861.fromNode = "YawTimer";
ROUTE861.fromField = "fraction_changed";
ROUTE861.toNode = "Yaws_whole_body_TranslationInterpolator";
ROUTE861.toField = "set_fraction";
browser.currentScene.children[231] = ROUTE861;

let ROUTE862 = browser.currentScene.createNode("ROUTE");
ROUTE862.fromNode = "YawTimer";
ROUTE862.fromField = "fraction_changed";
ROUTE862.toNode = "Yaw_l_sternoclavicular_RollInterpolator";
ROUTE862.toField = "set_fraction";
browser.currentScene.children[232] = ROUTE862;

let ROUTE863 = browser.currentScene.createNode("ROUTE");
ROUTE863.fromNode = "YawTimer";
ROUTE863.fromField = "fraction_changed";
ROUTE863.toNode = "Yaw_l_acromioclavicular_RollInterpolator";
ROUTE863.toField = "set_fraction";
browser.currentScene.children[233] = ROUTE863;

let ROUTE864 = browser.currentScene.createNode("ROUTE");
ROUTE864.fromNode = "YawTimer";
ROUTE864.fromField = "fraction_changed";
ROUTE864.toNode = "Yaw_r_sternoclavicular_RollInterpolator";
ROUTE864.toField = "set_fraction";
browser.currentScene.children[234] = ROUTE864;

let ROUTE865 = browser.currentScene.createNode("ROUTE");
ROUTE865.fromNode = "YawTimer";
ROUTE865.fromField = "fraction_changed";
ROUTE865.toNode = "Yaw_r_acromioclavicular_RollInterpolator";
ROUTE865.toField = "set_fraction";
browser.currentScene.children[235] = ROUTE865;

let ROUTE866 = browser.currentScene.createNode("ROUTE");
ROUTE866.fromNode = "YawTimer";
ROUTE866.fromField = "fraction_changed";
ROUTE866.toNode = "Yaw_r_metatarsal_PitchInterpolator";
ROUTE866.toField = "set_fraction";
browser.currentScene.children[236] = ROUTE866;

let ROUTE867 = browser.currentScene.createNode("ROUTE");
ROUTE867.fromNode = "YawTimer";
ROUTE867.fromField = "fraction_changed";
ROUTE867.toNode = "Yaw_sacroiliac_YawInterpolator";
ROUTE867.toField = "set_fraction";
browser.currentScene.children[237] = ROUTE867;

let ROUTE868 = browser.currentScene.createNode("ROUTE");
ROUTE868.fromNode = "YawTimer";
ROUTE868.fromField = "fraction_changed";
ROUTE868.toNode = "Yaw_vl5_YawInterpolator";
ROUTE868.toField = "set_fraction";
browser.currentScene.children[238] = ROUTE868;

let ROUTE869 = browser.currentScene.createNode("ROUTE");
ROUTE869.fromNode = "YawTimer";
ROUTE869.fromField = "fraction_changed";
ROUTE869.toNode = "Yaw_vc6_YawInterpolator";
ROUTE869.toField = "set_fraction";
browser.currentScene.children[239] = ROUTE869;

let ROUTE870 = browser.currentScene.createNode("ROUTE");
ROUTE870.fromNode = "YawTimer";
ROUTE870.fromField = "fraction_changed";
ROUTE870.toNode = "Yaw_l_thumb1_PitchInterpolator";
ROUTE870.toField = "set_fraction";
browser.currentScene.children[240] = ROUTE870;

let ROUTE871 = browser.currentScene.createNode("ROUTE");
ROUTE871.fromNode = "YawTimer";
ROUTE871.fromField = "fraction_changed";
ROUTE871.toNode = "Yaw_r_thumb1_PitchInterpolator";
ROUTE871.toField = "set_fraction";
browser.currentScene.children[241] = ROUTE871;

let ROUTE872 = browser.currentScene.createNode("ROUTE");
ROUTE872.fromNode = "Yaws_r_ankle_RotationInterpolator";
ROUTE872.fromField = "value_changed";
ROUTE872.toNode = "boxman_r_ankle";
ROUTE872.toField = "set_rotation";
browser.currentScene.children[242] = ROUTE872;

let ROUTE873 = browser.currentScene.createNode("ROUTE");
ROUTE873.fromNode = "Yaws_r_knee_RotationInterpolator";
ROUTE873.fromField = "value_changed";
ROUTE873.toNode = "boxman_r_knee";
ROUTE873.toField = "set_rotation";
browser.currentScene.children[243] = ROUTE873;

let ROUTE874 = browser.currentScene.createNode("ROUTE");
ROUTE874.fromNode = "Yaws_r_hip_RotationInterpolator";
ROUTE874.fromField = "value_changed";
ROUTE874.toNode = "boxman_r_hip";
ROUTE874.toField = "set_rotation";
browser.currentScene.children[244] = ROUTE874;

let ROUTE875 = browser.currentScene.createNode("ROUTE");
ROUTE875.fromNode = "Yaws_l_ankle_RotationInterpolator";
ROUTE875.fromField = "value_changed";
ROUTE875.toNode = "boxman_l_ankle";
ROUTE875.toField = "set_rotation";
browser.currentScene.children[245] = ROUTE875;

let ROUTE876 = browser.currentScene.createNode("ROUTE");
ROUTE876.fromNode = "Yaws_l_knee_RotationInterpolator";
ROUTE876.fromField = "value_changed";
ROUTE876.toNode = "boxman_l_knee";
ROUTE876.toField = "set_rotation";
browser.currentScene.children[246] = ROUTE876;

let ROUTE877 = browser.currentScene.createNode("ROUTE");
ROUTE877.fromNode = "Yaws_l_hip_RotationInterpolator";
ROUTE877.fromField = "value_changed";
ROUTE877.toNode = "boxman_l_hip";
ROUTE877.toField = "set_rotation";
browser.currentScene.children[247] = ROUTE877;

let ROUTE878 = browser.currentScene.createNode("ROUTE");
ROUTE878.fromNode = "Yaws_r_wrist_RotationInterpolator";
ROUTE878.fromField = "value_changed";
ROUTE878.toNode = "boxman_r_wrist";
ROUTE878.toField = "set_rotation";
browser.currentScene.children[248] = ROUTE878;

let ROUTE879 = browser.currentScene.createNode("ROUTE");
ROUTE879.fromNode = "Yaws_r_elbow_RotationInterpolator";
ROUTE879.fromField = "value_changed";
ROUTE879.toNode = "boxman_r_elbow";
ROUTE879.toField = "set_rotation";
browser.currentScene.children[249] = ROUTE879;

let ROUTE880 = browser.currentScene.createNode("ROUTE");
ROUTE880.fromNode = "Yaws_r_shoulder_RotationInterpolator";
ROUTE880.fromField = "value_changed";
ROUTE880.toNode = "boxman_r_shoulder";
ROUTE880.toField = "set_rotation";
browser.currentScene.children[250] = ROUTE880;

let ROUTE881 = browser.currentScene.createNode("ROUTE");
ROUTE881.fromNode = "Yaws_l_wrist_RotationInterpolator";
ROUTE881.fromField = "value_changed";
ROUTE881.toNode = "boxman_l_wrist";
ROUTE881.toField = "set_rotation";
browser.currentScene.children[251] = ROUTE881;

let ROUTE882 = browser.currentScene.createNode("ROUTE");
ROUTE882.fromNode = "Yaws_l_elbow_RotationInterpolator";
ROUTE882.fromField = "value_changed";
ROUTE882.toNode = "boxman_l_elbow";
ROUTE882.toField = "set_rotation";
browser.currentScene.children[252] = ROUTE882;

let ROUTE883 = browser.currentScene.createNode("ROUTE");
ROUTE883.fromNode = "Yaws_l_shoulder_RotationInterpolator";
ROUTE883.fromField = "value_changed";
ROUTE883.toNode = "boxman_l_shoulder";
ROUTE883.toField = "set_rotation";
browser.currentScene.children[253] = ROUTE883;

let ROUTE884 = browser.currentScene.createNode("ROUTE");
ROUTE884.fromNode = "Yaws_head_RotationInterpolator";
ROUTE884.fromField = "value_changed";
ROUTE884.toNode = "boxman_skullbase";
ROUTE884.toField = "set_rotation";
browser.currentScene.children[254] = ROUTE884;

let ROUTE885 = browser.currentScene.createNode("ROUTE");
ROUTE885.fromNode = "Yaws_whole_body_RotationInterpolator";
ROUTE885.fromField = "value_changed";
ROUTE885.toNode = "boxman_humanoid_root";
ROUTE885.toField = "set_rotation";
browser.currentScene.children[255] = ROUTE885;

let ROUTE886 = browser.currentScene.createNode("ROUTE");
ROUTE886.fromNode = "Yaws_whole_body_TranslationInterpolator";
ROUTE886.fromField = "value_changed";
ROUTE886.toNode = "boxman_humanoid_root";
ROUTE886.toField = "set_translation";
browser.currentScene.children[256] = ROUTE886;

let ROUTE887 = browser.currentScene.createNode("ROUTE");
ROUTE887.fromNode = "Yaw_vl5_YawInterpolator";
ROUTE887.fromField = "value_changed";
ROUTE887.toNode = "boxman_vl5";
ROUTE887.toField = "set_rotation";
browser.currentScene.children[257] = ROUTE887;

let ROUTE888 = browser.currentScene.createNode("ROUTE");
ROUTE888.fromNode = "RollTimer";
ROUTE888.fromField = "fraction_changed";
ROUTE888.toNode = "Rolls_r_ankle_RotationInterpolator";
ROUTE888.toField = "set_fraction";
browser.currentScene.children[258] = ROUTE888;

let ROUTE889 = browser.currentScene.createNode("ROUTE");
ROUTE889.fromNode = "RollTimer";
ROUTE889.fromField = "fraction_changed";
ROUTE889.toNode = "Rolls_r_knee_RotationInterpolator";
ROUTE889.toField = "set_fraction";
browser.currentScene.children[259] = ROUTE889;

let ROUTE890 = browser.currentScene.createNode("ROUTE");
ROUTE890.fromNode = "RollTimer";
ROUTE890.fromField = "fraction_changed";
ROUTE890.toNode = "Rolls_r_hip_RotationInterpolator";
ROUTE890.toField = "set_fraction";
browser.currentScene.children[260] = ROUTE890;

let ROUTE891 = browser.currentScene.createNode("ROUTE");
ROUTE891.fromNode = "RollTimer";
ROUTE891.fromField = "fraction_changed";
ROUTE891.toNode = "Rolls_l_ankle_RotationInterpolator";
ROUTE891.toField = "set_fraction";
browser.currentScene.children[261] = ROUTE891;

let ROUTE892 = browser.currentScene.createNode("ROUTE");
ROUTE892.fromNode = "RollTimer";
ROUTE892.fromField = "fraction_changed";
ROUTE892.toNode = "Rolls_l_knee_RotationInterpolator";
ROUTE892.toField = "set_fraction";
browser.currentScene.children[262] = ROUTE892;

let ROUTE893 = browser.currentScene.createNode("ROUTE");
ROUTE893.fromNode = "RollTimer";
ROUTE893.fromField = "fraction_changed";
ROUTE893.toNode = "Rolls_l_hip_RotationInterpolator";
ROUTE893.toField = "set_fraction";
browser.currentScene.children[263] = ROUTE893;

let ROUTE894 = browser.currentScene.createNode("ROUTE");
ROUTE894.fromNode = "RollTimer";
ROUTE894.fromField = "fraction_changed";
ROUTE894.toNode = "Rolls_lower_body_RotationInterpolator";
ROUTE894.toField = "set_fraction";
browser.currentScene.children[264] = ROUTE894;

let ROUTE895 = browser.currentScene.createNode("ROUTE");
ROUTE895.fromNode = "RollTimer";
ROUTE895.fromField = "fraction_changed";
ROUTE895.toNode = "Rolls_r_wrist_RotationInterpolator";
ROUTE895.toField = "set_fraction";
browser.currentScene.children[265] = ROUTE895;

let ROUTE896 = browser.currentScene.createNode("ROUTE");
ROUTE896.fromNode = "RollTimer";
ROUTE896.fromField = "fraction_changed";
ROUTE896.toNode = "Rolls_r_elbow_RotationInterpolator";
ROUTE896.toField = "set_fraction";
browser.currentScene.children[266] = ROUTE896;

let ROUTE897 = browser.currentScene.createNode("ROUTE");
ROUTE897.fromNode = "RollTimer";
ROUTE897.fromField = "fraction_changed";
ROUTE897.toNode = "Rolls_r_shoulder_RotationInterpolator";
ROUTE897.toField = "set_fraction";
browser.currentScene.children[267] = ROUTE897;

let ROUTE898 = browser.currentScene.createNode("ROUTE");
ROUTE898.fromNode = "RollTimer";
ROUTE898.fromField = "fraction_changed";
ROUTE898.toNode = "Rolls_l_wrist_RotationInterpolator";
ROUTE898.toField = "set_fraction";
browser.currentScene.children[268] = ROUTE898;

let ROUTE899 = browser.currentScene.createNode("ROUTE");
ROUTE899.fromNode = "RollTimer";
ROUTE899.fromField = "fraction_changed";
ROUTE899.toNode = "Rolls_l_elbow_RotationInterpolator";
ROUTE899.toField = "set_fraction";
browser.currentScene.children[269] = ROUTE899;

let ROUTE900 = browser.currentScene.createNode("ROUTE");
ROUTE900.fromNode = "RollTimer";
ROUTE900.fromField = "fraction_changed";
ROUTE900.toNode = "Rolls_l_shoulder_RotationInterpolator";
ROUTE900.toField = "set_fraction";
browser.currentScene.children[270] = ROUTE900;

let ROUTE901 = browser.currentScene.createNode("ROUTE");
ROUTE901.fromNode = "RollTimer";
ROUTE901.fromField = "fraction_changed";
ROUTE901.toNode = "Rolls_head_RotationInterpolator";
ROUTE901.toField = "set_fraction";
browser.currentScene.children[271] = ROUTE901;

let ROUTE902 = browser.currentScene.createNode("ROUTE");
ROUTE902.fromNode = "RollTimer";
ROUTE902.fromField = "fraction_changed";
ROUTE902.toNode = "Rolls_neck_RotationInterpolator";
ROUTE902.toField = "set_fraction";
browser.currentScene.children[272] = ROUTE902;

let ROUTE903 = browser.currentScene.createNode("ROUTE");
ROUTE903.fromNode = "RollTimer";
ROUTE903.fromField = "fraction_changed";
ROUTE903.toNode = "Rolls_upper_body_RotationInterpolator";
ROUTE903.toField = "set_fraction";
browser.currentScene.children[273] = ROUTE903;

let ROUTE904 = browser.currentScene.createNode("ROUTE");
ROUTE904.fromNode = "RollTimer";
ROUTE904.fromField = "fraction_changed";
ROUTE904.toNode = "Rolls_whole_body_RotationInterpolator";
ROUTE904.toField = "set_fraction";
browser.currentScene.children[274] = ROUTE904;

let ROUTE905 = browser.currentScene.createNode("ROUTE");
ROUTE905.fromNode = "RollTimer";
ROUTE905.fromField = "fraction_changed";
ROUTE905.toNode = "Rolls_whole_body_TranslationInterpolator";
ROUTE905.toField = "set_fraction";
browser.currentScene.children[275] = ROUTE905;

let ROUTE906 = browser.currentScene.createNode("ROUTE");
ROUTE906.fromNode = "RollTimer";
ROUTE906.fromField = "fraction_changed";
ROUTE906.toNode = "Roll_l_sternoclavicular_RollInterpolator";
ROUTE906.toField = "set_fraction";
browser.currentScene.children[276] = ROUTE906;

let ROUTE907 = browser.currentScene.createNode("ROUTE");
ROUTE907.fromNode = "RollTimer";
ROUTE907.fromField = "fraction_changed";
ROUTE907.toNode = "Roll_l_acromioclavicular_RollInterpolator";
ROUTE907.toField = "set_fraction";
browser.currentScene.children[277] = ROUTE907;

let ROUTE908 = browser.currentScene.createNode("ROUTE");
ROUTE908.fromNode = "RollTimer";
ROUTE908.fromField = "fraction_changed";
ROUTE908.toNode = "Roll_r_sternoclavicular_RollInterpolator";
ROUTE908.toField = "set_fraction";
browser.currentScene.children[278] = ROUTE908;

let ROUTE909 = browser.currentScene.createNode("ROUTE");
ROUTE909.fromNode = "RollTimer";
ROUTE909.fromField = "fraction_changed";
ROUTE909.toNode = "Roll_r_acromioclavicular_RollInterpolator";
ROUTE909.toField = "set_fraction";
browser.currentScene.children[279] = ROUTE909;

let ROUTE910 = browser.currentScene.createNode("ROUTE");
ROUTE910.fromNode = "RollTimer";
ROUTE910.fromField = "fraction_changed";
ROUTE910.toNode = "Roll_r_metatarsal_PitchInterpolator";
ROUTE910.toField = "set_fraction";
browser.currentScene.children[280] = ROUTE910;

let ROUTE911 = browser.currentScene.createNode("ROUTE");
ROUTE911.fromNode = "RollTimer";
ROUTE911.fromField = "fraction_changed";
ROUTE911.toNode = "Roll_sacroiliac_YawInterpolator";
ROUTE911.toField = "set_fraction";
browser.currentScene.children[281] = ROUTE911;

let ROUTE912 = browser.currentScene.createNode("ROUTE");
ROUTE912.fromNode = "RollTimer";
ROUTE912.fromField = "fraction_changed";
ROUTE912.toNode = "Roll_vl5_YawInterpolator";
ROUTE912.toField = "set_fraction";
browser.currentScene.children[282] = ROUTE912;

let ROUTE913 = browser.currentScene.createNode("ROUTE");
ROUTE913.fromNode = "RollTimer";
ROUTE913.fromField = "fraction_changed";
ROUTE913.toNode = "Roll_vc6_YawInterpolator";
ROUTE913.toField = "set_fraction";
browser.currentScene.children[283] = ROUTE913;

let ROUTE914 = browser.currentScene.createNode("ROUTE");
ROUTE914.fromNode = "RollTimer";
ROUTE914.fromField = "fraction_changed";
ROUTE914.toNode = "Roll_l_thumb1_PitchInterpolator";
ROUTE914.toField = "set_fraction";
browser.currentScene.children[284] = ROUTE914;

let ROUTE915 = browser.currentScene.createNode("ROUTE");
ROUTE915.fromNode = "RollTimer";
ROUTE915.fromField = "fraction_changed";
ROUTE915.toNode = "Roll_r_thumb1_PitchInterpolator";
ROUTE915.toField = "set_fraction";
browser.currentScene.children[285] = ROUTE915;

let ROUTE916 = browser.currentScene.createNode("ROUTE");
ROUTE916.fromNode = "Rolls_r_ankle_RotationInterpolator";
ROUTE916.fromField = "value_changed";
ROUTE916.toNode = "boxman_r_ankle";
ROUTE916.toField = "set_rotation";
browser.currentScene.children[286] = ROUTE916;

let ROUTE917 = browser.currentScene.createNode("ROUTE");
ROUTE917.fromNode = "Rolls_r_knee_RotationInterpolator";
ROUTE917.fromField = "value_changed";
ROUTE917.toNode = "boxman_r_knee";
ROUTE917.toField = "set_rotation";
browser.currentScene.children[287] = ROUTE917;

let ROUTE918 = browser.currentScene.createNode("ROUTE");
ROUTE918.fromNode = "Rolls_r_hip_RotationInterpolator";
ROUTE918.fromField = "value_changed";
ROUTE918.toNode = "boxman_r_hip";
ROUTE918.toField = "set_rotation";
browser.currentScene.children[288] = ROUTE918;

let ROUTE919 = browser.currentScene.createNode("ROUTE");
ROUTE919.fromNode = "Rolls_l_ankle_RotationInterpolator";
ROUTE919.fromField = "value_changed";
ROUTE919.toNode = "boxman_l_ankle";
ROUTE919.toField = "set_rotation";
browser.currentScene.children[289] = ROUTE919;

let ROUTE920 = browser.currentScene.createNode("ROUTE");
ROUTE920.fromNode = "Rolls_l_knee_RotationInterpolator";
ROUTE920.fromField = "value_changed";
ROUTE920.toNode = "boxman_l_knee";
ROUTE920.toField = "set_rotation";
browser.currentScene.children[290] = ROUTE920;

let ROUTE921 = browser.currentScene.createNode("ROUTE");
ROUTE921.fromNode = "Rolls_l_hip_RotationInterpolator";
ROUTE921.fromField = "value_changed";
ROUTE921.toNode = "boxman_l_hip";
ROUTE921.toField = "set_rotation";
browser.currentScene.children[291] = ROUTE921;

let ROUTE922 = browser.currentScene.createNode("ROUTE");
ROUTE922.fromNode = "Rolls_r_wrist_RotationInterpolator";
ROUTE922.fromField = "value_changed";
ROUTE922.toNode = "boxman_r_wrist";
ROUTE922.toField = "set_rotation";
browser.currentScene.children[292] = ROUTE922;

let ROUTE923 = browser.currentScene.createNode("ROUTE");
ROUTE923.fromNode = "Rolls_r_elbow_RotationInterpolator";
ROUTE923.fromField = "value_changed";
ROUTE923.toNode = "boxman_r_elbow";
ROUTE923.toField = "set_rotation";
browser.currentScene.children[293] = ROUTE923;

let ROUTE924 = browser.currentScene.createNode("ROUTE");
ROUTE924.fromNode = "Rolls_r_shoulder_RotationInterpolator";
ROUTE924.fromField = "value_changed";
ROUTE924.toNode = "boxman_r_shoulder";
ROUTE924.toField = "set_rotation";
browser.currentScene.children[294] = ROUTE924;

let ROUTE925 = browser.currentScene.createNode("ROUTE");
ROUTE925.fromNode = "Rolls_l_wrist_RotationInterpolator";
ROUTE925.fromField = "value_changed";
ROUTE925.toNode = "boxman_l_wrist";
ROUTE925.toField = "set_rotation";
browser.currentScene.children[295] = ROUTE925;

let ROUTE926 = browser.currentScene.createNode("ROUTE");
ROUTE926.fromNode = "Rolls_l_elbow_RotationInterpolator";
ROUTE926.fromField = "value_changed";
ROUTE926.toNode = "boxman_l_elbow";
ROUTE926.toField = "set_rotation";
browser.currentScene.children[296] = ROUTE926;

let ROUTE927 = browser.currentScene.createNode("ROUTE");
ROUTE927.fromNode = "Rolls_l_shoulder_RotationInterpolator";
ROUTE927.fromField = "value_changed";
ROUTE927.toNode = "boxman_l_shoulder";
ROUTE927.toField = "set_rotation";
browser.currentScene.children[297] = ROUTE927;

let ROUTE928 = browser.currentScene.createNode("ROUTE");
ROUTE928.fromNode = "Rolls_head_RotationInterpolator";
ROUTE928.fromField = "value_changed";
ROUTE928.toNode = "boxman_skullbase";
ROUTE928.toField = "set_rotation";
browser.currentScene.children[298] = ROUTE928;

let ROUTE929 = browser.currentScene.createNode("ROUTE");
ROUTE929.fromNode = "Rolls_whole_body_RotationInterpolator";
ROUTE929.fromField = "value_changed";
ROUTE929.toNode = "boxman_humanoid_root";
ROUTE929.toField = "set_rotation";
browser.currentScene.children[299] = ROUTE929;

let ROUTE930 = browser.currentScene.createNode("ROUTE");
ROUTE930.fromNode = "Rolls_whole_body_TranslationInterpolator";
ROUTE930.fromField = "value_changed";
ROUTE930.toNode = "boxman_humanoid_root";
ROUTE930.toField = "set_translation";
browser.currentScene.children[300] = ROUTE930;

let ROUTE931 = browser.currentScene.createNode("ROUTE");
ROUTE931.fromNode = "Roll_vl5_YawInterpolator";
ROUTE931.fromField = "value_changed";
ROUTE931.toNode = "boxman_vl5";
ROUTE931.toField = "set_rotation";
browser.currentScene.children[301] = ROUTE931;

let ROUTE932 = browser.currentScene.createNode("ROUTE");
ROUTE932.fromNode = "WalkTimer";
ROUTE932.fromField = "fraction_changed";
ROUTE932.toNode = "Walk_r_ankle_RotationInterpolator";
ROUTE932.toField = "set_fraction";
browser.currentScene.children[302] = ROUTE932;

let ROUTE933 = browser.currentScene.createNode("ROUTE");
ROUTE933.fromNode = "WalkTimer";
ROUTE933.fromField = "fraction_changed";
ROUTE933.toNode = "Walk_r_knee_RotationInterpolator";
ROUTE933.toField = "set_fraction";
browser.currentScene.children[303] = ROUTE933;

let ROUTE934 = browser.currentScene.createNode("ROUTE");
ROUTE934.fromNode = "WalkTimer";
ROUTE934.fromField = "fraction_changed";
ROUTE934.toNode = "Walk_r_hip_RotationInterpolator";
ROUTE934.toField = "set_fraction";
browser.currentScene.children[304] = ROUTE934;

let ROUTE935 = browser.currentScene.createNode("ROUTE");
ROUTE935.fromNode = "WalkTimer";
ROUTE935.fromField = "fraction_changed";
ROUTE935.toNode = "Walk_l_ankle_RotationInterpolator";
ROUTE935.toField = "set_fraction";
browser.currentScene.children[305] = ROUTE935;

let ROUTE936 = browser.currentScene.createNode("ROUTE");
ROUTE936.fromNode = "WalkTimer";
ROUTE936.fromField = "fraction_changed";
ROUTE936.toNode = "Walk_l_knee_RotationInterpolator";
ROUTE936.toField = "set_fraction";
browser.currentScene.children[306] = ROUTE936;

let ROUTE937 = browser.currentScene.createNode("ROUTE");
ROUTE937.fromNode = "WalkTimer";
ROUTE937.fromField = "fraction_changed";
ROUTE937.toNode = "Walk_l_hip_RotationInterpolator";
ROUTE937.toField = "set_fraction";
browser.currentScene.children[307] = ROUTE937;

let ROUTE938 = browser.currentScene.createNode("ROUTE");
ROUTE938.fromNode = "WalkTimer";
ROUTE938.fromField = "fraction_changed";
ROUTE938.toNode = "Walk_lower_body_RotationInterpolator";
ROUTE938.toField = "set_fraction";
browser.currentScene.children[308] = ROUTE938;

let ROUTE939 = browser.currentScene.createNode("ROUTE");
ROUTE939.fromNode = "WalkTimer";
ROUTE939.fromField = "fraction_changed";
ROUTE939.toNode = "Walk_r_wrist_RotationInterpolator";
ROUTE939.toField = "set_fraction";
browser.currentScene.children[309] = ROUTE939;

let ROUTE940 = browser.currentScene.createNode("ROUTE");
ROUTE940.fromNode = "WalkTimer";
ROUTE940.fromField = "fraction_changed";
ROUTE940.toNode = "Walk_r_elbow_RotationInterpolator";
ROUTE940.toField = "set_fraction";
browser.currentScene.children[310] = ROUTE940;

let ROUTE941 = browser.currentScene.createNode("ROUTE");
ROUTE941.fromNode = "WalkTimer";
ROUTE941.fromField = "fraction_changed";
ROUTE941.toNode = "Walk_r_shoulder_RotationInterpolator";
ROUTE941.toField = "set_fraction";
browser.currentScene.children[311] = ROUTE941;

let ROUTE942 = browser.currentScene.createNode("ROUTE");
ROUTE942.fromNode = "WalkTimer";
ROUTE942.fromField = "fraction_changed";
ROUTE942.toNode = "Walk_l_wrist_RotationInterpolator";
ROUTE942.toField = "set_fraction";
browser.currentScene.children[312] = ROUTE942;

let ROUTE943 = browser.currentScene.createNode("ROUTE");
ROUTE943.fromNode = "WalkTimer";
ROUTE943.fromField = "fraction_changed";
ROUTE943.toNode = "Walk_l_elbow_RotationInterpolator";
ROUTE943.toField = "set_fraction";
browser.currentScene.children[313] = ROUTE943;

let ROUTE944 = browser.currentScene.createNode("ROUTE");
ROUTE944.fromNode = "WalkTimer";
ROUTE944.fromField = "fraction_changed";
ROUTE944.toNode = "Walk_l_shoulder_RotationInterpolator";
ROUTE944.toField = "set_fraction";
browser.currentScene.children[314] = ROUTE944;

let ROUTE945 = browser.currentScene.createNode("ROUTE");
ROUTE945.fromNode = "WalkTimer";
ROUTE945.fromField = "fraction_changed";
ROUTE945.toNode = "Walk_head_RotationInterpolator";
ROUTE945.toField = "set_fraction";
browser.currentScene.children[315] = ROUTE945;

let ROUTE946 = browser.currentScene.createNode("ROUTE");
ROUTE946.fromNode = "WalkTimer";
ROUTE946.fromField = "fraction_changed";
ROUTE946.toNode = "Walk_neck_RotationInterpolator";
ROUTE946.toField = "set_fraction";
browser.currentScene.children[316] = ROUTE946;

let ROUTE947 = browser.currentScene.createNode("ROUTE");
ROUTE947.fromNode = "WalkTimer";
ROUTE947.fromField = "fraction_changed";
ROUTE947.toNode = "Walk_upper_body_RotationInterpolator";
ROUTE947.toField = "set_fraction";
browser.currentScene.children[317] = ROUTE947;

let ROUTE948 = browser.currentScene.createNode("ROUTE");
ROUTE948.fromNode = "WalkTimer";
ROUTE948.fromField = "fraction_changed";
ROUTE948.toNode = "Walk_whole_body_RotationInterpolator";
ROUTE948.toField = "set_fraction";
browser.currentScene.children[318] = ROUTE948;

let ROUTE949 = browser.currentScene.createNode("ROUTE");
ROUTE949.fromNode = "WalkTimer";
ROUTE949.fromField = "fraction_changed";
ROUTE949.toNode = "Walk_whole_body_TranslationInterpolator";
ROUTE949.toField = "set_fraction";
browser.currentScene.children[319] = ROUTE949;

let ROUTE950 = browser.currentScene.createNode("ROUTE");
ROUTE950.fromNode = "WalkTimer";
ROUTE950.fromField = "fraction_changed";
ROUTE950.toNode = "Walk_l_sternoclavicular_RollInterpolator";
ROUTE950.toField = "set_fraction";
browser.currentScene.children[320] = ROUTE950;

let ROUTE951 = browser.currentScene.createNode("ROUTE");
ROUTE951.fromNode = "WalkTimer";
ROUTE951.fromField = "fraction_changed";
ROUTE951.toNode = "Walk_l_acromioclavicular_RollInterpolator";
ROUTE951.toField = "set_fraction";
browser.currentScene.children[321] = ROUTE951;

let ROUTE952 = browser.currentScene.createNode("ROUTE");
ROUTE952.fromNode = "WalkTimer";
ROUTE952.fromField = "fraction_changed";
ROUTE952.toNode = "Walk_r_sternoclavicular_RollInterpolator";
ROUTE952.toField = "set_fraction";
browser.currentScene.children[322] = ROUTE952;

let ROUTE953 = browser.currentScene.createNode("ROUTE");
ROUTE953.fromNode = "WalkTimer";
ROUTE953.fromField = "fraction_changed";
ROUTE953.toNode = "Walk_r_acromioclavicular_RollInterpolator";
ROUTE953.toField = "set_fraction";
browser.currentScene.children[323] = ROUTE953;

let ROUTE954 = browser.currentScene.createNode("ROUTE");
ROUTE954.fromNode = "WalkTimer";
ROUTE954.fromField = "fraction_changed";
ROUTE954.toNode = "Walk_r_metatarsal_PitchInterpolator";
ROUTE954.toField = "set_fraction";
browser.currentScene.children[324] = ROUTE954;

let ROUTE955 = browser.currentScene.createNode("ROUTE");
ROUTE955.fromNode = "WalkTimer";
ROUTE955.fromField = "fraction_changed";
ROUTE955.toNode = "Walk_sacroiliac_YawInterpolator";
ROUTE955.toField = "set_fraction";
browser.currentScene.children[325] = ROUTE955;

let ROUTE956 = browser.currentScene.createNode("ROUTE");
ROUTE956.fromNode = "WalkTimer";
ROUTE956.fromField = "fraction_changed";
ROUTE956.toNode = "Walk_vl5_YawInterpolator";
ROUTE956.toField = "set_fraction";
browser.currentScene.children[326] = ROUTE956;

let ROUTE957 = browser.currentScene.createNode("ROUTE");
ROUTE957.fromNode = "WalkTimer";
ROUTE957.fromField = "fraction_changed";
ROUTE957.toNode = "Walk_vc6_YawInterpolator";
ROUTE957.toField = "set_fraction";
browser.currentScene.children[327] = ROUTE957;

let ROUTE958 = browser.currentScene.createNode("ROUTE");
ROUTE958.fromNode = "WalkTimer";
ROUTE958.fromField = "fraction_changed";
ROUTE958.toNode = "Walk_l_thumb1_PitchInterpolator";
ROUTE958.toField = "set_fraction";
browser.currentScene.children[328] = ROUTE958;

let ROUTE959 = browser.currentScene.createNode("ROUTE");
ROUTE959.fromNode = "WalkTimer";
ROUTE959.fromField = "fraction_changed";
ROUTE959.toNode = "Walk_r_thumb1_PitchInterpolator";
ROUTE959.toField = "set_fraction";
browser.currentScene.children[329] = ROUTE959;

let ROUTE960 = browser.currentScene.createNode("ROUTE");
ROUTE960.fromNode = "Walk_r_ankle_RotationInterpolator";
ROUTE960.fromField = "value_changed";
ROUTE960.toNode = "boxman_r_ankle";
ROUTE960.toField = "set_rotation";
browser.currentScene.children[330] = ROUTE960;

let ROUTE961 = browser.currentScene.createNode("ROUTE");
ROUTE961.fromNode = "Walk_r_knee_RotationInterpolator";
ROUTE961.fromField = "value_changed";
ROUTE961.toNode = "boxman_r_knee";
ROUTE961.toField = "set_rotation";
browser.currentScene.children[331] = ROUTE961;

let ROUTE962 = browser.currentScene.createNode("ROUTE");
ROUTE962.fromNode = "Walk_r_hip_RotationInterpolator";
ROUTE962.fromField = "value_changed";
ROUTE962.toNode = "boxman_r_hip";
ROUTE962.toField = "set_rotation";
browser.currentScene.children[332] = ROUTE962;

let ROUTE963 = browser.currentScene.createNode("ROUTE");
ROUTE963.fromNode = "Walk_l_ankle_RotationInterpolator";
ROUTE963.fromField = "value_changed";
ROUTE963.toNode = "boxman_l_ankle";
ROUTE963.toField = "set_rotation";
browser.currentScene.children[333] = ROUTE963;

let ROUTE964 = browser.currentScene.createNode("ROUTE");
ROUTE964.fromNode = "Walk_l_knee_RotationInterpolator";
ROUTE964.fromField = "value_changed";
ROUTE964.toNode = "boxman_l_knee";
ROUTE964.toField = "set_rotation";
browser.currentScene.children[334] = ROUTE964;

let ROUTE965 = browser.currentScene.createNode("ROUTE");
ROUTE965.fromNode = "Walk_l_hip_RotationInterpolator";
ROUTE965.fromField = "value_changed";
ROUTE965.toNode = "boxman_l_hip";
ROUTE965.toField = "set_rotation";
browser.currentScene.children[335] = ROUTE965;

let ROUTE966 = browser.currentScene.createNode("ROUTE");
ROUTE966.fromNode = "Walk_r_wrist_RotationInterpolator";
ROUTE966.fromField = "value_changed";
ROUTE966.toNode = "boxman_r_wrist";
ROUTE966.toField = "set_rotation";
browser.currentScene.children[336] = ROUTE966;

let ROUTE967 = browser.currentScene.createNode("ROUTE");
ROUTE967.fromNode = "Walk_r_elbow_RotationInterpolator";
ROUTE967.fromField = "value_changed";
ROUTE967.toNode = "boxman_r_elbow";
ROUTE967.toField = "set_rotation";
browser.currentScene.children[337] = ROUTE967;

let ROUTE968 = browser.currentScene.createNode("ROUTE");
ROUTE968.fromNode = "Walk_r_shoulder_RotationInterpolator";
ROUTE968.fromField = "value_changed";
ROUTE968.toNode = "boxman_r_shoulder";
ROUTE968.toField = "set_rotation";
browser.currentScene.children[338] = ROUTE968;

let ROUTE969 = browser.currentScene.createNode("ROUTE");
ROUTE969.fromNode = "Walk_l_wrist_RotationInterpolator";
ROUTE969.fromField = "value_changed";
ROUTE969.toNode = "boxman_l_wrist";
ROUTE969.toField = "set_rotation";
browser.currentScene.children[339] = ROUTE969;

let ROUTE970 = browser.currentScene.createNode("ROUTE");
ROUTE970.fromNode = "Walk_l_elbow_RotationInterpolator";
ROUTE970.fromField = "value_changed";
ROUTE970.toNode = "boxman_l_elbow";
ROUTE970.toField = "set_rotation";
browser.currentScene.children[340] = ROUTE970;

let ROUTE971 = browser.currentScene.createNode("ROUTE");
ROUTE971.fromNode = "Walk_l_shoulder_RotationInterpolator";
ROUTE971.fromField = "value_changed";
ROUTE971.toNode = "boxman_l_shoulder";
ROUTE971.toField = "set_rotation";
browser.currentScene.children[341] = ROUTE971;

let ROUTE972 = browser.currentScene.createNode("ROUTE");
ROUTE972.fromNode = "Walk_head_RotationInterpolator";
ROUTE972.fromField = "value_changed";
ROUTE972.toNode = "boxman_skullbase";
ROUTE972.toField = "set_rotation";
browser.currentScene.children[342] = ROUTE972;

let ROUTE973 = browser.currentScene.createNode("ROUTE");
ROUTE973.fromNode = "Walk_whole_body_RotationInterpolator";
ROUTE973.fromField = "value_changed";
ROUTE973.toNode = "boxman_humanoid_root";
ROUTE973.toField = "set_rotation";
browser.currentScene.children[343] = ROUTE973;

let ROUTE974 = browser.currentScene.createNode("ROUTE");
ROUTE974.fromNode = "Walk_whole_body_TranslationInterpolator";
ROUTE974.fromField = "value_changed";
ROUTE974.toNode = "boxman_humanoid_root";
ROUTE974.toField = "set_translation";
browser.currentScene.children[344] = ROUTE974;

let ROUTE975 = browser.currentScene.createNode("ROUTE");
ROUTE975.fromNode = "Walk_vl5_YawInterpolator";
ROUTE975.fromField = "value_changed";
ROUTE975.toNode = "boxman_vl5";
ROUTE975.toField = "set_rotation";
browser.currentScene.children[345] = ROUTE975;

let ROUTE976 = browser.currentScene.createNode("ROUTE");
ROUTE976.fromNode = "RunTimer";
ROUTE976.fromField = "fraction_changed";
ROUTE976.toNode = "Run_r_ankle_RotationInterpolator_Run";
ROUTE976.toField = "set_fraction";
browser.currentScene.children[346] = ROUTE976;

let ROUTE977 = browser.currentScene.createNode("ROUTE");
ROUTE977.fromNode = "RunTimer";
ROUTE977.fromField = "fraction_changed";
ROUTE977.toNode = "Run_r_knee_RotationInterpolator_Run";
ROUTE977.toField = "set_fraction";
browser.currentScene.children[347] = ROUTE977;

let ROUTE978 = browser.currentScene.createNode("ROUTE");
ROUTE978.fromNode = "RunTimer";
ROUTE978.fromField = "fraction_changed";
ROUTE978.toNode = "Run_r_hip_RotationInterpolator_Run";
ROUTE978.toField = "set_fraction";
browser.currentScene.children[348] = ROUTE978;

let ROUTE979 = browser.currentScene.createNode("ROUTE");
ROUTE979.fromNode = "RunTimer";
ROUTE979.fromField = "fraction_changed";
ROUTE979.toNode = "Run_l_ankle_RotationInterpolator_Run";
ROUTE979.toField = "set_fraction";
browser.currentScene.children[349] = ROUTE979;

let ROUTE980 = browser.currentScene.createNode("ROUTE");
ROUTE980.fromNode = "RunTimer";
ROUTE980.fromField = "fraction_changed";
ROUTE980.toNode = "Run_l_knee_RotationInterpolator_Run";
ROUTE980.toField = "set_fraction";
browser.currentScene.children[350] = ROUTE980;

let ROUTE981 = browser.currentScene.createNode("ROUTE");
ROUTE981.fromNode = "RunTimer";
ROUTE981.fromField = "fraction_changed";
ROUTE981.toNode = "Run_l_hip_RotationInterpolator_Run";
ROUTE981.toField = "set_fraction";
browser.currentScene.children[351] = ROUTE981;

let ROUTE982 = browser.currentScene.createNode("ROUTE");
ROUTE982.fromNode = "RunTimer";
ROUTE982.fromField = "fraction_changed";
ROUTE982.toNode = "Run_lower_body_RotationInterpolator_Run";
ROUTE982.toField = "set_fraction";
browser.currentScene.children[352] = ROUTE982;

let ROUTE983 = browser.currentScene.createNode("ROUTE");
ROUTE983.fromNode = "RunTimer";
ROUTE983.fromField = "fraction_changed";
ROUTE983.toNode = "Run_r_wrist_RotationInterpolator_Run";
ROUTE983.toField = "set_fraction";
browser.currentScene.children[353] = ROUTE983;

let ROUTE984 = browser.currentScene.createNode("ROUTE");
ROUTE984.fromNode = "RunTimer";
ROUTE984.fromField = "fraction_changed";
ROUTE984.toNode = "Run_r_elbow_RotationInterpolator_Run";
ROUTE984.toField = "set_fraction";
browser.currentScene.children[354] = ROUTE984;

let ROUTE985 = browser.currentScene.createNode("ROUTE");
ROUTE985.fromNode = "RunTimer";
ROUTE985.fromField = "fraction_changed";
ROUTE985.toNode = "Run_r_shoulder_RotationInterpolator_Run";
ROUTE985.toField = "set_fraction";
browser.currentScene.children[355] = ROUTE985;

let ROUTE986 = browser.currentScene.createNode("ROUTE");
ROUTE986.fromNode = "RunTimer";
ROUTE986.fromField = "fraction_changed";
ROUTE986.toNode = "Run_l_wrist_RotationInterpolator_Run";
ROUTE986.toField = "set_fraction";
browser.currentScene.children[356] = ROUTE986;

let ROUTE987 = browser.currentScene.createNode("ROUTE");
ROUTE987.fromNode = "RunTimer";
ROUTE987.fromField = "fraction_changed";
ROUTE987.toNode = "Run_l_elbow_RotationInterpolator_Run";
ROUTE987.toField = "set_fraction";
browser.currentScene.children[357] = ROUTE987;

let ROUTE988 = browser.currentScene.createNode("ROUTE");
ROUTE988.fromNode = "RunTimer";
ROUTE988.fromField = "fraction_changed";
ROUTE988.toNode = "Run_l_shoulder_RotationInterpolator_Run";
ROUTE988.toField = "set_fraction";
browser.currentScene.children[358] = ROUTE988;

let ROUTE989 = browser.currentScene.createNode("ROUTE");
ROUTE989.fromNode = "RunTimer";
ROUTE989.fromField = "fraction_changed";
ROUTE989.toNode = "Run_head_RotationInterpolator_Run";
ROUTE989.toField = "set_fraction";
browser.currentScene.children[359] = ROUTE989;

let ROUTE990 = browser.currentScene.createNode("ROUTE");
ROUTE990.fromNode = "RunTimer";
ROUTE990.fromField = "fraction_changed";
ROUTE990.toNode = "Run_neck_RotationInterpolator_Run";
ROUTE990.toField = "set_fraction";
browser.currentScene.children[360] = ROUTE990;

let ROUTE991 = browser.currentScene.createNode("ROUTE");
ROUTE991.fromNode = "RunTimer";
ROUTE991.fromField = "fraction_changed";
ROUTE991.toNode = "Run_upper_body_RotationInterpolator_Run";
ROUTE991.toField = "set_fraction";
browser.currentScene.children[361] = ROUTE991;

let ROUTE992 = browser.currentScene.createNode("ROUTE");
ROUTE992.fromNode = "RunTimer";
ROUTE992.fromField = "fraction_changed";
ROUTE992.toNode = "Run_whole_body_RotationInterpolator_Run";
ROUTE992.toField = "set_fraction";
browser.currentScene.children[362] = ROUTE992;

let ROUTE993 = browser.currentScene.createNode("ROUTE");
ROUTE993.fromNode = "RunTimer";
ROUTE993.fromField = "fraction_changed";
ROUTE993.toNode = "Run_whole_body_TranslationInterpolator_Run";
ROUTE993.toField = "set_fraction";
browser.currentScene.children[363] = ROUTE993;

let ROUTE994 = browser.currentScene.createNode("ROUTE");
ROUTE994.fromNode = "RunTimer";
ROUTE994.fromField = "fraction_changed";
ROUTE994.toNode = "Run_l_sternoclavicular_RollInterpolator";
ROUTE994.toField = "set_fraction";
browser.currentScene.children[364] = ROUTE994;

let ROUTE995 = browser.currentScene.createNode("ROUTE");
ROUTE995.fromNode = "RunTimer";
ROUTE995.fromField = "fraction_changed";
ROUTE995.toNode = "Run_l_acromioclavicular_RollInterpolator";
ROUTE995.toField = "set_fraction";
browser.currentScene.children[365] = ROUTE995;

let ROUTE996 = browser.currentScene.createNode("ROUTE");
ROUTE996.fromNode = "RunTimer";
ROUTE996.fromField = "fraction_changed";
ROUTE996.toNode = "Run_r_sternoclavicular_RollInterpolator";
ROUTE996.toField = "set_fraction";
browser.currentScene.children[366] = ROUTE996;

let ROUTE997 = browser.currentScene.createNode("ROUTE");
ROUTE997.fromNode = "RunTimer";
ROUTE997.fromField = "fraction_changed";
ROUTE997.toNode = "Run_r_acromioclavicular_RollInterpolator";
ROUTE997.toField = "set_fraction";
browser.currentScene.children[367] = ROUTE997;

let ROUTE998 = browser.currentScene.createNode("ROUTE");
ROUTE998.fromNode = "RunTimer";
ROUTE998.fromField = "fraction_changed";
ROUTE998.toNode = "Run_r_metatarsal_PitchInterpolator";
ROUTE998.toField = "set_fraction";
browser.currentScene.children[368] = ROUTE998;

let ROUTE999 = browser.currentScene.createNode("ROUTE");
ROUTE999.fromNode = "RunTimer";
ROUTE999.fromField = "fraction_changed";
ROUTE999.toNode = "Run_sacroiliac_YawInterpolator";
ROUTE999.toField = "set_fraction";
browser.currentScene.children[369] = ROUTE999;

let ROUTE1000 = browser.currentScene.createNode("ROUTE");
ROUTE1000.fromNode = "RunTimer";
ROUTE1000.fromField = "fraction_changed";
ROUTE1000.toNode = "Run_vl5_YawInterpolator";
ROUTE1000.toField = "set_fraction";
browser.currentScene.children[370] = ROUTE1000;

let ROUTE1001 = browser.currentScene.createNode("ROUTE");
ROUTE1001.fromNode = "RunTimer";
ROUTE1001.fromField = "fraction_changed";
ROUTE1001.toNode = "Run_vc6_YawInterpolator";
ROUTE1001.toField = "set_fraction";
browser.currentScene.children[371] = ROUTE1001;

let ROUTE1002 = browser.currentScene.createNode("ROUTE");
ROUTE1002.fromNode = "RunTimer";
ROUTE1002.fromField = "fraction_changed";
ROUTE1002.toNode = "Run_l_thumb1_PitchInterpolator";
ROUTE1002.toField = "set_fraction";
browser.currentScene.children[372] = ROUTE1002;

let ROUTE1003 = browser.currentScene.createNode("ROUTE");
ROUTE1003.fromNode = "RunTimer";
ROUTE1003.fromField = "fraction_changed";
ROUTE1003.toNode = "Run_r_thumb1_PitchInterpolator";
ROUTE1003.toField = "set_fraction";
browser.currentScene.children[373] = ROUTE1003;

let ROUTE1004 = browser.currentScene.createNode("ROUTE");
ROUTE1004.fromNode = "Run_r_ankle_RotationInterpolator_Run";
ROUTE1004.fromField = "value_changed";
ROUTE1004.toNode = "boxman_r_ankle";
ROUTE1004.toField = "set_rotation";
browser.currentScene.children[374] = ROUTE1004;

let ROUTE1005 = browser.currentScene.createNode("ROUTE");
ROUTE1005.fromNode = "Run_r_knee_RotationInterpolator_Run";
ROUTE1005.fromField = "value_changed";
ROUTE1005.toNode = "boxman_r_knee";
ROUTE1005.toField = "set_rotation";
browser.currentScene.children[375] = ROUTE1005;

let ROUTE1006 = browser.currentScene.createNode("ROUTE");
ROUTE1006.fromNode = "Run_r_hip_RotationInterpolator_Run";
ROUTE1006.fromField = "value_changed";
ROUTE1006.toNode = "boxman_r_hip";
ROUTE1006.toField = "set_rotation";
browser.currentScene.children[376] = ROUTE1006;

let ROUTE1007 = browser.currentScene.createNode("ROUTE");
ROUTE1007.fromNode = "Run_l_ankle_RotationInterpolator_Run";
ROUTE1007.fromField = "value_changed";
ROUTE1007.toNode = "boxman_l_ankle";
ROUTE1007.toField = "set_rotation";
browser.currentScene.children[377] = ROUTE1007;

let ROUTE1008 = browser.currentScene.createNode("ROUTE");
ROUTE1008.fromNode = "Run_l_knee_RotationInterpolator_Run";
ROUTE1008.fromField = "value_changed";
ROUTE1008.toNode = "boxman_l_knee";
ROUTE1008.toField = "set_rotation";
browser.currentScene.children[378] = ROUTE1008;

let ROUTE1009 = browser.currentScene.createNode("ROUTE");
ROUTE1009.fromNode = "Run_l_hip_RotationInterpolator_Run";
ROUTE1009.fromField = "value_changed";
ROUTE1009.toNode = "boxman_l_hip";
ROUTE1009.toField = "set_rotation";
browser.currentScene.children[379] = ROUTE1009;

let ROUTE1010 = browser.currentScene.createNode("ROUTE");
ROUTE1010.fromNode = "Run_r_wrist_RotationInterpolator_Run";
ROUTE1010.fromField = "value_changed";
ROUTE1010.toNode = "boxman_r_wrist";
ROUTE1010.toField = "set_rotation";
browser.currentScene.children[380] = ROUTE1010;

let ROUTE1011 = browser.currentScene.createNode("ROUTE");
ROUTE1011.fromNode = "Run_r_elbow_RotationInterpolator_Run";
ROUTE1011.fromField = "value_changed";
ROUTE1011.toNode = "boxman_r_elbow";
ROUTE1011.toField = "set_rotation";
browser.currentScene.children[381] = ROUTE1011;

let ROUTE1012 = browser.currentScene.createNode("ROUTE");
ROUTE1012.fromNode = "Run_r_shoulder_RotationInterpolator_Run";
ROUTE1012.fromField = "value_changed";
ROUTE1012.toNode = "boxman_r_shoulder";
ROUTE1012.toField = "set_rotation";
browser.currentScene.children[382] = ROUTE1012;

let ROUTE1013 = browser.currentScene.createNode("ROUTE");
ROUTE1013.fromNode = "Run_l_wrist_RotationInterpolator_Run";
ROUTE1013.fromField = "value_changed";
ROUTE1013.toNode = "boxman_l_wrist";
ROUTE1013.toField = "set_rotation";
browser.currentScene.children[383] = ROUTE1013;

let ROUTE1014 = browser.currentScene.createNode("ROUTE");
ROUTE1014.fromNode = "Run_l_elbow_RotationInterpolator_Run";
ROUTE1014.fromField = "value_changed";
ROUTE1014.toNode = "boxman_l_elbow";
ROUTE1014.toField = "set_rotation";
browser.currentScene.children[384] = ROUTE1014;

let ROUTE1015 = browser.currentScene.createNode("ROUTE");
ROUTE1015.fromNode = "Run_l_shoulder_RotationInterpolator_Run";
ROUTE1015.fromField = "value_changed";
ROUTE1015.toNode = "boxman_l_shoulder";
ROUTE1015.toField = "set_rotation";
browser.currentScene.children[385] = ROUTE1015;

let ROUTE1016 = browser.currentScene.createNode("ROUTE");
ROUTE1016.fromNode = "Run_head_RotationInterpolator_Run";
ROUTE1016.fromField = "value_changed";
ROUTE1016.toNode = "boxman_skullbase";
ROUTE1016.toField = "set_rotation";
browser.currentScene.children[386] = ROUTE1016;

let ROUTE1017 = browser.currentScene.createNode("ROUTE");
ROUTE1017.fromNode = "Run_whole_body_RotationInterpolator_Run";
ROUTE1017.fromField = "value_changed";
ROUTE1017.toNode = "boxman_humanoid_root";
ROUTE1017.toField = "set_rotation";
browser.currentScene.children[387] = ROUTE1017;

let ROUTE1018 = browser.currentScene.createNode("ROUTE");
ROUTE1018.fromNode = "Run_whole_body_TranslationInterpolator_Run";
ROUTE1018.fromField = "value_changed";
ROUTE1018.toNode = "boxman_humanoid_root";
ROUTE1018.toField = "set_translation";
browser.currentScene.children[388] = ROUTE1018;

let ROUTE1019 = browser.currentScene.createNode("ROUTE");
ROUTE1019.fromNode = "Run_vl5_YawInterpolator";
ROUTE1019.fromField = "value_changed";
ROUTE1019.toNode = "boxman_vl5";
ROUTE1019.toField = "set_rotation";
browser.currentScene.children[389] = ROUTE1019;

let ROUTE1020 = browser.currentScene.createNode("ROUTE");
ROUTE1020.fromNode = "JumpTimer";
ROUTE1020.fromField = "fraction_changed";
ROUTE1020.toNode = "Jump_r_ankle_RotationInterpolator";
ROUTE1020.toField = "set_fraction";
browser.currentScene.children[390] = ROUTE1020;

let ROUTE1021 = browser.currentScene.createNode("ROUTE");
ROUTE1021.fromNode = "JumpTimer";
ROUTE1021.fromField = "fraction_changed";
ROUTE1021.toNode = "Jump_r_knee_RotationInterpolator";
ROUTE1021.toField = "set_fraction";
browser.currentScene.children[391] = ROUTE1021;

let ROUTE1022 = browser.currentScene.createNode("ROUTE");
ROUTE1022.fromNode = "JumpTimer";
ROUTE1022.fromField = "fraction_changed";
ROUTE1022.toNode = "Jump_r_hip_RotationInterpolator";
ROUTE1022.toField = "set_fraction";
browser.currentScene.children[392] = ROUTE1022;

let ROUTE1023 = browser.currentScene.createNode("ROUTE");
ROUTE1023.fromNode = "JumpTimer";
ROUTE1023.fromField = "fraction_changed";
ROUTE1023.toNode = "Jump_l_ankle_RotationInterpolator";
ROUTE1023.toField = "set_fraction";
browser.currentScene.children[393] = ROUTE1023;

let ROUTE1024 = browser.currentScene.createNode("ROUTE");
ROUTE1024.fromNode = "JumpTimer";
ROUTE1024.fromField = "fraction_changed";
ROUTE1024.toNode = "Jump_l_knee_RotationInterpolator";
ROUTE1024.toField = "set_fraction";
browser.currentScene.children[394] = ROUTE1024;

let ROUTE1025 = browser.currentScene.createNode("ROUTE");
ROUTE1025.fromNode = "JumpTimer";
ROUTE1025.fromField = "fraction_changed";
ROUTE1025.toNode = "Jump_l_hip_RotationInterpolator";
ROUTE1025.toField = "set_fraction";
browser.currentScene.children[395] = ROUTE1025;

let ROUTE1026 = browser.currentScene.createNode("ROUTE");
ROUTE1026.fromNode = "JumpTimer";
ROUTE1026.fromField = "fraction_changed";
ROUTE1026.toNode = "Jump_lower_body_RotationInterpolator";
ROUTE1026.toField = "set_fraction";
browser.currentScene.children[396] = ROUTE1026;

let ROUTE1027 = browser.currentScene.createNode("ROUTE");
ROUTE1027.fromNode = "JumpTimer";
ROUTE1027.fromField = "fraction_changed";
ROUTE1027.toNode = "Jump_r_wrist_RotationInterpolator";
ROUTE1027.toField = "set_fraction";
browser.currentScene.children[397] = ROUTE1027;

let ROUTE1028 = browser.currentScene.createNode("ROUTE");
ROUTE1028.fromNode = "JumpTimer";
ROUTE1028.fromField = "fraction_changed";
ROUTE1028.toNode = "Jump_r_elbow_RotationInterpolator";
ROUTE1028.toField = "set_fraction";
browser.currentScene.children[398] = ROUTE1028;

let ROUTE1029 = browser.currentScene.createNode("ROUTE");
ROUTE1029.fromNode = "JumpTimer";
ROUTE1029.fromField = "fraction_changed";
ROUTE1029.toNode = "Jump_r_shoulder_RotationInterpolator";
ROUTE1029.toField = "set_fraction";
browser.currentScene.children[399] = ROUTE1029;

let ROUTE1030 = browser.currentScene.createNode("ROUTE");
ROUTE1030.fromNode = "JumpTimer";
ROUTE1030.fromField = "fraction_changed";
ROUTE1030.toNode = "Jump_l_wrist_RotationInterpolator";
ROUTE1030.toField = "set_fraction";
browser.currentScene.children[400] = ROUTE1030;

let ROUTE1031 = browser.currentScene.createNode("ROUTE");
ROUTE1031.fromNode = "JumpTimer";
ROUTE1031.fromField = "fraction_changed";
ROUTE1031.toNode = "Jump_l_elbow_RotationInterpolator";
ROUTE1031.toField = "set_fraction";
browser.currentScene.children[401] = ROUTE1031;

let ROUTE1032 = browser.currentScene.createNode("ROUTE");
ROUTE1032.fromNode = "JumpTimer";
ROUTE1032.fromField = "fraction_changed";
ROUTE1032.toNode = "Jump_l_shoulder_RotationInterpolator";
ROUTE1032.toField = "set_fraction";
browser.currentScene.children[402] = ROUTE1032;

let ROUTE1033 = browser.currentScene.createNode("ROUTE");
ROUTE1033.fromNode = "JumpTimer";
ROUTE1033.fromField = "fraction_changed";
ROUTE1033.toNode = "Jump_head_RotationInterpolator";
ROUTE1033.toField = "set_fraction";
browser.currentScene.children[403] = ROUTE1033;

let ROUTE1034 = browser.currentScene.createNode("ROUTE");
ROUTE1034.fromNode = "JumpTimer";
ROUTE1034.fromField = "fraction_changed";
ROUTE1034.toNode = "Jump_neck_RotationInterpolator";
ROUTE1034.toField = "set_fraction";
browser.currentScene.children[404] = ROUTE1034;

let ROUTE1035 = browser.currentScene.createNode("ROUTE");
ROUTE1035.fromNode = "JumpTimer";
ROUTE1035.fromField = "fraction_changed";
ROUTE1035.toNode = "Jump_upper_body_RotationInterpolator";
ROUTE1035.toField = "set_fraction";
browser.currentScene.children[405] = ROUTE1035;

let ROUTE1036 = browser.currentScene.createNode("ROUTE");
ROUTE1036.fromNode = "JumpTimer";
ROUTE1036.fromField = "fraction_changed";
ROUTE1036.toNode = "Jump_whole_body_RotationInterpolator";
ROUTE1036.toField = "set_fraction";
browser.currentScene.children[406] = ROUTE1036;

let ROUTE1037 = browser.currentScene.createNode("ROUTE");
ROUTE1037.fromNode = "JumpTimer";
ROUTE1037.fromField = "fraction_changed";
ROUTE1037.toNode = "Jump_whole_body_TranslationInterpolator";
ROUTE1037.toField = "set_fraction";
browser.currentScene.children[407] = ROUTE1037;

let ROUTE1038 = browser.currentScene.createNode("ROUTE");
ROUTE1038.fromNode = "JumpTimer";
ROUTE1038.fromField = "fraction_changed";
ROUTE1038.toNode = "Jump_l_sternoclavicular_RollInterpolator";
ROUTE1038.toField = "set_fraction";
browser.currentScene.children[408] = ROUTE1038;

let ROUTE1039 = browser.currentScene.createNode("ROUTE");
ROUTE1039.fromNode = "JumpTimer";
ROUTE1039.fromField = "fraction_changed";
ROUTE1039.toNode = "Jump_l_acromioclavicular_RollInterpolator";
ROUTE1039.toField = "set_fraction";
browser.currentScene.children[409] = ROUTE1039;

let ROUTE1040 = browser.currentScene.createNode("ROUTE");
ROUTE1040.fromNode = "JumpTimer";
ROUTE1040.fromField = "fraction_changed";
ROUTE1040.toNode = "Jump_r_sternoclavicular_RollInterpolator";
ROUTE1040.toField = "set_fraction";
browser.currentScene.children[410] = ROUTE1040;

let ROUTE1041 = browser.currentScene.createNode("ROUTE");
ROUTE1041.fromNode = "JumpTimer";
ROUTE1041.fromField = "fraction_changed";
ROUTE1041.toNode = "Jump_r_acromioclavicular_RollInterpolator";
ROUTE1041.toField = "set_fraction";
browser.currentScene.children[411] = ROUTE1041;

let ROUTE1042 = browser.currentScene.createNode("ROUTE");
ROUTE1042.fromNode = "JumpTimer";
ROUTE1042.fromField = "fraction_changed";
ROUTE1042.toNode = "Jump_r_metatarsal_PitchInterpolator";
ROUTE1042.toField = "set_fraction";
browser.currentScene.children[412] = ROUTE1042;

let ROUTE1043 = browser.currentScene.createNode("ROUTE");
ROUTE1043.fromNode = "JumpTimer";
ROUTE1043.fromField = "fraction_changed";
ROUTE1043.toNode = "Jump_sacroiliac_YawInterpolator";
ROUTE1043.toField = "set_fraction";
browser.currentScene.children[413] = ROUTE1043;

let ROUTE1044 = browser.currentScene.createNode("ROUTE");
ROUTE1044.fromNode = "JumpTimer";
ROUTE1044.fromField = "fraction_changed";
ROUTE1044.toNode = "Jump_vl5_YawInterpolator";
ROUTE1044.toField = "set_fraction";
browser.currentScene.children[414] = ROUTE1044;

let ROUTE1045 = browser.currentScene.createNode("ROUTE");
ROUTE1045.fromNode = "JumpTimer";
ROUTE1045.fromField = "fraction_changed";
ROUTE1045.toNode = "Jump_vc6_YawInterpolator";
ROUTE1045.toField = "set_fraction";
browser.currentScene.children[415] = ROUTE1045;

let ROUTE1046 = browser.currentScene.createNode("ROUTE");
ROUTE1046.fromNode = "JumpTimer";
ROUTE1046.fromField = "fraction_changed";
ROUTE1046.toNode = "Jump_l_thumb1_PitchInterpolator";
ROUTE1046.toField = "set_fraction";
browser.currentScene.children[416] = ROUTE1046;

let ROUTE1047 = browser.currentScene.createNode("ROUTE");
ROUTE1047.fromNode = "JumpTimer";
ROUTE1047.fromField = "fraction_changed";
ROUTE1047.toNode = "Jump_r_thumb1_PitchInterpolator";
ROUTE1047.toField = "set_fraction";
browser.currentScene.children[417] = ROUTE1047;

let ROUTE1048 = browser.currentScene.createNode("ROUTE");
ROUTE1048.fromNode = "Jump_r_ankle_RotationInterpolator";
ROUTE1048.fromField = "value_changed";
ROUTE1048.toNode = "boxman_r_ankle";
ROUTE1048.toField = "set_rotation";
browser.currentScene.children[418] = ROUTE1048;

let ROUTE1049 = browser.currentScene.createNode("ROUTE");
ROUTE1049.fromNode = "Jump_r_knee_RotationInterpolator";
ROUTE1049.fromField = "value_changed";
ROUTE1049.toNode = "boxman_r_knee";
ROUTE1049.toField = "set_rotation";
browser.currentScene.children[419] = ROUTE1049;

let ROUTE1050 = browser.currentScene.createNode("ROUTE");
ROUTE1050.fromNode = "Jump_r_hip_RotationInterpolator";
ROUTE1050.fromField = "value_changed";
ROUTE1050.toNode = "boxman_r_hip";
ROUTE1050.toField = "set_rotation";
browser.currentScene.children[420] = ROUTE1050;

let ROUTE1051 = browser.currentScene.createNode("ROUTE");
ROUTE1051.fromNode = "Jump_l_ankle_RotationInterpolator";
ROUTE1051.fromField = "value_changed";
ROUTE1051.toNode = "boxman_l_ankle";
ROUTE1051.toField = "set_rotation";
browser.currentScene.children[421] = ROUTE1051;

let ROUTE1052 = browser.currentScene.createNode("ROUTE");
ROUTE1052.fromNode = "Jump_l_knee_RotationInterpolator";
ROUTE1052.fromField = "value_changed";
ROUTE1052.toNode = "boxman_l_knee";
ROUTE1052.toField = "set_rotation";
browser.currentScene.children[422] = ROUTE1052;

let ROUTE1053 = browser.currentScene.createNode("ROUTE");
ROUTE1053.fromNode = "Jump_l_hip_RotationInterpolator";
ROUTE1053.fromField = "value_changed";
ROUTE1053.toNode = "boxman_l_hip";
ROUTE1053.toField = "set_rotation";
browser.currentScene.children[423] = ROUTE1053;

let ROUTE1054 = browser.currentScene.createNode("ROUTE");
ROUTE1054.fromNode = "Jump_r_wrist_RotationInterpolator";
ROUTE1054.fromField = "value_changed";
ROUTE1054.toNode = "boxman_r_wrist";
ROUTE1054.toField = "set_rotation";
browser.currentScene.children[424] = ROUTE1054;

let ROUTE1055 = browser.currentScene.createNode("ROUTE");
ROUTE1055.fromNode = "Jump_r_elbow_RotationInterpolator";
ROUTE1055.fromField = "value_changed";
ROUTE1055.toNode = "boxman_r_elbow";
ROUTE1055.toField = "set_rotation";
browser.currentScene.children[425] = ROUTE1055;

let ROUTE1056 = browser.currentScene.createNode("ROUTE");
ROUTE1056.fromNode = "Jump_r_shoulder_RotationInterpolator";
ROUTE1056.fromField = "value_changed";
ROUTE1056.toNode = "boxman_r_shoulder";
ROUTE1056.toField = "set_rotation";
browser.currentScene.children[426] = ROUTE1056;

let ROUTE1057 = browser.currentScene.createNode("ROUTE");
ROUTE1057.fromNode = "Jump_l_wrist_RotationInterpolator";
ROUTE1057.fromField = "value_changed";
ROUTE1057.toNode = "boxman_l_wrist";
ROUTE1057.toField = "set_rotation";
browser.currentScene.children[427] = ROUTE1057;

let ROUTE1058 = browser.currentScene.createNode("ROUTE");
ROUTE1058.fromNode = "Jump_l_elbow_RotationInterpolator";
ROUTE1058.fromField = "value_changed";
ROUTE1058.toNode = "boxman_l_elbow";
ROUTE1058.toField = "set_rotation";
browser.currentScene.children[428] = ROUTE1058;

let ROUTE1059 = browser.currentScene.createNode("ROUTE");
ROUTE1059.fromNode = "Jump_l_shoulder_RotationInterpolator";
ROUTE1059.fromField = "value_changed";
ROUTE1059.toNode = "boxman_l_shoulder";
ROUTE1059.toField = "set_rotation";
browser.currentScene.children[429] = ROUTE1059;

let ROUTE1060 = browser.currentScene.createNode("ROUTE");
ROUTE1060.fromNode = "Jump_head_RotationInterpolator";
ROUTE1060.fromField = "value_changed";
ROUTE1060.toNode = "boxman_skullbase";
ROUTE1060.toField = "set_rotation";
browser.currentScene.children[430] = ROUTE1060;

let ROUTE1061 = browser.currentScene.createNode("ROUTE");
ROUTE1061.fromNode = "Jump_whole_body_RotationInterpolator";
ROUTE1061.fromField = "value_changed";
ROUTE1061.toNode = "boxman_humanoid_root";
ROUTE1061.toField = "set_rotation";
browser.currentScene.children[431] = ROUTE1061;

let ROUTE1062 = browser.currentScene.createNode("ROUTE");
ROUTE1062.fromNode = "Jump_whole_body_TranslationInterpolator";
ROUTE1062.fromField = "value_changed";
ROUTE1062.toNode = "boxman_humanoid_root";
ROUTE1062.toField = "set_translation";
browser.currentScene.children[432] = ROUTE1062;

let ROUTE1063 = browser.currentScene.createNode("ROUTE");
ROUTE1063.fromNode = "Jump_vl5_YawInterpolator";
ROUTE1063.fromField = "value_changed";
ROUTE1063.toNode = "boxman_vl5";
ROUTE1063.toField = "set_rotation";
browser.currentScene.children[433] = ROUTE1063;

let ROUTE1064 = browser.currentScene.createNode("ROUTE");
ROUTE1064.fromNode = "KickTimer";
ROUTE1064.fromField = "fraction_changed";
ROUTE1064.toNode = "Kick_l_sternoclavicular_RollInterpolator";
ROUTE1064.toField = "set_fraction";
browser.currentScene.children[434] = ROUTE1064;

let ROUTE1065 = browser.currentScene.createNode("ROUTE");
ROUTE1065.fromNode = "KickTimer";
ROUTE1065.fromField = "fraction_changed";
ROUTE1065.toNode = "Kick_l_acromioclavicular_RollInterpolator";
ROUTE1065.toField = "set_fraction";
browser.currentScene.children[435] = ROUTE1065;

let ROUTE1066 = browser.currentScene.createNode("ROUTE");
ROUTE1066.fromNode = "KickTimer";
ROUTE1066.fromField = "fraction_changed";
ROUTE1066.toNode = "Kick_l_shoulder_RollInterpolator";
ROUTE1066.toField = "set_fraction";
browser.currentScene.children[436] = ROUTE1066;

let ROUTE1067 = browser.currentScene.createNode("ROUTE");
ROUTE1067.fromNode = "KickTimer";
ROUTE1067.fromField = "fraction_changed";
ROUTE1067.toNode = "Kick_l_ForeArm_PitchInterpolator";
ROUTE1067.toField = "set_fraction";
browser.currentScene.children[437] = ROUTE1067;

let ROUTE1068 = browser.currentScene.createNode("ROUTE");
ROUTE1068.fromNode = "KickTimer";
ROUTE1068.fromField = "fraction_changed";
ROUTE1068.toNode = "Kick_l_wrist_RollInterpolator";
ROUTE1068.toField = "set_fraction";
browser.currentScene.children[438] = ROUTE1068;

let ROUTE1069 = browser.currentScene.createNode("ROUTE");
ROUTE1069.fromNode = "KickTimer";
ROUTE1069.fromField = "fraction_changed";
ROUTE1069.toNode = "Kick_l_thumb1_PitchInterpolator";
ROUTE1069.toField = "set_fraction";
browser.currentScene.children[439] = ROUTE1069;

let ROUTE1070 = browser.currentScene.createNode("ROUTE");
ROUTE1070.fromNode = "KickTimer";
ROUTE1070.fromField = "fraction_changed";
ROUTE1070.toNode = "Kick_r_sternoclavicular_RollInterpolator";
ROUTE1070.toField = "set_fraction";
browser.currentScene.children[440] = ROUTE1070;

let ROUTE1071 = browser.currentScene.createNode("ROUTE");
ROUTE1071.fromNode = "KickTimer";
ROUTE1071.fromField = "fraction_changed";
ROUTE1071.toNode = "Kick_r_acromioclavicular_RollInterpolator";
ROUTE1071.toField = "set_fraction";
browser.currentScene.children[441] = ROUTE1071;

let ROUTE1072 = browser.currentScene.createNode("ROUTE");
ROUTE1072.fromNode = "KickTimer";
ROUTE1072.fromField = "fraction_changed";
ROUTE1072.toNode = "Kick_r_shoulder_RollInterpolator";
ROUTE1072.toField = "set_fraction";
browser.currentScene.children[442] = ROUTE1072;

let ROUTE1073 = browser.currentScene.createNode("ROUTE");
ROUTE1073.fromNode = "KickTimer";
ROUTE1073.fromField = "fraction_changed";
ROUTE1073.toNode = "Kick_r_ForeArm_PitchInterpolator";
ROUTE1073.toField = "set_fraction";
browser.currentScene.children[443] = ROUTE1073;

let ROUTE1074 = browser.currentScene.createNode("ROUTE");
ROUTE1074.fromNode = "KickTimer";
ROUTE1074.fromField = "fraction_changed";
ROUTE1074.toNode = "Kick_r_wrist_RollInterpolator";
ROUTE1074.toField = "set_fraction";
browser.currentScene.children[444] = ROUTE1074;

let ROUTE1075 = browser.currentScene.createNode("ROUTE");
ROUTE1075.fromNode = "KickTimer";
ROUTE1075.fromField = "fraction_changed";
ROUTE1075.toNode = "Kick_r_thumb1_PitchInterpolator";
ROUTE1075.toField = "set_fraction";
browser.currentScene.children[445] = ROUTE1075;

let ROUTE1076 = browser.currentScene.createNode("ROUTE");
ROUTE1076.fromNode = "KickTimer";
ROUTE1076.fromField = "fraction_changed";
ROUTE1076.toNode = "Kick_r_hip_PitchInterpolator";
ROUTE1076.toField = "set_fraction";
browser.currentScene.children[446] = ROUTE1076;

let ROUTE1077 = browser.currentScene.createNode("ROUTE");
ROUTE1077.fromNode = "KickTimer";
ROUTE1077.fromField = "fraction_changed";
ROUTE1077.toNode = "Kick_r_knee_PitchInterpolator";
ROUTE1077.toField = "set_fraction";
browser.currentScene.children[447] = ROUTE1077;

let ROUTE1078 = browser.currentScene.createNode("ROUTE");
ROUTE1078.fromNode = "KickTimer";
ROUTE1078.fromField = "fraction_changed";
ROUTE1078.toNode = "Kick_l_hip_PitchInterpolator";
ROUTE1078.toField = "set_fraction";
browser.currentScene.children[448] = ROUTE1078;

let ROUTE1079 = browser.currentScene.createNode("ROUTE");
ROUTE1079.fromNode = "KickTimer";
ROUTE1079.fromField = "fraction_changed";
ROUTE1079.toNode = "Kick_l_knee_PitchInterpolator";
ROUTE1079.toField = "set_fraction";
browser.currentScene.children[449] = ROUTE1079;

let ROUTE1080 = browser.currentScene.createNode("ROUTE");
ROUTE1080.fromNode = "KickTimer";
ROUTE1080.fromField = "fraction_changed";
ROUTE1080.toNode = "Kick_r_ankle_PitchInterpolator";
ROUTE1080.toField = "set_fraction";
browser.currentScene.children[450] = ROUTE1080;

let ROUTE1081 = browser.currentScene.createNode("ROUTE");
ROUTE1081.fromNode = "KickTimer";
ROUTE1081.fromField = "fraction_changed";
ROUTE1081.toNode = "Kick_r_metatarsal_PitchInterpolator";
ROUTE1081.toField = "set_fraction";
browser.currentScene.children[451] = ROUTE1081;

let ROUTE1082 = browser.currentScene.createNode("ROUTE");
ROUTE1082.fromNode = "KickTimer";
ROUTE1082.fromField = "fraction_changed";
ROUTE1082.toNode = "Kick_sacroiliac_YawInterpolator";
ROUTE1082.toField = "set_fraction";
browser.currentScene.children[452] = ROUTE1082;

let ROUTE1083 = browser.currentScene.createNode("ROUTE");
ROUTE1083.fromNode = "KickTimer";
ROUTE1083.fromField = "fraction_changed";
ROUTE1083.toNode = "Kick_vl5_YawInterpolator";
ROUTE1083.toField = "set_fraction";
browser.currentScene.children[453] = ROUTE1083;

let ROUTE1084 = browser.currentScene.createNode("ROUTE");
ROUTE1084.fromNode = "KickTimer";
ROUTE1084.fromField = "fraction_changed";
ROUTE1084.toNode = "Kick_vc6_YawInterpolator";
ROUTE1084.toField = "set_fraction";
browser.currentScene.children[454] = ROUTE1084;

let ROUTE1085 = browser.currentScene.createNode("ROUTE");
ROUTE1085.fromNode = "KickTimer";
ROUTE1085.fromField = "fraction_changed";
ROUTE1085.toNode = "Kick_lower_body_RotationInterpolator";
ROUTE1085.toField = "set_fraction";
browser.currentScene.children[455] = ROUTE1085;

let ROUTE1086 = browser.currentScene.createNode("ROUTE");
ROUTE1086.fromNode = "KickTimer";
ROUTE1086.fromField = "fraction_changed";
ROUTE1086.toNode = "Kick_upper_body_RotationInterpolator";
ROUTE1086.toField = "set_fraction";
browser.currentScene.children[456] = ROUTE1086;

let ROUTE1087 = browser.currentScene.createNode("ROUTE");
ROUTE1087.fromNode = "KickTimer";
ROUTE1087.fromField = "fraction_changed";
ROUTE1087.toNode = "Kick_whole_body_RotationInterpolator";
ROUTE1087.toField = "set_fraction";
browser.currentScene.children[457] = ROUTE1087;

let ROUTE1088 = browser.currentScene.createNode("ROUTE");
ROUTE1088.fromNode = "KickTimer";
ROUTE1088.fromField = "fraction_changed";
ROUTE1088.toNode = "Kick_whole_body_TranslationInterpolator";
ROUTE1088.toField = "set_fraction";
browser.currentScene.children[458] = ROUTE1088;

let ROUTE1089 = browser.currentScene.createNode("ROUTE");
ROUTE1089.fromNode = "KickTimer";
ROUTE1089.fromField = "fraction_changed";
ROUTE1089.toNode = "Kick_neck_RotationInterpolator";
ROUTE1089.toField = "set_fraction";
browser.currentScene.children[459] = ROUTE1089;

let ROUTE1090 = browser.currentScene.createNode("ROUTE");
ROUTE1090.fromNode = "Kick_l_shoulder_RollInterpolator";
ROUTE1090.fromField = "value_changed";
ROUTE1090.toNode = "boxman_l_shoulder";
ROUTE1090.toField = "set_rotation";
browser.currentScene.children[460] = ROUTE1090;

let ROUTE1091 = browser.currentScene.createNode("ROUTE");
ROUTE1091.fromNode = "Kick_l_ForeArm_PitchInterpolator";
ROUTE1091.fromField = "value_changed";
ROUTE1091.toNode = "boxman_l_elbow";
ROUTE1091.toField = "set_rotation";
browser.currentScene.children[461] = ROUTE1091;

let ROUTE1092 = browser.currentScene.createNode("ROUTE");
ROUTE1092.fromNode = "Kick_l_wrist_RollInterpolator";
ROUTE1092.fromField = "value_changed";
ROUTE1092.toNode = "boxman_l_wrist";
ROUTE1092.toField = "set_rotation";
browser.currentScene.children[462] = ROUTE1092;

let ROUTE1093 = browser.currentScene.createNode("ROUTE");
ROUTE1093.fromNode = "Kick_r_shoulder_RollInterpolator";
ROUTE1093.fromField = "value_changed";
ROUTE1093.toNode = "boxman_r_shoulder";
ROUTE1093.toField = "set_rotation";
browser.currentScene.children[463] = ROUTE1093;

let ROUTE1094 = browser.currentScene.createNode("ROUTE");
ROUTE1094.fromNode = "Kick_r_ForeArm_PitchInterpolator";
ROUTE1094.fromField = "value_changed";
ROUTE1094.toNode = "boxman_r_elbow";
ROUTE1094.toField = "set_rotation";
browser.currentScene.children[464] = ROUTE1094;

let ROUTE1095 = browser.currentScene.createNode("ROUTE");
ROUTE1095.fromNode = "Kick_r_wrist_RollInterpolator";
ROUTE1095.fromField = "value_changed";
ROUTE1095.toNode = "boxman_r_wrist";
ROUTE1095.toField = "set_rotation";
browser.currentScene.children[465] = ROUTE1095;

let ROUTE1096 = browser.currentScene.createNode("ROUTE");
ROUTE1096.fromNode = "Kick_r_hip_PitchInterpolator";
ROUTE1096.fromField = "value_changed";
ROUTE1096.toNode = "boxman_r_hip";
ROUTE1096.toField = "set_rotation";
browser.currentScene.children[466] = ROUTE1096;

let ROUTE1097 = browser.currentScene.createNode("ROUTE");
ROUTE1097.fromNode = "Kick_r_knee_PitchInterpolator";
ROUTE1097.fromField = "value_changed";
ROUTE1097.toNode = "boxman_r_knee";
ROUTE1097.toField = "set_rotation";
browser.currentScene.children[467] = ROUTE1097;

let ROUTE1098 = browser.currentScene.createNode("ROUTE");
ROUTE1098.fromNode = "Kick_r_ankle_PitchInterpolator";
ROUTE1098.fromField = "value_changed";
ROUTE1098.toNode = "boxman_r_ankle";
ROUTE1098.toField = "set_rotation";
browser.currentScene.children[468] = ROUTE1098;

let ROUTE1099 = browser.currentScene.createNode("ROUTE");
ROUTE1099.fromNode = "Kick_l_hip_PitchInterpolator";
ROUTE1099.fromField = "value_changed";
ROUTE1099.toNode = "boxman_l_hip";
ROUTE1099.toField = "set_rotation";
browser.currentScene.children[469] = ROUTE1099;

let ROUTE1100 = browser.currentScene.createNode("ROUTE");
ROUTE1100.fromNode = "Kick_l_knee_PitchInterpolator";
ROUTE1100.fromField = "value_changed";
ROUTE1100.toNode = "boxman_l_knee";
ROUTE1100.toField = "set_rotation";
browser.currentScene.children[470] = ROUTE1100;

let ROUTE1101 = browser.currentScene.createNode("ROUTE");
ROUTE1101.fromNode = "Kick_r_ankle_PitchInterpolator";
ROUTE1101.fromField = "value_changed";
ROUTE1101.toNode = "boxman_l_ankle";
ROUTE1101.toField = "set_rotation";
browser.currentScene.children[471] = ROUTE1101;

let ROUTE1102 = browser.currentScene.createNode("ROUTE");
ROUTE1102.fromNode = "Kick_vl5_YawInterpolator";
ROUTE1102.fromField = "value_changed";
ROUTE1102.toNode = "boxman_vl5";
ROUTE1102.toField = "set_rotation";
browser.currentScene.children[472] = ROUTE1102;

let ROUTE1103 = browser.currentScene.createNode("ROUTE");
ROUTE1103.fromNode = "Kick_whole_body_RotationInterpolator";
ROUTE1103.fromField = "value_changed";
ROUTE1103.toNode = "boxman_humanoid_root";
ROUTE1103.toField = "set_rotation";
browser.currentScene.children[473] = ROUTE1103;

let ROUTE1104 = browser.currentScene.createNode("ROUTE");
ROUTE1104.fromNode = "Kick_whole_body_TranslationInterpolator";
ROUTE1104.fromField = "value_changed";
ROUTE1104.toNode = "boxman_humanoid_root";
ROUTE1104.toField = "set_translation";
browser.currentScene.children[474] = ROUTE1104;

let ROUTE1105 = browser.currentScene.createNode("ROUTE");
ROUTE1105.fromNode = "HudProx";
ROUTE1105.fromField = "position_changed";
ROUTE1105.toNode = "HudXform";
ROUTE1105.toField = "set_translation";
browser.currentScene.children[475] = ROUTE1105;

let ROUTE1106 = browser.currentScene.createNode("ROUTE");
ROUTE1106.fromNode = "HudProx";
ROUTE1106.fromField = "orientation_changed";
ROUTE1106.toNode = "HudXform";
ROUTE1106.toField = "set_rotation";
browser.currentScene.children[476] = ROUTE1106;

let ROUTE1107 = browser.currentScene.createNode("ROUTE");
ROUTE1107.fromNode = "Stand_Touch";
ROUTE1107.fromField = "touchTime";
ROUTE1107.toNode = "PitchTimer";
ROUTE1107.toField = "set_stopTime";
browser.currentScene.children[477] = ROUTE1107;

let ROUTE1108 = browser.currentScene.createNode("ROUTE");
ROUTE1108.fromNode = "Stand_Touch";
ROUTE1108.fromField = "touchTime";
ROUTE1108.toNode = "YawTimer";
ROUTE1108.toField = "set_stopTime";
browser.currentScene.children[478] = ROUTE1108;

let ROUTE1109 = browser.currentScene.createNode("ROUTE");
ROUTE1109.fromNode = "Stand_Touch";
ROUTE1109.fromField = "touchTime";
ROUTE1109.toNode = "RollTimer";
ROUTE1109.toField = "set_stopTime";
browser.currentScene.children[479] = ROUTE1109;

let ROUTE1110 = browser.currentScene.createNode("ROUTE");
ROUTE1110.fromNode = "Stand_Touch";
ROUTE1110.fromField = "touchTime";
ROUTE1110.toNode = "WalkTimer";
ROUTE1110.toField = "set_stopTime";
browser.currentScene.children[480] = ROUTE1110;

let ROUTE1111 = browser.currentScene.createNode("ROUTE");
ROUTE1111.fromNode = "Stand_Touch";
ROUTE1111.fromField = "touchTime";
ROUTE1111.toNode = "RunTimer";
ROUTE1111.toField = "set_stopTime";
browser.currentScene.children[481] = ROUTE1111;

let ROUTE1112 = browser.currentScene.createNode("ROUTE");
ROUTE1112.fromNode = "Stand_Touch";
ROUTE1112.fromField = "touchTime";
ROUTE1112.toNode = "JumpTimer";
ROUTE1112.toField = "set_stopTime";
browser.currentScene.children[482] = ROUTE1112;

let ROUTE1113 = browser.currentScene.createNode("ROUTE");
ROUTE1113.fromNode = "Stand_Touch";
ROUTE1113.fromField = "touchTime";
ROUTE1113.toNode = "KickTimer";
ROUTE1113.toField = "set_stopTime";
browser.currentScene.children[483] = ROUTE1113;

let ROUTE1114 = browser.currentScene.createNode("ROUTE");
ROUTE1114.fromNode = "Stand_Touch";
ROUTE1114.fromField = "touchTime";
ROUTE1114.toNode = "StopTimer";
ROUTE1114.toField = "set_stopTime";
browser.currentScene.children[484] = ROUTE1114;

let ROUTE1115 = browser.currentScene.createNode("ROUTE");
ROUTE1115.fromNode = "Stand_Touch";
ROUTE1115.fromField = "touchTime";
ROUTE1115.toNode = "StandTimer";
ROUTE1115.toField = "set_startTime";
browser.currentScene.children[485] = ROUTE1115;

let ROUTE1116 = browser.currentScene.createNode("ROUTE");
ROUTE1116.fromNode = "Pitch_Touch";
ROUTE1116.fromField = "touchTime";
ROUTE1116.toNode = "StandTimer";
ROUTE1116.toField = "set_stopTime";
browser.currentScene.children[486] = ROUTE1116;

let ROUTE1117 = browser.currentScene.createNode("ROUTE");
ROUTE1117.fromNode = "Pitch_Touch";
ROUTE1117.fromField = "touchTime";
ROUTE1117.toNode = "YawTimer";
ROUTE1117.toField = "set_stopTime";
browser.currentScene.children[487] = ROUTE1117;

let ROUTE1118 = browser.currentScene.createNode("ROUTE");
ROUTE1118.fromNode = "Pitch_Touch";
ROUTE1118.fromField = "touchTime";
ROUTE1118.toNode = "RollTimer";
ROUTE1118.toField = "set_stopTime";
browser.currentScene.children[488] = ROUTE1118;

let ROUTE1119 = browser.currentScene.createNode("ROUTE");
ROUTE1119.fromNode = "Pitch_Touch";
ROUTE1119.fromField = "touchTime";
ROUTE1119.toNode = "WalkTimer";
ROUTE1119.toField = "set_stopTime";
browser.currentScene.children[489] = ROUTE1119;

let ROUTE1120 = browser.currentScene.createNode("ROUTE");
ROUTE1120.fromNode = "Pitch_Touch";
ROUTE1120.fromField = "touchTime";
ROUTE1120.toNode = "RunTimer";
ROUTE1120.toField = "set_stopTime";
browser.currentScene.children[490] = ROUTE1120;

let ROUTE1121 = browser.currentScene.createNode("ROUTE");
ROUTE1121.fromNode = "Pitch_Touch";
ROUTE1121.fromField = "touchTime";
ROUTE1121.toNode = "JumpTimer";
ROUTE1121.toField = "set_stopTime";
browser.currentScene.children[491] = ROUTE1121;

let ROUTE1122 = browser.currentScene.createNode("ROUTE");
ROUTE1122.fromNode = "Pitch_Touch";
ROUTE1122.fromField = "touchTime";
ROUTE1122.toNode = "KickTimer";
ROUTE1122.toField = "set_stopTime";
browser.currentScene.children[492] = ROUTE1122;

let ROUTE1123 = browser.currentScene.createNode("ROUTE");
ROUTE1123.fromNode = "Pitch_Touch";
ROUTE1123.fromField = "touchTime";
ROUTE1123.toNode = "StopTimer";
ROUTE1123.toField = "set_stopTime";
browser.currentScene.children[493] = ROUTE1123;

let ROUTE1124 = browser.currentScene.createNode("ROUTE");
ROUTE1124.fromNode = "Pitch_Touch";
ROUTE1124.fromField = "touchTime";
ROUTE1124.toNode = "PitchTimer";
ROUTE1124.toField = "set_startTime";
browser.currentScene.children[494] = ROUTE1124;

let ROUTE1125 = browser.currentScene.createNode("ROUTE");
ROUTE1125.fromNode = "Yaw_Touch";
ROUTE1125.fromField = "touchTime";
ROUTE1125.toNode = "StandTimer";
ROUTE1125.toField = "set_stopTime";
browser.currentScene.children[495] = ROUTE1125;

let ROUTE1126 = browser.currentScene.createNode("ROUTE");
ROUTE1126.fromNode = "Yaw_Touch";
ROUTE1126.fromField = "touchTime";
ROUTE1126.toNode = "PitchTimer";
ROUTE1126.toField = "set_stopTime";
browser.currentScene.children[496] = ROUTE1126;

let ROUTE1127 = browser.currentScene.createNode("ROUTE");
ROUTE1127.fromNode = "Yaw_Touch";
ROUTE1127.fromField = "touchTime";
ROUTE1127.toNode = "RollTimer";
ROUTE1127.toField = "set_stopTime";
browser.currentScene.children[497] = ROUTE1127;

let ROUTE1128 = browser.currentScene.createNode("ROUTE");
ROUTE1128.fromNode = "Yaw_Touch";
ROUTE1128.fromField = "touchTime";
ROUTE1128.toNode = "WalkTimer";
ROUTE1128.toField = "set_stopTime";
browser.currentScene.children[498] = ROUTE1128;

let ROUTE1129 = browser.currentScene.createNode("ROUTE");
ROUTE1129.fromNode = "Yaw_Touch";
ROUTE1129.fromField = "touchTime";
ROUTE1129.toNode = "RunTimer";
ROUTE1129.toField = "set_stopTime";
browser.currentScene.children[499] = ROUTE1129;

let ROUTE1130 = browser.currentScene.createNode("ROUTE");
ROUTE1130.fromNode = "Yaw_Touch";
ROUTE1130.fromField = "touchTime";
ROUTE1130.toNode = "JumpTimer";
ROUTE1130.toField = "set_stopTime";
browser.currentScene.children[500] = ROUTE1130;

let ROUTE1131 = browser.currentScene.createNode("ROUTE");
ROUTE1131.fromNode = "Yaw_Touch";
ROUTE1131.fromField = "touchTime";
ROUTE1131.toNode = "KickTimer";
ROUTE1131.toField = "set_stopTime";
browser.currentScene.children[501] = ROUTE1131;

let ROUTE1132 = browser.currentScene.createNode("ROUTE");
ROUTE1132.fromNode = "Yaw_Touch";
ROUTE1132.fromField = "touchTime";
ROUTE1132.toNode = "StopTimer";
ROUTE1132.toField = "set_stopTime";
browser.currentScene.children[502] = ROUTE1132;

let ROUTE1133 = browser.currentScene.createNode("ROUTE");
ROUTE1133.fromNode = "Yaw_Touch";
ROUTE1133.fromField = "touchTime";
ROUTE1133.toNode = "YawTimer";
ROUTE1133.toField = "set_startTime";
browser.currentScene.children[503] = ROUTE1133;

let ROUTE1134 = browser.currentScene.createNode("ROUTE");
ROUTE1134.fromNode = "Walk_Touch";
ROUTE1134.fromField = "touchTime";
ROUTE1134.toNode = "StandTimer";
ROUTE1134.toField = "set_stopTime";
browser.currentScene.children[504] = ROUTE1134;

let ROUTE1135 = browser.currentScene.createNode("ROUTE");
ROUTE1135.fromNode = "Walk_Touch";
ROUTE1135.fromField = "touchTime";
ROUTE1135.toNode = "PitchTimer";
ROUTE1135.toField = "set_stopTime";
browser.currentScene.children[505] = ROUTE1135;

let ROUTE1136 = browser.currentScene.createNode("ROUTE");
ROUTE1136.fromNode = "Walk_Touch";
ROUTE1136.fromField = "touchTime";
ROUTE1136.toNode = "YawTimer";
ROUTE1136.toField = "set_stopTime";
browser.currentScene.children[506] = ROUTE1136;

let ROUTE1137 = browser.currentScene.createNode("ROUTE");
ROUTE1137.fromNode = "Walk_Touch";
ROUTE1137.fromField = "touchTime";
ROUTE1137.toNode = "RollTimer";
ROUTE1137.toField = "set_stopTime";
browser.currentScene.children[507] = ROUTE1137;

let ROUTE1138 = browser.currentScene.createNode("ROUTE");
ROUTE1138.fromNode = "Walk_Touch";
ROUTE1138.fromField = "touchTime";
ROUTE1138.toNode = "RunTimer";
ROUTE1138.toField = "set_stopTime";
browser.currentScene.children[508] = ROUTE1138;

let ROUTE1139 = browser.currentScene.createNode("ROUTE");
ROUTE1139.fromNode = "Walk_Touch";
ROUTE1139.fromField = "touchTime";
ROUTE1139.toNode = "JumpTimer";
ROUTE1139.toField = "set_stopTime";
browser.currentScene.children[509] = ROUTE1139;

let ROUTE1140 = browser.currentScene.createNode("ROUTE");
ROUTE1140.fromNode = "Walk_Touch";
ROUTE1140.fromField = "touchTime";
ROUTE1140.toNode = "KickTimer";
ROUTE1140.toField = "set_stopTime";
browser.currentScene.children[510] = ROUTE1140;

let ROUTE1141 = browser.currentScene.createNode("ROUTE");
ROUTE1141.fromNode = "Walk_Touch";
ROUTE1141.fromField = "touchTime";
ROUTE1141.toNode = "StopTimer";
ROUTE1141.toField = "set_stopTime";
browser.currentScene.children[511] = ROUTE1141;

let ROUTE1142 = browser.currentScene.createNode("ROUTE");
ROUTE1142.fromNode = "Walk_Touch";
ROUTE1142.fromField = "touchTime";
ROUTE1142.toNode = "WalkTimer";
ROUTE1142.toField = "set_startTime";
browser.currentScene.children[512] = ROUTE1142;

let ROUTE1143 = browser.currentScene.createNode("ROUTE");
ROUTE1143.fromNode = "Roll_Touch";
ROUTE1143.fromField = "touchTime";
ROUTE1143.toNode = "StandTimer";
ROUTE1143.toField = "set_stopTime";
browser.currentScene.children[513] = ROUTE1143;

let ROUTE1144 = browser.currentScene.createNode("ROUTE");
ROUTE1144.fromNode = "Roll_Touch";
ROUTE1144.fromField = "touchTime";
ROUTE1144.toNode = "PitchTimer";
ROUTE1144.toField = "set_stopTime";
browser.currentScene.children[514] = ROUTE1144;

let ROUTE1145 = browser.currentScene.createNode("ROUTE");
ROUTE1145.fromNode = "Roll_Touch";
ROUTE1145.fromField = "touchTime";
ROUTE1145.toNode = "YawTimer";
ROUTE1145.toField = "set_stopTime";
browser.currentScene.children[515] = ROUTE1145;

let ROUTE1146 = browser.currentScene.createNode("ROUTE");
ROUTE1146.fromNode = "Roll_Touch";
ROUTE1146.fromField = "touchTime";
ROUTE1146.toNode = "WalkTimer";
ROUTE1146.toField = "set_stopTime";
browser.currentScene.children[516] = ROUTE1146;

let ROUTE1147 = browser.currentScene.createNode("ROUTE");
ROUTE1147.fromNode = "Roll_Touch";
ROUTE1147.fromField = "touchTime";
ROUTE1147.toNode = "RunTimer";
ROUTE1147.toField = "set_stopTime";
browser.currentScene.children[517] = ROUTE1147;

let ROUTE1148 = browser.currentScene.createNode("ROUTE");
ROUTE1148.fromNode = "Roll_Touch";
ROUTE1148.fromField = "touchTime";
ROUTE1148.toNode = "JumpTimer";
ROUTE1148.toField = "set_stopTime";
browser.currentScene.children[518] = ROUTE1148;

let ROUTE1149 = browser.currentScene.createNode("ROUTE");
ROUTE1149.fromNode = "Roll_Touch";
ROUTE1149.fromField = "touchTime";
ROUTE1149.toNode = "KickTimer";
ROUTE1149.toField = "set_stopTime";
browser.currentScene.children[519] = ROUTE1149;

let ROUTE1150 = browser.currentScene.createNode("ROUTE");
ROUTE1150.fromNode = "Roll_Touch";
ROUTE1150.fromField = "touchTime";
ROUTE1150.toNode = "StopTimer";
ROUTE1150.toField = "set_stopTime";
browser.currentScene.children[520] = ROUTE1150;

let ROUTE1151 = browser.currentScene.createNode("ROUTE");
ROUTE1151.fromNode = "Roll_Touch";
ROUTE1151.fromField = "touchTime";
ROUTE1151.toNode = "RollTimer";
ROUTE1151.toField = "set_startTime";
browser.currentScene.children[521] = ROUTE1151;

let ROUTE1152 = browser.currentScene.createNode("ROUTE");
ROUTE1152.fromNode = "Run_Touch";
ROUTE1152.fromField = "touchTime";
ROUTE1152.toNode = "StandTimer";
ROUTE1152.toField = "set_stopTime";
browser.currentScene.children[522] = ROUTE1152;

let ROUTE1153 = browser.currentScene.createNode("ROUTE");
ROUTE1153.fromNode = "Run_Touch";
ROUTE1153.fromField = "touchTime";
ROUTE1153.toNode = "PitchTimer";
ROUTE1153.toField = "set_stopTime";
browser.currentScene.children[523] = ROUTE1153;

let ROUTE1154 = browser.currentScene.createNode("ROUTE");
ROUTE1154.fromNode = "Run_Touch";
ROUTE1154.fromField = "touchTime";
ROUTE1154.toNode = "YawTimer";
ROUTE1154.toField = "set_stopTime";
browser.currentScene.children[524] = ROUTE1154;

let ROUTE1155 = browser.currentScene.createNode("ROUTE");
ROUTE1155.fromNode = "Run_Touch";
ROUTE1155.fromField = "touchTime";
ROUTE1155.toNode = "RollTimer";
ROUTE1155.toField = "set_stopTime";
browser.currentScene.children[525] = ROUTE1155;

let ROUTE1156 = browser.currentScene.createNode("ROUTE");
ROUTE1156.fromNode = "Run_Touch";
ROUTE1156.fromField = "touchTime";
ROUTE1156.toNode = "WalkTimer";
ROUTE1156.toField = "set_stopTime";
browser.currentScene.children[526] = ROUTE1156;

let ROUTE1157 = browser.currentScene.createNode("ROUTE");
ROUTE1157.fromNode = "Run_Touch";
ROUTE1157.fromField = "touchTime";
ROUTE1157.toNode = "JumpTimer";
ROUTE1157.toField = "set_stopTime";
browser.currentScene.children[527] = ROUTE1157;

let ROUTE1158 = browser.currentScene.createNode("ROUTE");
ROUTE1158.fromNode = "Run_Touch";
ROUTE1158.fromField = "touchTime";
ROUTE1158.toNode = "KickTimer";
ROUTE1158.toField = "set_stopTime";
browser.currentScene.children[528] = ROUTE1158;

let ROUTE1159 = browser.currentScene.createNode("ROUTE");
ROUTE1159.fromNode = "Run_Touch";
ROUTE1159.fromField = "touchTime";
ROUTE1159.toNode = "StopTimer";
ROUTE1159.toField = "set_stopTime";
browser.currentScene.children[529] = ROUTE1159;

let ROUTE1160 = browser.currentScene.createNode("ROUTE");
ROUTE1160.fromNode = "Run_Touch";
ROUTE1160.fromField = "touchTime";
ROUTE1160.toNode = "RunTimer";
ROUTE1160.toField = "set_startTime";
browser.currentScene.children[530] = ROUTE1160;

let ROUTE1161 = browser.currentScene.createNode("ROUTE");
ROUTE1161.fromNode = "Jump_Touch";
ROUTE1161.fromField = "touchTime";
ROUTE1161.toNode = "StandTimer";
ROUTE1161.toField = "set_stopTime";
browser.currentScene.children[531] = ROUTE1161;

let ROUTE1162 = browser.currentScene.createNode("ROUTE");
ROUTE1162.fromNode = "Jump_Touch";
ROUTE1162.fromField = "touchTime";
ROUTE1162.toNode = "PitchTimer";
ROUTE1162.toField = "set_stopTime";
browser.currentScene.children[532] = ROUTE1162;

let ROUTE1163 = browser.currentScene.createNode("ROUTE");
ROUTE1163.fromNode = "Jump_Touch";
ROUTE1163.fromField = "touchTime";
ROUTE1163.toNode = "YawTimer";
ROUTE1163.toField = "set_stopTime";
browser.currentScene.children[533] = ROUTE1163;

let ROUTE1164 = browser.currentScene.createNode("ROUTE");
ROUTE1164.fromNode = "Jump_Touch";
ROUTE1164.fromField = "touchTime";
ROUTE1164.toNode = "RollTimer";
ROUTE1164.toField = "set_stopTime";
browser.currentScene.children[534] = ROUTE1164;

let ROUTE1165 = browser.currentScene.createNode("ROUTE");
ROUTE1165.fromNode = "Jump_Touch";
ROUTE1165.fromField = "touchTime";
ROUTE1165.toNode = "WalkTimer";
ROUTE1165.toField = "set_stopTime";
browser.currentScene.children[535] = ROUTE1165;

let ROUTE1166 = browser.currentScene.createNode("ROUTE");
ROUTE1166.fromNode = "Jump_Touch";
ROUTE1166.fromField = "touchTime";
ROUTE1166.toNode = "RunTimer";
ROUTE1166.toField = "set_stopTime";
browser.currentScene.children[536] = ROUTE1166;

let ROUTE1167 = browser.currentScene.createNode("ROUTE");
ROUTE1167.fromNode = "Jump_Touch";
ROUTE1167.fromField = "touchTime";
ROUTE1167.toNode = "KickTimer";
ROUTE1167.toField = "set_stopTime";
browser.currentScene.children[537] = ROUTE1167;

let ROUTE1168 = browser.currentScene.createNode("ROUTE");
ROUTE1168.fromNode = "Jump_Touch";
ROUTE1168.fromField = "touchTime";
ROUTE1168.toNode = "StopTimer";
ROUTE1168.toField = "set_stopTime";
browser.currentScene.children[538] = ROUTE1168;

let ROUTE1169 = browser.currentScene.createNode("ROUTE");
ROUTE1169.fromNode = "Jump_Touch";
ROUTE1169.fromField = "touchTime";
ROUTE1169.toNode = "JumpTimer";
ROUTE1169.toField = "set_startTime";
browser.currentScene.children[539] = ROUTE1169;

let ROUTE1170 = browser.currentScene.createNode("ROUTE");
ROUTE1170.fromNode = "Kick_Touch";
ROUTE1170.fromField = "touchTime";
ROUTE1170.toNode = "StandTimer";
ROUTE1170.toField = "set_stopTime";
browser.currentScene.children[540] = ROUTE1170;

let ROUTE1171 = browser.currentScene.createNode("ROUTE");
ROUTE1171.fromNode = "Kick_Touch";
ROUTE1171.fromField = "touchTime";
ROUTE1171.toNode = "PitchTimer";
ROUTE1171.toField = "set_stopTime";
browser.currentScene.children[541] = ROUTE1171;

let ROUTE1172 = browser.currentScene.createNode("ROUTE");
ROUTE1172.fromNode = "Kick_Touch";
ROUTE1172.fromField = "touchTime";
ROUTE1172.toNode = "YawTimer";
ROUTE1172.toField = "set_stopTime";
browser.currentScene.children[542] = ROUTE1172;

let ROUTE1173 = browser.currentScene.createNode("ROUTE");
ROUTE1173.fromNode = "Kick_Touch";
ROUTE1173.fromField = "touchTime";
ROUTE1173.toNode = "RollTimer";
ROUTE1173.toField = "set_stopTime";
browser.currentScene.children[543] = ROUTE1173;

let ROUTE1174 = browser.currentScene.createNode("ROUTE");
ROUTE1174.fromNode = "Kick_Touch";
ROUTE1174.fromField = "touchTime";
ROUTE1174.toNode = "WalkTimer";
ROUTE1174.toField = "set_stopTime";
browser.currentScene.children[544] = ROUTE1174;

let ROUTE1175 = browser.currentScene.createNode("ROUTE");
ROUTE1175.fromNode = "Kick_Touch";
ROUTE1175.fromField = "touchTime";
ROUTE1175.toNode = "RunTimer";
ROUTE1175.toField = "set_stopTime";
browser.currentScene.children[545] = ROUTE1175;

let ROUTE1176 = browser.currentScene.createNode("ROUTE");
ROUTE1176.fromNode = "Kick_Touch";
ROUTE1176.fromField = "touchTime";
ROUTE1176.toNode = "JumpTimer";
ROUTE1176.toField = "set_stopTime";
browser.currentScene.children[546] = ROUTE1176;

let ROUTE1177 = browser.currentScene.createNode("ROUTE");
ROUTE1177.fromNode = "Kick_Touch";
ROUTE1177.fromField = "touchTime";
ROUTE1177.toNode = "StopTimer";
ROUTE1177.toField = "set_stopTime";
browser.currentScene.children[547] = ROUTE1177;

let ROUTE1178 = browser.currentScene.createNode("ROUTE");
ROUTE1178.fromNode = "Kick_Touch";
ROUTE1178.fromField = "touchTime";
ROUTE1178.toNode = "KickTimer";
ROUTE1178.toField = "set_startTime";
browser.currentScene.children[548] = ROUTE1178;

let ROUTE1179 = browser.currentScene.createNode("ROUTE");
ROUTE1179.fromNode = "Stop_Touch";
ROUTE1179.fromField = "touchTime";
ROUTE1179.toNode = "StandTimer";
ROUTE1179.toField = "set_stopTime";
browser.currentScene.children[549] = ROUTE1179;

let ROUTE1180 = browser.currentScene.createNode("ROUTE");
ROUTE1180.fromNode = "Stop_Touch";
ROUTE1180.fromField = "touchTime";
ROUTE1180.toNode = "PitchTimer";
ROUTE1180.toField = "set_stopTime";
browser.currentScene.children[550] = ROUTE1180;

let ROUTE1181 = browser.currentScene.createNode("ROUTE");
ROUTE1181.fromNode = "Stop_Touch";
ROUTE1181.fromField = "touchTime";
ROUTE1181.toNode = "YawTimer";
ROUTE1181.toField = "set_stopTime";
browser.currentScene.children[551] = ROUTE1181;

let ROUTE1182 = browser.currentScene.createNode("ROUTE");
ROUTE1182.fromNode = "Stop_Touch";
ROUTE1182.fromField = "touchTime";
ROUTE1182.toNode = "RollTimer";
ROUTE1182.toField = "set_stopTime";
browser.currentScene.children[552] = ROUTE1182;

let ROUTE1183 = browser.currentScene.createNode("ROUTE");
ROUTE1183.fromNode = "Stop_Touch";
ROUTE1183.fromField = "touchTime";
ROUTE1183.toNode = "WalkTimer";
ROUTE1183.toField = "set_stopTime";
browser.currentScene.children[553] = ROUTE1183;

let ROUTE1184 = browser.currentScene.createNode("ROUTE");
ROUTE1184.fromNode = "Stop_Touch";
ROUTE1184.fromField = "touchTime";
ROUTE1184.toNode = "RunTimer";
ROUTE1184.toField = "set_stopTime";
browser.currentScene.children[554] = ROUTE1184;

let ROUTE1185 = browser.currentScene.createNode("ROUTE");
ROUTE1185.fromNode = "Stop_Touch";
ROUTE1185.fromField = "touchTime";
ROUTE1185.toNode = "JumpTimer";
ROUTE1185.toField = "set_stopTime";
browser.currentScene.children[555] = ROUTE1185;

let ROUTE1186 = browser.currentScene.createNode("ROUTE");
ROUTE1186.fromNode = "Stop_Touch";
ROUTE1186.fromField = "touchTime";
ROUTE1186.toNode = "KickTimer";
ROUTE1186.toField = "set_stopTime";
browser.currentScene.children[556] = ROUTE1186;

let ROUTE1187 = browser.currentScene.createNode("ROUTE");
ROUTE1187.fromNode = "Stop_Touch";
ROUTE1187.fromField = "touchTime";
ROUTE1187.toNode = "StopTimer";
ROUTE1187.toField = "set_startTime";
browser.currentScene.children[557] = ROUTE1187;

}
main ();

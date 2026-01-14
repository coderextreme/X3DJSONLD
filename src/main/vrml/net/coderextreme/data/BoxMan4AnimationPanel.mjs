const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "BoxMan4AnimationPanel.x3d");
scene.addMetaData("description", "A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation panel shows multiple behaviors.");
scene.addMetaData("creator", "Joe Williams and James Smith - james@vapourtech.com");
scene.addMetaData("translator", "Joe Williams and Don Brutzman");
scene.addMetaData("generator", ".x3d to .x3d translation used BS Contact Geo 8.203");
scene.addMetaData("generator", "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit");
scene.addMetaData("generator", "x3d-tidy V2.2.1, https://www.npmjs.com/package/x3d-tidy");
scene.addMetaData("created", "1 March 2001");
scene.addMetaData("revision", "12 January 2017");
scene.addMetaData("translated", "14 January 2017");
scene.addMetaData("modified", "Tue, 09 Sep 2025 19:37:51 GMT");
scene.addMetaData("Image", "BoxManAnimationPanelInclined.png");
scene.addMetaData("MovingImage", "BoxManAnimationPanel.mp4");
scene.addMetaData("MovingImage", "https://www.youtube.com/watch?v=8tI83Rtg_DU");
scene.addMetaData("reference", "https://twitter.com/Web3DConsortium/status/820638047523913728");
scene.addMetaData("reference", "https://twitter.com/Web3DConsortium/status/820642726009978881");
scene.addMetaData("reference", "http://HAnim.org");
scene.addMetaData("reference", "../Legacy/originals/boxman.wrl");
scene.addMetaData("reference", "BoxMan4.x3d");
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
let WorldInfo33 = browser.currentScene.createNode("WorldInfo");
WorldInfo33.title = "BoxMan - A Seamless VRML Human";
WorldInfo33.info = new X3D.MFString([new X3D.SFString("(C) 2000 James Smith - james@vapourtech.com"), new X3D.SFString("http://www.vapourtech.com/team/james/boxman.wrl"), new X3D.SFString("Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com")]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo33;

let Background34 = browser.currentScene.createNode("Background");
Background34.skyColor = new X3D.MFColor([0.75,0.75,0.75]);
Background34.groundColor = new X3D.MFColor([0.6,0.6,0.6]);
browser.currentScene.children[1] = Background34;

let HAnimHumanoid35 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid35.DEF = "boxman_Humanoid";
HAnimHumanoid35.name = "Humanoid";
HAnimHumanoid35.info = new X3D.MFString([new X3D.SFString("authorName=James Smith"), new X3D.SFString("authorEmail=james@vapourtech.com"), new X3D.SFString("copyright=(C) 2000 James Smith - james@vapourtech.com"), new X3D.SFString("humanoidVersion=1.0")]);
HAnimHumanoid35.version = "1.0";
let HAnimJoint36 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint36.DEF = "boxman_humanoid_root";
HAnimJoint36.name = "humanoid_root";
HAnimJoint36.center = new X3D.SFVec3f([0,0.9723,-0.0728]);
HAnimJoint36.skinCoordIndex = new X3D.MFInt32([0,1,2,3,4,5,6,7,8,9,10,11]);
HAnimJoint36.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment37 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment37.DEF = "boxman_sacrum";
HAnimSegment37.name = "sacrum";
let Transform38 = browser.currentScene.createNode("Transform");
Transform38.translation = new X3D.SFVec3f([0,0.9723,-0.0728]);
let Shape39 = browser.currentScene.createNode("Shape");
Shape39.DEF = "SphereYellow";
let Appearance40 = browser.currentScene.createNode("Appearance");
let Material41 = browser.currentScene.createNode("Material");
Material41.diffuseColor = new X3D.SFColor([1,1,0]);
material = Material41;

appearance = Appearance40;

let Sphere42 = browser.currentScene.createNode("Sphere");
Sphere42.radius = 0.02;
geometry = Sphere42;

Transform38YYY.child = new X3D.undefined();

Transform38ZZZ.child[0] = Shape39;

HAnimSegment37YYY.children = new X3D.MFNode();

HAnimSegment37ZZZ.children[0] = Transform38;

HAnimJoint36YYY.children = new X3D.MFNode();

HAnimJoint36ZZZ.children[0] = HAnimSegment37;

let HAnimJoint43 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint43.DEF = "boxman_l_hip";
HAnimJoint43.name = "l_hip";
HAnimJoint43.center = new X3D.SFVec3f([0.0956,0.9364,0]);
HAnimJoint43.skinCoordIndex = new X3D.MFInt32([12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43]);
HAnimJoint43.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
let HAnimSegment44 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment44.DEF = "boxman_l_thigh";
HAnimSegment44.name = "l_thigh";
let Transform45 = browser.currentScene.createNode("Transform");
Transform45.translation = new X3D.SFVec3f([0.0956,0.9364,0]);
let Shape46 = browser.currentScene.createNode("Shape");
Shape46.USE = "SphereYellow";
Transform45YYY.child = new X3D.undefined();

Transform45ZZZ.child[0] = Shape46;

HAnimSegment44YYY.children = new X3D.MFNode();

HAnimSegment44ZZZ.children[0] = Transform45;

HAnimJoint43YYY.children = new X3D.MFNode();

HAnimJoint43ZZZ.children[0] = HAnimSegment44;

let HAnimJoint47 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint47.DEF = "boxman_l_knee";
HAnimJoint47.name = "l_knee";
HAnimJoint47.center = new X3D.SFVec3f([0.0956,0.5095,-0.0036]);
HAnimJoint47.skinCoordIndex = new X3D.MFInt32([36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63]);
HAnimJoint47.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment48 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment48.DEF = "boxman_l_calf";
HAnimSegment48.name = "l_calf";
let Transform49 = browser.currentScene.createNode("Transform");
Transform49.translation = new X3D.SFVec3f([0.0956,0.5095,-0.0036]);
let Shape50 = browser.currentScene.createNode("Shape");
Shape50.USE = "SphereYellow";
Transform49YYY.child = new X3D.undefined();

Transform49ZZZ.child[0] = Shape50;

HAnimSegment48YYY.children = new X3D.MFNode();

HAnimSegment48ZZZ.children[0] = Transform49;

HAnimJoint47YYY.children = new X3D.MFNode();

HAnimJoint47ZZZ.children[0] = HAnimSegment48;

let HAnimJoint51 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint51.DEF = "boxman_l_ankle";
HAnimJoint51.name = "l_ankle";
HAnimJoint51.rotation = new X3D.SFRotation([-1,0,0,0.888471427100471]);
HAnimJoint51.center = new X3D.SFVec3f([0.0946,0.0762,-0.0261]);
HAnimJoint51.skinCoordIndex = new X3D.MFInt32([64,65,66,67,68,69,70,71]);
HAnimJoint51.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment52 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment52.DEF = "boxman_l_hindfoot";
HAnimSegment52.name = "l_hindfoot";
let Transform53 = browser.currentScene.createNode("Transform");
Transform53.translation = new X3D.SFVec3f([0.0946,0.0762,-0.0261]);
let Shape54 = browser.currentScene.createNode("Shape");
Shape54.USE = "SphereYellow";
Transform53YYY.child = new X3D.undefined();

Transform53ZZZ.child[0] = Shape54;

HAnimSegment52YYY.children = new X3D.MFNode();

HAnimSegment52ZZZ.children[0] = Transform53;

HAnimJoint51YYY.children = new X3D.MFNode();

HAnimJoint51ZZZ.children[0] = HAnimSegment52;

let HAnimJoint55 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint55.DEF = "boxman_l_midtarsal";
HAnimJoint55.name = "l_midtarsal";
HAnimJoint55.center = new X3D.SFVec3f([0.1079,0.0317,0.067]);
HAnimJoint55.skinCoordIndex = new X3D.MFInt32([72,73,74,75,76,77,78,79]);
HAnimJoint55.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment56 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment56.DEF = "boxman_l_middistal";
HAnimSegment56.name = "l_middistal";
let Transform57 = browser.currentScene.createNode("Transform");
Transform57.translation = new X3D.SFVec3f([0.1079,0.0317,0.067]);
let Shape58 = browser.currentScene.createNode("Shape");
Shape58.USE = "SphereYellow";
Transform57YYY.child = new X3D.undefined();

Transform57ZZZ.child[0] = Shape58;

HAnimSegment56YYY.children = new X3D.MFNode();

HAnimSegment56ZZZ.children[0] = Transform57;

let HAnimSite59 = browser.currentScene.createNode("HAnimSite");
HAnimSite59.DEF = "boxman_l_middistal_tip";
HAnimSite59.name = "l_middistal_tip";
HAnimSite59.translation = new X3D.SFVec3f([0.095,0.0005,0.1924]);
let Shape60 = browser.currentScene.createNode("Shape");
Shape60.DEF = "SphereRed";
let Appearance61 = browser.currentScene.createNode("Appearance");
let Material62 = browser.currentScene.createNode("Material");
Material62.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material62;

appearance = Appearance61;

let Sphere63 = browser.currentScene.createNode("Sphere");
Sphere63.radius = 0.02;
geometry = Sphere63;

HAnimSite59YYY.children = new X3D.MFNode();

HAnimSite59ZZZ.children[0] = Shape60;

HAnimSegment56ZZZ.children[1] = HAnimSite59;

HAnimJoint55YYY.children = new X3D.MFNode();

HAnimJoint55ZZZ.children[0] = HAnimSegment56;

HAnimJoint51ZZZ.children[1] = HAnimJoint55;

HAnimJoint47ZZZ.children[1] = HAnimJoint51;

HAnimJoint43ZZZ.children[1] = HAnimJoint47;

HAnimJoint36ZZZ.children[1] = HAnimJoint43;

let HAnimJoint64 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint64.DEF = "boxman_r_hip";
HAnimJoint64.name = "r_hip";
HAnimJoint64.rotation = new X3D.SFRotation([-1,0,0,2.01809664178471]);
HAnimJoint64.center = new X3D.SFVec3f([-0.0956,0.9364,0]);
HAnimJoint64.skinCoordIndex = new X3D.MFInt32([80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111]);
HAnimJoint64.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
let HAnimSegment65 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment65.DEF = "boxman_r_thigh";
HAnimSegment65.name = "r_thigh";
let Transform66 = browser.currentScene.createNode("Transform");
Transform66.translation = new X3D.SFVec3f([-0.0956,0.9364,0]);
let Shape67 = browser.currentScene.createNode("Shape");
Shape67.USE = "SphereYellow";
Transform66YYY.child = new X3D.undefined();

Transform66ZZZ.child[0] = Shape67;

HAnimSegment65YYY.children = new X3D.MFNode();

HAnimSegment65ZZZ.children[0] = Transform66;

HAnimJoint64YYY.children = new X3D.MFNode();

HAnimJoint64ZZZ.children[0] = HAnimSegment65;

let HAnimJoint68 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint68.DEF = "boxman_r_knee";
HAnimJoint68.name = "r_knee";
HAnimJoint68.rotation = new X3D.SFRotation([1,0,0,1.67652764530233]);
HAnimJoint68.center = new X3D.SFVec3f([-0.0956,0.5095,-0.0036]);
HAnimJoint68.skinCoordIndex = new X3D.MFInt32([104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131]);
HAnimJoint68.skinCoordWeight = new X3D.MFFloat([0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment69 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment69.DEF = "boxman_r_calf";
HAnimSegment69.name = "r_calf";
let Transform70 = browser.currentScene.createNode("Transform");
Transform70.translation = new X3D.SFVec3f([-0.0956,0.5095,-0.0036]);
let Shape71 = browser.currentScene.createNode("Shape");
Shape71.USE = "SphereYellow";
Transform70YYY.child = new X3D.undefined();

Transform70ZZZ.child[0] = Shape71;

HAnimSegment69YYY.children = new X3D.MFNode();

HAnimSegment69ZZZ.children[0] = Transform70;

HAnimJoint68YYY.children = new X3D.MFNode();

HAnimJoint68ZZZ.children[0] = HAnimSegment69;

let HAnimJoint72 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint72.DEF = "boxman_r_ankle";
HAnimJoint72.name = "r_ankle";
HAnimJoint72.rotation = new X3D.SFRotation([-1,0,0,0.888471427100471]);
HAnimJoint72.center = new X3D.SFVec3f([-0.0946,0.0762,-0.0261]);
HAnimJoint72.skinCoordIndex = new X3D.MFInt32([132,133,134,135,136,137,138,139]);
HAnimJoint72.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment73 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment73.DEF = "boxman_r_hindfoot";
HAnimSegment73.name = "r_hindfoot";
let Transform74 = browser.currentScene.createNode("Transform");
Transform74.translation = new X3D.SFVec3f([-0.0946,0.0762,-0.0261]);
let Shape75 = browser.currentScene.createNode("Shape");
Shape75.USE = "SphereYellow";
Transform74YYY.child = new X3D.undefined();

Transform74ZZZ.child[0] = Shape75;

HAnimSegment73YYY.children = new X3D.MFNode();

HAnimSegment73ZZZ.children[0] = Transform74;

HAnimJoint72YYY.children = new X3D.MFNode();

HAnimJoint72ZZZ.children[0] = HAnimSegment73;

let HAnimJoint76 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint76.DEF = "boxman_r_midtarsal";
HAnimJoint76.name = "r_midtarsal";
HAnimJoint76.center = new X3D.SFVec3f([-0.1079,0.0317,0.067]);
HAnimJoint76.skinCoordIndex = new X3D.MFInt32([140,141,142,143,144,145,146,147]);
HAnimJoint76.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment77 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment77.DEF = "boxman_r_middistal";
HAnimSegment77.name = "r_middistal";
let Transform78 = browser.currentScene.createNode("Transform");
Transform78.translation = new X3D.SFVec3f([-0.1079,0.0317,0.067]);
let Shape79 = browser.currentScene.createNode("Shape");
Shape79.USE = "SphereYellow";
Transform78YYY.child = new X3D.undefined();

Transform78ZZZ.child[0] = Shape79;

HAnimSegment77YYY.children = new X3D.MFNode();

HAnimSegment77ZZZ.children[0] = Transform78;

let HAnimSite80 = browser.currentScene.createNode("HAnimSite");
HAnimSite80.DEF = "boxman_r_middistal_tip";
HAnimSite80.name = "r_middistal_tip";
HAnimSite80.translation = new X3D.SFVec3f([-0.095,0.0005,0.1924]);
let Shape81 = browser.currentScene.createNode("Shape");
Shape81.USE = "SphereRed";
HAnimSite80YYY.children = new X3D.MFNode();

HAnimSite80ZZZ.children[0] = Shape81;

HAnimSegment77ZZZ.children[1] = HAnimSite80;

HAnimJoint76YYY.children = new X3D.MFNode();

HAnimJoint76ZZZ.children[0] = HAnimSegment77;

HAnimJoint72ZZZ.children[1] = HAnimJoint76;

HAnimJoint68ZZZ.children[1] = HAnimJoint72;

HAnimJoint64ZZZ.children[1] = HAnimJoint68;

HAnimJoint36ZZZ.children[2] = HAnimJoint64;

let HAnimJoint82 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint82.DEF = "boxman_vl5";
HAnimJoint82.name = "vl5";
HAnimJoint82.center = new X3D.SFVec3f([0,1.0817,-0.0728]);
HAnimJoint82.skinCoordIndex = new X3D.MFInt32([148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167]);
HAnimJoint82.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
let HAnimSegment83 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment83.DEF = "boxman_l5";
HAnimSegment83.name = "l5";
let Transform84 = browser.currentScene.createNode("Transform");
Transform84.translation = new X3D.SFVec3f([0,1.0817,-0.0728]);
let Shape85 = browser.currentScene.createNode("Shape");
Shape85.USE = "SphereYellow";
Transform84YYY.child = new X3D.undefined();

Transform84ZZZ.child[0] = Shape85;

HAnimSegment83YYY.children = new X3D.MFNode();

HAnimSegment83ZZZ.children[0] = Transform84;

HAnimJoint82YYY.children = new X3D.MFNode();

HAnimJoint82ZZZ.children[0] = HAnimSegment83;

let HAnimJoint86 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint86.DEF = "boxman_skullbase";
HAnimJoint86.name = "skullbase";
HAnimJoint86.rotation = new X3D.SFRotation([-0.999999999999998,0,0,0.447704477724534]);
HAnimJoint86.center = new X3D.SFVec3f([0,1.644,0.036]);
HAnimJoint86.skinCoordIndex = new X3D.MFInt32([168,169,170,171,172,173,174,175]);
HAnimJoint86.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment87 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment87.DEF = "boxman_skull";
HAnimSegment87.name = "skull";
let Transform88 = browser.currentScene.createNode("Transform");
Transform88.translation = new X3D.SFVec3f([0,1.644,0.036]);
let Shape89 = browser.currentScene.createNode("Shape");
Shape89.USE = "SphereYellow";
Transform88YYY.child = new X3D.undefined();

Transform88ZZZ.child[0] = Shape89;

HAnimSegment87YYY.children = new X3D.MFNode();

HAnimSegment87ZZZ.children[0] = Transform88;

let HAnimSite90 = browser.currentScene.createNode("HAnimSite");
HAnimSite90.DEF = "boxman_skull_tip";
HAnimSite90.name = "skull_tip";
HAnimSite90.translation = new X3D.SFVec3f([-0.0029,1.7771,0.0274]);
let Shape91 = browser.currentScene.createNode("Shape");
Shape91.USE = "SphereYellow";
HAnimSite90YYY.children = new X3D.MFNode();

HAnimSite90ZZZ.children[0] = Shape91;

HAnimSegment87ZZZ.children[1] = HAnimSite90;

HAnimJoint86YYY.children = new X3D.MFNode();

HAnimJoint86ZZZ.children[0] = HAnimSegment87;

HAnimJoint82ZZZ.children[1] = HAnimJoint86;

let HAnimJoint92 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint92.DEF = "boxman_l_shoulder";
HAnimJoint92.name = "l_shoulder";
HAnimJoint92.rotation = new X3D.SFRotation([-0.235886128343184,0,0.971780702862154,1.74087617232715]);
HAnimJoint92.center = new X3D.SFVec3f([0.1968,1.4642,-0.0265]);
HAnimJoint92.skinCoordIndex = new X3D.MFInt32([176,177,178,179,180,181,182,183]);
HAnimJoint92.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment93 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment93.DEF = "boxman_l_upperarm";
HAnimSegment93.name = "l_upperarm";
let Transform94 = browser.currentScene.createNode("Transform");
Transform94.translation = new X3D.SFVec3f([0.1968,1.4642,-0.0265]);
let Shape95 = browser.currentScene.createNode("Shape");
Shape95.USE = "SphereYellow";
Transform94YYY.child = new X3D.undefined();

Transform94ZZZ.child[0] = Shape95;

HAnimSegment93YYY.children = new X3D.MFNode();

HAnimSegment93ZZZ.children[0] = Transform94;

HAnimJoint92YYY.children = new X3D.MFNode();

HAnimJoint92ZZZ.children[0] = HAnimSegment93;

let HAnimJoint96 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint96.DEF = "boxman_l_elbow";
HAnimJoint96.name = "l_elbow";
HAnimJoint96.rotation = new X3D.SFRotation([-0.970142500145332,0.242535625036333,0,2.45770714065071]);
HAnimJoint96.center = new X3D.SFVec3f([0.1982,1.1622,-0.0557]);
HAnimJoint96.skinCoordIndex = new X3D.MFInt32([184,185,186,187,188,189,190,191]);
HAnimJoint96.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment97 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment97.DEF = "boxman_l_forearm";
HAnimSegment97.name = "l_forearm";
let Transform98 = browser.currentScene.createNode("Transform");
Transform98.translation = new X3D.SFVec3f([0.1982,1.1622,-0.0557]);
let Shape99 = browser.currentScene.createNode("Shape");
Shape99.USE = "SphereYellow";
Transform98YYY.child = new X3D.undefined();

Transform98ZZZ.child[0] = Shape99;

HAnimSegment97YYY.children = new X3D.MFNode();

HAnimSegment97ZZZ.children[0] = Transform98;

HAnimJoint96YYY.children = new X3D.MFNode();

HAnimJoint96ZZZ.children[0] = HAnimSegment97;

let HAnimJoint100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint100.DEF = "boxman_l_wrist";
HAnimJoint100.name = "l_wrist";
HAnimJoint100.rotation = new X3D.SFRotation([0,1,0,0.530093697003094]);
HAnimJoint100.center = new X3D.SFVec3f([0.1972,0.8929,-0.069]);
HAnimJoint100.skinCoordIndex = new X3D.MFInt32([192,193,194,195,196,197,198,199]);
HAnimJoint100.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment101 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment101.DEF = "boxman_l_hand";
HAnimSegment101.name = "l_hand";
let Transform102 = browser.currentScene.createNode("Transform");
Transform102.translation = new X3D.SFVec3f([0.1972,0.8929,-0.069]);
let Shape103 = browser.currentScene.createNode("Shape");
Shape103.USE = "SphereYellow";
Transform102YYY.child = new X3D.undefined();

Transform102ZZZ.child[0] = Shape103;

HAnimSegment101YYY.children = new X3D.MFNode();

HAnimSegment101ZZZ.children[0] = Transform102;

let HAnimSite104 = browser.currentScene.createNode("HAnimSite");
HAnimSite104.DEF = "boxman_l_hand_tip";
HAnimSite104.name = "l_hand_tip";
HAnimSite104.translation = new X3D.SFVec3f([0.1912,0.6976,-0.071]);
let Shape105 = browser.currentScene.createNode("Shape");
Shape105.USE = "SphereRed";
HAnimSite104YYY.children = new X3D.MFNode();

HAnimSite104ZZZ.children[0] = Shape105;

HAnimSegment101ZZZ.children[1] = HAnimSite104;

HAnimJoint100YYY.children = new X3D.MFNode();

HAnimJoint100ZZZ.children[0] = HAnimSegment101;

HAnimJoint96ZZZ.children[1] = HAnimJoint100;

HAnimJoint92ZZZ.children[1] = HAnimJoint96;

HAnimJoint82ZZZ.children[2] = HAnimJoint92;

let HAnimJoint106 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint106.DEF = "boxman_r_shoulder";
HAnimJoint106.name = "r_shoulder";
HAnimJoint106.rotation = new X3D.SFRotation([0.235886128343184,0,0.971780702862155,4.54230913485243]);
HAnimJoint106.center = new X3D.SFVec3f([-0.1968,1.4642,-0.0265]);
HAnimJoint106.skinCoordIndex = new X3D.MFInt32([200,201,202,203,204,205,206,207]);
HAnimJoint106.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment107 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment107.DEF = "boxman_r_upperarm";
HAnimSegment107.name = "r_upperarm";
let Transform108 = browser.currentScene.createNode("Transform");
Transform108.translation = new X3D.SFVec3f([-0.1968,1.4642,-0.0265]);
let Shape109 = browser.currentScene.createNode("Shape");
Shape109.USE = "SphereYellow";
Transform108YYY.child = new X3D.undefined();

Transform108ZZZ.child[0] = Shape109;

HAnimSegment107YYY.children = new X3D.MFNode();

HAnimSegment107ZZZ.children[0] = Transform108;

HAnimJoint106YYY.children = new X3D.MFNode();

HAnimJoint106ZZZ.children[0] = HAnimSegment107;

let HAnimJoint110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint110.DEF = "boxman_r_elbow";
HAnimJoint110.name = "r_elbow";
HAnimJoint110.rotation = new X3D.SFRotation([0.970142500145332,0.242535625036333,0,3.82547816652888]);
HAnimJoint110.center = new X3D.SFVec3f([-0.1982,1.1622,-0.0557]);
HAnimJoint110.skinCoordIndex = new X3D.MFInt32([208,209,210,211,212,213,214,215]);
HAnimJoint110.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment111 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment111.DEF = "boxman_r_forearm";
HAnimSegment111.name = "r_forearm";
let Transform112 = browser.currentScene.createNode("Transform");
Transform112.translation = new X3D.SFVec3f([-0.1982,1.1622,-0.0557]);
let Shape113 = browser.currentScene.createNode("Shape");
Shape113.USE = "SphereYellow";
Transform112YYY.child = new X3D.undefined();

Transform112ZZZ.child[0] = Shape113;

HAnimSegment111YYY.children = new X3D.MFNode();

HAnimSegment111ZZZ.children[0] = Transform112;

HAnimJoint110YYY.children = new X3D.MFNode();

HAnimJoint110ZZZ.children[0] = HAnimSegment111;

let HAnimJoint114 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint114.DEF = "boxman_r_wrist";
HAnimJoint114.name = "r_wrist";
HAnimJoint114.rotation = new X3D.SFRotation([0,1,0,5.75309161017649]);
HAnimJoint114.center = new X3D.SFVec3f([-0.1972,0.8929,-0.069]);
HAnimJoint114.skinCoordIndex = new X3D.MFInt32([216,217,218,219,220,221,222,223]);
HAnimJoint114.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1]);
let HAnimSegment115 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment115.DEF = "boxman_r_hand";
HAnimSegment115.name = "r_hand";
let Transform116 = browser.currentScene.createNode("Transform");
Transform116.translation = new X3D.SFVec3f([-0.1972,0.8929,-0.069]);
let Shape117 = browser.currentScene.createNode("Shape");
Shape117.USE = "SphereYellow";
Transform116YYY.child = new X3D.undefined();

Transform116ZZZ.child[0] = Shape117;

HAnimSegment115YYY.children = new X3D.MFNode();

HAnimSegment115ZZZ.children[0] = Transform116;

let HAnimSite118 = browser.currentScene.createNode("HAnimSite");
HAnimSite118.DEF = "boxman_r_hand_tip";
HAnimSite118.name = "r_hand_tip";
HAnimSite118.translation = new X3D.SFVec3f([-0.1912,0.6976,-0.071]);
let Shape119 = browser.currentScene.createNode("Shape");
Shape119.USE = "SphereRed";
HAnimSite118YYY.children = new X3D.MFNode();

HAnimSite118ZZZ.children[0] = Shape119;

HAnimSegment115ZZZ.children[1] = HAnimSite118;

HAnimJoint114YYY.children = new X3D.MFNode();

HAnimJoint114ZZZ.children[0] = HAnimSegment115;

HAnimJoint110ZZZ.children[1] = HAnimJoint114;

HAnimJoint106ZZZ.children[1] = HAnimJoint110;

HAnimJoint82ZZZ.children[3] = HAnimJoint106;

HAnimJoint36ZZZ.children[3] = HAnimJoint82;

HAnimHumanoid35.joints = new X3D.MFNode();

HAnimHumanoid35XXX.joints[0] = HAnimJoint36;

let HAnimJoint120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint120.USE = "boxman_humanoid_root";
joints[1] = HAnimJoint120;

let HAnimJoint121 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint121.USE = "boxman_skullbase";
joints[2] = HAnimJoint121;

let HAnimJoint122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint122.USE = "boxman_vl5";
joints[3] = HAnimJoint122;

let HAnimJoint123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint123.USE = "boxman_r_ankle";
joints[4] = HAnimJoint123;

let HAnimJoint124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint124.USE = "boxman_l_ankle";
joints[5] = HAnimJoint124;

let HAnimJoint125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint125.USE = "boxman_r_elbow";
joints[6] = HAnimJoint125;

let HAnimJoint126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint126.USE = "boxman_l_elbow";
joints[7] = HAnimJoint126;

let HAnimJoint127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint127.USE = "boxman_r_hip";
joints[8] = HAnimJoint127;

let HAnimJoint128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint128.USE = "boxman_l_hip";
joints[9] = HAnimJoint128;

let HAnimJoint129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint129.USE = "boxman_r_knee";
joints[10] = HAnimJoint129;

let HAnimJoint130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint130.USE = "boxman_l_knee";
joints[11] = HAnimJoint130;

let HAnimJoint131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint131.USE = "boxman_r_midtarsal";
joints[12] = HAnimJoint131;

let HAnimJoint132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint132.USE = "boxman_l_midtarsal";
joints[13] = HAnimJoint132;

let HAnimJoint133 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint133.USE = "boxman_r_shoulder";
joints[14] = HAnimJoint133;

let HAnimJoint134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint134.USE = "boxman_l_shoulder";
joints[15] = HAnimJoint134;

let HAnimJoint135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint135.USE = "boxman_r_wrist";
joints[16] = HAnimJoint135;

let HAnimJoint136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint136.USE = "boxman_l_wrist";
joints[17] = HAnimJoint136;

let HAnimSegment137 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment137.USE = "boxman_sacrum";
segments[18] = HAnimSegment137;

let HAnimSegment138 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment138.USE = "boxman_l5";
segments[19] = HAnimSegment138;

let HAnimSegment139 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment139.USE = "boxman_skull";
segments[20] = HAnimSegment139;

let HAnimSegment140 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment140.USE = "boxman_l_calf";
segments[21] = HAnimSegment140;

let HAnimSegment141 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment141.USE = "boxman_r_calf";
segments[22] = HAnimSegment141;

let HAnimSegment142 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment142.USE = "boxman_l_forearm";
segments[23] = HAnimSegment142;

let HAnimSegment143 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment143.USE = "boxman_r_forearm";
segments[24] = HAnimSegment143;

let HAnimSegment144 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment144.USE = "boxman_l_hand";
segments[25] = HAnimSegment144;

let HAnimSegment145 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment145.USE = "boxman_r_hand";
segments[26] = HAnimSegment145;

let HAnimSegment146 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment146.USE = "boxman_l_hindfoot";
segments[27] = HAnimSegment146;

let HAnimSegment147 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment147.USE = "boxman_r_hindfoot";
segments[28] = HAnimSegment147;

let HAnimSegment148 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment148.USE = "boxman_l_middistal";
segments[29] = HAnimSegment148;

let HAnimSegment149 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment149.USE = "boxman_r_middistal";
segments[30] = HAnimSegment149;

let HAnimSegment150 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment150.USE = "boxman_l_thigh";
segments[31] = HAnimSegment150;

let HAnimSegment151 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment151.USE = "boxman_r_thigh";
segments[32] = HAnimSegment151;

let HAnimSegment152 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment152.USE = "boxman_l_upperarm";
segments[33] = HAnimSegment152;

let HAnimSegment153 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment153.USE = "boxman_r_upperarm";
segments[34] = HAnimSegment153;

let HAnimSite154 = browser.currentScene.createNode("HAnimSite");
HAnimSite154.USE = "boxman_skull_tip";
viewpoints[35] = HAnimSite154;

let HAnimSite155 = browser.currentScene.createNode("HAnimSite");
HAnimSite155.USE = "boxman_l_hand_tip";
viewpoints[36] = HAnimSite155;

let HAnimSite156 = browser.currentScene.createNode("HAnimSite");
HAnimSite156.USE = "boxman_r_hand_tip";
viewpoints[37] = HAnimSite156;

let HAnimSite157 = browser.currentScene.createNode("HAnimSite");
HAnimSite157.USE = "boxman_l_middistal_tip";
viewpoints[38] = HAnimSite157;

let HAnimSite158 = browser.currentScene.createNode("HAnimSite");
HAnimSite158.USE = "boxman_r_middistal_tip";
viewpoints[39] = HAnimSite158;

let HAnimSite159 = browser.currentScene.createNode("HAnimSite");
HAnimSite159.DEF = "boxman_BoxMan_view";
HAnimSite159.name = "BoxMan_view";
let Viewpoint160 = browser.currentScene.createNode("Viewpoint");
Viewpoint160.DEF = "Inclined_View";
Viewpoint160.description = "Inclined View";
Viewpoint160.position = new X3D.SFVec3f([2,0.9,2]);
Viewpoint160.orientation = new X3D.SFRotation([0,1,0,0.78]);
HAnimSite159YYY.children = new X3D.MFNode();

HAnimSite159ZZZ.children[0] = Viewpoint160;

let Viewpoint161 = browser.currentScene.createNode("Viewpoint");
Viewpoint161.DEF = "Front_View";
Viewpoint161.description = "Front View";
Viewpoint161.position = new X3D.SFVec3f([0,1,3]);
HAnimSite159ZZZ.children[1] = Viewpoint161;

let Viewpoint162 = browser.currentScene.createNode("Viewpoint");
Viewpoint162.DEF = "Best_View";
Viewpoint162.description = "Right-side View";
Viewpoint162.position = new X3D.SFVec3f([-3,1,0]);
Viewpoint162.orientation = new X3D.SFRotation([0,1,0,-1.57]);
HAnimSite159ZZZ.children[2] = Viewpoint162;

let Viewpoint163 = browser.currentScene.createNode("Viewpoint");
Viewpoint163.DEF = "Side_View";
Viewpoint163.description = "Left-side View";
Viewpoint163.position = new X3D.SFVec3f([3,1,0]);
Viewpoint163.orientation = new X3D.SFRotation([0,1,0,1.57]);
HAnimSite159ZZZ.children[3] = Viewpoint163;

let Viewpoint164 = browser.currentScene.createNode("Viewpoint");
Viewpoint164.DEF = "Top_View";
Viewpoint164.description = "Top View";
Viewpoint164.position = new X3D.SFVec3f([0,3,0]);
Viewpoint164.orientation = new X3D.SFRotation([1,0,0,-1.57]);
HAnimSite159ZZZ.children[4] = Viewpoint164;

viewpoints[40] = HAnimSite159;

let Coordinate165 = browser.currentScene.createNode("Coordinate");
Coordinate165.DEF = "SKINCOORD";
Coordinate165.point = new X3D.MFVec3f([-0.05,1,0.05,0.05,1,0.05,0.03,0.97,-0.1,-0.03,0.97,-0.1,0.03,0.94,-0.075,-0.03,0.94,-0.075,0,0.92,0,0,0.94,0.03,-0.12,1.06,0.05,0.12,1.06,0.05,0.12,1.06,-0.1,-0.12,1.06,-0.1,0.0456,0.9364,0.05,0.1456,0.9364,0.05,0.1456,0.9364,-0.05,0.0456,0.9364,-0.05,0.0456,0.9,0.05,0.1456,0.9,0.05,0.1456,0.9,-0.05,0.0456,0.9,-0.05,0.0456,0.8,0.05,0.1456,0.8,0.05,0.1456,0.8,-0.05,0.0456,0.8,-0.05,0.0456,0.7,0.05,0.1456,0.7,0.05,0.1456,0.7,-0.05,0.0456,0.7,-0.05,0.0456,0.6,0.05,0.1456,0.6,0.05,0.1456,0.6,-0.05,0.0456,0.6,-0.05,0.0456,0.55,0.05,0.1456,0.55,0.05,0.1456,0.55,-0.05,0.0456,0.55,-0.05,0.0456,0.52,0.05,0.1456,0.52,0.05,0.1456,0.52,-0.05,0.0456,0.52,-0.05,0.0456,0.5,0.05,0.1456,0.5,0.05,0.1456,0.5,-0.05,0.0456,0.5,-0.05,0.0454,0.43,0.045,0.1454,0.43,0.045,0.1454,0.43,-0.055,0.0454,0.43,-0.055,0.0452,0.36,0.04,0.1452,0.36,0.04,0.1452,0.36,-0.06,0.0452,0.36,-0.06,0.045,0.29,0.035,0.145,0.29,0.035,0.145,0.29,-0.065,0.045,0.29,-0.065,0.0448,0.21,0.03,0.1448,0.21,0.03,0.1448,0.21,-0.07,0.0448,0.21,-0.07,0.0446,0.1262,0.025,0.1446,0.1262,0.025,0.1446,0.1262,-0.075,0.0446,0.1262,-0.075,0.0446,0.0762,0.025,0.1446,0.0762,0.025,0.1446,0,-0.075,0.0446,0,-0.075,0.0446,0.0562,0.057,0.1446,0.0562,0.057,0.1446,0,0.057,0.0446,0,0.057,0.0446,0.0562,0.087,0.1446,0.0562,0.087,0.1446,0,0.087,0.0446,0,0.087,0.0446,0.0562,0.1924,0.1446,0.0562,0.1924,0.1446,0,0.1924,0.0446,0,0.1924,-0.0456,0.9364,0.05,-0.1456,0.9364,0.05,-0.1456,0.9364,-0.05,-0.0456,0.9364,-0.05,-0.0456,0.9,0.05,-0.1456,0.9,0.05,-0.1456,0.9,-0.05,-0.0456,0.9,-0.05,-0.0456,0.8,0.05,-0.1456,0.8,0.05,-0.1456,0.8,-0.05,-0.0456,0.8,-0.05,-0.0456,0.7,0.05,-0.1456,0.7,0.05,-0.1456,0.7,-0.05,-0.0456,0.7,-0.05,-0.0456,0.6,0.05,-0.1456,0.6,0.05,-0.1456,0.6,-0.05,-0.0456,0.6,-0.05,-0.0456,0.55,0.05,-0.1456,0.55,0.05,-0.1456,0.55,-0.05,-0.0456,0.55,-0.05,-0.0456,0.52,0.05,-0.1456,0.52,0.05,-0.1456,0.52,-0.05,-0.0456,0.52,-0.05,-0.0456,0.5,0.05,-0.1456,0.5,0.05,-0.1456,0.5,-0.05,-0.0456,0.5,-0.05,-0.0454,0.43,0.045,-0.1454,0.43,0.045,-0.1454,0.43,-0.055,-0.0454,0.43,-0.055,-0.0452,0.36,0.04,-0.1452,0.36,0.04,-0.1452,0.36,-0.06,-0.0452,0.36,-0.06,-0.045,0.29,0.035,-0.145,0.29,0.035,-0.145,0.29,-0.065,-0.045,0.29,-0.065,-0.0448,0.21,0.03,-0.1448,0.21,0.03,-0.1448,0.21,-0.07,-0.0448,0.21,-0.07,-0.0446,0.1262,0.025,-0.1446,0.1262,0.025,-0.1446,0.1262,-0.075,-0.0446,0.1262,-0.075,-0.0446,0.0762,0.025,-0.1446,0.0762,0.025,-0.1446,0,-0.075,-0.0446,0,-0.075,-0.0446,0.0562,0.057,-0.1446,0.0562,0.057,-0.1446,0,0.057,-0.0446,0,0.057,-0.0446,0.0562,0.087,-0.1446,0.0562,0.087,-0.1446,0,0.087,-0.0446,0,0.087,-0.0446,0.0562,0.1924,-0.1446,0.0562,0.1924,-0.1446,0,0.1924,-0.0446,0,0.1924,-0.12,1.1,0.05,0.12,1.1,0.05,0.12,1.1,-0.1,-0.12,1.1,-0.1,-0.14,1.42,0.045,0.14,1.42,0.045,0.14,1.42,-0.09,-0.14,1.42,-0.09,-0.24,1.52,0.035,0.24,1.52,0.035,0.24,1.52,-0.09,-0.24,1.52,-0.09,-0.05,1.56,0.03,0.05,1.56,0.03,0.05,1.56,-0.06,-0.05,1.56,-0.06,-0.05,1.6,0.06,0.05,1.6,0.06,0.05,1.62,-0.03,-0.05,1.62,-0.03,-0.07,1.777,0.13,0.07,1.777,0.13,0.07,1.777,-0.03,-0.07,1.777,-0.03,-0.07,1.6,0.13,0.07,1.6,0.13,0.07,1.66,-0.03,-0.07,1.66,-0.03,0.16,1.42,0.015,0.24,1.5,0.015,0.24,1.5,-0.075,0.16,1.42,-0.075,0.17,1.18,-0.025,0.23,1.18,-0.025,0.23,1.18,-0.085,0.17,1.18,-0.085,0.17,1.14,-0.025,0.23,1.14,-0.025,0.23,1.14,-0.085,0.17,1.14,-0.085,0.18,0.91,-0.05,0.22,0.91,-0.05,0.22,0.91,-0.09,0.18,0.91,-0.09,0.18,0.87,-0.02,0.22,0.87,-0.02,0.22,0.87,-0.1,0.18,0.87,-0.1,0.18,0.6976,-0.02,0.22,0.6976,-0.02,0.22,0.6976,-0.1,0.18,0.6976,-0.1,-0.16,1.42,0.015,-0.24,1.5,0.015,-0.24,1.5,-0.075,-0.16,1.42,-0.075,-0.17,1.18,-0.025,-0.23,1.18,-0.025,-0.23,1.18,-0.085,-0.17,1.18,-0.085,-0.17,1.14,-0.025,-0.23,1.14,-0.025,-0.23,1.14,-0.085,-0.17,1.14,-0.085,-0.18,0.91,-0.05,-0.22,0.91,-0.05,-0.22,0.91,-0.09,-0.18,0.91,-0.09,-0.18,0.87,-0.02,-0.22,0.87,-0.02,-0.22,0.87,-0.1,-0.18,0.87,-0.1,-0.18,0.6976,-0.02,-0.22,0.6976,-0.02,-0.22,0.6976,-0.1,-0.18,0.6976,-0.1]);
skinCoord = Coordinate165;

let Group166 = browser.currentScene.createNode("Group");
let Shape167 = browser.currentScene.createNode("Shape");
Shape167.DEF = "TrouserSkin";
let Appearance168 = browser.currentScene.createNode("Appearance");
let Material169 = browser.currentScene.createNode("Material");
Material169.diffuseColor = new X3D.SFColor([0,0,1]);
Material169.transparency = 0.5;
material = Material169;

appearance = Appearance168;

let IndexedFaceSet170 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet170.coordIndex = new X3D.MFInt32([0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1]);
let Coordinate171 = browser.currentScene.createNode("Coordinate");
Coordinate171.USE = "SKINCOORD";
coord = Coordinate171;

geometry = IndexedFaceSet170;

Group166YYY.children = new X3D.MFNode();

Group166ZZZ.children[0] = Shape167;

let Shape172 = browser.currentScene.createNode("Shape");
Shape172.DEF = "ShoeSkin";
let Appearance173 = browser.currentScene.createNode("Appearance");
let Material174 = browser.currentScene.createNode("Material");
Material174.diffuseColor = new X3D.SFColor([0,0,0]);
Material174.transparency = 0.5;
material = Material174;

appearance = Appearance173;

let IndexedFaceSet175 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet175.coordIndex = new X3D.MFInt32([60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1]);
let Coordinate176 = browser.currentScene.createNode("Coordinate");
Coordinate176.USE = "SKINCOORD";
coord = Coordinate176;

geometry = IndexedFaceSet175;

Group166ZZZ.children[1] = Shape172;

let Shape177 = browser.currentScene.createNode("Shape");
Shape177.DEF = "ShirtSkin";
let Appearance178 = browser.currentScene.createNode("Appearance");
let Material179 = browser.currentScene.createNode("Material");
Material179.diffuseColor = new X3D.SFColor([1,1,0]);
Material179.transparency = 0.5;
material = Material179;

appearance = Appearance178;

let IndexedFaceSet180 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet180.coordIndex = new X3D.MFInt32([148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1]);
let Coordinate181 = browser.currentScene.createNode("Coordinate");
Coordinate181.USE = "SKINCOORD";
coord = Coordinate181;

geometry = IndexedFaceSet180;

Group166ZZZ.children[2] = Shape177;

let Shape182 = browser.currentScene.createNode("Shape");
Shape182.DEF = "HeadHandsFleshToneSkin";
let Appearance183 = browser.currentScene.createNode("Appearance");
let Material184 = browser.currentScene.createNode("Material");
Material184.diffuseColor = new X3D.SFColor([1,0.75,0.75]);
Material184.transparency = 0.5;
material = Material184;

appearance = Appearance183;

let IndexedFaceSet185 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet185.coordIndex = new X3D.MFInt32([172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
let Coordinate186 = browser.currentScene.createNode("Coordinate");
Coordinate186.USE = "SKINCOORD";
coord = Coordinate186;

geometry = IndexedFaceSet185;

Group166ZZZ.children[3] = Shape182;

let Shape187 = browser.currentScene.createNode("Shape");
Shape187.DEF = "SkinLines";
let Appearance188 = browser.currentScene.createNode("Appearance");
let Material189 = browser.currentScene.createNode("Material");
Material189.diffuseColor = new X3D.SFColor([0,0,0]);
material = Material189;

appearance = Appearance188;

let IndexedLineSet190 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet190.coordIndex = new X3D.MFInt32([0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
let Coordinate191 = browser.currentScene.createNode("Coordinate");
Coordinate191.USE = "SKINCOORD";
coord = Coordinate191;

geometry = IndexedLineSet190;

Group166ZZZ.children[4] = Shape187;

skin[41] = Group166;

browser.currentScene.children[2] = HAnimHumanoid35;

let Group192 = browser.currentScene.createNode("Group");
Group192.DEF = "StopAnimation";
let TimeSensor193 = browser.currentScene.createNode("TimeSensor");
TimeSensor193.DEF = "StopTimer";
TimeSensor193.cycleInterval = 5.73;
TimeSensor193.loop = True;
Group192YYY.children = new X3D.MFNode();

Group192ZZZ.children[0] = TimeSensor193;

let PositionInterpolator194 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator194.DEF = "Stop_humanoid_root_TranslationInterpolator";
PositionInterpolator194.key = new X3D.MFFloat([0,0.5,1]);
PositionInterpolator194.keyValue = new X3D.MFVec3f([0,0,0,0,0,0,0,0,0]);
Group192ZZZ.children[1] = PositionInterpolator194;

let OrientationInterpolator195 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator195.DEF = "Stop_humanoid_root_RotationInterpolator";
OrientationInterpolator195.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator195.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[2] = OrientationInterpolator195;

let OrientationInterpolator196 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator196.DEF = "Stop_sacroiliac_RotationInterpolator";
OrientationInterpolator196.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator196.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[3] = OrientationInterpolator196;

let OrientationInterpolator197 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator197.DEF = "Stop_l_hip_RotationInterpolator";
OrientationInterpolator197.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator197.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[4] = OrientationInterpolator197;

let OrientationInterpolator198 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator198.DEF = "Stop_l_knee_RotationInterpolator";
OrientationInterpolator198.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator198.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[5] = OrientationInterpolator198;

let OrientationInterpolator199 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator199.DEF = "Stop_l_ankle_RotationInterpolator";
OrientationInterpolator199.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator199.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[6] = OrientationInterpolator199;

let OrientationInterpolator200 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator200.DEF = "Stop_l_subtalar_RotationInterpolator";
OrientationInterpolator200.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator200.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[7] = OrientationInterpolator200;

let OrientationInterpolator201 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator201.DEF = "Stop_l_midtarsal_RotationInterpolator";
OrientationInterpolator201.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator201.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[8] = OrientationInterpolator201;

let OrientationInterpolator202 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator202.DEF = "Stop_l_metatarsal_RotationInterpolator";
OrientationInterpolator202.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator202.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[9] = OrientationInterpolator202;

let OrientationInterpolator203 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator203.DEF = "Stop_r_hip_RotationInterpolator";
OrientationInterpolator203.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator203.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[10] = OrientationInterpolator203;

let OrientationInterpolator204 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator204.DEF = "Stop_r_knee_RotationInterpolator";
OrientationInterpolator204.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator204.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[11] = OrientationInterpolator204;

let OrientationInterpolator205 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator205.DEF = "Stop_r_ankle_RotationInterpolator";
OrientationInterpolator205.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator205.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[12] = OrientationInterpolator205;

let OrientationInterpolator206 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator206.DEF = "Stop_r_subtalar_RotationInterpolator";
OrientationInterpolator206.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator206.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[13] = OrientationInterpolator206;

let OrientationInterpolator207 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator207.DEF = "Stop_r_midtarsal_RotationInterpolator";
OrientationInterpolator207.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator207.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[14] = OrientationInterpolator207;

let OrientationInterpolator208 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator208.DEF = "Stop_r_metatarsal_RotationInterpolator";
OrientationInterpolator208.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator208.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[15] = OrientationInterpolator208;

let OrientationInterpolator209 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator209.DEF = "Stop_vl5_RotationInterpolator";
OrientationInterpolator209.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator209.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[16] = OrientationInterpolator209;

let OrientationInterpolator210 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator210.DEF = "Stop_vl4_RotationInterpolator";
OrientationInterpolator210.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator210.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[17] = OrientationInterpolator210;

let OrientationInterpolator211 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator211.DEF = "Stop_vl3_RotationInterpolator";
OrientationInterpolator211.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator211.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[18] = OrientationInterpolator211;

let OrientationInterpolator212 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator212.DEF = "Stop_vl2_RotationInterpolator";
OrientationInterpolator212.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator212.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[19] = OrientationInterpolator212;

let OrientationInterpolator213 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator213.DEF = "Stop_vl1_RotationInterpolator";
OrientationInterpolator213.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator213.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[20] = OrientationInterpolator213;

let OrientationInterpolator214 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator214.DEF = "Stop_vt12_RotationInterpolator";
OrientationInterpolator214.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator214.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[21] = OrientationInterpolator214;

let OrientationInterpolator215 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator215.DEF = "Stop_vt11_RotationInterpolator";
OrientationInterpolator215.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator215.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[22] = OrientationInterpolator215;

let OrientationInterpolator216 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator216.DEF = "Stop_vt10_RotationInterpolator";
OrientationInterpolator216.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator216.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[23] = OrientationInterpolator216;

let OrientationInterpolator217 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator217.DEF = "Stop_vt9_RotationInterpolator";
OrientationInterpolator217.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator217.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[24] = OrientationInterpolator217;

let OrientationInterpolator218 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator218.DEF = "Stop_vt8_RotationInterpolator";
OrientationInterpolator218.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator218.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[25] = OrientationInterpolator218;

let OrientationInterpolator219 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator219.DEF = "Stop_vt7_RotationInterpolator";
OrientationInterpolator219.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator219.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[26] = OrientationInterpolator219;

let OrientationInterpolator220 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator220.DEF = "Stop_vt6_RotationInterpolator";
OrientationInterpolator220.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator220.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[27] = OrientationInterpolator220;

let OrientationInterpolator221 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator221.DEF = "Stop_vt5_RotationInterpolator";
OrientationInterpolator221.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator221.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[28] = OrientationInterpolator221;

let OrientationInterpolator222 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator222.DEF = "Stop_vt4_RotationInterpolator";
OrientationInterpolator222.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator222.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[29] = OrientationInterpolator222;

let OrientationInterpolator223 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator223.DEF = "Stop_vt3_RotationInterpolator";
OrientationInterpolator223.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator223.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[30] = OrientationInterpolator223;

let OrientationInterpolator224 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator224.DEF = "Stop_vt2_RotationInterpolator";
OrientationInterpolator224.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator224.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[31] = OrientationInterpolator224;

let OrientationInterpolator225 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator225.DEF = "Stop_vt1_RotationInterpolator";
OrientationInterpolator225.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator225.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[32] = OrientationInterpolator225;

let OrientationInterpolator226 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator226.DEF = "Stop_vc7_RotationInterpolator";
OrientationInterpolator226.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator226.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[33] = OrientationInterpolator226;

let OrientationInterpolator227 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator227.DEF = "Stop_vc6_RotationInterpolator";
OrientationInterpolator227.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator227.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[34] = OrientationInterpolator227;

let OrientationInterpolator228 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator228.DEF = "Stop_vc5_RotationInterpolator";
OrientationInterpolator228.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator228.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[35] = OrientationInterpolator228;

let OrientationInterpolator229 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator229.DEF = "Stop_vc4_RotationInterpolator";
OrientationInterpolator229.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator229.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[36] = OrientationInterpolator229;

let OrientationInterpolator230 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator230.DEF = "Stop_vc3_RotationInterpolator";
OrientationInterpolator230.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator230.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[37] = OrientationInterpolator230;

let OrientationInterpolator231 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator231.DEF = "Stop_vc2_RotationInterpolator";
OrientationInterpolator231.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator231.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[38] = OrientationInterpolator231;

let OrientationInterpolator232 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator232.DEF = "Stop_vc1_RotationInterpolator";
OrientationInterpolator232.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator232.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[39] = OrientationInterpolator232;

let OrientationInterpolator233 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator233.DEF = "Stop_skullbase_RotationInterpolator";
OrientationInterpolator233.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator233.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[40] = OrientationInterpolator233;

let OrientationInterpolator234 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator234.DEF = "Stop_l_eyeball_joint_RotationInterpolator";
OrientationInterpolator234.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator234.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[41] = OrientationInterpolator234;

let OrientationInterpolator235 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator235.DEF = "Stop_r_eyeball_joint_RotationInterpolator";
OrientationInterpolator235.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator235.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[42] = OrientationInterpolator235;

let OrientationInterpolator236 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator236.DEF = "Stop_l_sternoclavicular_RotationInterpolator";
OrientationInterpolator236.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator236.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[43] = OrientationInterpolator236;

let OrientationInterpolator237 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator237.DEF = "Stop_l_acromioclavicular_RotationInterpolator";
OrientationInterpolator237.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator237.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[44] = OrientationInterpolator237;

let OrientationInterpolator238 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator238.DEF = "Stop_l_shoulder_RotationInterpolator";
OrientationInterpolator238.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator238.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[45] = OrientationInterpolator238;

let OrientationInterpolator239 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator239.DEF = "Stop_l_elbow_RotationInterpolator";
OrientationInterpolator239.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator239.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[46] = OrientationInterpolator239;

let OrientationInterpolator240 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator240.DEF = "Stop_l_wrist_RotationInterpolator";
OrientationInterpolator240.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator240.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[47] = OrientationInterpolator240;

let OrientationInterpolator241 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator241.DEF = "Stop_l_thumb1_RotationInterpolator";
OrientationInterpolator241.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator241.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[48] = OrientationInterpolator241;

let OrientationInterpolator242 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator242.DEF = "Stop_l_thumb2_RotationInterpolator";
OrientationInterpolator242.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator242.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[49] = OrientationInterpolator242;

let OrientationInterpolator243 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator243.DEF = "Stop_l_thumb3_RotationInterpolator";
OrientationInterpolator243.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator243.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[50] = OrientationInterpolator243;

let OrientationInterpolator244 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator244.DEF = "Stop_l_index0_RotationInterpolator";
OrientationInterpolator244.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator244.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[51] = OrientationInterpolator244;

let OrientationInterpolator245 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator245.DEF = "Stop_l_index1_RotationInterpolator";
OrientationInterpolator245.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator245.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[52] = OrientationInterpolator245;

let OrientationInterpolator246 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator246.DEF = "Stop_l_index2_RotationInterpolator";
OrientationInterpolator246.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator246.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[53] = OrientationInterpolator246;

let OrientationInterpolator247 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator247.DEF = "Stop_l_index3_RotationInterpolator";
OrientationInterpolator247.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator247.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[54] = OrientationInterpolator247;

let OrientationInterpolator248 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator248.DEF = "Stop_l_middle0_RotationInterpolator";
OrientationInterpolator248.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator248.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[55] = OrientationInterpolator248;

let OrientationInterpolator249 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator249.DEF = "Stop_l_middle1_RotationInterpolator";
OrientationInterpolator249.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator249.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[56] = OrientationInterpolator249;

let OrientationInterpolator250 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator250.DEF = "Stop_l_middle2_RotationInterpolator";
OrientationInterpolator250.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator250.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[57] = OrientationInterpolator250;

let OrientationInterpolator251 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator251.DEF = "Stop_l_middle3_RotationInterpolator";
OrientationInterpolator251.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator251.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[58] = OrientationInterpolator251;

let OrientationInterpolator252 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator252.DEF = "Stop_l_ring0_RotationInterpolator";
OrientationInterpolator252.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator252.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[59] = OrientationInterpolator252;

let OrientationInterpolator253 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator253.DEF = "Stop_l_ring1_RotationInterpolator";
OrientationInterpolator253.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator253.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[60] = OrientationInterpolator253;

let OrientationInterpolator254 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator254.DEF = "Stop_l_ring2_RotationInterpolator";
OrientationInterpolator254.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator254.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[61] = OrientationInterpolator254;

let OrientationInterpolator255 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator255.DEF = "Stop_l_ring3_RotationInterpolator";
OrientationInterpolator255.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator255.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[62] = OrientationInterpolator255;

let OrientationInterpolator256 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator256.DEF = "Stop_l_pinky0_RotationInterpolator";
OrientationInterpolator256.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator256.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[63] = OrientationInterpolator256;

let OrientationInterpolator257 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator257.DEF = "Stop_l_pinky1_RotationInterpolator";
OrientationInterpolator257.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator257.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[64] = OrientationInterpolator257;

let OrientationInterpolator258 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator258.DEF = "Stop_l_pinky2_RotationInterpolator";
OrientationInterpolator258.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator258.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[65] = OrientationInterpolator258;

let OrientationInterpolator259 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator259.DEF = "Stop_l_pinky3_RotationInterpolator";
OrientationInterpolator259.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator259.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[66] = OrientationInterpolator259;

let OrientationInterpolator260 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator260.DEF = "Stop_r_sternoclavicular_RotationInterpolator";
OrientationInterpolator260.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator260.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[67] = OrientationInterpolator260;

let OrientationInterpolator261 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator261.DEF = "Stop_r_acromioclavicular_RotationInterpolator";
OrientationInterpolator261.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator261.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[68] = OrientationInterpolator261;

let OrientationInterpolator262 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator262.DEF = "Stop_r_shoulder_RotationInterpolator";
OrientationInterpolator262.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator262.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[69] = OrientationInterpolator262;

let OrientationInterpolator263 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator263.DEF = "Stop_r_elbow_RotationInterpolator";
OrientationInterpolator263.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator263.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[70] = OrientationInterpolator263;

let OrientationInterpolator264 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator264.DEF = "Stop_r_wrist_RotationInterpolator";
OrientationInterpolator264.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator264.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[71] = OrientationInterpolator264;

let OrientationInterpolator265 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator265.DEF = "Stop_r_thumb1_RotationInterpolator";
OrientationInterpolator265.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator265.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[72] = OrientationInterpolator265;

let OrientationInterpolator266 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator266.DEF = "Stop_r_thumb2_RotationInterpolator";
OrientationInterpolator266.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator266.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[73] = OrientationInterpolator266;

let OrientationInterpolator267 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator267.DEF = "Stop_r_thumb3_RotationInterpolator";
OrientationInterpolator267.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator267.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[74] = OrientationInterpolator267;

let OrientationInterpolator268 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator268.DEF = "Stop_r_index0_RotationInterpolator";
OrientationInterpolator268.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator268.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[75] = OrientationInterpolator268;

let OrientationInterpolator269 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator269.DEF = "Stop_r_index1_RotationInterpolator";
OrientationInterpolator269.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator269.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[76] = OrientationInterpolator269;

let OrientationInterpolator270 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator270.DEF = "Stop_r_index2_RotationInterpolator";
OrientationInterpolator270.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator270.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[77] = OrientationInterpolator270;

let OrientationInterpolator271 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator271.DEF = "Stop_r_index3_RotationInterpolator";
OrientationInterpolator271.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator271.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[78] = OrientationInterpolator271;

let OrientationInterpolator272 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator272.DEF = "Stop_r_middle0_RotationInterpolator";
OrientationInterpolator272.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator272.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[79] = OrientationInterpolator272;

let OrientationInterpolator273 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator273.DEF = "Stop_r_middle1_RotationInterpolator";
OrientationInterpolator273.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator273.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[80] = OrientationInterpolator273;

let OrientationInterpolator274 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator274.DEF = "Stop_r_middle2_RotationInterpolator";
OrientationInterpolator274.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator274.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[81] = OrientationInterpolator274;

let OrientationInterpolator275 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator275.DEF = "Stop_r_middle3_RotationInterpolator";
OrientationInterpolator275.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator275.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[82] = OrientationInterpolator275;

let OrientationInterpolator276 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator276.DEF = "Stop_r_ring0_RotationInterpolator";
OrientationInterpolator276.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator276.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[83] = OrientationInterpolator276;

let OrientationInterpolator277 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator277.DEF = "Stop_r_ring1_RotationInterpolator";
OrientationInterpolator277.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator277.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[84] = OrientationInterpolator277;

let OrientationInterpolator278 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator278.DEF = "Stop_r_ring2_RotationInterpolator";
OrientationInterpolator278.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator278.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[85] = OrientationInterpolator278;

let OrientationInterpolator279 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator279.DEF = "Stop_r_ring3_RotationInterpolator";
OrientationInterpolator279.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator279.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[86] = OrientationInterpolator279;

let OrientationInterpolator280 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator280.DEF = "Stop_r_pinky0_RotationInterpolator";
OrientationInterpolator280.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator280.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[87] = OrientationInterpolator280;

let OrientationInterpolator281 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator281.DEF = "Stop_r_pinky1_RotationInterpolator";
OrientationInterpolator281.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator281.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[88] = OrientationInterpolator281;

let OrientationInterpolator282 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator282.DEF = "Stop_r_pinky2_RotationInterpolator";
OrientationInterpolator282.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator282.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[89] = OrientationInterpolator282;

let OrientationInterpolator283 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator283.DEF = "Stop_r_pinky3_RotationInterpolator";
OrientationInterpolator283.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator283.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group192ZZZ.children[90] = OrientationInterpolator283;

browser.currentScene.children[3] = Group192;

let Group284 = browser.currentScene.createNode("Group");
Group284.DEF = "StandAnimation";
let TimeSensor285 = browser.currentScene.createNode("TimeSensor");
TimeSensor285.DEF = "StandTimer";
TimeSensor285.cycleInterval = 5.73;
TimeSensor285.loop = True;
Group284YYY.children = new X3D.MFNode();

Group284ZZZ.children[0] = TimeSensor285;

let OrientationInterpolator286 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator286.DEF = "Stand_r_metatarsal_PitchInterpolator";
OrientationInterpolator286.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator286.keyValue = new X3D.MFRotation([1,0,0,0,-1,0,0,0.015,1,0,0,0.17,-1,0,0,0.025,1,0,0,0.01,1,0,0,0]);
Group284ZZZ.children[1] = OrientationInterpolator286;

let OrientationInterpolator287 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator287.DEF = "Stand_r_ankle_RotationInterpolator";
OrientationInterpolator287.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator287.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group284ZZZ.children[2] = OrientationInterpolator287;

let OrientationInterpolator288 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator288.DEF = "Stand_r_knee_RotationInterpolator";
OrientationInterpolator288.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator288.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group284ZZZ.children[3] = OrientationInterpolator288;

let OrientationInterpolator289 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator289.DEF = "Stand_r_hip_RotationInterpolator";
OrientationInterpolator289.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator289.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group284ZZZ.children[4] = OrientationInterpolator289;

let OrientationInterpolator290 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator290.DEF = "Stand_l_ankle_RotationInterpolator";
OrientationInterpolator290.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator290.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group284ZZZ.children[5] = OrientationInterpolator290;

let OrientationInterpolator291 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator291.DEF = "Stand_l_knee_RotationInterpolator";
OrientationInterpolator291.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator291.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group284ZZZ.children[6] = OrientationInterpolator291;

let OrientationInterpolator292 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator292.DEF = "Stand_l_hip_RotationInterpolator";
OrientationInterpolator292.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator292.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group284ZZZ.children[7] = OrientationInterpolator292;

let OrientationInterpolator293 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator293.DEF = "Stand_r_wrist_RotationInterpolator";
OrientationInterpolator293.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator293.keyValue = new X3D.MFRotation([0,0,1,0,0,0,-1,0.25,0,0,1,0]);
Group284ZZZ.children[8] = OrientationInterpolator293;

let OrientationInterpolator294 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator294.DEF = "Stand_r_elbow_RotationInterpolator";
OrientationInterpolator294.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator294.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group284ZZZ.children[9] = OrientationInterpolator294;

let OrientationInterpolator295 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator295.DEF = "Stand_r_shoulder_RotationInterpolator";
OrientationInterpolator295.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator295.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group284ZZZ.children[10] = OrientationInterpolator295;

let OrientationInterpolator296 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator296.DEF = "Stand_l_wrist_RotationInterpolator";
OrientationInterpolator296.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator296.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group284ZZZ.children[11] = OrientationInterpolator296;

let OrientationInterpolator297 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator297.DEF = "Stand_l_elbow_RotationInterpolator";
OrientationInterpolator297.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator297.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group284ZZZ.children[12] = OrientationInterpolator297;

let OrientationInterpolator298 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator298.DEF = "Stand_l_shoulder_RotationInterpolator";
OrientationInterpolator298.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator298.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group284ZZZ.children[13] = OrientationInterpolator298;

let OrientationInterpolator299 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator299.DEF = "Stand_head_RotationInterpolator";
OrientationInterpolator299.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator299.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group284ZZZ.children[14] = OrientationInterpolator299;

let OrientationInterpolator300 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator300.DEF = "Stand_neck_RotationInterpolator";
OrientationInterpolator300.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator300.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.5,0,0,1,0]);
Group284ZZZ.children[15] = OrientationInterpolator300;

let OrientationInterpolator301 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator301.DEF = "Stand_l_eyeball_RotationInterpolator";
OrientationInterpolator301.key = new X3D.MFFloat([0,0.4,0.7,1]);
OrientationInterpolator301.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group284ZZZ.children[16] = OrientationInterpolator301;

let OrientationInterpolator302 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator302.DEF = "Stand_r_eyeball_RotationInterpolator";
OrientationInterpolator302.key = new X3D.MFFloat([0,0.4,0.7,1]);
OrientationInterpolator302.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group284ZZZ.children[17] = OrientationInterpolator302;

let OrientationInterpolator303 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator303.DEF = "Stand_lower_body_RotationInterpolator";
OrientationInterpolator303.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator303.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group284ZZZ.children[18] = OrientationInterpolator303;

let OrientationInterpolator304 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator304.DEF = "Stand_upper_body_RotationInterpolator";
OrientationInterpolator304.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator304.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group284ZZZ.children[19] = OrientationInterpolator304;

let OrientationInterpolator305 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator305.DEF = "Stand_whole_body_RotationInterpolator";
OrientationInterpolator305.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator305.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group284ZZZ.children[20] = OrientationInterpolator305;

let PositionInterpolator306 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator306.DEF = "Stand_whole_body_TranslationInterpolator";
PositionInterpolator306.key = new X3D.MFFloat([0,0.5,1]);
PositionInterpolator306.keyValue = new X3D.MFVec3f([0,0,0,0,0,0,0,0,0]);
Group284ZZZ.children[21] = PositionInterpolator306;

let OrientationInterpolator307 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator307.DEF = "Stand_l_sternoclavicular_RollInterpolator";
OrientationInterpolator307.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator307.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group284ZZZ.children[22] = OrientationInterpolator307;

let OrientationInterpolator308 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator308.DEF = "Stand_l_acromioclavicular_RollInterpolator";
OrientationInterpolator308.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator308.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group284ZZZ.children[23] = OrientationInterpolator308;

let OrientationInterpolator309 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator309.DEF = "Stand_r_sternoclavicular_RollInterpolator";
OrientationInterpolator309.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator309.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group284ZZZ.children[24] = OrientationInterpolator309;

let OrientationInterpolator310 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator310.DEF = "Stand_r_acromioclavicular_RollInterpolator";
OrientationInterpolator310.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator310.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group284ZZZ.children[25] = OrientationInterpolator310;

let OrientationInterpolator311 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator311.DEF = "Stand_sacroiliac_YawInterpolator";
OrientationInterpolator311.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator311.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group284ZZZ.children[26] = OrientationInterpolator311;

let OrientationInterpolator312 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator312.DEF = "Stand_vl5_YawInterpolator";
OrientationInterpolator312.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator312.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group284ZZZ.children[27] = OrientationInterpolator312;

let OrientationInterpolator313 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator313.DEF = "Stand_vc6_YawInterpolator";
OrientationInterpolator313.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator313.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,0,0]);
Group284ZZZ.children[28] = OrientationInterpolator313;

let OrientationInterpolator314 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator314.DEF = "Stand_l_thumb1_PitchInterpolator";
OrientationInterpolator314.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator314.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group284ZZZ.children[29] = OrientationInterpolator314;

let OrientationInterpolator315 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator315.DEF = "Stand_r_thumb1_PitchInterpolator";
OrientationInterpolator315.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator315.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,0.1,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group284ZZZ.children[30] = OrientationInterpolator315;

let OrientationInterpolator316 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator316.DEF = "Stand_r_index1_RollInterpolator";
OrientationInterpolator316.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator316.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0.1,0,0,1,0.2,0,0,1,0.3,0,0,1,0,0,0,1,0]);
Group284ZZZ.children[31] = OrientationInterpolator316;

let OrientationInterpolator317 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator317.DEF = "Stand_r_index2_RollInterpolator";
OrientationInterpolator317.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator317.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0.4,0,0,1,0.32,0,0,1,0.25,0,0,1,0.2,0,0,1,0]);
Group284ZZZ.children[32] = OrientationInterpolator317;

let OrientationInterpolator318 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator318.DEF = "Stand_r_index3_RollInterpolator";
OrientationInterpolator318.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator318.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0.2,0,0,1,0.3,0,0,1,0.35,0,0,1,0.2,0,0,1,0]);
Group284ZZZ.children[33] = OrientationInterpolator318;

browser.currentScene.children[4] = Group284;

let Group319 = browser.currentScene.createNode("Group");
Group319.DEF = "PitchesAnimation";
let TimeSensor320 = browser.currentScene.createNode("TimeSensor");
TimeSensor320.DEF = "PitchTimer";
TimeSensor320.cycleInterval = 5.73;
TimeSensor320.loop = True;
Group319YYY.children = new X3D.MFNode();

Group319ZZZ.children[0] = TimeSensor320;

let OrientationInterpolator321 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator321.DEF = "Pitch_r_metatarsal_PitchInterpolator";
OrientationInterpolator321.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator321.keyValue = new X3D.MFRotation([1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group319ZZZ.children[1] = OrientationInterpolator321;

let OrientationInterpolator322 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator322.DEF = "Pitches_r_ankle_RotationInterpolator";
OrientationInterpolator322.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator322.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group319ZZZ.children[2] = OrientationInterpolator322;

let OrientationInterpolator323 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator323.DEF = "Pitches_r_knee_RotationInterpolator";
OrientationInterpolator323.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator323.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group319ZZZ.children[3] = OrientationInterpolator323;

let OrientationInterpolator324 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator324.DEF = "Pitches_r_hip_RotationInterpolator";
OrientationInterpolator324.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator324.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group319ZZZ.children[4] = OrientationInterpolator324;

let OrientationInterpolator325 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator325.DEF = "Pitches_l_ankle_RotationInterpolator";
OrientationInterpolator325.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator325.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group319ZZZ.children[5] = OrientationInterpolator325;

let OrientationInterpolator326 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator326.DEF = "Pitches_l_knee_RotationInterpolator";
OrientationInterpolator326.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator326.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group319ZZZ.children[6] = OrientationInterpolator326;

let OrientationInterpolator327 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator327.DEF = "Pitches_l_hip_RotationInterpolator";
OrientationInterpolator327.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator327.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group319ZZZ.children[7] = OrientationInterpolator327;

let OrientationInterpolator328 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator328.DEF = "Pitches_r_wrist_RotationInterpolator";
OrientationInterpolator328.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator328.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group319ZZZ.children[8] = OrientationInterpolator328;

let OrientationInterpolator329 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator329.DEF = "Pitches_r_elbow_RotationInterpolator";
OrientationInterpolator329.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator329.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group319ZZZ.children[9] = OrientationInterpolator329;

let OrientationInterpolator330 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator330.DEF = "Pitches_r_shoulder_RotationInterpolator";
OrientationInterpolator330.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator330.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group319ZZZ.children[10] = OrientationInterpolator330;

let OrientationInterpolator331 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator331.DEF = "Pitches_l_wrist_RotationInterpolator";
OrientationInterpolator331.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator331.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group319ZZZ.children[11] = OrientationInterpolator331;

let OrientationInterpolator332 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator332.DEF = "Pitches_l_elbow_RotationInterpolator";
OrientationInterpolator332.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator332.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group319ZZZ.children[12] = OrientationInterpolator332;

let OrientationInterpolator333 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator333.DEF = "Pitches_l_shoulder_RotationInterpolator";
OrientationInterpolator333.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator333.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group319ZZZ.children[13] = OrientationInterpolator333;

let OrientationInterpolator334 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator334.DEF = "Pitches_head_RotationInterpolator";
OrientationInterpolator334.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator334.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group319ZZZ.children[14] = OrientationInterpolator334;

let OrientationInterpolator335 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator335.DEF = "Pitches_neck_RotationInterpolator";
OrientationInterpolator335.key = new X3D.MFFloat([0,0.25,0.55,1]);
OrientationInterpolator335.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,0.55,-1,0,0,1.05,0,0,1,0]);
Group319ZZZ.children[15] = OrientationInterpolator335;

let OrientationInterpolator336 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator336.DEF = "Pitches_lower_body_RotationInterpolator";
OrientationInterpolator336.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator336.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group319ZZZ.children[16] = OrientationInterpolator336;

let OrientationInterpolator337 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator337.DEF = "Pitches_upper_body_RotationInterpolator";
OrientationInterpolator337.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator337.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group319ZZZ.children[17] = OrientationInterpolator337;

let OrientationInterpolator338 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator338.DEF = "Pitches_whole_body_RotationInterpolator";
OrientationInterpolator338.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator338.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group319ZZZ.children[18] = OrientationInterpolator338;

let PositionInterpolator339 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator339.DEF = "Pitches_whole_body_TranslationInterpolator";
PositionInterpolator339.key = new X3D.MFFloat([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator339.keyValue = new X3D.MFVec3f([0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0]);
Group319ZZZ.children[19] = PositionInterpolator339;

let OrientationInterpolator340 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator340.DEF = "Pitch_l_sternoclavicular_RollInterpolator";
OrientationInterpolator340.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator340.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group319ZZZ.children[20] = OrientationInterpolator340;

let OrientationInterpolator341 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator341.DEF = "Pitch_l_acromioclavicular_RollInterpolator";
OrientationInterpolator341.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator341.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group319ZZZ.children[21] = OrientationInterpolator341;

let OrientationInterpolator342 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator342.DEF = "Pitch_r_sternoclavicular_RollInterpolator";
OrientationInterpolator342.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator342.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group319ZZZ.children[22] = OrientationInterpolator342;

let OrientationInterpolator343 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator343.DEF = "Pitch_r_acromioclavicular_RollInterpolator";
OrientationInterpolator343.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator343.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group319ZZZ.children[23] = OrientationInterpolator343;

let OrientationInterpolator344 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator344.DEF = "Pitch_sacroiliac_YawInterpolator";
OrientationInterpolator344.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator344.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group319ZZZ.children[24] = OrientationInterpolator344;

let OrientationInterpolator345 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator345.DEF = "Pitch_vl5_YawInterpolator";
OrientationInterpolator345.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator345.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group319ZZZ.children[25] = OrientationInterpolator345;

let OrientationInterpolator346 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator346.DEF = "Pitch_vc6_YawInterpolator";
OrientationInterpolator346.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator346.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group319ZZZ.children[26] = OrientationInterpolator346;

let OrientationInterpolator347 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator347.DEF = "Pitch_l_thumb1_PitchInterpolator";
OrientationInterpolator347.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator347.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group319ZZZ.children[27] = OrientationInterpolator347;

let OrientationInterpolator348 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator348.DEF = "Pitch_r_thumb1_PitchInterpolator";
OrientationInterpolator348.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator348.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group319ZZZ.children[28] = OrientationInterpolator348;

browser.currentScene.children[5] = Group319;

let Group349 = browser.currentScene.createNode("Group");
Group349.DEF = "YawsAnimation";
let TimeSensor350 = browser.currentScene.createNode("TimeSensor");
TimeSensor350.DEF = "YawTimer";
TimeSensor350.cycleInterval = 5.73;
TimeSensor350.loop = True;
Group349YYY.children = new X3D.MFNode();

Group349ZZZ.children[0] = TimeSensor350;

let OrientationInterpolator351 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator351.DEF = "Yaw_r_metatarsal_PitchInterpolator";
OrientationInterpolator351.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator351.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group349ZZZ.children[1] = OrientationInterpolator351;

let OrientationInterpolator352 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator352.DEF = "Yaws_r_ankle_RotationInterpolator";
OrientationInterpolator352.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator352.keyValue = new X3D.MFRotation([0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group349ZZZ.children[2] = OrientationInterpolator352;

let OrientationInterpolator353 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator353.DEF = "Yaws_r_knee_RotationInterpolator";
OrientationInterpolator353.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator353.keyValue = new X3D.MFRotation([0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group349ZZZ.children[3] = OrientationInterpolator353;

let OrientationInterpolator354 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator354.DEF = "Yaws_r_hip_RotationInterpolator";
OrientationInterpolator354.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator354.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group349ZZZ.children[4] = OrientationInterpolator354;

let OrientationInterpolator355 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator355.DEF = "Yaws_l_ankle_RotationInterpolator";
OrientationInterpolator355.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator355.keyValue = new X3D.MFRotation([0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group349ZZZ.children[5] = OrientationInterpolator355;

let OrientationInterpolator356 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator356.DEF = "Yaws_l_knee_RotationInterpolator";
OrientationInterpolator356.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator356.keyValue = new X3D.MFRotation([0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group349ZZZ.children[6] = OrientationInterpolator356;

let OrientationInterpolator357 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator357.DEF = "Yaws_l_hip_RotationInterpolator";
OrientationInterpolator357.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator357.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group349ZZZ.children[7] = OrientationInterpolator357;

let OrientationInterpolator358 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator358.DEF = "Yaws_r_wrist_RotationInterpolator";
OrientationInterpolator358.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator358.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group349ZZZ.children[8] = OrientationInterpolator358;

let OrientationInterpolator359 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator359.DEF = "Yaws_r_elbow_RotationInterpolator";
OrientationInterpolator359.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator359.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group349ZZZ.children[9] = OrientationInterpolator359;

let OrientationInterpolator360 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator360.DEF = "Yaws_r_shoulder_RotationInterpolator";
OrientationInterpolator360.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator360.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group349ZZZ.children[10] = OrientationInterpolator360;

let OrientationInterpolator361 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator361.DEF = "Yaws_l_wrist_RotationInterpolator";
OrientationInterpolator361.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator361.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group349ZZZ.children[11] = OrientationInterpolator361;

let OrientationInterpolator362 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator362.DEF = "Yaws_l_elbow_RotationInterpolator";
OrientationInterpolator362.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator362.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group349ZZZ.children[12] = OrientationInterpolator362;

let OrientationInterpolator363 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator363.DEF = "Yaws_l_shoulder_RotationInterpolator";
OrientationInterpolator363.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator363.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group349ZZZ.children[13] = OrientationInterpolator363;

let OrientationInterpolator364 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator364.DEF = "Yaws_head_RotationInterpolator";
OrientationInterpolator364.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator364.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group349ZZZ.children[14] = OrientationInterpolator364;

let OrientationInterpolator365 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator365.DEF = "Yaws_neck_RotationInterpolator";
OrientationInterpolator365.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator365.keyValue = new X3D.MFRotation([0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group349ZZZ.children[15] = OrientationInterpolator365;

let OrientationInterpolator366 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator366.DEF = "Yaws_upper_body_RotationInterpolator";
OrientationInterpolator366.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator366.keyValue = new X3D.MFRotation([0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group349ZZZ.children[16] = OrientationInterpolator366;

let OrientationInterpolator367 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator367.DEF = "Yaws_lower_body_RotationInterpolator";
OrientationInterpolator367.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator367.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group349ZZZ.children[17] = OrientationInterpolator367;

let OrientationInterpolator368 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator368.DEF = "Yaws_whole_body_RotationInterpolator";
OrientationInterpolator368.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator368.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group349ZZZ.children[18] = OrientationInterpolator368;

let PositionInterpolator369 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator369.DEF = "Yaws_whole_body_TranslationInterpolator";
PositionInterpolator369.key = new X3D.MFFloat([0,0.5,1]);
PositionInterpolator369.keyValue = new X3D.MFVec3f([0,0,0,0,0,0,0,0,0]);
Group349ZZZ.children[19] = PositionInterpolator369;

let OrientationInterpolator370 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator370.DEF = "Yaw_l_sternoclavicular_RollInterpolator";
OrientationInterpolator370.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator370.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group349ZZZ.children[20] = OrientationInterpolator370;

let OrientationInterpolator371 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator371.DEF = "Yaw_l_acromioclavicular_RollInterpolator";
OrientationInterpolator371.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator371.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group349ZZZ.children[21] = OrientationInterpolator371;

let OrientationInterpolator372 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator372.DEF = "Yaw_r_sternoclavicular_RollInterpolator";
OrientationInterpolator372.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator372.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group349ZZZ.children[22] = OrientationInterpolator372;

let OrientationInterpolator373 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator373.DEF = "Yaw_r_acromioclavicular_RollInterpolator";
OrientationInterpolator373.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator373.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group349ZZZ.children[23] = OrientationInterpolator373;

let OrientationInterpolator374 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator374.DEF = "Yaw_sacroiliac_YawInterpolator";
OrientationInterpolator374.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator374.keyValue = new X3D.MFRotation([0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,0,0.24,0,-1,0,0.4,0,1,0,0]);
Group349ZZZ.children[24] = OrientationInterpolator374;

let OrientationInterpolator375 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator375.DEF = "Yaw_vl5_YawInterpolator";
OrientationInterpolator375.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator375.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group349ZZZ.children[25] = OrientationInterpolator375;

let OrientationInterpolator376 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator376.DEF = "Yaw_vc6_YawInterpolator";
OrientationInterpolator376.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator376.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group349ZZZ.children[26] = OrientationInterpolator376;

let OrientationInterpolator377 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator377.DEF = "Yaw_l_thumb1_PitchInterpolator";
OrientationInterpolator377.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator377.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group349ZZZ.children[27] = OrientationInterpolator377;

let OrientationInterpolator378 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator378.DEF = "Yaw_r_thumb1_PitchInterpolator";
OrientationInterpolator378.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator378.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group349ZZZ.children[28] = OrientationInterpolator378;

browser.currentScene.children[6] = Group349;

let Group379 = browser.currentScene.createNode("Group");
Group379.DEF = "RollsAnimation";
let TimeSensor380 = browser.currentScene.createNode("TimeSensor");
TimeSensor380.DEF = "RollTimer";
TimeSensor380.cycleInterval = 5.73;
TimeSensor380.loop = True;
Group379YYY.children = new X3D.MFNode();

Group379ZZZ.children[0] = TimeSensor380;

let OrientationInterpolator381 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator381.DEF = "Roll_r_metatarsal_PitchInterpolator";
OrientationInterpolator381.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator381.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group379ZZZ.children[1] = OrientationInterpolator381;

let OrientationInterpolator382 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator382.DEF = "Rolls_r_ankle_RotationInterpolator";
OrientationInterpolator382.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator382.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group379ZZZ.children[2] = OrientationInterpolator382;

let OrientationInterpolator383 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator383.DEF = "Rolls_r_knee_RotationInterpolator";
OrientationInterpolator383.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator383.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group379ZZZ.children[3] = OrientationInterpolator383;

let OrientationInterpolator384 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator384.DEF = "Rolls_r_hip_RotationInterpolator";
OrientationInterpolator384.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator384.keyValue = new X3D.MFRotation([0,0,-1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group379ZZZ.children[4] = OrientationInterpolator384;

let OrientationInterpolator385 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator385.DEF = "Rolls_l_ankle_RotationInterpolator";
OrientationInterpolator385.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator385.keyValue = new X3D.MFRotation([0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group379ZZZ.children[5] = OrientationInterpolator385;

let OrientationInterpolator386 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator386.DEF = "Rolls_l_knee_RotationInterpolator";
OrientationInterpolator386.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator386.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group379ZZZ.children[6] = OrientationInterpolator386;

let OrientationInterpolator387 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator387.DEF = "Rolls_l_hip_RotationInterpolator";
OrientationInterpolator387.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator387.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group379ZZZ.children[7] = OrientationInterpolator387;

let OrientationInterpolator388 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator388.DEF = "Rolls_r_wrist_RotationInterpolator";
OrientationInterpolator388.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator388.keyValue = new X3D.MFRotation([0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group379ZZZ.children[8] = OrientationInterpolator388;

let OrientationInterpolator389 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator389.DEF = "Rolls_r_elbow_RotationInterpolator";
OrientationInterpolator389.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator389.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group379ZZZ.children[9] = OrientationInterpolator389;

let OrientationInterpolator390 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator390.DEF = "Rolls_r_shoulder_RotationInterpolator";
OrientationInterpolator390.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator390.keyValue = new X3D.MFRotation([0,0,1,0,0,0,-1,1.5,0,0,-1,3,0,0,-1,1.5,0,0,1,0]);
Group379ZZZ.children[10] = OrientationInterpolator390;

let OrientationInterpolator391 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator391.DEF = "Rolls_l_wrist_RotationInterpolator";
OrientationInterpolator391.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator391.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group379ZZZ.children[11] = OrientationInterpolator391;

let OrientationInterpolator392 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator392.DEF = "Rolls_l_elbow_RotationInterpolator";
OrientationInterpolator392.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator392.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group379ZZZ.children[12] = OrientationInterpolator392;

let OrientationInterpolator393 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator393.DEF = "Rolls_l_shoulder_RotationInterpolator";
OrientationInterpolator393.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator393.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,1.5,0,0,1,3,0,0,1,1.5,0,0,1,0]);
Group379ZZZ.children[13] = OrientationInterpolator393;

let OrientationInterpolator394 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator394.DEF = "Rolls_head_RotationInterpolator";
OrientationInterpolator394.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator394.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group379ZZZ.children[14] = OrientationInterpolator394;

let OrientationInterpolator395 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator395.DEF = "Rolls_neck_RotationInterpolator";
OrientationInterpolator395.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator395.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,1.25,0,0,1,0,0,0,-1,1.25,0,0,1,0]);
Group379ZZZ.children[15] = OrientationInterpolator395;

let OrientationInterpolator396 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator396.DEF = "Rolls_lower_body_RotationInterpolator";
OrientationInterpolator396.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator396.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group379ZZZ.children[16] = OrientationInterpolator396;

let OrientationInterpolator397 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator397.DEF = "Rolls_upper_body_RotationInterpolator";
OrientationInterpolator397.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator397.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group379ZZZ.children[17] = OrientationInterpolator397;

let OrientationInterpolator398 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator398.DEF = "Rolls_whole_body_RotationInterpolator";
OrientationInterpolator398.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator398.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group379ZZZ.children[18] = OrientationInterpolator398;

let PositionInterpolator399 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator399.DEF = "Rolls_whole_body_TranslationInterpolator";
PositionInterpolator399.key = new X3D.MFFloat([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator399.keyValue = new X3D.MFVec3f([0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0]);
Group379ZZZ.children[19] = PositionInterpolator399;

let OrientationInterpolator400 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator400.DEF = "Roll_l_sternoclavicular_RollInterpolator";
OrientationInterpolator400.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator400.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group379ZZZ.children[20] = OrientationInterpolator400;

let OrientationInterpolator401 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator401.DEF = "Roll_l_acromioclavicular_RollInterpolator";
OrientationInterpolator401.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator401.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group379ZZZ.children[21] = OrientationInterpolator401;

let OrientationInterpolator402 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator402.DEF = "Roll_r_sternoclavicular_RollInterpolator";
OrientationInterpolator402.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator402.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group379ZZZ.children[22] = OrientationInterpolator402;

let OrientationInterpolator403 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator403.DEF = "Roll_r_acromioclavicular_RollInterpolator";
OrientationInterpolator403.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator403.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group379ZZZ.children[23] = OrientationInterpolator403;

let OrientationInterpolator404 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator404.DEF = "Roll_sacroiliac_YawInterpolator";
OrientationInterpolator404.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator404.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group379ZZZ.children[24] = OrientationInterpolator404;

let OrientationInterpolator405 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator405.DEF = "Roll_vl5_YawInterpolator";
OrientationInterpolator405.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator405.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group379ZZZ.children[25] = OrientationInterpolator405;

let OrientationInterpolator406 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator406.DEF = "Roll_vc6_YawInterpolator";
OrientationInterpolator406.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator406.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group379ZZZ.children[26] = OrientationInterpolator406;

let OrientationInterpolator407 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator407.DEF = "Roll_l_thumb1_PitchInterpolator";
OrientationInterpolator407.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator407.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group379ZZZ.children[27] = OrientationInterpolator407;

let OrientationInterpolator408 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator408.DEF = "Roll_r_thumb1_PitchInterpolator";
OrientationInterpolator408.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator408.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group379ZZZ.children[28] = OrientationInterpolator408;

browser.currentScene.children[7] = Group379;

let Group409 = browser.currentScene.createNode("Group");
Group409.DEF = "WalkAnimation";
let TimeSensor410 = browser.currentScene.createNode("TimeSensor");
TimeSensor410.DEF = "WalkTimer";
TimeSensor410.cycleInterval = 1.73;
TimeSensor410.loop = True;
Group409YYY.children = new X3D.MFNode();

Group409ZZZ.children[0] = TimeSensor410;

let OrientationInterpolator411 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator411.DEF = "Walk_r_metatarsal_PitchInterpolator";
OrientationInterpolator411.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator411.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group409ZZZ.children[1] = OrientationInterpolator411;

let OrientationInterpolator412 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator412.DEF = "Walk_r_ankle_RotationInterpolator";
OrientationInterpolator412.key = new X3D.MFFloat([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator412.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0]);
Group409ZZZ.children[2] = OrientationInterpolator412;

let OrientationInterpolator413 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator413.DEF = "Walk_r_knee_RotationInterpolator";
OrientationInterpolator413.key = new X3D.MFFloat([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator413.keyValue = new X3D.MFRotation([1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573]);
Group409ZZZ.children[3] = OrientationInterpolator413;

let OrientationInterpolator414 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator414.DEF = "Walk_r_hip_RotationInterpolator";
OrientationInterpolator414.key = new X3D.MFFloat([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator414.keyValue = new X3D.MFRotation([-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
Group409ZZZ.children[4] = OrientationInterpolator414;

let OrientationInterpolator415 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator415.DEF = "Walk_l_ankle_RotationInterpolator";
OrientationInterpolator415.key = new X3D.MFFloat([0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator415.keyValue = new X3D.MFRotation([-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714]);
Group409ZZZ.children[5] = OrientationInterpolator415;

let OrientationInterpolator416 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator416.DEF = "Walk_l_knee_RotationInterpolator";
OrientationInterpolator416.key = new X3D.MFFloat([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator416.keyValue = new X3D.MFRotation([1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
Group409ZZZ.children[6] = OrientationInterpolator416;

let OrientationInterpolator417 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator417.DEF = "Walk_l_hip_RotationInterpolator";
OrientationInterpolator417.key = new X3D.MFFloat([0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator417.keyValue = new X3D.MFRotation([-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
Group409ZZZ.children[7] = OrientationInterpolator417;

let OrientationInterpolator418 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator418.DEF = "Walk_lower_body_RotationInterpolator";
OrientationInterpolator418.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator418.keyValue = new X3D.MFRotation([0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
Group409ZZZ.children[8] = OrientationInterpolator418;

let OrientationInterpolator419 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator419.DEF = "Walk_r_wrist_RotationInterpolator";
OrientationInterpolator419.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator419.keyValue = new X3D.MFRotation([-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]);
Group409ZZZ.children[9] = OrientationInterpolator419;

let OrientationInterpolator420 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator420.DEF = "Walk_r_elbow_RotationInterpolator";
OrientationInterpolator420.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator420.keyValue = new X3D.MFRotation([-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508]);
Group409ZZZ.children[10] = OrientationInterpolator420;

let OrientationInterpolator421 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator421.DEF = "Walk_r_shoulder_RotationInterpolator";
OrientationInterpolator421.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator421.keyValue = new X3D.MFRotation([-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346]);
Group409ZZZ.children[11] = OrientationInterpolator421;

let OrientationInterpolator422 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator422.DEF = "Walk_l_wrist_RotationInterpolator";
OrientationInterpolator422.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator422.keyValue = new X3D.MFRotation([0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076]);
Group409ZZZ.children[12] = OrientationInterpolator422;

let OrientationInterpolator423 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator423.DEF = "Walk_l_elbow_RotationInterpolator";
OrientationInterpolator423.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator423.keyValue = new X3D.MFRotation([-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878]);
Group409ZZZ.children[13] = OrientationInterpolator423;

let OrientationInterpolator424 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator424.DEF = "Walk_l_shoulder_RotationInterpolator";
OrientationInterpolator424.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator424.keyValue = new X3D.MFRotation([1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189]);
Group409ZZZ.children[14] = OrientationInterpolator424;

let OrientationInterpolator425 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator425.DEF = "Walk_head_RotationInterpolator";
OrientationInterpolator425.key = new X3D.MFFloat([0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator425.keyValue = new X3D.MFRotation([0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642]);
Group409ZZZ.children[15] = OrientationInterpolator425;

let OrientationInterpolator426 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator426.DEF = "Walk_neck_RotationInterpolator";
OrientationInterpolator426.key = new X3D.MFFloat([0,1]);
OrientationInterpolator426.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group409ZZZ.children[16] = OrientationInterpolator426;

let OrientationInterpolator427 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator427.DEF = "Walk_upper_body_RotationInterpolator";
OrientationInterpolator427.key = new X3D.MFFloat([0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator427.keyValue = new X3D.MFRotation([0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
Group409ZZZ.children[17] = OrientationInterpolator427;

let OrientationInterpolator428 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator428.DEF = "Walk_whole_body_RotationInterpolator";
OrientationInterpolator428.key = new X3D.MFFloat([0,1]);
OrientationInterpolator428.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group409ZZZ.children[18] = OrientationInterpolator428;

let PositionInterpolator429 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator429.DEF = "Walk_whole_body_TranslationInterpolator";
PositionInterpolator429.key = new X3D.MFFloat([0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator429.keyValue = new X3D.MFVec3f([0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
Group409ZZZ.children[19] = PositionInterpolator429;

let OrientationInterpolator430 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator430.DEF = "Walk_l_sternoclavicular_RollInterpolator";
OrientationInterpolator430.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator430.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group409ZZZ.children[20] = OrientationInterpolator430;

let OrientationInterpolator431 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator431.DEF = "Walk_l_acromioclavicular_RollInterpolator";
OrientationInterpolator431.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator431.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group409ZZZ.children[21] = OrientationInterpolator431;

let OrientationInterpolator432 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator432.DEF = "Walk_r_sternoclavicular_RollInterpolator";
OrientationInterpolator432.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator432.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group409ZZZ.children[22] = OrientationInterpolator432;

let OrientationInterpolator433 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator433.DEF = "Walk_r_acromioclavicular_RollInterpolator";
OrientationInterpolator433.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator433.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group409ZZZ.children[23] = OrientationInterpolator433;

let OrientationInterpolator434 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator434.DEF = "Walk_sacroiliac_YawInterpolator";
OrientationInterpolator434.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator434.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group409ZZZ.children[24] = OrientationInterpolator434;

let OrientationInterpolator435 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator435.DEF = "Walk_vl5_YawInterpolator";
OrientationInterpolator435.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator435.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group409ZZZ.children[25] = OrientationInterpolator435;

let OrientationInterpolator436 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator436.DEF = "Walk_vc6_YawInterpolator";
OrientationInterpolator436.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator436.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group409ZZZ.children[26] = OrientationInterpolator436;

let OrientationInterpolator437 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator437.DEF = "Walk_l_thumb1_PitchInterpolator";
OrientationInterpolator437.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator437.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group409ZZZ.children[27] = OrientationInterpolator437;

let OrientationInterpolator438 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator438.DEF = "Walk_r_thumb1_PitchInterpolator";
OrientationInterpolator438.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator438.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group409ZZZ.children[28] = OrientationInterpolator438;

browser.currentScene.children[8] = Group409;

let Group439 = browser.currentScene.createNode("Group");
Group439.DEF = "RunAnimation";
let TimeSensor440 = browser.currentScene.createNode("TimeSensor");
TimeSensor440.DEF = "RunTimer";
TimeSensor440.cycleInterval = 0.9;
TimeSensor440.loop = True;
Group439YYY.children = new X3D.MFNode();

Group439ZZZ.children[0] = TimeSensor440;

let OrientationInterpolator441 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator441.DEF = "Run_r_metatarsal_PitchInterpolator";
OrientationInterpolator441.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator441.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group439ZZZ.children[1] = OrientationInterpolator441;

let OrientationInterpolator442 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator442.DEF = "Run_l_hip_RotationInterpolator_Run";
OrientationInterpolator442.key = new X3D.MFFloat([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator442.keyValue = new X3D.MFRotation([-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42]);
Group439ZZZ.children[2] = OrientationInterpolator442;

let OrientationInterpolator443 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator443.DEF = "Run_l_knee_RotationInterpolator_Run";
OrientationInterpolator443.key = new X3D.MFFloat([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator443.keyValue = new X3D.MFRotation([1,0,0,1.01,1,0,0,0.426,1,0,0,0.705,1,0,0,2.179,1,0,0,1.01]);
Group439ZZZ.children[3] = OrientationInterpolator443;

let OrientationInterpolator444 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator444.DEF = "Run_l_ankle_RotationInterpolator_Run";
OrientationInterpolator444.key = new X3D.MFFloat([0,0.22,0.3,0.4,1]);
OrientationInterpolator444.keyValue = new X3D.MFRotation([1,0,0,0.0374,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03574]);
Group439ZZZ.children[4] = OrientationInterpolator444;

let OrientationInterpolator445 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator445.DEF = "Run_r_hip_RotationInterpolator_Run";
OrientationInterpolator445.key = new X3D.MFFloat([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator445.keyValue = new X3D.MFRotation([0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9]);
Group439ZZZ.children[5] = OrientationInterpolator445;

let OrientationInterpolator446 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator446.DEF = "Run_r_knee_RotationInterpolator_Run";
OrientationInterpolator446.key = new X3D.MFFloat([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator446.keyValue = new X3D.MFRotation([1,0,0,0.705,1,0,0,2.179,1,0,0,1.01,1,0,0,0.426,1,0,0,0.705]);
Group439ZZZ.children[6] = OrientationInterpolator446;

let OrientationInterpolator447 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator447.DEF = "Run_r_ankle_RotationInterpolator_Run";
OrientationInterpolator447.key = new X3D.MFFloat([0,0.4,0.71,0.8,0.82,1]);
OrientationInterpolator447.keyValue = new X3D.MFRotation([1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.32,-1,0,0,0.374,-1,0,0,0.3478,1,0,0,0.2323]);
Group439ZZZ.children[7] = OrientationInterpolator447;

let OrientationInterpolator448 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator448.DEF = "Run_l_shoulder_RotationInterpolator_Run";
OrientationInterpolator448.key = new X3D.MFFloat([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator448.keyValue = new X3D.MFRotation([0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5]);
Group439ZZZ.children[8] = OrientationInterpolator448;

let OrientationInterpolator449 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator449.DEF = "Run_l_elbow_RotationInterpolator_Run";
OrientationInterpolator449.key = new X3D.MFFloat([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator449.keyValue = new X3D.MFRotation([-1,0,0,1.85,-0.99,-0.19,0.18,1.35,-1,0,0,0.975,-0.99,-0.09,-0.02,1.55,-1,0,0,1.85]);
Group439ZZZ.children[9] = OrientationInterpolator449;

let OrientationInterpolator450 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator450.DEF = "Run_l_wrist_RotationInterpolator_Run";
OrientationInterpolator450.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator450.keyValue = new X3D.MFRotation([-0.25,-1,0.08,0.14,0.25,1,0.08,0.14,0,0,1,0,-0.25,1,0.08,-0.14,-0.25,1,0.08,0.14]);
Group439ZZZ.children[10] = OrientationInterpolator450;

let OrientationInterpolator451 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator451.DEF = "Run_r_shoulder_RotationInterpolator_Run";
OrientationInterpolator451.key = new X3D.MFFloat([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator451.keyValue = new X3D.MFRotation([-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85]);
Group439ZZZ.children[11] = OrientationInterpolator451;

let OrientationInterpolator452 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator452.DEF = "Run_r_elbow_RotationInterpolator_Run";
OrientationInterpolator452.key = new X3D.MFFloat([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator452.keyValue = new X3D.MFRotation([-1,0,0,0.975,-0.99,0.09,0.02,1.55,-1,0,0,1.85,-0.99,0.19,-0.18,1.35,-1,0,0,0.975]);
Group439ZZZ.children[12] = OrientationInterpolator452;

let OrientationInterpolator453 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator453.DEF = "Run_r_wrist_RotationInterpolator_Run";
OrientationInterpolator453.key = new X3D.MFFloat([0,1]);
OrientationInterpolator453.keyValue = new X3D.MFRotation([-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273]);
Group439ZZZ.children[13] = OrientationInterpolator453;

let OrientationInterpolator454 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator454.DEF = "Run_lower_body_RotationInterpolator_Run";
OrientationInterpolator454.key = new X3D.MFFloat([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator454.keyValue = new X3D.MFRotation([0,-1,0,0.125,0,0,1,0,0,1,0,0.125,0,0,1,0,0,-1,0,0.125]);
Group439ZZZ.children[14] = OrientationInterpolator454;

let OrientationInterpolator455 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator455.DEF = "Run_head_RotationInterpolator_Run";
OrientationInterpolator455.key = new X3D.MFFloat([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator455.keyValue = new X3D.MFRotation([1,0,0,0.08,1,0,0,0.12,1,0,0,0.3,1,0,0,0.3,1,0,0,0.08]);
Group439ZZZ.children[15] = OrientationInterpolator455;

let OrientationInterpolator456 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator456.DEF = "Run_neck_RotationInterpolator_Run";
OrientationInterpolator456.key = new X3D.MFFloat([0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator456.keyValue = new X3D.MFRotation([0.7,0,0,0.4,-0.7,-0.7,0,0.4,0,0,0,0.4,-0.7,0.7,0,0.4,0.7,0,0,0.4]);
Group439ZZZ.children[16] = OrientationInterpolator456;

let OrientationInterpolator457 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator457.DEF = "Run_upper_body_RotationInterpolator_Run";
OrientationInterpolator457.key = new X3D.MFFloat([0,0.2545,0.4909,0.7636,1]);
OrientationInterpolator457.keyValue = new X3D.MFRotation([0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5]);
Group439ZZZ.children[17] = OrientationInterpolator457;

let OrientationInterpolator458 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator458.DEF = "Run_whole_body_RotationInterpolator_Run";
OrientationInterpolator458.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
OrientationInterpolator458.keyValue = new X3D.MFRotation([1,0,0,0.06,1,0,0,0.167,1,0,0,0.06,1,0,0,0.168,1,0,0,0.06]);
Group439ZZZ.children[18] = OrientationInterpolator458;

let PositionInterpolator459 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator459.DEF = "Run_whole_body_TranslationInterpolator_Run";
PositionInterpolator459.key = new X3D.MFFloat([0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1]);
PositionInterpolator459.keyValue = new X3D.MFVec3f([0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0]);
Group439ZZZ.children[19] = PositionInterpolator459;

let OrientationInterpolator460 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator460.DEF = "Run_l_sternoclavicular_RollInterpolator";
OrientationInterpolator460.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator460.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group439ZZZ.children[20] = OrientationInterpolator460;

let OrientationInterpolator461 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator461.DEF = "Run_l_acromioclavicular_RollInterpolator";
OrientationInterpolator461.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator461.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group439ZZZ.children[21] = OrientationInterpolator461;

let OrientationInterpolator462 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator462.DEF = "Run_r_sternoclavicular_RollInterpolator";
OrientationInterpolator462.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator462.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group439ZZZ.children[22] = OrientationInterpolator462;

let OrientationInterpolator463 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator463.DEF = "Run_r_acromioclavicular_RollInterpolator";
OrientationInterpolator463.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator463.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group439ZZZ.children[23] = OrientationInterpolator463;

let OrientationInterpolator464 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator464.DEF = "Run_sacroiliac_YawInterpolator";
OrientationInterpolator464.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator464.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group439ZZZ.children[24] = OrientationInterpolator464;

let OrientationInterpolator465 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator465.DEF = "Run_vl5_YawInterpolator";
OrientationInterpolator465.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator465.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group439ZZZ.children[25] = OrientationInterpolator465;

let OrientationInterpolator466 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator466.DEF = "Run_vc6_YawInterpolator";
OrientationInterpolator466.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator466.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group439ZZZ.children[26] = OrientationInterpolator466;

let OrientationInterpolator467 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator467.DEF = "Run_l_thumb1_PitchInterpolator";
OrientationInterpolator467.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator467.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group439ZZZ.children[27] = OrientationInterpolator467;

let OrientationInterpolator468 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator468.DEF = "Run_r_thumb1_PitchInterpolator";
OrientationInterpolator468.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator468.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group439ZZZ.children[28] = OrientationInterpolator468;

browser.currentScene.children[9] = Group439;

let Group469 = browser.currentScene.createNode("Group");
Group469.DEF = "JumpAnimation";
let TimeSensor470 = browser.currentScene.createNode("TimeSensor");
TimeSensor470.DEF = "JumpTimer";
TimeSensor470.cycleInterval = 3.73;
TimeSensor470.loop = True;
Group469YYY.children = new X3D.MFNode();

Group469ZZZ.children[0] = TimeSensor470;

let OrientationInterpolator471 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator471.DEF = "Jump_r_metatarsal_PitchInterpolator";
OrientationInterpolator471.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator471.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group469ZZZ.children[1] = OrientationInterpolator471;

let OrientationInterpolator472 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator472.DEF = "Jump_r_ankle_RotationInterpolator";
OrientationInterpolator472.key = new X3D.MFFloat([0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator472.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,1.3,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0]);
Group469ZZZ.children[2] = OrientationInterpolator472;

let OrientationInterpolator473 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator473.DEF = "Jump_r_knee_RotationInterpolator";
OrientationInterpolator473.key = new X3D.MFFloat([0,0.2,0.25,0.3,0.64,0.76,0.88,1]);
OrientationInterpolator473.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,2.5,1,0,0,1.7,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0]);
Group469ZZZ.children[3] = OrientationInterpolator473;

let OrientationInterpolator474 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator474.DEF = "Jump_r_hip_RotationInterpolator";
OrientationInterpolator474.key = new X3D.MFFloat([0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator474.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,1.63,-1,0,0,1.7,-1,0,0,1.55,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0]);
Group469ZZZ.children[4] = OrientationInterpolator474;

let OrientationInterpolator475 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator475.DEF = "Jump_l_ankle_RotationInterpolator";
OrientationInterpolator475.key = new X3D.MFFloat([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator475.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0]);
Group469ZZZ.children[5] = OrientationInterpolator475;

let OrientationInterpolator476 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator476.DEF = "Jump_l_knee_RotationInterpolator";
OrientationInterpolator476.key = new X3D.MFFloat([0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator476.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0]);
Group469ZZZ.children[6] = OrientationInterpolator476;

let OrientationInterpolator477 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator477.DEF = "Jump_l_hip_RotationInterpolator";
OrientationInterpolator477.key = new X3D.MFFloat([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator477.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0]);
Group469ZZZ.children[7] = OrientationInterpolator477;

let OrientationInterpolator478 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator478.DEF = "Jump_lower_body_RotationInterpolator";
OrientationInterpolator478.key = new X3D.MFFloat([0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator478.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0]);
Group469ZZZ.children[8] = OrientationInterpolator478;

let OrientationInterpolator479 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator479.DEF = "Jump_r_wrist_RotationInterpolator";
OrientationInterpolator479.key = new X3D.MFFloat([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator479.keyValue = new X3D.MFRotation([0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
Group469ZZZ.children[9] = OrientationInterpolator479;

let OrientationInterpolator480 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator480.DEF = "Jump_r_elbow_RotationInterpolator";
OrientationInterpolator480.key = new X3D.MFFloat([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator480.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
Group469ZZZ.children[10] = OrientationInterpolator480;

let OrientationInterpolator481 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator481.DEF = "Jump_r_shoulder_RotationInterpolator";
OrientationInterpolator481.key = new X3D.MFFloat([0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator481.keyValue = new X3D.MFRotation([0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
Group469ZZZ.children[11] = OrientationInterpolator481;

let OrientationInterpolator482 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator482.DEF = "Jump_l_wrist_RotationInterpolator";
OrientationInterpolator482.key = new X3D.MFFloat([0,0.48,0.52,0.64,0.76,0.88,1]);
OrientationInterpolator482.keyValue = new X3D.MFRotation([0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0]);
Group469ZZZ.children[12] = OrientationInterpolator482;

let OrientationInterpolator483 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator483.DEF = "Jump_l_elbow_RotationInterpolator";
OrientationInterpolator483.key = new X3D.MFFloat([0,0.28,0.32,0.58,0.72,1]);
OrientationInterpolator483.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,1.13,-1,0,0,1.7,-1,0,0,1.7,-1,0,0,0.4,0,0,1,0]);
Group469ZZZ.children[13] = OrientationInterpolator483;

let OrientationInterpolator484 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator484.DEF = "Jump_l_shoulder_RotationInterpolator";
OrientationInterpolator484.key = new X3D.MFFloat([0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator484.keyValue = new X3D.MFRotation([0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0]);
Group469ZZZ.children[14] = OrientationInterpolator484;

let OrientationInterpolator485 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator485.DEF = "Jump_head_RotationInterpolator";
OrientationInterpolator485.key = new X3D.MFFloat([0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator485.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0]);
Group469ZZZ.children[15] = OrientationInterpolator485;

let OrientationInterpolator486 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator486.DEF = "Jump_neck_RotationInterpolator";
OrientationInterpolator486.key = new X3D.MFFloat([0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator486.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0]);
Group469ZZZ.children[16] = OrientationInterpolator486;

let OrientationInterpolator487 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator487.DEF = "Jump_upper_body_RotationInterpolator";
OrientationInterpolator487.key = new X3D.MFFloat([0,0.22,0.28,0.34,0.71,0.88,1]);
OrientationInterpolator487.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,1.05,1,0,0,1.051,-1,0,0,0.257,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0]);
Group469ZZZ.children[17] = OrientationInterpolator487;

let OrientationInterpolator488 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator488.DEF = "Jump_whole_body_RotationInterpolator";
OrientationInterpolator488.key = new X3D.MFFloat([0,0.28,0.32,0.48,0.64,0.76,1]);
OrientationInterpolator488.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group469ZZZ.children[18] = OrientationInterpolator488;

let PositionInterpolator489 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator489.DEF = "Jump_whole_body_TranslationInterpolator";
PositionInterpolator489.key = new X3D.MFFloat([0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1]);
PositionInterpolator489.keyValue = new X3D.MFVec3f([0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0,0.35,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0]);
Group469ZZZ.children[19] = PositionInterpolator489;

let OrientationInterpolator490 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator490.DEF = "Jump_l_sternoclavicular_RollInterpolator";
OrientationInterpolator490.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator490.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group469ZZZ.children[20] = OrientationInterpolator490;

let OrientationInterpolator491 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator491.DEF = "Jump_l_acromioclavicular_RollInterpolator";
OrientationInterpolator491.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator491.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group469ZZZ.children[21] = OrientationInterpolator491;

let OrientationInterpolator492 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator492.DEF = "Jump_r_sternoclavicular_RollInterpolator";
OrientationInterpolator492.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator492.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group469ZZZ.children[22] = OrientationInterpolator492;

let OrientationInterpolator493 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator493.DEF = "Jump_r_acromioclavicular_RollInterpolator";
OrientationInterpolator493.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator493.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group469ZZZ.children[23] = OrientationInterpolator493;

let OrientationInterpolator494 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator494.DEF = "Jump_sacroiliac_YawInterpolator";
OrientationInterpolator494.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator494.keyValue = new X3D.MFRotation([0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group469ZZZ.children[24] = OrientationInterpolator494;

let OrientationInterpolator495 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator495.DEF = "Jump_vl5_YawInterpolator";
OrientationInterpolator495.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator495.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,-0.1,0,1,0,0,0,1,0,0,1,0,0,0.6,0,1,0,0.1,0,1,0,0]);
Group469ZZZ.children[25] = OrientationInterpolator495;

let OrientationInterpolator496 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator496.DEF = "Jump_vc6_YawInterpolator";
OrientationInterpolator496.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator496.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0.8,0,1,0,0,0,1,0,0,-1,0,0,0.6,0,-1,0,0.8,0,1,0,0]);
Group469ZZZ.children[26] = OrientationInterpolator496;

let OrientationInterpolator497 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator497.DEF = "Jump_l_thumb1_PitchInterpolator";
OrientationInterpolator497.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator497.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group469ZZZ.children[27] = OrientationInterpolator497;

let OrientationInterpolator498 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator498.DEF = "Jump_r_thumb1_PitchInterpolator";
OrientationInterpolator498.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator498.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group469ZZZ.children[28] = OrientationInterpolator498;

browser.currentScene.children[10] = Group469;

let Group499 = browser.currentScene.createNode("Group");
Group499.DEF = "KickAnimation";
let TimeSensor500 = browser.currentScene.createNode("TimeSensor");
TimeSensor500.DEF = "KickTimer";
TimeSensor500.cycleInterval = 3.73;
TimeSensor500.loop = True;
Group499YYY.children = new X3D.MFNode();

Group499ZZZ.children[0] = TimeSensor500;

let OrientationInterpolator501 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator501.DEF = "Kick_l_sternoclavicular_RollInterpolator";
OrientationInterpolator501.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator501.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group499ZZZ.children[1] = OrientationInterpolator501;

let OrientationInterpolator502 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator502.DEF = "Kick_l_acromioclavicular_RollInterpolator";
OrientationInterpolator502.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator502.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group499ZZZ.children[2] = OrientationInterpolator502;

let OrientationInterpolator503 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator503.DEF = "Kick_l_shoulder_RollInterpolator";
OrientationInterpolator503.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator503.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,1.76,-0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0,0,1,0]);
Group499ZZZ.children[3] = OrientationInterpolator503;

let OrientationInterpolator504 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator504.DEF = "Kick_l_ForeArm_PitchInterpolator";
OrientationInterpolator504.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator504.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,-0.55,-1,0.25,0,2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group499ZZZ.children[4] = OrientationInterpolator504;

let OrientationInterpolator505 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator505.DEF = "Kick_l_wrist_RollInterpolator";
OrientationInterpolator505.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator505.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,1,0,0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group499ZZZ.children[5] = OrientationInterpolator505;

let OrientationInterpolator506 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator506.DEF = "Kick_l_thumb1_PitchInterpolator";
OrientationInterpolator506.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator506.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group499ZZZ.children[6] = OrientationInterpolator506;

let OrientationInterpolator507 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator507.DEF = "Kick_r_sternoclavicular_RollInterpolator";
OrientationInterpolator507.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator507.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group499ZZZ.children[7] = OrientationInterpolator507;

let OrientationInterpolator508 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator508.DEF = "Kick_r_acromioclavicular_RollInterpolator";
OrientationInterpolator508.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator508.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group499ZZZ.children[8] = OrientationInterpolator508;

let OrientationInterpolator509 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator509.DEF = "Kick_r_shoulder_RollInterpolator";
OrientationInterpolator509.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator509.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,-1.76,0.25,0,1,-1.76,0,0,1,-1.256,0,0,1,-0.05,0,0,1,0]);
Group499ZZZ.children[9] = OrientationInterpolator509;

let OrientationInterpolator510 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator510.DEF = "Kick_r_ForeArm_PitchInterpolator";
OrientationInterpolator510.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator510.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,-0.55,1,0.25,0,-2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group499ZZZ.children[10] = OrientationInterpolator510;

let OrientationInterpolator511 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator511.DEF = "Kick_r_wrist_RollInterpolator";
OrientationInterpolator511.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator511.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group499ZZZ.children[11] = OrientationInterpolator511;

let OrientationInterpolator512 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator512.DEF = "Kick_r_thumb1_PitchInterpolator";
OrientationInterpolator512.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator512.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group499ZZZ.children[12] = OrientationInterpolator512;

let OrientationInterpolator513 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator513.DEF = "Kick_r_hip_PitchInterpolator";
OrientationInterpolator513.key = new X3D.MFFloat([0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator513.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.9,-1,0,0,1.75,-1,0,0,2.25,-1,0,0,2,1,0,0,0,1,0,0,0]);
Group499ZZZ.children[13] = OrientationInterpolator513;

let OrientationInterpolator514 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator514.DEF = "Kick_r_knee_PitchInterpolator";
OrientationInterpolator514.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator514.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,1.95,1,0,0,1.75,-1,0,0,0.28,1,0,0,0,1,0,0,0]);
Group499ZZZ.children[14] = OrientationInterpolator514;

let OrientationInterpolator515 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator515.DEF = "Kick_l_hip_PitchInterpolator";
OrientationInterpolator515.key = new X3D.MFFloat([0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator515.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group499ZZZ.children[15] = OrientationInterpolator515;

let OrientationInterpolator516 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator516.DEF = "Kick_l_knee_PitchInterpolator";
OrientationInterpolator516.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator516.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group499ZZZ.children[16] = OrientationInterpolator516;

let OrientationInterpolator517 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator517.DEF = "Kick_r_ankle_PitchInterpolator";
OrientationInterpolator517.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator517.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.9,-1,0,0,0.95,1,0,0,0.75,-1,0,0,0.05,1,0,0,0]);
Group499ZZZ.children[17] = OrientationInterpolator517;

let OrientationInterpolator518 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator518.DEF = "Kick_r_metatarsal_PitchInterpolator";
OrientationInterpolator518.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator518.keyValue = new X3D.MFRotation([1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group499ZZZ.children[18] = OrientationInterpolator518;

let OrientationInterpolator519 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator519.DEF = "Kick_sacroiliac_YawInterpolator";
OrientationInterpolator519.key = new X3D.MFFloat([0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator519.keyValue = new X3D.MFRotation([0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group499ZZZ.children[19] = OrientationInterpolator519;

let OrientationInterpolator520 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator520.DEF = "Kick_vl5_YawInterpolator";
OrientationInterpolator520.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator520.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group499ZZZ.children[20] = OrientationInterpolator520;

let OrientationInterpolator521 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator521.DEF = "Kick_vc6_YawInterpolator";
OrientationInterpolator521.key = new X3D.MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator521.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group499ZZZ.children[21] = OrientationInterpolator521;

let OrientationInterpolator522 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator522.DEF = "Kick_lower_body_RotationInterpolator";
OrientationInterpolator522.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator522.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group499ZZZ.children[22] = OrientationInterpolator522;

let OrientationInterpolator523 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator523.DEF = "Kick_upper_body_RotationInterpolator";
OrientationInterpolator523.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator523.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group499ZZZ.children[23] = OrientationInterpolator523;

let OrientationInterpolator524 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator524.DEF = "Kick_whole_body_RotationInterpolator";
OrientationInterpolator524.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator524.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0,0,0,1,0]);
Group499ZZZ.children[24] = OrientationInterpolator524;

let PositionInterpolator525 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator525.DEF = "Kick_whole_body_TranslationInterpolator";
PositionInterpolator525.key = new X3D.MFFloat([0,0.5,1]);
PositionInterpolator525.keyValue = new X3D.MFVec3f([0,0,0,0,0,0,0,0,0]);
Group499ZZZ.children[25] = PositionInterpolator525;

let OrientationInterpolator526 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator526.DEF = "Kick_neck_RotationInterpolator";
OrientationInterpolator526.key = new X3D.MFFloat([0,0.25,0.55,1]);
OrientationInterpolator526.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0]);
Group499ZZZ.children[26] = OrientationInterpolator526;

browser.currentScene.children[11] = Group499;

let Group527 = browser.currentScene.createNode("Group");
Group527.DEF = "Interface";
let Transform528 = browser.currentScene.createNode("Transform");
Transform528.DEF = "CoordinateSystemFloor";
Transform528.scale = new X3D.SFVec3f([0.1,0.1,0.1]);
let Shape529 = browser.currentScene.createNode("Shape");
Shape529.DEF = "AxisLinesShape";
let IndexedLineSet530 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet530.colorPerVertex = False;
IndexedLineSet530.colorIndex = new X3D.MFInt32([0,1,2]);
IndexedLineSet530.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1,0,3,-1]);
let Color531 = browser.currentScene.createNode("Color");
Color531.color = new X3D.MFColor([1,0,0,0,0.6,0,0,0,1]);
color = Color531;

let Coordinate532 = browser.currentScene.createNode("Coordinate");
Coordinate532.point = new X3D.MFVec3f([0,0,0,1,0,0,0,1,0,0,0,1]);
coord = Coordinate532;

geometry = IndexedLineSet530;

Transform528YYY.child = new X3D.undefined();

Transform528ZZZ.child[0] = Shape529;

Group527YYY.children = new X3D.MFNode();

Group527ZZZ.children[0] = Transform528;

let ProximitySensor533 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor533.DEF = "HudProx";
ProximitySensor533.size = new X3D.SFVec3f([50,50,50]);
Group527ZZZ.children[1] = ProximitySensor533;

let Transform534 = browser.currentScene.createNode("Transform");
Transform534.DEF = "HudXform";
Transform534.translation = new X3D.SFVec3f([2,1,2]);
Transform534.rotation = new X3D.SFRotation([0,1,0,0.78]);
let Transform535 = browser.currentScene.createNode("Transform");
Transform535.translation = new X3D.SFVec3f([-0.4,-0.01,-0.75]);
Transform535.scale = new X3D.SFVec3f([0.02,0.02,0.02]);
let Transform536 = browser.currentScene.createNode("Transform");
Transform536.DEF = "Stand_Text";
Transform536.translation = new X3D.SFVec3f([0,-0.9,0]);
let TouchSensor537 = browser.currentScene.createNode("TouchSensor");
TouchSensor537.DEF = "Stand_Touch";
Transform536YYY.children = new X3D.MFNode();

Transform536ZZZ.children[0] = TouchSensor537;

let Shape538 = browser.currentScene.createNode("Shape");
Shape538.DEF = "StandText";
let Appearance539 = browser.currentScene.createNode("Appearance");
let Material540 = browser.currentScene.createNode("Material");
Material540.DEF = "text_color";
Material540.ambientIntensity = 1;
Material540.diffuseColor = new X3D.SFColor([0.819,0.521,0.169]);
Material540.specularColor = new X3D.SFColor([0.819,0.521,0.169]);
Material540.emissiveColor = new X3D.SFColor([0.819,0.521,0.169]);
material = Material540;

appearance = Appearance539;

let Text541 = browser.currentScene.createNode("Text");
Text541.string = new X3D.MFString([new X3D.SFString("Stand")]);
let FontStyle542 = browser.currentScene.createNode("FontStyle");
FontStyle542.family = new X3D.MFString([new X3D.SFString("SANS")]);
fontStyle = FontStyle542;

geometry = Text541;

Transform536ZZZ.child[1] = Shape538;

let Shape543 = browser.currentScene.createNode("Shape");
Shape543.DEF = "Stand_Back";
let Appearance544 = browser.currentScene.createNode("Appearance");
let Material545 = browser.currentScene.createNode("Material");
Material545.DEF = "Clear";
Material545.ambientIntensity = 1;
Material545.diffuseColor = new X3D.SFColor([0,0.5,0]);
Material545.emissiveColor = new X3D.SFColor([0,0.5,0]);
Material545.transparency = 0.8;
material = Material545;

appearance = Appearance544;

let IndexedFaceSet546 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet546.DEF = "Backing";
IndexedFaceSet546.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate547 = browser.currentScene.createNode("Coordinate");
Coordinate547.point = new X3D.MFVec3f([-0.2,-0.25,-0.01,3,-0.25,-0.01,3,1,-0.01,-0.2,1,-0.01]);
coord = Coordinate547;

geometry = IndexedFaceSet546;

Transform536ZZZ.child[2] = Shape543;

Transform535YYY.children = new X3D.MFNode();

Transform535ZZZ.children[0] = Transform536;

let Transform548 = browser.currentScene.createNode("Transform");
Transform548.DEF = "Pitch_Text";
Transform548.translation = new X3D.SFVec3f([0,-2.4,0]);
let TouchSensor549 = browser.currentScene.createNode("TouchSensor");
TouchSensor549.DEF = "Pitch_Touch";
Transform548YYY.children = new X3D.MFNode();

Transform548ZZZ.children[0] = TouchSensor549;

let Shape550 = browser.currentScene.createNode("Shape");
Shape550.DEF = "PitchText";
let Appearance551 = browser.currentScene.createNode("Appearance");
let Material552 = browser.currentScene.createNode("Material");
Material552.USE = "text_color";
material = Material552;

appearance = Appearance551;

let Text553 = browser.currentScene.createNode("Text");
Text553.string = new X3D.MFString([new X3D.SFString("Pitch")]);
let FontStyle554 = browser.currentScene.createNode("FontStyle");
FontStyle554.family = new X3D.MFString([new X3D.SFString("SANS")]);
fontStyle = FontStyle554;

geometry = Text553;

Transform548ZZZ.child[1] = Shape550;

let Shape555 = browser.currentScene.createNode("Shape");
Shape555.DEF = "Pitch_Back";
let Appearance556 = browser.currentScene.createNode("Appearance");
let Material557 = browser.currentScene.createNode("Material");
Material557.USE = "Clear";
material = Material557;

appearance = Appearance556;

let IndexedFaceSet558 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet558.USE = "Backing";
geometry = IndexedFaceSet558;

Transform548ZZZ.child[2] = Shape555;

Transform535ZZZ.children[1] = Transform548;

let Transform559 = browser.currentScene.createNode("Transform");
Transform559.DEF = "Yaw_Text";
Transform559.translation = new X3D.SFVec3f([0,-3.8,0]);
let TouchSensor560 = browser.currentScene.createNode("TouchSensor");
TouchSensor560.DEF = "Yaw_Touch";
Transform559YYY.children = new X3D.MFNode();

Transform559ZZZ.children[0] = TouchSensor560;

let Shape561 = browser.currentScene.createNode("Shape");
Shape561.DEF = "YawText";
let Appearance562 = browser.currentScene.createNode("Appearance");
let Material563 = browser.currentScene.createNode("Material");
Material563.USE = "text_color";
material = Material563;

appearance = Appearance562;

let Text564 = browser.currentScene.createNode("Text");
Text564.string = new X3D.MFString([new X3D.SFString("Yaw")]);
let FontStyle565 = browser.currentScene.createNode("FontStyle");
FontStyle565.family = new X3D.MFString([new X3D.SFString("SANS")]);
fontStyle = FontStyle565;

geometry = Text564;

Transform559ZZZ.child[1] = Shape561;

let Shape566 = browser.currentScene.createNode("Shape");
Shape566.DEF = "Yaw_Back";
let Appearance567 = browser.currentScene.createNode("Appearance");
let Material568 = browser.currentScene.createNode("Material");
Material568.USE = "Clear";
material = Material568;

appearance = Appearance567;

let IndexedFaceSet569 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet569.USE = "Backing";
geometry = IndexedFaceSet569;

Transform559ZZZ.child[2] = Shape566;

Transform535ZZZ.children[2] = Transform559;

let Transform570 = browser.currentScene.createNode("Transform");
Transform570.DEF = "Roll_Text";
Transform570.translation = new X3D.SFVec3f([0,-5.2,0]);
let TouchSensor571 = browser.currentScene.createNode("TouchSensor");
TouchSensor571.DEF = "Roll_Touch";
Transform570YYY.children = new X3D.MFNode();

Transform570ZZZ.children[0] = TouchSensor571;

let Shape572 = browser.currentScene.createNode("Shape");
Shape572.DEF = "RollText";
let Appearance573 = browser.currentScene.createNode("Appearance");
let Material574 = browser.currentScene.createNode("Material");
Material574.USE = "text_color";
material = Material574;

appearance = Appearance573;

let Text575 = browser.currentScene.createNode("Text");
Text575.string = new X3D.MFString([new X3D.SFString("Roll")]);
let FontStyle576 = browser.currentScene.createNode("FontStyle");
FontStyle576.family = new X3D.MFString([new X3D.SFString("SANS")]);
fontStyle = FontStyle576;

geometry = Text575;

Transform570ZZZ.child[1] = Shape572;

let Shape577 = browser.currentScene.createNode("Shape");
Shape577.DEF = "Roll_Back";
let Appearance578 = browser.currentScene.createNode("Appearance");
let Material579 = browser.currentScene.createNode("Material");
Material579.USE = "Clear";
material = Material579;

appearance = Appearance578;

let IndexedFaceSet580 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet580.USE = "Backing";
geometry = IndexedFaceSet580;

Transform570ZZZ.child[2] = Shape577;

Transform535ZZZ.children[3] = Transform570;

let Transform581 = browser.currentScene.createNode("Transform");
Transform581.DEF = "Walk_Text";
Transform581.translation = new X3D.SFVec3f([0,-6.6,0]);
let TouchSensor582 = browser.currentScene.createNode("TouchSensor");
TouchSensor582.DEF = "Walk_Touch";
Transform581YYY.children = new X3D.MFNode();

Transform581ZZZ.children[0] = TouchSensor582;

let Shape583 = browser.currentScene.createNode("Shape");
Shape583.DEF = "WalkText";
let Appearance584 = browser.currentScene.createNode("Appearance");
let Material585 = browser.currentScene.createNode("Material");
Material585.USE = "text_color";
material = Material585;

appearance = Appearance584;

let Text586 = browser.currentScene.createNode("Text");
Text586.string = new X3D.MFString([new X3D.SFString("Walk")]);
let FontStyle587 = browser.currentScene.createNode("FontStyle");
FontStyle587.family = new X3D.MFString([new X3D.SFString("SANS")]);
fontStyle = FontStyle587;

geometry = Text586;

Transform581ZZZ.child[1] = Shape583;

let Shape588 = browser.currentScene.createNode("Shape");
Shape588.DEF = "Walk_Back";
let Appearance589 = browser.currentScene.createNode("Appearance");
let Material590 = browser.currentScene.createNode("Material");
Material590.USE = "Clear";
material = Material590;

appearance = Appearance589;

let IndexedFaceSet591 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet591.USE = "Backing";
geometry = IndexedFaceSet591;

Transform581ZZZ.child[2] = Shape588;

Transform535ZZZ.children[4] = Transform581;

let Transform592 = browser.currentScene.createNode("Transform");
Transform592.DEF = "Run_Text";
Transform592.translation = new X3D.SFVec3f([0,-8,0]);
let TouchSensor593 = browser.currentScene.createNode("TouchSensor");
TouchSensor593.DEF = "Run_Touch";
Transform592YYY.children = new X3D.MFNode();

Transform592ZZZ.children[0] = TouchSensor593;

let Shape594 = browser.currentScene.createNode("Shape");
Shape594.DEF = "RunText";
let Appearance595 = browser.currentScene.createNode("Appearance");
let Material596 = browser.currentScene.createNode("Material");
Material596.USE = "text_color";
material = Material596;

appearance = Appearance595;

let Text597 = browser.currentScene.createNode("Text");
Text597.string = new X3D.MFString([new X3D.SFString("Run")]);
let FontStyle598 = browser.currentScene.createNode("FontStyle");
FontStyle598.family = new X3D.MFString([new X3D.SFString("SANS")]);
fontStyle = FontStyle598;

geometry = Text597;

Transform592ZZZ.child[1] = Shape594;

let Shape599 = browser.currentScene.createNode("Shape");
Shape599.DEF = "Run_Back";
let Appearance600 = browser.currentScene.createNode("Appearance");
let Material601 = browser.currentScene.createNode("Material");
Material601.USE = "Clear";
material = Material601;

appearance = Appearance600;

let IndexedFaceSet602 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet602.USE = "Backing";
geometry = IndexedFaceSet602;

Transform592ZZZ.child[2] = Shape599;

Transform535ZZZ.children[5] = Transform592;

let Transform603 = browser.currentScene.createNode("Transform");
Transform603.DEF = "Jump_Text";
Transform603.translation = new X3D.SFVec3f([0,-9.4,0]);
let TouchSensor604 = browser.currentScene.createNode("TouchSensor");
TouchSensor604.DEF = "Jump_Touch";
Transform603YYY.children = new X3D.MFNode();

Transform603ZZZ.children[0] = TouchSensor604;

let Shape605 = browser.currentScene.createNode("Shape");
Shape605.DEF = "JumpText";
let Appearance606 = browser.currentScene.createNode("Appearance");
let Material607 = browser.currentScene.createNode("Material");
Material607.USE = "text_color";
material = Material607;

appearance = Appearance606;

let Text608 = browser.currentScene.createNode("Text");
Text608.string = new X3D.MFString([new X3D.SFString("Jump")]);
let FontStyle609 = browser.currentScene.createNode("FontStyle");
FontStyle609.family = new X3D.MFString([new X3D.SFString("SANS")]);
fontStyle = FontStyle609;

geometry = Text608;

Transform603ZZZ.child[1] = Shape605;

let Shape610 = browser.currentScene.createNode("Shape");
Shape610.DEF = "Jump_Back";
let Appearance611 = browser.currentScene.createNode("Appearance");
let Material612 = browser.currentScene.createNode("Material");
Material612.USE = "Clear";
material = Material612;

appearance = Appearance611;

let IndexedFaceSet613 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet613.USE = "Backing";
geometry = IndexedFaceSet613;

Transform603ZZZ.child[2] = Shape610;

Transform535ZZZ.children[6] = Transform603;

let Transform614 = browser.currentScene.createNode("Transform");
Transform614.DEF = "Kick_Text";
Transform614.translation = new X3D.SFVec3f([0,-10.8,0]);
let TouchSensor615 = browser.currentScene.createNode("TouchSensor");
TouchSensor615.DEF = "Kick_Touch";
Transform614YYY.children = new X3D.MFNode();

Transform614ZZZ.children[0] = TouchSensor615;

let Shape616 = browser.currentScene.createNode("Shape");
Shape616.DEF = "KickText";
let Appearance617 = browser.currentScene.createNode("Appearance");
let Material618 = browser.currentScene.createNode("Material");
Material618.USE = "text_color";
material = Material618;

appearance = Appearance617;

let Text619 = browser.currentScene.createNode("Text");
Text619.string = new X3D.MFString([new X3D.SFString("Kick")]);
let FontStyle620 = browser.currentScene.createNode("FontStyle");
FontStyle620.family = new X3D.MFString([new X3D.SFString("SANS")]);
fontStyle = FontStyle620;

geometry = Text619;

Transform614ZZZ.child[1] = Shape616;

let Shape621 = browser.currentScene.createNode("Shape");
Shape621.DEF = "Kick_Back";
let Appearance622 = browser.currentScene.createNode("Appearance");
let Material623 = browser.currentScene.createNode("Material");
Material623.USE = "Clear";
material = Material623;

appearance = Appearance622;

let IndexedFaceSet624 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet624.USE = "Backing";
geometry = IndexedFaceSet624;

Transform614ZZZ.child[2] = Shape621;

Transform535ZZZ.children[7] = Transform614;

let Transform625 = browser.currentScene.createNode("Transform");
Transform625.DEF = "Stop_Text";
Transform625.translation = new X3D.SFVec3f([0,0.4,0]);
let TouchSensor626 = browser.currentScene.createNode("TouchSensor");
TouchSensor626.DEF = "Stop_Touch";
Transform625YYY.children = new X3D.MFNode();

Transform625ZZZ.children[0] = TouchSensor626;

let Shape627 = browser.currentScene.createNode("Shape");
Shape627.DEF = "StopText";
let Appearance628 = browser.currentScene.createNode("Appearance");
let Material629 = browser.currentScene.createNode("Material");
Material629.USE = "text_color";
material = Material629;

appearance = Appearance628;

let Text630 = browser.currentScene.createNode("Text");
Text630.string = new X3D.MFString([new X3D.SFString("Default")]);
let FontStyle631 = browser.currentScene.createNode("FontStyle");
FontStyle631.family = new X3D.MFString([new X3D.SFString("SANS")]);
fontStyle = FontStyle631;

geometry = Text630;

Transform625ZZZ.child[1] = Shape627;

let Shape632 = browser.currentScene.createNode("Shape");
Shape632.DEF = "Stop_Back";
let Appearance633 = browser.currentScene.createNode("Appearance");
let Material634 = browser.currentScene.createNode("Material");
Material634.USE = "Clear";
material = Material634;

appearance = Appearance633;

let IndexedFaceSet635 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet635.USE = "Backing";
geometry = IndexedFaceSet635;

Transform625ZZZ.child[2] = Shape632;

Transform535ZZZ.children[8] = Transform625;

let Transform636 = browser.currentScene.createNode("Transform");
Transform636.DEF = "SceneLabel";
Transform636.translation = new X3D.SFVec3f([1.3,3,0]);
let Shape637 = browser.currentScene.createNode("Shape");
Shape637.DEF = "SceneLabelText";
let Appearance638 = browser.currentScene.createNode("Appearance");
let Material639 = browser.currentScene.createNode("Material");
Material639.USE = "text_color";
material = Material639;

appearance = Appearance638;

let Text640 = browser.currentScene.createNode("Text");
Text640.string = new X3D.MFString([new X3D.SFString("BoxMan4"), new X3D.SFString("Animation")]);
let FontStyle641 = browser.currentScene.createNode("FontStyle");
FontStyle641.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle641.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle641;

geometry = Text640;

Transform636YYY.child = new X3D.undefined();

Transform636ZZZ.child[0] = Shape637;

Transform535ZZZ.children[9] = Transform636;

Transform534YYY.children = new X3D.MFNode();

Transform534ZZZ.children[0] = Transform535;

Group527ZZZ.children[2] = Transform534;

browser.currentScene.children[12] = Group527;

let ROUTE642 = browser.currentScene.createNode("ROUTE");
ROUTE642.fromNode = "StopTimer";
ROUTE642.fromField = "fraction_changed";
ROUTE642.toNode = "Stop_humanoid_root_TranslationInterpolator";
ROUTE642.toField = "set_fraction";
browser.currentScene.children[13] = ROUTE642;

let ROUTE643 = browser.currentScene.createNode("ROUTE");
ROUTE643.fromNode = "StopTimer";
ROUTE643.fromField = "fraction_changed";
ROUTE643.toNode = "Stop_humanoid_root_RotationInterpolator";
ROUTE643.toField = "set_fraction";
browser.currentScene.children[14] = ROUTE643;

let ROUTE644 = browser.currentScene.createNode("ROUTE");
ROUTE644.fromNode = "StopTimer";
ROUTE644.fromField = "fraction_changed";
ROUTE644.toNode = "Stop_sacroiliac_RotationInterpolator";
ROUTE644.toField = "set_fraction";
browser.currentScene.children[15] = ROUTE644;

let ROUTE645 = browser.currentScene.createNode("ROUTE");
ROUTE645.fromNode = "StopTimer";
ROUTE645.fromField = "fraction_changed";
ROUTE645.toNode = "Stop_l_hip_RotationInterpolator";
ROUTE645.toField = "set_fraction";
browser.currentScene.children[16] = ROUTE645;

let ROUTE646 = browser.currentScene.createNode("ROUTE");
ROUTE646.fromNode = "StopTimer";
ROUTE646.fromField = "fraction_changed";
ROUTE646.toNode = "Stop_l_knee_RotationInterpolator";
ROUTE646.toField = "set_fraction";
browser.currentScene.children[17] = ROUTE646;

let ROUTE647 = browser.currentScene.createNode("ROUTE");
ROUTE647.fromNode = "StopTimer";
ROUTE647.fromField = "fraction_changed";
ROUTE647.toNode = "Stop_l_ankle_RotationInterpolator";
ROUTE647.toField = "set_fraction";
browser.currentScene.children[18] = ROUTE647;

let ROUTE648 = browser.currentScene.createNode("ROUTE");
ROUTE648.fromNode = "StopTimer";
ROUTE648.fromField = "fraction_changed";
ROUTE648.toNode = "Stop_l_subtalar_RotationInterpolator";
ROUTE648.toField = "set_fraction";
browser.currentScene.children[19] = ROUTE648;

let ROUTE649 = browser.currentScene.createNode("ROUTE");
ROUTE649.fromNode = "StopTimer";
ROUTE649.fromField = "fraction_changed";
ROUTE649.toNode = "Stop_l_midtarsal_RotationInterpolator";
ROUTE649.toField = "set_fraction";
browser.currentScene.children[20] = ROUTE649;

let ROUTE650 = browser.currentScene.createNode("ROUTE");
ROUTE650.fromNode = "StopTimer";
ROUTE650.fromField = "fraction_changed";
ROUTE650.toNode = "Stop_l_metatarsal_RotationInterpolator";
ROUTE650.toField = "set_fraction";
browser.currentScene.children[21] = ROUTE650;

let ROUTE651 = browser.currentScene.createNode("ROUTE");
ROUTE651.fromNode = "StopTimer";
ROUTE651.fromField = "fraction_changed";
ROUTE651.toNode = "Stop_r_hip_RotationInterpolator";
ROUTE651.toField = "set_fraction";
browser.currentScene.children[22] = ROUTE651;

let ROUTE652 = browser.currentScene.createNode("ROUTE");
ROUTE652.fromNode = "StopTimer";
ROUTE652.fromField = "fraction_changed";
ROUTE652.toNode = "Stop_r_knee_RotationInterpolator";
ROUTE652.toField = "set_fraction";
browser.currentScene.children[23] = ROUTE652;

let ROUTE653 = browser.currentScene.createNode("ROUTE");
ROUTE653.fromNode = "StopTimer";
ROUTE653.fromField = "fraction_changed";
ROUTE653.toNode = "Stop_r_ankle_RotationInterpolator";
ROUTE653.toField = "set_fraction";
browser.currentScene.children[24] = ROUTE653;

let ROUTE654 = browser.currentScene.createNode("ROUTE");
ROUTE654.fromNode = "StopTimer";
ROUTE654.fromField = "fraction_changed";
ROUTE654.toNode = "Stop_r_subtalar_RotationInterpolator";
ROUTE654.toField = "set_fraction";
browser.currentScene.children[25] = ROUTE654;

let ROUTE655 = browser.currentScene.createNode("ROUTE");
ROUTE655.fromNode = "StopTimer";
ROUTE655.fromField = "fraction_changed";
ROUTE655.toNode = "Stop_r_midtarsal_RotationInterpolator";
ROUTE655.toField = "set_fraction";
browser.currentScene.children[26] = ROUTE655;

let ROUTE656 = browser.currentScene.createNode("ROUTE");
ROUTE656.fromNode = "StopTimer";
ROUTE656.fromField = "fraction_changed";
ROUTE656.toNode = "Stop_r_metatarsal_RotationInterpolator";
ROUTE656.toField = "set_fraction";
browser.currentScene.children[27] = ROUTE656;

let ROUTE657 = browser.currentScene.createNode("ROUTE");
ROUTE657.fromNode = "StopTimer";
ROUTE657.fromField = "fraction_changed";
ROUTE657.toNode = "Stop_vl5_RotationInterpolator";
ROUTE657.toField = "set_fraction";
browser.currentScene.children[28] = ROUTE657;

let ROUTE658 = browser.currentScene.createNode("ROUTE");
ROUTE658.fromNode = "StopTimer";
ROUTE658.fromField = "fraction_changed";
ROUTE658.toNode = "Stop_vl4_RotationInterpolator";
ROUTE658.toField = "set_fraction";
browser.currentScene.children[29] = ROUTE658;

let ROUTE659 = browser.currentScene.createNode("ROUTE");
ROUTE659.fromNode = "StopTimer";
ROUTE659.fromField = "fraction_changed";
ROUTE659.toNode = "Stop_vl3_RotationInterpolator";
ROUTE659.toField = "set_fraction";
browser.currentScene.children[30] = ROUTE659;

let ROUTE660 = browser.currentScene.createNode("ROUTE");
ROUTE660.fromNode = "StopTimer";
ROUTE660.fromField = "fraction_changed";
ROUTE660.toNode = "Stop_vl2_RotationInterpolator";
ROUTE660.toField = "set_fraction";
browser.currentScene.children[31] = ROUTE660;

let ROUTE661 = browser.currentScene.createNode("ROUTE");
ROUTE661.fromNode = "StopTimer";
ROUTE661.fromField = "fraction_changed";
ROUTE661.toNode = "Stop_vl1_RotationInterpolator";
ROUTE661.toField = "set_fraction";
browser.currentScene.children[32] = ROUTE661;

let ROUTE662 = browser.currentScene.createNode("ROUTE");
ROUTE662.fromNode = "StopTimer";
ROUTE662.fromField = "fraction_changed";
ROUTE662.toNode = "Stop_vt12_RotationInterpolator";
ROUTE662.toField = "set_fraction";
browser.currentScene.children[33] = ROUTE662;

let ROUTE663 = browser.currentScene.createNode("ROUTE");
ROUTE663.fromNode = "StopTimer";
ROUTE663.fromField = "fraction_changed";
ROUTE663.toNode = "Stop_vt11_RotationInterpolator";
ROUTE663.toField = "set_fraction";
browser.currentScene.children[34] = ROUTE663;

let ROUTE664 = browser.currentScene.createNode("ROUTE");
ROUTE664.fromNode = "StopTimer";
ROUTE664.fromField = "fraction_changed";
ROUTE664.toNode = "Stop_vt10_RotationInterpolator";
ROUTE664.toField = "set_fraction";
browser.currentScene.children[35] = ROUTE664;

let ROUTE665 = browser.currentScene.createNode("ROUTE");
ROUTE665.fromNode = "StopTimer";
ROUTE665.fromField = "fraction_changed";
ROUTE665.toNode = "Stop_vt9_RotationInterpolator";
ROUTE665.toField = "set_fraction";
browser.currentScene.children[36] = ROUTE665;

let ROUTE666 = browser.currentScene.createNode("ROUTE");
ROUTE666.fromNode = "StopTimer";
ROUTE666.fromField = "fraction_changed";
ROUTE666.toNode = "Stop_vt8_RotationInterpolator";
ROUTE666.toField = "set_fraction";
browser.currentScene.children[37] = ROUTE666;

let ROUTE667 = browser.currentScene.createNode("ROUTE");
ROUTE667.fromNode = "StopTimer";
ROUTE667.fromField = "fraction_changed";
ROUTE667.toNode = "Stop_vt7_RotationInterpolator";
ROUTE667.toField = "set_fraction";
browser.currentScene.children[38] = ROUTE667;

let ROUTE668 = browser.currentScene.createNode("ROUTE");
ROUTE668.fromNode = "StopTimer";
ROUTE668.fromField = "fraction_changed";
ROUTE668.toNode = "Stop_vt6_RotationInterpolator";
ROUTE668.toField = "set_fraction";
browser.currentScene.children[39] = ROUTE668;

let ROUTE669 = browser.currentScene.createNode("ROUTE");
ROUTE669.fromNode = "StopTimer";
ROUTE669.fromField = "fraction_changed";
ROUTE669.toNode = "Stop_vt5_RotationInterpolator";
ROUTE669.toField = "set_fraction";
browser.currentScene.children[40] = ROUTE669;

let ROUTE670 = browser.currentScene.createNode("ROUTE");
ROUTE670.fromNode = "StopTimer";
ROUTE670.fromField = "fraction_changed";
ROUTE670.toNode = "Stop_vt4_RotationInterpolator";
ROUTE670.toField = "set_fraction";
browser.currentScene.children[41] = ROUTE670;

let ROUTE671 = browser.currentScene.createNode("ROUTE");
ROUTE671.fromNode = "StopTimer";
ROUTE671.fromField = "fraction_changed";
ROUTE671.toNode = "Stop_vt3_RotationInterpolator";
ROUTE671.toField = "set_fraction";
browser.currentScene.children[42] = ROUTE671;

let ROUTE672 = browser.currentScene.createNode("ROUTE");
ROUTE672.fromNode = "StopTimer";
ROUTE672.fromField = "fraction_changed";
ROUTE672.toNode = "Stop_vt2_RotationInterpolator";
ROUTE672.toField = "set_fraction";
browser.currentScene.children[43] = ROUTE672;

let ROUTE673 = browser.currentScene.createNode("ROUTE");
ROUTE673.fromNode = "StopTimer";
ROUTE673.fromField = "fraction_changed";
ROUTE673.toNode = "Stop_vt1_RotationInterpolator";
ROUTE673.toField = "set_fraction";
browser.currentScene.children[44] = ROUTE673;

let ROUTE674 = browser.currentScene.createNode("ROUTE");
ROUTE674.fromNode = "StopTimer";
ROUTE674.fromField = "fraction_changed";
ROUTE674.toNode = "Stop_vc7_RotationInterpolator";
ROUTE674.toField = "set_fraction";
browser.currentScene.children[45] = ROUTE674;

let ROUTE675 = browser.currentScene.createNode("ROUTE");
ROUTE675.fromNode = "StopTimer";
ROUTE675.fromField = "fraction_changed";
ROUTE675.toNode = "Stop_vc6_RotationInterpolator";
ROUTE675.toField = "set_fraction";
browser.currentScene.children[46] = ROUTE675;

let ROUTE676 = browser.currentScene.createNode("ROUTE");
ROUTE676.fromNode = "StopTimer";
ROUTE676.fromField = "fraction_changed";
ROUTE676.toNode = "Stop_vc5_RotationInterpolator";
ROUTE676.toField = "set_fraction";
browser.currentScene.children[47] = ROUTE676;

let ROUTE677 = browser.currentScene.createNode("ROUTE");
ROUTE677.fromNode = "StopTimer";
ROUTE677.fromField = "fraction_changed";
ROUTE677.toNode = "Stop_vc4_RotationInterpolator";
ROUTE677.toField = "set_fraction";
browser.currentScene.children[48] = ROUTE677;

let ROUTE678 = browser.currentScene.createNode("ROUTE");
ROUTE678.fromNode = "StopTimer";
ROUTE678.fromField = "fraction_changed";
ROUTE678.toNode = "Stop_vc3_RotationInterpolator";
ROUTE678.toField = "set_fraction";
browser.currentScene.children[49] = ROUTE678;

let ROUTE679 = browser.currentScene.createNode("ROUTE");
ROUTE679.fromNode = "StopTimer";
ROUTE679.fromField = "fraction_changed";
ROUTE679.toNode = "Stop_vc2_RotationInterpolator";
ROUTE679.toField = "set_fraction";
browser.currentScene.children[50] = ROUTE679;

let ROUTE680 = browser.currentScene.createNode("ROUTE");
ROUTE680.fromNode = "StopTimer";
ROUTE680.fromField = "fraction_changed";
ROUTE680.toNode = "Stop_vc1_RotationInterpolator";
ROUTE680.toField = "set_fraction";
browser.currentScene.children[51] = ROUTE680;

let ROUTE681 = browser.currentScene.createNode("ROUTE");
ROUTE681.fromNode = "StopTimer";
ROUTE681.fromField = "fraction_changed";
ROUTE681.toNode = "Stop_skullbase_RotationInterpolator";
ROUTE681.toField = "set_fraction";
browser.currentScene.children[52] = ROUTE681;

let ROUTE682 = browser.currentScene.createNode("ROUTE");
ROUTE682.fromNode = "StopTimer";
ROUTE682.fromField = "fraction_changed";
ROUTE682.toNode = "Stop_l_eyeball_joint_RotationInterpolator";
ROUTE682.toField = "set_fraction";
browser.currentScene.children[53] = ROUTE682;

let ROUTE683 = browser.currentScene.createNode("ROUTE");
ROUTE683.fromNode = "StopTimer";
ROUTE683.fromField = "fraction_changed";
ROUTE683.toNode = "Stop_r_eyeball_joint_RotationInterpolator";
ROUTE683.toField = "set_fraction";
browser.currentScene.children[54] = ROUTE683;

let ROUTE684 = browser.currentScene.createNode("ROUTE");
ROUTE684.fromNode = "StopTimer";
ROUTE684.fromField = "fraction_changed";
ROUTE684.toNode = "Stop_l_sternoclavicular_RotationInterpolator";
ROUTE684.toField = "set_fraction";
browser.currentScene.children[55] = ROUTE684;

let ROUTE685 = browser.currentScene.createNode("ROUTE");
ROUTE685.fromNode = "StopTimer";
ROUTE685.fromField = "fraction_changed";
ROUTE685.toNode = "Stop_l_acromioclavicular_RotationInterpolator";
ROUTE685.toField = "set_fraction";
browser.currentScene.children[56] = ROUTE685;

let ROUTE686 = browser.currentScene.createNode("ROUTE");
ROUTE686.fromNode = "StopTimer";
ROUTE686.fromField = "fraction_changed";
ROUTE686.toNode = "Stop_l_shoulder_RotationInterpolator";
ROUTE686.toField = "set_fraction";
browser.currentScene.children[57] = ROUTE686;

let ROUTE687 = browser.currentScene.createNode("ROUTE");
ROUTE687.fromNode = "StopTimer";
ROUTE687.fromField = "fraction_changed";
ROUTE687.toNode = "Stop_l_elbow_RotationInterpolator";
ROUTE687.toField = "set_fraction";
browser.currentScene.children[58] = ROUTE687;

let ROUTE688 = browser.currentScene.createNode("ROUTE");
ROUTE688.fromNode = "StopTimer";
ROUTE688.fromField = "fraction_changed";
ROUTE688.toNode = "Stop_l_wrist_RotationInterpolator";
ROUTE688.toField = "set_fraction";
browser.currentScene.children[59] = ROUTE688;

let ROUTE689 = browser.currentScene.createNode("ROUTE");
ROUTE689.fromNode = "StopTimer";
ROUTE689.fromField = "fraction_changed";
ROUTE689.toNode = "Stop_l_thumb1_RotationInterpolator";
ROUTE689.toField = "set_fraction";
browser.currentScene.children[60] = ROUTE689;

let ROUTE690 = browser.currentScene.createNode("ROUTE");
ROUTE690.fromNode = "StopTimer";
ROUTE690.fromField = "fraction_changed";
ROUTE690.toNode = "Stop_l_thumb2_RotationInterpolator";
ROUTE690.toField = "set_fraction";
browser.currentScene.children[61] = ROUTE690;

let ROUTE691 = browser.currentScene.createNode("ROUTE");
ROUTE691.fromNode = "StopTimer";
ROUTE691.fromField = "fraction_changed";
ROUTE691.toNode = "Stop_l_thumb3_RotationInterpolator";
ROUTE691.toField = "set_fraction";
browser.currentScene.children[62] = ROUTE691;

let ROUTE692 = browser.currentScene.createNode("ROUTE");
ROUTE692.fromNode = "StopTimer";
ROUTE692.fromField = "fraction_changed";
ROUTE692.toNode = "Stop_l_index0_RotationInterpolator";
ROUTE692.toField = "set_fraction";
browser.currentScene.children[63] = ROUTE692;

let ROUTE693 = browser.currentScene.createNode("ROUTE");
ROUTE693.fromNode = "StopTimer";
ROUTE693.fromField = "fraction_changed";
ROUTE693.toNode = "Stop_l_index1_RotationInterpolator";
ROUTE693.toField = "set_fraction";
browser.currentScene.children[64] = ROUTE693;

let ROUTE694 = browser.currentScene.createNode("ROUTE");
ROUTE694.fromNode = "StopTimer";
ROUTE694.fromField = "fraction_changed";
ROUTE694.toNode = "Stop_l_index2_RotationInterpolator";
ROUTE694.toField = "set_fraction";
browser.currentScene.children[65] = ROUTE694;

let ROUTE695 = browser.currentScene.createNode("ROUTE");
ROUTE695.fromNode = "StopTimer";
ROUTE695.fromField = "fraction_changed";
ROUTE695.toNode = "Stop_l_index3_RotationInterpolator";
ROUTE695.toField = "set_fraction";
browser.currentScene.children[66] = ROUTE695;

let ROUTE696 = browser.currentScene.createNode("ROUTE");
ROUTE696.fromNode = "StopTimer";
ROUTE696.fromField = "fraction_changed";
ROUTE696.toNode = "Stop_l_middle0_RotationInterpolator";
ROUTE696.toField = "set_fraction";
browser.currentScene.children[67] = ROUTE696;

let ROUTE697 = browser.currentScene.createNode("ROUTE");
ROUTE697.fromNode = "StopTimer";
ROUTE697.fromField = "fraction_changed";
ROUTE697.toNode = "Stop_l_middle1_RotationInterpolator";
ROUTE697.toField = "set_fraction";
browser.currentScene.children[68] = ROUTE697;

let ROUTE698 = browser.currentScene.createNode("ROUTE");
ROUTE698.fromNode = "StopTimer";
ROUTE698.fromField = "fraction_changed";
ROUTE698.toNode = "Stop_l_middle2_RotationInterpolator";
ROUTE698.toField = "set_fraction";
browser.currentScene.children[69] = ROUTE698;

let ROUTE699 = browser.currentScene.createNode("ROUTE");
ROUTE699.fromNode = "StopTimer";
ROUTE699.fromField = "fraction_changed";
ROUTE699.toNode = "Stop_l_middle3_RotationInterpolator";
ROUTE699.toField = "set_fraction";
browser.currentScene.children[70] = ROUTE699;

let ROUTE700 = browser.currentScene.createNode("ROUTE");
ROUTE700.fromNode = "StopTimer";
ROUTE700.fromField = "fraction_changed";
ROUTE700.toNode = "Stop_l_ring0_RotationInterpolator";
ROUTE700.toField = "set_fraction";
browser.currentScene.children[71] = ROUTE700;

let ROUTE701 = browser.currentScene.createNode("ROUTE");
ROUTE701.fromNode = "StopTimer";
ROUTE701.fromField = "fraction_changed";
ROUTE701.toNode = "Stop_l_ring1_RotationInterpolator";
ROUTE701.toField = "set_fraction";
browser.currentScene.children[72] = ROUTE701;

let ROUTE702 = browser.currentScene.createNode("ROUTE");
ROUTE702.fromNode = "StopTimer";
ROUTE702.fromField = "fraction_changed";
ROUTE702.toNode = "Stop_l_ring2_RotationInterpolator";
ROUTE702.toField = "set_fraction";
browser.currentScene.children[73] = ROUTE702;

let ROUTE703 = browser.currentScene.createNode("ROUTE");
ROUTE703.fromNode = "StopTimer";
ROUTE703.fromField = "fraction_changed";
ROUTE703.toNode = "Stop_l_ring3_RotationInterpolator";
ROUTE703.toField = "set_fraction";
browser.currentScene.children[74] = ROUTE703;

let ROUTE704 = browser.currentScene.createNode("ROUTE");
ROUTE704.fromNode = "StopTimer";
ROUTE704.fromField = "fraction_changed";
ROUTE704.toNode = "Stop_l_pinky0_RotationInterpolator";
ROUTE704.toField = "set_fraction";
browser.currentScene.children[75] = ROUTE704;

let ROUTE705 = browser.currentScene.createNode("ROUTE");
ROUTE705.fromNode = "StopTimer";
ROUTE705.fromField = "fraction_changed";
ROUTE705.toNode = "Stop_l_pinky1_RotationInterpolator";
ROUTE705.toField = "set_fraction";
browser.currentScene.children[76] = ROUTE705;

let ROUTE706 = browser.currentScene.createNode("ROUTE");
ROUTE706.fromNode = "StopTimer";
ROUTE706.fromField = "fraction_changed";
ROUTE706.toNode = "Stop_l_pinky2_RotationInterpolator";
ROUTE706.toField = "set_fraction";
browser.currentScene.children[77] = ROUTE706;

let ROUTE707 = browser.currentScene.createNode("ROUTE");
ROUTE707.fromNode = "StopTimer";
ROUTE707.fromField = "fraction_changed";
ROUTE707.toNode = "Stop_l_pinky3_RotationInterpolator";
ROUTE707.toField = "set_fraction";
browser.currentScene.children[78] = ROUTE707;

let ROUTE708 = browser.currentScene.createNode("ROUTE");
ROUTE708.fromNode = "StopTimer";
ROUTE708.fromField = "fraction_changed";
ROUTE708.toNode = "Stop_r_sternoclavicular_RotationInterpolator";
ROUTE708.toField = "set_fraction";
browser.currentScene.children[79] = ROUTE708;

let ROUTE709 = browser.currentScene.createNode("ROUTE");
ROUTE709.fromNode = "StopTimer";
ROUTE709.fromField = "fraction_changed";
ROUTE709.toNode = "Stop_r_acromioclavicular_RotationInterpolator";
ROUTE709.toField = "set_fraction";
browser.currentScene.children[80] = ROUTE709;

let ROUTE710 = browser.currentScene.createNode("ROUTE");
ROUTE710.fromNode = "StopTimer";
ROUTE710.fromField = "fraction_changed";
ROUTE710.toNode = "Stop_r_shoulder_RotationInterpolator";
ROUTE710.toField = "set_fraction";
browser.currentScene.children[81] = ROUTE710;

let ROUTE711 = browser.currentScene.createNode("ROUTE");
ROUTE711.fromNode = "StopTimer";
ROUTE711.fromField = "fraction_changed";
ROUTE711.toNode = "Stop_r_elbow_RotationInterpolator";
ROUTE711.toField = "set_fraction";
browser.currentScene.children[82] = ROUTE711;

let ROUTE712 = browser.currentScene.createNode("ROUTE");
ROUTE712.fromNode = "StopTimer";
ROUTE712.fromField = "fraction_changed";
ROUTE712.toNode = "Stop_r_wrist_RotationInterpolator";
ROUTE712.toField = "set_fraction";
browser.currentScene.children[83] = ROUTE712;

let ROUTE713 = browser.currentScene.createNode("ROUTE");
ROUTE713.fromNode = "StopTimer";
ROUTE713.fromField = "fraction_changed";
ROUTE713.toNode = "Stop_r_thumb1_RotationInterpolator";
ROUTE713.toField = "set_fraction";
browser.currentScene.children[84] = ROUTE713;

let ROUTE714 = browser.currentScene.createNode("ROUTE");
ROUTE714.fromNode = "StopTimer";
ROUTE714.fromField = "fraction_changed";
ROUTE714.toNode = "Stop_r_thumb2_RotationInterpolator";
ROUTE714.toField = "set_fraction";
browser.currentScene.children[85] = ROUTE714;

let ROUTE715 = browser.currentScene.createNode("ROUTE");
ROUTE715.fromNode = "StopTimer";
ROUTE715.fromField = "fraction_changed";
ROUTE715.toNode = "Stop_r_thumb3_RotationInterpolator";
ROUTE715.toField = "set_fraction";
browser.currentScene.children[86] = ROUTE715;

let ROUTE716 = browser.currentScene.createNode("ROUTE");
ROUTE716.fromNode = "StopTimer";
ROUTE716.fromField = "fraction_changed";
ROUTE716.toNode = "Stop_r_index0_RotationInterpolator";
ROUTE716.toField = "set_fraction";
browser.currentScene.children[87] = ROUTE716;

let ROUTE717 = browser.currentScene.createNode("ROUTE");
ROUTE717.fromNode = "StopTimer";
ROUTE717.fromField = "fraction_changed";
ROUTE717.toNode = "Stop_r_index1_RotationInterpolator";
ROUTE717.toField = "set_fraction";
browser.currentScene.children[88] = ROUTE717;

let ROUTE718 = browser.currentScene.createNode("ROUTE");
ROUTE718.fromNode = "StopTimer";
ROUTE718.fromField = "fraction_changed";
ROUTE718.toNode = "Stop_r_index2_RotationInterpolator";
ROUTE718.toField = "set_fraction";
browser.currentScene.children[89] = ROUTE718;

let ROUTE719 = browser.currentScene.createNode("ROUTE");
ROUTE719.fromNode = "StopTimer";
ROUTE719.fromField = "fraction_changed";
ROUTE719.toNode = "Stop_r_index3_RotationInterpolator";
ROUTE719.toField = "set_fraction";
browser.currentScene.children[90] = ROUTE719;

let ROUTE720 = browser.currentScene.createNode("ROUTE");
ROUTE720.fromNode = "StopTimer";
ROUTE720.fromField = "fraction_changed";
ROUTE720.toNode = "Stop_r_middle0_RotationInterpolator";
ROUTE720.toField = "set_fraction";
browser.currentScene.children[91] = ROUTE720;

let ROUTE721 = browser.currentScene.createNode("ROUTE");
ROUTE721.fromNode = "StopTimer";
ROUTE721.fromField = "fraction_changed";
ROUTE721.toNode = "Stop_r_middle1_RotationInterpolator";
ROUTE721.toField = "set_fraction";
browser.currentScene.children[92] = ROUTE721;

let ROUTE722 = browser.currentScene.createNode("ROUTE");
ROUTE722.fromNode = "StopTimer";
ROUTE722.fromField = "fraction_changed";
ROUTE722.toNode = "Stop_r_middle2_RotationInterpolator";
ROUTE722.toField = "set_fraction";
browser.currentScene.children[93] = ROUTE722;

let ROUTE723 = browser.currentScene.createNode("ROUTE");
ROUTE723.fromNode = "StopTimer";
ROUTE723.fromField = "fraction_changed";
ROUTE723.toNode = "Stop_r_middle3_RotationInterpolator";
ROUTE723.toField = "set_fraction";
browser.currentScene.children[94] = ROUTE723;

let ROUTE724 = browser.currentScene.createNode("ROUTE");
ROUTE724.fromNode = "StopTimer";
ROUTE724.fromField = "fraction_changed";
ROUTE724.toNode = "Stop_r_ring0_RotationInterpolator";
ROUTE724.toField = "set_fraction";
browser.currentScene.children[95] = ROUTE724;

let ROUTE725 = browser.currentScene.createNode("ROUTE");
ROUTE725.fromNode = "StopTimer";
ROUTE725.fromField = "fraction_changed";
ROUTE725.toNode = "Stop_r_ring1_RotationInterpolator";
ROUTE725.toField = "set_fraction";
browser.currentScene.children[96] = ROUTE725;

let ROUTE726 = browser.currentScene.createNode("ROUTE");
ROUTE726.fromNode = "StopTimer";
ROUTE726.fromField = "fraction_changed";
ROUTE726.toNode = "Stop_r_ring2_RotationInterpolator";
ROUTE726.toField = "set_fraction";
browser.currentScene.children[97] = ROUTE726;

let ROUTE727 = browser.currentScene.createNode("ROUTE");
ROUTE727.fromNode = "StopTimer";
ROUTE727.fromField = "fraction_changed";
ROUTE727.toNode = "Stop_r_ring3_RotationInterpolator";
ROUTE727.toField = "set_fraction";
browser.currentScene.children[98] = ROUTE727;

let ROUTE728 = browser.currentScene.createNode("ROUTE");
ROUTE728.fromNode = "StopTimer";
ROUTE728.fromField = "fraction_changed";
ROUTE728.toNode = "Stop_r_pinky0_RotationInterpolator";
ROUTE728.toField = "set_fraction";
browser.currentScene.children[99] = ROUTE728;

let ROUTE729 = browser.currentScene.createNode("ROUTE");
ROUTE729.fromNode = "StopTimer";
ROUTE729.fromField = "fraction_changed";
ROUTE729.toNode = "Stop_r_pinky1_RotationInterpolator";
ROUTE729.toField = "set_fraction";
browser.currentScene.children[100] = ROUTE729;

let ROUTE730 = browser.currentScene.createNode("ROUTE");
ROUTE730.fromNode = "StopTimer";
ROUTE730.fromField = "fraction_changed";
ROUTE730.toNode = "Stop_r_pinky2_RotationInterpolator";
ROUTE730.toField = "set_fraction";
browser.currentScene.children[101] = ROUTE730;

let ROUTE731 = browser.currentScene.createNode("ROUTE");
ROUTE731.fromNode = "StopTimer";
ROUTE731.fromField = "fraction_changed";
ROUTE731.toNode = "Stop_r_pinky3_RotationInterpolator";
ROUTE731.toField = "set_fraction";
browser.currentScene.children[102] = ROUTE731;

let ROUTE732 = browser.currentScene.createNode("ROUTE");
ROUTE732.fromNode = "Stop_humanoid_root_TranslationInterpolator";
ROUTE732.fromField = "value_changed";
ROUTE732.toNode = "boxman_humanoid_root";
ROUTE732.toField = "set_translation";
browser.currentScene.children[103] = ROUTE732;

let ROUTE733 = browser.currentScene.createNode("ROUTE");
ROUTE733.fromNode = "Stop_humanoid_root_RotationInterpolator";
ROUTE733.fromField = "value_changed";
ROUTE733.toNode = "boxman_humanoid_root";
ROUTE733.toField = "set_rotation";
browser.currentScene.children[104] = ROUTE733;

let ROUTE734 = browser.currentScene.createNode("ROUTE");
ROUTE734.fromNode = "Stop_l_hip_RotationInterpolator";
ROUTE734.fromField = "value_changed";
ROUTE734.toNode = "boxman_l_hip";
ROUTE734.toField = "set_rotation";
browser.currentScene.children[105] = ROUTE734;

let ROUTE735 = browser.currentScene.createNode("ROUTE");
ROUTE735.fromNode = "Stop_l_knee_RotationInterpolator";
ROUTE735.fromField = "value_changed";
ROUTE735.toNode = "boxman_l_knee";
ROUTE735.toField = "set_rotation";
browser.currentScene.children[106] = ROUTE735;

let ROUTE736 = browser.currentScene.createNode("ROUTE");
ROUTE736.fromNode = "Stop_l_ankle_RotationInterpolator";
ROUTE736.fromField = "value_changed";
ROUTE736.toNode = "boxman_l_ankle";
ROUTE736.toField = "set_rotation";
browser.currentScene.children[107] = ROUTE736;

let ROUTE737 = browser.currentScene.createNode("ROUTE");
ROUTE737.fromNode = "Stop_l_midtarsal_RotationInterpolator";
ROUTE737.fromField = "value_changed";
ROUTE737.toNode = "boxman_l_midtarsal";
ROUTE737.toField = "set_rotation";
browser.currentScene.children[108] = ROUTE737;

let ROUTE738 = browser.currentScene.createNode("ROUTE");
ROUTE738.fromNode = "Stop_r_hip_RotationInterpolator";
ROUTE738.fromField = "value_changed";
ROUTE738.toNode = "boxman_r_hip";
ROUTE738.toField = "set_rotation";
browser.currentScene.children[109] = ROUTE738;

let ROUTE739 = browser.currentScene.createNode("ROUTE");
ROUTE739.fromNode = "Stop_r_knee_RotationInterpolator";
ROUTE739.fromField = "value_changed";
ROUTE739.toNode = "boxman_r_knee";
ROUTE739.toField = "set_rotation";
browser.currentScene.children[110] = ROUTE739;

let ROUTE740 = browser.currentScene.createNode("ROUTE");
ROUTE740.fromNode = "Stop_r_ankle_RotationInterpolator";
ROUTE740.fromField = "value_changed";
ROUTE740.toNode = "boxman_r_ankle";
ROUTE740.toField = "set_rotation";
browser.currentScene.children[111] = ROUTE740;

let ROUTE741 = browser.currentScene.createNode("ROUTE");
ROUTE741.fromNode = "Stop_r_midtarsal_RotationInterpolator";
ROUTE741.fromField = "value_changed";
ROUTE741.toNode = "boxman_r_midtarsal";
ROUTE741.toField = "set_rotation";
browser.currentScene.children[112] = ROUTE741;

let ROUTE742 = browser.currentScene.createNode("ROUTE");
ROUTE742.fromNode = "Stop_vl5_RotationInterpolator";
ROUTE742.fromField = "value_changed";
ROUTE742.toNode = "boxman_vl5";
ROUTE742.toField = "set_rotation";
browser.currentScene.children[113] = ROUTE742;

let ROUTE743 = browser.currentScene.createNode("ROUTE");
ROUTE743.fromNode = "Stop_skullbase_RotationInterpolator";
ROUTE743.fromField = "value_changed";
ROUTE743.toNode = "boxman_skullbase";
ROUTE743.toField = "set_rotation";
browser.currentScene.children[114] = ROUTE743;

let ROUTE744 = browser.currentScene.createNode("ROUTE");
ROUTE744.fromNode = "Stop_l_shoulder_RotationInterpolator";
ROUTE744.fromField = "value_changed";
ROUTE744.toNode = "boxman_l_shoulder";
ROUTE744.toField = "set_rotation";
browser.currentScene.children[115] = ROUTE744;

let ROUTE745 = browser.currentScene.createNode("ROUTE");
ROUTE745.fromNode = "Stop_l_elbow_RotationInterpolator";
ROUTE745.fromField = "value_changed";
ROUTE745.toNode = "boxman_l_elbow";
ROUTE745.toField = "set_rotation";
browser.currentScene.children[116] = ROUTE745;

let ROUTE746 = browser.currentScene.createNode("ROUTE");
ROUTE746.fromNode = "Stop_l_wrist_RotationInterpolator";
ROUTE746.fromField = "value_changed";
ROUTE746.toNode = "boxman_l_wrist";
ROUTE746.toField = "set_rotation";
browser.currentScene.children[117] = ROUTE746;

let ROUTE747 = browser.currentScene.createNode("ROUTE");
ROUTE747.fromNode = "Stop_r_shoulder_RotationInterpolator";
ROUTE747.fromField = "value_changed";
ROUTE747.toNode = "boxman_r_shoulder";
ROUTE747.toField = "set_rotation";
browser.currentScene.children[118] = ROUTE747;

let ROUTE748 = browser.currentScene.createNode("ROUTE");
ROUTE748.fromNode = "Stop_r_elbow_RotationInterpolator";
ROUTE748.fromField = "value_changed";
ROUTE748.toNode = "boxman_r_elbow";
ROUTE748.toField = "set_rotation";
browser.currentScene.children[119] = ROUTE748;

let ROUTE749 = browser.currentScene.createNode("ROUTE");
ROUTE749.fromNode = "Stop_r_wrist_RotationInterpolator";
ROUTE749.fromField = "value_changed";
ROUTE749.toNode = "boxman_r_wrist";
ROUTE749.toField = "set_rotation";
browser.currentScene.children[120] = ROUTE749;

let ROUTE750 = browser.currentScene.createNode("ROUTE");
ROUTE750.fromNode = "StandTimer";
ROUTE750.fromField = "fraction_changed";
ROUTE750.toNode = "Stand_r_ankle_RotationInterpolator";
ROUTE750.toField = "set_fraction";
browser.currentScene.children[121] = ROUTE750;

let ROUTE751 = browser.currentScene.createNode("ROUTE");
ROUTE751.fromNode = "StandTimer";
ROUTE751.fromField = "fraction_changed";
ROUTE751.toNode = "Stand_r_knee_RotationInterpolator";
ROUTE751.toField = "set_fraction";
browser.currentScene.children[122] = ROUTE751;

let ROUTE752 = browser.currentScene.createNode("ROUTE");
ROUTE752.fromNode = "StandTimer";
ROUTE752.fromField = "fraction_changed";
ROUTE752.toNode = "Stand_r_hip_RotationInterpolator";
ROUTE752.toField = "set_fraction";
browser.currentScene.children[123] = ROUTE752;

let ROUTE753 = browser.currentScene.createNode("ROUTE");
ROUTE753.fromNode = "StandTimer";
ROUTE753.fromField = "fraction_changed";
ROUTE753.toNode = "Stand_l_ankle_RotationInterpolator";
ROUTE753.toField = "set_fraction";
browser.currentScene.children[124] = ROUTE753;

let ROUTE754 = browser.currentScene.createNode("ROUTE");
ROUTE754.fromNode = "StandTimer";
ROUTE754.fromField = "fraction_changed";
ROUTE754.toNode = "Stand_l_knee_RotationInterpolator";
ROUTE754.toField = "set_fraction";
browser.currentScene.children[125] = ROUTE754;

let ROUTE755 = browser.currentScene.createNode("ROUTE");
ROUTE755.fromNode = "StandTimer";
ROUTE755.fromField = "fraction_changed";
ROUTE755.toNode = "Stand_l_hip_RotationInterpolator";
ROUTE755.toField = "set_fraction";
browser.currentScene.children[126] = ROUTE755;

let ROUTE756 = browser.currentScene.createNode("ROUTE");
ROUTE756.fromNode = "StandTimer";
ROUTE756.fromField = "fraction_changed";
ROUTE756.toNode = "Stand_lower_body_RotationInterpolator";
ROUTE756.toField = "set_fraction";
browser.currentScene.children[127] = ROUTE756;

let ROUTE757 = browser.currentScene.createNode("ROUTE");
ROUTE757.fromNode = "StandTimer";
ROUTE757.fromField = "fraction_changed";
ROUTE757.toNode = "Stand_r_wrist_RotationInterpolator";
ROUTE757.toField = "set_fraction";
browser.currentScene.children[128] = ROUTE757;

let ROUTE758 = browser.currentScene.createNode("ROUTE");
ROUTE758.fromNode = "StandTimer";
ROUTE758.fromField = "fraction_changed";
ROUTE758.toNode = "Stand_r_elbow_RotationInterpolator";
ROUTE758.toField = "set_fraction";
browser.currentScene.children[129] = ROUTE758;

let ROUTE759 = browser.currentScene.createNode("ROUTE");
ROUTE759.fromNode = "StandTimer";
ROUTE759.fromField = "fraction_changed";
ROUTE759.toNode = "Stand_r_shoulder_RotationInterpolator";
ROUTE759.toField = "set_fraction";
browser.currentScene.children[130] = ROUTE759;

let ROUTE760 = browser.currentScene.createNode("ROUTE");
ROUTE760.fromNode = "StandTimer";
ROUTE760.fromField = "fraction_changed";
ROUTE760.toNode = "Stand_l_wrist_RotationInterpolator";
ROUTE760.toField = "set_fraction";
browser.currentScene.children[131] = ROUTE760;

let ROUTE761 = browser.currentScene.createNode("ROUTE");
ROUTE761.fromNode = "StandTimer";
ROUTE761.fromField = "fraction_changed";
ROUTE761.toNode = "Stand_l_elbow_RotationInterpolator";
ROUTE761.toField = "set_fraction";
browser.currentScene.children[132] = ROUTE761;

let ROUTE762 = browser.currentScene.createNode("ROUTE");
ROUTE762.fromNode = "StandTimer";
ROUTE762.fromField = "fraction_changed";
ROUTE762.toNode = "Stand_l_shoulder_RotationInterpolator";
ROUTE762.toField = "set_fraction";
browser.currentScene.children[133] = ROUTE762;

let ROUTE763 = browser.currentScene.createNode("ROUTE");
ROUTE763.fromNode = "StandTimer";
ROUTE763.fromField = "fraction_changed";
ROUTE763.toNode = "Stand_head_RotationInterpolator";
ROUTE763.toField = "set_fraction";
browser.currentScene.children[134] = ROUTE763;

let ROUTE764 = browser.currentScene.createNode("ROUTE");
ROUTE764.fromNode = "StandTimer";
ROUTE764.fromField = "fraction_changed";
ROUTE764.toNode = "Stand_neck_RotationInterpolator";
ROUTE764.toField = "set_fraction";
browser.currentScene.children[135] = ROUTE764;

let ROUTE765 = browser.currentScene.createNode("ROUTE");
ROUTE765.fromNode = "StandTimer";
ROUTE765.fromField = "fraction_changed";
ROUTE765.toNode = "Stand_l_eyeball_RotationInterpolator";
ROUTE765.toField = "set_fraction";
browser.currentScene.children[136] = ROUTE765;

let ROUTE766 = browser.currentScene.createNode("ROUTE");
ROUTE766.fromNode = "StandTimer";
ROUTE766.fromField = "fraction_changed";
ROUTE766.toNode = "Stand_r_eyeball_RotationInterpolator";
ROUTE766.toField = "set_fraction";
browser.currentScene.children[137] = ROUTE766;

let ROUTE767 = browser.currentScene.createNode("ROUTE");
ROUTE767.fromNode = "StandTimer";
ROUTE767.fromField = "fraction_changed";
ROUTE767.toNode = "Stand_upper_body_RotationInterpolator";
ROUTE767.toField = "set_fraction";
browser.currentScene.children[138] = ROUTE767;

let ROUTE768 = browser.currentScene.createNode("ROUTE");
ROUTE768.fromNode = "StandTimer";
ROUTE768.fromField = "fraction_changed";
ROUTE768.toNode = "Stand_whole_body_RotationInterpolator";
ROUTE768.toField = "set_fraction";
browser.currentScene.children[139] = ROUTE768;

let ROUTE769 = browser.currentScene.createNode("ROUTE");
ROUTE769.fromNode = "StandTimer";
ROUTE769.fromField = "fraction_changed";
ROUTE769.toNode = "Stand_whole_body_TranslationInterpolator";
ROUTE769.toField = "set_fraction";
browser.currentScene.children[140] = ROUTE769;

let ROUTE770 = browser.currentScene.createNode("ROUTE");
ROUTE770.fromNode = "StandTimer";
ROUTE770.fromField = "fraction_changed";
ROUTE770.toNode = "Stand_l_sternoclavicular_RollInterpolator";
ROUTE770.toField = "set_fraction";
browser.currentScene.children[141] = ROUTE770;

let ROUTE771 = browser.currentScene.createNode("ROUTE");
ROUTE771.fromNode = "StandTimer";
ROUTE771.fromField = "fraction_changed";
ROUTE771.toNode = "Stand_l_acromioclavicular_RollInterpolator";
ROUTE771.toField = "set_fraction";
browser.currentScene.children[142] = ROUTE771;

let ROUTE772 = browser.currentScene.createNode("ROUTE");
ROUTE772.fromNode = "StandTimer";
ROUTE772.fromField = "fraction_changed";
ROUTE772.toNode = "Stand_r_sternoclavicular_RollInterpolator";
ROUTE772.toField = "set_fraction";
browser.currentScene.children[143] = ROUTE772;

let ROUTE773 = browser.currentScene.createNode("ROUTE");
ROUTE773.fromNode = "StandTimer";
ROUTE773.fromField = "fraction_changed";
ROUTE773.toNode = "Stand_r_acromioclavicular_RollInterpolator";
ROUTE773.toField = "set_fraction";
browser.currentScene.children[144] = ROUTE773;

let ROUTE774 = browser.currentScene.createNode("ROUTE");
ROUTE774.fromNode = "StandTimer";
ROUTE774.fromField = "fraction_changed";
ROUTE774.toNode = "Stand_r_metatarsal_PitchInterpolator";
ROUTE774.toField = "set_fraction";
browser.currentScene.children[145] = ROUTE774;

let ROUTE775 = browser.currentScene.createNode("ROUTE");
ROUTE775.fromNode = "StandTimer";
ROUTE775.fromField = "fraction_changed";
ROUTE775.toNode = "Stand_sacroiliac_YawInterpolator";
ROUTE775.toField = "set_fraction";
browser.currentScene.children[146] = ROUTE775;

let ROUTE776 = browser.currentScene.createNode("ROUTE");
ROUTE776.fromNode = "StandTimer";
ROUTE776.fromField = "fraction_changed";
ROUTE776.toNode = "Stand_vl5_YawInterpolator";
ROUTE776.toField = "set_fraction";
browser.currentScene.children[147] = ROUTE776;

let ROUTE777 = browser.currentScene.createNode("ROUTE");
ROUTE777.fromNode = "StandTimer";
ROUTE777.fromField = "fraction_changed";
ROUTE777.toNode = "Stand_vc6_YawInterpolator";
ROUTE777.toField = "set_fraction";
browser.currentScene.children[148] = ROUTE777;

let ROUTE778 = browser.currentScene.createNode("ROUTE");
ROUTE778.fromNode = "StandTimer";
ROUTE778.fromField = "fraction_changed";
ROUTE778.toNode = "Stand_l_thumb1_PitchInterpolator";
ROUTE778.toField = "set_fraction";
browser.currentScene.children[149] = ROUTE778;

let ROUTE779 = browser.currentScene.createNode("ROUTE");
ROUTE779.fromNode = "StandTimer";
ROUTE779.fromField = "fraction_changed";
ROUTE779.toNode = "Stand_r_thumb1_PitchInterpolator";
ROUTE779.toField = "set_fraction";
browser.currentScene.children[150] = ROUTE779;

let ROUTE780 = browser.currentScene.createNode("ROUTE");
ROUTE780.fromNode = "StandTimer";
ROUTE780.fromField = "fraction_changed";
ROUTE780.toNode = "Stand_r_index1_RollInterpolator";
ROUTE780.toField = "set_fraction";
browser.currentScene.children[151] = ROUTE780;

let ROUTE781 = browser.currentScene.createNode("ROUTE");
ROUTE781.fromNode = "StandTimer";
ROUTE781.fromField = "fraction_changed";
ROUTE781.toNode = "Stand_r_index2_RollInterpolator";
ROUTE781.toField = "set_fraction";
browser.currentScene.children[152] = ROUTE781;

let ROUTE782 = browser.currentScene.createNode("ROUTE");
ROUTE782.fromNode = "StandTimer";
ROUTE782.fromField = "fraction_changed";
ROUTE782.toNode = "Stand_r_index3_RollInterpolator";
ROUTE782.toField = "set_fraction";
browser.currentScene.children[153] = ROUTE782;

let ROUTE783 = browser.currentScene.createNode("ROUTE");
ROUTE783.fromNode = "Stand_r_ankle_RotationInterpolator";
ROUTE783.fromField = "value_changed";
ROUTE783.toNode = "boxman_r_ankle";
ROUTE783.toField = "set_rotation";
browser.currentScene.children[154] = ROUTE783;

let ROUTE784 = browser.currentScene.createNode("ROUTE");
ROUTE784.fromNode = "Stand_r_knee_RotationInterpolator";
ROUTE784.fromField = "value_changed";
ROUTE784.toNode = "boxman_r_knee";
ROUTE784.toField = "set_rotation";
browser.currentScene.children[155] = ROUTE784;

let ROUTE785 = browser.currentScene.createNode("ROUTE");
ROUTE785.fromNode = "Stand_r_hip_RotationInterpolator";
ROUTE785.fromField = "value_changed";
ROUTE785.toNode = "boxman_r_hip";
ROUTE785.toField = "set_rotation";
browser.currentScene.children[156] = ROUTE785;

let ROUTE786 = browser.currentScene.createNode("ROUTE");
ROUTE786.fromNode = "Stand_l_ankle_RotationInterpolator";
ROUTE786.fromField = "value_changed";
ROUTE786.toNode = "boxman_l_ankle";
ROUTE786.toField = "set_rotation";
browser.currentScene.children[157] = ROUTE786;

let ROUTE787 = browser.currentScene.createNode("ROUTE");
ROUTE787.fromNode = "Stand_l_knee_RotationInterpolator";
ROUTE787.fromField = "value_changed";
ROUTE787.toNode = "boxman_l_knee";
ROUTE787.toField = "set_rotation";
browser.currentScene.children[158] = ROUTE787;

let ROUTE788 = browser.currentScene.createNode("ROUTE");
ROUTE788.fromNode = "Stand_l_hip_RotationInterpolator";
ROUTE788.fromField = "value_changed";
ROUTE788.toNode = "boxman_l_hip";
ROUTE788.toField = "set_rotation";
browser.currentScene.children[159] = ROUTE788;

let ROUTE789 = browser.currentScene.createNode("ROUTE");
ROUTE789.fromNode = "Stand_r_wrist_RotationInterpolator";
ROUTE789.fromField = "value_changed";
ROUTE789.toNode = "boxman_r_wrist";
ROUTE789.toField = "set_rotation";
browser.currentScene.children[160] = ROUTE789;

let ROUTE790 = browser.currentScene.createNode("ROUTE");
ROUTE790.fromNode = "Stand_r_elbow_RotationInterpolator";
ROUTE790.fromField = "value_changed";
ROUTE790.toNode = "boxman_r_elbow";
ROUTE790.toField = "set_rotation";
browser.currentScene.children[161] = ROUTE790;

let ROUTE791 = browser.currentScene.createNode("ROUTE");
ROUTE791.fromNode = "Stand_r_shoulder_RotationInterpolator";
ROUTE791.fromField = "value_changed";
ROUTE791.toNode = "boxman_r_shoulder";
ROUTE791.toField = "set_rotation";
browser.currentScene.children[162] = ROUTE791;

let ROUTE792 = browser.currentScene.createNode("ROUTE");
ROUTE792.fromNode = "Stand_l_wrist_RotationInterpolator";
ROUTE792.fromField = "value_changed";
ROUTE792.toNode = "boxman_l_wrist";
ROUTE792.toField = "set_rotation";
browser.currentScene.children[163] = ROUTE792;

let ROUTE793 = browser.currentScene.createNode("ROUTE");
ROUTE793.fromNode = "Stand_l_elbow_RotationInterpolator";
ROUTE793.fromField = "value_changed";
ROUTE793.toNode = "boxman_l_elbow";
ROUTE793.toField = "set_rotation";
browser.currentScene.children[164] = ROUTE793;

let ROUTE794 = browser.currentScene.createNode("ROUTE");
ROUTE794.fromNode = "Stand_l_shoulder_RotationInterpolator";
ROUTE794.fromField = "value_changed";
ROUTE794.toNode = "boxman_l_shoulder";
ROUTE794.toField = "set_rotation";
browser.currentScene.children[165] = ROUTE794;

let ROUTE795 = browser.currentScene.createNode("ROUTE");
ROUTE795.fromNode = "Stand_head_RotationInterpolator";
ROUTE795.fromField = "value_changed";
ROUTE795.toNode = "boxman_skullbase";
ROUTE795.toField = "set_rotation";
browser.currentScene.children[166] = ROUTE795;

let ROUTE796 = browser.currentScene.createNode("ROUTE");
ROUTE796.fromNode = "Stand_whole_body_RotationInterpolator";
ROUTE796.fromField = "value_changed";
ROUTE796.toNode = "boxman_humanoid_root";
ROUTE796.toField = "set_rotation";
browser.currentScene.children[167] = ROUTE796;

let ROUTE797 = browser.currentScene.createNode("ROUTE");
ROUTE797.fromNode = "Stand_whole_body_TranslationInterpolator";
ROUTE797.fromField = "value_changed";
ROUTE797.toNode = "boxman_humanoid_root";
ROUTE797.toField = "set_translation";
browser.currentScene.children[168] = ROUTE797;

let ROUTE798 = browser.currentScene.createNode("ROUTE");
ROUTE798.fromNode = "Stand_vl5_YawInterpolator";
ROUTE798.fromField = "value_changed";
ROUTE798.toNode = "boxman_vl5";
ROUTE798.toField = "set_rotation";
browser.currentScene.children[169] = ROUTE798;

let ROUTE799 = browser.currentScene.createNode("ROUTE");
ROUTE799.fromNode = "PitchTimer";
ROUTE799.fromField = "fraction_changed";
ROUTE799.toNode = "Pitches_r_ankle_RotationInterpolator";
ROUTE799.toField = "set_fraction";
browser.currentScene.children[170] = ROUTE799;

let ROUTE800 = browser.currentScene.createNode("ROUTE");
ROUTE800.fromNode = "PitchTimer";
ROUTE800.fromField = "fraction_changed";
ROUTE800.toNode = "Pitches_r_knee_RotationInterpolator";
ROUTE800.toField = "set_fraction";
browser.currentScene.children[171] = ROUTE800;

let ROUTE801 = browser.currentScene.createNode("ROUTE");
ROUTE801.fromNode = "PitchTimer";
ROUTE801.fromField = "fraction_changed";
ROUTE801.toNode = "Pitches_r_hip_RotationInterpolator";
ROUTE801.toField = "set_fraction";
browser.currentScene.children[172] = ROUTE801;

let ROUTE802 = browser.currentScene.createNode("ROUTE");
ROUTE802.fromNode = "PitchTimer";
ROUTE802.fromField = "fraction_changed";
ROUTE802.toNode = "Pitches_l_ankle_RotationInterpolator";
ROUTE802.toField = "set_fraction";
browser.currentScene.children[173] = ROUTE802;

let ROUTE803 = browser.currentScene.createNode("ROUTE");
ROUTE803.fromNode = "PitchTimer";
ROUTE803.fromField = "fraction_changed";
ROUTE803.toNode = "Pitches_l_knee_RotationInterpolator";
ROUTE803.toField = "set_fraction";
browser.currentScene.children[174] = ROUTE803;

let ROUTE804 = browser.currentScene.createNode("ROUTE");
ROUTE804.fromNode = "PitchTimer";
ROUTE804.fromField = "fraction_changed";
ROUTE804.toNode = "Pitches_l_hip_RotationInterpolator";
ROUTE804.toField = "set_fraction";
browser.currentScene.children[175] = ROUTE804;

let ROUTE805 = browser.currentScene.createNode("ROUTE");
ROUTE805.fromNode = "PitchTimer";
ROUTE805.fromField = "fraction_changed";
ROUTE805.toNode = "Pitches_lower_body_RotationInterpolator";
ROUTE805.toField = "set_fraction";
browser.currentScene.children[176] = ROUTE805;

let ROUTE806 = browser.currentScene.createNode("ROUTE");
ROUTE806.fromNode = "PitchTimer";
ROUTE806.fromField = "fraction_changed";
ROUTE806.toNode = "Pitches_r_wrist_RotationInterpolator";
ROUTE806.toField = "set_fraction";
browser.currentScene.children[177] = ROUTE806;

let ROUTE807 = browser.currentScene.createNode("ROUTE");
ROUTE807.fromNode = "PitchTimer";
ROUTE807.fromField = "fraction_changed";
ROUTE807.toNode = "Pitches_r_elbow_RotationInterpolator";
ROUTE807.toField = "set_fraction";
browser.currentScene.children[178] = ROUTE807;

let ROUTE808 = browser.currentScene.createNode("ROUTE");
ROUTE808.fromNode = "PitchTimer";
ROUTE808.fromField = "fraction_changed";
ROUTE808.toNode = "Pitches_r_shoulder_RotationInterpolator";
ROUTE808.toField = "set_fraction";
browser.currentScene.children[179] = ROUTE808;

let ROUTE809 = browser.currentScene.createNode("ROUTE");
ROUTE809.fromNode = "PitchTimer";
ROUTE809.fromField = "fraction_changed";
ROUTE809.toNode = "Pitches_l_wrist_RotationInterpolator";
ROUTE809.toField = "set_fraction";
browser.currentScene.children[180] = ROUTE809;

let ROUTE810 = browser.currentScene.createNode("ROUTE");
ROUTE810.fromNode = "PitchTimer";
ROUTE810.fromField = "fraction_changed";
ROUTE810.toNode = "Pitches_l_elbow_RotationInterpolator";
ROUTE810.toField = "set_fraction";
browser.currentScene.children[181] = ROUTE810;

let ROUTE811 = browser.currentScene.createNode("ROUTE");
ROUTE811.fromNode = "PitchTimer";
ROUTE811.fromField = "fraction_changed";
ROUTE811.toNode = "Pitches_l_shoulder_RotationInterpolator";
ROUTE811.toField = "set_fraction";
browser.currentScene.children[182] = ROUTE811;

let ROUTE812 = browser.currentScene.createNode("ROUTE");
ROUTE812.fromNode = "PitchTimer";
ROUTE812.fromField = "fraction_changed";
ROUTE812.toNode = "Pitches_head_RotationInterpolator";
ROUTE812.toField = "set_fraction";
browser.currentScene.children[183] = ROUTE812;

let ROUTE813 = browser.currentScene.createNode("ROUTE");
ROUTE813.fromNode = "PitchTimer";
ROUTE813.fromField = "fraction_changed";
ROUTE813.toNode = "Pitches_neck_RotationInterpolator";
ROUTE813.toField = "set_fraction";
browser.currentScene.children[184] = ROUTE813;

let ROUTE814 = browser.currentScene.createNode("ROUTE");
ROUTE814.fromNode = "PitchTimer";
ROUTE814.fromField = "fraction_changed";
ROUTE814.toNode = "Pitches_upper_body_RotationInterpolator";
ROUTE814.toField = "set_fraction";
browser.currentScene.children[185] = ROUTE814;

let ROUTE815 = browser.currentScene.createNode("ROUTE");
ROUTE815.fromNode = "PitchTimer";
ROUTE815.fromField = "fraction_changed";
ROUTE815.toNode = "Pitches_whole_body_RotationInterpolator";
ROUTE815.toField = "set_fraction";
browser.currentScene.children[186] = ROUTE815;

let ROUTE816 = browser.currentScene.createNode("ROUTE");
ROUTE816.fromNode = "PitchTimer";
ROUTE816.fromField = "fraction_changed";
ROUTE816.toNode = "Pitches_whole_body_TranslationInterpolator";
ROUTE816.toField = "set_fraction";
browser.currentScene.children[187] = ROUTE816;

let ROUTE817 = browser.currentScene.createNode("ROUTE");
ROUTE817.fromNode = "PitchTimer";
ROUTE817.fromField = "fraction_changed";
ROUTE817.toNode = "Pitch_l_sternoclavicular_RollInterpolator";
ROUTE817.toField = "set_fraction";
browser.currentScene.children[188] = ROUTE817;

let ROUTE818 = browser.currentScene.createNode("ROUTE");
ROUTE818.fromNode = "PitchTimer";
ROUTE818.fromField = "fraction_changed";
ROUTE818.toNode = "Pitch_l_acromioclavicular_RollInterpolator";
ROUTE818.toField = "set_fraction";
browser.currentScene.children[189] = ROUTE818;

let ROUTE819 = browser.currentScene.createNode("ROUTE");
ROUTE819.fromNode = "PitchTimer";
ROUTE819.fromField = "fraction_changed";
ROUTE819.toNode = "Pitch_r_sternoclavicular_RollInterpolator";
ROUTE819.toField = "set_fraction";
browser.currentScene.children[190] = ROUTE819;

let ROUTE820 = browser.currentScene.createNode("ROUTE");
ROUTE820.fromNode = "PitchTimer";
ROUTE820.fromField = "fraction_changed";
ROUTE820.toNode = "Pitch_r_acromioclavicular_RollInterpolator";
ROUTE820.toField = "set_fraction";
browser.currentScene.children[191] = ROUTE820;

let ROUTE821 = browser.currentScene.createNode("ROUTE");
ROUTE821.fromNode = "PitchTimer";
ROUTE821.fromField = "fraction_changed";
ROUTE821.toNode = "Pitch_r_metatarsal_PitchInterpolator";
ROUTE821.toField = "set_fraction";
browser.currentScene.children[192] = ROUTE821;

let ROUTE822 = browser.currentScene.createNode("ROUTE");
ROUTE822.fromNode = "PitchTimer";
ROUTE822.fromField = "fraction_changed";
ROUTE822.toNode = "Pitch_sacroiliac_YawInterpolator";
ROUTE822.toField = "set_fraction";
browser.currentScene.children[193] = ROUTE822;

let ROUTE823 = browser.currentScene.createNode("ROUTE");
ROUTE823.fromNode = "PitchTimer";
ROUTE823.fromField = "fraction_changed";
ROUTE823.toNode = "Pitch_vl5_YawInterpolator";
ROUTE823.toField = "set_fraction";
browser.currentScene.children[194] = ROUTE823;

let ROUTE824 = browser.currentScene.createNode("ROUTE");
ROUTE824.fromNode = "PitchTimer";
ROUTE824.fromField = "fraction_changed";
ROUTE824.toNode = "Pitch_vc6_YawInterpolator";
ROUTE824.toField = "set_fraction";
browser.currentScene.children[195] = ROUTE824;

let ROUTE825 = browser.currentScene.createNode("ROUTE");
ROUTE825.fromNode = "PitchTimer";
ROUTE825.fromField = "fraction_changed";
ROUTE825.toNode = "Pitch_l_thumb1_PitchInterpolator";
ROUTE825.toField = "set_fraction";
browser.currentScene.children[196] = ROUTE825;

let ROUTE826 = browser.currentScene.createNode("ROUTE");
ROUTE826.fromNode = "PitchTimer";
ROUTE826.fromField = "fraction_changed";
ROUTE826.toNode = "Pitch_r_thumb1_PitchInterpolator";
ROUTE826.toField = "set_fraction";
browser.currentScene.children[197] = ROUTE826;

let ROUTE827 = browser.currentScene.createNode("ROUTE");
ROUTE827.fromNode = "Pitches_r_ankle_RotationInterpolator";
ROUTE827.fromField = "value_changed";
ROUTE827.toNode = "boxman_r_ankle";
ROUTE827.toField = "set_rotation";
browser.currentScene.children[198] = ROUTE827;

let ROUTE828 = browser.currentScene.createNode("ROUTE");
ROUTE828.fromNode = "Pitches_r_knee_RotationInterpolator";
ROUTE828.fromField = "value_changed";
ROUTE828.toNode = "boxman_r_knee";
ROUTE828.toField = "set_rotation";
browser.currentScene.children[199] = ROUTE828;

let ROUTE829 = browser.currentScene.createNode("ROUTE");
ROUTE829.fromNode = "Pitches_r_hip_RotationInterpolator";
ROUTE829.fromField = "value_changed";
ROUTE829.toNode = "boxman_r_hip";
ROUTE829.toField = "set_rotation";
browser.currentScene.children[200] = ROUTE829;

let ROUTE830 = browser.currentScene.createNode("ROUTE");
ROUTE830.fromNode = "Pitches_l_ankle_RotationInterpolator";
ROUTE830.fromField = "value_changed";
ROUTE830.toNode = "boxman_l_ankle";
ROUTE830.toField = "set_rotation";
browser.currentScene.children[201] = ROUTE830;

let ROUTE831 = browser.currentScene.createNode("ROUTE");
ROUTE831.fromNode = "Pitches_l_knee_RotationInterpolator";
ROUTE831.fromField = "value_changed";
ROUTE831.toNode = "boxman_l_knee";
ROUTE831.toField = "set_rotation";
browser.currentScene.children[202] = ROUTE831;

let ROUTE832 = browser.currentScene.createNode("ROUTE");
ROUTE832.fromNode = "Pitches_l_hip_RotationInterpolator";
ROUTE832.fromField = "value_changed";
ROUTE832.toNode = "boxman_l_hip";
ROUTE832.toField = "set_rotation";
browser.currentScene.children[203] = ROUTE832;

let ROUTE833 = browser.currentScene.createNode("ROUTE");
ROUTE833.fromNode = "Pitches_r_wrist_RotationInterpolator";
ROUTE833.fromField = "value_changed";
ROUTE833.toNode = "boxman_r_wrist";
ROUTE833.toField = "set_rotation";
browser.currentScene.children[204] = ROUTE833;

let ROUTE834 = browser.currentScene.createNode("ROUTE");
ROUTE834.fromNode = "Pitches_r_elbow_RotationInterpolator";
ROUTE834.fromField = "value_changed";
ROUTE834.toNode = "boxman_r_elbow";
ROUTE834.toField = "set_rotation";
browser.currentScene.children[205] = ROUTE834;

let ROUTE835 = browser.currentScene.createNode("ROUTE");
ROUTE835.fromNode = "Pitches_r_shoulder_RotationInterpolator";
ROUTE835.fromField = "value_changed";
ROUTE835.toNode = "boxman_r_shoulder";
ROUTE835.toField = "set_rotation";
browser.currentScene.children[206] = ROUTE835;

let ROUTE836 = browser.currentScene.createNode("ROUTE");
ROUTE836.fromNode = "Pitches_l_wrist_RotationInterpolator";
ROUTE836.fromField = "value_changed";
ROUTE836.toNode = "boxman_l_wrist";
ROUTE836.toField = "set_rotation";
browser.currentScene.children[207] = ROUTE836;

let ROUTE837 = browser.currentScene.createNode("ROUTE");
ROUTE837.fromNode = "Pitches_l_elbow_RotationInterpolator";
ROUTE837.fromField = "value_changed";
ROUTE837.toNode = "boxman_l_elbow";
ROUTE837.toField = "set_rotation";
browser.currentScene.children[208] = ROUTE837;

let ROUTE838 = browser.currentScene.createNode("ROUTE");
ROUTE838.fromNode = "Pitches_l_shoulder_RotationInterpolator";
ROUTE838.fromField = "value_changed";
ROUTE838.toNode = "boxman_l_shoulder";
ROUTE838.toField = "set_rotation";
browser.currentScene.children[209] = ROUTE838;

let ROUTE839 = browser.currentScene.createNode("ROUTE");
ROUTE839.fromNode = "Pitches_head_RotationInterpolator";
ROUTE839.fromField = "value_changed";
ROUTE839.toNode = "boxman_skullbase";
ROUTE839.toField = "set_rotation";
browser.currentScene.children[210] = ROUTE839;

let ROUTE840 = browser.currentScene.createNode("ROUTE");
ROUTE840.fromNode = "Pitches_whole_body_RotationInterpolator";
ROUTE840.fromField = "value_changed";
ROUTE840.toNode = "boxman_humanoid_root";
ROUTE840.toField = "set_rotation";
browser.currentScene.children[211] = ROUTE840;

let ROUTE841 = browser.currentScene.createNode("ROUTE");
ROUTE841.fromNode = "Pitches_whole_body_TranslationInterpolator";
ROUTE841.fromField = "value_changed";
ROUTE841.toNode = "boxman_humanoid_root";
ROUTE841.toField = "set_translation";
browser.currentScene.children[212] = ROUTE841;

let ROUTE842 = browser.currentScene.createNode("ROUTE");
ROUTE842.fromNode = "Pitch_vl5_YawInterpolator";
ROUTE842.fromField = "value_changed";
ROUTE842.toNode = "boxman_vl5";
ROUTE842.toField = "set_rotation";
browser.currentScene.children[213] = ROUTE842;

let ROUTE843 = browser.currentScene.createNode("ROUTE");
ROUTE843.fromNode = "YawTimer";
ROUTE843.fromField = "fraction_changed";
ROUTE843.toNode = "Yaws_r_ankle_RotationInterpolator";
ROUTE843.toField = "set_fraction";
browser.currentScene.children[214] = ROUTE843;

let ROUTE844 = browser.currentScene.createNode("ROUTE");
ROUTE844.fromNode = "YawTimer";
ROUTE844.fromField = "fraction_changed";
ROUTE844.toNode = "Yaws_r_knee_RotationInterpolator";
ROUTE844.toField = "set_fraction";
browser.currentScene.children[215] = ROUTE844;

let ROUTE845 = browser.currentScene.createNode("ROUTE");
ROUTE845.fromNode = "YawTimer";
ROUTE845.fromField = "fraction_changed";
ROUTE845.toNode = "Yaws_r_hip_RotationInterpolator";
ROUTE845.toField = "set_fraction";
browser.currentScene.children[216] = ROUTE845;

let ROUTE846 = browser.currentScene.createNode("ROUTE");
ROUTE846.fromNode = "YawTimer";
ROUTE846.fromField = "fraction_changed";
ROUTE846.toNode = "Yaws_l_ankle_RotationInterpolator";
ROUTE846.toField = "set_fraction";
browser.currentScene.children[217] = ROUTE846;

let ROUTE847 = browser.currentScene.createNode("ROUTE");
ROUTE847.fromNode = "YawTimer";
ROUTE847.fromField = "fraction_changed";
ROUTE847.toNode = "Yaws_l_knee_RotationInterpolator";
ROUTE847.toField = "set_fraction";
browser.currentScene.children[218] = ROUTE847;

let ROUTE848 = browser.currentScene.createNode("ROUTE");
ROUTE848.fromNode = "YawTimer";
ROUTE848.fromField = "fraction_changed";
ROUTE848.toNode = "Yaws_l_hip_RotationInterpolator";
ROUTE848.toField = "set_fraction";
browser.currentScene.children[219] = ROUTE848;

let ROUTE849 = browser.currentScene.createNode("ROUTE");
ROUTE849.fromNode = "YawTimer";
ROUTE849.fromField = "fraction_changed";
ROUTE849.toNode = "Yaws_lower_body_RotationInterpolator";
ROUTE849.toField = "set_fraction";
browser.currentScene.children[220] = ROUTE849;

let ROUTE850 = browser.currentScene.createNode("ROUTE");
ROUTE850.fromNode = "YawTimer";
ROUTE850.fromField = "fraction_changed";
ROUTE850.toNode = "Yaws_r_wrist_RotationInterpolator";
ROUTE850.toField = "set_fraction";
browser.currentScene.children[221] = ROUTE850;

let ROUTE851 = browser.currentScene.createNode("ROUTE");
ROUTE851.fromNode = "YawTimer";
ROUTE851.fromField = "fraction_changed";
ROUTE851.toNode = "Yaws_r_elbow_RotationInterpolator";
ROUTE851.toField = "set_fraction";
browser.currentScene.children[222] = ROUTE851;

let ROUTE852 = browser.currentScene.createNode("ROUTE");
ROUTE852.fromNode = "YawTimer";
ROUTE852.fromField = "fraction_changed";
ROUTE852.toNode = "Yaws_r_shoulder_RotationInterpolator";
ROUTE852.toField = "set_fraction";
browser.currentScene.children[223] = ROUTE852;

let ROUTE853 = browser.currentScene.createNode("ROUTE");
ROUTE853.fromNode = "YawTimer";
ROUTE853.fromField = "fraction_changed";
ROUTE853.toNode = "Yaws_l_wrist_RotationInterpolator";
ROUTE853.toField = "set_fraction";
browser.currentScene.children[224] = ROUTE853;

let ROUTE854 = browser.currentScene.createNode("ROUTE");
ROUTE854.fromNode = "YawTimer";
ROUTE854.fromField = "fraction_changed";
ROUTE854.toNode = "Yaws_l_elbow_RotationInterpolator";
ROUTE854.toField = "set_fraction";
browser.currentScene.children[225] = ROUTE854;

let ROUTE855 = browser.currentScene.createNode("ROUTE");
ROUTE855.fromNode = "YawTimer";
ROUTE855.fromField = "fraction_changed";
ROUTE855.toNode = "Yaws_l_shoulder_RotationInterpolator";
ROUTE855.toField = "set_fraction";
browser.currentScene.children[226] = ROUTE855;

let ROUTE856 = browser.currentScene.createNode("ROUTE");
ROUTE856.fromNode = "YawTimer";
ROUTE856.fromField = "fraction_changed";
ROUTE856.toNode = "Yaws_head_RotationInterpolator";
ROUTE856.toField = "set_fraction";
browser.currentScene.children[227] = ROUTE856;

let ROUTE857 = browser.currentScene.createNode("ROUTE");
ROUTE857.fromNode = "YawTimer";
ROUTE857.fromField = "fraction_changed";
ROUTE857.toNode = "Yaws_neck_RotationInterpolator";
ROUTE857.toField = "set_fraction";
browser.currentScene.children[228] = ROUTE857;

let ROUTE858 = browser.currentScene.createNode("ROUTE");
ROUTE858.fromNode = "YawTimer";
ROUTE858.fromField = "fraction_changed";
ROUTE858.toNode = "Yaws_upper_body_RotationInterpolator";
ROUTE858.toField = "set_fraction";
browser.currentScene.children[229] = ROUTE858;

let ROUTE859 = browser.currentScene.createNode("ROUTE");
ROUTE859.fromNode = "YawTimer";
ROUTE859.fromField = "fraction_changed";
ROUTE859.toNode = "Yaws_whole_body_RotationInterpolator";
ROUTE859.toField = "set_fraction";
browser.currentScene.children[230] = ROUTE859;

let ROUTE860 = browser.currentScene.createNode("ROUTE");
ROUTE860.fromNode = "YawTimer";
ROUTE860.fromField = "fraction_changed";
ROUTE860.toNode = "Yaws_whole_body_TranslationInterpolator";
ROUTE860.toField = "set_fraction";
browser.currentScene.children[231] = ROUTE860;

let ROUTE861 = browser.currentScene.createNode("ROUTE");
ROUTE861.fromNode = "YawTimer";
ROUTE861.fromField = "fraction_changed";
ROUTE861.toNode = "Yaw_l_sternoclavicular_RollInterpolator";
ROUTE861.toField = "set_fraction";
browser.currentScene.children[232] = ROUTE861;

let ROUTE862 = browser.currentScene.createNode("ROUTE");
ROUTE862.fromNode = "YawTimer";
ROUTE862.fromField = "fraction_changed";
ROUTE862.toNode = "Yaw_l_acromioclavicular_RollInterpolator";
ROUTE862.toField = "set_fraction";
browser.currentScene.children[233] = ROUTE862;

let ROUTE863 = browser.currentScene.createNode("ROUTE");
ROUTE863.fromNode = "YawTimer";
ROUTE863.fromField = "fraction_changed";
ROUTE863.toNode = "Yaw_r_sternoclavicular_RollInterpolator";
ROUTE863.toField = "set_fraction";
browser.currentScene.children[234] = ROUTE863;

let ROUTE864 = browser.currentScene.createNode("ROUTE");
ROUTE864.fromNode = "YawTimer";
ROUTE864.fromField = "fraction_changed";
ROUTE864.toNode = "Yaw_r_acromioclavicular_RollInterpolator";
ROUTE864.toField = "set_fraction";
browser.currentScene.children[235] = ROUTE864;

let ROUTE865 = browser.currentScene.createNode("ROUTE");
ROUTE865.fromNode = "YawTimer";
ROUTE865.fromField = "fraction_changed";
ROUTE865.toNode = "Yaw_r_metatarsal_PitchInterpolator";
ROUTE865.toField = "set_fraction";
browser.currentScene.children[236] = ROUTE865;

let ROUTE866 = browser.currentScene.createNode("ROUTE");
ROUTE866.fromNode = "YawTimer";
ROUTE866.fromField = "fraction_changed";
ROUTE866.toNode = "Yaw_sacroiliac_YawInterpolator";
ROUTE866.toField = "set_fraction";
browser.currentScene.children[237] = ROUTE866;

let ROUTE867 = browser.currentScene.createNode("ROUTE");
ROUTE867.fromNode = "YawTimer";
ROUTE867.fromField = "fraction_changed";
ROUTE867.toNode = "Yaw_vl5_YawInterpolator";
ROUTE867.toField = "set_fraction";
browser.currentScene.children[238] = ROUTE867;

let ROUTE868 = browser.currentScene.createNode("ROUTE");
ROUTE868.fromNode = "YawTimer";
ROUTE868.fromField = "fraction_changed";
ROUTE868.toNode = "Yaw_vc6_YawInterpolator";
ROUTE868.toField = "set_fraction";
browser.currentScene.children[239] = ROUTE868;

let ROUTE869 = browser.currentScene.createNode("ROUTE");
ROUTE869.fromNode = "YawTimer";
ROUTE869.fromField = "fraction_changed";
ROUTE869.toNode = "Yaw_l_thumb1_PitchInterpolator";
ROUTE869.toField = "set_fraction";
browser.currentScene.children[240] = ROUTE869;

let ROUTE870 = browser.currentScene.createNode("ROUTE");
ROUTE870.fromNode = "YawTimer";
ROUTE870.fromField = "fraction_changed";
ROUTE870.toNode = "Yaw_r_thumb1_PitchInterpolator";
ROUTE870.toField = "set_fraction";
browser.currentScene.children[241] = ROUTE870;

let ROUTE871 = browser.currentScene.createNode("ROUTE");
ROUTE871.fromNode = "Yaws_r_ankle_RotationInterpolator";
ROUTE871.fromField = "value_changed";
ROUTE871.toNode = "boxman_r_ankle";
ROUTE871.toField = "set_rotation";
browser.currentScene.children[242] = ROUTE871;

let ROUTE872 = browser.currentScene.createNode("ROUTE");
ROUTE872.fromNode = "Yaws_r_knee_RotationInterpolator";
ROUTE872.fromField = "value_changed";
ROUTE872.toNode = "boxman_r_knee";
ROUTE872.toField = "set_rotation";
browser.currentScene.children[243] = ROUTE872;

let ROUTE873 = browser.currentScene.createNode("ROUTE");
ROUTE873.fromNode = "Yaws_r_hip_RotationInterpolator";
ROUTE873.fromField = "value_changed";
ROUTE873.toNode = "boxman_r_hip";
ROUTE873.toField = "set_rotation";
browser.currentScene.children[244] = ROUTE873;

let ROUTE874 = browser.currentScene.createNode("ROUTE");
ROUTE874.fromNode = "Yaws_l_ankle_RotationInterpolator";
ROUTE874.fromField = "value_changed";
ROUTE874.toNode = "boxman_l_ankle";
ROUTE874.toField = "set_rotation";
browser.currentScene.children[245] = ROUTE874;

let ROUTE875 = browser.currentScene.createNode("ROUTE");
ROUTE875.fromNode = "Yaws_l_knee_RotationInterpolator";
ROUTE875.fromField = "value_changed";
ROUTE875.toNode = "boxman_l_knee";
ROUTE875.toField = "set_rotation";
browser.currentScene.children[246] = ROUTE875;

let ROUTE876 = browser.currentScene.createNode("ROUTE");
ROUTE876.fromNode = "Yaws_l_hip_RotationInterpolator";
ROUTE876.fromField = "value_changed";
ROUTE876.toNode = "boxman_l_hip";
ROUTE876.toField = "set_rotation";
browser.currentScene.children[247] = ROUTE876;

let ROUTE877 = browser.currentScene.createNode("ROUTE");
ROUTE877.fromNode = "Yaws_r_wrist_RotationInterpolator";
ROUTE877.fromField = "value_changed";
ROUTE877.toNode = "boxman_r_wrist";
ROUTE877.toField = "set_rotation";
browser.currentScene.children[248] = ROUTE877;

let ROUTE878 = browser.currentScene.createNode("ROUTE");
ROUTE878.fromNode = "Yaws_r_elbow_RotationInterpolator";
ROUTE878.fromField = "value_changed";
ROUTE878.toNode = "boxman_r_elbow";
ROUTE878.toField = "set_rotation";
browser.currentScene.children[249] = ROUTE878;

let ROUTE879 = browser.currentScene.createNode("ROUTE");
ROUTE879.fromNode = "Yaws_r_shoulder_RotationInterpolator";
ROUTE879.fromField = "value_changed";
ROUTE879.toNode = "boxman_r_shoulder";
ROUTE879.toField = "set_rotation";
browser.currentScene.children[250] = ROUTE879;

let ROUTE880 = browser.currentScene.createNode("ROUTE");
ROUTE880.fromNode = "Yaws_l_wrist_RotationInterpolator";
ROUTE880.fromField = "value_changed";
ROUTE880.toNode = "boxman_l_wrist";
ROUTE880.toField = "set_rotation";
browser.currentScene.children[251] = ROUTE880;

let ROUTE881 = browser.currentScene.createNode("ROUTE");
ROUTE881.fromNode = "Yaws_l_elbow_RotationInterpolator";
ROUTE881.fromField = "value_changed";
ROUTE881.toNode = "boxman_l_elbow";
ROUTE881.toField = "set_rotation";
browser.currentScene.children[252] = ROUTE881;

let ROUTE882 = browser.currentScene.createNode("ROUTE");
ROUTE882.fromNode = "Yaws_l_shoulder_RotationInterpolator";
ROUTE882.fromField = "value_changed";
ROUTE882.toNode = "boxman_l_shoulder";
ROUTE882.toField = "set_rotation";
browser.currentScene.children[253] = ROUTE882;

let ROUTE883 = browser.currentScene.createNode("ROUTE");
ROUTE883.fromNode = "Yaws_head_RotationInterpolator";
ROUTE883.fromField = "value_changed";
ROUTE883.toNode = "boxman_skullbase";
ROUTE883.toField = "set_rotation";
browser.currentScene.children[254] = ROUTE883;

let ROUTE884 = browser.currentScene.createNode("ROUTE");
ROUTE884.fromNode = "Yaws_whole_body_RotationInterpolator";
ROUTE884.fromField = "value_changed";
ROUTE884.toNode = "boxman_humanoid_root";
ROUTE884.toField = "set_rotation";
browser.currentScene.children[255] = ROUTE884;

let ROUTE885 = browser.currentScene.createNode("ROUTE");
ROUTE885.fromNode = "Yaws_whole_body_TranslationInterpolator";
ROUTE885.fromField = "value_changed";
ROUTE885.toNode = "boxman_humanoid_root";
ROUTE885.toField = "set_translation";
browser.currentScene.children[256] = ROUTE885;

let ROUTE886 = browser.currentScene.createNode("ROUTE");
ROUTE886.fromNode = "Yaw_vl5_YawInterpolator";
ROUTE886.fromField = "value_changed";
ROUTE886.toNode = "boxman_vl5";
ROUTE886.toField = "set_rotation";
browser.currentScene.children[257] = ROUTE886;

let ROUTE887 = browser.currentScene.createNode("ROUTE");
ROUTE887.fromNode = "RollTimer";
ROUTE887.fromField = "fraction_changed";
ROUTE887.toNode = "Rolls_r_ankle_RotationInterpolator";
ROUTE887.toField = "set_fraction";
browser.currentScene.children[258] = ROUTE887;

let ROUTE888 = browser.currentScene.createNode("ROUTE");
ROUTE888.fromNode = "RollTimer";
ROUTE888.fromField = "fraction_changed";
ROUTE888.toNode = "Rolls_r_knee_RotationInterpolator";
ROUTE888.toField = "set_fraction";
browser.currentScene.children[259] = ROUTE888;

let ROUTE889 = browser.currentScene.createNode("ROUTE");
ROUTE889.fromNode = "RollTimer";
ROUTE889.fromField = "fraction_changed";
ROUTE889.toNode = "Rolls_r_hip_RotationInterpolator";
ROUTE889.toField = "set_fraction";
browser.currentScene.children[260] = ROUTE889;

let ROUTE890 = browser.currentScene.createNode("ROUTE");
ROUTE890.fromNode = "RollTimer";
ROUTE890.fromField = "fraction_changed";
ROUTE890.toNode = "Rolls_l_ankle_RotationInterpolator";
ROUTE890.toField = "set_fraction";
browser.currentScene.children[261] = ROUTE890;

let ROUTE891 = browser.currentScene.createNode("ROUTE");
ROUTE891.fromNode = "RollTimer";
ROUTE891.fromField = "fraction_changed";
ROUTE891.toNode = "Rolls_l_knee_RotationInterpolator";
ROUTE891.toField = "set_fraction";
browser.currentScene.children[262] = ROUTE891;

let ROUTE892 = browser.currentScene.createNode("ROUTE");
ROUTE892.fromNode = "RollTimer";
ROUTE892.fromField = "fraction_changed";
ROUTE892.toNode = "Rolls_l_hip_RotationInterpolator";
ROUTE892.toField = "set_fraction";
browser.currentScene.children[263] = ROUTE892;

let ROUTE893 = browser.currentScene.createNode("ROUTE");
ROUTE893.fromNode = "RollTimer";
ROUTE893.fromField = "fraction_changed";
ROUTE893.toNode = "Rolls_lower_body_RotationInterpolator";
ROUTE893.toField = "set_fraction";
browser.currentScene.children[264] = ROUTE893;

let ROUTE894 = browser.currentScene.createNode("ROUTE");
ROUTE894.fromNode = "RollTimer";
ROUTE894.fromField = "fraction_changed";
ROUTE894.toNode = "Rolls_r_wrist_RotationInterpolator";
ROUTE894.toField = "set_fraction";
browser.currentScene.children[265] = ROUTE894;

let ROUTE895 = browser.currentScene.createNode("ROUTE");
ROUTE895.fromNode = "RollTimer";
ROUTE895.fromField = "fraction_changed";
ROUTE895.toNode = "Rolls_r_elbow_RotationInterpolator";
ROUTE895.toField = "set_fraction";
browser.currentScene.children[266] = ROUTE895;

let ROUTE896 = browser.currentScene.createNode("ROUTE");
ROUTE896.fromNode = "RollTimer";
ROUTE896.fromField = "fraction_changed";
ROUTE896.toNode = "Rolls_r_shoulder_RotationInterpolator";
ROUTE896.toField = "set_fraction";
browser.currentScene.children[267] = ROUTE896;

let ROUTE897 = browser.currentScene.createNode("ROUTE");
ROUTE897.fromNode = "RollTimer";
ROUTE897.fromField = "fraction_changed";
ROUTE897.toNode = "Rolls_l_wrist_RotationInterpolator";
ROUTE897.toField = "set_fraction";
browser.currentScene.children[268] = ROUTE897;

let ROUTE898 = browser.currentScene.createNode("ROUTE");
ROUTE898.fromNode = "RollTimer";
ROUTE898.fromField = "fraction_changed";
ROUTE898.toNode = "Rolls_l_elbow_RotationInterpolator";
ROUTE898.toField = "set_fraction";
browser.currentScene.children[269] = ROUTE898;

let ROUTE899 = browser.currentScene.createNode("ROUTE");
ROUTE899.fromNode = "RollTimer";
ROUTE899.fromField = "fraction_changed";
ROUTE899.toNode = "Rolls_l_shoulder_RotationInterpolator";
ROUTE899.toField = "set_fraction";
browser.currentScene.children[270] = ROUTE899;

let ROUTE900 = browser.currentScene.createNode("ROUTE");
ROUTE900.fromNode = "RollTimer";
ROUTE900.fromField = "fraction_changed";
ROUTE900.toNode = "Rolls_head_RotationInterpolator";
ROUTE900.toField = "set_fraction";
browser.currentScene.children[271] = ROUTE900;

let ROUTE901 = browser.currentScene.createNode("ROUTE");
ROUTE901.fromNode = "RollTimer";
ROUTE901.fromField = "fraction_changed";
ROUTE901.toNode = "Rolls_neck_RotationInterpolator";
ROUTE901.toField = "set_fraction";
browser.currentScene.children[272] = ROUTE901;

let ROUTE902 = browser.currentScene.createNode("ROUTE");
ROUTE902.fromNode = "RollTimer";
ROUTE902.fromField = "fraction_changed";
ROUTE902.toNode = "Rolls_upper_body_RotationInterpolator";
ROUTE902.toField = "set_fraction";
browser.currentScene.children[273] = ROUTE902;

let ROUTE903 = browser.currentScene.createNode("ROUTE");
ROUTE903.fromNode = "RollTimer";
ROUTE903.fromField = "fraction_changed";
ROUTE903.toNode = "Rolls_whole_body_RotationInterpolator";
ROUTE903.toField = "set_fraction";
browser.currentScene.children[274] = ROUTE903;

let ROUTE904 = browser.currentScene.createNode("ROUTE");
ROUTE904.fromNode = "RollTimer";
ROUTE904.fromField = "fraction_changed";
ROUTE904.toNode = "Rolls_whole_body_TranslationInterpolator";
ROUTE904.toField = "set_fraction";
browser.currentScene.children[275] = ROUTE904;

let ROUTE905 = browser.currentScene.createNode("ROUTE");
ROUTE905.fromNode = "RollTimer";
ROUTE905.fromField = "fraction_changed";
ROUTE905.toNode = "Roll_l_sternoclavicular_RollInterpolator";
ROUTE905.toField = "set_fraction";
browser.currentScene.children[276] = ROUTE905;

let ROUTE906 = browser.currentScene.createNode("ROUTE");
ROUTE906.fromNode = "RollTimer";
ROUTE906.fromField = "fraction_changed";
ROUTE906.toNode = "Roll_l_acromioclavicular_RollInterpolator";
ROUTE906.toField = "set_fraction";
browser.currentScene.children[277] = ROUTE906;

let ROUTE907 = browser.currentScene.createNode("ROUTE");
ROUTE907.fromNode = "RollTimer";
ROUTE907.fromField = "fraction_changed";
ROUTE907.toNode = "Roll_r_sternoclavicular_RollInterpolator";
ROUTE907.toField = "set_fraction";
browser.currentScene.children[278] = ROUTE907;

let ROUTE908 = browser.currentScene.createNode("ROUTE");
ROUTE908.fromNode = "RollTimer";
ROUTE908.fromField = "fraction_changed";
ROUTE908.toNode = "Roll_r_acromioclavicular_RollInterpolator";
ROUTE908.toField = "set_fraction";
browser.currentScene.children[279] = ROUTE908;

let ROUTE909 = browser.currentScene.createNode("ROUTE");
ROUTE909.fromNode = "RollTimer";
ROUTE909.fromField = "fraction_changed";
ROUTE909.toNode = "Roll_r_metatarsal_PitchInterpolator";
ROUTE909.toField = "set_fraction";
browser.currentScene.children[280] = ROUTE909;

let ROUTE910 = browser.currentScene.createNode("ROUTE");
ROUTE910.fromNode = "RollTimer";
ROUTE910.fromField = "fraction_changed";
ROUTE910.toNode = "Roll_sacroiliac_YawInterpolator";
ROUTE910.toField = "set_fraction";
browser.currentScene.children[281] = ROUTE910;

let ROUTE911 = browser.currentScene.createNode("ROUTE");
ROUTE911.fromNode = "RollTimer";
ROUTE911.fromField = "fraction_changed";
ROUTE911.toNode = "Roll_vl5_YawInterpolator";
ROUTE911.toField = "set_fraction";
browser.currentScene.children[282] = ROUTE911;

let ROUTE912 = browser.currentScene.createNode("ROUTE");
ROUTE912.fromNode = "RollTimer";
ROUTE912.fromField = "fraction_changed";
ROUTE912.toNode = "Roll_vc6_YawInterpolator";
ROUTE912.toField = "set_fraction";
browser.currentScene.children[283] = ROUTE912;

let ROUTE913 = browser.currentScene.createNode("ROUTE");
ROUTE913.fromNode = "RollTimer";
ROUTE913.fromField = "fraction_changed";
ROUTE913.toNode = "Roll_l_thumb1_PitchInterpolator";
ROUTE913.toField = "set_fraction";
browser.currentScene.children[284] = ROUTE913;

let ROUTE914 = browser.currentScene.createNode("ROUTE");
ROUTE914.fromNode = "RollTimer";
ROUTE914.fromField = "fraction_changed";
ROUTE914.toNode = "Roll_r_thumb1_PitchInterpolator";
ROUTE914.toField = "set_fraction";
browser.currentScene.children[285] = ROUTE914;

let ROUTE915 = browser.currentScene.createNode("ROUTE");
ROUTE915.fromNode = "Rolls_r_ankle_RotationInterpolator";
ROUTE915.fromField = "value_changed";
ROUTE915.toNode = "boxman_r_ankle";
ROUTE915.toField = "set_rotation";
browser.currentScene.children[286] = ROUTE915;

let ROUTE916 = browser.currentScene.createNode("ROUTE");
ROUTE916.fromNode = "Rolls_r_knee_RotationInterpolator";
ROUTE916.fromField = "value_changed";
ROUTE916.toNode = "boxman_r_knee";
ROUTE916.toField = "set_rotation";
browser.currentScene.children[287] = ROUTE916;

let ROUTE917 = browser.currentScene.createNode("ROUTE");
ROUTE917.fromNode = "Rolls_r_hip_RotationInterpolator";
ROUTE917.fromField = "value_changed";
ROUTE917.toNode = "boxman_r_hip";
ROUTE917.toField = "set_rotation";
browser.currentScene.children[288] = ROUTE917;

let ROUTE918 = browser.currentScene.createNode("ROUTE");
ROUTE918.fromNode = "Rolls_l_ankle_RotationInterpolator";
ROUTE918.fromField = "value_changed";
ROUTE918.toNode = "boxman_l_ankle";
ROUTE918.toField = "set_rotation";
browser.currentScene.children[289] = ROUTE918;

let ROUTE919 = browser.currentScene.createNode("ROUTE");
ROUTE919.fromNode = "Rolls_l_knee_RotationInterpolator";
ROUTE919.fromField = "value_changed";
ROUTE919.toNode = "boxman_l_knee";
ROUTE919.toField = "set_rotation";
browser.currentScene.children[290] = ROUTE919;

let ROUTE920 = browser.currentScene.createNode("ROUTE");
ROUTE920.fromNode = "Rolls_l_hip_RotationInterpolator";
ROUTE920.fromField = "value_changed";
ROUTE920.toNode = "boxman_l_hip";
ROUTE920.toField = "set_rotation";
browser.currentScene.children[291] = ROUTE920;

let ROUTE921 = browser.currentScene.createNode("ROUTE");
ROUTE921.fromNode = "Rolls_r_wrist_RotationInterpolator";
ROUTE921.fromField = "value_changed";
ROUTE921.toNode = "boxman_r_wrist";
ROUTE921.toField = "set_rotation";
browser.currentScene.children[292] = ROUTE921;

let ROUTE922 = browser.currentScene.createNode("ROUTE");
ROUTE922.fromNode = "Rolls_r_elbow_RotationInterpolator";
ROUTE922.fromField = "value_changed";
ROUTE922.toNode = "boxman_r_elbow";
ROUTE922.toField = "set_rotation";
browser.currentScene.children[293] = ROUTE922;

let ROUTE923 = browser.currentScene.createNode("ROUTE");
ROUTE923.fromNode = "Rolls_r_shoulder_RotationInterpolator";
ROUTE923.fromField = "value_changed";
ROUTE923.toNode = "boxman_r_shoulder";
ROUTE923.toField = "set_rotation";
browser.currentScene.children[294] = ROUTE923;

let ROUTE924 = browser.currentScene.createNode("ROUTE");
ROUTE924.fromNode = "Rolls_l_wrist_RotationInterpolator";
ROUTE924.fromField = "value_changed";
ROUTE924.toNode = "boxman_l_wrist";
ROUTE924.toField = "set_rotation";
browser.currentScene.children[295] = ROUTE924;

let ROUTE925 = browser.currentScene.createNode("ROUTE");
ROUTE925.fromNode = "Rolls_l_elbow_RotationInterpolator";
ROUTE925.fromField = "value_changed";
ROUTE925.toNode = "boxman_l_elbow";
ROUTE925.toField = "set_rotation";
browser.currentScene.children[296] = ROUTE925;

let ROUTE926 = browser.currentScene.createNode("ROUTE");
ROUTE926.fromNode = "Rolls_l_shoulder_RotationInterpolator";
ROUTE926.fromField = "value_changed";
ROUTE926.toNode = "boxman_l_shoulder";
ROUTE926.toField = "set_rotation";
browser.currentScene.children[297] = ROUTE926;

let ROUTE927 = browser.currentScene.createNode("ROUTE");
ROUTE927.fromNode = "Rolls_head_RotationInterpolator";
ROUTE927.fromField = "value_changed";
ROUTE927.toNode = "boxman_skullbase";
ROUTE927.toField = "set_rotation";
browser.currentScene.children[298] = ROUTE927;

let ROUTE928 = browser.currentScene.createNode("ROUTE");
ROUTE928.fromNode = "Rolls_whole_body_RotationInterpolator";
ROUTE928.fromField = "value_changed";
ROUTE928.toNode = "boxman_humanoid_root";
ROUTE928.toField = "set_rotation";
browser.currentScene.children[299] = ROUTE928;

let ROUTE929 = browser.currentScene.createNode("ROUTE");
ROUTE929.fromNode = "Rolls_whole_body_TranslationInterpolator";
ROUTE929.fromField = "value_changed";
ROUTE929.toNode = "boxman_humanoid_root";
ROUTE929.toField = "set_translation";
browser.currentScene.children[300] = ROUTE929;

let ROUTE930 = browser.currentScene.createNode("ROUTE");
ROUTE930.fromNode = "Roll_vl5_YawInterpolator";
ROUTE930.fromField = "value_changed";
ROUTE930.toNode = "boxman_vl5";
ROUTE930.toField = "set_rotation";
browser.currentScene.children[301] = ROUTE930;

let ROUTE931 = browser.currentScene.createNode("ROUTE");
ROUTE931.fromNode = "WalkTimer";
ROUTE931.fromField = "fraction_changed";
ROUTE931.toNode = "Walk_r_ankle_RotationInterpolator";
ROUTE931.toField = "set_fraction";
browser.currentScene.children[302] = ROUTE931;

let ROUTE932 = browser.currentScene.createNode("ROUTE");
ROUTE932.fromNode = "WalkTimer";
ROUTE932.fromField = "fraction_changed";
ROUTE932.toNode = "Walk_r_knee_RotationInterpolator";
ROUTE932.toField = "set_fraction";
browser.currentScene.children[303] = ROUTE932;

let ROUTE933 = browser.currentScene.createNode("ROUTE");
ROUTE933.fromNode = "WalkTimer";
ROUTE933.fromField = "fraction_changed";
ROUTE933.toNode = "Walk_r_hip_RotationInterpolator";
ROUTE933.toField = "set_fraction";
browser.currentScene.children[304] = ROUTE933;

let ROUTE934 = browser.currentScene.createNode("ROUTE");
ROUTE934.fromNode = "WalkTimer";
ROUTE934.fromField = "fraction_changed";
ROUTE934.toNode = "Walk_l_ankle_RotationInterpolator";
ROUTE934.toField = "set_fraction";
browser.currentScene.children[305] = ROUTE934;

let ROUTE935 = browser.currentScene.createNode("ROUTE");
ROUTE935.fromNode = "WalkTimer";
ROUTE935.fromField = "fraction_changed";
ROUTE935.toNode = "Walk_l_knee_RotationInterpolator";
ROUTE935.toField = "set_fraction";
browser.currentScene.children[306] = ROUTE935;

let ROUTE936 = browser.currentScene.createNode("ROUTE");
ROUTE936.fromNode = "WalkTimer";
ROUTE936.fromField = "fraction_changed";
ROUTE936.toNode = "Walk_l_hip_RotationInterpolator";
ROUTE936.toField = "set_fraction";
browser.currentScene.children[307] = ROUTE936;

let ROUTE937 = browser.currentScene.createNode("ROUTE");
ROUTE937.fromNode = "WalkTimer";
ROUTE937.fromField = "fraction_changed";
ROUTE937.toNode = "Walk_lower_body_RotationInterpolator";
ROUTE937.toField = "set_fraction";
browser.currentScene.children[308] = ROUTE937;

let ROUTE938 = browser.currentScene.createNode("ROUTE");
ROUTE938.fromNode = "WalkTimer";
ROUTE938.fromField = "fraction_changed";
ROUTE938.toNode = "Walk_r_wrist_RotationInterpolator";
ROUTE938.toField = "set_fraction";
browser.currentScene.children[309] = ROUTE938;

let ROUTE939 = browser.currentScene.createNode("ROUTE");
ROUTE939.fromNode = "WalkTimer";
ROUTE939.fromField = "fraction_changed";
ROUTE939.toNode = "Walk_r_elbow_RotationInterpolator";
ROUTE939.toField = "set_fraction";
browser.currentScene.children[310] = ROUTE939;

let ROUTE940 = browser.currentScene.createNode("ROUTE");
ROUTE940.fromNode = "WalkTimer";
ROUTE940.fromField = "fraction_changed";
ROUTE940.toNode = "Walk_r_shoulder_RotationInterpolator";
ROUTE940.toField = "set_fraction";
browser.currentScene.children[311] = ROUTE940;

let ROUTE941 = browser.currentScene.createNode("ROUTE");
ROUTE941.fromNode = "WalkTimer";
ROUTE941.fromField = "fraction_changed";
ROUTE941.toNode = "Walk_l_wrist_RotationInterpolator";
ROUTE941.toField = "set_fraction";
browser.currentScene.children[312] = ROUTE941;

let ROUTE942 = browser.currentScene.createNode("ROUTE");
ROUTE942.fromNode = "WalkTimer";
ROUTE942.fromField = "fraction_changed";
ROUTE942.toNode = "Walk_l_elbow_RotationInterpolator";
ROUTE942.toField = "set_fraction";
browser.currentScene.children[313] = ROUTE942;

let ROUTE943 = browser.currentScene.createNode("ROUTE");
ROUTE943.fromNode = "WalkTimer";
ROUTE943.fromField = "fraction_changed";
ROUTE943.toNode = "Walk_l_shoulder_RotationInterpolator";
ROUTE943.toField = "set_fraction";
browser.currentScene.children[314] = ROUTE943;

let ROUTE944 = browser.currentScene.createNode("ROUTE");
ROUTE944.fromNode = "WalkTimer";
ROUTE944.fromField = "fraction_changed";
ROUTE944.toNode = "Walk_head_RotationInterpolator";
ROUTE944.toField = "set_fraction";
browser.currentScene.children[315] = ROUTE944;

let ROUTE945 = browser.currentScene.createNode("ROUTE");
ROUTE945.fromNode = "WalkTimer";
ROUTE945.fromField = "fraction_changed";
ROUTE945.toNode = "Walk_neck_RotationInterpolator";
ROUTE945.toField = "set_fraction";
browser.currentScene.children[316] = ROUTE945;

let ROUTE946 = browser.currentScene.createNode("ROUTE");
ROUTE946.fromNode = "WalkTimer";
ROUTE946.fromField = "fraction_changed";
ROUTE946.toNode = "Walk_upper_body_RotationInterpolator";
ROUTE946.toField = "set_fraction";
browser.currentScene.children[317] = ROUTE946;

let ROUTE947 = browser.currentScene.createNode("ROUTE");
ROUTE947.fromNode = "WalkTimer";
ROUTE947.fromField = "fraction_changed";
ROUTE947.toNode = "Walk_whole_body_RotationInterpolator";
ROUTE947.toField = "set_fraction";
browser.currentScene.children[318] = ROUTE947;

let ROUTE948 = browser.currentScene.createNode("ROUTE");
ROUTE948.fromNode = "WalkTimer";
ROUTE948.fromField = "fraction_changed";
ROUTE948.toNode = "Walk_whole_body_TranslationInterpolator";
ROUTE948.toField = "set_fraction";
browser.currentScene.children[319] = ROUTE948;

let ROUTE949 = browser.currentScene.createNode("ROUTE");
ROUTE949.fromNode = "WalkTimer";
ROUTE949.fromField = "fraction_changed";
ROUTE949.toNode = "Walk_l_sternoclavicular_RollInterpolator";
ROUTE949.toField = "set_fraction";
browser.currentScene.children[320] = ROUTE949;

let ROUTE950 = browser.currentScene.createNode("ROUTE");
ROUTE950.fromNode = "WalkTimer";
ROUTE950.fromField = "fraction_changed";
ROUTE950.toNode = "Walk_l_acromioclavicular_RollInterpolator";
ROUTE950.toField = "set_fraction";
browser.currentScene.children[321] = ROUTE950;

let ROUTE951 = browser.currentScene.createNode("ROUTE");
ROUTE951.fromNode = "WalkTimer";
ROUTE951.fromField = "fraction_changed";
ROUTE951.toNode = "Walk_r_sternoclavicular_RollInterpolator";
ROUTE951.toField = "set_fraction";
browser.currentScene.children[322] = ROUTE951;

let ROUTE952 = browser.currentScene.createNode("ROUTE");
ROUTE952.fromNode = "WalkTimer";
ROUTE952.fromField = "fraction_changed";
ROUTE952.toNode = "Walk_r_acromioclavicular_RollInterpolator";
ROUTE952.toField = "set_fraction";
browser.currentScene.children[323] = ROUTE952;

let ROUTE953 = browser.currentScene.createNode("ROUTE");
ROUTE953.fromNode = "WalkTimer";
ROUTE953.fromField = "fraction_changed";
ROUTE953.toNode = "Walk_r_metatarsal_PitchInterpolator";
ROUTE953.toField = "set_fraction";
browser.currentScene.children[324] = ROUTE953;

let ROUTE954 = browser.currentScene.createNode("ROUTE");
ROUTE954.fromNode = "WalkTimer";
ROUTE954.fromField = "fraction_changed";
ROUTE954.toNode = "Walk_sacroiliac_YawInterpolator";
ROUTE954.toField = "set_fraction";
browser.currentScene.children[325] = ROUTE954;

let ROUTE955 = browser.currentScene.createNode("ROUTE");
ROUTE955.fromNode = "WalkTimer";
ROUTE955.fromField = "fraction_changed";
ROUTE955.toNode = "Walk_vl5_YawInterpolator";
ROUTE955.toField = "set_fraction";
browser.currentScene.children[326] = ROUTE955;

let ROUTE956 = browser.currentScene.createNode("ROUTE");
ROUTE956.fromNode = "WalkTimer";
ROUTE956.fromField = "fraction_changed";
ROUTE956.toNode = "Walk_vc6_YawInterpolator";
ROUTE956.toField = "set_fraction";
browser.currentScene.children[327] = ROUTE956;

let ROUTE957 = browser.currentScene.createNode("ROUTE");
ROUTE957.fromNode = "WalkTimer";
ROUTE957.fromField = "fraction_changed";
ROUTE957.toNode = "Walk_l_thumb1_PitchInterpolator";
ROUTE957.toField = "set_fraction";
browser.currentScene.children[328] = ROUTE957;

let ROUTE958 = browser.currentScene.createNode("ROUTE");
ROUTE958.fromNode = "WalkTimer";
ROUTE958.fromField = "fraction_changed";
ROUTE958.toNode = "Walk_r_thumb1_PitchInterpolator";
ROUTE958.toField = "set_fraction";
browser.currentScene.children[329] = ROUTE958;

let ROUTE959 = browser.currentScene.createNode("ROUTE");
ROUTE959.fromNode = "Walk_r_ankle_RotationInterpolator";
ROUTE959.fromField = "value_changed";
ROUTE959.toNode = "boxman_r_ankle";
ROUTE959.toField = "set_rotation";
browser.currentScene.children[330] = ROUTE959;

let ROUTE960 = browser.currentScene.createNode("ROUTE");
ROUTE960.fromNode = "Walk_r_knee_RotationInterpolator";
ROUTE960.fromField = "value_changed";
ROUTE960.toNode = "boxman_r_knee";
ROUTE960.toField = "set_rotation";
browser.currentScene.children[331] = ROUTE960;

let ROUTE961 = browser.currentScene.createNode("ROUTE");
ROUTE961.fromNode = "Walk_r_hip_RotationInterpolator";
ROUTE961.fromField = "value_changed";
ROUTE961.toNode = "boxman_r_hip";
ROUTE961.toField = "set_rotation";
browser.currentScene.children[332] = ROUTE961;

let ROUTE962 = browser.currentScene.createNode("ROUTE");
ROUTE962.fromNode = "Walk_l_ankle_RotationInterpolator";
ROUTE962.fromField = "value_changed";
ROUTE962.toNode = "boxman_l_ankle";
ROUTE962.toField = "set_rotation";
browser.currentScene.children[333] = ROUTE962;

let ROUTE963 = browser.currentScene.createNode("ROUTE");
ROUTE963.fromNode = "Walk_l_knee_RotationInterpolator";
ROUTE963.fromField = "value_changed";
ROUTE963.toNode = "boxman_l_knee";
ROUTE963.toField = "set_rotation";
browser.currentScene.children[334] = ROUTE963;

let ROUTE964 = browser.currentScene.createNode("ROUTE");
ROUTE964.fromNode = "Walk_l_hip_RotationInterpolator";
ROUTE964.fromField = "value_changed";
ROUTE964.toNode = "boxman_l_hip";
ROUTE964.toField = "set_rotation";
browser.currentScene.children[335] = ROUTE964;

let ROUTE965 = browser.currentScene.createNode("ROUTE");
ROUTE965.fromNode = "Walk_r_wrist_RotationInterpolator";
ROUTE965.fromField = "value_changed";
ROUTE965.toNode = "boxman_r_wrist";
ROUTE965.toField = "set_rotation";
browser.currentScene.children[336] = ROUTE965;

let ROUTE966 = browser.currentScene.createNode("ROUTE");
ROUTE966.fromNode = "Walk_r_elbow_RotationInterpolator";
ROUTE966.fromField = "value_changed";
ROUTE966.toNode = "boxman_r_elbow";
ROUTE966.toField = "set_rotation";
browser.currentScene.children[337] = ROUTE966;

let ROUTE967 = browser.currentScene.createNode("ROUTE");
ROUTE967.fromNode = "Walk_r_shoulder_RotationInterpolator";
ROUTE967.fromField = "value_changed";
ROUTE967.toNode = "boxman_r_shoulder";
ROUTE967.toField = "set_rotation";
browser.currentScene.children[338] = ROUTE967;

let ROUTE968 = browser.currentScene.createNode("ROUTE");
ROUTE968.fromNode = "Walk_l_wrist_RotationInterpolator";
ROUTE968.fromField = "value_changed";
ROUTE968.toNode = "boxman_l_wrist";
ROUTE968.toField = "set_rotation";
browser.currentScene.children[339] = ROUTE968;

let ROUTE969 = browser.currentScene.createNode("ROUTE");
ROUTE969.fromNode = "Walk_l_elbow_RotationInterpolator";
ROUTE969.fromField = "value_changed";
ROUTE969.toNode = "boxman_l_elbow";
ROUTE969.toField = "set_rotation";
browser.currentScene.children[340] = ROUTE969;

let ROUTE970 = browser.currentScene.createNode("ROUTE");
ROUTE970.fromNode = "Walk_l_shoulder_RotationInterpolator";
ROUTE970.fromField = "value_changed";
ROUTE970.toNode = "boxman_l_shoulder";
ROUTE970.toField = "set_rotation";
browser.currentScene.children[341] = ROUTE970;

let ROUTE971 = browser.currentScene.createNode("ROUTE");
ROUTE971.fromNode = "Walk_head_RotationInterpolator";
ROUTE971.fromField = "value_changed";
ROUTE971.toNode = "boxman_skullbase";
ROUTE971.toField = "set_rotation";
browser.currentScene.children[342] = ROUTE971;

let ROUTE972 = browser.currentScene.createNode("ROUTE");
ROUTE972.fromNode = "Walk_whole_body_RotationInterpolator";
ROUTE972.fromField = "value_changed";
ROUTE972.toNode = "boxman_humanoid_root";
ROUTE972.toField = "set_rotation";
browser.currentScene.children[343] = ROUTE972;

let ROUTE973 = browser.currentScene.createNode("ROUTE");
ROUTE973.fromNode = "Walk_whole_body_TranslationInterpolator";
ROUTE973.fromField = "value_changed";
ROUTE973.toNode = "boxman_humanoid_root";
ROUTE973.toField = "set_translation";
browser.currentScene.children[344] = ROUTE973;

let ROUTE974 = browser.currentScene.createNode("ROUTE");
ROUTE974.fromNode = "Walk_vl5_YawInterpolator";
ROUTE974.fromField = "value_changed";
ROUTE974.toNode = "boxman_vl5";
ROUTE974.toField = "set_rotation";
browser.currentScene.children[345] = ROUTE974;

let ROUTE975 = browser.currentScene.createNode("ROUTE");
ROUTE975.fromNode = "RunTimer";
ROUTE975.fromField = "fraction_changed";
ROUTE975.toNode = "Run_r_ankle_RotationInterpolator_Run";
ROUTE975.toField = "set_fraction";
browser.currentScene.children[346] = ROUTE975;

let ROUTE976 = browser.currentScene.createNode("ROUTE");
ROUTE976.fromNode = "RunTimer";
ROUTE976.fromField = "fraction_changed";
ROUTE976.toNode = "Run_r_knee_RotationInterpolator_Run";
ROUTE976.toField = "set_fraction";
browser.currentScene.children[347] = ROUTE976;

let ROUTE977 = browser.currentScene.createNode("ROUTE");
ROUTE977.fromNode = "RunTimer";
ROUTE977.fromField = "fraction_changed";
ROUTE977.toNode = "Run_r_hip_RotationInterpolator_Run";
ROUTE977.toField = "set_fraction";
browser.currentScene.children[348] = ROUTE977;

let ROUTE978 = browser.currentScene.createNode("ROUTE");
ROUTE978.fromNode = "RunTimer";
ROUTE978.fromField = "fraction_changed";
ROUTE978.toNode = "Run_l_ankle_RotationInterpolator_Run";
ROUTE978.toField = "set_fraction";
browser.currentScene.children[349] = ROUTE978;

let ROUTE979 = browser.currentScene.createNode("ROUTE");
ROUTE979.fromNode = "RunTimer";
ROUTE979.fromField = "fraction_changed";
ROUTE979.toNode = "Run_l_knee_RotationInterpolator_Run";
ROUTE979.toField = "set_fraction";
browser.currentScene.children[350] = ROUTE979;

let ROUTE980 = browser.currentScene.createNode("ROUTE");
ROUTE980.fromNode = "RunTimer";
ROUTE980.fromField = "fraction_changed";
ROUTE980.toNode = "Run_l_hip_RotationInterpolator_Run";
ROUTE980.toField = "set_fraction";
browser.currentScene.children[351] = ROUTE980;

let ROUTE981 = browser.currentScene.createNode("ROUTE");
ROUTE981.fromNode = "RunTimer";
ROUTE981.fromField = "fraction_changed";
ROUTE981.toNode = "Run_lower_body_RotationInterpolator_Run";
ROUTE981.toField = "set_fraction";
browser.currentScene.children[352] = ROUTE981;

let ROUTE982 = browser.currentScene.createNode("ROUTE");
ROUTE982.fromNode = "RunTimer";
ROUTE982.fromField = "fraction_changed";
ROUTE982.toNode = "Run_r_wrist_RotationInterpolator_Run";
ROUTE982.toField = "set_fraction";
browser.currentScene.children[353] = ROUTE982;

let ROUTE983 = browser.currentScene.createNode("ROUTE");
ROUTE983.fromNode = "RunTimer";
ROUTE983.fromField = "fraction_changed";
ROUTE983.toNode = "Run_r_elbow_RotationInterpolator_Run";
ROUTE983.toField = "set_fraction";
browser.currentScene.children[354] = ROUTE983;

let ROUTE984 = browser.currentScene.createNode("ROUTE");
ROUTE984.fromNode = "RunTimer";
ROUTE984.fromField = "fraction_changed";
ROUTE984.toNode = "Run_r_shoulder_RotationInterpolator_Run";
ROUTE984.toField = "set_fraction";
browser.currentScene.children[355] = ROUTE984;

let ROUTE985 = browser.currentScene.createNode("ROUTE");
ROUTE985.fromNode = "RunTimer";
ROUTE985.fromField = "fraction_changed";
ROUTE985.toNode = "Run_l_wrist_RotationInterpolator_Run";
ROUTE985.toField = "set_fraction";
browser.currentScene.children[356] = ROUTE985;

let ROUTE986 = browser.currentScene.createNode("ROUTE");
ROUTE986.fromNode = "RunTimer";
ROUTE986.fromField = "fraction_changed";
ROUTE986.toNode = "Run_l_elbow_RotationInterpolator_Run";
ROUTE986.toField = "set_fraction";
browser.currentScene.children[357] = ROUTE986;

let ROUTE987 = browser.currentScene.createNode("ROUTE");
ROUTE987.fromNode = "RunTimer";
ROUTE987.fromField = "fraction_changed";
ROUTE987.toNode = "Run_l_shoulder_RotationInterpolator_Run";
ROUTE987.toField = "set_fraction";
browser.currentScene.children[358] = ROUTE987;

let ROUTE988 = browser.currentScene.createNode("ROUTE");
ROUTE988.fromNode = "RunTimer";
ROUTE988.fromField = "fraction_changed";
ROUTE988.toNode = "Run_head_RotationInterpolator_Run";
ROUTE988.toField = "set_fraction";
browser.currentScene.children[359] = ROUTE988;

let ROUTE989 = browser.currentScene.createNode("ROUTE");
ROUTE989.fromNode = "RunTimer";
ROUTE989.fromField = "fraction_changed";
ROUTE989.toNode = "Run_neck_RotationInterpolator_Run";
ROUTE989.toField = "set_fraction";
browser.currentScene.children[360] = ROUTE989;

let ROUTE990 = browser.currentScene.createNode("ROUTE");
ROUTE990.fromNode = "RunTimer";
ROUTE990.fromField = "fraction_changed";
ROUTE990.toNode = "Run_upper_body_RotationInterpolator_Run";
ROUTE990.toField = "set_fraction";
browser.currentScene.children[361] = ROUTE990;

let ROUTE991 = browser.currentScene.createNode("ROUTE");
ROUTE991.fromNode = "RunTimer";
ROUTE991.fromField = "fraction_changed";
ROUTE991.toNode = "Run_whole_body_RotationInterpolator_Run";
ROUTE991.toField = "set_fraction";
browser.currentScene.children[362] = ROUTE991;

let ROUTE992 = browser.currentScene.createNode("ROUTE");
ROUTE992.fromNode = "RunTimer";
ROUTE992.fromField = "fraction_changed";
ROUTE992.toNode = "Run_whole_body_TranslationInterpolator_Run";
ROUTE992.toField = "set_fraction";
browser.currentScene.children[363] = ROUTE992;

let ROUTE993 = browser.currentScene.createNode("ROUTE");
ROUTE993.fromNode = "RunTimer";
ROUTE993.fromField = "fraction_changed";
ROUTE993.toNode = "Run_l_sternoclavicular_RollInterpolator";
ROUTE993.toField = "set_fraction";
browser.currentScene.children[364] = ROUTE993;

let ROUTE994 = browser.currentScene.createNode("ROUTE");
ROUTE994.fromNode = "RunTimer";
ROUTE994.fromField = "fraction_changed";
ROUTE994.toNode = "Run_l_acromioclavicular_RollInterpolator";
ROUTE994.toField = "set_fraction";
browser.currentScene.children[365] = ROUTE994;

let ROUTE995 = browser.currentScene.createNode("ROUTE");
ROUTE995.fromNode = "RunTimer";
ROUTE995.fromField = "fraction_changed";
ROUTE995.toNode = "Run_r_sternoclavicular_RollInterpolator";
ROUTE995.toField = "set_fraction";
browser.currentScene.children[366] = ROUTE995;

let ROUTE996 = browser.currentScene.createNode("ROUTE");
ROUTE996.fromNode = "RunTimer";
ROUTE996.fromField = "fraction_changed";
ROUTE996.toNode = "Run_r_acromioclavicular_RollInterpolator";
ROUTE996.toField = "set_fraction";
browser.currentScene.children[367] = ROUTE996;

let ROUTE997 = browser.currentScene.createNode("ROUTE");
ROUTE997.fromNode = "RunTimer";
ROUTE997.fromField = "fraction_changed";
ROUTE997.toNode = "Run_r_metatarsal_PitchInterpolator";
ROUTE997.toField = "set_fraction";
browser.currentScene.children[368] = ROUTE997;

let ROUTE998 = browser.currentScene.createNode("ROUTE");
ROUTE998.fromNode = "RunTimer";
ROUTE998.fromField = "fraction_changed";
ROUTE998.toNode = "Run_sacroiliac_YawInterpolator";
ROUTE998.toField = "set_fraction";
browser.currentScene.children[369] = ROUTE998;

let ROUTE999 = browser.currentScene.createNode("ROUTE");
ROUTE999.fromNode = "RunTimer";
ROUTE999.fromField = "fraction_changed";
ROUTE999.toNode = "Run_vl5_YawInterpolator";
ROUTE999.toField = "set_fraction";
browser.currentScene.children[370] = ROUTE999;

let ROUTE1000 = browser.currentScene.createNode("ROUTE");
ROUTE1000.fromNode = "RunTimer";
ROUTE1000.fromField = "fraction_changed";
ROUTE1000.toNode = "Run_vc6_YawInterpolator";
ROUTE1000.toField = "set_fraction";
browser.currentScene.children[371] = ROUTE1000;

let ROUTE1001 = browser.currentScene.createNode("ROUTE");
ROUTE1001.fromNode = "RunTimer";
ROUTE1001.fromField = "fraction_changed";
ROUTE1001.toNode = "Run_l_thumb1_PitchInterpolator";
ROUTE1001.toField = "set_fraction";
browser.currentScene.children[372] = ROUTE1001;

let ROUTE1002 = browser.currentScene.createNode("ROUTE");
ROUTE1002.fromNode = "RunTimer";
ROUTE1002.fromField = "fraction_changed";
ROUTE1002.toNode = "Run_r_thumb1_PitchInterpolator";
ROUTE1002.toField = "set_fraction";
browser.currentScene.children[373] = ROUTE1002;

let ROUTE1003 = browser.currentScene.createNode("ROUTE");
ROUTE1003.fromNode = "Run_r_ankle_RotationInterpolator_Run";
ROUTE1003.fromField = "value_changed";
ROUTE1003.toNode = "boxman_r_ankle";
ROUTE1003.toField = "set_rotation";
browser.currentScene.children[374] = ROUTE1003;

let ROUTE1004 = browser.currentScene.createNode("ROUTE");
ROUTE1004.fromNode = "Run_r_knee_RotationInterpolator_Run";
ROUTE1004.fromField = "value_changed";
ROUTE1004.toNode = "boxman_r_knee";
ROUTE1004.toField = "set_rotation";
browser.currentScene.children[375] = ROUTE1004;

let ROUTE1005 = browser.currentScene.createNode("ROUTE");
ROUTE1005.fromNode = "Run_r_hip_RotationInterpolator_Run";
ROUTE1005.fromField = "value_changed";
ROUTE1005.toNode = "boxman_r_hip";
ROUTE1005.toField = "set_rotation";
browser.currentScene.children[376] = ROUTE1005;

let ROUTE1006 = browser.currentScene.createNode("ROUTE");
ROUTE1006.fromNode = "Run_l_ankle_RotationInterpolator_Run";
ROUTE1006.fromField = "value_changed";
ROUTE1006.toNode = "boxman_l_ankle";
ROUTE1006.toField = "set_rotation";
browser.currentScene.children[377] = ROUTE1006;

let ROUTE1007 = browser.currentScene.createNode("ROUTE");
ROUTE1007.fromNode = "Run_l_knee_RotationInterpolator_Run";
ROUTE1007.fromField = "value_changed";
ROUTE1007.toNode = "boxman_l_knee";
ROUTE1007.toField = "set_rotation";
browser.currentScene.children[378] = ROUTE1007;

let ROUTE1008 = browser.currentScene.createNode("ROUTE");
ROUTE1008.fromNode = "Run_l_hip_RotationInterpolator_Run";
ROUTE1008.fromField = "value_changed";
ROUTE1008.toNode = "boxman_l_hip";
ROUTE1008.toField = "set_rotation";
browser.currentScene.children[379] = ROUTE1008;

let ROUTE1009 = browser.currentScene.createNode("ROUTE");
ROUTE1009.fromNode = "Run_r_wrist_RotationInterpolator_Run";
ROUTE1009.fromField = "value_changed";
ROUTE1009.toNode = "boxman_r_wrist";
ROUTE1009.toField = "set_rotation";
browser.currentScene.children[380] = ROUTE1009;

let ROUTE1010 = browser.currentScene.createNode("ROUTE");
ROUTE1010.fromNode = "Run_r_elbow_RotationInterpolator_Run";
ROUTE1010.fromField = "value_changed";
ROUTE1010.toNode = "boxman_r_elbow";
ROUTE1010.toField = "set_rotation";
browser.currentScene.children[381] = ROUTE1010;

let ROUTE1011 = browser.currentScene.createNode("ROUTE");
ROUTE1011.fromNode = "Run_r_shoulder_RotationInterpolator_Run";
ROUTE1011.fromField = "value_changed";
ROUTE1011.toNode = "boxman_r_shoulder";
ROUTE1011.toField = "set_rotation";
browser.currentScene.children[382] = ROUTE1011;

let ROUTE1012 = browser.currentScene.createNode("ROUTE");
ROUTE1012.fromNode = "Run_l_wrist_RotationInterpolator_Run";
ROUTE1012.fromField = "value_changed";
ROUTE1012.toNode = "boxman_l_wrist";
ROUTE1012.toField = "set_rotation";
browser.currentScene.children[383] = ROUTE1012;

let ROUTE1013 = browser.currentScene.createNode("ROUTE");
ROUTE1013.fromNode = "Run_l_elbow_RotationInterpolator_Run";
ROUTE1013.fromField = "value_changed";
ROUTE1013.toNode = "boxman_l_elbow";
ROUTE1013.toField = "set_rotation";
browser.currentScene.children[384] = ROUTE1013;

let ROUTE1014 = browser.currentScene.createNode("ROUTE");
ROUTE1014.fromNode = "Run_l_shoulder_RotationInterpolator_Run";
ROUTE1014.fromField = "value_changed";
ROUTE1014.toNode = "boxman_l_shoulder";
ROUTE1014.toField = "set_rotation";
browser.currentScene.children[385] = ROUTE1014;

let ROUTE1015 = browser.currentScene.createNode("ROUTE");
ROUTE1015.fromNode = "Run_head_RotationInterpolator_Run";
ROUTE1015.fromField = "value_changed";
ROUTE1015.toNode = "boxman_skullbase";
ROUTE1015.toField = "set_rotation";
browser.currentScene.children[386] = ROUTE1015;

let ROUTE1016 = browser.currentScene.createNode("ROUTE");
ROUTE1016.fromNode = "Run_whole_body_RotationInterpolator_Run";
ROUTE1016.fromField = "value_changed";
ROUTE1016.toNode = "boxman_humanoid_root";
ROUTE1016.toField = "set_rotation";
browser.currentScene.children[387] = ROUTE1016;

let ROUTE1017 = browser.currentScene.createNode("ROUTE");
ROUTE1017.fromNode = "Run_whole_body_TranslationInterpolator_Run";
ROUTE1017.fromField = "value_changed";
ROUTE1017.toNode = "boxman_humanoid_root";
ROUTE1017.toField = "set_translation";
browser.currentScene.children[388] = ROUTE1017;

let ROUTE1018 = browser.currentScene.createNode("ROUTE");
ROUTE1018.fromNode = "Run_vl5_YawInterpolator";
ROUTE1018.fromField = "value_changed";
ROUTE1018.toNode = "boxman_vl5";
ROUTE1018.toField = "set_rotation";
browser.currentScene.children[389] = ROUTE1018;

let ROUTE1019 = browser.currentScene.createNode("ROUTE");
ROUTE1019.fromNode = "JumpTimer";
ROUTE1019.fromField = "fraction_changed";
ROUTE1019.toNode = "Jump_r_ankle_RotationInterpolator";
ROUTE1019.toField = "set_fraction";
browser.currentScene.children[390] = ROUTE1019;

let ROUTE1020 = browser.currentScene.createNode("ROUTE");
ROUTE1020.fromNode = "JumpTimer";
ROUTE1020.fromField = "fraction_changed";
ROUTE1020.toNode = "Jump_r_knee_RotationInterpolator";
ROUTE1020.toField = "set_fraction";
browser.currentScene.children[391] = ROUTE1020;

let ROUTE1021 = browser.currentScene.createNode("ROUTE");
ROUTE1021.fromNode = "JumpTimer";
ROUTE1021.fromField = "fraction_changed";
ROUTE1021.toNode = "Jump_r_hip_RotationInterpolator";
ROUTE1021.toField = "set_fraction";
browser.currentScene.children[392] = ROUTE1021;

let ROUTE1022 = browser.currentScene.createNode("ROUTE");
ROUTE1022.fromNode = "JumpTimer";
ROUTE1022.fromField = "fraction_changed";
ROUTE1022.toNode = "Jump_l_ankle_RotationInterpolator";
ROUTE1022.toField = "set_fraction";
browser.currentScene.children[393] = ROUTE1022;

let ROUTE1023 = browser.currentScene.createNode("ROUTE");
ROUTE1023.fromNode = "JumpTimer";
ROUTE1023.fromField = "fraction_changed";
ROUTE1023.toNode = "Jump_l_knee_RotationInterpolator";
ROUTE1023.toField = "set_fraction";
browser.currentScene.children[394] = ROUTE1023;

let ROUTE1024 = browser.currentScene.createNode("ROUTE");
ROUTE1024.fromNode = "JumpTimer";
ROUTE1024.fromField = "fraction_changed";
ROUTE1024.toNode = "Jump_l_hip_RotationInterpolator";
ROUTE1024.toField = "set_fraction";
browser.currentScene.children[395] = ROUTE1024;

let ROUTE1025 = browser.currentScene.createNode("ROUTE");
ROUTE1025.fromNode = "JumpTimer";
ROUTE1025.fromField = "fraction_changed";
ROUTE1025.toNode = "Jump_lower_body_RotationInterpolator";
ROUTE1025.toField = "set_fraction";
browser.currentScene.children[396] = ROUTE1025;

let ROUTE1026 = browser.currentScene.createNode("ROUTE");
ROUTE1026.fromNode = "JumpTimer";
ROUTE1026.fromField = "fraction_changed";
ROUTE1026.toNode = "Jump_r_wrist_RotationInterpolator";
ROUTE1026.toField = "set_fraction";
browser.currentScene.children[397] = ROUTE1026;

let ROUTE1027 = browser.currentScene.createNode("ROUTE");
ROUTE1027.fromNode = "JumpTimer";
ROUTE1027.fromField = "fraction_changed";
ROUTE1027.toNode = "Jump_r_elbow_RotationInterpolator";
ROUTE1027.toField = "set_fraction";
browser.currentScene.children[398] = ROUTE1027;

let ROUTE1028 = browser.currentScene.createNode("ROUTE");
ROUTE1028.fromNode = "JumpTimer";
ROUTE1028.fromField = "fraction_changed";
ROUTE1028.toNode = "Jump_r_shoulder_RotationInterpolator";
ROUTE1028.toField = "set_fraction";
browser.currentScene.children[399] = ROUTE1028;

let ROUTE1029 = browser.currentScene.createNode("ROUTE");
ROUTE1029.fromNode = "JumpTimer";
ROUTE1029.fromField = "fraction_changed";
ROUTE1029.toNode = "Jump_l_wrist_RotationInterpolator";
ROUTE1029.toField = "set_fraction";
browser.currentScene.children[400] = ROUTE1029;

let ROUTE1030 = browser.currentScene.createNode("ROUTE");
ROUTE1030.fromNode = "JumpTimer";
ROUTE1030.fromField = "fraction_changed";
ROUTE1030.toNode = "Jump_l_elbow_RotationInterpolator";
ROUTE1030.toField = "set_fraction";
browser.currentScene.children[401] = ROUTE1030;

let ROUTE1031 = browser.currentScene.createNode("ROUTE");
ROUTE1031.fromNode = "JumpTimer";
ROUTE1031.fromField = "fraction_changed";
ROUTE1031.toNode = "Jump_l_shoulder_RotationInterpolator";
ROUTE1031.toField = "set_fraction";
browser.currentScene.children[402] = ROUTE1031;

let ROUTE1032 = browser.currentScene.createNode("ROUTE");
ROUTE1032.fromNode = "JumpTimer";
ROUTE1032.fromField = "fraction_changed";
ROUTE1032.toNode = "Jump_head_RotationInterpolator";
ROUTE1032.toField = "set_fraction";
browser.currentScene.children[403] = ROUTE1032;

let ROUTE1033 = browser.currentScene.createNode("ROUTE");
ROUTE1033.fromNode = "JumpTimer";
ROUTE1033.fromField = "fraction_changed";
ROUTE1033.toNode = "Jump_neck_RotationInterpolator";
ROUTE1033.toField = "set_fraction";
browser.currentScene.children[404] = ROUTE1033;

let ROUTE1034 = browser.currentScene.createNode("ROUTE");
ROUTE1034.fromNode = "JumpTimer";
ROUTE1034.fromField = "fraction_changed";
ROUTE1034.toNode = "Jump_upper_body_RotationInterpolator";
ROUTE1034.toField = "set_fraction";
browser.currentScene.children[405] = ROUTE1034;

let ROUTE1035 = browser.currentScene.createNode("ROUTE");
ROUTE1035.fromNode = "JumpTimer";
ROUTE1035.fromField = "fraction_changed";
ROUTE1035.toNode = "Jump_whole_body_RotationInterpolator";
ROUTE1035.toField = "set_fraction";
browser.currentScene.children[406] = ROUTE1035;

let ROUTE1036 = browser.currentScene.createNode("ROUTE");
ROUTE1036.fromNode = "JumpTimer";
ROUTE1036.fromField = "fraction_changed";
ROUTE1036.toNode = "Jump_whole_body_TranslationInterpolator";
ROUTE1036.toField = "set_fraction";
browser.currentScene.children[407] = ROUTE1036;

let ROUTE1037 = browser.currentScene.createNode("ROUTE");
ROUTE1037.fromNode = "JumpTimer";
ROUTE1037.fromField = "fraction_changed";
ROUTE1037.toNode = "Jump_l_sternoclavicular_RollInterpolator";
ROUTE1037.toField = "set_fraction";
browser.currentScene.children[408] = ROUTE1037;

let ROUTE1038 = browser.currentScene.createNode("ROUTE");
ROUTE1038.fromNode = "JumpTimer";
ROUTE1038.fromField = "fraction_changed";
ROUTE1038.toNode = "Jump_l_acromioclavicular_RollInterpolator";
ROUTE1038.toField = "set_fraction";
browser.currentScene.children[409] = ROUTE1038;

let ROUTE1039 = browser.currentScene.createNode("ROUTE");
ROUTE1039.fromNode = "JumpTimer";
ROUTE1039.fromField = "fraction_changed";
ROUTE1039.toNode = "Jump_r_sternoclavicular_RollInterpolator";
ROUTE1039.toField = "set_fraction";
browser.currentScene.children[410] = ROUTE1039;

let ROUTE1040 = browser.currentScene.createNode("ROUTE");
ROUTE1040.fromNode = "JumpTimer";
ROUTE1040.fromField = "fraction_changed";
ROUTE1040.toNode = "Jump_r_acromioclavicular_RollInterpolator";
ROUTE1040.toField = "set_fraction";
browser.currentScene.children[411] = ROUTE1040;

let ROUTE1041 = browser.currentScene.createNode("ROUTE");
ROUTE1041.fromNode = "JumpTimer";
ROUTE1041.fromField = "fraction_changed";
ROUTE1041.toNode = "Jump_r_metatarsal_PitchInterpolator";
ROUTE1041.toField = "set_fraction";
browser.currentScene.children[412] = ROUTE1041;

let ROUTE1042 = browser.currentScene.createNode("ROUTE");
ROUTE1042.fromNode = "JumpTimer";
ROUTE1042.fromField = "fraction_changed";
ROUTE1042.toNode = "Jump_sacroiliac_YawInterpolator";
ROUTE1042.toField = "set_fraction";
browser.currentScene.children[413] = ROUTE1042;

let ROUTE1043 = browser.currentScene.createNode("ROUTE");
ROUTE1043.fromNode = "JumpTimer";
ROUTE1043.fromField = "fraction_changed";
ROUTE1043.toNode = "Jump_vl5_YawInterpolator";
ROUTE1043.toField = "set_fraction";
browser.currentScene.children[414] = ROUTE1043;

let ROUTE1044 = browser.currentScene.createNode("ROUTE");
ROUTE1044.fromNode = "JumpTimer";
ROUTE1044.fromField = "fraction_changed";
ROUTE1044.toNode = "Jump_vc6_YawInterpolator";
ROUTE1044.toField = "set_fraction";
browser.currentScene.children[415] = ROUTE1044;

let ROUTE1045 = browser.currentScene.createNode("ROUTE");
ROUTE1045.fromNode = "JumpTimer";
ROUTE1045.fromField = "fraction_changed";
ROUTE1045.toNode = "Jump_l_thumb1_PitchInterpolator";
ROUTE1045.toField = "set_fraction";
browser.currentScene.children[416] = ROUTE1045;

let ROUTE1046 = browser.currentScene.createNode("ROUTE");
ROUTE1046.fromNode = "JumpTimer";
ROUTE1046.fromField = "fraction_changed";
ROUTE1046.toNode = "Jump_r_thumb1_PitchInterpolator";
ROUTE1046.toField = "set_fraction";
browser.currentScene.children[417] = ROUTE1046;

let ROUTE1047 = browser.currentScene.createNode("ROUTE");
ROUTE1047.fromNode = "Jump_r_ankle_RotationInterpolator";
ROUTE1047.fromField = "value_changed";
ROUTE1047.toNode = "boxman_r_ankle";
ROUTE1047.toField = "set_rotation";
browser.currentScene.children[418] = ROUTE1047;

let ROUTE1048 = browser.currentScene.createNode("ROUTE");
ROUTE1048.fromNode = "Jump_r_knee_RotationInterpolator";
ROUTE1048.fromField = "value_changed";
ROUTE1048.toNode = "boxman_r_knee";
ROUTE1048.toField = "set_rotation";
browser.currentScene.children[419] = ROUTE1048;

let ROUTE1049 = browser.currentScene.createNode("ROUTE");
ROUTE1049.fromNode = "Jump_r_hip_RotationInterpolator";
ROUTE1049.fromField = "value_changed";
ROUTE1049.toNode = "boxman_r_hip";
ROUTE1049.toField = "set_rotation";
browser.currentScene.children[420] = ROUTE1049;

let ROUTE1050 = browser.currentScene.createNode("ROUTE");
ROUTE1050.fromNode = "Jump_l_ankle_RotationInterpolator";
ROUTE1050.fromField = "value_changed";
ROUTE1050.toNode = "boxman_l_ankle";
ROUTE1050.toField = "set_rotation";
browser.currentScene.children[421] = ROUTE1050;

let ROUTE1051 = browser.currentScene.createNode("ROUTE");
ROUTE1051.fromNode = "Jump_l_knee_RotationInterpolator";
ROUTE1051.fromField = "value_changed";
ROUTE1051.toNode = "boxman_l_knee";
ROUTE1051.toField = "set_rotation";
browser.currentScene.children[422] = ROUTE1051;

let ROUTE1052 = browser.currentScene.createNode("ROUTE");
ROUTE1052.fromNode = "Jump_l_hip_RotationInterpolator";
ROUTE1052.fromField = "value_changed";
ROUTE1052.toNode = "boxman_l_hip";
ROUTE1052.toField = "set_rotation";
browser.currentScene.children[423] = ROUTE1052;

let ROUTE1053 = browser.currentScene.createNode("ROUTE");
ROUTE1053.fromNode = "Jump_r_wrist_RotationInterpolator";
ROUTE1053.fromField = "value_changed";
ROUTE1053.toNode = "boxman_r_wrist";
ROUTE1053.toField = "set_rotation";
browser.currentScene.children[424] = ROUTE1053;

let ROUTE1054 = browser.currentScene.createNode("ROUTE");
ROUTE1054.fromNode = "Jump_r_elbow_RotationInterpolator";
ROUTE1054.fromField = "value_changed";
ROUTE1054.toNode = "boxman_r_elbow";
ROUTE1054.toField = "set_rotation";
browser.currentScene.children[425] = ROUTE1054;

let ROUTE1055 = browser.currentScene.createNode("ROUTE");
ROUTE1055.fromNode = "Jump_r_shoulder_RotationInterpolator";
ROUTE1055.fromField = "value_changed";
ROUTE1055.toNode = "boxman_r_shoulder";
ROUTE1055.toField = "set_rotation";
browser.currentScene.children[426] = ROUTE1055;

let ROUTE1056 = browser.currentScene.createNode("ROUTE");
ROUTE1056.fromNode = "Jump_l_wrist_RotationInterpolator";
ROUTE1056.fromField = "value_changed";
ROUTE1056.toNode = "boxman_l_wrist";
ROUTE1056.toField = "set_rotation";
browser.currentScene.children[427] = ROUTE1056;

let ROUTE1057 = browser.currentScene.createNode("ROUTE");
ROUTE1057.fromNode = "Jump_l_elbow_RotationInterpolator";
ROUTE1057.fromField = "value_changed";
ROUTE1057.toNode = "boxman_l_elbow";
ROUTE1057.toField = "set_rotation";
browser.currentScene.children[428] = ROUTE1057;

let ROUTE1058 = browser.currentScene.createNode("ROUTE");
ROUTE1058.fromNode = "Jump_l_shoulder_RotationInterpolator";
ROUTE1058.fromField = "value_changed";
ROUTE1058.toNode = "boxman_l_shoulder";
ROUTE1058.toField = "set_rotation";
browser.currentScene.children[429] = ROUTE1058;

let ROUTE1059 = browser.currentScene.createNode("ROUTE");
ROUTE1059.fromNode = "Jump_head_RotationInterpolator";
ROUTE1059.fromField = "value_changed";
ROUTE1059.toNode = "boxman_skullbase";
ROUTE1059.toField = "set_rotation";
browser.currentScene.children[430] = ROUTE1059;

let ROUTE1060 = browser.currentScene.createNode("ROUTE");
ROUTE1060.fromNode = "Jump_whole_body_RotationInterpolator";
ROUTE1060.fromField = "value_changed";
ROUTE1060.toNode = "boxman_humanoid_root";
ROUTE1060.toField = "set_rotation";
browser.currentScene.children[431] = ROUTE1060;

let ROUTE1061 = browser.currentScene.createNode("ROUTE");
ROUTE1061.fromNode = "Jump_whole_body_TranslationInterpolator";
ROUTE1061.fromField = "value_changed";
ROUTE1061.toNode = "boxman_humanoid_root";
ROUTE1061.toField = "set_translation";
browser.currentScene.children[432] = ROUTE1061;

let ROUTE1062 = browser.currentScene.createNode("ROUTE");
ROUTE1062.fromNode = "Jump_vl5_YawInterpolator";
ROUTE1062.fromField = "value_changed";
ROUTE1062.toNode = "boxman_vl5";
ROUTE1062.toField = "set_rotation";
browser.currentScene.children[433] = ROUTE1062;

let ROUTE1063 = browser.currentScene.createNode("ROUTE");
ROUTE1063.fromNode = "KickTimer";
ROUTE1063.fromField = "fraction_changed";
ROUTE1063.toNode = "Kick_l_sternoclavicular_RollInterpolator";
ROUTE1063.toField = "set_fraction";
browser.currentScene.children[434] = ROUTE1063;

let ROUTE1064 = browser.currentScene.createNode("ROUTE");
ROUTE1064.fromNode = "KickTimer";
ROUTE1064.fromField = "fraction_changed";
ROUTE1064.toNode = "Kick_l_acromioclavicular_RollInterpolator";
ROUTE1064.toField = "set_fraction";
browser.currentScene.children[435] = ROUTE1064;

let ROUTE1065 = browser.currentScene.createNode("ROUTE");
ROUTE1065.fromNode = "KickTimer";
ROUTE1065.fromField = "fraction_changed";
ROUTE1065.toNode = "Kick_l_shoulder_RollInterpolator";
ROUTE1065.toField = "set_fraction";
browser.currentScene.children[436] = ROUTE1065;

let ROUTE1066 = browser.currentScene.createNode("ROUTE");
ROUTE1066.fromNode = "KickTimer";
ROUTE1066.fromField = "fraction_changed";
ROUTE1066.toNode = "Kick_l_ForeArm_PitchInterpolator";
ROUTE1066.toField = "set_fraction";
browser.currentScene.children[437] = ROUTE1066;

let ROUTE1067 = browser.currentScene.createNode("ROUTE");
ROUTE1067.fromNode = "KickTimer";
ROUTE1067.fromField = "fraction_changed";
ROUTE1067.toNode = "Kick_l_wrist_RollInterpolator";
ROUTE1067.toField = "set_fraction";
browser.currentScene.children[438] = ROUTE1067;

let ROUTE1068 = browser.currentScene.createNode("ROUTE");
ROUTE1068.fromNode = "KickTimer";
ROUTE1068.fromField = "fraction_changed";
ROUTE1068.toNode = "Kick_l_thumb1_PitchInterpolator";
ROUTE1068.toField = "set_fraction";
browser.currentScene.children[439] = ROUTE1068;

let ROUTE1069 = browser.currentScene.createNode("ROUTE");
ROUTE1069.fromNode = "KickTimer";
ROUTE1069.fromField = "fraction_changed";
ROUTE1069.toNode = "Kick_r_sternoclavicular_RollInterpolator";
ROUTE1069.toField = "set_fraction";
browser.currentScene.children[440] = ROUTE1069;

let ROUTE1070 = browser.currentScene.createNode("ROUTE");
ROUTE1070.fromNode = "KickTimer";
ROUTE1070.fromField = "fraction_changed";
ROUTE1070.toNode = "Kick_r_acromioclavicular_RollInterpolator";
ROUTE1070.toField = "set_fraction";
browser.currentScene.children[441] = ROUTE1070;

let ROUTE1071 = browser.currentScene.createNode("ROUTE");
ROUTE1071.fromNode = "KickTimer";
ROUTE1071.fromField = "fraction_changed";
ROUTE1071.toNode = "Kick_r_shoulder_RollInterpolator";
ROUTE1071.toField = "set_fraction";
browser.currentScene.children[442] = ROUTE1071;

let ROUTE1072 = browser.currentScene.createNode("ROUTE");
ROUTE1072.fromNode = "KickTimer";
ROUTE1072.fromField = "fraction_changed";
ROUTE1072.toNode = "Kick_r_ForeArm_PitchInterpolator";
ROUTE1072.toField = "set_fraction";
browser.currentScene.children[443] = ROUTE1072;

let ROUTE1073 = browser.currentScene.createNode("ROUTE");
ROUTE1073.fromNode = "KickTimer";
ROUTE1073.fromField = "fraction_changed";
ROUTE1073.toNode = "Kick_r_wrist_RollInterpolator";
ROUTE1073.toField = "set_fraction";
browser.currentScene.children[444] = ROUTE1073;

let ROUTE1074 = browser.currentScene.createNode("ROUTE");
ROUTE1074.fromNode = "KickTimer";
ROUTE1074.fromField = "fraction_changed";
ROUTE1074.toNode = "Kick_r_thumb1_PitchInterpolator";
ROUTE1074.toField = "set_fraction";
browser.currentScene.children[445] = ROUTE1074;

let ROUTE1075 = browser.currentScene.createNode("ROUTE");
ROUTE1075.fromNode = "KickTimer";
ROUTE1075.fromField = "fraction_changed";
ROUTE1075.toNode = "Kick_r_hip_PitchInterpolator";
ROUTE1075.toField = "set_fraction";
browser.currentScene.children[446] = ROUTE1075;

let ROUTE1076 = browser.currentScene.createNode("ROUTE");
ROUTE1076.fromNode = "KickTimer";
ROUTE1076.fromField = "fraction_changed";
ROUTE1076.toNode = "Kick_r_knee_PitchInterpolator";
ROUTE1076.toField = "set_fraction";
browser.currentScene.children[447] = ROUTE1076;

let ROUTE1077 = browser.currentScene.createNode("ROUTE");
ROUTE1077.fromNode = "KickTimer";
ROUTE1077.fromField = "fraction_changed";
ROUTE1077.toNode = "Kick_l_hip_PitchInterpolator";
ROUTE1077.toField = "set_fraction";
browser.currentScene.children[448] = ROUTE1077;

let ROUTE1078 = browser.currentScene.createNode("ROUTE");
ROUTE1078.fromNode = "KickTimer";
ROUTE1078.fromField = "fraction_changed";
ROUTE1078.toNode = "Kick_l_knee_PitchInterpolator";
ROUTE1078.toField = "set_fraction";
browser.currentScene.children[449] = ROUTE1078;

let ROUTE1079 = browser.currentScene.createNode("ROUTE");
ROUTE1079.fromNode = "KickTimer";
ROUTE1079.fromField = "fraction_changed";
ROUTE1079.toNode = "Kick_r_ankle_PitchInterpolator";
ROUTE1079.toField = "set_fraction";
browser.currentScene.children[450] = ROUTE1079;

let ROUTE1080 = browser.currentScene.createNode("ROUTE");
ROUTE1080.fromNode = "KickTimer";
ROUTE1080.fromField = "fraction_changed";
ROUTE1080.toNode = "Kick_r_metatarsal_PitchInterpolator";
ROUTE1080.toField = "set_fraction";
browser.currentScene.children[451] = ROUTE1080;

let ROUTE1081 = browser.currentScene.createNode("ROUTE");
ROUTE1081.fromNode = "KickTimer";
ROUTE1081.fromField = "fraction_changed";
ROUTE1081.toNode = "Kick_sacroiliac_YawInterpolator";
ROUTE1081.toField = "set_fraction";
browser.currentScene.children[452] = ROUTE1081;

let ROUTE1082 = browser.currentScene.createNode("ROUTE");
ROUTE1082.fromNode = "KickTimer";
ROUTE1082.fromField = "fraction_changed";
ROUTE1082.toNode = "Kick_vl5_YawInterpolator";
ROUTE1082.toField = "set_fraction";
browser.currentScene.children[453] = ROUTE1082;

let ROUTE1083 = browser.currentScene.createNode("ROUTE");
ROUTE1083.fromNode = "KickTimer";
ROUTE1083.fromField = "fraction_changed";
ROUTE1083.toNode = "Kick_vc6_YawInterpolator";
ROUTE1083.toField = "set_fraction";
browser.currentScene.children[454] = ROUTE1083;

let ROUTE1084 = browser.currentScene.createNode("ROUTE");
ROUTE1084.fromNode = "KickTimer";
ROUTE1084.fromField = "fraction_changed";
ROUTE1084.toNode = "Kick_lower_body_RotationInterpolator";
ROUTE1084.toField = "set_fraction";
browser.currentScene.children[455] = ROUTE1084;

let ROUTE1085 = browser.currentScene.createNode("ROUTE");
ROUTE1085.fromNode = "KickTimer";
ROUTE1085.fromField = "fraction_changed";
ROUTE1085.toNode = "Kick_upper_body_RotationInterpolator";
ROUTE1085.toField = "set_fraction";
browser.currentScene.children[456] = ROUTE1085;

let ROUTE1086 = browser.currentScene.createNode("ROUTE");
ROUTE1086.fromNode = "KickTimer";
ROUTE1086.fromField = "fraction_changed";
ROUTE1086.toNode = "Kick_whole_body_RotationInterpolator";
ROUTE1086.toField = "set_fraction";
browser.currentScene.children[457] = ROUTE1086;

let ROUTE1087 = browser.currentScene.createNode("ROUTE");
ROUTE1087.fromNode = "KickTimer";
ROUTE1087.fromField = "fraction_changed";
ROUTE1087.toNode = "Kick_whole_body_TranslationInterpolator";
ROUTE1087.toField = "set_fraction";
browser.currentScene.children[458] = ROUTE1087;

let ROUTE1088 = browser.currentScene.createNode("ROUTE");
ROUTE1088.fromNode = "KickTimer";
ROUTE1088.fromField = "fraction_changed";
ROUTE1088.toNode = "Kick_neck_RotationInterpolator";
ROUTE1088.toField = "set_fraction";
browser.currentScene.children[459] = ROUTE1088;

let ROUTE1089 = browser.currentScene.createNode("ROUTE");
ROUTE1089.fromNode = "Kick_l_shoulder_RollInterpolator";
ROUTE1089.fromField = "value_changed";
ROUTE1089.toNode = "boxman_l_shoulder";
ROUTE1089.toField = "set_rotation";
browser.currentScene.children[460] = ROUTE1089;

let ROUTE1090 = browser.currentScene.createNode("ROUTE");
ROUTE1090.fromNode = "Kick_l_ForeArm_PitchInterpolator";
ROUTE1090.fromField = "value_changed";
ROUTE1090.toNode = "boxman_l_elbow";
ROUTE1090.toField = "set_rotation";
browser.currentScene.children[461] = ROUTE1090;

let ROUTE1091 = browser.currentScene.createNode("ROUTE");
ROUTE1091.fromNode = "Kick_l_wrist_RollInterpolator";
ROUTE1091.fromField = "value_changed";
ROUTE1091.toNode = "boxman_l_wrist";
ROUTE1091.toField = "set_rotation";
browser.currentScene.children[462] = ROUTE1091;

let ROUTE1092 = browser.currentScene.createNode("ROUTE");
ROUTE1092.fromNode = "Kick_r_shoulder_RollInterpolator";
ROUTE1092.fromField = "value_changed";
ROUTE1092.toNode = "boxman_r_shoulder";
ROUTE1092.toField = "set_rotation";
browser.currentScene.children[463] = ROUTE1092;

let ROUTE1093 = browser.currentScene.createNode("ROUTE");
ROUTE1093.fromNode = "Kick_r_ForeArm_PitchInterpolator";
ROUTE1093.fromField = "value_changed";
ROUTE1093.toNode = "boxman_r_elbow";
ROUTE1093.toField = "set_rotation";
browser.currentScene.children[464] = ROUTE1093;

let ROUTE1094 = browser.currentScene.createNode("ROUTE");
ROUTE1094.fromNode = "Kick_r_wrist_RollInterpolator";
ROUTE1094.fromField = "value_changed";
ROUTE1094.toNode = "boxman_r_wrist";
ROUTE1094.toField = "set_rotation";
browser.currentScene.children[465] = ROUTE1094;

let ROUTE1095 = browser.currentScene.createNode("ROUTE");
ROUTE1095.fromNode = "Kick_r_hip_PitchInterpolator";
ROUTE1095.fromField = "value_changed";
ROUTE1095.toNode = "boxman_r_hip";
ROUTE1095.toField = "set_rotation";
browser.currentScene.children[466] = ROUTE1095;

let ROUTE1096 = browser.currentScene.createNode("ROUTE");
ROUTE1096.fromNode = "Kick_r_knee_PitchInterpolator";
ROUTE1096.fromField = "value_changed";
ROUTE1096.toNode = "boxman_r_knee";
ROUTE1096.toField = "set_rotation";
browser.currentScene.children[467] = ROUTE1096;

let ROUTE1097 = browser.currentScene.createNode("ROUTE");
ROUTE1097.fromNode = "Kick_r_ankle_PitchInterpolator";
ROUTE1097.fromField = "value_changed";
ROUTE1097.toNode = "boxman_r_ankle";
ROUTE1097.toField = "set_rotation";
browser.currentScene.children[468] = ROUTE1097;

let ROUTE1098 = browser.currentScene.createNode("ROUTE");
ROUTE1098.fromNode = "Kick_l_hip_PitchInterpolator";
ROUTE1098.fromField = "value_changed";
ROUTE1098.toNode = "boxman_l_hip";
ROUTE1098.toField = "set_rotation";
browser.currentScene.children[469] = ROUTE1098;

let ROUTE1099 = browser.currentScene.createNode("ROUTE");
ROUTE1099.fromNode = "Kick_l_knee_PitchInterpolator";
ROUTE1099.fromField = "value_changed";
ROUTE1099.toNode = "boxman_l_knee";
ROUTE1099.toField = "set_rotation";
browser.currentScene.children[470] = ROUTE1099;

let ROUTE1100 = browser.currentScene.createNode("ROUTE");
ROUTE1100.fromNode = "Kick_r_ankle_PitchInterpolator";
ROUTE1100.fromField = "value_changed";
ROUTE1100.toNode = "boxman_l_ankle";
ROUTE1100.toField = "set_rotation";
browser.currentScene.children[471] = ROUTE1100;

let ROUTE1101 = browser.currentScene.createNode("ROUTE");
ROUTE1101.fromNode = "Kick_vl5_YawInterpolator";
ROUTE1101.fromField = "value_changed";
ROUTE1101.toNode = "boxman_vl5";
ROUTE1101.toField = "set_rotation";
browser.currentScene.children[472] = ROUTE1101;

let ROUTE1102 = browser.currentScene.createNode("ROUTE");
ROUTE1102.fromNode = "Kick_whole_body_RotationInterpolator";
ROUTE1102.fromField = "value_changed";
ROUTE1102.toNode = "boxman_humanoid_root";
ROUTE1102.toField = "set_rotation";
browser.currentScene.children[473] = ROUTE1102;

let ROUTE1103 = browser.currentScene.createNode("ROUTE");
ROUTE1103.fromNode = "Kick_whole_body_TranslationInterpolator";
ROUTE1103.fromField = "value_changed";
ROUTE1103.toNode = "boxman_humanoid_root";
ROUTE1103.toField = "set_translation";
browser.currentScene.children[474] = ROUTE1103;

let ROUTE1104 = browser.currentScene.createNode("ROUTE");
ROUTE1104.fromNode = "HudProx";
ROUTE1104.fromField = "position_changed";
ROUTE1104.toNode = "HudXform";
ROUTE1104.toField = "set_translation";
browser.currentScene.children[475] = ROUTE1104;

let ROUTE1105 = browser.currentScene.createNode("ROUTE");
ROUTE1105.fromNode = "HudProx";
ROUTE1105.fromField = "orientation_changed";
ROUTE1105.toNode = "HudXform";
ROUTE1105.toField = "set_rotation";
browser.currentScene.children[476] = ROUTE1105;

let ROUTE1106 = browser.currentScene.createNode("ROUTE");
ROUTE1106.fromNode = "Stand_Touch";
ROUTE1106.fromField = "touchTime";
ROUTE1106.toNode = "PitchTimer";
ROUTE1106.toField = "set_stopTime";
browser.currentScene.children[477] = ROUTE1106;

let ROUTE1107 = browser.currentScene.createNode("ROUTE");
ROUTE1107.fromNode = "Stand_Touch";
ROUTE1107.fromField = "touchTime";
ROUTE1107.toNode = "YawTimer";
ROUTE1107.toField = "set_stopTime";
browser.currentScene.children[478] = ROUTE1107;

let ROUTE1108 = browser.currentScene.createNode("ROUTE");
ROUTE1108.fromNode = "Stand_Touch";
ROUTE1108.fromField = "touchTime";
ROUTE1108.toNode = "RollTimer";
ROUTE1108.toField = "set_stopTime";
browser.currentScene.children[479] = ROUTE1108;

let ROUTE1109 = browser.currentScene.createNode("ROUTE");
ROUTE1109.fromNode = "Stand_Touch";
ROUTE1109.fromField = "touchTime";
ROUTE1109.toNode = "WalkTimer";
ROUTE1109.toField = "set_stopTime";
browser.currentScene.children[480] = ROUTE1109;

let ROUTE1110 = browser.currentScene.createNode("ROUTE");
ROUTE1110.fromNode = "Stand_Touch";
ROUTE1110.fromField = "touchTime";
ROUTE1110.toNode = "RunTimer";
ROUTE1110.toField = "set_stopTime";
browser.currentScene.children[481] = ROUTE1110;

let ROUTE1111 = browser.currentScene.createNode("ROUTE");
ROUTE1111.fromNode = "Stand_Touch";
ROUTE1111.fromField = "touchTime";
ROUTE1111.toNode = "JumpTimer";
ROUTE1111.toField = "set_stopTime";
browser.currentScene.children[482] = ROUTE1111;

let ROUTE1112 = browser.currentScene.createNode("ROUTE");
ROUTE1112.fromNode = "Stand_Touch";
ROUTE1112.fromField = "touchTime";
ROUTE1112.toNode = "KickTimer";
ROUTE1112.toField = "set_stopTime";
browser.currentScene.children[483] = ROUTE1112;

let ROUTE1113 = browser.currentScene.createNode("ROUTE");
ROUTE1113.fromNode = "Stand_Touch";
ROUTE1113.fromField = "touchTime";
ROUTE1113.toNode = "StopTimer";
ROUTE1113.toField = "set_stopTime";
browser.currentScene.children[484] = ROUTE1113;

let ROUTE1114 = browser.currentScene.createNode("ROUTE");
ROUTE1114.fromNode = "Stand_Touch";
ROUTE1114.fromField = "touchTime";
ROUTE1114.toNode = "StandTimer";
ROUTE1114.toField = "set_startTime";
browser.currentScene.children[485] = ROUTE1114;

let ROUTE1115 = browser.currentScene.createNode("ROUTE");
ROUTE1115.fromNode = "Pitch_Touch";
ROUTE1115.fromField = "touchTime";
ROUTE1115.toNode = "StandTimer";
ROUTE1115.toField = "set_stopTime";
browser.currentScene.children[486] = ROUTE1115;

let ROUTE1116 = browser.currentScene.createNode("ROUTE");
ROUTE1116.fromNode = "Pitch_Touch";
ROUTE1116.fromField = "touchTime";
ROUTE1116.toNode = "YawTimer";
ROUTE1116.toField = "set_stopTime";
browser.currentScene.children[487] = ROUTE1116;

let ROUTE1117 = browser.currentScene.createNode("ROUTE");
ROUTE1117.fromNode = "Pitch_Touch";
ROUTE1117.fromField = "touchTime";
ROUTE1117.toNode = "RollTimer";
ROUTE1117.toField = "set_stopTime";
browser.currentScene.children[488] = ROUTE1117;

let ROUTE1118 = browser.currentScene.createNode("ROUTE");
ROUTE1118.fromNode = "Pitch_Touch";
ROUTE1118.fromField = "touchTime";
ROUTE1118.toNode = "WalkTimer";
ROUTE1118.toField = "set_stopTime";
browser.currentScene.children[489] = ROUTE1118;

let ROUTE1119 = browser.currentScene.createNode("ROUTE");
ROUTE1119.fromNode = "Pitch_Touch";
ROUTE1119.fromField = "touchTime";
ROUTE1119.toNode = "RunTimer";
ROUTE1119.toField = "set_stopTime";
browser.currentScene.children[490] = ROUTE1119;

let ROUTE1120 = browser.currentScene.createNode("ROUTE");
ROUTE1120.fromNode = "Pitch_Touch";
ROUTE1120.fromField = "touchTime";
ROUTE1120.toNode = "JumpTimer";
ROUTE1120.toField = "set_stopTime";
browser.currentScene.children[491] = ROUTE1120;

let ROUTE1121 = browser.currentScene.createNode("ROUTE");
ROUTE1121.fromNode = "Pitch_Touch";
ROUTE1121.fromField = "touchTime";
ROUTE1121.toNode = "KickTimer";
ROUTE1121.toField = "set_stopTime";
browser.currentScene.children[492] = ROUTE1121;

let ROUTE1122 = browser.currentScene.createNode("ROUTE");
ROUTE1122.fromNode = "Pitch_Touch";
ROUTE1122.fromField = "touchTime";
ROUTE1122.toNode = "StopTimer";
ROUTE1122.toField = "set_stopTime";
browser.currentScene.children[493] = ROUTE1122;

let ROUTE1123 = browser.currentScene.createNode("ROUTE");
ROUTE1123.fromNode = "Pitch_Touch";
ROUTE1123.fromField = "touchTime";
ROUTE1123.toNode = "PitchTimer";
ROUTE1123.toField = "set_startTime";
browser.currentScene.children[494] = ROUTE1123;

let ROUTE1124 = browser.currentScene.createNode("ROUTE");
ROUTE1124.fromNode = "Yaw_Touch";
ROUTE1124.fromField = "touchTime";
ROUTE1124.toNode = "StandTimer";
ROUTE1124.toField = "set_stopTime";
browser.currentScene.children[495] = ROUTE1124;

let ROUTE1125 = browser.currentScene.createNode("ROUTE");
ROUTE1125.fromNode = "Yaw_Touch";
ROUTE1125.fromField = "touchTime";
ROUTE1125.toNode = "PitchTimer";
ROUTE1125.toField = "set_stopTime";
browser.currentScene.children[496] = ROUTE1125;

let ROUTE1126 = browser.currentScene.createNode("ROUTE");
ROUTE1126.fromNode = "Yaw_Touch";
ROUTE1126.fromField = "touchTime";
ROUTE1126.toNode = "RollTimer";
ROUTE1126.toField = "set_stopTime";
browser.currentScene.children[497] = ROUTE1126;

let ROUTE1127 = browser.currentScene.createNode("ROUTE");
ROUTE1127.fromNode = "Yaw_Touch";
ROUTE1127.fromField = "touchTime";
ROUTE1127.toNode = "WalkTimer";
ROUTE1127.toField = "set_stopTime";
browser.currentScene.children[498] = ROUTE1127;

let ROUTE1128 = browser.currentScene.createNode("ROUTE");
ROUTE1128.fromNode = "Yaw_Touch";
ROUTE1128.fromField = "touchTime";
ROUTE1128.toNode = "RunTimer";
ROUTE1128.toField = "set_stopTime";
browser.currentScene.children[499] = ROUTE1128;

let ROUTE1129 = browser.currentScene.createNode("ROUTE");
ROUTE1129.fromNode = "Yaw_Touch";
ROUTE1129.fromField = "touchTime";
ROUTE1129.toNode = "JumpTimer";
ROUTE1129.toField = "set_stopTime";
browser.currentScene.children[500] = ROUTE1129;

let ROUTE1130 = browser.currentScene.createNode("ROUTE");
ROUTE1130.fromNode = "Yaw_Touch";
ROUTE1130.fromField = "touchTime";
ROUTE1130.toNode = "KickTimer";
ROUTE1130.toField = "set_stopTime";
browser.currentScene.children[501] = ROUTE1130;

let ROUTE1131 = browser.currentScene.createNode("ROUTE");
ROUTE1131.fromNode = "Yaw_Touch";
ROUTE1131.fromField = "touchTime";
ROUTE1131.toNode = "StopTimer";
ROUTE1131.toField = "set_stopTime";
browser.currentScene.children[502] = ROUTE1131;

let ROUTE1132 = browser.currentScene.createNode("ROUTE");
ROUTE1132.fromNode = "Yaw_Touch";
ROUTE1132.fromField = "touchTime";
ROUTE1132.toNode = "YawTimer";
ROUTE1132.toField = "set_startTime";
browser.currentScene.children[503] = ROUTE1132;

let ROUTE1133 = browser.currentScene.createNode("ROUTE");
ROUTE1133.fromNode = "Walk_Touch";
ROUTE1133.fromField = "touchTime";
ROUTE1133.toNode = "StandTimer";
ROUTE1133.toField = "set_stopTime";
browser.currentScene.children[504] = ROUTE1133;

let ROUTE1134 = browser.currentScene.createNode("ROUTE");
ROUTE1134.fromNode = "Walk_Touch";
ROUTE1134.fromField = "touchTime";
ROUTE1134.toNode = "PitchTimer";
ROUTE1134.toField = "set_stopTime";
browser.currentScene.children[505] = ROUTE1134;

let ROUTE1135 = browser.currentScene.createNode("ROUTE");
ROUTE1135.fromNode = "Walk_Touch";
ROUTE1135.fromField = "touchTime";
ROUTE1135.toNode = "YawTimer";
ROUTE1135.toField = "set_stopTime";
browser.currentScene.children[506] = ROUTE1135;

let ROUTE1136 = browser.currentScene.createNode("ROUTE");
ROUTE1136.fromNode = "Walk_Touch";
ROUTE1136.fromField = "touchTime";
ROUTE1136.toNode = "RollTimer";
ROUTE1136.toField = "set_stopTime";
browser.currentScene.children[507] = ROUTE1136;

let ROUTE1137 = browser.currentScene.createNode("ROUTE");
ROUTE1137.fromNode = "Walk_Touch";
ROUTE1137.fromField = "touchTime";
ROUTE1137.toNode = "RunTimer";
ROUTE1137.toField = "set_stopTime";
browser.currentScene.children[508] = ROUTE1137;

let ROUTE1138 = browser.currentScene.createNode("ROUTE");
ROUTE1138.fromNode = "Walk_Touch";
ROUTE1138.fromField = "touchTime";
ROUTE1138.toNode = "JumpTimer";
ROUTE1138.toField = "set_stopTime";
browser.currentScene.children[509] = ROUTE1138;

let ROUTE1139 = browser.currentScene.createNode("ROUTE");
ROUTE1139.fromNode = "Walk_Touch";
ROUTE1139.fromField = "touchTime";
ROUTE1139.toNode = "KickTimer";
ROUTE1139.toField = "set_stopTime";
browser.currentScene.children[510] = ROUTE1139;

let ROUTE1140 = browser.currentScene.createNode("ROUTE");
ROUTE1140.fromNode = "Walk_Touch";
ROUTE1140.fromField = "touchTime";
ROUTE1140.toNode = "StopTimer";
ROUTE1140.toField = "set_stopTime";
browser.currentScene.children[511] = ROUTE1140;

let ROUTE1141 = browser.currentScene.createNode("ROUTE");
ROUTE1141.fromNode = "Walk_Touch";
ROUTE1141.fromField = "touchTime";
ROUTE1141.toNode = "WalkTimer";
ROUTE1141.toField = "set_startTime";
browser.currentScene.children[512] = ROUTE1141;

let ROUTE1142 = browser.currentScene.createNode("ROUTE");
ROUTE1142.fromNode = "Roll_Touch";
ROUTE1142.fromField = "touchTime";
ROUTE1142.toNode = "StandTimer";
ROUTE1142.toField = "set_stopTime";
browser.currentScene.children[513] = ROUTE1142;

let ROUTE1143 = browser.currentScene.createNode("ROUTE");
ROUTE1143.fromNode = "Roll_Touch";
ROUTE1143.fromField = "touchTime";
ROUTE1143.toNode = "PitchTimer";
ROUTE1143.toField = "set_stopTime";
browser.currentScene.children[514] = ROUTE1143;

let ROUTE1144 = browser.currentScene.createNode("ROUTE");
ROUTE1144.fromNode = "Roll_Touch";
ROUTE1144.fromField = "touchTime";
ROUTE1144.toNode = "YawTimer";
ROUTE1144.toField = "set_stopTime";
browser.currentScene.children[515] = ROUTE1144;

let ROUTE1145 = browser.currentScene.createNode("ROUTE");
ROUTE1145.fromNode = "Roll_Touch";
ROUTE1145.fromField = "touchTime";
ROUTE1145.toNode = "WalkTimer";
ROUTE1145.toField = "set_stopTime";
browser.currentScene.children[516] = ROUTE1145;

let ROUTE1146 = browser.currentScene.createNode("ROUTE");
ROUTE1146.fromNode = "Roll_Touch";
ROUTE1146.fromField = "touchTime";
ROUTE1146.toNode = "RunTimer";
ROUTE1146.toField = "set_stopTime";
browser.currentScene.children[517] = ROUTE1146;

let ROUTE1147 = browser.currentScene.createNode("ROUTE");
ROUTE1147.fromNode = "Roll_Touch";
ROUTE1147.fromField = "touchTime";
ROUTE1147.toNode = "JumpTimer";
ROUTE1147.toField = "set_stopTime";
browser.currentScene.children[518] = ROUTE1147;

let ROUTE1148 = browser.currentScene.createNode("ROUTE");
ROUTE1148.fromNode = "Roll_Touch";
ROUTE1148.fromField = "touchTime";
ROUTE1148.toNode = "KickTimer";
ROUTE1148.toField = "set_stopTime";
browser.currentScene.children[519] = ROUTE1148;

let ROUTE1149 = browser.currentScene.createNode("ROUTE");
ROUTE1149.fromNode = "Roll_Touch";
ROUTE1149.fromField = "touchTime";
ROUTE1149.toNode = "StopTimer";
ROUTE1149.toField = "set_stopTime";
browser.currentScene.children[520] = ROUTE1149;

let ROUTE1150 = browser.currentScene.createNode("ROUTE");
ROUTE1150.fromNode = "Roll_Touch";
ROUTE1150.fromField = "touchTime";
ROUTE1150.toNode = "RollTimer";
ROUTE1150.toField = "set_startTime";
browser.currentScene.children[521] = ROUTE1150;

let ROUTE1151 = browser.currentScene.createNode("ROUTE");
ROUTE1151.fromNode = "Run_Touch";
ROUTE1151.fromField = "touchTime";
ROUTE1151.toNode = "StandTimer";
ROUTE1151.toField = "set_stopTime";
browser.currentScene.children[522] = ROUTE1151;

let ROUTE1152 = browser.currentScene.createNode("ROUTE");
ROUTE1152.fromNode = "Run_Touch";
ROUTE1152.fromField = "touchTime";
ROUTE1152.toNode = "PitchTimer";
ROUTE1152.toField = "set_stopTime";
browser.currentScene.children[523] = ROUTE1152;

let ROUTE1153 = browser.currentScene.createNode("ROUTE");
ROUTE1153.fromNode = "Run_Touch";
ROUTE1153.fromField = "touchTime";
ROUTE1153.toNode = "YawTimer";
ROUTE1153.toField = "set_stopTime";
browser.currentScene.children[524] = ROUTE1153;

let ROUTE1154 = browser.currentScene.createNode("ROUTE");
ROUTE1154.fromNode = "Run_Touch";
ROUTE1154.fromField = "touchTime";
ROUTE1154.toNode = "RollTimer";
ROUTE1154.toField = "set_stopTime";
browser.currentScene.children[525] = ROUTE1154;

let ROUTE1155 = browser.currentScene.createNode("ROUTE");
ROUTE1155.fromNode = "Run_Touch";
ROUTE1155.fromField = "touchTime";
ROUTE1155.toNode = "WalkTimer";
ROUTE1155.toField = "set_stopTime";
browser.currentScene.children[526] = ROUTE1155;

let ROUTE1156 = browser.currentScene.createNode("ROUTE");
ROUTE1156.fromNode = "Run_Touch";
ROUTE1156.fromField = "touchTime";
ROUTE1156.toNode = "JumpTimer";
ROUTE1156.toField = "set_stopTime";
browser.currentScene.children[527] = ROUTE1156;

let ROUTE1157 = browser.currentScene.createNode("ROUTE");
ROUTE1157.fromNode = "Run_Touch";
ROUTE1157.fromField = "touchTime";
ROUTE1157.toNode = "KickTimer";
ROUTE1157.toField = "set_stopTime";
browser.currentScene.children[528] = ROUTE1157;

let ROUTE1158 = browser.currentScene.createNode("ROUTE");
ROUTE1158.fromNode = "Run_Touch";
ROUTE1158.fromField = "touchTime";
ROUTE1158.toNode = "StopTimer";
ROUTE1158.toField = "set_stopTime";
browser.currentScene.children[529] = ROUTE1158;

let ROUTE1159 = browser.currentScene.createNode("ROUTE");
ROUTE1159.fromNode = "Run_Touch";
ROUTE1159.fromField = "touchTime";
ROUTE1159.toNode = "RunTimer";
ROUTE1159.toField = "set_startTime";
browser.currentScene.children[530] = ROUTE1159;

let ROUTE1160 = browser.currentScene.createNode("ROUTE");
ROUTE1160.fromNode = "Jump_Touch";
ROUTE1160.fromField = "touchTime";
ROUTE1160.toNode = "StandTimer";
ROUTE1160.toField = "set_stopTime";
browser.currentScene.children[531] = ROUTE1160;

let ROUTE1161 = browser.currentScene.createNode("ROUTE");
ROUTE1161.fromNode = "Jump_Touch";
ROUTE1161.fromField = "touchTime";
ROUTE1161.toNode = "PitchTimer";
ROUTE1161.toField = "set_stopTime";
browser.currentScene.children[532] = ROUTE1161;

let ROUTE1162 = browser.currentScene.createNode("ROUTE");
ROUTE1162.fromNode = "Jump_Touch";
ROUTE1162.fromField = "touchTime";
ROUTE1162.toNode = "YawTimer";
ROUTE1162.toField = "set_stopTime";
browser.currentScene.children[533] = ROUTE1162;

let ROUTE1163 = browser.currentScene.createNode("ROUTE");
ROUTE1163.fromNode = "Jump_Touch";
ROUTE1163.fromField = "touchTime";
ROUTE1163.toNode = "RollTimer";
ROUTE1163.toField = "set_stopTime";
browser.currentScene.children[534] = ROUTE1163;

let ROUTE1164 = browser.currentScene.createNode("ROUTE");
ROUTE1164.fromNode = "Jump_Touch";
ROUTE1164.fromField = "touchTime";
ROUTE1164.toNode = "WalkTimer";
ROUTE1164.toField = "set_stopTime";
browser.currentScene.children[535] = ROUTE1164;

let ROUTE1165 = browser.currentScene.createNode("ROUTE");
ROUTE1165.fromNode = "Jump_Touch";
ROUTE1165.fromField = "touchTime";
ROUTE1165.toNode = "RunTimer";
ROUTE1165.toField = "set_stopTime";
browser.currentScene.children[536] = ROUTE1165;

let ROUTE1166 = browser.currentScene.createNode("ROUTE");
ROUTE1166.fromNode = "Jump_Touch";
ROUTE1166.fromField = "touchTime";
ROUTE1166.toNode = "KickTimer";
ROUTE1166.toField = "set_stopTime";
browser.currentScene.children[537] = ROUTE1166;

let ROUTE1167 = browser.currentScene.createNode("ROUTE");
ROUTE1167.fromNode = "Jump_Touch";
ROUTE1167.fromField = "touchTime";
ROUTE1167.toNode = "StopTimer";
ROUTE1167.toField = "set_stopTime";
browser.currentScene.children[538] = ROUTE1167;

let ROUTE1168 = browser.currentScene.createNode("ROUTE");
ROUTE1168.fromNode = "Jump_Touch";
ROUTE1168.fromField = "touchTime";
ROUTE1168.toNode = "JumpTimer";
ROUTE1168.toField = "set_startTime";
browser.currentScene.children[539] = ROUTE1168;

let ROUTE1169 = browser.currentScene.createNode("ROUTE");
ROUTE1169.fromNode = "Kick_Touch";
ROUTE1169.fromField = "touchTime";
ROUTE1169.toNode = "StandTimer";
ROUTE1169.toField = "set_stopTime";
browser.currentScene.children[540] = ROUTE1169;

let ROUTE1170 = browser.currentScene.createNode("ROUTE");
ROUTE1170.fromNode = "Kick_Touch";
ROUTE1170.fromField = "touchTime";
ROUTE1170.toNode = "PitchTimer";
ROUTE1170.toField = "set_stopTime";
browser.currentScene.children[541] = ROUTE1170;

let ROUTE1171 = browser.currentScene.createNode("ROUTE");
ROUTE1171.fromNode = "Kick_Touch";
ROUTE1171.fromField = "touchTime";
ROUTE1171.toNode = "YawTimer";
ROUTE1171.toField = "set_stopTime";
browser.currentScene.children[542] = ROUTE1171;

let ROUTE1172 = browser.currentScene.createNode("ROUTE");
ROUTE1172.fromNode = "Kick_Touch";
ROUTE1172.fromField = "touchTime";
ROUTE1172.toNode = "RollTimer";
ROUTE1172.toField = "set_stopTime";
browser.currentScene.children[543] = ROUTE1172;

let ROUTE1173 = browser.currentScene.createNode("ROUTE");
ROUTE1173.fromNode = "Kick_Touch";
ROUTE1173.fromField = "touchTime";
ROUTE1173.toNode = "WalkTimer";
ROUTE1173.toField = "set_stopTime";
browser.currentScene.children[544] = ROUTE1173;

let ROUTE1174 = browser.currentScene.createNode("ROUTE");
ROUTE1174.fromNode = "Kick_Touch";
ROUTE1174.fromField = "touchTime";
ROUTE1174.toNode = "RunTimer";
ROUTE1174.toField = "set_stopTime";
browser.currentScene.children[545] = ROUTE1174;

let ROUTE1175 = browser.currentScene.createNode("ROUTE");
ROUTE1175.fromNode = "Kick_Touch";
ROUTE1175.fromField = "touchTime";
ROUTE1175.toNode = "JumpTimer";
ROUTE1175.toField = "set_stopTime";
browser.currentScene.children[546] = ROUTE1175;

let ROUTE1176 = browser.currentScene.createNode("ROUTE");
ROUTE1176.fromNode = "Kick_Touch";
ROUTE1176.fromField = "touchTime";
ROUTE1176.toNode = "StopTimer";
ROUTE1176.toField = "set_stopTime";
browser.currentScene.children[547] = ROUTE1176;

let ROUTE1177 = browser.currentScene.createNode("ROUTE");
ROUTE1177.fromNode = "Kick_Touch";
ROUTE1177.fromField = "touchTime";
ROUTE1177.toNode = "KickTimer";
ROUTE1177.toField = "set_startTime";
browser.currentScene.children[548] = ROUTE1177;

let ROUTE1178 = browser.currentScene.createNode("ROUTE");
ROUTE1178.fromNode = "Stop_Touch";
ROUTE1178.fromField = "touchTime";
ROUTE1178.toNode = "StandTimer";
ROUTE1178.toField = "set_stopTime";
browser.currentScene.children[549] = ROUTE1178;

let ROUTE1179 = browser.currentScene.createNode("ROUTE");
ROUTE1179.fromNode = "Stop_Touch";
ROUTE1179.fromField = "touchTime";
ROUTE1179.toNode = "PitchTimer";
ROUTE1179.toField = "set_stopTime";
browser.currentScene.children[550] = ROUTE1179;

let ROUTE1180 = browser.currentScene.createNode("ROUTE");
ROUTE1180.fromNode = "Stop_Touch";
ROUTE1180.fromField = "touchTime";
ROUTE1180.toNode = "YawTimer";
ROUTE1180.toField = "set_stopTime";
browser.currentScene.children[551] = ROUTE1180;

let ROUTE1181 = browser.currentScene.createNode("ROUTE");
ROUTE1181.fromNode = "Stop_Touch";
ROUTE1181.fromField = "touchTime";
ROUTE1181.toNode = "RollTimer";
ROUTE1181.toField = "set_stopTime";
browser.currentScene.children[552] = ROUTE1181;

let ROUTE1182 = browser.currentScene.createNode("ROUTE");
ROUTE1182.fromNode = "Stop_Touch";
ROUTE1182.fromField = "touchTime";
ROUTE1182.toNode = "WalkTimer";
ROUTE1182.toField = "set_stopTime";
browser.currentScene.children[553] = ROUTE1182;

let ROUTE1183 = browser.currentScene.createNode("ROUTE");
ROUTE1183.fromNode = "Stop_Touch";
ROUTE1183.fromField = "touchTime";
ROUTE1183.toNode = "RunTimer";
ROUTE1183.toField = "set_stopTime";
browser.currentScene.children[554] = ROUTE1183;

let ROUTE1184 = browser.currentScene.createNode("ROUTE");
ROUTE1184.fromNode = "Stop_Touch";
ROUTE1184.fromField = "touchTime";
ROUTE1184.toNode = "JumpTimer";
ROUTE1184.toField = "set_stopTime";
browser.currentScene.children[555] = ROUTE1184;

let ROUTE1185 = browser.currentScene.createNode("ROUTE");
ROUTE1185.fromNode = "Stop_Touch";
ROUTE1185.fromField = "touchTime";
ROUTE1185.toNode = "KickTimer";
ROUTE1185.toField = "set_stopTime";
browser.currentScene.children[556] = ROUTE1185;

let ROUTE1186 = browser.currentScene.createNode("ROUTE");
ROUTE1186.fromNode = "Stop_Touch";
ROUTE1186.fromField = "touchTime";
ROUTE1186.toNode = "StopTimer";
ROUTE1186.toField = "set_startTime";
browser.currentScene.children[557] = ROUTE1186;

}
main ();

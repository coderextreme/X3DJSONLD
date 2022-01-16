let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "H-Anim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "title";
meta3.content = "BoxManAnimationPanel.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "description";
meta4.content = "A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation panel shows multiple behaviors.";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "creator";
meta5.content = "Joe Williams and James Smith - james@vapourtech.com";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "translator";
meta6.content = "Joe Williams and Don Brutzman";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "generator";
meta7.content = ".x3d to .x3d translation used BS Contact Geo 8.203";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "created";
meta8.content = "1 March 2001";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "revision";
meta9.content = "12 January 2017";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "translated";
meta10.content = "14 January 2017";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "modified";
meta11.content = "4 July 2020";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "Image";
meta12.content = "BoxManAnimationPanelInclined.png";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "MovingImage";
meta13.content = "BoxManAnimationPanel.mp4";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "MovingImage";
meta14.content = "https://www.youtube.com/watch?v=8tI83Rtg_DU";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "reference";
meta15.content = "https://twitter.com/Web3DConsortium/status/820638047523913728";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "reference";
meta16.content = "https://twitter.com/Web3DConsortium/status/820642726009978881";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "reference";
meta17.content = "http://HAnim.org";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "reference";
meta18.content = "boxman.original.wrl";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "TODO";
meta19.content = "InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org";
head1.meta[17] = meta19;

let meta20 = browser.currentScene.createNode("meta");
meta20.name = "reference";
meta20.content = "BoxMan.x3d";
head1.meta[18] = meta20;

let meta21 = browser.currentScene.createNode("meta");
meta21.name = "reference";
meta21.content = "http://HAnim.org/Models/HAnim2001/boxman";
head1.meta[19] = meta21;

let meta22 = browser.currentScene.createNode("meta");
meta22.name = "reference";
meta22.content = "http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl";
head1.meta[20] = meta22;

let meta23 = browser.currentScene.createNode("meta");
meta23.name = "reference";
meta23.content = "http://www.vapourtech.com/team/james/boxman.wrl";
head1.meta[21] = meta23;

let meta24 = browser.currentScene.createNode("meta");
meta24.name = "reference";
meta24.content = "http://HAnim.org/Specifications/HAnim2001";
head1.meta[22] = meta24;

let meta25 = browser.currentScene.createNode("meta");
meta25.name = "reference";
meta25.content = "http://HAnim.org/Models";
head1.meta[23] = meta25;

let meta26 = browser.currentScene.createNode("meta");
meta26.name = "reference";
meta26.content = "http://HAnim.org/Nodes";
head1.meta[24] = meta26;

let meta27 = browser.currentScene.createNode("meta");
meta27.name = "reference";
meta27.content = "https://www.web3d.org/x3d/content/X3dToVrml97.xslt";
head1.meta[25] = meta27;

let meta28 = browser.currentScene.createNode("meta");
meta28.name = "rights";
meta28.content = "(C) 2000 James Smith - james@vapourtech.com";
head1.meta[26] = meta28;

let meta29 = browser.currentScene.createNode("meta");
meta29.name = "reference";
meta29.content = "http://www.vapourtech.com";
head1.meta[27] = meta29;

let meta30 = browser.currentScene.createNode("meta");
meta30.name = "subject";
meta30.content = "BoxMan HAnim 2.0";
head1.meta[28] = meta30;

let meta31 = browser.currentScene.createNode("meta");
meta31.name = "identifier";
meta31.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxManAnimationPanel.x3d";
head1.meta[29] = meta31;

let meta32 = browser.currentScene.createNode("meta");
meta32.name = "generator";
meta32.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[30] = meta32;

let meta33 = browser.currentScene.createNode("meta");
meta33.name = "license";
meta33.content = "../license.html";
head1.meta[31] = meta33;

head = head1;

let WorldInfo35 = browser.currentScene.createNode("WorldInfo");
WorldInfo35.info = new MFString(new java.lang.String["(C) 2000 James Smith - james@vapourtech.com","http://www.vapourtech.com/team/james/boxman.wrl","Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com"]);
WorldInfo35.title = "BoxMan - A Seamless VRML Human";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo35;

let Background36 = browser.currentScene.createNode("Background");
Background36.groundColor = new MFColor(new float[0.6,0.6,0.6]);
Background36.skyColor = new MFColor(new float[0.75,0.75,0.75]);
browser.currentScene.children[1] = Background36;

let HAnimHumanoid37 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid37.name = "Humanoid";
HAnimHumanoid37.DEF = "boxman_Humanoid";
HAnimHumanoid37.info = new MFString(new java.lang.String["authorName=James Smith","authorEmail=james@vapourtech.com","copyright=(C) 2000 James Smith - james@vapourtech.com","humanoidVersion=1.0"]);
HAnimHumanoid37.version = "1.0";
let HAnimJoint38 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint38.name = "humanoid_root";
HAnimJoint38.DEF = "boxman_humanoid_root";
HAnimJoint38.center = new SFVec3f(new float[0,0.9723,-0.0728]);
HAnimJoint38.skinCoordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9,10,11]);
HAnimJoint38.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint38.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint38.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment39 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment39.name = "sacrum";
HAnimSegment39.DEF = "boxman_sacrum";
let Transform40 = browser.currentScene.createNode("Transform");
Transform40.translation = new SFVec3f(new float[0,0.9723,-0.0728]);
let Shape41 = browser.currentScene.createNode("Shape");
Shape41.DEF = "SphereYellow";
let Appearance42 = browser.currentScene.createNode("Appearance");
let Material43 = browser.currentScene.createNode("Material");
Material43.diffuseColor = new SFColor(new float[1,1,0]);
Appearance42.material = Material43;

Shape41.appearance = Appearance42;

let Sphere44 = browser.currentScene.createNode("Sphere");
Sphere44.radius = 0.02;
Shape41.geometry = Sphere44;

Transform40.children = new MFNode();

Transform40.children[0] = Shape41;

HAnimSegment39.children = new MFNode();

HAnimSegment39.children[0] = Transform40;

HAnimJoint38.children = new MFNode();

HAnimJoint38.children[0] = HAnimSegment39;

let HAnimJoint45 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint45.name = "l_hip";
HAnimJoint45.DEF = "boxman_l_hip";
HAnimJoint45.center = new SFVec3f(new float[0.0956,0.9364,0]);
HAnimJoint45.skinCoordIndex = new MFInt32(new int[12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43]);
HAnimJoint45.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
HAnimJoint45.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint45.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment46 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment46.name = "l_thigh";
HAnimSegment46.DEF = "boxman_l_thigh";
let Transform47 = browser.currentScene.createNode("Transform");
Transform47.translation = new SFVec3f(new float[0.0956,0.9364,0]);
let Shape48 = browser.currentScene.createNode("Shape");
Shape48.USE = "SphereYellow";
Transform47.children = new MFNode();

Transform47.children[0] = Shape48;

HAnimSegment46.children = new MFNode();

HAnimSegment46.children[0] = Transform47;

HAnimJoint45.children = new MFNode();

HAnimJoint45.children[0] = HAnimSegment46;

let HAnimJoint49 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint49.name = "l_knee";
HAnimJoint49.DEF = "boxman_l_knee";
HAnimJoint49.center = new SFVec3f(new float[0.0956,0.5095,-0.0036]);
HAnimJoint49.skinCoordIndex = new MFInt32(new int[36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63]);
HAnimJoint49.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint49.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint49.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment50 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment50.name = "l_calf";
HAnimSegment50.DEF = "boxman_l_calf";
let Transform51 = browser.currentScene.createNode("Transform");
Transform51.translation = new SFVec3f(new float[0.0956,0.5095,-0.0036]);
let Shape52 = browser.currentScene.createNode("Shape");
Shape52.USE = "SphereYellow";
Transform51.children = new MFNode();

Transform51.children[0] = Shape52;

HAnimSegment50.children = new MFNode();

HAnimSegment50.children[0] = Transform51;

HAnimJoint49.children = new MFNode();

HAnimJoint49.children[0] = HAnimSegment50;

let HAnimJoint53 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint53.name = "l_ankle";
HAnimJoint53.DEF = "boxman_l_ankle";
HAnimJoint53.center = new SFVec3f(new float[0.0946,0.0762,-0.0261]);
HAnimJoint53.skinCoordIndex = new MFInt32(new int[64,65,66,67,68,69,70,71]);
HAnimJoint53.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint53.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint53.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment54 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment54.name = "l_hindfoot";
HAnimSegment54.DEF = "boxman_l_hindfoot";
let Transform55 = browser.currentScene.createNode("Transform");
Transform55.translation = new SFVec3f(new float[0.0946,0.0762,-0.0261]);
let Shape56 = browser.currentScene.createNode("Shape");
Shape56.USE = "SphereYellow";
Transform55.children = new MFNode();

Transform55.children[0] = Shape56;

HAnimSegment54.children = new MFNode();

HAnimSegment54.children[0] = Transform55;

HAnimJoint53.children = new MFNode();

HAnimJoint53.children[0] = HAnimSegment54;

let HAnimJoint57 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint57.name = "l_midtarsal";
HAnimJoint57.DEF = "boxman_l_midtarsal";
HAnimJoint57.center = new SFVec3f(new float[0.1079,0.0317,0.067]);
HAnimJoint57.skinCoordIndex = new MFInt32(new int[72,73,74,75,76,77,78,79]);
HAnimJoint57.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint57.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint57.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment58 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment58.name = "l_middistal";
HAnimSegment58.DEF = "boxman_l_middistal";
let Transform59 = browser.currentScene.createNode("Transform");
Transform59.translation = new SFVec3f(new float[0.1079,0.0317,0.067]);
let Shape60 = browser.currentScene.createNode("Shape");
Shape60.USE = "SphereYellow";
Transform59.children = new MFNode();

Transform59.children[0] = Shape60;

HAnimSegment58.children = new MFNode();

HAnimSegment58.children[0] = Transform59;

let HAnimSite61 = browser.currentScene.createNode("HAnimSite");
HAnimSite61.name = "l_middistal_tip";
HAnimSite61.DEF = "boxman_l_middistal_tip";
HAnimSite61.translation = new SFVec3f(new float[0.095,0.0005,0.1924]);
let Shape62 = browser.currentScene.createNode("Shape");
Shape62.DEF = "SphereRed";
let Appearance63 = browser.currentScene.createNode("Appearance");
let Material64 = browser.currentScene.createNode("Material");
Material64.diffuseColor = new SFColor(new float[1,0,0]);
Appearance63.material = Material64;

Shape62.appearance = Appearance63;

let Sphere65 = browser.currentScene.createNode("Sphere");
Sphere65.radius = 0.02;
Shape62.geometry = Sphere65;

HAnimSite61.children = new MFNode();

HAnimSite61.children[0] = Shape62;

HAnimSegment58.children[1] = HAnimSite61;

HAnimJoint57.children = new MFNode();

HAnimJoint57.children[0] = HAnimSegment58;

HAnimJoint53.children[1] = HAnimJoint57;

HAnimJoint49.children[1] = HAnimJoint53;

HAnimJoint45.children[1] = HAnimJoint49;

HAnimJoint38.children[1] = HAnimJoint45;

let HAnimJoint66 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint66.name = "r_hip";
HAnimJoint66.DEF = "boxman_r_hip";
HAnimJoint66.center = new SFVec3f(new float[-0.0956,0.9364,0]);
HAnimJoint66.skinCoordIndex = new MFInt32(new int[80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111]);
HAnimJoint66.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
HAnimJoint66.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint66.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment67 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment67.name = "r_thigh";
HAnimSegment67.DEF = "boxman_r_thigh";
let Transform68 = browser.currentScene.createNode("Transform");
Transform68.translation = new SFVec3f(new float[-0.0956,0.9364,0]);
let Shape69 = browser.currentScene.createNode("Shape");
Shape69.USE = "SphereYellow";
Transform68.children = new MFNode();

Transform68.children[0] = Shape69;

HAnimSegment67.children = new MFNode();

HAnimSegment67.children[0] = Transform68;

HAnimJoint66.children = new MFNode();

HAnimJoint66.children[0] = HAnimSegment67;

let HAnimJoint70 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint70.name = "r_knee";
HAnimJoint70.DEF = "boxman_r_knee";
HAnimJoint70.center = new SFVec3f(new float[-0.0956,0.5095,-0.0036]);
HAnimJoint70.skinCoordIndex = new MFInt32(new int[104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131]);
HAnimJoint70.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint70.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint70.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment71 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment71.name = "r_calf";
HAnimSegment71.DEF = "boxman_r_calf";
let Transform72 = browser.currentScene.createNode("Transform");
Transform72.translation = new SFVec3f(new float[-0.0956,0.5095,-0.0036]);
let Shape73 = browser.currentScene.createNode("Shape");
Shape73.USE = "SphereYellow";
Transform72.children = new MFNode();

Transform72.children[0] = Shape73;

HAnimSegment71.children = new MFNode();

HAnimSegment71.children[0] = Transform72;

HAnimJoint70.children = new MFNode();

HAnimJoint70.children[0] = HAnimSegment71;

let HAnimJoint74 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint74.name = "r_ankle";
HAnimJoint74.DEF = "boxman_r_ankle";
HAnimJoint74.center = new SFVec3f(new float[-0.0946,0.0762,-0.0261]);
HAnimJoint74.skinCoordIndex = new MFInt32(new int[132,133,134,135,136,137,138,139]);
HAnimJoint74.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint74.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint74.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment75 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment75.name = "r_hindfoot";
HAnimSegment75.DEF = "boxman_r_hindfoot";
let Transform76 = browser.currentScene.createNode("Transform");
Transform76.translation = new SFVec3f(new float[-0.0946,0.0762,-0.0261]);
let Shape77 = browser.currentScene.createNode("Shape");
Shape77.USE = "SphereYellow";
Transform76.children = new MFNode();

Transform76.children[0] = Shape77;

HAnimSegment75.children = new MFNode();

HAnimSegment75.children[0] = Transform76;

HAnimJoint74.children = new MFNode();

HAnimJoint74.children[0] = HAnimSegment75;

let HAnimJoint78 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint78.name = "r_midtarsal";
HAnimJoint78.DEF = "boxman_r_midtarsal";
HAnimJoint78.center = new SFVec3f(new float[-0.1079,0.0317,0.067]);
HAnimJoint78.skinCoordIndex = new MFInt32(new int[140,141,142,143,144,145,146,147]);
HAnimJoint78.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint78.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint78.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment79 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment79.name = "r_middistal";
HAnimSegment79.DEF = "boxman_r_middistal";
let Transform80 = browser.currentScene.createNode("Transform");
Transform80.translation = new SFVec3f(new float[-0.1079,0.0317,0.067]);
let Shape81 = browser.currentScene.createNode("Shape");
Shape81.USE = "SphereYellow";
Transform80.children = new MFNode();

Transform80.children[0] = Shape81;

HAnimSegment79.children = new MFNode();

HAnimSegment79.children[0] = Transform80;

let HAnimSite82 = browser.currentScene.createNode("HAnimSite");
HAnimSite82.name = "r_middistal_tip";
HAnimSite82.DEF = "boxman_r_middistal_tip";
HAnimSite82.translation = new SFVec3f(new float[-0.095,0.0005,0.1924]);
let Shape83 = browser.currentScene.createNode("Shape");
Shape83.USE = "SphereRed";
HAnimSite82.children = new MFNode();

HAnimSite82.children[0] = Shape83;

HAnimSegment79.children[1] = HAnimSite82;

HAnimJoint78.children = new MFNode();

HAnimJoint78.children[0] = HAnimSegment79;

HAnimJoint74.children[1] = HAnimJoint78;

HAnimJoint70.children[1] = HAnimJoint74;

HAnimJoint66.children[1] = HAnimJoint70;

HAnimJoint38.children[2] = HAnimJoint66;

let HAnimJoint84 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint84.name = "vl5";
HAnimJoint84.DEF = "boxman_vl5";
HAnimJoint84.center = new SFVec3f(new float[0,1.0817,-0.0728]);
HAnimJoint84.skinCoordIndex = new MFInt32(new int[148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167]);
HAnimJoint84.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint84.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint84.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment85 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment85.name = "l5";
HAnimSegment85.DEF = "boxman_l5";
let Transform86 = browser.currentScene.createNode("Transform");
Transform86.translation = new SFVec3f(new float[0,1.0817,-0.0728]);
let Shape87 = browser.currentScene.createNode("Shape");
Shape87.USE = "SphereYellow";
Transform86.children = new MFNode();

Transform86.children[0] = Shape87;

HAnimSegment85.children = new MFNode();

HAnimSegment85.children[0] = Transform86;

HAnimJoint84.children = new MFNode();

HAnimJoint84.children[0] = HAnimSegment85;

let HAnimJoint88 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint88.name = "skullbase";
HAnimJoint88.DEF = "boxman_skullbase";
HAnimJoint88.center = new SFVec3f(new float[0,1.644,0.036]);
HAnimJoint88.skinCoordIndex = new MFInt32(new int[168,169,170,171,172,173,174,175]);
HAnimJoint88.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint88.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint88.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment89 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment89.name = "skull";
HAnimSegment89.DEF = "boxman_skull";
let Transform90 = browser.currentScene.createNode("Transform");
Transform90.translation = new SFVec3f(new float[0,1.644,0.036]);
let Shape91 = browser.currentScene.createNode("Shape");
Shape91.USE = "SphereYellow";
Transform90.children = new MFNode();

Transform90.children[0] = Shape91;

HAnimSegment89.children = new MFNode();

HAnimSegment89.children[0] = Transform90;

let HAnimSite92 = browser.currentScene.createNode("HAnimSite");
HAnimSite92.name = "skull_tip";
HAnimSite92.DEF = "boxman_skull_tip";
HAnimSite92.translation = new SFVec3f(new float[-0.0029,1.7771,0.0274]);
let Shape93 = browser.currentScene.createNode("Shape");
Shape93.USE = "SphereYellow";
HAnimSite92.children = new MFNode();

HAnimSite92.children[0] = Shape93;

HAnimSegment89.children[1] = HAnimSite92;

HAnimJoint88.children = new MFNode();

HAnimJoint88.children[0] = HAnimSegment89;

HAnimJoint84.children[1] = HAnimJoint88;

let HAnimJoint94 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint94.name = "l_shoulder";
HAnimJoint94.DEF = "boxman_l_shoulder";
HAnimJoint94.center = new SFVec3f(new float[0.1968,1.4642,-0.0265]);
HAnimJoint94.skinCoordIndex = new MFInt32(new int[176,177,178,179,180,181,182,183]);
HAnimJoint94.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint94.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint94.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment95 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment95.name = "l_upperarm";
HAnimSegment95.DEF = "boxman_l_upperarm";
let Transform96 = browser.currentScene.createNode("Transform");
Transform96.translation = new SFVec3f(new float[0.1968,1.4642,-0.0265]);
let Shape97 = browser.currentScene.createNode("Shape");
Shape97.USE = "SphereYellow";
Transform96.children = new MFNode();

Transform96.children[0] = Shape97;

HAnimSegment95.children = new MFNode();

HAnimSegment95.children[0] = Transform96;

HAnimJoint94.children = new MFNode();

HAnimJoint94.children[0] = HAnimSegment95;

let HAnimJoint98 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint98.name = "l_elbow";
HAnimJoint98.DEF = "boxman_l_elbow";
HAnimJoint98.center = new SFVec3f(new float[0.1982,1.1622,-0.0557]);
HAnimJoint98.skinCoordIndex = new MFInt32(new int[184,185,186,187,188,189,190,191]);
HAnimJoint98.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint98.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint98.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment99 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment99.name = "l_forearm";
HAnimSegment99.DEF = "boxman_l_forearm";
let Transform100 = browser.currentScene.createNode("Transform");
Transform100.translation = new SFVec3f(new float[0.1982,1.1622,-0.0557]);
let Shape101 = browser.currentScene.createNode("Shape");
Shape101.USE = "SphereYellow";
Transform100.children = new MFNode();

Transform100.children[0] = Shape101;

HAnimSegment99.children = new MFNode();

HAnimSegment99.children[0] = Transform100;

HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimSegment99;

let HAnimJoint102 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint102.name = "l_wrist";
HAnimJoint102.DEF = "boxman_l_wrist";
HAnimJoint102.center = new SFVec3f(new float[0.1972,0.8929,-0.069]);
HAnimJoint102.skinCoordIndex = new MFInt32(new int[192,193,194,195,196,197,198,199]);
HAnimJoint102.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint102.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint102.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment103 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment103.name = "l_hand";
HAnimSegment103.DEF = "boxman_l_hand";
let Transform104 = browser.currentScene.createNode("Transform");
Transform104.translation = new SFVec3f(new float[0.1972,0.8929,-0.069]);
let Shape105 = browser.currentScene.createNode("Shape");
Shape105.USE = "SphereYellow";
Transform104.children = new MFNode();

Transform104.children[0] = Shape105;

HAnimSegment103.children = new MFNode();

HAnimSegment103.children[0] = Transform104;

let HAnimSite106 = browser.currentScene.createNode("HAnimSite");
HAnimSite106.name = "l_hand_tip";
HAnimSite106.DEF = "boxman_l_hand_tip";
HAnimSite106.translation = new SFVec3f(new float[0.1912,0.6976,-0.071]);
let Shape107 = browser.currentScene.createNode("Shape");
Shape107.USE = "SphereRed";
HAnimSite106.children = new MFNode();

HAnimSite106.children[0] = Shape107;

HAnimSegment103.children[1] = HAnimSite106;

HAnimJoint102.children = new MFNode();

HAnimJoint102.children[0] = HAnimSegment103;

HAnimJoint98.children[1] = HAnimJoint102;

HAnimJoint94.children[1] = HAnimJoint98;

HAnimJoint84.children[2] = HAnimJoint94;

let HAnimJoint108 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint108.name = "r_shoulder";
HAnimJoint108.DEF = "boxman_r_shoulder";
HAnimJoint108.center = new SFVec3f(new float[-0.1968,1.4642,-0.0265]);
HAnimJoint108.skinCoordIndex = new MFInt32(new int[200,201,202,203,204,205,206,207]);
HAnimJoint108.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint108.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint108.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment109 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment109.name = "r_upperarm";
HAnimSegment109.DEF = "boxman_r_upperarm";
let Transform110 = browser.currentScene.createNode("Transform");
Transform110.translation = new SFVec3f(new float[-0.1968,1.4642,-0.0265]);
let Shape111 = browser.currentScene.createNode("Shape");
Shape111.USE = "SphereYellow";
Transform110.children = new MFNode();

Transform110.children[0] = Shape111;

HAnimSegment109.children = new MFNode();

HAnimSegment109.children[0] = Transform110;

HAnimJoint108.children = new MFNode();

HAnimJoint108.children[0] = HAnimSegment109;

let HAnimJoint112 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint112.name = "r_elbow";
HAnimJoint112.DEF = "boxman_r_elbow";
HAnimJoint112.center = new SFVec3f(new float[-0.1982,1.1622,-0.0557]);
HAnimJoint112.skinCoordIndex = new MFInt32(new int[208,209,210,211,212,213,214,215]);
HAnimJoint112.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint112.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint112.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment113 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment113.name = "r_forearm";
HAnimSegment113.DEF = "boxman_r_forearm";
let Transform114 = browser.currentScene.createNode("Transform");
Transform114.translation = new SFVec3f(new float[-0.1982,1.1622,-0.0557]);
let Shape115 = browser.currentScene.createNode("Shape");
Shape115.USE = "SphereYellow";
Transform114.children = new MFNode();

Transform114.children[0] = Shape115;

HAnimSegment113.children = new MFNode();

HAnimSegment113.children[0] = Transform114;

HAnimJoint112.children = new MFNode();

HAnimJoint112.children[0] = HAnimSegment113;

let HAnimJoint116 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint116.name = "r_wrist";
HAnimJoint116.DEF = "boxman_r_wrist";
HAnimJoint116.center = new SFVec3f(new float[-0.1972,0.8929,-0.069]);
HAnimJoint116.skinCoordIndex = new MFInt32(new int[216,217,218,219,220,221,222,223]);
HAnimJoint116.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint116.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint116.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment117 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment117.name = "r_hand";
HAnimSegment117.DEF = "boxman_r_hand";
let Transform118 = browser.currentScene.createNode("Transform");
Transform118.translation = new SFVec3f(new float[-0.1972,0.8929,-0.069]);
let Shape119 = browser.currentScene.createNode("Shape");
Shape119.USE = "SphereYellow";
Transform118.children = new MFNode();

Transform118.children[0] = Shape119;

HAnimSegment117.children = new MFNode();

HAnimSegment117.children[0] = Transform118;

let HAnimSite120 = browser.currentScene.createNode("HAnimSite");
HAnimSite120.name = "r_hand_tip";
HAnimSite120.DEF = "boxman_r_hand_tip";
HAnimSite120.translation = new SFVec3f(new float[-0.1912,0.6976,-0.071]);
let Shape121 = browser.currentScene.createNode("Shape");
Shape121.USE = "SphereRed";
HAnimSite120.children = new MFNode();

HAnimSite120.children[0] = Shape121;

HAnimSegment117.children[1] = HAnimSite120;

HAnimJoint116.children = new MFNode();

HAnimJoint116.children[0] = HAnimSegment117;

HAnimJoint112.children[1] = HAnimJoint116;

HAnimJoint108.children[1] = HAnimJoint112;

HAnimJoint84.children[3] = HAnimJoint108;

HAnimJoint38.children[3] = HAnimJoint84;

HAnimHumanoid37.joints = new MFNode();

HAnimHumanoid37.joints[0] = HAnimJoint38;

//# sacrum (12) # l_thigh (28) # l_calf (24) # l_hindfoot (8) # l_middistal (8) # r_thigh (28) # r_calf (24) # r_hindfoot (8) # r_middistal (8) # l5 (20) # skull (8) # l_upperarm (8) # l_forearm (8) # l_hand (8) # r_upperarm (8) # r_forearm (8) # r_hand (8)
//Coordinate DEF='SKINCOORD2' containerField='skinCoord' point='-0.05 1 0.05 0.05 1 0.05 0.03 0.97 -0.1 -0.03 0.97 -0.1 0.03 0.94 -0.075 -0.03 0.94 -0.075 0 0.92 0 0 0.94 0.03 -0.12 1.06 0.05 0.12 1.06 0.05 0.12 1.06 -0.1 -0.12 1.06 -0.1 0.0456 0.9364 0.05 0.1456 0.9364 0.05 0.1456 0.9364 -0.05 0.0456 0.9364 -0.05 0.0456 0.9 0.05 0.1456 0.9 0.05 0.1456 0.9 -0.05 0.0456 0.9 -0.05 0.0456 0.8 0.05 0.1456 0.8 0.05 0.1456 0.8 -0.05 0.0456 0.8 -0.05 0.0456 0.7 0.05 0.1456 0.7 0.05 0.1456 0.7 -0.05 0.0456 0.7 -0.05 0.0456 0.6 0.05 0.1456 0.6 0.05 0.1456 0.6 -0.05 0.0456 0.6 -0.05 0.0456 0.55 0.05 0.1456 0.55 0.05 0.1456 0.55 -0.05 0.0456 0.55 -0.05 0.0456 0.52 0.05 0.1456 0.52 0.05 0.1456 0.52 -0.05 0.0456 0.52 -0.05 0.0456 0.5 0.05 0.1456 0.5 0.05 0.1456 0.5 -0.05 0.0456 0.5 -0.05 0.0454 0.43 0.045 0.1454 0.43 0.045 0.1454 0.43 -0.055 0.0454 0.43 -0.055 0.0452 0.36 0.04 0.1452 0.36 0.04 0.1452 0.36 -0.06 0.0452 0.36 -0.06 0.045 0.29 0.035 0.145 0.29 0.035 0.145 0.29 -0.065 0.045 0.29 -0.065 0.0448 0.21 0.03 0.1448 0.21 0.03 0.1448 0.21 -0.07 0.0448 0.21 -0.07 0.0446 0.1262 0.025 0.1446 0.1262 0.025 0.1446 0.1262 -0.075 0.0446 0.1262 -0.075 0.0446 0.0702038 0.02464698 0.1446 0.0702038 0.02464698 0.1446 0.006264479 -0.08360368 0.0446 0.006264479 -0.08360368 0.0446 0.046587 0.05407905 0.1446 0.046587 0.05407905 0.1446 -0.009224742 0.0474844 0.0446 -0.009224742 0.0474844 0.0446 0.04306673 0.0838718 0.1446 0.04306673 0.0838718 0.1446 -0.01274502 0.07727715 0.0446 -0.01274502 0.07727715 0.0446 0.03069882 0.1885436 0.1446 0.03069882 0.1885436 0.1446 -0.02511293 0.181949 0.0446 -0.02511293 0.181949 -0.0456 0.9861611 0.004881433 -0.1456 0.9861611 0.004881433 -0.1456 0.8866388 -0.004881474 -0.0456 0.8866388 -0.004881474 -0.0456 0.9826074 0.04110757 -0.1456 0.9826074 0.04110757 -0.1456 0.8830851 0.03134466 -0.0456 0.8830851 0.03134466 -0.0456 0.9728445 0.1406298 -0.1456 0.9728445 0.1406298 -0.1456 0.8733222 0.1308669 -0.0456 0.8733222 0.1308669 -0.0456 0.9630816 0.2401521 -0.1456 0.9630816 0.2401521 -0.1456 0.8635593 0.2303892 -0.0456 0.8635593 0.2303892 -0.0456 0.9533187 0.3396744 -0.1456 0.9533187 0.3396744 -0.1456 0.8537964 0.3299115 -0.0456 0.8537964 0.3299115 -0.0456 0.9484373 0.3894355 -0.1456 0.9484373 0.3894355 -0.1456 0.848915 0.3796726 -0.0456 0.848915 0.3796726 -0.0456 0.94468 0.4147483 -0.1456 0.94468 0.4147483 -0.1456 0.8450468 0.4134411 -0.0456 0.8450468 0.4134411 -0.0456 0.9444185 0.4346749 -0.1456 0.9444185 0.4346749 -0.1456 0.8447853 0.4333678 -0.0456 0.8447853 0.4333678 -0.0454 0.9452982 0.5003315 -0.1454 0.9452982 0.5003315 -0.1454 0.8455541 0.5074801 -0.0454 0.8455541 0.5074801 -0.0452 0.945315 0.5705098 -0.1452 0.945315 0.5705098 -0.1452 0.8455709 0.5776584 -0.0452 0.8455709 0.5776584 -0.045 0.9453319 0.6406881 -0.145 0.9453319 0.6406881 -0.145 0.8455877 0.6478368 -0.045 0.8455877 0.6478368 -0.0448 0.9460636 0.7208409 -0.1448 0.9460636 0.7208409 -0.1448 0.8463194 0.7279896 -0.0448 0.8463194 0.7279896 -0.0446 0.947067 0.8047839 -0.1446 0.947067 0.8047839 -0.1446 0.8473228 0.8119326 -0.0446 0.8473228 0.8119326 -0.0446 0.9507178 0.8606621 -0.1446 0.9507178 0.8606621 -0.1446 0.847315 0.9321763 -0.0446 0.847315 0.9321763 -0.0446 0.9817629 0.8821145 -0.1446 0.9817629 0.8821145 -0.1446 0.9791749 0.9382548 -0.0446 0.9791749 0.9382548 -0.0446 1.011731 0.883496 -0.1446 1.011731 0.883496 -0.1446 1.009143 0.9396363 -0.0446 1.009143 0.9396363 -0.0446 1.117019 0.8883496 -0.1446 1.117019 0.8883496 -0.1446 1.114431 0.94449 -0.0446 1.114431 0.94449 -0.12 1.1 0.05 0.12 1.1 0.05 0.12 1.1 -0.1 -0.12 1.1 -0.1 -0.14 1.42 0.045 0.14 1.42 0.045 0.14 1.42 -0.09 -0.14 1.42 -0.09 -0.24 1.52 0.035 0.24 1.52 0.035 0.24 1.52 -0.09 -0.24 1.52 -0.09 -0.05 1.56 0.03 0.05 1.56 0.03 0.05 1.56 -0.06 -0.05 1.56 -0.06 -0.05 1.6 0.06 0.05 1.6 0.06 0.05 1.62 -0.03 -0.05 1.62 -0.03 -0.07 1.781247 0.1236818 0.07 1.781247 0.1236818 0.07 1.77377 -0.03614335 -0.07 1.77377 -0.03614335 -0.07 1.604441 0.1319535 0.07 1.604441 0.1319535 0.07 1.656898 -0.03067561 -0.07 1.656898 -0.03067561 0.2016854 1.406894 0.015 0.2023709 1.520029 0.015 0.2023709 1.520029 -0.075 0.2016854 1.406894 -0.075 0.3774735 1.243191 -0.025 0.4201562 1.28536 -0.025 0.4201562 1.28536 -0.085 0.3774735 1.243191 -0.085 0.4055858 1.214736 -0.025 0.4482685 1.256904 -0.025 0.4482685 1.256904 -0.085 0.4055858 1.214736 -0.085 0.5743457 1.058147 -0.05 0.6028008 1.086259 -0.05 0.6028008 1.086259 -0.09 0.5743457 1.058147 -0.09 0.6024581 1.029692 -0.02 0.6309132 1.057804 -0.02 0.6309132 1.057804 -0.1 0.6024581 1.029692 -0.1 0.7236224 0.9070502 -0.02 0.7520775 0.9351625 -0.02 0.7520775 0.9351625 -0.1 0.7236224 0.9070502 -0.1 -0.2016854 1.406894 0.015 -0.2023709 1.520029 0.015 -0.2023709 1.520029 -0.075 -0.2016854 1.406894 -0.075 -0.3774735 1.243191 -0.025 -0.4201562 1.28536 -0.025 -0.4201562 1.28536 -0.085 -0.3774735 1.243191 -0.085 -0.4055858 1.214736 -0.025 -0.4482685 1.256904 -0.025 -0.4482685 1.256904 -0.085 -0.4055858 1.214736 -0.085 -0.5743457 1.058147 -0.05 -0.6028008 1.086259 -0.05 -0.6028008 1.086259 -0.09 -0.5743457 1.058147 -0.09 -0.6024581 1.029692 -0.02 -0.6309132 1.057804 -0.02 -0.6309132 1.057804 -0.1 -0.6024581 1.029692 -0.1 -0.7236224 0.9070502 -0.02 -0.7520775 0.9351625 -0.02 -0.7520775 0.9351625 -0.1 -0.7236224 0.9070502 -0.1'/
//top-level joint references
//top-level segment references
//top-level site references
let Coordinate122 = browser.currentScene.createNode("Coordinate");
Coordinate122.DEF = "SKINCOORD";
Coordinate122.point = new MFVec3f(new float[-0.05,1,0.05,0.05,1,0.05,0.03,0.97,-0.1,-0.03,0.97,-0.1,0.03,0.94,-0.075,-0.03,0.94,-0.075,0,0.92,0,0,0.94,0.03,-0.12,1.06,0.05,0.12,1.06,0.05,0.12,1.06,-0.1,-0.12,1.06,-0.1,0.0456,0.9364,0.05,0.1456,0.9364,0.05,0.1456,0.9364,-0.05,0.0456,0.9364,-0.05,0.0456,0.9,0.05,0.1456,0.9,0.05,0.1456,0.9,-0.05,0.0456,0.9,-0.05,0.0456,0.8,0.05,0.1456,0.8,0.05,0.1456,0.8,-0.05,0.0456,0.8,-0.05,0.0456,0.7,0.05,0.1456,0.7,0.05,0.1456,0.7,-0.05,0.0456,0.7,-0.05,0.0456,0.6,0.05,0.1456,0.6,0.05,0.1456,0.6,-0.05,0.0456,0.6,-0.05,0.0456,0.55,0.05,0.1456,0.55,0.05,0.1456,0.55,-0.05,0.0456,0.55,-0.05,0.0456,0.52,0.05,0.1456,0.52,0.05,0.1456,0.52,-0.05,0.0456,0.52,-0.05,0.0456,0.5,0.05,0.1456,0.5,0.05,0.1456,0.5,-0.05,0.0456,0.5,-0.05,0.0454,0.43,0.045,0.1454,0.43,0.045,0.1454,0.43,-0.055,0.0454,0.43,-0.055,0.0452,0.36,0.04,0.1452,0.36,0.04,0.1452,0.36,-0.06,0.0452,0.36,-0.06,0.045,0.29,0.035,0.145,0.29,0.035,0.145,0.29,-0.065,0.045,0.29,-0.065,0.0448,0.21,0.03,0.1448,0.21,0.03,0.1448,0.21,-0.07,0.0448,0.21,-0.07,0.0446,0.1262,0.025,0.1446,0.1262,0.025,0.1446,0.1262,-0.075,0.0446,0.1262,-0.075,0.0446,0.0762,0.025,0.1446,0.0762,0.025,0.1446,0,-0.075,0.0446,0,-0.075,0.0446,0.0562,0.057,0.1446,0.0562,0.057,0.1446,0,0.057,0.0446,0,0.057,0.0446,0.0562,0.087,0.1446,0.0562,0.087,0.1446,0,0.087,0.0446,0,0.087,0.0446,0.0562,0.1924,0.1446,0.0562,0.1924,0.1446,0,0.1924,0.0446,0,0.1924,-0.0456,0.9364,0.05,-0.1456,0.9364,0.05,-0.1456,0.9364,-0.05,-0.0456,0.9364,-0.05,-0.0456,0.9,0.05,-0.1456,0.9,0.05,-0.1456,0.9,-0.05,-0.0456,0.9,-0.05,-0.0456,0.8,0.05,-0.1456,0.8,0.05,-0.1456,0.8,-0.05,-0.0456,0.8,-0.05,-0.0456,0.7,0.05,-0.1456,0.7,0.05,-0.1456,0.7,-0.05,-0.0456,0.7,-0.05,-0.0456,0.6,0.05,-0.1456,0.6,0.05,-0.1456,0.6,-0.05,-0.0456,0.6,-0.05,-0.0456,0.55,0.05,-0.1456,0.55,0.05,-0.1456,0.55,-0.05,-0.0456,0.55,-0.05,-0.0456,0.52,0.05,-0.1456,0.52,0.05,-0.1456,0.52,-0.05,-0.0456,0.52,-0.05,-0.0456,0.5,0.05,-0.1456,0.5,0.05,-0.1456,0.5,-0.05,-0.0456,0.5,-0.05,-0.0454,0.43,0.045,-0.1454,0.43,0.045,-0.1454,0.43,-0.055,-0.0454,0.43,-0.055,-0.0452,0.36,0.04,-0.1452,0.36,0.04,-0.1452,0.36,-0.06,-0.0452,0.36,-0.06,-0.045,0.29,0.035,-0.145,0.29,0.035,-0.145,0.29,-0.065,-0.045,0.29,-0.065,-0.0448,0.21,0.03,-0.1448,0.21,0.03,-0.1448,0.21,-0.07,-0.0448,0.21,-0.07,-0.0446,0.1262,0.025,-0.1446,0.1262,0.025,-0.1446,0.1262,-0.075,-0.0446,0.1262,-0.075,-0.0446,0.0762,0.025,-0.1446,0.0762,0.025,-0.1446,0,-0.075,-0.0446,0,-0.075,-0.0446,0.0562,0.057,-0.1446,0.0562,0.057,-0.1446,0,0.057,-0.0446,0,0.057,-0.0446,0.0562,0.087,-0.1446,0.0562,0.087,-0.1446,0,0.087,-0.0446,0,0.087,-0.0446,0.0562,0.1924,-0.1446,0.0562,0.1924,-0.1446,0,0.1924,-0.0446,0,0.1924,-0.12,1.1,0.05,0.12,1.1,0.05,0.12,1.1,-0.1,-0.12,1.1,-0.1,-0.14,1.42,0.045,0.14,1.42,0.045,0.14,1.42,-0.09,-0.14,1.42,-0.09,-0.24,1.52,0.035,0.24,1.52,0.035,0.24,1.52,-0.09,-0.24,1.52,-0.09,-0.05,1.56,0.03,0.05,1.56,0.03,0.05,1.56,-0.06,-0.05,1.56,-0.06,-0.05,1.6,0.06,0.05,1.6,0.06,0.05,1.62,-0.03,-0.05,1.62,-0.03,-0.07,1.777,0.13,0.07,1.777,0.13,0.07,1.777,-0.03,-0.07,1.777,-0.03,-0.07,1.6,0.13,0.07,1.6,0.13,0.07,1.66,-0.03,-0.07,1.66,-0.03,0.16,1.42,0.015,0.24,1.5,0.015,0.24,1.5,-0.075,0.16,1.42,-0.075,0.17,1.18,-0.025,0.23,1.18,-0.025,0.23,1.18,-0.085,0.17,1.18,-0.085,0.17,1.14,-0.025,0.23,1.14,-0.025,0.23,1.14,-0.085,0.17,1.14,-0.085,0.18,0.91,-0.05,0.22,0.91,-0.05,0.22,0.91,-0.09,0.18,0.91,-0.09,0.18,0.87,-0.02,0.22,0.87,-0.02,0.22,0.87,-0.1,0.18,0.87,-0.1,0.18,0.6976,-0.02,0.22,0.6976,-0.02,0.22,0.6976,-0.1,0.18,0.6976,-0.1,-0.16,1.42,0.015,-0.24,1.5,0.015,-0.24,1.5,-0.075,-0.16,1.42,-0.075,-0.17,1.18,-0.025,-0.23,1.18,-0.025,-0.23,1.18,-0.085,-0.17,1.18,-0.085,-0.17,1.14,-0.025,-0.23,1.14,-0.025,-0.23,1.14,-0.085,-0.17,1.14,-0.085,-0.18,0.91,-0.05,-0.22,0.91,-0.05,-0.22,0.91,-0.09,-0.18,0.91,-0.09,-0.18,0.87,-0.02,-0.22,0.87,-0.02,-0.22,0.87,-0.1,-0.18,0.87,-0.1,-0.18,0.6976,-0.02,-0.22,0.6976,-0.02,-0.22,0.6976,-0.1,-0.18,0.6976,-0.1]);
HAnimHumanoid37.skinCoord = Coordinate122;

let Group123 = browser.currentScene.createNode("Group");
let Shape124 = browser.currentScene.createNode("Shape");
Shape124.DEF = "TrouserSkin";
let Appearance125 = browser.currentScene.createNode("Appearance");
let Material126 = browser.currentScene.createNode("Material");
Material126.diffuseColor = new SFColor(new float[0,0,1]);
Material126.transparency = 0.5;
Appearance125.material = Material126;

Shape124.appearance = Appearance125;

//# 0: sacrum (8) # 1: l_hip joint (8) # 2: r_hip joint (8) # 3: l_thigh (48) # 4: l_knee joint (8) # 5: l_calf (40) # 10: r_thigh (48) # 11: r_knee joint (8) # 12: r_calf (40)
let IndexedFaceSet127 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet127.coordIndex = new MFInt32(new int[0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1]);
let Coordinate128 = browser.currentScene.createNode("Coordinate");
Coordinate128.USE = "SKINCOORD";
IndexedFaceSet127.coord = Coordinate128;

Shape124.geometry = IndexedFaceSet127;

Group123.children = new MFNode();

Group123.children[0] = Shape124;

let Shape129 = browser.currentScene.createNode("Shape");
Shape129.DEF = "ShoeSkin";
let Appearance130 = browser.currentScene.createNode("Appearance");
let Material131 = browser.currentScene.createNode("Material");
Material131.diffuseColor = new SFColor(new float[0,0,0]);
Material131.transparency = 0.5;
Appearance130.material = Material131;

Shape129.appearance = Appearance130;

//# 6: l_ankle joint (8) # 7: l_hindfoot (8) # 8: l_midtarsal joint (8) # 9: l_middistal (10) # 13: r_ankle joint (8) # 14: r_hindfoot (8) # 15: r_midtarsal joint (8) # 16: r_middistal (10)
let IndexedFaceSet132 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet132.coordIndex = new MFInt32(new int[60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1]);
let Coordinate133 = browser.currentScene.createNode("Coordinate");
Coordinate133.USE = "SKINCOORD";
IndexedFaceSet132.coord = Coordinate133;

Shape129.geometry = IndexedFaceSet132;

Group123.children[1] = Shape129;

let Shape134 = browser.currentScene.createNode("Shape");
Shape134.DEF = "ShirtSkin";
let Appearance135 = browser.currentScene.createNode("Appearance");
let Material136 = browser.currentScene.createNode("Material");
Material136.diffuseColor = new SFColor(new float[1,1,0]);
Material136.transparency = 0.5;
Appearance135.material = Material136;

Shape134.appearance = Appearance135;

//# 17: vl5_joint (8) # 18: l5 (28) # 21: l_shoulder joint (8) # 22: l_upperarm (8) # 23: l_elbow joint (8) # 24: l_forearm (8) # 27: r_shoulder joint (8) # 28: r_upperarm (8) # 29: r_elbow joint (8) # 30: r_forearm (8)
let IndexedFaceSet137 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet137.coordIndex = new MFInt32(new int[148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1]);
let Coordinate138 = browser.currentScene.createNode("Coordinate");
Coordinate138.USE = "SKINCOORD";
IndexedFaceSet137.coord = Coordinate138;

Shape134.geometry = IndexedFaceSet137;

Group123.children[2] = Shape134;

let Shape139 = browser.currentScene.createNode("Shape");
Shape139.DEF = "HeadHandsFleshToneSkin";
let Appearance140 = browser.currentScene.createNode("Appearance");
let Material141 = browser.currentScene.createNode("Material");
Material141.diffuseColor = new SFColor(new float[1,0.75,0.75]);
Material141.transparency = 0.5;
Appearance140.material = Material141;

Shape139.appearance = Appearance140;

//# 19: skullbase joint (8) # 20: skull (10) # 25: l_wrist joint (8) # 26: l_hand (10) # 31: r_wrist joint (8) # 32: r_hand (10)
let IndexedFaceSet142 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet142.coordIndex = new MFInt32(new int[172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
let Coordinate143 = browser.currentScene.createNode("Coordinate");
Coordinate143.USE = "SKINCOORD";
IndexedFaceSet142.coord = Coordinate143;

Shape139.geometry = IndexedFaceSet142;

Group123.children[3] = Shape139;

let Shape144 = browser.currentScene.createNode("Shape");
Shape144.DEF = "SkinLines";
let Appearance145 = browser.currentScene.createNode("Appearance");
let Material146 = browser.currentScene.createNode("Material");
Material146.diffuseColor = new SFColor(new float[0,0,0]);
Appearance145.material = Material146;

Shape144.appearance = Appearance145;

//Combined set of prior IFS coordIndex values
let IndexedLineSet147 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet147.coordIndex = new MFInt32(new int[0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
let Coordinate148 = browser.currentScene.createNode("Coordinate");
Coordinate148.USE = "SKINCOORD";
IndexedLineSet147.coord = Coordinate148;

Shape144.geometry = IndexedLineSet147;

Group123.children[4] = Shape144;

HAnimHumanoid37.skin[1] = Group123;

let HAnimSite149 = browser.currentScene.createNode("HAnimSite");
HAnimSite149.name = "BoxMan_view";
HAnimSite149.DEF = "boxman_BoxMan_view";
let Viewpoint150 = browser.currentScene.createNode("Viewpoint");
Viewpoint150.DEF = "Inclined_View";
Viewpoint150.description = "Inclined View";
Viewpoint150.orientation = new SFRotation(new float[0,1,0,0.78]);
Viewpoint150.position = new SFVec3f(new float[2,0.9,2]);
HAnimSite149.children = new MFNode();

HAnimSite149.children[0] = Viewpoint150;

let Viewpoint151 = browser.currentScene.createNode("Viewpoint");
Viewpoint151.DEF = "Front_View";
Viewpoint151.description = "Front View";
Viewpoint151.position = new SFVec3f(new float[0,1,3]);
HAnimSite149.children[1] = Viewpoint151;

let Viewpoint152 = browser.currentScene.createNode("Viewpoint");
Viewpoint152.DEF = "Best_View";
Viewpoint152.description = "Right-side View";
Viewpoint152.orientation = new SFRotation(new float[0,1,0,-1.57]);
Viewpoint152.position = new SFVec3f(new float[-3,1,0]);
HAnimSite149.children[2] = Viewpoint152;

let Viewpoint153 = browser.currentScene.createNode("Viewpoint");
Viewpoint153.DEF = "Side_View";
Viewpoint153.description = "Left-side View";
Viewpoint153.orientation = new SFRotation(new float[0,1,0,1.57]);
Viewpoint153.position = new SFVec3f(new float[3,1,0]);
HAnimSite149.children[3] = Viewpoint153;

let Viewpoint154 = browser.currentScene.createNode("Viewpoint");
Viewpoint154.DEF = "Top_View";
Viewpoint154.description = "Top View";
Viewpoint154.orientation = new SFRotation(new float[1,0,0,-1.57]);
Viewpoint154.position = new SFVec3f(new float[0,3,0]);
HAnimSite149.children[4] = Viewpoint154;

HAnimHumanoid37.viewpoints[2] = HAnimSite149;

let HAnimJoint155 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint155.USE = "boxman_humanoid_root";
HAnimHumanoid37.joints[3] = HAnimJoint155;

let HAnimJoint156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint156.USE = "boxman_skullbase";
HAnimHumanoid37.joints[4] = HAnimJoint156;

let HAnimJoint157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint157.USE = "boxman_vl5";
HAnimHumanoid37.joints[5] = HAnimJoint157;

let HAnimJoint158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint158.USE = "boxman_r_ankle";
HAnimHumanoid37.joints[6] = HAnimJoint158;

let HAnimJoint159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint159.USE = "boxman_l_ankle";
HAnimHumanoid37.joints[7] = HAnimJoint159;

let HAnimJoint160 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint160.USE = "boxman_r_elbow";
HAnimHumanoid37.joints[8] = HAnimJoint160;

let HAnimJoint161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint161.USE = "boxman_l_elbow";
HAnimHumanoid37.joints[9] = HAnimJoint161;

let HAnimJoint162 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint162.USE = "boxman_r_hip";
HAnimHumanoid37.joints[10] = HAnimJoint162;

let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.USE = "boxman_l_hip";
HAnimHumanoid37.joints[11] = HAnimJoint163;

let HAnimJoint164 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint164.USE = "boxman_r_knee";
HAnimHumanoid37.joints[12] = HAnimJoint164;

let HAnimJoint165 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint165.USE = "boxman_l_knee";
HAnimHumanoid37.joints[13] = HAnimJoint165;

let HAnimJoint166 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint166.USE = "boxman_r_midtarsal";
HAnimHumanoid37.joints[14] = HAnimJoint166;

let HAnimJoint167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint167.USE = "boxman_l_midtarsal";
HAnimHumanoid37.joints[15] = HAnimJoint167;

let HAnimJoint168 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint168.USE = "boxman_r_shoulder";
HAnimHumanoid37.joints[16] = HAnimJoint168;

let HAnimJoint169 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint169.USE = "boxman_l_shoulder";
HAnimHumanoid37.joints[17] = HAnimJoint169;

let HAnimJoint170 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint170.USE = "boxman_r_wrist";
HAnimHumanoid37.joints[18] = HAnimJoint170;

let HAnimJoint171 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint171.USE = "boxman_l_wrist";
HAnimHumanoid37.joints[19] = HAnimJoint171;

let HAnimSegment172 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment172.USE = "boxman_sacrum";
HAnimHumanoid37.segments[20] = HAnimSegment172;

let HAnimSegment173 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment173.USE = "boxman_l5";
HAnimHumanoid37.segments[21] = HAnimSegment173;

let HAnimSegment174 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment174.USE = "boxman_skull";
HAnimHumanoid37.segments[22] = HAnimSegment174;

let HAnimSegment175 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment175.USE = "boxman_l_calf";
HAnimHumanoid37.segments[23] = HAnimSegment175;

let HAnimSegment176 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment176.USE = "boxman_r_calf";
HAnimHumanoid37.segments[24] = HAnimSegment176;

let HAnimSegment177 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment177.USE = "boxman_l_forearm";
HAnimHumanoid37.segments[25] = HAnimSegment177;

let HAnimSegment178 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment178.USE = "boxman_r_forearm";
HAnimHumanoid37.segments[26] = HAnimSegment178;

let HAnimSegment179 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment179.USE = "boxman_l_hand";
HAnimHumanoid37.segments[27] = HAnimSegment179;

let HAnimSegment180 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment180.USE = "boxman_r_hand";
HAnimHumanoid37.segments[28] = HAnimSegment180;

let HAnimSegment181 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment181.USE = "boxman_l_hindfoot";
HAnimHumanoid37.segments[29] = HAnimSegment181;

let HAnimSegment182 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment182.USE = "boxman_r_hindfoot";
HAnimHumanoid37.segments[30] = HAnimSegment182;

let HAnimSegment183 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment183.USE = "boxman_l_middistal";
HAnimHumanoid37.segments[31] = HAnimSegment183;

let HAnimSegment184 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment184.USE = "boxman_r_middistal";
HAnimHumanoid37.segments[32] = HAnimSegment184;

let HAnimSegment185 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment185.USE = "boxman_l_thigh";
HAnimHumanoid37.segments[33] = HAnimSegment185;

let HAnimSegment186 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment186.USE = "boxman_r_thigh";
HAnimHumanoid37.segments[34] = HAnimSegment186;

let HAnimSegment187 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment187.USE = "boxman_l_upperarm";
HAnimHumanoid37.segments[35] = HAnimSegment187;

let HAnimSegment188 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment188.USE = "boxman_r_upperarm";
HAnimHumanoid37.segments[36] = HAnimSegment188;

let HAnimSite189 = browser.currentScene.createNode("HAnimSite");
HAnimSite189.USE = "boxman_skull_tip";
HAnimHumanoid37.viewpoints[37] = HAnimSite189;

let HAnimSite190 = browser.currentScene.createNode("HAnimSite");
HAnimSite190.USE = "boxman_l_hand_tip";
HAnimHumanoid37.viewpoints[38] = HAnimSite190;

let HAnimSite191 = browser.currentScene.createNode("HAnimSite");
HAnimSite191.USE = "boxman_r_hand_tip";
HAnimHumanoid37.viewpoints[39] = HAnimSite191;

let HAnimSite192 = browser.currentScene.createNode("HAnimSite");
HAnimSite192.USE = "boxman_l_middistal_tip";
HAnimHumanoid37.viewpoints[40] = HAnimSite192;

let HAnimSite193 = browser.currentScene.createNode("HAnimSite");
HAnimSite193.USE = "boxman_r_middistal_tip";
HAnimHumanoid37.viewpoints[41] = HAnimSite193;

browser.currentScene.children[2] = HAnimHumanoid37;

let Group194 = browser.currentScene.createNode("Group");
Group194.DEF = "StopAnimation";
let TimeSensor195 = browser.currentScene.createNode("TimeSensor");
TimeSensor195.DEF = "StopTimer";
TimeSensor195.cycleInterval = 5.73;
TimeSensor195.loop = True;
Group194.children = new MFNode();

Group194.children[0] = TimeSensor195;

let PositionInterpolator196 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator196.DEF = "Stop_humanoid_root_TranslationInterpolator";
PositionInterpolator196.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator196.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group194.children[1] = PositionInterpolator196;

let OrientationInterpolator197 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator197.DEF = "Stop_humanoid_root_RotationInterpolator";
OrientationInterpolator197.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator197.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[2] = OrientationInterpolator197;

let OrientationInterpolator198 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator198.DEF = "Stop_sacroiliac_RotationInterpolator";
OrientationInterpolator198.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator198.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[3] = OrientationInterpolator198;

let OrientationInterpolator199 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator199.DEF = "Stop_l_hip_RotationInterpolator";
OrientationInterpolator199.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator199.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[4] = OrientationInterpolator199;

let OrientationInterpolator200 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator200.DEF = "Stop_l_knee_RotationInterpolator";
OrientationInterpolator200.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator200.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[5] = OrientationInterpolator200;

let OrientationInterpolator201 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator201.DEF = "Stop_l_ankle_RotationInterpolator";
OrientationInterpolator201.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator201.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[6] = OrientationInterpolator201;

let OrientationInterpolator202 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator202.DEF = "Stop_l_subtalar_RotationInterpolator";
OrientationInterpolator202.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator202.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[7] = OrientationInterpolator202;

let OrientationInterpolator203 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator203.DEF = "Stop_l_midtarsal_RotationInterpolator";
OrientationInterpolator203.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator203.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[8] = OrientationInterpolator203;

let OrientationInterpolator204 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator204.DEF = "Stop_l_metatarsal_RotationInterpolator";
OrientationInterpolator204.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator204.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[9] = OrientationInterpolator204;

let OrientationInterpolator205 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator205.DEF = "Stop_r_hip_RotationInterpolator";
OrientationInterpolator205.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator205.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[10] = OrientationInterpolator205;

let OrientationInterpolator206 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator206.DEF = "Stop_r_knee_RotationInterpolator";
OrientationInterpolator206.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator206.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[11] = OrientationInterpolator206;

let OrientationInterpolator207 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator207.DEF = "Stop_r_ankle_RotationInterpolator";
OrientationInterpolator207.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator207.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[12] = OrientationInterpolator207;

let OrientationInterpolator208 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator208.DEF = "Stop_r_subtalar_RotationInterpolator";
OrientationInterpolator208.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator208.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[13] = OrientationInterpolator208;

let OrientationInterpolator209 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator209.DEF = "Stop_r_midtarsal_RotationInterpolator";
OrientationInterpolator209.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator209.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[14] = OrientationInterpolator209;

let OrientationInterpolator210 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator210.DEF = "Stop_r_metatarsal_RotationInterpolator";
OrientationInterpolator210.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator210.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[15] = OrientationInterpolator210;

let OrientationInterpolator211 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator211.DEF = "Stop_vl5_RotationInterpolator";
OrientationInterpolator211.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator211.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[16] = OrientationInterpolator211;

let OrientationInterpolator212 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator212.DEF = "Stop_vl4_RotationInterpolator";
OrientationInterpolator212.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator212.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[17] = OrientationInterpolator212;

let OrientationInterpolator213 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator213.DEF = "Stop_vl3_RotationInterpolator";
OrientationInterpolator213.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator213.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[18] = OrientationInterpolator213;

let OrientationInterpolator214 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator214.DEF = "Stop_vl2_RotationInterpolator";
OrientationInterpolator214.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator214.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[19] = OrientationInterpolator214;

let OrientationInterpolator215 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator215.DEF = "Stop_vl1_RotationInterpolator";
OrientationInterpolator215.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator215.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[20] = OrientationInterpolator215;

let OrientationInterpolator216 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator216.DEF = "Stop_vt12_RotationInterpolator";
OrientationInterpolator216.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator216.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[21] = OrientationInterpolator216;

let OrientationInterpolator217 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator217.DEF = "Stop_vt11_RotationInterpolator";
OrientationInterpolator217.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator217.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[22] = OrientationInterpolator217;

let OrientationInterpolator218 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator218.DEF = "Stop_vt10_RotationInterpolator";
OrientationInterpolator218.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator218.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[23] = OrientationInterpolator218;

let OrientationInterpolator219 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator219.DEF = "Stop_vt9_RotationInterpolator";
OrientationInterpolator219.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator219.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[24] = OrientationInterpolator219;

let OrientationInterpolator220 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator220.DEF = "Stop_vt8_RotationInterpolator";
OrientationInterpolator220.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator220.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[25] = OrientationInterpolator220;

let OrientationInterpolator221 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator221.DEF = "Stop_vt7_RotationInterpolator";
OrientationInterpolator221.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator221.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[26] = OrientationInterpolator221;

let OrientationInterpolator222 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator222.DEF = "Stop_vt6_RotationInterpolator";
OrientationInterpolator222.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator222.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[27] = OrientationInterpolator222;

let OrientationInterpolator223 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator223.DEF = "Stop_vt5_RotationInterpolator";
OrientationInterpolator223.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator223.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[28] = OrientationInterpolator223;

let OrientationInterpolator224 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator224.DEF = "Stop_vt4_RotationInterpolator";
OrientationInterpolator224.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator224.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[29] = OrientationInterpolator224;

let OrientationInterpolator225 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator225.DEF = "Stop_vt3_RotationInterpolator";
OrientationInterpolator225.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator225.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[30] = OrientationInterpolator225;

let OrientationInterpolator226 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator226.DEF = "Stop_vt2_RotationInterpolator";
OrientationInterpolator226.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator226.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[31] = OrientationInterpolator226;

let OrientationInterpolator227 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator227.DEF = "Stop_vt1_RotationInterpolator";
OrientationInterpolator227.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator227.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[32] = OrientationInterpolator227;

let OrientationInterpolator228 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator228.DEF = "Stop_vc7_RotationInterpolator";
OrientationInterpolator228.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator228.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[33] = OrientationInterpolator228;

let OrientationInterpolator229 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator229.DEF = "Stop_vc6_RotationInterpolator";
OrientationInterpolator229.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator229.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[34] = OrientationInterpolator229;

let OrientationInterpolator230 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator230.DEF = "Stop_vc5_RotationInterpolator";
OrientationInterpolator230.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator230.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[35] = OrientationInterpolator230;

let OrientationInterpolator231 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator231.DEF = "Stop_vc4_RotationInterpolator";
OrientationInterpolator231.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator231.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[36] = OrientationInterpolator231;

let OrientationInterpolator232 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator232.DEF = "Stop_vc3_RotationInterpolator";
OrientationInterpolator232.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator232.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[37] = OrientationInterpolator232;

let OrientationInterpolator233 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator233.DEF = "Stop_vc2_RotationInterpolator";
OrientationInterpolator233.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator233.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[38] = OrientationInterpolator233;

let OrientationInterpolator234 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator234.DEF = "Stop_vc1_RotationInterpolator";
OrientationInterpolator234.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator234.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[39] = OrientationInterpolator234;

let OrientationInterpolator235 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator235.DEF = "Stop_skullbase_RotationInterpolator";
OrientationInterpolator235.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator235.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[40] = OrientationInterpolator235;

let OrientationInterpolator236 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator236.DEF = "Stop_l_eyeball_joint_RotationInterpolator";
OrientationInterpolator236.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator236.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[41] = OrientationInterpolator236;

let OrientationInterpolator237 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator237.DEF = "Stop_r_eyeball_joint_RotationInterpolator";
OrientationInterpolator237.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator237.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[42] = OrientationInterpolator237;

let OrientationInterpolator238 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator238.DEF = "Stop_l_sternoclavicular_RotationInterpolator";
OrientationInterpolator238.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator238.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[43] = OrientationInterpolator238;

let OrientationInterpolator239 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator239.DEF = "Stop_l_acromioclavicular_RotationInterpolator";
OrientationInterpolator239.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator239.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[44] = OrientationInterpolator239;

let OrientationInterpolator240 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator240.DEF = "Stop_l_shoulder_RotationInterpolator";
OrientationInterpolator240.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator240.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[45] = OrientationInterpolator240;

let OrientationInterpolator241 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator241.DEF = "Stop_l_elbow_RotationInterpolator";
OrientationInterpolator241.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator241.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[46] = OrientationInterpolator241;

let OrientationInterpolator242 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator242.DEF = "Stop_l_wrist_RotationInterpolator";
OrientationInterpolator242.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator242.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[47] = OrientationInterpolator242;

let OrientationInterpolator243 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator243.DEF = "Stop_l_thumb1_RotationInterpolator";
OrientationInterpolator243.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator243.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[48] = OrientationInterpolator243;

let OrientationInterpolator244 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator244.DEF = "Stop_l_thumb2_RotationInterpolator";
OrientationInterpolator244.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator244.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[49] = OrientationInterpolator244;

let OrientationInterpolator245 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator245.DEF = "Stop_l_thumb3_RotationInterpolator";
OrientationInterpolator245.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator245.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[50] = OrientationInterpolator245;

let OrientationInterpolator246 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator246.DEF = "Stop_l_index0_RotationInterpolator";
OrientationInterpolator246.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator246.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[51] = OrientationInterpolator246;

let OrientationInterpolator247 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator247.DEF = "Stop_l_index1_RotationInterpolator";
OrientationInterpolator247.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator247.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[52] = OrientationInterpolator247;

let OrientationInterpolator248 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator248.DEF = "Stop_l_index2_RotationInterpolator";
OrientationInterpolator248.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator248.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[53] = OrientationInterpolator248;

let OrientationInterpolator249 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator249.DEF = "Stop_l_index3_RotationInterpolator";
OrientationInterpolator249.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator249.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[54] = OrientationInterpolator249;

let OrientationInterpolator250 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator250.DEF = "Stop_l_middle0_RotationInterpolator";
OrientationInterpolator250.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator250.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[55] = OrientationInterpolator250;

let OrientationInterpolator251 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator251.DEF = "Stop_l_middle1_RotationInterpolator";
OrientationInterpolator251.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator251.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[56] = OrientationInterpolator251;

let OrientationInterpolator252 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator252.DEF = "Stop_l_middle2_RotationInterpolator";
OrientationInterpolator252.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator252.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[57] = OrientationInterpolator252;

let OrientationInterpolator253 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator253.DEF = "Stop_l_middle3_RotationInterpolator";
OrientationInterpolator253.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator253.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[58] = OrientationInterpolator253;

let OrientationInterpolator254 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator254.DEF = "Stop_l_ring0_RotationInterpolator";
OrientationInterpolator254.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator254.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[59] = OrientationInterpolator254;

let OrientationInterpolator255 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator255.DEF = "Stop_l_ring1_RotationInterpolator";
OrientationInterpolator255.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator255.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[60] = OrientationInterpolator255;

let OrientationInterpolator256 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator256.DEF = "Stop_l_ring2_RotationInterpolator";
OrientationInterpolator256.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator256.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[61] = OrientationInterpolator256;

let OrientationInterpolator257 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator257.DEF = "Stop_l_ring3_RotationInterpolator";
OrientationInterpolator257.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator257.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[62] = OrientationInterpolator257;

let OrientationInterpolator258 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator258.DEF = "Stop_l_pinky0_RotationInterpolator";
OrientationInterpolator258.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator258.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[63] = OrientationInterpolator258;

let OrientationInterpolator259 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator259.DEF = "Stop_l_pinky1_RotationInterpolator";
OrientationInterpolator259.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator259.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[64] = OrientationInterpolator259;

let OrientationInterpolator260 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator260.DEF = "Stop_l_pinky2_RotationInterpolator";
OrientationInterpolator260.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator260.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[65] = OrientationInterpolator260;

let OrientationInterpolator261 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator261.DEF = "Stop_l_pinky3_RotationInterpolator";
OrientationInterpolator261.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator261.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[66] = OrientationInterpolator261;

let OrientationInterpolator262 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator262.DEF = "Stop_r_sternoclavicular_RotationInterpolator";
OrientationInterpolator262.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator262.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[67] = OrientationInterpolator262;

let OrientationInterpolator263 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator263.DEF = "Stop_r_acromioclavicular_RotationInterpolator";
OrientationInterpolator263.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator263.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[68] = OrientationInterpolator263;

let OrientationInterpolator264 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator264.DEF = "Stop_r_shoulder_RotationInterpolator";
OrientationInterpolator264.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator264.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[69] = OrientationInterpolator264;

let OrientationInterpolator265 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator265.DEF = "Stop_r_elbow_RotationInterpolator";
OrientationInterpolator265.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator265.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[70] = OrientationInterpolator265;

let OrientationInterpolator266 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator266.DEF = "Stop_r_wrist_RotationInterpolator";
OrientationInterpolator266.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator266.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[71] = OrientationInterpolator266;

let OrientationInterpolator267 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator267.DEF = "Stop_r_thumb1_RotationInterpolator";
OrientationInterpolator267.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator267.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[72] = OrientationInterpolator267;

let OrientationInterpolator268 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator268.DEF = "Stop_r_thumb2_RotationInterpolator";
OrientationInterpolator268.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator268.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[73] = OrientationInterpolator268;

let OrientationInterpolator269 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator269.DEF = "Stop_r_thumb3_RotationInterpolator";
OrientationInterpolator269.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator269.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[74] = OrientationInterpolator269;

let OrientationInterpolator270 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator270.DEF = "Stop_r_index0_RotationInterpolator";
OrientationInterpolator270.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator270.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[75] = OrientationInterpolator270;

let OrientationInterpolator271 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator271.DEF = "Stop_r_index1_RotationInterpolator";
OrientationInterpolator271.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator271.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[76] = OrientationInterpolator271;

let OrientationInterpolator272 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator272.DEF = "Stop_r_index2_RotationInterpolator";
OrientationInterpolator272.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator272.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[77] = OrientationInterpolator272;

let OrientationInterpolator273 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator273.DEF = "Stop_r_index3_RotationInterpolator";
OrientationInterpolator273.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator273.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[78] = OrientationInterpolator273;

let OrientationInterpolator274 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator274.DEF = "Stop_r_middle0_RotationInterpolator";
OrientationInterpolator274.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator274.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[79] = OrientationInterpolator274;

let OrientationInterpolator275 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator275.DEF = "Stop_r_middle1_RotationInterpolator";
OrientationInterpolator275.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator275.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[80] = OrientationInterpolator275;

let OrientationInterpolator276 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator276.DEF = "Stop_r_middle2_RotationInterpolator";
OrientationInterpolator276.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator276.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[81] = OrientationInterpolator276;

let OrientationInterpolator277 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator277.DEF = "Stop_r_middle3_RotationInterpolator";
OrientationInterpolator277.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator277.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[82] = OrientationInterpolator277;

let OrientationInterpolator278 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator278.DEF = "Stop_r_ring0_RotationInterpolator";
OrientationInterpolator278.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator278.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[83] = OrientationInterpolator278;

let OrientationInterpolator279 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator279.DEF = "Stop_r_ring1_RotationInterpolator";
OrientationInterpolator279.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator279.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[84] = OrientationInterpolator279;

let OrientationInterpolator280 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator280.DEF = "Stop_r_ring2_RotationInterpolator";
OrientationInterpolator280.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator280.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[85] = OrientationInterpolator280;

let OrientationInterpolator281 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator281.DEF = "Stop_r_ring3_RotationInterpolator";
OrientationInterpolator281.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator281.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[86] = OrientationInterpolator281;

let OrientationInterpolator282 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator282.DEF = "Stop_r_pinky0_RotationInterpolator";
OrientationInterpolator282.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator282.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[87] = OrientationInterpolator282;

let OrientationInterpolator283 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator283.DEF = "Stop_r_pinky1_RotationInterpolator";
OrientationInterpolator283.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator283.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[88] = OrientationInterpolator283;

let OrientationInterpolator284 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator284.DEF = "Stop_r_pinky2_RotationInterpolator";
OrientationInterpolator284.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator284.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[89] = OrientationInterpolator284;

let OrientationInterpolator285 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator285.DEF = "Stop_r_pinky3_RotationInterpolator";
OrientationInterpolator285.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator285.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[90] = OrientationInterpolator285;

browser.currentScene.children[3] = Group194;

let Group286 = browser.currentScene.createNode("Group");
Group286.DEF = "StandAnimation";
let TimeSensor287 = browser.currentScene.createNode("TimeSensor");
TimeSensor287.DEF = "StandTimer";
TimeSensor287.cycleInterval = 5.73;
TimeSensor287.loop = True;
Group286.children = new MFNode();

Group286.children[0] = TimeSensor287;

let OrientationInterpolator288 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator288.DEF = "Stand_r_metatarsal_PitchInterpolator";
OrientationInterpolator288.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator288.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.015,1,0,0,0.17,-1,0,0,0.025,1,0,0,0.01,1,0,0,0]);
Group286.children[1] = OrientationInterpolator288;

let OrientationInterpolator289 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator289.DEF = "Stand_r_ankle_RotationInterpolator";
OrientationInterpolator289.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator289.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[2] = OrientationInterpolator289;

let OrientationInterpolator290 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator290.DEF = "Stand_r_knee_RotationInterpolator";
OrientationInterpolator290.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator290.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[3] = OrientationInterpolator290;

let OrientationInterpolator291 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator291.DEF = "Stand_r_hip_RotationInterpolator";
OrientationInterpolator291.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator291.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[4] = OrientationInterpolator291;

let OrientationInterpolator292 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator292.DEF = "Stand_l_ankle_RotationInterpolator";
OrientationInterpolator292.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator292.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[5] = OrientationInterpolator292;

let OrientationInterpolator293 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator293.DEF = "Stand_l_knee_RotationInterpolator";
OrientationInterpolator293.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator293.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[6] = OrientationInterpolator293;

let OrientationInterpolator294 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator294.DEF = "Stand_l_hip_RotationInterpolator";
OrientationInterpolator294.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator294.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[7] = OrientationInterpolator294;

let OrientationInterpolator295 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator295.DEF = "Stand_r_wrist_RotationInterpolator";
OrientationInterpolator295.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator295.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,0.25,0,0,1,0]);
Group286.children[8] = OrientationInterpolator295;

let OrientationInterpolator296 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator296.DEF = "Stand_r_elbow_RotationInterpolator";
OrientationInterpolator296.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator296.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[9] = OrientationInterpolator296;

let OrientationInterpolator297 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator297.DEF = "Stand_r_shoulder_RotationInterpolator";
OrientationInterpolator297.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator297.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[10] = OrientationInterpolator297;

let OrientationInterpolator298 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator298.DEF = "Stand_l_wrist_RotationInterpolator";
OrientationInterpolator298.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator298.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[11] = OrientationInterpolator298;

let OrientationInterpolator299 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator299.DEF = "Stand_l_elbow_RotationInterpolator";
OrientationInterpolator299.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator299.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[12] = OrientationInterpolator299;

let OrientationInterpolator300 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator300.DEF = "Stand_l_shoulder_RotationInterpolator";
OrientationInterpolator300.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator300.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[13] = OrientationInterpolator300;

let OrientationInterpolator301 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator301.DEF = "Stand_head_RotationInterpolator";
OrientationInterpolator301.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator301.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[14] = OrientationInterpolator301;

let OrientationInterpolator302 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator302.DEF = "Stand_neck_RotationInterpolator";
OrientationInterpolator302.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator302.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,0,0,1,0]);
Group286.children[15] = OrientationInterpolator302;

let OrientationInterpolator303 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator303.DEF = "Stand_l_eyeball_RotationInterpolator";
OrientationInterpolator303.key = new MFFloat(new float[0,0.4,0.7,1]);
OrientationInterpolator303.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group286.children[16] = OrientationInterpolator303;

let OrientationInterpolator304 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator304.DEF = "Stand_r_eyeball_RotationInterpolator";
OrientationInterpolator304.key = new MFFloat(new float[0,0.4,0.7,1]);
OrientationInterpolator304.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group286.children[17] = OrientationInterpolator304;

let OrientationInterpolator305 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator305.DEF = "Stand_lower_body_RotationInterpolator";
OrientationInterpolator305.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator305.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[18] = OrientationInterpolator305;

let OrientationInterpolator306 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator306.DEF = "Stand_upper_body_RotationInterpolator";
OrientationInterpolator306.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator306.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[19] = OrientationInterpolator306;

let OrientationInterpolator307 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator307.DEF = "Stand_whole_body_RotationInterpolator";
OrientationInterpolator307.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator307.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[20] = OrientationInterpolator307;

let PositionInterpolator308 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator308.DEF = "Stand_whole_body_TranslationInterpolator";
PositionInterpolator308.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator308.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group286.children[21] = PositionInterpolator308;

let OrientationInterpolator309 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator309.DEF = "Stand_l_sternoclavicular_RollInterpolator";
OrientationInterpolator309.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator309.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[22] = OrientationInterpolator309;

let OrientationInterpolator310 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator310.DEF = "Stand_l_acromioclavicular_RollInterpolator";
OrientationInterpolator310.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator310.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[23] = OrientationInterpolator310;

let OrientationInterpolator311 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator311.DEF = "Stand_r_sternoclavicular_RollInterpolator";
OrientationInterpolator311.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator311.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[24] = OrientationInterpolator311;

let OrientationInterpolator312 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator312.DEF = "Stand_r_acromioclavicular_RollInterpolator";
OrientationInterpolator312.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator312.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[25] = OrientationInterpolator312;

let OrientationInterpolator313 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator313.DEF = "Stand_sacroiliac_YawInterpolator";
OrientationInterpolator313.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator313.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[26] = OrientationInterpolator313;

let OrientationInterpolator314 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator314.DEF = "Stand_vl5_YawInterpolator";
OrientationInterpolator314.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator314.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[27] = OrientationInterpolator314;

let OrientationInterpolator315 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator315.DEF = "Stand_vc6_YawInterpolator";
OrientationInterpolator315.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator315.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,0,0]);
Group286.children[28] = OrientationInterpolator315;

let OrientationInterpolator316 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator316.DEF = "Stand_l_thumb1_PitchInterpolator";
OrientationInterpolator316.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator316.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[29] = OrientationInterpolator316;

let OrientationInterpolator317 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator317.DEF = "Stand_r_thumb1_PitchInterpolator";
OrientationInterpolator317.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator317.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,0.1,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group286.children[30] = OrientationInterpolator317;

let OrientationInterpolator318 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator318.DEF = "Stand_r_index1_RollInterpolator";
OrientationInterpolator318.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator318.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.1,0,0,1,0.2,0,0,1,0.3,0,0,1,0,0,0,1,0]);
Group286.children[31] = OrientationInterpolator318;

let OrientationInterpolator319 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator319.DEF = "Stand_r_index2_RollInterpolator";
OrientationInterpolator319.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator319.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.4,0,0,1,0.32,0,0,1,0.25,0,0,1,0.2,0,0,1,0]);
Group286.children[32] = OrientationInterpolator319;

let OrientationInterpolator320 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator320.DEF = "Stand_r_index3_RollInterpolator";
OrientationInterpolator320.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator320.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.3,0,0,1,0.35,0,0,1,0.2,0,0,1,0]);
Group286.children[33] = OrientationInterpolator320;

browser.currentScene.children[4] = Group286;

let Group321 = browser.currentScene.createNode("Group");
Group321.DEF = "PitchesAnimation";
let TimeSensor322 = browser.currentScene.createNode("TimeSensor");
TimeSensor322.DEF = "PitchTimer";
TimeSensor322.cycleInterval = 5.73;
TimeSensor322.loop = True;
Group321.children = new MFNode();

Group321.children[0] = TimeSensor322;

let OrientationInterpolator323 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator323.DEF = "Pitch_r_metatarsal_PitchInterpolator";
OrientationInterpolator323.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator323.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group321.children[1] = OrientationInterpolator323;

let OrientationInterpolator324 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator324.DEF = "Pitches_r_ankle_RotationInterpolator";
OrientationInterpolator324.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator324.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group321.children[2] = OrientationInterpolator324;

let OrientationInterpolator325 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator325.DEF = "Pitches_r_knee_RotationInterpolator";
OrientationInterpolator325.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator325.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[3] = OrientationInterpolator325;

let OrientationInterpolator326 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator326.DEF = "Pitches_r_hip_RotationInterpolator";
OrientationInterpolator326.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator326.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group321.children[4] = OrientationInterpolator326;

let OrientationInterpolator327 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator327.DEF = "Pitches_l_ankle_RotationInterpolator";
OrientationInterpolator327.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator327.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group321.children[5] = OrientationInterpolator327;

let OrientationInterpolator328 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator328.DEF = "Pitches_l_knee_RotationInterpolator";
OrientationInterpolator328.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator328.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[6] = OrientationInterpolator328;

let OrientationInterpolator329 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator329.DEF = "Pitches_l_hip_RotationInterpolator";
OrientationInterpolator329.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator329.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group321.children[7] = OrientationInterpolator329;

let OrientationInterpolator330 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator330.DEF = "Pitches_r_wrist_RotationInterpolator";
OrientationInterpolator330.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator330.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[8] = OrientationInterpolator330;

let OrientationInterpolator331 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator331.DEF = "Pitches_r_elbow_RotationInterpolator";
OrientationInterpolator331.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator331.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[9] = OrientationInterpolator331;

let OrientationInterpolator332 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator332.DEF = "Pitches_r_shoulder_RotationInterpolator";
OrientationInterpolator332.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator332.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group321.children[10] = OrientationInterpolator332;

let OrientationInterpolator333 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator333.DEF = "Pitches_l_wrist_RotationInterpolator";
OrientationInterpolator333.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator333.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[11] = OrientationInterpolator333;

let OrientationInterpolator334 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator334.DEF = "Pitches_l_elbow_RotationInterpolator";
OrientationInterpolator334.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator334.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[12] = OrientationInterpolator334;

let OrientationInterpolator335 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator335.DEF = "Pitches_l_shoulder_RotationInterpolator";
OrientationInterpolator335.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator335.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group321.children[13] = OrientationInterpolator335;

let OrientationInterpolator336 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator336.DEF = "Pitches_head_RotationInterpolator";
OrientationInterpolator336.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator336.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[14] = OrientationInterpolator336;

let OrientationInterpolator337 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator337.DEF = "Pitches_neck_RotationInterpolator";
OrientationInterpolator337.key = new MFFloat(new float[0,0.25,0.55,1]);
OrientationInterpolator337.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.55,-1,0,0,1.05,0,0,1,0]);
Group321.children[15] = OrientationInterpolator337;

let OrientationInterpolator338 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator338.DEF = "Pitches_lower_body_RotationInterpolator";
OrientationInterpolator338.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator338.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[16] = OrientationInterpolator338;

let OrientationInterpolator339 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator339.DEF = "Pitches_upper_body_RotationInterpolator";
OrientationInterpolator339.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator339.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[17] = OrientationInterpolator339;

let OrientationInterpolator340 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator340.DEF = "Pitches_whole_body_RotationInterpolator";
OrientationInterpolator340.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator340.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[18] = OrientationInterpolator340;

let PositionInterpolator341 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator341.DEF = "Pitches_whole_body_TranslationInterpolator";
PositionInterpolator341.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator341.keyValue = new MFVec3f(new float[0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0]);
Group321.children[19] = PositionInterpolator341;

let OrientationInterpolator342 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator342.DEF = "Pitch_l_sternoclavicular_RollInterpolator";
OrientationInterpolator342.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator342.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[20] = OrientationInterpolator342;

let OrientationInterpolator343 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator343.DEF = "Pitch_l_acromioclavicular_RollInterpolator";
OrientationInterpolator343.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator343.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[21] = OrientationInterpolator343;

let OrientationInterpolator344 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator344.DEF = "Pitch_r_sternoclavicular_RollInterpolator";
OrientationInterpolator344.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator344.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[22] = OrientationInterpolator344;

let OrientationInterpolator345 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator345.DEF = "Pitch_r_acromioclavicular_RollInterpolator";
OrientationInterpolator345.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator345.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[23] = OrientationInterpolator345;

let OrientationInterpolator346 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator346.DEF = "Pitch_sacroiliac_YawInterpolator";
OrientationInterpolator346.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator346.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[24] = OrientationInterpolator346;

let OrientationInterpolator347 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator347.DEF = "Pitch_vl5_YawInterpolator";
OrientationInterpolator347.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator347.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[25] = OrientationInterpolator347;

let OrientationInterpolator348 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator348.DEF = "Pitch_vc6_YawInterpolator";
OrientationInterpolator348.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator348.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[26] = OrientationInterpolator348;

let OrientationInterpolator349 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator349.DEF = "Pitch_l_thumb1_PitchInterpolator";
OrientationInterpolator349.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator349.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group321.children[27] = OrientationInterpolator349;

let OrientationInterpolator350 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator350.DEF = "Pitch_r_thumb1_PitchInterpolator";
OrientationInterpolator350.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator350.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group321.children[28] = OrientationInterpolator350;

browser.currentScene.children[5] = Group321;

let Group351 = browser.currentScene.createNode("Group");
Group351.DEF = "YawsAnimation";
let TimeSensor352 = browser.currentScene.createNode("TimeSensor");
TimeSensor352.DEF = "YawTimer";
TimeSensor352.cycleInterval = 5.73;
TimeSensor352.loop = True;
Group351.children = new MFNode();

Group351.children[0] = TimeSensor352;

let OrientationInterpolator353 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator353.DEF = "Yaw_r_metatarsal_PitchInterpolator";
OrientationInterpolator353.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator353.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[1] = OrientationInterpolator353;

let OrientationInterpolator354 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator354.DEF = "Yaws_r_ankle_RotationInterpolator";
OrientationInterpolator354.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator354.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group351.children[2] = OrientationInterpolator354;

let OrientationInterpolator355 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator355.DEF = "Yaws_r_knee_RotationInterpolator";
OrientationInterpolator355.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator355.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group351.children[3] = OrientationInterpolator355;

let OrientationInterpolator356 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator356.DEF = "Yaws_r_hip_RotationInterpolator";
OrientationInterpolator356.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator356.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[4] = OrientationInterpolator356;

let OrientationInterpolator357 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator357.DEF = "Yaws_l_ankle_RotationInterpolator";
OrientationInterpolator357.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator357.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group351.children[5] = OrientationInterpolator357;

let OrientationInterpolator358 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator358.DEF = "Yaws_l_knee_RotationInterpolator";
OrientationInterpolator358.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator358.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group351.children[6] = OrientationInterpolator358;

let OrientationInterpolator359 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator359.DEF = "Yaws_l_hip_RotationInterpolator";
OrientationInterpolator359.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator359.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[7] = OrientationInterpolator359;

let OrientationInterpolator360 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator360.DEF = "Yaws_r_wrist_RotationInterpolator";
OrientationInterpolator360.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator360.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[8] = OrientationInterpolator360;

let OrientationInterpolator361 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator361.DEF = "Yaws_r_elbow_RotationInterpolator";
OrientationInterpolator361.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator361.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[9] = OrientationInterpolator361;

let OrientationInterpolator362 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator362.DEF = "Yaws_r_shoulder_RotationInterpolator";
OrientationInterpolator362.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator362.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[10] = OrientationInterpolator362;

let OrientationInterpolator363 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator363.DEF = "Yaws_l_wrist_RotationInterpolator";
OrientationInterpolator363.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator363.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[11] = OrientationInterpolator363;

let OrientationInterpolator364 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator364.DEF = "Yaws_l_elbow_RotationInterpolator";
OrientationInterpolator364.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator364.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[12] = OrientationInterpolator364;

let OrientationInterpolator365 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator365.DEF = "Yaws_l_shoulder_RotationInterpolator";
OrientationInterpolator365.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator365.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[13] = OrientationInterpolator365;

let OrientationInterpolator366 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator366.DEF = "Yaws_head_RotationInterpolator";
OrientationInterpolator366.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator366.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[14] = OrientationInterpolator366;

let OrientationInterpolator367 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator367.DEF = "Yaws_neck_RotationInterpolator";
OrientationInterpolator367.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator367.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group351.children[15] = OrientationInterpolator367;

let OrientationInterpolator368 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator368.DEF = "Yaws_upper_body_RotationInterpolator";
OrientationInterpolator368.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator368.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group351.children[16] = OrientationInterpolator368;

let OrientationInterpolator369 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator369.DEF = "Yaws_lower_body_RotationInterpolator";
OrientationInterpolator369.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator369.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[17] = OrientationInterpolator369;

let OrientationInterpolator370 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator370.DEF = "Yaws_whole_body_RotationInterpolator";
OrientationInterpolator370.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator370.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[18] = OrientationInterpolator370;

let PositionInterpolator371 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator371.DEF = "Yaws_whole_body_TranslationInterpolator";
PositionInterpolator371.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator371.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group351.children[19] = PositionInterpolator371;

let OrientationInterpolator372 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator372.DEF = "Yaw_l_sternoclavicular_RollInterpolator";
OrientationInterpolator372.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator372.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[20] = OrientationInterpolator372;

let OrientationInterpolator373 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator373.DEF = "Yaw_l_acromioclavicular_RollInterpolator";
OrientationInterpolator373.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator373.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[21] = OrientationInterpolator373;

let OrientationInterpolator374 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator374.DEF = "Yaw_r_sternoclavicular_RollInterpolator";
OrientationInterpolator374.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator374.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[22] = OrientationInterpolator374;

let OrientationInterpolator375 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator375.DEF = "Yaw_r_acromioclavicular_RollInterpolator";
OrientationInterpolator375.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator375.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[23] = OrientationInterpolator375;

let OrientationInterpolator376 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator376.DEF = "Yaw_sacroiliac_YawInterpolator";
OrientationInterpolator376.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator376.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,0,0.24,0,-1,0,0.4,0,1,0,0]);
Group351.children[24] = OrientationInterpolator376;

let OrientationInterpolator377 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator377.DEF = "Yaw_vl5_YawInterpolator";
OrientationInterpolator377.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator377.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[25] = OrientationInterpolator377;

let OrientationInterpolator378 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator378.DEF = "Yaw_vc6_YawInterpolator";
OrientationInterpolator378.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator378.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[26] = OrientationInterpolator378;

let OrientationInterpolator379 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator379.DEF = "Yaw_l_thumb1_PitchInterpolator";
OrientationInterpolator379.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator379.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[27] = OrientationInterpolator379;

let OrientationInterpolator380 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator380.DEF = "Yaw_r_thumb1_PitchInterpolator";
OrientationInterpolator380.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator380.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[28] = OrientationInterpolator380;

browser.currentScene.children[6] = Group351;

let Group381 = browser.currentScene.createNode("Group");
Group381.DEF = "RollsAnimation";
let TimeSensor382 = browser.currentScene.createNode("TimeSensor");
TimeSensor382.DEF = "RollTimer";
TimeSensor382.cycleInterval = 5.73;
TimeSensor382.loop = True;
Group381.children = new MFNode();

Group381.children[0] = TimeSensor382;

let OrientationInterpolator383 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator383.DEF = "Roll_r_metatarsal_PitchInterpolator";
OrientationInterpolator383.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator383.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[1] = OrientationInterpolator383;

let OrientationInterpolator384 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator384.DEF = "Rolls_r_ankle_RotationInterpolator";
OrientationInterpolator384.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator384.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group381.children[2] = OrientationInterpolator384;

let OrientationInterpolator385 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator385.DEF = "Rolls_r_knee_RotationInterpolator";
OrientationInterpolator385.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator385.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[3] = OrientationInterpolator385;

let OrientationInterpolator386 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator386.DEF = "Rolls_r_hip_RotationInterpolator";
OrientationInterpolator386.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator386.keyValue = new MFRotation(new float[0,0,-1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group381.children[4] = OrientationInterpolator386;

let OrientationInterpolator387 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator387.DEF = "Rolls_l_ankle_RotationInterpolator";
OrientationInterpolator387.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator387.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group381.children[5] = OrientationInterpolator387;

let OrientationInterpolator388 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator388.DEF = "Rolls_l_knee_RotationInterpolator";
OrientationInterpolator388.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator388.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[6] = OrientationInterpolator388;

let OrientationInterpolator389 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator389.DEF = "Rolls_l_hip_RotationInterpolator";
OrientationInterpolator389.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator389.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group381.children[7] = OrientationInterpolator389;

let OrientationInterpolator390 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator390.DEF = "Rolls_r_wrist_RotationInterpolator";
OrientationInterpolator390.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator390.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group381.children[8] = OrientationInterpolator390;

let OrientationInterpolator391 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator391.DEF = "Rolls_r_elbow_RotationInterpolator";
OrientationInterpolator391.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator391.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[9] = OrientationInterpolator391;

let OrientationInterpolator392 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator392.DEF = "Rolls_r_shoulder_RotationInterpolator";
OrientationInterpolator392.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator392.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,-1,3,0,0,-1,1.5,0,0,1,0]);
Group381.children[10] = OrientationInterpolator392;

let OrientationInterpolator393 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator393.DEF = "Rolls_l_wrist_RotationInterpolator";
OrientationInterpolator393.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator393.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group381.children[11] = OrientationInterpolator393;

let OrientationInterpolator394 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator394.DEF = "Rolls_l_elbow_RotationInterpolator";
OrientationInterpolator394.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator394.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[12] = OrientationInterpolator394;

let OrientationInterpolator395 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator395.DEF = "Rolls_l_shoulder_RotationInterpolator";
OrientationInterpolator395.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator395.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,3,0,0,1,1.5,0,0,1,0]);
Group381.children[13] = OrientationInterpolator395;

let OrientationInterpolator396 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator396.DEF = "Rolls_head_RotationInterpolator";
OrientationInterpolator396.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator396.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[14] = OrientationInterpolator396;

let OrientationInterpolator397 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator397.DEF = "Rolls_neck_RotationInterpolator";
OrientationInterpolator397.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator397.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.25,0,0,1,0,0,0,-1,1.25,0,0,1,0]);
Group381.children[15] = OrientationInterpolator397;

let OrientationInterpolator398 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator398.DEF = "Rolls_lower_body_RotationInterpolator";
OrientationInterpolator398.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator398.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[16] = OrientationInterpolator398;

let OrientationInterpolator399 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator399.DEF = "Rolls_upper_body_RotationInterpolator";
OrientationInterpolator399.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator399.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[17] = OrientationInterpolator399;

let OrientationInterpolator400 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator400.DEF = "Rolls_whole_body_RotationInterpolator";
OrientationInterpolator400.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator400.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[18] = OrientationInterpolator400;

let PositionInterpolator401 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator401.DEF = "Rolls_whole_body_TranslationInterpolator";
PositionInterpolator401.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator401.keyValue = new MFVec3f(new float[0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0]);
Group381.children[19] = PositionInterpolator401;

let OrientationInterpolator402 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator402.DEF = "Roll_l_sternoclavicular_RollInterpolator";
OrientationInterpolator402.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator402.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group381.children[20] = OrientationInterpolator402;

let OrientationInterpolator403 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator403.DEF = "Roll_l_acromioclavicular_RollInterpolator";
OrientationInterpolator403.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator403.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[21] = OrientationInterpolator403;

let OrientationInterpolator404 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator404.DEF = "Roll_r_sternoclavicular_RollInterpolator";
OrientationInterpolator404.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator404.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group381.children[22] = OrientationInterpolator404;

let OrientationInterpolator405 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator405.DEF = "Roll_r_acromioclavicular_RollInterpolator";
OrientationInterpolator405.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator405.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[23] = OrientationInterpolator405;

let OrientationInterpolator406 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator406.DEF = "Roll_sacroiliac_YawInterpolator";
OrientationInterpolator406.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator406.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[24] = OrientationInterpolator406;

let OrientationInterpolator407 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator407.DEF = "Roll_vl5_YawInterpolator";
OrientationInterpolator407.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator407.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[25] = OrientationInterpolator407;

let OrientationInterpolator408 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator408.DEF = "Roll_vc6_YawInterpolator";
OrientationInterpolator408.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator408.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[26] = OrientationInterpolator408;

let OrientationInterpolator409 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator409.DEF = "Roll_l_thumb1_PitchInterpolator";
OrientationInterpolator409.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator409.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[27] = OrientationInterpolator409;

let OrientationInterpolator410 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator410.DEF = "Roll_r_thumb1_PitchInterpolator";
OrientationInterpolator410.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator410.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[28] = OrientationInterpolator410;

browser.currentScene.children[7] = Group381;

let Group411 = browser.currentScene.createNode("Group");
Group411.DEF = "WalkAnimation";
let TimeSensor412 = browser.currentScene.createNode("TimeSensor");
TimeSensor412.DEF = "WalkTimer";
TimeSensor412.cycleInterval = 1.73;
TimeSensor412.loop = True;
Group411.children = new MFNode();

Group411.children[0] = TimeSensor412;

let OrientationInterpolator413 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator413.DEF = "Walk_r_metatarsal_PitchInterpolator";
OrientationInterpolator413.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator413.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group411.children[1] = OrientationInterpolator413;

let OrientationInterpolator414 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator414.DEF = "Walk_r_ankle_RotationInterpolator";
OrientationInterpolator414.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator414.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0]);
Group411.children[2] = OrientationInterpolator414;

let OrientationInterpolator415 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator415.DEF = "Walk_r_knee_RotationInterpolator";
OrientationInterpolator415.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator415.keyValue = new MFRotation(new float[1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573]);
Group411.children[3] = OrientationInterpolator415;

let OrientationInterpolator416 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator416.DEF = "Walk_r_hip_RotationInterpolator";
OrientationInterpolator416.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator416.keyValue = new MFRotation(new float[-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
Group411.children[4] = OrientationInterpolator416;

let OrientationInterpolator417 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator417.DEF = "Walk_l_ankle_RotationInterpolator";
OrientationInterpolator417.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator417.keyValue = new MFRotation(new float[-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714]);
Group411.children[5] = OrientationInterpolator417;

let OrientationInterpolator418 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator418.DEF = "Walk_l_knee_RotationInterpolator";
OrientationInterpolator418.key = new MFFloat(new float[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator418.keyValue = new MFRotation(new float[1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
Group411.children[6] = OrientationInterpolator418;

let OrientationInterpolator419 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator419.DEF = "Walk_l_hip_RotationInterpolator";
OrientationInterpolator419.key = new MFFloat(new float[0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator419.keyValue = new MFRotation(new float[-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
Group411.children[7] = OrientationInterpolator419;

let OrientationInterpolator420 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator420.DEF = "Walk_lower_body_RotationInterpolator";
OrientationInterpolator420.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator420.keyValue = new MFRotation(new float[0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
Group411.children[8] = OrientationInterpolator420;

let OrientationInterpolator421 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator421.DEF = "Walk_r_wrist_RotationInterpolator";
OrientationInterpolator421.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator421.keyValue = new MFRotation(new float[-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]);
Group411.children[9] = OrientationInterpolator421;

let OrientationInterpolator422 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator422.DEF = "Walk_r_elbow_RotationInterpolator";
OrientationInterpolator422.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator422.keyValue = new MFRotation(new float[-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508]);
Group411.children[10] = OrientationInterpolator422;

let OrientationInterpolator423 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator423.DEF = "Walk_r_shoulder_RotationInterpolator";
OrientationInterpolator423.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator423.keyValue = new MFRotation(new float[-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346]);
Group411.children[11] = OrientationInterpolator423;

let OrientationInterpolator424 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator424.DEF = "Walk_l_wrist_RotationInterpolator";
OrientationInterpolator424.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator424.keyValue = new MFRotation(new float[0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076]);
Group411.children[12] = OrientationInterpolator424;

let OrientationInterpolator425 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator425.DEF = "Walk_l_elbow_RotationInterpolator";
OrientationInterpolator425.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator425.keyValue = new MFRotation(new float[-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878]);
Group411.children[13] = OrientationInterpolator425;

let OrientationInterpolator426 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator426.DEF = "Walk_l_shoulder_RotationInterpolator";
OrientationInterpolator426.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator426.keyValue = new MFRotation(new float[1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189]);
Group411.children[14] = OrientationInterpolator426;

let OrientationInterpolator427 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator427.DEF = "Walk_head_RotationInterpolator";
OrientationInterpolator427.key = new MFFloat(new float[0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator427.keyValue = new MFRotation(new float[0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642]);
Group411.children[15] = OrientationInterpolator427;

let OrientationInterpolator428 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator428.DEF = "Walk_neck_RotationInterpolator";
OrientationInterpolator428.key = new MFFloat(new float[0,1]);
OrientationInterpolator428.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group411.children[16] = OrientationInterpolator428;

let OrientationInterpolator429 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator429.DEF = "Walk_upper_body_RotationInterpolator";
OrientationInterpolator429.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator429.keyValue = new MFRotation(new float[0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
Group411.children[17] = OrientationInterpolator429;

let OrientationInterpolator430 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator430.DEF = "Walk_whole_body_RotationInterpolator";
OrientationInterpolator430.key = new MFFloat(new float[0,1]);
OrientationInterpolator430.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group411.children[18] = OrientationInterpolator430;

let PositionInterpolator431 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator431.DEF = "Walk_whole_body_TranslationInterpolator";
PositionInterpolator431.key = new MFFloat(new float[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator431.keyValue = new MFVec3f(new float[0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
Group411.children[19] = PositionInterpolator431;

let OrientationInterpolator432 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator432.DEF = "Walk_l_sternoclavicular_RollInterpolator";
OrientationInterpolator432.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator432.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group411.children[20] = OrientationInterpolator432;

let OrientationInterpolator433 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator433.DEF = "Walk_l_acromioclavicular_RollInterpolator";
OrientationInterpolator433.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator433.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group411.children[21] = OrientationInterpolator433;

let OrientationInterpolator434 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator434.DEF = "Walk_r_sternoclavicular_RollInterpolator";
OrientationInterpolator434.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator434.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group411.children[22] = OrientationInterpolator434;

let OrientationInterpolator435 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator435.DEF = "Walk_r_acromioclavicular_RollInterpolator";
OrientationInterpolator435.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator435.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group411.children[23] = OrientationInterpolator435;

let OrientationInterpolator436 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator436.DEF = "Walk_sacroiliac_YawInterpolator";
OrientationInterpolator436.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator436.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group411.children[24] = OrientationInterpolator436;

let OrientationInterpolator437 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator437.DEF = "Walk_vl5_YawInterpolator";
OrientationInterpolator437.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator437.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group411.children[25] = OrientationInterpolator437;

let OrientationInterpolator438 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator438.DEF = "Walk_vc6_YawInterpolator";
OrientationInterpolator438.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator438.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group411.children[26] = OrientationInterpolator438;

let OrientationInterpolator439 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator439.DEF = "Walk_l_thumb1_PitchInterpolator";
OrientationInterpolator439.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator439.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group411.children[27] = OrientationInterpolator439;

let OrientationInterpolator440 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator440.DEF = "Walk_r_thumb1_PitchInterpolator";
OrientationInterpolator440.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator440.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group411.children[28] = OrientationInterpolator440;

browser.currentScene.children[8] = Group411;

let Group441 = browser.currentScene.createNode("Group");
Group441.DEF = "RunAnimation";
let TimeSensor442 = browser.currentScene.createNode("TimeSensor");
TimeSensor442.DEF = "RunTimer";
TimeSensor442.cycleInterval = 0.9;
TimeSensor442.loop = True;
Group441.children = new MFNode();

Group441.children[0] = TimeSensor442;

let OrientationInterpolator443 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator443.DEF = "Run_r_metatarsal_PitchInterpolator";
OrientationInterpolator443.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator443.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group441.children[1] = OrientationInterpolator443;

let OrientationInterpolator444 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator444.DEF = "Run_l_hip_RotationInterpolator_Run";
OrientationInterpolator444.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator444.keyValue = new MFRotation(new float[-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42]);
Group441.children[2] = OrientationInterpolator444;

let OrientationInterpolator445 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator445.DEF = "Run_l_knee_RotationInterpolator_Run";
OrientationInterpolator445.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator445.keyValue = new MFRotation(new float[1,0,0,1.01,1,0,0,0.426,1,0,0,0.705,1,0,0,2.179,1,0,0,1.01]);
Group441.children[3] = OrientationInterpolator445;

let OrientationInterpolator446 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator446.DEF = "Run_l_ankle_RotationInterpolator_Run";
OrientationInterpolator446.key = new MFFloat(new float[0,0.22,0.3,0.4,1]);
OrientationInterpolator446.keyValue = new MFRotation(new float[1,0,0,0.0374,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03574]);
Group441.children[4] = OrientationInterpolator446;

let OrientationInterpolator447 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator447.DEF = "Run_r_hip_RotationInterpolator_Run";
OrientationInterpolator447.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator447.keyValue = new MFRotation(new float[0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9]);
Group441.children[5] = OrientationInterpolator447;

let OrientationInterpolator448 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator448.DEF = "Run_r_knee_RotationInterpolator_Run";
OrientationInterpolator448.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator448.keyValue = new MFRotation(new float[1,0,0,0.705,1,0,0,2.179,1,0,0,1.01,1,0,0,0.426,1,0,0,0.705]);
Group441.children[6] = OrientationInterpolator448;

let OrientationInterpolator449 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator449.DEF = "Run_r_ankle_RotationInterpolator_Run";
OrientationInterpolator449.key = new MFFloat(new float[0,0.4,0.71,0.8,0.82,1]);
OrientationInterpolator449.keyValue = new MFRotation(new float[1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.32,-1,0,0,0.374,-1,0,0,0.3478,1,0,0,0.2323]);
Group441.children[7] = OrientationInterpolator449;

let OrientationInterpolator450 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator450.DEF = "Run_l_shoulder_RotationInterpolator_Run";
OrientationInterpolator450.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator450.keyValue = new MFRotation(new float[0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5]);
Group441.children[8] = OrientationInterpolator450;

let OrientationInterpolator451 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator451.DEF = "Run_l_elbow_RotationInterpolator_Run";
OrientationInterpolator451.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator451.keyValue = new MFRotation(new float[-1,0,0,1.85,-0.99,-0.19,0.18,1.35,-1,0,0,0.975,-0.99,-0.09,-0.02,1.55,-1,0,0,1.85]);
Group441.children[9] = OrientationInterpolator451;

let OrientationInterpolator452 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator452.DEF = "Run_l_wrist_RotationInterpolator_Run";
OrientationInterpolator452.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator452.keyValue = new MFRotation(new float[-0.25,-1,0.08,0.14,0.25,1,0.08,0.14,0,0,1,0,-0.25,1,0.08,-0.14,-0.25,1,0.08,0.14]);
Group441.children[10] = OrientationInterpolator452;

let OrientationInterpolator453 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator453.DEF = "Run_r_shoulder_RotationInterpolator_Run";
OrientationInterpolator453.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator453.keyValue = new MFRotation(new float[-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85]);
Group441.children[11] = OrientationInterpolator453;

let OrientationInterpolator454 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator454.DEF = "Run_r_elbow_RotationInterpolator_Run";
OrientationInterpolator454.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator454.keyValue = new MFRotation(new float[-1,0,0,0.975,-0.99,0.09,0.02,1.55,-1,0,0,1.85,-0.99,0.19,-0.18,1.35,-1,0,0,0.975]);
Group441.children[12] = OrientationInterpolator454;

let OrientationInterpolator455 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator455.DEF = "Run_r_wrist_RotationInterpolator_Run";
OrientationInterpolator455.key = new MFFloat(new float[0,1]);
OrientationInterpolator455.keyValue = new MFRotation(new float[-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273]);
Group441.children[13] = OrientationInterpolator455;

let OrientationInterpolator456 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator456.DEF = "Run_lower_body_RotationInterpolator_Run";
OrientationInterpolator456.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator456.keyValue = new MFRotation(new float[0,-1,0,0.125,0,0,1,0,0,1,0,0.125,0,0,1,0,0,-1,0,0.125]);
Group441.children[14] = OrientationInterpolator456;

let OrientationInterpolator457 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator457.DEF = "Run_head_RotationInterpolator_Run";
OrientationInterpolator457.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator457.keyValue = new MFRotation(new float[1,0,0,0.08,1,0,0,0.12,1,0,0,0.3,1,0,0,0.3,1,0,0,0.08]);
Group441.children[15] = OrientationInterpolator457;

let OrientationInterpolator458 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator458.DEF = "Run_neck_RotationInterpolator_Run";
OrientationInterpolator458.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator458.keyValue = new MFRotation(new float[0.7,0,0,0.4,-0.7,-0.7,0,0.4,0,0,0,0.4,-0.7,0.7,0,0.4,0.7,0,0,0.4]);
Group441.children[16] = OrientationInterpolator458;

let OrientationInterpolator459 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator459.DEF = "Run_upper_body_RotationInterpolator_Run";
OrientationInterpolator459.key = new MFFloat(new float[0,0.2545,0.4909,0.7636,1]);
OrientationInterpolator459.keyValue = new MFRotation(new float[0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5]);
Group441.children[17] = OrientationInterpolator459;

let OrientationInterpolator460 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator460.DEF = "Run_whole_body_RotationInterpolator_Run";
OrientationInterpolator460.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator460.keyValue = new MFRotation(new float[1,0,0,0.06,1,0,0,0.167,1,0,0,0.06,1,0,0,0.168,1,0,0,0.06]);
Group441.children[18] = OrientationInterpolator460;

let PositionInterpolator461 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator461.DEF = "Run_whole_body_TranslationInterpolator_Run";
PositionInterpolator461.key = new MFFloat(new float[0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1]);
PositionInterpolator461.keyValue = new MFVec3f(new float[0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0]);
Group441.children[19] = PositionInterpolator461;

let OrientationInterpolator462 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator462.DEF = "Run_l_sternoclavicular_RollInterpolator";
OrientationInterpolator462.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator462.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group441.children[20] = OrientationInterpolator462;

let OrientationInterpolator463 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator463.DEF = "Run_l_acromioclavicular_RollInterpolator";
OrientationInterpolator463.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator463.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group441.children[21] = OrientationInterpolator463;

let OrientationInterpolator464 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator464.DEF = "Run_r_sternoclavicular_RollInterpolator";
OrientationInterpolator464.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator464.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group441.children[22] = OrientationInterpolator464;

let OrientationInterpolator465 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator465.DEF = "Run_r_acromioclavicular_RollInterpolator";
OrientationInterpolator465.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator465.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group441.children[23] = OrientationInterpolator465;

let OrientationInterpolator466 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator466.DEF = "Run_sacroiliac_YawInterpolator";
OrientationInterpolator466.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator466.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group441.children[24] = OrientationInterpolator466;

let OrientationInterpolator467 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator467.DEF = "Run_vl5_YawInterpolator";
OrientationInterpolator467.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator467.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group441.children[25] = OrientationInterpolator467;

let OrientationInterpolator468 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator468.DEF = "Run_vc6_YawInterpolator";
OrientationInterpolator468.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator468.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group441.children[26] = OrientationInterpolator468;

let OrientationInterpolator469 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator469.DEF = "Run_l_thumb1_PitchInterpolator";
OrientationInterpolator469.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator469.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group441.children[27] = OrientationInterpolator469;

let OrientationInterpolator470 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator470.DEF = "Run_r_thumb1_PitchInterpolator";
OrientationInterpolator470.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator470.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group441.children[28] = OrientationInterpolator470;

browser.currentScene.children[9] = Group441;

let Group471 = browser.currentScene.createNode("Group");
Group471.DEF = "JumpAnimation";
let TimeSensor472 = browser.currentScene.createNode("TimeSensor");
TimeSensor472.DEF = "JumpTimer";
TimeSensor472.cycleInterval = 3.73;
TimeSensor472.loop = True;
Group471.children = new MFNode();

Group471.children[0] = TimeSensor472;

let OrientationInterpolator473 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator473.DEF = "Jump_r_metatarsal_PitchInterpolator";
OrientationInterpolator473.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator473.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group471.children[1] = OrientationInterpolator473;

let OrientationInterpolator474 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator474.DEF = "Jump_r_ankle_RotationInterpolator";
OrientationInterpolator474.key = new MFFloat(new float[0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator474.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,1.3,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0]);
Group471.children[2] = OrientationInterpolator474;

let OrientationInterpolator475 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator475.DEF = "Jump_r_knee_RotationInterpolator";
OrientationInterpolator475.key = new MFFloat(new float[0,0.2,0.25,0.3,0.64,0.76,0.88,1]);
OrientationInterpolator475.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.5,1,0,0,1.7,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0]);
Group471.children[3] = OrientationInterpolator475;

let OrientationInterpolator476 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator476.DEF = "Jump_r_hip_RotationInterpolator";
OrientationInterpolator476.key = new MFFloat(new float[0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator476.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.63,-1,0,0,1.7,-1,0,0,1.55,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0]);
Group471.children[4] = OrientationInterpolator476;

let OrientationInterpolator477 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator477.DEF = "Jump_l_ankle_RotationInterpolator";
OrientationInterpolator477.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator477.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0]);
Group471.children[5] = OrientationInterpolator477;

let OrientationInterpolator478 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator478.DEF = "Jump_l_knee_RotationInterpolator";
OrientationInterpolator478.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator478.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0]);
Group471.children[6] = OrientationInterpolator478;

let OrientationInterpolator479 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator479.DEF = "Jump_l_hip_RotationInterpolator";
OrientationInterpolator479.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator479.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0]);
Group471.children[7] = OrientationInterpolator479;

let OrientationInterpolator480 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator480.DEF = "Jump_lower_body_RotationInterpolator";
OrientationInterpolator480.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator480.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0]);
Group471.children[8] = OrientationInterpolator480;

let OrientationInterpolator481 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator481.DEF = "Jump_r_wrist_RotationInterpolator";
OrientationInterpolator481.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator481.keyValue = new MFRotation(new float[0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
Group471.children[9] = OrientationInterpolator481;

let OrientationInterpolator482 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator482.DEF = "Jump_r_elbow_RotationInterpolator";
OrientationInterpolator482.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator482.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
Group471.children[10] = OrientationInterpolator482;

let OrientationInterpolator483 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator483.DEF = "Jump_r_shoulder_RotationInterpolator";
OrientationInterpolator483.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator483.keyValue = new MFRotation(new float[0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
Group471.children[11] = OrientationInterpolator483;

let OrientationInterpolator484 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator484.DEF = "Jump_l_wrist_RotationInterpolator";
OrientationInterpolator484.key = new MFFloat(new float[0,0.48,0.52,0.64,0.76,0.88,1]);
OrientationInterpolator484.keyValue = new MFRotation(new float[0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0]);
Group471.children[12] = OrientationInterpolator484;

let OrientationInterpolator485 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator485.DEF = "Jump_l_elbow_RotationInterpolator";
OrientationInterpolator485.key = new MFFloat(new float[0,0.28,0.32,0.58,0.72,1]);
OrientationInterpolator485.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.13,-1,0,0,1.7,-1,0,0,1.7,-1,0,0,0.4,0,0,1,0]);
Group471.children[13] = OrientationInterpolator485;

let OrientationInterpolator486 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator486.DEF = "Jump_l_shoulder_RotationInterpolator";
OrientationInterpolator486.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator486.keyValue = new MFRotation(new float[0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0]);
Group471.children[14] = OrientationInterpolator486;

let OrientationInterpolator487 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator487.DEF = "Jump_head_RotationInterpolator";
OrientationInterpolator487.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator487.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0]);
Group471.children[15] = OrientationInterpolator487;

let OrientationInterpolator488 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator488.DEF = "Jump_neck_RotationInterpolator";
OrientationInterpolator488.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator488.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0]);
Group471.children[16] = OrientationInterpolator488;

let OrientationInterpolator489 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator489.DEF = "Jump_upper_body_RotationInterpolator";
OrientationInterpolator489.key = new MFFloat(new float[0,0.22,0.28,0.34,0.71,0.88,1]);
OrientationInterpolator489.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.05,1,0,0,1.051,-1,0,0,0.257,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0]);
Group471.children[17] = OrientationInterpolator489;

let OrientationInterpolator490 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator490.DEF = "Jump_whole_body_RotationInterpolator";
OrientationInterpolator490.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,1]);
OrientationInterpolator490.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group471.children[18] = OrientationInterpolator490;

let PositionInterpolator491 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator491.DEF = "Jump_whole_body_TranslationInterpolator";
PositionInterpolator491.key = new MFFloat(new float[0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1]);
PositionInterpolator491.keyValue = new MFVec3f(new float[0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0,0.35,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0]);
Group471.children[19] = PositionInterpolator491;

let OrientationInterpolator492 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator492.DEF = "Jump_l_sternoclavicular_RollInterpolator";
OrientationInterpolator492.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator492.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group471.children[20] = OrientationInterpolator492;

let OrientationInterpolator493 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator493.DEF = "Jump_l_acromioclavicular_RollInterpolator";
OrientationInterpolator493.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator493.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group471.children[21] = OrientationInterpolator493;

let OrientationInterpolator494 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator494.DEF = "Jump_r_sternoclavicular_RollInterpolator";
OrientationInterpolator494.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator494.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group471.children[22] = OrientationInterpolator494;

let OrientationInterpolator495 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator495.DEF = "Jump_r_acromioclavicular_RollInterpolator";
OrientationInterpolator495.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator495.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group471.children[23] = OrientationInterpolator495;

let OrientationInterpolator496 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator496.DEF = "Jump_sacroiliac_YawInterpolator";
OrientationInterpolator496.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator496.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group471.children[24] = OrientationInterpolator496;

let OrientationInterpolator497 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator497.DEF = "Jump_vl5_YawInterpolator";
OrientationInterpolator497.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator497.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,-0.1,0,1,0,0,0,1,0,0,1,0,0,0.6,0,1,0,0.1,0,1,0,0]);
Group471.children[25] = OrientationInterpolator497;

let OrientationInterpolator498 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator498.DEF = "Jump_vc6_YawInterpolator";
OrientationInterpolator498.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator498.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0.8,0,1,0,0,0,1,0,0,-1,0,0,0.6,0,-1,0,0.8,0,1,0,0]);
Group471.children[26] = OrientationInterpolator498;

let OrientationInterpolator499 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator499.DEF = "Jump_l_thumb1_PitchInterpolator";
OrientationInterpolator499.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator499.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group471.children[27] = OrientationInterpolator499;

let OrientationInterpolator500 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator500.DEF = "Jump_r_thumb1_PitchInterpolator";
OrientationInterpolator500.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator500.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group471.children[28] = OrientationInterpolator500;

browser.currentScene.children[10] = Group471;

let Group501 = browser.currentScene.createNode("Group");
Group501.DEF = "KickAnimation";
let TimeSensor502 = browser.currentScene.createNode("TimeSensor");
TimeSensor502.DEF = "KickTimer";
TimeSensor502.cycleInterval = 3.73;
TimeSensor502.loop = True;
Group501.children = new MFNode();

Group501.children[0] = TimeSensor502;

let OrientationInterpolator503 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator503.DEF = "Kick_l_sternoclavicular_RollInterpolator";
OrientationInterpolator503.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator503.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group501.children[1] = OrientationInterpolator503;

let OrientationInterpolator504 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator504.DEF = "Kick_l_acromioclavicular_RollInterpolator";
OrientationInterpolator504.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator504.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group501.children[2] = OrientationInterpolator504;

let OrientationInterpolator505 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator505.DEF = "Kick_l_shoulder_RollInterpolator";
OrientationInterpolator505.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator505.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.76,-0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0,0,1,0]);
Group501.children[3] = OrientationInterpolator505;

let OrientationInterpolator506 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator506.DEF = "Kick_l_ForeArm_PitchInterpolator";
OrientationInterpolator506.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator506.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.55,-1,0.25,0,2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group501.children[4] = OrientationInterpolator506;

let OrientationInterpolator507 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator507.DEF = "Kick_l_wrist_RollInterpolator";
OrientationInterpolator507.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator507.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group501.children[5] = OrientationInterpolator507;

let OrientationInterpolator508 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator508.DEF = "Kick_l_thumb1_PitchInterpolator";
OrientationInterpolator508.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator508.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group501.children[6] = OrientationInterpolator508;

let OrientationInterpolator509 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator509.DEF = "Kick_r_sternoclavicular_RollInterpolator";
OrientationInterpolator509.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator509.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group501.children[7] = OrientationInterpolator509;

let OrientationInterpolator510 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator510.DEF = "Kick_r_acromioclavicular_RollInterpolator";
OrientationInterpolator510.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator510.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group501.children[8] = OrientationInterpolator510;

let OrientationInterpolator511 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator511.DEF = "Kick_r_shoulder_RollInterpolator";
OrientationInterpolator511.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator511.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-1.76,0.25,0,1,-1.76,0,0,1,-1.256,0,0,1,-0.05,0,0,1,0]);
Group501.children[9] = OrientationInterpolator511;

let OrientationInterpolator512 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator512.DEF = "Kick_r_ForeArm_PitchInterpolator";
OrientationInterpolator512.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator512.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.55,1,0.25,0,-2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group501.children[10] = OrientationInterpolator512;

let OrientationInterpolator513 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator513.DEF = "Kick_r_wrist_RollInterpolator";
OrientationInterpolator513.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator513.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group501.children[11] = OrientationInterpolator513;

let OrientationInterpolator514 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator514.DEF = "Kick_r_thumb1_PitchInterpolator";
OrientationInterpolator514.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator514.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group501.children[12] = OrientationInterpolator514;

let OrientationInterpolator515 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator515.DEF = "Kick_r_hip_PitchInterpolator";
OrientationInterpolator515.key = new MFFloat(new float[0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator515.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.9,-1,0,0,1.75,-1,0,0,2.25,-1,0,0,2,1,0,0,0,1,0,0,0]);
Group501.children[13] = OrientationInterpolator515;

let OrientationInterpolator516 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator516.DEF = "Kick_r_knee_PitchInterpolator";
OrientationInterpolator516.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator516.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.95,1,0,0,1.75,-1,0,0,0.28,1,0,0,0,1,0,0,0]);
Group501.children[14] = OrientationInterpolator516;

let OrientationInterpolator517 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator517.DEF = "Kick_l_hip_PitchInterpolator";
OrientationInterpolator517.key = new MFFloat(new float[0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator517.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group501.children[15] = OrientationInterpolator517;

let OrientationInterpolator518 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator518.DEF = "Kick_l_knee_PitchInterpolator";
OrientationInterpolator518.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator518.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group501.children[16] = OrientationInterpolator518;

let OrientationInterpolator519 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator519.DEF = "Kick_r_ankle_PitchInterpolator";
OrientationInterpolator519.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator519.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.9,-1,0,0,0.95,1,0,0,0.75,-1,0,0,0.05,1,0,0,0]);
Group501.children[17] = OrientationInterpolator519;

let OrientationInterpolator520 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator520.DEF = "Kick_r_metatarsal_PitchInterpolator";
OrientationInterpolator520.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator520.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group501.children[18] = OrientationInterpolator520;

let OrientationInterpolator521 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator521.DEF = "Kick_sacroiliac_YawInterpolator";
OrientationInterpolator521.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator521.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group501.children[19] = OrientationInterpolator521;

let OrientationInterpolator522 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator522.DEF = "Kick_vl5_YawInterpolator";
OrientationInterpolator522.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator522.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group501.children[20] = OrientationInterpolator522;

let OrientationInterpolator523 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator523.DEF = "Kick_vc6_YawInterpolator";
OrientationInterpolator523.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator523.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group501.children[21] = OrientationInterpolator523;

let OrientationInterpolator524 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator524.DEF = "Kick_lower_body_RotationInterpolator";
OrientationInterpolator524.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator524.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group501.children[22] = OrientationInterpolator524;

let OrientationInterpolator525 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator525.DEF = "Kick_upper_body_RotationInterpolator";
OrientationInterpolator525.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator525.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group501.children[23] = OrientationInterpolator525;

let OrientationInterpolator526 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator526.DEF = "Kick_whole_body_RotationInterpolator";
OrientationInterpolator526.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator526.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group501.children[24] = OrientationInterpolator526;

let PositionInterpolator527 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator527.DEF = "Kick_whole_body_TranslationInterpolator";
PositionInterpolator527.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator527.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group501.children[25] = PositionInterpolator527;

let OrientationInterpolator528 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator528.DEF = "Kick_neck_RotationInterpolator";
OrientationInterpolator528.key = new MFFloat(new float[0,0.25,0.55,1]);
OrientationInterpolator528.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0]);
Group501.children[26] = OrientationInterpolator528;

browser.currentScene.children[11] = Group501;

let Group529 = browser.currentScene.createNode("Group");
Group529.DEF = "Interface";
let Transform530 = browser.currentScene.createNode("Transform");
Transform530.DEF = "CoordinateSystemFloor";
Transform530.scale = new SFVec3f(new float[0.1,0.1,0.1]);
let Shape531 = browser.currentScene.createNode("Shape");
Shape531.DEF = "AxisLinesShape";
//RGB lines showing XYZ axes
let IndexedLineSet532 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet532.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet532.colorPerVertex = False;
IndexedLineSet532.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
let Coordinate533 = browser.currentScene.createNode("Coordinate");
Coordinate533.point = new MFVec3f(new float[0,0,0,1,0,0,0,1,0,0,0,1]);
IndexedLineSet532.coord = Coordinate533;

let Color534 = browser.currentScene.createNode("Color");
Color534.color = new MFColor(new float[1,0,0,0,0.6,0,0,0,1]);
IndexedLineSet532.color = Color534;

Shape531.geometry = IndexedLineSet532;

Transform530.children = new MFNode();

Transform530.children[0] = Shape531;

Group529.children = new MFNode();

Group529.children[0] = Transform530;

let ProximitySensor535 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor535.DEF = "HudProx";
ProximitySensor535.size = new SFVec3f(new float[50,50,50]);
Group529.children[1] = ProximitySensor535;

let Transform536 = browser.currentScene.createNode("Transform");
Transform536.DEF = "HudXform";
Transform536.rotation = new SFRotation(new float[0,1,0,0.78]);
Transform536.translation = new SFVec3f(new float[2,1,2]);
let Transform537 = browser.currentScene.createNode("Transform");
Transform537.scale = new SFVec3f(new float[0.02,0.02,0.02]);
Transform537.translation = new SFVec3f(new float[-0.4,-0.01,-0.75]);
let Transform538 = browser.currentScene.createNode("Transform");
Transform538.DEF = "Stand_Text";
Transform538.translation = new SFVec3f(new float[0,-0.9,0]);
let TouchSensor539 = browser.currentScene.createNode("TouchSensor");
TouchSensor539.DEF = "Stand_Touch";
Transform538.children = new MFNode();

Transform538.children[0] = TouchSensor539;

let Shape540 = browser.currentScene.createNode("Shape");
Shape540.DEF = "StandText";
let Appearance541 = browser.currentScene.createNode("Appearance");
let Material542 = browser.currentScene.createNode("Material");
Material542.DEF = "text_color";
Material542.ambientIntensity = 1;
Material542.diffuseColor = new SFColor(new float[0.819,0.521,0.169]);
Material542.emissiveColor = new SFColor(new float[0.819,0.521,0.169]);
Material542.specularColor = new SFColor(new float[0.819,0.521,0.169]);
Appearance541.material = Material542;

Shape540.appearance = Appearance541;

let Text543 = browser.currentScene.createNode("Text");
Text543.string = new MFString(new java.lang.String["Stand"]);
let FontStyle544 = browser.currentScene.createNode("FontStyle");
FontStyle544.family = new MFString(new java.lang.String["SANS"]);
Text543.fontStyle = FontStyle544;

Shape540.geometry = Text543;

Transform538.children[1] = Shape540;

let Shape545 = browser.currentScene.createNode("Shape");
Shape545.DEF = "Stand_Back";
let Appearance546 = browser.currentScene.createNode("Appearance");
let Material547 = browser.currentScene.createNode("Material");
Material547.DEF = "Clear";
Material547.ambientIntensity = 1;
Material547.diffuseColor = new SFColor(new float[0,0.5,0]);
Material547.emissiveColor = new SFColor(new float[0,0.5,0]);
Material547.transparency = 0.8;
Appearance546.material = Material547;

Shape545.appearance = Appearance546;

let IndexedFaceSet548 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet548.DEF = "Backing";
IndexedFaceSet548.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
let Coordinate549 = browser.currentScene.createNode("Coordinate");
Coordinate549.point = new MFVec3f(new float[-0.2,-0.25,-0.01,3,-0.25,-0.01,3,1,-0.01,-0.2,1,-0.01]);
IndexedFaceSet548.coord = Coordinate549;

Shape545.geometry = IndexedFaceSet548;

Transform538.children[2] = Shape545;

Transform537.children = new MFNode();

Transform537.children[0] = Transform538;

let Transform550 = browser.currentScene.createNode("Transform");
Transform550.DEF = "Pitch_Text";
Transform550.translation = new SFVec3f(new float[0,-2.4,0]);
let TouchSensor551 = browser.currentScene.createNode("TouchSensor");
TouchSensor551.DEF = "Pitch_Touch";
Transform550.children = new MFNode();

Transform550.children[0] = TouchSensor551;

let Shape552 = browser.currentScene.createNode("Shape");
Shape552.DEF = "PitchText";
let Appearance553 = browser.currentScene.createNode("Appearance");
let Material554 = browser.currentScene.createNode("Material");
Material554.USE = "text_color";
Appearance553.material = Material554;

Shape552.appearance = Appearance553;

let Text555 = browser.currentScene.createNode("Text");
Text555.string = new MFString(new java.lang.String["Pitch"]);
let FontStyle556 = browser.currentScene.createNode("FontStyle");
FontStyle556.family = new MFString(new java.lang.String["SANS"]);
Text555.fontStyle = FontStyle556;

Shape552.geometry = Text555;

Transform550.children[1] = Shape552;

let Shape557 = browser.currentScene.createNode("Shape");
Shape557.DEF = "Pitch_Back";
let Appearance558 = browser.currentScene.createNode("Appearance");
let Material559 = browser.currentScene.createNode("Material");
Material559.USE = "Clear";
Appearance558.material = Material559;

Shape557.appearance = Appearance558;

let IndexedFaceSet560 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet560.USE = "Backing";
Shape557.geometry = IndexedFaceSet560;

Transform550.children[2] = Shape557;

Transform537.children[1] = Transform550;

let Transform561 = browser.currentScene.createNode("Transform");
Transform561.DEF = "Yaw_Text";
Transform561.translation = new SFVec3f(new float[0,-3.8,0]);
let TouchSensor562 = browser.currentScene.createNode("TouchSensor");
TouchSensor562.DEF = "Yaw_Touch";
Transform561.children = new MFNode();

Transform561.children[0] = TouchSensor562;

let Shape563 = browser.currentScene.createNode("Shape");
Shape563.DEF = "YawText";
let Appearance564 = browser.currentScene.createNode("Appearance");
let Material565 = browser.currentScene.createNode("Material");
Material565.USE = "text_color";
Appearance564.material = Material565;

Shape563.appearance = Appearance564;

let Text566 = browser.currentScene.createNode("Text");
Text566.string = new MFString(new java.lang.String["Yaw"]);
let FontStyle567 = browser.currentScene.createNode("FontStyle");
FontStyle567.family = new MFString(new java.lang.String["SANS"]);
Text566.fontStyle = FontStyle567;

Shape563.geometry = Text566;

Transform561.children[1] = Shape563;

let Shape568 = browser.currentScene.createNode("Shape");
Shape568.DEF = "Yaw_Back";
let Appearance569 = browser.currentScene.createNode("Appearance");
let Material570 = browser.currentScene.createNode("Material");
Material570.USE = "Clear";
Appearance569.material = Material570;

Shape568.appearance = Appearance569;

let IndexedFaceSet571 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet571.USE = "Backing";
Shape568.geometry = IndexedFaceSet571;

Transform561.children[2] = Shape568;

Transform537.children[2] = Transform561;

let Transform572 = browser.currentScene.createNode("Transform");
Transform572.DEF = "Roll_Text";
Transform572.translation = new SFVec3f(new float[0,-5.2,0]);
let TouchSensor573 = browser.currentScene.createNode("TouchSensor");
TouchSensor573.DEF = "Roll_Touch";
Transform572.children = new MFNode();

Transform572.children[0] = TouchSensor573;

let Shape574 = browser.currentScene.createNode("Shape");
Shape574.DEF = "RollText";
let Appearance575 = browser.currentScene.createNode("Appearance");
let Material576 = browser.currentScene.createNode("Material");
Material576.USE = "text_color";
Appearance575.material = Material576;

Shape574.appearance = Appearance575;

let Text577 = browser.currentScene.createNode("Text");
Text577.string = new MFString(new java.lang.String["Roll"]);
let FontStyle578 = browser.currentScene.createNode("FontStyle");
FontStyle578.family = new MFString(new java.lang.String["SANS"]);
Text577.fontStyle = FontStyle578;

Shape574.geometry = Text577;

Transform572.children[1] = Shape574;

let Shape579 = browser.currentScene.createNode("Shape");
Shape579.DEF = "Roll_Back";
let Appearance580 = browser.currentScene.createNode("Appearance");
let Material581 = browser.currentScene.createNode("Material");
Material581.USE = "Clear";
Appearance580.material = Material581;

Shape579.appearance = Appearance580;

let IndexedFaceSet582 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet582.USE = "Backing";
Shape579.geometry = IndexedFaceSet582;

Transform572.children[2] = Shape579;

Transform537.children[3] = Transform572;

let Transform583 = browser.currentScene.createNode("Transform");
Transform583.DEF = "Walk_Text";
Transform583.translation = new SFVec3f(new float[0,-6.6,0]);
let TouchSensor584 = browser.currentScene.createNode("TouchSensor");
TouchSensor584.DEF = "Walk_Touch";
Transform583.children = new MFNode();

Transform583.children[0] = TouchSensor584;

let Shape585 = browser.currentScene.createNode("Shape");
Shape585.DEF = "WalkText";
let Appearance586 = browser.currentScene.createNode("Appearance");
let Material587 = browser.currentScene.createNode("Material");
Material587.USE = "text_color";
Appearance586.material = Material587;

Shape585.appearance = Appearance586;

let Text588 = browser.currentScene.createNode("Text");
Text588.string = new MFString(new java.lang.String["Walk"]);
let FontStyle589 = browser.currentScene.createNode("FontStyle");
FontStyle589.family = new MFString(new java.lang.String["SANS"]);
Text588.fontStyle = FontStyle589;

Shape585.geometry = Text588;

Transform583.children[1] = Shape585;

let Shape590 = browser.currentScene.createNode("Shape");
Shape590.DEF = "Walk_Back";
let Appearance591 = browser.currentScene.createNode("Appearance");
let Material592 = browser.currentScene.createNode("Material");
Material592.USE = "Clear";
Appearance591.material = Material592;

Shape590.appearance = Appearance591;

let IndexedFaceSet593 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet593.USE = "Backing";
Shape590.geometry = IndexedFaceSet593;

Transform583.children[2] = Shape590;

Transform537.children[4] = Transform583;

let Transform594 = browser.currentScene.createNode("Transform");
Transform594.DEF = "Run_Text";
Transform594.translation = new SFVec3f(new float[0,-8,0]);
let TouchSensor595 = browser.currentScene.createNode("TouchSensor");
TouchSensor595.DEF = "Run_Touch";
Transform594.children = new MFNode();

Transform594.children[0] = TouchSensor595;

let Shape596 = browser.currentScene.createNode("Shape");
Shape596.DEF = "RunText";
let Appearance597 = browser.currentScene.createNode("Appearance");
let Material598 = browser.currentScene.createNode("Material");
Material598.USE = "text_color";
Appearance597.material = Material598;

Shape596.appearance = Appearance597;

let Text599 = browser.currentScene.createNode("Text");
Text599.string = new MFString(new java.lang.String["Run"]);
let FontStyle600 = browser.currentScene.createNode("FontStyle");
FontStyle600.family = new MFString(new java.lang.String["SANS"]);
Text599.fontStyle = FontStyle600;

Shape596.geometry = Text599;

Transform594.children[1] = Shape596;

let Shape601 = browser.currentScene.createNode("Shape");
Shape601.DEF = "Run_Back";
let Appearance602 = browser.currentScene.createNode("Appearance");
let Material603 = browser.currentScene.createNode("Material");
Material603.USE = "Clear";
Appearance602.material = Material603;

Shape601.appearance = Appearance602;

let IndexedFaceSet604 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet604.USE = "Backing";
Shape601.geometry = IndexedFaceSet604;

Transform594.children[2] = Shape601;

Transform537.children[5] = Transform594;

let Transform605 = browser.currentScene.createNode("Transform");
Transform605.DEF = "Jump_Text";
Transform605.translation = new SFVec3f(new float[0,-9.4,0]);
let TouchSensor606 = browser.currentScene.createNode("TouchSensor");
TouchSensor606.DEF = "Jump_Touch";
Transform605.children = new MFNode();

Transform605.children[0] = TouchSensor606;

let Shape607 = browser.currentScene.createNode("Shape");
Shape607.DEF = "JumpText";
let Appearance608 = browser.currentScene.createNode("Appearance");
let Material609 = browser.currentScene.createNode("Material");
Material609.USE = "text_color";
Appearance608.material = Material609;

Shape607.appearance = Appearance608;

let Text610 = browser.currentScene.createNode("Text");
Text610.string = new MFString(new java.lang.String["Jump"]);
let FontStyle611 = browser.currentScene.createNode("FontStyle");
FontStyle611.family = new MFString(new java.lang.String["SANS"]);
Text610.fontStyle = FontStyle611;

Shape607.geometry = Text610;

Transform605.children[1] = Shape607;

let Shape612 = browser.currentScene.createNode("Shape");
Shape612.DEF = "Jump_Back";
let Appearance613 = browser.currentScene.createNode("Appearance");
let Material614 = browser.currentScene.createNode("Material");
Material614.USE = "Clear";
Appearance613.material = Material614;

Shape612.appearance = Appearance613;

let IndexedFaceSet615 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet615.USE = "Backing";
Shape612.geometry = IndexedFaceSet615;

Transform605.children[2] = Shape612;

Transform537.children[6] = Transform605;

let Transform616 = browser.currentScene.createNode("Transform");
Transform616.DEF = "Kick_Text";
Transform616.translation = new SFVec3f(new float[0,-10.8,0]);
let TouchSensor617 = browser.currentScene.createNode("TouchSensor");
TouchSensor617.DEF = "Kick_Touch";
Transform616.children = new MFNode();

Transform616.children[0] = TouchSensor617;

let Shape618 = browser.currentScene.createNode("Shape");
Shape618.DEF = "KickText";
let Appearance619 = browser.currentScene.createNode("Appearance");
let Material620 = browser.currentScene.createNode("Material");
Material620.USE = "text_color";
Appearance619.material = Material620;

Shape618.appearance = Appearance619;

let Text621 = browser.currentScene.createNode("Text");
Text621.string = new MFString(new java.lang.String["Kick"]);
let FontStyle622 = browser.currentScene.createNode("FontStyle");
FontStyle622.family = new MFString(new java.lang.String["SANS"]);
Text621.fontStyle = FontStyle622;

Shape618.geometry = Text621;

Transform616.children[1] = Shape618;

let Shape623 = browser.currentScene.createNode("Shape");
Shape623.DEF = "Kick_Back";
let Appearance624 = browser.currentScene.createNode("Appearance");
let Material625 = browser.currentScene.createNode("Material");
Material625.USE = "Clear";
Appearance624.material = Material625;

Shape623.appearance = Appearance624;

let IndexedFaceSet626 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet626.USE = "Backing";
Shape623.geometry = IndexedFaceSet626;

Transform616.children[2] = Shape623;

Transform537.children[7] = Transform616;

let Transform627 = browser.currentScene.createNode("Transform");
Transform627.DEF = "Stop_Text";
Transform627.translation = new SFVec3f(new float[0,0.4,0]);
let TouchSensor628 = browser.currentScene.createNode("TouchSensor");
TouchSensor628.DEF = "Stop_Touch";
Transform627.children = new MFNode();

Transform627.children[0] = TouchSensor628;

let Shape629 = browser.currentScene.createNode("Shape");
Shape629.DEF = "StopText";
let Appearance630 = browser.currentScene.createNode("Appearance");
let Material631 = browser.currentScene.createNode("Material");
Material631.USE = "text_color";
Appearance630.material = Material631;

Shape629.appearance = Appearance630;

let Text632 = browser.currentScene.createNode("Text");
Text632.string = new MFString(new java.lang.String["Default"]);
let FontStyle633 = browser.currentScene.createNode("FontStyle");
FontStyle633.family = new MFString(new java.lang.String["SANS"]);
Text632.fontStyle = FontStyle633;

Shape629.geometry = Text632;

Transform627.children[1] = Shape629;

let Shape634 = browser.currentScene.createNode("Shape");
Shape634.DEF = "Stop_Back";
let Appearance635 = browser.currentScene.createNode("Appearance");
let Material636 = browser.currentScene.createNode("Material");
Material636.USE = "Clear";
Appearance635.material = Material636;

Shape634.appearance = Appearance635;

let IndexedFaceSet637 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet637.USE = "Backing";
Shape634.geometry = IndexedFaceSet637;

Transform627.children[2] = Shape634;

Transform537.children[8] = Transform627;

let Transform638 = browser.currentScene.createNode("Transform");
Transform638.DEF = "SceneLabel";
Transform638.translation = new SFVec3f(new float[1.3,3,0]);
let Shape639 = browser.currentScene.createNode("Shape");
Shape639.DEF = "SceneLabelText";
let Appearance640 = browser.currentScene.createNode("Appearance");
let Material641 = browser.currentScene.createNode("Material");
Material641.USE = "text_color";
Appearance640.material = Material641;

Shape639.appearance = Appearance640;

let Text642 = browser.currentScene.createNode("Text");
Text642.string = new MFString(new java.lang.String["BoxMan","Animation"]);
let FontStyle643 = browser.currentScene.createNode("FontStyle");
FontStyle643.family = new MFString(new java.lang.String["SANS"]);
FontStyle643.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text642.fontStyle = FontStyle643;

Shape639.geometry = Text642;

Transform638.children = new MFNode();

Transform638.children[0] = Shape639;

Transform537.children[9] = Transform638;

Transform536.children = new MFNode();

Transform536.children[0] = Transform537;

Group529.children[2] = Transform536;

browser.currentScene.children[12] = Group529;

let ROUTE644 = browser.currentScene.createNode("ROUTE");
ROUTE644.fromField = "fraction_changed";
ROUTE644.fromNode = "StopTimer";
ROUTE644.toField = "set_fraction";
ROUTE644.toNode = "Stop_humanoid_root_TranslationInterpolator";
browser.currentScene.children[13] = ROUTE644;

let ROUTE645 = browser.currentScene.createNode("ROUTE");
ROUTE645.fromField = "fraction_changed";
ROUTE645.fromNode = "StopTimer";
ROUTE645.toField = "set_fraction";
ROUTE645.toNode = "Stop_humanoid_root_RotationInterpolator";
browser.currentScene.children[14] = ROUTE645;

let ROUTE646 = browser.currentScene.createNode("ROUTE");
ROUTE646.fromField = "fraction_changed";
ROUTE646.fromNode = "StopTimer";
ROUTE646.toField = "set_fraction";
ROUTE646.toNode = "Stop_sacroiliac_RotationInterpolator";
browser.currentScene.children[15] = ROUTE646;

let ROUTE647 = browser.currentScene.createNode("ROUTE");
ROUTE647.fromField = "fraction_changed";
ROUTE647.fromNode = "StopTimer";
ROUTE647.toField = "set_fraction";
ROUTE647.toNode = "Stop_l_hip_RotationInterpolator";
browser.currentScene.children[16] = ROUTE647;

let ROUTE648 = browser.currentScene.createNode("ROUTE");
ROUTE648.fromField = "fraction_changed";
ROUTE648.fromNode = "StopTimer";
ROUTE648.toField = "set_fraction";
ROUTE648.toNode = "Stop_l_knee_RotationInterpolator";
browser.currentScene.children[17] = ROUTE648;

let ROUTE649 = browser.currentScene.createNode("ROUTE");
ROUTE649.fromField = "fraction_changed";
ROUTE649.fromNode = "StopTimer";
ROUTE649.toField = "set_fraction";
ROUTE649.toNode = "Stop_l_ankle_RotationInterpolator";
browser.currentScene.children[18] = ROUTE649;

let ROUTE650 = browser.currentScene.createNode("ROUTE");
ROUTE650.fromField = "fraction_changed";
ROUTE650.fromNode = "StopTimer";
ROUTE650.toField = "set_fraction";
ROUTE650.toNode = "Stop_l_subtalar_RotationInterpolator";
browser.currentScene.children[19] = ROUTE650;

let ROUTE651 = browser.currentScene.createNode("ROUTE");
ROUTE651.fromField = "fraction_changed";
ROUTE651.fromNode = "StopTimer";
ROUTE651.toField = "set_fraction";
ROUTE651.toNode = "Stop_l_midtarsal_RotationInterpolator";
browser.currentScene.children[20] = ROUTE651;

let ROUTE652 = browser.currentScene.createNode("ROUTE");
ROUTE652.fromField = "fraction_changed";
ROUTE652.fromNode = "StopTimer";
ROUTE652.toField = "set_fraction";
ROUTE652.toNode = "Stop_l_metatarsal_RotationInterpolator";
browser.currentScene.children[21] = ROUTE652;

let ROUTE653 = browser.currentScene.createNode("ROUTE");
ROUTE653.fromField = "fraction_changed";
ROUTE653.fromNode = "StopTimer";
ROUTE653.toField = "set_fraction";
ROUTE653.toNode = "Stop_r_hip_RotationInterpolator";
browser.currentScene.children[22] = ROUTE653;

let ROUTE654 = browser.currentScene.createNode("ROUTE");
ROUTE654.fromField = "fraction_changed";
ROUTE654.fromNode = "StopTimer";
ROUTE654.toField = "set_fraction";
ROUTE654.toNode = "Stop_r_knee_RotationInterpolator";
browser.currentScene.children[23] = ROUTE654;

let ROUTE655 = browser.currentScene.createNode("ROUTE");
ROUTE655.fromField = "fraction_changed";
ROUTE655.fromNode = "StopTimer";
ROUTE655.toField = "set_fraction";
ROUTE655.toNode = "Stop_r_ankle_RotationInterpolator";
browser.currentScene.children[24] = ROUTE655;

let ROUTE656 = browser.currentScene.createNode("ROUTE");
ROUTE656.fromField = "fraction_changed";
ROUTE656.fromNode = "StopTimer";
ROUTE656.toField = "set_fraction";
ROUTE656.toNode = "Stop_r_subtalar_RotationInterpolator";
browser.currentScene.children[25] = ROUTE656;

let ROUTE657 = browser.currentScene.createNode("ROUTE");
ROUTE657.fromField = "fraction_changed";
ROUTE657.fromNode = "StopTimer";
ROUTE657.toField = "set_fraction";
ROUTE657.toNode = "Stop_r_midtarsal_RotationInterpolator";
browser.currentScene.children[26] = ROUTE657;

let ROUTE658 = browser.currentScene.createNode("ROUTE");
ROUTE658.fromField = "fraction_changed";
ROUTE658.fromNode = "StopTimer";
ROUTE658.toField = "set_fraction";
ROUTE658.toNode = "Stop_r_metatarsal_RotationInterpolator";
browser.currentScene.children[27] = ROUTE658;

let ROUTE659 = browser.currentScene.createNode("ROUTE");
ROUTE659.fromField = "fraction_changed";
ROUTE659.fromNode = "StopTimer";
ROUTE659.toField = "set_fraction";
ROUTE659.toNode = "Stop_vl5_RotationInterpolator";
browser.currentScene.children[28] = ROUTE659;

let ROUTE660 = browser.currentScene.createNode("ROUTE");
ROUTE660.fromField = "fraction_changed";
ROUTE660.fromNode = "StopTimer";
ROUTE660.toField = "set_fraction";
ROUTE660.toNode = "Stop_vl4_RotationInterpolator";
browser.currentScene.children[29] = ROUTE660;

let ROUTE661 = browser.currentScene.createNode("ROUTE");
ROUTE661.fromField = "fraction_changed";
ROUTE661.fromNode = "StopTimer";
ROUTE661.toField = "set_fraction";
ROUTE661.toNode = "Stop_vl3_RotationInterpolator";
browser.currentScene.children[30] = ROUTE661;

let ROUTE662 = browser.currentScene.createNode("ROUTE");
ROUTE662.fromField = "fraction_changed";
ROUTE662.fromNode = "StopTimer";
ROUTE662.toField = "set_fraction";
ROUTE662.toNode = "Stop_vl2_RotationInterpolator";
browser.currentScene.children[31] = ROUTE662;

let ROUTE663 = browser.currentScene.createNode("ROUTE");
ROUTE663.fromField = "fraction_changed";
ROUTE663.fromNode = "StopTimer";
ROUTE663.toField = "set_fraction";
ROUTE663.toNode = "Stop_vl1_RotationInterpolator";
browser.currentScene.children[32] = ROUTE663;

let ROUTE664 = browser.currentScene.createNode("ROUTE");
ROUTE664.fromField = "fraction_changed";
ROUTE664.fromNode = "StopTimer";
ROUTE664.toField = "set_fraction";
ROUTE664.toNode = "Stop_vt12_RotationInterpolator";
browser.currentScene.children[33] = ROUTE664;

let ROUTE665 = browser.currentScene.createNode("ROUTE");
ROUTE665.fromField = "fraction_changed";
ROUTE665.fromNode = "StopTimer";
ROUTE665.toField = "set_fraction";
ROUTE665.toNode = "Stop_vt11_RotationInterpolator";
browser.currentScene.children[34] = ROUTE665;

let ROUTE666 = browser.currentScene.createNode("ROUTE");
ROUTE666.fromField = "fraction_changed";
ROUTE666.fromNode = "StopTimer";
ROUTE666.toField = "set_fraction";
ROUTE666.toNode = "Stop_vt10_RotationInterpolator";
browser.currentScene.children[35] = ROUTE666;

let ROUTE667 = browser.currentScene.createNode("ROUTE");
ROUTE667.fromField = "fraction_changed";
ROUTE667.fromNode = "StopTimer";
ROUTE667.toField = "set_fraction";
ROUTE667.toNode = "Stop_vt9_RotationInterpolator";
browser.currentScene.children[36] = ROUTE667;

let ROUTE668 = browser.currentScene.createNode("ROUTE");
ROUTE668.fromField = "fraction_changed";
ROUTE668.fromNode = "StopTimer";
ROUTE668.toField = "set_fraction";
ROUTE668.toNode = "Stop_vt8_RotationInterpolator";
browser.currentScene.children[37] = ROUTE668;

let ROUTE669 = browser.currentScene.createNode("ROUTE");
ROUTE669.fromField = "fraction_changed";
ROUTE669.fromNode = "StopTimer";
ROUTE669.toField = "set_fraction";
ROUTE669.toNode = "Stop_vt7_RotationInterpolator";
browser.currentScene.children[38] = ROUTE669;

let ROUTE670 = browser.currentScene.createNode("ROUTE");
ROUTE670.fromField = "fraction_changed";
ROUTE670.fromNode = "StopTimer";
ROUTE670.toField = "set_fraction";
ROUTE670.toNode = "Stop_vt6_RotationInterpolator";
browser.currentScene.children[39] = ROUTE670;

let ROUTE671 = browser.currentScene.createNode("ROUTE");
ROUTE671.fromField = "fraction_changed";
ROUTE671.fromNode = "StopTimer";
ROUTE671.toField = "set_fraction";
ROUTE671.toNode = "Stop_vt5_RotationInterpolator";
browser.currentScene.children[40] = ROUTE671;

let ROUTE672 = browser.currentScene.createNode("ROUTE");
ROUTE672.fromField = "fraction_changed";
ROUTE672.fromNode = "StopTimer";
ROUTE672.toField = "set_fraction";
ROUTE672.toNode = "Stop_vt4_RotationInterpolator";
browser.currentScene.children[41] = ROUTE672;

let ROUTE673 = browser.currentScene.createNode("ROUTE");
ROUTE673.fromField = "fraction_changed";
ROUTE673.fromNode = "StopTimer";
ROUTE673.toField = "set_fraction";
ROUTE673.toNode = "Stop_vt3_RotationInterpolator";
browser.currentScene.children[42] = ROUTE673;

let ROUTE674 = browser.currentScene.createNode("ROUTE");
ROUTE674.fromField = "fraction_changed";
ROUTE674.fromNode = "StopTimer";
ROUTE674.toField = "set_fraction";
ROUTE674.toNode = "Stop_vt2_RotationInterpolator";
browser.currentScene.children[43] = ROUTE674;

let ROUTE675 = browser.currentScene.createNode("ROUTE");
ROUTE675.fromField = "fraction_changed";
ROUTE675.fromNode = "StopTimer";
ROUTE675.toField = "set_fraction";
ROUTE675.toNode = "Stop_vt1_RotationInterpolator";
browser.currentScene.children[44] = ROUTE675;

let ROUTE676 = browser.currentScene.createNode("ROUTE");
ROUTE676.fromField = "fraction_changed";
ROUTE676.fromNode = "StopTimer";
ROUTE676.toField = "set_fraction";
ROUTE676.toNode = "Stop_vc7_RotationInterpolator";
browser.currentScene.children[45] = ROUTE676;

let ROUTE677 = browser.currentScene.createNode("ROUTE");
ROUTE677.fromField = "fraction_changed";
ROUTE677.fromNode = "StopTimer";
ROUTE677.toField = "set_fraction";
ROUTE677.toNode = "Stop_vc6_RotationInterpolator";
browser.currentScene.children[46] = ROUTE677;

let ROUTE678 = browser.currentScene.createNode("ROUTE");
ROUTE678.fromField = "fraction_changed";
ROUTE678.fromNode = "StopTimer";
ROUTE678.toField = "set_fraction";
ROUTE678.toNode = "Stop_vc5_RotationInterpolator";
browser.currentScene.children[47] = ROUTE678;

let ROUTE679 = browser.currentScene.createNode("ROUTE");
ROUTE679.fromField = "fraction_changed";
ROUTE679.fromNode = "StopTimer";
ROUTE679.toField = "set_fraction";
ROUTE679.toNode = "Stop_vc4_RotationInterpolator";
browser.currentScene.children[48] = ROUTE679;

let ROUTE680 = browser.currentScene.createNode("ROUTE");
ROUTE680.fromField = "fraction_changed";
ROUTE680.fromNode = "StopTimer";
ROUTE680.toField = "set_fraction";
ROUTE680.toNode = "Stop_vc3_RotationInterpolator";
browser.currentScene.children[49] = ROUTE680;

let ROUTE681 = browser.currentScene.createNode("ROUTE");
ROUTE681.fromField = "fraction_changed";
ROUTE681.fromNode = "StopTimer";
ROUTE681.toField = "set_fraction";
ROUTE681.toNode = "Stop_vc2_RotationInterpolator";
browser.currentScene.children[50] = ROUTE681;

let ROUTE682 = browser.currentScene.createNode("ROUTE");
ROUTE682.fromField = "fraction_changed";
ROUTE682.fromNode = "StopTimer";
ROUTE682.toField = "set_fraction";
ROUTE682.toNode = "Stop_vc1_RotationInterpolator";
browser.currentScene.children[51] = ROUTE682;

let ROUTE683 = browser.currentScene.createNode("ROUTE");
ROUTE683.fromField = "fraction_changed";
ROUTE683.fromNode = "StopTimer";
ROUTE683.toField = "set_fraction";
ROUTE683.toNode = "Stop_skullbase_RotationInterpolator";
browser.currentScene.children[52] = ROUTE683;

let ROUTE684 = browser.currentScene.createNode("ROUTE");
ROUTE684.fromField = "fraction_changed";
ROUTE684.fromNode = "StopTimer";
ROUTE684.toField = "set_fraction";
ROUTE684.toNode = "Stop_l_eyeball_joint_RotationInterpolator";
browser.currentScene.children[53] = ROUTE684;

let ROUTE685 = browser.currentScene.createNode("ROUTE");
ROUTE685.fromField = "fraction_changed";
ROUTE685.fromNode = "StopTimer";
ROUTE685.toField = "set_fraction";
ROUTE685.toNode = "Stop_r_eyeball_joint_RotationInterpolator";
browser.currentScene.children[54] = ROUTE685;

let ROUTE686 = browser.currentScene.createNode("ROUTE");
ROUTE686.fromField = "fraction_changed";
ROUTE686.fromNode = "StopTimer";
ROUTE686.toField = "set_fraction";
ROUTE686.toNode = "Stop_l_sternoclavicular_RotationInterpolator";
browser.currentScene.children[55] = ROUTE686;

let ROUTE687 = browser.currentScene.createNode("ROUTE");
ROUTE687.fromField = "fraction_changed";
ROUTE687.fromNode = "StopTimer";
ROUTE687.toField = "set_fraction";
ROUTE687.toNode = "Stop_l_acromioclavicular_RotationInterpolator";
browser.currentScene.children[56] = ROUTE687;

let ROUTE688 = browser.currentScene.createNode("ROUTE");
ROUTE688.fromField = "fraction_changed";
ROUTE688.fromNode = "StopTimer";
ROUTE688.toField = "set_fraction";
ROUTE688.toNode = "Stop_l_shoulder_RotationInterpolator";
browser.currentScene.children[57] = ROUTE688;

let ROUTE689 = browser.currentScene.createNode("ROUTE");
ROUTE689.fromField = "fraction_changed";
ROUTE689.fromNode = "StopTimer";
ROUTE689.toField = "set_fraction";
ROUTE689.toNode = "Stop_l_elbow_RotationInterpolator";
browser.currentScene.children[58] = ROUTE689;

let ROUTE690 = browser.currentScene.createNode("ROUTE");
ROUTE690.fromField = "fraction_changed";
ROUTE690.fromNode = "StopTimer";
ROUTE690.toField = "set_fraction";
ROUTE690.toNode = "Stop_l_wrist_RotationInterpolator";
browser.currentScene.children[59] = ROUTE690;

let ROUTE691 = browser.currentScene.createNode("ROUTE");
ROUTE691.fromField = "fraction_changed";
ROUTE691.fromNode = "StopTimer";
ROUTE691.toField = "set_fraction";
ROUTE691.toNode = "Stop_l_thumb1_RotationInterpolator";
browser.currentScene.children[60] = ROUTE691;

let ROUTE692 = browser.currentScene.createNode("ROUTE");
ROUTE692.fromField = "fraction_changed";
ROUTE692.fromNode = "StopTimer";
ROUTE692.toField = "set_fraction";
ROUTE692.toNode = "Stop_l_thumb2_RotationInterpolator";
browser.currentScene.children[61] = ROUTE692;

let ROUTE693 = browser.currentScene.createNode("ROUTE");
ROUTE693.fromField = "fraction_changed";
ROUTE693.fromNode = "StopTimer";
ROUTE693.toField = "set_fraction";
ROUTE693.toNode = "Stop_l_thumb3_RotationInterpolator";
browser.currentScene.children[62] = ROUTE693;

let ROUTE694 = browser.currentScene.createNode("ROUTE");
ROUTE694.fromField = "fraction_changed";
ROUTE694.fromNode = "StopTimer";
ROUTE694.toField = "set_fraction";
ROUTE694.toNode = "Stop_l_index0_RotationInterpolator";
browser.currentScene.children[63] = ROUTE694;

let ROUTE695 = browser.currentScene.createNode("ROUTE");
ROUTE695.fromField = "fraction_changed";
ROUTE695.fromNode = "StopTimer";
ROUTE695.toField = "set_fraction";
ROUTE695.toNode = "Stop_l_index1_RotationInterpolator";
browser.currentScene.children[64] = ROUTE695;

let ROUTE696 = browser.currentScene.createNode("ROUTE");
ROUTE696.fromField = "fraction_changed";
ROUTE696.fromNode = "StopTimer";
ROUTE696.toField = "set_fraction";
ROUTE696.toNode = "Stop_l_index2_RotationInterpolator";
browser.currentScene.children[65] = ROUTE696;

let ROUTE697 = browser.currentScene.createNode("ROUTE");
ROUTE697.fromField = "fraction_changed";
ROUTE697.fromNode = "StopTimer";
ROUTE697.toField = "set_fraction";
ROUTE697.toNode = "Stop_l_index3_RotationInterpolator";
browser.currentScene.children[66] = ROUTE697;

let ROUTE698 = browser.currentScene.createNode("ROUTE");
ROUTE698.fromField = "fraction_changed";
ROUTE698.fromNode = "StopTimer";
ROUTE698.toField = "set_fraction";
ROUTE698.toNode = "Stop_l_middle0_RotationInterpolator";
browser.currentScene.children[67] = ROUTE698;

let ROUTE699 = browser.currentScene.createNode("ROUTE");
ROUTE699.fromField = "fraction_changed";
ROUTE699.fromNode = "StopTimer";
ROUTE699.toField = "set_fraction";
ROUTE699.toNode = "Stop_l_middle1_RotationInterpolator";
browser.currentScene.children[68] = ROUTE699;

let ROUTE700 = browser.currentScene.createNode("ROUTE");
ROUTE700.fromField = "fraction_changed";
ROUTE700.fromNode = "StopTimer";
ROUTE700.toField = "set_fraction";
ROUTE700.toNode = "Stop_l_middle2_RotationInterpolator";
browser.currentScene.children[69] = ROUTE700;

let ROUTE701 = browser.currentScene.createNode("ROUTE");
ROUTE701.fromField = "fraction_changed";
ROUTE701.fromNode = "StopTimer";
ROUTE701.toField = "set_fraction";
ROUTE701.toNode = "Stop_l_middle3_RotationInterpolator";
browser.currentScene.children[70] = ROUTE701;

let ROUTE702 = browser.currentScene.createNode("ROUTE");
ROUTE702.fromField = "fraction_changed";
ROUTE702.fromNode = "StopTimer";
ROUTE702.toField = "set_fraction";
ROUTE702.toNode = "Stop_l_ring0_RotationInterpolator";
browser.currentScene.children[71] = ROUTE702;

let ROUTE703 = browser.currentScene.createNode("ROUTE");
ROUTE703.fromField = "fraction_changed";
ROUTE703.fromNode = "StopTimer";
ROUTE703.toField = "set_fraction";
ROUTE703.toNode = "Stop_l_ring1_RotationInterpolator";
browser.currentScene.children[72] = ROUTE703;

let ROUTE704 = browser.currentScene.createNode("ROUTE");
ROUTE704.fromField = "fraction_changed";
ROUTE704.fromNode = "StopTimer";
ROUTE704.toField = "set_fraction";
ROUTE704.toNode = "Stop_l_ring2_RotationInterpolator";
browser.currentScene.children[73] = ROUTE704;

let ROUTE705 = browser.currentScene.createNode("ROUTE");
ROUTE705.fromField = "fraction_changed";
ROUTE705.fromNode = "StopTimer";
ROUTE705.toField = "set_fraction";
ROUTE705.toNode = "Stop_l_ring3_RotationInterpolator";
browser.currentScene.children[74] = ROUTE705;

let ROUTE706 = browser.currentScene.createNode("ROUTE");
ROUTE706.fromField = "fraction_changed";
ROUTE706.fromNode = "StopTimer";
ROUTE706.toField = "set_fraction";
ROUTE706.toNode = "Stop_l_pinky0_RotationInterpolator";
browser.currentScene.children[75] = ROUTE706;

let ROUTE707 = browser.currentScene.createNode("ROUTE");
ROUTE707.fromField = "fraction_changed";
ROUTE707.fromNode = "StopTimer";
ROUTE707.toField = "set_fraction";
ROUTE707.toNode = "Stop_l_pinky1_RotationInterpolator";
browser.currentScene.children[76] = ROUTE707;

let ROUTE708 = browser.currentScene.createNode("ROUTE");
ROUTE708.fromField = "fraction_changed";
ROUTE708.fromNode = "StopTimer";
ROUTE708.toField = "set_fraction";
ROUTE708.toNode = "Stop_l_pinky2_RotationInterpolator";
browser.currentScene.children[77] = ROUTE708;

let ROUTE709 = browser.currentScene.createNode("ROUTE");
ROUTE709.fromField = "fraction_changed";
ROUTE709.fromNode = "StopTimer";
ROUTE709.toField = "set_fraction";
ROUTE709.toNode = "Stop_l_pinky3_RotationInterpolator";
browser.currentScene.children[78] = ROUTE709;

let ROUTE710 = browser.currentScene.createNode("ROUTE");
ROUTE710.fromField = "fraction_changed";
ROUTE710.fromNode = "StopTimer";
ROUTE710.toField = "set_fraction";
ROUTE710.toNode = "Stop_r_sternoclavicular_RotationInterpolator";
browser.currentScene.children[79] = ROUTE710;

let ROUTE711 = browser.currentScene.createNode("ROUTE");
ROUTE711.fromField = "fraction_changed";
ROUTE711.fromNode = "StopTimer";
ROUTE711.toField = "set_fraction";
ROUTE711.toNode = "Stop_r_acromioclavicular_RotationInterpolator";
browser.currentScene.children[80] = ROUTE711;

let ROUTE712 = browser.currentScene.createNode("ROUTE");
ROUTE712.fromField = "fraction_changed";
ROUTE712.fromNode = "StopTimer";
ROUTE712.toField = "set_fraction";
ROUTE712.toNode = "Stop_r_shoulder_RotationInterpolator";
browser.currentScene.children[81] = ROUTE712;

let ROUTE713 = browser.currentScene.createNode("ROUTE");
ROUTE713.fromField = "fraction_changed";
ROUTE713.fromNode = "StopTimer";
ROUTE713.toField = "set_fraction";
ROUTE713.toNode = "Stop_r_elbow_RotationInterpolator";
browser.currentScene.children[82] = ROUTE713;

let ROUTE714 = browser.currentScene.createNode("ROUTE");
ROUTE714.fromField = "fraction_changed";
ROUTE714.fromNode = "StopTimer";
ROUTE714.toField = "set_fraction";
ROUTE714.toNode = "Stop_r_wrist_RotationInterpolator";
browser.currentScene.children[83] = ROUTE714;

let ROUTE715 = browser.currentScene.createNode("ROUTE");
ROUTE715.fromField = "fraction_changed";
ROUTE715.fromNode = "StopTimer";
ROUTE715.toField = "set_fraction";
ROUTE715.toNode = "Stop_r_thumb1_RotationInterpolator";
browser.currentScene.children[84] = ROUTE715;

let ROUTE716 = browser.currentScene.createNode("ROUTE");
ROUTE716.fromField = "fraction_changed";
ROUTE716.fromNode = "StopTimer";
ROUTE716.toField = "set_fraction";
ROUTE716.toNode = "Stop_r_thumb2_RotationInterpolator";
browser.currentScene.children[85] = ROUTE716;

let ROUTE717 = browser.currentScene.createNode("ROUTE");
ROUTE717.fromField = "fraction_changed";
ROUTE717.fromNode = "StopTimer";
ROUTE717.toField = "set_fraction";
ROUTE717.toNode = "Stop_r_thumb3_RotationInterpolator";
browser.currentScene.children[86] = ROUTE717;

let ROUTE718 = browser.currentScene.createNode("ROUTE");
ROUTE718.fromField = "fraction_changed";
ROUTE718.fromNode = "StopTimer";
ROUTE718.toField = "set_fraction";
ROUTE718.toNode = "Stop_r_index0_RotationInterpolator";
browser.currentScene.children[87] = ROUTE718;

let ROUTE719 = browser.currentScene.createNode("ROUTE");
ROUTE719.fromField = "fraction_changed";
ROUTE719.fromNode = "StopTimer";
ROUTE719.toField = "set_fraction";
ROUTE719.toNode = "Stop_r_index1_RotationInterpolator";
browser.currentScene.children[88] = ROUTE719;

let ROUTE720 = browser.currentScene.createNode("ROUTE");
ROUTE720.fromField = "fraction_changed";
ROUTE720.fromNode = "StopTimer";
ROUTE720.toField = "set_fraction";
ROUTE720.toNode = "Stop_r_index2_RotationInterpolator";
browser.currentScene.children[89] = ROUTE720;

let ROUTE721 = browser.currentScene.createNode("ROUTE");
ROUTE721.fromField = "fraction_changed";
ROUTE721.fromNode = "StopTimer";
ROUTE721.toField = "set_fraction";
ROUTE721.toNode = "Stop_r_index3_RotationInterpolator";
browser.currentScene.children[90] = ROUTE721;

let ROUTE722 = browser.currentScene.createNode("ROUTE");
ROUTE722.fromField = "fraction_changed";
ROUTE722.fromNode = "StopTimer";
ROUTE722.toField = "set_fraction";
ROUTE722.toNode = "Stop_r_middle0_RotationInterpolator";
browser.currentScene.children[91] = ROUTE722;

let ROUTE723 = browser.currentScene.createNode("ROUTE");
ROUTE723.fromField = "fraction_changed";
ROUTE723.fromNode = "StopTimer";
ROUTE723.toField = "set_fraction";
ROUTE723.toNode = "Stop_r_middle1_RotationInterpolator";
browser.currentScene.children[92] = ROUTE723;

let ROUTE724 = browser.currentScene.createNode("ROUTE");
ROUTE724.fromField = "fraction_changed";
ROUTE724.fromNode = "StopTimer";
ROUTE724.toField = "set_fraction";
ROUTE724.toNode = "Stop_r_middle2_RotationInterpolator";
browser.currentScene.children[93] = ROUTE724;

let ROUTE725 = browser.currentScene.createNode("ROUTE");
ROUTE725.fromField = "fraction_changed";
ROUTE725.fromNode = "StopTimer";
ROUTE725.toField = "set_fraction";
ROUTE725.toNode = "Stop_r_middle3_RotationInterpolator";
browser.currentScene.children[94] = ROUTE725;

let ROUTE726 = browser.currentScene.createNode("ROUTE");
ROUTE726.fromField = "fraction_changed";
ROUTE726.fromNode = "StopTimer";
ROUTE726.toField = "set_fraction";
ROUTE726.toNode = "Stop_r_ring0_RotationInterpolator";
browser.currentScene.children[95] = ROUTE726;

let ROUTE727 = browser.currentScene.createNode("ROUTE");
ROUTE727.fromField = "fraction_changed";
ROUTE727.fromNode = "StopTimer";
ROUTE727.toField = "set_fraction";
ROUTE727.toNode = "Stop_r_ring1_RotationInterpolator";
browser.currentScene.children[96] = ROUTE727;

let ROUTE728 = browser.currentScene.createNode("ROUTE");
ROUTE728.fromField = "fraction_changed";
ROUTE728.fromNode = "StopTimer";
ROUTE728.toField = "set_fraction";
ROUTE728.toNode = "Stop_r_ring2_RotationInterpolator";
browser.currentScene.children[97] = ROUTE728;

let ROUTE729 = browser.currentScene.createNode("ROUTE");
ROUTE729.fromField = "fraction_changed";
ROUTE729.fromNode = "StopTimer";
ROUTE729.toField = "set_fraction";
ROUTE729.toNode = "Stop_r_ring3_RotationInterpolator";
browser.currentScene.children[98] = ROUTE729;

let ROUTE730 = browser.currentScene.createNode("ROUTE");
ROUTE730.fromField = "fraction_changed";
ROUTE730.fromNode = "StopTimer";
ROUTE730.toField = "set_fraction";
ROUTE730.toNode = "Stop_r_pinky0_RotationInterpolator";
browser.currentScene.children[99] = ROUTE730;

let ROUTE731 = browser.currentScene.createNode("ROUTE");
ROUTE731.fromField = "fraction_changed";
ROUTE731.fromNode = "StopTimer";
ROUTE731.toField = "set_fraction";
ROUTE731.toNode = "Stop_r_pinky1_RotationInterpolator";
browser.currentScene.children[100] = ROUTE731;

let ROUTE732 = browser.currentScene.createNode("ROUTE");
ROUTE732.fromField = "fraction_changed";
ROUTE732.fromNode = "StopTimer";
ROUTE732.toField = "set_fraction";
ROUTE732.toNode = "Stop_r_pinky2_RotationInterpolator";
browser.currentScene.children[101] = ROUTE732;

let ROUTE733 = browser.currentScene.createNode("ROUTE");
ROUTE733.fromField = "fraction_changed";
ROUTE733.fromNode = "StopTimer";
ROUTE733.toField = "set_fraction";
ROUTE733.toNode = "Stop_r_pinky3_RotationInterpolator";
browser.currentScene.children[102] = ROUTE733;

let ROUTE734 = browser.currentScene.createNode("ROUTE");
ROUTE734.fromField = "value_changed";
ROUTE734.fromNode = "Stop_humanoid_root_TranslationInterpolator";
ROUTE734.toField = "set_translation";
ROUTE734.toNode = "boxman_humanoid_root";
browser.currentScene.children[103] = ROUTE734;

let ROUTE735 = browser.currentScene.createNode("ROUTE");
ROUTE735.fromField = "value_changed";
ROUTE735.fromNode = "Stop_humanoid_root_RotationInterpolator";
ROUTE735.toField = "set_rotation";
ROUTE735.toNode = "boxman_humanoid_root";
browser.currentScene.children[104] = ROUTE735;

let ROUTE736 = browser.currentScene.createNode("ROUTE");
ROUTE736.fromField = "value_changed";
ROUTE736.fromNode = "Stop_l_hip_RotationInterpolator";
ROUTE736.toField = "set_rotation";
ROUTE736.toNode = "boxman_l_hip";
browser.currentScene.children[105] = ROUTE736;

let ROUTE737 = browser.currentScene.createNode("ROUTE");
ROUTE737.fromField = "value_changed";
ROUTE737.fromNode = "Stop_l_knee_RotationInterpolator";
ROUTE737.toField = "set_rotation";
ROUTE737.toNode = "boxman_l_knee";
browser.currentScene.children[106] = ROUTE737;

let ROUTE738 = browser.currentScene.createNode("ROUTE");
ROUTE738.fromField = "value_changed";
ROUTE738.fromNode = "Stop_l_ankle_RotationInterpolator";
ROUTE738.toField = "set_rotation";
ROUTE738.toNode = "boxman_l_ankle";
browser.currentScene.children[107] = ROUTE738;

let ROUTE739 = browser.currentScene.createNode("ROUTE");
ROUTE739.fromField = "value_changed";
ROUTE739.fromNode = "Stop_l_midtarsal_RotationInterpolator";
ROUTE739.toField = "set_rotation";
ROUTE739.toNode = "boxman_l_midtarsal";
browser.currentScene.children[108] = ROUTE739;

let ROUTE740 = browser.currentScene.createNode("ROUTE");
ROUTE740.fromField = "value_changed";
ROUTE740.fromNode = "Stop_r_hip_RotationInterpolator";
ROUTE740.toField = "set_rotation";
ROUTE740.toNode = "boxman_r_hip";
browser.currentScene.children[109] = ROUTE740;

let ROUTE741 = browser.currentScene.createNode("ROUTE");
ROUTE741.fromField = "value_changed";
ROUTE741.fromNode = "Stop_r_knee_RotationInterpolator";
ROUTE741.toField = "set_rotation";
ROUTE741.toNode = "boxman_r_knee";
browser.currentScene.children[110] = ROUTE741;

let ROUTE742 = browser.currentScene.createNode("ROUTE");
ROUTE742.fromField = "value_changed";
ROUTE742.fromNode = "Stop_r_ankle_RotationInterpolator";
ROUTE742.toField = "set_rotation";
ROUTE742.toNode = "boxman_r_ankle";
browser.currentScene.children[111] = ROUTE742;

let ROUTE743 = browser.currentScene.createNode("ROUTE");
ROUTE743.fromField = "value_changed";
ROUTE743.fromNode = "Stop_r_midtarsal_RotationInterpolator";
ROUTE743.toField = "set_rotation";
ROUTE743.toNode = "boxman_r_midtarsal";
browser.currentScene.children[112] = ROUTE743;

let ROUTE744 = browser.currentScene.createNode("ROUTE");
ROUTE744.fromField = "value_changed";
ROUTE744.fromNode = "Stop_vl5_RotationInterpolator";
ROUTE744.toField = "set_rotation";
ROUTE744.toNode = "boxman_vl5";
browser.currentScene.children[113] = ROUTE744;

let ROUTE745 = browser.currentScene.createNode("ROUTE");
ROUTE745.fromField = "value_changed";
ROUTE745.fromNode = "Stop_skullbase_RotationInterpolator";
ROUTE745.toField = "set_rotation";
ROUTE745.toNode = "boxman_skullbase";
browser.currentScene.children[114] = ROUTE745;

let ROUTE746 = browser.currentScene.createNode("ROUTE");
ROUTE746.fromField = "value_changed";
ROUTE746.fromNode = "Stop_l_shoulder_RotationInterpolator";
ROUTE746.toField = "set_rotation";
ROUTE746.toNode = "boxman_l_shoulder";
browser.currentScene.children[115] = ROUTE746;

let ROUTE747 = browser.currentScene.createNode("ROUTE");
ROUTE747.fromField = "value_changed";
ROUTE747.fromNode = "Stop_l_elbow_RotationInterpolator";
ROUTE747.toField = "set_rotation";
ROUTE747.toNode = "boxman_l_elbow";
browser.currentScene.children[116] = ROUTE747;

let ROUTE748 = browser.currentScene.createNode("ROUTE");
ROUTE748.fromField = "value_changed";
ROUTE748.fromNode = "Stop_l_wrist_RotationInterpolator";
ROUTE748.toField = "set_rotation";
ROUTE748.toNode = "boxman_l_wrist";
browser.currentScene.children[117] = ROUTE748;

let ROUTE749 = browser.currentScene.createNode("ROUTE");
ROUTE749.fromField = "value_changed";
ROUTE749.fromNode = "Stop_r_shoulder_RotationInterpolator";
ROUTE749.toField = "set_rotation";
ROUTE749.toNode = "boxman_r_shoulder";
browser.currentScene.children[118] = ROUTE749;

let ROUTE750 = browser.currentScene.createNode("ROUTE");
ROUTE750.fromField = "value_changed";
ROUTE750.fromNode = "Stop_r_elbow_RotationInterpolator";
ROUTE750.toField = "set_rotation";
ROUTE750.toNode = "boxman_r_elbow";
browser.currentScene.children[119] = ROUTE750;

let ROUTE751 = browser.currentScene.createNode("ROUTE");
ROUTE751.fromField = "value_changed";
ROUTE751.fromNode = "Stop_r_wrist_RotationInterpolator";
ROUTE751.toField = "set_rotation";
ROUTE751.toNode = "boxman_r_wrist";
browser.currentScene.children[120] = ROUTE751;

let ROUTE752 = browser.currentScene.createNode("ROUTE");
ROUTE752.fromField = "fraction_changed";
ROUTE752.fromNode = "StandTimer";
ROUTE752.toField = "set_fraction";
ROUTE752.toNode = "Stand_r_ankle_RotationInterpolator";
browser.currentScene.children[121] = ROUTE752;

let ROUTE753 = browser.currentScene.createNode("ROUTE");
ROUTE753.fromField = "fraction_changed";
ROUTE753.fromNode = "StandTimer";
ROUTE753.toField = "set_fraction";
ROUTE753.toNode = "Stand_r_knee_RotationInterpolator";
browser.currentScene.children[122] = ROUTE753;

let ROUTE754 = browser.currentScene.createNode("ROUTE");
ROUTE754.fromField = "fraction_changed";
ROUTE754.fromNode = "StandTimer";
ROUTE754.toField = "set_fraction";
ROUTE754.toNode = "Stand_r_hip_RotationInterpolator";
browser.currentScene.children[123] = ROUTE754;

let ROUTE755 = browser.currentScene.createNode("ROUTE");
ROUTE755.fromField = "fraction_changed";
ROUTE755.fromNode = "StandTimer";
ROUTE755.toField = "set_fraction";
ROUTE755.toNode = "Stand_l_ankle_RotationInterpolator";
browser.currentScene.children[124] = ROUTE755;

let ROUTE756 = browser.currentScene.createNode("ROUTE");
ROUTE756.fromField = "fraction_changed";
ROUTE756.fromNode = "StandTimer";
ROUTE756.toField = "set_fraction";
ROUTE756.toNode = "Stand_l_knee_RotationInterpolator";
browser.currentScene.children[125] = ROUTE756;

let ROUTE757 = browser.currentScene.createNode("ROUTE");
ROUTE757.fromField = "fraction_changed";
ROUTE757.fromNode = "StandTimer";
ROUTE757.toField = "set_fraction";
ROUTE757.toNode = "Stand_l_hip_RotationInterpolator";
browser.currentScene.children[126] = ROUTE757;

let ROUTE758 = browser.currentScene.createNode("ROUTE");
ROUTE758.fromField = "fraction_changed";
ROUTE758.fromNode = "StandTimer";
ROUTE758.toField = "set_fraction";
ROUTE758.toNode = "Stand_lower_body_RotationInterpolator";
browser.currentScene.children[127] = ROUTE758;

let ROUTE759 = browser.currentScene.createNode("ROUTE");
ROUTE759.fromField = "fraction_changed";
ROUTE759.fromNode = "StandTimer";
ROUTE759.toField = "set_fraction";
ROUTE759.toNode = "Stand_r_wrist_RotationInterpolator";
browser.currentScene.children[128] = ROUTE759;

let ROUTE760 = browser.currentScene.createNode("ROUTE");
ROUTE760.fromField = "fraction_changed";
ROUTE760.fromNode = "StandTimer";
ROUTE760.toField = "set_fraction";
ROUTE760.toNode = "Stand_r_elbow_RotationInterpolator";
browser.currentScene.children[129] = ROUTE760;

let ROUTE761 = browser.currentScene.createNode("ROUTE");
ROUTE761.fromField = "fraction_changed";
ROUTE761.fromNode = "StandTimer";
ROUTE761.toField = "set_fraction";
ROUTE761.toNode = "Stand_r_shoulder_RotationInterpolator";
browser.currentScene.children[130] = ROUTE761;

let ROUTE762 = browser.currentScene.createNode("ROUTE");
ROUTE762.fromField = "fraction_changed";
ROUTE762.fromNode = "StandTimer";
ROUTE762.toField = "set_fraction";
ROUTE762.toNode = "Stand_l_wrist_RotationInterpolator";
browser.currentScene.children[131] = ROUTE762;

let ROUTE763 = browser.currentScene.createNode("ROUTE");
ROUTE763.fromField = "fraction_changed";
ROUTE763.fromNode = "StandTimer";
ROUTE763.toField = "set_fraction";
ROUTE763.toNode = "Stand_l_elbow_RotationInterpolator";
browser.currentScene.children[132] = ROUTE763;

let ROUTE764 = browser.currentScene.createNode("ROUTE");
ROUTE764.fromField = "fraction_changed";
ROUTE764.fromNode = "StandTimer";
ROUTE764.toField = "set_fraction";
ROUTE764.toNode = "Stand_l_shoulder_RotationInterpolator";
browser.currentScene.children[133] = ROUTE764;

let ROUTE765 = browser.currentScene.createNode("ROUTE");
ROUTE765.fromField = "fraction_changed";
ROUTE765.fromNode = "StandTimer";
ROUTE765.toField = "set_fraction";
ROUTE765.toNode = "Stand_head_RotationInterpolator";
browser.currentScene.children[134] = ROUTE765;

let ROUTE766 = browser.currentScene.createNode("ROUTE");
ROUTE766.fromField = "fraction_changed";
ROUTE766.fromNode = "StandTimer";
ROUTE766.toField = "set_fraction";
ROUTE766.toNode = "Stand_neck_RotationInterpolator";
browser.currentScene.children[135] = ROUTE766;

let ROUTE767 = browser.currentScene.createNode("ROUTE");
ROUTE767.fromField = "fraction_changed";
ROUTE767.fromNode = "StandTimer";
ROUTE767.toField = "set_fraction";
ROUTE767.toNode = "Stand_l_eyeball_RotationInterpolator";
browser.currentScene.children[136] = ROUTE767;

let ROUTE768 = browser.currentScene.createNode("ROUTE");
ROUTE768.fromField = "fraction_changed";
ROUTE768.fromNode = "StandTimer";
ROUTE768.toField = "set_fraction";
ROUTE768.toNode = "Stand_r_eyeball_RotationInterpolator";
browser.currentScene.children[137] = ROUTE768;

let ROUTE769 = browser.currentScene.createNode("ROUTE");
ROUTE769.fromField = "fraction_changed";
ROUTE769.fromNode = "StandTimer";
ROUTE769.toField = "set_fraction";
ROUTE769.toNode = "Stand_upper_body_RotationInterpolator";
browser.currentScene.children[138] = ROUTE769;

let ROUTE770 = browser.currentScene.createNode("ROUTE");
ROUTE770.fromField = "fraction_changed";
ROUTE770.fromNode = "StandTimer";
ROUTE770.toField = "set_fraction";
ROUTE770.toNode = "Stand_whole_body_RotationInterpolator";
browser.currentScene.children[139] = ROUTE770;

let ROUTE771 = browser.currentScene.createNode("ROUTE");
ROUTE771.fromField = "fraction_changed";
ROUTE771.fromNode = "StandTimer";
ROUTE771.toField = "set_fraction";
ROUTE771.toNode = "Stand_whole_body_TranslationInterpolator";
browser.currentScene.children[140] = ROUTE771;

let ROUTE772 = browser.currentScene.createNode("ROUTE");
ROUTE772.fromField = "fraction_changed";
ROUTE772.fromNode = "StandTimer";
ROUTE772.toField = "set_fraction";
ROUTE772.toNode = "Stand_l_sternoclavicular_RollInterpolator";
browser.currentScene.children[141] = ROUTE772;

let ROUTE773 = browser.currentScene.createNode("ROUTE");
ROUTE773.fromField = "fraction_changed";
ROUTE773.fromNode = "StandTimer";
ROUTE773.toField = "set_fraction";
ROUTE773.toNode = "Stand_l_acromioclavicular_RollInterpolator";
browser.currentScene.children[142] = ROUTE773;

let ROUTE774 = browser.currentScene.createNode("ROUTE");
ROUTE774.fromField = "fraction_changed";
ROUTE774.fromNode = "StandTimer";
ROUTE774.toField = "set_fraction";
ROUTE774.toNode = "Stand_r_sternoclavicular_RollInterpolator";
browser.currentScene.children[143] = ROUTE774;

let ROUTE775 = browser.currentScene.createNode("ROUTE");
ROUTE775.fromField = "fraction_changed";
ROUTE775.fromNode = "StandTimer";
ROUTE775.toField = "set_fraction";
ROUTE775.toNode = "Stand_r_acromioclavicular_RollInterpolator";
browser.currentScene.children[144] = ROUTE775;

let ROUTE776 = browser.currentScene.createNode("ROUTE");
ROUTE776.fromField = "fraction_changed";
ROUTE776.fromNode = "StandTimer";
ROUTE776.toField = "set_fraction";
ROUTE776.toNode = "Stand_r_metatarsal_PitchInterpolator";
browser.currentScene.children[145] = ROUTE776;

let ROUTE777 = browser.currentScene.createNode("ROUTE");
ROUTE777.fromField = "fraction_changed";
ROUTE777.fromNode = "StandTimer";
ROUTE777.toField = "set_fraction";
ROUTE777.toNode = "Stand_sacroiliac_YawInterpolator";
browser.currentScene.children[146] = ROUTE777;

let ROUTE778 = browser.currentScene.createNode("ROUTE");
ROUTE778.fromField = "fraction_changed";
ROUTE778.fromNode = "StandTimer";
ROUTE778.toField = "set_fraction";
ROUTE778.toNode = "Stand_vl5_YawInterpolator";
browser.currentScene.children[147] = ROUTE778;

let ROUTE779 = browser.currentScene.createNode("ROUTE");
ROUTE779.fromField = "fraction_changed";
ROUTE779.fromNode = "StandTimer";
ROUTE779.toField = "set_fraction";
ROUTE779.toNode = "Stand_vc6_YawInterpolator";
browser.currentScene.children[148] = ROUTE779;

let ROUTE780 = browser.currentScene.createNode("ROUTE");
ROUTE780.fromField = "fraction_changed";
ROUTE780.fromNode = "StandTimer";
ROUTE780.toField = "set_fraction";
ROUTE780.toNode = "Stand_l_thumb1_PitchInterpolator";
browser.currentScene.children[149] = ROUTE780;

let ROUTE781 = browser.currentScene.createNode("ROUTE");
ROUTE781.fromField = "fraction_changed";
ROUTE781.fromNode = "StandTimer";
ROUTE781.toField = "set_fraction";
ROUTE781.toNode = "Stand_r_thumb1_PitchInterpolator";
browser.currentScene.children[150] = ROUTE781;

let ROUTE782 = browser.currentScene.createNode("ROUTE");
ROUTE782.fromField = "fraction_changed";
ROUTE782.fromNode = "StandTimer";
ROUTE782.toField = "set_fraction";
ROUTE782.toNode = "Stand_r_index1_RollInterpolator";
browser.currentScene.children[151] = ROUTE782;

let ROUTE783 = browser.currentScene.createNode("ROUTE");
ROUTE783.fromField = "fraction_changed";
ROUTE783.fromNode = "StandTimer";
ROUTE783.toField = "set_fraction";
ROUTE783.toNode = "Stand_r_index2_RollInterpolator";
browser.currentScene.children[152] = ROUTE783;

let ROUTE784 = browser.currentScene.createNode("ROUTE");
ROUTE784.fromField = "fraction_changed";
ROUTE784.fromNode = "StandTimer";
ROUTE784.toField = "set_fraction";
ROUTE784.toNode = "Stand_r_index3_RollInterpolator";
browser.currentScene.children[153] = ROUTE784;

let ROUTE785 = browser.currentScene.createNode("ROUTE");
ROUTE785.fromField = "value_changed";
ROUTE785.fromNode = "Stand_r_ankle_RotationInterpolator";
ROUTE785.toField = "set_rotation";
ROUTE785.toNode = "boxman_r_ankle";
browser.currentScene.children[154] = ROUTE785;

let ROUTE786 = browser.currentScene.createNode("ROUTE");
ROUTE786.fromField = "value_changed";
ROUTE786.fromNode = "Stand_r_knee_RotationInterpolator";
ROUTE786.toField = "set_rotation";
ROUTE786.toNode = "boxman_r_knee";
browser.currentScene.children[155] = ROUTE786;

let ROUTE787 = browser.currentScene.createNode("ROUTE");
ROUTE787.fromField = "value_changed";
ROUTE787.fromNode = "Stand_r_hip_RotationInterpolator";
ROUTE787.toField = "set_rotation";
ROUTE787.toNode = "boxman_r_hip";
browser.currentScene.children[156] = ROUTE787;

let ROUTE788 = browser.currentScene.createNode("ROUTE");
ROUTE788.fromField = "value_changed";
ROUTE788.fromNode = "Stand_l_ankle_RotationInterpolator";
ROUTE788.toField = "set_rotation";
ROUTE788.toNode = "boxman_l_ankle";
browser.currentScene.children[157] = ROUTE788;

let ROUTE789 = browser.currentScene.createNode("ROUTE");
ROUTE789.fromField = "value_changed";
ROUTE789.fromNode = "Stand_l_knee_RotationInterpolator";
ROUTE789.toField = "set_rotation";
ROUTE789.toNode = "boxman_l_knee";
browser.currentScene.children[158] = ROUTE789;

let ROUTE790 = browser.currentScene.createNode("ROUTE");
ROUTE790.fromField = "value_changed";
ROUTE790.fromNode = "Stand_l_hip_RotationInterpolator";
ROUTE790.toField = "set_rotation";
ROUTE790.toNode = "boxman_l_hip";
browser.currentScene.children[159] = ROUTE790;

let ROUTE791 = browser.currentScene.createNode("ROUTE");
ROUTE791.fromField = "value_changed";
ROUTE791.fromNode = "Stand_r_wrist_RotationInterpolator";
ROUTE791.toField = "set_rotation";
ROUTE791.toNode = "boxman_r_wrist";
browser.currentScene.children[160] = ROUTE791;

let ROUTE792 = browser.currentScene.createNode("ROUTE");
ROUTE792.fromField = "value_changed";
ROUTE792.fromNode = "Stand_r_elbow_RotationInterpolator";
ROUTE792.toField = "set_rotation";
ROUTE792.toNode = "boxman_r_elbow";
browser.currentScene.children[161] = ROUTE792;

let ROUTE793 = browser.currentScene.createNode("ROUTE");
ROUTE793.fromField = "value_changed";
ROUTE793.fromNode = "Stand_r_shoulder_RotationInterpolator";
ROUTE793.toField = "set_rotation";
ROUTE793.toNode = "boxman_r_shoulder";
browser.currentScene.children[162] = ROUTE793;

let ROUTE794 = browser.currentScene.createNode("ROUTE");
ROUTE794.fromField = "value_changed";
ROUTE794.fromNode = "Stand_l_wrist_RotationInterpolator";
ROUTE794.toField = "set_rotation";
ROUTE794.toNode = "boxman_l_wrist";
browser.currentScene.children[163] = ROUTE794;

let ROUTE795 = browser.currentScene.createNode("ROUTE");
ROUTE795.fromField = "value_changed";
ROUTE795.fromNode = "Stand_l_elbow_RotationInterpolator";
ROUTE795.toField = "set_rotation";
ROUTE795.toNode = "boxman_l_elbow";
browser.currentScene.children[164] = ROUTE795;

let ROUTE796 = browser.currentScene.createNode("ROUTE");
ROUTE796.fromField = "value_changed";
ROUTE796.fromNode = "Stand_l_shoulder_RotationInterpolator";
ROUTE796.toField = "set_rotation";
ROUTE796.toNode = "boxman_l_shoulder";
browser.currentScene.children[165] = ROUTE796;

let ROUTE797 = browser.currentScene.createNode("ROUTE");
ROUTE797.fromField = "value_changed";
ROUTE797.fromNode = "Stand_head_RotationInterpolator";
ROUTE797.toField = "set_rotation";
ROUTE797.toNode = "boxman_skullbase";
browser.currentScene.children[166] = ROUTE797;

let ROUTE798 = browser.currentScene.createNode("ROUTE");
ROUTE798.fromField = "value_changed";
ROUTE798.fromNode = "Stand_whole_body_RotationInterpolator";
ROUTE798.toField = "set_rotation";
ROUTE798.toNode = "boxman_humanoid_root";
browser.currentScene.children[167] = ROUTE798;

let ROUTE799 = browser.currentScene.createNode("ROUTE");
ROUTE799.fromField = "value_changed";
ROUTE799.fromNode = "Stand_whole_body_TranslationInterpolator";
ROUTE799.toField = "set_translation";
ROUTE799.toNode = "boxman_humanoid_root";
browser.currentScene.children[168] = ROUTE799;

let ROUTE800 = browser.currentScene.createNode("ROUTE");
ROUTE800.fromField = "value_changed";
ROUTE800.fromNode = "Stand_vl5_YawInterpolator";
ROUTE800.toField = "set_rotation";
ROUTE800.toNode = "boxman_vl5";
browser.currentScene.children[169] = ROUTE800;

let ROUTE801 = browser.currentScene.createNode("ROUTE");
ROUTE801.fromField = "fraction_changed";
ROUTE801.fromNode = "PitchTimer";
ROUTE801.toField = "set_fraction";
ROUTE801.toNode = "Pitches_r_ankle_RotationInterpolator";
browser.currentScene.children[170] = ROUTE801;

let ROUTE802 = browser.currentScene.createNode("ROUTE");
ROUTE802.fromField = "fraction_changed";
ROUTE802.fromNode = "PitchTimer";
ROUTE802.toField = "set_fraction";
ROUTE802.toNode = "Pitches_r_knee_RotationInterpolator";
browser.currentScene.children[171] = ROUTE802;

let ROUTE803 = browser.currentScene.createNode("ROUTE");
ROUTE803.fromField = "fraction_changed";
ROUTE803.fromNode = "PitchTimer";
ROUTE803.toField = "set_fraction";
ROUTE803.toNode = "Pitches_r_hip_RotationInterpolator";
browser.currentScene.children[172] = ROUTE803;

let ROUTE804 = browser.currentScene.createNode("ROUTE");
ROUTE804.fromField = "fraction_changed";
ROUTE804.fromNode = "PitchTimer";
ROUTE804.toField = "set_fraction";
ROUTE804.toNode = "Pitches_l_ankle_RotationInterpolator";
browser.currentScene.children[173] = ROUTE804;

let ROUTE805 = browser.currentScene.createNode("ROUTE");
ROUTE805.fromField = "fraction_changed";
ROUTE805.fromNode = "PitchTimer";
ROUTE805.toField = "set_fraction";
ROUTE805.toNode = "Pitches_l_knee_RotationInterpolator";
browser.currentScene.children[174] = ROUTE805;

let ROUTE806 = browser.currentScene.createNode("ROUTE");
ROUTE806.fromField = "fraction_changed";
ROUTE806.fromNode = "PitchTimer";
ROUTE806.toField = "set_fraction";
ROUTE806.toNode = "Pitches_l_hip_RotationInterpolator";
browser.currentScene.children[175] = ROUTE806;

let ROUTE807 = browser.currentScene.createNode("ROUTE");
ROUTE807.fromField = "fraction_changed";
ROUTE807.fromNode = "PitchTimer";
ROUTE807.toField = "set_fraction";
ROUTE807.toNode = "Pitches_lower_body_RotationInterpolator";
browser.currentScene.children[176] = ROUTE807;

let ROUTE808 = browser.currentScene.createNode("ROUTE");
ROUTE808.fromField = "fraction_changed";
ROUTE808.fromNode = "PitchTimer";
ROUTE808.toField = "set_fraction";
ROUTE808.toNode = "Pitches_r_wrist_RotationInterpolator";
browser.currentScene.children[177] = ROUTE808;

let ROUTE809 = browser.currentScene.createNode("ROUTE");
ROUTE809.fromField = "fraction_changed";
ROUTE809.fromNode = "PitchTimer";
ROUTE809.toField = "set_fraction";
ROUTE809.toNode = "Pitches_r_elbow_RotationInterpolator";
browser.currentScene.children[178] = ROUTE809;

let ROUTE810 = browser.currentScene.createNode("ROUTE");
ROUTE810.fromField = "fraction_changed";
ROUTE810.fromNode = "PitchTimer";
ROUTE810.toField = "set_fraction";
ROUTE810.toNode = "Pitches_r_shoulder_RotationInterpolator";
browser.currentScene.children[179] = ROUTE810;

let ROUTE811 = browser.currentScene.createNode("ROUTE");
ROUTE811.fromField = "fraction_changed";
ROUTE811.fromNode = "PitchTimer";
ROUTE811.toField = "set_fraction";
ROUTE811.toNode = "Pitches_l_wrist_RotationInterpolator";
browser.currentScene.children[180] = ROUTE811;

let ROUTE812 = browser.currentScene.createNode("ROUTE");
ROUTE812.fromField = "fraction_changed";
ROUTE812.fromNode = "PitchTimer";
ROUTE812.toField = "set_fraction";
ROUTE812.toNode = "Pitches_l_elbow_RotationInterpolator";
browser.currentScene.children[181] = ROUTE812;

let ROUTE813 = browser.currentScene.createNode("ROUTE");
ROUTE813.fromField = "fraction_changed";
ROUTE813.fromNode = "PitchTimer";
ROUTE813.toField = "set_fraction";
ROUTE813.toNode = "Pitches_l_shoulder_RotationInterpolator";
browser.currentScene.children[182] = ROUTE813;

let ROUTE814 = browser.currentScene.createNode("ROUTE");
ROUTE814.fromField = "fraction_changed";
ROUTE814.fromNode = "PitchTimer";
ROUTE814.toField = "set_fraction";
ROUTE814.toNode = "Pitches_head_RotationInterpolator";
browser.currentScene.children[183] = ROUTE814;

let ROUTE815 = browser.currentScene.createNode("ROUTE");
ROUTE815.fromField = "fraction_changed";
ROUTE815.fromNode = "PitchTimer";
ROUTE815.toField = "set_fraction";
ROUTE815.toNode = "Pitches_neck_RotationInterpolator";
browser.currentScene.children[184] = ROUTE815;

let ROUTE816 = browser.currentScene.createNode("ROUTE");
ROUTE816.fromField = "fraction_changed";
ROUTE816.fromNode = "PitchTimer";
ROUTE816.toField = "set_fraction";
ROUTE816.toNode = "Pitches_upper_body_RotationInterpolator";
browser.currentScene.children[185] = ROUTE816;

let ROUTE817 = browser.currentScene.createNode("ROUTE");
ROUTE817.fromField = "fraction_changed";
ROUTE817.fromNode = "PitchTimer";
ROUTE817.toField = "set_fraction";
ROUTE817.toNode = "Pitches_whole_body_RotationInterpolator";
browser.currentScene.children[186] = ROUTE817;

let ROUTE818 = browser.currentScene.createNode("ROUTE");
ROUTE818.fromField = "fraction_changed";
ROUTE818.fromNode = "PitchTimer";
ROUTE818.toField = "set_fraction";
ROUTE818.toNode = "Pitches_whole_body_TranslationInterpolator";
browser.currentScene.children[187] = ROUTE818;

let ROUTE819 = browser.currentScene.createNode("ROUTE");
ROUTE819.fromField = "fraction_changed";
ROUTE819.fromNode = "PitchTimer";
ROUTE819.toField = "set_fraction";
ROUTE819.toNode = "Pitch_l_sternoclavicular_RollInterpolator";
browser.currentScene.children[188] = ROUTE819;

let ROUTE820 = browser.currentScene.createNode("ROUTE");
ROUTE820.fromField = "fraction_changed";
ROUTE820.fromNode = "PitchTimer";
ROUTE820.toField = "set_fraction";
ROUTE820.toNode = "Pitch_l_acromioclavicular_RollInterpolator";
browser.currentScene.children[189] = ROUTE820;

let ROUTE821 = browser.currentScene.createNode("ROUTE");
ROUTE821.fromField = "fraction_changed";
ROUTE821.fromNode = "PitchTimer";
ROUTE821.toField = "set_fraction";
ROUTE821.toNode = "Pitch_r_sternoclavicular_RollInterpolator";
browser.currentScene.children[190] = ROUTE821;

let ROUTE822 = browser.currentScene.createNode("ROUTE");
ROUTE822.fromField = "fraction_changed";
ROUTE822.fromNode = "PitchTimer";
ROUTE822.toField = "set_fraction";
ROUTE822.toNode = "Pitch_r_acromioclavicular_RollInterpolator";
browser.currentScene.children[191] = ROUTE822;

let ROUTE823 = browser.currentScene.createNode("ROUTE");
ROUTE823.fromField = "fraction_changed";
ROUTE823.fromNode = "PitchTimer";
ROUTE823.toField = "set_fraction";
ROUTE823.toNode = "Pitch_r_metatarsal_PitchInterpolator";
browser.currentScene.children[192] = ROUTE823;

let ROUTE824 = browser.currentScene.createNode("ROUTE");
ROUTE824.fromField = "fraction_changed";
ROUTE824.fromNode = "PitchTimer";
ROUTE824.toField = "set_fraction";
ROUTE824.toNode = "Pitch_sacroiliac_YawInterpolator";
browser.currentScene.children[193] = ROUTE824;

let ROUTE825 = browser.currentScene.createNode("ROUTE");
ROUTE825.fromField = "fraction_changed";
ROUTE825.fromNode = "PitchTimer";
ROUTE825.toField = "set_fraction";
ROUTE825.toNode = "Pitch_vl5_YawInterpolator";
browser.currentScene.children[194] = ROUTE825;

let ROUTE826 = browser.currentScene.createNode("ROUTE");
ROUTE826.fromField = "fraction_changed";
ROUTE826.fromNode = "PitchTimer";
ROUTE826.toField = "set_fraction";
ROUTE826.toNode = "Pitch_vc6_YawInterpolator";
browser.currentScene.children[195] = ROUTE826;

let ROUTE827 = browser.currentScene.createNode("ROUTE");
ROUTE827.fromField = "fraction_changed";
ROUTE827.fromNode = "PitchTimer";
ROUTE827.toField = "set_fraction";
ROUTE827.toNode = "Pitch_l_thumb1_PitchInterpolator";
browser.currentScene.children[196] = ROUTE827;

let ROUTE828 = browser.currentScene.createNode("ROUTE");
ROUTE828.fromField = "fraction_changed";
ROUTE828.fromNode = "PitchTimer";
ROUTE828.toField = "set_fraction";
ROUTE828.toNode = "Pitch_r_thumb1_PitchInterpolator";
browser.currentScene.children[197] = ROUTE828;

let ROUTE829 = browser.currentScene.createNode("ROUTE");
ROUTE829.fromField = "value_changed";
ROUTE829.fromNode = "Pitches_r_ankle_RotationInterpolator";
ROUTE829.toField = "set_rotation";
ROUTE829.toNode = "boxman_r_ankle";
browser.currentScene.children[198] = ROUTE829;

let ROUTE830 = browser.currentScene.createNode("ROUTE");
ROUTE830.fromField = "value_changed";
ROUTE830.fromNode = "Pitches_r_knee_RotationInterpolator";
ROUTE830.toField = "set_rotation";
ROUTE830.toNode = "boxman_r_knee";
browser.currentScene.children[199] = ROUTE830;

let ROUTE831 = browser.currentScene.createNode("ROUTE");
ROUTE831.fromField = "value_changed";
ROUTE831.fromNode = "Pitches_r_hip_RotationInterpolator";
ROUTE831.toField = "set_rotation";
ROUTE831.toNode = "boxman_r_hip";
browser.currentScene.children[200] = ROUTE831;

let ROUTE832 = browser.currentScene.createNode("ROUTE");
ROUTE832.fromField = "value_changed";
ROUTE832.fromNode = "Pitches_l_ankle_RotationInterpolator";
ROUTE832.toField = "set_rotation";
ROUTE832.toNode = "boxman_l_ankle";
browser.currentScene.children[201] = ROUTE832;

let ROUTE833 = browser.currentScene.createNode("ROUTE");
ROUTE833.fromField = "value_changed";
ROUTE833.fromNode = "Pitches_l_knee_RotationInterpolator";
ROUTE833.toField = "set_rotation";
ROUTE833.toNode = "boxman_l_knee";
browser.currentScene.children[202] = ROUTE833;

let ROUTE834 = browser.currentScene.createNode("ROUTE");
ROUTE834.fromField = "value_changed";
ROUTE834.fromNode = "Pitches_l_hip_RotationInterpolator";
ROUTE834.toField = "set_rotation";
ROUTE834.toNode = "boxman_l_hip";
browser.currentScene.children[203] = ROUTE834;

let ROUTE835 = browser.currentScene.createNode("ROUTE");
ROUTE835.fromField = "value_changed";
ROUTE835.fromNode = "Pitches_r_wrist_RotationInterpolator";
ROUTE835.toField = "set_rotation";
ROUTE835.toNode = "boxman_r_wrist";
browser.currentScene.children[204] = ROUTE835;

let ROUTE836 = browser.currentScene.createNode("ROUTE");
ROUTE836.fromField = "value_changed";
ROUTE836.fromNode = "Pitches_r_elbow_RotationInterpolator";
ROUTE836.toField = "set_rotation";
ROUTE836.toNode = "boxman_r_elbow";
browser.currentScene.children[205] = ROUTE836;

let ROUTE837 = browser.currentScene.createNode("ROUTE");
ROUTE837.fromField = "value_changed";
ROUTE837.fromNode = "Pitches_r_shoulder_RotationInterpolator";
ROUTE837.toField = "set_rotation";
ROUTE837.toNode = "boxman_r_shoulder";
browser.currentScene.children[206] = ROUTE837;

let ROUTE838 = browser.currentScene.createNode("ROUTE");
ROUTE838.fromField = "value_changed";
ROUTE838.fromNode = "Pitches_l_wrist_RotationInterpolator";
ROUTE838.toField = "set_rotation";
ROUTE838.toNode = "boxman_l_wrist";
browser.currentScene.children[207] = ROUTE838;

let ROUTE839 = browser.currentScene.createNode("ROUTE");
ROUTE839.fromField = "value_changed";
ROUTE839.fromNode = "Pitches_l_elbow_RotationInterpolator";
ROUTE839.toField = "set_rotation";
ROUTE839.toNode = "boxman_l_elbow";
browser.currentScene.children[208] = ROUTE839;

let ROUTE840 = browser.currentScene.createNode("ROUTE");
ROUTE840.fromField = "value_changed";
ROUTE840.fromNode = "Pitches_l_shoulder_RotationInterpolator";
ROUTE840.toField = "set_rotation";
ROUTE840.toNode = "boxman_l_shoulder";
browser.currentScene.children[209] = ROUTE840;

let ROUTE841 = browser.currentScene.createNode("ROUTE");
ROUTE841.fromField = "value_changed";
ROUTE841.fromNode = "Pitches_head_RotationInterpolator";
ROUTE841.toField = "set_rotation";
ROUTE841.toNode = "boxman_skullbase";
browser.currentScene.children[210] = ROUTE841;

let ROUTE842 = browser.currentScene.createNode("ROUTE");
ROUTE842.fromField = "value_changed";
ROUTE842.fromNode = "Pitches_whole_body_RotationInterpolator";
ROUTE842.toField = "set_rotation";
ROUTE842.toNode = "boxman_humanoid_root";
browser.currentScene.children[211] = ROUTE842;

let ROUTE843 = browser.currentScene.createNode("ROUTE");
ROUTE843.fromField = "value_changed";
ROUTE843.fromNode = "Pitches_whole_body_TranslationInterpolator";
ROUTE843.toField = "set_translation";
ROUTE843.toNode = "boxman_humanoid_root";
browser.currentScene.children[212] = ROUTE843;

let ROUTE844 = browser.currentScene.createNode("ROUTE");
ROUTE844.fromField = "value_changed";
ROUTE844.fromNode = "Pitch_vl5_YawInterpolator";
ROUTE844.toField = "set_rotation";
ROUTE844.toNode = "boxman_vl5";
browser.currentScene.children[213] = ROUTE844;

let ROUTE845 = browser.currentScene.createNode("ROUTE");
ROUTE845.fromField = "fraction_changed";
ROUTE845.fromNode = "YawTimer";
ROUTE845.toField = "set_fraction";
ROUTE845.toNode = "Yaws_r_ankle_RotationInterpolator";
browser.currentScene.children[214] = ROUTE845;

let ROUTE846 = browser.currentScene.createNode("ROUTE");
ROUTE846.fromField = "fraction_changed";
ROUTE846.fromNode = "YawTimer";
ROUTE846.toField = "set_fraction";
ROUTE846.toNode = "Yaws_r_knee_RotationInterpolator";
browser.currentScene.children[215] = ROUTE846;

let ROUTE847 = browser.currentScene.createNode("ROUTE");
ROUTE847.fromField = "fraction_changed";
ROUTE847.fromNode = "YawTimer";
ROUTE847.toField = "set_fraction";
ROUTE847.toNode = "Yaws_r_hip_RotationInterpolator";
browser.currentScene.children[216] = ROUTE847;

let ROUTE848 = browser.currentScene.createNode("ROUTE");
ROUTE848.fromField = "fraction_changed";
ROUTE848.fromNode = "YawTimer";
ROUTE848.toField = "set_fraction";
ROUTE848.toNode = "Yaws_l_ankle_RotationInterpolator";
browser.currentScene.children[217] = ROUTE848;

let ROUTE849 = browser.currentScene.createNode("ROUTE");
ROUTE849.fromField = "fraction_changed";
ROUTE849.fromNode = "YawTimer";
ROUTE849.toField = "set_fraction";
ROUTE849.toNode = "Yaws_l_knee_RotationInterpolator";
browser.currentScene.children[218] = ROUTE849;

let ROUTE850 = browser.currentScene.createNode("ROUTE");
ROUTE850.fromField = "fraction_changed";
ROUTE850.fromNode = "YawTimer";
ROUTE850.toField = "set_fraction";
ROUTE850.toNode = "Yaws_l_hip_RotationInterpolator";
browser.currentScene.children[219] = ROUTE850;

let ROUTE851 = browser.currentScene.createNode("ROUTE");
ROUTE851.fromField = "fraction_changed";
ROUTE851.fromNode = "YawTimer";
ROUTE851.toField = "set_fraction";
ROUTE851.toNode = "Yaws_lower_body_RotationInterpolator";
browser.currentScene.children[220] = ROUTE851;

let ROUTE852 = browser.currentScene.createNode("ROUTE");
ROUTE852.fromField = "fraction_changed";
ROUTE852.fromNode = "YawTimer";
ROUTE852.toField = "set_fraction";
ROUTE852.toNode = "Yaws_r_wrist_RotationInterpolator";
browser.currentScene.children[221] = ROUTE852;

let ROUTE853 = browser.currentScene.createNode("ROUTE");
ROUTE853.fromField = "fraction_changed";
ROUTE853.fromNode = "YawTimer";
ROUTE853.toField = "set_fraction";
ROUTE853.toNode = "Yaws_r_elbow_RotationInterpolator";
browser.currentScene.children[222] = ROUTE853;

let ROUTE854 = browser.currentScene.createNode("ROUTE");
ROUTE854.fromField = "fraction_changed";
ROUTE854.fromNode = "YawTimer";
ROUTE854.toField = "set_fraction";
ROUTE854.toNode = "Yaws_r_shoulder_RotationInterpolator";
browser.currentScene.children[223] = ROUTE854;

let ROUTE855 = browser.currentScene.createNode("ROUTE");
ROUTE855.fromField = "fraction_changed";
ROUTE855.fromNode = "YawTimer";
ROUTE855.toField = "set_fraction";
ROUTE855.toNode = "Yaws_l_wrist_RotationInterpolator";
browser.currentScene.children[224] = ROUTE855;

let ROUTE856 = browser.currentScene.createNode("ROUTE");
ROUTE856.fromField = "fraction_changed";
ROUTE856.fromNode = "YawTimer";
ROUTE856.toField = "set_fraction";
ROUTE856.toNode = "Yaws_l_elbow_RotationInterpolator";
browser.currentScene.children[225] = ROUTE856;

let ROUTE857 = browser.currentScene.createNode("ROUTE");
ROUTE857.fromField = "fraction_changed";
ROUTE857.fromNode = "YawTimer";
ROUTE857.toField = "set_fraction";
ROUTE857.toNode = "Yaws_l_shoulder_RotationInterpolator";
browser.currentScene.children[226] = ROUTE857;

let ROUTE858 = browser.currentScene.createNode("ROUTE");
ROUTE858.fromField = "fraction_changed";
ROUTE858.fromNode = "YawTimer";
ROUTE858.toField = "set_fraction";
ROUTE858.toNode = "Yaws_head_RotationInterpolator";
browser.currentScene.children[227] = ROUTE858;

let ROUTE859 = browser.currentScene.createNode("ROUTE");
ROUTE859.fromField = "fraction_changed";
ROUTE859.fromNode = "YawTimer";
ROUTE859.toField = "set_fraction";
ROUTE859.toNode = "Yaws_neck_RotationInterpolator";
browser.currentScene.children[228] = ROUTE859;

let ROUTE860 = browser.currentScene.createNode("ROUTE");
ROUTE860.fromField = "fraction_changed";
ROUTE860.fromNode = "YawTimer";
ROUTE860.toField = "set_fraction";
ROUTE860.toNode = "Yaws_upper_body_RotationInterpolator";
browser.currentScene.children[229] = ROUTE860;

let ROUTE861 = browser.currentScene.createNode("ROUTE");
ROUTE861.fromField = "fraction_changed";
ROUTE861.fromNode = "YawTimer";
ROUTE861.toField = "set_fraction";
ROUTE861.toNode = "Yaws_whole_body_RotationInterpolator";
browser.currentScene.children[230] = ROUTE861;

let ROUTE862 = browser.currentScene.createNode("ROUTE");
ROUTE862.fromField = "fraction_changed";
ROUTE862.fromNode = "YawTimer";
ROUTE862.toField = "set_fraction";
ROUTE862.toNode = "Yaws_whole_body_TranslationInterpolator";
browser.currentScene.children[231] = ROUTE862;

let ROUTE863 = browser.currentScene.createNode("ROUTE");
ROUTE863.fromField = "fraction_changed";
ROUTE863.fromNode = "YawTimer";
ROUTE863.toField = "set_fraction";
ROUTE863.toNode = "Yaw_l_sternoclavicular_RollInterpolator";
browser.currentScene.children[232] = ROUTE863;

let ROUTE864 = browser.currentScene.createNode("ROUTE");
ROUTE864.fromField = "fraction_changed";
ROUTE864.fromNode = "YawTimer";
ROUTE864.toField = "set_fraction";
ROUTE864.toNode = "Yaw_l_acromioclavicular_RollInterpolator";
browser.currentScene.children[233] = ROUTE864;

let ROUTE865 = browser.currentScene.createNode("ROUTE");
ROUTE865.fromField = "fraction_changed";
ROUTE865.fromNode = "YawTimer";
ROUTE865.toField = "set_fraction";
ROUTE865.toNode = "Yaw_r_sternoclavicular_RollInterpolator";
browser.currentScene.children[234] = ROUTE865;

let ROUTE866 = browser.currentScene.createNode("ROUTE");
ROUTE866.fromField = "fraction_changed";
ROUTE866.fromNode = "YawTimer";
ROUTE866.toField = "set_fraction";
ROUTE866.toNode = "Yaw_r_acromioclavicular_RollInterpolator";
browser.currentScene.children[235] = ROUTE866;

let ROUTE867 = browser.currentScene.createNode("ROUTE");
ROUTE867.fromField = "fraction_changed";
ROUTE867.fromNode = "YawTimer";
ROUTE867.toField = "set_fraction";
ROUTE867.toNode = "Yaw_r_metatarsal_PitchInterpolator";
browser.currentScene.children[236] = ROUTE867;

let ROUTE868 = browser.currentScene.createNode("ROUTE");
ROUTE868.fromField = "fraction_changed";
ROUTE868.fromNode = "YawTimer";
ROUTE868.toField = "set_fraction";
ROUTE868.toNode = "Yaw_sacroiliac_YawInterpolator";
browser.currentScene.children[237] = ROUTE868;

let ROUTE869 = browser.currentScene.createNode("ROUTE");
ROUTE869.fromField = "fraction_changed";
ROUTE869.fromNode = "YawTimer";
ROUTE869.toField = "set_fraction";
ROUTE869.toNode = "Yaw_vl5_YawInterpolator";
browser.currentScene.children[238] = ROUTE869;

let ROUTE870 = browser.currentScene.createNode("ROUTE");
ROUTE870.fromField = "fraction_changed";
ROUTE870.fromNode = "YawTimer";
ROUTE870.toField = "set_fraction";
ROUTE870.toNode = "Yaw_vc6_YawInterpolator";
browser.currentScene.children[239] = ROUTE870;

let ROUTE871 = browser.currentScene.createNode("ROUTE");
ROUTE871.fromField = "fraction_changed";
ROUTE871.fromNode = "YawTimer";
ROUTE871.toField = "set_fraction";
ROUTE871.toNode = "Yaw_l_thumb1_PitchInterpolator";
browser.currentScene.children[240] = ROUTE871;

let ROUTE872 = browser.currentScene.createNode("ROUTE");
ROUTE872.fromField = "fraction_changed";
ROUTE872.fromNode = "YawTimer";
ROUTE872.toField = "set_fraction";
ROUTE872.toNode = "Yaw_r_thumb1_PitchInterpolator";
browser.currentScene.children[241] = ROUTE872;

let ROUTE873 = browser.currentScene.createNode("ROUTE");
ROUTE873.fromField = "value_changed";
ROUTE873.fromNode = "Yaws_r_ankle_RotationInterpolator";
ROUTE873.toField = "set_rotation";
ROUTE873.toNode = "boxman_r_ankle";
browser.currentScene.children[242] = ROUTE873;

let ROUTE874 = browser.currentScene.createNode("ROUTE");
ROUTE874.fromField = "value_changed";
ROUTE874.fromNode = "Yaws_r_knee_RotationInterpolator";
ROUTE874.toField = "set_rotation";
ROUTE874.toNode = "boxman_r_knee";
browser.currentScene.children[243] = ROUTE874;

let ROUTE875 = browser.currentScene.createNode("ROUTE");
ROUTE875.fromField = "value_changed";
ROUTE875.fromNode = "Yaws_r_hip_RotationInterpolator";
ROUTE875.toField = "set_rotation";
ROUTE875.toNode = "boxman_r_hip";
browser.currentScene.children[244] = ROUTE875;

let ROUTE876 = browser.currentScene.createNode("ROUTE");
ROUTE876.fromField = "value_changed";
ROUTE876.fromNode = "Yaws_l_ankle_RotationInterpolator";
ROUTE876.toField = "set_rotation";
ROUTE876.toNode = "boxman_l_ankle";
browser.currentScene.children[245] = ROUTE876;

let ROUTE877 = browser.currentScene.createNode("ROUTE");
ROUTE877.fromField = "value_changed";
ROUTE877.fromNode = "Yaws_l_knee_RotationInterpolator";
ROUTE877.toField = "set_rotation";
ROUTE877.toNode = "boxman_l_knee";
browser.currentScene.children[246] = ROUTE877;

let ROUTE878 = browser.currentScene.createNode("ROUTE");
ROUTE878.fromField = "value_changed";
ROUTE878.fromNode = "Yaws_l_hip_RotationInterpolator";
ROUTE878.toField = "set_rotation";
ROUTE878.toNode = "boxman_l_hip";
browser.currentScene.children[247] = ROUTE878;

let ROUTE879 = browser.currentScene.createNode("ROUTE");
ROUTE879.fromField = "value_changed";
ROUTE879.fromNode = "Yaws_r_wrist_RotationInterpolator";
ROUTE879.toField = "set_rotation";
ROUTE879.toNode = "boxman_r_wrist";
browser.currentScene.children[248] = ROUTE879;

let ROUTE880 = browser.currentScene.createNode("ROUTE");
ROUTE880.fromField = "value_changed";
ROUTE880.fromNode = "Yaws_r_elbow_RotationInterpolator";
ROUTE880.toField = "set_rotation";
ROUTE880.toNode = "boxman_r_elbow";
browser.currentScene.children[249] = ROUTE880;

let ROUTE881 = browser.currentScene.createNode("ROUTE");
ROUTE881.fromField = "value_changed";
ROUTE881.fromNode = "Yaws_r_shoulder_RotationInterpolator";
ROUTE881.toField = "set_rotation";
ROUTE881.toNode = "boxman_r_shoulder";
browser.currentScene.children[250] = ROUTE881;

let ROUTE882 = browser.currentScene.createNode("ROUTE");
ROUTE882.fromField = "value_changed";
ROUTE882.fromNode = "Yaws_l_wrist_RotationInterpolator";
ROUTE882.toField = "set_rotation";
ROUTE882.toNode = "boxman_l_wrist";
browser.currentScene.children[251] = ROUTE882;

let ROUTE883 = browser.currentScene.createNode("ROUTE");
ROUTE883.fromField = "value_changed";
ROUTE883.fromNode = "Yaws_l_elbow_RotationInterpolator";
ROUTE883.toField = "set_rotation";
ROUTE883.toNode = "boxman_l_elbow";
browser.currentScene.children[252] = ROUTE883;

let ROUTE884 = browser.currentScene.createNode("ROUTE");
ROUTE884.fromField = "value_changed";
ROUTE884.fromNode = "Yaws_l_shoulder_RotationInterpolator";
ROUTE884.toField = "set_rotation";
ROUTE884.toNode = "boxman_l_shoulder";
browser.currentScene.children[253] = ROUTE884;

let ROUTE885 = browser.currentScene.createNode("ROUTE");
ROUTE885.fromField = "value_changed";
ROUTE885.fromNode = "Yaws_head_RotationInterpolator";
ROUTE885.toField = "set_rotation";
ROUTE885.toNode = "boxman_skullbase";
browser.currentScene.children[254] = ROUTE885;

let ROUTE886 = browser.currentScene.createNode("ROUTE");
ROUTE886.fromField = "value_changed";
ROUTE886.fromNode = "Yaws_whole_body_RotationInterpolator";
ROUTE886.toField = "set_rotation";
ROUTE886.toNode = "boxman_humanoid_root";
browser.currentScene.children[255] = ROUTE886;

let ROUTE887 = browser.currentScene.createNode("ROUTE");
ROUTE887.fromField = "value_changed";
ROUTE887.fromNode = "Yaws_whole_body_TranslationInterpolator";
ROUTE887.toField = "set_translation";
ROUTE887.toNode = "boxman_humanoid_root";
browser.currentScene.children[256] = ROUTE887;

let ROUTE888 = browser.currentScene.createNode("ROUTE");
ROUTE888.fromField = "value_changed";
ROUTE888.fromNode = "Yaw_vl5_YawInterpolator";
ROUTE888.toField = "set_rotation";
ROUTE888.toNode = "boxman_vl5";
browser.currentScene.children[257] = ROUTE888;

let ROUTE889 = browser.currentScene.createNode("ROUTE");
ROUTE889.fromField = "fraction_changed";
ROUTE889.fromNode = "RollTimer";
ROUTE889.toField = "set_fraction";
ROUTE889.toNode = "Rolls_r_ankle_RotationInterpolator";
browser.currentScene.children[258] = ROUTE889;

let ROUTE890 = browser.currentScene.createNode("ROUTE");
ROUTE890.fromField = "fraction_changed";
ROUTE890.fromNode = "RollTimer";
ROUTE890.toField = "set_fraction";
ROUTE890.toNode = "Rolls_r_knee_RotationInterpolator";
browser.currentScene.children[259] = ROUTE890;

let ROUTE891 = browser.currentScene.createNode("ROUTE");
ROUTE891.fromField = "fraction_changed";
ROUTE891.fromNode = "RollTimer";
ROUTE891.toField = "set_fraction";
ROUTE891.toNode = "Rolls_r_hip_RotationInterpolator";
browser.currentScene.children[260] = ROUTE891;

let ROUTE892 = browser.currentScene.createNode("ROUTE");
ROUTE892.fromField = "fraction_changed";
ROUTE892.fromNode = "RollTimer";
ROUTE892.toField = "set_fraction";
ROUTE892.toNode = "Rolls_l_ankle_RotationInterpolator";
browser.currentScene.children[261] = ROUTE892;

let ROUTE893 = browser.currentScene.createNode("ROUTE");
ROUTE893.fromField = "fraction_changed";
ROUTE893.fromNode = "RollTimer";
ROUTE893.toField = "set_fraction";
ROUTE893.toNode = "Rolls_l_knee_RotationInterpolator";
browser.currentScene.children[262] = ROUTE893;

let ROUTE894 = browser.currentScene.createNode("ROUTE");
ROUTE894.fromField = "fraction_changed";
ROUTE894.fromNode = "RollTimer";
ROUTE894.toField = "set_fraction";
ROUTE894.toNode = "Rolls_l_hip_RotationInterpolator";
browser.currentScene.children[263] = ROUTE894;

let ROUTE895 = browser.currentScene.createNode("ROUTE");
ROUTE895.fromField = "fraction_changed";
ROUTE895.fromNode = "RollTimer";
ROUTE895.toField = "set_fraction";
ROUTE895.toNode = "Rolls_lower_body_RotationInterpolator";
browser.currentScene.children[264] = ROUTE895;

let ROUTE896 = browser.currentScene.createNode("ROUTE");
ROUTE896.fromField = "fraction_changed";
ROUTE896.fromNode = "RollTimer";
ROUTE896.toField = "set_fraction";
ROUTE896.toNode = "Rolls_r_wrist_RotationInterpolator";
browser.currentScene.children[265] = ROUTE896;

let ROUTE897 = browser.currentScene.createNode("ROUTE");
ROUTE897.fromField = "fraction_changed";
ROUTE897.fromNode = "RollTimer";
ROUTE897.toField = "set_fraction";
ROUTE897.toNode = "Rolls_r_elbow_RotationInterpolator";
browser.currentScene.children[266] = ROUTE897;

let ROUTE898 = browser.currentScene.createNode("ROUTE");
ROUTE898.fromField = "fraction_changed";
ROUTE898.fromNode = "RollTimer";
ROUTE898.toField = "set_fraction";
ROUTE898.toNode = "Rolls_r_shoulder_RotationInterpolator";
browser.currentScene.children[267] = ROUTE898;

let ROUTE899 = browser.currentScene.createNode("ROUTE");
ROUTE899.fromField = "fraction_changed";
ROUTE899.fromNode = "RollTimer";
ROUTE899.toField = "set_fraction";
ROUTE899.toNode = "Rolls_l_wrist_RotationInterpolator";
browser.currentScene.children[268] = ROUTE899;

let ROUTE900 = browser.currentScene.createNode("ROUTE");
ROUTE900.fromField = "fraction_changed";
ROUTE900.fromNode = "RollTimer";
ROUTE900.toField = "set_fraction";
ROUTE900.toNode = "Rolls_l_elbow_RotationInterpolator";
browser.currentScene.children[269] = ROUTE900;

let ROUTE901 = browser.currentScene.createNode("ROUTE");
ROUTE901.fromField = "fraction_changed";
ROUTE901.fromNode = "RollTimer";
ROUTE901.toField = "set_fraction";
ROUTE901.toNode = "Rolls_l_shoulder_RotationInterpolator";
browser.currentScene.children[270] = ROUTE901;

let ROUTE902 = browser.currentScene.createNode("ROUTE");
ROUTE902.fromField = "fraction_changed";
ROUTE902.fromNode = "RollTimer";
ROUTE902.toField = "set_fraction";
ROUTE902.toNode = "Rolls_head_RotationInterpolator";
browser.currentScene.children[271] = ROUTE902;

let ROUTE903 = browser.currentScene.createNode("ROUTE");
ROUTE903.fromField = "fraction_changed";
ROUTE903.fromNode = "RollTimer";
ROUTE903.toField = "set_fraction";
ROUTE903.toNode = "Rolls_neck_RotationInterpolator";
browser.currentScene.children[272] = ROUTE903;

let ROUTE904 = browser.currentScene.createNode("ROUTE");
ROUTE904.fromField = "fraction_changed";
ROUTE904.fromNode = "RollTimer";
ROUTE904.toField = "set_fraction";
ROUTE904.toNode = "Rolls_upper_body_RotationInterpolator";
browser.currentScene.children[273] = ROUTE904;

let ROUTE905 = browser.currentScene.createNode("ROUTE");
ROUTE905.fromField = "fraction_changed";
ROUTE905.fromNode = "RollTimer";
ROUTE905.toField = "set_fraction";
ROUTE905.toNode = "Rolls_whole_body_RotationInterpolator";
browser.currentScene.children[274] = ROUTE905;

let ROUTE906 = browser.currentScene.createNode("ROUTE");
ROUTE906.fromField = "fraction_changed";
ROUTE906.fromNode = "RollTimer";
ROUTE906.toField = "set_fraction";
ROUTE906.toNode = "Rolls_whole_body_TranslationInterpolator";
browser.currentScene.children[275] = ROUTE906;

let ROUTE907 = browser.currentScene.createNode("ROUTE");
ROUTE907.fromField = "fraction_changed";
ROUTE907.fromNode = "RollTimer";
ROUTE907.toField = "set_fraction";
ROUTE907.toNode = "Roll_l_sternoclavicular_RollInterpolator";
browser.currentScene.children[276] = ROUTE907;

let ROUTE908 = browser.currentScene.createNode("ROUTE");
ROUTE908.fromField = "fraction_changed";
ROUTE908.fromNode = "RollTimer";
ROUTE908.toField = "set_fraction";
ROUTE908.toNode = "Roll_l_acromioclavicular_RollInterpolator";
browser.currentScene.children[277] = ROUTE908;

let ROUTE909 = browser.currentScene.createNode("ROUTE");
ROUTE909.fromField = "fraction_changed";
ROUTE909.fromNode = "RollTimer";
ROUTE909.toField = "set_fraction";
ROUTE909.toNode = "Roll_r_sternoclavicular_RollInterpolator";
browser.currentScene.children[278] = ROUTE909;

let ROUTE910 = browser.currentScene.createNode("ROUTE");
ROUTE910.fromField = "fraction_changed";
ROUTE910.fromNode = "RollTimer";
ROUTE910.toField = "set_fraction";
ROUTE910.toNode = "Roll_r_acromioclavicular_RollInterpolator";
browser.currentScene.children[279] = ROUTE910;

let ROUTE911 = browser.currentScene.createNode("ROUTE");
ROUTE911.fromField = "fraction_changed";
ROUTE911.fromNode = "RollTimer";
ROUTE911.toField = "set_fraction";
ROUTE911.toNode = "Roll_r_metatarsal_PitchInterpolator";
browser.currentScene.children[280] = ROUTE911;

let ROUTE912 = browser.currentScene.createNode("ROUTE");
ROUTE912.fromField = "fraction_changed";
ROUTE912.fromNode = "RollTimer";
ROUTE912.toField = "set_fraction";
ROUTE912.toNode = "Roll_sacroiliac_YawInterpolator";
browser.currentScene.children[281] = ROUTE912;

let ROUTE913 = browser.currentScene.createNode("ROUTE");
ROUTE913.fromField = "fraction_changed";
ROUTE913.fromNode = "RollTimer";
ROUTE913.toField = "set_fraction";
ROUTE913.toNode = "Roll_vl5_YawInterpolator";
browser.currentScene.children[282] = ROUTE913;

let ROUTE914 = browser.currentScene.createNode("ROUTE");
ROUTE914.fromField = "fraction_changed";
ROUTE914.fromNode = "RollTimer";
ROUTE914.toField = "set_fraction";
ROUTE914.toNode = "Roll_vc6_YawInterpolator";
browser.currentScene.children[283] = ROUTE914;

let ROUTE915 = browser.currentScene.createNode("ROUTE");
ROUTE915.fromField = "fraction_changed";
ROUTE915.fromNode = "RollTimer";
ROUTE915.toField = "set_fraction";
ROUTE915.toNode = "Roll_l_thumb1_PitchInterpolator";
browser.currentScene.children[284] = ROUTE915;

let ROUTE916 = browser.currentScene.createNode("ROUTE");
ROUTE916.fromField = "fraction_changed";
ROUTE916.fromNode = "RollTimer";
ROUTE916.toField = "set_fraction";
ROUTE916.toNode = "Roll_r_thumb1_PitchInterpolator";
browser.currentScene.children[285] = ROUTE916;

let ROUTE917 = browser.currentScene.createNode("ROUTE");
ROUTE917.fromField = "value_changed";
ROUTE917.fromNode = "Rolls_r_ankle_RotationInterpolator";
ROUTE917.toField = "set_rotation";
ROUTE917.toNode = "boxman_r_ankle";
browser.currentScene.children[286] = ROUTE917;

let ROUTE918 = browser.currentScene.createNode("ROUTE");
ROUTE918.fromField = "value_changed";
ROUTE918.fromNode = "Rolls_r_knee_RotationInterpolator";
ROUTE918.toField = "set_rotation";
ROUTE918.toNode = "boxman_r_knee";
browser.currentScene.children[287] = ROUTE918;

let ROUTE919 = browser.currentScene.createNode("ROUTE");
ROUTE919.fromField = "value_changed";
ROUTE919.fromNode = "Rolls_r_hip_RotationInterpolator";
ROUTE919.toField = "set_rotation";
ROUTE919.toNode = "boxman_r_hip";
browser.currentScene.children[288] = ROUTE919;

let ROUTE920 = browser.currentScene.createNode("ROUTE");
ROUTE920.fromField = "value_changed";
ROUTE920.fromNode = "Rolls_l_ankle_RotationInterpolator";
ROUTE920.toField = "set_rotation";
ROUTE920.toNode = "boxman_l_ankle";
browser.currentScene.children[289] = ROUTE920;

let ROUTE921 = browser.currentScene.createNode("ROUTE");
ROUTE921.fromField = "value_changed";
ROUTE921.fromNode = "Rolls_l_knee_RotationInterpolator";
ROUTE921.toField = "set_rotation";
ROUTE921.toNode = "boxman_l_knee";
browser.currentScene.children[290] = ROUTE921;

let ROUTE922 = browser.currentScene.createNode("ROUTE");
ROUTE922.fromField = "value_changed";
ROUTE922.fromNode = "Rolls_l_hip_RotationInterpolator";
ROUTE922.toField = "set_rotation";
ROUTE922.toNode = "boxman_l_hip";
browser.currentScene.children[291] = ROUTE922;

let ROUTE923 = browser.currentScene.createNode("ROUTE");
ROUTE923.fromField = "value_changed";
ROUTE923.fromNode = "Rolls_r_wrist_RotationInterpolator";
ROUTE923.toField = "set_rotation";
ROUTE923.toNode = "boxman_r_wrist";
browser.currentScene.children[292] = ROUTE923;

let ROUTE924 = browser.currentScene.createNode("ROUTE");
ROUTE924.fromField = "value_changed";
ROUTE924.fromNode = "Rolls_r_elbow_RotationInterpolator";
ROUTE924.toField = "set_rotation";
ROUTE924.toNode = "boxman_r_elbow";
browser.currentScene.children[293] = ROUTE924;

let ROUTE925 = browser.currentScene.createNode("ROUTE");
ROUTE925.fromField = "value_changed";
ROUTE925.fromNode = "Rolls_r_shoulder_RotationInterpolator";
ROUTE925.toField = "set_rotation";
ROUTE925.toNode = "boxman_r_shoulder";
browser.currentScene.children[294] = ROUTE925;

let ROUTE926 = browser.currentScene.createNode("ROUTE");
ROUTE926.fromField = "value_changed";
ROUTE926.fromNode = "Rolls_l_wrist_RotationInterpolator";
ROUTE926.toField = "set_rotation";
ROUTE926.toNode = "boxman_l_wrist";
browser.currentScene.children[295] = ROUTE926;

let ROUTE927 = browser.currentScene.createNode("ROUTE");
ROUTE927.fromField = "value_changed";
ROUTE927.fromNode = "Rolls_l_elbow_RotationInterpolator";
ROUTE927.toField = "set_rotation";
ROUTE927.toNode = "boxman_l_elbow";
browser.currentScene.children[296] = ROUTE927;

let ROUTE928 = browser.currentScene.createNode("ROUTE");
ROUTE928.fromField = "value_changed";
ROUTE928.fromNode = "Rolls_l_shoulder_RotationInterpolator";
ROUTE928.toField = "set_rotation";
ROUTE928.toNode = "boxman_l_shoulder";
browser.currentScene.children[297] = ROUTE928;

let ROUTE929 = browser.currentScene.createNode("ROUTE");
ROUTE929.fromField = "value_changed";
ROUTE929.fromNode = "Rolls_head_RotationInterpolator";
ROUTE929.toField = "set_rotation";
ROUTE929.toNode = "boxman_skullbase";
browser.currentScene.children[298] = ROUTE929;

let ROUTE930 = browser.currentScene.createNode("ROUTE");
ROUTE930.fromField = "value_changed";
ROUTE930.fromNode = "Rolls_whole_body_RotationInterpolator";
ROUTE930.toField = "set_rotation";
ROUTE930.toNode = "boxman_humanoid_root";
browser.currentScene.children[299] = ROUTE930;

let ROUTE931 = browser.currentScene.createNode("ROUTE");
ROUTE931.fromField = "value_changed";
ROUTE931.fromNode = "Rolls_whole_body_TranslationInterpolator";
ROUTE931.toField = "set_translation";
ROUTE931.toNode = "boxman_humanoid_root";
browser.currentScene.children[300] = ROUTE931;

let ROUTE932 = browser.currentScene.createNode("ROUTE");
ROUTE932.fromField = "value_changed";
ROUTE932.fromNode = "Roll_vl5_YawInterpolator";
ROUTE932.toField = "set_rotation";
ROUTE932.toNode = "boxman_vl5";
browser.currentScene.children[301] = ROUTE932;

let ROUTE933 = browser.currentScene.createNode("ROUTE");
ROUTE933.fromField = "fraction_changed";
ROUTE933.fromNode = "WalkTimer";
ROUTE933.toField = "set_fraction";
ROUTE933.toNode = "Walk_r_ankle_RotationInterpolator";
browser.currentScene.children[302] = ROUTE933;

let ROUTE934 = browser.currentScene.createNode("ROUTE");
ROUTE934.fromField = "fraction_changed";
ROUTE934.fromNode = "WalkTimer";
ROUTE934.toField = "set_fraction";
ROUTE934.toNode = "Walk_r_knee_RotationInterpolator";
browser.currentScene.children[303] = ROUTE934;

let ROUTE935 = browser.currentScene.createNode("ROUTE");
ROUTE935.fromField = "fraction_changed";
ROUTE935.fromNode = "WalkTimer";
ROUTE935.toField = "set_fraction";
ROUTE935.toNode = "Walk_r_hip_RotationInterpolator";
browser.currentScene.children[304] = ROUTE935;

let ROUTE936 = browser.currentScene.createNode("ROUTE");
ROUTE936.fromField = "fraction_changed";
ROUTE936.fromNode = "WalkTimer";
ROUTE936.toField = "set_fraction";
ROUTE936.toNode = "Walk_l_ankle_RotationInterpolator";
browser.currentScene.children[305] = ROUTE936;

let ROUTE937 = browser.currentScene.createNode("ROUTE");
ROUTE937.fromField = "fraction_changed";
ROUTE937.fromNode = "WalkTimer";
ROUTE937.toField = "set_fraction";
ROUTE937.toNode = "Walk_l_knee_RotationInterpolator";
browser.currentScene.children[306] = ROUTE937;

let ROUTE938 = browser.currentScene.createNode("ROUTE");
ROUTE938.fromField = "fraction_changed";
ROUTE938.fromNode = "WalkTimer";
ROUTE938.toField = "set_fraction";
ROUTE938.toNode = "Walk_l_hip_RotationInterpolator";
browser.currentScene.children[307] = ROUTE938;

let ROUTE939 = browser.currentScene.createNode("ROUTE");
ROUTE939.fromField = "fraction_changed";
ROUTE939.fromNode = "WalkTimer";
ROUTE939.toField = "set_fraction";
ROUTE939.toNode = "Walk_lower_body_RotationInterpolator";
browser.currentScene.children[308] = ROUTE939;

let ROUTE940 = browser.currentScene.createNode("ROUTE");
ROUTE940.fromField = "fraction_changed";
ROUTE940.fromNode = "WalkTimer";
ROUTE940.toField = "set_fraction";
ROUTE940.toNode = "Walk_r_wrist_RotationInterpolator";
browser.currentScene.children[309] = ROUTE940;

let ROUTE941 = browser.currentScene.createNode("ROUTE");
ROUTE941.fromField = "fraction_changed";
ROUTE941.fromNode = "WalkTimer";
ROUTE941.toField = "set_fraction";
ROUTE941.toNode = "Walk_r_elbow_RotationInterpolator";
browser.currentScene.children[310] = ROUTE941;

let ROUTE942 = browser.currentScene.createNode("ROUTE");
ROUTE942.fromField = "fraction_changed";
ROUTE942.fromNode = "WalkTimer";
ROUTE942.toField = "set_fraction";
ROUTE942.toNode = "Walk_r_shoulder_RotationInterpolator";
browser.currentScene.children[311] = ROUTE942;

let ROUTE943 = browser.currentScene.createNode("ROUTE");
ROUTE943.fromField = "fraction_changed";
ROUTE943.fromNode = "WalkTimer";
ROUTE943.toField = "set_fraction";
ROUTE943.toNode = "Walk_l_wrist_RotationInterpolator";
browser.currentScene.children[312] = ROUTE943;

let ROUTE944 = browser.currentScene.createNode("ROUTE");
ROUTE944.fromField = "fraction_changed";
ROUTE944.fromNode = "WalkTimer";
ROUTE944.toField = "set_fraction";
ROUTE944.toNode = "Walk_l_elbow_RotationInterpolator";
browser.currentScene.children[313] = ROUTE944;

let ROUTE945 = browser.currentScene.createNode("ROUTE");
ROUTE945.fromField = "fraction_changed";
ROUTE945.fromNode = "WalkTimer";
ROUTE945.toField = "set_fraction";
ROUTE945.toNode = "Walk_l_shoulder_RotationInterpolator";
browser.currentScene.children[314] = ROUTE945;

let ROUTE946 = browser.currentScene.createNode("ROUTE");
ROUTE946.fromField = "fraction_changed";
ROUTE946.fromNode = "WalkTimer";
ROUTE946.toField = "set_fraction";
ROUTE946.toNode = "Walk_head_RotationInterpolator";
browser.currentScene.children[315] = ROUTE946;

let ROUTE947 = browser.currentScene.createNode("ROUTE");
ROUTE947.fromField = "fraction_changed";
ROUTE947.fromNode = "WalkTimer";
ROUTE947.toField = "set_fraction";
ROUTE947.toNode = "Walk_neck_RotationInterpolator";
browser.currentScene.children[316] = ROUTE947;

let ROUTE948 = browser.currentScene.createNode("ROUTE");
ROUTE948.fromField = "fraction_changed";
ROUTE948.fromNode = "WalkTimer";
ROUTE948.toField = "set_fraction";
ROUTE948.toNode = "Walk_upper_body_RotationInterpolator";
browser.currentScene.children[317] = ROUTE948;

let ROUTE949 = browser.currentScene.createNode("ROUTE");
ROUTE949.fromField = "fraction_changed";
ROUTE949.fromNode = "WalkTimer";
ROUTE949.toField = "set_fraction";
ROUTE949.toNode = "Walk_whole_body_RotationInterpolator";
browser.currentScene.children[318] = ROUTE949;

let ROUTE950 = browser.currentScene.createNode("ROUTE");
ROUTE950.fromField = "fraction_changed";
ROUTE950.fromNode = "WalkTimer";
ROUTE950.toField = "set_fraction";
ROUTE950.toNode = "Walk_whole_body_TranslationInterpolator";
browser.currentScene.children[319] = ROUTE950;

let ROUTE951 = browser.currentScene.createNode("ROUTE");
ROUTE951.fromField = "fraction_changed";
ROUTE951.fromNode = "WalkTimer";
ROUTE951.toField = "set_fraction";
ROUTE951.toNode = "Walk_l_sternoclavicular_RollInterpolator";
browser.currentScene.children[320] = ROUTE951;

let ROUTE952 = browser.currentScene.createNode("ROUTE");
ROUTE952.fromField = "fraction_changed";
ROUTE952.fromNode = "WalkTimer";
ROUTE952.toField = "set_fraction";
ROUTE952.toNode = "Walk_l_acromioclavicular_RollInterpolator";
browser.currentScene.children[321] = ROUTE952;

let ROUTE953 = browser.currentScene.createNode("ROUTE");
ROUTE953.fromField = "fraction_changed";
ROUTE953.fromNode = "WalkTimer";
ROUTE953.toField = "set_fraction";
ROUTE953.toNode = "Walk_r_sternoclavicular_RollInterpolator";
browser.currentScene.children[322] = ROUTE953;

let ROUTE954 = browser.currentScene.createNode("ROUTE");
ROUTE954.fromField = "fraction_changed";
ROUTE954.fromNode = "WalkTimer";
ROUTE954.toField = "set_fraction";
ROUTE954.toNode = "Walk_r_acromioclavicular_RollInterpolator";
browser.currentScene.children[323] = ROUTE954;

let ROUTE955 = browser.currentScene.createNode("ROUTE");
ROUTE955.fromField = "fraction_changed";
ROUTE955.fromNode = "WalkTimer";
ROUTE955.toField = "set_fraction";
ROUTE955.toNode = "Walk_r_metatarsal_PitchInterpolator";
browser.currentScene.children[324] = ROUTE955;

let ROUTE956 = browser.currentScene.createNode("ROUTE");
ROUTE956.fromField = "fraction_changed";
ROUTE956.fromNode = "WalkTimer";
ROUTE956.toField = "set_fraction";
ROUTE956.toNode = "Walk_sacroiliac_YawInterpolator";
browser.currentScene.children[325] = ROUTE956;

let ROUTE957 = browser.currentScene.createNode("ROUTE");
ROUTE957.fromField = "fraction_changed";
ROUTE957.fromNode = "WalkTimer";
ROUTE957.toField = "set_fraction";
ROUTE957.toNode = "Walk_vl5_YawInterpolator";
browser.currentScene.children[326] = ROUTE957;

let ROUTE958 = browser.currentScene.createNode("ROUTE");
ROUTE958.fromField = "fraction_changed";
ROUTE958.fromNode = "WalkTimer";
ROUTE958.toField = "set_fraction";
ROUTE958.toNode = "Walk_vc6_YawInterpolator";
browser.currentScene.children[327] = ROUTE958;

let ROUTE959 = browser.currentScene.createNode("ROUTE");
ROUTE959.fromField = "fraction_changed";
ROUTE959.fromNode = "WalkTimer";
ROUTE959.toField = "set_fraction";
ROUTE959.toNode = "Walk_l_thumb1_PitchInterpolator";
browser.currentScene.children[328] = ROUTE959;

let ROUTE960 = browser.currentScene.createNode("ROUTE");
ROUTE960.fromField = "fraction_changed";
ROUTE960.fromNode = "WalkTimer";
ROUTE960.toField = "set_fraction";
ROUTE960.toNode = "Walk_r_thumb1_PitchInterpolator";
browser.currentScene.children[329] = ROUTE960;

let ROUTE961 = browser.currentScene.createNode("ROUTE");
ROUTE961.fromField = "value_changed";
ROUTE961.fromNode = "Walk_r_ankle_RotationInterpolator";
ROUTE961.toField = "set_rotation";
ROUTE961.toNode = "boxman_r_ankle";
browser.currentScene.children[330] = ROUTE961;

let ROUTE962 = browser.currentScene.createNode("ROUTE");
ROUTE962.fromField = "value_changed";
ROUTE962.fromNode = "Walk_r_knee_RotationInterpolator";
ROUTE962.toField = "set_rotation";
ROUTE962.toNode = "boxman_r_knee";
browser.currentScene.children[331] = ROUTE962;

let ROUTE963 = browser.currentScene.createNode("ROUTE");
ROUTE963.fromField = "value_changed";
ROUTE963.fromNode = "Walk_r_hip_RotationInterpolator";
ROUTE963.toField = "set_rotation";
ROUTE963.toNode = "boxman_r_hip";
browser.currentScene.children[332] = ROUTE963;

let ROUTE964 = browser.currentScene.createNode("ROUTE");
ROUTE964.fromField = "value_changed";
ROUTE964.fromNode = "Walk_l_ankle_RotationInterpolator";
ROUTE964.toField = "set_rotation";
ROUTE964.toNode = "boxman_l_ankle";
browser.currentScene.children[333] = ROUTE964;

let ROUTE965 = browser.currentScene.createNode("ROUTE");
ROUTE965.fromField = "value_changed";
ROUTE965.fromNode = "Walk_l_knee_RotationInterpolator";
ROUTE965.toField = "set_rotation";
ROUTE965.toNode = "boxman_l_knee";
browser.currentScene.children[334] = ROUTE965;

let ROUTE966 = browser.currentScene.createNode("ROUTE");
ROUTE966.fromField = "value_changed";
ROUTE966.fromNode = "Walk_l_hip_RotationInterpolator";
ROUTE966.toField = "set_rotation";
ROUTE966.toNode = "boxman_l_hip";
browser.currentScene.children[335] = ROUTE966;

let ROUTE967 = browser.currentScene.createNode("ROUTE");
ROUTE967.fromField = "value_changed";
ROUTE967.fromNode = "Walk_r_wrist_RotationInterpolator";
ROUTE967.toField = "set_rotation";
ROUTE967.toNode = "boxman_r_wrist";
browser.currentScene.children[336] = ROUTE967;

let ROUTE968 = browser.currentScene.createNode("ROUTE");
ROUTE968.fromField = "value_changed";
ROUTE968.fromNode = "Walk_r_elbow_RotationInterpolator";
ROUTE968.toField = "set_rotation";
ROUTE968.toNode = "boxman_r_elbow";
browser.currentScene.children[337] = ROUTE968;

let ROUTE969 = browser.currentScene.createNode("ROUTE");
ROUTE969.fromField = "value_changed";
ROUTE969.fromNode = "Walk_r_shoulder_RotationInterpolator";
ROUTE969.toField = "set_rotation";
ROUTE969.toNode = "boxman_r_shoulder";
browser.currentScene.children[338] = ROUTE969;

let ROUTE970 = browser.currentScene.createNode("ROUTE");
ROUTE970.fromField = "value_changed";
ROUTE970.fromNode = "Walk_l_wrist_RotationInterpolator";
ROUTE970.toField = "set_rotation";
ROUTE970.toNode = "boxman_l_wrist";
browser.currentScene.children[339] = ROUTE970;

let ROUTE971 = browser.currentScene.createNode("ROUTE");
ROUTE971.fromField = "value_changed";
ROUTE971.fromNode = "Walk_l_elbow_RotationInterpolator";
ROUTE971.toField = "set_rotation";
ROUTE971.toNode = "boxman_l_elbow";
browser.currentScene.children[340] = ROUTE971;

let ROUTE972 = browser.currentScene.createNode("ROUTE");
ROUTE972.fromField = "value_changed";
ROUTE972.fromNode = "Walk_l_shoulder_RotationInterpolator";
ROUTE972.toField = "set_rotation";
ROUTE972.toNode = "boxman_l_shoulder";
browser.currentScene.children[341] = ROUTE972;

let ROUTE973 = browser.currentScene.createNode("ROUTE");
ROUTE973.fromField = "value_changed";
ROUTE973.fromNode = "Walk_head_RotationInterpolator";
ROUTE973.toField = "set_rotation";
ROUTE973.toNode = "boxman_skullbase";
browser.currentScene.children[342] = ROUTE973;

let ROUTE974 = browser.currentScene.createNode("ROUTE");
ROUTE974.fromField = "value_changed";
ROUTE974.fromNode = "Walk_whole_body_RotationInterpolator";
ROUTE974.toField = "set_rotation";
ROUTE974.toNode = "boxman_humanoid_root";
browser.currentScene.children[343] = ROUTE974;

let ROUTE975 = browser.currentScene.createNode("ROUTE");
ROUTE975.fromField = "value_changed";
ROUTE975.fromNode = "Walk_whole_body_TranslationInterpolator";
ROUTE975.toField = "set_translation";
ROUTE975.toNode = "boxman_humanoid_root";
browser.currentScene.children[344] = ROUTE975;

let ROUTE976 = browser.currentScene.createNode("ROUTE");
ROUTE976.fromField = "value_changed";
ROUTE976.fromNode = "Walk_vl5_YawInterpolator";
ROUTE976.toField = "set_rotation";
ROUTE976.toNode = "boxman_vl5";
browser.currentScene.children[345] = ROUTE976;

let ROUTE977 = browser.currentScene.createNode("ROUTE");
ROUTE977.fromField = "fraction_changed";
ROUTE977.fromNode = "RunTimer";
ROUTE977.toField = "set_fraction";
ROUTE977.toNode = "Run_r_ankle_RotationInterpolator_Run";
browser.currentScene.children[346] = ROUTE977;

let ROUTE978 = browser.currentScene.createNode("ROUTE");
ROUTE978.fromField = "fraction_changed";
ROUTE978.fromNode = "RunTimer";
ROUTE978.toField = "set_fraction";
ROUTE978.toNode = "Run_r_knee_RotationInterpolator_Run";
browser.currentScene.children[347] = ROUTE978;

let ROUTE979 = browser.currentScene.createNode("ROUTE");
ROUTE979.fromField = "fraction_changed";
ROUTE979.fromNode = "RunTimer";
ROUTE979.toField = "set_fraction";
ROUTE979.toNode = "Run_r_hip_RotationInterpolator_Run";
browser.currentScene.children[348] = ROUTE979;

let ROUTE980 = browser.currentScene.createNode("ROUTE");
ROUTE980.fromField = "fraction_changed";
ROUTE980.fromNode = "RunTimer";
ROUTE980.toField = "set_fraction";
ROUTE980.toNode = "Run_l_ankle_RotationInterpolator_Run";
browser.currentScene.children[349] = ROUTE980;

let ROUTE981 = browser.currentScene.createNode("ROUTE");
ROUTE981.fromField = "fraction_changed";
ROUTE981.fromNode = "RunTimer";
ROUTE981.toField = "set_fraction";
ROUTE981.toNode = "Run_l_knee_RotationInterpolator_Run";
browser.currentScene.children[350] = ROUTE981;

let ROUTE982 = browser.currentScene.createNode("ROUTE");
ROUTE982.fromField = "fraction_changed";
ROUTE982.fromNode = "RunTimer";
ROUTE982.toField = "set_fraction";
ROUTE982.toNode = "Run_l_hip_RotationInterpolator_Run";
browser.currentScene.children[351] = ROUTE982;

let ROUTE983 = browser.currentScene.createNode("ROUTE");
ROUTE983.fromField = "fraction_changed";
ROUTE983.fromNode = "RunTimer";
ROUTE983.toField = "set_fraction";
ROUTE983.toNode = "Run_lower_body_RotationInterpolator_Run";
browser.currentScene.children[352] = ROUTE983;

let ROUTE984 = browser.currentScene.createNode("ROUTE");
ROUTE984.fromField = "fraction_changed";
ROUTE984.fromNode = "RunTimer";
ROUTE984.toField = "set_fraction";
ROUTE984.toNode = "Run_r_wrist_RotationInterpolator_Run";
browser.currentScene.children[353] = ROUTE984;

let ROUTE985 = browser.currentScene.createNode("ROUTE");
ROUTE985.fromField = "fraction_changed";
ROUTE985.fromNode = "RunTimer";
ROUTE985.toField = "set_fraction";
ROUTE985.toNode = "Run_r_elbow_RotationInterpolator_Run";
browser.currentScene.children[354] = ROUTE985;

let ROUTE986 = browser.currentScene.createNode("ROUTE");
ROUTE986.fromField = "fraction_changed";
ROUTE986.fromNode = "RunTimer";
ROUTE986.toField = "set_fraction";
ROUTE986.toNode = "Run_r_shoulder_RotationInterpolator_Run";
browser.currentScene.children[355] = ROUTE986;

let ROUTE987 = browser.currentScene.createNode("ROUTE");
ROUTE987.fromField = "fraction_changed";
ROUTE987.fromNode = "RunTimer";
ROUTE987.toField = "set_fraction";
ROUTE987.toNode = "Run_l_wrist_RotationInterpolator_Run";
browser.currentScene.children[356] = ROUTE987;

let ROUTE988 = browser.currentScene.createNode("ROUTE");
ROUTE988.fromField = "fraction_changed";
ROUTE988.fromNode = "RunTimer";
ROUTE988.toField = "set_fraction";
ROUTE988.toNode = "Run_l_elbow_RotationInterpolator_Run";
browser.currentScene.children[357] = ROUTE988;

let ROUTE989 = browser.currentScene.createNode("ROUTE");
ROUTE989.fromField = "fraction_changed";
ROUTE989.fromNode = "RunTimer";
ROUTE989.toField = "set_fraction";
ROUTE989.toNode = "Run_l_shoulder_RotationInterpolator_Run";
browser.currentScene.children[358] = ROUTE989;

let ROUTE990 = browser.currentScene.createNode("ROUTE");
ROUTE990.fromField = "fraction_changed";
ROUTE990.fromNode = "RunTimer";
ROUTE990.toField = "set_fraction";
ROUTE990.toNode = "Run_head_RotationInterpolator_Run";
browser.currentScene.children[359] = ROUTE990;

let ROUTE991 = browser.currentScene.createNode("ROUTE");
ROUTE991.fromField = "fraction_changed";
ROUTE991.fromNode = "RunTimer";
ROUTE991.toField = "set_fraction";
ROUTE991.toNode = "Run_neck_RotationInterpolator_Run";
browser.currentScene.children[360] = ROUTE991;

let ROUTE992 = browser.currentScene.createNode("ROUTE");
ROUTE992.fromField = "fraction_changed";
ROUTE992.fromNode = "RunTimer";
ROUTE992.toField = "set_fraction";
ROUTE992.toNode = "Run_upper_body_RotationInterpolator_Run";
browser.currentScene.children[361] = ROUTE992;

let ROUTE993 = browser.currentScene.createNode("ROUTE");
ROUTE993.fromField = "fraction_changed";
ROUTE993.fromNode = "RunTimer";
ROUTE993.toField = "set_fraction";
ROUTE993.toNode = "Run_whole_body_RotationInterpolator_Run";
browser.currentScene.children[362] = ROUTE993;

let ROUTE994 = browser.currentScene.createNode("ROUTE");
ROUTE994.fromField = "fraction_changed";
ROUTE994.fromNode = "RunTimer";
ROUTE994.toField = "set_fraction";
ROUTE994.toNode = "Run_whole_body_TranslationInterpolator_Run";
browser.currentScene.children[363] = ROUTE994;

let ROUTE995 = browser.currentScene.createNode("ROUTE");
ROUTE995.fromField = "fraction_changed";
ROUTE995.fromNode = "RunTimer";
ROUTE995.toField = "set_fraction";
ROUTE995.toNode = "Run_l_sternoclavicular_RollInterpolator";
browser.currentScene.children[364] = ROUTE995;

let ROUTE996 = browser.currentScene.createNode("ROUTE");
ROUTE996.fromField = "fraction_changed";
ROUTE996.fromNode = "RunTimer";
ROUTE996.toField = "set_fraction";
ROUTE996.toNode = "Run_l_acromioclavicular_RollInterpolator";
browser.currentScene.children[365] = ROUTE996;

let ROUTE997 = browser.currentScene.createNode("ROUTE");
ROUTE997.fromField = "fraction_changed";
ROUTE997.fromNode = "RunTimer";
ROUTE997.toField = "set_fraction";
ROUTE997.toNode = "Run_r_sternoclavicular_RollInterpolator";
browser.currentScene.children[366] = ROUTE997;

let ROUTE998 = browser.currentScene.createNode("ROUTE");
ROUTE998.fromField = "fraction_changed";
ROUTE998.fromNode = "RunTimer";
ROUTE998.toField = "set_fraction";
ROUTE998.toNode = "Run_r_acromioclavicular_RollInterpolator";
browser.currentScene.children[367] = ROUTE998;

let ROUTE999 = browser.currentScene.createNode("ROUTE");
ROUTE999.fromField = "fraction_changed";
ROUTE999.fromNode = "RunTimer";
ROUTE999.toField = "set_fraction";
ROUTE999.toNode = "Run_r_metatarsal_PitchInterpolator";
browser.currentScene.children[368] = ROUTE999;

let ROUTE1000 = browser.currentScene.createNode("ROUTE");
ROUTE1000.fromField = "fraction_changed";
ROUTE1000.fromNode = "RunTimer";
ROUTE1000.toField = "set_fraction";
ROUTE1000.toNode = "Run_sacroiliac_YawInterpolator";
browser.currentScene.children[369] = ROUTE1000;

let ROUTE1001 = browser.currentScene.createNode("ROUTE");
ROUTE1001.fromField = "fraction_changed";
ROUTE1001.fromNode = "RunTimer";
ROUTE1001.toField = "set_fraction";
ROUTE1001.toNode = "Run_vl5_YawInterpolator";
browser.currentScene.children[370] = ROUTE1001;

let ROUTE1002 = browser.currentScene.createNode("ROUTE");
ROUTE1002.fromField = "fraction_changed";
ROUTE1002.fromNode = "RunTimer";
ROUTE1002.toField = "set_fraction";
ROUTE1002.toNode = "Run_vc6_YawInterpolator";
browser.currentScene.children[371] = ROUTE1002;

let ROUTE1003 = browser.currentScene.createNode("ROUTE");
ROUTE1003.fromField = "fraction_changed";
ROUTE1003.fromNode = "RunTimer";
ROUTE1003.toField = "set_fraction";
ROUTE1003.toNode = "Run_l_thumb1_PitchInterpolator";
browser.currentScene.children[372] = ROUTE1003;

let ROUTE1004 = browser.currentScene.createNode("ROUTE");
ROUTE1004.fromField = "fraction_changed";
ROUTE1004.fromNode = "RunTimer";
ROUTE1004.toField = "set_fraction";
ROUTE1004.toNode = "Run_r_thumb1_PitchInterpolator";
browser.currentScene.children[373] = ROUTE1004;

let ROUTE1005 = browser.currentScene.createNode("ROUTE");
ROUTE1005.fromField = "value_changed";
ROUTE1005.fromNode = "Run_r_ankle_RotationInterpolator_Run";
ROUTE1005.toField = "set_rotation";
ROUTE1005.toNode = "boxman_r_ankle";
browser.currentScene.children[374] = ROUTE1005;

let ROUTE1006 = browser.currentScene.createNode("ROUTE");
ROUTE1006.fromField = "value_changed";
ROUTE1006.fromNode = "Run_r_knee_RotationInterpolator_Run";
ROUTE1006.toField = "set_rotation";
ROUTE1006.toNode = "boxman_r_knee";
browser.currentScene.children[375] = ROUTE1006;

let ROUTE1007 = browser.currentScene.createNode("ROUTE");
ROUTE1007.fromField = "value_changed";
ROUTE1007.fromNode = "Run_r_hip_RotationInterpolator_Run";
ROUTE1007.toField = "set_rotation";
ROUTE1007.toNode = "boxman_r_hip";
browser.currentScene.children[376] = ROUTE1007;

let ROUTE1008 = browser.currentScene.createNode("ROUTE");
ROUTE1008.fromField = "value_changed";
ROUTE1008.fromNode = "Run_l_ankle_RotationInterpolator_Run";
ROUTE1008.toField = "set_rotation";
ROUTE1008.toNode = "boxman_l_ankle";
browser.currentScene.children[377] = ROUTE1008;

let ROUTE1009 = browser.currentScene.createNode("ROUTE");
ROUTE1009.fromField = "value_changed";
ROUTE1009.fromNode = "Run_l_knee_RotationInterpolator_Run";
ROUTE1009.toField = "set_rotation";
ROUTE1009.toNode = "boxman_l_knee";
browser.currentScene.children[378] = ROUTE1009;

let ROUTE1010 = browser.currentScene.createNode("ROUTE");
ROUTE1010.fromField = "value_changed";
ROUTE1010.fromNode = "Run_l_hip_RotationInterpolator_Run";
ROUTE1010.toField = "set_rotation";
ROUTE1010.toNode = "boxman_l_hip";
browser.currentScene.children[379] = ROUTE1010;

let ROUTE1011 = browser.currentScene.createNode("ROUTE");
ROUTE1011.fromField = "value_changed";
ROUTE1011.fromNode = "Run_r_wrist_RotationInterpolator_Run";
ROUTE1011.toField = "set_rotation";
ROUTE1011.toNode = "boxman_r_wrist";
browser.currentScene.children[380] = ROUTE1011;

let ROUTE1012 = browser.currentScene.createNode("ROUTE");
ROUTE1012.fromField = "value_changed";
ROUTE1012.fromNode = "Run_r_elbow_RotationInterpolator_Run";
ROUTE1012.toField = "set_rotation";
ROUTE1012.toNode = "boxman_r_elbow";
browser.currentScene.children[381] = ROUTE1012;

let ROUTE1013 = browser.currentScene.createNode("ROUTE");
ROUTE1013.fromField = "value_changed";
ROUTE1013.fromNode = "Run_r_shoulder_RotationInterpolator_Run";
ROUTE1013.toField = "set_rotation";
ROUTE1013.toNode = "boxman_r_shoulder";
browser.currentScene.children[382] = ROUTE1013;

let ROUTE1014 = browser.currentScene.createNode("ROUTE");
ROUTE1014.fromField = "value_changed";
ROUTE1014.fromNode = "Run_l_wrist_RotationInterpolator_Run";
ROUTE1014.toField = "set_rotation";
ROUTE1014.toNode = "boxman_l_wrist";
browser.currentScene.children[383] = ROUTE1014;

let ROUTE1015 = browser.currentScene.createNode("ROUTE");
ROUTE1015.fromField = "value_changed";
ROUTE1015.fromNode = "Run_l_elbow_RotationInterpolator_Run";
ROUTE1015.toField = "set_rotation";
ROUTE1015.toNode = "boxman_l_elbow";
browser.currentScene.children[384] = ROUTE1015;

let ROUTE1016 = browser.currentScene.createNode("ROUTE");
ROUTE1016.fromField = "value_changed";
ROUTE1016.fromNode = "Run_l_shoulder_RotationInterpolator_Run";
ROUTE1016.toField = "set_rotation";
ROUTE1016.toNode = "boxman_l_shoulder";
browser.currentScene.children[385] = ROUTE1016;

let ROUTE1017 = browser.currentScene.createNode("ROUTE");
ROUTE1017.fromField = "value_changed";
ROUTE1017.fromNode = "Run_head_RotationInterpolator_Run";
ROUTE1017.toField = "set_rotation";
ROUTE1017.toNode = "boxman_skullbase";
browser.currentScene.children[386] = ROUTE1017;

let ROUTE1018 = browser.currentScene.createNode("ROUTE");
ROUTE1018.fromField = "value_changed";
ROUTE1018.fromNode = "Run_whole_body_RotationInterpolator_Run";
ROUTE1018.toField = "set_rotation";
ROUTE1018.toNode = "boxman_humanoid_root";
browser.currentScene.children[387] = ROUTE1018;

let ROUTE1019 = browser.currentScene.createNode("ROUTE");
ROUTE1019.fromField = "value_changed";
ROUTE1019.fromNode = "Run_whole_body_TranslationInterpolator_Run";
ROUTE1019.toField = "set_translation";
ROUTE1019.toNode = "boxman_humanoid_root";
browser.currentScene.children[388] = ROUTE1019;

let ROUTE1020 = browser.currentScene.createNode("ROUTE");
ROUTE1020.fromField = "value_changed";
ROUTE1020.fromNode = "Run_vl5_YawInterpolator";
ROUTE1020.toField = "set_rotation";
ROUTE1020.toNode = "boxman_vl5";
browser.currentScene.children[389] = ROUTE1020;

let ROUTE1021 = browser.currentScene.createNode("ROUTE");
ROUTE1021.fromField = "fraction_changed";
ROUTE1021.fromNode = "JumpTimer";
ROUTE1021.toField = "set_fraction";
ROUTE1021.toNode = "Jump_r_ankle_RotationInterpolator";
browser.currentScene.children[390] = ROUTE1021;

let ROUTE1022 = browser.currentScene.createNode("ROUTE");
ROUTE1022.fromField = "fraction_changed";
ROUTE1022.fromNode = "JumpTimer";
ROUTE1022.toField = "set_fraction";
ROUTE1022.toNode = "Jump_r_knee_RotationInterpolator";
browser.currentScene.children[391] = ROUTE1022;

let ROUTE1023 = browser.currentScene.createNode("ROUTE");
ROUTE1023.fromField = "fraction_changed";
ROUTE1023.fromNode = "JumpTimer";
ROUTE1023.toField = "set_fraction";
ROUTE1023.toNode = "Jump_r_hip_RotationInterpolator";
browser.currentScene.children[392] = ROUTE1023;

let ROUTE1024 = browser.currentScene.createNode("ROUTE");
ROUTE1024.fromField = "fraction_changed";
ROUTE1024.fromNode = "JumpTimer";
ROUTE1024.toField = "set_fraction";
ROUTE1024.toNode = "Jump_l_ankle_RotationInterpolator";
browser.currentScene.children[393] = ROUTE1024;

let ROUTE1025 = browser.currentScene.createNode("ROUTE");
ROUTE1025.fromField = "fraction_changed";
ROUTE1025.fromNode = "JumpTimer";
ROUTE1025.toField = "set_fraction";
ROUTE1025.toNode = "Jump_l_knee_RotationInterpolator";
browser.currentScene.children[394] = ROUTE1025;

let ROUTE1026 = browser.currentScene.createNode("ROUTE");
ROUTE1026.fromField = "fraction_changed";
ROUTE1026.fromNode = "JumpTimer";
ROUTE1026.toField = "set_fraction";
ROUTE1026.toNode = "Jump_l_hip_RotationInterpolator";
browser.currentScene.children[395] = ROUTE1026;

let ROUTE1027 = browser.currentScene.createNode("ROUTE");
ROUTE1027.fromField = "fraction_changed";
ROUTE1027.fromNode = "JumpTimer";
ROUTE1027.toField = "set_fraction";
ROUTE1027.toNode = "Jump_lower_body_RotationInterpolator";
browser.currentScene.children[396] = ROUTE1027;

let ROUTE1028 = browser.currentScene.createNode("ROUTE");
ROUTE1028.fromField = "fraction_changed";
ROUTE1028.fromNode = "JumpTimer";
ROUTE1028.toField = "set_fraction";
ROUTE1028.toNode = "Jump_r_wrist_RotationInterpolator";
browser.currentScene.children[397] = ROUTE1028;

let ROUTE1029 = browser.currentScene.createNode("ROUTE");
ROUTE1029.fromField = "fraction_changed";
ROUTE1029.fromNode = "JumpTimer";
ROUTE1029.toField = "set_fraction";
ROUTE1029.toNode = "Jump_r_elbow_RotationInterpolator";
browser.currentScene.children[398] = ROUTE1029;

let ROUTE1030 = browser.currentScene.createNode("ROUTE");
ROUTE1030.fromField = "fraction_changed";
ROUTE1030.fromNode = "JumpTimer";
ROUTE1030.toField = "set_fraction";
ROUTE1030.toNode = "Jump_r_shoulder_RotationInterpolator";
browser.currentScene.children[399] = ROUTE1030;

let ROUTE1031 = browser.currentScene.createNode("ROUTE");
ROUTE1031.fromField = "fraction_changed";
ROUTE1031.fromNode = "JumpTimer";
ROUTE1031.toField = "set_fraction";
ROUTE1031.toNode = "Jump_l_wrist_RotationInterpolator";
browser.currentScene.children[400] = ROUTE1031;

let ROUTE1032 = browser.currentScene.createNode("ROUTE");
ROUTE1032.fromField = "fraction_changed";
ROUTE1032.fromNode = "JumpTimer";
ROUTE1032.toField = "set_fraction";
ROUTE1032.toNode = "Jump_l_elbow_RotationInterpolator";
browser.currentScene.children[401] = ROUTE1032;

let ROUTE1033 = browser.currentScene.createNode("ROUTE");
ROUTE1033.fromField = "fraction_changed";
ROUTE1033.fromNode = "JumpTimer";
ROUTE1033.toField = "set_fraction";
ROUTE1033.toNode = "Jump_l_shoulder_RotationInterpolator";
browser.currentScene.children[402] = ROUTE1033;

let ROUTE1034 = browser.currentScene.createNode("ROUTE");
ROUTE1034.fromField = "fraction_changed";
ROUTE1034.fromNode = "JumpTimer";
ROUTE1034.toField = "set_fraction";
ROUTE1034.toNode = "Jump_head_RotationInterpolator";
browser.currentScene.children[403] = ROUTE1034;

let ROUTE1035 = browser.currentScene.createNode("ROUTE");
ROUTE1035.fromField = "fraction_changed";
ROUTE1035.fromNode = "JumpTimer";
ROUTE1035.toField = "set_fraction";
ROUTE1035.toNode = "Jump_neck_RotationInterpolator";
browser.currentScene.children[404] = ROUTE1035;

let ROUTE1036 = browser.currentScene.createNode("ROUTE");
ROUTE1036.fromField = "fraction_changed";
ROUTE1036.fromNode = "JumpTimer";
ROUTE1036.toField = "set_fraction";
ROUTE1036.toNode = "Jump_upper_body_RotationInterpolator";
browser.currentScene.children[405] = ROUTE1036;

let ROUTE1037 = browser.currentScene.createNode("ROUTE");
ROUTE1037.fromField = "fraction_changed";
ROUTE1037.fromNode = "JumpTimer";
ROUTE1037.toField = "set_fraction";
ROUTE1037.toNode = "Jump_whole_body_RotationInterpolator";
browser.currentScene.children[406] = ROUTE1037;

let ROUTE1038 = browser.currentScene.createNode("ROUTE");
ROUTE1038.fromField = "fraction_changed";
ROUTE1038.fromNode = "JumpTimer";
ROUTE1038.toField = "set_fraction";
ROUTE1038.toNode = "Jump_whole_body_TranslationInterpolator";
browser.currentScene.children[407] = ROUTE1038;

let ROUTE1039 = browser.currentScene.createNode("ROUTE");
ROUTE1039.fromField = "fraction_changed";
ROUTE1039.fromNode = "JumpTimer";
ROUTE1039.toField = "set_fraction";
ROUTE1039.toNode = "Jump_l_sternoclavicular_RollInterpolator";
browser.currentScene.children[408] = ROUTE1039;

let ROUTE1040 = browser.currentScene.createNode("ROUTE");
ROUTE1040.fromField = "fraction_changed";
ROUTE1040.fromNode = "JumpTimer";
ROUTE1040.toField = "set_fraction";
ROUTE1040.toNode = "Jump_l_acromioclavicular_RollInterpolator";
browser.currentScene.children[409] = ROUTE1040;

let ROUTE1041 = browser.currentScene.createNode("ROUTE");
ROUTE1041.fromField = "fraction_changed";
ROUTE1041.fromNode = "JumpTimer";
ROUTE1041.toField = "set_fraction";
ROUTE1041.toNode = "Jump_r_sternoclavicular_RollInterpolator";
browser.currentScene.children[410] = ROUTE1041;

let ROUTE1042 = browser.currentScene.createNode("ROUTE");
ROUTE1042.fromField = "fraction_changed";
ROUTE1042.fromNode = "JumpTimer";
ROUTE1042.toField = "set_fraction";
ROUTE1042.toNode = "Jump_r_acromioclavicular_RollInterpolator";
browser.currentScene.children[411] = ROUTE1042;

let ROUTE1043 = browser.currentScene.createNode("ROUTE");
ROUTE1043.fromField = "fraction_changed";
ROUTE1043.fromNode = "JumpTimer";
ROUTE1043.toField = "set_fraction";
ROUTE1043.toNode = "Jump_r_metatarsal_PitchInterpolator";
browser.currentScene.children[412] = ROUTE1043;

let ROUTE1044 = browser.currentScene.createNode("ROUTE");
ROUTE1044.fromField = "fraction_changed";
ROUTE1044.fromNode = "JumpTimer";
ROUTE1044.toField = "set_fraction";
ROUTE1044.toNode = "Jump_sacroiliac_YawInterpolator";
browser.currentScene.children[413] = ROUTE1044;

let ROUTE1045 = browser.currentScene.createNode("ROUTE");
ROUTE1045.fromField = "fraction_changed";
ROUTE1045.fromNode = "JumpTimer";
ROUTE1045.toField = "set_fraction";
ROUTE1045.toNode = "Jump_vl5_YawInterpolator";
browser.currentScene.children[414] = ROUTE1045;

let ROUTE1046 = browser.currentScene.createNode("ROUTE");
ROUTE1046.fromField = "fraction_changed";
ROUTE1046.fromNode = "JumpTimer";
ROUTE1046.toField = "set_fraction";
ROUTE1046.toNode = "Jump_vc6_YawInterpolator";
browser.currentScene.children[415] = ROUTE1046;

let ROUTE1047 = browser.currentScene.createNode("ROUTE");
ROUTE1047.fromField = "fraction_changed";
ROUTE1047.fromNode = "JumpTimer";
ROUTE1047.toField = "set_fraction";
ROUTE1047.toNode = "Jump_l_thumb1_PitchInterpolator";
browser.currentScene.children[416] = ROUTE1047;

let ROUTE1048 = browser.currentScene.createNode("ROUTE");
ROUTE1048.fromField = "fraction_changed";
ROUTE1048.fromNode = "JumpTimer";
ROUTE1048.toField = "set_fraction";
ROUTE1048.toNode = "Jump_r_thumb1_PitchInterpolator";
browser.currentScene.children[417] = ROUTE1048;

let ROUTE1049 = browser.currentScene.createNode("ROUTE");
ROUTE1049.fromField = "value_changed";
ROUTE1049.fromNode = "Jump_r_ankle_RotationInterpolator";
ROUTE1049.toField = "set_rotation";
ROUTE1049.toNode = "boxman_r_ankle";
browser.currentScene.children[418] = ROUTE1049;

let ROUTE1050 = browser.currentScene.createNode("ROUTE");
ROUTE1050.fromField = "value_changed";
ROUTE1050.fromNode = "Jump_r_knee_RotationInterpolator";
ROUTE1050.toField = "set_rotation";
ROUTE1050.toNode = "boxman_r_knee";
browser.currentScene.children[419] = ROUTE1050;

let ROUTE1051 = browser.currentScene.createNode("ROUTE");
ROUTE1051.fromField = "value_changed";
ROUTE1051.fromNode = "Jump_r_hip_RotationInterpolator";
ROUTE1051.toField = "set_rotation";
ROUTE1051.toNode = "boxman_r_hip";
browser.currentScene.children[420] = ROUTE1051;

let ROUTE1052 = browser.currentScene.createNode("ROUTE");
ROUTE1052.fromField = "value_changed";
ROUTE1052.fromNode = "Jump_l_ankle_RotationInterpolator";
ROUTE1052.toField = "set_rotation";
ROUTE1052.toNode = "boxman_l_ankle";
browser.currentScene.children[421] = ROUTE1052;

let ROUTE1053 = browser.currentScene.createNode("ROUTE");
ROUTE1053.fromField = "value_changed";
ROUTE1053.fromNode = "Jump_l_knee_RotationInterpolator";
ROUTE1053.toField = "set_rotation";
ROUTE1053.toNode = "boxman_l_knee";
browser.currentScene.children[422] = ROUTE1053;

let ROUTE1054 = browser.currentScene.createNode("ROUTE");
ROUTE1054.fromField = "value_changed";
ROUTE1054.fromNode = "Jump_l_hip_RotationInterpolator";
ROUTE1054.toField = "set_rotation";
ROUTE1054.toNode = "boxman_l_hip";
browser.currentScene.children[423] = ROUTE1054;

let ROUTE1055 = browser.currentScene.createNode("ROUTE");
ROUTE1055.fromField = "value_changed";
ROUTE1055.fromNode = "Jump_r_wrist_RotationInterpolator";
ROUTE1055.toField = "set_rotation";
ROUTE1055.toNode = "boxman_r_wrist";
browser.currentScene.children[424] = ROUTE1055;

let ROUTE1056 = browser.currentScene.createNode("ROUTE");
ROUTE1056.fromField = "value_changed";
ROUTE1056.fromNode = "Jump_r_elbow_RotationInterpolator";
ROUTE1056.toField = "set_rotation";
ROUTE1056.toNode = "boxman_r_elbow";
browser.currentScene.children[425] = ROUTE1056;

let ROUTE1057 = browser.currentScene.createNode("ROUTE");
ROUTE1057.fromField = "value_changed";
ROUTE1057.fromNode = "Jump_r_shoulder_RotationInterpolator";
ROUTE1057.toField = "set_rotation";
ROUTE1057.toNode = "boxman_r_shoulder";
browser.currentScene.children[426] = ROUTE1057;

let ROUTE1058 = browser.currentScene.createNode("ROUTE");
ROUTE1058.fromField = "value_changed";
ROUTE1058.fromNode = "Jump_l_wrist_RotationInterpolator";
ROUTE1058.toField = "set_rotation";
ROUTE1058.toNode = "boxman_l_wrist";
browser.currentScene.children[427] = ROUTE1058;

let ROUTE1059 = browser.currentScene.createNode("ROUTE");
ROUTE1059.fromField = "value_changed";
ROUTE1059.fromNode = "Jump_l_elbow_RotationInterpolator";
ROUTE1059.toField = "set_rotation";
ROUTE1059.toNode = "boxman_l_elbow";
browser.currentScene.children[428] = ROUTE1059;

let ROUTE1060 = browser.currentScene.createNode("ROUTE");
ROUTE1060.fromField = "value_changed";
ROUTE1060.fromNode = "Jump_l_shoulder_RotationInterpolator";
ROUTE1060.toField = "set_rotation";
ROUTE1060.toNode = "boxman_l_shoulder";
browser.currentScene.children[429] = ROUTE1060;

let ROUTE1061 = browser.currentScene.createNode("ROUTE");
ROUTE1061.fromField = "value_changed";
ROUTE1061.fromNode = "Jump_head_RotationInterpolator";
ROUTE1061.toField = "set_rotation";
ROUTE1061.toNode = "boxman_skullbase";
browser.currentScene.children[430] = ROUTE1061;

let ROUTE1062 = browser.currentScene.createNode("ROUTE");
ROUTE1062.fromField = "value_changed";
ROUTE1062.fromNode = "Jump_whole_body_RotationInterpolator";
ROUTE1062.toField = "set_rotation";
ROUTE1062.toNode = "boxman_humanoid_root";
browser.currentScene.children[431] = ROUTE1062;

let ROUTE1063 = browser.currentScene.createNode("ROUTE");
ROUTE1063.fromField = "value_changed";
ROUTE1063.fromNode = "Jump_whole_body_TranslationInterpolator";
ROUTE1063.toField = "set_translation";
ROUTE1063.toNode = "boxman_humanoid_root";
browser.currentScene.children[432] = ROUTE1063;

let ROUTE1064 = browser.currentScene.createNode("ROUTE");
ROUTE1064.fromField = "value_changed";
ROUTE1064.fromNode = "Jump_vl5_YawInterpolator";
ROUTE1064.toField = "set_rotation";
ROUTE1064.toNode = "boxman_vl5";
browser.currentScene.children[433] = ROUTE1064;

let ROUTE1065 = browser.currentScene.createNode("ROUTE");
ROUTE1065.fromField = "fraction_changed";
ROUTE1065.fromNode = "KickTimer";
ROUTE1065.toField = "set_fraction";
ROUTE1065.toNode = "Kick_l_sternoclavicular_RollInterpolator";
browser.currentScene.children[434] = ROUTE1065;

let ROUTE1066 = browser.currentScene.createNode("ROUTE");
ROUTE1066.fromField = "fraction_changed";
ROUTE1066.fromNode = "KickTimer";
ROUTE1066.toField = "set_fraction";
ROUTE1066.toNode = "Kick_l_acromioclavicular_RollInterpolator";
browser.currentScene.children[435] = ROUTE1066;

let ROUTE1067 = browser.currentScene.createNode("ROUTE");
ROUTE1067.fromField = "fraction_changed";
ROUTE1067.fromNode = "KickTimer";
ROUTE1067.toField = "set_fraction";
ROUTE1067.toNode = "Kick_l_shoulder_RollInterpolator";
browser.currentScene.children[436] = ROUTE1067;

let ROUTE1068 = browser.currentScene.createNode("ROUTE");
ROUTE1068.fromField = "fraction_changed";
ROUTE1068.fromNode = "KickTimer";
ROUTE1068.toField = "set_fraction";
ROUTE1068.toNode = "Kick_l_ForeArm_PitchInterpolator";
browser.currentScene.children[437] = ROUTE1068;

let ROUTE1069 = browser.currentScene.createNode("ROUTE");
ROUTE1069.fromField = "fraction_changed";
ROUTE1069.fromNode = "KickTimer";
ROUTE1069.toField = "set_fraction";
ROUTE1069.toNode = "Kick_l_wrist_RollInterpolator";
browser.currentScene.children[438] = ROUTE1069;

let ROUTE1070 = browser.currentScene.createNode("ROUTE");
ROUTE1070.fromField = "fraction_changed";
ROUTE1070.fromNode = "KickTimer";
ROUTE1070.toField = "set_fraction";
ROUTE1070.toNode = "Kick_l_thumb1_PitchInterpolator";
browser.currentScene.children[439] = ROUTE1070;

let ROUTE1071 = browser.currentScene.createNode("ROUTE");
ROUTE1071.fromField = "fraction_changed";
ROUTE1071.fromNode = "KickTimer";
ROUTE1071.toField = "set_fraction";
ROUTE1071.toNode = "Kick_r_sternoclavicular_RollInterpolator";
browser.currentScene.children[440] = ROUTE1071;

let ROUTE1072 = browser.currentScene.createNode("ROUTE");
ROUTE1072.fromField = "fraction_changed";
ROUTE1072.fromNode = "KickTimer";
ROUTE1072.toField = "set_fraction";
ROUTE1072.toNode = "Kick_r_acromioclavicular_RollInterpolator";
browser.currentScene.children[441] = ROUTE1072;

let ROUTE1073 = browser.currentScene.createNode("ROUTE");
ROUTE1073.fromField = "fraction_changed";
ROUTE1073.fromNode = "KickTimer";
ROUTE1073.toField = "set_fraction";
ROUTE1073.toNode = "Kick_r_shoulder_RollInterpolator";
browser.currentScene.children[442] = ROUTE1073;

let ROUTE1074 = browser.currentScene.createNode("ROUTE");
ROUTE1074.fromField = "fraction_changed";
ROUTE1074.fromNode = "KickTimer";
ROUTE1074.toField = "set_fraction";
ROUTE1074.toNode = "Kick_r_ForeArm_PitchInterpolator";
browser.currentScene.children[443] = ROUTE1074;

let ROUTE1075 = browser.currentScene.createNode("ROUTE");
ROUTE1075.fromField = "fraction_changed";
ROUTE1075.fromNode = "KickTimer";
ROUTE1075.toField = "set_fraction";
ROUTE1075.toNode = "Kick_r_wrist_RollInterpolator";
browser.currentScene.children[444] = ROUTE1075;

let ROUTE1076 = browser.currentScene.createNode("ROUTE");
ROUTE1076.fromField = "fraction_changed";
ROUTE1076.fromNode = "KickTimer";
ROUTE1076.toField = "set_fraction";
ROUTE1076.toNode = "Kick_r_thumb1_PitchInterpolator";
browser.currentScene.children[445] = ROUTE1076;

let ROUTE1077 = browser.currentScene.createNode("ROUTE");
ROUTE1077.fromField = "fraction_changed";
ROUTE1077.fromNode = "KickTimer";
ROUTE1077.toField = "set_fraction";
ROUTE1077.toNode = "Kick_r_hip_PitchInterpolator";
browser.currentScene.children[446] = ROUTE1077;

let ROUTE1078 = browser.currentScene.createNode("ROUTE");
ROUTE1078.fromField = "fraction_changed";
ROUTE1078.fromNode = "KickTimer";
ROUTE1078.toField = "set_fraction";
ROUTE1078.toNode = "Kick_r_knee_PitchInterpolator";
browser.currentScene.children[447] = ROUTE1078;

let ROUTE1079 = browser.currentScene.createNode("ROUTE");
ROUTE1079.fromField = "fraction_changed";
ROUTE1079.fromNode = "KickTimer";
ROUTE1079.toField = "set_fraction";
ROUTE1079.toNode = "Kick_l_hip_PitchInterpolator";
browser.currentScene.children[448] = ROUTE1079;

let ROUTE1080 = browser.currentScene.createNode("ROUTE");
ROUTE1080.fromField = "fraction_changed";
ROUTE1080.fromNode = "KickTimer";
ROUTE1080.toField = "set_fraction";
ROUTE1080.toNode = "Kick_l_knee_PitchInterpolator";
browser.currentScene.children[449] = ROUTE1080;

let ROUTE1081 = browser.currentScene.createNode("ROUTE");
ROUTE1081.fromField = "fraction_changed";
ROUTE1081.fromNode = "KickTimer";
ROUTE1081.toField = "set_fraction";
ROUTE1081.toNode = "Kick_r_ankle_PitchInterpolator";
browser.currentScene.children[450] = ROUTE1081;

let ROUTE1082 = browser.currentScene.createNode("ROUTE");
ROUTE1082.fromField = "fraction_changed";
ROUTE1082.fromNode = "KickTimer";
ROUTE1082.toField = "set_fraction";
ROUTE1082.toNode = "Kick_r_metatarsal_PitchInterpolator";
browser.currentScene.children[451] = ROUTE1082;

let ROUTE1083 = browser.currentScene.createNode("ROUTE");
ROUTE1083.fromField = "fraction_changed";
ROUTE1083.fromNode = "KickTimer";
ROUTE1083.toField = "set_fraction";
ROUTE1083.toNode = "Kick_sacroiliac_YawInterpolator";
browser.currentScene.children[452] = ROUTE1083;

let ROUTE1084 = browser.currentScene.createNode("ROUTE");
ROUTE1084.fromField = "fraction_changed";
ROUTE1084.fromNode = "KickTimer";
ROUTE1084.toField = "set_fraction";
ROUTE1084.toNode = "Kick_vl5_YawInterpolator";
browser.currentScene.children[453] = ROUTE1084;

let ROUTE1085 = browser.currentScene.createNode("ROUTE");
ROUTE1085.fromField = "fraction_changed";
ROUTE1085.fromNode = "KickTimer";
ROUTE1085.toField = "set_fraction";
ROUTE1085.toNode = "Kick_vc6_YawInterpolator";
browser.currentScene.children[454] = ROUTE1085;

let ROUTE1086 = browser.currentScene.createNode("ROUTE");
ROUTE1086.fromField = "fraction_changed";
ROUTE1086.fromNode = "KickTimer";
ROUTE1086.toField = "set_fraction";
ROUTE1086.toNode = "Kick_lower_body_RotationInterpolator";
browser.currentScene.children[455] = ROUTE1086;

let ROUTE1087 = browser.currentScene.createNode("ROUTE");
ROUTE1087.fromField = "fraction_changed";
ROUTE1087.fromNode = "KickTimer";
ROUTE1087.toField = "set_fraction";
ROUTE1087.toNode = "Kick_upper_body_RotationInterpolator";
browser.currentScene.children[456] = ROUTE1087;

let ROUTE1088 = browser.currentScene.createNode("ROUTE");
ROUTE1088.fromField = "fraction_changed";
ROUTE1088.fromNode = "KickTimer";
ROUTE1088.toField = "set_fraction";
ROUTE1088.toNode = "Kick_whole_body_RotationInterpolator";
browser.currentScene.children[457] = ROUTE1088;

let ROUTE1089 = browser.currentScene.createNode("ROUTE");
ROUTE1089.fromField = "fraction_changed";
ROUTE1089.fromNode = "KickTimer";
ROUTE1089.toField = "set_fraction";
ROUTE1089.toNode = "Kick_whole_body_TranslationInterpolator";
browser.currentScene.children[458] = ROUTE1089;

let ROUTE1090 = browser.currentScene.createNode("ROUTE");
ROUTE1090.fromField = "fraction_changed";
ROUTE1090.fromNode = "KickTimer";
ROUTE1090.toField = "set_fraction";
ROUTE1090.toNode = "Kick_neck_RotationInterpolator";
browser.currentScene.children[459] = ROUTE1090;

let ROUTE1091 = browser.currentScene.createNode("ROUTE");
ROUTE1091.fromField = "value_changed";
ROUTE1091.fromNode = "Kick_l_shoulder_RollInterpolator";
ROUTE1091.toField = "set_rotation";
ROUTE1091.toNode = "boxman_l_shoulder";
browser.currentScene.children[460] = ROUTE1091;

let ROUTE1092 = browser.currentScene.createNode("ROUTE");
ROUTE1092.fromField = "value_changed";
ROUTE1092.fromNode = "Kick_l_ForeArm_PitchInterpolator";
ROUTE1092.toField = "set_rotation";
ROUTE1092.toNode = "boxman_l_elbow";
browser.currentScene.children[461] = ROUTE1092;

let ROUTE1093 = browser.currentScene.createNode("ROUTE");
ROUTE1093.fromField = "value_changed";
ROUTE1093.fromNode = "Kick_l_wrist_RollInterpolator";
ROUTE1093.toField = "set_rotation";
ROUTE1093.toNode = "boxman_l_wrist";
browser.currentScene.children[462] = ROUTE1093;

let ROUTE1094 = browser.currentScene.createNode("ROUTE");
ROUTE1094.fromField = "value_changed";
ROUTE1094.fromNode = "Kick_r_shoulder_RollInterpolator";
ROUTE1094.toField = "set_rotation";
ROUTE1094.toNode = "boxman_r_shoulder";
browser.currentScene.children[463] = ROUTE1094;

let ROUTE1095 = browser.currentScene.createNode("ROUTE");
ROUTE1095.fromField = "value_changed";
ROUTE1095.fromNode = "Kick_r_ForeArm_PitchInterpolator";
ROUTE1095.toField = "set_rotation";
ROUTE1095.toNode = "boxman_r_elbow";
browser.currentScene.children[464] = ROUTE1095;

let ROUTE1096 = browser.currentScene.createNode("ROUTE");
ROUTE1096.fromField = "value_changed";
ROUTE1096.fromNode = "Kick_r_wrist_RollInterpolator";
ROUTE1096.toField = "set_rotation";
ROUTE1096.toNode = "boxman_r_wrist";
browser.currentScene.children[465] = ROUTE1096;

let ROUTE1097 = browser.currentScene.createNode("ROUTE");
ROUTE1097.fromField = "value_changed";
ROUTE1097.fromNode = "Kick_r_hip_PitchInterpolator";
ROUTE1097.toField = "set_rotation";
ROUTE1097.toNode = "boxman_r_hip";
browser.currentScene.children[466] = ROUTE1097;

let ROUTE1098 = browser.currentScene.createNode("ROUTE");
ROUTE1098.fromField = "value_changed";
ROUTE1098.fromNode = "Kick_r_knee_PitchInterpolator";
ROUTE1098.toField = "set_rotation";
ROUTE1098.toNode = "boxman_r_knee";
browser.currentScene.children[467] = ROUTE1098;

let ROUTE1099 = browser.currentScene.createNode("ROUTE");
ROUTE1099.fromField = "value_changed";
ROUTE1099.fromNode = "Kick_r_ankle_PitchInterpolator";
ROUTE1099.toField = "set_rotation";
ROUTE1099.toNode = "boxman_r_ankle";
browser.currentScene.children[468] = ROUTE1099;

let ROUTE1100 = browser.currentScene.createNode("ROUTE");
ROUTE1100.fromField = "value_changed";
ROUTE1100.fromNode = "Kick_l_hip_PitchInterpolator";
ROUTE1100.toField = "set_rotation";
ROUTE1100.toNode = "boxman_l_hip";
browser.currentScene.children[469] = ROUTE1100;

let ROUTE1101 = browser.currentScene.createNode("ROUTE");
ROUTE1101.fromField = "value_changed";
ROUTE1101.fromNode = "Kick_l_knee_PitchInterpolator";
ROUTE1101.toField = "set_rotation";
ROUTE1101.toNode = "boxman_l_knee";
browser.currentScene.children[470] = ROUTE1101;

let ROUTE1102 = browser.currentScene.createNode("ROUTE");
ROUTE1102.fromField = "value_changed";
ROUTE1102.fromNode = "Kick_r_ankle_PitchInterpolator";
ROUTE1102.toField = "set_rotation";
ROUTE1102.toNode = "boxman_l_ankle";
browser.currentScene.children[471] = ROUTE1102;

let ROUTE1103 = browser.currentScene.createNode("ROUTE");
ROUTE1103.fromField = "value_changed";
ROUTE1103.fromNode = "Kick_vl5_YawInterpolator";
ROUTE1103.toField = "set_rotation";
ROUTE1103.toNode = "boxman_vl5";
browser.currentScene.children[472] = ROUTE1103;

let ROUTE1104 = browser.currentScene.createNode("ROUTE");
ROUTE1104.fromField = "value_changed";
ROUTE1104.fromNode = "Kick_whole_body_RotationInterpolator";
ROUTE1104.toField = "set_rotation";
ROUTE1104.toNode = "boxman_humanoid_root";
browser.currentScene.children[473] = ROUTE1104;

let ROUTE1105 = browser.currentScene.createNode("ROUTE");
ROUTE1105.fromField = "value_changed";
ROUTE1105.fromNode = "Kick_whole_body_TranslationInterpolator";
ROUTE1105.toField = "set_translation";
ROUTE1105.toNode = "boxman_humanoid_root";
browser.currentScene.children[474] = ROUTE1105;

let ROUTE1106 = browser.currentScene.createNode("ROUTE");
ROUTE1106.fromField = "position_changed";
ROUTE1106.fromNode = "HudProx";
ROUTE1106.toField = "set_translation";
ROUTE1106.toNode = "HudXform";
browser.currentScene.children[475] = ROUTE1106;

let ROUTE1107 = browser.currentScene.createNode("ROUTE");
ROUTE1107.fromField = "orientation_changed";
ROUTE1107.fromNode = "HudProx";
ROUTE1107.toField = "set_rotation";
ROUTE1107.toNode = "HudXform";
browser.currentScene.children[476] = ROUTE1107;

let ROUTE1108 = browser.currentScene.createNode("ROUTE");
ROUTE1108.fromField = "touchTime";
ROUTE1108.fromNode = "Stand_Touch";
ROUTE1108.toField = "set_stopTime";
ROUTE1108.toNode = "PitchTimer";
browser.currentScene.children[477] = ROUTE1108;

let ROUTE1109 = browser.currentScene.createNode("ROUTE");
ROUTE1109.fromField = "touchTime";
ROUTE1109.fromNode = "Stand_Touch";
ROUTE1109.toField = "set_stopTime";
ROUTE1109.toNode = "YawTimer";
browser.currentScene.children[478] = ROUTE1109;

let ROUTE1110 = browser.currentScene.createNode("ROUTE");
ROUTE1110.fromField = "touchTime";
ROUTE1110.fromNode = "Stand_Touch";
ROUTE1110.toField = "set_stopTime";
ROUTE1110.toNode = "RollTimer";
browser.currentScene.children[479] = ROUTE1110;

let ROUTE1111 = browser.currentScene.createNode("ROUTE");
ROUTE1111.fromField = "touchTime";
ROUTE1111.fromNode = "Stand_Touch";
ROUTE1111.toField = "set_stopTime";
ROUTE1111.toNode = "WalkTimer";
browser.currentScene.children[480] = ROUTE1111;

let ROUTE1112 = browser.currentScene.createNode("ROUTE");
ROUTE1112.fromField = "touchTime";
ROUTE1112.fromNode = "Stand_Touch";
ROUTE1112.toField = "set_stopTime";
ROUTE1112.toNode = "RunTimer";
browser.currentScene.children[481] = ROUTE1112;

let ROUTE1113 = browser.currentScene.createNode("ROUTE");
ROUTE1113.fromField = "touchTime";
ROUTE1113.fromNode = "Stand_Touch";
ROUTE1113.toField = "set_stopTime";
ROUTE1113.toNode = "JumpTimer";
browser.currentScene.children[482] = ROUTE1113;

let ROUTE1114 = browser.currentScene.createNode("ROUTE");
ROUTE1114.fromField = "touchTime";
ROUTE1114.fromNode = "Stand_Touch";
ROUTE1114.toField = "set_stopTime";
ROUTE1114.toNode = "KickTimer";
browser.currentScene.children[483] = ROUTE1114;

let ROUTE1115 = browser.currentScene.createNode("ROUTE");
ROUTE1115.fromField = "touchTime";
ROUTE1115.fromNode = "Stand_Touch";
ROUTE1115.toField = "set_stopTime";
ROUTE1115.toNode = "StopTimer";
browser.currentScene.children[484] = ROUTE1115;

let ROUTE1116 = browser.currentScene.createNode("ROUTE");
ROUTE1116.fromField = "touchTime";
ROUTE1116.fromNode = "Stand_Touch";
ROUTE1116.toField = "set_startTime";
ROUTE1116.toNode = "StandTimer";
browser.currentScene.children[485] = ROUTE1116;

let ROUTE1117 = browser.currentScene.createNode("ROUTE");
ROUTE1117.fromField = "touchTime";
ROUTE1117.fromNode = "Pitch_Touch";
ROUTE1117.toField = "set_stopTime";
ROUTE1117.toNode = "StandTimer";
browser.currentScene.children[486] = ROUTE1117;

let ROUTE1118 = browser.currentScene.createNode("ROUTE");
ROUTE1118.fromField = "touchTime";
ROUTE1118.fromNode = "Pitch_Touch";
ROUTE1118.toField = "set_stopTime";
ROUTE1118.toNode = "YawTimer";
browser.currentScene.children[487] = ROUTE1118;

let ROUTE1119 = browser.currentScene.createNode("ROUTE");
ROUTE1119.fromField = "touchTime";
ROUTE1119.fromNode = "Pitch_Touch";
ROUTE1119.toField = "set_stopTime";
ROUTE1119.toNode = "RollTimer";
browser.currentScene.children[488] = ROUTE1119;

let ROUTE1120 = browser.currentScene.createNode("ROUTE");
ROUTE1120.fromField = "touchTime";
ROUTE1120.fromNode = "Pitch_Touch";
ROUTE1120.toField = "set_stopTime";
ROUTE1120.toNode = "WalkTimer";
browser.currentScene.children[489] = ROUTE1120;

let ROUTE1121 = browser.currentScene.createNode("ROUTE");
ROUTE1121.fromField = "touchTime";
ROUTE1121.fromNode = "Pitch_Touch";
ROUTE1121.toField = "set_stopTime";
ROUTE1121.toNode = "RunTimer";
browser.currentScene.children[490] = ROUTE1121;

let ROUTE1122 = browser.currentScene.createNode("ROUTE");
ROUTE1122.fromField = "touchTime";
ROUTE1122.fromNode = "Pitch_Touch";
ROUTE1122.toField = "set_stopTime";
ROUTE1122.toNode = "JumpTimer";
browser.currentScene.children[491] = ROUTE1122;

let ROUTE1123 = browser.currentScene.createNode("ROUTE");
ROUTE1123.fromField = "touchTime";
ROUTE1123.fromNode = "Pitch_Touch";
ROUTE1123.toField = "set_stopTime";
ROUTE1123.toNode = "KickTimer";
browser.currentScene.children[492] = ROUTE1123;

let ROUTE1124 = browser.currentScene.createNode("ROUTE");
ROUTE1124.fromField = "touchTime";
ROUTE1124.fromNode = "Pitch_Touch";
ROUTE1124.toField = "set_stopTime";
ROUTE1124.toNode = "StopTimer";
browser.currentScene.children[493] = ROUTE1124;

let ROUTE1125 = browser.currentScene.createNode("ROUTE");
ROUTE1125.fromField = "touchTime";
ROUTE1125.fromNode = "Pitch_Touch";
ROUTE1125.toField = "set_startTime";
ROUTE1125.toNode = "PitchTimer";
browser.currentScene.children[494] = ROUTE1125;

let ROUTE1126 = browser.currentScene.createNode("ROUTE");
ROUTE1126.fromField = "touchTime";
ROUTE1126.fromNode = "Yaw_Touch";
ROUTE1126.toField = "set_stopTime";
ROUTE1126.toNode = "StandTimer";
browser.currentScene.children[495] = ROUTE1126;

let ROUTE1127 = browser.currentScene.createNode("ROUTE");
ROUTE1127.fromField = "touchTime";
ROUTE1127.fromNode = "Yaw_Touch";
ROUTE1127.toField = "set_stopTime";
ROUTE1127.toNode = "PitchTimer";
browser.currentScene.children[496] = ROUTE1127;

let ROUTE1128 = browser.currentScene.createNode("ROUTE");
ROUTE1128.fromField = "touchTime";
ROUTE1128.fromNode = "Yaw_Touch";
ROUTE1128.toField = "set_stopTime";
ROUTE1128.toNode = "RollTimer";
browser.currentScene.children[497] = ROUTE1128;

let ROUTE1129 = browser.currentScene.createNode("ROUTE");
ROUTE1129.fromField = "touchTime";
ROUTE1129.fromNode = "Yaw_Touch";
ROUTE1129.toField = "set_stopTime";
ROUTE1129.toNode = "WalkTimer";
browser.currentScene.children[498] = ROUTE1129;

let ROUTE1130 = browser.currentScene.createNode("ROUTE");
ROUTE1130.fromField = "touchTime";
ROUTE1130.fromNode = "Yaw_Touch";
ROUTE1130.toField = "set_stopTime";
ROUTE1130.toNode = "RunTimer";
browser.currentScene.children[499] = ROUTE1130;

let ROUTE1131 = browser.currentScene.createNode("ROUTE");
ROUTE1131.fromField = "touchTime";
ROUTE1131.fromNode = "Yaw_Touch";
ROUTE1131.toField = "set_stopTime";
ROUTE1131.toNode = "JumpTimer";
browser.currentScene.children[500] = ROUTE1131;

let ROUTE1132 = browser.currentScene.createNode("ROUTE");
ROUTE1132.fromField = "touchTime";
ROUTE1132.fromNode = "Yaw_Touch";
ROUTE1132.toField = "set_stopTime";
ROUTE1132.toNode = "KickTimer";
browser.currentScene.children[501] = ROUTE1132;

let ROUTE1133 = browser.currentScene.createNode("ROUTE");
ROUTE1133.fromField = "touchTime";
ROUTE1133.fromNode = "Yaw_Touch";
ROUTE1133.toField = "set_stopTime";
ROUTE1133.toNode = "StopTimer";
browser.currentScene.children[502] = ROUTE1133;

let ROUTE1134 = browser.currentScene.createNode("ROUTE");
ROUTE1134.fromField = "touchTime";
ROUTE1134.fromNode = "Yaw_Touch";
ROUTE1134.toField = "set_startTime";
ROUTE1134.toNode = "YawTimer";
browser.currentScene.children[503] = ROUTE1134;

let ROUTE1135 = browser.currentScene.createNode("ROUTE");
ROUTE1135.fromField = "touchTime";
ROUTE1135.fromNode = "Walk_Touch";
ROUTE1135.toField = "set_stopTime";
ROUTE1135.toNode = "StandTimer";
browser.currentScene.children[504] = ROUTE1135;

let ROUTE1136 = browser.currentScene.createNode("ROUTE");
ROUTE1136.fromField = "touchTime";
ROUTE1136.fromNode = "Walk_Touch";
ROUTE1136.toField = "set_stopTime";
ROUTE1136.toNode = "PitchTimer";
browser.currentScene.children[505] = ROUTE1136;

let ROUTE1137 = browser.currentScene.createNode("ROUTE");
ROUTE1137.fromField = "touchTime";
ROUTE1137.fromNode = "Walk_Touch";
ROUTE1137.toField = "set_stopTime";
ROUTE1137.toNode = "YawTimer";
browser.currentScene.children[506] = ROUTE1137;

let ROUTE1138 = browser.currentScene.createNode("ROUTE");
ROUTE1138.fromField = "touchTime";
ROUTE1138.fromNode = "Walk_Touch";
ROUTE1138.toField = "set_stopTime";
ROUTE1138.toNode = "RollTimer";
browser.currentScene.children[507] = ROUTE1138;

let ROUTE1139 = browser.currentScene.createNode("ROUTE");
ROUTE1139.fromField = "touchTime";
ROUTE1139.fromNode = "Walk_Touch";
ROUTE1139.toField = "set_stopTime";
ROUTE1139.toNode = "RunTimer";
browser.currentScene.children[508] = ROUTE1139;

let ROUTE1140 = browser.currentScene.createNode("ROUTE");
ROUTE1140.fromField = "touchTime";
ROUTE1140.fromNode = "Walk_Touch";
ROUTE1140.toField = "set_stopTime";
ROUTE1140.toNode = "JumpTimer";
browser.currentScene.children[509] = ROUTE1140;

let ROUTE1141 = browser.currentScene.createNode("ROUTE");
ROUTE1141.fromField = "touchTime";
ROUTE1141.fromNode = "Walk_Touch";
ROUTE1141.toField = "set_stopTime";
ROUTE1141.toNode = "KickTimer";
browser.currentScene.children[510] = ROUTE1141;

let ROUTE1142 = browser.currentScene.createNode("ROUTE");
ROUTE1142.fromField = "touchTime";
ROUTE1142.fromNode = "Walk_Touch";
ROUTE1142.toField = "set_stopTime";
ROUTE1142.toNode = "StopTimer";
browser.currentScene.children[511] = ROUTE1142;

let ROUTE1143 = browser.currentScene.createNode("ROUTE");
ROUTE1143.fromField = "touchTime";
ROUTE1143.fromNode = "Walk_Touch";
ROUTE1143.toField = "set_startTime";
ROUTE1143.toNode = "WalkTimer";
browser.currentScene.children[512] = ROUTE1143;

let ROUTE1144 = browser.currentScene.createNode("ROUTE");
ROUTE1144.fromField = "touchTime";
ROUTE1144.fromNode = "Roll_Touch";
ROUTE1144.toField = "set_stopTime";
ROUTE1144.toNode = "StandTimer";
browser.currentScene.children[513] = ROUTE1144;

let ROUTE1145 = browser.currentScene.createNode("ROUTE");
ROUTE1145.fromField = "touchTime";
ROUTE1145.fromNode = "Roll_Touch";
ROUTE1145.toField = "set_stopTime";
ROUTE1145.toNode = "PitchTimer";
browser.currentScene.children[514] = ROUTE1145;

let ROUTE1146 = browser.currentScene.createNode("ROUTE");
ROUTE1146.fromField = "touchTime";
ROUTE1146.fromNode = "Roll_Touch";
ROUTE1146.toField = "set_stopTime";
ROUTE1146.toNode = "YawTimer";
browser.currentScene.children[515] = ROUTE1146;

let ROUTE1147 = browser.currentScene.createNode("ROUTE");
ROUTE1147.fromField = "touchTime";
ROUTE1147.fromNode = "Roll_Touch";
ROUTE1147.toField = "set_stopTime";
ROUTE1147.toNode = "WalkTimer";
browser.currentScene.children[516] = ROUTE1147;

let ROUTE1148 = browser.currentScene.createNode("ROUTE");
ROUTE1148.fromField = "touchTime";
ROUTE1148.fromNode = "Roll_Touch";
ROUTE1148.toField = "set_stopTime";
ROUTE1148.toNode = "RunTimer";
browser.currentScene.children[517] = ROUTE1148;

let ROUTE1149 = browser.currentScene.createNode("ROUTE");
ROUTE1149.fromField = "touchTime";
ROUTE1149.fromNode = "Roll_Touch";
ROUTE1149.toField = "set_stopTime";
ROUTE1149.toNode = "JumpTimer";
browser.currentScene.children[518] = ROUTE1149;

let ROUTE1150 = browser.currentScene.createNode("ROUTE");
ROUTE1150.fromField = "touchTime";
ROUTE1150.fromNode = "Roll_Touch";
ROUTE1150.toField = "set_stopTime";
ROUTE1150.toNode = "KickTimer";
browser.currentScene.children[519] = ROUTE1150;

let ROUTE1151 = browser.currentScene.createNode("ROUTE");
ROUTE1151.fromField = "touchTime";
ROUTE1151.fromNode = "Roll_Touch";
ROUTE1151.toField = "set_stopTime";
ROUTE1151.toNode = "StopTimer";
browser.currentScene.children[520] = ROUTE1151;

let ROUTE1152 = browser.currentScene.createNode("ROUTE");
ROUTE1152.fromField = "touchTime";
ROUTE1152.fromNode = "Roll_Touch";
ROUTE1152.toField = "set_startTime";
ROUTE1152.toNode = "RollTimer";
browser.currentScene.children[521] = ROUTE1152;

let ROUTE1153 = browser.currentScene.createNode("ROUTE");
ROUTE1153.fromField = "touchTime";
ROUTE1153.fromNode = "Run_Touch";
ROUTE1153.toField = "set_stopTime";
ROUTE1153.toNode = "StandTimer";
browser.currentScene.children[522] = ROUTE1153;

let ROUTE1154 = browser.currentScene.createNode("ROUTE");
ROUTE1154.fromField = "touchTime";
ROUTE1154.fromNode = "Run_Touch";
ROUTE1154.toField = "set_stopTime";
ROUTE1154.toNode = "PitchTimer";
browser.currentScene.children[523] = ROUTE1154;

let ROUTE1155 = browser.currentScene.createNode("ROUTE");
ROUTE1155.fromField = "touchTime";
ROUTE1155.fromNode = "Run_Touch";
ROUTE1155.toField = "set_stopTime";
ROUTE1155.toNode = "YawTimer";
browser.currentScene.children[524] = ROUTE1155;

let ROUTE1156 = browser.currentScene.createNode("ROUTE");
ROUTE1156.fromField = "touchTime";
ROUTE1156.fromNode = "Run_Touch";
ROUTE1156.toField = "set_stopTime";
ROUTE1156.toNode = "RollTimer";
browser.currentScene.children[525] = ROUTE1156;

let ROUTE1157 = browser.currentScene.createNode("ROUTE");
ROUTE1157.fromField = "touchTime";
ROUTE1157.fromNode = "Run_Touch";
ROUTE1157.toField = "set_stopTime";
ROUTE1157.toNode = "WalkTimer";
browser.currentScene.children[526] = ROUTE1157;

let ROUTE1158 = browser.currentScene.createNode("ROUTE");
ROUTE1158.fromField = "touchTime";
ROUTE1158.fromNode = "Run_Touch";
ROUTE1158.toField = "set_stopTime";
ROUTE1158.toNode = "JumpTimer";
browser.currentScene.children[527] = ROUTE1158;

let ROUTE1159 = browser.currentScene.createNode("ROUTE");
ROUTE1159.fromField = "touchTime";
ROUTE1159.fromNode = "Run_Touch";
ROUTE1159.toField = "set_stopTime";
ROUTE1159.toNode = "KickTimer";
browser.currentScene.children[528] = ROUTE1159;

let ROUTE1160 = browser.currentScene.createNode("ROUTE");
ROUTE1160.fromField = "touchTime";
ROUTE1160.fromNode = "Run_Touch";
ROUTE1160.toField = "set_stopTime";
ROUTE1160.toNode = "StopTimer";
browser.currentScene.children[529] = ROUTE1160;

let ROUTE1161 = browser.currentScene.createNode("ROUTE");
ROUTE1161.fromField = "touchTime";
ROUTE1161.fromNode = "Run_Touch";
ROUTE1161.toField = "set_startTime";
ROUTE1161.toNode = "RunTimer";
browser.currentScene.children[530] = ROUTE1161;

let ROUTE1162 = browser.currentScene.createNode("ROUTE");
ROUTE1162.fromField = "touchTime";
ROUTE1162.fromNode = "Jump_Touch";
ROUTE1162.toField = "set_stopTime";
ROUTE1162.toNode = "StandTimer";
browser.currentScene.children[531] = ROUTE1162;

let ROUTE1163 = browser.currentScene.createNode("ROUTE");
ROUTE1163.fromField = "touchTime";
ROUTE1163.fromNode = "Jump_Touch";
ROUTE1163.toField = "set_stopTime";
ROUTE1163.toNode = "PitchTimer";
browser.currentScene.children[532] = ROUTE1163;

let ROUTE1164 = browser.currentScene.createNode("ROUTE");
ROUTE1164.fromField = "touchTime";
ROUTE1164.fromNode = "Jump_Touch";
ROUTE1164.toField = "set_stopTime";
ROUTE1164.toNode = "YawTimer";
browser.currentScene.children[533] = ROUTE1164;

let ROUTE1165 = browser.currentScene.createNode("ROUTE");
ROUTE1165.fromField = "touchTime";
ROUTE1165.fromNode = "Jump_Touch";
ROUTE1165.toField = "set_stopTime";
ROUTE1165.toNode = "RollTimer";
browser.currentScene.children[534] = ROUTE1165;

let ROUTE1166 = browser.currentScene.createNode("ROUTE");
ROUTE1166.fromField = "touchTime";
ROUTE1166.fromNode = "Jump_Touch";
ROUTE1166.toField = "set_stopTime";
ROUTE1166.toNode = "WalkTimer";
browser.currentScene.children[535] = ROUTE1166;

let ROUTE1167 = browser.currentScene.createNode("ROUTE");
ROUTE1167.fromField = "touchTime";
ROUTE1167.fromNode = "Jump_Touch";
ROUTE1167.toField = "set_stopTime";
ROUTE1167.toNode = "RunTimer";
browser.currentScene.children[536] = ROUTE1167;

let ROUTE1168 = browser.currentScene.createNode("ROUTE");
ROUTE1168.fromField = "touchTime";
ROUTE1168.fromNode = "Jump_Touch";
ROUTE1168.toField = "set_stopTime";
ROUTE1168.toNode = "KickTimer";
browser.currentScene.children[537] = ROUTE1168;

let ROUTE1169 = browser.currentScene.createNode("ROUTE");
ROUTE1169.fromField = "touchTime";
ROUTE1169.fromNode = "Jump_Touch";
ROUTE1169.toField = "set_stopTime";
ROUTE1169.toNode = "StopTimer";
browser.currentScene.children[538] = ROUTE1169;

let ROUTE1170 = browser.currentScene.createNode("ROUTE");
ROUTE1170.fromField = "touchTime";
ROUTE1170.fromNode = "Jump_Touch";
ROUTE1170.toField = "set_startTime";
ROUTE1170.toNode = "JumpTimer";
browser.currentScene.children[539] = ROUTE1170;

let ROUTE1171 = browser.currentScene.createNode("ROUTE");
ROUTE1171.fromField = "touchTime";
ROUTE1171.fromNode = "Kick_Touch";
ROUTE1171.toField = "set_stopTime";
ROUTE1171.toNode = "StandTimer";
browser.currentScene.children[540] = ROUTE1171;

let ROUTE1172 = browser.currentScene.createNode("ROUTE");
ROUTE1172.fromField = "touchTime";
ROUTE1172.fromNode = "Kick_Touch";
ROUTE1172.toField = "set_stopTime";
ROUTE1172.toNode = "PitchTimer";
browser.currentScene.children[541] = ROUTE1172;

let ROUTE1173 = browser.currentScene.createNode("ROUTE");
ROUTE1173.fromField = "touchTime";
ROUTE1173.fromNode = "Kick_Touch";
ROUTE1173.toField = "set_stopTime";
ROUTE1173.toNode = "YawTimer";
browser.currentScene.children[542] = ROUTE1173;

let ROUTE1174 = browser.currentScene.createNode("ROUTE");
ROUTE1174.fromField = "touchTime";
ROUTE1174.fromNode = "Kick_Touch";
ROUTE1174.toField = "set_stopTime";
ROUTE1174.toNode = "RollTimer";
browser.currentScene.children[543] = ROUTE1174;

let ROUTE1175 = browser.currentScene.createNode("ROUTE");
ROUTE1175.fromField = "touchTime";
ROUTE1175.fromNode = "Kick_Touch";
ROUTE1175.toField = "set_stopTime";
ROUTE1175.toNode = "WalkTimer";
browser.currentScene.children[544] = ROUTE1175;

let ROUTE1176 = browser.currentScene.createNode("ROUTE");
ROUTE1176.fromField = "touchTime";
ROUTE1176.fromNode = "Kick_Touch";
ROUTE1176.toField = "set_stopTime";
ROUTE1176.toNode = "RunTimer";
browser.currentScene.children[545] = ROUTE1176;

let ROUTE1177 = browser.currentScene.createNode("ROUTE");
ROUTE1177.fromField = "touchTime";
ROUTE1177.fromNode = "Kick_Touch";
ROUTE1177.toField = "set_stopTime";
ROUTE1177.toNode = "JumpTimer";
browser.currentScene.children[546] = ROUTE1177;

let ROUTE1178 = browser.currentScene.createNode("ROUTE");
ROUTE1178.fromField = "touchTime";
ROUTE1178.fromNode = "Kick_Touch";
ROUTE1178.toField = "set_stopTime";
ROUTE1178.toNode = "StopTimer";
browser.currentScene.children[547] = ROUTE1178;

let ROUTE1179 = browser.currentScene.createNode("ROUTE");
ROUTE1179.fromField = "touchTime";
ROUTE1179.fromNode = "Kick_Touch";
ROUTE1179.toField = "set_startTime";
ROUTE1179.toNode = "KickTimer";
browser.currentScene.children[548] = ROUTE1179;

let ROUTE1180 = browser.currentScene.createNode("ROUTE");
ROUTE1180.fromField = "touchTime";
ROUTE1180.fromNode = "Stop_Touch";
ROUTE1180.toField = "set_stopTime";
ROUTE1180.toNode = "StandTimer";
browser.currentScene.children[549] = ROUTE1180;

let ROUTE1181 = browser.currentScene.createNode("ROUTE");
ROUTE1181.fromField = "touchTime";
ROUTE1181.fromNode = "Stop_Touch";
ROUTE1181.toField = "set_stopTime";
ROUTE1181.toNode = "PitchTimer";
browser.currentScene.children[550] = ROUTE1181;

let ROUTE1182 = browser.currentScene.createNode("ROUTE");
ROUTE1182.fromField = "touchTime";
ROUTE1182.fromNode = "Stop_Touch";
ROUTE1182.toField = "set_stopTime";
ROUTE1182.toNode = "YawTimer";
browser.currentScene.children[551] = ROUTE1182;

let ROUTE1183 = browser.currentScene.createNode("ROUTE");
ROUTE1183.fromField = "touchTime";
ROUTE1183.fromNode = "Stop_Touch";
ROUTE1183.toField = "set_stopTime";
ROUTE1183.toNode = "RollTimer";
browser.currentScene.children[552] = ROUTE1183;

let ROUTE1184 = browser.currentScene.createNode("ROUTE");
ROUTE1184.fromField = "touchTime";
ROUTE1184.fromNode = "Stop_Touch";
ROUTE1184.toField = "set_stopTime";
ROUTE1184.toNode = "WalkTimer";
browser.currentScene.children[553] = ROUTE1184;

let ROUTE1185 = browser.currentScene.createNode("ROUTE");
ROUTE1185.fromField = "touchTime";
ROUTE1185.fromNode = "Stop_Touch";
ROUTE1185.toField = "set_stopTime";
ROUTE1185.toNode = "RunTimer";
browser.currentScene.children[554] = ROUTE1185;

let ROUTE1186 = browser.currentScene.createNode("ROUTE");
ROUTE1186.fromField = "touchTime";
ROUTE1186.fromNode = "Stop_Touch";
ROUTE1186.toField = "set_stopTime";
ROUTE1186.toNode = "JumpTimer";
browser.currentScene.children[555] = ROUTE1186;

let ROUTE1187 = browser.currentScene.createNode("ROUTE");
ROUTE1187.fromField = "touchTime";
ROUTE1187.fromNode = "Stop_Touch";
ROUTE1187.toField = "set_stopTime";
ROUTE1187.toNode = "KickTimer";
browser.currentScene.children[556] = ROUTE1187;

let ROUTE1188 = browser.currentScene.createNode("ROUTE");
ROUTE1188.fromField = "touchTime";
ROUTE1188.fromNode = "Stop_Touch";
ROUTE1188.toField = "set_startTime";
ROUTE1188.toNode = "StopTimer";
browser.currentScene.children[557] = ROUTE1188;


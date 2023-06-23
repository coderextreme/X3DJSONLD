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
meta3.content = "KoreanCharacterAnnexB01Jin.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Jin Hoon Lee and Min Joo Lee";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "translator";
meta5.content = "Chul Hee Jung and Myeong Won Lee";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "created";
meta6.content = "31 March 2011";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "translated";
meta7.content = "1 November 2014";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "modified";
meta8.content = "8 January 2023";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "description";
meta9.content = "Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model.";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "reference";
meta10.content = "KoreanCharacter00ReadMe.txt";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "reference";
meta11.content = "KoreanCharacterHumanMotion_Infotech2014_140706.pdf";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "reference";
meta12.content = "KoreanCharactersIllustrated.pdf";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "specificationSection";
meta13.content = "HAnim 2.0 Part 2: Humanoid animation (HAnim) motion data animation, Annex D (informative) Examples of HAnim motion data animation using a Motion object";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "specificationUrl";
meta14.content = "https://www.web3d.org/documents/specifications/19774/V2.0/MotionDataAnimation/ExampleKeyframeAnimation.html";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "identifier";
meta15.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/KoreanCharacterAnnexB01Jin.x3d";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "generator";
meta16.content = "3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "generator";
meta17.content = "Suwon HAnim Converter";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "generator";
meta18.content = "Gnu Image Manipulation Program, http://www.gimp.org";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "generator";
meta19.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[17] = meta19;

let meta20 = browser.currentScene.createNode("meta");
meta20.name = "license";
meta20.content = "../license.html";
head1.meta[18] = meta20;

head = head1;

let NavigationInfo22 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo22.speed = 1.5;
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo22;

let Viewpoint23 = browser.currentScene.createNode("Viewpoint");
Viewpoint23.centerOfRotation = new SFVec3f(new float[0,1,0]);
Viewpoint23.description = "AnnexB01Jin";
Viewpoint23.position = new SFVec3f(new float[0,1,3]);
browser.currentScene.children[1] = Viewpoint23;

let Group24 = browser.currentScene.createNode("Group");
Group24.DEF = "KeyframeAnimation";
let TimeSensor25 = browser.currentScene.createNode("TimeSensor");
TimeSensor25.DEF = "KeyframeTimer";
TimeSensor25.cycleInterval = 8.033494;
TimeSensor25.loop = True;
Group24.children = new MFNode();

Group24.children[0] = TimeSensor25;

let PositionInterpolator26 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator26.DEF = "Keyframe_HumanoidRoot";
PositionInterpolator26.key = new MFFloat(new float[0,1]);
PositionInterpolator26.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
Group24.children[1] = PositionInterpolator26;

let OrientationInterpolator27 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator27.DEF = "Keyframe_HumanoidRoot";
OrientationInterpolator27.key = new MFFloat(new float[0,1]);
OrientationInterpolator27.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[2] = OrientationInterpolator27;

let OrientationInterpolator28 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator28.DEF = "Keyframe_sacroiliac";
OrientationInterpolator28.key = new MFFloat(new float[0,1]);
OrientationInterpolator28.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[3] = OrientationInterpolator28;

let OrientationInterpolator29 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator29.DEF = "Keyframe_l_shoulder";
OrientationInterpolator29.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator29.keyValue = new MFRotation(new float[0,0,0,0,-1,0,0,3,0,0,0,0]);
Group24.children[4] = OrientationInterpolator29;

let OrientationInterpolator30 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator30.DEF = "Keyframe_l_elbow";
OrientationInterpolator30.key = new MFFloat(new float[0,1]);
OrientationInterpolator30.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[5] = OrientationInterpolator30;

let OrientationInterpolator31 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator31.DEF = "Keyframe_l_radiocarpal";
OrientationInterpolator31.key = new MFFloat(new float[0,1]);
OrientationInterpolator31.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[6] = OrientationInterpolator31;

let OrientationInterpolator32 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator32.DEF = "Keyframe_r_shoulder";
OrientationInterpolator32.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator32.keyValue = new MFRotation(new float[0,0,0,0,-1,0,0,3,0,0,0,0]);
Group24.children[7] = OrientationInterpolator32;

let OrientationInterpolator33 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator33.DEF = "Keyframe_r_elbow";
OrientationInterpolator33.key = new MFFloat(new float[0,1]);
OrientationInterpolator33.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[8] = OrientationInterpolator33;

let OrientationInterpolator34 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator34.DEF = "Keyframe_r_radiocarpal";
OrientationInterpolator34.key = new MFFloat(new float[0,1]);
OrientationInterpolator34.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[9] = OrientationInterpolator34;

let OrientationInterpolator35 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator35.DEF = "Keyframe_vl5";
OrientationInterpolator35.key = new MFFloat(new float[0,1]);
OrientationInterpolator35.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[10] = OrientationInterpolator35;

let OrientationInterpolator36 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator36.DEF = "Keyframe_skullbase";
OrientationInterpolator36.key = new MFFloat(new float[0,1]);
OrientationInterpolator36.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[11] = OrientationInterpolator36;

let OrientationInterpolator37 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator37.DEF = "Keyframe_l_hip";
OrientationInterpolator37.key = new MFFloat(new float[0,1]);
OrientationInterpolator37.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[12] = OrientationInterpolator37;

let OrientationInterpolator38 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator38.DEF = "Keyframe_l_knee";
OrientationInterpolator38.key = new MFFloat(new float[0,1]);
OrientationInterpolator38.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[13] = OrientationInterpolator38;

let OrientationInterpolator39 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator39.DEF = "Keyframe_l_talocrural";
OrientationInterpolator39.key = new MFFloat(new float[0,1]);
OrientationInterpolator39.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[14] = OrientationInterpolator39;

let OrientationInterpolator40 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator40.DEF = "Keyframe_l_metatarsophalangeal";
OrientationInterpolator40.key = new MFFloat(new float[0,1]);
OrientationInterpolator40.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[15] = OrientationInterpolator40;

let OrientationInterpolator41 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator41.DEF = "Keyframe_r_hip";
OrientationInterpolator41.key = new MFFloat(new float[0,1]);
OrientationInterpolator41.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[16] = OrientationInterpolator41;

let OrientationInterpolator42 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator42.DEF = "Keyframe_r_knee";
OrientationInterpolator42.key = new MFFloat(new float[0,1]);
OrientationInterpolator42.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[17] = OrientationInterpolator42;

let OrientationInterpolator43 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator43.DEF = "Keyframe_r_talocrural";
OrientationInterpolator43.key = new MFFloat(new float[0,1]);
OrientationInterpolator43.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[18] = OrientationInterpolator43;

let OrientationInterpolator44 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator44.DEF = "Keyframe_r_metatarsophalangeal";
OrientationInterpolator44.key = new MFFloat(new float[0,1]);
OrientationInterpolator44.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[19] = OrientationInterpolator44;

let ROUTE45 = browser.currentScene.createNode("ROUTE");
ROUTE45.fromField = "fraction_changed";
ROUTE45.fromNode = "KeyframeTimer";
ROUTE45.toField = "set_fraction";
ROUTE45.toNode = "Keyframe_HumanoidRoot";
Group24.children[20] = ROUTE45;

let ROUTE46 = browser.currentScene.createNode("ROUTE");
ROUTE46.fromField = "fraction_changed";
ROUTE46.fromNode = "KeyframeTimer";
ROUTE46.toField = "set_fraction";
ROUTE46.toNode = "Keyframe_HumanoidRoot";
Group24.children[21] = ROUTE46;

let ROUTE47 = browser.currentScene.createNode("ROUTE");
ROUTE47.fromField = "fraction_changed";
ROUTE47.fromNode = "KeyframeTimer";
ROUTE47.toField = "set_fraction";
ROUTE47.toNode = "Keyframe_sacroiliac";
Group24.children[22] = ROUTE47;

let ROUTE48 = browser.currentScene.createNode("ROUTE");
ROUTE48.fromField = "fraction_changed";
ROUTE48.fromNode = "KeyframeTimer";
ROUTE48.toField = "set_fraction";
ROUTE48.toNode = "Keyframe_l_shoulder";
Group24.children[23] = ROUTE48;

let ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromField = "fraction_changed";
ROUTE49.fromNode = "KeyframeTimer";
ROUTE49.toField = "set_fraction";
ROUTE49.toNode = "Keyframe_l_elbow";
Group24.children[24] = ROUTE49;

let ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromField = "fraction_changed";
ROUTE50.fromNode = "KeyframeTimer";
ROUTE50.toField = "set_fraction";
ROUTE50.toNode = "Keyframe_l_radiocarpal";
Group24.children[25] = ROUTE50;

let ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromField = "fraction_changed";
ROUTE51.fromNode = "KeyframeTimer";
ROUTE51.toField = "set_fraction";
ROUTE51.toNode = "Keyframe_r_shoulder";
Group24.children[26] = ROUTE51;

let ROUTE52 = browser.currentScene.createNode("ROUTE");
ROUTE52.fromField = "fraction_changed";
ROUTE52.fromNode = "KeyframeTimer";
ROUTE52.toField = "set_fraction";
ROUTE52.toNode = "Keyframe_r_elbow";
Group24.children[27] = ROUTE52;

let ROUTE53 = browser.currentScene.createNode("ROUTE");
ROUTE53.fromField = "fraction_changed";
ROUTE53.fromNode = "KeyframeTimer";
ROUTE53.toField = "set_fraction";
ROUTE53.toNode = "Keyframe_r_radiocarpal";
Group24.children[28] = ROUTE53;

let ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromField = "fraction_changed";
ROUTE54.fromNode = "KeyframeTimer";
ROUTE54.toField = "set_fraction";
ROUTE54.toNode = "Keyframe_vl5";
Group24.children[29] = ROUTE54;

let ROUTE55 = browser.currentScene.createNode("ROUTE");
ROUTE55.fromField = "fraction_changed";
ROUTE55.fromNode = "KeyframeTimer";
ROUTE55.toField = "set_fraction";
ROUTE55.toNode = "Keyframe_skullbase";
Group24.children[30] = ROUTE55;

let ROUTE56 = browser.currentScene.createNode("ROUTE");
ROUTE56.fromField = "fraction_changed";
ROUTE56.fromNode = "KeyframeTimer";
ROUTE56.toField = "set_fraction";
ROUTE56.toNode = "Keyframe_l_hip";
Group24.children[31] = ROUTE56;

let ROUTE57 = browser.currentScene.createNode("ROUTE");
ROUTE57.fromField = "fraction_changed";
ROUTE57.fromNode = "KeyframeTimer";
ROUTE57.toField = "set_fraction";
ROUTE57.toNode = "Keyframe_l_knee";
Group24.children[32] = ROUTE57;

let ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromField = "fraction_changed";
ROUTE58.fromNode = "KeyframeTimer";
ROUTE58.toField = "set_fraction";
ROUTE58.toNode = "Keyframe_l_talocrural";
Group24.children[33] = ROUTE58;

let ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromField = "fraction_changed";
ROUTE59.fromNode = "KeyframeTimer";
ROUTE59.toField = "set_fraction";
ROUTE59.toNode = "Keyframe_l_metatarsophalangeal";
Group24.children[34] = ROUTE59;

let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromField = "fraction_changed";
ROUTE60.fromNode = "KeyframeTimer";
ROUTE60.toField = "set_fraction";
ROUTE60.toNode = "Keyframe_r_hip";
Group24.children[35] = ROUTE60;

let ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromField = "fraction_changed";
ROUTE61.fromNode = "KeyframeTimer";
ROUTE61.toField = "set_fraction";
ROUTE61.toNode = "Keyframe_r_knee";
Group24.children[36] = ROUTE61;

let ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromField = "fraction_changed";
ROUTE62.fromNode = "KeyframeTimer";
ROUTE62.toField = "set_fraction";
ROUTE62.toNode = "Keyframe_r_talocrural";
Group24.children[37] = ROUTE62;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromField = "fraction_changed";
ROUTE63.fromNode = "KeyframeTimer";
ROUTE63.toField = "set_fraction";
ROUTE63.toNode = "Keyframe_r_metatarsophalangeal";
Group24.children[38] = ROUTE63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromField = "value_changed";
ROUTE64.fromNode = "Keyframe_HumanoidRoot";
ROUTE64.toField = "translation";
ROUTE64.toNode = "hanim_HumanoidRoot";
Group24.children[39] = ROUTE64;

let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromField = "value_changed";
ROUTE65.fromNode = "Keyframe_HumanoidRoot";
ROUTE65.toField = "rotation";
ROUTE65.toNode = "hanim_HumanoidRoot";
Group24.children[40] = ROUTE65;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromField = "value_changed";
ROUTE66.fromNode = "Keyframe_sacroiliac";
ROUTE66.toField = "rotation";
ROUTE66.toNode = "hanim_sacroiliac";
Group24.children[41] = ROUTE66;

let ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromField = "value_changed";
ROUTE67.fromNode = "Keyframe_l_shoulder";
ROUTE67.toField = "rotation";
ROUTE67.toNode = "hanim_l_shoulder";
Group24.children[42] = ROUTE67;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromField = "value_changed";
ROUTE68.fromNode = "Keyframe_l_elbow";
ROUTE68.toField = "rotation";
ROUTE68.toNode = "hanim_l_elbow";
Group24.children[43] = ROUTE68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromField = "value_changed";
ROUTE69.fromNode = "Keyframe_l_radiocarpal";
ROUTE69.toField = "rotation";
ROUTE69.toNode = "hanim_l_radiocarpal";
Group24.children[44] = ROUTE69;

let ROUTE70 = browser.currentScene.createNode("ROUTE");
ROUTE70.fromField = "value_changed";
ROUTE70.fromNode = "Keyframe_r_shoulder";
ROUTE70.toField = "rotation";
ROUTE70.toNode = "hanim_r_shoulder";
Group24.children[45] = ROUTE70;

let ROUTE71 = browser.currentScene.createNode("ROUTE");
ROUTE71.fromField = "value_changed";
ROUTE71.fromNode = "Keyframe_r_elbow";
ROUTE71.toField = "rotation";
ROUTE71.toNode = "hanim_r_elbow";
Group24.children[46] = ROUTE71;

let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromField = "value_changed";
ROUTE72.fromNode = "Keyframe_r_radiocarpal";
ROUTE72.toField = "rotation";
ROUTE72.toNode = "hanim_r_radiocarpal";
Group24.children[47] = ROUTE72;

let ROUTE73 = browser.currentScene.createNode("ROUTE");
ROUTE73.fromField = "value_changed";
ROUTE73.fromNode = "Keyframe_vl5";
ROUTE73.toField = "rotation";
ROUTE73.toNode = "hanim_vl5";
Group24.children[48] = ROUTE73;

let ROUTE74 = browser.currentScene.createNode("ROUTE");
ROUTE74.fromField = "value_changed";
ROUTE74.fromNode = "Keyframe_skullbase";
ROUTE74.toField = "rotation";
ROUTE74.toNode = "hanim_skullbase";
Group24.children[49] = ROUTE74;

let ROUTE75 = browser.currentScene.createNode("ROUTE");
ROUTE75.fromField = "value_changed";
ROUTE75.fromNode = "Keyframe_l_hip";
ROUTE75.toField = "rotation";
ROUTE75.toNode = "hanim_l_hip";
Group24.children[50] = ROUTE75;

let ROUTE76 = browser.currentScene.createNode("ROUTE");
ROUTE76.fromField = "value_changed";
ROUTE76.fromNode = "Keyframe_l_knee";
ROUTE76.toField = "rotation";
ROUTE76.toNode = "hanim_l_knee";
Group24.children[51] = ROUTE76;

let ROUTE77 = browser.currentScene.createNode("ROUTE");
ROUTE77.fromField = "value_changed";
ROUTE77.fromNode = "Keyframe_l_talocrural";
ROUTE77.toField = "rotation";
ROUTE77.toNode = "hanim_l_talocrural";
Group24.children[52] = ROUTE77;

let ROUTE78 = browser.currentScene.createNode("ROUTE");
ROUTE78.fromField = "value_changed";
ROUTE78.fromNode = "Keyframe_l_talocrural";
ROUTE78.toField = "rotation";
ROUTE78.toNode = "hanim_l_metatarsophalangeal";
Group24.children[53] = ROUTE78;

let ROUTE79 = browser.currentScene.createNode("ROUTE");
ROUTE79.fromField = "value_changed";
ROUTE79.fromNode = "Keyframe_r_hip";
ROUTE79.toField = "rotation";
ROUTE79.toNode = "hanim_r_hip";
Group24.children[54] = ROUTE79;

let ROUTE80 = browser.currentScene.createNode("ROUTE");
ROUTE80.fromField = "value_changed";
ROUTE80.fromNode = "Keyframe_r_knee";
ROUTE80.toField = "rotation";
ROUTE80.toNode = "hanim_r_knee";
Group24.children[55] = ROUTE80;

let ROUTE81 = browser.currentScene.createNode("ROUTE");
ROUTE81.fromField = "value_changed";
ROUTE81.fromNode = "Keyframe_l_talocrural";
ROUTE81.toField = "rotation";
ROUTE81.toNode = "hanim_r_talocrural";
Group24.children[56] = ROUTE81;

let ROUTE82 = browser.currentScene.createNode("ROUTE");
ROUTE82.fromField = "value_changed";
ROUTE82.fromNode = "Keyframe_l_talocrural";
ROUTE82.toField = "rotation";
ROUTE82.toNode = "hanim_r_metatarsophalangeal";
Group24.children[57] = ROUTE82;

browser.currentScene.children[2] = Group24;


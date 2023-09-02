#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "HAnim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "KoreanCharacterMotionAnnexB01Jin.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Jin Hoon Lee and Min Joo Lee";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "translator";
meta5.content = "Chul Hee Jung and Myeong Won Lee";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "created";
meta6.content = "31 March 2011";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "translated";
meta7.content = "1 November 2014";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "modified";
meta8.content = "8 January 2023";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "description";
meta9.content = "Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model.";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "KoreanCharacter00ReadMe.txt";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "KoreanCharacterHumanMotion_Infotech2014_140706.pdf";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "KoreanCharactersIllustrated.pdf";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "specificationSection";
meta13.content = "HAnim 2.0 Part 2: Humanoid animation (HAnim) motion data animation, Annex D (informative) Examples of HAnim motion data animation using a Motion object";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "specificationUrl";
meta14.content = "https://www.web3d.org/documents/specifications/19774/V2.0/MotionDataAnimation/ExampleKeyframeAnimation.html";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "identifier";
meta15.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/KoreanCharacterAnnexB01Jin.x3d";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "generator";
meta16.content = "3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "generator";
meta17.content = "Suwon HAnim Converter";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "generator";
meta18.content = "Gnu Image Manipulation Program, http://www.gimp.org";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "generator";
meta19.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "license";
meta20.content = "../license.html";
head1.meta[18] = meta20;

head = head1;

NavigationInfo NavigationInfo22 = createNode("NavigationInfo");
NavigationInfo22.speed = 1.5;
children = new MFNode();

children[0] = NavigationInfo22;

Viewpoint Viewpoint23 = createNode("Viewpoint");
Viewpoint23.centerOfRotation = new SFVec3f(new float[0,1,0]);
Viewpoint23.description = "AnnexB01Jin";
Viewpoint23.position = new SFVec3f(new float[0,1,3]);
children[1] = Viewpoint23;

Group Group24 = createNode("Group");
Group24.DEF = "KeyframeAnimation";
TimeSensor TimeSensor25 = createNode("TimeSensor");
TimeSensor25.DEF = "KeyframeTimer";
TimeSensor25.cycleInterval = 8.033494;
TimeSensor25.loop = True;
Group24.children = new MFNode();

Group24.children[0] = TimeSensor25;

PositionInterpolator PositionInterpolator26 = createNode("PositionInterpolator");
PositionInterpolator26.DEF = "Keyframe_HumanoidRoot";
PositionInterpolator26.key = new MFFloat(new float[0,1]);
PositionInterpolator26.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
Group24.children[1] = PositionInterpolator26;

OrientationInterpolator OrientationInterpolator27 = createNode("OrientationInterpolator");
OrientationInterpolator27.DEF = "Keyframe_HumanoidRoot";
OrientationInterpolator27.key = new MFFloat(new float[0,1]);
OrientationInterpolator27.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[2] = OrientationInterpolator27;

OrientationInterpolator OrientationInterpolator28 = createNode("OrientationInterpolator");
OrientationInterpolator28.DEF = "Keyframe_sacroiliac";
OrientationInterpolator28.key = new MFFloat(new float[0,1]);
OrientationInterpolator28.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[3] = OrientationInterpolator28;

OrientationInterpolator OrientationInterpolator29 = createNode("OrientationInterpolator");
OrientationInterpolator29.DEF = "Keyframe_l_shoulder";
OrientationInterpolator29.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator29.keyValue = new MFRotation(new float[0,0,0,0,-1,0,0,3,0,0,0,0]);
Group24.children[4] = OrientationInterpolator29;

OrientationInterpolator OrientationInterpolator30 = createNode("OrientationInterpolator");
OrientationInterpolator30.DEF = "Keyframe_l_elbow";
OrientationInterpolator30.key = new MFFloat(new float[0,1]);
OrientationInterpolator30.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[5] = OrientationInterpolator30;

OrientationInterpolator OrientationInterpolator31 = createNode("OrientationInterpolator");
OrientationInterpolator31.DEF = "Keyframe_l_radiocarpal";
OrientationInterpolator31.key = new MFFloat(new float[0,1]);
OrientationInterpolator31.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[6] = OrientationInterpolator31;

OrientationInterpolator OrientationInterpolator32 = createNode("OrientationInterpolator");
OrientationInterpolator32.DEF = "Keyframe_r_shoulder";
OrientationInterpolator32.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator32.keyValue = new MFRotation(new float[0,0,0,0,-1,0,0,3,0,0,0,0]);
Group24.children[7] = OrientationInterpolator32;

OrientationInterpolator OrientationInterpolator33 = createNode("OrientationInterpolator");
OrientationInterpolator33.DEF = "Keyframe_r_elbow";
OrientationInterpolator33.key = new MFFloat(new float[0,1]);
OrientationInterpolator33.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[8] = OrientationInterpolator33;

OrientationInterpolator OrientationInterpolator34 = createNode("OrientationInterpolator");
OrientationInterpolator34.DEF = "Keyframe_r_radiocarpal";
OrientationInterpolator34.key = new MFFloat(new float[0,1]);
OrientationInterpolator34.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[9] = OrientationInterpolator34;

OrientationInterpolator OrientationInterpolator35 = createNode("OrientationInterpolator");
OrientationInterpolator35.DEF = "Keyframe_vl5";
OrientationInterpolator35.key = new MFFloat(new float[0,1]);
OrientationInterpolator35.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[10] = OrientationInterpolator35;

OrientationInterpolator OrientationInterpolator36 = createNode("OrientationInterpolator");
OrientationInterpolator36.DEF = "Keyframe_skullbase";
OrientationInterpolator36.key = new MFFloat(new float[0,1]);
OrientationInterpolator36.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[11] = OrientationInterpolator36;

OrientationInterpolator OrientationInterpolator37 = createNode("OrientationInterpolator");
OrientationInterpolator37.DEF = "Keyframe_l_hip";
OrientationInterpolator37.key = new MFFloat(new float[0,1]);
OrientationInterpolator37.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[12] = OrientationInterpolator37;

OrientationInterpolator OrientationInterpolator38 = createNode("OrientationInterpolator");
OrientationInterpolator38.DEF = "Keyframe_l_knee";
OrientationInterpolator38.key = new MFFloat(new float[0,1]);
OrientationInterpolator38.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[13] = OrientationInterpolator38;

OrientationInterpolator OrientationInterpolator39 = createNode("OrientationInterpolator");
OrientationInterpolator39.DEF = "Keyframe_l_talocrural";
OrientationInterpolator39.key = new MFFloat(new float[0,1]);
OrientationInterpolator39.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[14] = OrientationInterpolator39;

OrientationInterpolator OrientationInterpolator40 = createNode("OrientationInterpolator");
OrientationInterpolator40.DEF = "Keyframe_l_metatarsophalangeal";
OrientationInterpolator40.key = new MFFloat(new float[0,1]);
OrientationInterpolator40.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[15] = OrientationInterpolator40;

OrientationInterpolator OrientationInterpolator41 = createNode("OrientationInterpolator");
OrientationInterpolator41.DEF = "Keyframe_r_hip";
OrientationInterpolator41.key = new MFFloat(new float[0,1]);
OrientationInterpolator41.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[16] = OrientationInterpolator41;

OrientationInterpolator OrientationInterpolator42 = createNode("OrientationInterpolator");
OrientationInterpolator42.DEF = "Keyframe_r_knee";
OrientationInterpolator42.key = new MFFloat(new float[0,1]);
OrientationInterpolator42.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[17] = OrientationInterpolator42;

OrientationInterpolator OrientationInterpolator43 = createNode("OrientationInterpolator");
OrientationInterpolator43.DEF = "Keyframe_r_talocrural";
OrientationInterpolator43.key = new MFFloat(new float[0,1]);
OrientationInterpolator43.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[18] = OrientationInterpolator43;

OrientationInterpolator OrientationInterpolator44 = createNode("OrientationInterpolator");
OrientationInterpolator44.DEF = "Keyframe_r_metatarsophalangeal";
OrientationInterpolator44.key = new MFFloat(new float[0,1]);
OrientationInterpolator44.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group24.children[19] = OrientationInterpolator44;

ROUTE ROUTE45 = createNode("ROUTE");
ROUTE45.fromField = "fraction_changed";
ROUTE45.fromNode = "KeyframeTimer";
ROUTE45.toField = "set_fraction";
ROUTE45.toNode = "Keyframe_HumanoidRoot";
Group24.children[20] = ROUTE45;

ROUTE ROUTE46 = createNode("ROUTE");
ROUTE46.fromField = "fraction_changed";
ROUTE46.fromNode = "KeyframeTimer";
ROUTE46.toField = "set_fraction";
ROUTE46.toNode = "Keyframe_HumanoidRoot";
Group24.children[21] = ROUTE46;

ROUTE ROUTE47 = createNode("ROUTE");
ROUTE47.fromField = "fraction_changed";
ROUTE47.fromNode = "KeyframeTimer";
ROUTE47.toField = "set_fraction";
ROUTE47.toNode = "Keyframe_sacroiliac";
Group24.children[22] = ROUTE47;

ROUTE ROUTE48 = createNode("ROUTE");
ROUTE48.fromField = "fraction_changed";
ROUTE48.fromNode = "KeyframeTimer";
ROUTE48.toField = "set_fraction";
ROUTE48.toNode = "Keyframe_l_shoulder";
Group24.children[23] = ROUTE48;

ROUTE ROUTE49 = createNode("ROUTE");
ROUTE49.fromField = "fraction_changed";
ROUTE49.fromNode = "KeyframeTimer";
ROUTE49.toField = "set_fraction";
ROUTE49.toNode = "Keyframe_l_elbow";
Group24.children[24] = ROUTE49;

ROUTE ROUTE50 = createNode("ROUTE");
ROUTE50.fromField = "fraction_changed";
ROUTE50.fromNode = "KeyframeTimer";
ROUTE50.toField = "set_fraction";
ROUTE50.toNode = "Keyframe_l_radiocarpal";
Group24.children[25] = ROUTE50;

ROUTE ROUTE51 = createNode("ROUTE");
ROUTE51.fromField = "fraction_changed";
ROUTE51.fromNode = "KeyframeTimer";
ROUTE51.toField = "set_fraction";
ROUTE51.toNode = "Keyframe_r_shoulder";
Group24.children[26] = ROUTE51;

ROUTE ROUTE52 = createNode("ROUTE");
ROUTE52.fromField = "fraction_changed";
ROUTE52.fromNode = "KeyframeTimer";
ROUTE52.toField = "set_fraction";
ROUTE52.toNode = "Keyframe_r_elbow";
Group24.children[27] = ROUTE52;

ROUTE ROUTE53 = createNode("ROUTE");
ROUTE53.fromField = "fraction_changed";
ROUTE53.fromNode = "KeyframeTimer";
ROUTE53.toField = "set_fraction";
ROUTE53.toNode = "Keyframe_r_radiocarpal";
Group24.children[28] = ROUTE53;

ROUTE ROUTE54 = createNode("ROUTE");
ROUTE54.fromField = "fraction_changed";
ROUTE54.fromNode = "KeyframeTimer";
ROUTE54.toField = "set_fraction";
ROUTE54.toNode = "Keyframe_vl5";
Group24.children[29] = ROUTE54;

ROUTE ROUTE55 = createNode("ROUTE");
ROUTE55.fromField = "fraction_changed";
ROUTE55.fromNode = "KeyframeTimer";
ROUTE55.toField = "set_fraction";
ROUTE55.toNode = "Keyframe_skullbase";
Group24.children[30] = ROUTE55;

ROUTE ROUTE56 = createNode("ROUTE");
ROUTE56.fromField = "fraction_changed";
ROUTE56.fromNode = "KeyframeTimer";
ROUTE56.toField = "set_fraction";
ROUTE56.toNode = "Keyframe_l_hip";
Group24.children[31] = ROUTE56;

ROUTE ROUTE57 = createNode("ROUTE");
ROUTE57.fromField = "fraction_changed";
ROUTE57.fromNode = "KeyframeTimer";
ROUTE57.toField = "set_fraction";
ROUTE57.toNode = "Keyframe_l_knee";
Group24.children[32] = ROUTE57;

ROUTE ROUTE58 = createNode("ROUTE");
ROUTE58.fromField = "fraction_changed";
ROUTE58.fromNode = "KeyframeTimer";
ROUTE58.toField = "set_fraction";
ROUTE58.toNode = "Keyframe_l_talocrural";
Group24.children[33] = ROUTE58;

ROUTE ROUTE59 = createNode("ROUTE");
ROUTE59.fromField = "fraction_changed";
ROUTE59.fromNode = "KeyframeTimer";
ROUTE59.toField = "set_fraction";
ROUTE59.toNode = "Keyframe_l_metatarsophalangeal";
Group24.children[34] = ROUTE59;

ROUTE ROUTE60 = createNode("ROUTE");
ROUTE60.fromField = "fraction_changed";
ROUTE60.fromNode = "KeyframeTimer";
ROUTE60.toField = "set_fraction";
ROUTE60.toNode = "Keyframe_r_hip";
Group24.children[35] = ROUTE60;

ROUTE ROUTE61 = createNode("ROUTE");
ROUTE61.fromField = "fraction_changed";
ROUTE61.fromNode = "KeyframeTimer";
ROUTE61.toField = "set_fraction";
ROUTE61.toNode = "Keyframe_r_knee";
Group24.children[36] = ROUTE61;

ROUTE ROUTE62 = createNode("ROUTE");
ROUTE62.fromField = "fraction_changed";
ROUTE62.fromNode = "KeyframeTimer";
ROUTE62.toField = "set_fraction";
ROUTE62.toNode = "Keyframe_r_talocrural";
Group24.children[37] = ROUTE62;

ROUTE ROUTE63 = createNode("ROUTE");
ROUTE63.fromField = "fraction_changed";
ROUTE63.fromNode = "KeyframeTimer";
ROUTE63.toField = "set_fraction";
ROUTE63.toNode = "Keyframe_r_metatarsophalangeal";
Group24.children[38] = ROUTE63;

ROUTE ROUTE64 = createNode("ROUTE");
ROUTE64.fromField = "value_changed";
ROUTE64.fromNode = "Keyframe_HumanoidRoot";
ROUTE64.toField = "translation";
ROUTE64.toNode = "hanim_HumanoidRoot";
Group24.children[39] = ROUTE64;

ROUTE ROUTE65 = createNode("ROUTE");
ROUTE65.fromField = "value_changed";
ROUTE65.fromNode = "Keyframe_HumanoidRoot";
ROUTE65.toField = "rotation";
ROUTE65.toNode = "hanim_HumanoidRoot";
Group24.children[40] = ROUTE65;

ROUTE ROUTE66 = createNode("ROUTE");
ROUTE66.fromField = "value_changed";
ROUTE66.fromNode = "Keyframe_sacroiliac";
ROUTE66.toField = "rotation";
ROUTE66.toNode = "hanim_sacroiliac";
Group24.children[41] = ROUTE66;

ROUTE ROUTE67 = createNode("ROUTE");
ROUTE67.fromField = "value_changed";
ROUTE67.fromNode = "Keyframe_l_shoulder";
ROUTE67.toField = "rotation";
ROUTE67.toNode = "hanim_l_shoulder";
Group24.children[42] = ROUTE67;

ROUTE ROUTE68 = createNode("ROUTE");
ROUTE68.fromField = "value_changed";
ROUTE68.fromNode = "Keyframe_l_elbow";
ROUTE68.toField = "rotation";
ROUTE68.toNode = "hanim_l_elbow";
Group24.children[43] = ROUTE68;

ROUTE ROUTE69 = createNode("ROUTE");
ROUTE69.fromField = "value_changed";
ROUTE69.fromNode = "Keyframe_l_radiocarpal";
ROUTE69.toField = "rotation";
ROUTE69.toNode = "hanim_l_radiocarpal";
Group24.children[44] = ROUTE69;

ROUTE ROUTE70 = createNode("ROUTE");
ROUTE70.fromField = "value_changed";
ROUTE70.fromNode = "Keyframe_r_shoulder";
ROUTE70.toField = "rotation";
ROUTE70.toNode = "hanim_r_shoulder";
Group24.children[45] = ROUTE70;

ROUTE ROUTE71 = createNode("ROUTE");
ROUTE71.fromField = "value_changed";
ROUTE71.fromNode = "Keyframe_r_elbow";
ROUTE71.toField = "rotation";
ROUTE71.toNode = "hanim_r_elbow";
Group24.children[46] = ROUTE71;

ROUTE ROUTE72 = createNode("ROUTE");
ROUTE72.fromField = "value_changed";
ROUTE72.fromNode = "Keyframe_r_radiocarpal";
ROUTE72.toField = "rotation";
ROUTE72.toNode = "hanim_r_radiocarpal";
Group24.children[47] = ROUTE72;

ROUTE ROUTE73 = createNode("ROUTE");
ROUTE73.fromField = "value_changed";
ROUTE73.fromNode = "Keyframe_vl5";
ROUTE73.toField = "rotation";
ROUTE73.toNode = "hanim_vl5";
Group24.children[48] = ROUTE73;

ROUTE ROUTE74 = createNode("ROUTE");
ROUTE74.fromField = "value_changed";
ROUTE74.fromNode = "Keyframe_skullbase";
ROUTE74.toField = "rotation";
ROUTE74.toNode = "hanim_skullbase";
Group24.children[49] = ROUTE74;

ROUTE ROUTE75 = createNode("ROUTE");
ROUTE75.fromField = "value_changed";
ROUTE75.fromNode = "Keyframe_l_hip";
ROUTE75.toField = "rotation";
ROUTE75.toNode = "hanim_l_hip";
Group24.children[50] = ROUTE75;

ROUTE ROUTE76 = createNode("ROUTE");
ROUTE76.fromField = "value_changed";
ROUTE76.fromNode = "Keyframe_l_knee";
ROUTE76.toField = "rotation";
ROUTE76.toNode = "hanim_l_knee";
Group24.children[51] = ROUTE76;

ROUTE ROUTE77 = createNode("ROUTE");
ROUTE77.fromField = "value_changed";
ROUTE77.fromNode = "Keyframe_l_talocrural";
ROUTE77.toField = "rotation";
ROUTE77.toNode = "hanim_l_talocrural";
Group24.children[52] = ROUTE77;

ROUTE ROUTE78 = createNode("ROUTE");
ROUTE78.fromField = "value_changed";
ROUTE78.fromNode = "Keyframe_l_talocrural";
ROUTE78.toField = "rotation";
ROUTE78.toNode = "hanim_l_metatarsophalangeal";
Group24.children[53] = ROUTE78;

ROUTE ROUTE79 = createNode("ROUTE");
ROUTE79.fromField = "value_changed";
ROUTE79.fromNode = "Keyframe_r_hip";
ROUTE79.toField = "rotation";
ROUTE79.toNode = "hanim_r_hip";
Group24.children[54] = ROUTE79;

ROUTE ROUTE80 = createNode("ROUTE");
ROUTE80.fromField = "value_changed";
ROUTE80.fromNode = "Keyframe_r_knee";
ROUTE80.toField = "rotation";
ROUTE80.toNode = "hanim_r_knee";
Group24.children[55] = ROUTE80;

ROUTE ROUTE81 = createNode("ROUTE");
ROUTE81.fromField = "value_changed";
ROUTE81.fromNode = "Keyframe_l_talocrural";
ROUTE81.toField = "rotation";
ROUTE81.toNode = "hanim_r_talocrural";
Group24.children[56] = ROUTE81;

ROUTE ROUTE82 = createNode("ROUTE");
ROUTE82.fromField = "value_changed";
ROUTE82.fromNode = "Keyframe_l_talocrural";
ROUTE82.toField = "rotation";
ROUTE82.toNode = "hanim_r_metatarsophalangeal";
Group24.children[57] = ROUTE82;

children[2] = Group24;

}

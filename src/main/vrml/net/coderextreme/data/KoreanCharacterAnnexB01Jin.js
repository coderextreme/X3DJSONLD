let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo2.speed = 1.5;
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.centerOfRotation = new SFVec3f(new float[0,1,0]);
Viewpoint3.description = "AnnexB01Jin";
Viewpoint3.position = new SFVec3f(new float[0,1,3]);
browser.currentScene.children[1] = Viewpoint3;

let Group4 = browser.currentScene.createNode("Group");
Group4.DEF = "KeyframeAnimation";
let TimeSensor5 = browser.currentScene.createNode("TimeSensor");
TimeSensor5.DEF = "KeyframeTimer";
TimeSensor5.cycleInterval = 8.033494;
TimeSensor5.loop = True;
Group4.children = new MFNode();

Group4.children[0] = TimeSensor5;

let PositionInterpolator6 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator6.DEF = "Keyframe_HumanoidRoot";
PositionInterpolator6.key = new MFFloat(new float[0,1]);
PositionInterpolator6.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
Group4.children[1] = PositionInterpolator6;

let OrientationInterpolator7 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator7.DEF = "Keyframe_HumanoidRoot";
OrientationInterpolator7.key = new MFFloat(new float[0,1]);
OrientationInterpolator7.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group4.children[2] = OrientationInterpolator7;

let OrientationInterpolator8 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator8.DEF = "Keyframe_sacroiliac";
OrientationInterpolator8.key = new MFFloat(new float[0,1]);
OrientationInterpolator8.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group4.children[3] = OrientationInterpolator8;

let OrientationInterpolator9 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator9.DEF = "Keyframe_l_shoulder";
OrientationInterpolator9.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator9.keyValue = new MFRotation(new float[0,0,0,0,-1,0,0,3,0,0,0,0]);
Group4.children[4] = OrientationInterpolator9;

let OrientationInterpolator10 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator10.DEF = "Keyframe_l_elbow";
OrientationInterpolator10.key = new MFFloat(new float[0,1]);
OrientationInterpolator10.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group4.children[5] = OrientationInterpolator10;

let OrientationInterpolator11 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator11.DEF = "Keyframe_l_radiocarpal";
OrientationInterpolator11.key = new MFFloat(new float[0,1]);
OrientationInterpolator11.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group4.children[6] = OrientationInterpolator11;

let OrientationInterpolator12 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator12.DEF = "Keyframe_r_shoulder";
OrientationInterpolator12.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator12.keyValue = new MFRotation(new float[0,0,0,0,-1,0,0,3,0,0,0,0]);
Group4.children[7] = OrientationInterpolator12;

let OrientationInterpolator13 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator13.DEF = "Keyframe_r_elbow";
OrientationInterpolator13.key = new MFFloat(new float[0,1]);
OrientationInterpolator13.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group4.children[8] = OrientationInterpolator13;

let OrientationInterpolator14 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator14.DEF = "Keyframe_r_radiocarpal";
OrientationInterpolator14.key = new MFFloat(new float[0,1]);
OrientationInterpolator14.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group4.children[9] = OrientationInterpolator14;

let OrientationInterpolator15 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator15.DEF = "Keyframe_vl5";
OrientationInterpolator15.key = new MFFloat(new float[0,1]);
OrientationInterpolator15.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group4.children[10] = OrientationInterpolator15;

let OrientationInterpolator16 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator16.DEF = "Keyframe_skullbase";
OrientationInterpolator16.key = new MFFloat(new float[0,1]);
OrientationInterpolator16.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group4.children[11] = OrientationInterpolator16;

let OrientationInterpolator17 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator17.DEF = "Keyframe_l_hip";
OrientationInterpolator17.key = new MFFloat(new float[0,1]);
OrientationInterpolator17.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group4.children[12] = OrientationInterpolator17;

let OrientationInterpolator18 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator18.DEF = "Keyframe_l_knee";
OrientationInterpolator18.key = new MFFloat(new float[0,1]);
OrientationInterpolator18.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group4.children[13] = OrientationInterpolator18;

let OrientationInterpolator19 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator19.DEF = "Keyframe_l_talocrural";
OrientationInterpolator19.key = new MFFloat(new float[0,1]);
OrientationInterpolator19.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group4.children[14] = OrientationInterpolator19;

let OrientationInterpolator20 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator20.DEF = "Keyframe_l_metatarsophalangeal";
OrientationInterpolator20.key = new MFFloat(new float[0,1]);
OrientationInterpolator20.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group4.children[15] = OrientationInterpolator20;

let OrientationInterpolator21 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator21.DEF = "Keyframe_r_hip";
OrientationInterpolator21.key = new MFFloat(new float[0,1]);
OrientationInterpolator21.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group4.children[16] = OrientationInterpolator21;

let OrientationInterpolator22 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator22.DEF = "Keyframe_r_knee";
OrientationInterpolator22.key = new MFFloat(new float[0,1]);
OrientationInterpolator22.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group4.children[17] = OrientationInterpolator22;

let OrientationInterpolator23 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator23.DEF = "Keyframe_r_talocrural";
OrientationInterpolator23.key = new MFFloat(new float[0,1]);
OrientationInterpolator23.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group4.children[18] = OrientationInterpolator23;

let OrientationInterpolator24 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator24.DEF = "Keyframe_r_metatarsophalangeal";
OrientationInterpolator24.key = new MFFloat(new float[0,1]);
OrientationInterpolator24.keyValue = new MFRotation(new float[0,0,0,0,0,0,0,0]);
Group4.children[19] = OrientationInterpolator24;

let ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromField = "fraction_changed";
ROUTE25.fromNode = "KeyframeTimer";
ROUTE25.toField = "set_fraction";
ROUTE25.toNode = "Keyframe_HumanoidRoot";
Group4.children[20] = ROUTE25;

let ROUTE26 = browser.currentScene.createNode("ROUTE");
ROUTE26.fromField = "fraction_changed";
ROUTE26.fromNode = "KeyframeTimer";
ROUTE26.toField = "set_fraction";
ROUTE26.toNode = "Keyframe_HumanoidRoot";
Group4.children[21] = ROUTE26;

let ROUTE27 = browser.currentScene.createNode("ROUTE");
ROUTE27.fromField = "fraction_changed";
ROUTE27.fromNode = "KeyframeTimer";
ROUTE27.toField = "set_fraction";
ROUTE27.toNode = "Keyframe_sacroiliac";
Group4.children[22] = ROUTE27;

let ROUTE28 = browser.currentScene.createNode("ROUTE");
ROUTE28.fromField = "fraction_changed";
ROUTE28.fromNode = "KeyframeTimer";
ROUTE28.toField = "set_fraction";
ROUTE28.toNode = "Keyframe_l_shoulder";
Group4.children[23] = ROUTE28;

let ROUTE29 = browser.currentScene.createNode("ROUTE");
ROUTE29.fromField = "fraction_changed";
ROUTE29.fromNode = "KeyframeTimer";
ROUTE29.toField = "set_fraction";
ROUTE29.toNode = "Keyframe_l_elbow";
Group4.children[24] = ROUTE29;

let ROUTE30 = browser.currentScene.createNode("ROUTE");
ROUTE30.fromField = "fraction_changed";
ROUTE30.fromNode = "KeyframeTimer";
ROUTE30.toField = "set_fraction";
ROUTE30.toNode = "Keyframe_l_radiocarpal";
Group4.children[25] = ROUTE30;

let ROUTE31 = browser.currentScene.createNode("ROUTE");
ROUTE31.fromField = "fraction_changed";
ROUTE31.fromNode = "KeyframeTimer";
ROUTE31.toField = "set_fraction";
ROUTE31.toNode = "Keyframe_r_shoulder";
Group4.children[26] = ROUTE31;

let ROUTE32 = browser.currentScene.createNode("ROUTE");
ROUTE32.fromField = "fraction_changed";
ROUTE32.fromNode = "KeyframeTimer";
ROUTE32.toField = "set_fraction";
ROUTE32.toNode = "Keyframe_r_elbow";
Group4.children[27] = ROUTE32;

let ROUTE33 = browser.currentScene.createNode("ROUTE");
ROUTE33.fromField = "fraction_changed";
ROUTE33.fromNode = "KeyframeTimer";
ROUTE33.toField = "set_fraction";
ROUTE33.toNode = "Keyframe_r_radiocarpal";
Group4.children[28] = ROUTE33;

let ROUTE34 = browser.currentScene.createNode("ROUTE");
ROUTE34.fromField = "fraction_changed";
ROUTE34.fromNode = "KeyframeTimer";
ROUTE34.toField = "set_fraction";
ROUTE34.toNode = "Keyframe_vl5";
Group4.children[29] = ROUTE34;

let ROUTE35 = browser.currentScene.createNode("ROUTE");
ROUTE35.fromField = "fraction_changed";
ROUTE35.fromNode = "KeyframeTimer";
ROUTE35.toField = "set_fraction";
ROUTE35.toNode = "Keyframe_skullbase";
Group4.children[30] = ROUTE35;

let ROUTE36 = browser.currentScene.createNode("ROUTE");
ROUTE36.fromField = "fraction_changed";
ROUTE36.fromNode = "KeyframeTimer";
ROUTE36.toField = "set_fraction";
ROUTE36.toNode = "Keyframe_l_hip";
Group4.children[31] = ROUTE36;

let ROUTE37 = browser.currentScene.createNode("ROUTE");
ROUTE37.fromField = "fraction_changed";
ROUTE37.fromNode = "KeyframeTimer";
ROUTE37.toField = "set_fraction";
ROUTE37.toNode = "Keyframe_l_knee";
Group4.children[32] = ROUTE37;

let ROUTE38 = browser.currentScene.createNode("ROUTE");
ROUTE38.fromField = "fraction_changed";
ROUTE38.fromNode = "KeyframeTimer";
ROUTE38.toField = "set_fraction";
ROUTE38.toNode = "Keyframe_l_talocrural";
Group4.children[33] = ROUTE38;

let ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromField = "fraction_changed";
ROUTE39.fromNode = "KeyframeTimer";
ROUTE39.toField = "set_fraction";
ROUTE39.toNode = "Keyframe_l_metatarsophalangeal";
Group4.children[34] = ROUTE39;

let ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromField = "fraction_changed";
ROUTE40.fromNode = "KeyframeTimer";
ROUTE40.toField = "set_fraction";
ROUTE40.toNode = "Keyframe_r_hip";
Group4.children[35] = ROUTE40;

let ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromField = "fraction_changed";
ROUTE41.fromNode = "KeyframeTimer";
ROUTE41.toField = "set_fraction";
ROUTE41.toNode = "Keyframe_r_knee";
Group4.children[36] = ROUTE41;

let ROUTE42 = browser.currentScene.createNode("ROUTE");
ROUTE42.fromField = "fraction_changed";
ROUTE42.fromNode = "KeyframeTimer";
ROUTE42.toField = "set_fraction";
ROUTE42.toNode = "Keyframe_r_talocrural";
Group4.children[37] = ROUTE42;

let ROUTE43 = browser.currentScene.createNode("ROUTE");
ROUTE43.fromField = "fraction_changed";
ROUTE43.fromNode = "KeyframeTimer";
ROUTE43.toField = "set_fraction";
ROUTE43.toNode = "Keyframe_r_metatarsophalangeal";
Group4.children[38] = ROUTE43;

let ROUTE44 = browser.currentScene.createNode("ROUTE");
ROUTE44.fromField = "value_changed";
ROUTE44.fromNode = "Keyframe_HumanoidRoot";
ROUTE44.toField = "translation";
ROUTE44.toNode = "hanim_HumanoidRoot";
Group4.children[39] = ROUTE44;

let ROUTE45 = browser.currentScene.createNode("ROUTE");
ROUTE45.fromField = "value_changed";
ROUTE45.fromNode = "Keyframe_HumanoidRoot";
ROUTE45.toField = "rotation";
ROUTE45.toNode = "hanim_HumanoidRoot";
Group4.children[40] = ROUTE45;

let ROUTE46 = browser.currentScene.createNode("ROUTE");
ROUTE46.fromField = "value_changed";
ROUTE46.fromNode = "Keyframe_sacroiliac";
ROUTE46.toField = "rotation";
ROUTE46.toNode = "hanim_sacroiliac";
Group4.children[41] = ROUTE46;

let ROUTE47 = browser.currentScene.createNode("ROUTE");
ROUTE47.fromField = "value_changed";
ROUTE47.fromNode = "Keyframe_l_shoulder";
ROUTE47.toField = "rotation";
ROUTE47.toNode = "hanim_l_shoulder";
Group4.children[42] = ROUTE47;

let ROUTE48 = browser.currentScene.createNode("ROUTE");
ROUTE48.fromField = "value_changed";
ROUTE48.fromNode = "Keyframe_l_elbow";
ROUTE48.toField = "rotation";
ROUTE48.toNode = "hanim_l_elbow";
Group4.children[43] = ROUTE48;

let ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromField = "value_changed";
ROUTE49.fromNode = "Keyframe_l_radiocarpal";
ROUTE49.toField = "rotation";
ROUTE49.toNode = "hanim_l_radiocarpal";
Group4.children[44] = ROUTE49;

let ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromField = "value_changed";
ROUTE50.fromNode = "Keyframe_r_shoulder";
ROUTE50.toField = "rotation";
ROUTE50.toNode = "hanim_r_shoulder";
Group4.children[45] = ROUTE50;

let ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromField = "value_changed";
ROUTE51.fromNode = "Keyframe_r_elbow";
ROUTE51.toField = "rotation";
ROUTE51.toNode = "hanim_r_elbow";
Group4.children[46] = ROUTE51;

let ROUTE52 = browser.currentScene.createNode("ROUTE");
ROUTE52.fromField = "value_changed";
ROUTE52.fromNode = "Keyframe_r_radiocarpal";
ROUTE52.toField = "rotation";
ROUTE52.toNode = "hanim_r_radiocarpal";
Group4.children[47] = ROUTE52;

let ROUTE53 = browser.currentScene.createNode("ROUTE");
ROUTE53.fromField = "value_changed";
ROUTE53.fromNode = "Keyframe_vl5";
ROUTE53.toField = "rotation";
ROUTE53.toNode = "hanim_vl5";
Group4.children[48] = ROUTE53;

let ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromField = "value_changed";
ROUTE54.fromNode = "Keyframe_skullbase";
ROUTE54.toField = "rotation";
ROUTE54.toNode = "hanim_skullbase";
Group4.children[49] = ROUTE54;

let ROUTE55 = browser.currentScene.createNode("ROUTE");
ROUTE55.fromField = "value_changed";
ROUTE55.fromNode = "Keyframe_l_hip";
ROUTE55.toField = "rotation";
ROUTE55.toNode = "hanim_l_hip";
Group4.children[50] = ROUTE55;

let ROUTE56 = browser.currentScene.createNode("ROUTE");
ROUTE56.fromField = "value_changed";
ROUTE56.fromNode = "Keyframe_l_knee";
ROUTE56.toField = "rotation";
ROUTE56.toNode = "hanim_l_knee";
Group4.children[51] = ROUTE56;

let ROUTE57 = browser.currentScene.createNode("ROUTE");
ROUTE57.fromField = "value_changed";
ROUTE57.fromNode = "Keyframe_l_talocrural";
ROUTE57.toField = "rotation";
ROUTE57.toNode = "hanim_l_talocrural";
Group4.children[52] = ROUTE57;

let ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromField = "value_changed";
ROUTE58.fromNode = "Keyframe_l_talocrural";
ROUTE58.toField = "rotation";
ROUTE58.toNode = "hanim_l_metatarsophalangeal";
Group4.children[53] = ROUTE58;

let ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromField = "value_changed";
ROUTE59.fromNode = "Keyframe_r_hip";
ROUTE59.toField = "rotation";
ROUTE59.toNode = "hanim_r_hip";
Group4.children[54] = ROUTE59;

let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromField = "value_changed";
ROUTE60.fromNode = "Keyframe_r_knee";
ROUTE60.toField = "rotation";
ROUTE60.toNode = "hanim_r_knee";
Group4.children[55] = ROUTE60;

let ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromField = "value_changed";
ROUTE61.fromNode = "Keyframe_l_talocrural";
ROUTE61.toField = "rotation";
ROUTE61.toNode = "hanim_r_talocrural";
Group4.children[56] = ROUTE61;

let ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromField = "value_changed";
ROUTE62.fromNode = "Keyframe_l_talocrural";
ROUTE62.toField = "rotation";
ROUTE62.toNode = "hanim_r_metatarsophalangeal";
Group4.children[57] = ROUTE62;

browser.currentScene.children[2] = Group4;


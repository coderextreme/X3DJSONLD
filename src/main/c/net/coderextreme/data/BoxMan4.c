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
meta3.content = "BoxMan.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation scripting via an external prototype (ExternProtoDeclare).";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "James Smith - james@vapourtech.com";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "translator";
meta6.content = "Don Brutzman and Matt Beitler";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "created";
meta7.content = "1 March 2001";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "translated";
meta8.content = "19 October 2001";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "modified";
meta9.content = "Tue, 09 Sep 2025 19:37:51 GMT";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "Original site http://HAnim.org";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "../Legacy/originals/boxman.wrl";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "BoxMan.js";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "BoxManAnimationPanel.x3d";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "reference";
meta15.content = "http://www.vapourtech.com/team/james/boxman.wrl";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "reference";
meta16.content = "http://HAnim.org/Specifications/HAnim2001";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "reference";
meta17.content = "http://HAnim.org/Models";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "reference";
meta18.content = "http://HAnim.org/Nodes";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "reference";
meta19.content = "https://www.web3d.org/x3d/content/X3dToVrml97.xslt";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "reference";
meta20.content = "http://www.vapourtech.com";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "warning";
meta21.content = "Skin mesh is split across multiple shapes within a Group, should that be allowed?";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "TODO";
meta22.content = "What does the original animation script accomplish? It is not hooked up, script source contains errors...";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "TODO";
meta23.content = "InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "Image";
meta24.content = "BoxManViewInclined.png";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "Image";
meta25.content = "BoxManViewFront.png";
head1.meta[23] = meta25;

meta meta26 = createNode("meta");
meta26.name = "Image";
meta26.content = "BoxManViewRight.png";
head1.meta[24] = meta26;

meta meta27 = createNode("meta");
meta27.name = "Image";
meta27.content = "BoxManViewLeft.png";
head1.meta[25] = meta27;

meta meta28 = createNode("meta");
meta28.name = "Image";
meta28.content = "BoxManViewTop.png";
head1.meta[26] = meta28;

meta meta29 = createNode("meta");
meta29.name = "rights";
meta29.content = "(C) 2000 James Smith - james@vapourtech.com";
head1.meta[27] = meta29;

meta meta30 = createNode("meta");
meta30.name = "subject";
meta30.content = "BoxMan HAnim 2.0";
head1.meta[28] = meta30;

meta meta31 = createNode("meta");
meta31.name = "identifier";
meta31.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan.x3d";
head1.meta[29] = meta31;

head = head1;

ExternProtoDeclare ExternProtoDeclare33 = createNode("ExternProtoDeclare");
ExternProtoDeclare33.name = "LOA1_WalkAnimation";
ExternProtoDeclare33.url = new MFString(new java.lang.String["../Prototypes/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation","../Prototypes/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation"]);
field field34 = createNode("field");
field34.accessType = "inputOutput";
field34.type = "SFTime";
field34.name = "cycleInterval";
ExternProtoDeclare33.field = new MFNode();

ExternProtoDeclare33.field[0] = field34;

field field35 = createNode("field");
field35.accessType = "inputOutput";
field35.type = "SFBool";
field35.name = "enabled";
ExternProtoDeclare33.field[1] = field35;

field field36 = createNode("field");
field36.accessType = "inputOutput";
field36.type = "SFBool";
field36.name = "loop";
ExternProtoDeclare33.field[2] = field36;

field field37 = createNode("field");
field37.accessType = "inputOutput";
field37.type = "SFTime";
field37.name = "startTime";
ExternProtoDeclare33.field[3] = field37;

field field38 = createNode("field");
field38.accessType = "inputOutput";
field38.type = "SFTime";
field38.name = "stopTime";
ExternProtoDeclare33.field[4] = field38;

field field39 = createNode("field");
field39.accessType = "outputOnly";
field39.type = "SFFloat";
field39.name = "fraction_changed";
ExternProtoDeclare33.field[5] = field39;

field field40 = createNode("field");
field40.accessType = "outputOnly";
field40.type = "SFVec3f";
field40.name = "HumanoidRoot_translation_changed";
ExternProtoDeclare33.field[6] = field40;

field field41 = createNode("field");
field41.accessType = "outputOnly";
field41.type = "SFRotation";
field41.name = "HumanoidRoot_rotation_changed";
ExternProtoDeclare33.field[7] = field41;

field field42 = createNode("field");
field42.accessType = "outputOnly";
field42.type = "SFRotation";
field42.name = "l_hip_rotation_changed";
ExternProtoDeclare33.field[8] = field42;

field field43 = createNode("field");
field43.accessType = "outputOnly";
field43.type = "SFRotation";
field43.name = "l_knee_rotation_changed";
ExternProtoDeclare33.field[9] = field43;

field field44 = createNode("field");
field44.accessType = "outputOnly";
field44.type = "SFRotation";
field44.name = "l_ankle_rotation_changed";
ExternProtoDeclare33.field[10] = field44;

field field45 = createNode("field");
field45.accessType = "outputOnly";
field45.type = "SFRotation";
field45.name = "l_midtarsal_rotation_changed";
ExternProtoDeclare33.field[11] = field45;

field field46 = createNode("field");
field46.accessType = "outputOnly";
field46.type = "SFRotation";
field46.name = "r_hip_rotation_changed";
ExternProtoDeclare33.field[12] = field46;

field field47 = createNode("field");
field47.accessType = "outputOnly";
field47.type = "SFRotation";
field47.name = "r_knee_rotation_changed";
ExternProtoDeclare33.field[13] = field47;

field field48 = createNode("field");
field48.accessType = "outputOnly";
field48.type = "SFRotation";
field48.name = "r_ankle_rotation_changed";
ExternProtoDeclare33.field[14] = field48;

field field49 = createNode("field");
field49.accessType = "outputOnly";
field49.type = "SFRotation";
field49.name = "r_midtarsal_rotation_changed";
ExternProtoDeclare33.field[15] = field49;

field field50 = createNode("field");
field50.accessType = "outputOnly";
field50.type = "SFRotation";
field50.name = "vl5_rotation_changed";
ExternProtoDeclare33.field[16] = field50;

field field51 = createNode("field");
field51.accessType = "outputOnly";
field51.type = "SFRotation";
field51.name = "skullbase_rotation_changed";
ExternProtoDeclare33.field[17] = field51;

field field52 = createNode("field");
field52.accessType = "outputOnly";
field52.type = "SFRotation";
field52.name = "l_shoulder_rotation_changed";
ExternProtoDeclare33.field[18] = field52;

field field53 = createNode("field");
field53.accessType = "outputOnly";
field53.type = "SFRotation";
field53.name = "l_elbow_rotation_changed";
ExternProtoDeclare33.field[19] = field53;

field field54 = createNode("field");
field54.accessType = "outputOnly";
field54.type = "SFRotation";
field54.name = "l_wrist_rotation_changed";
ExternProtoDeclare33.field[20] = field54;

field field55 = createNode("field");
field55.accessType = "outputOnly";
field55.type = "SFRotation";
field55.name = "r_shoulder_rotation_changed";
ExternProtoDeclare33.field[21] = field55;

field field56 = createNode("field");
field56.accessType = "outputOnly";
field56.type = "SFRotation";
field56.name = "r_elbow_rotation_changed";
ExternProtoDeclare33.field[22] = field56;

field field57 = createNode("field");
field57.accessType = "outputOnly";
field57.type = "SFRotation";
field57.name = "r_wrist_rotation_changed";
ExternProtoDeclare33.field[23] = field57;

field field58 = createNode("field");
field58.accessType = "outputOnly";
field58.type = "SFBool";
field58.name = "isActive";
ExternProtoDeclare33.field[24] = field58;

children = new MFNode();

children[0] = ExternProtoDeclare33;

WorldInfo WorldInfo59 = createNode("WorldInfo");
WorldInfo59.title = "BoxMan - A Seamless VRML Human";
WorldInfo59.info = new MFString(new java.lang.String["(C) 2000 James Smith - james@vapourtech.com","http://www.vapourtech.com/team/james/boxman.wrl","Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com"]);
children[1] = WorldInfo59;

Background Background60 = createNode("Background");
Background60.skyColor = new MFColor(new float[0.75,0.75,0.75]);
Background60.groundColor = new MFColor(new float[0.6,0.6,0.6]);
children[2] = Background60;

HAnimHumanoid HAnimHumanoid61 = createNode("HAnimHumanoid");
HAnimHumanoid61.DEF = "boxman_Humanoid";
HAnimHumanoid61.name = "Humanoid";
HAnimHumanoid61.info = new MFString(new java.lang.String["authorName=James Smith","authorEmail=james@vapourtech.com","copyright=(C) 2000 James Smith - james@vapourtech.com","humanoidVersion=1.0"]);
HAnimHumanoid61.version = "1.0";
HAnimJoint HAnimJoint62 = createNode("HAnimJoint");
HAnimJoint62.DEF = "boxman_humanoid_root";
HAnimJoint62.name = "humanoid_root";
HAnimJoint62.center = new SFVec3f(new float[0,0.9723,-0.0728]);
HAnimJoint62.skinCoordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9,10,11]);
HAnimJoint62.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment63 = createNode("HAnimSegment");
HAnimSegment63.DEF = "boxman_sacrum";
HAnimSegment63.name = "sacrum";
Transform Transform64 = createNode("Transform");
Transform64.translation = new SFVec3f(new float[0,0.9723,-0.0728]);
Shape Shape65 = createNode("Shape");
Shape65.DEF = "SphereYellow";
Appearance Appearance66 = createNode("Appearance");
Material Material67 = createNode("Material");
Material67.diffuseColor = new SFColor(new float[1,1,0]);
Appearance66.material = Material67;

Shape65.appearance = Appearance66;

Sphere Sphere68 = createNode("Sphere");
Sphere68.radius = 0.02;
Shape65.geometry = Sphere68;

Transform64.child = new undefined();

Transform64.child[0] = Shape65;

HAnimSegment63.children = new MFNode();

HAnimSegment63.children[0] = Transform64;

HAnimJoint62.children = new MFNode();

HAnimJoint62.children[0] = HAnimSegment63;

HAnimJoint HAnimJoint69 = createNode("HAnimJoint");
HAnimJoint69.DEF = "boxman_l_hip";
HAnimJoint69.name = "l_hip";
HAnimJoint69.center = new SFVec3f(new float[0.0956,0.9364,0]);
HAnimJoint69.skinCoordIndex = new MFInt32(new int[12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43]);
HAnimJoint69.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
HAnimSegment HAnimSegment70 = createNode("HAnimSegment");
HAnimSegment70.DEF = "boxman_l_thigh";
HAnimSegment70.name = "l_thigh";
Transform Transform71 = createNode("Transform");
Transform71.translation = new SFVec3f(new float[0.0956,0.9364,0]);
Shape Shape72 = createNode("Shape");
Shape72.USE = "SphereYellow";
Transform71.child = new undefined();

Transform71.child[0] = Shape72;

HAnimSegment70.children = new MFNode();

HAnimSegment70.children[0] = Transform71;

HAnimJoint69.children = new MFNode();

HAnimJoint69.children[0] = HAnimSegment70;

HAnimJoint HAnimJoint73 = createNode("HAnimJoint");
HAnimJoint73.DEF = "boxman_l_knee";
HAnimJoint73.name = "l_knee";
HAnimJoint73.center = new SFVec3f(new float[0.0956,0.5095,-0.0036]);
HAnimJoint73.skinCoordIndex = new MFInt32(new int[36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63]);
HAnimJoint73.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment74 = createNode("HAnimSegment");
HAnimSegment74.DEF = "boxman_l_calf";
HAnimSegment74.name = "l_calf";
Transform Transform75 = createNode("Transform");
Transform75.translation = new SFVec3f(new float[0.0956,0.5095,-0.0036]);
Shape Shape76 = createNode("Shape");
Shape76.USE = "SphereYellow";
Transform75.child = new undefined();

Transform75.child[0] = Shape76;

HAnimSegment74.children = new MFNode();

HAnimSegment74.children[0] = Transform75;

HAnimJoint73.children = new MFNode();

HAnimJoint73.children[0] = HAnimSegment74;

HAnimJoint HAnimJoint77 = createNode("HAnimJoint");
HAnimJoint77.DEF = "boxman_l_ankle";
HAnimJoint77.name = "l_ankle";
HAnimJoint77.center = new SFVec3f(new float[0.0946,0.0762,-0.0261]);
HAnimJoint77.skinCoordIndex = new MFInt32(new int[64,65,66,67,68,69,70,71]);
HAnimJoint77.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment78 = createNode("HAnimSegment");
HAnimSegment78.DEF = "boxman_l_hindfoot";
HAnimSegment78.name = "l_hindfoot";
Transform Transform79 = createNode("Transform");
Transform79.translation = new SFVec3f(new float[0.0946,0.0762,-0.0261]);
Shape Shape80 = createNode("Shape");
Shape80.USE = "SphereYellow";
Transform79.child = new undefined();

Transform79.child[0] = Shape80;

HAnimSegment78.children = new MFNode();

HAnimSegment78.children[0] = Transform79;

HAnimJoint77.children = new MFNode();

HAnimJoint77.children[0] = HAnimSegment78;

HAnimJoint HAnimJoint81 = createNode("HAnimJoint");
HAnimJoint81.DEF = "boxman_l_midtarsal";
HAnimJoint81.name = "l_midtarsal";
HAnimJoint81.center = new SFVec3f(new float[0.1079,0.0317,0.067]);
HAnimJoint81.skinCoordIndex = new MFInt32(new int[72,73,74,75,76,77,78,79]);
HAnimJoint81.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment82 = createNode("HAnimSegment");
HAnimSegment82.DEF = "boxman_l_middistal";
HAnimSegment82.name = "l_middistal";
Transform Transform83 = createNode("Transform");
Transform83.translation = new SFVec3f(new float[0.1079,0.0317,0.067]);
Shape Shape84 = createNode("Shape");
Shape84.USE = "SphereYellow";
Transform83.child = new undefined();

Transform83.child[0] = Shape84;

HAnimSegment82.children = new MFNode();

HAnimSegment82.children[0] = Transform83;

HAnimSite HAnimSite85 = createNode("HAnimSite");
HAnimSite85.DEF = "boxman_l_middistal_tip";
HAnimSite85.name = "l_middistal_tip";
HAnimSite85.translation = new SFVec3f(new float[0.095,0.0005,0.1924]);
Shape Shape86 = createNode("Shape");
Shape86.DEF = "SphereRed";
Appearance Appearance87 = createNode("Appearance");
Material Material88 = createNode("Material");
Material88.diffuseColor = new SFColor(new float[1,0,0]);
Appearance87.material = Material88;

Shape86.appearance = Appearance87;

Sphere Sphere89 = createNode("Sphere");
Sphere89.radius = 0.02;
Shape86.geometry = Sphere89;

HAnimSite85.children = new MFNode();

HAnimSite85.children[0] = Shape86;

HAnimSegment82.children[1] = HAnimSite85;

HAnimJoint81.children = new MFNode();

HAnimJoint81.children[0] = HAnimSegment82;

HAnimJoint77.children[1] = HAnimJoint81;

HAnimJoint73.children[1] = HAnimJoint77;

HAnimJoint69.children[1] = HAnimJoint73;

HAnimJoint62.children[1] = HAnimJoint69;

HAnimJoint HAnimJoint90 = createNode("HAnimJoint");
HAnimJoint90.DEF = "boxman_r_hip";
HAnimJoint90.name = "r_hip";
HAnimJoint90.center = new SFVec3f(new float[-0.0956,0.9364,0]);
HAnimJoint90.skinCoordIndex = new MFInt32(new int[80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111]);
HAnimJoint90.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
HAnimSegment HAnimSegment91 = createNode("HAnimSegment");
HAnimSegment91.DEF = "boxman_r_thigh";
HAnimSegment91.name = "r_thigh";
Transform Transform92 = createNode("Transform");
Transform92.translation = new SFVec3f(new float[-0.0956,0.9364,0]);
Shape Shape93 = createNode("Shape");
Shape93.USE = "SphereYellow";
Transform92.child = new undefined();

Transform92.child[0] = Shape93;

HAnimSegment91.children = new MFNode();

HAnimSegment91.children[0] = Transform92;

HAnimJoint90.children = new MFNode();

HAnimJoint90.children[0] = HAnimSegment91;

HAnimJoint HAnimJoint94 = createNode("HAnimJoint");
HAnimJoint94.DEF = "boxman_r_knee";
HAnimJoint94.name = "r_knee";
HAnimJoint94.center = new SFVec3f(new float[-0.0956,0.5095,-0.0036]);
HAnimJoint94.skinCoordIndex = new MFInt32(new int[104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131]);
HAnimJoint94.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment95 = createNode("HAnimSegment");
HAnimSegment95.DEF = "boxman_r_calf";
HAnimSegment95.name = "r_calf";
Transform Transform96 = createNode("Transform");
Transform96.translation = new SFVec3f(new float[-0.0956,0.5095,-0.0036]);
Shape Shape97 = createNode("Shape");
Shape97.USE = "SphereYellow";
Transform96.child = new undefined();

Transform96.child[0] = Shape97;

HAnimSegment95.children = new MFNode();

HAnimSegment95.children[0] = Transform96;

HAnimJoint94.children = new MFNode();

HAnimJoint94.children[0] = HAnimSegment95;

HAnimJoint HAnimJoint98 = createNode("HAnimJoint");
HAnimJoint98.DEF = "boxman_r_ankle";
HAnimJoint98.name = "r_ankle";
HAnimJoint98.center = new SFVec3f(new float[-0.0946,0.0762,-0.0261]);
HAnimJoint98.skinCoordIndex = new MFInt32(new int[132,133,134,135,136,137,138,139]);
HAnimJoint98.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment99 = createNode("HAnimSegment");
HAnimSegment99.DEF = "boxman_r_hindfoot";
HAnimSegment99.name = "r_hindfoot";
Transform Transform100 = createNode("Transform");
Transform100.translation = new SFVec3f(new float[-0.0946,0.0762,-0.0261]);
Shape Shape101 = createNode("Shape");
Shape101.USE = "SphereYellow";
Transform100.child = new undefined();

Transform100.child[0] = Shape101;

HAnimSegment99.children = new MFNode();

HAnimSegment99.children[0] = Transform100;

HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimSegment99;

HAnimJoint HAnimJoint102 = createNode("HAnimJoint");
HAnimJoint102.DEF = "boxman_r_midtarsal";
HAnimJoint102.name = "r_midtarsal";
HAnimJoint102.center = new SFVec3f(new float[-0.1079,0.0317,0.067]);
HAnimJoint102.skinCoordIndex = new MFInt32(new int[140,141,142,143,144,145,146,147]);
HAnimJoint102.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment103 = createNode("HAnimSegment");
HAnimSegment103.DEF = "boxman_r_middistal";
HAnimSegment103.name = "r_middistal";
Transform Transform104 = createNode("Transform");
Transform104.translation = new SFVec3f(new float[-0.1079,0.0317,0.067]);
Shape Shape105 = createNode("Shape");
Shape105.USE = "SphereYellow";
Transform104.child = new undefined();

Transform104.child[0] = Shape105;

HAnimSegment103.children = new MFNode();

HAnimSegment103.children[0] = Transform104;

HAnimSite HAnimSite106 = createNode("HAnimSite");
HAnimSite106.DEF = "boxman_r_middistal_tip";
HAnimSite106.name = "r_middistal_tip";
HAnimSite106.translation = new SFVec3f(new float[-0.095,0.0005,0.1924]);
Shape Shape107 = createNode("Shape");
Shape107.USE = "SphereRed";
HAnimSite106.children = new MFNode();

HAnimSite106.children[0] = Shape107;

HAnimSegment103.children[1] = HAnimSite106;

HAnimJoint102.children = new MFNode();

HAnimJoint102.children[0] = HAnimSegment103;

HAnimJoint98.children[1] = HAnimJoint102;

HAnimJoint94.children[1] = HAnimJoint98;

HAnimJoint90.children[1] = HAnimJoint94;

HAnimJoint62.children[2] = HAnimJoint90;

HAnimJoint HAnimJoint108 = createNode("HAnimJoint");
HAnimJoint108.DEF = "boxman_vl5";
HAnimJoint108.name = "vl5";
HAnimJoint108.center = new SFVec3f(new float[0,1.0817,-0.0728]);
HAnimJoint108.skinCoordIndex = new MFInt32(new int[148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167]);
HAnimJoint108.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment109 = createNode("HAnimSegment");
HAnimSegment109.DEF = "boxman_l5";
HAnimSegment109.name = "l5";
Transform Transform110 = createNode("Transform");
Transform110.translation = new SFVec3f(new float[0,1.0817,-0.0728]);
Shape Shape111 = createNode("Shape");
Shape111.USE = "SphereYellow";
Transform110.child = new undefined();

Transform110.child[0] = Shape111;

HAnimSegment109.children = new MFNode();

HAnimSegment109.children[0] = Transform110;

HAnimJoint108.children = new MFNode();

HAnimJoint108.children[0] = HAnimSegment109;

HAnimJoint HAnimJoint112 = createNode("HAnimJoint");
HAnimJoint112.DEF = "boxman_skullbase";
HAnimJoint112.name = "skullbase";
HAnimJoint112.center = new SFVec3f(new float[0,1.644,0.036]);
HAnimJoint112.skinCoordIndex = new MFInt32(new int[168,169,170,171,172,173,174,175]);
HAnimJoint112.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment113 = createNode("HAnimSegment");
HAnimSegment113.DEF = "boxman_skull";
HAnimSegment113.name = "skull";
Transform Transform114 = createNode("Transform");
Transform114.translation = new SFVec3f(new float[0,1.644,0.036]);
Shape Shape115 = createNode("Shape");
Shape115.USE = "SphereYellow";
Transform114.child = new undefined();

Transform114.child[0] = Shape115;

HAnimSegment113.children = new MFNode();

HAnimSegment113.children[0] = Transform114;

HAnimSite HAnimSite116 = createNode("HAnimSite");
HAnimSite116.DEF = "boxman_skull_tip";
HAnimSite116.name = "skull_tip";
HAnimSite116.translation = new SFVec3f(new float[-0.0029,1.7771,0.0274]);
Shape Shape117 = createNode("Shape");
Shape117.USE = "SphereYellow";
HAnimSite116.children = new MFNode();

HAnimSite116.children[0] = Shape117;

HAnimSegment113.children[1] = HAnimSite116;

HAnimJoint112.children = new MFNode();

HAnimJoint112.children[0] = HAnimSegment113;

HAnimJoint108.children[1] = HAnimJoint112;

HAnimJoint HAnimJoint118 = createNode("HAnimJoint");
HAnimJoint118.DEF = "boxman_l_shoulder";
HAnimJoint118.name = "l_shoulder";
HAnimJoint118.center = new SFVec3f(new float[0.1968,1.4642,-0.0265]);
HAnimJoint118.skinCoordIndex = new MFInt32(new int[176,177,178,179,180,181,182,183]);
HAnimJoint118.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment119 = createNode("HAnimSegment");
HAnimSegment119.DEF = "boxman_l_upperarm";
HAnimSegment119.name = "l_upperarm";
Transform Transform120 = createNode("Transform");
Transform120.translation = new SFVec3f(new float[0.1968,1.4642,-0.0265]);
Shape Shape121 = createNode("Shape");
Shape121.USE = "SphereYellow";
Transform120.child = new undefined();

Transform120.child[0] = Shape121;

HAnimSegment119.children = new MFNode();

HAnimSegment119.children[0] = Transform120;

HAnimJoint118.children = new MFNode();

HAnimJoint118.children[0] = HAnimSegment119;

HAnimJoint HAnimJoint122 = createNode("HAnimJoint");
HAnimJoint122.DEF = "boxman_l_elbow";
HAnimJoint122.name = "l_elbow";
HAnimJoint122.center = new SFVec3f(new float[0.1982,1.1622,-0.0557]);
HAnimJoint122.skinCoordIndex = new MFInt32(new int[184,185,186,187,188,189,190,191]);
HAnimJoint122.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment123 = createNode("HAnimSegment");
HAnimSegment123.DEF = "boxman_l_forearm";
HAnimSegment123.name = "l_forearm";
Transform Transform124 = createNode("Transform");
Transform124.translation = new SFVec3f(new float[0.1982,1.1622,-0.0557]);
Shape Shape125 = createNode("Shape");
Shape125.USE = "SphereYellow";
Transform124.child = new undefined();

Transform124.child[0] = Shape125;

HAnimSegment123.children = new MFNode();

HAnimSegment123.children[0] = Transform124;

HAnimJoint122.children = new MFNode();

HAnimJoint122.children[0] = HAnimSegment123;

HAnimJoint HAnimJoint126 = createNode("HAnimJoint");
HAnimJoint126.DEF = "boxman_l_wrist";
HAnimJoint126.name = "l_wrist";
HAnimJoint126.center = new SFVec3f(new float[0.1972,0.8929,-0.069]);
HAnimJoint126.skinCoordIndex = new MFInt32(new int[192,193,194,195,196,197,198,199]);
HAnimJoint126.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment127 = createNode("HAnimSegment");
HAnimSegment127.DEF = "boxman_l_hand";
HAnimSegment127.name = "l_hand";
Transform Transform128 = createNode("Transform");
Transform128.translation = new SFVec3f(new float[0.1972,0.8929,-0.069]);
Shape Shape129 = createNode("Shape");
Shape129.USE = "SphereYellow";
Transform128.child = new undefined();

Transform128.child[0] = Shape129;

HAnimSegment127.children = new MFNode();

HAnimSegment127.children[0] = Transform128;

HAnimSite HAnimSite130 = createNode("HAnimSite");
HAnimSite130.DEF = "boxman_l_hand_tip";
HAnimSite130.name = "l_hand_tip";
HAnimSite130.translation = new SFVec3f(new float[0.1912,0.6976,-0.071]);
Shape Shape131 = createNode("Shape");
Shape131.USE = "SphereRed";
HAnimSite130.children = new MFNode();

HAnimSite130.children[0] = Shape131;

HAnimSegment127.children[1] = HAnimSite130;

HAnimJoint126.children = new MFNode();

HAnimJoint126.children[0] = HAnimSegment127;

HAnimJoint122.children[1] = HAnimJoint126;

HAnimJoint118.children[1] = HAnimJoint122;

HAnimJoint108.children[2] = HAnimJoint118;

HAnimJoint HAnimJoint132 = createNode("HAnimJoint");
HAnimJoint132.DEF = "boxman_r_shoulder";
HAnimJoint132.name = "r_shoulder";
HAnimJoint132.center = new SFVec3f(new float[-0.1968,1.4642,-0.0265]);
HAnimJoint132.skinCoordIndex = new MFInt32(new int[200,201,202,203,204,205,206,207]);
HAnimJoint132.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment133 = createNode("HAnimSegment");
HAnimSegment133.DEF = "boxman_r_upperarm";
HAnimSegment133.name = "r_upperarm";
Transform Transform134 = createNode("Transform");
Transform134.translation = new SFVec3f(new float[-0.1968,1.4642,-0.0265]);
Shape Shape135 = createNode("Shape");
Shape135.USE = "SphereYellow";
Transform134.child = new undefined();

Transform134.child[0] = Shape135;

HAnimSegment133.children = new MFNode();

HAnimSegment133.children[0] = Transform134;

HAnimJoint132.children = new MFNode();

HAnimJoint132.children[0] = HAnimSegment133;

HAnimJoint HAnimJoint136 = createNode("HAnimJoint");
HAnimJoint136.DEF = "boxman_r_elbow";
HAnimJoint136.name = "r_elbow";
HAnimJoint136.center = new SFVec3f(new float[-0.1982,1.1622,-0.0557]);
HAnimJoint136.skinCoordIndex = new MFInt32(new int[208,209,210,211,212,213,214,215]);
HAnimJoint136.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment137 = createNode("HAnimSegment");
HAnimSegment137.DEF = "boxman_r_forearm";
HAnimSegment137.name = "r_forearm";
Transform Transform138 = createNode("Transform");
Transform138.translation = new SFVec3f(new float[-0.1982,1.1622,-0.0557]);
Shape Shape139 = createNode("Shape");
Shape139.USE = "SphereYellow";
Transform138.child = new undefined();

Transform138.child[0] = Shape139;

HAnimSegment137.children = new MFNode();

HAnimSegment137.children[0] = Transform138;

HAnimJoint136.children = new MFNode();

HAnimJoint136.children[0] = HAnimSegment137;

HAnimJoint HAnimJoint140 = createNode("HAnimJoint");
HAnimJoint140.DEF = "boxman_r_wrist";
HAnimJoint140.name = "r_wrist";
HAnimJoint140.center = new SFVec3f(new float[-0.1972,0.8929,-0.069]);
HAnimJoint140.skinCoordIndex = new MFInt32(new int[216,217,218,219,220,221,222,223]);
HAnimJoint140.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment141 = createNode("HAnimSegment");
HAnimSegment141.DEF = "boxman_r_hand";
HAnimSegment141.name = "r_hand";
Transform Transform142 = createNode("Transform");
Transform142.translation = new SFVec3f(new float[-0.1972,0.8929,-0.069]);
Shape Shape143 = createNode("Shape");
Shape143.USE = "SphereYellow";
Transform142.child = new undefined();

Transform142.child[0] = Shape143;

HAnimSegment141.children = new MFNode();

HAnimSegment141.children[0] = Transform142;

HAnimSite HAnimSite144 = createNode("HAnimSite");
HAnimSite144.DEF = "boxman_r_hand_tip";
HAnimSite144.name = "r_hand_tip";
HAnimSite144.translation = new SFVec3f(new float[-0.1912,0.6976,-0.071]);
Shape Shape145 = createNode("Shape");
Shape145.USE = "SphereRed";
HAnimSite144.children = new MFNode();

HAnimSite144.children[0] = Shape145;

HAnimSegment141.children[1] = HAnimSite144;

HAnimJoint140.children = new MFNode();

HAnimJoint140.children[0] = HAnimSegment141;

HAnimJoint136.children[1] = HAnimJoint140;

HAnimJoint132.children[1] = HAnimJoint136;

HAnimJoint108.children[3] = HAnimJoint132;

HAnimJoint62.children[3] = HAnimJoint108;

HAnimHumanoid61.joints = new MFNode();

HAnimHumanoid61.joints[0] = HAnimJoint62;

HAnimJoint HAnimJoint146 = createNode("HAnimJoint");
HAnimJoint146.USE = "boxman_humanoid_root";
HAnimHumanoid61.joints[1] = HAnimJoint146;

HAnimJoint HAnimJoint147 = createNode("HAnimJoint");
HAnimJoint147.USE = "boxman_skullbase";
HAnimHumanoid61.joints[2] = HAnimJoint147;

HAnimJoint HAnimJoint148 = createNode("HAnimJoint");
HAnimJoint148.USE = "boxman_vl5";
HAnimHumanoid61.joints[3] = HAnimJoint148;

HAnimJoint HAnimJoint149 = createNode("HAnimJoint");
HAnimJoint149.USE = "boxman_l_ankle";
HAnimHumanoid61.joints[4] = HAnimJoint149;

HAnimJoint HAnimJoint150 = createNode("HAnimJoint");
HAnimJoint150.USE = "boxman_r_ankle";
HAnimHumanoid61.joints[5] = HAnimJoint150;

HAnimJoint HAnimJoint151 = createNode("HAnimJoint");
HAnimJoint151.USE = "boxman_l_elbow";
HAnimHumanoid61.joints[6] = HAnimJoint151;

HAnimJoint HAnimJoint152 = createNode("HAnimJoint");
HAnimJoint152.USE = "boxman_r_elbow";
HAnimHumanoid61.joints[7] = HAnimJoint152;

HAnimJoint HAnimJoint153 = createNode("HAnimJoint");
HAnimJoint153.USE = "boxman_l_hip";
HAnimHumanoid61.joints[8] = HAnimJoint153;

HAnimJoint HAnimJoint154 = createNode("HAnimJoint");
HAnimJoint154.USE = "boxman_r_hip";
HAnimHumanoid61.joints[9] = HAnimJoint154;

HAnimJoint HAnimJoint155 = createNode("HAnimJoint");
HAnimJoint155.USE = "boxman_l_knee";
HAnimHumanoid61.joints[10] = HAnimJoint155;

HAnimJoint HAnimJoint156 = createNode("HAnimJoint");
HAnimJoint156.USE = "boxman_r_knee";
HAnimHumanoid61.joints[11] = HAnimJoint156;

HAnimJoint HAnimJoint157 = createNode("HAnimJoint");
HAnimJoint157.USE = "boxman_l_midtarsal";
HAnimHumanoid61.joints[12] = HAnimJoint157;

HAnimJoint HAnimJoint158 = createNode("HAnimJoint");
HAnimJoint158.USE = "boxman_r_midtarsal";
HAnimHumanoid61.joints[13] = HAnimJoint158;

HAnimJoint HAnimJoint159 = createNode("HAnimJoint");
HAnimJoint159.USE = "boxman_l_shoulder";
HAnimHumanoid61.joints[14] = HAnimJoint159;

HAnimJoint HAnimJoint160 = createNode("HAnimJoint");
HAnimJoint160.USE = "boxman_r_shoulder";
HAnimHumanoid61.joints[15] = HAnimJoint160;

HAnimJoint HAnimJoint161 = createNode("HAnimJoint");
HAnimJoint161.USE = "boxman_l_wrist";
HAnimHumanoid61.joints[16] = HAnimJoint161;

HAnimJoint HAnimJoint162 = createNode("HAnimJoint");
HAnimJoint162.USE = "boxman_r_wrist";
HAnimHumanoid61.joints[17] = HAnimJoint162;

HAnimSegment HAnimSegment163 = createNode("HAnimSegment");
HAnimSegment163.USE = "boxman_l5";
HAnimHumanoid61.segments[18] = HAnimSegment163;

HAnimSegment HAnimSegment164 = createNode("HAnimSegment");
HAnimSegment164.USE = "boxman_sacrum";
HAnimHumanoid61.segments[19] = HAnimSegment164;

HAnimSegment HAnimSegment165 = createNode("HAnimSegment");
HAnimSegment165.USE = "boxman_skull";
HAnimHumanoid61.segments[20] = HAnimSegment165;

HAnimSegment HAnimSegment166 = createNode("HAnimSegment");
HAnimSegment166.USE = "boxman_l_calf";
HAnimHumanoid61.segments[21] = HAnimSegment166;

HAnimSegment HAnimSegment167 = createNode("HAnimSegment");
HAnimSegment167.USE = "boxman_r_calf";
HAnimHumanoid61.segments[22] = HAnimSegment167;

HAnimSegment HAnimSegment168 = createNode("HAnimSegment");
HAnimSegment168.USE = "boxman_l_forearm";
HAnimHumanoid61.segments[23] = HAnimSegment168;

HAnimSegment HAnimSegment169 = createNode("HAnimSegment");
HAnimSegment169.USE = "boxman_r_forearm";
HAnimHumanoid61.segments[24] = HAnimSegment169;

HAnimSegment HAnimSegment170 = createNode("HAnimSegment");
HAnimSegment170.USE = "boxman_l_hand";
HAnimHumanoid61.segments[25] = HAnimSegment170;

HAnimSegment HAnimSegment171 = createNode("HAnimSegment");
HAnimSegment171.USE = "boxman_r_hand";
HAnimHumanoid61.segments[26] = HAnimSegment171;

HAnimSegment HAnimSegment172 = createNode("HAnimSegment");
HAnimSegment172.USE = "boxman_l_hindfoot";
HAnimHumanoid61.segments[27] = HAnimSegment172;

HAnimSegment HAnimSegment173 = createNode("HAnimSegment");
HAnimSegment173.USE = "boxman_r_hindfoot";
HAnimHumanoid61.segments[28] = HAnimSegment173;

HAnimSegment HAnimSegment174 = createNode("HAnimSegment");
HAnimSegment174.USE = "boxman_l_middistal";
HAnimHumanoid61.segments[29] = HAnimSegment174;

HAnimSegment HAnimSegment175 = createNode("HAnimSegment");
HAnimSegment175.USE = "boxman_r_middistal";
HAnimHumanoid61.segments[30] = HAnimSegment175;

HAnimSegment HAnimSegment176 = createNode("HAnimSegment");
HAnimSegment176.USE = "boxman_l_thigh";
HAnimHumanoid61.segments[31] = HAnimSegment176;

HAnimSegment HAnimSegment177 = createNode("HAnimSegment");
HAnimSegment177.USE = "boxman_r_thigh";
HAnimHumanoid61.segments[32] = HAnimSegment177;

HAnimSegment HAnimSegment178 = createNode("HAnimSegment");
HAnimSegment178.USE = "boxman_l_upperarm";
HAnimHumanoid61.segments[33] = HAnimSegment178;

HAnimSegment HAnimSegment179 = createNode("HAnimSegment");
HAnimSegment179.USE = "boxman_r_upperarm";
HAnimHumanoid61.segments[34] = HAnimSegment179;

HAnimSite HAnimSite180 = createNode("HAnimSite");
HAnimSite180.USE = "boxman_skull_tip";
HAnimHumanoid61.viewpoints[35] = HAnimSite180;

HAnimSite HAnimSite181 = createNode("HAnimSite");
HAnimSite181.USE = "boxman_l_hand_tip";
HAnimHumanoid61.viewpoints[36] = HAnimSite181;

HAnimSite HAnimSite182 = createNode("HAnimSite");
HAnimSite182.USE = "boxman_r_hand_tip";
HAnimHumanoid61.viewpoints[37] = HAnimSite182;

HAnimSite HAnimSite183 = createNode("HAnimSite");
HAnimSite183.USE = "boxman_l_middistal_tip";
HAnimHumanoid61.viewpoints[38] = HAnimSite183;

HAnimSite HAnimSite184 = createNode("HAnimSite");
HAnimSite184.USE = "boxman_r_middistal_tip";
HAnimHumanoid61.viewpoints[39] = HAnimSite184;

HAnimSite HAnimSite185 = createNode("HAnimSite");
HAnimSite185.DEF = "boxman_BoxMan_view";
HAnimSite185.name = "BoxMan_view";
Viewpoint Viewpoint186 = createNode("Viewpoint");
Viewpoint186.DEF = "Inclined_View";
Viewpoint186.description = "Inclined View";
Viewpoint186.position = new SFVec3f(new float[2,0.9,2]);
Viewpoint186.orientation = new SFRotation(new float[0,1,0,0.78]);
HAnimSite185.children = new MFNode();

HAnimSite185.children[0] = Viewpoint186;

Viewpoint Viewpoint187 = createNode("Viewpoint");
Viewpoint187.DEF = "Front_View";
Viewpoint187.description = "Front View";
Viewpoint187.position = new SFVec3f(new float[0,1,3]);
HAnimSite185.children[1] = Viewpoint187;

Viewpoint Viewpoint188 = createNode("Viewpoint");
Viewpoint188.DEF = "Right_View";
Viewpoint188.description = "Right-side View";
Viewpoint188.position = new SFVec3f(new float[-3,1,0]);
Viewpoint188.orientation = new SFRotation(new float[0,1,0,-1.57]);
HAnimSite185.children[2] = Viewpoint188;

Viewpoint Viewpoint189 = createNode("Viewpoint");
Viewpoint189.DEF = "Left_View";
Viewpoint189.description = "Left-side View";
Viewpoint189.position = new SFVec3f(new float[3,1,0]);
Viewpoint189.orientation = new SFRotation(new float[0,1,0,1.57]);
HAnimSite185.children[3] = Viewpoint189;

Viewpoint Viewpoint190 = createNode("Viewpoint");
Viewpoint190.DEF = "Top_View";
Viewpoint190.description = "Top View";
Viewpoint190.position = new SFVec3f(new float[0,3,0]);
Viewpoint190.orientation = new SFRotation(new float[1,0,0,-1.57]);
HAnimSite185.children[4] = Viewpoint190;

HAnimHumanoid61.viewpoints[40] = HAnimSite185;

Coordinate Coordinate191 = createNode("Coordinate");
Coordinate191.DEF = "SKINCOORD";
Coordinate191.point = new MFVec3f(new float[-0.05,1,0.05,0.05,1,0.05,0.03,0.97,-0.1,-0.03,0.97,-0.1,0.03,0.94,-0.075,-0.03,0.94,-0.075,0,0.92,0,0,0.94,0.03,-0.12,1.06,0.05,0.12,1.06,0.05,0.12,1.06,-0.1,-0.12,1.06,-0.1,0.0456,0.9364,0.05,0.1456,0.9364,0.05,0.1456,0.9364,-0.05,0.0456,0.9364,-0.05,0.0456,0.9,0.05,0.1456,0.9,0.05,0.1456,0.9,-0.05,0.0456,0.9,-0.05,0.0456,0.8,0.05,0.1456,0.8,0.05,0.1456,0.8,-0.05,0.0456,0.8,-0.05,0.0456,0.7,0.05,0.1456,0.7,0.05,0.1456,0.7,-0.05,0.0456,0.7,-0.05,0.0456,0.6,0.05,0.1456,0.6,0.05,0.1456,0.6,-0.05,0.0456,0.6,-0.05,0.0456,0.55,0.05,0.1456,0.55,0.05,0.1456,0.55,-0.05,0.0456,0.55,-0.05,0.0456,0.52,0.05,0.1456,0.52,0.05,0.1456,0.52,-0.05,0.0456,0.52,-0.05,0.0456,0.5,0.05,0.1456,0.5,0.05,0.1456,0.5,-0.05,0.0456,0.5,-0.05,0.0454,0.43,0.045,0.1454,0.43,0.045,0.1454,0.43,-0.055,0.0454,0.43,-0.055,0.0452,0.36,0.04,0.1452,0.36,0.04,0.1452,0.36,-0.06,0.0452,0.36,-0.06,0.045,0.29,0.035,0.145,0.29,0.035,0.145,0.29,-0.065,0.045,0.29,-0.065,0.0448,0.21,0.03,0.1448,0.21,0.03,0.1448,0.21,-0.07,0.0448,0.21,-0.07,0.0446,0.1262,0.025,0.1446,0.1262,0.025,0.1446,0.1262,-0.075,0.0446,0.1262,-0.075,0.0446,0.0762,0.025,0.1446,0.0762,0.025,0.1446,0,-0.075,0.0446,0,-0.075,0.0446,0.0562,0.057,0.1446,0.0562,0.057,0.1446,0,0.057,0.0446,0,0.057,0.0446,0.0562,0.087,0.1446,0.0562,0.087,0.1446,0,0.087,0.0446,0,0.087,0.0446,0.0562,0.1924,0.1446,0.0562,0.1924,0.1446,0,0.1924,0.0446,0,0.1924,-0.0456,0.9364,0.05,-0.1456,0.9364,0.05,-0.1456,0.9364,-0.05,-0.0456,0.9364,-0.05,-0.0456,0.9,0.05,-0.1456,0.9,0.05,-0.1456,0.9,-0.05,-0.0456,0.9,-0.05,-0.0456,0.8,0.05,-0.1456,0.8,0.05,-0.1456,0.8,-0.05,-0.0456,0.8,-0.05,-0.0456,0.7,0.05,-0.1456,0.7,0.05,-0.1456,0.7,-0.05,-0.0456,0.7,-0.05,-0.0456,0.6,0.05,-0.1456,0.6,0.05,-0.1456,0.6,-0.05,-0.0456,0.6,-0.05,-0.0456,0.55,0.05,-0.1456,0.55,0.05,-0.1456,0.55,-0.05,-0.0456,0.55,-0.05,-0.0456,0.52,0.05,-0.1456,0.52,0.05,-0.1456,0.52,-0.05,-0.0456,0.52,-0.05,-0.0456,0.5,0.05,-0.1456,0.5,0.05,-0.1456,0.5,-0.05,-0.0456,0.5,-0.05,-0.0454,0.43,0.045,-0.1454,0.43,0.045,-0.1454,0.43,-0.055,-0.0454,0.43,-0.055,-0.0452,0.36,0.04,-0.1452,0.36,0.04,-0.1452,0.36,-0.06,-0.0452,0.36,-0.06,-0.045,0.29,0.035,-0.145,0.29,0.035,-0.145,0.29,-0.065,-0.045,0.29,-0.065,-0.0448,0.21,0.03,-0.1448,0.21,0.03,-0.1448,0.21,-0.07,-0.0448,0.21,-0.07,-0.0446,0.1262,0.025,-0.1446,0.1262,0.025,-0.1446,0.1262,-0.075,-0.0446,0.1262,-0.075,-0.0446,0.0762,0.025,-0.1446,0.0762,0.025,-0.1446,0,-0.075,-0.0446,0,-0.075,-0.0446,0.0562,0.057,-0.1446,0.0562,0.057,-0.1446,0,0.057,-0.0446,0,0.057,-0.0446,0.0562,0.087,-0.1446,0.0562,0.087,-0.1446,0,0.087,-0.0446,0,0.087,-0.0446,0.0562,0.1924,-0.1446,0.0562,0.1924,-0.1446,0,0.1924,-0.0446,0,0.1924,-0.12,1.1,0.05,0.12,1.1,0.05,0.12,1.1,-0.1,-0.12,1.1,-0.1,-0.14,1.42,0.045,0.14,1.42,0.045,0.14,1.42,-0.09,-0.14,1.42,-0.09,-0.24,1.52,0.035,0.24,1.52,0.035,0.24,1.52,-0.09,-0.24,1.52,-0.09,-0.05,1.56,0.03,0.05,1.56,0.03,0.05,1.56,-0.06,-0.05,1.56,-0.06,-0.05,1.6,0.06,0.05,1.6,0.06,0.05,1.62,-0.03,-0.05,1.62,-0.03,-0.07,1.777,0.13,0.07,1.777,0.13,0.07,1.777,-0.03,-0.07,1.777,-0.03,-0.07,1.6,0.13,0.07,1.6,0.13,0.07,1.66,-0.03,-0.07,1.66,-0.03,0.16,1.42,0.015,0.24,1.5,0.015,0.24,1.5,-0.075,0.16,1.42,-0.075,0.17,1.18,-0.025,0.23,1.18,-0.025,0.23,1.18,-0.085,0.17,1.18,-0.085,0.17,1.14,-0.025,0.23,1.14,-0.025,0.23,1.14,-0.085,0.17,1.14,-0.085,0.18,0.91,-0.05,0.22,0.91,-0.05,0.22,0.91,-0.09,0.18,0.91,-0.09,0.18,0.87,-0.02,0.22,0.87,-0.02,0.22,0.87,-0.1,0.18,0.87,-0.1,0.18,0.6976,-0.02,0.22,0.6976,-0.02,0.22,0.6976,-0.1,0.18,0.6976,-0.1,-0.16,1.42,0.015,-0.24,1.5,0.015,-0.24,1.5,-0.075,-0.16,1.42,-0.075,-0.17,1.18,-0.025,-0.23,1.18,-0.025,-0.23,1.18,-0.085,-0.17,1.18,-0.085,-0.17,1.14,-0.025,-0.23,1.14,-0.025,-0.23,1.14,-0.085,-0.17,1.14,-0.085,-0.18,0.91,-0.05,-0.22,0.91,-0.05,-0.22,0.91,-0.09,-0.18,0.91,-0.09,-0.18,0.87,-0.02,-0.22,0.87,-0.02,-0.22,0.87,-0.1,-0.18,0.87,-0.1,-0.18,0.6976,-0.02,-0.22,0.6976,-0.02,-0.22,0.6976,-0.1,-0.18,0.6976,-0.1]);
HAnimHumanoid61.skinCoord = Coordinate191;

Group Group192 = createNode("Group");
Shape Shape193 = createNode("Shape");
Shape193.DEF = "TrouserSkin";
Appearance Appearance194 = createNode("Appearance");
Material Material195 = createNode("Material");
Material195.diffuseColor = new SFColor(new float[0,0,1]);
Material195.transparency = 0.5;
Appearance194.material = Material195;

Shape193.appearance = Appearance194;

IndexedFaceSet IndexedFaceSet196 = createNode("IndexedFaceSet");
IndexedFaceSet196.coordIndex = new MFInt32(new int[0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1]);
Coordinate Coordinate197 = createNode("Coordinate");
Coordinate197.USE = "SKINCOORD";
IndexedFaceSet196.coord = Coordinate197;

Shape193.geometry = IndexedFaceSet196;

Group192.children = new MFNode();

Group192.children[0] = Shape193;

Shape Shape198 = createNode("Shape");
Shape198.DEF = "ShoeSkin";
Appearance Appearance199 = createNode("Appearance");
Material Material200 = createNode("Material");
Material200.diffuseColor = new SFColor(new float[0,0,0]);
Material200.transparency = 0.5;
Appearance199.material = Material200;

Shape198.appearance = Appearance199;

IndexedFaceSet IndexedFaceSet201 = createNode("IndexedFaceSet");
IndexedFaceSet201.coordIndex = new MFInt32(new int[60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1]);
Coordinate Coordinate202 = createNode("Coordinate");
Coordinate202.USE = "SKINCOORD";
IndexedFaceSet201.coord = Coordinate202;

Shape198.geometry = IndexedFaceSet201;

Group192.children[1] = Shape198;

Shape Shape203 = createNode("Shape");
Shape203.DEF = "ShirtSkin";
Appearance Appearance204 = createNode("Appearance");
Material Material205 = createNode("Material");
Material205.diffuseColor = new SFColor(new float[1,1,0]);
Material205.transparency = 0.5;
Appearance204.material = Material205;

Shape203.appearance = Appearance204;

IndexedFaceSet IndexedFaceSet206 = createNode("IndexedFaceSet");
IndexedFaceSet206.coordIndex = new MFInt32(new int[148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1]);
Coordinate Coordinate207 = createNode("Coordinate");
Coordinate207.USE = "SKINCOORD";
IndexedFaceSet206.coord = Coordinate207;

Shape203.geometry = IndexedFaceSet206;

Group192.children[2] = Shape203;

Shape Shape208 = createNode("Shape");
Shape208.DEF = "HeadHandsFleshToneSkin";
Appearance Appearance209 = createNode("Appearance");
Material Material210 = createNode("Material");
Material210.diffuseColor = new SFColor(new float[1,0.75,0.75]);
Material210.transparency = 0.5;
Appearance209.material = Material210;

Shape208.appearance = Appearance209;

IndexedFaceSet IndexedFaceSet211 = createNode("IndexedFaceSet");
IndexedFaceSet211.coordIndex = new MFInt32(new int[172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
Coordinate Coordinate212 = createNode("Coordinate");
Coordinate212.USE = "SKINCOORD";
IndexedFaceSet211.coord = Coordinate212;

Shape208.geometry = IndexedFaceSet211;

Group192.children[3] = Shape208;

Shape Shape213 = createNode("Shape");
Shape213.DEF = "SkinLines";
Appearance Appearance214 = createNode("Appearance");
Material Material215 = createNode("Material");
Material215.diffuseColor = new SFColor(new float[0,0,0]);
Appearance214.material = Material215;

Shape213.appearance = Appearance214;

IndexedLineSet IndexedLineSet216 = createNode("IndexedLineSet");
IndexedLineSet216.coordIndex = new MFInt32(new int[0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
Coordinate Coordinate217 = createNode("Coordinate");
Coordinate217.USE = "SKINCOORD";
IndexedLineSet216.coord = Coordinate217;

Shape213.geometry = IndexedLineSet216;

Group192.children[4] = Shape213;

HAnimHumanoid61.skin[41] = Group192;

children[3] = HAnimHumanoid61;

ProtoInstance ProtoInstance218 = createNode("ProtoInstance");
ProtoInstance218.DEF = "ANIMATOR";
ProtoInstance218.name = "LOA1_WalkAnimation";
children[4] = ProtoInstance218;

Script Script219 = createNode("Script");
Script219.DEF = "ENGINE";
Script219.url = new MFString(new java.lang.String["BoxMan.js","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan.js"]);
Script219.directOutput = True;
field field220 = createNode("field");
field220.accessType = "inputOnly";
field220.type = "SFRotation";
field220.name = "update";
Script219.field = new MFNode();

Script219.field[0] = field220;

field field221 = createNode("field");
field221.accessType = "initializeOnly";
field221.type = "SFNode";
field221.name = "humanoid";
HAnimHumanoid HAnimHumanoid222 = createNode("HAnimHumanoid");
HAnimHumanoid222.USE = "boxman_Humanoid";
field221.children = new MFNode();

field221.children[0] = HAnimHumanoid222;

Script219.field[1] = field221;

field field223 = createNode("field");
field223.accessType = "initializeOnly";
field223.type = "MFVec3f";
field223.name = "coordList";
Script219.field[2] = field223;

field field224 = createNode("field");
field224.accessType = "initializeOnly";
field224.type = "SFNode";
field224.name = "joint";
Script219.field[3] = field224;

field field225 = createNode("field");
field225.accessType = "initializeOnly";
field225.type = "SFVec3f";
field225.name = "translation";
Script219.field[4] = field225;

field field226 = createNode("field");
field226.accessType = "initializeOnly";
field226.type = "SFRotation";
field226.name = "rotation";
Script219.field[5] = field226;

field field227 = createNode("field");
field227.accessType = "initializeOnly";
field227.type = "SFVec3f";
field227.name = "scale";
field227.value = "1 1 1";
Script219.field[6] = field227;

children[5] = Script219;

ROUTE ROUTE228 = createNode("ROUTE");
ROUTE228.fromNode = "ANIMATOR";
ROUTE228.fromField = "HumanoidRoot_translation_changed";
ROUTE228.toNode = "boxman_humanoid_root";
ROUTE228.toField = "set_translation";
children[6] = ROUTE228;

ROUTE ROUTE229 = createNode("ROUTE");
ROUTE229.fromNode = "ANIMATOR";
ROUTE229.fromField = "HumanoidRoot_rotation_changed";
ROUTE229.toNode = "boxman_humanoid_root";
ROUTE229.toField = "set_rotation";
children[7] = ROUTE229;

ROUTE ROUTE230 = createNode("ROUTE");
ROUTE230.fromNode = "ANIMATOR";
ROUTE230.fromField = "l_hip_rotation_changed";
ROUTE230.toNode = "boxman_l_hip";
ROUTE230.toField = "set_rotation";
children[8] = ROUTE230;

ROUTE ROUTE231 = createNode("ROUTE");
ROUTE231.fromNode = "ANIMATOR";
ROUTE231.fromField = "l_knee_rotation_changed";
ROUTE231.toNode = "boxman_l_knee";
ROUTE231.toField = "set_rotation";
children[9] = ROUTE231;

ROUTE ROUTE232 = createNode("ROUTE");
ROUTE232.fromNode = "ANIMATOR";
ROUTE232.fromField = "l_ankle_rotation_changed";
ROUTE232.toNode = "boxman_l_ankle";
ROUTE232.toField = "set_rotation";
children[10] = ROUTE232;

ROUTE ROUTE233 = createNode("ROUTE");
ROUTE233.fromNode = "ANIMATOR";
ROUTE233.fromField = "l_midtarsal_rotation_changed";
ROUTE233.toNode = "boxman_l_midtarsal";
ROUTE233.toField = "set_rotation";
children[11] = ROUTE233;

ROUTE ROUTE234 = createNode("ROUTE");
ROUTE234.fromNode = "ANIMATOR";
ROUTE234.fromField = "r_hip_rotation_changed";
ROUTE234.toNode = "boxman_r_hip";
ROUTE234.toField = "set_rotation";
children[12] = ROUTE234;

ROUTE ROUTE235 = createNode("ROUTE");
ROUTE235.fromNode = "ANIMATOR";
ROUTE235.fromField = "r_knee_rotation_changed";
ROUTE235.toNode = "boxman_r_knee";
ROUTE235.toField = "set_rotation";
children[13] = ROUTE235;

ROUTE ROUTE236 = createNode("ROUTE");
ROUTE236.fromNode = "ANIMATOR";
ROUTE236.fromField = "r_ankle_rotation_changed";
ROUTE236.toNode = "boxman_r_ankle";
ROUTE236.toField = "set_rotation";
children[14] = ROUTE236;

ROUTE ROUTE237 = createNode("ROUTE");
ROUTE237.fromNode = "ANIMATOR";
ROUTE237.fromField = "r_midtarsal_rotation_changed";
ROUTE237.toNode = "boxman_r_midtarsal";
ROUTE237.toField = "set_rotation";
children[15] = ROUTE237;

ROUTE ROUTE238 = createNode("ROUTE");
ROUTE238.fromNode = "ANIMATOR";
ROUTE238.fromField = "vl5_rotation_changed";
ROUTE238.toNode = "boxman_vl5";
ROUTE238.toField = "set_rotation";
children[16] = ROUTE238;

ROUTE ROUTE239 = createNode("ROUTE");
ROUTE239.fromNode = "ANIMATOR";
ROUTE239.fromField = "skullbase_rotation_changed";
ROUTE239.toNode = "boxman_skullbase";
ROUTE239.toField = "set_rotation";
children[17] = ROUTE239;

ROUTE ROUTE240 = createNode("ROUTE");
ROUTE240.fromNode = "ANIMATOR";
ROUTE240.fromField = "l_shoulder_rotation_changed";
ROUTE240.toNode = "boxman_l_shoulder";
ROUTE240.toField = "set_rotation";
children[18] = ROUTE240;

ROUTE ROUTE241 = createNode("ROUTE");
ROUTE241.fromNode = "ANIMATOR";
ROUTE241.fromField = "l_elbow_rotation_changed";
ROUTE241.toNode = "boxman_l_elbow";
ROUTE241.toField = "set_rotation";
children[19] = ROUTE241;

ROUTE ROUTE242 = createNode("ROUTE");
ROUTE242.fromNode = "ANIMATOR";
ROUTE242.fromField = "l_wrist_rotation_changed";
ROUTE242.toNode = "boxman_l_wrist";
ROUTE242.toField = "set_rotation";
children[20] = ROUTE242;

ROUTE ROUTE243 = createNode("ROUTE");
ROUTE243.fromNode = "ANIMATOR";
ROUTE243.fromField = "r_shoulder_rotation_changed";
ROUTE243.toNode = "boxman_r_shoulder";
ROUTE243.toField = "set_rotation";
children[21] = ROUTE243;

ROUTE ROUTE244 = createNode("ROUTE");
ROUTE244.fromNode = "ANIMATOR";
ROUTE244.fromField = "r_elbow_rotation_changed";
ROUTE244.toNode = "boxman_r_elbow";
ROUTE244.toField = "set_rotation";
children[22] = ROUTE244;

ROUTE ROUTE245 = createNode("ROUTE");
ROUTE245.fromNode = "ANIMATOR";
ROUTE245.fromField = "r_wrist_rotation_changed";
ROUTE245.toNode = "boxman_r_wrist";
ROUTE245.toField = "set_rotation";
children[23] = ROUTE245;

}

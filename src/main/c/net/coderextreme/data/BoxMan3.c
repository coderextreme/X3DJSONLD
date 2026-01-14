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
meta3.content = "BoxMan3.x3d";
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
meta9.content = "Tue, 09 Sep 2025 19:37:50 GMT";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "error";
meta10.content = "Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "http://HAnim.org";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "originals/boxman.wrl";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "BoxMan3.js";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "BoxManAnimationPanel.x3d";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "reference";
meta15.content = "http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "reference";
meta16.content = "http://www.vapourtech.com/team/james/boxman.wrl";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "reference";
meta17.content = "http://HAnim.org/Specifications/HAnim2001";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "reference";
meta18.content = "http://HAnim.org/Models";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "reference";
meta19.content = "http://HAnim.org/Nodes";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "reference";
meta20.content = "https://www.web3d.org/x3d/content/X3dToVrml97.xslt";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "reference";
meta21.content = "http://www.vapourtech.com";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "warning";
meta22.content = "Skin mesh is split across multiple shapes within a Group, should that be allowed?";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "TODO";
meta23.content = "What does the original animation script accomplish? It is not hooked up, script source contains errors...";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "TODO";
meta24.content = "InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "Image";
meta25.content = "BoxManViewInclined.png";
head1.meta[23] = meta25;

meta meta26 = createNode("meta");
meta26.name = "Image";
meta26.content = "BoxManViewFront.png";
head1.meta[24] = meta26;

meta meta27 = createNode("meta");
meta27.name = "Image";
meta27.content = "BoxManViewRight.png";
head1.meta[25] = meta27;

meta meta28 = createNode("meta");
meta28.name = "Image";
meta28.content = "BoxManViewLeft.png";
head1.meta[26] = meta28;

meta meta29 = createNode("meta");
meta29.name = "Image";
meta29.content = "BoxManViewTop.png";
head1.meta[27] = meta29;

meta meta30 = createNode("meta");
meta30.name = "rights";
meta30.content = "(C) 2000 James Smith - james@vapourtech.com";
head1.meta[28] = meta30;

meta meta31 = createNode("meta");
meta31.name = "subject";
meta31.content = "BoxMan HAnim 2.0";
head1.meta[29] = meta31;

meta meta32 = createNode("meta");
meta32.name = "identifier";
meta32.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan3.x3d";
head1.meta[30] = meta32;

head = head1;

ExternProtoDeclare ExternProtoDeclare34 = createNode("ExternProtoDeclare");
ExternProtoDeclare34.name = "LOA1_WalkAnimation";
ExternProtoDeclare34.url = new MFString(new java.lang.String["../Prototypes/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation","../Prototypes/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation"]);
field field35 = createNode("field");
field35.accessType = "inputOutput";
field35.type = "SFTime";
field35.name = "cycleInterval";
ExternProtoDeclare34.field = new MFNode();

ExternProtoDeclare34.field[0] = field35;

field field36 = createNode("field");
field36.accessType = "inputOutput";
field36.type = "SFBool";
field36.name = "enabled";
ExternProtoDeclare34.field[1] = field36;

field field37 = createNode("field");
field37.accessType = "inputOutput";
field37.type = "SFBool";
field37.name = "loop";
ExternProtoDeclare34.field[2] = field37;

field field38 = createNode("field");
field38.accessType = "inputOutput";
field38.type = "SFTime";
field38.name = "startTime";
ExternProtoDeclare34.field[3] = field38;

field field39 = createNode("field");
field39.accessType = "inputOutput";
field39.type = "SFTime";
field39.name = "stopTime";
ExternProtoDeclare34.field[4] = field39;

field field40 = createNode("field");
field40.accessType = "outputOnly";
field40.type = "SFFloat";
field40.name = "fraction_changed";
ExternProtoDeclare34.field[5] = field40;

field field41 = createNode("field");
field41.accessType = "outputOnly";
field41.type = "SFVec3f";
field41.name = "HumanoidRoot_translation_changed";
ExternProtoDeclare34.field[6] = field41;

field field42 = createNode("field");
field42.accessType = "outputOnly";
field42.type = "SFRotation";
field42.name = "HumanoidRoot_rotation_changed";
ExternProtoDeclare34.field[7] = field42;

field field43 = createNode("field");
field43.accessType = "outputOnly";
field43.type = "SFRotation";
field43.name = "l_hip_rotation_changed";
ExternProtoDeclare34.field[8] = field43;

field field44 = createNode("field");
field44.accessType = "outputOnly";
field44.type = "SFRotation";
field44.name = "l_knee_rotation_changed";
ExternProtoDeclare34.field[9] = field44;

field field45 = createNode("field");
field45.accessType = "outputOnly";
field45.type = "SFRotation";
field45.name = "l_ankle_rotation_changed";
ExternProtoDeclare34.field[10] = field45;

field field46 = createNode("field");
field46.accessType = "outputOnly";
field46.type = "SFRotation";
field46.name = "l_midtarsal_rotation_changed";
ExternProtoDeclare34.field[11] = field46;

field field47 = createNode("field");
field47.accessType = "outputOnly";
field47.type = "SFRotation";
field47.name = "r_hip_rotation_changed";
ExternProtoDeclare34.field[12] = field47;

field field48 = createNode("field");
field48.accessType = "outputOnly";
field48.type = "SFRotation";
field48.name = "r_knee_rotation_changed";
ExternProtoDeclare34.field[13] = field48;

field field49 = createNode("field");
field49.accessType = "outputOnly";
field49.type = "SFRotation";
field49.name = "r_ankle_rotation_changed";
ExternProtoDeclare34.field[14] = field49;

field field50 = createNode("field");
field50.accessType = "outputOnly";
field50.type = "SFRotation";
field50.name = "r_midtarsal_rotation_changed";
ExternProtoDeclare34.field[15] = field50;

field field51 = createNode("field");
field51.accessType = "outputOnly";
field51.type = "SFRotation";
field51.name = "vl5_rotation_changed";
ExternProtoDeclare34.field[16] = field51;

field field52 = createNode("field");
field52.accessType = "outputOnly";
field52.type = "SFRotation";
field52.name = "skullbase_rotation_changed";
ExternProtoDeclare34.field[17] = field52;

field field53 = createNode("field");
field53.accessType = "outputOnly";
field53.type = "SFRotation";
field53.name = "l_shoulder_rotation_changed";
ExternProtoDeclare34.field[18] = field53;

field field54 = createNode("field");
field54.accessType = "outputOnly";
field54.type = "SFRotation";
field54.name = "l_elbow_rotation_changed";
ExternProtoDeclare34.field[19] = field54;

field field55 = createNode("field");
field55.accessType = "outputOnly";
field55.type = "SFRotation";
field55.name = "l_wrist_rotation_changed";
ExternProtoDeclare34.field[20] = field55;

field field56 = createNode("field");
field56.accessType = "outputOnly";
field56.type = "SFRotation";
field56.name = "r_shoulder_rotation_changed";
ExternProtoDeclare34.field[21] = field56;

field field57 = createNode("field");
field57.accessType = "outputOnly";
field57.type = "SFRotation";
field57.name = "r_elbow_rotation_changed";
ExternProtoDeclare34.field[22] = field57;

field field58 = createNode("field");
field58.accessType = "outputOnly";
field58.type = "SFRotation";
field58.name = "r_wrist_rotation_changed";
ExternProtoDeclare34.field[23] = field58;

field field59 = createNode("field");
field59.accessType = "outputOnly";
field59.type = "SFBool";
field59.name = "isActive";
ExternProtoDeclare34.field[24] = field59;

field field60 = createNode("field");
field60.accessType = "outputOnly";
field60.type = "SFRotation";
field60.name = "lower_body_rotation_changed";
ExternProtoDeclare34.field[25] = field60;

children = new MFNode();

children[0] = ExternProtoDeclare34;

WorldInfo WorldInfo61 = createNode("WorldInfo");
WorldInfo61.title = "BoxMan3 - A Seamless VRML Human";
WorldInfo61.info = new MFString(new java.lang.String["(C) 2000 James Smith - james@vapourtech.com","http://www.vapourtech.com/team/james/boxman.wrl","Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com"]);
children[1] = WorldInfo61;

Background Background62 = createNode("Background");
Background62.skyColor = new MFColor(new float[0.75,0.75,0.75]);
Background62.groundColor = new MFColor(new float[0.6,0.6,0.6]);
children[2] = Background62;

HAnimHumanoid HAnimHumanoid63 = createNode("HAnimHumanoid");
HAnimHumanoid63.DEF = "boxman_Humanoid";
HAnimHumanoid63.name = "Humanoid";
HAnimHumanoid63.info = new MFString(new java.lang.String["authorName=James Smith","authorEmail=james@vapourtech.com","copyright=(C) 2000 James Smith - james@vapourtech.com","humanoidVersion=1.0"]);
HAnimHumanoid63.version = "1.0";
HAnimJoint HAnimJoint64 = createNode("HAnimJoint");
HAnimJoint64.DEF = "boxman_humanoid_root";
HAnimJoint64.name = "humanoid_root";
HAnimJoint64.center = new SFVec3f(new float[0,0.9723,-0.0728]);
HAnimJoint64.skinCoordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9,10,11]);
HAnimJoint64.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment65 = createNode("HAnimSegment");
HAnimSegment65.DEF = "boxman_sacrum";
HAnimSegment65.name = "sacrum";
Transform Transform66 = createNode("Transform");
Transform66.translation = new SFVec3f(new float[0,0.9723,-0.0728]);
Shape Shape67 = createNode("Shape");
Shape67.DEF = "SphereYellow";
Appearance Appearance68 = createNode("Appearance");
Material Material69 = createNode("Material");
Material69.diffuseColor = new SFColor(new float[1,1,0]);
Appearance68.material = Material69;

Shape67.appearance = Appearance68;

Sphere Sphere70 = createNode("Sphere");
Sphere70.radius = 0.02;
Shape67.geometry = Sphere70;

Transform66.child = new undefined();

Transform66.child[0] = Shape67;

HAnimSegment65.children = new MFNode();

HAnimSegment65.children[0] = Transform66;

HAnimJoint64.children = new MFNode();

HAnimJoint64.children[0] = HAnimSegment65;

HAnimJoint HAnimJoint71 = createNode("HAnimJoint");
HAnimJoint71.DEF = "boxman_l_hip";
HAnimJoint71.name = "l_hip";
HAnimJoint71.center = new SFVec3f(new float[0.0956,0.9364,0]);
HAnimJoint71.skinCoordIndex = new MFInt32(new int[12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43]);
HAnimJoint71.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
HAnimSegment HAnimSegment72 = createNode("HAnimSegment");
HAnimSegment72.DEF = "boxman_l_thigh";
HAnimSegment72.name = "l_thigh";
Transform Transform73 = createNode("Transform");
Transform73.translation = new SFVec3f(new float[0.0956,0.9364,0]);
Shape Shape74 = createNode("Shape");
Shape74.USE = "SphereYellow";
Transform73.child = new undefined();

Transform73.child[0] = Shape74;

HAnimSegment72.children = new MFNode();

HAnimSegment72.children[0] = Transform73;

HAnimJoint71.children = new MFNode();

HAnimJoint71.children[0] = HAnimSegment72;

HAnimJoint HAnimJoint75 = createNode("HAnimJoint");
HAnimJoint75.DEF = "boxman_l_knee";
HAnimJoint75.name = "l_knee";
HAnimJoint75.center = new SFVec3f(new float[0.0956,0.5095,-0.0036]);
HAnimJoint75.skinCoordIndex = new MFInt32(new int[36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63]);
HAnimJoint75.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment76 = createNode("HAnimSegment");
HAnimSegment76.DEF = "boxman_l_calf";
HAnimSegment76.name = "l_calf";
Transform Transform77 = createNode("Transform");
Transform77.translation = new SFVec3f(new float[0.0956,0.5095,-0.0036]);
Shape Shape78 = createNode("Shape");
Shape78.USE = "SphereYellow";
Transform77.child = new undefined();

Transform77.child[0] = Shape78;

HAnimSegment76.children = new MFNode();

HAnimSegment76.children[0] = Transform77;

HAnimJoint75.children = new MFNode();

HAnimJoint75.children[0] = HAnimSegment76;

HAnimJoint HAnimJoint79 = createNode("HAnimJoint");
HAnimJoint79.DEF = "boxman_l_ankle";
HAnimJoint79.name = "l_ankle";
HAnimJoint79.center = new SFVec3f(new float[0.0946,0.0762,-0.0261]);
HAnimJoint79.skinCoordIndex = new MFInt32(new int[64,65,66,67,68,69,70,71]);
HAnimJoint79.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment80 = createNode("HAnimSegment");
HAnimSegment80.DEF = "boxman_l_hindfoot";
HAnimSegment80.name = "l_hindfoot";
Transform Transform81 = createNode("Transform");
Transform81.translation = new SFVec3f(new float[0.0946,0.0762,-0.0261]);
Shape Shape82 = createNode("Shape");
Shape82.USE = "SphereYellow";
Transform81.child = new undefined();

Transform81.child[0] = Shape82;

HAnimSegment80.children = new MFNode();

HAnimSegment80.children[0] = Transform81;

HAnimJoint79.children = new MFNode();

HAnimJoint79.children[0] = HAnimSegment80;

HAnimJoint HAnimJoint83 = createNode("HAnimJoint");
HAnimJoint83.DEF = "boxman_l_midtarsal";
HAnimJoint83.name = "l_midtarsal";
HAnimJoint83.center = new SFVec3f(new float[0.1079,0.0317,0.067]);
HAnimJoint83.skinCoordIndex = new MFInt32(new int[72,73,74,75,76,77,78,79]);
HAnimJoint83.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment84 = createNode("HAnimSegment");
HAnimSegment84.DEF = "boxman_l_middistal";
HAnimSegment84.name = "l_middistal";
Transform Transform85 = createNode("Transform");
Transform85.translation = new SFVec3f(new float[0.1079,0.0317,0.067]);
Shape Shape86 = createNode("Shape");
Shape86.USE = "SphereYellow";
Transform85.child = new undefined();

Transform85.child[0] = Shape86;

HAnimSegment84.children = new MFNode();

HAnimSegment84.children[0] = Transform85;

HAnimSite HAnimSite87 = createNode("HAnimSite");
HAnimSite87.DEF = "boxman_l_middistal_tip";
HAnimSite87.name = "l_middistal_tip";
HAnimSite87.translation = new SFVec3f(new float[0.095,0.0005,0.1924]);
Shape Shape88 = createNode("Shape");
Shape88.DEF = "SphereRed";
Appearance Appearance89 = createNode("Appearance");
Material Material90 = createNode("Material");
Material90.diffuseColor = new SFColor(new float[1,0,0]);
Appearance89.material = Material90;

Shape88.appearance = Appearance89;

Sphere Sphere91 = createNode("Sphere");
Sphere91.radius = 0.02;
Shape88.geometry = Sphere91;

HAnimSite87.children = new MFNode();

HAnimSite87.children[0] = Shape88;

HAnimSegment84.children[1] = HAnimSite87;

HAnimJoint83.children = new MFNode();

HAnimJoint83.children[0] = HAnimSegment84;

HAnimJoint79.children[1] = HAnimJoint83;

HAnimJoint75.children[1] = HAnimJoint79;

HAnimJoint71.children[1] = HAnimJoint75;

HAnimJoint64.children[1] = HAnimJoint71;

HAnimJoint HAnimJoint92 = createNode("HAnimJoint");
HAnimJoint92.DEF = "boxman_r_hip";
HAnimJoint92.name = "r_hip";
HAnimJoint92.center = new SFVec3f(new float[-0.0956,0.9364,0]);
HAnimJoint92.skinCoordIndex = new MFInt32(new int[80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111]);
HAnimJoint92.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
HAnimSegment HAnimSegment93 = createNode("HAnimSegment");
HAnimSegment93.DEF = "boxman_r_thigh";
HAnimSegment93.name = "r_thigh";
Transform Transform94 = createNode("Transform");
Transform94.translation = new SFVec3f(new float[-0.0956,0.9364,0]);
Shape Shape95 = createNode("Shape");
Shape95.USE = "SphereYellow";
Transform94.child = new undefined();

Transform94.child[0] = Shape95;

HAnimSegment93.children = new MFNode();

HAnimSegment93.children[0] = Transform94;

HAnimJoint92.children = new MFNode();

HAnimJoint92.children[0] = HAnimSegment93;

HAnimJoint HAnimJoint96 = createNode("HAnimJoint");
HAnimJoint96.DEF = "boxman_r_knee";
HAnimJoint96.name = "r_knee";
HAnimJoint96.center = new SFVec3f(new float[-0.0956,0.5095,-0.0036]);
HAnimJoint96.skinCoordIndex = new MFInt32(new int[104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131]);
HAnimJoint96.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment97 = createNode("HAnimSegment");
HAnimSegment97.DEF = "boxman_r_calf";
HAnimSegment97.name = "r_calf";
Transform Transform98 = createNode("Transform");
Transform98.translation = new SFVec3f(new float[-0.0956,0.5095,-0.0036]);
Shape Shape99 = createNode("Shape");
Shape99.USE = "SphereYellow";
Transform98.child = new undefined();

Transform98.child[0] = Shape99;

HAnimSegment97.children = new MFNode();

HAnimSegment97.children[0] = Transform98;

HAnimJoint96.children = new MFNode();

HAnimJoint96.children[0] = HAnimSegment97;

HAnimJoint HAnimJoint100 = createNode("HAnimJoint");
HAnimJoint100.DEF = "boxman_r_ankle";
HAnimJoint100.name = "r_ankle";
HAnimJoint100.center = new SFVec3f(new float[-0.0946,0.0762,-0.0261]);
HAnimJoint100.skinCoordIndex = new MFInt32(new int[132,133,134,135,136,137,138,139]);
HAnimJoint100.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment101 = createNode("HAnimSegment");
HAnimSegment101.DEF = "boxman_r_hindfoot";
HAnimSegment101.name = "r_hindfoot";
Transform Transform102 = createNode("Transform");
Transform102.translation = new SFVec3f(new float[-0.0946,0.0762,-0.0261]);
Shape Shape103 = createNode("Shape");
Shape103.USE = "SphereYellow";
Transform102.child = new undefined();

Transform102.child[0] = Shape103;

HAnimSegment101.children = new MFNode();

HAnimSegment101.children[0] = Transform102;

HAnimJoint100.children = new MFNode();

HAnimJoint100.children[0] = HAnimSegment101;

HAnimJoint HAnimJoint104 = createNode("HAnimJoint");
HAnimJoint104.DEF = "boxman_r_midtarsal";
HAnimJoint104.name = "r_midtarsal";
HAnimJoint104.center = new SFVec3f(new float[-0.1079,0.0317,0.067]);
HAnimJoint104.skinCoordIndex = new MFInt32(new int[140,141,142,143,144,145,146,147]);
HAnimJoint104.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment105 = createNode("HAnimSegment");
HAnimSegment105.DEF = "boxman_r_middistal";
HAnimSegment105.name = "r_middistal";
Transform Transform106 = createNode("Transform");
Transform106.translation = new SFVec3f(new float[-0.1079,0.0317,0.067]);
Shape Shape107 = createNode("Shape");
Shape107.USE = "SphereYellow";
Transform106.child = new undefined();

Transform106.child[0] = Shape107;

HAnimSegment105.children = new MFNode();

HAnimSegment105.children[0] = Transform106;

HAnimSite HAnimSite108 = createNode("HAnimSite");
HAnimSite108.DEF = "boxman_r_middistal_tip";
HAnimSite108.name = "r_middistal_tip";
HAnimSite108.translation = new SFVec3f(new float[-0.095,0.0005,0.1924]);
Shape Shape109 = createNode("Shape");
Shape109.USE = "SphereRed";
HAnimSite108.children = new MFNode();

HAnimSite108.children[0] = Shape109;

HAnimSegment105.children[1] = HAnimSite108;

HAnimJoint104.children = new MFNode();

HAnimJoint104.children[0] = HAnimSegment105;

HAnimJoint100.children[1] = HAnimJoint104;

HAnimJoint96.children[1] = HAnimJoint100;

HAnimJoint92.children[1] = HAnimJoint96;

HAnimJoint64.children[2] = HAnimJoint92;

HAnimJoint HAnimJoint110 = createNode("HAnimJoint");
HAnimJoint110.DEF = "boxman_vl5";
HAnimJoint110.name = "vl5";
HAnimJoint110.center = new SFVec3f(new float[0,1.0817,-0.0728]);
HAnimJoint110.skinCoordIndex = new MFInt32(new int[148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167]);
HAnimJoint110.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment111 = createNode("HAnimSegment");
HAnimSegment111.DEF = "boxman_l5";
HAnimSegment111.name = "l5";
Transform Transform112 = createNode("Transform");
Transform112.translation = new SFVec3f(new float[0,1.0817,-0.0728]);
Shape Shape113 = createNode("Shape");
Shape113.USE = "SphereYellow";
Transform112.child = new undefined();

Transform112.child[0] = Shape113;

HAnimSegment111.children = new MFNode();

HAnimSegment111.children[0] = Transform112;

HAnimJoint110.children = new MFNode();

HAnimJoint110.children[0] = HAnimSegment111;

HAnimJoint HAnimJoint114 = createNode("HAnimJoint");
HAnimJoint114.DEF = "boxman_skullbase";
HAnimJoint114.name = "skullbase";
HAnimJoint114.center = new SFVec3f(new float[0,1.644,0.036]);
HAnimJoint114.skinCoordIndex = new MFInt32(new int[168,169,170,171,172,173,174,175]);
HAnimJoint114.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment115 = createNode("HAnimSegment");
HAnimSegment115.DEF = "boxman_skull";
HAnimSegment115.name = "skull";
Transform Transform116 = createNode("Transform");
Transform116.translation = new SFVec3f(new float[0,1.644,0.036]);
Shape Shape117 = createNode("Shape");
Shape117.USE = "SphereYellow";
Transform116.child = new undefined();

Transform116.child[0] = Shape117;

HAnimSegment115.children = new MFNode();

HAnimSegment115.children[0] = Transform116;

HAnimSite HAnimSite118 = createNode("HAnimSite");
HAnimSite118.DEF = "boxman_skull_tip";
HAnimSite118.name = "skull_tip";
HAnimSite118.translation = new SFVec3f(new float[-0.0029,1.7771,0.0274]);
Shape Shape119 = createNode("Shape");
Shape119.USE = "SphereYellow";
HAnimSite118.children = new MFNode();

HAnimSite118.children[0] = Shape119;

HAnimSegment115.children[1] = HAnimSite118;

HAnimJoint114.children = new MFNode();

HAnimJoint114.children[0] = HAnimSegment115;

HAnimJoint110.children[1] = HAnimJoint114;

HAnimJoint HAnimJoint120 = createNode("HAnimJoint");
HAnimJoint120.DEF = "boxman_l_shoulder";
HAnimJoint120.name = "l_shoulder";
HAnimJoint120.center = new SFVec3f(new float[0.1968,1.4642,-0.0265]);
HAnimJoint120.skinCoordIndex = new MFInt32(new int[176,177,178,179,180,181,182,183]);
HAnimJoint120.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment121 = createNode("HAnimSegment");
HAnimSegment121.DEF = "boxman_l_upperarm";
HAnimSegment121.name = "l_upperarm";
Transform Transform122 = createNode("Transform");
Transform122.translation = new SFVec3f(new float[0.1968,1.4642,-0.0265]);
Shape Shape123 = createNode("Shape");
Shape123.USE = "SphereYellow";
Transform122.child = new undefined();

Transform122.child[0] = Shape123;

HAnimSegment121.children = new MFNode();

HAnimSegment121.children[0] = Transform122;

HAnimJoint120.children = new MFNode();

HAnimJoint120.children[0] = HAnimSegment121;

HAnimJoint HAnimJoint124 = createNode("HAnimJoint");
HAnimJoint124.DEF = "boxman_l_elbow";
HAnimJoint124.name = "l_elbow";
HAnimJoint124.center = new SFVec3f(new float[0.1982,1.1622,-0.0557]);
HAnimJoint124.skinCoordIndex = new MFInt32(new int[184,185,186,187,188,189,190,191]);
HAnimJoint124.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment125 = createNode("HAnimSegment");
HAnimSegment125.DEF = "boxman_l_forearm";
HAnimSegment125.name = "l_forearm";
Transform Transform126 = createNode("Transform");
Transform126.translation = new SFVec3f(new float[0.1982,1.1622,-0.0557]);
Shape Shape127 = createNode("Shape");
Shape127.USE = "SphereYellow";
Transform126.child = new undefined();

Transform126.child[0] = Shape127;

HAnimSegment125.children = new MFNode();

HAnimSegment125.children[0] = Transform126;

HAnimJoint124.children = new MFNode();

HAnimJoint124.children[0] = HAnimSegment125;

HAnimJoint HAnimJoint128 = createNode("HAnimJoint");
HAnimJoint128.DEF = "boxman_l_wrist";
HAnimJoint128.name = "l_wrist";
HAnimJoint128.center = new SFVec3f(new float[0.1972,0.8929,-0.069]);
HAnimJoint128.skinCoordIndex = new MFInt32(new int[192,193,194,195,196,197,198,199]);
HAnimJoint128.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment129 = createNode("HAnimSegment");
HAnimSegment129.DEF = "boxman_l_hand";
HAnimSegment129.name = "l_hand";
Transform Transform130 = createNode("Transform");
Transform130.translation = new SFVec3f(new float[0.1972,0.8929,-0.069]);
Shape Shape131 = createNode("Shape");
Shape131.USE = "SphereYellow";
Transform130.child = new undefined();

Transform130.child[0] = Shape131;

HAnimSegment129.children = new MFNode();

HAnimSegment129.children[0] = Transform130;

HAnimSite HAnimSite132 = createNode("HAnimSite");
HAnimSite132.DEF = "boxman_l_hand_tip";
HAnimSite132.name = "l_hand_tip";
HAnimSite132.translation = new SFVec3f(new float[0.1912,0.6976,-0.071]);
Shape Shape133 = createNode("Shape");
Shape133.USE = "SphereRed";
HAnimSite132.children = new MFNode();

HAnimSite132.children[0] = Shape133;

HAnimSegment129.children[1] = HAnimSite132;

HAnimJoint128.children = new MFNode();

HAnimJoint128.children[0] = HAnimSegment129;

HAnimJoint124.children[1] = HAnimJoint128;

HAnimJoint120.children[1] = HAnimJoint124;

HAnimJoint110.children[2] = HAnimJoint120;

HAnimJoint HAnimJoint134 = createNode("HAnimJoint");
HAnimJoint134.DEF = "boxman_r_shoulder";
HAnimJoint134.name = "r_shoulder";
HAnimJoint134.center = new SFVec3f(new float[-0.1968,1.4642,-0.0265]);
HAnimJoint134.skinCoordIndex = new MFInt32(new int[200,201,202,203,204,205,206,207]);
HAnimJoint134.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment135 = createNode("HAnimSegment");
HAnimSegment135.DEF = "boxman_r_upperarm";
HAnimSegment135.name = "r_upperarm";
Transform Transform136 = createNode("Transform");
Transform136.translation = new SFVec3f(new float[-0.1968,1.4642,-0.0265]);
Shape Shape137 = createNode("Shape");
Shape137.USE = "SphereYellow";
Transform136.child = new undefined();

Transform136.child[0] = Shape137;

HAnimSegment135.children = new MFNode();

HAnimSegment135.children[0] = Transform136;

HAnimJoint134.children = new MFNode();

HAnimJoint134.children[0] = HAnimSegment135;

HAnimJoint HAnimJoint138 = createNode("HAnimJoint");
HAnimJoint138.DEF = "boxman_r_elbow";
HAnimJoint138.name = "r_elbow";
HAnimJoint138.center = new SFVec3f(new float[-0.1982,1.1622,-0.0557]);
HAnimJoint138.skinCoordIndex = new MFInt32(new int[208,209,210,211,212,213,214,215]);
HAnimJoint138.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment139 = createNode("HAnimSegment");
HAnimSegment139.DEF = "boxman_r_forearm";
HAnimSegment139.name = "r_forearm";
Transform Transform140 = createNode("Transform");
Transform140.translation = new SFVec3f(new float[-0.1982,1.1622,-0.0557]);
Shape Shape141 = createNode("Shape");
Shape141.USE = "SphereYellow";
Transform140.child = new undefined();

Transform140.child[0] = Shape141;

HAnimSegment139.children = new MFNode();

HAnimSegment139.children[0] = Transform140;

HAnimJoint138.children = new MFNode();

HAnimJoint138.children[0] = HAnimSegment139;

HAnimJoint HAnimJoint142 = createNode("HAnimJoint");
HAnimJoint142.DEF = "boxman_r_wrist";
HAnimJoint142.name = "r_wrist";
HAnimJoint142.center = new SFVec3f(new float[-0.1972,0.8929,-0.069]);
HAnimJoint142.skinCoordIndex = new MFInt32(new int[216,217,218,219,220,221,222,223]);
HAnimJoint142.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment143 = createNode("HAnimSegment");
HAnimSegment143.DEF = "boxman_r_hand";
HAnimSegment143.name = "r_hand";
Transform Transform144 = createNode("Transform");
Transform144.translation = new SFVec3f(new float[-0.1972,0.8929,-0.069]);
Shape Shape145 = createNode("Shape");
Shape145.USE = "SphereYellow";
Transform144.child = new undefined();

Transform144.child[0] = Shape145;

HAnimSegment143.children = new MFNode();

HAnimSegment143.children[0] = Transform144;

HAnimSite HAnimSite146 = createNode("HAnimSite");
HAnimSite146.DEF = "boxman_r_hand_tip";
HAnimSite146.name = "r_hand_tip";
HAnimSite146.translation = new SFVec3f(new float[-0.1912,0.6976,-0.071]);
Shape Shape147 = createNode("Shape");
Shape147.USE = "SphereRed";
HAnimSite146.children = new MFNode();

HAnimSite146.children[0] = Shape147;

HAnimSegment143.children[1] = HAnimSite146;

HAnimJoint142.children = new MFNode();

HAnimJoint142.children[0] = HAnimSegment143;

HAnimJoint138.children[1] = HAnimJoint142;

HAnimJoint134.children[1] = HAnimJoint138;

HAnimJoint110.children[3] = HAnimJoint134;

HAnimJoint64.children[3] = HAnimJoint110;

HAnimHumanoid63.joints = new MFNode();

HAnimHumanoid63.joints[0] = HAnimJoint64;

HAnimJoint HAnimJoint148 = createNode("HAnimJoint");
HAnimJoint148.USE = "boxman_humanoid_root";
HAnimHumanoid63.joints[1] = HAnimJoint148;

HAnimJoint HAnimJoint149 = createNode("HAnimJoint");
HAnimJoint149.USE = "boxman_skullbase";
HAnimHumanoid63.joints[2] = HAnimJoint149;

HAnimJoint HAnimJoint150 = createNode("HAnimJoint");
HAnimJoint150.USE = "boxman_vl5";
HAnimHumanoid63.joints[3] = HAnimJoint150;

HAnimJoint HAnimJoint151 = createNode("HAnimJoint");
HAnimJoint151.USE = "boxman_l_ankle";
HAnimHumanoid63.joints[4] = HAnimJoint151;

HAnimJoint HAnimJoint152 = createNode("HAnimJoint");
HAnimJoint152.USE = "boxman_r_ankle";
HAnimHumanoid63.joints[5] = HAnimJoint152;

HAnimJoint HAnimJoint153 = createNode("HAnimJoint");
HAnimJoint153.USE = "boxman_l_elbow";
HAnimHumanoid63.joints[6] = HAnimJoint153;

HAnimJoint HAnimJoint154 = createNode("HAnimJoint");
HAnimJoint154.USE = "boxman_r_elbow";
HAnimHumanoid63.joints[7] = HAnimJoint154;

HAnimJoint HAnimJoint155 = createNode("HAnimJoint");
HAnimJoint155.USE = "boxman_l_hip";
HAnimHumanoid63.joints[8] = HAnimJoint155;

HAnimJoint HAnimJoint156 = createNode("HAnimJoint");
HAnimJoint156.USE = "boxman_r_hip";
HAnimHumanoid63.joints[9] = HAnimJoint156;

HAnimJoint HAnimJoint157 = createNode("HAnimJoint");
HAnimJoint157.USE = "boxman_l_knee";
HAnimHumanoid63.joints[10] = HAnimJoint157;

HAnimJoint HAnimJoint158 = createNode("HAnimJoint");
HAnimJoint158.USE = "boxman_r_knee";
HAnimHumanoid63.joints[11] = HAnimJoint158;

HAnimJoint HAnimJoint159 = createNode("HAnimJoint");
HAnimJoint159.USE = "boxman_l_midtarsal";
HAnimHumanoid63.joints[12] = HAnimJoint159;

HAnimJoint HAnimJoint160 = createNode("HAnimJoint");
HAnimJoint160.USE = "boxman_r_midtarsal";
HAnimHumanoid63.joints[13] = HAnimJoint160;

HAnimJoint HAnimJoint161 = createNode("HAnimJoint");
HAnimJoint161.USE = "boxman_l_shoulder";
HAnimHumanoid63.joints[14] = HAnimJoint161;

HAnimJoint HAnimJoint162 = createNode("HAnimJoint");
HAnimJoint162.USE = "boxman_r_shoulder";
HAnimHumanoid63.joints[15] = HAnimJoint162;

HAnimJoint HAnimJoint163 = createNode("HAnimJoint");
HAnimJoint163.USE = "boxman_l_wrist";
HAnimHumanoid63.joints[16] = HAnimJoint163;

HAnimJoint HAnimJoint164 = createNode("HAnimJoint");
HAnimJoint164.USE = "boxman_r_wrist";
HAnimHumanoid63.joints[17] = HAnimJoint164;

HAnimSegment HAnimSegment165 = createNode("HAnimSegment");
HAnimSegment165.USE = "boxman_l5";
HAnimHumanoid63.segments[18] = HAnimSegment165;

HAnimSegment HAnimSegment166 = createNode("HAnimSegment");
HAnimSegment166.USE = "boxman_sacrum";
HAnimHumanoid63.segments[19] = HAnimSegment166;

HAnimSegment HAnimSegment167 = createNode("HAnimSegment");
HAnimSegment167.USE = "boxman_skull";
HAnimHumanoid63.segments[20] = HAnimSegment167;

HAnimSegment HAnimSegment168 = createNode("HAnimSegment");
HAnimSegment168.USE = "boxman_l_calf";
HAnimHumanoid63.segments[21] = HAnimSegment168;

HAnimSegment HAnimSegment169 = createNode("HAnimSegment");
HAnimSegment169.USE = "boxman_r_calf";
HAnimHumanoid63.segments[22] = HAnimSegment169;

HAnimSegment HAnimSegment170 = createNode("HAnimSegment");
HAnimSegment170.USE = "boxman_l_forearm";
HAnimHumanoid63.segments[23] = HAnimSegment170;

HAnimSegment HAnimSegment171 = createNode("HAnimSegment");
HAnimSegment171.USE = "boxman_r_forearm";
HAnimHumanoid63.segments[24] = HAnimSegment171;

HAnimSegment HAnimSegment172 = createNode("HAnimSegment");
HAnimSegment172.USE = "boxman_l_hand";
HAnimHumanoid63.segments[25] = HAnimSegment172;

HAnimSegment HAnimSegment173 = createNode("HAnimSegment");
HAnimSegment173.USE = "boxman_r_hand";
HAnimHumanoid63.segments[26] = HAnimSegment173;

HAnimSegment HAnimSegment174 = createNode("HAnimSegment");
HAnimSegment174.USE = "boxman_l_hindfoot";
HAnimHumanoid63.segments[27] = HAnimSegment174;

HAnimSegment HAnimSegment175 = createNode("HAnimSegment");
HAnimSegment175.USE = "boxman_r_hindfoot";
HAnimHumanoid63.segments[28] = HAnimSegment175;

HAnimSegment HAnimSegment176 = createNode("HAnimSegment");
HAnimSegment176.USE = "boxman_l_middistal";
HAnimHumanoid63.segments[29] = HAnimSegment176;

HAnimSegment HAnimSegment177 = createNode("HAnimSegment");
HAnimSegment177.USE = "boxman_r_middistal";
HAnimHumanoid63.segments[30] = HAnimSegment177;

HAnimSegment HAnimSegment178 = createNode("HAnimSegment");
HAnimSegment178.USE = "boxman_l_thigh";
HAnimHumanoid63.segments[31] = HAnimSegment178;

HAnimSegment HAnimSegment179 = createNode("HAnimSegment");
HAnimSegment179.USE = "boxman_r_thigh";
HAnimHumanoid63.segments[32] = HAnimSegment179;

HAnimSegment HAnimSegment180 = createNode("HAnimSegment");
HAnimSegment180.USE = "boxman_l_upperarm";
HAnimHumanoid63.segments[33] = HAnimSegment180;

HAnimSegment HAnimSegment181 = createNode("HAnimSegment");
HAnimSegment181.USE = "boxman_r_upperarm";
HAnimHumanoid63.segments[34] = HAnimSegment181;

HAnimSite HAnimSite182 = createNode("HAnimSite");
HAnimSite182.USE = "boxman_skull_tip";
HAnimHumanoid63.viewpoints[35] = HAnimSite182;

HAnimSite HAnimSite183 = createNode("HAnimSite");
HAnimSite183.USE = "boxman_l_hand_tip";
HAnimHumanoid63.viewpoints[36] = HAnimSite183;

HAnimSite HAnimSite184 = createNode("HAnimSite");
HAnimSite184.USE = "boxman_r_hand_tip";
HAnimHumanoid63.viewpoints[37] = HAnimSite184;

HAnimSite HAnimSite185 = createNode("HAnimSite");
HAnimSite185.USE = "boxman_l_middistal_tip";
HAnimHumanoid63.viewpoints[38] = HAnimSite185;

HAnimSite HAnimSite186 = createNode("HAnimSite");
HAnimSite186.USE = "boxman_r_middistal_tip";
HAnimHumanoid63.viewpoints[39] = HAnimSite186;

HAnimSite HAnimSite187 = createNode("HAnimSite");
HAnimSite187.DEF = "boxman_BoxMan_view";
HAnimSite187.name = "BoxMan_view";
Viewpoint Viewpoint188 = createNode("Viewpoint");
Viewpoint188.DEF = "Inclined_View";
Viewpoint188.description = "Inclined View";
Viewpoint188.position = new SFVec3f(new float[2,0.9,2]);
Viewpoint188.orientation = new SFRotation(new float[0,1,0,0.78]);
HAnimSite187.children = new MFNode();

HAnimSite187.children[0] = Viewpoint188;

Viewpoint Viewpoint189 = createNode("Viewpoint");
Viewpoint189.DEF = "Front_View";
Viewpoint189.description = "Front View";
Viewpoint189.position = new SFVec3f(new float[0,1,3]);
HAnimSite187.children[1] = Viewpoint189;

Viewpoint Viewpoint190 = createNode("Viewpoint");
Viewpoint190.DEF = "Right_View";
Viewpoint190.description = "Right-side View";
Viewpoint190.position = new SFVec3f(new float[-3,1,0]);
Viewpoint190.orientation = new SFRotation(new float[0,1,0,-1.57]);
HAnimSite187.children[2] = Viewpoint190;

Viewpoint Viewpoint191 = createNode("Viewpoint");
Viewpoint191.DEF = "Left_View";
Viewpoint191.description = "Left-side View";
Viewpoint191.position = new SFVec3f(new float[3,1,0]);
Viewpoint191.orientation = new SFRotation(new float[0,1,0,1.57]);
HAnimSite187.children[3] = Viewpoint191;

Viewpoint Viewpoint192 = createNode("Viewpoint");
Viewpoint192.DEF = "Top_View";
Viewpoint192.description = "Top View";
Viewpoint192.position = new SFVec3f(new float[0,3,0]);
Viewpoint192.orientation = new SFRotation(new float[1,0,0,-1.57]);
HAnimSite187.children[4] = Viewpoint192;

HAnimHumanoid63.viewpoints[40] = HAnimSite187;

Coordinate Coordinate193 = createNode("Coordinate");
Coordinate193.DEF = "SKINCOORD";
Coordinate193.point = new MFVec3f(new float[-0.05,1,0.05,0.05,1,0.05,0.03,0.97,-0.1,-0.03,0.97,-0.1,0.03,0.94,-0.075,-0.03,0.94,-0.075,0,0.92,0,0,0.94,0.03,-0.12,1.06,0.05,0.12,1.06,0.05,0.12,1.06,-0.1,-0.12,1.06,-0.1,0.0456,0.9364,0.05,0.1456,0.9364,0.05,0.1456,0.9364,-0.05,0.0456,0.9364,-0.05,0.0456,0.9,0.05,0.1456,0.9,0.05,0.1456,0.9,-0.05,0.0456,0.9,-0.05,0.0456,0.8,0.05,0.1456,0.8,0.05,0.1456,0.8,-0.05,0.0456,0.8,-0.05,0.0456,0.7,0.05,0.1456,0.7,0.05,0.1456,0.7,-0.05,0.0456,0.7,-0.05,0.0456,0.6,0.05,0.1456,0.6,0.05,0.1456,0.6,-0.05,0.0456,0.6,-0.05,0.0456,0.55,0.05,0.1456,0.55,0.05,0.1456,0.55,-0.05,0.0456,0.55,-0.05,0.0456,0.52,0.05,0.1456,0.52,0.05,0.1456,0.52,-0.05,0.0456,0.52,-0.05,0.0456,0.5,0.05,0.1456,0.5,0.05,0.1456,0.5,-0.05,0.0456,0.5,-0.05,0.0454,0.43,0.045,0.1454,0.43,0.045,0.1454,0.43,-0.055,0.0454,0.43,-0.055,0.0452,0.36,0.04,0.1452,0.36,0.04,0.1452,0.36,-0.06,0.0452,0.36,-0.06,0.045,0.29,0.035,0.145,0.29,0.035,0.145,0.29,-0.065,0.045,0.29,-0.065,0.0448,0.21,0.03,0.1448,0.21,0.03,0.1448,0.21,-0.07,0.0448,0.21,-0.07,0.0446,0.1262,0.025,0.1446,0.1262,0.025,0.1446,0.1262,-0.075,0.0446,0.1262,-0.075,0.0446,0.0762,0.025,0.1446,0.0762,0.025,0.1446,0,-0.075,0.0446,0,-0.075,0.0446,0.0562,0.057,0.1446,0.0562,0.057,0.1446,0,0.057,0.0446,0,0.057,0.0446,0.0562,0.087,0.1446,0.0562,0.087,0.1446,0,0.087,0.0446,0,0.087,0.0446,0.0562,0.1924,0.1446,0.0562,0.1924,0.1446,0,0.1924,0.0446,0,0.1924,-0.0456,0.9364,0.05,-0.1456,0.9364,0.05,-0.1456,0.9364,-0.05,-0.0456,0.9364,-0.05,-0.0456,0.9,0.05,-0.1456,0.9,0.05,-0.1456,0.9,-0.05,-0.0456,0.9,-0.05,-0.0456,0.8,0.05,-0.1456,0.8,0.05,-0.1456,0.8,-0.05,-0.0456,0.8,-0.05,-0.0456,0.7,0.05,-0.1456,0.7,0.05,-0.1456,0.7,-0.05,-0.0456,0.7,-0.05,-0.0456,0.6,0.05,-0.1456,0.6,0.05,-0.1456,0.6,-0.05,-0.0456,0.6,-0.05,-0.0456,0.55,0.05,-0.1456,0.55,0.05,-0.1456,0.55,-0.05,-0.0456,0.55,-0.05,-0.0456,0.52,0.05,-0.1456,0.52,0.05,-0.1456,0.52,-0.05,-0.0456,0.52,-0.05,-0.0456,0.5,0.05,-0.1456,0.5,0.05,-0.1456,0.5,-0.05,-0.0456,0.5,-0.05,-0.0454,0.43,0.045,-0.1454,0.43,0.045,-0.1454,0.43,-0.055,-0.0454,0.43,-0.055,-0.0452,0.36,0.04,-0.1452,0.36,0.04,-0.1452,0.36,-0.06,-0.0452,0.36,-0.06,-0.045,0.29,0.035,-0.145,0.29,0.035,-0.145,0.29,-0.065,-0.045,0.29,-0.065,-0.0448,0.21,0.03,-0.1448,0.21,0.03,-0.1448,0.21,-0.07,-0.0448,0.21,-0.07,-0.0446,0.1262,0.025,-0.1446,0.1262,0.025,-0.1446,0.1262,-0.075,-0.0446,0.1262,-0.075,-0.0446,0.0762,0.025,-0.1446,0.0762,0.025,-0.1446,0,-0.075,-0.0446,0,-0.075,-0.0446,0.0562,0.057,-0.1446,0.0562,0.057,-0.1446,0,0.057,-0.0446,0,0.057,-0.0446,0.0562,0.087,-0.1446,0.0562,0.087,-0.1446,0,0.087,-0.0446,0,0.087,-0.0446,0.0562,0.1924,-0.1446,0.0562,0.1924,-0.1446,0,0.1924,-0.0446,0,0.1924,-0.12,1.1,0.05,0.12,1.1,0.05,0.12,1.1,-0.1,-0.12,1.1,-0.1,-0.14,1.42,0.045,0.14,1.42,0.045,0.14,1.42,-0.09,-0.14,1.42,-0.09,-0.24,1.52,0.035,0.24,1.52,0.035,0.24,1.52,-0.09,-0.24,1.52,-0.09,-0.05,1.56,0.03,0.05,1.56,0.03,0.05,1.56,-0.06,-0.05,1.56,-0.06,-0.05,1.6,0.06,0.05,1.6,0.06,0.05,1.62,-0.03,-0.05,1.62,-0.03,-0.07,1.777,0.13,0.07,1.777,0.13,0.07,1.777,-0.03,-0.07,1.777,-0.03,-0.07,1.6,0.13,0.07,1.6,0.13,0.07,1.66,-0.03,-0.07,1.66,-0.03,0.16,1.42,0.015,0.24,1.5,0.015,0.24,1.5,-0.075,0.16,1.42,-0.075,0.17,1.18,-0.025,0.23,1.18,-0.025,0.23,1.18,-0.085,0.17,1.18,-0.085,0.17,1.14,-0.025,0.23,1.14,-0.025,0.23,1.14,-0.085,0.17,1.14,-0.085,0.18,0.91,-0.05,0.22,0.91,-0.05,0.22,0.91,-0.09,0.18,0.91,-0.09,0.18,0.87,-0.02,0.22,0.87,-0.02,0.22,0.87,-0.1,0.18,0.87,-0.1,0.18,0.6976,-0.02,0.22,0.6976,-0.02,0.22,0.6976,-0.1,0.18,0.6976,-0.1,-0.16,1.42,0.015,-0.24,1.5,0.015,-0.24,1.5,-0.075,-0.16,1.42,-0.075,-0.17,1.18,-0.025,-0.23,1.18,-0.025,-0.23,1.18,-0.085,-0.17,1.18,-0.085,-0.17,1.14,-0.025,-0.23,1.14,-0.025,-0.23,1.14,-0.085,-0.17,1.14,-0.085,-0.18,0.91,-0.05,-0.22,0.91,-0.05,-0.22,0.91,-0.09,-0.18,0.91,-0.09,-0.18,0.87,-0.02,-0.22,0.87,-0.02,-0.22,0.87,-0.1,-0.18,0.87,-0.1,-0.18,0.6976,-0.02,-0.22,0.6976,-0.02,-0.22,0.6976,-0.1,-0.18,0.6976,-0.1]);
HAnimHumanoid63.skinCoord = Coordinate193;

Group Group194 = createNode("Group");
Shape Shape195 = createNode("Shape");
Shape195.DEF = "TrouserSkin";
Appearance Appearance196 = createNode("Appearance");
Material Material197 = createNode("Material");
Material197.diffuseColor = new SFColor(new float[0,0,1]);
Material197.transparency = 0.5;
Appearance196.material = Material197;

Shape195.appearance = Appearance196;

IndexedFaceSet IndexedFaceSet198 = createNode("IndexedFaceSet");
IndexedFaceSet198.coordIndex = new MFInt32(new int[0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1]);
Coordinate Coordinate199 = createNode("Coordinate");
Coordinate199.USE = "SKINCOORD";
IndexedFaceSet198.coord = Coordinate199;

Shape195.geometry = IndexedFaceSet198;

Group194.children = new MFNode();

Group194.children[0] = Shape195;

Shape Shape200 = createNode("Shape");
Shape200.DEF = "ShoeSkin";
Appearance Appearance201 = createNode("Appearance");
Material Material202 = createNode("Material");
Material202.diffuseColor = new SFColor(new float[0,0,0]);
Material202.transparency = 0.5;
Appearance201.material = Material202;

Shape200.appearance = Appearance201;

IndexedFaceSet IndexedFaceSet203 = createNode("IndexedFaceSet");
IndexedFaceSet203.coordIndex = new MFInt32(new int[60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1]);
Coordinate Coordinate204 = createNode("Coordinate");
Coordinate204.USE = "SKINCOORD";
IndexedFaceSet203.coord = Coordinate204;

Shape200.geometry = IndexedFaceSet203;

Group194.children[1] = Shape200;

Shape Shape205 = createNode("Shape");
Shape205.DEF = "ShirtSkin";
Appearance Appearance206 = createNode("Appearance");
Material Material207 = createNode("Material");
Material207.diffuseColor = new SFColor(new float[1,1,0]);
Material207.transparency = 0.5;
Appearance206.material = Material207;

Shape205.appearance = Appearance206;

IndexedFaceSet IndexedFaceSet208 = createNode("IndexedFaceSet");
IndexedFaceSet208.coordIndex = new MFInt32(new int[148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1]);
Coordinate Coordinate209 = createNode("Coordinate");
Coordinate209.USE = "SKINCOORD";
IndexedFaceSet208.coord = Coordinate209;

Shape205.geometry = IndexedFaceSet208;

Group194.children[2] = Shape205;

Shape Shape210 = createNode("Shape");
Shape210.DEF = "HeadHandsFleshToneSkin";
Appearance Appearance211 = createNode("Appearance");
Material Material212 = createNode("Material");
Material212.diffuseColor = new SFColor(new float[1,0.75,0.75]);
Material212.transparency = 0.5;
Appearance211.material = Material212;

Shape210.appearance = Appearance211;

IndexedFaceSet IndexedFaceSet213 = createNode("IndexedFaceSet");
IndexedFaceSet213.coordIndex = new MFInt32(new int[172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
Coordinate Coordinate214 = createNode("Coordinate");
Coordinate214.USE = "SKINCOORD";
IndexedFaceSet213.coord = Coordinate214;

Shape210.geometry = IndexedFaceSet213;

Group194.children[3] = Shape210;

Shape Shape215 = createNode("Shape");
Shape215.DEF = "SkinLines";
Appearance Appearance216 = createNode("Appearance");
Material Material217 = createNode("Material");
Material217.diffuseColor = new SFColor(new float[0,0,0]);
Appearance216.material = Material217;

Shape215.appearance = Appearance216;

IndexedLineSet IndexedLineSet218 = createNode("IndexedLineSet");
IndexedLineSet218.coordIndex = new MFInt32(new int[0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
Coordinate Coordinate219 = createNode("Coordinate");
Coordinate219.USE = "SKINCOORD";
IndexedLineSet218.coord = Coordinate219;

Shape215.geometry = IndexedLineSet218;

Group194.children[4] = Shape215;

HAnimHumanoid63.skin[41] = Group194;

children[3] = HAnimHumanoid63;

ProtoInstance ProtoInstance220 = createNode("ProtoInstance");
ProtoInstance220.DEF = "ANIMATOR";
ProtoInstance220.name = "LOA1_WalkAnimation";
children[4] = ProtoInstance220;

Script Script221 = createNode("Script");
Script221.DEF = "ENGINE";
Script221.url = new MFString(new java.lang.String["BoxMan3.js","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan3.js"]);
Script221.directOutput = True;
field field222 = createNode("field");
field222.accessType = "inputOnly";
field222.type = "SFRotation";
field222.name = "update";
Script221.field = new MFNode();

Script221.field[0] = field222;

field field223 = createNode("field");
field223.accessType = "initializeOnly";
field223.type = "SFNode";
field223.name = "humanoid";
HAnimHumanoid HAnimHumanoid224 = createNode("HAnimHumanoid");
HAnimHumanoid224.USE = "boxman_Humanoid";
field223.children = new MFNode();

field223.children[0] = HAnimHumanoid224;

Script221.field[1] = field223;

field field225 = createNode("field");
field225.accessType = "initializeOnly";
field225.type = "MFVec3f";
field225.name = "coordList";
Script221.field[2] = field225;

field field226 = createNode("field");
field226.accessType = "initializeOnly";
field226.type = "SFNode";
field226.name = "joint";
Script221.field[3] = field226;

field field227 = createNode("field");
field227.accessType = "initializeOnly";
field227.type = "SFVec3f";
field227.name = "translation";
Script221.field[4] = field227;

field field228 = createNode("field");
field228.accessType = "initializeOnly";
field228.type = "SFRotation";
field228.name = "rotation";
Script221.field[5] = field228;

field field229 = createNode("field");
field229.accessType = "initializeOnly";
field229.type = "SFVec3f";
field229.name = "scale";
field229.value = "1 1 1";
Script221.field[6] = field229;

children[5] = Script221;

ROUTE ROUTE230 = createNode("ROUTE");
ROUTE230.fromNode = "ANIMATOR";
ROUTE230.fromField = "HumanoidRoot_translation_changed";
ROUTE230.toNode = "boxman_humanoid_root";
ROUTE230.toField = "set_translation";
children[6] = ROUTE230;

ROUTE ROUTE231 = createNode("ROUTE");
ROUTE231.fromNode = "ANIMATOR";
ROUTE231.fromField = "HumanoidRoot_rotation_changed";
ROUTE231.toNode = "boxman_humanoid_root";
ROUTE231.toField = "set_rotation";
children[7] = ROUTE231;

ROUTE ROUTE232 = createNode("ROUTE");
ROUTE232.fromNode = "ANIMATOR";
ROUTE232.fromField = "l_hip_rotation_changed";
ROUTE232.toNode = "boxman_l_hip";
ROUTE232.toField = "set_rotation";
children[8] = ROUTE232;

ROUTE ROUTE233 = createNode("ROUTE");
ROUTE233.fromNode = "ANIMATOR";
ROUTE233.fromField = "l_knee_rotation_changed";
ROUTE233.toNode = "boxman_l_knee";
ROUTE233.toField = "set_rotation";
children[9] = ROUTE233;

ROUTE ROUTE234 = createNode("ROUTE");
ROUTE234.fromNode = "ANIMATOR";
ROUTE234.fromField = "l_ankle_rotation_changed";
ROUTE234.toNode = "boxman_l_ankle";
ROUTE234.toField = "set_rotation";
children[10] = ROUTE234;

ROUTE ROUTE235 = createNode("ROUTE");
ROUTE235.fromNode = "ANIMATOR";
ROUTE235.fromField = "l_midtarsal_rotation_changed";
ROUTE235.toNode = "boxman_l_midtarsal";
ROUTE235.toField = "set_rotation";
children[11] = ROUTE235;

ROUTE ROUTE236 = createNode("ROUTE");
ROUTE236.fromNode = "ANIMATOR";
ROUTE236.fromField = "r_hip_rotation_changed";
ROUTE236.toNode = "boxman_r_hip";
ROUTE236.toField = "set_rotation";
children[12] = ROUTE236;

ROUTE ROUTE237 = createNode("ROUTE");
ROUTE237.fromNode = "ANIMATOR";
ROUTE237.fromField = "r_knee_rotation_changed";
ROUTE237.toNode = "boxman_r_knee";
ROUTE237.toField = "set_rotation";
children[13] = ROUTE237;

ROUTE ROUTE238 = createNode("ROUTE");
ROUTE238.fromNode = "ANIMATOR";
ROUTE238.fromField = "r_ankle_rotation_changed";
ROUTE238.toNode = "boxman_r_ankle";
ROUTE238.toField = "set_rotation";
children[14] = ROUTE238;

ROUTE ROUTE239 = createNode("ROUTE");
ROUTE239.fromNode = "ANIMATOR";
ROUTE239.fromField = "r_midtarsal_rotation_changed";
ROUTE239.toNode = "boxman_r_midtarsal";
ROUTE239.toField = "set_rotation";
children[15] = ROUTE239;

ROUTE ROUTE240 = createNode("ROUTE");
ROUTE240.fromNode = "ANIMATOR";
ROUTE240.fromField = "vl5_rotation_changed";
ROUTE240.toNode = "boxman_vl5";
ROUTE240.toField = "set_rotation";
children[16] = ROUTE240;

ROUTE ROUTE241 = createNode("ROUTE");
ROUTE241.fromNode = "ANIMATOR";
ROUTE241.fromField = "skullbase_rotation_changed";
ROUTE241.toNode = "boxman_skullbase";
ROUTE241.toField = "set_rotation";
children[17] = ROUTE241;

ROUTE ROUTE242 = createNode("ROUTE");
ROUTE242.fromNode = "ANIMATOR";
ROUTE242.fromField = "l_shoulder_rotation_changed";
ROUTE242.toNode = "boxman_l_shoulder";
ROUTE242.toField = "set_rotation";
children[18] = ROUTE242;

ROUTE ROUTE243 = createNode("ROUTE");
ROUTE243.fromNode = "ANIMATOR";
ROUTE243.fromField = "l_elbow_rotation_changed";
ROUTE243.toNode = "boxman_l_elbow";
ROUTE243.toField = "set_rotation";
children[19] = ROUTE243;

ROUTE ROUTE244 = createNode("ROUTE");
ROUTE244.fromNode = "ANIMATOR";
ROUTE244.fromField = "l_wrist_rotation_changed";
ROUTE244.toNode = "boxman_l_wrist";
ROUTE244.toField = "set_rotation";
children[20] = ROUTE244;

ROUTE ROUTE245 = createNode("ROUTE");
ROUTE245.fromNode = "ANIMATOR";
ROUTE245.fromField = "r_shoulder_rotation_changed";
ROUTE245.toNode = "boxman_r_shoulder";
ROUTE245.toField = "set_rotation";
children[21] = ROUTE245;

ROUTE ROUTE246 = createNode("ROUTE");
ROUTE246.fromNode = "ANIMATOR";
ROUTE246.fromField = "r_elbow_rotation_changed";
ROUTE246.toNode = "boxman_r_elbow";
ROUTE246.toField = "set_rotation";
children[22] = ROUTE246;

ROUTE ROUTE247 = createNode("ROUTE");
ROUTE247.fromNode = "ANIMATOR";
ROUTE247.fromField = "r_wrist_rotation_changed";
ROUTE247.toNode = "boxman_r_wrist";
ROUTE247.toField = "set_rotation";
children[23] = ROUTE247;

}

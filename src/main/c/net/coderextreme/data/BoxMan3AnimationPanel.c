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
meta3.content = "BoxMan3AnimationPanel.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation panel shows multiple behaviors.";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Joe Williams and James Smith - james@vapourtech.com";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "translator";
meta6.content = "Joe Williams and Don Brutzman";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "generator";
meta7.content = ".x3d to .x3d translation used BS Contact Geo 8.203";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "generator";
meta8.content = "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "generator";
meta9.content = "x3d-tidy V2.2.1, https://www.npmjs.com/package/x3d-tidy";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "created";
meta10.content = "1 March 2001";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "revision";
meta11.content = "12 January 2017";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "translated";
meta12.content = "14 January 2017";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "modified";
meta13.content = "Tue, 09 Sep 2025 19:37:50 GMT";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "error";
meta14.content = "Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "Image";
meta15.content = "BoxManAnimationPanelInclined.png";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "MovingImage";
meta16.content = "BoxManAnimationPanel.mp4";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "MovingImage";
meta17.content = "https://www.youtube.com/watch?v=8tI83Rtg_DU";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "reference";
meta18.content = "https://twitter.com/Web3DConsortium/status/820638047523913728";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "reference";
meta19.content = "https://twitter.com/Web3DConsortium/status/820642726009978881";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "reference";
meta20.content = "http://HAnim.org";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "reference";
meta21.content = "originals/boxman.wrl";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "reference";
meta22.content = "BoxMan3.x3d";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "reference";
meta23.content = "http://HAnim.org/Models/HAnim2001/boxman";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "reference";
meta24.content = "http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "reference";
meta25.content = "http://www.vapourtech.com/team/james/boxman.wrl";
head1.meta[23] = meta25;

meta meta26 = createNode("meta");
meta26.name = "reference";
meta26.content = "http://HAnim.org/Specifications/HAnim2001";
head1.meta[24] = meta26;

meta meta27 = createNode("meta");
meta27.name = "reference";
meta27.content = "http://HAnim.org/Models";
head1.meta[25] = meta27;

meta meta28 = createNode("meta");
meta28.name = "reference";
meta28.content = "http://HAnim.org/Nodes";
head1.meta[26] = meta28;

meta meta29 = createNode("meta");
meta29.name = "reference";
meta29.content = "https://www.web3d.org/x3d/content/X3dToVrml97.xslt";
head1.meta[27] = meta29;

meta meta30 = createNode("meta");
meta30.name = "reference";
meta30.content = "http://www.vapourtech.com";
head1.meta[28] = meta30;

meta meta31 = createNode("meta");
meta31.name = "TODO";
meta31.content = "InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org";
head1.meta[29] = meta31;

meta meta32 = createNode("meta");
meta32.name = "rights";
meta32.content = "(C) 2000 James Smith - james@vapourtech.com";
head1.meta[30] = meta32;

head = head1;

WorldInfo WorldInfo34 = createNode("WorldInfo");
WorldInfo34.title = "BoxMan3 - A Seamless VRML Human";
WorldInfo34.info = new MFString(new java.lang.String["(C) 2000 James Smith - james@vapourtech.com","http://www.vapourtech.com/team/james/boxman.wrl","Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com"]);
children = new MFNode();

children[0] = WorldInfo34;

Background Background35 = createNode("Background");
Background35.skyColor = new MFColor(new float[0.75,0.75,0.75]);
Background35.groundColor = new MFColor(new float[0.6,0.6,0.6]);
children[1] = Background35;

HAnimHumanoid HAnimHumanoid36 = createNode("HAnimHumanoid");
HAnimHumanoid36.DEF = "boxman_Humanoid";
HAnimHumanoid36.name = "Humanoid";
HAnimHumanoid36.info = new MFString(new java.lang.String["authorName=James Smith","authorEmail=james@vapourtech.com","copyright=(C) 2000 James Smith - james@vapourtech.com","humanoidVersion=1.0"]);
HAnimHumanoid36.version = "1.0";
HAnimJoint HAnimJoint37 = createNode("HAnimJoint");
HAnimJoint37.DEF = "boxman_humanoid_root";
HAnimJoint37.name = "humanoid_root";
HAnimJoint37.center = new SFVec3f(new float[0,0.9723,-0.0728]);
HAnimJoint37.skinCoordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9,10,11]);
HAnimJoint37.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment38 = createNode("HAnimSegment");
HAnimSegment38.DEF = "boxman_sacrum";
HAnimSegment38.name = "sacrum";
Transform Transform39 = createNode("Transform");
Transform39.translation = new SFVec3f(new float[0,0.9723,-0.0728]);
Shape Shape40 = createNode("Shape");
Shape40.DEF = "SphereYellow";
Appearance Appearance41 = createNode("Appearance");
Material Material42 = createNode("Material");
Material42.diffuseColor = new SFColor(new float[1,1,0]);
Appearance41.material = Material42;

Shape40.appearance = Appearance41;

Sphere Sphere43 = createNode("Sphere");
Sphere43.radius = 0.02;
Shape40.geometry = Sphere43;

Transform39.child = new undefined();

Transform39.child[0] = Shape40;

HAnimSegment38.children = new MFNode();

HAnimSegment38.children[0] = Transform39;

HAnimJoint37.children = new MFNode();

HAnimJoint37.children[0] = HAnimSegment38;

HAnimJoint HAnimJoint44 = createNode("HAnimJoint");
HAnimJoint44.DEF = "boxman_l_hip";
HAnimJoint44.name = "l_hip";
HAnimJoint44.center = new SFVec3f(new float[0.0956,0.9364,0]);
HAnimJoint44.skinCoordIndex = new MFInt32(new int[12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43]);
HAnimJoint44.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
HAnimSegment HAnimSegment45 = createNode("HAnimSegment");
HAnimSegment45.DEF = "boxman_l_thigh";
HAnimSegment45.name = "l_thigh";
Transform Transform46 = createNode("Transform");
Transform46.translation = new SFVec3f(new float[0.0956,0.9364,0]);
Shape Shape47 = createNode("Shape");
Shape47.USE = "SphereYellow";
Transform46.child = new undefined();

Transform46.child[0] = Shape47;

HAnimSegment45.children = new MFNode();

HAnimSegment45.children[0] = Transform46;

HAnimJoint44.children = new MFNode();

HAnimJoint44.children[0] = HAnimSegment45;

HAnimJoint HAnimJoint48 = createNode("HAnimJoint");
HAnimJoint48.DEF = "boxman_l_knee";
HAnimJoint48.name = "l_knee";
HAnimJoint48.center = new SFVec3f(new float[0.0956,0.5095,-0.0036]);
HAnimJoint48.skinCoordIndex = new MFInt32(new int[36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63]);
HAnimJoint48.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment49 = createNode("HAnimSegment");
HAnimSegment49.DEF = "boxman_l_calf";
HAnimSegment49.name = "l_calf";
Transform Transform50 = createNode("Transform");
Transform50.translation = new SFVec3f(new float[0.0956,0.5095,-0.0036]);
Shape Shape51 = createNode("Shape");
Shape51.USE = "SphereYellow";
Transform50.child = new undefined();

Transform50.child[0] = Shape51;

HAnimSegment49.children = new MFNode();

HAnimSegment49.children[0] = Transform50;

HAnimJoint48.children = new MFNode();

HAnimJoint48.children[0] = HAnimSegment49;

HAnimJoint HAnimJoint52 = createNode("HAnimJoint");
HAnimJoint52.DEF = "boxman_l_ankle";
HAnimJoint52.name = "l_ankle";
HAnimJoint52.rotation = new SFRotation(new float[-0.999999999999999,0,0,0.934517418078819]);
HAnimJoint52.center = new SFVec3f(new float[0.0946,0.0762,-0.0261]);
HAnimJoint52.skinCoordIndex = new MFInt32(new int[64,65,66,67,68,69,70,71]);
HAnimJoint52.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment53 = createNode("HAnimSegment");
HAnimSegment53.DEF = "boxman_l_hindfoot";
HAnimSegment53.name = "l_hindfoot";
Transform Transform54 = createNode("Transform");
Transform54.translation = new SFVec3f(new float[0.0946,0.0762,-0.0261]);
Shape Shape55 = createNode("Shape");
Shape55.USE = "SphereYellow";
Transform54.child = new undefined();

Transform54.child[0] = Shape55;

HAnimSegment53.children = new MFNode();

HAnimSegment53.children[0] = Transform54;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimSegment53;

HAnimJoint HAnimJoint56 = createNode("HAnimJoint");
HAnimJoint56.DEF = "boxman_l_midtarsal";
HAnimJoint56.name = "l_midtarsal";
HAnimJoint56.center = new SFVec3f(new float[0.1079,0.0317,0.067]);
HAnimJoint56.skinCoordIndex = new MFInt32(new int[72,73,74,75,76,77,78,79]);
HAnimJoint56.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment57 = createNode("HAnimSegment");
HAnimSegment57.DEF = "boxman_l_middistal";
HAnimSegment57.name = "l_middistal";
Transform Transform58 = createNode("Transform");
Transform58.translation = new SFVec3f(new float[0.1079,0.0317,0.067]);
Shape Shape59 = createNode("Shape");
Shape59.USE = "SphereYellow";
Transform58.child = new undefined();

Transform58.child[0] = Shape59;

HAnimSegment57.children = new MFNode();

HAnimSegment57.children[0] = Transform58;

HAnimSite HAnimSite60 = createNode("HAnimSite");
HAnimSite60.DEF = "boxman_l_middistal_tip";
HAnimSite60.name = "l_middistal_tip";
HAnimSite60.translation = new SFVec3f(new float[0.095,0.0005,0.1924]);
Shape Shape61 = createNode("Shape");
Shape61.DEF = "SphereRed";
Appearance Appearance62 = createNode("Appearance");
Material Material63 = createNode("Material");
Material63.diffuseColor = new SFColor(new float[1,0,0]);
Appearance62.material = Material63;

Shape61.appearance = Appearance62;

Sphere Sphere64 = createNode("Sphere");
Sphere64.radius = 0.02;
Shape61.geometry = Sphere64;

HAnimSite60.children = new MFNode();

HAnimSite60.children[0] = Shape61;

HAnimSegment57.children[1] = HAnimSite60;

HAnimJoint56.children = new MFNode();

HAnimJoint56.children[0] = HAnimSegment57;

HAnimJoint52.children[1] = HAnimJoint56;

HAnimJoint48.children[1] = HAnimJoint52;

HAnimJoint44.children[1] = HAnimJoint48;

HAnimJoint37.children[1] = HAnimJoint44;

HAnimJoint HAnimJoint65 = createNode("HAnimJoint");
HAnimJoint65.DEF = "boxman_r_hip";
HAnimJoint65.name = "r_hip";
HAnimJoint65.rotation = new SFRotation(new float[-1,0,0,1.84517416925276]);
HAnimJoint65.center = new SFVec3f(new float[-0.0956,0.9364,0]);
HAnimJoint65.skinCoordIndex = new MFInt32(new int[80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111]);
HAnimJoint65.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
HAnimSegment HAnimSegment66 = createNode("HAnimSegment");
HAnimSegment66.DEF = "boxman_r_thigh";
HAnimSegment66.name = "r_thigh";
Transform Transform67 = createNode("Transform");
Transform67.translation = new SFVec3f(new float[-0.0956,0.9364,0]);
Shape Shape68 = createNode("Shape");
Shape68.USE = "SphereYellow";
Transform67.child = new undefined();

Transform67.child[0] = Shape68;

HAnimSegment66.children = new MFNode();

HAnimSegment66.children[0] = Transform67;

HAnimJoint65.children = new MFNode();

HAnimJoint65.children[0] = HAnimSegment66;

HAnimJoint HAnimJoint69 = createNode("HAnimJoint");
HAnimJoint69.DEF = "boxman_r_knee";
HAnimJoint69.name = "r_knee";
HAnimJoint69.rotation = new SFRotation(new float[1,0,0,1.81193032768473]);
HAnimJoint69.center = new SFVec3f(new float[-0.0956,0.5095,-0.0036]);
HAnimJoint69.skinCoordIndex = new MFInt32(new int[104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131]);
HAnimJoint69.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment70 = createNode("HAnimSegment");
HAnimSegment70.DEF = "boxman_r_calf";
HAnimSegment70.name = "r_calf";
Transform Transform71 = createNode("Transform");
Transform71.translation = new SFVec3f(new float[-0.0956,0.5095,-0.0036]);
Shape Shape72 = createNode("Shape");
Shape72.USE = "SphereYellow";
Transform71.child = new undefined();

Transform71.child[0] = Shape72;

HAnimSegment70.children = new MFNode();

HAnimSegment70.children[0] = Transform71;

HAnimJoint69.children = new MFNode();

HAnimJoint69.children[0] = HAnimSegment70;

HAnimJoint HAnimJoint73 = createNode("HAnimJoint");
HAnimJoint73.DEF = "boxman_r_ankle";
HAnimJoint73.name = "r_ankle";
HAnimJoint73.rotation = new SFRotation(new float[-0.999999999999999,0,0,0.934517418078819]);
HAnimJoint73.center = new SFVec3f(new float[-0.0946,0.0762,-0.0261]);
HAnimJoint73.skinCoordIndex = new MFInt32(new int[132,133,134,135,136,137,138,139]);
HAnimJoint73.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment74 = createNode("HAnimSegment");
HAnimSegment74.DEF = "boxman_r_hindfoot";
HAnimSegment74.name = "r_hindfoot";
Transform Transform75 = createNode("Transform");
Transform75.translation = new SFVec3f(new float[-0.0946,0.0762,-0.0261]);
Shape Shape76 = createNode("Shape");
Shape76.USE = "SphereYellow";
Transform75.child = new undefined();

Transform75.child[0] = Shape76;

HAnimSegment74.children = new MFNode();

HAnimSegment74.children[0] = Transform75;

HAnimJoint73.children = new MFNode();

HAnimJoint73.children[0] = HAnimSegment74;

HAnimJoint HAnimJoint77 = createNode("HAnimJoint");
HAnimJoint77.DEF = "boxman_r_midtarsal";
HAnimJoint77.name = "r_midtarsal";
HAnimJoint77.center = new SFVec3f(new float[-0.1079,0.0317,0.067]);
HAnimJoint77.skinCoordIndex = new MFInt32(new int[140,141,142,143,144,145,146,147]);
HAnimJoint77.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment78 = createNode("HAnimSegment");
HAnimSegment78.DEF = "boxman_r_middistal";
HAnimSegment78.name = "r_middistal";
Transform Transform79 = createNode("Transform");
Transform79.translation = new SFVec3f(new float[-0.1079,0.0317,0.067]);
Shape Shape80 = createNode("Shape");
Shape80.USE = "SphereYellow";
Transform79.child = new undefined();

Transform79.child[0] = Shape80;

HAnimSegment78.children = new MFNode();

HAnimSegment78.children[0] = Transform79;

HAnimSite HAnimSite81 = createNode("HAnimSite");
HAnimSite81.DEF = "boxman_r_middistal_tip";
HAnimSite81.name = "r_middistal_tip";
HAnimSite81.translation = new SFVec3f(new float[-0.095,0.0005,0.1924]);
Shape Shape82 = createNode("Shape");
Shape82.USE = "SphereRed";
HAnimSite81.children = new MFNode();

HAnimSite81.children[0] = Shape82;

HAnimSegment78.children[1] = HAnimSite81;

HAnimJoint77.children = new MFNode();

HAnimJoint77.children[0] = HAnimSegment78;

HAnimJoint73.children[1] = HAnimJoint77;

HAnimJoint69.children[1] = HAnimJoint73;

HAnimJoint65.children[1] = HAnimJoint69;

HAnimJoint37.children[2] = HAnimJoint65;

HAnimJoint HAnimJoint83 = createNode("HAnimJoint");
HAnimJoint83.DEF = "boxman_vl5";
HAnimJoint83.name = "vl5";
HAnimJoint83.center = new SFVec3f(new float[0,1.0817,-0.0728]);
HAnimJoint83.skinCoordIndex = new MFInt32(new int[148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167]);
HAnimJoint83.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment84 = createNode("HAnimSegment");
HAnimSegment84.DEF = "boxman_l5";
HAnimSegment84.name = "l5";
Transform Transform85 = createNode("Transform");
Transform85.translation = new SFVec3f(new float[0,1.0817,-0.0728]);
Shape Shape86 = createNode("Shape");
Shape86.USE = "SphereYellow";
Transform85.child = new undefined();

Transform85.child[0] = Shape86;

HAnimSegment84.children = new MFNode();

HAnimSegment84.children[0] = Transform85;

HAnimJoint83.children = new MFNode();

HAnimJoint83.children[0] = HAnimSegment84;

HAnimJoint HAnimJoint87 = createNode("HAnimJoint");
HAnimJoint87.DEF = "boxman_skullbase";
HAnimJoint87.name = "skullbase";
HAnimJoint87.rotation = new SFRotation(new float[-0.999999999999998,0,0,0.567582977341481]);
HAnimJoint87.center = new SFVec3f(new float[0,1.644,0.036]);
HAnimJoint87.skinCoordIndex = new MFInt32(new int[168,169,170,171,172,173,174,175]);
HAnimJoint87.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment88 = createNode("HAnimSegment");
HAnimSegment88.DEF = "boxman_skull";
HAnimSegment88.name = "skull";
Transform Transform89 = createNode("Transform");
Transform89.translation = new SFVec3f(new float[0,1.644,0.036]);
Shape Shape90 = createNode("Shape");
Shape90.USE = "SphereYellow";
Transform89.child = new undefined();

Transform89.child[0] = Shape90;

HAnimSegment88.children = new MFNode();

HAnimSegment88.children[0] = Transform89;

HAnimSite HAnimSite91 = createNode("HAnimSite");
HAnimSite91.DEF = "boxman_skull_tip";
HAnimSite91.name = "skull_tip";
HAnimSite91.translation = new SFVec3f(new float[-0.0029,1.7771,0.0274]);
Shape Shape92 = createNode("Shape");
Shape92.USE = "SphereYellow";
HAnimSite91.children = new MFNode();

HAnimSite91.children[0] = Shape92;

HAnimSegment88.children[1] = HAnimSite91;

HAnimJoint87.children = new MFNode();

HAnimJoint87.children[0] = HAnimSegment88;

HAnimJoint83.children[1] = HAnimJoint87;

HAnimJoint HAnimJoint93 = createNode("HAnimJoint");
HAnimJoint93.DEF = "boxman_l_shoulder";
HAnimJoint93.name = "l_shoulder";
HAnimJoint93.rotation = new SFRotation(new float[-0.168396082523642,0,0.98571941209996,1.75368175088092]);
HAnimJoint93.center = new SFVec3f(new float[0.1968,1.4642,-0.0265]);
HAnimJoint93.skinCoordIndex = new MFInt32(new int[176,177,178,179,180,181,182,183]);
HAnimJoint93.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment94 = createNode("HAnimSegment");
HAnimSegment94.DEF = "boxman_l_upperarm";
HAnimSegment94.name = "l_upperarm";
Transform Transform95 = createNode("Transform");
Transform95.translation = new SFVec3f(new float[0.1968,1.4642,-0.0265]);
Shape Shape96 = createNode("Shape");
Shape96.USE = "SphereYellow";
Transform95.child = new undefined();

Transform95.child[0] = Shape96;

HAnimSegment94.children = new MFNode();

HAnimSegment94.children[0] = Transform95;

HAnimJoint93.children = new MFNode();

HAnimJoint93.children[0] = HAnimSegment94;

HAnimJoint HAnimJoint97 = createNode("HAnimJoint");
HAnimJoint97.DEF = "boxman_l_elbow";
HAnimJoint97.name = "l_elbow";
HAnimJoint97.rotation = new SFRotation(new float[0.976795664618561,-0.214173363382058,0,4.35600755948079]);
HAnimJoint97.center = new SFVec3f(new float[0.1982,1.1622,-0.0557]);
HAnimJoint97.skinCoordIndex = new MFInt32(new int[184,185,186,187,188,189,190,191]);
HAnimJoint97.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment98 = createNode("HAnimSegment");
HAnimSegment98.DEF = "boxman_l_forearm";
HAnimSegment98.name = "l_forearm";
Transform Transform99 = createNode("Transform");
Transform99.translation = new SFVec3f(new float[0.1982,1.1622,-0.0557]);
Shape Shape100 = createNode("Shape");
Shape100.USE = "SphereYellow";
Transform99.child = new undefined();

Transform99.child[0] = Shape100;

HAnimSegment98.children = new MFNode();

HAnimSegment98.children[0] = Transform99;

HAnimJoint97.children = new MFNode();

HAnimJoint97.children[0] = HAnimSegment98;

HAnimJoint HAnimJoint101 = createNode("HAnimJoint");
HAnimJoint101.DEF = "boxman_l_wrist";
HAnimJoint101.name = "l_wrist";
HAnimJoint101.rotation = new SFRotation(new float[0,1,0,0.379691598867005]);
HAnimJoint101.center = new SFVec3f(new float[0.1972,0.8929,-0.069]);
HAnimJoint101.skinCoordIndex = new MFInt32(new int[192,193,194,195,196,197,198,199]);
HAnimJoint101.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment102 = createNode("HAnimSegment");
HAnimSegment102.DEF = "boxman_l_hand";
HAnimSegment102.name = "l_hand";
Transform Transform103 = createNode("Transform");
Transform103.translation = new SFVec3f(new float[0.1972,0.8929,-0.069]);
Shape Shape104 = createNode("Shape");
Shape104.USE = "SphereYellow";
Transform103.child = new undefined();

Transform103.child[0] = Shape104;

HAnimSegment102.children = new MFNode();

HAnimSegment102.children[0] = Transform103;

HAnimSite HAnimSite105 = createNode("HAnimSite");
HAnimSite105.DEF = "boxman_l_hand_tip";
HAnimSite105.name = "l_hand_tip";
HAnimSite105.translation = new SFVec3f(new float[0.1912,0.6976,-0.071]);
Shape Shape106 = createNode("Shape");
Shape106.USE = "SphereRed";
HAnimSite105.children = new MFNode();

HAnimSite105.children[0] = Shape106;

HAnimSegment102.children[1] = HAnimSite105;

HAnimJoint101.children = new MFNode();

HAnimJoint101.children[0] = HAnimSegment102;

HAnimJoint97.children[1] = HAnimJoint101;

HAnimJoint93.children[1] = HAnimJoint97;

HAnimJoint83.children[2] = HAnimJoint93;

HAnimJoint HAnimJoint107 = createNode("HAnimJoint");
HAnimJoint107.DEF = "boxman_r_shoulder";
HAnimJoint107.name = "r_shoulder";
HAnimJoint107.rotation = new SFRotation(new float[0.168396082523642,0,0.98571941209996,4.52950355629867]);
HAnimJoint107.center = new SFVec3f(new float[-0.1968,1.4642,-0.0265]);
HAnimJoint107.skinCoordIndex = new MFInt32(new int[200,201,202,203,204,205,206,207]);
HAnimJoint107.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment108 = createNode("HAnimSegment");
HAnimSegment108.DEF = "boxman_r_upperarm";
HAnimSegment108.name = "r_upperarm";
Transform Transform109 = createNode("Transform");
Transform109.translation = new SFVec3f(new float[-0.1968,1.4642,-0.0265]);
Shape Shape110 = createNode("Shape");
Shape110.USE = "SphereYellow";
Transform109.child = new undefined();

Transform109.child[0] = Shape110;

HAnimSegment108.children = new MFNode();

HAnimSegment108.children[0] = Transform109;

HAnimJoint107.children = new MFNode();

HAnimJoint107.children[0] = HAnimSegment108;

HAnimJoint HAnimJoint111 = createNode("HAnimJoint");
HAnimJoint111.DEF = "boxman_r_elbow";
HAnimJoint111.name = "r_elbow";
HAnimJoint111.rotation = new SFRotation(new float[0.976795664618562,0.214173363382058,0,4.35600755948079]);
HAnimJoint111.center = new SFVec3f(new float[-0.1982,1.1622,-0.0557]);
HAnimJoint111.skinCoordIndex = new MFInt32(new int[208,209,210,211,212,213,214,215]);
HAnimJoint111.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment112 = createNode("HAnimSegment");
HAnimSegment112.DEF = "boxman_r_forearm";
HAnimSegment112.name = "r_forearm";
Transform Transform113 = createNode("Transform");
Transform113.translation = new SFVec3f(new float[-0.1982,1.1622,-0.0557]);
Shape Shape114 = createNode("Shape");
Shape114.USE = "SphereYellow";
Transform113.child = new undefined();

Transform113.child[0] = Shape114;

HAnimSegment112.children = new MFNode();

HAnimSegment112.children[0] = Transform113;

HAnimJoint111.children = new MFNode();

HAnimJoint111.children[0] = HAnimSegment112;

HAnimJoint HAnimJoint115 = createNode("HAnimJoint");
HAnimJoint115.DEF = "boxman_r_wrist";
HAnimJoint115.name = "r_wrist";
HAnimJoint115.rotation = new SFRotation(new float[0,-1,0,0.379691598867005]);
HAnimJoint115.center = new SFVec3f(new float[-0.1972,0.8929,-0.069]);
HAnimJoint115.skinCoordIndex = new MFInt32(new int[216,217,218,219,220,221,222,223]);
HAnimJoint115.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimSegment HAnimSegment116 = createNode("HAnimSegment");
HAnimSegment116.DEF = "boxman_r_hand";
HAnimSegment116.name = "r_hand";
Transform Transform117 = createNode("Transform");
Transform117.translation = new SFVec3f(new float[-0.1972,0.8929,-0.069]);
Shape Shape118 = createNode("Shape");
Shape118.USE = "SphereYellow";
Transform117.child = new undefined();

Transform117.child[0] = Shape118;

HAnimSegment116.children = new MFNode();

HAnimSegment116.children[0] = Transform117;

HAnimSite HAnimSite119 = createNode("HAnimSite");
HAnimSite119.DEF = "boxman_r_hand_tip";
HAnimSite119.name = "r_hand_tip";
HAnimSite119.translation = new SFVec3f(new float[-0.1912,0.6976,-0.071]);
Shape Shape120 = createNode("Shape");
Shape120.USE = "SphereRed";
HAnimSite119.children = new MFNode();

HAnimSite119.children[0] = Shape120;

HAnimSegment116.children[1] = HAnimSite119;

HAnimJoint115.children = new MFNode();

HAnimJoint115.children[0] = HAnimSegment116;

HAnimJoint111.children[1] = HAnimJoint115;

HAnimJoint107.children[1] = HAnimJoint111;

HAnimJoint83.children[3] = HAnimJoint107;

HAnimJoint37.children[3] = HAnimJoint83;

HAnimHumanoid36.joints = new MFNode();

HAnimHumanoid36.joints[0] = HAnimJoint37;

HAnimJoint HAnimJoint121 = createNode("HAnimJoint");
HAnimJoint121.USE = "boxman_humanoid_root";
HAnimHumanoid36.joints[1] = HAnimJoint121;

HAnimJoint HAnimJoint122 = createNode("HAnimJoint");
HAnimJoint122.USE = "boxman_skullbase";
HAnimHumanoid36.joints[2] = HAnimJoint122;

HAnimJoint HAnimJoint123 = createNode("HAnimJoint");
HAnimJoint123.USE = "boxman_vl5";
HAnimHumanoid36.joints[3] = HAnimJoint123;

HAnimJoint HAnimJoint124 = createNode("HAnimJoint");
HAnimJoint124.USE = "boxman_r_ankle";
HAnimHumanoid36.joints[4] = HAnimJoint124;

HAnimJoint HAnimJoint125 = createNode("HAnimJoint");
HAnimJoint125.USE = "boxman_l_ankle";
HAnimHumanoid36.joints[5] = HAnimJoint125;

HAnimJoint HAnimJoint126 = createNode("HAnimJoint");
HAnimJoint126.USE = "boxman_r_elbow";
HAnimHumanoid36.joints[6] = HAnimJoint126;

HAnimJoint HAnimJoint127 = createNode("HAnimJoint");
HAnimJoint127.USE = "boxman_l_elbow";
HAnimHumanoid36.joints[7] = HAnimJoint127;

HAnimJoint HAnimJoint128 = createNode("HAnimJoint");
HAnimJoint128.USE = "boxman_r_hip";
HAnimHumanoid36.joints[8] = HAnimJoint128;

HAnimJoint HAnimJoint129 = createNode("HAnimJoint");
HAnimJoint129.USE = "boxman_l_hip";
HAnimHumanoid36.joints[9] = HAnimJoint129;

HAnimJoint HAnimJoint130 = createNode("HAnimJoint");
HAnimJoint130.USE = "boxman_r_knee";
HAnimHumanoid36.joints[10] = HAnimJoint130;

HAnimJoint HAnimJoint131 = createNode("HAnimJoint");
HAnimJoint131.USE = "boxman_l_knee";
HAnimHumanoid36.joints[11] = HAnimJoint131;

HAnimJoint HAnimJoint132 = createNode("HAnimJoint");
HAnimJoint132.USE = "boxman_r_midtarsal";
HAnimHumanoid36.joints[12] = HAnimJoint132;

HAnimJoint HAnimJoint133 = createNode("HAnimJoint");
HAnimJoint133.USE = "boxman_l_midtarsal";
HAnimHumanoid36.joints[13] = HAnimJoint133;

HAnimJoint HAnimJoint134 = createNode("HAnimJoint");
HAnimJoint134.USE = "boxman_r_shoulder";
HAnimHumanoid36.joints[14] = HAnimJoint134;

HAnimJoint HAnimJoint135 = createNode("HAnimJoint");
HAnimJoint135.USE = "boxman_l_shoulder";
HAnimHumanoid36.joints[15] = HAnimJoint135;

HAnimJoint HAnimJoint136 = createNode("HAnimJoint");
HAnimJoint136.USE = "boxman_r_wrist";
HAnimHumanoid36.joints[16] = HAnimJoint136;

HAnimJoint HAnimJoint137 = createNode("HAnimJoint");
HAnimJoint137.USE = "boxman_l_wrist";
HAnimHumanoid36.joints[17] = HAnimJoint137;

HAnimSegment HAnimSegment138 = createNode("HAnimSegment");
HAnimSegment138.USE = "boxman_sacrum";
HAnimHumanoid36.segments[18] = HAnimSegment138;

HAnimSegment HAnimSegment139 = createNode("HAnimSegment");
HAnimSegment139.USE = "boxman_l5";
HAnimHumanoid36.segments[19] = HAnimSegment139;

HAnimSegment HAnimSegment140 = createNode("HAnimSegment");
HAnimSegment140.USE = "boxman_skull";
HAnimHumanoid36.segments[20] = HAnimSegment140;

HAnimSegment HAnimSegment141 = createNode("HAnimSegment");
HAnimSegment141.USE = "boxman_l_calf";
HAnimHumanoid36.segments[21] = HAnimSegment141;

HAnimSegment HAnimSegment142 = createNode("HAnimSegment");
HAnimSegment142.USE = "boxman_r_calf";
HAnimHumanoid36.segments[22] = HAnimSegment142;

HAnimSegment HAnimSegment143 = createNode("HAnimSegment");
HAnimSegment143.USE = "boxman_l_forearm";
HAnimHumanoid36.segments[23] = HAnimSegment143;

HAnimSegment HAnimSegment144 = createNode("HAnimSegment");
HAnimSegment144.USE = "boxman_r_forearm";
HAnimHumanoid36.segments[24] = HAnimSegment144;

HAnimSegment HAnimSegment145 = createNode("HAnimSegment");
HAnimSegment145.USE = "boxman_l_hand";
HAnimHumanoid36.segments[25] = HAnimSegment145;

HAnimSegment HAnimSegment146 = createNode("HAnimSegment");
HAnimSegment146.USE = "boxman_r_hand";
HAnimHumanoid36.segments[26] = HAnimSegment146;

HAnimSegment HAnimSegment147 = createNode("HAnimSegment");
HAnimSegment147.USE = "boxman_l_hindfoot";
HAnimHumanoid36.segments[27] = HAnimSegment147;

HAnimSegment HAnimSegment148 = createNode("HAnimSegment");
HAnimSegment148.USE = "boxman_r_hindfoot";
HAnimHumanoid36.segments[28] = HAnimSegment148;

HAnimSegment HAnimSegment149 = createNode("HAnimSegment");
HAnimSegment149.USE = "boxman_l_middistal";
HAnimHumanoid36.segments[29] = HAnimSegment149;

HAnimSegment HAnimSegment150 = createNode("HAnimSegment");
HAnimSegment150.USE = "boxman_r_middistal";
HAnimHumanoid36.segments[30] = HAnimSegment150;

HAnimSegment HAnimSegment151 = createNode("HAnimSegment");
HAnimSegment151.USE = "boxman_l_thigh";
HAnimHumanoid36.segments[31] = HAnimSegment151;

HAnimSegment HAnimSegment152 = createNode("HAnimSegment");
HAnimSegment152.USE = "boxman_r_thigh";
HAnimHumanoid36.segments[32] = HAnimSegment152;

HAnimSegment HAnimSegment153 = createNode("HAnimSegment");
HAnimSegment153.USE = "boxman_l_upperarm";
HAnimHumanoid36.segments[33] = HAnimSegment153;

HAnimSegment HAnimSegment154 = createNode("HAnimSegment");
HAnimSegment154.USE = "boxman_r_upperarm";
HAnimHumanoid36.segments[34] = HAnimSegment154;

HAnimSite HAnimSite155 = createNode("HAnimSite");
HAnimSite155.USE = "boxman_skull_tip";
HAnimHumanoid36.viewpoints[35] = HAnimSite155;

HAnimSite HAnimSite156 = createNode("HAnimSite");
HAnimSite156.USE = "boxman_l_hand_tip";
HAnimHumanoid36.viewpoints[36] = HAnimSite156;

HAnimSite HAnimSite157 = createNode("HAnimSite");
HAnimSite157.USE = "boxman_r_hand_tip";
HAnimHumanoid36.viewpoints[37] = HAnimSite157;

HAnimSite HAnimSite158 = createNode("HAnimSite");
HAnimSite158.USE = "boxman_l_middistal_tip";
HAnimHumanoid36.viewpoints[38] = HAnimSite158;

HAnimSite HAnimSite159 = createNode("HAnimSite");
HAnimSite159.USE = "boxman_r_middistal_tip";
HAnimHumanoid36.viewpoints[39] = HAnimSite159;

HAnimSite HAnimSite160 = createNode("HAnimSite");
HAnimSite160.DEF = "boxman_BoxMan_view";
HAnimSite160.name = "BoxMan_view";
Viewpoint Viewpoint161 = createNode("Viewpoint");
Viewpoint161.DEF = "Inclined_View";
Viewpoint161.description = "Inclined View";
Viewpoint161.position = new SFVec3f(new float[2,0.9,2]);
Viewpoint161.orientation = new SFRotation(new float[0,1,0,0.78]);
HAnimSite160.children = new MFNode();

HAnimSite160.children[0] = Viewpoint161;

Viewpoint Viewpoint162 = createNode("Viewpoint");
Viewpoint162.DEF = "Front_View";
Viewpoint162.description = "Front View";
Viewpoint162.position = new SFVec3f(new float[0,1,3]);
HAnimSite160.children[1] = Viewpoint162;

Viewpoint Viewpoint163 = createNode("Viewpoint");
Viewpoint163.DEF = "Best_View";
Viewpoint163.description = "Right-side View";
Viewpoint163.position = new SFVec3f(new float[-3,1,0]);
Viewpoint163.orientation = new SFRotation(new float[0,1,0,-1.57]);
HAnimSite160.children[2] = Viewpoint163;

Viewpoint Viewpoint164 = createNode("Viewpoint");
Viewpoint164.DEF = "Side_View";
Viewpoint164.description = "Left-side View";
Viewpoint164.position = new SFVec3f(new float[3,1,0]);
Viewpoint164.orientation = new SFRotation(new float[0,1,0,1.57]);
HAnimSite160.children[3] = Viewpoint164;

Viewpoint Viewpoint165 = createNode("Viewpoint");
Viewpoint165.DEF = "Top_View";
Viewpoint165.description = "Top View";
Viewpoint165.position = new SFVec3f(new float[0,3,0]);
Viewpoint165.orientation = new SFRotation(new float[1,0,0,-1.57]);
HAnimSite160.children[4] = Viewpoint165;

HAnimHumanoid36.viewpoints[40] = HAnimSite160;

Coordinate Coordinate166 = createNode("Coordinate");
Coordinate166.DEF = "SKINCOORD";
Coordinate166.point = new MFVec3f(new float[-0.05,1,0.05,0.05,1,0.05,0.03,0.97,-0.1,-0.03,0.97,-0.1,0.03,0.94,-0.075,-0.03,0.94,-0.075,0,0.92,0,0,0.94,0.03,-0.12,1.06,0.05,0.12,1.06,0.05,0.12,1.06,-0.1,-0.12,1.06,-0.1,0.0456,0.9364,0.05,0.1456,0.9364,0.05,0.1456,0.9364,-0.05,0.0456,0.9364,-0.05,0.0456,0.9,0.05,0.1456,0.9,0.05,0.1456,0.9,-0.05,0.0456,0.9,-0.05,0.0456,0.8,0.05,0.1456,0.8,0.05,0.1456,0.8,-0.05,0.0456,0.8,-0.05,0.0456,0.7,0.05,0.1456,0.7,0.05,0.1456,0.7,-0.05,0.0456,0.7,-0.05,0.0456,0.6,0.05,0.1456,0.6,0.05,0.1456,0.6,-0.05,0.0456,0.6,-0.05,0.0456,0.55,0.05,0.1456,0.55,0.05,0.1456,0.55,-0.05,0.0456,0.55,-0.05,0.0456,0.52,0.05,0.1456,0.52,0.05,0.1456,0.52,-0.05,0.0456,0.52,-0.05,0.0456,0.5,0.05,0.1456,0.5,0.05,0.1456,0.5,-0.05,0.0456,0.5,-0.05,0.0454,0.43,0.045,0.1454,0.43,0.045,0.1454,0.43,-0.055,0.0454,0.43,-0.055,0.0452,0.36,0.04,0.1452,0.36,0.04,0.1452,0.36,-0.06,0.0452,0.36,-0.06,0.045,0.29,0.035,0.145,0.29,0.035,0.145,0.29,-0.065,0.045,0.29,-0.065,0.0448,0.21,0.03,0.1448,0.21,0.03,0.1448,0.21,-0.07,0.0448,0.21,-0.07,0.0446,0.1262,0.025,0.1446,0.1262,0.025,0.1446,0.1262,-0.075,0.0446,0.1262,-0.075,0.0446,0.0762,0.025,0.1446,0.0762,0.025,0.1446,0,-0.075,0.0446,0,-0.075,0.0446,0.0562,0.057,0.1446,0.0562,0.057,0.1446,0,0.057,0.0446,0,0.057,0.0446,0.0562,0.087,0.1446,0.0562,0.087,0.1446,0,0.087,0.0446,0,0.087,0.0446,0.0562,0.1924,0.1446,0.0562,0.1924,0.1446,0,0.1924,0.0446,0,0.1924,-0.0456,0.9364,0.05,-0.1456,0.9364,0.05,-0.1456,0.9364,-0.05,-0.0456,0.9364,-0.05,-0.0456,0.9,0.05,-0.1456,0.9,0.05,-0.1456,0.9,-0.05,-0.0456,0.9,-0.05,-0.0456,0.8,0.05,-0.1456,0.8,0.05,-0.1456,0.8,-0.05,-0.0456,0.8,-0.05,-0.0456,0.7,0.05,-0.1456,0.7,0.05,-0.1456,0.7,-0.05,-0.0456,0.7,-0.05,-0.0456,0.6,0.05,-0.1456,0.6,0.05,-0.1456,0.6,-0.05,-0.0456,0.6,-0.05,-0.0456,0.55,0.05,-0.1456,0.55,0.05,-0.1456,0.55,-0.05,-0.0456,0.55,-0.05,-0.0456,0.52,0.05,-0.1456,0.52,0.05,-0.1456,0.52,-0.05,-0.0456,0.52,-0.05,-0.0456,0.5,0.05,-0.1456,0.5,0.05,-0.1456,0.5,-0.05,-0.0456,0.5,-0.05,-0.0454,0.43,0.045,-0.1454,0.43,0.045,-0.1454,0.43,-0.055,-0.0454,0.43,-0.055,-0.0452,0.36,0.04,-0.1452,0.36,0.04,-0.1452,0.36,-0.06,-0.0452,0.36,-0.06,-0.045,0.29,0.035,-0.145,0.29,0.035,-0.145,0.29,-0.065,-0.045,0.29,-0.065,-0.0448,0.21,0.03,-0.1448,0.21,0.03,-0.1448,0.21,-0.07,-0.0448,0.21,-0.07,-0.0446,0.1262,0.025,-0.1446,0.1262,0.025,-0.1446,0.1262,-0.075,-0.0446,0.1262,-0.075,-0.0446,0.0762,0.025,-0.1446,0.0762,0.025,-0.1446,0,-0.075,-0.0446,0,-0.075,-0.0446,0.0562,0.057,-0.1446,0.0562,0.057,-0.1446,0,0.057,-0.0446,0,0.057,-0.0446,0.0562,0.087,-0.1446,0.0562,0.087,-0.1446,0,0.087,-0.0446,0,0.087,-0.0446,0.0562,0.1924,-0.1446,0.0562,0.1924,-0.1446,0,0.1924,-0.0446,0,0.1924,-0.12,1.1,0.05,0.12,1.1,0.05,0.12,1.1,-0.1,-0.12,1.1,-0.1,-0.14,1.42,0.045,0.14,1.42,0.045,0.14,1.42,-0.09,-0.14,1.42,-0.09,-0.24,1.52,0.035,0.24,1.52,0.035,0.24,1.52,-0.09,-0.24,1.52,-0.09,-0.05,1.56,0.03,0.05,1.56,0.03,0.05,1.56,-0.06,-0.05,1.56,-0.06,-0.05,1.6,0.06,0.05,1.6,0.06,0.05,1.62,-0.03,-0.05,1.62,-0.03,-0.07,1.777,0.13,0.07,1.777,0.13,0.07,1.777,-0.03,-0.07,1.777,-0.03,-0.07,1.6,0.13,0.07,1.6,0.13,0.07,1.66,-0.03,-0.07,1.66,-0.03,0.16,1.42,0.015,0.24,1.5,0.015,0.24,1.5,-0.075,0.16,1.42,-0.075,0.17,1.18,-0.025,0.23,1.18,-0.025,0.23,1.18,-0.085,0.17,1.18,-0.085,0.17,1.14,-0.025,0.23,1.14,-0.025,0.23,1.14,-0.085,0.17,1.14,-0.085,0.18,0.91,-0.05,0.22,0.91,-0.05,0.22,0.91,-0.09,0.18,0.91,-0.09,0.18,0.87,-0.02,0.22,0.87,-0.02,0.22,0.87,-0.1,0.18,0.87,-0.1,0.18,0.6976,-0.02,0.22,0.6976,-0.02,0.22,0.6976,-0.1,0.18,0.6976,-0.1,-0.16,1.42,0.015,-0.24,1.5,0.015,-0.24,1.5,-0.075,-0.16,1.42,-0.075,-0.17,1.18,-0.025,-0.23,1.18,-0.025,-0.23,1.18,-0.085,-0.17,1.18,-0.085,-0.17,1.14,-0.025,-0.23,1.14,-0.025,-0.23,1.14,-0.085,-0.17,1.14,-0.085,-0.18,0.91,-0.05,-0.22,0.91,-0.05,-0.22,0.91,-0.09,-0.18,0.91,-0.09,-0.18,0.87,-0.02,-0.22,0.87,-0.02,-0.22,0.87,-0.1,-0.18,0.87,-0.1,-0.18,0.6976,-0.02,-0.22,0.6976,-0.02,-0.22,0.6976,-0.1,-0.18,0.6976,-0.1]);
HAnimHumanoid36.skinCoord = Coordinate166;

Group Group167 = createNode("Group");
Shape Shape168 = createNode("Shape");
Shape168.DEF = "TrouserSkin";
Appearance Appearance169 = createNode("Appearance");
Material Material170 = createNode("Material");
Material170.diffuseColor = new SFColor(new float[0,0,1]);
Material170.transparency = 0.5;
Appearance169.material = Material170;

Shape168.appearance = Appearance169;

IndexedFaceSet IndexedFaceSet171 = createNode("IndexedFaceSet");
IndexedFaceSet171.coordIndex = new MFInt32(new int[0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1]);
Coordinate Coordinate172 = createNode("Coordinate");
Coordinate172.USE = "SKINCOORD";
IndexedFaceSet171.coord = Coordinate172;

Shape168.geometry = IndexedFaceSet171;

Group167.children = new MFNode();

Group167.children[0] = Shape168;

Shape Shape173 = createNode("Shape");
Shape173.DEF = "ShoeSkin";
Appearance Appearance174 = createNode("Appearance");
Material Material175 = createNode("Material");
Material175.diffuseColor = new SFColor(new float[0,0,0]);
Material175.transparency = 0.5;
Appearance174.material = Material175;

Shape173.appearance = Appearance174;

IndexedFaceSet IndexedFaceSet176 = createNode("IndexedFaceSet");
IndexedFaceSet176.coordIndex = new MFInt32(new int[60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1]);
Coordinate Coordinate177 = createNode("Coordinate");
Coordinate177.USE = "SKINCOORD";
IndexedFaceSet176.coord = Coordinate177;

Shape173.geometry = IndexedFaceSet176;

Group167.children[1] = Shape173;

Shape Shape178 = createNode("Shape");
Shape178.DEF = "ShirtSkin";
Appearance Appearance179 = createNode("Appearance");
Material Material180 = createNode("Material");
Material180.diffuseColor = new SFColor(new float[1,1,0]);
Material180.transparency = 0.5;
Appearance179.material = Material180;

Shape178.appearance = Appearance179;

IndexedFaceSet IndexedFaceSet181 = createNode("IndexedFaceSet");
IndexedFaceSet181.coordIndex = new MFInt32(new int[148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1]);
Coordinate Coordinate182 = createNode("Coordinate");
Coordinate182.USE = "SKINCOORD";
IndexedFaceSet181.coord = Coordinate182;

Shape178.geometry = IndexedFaceSet181;

Group167.children[2] = Shape178;

Shape Shape183 = createNode("Shape");
Shape183.DEF = "HeadHandsFleshToneSkin";
Appearance Appearance184 = createNode("Appearance");
Material Material185 = createNode("Material");
Material185.diffuseColor = new SFColor(new float[1,0.75,0.75]);
Material185.transparency = 0.5;
Appearance184.material = Material185;

Shape183.appearance = Appearance184;

IndexedFaceSet IndexedFaceSet186 = createNode("IndexedFaceSet");
IndexedFaceSet186.coordIndex = new MFInt32(new int[172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
Coordinate Coordinate187 = createNode("Coordinate");
Coordinate187.USE = "SKINCOORD";
IndexedFaceSet186.coord = Coordinate187;

Shape183.geometry = IndexedFaceSet186;

Group167.children[3] = Shape183;

Shape Shape188 = createNode("Shape");
Shape188.DEF = "SkinLines";
Appearance Appearance189 = createNode("Appearance");
Material Material190 = createNode("Material");
Material190.diffuseColor = new SFColor(new float[0,0,0]);
Appearance189.material = Material190;

Shape188.appearance = Appearance189;

IndexedLineSet IndexedLineSet191 = createNode("IndexedLineSet");
IndexedLineSet191.coordIndex = new MFInt32(new int[0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
Coordinate Coordinate192 = createNode("Coordinate");
Coordinate192.USE = "SKINCOORD";
IndexedLineSet191.coord = Coordinate192;

Shape188.geometry = IndexedLineSet191;

Group167.children[4] = Shape188;

HAnimHumanoid36.skin[41] = Group167;

children[2] = HAnimHumanoid36;

Group Group193 = createNode("Group");
Group193.DEF = "StopAnimation";
TimeSensor TimeSensor194 = createNode("TimeSensor");
TimeSensor194.DEF = "StopTimer";
TimeSensor194.cycleInterval = 5.73;
TimeSensor194.loop = True;
Group193.children = new MFNode();

Group193.children[0] = TimeSensor194;

PositionInterpolator PositionInterpolator195 = createNode("PositionInterpolator");
PositionInterpolator195.DEF = "Stop_humanoid_root_TranslationInterpolator";
PositionInterpolator195.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator195.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group193.children[1] = PositionInterpolator195;

OrientationInterpolator OrientationInterpolator196 = createNode("OrientationInterpolator");
OrientationInterpolator196.DEF = "Stop_humanoid_root_RotationInterpolator";
OrientationInterpolator196.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator196.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[2] = OrientationInterpolator196;

OrientationInterpolator OrientationInterpolator197 = createNode("OrientationInterpolator");
OrientationInterpolator197.DEF = "Stop_sacroiliac_RotationInterpolator";
OrientationInterpolator197.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator197.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[3] = OrientationInterpolator197;

OrientationInterpolator OrientationInterpolator198 = createNode("OrientationInterpolator");
OrientationInterpolator198.DEF = "Stop_l_hip_RotationInterpolator";
OrientationInterpolator198.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator198.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[4] = OrientationInterpolator198;

OrientationInterpolator OrientationInterpolator199 = createNode("OrientationInterpolator");
OrientationInterpolator199.DEF = "Stop_l_knee_RotationInterpolator";
OrientationInterpolator199.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator199.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[5] = OrientationInterpolator199;

OrientationInterpolator OrientationInterpolator200 = createNode("OrientationInterpolator");
OrientationInterpolator200.DEF = "Stop_l_ankle_RotationInterpolator";
OrientationInterpolator200.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator200.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[6] = OrientationInterpolator200;

OrientationInterpolator OrientationInterpolator201 = createNode("OrientationInterpolator");
OrientationInterpolator201.DEF = "Stop_l_subtalar_RotationInterpolator";
OrientationInterpolator201.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator201.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[7] = OrientationInterpolator201;

OrientationInterpolator OrientationInterpolator202 = createNode("OrientationInterpolator");
OrientationInterpolator202.DEF = "Stop_l_midtarsal_RotationInterpolator";
OrientationInterpolator202.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator202.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[8] = OrientationInterpolator202;

OrientationInterpolator OrientationInterpolator203 = createNode("OrientationInterpolator");
OrientationInterpolator203.DEF = "Stop_l_metatarsal_RotationInterpolator";
OrientationInterpolator203.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator203.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[9] = OrientationInterpolator203;

OrientationInterpolator OrientationInterpolator204 = createNode("OrientationInterpolator");
OrientationInterpolator204.DEF = "Stop_r_hip_RotationInterpolator";
OrientationInterpolator204.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator204.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[10] = OrientationInterpolator204;

OrientationInterpolator OrientationInterpolator205 = createNode("OrientationInterpolator");
OrientationInterpolator205.DEF = "Stop_r_knee_RotationInterpolator";
OrientationInterpolator205.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator205.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[11] = OrientationInterpolator205;

OrientationInterpolator OrientationInterpolator206 = createNode("OrientationInterpolator");
OrientationInterpolator206.DEF = "Stop_r_ankle_RotationInterpolator";
OrientationInterpolator206.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator206.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[12] = OrientationInterpolator206;

OrientationInterpolator OrientationInterpolator207 = createNode("OrientationInterpolator");
OrientationInterpolator207.DEF = "Stop_r_subtalar_RotationInterpolator";
OrientationInterpolator207.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator207.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[13] = OrientationInterpolator207;

OrientationInterpolator OrientationInterpolator208 = createNode("OrientationInterpolator");
OrientationInterpolator208.DEF = "Stop_r_midtarsal_RotationInterpolator";
OrientationInterpolator208.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator208.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[14] = OrientationInterpolator208;

OrientationInterpolator OrientationInterpolator209 = createNode("OrientationInterpolator");
OrientationInterpolator209.DEF = "Stop_r_metatarsal_RotationInterpolator";
OrientationInterpolator209.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator209.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[15] = OrientationInterpolator209;

OrientationInterpolator OrientationInterpolator210 = createNode("OrientationInterpolator");
OrientationInterpolator210.DEF = "Stop_vl5_RotationInterpolator";
OrientationInterpolator210.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator210.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[16] = OrientationInterpolator210;

OrientationInterpolator OrientationInterpolator211 = createNode("OrientationInterpolator");
OrientationInterpolator211.DEF = "Stop_vl4_RotationInterpolator";
OrientationInterpolator211.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator211.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[17] = OrientationInterpolator211;

OrientationInterpolator OrientationInterpolator212 = createNode("OrientationInterpolator");
OrientationInterpolator212.DEF = "Stop_vl3_RotationInterpolator";
OrientationInterpolator212.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator212.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[18] = OrientationInterpolator212;

OrientationInterpolator OrientationInterpolator213 = createNode("OrientationInterpolator");
OrientationInterpolator213.DEF = "Stop_vl2_RotationInterpolator";
OrientationInterpolator213.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator213.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[19] = OrientationInterpolator213;

OrientationInterpolator OrientationInterpolator214 = createNode("OrientationInterpolator");
OrientationInterpolator214.DEF = "Stop_vl1_RotationInterpolator";
OrientationInterpolator214.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator214.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[20] = OrientationInterpolator214;

OrientationInterpolator OrientationInterpolator215 = createNode("OrientationInterpolator");
OrientationInterpolator215.DEF = "Stop_vt12_RotationInterpolator";
OrientationInterpolator215.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator215.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[21] = OrientationInterpolator215;

OrientationInterpolator OrientationInterpolator216 = createNode("OrientationInterpolator");
OrientationInterpolator216.DEF = "Stop_vt11_RotationInterpolator";
OrientationInterpolator216.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator216.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[22] = OrientationInterpolator216;

OrientationInterpolator OrientationInterpolator217 = createNode("OrientationInterpolator");
OrientationInterpolator217.DEF = "Stop_vt10_RotationInterpolator";
OrientationInterpolator217.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator217.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[23] = OrientationInterpolator217;

OrientationInterpolator OrientationInterpolator218 = createNode("OrientationInterpolator");
OrientationInterpolator218.DEF = "Stop_vt9_RotationInterpolator";
OrientationInterpolator218.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator218.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[24] = OrientationInterpolator218;

OrientationInterpolator OrientationInterpolator219 = createNode("OrientationInterpolator");
OrientationInterpolator219.DEF = "Stop_vt8_RotationInterpolator";
OrientationInterpolator219.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator219.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[25] = OrientationInterpolator219;

OrientationInterpolator OrientationInterpolator220 = createNode("OrientationInterpolator");
OrientationInterpolator220.DEF = "Stop_vt7_RotationInterpolator";
OrientationInterpolator220.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator220.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[26] = OrientationInterpolator220;

OrientationInterpolator OrientationInterpolator221 = createNode("OrientationInterpolator");
OrientationInterpolator221.DEF = "Stop_vt6_RotationInterpolator";
OrientationInterpolator221.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator221.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[27] = OrientationInterpolator221;

OrientationInterpolator OrientationInterpolator222 = createNode("OrientationInterpolator");
OrientationInterpolator222.DEF = "Stop_vt5_RotationInterpolator";
OrientationInterpolator222.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator222.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[28] = OrientationInterpolator222;

OrientationInterpolator OrientationInterpolator223 = createNode("OrientationInterpolator");
OrientationInterpolator223.DEF = "Stop_vt4_RotationInterpolator";
OrientationInterpolator223.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator223.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[29] = OrientationInterpolator223;

OrientationInterpolator OrientationInterpolator224 = createNode("OrientationInterpolator");
OrientationInterpolator224.DEF = "Stop_vt3_RotationInterpolator";
OrientationInterpolator224.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator224.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[30] = OrientationInterpolator224;

OrientationInterpolator OrientationInterpolator225 = createNode("OrientationInterpolator");
OrientationInterpolator225.DEF = "Stop_vt2_RotationInterpolator";
OrientationInterpolator225.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator225.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[31] = OrientationInterpolator225;

OrientationInterpolator OrientationInterpolator226 = createNode("OrientationInterpolator");
OrientationInterpolator226.DEF = "Stop_vt1_RotationInterpolator";
OrientationInterpolator226.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator226.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[32] = OrientationInterpolator226;

OrientationInterpolator OrientationInterpolator227 = createNode("OrientationInterpolator");
OrientationInterpolator227.DEF = "Stop_vc7_RotationInterpolator";
OrientationInterpolator227.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator227.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[33] = OrientationInterpolator227;

OrientationInterpolator OrientationInterpolator228 = createNode("OrientationInterpolator");
OrientationInterpolator228.DEF = "Stop_vc6_RotationInterpolator";
OrientationInterpolator228.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator228.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[34] = OrientationInterpolator228;

OrientationInterpolator OrientationInterpolator229 = createNode("OrientationInterpolator");
OrientationInterpolator229.DEF = "Stop_vc5_RotationInterpolator";
OrientationInterpolator229.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator229.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[35] = OrientationInterpolator229;

OrientationInterpolator OrientationInterpolator230 = createNode("OrientationInterpolator");
OrientationInterpolator230.DEF = "Stop_vc4_RotationInterpolator";
OrientationInterpolator230.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator230.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[36] = OrientationInterpolator230;

OrientationInterpolator OrientationInterpolator231 = createNode("OrientationInterpolator");
OrientationInterpolator231.DEF = "Stop_vc3_RotationInterpolator";
OrientationInterpolator231.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator231.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[37] = OrientationInterpolator231;

OrientationInterpolator OrientationInterpolator232 = createNode("OrientationInterpolator");
OrientationInterpolator232.DEF = "Stop_vc2_RotationInterpolator";
OrientationInterpolator232.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator232.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[38] = OrientationInterpolator232;

OrientationInterpolator OrientationInterpolator233 = createNode("OrientationInterpolator");
OrientationInterpolator233.DEF = "Stop_vc1_RotationInterpolator";
OrientationInterpolator233.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator233.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[39] = OrientationInterpolator233;

OrientationInterpolator OrientationInterpolator234 = createNode("OrientationInterpolator");
OrientationInterpolator234.DEF = "Stop_skullbase_RotationInterpolator";
OrientationInterpolator234.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator234.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[40] = OrientationInterpolator234;

OrientationInterpolator OrientationInterpolator235 = createNode("OrientationInterpolator");
OrientationInterpolator235.DEF = "Stop_l_eyeball_joint_RotationInterpolator";
OrientationInterpolator235.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator235.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[41] = OrientationInterpolator235;

OrientationInterpolator OrientationInterpolator236 = createNode("OrientationInterpolator");
OrientationInterpolator236.DEF = "Stop_r_eyeball_joint_RotationInterpolator";
OrientationInterpolator236.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator236.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[42] = OrientationInterpolator236;

OrientationInterpolator OrientationInterpolator237 = createNode("OrientationInterpolator");
OrientationInterpolator237.DEF = "Stop_l_sternoclavicular_RotationInterpolator";
OrientationInterpolator237.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator237.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[43] = OrientationInterpolator237;

OrientationInterpolator OrientationInterpolator238 = createNode("OrientationInterpolator");
OrientationInterpolator238.DEF = "Stop_l_acromioclavicular_RotationInterpolator";
OrientationInterpolator238.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator238.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[44] = OrientationInterpolator238;

OrientationInterpolator OrientationInterpolator239 = createNode("OrientationInterpolator");
OrientationInterpolator239.DEF = "Stop_l_shoulder_RotationInterpolator";
OrientationInterpolator239.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator239.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[45] = OrientationInterpolator239;

OrientationInterpolator OrientationInterpolator240 = createNode("OrientationInterpolator");
OrientationInterpolator240.DEF = "Stop_l_elbow_RotationInterpolator";
OrientationInterpolator240.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator240.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[46] = OrientationInterpolator240;

OrientationInterpolator OrientationInterpolator241 = createNode("OrientationInterpolator");
OrientationInterpolator241.DEF = "Stop_l_wrist_RotationInterpolator";
OrientationInterpolator241.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator241.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[47] = OrientationInterpolator241;

OrientationInterpolator OrientationInterpolator242 = createNode("OrientationInterpolator");
OrientationInterpolator242.DEF = "Stop_l_thumb1_RotationInterpolator";
OrientationInterpolator242.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator242.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[48] = OrientationInterpolator242;

OrientationInterpolator OrientationInterpolator243 = createNode("OrientationInterpolator");
OrientationInterpolator243.DEF = "Stop_l_thumb2_RotationInterpolator";
OrientationInterpolator243.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator243.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[49] = OrientationInterpolator243;

OrientationInterpolator OrientationInterpolator244 = createNode("OrientationInterpolator");
OrientationInterpolator244.DEF = "Stop_l_thumb3_RotationInterpolator";
OrientationInterpolator244.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator244.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[50] = OrientationInterpolator244;

OrientationInterpolator OrientationInterpolator245 = createNode("OrientationInterpolator");
OrientationInterpolator245.DEF = "Stop_l_index0_RotationInterpolator";
OrientationInterpolator245.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator245.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[51] = OrientationInterpolator245;

OrientationInterpolator OrientationInterpolator246 = createNode("OrientationInterpolator");
OrientationInterpolator246.DEF = "Stop_l_index1_RotationInterpolator";
OrientationInterpolator246.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator246.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[52] = OrientationInterpolator246;

OrientationInterpolator OrientationInterpolator247 = createNode("OrientationInterpolator");
OrientationInterpolator247.DEF = "Stop_l_index2_RotationInterpolator";
OrientationInterpolator247.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator247.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[53] = OrientationInterpolator247;

OrientationInterpolator OrientationInterpolator248 = createNode("OrientationInterpolator");
OrientationInterpolator248.DEF = "Stop_l_index3_RotationInterpolator";
OrientationInterpolator248.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator248.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[54] = OrientationInterpolator248;

OrientationInterpolator OrientationInterpolator249 = createNode("OrientationInterpolator");
OrientationInterpolator249.DEF = "Stop_l_middle0_RotationInterpolator";
OrientationInterpolator249.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator249.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[55] = OrientationInterpolator249;

OrientationInterpolator OrientationInterpolator250 = createNode("OrientationInterpolator");
OrientationInterpolator250.DEF = "Stop_l_middle1_RotationInterpolator";
OrientationInterpolator250.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator250.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[56] = OrientationInterpolator250;

OrientationInterpolator OrientationInterpolator251 = createNode("OrientationInterpolator");
OrientationInterpolator251.DEF = "Stop_l_middle2_RotationInterpolator";
OrientationInterpolator251.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator251.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[57] = OrientationInterpolator251;

OrientationInterpolator OrientationInterpolator252 = createNode("OrientationInterpolator");
OrientationInterpolator252.DEF = "Stop_l_middle3_RotationInterpolator";
OrientationInterpolator252.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator252.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[58] = OrientationInterpolator252;

OrientationInterpolator OrientationInterpolator253 = createNode("OrientationInterpolator");
OrientationInterpolator253.DEF = "Stop_l_ring0_RotationInterpolator";
OrientationInterpolator253.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator253.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[59] = OrientationInterpolator253;

OrientationInterpolator OrientationInterpolator254 = createNode("OrientationInterpolator");
OrientationInterpolator254.DEF = "Stop_l_ring1_RotationInterpolator";
OrientationInterpolator254.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator254.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[60] = OrientationInterpolator254;

OrientationInterpolator OrientationInterpolator255 = createNode("OrientationInterpolator");
OrientationInterpolator255.DEF = "Stop_l_ring2_RotationInterpolator";
OrientationInterpolator255.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator255.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[61] = OrientationInterpolator255;

OrientationInterpolator OrientationInterpolator256 = createNode("OrientationInterpolator");
OrientationInterpolator256.DEF = "Stop_l_ring3_RotationInterpolator";
OrientationInterpolator256.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator256.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[62] = OrientationInterpolator256;

OrientationInterpolator OrientationInterpolator257 = createNode("OrientationInterpolator");
OrientationInterpolator257.DEF = "Stop_l_pinky0_RotationInterpolator";
OrientationInterpolator257.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator257.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[63] = OrientationInterpolator257;

OrientationInterpolator OrientationInterpolator258 = createNode("OrientationInterpolator");
OrientationInterpolator258.DEF = "Stop_l_pinky1_RotationInterpolator";
OrientationInterpolator258.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator258.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[64] = OrientationInterpolator258;

OrientationInterpolator OrientationInterpolator259 = createNode("OrientationInterpolator");
OrientationInterpolator259.DEF = "Stop_l_pinky2_RotationInterpolator";
OrientationInterpolator259.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator259.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[65] = OrientationInterpolator259;

OrientationInterpolator OrientationInterpolator260 = createNode("OrientationInterpolator");
OrientationInterpolator260.DEF = "Stop_l_pinky3_RotationInterpolator";
OrientationInterpolator260.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator260.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[66] = OrientationInterpolator260;

OrientationInterpolator OrientationInterpolator261 = createNode("OrientationInterpolator");
OrientationInterpolator261.DEF = "Stop_r_sternoclavicular_RotationInterpolator";
OrientationInterpolator261.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator261.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[67] = OrientationInterpolator261;

OrientationInterpolator OrientationInterpolator262 = createNode("OrientationInterpolator");
OrientationInterpolator262.DEF = "Stop_r_acromioclavicular_RotationInterpolator";
OrientationInterpolator262.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator262.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[68] = OrientationInterpolator262;

OrientationInterpolator OrientationInterpolator263 = createNode("OrientationInterpolator");
OrientationInterpolator263.DEF = "Stop_r_shoulder_RotationInterpolator";
OrientationInterpolator263.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator263.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[69] = OrientationInterpolator263;

OrientationInterpolator OrientationInterpolator264 = createNode("OrientationInterpolator");
OrientationInterpolator264.DEF = "Stop_r_elbow_RotationInterpolator";
OrientationInterpolator264.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator264.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[70] = OrientationInterpolator264;

OrientationInterpolator OrientationInterpolator265 = createNode("OrientationInterpolator");
OrientationInterpolator265.DEF = "Stop_r_wrist_RotationInterpolator";
OrientationInterpolator265.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator265.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[71] = OrientationInterpolator265;

OrientationInterpolator OrientationInterpolator266 = createNode("OrientationInterpolator");
OrientationInterpolator266.DEF = "Stop_r_thumb1_RotationInterpolator";
OrientationInterpolator266.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator266.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[72] = OrientationInterpolator266;

OrientationInterpolator OrientationInterpolator267 = createNode("OrientationInterpolator");
OrientationInterpolator267.DEF = "Stop_r_thumb2_RotationInterpolator";
OrientationInterpolator267.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator267.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[73] = OrientationInterpolator267;

OrientationInterpolator OrientationInterpolator268 = createNode("OrientationInterpolator");
OrientationInterpolator268.DEF = "Stop_r_thumb3_RotationInterpolator";
OrientationInterpolator268.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator268.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[74] = OrientationInterpolator268;

OrientationInterpolator OrientationInterpolator269 = createNode("OrientationInterpolator");
OrientationInterpolator269.DEF = "Stop_r_index0_RotationInterpolator";
OrientationInterpolator269.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator269.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[75] = OrientationInterpolator269;

OrientationInterpolator OrientationInterpolator270 = createNode("OrientationInterpolator");
OrientationInterpolator270.DEF = "Stop_r_index1_RotationInterpolator";
OrientationInterpolator270.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator270.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[76] = OrientationInterpolator270;

OrientationInterpolator OrientationInterpolator271 = createNode("OrientationInterpolator");
OrientationInterpolator271.DEF = "Stop_r_index2_RotationInterpolator";
OrientationInterpolator271.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator271.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[77] = OrientationInterpolator271;

OrientationInterpolator OrientationInterpolator272 = createNode("OrientationInterpolator");
OrientationInterpolator272.DEF = "Stop_r_index3_RotationInterpolator";
OrientationInterpolator272.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator272.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[78] = OrientationInterpolator272;

OrientationInterpolator OrientationInterpolator273 = createNode("OrientationInterpolator");
OrientationInterpolator273.DEF = "Stop_r_middle0_RotationInterpolator";
OrientationInterpolator273.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator273.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[79] = OrientationInterpolator273;

OrientationInterpolator OrientationInterpolator274 = createNode("OrientationInterpolator");
OrientationInterpolator274.DEF = "Stop_r_middle1_RotationInterpolator";
OrientationInterpolator274.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator274.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[80] = OrientationInterpolator274;

OrientationInterpolator OrientationInterpolator275 = createNode("OrientationInterpolator");
OrientationInterpolator275.DEF = "Stop_r_middle2_RotationInterpolator";
OrientationInterpolator275.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator275.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[81] = OrientationInterpolator275;

OrientationInterpolator OrientationInterpolator276 = createNode("OrientationInterpolator");
OrientationInterpolator276.DEF = "Stop_r_middle3_RotationInterpolator";
OrientationInterpolator276.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator276.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[82] = OrientationInterpolator276;

OrientationInterpolator OrientationInterpolator277 = createNode("OrientationInterpolator");
OrientationInterpolator277.DEF = "Stop_r_ring0_RotationInterpolator";
OrientationInterpolator277.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator277.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[83] = OrientationInterpolator277;

OrientationInterpolator OrientationInterpolator278 = createNode("OrientationInterpolator");
OrientationInterpolator278.DEF = "Stop_r_ring1_RotationInterpolator";
OrientationInterpolator278.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator278.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[84] = OrientationInterpolator278;

OrientationInterpolator OrientationInterpolator279 = createNode("OrientationInterpolator");
OrientationInterpolator279.DEF = "Stop_r_ring2_RotationInterpolator";
OrientationInterpolator279.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator279.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[85] = OrientationInterpolator279;

OrientationInterpolator OrientationInterpolator280 = createNode("OrientationInterpolator");
OrientationInterpolator280.DEF = "Stop_r_ring3_RotationInterpolator";
OrientationInterpolator280.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator280.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[86] = OrientationInterpolator280;

OrientationInterpolator OrientationInterpolator281 = createNode("OrientationInterpolator");
OrientationInterpolator281.DEF = "Stop_r_pinky0_RotationInterpolator";
OrientationInterpolator281.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator281.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[87] = OrientationInterpolator281;

OrientationInterpolator OrientationInterpolator282 = createNode("OrientationInterpolator");
OrientationInterpolator282.DEF = "Stop_r_pinky1_RotationInterpolator";
OrientationInterpolator282.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator282.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[88] = OrientationInterpolator282;

OrientationInterpolator OrientationInterpolator283 = createNode("OrientationInterpolator");
OrientationInterpolator283.DEF = "Stop_r_pinky2_RotationInterpolator";
OrientationInterpolator283.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator283.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[89] = OrientationInterpolator283;

OrientationInterpolator OrientationInterpolator284 = createNode("OrientationInterpolator");
OrientationInterpolator284.DEF = "Stop_r_pinky3_RotationInterpolator";
OrientationInterpolator284.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator284.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group193.children[90] = OrientationInterpolator284;

children[3] = Group193;

Group Group285 = createNode("Group");
Group285.DEF = "StandAnimation";
TimeSensor TimeSensor286 = createNode("TimeSensor");
TimeSensor286.DEF = "StandTimer";
TimeSensor286.cycleInterval = 5.73;
TimeSensor286.loop = True;
Group285.children = new MFNode();

Group285.children[0] = TimeSensor286;

OrientationInterpolator OrientationInterpolator287 = createNode("OrientationInterpolator");
OrientationInterpolator287.DEF = "Stand_r_metatarsal_PitchInterpolator";
OrientationInterpolator287.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator287.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.015,1,0,0,0.17,-1,0,0,0.025,1,0,0,0.01,1,0,0,0]);
Group285.children[1] = OrientationInterpolator287;

OrientationInterpolator OrientationInterpolator288 = createNode("OrientationInterpolator");
OrientationInterpolator288.DEF = "Stand_r_ankle_RotationInterpolator";
OrientationInterpolator288.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator288.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group285.children[2] = OrientationInterpolator288;

OrientationInterpolator OrientationInterpolator289 = createNode("OrientationInterpolator");
OrientationInterpolator289.DEF = "Stand_r_knee_RotationInterpolator";
OrientationInterpolator289.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator289.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group285.children[3] = OrientationInterpolator289;

OrientationInterpolator OrientationInterpolator290 = createNode("OrientationInterpolator");
OrientationInterpolator290.DEF = "Stand_r_hip_RotationInterpolator";
OrientationInterpolator290.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator290.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group285.children[4] = OrientationInterpolator290;

OrientationInterpolator OrientationInterpolator291 = createNode("OrientationInterpolator");
OrientationInterpolator291.DEF = "Stand_l_ankle_RotationInterpolator";
OrientationInterpolator291.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator291.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group285.children[5] = OrientationInterpolator291;

OrientationInterpolator OrientationInterpolator292 = createNode("OrientationInterpolator");
OrientationInterpolator292.DEF = "Stand_l_knee_RotationInterpolator";
OrientationInterpolator292.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator292.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group285.children[6] = OrientationInterpolator292;

OrientationInterpolator OrientationInterpolator293 = createNode("OrientationInterpolator");
OrientationInterpolator293.DEF = "Stand_l_hip_RotationInterpolator";
OrientationInterpolator293.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator293.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group285.children[7] = OrientationInterpolator293;

OrientationInterpolator OrientationInterpolator294 = createNode("OrientationInterpolator");
OrientationInterpolator294.DEF = "Stand_r_wrist_RotationInterpolator";
OrientationInterpolator294.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator294.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,0.25,0,0,1,0]);
Group285.children[8] = OrientationInterpolator294;

OrientationInterpolator OrientationInterpolator295 = createNode("OrientationInterpolator");
OrientationInterpolator295.DEF = "Stand_r_elbow_RotationInterpolator";
OrientationInterpolator295.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator295.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group285.children[9] = OrientationInterpolator295;

OrientationInterpolator OrientationInterpolator296 = createNode("OrientationInterpolator");
OrientationInterpolator296.DEF = "Stand_r_shoulder_RotationInterpolator";
OrientationInterpolator296.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator296.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group285.children[10] = OrientationInterpolator296;

OrientationInterpolator OrientationInterpolator297 = createNode("OrientationInterpolator");
OrientationInterpolator297.DEF = "Stand_l_wrist_RotationInterpolator";
OrientationInterpolator297.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator297.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group285.children[11] = OrientationInterpolator297;

OrientationInterpolator OrientationInterpolator298 = createNode("OrientationInterpolator");
OrientationInterpolator298.DEF = "Stand_l_elbow_RotationInterpolator";
OrientationInterpolator298.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator298.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group285.children[12] = OrientationInterpolator298;

OrientationInterpolator OrientationInterpolator299 = createNode("OrientationInterpolator");
OrientationInterpolator299.DEF = "Stand_l_shoulder_RotationInterpolator";
OrientationInterpolator299.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator299.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group285.children[13] = OrientationInterpolator299;

OrientationInterpolator OrientationInterpolator300 = createNode("OrientationInterpolator");
OrientationInterpolator300.DEF = "Stand_head_RotationInterpolator";
OrientationInterpolator300.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator300.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group285.children[14] = OrientationInterpolator300;

OrientationInterpolator OrientationInterpolator301 = createNode("OrientationInterpolator");
OrientationInterpolator301.DEF = "Stand_neck_RotationInterpolator";
OrientationInterpolator301.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator301.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,0,0,1,0]);
Group285.children[15] = OrientationInterpolator301;

OrientationInterpolator OrientationInterpolator302 = createNode("OrientationInterpolator");
OrientationInterpolator302.DEF = "Stand_l_eyeball_RotationInterpolator";
OrientationInterpolator302.key = new MFFloat(new float[0,0.4,0.7,1]);
OrientationInterpolator302.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group285.children[16] = OrientationInterpolator302;

OrientationInterpolator OrientationInterpolator303 = createNode("OrientationInterpolator");
OrientationInterpolator303.DEF = "Stand_r_eyeball_RotationInterpolator";
OrientationInterpolator303.key = new MFFloat(new float[0,0.4,0.7,1]);
OrientationInterpolator303.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group285.children[17] = OrientationInterpolator303;

OrientationInterpolator OrientationInterpolator304 = createNode("OrientationInterpolator");
OrientationInterpolator304.DEF = "Stand_lower_body_RotationInterpolator";
OrientationInterpolator304.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator304.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group285.children[18] = OrientationInterpolator304;

OrientationInterpolator OrientationInterpolator305 = createNode("OrientationInterpolator");
OrientationInterpolator305.DEF = "Stand_upper_body_RotationInterpolator";
OrientationInterpolator305.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator305.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group285.children[19] = OrientationInterpolator305;

OrientationInterpolator OrientationInterpolator306 = createNode("OrientationInterpolator");
OrientationInterpolator306.DEF = "Stand_whole_body_RotationInterpolator";
OrientationInterpolator306.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator306.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group285.children[20] = OrientationInterpolator306;

PositionInterpolator PositionInterpolator307 = createNode("PositionInterpolator");
PositionInterpolator307.DEF = "Stand_whole_body_TranslationInterpolator";
PositionInterpolator307.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator307.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group285.children[21] = PositionInterpolator307;

OrientationInterpolator OrientationInterpolator308 = createNode("OrientationInterpolator");
OrientationInterpolator308.DEF = "Stand_l_sternoclavicular_RollInterpolator";
OrientationInterpolator308.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator308.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group285.children[22] = OrientationInterpolator308;

OrientationInterpolator OrientationInterpolator309 = createNode("OrientationInterpolator");
OrientationInterpolator309.DEF = "Stand_l_acromioclavicular_RollInterpolator";
OrientationInterpolator309.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator309.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group285.children[23] = OrientationInterpolator309;

OrientationInterpolator OrientationInterpolator310 = createNode("OrientationInterpolator");
OrientationInterpolator310.DEF = "Stand_r_sternoclavicular_RollInterpolator";
OrientationInterpolator310.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator310.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group285.children[24] = OrientationInterpolator310;

OrientationInterpolator OrientationInterpolator311 = createNode("OrientationInterpolator");
OrientationInterpolator311.DEF = "Stand_r_acromioclavicular_RollInterpolator";
OrientationInterpolator311.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator311.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group285.children[25] = OrientationInterpolator311;

OrientationInterpolator OrientationInterpolator312 = createNode("OrientationInterpolator");
OrientationInterpolator312.DEF = "Stand_sacroiliac_YawInterpolator";
OrientationInterpolator312.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator312.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group285.children[26] = OrientationInterpolator312;

OrientationInterpolator OrientationInterpolator313 = createNode("OrientationInterpolator");
OrientationInterpolator313.DEF = "Stand_vl5_YawInterpolator";
OrientationInterpolator313.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator313.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group285.children[27] = OrientationInterpolator313;

OrientationInterpolator OrientationInterpolator314 = createNode("OrientationInterpolator");
OrientationInterpolator314.DEF = "Stand_vc6_YawInterpolator";
OrientationInterpolator314.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator314.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,0,0]);
Group285.children[28] = OrientationInterpolator314;

OrientationInterpolator OrientationInterpolator315 = createNode("OrientationInterpolator");
OrientationInterpolator315.DEF = "Stand_l_thumb1_PitchInterpolator";
OrientationInterpolator315.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator315.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group285.children[29] = OrientationInterpolator315;

OrientationInterpolator OrientationInterpolator316 = createNode("OrientationInterpolator");
OrientationInterpolator316.DEF = "Stand_r_thumb1_PitchInterpolator";
OrientationInterpolator316.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator316.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,0.1,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group285.children[30] = OrientationInterpolator316;

OrientationInterpolator OrientationInterpolator317 = createNode("OrientationInterpolator");
OrientationInterpolator317.DEF = "Stand_r_index1_RollInterpolator";
OrientationInterpolator317.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator317.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.1,0,0,1,0.2,0,0,1,0.3,0,0,1,0,0,0,1,0]);
Group285.children[31] = OrientationInterpolator317;

OrientationInterpolator OrientationInterpolator318 = createNode("OrientationInterpolator");
OrientationInterpolator318.DEF = "Stand_r_index2_RollInterpolator";
OrientationInterpolator318.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator318.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.4,0,0,1,0.32,0,0,1,0.25,0,0,1,0.2,0,0,1,0]);
Group285.children[32] = OrientationInterpolator318;

OrientationInterpolator OrientationInterpolator319 = createNode("OrientationInterpolator");
OrientationInterpolator319.DEF = "Stand_r_index3_RollInterpolator";
OrientationInterpolator319.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator319.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.3,0,0,1,0.35,0,0,1,0.2,0,0,1,0]);
Group285.children[33] = OrientationInterpolator319;

children[4] = Group285;

Group Group320 = createNode("Group");
Group320.DEF = "PitchesAnimation";
TimeSensor TimeSensor321 = createNode("TimeSensor");
TimeSensor321.DEF = "PitchTimer";
TimeSensor321.cycleInterval = 5.73;
TimeSensor321.loop = True;
Group320.children = new MFNode();

Group320.children[0] = TimeSensor321;

OrientationInterpolator OrientationInterpolator322 = createNode("OrientationInterpolator");
OrientationInterpolator322.DEF = "Pitch_r_metatarsal_PitchInterpolator";
OrientationInterpolator322.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator322.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group320.children[1] = OrientationInterpolator322;

OrientationInterpolator OrientationInterpolator323 = createNode("OrientationInterpolator");
OrientationInterpolator323.DEF = "Pitches_r_ankle_RotationInterpolator";
OrientationInterpolator323.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator323.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group320.children[2] = OrientationInterpolator323;

OrientationInterpolator OrientationInterpolator324 = createNode("OrientationInterpolator");
OrientationInterpolator324.DEF = "Pitches_r_knee_RotationInterpolator";
OrientationInterpolator324.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator324.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group320.children[3] = OrientationInterpolator324;

OrientationInterpolator OrientationInterpolator325 = createNode("OrientationInterpolator");
OrientationInterpolator325.DEF = "Pitches_r_hip_RotationInterpolator";
OrientationInterpolator325.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator325.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group320.children[4] = OrientationInterpolator325;

OrientationInterpolator OrientationInterpolator326 = createNode("OrientationInterpolator");
OrientationInterpolator326.DEF = "Pitches_l_ankle_RotationInterpolator";
OrientationInterpolator326.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator326.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group320.children[5] = OrientationInterpolator326;

OrientationInterpolator OrientationInterpolator327 = createNode("OrientationInterpolator");
OrientationInterpolator327.DEF = "Pitches_l_knee_RotationInterpolator";
OrientationInterpolator327.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator327.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group320.children[6] = OrientationInterpolator327;

OrientationInterpolator OrientationInterpolator328 = createNode("OrientationInterpolator");
OrientationInterpolator328.DEF = "Pitches_l_hip_RotationInterpolator";
OrientationInterpolator328.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator328.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group320.children[7] = OrientationInterpolator328;

OrientationInterpolator OrientationInterpolator329 = createNode("OrientationInterpolator");
OrientationInterpolator329.DEF = "Pitches_r_wrist_RotationInterpolator";
OrientationInterpolator329.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator329.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group320.children[8] = OrientationInterpolator329;

OrientationInterpolator OrientationInterpolator330 = createNode("OrientationInterpolator");
OrientationInterpolator330.DEF = "Pitches_r_elbow_RotationInterpolator";
OrientationInterpolator330.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator330.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group320.children[9] = OrientationInterpolator330;

OrientationInterpolator OrientationInterpolator331 = createNode("OrientationInterpolator");
OrientationInterpolator331.DEF = "Pitches_r_shoulder_RotationInterpolator";
OrientationInterpolator331.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator331.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group320.children[10] = OrientationInterpolator331;

OrientationInterpolator OrientationInterpolator332 = createNode("OrientationInterpolator");
OrientationInterpolator332.DEF = "Pitches_l_wrist_RotationInterpolator";
OrientationInterpolator332.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator332.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group320.children[11] = OrientationInterpolator332;

OrientationInterpolator OrientationInterpolator333 = createNode("OrientationInterpolator");
OrientationInterpolator333.DEF = "Pitches_l_elbow_RotationInterpolator";
OrientationInterpolator333.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator333.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group320.children[12] = OrientationInterpolator333;

OrientationInterpolator OrientationInterpolator334 = createNode("OrientationInterpolator");
OrientationInterpolator334.DEF = "Pitches_l_shoulder_RotationInterpolator";
OrientationInterpolator334.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator334.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group320.children[13] = OrientationInterpolator334;

OrientationInterpolator OrientationInterpolator335 = createNode("OrientationInterpolator");
OrientationInterpolator335.DEF = "Pitches_head_RotationInterpolator";
OrientationInterpolator335.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator335.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group320.children[14] = OrientationInterpolator335;

OrientationInterpolator OrientationInterpolator336 = createNode("OrientationInterpolator");
OrientationInterpolator336.DEF = "Pitches_neck_RotationInterpolator";
OrientationInterpolator336.key = new MFFloat(new float[0,0.25,0.55,1]);
OrientationInterpolator336.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.55,-1,0,0,1.05,0,0,1,0]);
Group320.children[15] = OrientationInterpolator336;

OrientationInterpolator OrientationInterpolator337 = createNode("OrientationInterpolator");
OrientationInterpolator337.DEF = "Pitches_lower_body_RotationInterpolator";
OrientationInterpolator337.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator337.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group320.children[16] = OrientationInterpolator337;

OrientationInterpolator OrientationInterpolator338 = createNode("OrientationInterpolator");
OrientationInterpolator338.DEF = "Pitches_upper_body_RotationInterpolator";
OrientationInterpolator338.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator338.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group320.children[17] = OrientationInterpolator338;

OrientationInterpolator OrientationInterpolator339 = createNode("OrientationInterpolator");
OrientationInterpolator339.DEF = "Pitches_whole_body_RotationInterpolator";
OrientationInterpolator339.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator339.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group320.children[18] = OrientationInterpolator339;

PositionInterpolator PositionInterpolator340 = createNode("PositionInterpolator");
PositionInterpolator340.DEF = "Pitches_whole_body_TranslationInterpolator";
PositionInterpolator340.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator340.keyValue = new MFVec3f(new float[0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0]);
Group320.children[19] = PositionInterpolator340;

OrientationInterpolator OrientationInterpolator341 = createNode("OrientationInterpolator");
OrientationInterpolator341.DEF = "Pitch_l_sternoclavicular_RollInterpolator";
OrientationInterpolator341.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator341.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group320.children[20] = OrientationInterpolator341;

OrientationInterpolator OrientationInterpolator342 = createNode("OrientationInterpolator");
OrientationInterpolator342.DEF = "Pitch_l_acromioclavicular_RollInterpolator";
OrientationInterpolator342.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator342.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group320.children[21] = OrientationInterpolator342;

OrientationInterpolator OrientationInterpolator343 = createNode("OrientationInterpolator");
OrientationInterpolator343.DEF = "Pitch_r_sternoclavicular_RollInterpolator";
OrientationInterpolator343.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator343.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group320.children[22] = OrientationInterpolator343;

OrientationInterpolator OrientationInterpolator344 = createNode("OrientationInterpolator");
OrientationInterpolator344.DEF = "Pitch_r_acromioclavicular_RollInterpolator";
OrientationInterpolator344.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator344.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group320.children[23] = OrientationInterpolator344;

OrientationInterpolator OrientationInterpolator345 = createNode("OrientationInterpolator");
OrientationInterpolator345.DEF = "Pitch_sacroiliac_YawInterpolator";
OrientationInterpolator345.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator345.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group320.children[24] = OrientationInterpolator345;

OrientationInterpolator OrientationInterpolator346 = createNode("OrientationInterpolator");
OrientationInterpolator346.DEF = "Pitch_vl5_YawInterpolator";
OrientationInterpolator346.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator346.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group320.children[25] = OrientationInterpolator346;

OrientationInterpolator OrientationInterpolator347 = createNode("OrientationInterpolator");
OrientationInterpolator347.DEF = "Pitch_vc6_YawInterpolator";
OrientationInterpolator347.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator347.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group320.children[26] = OrientationInterpolator347;

OrientationInterpolator OrientationInterpolator348 = createNode("OrientationInterpolator");
OrientationInterpolator348.DEF = "Pitch_l_thumb1_PitchInterpolator";
OrientationInterpolator348.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator348.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group320.children[27] = OrientationInterpolator348;

OrientationInterpolator OrientationInterpolator349 = createNode("OrientationInterpolator");
OrientationInterpolator349.DEF = "Pitch_r_thumb1_PitchInterpolator";
OrientationInterpolator349.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator349.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group320.children[28] = OrientationInterpolator349;

children[5] = Group320;

Group Group350 = createNode("Group");
Group350.DEF = "YawsAnimation";
TimeSensor TimeSensor351 = createNode("TimeSensor");
TimeSensor351.DEF = "YawTimer";
TimeSensor351.cycleInterval = 5.73;
TimeSensor351.loop = True;
Group350.children = new MFNode();

Group350.children[0] = TimeSensor351;

OrientationInterpolator OrientationInterpolator352 = createNode("OrientationInterpolator");
OrientationInterpolator352.DEF = "Yaw_r_metatarsal_PitchInterpolator";
OrientationInterpolator352.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator352.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group350.children[1] = OrientationInterpolator352;

OrientationInterpolator OrientationInterpolator353 = createNode("OrientationInterpolator");
OrientationInterpolator353.DEF = "Yaws_r_ankle_RotationInterpolator";
OrientationInterpolator353.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator353.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group350.children[2] = OrientationInterpolator353;

OrientationInterpolator OrientationInterpolator354 = createNode("OrientationInterpolator");
OrientationInterpolator354.DEF = "Yaws_r_knee_RotationInterpolator";
OrientationInterpolator354.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator354.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group350.children[3] = OrientationInterpolator354;

OrientationInterpolator OrientationInterpolator355 = createNode("OrientationInterpolator");
OrientationInterpolator355.DEF = "Yaws_r_hip_RotationInterpolator";
OrientationInterpolator355.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator355.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group350.children[4] = OrientationInterpolator355;

OrientationInterpolator OrientationInterpolator356 = createNode("OrientationInterpolator");
OrientationInterpolator356.DEF = "Yaws_l_ankle_RotationInterpolator";
OrientationInterpolator356.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator356.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group350.children[5] = OrientationInterpolator356;

OrientationInterpolator OrientationInterpolator357 = createNode("OrientationInterpolator");
OrientationInterpolator357.DEF = "Yaws_l_knee_RotationInterpolator";
OrientationInterpolator357.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator357.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group350.children[6] = OrientationInterpolator357;

OrientationInterpolator OrientationInterpolator358 = createNode("OrientationInterpolator");
OrientationInterpolator358.DEF = "Yaws_l_hip_RotationInterpolator";
OrientationInterpolator358.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator358.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group350.children[7] = OrientationInterpolator358;

OrientationInterpolator OrientationInterpolator359 = createNode("OrientationInterpolator");
OrientationInterpolator359.DEF = "Yaws_r_wrist_RotationInterpolator";
OrientationInterpolator359.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator359.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group350.children[8] = OrientationInterpolator359;

OrientationInterpolator OrientationInterpolator360 = createNode("OrientationInterpolator");
OrientationInterpolator360.DEF = "Yaws_r_elbow_RotationInterpolator";
OrientationInterpolator360.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator360.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group350.children[9] = OrientationInterpolator360;

OrientationInterpolator OrientationInterpolator361 = createNode("OrientationInterpolator");
OrientationInterpolator361.DEF = "Yaws_r_shoulder_RotationInterpolator";
OrientationInterpolator361.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator361.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group350.children[10] = OrientationInterpolator361;

OrientationInterpolator OrientationInterpolator362 = createNode("OrientationInterpolator");
OrientationInterpolator362.DEF = "Yaws_l_wrist_RotationInterpolator";
OrientationInterpolator362.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator362.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group350.children[11] = OrientationInterpolator362;

OrientationInterpolator OrientationInterpolator363 = createNode("OrientationInterpolator");
OrientationInterpolator363.DEF = "Yaws_l_elbow_RotationInterpolator";
OrientationInterpolator363.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator363.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group350.children[12] = OrientationInterpolator363;

OrientationInterpolator OrientationInterpolator364 = createNode("OrientationInterpolator");
OrientationInterpolator364.DEF = "Yaws_l_shoulder_RotationInterpolator";
OrientationInterpolator364.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator364.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group350.children[13] = OrientationInterpolator364;

OrientationInterpolator OrientationInterpolator365 = createNode("OrientationInterpolator");
OrientationInterpolator365.DEF = "Yaws_head_RotationInterpolator";
OrientationInterpolator365.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator365.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group350.children[14] = OrientationInterpolator365;

OrientationInterpolator OrientationInterpolator366 = createNode("OrientationInterpolator");
OrientationInterpolator366.DEF = "Yaws_neck_RotationInterpolator";
OrientationInterpolator366.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator366.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group350.children[15] = OrientationInterpolator366;

OrientationInterpolator OrientationInterpolator367 = createNode("OrientationInterpolator");
OrientationInterpolator367.DEF = "Yaws_upper_body_RotationInterpolator";
OrientationInterpolator367.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator367.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group350.children[16] = OrientationInterpolator367;

OrientationInterpolator OrientationInterpolator368 = createNode("OrientationInterpolator");
OrientationInterpolator368.DEF = "Yaws_lower_body_RotationInterpolator";
OrientationInterpolator368.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator368.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group350.children[17] = OrientationInterpolator368;

OrientationInterpolator OrientationInterpolator369 = createNode("OrientationInterpolator");
OrientationInterpolator369.DEF = "Yaws_whole_body_RotationInterpolator";
OrientationInterpolator369.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator369.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group350.children[18] = OrientationInterpolator369;

PositionInterpolator PositionInterpolator370 = createNode("PositionInterpolator");
PositionInterpolator370.DEF = "Yaws_whole_body_TranslationInterpolator";
PositionInterpolator370.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator370.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group350.children[19] = PositionInterpolator370;

OrientationInterpolator OrientationInterpolator371 = createNode("OrientationInterpolator");
OrientationInterpolator371.DEF = "Yaw_l_sternoclavicular_RollInterpolator";
OrientationInterpolator371.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator371.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group350.children[20] = OrientationInterpolator371;

OrientationInterpolator OrientationInterpolator372 = createNode("OrientationInterpolator");
OrientationInterpolator372.DEF = "Yaw_l_acromioclavicular_RollInterpolator";
OrientationInterpolator372.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator372.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group350.children[21] = OrientationInterpolator372;

OrientationInterpolator OrientationInterpolator373 = createNode("OrientationInterpolator");
OrientationInterpolator373.DEF = "Yaw_r_sternoclavicular_RollInterpolator";
OrientationInterpolator373.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator373.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group350.children[22] = OrientationInterpolator373;

OrientationInterpolator OrientationInterpolator374 = createNode("OrientationInterpolator");
OrientationInterpolator374.DEF = "Yaw_r_acromioclavicular_RollInterpolator";
OrientationInterpolator374.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator374.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group350.children[23] = OrientationInterpolator374;

OrientationInterpolator OrientationInterpolator375 = createNode("OrientationInterpolator");
OrientationInterpolator375.DEF = "Yaw_sacroiliac_YawInterpolator";
OrientationInterpolator375.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator375.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,0,0.24,0,-1,0,0.4,0,1,0,0]);
Group350.children[24] = OrientationInterpolator375;

OrientationInterpolator OrientationInterpolator376 = createNode("OrientationInterpolator");
OrientationInterpolator376.DEF = "Yaw_vl5_YawInterpolator";
OrientationInterpolator376.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator376.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group350.children[25] = OrientationInterpolator376;

OrientationInterpolator OrientationInterpolator377 = createNode("OrientationInterpolator");
OrientationInterpolator377.DEF = "Yaw_vc6_YawInterpolator";
OrientationInterpolator377.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator377.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group350.children[26] = OrientationInterpolator377;

OrientationInterpolator OrientationInterpolator378 = createNode("OrientationInterpolator");
OrientationInterpolator378.DEF = "Yaw_l_thumb1_PitchInterpolator";
OrientationInterpolator378.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator378.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group350.children[27] = OrientationInterpolator378;

OrientationInterpolator OrientationInterpolator379 = createNode("OrientationInterpolator");
OrientationInterpolator379.DEF = "Yaw_r_thumb1_PitchInterpolator";
OrientationInterpolator379.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator379.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group350.children[28] = OrientationInterpolator379;

children[6] = Group350;

Group Group380 = createNode("Group");
Group380.DEF = "RollsAnimation";
TimeSensor TimeSensor381 = createNode("TimeSensor");
TimeSensor381.DEF = "RollTimer";
TimeSensor381.cycleInterval = 5.73;
TimeSensor381.loop = True;
Group380.children = new MFNode();

Group380.children[0] = TimeSensor381;

OrientationInterpolator OrientationInterpolator382 = createNode("OrientationInterpolator");
OrientationInterpolator382.DEF = "Roll_r_metatarsal_PitchInterpolator";
OrientationInterpolator382.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator382.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group380.children[1] = OrientationInterpolator382;

OrientationInterpolator OrientationInterpolator383 = createNode("OrientationInterpolator");
OrientationInterpolator383.DEF = "Rolls_r_ankle_RotationInterpolator";
OrientationInterpolator383.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator383.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group380.children[2] = OrientationInterpolator383;

OrientationInterpolator OrientationInterpolator384 = createNode("OrientationInterpolator");
OrientationInterpolator384.DEF = "Rolls_r_knee_RotationInterpolator";
OrientationInterpolator384.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator384.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group380.children[3] = OrientationInterpolator384;

OrientationInterpolator OrientationInterpolator385 = createNode("OrientationInterpolator");
OrientationInterpolator385.DEF = "Rolls_r_hip_RotationInterpolator";
OrientationInterpolator385.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator385.keyValue = new MFRotation(new float[0,0,-1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group380.children[4] = OrientationInterpolator385;

OrientationInterpolator OrientationInterpolator386 = createNode("OrientationInterpolator");
OrientationInterpolator386.DEF = "Rolls_l_ankle_RotationInterpolator";
OrientationInterpolator386.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator386.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group380.children[5] = OrientationInterpolator386;

OrientationInterpolator OrientationInterpolator387 = createNode("OrientationInterpolator");
OrientationInterpolator387.DEF = "Rolls_l_knee_RotationInterpolator";
OrientationInterpolator387.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator387.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group380.children[6] = OrientationInterpolator387;

OrientationInterpolator OrientationInterpolator388 = createNode("OrientationInterpolator");
OrientationInterpolator388.DEF = "Rolls_l_hip_RotationInterpolator";
OrientationInterpolator388.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator388.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group380.children[7] = OrientationInterpolator388;

OrientationInterpolator OrientationInterpolator389 = createNode("OrientationInterpolator");
OrientationInterpolator389.DEF = "Rolls_r_wrist_RotationInterpolator";
OrientationInterpolator389.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator389.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group380.children[8] = OrientationInterpolator389;

OrientationInterpolator OrientationInterpolator390 = createNode("OrientationInterpolator");
OrientationInterpolator390.DEF = "Rolls_r_elbow_RotationInterpolator";
OrientationInterpolator390.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator390.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group380.children[9] = OrientationInterpolator390;

OrientationInterpolator OrientationInterpolator391 = createNode("OrientationInterpolator");
OrientationInterpolator391.DEF = "Rolls_r_shoulder_RotationInterpolator";
OrientationInterpolator391.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator391.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,-1,3,0,0,-1,1.5,0,0,1,0]);
Group380.children[10] = OrientationInterpolator391;

OrientationInterpolator OrientationInterpolator392 = createNode("OrientationInterpolator");
OrientationInterpolator392.DEF = "Rolls_l_wrist_RotationInterpolator";
OrientationInterpolator392.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator392.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group380.children[11] = OrientationInterpolator392;

OrientationInterpolator OrientationInterpolator393 = createNode("OrientationInterpolator");
OrientationInterpolator393.DEF = "Rolls_l_elbow_RotationInterpolator";
OrientationInterpolator393.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator393.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group380.children[12] = OrientationInterpolator393;

OrientationInterpolator OrientationInterpolator394 = createNode("OrientationInterpolator");
OrientationInterpolator394.DEF = "Rolls_l_shoulder_RotationInterpolator";
OrientationInterpolator394.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator394.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,3,0,0,1,1.5,0,0,1,0]);
Group380.children[13] = OrientationInterpolator394;

OrientationInterpolator OrientationInterpolator395 = createNode("OrientationInterpolator");
OrientationInterpolator395.DEF = "Rolls_head_RotationInterpolator";
OrientationInterpolator395.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator395.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group380.children[14] = OrientationInterpolator395;

OrientationInterpolator OrientationInterpolator396 = createNode("OrientationInterpolator");
OrientationInterpolator396.DEF = "Rolls_neck_RotationInterpolator";
OrientationInterpolator396.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator396.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.25,0,0,1,0,0,0,-1,1.25,0,0,1,0]);
Group380.children[15] = OrientationInterpolator396;

OrientationInterpolator OrientationInterpolator397 = createNode("OrientationInterpolator");
OrientationInterpolator397.DEF = "Rolls_lower_body_RotationInterpolator";
OrientationInterpolator397.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator397.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group380.children[16] = OrientationInterpolator397;

OrientationInterpolator OrientationInterpolator398 = createNode("OrientationInterpolator");
OrientationInterpolator398.DEF = "Rolls_upper_body_RotationInterpolator";
OrientationInterpolator398.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator398.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group380.children[17] = OrientationInterpolator398;

OrientationInterpolator OrientationInterpolator399 = createNode("OrientationInterpolator");
OrientationInterpolator399.DEF = "Rolls_whole_body_RotationInterpolator";
OrientationInterpolator399.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator399.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group380.children[18] = OrientationInterpolator399;

PositionInterpolator PositionInterpolator400 = createNode("PositionInterpolator");
PositionInterpolator400.DEF = "Rolls_whole_body_TranslationInterpolator";
PositionInterpolator400.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator400.keyValue = new MFVec3f(new float[0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0]);
Group380.children[19] = PositionInterpolator400;

OrientationInterpolator OrientationInterpolator401 = createNode("OrientationInterpolator");
OrientationInterpolator401.DEF = "Roll_l_sternoclavicular_RollInterpolator";
OrientationInterpolator401.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator401.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group380.children[20] = OrientationInterpolator401;

OrientationInterpolator OrientationInterpolator402 = createNode("OrientationInterpolator");
OrientationInterpolator402.DEF = "Roll_l_acromioclavicular_RollInterpolator";
OrientationInterpolator402.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator402.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group380.children[21] = OrientationInterpolator402;

OrientationInterpolator OrientationInterpolator403 = createNode("OrientationInterpolator");
OrientationInterpolator403.DEF = "Roll_r_sternoclavicular_RollInterpolator";
OrientationInterpolator403.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator403.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group380.children[22] = OrientationInterpolator403;

OrientationInterpolator OrientationInterpolator404 = createNode("OrientationInterpolator");
OrientationInterpolator404.DEF = "Roll_r_acromioclavicular_RollInterpolator";
OrientationInterpolator404.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator404.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group380.children[23] = OrientationInterpolator404;

OrientationInterpolator OrientationInterpolator405 = createNode("OrientationInterpolator");
OrientationInterpolator405.DEF = "Roll_sacroiliac_YawInterpolator";
OrientationInterpolator405.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator405.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group380.children[24] = OrientationInterpolator405;

OrientationInterpolator OrientationInterpolator406 = createNode("OrientationInterpolator");
OrientationInterpolator406.DEF = "Roll_vl5_YawInterpolator";
OrientationInterpolator406.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator406.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group380.children[25] = OrientationInterpolator406;

OrientationInterpolator OrientationInterpolator407 = createNode("OrientationInterpolator");
OrientationInterpolator407.DEF = "Roll_vc6_YawInterpolator";
OrientationInterpolator407.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator407.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group380.children[26] = OrientationInterpolator407;

OrientationInterpolator OrientationInterpolator408 = createNode("OrientationInterpolator");
OrientationInterpolator408.DEF = "Roll_l_thumb1_PitchInterpolator";
OrientationInterpolator408.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator408.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group380.children[27] = OrientationInterpolator408;

OrientationInterpolator OrientationInterpolator409 = createNode("OrientationInterpolator");
OrientationInterpolator409.DEF = "Roll_r_thumb1_PitchInterpolator";
OrientationInterpolator409.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator409.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group380.children[28] = OrientationInterpolator409;

children[7] = Group380;

Group Group410 = createNode("Group");
Group410.DEF = "WalkAnimation";
TimeSensor TimeSensor411 = createNode("TimeSensor");
TimeSensor411.DEF = "WalkTimer";
TimeSensor411.cycleInterval = 1.73;
TimeSensor411.loop = True;
Group410.children = new MFNode();

Group410.children[0] = TimeSensor411;

OrientationInterpolator OrientationInterpolator412 = createNode("OrientationInterpolator");
OrientationInterpolator412.DEF = "Walk_r_metatarsal_PitchInterpolator";
OrientationInterpolator412.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator412.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group410.children[1] = OrientationInterpolator412;

OrientationInterpolator OrientationInterpolator413 = createNode("OrientationInterpolator");
OrientationInterpolator413.DEF = "Walk_r_ankle_RotationInterpolator";
OrientationInterpolator413.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator413.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0]);
Group410.children[2] = OrientationInterpolator413;

OrientationInterpolator OrientationInterpolator414 = createNode("OrientationInterpolator");
OrientationInterpolator414.DEF = "Walk_r_knee_RotationInterpolator";
OrientationInterpolator414.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator414.keyValue = new MFRotation(new float[1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573]);
Group410.children[3] = OrientationInterpolator414;

OrientationInterpolator OrientationInterpolator415 = createNode("OrientationInterpolator");
OrientationInterpolator415.DEF = "Walk_r_hip_RotationInterpolator";
OrientationInterpolator415.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator415.keyValue = new MFRotation(new float[-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
Group410.children[4] = OrientationInterpolator415;

OrientationInterpolator OrientationInterpolator416 = createNode("OrientationInterpolator");
OrientationInterpolator416.DEF = "Walk_l_ankle_RotationInterpolator";
OrientationInterpolator416.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator416.keyValue = new MFRotation(new float[-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714]);
Group410.children[5] = OrientationInterpolator416;

OrientationInterpolator OrientationInterpolator417 = createNode("OrientationInterpolator");
OrientationInterpolator417.DEF = "Walk_l_knee_RotationInterpolator";
OrientationInterpolator417.key = new MFFloat(new float[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator417.keyValue = new MFRotation(new float[1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
Group410.children[6] = OrientationInterpolator417;

OrientationInterpolator OrientationInterpolator418 = createNode("OrientationInterpolator");
OrientationInterpolator418.DEF = "Walk_l_hip_RotationInterpolator";
OrientationInterpolator418.key = new MFFloat(new float[0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator418.keyValue = new MFRotation(new float[-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
Group410.children[7] = OrientationInterpolator418;

OrientationInterpolator OrientationInterpolator419 = createNode("OrientationInterpolator");
OrientationInterpolator419.DEF = "Walk_lower_body_RotationInterpolator";
OrientationInterpolator419.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator419.keyValue = new MFRotation(new float[0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
Group410.children[8] = OrientationInterpolator419;

OrientationInterpolator OrientationInterpolator420 = createNode("OrientationInterpolator");
OrientationInterpolator420.DEF = "Walk_r_wrist_RotationInterpolator";
OrientationInterpolator420.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator420.keyValue = new MFRotation(new float[-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]);
Group410.children[9] = OrientationInterpolator420;

OrientationInterpolator OrientationInterpolator421 = createNode("OrientationInterpolator");
OrientationInterpolator421.DEF = "Walk_r_elbow_RotationInterpolator";
OrientationInterpolator421.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator421.keyValue = new MFRotation(new float[-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508]);
Group410.children[10] = OrientationInterpolator421;

OrientationInterpolator OrientationInterpolator422 = createNode("OrientationInterpolator");
OrientationInterpolator422.DEF = "Walk_r_shoulder_RotationInterpolator";
OrientationInterpolator422.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator422.keyValue = new MFRotation(new float[-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346]);
Group410.children[11] = OrientationInterpolator422;

OrientationInterpolator OrientationInterpolator423 = createNode("OrientationInterpolator");
OrientationInterpolator423.DEF = "Walk_l_wrist_RotationInterpolator";
OrientationInterpolator423.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator423.keyValue = new MFRotation(new float[0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076]);
Group410.children[12] = OrientationInterpolator423;

OrientationInterpolator OrientationInterpolator424 = createNode("OrientationInterpolator");
OrientationInterpolator424.DEF = "Walk_l_elbow_RotationInterpolator";
OrientationInterpolator424.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator424.keyValue = new MFRotation(new float[-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878]);
Group410.children[13] = OrientationInterpolator424;

OrientationInterpolator OrientationInterpolator425 = createNode("OrientationInterpolator");
OrientationInterpolator425.DEF = "Walk_l_shoulder_RotationInterpolator";
OrientationInterpolator425.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator425.keyValue = new MFRotation(new float[1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189]);
Group410.children[14] = OrientationInterpolator425;

OrientationInterpolator OrientationInterpolator426 = createNode("OrientationInterpolator");
OrientationInterpolator426.DEF = "Walk_head_RotationInterpolator";
OrientationInterpolator426.key = new MFFloat(new float[0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator426.keyValue = new MFRotation(new float[0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642]);
Group410.children[15] = OrientationInterpolator426;

OrientationInterpolator OrientationInterpolator427 = createNode("OrientationInterpolator");
OrientationInterpolator427.DEF = "Walk_neck_RotationInterpolator";
OrientationInterpolator427.key = new MFFloat(new float[0,1]);
OrientationInterpolator427.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group410.children[16] = OrientationInterpolator427;

OrientationInterpolator OrientationInterpolator428 = createNode("OrientationInterpolator");
OrientationInterpolator428.DEF = "Walk_upper_body_RotationInterpolator";
OrientationInterpolator428.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator428.keyValue = new MFRotation(new float[0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
Group410.children[17] = OrientationInterpolator428;

OrientationInterpolator OrientationInterpolator429 = createNode("OrientationInterpolator");
OrientationInterpolator429.DEF = "Walk_whole_body_RotationInterpolator";
OrientationInterpolator429.key = new MFFloat(new float[0,1]);
OrientationInterpolator429.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group410.children[18] = OrientationInterpolator429;

PositionInterpolator PositionInterpolator430 = createNode("PositionInterpolator");
PositionInterpolator430.DEF = "Walk_whole_body_TranslationInterpolator";
PositionInterpolator430.key = new MFFloat(new float[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator430.keyValue = new MFVec3f(new float[0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
Group410.children[19] = PositionInterpolator430;

OrientationInterpolator OrientationInterpolator431 = createNode("OrientationInterpolator");
OrientationInterpolator431.DEF = "Walk_l_sternoclavicular_RollInterpolator";
OrientationInterpolator431.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator431.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group410.children[20] = OrientationInterpolator431;

OrientationInterpolator OrientationInterpolator432 = createNode("OrientationInterpolator");
OrientationInterpolator432.DEF = "Walk_l_acromioclavicular_RollInterpolator";
OrientationInterpolator432.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator432.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group410.children[21] = OrientationInterpolator432;

OrientationInterpolator OrientationInterpolator433 = createNode("OrientationInterpolator");
OrientationInterpolator433.DEF = "Walk_r_sternoclavicular_RollInterpolator";
OrientationInterpolator433.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator433.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group410.children[22] = OrientationInterpolator433;

OrientationInterpolator OrientationInterpolator434 = createNode("OrientationInterpolator");
OrientationInterpolator434.DEF = "Walk_r_acromioclavicular_RollInterpolator";
OrientationInterpolator434.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator434.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group410.children[23] = OrientationInterpolator434;

OrientationInterpolator OrientationInterpolator435 = createNode("OrientationInterpolator");
OrientationInterpolator435.DEF = "Walk_sacroiliac_YawInterpolator";
OrientationInterpolator435.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator435.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group410.children[24] = OrientationInterpolator435;

OrientationInterpolator OrientationInterpolator436 = createNode("OrientationInterpolator");
OrientationInterpolator436.DEF = "Walk_vl5_YawInterpolator";
OrientationInterpolator436.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator436.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group410.children[25] = OrientationInterpolator436;

OrientationInterpolator OrientationInterpolator437 = createNode("OrientationInterpolator");
OrientationInterpolator437.DEF = "Walk_vc6_YawInterpolator";
OrientationInterpolator437.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator437.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group410.children[26] = OrientationInterpolator437;

OrientationInterpolator OrientationInterpolator438 = createNode("OrientationInterpolator");
OrientationInterpolator438.DEF = "Walk_l_thumb1_PitchInterpolator";
OrientationInterpolator438.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator438.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group410.children[27] = OrientationInterpolator438;

OrientationInterpolator OrientationInterpolator439 = createNode("OrientationInterpolator");
OrientationInterpolator439.DEF = "Walk_r_thumb1_PitchInterpolator";
OrientationInterpolator439.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator439.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group410.children[28] = OrientationInterpolator439;

children[8] = Group410;

Group Group440 = createNode("Group");
Group440.DEF = "RunAnimation";
TimeSensor TimeSensor441 = createNode("TimeSensor");
TimeSensor441.DEF = "RunTimer";
TimeSensor441.cycleInterval = 0.9;
TimeSensor441.loop = True;
Group440.children = new MFNode();

Group440.children[0] = TimeSensor441;

OrientationInterpolator OrientationInterpolator442 = createNode("OrientationInterpolator");
OrientationInterpolator442.DEF = "Run_r_metatarsal_PitchInterpolator";
OrientationInterpolator442.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator442.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group440.children[1] = OrientationInterpolator442;

OrientationInterpolator OrientationInterpolator443 = createNode("OrientationInterpolator");
OrientationInterpolator443.DEF = "Run_l_hip_RotationInterpolator_Run";
OrientationInterpolator443.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator443.keyValue = new MFRotation(new float[-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42]);
Group440.children[2] = OrientationInterpolator443;

OrientationInterpolator OrientationInterpolator444 = createNode("OrientationInterpolator");
OrientationInterpolator444.DEF = "Run_l_knee_RotationInterpolator_Run";
OrientationInterpolator444.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator444.keyValue = new MFRotation(new float[1,0,0,1.01,1,0,0,0.426,1,0,0,0.705,1,0,0,2.179,1,0,0,1.01]);
Group440.children[3] = OrientationInterpolator444;

OrientationInterpolator OrientationInterpolator445 = createNode("OrientationInterpolator");
OrientationInterpolator445.DEF = "Run_l_ankle_RotationInterpolator_Run";
OrientationInterpolator445.key = new MFFloat(new float[0,0.22,0.3,0.4,1]);
OrientationInterpolator445.keyValue = new MFRotation(new float[1,0,0,0.0374,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03574]);
Group440.children[4] = OrientationInterpolator445;

OrientationInterpolator OrientationInterpolator446 = createNode("OrientationInterpolator");
OrientationInterpolator446.DEF = "Run_r_hip_RotationInterpolator_Run";
OrientationInterpolator446.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator446.keyValue = new MFRotation(new float[0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9]);
Group440.children[5] = OrientationInterpolator446;

OrientationInterpolator OrientationInterpolator447 = createNode("OrientationInterpolator");
OrientationInterpolator447.DEF = "Run_r_knee_RotationInterpolator_Run";
OrientationInterpolator447.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator447.keyValue = new MFRotation(new float[1,0,0,0.705,1,0,0,2.179,1,0,0,1.01,1,0,0,0.426,1,0,0,0.705]);
Group440.children[6] = OrientationInterpolator447;

OrientationInterpolator OrientationInterpolator448 = createNode("OrientationInterpolator");
OrientationInterpolator448.DEF = "Run_r_ankle_RotationInterpolator_Run";
OrientationInterpolator448.key = new MFFloat(new float[0,0.4,0.71,0.8,0.82,1]);
OrientationInterpolator448.keyValue = new MFRotation(new float[1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.32,-1,0,0,0.374,-1,0,0,0.3478,1,0,0,0.2323]);
Group440.children[7] = OrientationInterpolator448;

OrientationInterpolator OrientationInterpolator449 = createNode("OrientationInterpolator");
OrientationInterpolator449.DEF = "Run_l_shoulder_RotationInterpolator_Run";
OrientationInterpolator449.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator449.keyValue = new MFRotation(new float[0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5]);
Group440.children[8] = OrientationInterpolator449;

OrientationInterpolator OrientationInterpolator450 = createNode("OrientationInterpolator");
OrientationInterpolator450.DEF = "Run_l_elbow_RotationInterpolator_Run";
OrientationInterpolator450.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator450.keyValue = new MFRotation(new float[-1,0,0,1.85,-0.99,-0.19,0.18,1.35,-1,0,0,0.975,-0.99,-0.09,-0.02,1.55,-1,0,0,1.85]);
Group440.children[9] = OrientationInterpolator450;

OrientationInterpolator OrientationInterpolator451 = createNode("OrientationInterpolator");
OrientationInterpolator451.DEF = "Run_l_wrist_RotationInterpolator_Run";
OrientationInterpolator451.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator451.keyValue = new MFRotation(new float[-0.25,-1,0.08,0.14,0.25,1,0.08,0.14,0,0,1,0,-0.25,1,0.08,-0.14,-0.25,1,0.08,0.14]);
Group440.children[10] = OrientationInterpolator451;

OrientationInterpolator OrientationInterpolator452 = createNode("OrientationInterpolator");
OrientationInterpolator452.DEF = "Run_r_shoulder_RotationInterpolator_Run";
OrientationInterpolator452.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator452.keyValue = new MFRotation(new float[-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85]);
Group440.children[11] = OrientationInterpolator452;

OrientationInterpolator OrientationInterpolator453 = createNode("OrientationInterpolator");
OrientationInterpolator453.DEF = "Run_r_elbow_RotationInterpolator_Run";
OrientationInterpolator453.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator453.keyValue = new MFRotation(new float[-1,0,0,0.975,-0.99,0.09,0.02,1.55,-1,0,0,1.85,-0.99,0.19,-0.18,1.35,-1,0,0,0.975]);
Group440.children[12] = OrientationInterpolator453;

OrientationInterpolator OrientationInterpolator454 = createNode("OrientationInterpolator");
OrientationInterpolator454.DEF = "Run_r_wrist_RotationInterpolator_Run";
OrientationInterpolator454.key = new MFFloat(new float[0,1]);
OrientationInterpolator454.keyValue = new MFRotation(new float[-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273]);
Group440.children[13] = OrientationInterpolator454;

OrientationInterpolator OrientationInterpolator455 = createNode("OrientationInterpolator");
OrientationInterpolator455.DEF = "Run_lower_body_RotationInterpolator_Run";
OrientationInterpolator455.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator455.keyValue = new MFRotation(new float[0,-1,0,0.125,0,0,1,0,0,1,0,0.125,0,0,1,0,0,-1,0,0.125]);
Group440.children[14] = OrientationInterpolator455;

OrientationInterpolator OrientationInterpolator456 = createNode("OrientationInterpolator");
OrientationInterpolator456.DEF = "Run_head_RotationInterpolator_Run";
OrientationInterpolator456.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator456.keyValue = new MFRotation(new float[1,0,0,0.08,1,0,0,0.12,1,0,0,0.3,1,0,0,0.3,1,0,0,0.08]);
Group440.children[15] = OrientationInterpolator456;

OrientationInterpolator OrientationInterpolator457 = createNode("OrientationInterpolator");
OrientationInterpolator457.DEF = "Run_neck_RotationInterpolator_Run";
OrientationInterpolator457.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator457.keyValue = new MFRotation(new float[0.7,0,0,0.4,-0.7,-0.7,0,0.4,0,0,0,0.4,-0.7,0.7,0,0.4,0.7,0,0,0.4]);
Group440.children[16] = OrientationInterpolator457;

OrientationInterpolator OrientationInterpolator458 = createNode("OrientationInterpolator");
OrientationInterpolator458.DEF = "Run_upper_body_RotationInterpolator_Run";
OrientationInterpolator458.key = new MFFloat(new float[0,0.2545,0.4909,0.7636,1]);
OrientationInterpolator458.keyValue = new MFRotation(new float[0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5]);
Group440.children[17] = OrientationInterpolator458;

OrientationInterpolator OrientationInterpolator459 = createNode("OrientationInterpolator");
OrientationInterpolator459.DEF = "Run_whole_body_RotationInterpolator_Run";
OrientationInterpolator459.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator459.keyValue = new MFRotation(new float[1,0,0,0.06,1,0,0,0.167,1,0,0,0.06,1,0,0,0.168,1,0,0,0.06]);
Group440.children[18] = OrientationInterpolator459;

PositionInterpolator PositionInterpolator460 = createNode("PositionInterpolator");
PositionInterpolator460.DEF = "Run_whole_body_TranslationInterpolator_Run";
PositionInterpolator460.key = new MFFloat(new float[0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1]);
PositionInterpolator460.keyValue = new MFVec3f(new float[0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0]);
Group440.children[19] = PositionInterpolator460;

OrientationInterpolator OrientationInterpolator461 = createNode("OrientationInterpolator");
OrientationInterpolator461.DEF = "Run_l_sternoclavicular_RollInterpolator";
OrientationInterpolator461.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator461.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group440.children[20] = OrientationInterpolator461;

OrientationInterpolator OrientationInterpolator462 = createNode("OrientationInterpolator");
OrientationInterpolator462.DEF = "Run_l_acromioclavicular_RollInterpolator";
OrientationInterpolator462.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator462.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group440.children[21] = OrientationInterpolator462;

OrientationInterpolator OrientationInterpolator463 = createNode("OrientationInterpolator");
OrientationInterpolator463.DEF = "Run_r_sternoclavicular_RollInterpolator";
OrientationInterpolator463.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator463.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group440.children[22] = OrientationInterpolator463;

OrientationInterpolator OrientationInterpolator464 = createNode("OrientationInterpolator");
OrientationInterpolator464.DEF = "Run_r_acromioclavicular_RollInterpolator";
OrientationInterpolator464.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator464.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group440.children[23] = OrientationInterpolator464;

OrientationInterpolator OrientationInterpolator465 = createNode("OrientationInterpolator");
OrientationInterpolator465.DEF = "Run_sacroiliac_YawInterpolator";
OrientationInterpolator465.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator465.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group440.children[24] = OrientationInterpolator465;

OrientationInterpolator OrientationInterpolator466 = createNode("OrientationInterpolator");
OrientationInterpolator466.DEF = "Run_vl5_YawInterpolator";
OrientationInterpolator466.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator466.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group440.children[25] = OrientationInterpolator466;

OrientationInterpolator OrientationInterpolator467 = createNode("OrientationInterpolator");
OrientationInterpolator467.DEF = "Run_vc6_YawInterpolator";
OrientationInterpolator467.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator467.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group440.children[26] = OrientationInterpolator467;

OrientationInterpolator OrientationInterpolator468 = createNode("OrientationInterpolator");
OrientationInterpolator468.DEF = "Run_l_thumb1_PitchInterpolator";
OrientationInterpolator468.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator468.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group440.children[27] = OrientationInterpolator468;

OrientationInterpolator OrientationInterpolator469 = createNode("OrientationInterpolator");
OrientationInterpolator469.DEF = "Run_r_thumb1_PitchInterpolator";
OrientationInterpolator469.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator469.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group440.children[28] = OrientationInterpolator469;

children[9] = Group440;

Group Group470 = createNode("Group");
Group470.DEF = "JumpAnimation";
TimeSensor TimeSensor471 = createNode("TimeSensor");
TimeSensor471.DEF = "JumpTimer";
TimeSensor471.cycleInterval = 3.73;
TimeSensor471.loop = True;
Group470.children = new MFNode();

Group470.children[0] = TimeSensor471;

OrientationInterpolator OrientationInterpolator472 = createNode("OrientationInterpolator");
OrientationInterpolator472.DEF = "Jump_r_metatarsal_PitchInterpolator";
OrientationInterpolator472.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator472.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group470.children[1] = OrientationInterpolator472;

OrientationInterpolator OrientationInterpolator473 = createNode("OrientationInterpolator");
OrientationInterpolator473.DEF = "Jump_r_ankle_RotationInterpolator";
OrientationInterpolator473.key = new MFFloat(new float[0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator473.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,1.3,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0]);
Group470.children[2] = OrientationInterpolator473;

OrientationInterpolator OrientationInterpolator474 = createNode("OrientationInterpolator");
OrientationInterpolator474.DEF = "Jump_r_knee_RotationInterpolator";
OrientationInterpolator474.key = new MFFloat(new float[0,0.2,0.25,0.3,0.64,0.76,0.88,1]);
OrientationInterpolator474.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.5,1,0,0,1.7,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0]);
Group470.children[3] = OrientationInterpolator474;

OrientationInterpolator OrientationInterpolator475 = createNode("OrientationInterpolator");
OrientationInterpolator475.DEF = "Jump_r_hip_RotationInterpolator";
OrientationInterpolator475.key = new MFFloat(new float[0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator475.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.63,-1,0,0,1.7,-1,0,0,1.55,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0]);
Group470.children[4] = OrientationInterpolator475;

OrientationInterpolator OrientationInterpolator476 = createNode("OrientationInterpolator");
OrientationInterpolator476.DEF = "Jump_l_ankle_RotationInterpolator";
OrientationInterpolator476.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator476.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0]);
Group470.children[5] = OrientationInterpolator476;

OrientationInterpolator OrientationInterpolator477 = createNode("OrientationInterpolator");
OrientationInterpolator477.DEF = "Jump_l_knee_RotationInterpolator";
OrientationInterpolator477.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator477.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0]);
Group470.children[6] = OrientationInterpolator477;

OrientationInterpolator OrientationInterpolator478 = createNode("OrientationInterpolator");
OrientationInterpolator478.DEF = "Jump_l_hip_RotationInterpolator";
OrientationInterpolator478.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator478.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0]);
Group470.children[7] = OrientationInterpolator478;

OrientationInterpolator OrientationInterpolator479 = createNode("OrientationInterpolator");
OrientationInterpolator479.DEF = "Jump_lower_body_RotationInterpolator";
OrientationInterpolator479.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator479.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0]);
Group470.children[8] = OrientationInterpolator479;

OrientationInterpolator OrientationInterpolator480 = createNode("OrientationInterpolator");
OrientationInterpolator480.DEF = "Jump_r_wrist_RotationInterpolator";
OrientationInterpolator480.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator480.keyValue = new MFRotation(new float[0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
Group470.children[9] = OrientationInterpolator480;

OrientationInterpolator OrientationInterpolator481 = createNode("OrientationInterpolator");
OrientationInterpolator481.DEF = "Jump_r_elbow_RotationInterpolator";
OrientationInterpolator481.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator481.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
Group470.children[10] = OrientationInterpolator481;

OrientationInterpolator OrientationInterpolator482 = createNode("OrientationInterpolator");
OrientationInterpolator482.DEF = "Jump_r_shoulder_RotationInterpolator";
OrientationInterpolator482.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator482.keyValue = new MFRotation(new float[0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
Group470.children[11] = OrientationInterpolator482;

OrientationInterpolator OrientationInterpolator483 = createNode("OrientationInterpolator");
OrientationInterpolator483.DEF = "Jump_l_wrist_RotationInterpolator";
OrientationInterpolator483.key = new MFFloat(new float[0,0.48,0.52,0.64,0.76,0.88,1]);
OrientationInterpolator483.keyValue = new MFRotation(new float[0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0]);
Group470.children[12] = OrientationInterpolator483;

OrientationInterpolator OrientationInterpolator484 = createNode("OrientationInterpolator");
OrientationInterpolator484.DEF = "Jump_l_elbow_RotationInterpolator";
OrientationInterpolator484.key = new MFFloat(new float[0,0.28,0.32,0.58,0.72,1]);
OrientationInterpolator484.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.13,-1,0,0,1.7,-1,0,0,1.7,-1,0,0,0.4,0,0,1,0]);
Group470.children[13] = OrientationInterpolator484;

OrientationInterpolator OrientationInterpolator485 = createNode("OrientationInterpolator");
OrientationInterpolator485.DEF = "Jump_l_shoulder_RotationInterpolator";
OrientationInterpolator485.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator485.keyValue = new MFRotation(new float[0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0]);
Group470.children[14] = OrientationInterpolator485;

OrientationInterpolator OrientationInterpolator486 = createNode("OrientationInterpolator");
OrientationInterpolator486.DEF = "Jump_head_RotationInterpolator";
OrientationInterpolator486.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator486.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0]);
Group470.children[15] = OrientationInterpolator486;

OrientationInterpolator OrientationInterpolator487 = createNode("OrientationInterpolator");
OrientationInterpolator487.DEF = "Jump_neck_RotationInterpolator";
OrientationInterpolator487.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator487.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0]);
Group470.children[16] = OrientationInterpolator487;

OrientationInterpolator OrientationInterpolator488 = createNode("OrientationInterpolator");
OrientationInterpolator488.DEF = "Jump_upper_body_RotationInterpolator";
OrientationInterpolator488.key = new MFFloat(new float[0,0.22,0.28,0.34,0.71,0.88,1]);
OrientationInterpolator488.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.05,1,0,0,1.051,-1,0,0,0.257,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0]);
Group470.children[17] = OrientationInterpolator488;

OrientationInterpolator OrientationInterpolator489 = createNode("OrientationInterpolator");
OrientationInterpolator489.DEF = "Jump_whole_body_RotationInterpolator";
OrientationInterpolator489.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,1]);
OrientationInterpolator489.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group470.children[18] = OrientationInterpolator489;

PositionInterpolator PositionInterpolator490 = createNode("PositionInterpolator");
PositionInterpolator490.DEF = "Jump_whole_body_TranslationInterpolator";
PositionInterpolator490.key = new MFFloat(new float[0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1]);
PositionInterpolator490.keyValue = new MFVec3f(new float[0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0,0.35,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0]);
Group470.children[19] = PositionInterpolator490;

OrientationInterpolator OrientationInterpolator491 = createNode("OrientationInterpolator");
OrientationInterpolator491.DEF = "Jump_l_sternoclavicular_RollInterpolator";
OrientationInterpolator491.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator491.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group470.children[20] = OrientationInterpolator491;

OrientationInterpolator OrientationInterpolator492 = createNode("OrientationInterpolator");
OrientationInterpolator492.DEF = "Jump_l_acromioclavicular_RollInterpolator";
OrientationInterpolator492.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator492.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group470.children[21] = OrientationInterpolator492;

OrientationInterpolator OrientationInterpolator493 = createNode("OrientationInterpolator");
OrientationInterpolator493.DEF = "Jump_r_sternoclavicular_RollInterpolator";
OrientationInterpolator493.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator493.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group470.children[22] = OrientationInterpolator493;

OrientationInterpolator OrientationInterpolator494 = createNode("OrientationInterpolator");
OrientationInterpolator494.DEF = "Jump_r_acromioclavicular_RollInterpolator";
OrientationInterpolator494.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator494.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group470.children[23] = OrientationInterpolator494;

OrientationInterpolator OrientationInterpolator495 = createNode("OrientationInterpolator");
OrientationInterpolator495.DEF = "Jump_sacroiliac_YawInterpolator";
OrientationInterpolator495.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator495.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group470.children[24] = OrientationInterpolator495;

OrientationInterpolator OrientationInterpolator496 = createNode("OrientationInterpolator");
OrientationInterpolator496.DEF = "Jump_vl5_YawInterpolator";
OrientationInterpolator496.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator496.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,-0.1,0,1,0,0,0,1,0,0,1,0,0,0.6,0,1,0,0.1,0,1,0,0]);
Group470.children[25] = OrientationInterpolator496;

OrientationInterpolator OrientationInterpolator497 = createNode("OrientationInterpolator");
OrientationInterpolator497.DEF = "Jump_vc6_YawInterpolator";
OrientationInterpolator497.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator497.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0.8,0,1,0,0,0,1,0,0,-1,0,0,0.6,0,-1,0,0.8,0,1,0,0]);
Group470.children[26] = OrientationInterpolator497;

OrientationInterpolator OrientationInterpolator498 = createNode("OrientationInterpolator");
OrientationInterpolator498.DEF = "Jump_l_thumb1_PitchInterpolator";
OrientationInterpolator498.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator498.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group470.children[27] = OrientationInterpolator498;

OrientationInterpolator OrientationInterpolator499 = createNode("OrientationInterpolator");
OrientationInterpolator499.DEF = "Jump_r_thumb1_PitchInterpolator";
OrientationInterpolator499.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator499.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group470.children[28] = OrientationInterpolator499;

children[10] = Group470;

Group Group500 = createNode("Group");
Group500.DEF = "KickAnimation";
TimeSensor TimeSensor501 = createNode("TimeSensor");
TimeSensor501.DEF = "KickTimer";
TimeSensor501.cycleInterval = 3.73;
TimeSensor501.loop = True;
Group500.children = new MFNode();

Group500.children[0] = TimeSensor501;

OrientationInterpolator OrientationInterpolator502 = createNode("OrientationInterpolator");
OrientationInterpolator502.DEF = "Kick_l_sternoclavicular_RollInterpolator";
OrientationInterpolator502.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator502.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group500.children[1] = OrientationInterpolator502;

OrientationInterpolator OrientationInterpolator503 = createNode("OrientationInterpolator");
OrientationInterpolator503.DEF = "Kick_l_acromioclavicular_RollInterpolator";
OrientationInterpolator503.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator503.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group500.children[2] = OrientationInterpolator503;

OrientationInterpolator OrientationInterpolator504 = createNode("OrientationInterpolator");
OrientationInterpolator504.DEF = "Kick_l_shoulder_RollInterpolator";
OrientationInterpolator504.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator504.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.76,-0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0,0,1,0]);
Group500.children[3] = OrientationInterpolator504;

OrientationInterpolator OrientationInterpolator505 = createNode("OrientationInterpolator");
OrientationInterpolator505.DEF = "Kick_l_ForeArm_PitchInterpolator";
OrientationInterpolator505.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator505.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.55,-1,0.25,0,2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group500.children[4] = OrientationInterpolator505;

OrientationInterpolator OrientationInterpolator506 = createNode("OrientationInterpolator");
OrientationInterpolator506.DEF = "Kick_l_wrist_RollInterpolator";
OrientationInterpolator506.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator506.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group500.children[5] = OrientationInterpolator506;

OrientationInterpolator OrientationInterpolator507 = createNode("OrientationInterpolator");
OrientationInterpolator507.DEF = "Kick_l_thumb1_PitchInterpolator";
OrientationInterpolator507.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator507.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group500.children[6] = OrientationInterpolator507;

OrientationInterpolator OrientationInterpolator508 = createNode("OrientationInterpolator");
OrientationInterpolator508.DEF = "Kick_r_sternoclavicular_RollInterpolator";
OrientationInterpolator508.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator508.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group500.children[7] = OrientationInterpolator508;

OrientationInterpolator OrientationInterpolator509 = createNode("OrientationInterpolator");
OrientationInterpolator509.DEF = "Kick_r_acromioclavicular_RollInterpolator";
OrientationInterpolator509.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator509.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group500.children[8] = OrientationInterpolator509;

OrientationInterpolator OrientationInterpolator510 = createNode("OrientationInterpolator");
OrientationInterpolator510.DEF = "Kick_r_shoulder_RollInterpolator";
OrientationInterpolator510.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator510.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-1.76,0.25,0,1,-1.76,0,0,1,-1.256,0,0,1,-0.05,0,0,1,0]);
Group500.children[9] = OrientationInterpolator510;

OrientationInterpolator OrientationInterpolator511 = createNode("OrientationInterpolator");
OrientationInterpolator511.DEF = "Kick_r_ForeArm_PitchInterpolator";
OrientationInterpolator511.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator511.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.55,1,0.25,0,-2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group500.children[10] = OrientationInterpolator511;

OrientationInterpolator OrientationInterpolator512 = createNode("OrientationInterpolator");
OrientationInterpolator512.DEF = "Kick_r_wrist_RollInterpolator";
OrientationInterpolator512.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator512.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group500.children[11] = OrientationInterpolator512;

OrientationInterpolator OrientationInterpolator513 = createNode("OrientationInterpolator");
OrientationInterpolator513.DEF = "Kick_r_thumb1_PitchInterpolator";
OrientationInterpolator513.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator513.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group500.children[12] = OrientationInterpolator513;

OrientationInterpolator OrientationInterpolator514 = createNode("OrientationInterpolator");
OrientationInterpolator514.DEF = "Kick_r_hip_PitchInterpolator";
OrientationInterpolator514.key = new MFFloat(new float[0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator514.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.9,-1,0,0,1.75,-1,0,0,2.25,-1,0,0,2,1,0,0,0,1,0,0,0]);
Group500.children[13] = OrientationInterpolator514;

OrientationInterpolator OrientationInterpolator515 = createNode("OrientationInterpolator");
OrientationInterpolator515.DEF = "Kick_r_knee_PitchInterpolator";
OrientationInterpolator515.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator515.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.95,1,0,0,1.75,-1,0,0,0.28,1,0,0,0,1,0,0,0]);
Group500.children[14] = OrientationInterpolator515;

OrientationInterpolator OrientationInterpolator516 = createNode("OrientationInterpolator");
OrientationInterpolator516.DEF = "Kick_l_hip_PitchInterpolator";
OrientationInterpolator516.key = new MFFloat(new float[0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator516.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group500.children[15] = OrientationInterpolator516;

OrientationInterpolator OrientationInterpolator517 = createNode("OrientationInterpolator");
OrientationInterpolator517.DEF = "Kick_l_knee_PitchInterpolator";
OrientationInterpolator517.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator517.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group500.children[16] = OrientationInterpolator517;

OrientationInterpolator OrientationInterpolator518 = createNode("OrientationInterpolator");
OrientationInterpolator518.DEF = "Kick_r_ankle_PitchInterpolator";
OrientationInterpolator518.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator518.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.9,-1,0,0,0.95,1,0,0,0.75,-1,0,0,0.05,1,0,0,0]);
Group500.children[17] = OrientationInterpolator518;

OrientationInterpolator OrientationInterpolator519 = createNode("OrientationInterpolator");
OrientationInterpolator519.DEF = "Kick_r_metatarsal_PitchInterpolator";
OrientationInterpolator519.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator519.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group500.children[18] = OrientationInterpolator519;

OrientationInterpolator OrientationInterpolator520 = createNode("OrientationInterpolator");
OrientationInterpolator520.DEF = "Kick_sacroiliac_YawInterpolator";
OrientationInterpolator520.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator520.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group500.children[19] = OrientationInterpolator520;

OrientationInterpolator OrientationInterpolator521 = createNode("OrientationInterpolator");
OrientationInterpolator521.DEF = "Kick_vl5_YawInterpolator";
OrientationInterpolator521.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator521.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group500.children[20] = OrientationInterpolator521;

OrientationInterpolator OrientationInterpolator522 = createNode("OrientationInterpolator");
OrientationInterpolator522.DEF = "Kick_vc6_YawInterpolator";
OrientationInterpolator522.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator522.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group500.children[21] = OrientationInterpolator522;

OrientationInterpolator OrientationInterpolator523 = createNode("OrientationInterpolator");
OrientationInterpolator523.DEF = "Kick_lower_body_RotationInterpolator";
OrientationInterpolator523.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator523.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group500.children[22] = OrientationInterpolator523;

OrientationInterpolator OrientationInterpolator524 = createNode("OrientationInterpolator");
OrientationInterpolator524.DEF = "Kick_upper_body_RotationInterpolator";
OrientationInterpolator524.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator524.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group500.children[23] = OrientationInterpolator524;

OrientationInterpolator OrientationInterpolator525 = createNode("OrientationInterpolator");
OrientationInterpolator525.DEF = "Kick_whole_body_RotationInterpolator";
OrientationInterpolator525.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator525.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group500.children[24] = OrientationInterpolator525;

PositionInterpolator PositionInterpolator526 = createNode("PositionInterpolator");
PositionInterpolator526.DEF = "Kick_whole_body_TranslationInterpolator";
PositionInterpolator526.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator526.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group500.children[25] = PositionInterpolator526;

OrientationInterpolator OrientationInterpolator527 = createNode("OrientationInterpolator");
OrientationInterpolator527.DEF = "Kick_neck_RotationInterpolator";
OrientationInterpolator527.key = new MFFloat(new float[0,0.25,0.55,1]);
OrientationInterpolator527.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0]);
Group500.children[26] = OrientationInterpolator527;

children[11] = Group500;

Group Group528 = createNode("Group");
Group528.DEF = "Interface";
Transform Transform529 = createNode("Transform");
Transform529.DEF = "CoordinateSystemFloor";
Transform529.scale = new SFVec3f(new float[0.1,0.1,0.1]);
Shape Shape530 = createNode("Shape");
Shape530.DEF = "AxisLinesShape";
IndexedLineSet IndexedLineSet531 = createNode("IndexedLineSet");
IndexedLineSet531.colorPerVertex = False;
IndexedLineSet531.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet531.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
Color Color532 = createNode("Color");
Color532.color = new MFColor(new float[1,0,0,0,0.6,0,0,0,1]);
IndexedLineSet531.color = Color532;

Coordinate Coordinate533 = createNode("Coordinate");
Coordinate533.point = new MFVec3f(new float[0,0,0,1,0,0,0,1,0,0,0,1]);
IndexedLineSet531.coord = Coordinate533;

Shape530.geometry = IndexedLineSet531;

Transform529.child = new undefined();

Transform529.child[0] = Shape530;

Group528.children = new MFNode();

Group528.children[0] = Transform529;

ProximitySensor ProximitySensor534 = createNode("ProximitySensor");
ProximitySensor534.DEF = "HudProx";
ProximitySensor534.size = new SFVec3f(new float[50,50,50]);
Group528.children[1] = ProximitySensor534;

Transform Transform535 = createNode("Transform");
Transform535.DEF = "HudXform";
Transform535.translation = new SFVec3f(new float[2,1,2]);
Transform535.rotation = new SFRotation(new float[0,1,0,0.78]);
Transform Transform536 = createNode("Transform");
Transform536.translation = new SFVec3f(new float[-0.4,-0.01,-0.75]);
Transform536.scale = new SFVec3f(new float[0.02,0.02,0.02]);
Transform Transform537 = createNode("Transform");
Transform537.DEF = "Stand_Text";
Transform537.translation = new SFVec3f(new float[0,-0.9,0]);
TouchSensor TouchSensor538 = createNode("TouchSensor");
TouchSensor538.DEF = "Stand_Touch";
Transform537.children = new MFNode();

Transform537.children[0] = TouchSensor538;

Shape Shape539 = createNode("Shape");
Shape539.DEF = "StandText";
Appearance Appearance540 = createNode("Appearance");
Material Material541 = createNode("Material");
Material541.DEF = "text_color";
Material541.ambientIntensity = 1;
Material541.diffuseColor = new SFColor(new float[0.819,0.521,0.169]);
Material541.specularColor = new SFColor(new float[0.819,0.521,0.169]);
Material541.emissiveColor = new SFColor(new float[0.819,0.521,0.169]);
Appearance540.material = Material541;

Shape539.appearance = Appearance540;

Text Text542 = createNode("Text");
Text542.string = new MFString(new java.lang.String["Stand"]);
FontStyle FontStyle543 = createNode("FontStyle");
FontStyle543.family = new MFString(new java.lang.String["SANS"]);
Text542.fontStyle = FontStyle543;

Shape539.geometry = Text542;

Transform537.child[1] = Shape539;

Shape Shape544 = createNode("Shape");
Shape544.DEF = "Stand_Back";
Appearance Appearance545 = createNode("Appearance");
Material Material546 = createNode("Material");
Material546.DEF = "Clear";
Material546.ambientIntensity = 1;
Material546.diffuseColor = new SFColor(new float[0,0.5,0]);
Material546.emissiveColor = new SFColor(new float[0,0.5,0]);
Material546.transparency = 0.8;
Appearance545.material = Material546;

Shape544.appearance = Appearance545;

IndexedFaceSet IndexedFaceSet547 = createNode("IndexedFaceSet");
IndexedFaceSet547.DEF = "Backing";
IndexedFaceSet547.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate548 = createNode("Coordinate");
Coordinate548.point = new MFVec3f(new float[-0.2,-0.25,-0.01,3,-0.25,-0.01,3,1,-0.01,-0.2,1,-0.01]);
IndexedFaceSet547.coord = Coordinate548;

Shape544.geometry = IndexedFaceSet547;

Transform537.child[2] = Shape544;

Transform536.children = new MFNode();

Transform536.children[0] = Transform537;

Transform Transform549 = createNode("Transform");
Transform549.DEF = "Pitch_Text";
Transform549.translation = new SFVec3f(new float[0,-2.4,0]);
TouchSensor TouchSensor550 = createNode("TouchSensor");
TouchSensor550.DEF = "Pitch_Touch";
Transform549.children = new MFNode();

Transform549.children[0] = TouchSensor550;

Shape Shape551 = createNode("Shape");
Shape551.DEF = "PitchText";
Appearance Appearance552 = createNode("Appearance");
Material Material553 = createNode("Material");
Material553.USE = "text_color";
Appearance552.material = Material553;

Shape551.appearance = Appearance552;

Text Text554 = createNode("Text");
Text554.string = new MFString(new java.lang.String["Pitch"]);
FontStyle FontStyle555 = createNode("FontStyle");
FontStyle555.family = new MFString(new java.lang.String["SANS"]);
Text554.fontStyle = FontStyle555;

Shape551.geometry = Text554;

Transform549.child[1] = Shape551;

Shape Shape556 = createNode("Shape");
Shape556.DEF = "Pitch_Back";
Appearance Appearance557 = createNode("Appearance");
Material Material558 = createNode("Material");
Material558.USE = "Clear";
Appearance557.material = Material558;

Shape556.appearance = Appearance557;

IndexedFaceSet IndexedFaceSet559 = createNode("IndexedFaceSet");
IndexedFaceSet559.USE = "Backing";
Shape556.geometry = IndexedFaceSet559;

Transform549.child[2] = Shape556;

Transform536.children[1] = Transform549;

Transform Transform560 = createNode("Transform");
Transform560.DEF = "Yaw_Text";
Transform560.translation = new SFVec3f(new float[0,-3.8,0]);
TouchSensor TouchSensor561 = createNode("TouchSensor");
TouchSensor561.DEF = "Yaw_Touch";
Transform560.children = new MFNode();

Transform560.children[0] = TouchSensor561;

Shape Shape562 = createNode("Shape");
Shape562.DEF = "YawText";
Appearance Appearance563 = createNode("Appearance");
Material Material564 = createNode("Material");
Material564.USE = "text_color";
Appearance563.material = Material564;

Shape562.appearance = Appearance563;

Text Text565 = createNode("Text");
Text565.string = new MFString(new java.lang.String["Yaw"]);
FontStyle FontStyle566 = createNode("FontStyle");
FontStyle566.family = new MFString(new java.lang.String["SANS"]);
Text565.fontStyle = FontStyle566;

Shape562.geometry = Text565;

Transform560.child[1] = Shape562;

Shape Shape567 = createNode("Shape");
Shape567.DEF = "Yaw_Back";
Appearance Appearance568 = createNode("Appearance");
Material Material569 = createNode("Material");
Material569.USE = "Clear";
Appearance568.material = Material569;

Shape567.appearance = Appearance568;

IndexedFaceSet IndexedFaceSet570 = createNode("IndexedFaceSet");
IndexedFaceSet570.USE = "Backing";
Shape567.geometry = IndexedFaceSet570;

Transform560.child[2] = Shape567;

Transform536.children[2] = Transform560;

Transform Transform571 = createNode("Transform");
Transform571.DEF = "Roll_Text";
Transform571.translation = new SFVec3f(new float[0,-5.2,0]);
TouchSensor TouchSensor572 = createNode("TouchSensor");
TouchSensor572.DEF = "Roll_Touch";
Transform571.children = new MFNode();

Transform571.children[0] = TouchSensor572;

Shape Shape573 = createNode("Shape");
Shape573.DEF = "RollText";
Appearance Appearance574 = createNode("Appearance");
Material Material575 = createNode("Material");
Material575.USE = "text_color";
Appearance574.material = Material575;

Shape573.appearance = Appearance574;

Text Text576 = createNode("Text");
Text576.string = new MFString(new java.lang.String["Roll"]);
FontStyle FontStyle577 = createNode("FontStyle");
FontStyle577.family = new MFString(new java.lang.String["SANS"]);
Text576.fontStyle = FontStyle577;

Shape573.geometry = Text576;

Transform571.child[1] = Shape573;

Shape Shape578 = createNode("Shape");
Shape578.DEF = "Roll_Back";
Appearance Appearance579 = createNode("Appearance");
Material Material580 = createNode("Material");
Material580.USE = "Clear";
Appearance579.material = Material580;

Shape578.appearance = Appearance579;

IndexedFaceSet IndexedFaceSet581 = createNode("IndexedFaceSet");
IndexedFaceSet581.USE = "Backing";
Shape578.geometry = IndexedFaceSet581;

Transform571.child[2] = Shape578;

Transform536.children[3] = Transform571;

Transform Transform582 = createNode("Transform");
Transform582.DEF = "Walk_Text";
Transform582.translation = new SFVec3f(new float[0,-6.6,0]);
TouchSensor TouchSensor583 = createNode("TouchSensor");
TouchSensor583.DEF = "Walk_Touch";
Transform582.children = new MFNode();

Transform582.children[0] = TouchSensor583;

Shape Shape584 = createNode("Shape");
Shape584.DEF = "WalkText";
Appearance Appearance585 = createNode("Appearance");
Material Material586 = createNode("Material");
Material586.USE = "text_color";
Appearance585.material = Material586;

Shape584.appearance = Appearance585;

Text Text587 = createNode("Text");
Text587.string = new MFString(new java.lang.String["Walk"]);
FontStyle FontStyle588 = createNode("FontStyle");
FontStyle588.family = new MFString(new java.lang.String["SANS"]);
Text587.fontStyle = FontStyle588;

Shape584.geometry = Text587;

Transform582.child[1] = Shape584;

Shape Shape589 = createNode("Shape");
Shape589.DEF = "Walk_Back";
Appearance Appearance590 = createNode("Appearance");
Material Material591 = createNode("Material");
Material591.USE = "Clear";
Appearance590.material = Material591;

Shape589.appearance = Appearance590;

IndexedFaceSet IndexedFaceSet592 = createNode("IndexedFaceSet");
IndexedFaceSet592.USE = "Backing";
Shape589.geometry = IndexedFaceSet592;

Transform582.child[2] = Shape589;

Transform536.children[4] = Transform582;

Transform Transform593 = createNode("Transform");
Transform593.DEF = "Run_Text";
Transform593.translation = new SFVec3f(new float[0,-8,0]);
TouchSensor TouchSensor594 = createNode("TouchSensor");
TouchSensor594.DEF = "Run_Touch";
Transform593.children = new MFNode();

Transform593.children[0] = TouchSensor594;

Shape Shape595 = createNode("Shape");
Shape595.DEF = "RunText";
Appearance Appearance596 = createNode("Appearance");
Material Material597 = createNode("Material");
Material597.USE = "text_color";
Appearance596.material = Material597;

Shape595.appearance = Appearance596;

Text Text598 = createNode("Text");
Text598.string = new MFString(new java.lang.String["Run"]);
FontStyle FontStyle599 = createNode("FontStyle");
FontStyle599.family = new MFString(new java.lang.String["SANS"]);
Text598.fontStyle = FontStyle599;

Shape595.geometry = Text598;

Transform593.child[1] = Shape595;

Shape Shape600 = createNode("Shape");
Shape600.DEF = "Run_Back";
Appearance Appearance601 = createNode("Appearance");
Material Material602 = createNode("Material");
Material602.USE = "Clear";
Appearance601.material = Material602;

Shape600.appearance = Appearance601;

IndexedFaceSet IndexedFaceSet603 = createNode("IndexedFaceSet");
IndexedFaceSet603.USE = "Backing";
Shape600.geometry = IndexedFaceSet603;

Transform593.child[2] = Shape600;

Transform536.children[5] = Transform593;

Transform Transform604 = createNode("Transform");
Transform604.DEF = "Jump_Text";
Transform604.translation = new SFVec3f(new float[0,-9.4,0]);
TouchSensor TouchSensor605 = createNode("TouchSensor");
TouchSensor605.DEF = "Jump_Touch";
Transform604.children = new MFNode();

Transform604.children[0] = TouchSensor605;

Shape Shape606 = createNode("Shape");
Shape606.DEF = "JumpText";
Appearance Appearance607 = createNode("Appearance");
Material Material608 = createNode("Material");
Material608.USE = "text_color";
Appearance607.material = Material608;

Shape606.appearance = Appearance607;

Text Text609 = createNode("Text");
Text609.string = new MFString(new java.lang.String["Jump"]);
FontStyle FontStyle610 = createNode("FontStyle");
FontStyle610.family = new MFString(new java.lang.String["SANS"]);
Text609.fontStyle = FontStyle610;

Shape606.geometry = Text609;

Transform604.child[1] = Shape606;

Shape Shape611 = createNode("Shape");
Shape611.DEF = "Jump_Back";
Appearance Appearance612 = createNode("Appearance");
Material Material613 = createNode("Material");
Material613.USE = "Clear";
Appearance612.material = Material613;

Shape611.appearance = Appearance612;

IndexedFaceSet IndexedFaceSet614 = createNode("IndexedFaceSet");
IndexedFaceSet614.USE = "Backing";
Shape611.geometry = IndexedFaceSet614;

Transform604.child[2] = Shape611;

Transform536.children[6] = Transform604;

Transform Transform615 = createNode("Transform");
Transform615.DEF = "Kick_Text";
Transform615.translation = new SFVec3f(new float[0,-10.8,0]);
TouchSensor TouchSensor616 = createNode("TouchSensor");
TouchSensor616.DEF = "Kick_Touch";
Transform615.children = new MFNode();

Transform615.children[0] = TouchSensor616;

Shape Shape617 = createNode("Shape");
Shape617.DEF = "KickText";
Appearance Appearance618 = createNode("Appearance");
Material Material619 = createNode("Material");
Material619.USE = "text_color";
Appearance618.material = Material619;

Shape617.appearance = Appearance618;

Text Text620 = createNode("Text");
Text620.string = new MFString(new java.lang.String["Kick"]);
FontStyle FontStyle621 = createNode("FontStyle");
FontStyle621.family = new MFString(new java.lang.String["SANS"]);
Text620.fontStyle = FontStyle621;

Shape617.geometry = Text620;

Transform615.child[1] = Shape617;

Shape Shape622 = createNode("Shape");
Shape622.DEF = "Kick_Back";
Appearance Appearance623 = createNode("Appearance");
Material Material624 = createNode("Material");
Material624.USE = "Clear";
Appearance623.material = Material624;

Shape622.appearance = Appearance623;

IndexedFaceSet IndexedFaceSet625 = createNode("IndexedFaceSet");
IndexedFaceSet625.USE = "Backing";
Shape622.geometry = IndexedFaceSet625;

Transform615.child[2] = Shape622;

Transform536.children[7] = Transform615;

Transform Transform626 = createNode("Transform");
Transform626.DEF = "Stop_Text";
Transform626.translation = new SFVec3f(new float[0,0.4,0]);
TouchSensor TouchSensor627 = createNode("TouchSensor");
TouchSensor627.DEF = "Stop_Touch";
Transform626.children = new MFNode();

Transform626.children[0] = TouchSensor627;

Shape Shape628 = createNode("Shape");
Shape628.DEF = "StopText";
Appearance Appearance629 = createNode("Appearance");
Material Material630 = createNode("Material");
Material630.USE = "text_color";
Appearance629.material = Material630;

Shape628.appearance = Appearance629;

Text Text631 = createNode("Text");
Text631.string = new MFString(new java.lang.String["Default"]);
FontStyle FontStyle632 = createNode("FontStyle");
FontStyle632.family = new MFString(new java.lang.String["SANS"]);
Text631.fontStyle = FontStyle632;

Shape628.geometry = Text631;

Transform626.child[1] = Shape628;

Shape Shape633 = createNode("Shape");
Shape633.DEF = "Stop_Back";
Appearance Appearance634 = createNode("Appearance");
Material Material635 = createNode("Material");
Material635.USE = "Clear";
Appearance634.material = Material635;

Shape633.appearance = Appearance634;

IndexedFaceSet IndexedFaceSet636 = createNode("IndexedFaceSet");
IndexedFaceSet636.USE = "Backing";
Shape633.geometry = IndexedFaceSet636;

Transform626.child[2] = Shape633;

Transform536.children[8] = Transform626;

Transform Transform637 = createNode("Transform");
Transform637.DEF = "SceneLabel";
Transform637.translation = new SFVec3f(new float[1.3,3,0]);
Shape Shape638 = createNode("Shape");
Shape638.DEF = "SceneLabelText";
Appearance Appearance639 = createNode("Appearance");
Material Material640 = createNode("Material");
Material640.USE = "text_color";
Appearance639.material = Material640;

Shape638.appearance = Appearance639;

Text Text641 = createNode("Text");
Text641.string = new MFString(new java.lang.String["BoxMan3","Animation"]);
FontStyle FontStyle642 = createNode("FontStyle");
FontStyle642.family = new MFString(new java.lang.String["SANS"]);
FontStyle642.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text641.fontStyle = FontStyle642;

Shape638.geometry = Text641;

Transform637.child = new undefined();

Transform637.child[0] = Shape638;

Transform536.children[9] = Transform637;

Transform535.children = new MFNode();

Transform535.children[0] = Transform536;

Group528.children[2] = Transform535;

children[12] = Group528;

ROUTE ROUTE643 = createNode("ROUTE");
ROUTE643.fromNode = "StopTimer";
ROUTE643.fromField = "fraction_changed";
ROUTE643.toNode = "Stop_humanoid_root_TranslationInterpolator";
ROUTE643.toField = "set_fraction";
children[13] = ROUTE643;

ROUTE ROUTE644 = createNode("ROUTE");
ROUTE644.fromNode = "StopTimer";
ROUTE644.fromField = "fraction_changed";
ROUTE644.toNode = "Stop_humanoid_root_RotationInterpolator";
ROUTE644.toField = "set_fraction";
children[14] = ROUTE644;

ROUTE ROUTE645 = createNode("ROUTE");
ROUTE645.fromNode = "StopTimer";
ROUTE645.fromField = "fraction_changed";
ROUTE645.toNode = "Stop_sacroiliac_RotationInterpolator";
ROUTE645.toField = "set_fraction";
children[15] = ROUTE645;

ROUTE ROUTE646 = createNode("ROUTE");
ROUTE646.fromNode = "StopTimer";
ROUTE646.fromField = "fraction_changed";
ROUTE646.toNode = "Stop_l_hip_RotationInterpolator";
ROUTE646.toField = "set_fraction";
children[16] = ROUTE646;

ROUTE ROUTE647 = createNode("ROUTE");
ROUTE647.fromNode = "StopTimer";
ROUTE647.fromField = "fraction_changed";
ROUTE647.toNode = "Stop_l_knee_RotationInterpolator";
ROUTE647.toField = "set_fraction";
children[17] = ROUTE647;

ROUTE ROUTE648 = createNode("ROUTE");
ROUTE648.fromNode = "StopTimer";
ROUTE648.fromField = "fraction_changed";
ROUTE648.toNode = "Stop_l_ankle_RotationInterpolator";
ROUTE648.toField = "set_fraction";
children[18] = ROUTE648;

ROUTE ROUTE649 = createNode("ROUTE");
ROUTE649.fromNode = "StopTimer";
ROUTE649.fromField = "fraction_changed";
ROUTE649.toNode = "Stop_l_subtalar_RotationInterpolator";
ROUTE649.toField = "set_fraction";
children[19] = ROUTE649;

ROUTE ROUTE650 = createNode("ROUTE");
ROUTE650.fromNode = "StopTimer";
ROUTE650.fromField = "fraction_changed";
ROUTE650.toNode = "Stop_l_midtarsal_RotationInterpolator";
ROUTE650.toField = "set_fraction";
children[20] = ROUTE650;

ROUTE ROUTE651 = createNode("ROUTE");
ROUTE651.fromNode = "StopTimer";
ROUTE651.fromField = "fraction_changed";
ROUTE651.toNode = "Stop_l_metatarsal_RotationInterpolator";
ROUTE651.toField = "set_fraction";
children[21] = ROUTE651;

ROUTE ROUTE652 = createNode("ROUTE");
ROUTE652.fromNode = "StopTimer";
ROUTE652.fromField = "fraction_changed";
ROUTE652.toNode = "Stop_r_hip_RotationInterpolator";
ROUTE652.toField = "set_fraction";
children[22] = ROUTE652;

ROUTE ROUTE653 = createNode("ROUTE");
ROUTE653.fromNode = "StopTimer";
ROUTE653.fromField = "fraction_changed";
ROUTE653.toNode = "Stop_r_knee_RotationInterpolator";
ROUTE653.toField = "set_fraction";
children[23] = ROUTE653;

ROUTE ROUTE654 = createNode("ROUTE");
ROUTE654.fromNode = "StopTimer";
ROUTE654.fromField = "fraction_changed";
ROUTE654.toNode = "Stop_r_ankle_RotationInterpolator";
ROUTE654.toField = "set_fraction";
children[24] = ROUTE654;

ROUTE ROUTE655 = createNode("ROUTE");
ROUTE655.fromNode = "StopTimer";
ROUTE655.fromField = "fraction_changed";
ROUTE655.toNode = "Stop_r_subtalar_RotationInterpolator";
ROUTE655.toField = "set_fraction";
children[25] = ROUTE655;

ROUTE ROUTE656 = createNode("ROUTE");
ROUTE656.fromNode = "StopTimer";
ROUTE656.fromField = "fraction_changed";
ROUTE656.toNode = "Stop_r_midtarsal_RotationInterpolator";
ROUTE656.toField = "set_fraction";
children[26] = ROUTE656;

ROUTE ROUTE657 = createNode("ROUTE");
ROUTE657.fromNode = "StopTimer";
ROUTE657.fromField = "fraction_changed";
ROUTE657.toNode = "Stop_r_metatarsal_RotationInterpolator";
ROUTE657.toField = "set_fraction";
children[27] = ROUTE657;

ROUTE ROUTE658 = createNode("ROUTE");
ROUTE658.fromNode = "StopTimer";
ROUTE658.fromField = "fraction_changed";
ROUTE658.toNode = "Stop_vl5_RotationInterpolator";
ROUTE658.toField = "set_fraction";
children[28] = ROUTE658;

ROUTE ROUTE659 = createNode("ROUTE");
ROUTE659.fromNode = "StopTimer";
ROUTE659.fromField = "fraction_changed";
ROUTE659.toNode = "Stop_vl4_RotationInterpolator";
ROUTE659.toField = "set_fraction";
children[29] = ROUTE659;

ROUTE ROUTE660 = createNode("ROUTE");
ROUTE660.fromNode = "StopTimer";
ROUTE660.fromField = "fraction_changed";
ROUTE660.toNode = "Stop_vl3_RotationInterpolator";
ROUTE660.toField = "set_fraction";
children[30] = ROUTE660;

ROUTE ROUTE661 = createNode("ROUTE");
ROUTE661.fromNode = "StopTimer";
ROUTE661.fromField = "fraction_changed";
ROUTE661.toNode = "Stop_vl2_RotationInterpolator";
ROUTE661.toField = "set_fraction";
children[31] = ROUTE661;

ROUTE ROUTE662 = createNode("ROUTE");
ROUTE662.fromNode = "StopTimer";
ROUTE662.fromField = "fraction_changed";
ROUTE662.toNode = "Stop_vl1_RotationInterpolator";
ROUTE662.toField = "set_fraction";
children[32] = ROUTE662;

ROUTE ROUTE663 = createNode("ROUTE");
ROUTE663.fromNode = "StopTimer";
ROUTE663.fromField = "fraction_changed";
ROUTE663.toNode = "Stop_vt12_RotationInterpolator";
ROUTE663.toField = "set_fraction";
children[33] = ROUTE663;

ROUTE ROUTE664 = createNode("ROUTE");
ROUTE664.fromNode = "StopTimer";
ROUTE664.fromField = "fraction_changed";
ROUTE664.toNode = "Stop_vt11_RotationInterpolator";
ROUTE664.toField = "set_fraction";
children[34] = ROUTE664;

ROUTE ROUTE665 = createNode("ROUTE");
ROUTE665.fromNode = "StopTimer";
ROUTE665.fromField = "fraction_changed";
ROUTE665.toNode = "Stop_vt10_RotationInterpolator";
ROUTE665.toField = "set_fraction";
children[35] = ROUTE665;

ROUTE ROUTE666 = createNode("ROUTE");
ROUTE666.fromNode = "StopTimer";
ROUTE666.fromField = "fraction_changed";
ROUTE666.toNode = "Stop_vt9_RotationInterpolator";
ROUTE666.toField = "set_fraction";
children[36] = ROUTE666;

ROUTE ROUTE667 = createNode("ROUTE");
ROUTE667.fromNode = "StopTimer";
ROUTE667.fromField = "fraction_changed";
ROUTE667.toNode = "Stop_vt8_RotationInterpolator";
ROUTE667.toField = "set_fraction";
children[37] = ROUTE667;

ROUTE ROUTE668 = createNode("ROUTE");
ROUTE668.fromNode = "StopTimer";
ROUTE668.fromField = "fraction_changed";
ROUTE668.toNode = "Stop_vt7_RotationInterpolator";
ROUTE668.toField = "set_fraction";
children[38] = ROUTE668;

ROUTE ROUTE669 = createNode("ROUTE");
ROUTE669.fromNode = "StopTimer";
ROUTE669.fromField = "fraction_changed";
ROUTE669.toNode = "Stop_vt6_RotationInterpolator";
ROUTE669.toField = "set_fraction";
children[39] = ROUTE669;

ROUTE ROUTE670 = createNode("ROUTE");
ROUTE670.fromNode = "StopTimer";
ROUTE670.fromField = "fraction_changed";
ROUTE670.toNode = "Stop_vt5_RotationInterpolator";
ROUTE670.toField = "set_fraction";
children[40] = ROUTE670;

ROUTE ROUTE671 = createNode("ROUTE");
ROUTE671.fromNode = "StopTimer";
ROUTE671.fromField = "fraction_changed";
ROUTE671.toNode = "Stop_vt4_RotationInterpolator";
ROUTE671.toField = "set_fraction";
children[41] = ROUTE671;

ROUTE ROUTE672 = createNode("ROUTE");
ROUTE672.fromNode = "StopTimer";
ROUTE672.fromField = "fraction_changed";
ROUTE672.toNode = "Stop_vt3_RotationInterpolator";
ROUTE672.toField = "set_fraction";
children[42] = ROUTE672;

ROUTE ROUTE673 = createNode("ROUTE");
ROUTE673.fromNode = "StopTimer";
ROUTE673.fromField = "fraction_changed";
ROUTE673.toNode = "Stop_vt2_RotationInterpolator";
ROUTE673.toField = "set_fraction";
children[43] = ROUTE673;

ROUTE ROUTE674 = createNode("ROUTE");
ROUTE674.fromNode = "StopTimer";
ROUTE674.fromField = "fraction_changed";
ROUTE674.toNode = "Stop_vt1_RotationInterpolator";
ROUTE674.toField = "set_fraction";
children[44] = ROUTE674;

ROUTE ROUTE675 = createNode("ROUTE");
ROUTE675.fromNode = "StopTimer";
ROUTE675.fromField = "fraction_changed";
ROUTE675.toNode = "Stop_vc7_RotationInterpolator";
ROUTE675.toField = "set_fraction";
children[45] = ROUTE675;

ROUTE ROUTE676 = createNode("ROUTE");
ROUTE676.fromNode = "StopTimer";
ROUTE676.fromField = "fraction_changed";
ROUTE676.toNode = "Stop_vc6_RotationInterpolator";
ROUTE676.toField = "set_fraction";
children[46] = ROUTE676;

ROUTE ROUTE677 = createNode("ROUTE");
ROUTE677.fromNode = "StopTimer";
ROUTE677.fromField = "fraction_changed";
ROUTE677.toNode = "Stop_vc5_RotationInterpolator";
ROUTE677.toField = "set_fraction";
children[47] = ROUTE677;

ROUTE ROUTE678 = createNode("ROUTE");
ROUTE678.fromNode = "StopTimer";
ROUTE678.fromField = "fraction_changed";
ROUTE678.toNode = "Stop_vc4_RotationInterpolator";
ROUTE678.toField = "set_fraction";
children[48] = ROUTE678;

ROUTE ROUTE679 = createNode("ROUTE");
ROUTE679.fromNode = "StopTimer";
ROUTE679.fromField = "fraction_changed";
ROUTE679.toNode = "Stop_vc3_RotationInterpolator";
ROUTE679.toField = "set_fraction";
children[49] = ROUTE679;

ROUTE ROUTE680 = createNode("ROUTE");
ROUTE680.fromNode = "StopTimer";
ROUTE680.fromField = "fraction_changed";
ROUTE680.toNode = "Stop_vc2_RotationInterpolator";
ROUTE680.toField = "set_fraction";
children[50] = ROUTE680;

ROUTE ROUTE681 = createNode("ROUTE");
ROUTE681.fromNode = "StopTimer";
ROUTE681.fromField = "fraction_changed";
ROUTE681.toNode = "Stop_vc1_RotationInterpolator";
ROUTE681.toField = "set_fraction";
children[51] = ROUTE681;

ROUTE ROUTE682 = createNode("ROUTE");
ROUTE682.fromNode = "StopTimer";
ROUTE682.fromField = "fraction_changed";
ROUTE682.toNode = "Stop_skullbase_RotationInterpolator";
ROUTE682.toField = "set_fraction";
children[52] = ROUTE682;

ROUTE ROUTE683 = createNode("ROUTE");
ROUTE683.fromNode = "StopTimer";
ROUTE683.fromField = "fraction_changed";
ROUTE683.toNode = "Stop_l_eyeball_joint_RotationInterpolator";
ROUTE683.toField = "set_fraction";
children[53] = ROUTE683;

ROUTE ROUTE684 = createNode("ROUTE");
ROUTE684.fromNode = "StopTimer";
ROUTE684.fromField = "fraction_changed";
ROUTE684.toNode = "Stop_r_eyeball_joint_RotationInterpolator";
ROUTE684.toField = "set_fraction";
children[54] = ROUTE684;

ROUTE ROUTE685 = createNode("ROUTE");
ROUTE685.fromNode = "StopTimer";
ROUTE685.fromField = "fraction_changed";
ROUTE685.toNode = "Stop_l_sternoclavicular_RotationInterpolator";
ROUTE685.toField = "set_fraction";
children[55] = ROUTE685;

ROUTE ROUTE686 = createNode("ROUTE");
ROUTE686.fromNode = "StopTimer";
ROUTE686.fromField = "fraction_changed";
ROUTE686.toNode = "Stop_l_acromioclavicular_RotationInterpolator";
ROUTE686.toField = "set_fraction";
children[56] = ROUTE686;

ROUTE ROUTE687 = createNode("ROUTE");
ROUTE687.fromNode = "StopTimer";
ROUTE687.fromField = "fraction_changed";
ROUTE687.toNode = "Stop_l_shoulder_RotationInterpolator";
ROUTE687.toField = "set_fraction";
children[57] = ROUTE687;

ROUTE ROUTE688 = createNode("ROUTE");
ROUTE688.fromNode = "StopTimer";
ROUTE688.fromField = "fraction_changed";
ROUTE688.toNode = "Stop_l_elbow_RotationInterpolator";
ROUTE688.toField = "set_fraction";
children[58] = ROUTE688;

ROUTE ROUTE689 = createNode("ROUTE");
ROUTE689.fromNode = "StopTimer";
ROUTE689.fromField = "fraction_changed";
ROUTE689.toNode = "Stop_l_wrist_RotationInterpolator";
ROUTE689.toField = "set_fraction";
children[59] = ROUTE689;

ROUTE ROUTE690 = createNode("ROUTE");
ROUTE690.fromNode = "StopTimer";
ROUTE690.fromField = "fraction_changed";
ROUTE690.toNode = "Stop_l_thumb1_RotationInterpolator";
ROUTE690.toField = "set_fraction";
children[60] = ROUTE690;

ROUTE ROUTE691 = createNode("ROUTE");
ROUTE691.fromNode = "StopTimer";
ROUTE691.fromField = "fraction_changed";
ROUTE691.toNode = "Stop_l_thumb2_RotationInterpolator";
ROUTE691.toField = "set_fraction";
children[61] = ROUTE691;

ROUTE ROUTE692 = createNode("ROUTE");
ROUTE692.fromNode = "StopTimer";
ROUTE692.fromField = "fraction_changed";
ROUTE692.toNode = "Stop_l_thumb3_RotationInterpolator";
ROUTE692.toField = "set_fraction";
children[62] = ROUTE692;

ROUTE ROUTE693 = createNode("ROUTE");
ROUTE693.fromNode = "StopTimer";
ROUTE693.fromField = "fraction_changed";
ROUTE693.toNode = "Stop_l_index0_RotationInterpolator";
ROUTE693.toField = "set_fraction";
children[63] = ROUTE693;

ROUTE ROUTE694 = createNode("ROUTE");
ROUTE694.fromNode = "StopTimer";
ROUTE694.fromField = "fraction_changed";
ROUTE694.toNode = "Stop_l_index1_RotationInterpolator";
ROUTE694.toField = "set_fraction";
children[64] = ROUTE694;

ROUTE ROUTE695 = createNode("ROUTE");
ROUTE695.fromNode = "StopTimer";
ROUTE695.fromField = "fraction_changed";
ROUTE695.toNode = "Stop_l_index2_RotationInterpolator";
ROUTE695.toField = "set_fraction";
children[65] = ROUTE695;

ROUTE ROUTE696 = createNode("ROUTE");
ROUTE696.fromNode = "StopTimer";
ROUTE696.fromField = "fraction_changed";
ROUTE696.toNode = "Stop_l_index3_RotationInterpolator";
ROUTE696.toField = "set_fraction";
children[66] = ROUTE696;

ROUTE ROUTE697 = createNode("ROUTE");
ROUTE697.fromNode = "StopTimer";
ROUTE697.fromField = "fraction_changed";
ROUTE697.toNode = "Stop_l_middle0_RotationInterpolator";
ROUTE697.toField = "set_fraction";
children[67] = ROUTE697;

ROUTE ROUTE698 = createNode("ROUTE");
ROUTE698.fromNode = "StopTimer";
ROUTE698.fromField = "fraction_changed";
ROUTE698.toNode = "Stop_l_middle1_RotationInterpolator";
ROUTE698.toField = "set_fraction";
children[68] = ROUTE698;

ROUTE ROUTE699 = createNode("ROUTE");
ROUTE699.fromNode = "StopTimer";
ROUTE699.fromField = "fraction_changed";
ROUTE699.toNode = "Stop_l_middle2_RotationInterpolator";
ROUTE699.toField = "set_fraction";
children[69] = ROUTE699;

ROUTE ROUTE700 = createNode("ROUTE");
ROUTE700.fromNode = "StopTimer";
ROUTE700.fromField = "fraction_changed";
ROUTE700.toNode = "Stop_l_middle3_RotationInterpolator";
ROUTE700.toField = "set_fraction";
children[70] = ROUTE700;

ROUTE ROUTE701 = createNode("ROUTE");
ROUTE701.fromNode = "StopTimer";
ROUTE701.fromField = "fraction_changed";
ROUTE701.toNode = "Stop_l_ring0_RotationInterpolator";
ROUTE701.toField = "set_fraction";
children[71] = ROUTE701;

ROUTE ROUTE702 = createNode("ROUTE");
ROUTE702.fromNode = "StopTimer";
ROUTE702.fromField = "fraction_changed";
ROUTE702.toNode = "Stop_l_ring1_RotationInterpolator";
ROUTE702.toField = "set_fraction";
children[72] = ROUTE702;

ROUTE ROUTE703 = createNode("ROUTE");
ROUTE703.fromNode = "StopTimer";
ROUTE703.fromField = "fraction_changed";
ROUTE703.toNode = "Stop_l_ring2_RotationInterpolator";
ROUTE703.toField = "set_fraction";
children[73] = ROUTE703;

ROUTE ROUTE704 = createNode("ROUTE");
ROUTE704.fromNode = "StopTimer";
ROUTE704.fromField = "fraction_changed";
ROUTE704.toNode = "Stop_l_ring3_RotationInterpolator";
ROUTE704.toField = "set_fraction";
children[74] = ROUTE704;

ROUTE ROUTE705 = createNode("ROUTE");
ROUTE705.fromNode = "StopTimer";
ROUTE705.fromField = "fraction_changed";
ROUTE705.toNode = "Stop_l_pinky0_RotationInterpolator";
ROUTE705.toField = "set_fraction";
children[75] = ROUTE705;

ROUTE ROUTE706 = createNode("ROUTE");
ROUTE706.fromNode = "StopTimer";
ROUTE706.fromField = "fraction_changed";
ROUTE706.toNode = "Stop_l_pinky1_RotationInterpolator";
ROUTE706.toField = "set_fraction";
children[76] = ROUTE706;

ROUTE ROUTE707 = createNode("ROUTE");
ROUTE707.fromNode = "StopTimer";
ROUTE707.fromField = "fraction_changed";
ROUTE707.toNode = "Stop_l_pinky2_RotationInterpolator";
ROUTE707.toField = "set_fraction";
children[77] = ROUTE707;

ROUTE ROUTE708 = createNode("ROUTE");
ROUTE708.fromNode = "StopTimer";
ROUTE708.fromField = "fraction_changed";
ROUTE708.toNode = "Stop_l_pinky3_RotationInterpolator";
ROUTE708.toField = "set_fraction";
children[78] = ROUTE708;

ROUTE ROUTE709 = createNode("ROUTE");
ROUTE709.fromNode = "StopTimer";
ROUTE709.fromField = "fraction_changed";
ROUTE709.toNode = "Stop_r_sternoclavicular_RotationInterpolator";
ROUTE709.toField = "set_fraction";
children[79] = ROUTE709;

ROUTE ROUTE710 = createNode("ROUTE");
ROUTE710.fromNode = "StopTimer";
ROUTE710.fromField = "fraction_changed";
ROUTE710.toNode = "Stop_r_acromioclavicular_RotationInterpolator";
ROUTE710.toField = "set_fraction";
children[80] = ROUTE710;

ROUTE ROUTE711 = createNode("ROUTE");
ROUTE711.fromNode = "StopTimer";
ROUTE711.fromField = "fraction_changed";
ROUTE711.toNode = "Stop_r_shoulder_RotationInterpolator";
ROUTE711.toField = "set_fraction";
children[81] = ROUTE711;

ROUTE ROUTE712 = createNode("ROUTE");
ROUTE712.fromNode = "StopTimer";
ROUTE712.fromField = "fraction_changed";
ROUTE712.toNode = "Stop_r_elbow_RotationInterpolator";
ROUTE712.toField = "set_fraction";
children[82] = ROUTE712;

ROUTE ROUTE713 = createNode("ROUTE");
ROUTE713.fromNode = "StopTimer";
ROUTE713.fromField = "fraction_changed";
ROUTE713.toNode = "Stop_r_wrist_RotationInterpolator";
ROUTE713.toField = "set_fraction";
children[83] = ROUTE713;

ROUTE ROUTE714 = createNode("ROUTE");
ROUTE714.fromNode = "StopTimer";
ROUTE714.fromField = "fraction_changed";
ROUTE714.toNode = "Stop_r_thumb1_RotationInterpolator";
ROUTE714.toField = "set_fraction";
children[84] = ROUTE714;

ROUTE ROUTE715 = createNode("ROUTE");
ROUTE715.fromNode = "StopTimer";
ROUTE715.fromField = "fraction_changed";
ROUTE715.toNode = "Stop_r_thumb2_RotationInterpolator";
ROUTE715.toField = "set_fraction";
children[85] = ROUTE715;

ROUTE ROUTE716 = createNode("ROUTE");
ROUTE716.fromNode = "StopTimer";
ROUTE716.fromField = "fraction_changed";
ROUTE716.toNode = "Stop_r_thumb3_RotationInterpolator";
ROUTE716.toField = "set_fraction";
children[86] = ROUTE716;

ROUTE ROUTE717 = createNode("ROUTE");
ROUTE717.fromNode = "StopTimer";
ROUTE717.fromField = "fraction_changed";
ROUTE717.toNode = "Stop_r_index0_RotationInterpolator";
ROUTE717.toField = "set_fraction";
children[87] = ROUTE717;

ROUTE ROUTE718 = createNode("ROUTE");
ROUTE718.fromNode = "StopTimer";
ROUTE718.fromField = "fraction_changed";
ROUTE718.toNode = "Stop_r_index1_RotationInterpolator";
ROUTE718.toField = "set_fraction";
children[88] = ROUTE718;

ROUTE ROUTE719 = createNode("ROUTE");
ROUTE719.fromNode = "StopTimer";
ROUTE719.fromField = "fraction_changed";
ROUTE719.toNode = "Stop_r_index2_RotationInterpolator";
ROUTE719.toField = "set_fraction";
children[89] = ROUTE719;

ROUTE ROUTE720 = createNode("ROUTE");
ROUTE720.fromNode = "StopTimer";
ROUTE720.fromField = "fraction_changed";
ROUTE720.toNode = "Stop_r_index3_RotationInterpolator";
ROUTE720.toField = "set_fraction";
children[90] = ROUTE720;

ROUTE ROUTE721 = createNode("ROUTE");
ROUTE721.fromNode = "StopTimer";
ROUTE721.fromField = "fraction_changed";
ROUTE721.toNode = "Stop_r_middle0_RotationInterpolator";
ROUTE721.toField = "set_fraction";
children[91] = ROUTE721;

ROUTE ROUTE722 = createNode("ROUTE");
ROUTE722.fromNode = "StopTimer";
ROUTE722.fromField = "fraction_changed";
ROUTE722.toNode = "Stop_r_middle1_RotationInterpolator";
ROUTE722.toField = "set_fraction";
children[92] = ROUTE722;

ROUTE ROUTE723 = createNode("ROUTE");
ROUTE723.fromNode = "StopTimer";
ROUTE723.fromField = "fraction_changed";
ROUTE723.toNode = "Stop_r_middle2_RotationInterpolator";
ROUTE723.toField = "set_fraction";
children[93] = ROUTE723;

ROUTE ROUTE724 = createNode("ROUTE");
ROUTE724.fromNode = "StopTimer";
ROUTE724.fromField = "fraction_changed";
ROUTE724.toNode = "Stop_r_middle3_RotationInterpolator";
ROUTE724.toField = "set_fraction";
children[94] = ROUTE724;

ROUTE ROUTE725 = createNode("ROUTE");
ROUTE725.fromNode = "StopTimer";
ROUTE725.fromField = "fraction_changed";
ROUTE725.toNode = "Stop_r_ring0_RotationInterpolator";
ROUTE725.toField = "set_fraction";
children[95] = ROUTE725;

ROUTE ROUTE726 = createNode("ROUTE");
ROUTE726.fromNode = "StopTimer";
ROUTE726.fromField = "fraction_changed";
ROUTE726.toNode = "Stop_r_ring1_RotationInterpolator";
ROUTE726.toField = "set_fraction";
children[96] = ROUTE726;

ROUTE ROUTE727 = createNode("ROUTE");
ROUTE727.fromNode = "StopTimer";
ROUTE727.fromField = "fraction_changed";
ROUTE727.toNode = "Stop_r_ring2_RotationInterpolator";
ROUTE727.toField = "set_fraction";
children[97] = ROUTE727;

ROUTE ROUTE728 = createNode("ROUTE");
ROUTE728.fromNode = "StopTimer";
ROUTE728.fromField = "fraction_changed";
ROUTE728.toNode = "Stop_r_ring3_RotationInterpolator";
ROUTE728.toField = "set_fraction";
children[98] = ROUTE728;

ROUTE ROUTE729 = createNode("ROUTE");
ROUTE729.fromNode = "StopTimer";
ROUTE729.fromField = "fraction_changed";
ROUTE729.toNode = "Stop_r_pinky0_RotationInterpolator";
ROUTE729.toField = "set_fraction";
children[99] = ROUTE729;

ROUTE ROUTE730 = createNode("ROUTE");
ROUTE730.fromNode = "StopTimer";
ROUTE730.fromField = "fraction_changed";
ROUTE730.toNode = "Stop_r_pinky1_RotationInterpolator";
ROUTE730.toField = "set_fraction";
children[100] = ROUTE730;

ROUTE ROUTE731 = createNode("ROUTE");
ROUTE731.fromNode = "StopTimer";
ROUTE731.fromField = "fraction_changed";
ROUTE731.toNode = "Stop_r_pinky2_RotationInterpolator";
ROUTE731.toField = "set_fraction";
children[101] = ROUTE731;

ROUTE ROUTE732 = createNode("ROUTE");
ROUTE732.fromNode = "StopTimer";
ROUTE732.fromField = "fraction_changed";
ROUTE732.toNode = "Stop_r_pinky3_RotationInterpolator";
ROUTE732.toField = "set_fraction";
children[102] = ROUTE732;

ROUTE ROUTE733 = createNode("ROUTE");
ROUTE733.fromNode = "Stop_humanoid_root_TranslationInterpolator";
ROUTE733.fromField = "value_changed";
ROUTE733.toNode = "boxman_humanoid_root";
ROUTE733.toField = "set_translation";
children[103] = ROUTE733;

ROUTE ROUTE734 = createNode("ROUTE");
ROUTE734.fromNode = "Stop_humanoid_root_RotationInterpolator";
ROUTE734.fromField = "value_changed";
ROUTE734.toNode = "boxman_humanoid_root";
ROUTE734.toField = "set_rotation";
children[104] = ROUTE734;

ROUTE ROUTE735 = createNode("ROUTE");
ROUTE735.fromNode = "Stop_l_hip_RotationInterpolator";
ROUTE735.fromField = "value_changed";
ROUTE735.toNode = "boxman_l_hip";
ROUTE735.toField = "set_rotation";
children[105] = ROUTE735;

ROUTE ROUTE736 = createNode("ROUTE");
ROUTE736.fromNode = "Stop_l_knee_RotationInterpolator";
ROUTE736.fromField = "value_changed";
ROUTE736.toNode = "boxman_l_knee";
ROUTE736.toField = "set_rotation";
children[106] = ROUTE736;

ROUTE ROUTE737 = createNode("ROUTE");
ROUTE737.fromNode = "Stop_l_ankle_RotationInterpolator";
ROUTE737.fromField = "value_changed";
ROUTE737.toNode = "boxman_l_ankle";
ROUTE737.toField = "set_rotation";
children[107] = ROUTE737;

ROUTE ROUTE738 = createNode("ROUTE");
ROUTE738.fromNode = "Stop_l_midtarsal_RotationInterpolator";
ROUTE738.fromField = "value_changed";
ROUTE738.toNode = "boxman_l_midtarsal";
ROUTE738.toField = "set_rotation";
children[108] = ROUTE738;

ROUTE ROUTE739 = createNode("ROUTE");
ROUTE739.fromNode = "Stop_r_hip_RotationInterpolator";
ROUTE739.fromField = "value_changed";
ROUTE739.toNode = "boxman_r_hip";
ROUTE739.toField = "set_rotation";
children[109] = ROUTE739;

ROUTE ROUTE740 = createNode("ROUTE");
ROUTE740.fromNode = "Stop_r_knee_RotationInterpolator";
ROUTE740.fromField = "value_changed";
ROUTE740.toNode = "boxman_r_knee";
ROUTE740.toField = "set_rotation";
children[110] = ROUTE740;

ROUTE ROUTE741 = createNode("ROUTE");
ROUTE741.fromNode = "Stop_r_ankle_RotationInterpolator";
ROUTE741.fromField = "value_changed";
ROUTE741.toNode = "boxman_r_ankle";
ROUTE741.toField = "set_rotation";
children[111] = ROUTE741;

ROUTE ROUTE742 = createNode("ROUTE");
ROUTE742.fromNode = "Stop_r_midtarsal_RotationInterpolator";
ROUTE742.fromField = "value_changed";
ROUTE742.toNode = "boxman_r_midtarsal";
ROUTE742.toField = "set_rotation";
children[112] = ROUTE742;

ROUTE ROUTE743 = createNode("ROUTE");
ROUTE743.fromNode = "Stop_vl5_RotationInterpolator";
ROUTE743.fromField = "value_changed";
ROUTE743.toNode = "boxman_vl5";
ROUTE743.toField = "set_rotation";
children[113] = ROUTE743;

ROUTE ROUTE744 = createNode("ROUTE");
ROUTE744.fromNode = "Stop_skullbase_RotationInterpolator";
ROUTE744.fromField = "value_changed";
ROUTE744.toNode = "boxman_skullbase";
ROUTE744.toField = "set_rotation";
children[114] = ROUTE744;

ROUTE ROUTE745 = createNode("ROUTE");
ROUTE745.fromNode = "Stop_l_shoulder_RotationInterpolator";
ROUTE745.fromField = "value_changed";
ROUTE745.toNode = "boxman_l_shoulder";
ROUTE745.toField = "set_rotation";
children[115] = ROUTE745;

ROUTE ROUTE746 = createNode("ROUTE");
ROUTE746.fromNode = "Stop_l_elbow_RotationInterpolator";
ROUTE746.fromField = "value_changed";
ROUTE746.toNode = "boxman_l_elbow";
ROUTE746.toField = "set_rotation";
children[116] = ROUTE746;

ROUTE ROUTE747 = createNode("ROUTE");
ROUTE747.fromNode = "Stop_l_wrist_RotationInterpolator";
ROUTE747.fromField = "value_changed";
ROUTE747.toNode = "boxman_l_wrist";
ROUTE747.toField = "set_rotation";
children[117] = ROUTE747;

ROUTE ROUTE748 = createNode("ROUTE");
ROUTE748.fromNode = "Stop_r_shoulder_RotationInterpolator";
ROUTE748.fromField = "value_changed";
ROUTE748.toNode = "boxman_r_shoulder";
ROUTE748.toField = "set_rotation";
children[118] = ROUTE748;

ROUTE ROUTE749 = createNode("ROUTE");
ROUTE749.fromNode = "Stop_r_elbow_RotationInterpolator";
ROUTE749.fromField = "value_changed";
ROUTE749.toNode = "boxman_r_elbow";
ROUTE749.toField = "set_rotation";
children[119] = ROUTE749;

ROUTE ROUTE750 = createNode("ROUTE");
ROUTE750.fromNode = "Stop_r_wrist_RotationInterpolator";
ROUTE750.fromField = "value_changed";
ROUTE750.toNode = "boxman_r_wrist";
ROUTE750.toField = "set_rotation";
children[120] = ROUTE750;

ROUTE ROUTE751 = createNode("ROUTE");
ROUTE751.fromNode = "StandTimer";
ROUTE751.fromField = "fraction_changed";
ROUTE751.toNode = "Stand_r_ankle_RotationInterpolator";
ROUTE751.toField = "set_fraction";
children[121] = ROUTE751;

ROUTE ROUTE752 = createNode("ROUTE");
ROUTE752.fromNode = "StandTimer";
ROUTE752.fromField = "fraction_changed";
ROUTE752.toNode = "Stand_r_knee_RotationInterpolator";
ROUTE752.toField = "set_fraction";
children[122] = ROUTE752;

ROUTE ROUTE753 = createNode("ROUTE");
ROUTE753.fromNode = "StandTimer";
ROUTE753.fromField = "fraction_changed";
ROUTE753.toNode = "Stand_r_hip_RotationInterpolator";
ROUTE753.toField = "set_fraction";
children[123] = ROUTE753;

ROUTE ROUTE754 = createNode("ROUTE");
ROUTE754.fromNode = "StandTimer";
ROUTE754.fromField = "fraction_changed";
ROUTE754.toNode = "Stand_l_ankle_RotationInterpolator";
ROUTE754.toField = "set_fraction";
children[124] = ROUTE754;

ROUTE ROUTE755 = createNode("ROUTE");
ROUTE755.fromNode = "StandTimer";
ROUTE755.fromField = "fraction_changed";
ROUTE755.toNode = "Stand_l_knee_RotationInterpolator";
ROUTE755.toField = "set_fraction";
children[125] = ROUTE755;

ROUTE ROUTE756 = createNode("ROUTE");
ROUTE756.fromNode = "StandTimer";
ROUTE756.fromField = "fraction_changed";
ROUTE756.toNode = "Stand_l_hip_RotationInterpolator";
ROUTE756.toField = "set_fraction";
children[126] = ROUTE756;

ROUTE ROUTE757 = createNode("ROUTE");
ROUTE757.fromNode = "StandTimer";
ROUTE757.fromField = "fraction_changed";
ROUTE757.toNode = "Stand_lower_body_RotationInterpolator";
ROUTE757.toField = "set_fraction";
children[127] = ROUTE757;

ROUTE ROUTE758 = createNode("ROUTE");
ROUTE758.fromNode = "StandTimer";
ROUTE758.fromField = "fraction_changed";
ROUTE758.toNode = "Stand_r_wrist_RotationInterpolator";
ROUTE758.toField = "set_fraction";
children[128] = ROUTE758;

ROUTE ROUTE759 = createNode("ROUTE");
ROUTE759.fromNode = "StandTimer";
ROUTE759.fromField = "fraction_changed";
ROUTE759.toNode = "Stand_r_elbow_RotationInterpolator";
ROUTE759.toField = "set_fraction";
children[129] = ROUTE759;

ROUTE ROUTE760 = createNode("ROUTE");
ROUTE760.fromNode = "StandTimer";
ROUTE760.fromField = "fraction_changed";
ROUTE760.toNode = "Stand_r_shoulder_RotationInterpolator";
ROUTE760.toField = "set_fraction";
children[130] = ROUTE760;

ROUTE ROUTE761 = createNode("ROUTE");
ROUTE761.fromNode = "StandTimer";
ROUTE761.fromField = "fraction_changed";
ROUTE761.toNode = "Stand_l_wrist_RotationInterpolator";
ROUTE761.toField = "set_fraction";
children[131] = ROUTE761;

ROUTE ROUTE762 = createNode("ROUTE");
ROUTE762.fromNode = "StandTimer";
ROUTE762.fromField = "fraction_changed";
ROUTE762.toNode = "Stand_l_elbow_RotationInterpolator";
ROUTE762.toField = "set_fraction";
children[132] = ROUTE762;

ROUTE ROUTE763 = createNode("ROUTE");
ROUTE763.fromNode = "StandTimer";
ROUTE763.fromField = "fraction_changed";
ROUTE763.toNode = "Stand_l_shoulder_RotationInterpolator";
ROUTE763.toField = "set_fraction";
children[133] = ROUTE763;

ROUTE ROUTE764 = createNode("ROUTE");
ROUTE764.fromNode = "StandTimer";
ROUTE764.fromField = "fraction_changed";
ROUTE764.toNode = "Stand_head_RotationInterpolator";
ROUTE764.toField = "set_fraction";
children[134] = ROUTE764;

ROUTE ROUTE765 = createNode("ROUTE");
ROUTE765.fromNode = "StandTimer";
ROUTE765.fromField = "fraction_changed";
ROUTE765.toNode = "Stand_neck_RotationInterpolator";
ROUTE765.toField = "set_fraction";
children[135] = ROUTE765;

ROUTE ROUTE766 = createNode("ROUTE");
ROUTE766.fromNode = "StandTimer";
ROUTE766.fromField = "fraction_changed";
ROUTE766.toNode = "Stand_l_eyeball_RotationInterpolator";
ROUTE766.toField = "set_fraction";
children[136] = ROUTE766;

ROUTE ROUTE767 = createNode("ROUTE");
ROUTE767.fromNode = "StandTimer";
ROUTE767.fromField = "fraction_changed";
ROUTE767.toNode = "Stand_r_eyeball_RotationInterpolator";
ROUTE767.toField = "set_fraction";
children[137] = ROUTE767;

ROUTE ROUTE768 = createNode("ROUTE");
ROUTE768.fromNode = "StandTimer";
ROUTE768.fromField = "fraction_changed";
ROUTE768.toNode = "Stand_upper_body_RotationInterpolator";
ROUTE768.toField = "set_fraction";
children[138] = ROUTE768;

ROUTE ROUTE769 = createNode("ROUTE");
ROUTE769.fromNode = "StandTimer";
ROUTE769.fromField = "fraction_changed";
ROUTE769.toNode = "Stand_whole_body_RotationInterpolator";
ROUTE769.toField = "set_fraction";
children[139] = ROUTE769;

ROUTE ROUTE770 = createNode("ROUTE");
ROUTE770.fromNode = "StandTimer";
ROUTE770.fromField = "fraction_changed";
ROUTE770.toNode = "Stand_whole_body_TranslationInterpolator";
ROUTE770.toField = "set_fraction";
children[140] = ROUTE770;

ROUTE ROUTE771 = createNode("ROUTE");
ROUTE771.fromNode = "StandTimer";
ROUTE771.fromField = "fraction_changed";
ROUTE771.toNode = "Stand_l_sternoclavicular_RollInterpolator";
ROUTE771.toField = "set_fraction";
children[141] = ROUTE771;

ROUTE ROUTE772 = createNode("ROUTE");
ROUTE772.fromNode = "StandTimer";
ROUTE772.fromField = "fraction_changed";
ROUTE772.toNode = "Stand_l_acromioclavicular_RollInterpolator";
ROUTE772.toField = "set_fraction";
children[142] = ROUTE772;

ROUTE ROUTE773 = createNode("ROUTE");
ROUTE773.fromNode = "StandTimer";
ROUTE773.fromField = "fraction_changed";
ROUTE773.toNode = "Stand_r_sternoclavicular_RollInterpolator";
ROUTE773.toField = "set_fraction";
children[143] = ROUTE773;

ROUTE ROUTE774 = createNode("ROUTE");
ROUTE774.fromNode = "StandTimer";
ROUTE774.fromField = "fraction_changed";
ROUTE774.toNode = "Stand_r_acromioclavicular_RollInterpolator";
ROUTE774.toField = "set_fraction";
children[144] = ROUTE774;

ROUTE ROUTE775 = createNode("ROUTE");
ROUTE775.fromNode = "StandTimer";
ROUTE775.fromField = "fraction_changed";
ROUTE775.toNode = "Stand_r_metatarsal_PitchInterpolator";
ROUTE775.toField = "set_fraction";
children[145] = ROUTE775;

ROUTE ROUTE776 = createNode("ROUTE");
ROUTE776.fromNode = "StandTimer";
ROUTE776.fromField = "fraction_changed";
ROUTE776.toNode = "Stand_sacroiliac_YawInterpolator";
ROUTE776.toField = "set_fraction";
children[146] = ROUTE776;

ROUTE ROUTE777 = createNode("ROUTE");
ROUTE777.fromNode = "StandTimer";
ROUTE777.fromField = "fraction_changed";
ROUTE777.toNode = "Stand_vl5_YawInterpolator";
ROUTE777.toField = "set_fraction";
children[147] = ROUTE777;

ROUTE ROUTE778 = createNode("ROUTE");
ROUTE778.fromNode = "StandTimer";
ROUTE778.fromField = "fraction_changed";
ROUTE778.toNode = "Stand_vc6_YawInterpolator";
ROUTE778.toField = "set_fraction";
children[148] = ROUTE778;

ROUTE ROUTE779 = createNode("ROUTE");
ROUTE779.fromNode = "StandTimer";
ROUTE779.fromField = "fraction_changed";
ROUTE779.toNode = "Stand_l_thumb1_PitchInterpolator";
ROUTE779.toField = "set_fraction";
children[149] = ROUTE779;

ROUTE ROUTE780 = createNode("ROUTE");
ROUTE780.fromNode = "StandTimer";
ROUTE780.fromField = "fraction_changed";
ROUTE780.toNode = "Stand_r_thumb1_PitchInterpolator";
ROUTE780.toField = "set_fraction";
children[150] = ROUTE780;

ROUTE ROUTE781 = createNode("ROUTE");
ROUTE781.fromNode = "StandTimer";
ROUTE781.fromField = "fraction_changed";
ROUTE781.toNode = "Stand_r_index1_RollInterpolator";
ROUTE781.toField = "set_fraction";
children[151] = ROUTE781;

ROUTE ROUTE782 = createNode("ROUTE");
ROUTE782.fromNode = "StandTimer";
ROUTE782.fromField = "fraction_changed";
ROUTE782.toNode = "Stand_r_index2_RollInterpolator";
ROUTE782.toField = "set_fraction";
children[152] = ROUTE782;

ROUTE ROUTE783 = createNode("ROUTE");
ROUTE783.fromNode = "StandTimer";
ROUTE783.fromField = "fraction_changed";
ROUTE783.toNode = "Stand_r_index3_RollInterpolator";
ROUTE783.toField = "set_fraction";
children[153] = ROUTE783;

ROUTE ROUTE784 = createNode("ROUTE");
ROUTE784.fromNode = "Stand_r_ankle_RotationInterpolator";
ROUTE784.fromField = "value_changed";
ROUTE784.toNode = "boxman_r_ankle";
ROUTE784.toField = "set_rotation";
children[154] = ROUTE784;

ROUTE ROUTE785 = createNode("ROUTE");
ROUTE785.fromNode = "Stand_r_knee_RotationInterpolator";
ROUTE785.fromField = "value_changed";
ROUTE785.toNode = "boxman_r_knee";
ROUTE785.toField = "set_rotation";
children[155] = ROUTE785;

ROUTE ROUTE786 = createNode("ROUTE");
ROUTE786.fromNode = "Stand_r_hip_RotationInterpolator";
ROUTE786.fromField = "value_changed";
ROUTE786.toNode = "boxman_r_hip";
ROUTE786.toField = "set_rotation";
children[156] = ROUTE786;

ROUTE ROUTE787 = createNode("ROUTE");
ROUTE787.fromNode = "Stand_l_ankle_RotationInterpolator";
ROUTE787.fromField = "value_changed";
ROUTE787.toNode = "boxman_l_ankle";
ROUTE787.toField = "set_rotation";
children[157] = ROUTE787;

ROUTE ROUTE788 = createNode("ROUTE");
ROUTE788.fromNode = "Stand_l_knee_RotationInterpolator";
ROUTE788.fromField = "value_changed";
ROUTE788.toNode = "boxman_l_knee";
ROUTE788.toField = "set_rotation";
children[158] = ROUTE788;

ROUTE ROUTE789 = createNode("ROUTE");
ROUTE789.fromNode = "Stand_l_hip_RotationInterpolator";
ROUTE789.fromField = "value_changed";
ROUTE789.toNode = "boxman_l_hip";
ROUTE789.toField = "set_rotation";
children[159] = ROUTE789;

ROUTE ROUTE790 = createNode("ROUTE");
ROUTE790.fromNode = "Stand_r_wrist_RotationInterpolator";
ROUTE790.fromField = "value_changed";
ROUTE790.toNode = "boxman_r_wrist";
ROUTE790.toField = "set_rotation";
children[160] = ROUTE790;

ROUTE ROUTE791 = createNode("ROUTE");
ROUTE791.fromNode = "Stand_r_elbow_RotationInterpolator";
ROUTE791.fromField = "value_changed";
ROUTE791.toNode = "boxman_r_elbow";
ROUTE791.toField = "set_rotation";
children[161] = ROUTE791;

ROUTE ROUTE792 = createNode("ROUTE");
ROUTE792.fromNode = "Stand_r_shoulder_RotationInterpolator";
ROUTE792.fromField = "value_changed";
ROUTE792.toNode = "boxman_r_shoulder";
ROUTE792.toField = "set_rotation";
children[162] = ROUTE792;

ROUTE ROUTE793 = createNode("ROUTE");
ROUTE793.fromNode = "Stand_l_wrist_RotationInterpolator";
ROUTE793.fromField = "value_changed";
ROUTE793.toNode = "boxman_l_wrist";
ROUTE793.toField = "set_rotation";
children[163] = ROUTE793;

ROUTE ROUTE794 = createNode("ROUTE");
ROUTE794.fromNode = "Stand_l_elbow_RotationInterpolator";
ROUTE794.fromField = "value_changed";
ROUTE794.toNode = "boxman_l_elbow";
ROUTE794.toField = "set_rotation";
children[164] = ROUTE794;

ROUTE ROUTE795 = createNode("ROUTE");
ROUTE795.fromNode = "Stand_l_shoulder_RotationInterpolator";
ROUTE795.fromField = "value_changed";
ROUTE795.toNode = "boxman_l_shoulder";
ROUTE795.toField = "set_rotation";
children[165] = ROUTE795;

ROUTE ROUTE796 = createNode("ROUTE");
ROUTE796.fromNode = "Stand_head_RotationInterpolator";
ROUTE796.fromField = "value_changed";
ROUTE796.toNode = "boxman_skullbase";
ROUTE796.toField = "set_rotation";
children[166] = ROUTE796;

ROUTE ROUTE797 = createNode("ROUTE");
ROUTE797.fromNode = "Stand_whole_body_RotationInterpolator";
ROUTE797.fromField = "value_changed";
ROUTE797.toNode = "boxman_humanoid_root";
ROUTE797.toField = "set_rotation";
children[167] = ROUTE797;

ROUTE ROUTE798 = createNode("ROUTE");
ROUTE798.fromNode = "Stand_whole_body_TranslationInterpolator";
ROUTE798.fromField = "value_changed";
ROUTE798.toNode = "boxman_humanoid_root";
ROUTE798.toField = "set_translation";
children[168] = ROUTE798;

ROUTE ROUTE799 = createNode("ROUTE");
ROUTE799.fromNode = "Stand_vl5_YawInterpolator";
ROUTE799.fromField = "value_changed";
ROUTE799.toNode = "boxman_vl5";
ROUTE799.toField = "set_rotation";
children[169] = ROUTE799;

ROUTE ROUTE800 = createNode("ROUTE");
ROUTE800.fromNode = "PitchTimer";
ROUTE800.fromField = "fraction_changed";
ROUTE800.toNode = "Pitches_r_ankle_RotationInterpolator";
ROUTE800.toField = "set_fraction";
children[170] = ROUTE800;

ROUTE ROUTE801 = createNode("ROUTE");
ROUTE801.fromNode = "PitchTimer";
ROUTE801.fromField = "fraction_changed";
ROUTE801.toNode = "Pitches_r_knee_RotationInterpolator";
ROUTE801.toField = "set_fraction";
children[171] = ROUTE801;

ROUTE ROUTE802 = createNode("ROUTE");
ROUTE802.fromNode = "PitchTimer";
ROUTE802.fromField = "fraction_changed";
ROUTE802.toNode = "Pitches_r_hip_RotationInterpolator";
ROUTE802.toField = "set_fraction";
children[172] = ROUTE802;

ROUTE ROUTE803 = createNode("ROUTE");
ROUTE803.fromNode = "PitchTimer";
ROUTE803.fromField = "fraction_changed";
ROUTE803.toNode = "Pitches_l_ankle_RotationInterpolator";
ROUTE803.toField = "set_fraction";
children[173] = ROUTE803;

ROUTE ROUTE804 = createNode("ROUTE");
ROUTE804.fromNode = "PitchTimer";
ROUTE804.fromField = "fraction_changed";
ROUTE804.toNode = "Pitches_l_knee_RotationInterpolator";
ROUTE804.toField = "set_fraction";
children[174] = ROUTE804;

ROUTE ROUTE805 = createNode("ROUTE");
ROUTE805.fromNode = "PitchTimer";
ROUTE805.fromField = "fraction_changed";
ROUTE805.toNode = "Pitches_l_hip_RotationInterpolator";
ROUTE805.toField = "set_fraction";
children[175] = ROUTE805;

ROUTE ROUTE806 = createNode("ROUTE");
ROUTE806.fromNode = "PitchTimer";
ROUTE806.fromField = "fraction_changed";
ROUTE806.toNode = "Pitches_lower_body_RotationInterpolator";
ROUTE806.toField = "set_fraction";
children[176] = ROUTE806;

ROUTE ROUTE807 = createNode("ROUTE");
ROUTE807.fromNode = "PitchTimer";
ROUTE807.fromField = "fraction_changed";
ROUTE807.toNode = "Pitches_r_wrist_RotationInterpolator";
ROUTE807.toField = "set_fraction";
children[177] = ROUTE807;

ROUTE ROUTE808 = createNode("ROUTE");
ROUTE808.fromNode = "PitchTimer";
ROUTE808.fromField = "fraction_changed";
ROUTE808.toNode = "Pitches_r_elbow_RotationInterpolator";
ROUTE808.toField = "set_fraction";
children[178] = ROUTE808;

ROUTE ROUTE809 = createNode("ROUTE");
ROUTE809.fromNode = "PitchTimer";
ROUTE809.fromField = "fraction_changed";
ROUTE809.toNode = "Pitches_r_shoulder_RotationInterpolator";
ROUTE809.toField = "set_fraction";
children[179] = ROUTE809;

ROUTE ROUTE810 = createNode("ROUTE");
ROUTE810.fromNode = "PitchTimer";
ROUTE810.fromField = "fraction_changed";
ROUTE810.toNode = "Pitches_l_wrist_RotationInterpolator";
ROUTE810.toField = "set_fraction";
children[180] = ROUTE810;

ROUTE ROUTE811 = createNode("ROUTE");
ROUTE811.fromNode = "PitchTimer";
ROUTE811.fromField = "fraction_changed";
ROUTE811.toNode = "Pitches_l_elbow_RotationInterpolator";
ROUTE811.toField = "set_fraction";
children[181] = ROUTE811;

ROUTE ROUTE812 = createNode("ROUTE");
ROUTE812.fromNode = "PitchTimer";
ROUTE812.fromField = "fraction_changed";
ROUTE812.toNode = "Pitches_l_shoulder_RotationInterpolator";
ROUTE812.toField = "set_fraction";
children[182] = ROUTE812;

ROUTE ROUTE813 = createNode("ROUTE");
ROUTE813.fromNode = "PitchTimer";
ROUTE813.fromField = "fraction_changed";
ROUTE813.toNode = "Pitches_head_RotationInterpolator";
ROUTE813.toField = "set_fraction";
children[183] = ROUTE813;

ROUTE ROUTE814 = createNode("ROUTE");
ROUTE814.fromNode = "PitchTimer";
ROUTE814.fromField = "fraction_changed";
ROUTE814.toNode = "Pitches_neck_RotationInterpolator";
ROUTE814.toField = "set_fraction";
children[184] = ROUTE814;

ROUTE ROUTE815 = createNode("ROUTE");
ROUTE815.fromNode = "PitchTimer";
ROUTE815.fromField = "fraction_changed";
ROUTE815.toNode = "Pitches_upper_body_RotationInterpolator";
ROUTE815.toField = "set_fraction";
children[185] = ROUTE815;

ROUTE ROUTE816 = createNode("ROUTE");
ROUTE816.fromNode = "PitchTimer";
ROUTE816.fromField = "fraction_changed";
ROUTE816.toNode = "Pitches_whole_body_RotationInterpolator";
ROUTE816.toField = "set_fraction";
children[186] = ROUTE816;

ROUTE ROUTE817 = createNode("ROUTE");
ROUTE817.fromNode = "PitchTimer";
ROUTE817.fromField = "fraction_changed";
ROUTE817.toNode = "Pitches_whole_body_TranslationInterpolator";
ROUTE817.toField = "set_fraction";
children[187] = ROUTE817;

ROUTE ROUTE818 = createNode("ROUTE");
ROUTE818.fromNode = "PitchTimer";
ROUTE818.fromField = "fraction_changed";
ROUTE818.toNode = "Pitch_l_sternoclavicular_RollInterpolator";
ROUTE818.toField = "set_fraction";
children[188] = ROUTE818;

ROUTE ROUTE819 = createNode("ROUTE");
ROUTE819.fromNode = "PitchTimer";
ROUTE819.fromField = "fraction_changed";
ROUTE819.toNode = "Pitch_l_acromioclavicular_RollInterpolator";
ROUTE819.toField = "set_fraction";
children[189] = ROUTE819;

ROUTE ROUTE820 = createNode("ROUTE");
ROUTE820.fromNode = "PitchTimer";
ROUTE820.fromField = "fraction_changed";
ROUTE820.toNode = "Pitch_r_sternoclavicular_RollInterpolator";
ROUTE820.toField = "set_fraction";
children[190] = ROUTE820;

ROUTE ROUTE821 = createNode("ROUTE");
ROUTE821.fromNode = "PitchTimer";
ROUTE821.fromField = "fraction_changed";
ROUTE821.toNode = "Pitch_r_acromioclavicular_RollInterpolator";
ROUTE821.toField = "set_fraction";
children[191] = ROUTE821;

ROUTE ROUTE822 = createNode("ROUTE");
ROUTE822.fromNode = "PitchTimer";
ROUTE822.fromField = "fraction_changed";
ROUTE822.toNode = "Pitch_r_metatarsal_PitchInterpolator";
ROUTE822.toField = "set_fraction";
children[192] = ROUTE822;

ROUTE ROUTE823 = createNode("ROUTE");
ROUTE823.fromNode = "PitchTimer";
ROUTE823.fromField = "fraction_changed";
ROUTE823.toNode = "Pitch_sacroiliac_YawInterpolator";
ROUTE823.toField = "set_fraction";
children[193] = ROUTE823;

ROUTE ROUTE824 = createNode("ROUTE");
ROUTE824.fromNode = "PitchTimer";
ROUTE824.fromField = "fraction_changed";
ROUTE824.toNode = "Pitch_vl5_YawInterpolator";
ROUTE824.toField = "set_fraction";
children[194] = ROUTE824;

ROUTE ROUTE825 = createNode("ROUTE");
ROUTE825.fromNode = "PitchTimer";
ROUTE825.fromField = "fraction_changed";
ROUTE825.toNode = "Pitch_vc6_YawInterpolator";
ROUTE825.toField = "set_fraction";
children[195] = ROUTE825;

ROUTE ROUTE826 = createNode("ROUTE");
ROUTE826.fromNode = "PitchTimer";
ROUTE826.fromField = "fraction_changed";
ROUTE826.toNode = "Pitch_l_thumb1_PitchInterpolator";
ROUTE826.toField = "set_fraction";
children[196] = ROUTE826;

ROUTE ROUTE827 = createNode("ROUTE");
ROUTE827.fromNode = "PitchTimer";
ROUTE827.fromField = "fraction_changed";
ROUTE827.toNode = "Pitch_r_thumb1_PitchInterpolator";
ROUTE827.toField = "set_fraction";
children[197] = ROUTE827;

ROUTE ROUTE828 = createNode("ROUTE");
ROUTE828.fromNode = "Pitches_r_ankle_RotationInterpolator";
ROUTE828.fromField = "value_changed";
ROUTE828.toNode = "boxman_r_ankle";
ROUTE828.toField = "set_rotation";
children[198] = ROUTE828;

ROUTE ROUTE829 = createNode("ROUTE");
ROUTE829.fromNode = "Pitches_r_knee_RotationInterpolator";
ROUTE829.fromField = "value_changed";
ROUTE829.toNode = "boxman_r_knee";
ROUTE829.toField = "set_rotation";
children[199] = ROUTE829;

ROUTE ROUTE830 = createNode("ROUTE");
ROUTE830.fromNode = "Pitches_r_hip_RotationInterpolator";
ROUTE830.fromField = "value_changed";
ROUTE830.toNode = "boxman_r_hip";
ROUTE830.toField = "set_rotation";
children[200] = ROUTE830;

ROUTE ROUTE831 = createNode("ROUTE");
ROUTE831.fromNode = "Pitches_l_ankle_RotationInterpolator";
ROUTE831.fromField = "value_changed";
ROUTE831.toNode = "boxman_l_ankle";
ROUTE831.toField = "set_rotation";
children[201] = ROUTE831;

ROUTE ROUTE832 = createNode("ROUTE");
ROUTE832.fromNode = "Pitches_l_knee_RotationInterpolator";
ROUTE832.fromField = "value_changed";
ROUTE832.toNode = "boxman_l_knee";
ROUTE832.toField = "set_rotation";
children[202] = ROUTE832;

ROUTE ROUTE833 = createNode("ROUTE");
ROUTE833.fromNode = "Pitches_l_hip_RotationInterpolator";
ROUTE833.fromField = "value_changed";
ROUTE833.toNode = "boxman_l_hip";
ROUTE833.toField = "set_rotation";
children[203] = ROUTE833;

ROUTE ROUTE834 = createNode("ROUTE");
ROUTE834.fromNode = "Pitches_r_wrist_RotationInterpolator";
ROUTE834.fromField = "value_changed";
ROUTE834.toNode = "boxman_r_wrist";
ROUTE834.toField = "set_rotation";
children[204] = ROUTE834;

ROUTE ROUTE835 = createNode("ROUTE");
ROUTE835.fromNode = "Pitches_r_elbow_RotationInterpolator";
ROUTE835.fromField = "value_changed";
ROUTE835.toNode = "boxman_r_elbow";
ROUTE835.toField = "set_rotation";
children[205] = ROUTE835;

ROUTE ROUTE836 = createNode("ROUTE");
ROUTE836.fromNode = "Pitches_r_shoulder_RotationInterpolator";
ROUTE836.fromField = "value_changed";
ROUTE836.toNode = "boxman_r_shoulder";
ROUTE836.toField = "set_rotation";
children[206] = ROUTE836;

ROUTE ROUTE837 = createNode("ROUTE");
ROUTE837.fromNode = "Pitches_l_wrist_RotationInterpolator";
ROUTE837.fromField = "value_changed";
ROUTE837.toNode = "boxman_l_wrist";
ROUTE837.toField = "set_rotation";
children[207] = ROUTE837;

ROUTE ROUTE838 = createNode("ROUTE");
ROUTE838.fromNode = "Pitches_l_elbow_RotationInterpolator";
ROUTE838.fromField = "value_changed";
ROUTE838.toNode = "boxman_l_elbow";
ROUTE838.toField = "set_rotation";
children[208] = ROUTE838;

ROUTE ROUTE839 = createNode("ROUTE");
ROUTE839.fromNode = "Pitches_l_shoulder_RotationInterpolator";
ROUTE839.fromField = "value_changed";
ROUTE839.toNode = "boxman_l_shoulder";
ROUTE839.toField = "set_rotation";
children[209] = ROUTE839;

ROUTE ROUTE840 = createNode("ROUTE");
ROUTE840.fromNode = "Pitches_head_RotationInterpolator";
ROUTE840.fromField = "value_changed";
ROUTE840.toNode = "boxman_skullbase";
ROUTE840.toField = "set_rotation";
children[210] = ROUTE840;

ROUTE ROUTE841 = createNode("ROUTE");
ROUTE841.fromNode = "Pitches_whole_body_RotationInterpolator";
ROUTE841.fromField = "value_changed";
ROUTE841.toNode = "boxman_humanoid_root";
ROUTE841.toField = "set_rotation";
children[211] = ROUTE841;

ROUTE ROUTE842 = createNode("ROUTE");
ROUTE842.fromNode = "Pitches_whole_body_TranslationInterpolator";
ROUTE842.fromField = "value_changed";
ROUTE842.toNode = "boxman_humanoid_root";
ROUTE842.toField = "set_translation";
children[212] = ROUTE842;

ROUTE ROUTE843 = createNode("ROUTE");
ROUTE843.fromNode = "Pitch_vl5_YawInterpolator";
ROUTE843.fromField = "value_changed";
ROUTE843.toNode = "boxman_vl5";
ROUTE843.toField = "set_rotation";
children[213] = ROUTE843;

ROUTE ROUTE844 = createNode("ROUTE");
ROUTE844.fromNode = "YawTimer";
ROUTE844.fromField = "fraction_changed";
ROUTE844.toNode = "Yaws_r_ankle_RotationInterpolator";
ROUTE844.toField = "set_fraction";
children[214] = ROUTE844;

ROUTE ROUTE845 = createNode("ROUTE");
ROUTE845.fromNode = "YawTimer";
ROUTE845.fromField = "fraction_changed";
ROUTE845.toNode = "Yaws_r_knee_RotationInterpolator";
ROUTE845.toField = "set_fraction";
children[215] = ROUTE845;

ROUTE ROUTE846 = createNode("ROUTE");
ROUTE846.fromNode = "YawTimer";
ROUTE846.fromField = "fraction_changed";
ROUTE846.toNode = "Yaws_r_hip_RotationInterpolator";
ROUTE846.toField = "set_fraction";
children[216] = ROUTE846;

ROUTE ROUTE847 = createNode("ROUTE");
ROUTE847.fromNode = "YawTimer";
ROUTE847.fromField = "fraction_changed";
ROUTE847.toNode = "Yaws_l_ankle_RotationInterpolator";
ROUTE847.toField = "set_fraction";
children[217] = ROUTE847;

ROUTE ROUTE848 = createNode("ROUTE");
ROUTE848.fromNode = "YawTimer";
ROUTE848.fromField = "fraction_changed";
ROUTE848.toNode = "Yaws_l_knee_RotationInterpolator";
ROUTE848.toField = "set_fraction";
children[218] = ROUTE848;

ROUTE ROUTE849 = createNode("ROUTE");
ROUTE849.fromNode = "YawTimer";
ROUTE849.fromField = "fraction_changed";
ROUTE849.toNode = "Yaws_l_hip_RotationInterpolator";
ROUTE849.toField = "set_fraction";
children[219] = ROUTE849;

ROUTE ROUTE850 = createNode("ROUTE");
ROUTE850.fromNode = "YawTimer";
ROUTE850.fromField = "fraction_changed";
ROUTE850.toNode = "Yaws_lower_body_RotationInterpolator";
ROUTE850.toField = "set_fraction";
children[220] = ROUTE850;

ROUTE ROUTE851 = createNode("ROUTE");
ROUTE851.fromNode = "YawTimer";
ROUTE851.fromField = "fraction_changed";
ROUTE851.toNode = "Yaws_r_wrist_RotationInterpolator";
ROUTE851.toField = "set_fraction";
children[221] = ROUTE851;

ROUTE ROUTE852 = createNode("ROUTE");
ROUTE852.fromNode = "YawTimer";
ROUTE852.fromField = "fraction_changed";
ROUTE852.toNode = "Yaws_r_elbow_RotationInterpolator";
ROUTE852.toField = "set_fraction";
children[222] = ROUTE852;

ROUTE ROUTE853 = createNode("ROUTE");
ROUTE853.fromNode = "YawTimer";
ROUTE853.fromField = "fraction_changed";
ROUTE853.toNode = "Yaws_r_shoulder_RotationInterpolator";
ROUTE853.toField = "set_fraction";
children[223] = ROUTE853;

ROUTE ROUTE854 = createNode("ROUTE");
ROUTE854.fromNode = "YawTimer";
ROUTE854.fromField = "fraction_changed";
ROUTE854.toNode = "Yaws_l_wrist_RotationInterpolator";
ROUTE854.toField = "set_fraction";
children[224] = ROUTE854;

ROUTE ROUTE855 = createNode("ROUTE");
ROUTE855.fromNode = "YawTimer";
ROUTE855.fromField = "fraction_changed";
ROUTE855.toNode = "Yaws_l_elbow_RotationInterpolator";
ROUTE855.toField = "set_fraction";
children[225] = ROUTE855;

ROUTE ROUTE856 = createNode("ROUTE");
ROUTE856.fromNode = "YawTimer";
ROUTE856.fromField = "fraction_changed";
ROUTE856.toNode = "Yaws_l_shoulder_RotationInterpolator";
ROUTE856.toField = "set_fraction";
children[226] = ROUTE856;

ROUTE ROUTE857 = createNode("ROUTE");
ROUTE857.fromNode = "YawTimer";
ROUTE857.fromField = "fraction_changed";
ROUTE857.toNode = "Yaws_head_RotationInterpolator";
ROUTE857.toField = "set_fraction";
children[227] = ROUTE857;

ROUTE ROUTE858 = createNode("ROUTE");
ROUTE858.fromNode = "YawTimer";
ROUTE858.fromField = "fraction_changed";
ROUTE858.toNode = "Yaws_neck_RotationInterpolator";
ROUTE858.toField = "set_fraction";
children[228] = ROUTE858;

ROUTE ROUTE859 = createNode("ROUTE");
ROUTE859.fromNode = "YawTimer";
ROUTE859.fromField = "fraction_changed";
ROUTE859.toNode = "Yaws_upper_body_RotationInterpolator";
ROUTE859.toField = "set_fraction";
children[229] = ROUTE859;

ROUTE ROUTE860 = createNode("ROUTE");
ROUTE860.fromNode = "YawTimer";
ROUTE860.fromField = "fraction_changed";
ROUTE860.toNode = "Yaws_whole_body_RotationInterpolator";
ROUTE860.toField = "set_fraction";
children[230] = ROUTE860;

ROUTE ROUTE861 = createNode("ROUTE");
ROUTE861.fromNode = "YawTimer";
ROUTE861.fromField = "fraction_changed";
ROUTE861.toNode = "Yaws_whole_body_TranslationInterpolator";
ROUTE861.toField = "set_fraction";
children[231] = ROUTE861;

ROUTE ROUTE862 = createNode("ROUTE");
ROUTE862.fromNode = "YawTimer";
ROUTE862.fromField = "fraction_changed";
ROUTE862.toNode = "Yaw_l_sternoclavicular_RollInterpolator";
ROUTE862.toField = "set_fraction";
children[232] = ROUTE862;

ROUTE ROUTE863 = createNode("ROUTE");
ROUTE863.fromNode = "YawTimer";
ROUTE863.fromField = "fraction_changed";
ROUTE863.toNode = "Yaw_l_acromioclavicular_RollInterpolator";
ROUTE863.toField = "set_fraction";
children[233] = ROUTE863;

ROUTE ROUTE864 = createNode("ROUTE");
ROUTE864.fromNode = "YawTimer";
ROUTE864.fromField = "fraction_changed";
ROUTE864.toNode = "Yaw_r_sternoclavicular_RollInterpolator";
ROUTE864.toField = "set_fraction";
children[234] = ROUTE864;

ROUTE ROUTE865 = createNode("ROUTE");
ROUTE865.fromNode = "YawTimer";
ROUTE865.fromField = "fraction_changed";
ROUTE865.toNode = "Yaw_r_acromioclavicular_RollInterpolator";
ROUTE865.toField = "set_fraction";
children[235] = ROUTE865;

ROUTE ROUTE866 = createNode("ROUTE");
ROUTE866.fromNode = "YawTimer";
ROUTE866.fromField = "fraction_changed";
ROUTE866.toNode = "Yaw_r_metatarsal_PitchInterpolator";
ROUTE866.toField = "set_fraction";
children[236] = ROUTE866;

ROUTE ROUTE867 = createNode("ROUTE");
ROUTE867.fromNode = "YawTimer";
ROUTE867.fromField = "fraction_changed";
ROUTE867.toNode = "Yaw_sacroiliac_YawInterpolator";
ROUTE867.toField = "set_fraction";
children[237] = ROUTE867;

ROUTE ROUTE868 = createNode("ROUTE");
ROUTE868.fromNode = "YawTimer";
ROUTE868.fromField = "fraction_changed";
ROUTE868.toNode = "Yaw_vl5_YawInterpolator";
ROUTE868.toField = "set_fraction";
children[238] = ROUTE868;

ROUTE ROUTE869 = createNode("ROUTE");
ROUTE869.fromNode = "YawTimer";
ROUTE869.fromField = "fraction_changed";
ROUTE869.toNode = "Yaw_vc6_YawInterpolator";
ROUTE869.toField = "set_fraction";
children[239] = ROUTE869;

ROUTE ROUTE870 = createNode("ROUTE");
ROUTE870.fromNode = "YawTimer";
ROUTE870.fromField = "fraction_changed";
ROUTE870.toNode = "Yaw_l_thumb1_PitchInterpolator";
ROUTE870.toField = "set_fraction";
children[240] = ROUTE870;

ROUTE ROUTE871 = createNode("ROUTE");
ROUTE871.fromNode = "YawTimer";
ROUTE871.fromField = "fraction_changed";
ROUTE871.toNode = "Yaw_r_thumb1_PitchInterpolator";
ROUTE871.toField = "set_fraction";
children[241] = ROUTE871;

ROUTE ROUTE872 = createNode("ROUTE");
ROUTE872.fromNode = "Yaws_r_ankle_RotationInterpolator";
ROUTE872.fromField = "value_changed";
ROUTE872.toNode = "boxman_r_ankle";
ROUTE872.toField = "set_rotation";
children[242] = ROUTE872;

ROUTE ROUTE873 = createNode("ROUTE");
ROUTE873.fromNode = "Yaws_r_knee_RotationInterpolator";
ROUTE873.fromField = "value_changed";
ROUTE873.toNode = "boxman_r_knee";
ROUTE873.toField = "set_rotation";
children[243] = ROUTE873;

ROUTE ROUTE874 = createNode("ROUTE");
ROUTE874.fromNode = "Yaws_r_hip_RotationInterpolator";
ROUTE874.fromField = "value_changed";
ROUTE874.toNode = "boxman_r_hip";
ROUTE874.toField = "set_rotation";
children[244] = ROUTE874;

ROUTE ROUTE875 = createNode("ROUTE");
ROUTE875.fromNode = "Yaws_l_ankle_RotationInterpolator";
ROUTE875.fromField = "value_changed";
ROUTE875.toNode = "boxman_l_ankle";
ROUTE875.toField = "set_rotation";
children[245] = ROUTE875;

ROUTE ROUTE876 = createNode("ROUTE");
ROUTE876.fromNode = "Yaws_l_knee_RotationInterpolator";
ROUTE876.fromField = "value_changed";
ROUTE876.toNode = "boxman_l_knee";
ROUTE876.toField = "set_rotation";
children[246] = ROUTE876;

ROUTE ROUTE877 = createNode("ROUTE");
ROUTE877.fromNode = "Yaws_l_hip_RotationInterpolator";
ROUTE877.fromField = "value_changed";
ROUTE877.toNode = "boxman_l_hip";
ROUTE877.toField = "set_rotation";
children[247] = ROUTE877;

ROUTE ROUTE878 = createNode("ROUTE");
ROUTE878.fromNode = "Yaws_r_wrist_RotationInterpolator";
ROUTE878.fromField = "value_changed";
ROUTE878.toNode = "boxman_r_wrist";
ROUTE878.toField = "set_rotation";
children[248] = ROUTE878;

ROUTE ROUTE879 = createNode("ROUTE");
ROUTE879.fromNode = "Yaws_r_elbow_RotationInterpolator";
ROUTE879.fromField = "value_changed";
ROUTE879.toNode = "boxman_r_elbow";
ROUTE879.toField = "set_rotation";
children[249] = ROUTE879;

ROUTE ROUTE880 = createNode("ROUTE");
ROUTE880.fromNode = "Yaws_r_shoulder_RotationInterpolator";
ROUTE880.fromField = "value_changed";
ROUTE880.toNode = "boxman_r_shoulder";
ROUTE880.toField = "set_rotation";
children[250] = ROUTE880;

ROUTE ROUTE881 = createNode("ROUTE");
ROUTE881.fromNode = "Yaws_l_wrist_RotationInterpolator";
ROUTE881.fromField = "value_changed";
ROUTE881.toNode = "boxman_l_wrist";
ROUTE881.toField = "set_rotation";
children[251] = ROUTE881;

ROUTE ROUTE882 = createNode("ROUTE");
ROUTE882.fromNode = "Yaws_l_elbow_RotationInterpolator";
ROUTE882.fromField = "value_changed";
ROUTE882.toNode = "boxman_l_elbow";
ROUTE882.toField = "set_rotation";
children[252] = ROUTE882;

ROUTE ROUTE883 = createNode("ROUTE");
ROUTE883.fromNode = "Yaws_l_shoulder_RotationInterpolator";
ROUTE883.fromField = "value_changed";
ROUTE883.toNode = "boxman_l_shoulder";
ROUTE883.toField = "set_rotation";
children[253] = ROUTE883;

ROUTE ROUTE884 = createNode("ROUTE");
ROUTE884.fromNode = "Yaws_head_RotationInterpolator";
ROUTE884.fromField = "value_changed";
ROUTE884.toNode = "boxman_skullbase";
ROUTE884.toField = "set_rotation";
children[254] = ROUTE884;

ROUTE ROUTE885 = createNode("ROUTE");
ROUTE885.fromNode = "Yaws_whole_body_RotationInterpolator";
ROUTE885.fromField = "value_changed";
ROUTE885.toNode = "boxman_humanoid_root";
ROUTE885.toField = "set_rotation";
children[255] = ROUTE885;

ROUTE ROUTE886 = createNode("ROUTE");
ROUTE886.fromNode = "Yaws_whole_body_TranslationInterpolator";
ROUTE886.fromField = "value_changed";
ROUTE886.toNode = "boxman_humanoid_root";
ROUTE886.toField = "set_translation";
children[256] = ROUTE886;

ROUTE ROUTE887 = createNode("ROUTE");
ROUTE887.fromNode = "Yaw_vl5_YawInterpolator";
ROUTE887.fromField = "value_changed";
ROUTE887.toNode = "boxman_vl5";
ROUTE887.toField = "set_rotation";
children[257] = ROUTE887;

ROUTE ROUTE888 = createNode("ROUTE");
ROUTE888.fromNode = "RollTimer";
ROUTE888.fromField = "fraction_changed";
ROUTE888.toNode = "Rolls_r_ankle_RotationInterpolator";
ROUTE888.toField = "set_fraction";
children[258] = ROUTE888;

ROUTE ROUTE889 = createNode("ROUTE");
ROUTE889.fromNode = "RollTimer";
ROUTE889.fromField = "fraction_changed";
ROUTE889.toNode = "Rolls_r_knee_RotationInterpolator";
ROUTE889.toField = "set_fraction";
children[259] = ROUTE889;

ROUTE ROUTE890 = createNode("ROUTE");
ROUTE890.fromNode = "RollTimer";
ROUTE890.fromField = "fraction_changed";
ROUTE890.toNode = "Rolls_r_hip_RotationInterpolator";
ROUTE890.toField = "set_fraction";
children[260] = ROUTE890;

ROUTE ROUTE891 = createNode("ROUTE");
ROUTE891.fromNode = "RollTimer";
ROUTE891.fromField = "fraction_changed";
ROUTE891.toNode = "Rolls_l_ankle_RotationInterpolator";
ROUTE891.toField = "set_fraction";
children[261] = ROUTE891;

ROUTE ROUTE892 = createNode("ROUTE");
ROUTE892.fromNode = "RollTimer";
ROUTE892.fromField = "fraction_changed";
ROUTE892.toNode = "Rolls_l_knee_RotationInterpolator";
ROUTE892.toField = "set_fraction";
children[262] = ROUTE892;

ROUTE ROUTE893 = createNode("ROUTE");
ROUTE893.fromNode = "RollTimer";
ROUTE893.fromField = "fraction_changed";
ROUTE893.toNode = "Rolls_l_hip_RotationInterpolator";
ROUTE893.toField = "set_fraction";
children[263] = ROUTE893;

ROUTE ROUTE894 = createNode("ROUTE");
ROUTE894.fromNode = "RollTimer";
ROUTE894.fromField = "fraction_changed";
ROUTE894.toNode = "Rolls_lower_body_RotationInterpolator";
ROUTE894.toField = "set_fraction";
children[264] = ROUTE894;

ROUTE ROUTE895 = createNode("ROUTE");
ROUTE895.fromNode = "RollTimer";
ROUTE895.fromField = "fraction_changed";
ROUTE895.toNode = "Rolls_r_wrist_RotationInterpolator";
ROUTE895.toField = "set_fraction";
children[265] = ROUTE895;

ROUTE ROUTE896 = createNode("ROUTE");
ROUTE896.fromNode = "RollTimer";
ROUTE896.fromField = "fraction_changed";
ROUTE896.toNode = "Rolls_r_elbow_RotationInterpolator";
ROUTE896.toField = "set_fraction";
children[266] = ROUTE896;

ROUTE ROUTE897 = createNode("ROUTE");
ROUTE897.fromNode = "RollTimer";
ROUTE897.fromField = "fraction_changed";
ROUTE897.toNode = "Rolls_r_shoulder_RotationInterpolator";
ROUTE897.toField = "set_fraction";
children[267] = ROUTE897;

ROUTE ROUTE898 = createNode("ROUTE");
ROUTE898.fromNode = "RollTimer";
ROUTE898.fromField = "fraction_changed";
ROUTE898.toNode = "Rolls_l_wrist_RotationInterpolator";
ROUTE898.toField = "set_fraction";
children[268] = ROUTE898;

ROUTE ROUTE899 = createNode("ROUTE");
ROUTE899.fromNode = "RollTimer";
ROUTE899.fromField = "fraction_changed";
ROUTE899.toNode = "Rolls_l_elbow_RotationInterpolator";
ROUTE899.toField = "set_fraction";
children[269] = ROUTE899;

ROUTE ROUTE900 = createNode("ROUTE");
ROUTE900.fromNode = "RollTimer";
ROUTE900.fromField = "fraction_changed";
ROUTE900.toNode = "Rolls_l_shoulder_RotationInterpolator";
ROUTE900.toField = "set_fraction";
children[270] = ROUTE900;

ROUTE ROUTE901 = createNode("ROUTE");
ROUTE901.fromNode = "RollTimer";
ROUTE901.fromField = "fraction_changed";
ROUTE901.toNode = "Rolls_head_RotationInterpolator";
ROUTE901.toField = "set_fraction";
children[271] = ROUTE901;

ROUTE ROUTE902 = createNode("ROUTE");
ROUTE902.fromNode = "RollTimer";
ROUTE902.fromField = "fraction_changed";
ROUTE902.toNode = "Rolls_neck_RotationInterpolator";
ROUTE902.toField = "set_fraction";
children[272] = ROUTE902;

ROUTE ROUTE903 = createNode("ROUTE");
ROUTE903.fromNode = "RollTimer";
ROUTE903.fromField = "fraction_changed";
ROUTE903.toNode = "Rolls_upper_body_RotationInterpolator";
ROUTE903.toField = "set_fraction";
children[273] = ROUTE903;

ROUTE ROUTE904 = createNode("ROUTE");
ROUTE904.fromNode = "RollTimer";
ROUTE904.fromField = "fraction_changed";
ROUTE904.toNode = "Rolls_whole_body_RotationInterpolator";
ROUTE904.toField = "set_fraction";
children[274] = ROUTE904;

ROUTE ROUTE905 = createNode("ROUTE");
ROUTE905.fromNode = "RollTimer";
ROUTE905.fromField = "fraction_changed";
ROUTE905.toNode = "Rolls_whole_body_TranslationInterpolator";
ROUTE905.toField = "set_fraction";
children[275] = ROUTE905;

ROUTE ROUTE906 = createNode("ROUTE");
ROUTE906.fromNode = "RollTimer";
ROUTE906.fromField = "fraction_changed";
ROUTE906.toNode = "Roll_l_sternoclavicular_RollInterpolator";
ROUTE906.toField = "set_fraction";
children[276] = ROUTE906;

ROUTE ROUTE907 = createNode("ROUTE");
ROUTE907.fromNode = "RollTimer";
ROUTE907.fromField = "fraction_changed";
ROUTE907.toNode = "Roll_l_acromioclavicular_RollInterpolator";
ROUTE907.toField = "set_fraction";
children[277] = ROUTE907;

ROUTE ROUTE908 = createNode("ROUTE");
ROUTE908.fromNode = "RollTimer";
ROUTE908.fromField = "fraction_changed";
ROUTE908.toNode = "Roll_r_sternoclavicular_RollInterpolator";
ROUTE908.toField = "set_fraction";
children[278] = ROUTE908;

ROUTE ROUTE909 = createNode("ROUTE");
ROUTE909.fromNode = "RollTimer";
ROUTE909.fromField = "fraction_changed";
ROUTE909.toNode = "Roll_r_acromioclavicular_RollInterpolator";
ROUTE909.toField = "set_fraction";
children[279] = ROUTE909;

ROUTE ROUTE910 = createNode("ROUTE");
ROUTE910.fromNode = "RollTimer";
ROUTE910.fromField = "fraction_changed";
ROUTE910.toNode = "Roll_r_metatarsal_PitchInterpolator";
ROUTE910.toField = "set_fraction";
children[280] = ROUTE910;

ROUTE ROUTE911 = createNode("ROUTE");
ROUTE911.fromNode = "RollTimer";
ROUTE911.fromField = "fraction_changed";
ROUTE911.toNode = "Roll_sacroiliac_YawInterpolator";
ROUTE911.toField = "set_fraction";
children[281] = ROUTE911;

ROUTE ROUTE912 = createNode("ROUTE");
ROUTE912.fromNode = "RollTimer";
ROUTE912.fromField = "fraction_changed";
ROUTE912.toNode = "Roll_vl5_YawInterpolator";
ROUTE912.toField = "set_fraction";
children[282] = ROUTE912;

ROUTE ROUTE913 = createNode("ROUTE");
ROUTE913.fromNode = "RollTimer";
ROUTE913.fromField = "fraction_changed";
ROUTE913.toNode = "Roll_vc6_YawInterpolator";
ROUTE913.toField = "set_fraction";
children[283] = ROUTE913;

ROUTE ROUTE914 = createNode("ROUTE");
ROUTE914.fromNode = "RollTimer";
ROUTE914.fromField = "fraction_changed";
ROUTE914.toNode = "Roll_l_thumb1_PitchInterpolator";
ROUTE914.toField = "set_fraction";
children[284] = ROUTE914;

ROUTE ROUTE915 = createNode("ROUTE");
ROUTE915.fromNode = "RollTimer";
ROUTE915.fromField = "fraction_changed";
ROUTE915.toNode = "Roll_r_thumb1_PitchInterpolator";
ROUTE915.toField = "set_fraction";
children[285] = ROUTE915;

ROUTE ROUTE916 = createNode("ROUTE");
ROUTE916.fromNode = "Rolls_r_ankle_RotationInterpolator";
ROUTE916.fromField = "value_changed";
ROUTE916.toNode = "boxman_r_ankle";
ROUTE916.toField = "set_rotation";
children[286] = ROUTE916;

ROUTE ROUTE917 = createNode("ROUTE");
ROUTE917.fromNode = "Rolls_r_knee_RotationInterpolator";
ROUTE917.fromField = "value_changed";
ROUTE917.toNode = "boxman_r_knee";
ROUTE917.toField = "set_rotation";
children[287] = ROUTE917;

ROUTE ROUTE918 = createNode("ROUTE");
ROUTE918.fromNode = "Rolls_r_hip_RotationInterpolator";
ROUTE918.fromField = "value_changed";
ROUTE918.toNode = "boxman_r_hip";
ROUTE918.toField = "set_rotation";
children[288] = ROUTE918;

ROUTE ROUTE919 = createNode("ROUTE");
ROUTE919.fromNode = "Rolls_l_ankle_RotationInterpolator";
ROUTE919.fromField = "value_changed";
ROUTE919.toNode = "boxman_l_ankle";
ROUTE919.toField = "set_rotation";
children[289] = ROUTE919;

ROUTE ROUTE920 = createNode("ROUTE");
ROUTE920.fromNode = "Rolls_l_knee_RotationInterpolator";
ROUTE920.fromField = "value_changed";
ROUTE920.toNode = "boxman_l_knee";
ROUTE920.toField = "set_rotation";
children[290] = ROUTE920;

ROUTE ROUTE921 = createNode("ROUTE");
ROUTE921.fromNode = "Rolls_l_hip_RotationInterpolator";
ROUTE921.fromField = "value_changed";
ROUTE921.toNode = "boxman_l_hip";
ROUTE921.toField = "set_rotation";
children[291] = ROUTE921;

ROUTE ROUTE922 = createNode("ROUTE");
ROUTE922.fromNode = "Rolls_r_wrist_RotationInterpolator";
ROUTE922.fromField = "value_changed";
ROUTE922.toNode = "boxman_r_wrist";
ROUTE922.toField = "set_rotation";
children[292] = ROUTE922;

ROUTE ROUTE923 = createNode("ROUTE");
ROUTE923.fromNode = "Rolls_r_elbow_RotationInterpolator";
ROUTE923.fromField = "value_changed";
ROUTE923.toNode = "boxman_r_elbow";
ROUTE923.toField = "set_rotation";
children[293] = ROUTE923;

ROUTE ROUTE924 = createNode("ROUTE");
ROUTE924.fromNode = "Rolls_r_shoulder_RotationInterpolator";
ROUTE924.fromField = "value_changed";
ROUTE924.toNode = "boxman_r_shoulder";
ROUTE924.toField = "set_rotation";
children[294] = ROUTE924;

ROUTE ROUTE925 = createNode("ROUTE");
ROUTE925.fromNode = "Rolls_l_wrist_RotationInterpolator";
ROUTE925.fromField = "value_changed";
ROUTE925.toNode = "boxman_l_wrist";
ROUTE925.toField = "set_rotation";
children[295] = ROUTE925;

ROUTE ROUTE926 = createNode("ROUTE");
ROUTE926.fromNode = "Rolls_l_elbow_RotationInterpolator";
ROUTE926.fromField = "value_changed";
ROUTE926.toNode = "boxman_l_elbow";
ROUTE926.toField = "set_rotation";
children[296] = ROUTE926;

ROUTE ROUTE927 = createNode("ROUTE");
ROUTE927.fromNode = "Rolls_l_shoulder_RotationInterpolator";
ROUTE927.fromField = "value_changed";
ROUTE927.toNode = "boxman_l_shoulder";
ROUTE927.toField = "set_rotation";
children[297] = ROUTE927;

ROUTE ROUTE928 = createNode("ROUTE");
ROUTE928.fromNode = "Rolls_head_RotationInterpolator";
ROUTE928.fromField = "value_changed";
ROUTE928.toNode = "boxman_skullbase";
ROUTE928.toField = "set_rotation";
children[298] = ROUTE928;

ROUTE ROUTE929 = createNode("ROUTE");
ROUTE929.fromNode = "Rolls_whole_body_RotationInterpolator";
ROUTE929.fromField = "value_changed";
ROUTE929.toNode = "boxman_humanoid_root";
ROUTE929.toField = "set_rotation";
children[299] = ROUTE929;

ROUTE ROUTE930 = createNode("ROUTE");
ROUTE930.fromNode = "Rolls_whole_body_TranslationInterpolator";
ROUTE930.fromField = "value_changed";
ROUTE930.toNode = "boxman_humanoid_root";
ROUTE930.toField = "set_translation";
children[300] = ROUTE930;

ROUTE ROUTE931 = createNode("ROUTE");
ROUTE931.fromNode = "Roll_vl5_YawInterpolator";
ROUTE931.fromField = "value_changed";
ROUTE931.toNode = "boxman_vl5";
ROUTE931.toField = "set_rotation";
children[301] = ROUTE931;

ROUTE ROUTE932 = createNode("ROUTE");
ROUTE932.fromNode = "WalkTimer";
ROUTE932.fromField = "fraction_changed";
ROUTE932.toNode = "Walk_r_ankle_RotationInterpolator";
ROUTE932.toField = "set_fraction";
children[302] = ROUTE932;

ROUTE ROUTE933 = createNode("ROUTE");
ROUTE933.fromNode = "WalkTimer";
ROUTE933.fromField = "fraction_changed";
ROUTE933.toNode = "Walk_r_knee_RotationInterpolator";
ROUTE933.toField = "set_fraction";
children[303] = ROUTE933;

ROUTE ROUTE934 = createNode("ROUTE");
ROUTE934.fromNode = "WalkTimer";
ROUTE934.fromField = "fraction_changed";
ROUTE934.toNode = "Walk_r_hip_RotationInterpolator";
ROUTE934.toField = "set_fraction";
children[304] = ROUTE934;

ROUTE ROUTE935 = createNode("ROUTE");
ROUTE935.fromNode = "WalkTimer";
ROUTE935.fromField = "fraction_changed";
ROUTE935.toNode = "Walk_l_ankle_RotationInterpolator";
ROUTE935.toField = "set_fraction";
children[305] = ROUTE935;

ROUTE ROUTE936 = createNode("ROUTE");
ROUTE936.fromNode = "WalkTimer";
ROUTE936.fromField = "fraction_changed";
ROUTE936.toNode = "Walk_l_knee_RotationInterpolator";
ROUTE936.toField = "set_fraction";
children[306] = ROUTE936;

ROUTE ROUTE937 = createNode("ROUTE");
ROUTE937.fromNode = "WalkTimer";
ROUTE937.fromField = "fraction_changed";
ROUTE937.toNode = "Walk_l_hip_RotationInterpolator";
ROUTE937.toField = "set_fraction";
children[307] = ROUTE937;

ROUTE ROUTE938 = createNode("ROUTE");
ROUTE938.fromNode = "WalkTimer";
ROUTE938.fromField = "fraction_changed";
ROUTE938.toNode = "Walk_lower_body_RotationInterpolator";
ROUTE938.toField = "set_fraction";
children[308] = ROUTE938;

ROUTE ROUTE939 = createNode("ROUTE");
ROUTE939.fromNode = "WalkTimer";
ROUTE939.fromField = "fraction_changed";
ROUTE939.toNode = "Walk_r_wrist_RotationInterpolator";
ROUTE939.toField = "set_fraction";
children[309] = ROUTE939;

ROUTE ROUTE940 = createNode("ROUTE");
ROUTE940.fromNode = "WalkTimer";
ROUTE940.fromField = "fraction_changed";
ROUTE940.toNode = "Walk_r_elbow_RotationInterpolator";
ROUTE940.toField = "set_fraction";
children[310] = ROUTE940;

ROUTE ROUTE941 = createNode("ROUTE");
ROUTE941.fromNode = "WalkTimer";
ROUTE941.fromField = "fraction_changed";
ROUTE941.toNode = "Walk_r_shoulder_RotationInterpolator";
ROUTE941.toField = "set_fraction";
children[311] = ROUTE941;

ROUTE ROUTE942 = createNode("ROUTE");
ROUTE942.fromNode = "WalkTimer";
ROUTE942.fromField = "fraction_changed";
ROUTE942.toNode = "Walk_l_wrist_RotationInterpolator";
ROUTE942.toField = "set_fraction";
children[312] = ROUTE942;

ROUTE ROUTE943 = createNode("ROUTE");
ROUTE943.fromNode = "WalkTimer";
ROUTE943.fromField = "fraction_changed";
ROUTE943.toNode = "Walk_l_elbow_RotationInterpolator";
ROUTE943.toField = "set_fraction";
children[313] = ROUTE943;

ROUTE ROUTE944 = createNode("ROUTE");
ROUTE944.fromNode = "WalkTimer";
ROUTE944.fromField = "fraction_changed";
ROUTE944.toNode = "Walk_l_shoulder_RotationInterpolator";
ROUTE944.toField = "set_fraction";
children[314] = ROUTE944;

ROUTE ROUTE945 = createNode("ROUTE");
ROUTE945.fromNode = "WalkTimer";
ROUTE945.fromField = "fraction_changed";
ROUTE945.toNode = "Walk_head_RotationInterpolator";
ROUTE945.toField = "set_fraction";
children[315] = ROUTE945;

ROUTE ROUTE946 = createNode("ROUTE");
ROUTE946.fromNode = "WalkTimer";
ROUTE946.fromField = "fraction_changed";
ROUTE946.toNode = "Walk_neck_RotationInterpolator";
ROUTE946.toField = "set_fraction";
children[316] = ROUTE946;

ROUTE ROUTE947 = createNode("ROUTE");
ROUTE947.fromNode = "WalkTimer";
ROUTE947.fromField = "fraction_changed";
ROUTE947.toNode = "Walk_upper_body_RotationInterpolator";
ROUTE947.toField = "set_fraction";
children[317] = ROUTE947;

ROUTE ROUTE948 = createNode("ROUTE");
ROUTE948.fromNode = "WalkTimer";
ROUTE948.fromField = "fraction_changed";
ROUTE948.toNode = "Walk_whole_body_RotationInterpolator";
ROUTE948.toField = "set_fraction";
children[318] = ROUTE948;

ROUTE ROUTE949 = createNode("ROUTE");
ROUTE949.fromNode = "WalkTimer";
ROUTE949.fromField = "fraction_changed";
ROUTE949.toNode = "Walk_whole_body_TranslationInterpolator";
ROUTE949.toField = "set_fraction";
children[319] = ROUTE949;

ROUTE ROUTE950 = createNode("ROUTE");
ROUTE950.fromNode = "WalkTimer";
ROUTE950.fromField = "fraction_changed";
ROUTE950.toNode = "Walk_l_sternoclavicular_RollInterpolator";
ROUTE950.toField = "set_fraction";
children[320] = ROUTE950;

ROUTE ROUTE951 = createNode("ROUTE");
ROUTE951.fromNode = "WalkTimer";
ROUTE951.fromField = "fraction_changed";
ROUTE951.toNode = "Walk_l_acromioclavicular_RollInterpolator";
ROUTE951.toField = "set_fraction";
children[321] = ROUTE951;

ROUTE ROUTE952 = createNode("ROUTE");
ROUTE952.fromNode = "WalkTimer";
ROUTE952.fromField = "fraction_changed";
ROUTE952.toNode = "Walk_r_sternoclavicular_RollInterpolator";
ROUTE952.toField = "set_fraction";
children[322] = ROUTE952;

ROUTE ROUTE953 = createNode("ROUTE");
ROUTE953.fromNode = "WalkTimer";
ROUTE953.fromField = "fraction_changed";
ROUTE953.toNode = "Walk_r_acromioclavicular_RollInterpolator";
ROUTE953.toField = "set_fraction";
children[323] = ROUTE953;

ROUTE ROUTE954 = createNode("ROUTE");
ROUTE954.fromNode = "WalkTimer";
ROUTE954.fromField = "fraction_changed";
ROUTE954.toNode = "Walk_r_metatarsal_PitchInterpolator";
ROUTE954.toField = "set_fraction";
children[324] = ROUTE954;

ROUTE ROUTE955 = createNode("ROUTE");
ROUTE955.fromNode = "WalkTimer";
ROUTE955.fromField = "fraction_changed";
ROUTE955.toNode = "Walk_sacroiliac_YawInterpolator";
ROUTE955.toField = "set_fraction";
children[325] = ROUTE955;

ROUTE ROUTE956 = createNode("ROUTE");
ROUTE956.fromNode = "WalkTimer";
ROUTE956.fromField = "fraction_changed";
ROUTE956.toNode = "Walk_vl5_YawInterpolator";
ROUTE956.toField = "set_fraction";
children[326] = ROUTE956;

ROUTE ROUTE957 = createNode("ROUTE");
ROUTE957.fromNode = "WalkTimer";
ROUTE957.fromField = "fraction_changed";
ROUTE957.toNode = "Walk_vc6_YawInterpolator";
ROUTE957.toField = "set_fraction";
children[327] = ROUTE957;

ROUTE ROUTE958 = createNode("ROUTE");
ROUTE958.fromNode = "WalkTimer";
ROUTE958.fromField = "fraction_changed";
ROUTE958.toNode = "Walk_l_thumb1_PitchInterpolator";
ROUTE958.toField = "set_fraction";
children[328] = ROUTE958;

ROUTE ROUTE959 = createNode("ROUTE");
ROUTE959.fromNode = "WalkTimer";
ROUTE959.fromField = "fraction_changed";
ROUTE959.toNode = "Walk_r_thumb1_PitchInterpolator";
ROUTE959.toField = "set_fraction";
children[329] = ROUTE959;

ROUTE ROUTE960 = createNode("ROUTE");
ROUTE960.fromNode = "Walk_r_ankle_RotationInterpolator";
ROUTE960.fromField = "value_changed";
ROUTE960.toNode = "boxman_r_ankle";
ROUTE960.toField = "set_rotation";
children[330] = ROUTE960;

ROUTE ROUTE961 = createNode("ROUTE");
ROUTE961.fromNode = "Walk_r_knee_RotationInterpolator";
ROUTE961.fromField = "value_changed";
ROUTE961.toNode = "boxman_r_knee";
ROUTE961.toField = "set_rotation";
children[331] = ROUTE961;

ROUTE ROUTE962 = createNode("ROUTE");
ROUTE962.fromNode = "Walk_r_hip_RotationInterpolator";
ROUTE962.fromField = "value_changed";
ROUTE962.toNode = "boxman_r_hip";
ROUTE962.toField = "set_rotation";
children[332] = ROUTE962;

ROUTE ROUTE963 = createNode("ROUTE");
ROUTE963.fromNode = "Walk_l_ankle_RotationInterpolator";
ROUTE963.fromField = "value_changed";
ROUTE963.toNode = "boxman_l_ankle";
ROUTE963.toField = "set_rotation";
children[333] = ROUTE963;

ROUTE ROUTE964 = createNode("ROUTE");
ROUTE964.fromNode = "Walk_l_knee_RotationInterpolator";
ROUTE964.fromField = "value_changed";
ROUTE964.toNode = "boxman_l_knee";
ROUTE964.toField = "set_rotation";
children[334] = ROUTE964;

ROUTE ROUTE965 = createNode("ROUTE");
ROUTE965.fromNode = "Walk_l_hip_RotationInterpolator";
ROUTE965.fromField = "value_changed";
ROUTE965.toNode = "boxman_l_hip";
ROUTE965.toField = "set_rotation";
children[335] = ROUTE965;

ROUTE ROUTE966 = createNode("ROUTE");
ROUTE966.fromNode = "Walk_r_wrist_RotationInterpolator";
ROUTE966.fromField = "value_changed";
ROUTE966.toNode = "boxman_r_wrist";
ROUTE966.toField = "set_rotation";
children[336] = ROUTE966;

ROUTE ROUTE967 = createNode("ROUTE");
ROUTE967.fromNode = "Walk_r_elbow_RotationInterpolator";
ROUTE967.fromField = "value_changed";
ROUTE967.toNode = "boxman_r_elbow";
ROUTE967.toField = "set_rotation";
children[337] = ROUTE967;

ROUTE ROUTE968 = createNode("ROUTE");
ROUTE968.fromNode = "Walk_r_shoulder_RotationInterpolator";
ROUTE968.fromField = "value_changed";
ROUTE968.toNode = "boxman_r_shoulder";
ROUTE968.toField = "set_rotation";
children[338] = ROUTE968;

ROUTE ROUTE969 = createNode("ROUTE");
ROUTE969.fromNode = "Walk_l_wrist_RotationInterpolator";
ROUTE969.fromField = "value_changed";
ROUTE969.toNode = "boxman_l_wrist";
ROUTE969.toField = "set_rotation";
children[339] = ROUTE969;

ROUTE ROUTE970 = createNode("ROUTE");
ROUTE970.fromNode = "Walk_l_elbow_RotationInterpolator";
ROUTE970.fromField = "value_changed";
ROUTE970.toNode = "boxman_l_elbow";
ROUTE970.toField = "set_rotation";
children[340] = ROUTE970;

ROUTE ROUTE971 = createNode("ROUTE");
ROUTE971.fromNode = "Walk_l_shoulder_RotationInterpolator";
ROUTE971.fromField = "value_changed";
ROUTE971.toNode = "boxman_l_shoulder";
ROUTE971.toField = "set_rotation";
children[341] = ROUTE971;

ROUTE ROUTE972 = createNode("ROUTE");
ROUTE972.fromNode = "Walk_head_RotationInterpolator";
ROUTE972.fromField = "value_changed";
ROUTE972.toNode = "boxman_skullbase";
ROUTE972.toField = "set_rotation";
children[342] = ROUTE972;

ROUTE ROUTE973 = createNode("ROUTE");
ROUTE973.fromNode = "Walk_whole_body_RotationInterpolator";
ROUTE973.fromField = "value_changed";
ROUTE973.toNode = "boxman_humanoid_root";
ROUTE973.toField = "set_rotation";
children[343] = ROUTE973;

ROUTE ROUTE974 = createNode("ROUTE");
ROUTE974.fromNode = "Walk_whole_body_TranslationInterpolator";
ROUTE974.fromField = "value_changed";
ROUTE974.toNode = "boxman_humanoid_root";
ROUTE974.toField = "set_translation";
children[344] = ROUTE974;

ROUTE ROUTE975 = createNode("ROUTE");
ROUTE975.fromNode = "Walk_vl5_YawInterpolator";
ROUTE975.fromField = "value_changed";
ROUTE975.toNode = "boxman_vl5";
ROUTE975.toField = "set_rotation";
children[345] = ROUTE975;

ROUTE ROUTE976 = createNode("ROUTE");
ROUTE976.fromNode = "RunTimer";
ROUTE976.fromField = "fraction_changed";
ROUTE976.toNode = "Run_r_ankle_RotationInterpolator_Run";
ROUTE976.toField = "set_fraction";
children[346] = ROUTE976;

ROUTE ROUTE977 = createNode("ROUTE");
ROUTE977.fromNode = "RunTimer";
ROUTE977.fromField = "fraction_changed";
ROUTE977.toNode = "Run_r_knee_RotationInterpolator_Run";
ROUTE977.toField = "set_fraction";
children[347] = ROUTE977;

ROUTE ROUTE978 = createNode("ROUTE");
ROUTE978.fromNode = "RunTimer";
ROUTE978.fromField = "fraction_changed";
ROUTE978.toNode = "Run_r_hip_RotationInterpolator_Run";
ROUTE978.toField = "set_fraction";
children[348] = ROUTE978;

ROUTE ROUTE979 = createNode("ROUTE");
ROUTE979.fromNode = "RunTimer";
ROUTE979.fromField = "fraction_changed";
ROUTE979.toNode = "Run_l_ankle_RotationInterpolator_Run";
ROUTE979.toField = "set_fraction";
children[349] = ROUTE979;

ROUTE ROUTE980 = createNode("ROUTE");
ROUTE980.fromNode = "RunTimer";
ROUTE980.fromField = "fraction_changed";
ROUTE980.toNode = "Run_l_knee_RotationInterpolator_Run";
ROUTE980.toField = "set_fraction";
children[350] = ROUTE980;

ROUTE ROUTE981 = createNode("ROUTE");
ROUTE981.fromNode = "RunTimer";
ROUTE981.fromField = "fraction_changed";
ROUTE981.toNode = "Run_l_hip_RotationInterpolator_Run";
ROUTE981.toField = "set_fraction";
children[351] = ROUTE981;

ROUTE ROUTE982 = createNode("ROUTE");
ROUTE982.fromNode = "RunTimer";
ROUTE982.fromField = "fraction_changed";
ROUTE982.toNode = "Run_lower_body_RotationInterpolator_Run";
ROUTE982.toField = "set_fraction";
children[352] = ROUTE982;

ROUTE ROUTE983 = createNode("ROUTE");
ROUTE983.fromNode = "RunTimer";
ROUTE983.fromField = "fraction_changed";
ROUTE983.toNode = "Run_r_wrist_RotationInterpolator_Run";
ROUTE983.toField = "set_fraction";
children[353] = ROUTE983;

ROUTE ROUTE984 = createNode("ROUTE");
ROUTE984.fromNode = "RunTimer";
ROUTE984.fromField = "fraction_changed";
ROUTE984.toNode = "Run_r_elbow_RotationInterpolator_Run";
ROUTE984.toField = "set_fraction";
children[354] = ROUTE984;

ROUTE ROUTE985 = createNode("ROUTE");
ROUTE985.fromNode = "RunTimer";
ROUTE985.fromField = "fraction_changed";
ROUTE985.toNode = "Run_r_shoulder_RotationInterpolator_Run";
ROUTE985.toField = "set_fraction";
children[355] = ROUTE985;

ROUTE ROUTE986 = createNode("ROUTE");
ROUTE986.fromNode = "RunTimer";
ROUTE986.fromField = "fraction_changed";
ROUTE986.toNode = "Run_l_wrist_RotationInterpolator_Run";
ROUTE986.toField = "set_fraction";
children[356] = ROUTE986;

ROUTE ROUTE987 = createNode("ROUTE");
ROUTE987.fromNode = "RunTimer";
ROUTE987.fromField = "fraction_changed";
ROUTE987.toNode = "Run_l_elbow_RotationInterpolator_Run";
ROUTE987.toField = "set_fraction";
children[357] = ROUTE987;

ROUTE ROUTE988 = createNode("ROUTE");
ROUTE988.fromNode = "RunTimer";
ROUTE988.fromField = "fraction_changed";
ROUTE988.toNode = "Run_l_shoulder_RotationInterpolator_Run";
ROUTE988.toField = "set_fraction";
children[358] = ROUTE988;

ROUTE ROUTE989 = createNode("ROUTE");
ROUTE989.fromNode = "RunTimer";
ROUTE989.fromField = "fraction_changed";
ROUTE989.toNode = "Run_head_RotationInterpolator_Run";
ROUTE989.toField = "set_fraction";
children[359] = ROUTE989;

ROUTE ROUTE990 = createNode("ROUTE");
ROUTE990.fromNode = "RunTimer";
ROUTE990.fromField = "fraction_changed";
ROUTE990.toNode = "Run_neck_RotationInterpolator_Run";
ROUTE990.toField = "set_fraction";
children[360] = ROUTE990;

ROUTE ROUTE991 = createNode("ROUTE");
ROUTE991.fromNode = "RunTimer";
ROUTE991.fromField = "fraction_changed";
ROUTE991.toNode = "Run_upper_body_RotationInterpolator_Run";
ROUTE991.toField = "set_fraction";
children[361] = ROUTE991;

ROUTE ROUTE992 = createNode("ROUTE");
ROUTE992.fromNode = "RunTimer";
ROUTE992.fromField = "fraction_changed";
ROUTE992.toNode = "Run_whole_body_RotationInterpolator_Run";
ROUTE992.toField = "set_fraction";
children[362] = ROUTE992;

ROUTE ROUTE993 = createNode("ROUTE");
ROUTE993.fromNode = "RunTimer";
ROUTE993.fromField = "fraction_changed";
ROUTE993.toNode = "Run_whole_body_TranslationInterpolator_Run";
ROUTE993.toField = "set_fraction";
children[363] = ROUTE993;

ROUTE ROUTE994 = createNode("ROUTE");
ROUTE994.fromNode = "RunTimer";
ROUTE994.fromField = "fraction_changed";
ROUTE994.toNode = "Run_l_sternoclavicular_RollInterpolator";
ROUTE994.toField = "set_fraction";
children[364] = ROUTE994;

ROUTE ROUTE995 = createNode("ROUTE");
ROUTE995.fromNode = "RunTimer";
ROUTE995.fromField = "fraction_changed";
ROUTE995.toNode = "Run_l_acromioclavicular_RollInterpolator";
ROUTE995.toField = "set_fraction";
children[365] = ROUTE995;

ROUTE ROUTE996 = createNode("ROUTE");
ROUTE996.fromNode = "RunTimer";
ROUTE996.fromField = "fraction_changed";
ROUTE996.toNode = "Run_r_sternoclavicular_RollInterpolator";
ROUTE996.toField = "set_fraction";
children[366] = ROUTE996;

ROUTE ROUTE997 = createNode("ROUTE");
ROUTE997.fromNode = "RunTimer";
ROUTE997.fromField = "fraction_changed";
ROUTE997.toNode = "Run_r_acromioclavicular_RollInterpolator";
ROUTE997.toField = "set_fraction";
children[367] = ROUTE997;

ROUTE ROUTE998 = createNode("ROUTE");
ROUTE998.fromNode = "RunTimer";
ROUTE998.fromField = "fraction_changed";
ROUTE998.toNode = "Run_r_metatarsal_PitchInterpolator";
ROUTE998.toField = "set_fraction";
children[368] = ROUTE998;

ROUTE ROUTE999 = createNode("ROUTE");
ROUTE999.fromNode = "RunTimer";
ROUTE999.fromField = "fraction_changed";
ROUTE999.toNode = "Run_sacroiliac_YawInterpolator";
ROUTE999.toField = "set_fraction";
children[369] = ROUTE999;

ROUTE ROUTE1000 = createNode("ROUTE");
ROUTE1000.fromNode = "RunTimer";
ROUTE1000.fromField = "fraction_changed";
ROUTE1000.toNode = "Run_vl5_YawInterpolator";
ROUTE1000.toField = "set_fraction";
children[370] = ROUTE1000;

ROUTE ROUTE1001 = createNode("ROUTE");
ROUTE1001.fromNode = "RunTimer";
ROUTE1001.fromField = "fraction_changed";
ROUTE1001.toNode = "Run_vc6_YawInterpolator";
ROUTE1001.toField = "set_fraction";
children[371] = ROUTE1001;

ROUTE ROUTE1002 = createNode("ROUTE");
ROUTE1002.fromNode = "RunTimer";
ROUTE1002.fromField = "fraction_changed";
ROUTE1002.toNode = "Run_l_thumb1_PitchInterpolator";
ROUTE1002.toField = "set_fraction";
children[372] = ROUTE1002;

ROUTE ROUTE1003 = createNode("ROUTE");
ROUTE1003.fromNode = "RunTimer";
ROUTE1003.fromField = "fraction_changed";
ROUTE1003.toNode = "Run_r_thumb1_PitchInterpolator";
ROUTE1003.toField = "set_fraction";
children[373] = ROUTE1003;

ROUTE ROUTE1004 = createNode("ROUTE");
ROUTE1004.fromNode = "Run_r_ankle_RotationInterpolator_Run";
ROUTE1004.fromField = "value_changed";
ROUTE1004.toNode = "boxman_r_ankle";
ROUTE1004.toField = "set_rotation";
children[374] = ROUTE1004;

ROUTE ROUTE1005 = createNode("ROUTE");
ROUTE1005.fromNode = "Run_r_knee_RotationInterpolator_Run";
ROUTE1005.fromField = "value_changed";
ROUTE1005.toNode = "boxman_r_knee";
ROUTE1005.toField = "set_rotation";
children[375] = ROUTE1005;

ROUTE ROUTE1006 = createNode("ROUTE");
ROUTE1006.fromNode = "Run_r_hip_RotationInterpolator_Run";
ROUTE1006.fromField = "value_changed";
ROUTE1006.toNode = "boxman_r_hip";
ROUTE1006.toField = "set_rotation";
children[376] = ROUTE1006;

ROUTE ROUTE1007 = createNode("ROUTE");
ROUTE1007.fromNode = "Run_l_ankle_RotationInterpolator_Run";
ROUTE1007.fromField = "value_changed";
ROUTE1007.toNode = "boxman_l_ankle";
ROUTE1007.toField = "set_rotation";
children[377] = ROUTE1007;

ROUTE ROUTE1008 = createNode("ROUTE");
ROUTE1008.fromNode = "Run_l_knee_RotationInterpolator_Run";
ROUTE1008.fromField = "value_changed";
ROUTE1008.toNode = "boxman_l_knee";
ROUTE1008.toField = "set_rotation";
children[378] = ROUTE1008;

ROUTE ROUTE1009 = createNode("ROUTE");
ROUTE1009.fromNode = "Run_l_hip_RotationInterpolator_Run";
ROUTE1009.fromField = "value_changed";
ROUTE1009.toNode = "boxman_l_hip";
ROUTE1009.toField = "set_rotation";
children[379] = ROUTE1009;

ROUTE ROUTE1010 = createNode("ROUTE");
ROUTE1010.fromNode = "Run_r_wrist_RotationInterpolator_Run";
ROUTE1010.fromField = "value_changed";
ROUTE1010.toNode = "boxman_r_wrist";
ROUTE1010.toField = "set_rotation";
children[380] = ROUTE1010;

ROUTE ROUTE1011 = createNode("ROUTE");
ROUTE1011.fromNode = "Run_r_elbow_RotationInterpolator_Run";
ROUTE1011.fromField = "value_changed";
ROUTE1011.toNode = "boxman_r_elbow";
ROUTE1011.toField = "set_rotation";
children[381] = ROUTE1011;

ROUTE ROUTE1012 = createNode("ROUTE");
ROUTE1012.fromNode = "Run_r_shoulder_RotationInterpolator_Run";
ROUTE1012.fromField = "value_changed";
ROUTE1012.toNode = "boxman_r_shoulder";
ROUTE1012.toField = "set_rotation";
children[382] = ROUTE1012;

ROUTE ROUTE1013 = createNode("ROUTE");
ROUTE1013.fromNode = "Run_l_wrist_RotationInterpolator_Run";
ROUTE1013.fromField = "value_changed";
ROUTE1013.toNode = "boxman_l_wrist";
ROUTE1013.toField = "set_rotation";
children[383] = ROUTE1013;

ROUTE ROUTE1014 = createNode("ROUTE");
ROUTE1014.fromNode = "Run_l_elbow_RotationInterpolator_Run";
ROUTE1014.fromField = "value_changed";
ROUTE1014.toNode = "boxman_l_elbow";
ROUTE1014.toField = "set_rotation";
children[384] = ROUTE1014;

ROUTE ROUTE1015 = createNode("ROUTE");
ROUTE1015.fromNode = "Run_l_shoulder_RotationInterpolator_Run";
ROUTE1015.fromField = "value_changed";
ROUTE1015.toNode = "boxman_l_shoulder";
ROUTE1015.toField = "set_rotation";
children[385] = ROUTE1015;

ROUTE ROUTE1016 = createNode("ROUTE");
ROUTE1016.fromNode = "Run_head_RotationInterpolator_Run";
ROUTE1016.fromField = "value_changed";
ROUTE1016.toNode = "boxman_skullbase";
ROUTE1016.toField = "set_rotation";
children[386] = ROUTE1016;

ROUTE ROUTE1017 = createNode("ROUTE");
ROUTE1017.fromNode = "Run_whole_body_RotationInterpolator_Run";
ROUTE1017.fromField = "value_changed";
ROUTE1017.toNode = "boxman_humanoid_root";
ROUTE1017.toField = "set_rotation";
children[387] = ROUTE1017;

ROUTE ROUTE1018 = createNode("ROUTE");
ROUTE1018.fromNode = "Run_whole_body_TranslationInterpolator_Run";
ROUTE1018.fromField = "value_changed";
ROUTE1018.toNode = "boxman_humanoid_root";
ROUTE1018.toField = "set_translation";
children[388] = ROUTE1018;

ROUTE ROUTE1019 = createNode("ROUTE");
ROUTE1019.fromNode = "Run_vl5_YawInterpolator";
ROUTE1019.fromField = "value_changed";
ROUTE1019.toNode = "boxman_vl5";
ROUTE1019.toField = "set_rotation";
children[389] = ROUTE1019;

ROUTE ROUTE1020 = createNode("ROUTE");
ROUTE1020.fromNode = "JumpTimer";
ROUTE1020.fromField = "fraction_changed";
ROUTE1020.toNode = "Jump_r_ankle_RotationInterpolator";
ROUTE1020.toField = "set_fraction";
children[390] = ROUTE1020;

ROUTE ROUTE1021 = createNode("ROUTE");
ROUTE1021.fromNode = "JumpTimer";
ROUTE1021.fromField = "fraction_changed";
ROUTE1021.toNode = "Jump_r_knee_RotationInterpolator";
ROUTE1021.toField = "set_fraction";
children[391] = ROUTE1021;

ROUTE ROUTE1022 = createNode("ROUTE");
ROUTE1022.fromNode = "JumpTimer";
ROUTE1022.fromField = "fraction_changed";
ROUTE1022.toNode = "Jump_r_hip_RotationInterpolator";
ROUTE1022.toField = "set_fraction";
children[392] = ROUTE1022;

ROUTE ROUTE1023 = createNode("ROUTE");
ROUTE1023.fromNode = "JumpTimer";
ROUTE1023.fromField = "fraction_changed";
ROUTE1023.toNode = "Jump_l_ankle_RotationInterpolator";
ROUTE1023.toField = "set_fraction";
children[393] = ROUTE1023;

ROUTE ROUTE1024 = createNode("ROUTE");
ROUTE1024.fromNode = "JumpTimer";
ROUTE1024.fromField = "fraction_changed";
ROUTE1024.toNode = "Jump_l_knee_RotationInterpolator";
ROUTE1024.toField = "set_fraction";
children[394] = ROUTE1024;

ROUTE ROUTE1025 = createNode("ROUTE");
ROUTE1025.fromNode = "JumpTimer";
ROUTE1025.fromField = "fraction_changed";
ROUTE1025.toNode = "Jump_l_hip_RotationInterpolator";
ROUTE1025.toField = "set_fraction";
children[395] = ROUTE1025;

ROUTE ROUTE1026 = createNode("ROUTE");
ROUTE1026.fromNode = "JumpTimer";
ROUTE1026.fromField = "fraction_changed";
ROUTE1026.toNode = "Jump_lower_body_RotationInterpolator";
ROUTE1026.toField = "set_fraction";
children[396] = ROUTE1026;

ROUTE ROUTE1027 = createNode("ROUTE");
ROUTE1027.fromNode = "JumpTimer";
ROUTE1027.fromField = "fraction_changed";
ROUTE1027.toNode = "Jump_r_wrist_RotationInterpolator";
ROUTE1027.toField = "set_fraction";
children[397] = ROUTE1027;

ROUTE ROUTE1028 = createNode("ROUTE");
ROUTE1028.fromNode = "JumpTimer";
ROUTE1028.fromField = "fraction_changed";
ROUTE1028.toNode = "Jump_r_elbow_RotationInterpolator";
ROUTE1028.toField = "set_fraction";
children[398] = ROUTE1028;

ROUTE ROUTE1029 = createNode("ROUTE");
ROUTE1029.fromNode = "JumpTimer";
ROUTE1029.fromField = "fraction_changed";
ROUTE1029.toNode = "Jump_r_shoulder_RotationInterpolator";
ROUTE1029.toField = "set_fraction";
children[399] = ROUTE1029;

ROUTE ROUTE1030 = createNode("ROUTE");
ROUTE1030.fromNode = "JumpTimer";
ROUTE1030.fromField = "fraction_changed";
ROUTE1030.toNode = "Jump_l_wrist_RotationInterpolator";
ROUTE1030.toField = "set_fraction";
children[400] = ROUTE1030;

ROUTE ROUTE1031 = createNode("ROUTE");
ROUTE1031.fromNode = "JumpTimer";
ROUTE1031.fromField = "fraction_changed";
ROUTE1031.toNode = "Jump_l_elbow_RotationInterpolator";
ROUTE1031.toField = "set_fraction";
children[401] = ROUTE1031;

ROUTE ROUTE1032 = createNode("ROUTE");
ROUTE1032.fromNode = "JumpTimer";
ROUTE1032.fromField = "fraction_changed";
ROUTE1032.toNode = "Jump_l_shoulder_RotationInterpolator";
ROUTE1032.toField = "set_fraction";
children[402] = ROUTE1032;

ROUTE ROUTE1033 = createNode("ROUTE");
ROUTE1033.fromNode = "JumpTimer";
ROUTE1033.fromField = "fraction_changed";
ROUTE1033.toNode = "Jump_head_RotationInterpolator";
ROUTE1033.toField = "set_fraction";
children[403] = ROUTE1033;

ROUTE ROUTE1034 = createNode("ROUTE");
ROUTE1034.fromNode = "JumpTimer";
ROUTE1034.fromField = "fraction_changed";
ROUTE1034.toNode = "Jump_neck_RotationInterpolator";
ROUTE1034.toField = "set_fraction";
children[404] = ROUTE1034;

ROUTE ROUTE1035 = createNode("ROUTE");
ROUTE1035.fromNode = "JumpTimer";
ROUTE1035.fromField = "fraction_changed";
ROUTE1035.toNode = "Jump_upper_body_RotationInterpolator";
ROUTE1035.toField = "set_fraction";
children[405] = ROUTE1035;

ROUTE ROUTE1036 = createNode("ROUTE");
ROUTE1036.fromNode = "JumpTimer";
ROUTE1036.fromField = "fraction_changed";
ROUTE1036.toNode = "Jump_whole_body_RotationInterpolator";
ROUTE1036.toField = "set_fraction";
children[406] = ROUTE1036;

ROUTE ROUTE1037 = createNode("ROUTE");
ROUTE1037.fromNode = "JumpTimer";
ROUTE1037.fromField = "fraction_changed";
ROUTE1037.toNode = "Jump_whole_body_TranslationInterpolator";
ROUTE1037.toField = "set_fraction";
children[407] = ROUTE1037;

ROUTE ROUTE1038 = createNode("ROUTE");
ROUTE1038.fromNode = "JumpTimer";
ROUTE1038.fromField = "fraction_changed";
ROUTE1038.toNode = "Jump_l_sternoclavicular_RollInterpolator";
ROUTE1038.toField = "set_fraction";
children[408] = ROUTE1038;

ROUTE ROUTE1039 = createNode("ROUTE");
ROUTE1039.fromNode = "JumpTimer";
ROUTE1039.fromField = "fraction_changed";
ROUTE1039.toNode = "Jump_l_acromioclavicular_RollInterpolator";
ROUTE1039.toField = "set_fraction";
children[409] = ROUTE1039;

ROUTE ROUTE1040 = createNode("ROUTE");
ROUTE1040.fromNode = "JumpTimer";
ROUTE1040.fromField = "fraction_changed";
ROUTE1040.toNode = "Jump_r_sternoclavicular_RollInterpolator";
ROUTE1040.toField = "set_fraction";
children[410] = ROUTE1040;

ROUTE ROUTE1041 = createNode("ROUTE");
ROUTE1041.fromNode = "JumpTimer";
ROUTE1041.fromField = "fraction_changed";
ROUTE1041.toNode = "Jump_r_acromioclavicular_RollInterpolator";
ROUTE1041.toField = "set_fraction";
children[411] = ROUTE1041;

ROUTE ROUTE1042 = createNode("ROUTE");
ROUTE1042.fromNode = "JumpTimer";
ROUTE1042.fromField = "fraction_changed";
ROUTE1042.toNode = "Jump_r_metatarsal_PitchInterpolator";
ROUTE1042.toField = "set_fraction";
children[412] = ROUTE1042;

ROUTE ROUTE1043 = createNode("ROUTE");
ROUTE1043.fromNode = "JumpTimer";
ROUTE1043.fromField = "fraction_changed";
ROUTE1043.toNode = "Jump_sacroiliac_YawInterpolator";
ROUTE1043.toField = "set_fraction";
children[413] = ROUTE1043;

ROUTE ROUTE1044 = createNode("ROUTE");
ROUTE1044.fromNode = "JumpTimer";
ROUTE1044.fromField = "fraction_changed";
ROUTE1044.toNode = "Jump_vl5_YawInterpolator";
ROUTE1044.toField = "set_fraction";
children[414] = ROUTE1044;

ROUTE ROUTE1045 = createNode("ROUTE");
ROUTE1045.fromNode = "JumpTimer";
ROUTE1045.fromField = "fraction_changed";
ROUTE1045.toNode = "Jump_vc6_YawInterpolator";
ROUTE1045.toField = "set_fraction";
children[415] = ROUTE1045;

ROUTE ROUTE1046 = createNode("ROUTE");
ROUTE1046.fromNode = "JumpTimer";
ROUTE1046.fromField = "fraction_changed";
ROUTE1046.toNode = "Jump_l_thumb1_PitchInterpolator";
ROUTE1046.toField = "set_fraction";
children[416] = ROUTE1046;

ROUTE ROUTE1047 = createNode("ROUTE");
ROUTE1047.fromNode = "JumpTimer";
ROUTE1047.fromField = "fraction_changed";
ROUTE1047.toNode = "Jump_r_thumb1_PitchInterpolator";
ROUTE1047.toField = "set_fraction";
children[417] = ROUTE1047;

ROUTE ROUTE1048 = createNode("ROUTE");
ROUTE1048.fromNode = "Jump_r_ankle_RotationInterpolator";
ROUTE1048.fromField = "value_changed";
ROUTE1048.toNode = "boxman_r_ankle";
ROUTE1048.toField = "set_rotation";
children[418] = ROUTE1048;

ROUTE ROUTE1049 = createNode("ROUTE");
ROUTE1049.fromNode = "Jump_r_knee_RotationInterpolator";
ROUTE1049.fromField = "value_changed";
ROUTE1049.toNode = "boxman_r_knee";
ROUTE1049.toField = "set_rotation";
children[419] = ROUTE1049;

ROUTE ROUTE1050 = createNode("ROUTE");
ROUTE1050.fromNode = "Jump_r_hip_RotationInterpolator";
ROUTE1050.fromField = "value_changed";
ROUTE1050.toNode = "boxman_r_hip";
ROUTE1050.toField = "set_rotation";
children[420] = ROUTE1050;

ROUTE ROUTE1051 = createNode("ROUTE");
ROUTE1051.fromNode = "Jump_l_ankle_RotationInterpolator";
ROUTE1051.fromField = "value_changed";
ROUTE1051.toNode = "boxman_l_ankle";
ROUTE1051.toField = "set_rotation";
children[421] = ROUTE1051;

ROUTE ROUTE1052 = createNode("ROUTE");
ROUTE1052.fromNode = "Jump_l_knee_RotationInterpolator";
ROUTE1052.fromField = "value_changed";
ROUTE1052.toNode = "boxman_l_knee";
ROUTE1052.toField = "set_rotation";
children[422] = ROUTE1052;

ROUTE ROUTE1053 = createNode("ROUTE");
ROUTE1053.fromNode = "Jump_l_hip_RotationInterpolator";
ROUTE1053.fromField = "value_changed";
ROUTE1053.toNode = "boxman_l_hip";
ROUTE1053.toField = "set_rotation";
children[423] = ROUTE1053;

ROUTE ROUTE1054 = createNode("ROUTE");
ROUTE1054.fromNode = "Jump_r_wrist_RotationInterpolator";
ROUTE1054.fromField = "value_changed";
ROUTE1054.toNode = "boxman_r_wrist";
ROUTE1054.toField = "set_rotation";
children[424] = ROUTE1054;

ROUTE ROUTE1055 = createNode("ROUTE");
ROUTE1055.fromNode = "Jump_r_elbow_RotationInterpolator";
ROUTE1055.fromField = "value_changed";
ROUTE1055.toNode = "boxman_r_elbow";
ROUTE1055.toField = "set_rotation";
children[425] = ROUTE1055;

ROUTE ROUTE1056 = createNode("ROUTE");
ROUTE1056.fromNode = "Jump_r_shoulder_RotationInterpolator";
ROUTE1056.fromField = "value_changed";
ROUTE1056.toNode = "boxman_r_shoulder";
ROUTE1056.toField = "set_rotation";
children[426] = ROUTE1056;

ROUTE ROUTE1057 = createNode("ROUTE");
ROUTE1057.fromNode = "Jump_l_wrist_RotationInterpolator";
ROUTE1057.fromField = "value_changed";
ROUTE1057.toNode = "boxman_l_wrist";
ROUTE1057.toField = "set_rotation";
children[427] = ROUTE1057;

ROUTE ROUTE1058 = createNode("ROUTE");
ROUTE1058.fromNode = "Jump_l_elbow_RotationInterpolator";
ROUTE1058.fromField = "value_changed";
ROUTE1058.toNode = "boxman_l_elbow";
ROUTE1058.toField = "set_rotation";
children[428] = ROUTE1058;

ROUTE ROUTE1059 = createNode("ROUTE");
ROUTE1059.fromNode = "Jump_l_shoulder_RotationInterpolator";
ROUTE1059.fromField = "value_changed";
ROUTE1059.toNode = "boxman_l_shoulder";
ROUTE1059.toField = "set_rotation";
children[429] = ROUTE1059;

ROUTE ROUTE1060 = createNode("ROUTE");
ROUTE1060.fromNode = "Jump_head_RotationInterpolator";
ROUTE1060.fromField = "value_changed";
ROUTE1060.toNode = "boxman_skullbase";
ROUTE1060.toField = "set_rotation";
children[430] = ROUTE1060;

ROUTE ROUTE1061 = createNode("ROUTE");
ROUTE1061.fromNode = "Jump_whole_body_RotationInterpolator";
ROUTE1061.fromField = "value_changed";
ROUTE1061.toNode = "boxman_humanoid_root";
ROUTE1061.toField = "set_rotation";
children[431] = ROUTE1061;

ROUTE ROUTE1062 = createNode("ROUTE");
ROUTE1062.fromNode = "Jump_whole_body_TranslationInterpolator";
ROUTE1062.fromField = "value_changed";
ROUTE1062.toNode = "boxman_humanoid_root";
ROUTE1062.toField = "set_translation";
children[432] = ROUTE1062;

ROUTE ROUTE1063 = createNode("ROUTE");
ROUTE1063.fromNode = "Jump_vl5_YawInterpolator";
ROUTE1063.fromField = "value_changed";
ROUTE1063.toNode = "boxman_vl5";
ROUTE1063.toField = "set_rotation";
children[433] = ROUTE1063;

ROUTE ROUTE1064 = createNode("ROUTE");
ROUTE1064.fromNode = "KickTimer";
ROUTE1064.fromField = "fraction_changed";
ROUTE1064.toNode = "Kick_l_sternoclavicular_RollInterpolator";
ROUTE1064.toField = "set_fraction";
children[434] = ROUTE1064;

ROUTE ROUTE1065 = createNode("ROUTE");
ROUTE1065.fromNode = "KickTimer";
ROUTE1065.fromField = "fraction_changed";
ROUTE1065.toNode = "Kick_l_acromioclavicular_RollInterpolator";
ROUTE1065.toField = "set_fraction";
children[435] = ROUTE1065;

ROUTE ROUTE1066 = createNode("ROUTE");
ROUTE1066.fromNode = "KickTimer";
ROUTE1066.fromField = "fraction_changed";
ROUTE1066.toNode = "Kick_l_shoulder_RollInterpolator";
ROUTE1066.toField = "set_fraction";
children[436] = ROUTE1066;

ROUTE ROUTE1067 = createNode("ROUTE");
ROUTE1067.fromNode = "KickTimer";
ROUTE1067.fromField = "fraction_changed";
ROUTE1067.toNode = "Kick_l_ForeArm_PitchInterpolator";
ROUTE1067.toField = "set_fraction";
children[437] = ROUTE1067;

ROUTE ROUTE1068 = createNode("ROUTE");
ROUTE1068.fromNode = "KickTimer";
ROUTE1068.fromField = "fraction_changed";
ROUTE1068.toNode = "Kick_l_wrist_RollInterpolator";
ROUTE1068.toField = "set_fraction";
children[438] = ROUTE1068;

ROUTE ROUTE1069 = createNode("ROUTE");
ROUTE1069.fromNode = "KickTimer";
ROUTE1069.fromField = "fraction_changed";
ROUTE1069.toNode = "Kick_l_thumb1_PitchInterpolator";
ROUTE1069.toField = "set_fraction";
children[439] = ROUTE1069;

ROUTE ROUTE1070 = createNode("ROUTE");
ROUTE1070.fromNode = "KickTimer";
ROUTE1070.fromField = "fraction_changed";
ROUTE1070.toNode = "Kick_r_sternoclavicular_RollInterpolator";
ROUTE1070.toField = "set_fraction";
children[440] = ROUTE1070;

ROUTE ROUTE1071 = createNode("ROUTE");
ROUTE1071.fromNode = "KickTimer";
ROUTE1071.fromField = "fraction_changed";
ROUTE1071.toNode = "Kick_r_acromioclavicular_RollInterpolator";
ROUTE1071.toField = "set_fraction";
children[441] = ROUTE1071;

ROUTE ROUTE1072 = createNode("ROUTE");
ROUTE1072.fromNode = "KickTimer";
ROUTE1072.fromField = "fraction_changed";
ROUTE1072.toNode = "Kick_r_shoulder_RollInterpolator";
ROUTE1072.toField = "set_fraction";
children[442] = ROUTE1072;

ROUTE ROUTE1073 = createNode("ROUTE");
ROUTE1073.fromNode = "KickTimer";
ROUTE1073.fromField = "fraction_changed";
ROUTE1073.toNode = "Kick_r_ForeArm_PitchInterpolator";
ROUTE1073.toField = "set_fraction";
children[443] = ROUTE1073;

ROUTE ROUTE1074 = createNode("ROUTE");
ROUTE1074.fromNode = "KickTimer";
ROUTE1074.fromField = "fraction_changed";
ROUTE1074.toNode = "Kick_r_wrist_RollInterpolator";
ROUTE1074.toField = "set_fraction";
children[444] = ROUTE1074;

ROUTE ROUTE1075 = createNode("ROUTE");
ROUTE1075.fromNode = "KickTimer";
ROUTE1075.fromField = "fraction_changed";
ROUTE1075.toNode = "Kick_r_thumb1_PitchInterpolator";
ROUTE1075.toField = "set_fraction";
children[445] = ROUTE1075;

ROUTE ROUTE1076 = createNode("ROUTE");
ROUTE1076.fromNode = "KickTimer";
ROUTE1076.fromField = "fraction_changed";
ROUTE1076.toNode = "Kick_r_hip_PitchInterpolator";
ROUTE1076.toField = "set_fraction";
children[446] = ROUTE1076;

ROUTE ROUTE1077 = createNode("ROUTE");
ROUTE1077.fromNode = "KickTimer";
ROUTE1077.fromField = "fraction_changed";
ROUTE1077.toNode = "Kick_r_knee_PitchInterpolator";
ROUTE1077.toField = "set_fraction";
children[447] = ROUTE1077;

ROUTE ROUTE1078 = createNode("ROUTE");
ROUTE1078.fromNode = "KickTimer";
ROUTE1078.fromField = "fraction_changed";
ROUTE1078.toNode = "Kick_l_hip_PitchInterpolator";
ROUTE1078.toField = "set_fraction";
children[448] = ROUTE1078;

ROUTE ROUTE1079 = createNode("ROUTE");
ROUTE1079.fromNode = "KickTimer";
ROUTE1079.fromField = "fraction_changed";
ROUTE1079.toNode = "Kick_l_knee_PitchInterpolator";
ROUTE1079.toField = "set_fraction";
children[449] = ROUTE1079;

ROUTE ROUTE1080 = createNode("ROUTE");
ROUTE1080.fromNode = "KickTimer";
ROUTE1080.fromField = "fraction_changed";
ROUTE1080.toNode = "Kick_r_ankle_PitchInterpolator";
ROUTE1080.toField = "set_fraction";
children[450] = ROUTE1080;

ROUTE ROUTE1081 = createNode("ROUTE");
ROUTE1081.fromNode = "KickTimer";
ROUTE1081.fromField = "fraction_changed";
ROUTE1081.toNode = "Kick_r_metatarsal_PitchInterpolator";
ROUTE1081.toField = "set_fraction";
children[451] = ROUTE1081;

ROUTE ROUTE1082 = createNode("ROUTE");
ROUTE1082.fromNode = "KickTimer";
ROUTE1082.fromField = "fraction_changed";
ROUTE1082.toNode = "Kick_sacroiliac_YawInterpolator";
ROUTE1082.toField = "set_fraction";
children[452] = ROUTE1082;

ROUTE ROUTE1083 = createNode("ROUTE");
ROUTE1083.fromNode = "KickTimer";
ROUTE1083.fromField = "fraction_changed";
ROUTE1083.toNode = "Kick_vl5_YawInterpolator";
ROUTE1083.toField = "set_fraction";
children[453] = ROUTE1083;

ROUTE ROUTE1084 = createNode("ROUTE");
ROUTE1084.fromNode = "KickTimer";
ROUTE1084.fromField = "fraction_changed";
ROUTE1084.toNode = "Kick_vc6_YawInterpolator";
ROUTE1084.toField = "set_fraction";
children[454] = ROUTE1084;

ROUTE ROUTE1085 = createNode("ROUTE");
ROUTE1085.fromNode = "KickTimer";
ROUTE1085.fromField = "fraction_changed";
ROUTE1085.toNode = "Kick_lower_body_RotationInterpolator";
ROUTE1085.toField = "set_fraction";
children[455] = ROUTE1085;

ROUTE ROUTE1086 = createNode("ROUTE");
ROUTE1086.fromNode = "KickTimer";
ROUTE1086.fromField = "fraction_changed";
ROUTE1086.toNode = "Kick_upper_body_RotationInterpolator";
ROUTE1086.toField = "set_fraction";
children[456] = ROUTE1086;

ROUTE ROUTE1087 = createNode("ROUTE");
ROUTE1087.fromNode = "KickTimer";
ROUTE1087.fromField = "fraction_changed";
ROUTE1087.toNode = "Kick_whole_body_RotationInterpolator";
ROUTE1087.toField = "set_fraction";
children[457] = ROUTE1087;

ROUTE ROUTE1088 = createNode("ROUTE");
ROUTE1088.fromNode = "KickTimer";
ROUTE1088.fromField = "fraction_changed";
ROUTE1088.toNode = "Kick_whole_body_TranslationInterpolator";
ROUTE1088.toField = "set_fraction";
children[458] = ROUTE1088;

ROUTE ROUTE1089 = createNode("ROUTE");
ROUTE1089.fromNode = "KickTimer";
ROUTE1089.fromField = "fraction_changed";
ROUTE1089.toNode = "Kick_neck_RotationInterpolator";
ROUTE1089.toField = "set_fraction";
children[459] = ROUTE1089;

ROUTE ROUTE1090 = createNode("ROUTE");
ROUTE1090.fromNode = "Kick_l_shoulder_RollInterpolator";
ROUTE1090.fromField = "value_changed";
ROUTE1090.toNode = "boxman_l_shoulder";
ROUTE1090.toField = "set_rotation";
children[460] = ROUTE1090;

ROUTE ROUTE1091 = createNode("ROUTE");
ROUTE1091.fromNode = "Kick_l_ForeArm_PitchInterpolator";
ROUTE1091.fromField = "value_changed";
ROUTE1091.toNode = "boxman_l_elbow";
ROUTE1091.toField = "set_rotation";
children[461] = ROUTE1091;

ROUTE ROUTE1092 = createNode("ROUTE");
ROUTE1092.fromNode = "Kick_l_wrist_RollInterpolator";
ROUTE1092.fromField = "value_changed";
ROUTE1092.toNode = "boxman_l_wrist";
ROUTE1092.toField = "set_rotation";
children[462] = ROUTE1092;

ROUTE ROUTE1093 = createNode("ROUTE");
ROUTE1093.fromNode = "Kick_r_shoulder_RollInterpolator";
ROUTE1093.fromField = "value_changed";
ROUTE1093.toNode = "boxman_r_shoulder";
ROUTE1093.toField = "set_rotation";
children[463] = ROUTE1093;

ROUTE ROUTE1094 = createNode("ROUTE");
ROUTE1094.fromNode = "Kick_r_ForeArm_PitchInterpolator";
ROUTE1094.fromField = "value_changed";
ROUTE1094.toNode = "boxman_r_elbow";
ROUTE1094.toField = "set_rotation";
children[464] = ROUTE1094;

ROUTE ROUTE1095 = createNode("ROUTE");
ROUTE1095.fromNode = "Kick_r_wrist_RollInterpolator";
ROUTE1095.fromField = "value_changed";
ROUTE1095.toNode = "boxman_r_wrist";
ROUTE1095.toField = "set_rotation";
children[465] = ROUTE1095;

ROUTE ROUTE1096 = createNode("ROUTE");
ROUTE1096.fromNode = "Kick_r_hip_PitchInterpolator";
ROUTE1096.fromField = "value_changed";
ROUTE1096.toNode = "boxman_r_hip";
ROUTE1096.toField = "set_rotation";
children[466] = ROUTE1096;

ROUTE ROUTE1097 = createNode("ROUTE");
ROUTE1097.fromNode = "Kick_r_knee_PitchInterpolator";
ROUTE1097.fromField = "value_changed";
ROUTE1097.toNode = "boxman_r_knee";
ROUTE1097.toField = "set_rotation";
children[467] = ROUTE1097;

ROUTE ROUTE1098 = createNode("ROUTE");
ROUTE1098.fromNode = "Kick_r_ankle_PitchInterpolator";
ROUTE1098.fromField = "value_changed";
ROUTE1098.toNode = "boxman_r_ankle";
ROUTE1098.toField = "set_rotation";
children[468] = ROUTE1098;

ROUTE ROUTE1099 = createNode("ROUTE");
ROUTE1099.fromNode = "Kick_l_hip_PitchInterpolator";
ROUTE1099.fromField = "value_changed";
ROUTE1099.toNode = "boxman_l_hip";
ROUTE1099.toField = "set_rotation";
children[469] = ROUTE1099;

ROUTE ROUTE1100 = createNode("ROUTE");
ROUTE1100.fromNode = "Kick_l_knee_PitchInterpolator";
ROUTE1100.fromField = "value_changed";
ROUTE1100.toNode = "boxman_l_knee";
ROUTE1100.toField = "set_rotation";
children[470] = ROUTE1100;

ROUTE ROUTE1101 = createNode("ROUTE");
ROUTE1101.fromNode = "Kick_r_ankle_PitchInterpolator";
ROUTE1101.fromField = "value_changed";
ROUTE1101.toNode = "boxman_l_ankle";
ROUTE1101.toField = "set_rotation";
children[471] = ROUTE1101;

ROUTE ROUTE1102 = createNode("ROUTE");
ROUTE1102.fromNode = "Kick_vl5_YawInterpolator";
ROUTE1102.fromField = "value_changed";
ROUTE1102.toNode = "boxman_vl5";
ROUTE1102.toField = "set_rotation";
children[472] = ROUTE1102;

ROUTE ROUTE1103 = createNode("ROUTE");
ROUTE1103.fromNode = "Kick_whole_body_RotationInterpolator";
ROUTE1103.fromField = "value_changed";
ROUTE1103.toNode = "boxman_humanoid_root";
ROUTE1103.toField = "set_rotation";
children[473] = ROUTE1103;

ROUTE ROUTE1104 = createNode("ROUTE");
ROUTE1104.fromNode = "Kick_whole_body_TranslationInterpolator";
ROUTE1104.fromField = "value_changed";
ROUTE1104.toNode = "boxman_humanoid_root";
ROUTE1104.toField = "set_translation";
children[474] = ROUTE1104;

ROUTE ROUTE1105 = createNode("ROUTE");
ROUTE1105.fromNode = "HudProx";
ROUTE1105.fromField = "position_changed";
ROUTE1105.toNode = "HudXform";
ROUTE1105.toField = "set_translation";
children[475] = ROUTE1105;

ROUTE ROUTE1106 = createNode("ROUTE");
ROUTE1106.fromNode = "HudProx";
ROUTE1106.fromField = "orientation_changed";
ROUTE1106.toNode = "HudXform";
ROUTE1106.toField = "set_rotation";
children[476] = ROUTE1106;

ROUTE ROUTE1107 = createNode("ROUTE");
ROUTE1107.fromNode = "Stand_Touch";
ROUTE1107.fromField = "touchTime";
ROUTE1107.toNode = "PitchTimer";
ROUTE1107.toField = "set_stopTime";
children[477] = ROUTE1107;

ROUTE ROUTE1108 = createNode("ROUTE");
ROUTE1108.fromNode = "Stand_Touch";
ROUTE1108.fromField = "touchTime";
ROUTE1108.toNode = "YawTimer";
ROUTE1108.toField = "set_stopTime";
children[478] = ROUTE1108;

ROUTE ROUTE1109 = createNode("ROUTE");
ROUTE1109.fromNode = "Stand_Touch";
ROUTE1109.fromField = "touchTime";
ROUTE1109.toNode = "RollTimer";
ROUTE1109.toField = "set_stopTime";
children[479] = ROUTE1109;

ROUTE ROUTE1110 = createNode("ROUTE");
ROUTE1110.fromNode = "Stand_Touch";
ROUTE1110.fromField = "touchTime";
ROUTE1110.toNode = "WalkTimer";
ROUTE1110.toField = "set_stopTime";
children[480] = ROUTE1110;

ROUTE ROUTE1111 = createNode("ROUTE");
ROUTE1111.fromNode = "Stand_Touch";
ROUTE1111.fromField = "touchTime";
ROUTE1111.toNode = "RunTimer";
ROUTE1111.toField = "set_stopTime";
children[481] = ROUTE1111;

ROUTE ROUTE1112 = createNode("ROUTE");
ROUTE1112.fromNode = "Stand_Touch";
ROUTE1112.fromField = "touchTime";
ROUTE1112.toNode = "JumpTimer";
ROUTE1112.toField = "set_stopTime";
children[482] = ROUTE1112;

ROUTE ROUTE1113 = createNode("ROUTE");
ROUTE1113.fromNode = "Stand_Touch";
ROUTE1113.fromField = "touchTime";
ROUTE1113.toNode = "KickTimer";
ROUTE1113.toField = "set_stopTime";
children[483] = ROUTE1113;

ROUTE ROUTE1114 = createNode("ROUTE");
ROUTE1114.fromNode = "Stand_Touch";
ROUTE1114.fromField = "touchTime";
ROUTE1114.toNode = "StopTimer";
ROUTE1114.toField = "set_stopTime";
children[484] = ROUTE1114;

ROUTE ROUTE1115 = createNode("ROUTE");
ROUTE1115.fromNode = "Stand_Touch";
ROUTE1115.fromField = "touchTime";
ROUTE1115.toNode = "StandTimer";
ROUTE1115.toField = "set_startTime";
children[485] = ROUTE1115;

ROUTE ROUTE1116 = createNode("ROUTE");
ROUTE1116.fromNode = "Pitch_Touch";
ROUTE1116.fromField = "touchTime";
ROUTE1116.toNode = "StandTimer";
ROUTE1116.toField = "set_stopTime";
children[486] = ROUTE1116;

ROUTE ROUTE1117 = createNode("ROUTE");
ROUTE1117.fromNode = "Pitch_Touch";
ROUTE1117.fromField = "touchTime";
ROUTE1117.toNode = "YawTimer";
ROUTE1117.toField = "set_stopTime";
children[487] = ROUTE1117;

ROUTE ROUTE1118 = createNode("ROUTE");
ROUTE1118.fromNode = "Pitch_Touch";
ROUTE1118.fromField = "touchTime";
ROUTE1118.toNode = "RollTimer";
ROUTE1118.toField = "set_stopTime";
children[488] = ROUTE1118;

ROUTE ROUTE1119 = createNode("ROUTE");
ROUTE1119.fromNode = "Pitch_Touch";
ROUTE1119.fromField = "touchTime";
ROUTE1119.toNode = "WalkTimer";
ROUTE1119.toField = "set_stopTime";
children[489] = ROUTE1119;

ROUTE ROUTE1120 = createNode("ROUTE");
ROUTE1120.fromNode = "Pitch_Touch";
ROUTE1120.fromField = "touchTime";
ROUTE1120.toNode = "RunTimer";
ROUTE1120.toField = "set_stopTime";
children[490] = ROUTE1120;

ROUTE ROUTE1121 = createNode("ROUTE");
ROUTE1121.fromNode = "Pitch_Touch";
ROUTE1121.fromField = "touchTime";
ROUTE1121.toNode = "JumpTimer";
ROUTE1121.toField = "set_stopTime";
children[491] = ROUTE1121;

ROUTE ROUTE1122 = createNode("ROUTE");
ROUTE1122.fromNode = "Pitch_Touch";
ROUTE1122.fromField = "touchTime";
ROUTE1122.toNode = "KickTimer";
ROUTE1122.toField = "set_stopTime";
children[492] = ROUTE1122;

ROUTE ROUTE1123 = createNode("ROUTE");
ROUTE1123.fromNode = "Pitch_Touch";
ROUTE1123.fromField = "touchTime";
ROUTE1123.toNode = "StopTimer";
ROUTE1123.toField = "set_stopTime";
children[493] = ROUTE1123;

ROUTE ROUTE1124 = createNode("ROUTE");
ROUTE1124.fromNode = "Pitch_Touch";
ROUTE1124.fromField = "touchTime";
ROUTE1124.toNode = "PitchTimer";
ROUTE1124.toField = "set_startTime";
children[494] = ROUTE1124;

ROUTE ROUTE1125 = createNode("ROUTE");
ROUTE1125.fromNode = "Yaw_Touch";
ROUTE1125.fromField = "touchTime";
ROUTE1125.toNode = "StandTimer";
ROUTE1125.toField = "set_stopTime";
children[495] = ROUTE1125;

ROUTE ROUTE1126 = createNode("ROUTE");
ROUTE1126.fromNode = "Yaw_Touch";
ROUTE1126.fromField = "touchTime";
ROUTE1126.toNode = "PitchTimer";
ROUTE1126.toField = "set_stopTime";
children[496] = ROUTE1126;

ROUTE ROUTE1127 = createNode("ROUTE");
ROUTE1127.fromNode = "Yaw_Touch";
ROUTE1127.fromField = "touchTime";
ROUTE1127.toNode = "RollTimer";
ROUTE1127.toField = "set_stopTime";
children[497] = ROUTE1127;

ROUTE ROUTE1128 = createNode("ROUTE");
ROUTE1128.fromNode = "Yaw_Touch";
ROUTE1128.fromField = "touchTime";
ROUTE1128.toNode = "WalkTimer";
ROUTE1128.toField = "set_stopTime";
children[498] = ROUTE1128;

ROUTE ROUTE1129 = createNode("ROUTE");
ROUTE1129.fromNode = "Yaw_Touch";
ROUTE1129.fromField = "touchTime";
ROUTE1129.toNode = "RunTimer";
ROUTE1129.toField = "set_stopTime";
children[499] = ROUTE1129;

ROUTE ROUTE1130 = createNode("ROUTE");
ROUTE1130.fromNode = "Yaw_Touch";
ROUTE1130.fromField = "touchTime";
ROUTE1130.toNode = "JumpTimer";
ROUTE1130.toField = "set_stopTime";
children[500] = ROUTE1130;

ROUTE ROUTE1131 = createNode("ROUTE");
ROUTE1131.fromNode = "Yaw_Touch";
ROUTE1131.fromField = "touchTime";
ROUTE1131.toNode = "KickTimer";
ROUTE1131.toField = "set_stopTime";
children[501] = ROUTE1131;

ROUTE ROUTE1132 = createNode("ROUTE");
ROUTE1132.fromNode = "Yaw_Touch";
ROUTE1132.fromField = "touchTime";
ROUTE1132.toNode = "StopTimer";
ROUTE1132.toField = "set_stopTime";
children[502] = ROUTE1132;

ROUTE ROUTE1133 = createNode("ROUTE");
ROUTE1133.fromNode = "Yaw_Touch";
ROUTE1133.fromField = "touchTime";
ROUTE1133.toNode = "YawTimer";
ROUTE1133.toField = "set_startTime";
children[503] = ROUTE1133;

ROUTE ROUTE1134 = createNode("ROUTE");
ROUTE1134.fromNode = "Walk_Touch";
ROUTE1134.fromField = "touchTime";
ROUTE1134.toNode = "StandTimer";
ROUTE1134.toField = "set_stopTime";
children[504] = ROUTE1134;

ROUTE ROUTE1135 = createNode("ROUTE");
ROUTE1135.fromNode = "Walk_Touch";
ROUTE1135.fromField = "touchTime";
ROUTE1135.toNode = "PitchTimer";
ROUTE1135.toField = "set_stopTime";
children[505] = ROUTE1135;

ROUTE ROUTE1136 = createNode("ROUTE");
ROUTE1136.fromNode = "Walk_Touch";
ROUTE1136.fromField = "touchTime";
ROUTE1136.toNode = "YawTimer";
ROUTE1136.toField = "set_stopTime";
children[506] = ROUTE1136;

ROUTE ROUTE1137 = createNode("ROUTE");
ROUTE1137.fromNode = "Walk_Touch";
ROUTE1137.fromField = "touchTime";
ROUTE1137.toNode = "RollTimer";
ROUTE1137.toField = "set_stopTime";
children[507] = ROUTE1137;

ROUTE ROUTE1138 = createNode("ROUTE");
ROUTE1138.fromNode = "Walk_Touch";
ROUTE1138.fromField = "touchTime";
ROUTE1138.toNode = "RunTimer";
ROUTE1138.toField = "set_stopTime";
children[508] = ROUTE1138;

ROUTE ROUTE1139 = createNode("ROUTE");
ROUTE1139.fromNode = "Walk_Touch";
ROUTE1139.fromField = "touchTime";
ROUTE1139.toNode = "JumpTimer";
ROUTE1139.toField = "set_stopTime";
children[509] = ROUTE1139;

ROUTE ROUTE1140 = createNode("ROUTE");
ROUTE1140.fromNode = "Walk_Touch";
ROUTE1140.fromField = "touchTime";
ROUTE1140.toNode = "KickTimer";
ROUTE1140.toField = "set_stopTime";
children[510] = ROUTE1140;

ROUTE ROUTE1141 = createNode("ROUTE");
ROUTE1141.fromNode = "Walk_Touch";
ROUTE1141.fromField = "touchTime";
ROUTE1141.toNode = "StopTimer";
ROUTE1141.toField = "set_stopTime";
children[511] = ROUTE1141;

ROUTE ROUTE1142 = createNode("ROUTE");
ROUTE1142.fromNode = "Walk_Touch";
ROUTE1142.fromField = "touchTime";
ROUTE1142.toNode = "WalkTimer";
ROUTE1142.toField = "set_startTime";
children[512] = ROUTE1142;

ROUTE ROUTE1143 = createNode("ROUTE");
ROUTE1143.fromNode = "Roll_Touch";
ROUTE1143.fromField = "touchTime";
ROUTE1143.toNode = "StandTimer";
ROUTE1143.toField = "set_stopTime";
children[513] = ROUTE1143;

ROUTE ROUTE1144 = createNode("ROUTE");
ROUTE1144.fromNode = "Roll_Touch";
ROUTE1144.fromField = "touchTime";
ROUTE1144.toNode = "PitchTimer";
ROUTE1144.toField = "set_stopTime";
children[514] = ROUTE1144;

ROUTE ROUTE1145 = createNode("ROUTE");
ROUTE1145.fromNode = "Roll_Touch";
ROUTE1145.fromField = "touchTime";
ROUTE1145.toNode = "YawTimer";
ROUTE1145.toField = "set_stopTime";
children[515] = ROUTE1145;

ROUTE ROUTE1146 = createNode("ROUTE");
ROUTE1146.fromNode = "Roll_Touch";
ROUTE1146.fromField = "touchTime";
ROUTE1146.toNode = "WalkTimer";
ROUTE1146.toField = "set_stopTime";
children[516] = ROUTE1146;

ROUTE ROUTE1147 = createNode("ROUTE");
ROUTE1147.fromNode = "Roll_Touch";
ROUTE1147.fromField = "touchTime";
ROUTE1147.toNode = "RunTimer";
ROUTE1147.toField = "set_stopTime";
children[517] = ROUTE1147;

ROUTE ROUTE1148 = createNode("ROUTE");
ROUTE1148.fromNode = "Roll_Touch";
ROUTE1148.fromField = "touchTime";
ROUTE1148.toNode = "JumpTimer";
ROUTE1148.toField = "set_stopTime";
children[518] = ROUTE1148;

ROUTE ROUTE1149 = createNode("ROUTE");
ROUTE1149.fromNode = "Roll_Touch";
ROUTE1149.fromField = "touchTime";
ROUTE1149.toNode = "KickTimer";
ROUTE1149.toField = "set_stopTime";
children[519] = ROUTE1149;

ROUTE ROUTE1150 = createNode("ROUTE");
ROUTE1150.fromNode = "Roll_Touch";
ROUTE1150.fromField = "touchTime";
ROUTE1150.toNode = "StopTimer";
ROUTE1150.toField = "set_stopTime";
children[520] = ROUTE1150;

ROUTE ROUTE1151 = createNode("ROUTE");
ROUTE1151.fromNode = "Roll_Touch";
ROUTE1151.fromField = "touchTime";
ROUTE1151.toNode = "RollTimer";
ROUTE1151.toField = "set_startTime";
children[521] = ROUTE1151;

ROUTE ROUTE1152 = createNode("ROUTE");
ROUTE1152.fromNode = "Run_Touch";
ROUTE1152.fromField = "touchTime";
ROUTE1152.toNode = "StandTimer";
ROUTE1152.toField = "set_stopTime";
children[522] = ROUTE1152;

ROUTE ROUTE1153 = createNode("ROUTE");
ROUTE1153.fromNode = "Run_Touch";
ROUTE1153.fromField = "touchTime";
ROUTE1153.toNode = "PitchTimer";
ROUTE1153.toField = "set_stopTime";
children[523] = ROUTE1153;

ROUTE ROUTE1154 = createNode("ROUTE");
ROUTE1154.fromNode = "Run_Touch";
ROUTE1154.fromField = "touchTime";
ROUTE1154.toNode = "YawTimer";
ROUTE1154.toField = "set_stopTime";
children[524] = ROUTE1154;

ROUTE ROUTE1155 = createNode("ROUTE");
ROUTE1155.fromNode = "Run_Touch";
ROUTE1155.fromField = "touchTime";
ROUTE1155.toNode = "RollTimer";
ROUTE1155.toField = "set_stopTime";
children[525] = ROUTE1155;

ROUTE ROUTE1156 = createNode("ROUTE");
ROUTE1156.fromNode = "Run_Touch";
ROUTE1156.fromField = "touchTime";
ROUTE1156.toNode = "WalkTimer";
ROUTE1156.toField = "set_stopTime";
children[526] = ROUTE1156;

ROUTE ROUTE1157 = createNode("ROUTE");
ROUTE1157.fromNode = "Run_Touch";
ROUTE1157.fromField = "touchTime";
ROUTE1157.toNode = "JumpTimer";
ROUTE1157.toField = "set_stopTime";
children[527] = ROUTE1157;

ROUTE ROUTE1158 = createNode("ROUTE");
ROUTE1158.fromNode = "Run_Touch";
ROUTE1158.fromField = "touchTime";
ROUTE1158.toNode = "KickTimer";
ROUTE1158.toField = "set_stopTime";
children[528] = ROUTE1158;

ROUTE ROUTE1159 = createNode("ROUTE");
ROUTE1159.fromNode = "Run_Touch";
ROUTE1159.fromField = "touchTime";
ROUTE1159.toNode = "StopTimer";
ROUTE1159.toField = "set_stopTime";
children[529] = ROUTE1159;

ROUTE ROUTE1160 = createNode("ROUTE");
ROUTE1160.fromNode = "Run_Touch";
ROUTE1160.fromField = "touchTime";
ROUTE1160.toNode = "RunTimer";
ROUTE1160.toField = "set_startTime";
children[530] = ROUTE1160;

ROUTE ROUTE1161 = createNode("ROUTE");
ROUTE1161.fromNode = "Jump_Touch";
ROUTE1161.fromField = "touchTime";
ROUTE1161.toNode = "StandTimer";
ROUTE1161.toField = "set_stopTime";
children[531] = ROUTE1161;

ROUTE ROUTE1162 = createNode("ROUTE");
ROUTE1162.fromNode = "Jump_Touch";
ROUTE1162.fromField = "touchTime";
ROUTE1162.toNode = "PitchTimer";
ROUTE1162.toField = "set_stopTime";
children[532] = ROUTE1162;

ROUTE ROUTE1163 = createNode("ROUTE");
ROUTE1163.fromNode = "Jump_Touch";
ROUTE1163.fromField = "touchTime";
ROUTE1163.toNode = "YawTimer";
ROUTE1163.toField = "set_stopTime";
children[533] = ROUTE1163;

ROUTE ROUTE1164 = createNode("ROUTE");
ROUTE1164.fromNode = "Jump_Touch";
ROUTE1164.fromField = "touchTime";
ROUTE1164.toNode = "RollTimer";
ROUTE1164.toField = "set_stopTime";
children[534] = ROUTE1164;

ROUTE ROUTE1165 = createNode("ROUTE");
ROUTE1165.fromNode = "Jump_Touch";
ROUTE1165.fromField = "touchTime";
ROUTE1165.toNode = "WalkTimer";
ROUTE1165.toField = "set_stopTime";
children[535] = ROUTE1165;

ROUTE ROUTE1166 = createNode("ROUTE");
ROUTE1166.fromNode = "Jump_Touch";
ROUTE1166.fromField = "touchTime";
ROUTE1166.toNode = "RunTimer";
ROUTE1166.toField = "set_stopTime";
children[536] = ROUTE1166;

ROUTE ROUTE1167 = createNode("ROUTE");
ROUTE1167.fromNode = "Jump_Touch";
ROUTE1167.fromField = "touchTime";
ROUTE1167.toNode = "KickTimer";
ROUTE1167.toField = "set_stopTime";
children[537] = ROUTE1167;

ROUTE ROUTE1168 = createNode("ROUTE");
ROUTE1168.fromNode = "Jump_Touch";
ROUTE1168.fromField = "touchTime";
ROUTE1168.toNode = "StopTimer";
ROUTE1168.toField = "set_stopTime";
children[538] = ROUTE1168;

ROUTE ROUTE1169 = createNode("ROUTE");
ROUTE1169.fromNode = "Jump_Touch";
ROUTE1169.fromField = "touchTime";
ROUTE1169.toNode = "JumpTimer";
ROUTE1169.toField = "set_startTime";
children[539] = ROUTE1169;

ROUTE ROUTE1170 = createNode("ROUTE");
ROUTE1170.fromNode = "Kick_Touch";
ROUTE1170.fromField = "touchTime";
ROUTE1170.toNode = "StandTimer";
ROUTE1170.toField = "set_stopTime";
children[540] = ROUTE1170;

ROUTE ROUTE1171 = createNode("ROUTE");
ROUTE1171.fromNode = "Kick_Touch";
ROUTE1171.fromField = "touchTime";
ROUTE1171.toNode = "PitchTimer";
ROUTE1171.toField = "set_stopTime";
children[541] = ROUTE1171;

ROUTE ROUTE1172 = createNode("ROUTE");
ROUTE1172.fromNode = "Kick_Touch";
ROUTE1172.fromField = "touchTime";
ROUTE1172.toNode = "YawTimer";
ROUTE1172.toField = "set_stopTime";
children[542] = ROUTE1172;

ROUTE ROUTE1173 = createNode("ROUTE");
ROUTE1173.fromNode = "Kick_Touch";
ROUTE1173.fromField = "touchTime";
ROUTE1173.toNode = "RollTimer";
ROUTE1173.toField = "set_stopTime";
children[543] = ROUTE1173;

ROUTE ROUTE1174 = createNode("ROUTE");
ROUTE1174.fromNode = "Kick_Touch";
ROUTE1174.fromField = "touchTime";
ROUTE1174.toNode = "WalkTimer";
ROUTE1174.toField = "set_stopTime";
children[544] = ROUTE1174;

ROUTE ROUTE1175 = createNode("ROUTE");
ROUTE1175.fromNode = "Kick_Touch";
ROUTE1175.fromField = "touchTime";
ROUTE1175.toNode = "RunTimer";
ROUTE1175.toField = "set_stopTime";
children[545] = ROUTE1175;

ROUTE ROUTE1176 = createNode("ROUTE");
ROUTE1176.fromNode = "Kick_Touch";
ROUTE1176.fromField = "touchTime";
ROUTE1176.toNode = "JumpTimer";
ROUTE1176.toField = "set_stopTime";
children[546] = ROUTE1176;

ROUTE ROUTE1177 = createNode("ROUTE");
ROUTE1177.fromNode = "Kick_Touch";
ROUTE1177.fromField = "touchTime";
ROUTE1177.toNode = "StopTimer";
ROUTE1177.toField = "set_stopTime";
children[547] = ROUTE1177;

ROUTE ROUTE1178 = createNode("ROUTE");
ROUTE1178.fromNode = "Kick_Touch";
ROUTE1178.fromField = "touchTime";
ROUTE1178.toNode = "KickTimer";
ROUTE1178.toField = "set_startTime";
children[548] = ROUTE1178;

ROUTE ROUTE1179 = createNode("ROUTE");
ROUTE1179.fromNode = "Stop_Touch";
ROUTE1179.fromField = "touchTime";
ROUTE1179.toNode = "StandTimer";
ROUTE1179.toField = "set_stopTime";
children[549] = ROUTE1179;

ROUTE ROUTE1180 = createNode("ROUTE");
ROUTE1180.fromNode = "Stop_Touch";
ROUTE1180.fromField = "touchTime";
ROUTE1180.toNode = "PitchTimer";
ROUTE1180.toField = "set_stopTime";
children[550] = ROUTE1180;

ROUTE ROUTE1181 = createNode("ROUTE");
ROUTE1181.fromNode = "Stop_Touch";
ROUTE1181.fromField = "touchTime";
ROUTE1181.toNode = "YawTimer";
ROUTE1181.toField = "set_stopTime";
children[551] = ROUTE1181;

ROUTE ROUTE1182 = createNode("ROUTE");
ROUTE1182.fromNode = "Stop_Touch";
ROUTE1182.fromField = "touchTime";
ROUTE1182.toNode = "RollTimer";
ROUTE1182.toField = "set_stopTime";
children[552] = ROUTE1182;

ROUTE ROUTE1183 = createNode("ROUTE");
ROUTE1183.fromNode = "Stop_Touch";
ROUTE1183.fromField = "touchTime";
ROUTE1183.toNode = "WalkTimer";
ROUTE1183.toField = "set_stopTime";
children[553] = ROUTE1183;

ROUTE ROUTE1184 = createNode("ROUTE");
ROUTE1184.fromNode = "Stop_Touch";
ROUTE1184.fromField = "touchTime";
ROUTE1184.toNode = "RunTimer";
ROUTE1184.toField = "set_stopTime";
children[554] = ROUTE1184;

ROUTE ROUTE1185 = createNode("ROUTE");
ROUTE1185.fromNode = "Stop_Touch";
ROUTE1185.fromField = "touchTime";
ROUTE1185.toNode = "JumpTimer";
ROUTE1185.toField = "set_stopTime";
children[555] = ROUTE1185;

ROUTE ROUTE1186 = createNode("ROUTE");
ROUTE1186.fromNode = "Stop_Touch";
ROUTE1186.fromField = "touchTime";
ROUTE1186.toNode = "KickTimer";
ROUTE1186.toField = "set_stopTime";
children[556] = ROUTE1186;

ROUTE ROUTE1187 = createNode("ROUTE");
ROUTE1187.fromNode = "Stop_Touch";
ROUTE1187.fromField = "touchTime";
ROUTE1187.toNode = "StopTimer";
ROUTE1187.toField = "set_startTime";
children[557] = ROUTE1187;

}

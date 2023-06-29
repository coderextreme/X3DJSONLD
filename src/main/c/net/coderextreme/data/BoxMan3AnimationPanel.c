#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "H-Anim";
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
meta8.name = "created";
meta8.content = "1 March 2001";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "revision";
meta9.content = "12 January 2017";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "translated";
meta10.content = "14 January 2017";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "modified";
meta11.content = "6 January 2023";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "Image";
meta12.content = "BoxManAnimationPanelInclined.png";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "MovingImage";
meta13.content = "BoxManAnimationPanel.mp4";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "MovingImage";
meta14.content = "https://www.youtube.com/watch?v=8tI83Rtg_DU";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "reference";
meta15.content = "https://twitter.com/Web3DConsortium/status/820638047523913728";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "reference";
meta16.content = "https://twitter.com/Web3DConsortium/status/820642726009978881";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "reference";
meta17.content = "http://HAnim.org";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "reference";
meta18.content = "originals/boxman.wrl";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "TODO";
meta19.content = "InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "reference";
meta20.content = "BoxMan3.x3d";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "reference";
meta21.content = "http://HAnim.org/Models/HAnim2001/boxman";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "reference";
meta22.content = "http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "reference";
meta23.content = "http://www.vapourtech.com/team/james/boxman.wrl";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "reference";
meta24.content = "http://HAnim.org/Specifications/HAnim2001";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "reference";
meta25.content = "http://HAnim.org/Models";
head1.meta[23] = meta25;

meta meta26 = createNode("meta");
meta26.name = "reference";
meta26.content = "http://HAnim.org/Nodes";
head1.meta[24] = meta26;

meta meta27 = createNode("meta");
meta27.name = "reference";
meta27.content = "https://www.web3d.org/x3d/content/X3dToVrml97.xslt";
head1.meta[25] = meta27;

meta meta28 = createNode("meta");
meta28.name = "rights";
meta28.content = "(C) 2000 James Smith - james@vapourtech.com";
head1.meta[26] = meta28;

meta meta29 = createNode("meta");
meta29.name = "reference";
meta29.content = "http://www.vapourtech.com";
head1.meta[27] = meta29;

meta meta30 = createNode("meta");
meta30.name = "subject";
meta30.content = "BoxMan HAnim 2.0";
head1.meta[28] = meta30;

meta meta31 = createNode("meta");
meta31.name = "identifier";
meta31.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan3AnimationPanel.x3d";
head1.meta[29] = meta31;

meta meta32 = createNode("meta");
meta32.name = "generator";
meta32.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[30] = meta32;

meta meta33 = createNode("meta");
meta33.name = "license";
meta33.content = "../license.html";
head1.meta[31] = meta33;

head = head1;

WorldInfo WorldInfo35 = createNode("WorldInfo");
WorldInfo35.info = new MFString(new java.lang.String["(C) 2000 James Smith - james@vapourtech.com","http://www.vapourtech.com/team/james/boxman.wrl","Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com"]);
WorldInfo35.title = "BoxMan3 - A Seamless VRML Human";
children = new MFNode();

children[0] = WorldInfo35;

Background Background36 = createNode("Background");
Background36.groundColor = new MFColor(new float[0.6,0.6,0.6]);
Background36.skyColor = new MFColor(new float[0.75,0.75,0.75]);
children[1] = Background36;

HAnimHumanoid HAnimHumanoid37 = createNode("HAnimHumanoid");
HAnimHumanoid37.name = "Humanoid";
HAnimHumanoid37.DEF = "boxman_Humanoid";
HAnimHumanoid37.info = new MFString(new java.lang.String["authorName=James Smith","authorEmail=james@vapourtech.com","copyright=(C) 2000 James Smith - james@vapourtech.com","humanoidVersion=2.0"]);
HAnimHumanoid37.version = "1.0";
HAnimJoint HAnimJoint38 = createNode("HAnimJoint");
HAnimJoint38.name = "humanoid_root";
HAnimJoint38.DEF = "boxman_humanoid_root";
HAnimJoint38.center = new SFVec3f(new float[0,0.9723,-0.0728]);
HAnimJoint38.skinCoordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9,10,11]);
HAnimJoint38.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint38.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint38.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment39 = createNode("HAnimSegment");
HAnimSegment39.name = "sacrum";
HAnimSegment39.DEF = "boxman_sacrum";
Transform Transform40 = createNode("Transform");
Transform40.translation = new SFVec3f(new float[0,0.9723,-0.0728]);
Shape Shape41 = createNode("Shape");
Shape41.DEF = "SphereYellow";
Appearance Appearance42 = createNode("Appearance");
Material Material43 = createNode("Material");
Material43.diffuseColor = new SFColor(new float[1,1,0]);
Appearance42.material = Material43;

Shape41.appearance = Appearance42;

Sphere Sphere44 = createNode("Sphere");
Sphere44.radius = 0.02;
Shape41.geometry = Sphere44;

Transform40.children = new MFNode();

Transform40.children[0] = Shape41;

HAnimSegment39.children = new MFNode();

HAnimSegment39.children[0] = Transform40;

HAnimJoint38.children = new MFNode();

HAnimJoint38.children[0] = HAnimSegment39;

HAnimJoint HAnimJoint45 = createNode("HAnimJoint");
HAnimJoint45.name = "l_hip";
HAnimJoint45.DEF = "boxman_l_hip";
HAnimJoint45.center = new SFVec3f(new float[0.0956,0.9364,0]);
HAnimJoint45.skinCoordIndex = new MFInt32(new int[12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43]);
HAnimJoint45.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
HAnimJoint45.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint45.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment46 = createNode("HAnimSegment");
HAnimSegment46.name = "l_thigh";
HAnimSegment46.DEF = "boxman_l_thigh";
Transform Transform47 = createNode("Transform");
Transform47.translation = new SFVec3f(new float[0.0956,0.9364,0]);
Shape Shape48 = createNode("Shape");
Shape48.USE = "SphereYellow";
Transform47.children = new MFNode();

Transform47.children[0] = Shape48;

HAnimSegment46.children = new MFNode();

HAnimSegment46.children[0] = Transform47;

HAnimJoint45.children = new MFNode();

HAnimJoint45.children[0] = HAnimSegment46;

HAnimJoint HAnimJoint49 = createNode("HAnimJoint");
HAnimJoint49.name = "l_knee";
HAnimJoint49.DEF = "boxman_l_knee";
HAnimJoint49.center = new SFVec3f(new float[0.0956,0.5095,-0.0036]);
HAnimJoint49.skinCoordIndex = new MFInt32(new int[36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63]);
HAnimJoint49.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint49.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint49.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment50 = createNode("HAnimSegment");
HAnimSegment50.name = "l_calf";
HAnimSegment50.DEF = "boxman_l_calf";
Transform Transform51 = createNode("Transform");
Transform51.translation = new SFVec3f(new float[0.0956,0.5095,-0.0036]);
Shape Shape52 = createNode("Shape");
Shape52.USE = "SphereYellow";
Transform51.children = new MFNode();

Transform51.children[0] = Shape52;

HAnimSegment50.children = new MFNode();

HAnimSegment50.children[0] = Transform51;

HAnimJoint49.children = new MFNode();

HAnimJoint49.children[0] = HAnimSegment50;

HAnimJoint HAnimJoint53 = createNode("HAnimJoint");
HAnimJoint53.name = "l_ankle";
HAnimJoint53.DEF = "boxman_l_ankle";
HAnimJoint53.center = new SFVec3f(new float[0.0946,0.0762,-0.0261]);
HAnimJoint53.skinCoordIndex = new MFInt32(new int[64,65,66,67,68,69,70,71]);
HAnimJoint53.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint53.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint53.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment54 = createNode("HAnimSegment");
HAnimSegment54.name = "l_hindfoot";
HAnimSegment54.DEF = "boxman_l_hindfoot";
Transform Transform55 = createNode("Transform");
Transform55.translation = new SFVec3f(new float[0.0946,0.0762,-0.0261]);
Shape Shape56 = createNode("Shape");
Shape56.USE = "SphereYellow";
Transform55.children = new MFNode();

Transform55.children[0] = Shape56;

HAnimSegment54.children = new MFNode();

HAnimSegment54.children[0] = Transform55;

HAnimJoint53.children = new MFNode();

HAnimJoint53.children[0] = HAnimSegment54;

HAnimJoint HAnimJoint57 = createNode("HAnimJoint");
HAnimJoint57.name = "l_midtarsal";
HAnimJoint57.DEF = "boxman_l_midtarsal";
HAnimJoint57.center = new SFVec3f(new float[0.1079,0.0317,0.067]);
HAnimJoint57.skinCoordIndex = new MFInt32(new int[72,73,74,75,76,77,78,79]);
HAnimJoint57.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint57.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint57.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment58 = createNode("HAnimSegment");
HAnimSegment58.name = "l_middistal";
HAnimSegment58.DEF = "boxman_l_middistal";
Transform Transform59 = createNode("Transform");
Transform59.translation = new SFVec3f(new float[0.1079,0.0317,0.067]);
Shape Shape60 = createNode("Shape");
Shape60.USE = "SphereYellow";
Transform59.children = new MFNode();

Transform59.children[0] = Shape60;

HAnimSegment58.children = new MFNode();

HAnimSegment58.children[0] = Transform59;

HAnimSite HAnimSite61 = createNode("HAnimSite");
HAnimSite61.name = "l_middistal_tip";
HAnimSite61.DEF = "boxman_l_middistal_tip";
HAnimSite61.translation = new SFVec3f(new float[0.095,0.0005,0.1924]);
Shape Shape62 = createNode("Shape");
Shape62.DEF = "SphereRed";
Appearance Appearance63 = createNode("Appearance");
Material Material64 = createNode("Material");
Material64.diffuseColor = new SFColor(new float[1,0,0]);
Appearance63.material = Material64;

Shape62.appearance = Appearance63;

Sphere Sphere65 = createNode("Sphere");
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

HAnimJoint HAnimJoint66 = createNode("HAnimJoint");
HAnimJoint66.name = "r_hip";
HAnimJoint66.DEF = "boxman_r_hip";
HAnimJoint66.center = new SFVec3f(new float[-0.0956,0.9364,0]);
HAnimJoint66.skinCoordIndex = new MFInt32(new int[80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111]);
HAnimJoint66.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
HAnimJoint66.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint66.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment67 = createNode("HAnimSegment");
HAnimSegment67.name = "r_thigh";
HAnimSegment67.DEF = "boxman_r_thigh";
Transform Transform68 = createNode("Transform");
Transform68.translation = new SFVec3f(new float[-0.0956,0.9364,0]);
Shape Shape69 = createNode("Shape");
Shape69.USE = "SphereYellow";
Transform68.children = new MFNode();

Transform68.children[0] = Shape69;

HAnimSegment67.children = new MFNode();

HAnimSegment67.children[0] = Transform68;

HAnimJoint66.children = new MFNode();

HAnimJoint66.children[0] = HAnimSegment67;

HAnimJoint HAnimJoint70 = createNode("HAnimJoint");
HAnimJoint70.name = "r_knee";
HAnimJoint70.DEF = "boxman_r_knee";
HAnimJoint70.center = new SFVec3f(new float[-0.0956,0.5095,-0.0036]);
HAnimJoint70.skinCoordIndex = new MFInt32(new int[104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131]);
HAnimJoint70.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint70.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint70.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment71 = createNode("HAnimSegment");
HAnimSegment71.name = "r_calf";
HAnimSegment71.DEF = "boxman_r_calf";
Transform Transform72 = createNode("Transform");
Transform72.translation = new SFVec3f(new float[-0.0956,0.5095,-0.0036]);
Shape Shape73 = createNode("Shape");
Shape73.USE = "SphereYellow";
Transform72.children = new MFNode();

Transform72.children[0] = Shape73;

HAnimSegment71.children = new MFNode();

HAnimSegment71.children[0] = Transform72;

HAnimJoint70.children = new MFNode();

HAnimJoint70.children[0] = HAnimSegment71;

HAnimJoint HAnimJoint74 = createNode("HAnimJoint");
HAnimJoint74.name = "r_ankle";
HAnimJoint74.DEF = "boxman_r_ankle";
HAnimJoint74.center = new SFVec3f(new float[-0.0946,0.0762,-0.0261]);
HAnimJoint74.skinCoordIndex = new MFInt32(new int[132,133,134,135,136,137,138,139]);
HAnimJoint74.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint74.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint74.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment75 = createNode("HAnimSegment");
HAnimSegment75.name = "r_hindfoot";
HAnimSegment75.DEF = "boxman_r_hindfoot";
Transform Transform76 = createNode("Transform");
Transform76.translation = new SFVec3f(new float[-0.0946,0.0762,-0.0261]);
Shape Shape77 = createNode("Shape");
Shape77.USE = "SphereYellow";
Transform76.children = new MFNode();

Transform76.children[0] = Shape77;

HAnimSegment75.children = new MFNode();

HAnimSegment75.children[0] = Transform76;

HAnimJoint74.children = new MFNode();

HAnimJoint74.children[0] = HAnimSegment75;

HAnimJoint HAnimJoint78 = createNode("HAnimJoint");
HAnimJoint78.name = "r_midtarsal";
HAnimJoint78.DEF = "boxman_r_midtarsal";
HAnimJoint78.center = new SFVec3f(new float[-0.1079,0.0317,0.067]);
HAnimJoint78.skinCoordIndex = new MFInt32(new int[140,141,142,143,144,145,146,147]);
HAnimJoint78.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint78.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint78.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment79 = createNode("HAnimSegment");
HAnimSegment79.name = "r_middistal";
HAnimSegment79.DEF = "boxman_r_middistal";
Transform Transform80 = createNode("Transform");
Transform80.translation = new SFVec3f(new float[-0.1079,0.0317,0.067]);
Shape Shape81 = createNode("Shape");
Shape81.USE = "SphereYellow";
Transform80.children = new MFNode();

Transform80.children[0] = Shape81;

HAnimSegment79.children = new MFNode();

HAnimSegment79.children[0] = Transform80;

HAnimSite HAnimSite82 = createNode("HAnimSite");
HAnimSite82.name = "r_middistal_tip";
HAnimSite82.DEF = "boxman_r_middistal_tip";
HAnimSite82.translation = new SFVec3f(new float[-0.095,0.0005,0.1924]);
Shape Shape83 = createNode("Shape");
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

HAnimJoint HAnimJoint84 = createNode("HAnimJoint");
HAnimJoint84.name = "vl5";
HAnimJoint84.DEF = "boxman_vl5";
HAnimJoint84.center = new SFVec3f(new float[0,1.0817,-0.0728]);
HAnimJoint84.skinCoordIndex = new MFInt32(new int[148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167]);
HAnimJoint84.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint84.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint84.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment85 = createNode("HAnimSegment");
HAnimSegment85.name = "l5";
HAnimSegment85.DEF = "boxman_l5";
Transform Transform86 = createNode("Transform");
Transform86.translation = new SFVec3f(new float[0,1.0817,-0.0728]);
Shape Shape87 = createNode("Shape");
Shape87.USE = "SphereYellow";
Transform86.children = new MFNode();

Transform86.children[0] = Shape87;

HAnimSegment85.children = new MFNode();

HAnimSegment85.children[0] = Transform86;

HAnimJoint84.children = new MFNode();

HAnimJoint84.children[0] = HAnimSegment85;

HAnimJoint HAnimJoint88 = createNode("HAnimJoint");
HAnimJoint88.name = "skullbase";
HAnimJoint88.DEF = "boxman_skullbase";
HAnimJoint88.center = new SFVec3f(new float[0,1.644,0.036]);
HAnimJoint88.skinCoordIndex = new MFInt32(new int[168,169,170,171,172,173,174,175]);
HAnimJoint88.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint88.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint88.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment89 = createNode("HAnimSegment");
HAnimSegment89.name = "skull";
HAnimSegment89.DEF = "boxman_skull";
Transform Transform90 = createNode("Transform");
Transform90.translation = new SFVec3f(new float[0,1.644,0.036]);
Shape Shape91 = createNode("Shape");
Shape91.USE = "SphereYellow";
Transform90.children = new MFNode();

Transform90.children[0] = Shape91;

HAnimSegment89.children = new MFNode();

HAnimSegment89.children[0] = Transform90;

HAnimSite HAnimSite92 = createNode("HAnimSite");
HAnimSite92.name = "skull_tip";
HAnimSite92.DEF = "boxman_skull_tip";
HAnimSite92.translation = new SFVec3f(new float[-0.0029,1.7771,0.0274]);
Shape Shape93 = createNode("Shape");
Shape93.USE = "SphereYellow";
HAnimSite92.children = new MFNode();

HAnimSite92.children[0] = Shape93;

HAnimSegment89.children[1] = HAnimSite92;

HAnimJoint88.children = new MFNode();

HAnimJoint88.children[0] = HAnimSegment89;

HAnimJoint84.children[1] = HAnimJoint88;

HAnimJoint HAnimJoint94 = createNode("HAnimJoint");
HAnimJoint94.name = "l_shoulder";
HAnimJoint94.DEF = "boxman_l_shoulder";
HAnimJoint94.center = new SFVec3f(new float[0.1968,1.4642,-0.0265]);
HAnimJoint94.skinCoordIndex = new MFInt32(new int[176,177,178,179,180,181,182,183]);
HAnimJoint94.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint94.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint94.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment95 = createNode("HAnimSegment");
HAnimSegment95.name = "l_upperarm";
HAnimSegment95.DEF = "boxman_l_upperarm";
Transform Transform96 = createNode("Transform");
Transform96.translation = new SFVec3f(new float[0.1968,1.4642,-0.0265]);
Shape Shape97 = createNode("Shape");
Shape97.USE = "SphereYellow";
Transform96.children = new MFNode();

Transform96.children[0] = Shape97;

HAnimSegment95.children = new MFNode();

HAnimSegment95.children[0] = Transform96;

HAnimJoint94.children = new MFNode();

HAnimJoint94.children[0] = HAnimSegment95;

HAnimJoint HAnimJoint98 = createNode("HAnimJoint");
HAnimJoint98.name = "l_elbow";
HAnimJoint98.DEF = "boxman_l_elbow";
HAnimJoint98.center = new SFVec3f(new float[0.1982,1.1622,-0.0557]);
HAnimJoint98.skinCoordIndex = new MFInt32(new int[184,185,186,187,188,189,190,191]);
HAnimJoint98.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint98.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint98.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment99 = createNode("HAnimSegment");
HAnimSegment99.name = "l_forearm";
HAnimSegment99.DEF = "boxman_l_forearm";
Transform Transform100 = createNode("Transform");
Transform100.translation = new SFVec3f(new float[0.1982,1.1622,-0.0557]);
Shape Shape101 = createNode("Shape");
Shape101.USE = "SphereYellow";
Transform100.children = new MFNode();

Transform100.children[0] = Shape101;

HAnimSegment99.children = new MFNode();

HAnimSegment99.children[0] = Transform100;

HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimSegment99;

HAnimJoint HAnimJoint102 = createNode("HAnimJoint");
HAnimJoint102.name = "l_wrist";
HAnimJoint102.DEF = "boxman_l_wrist";
HAnimJoint102.center = new SFVec3f(new float[0.1972,0.8929,-0.069]);
HAnimJoint102.skinCoordIndex = new MFInt32(new int[192,193,194,195,196,197,198,199]);
HAnimJoint102.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint102.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint102.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment103 = createNode("HAnimSegment");
HAnimSegment103.name = "l_hand";
HAnimSegment103.DEF = "boxman_l_hand";
Transform Transform104 = createNode("Transform");
Transform104.translation = new SFVec3f(new float[0.1972,0.8929,-0.069]);
Shape Shape105 = createNode("Shape");
Shape105.USE = "SphereYellow";
Transform104.children = new MFNode();

Transform104.children[0] = Shape105;

HAnimSegment103.children = new MFNode();

HAnimSegment103.children[0] = Transform104;

HAnimSite HAnimSite106 = createNode("HAnimSite");
HAnimSite106.name = "l_hand_tip";
HAnimSite106.DEF = "boxman_l_hand_tip";
HAnimSite106.translation = new SFVec3f(new float[0.1912,0.6976,-0.071]);
Shape Shape107 = createNode("Shape");
Shape107.USE = "SphereRed";
HAnimSite106.children = new MFNode();

HAnimSite106.children[0] = Shape107;

HAnimSegment103.children[1] = HAnimSite106;

HAnimJoint102.children = new MFNode();

HAnimJoint102.children[0] = HAnimSegment103;

HAnimJoint98.children[1] = HAnimJoint102;

HAnimJoint94.children[1] = HAnimJoint98;

HAnimJoint84.children[2] = HAnimJoint94;

HAnimJoint HAnimJoint108 = createNode("HAnimJoint");
HAnimJoint108.name = "r_shoulder";
HAnimJoint108.DEF = "boxman_r_shoulder";
HAnimJoint108.center = new SFVec3f(new float[-0.1968,1.4642,-0.0265]);
HAnimJoint108.skinCoordIndex = new MFInt32(new int[200,201,202,203,204,205,206,207]);
HAnimJoint108.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint108.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint108.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment109 = createNode("HAnimSegment");
HAnimSegment109.name = "r_upperarm";
HAnimSegment109.DEF = "boxman_r_upperarm";
Transform Transform110 = createNode("Transform");
Transform110.translation = new SFVec3f(new float[-0.1968,1.4642,-0.0265]);
Shape Shape111 = createNode("Shape");
Shape111.USE = "SphereYellow";
Transform110.children = new MFNode();

Transform110.children[0] = Shape111;

HAnimSegment109.children = new MFNode();

HAnimSegment109.children[0] = Transform110;

HAnimJoint108.children = new MFNode();

HAnimJoint108.children[0] = HAnimSegment109;

HAnimJoint HAnimJoint112 = createNode("HAnimJoint");
HAnimJoint112.name = "r_elbow";
HAnimJoint112.DEF = "boxman_r_elbow";
HAnimJoint112.center = new SFVec3f(new float[-0.1982,1.1622,-0.0557]);
HAnimJoint112.skinCoordIndex = new MFInt32(new int[208,209,210,211,212,213,214,215]);
HAnimJoint112.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint112.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint112.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment113 = createNode("HAnimSegment");
HAnimSegment113.name = "r_forearm";
HAnimSegment113.DEF = "boxman_r_forearm";
Transform Transform114 = createNode("Transform");
Transform114.translation = new SFVec3f(new float[-0.1982,1.1622,-0.0557]);
Shape Shape115 = createNode("Shape");
Shape115.USE = "SphereYellow";
Transform114.children = new MFNode();

Transform114.children[0] = Shape115;

HAnimSegment113.children = new MFNode();

HAnimSegment113.children[0] = Transform114;

HAnimJoint112.children = new MFNode();

HAnimJoint112.children[0] = HAnimSegment113;

HAnimJoint HAnimJoint116 = createNode("HAnimJoint");
HAnimJoint116.name = "r_wrist";
HAnimJoint116.DEF = "boxman_r_wrist";
HAnimJoint116.center = new SFVec3f(new float[-0.1972,0.8929,-0.069]);
HAnimJoint116.skinCoordIndex = new MFInt32(new int[216,217,218,219,220,221,222,223]);
HAnimJoint116.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint116.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint116.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment117 = createNode("HAnimSegment");
HAnimSegment117.name = "r_hand";
HAnimSegment117.DEF = "boxman_r_hand";
Transform Transform118 = createNode("Transform");
Transform118.translation = new SFVec3f(new float[-0.1972,0.8929,-0.069]);
Shape Shape119 = createNode("Shape");
Shape119.USE = "SphereYellow";
Transform118.children = new MFNode();

Transform118.children[0] = Shape119;

HAnimSegment117.children = new MFNode();

HAnimSegment117.children[0] = Transform118;

HAnimSite HAnimSite120 = createNode("HAnimSite");
HAnimSite120.name = "r_hand_tip";
HAnimSite120.DEF = "boxman_r_hand_tip";
HAnimSite120.translation = new SFVec3f(new float[-0.1912,0.6976,-0.071]);
Shape Shape121 = createNode("Shape");
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
Coordinate Coordinate122 = createNode("Coordinate");
Coordinate122.DEF = "SKINCOORD";
Coordinate122.point = new MFVec3f(new float[-0.05,1,0.05,0.05,1,0.05,0.03,0.97,-0.1,-0.03,0.97,-0.1,0.03,0.94,-0.075,-0.03,0.94,-0.075,0,0.92,0,0,0.94,0.03,-0.12,1.06,0.05,0.12,1.06,0.05,0.12,1.06,-0.1,-0.12,1.06,-0.1,0.0456,0.9364,0.05,0.1456,0.9364,0.05,0.1456,0.9364,-0.05,0.0456,0.9364,-0.05,0.0456,0.9,0.05,0.1456,0.9,0.05,0.1456,0.9,-0.05,0.0456,0.9,-0.05,0.0456,0.8,0.05,0.1456,0.8,0.05,0.1456,0.8,-0.05,0.0456,0.8,-0.05,0.0456,0.7,0.05,0.1456,0.7,0.05,0.1456,0.7,-0.05,0.0456,0.7,-0.05,0.0456,0.6,0.05,0.1456,0.6,0.05,0.1456,0.6,-0.05,0.0456,0.6,-0.05,0.0456,0.55,0.05,0.1456,0.55,0.05,0.1456,0.55,-0.05,0.0456,0.55,-0.05,0.0456,0.52,0.05,0.1456,0.52,0.05,0.1456,0.52,-0.05,0.0456,0.52,-0.05,0.0456,0.5,0.05,0.1456,0.5,0.05,0.1456,0.5,-0.05,0.0456,0.5,-0.05,0.0454,0.43,0.045,0.1454,0.43,0.045,0.1454,0.43,-0.055,0.0454,0.43,-0.055,0.0452,0.36,0.04,0.1452,0.36,0.04,0.1452,0.36,-0.06,0.0452,0.36,-0.06,0.045,0.29,0.035,0.145,0.29,0.035,0.145,0.29,-0.065,0.045,0.29,-0.065,0.0448,0.21,0.03,0.1448,0.21,0.03,0.1448,0.21,-0.07,0.0448,0.21,-0.07,0.0446,0.1262,0.025,0.1446,0.1262,0.025,0.1446,0.1262,-0.075,0.0446,0.1262,-0.075,0.0446,0.0762,0.025,0.1446,0.0762,0.025,0.1446,0,-0.075,0.0446,0,-0.075,0.0446,0.0562,0.057,0.1446,0.0562,0.057,0.1446,0,0.057,0.0446,0,0.057,0.0446,0.0562,0.087,0.1446,0.0562,0.087,0.1446,0,0.087,0.0446,0,0.087,0.0446,0.0562,0.1924,0.1446,0.0562,0.1924,0.1446,0,0.1924,0.0446,0,0.1924,-0.0456,0.9364,0.05,-0.1456,0.9364,0.05,-0.1456,0.9364,-0.05,-0.0456,0.9364,-0.05,-0.0456,0.9,0.05,-0.1456,0.9,0.05,-0.1456,0.9,-0.05,-0.0456,0.9,-0.05,-0.0456,0.8,0.05,-0.1456,0.8,0.05,-0.1456,0.8,-0.05,-0.0456,0.8,-0.05,-0.0456,0.7,0.05,-0.1456,0.7,0.05,-0.1456,0.7,-0.05,-0.0456,0.7,-0.05,-0.0456,0.6,0.05,-0.1456,0.6,0.05,-0.1456,0.6,-0.05,-0.0456,0.6,-0.05,-0.0456,0.55,0.05,-0.1456,0.55,0.05,-0.1456,0.55,-0.05,-0.0456,0.55,-0.05,-0.0456,0.52,0.05,-0.1456,0.52,0.05,-0.1456,0.52,-0.05,-0.0456,0.52,-0.05,-0.0456,0.5,0.05,-0.1456,0.5,0.05,-0.1456,0.5,-0.05,-0.0456,0.5,-0.05,-0.0454,0.43,0.045,-0.1454,0.43,0.045,-0.1454,0.43,-0.055,-0.0454,0.43,-0.055,-0.0452,0.36,0.04,-0.1452,0.36,0.04,-0.1452,0.36,-0.06,-0.0452,0.36,-0.06,-0.045,0.29,0.035,-0.145,0.29,0.035,-0.145,0.29,-0.065,-0.045,0.29,-0.065,-0.0448,0.21,0.03,-0.1448,0.21,0.03,-0.1448,0.21,-0.07,-0.0448,0.21,-0.07,-0.0446,0.1262,0.025,-0.1446,0.1262,0.025,-0.1446,0.1262,-0.075,-0.0446,0.1262,-0.075,-0.0446,0.0762,0.025,-0.1446,0.0762,0.025,-0.1446,0,-0.075,-0.0446,0,-0.075,-0.0446,0.0562,0.057,-0.1446,0.0562,0.057,-0.1446,0,0.057,-0.0446,0,0.057,-0.0446,0.0562,0.087,-0.1446,0.0562,0.087,-0.1446,0,0.087,-0.0446,0,0.087,-0.0446,0.0562,0.1924,-0.1446,0.0562,0.1924,-0.1446,0,0.1924,-0.0446,0,0.1924,-0.12,1.1,0.05,0.12,1.1,0.05,0.12,1.1,-0.1,-0.12,1.1,-0.1,-0.14,1.42,0.045,0.14,1.42,0.045,0.14,1.42,-0.09,-0.14,1.42,-0.09,-0.24,1.52,0.035,0.24,1.52,0.035,0.24,1.52,-0.09,-0.24,1.52,-0.09,-0.05,1.56,0.03,0.05,1.56,0.03,0.05,1.56,-0.06,-0.05,1.56,-0.06,-0.05,1.6,0.06,0.05,1.6,0.06,0.05,1.62,-0.03,-0.05,1.62,-0.03,-0.07,1.777,0.13,0.07,1.777,0.13,0.07,1.777,-0.03,-0.07,1.777,-0.03,-0.07,1.6,0.13,0.07,1.6,0.13,0.07,1.66,-0.03,-0.07,1.66,-0.03,0.16,1.42,0.015,0.24,1.5,0.015,0.24,1.5,-0.075,0.16,1.42,-0.075,0.17,1.18,-0.025,0.23,1.18,-0.025,0.23,1.18,-0.085,0.17,1.18,-0.085,0.17,1.14,-0.025,0.23,1.14,-0.025,0.23,1.14,-0.085,0.17,1.14,-0.085,0.18,0.91,-0.05,0.22,0.91,-0.05,0.22,0.91,-0.09,0.18,0.91,-0.09,0.18,0.87,-0.02,0.22,0.87,-0.02,0.22,0.87,-0.1,0.18,0.87,-0.1,0.18,0.6976,-0.02,0.22,0.6976,-0.02,0.22,0.6976,-0.1,0.18,0.6976,-0.1,-0.16,1.42,0.015,-0.24,1.5,0.015,-0.24,1.5,-0.075,-0.16,1.42,-0.075,-0.17,1.18,-0.025,-0.23,1.18,-0.025,-0.23,1.18,-0.085,-0.17,1.18,-0.085,-0.17,1.14,-0.025,-0.23,1.14,-0.025,-0.23,1.14,-0.085,-0.17,1.14,-0.085,-0.18,0.91,-0.05,-0.22,0.91,-0.05,-0.22,0.91,-0.09,-0.18,0.91,-0.09,-0.18,0.87,-0.02,-0.22,0.87,-0.02,-0.22,0.87,-0.1,-0.18,0.87,-0.1,-0.18,0.6976,-0.02,-0.22,0.6976,-0.02,-0.22,0.6976,-0.1,-0.18,0.6976,-0.1]);
HAnimHumanoid37.skinCoord = Coordinate122;

Group Group123 = createNode("Group");
Shape Shape124 = createNode("Shape");
Shape124.DEF = "TrouserSkin";
Appearance Appearance125 = createNode("Appearance");
Material Material126 = createNode("Material");
Material126.diffuseColor = new SFColor(new float[0,0,1]);
Material126.transparency = 0.5;
Appearance125.material = Material126;

Shape124.appearance = Appearance125;

//# 0: sacrum (8) # 1: l_hip joint (8) # 2: r_hip joint (8) # 3: l_thigh (48) # 4: l_knee joint (8) # 5: l_calf (40) # 10: r_thigh (48) # 11: r_knee joint (8) # 12: r_calf (40)
IndexedFaceSet IndexedFaceSet127 = createNode("IndexedFaceSet");
IndexedFaceSet127.coordIndex = new MFInt32(new int[0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1]);
Coordinate Coordinate128 = createNode("Coordinate");
Coordinate128.USE = "SKINCOORD";
IndexedFaceSet127.coord = Coordinate128;

Shape124.geometry = IndexedFaceSet127;

Group123.children = new MFNode();

Group123.children[0] = Shape124;

Shape Shape129 = createNode("Shape");
Shape129.DEF = "ShoeSkin";
Appearance Appearance130 = createNode("Appearance");
Material Material131 = createNode("Material");
Material131.diffuseColor = new SFColor(new float[0,0,0]);
Material131.transparency = 0.5;
Appearance130.material = Material131;

Shape129.appearance = Appearance130;

//# 6: l_ankle joint (8) # 7: l_hindfoot (8) # 8: l_midtarsal joint (8) # 9: l_middistal (10) # 13: r_ankle joint (8) # 14: r_hindfoot (8) # 15: r_midtarsal joint (8) # 16: r_middistal (10)
IndexedFaceSet IndexedFaceSet132 = createNode("IndexedFaceSet");
IndexedFaceSet132.coordIndex = new MFInt32(new int[60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1]);
Coordinate Coordinate133 = createNode("Coordinate");
Coordinate133.USE = "SKINCOORD";
IndexedFaceSet132.coord = Coordinate133;

Shape129.geometry = IndexedFaceSet132;

Group123.children[1] = Shape129;

Shape Shape134 = createNode("Shape");
Shape134.DEF = "ShirtSkin";
Appearance Appearance135 = createNode("Appearance");
Material Material136 = createNode("Material");
Material136.diffuseColor = new SFColor(new float[1,1,0]);
Material136.transparency = 0.5;
Appearance135.material = Material136;

Shape134.appearance = Appearance135;

//# 17: vl5_joint (8) # 18: l5 (28) # 21: l_shoulder joint (8) # 22: l_upperarm (8) # 23: l_elbow joint (8) # 24: l_forearm (8) # 27: r_shoulder joint (8) # 28: r_upperarm (8) # 29: r_elbow joint (8) # 30: r_forearm (8)
IndexedFaceSet IndexedFaceSet137 = createNode("IndexedFaceSet");
IndexedFaceSet137.coordIndex = new MFInt32(new int[148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1]);
Coordinate Coordinate138 = createNode("Coordinate");
Coordinate138.USE = "SKINCOORD";
IndexedFaceSet137.coord = Coordinate138;

Shape134.geometry = IndexedFaceSet137;

Group123.children[2] = Shape134;

Shape Shape139 = createNode("Shape");
Shape139.DEF = "HeadHandsFleshToneSkin";
Appearance Appearance140 = createNode("Appearance");
Material Material141 = createNode("Material");
Material141.diffuseColor = new SFColor(new float[1,0.75,0.75]);
Material141.transparency = 0.5;
Appearance140.material = Material141;

Shape139.appearance = Appearance140;

//# 19: skullbase joint (8) # 20: skull (10) # 25: l_wrist joint (8) # 26: l_hand (10) # 31: r_wrist joint (8) # 32: r_hand (10)
IndexedFaceSet IndexedFaceSet142 = createNode("IndexedFaceSet");
IndexedFaceSet142.coordIndex = new MFInt32(new int[172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
Coordinate Coordinate143 = createNode("Coordinate");
Coordinate143.USE = "SKINCOORD";
IndexedFaceSet142.coord = Coordinate143;

Shape139.geometry = IndexedFaceSet142;

Group123.children[3] = Shape139;

Shape Shape144 = createNode("Shape");
Shape144.DEF = "SkinLines";
Appearance Appearance145 = createNode("Appearance");
Material Material146 = createNode("Material");
Material146.diffuseColor = new SFColor(new float[0,0,0]);
Appearance145.material = Material146;

Shape144.appearance = Appearance145;

//Combined set of prior IFS coordIndex values
IndexedLineSet IndexedLineSet147 = createNode("IndexedLineSet");
IndexedLineSet147.coordIndex = new MFInt32(new int[0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
Coordinate Coordinate148 = createNode("Coordinate");
Coordinate148.USE = "SKINCOORD";
IndexedLineSet147.coord = Coordinate148;

Shape144.geometry = IndexedLineSet147;

Group123.children[4] = Shape144;

HAnimHumanoid37.skin[1] = Group123;

HAnimSite HAnimSite149 = createNode("HAnimSite");
HAnimSite149.name = "BoxMan_view";
HAnimSite149.DEF = "boxman_BoxMan_view";
Viewpoint Viewpoint150 = createNode("Viewpoint");
Viewpoint150.DEF = "Inclined_View";
Viewpoint150.description = "Inclined View";
Viewpoint150.orientation = new SFRotation(new float[0,1,0,0.78]);
Viewpoint150.position = new SFVec3f(new float[2,0.9,2]);
HAnimSite149.children = new MFNode();

HAnimSite149.children[0] = Viewpoint150;

Viewpoint Viewpoint151 = createNode("Viewpoint");
Viewpoint151.DEF = "Front_View";
Viewpoint151.description = "Front View";
Viewpoint151.position = new SFVec3f(new float[0,1,3]);
HAnimSite149.children[1] = Viewpoint151;

Viewpoint Viewpoint152 = createNode("Viewpoint");
Viewpoint152.DEF = "Best_View";
Viewpoint152.description = "Right-side View";
Viewpoint152.orientation = new SFRotation(new float[0,1,0,-1.57]);
Viewpoint152.position = new SFVec3f(new float[-3,1,0]);
HAnimSite149.children[2] = Viewpoint152;

Viewpoint Viewpoint153 = createNode("Viewpoint");
Viewpoint153.DEF = "Side_View";
Viewpoint153.description = "Left-side View";
Viewpoint153.orientation = new SFRotation(new float[0,1,0,1.57]);
Viewpoint153.position = new SFVec3f(new float[3,1,0]);
HAnimSite149.children[3] = Viewpoint153;

Viewpoint Viewpoint154 = createNode("Viewpoint");
Viewpoint154.DEF = "Top_View";
Viewpoint154.description = "Top View";
Viewpoint154.orientation = new SFRotation(new float[1,0,0,-1.57]);
Viewpoint154.position = new SFVec3f(new float[0,3,0]);
HAnimSite149.children[4] = Viewpoint154;

HAnimHumanoid37.viewpoints[2] = HAnimSite149;

HAnimJoint HAnimJoint155 = createNode("HAnimJoint");
HAnimJoint155.USE = "boxman_humanoid_root";
HAnimHumanoid37.joints[3] = HAnimJoint155;

HAnimJoint HAnimJoint156 = createNode("HAnimJoint");
HAnimJoint156.USE = "boxman_skullbase";
HAnimHumanoid37.joints[4] = HAnimJoint156;

HAnimJoint HAnimJoint157 = createNode("HAnimJoint");
HAnimJoint157.USE = "boxman_vl5";
HAnimHumanoid37.joints[5] = HAnimJoint157;

HAnimJoint HAnimJoint158 = createNode("HAnimJoint");
HAnimJoint158.USE = "boxman_r_ankle";
HAnimHumanoid37.joints[6] = HAnimJoint158;

HAnimJoint HAnimJoint159 = createNode("HAnimJoint");
HAnimJoint159.USE = "boxman_l_ankle";
HAnimHumanoid37.joints[7] = HAnimJoint159;

HAnimJoint HAnimJoint160 = createNode("HAnimJoint");
HAnimJoint160.USE = "boxman_r_elbow";
HAnimHumanoid37.joints[8] = HAnimJoint160;

HAnimJoint HAnimJoint161 = createNode("HAnimJoint");
HAnimJoint161.USE = "boxman_l_elbow";
HAnimHumanoid37.joints[9] = HAnimJoint161;

HAnimJoint HAnimJoint162 = createNode("HAnimJoint");
HAnimJoint162.USE = "boxman_r_hip";
HAnimHumanoid37.joints[10] = HAnimJoint162;

HAnimJoint HAnimJoint163 = createNode("HAnimJoint");
HAnimJoint163.USE = "boxman_l_hip";
HAnimHumanoid37.joints[11] = HAnimJoint163;

HAnimJoint HAnimJoint164 = createNode("HAnimJoint");
HAnimJoint164.USE = "boxman_r_knee";
HAnimHumanoid37.joints[12] = HAnimJoint164;

HAnimJoint HAnimJoint165 = createNode("HAnimJoint");
HAnimJoint165.USE = "boxman_l_knee";
HAnimHumanoid37.joints[13] = HAnimJoint165;

HAnimJoint HAnimJoint166 = createNode("HAnimJoint");
HAnimJoint166.USE = "boxman_r_midtarsal";
HAnimHumanoid37.joints[14] = HAnimJoint166;

HAnimJoint HAnimJoint167 = createNode("HAnimJoint");
HAnimJoint167.USE = "boxman_l_midtarsal";
HAnimHumanoid37.joints[15] = HAnimJoint167;

HAnimJoint HAnimJoint168 = createNode("HAnimJoint");
HAnimJoint168.USE = "boxman_r_shoulder";
HAnimHumanoid37.joints[16] = HAnimJoint168;

HAnimJoint HAnimJoint169 = createNode("HAnimJoint");
HAnimJoint169.USE = "boxman_l_shoulder";
HAnimHumanoid37.joints[17] = HAnimJoint169;

HAnimJoint HAnimJoint170 = createNode("HAnimJoint");
HAnimJoint170.USE = "boxman_r_wrist";
HAnimHumanoid37.joints[18] = HAnimJoint170;

HAnimJoint HAnimJoint171 = createNode("HAnimJoint");
HAnimJoint171.USE = "boxman_l_wrist";
HAnimHumanoid37.joints[19] = HAnimJoint171;

HAnimSegment HAnimSegment172 = createNode("HAnimSegment");
HAnimSegment172.USE = "boxman_sacrum";
HAnimHumanoid37.segments[20] = HAnimSegment172;

HAnimSegment HAnimSegment173 = createNode("HAnimSegment");
HAnimSegment173.USE = "boxman_l5";
HAnimHumanoid37.segments[21] = HAnimSegment173;

HAnimSegment HAnimSegment174 = createNode("HAnimSegment");
HAnimSegment174.USE = "boxman_skull";
HAnimHumanoid37.segments[22] = HAnimSegment174;

HAnimSegment HAnimSegment175 = createNode("HAnimSegment");
HAnimSegment175.USE = "boxman_l_calf";
HAnimHumanoid37.segments[23] = HAnimSegment175;

HAnimSegment HAnimSegment176 = createNode("HAnimSegment");
HAnimSegment176.USE = "boxman_r_calf";
HAnimHumanoid37.segments[24] = HAnimSegment176;

HAnimSegment HAnimSegment177 = createNode("HAnimSegment");
HAnimSegment177.USE = "boxman_l_forearm";
HAnimHumanoid37.segments[25] = HAnimSegment177;

HAnimSegment HAnimSegment178 = createNode("HAnimSegment");
HAnimSegment178.USE = "boxman_r_forearm";
HAnimHumanoid37.segments[26] = HAnimSegment178;

HAnimSegment HAnimSegment179 = createNode("HAnimSegment");
HAnimSegment179.USE = "boxman_l_hand";
HAnimHumanoid37.segments[27] = HAnimSegment179;

HAnimSegment HAnimSegment180 = createNode("HAnimSegment");
HAnimSegment180.USE = "boxman_r_hand";
HAnimHumanoid37.segments[28] = HAnimSegment180;

HAnimSegment HAnimSegment181 = createNode("HAnimSegment");
HAnimSegment181.USE = "boxman_l_hindfoot";
HAnimHumanoid37.segments[29] = HAnimSegment181;

HAnimSegment HAnimSegment182 = createNode("HAnimSegment");
HAnimSegment182.USE = "boxman_r_hindfoot";
HAnimHumanoid37.segments[30] = HAnimSegment182;

HAnimSegment HAnimSegment183 = createNode("HAnimSegment");
HAnimSegment183.USE = "boxman_l_middistal";
HAnimHumanoid37.segments[31] = HAnimSegment183;

HAnimSegment HAnimSegment184 = createNode("HAnimSegment");
HAnimSegment184.USE = "boxman_r_middistal";
HAnimHumanoid37.segments[32] = HAnimSegment184;

HAnimSegment HAnimSegment185 = createNode("HAnimSegment");
HAnimSegment185.USE = "boxman_l_thigh";
HAnimHumanoid37.segments[33] = HAnimSegment185;

HAnimSegment HAnimSegment186 = createNode("HAnimSegment");
HAnimSegment186.USE = "boxman_r_thigh";
HAnimHumanoid37.segments[34] = HAnimSegment186;

HAnimSegment HAnimSegment187 = createNode("HAnimSegment");
HAnimSegment187.USE = "boxman_l_upperarm";
HAnimHumanoid37.segments[35] = HAnimSegment187;

HAnimSegment HAnimSegment188 = createNode("HAnimSegment");
HAnimSegment188.USE = "boxman_r_upperarm";
HAnimHumanoid37.segments[36] = HAnimSegment188;

HAnimSite HAnimSite189 = createNode("HAnimSite");
HAnimSite189.USE = "boxman_skull_tip";
HAnimHumanoid37.viewpoints[37] = HAnimSite189;

HAnimSite HAnimSite190 = createNode("HAnimSite");
HAnimSite190.USE = "boxman_l_hand_tip";
HAnimHumanoid37.viewpoints[38] = HAnimSite190;

HAnimSite HAnimSite191 = createNode("HAnimSite");
HAnimSite191.USE = "boxman_r_hand_tip";
HAnimHumanoid37.viewpoints[39] = HAnimSite191;

HAnimSite HAnimSite192 = createNode("HAnimSite");
HAnimSite192.USE = "boxman_l_middistal_tip";
HAnimHumanoid37.viewpoints[40] = HAnimSite192;

HAnimSite HAnimSite193 = createNode("HAnimSite");
HAnimSite193.USE = "boxman_r_middistal_tip";
HAnimHumanoid37.viewpoints[41] = HAnimSite193;

children[2] = HAnimHumanoid37;

Group Group194 = createNode("Group");
Group194.DEF = "StopAnimation";
TimeSensor TimeSensor195 = createNode("TimeSensor");
TimeSensor195.DEF = "StopTimer";
TimeSensor195.cycleInterval = 5.73;
TimeSensor195.loop = True;
Group194.children = new MFNode();

Group194.children[0] = TimeSensor195;

PositionInterpolator PositionInterpolator196 = createNode("PositionInterpolator");
PositionInterpolator196.DEF = "Stop_humanoid_root_TranslationInterpolator";
PositionInterpolator196.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator196.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group194.children[1] = PositionInterpolator196;

OrientationInterpolator OrientationInterpolator197 = createNode("OrientationInterpolator");
OrientationInterpolator197.DEF = "Stop_humanoid_root_RotationInterpolator";
OrientationInterpolator197.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator197.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[2] = OrientationInterpolator197;

OrientationInterpolator OrientationInterpolator198 = createNode("OrientationInterpolator");
OrientationInterpolator198.DEF = "Stop_sacroiliac_RotationInterpolator";
OrientationInterpolator198.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator198.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[3] = OrientationInterpolator198;

OrientationInterpolator OrientationInterpolator199 = createNode("OrientationInterpolator");
OrientationInterpolator199.DEF = "Stop_l_hip_RotationInterpolator";
OrientationInterpolator199.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator199.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[4] = OrientationInterpolator199;

OrientationInterpolator OrientationInterpolator200 = createNode("OrientationInterpolator");
OrientationInterpolator200.DEF = "Stop_l_knee_RotationInterpolator";
OrientationInterpolator200.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator200.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[5] = OrientationInterpolator200;

OrientationInterpolator OrientationInterpolator201 = createNode("OrientationInterpolator");
OrientationInterpolator201.DEF = "Stop_l_ankle_RotationInterpolator";
OrientationInterpolator201.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator201.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[6] = OrientationInterpolator201;

OrientationInterpolator OrientationInterpolator202 = createNode("OrientationInterpolator");
OrientationInterpolator202.DEF = "Stop_l_subtalar_RotationInterpolator";
OrientationInterpolator202.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator202.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[7] = OrientationInterpolator202;

OrientationInterpolator OrientationInterpolator203 = createNode("OrientationInterpolator");
OrientationInterpolator203.DEF = "Stop_l_midtarsal_RotationInterpolator";
OrientationInterpolator203.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator203.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[8] = OrientationInterpolator203;

OrientationInterpolator OrientationInterpolator204 = createNode("OrientationInterpolator");
OrientationInterpolator204.DEF = "Stop_l_metatarsal_RotationInterpolator";
OrientationInterpolator204.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator204.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[9] = OrientationInterpolator204;

OrientationInterpolator OrientationInterpolator205 = createNode("OrientationInterpolator");
OrientationInterpolator205.DEF = "Stop_r_hip_RotationInterpolator";
OrientationInterpolator205.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator205.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[10] = OrientationInterpolator205;

OrientationInterpolator OrientationInterpolator206 = createNode("OrientationInterpolator");
OrientationInterpolator206.DEF = "Stop_r_knee_RotationInterpolator";
OrientationInterpolator206.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator206.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[11] = OrientationInterpolator206;

OrientationInterpolator OrientationInterpolator207 = createNode("OrientationInterpolator");
OrientationInterpolator207.DEF = "Stop_r_ankle_RotationInterpolator";
OrientationInterpolator207.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator207.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[12] = OrientationInterpolator207;

OrientationInterpolator OrientationInterpolator208 = createNode("OrientationInterpolator");
OrientationInterpolator208.DEF = "Stop_r_subtalar_RotationInterpolator";
OrientationInterpolator208.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator208.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[13] = OrientationInterpolator208;

OrientationInterpolator OrientationInterpolator209 = createNode("OrientationInterpolator");
OrientationInterpolator209.DEF = "Stop_r_midtarsal_RotationInterpolator";
OrientationInterpolator209.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator209.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[14] = OrientationInterpolator209;

OrientationInterpolator OrientationInterpolator210 = createNode("OrientationInterpolator");
OrientationInterpolator210.DEF = "Stop_r_metatarsal_RotationInterpolator";
OrientationInterpolator210.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator210.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[15] = OrientationInterpolator210;

OrientationInterpolator OrientationInterpolator211 = createNode("OrientationInterpolator");
OrientationInterpolator211.DEF = "Stop_vl5_RotationInterpolator";
OrientationInterpolator211.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator211.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[16] = OrientationInterpolator211;

OrientationInterpolator OrientationInterpolator212 = createNode("OrientationInterpolator");
OrientationInterpolator212.DEF = "Stop_vl4_RotationInterpolator";
OrientationInterpolator212.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator212.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[17] = OrientationInterpolator212;

OrientationInterpolator OrientationInterpolator213 = createNode("OrientationInterpolator");
OrientationInterpolator213.DEF = "Stop_vl3_RotationInterpolator";
OrientationInterpolator213.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator213.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[18] = OrientationInterpolator213;

OrientationInterpolator OrientationInterpolator214 = createNode("OrientationInterpolator");
OrientationInterpolator214.DEF = "Stop_vl2_RotationInterpolator";
OrientationInterpolator214.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator214.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[19] = OrientationInterpolator214;

OrientationInterpolator OrientationInterpolator215 = createNode("OrientationInterpolator");
OrientationInterpolator215.DEF = "Stop_vl1_RotationInterpolator";
OrientationInterpolator215.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator215.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[20] = OrientationInterpolator215;

OrientationInterpolator OrientationInterpolator216 = createNode("OrientationInterpolator");
OrientationInterpolator216.DEF = "Stop_vt12_RotationInterpolator";
OrientationInterpolator216.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator216.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[21] = OrientationInterpolator216;

OrientationInterpolator OrientationInterpolator217 = createNode("OrientationInterpolator");
OrientationInterpolator217.DEF = "Stop_vt11_RotationInterpolator";
OrientationInterpolator217.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator217.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[22] = OrientationInterpolator217;

OrientationInterpolator OrientationInterpolator218 = createNode("OrientationInterpolator");
OrientationInterpolator218.DEF = "Stop_vt10_RotationInterpolator";
OrientationInterpolator218.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator218.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[23] = OrientationInterpolator218;

OrientationInterpolator OrientationInterpolator219 = createNode("OrientationInterpolator");
OrientationInterpolator219.DEF = "Stop_vt9_RotationInterpolator";
OrientationInterpolator219.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator219.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[24] = OrientationInterpolator219;

OrientationInterpolator OrientationInterpolator220 = createNode("OrientationInterpolator");
OrientationInterpolator220.DEF = "Stop_vt8_RotationInterpolator";
OrientationInterpolator220.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator220.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[25] = OrientationInterpolator220;

OrientationInterpolator OrientationInterpolator221 = createNode("OrientationInterpolator");
OrientationInterpolator221.DEF = "Stop_vt7_RotationInterpolator";
OrientationInterpolator221.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator221.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[26] = OrientationInterpolator221;

OrientationInterpolator OrientationInterpolator222 = createNode("OrientationInterpolator");
OrientationInterpolator222.DEF = "Stop_vt6_RotationInterpolator";
OrientationInterpolator222.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator222.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[27] = OrientationInterpolator222;

OrientationInterpolator OrientationInterpolator223 = createNode("OrientationInterpolator");
OrientationInterpolator223.DEF = "Stop_vt5_RotationInterpolator";
OrientationInterpolator223.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator223.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[28] = OrientationInterpolator223;

OrientationInterpolator OrientationInterpolator224 = createNode("OrientationInterpolator");
OrientationInterpolator224.DEF = "Stop_vt4_RotationInterpolator";
OrientationInterpolator224.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator224.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[29] = OrientationInterpolator224;

OrientationInterpolator OrientationInterpolator225 = createNode("OrientationInterpolator");
OrientationInterpolator225.DEF = "Stop_vt3_RotationInterpolator";
OrientationInterpolator225.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator225.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[30] = OrientationInterpolator225;

OrientationInterpolator OrientationInterpolator226 = createNode("OrientationInterpolator");
OrientationInterpolator226.DEF = "Stop_vt2_RotationInterpolator";
OrientationInterpolator226.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator226.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[31] = OrientationInterpolator226;

OrientationInterpolator OrientationInterpolator227 = createNode("OrientationInterpolator");
OrientationInterpolator227.DEF = "Stop_vt1_RotationInterpolator";
OrientationInterpolator227.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator227.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[32] = OrientationInterpolator227;

OrientationInterpolator OrientationInterpolator228 = createNode("OrientationInterpolator");
OrientationInterpolator228.DEF = "Stop_vc7_RotationInterpolator";
OrientationInterpolator228.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator228.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[33] = OrientationInterpolator228;

OrientationInterpolator OrientationInterpolator229 = createNode("OrientationInterpolator");
OrientationInterpolator229.DEF = "Stop_vc6_RotationInterpolator";
OrientationInterpolator229.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator229.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[34] = OrientationInterpolator229;

OrientationInterpolator OrientationInterpolator230 = createNode("OrientationInterpolator");
OrientationInterpolator230.DEF = "Stop_vc5_RotationInterpolator";
OrientationInterpolator230.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator230.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[35] = OrientationInterpolator230;

OrientationInterpolator OrientationInterpolator231 = createNode("OrientationInterpolator");
OrientationInterpolator231.DEF = "Stop_vc4_RotationInterpolator";
OrientationInterpolator231.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator231.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[36] = OrientationInterpolator231;

OrientationInterpolator OrientationInterpolator232 = createNode("OrientationInterpolator");
OrientationInterpolator232.DEF = "Stop_vc3_RotationInterpolator";
OrientationInterpolator232.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator232.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[37] = OrientationInterpolator232;

OrientationInterpolator OrientationInterpolator233 = createNode("OrientationInterpolator");
OrientationInterpolator233.DEF = "Stop_vc2_RotationInterpolator";
OrientationInterpolator233.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator233.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[38] = OrientationInterpolator233;

OrientationInterpolator OrientationInterpolator234 = createNode("OrientationInterpolator");
OrientationInterpolator234.DEF = "Stop_vc1_RotationInterpolator";
OrientationInterpolator234.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator234.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[39] = OrientationInterpolator234;

OrientationInterpolator OrientationInterpolator235 = createNode("OrientationInterpolator");
OrientationInterpolator235.DEF = "Stop_skullbase_RotationInterpolator";
OrientationInterpolator235.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator235.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[40] = OrientationInterpolator235;

OrientationInterpolator OrientationInterpolator236 = createNode("OrientationInterpolator");
OrientationInterpolator236.DEF = "Stop_l_eyeball_joint_RotationInterpolator";
OrientationInterpolator236.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator236.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[41] = OrientationInterpolator236;

OrientationInterpolator OrientationInterpolator237 = createNode("OrientationInterpolator");
OrientationInterpolator237.DEF = "Stop_r_eyeball_joint_RotationInterpolator";
OrientationInterpolator237.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator237.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[42] = OrientationInterpolator237;

OrientationInterpolator OrientationInterpolator238 = createNode("OrientationInterpolator");
OrientationInterpolator238.DEF = "Stop_l_sternoclavicular_RotationInterpolator";
OrientationInterpolator238.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator238.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[43] = OrientationInterpolator238;

OrientationInterpolator OrientationInterpolator239 = createNode("OrientationInterpolator");
OrientationInterpolator239.DEF = "Stop_l_acromioclavicular_RotationInterpolator";
OrientationInterpolator239.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator239.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[44] = OrientationInterpolator239;

OrientationInterpolator OrientationInterpolator240 = createNode("OrientationInterpolator");
OrientationInterpolator240.DEF = "Stop_l_shoulder_RotationInterpolator";
OrientationInterpolator240.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator240.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[45] = OrientationInterpolator240;

OrientationInterpolator OrientationInterpolator241 = createNode("OrientationInterpolator");
OrientationInterpolator241.DEF = "Stop_l_elbow_RotationInterpolator";
OrientationInterpolator241.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator241.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[46] = OrientationInterpolator241;

OrientationInterpolator OrientationInterpolator242 = createNode("OrientationInterpolator");
OrientationInterpolator242.DEF = "Stop_l_wrist_RotationInterpolator";
OrientationInterpolator242.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator242.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[47] = OrientationInterpolator242;

OrientationInterpolator OrientationInterpolator243 = createNode("OrientationInterpolator");
OrientationInterpolator243.DEF = "Stop_l_thumb1_RotationInterpolator";
OrientationInterpolator243.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator243.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[48] = OrientationInterpolator243;

OrientationInterpolator OrientationInterpolator244 = createNode("OrientationInterpolator");
OrientationInterpolator244.DEF = "Stop_l_thumb2_RotationInterpolator";
OrientationInterpolator244.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator244.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[49] = OrientationInterpolator244;

OrientationInterpolator OrientationInterpolator245 = createNode("OrientationInterpolator");
OrientationInterpolator245.DEF = "Stop_l_thumb3_RotationInterpolator";
OrientationInterpolator245.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator245.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[50] = OrientationInterpolator245;

OrientationInterpolator OrientationInterpolator246 = createNode("OrientationInterpolator");
OrientationInterpolator246.DEF = "Stop_l_index0_RotationInterpolator";
OrientationInterpolator246.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator246.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[51] = OrientationInterpolator246;

OrientationInterpolator OrientationInterpolator247 = createNode("OrientationInterpolator");
OrientationInterpolator247.DEF = "Stop_l_index1_RotationInterpolator";
OrientationInterpolator247.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator247.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[52] = OrientationInterpolator247;

OrientationInterpolator OrientationInterpolator248 = createNode("OrientationInterpolator");
OrientationInterpolator248.DEF = "Stop_l_index2_RotationInterpolator";
OrientationInterpolator248.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator248.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[53] = OrientationInterpolator248;

OrientationInterpolator OrientationInterpolator249 = createNode("OrientationInterpolator");
OrientationInterpolator249.DEF = "Stop_l_index3_RotationInterpolator";
OrientationInterpolator249.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator249.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[54] = OrientationInterpolator249;

OrientationInterpolator OrientationInterpolator250 = createNode("OrientationInterpolator");
OrientationInterpolator250.DEF = "Stop_l_middle0_RotationInterpolator";
OrientationInterpolator250.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator250.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[55] = OrientationInterpolator250;

OrientationInterpolator OrientationInterpolator251 = createNode("OrientationInterpolator");
OrientationInterpolator251.DEF = "Stop_l_middle1_RotationInterpolator";
OrientationInterpolator251.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator251.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[56] = OrientationInterpolator251;

OrientationInterpolator OrientationInterpolator252 = createNode("OrientationInterpolator");
OrientationInterpolator252.DEF = "Stop_l_middle2_RotationInterpolator";
OrientationInterpolator252.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator252.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[57] = OrientationInterpolator252;

OrientationInterpolator OrientationInterpolator253 = createNode("OrientationInterpolator");
OrientationInterpolator253.DEF = "Stop_l_middle3_RotationInterpolator";
OrientationInterpolator253.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator253.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[58] = OrientationInterpolator253;

OrientationInterpolator OrientationInterpolator254 = createNode("OrientationInterpolator");
OrientationInterpolator254.DEF = "Stop_l_ring0_RotationInterpolator";
OrientationInterpolator254.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator254.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[59] = OrientationInterpolator254;

OrientationInterpolator OrientationInterpolator255 = createNode("OrientationInterpolator");
OrientationInterpolator255.DEF = "Stop_l_ring1_RotationInterpolator";
OrientationInterpolator255.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator255.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[60] = OrientationInterpolator255;

OrientationInterpolator OrientationInterpolator256 = createNode("OrientationInterpolator");
OrientationInterpolator256.DEF = "Stop_l_ring2_RotationInterpolator";
OrientationInterpolator256.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator256.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[61] = OrientationInterpolator256;

OrientationInterpolator OrientationInterpolator257 = createNode("OrientationInterpolator");
OrientationInterpolator257.DEF = "Stop_l_ring3_RotationInterpolator";
OrientationInterpolator257.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator257.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[62] = OrientationInterpolator257;

OrientationInterpolator OrientationInterpolator258 = createNode("OrientationInterpolator");
OrientationInterpolator258.DEF = "Stop_l_pinky0_RotationInterpolator";
OrientationInterpolator258.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator258.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[63] = OrientationInterpolator258;

OrientationInterpolator OrientationInterpolator259 = createNode("OrientationInterpolator");
OrientationInterpolator259.DEF = "Stop_l_pinky1_RotationInterpolator";
OrientationInterpolator259.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator259.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[64] = OrientationInterpolator259;

OrientationInterpolator OrientationInterpolator260 = createNode("OrientationInterpolator");
OrientationInterpolator260.DEF = "Stop_l_pinky2_RotationInterpolator";
OrientationInterpolator260.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator260.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[65] = OrientationInterpolator260;

OrientationInterpolator OrientationInterpolator261 = createNode("OrientationInterpolator");
OrientationInterpolator261.DEF = "Stop_l_pinky3_RotationInterpolator";
OrientationInterpolator261.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator261.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[66] = OrientationInterpolator261;

OrientationInterpolator OrientationInterpolator262 = createNode("OrientationInterpolator");
OrientationInterpolator262.DEF = "Stop_r_sternoclavicular_RotationInterpolator";
OrientationInterpolator262.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator262.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[67] = OrientationInterpolator262;

OrientationInterpolator OrientationInterpolator263 = createNode("OrientationInterpolator");
OrientationInterpolator263.DEF = "Stop_r_acromioclavicular_RotationInterpolator";
OrientationInterpolator263.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator263.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[68] = OrientationInterpolator263;

OrientationInterpolator OrientationInterpolator264 = createNode("OrientationInterpolator");
OrientationInterpolator264.DEF = "Stop_r_shoulder_RotationInterpolator";
OrientationInterpolator264.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator264.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[69] = OrientationInterpolator264;

OrientationInterpolator OrientationInterpolator265 = createNode("OrientationInterpolator");
OrientationInterpolator265.DEF = "Stop_r_elbow_RotationInterpolator";
OrientationInterpolator265.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator265.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[70] = OrientationInterpolator265;

OrientationInterpolator OrientationInterpolator266 = createNode("OrientationInterpolator");
OrientationInterpolator266.DEF = "Stop_r_wrist_RotationInterpolator";
OrientationInterpolator266.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator266.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[71] = OrientationInterpolator266;

OrientationInterpolator OrientationInterpolator267 = createNode("OrientationInterpolator");
OrientationInterpolator267.DEF = "Stop_r_thumb1_RotationInterpolator";
OrientationInterpolator267.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator267.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[72] = OrientationInterpolator267;

OrientationInterpolator OrientationInterpolator268 = createNode("OrientationInterpolator");
OrientationInterpolator268.DEF = "Stop_r_thumb2_RotationInterpolator";
OrientationInterpolator268.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator268.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[73] = OrientationInterpolator268;

OrientationInterpolator OrientationInterpolator269 = createNode("OrientationInterpolator");
OrientationInterpolator269.DEF = "Stop_r_thumb3_RotationInterpolator";
OrientationInterpolator269.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator269.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[74] = OrientationInterpolator269;

OrientationInterpolator OrientationInterpolator270 = createNode("OrientationInterpolator");
OrientationInterpolator270.DEF = "Stop_r_index0_RotationInterpolator";
OrientationInterpolator270.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator270.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[75] = OrientationInterpolator270;

OrientationInterpolator OrientationInterpolator271 = createNode("OrientationInterpolator");
OrientationInterpolator271.DEF = "Stop_r_index1_RotationInterpolator";
OrientationInterpolator271.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator271.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[76] = OrientationInterpolator271;

OrientationInterpolator OrientationInterpolator272 = createNode("OrientationInterpolator");
OrientationInterpolator272.DEF = "Stop_r_index2_RotationInterpolator";
OrientationInterpolator272.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator272.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[77] = OrientationInterpolator272;

OrientationInterpolator OrientationInterpolator273 = createNode("OrientationInterpolator");
OrientationInterpolator273.DEF = "Stop_r_index3_RotationInterpolator";
OrientationInterpolator273.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator273.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[78] = OrientationInterpolator273;

OrientationInterpolator OrientationInterpolator274 = createNode("OrientationInterpolator");
OrientationInterpolator274.DEF = "Stop_r_middle0_RotationInterpolator";
OrientationInterpolator274.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator274.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[79] = OrientationInterpolator274;

OrientationInterpolator OrientationInterpolator275 = createNode("OrientationInterpolator");
OrientationInterpolator275.DEF = "Stop_r_middle1_RotationInterpolator";
OrientationInterpolator275.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator275.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[80] = OrientationInterpolator275;

OrientationInterpolator OrientationInterpolator276 = createNode("OrientationInterpolator");
OrientationInterpolator276.DEF = "Stop_r_middle2_RotationInterpolator";
OrientationInterpolator276.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator276.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[81] = OrientationInterpolator276;

OrientationInterpolator OrientationInterpolator277 = createNode("OrientationInterpolator");
OrientationInterpolator277.DEF = "Stop_r_middle3_RotationInterpolator";
OrientationInterpolator277.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator277.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[82] = OrientationInterpolator277;

OrientationInterpolator OrientationInterpolator278 = createNode("OrientationInterpolator");
OrientationInterpolator278.DEF = "Stop_r_ring0_RotationInterpolator";
OrientationInterpolator278.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator278.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[83] = OrientationInterpolator278;

OrientationInterpolator OrientationInterpolator279 = createNode("OrientationInterpolator");
OrientationInterpolator279.DEF = "Stop_r_ring1_RotationInterpolator";
OrientationInterpolator279.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator279.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[84] = OrientationInterpolator279;

OrientationInterpolator OrientationInterpolator280 = createNode("OrientationInterpolator");
OrientationInterpolator280.DEF = "Stop_r_ring2_RotationInterpolator";
OrientationInterpolator280.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator280.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[85] = OrientationInterpolator280;

OrientationInterpolator OrientationInterpolator281 = createNode("OrientationInterpolator");
OrientationInterpolator281.DEF = "Stop_r_ring3_RotationInterpolator";
OrientationInterpolator281.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator281.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[86] = OrientationInterpolator281;

OrientationInterpolator OrientationInterpolator282 = createNode("OrientationInterpolator");
OrientationInterpolator282.DEF = "Stop_r_pinky0_RotationInterpolator";
OrientationInterpolator282.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator282.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[87] = OrientationInterpolator282;

OrientationInterpolator OrientationInterpolator283 = createNode("OrientationInterpolator");
OrientationInterpolator283.DEF = "Stop_r_pinky1_RotationInterpolator";
OrientationInterpolator283.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator283.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[88] = OrientationInterpolator283;

OrientationInterpolator OrientationInterpolator284 = createNode("OrientationInterpolator");
OrientationInterpolator284.DEF = "Stop_r_pinky2_RotationInterpolator";
OrientationInterpolator284.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator284.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[89] = OrientationInterpolator284;

OrientationInterpolator OrientationInterpolator285 = createNode("OrientationInterpolator");
OrientationInterpolator285.DEF = "Stop_r_pinky3_RotationInterpolator";
OrientationInterpolator285.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator285.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group194.children[90] = OrientationInterpolator285;

children[3] = Group194;

Group Group286 = createNode("Group");
Group286.DEF = "StandAnimation";
TimeSensor TimeSensor287 = createNode("TimeSensor");
TimeSensor287.DEF = "StandTimer";
TimeSensor287.cycleInterval = 5.73;
TimeSensor287.loop = True;
Group286.children = new MFNode();

Group286.children[0] = TimeSensor287;

OrientationInterpolator OrientationInterpolator288 = createNode("OrientationInterpolator");
OrientationInterpolator288.DEF = "Stand_r_metatarsal_PitchInterpolator";
OrientationInterpolator288.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator288.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.015,1,0,0,0.17,-1,0,0,0.025,1,0,0,0.01,1,0,0,0]);
Group286.children[1] = OrientationInterpolator288;

OrientationInterpolator OrientationInterpolator289 = createNode("OrientationInterpolator");
OrientationInterpolator289.DEF = "Stand_r_ankle_RotationInterpolator";
OrientationInterpolator289.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator289.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[2] = OrientationInterpolator289;

OrientationInterpolator OrientationInterpolator290 = createNode("OrientationInterpolator");
OrientationInterpolator290.DEF = "Stand_r_knee_RotationInterpolator";
OrientationInterpolator290.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator290.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[3] = OrientationInterpolator290;

OrientationInterpolator OrientationInterpolator291 = createNode("OrientationInterpolator");
OrientationInterpolator291.DEF = "Stand_r_hip_RotationInterpolator";
OrientationInterpolator291.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator291.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[4] = OrientationInterpolator291;

OrientationInterpolator OrientationInterpolator292 = createNode("OrientationInterpolator");
OrientationInterpolator292.DEF = "Stand_l_ankle_RotationInterpolator";
OrientationInterpolator292.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator292.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[5] = OrientationInterpolator292;

OrientationInterpolator OrientationInterpolator293 = createNode("OrientationInterpolator");
OrientationInterpolator293.DEF = "Stand_l_knee_RotationInterpolator";
OrientationInterpolator293.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator293.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[6] = OrientationInterpolator293;

OrientationInterpolator OrientationInterpolator294 = createNode("OrientationInterpolator");
OrientationInterpolator294.DEF = "Stand_l_hip_RotationInterpolator";
OrientationInterpolator294.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator294.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[7] = OrientationInterpolator294;

OrientationInterpolator OrientationInterpolator295 = createNode("OrientationInterpolator");
OrientationInterpolator295.DEF = "Stand_r_wrist_RotationInterpolator";
OrientationInterpolator295.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator295.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,0.25,0,0,1,0]);
Group286.children[8] = OrientationInterpolator295;

OrientationInterpolator OrientationInterpolator296 = createNode("OrientationInterpolator");
OrientationInterpolator296.DEF = "Stand_r_elbow_RotationInterpolator";
OrientationInterpolator296.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator296.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[9] = OrientationInterpolator296;

OrientationInterpolator OrientationInterpolator297 = createNode("OrientationInterpolator");
OrientationInterpolator297.DEF = "Stand_r_shoulder_RotationInterpolator";
OrientationInterpolator297.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator297.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[10] = OrientationInterpolator297;

OrientationInterpolator OrientationInterpolator298 = createNode("OrientationInterpolator");
OrientationInterpolator298.DEF = "Stand_l_wrist_RotationInterpolator";
OrientationInterpolator298.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator298.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[11] = OrientationInterpolator298;

OrientationInterpolator OrientationInterpolator299 = createNode("OrientationInterpolator");
OrientationInterpolator299.DEF = "Stand_l_elbow_RotationInterpolator";
OrientationInterpolator299.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator299.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[12] = OrientationInterpolator299;

OrientationInterpolator OrientationInterpolator300 = createNode("OrientationInterpolator");
OrientationInterpolator300.DEF = "Stand_l_shoulder_RotationInterpolator";
OrientationInterpolator300.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator300.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[13] = OrientationInterpolator300;

OrientationInterpolator OrientationInterpolator301 = createNode("OrientationInterpolator");
OrientationInterpolator301.DEF = "Stand_head_RotationInterpolator";
OrientationInterpolator301.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator301.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[14] = OrientationInterpolator301;

OrientationInterpolator OrientationInterpolator302 = createNode("OrientationInterpolator");
OrientationInterpolator302.DEF = "Stand_neck_RotationInterpolator";
OrientationInterpolator302.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator302.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,0,0,1,0]);
Group286.children[15] = OrientationInterpolator302;

OrientationInterpolator OrientationInterpolator303 = createNode("OrientationInterpolator");
OrientationInterpolator303.DEF = "Stand_l_eyeball_RotationInterpolator";
OrientationInterpolator303.key = new MFFloat(new float[0,0.4,0.7,1]);
OrientationInterpolator303.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group286.children[16] = OrientationInterpolator303;

OrientationInterpolator OrientationInterpolator304 = createNode("OrientationInterpolator");
OrientationInterpolator304.DEF = "Stand_r_eyeball_RotationInterpolator";
OrientationInterpolator304.key = new MFFloat(new float[0,0.4,0.7,1]);
OrientationInterpolator304.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group286.children[17] = OrientationInterpolator304;

OrientationInterpolator OrientationInterpolator305 = createNode("OrientationInterpolator");
OrientationInterpolator305.DEF = "Stand_lower_body_RotationInterpolator";
OrientationInterpolator305.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator305.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[18] = OrientationInterpolator305;

OrientationInterpolator OrientationInterpolator306 = createNode("OrientationInterpolator");
OrientationInterpolator306.DEF = "Stand_upper_body_RotationInterpolator";
OrientationInterpolator306.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator306.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[19] = OrientationInterpolator306;

OrientationInterpolator OrientationInterpolator307 = createNode("OrientationInterpolator");
OrientationInterpolator307.DEF = "Stand_whole_body_RotationInterpolator";
OrientationInterpolator307.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator307.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[20] = OrientationInterpolator307;

PositionInterpolator PositionInterpolator308 = createNode("PositionInterpolator");
PositionInterpolator308.DEF = "Stand_whole_body_TranslationInterpolator";
PositionInterpolator308.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator308.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group286.children[21] = PositionInterpolator308;

OrientationInterpolator OrientationInterpolator309 = createNode("OrientationInterpolator");
OrientationInterpolator309.DEF = "Stand_l_sternoclavicular_RollInterpolator";
OrientationInterpolator309.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator309.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[22] = OrientationInterpolator309;

OrientationInterpolator OrientationInterpolator310 = createNode("OrientationInterpolator");
OrientationInterpolator310.DEF = "Stand_l_acromioclavicular_RollInterpolator";
OrientationInterpolator310.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator310.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[23] = OrientationInterpolator310;

OrientationInterpolator OrientationInterpolator311 = createNode("OrientationInterpolator");
OrientationInterpolator311.DEF = "Stand_r_sternoclavicular_RollInterpolator";
OrientationInterpolator311.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator311.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[24] = OrientationInterpolator311;

OrientationInterpolator OrientationInterpolator312 = createNode("OrientationInterpolator");
OrientationInterpolator312.DEF = "Stand_r_acromioclavicular_RollInterpolator";
OrientationInterpolator312.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator312.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[25] = OrientationInterpolator312;

OrientationInterpolator OrientationInterpolator313 = createNode("OrientationInterpolator");
OrientationInterpolator313.DEF = "Stand_sacroiliac_YawInterpolator";
OrientationInterpolator313.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator313.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[26] = OrientationInterpolator313;

OrientationInterpolator OrientationInterpolator314 = createNode("OrientationInterpolator");
OrientationInterpolator314.DEF = "Stand_vl5_YawInterpolator";
OrientationInterpolator314.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator314.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[27] = OrientationInterpolator314;

OrientationInterpolator OrientationInterpolator315 = createNode("OrientationInterpolator");
OrientationInterpolator315.DEF = "Stand_vc6_YawInterpolator";
OrientationInterpolator315.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator315.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,0,0]);
Group286.children[28] = OrientationInterpolator315;

OrientationInterpolator OrientationInterpolator316 = createNode("OrientationInterpolator");
OrientationInterpolator316.DEF = "Stand_l_thumb1_PitchInterpolator";
OrientationInterpolator316.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator316.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group286.children[29] = OrientationInterpolator316;

OrientationInterpolator OrientationInterpolator317 = createNode("OrientationInterpolator");
OrientationInterpolator317.DEF = "Stand_r_thumb1_PitchInterpolator";
OrientationInterpolator317.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator317.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,0.1,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group286.children[30] = OrientationInterpolator317;

OrientationInterpolator OrientationInterpolator318 = createNode("OrientationInterpolator");
OrientationInterpolator318.DEF = "Stand_r_index1_RollInterpolator";
OrientationInterpolator318.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator318.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.1,0,0,1,0.2,0,0,1,0.3,0,0,1,0,0,0,1,0]);
Group286.children[31] = OrientationInterpolator318;

OrientationInterpolator OrientationInterpolator319 = createNode("OrientationInterpolator");
OrientationInterpolator319.DEF = "Stand_r_index2_RollInterpolator";
OrientationInterpolator319.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator319.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.4,0,0,1,0.32,0,0,1,0.25,0,0,1,0.2,0,0,1,0]);
Group286.children[32] = OrientationInterpolator319;

OrientationInterpolator OrientationInterpolator320 = createNode("OrientationInterpolator");
OrientationInterpolator320.DEF = "Stand_r_index3_RollInterpolator";
OrientationInterpolator320.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator320.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.3,0,0,1,0.35,0,0,1,0.2,0,0,1,0]);
Group286.children[33] = OrientationInterpolator320;

children[4] = Group286;

Group Group321 = createNode("Group");
Group321.DEF = "PitchesAnimation";
TimeSensor TimeSensor322 = createNode("TimeSensor");
TimeSensor322.DEF = "PitchTimer";
TimeSensor322.cycleInterval = 5.73;
TimeSensor322.loop = True;
Group321.children = new MFNode();

Group321.children[0] = TimeSensor322;

OrientationInterpolator OrientationInterpolator323 = createNode("OrientationInterpolator");
OrientationInterpolator323.DEF = "Pitch_r_metatarsal_PitchInterpolator";
OrientationInterpolator323.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator323.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group321.children[1] = OrientationInterpolator323;

OrientationInterpolator OrientationInterpolator324 = createNode("OrientationInterpolator");
OrientationInterpolator324.DEF = "Pitches_r_ankle_RotationInterpolator";
OrientationInterpolator324.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator324.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group321.children[2] = OrientationInterpolator324;

OrientationInterpolator OrientationInterpolator325 = createNode("OrientationInterpolator");
OrientationInterpolator325.DEF = "Pitches_r_knee_RotationInterpolator";
OrientationInterpolator325.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator325.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[3] = OrientationInterpolator325;

OrientationInterpolator OrientationInterpolator326 = createNode("OrientationInterpolator");
OrientationInterpolator326.DEF = "Pitches_r_hip_RotationInterpolator";
OrientationInterpolator326.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator326.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group321.children[4] = OrientationInterpolator326;

OrientationInterpolator OrientationInterpolator327 = createNode("OrientationInterpolator");
OrientationInterpolator327.DEF = "Pitches_l_ankle_RotationInterpolator";
OrientationInterpolator327.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator327.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group321.children[5] = OrientationInterpolator327;

OrientationInterpolator OrientationInterpolator328 = createNode("OrientationInterpolator");
OrientationInterpolator328.DEF = "Pitches_l_knee_RotationInterpolator";
OrientationInterpolator328.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator328.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[6] = OrientationInterpolator328;

OrientationInterpolator OrientationInterpolator329 = createNode("OrientationInterpolator");
OrientationInterpolator329.DEF = "Pitches_l_hip_RotationInterpolator";
OrientationInterpolator329.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator329.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group321.children[7] = OrientationInterpolator329;

OrientationInterpolator OrientationInterpolator330 = createNode("OrientationInterpolator");
OrientationInterpolator330.DEF = "Pitches_r_wrist_RotationInterpolator";
OrientationInterpolator330.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator330.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[8] = OrientationInterpolator330;

OrientationInterpolator OrientationInterpolator331 = createNode("OrientationInterpolator");
OrientationInterpolator331.DEF = "Pitches_r_elbow_RotationInterpolator";
OrientationInterpolator331.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator331.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[9] = OrientationInterpolator331;

OrientationInterpolator OrientationInterpolator332 = createNode("OrientationInterpolator");
OrientationInterpolator332.DEF = "Pitches_r_shoulder_RotationInterpolator";
OrientationInterpolator332.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator332.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group321.children[10] = OrientationInterpolator332;

OrientationInterpolator OrientationInterpolator333 = createNode("OrientationInterpolator");
OrientationInterpolator333.DEF = "Pitches_l_wrist_RotationInterpolator";
OrientationInterpolator333.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator333.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[11] = OrientationInterpolator333;

OrientationInterpolator OrientationInterpolator334 = createNode("OrientationInterpolator");
OrientationInterpolator334.DEF = "Pitches_l_elbow_RotationInterpolator";
OrientationInterpolator334.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator334.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[12] = OrientationInterpolator334;

OrientationInterpolator OrientationInterpolator335 = createNode("OrientationInterpolator");
OrientationInterpolator335.DEF = "Pitches_l_shoulder_RotationInterpolator";
OrientationInterpolator335.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator335.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group321.children[13] = OrientationInterpolator335;

OrientationInterpolator OrientationInterpolator336 = createNode("OrientationInterpolator");
OrientationInterpolator336.DEF = "Pitches_head_RotationInterpolator";
OrientationInterpolator336.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator336.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[14] = OrientationInterpolator336;

OrientationInterpolator OrientationInterpolator337 = createNode("OrientationInterpolator");
OrientationInterpolator337.DEF = "Pitches_neck_RotationInterpolator";
OrientationInterpolator337.key = new MFFloat(new float[0,0.25,0.55,1]);
OrientationInterpolator337.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.55,-1,0,0,1.05,0,0,1,0]);
Group321.children[15] = OrientationInterpolator337;

OrientationInterpolator OrientationInterpolator338 = createNode("OrientationInterpolator");
OrientationInterpolator338.DEF = "Pitches_lower_body_RotationInterpolator";
OrientationInterpolator338.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator338.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[16] = OrientationInterpolator338;

OrientationInterpolator OrientationInterpolator339 = createNode("OrientationInterpolator");
OrientationInterpolator339.DEF = "Pitches_upper_body_RotationInterpolator";
OrientationInterpolator339.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator339.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[17] = OrientationInterpolator339;

OrientationInterpolator OrientationInterpolator340 = createNode("OrientationInterpolator");
OrientationInterpolator340.DEF = "Pitches_whole_body_RotationInterpolator";
OrientationInterpolator340.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator340.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[18] = OrientationInterpolator340;

PositionInterpolator PositionInterpolator341 = createNode("PositionInterpolator");
PositionInterpolator341.DEF = "Pitches_whole_body_TranslationInterpolator";
PositionInterpolator341.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator341.keyValue = new MFVec3f(new float[0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0]);
Group321.children[19] = PositionInterpolator341;

OrientationInterpolator OrientationInterpolator342 = createNode("OrientationInterpolator");
OrientationInterpolator342.DEF = "Pitch_l_sternoclavicular_RollInterpolator";
OrientationInterpolator342.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator342.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[20] = OrientationInterpolator342;

OrientationInterpolator OrientationInterpolator343 = createNode("OrientationInterpolator");
OrientationInterpolator343.DEF = "Pitch_l_acromioclavicular_RollInterpolator";
OrientationInterpolator343.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator343.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[21] = OrientationInterpolator343;

OrientationInterpolator OrientationInterpolator344 = createNode("OrientationInterpolator");
OrientationInterpolator344.DEF = "Pitch_r_sternoclavicular_RollInterpolator";
OrientationInterpolator344.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator344.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[22] = OrientationInterpolator344;

OrientationInterpolator OrientationInterpolator345 = createNode("OrientationInterpolator");
OrientationInterpolator345.DEF = "Pitch_r_acromioclavicular_RollInterpolator";
OrientationInterpolator345.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator345.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[23] = OrientationInterpolator345;

OrientationInterpolator OrientationInterpolator346 = createNode("OrientationInterpolator");
OrientationInterpolator346.DEF = "Pitch_sacroiliac_YawInterpolator";
OrientationInterpolator346.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator346.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[24] = OrientationInterpolator346;

OrientationInterpolator OrientationInterpolator347 = createNode("OrientationInterpolator");
OrientationInterpolator347.DEF = "Pitch_vl5_YawInterpolator";
OrientationInterpolator347.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator347.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[25] = OrientationInterpolator347;

OrientationInterpolator OrientationInterpolator348 = createNode("OrientationInterpolator");
OrientationInterpolator348.DEF = "Pitch_vc6_YawInterpolator";
OrientationInterpolator348.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator348.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group321.children[26] = OrientationInterpolator348;

OrientationInterpolator OrientationInterpolator349 = createNode("OrientationInterpolator");
OrientationInterpolator349.DEF = "Pitch_l_thumb1_PitchInterpolator";
OrientationInterpolator349.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator349.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group321.children[27] = OrientationInterpolator349;

OrientationInterpolator OrientationInterpolator350 = createNode("OrientationInterpolator");
OrientationInterpolator350.DEF = "Pitch_r_thumb1_PitchInterpolator";
OrientationInterpolator350.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator350.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group321.children[28] = OrientationInterpolator350;

children[5] = Group321;

Group Group351 = createNode("Group");
Group351.DEF = "YawsAnimation";
TimeSensor TimeSensor352 = createNode("TimeSensor");
TimeSensor352.DEF = "YawTimer";
TimeSensor352.cycleInterval = 5.73;
TimeSensor352.loop = True;
Group351.children = new MFNode();

Group351.children[0] = TimeSensor352;

OrientationInterpolator OrientationInterpolator353 = createNode("OrientationInterpolator");
OrientationInterpolator353.DEF = "Yaw_r_metatarsal_PitchInterpolator";
OrientationInterpolator353.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator353.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[1] = OrientationInterpolator353;

OrientationInterpolator OrientationInterpolator354 = createNode("OrientationInterpolator");
OrientationInterpolator354.DEF = "Yaws_r_ankle_RotationInterpolator";
OrientationInterpolator354.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator354.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group351.children[2] = OrientationInterpolator354;

OrientationInterpolator OrientationInterpolator355 = createNode("OrientationInterpolator");
OrientationInterpolator355.DEF = "Yaws_r_knee_RotationInterpolator";
OrientationInterpolator355.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator355.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group351.children[3] = OrientationInterpolator355;

OrientationInterpolator OrientationInterpolator356 = createNode("OrientationInterpolator");
OrientationInterpolator356.DEF = "Yaws_r_hip_RotationInterpolator";
OrientationInterpolator356.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator356.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[4] = OrientationInterpolator356;

OrientationInterpolator OrientationInterpolator357 = createNode("OrientationInterpolator");
OrientationInterpolator357.DEF = "Yaws_l_ankle_RotationInterpolator";
OrientationInterpolator357.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator357.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group351.children[5] = OrientationInterpolator357;

OrientationInterpolator OrientationInterpolator358 = createNode("OrientationInterpolator");
OrientationInterpolator358.DEF = "Yaws_l_knee_RotationInterpolator";
OrientationInterpolator358.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator358.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group351.children[6] = OrientationInterpolator358;

OrientationInterpolator OrientationInterpolator359 = createNode("OrientationInterpolator");
OrientationInterpolator359.DEF = "Yaws_l_hip_RotationInterpolator";
OrientationInterpolator359.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator359.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[7] = OrientationInterpolator359;

OrientationInterpolator OrientationInterpolator360 = createNode("OrientationInterpolator");
OrientationInterpolator360.DEF = "Yaws_r_wrist_RotationInterpolator";
OrientationInterpolator360.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator360.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[8] = OrientationInterpolator360;

OrientationInterpolator OrientationInterpolator361 = createNode("OrientationInterpolator");
OrientationInterpolator361.DEF = "Yaws_r_elbow_RotationInterpolator";
OrientationInterpolator361.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator361.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[9] = OrientationInterpolator361;

OrientationInterpolator OrientationInterpolator362 = createNode("OrientationInterpolator");
OrientationInterpolator362.DEF = "Yaws_r_shoulder_RotationInterpolator";
OrientationInterpolator362.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator362.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[10] = OrientationInterpolator362;

OrientationInterpolator OrientationInterpolator363 = createNode("OrientationInterpolator");
OrientationInterpolator363.DEF = "Yaws_l_wrist_RotationInterpolator";
OrientationInterpolator363.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator363.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[11] = OrientationInterpolator363;

OrientationInterpolator OrientationInterpolator364 = createNode("OrientationInterpolator");
OrientationInterpolator364.DEF = "Yaws_l_elbow_RotationInterpolator";
OrientationInterpolator364.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator364.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[12] = OrientationInterpolator364;

OrientationInterpolator OrientationInterpolator365 = createNode("OrientationInterpolator");
OrientationInterpolator365.DEF = "Yaws_l_shoulder_RotationInterpolator";
OrientationInterpolator365.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator365.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[13] = OrientationInterpolator365;

OrientationInterpolator OrientationInterpolator366 = createNode("OrientationInterpolator");
OrientationInterpolator366.DEF = "Yaws_head_RotationInterpolator";
OrientationInterpolator366.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator366.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[14] = OrientationInterpolator366;

OrientationInterpolator OrientationInterpolator367 = createNode("OrientationInterpolator");
OrientationInterpolator367.DEF = "Yaws_neck_RotationInterpolator";
OrientationInterpolator367.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator367.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group351.children[15] = OrientationInterpolator367;

OrientationInterpolator OrientationInterpolator368 = createNode("OrientationInterpolator");
OrientationInterpolator368.DEF = "Yaws_upper_body_RotationInterpolator";
OrientationInterpolator368.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator368.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group351.children[16] = OrientationInterpolator368;

OrientationInterpolator OrientationInterpolator369 = createNode("OrientationInterpolator");
OrientationInterpolator369.DEF = "Yaws_lower_body_RotationInterpolator";
OrientationInterpolator369.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator369.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[17] = OrientationInterpolator369;

OrientationInterpolator OrientationInterpolator370 = createNode("OrientationInterpolator");
OrientationInterpolator370.DEF = "Yaws_whole_body_RotationInterpolator";
OrientationInterpolator370.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator370.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[18] = OrientationInterpolator370;

PositionInterpolator PositionInterpolator371 = createNode("PositionInterpolator");
PositionInterpolator371.DEF = "Yaws_whole_body_TranslationInterpolator";
PositionInterpolator371.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator371.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group351.children[19] = PositionInterpolator371;

OrientationInterpolator OrientationInterpolator372 = createNode("OrientationInterpolator");
OrientationInterpolator372.DEF = "Yaw_l_sternoclavicular_RollInterpolator";
OrientationInterpolator372.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator372.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[20] = OrientationInterpolator372;

OrientationInterpolator OrientationInterpolator373 = createNode("OrientationInterpolator");
OrientationInterpolator373.DEF = "Yaw_l_acromioclavicular_RollInterpolator";
OrientationInterpolator373.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator373.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[21] = OrientationInterpolator373;

OrientationInterpolator OrientationInterpolator374 = createNode("OrientationInterpolator");
OrientationInterpolator374.DEF = "Yaw_r_sternoclavicular_RollInterpolator";
OrientationInterpolator374.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator374.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[22] = OrientationInterpolator374;

OrientationInterpolator OrientationInterpolator375 = createNode("OrientationInterpolator");
OrientationInterpolator375.DEF = "Yaw_r_acromioclavicular_RollInterpolator";
OrientationInterpolator375.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator375.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[23] = OrientationInterpolator375;

OrientationInterpolator OrientationInterpolator376 = createNode("OrientationInterpolator");
OrientationInterpolator376.DEF = "Yaw_sacroiliac_YawInterpolator";
OrientationInterpolator376.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator376.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,0,0.24,0,-1,0,0.4,0,1,0,0]);
Group351.children[24] = OrientationInterpolator376;

OrientationInterpolator OrientationInterpolator377 = createNode("OrientationInterpolator");
OrientationInterpolator377.DEF = "Yaw_vl5_YawInterpolator";
OrientationInterpolator377.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator377.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[25] = OrientationInterpolator377;

OrientationInterpolator OrientationInterpolator378 = createNode("OrientationInterpolator");
OrientationInterpolator378.DEF = "Yaw_vc6_YawInterpolator";
OrientationInterpolator378.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator378.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[26] = OrientationInterpolator378;

OrientationInterpolator OrientationInterpolator379 = createNode("OrientationInterpolator");
OrientationInterpolator379.DEF = "Yaw_l_thumb1_PitchInterpolator";
OrientationInterpolator379.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator379.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[27] = OrientationInterpolator379;

OrientationInterpolator OrientationInterpolator380 = createNode("OrientationInterpolator");
OrientationInterpolator380.DEF = "Yaw_r_thumb1_PitchInterpolator";
OrientationInterpolator380.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator380.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group351.children[28] = OrientationInterpolator380;

children[6] = Group351;

Group Group381 = createNode("Group");
Group381.DEF = "RollsAnimation";
TimeSensor TimeSensor382 = createNode("TimeSensor");
TimeSensor382.DEF = "RollTimer";
TimeSensor382.cycleInterval = 5.73;
TimeSensor382.loop = True;
Group381.children = new MFNode();

Group381.children[0] = TimeSensor382;

OrientationInterpolator OrientationInterpolator383 = createNode("OrientationInterpolator");
OrientationInterpolator383.DEF = "Roll_r_metatarsal_PitchInterpolator";
OrientationInterpolator383.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator383.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[1] = OrientationInterpolator383;

OrientationInterpolator OrientationInterpolator384 = createNode("OrientationInterpolator");
OrientationInterpolator384.DEF = "Rolls_r_ankle_RotationInterpolator";
OrientationInterpolator384.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator384.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group381.children[2] = OrientationInterpolator384;

OrientationInterpolator OrientationInterpolator385 = createNode("OrientationInterpolator");
OrientationInterpolator385.DEF = "Rolls_r_knee_RotationInterpolator";
OrientationInterpolator385.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator385.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[3] = OrientationInterpolator385;

OrientationInterpolator OrientationInterpolator386 = createNode("OrientationInterpolator");
OrientationInterpolator386.DEF = "Rolls_r_hip_RotationInterpolator";
OrientationInterpolator386.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator386.keyValue = new MFRotation(new float[0,0,-1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group381.children[4] = OrientationInterpolator386;

OrientationInterpolator OrientationInterpolator387 = createNode("OrientationInterpolator");
OrientationInterpolator387.DEF = "Rolls_l_ankle_RotationInterpolator";
OrientationInterpolator387.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator387.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group381.children[5] = OrientationInterpolator387;

OrientationInterpolator OrientationInterpolator388 = createNode("OrientationInterpolator");
OrientationInterpolator388.DEF = "Rolls_l_knee_RotationInterpolator";
OrientationInterpolator388.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator388.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[6] = OrientationInterpolator388;

OrientationInterpolator OrientationInterpolator389 = createNode("OrientationInterpolator");
OrientationInterpolator389.DEF = "Rolls_l_hip_RotationInterpolator";
OrientationInterpolator389.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator389.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group381.children[7] = OrientationInterpolator389;

OrientationInterpolator OrientationInterpolator390 = createNode("OrientationInterpolator");
OrientationInterpolator390.DEF = "Rolls_r_wrist_RotationInterpolator";
OrientationInterpolator390.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator390.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group381.children[8] = OrientationInterpolator390;

OrientationInterpolator OrientationInterpolator391 = createNode("OrientationInterpolator");
OrientationInterpolator391.DEF = "Rolls_r_elbow_RotationInterpolator";
OrientationInterpolator391.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator391.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[9] = OrientationInterpolator391;

OrientationInterpolator OrientationInterpolator392 = createNode("OrientationInterpolator");
OrientationInterpolator392.DEF = "Rolls_r_shoulder_RotationInterpolator";
OrientationInterpolator392.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator392.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,-1,3,0,0,-1,1.5,0,0,1,0]);
Group381.children[10] = OrientationInterpolator392;

OrientationInterpolator OrientationInterpolator393 = createNode("OrientationInterpolator");
OrientationInterpolator393.DEF = "Rolls_l_wrist_RotationInterpolator";
OrientationInterpolator393.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator393.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group381.children[11] = OrientationInterpolator393;

OrientationInterpolator OrientationInterpolator394 = createNode("OrientationInterpolator");
OrientationInterpolator394.DEF = "Rolls_l_elbow_RotationInterpolator";
OrientationInterpolator394.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator394.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[12] = OrientationInterpolator394;

OrientationInterpolator OrientationInterpolator395 = createNode("OrientationInterpolator");
OrientationInterpolator395.DEF = "Rolls_l_shoulder_RotationInterpolator";
OrientationInterpolator395.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator395.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,3,0,0,1,1.5,0,0,1,0]);
Group381.children[13] = OrientationInterpolator395;

OrientationInterpolator OrientationInterpolator396 = createNode("OrientationInterpolator");
OrientationInterpolator396.DEF = "Rolls_head_RotationInterpolator";
OrientationInterpolator396.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator396.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[14] = OrientationInterpolator396;

OrientationInterpolator OrientationInterpolator397 = createNode("OrientationInterpolator");
OrientationInterpolator397.DEF = "Rolls_neck_RotationInterpolator";
OrientationInterpolator397.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator397.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.25,0,0,1,0,0,0,-1,1.25,0,0,1,0]);
Group381.children[15] = OrientationInterpolator397;

OrientationInterpolator OrientationInterpolator398 = createNode("OrientationInterpolator");
OrientationInterpolator398.DEF = "Rolls_lower_body_RotationInterpolator";
OrientationInterpolator398.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator398.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[16] = OrientationInterpolator398;

OrientationInterpolator OrientationInterpolator399 = createNode("OrientationInterpolator");
OrientationInterpolator399.DEF = "Rolls_upper_body_RotationInterpolator";
OrientationInterpolator399.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator399.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[17] = OrientationInterpolator399;

OrientationInterpolator OrientationInterpolator400 = createNode("OrientationInterpolator");
OrientationInterpolator400.DEF = "Rolls_whole_body_RotationInterpolator";
OrientationInterpolator400.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator400.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[18] = OrientationInterpolator400;

PositionInterpolator PositionInterpolator401 = createNode("PositionInterpolator");
PositionInterpolator401.DEF = "Rolls_whole_body_TranslationInterpolator";
PositionInterpolator401.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator401.keyValue = new MFVec3f(new float[0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0]);
Group381.children[19] = PositionInterpolator401;

OrientationInterpolator OrientationInterpolator402 = createNode("OrientationInterpolator");
OrientationInterpolator402.DEF = "Roll_l_sternoclavicular_RollInterpolator";
OrientationInterpolator402.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator402.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group381.children[20] = OrientationInterpolator402;

OrientationInterpolator OrientationInterpolator403 = createNode("OrientationInterpolator");
OrientationInterpolator403.DEF = "Roll_l_acromioclavicular_RollInterpolator";
OrientationInterpolator403.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator403.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[21] = OrientationInterpolator403;

OrientationInterpolator OrientationInterpolator404 = createNode("OrientationInterpolator");
OrientationInterpolator404.DEF = "Roll_r_sternoclavicular_RollInterpolator";
OrientationInterpolator404.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator404.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group381.children[22] = OrientationInterpolator404;

OrientationInterpolator OrientationInterpolator405 = createNode("OrientationInterpolator");
OrientationInterpolator405.DEF = "Roll_r_acromioclavicular_RollInterpolator";
OrientationInterpolator405.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator405.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[23] = OrientationInterpolator405;

OrientationInterpolator OrientationInterpolator406 = createNode("OrientationInterpolator");
OrientationInterpolator406.DEF = "Roll_sacroiliac_YawInterpolator";
OrientationInterpolator406.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator406.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[24] = OrientationInterpolator406;

OrientationInterpolator OrientationInterpolator407 = createNode("OrientationInterpolator");
OrientationInterpolator407.DEF = "Roll_vl5_YawInterpolator";
OrientationInterpolator407.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator407.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[25] = OrientationInterpolator407;

OrientationInterpolator OrientationInterpolator408 = createNode("OrientationInterpolator");
OrientationInterpolator408.DEF = "Roll_vc6_YawInterpolator";
OrientationInterpolator408.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator408.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[26] = OrientationInterpolator408;

OrientationInterpolator OrientationInterpolator409 = createNode("OrientationInterpolator");
OrientationInterpolator409.DEF = "Roll_l_thumb1_PitchInterpolator";
OrientationInterpolator409.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator409.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[27] = OrientationInterpolator409;

OrientationInterpolator OrientationInterpolator410 = createNode("OrientationInterpolator");
OrientationInterpolator410.DEF = "Roll_r_thumb1_PitchInterpolator";
OrientationInterpolator410.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator410.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group381.children[28] = OrientationInterpolator410;

children[7] = Group381;

Group Group411 = createNode("Group");
Group411.DEF = "WalkAnimation";
TimeSensor TimeSensor412 = createNode("TimeSensor");
TimeSensor412.DEF = "WalkTimer";
TimeSensor412.cycleInterval = 1.73;
TimeSensor412.loop = True;
Group411.children = new MFNode();

Group411.children[0] = TimeSensor412;

OrientationInterpolator OrientationInterpolator413 = createNode("OrientationInterpolator");
OrientationInterpolator413.DEF = "Walk_r_metatarsal_PitchInterpolator";
OrientationInterpolator413.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator413.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group411.children[1] = OrientationInterpolator413;

OrientationInterpolator OrientationInterpolator414 = createNode("OrientationInterpolator");
OrientationInterpolator414.DEF = "Walk_r_ankle_RotationInterpolator";
OrientationInterpolator414.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator414.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0]);
Group411.children[2] = OrientationInterpolator414;

OrientationInterpolator OrientationInterpolator415 = createNode("OrientationInterpolator");
OrientationInterpolator415.DEF = "Walk_r_knee_RotationInterpolator";
OrientationInterpolator415.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator415.keyValue = new MFRotation(new float[1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573]);
Group411.children[3] = OrientationInterpolator415;

OrientationInterpolator OrientationInterpolator416 = createNode("OrientationInterpolator");
OrientationInterpolator416.DEF = "Walk_r_hip_RotationInterpolator";
OrientationInterpolator416.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator416.keyValue = new MFRotation(new float[-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
Group411.children[4] = OrientationInterpolator416;

OrientationInterpolator OrientationInterpolator417 = createNode("OrientationInterpolator");
OrientationInterpolator417.DEF = "Walk_l_ankle_RotationInterpolator";
OrientationInterpolator417.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator417.keyValue = new MFRotation(new float[-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714]);
Group411.children[5] = OrientationInterpolator417;

OrientationInterpolator OrientationInterpolator418 = createNode("OrientationInterpolator");
OrientationInterpolator418.DEF = "Walk_l_knee_RotationInterpolator";
OrientationInterpolator418.key = new MFFloat(new float[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator418.keyValue = new MFRotation(new float[1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
Group411.children[6] = OrientationInterpolator418;

OrientationInterpolator OrientationInterpolator419 = createNode("OrientationInterpolator");
OrientationInterpolator419.DEF = "Walk_l_hip_RotationInterpolator";
OrientationInterpolator419.key = new MFFloat(new float[0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator419.keyValue = new MFRotation(new float[-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
Group411.children[7] = OrientationInterpolator419;

OrientationInterpolator OrientationInterpolator420 = createNode("OrientationInterpolator");
OrientationInterpolator420.DEF = "Walk_lower_body_RotationInterpolator";
OrientationInterpolator420.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator420.keyValue = new MFRotation(new float[0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
Group411.children[8] = OrientationInterpolator420;

OrientationInterpolator OrientationInterpolator421 = createNode("OrientationInterpolator");
OrientationInterpolator421.DEF = "Walk_r_wrist_RotationInterpolator";
OrientationInterpolator421.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator421.keyValue = new MFRotation(new float[-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]);
Group411.children[9] = OrientationInterpolator421;

OrientationInterpolator OrientationInterpolator422 = createNode("OrientationInterpolator");
OrientationInterpolator422.DEF = "Walk_r_elbow_RotationInterpolator";
OrientationInterpolator422.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator422.keyValue = new MFRotation(new float[-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508]);
Group411.children[10] = OrientationInterpolator422;

OrientationInterpolator OrientationInterpolator423 = createNode("OrientationInterpolator");
OrientationInterpolator423.DEF = "Walk_r_shoulder_RotationInterpolator";
OrientationInterpolator423.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator423.keyValue = new MFRotation(new float[-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346]);
Group411.children[11] = OrientationInterpolator423;

OrientationInterpolator OrientationInterpolator424 = createNode("OrientationInterpolator");
OrientationInterpolator424.DEF = "Walk_l_wrist_RotationInterpolator";
OrientationInterpolator424.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator424.keyValue = new MFRotation(new float[0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076]);
Group411.children[12] = OrientationInterpolator424;

OrientationInterpolator OrientationInterpolator425 = createNode("OrientationInterpolator");
OrientationInterpolator425.DEF = "Walk_l_elbow_RotationInterpolator";
OrientationInterpolator425.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator425.keyValue = new MFRotation(new float[-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878]);
Group411.children[13] = OrientationInterpolator425;

OrientationInterpolator OrientationInterpolator426 = createNode("OrientationInterpolator");
OrientationInterpolator426.DEF = "Walk_l_shoulder_RotationInterpolator";
OrientationInterpolator426.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator426.keyValue = new MFRotation(new float[1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189]);
Group411.children[14] = OrientationInterpolator426;

OrientationInterpolator OrientationInterpolator427 = createNode("OrientationInterpolator");
OrientationInterpolator427.DEF = "Walk_head_RotationInterpolator";
OrientationInterpolator427.key = new MFFloat(new float[0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator427.keyValue = new MFRotation(new float[0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642]);
Group411.children[15] = OrientationInterpolator427;

OrientationInterpolator OrientationInterpolator428 = createNode("OrientationInterpolator");
OrientationInterpolator428.DEF = "Walk_neck_RotationInterpolator";
OrientationInterpolator428.key = new MFFloat(new float[0,1]);
OrientationInterpolator428.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group411.children[16] = OrientationInterpolator428;

OrientationInterpolator OrientationInterpolator429 = createNode("OrientationInterpolator");
OrientationInterpolator429.DEF = "Walk_upper_body_RotationInterpolator";
OrientationInterpolator429.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator429.keyValue = new MFRotation(new float[0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
Group411.children[17] = OrientationInterpolator429;

OrientationInterpolator OrientationInterpolator430 = createNode("OrientationInterpolator");
OrientationInterpolator430.DEF = "Walk_whole_body_RotationInterpolator";
OrientationInterpolator430.key = new MFFloat(new float[0,1]);
OrientationInterpolator430.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group411.children[18] = OrientationInterpolator430;

PositionInterpolator PositionInterpolator431 = createNode("PositionInterpolator");
PositionInterpolator431.DEF = "Walk_whole_body_TranslationInterpolator";
PositionInterpolator431.key = new MFFloat(new float[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator431.keyValue = new MFVec3f(new float[0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
Group411.children[19] = PositionInterpolator431;

OrientationInterpolator OrientationInterpolator432 = createNode("OrientationInterpolator");
OrientationInterpolator432.DEF = "Walk_l_sternoclavicular_RollInterpolator";
OrientationInterpolator432.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator432.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group411.children[20] = OrientationInterpolator432;

OrientationInterpolator OrientationInterpolator433 = createNode("OrientationInterpolator");
OrientationInterpolator433.DEF = "Walk_l_acromioclavicular_RollInterpolator";
OrientationInterpolator433.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator433.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group411.children[21] = OrientationInterpolator433;

OrientationInterpolator OrientationInterpolator434 = createNode("OrientationInterpolator");
OrientationInterpolator434.DEF = "Walk_r_sternoclavicular_RollInterpolator";
OrientationInterpolator434.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator434.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group411.children[22] = OrientationInterpolator434;

OrientationInterpolator OrientationInterpolator435 = createNode("OrientationInterpolator");
OrientationInterpolator435.DEF = "Walk_r_acromioclavicular_RollInterpolator";
OrientationInterpolator435.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator435.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group411.children[23] = OrientationInterpolator435;

OrientationInterpolator OrientationInterpolator436 = createNode("OrientationInterpolator");
OrientationInterpolator436.DEF = "Walk_sacroiliac_YawInterpolator";
OrientationInterpolator436.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator436.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group411.children[24] = OrientationInterpolator436;

OrientationInterpolator OrientationInterpolator437 = createNode("OrientationInterpolator");
OrientationInterpolator437.DEF = "Walk_vl5_YawInterpolator";
OrientationInterpolator437.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator437.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group411.children[25] = OrientationInterpolator437;

OrientationInterpolator OrientationInterpolator438 = createNode("OrientationInterpolator");
OrientationInterpolator438.DEF = "Walk_vc6_YawInterpolator";
OrientationInterpolator438.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator438.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group411.children[26] = OrientationInterpolator438;

OrientationInterpolator OrientationInterpolator439 = createNode("OrientationInterpolator");
OrientationInterpolator439.DEF = "Walk_l_thumb1_PitchInterpolator";
OrientationInterpolator439.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator439.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group411.children[27] = OrientationInterpolator439;

OrientationInterpolator OrientationInterpolator440 = createNode("OrientationInterpolator");
OrientationInterpolator440.DEF = "Walk_r_thumb1_PitchInterpolator";
OrientationInterpolator440.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator440.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group411.children[28] = OrientationInterpolator440;

children[8] = Group411;

Group Group441 = createNode("Group");
Group441.DEF = "RunAnimation";
TimeSensor TimeSensor442 = createNode("TimeSensor");
TimeSensor442.DEF = "RunTimer";
TimeSensor442.cycleInterval = 0.9;
TimeSensor442.loop = True;
Group441.children = new MFNode();

Group441.children[0] = TimeSensor442;

OrientationInterpolator OrientationInterpolator443 = createNode("OrientationInterpolator");
OrientationInterpolator443.DEF = "Run_r_metatarsal_PitchInterpolator";
OrientationInterpolator443.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator443.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group441.children[1] = OrientationInterpolator443;

OrientationInterpolator OrientationInterpolator444 = createNode("OrientationInterpolator");
OrientationInterpolator444.DEF = "Run_l_hip_RotationInterpolator_Run";
OrientationInterpolator444.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator444.keyValue = new MFRotation(new float[-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42]);
Group441.children[2] = OrientationInterpolator444;

OrientationInterpolator OrientationInterpolator445 = createNode("OrientationInterpolator");
OrientationInterpolator445.DEF = "Run_l_knee_RotationInterpolator_Run";
OrientationInterpolator445.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator445.keyValue = new MFRotation(new float[1,0,0,1.01,1,0,0,0.426,1,0,0,0.705,1,0,0,2.179,1,0,0,1.01]);
Group441.children[3] = OrientationInterpolator445;

OrientationInterpolator OrientationInterpolator446 = createNode("OrientationInterpolator");
OrientationInterpolator446.DEF = "Run_l_ankle_RotationInterpolator_Run";
OrientationInterpolator446.key = new MFFloat(new float[0,0.22,0.3,0.4,1]);
OrientationInterpolator446.keyValue = new MFRotation(new float[1,0,0,0.0374,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03574]);
Group441.children[4] = OrientationInterpolator446;

OrientationInterpolator OrientationInterpolator447 = createNode("OrientationInterpolator");
OrientationInterpolator447.DEF = "Run_r_hip_RotationInterpolator_Run";
OrientationInterpolator447.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator447.keyValue = new MFRotation(new float[0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9]);
Group441.children[5] = OrientationInterpolator447;

OrientationInterpolator OrientationInterpolator448 = createNode("OrientationInterpolator");
OrientationInterpolator448.DEF = "Run_r_knee_RotationInterpolator_Run";
OrientationInterpolator448.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator448.keyValue = new MFRotation(new float[1,0,0,0.705,1,0,0,2.179,1,0,0,1.01,1,0,0,0.426,1,0,0,0.705]);
Group441.children[6] = OrientationInterpolator448;

OrientationInterpolator OrientationInterpolator449 = createNode("OrientationInterpolator");
OrientationInterpolator449.DEF = "Run_r_ankle_RotationInterpolator_Run";
OrientationInterpolator449.key = new MFFloat(new float[0,0.4,0.71,0.8,0.82,1]);
OrientationInterpolator449.keyValue = new MFRotation(new float[1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.32,-1,0,0,0.374,-1,0,0,0.3478,1,0,0,0.2323]);
Group441.children[7] = OrientationInterpolator449;

OrientationInterpolator OrientationInterpolator450 = createNode("OrientationInterpolator");
OrientationInterpolator450.DEF = "Run_l_shoulder_RotationInterpolator_Run";
OrientationInterpolator450.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator450.keyValue = new MFRotation(new float[0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5]);
Group441.children[8] = OrientationInterpolator450;

OrientationInterpolator OrientationInterpolator451 = createNode("OrientationInterpolator");
OrientationInterpolator451.DEF = "Run_l_elbow_RotationInterpolator_Run";
OrientationInterpolator451.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator451.keyValue = new MFRotation(new float[-1,0,0,1.85,-0.99,-0.19,0.18,1.35,-1,0,0,0.975,-0.99,-0.09,-0.02,1.55,-1,0,0,1.85]);
Group441.children[9] = OrientationInterpolator451;

OrientationInterpolator OrientationInterpolator452 = createNode("OrientationInterpolator");
OrientationInterpolator452.DEF = "Run_l_wrist_RotationInterpolator_Run";
OrientationInterpolator452.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator452.keyValue = new MFRotation(new float[-0.25,-1,0.08,0.14,0.25,1,0.08,0.14,0,0,1,0,-0.25,1,0.08,-0.14,-0.25,1,0.08,0.14]);
Group441.children[10] = OrientationInterpolator452;

OrientationInterpolator OrientationInterpolator453 = createNode("OrientationInterpolator");
OrientationInterpolator453.DEF = "Run_r_shoulder_RotationInterpolator_Run";
OrientationInterpolator453.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator453.keyValue = new MFRotation(new float[-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85]);
Group441.children[11] = OrientationInterpolator453;

OrientationInterpolator OrientationInterpolator454 = createNode("OrientationInterpolator");
OrientationInterpolator454.DEF = "Run_r_elbow_RotationInterpolator_Run";
OrientationInterpolator454.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator454.keyValue = new MFRotation(new float[-1,0,0,0.975,-0.99,0.09,0.02,1.55,-1,0,0,1.85,-0.99,0.19,-0.18,1.35,-1,0,0,0.975]);
Group441.children[12] = OrientationInterpolator454;

OrientationInterpolator OrientationInterpolator455 = createNode("OrientationInterpolator");
OrientationInterpolator455.DEF = "Run_r_wrist_RotationInterpolator_Run";
OrientationInterpolator455.key = new MFFloat(new float[0,1]);
OrientationInterpolator455.keyValue = new MFRotation(new float[-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273]);
Group441.children[13] = OrientationInterpolator455;

OrientationInterpolator OrientationInterpolator456 = createNode("OrientationInterpolator");
OrientationInterpolator456.DEF = "Run_lower_body_RotationInterpolator_Run";
OrientationInterpolator456.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator456.keyValue = new MFRotation(new float[0,-1,0,0.125,0,0,1,0,0,1,0,0.125,0,0,1,0,0,-1,0,0.125]);
Group441.children[14] = OrientationInterpolator456;

OrientationInterpolator OrientationInterpolator457 = createNode("OrientationInterpolator");
OrientationInterpolator457.DEF = "Run_head_RotationInterpolator_Run";
OrientationInterpolator457.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator457.keyValue = new MFRotation(new float[1,0,0,0.08,1,0,0,0.12,1,0,0,0.3,1,0,0,0.3,1,0,0,0.08]);
Group441.children[15] = OrientationInterpolator457;

OrientationInterpolator OrientationInterpolator458 = createNode("OrientationInterpolator");
OrientationInterpolator458.DEF = "Run_neck_RotationInterpolator_Run";
OrientationInterpolator458.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator458.keyValue = new MFRotation(new float[0.7,0,0,0.4,-0.7,-0.7,0,0.4,0,0,0,0.4,-0.7,0.7,0,0.4,0.7,0,0,0.4]);
Group441.children[16] = OrientationInterpolator458;

OrientationInterpolator OrientationInterpolator459 = createNode("OrientationInterpolator");
OrientationInterpolator459.DEF = "Run_upper_body_RotationInterpolator_Run";
OrientationInterpolator459.key = new MFFloat(new float[0,0.2545,0.4909,0.7636,1]);
OrientationInterpolator459.keyValue = new MFRotation(new float[0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5]);
Group441.children[17] = OrientationInterpolator459;

OrientationInterpolator OrientationInterpolator460 = createNode("OrientationInterpolator");
OrientationInterpolator460.DEF = "Run_whole_body_RotationInterpolator_Run";
OrientationInterpolator460.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator460.keyValue = new MFRotation(new float[1,0,0,0.06,1,0,0,0.167,1,0,0,0.06,1,0,0,0.168,1,0,0,0.06]);
Group441.children[18] = OrientationInterpolator460;

PositionInterpolator PositionInterpolator461 = createNode("PositionInterpolator");
PositionInterpolator461.DEF = "Run_whole_body_TranslationInterpolator_Run";
PositionInterpolator461.key = new MFFloat(new float[0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1]);
PositionInterpolator461.keyValue = new MFVec3f(new float[0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0]);
Group441.children[19] = PositionInterpolator461;

OrientationInterpolator OrientationInterpolator462 = createNode("OrientationInterpolator");
OrientationInterpolator462.DEF = "Run_l_sternoclavicular_RollInterpolator";
OrientationInterpolator462.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator462.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group441.children[20] = OrientationInterpolator462;

OrientationInterpolator OrientationInterpolator463 = createNode("OrientationInterpolator");
OrientationInterpolator463.DEF = "Run_l_acromioclavicular_RollInterpolator";
OrientationInterpolator463.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator463.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group441.children[21] = OrientationInterpolator463;

OrientationInterpolator OrientationInterpolator464 = createNode("OrientationInterpolator");
OrientationInterpolator464.DEF = "Run_r_sternoclavicular_RollInterpolator";
OrientationInterpolator464.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator464.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group441.children[22] = OrientationInterpolator464;

OrientationInterpolator OrientationInterpolator465 = createNode("OrientationInterpolator");
OrientationInterpolator465.DEF = "Run_r_acromioclavicular_RollInterpolator";
OrientationInterpolator465.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator465.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group441.children[23] = OrientationInterpolator465;

OrientationInterpolator OrientationInterpolator466 = createNode("OrientationInterpolator");
OrientationInterpolator466.DEF = "Run_sacroiliac_YawInterpolator";
OrientationInterpolator466.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator466.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group441.children[24] = OrientationInterpolator466;

OrientationInterpolator OrientationInterpolator467 = createNode("OrientationInterpolator");
OrientationInterpolator467.DEF = "Run_vl5_YawInterpolator";
OrientationInterpolator467.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator467.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group441.children[25] = OrientationInterpolator467;

OrientationInterpolator OrientationInterpolator468 = createNode("OrientationInterpolator");
OrientationInterpolator468.DEF = "Run_vc6_YawInterpolator";
OrientationInterpolator468.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator468.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group441.children[26] = OrientationInterpolator468;

OrientationInterpolator OrientationInterpolator469 = createNode("OrientationInterpolator");
OrientationInterpolator469.DEF = "Run_l_thumb1_PitchInterpolator";
OrientationInterpolator469.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator469.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group441.children[27] = OrientationInterpolator469;

OrientationInterpolator OrientationInterpolator470 = createNode("OrientationInterpolator");
OrientationInterpolator470.DEF = "Run_r_thumb1_PitchInterpolator";
OrientationInterpolator470.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator470.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group441.children[28] = OrientationInterpolator470;

children[9] = Group441;

Group Group471 = createNode("Group");
Group471.DEF = "JumpAnimation";
TimeSensor TimeSensor472 = createNode("TimeSensor");
TimeSensor472.DEF = "JumpTimer";
TimeSensor472.cycleInterval = 3.73;
TimeSensor472.loop = True;
Group471.children = new MFNode();

Group471.children[0] = TimeSensor472;

OrientationInterpolator OrientationInterpolator473 = createNode("OrientationInterpolator");
OrientationInterpolator473.DEF = "Jump_r_metatarsal_PitchInterpolator";
OrientationInterpolator473.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator473.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group471.children[1] = OrientationInterpolator473;

OrientationInterpolator OrientationInterpolator474 = createNode("OrientationInterpolator");
OrientationInterpolator474.DEF = "Jump_r_ankle_RotationInterpolator";
OrientationInterpolator474.key = new MFFloat(new float[0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator474.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,1.3,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0]);
Group471.children[2] = OrientationInterpolator474;

OrientationInterpolator OrientationInterpolator475 = createNode("OrientationInterpolator");
OrientationInterpolator475.DEF = "Jump_r_knee_RotationInterpolator";
OrientationInterpolator475.key = new MFFloat(new float[0,0.2,0.25,0.3,0.64,0.76,0.88,1]);
OrientationInterpolator475.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.5,1,0,0,1.7,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0]);
Group471.children[3] = OrientationInterpolator475;

OrientationInterpolator OrientationInterpolator476 = createNode("OrientationInterpolator");
OrientationInterpolator476.DEF = "Jump_r_hip_RotationInterpolator";
OrientationInterpolator476.key = new MFFloat(new float[0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator476.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.63,-1,0,0,1.7,-1,0,0,1.55,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0]);
Group471.children[4] = OrientationInterpolator476;

OrientationInterpolator OrientationInterpolator477 = createNode("OrientationInterpolator");
OrientationInterpolator477.DEF = "Jump_l_ankle_RotationInterpolator";
OrientationInterpolator477.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator477.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0]);
Group471.children[5] = OrientationInterpolator477;

OrientationInterpolator OrientationInterpolator478 = createNode("OrientationInterpolator");
OrientationInterpolator478.DEF = "Jump_l_knee_RotationInterpolator";
OrientationInterpolator478.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator478.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0]);
Group471.children[6] = OrientationInterpolator478;

OrientationInterpolator OrientationInterpolator479 = createNode("OrientationInterpolator");
OrientationInterpolator479.DEF = "Jump_l_hip_RotationInterpolator";
OrientationInterpolator479.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator479.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0]);
Group471.children[7] = OrientationInterpolator479;

OrientationInterpolator OrientationInterpolator480 = createNode("OrientationInterpolator");
OrientationInterpolator480.DEF = "Jump_lower_body_RotationInterpolator";
OrientationInterpolator480.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator480.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0]);
Group471.children[8] = OrientationInterpolator480;

OrientationInterpolator OrientationInterpolator481 = createNode("OrientationInterpolator");
OrientationInterpolator481.DEF = "Jump_r_wrist_RotationInterpolator";
OrientationInterpolator481.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator481.keyValue = new MFRotation(new float[0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
Group471.children[9] = OrientationInterpolator481;

OrientationInterpolator OrientationInterpolator482 = createNode("OrientationInterpolator");
OrientationInterpolator482.DEF = "Jump_r_elbow_RotationInterpolator";
OrientationInterpolator482.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator482.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
Group471.children[10] = OrientationInterpolator482;

OrientationInterpolator OrientationInterpolator483 = createNode("OrientationInterpolator");
OrientationInterpolator483.DEF = "Jump_r_shoulder_RotationInterpolator";
OrientationInterpolator483.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator483.keyValue = new MFRotation(new float[0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
Group471.children[11] = OrientationInterpolator483;

OrientationInterpolator OrientationInterpolator484 = createNode("OrientationInterpolator");
OrientationInterpolator484.DEF = "Jump_l_wrist_RotationInterpolator";
OrientationInterpolator484.key = new MFFloat(new float[0,0.48,0.52,0.64,0.76,0.88,1]);
OrientationInterpolator484.keyValue = new MFRotation(new float[0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0]);
Group471.children[12] = OrientationInterpolator484;

OrientationInterpolator OrientationInterpolator485 = createNode("OrientationInterpolator");
OrientationInterpolator485.DEF = "Jump_l_elbow_RotationInterpolator";
OrientationInterpolator485.key = new MFFloat(new float[0,0.28,0.32,0.58,0.72,1]);
OrientationInterpolator485.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.13,-1,0,0,1.7,-1,0,0,1.7,-1,0,0,0.4,0,0,1,0]);
Group471.children[13] = OrientationInterpolator485;

OrientationInterpolator OrientationInterpolator486 = createNode("OrientationInterpolator");
OrientationInterpolator486.DEF = "Jump_l_shoulder_RotationInterpolator";
OrientationInterpolator486.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator486.keyValue = new MFRotation(new float[0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0]);
Group471.children[14] = OrientationInterpolator486;

OrientationInterpolator OrientationInterpolator487 = createNode("OrientationInterpolator");
OrientationInterpolator487.DEF = "Jump_head_RotationInterpolator";
OrientationInterpolator487.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator487.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0]);
Group471.children[15] = OrientationInterpolator487;

OrientationInterpolator OrientationInterpolator488 = createNode("OrientationInterpolator");
OrientationInterpolator488.DEF = "Jump_neck_RotationInterpolator";
OrientationInterpolator488.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator488.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0]);
Group471.children[16] = OrientationInterpolator488;

OrientationInterpolator OrientationInterpolator489 = createNode("OrientationInterpolator");
OrientationInterpolator489.DEF = "Jump_upper_body_RotationInterpolator";
OrientationInterpolator489.key = new MFFloat(new float[0,0.22,0.28,0.34,0.71,0.88,1]);
OrientationInterpolator489.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.05,1,0,0,1.051,-1,0,0,0.257,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0]);
Group471.children[17] = OrientationInterpolator489;

OrientationInterpolator OrientationInterpolator490 = createNode("OrientationInterpolator");
OrientationInterpolator490.DEF = "Jump_whole_body_RotationInterpolator";
OrientationInterpolator490.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,1]);
OrientationInterpolator490.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group471.children[18] = OrientationInterpolator490;

PositionInterpolator PositionInterpolator491 = createNode("PositionInterpolator");
PositionInterpolator491.DEF = "Jump_whole_body_TranslationInterpolator";
PositionInterpolator491.key = new MFFloat(new float[0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1]);
PositionInterpolator491.keyValue = new MFVec3f(new float[0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0,0.35,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0]);
Group471.children[19] = PositionInterpolator491;

OrientationInterpolator OrientationInterpolator492 = createNode("OrientationInterpolator");
OrientationInterpolator492.DEF = "Jump_l_sternoclavicular_RollInterpolator";
OrientationInterpolator492.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator492.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group471.children[20] = OrientationInterpolator492;

OrientationInterpolator OrientationInterpolator493 = createNode("OrientationInterpolator");
OrientationInterpolator493.DEF = "Jump_l_acromioclavicular_RollInterpolator";
OrientationInterpolator493.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator493.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group471.children[21] = OrientationInterpolator493;

OrientationInterpolator OrientationInterpolator494 = createNode("OrientationInterpolator");
OrientationInterpolator494.DEF = "Jump_r_sternoclavicular_RollInterpolator";
OrientationInterpolator494.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator494.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group471.children[22] = OrientationInterpolator494;

OrientationInterpolator OrientationInterpolator495 = createNode("OrientationInterpolator");
OrientationInterpolator495.DEF = "Jump_r_acromioclavicular_RollInterpolator";
OrientationInterpolator495.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator495.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group471.children[23] = OrientationInterpolator495;

OrientationInterpolator OrientationInterpolator496 = createNode("OrientationInterpolator");
OrientationInterpolator496.DEF = "Jump_sacroiliac_YawInterpolator";
OrientationInterpolator496.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator496.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group471.children[24] = OrientationInterpolator496;

OrientationInterpolator OrientationInterpolator497 = createNode("OrientationInterpolator");
OrientationInterpolator497.DEF = "Jump_vl5_YawInterpolator";
OrientationInterpolator497.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator497.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,-0.1,0,1,0,0,0,1,0,0,1,0,0,0.6,0,1,0,0.1,0,1,0,0]);
Group471.children[25] = OrientationInterpolator497;

OrientationInterpolator OrientationInterpolator498 = createNode("OrientationInterpolator");
OrientationInterpolator498.DEF = "Jump_vc6_YawInterpolator";
OrientationInterpolator498.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator498.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0.8,0,1,0,0,0,1,0,0,-1,0,0,0.6,0,-1,0,0.8,0,1,0,0]);
Group471.children[26] = OrientationInterpolator498;

OrientationInterpolator OrientationInterpolator499 = createNode("OrientationInterpolator");
OrientationInterpolator499.DEF = "Jump_l_thumb1_PitchInterpolator";
OrientationInterpolator499.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator499.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group471.children[27] = OrientationInterpolator499;

OrientationInterpolator OrientationInterpolator500 = createNode("OrientationInterpolator");
OrientationInterpolator500.DEF = "Jump_r_thumb1_PitchInterpolator";
OrientationInterpolator500.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator500.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group471.children[28] = OrientationInterpolator500;

children[10] = Group471;

Group Group501 = createNode("Group");
Group501.DEF = "KickAnimation";
TimeSensor TimeSensor502 = createNode("TimeSensor");
TimeSensor502.DEF = "KickTimer";
TimeSensor502.cycleInterval = 3.73;
TimeSensor502.loop = True;
Group501.children = new MFNode();

Group501.children[0] = TimeSensor502;

OrientationInterpolator OrientationInterpolator503 = createNode("OrientationInterpolator");
OrientationInterpolator503.DEF = "Kick_l_sternoclavicular_RollInterpolator";
OrientationInterpolator503.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator503.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group501.children[1] = OrientationInterpolator503;

OrientationInterpolator OrientationInterpolator504 = createNode("OrientationInterpolator");
OrientationInterpolator504.DEF = "Kick_l_acromioclavicular_RollInterpolator";
OrientationInterpolator504.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator504.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group501.children[2] = OrientationInterpolator504;

OrientationInterpolator OrientationInterpolator505 = createNode("OrientationInterpolator");
OrientationInterpolator505.DEF = "Kick_l_shoulder_RollInterpolator";
OrientationInterpolator505.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator505.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.76,-0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0,0,1,0]);
Group501.children[3] = OrientationInterpolator505;

OrientationInterpolator OrientationInterpolator506 = createNode("OrientationInterpolator");
OrientationInterpolator506.DEF = "Kick_l_ForeArm_PitchInterpolator";
OrientationInterpolator506.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator506.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.55,-1,0.25,0,2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group501.children[4] = OrientationInterpolator506;

OrientationInterpolator OrientationInterpolator507 = createNode("OrientationInterpolator");
OrientationInterpolator507.DEF = "Kick_l_wrist_RollInterpolator";
OrientationInterpolator507.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator507.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group501.children[5] = OrientationInterpolator507;

OrientationInterpolator OrientationInterpolator508 = createNode("OrientationInterpolator");
OrientationInterpolator508.DEF = "Kick_l_thumb1_PitchInterpolator";
OrientationInterpolator508.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator508.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group501.children[6] = OrientationInterpolator508;

OrientationInterpolator OrientationInterpolator509 = createNode("OrientationInterpolator");
OrientationInterpolator509.DEF = "Kick_r_sternoclavicular_RollInterpolator";
OrientationInterpolator509.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator509.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group501.children[7] = OrientationInterpolator509;

OrientationInterpolator OrientationInterpolator510 = createNode("OrientationInterpolator");
OrientationInterpolator510.DEF = "Kick_r_acromioclavicular_RollInterpolator";
OrientationInterpolator510.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator510.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group501.children[8] = OrientationInterpolator510;

OrientationInterpolator OrientationInterpolator511 = createNode("OrientationInterpolator");
OrientationInterpolator511.DEF = "Kick_r_shoulder_RollInterpolator";
OrientationInterpolator511.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator511.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-1.76,0.25,0,1,-1.76,0,0,1,-1.256,0,0,1,-0.05,0,0,1,0]);
Group501.children[9] = OrientationInterpolator511;

OrientationInterpolator OrientationInterpolator512 = createNode("OrientationInterpolator");
OrientationInterpolator512.DEF = "Kick_r_ForeArm_PitchInterpolator";
OrientationInterpolator512.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator512.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.55,1,0.25,0,-2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group501.children[10] = OrientationInterpolator512;

OrientationInterpolator OrientationInterpolator513 = createNode("OrientationInterpolator");
OrientationInterpolator513.DEF = "Kick_r_wrist_RollInterpolator";
OrientationInterpolator513.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator513.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group501.children[11] = OrientationInterpolator513;

OrientationInterpolator OrientationInterpolator514 = createNode("OrientationInterpolator");
OrientationInterpolator514.DEF = "Kick_r_thumb1_PitchInterpolator";
OrientationInterpolator514.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator514.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group501.children[12] = OrientationInterpolator514;

OrientationInterpolator OrientationInterpolator515 = createNode("OrientationInterpolator");
OrientationInterpolator515.DEF = "Kick_r_hip_PitchInterpolator";
OrientationInterpolator515.key = new MFFloat(new float[0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator515.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.9,-1,0,0,1.75,-1,0,0,2.25,-1,0,0,2,1,0,0,0,1,0,0,0]);
Group501.children[13] = OrientationInterpolator515;

OrientationInterpolator OrientationInterpolator516 = createNode("OrientationInterpolator");
OrientationInterpolator516.DEF = "Kick_r_knee_PitchInterpolator";
OrientationInterpolator516.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator516.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.95,1,0,0,1.75,-1,0,0,0.28,1,0,0,0,1,0,0,0]);
Group501.children[14] = OrientationInterpolator516;

OrientationInterpolator OrientationInterpolator517 = createNode("OrientationInterpolator");
OrientationInterpolator517.DEF = "Kick_l_hip_PitchInterpolator";
OrientationInterpolator517.key = new MFFloat(new float[0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator517.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group501.children[15] = OrientationInterpolator517;

OrientationInterpolator OrientationInterpolator518 = createNode("OrientationInterpolator");
OrientationInterpolator518.DEF = "Kick_l_knee_PitchInterpolator";
OrientationInterpolator518.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator518.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group501.children[16] = OrientationInterpolator518;

OrientationInterpolator OrientationInterpolator519 = createNode("OrientationInterpolator");
OrientationInterpolator519.DEF = "Kick_r_ankle_PitchInterpolator";
OrientationInterpolator519.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator519.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.9,-1,0,0,0.95,1,0,0,0.75,-1,0,0,0.05,1,0,0,0]);
Group501.children[17] = OrientationInterpolator519;

OrientationInterpolator OrientationInterpolator520 = createNode("OrientationInterpolator");
OrientationInterpolator520.DEF = "Kick_r_metatarsal_PitchInterpolator";
OrientationInterpolator520.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator520.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group501.children[18] = OrientationInterpolator520;

OrientationInterpolator OrientationInterpolator521 = createNode("OrientationInterpolator");
OrientationInterpolator521.DEF = "Kick_sacroiliac_YawInterpolator";
OrientationInterpolator521.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator521.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group501.children[19] = OrientationInterpolator521;

OrientationInterpolator OrientationInterpolator522 = createNode("OrientationInterpolator");
OrientationInterpolator522.DEF = "Kick_vl5_YawInterpolator";
OrientationInterpolator522.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator522.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group501.children[20] = OrientationInterpolator522;

OrientationInterpolator OrientationInterpolator523 = createNode("OrientationInterpolator");
OrientationInterpolator523.DEF = "Kick_vc6_YawInterpolator";
OrientationInterpolator523.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator523.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group501.children[21] = OrientationInterpolator523;

OrientationInterpolator OrientationInterpolator524 = createNode("OrientationInterpolator");
OrientationInterpolator524.DEF = "Kick_lower_body_RotationInterpolator";
OrientationInterpolator524.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator524.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group501.children[22] = OrientationInterpolator524;

OrientationInterpolator OrientationInterpolator525 = createNode("OrientationInterpolator");
OrientationInterpolator525.DEF = "Kick_upper_body_RotationInterpolator";
OrientationInterpolator525.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator525.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group501.children[23] = OrientationInterpolator525;

OrientationInterpolator OrientationInterpolator526 = createNode("OrientationInterpolator");
OrientationInterpolator526.DEF = "Kick_whole_body_RotationInterpolator";
OrientationInterpolator526.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator526.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group501.children[24] = OrientationInterpolator526;

PositionInterpolator PositionInterpolator527 = createNode("PositionInterpolator");
PositionInterpolator527.DEF = "Kick_whole_body_TranslationInterpolator";
PositionInterpolator527.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator527.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group501.children[25] = PositionInterpolator527;

OrientationInterpolator OrientationInterpolator528 = createNode("OrientationInterpolator");
OrientationInterpolator528.DEF = "Kick_neck_RotationInterpolator";
OrientationInterpolator528.key = new MFFloat(new float[0,0.25,0.55,1]);
OrientationInterpolator528.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0]);
Group501.children[26] = OrientationInterpolator528;

children[11] = Group501;

Group Group529 = createNode("Group");
Group529.DEF = "Interface";
Transform Transform530 = createNode("Transform");
Transform530.DEF = "CoordinateSystemFloor";
Transform530.scale = new SFVec3f(new float[0.1,0.1,0.1]);
Shape Shape531 = createNode("Shape");
Shape531.DEF = "AxisLinesShape";
//RGB lines showing XYZ axes
IndexedLineSet IndexedLineSet532 = createNode("IndexedLineSet");
IndexedLineSet532.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet532.colorPerVertex = False;
IndexedLineSet532.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
Coordinate Coordinate533 = createNode("Coordinate");
Coordinate533.point = new MFVec3f(new float[0,0,0,1,0,0,0,1,0,0,0,1]);
IndexedLineSet532.coord = Coordinate533;

Color Color534 = createNode("Color");
Color534.color = new MFColor(new float[1,0,0,0,0.6,0,0,0,1]);
IndexedLineSet532.color = Color534;

Shape531.geometry = IndexedLineSet532;

Transform530.children = new MFNode();

Transform530.children[0] = Shape531;

Group529.children = new MFNode();

Group529.children[0] = Transform530;

ProximitySensor ProximitySensor535 = createNode("ProximitySensor");
ProximitySensor535.DEF = "HudProx";
ProximitySensor535.size = new SFVec3f(new float[50,50,50]);
Group529.children[1] = ProximitySensor535;

Transform Transform536 = createNode("Transform");
Transform536.DEF = "HudXform";
Transform536.rotation = new SFRotation(new float[0,1,0,0.78]);
Transform536.translation = new SFVec3f(new float[2,1,2]);
Transform Transform537 = createNode("Transform");
Transform537.scale = new SFVec3f(new float[0.02,0.02,0.02]);
Transform537.translation = new SFVec3f(new float[-0.4,-0.01,-0.75]);
Transform Transform538 = createNode("Transform");
Transform538.DEF = "Stand_Text";
Transform538.translation = new SFVec3f(new float[0,-0.9,0]);
TouchSensor TouchSensor539 = createNode("TouchSensor");
TouchSensor539.DEF = "Stand_Touch";
Transform538.children = new MFNode();

Transform538.children[0] = TouchSensor539;

Shape Shape540 = createNode("Shape");
Shape540.DEF = "StandText";
Appearance Appearance541 = createNode("Appearance");
Material Material542 = createNode("Material");
Material542.DEF = "text_color";
Material542.ambientIntensity = 1;
Material542.diffuseColor = new SFColor(new float[0.819,0.521,0.169]);
Material542.emissiveColor = new SFColor(new float[0.819,0.521,0.169]);
Material542.specularColor = new SFColor(new float[0.819,0.521,0.169]);
Appearance541.material = Material542;

Shape540.appearance = Appearance541;

Text Text543 = createNode("Text");
Text543.string = new MFString(new java.lang.String["Stand"]);
FontStyle FontStyle544 = createNode("FontStyle");
FontStyle544.family = new MFString(new java.lang.String["SANS"]);
Text543.fontStyle = FontStyle544;

Shape540.geometry = Text543;

Transform538.children[1] = Shape540;

Shape Shape545 = createNode("Shape");
Shape545.DEF = "Stand_Back";
Appearance Appearance546 = createNode("Appearance");
Material Material547 = createNode("Material");
Material547.DEF = "Clear";
Material547.ambientIntensity = 1;
Material547.diffuseColor = new SFColor(new float[0,0.5,0]);
Material547.emissiveColor = new SFColor(new float[0,0.5,0]);
Material547.transparency = 0.8;
Appearance546.material = Material547;

Shape545.appearance = Appearance546;

IndexedFaceSet IndexedFaceSet548 = createNode("IndexedFaceSet");
IndexedFaceSet548.DEF = "Backing";
IndexedFaceSet548.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate549 = createNode("Coordinate");
Coordinate549.point = new MFVec3f(new float[-0.2,-0.25,-0.01,3,-0.25,-0.01,3,1,-0.01,-0.2,1,-0.01]);
IndexedFaceSet548.coord = Coordinate549;

Shape545.geometry = IndexedFaceSet548;

Transform538.children[2] = Shape545;

Transform537.children = new MFNode();

Transform537.children[0] = Transform538;

Transform Transform550 = createNode("Transform");
Transform550.DEF = "Pitch_Text";
Transform550.translation = new SFVec3f(new float[0,-2.4,0]);
TouchSensor TouchSensor551 = createNode("TouchSensor");
TouchSensor551.DEF = "Pitch_Touch";
Transform550.children = new MFNode();

Transform550.children[0] = TouchSensor551;

Shape Shape552 = createNode("Shape");
Shape552.DEF = "PitchText";
Appearance Appearance553 = createNode("Appearance");
Material Material554 = createNode("Material");
Material554.USE = "text_color";
Appearance553.material = Material554;

Shape552.appearance = Appearance553;

Text Text555 = createNode("Text");
Text555.string = new MFString(new java.lang.String["Pitch"]);
FontStyle FontStyle556 = createNode("FontStyle");
FontStyle556.family = new MFString(new java.lang.String["SANS"]);
Text555.fontStyle = FontStyle556;

Shape552.geometry = Text555;

Transform550.children[1] = Shape552;

Shape Shape557 = createNode("Shape");
Shape557.DEF = "Pitch_Back";
Appearance Appearance558 = createNode("Appearance");
Material Material559 = createNode("Material");
Material559.USE = "Clear";
Appearance558.material = Material559;

Shape557.appearance = Appearance558;

IndexedFaceSet IndexedFaceSet560 = createNode("IndexedFaceSet");
IndexedFaceSet560.USE = "Backing";
Shape557.geometry = IndexedFaceSet560;

Transform550.children[2] = Shape557;

Transform537.children[1] = Transform550;

Transform Transform561 = createNode("Transform");
Transform561.DEF = "Yaw_Text";
Transform561.translation = new SFVec3f(new float[0,-3.8,0]);
TouchSensor TouchSensor562 = createNode("TouchSensor");
TouchSensor562.DEF = "Yaw_Touch";
Transform561.children = new MFNode();

Transform561.children[0] = TouchSensor562;

Shape Shape563 = createNode("Shape");
Shape563.DEF = "YawText";
Appearance Appearance564 = createNode("Appearance");
Material Material565 = createNode("Material");
Material565.USE = "text_color";
Appearance564.material = Material565;

Shape563.appearance = Appearance564;

Text Text566 = createNode("Text");
Text566.string = new MFString(new java.lang.String["Yaw"]);
FontStyle FontStyle567 = createNode("FontStyle");
FontStyle567.family = new MFString(new java.lang.String["SANS"]);
Text566.fontStyle = FontStyle567;

Shape563.geometry = Text566;

Transform561.children[1] = Shape563;

Shape Shape568 = createNode("Shape");
Shape568.DEF = "Yaw_Back";
Appearance Appearance569 = createNode("Appearance");
Material Material570 = createNode("Material");
Material570.USE = "Clear";
Appearance569.material = Material570;

Shape568.appearance = Appearance569;

IndexedFaceSet IndexedFaceSet571 = createNode("IndexedFaceSet");
IndexedFaceSet571.USE = "Backing";
Shape568.geometry = IndexedFaceSet571;

Transform561.children[2] = Shape568;

Transform537.children[2] = Transform561;

Transform Transform572 = createNode("Transform");
Transform572.DEF = "Roll_Text";
Transform572.translation = new SFVec3f(new float[0,-5.2,0]);
TouchSensor TouchSensor573 = createNode("TouchSensor");
TouchSensor573.DEF = "Roll_Touch";
Transform572.children = new MFNode();

Transform572.children[0] = TouchSensor573;

Shape Shape574 = createNode("Shape");
Shape574.DEF = "RollText";
Appearance Appearance575 = createNode("Appearance");
Material Material576 = createNode("Material");
Material576.USE = "text_color";
Appearance575.material = Material576;

Shape574.appearance = Appearance575;

Text Text577 = createNode("Text");
Text577.string = new MFString(new java.lang.String["Roll"]);
FontStyle FontStyle578 = createNode("FontStyle");
FontStyle578.family = new MFString(new java.lang.String["SANS"]);
Text577.fontStyle = FontStyle578;

Shape574.geometry = Text577;

Transform572.children[1] = Shape574;

Shape Shape579 = createNode("Shape");
Shape579.DEF = "Roll_Back";
Appearance Appearance580 = createNode("Appearance");
Material Material581 = createNode("Material");
Material581.USE = "Clear";
Appearance580.material = Material581;

Shape579.appearance = Appearance580;

IndexedFaceSet IndexedFaceSet582 = createNode("IndexedFaceSet");
IndexedFaceSet582.USE = "Backing";
Shape579.geometry = IndexedFaceSet582;

Transform572.children[2] = Shape579;

Transform537.children[3] = Transform572;

Transform Transform583 = createNode("Transform");
Transform583.DEF = "Walk_Text";
Transform583.translation = new SFVec3f(new float[0,-6.6,0]);
TouchSensor TouchSensor584 = createNode("TouchSensor");
TouchSensor584.DEF = "Walk_Touch";
Transform583.children = new MFNode();

Transform583.children[0] = TouchSensor584;

Shape Shape585 = createNode("Shape");
Shape585.DEF = "WalkText";
Appearance Appearance586 = createNode("Appearance");
Material Material587 = createNode("Material");
Material587.USE = "text_color";
Appearance586.material = Material587;

Shape585.appearance = Appearance586;

Text Text588 = createNode("Text");
Text588.string = new MFString(new java.lang.String["Walk"]);
FontStyle FontStyle589 = createNode("FontStyle");
FontStyle589.family = new MFString(new java.lang.String["SANS"]);
Text588.fontStyle = FontStyle589;

Shape585.geometry = Text588;

Transform583.children[1] = Shape585;

Shape Shape590 = createNode("Shape");
Shape590.DEF = "Walk_Back";
Appearance Appearance591 = createNode("Appearance");
Material Material592 = createNode("Material");
Material592.USE = "Clear";
Appearance591.material = Material592;

Shape590.appearance = Appearance591;

IndexedFaceSet IndexedFaceSet593 = createNode("IndexedFaceSet");
IndexedFaceSet593.USE = "Backing";
Shape590.geometry = IndexedFaceSet593;

Transform583.children[2] = Shape590;

Transform537.children[4] = Transform583;

Transform Transform594 = createNode("Transform");
Transform594.DEF = "Run_Text";
Transform594.translation = new SFVec3f(new float[0,-8,0]);
TouchSensor TouchSensor595 = createNode("TouchSensor");
TouchSensor595.DEF = "Run_Touch";
Transform594.children = new MFNode();

Transform594.children[0] = TouchSensor595;

Shape Shape596 = createNode("Shape");
Shape596.DEF = "RunText";
Appearance Appearance597 = createNode("Appearance");
Material Material598 = createNode("Material");
Material598.USE = "text_color";
Appearance597.material = Material598;

Shape596.appearance = Appearance597;

Text Text599 = createNode("Text");
Text599.string = new MFString(new java.lang.String["Run"]);
FontStyle FontStyle600 = createNode("FontStyle");
FontStyle600.family = new MFString(new java.lang.String["SANS"]);
Text599.fontStyle = FontStyle600;

Shape596.geometry = Text599;

Transform594.children[1] = Shape596;

Shape Shape601 = createNode("Shape");
Shape601.DEF = "Run_Back";
Appearance Appearance602 = createNode("Appearance");
Material Material603 = createNode("Material");
Material603.USE = "Clear";
Appearance602.material = Material603;

Shape601.appearance = Appearance602;

IndexedFaceSet IndexedFaceSet604 = createNode("IndexedFaceSet");
IndexedFaceSet604.USE = "Backing";
Shape601.geometry = IndexedFaceSet604;

Transform594.children[2] = Shape601;

Transform537.children[5] = Transform594;

Transform Transform605 = createNode("Transform");
Transform605.DEF = "Jump_Text";
Transform605.translation = new SFVec3f(new float[0,-9.4,0]);
TouchSensor TouchSensor606 = createNode("TouchSensor");
TouchSensor606.DEF = "Jump_Touch";
Transform605.children = new MFNode();

Transform605.children[0] = TouchSensor606;

Shape Shape607 = createNode("Shape");
Shape607.DEF = "JumpText";
Appearance Appearance608 = createNode("Appearance");
Material Material609 = createNode("Material");
Material609.USE = "text_color";
Appearance608.material = Material609;

Shape607.appearance = Appearance608;

Text Text610 = createNode("Text");
Text610.string = new MFString(new java.lang.String["Jump"]);
FontStyle FontStyle611 = createNode("FontStyle");
FontStyle611.family = new MFString(new java.lang.String["SANS"]);
Text610.fontStyle = FontStyle611;

Shape607.geometry = Text610;

Transform605.children[1] = Shape607;

Shape Shape612 = createNode("Shape");
Shape612.DEF = "Jump_Back";
Appearance Appearance613 = createNode("Appearance");
Material Material614 = createNode("Material");
Material614.USE = "Clear";
Appearance613.material = Material614;

Shape612.appearance = Appearance613;

IndexedFaceSet IndexedFaceSet615 = createNode("IndexedFaceSet");
IndexedFaceSet615.USE = "Backing";
Shape612.geometry = IndexedFaceSet615;

Transform605.children[2] = Shape612;

Transform537.children[6] = Transform605;

Transform Transform616 = createNode("Transform");
Transform616.DEF = "Kick_Text";
Transform616.translation = new SFVec3f(new float[0,-10.8,0]);
TouchSensor TouchSensor617 = createNode("TouchSensor");
TouchSensor617.DEF = "Kick_Touch";
Transform616.children = new MFNode();

Transform616.children[0] = TouchSensor617;

Shape Shape618 = createNode("Shape");
Shape618.DEF = "KickText";
Appearance Appearance619 = createNode("Appearance");
Material Material620 = createNode("Material");
Material620.USE = "text_color";
Appearance619.material = Material620;

Shape618.appearance = Appearance619;

Text Text621 = createNode("Text");
Text621.string = new MFString(new java.lang.String["Kick"]);
FontStyle FontStyle622 = createNode("FontStyle");
FontStyle622.family = new MFString(new java.lang.String["SANS"]);
Text621.fontStyle = FontStyle622;

Shape618.geometry = Text621;

Transform616.children[1] = Shape618;

Shape Shape623 = createNode("Shape");
Shape623.DEF = "Kick_Back";
Appearance Appearance624 = createNode("Appearance");
Material Material625 = createNode("Material");
Material625.USE = "Clear";
Appearance624.material = Material625;

Shape623.appearance = Appearance624;

IndexedFaceSet IndexedFaceSet626 = createNode("IndexedFaceSet");
IndexedFaceSet626.USE = "Backing";
Shape623.geometry = IndexedFaceSet626;

Transform616.children[2] = Shape623;

Transform537.children[7] = Transform616;

Transform Transform627 = createNode("Transform");
Transform627.DEF = "Stop_Text";
Transform627.translation = new SFVec3f(new float[0,0.4,0]);
TouchSensor TouchSensor628 = createNode("TouchSensor");
TouchSensor628.DEF = "Stop_Touch";
Transform627.children = new MFNode();

Transform627.children[0] = TouchSensor628;

Shape Shape629 = createNode("Shape");
Shape629.DEF = "StopText";
Appearance Appearance630 = createNode("Appearance");
Material Material631 = createNode("Material");
Material631.USE = "text_color";
Appearance630.material = Material631;

Shape629.appearance = Appearance630;

Text Text632 = createNode("Text");
Text632.string = new MFString(new java.lang.String["Default"]);
FontStyle FontStyle633 = createNode("FontStyle");
FontStyle633.family = new MFString(new java.lang.String["SANS"]);
Text632.fontStyle = FontStyle633;

Shape629.geometry = Text632;

Transform627.children[1] = Shape629;

Shape Shape634 = createNode("Shape");
Shape634.DEF = "Stop_Back";
Appearance Appearance635 = createNode("Appearance");
Material Material636 = createNode("Material");
Material636.USE = "Clear";
Appearance635.material = Material636;

Shape634.appearance = Appearance635;

IndexedFaceSet IndexedFaceSet637 = createNode("IndexedFaceSet");
IndexedFaceSet637.USE = "Backing";
Shape634.geometry = IndexedFaceSet637;

Transform627.children[2] = Shape634;

Transform537.children[8] = Transform627;

Transform Transform638 = createNode("Transform");
Transform638.DEF = "SceneLabel";
Transform638.translation = new SFVec3f(new float[1.3,3,0]);
Shape Shape639 = createNode("Shape");
Shape639.DEF = "SceneLabelText";
Appearance Appearance640 = createNode("Appearance");
Material Material641 = createNode("Material");
Material641.USE = "text_color";
Appearance640.material = Material641;

Shape639.appearance = Appearance640;

Text Text642 = createNode("Text");
Text642.string = new MFString(new java.lang.String["BoxMan3","Animation"]);
FontStyle FontStyle643 = createNode("FontStyle");
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

children[12] = Group529;

ROUTE ROUTE644 = createNode("ROUTE");
ROUTE644.fromField = "fraction_changed";
ROUTE644.fromNode = "StopTimer";
ROUTE644.toField = "set_fraction";
ROUTE644.toNode = "Stop_humanoid_root_TranslationInterpolator";
children[13] = ROUTE644;

ROUTE ROUTE645 = createNode("ROUTE");
ROUTE645.fromField = "fraction_changed";
ROUTE645.fromNode = "StopTimer";
ROUTE645.toField = "set_fraction";
ROUTE645.toNode = "Stop_humanoid_root_RotationInterpolator";
children[14] = ROUTE645;

ROUTE ROUTE646 = createNode("ROUTE");
ROUTE646.fromField = "fraction_changed";
ROUTE646.fromNode = "StopTimer";
ROUTE646.toField = "set_fraction";
ROUTE646.toNode = "Stop_sacroiliac_RotationInterpolator";
children[15] = ROUTE646;

ROUTE ROUTE647 = createNode("ROUTE");
ROUTE647.fromField = "fraction_changed";
ROUTE647.fromNode = "StopTimer";
ROUTE647.toField = "set_fraction";
ROUTE647.toNode = "Stop_l_hip_RotationInterpolator";
children[16] = ROUTE647;

ROUTE ROUTE648 = createNode("ROUTE");
ROUTE648.fromField = "fraction_changed";
ROUTE648.fromNode = "StopTimer";
ROUTE648.toField = "set_fraction";
ROUTE648.toNode = "Stop_l_knee_RotationInterpolator";
children[17] = ROUTE648;

ROUTE ROUTE649 = createNode("ROUTE");
ROUTE649.fromField = "fraction_changed";
ROUTE649.fromNode = "StopTimer";
ROUTE649.toField = "set_fraction";
ROUTE649.toNode = "Stop_l_ankle_RotationInterpolator";
children[18] = ROUTE649;

ROUTE ROUTE650 = createNode("ROUTE");
ROUTE650.fromField = "fraction_changed";
ROUTE650.fromNode = "StopTimer";
ROUTE650.toField = "set_fraction";
ROUTE650.toNode = "Stop_l_subtalar_RotationInterpolator";
children[19] = ROUTE650;

ROUTE ROUTE651 = createNode("ROUTE");
ROUTE651.fromField = "fraction_changed";
ROUTE651.fromNode = "StopTimer";
ROUTE651.toField = "set_fraction";
ROUTE651.toNode = "Stop_l_midtarsal_RotationInterpolator";
children[20] = ROUTE651;

ROUTE ROUTE652 = createNode("ROUTE");
ROUTE652.fromField = "fraction_changed";
ROUTE652.fromNode = "StopTimer";
ROUTE652.toField = "set_fraction";
ROUTE652.toNode = "Stop_l_metatarsal_RotationInterpolator";
children[21] = ROUTE652;

ROUTE ROUTE653 = createNode("ROUTE");
ROUTE653.fromField = "fraction_changed";
ROUTE653.fromNode = "StopTimer";
ROUTE653.toField = "set_fraction";
ROUTE653.toNode = "Stop_r_hip_RotationInterpolator";
children[22] = ROUTE653;

ROUTE ROUTE654 = createNode("ROUTE");
ROUTE654.fromField = "fraction_changed";
ROUTE654.fromNode = "StopTimer";
ROUTE654.toField = "set_fraction";
ROUTE654.toNode = "Stop_r_knee_RotationInterpolator";
children[23] = ROUTE654;

ROUTE ROUTE655 = createNode("ROUTE");
ROUTE655.fromField = "fraction_changed";
ROUTE655.fromNode = "StopTimer";
ROUTE655.toField = "set_fraction";
ROUTE655.toNode = "Stop_r_ankle_RotationInterpolator";
children[24] = ROUTE655;

ROUTE ROUTE656 = createNode("ROUTE");
ROUTE656.fromField = "fraction_changed";
ROUTE656.fromNode = "StopTimer";
ROUTE656.toField = "set_fraction";
ROUTE656.toNode = "Stop_r_subtalar_RotationInterpolator";
children[25] = ROUTE656;

ROUTE ROUTE657 = createNode("ROUTE");
ROUTE657.fromField = "fraction_changed";
ROUTE657.fromNode = "StopTimer";
ROUTE657.toField = "set_fraction";
ROUTE657.toNode = "Stop_r_midtarsal_RotationInterpolator";
children[26] = ROUTE657;

ROUTE ROUTE658 = createNode("ROUTE");
ROUTE658.fromField = "fraction_changed";
ROUTE658.fromNode = "StopTimer";
ROUTE658.toField = "set_fraction";
ROUTE658.toNode = "Stop_r_metatarsal_RotationInterpolator";
children[27] = ROUTE658;

ROUTE ROUTE659 = createNode("ROUTE");
ROUTE659.fromField = "fraction_changed";
ROUTE659.fromNode = "StopTimer";
ROUTE659.toField = "set_fraction";
ROUTE659.toNode = "Stop_vl5_RotationInterpolator";
children[28] = ROUTE659;

ROUTE ROUTE660 = createNode("ROUTE");
ROUTE660.fromField = "fraction_changed";
ROUTE660.fromNode = "StopTimer";
ROUTE660.toField = "set_fraction";
ROUTE660.toNode = "Stop_vl4_RotationInterpolator";
children[29] = ROUTE660;

ROUTE ROUTE661 = createNode("ROUTE");
ROUTE661.fromField = "fraction_changed";
ROUTE661.fromNode = "StopTimer";
ROUTE661.toField = "set_fraction";
ROUTE661.toNode = "Stop_vl3_RotationInterpolator";
children[30] = ROUTE661;

ROUTE ROUTE662 = createNode("ROUTE");
ROUTE662.fromField = "fraction_changed";
ROUTE662.fromNode = "StopTimer";
ROUTE662.toField = "set_fraction";
ROUTE662.toNode = "Stop_vl2_RotationInterpolator";
children[31] = ROUTE662;

ROUTE ROUTE663 = createNode("ROUTE");
ROUTE663.fromField = "fraction_changed";
ROUTE663.fromNode = "StopTimer";
ROUTE663.toField = "set_fraction";
ROUTE663.toNode = "Stop_vl1_RotationInterpolator";
children[32] = ROUTE663;

ROUTE ROUTE664 = createNode("ROUTE");
ROUTE664.fromField = "fraction_changed";
ROUTE664.fromNode = "StopTimer";
ROUTE664.toField = "set_fraction";
ROUTE664.toNode = "Stop_vt12_RotationInterpolator";
children[33] = ROUTE664;

ROUTE ROUTE665 = createNode("ROUTE");
ROUTE665.fromField = "fraction_changed";
ROUTE665.fromNode = "StopTimer";
ROUTE665.toField = "set_fraction";
ROUTE665.toNode = "Stop_vt11_RotationInterpolator";
children[34] = ROUTE665;

ROUTE ROUTE666 = createNode("ROUTE");
ROUTE666.fromField = "fraction_changed";
ROUTE666.fromNode = "StopTimer";
ROUTE666.toField = "set_fraction";
ROUTE666.toNode = "Stop_vt10_RotationInterpolator";
children[35] = ROUTE666;

ROUTE ROUTE667 = createNode("ROUTE");
ROUTE667.fromField = "fraction_changed";
ROUTE667.fromNode = "StopTimer";
ROUTE667.toField = "set_fraction";
ROUTE667.toNode = "Stop_vt9_RotationInterpolator";
children[36] = ROUTE667;

ROUTE ROUTE668 = createNode("ROUTE");
ROUTE668.fromField = "fraction_changed";
ROUTE668.fromNode = "StopTimer";
ROUTE668.toField = "set_fraction";
ROUTE668.toNode = "Stop_vt8_RotationInterpolator";
children[37] = ROUTE668;

ROUTE ROUTE669 = createNode("ROUTE");
ROUTE669.fromField = "fraction_changed";
ROUTE669.fromNode = "StopTimer";
ROUTE669.toField = "set_fraction";
ROUTE669.toNode = "Stop_vt7_RotationInterpolator";
children[38] = ROUTE669;

ROUTE ROUTE670 = createNode("ROUTE");
ROUTE670.fromField = "fraction_changed";
ROUTE670.fromNode = "StopTimer";
ROUTE670.toField = "set_fraction";
ROUTE670.toNode = "Stop_vt6_RotationInterpolator";
children[39] = ROUTE670;

ROUTE ROUTE671 = createNode("ROUTE");
ROUTE671.fromField = "fraction_changed";
ROUTE671.fromNode = "StopTimer";
ROUTE671.toField = "set_fraction";
ROUTE671.toNode = "Stop_vt5_RotationInterpolator";
children[40] = ROUTE671;

ROUTE ROUTE672 = createNode("ROUTE");
ROUTE672.fromField = "fraction_changed";
ROUTE672.fromNode = "StopTimer";
ROUTE672.toField = "set_fraction";
ROUTE672.toNode = "Stop_vt4_RotationInterpolator";
children[41] = ROUTE672;

ROUTE ROUTE673 = createNode("ROUTE");
ROUTE673.fromField = "fraction_changed";
ROUTE673.fromNode = "StopTimer";
ROUTE673.toField = "set_fraction";
ROUTE673.toNode = "Stop_vt3_RotationInterpolator";
children[42] = ROUTE673;

ROUTE ROUTE674 = createNode("ROUTE");
ROUTE674.fromField = "fraction_changed";
ROUTE674.fromNode = "StopTimer";
ROUTE674.toField = "set_fraction";
ROUTE674.toNode = "Stop_vt2_RotationInterpolator";
children[43] = ROUTE674;

ROUTE ROUTE675 = createNode("ROUTE");
ROUTE675.fromField = "fraction_changed";
ROUTE675.fromNode = "StopTimer";
ROUTE675.toField = "set_fraction";
ROUTE675.toNode = "Stop_vt1_RotationInterpolator";
children[44] = ROUTE675;

ROUTE ROUTE676 = createNode("ROUTE");
ROUTE676.fromField = "fraction_changed";
ROUTE676.fromNode = "StopTimer";
ROUTE676.toField = "set_fraction";
ROUTE676.toNode = "Stop_vc7_RotationInterpolator";
children[45] = ROUTE676;

ROUTE ROUTE677 = createNode("ROUTE");
ROUTE677.fromField = "fraction_changed";
ROUTE677.fromNode = "StopTimer";
ROUTE677.toField = "set_fraction";
ROUTE677.toNode = "Stop_vc6_RotationInterpolator";
children[46] = ROUTE677;

ROUTE ROUTE678 = createNode("ROUTE");
ROUTE678.fromField = "fraction_changed";
ROUTE678.fromNode = "StopTimer";
ROUTE678.toField = "set_fraction";
ROUTE678.toNode = "Stop_vc5_RotationInterpolator";
children[47] = ROUTE678;

ROUTE ROUTE679 = createNode("ROUTE");
ROUTE679.fromField = "fraction_changed";
ROUTE679.fromNode = "StopTimer";
ROUTE679.toField = "set_fraction";
ROUTE679.toNode = "Stop_vc4_RotationInterpolator";
children[48] = ROUTE679;

ROUTE ROUTE680 = createNode("ROUTE");
ROUTE680.fromField = "fraction_changed";
ROUTE680.fromNode = "StopTimer";
ROUTE680.toField = "set_fraction";
ROUTE680.toNode = "Stop_vc3_RotationInterpolator";
children[49] = ROUTE680;

ROUTE ROUTE681 = createNode("ROUTE");
ROUTE681.fromField = "fraction_changed";
ROUTE681.fromNode = "StopTimer";
ROUTE681.toField = "set_fraction";
ROUTE681.toNode = "Stop_vc2_RotationInterpolator";
children[50] = ROUTE681;

ROUTE ROUTE682 = createNode("ROUTE");
ROUTE682.fromField = "fraction_changed";
ROUTE682.fromNode = "StopTimer";
ROUTE682.toField = "set_fraction";
ROUTE682.toNode = "Stop_vc1_RotationInterpolator";
children[51] = ROUTE682;

ROUTE ROUTE683 = createNode("ROUTE");
ROUTE683.fromField = "fraction_changed";
ROUTE683.fromNode = "StopTimer";
ROUTE683.toField = "set_fraction";
ROUTE683.toNode = "Stop_skullbase_RotationInterpolator";
children[52] = ROUTE683;

ROUTE ROUTE684 = createNode("ROUTE");
ROUTE684.fromField = "fraction_changed";
ROUTE684.fromNode = "StopTimer";
ROUTE684.toField = "set_fraction";
ROUTE684.toNode = "Stop_l_eyeball_joint_RotationInterpolator";
children[53] = ROUTE684;

ROUTE ROUTE685 = createNode("ROUTE");
ROUTE685.fromField = "fraction_changed";
ROUTE685.fromNode = "StopTimer";
ROUTE685.toField = "set_fraction";
ROUTE685.toNode = "Stop_r_eyeball_joint_RotationInterpolator";
children[54] = ROUTE685;

ROUTE ROUTE686 = createNode("ROUTE");
ROUTE686.fromField = "fraction_changed";
ROUTE686.fromNode = "StopTimer";
ROUTE686.toField = "set_fraction";
ROUTE686.toNode = "Stop_l_sternoclavicular_RotationInterpolator";
children[55] = ROUTE686;

ROUTE ROUTE687 = createNode("ROUTE");
ROUTE687.fromField = "fraction_changed";
ROUTE687.fromNode = "StopTimer";
ROUTE687.toField = "set_fraction";
ROUTE687.toNode = "Stop_l_acromioclavicular_RotationInterpolator";
children[56] = ROUTE687;

ROUTE ROUTE688 = createNode("ROUTE");
ROUTE688.fromField = "fraction_changed";
ROUTE688.fromNode = "StopTimer";
ROUTE688.toField = "set_fraction";
ROUTE688.toNode = "Stop_l_shoulder_RotationInterpolator";
children[57] = ROUTE688;

ROUTE ROUTE689 = createNode("ROUTE");
ROUTE689.fromField = "fraction_changed";
ROUTE689.fromNode = "StopTimer";
ROUTE689.toField = "set_fraction";
ROUTE689.toNode = "Stop_l_elbow_RotationInterpolator";
children[58] = ROUTE689;

ROUTE ROUTE690 = createNode("ROUTE");
ROUTE690.fromField = "fraction_changed";
ROUTE690.fromNode = "StopTimer";
ROUTE690.toField = "set_fraction";
ROUTE690.toNode = "Stop_l_wrist_RotationInterpolator";
children[59] = ROUTE690;

ROUTE ROUTE691 = createNode("ROUTE");
ROUTE691.fromField = "fraction_changed";
ROUTE691.fromNode = "StopTimer";
ROUTE691.toField = "set_fraction";
ROUTE691.toNode = "Stop_l_thumb1_RotationInterpolator";
children[60] = ROUTE691;

ROUTE ROUTE692 = createNode("ROUTE");
ROUTE692.fromField = "fraction_changed";
ROUTE692.fromNode = "StopTimer";
ROUTE692.toField = "set_fraction";
ROUTE692.toNode = "Stop_l_thumb2_RotationInterpolator";
children[61] = ROUTE692;

ROUTE ROUTE693 = createNode("ROUTE");
ROUTE693.fromField = "fraction_changed";
ROUTE693.fromNode = "StopTimer";
ROUTE693.toField = "set_fraction";
ROUTE693.toNode = "Stop_l_thumb3_RotationInterpolator";
children[62] = ROUTE693;

ROUTE ROUTE694 = createNode("ROUTE");
ROUTE694.fromField = "fraction_changed";
ROUTE694.fromNode = "StopTimer";
ROUTE694.toField = "set_fraction";
ROUTE694.toNode = "Stop_l_index0_RotationInterpolator";
children[63] = ROUTE694;

ROUTE ROUTE695 = createNode("ROUTE");
ROUTE695.fromField = "fraction_changed";
ROUTE695.fromNode = "StopTimer";
ROUTE695.toField = "set_fraction";
ROUTE695.toNode = "Stop_l_index1_RotationInterpolator";
children[64] = ROUTE695;

ROUTE ROUTE696 = createNode("ROUTE");
ROUTE696.fromField = "fraction_changed";
ROUTE696.fromNode = "StopTimer";
ROUTE696.toField = "set_fraction";
ROUTE696.toNode = "Stop_l_index2_RotationInterpolator";
children[65] = ROUTE696;

ROUTE ROUTE697 = createNode("ROUTE");
ROUTE697.fromField = "fraction_changed";
ROUTE697.fromNode = "StopTimer";
ROUTE697.toField = "set_fraction";
ROUTE697.toNode = "Stop_l_index3_RotationInterpolator";
children[66] = ROUTE697;

ROUTE ROUTE698 = createNode("ROUTE");
ROUTE698.fromField = "fraction_changed";
ROUTE698.fromNode = "StopTimer";
ROUTE698.toField = "set_fraction";
ROUTE698.toNode = "Stop_l_middle0_RotationInterpolator";
children[67] = ROUTE698;

ROUTE ROUTE699 = createNode("ROUTE");
ROUTE699.fromField = "fraction_changed";
ROUTE699.fromNode = "StopTimer";
ROUTE699.toField = "set_fraction";
ROUTE699.toNode = "Stop_l_middle1_RotationInterpolator";
children[68] = ROUTE699;

ROUTE ROUTE700 = createNode("ROUTE");
ROUTE700.fromField = "fraction_changed";
ROUTE700.fromNode = "StopTimer";
ROUTE700.toField = "set_fraction";
ROUTE700.toNode = "Stop_l_middle2_RotationInterpolator";
children[69] = ROUTE700;

ROUTE ROUTE701 = createNode("ROUTE");
ROUTE701.fromField = "fraction_changed";
ROUTE701.fromNode = "StopTimer";
ROUTE701.toField = "set_fraction";
ROUTE701.toNode = "Stop_l_middle3_RotationInterpolator";
children[70] = ROUTE701;

ROUTE ROUTE702 = createNode("ROUTE");
ROUTE702.fromField = "fraction_changed";
ROUTE702.fromNode = "StopTimer";
ROUTE702.toField = "set_fraction";
ROUTE702.toNode = "Stop_l_ring0_RotationInterpolator";
children[71] = ROUTE702;

ROUTE ROUTE703 = createNode("ROUTE");
ROUTE703.fromField = "fraction_changed";
ROUTE703.fromNode = "StopTimer";
ROUTE703.toField = "set_fraction";
ROUTE703.toNode = "Stop_l_ring1_RotationInterpolator";
children[72] = ROUTE703;

ROUTE ROUTE704 = createNode("ROUTE");
ROUTE704.fromField = "fraction_changed";
ROUTE704.fromNode = "StopTimer";
ROUTE704.toField = "set_fraction";
ROUTE704.toNode = "Stop_l_ring2_RotationInterpolator";
children[73] = ROUTE704;

ROUTE ROUTE705 = createNode("ROUTE");
ROUTE705.fromField = "fraction_changed";
ROUTE705.fromNode = "StopTimer";
ROUTE705.toField = "set_fraction";
ROUTE705.toNode = "Stop_l_ring3_RotationInterpolator";
children[74] = ROUTE705;

ROUTE ROUTE706 = createNode("ROUTE");
ROUTE706.fromField = "fraction_changed";
ROUTE706.fromNode = "StopTimer";
ROUTE706.toField = "set_fraction";
ROUTE706.toNode = "Stop_l_pinky0_RotationInterpolator";
children[75] = ROUTE706;

ROUTE ROUTE707 = createNode("ROUTE");
ROUTE707.fromField = "fraction_changed";
ROUTE707.fromNode = "StopTimer";
ROUTE707.toField = "set_fraction";
ROUTE707.toNode = "Stop_l_pinky1_RotationInterpolator";
children[76] = ROUTE707;

ROUTE ROUTE708 = createNode("ROUTE");
ROUTE708.fromField = "fraction_changed";
ROUTE708.fromNode = "StopTimer";
ROUTE708.toField = "set_fraction";
ROUTE708.toNode = "Stop_l_pinky2_RotationInterpolator";
children[77] = ROUTE708;

ROUTE ROUTE709 = createNode("ROUTE");
ROUTE709.fromField = "fraction_changed";
ROUTE709.fromNode = "StopTimer";
ROUTE709.toField = "set_fraction";
ROUTE709.toNode = "Stop_l_pinky3_RotationInterpolator";
children[78] = ROUTE709;

ROUTE ROUTE710 = createNode("ROUTE");
ROUTE710.fromField = "fraction_changed";
ROUTE710.fromNode = "StopTimer";
ROUTE710.toField = "set_fraction";
ROUTE710.toNode = "Stop_r_sternoclavicular_RotationInterpolator";
children[79] = ROUTE710;

ROUTE ROUTE711 = createNode("ROUTE");
ROUTE711.fromField = "fraction_changed";
ROUTE711.fromNode = "StopTimer";
ROUTE711.toField = "set_fraction";
ROUTE711.toNode = "Stop_r_acromioclavicular_RotationInterpolator";
children[80] = ROUTE711;

ROUTE ROUTE712 = createNode("ROUTE");
ROUTE712.fromField = "fraction_changed";
ROUTE712.fromNode = "StopTimer";
ROUTE712.toField = "set_fraction";
ROUTE712.toNode = "Stop_r_shoulder_RotationInterpolator";
children[81] = ROUTE712;

ROUTE ROUTE713 = createNode("ROUTE");
ROUTE713.fromField = "fraction_changed";
ROUTE713.fromNode = "StopTimer";
ROUTE713.toField = "set_fraction";
ROUTE713.toNode = "Stop_r_elbow_RotationInterpolator";
children[82] = ROUTE713;

ROUTE ROUTE714 = createNode("ROUTE");
ROUTE714.fromField = "fraction_changed";
ROUTE714.fromNode = "StopTimer";
ROUTE714.toField = "set_fraction";
ROUTE714.toNode = "Stop_r_wrist_RotationInterpolator";
children[83] = ROUTE714;

ROUTE ROUTE715 = createNode("ROUTE");
ROUTE715.fromField = "fraction_changed";
ROUTE715.fromNode = "StopTimer";
ROUTE715.toField = "set_fraction";
ROUTE715.toNode = "Stop_r_thumb1_RotationInterpolator";
children[84] = ROUTE715;

ROUTE ROUTE716 = createNode("ROUTE");
ROUTE716.fromField = "fraction_changed";
ROUTE716.fromNode = "StopTimer";
ROUTE716.toField = "set_fraction";
ROUTE716.toNode = "Stop_r_thumb2_RotationInterpolator";
children[85] = ROUTE716;

ROUTE ROUTE717 = createNode("ROUTE");
ROUTE717.fromField = "fraction_changed";
ROUTE717.fromNode = "StopTimer";
ROUTE717.toField = "set_fraction";
ROUTE717.toNode = "Stop_r_thumb3_RotationInterpolator";
children[86] = ROUTE717;

ROUTE ROUTE718 = createNode("ROUTE");
ROUTE718.fromField = "fraction_changed";
ROUTE718.fromNode = "StopTimer";
ROUTE718.toField = "set_fraction";
ROUTE718.toNode = "Stop_r_index0_RotationInterpolator";
children[87] = ROUTE718;

ROUTE ROUTE719 = createNode("ROUTE");
ROUTE719.fromField = "fraction_changed";
ROUTE719.fromNode = "StopTimer";
ROUTE719.toField = "set_fraction";
ROUTE719.toNode = "Stop_r_index1_RotationInterpolator";
children[88] = ROUTE719;

ROUTE ROUTE720 = createNode("ROUTE");
ROUTE720.fromField = "fraction_changed";
ROUTE720.fromNode = "StopTimer";
ROUTE720.toField = "set_fraction";
ROUTE720.toNode = "Stop_r_index2_RotationInterpolator";
children[89] = ROUTE720;

ROUTE ROUTE721 = createNode("ROUTE");
ROUTE721.fromField = "fraction_changed";
ROUTE721.fromNode = "StopTimer";
ROUTE721.toField = "set_fraction";
ROUTE721.toNode = "Stop_r_index3_RotationInterpolator";
children[90] = ROUTE721;

ROUTE ROUTE722 = createNode("ROUTE");
ROUTE722.fromField = "fraction_changed";
ROUTE722.fromNode = "StopTimer";
ROUTE722.toField = "set_fraction";
ROUTE722.toNode = "Stop_r_middle0_RotationInterpolator";
children[91] = ROUTE722;

ROUTE ROUTE723 = createNode("ROUTE");
ROUTE723.fromField = "fraction_changed";
ROUTE723.fromNode = "StopTimer";
ROUTE723.toField = "set_fraction";
ROUTE723.toNode = "Stop_r_middle1_RotationInterpolator";
children[92] = ROUTE723;

ROUTE ROUTE724 = createNode("ROUTE");
ROUTE724.fromField = "fraction_changed";
ROUTE724.fromNode = "StopTimer";
ROUTE724.toField = "set_fraction";
ROUTE724.toNode = "Stop_r_middle2_RotationInterpolator";
children[93] = ROUTE724;

ROUTE ROUTE725 = createNode("ROUTE");
ROUTE725.fromField = "fraction_changed";
ROUTE725.fromNode = "StopTimer";
ROUTE725.toField = "set_fraction";
ROUTE725.toNode = "Stop_r_middle3_RotationInterpolator";
children[94] = ROUTE725;

ROUTE ROUTE726 = createNode("ROUTE");
ROUTE726.fromField = "fraction_changed";
ROUTE726.fromNode = "StopTimer";
ROUTE726.toField = "set_fraction";
ROUTE726.toNode = "Stop_r_ring0_RotationInterpolator";
children[95] = ROUTE726;

ROUTE ROUTE727 = createNode("ROUTE");
ROUTE727.fromField = "fraction_changed";
ROUTE727.fromNode = "StopTimer";
ROUTE727.toField = "set_fraction";
ROUTE727.toNode = "Stop_r_ring1_RotationInterpolator";
children[96] = ROUTE727;

ROUTE ROUTE728 = createNode("ROUTE");
ROUTE728.fromField = "fraction_changed";
ROUTE728.fromNode = "StopTimer";
ROUTE728.toField = "set_fraction";
ROUTE728.toNode = "Stop_r_ring2_RotationInterpolator";
children[97] = ROUTE728;

ROUTE ROUTE729 = createNode("ROUTE");
ROUTE729.fromField = "fraction_changed";
ROUTE729.fromNode = "StopTimer";
ROUTE729.toField = "set_fraction";
ROUTE729.toNode = "Stop_r_ring3_RotationInterpolator";
children[98] = ROUTE729;

ROUTE ROUTE730 = createNode("ROUTE");
ROUTE730.fromField = "fraction_changed";
ROUTE730.fromNode = "StopTimer";
ROUTE730.toField = "set_fraction";
ROUTE730.toNode = "Stop_r_pinky0_RotationInterpolator";
children[99] = ROUTE730;

ROUTE ROUTE731 = createNode("ROUTE");
ROUTE731.fromField = "fraction_changed";
ROUTE731.fromNode = "StopTimer";
ROUTE731.toField = "set_fraction";
ROUTE731.toNode = "Stop_r_pinky1_RotationInterpolator";
children[100] = ROUTE731;

ROUTE ROUTE732 = createNode("ROUTE");
ROUTE732.fromField = "fraction_changed";
ROUTE732.fromNode = "StopTimer";
ROUTE732.toField = "set_fraction";
ROUTE732.toNode = "Stop_r_pinky2_RotationInterpolator";
children[101] = ROUTE732;

ROUTE ROUTE733 = createNode("ROUTE");
ROUTE733.fromField = "fraction_changed";
ROUTE733.fromNode = "StopTimer";
ROUTE733.toField = "set_fraction";
ROUTE733.toNode = "Stop_r_pinky3_RotationInterpolator";
children[102] = ROUTE733;

ROUTE ROUTE734 = createNode("ROUTE");
ROUTE734.fromField = "value_changed";
ROUTE734.fromNode = "Stop_humanoid_root_TranslationInterpolator";
ROUTE734.toField = "set_translation";
ROUTE734.toNode = "boxman_humanoid_root";
children[103] = ROUTE734;

ROUTE ROUTE735 = createNode("ROUTE");
ROUTE735.fromField = "value_changed";
ROUTE735.fromNode = "Stop_humanoid_root_RotationInterpolator";
ROUTE735.toField = "set_rotation";
ROUTE735.toNode = "boxman_humanoid_root";
children[104] = ROUTE735;

ROUTE ROUTE736 = createNode("ROUTE");
ROUTE736.fromField = "value_changed";
ROUTE736.fromNode = "Stop_l_hip_RotationInterpolator";
ROUTE736.toField = "set_rotation";
ROUTE736.toNode = "boxman_l_hip";
children[105] = ROUTE736;

ROUTE ROUTE737 = createNode("ROUTE");
ROUTE737.fromField = "value_changed";
ROUTE737.fromNode = "Stop_l_knee_RotationInterpolator";
ROUTE737.toField = "set_rotation";
ROUTE737.toNode = "boxman_l_knee";
children[106] = ROUTE737;

ROUTE ROUTE738 = createNode("ROUTE");
ROUTE738.fromField = "value_changed";
ROUTE738.fromNode = "Stop_l_ankle_RotationInterpolator";
ROUTE738.toField = "set_rotation";
ROUTE738.toNode = "boxman_l_ankle";
children[107] = ROUTE738;

ROUTE ROUTE739 = createNode("ROUTE");
ROUTE739.fromField = "value_changed";
ROUTE739.fromNode = "Stop_l_midtarsal_RotationInterpolator";
ROUTE739.toField = "set_rotation";
ROUTE739.toNode = "boxman_l_midtarsal";
children[108] = ROUTE739;

ROUTE ROUTE740 = createNode("ROUTE");
ROUTE740.fromField = "value_changed";
ROUTE740.fromNode = "Stop_r_hip_RotationInterpolator";
ROUTE740.toField = "set_rotation";
ROUTE740.toNode = "boxman_r_hip";
children[109] = ROUTE740;

ROUTE ROUTE741 = createNode("ROUTE");
ROUTE741.fromField = "value_changed";
ROUTE741.fromNode = "Stop_r_knee_RotationInterpolator";
ROUTE741.toField = "set_rotation";
ROUTE741.toNode = "boxman_r_knee";
children[110] = ROUTE741;

ROUTE ROUTE742 = createNode("ROUTE");
ROUTE742.fromField = "value_changed";
ROUTE742.fromNode = "Stop_r_ankle_RotationInterpolator";
ROUTE742.toField = "set_rotation";
ROUTE742.toNode = "boxman_r_ankle";
children[111] = ROUTE742;

ROUTE ROUTE743 = createNode("ROUTE");
ROUTE743.fromField = "value_changed";
ROUTE743.fromNode = "Stop_r_midtarsal_RotationInterpolator";
ROUTE743.toField = "set_rotation";
ROUTE743.toNode = "boxman_r_midtarsal";
children[112] = ROUTE743;

ROUTE ROUTE744 = createNode("ROUTE");
ROUTE744.fromField = "value_changed";
ROUTE744.fromNode = "Stop_vl5_RotationInterpolator";
ROUTE744.toField = "set_rotation";
ROUTE744.toNode = "boxman_vl5";
children[113] = ROUTE744;

ROUTE ROUTE745 = createNode("ROUTE");
ROUTE745.fromField = "value_changed";
ROUTE745.fromNode = "Stop_skullbase_RotationInterpolator";
ROUTE745.toField = "set_rotation";
ROUTE745.toNode = "boxman_skullbase";
children[114] = ROUTE745;

ROUTE ROUTE746 = createNode("ROUTE");
ROUTE746.fromField = "value_changed";
ROUTE746.fromNode = "Stop_l_shoulder_RotationInterpolator";
ROUTE746.toField = "set_rotation";
ROUTE746.toNode = "boxman_l_shoulder";
children[115] = ROUTE746;

ROUTE ROUTE747 = createNode("ROUTE");
ROUTE747.fromField = "value_changed";
ROUTE747.fromNode = "Stop_l_elbow_RotationInterpolator";
ROUTE747.toField = "set_rotation";
ROUTE747.toNode = "boxman_l_elbow";
children[116] = ROUTE747;

ROUTE ROUTE748 = createNode("ROUTE");
ROUTE748.fromField = "value_changed";
ROUTE748.fromNode = "Stop_l_wrist_RotationInterpolator";
ROUTE748.toField = "set_rotation";
ROUTE748.toNode = "boxman_l_wrist";
children[117] = ROUTE748;

ROUTE ROUTE749 = createNode("ROUTE");
ROUTE749.fromField = "value_changed";
ROUTE749.fromNode = "Stop_r_shoulder_RotationInterpolator";
ROUTE749.toField = "set_rotation";
ROUTE749.toNode = "boxman_r_shoulder";
children[118] = ROUTE749;

ROUTE ROUTE750 = createNode("ROUTE");
ROUTE750.fromField = "value_changed";
ROUTE750.fromNode = "Stop_r_elbow_RotationInterpolator";
ROUTE750.toField = "set_rotation";
ROUTE750.toNode = "boxman_r_elbow";
children[119] = ROUTE750;

ROUTE ROUTE751 = createNode("ROUTE");
ROUTE751.fromField = "value_changed";
ROUTE751.fromNode = "Stop_r_wrist_RotationInterpolator";
ROUTE751.toField = "set_rotation";
ROUTE751.toNode = "boxman_r_wrist";
children[120] = ROUTE751;

ROUTE ROUTE752 = createNode("ROUTE");
ROUTE752.fromField = "fraction_changed";
ROUTE752.fromNode = "StandTimer";
ROUTE752.toField = "set_fraction";
ROUTE752.toNode = "Stand_r_ankle_RotationInterpolator";
children[121] = ROUTE752;

ROUTE ROUTE753 = createNode("ROUTE");
ROUTE753.fromField = "fraction_changed";
ROUTE753.fromNode = "StandTimer";
ROUTE753.toField = "set_fraction";
ROUTE753.toNode = "Stand_r_knee_RotationInterpolator";
children[122] = ROUTE753;

ROUTE ROUTE754 = createNode("ROUTE");
ROUTE754.fromField = "fraction_changed";
ROUTE754.fromNode = "StandTimer";
ROUTE754.toField = "set_fraction";
ROUTE754.toNode = "Stand_r_hip_RotationInterpolator";
children[123] = ROUTE754;

ROUTE ROUTE755 = createNode("ROUTE");
ROUTE755.fromField = "fraction_changed";
ROUTE755.fromNode = "StandTimer";
ROUTE755.toField = "set_fraction";
ROUTE755.toNode = "Stand_l_ankle_RotationInterpolator";
children[124] = ROUTE755;

ROUTE ROUTE756 = createNode("ROUTE");
ROUTE756.fromField = "fraction_changed";
ROUTE756.fromNode = "StandTimer";
ROUTE756.toField = "set_fraction";
ROUTE756.toNode = "Stand_l_knee_RotationInterpolator";
children[125] = ROUTE756;

ROUTE ROUTE757 = createNode("ROUTE");
ROUTE757.fromField = "fraction_changed";
ROUTE757.fromNode = "StandTimer";
ROUTE757.toField = "set_fraction";
ROUTE757.toNode = "Stand_l_hip_RotationInterpolator";
children[126] = ROUTE757;

ROUTE ROUTE758 = createNode("ROUTE");
ROUTE758.fromField = "fraction_changed";
ROUTE758.fromNode = "StandTimer";
ROUTE758.toField = "set_fraction";
ROUTE758.toNode = "Stand_lower_body_RotationInterpolator";
children[127] = ROUTE758;

ROUTE ROUTE759 = createNode("ROUTE");
ROUTE759.fromField = "fraction_changed";
ROUTE759.fromNode = "StandTimer";
ROUTE759.toField = "set_fraction";
ROUTE759.toNode = "Stand_r_wrist_RotationInterpolator";
children[128] = ROUTE759;

ROUTE ROUTE760 = createNode("ROUTE");
ROUTE760.fromField = "fraction_changed";
ROUTE760.fromNode = "StandTimer";
ROUTE760.toField = "set_fraction";
ROUTE760.toNode = "Stand_r_elbow_RotationInterpolator";
children[129] = ROUTE760;

ROUTE ROUTE761 = createNode("ROUTE");
ROUTE761.fromField = "fraction_changed";
ROUTE761.fromNode = "StandTimer";
ROUTE761.toField = "set_fraction";
ROUTE761.toNode = "Stand_r_shoulder_RotationInterpolator";
children[130] = ROUTE761;

ROUTE ROUTE762 = createNode("ROUTE");
ROUTE762.fromField = "fraction_changed";
ROUTE762.fromNode = "StandTimer";
ROUTE762.toField = "set_fraction";
ROUTE762.toNode = "Stand_l_wrist_RotationInterpolator";
children[131] = ROUTE762;

ROUTE ROUTE763 = createNode("ROUTE");
ROUTE763.fromField = "fraction_changed";
ROUTE763.fromNode = "StandTimer";
ROUTE763.toField = "set_fraction";
ROUTE763.toNode = "Stand_l_elbow_RotationInterpolator";
children[132] = ROUTE763;

ROUTE ROUTE764 = createNode("ROUTE");
ROUTE764.fromField = "fraction_changed";
ROUTE764.fromNode = "StandTimer";
ROUTE764.toField = "set_fraction";
ROUTE764.toNode = "Stand_l_shoulder_RotationInterpolator";
children[133] = ROUTE764;

ROUTE ROUTE765 = createNode("ROUTE");
ROUTE765.fromField = "fraction_changed";
ROUTE765.fromNode = "StandTimer";
ROUTE765.toField = "set_fraction";
ROUTE765.toNode = "Stand_head_RotationInterpolator";
children[134] = ROUTE765;

ROUTE ROUTE766 = createNode("ROUTE");
ROUTE766.fromField = "fraction_changed";
ROUTE766.fromNode = "StandTimer";
ROUTE766.toField = "set_fraction";
ROUTE766.toNode = "Stand_neck_RotationInterpolator";
children[135] = ROUTE766;

ROUTE ROUTE767 = createNode("ROUTE");
ROUTE767.fromField = "fraction_changed";
ROUTE767.fromNode = "StandTimer";
ROUTE767.toField = "set_fraction";
ROUTE767.toNode = "Stand_l_eyeball_RotationInterpolator";
children[136] = ROUTE767;

ROUTE ROUTE768 = createNode("ROUTE");
ROUTE768.fromField = "fraction_changed";
ROUTE768.fromNode = "StandTimer";
ROUTE768.toField = "set_fraction";
ROUTE768.toNode = "Stand_r_eyeball_RotationInterpolator";
children[137] = ROUTE768;

ROUTE ROUTE769 = createNode("ROUTE");
ROUTE769.fromField = "fraction_changed";
ROUTE769.fromNode = "StandTimer";
ROUTE769.toField = "set_fraction";
ROUTE769.toNode = "Stand_upper_body_RotationInterpolator";
children[138] = ROUTE769;

ROUTE ROUTE770 = createNode("ROUTE");
ROUTE770.fromField = "fraction_changed";
ROUTE770.fromNode = "StandTimer";
ROUTE770.toField = "set_fraction";
ROUTE770.toNode = "Stand_whole_body_RotationInterpolator";
children[139] = ROUTE770;

ROUTE ROUTE771 = createNode("ROUTE");
ROUTE771.fromField = "fraction_changed";
ROUTE771.fromNode = "StandTimer";
ROUTE771.toField = "set_fraction";
ROUTE771.toNode = "Stand_whole_body_TranslationInterpolator";
children[140] = ROUTE771;

ROUTE ROUTE772 = createNode("ROUTE");
ROUTE772.fromField = "fraction_changed";
ROUTE772.fromNode = "StandTimer";
ROUTE772.toField = "set_fraction";
ROUTE772.toNode = "Stand_l_sternoclavicular_RollInterpolator";
children[141] = ROUTE772;

ROUTE ROUTE773 = createNode("ROUTE");
ROUTE773.fromField = "fraction_changed";
ROUTE773.fromNode = "StandTimer";
ROUTE773.toField = "set_fraction";
ROUTE773.toNode = "Stand_l_acromioclavicular_RollInterpolator";
children[142] = ROUTE773;

ROUTE ROUTE774 = createNode("ROUTE");
ROUTE774.fromField = "fraction_changed";
ROUTE774.fromNode = "StandTimer";
ROUTE774.toField = "set_fraction";
ROUTE774.toNode = "Stand_r_sternoclavicular_RollInterpolator";
children[143] = ROUTE774;

ROUTE ROUTE775 = createNode("ROUTE");
ROUTE775.fromField = "fraction_changed";
ROUTE775.fromNode = "StandTimer";
ROUTE775.toField = "set_fraction";
ROUTE775.toNode = "Stand_r_acromioclavicular_RollInterpolator";
children[144] = ROUTE775;

ROUTE ROUTE776 = createNode("ROUTE");
ROUTE776.fromField = "fraction_changed";
ROUTE776.fromNode = "StandTimer";
ROUTE776.toField = "set_fraction";
ROUTE776.toNode = "Stand_r_metatarsal_PitchInterpolator";
children[145] = ROUTE776;

ROUTE ROUTE777 = createNode("ROUTE");
ROUTE777.fromField = "fraction_changed";
ROUTE777.fromNode = "StandTimer";
ROUTE777.toField = "set_fraction";
ROUTE777.toNode = "Stand_sacroiliac_YawInterpolator";
children[146] = ROUTE777;

ROUTE ROUTE778 = createNode("ROUTE");
ROUTE778.fromField = "fraction_changed";
ROUTE778.fromNode = "StandTimer";
ROUTE778.toField = "set_fraction";
ROUTE778.toNode = "Stand_vl5_YawInterpolator";
children[147] = ROUTE778;

ROUTE ROUTE779 = createNode("ROUTE");
ROUTE779.fromField = "fraction_changed";
ROUTE779.fromNode = "StandTimer";
ROUTE779.toField = "set_fraction";
ROUTE779.toNode = "Stand_vc6_YawInterpolator";
children[148] = ROUTE779;

ROUTE ROUTE780 = createNode("ROUTE");
ROUTE780.fromField = "fraction_changed";
ROUTE780.fromNode = "StandTimer";
ROUTE780.toField = "set_fraction";
ROUTE780.toNode = "Stand_l_thumb1_PitchInterpolator";
children[149] = ROUTE780;

ROUTE ROUTE781 = createNode("ROUTE");
ROUTE781.fromField = "fraction_changed";
ROUTE781.fromNode = "StandTimer";
ROUTE781.toField = "set_fraction";
ROUTE781.toNode = "Stand_r_thumb1_PitchInterpolator";
children[150] = ROUTE781;

ROUTE ROUTE782 = createNode("ROUTE");
ROUTE782.fromField = "fraction_changed";
ROUTE782.fromNode = "StandTimer";
ROUTE782.toField = "set_fraction";
ROUTE782.toNode = "Stand_r_index1_RollInterpolator";
children[151] = ROUTE782;

ROUTE ROUTE783 = createNode("ROUTE");
ROUTE783.fromField = "fraction_changed";
ROUTE783.fromNode = "StandTimer";
ROUTE783.toField = "set_fraction";
ROUTE783.toNode = "Stand_r_index2_RollInterpolator";
children[152] = ROUTE783;

ROUTE ROUTE784 = createNode("ROUTE");
ROUTE784.fromField = "fraction_changed";
ROUTE784.fromNode = "StandTimer";
ROUTE784.toField = "set_fraction";
ROUTE784.toNode = "Stand_r_index3_RollInterpolator";
children[153] = ROUTE784;

ROUTE ROUTE785 = createNode("ROUTE");
ROUTE785.fromField = "value_changed";
ROUTE785.fromNode = "Stand_r_ankle_RotationInterpolator";
ROUTE785.toField = "set_rotation";
ROUTE785.toNode = "boxman_r_ankle";
children[154] = ROUTE785;

ROUTE ROUTE786 = createNode("ROUTE");
ROUTE786.fromField = "value_changed";
ROUTE786.fromNode = "Stand_r_knee_RotationInterpolator";
ROUTE786.toField = "set_rotation";
ROUTE786.toNode = "boxman_r_knee";
children[155] = ROUTE786;

ROUTE ROUTE787 = createNode("ROUTE");
ROUTE787.fromField = "value_changed";
ROUTE787.fromNode = "Stand_r_hip_RotationInterpolator";
ROUTE787.toField = "set_rotation";
ROUTE787.toNode = "boxman_r_hip";
children[156] = ROUTE787;

ROUTE ROUTE788 = createNode("ROUTE");
ROUTE788.fromField = "value_changed";
ROUTE788.fromNode = "Stand_l_ankle_RotationInterpolator";
ROUTE788.toField = "set_rotation";
ROUTE788.toNode = "boxman_l_ankle";
children[157] = ROUTE788;

ROUTE ROUTE789 = createNode("ROUTE");
ROUTE789.fromField = "value_changed";
ROUTE789.fromNode = "Stand_l_knee_RotationInterpolator";
ROUTE789.toField = "set_rotation";
ROUTE789.toNode = "boxman_l_knee";
children[158] = ROUTE789;

ROUTE ROUTE790 = createNode("ROUTE");
ROUTE790.fromField = "value_changed";
ROUTE790.fromNode = "Stand_l_hip_RotationInterpolator";
ROUTE790.toField = "set_rotation";
ROUTE790.toNode = "boxman_l_hip";
children[159] = ROUTE790;

ROUTE ROUTE791 = createNode("ROUTE");
ROUTE791.fromField = "value_changed";
ROUTE791.fromNode = "Stand_r_wrist_RotationInterpolator";
ROUTE791.toField = "set_rotation";
ROUTE791.toNode = "boxman_r_wrist";
children[160] = ROUTE791;

ROUTE ROUTE792 = createNode("ROUTE");
ROUTE792.fromField = "value_changed";
ROUTE792.fromNode = "Stand_r_elbow_RotationInterpolator";
ROUTE792.toField = "set_rotation";
ROUTE792.toNode = "boxman_r_elbow";
children[161] = ROUTE792;

ROUTE ROUTE793 = createNode("ROUTE");
ROUTE793.fromField = "value_changed";
ROUTE793.fromNode = "Stand_r_shoulder_RotationInterpolator";
ROUTE793.toField = "set_rotation";
ROUTE793.toNode = "boxman_r_shoulder";
children[162] = ROUTE793;

ROUTE ROUTE794 = createNode("ROUTE");
ROUTE794.fromField = "value_changed";
ROUTE794.fromNode = "Stand_l_wrist_RotationInterpolator";
ROUTE794.toField = "set_rotation";
ROUTE794.toNode = "boxman_l_wrist";
children[163] = ROUTE794;

ROUTE ROUTE795 = createNode("ROUTE");
ROUTE795.fromField = "value_changed";
ROUTE795.fromNode = "Stand_l_elbow_RotationInterpolator";
ROUTE795.toField = "set_rotation";
ROUTE795.toNode = "boxman_l_elbow";
children[164] = ROUTE795;

ROUTE ROUTE796 = createNode("ROUTE");
ROUTE796.fromField = "value_changed";
ROUTE796.fromNode = "Stand_l_shoulder_RotationInterpolator";
ROUTE796.toField = "set_rotation";
ROUTE796.toNode = "boxman_l_shoulder";
children[165] = ROUTE796;

ROUTE ROUTE797 = createNode("ROUTE");
ROUTE797.fromField = "value_changed";
ROUTE797.fromNode = "Stand_head_RotationInterpolator";
ROUTE797.toField = "set_rotation";
ROUTE797.toNode = "boxman_skullbase";
children[166] = ROUTE797;

ROUTE ROUTE798 = createNode("ROUTE");
ROUTE798.fromField = "value_changed";
ROUTE798.fromNode = "Stand_whole_body_RotationInterpolator";
ROUTE798.toField = "set_rotation";
ROUTE798.toNode = "boxman_humanoid_root";
children[167] = ROUTE798;

ROUTE ROUTE799 = createNode("ROUTE");
ROUTE799.fromField = "value_changed";
ROUTE799.fromNode = "Stand_whole_body_TranslationInterpolator";
ROUTE799.toField = "set_translation";
ROUTE799.toNode = "boxman_humanoid_root";
children[168] = ROUTE799;

ROUTE ROUTE800 = createNode("ROUTE");
ROUTE800.fromField = "value_changed";
ROUTE800.fromNode = "Stand_vl5_YawInterpolator";
ROUTE800.toField = "set_rotation";
ROUTE800.toNode = "boxman_vl5";
children[169] = ROUTE800;

ROUTE ROUTE801 = createNode("ROUTE");
ROUTE801.fromField = "fraction_changed";
ROUTE801.fromNode = "PitchTimer";
ROUTE801.toField = "set_fraction";
ROUTE801.toNode = "Pitches_r_ankle_RotationInterpolator";
children[170] = ROUTE801;

ROUTE ROUTE802 = createNode("ROUTE");
ROUTE802.fromField = "fraction_changed";
ROUTE802.fromNode = "PitchTimer";
ROUTE802.toField = "set_fraction";
ROUTE802.toNode = "Pitches_r_knee_RotationInterpolator";
children[171] = ROUTE802;

ROUTE ROUTE803 = createNode("ROUTE");
ROUTE803.fromField = "fraction_changed";
ROUTE803.fromNode = "PitchTimer";
ROUTE803.toField = "set_fraction";
ROUTE803.toNode = "Pitches_r_hip_RotationInterpolator";
children[172] = ROUTE803;

ROUTE ROUTE804 = createNode("ROUTE");
ROUTE804.fromField = "fraction_changed";
ROUTE804.fromNode = "PitchTimer";
ROUTE804.toField = "set_fraction";
ROUTE804.toNode = "Pitches_l_ankle_RotationInterpolator";
children[173] = ROUTE804;

ROUTE ROUTE805 = createNode("ROUTE");
ROUTE805.fromField = "fraction_changed";
ROUTE805.fromNode = "PitchTimer";
ROUTE805.toField = "set_fraction";
ROUTE805.toNode = "Pitches_l_knee_RotationInterpolator";
children[174] = ROUTE805;

ROUTE ROUTE806 = createNode("ROUTE");
ROUTE806.fromField = "fraction_changed";
ROUTE806.fromNode = "PitchTimer";
ROUTE806.toField = "set_fraction";
ROUTE806.toNode = "Pitches_l_hip_RotationInterpolator";
children[175] = ROUTE806;

ROUTE ROUTE807 = createNode("ROUTE");
ROUTE807.fromField = "fraction_changed";
ROUTE807.fromNode = "PitchTimer";
ROUTE807.toField = "set_fraction";
ROUTE807.toNode = "Pitches_lower_body_RotationInterpolator";
children[176] = ROUTE807;

ROUTE ROUTE808 = createNode("ROUTE");
ROUTE808.fromField = "fraction_changed";
ROUTE808.fromNode = "PitchTimer";
ROUTE808.toField = "set_fraction";
ROUTE808.toNode = "Pitches_r_wrist_RotationInterpolator";
children[177] = ROUTE808;

ROUTE ROUTE809 = createNode("ROUTE");
ROUTE809.fromField = "fraction_changed";
ROUTE809.fromNode = "PitchTimer";
ROUTE809.toField = "set_fraction";
ROUTE809.toNode = "Pitches_r_elbow_RotationInterpolator";
children[178] = ROUTE809;

ROUTE ROUTE810 = createNode("ROUTE");
ROUTE810.fromField = "fraction_changed";
ROUTE810.fromNode = "PitchTimer";
ROUTE810.toField = "set_fraction";
ROUTE810.toNode = "Pitches_r_shoulder_RotationInterpolator";
children[179] = ROUTE810;

ROUTE ROUTE811 = createNode("ROUTE");
ROUTE811.fromField = "fraction_changed";
ROUTE811.fromNode = "PitchTimer";
ROUTE811.toField = "set_fraction";
ROUTE811.toNode = "Pitches_l_wrist_RotationInterpolator";
children[180] = ROUTE811;

ROUTE ROUTE812 = createNode("ROUTE");
ROUTE812.fromField = "fraction_changed";
ROUTE812.fromNode = "PitchTimer";
ROUTE812.toField = "set_fraction";
ROUTE812.toNode = "Pitches_l_elbow_RotationInterpolator";
children[181] = ROUTE812;

ROUTE ROUTE813 = createNode("ROUTE");
ROUTE813.fromField = "fraction_changed";
ROUTE813.fromNode = "PitchTimer";
ROUTE813.toField = "set_fraction";
ROUTE813.toNode = "Pitches_l_shoulder_RotationInterpolator";
children[182] = ROUTE813;

ROUTE ROUTE814 = createNode("ROUTE");
ROUTE814.fromField = "fraction_changed";
ROUTE814.fromNode = "PitchTimer";
ROUTE814.toField = "set_fraction";
ROUTE814.toNode = "Pitches_head_RotationInterpolator";
children[183] = ROUTE814;

ROUTE ROUTE815 = createNode("ROUTE");
ROUTE815.fromField = "fraction_changed";
ROUTE815.fromNode = "PitchTimer";
ROUTE815.toField = "set_fraction";
ROUTE815.toNode = "Pitches_neck_RotationInterpolator";
children[184] = ROUTE815;

ROUTE ROUTE816 = createNode("ROUTE");
ROUTE816.fromField = "fraction_changed";
ROUTE816.fromNode = "PitchTimer";
ROUTE816.toField = "set_fraction";
ROUTE816.toNode = "Pitches_upper_body_RotationInterpolator";
children[185] = ROUTE816;

ROUTE ROUTE817 = createNode("ROUTE");
ROUTE817.fromField = "fraction_changed";
ROUTE817.fromNode = "PitchTimer";
ROUTE817.toField = "set_fraction";
ROUTE817.toNode = "Pitches_whole_body_RotationInterpolator";
children[186] = ROUTE817;

ROUTE ROUTE818 = createNode("ROUTE");
ROUTE818.fromField = "fraction_changed";
ROUTE818.fromNode = "PitchTimer";
ROUTE818.toField = "set_fraction";
ROUTE818.toNode = "Pitches_whole_body_TranslationInterpolator";
children[187] = ROUTE818;

ROUTE ROUTE819 = createNode("ROUTE");
ROUTE819.fromField = "fraction_changed";
ROUTE819.fromNode = "PitchTimer";
ROUTE819.toField = "set_fraction";
ROUTE819.toNode = "Pitch_l_sternoclavicular_RollInterpolator";
children[188] = ROUTE819;

ROUTE ROUTE820 = createNode("ROUTE");
ROUTE820.fromField = "fraction_changed";
ROUTE820.fromNode = "PitchTimer";
ROUTE820.toField = "set_fraction";
ROUTE820.toNode = "Pitch_l_acromioclavicular_RollInterpolator";
children[189] = ROUTE820;

ROUTE ROUTE821 = createNode("ROUTE");
ROUTE821.fromField = "fraction_changed";
ROUTE821.fromNode = "PitchTimer";
ROUTE821.toField = "set_fraction";
ROUTE821.toNode = "Pitch_r_sternoclavicular_RollInterpolator";
children[190] = ROUTE821;

ROUTE ROUTE822 = createNode("ROUTE");
ROUTE822.fromField = "fraction_changed";
ROUTE822.fromNode = "PitchTimer";
ROUTE822.toField = "set_fraction";
ROUTE822.toNode = "Pitch_r_acromioclavicular_RollInterpolator";
children[191] = ROUTE822;

ROUTE ROUTE823 = createNode("ROUTE");
ROUTE823.fromField = "fraction_changed";
ROUTE823.fromNode = "PitchTimer";
ROUTE823.toField = "set_fraction";
ROUTE823.toNode = "Pitch_r_metatarsal_PitchInterpolator";
children[192] = ROUTE823;

ROUTE ROUTE824 = createNode("ROUTE");
ROUTE824.fromField = "fraction_changed";
ROUTE824.fromNode = "PitchTimer";
ROUTE824.toField = "set_fraction";
ROUTE824.toNode = "Pitch_sacroiliac_YawInterpolator";
children[193] = ROUTE824;

ROUTE ROUTE825 = createNode("ROUTE");
ROUTE825.fromField = "fraction_changed";
ROUTE825.fromNode = "PitchTimer";
ROUTE825.toField = "set_fraction";
ROUTE825.toNode = "Pitch_vl5_YawInterpolator";
children[194] = ROUTE825;

ROUTE ROUTE826 = createNode("ROUTE");
ROUTE826.fromField = "fraction_changed";
ROUTE826.fromNode = "PitchTimer";
ROUTE826.toField = "set_fraction";
ROUTE826.toNode = "Pitch_vc6_YawInterpolator";
children[195] = ROUTE826;

ROUTE ROUTE827 = createNode("ROUTE");
ROUTE827.fromField = "fraction_changed";
ROUTE827.fromNode = "PitchTimer";
ROUTE827.toField = "set_fraction";
ROUTE827.toNode = "Pitch_l_thumb1_PitchInterpolator";
children[196] = ROUTE827;

ROUTE ROUTE828 = createNode("ROUTE");
ROUTE828.fromField = "fraction_changed";
ROUTE828.fromNode = "PitchTimer";
ROUTE828.toField = "set_fraction";
ROUTE828.toNode = "Pitch_r_thumb1_PitchInterpolator";
children[197] = ROUTE828;

ROUTE ROUTE829 = createNode("ROUTE");
ROUTE829.fromField = "value_changed";
ROUTE829.fromNode = "Pitches_r_ankle_RotationInterpolator";
ROUTE829.toField = "set_rotation";
ROUTE829.toNode = "boxman_r_ankle";
children[198] = ROUTE829;

ROUTE ROUTE830 = createNode("ROUTE");
ROUTE830.fromField = "value_changed";
ROUTE830.fromNode = "Pitches_r_knee_RotationInterpolator";
ROUTE830.toField = "set_rotation";
ROUTE830.toNode = "boxman_r_knee";
children[199] = ROUTE830;

ROUTE ROUTE831 = createNode("ROUTE");
ROUTE831.fromField = "value_changed";
ROUTE831.fromNode = "Pitches_r_hip_RotationInterpolator";
ROUTE831.toField = "set_rotation";
ROUTE831.toNode = "boxman_r_hip";
children[200] = ROUTE831;

ROUTE ROUTE832 = createNode("ROUTE");
ROUTE832.fromField = "value_changed";
ROUTE832.fromNode = "Pitches_l_ankle_RotationInterpolator";
ROUTE832.toField = "set_rotation";
ROUTE832.toNode = "boxman_l_ankle";
children[201] = ROUTE832;

ROUTE ROUTE833 = createNode("ROUTE");
ROUTE833.fromField = "value_changed";
ROUTE833.fromNode = "Pitches_l_knee_RotationInterpolator";
ROUTE833.toField = "set_rotation";
ROUTE833.toNode = "boxman_l_knee";
children[202] = ROUTE833;

ROUTE ROUTE834 = createNode("ROUTE");
ROUTE834.fromField = "value_changed";
ROUTE834.fromNode = "Pitches_l_hip_RotationInterpolator";
ROUTE834.toField = "set_rotation";
ROUTE834.toNode = "boxman_l_hip";
children[203] = ROUTE834;

ROUTE ROUTE835 = createNode("ROUTE");
ROUTE835.fromField = "value_changed";
ROUTE835.fromNode = "Pitches_r_wrist_RotationInterpolator";
ROUTE835.toField = "set_rotation";
ROUTE835.toNode = "boxman_r_wrist";
children[204] = ROUTE835;

ROUTE ROUTE836 = createNode("ROUTE");
ROUTE836.fromField = "value_changed";
ROUTE836.fromNode = "Pitches_r_elbow_RotationInterpolator";
ROUTE836.toField = "set_rotation";
ROUTE836.toNode = "boxman_r_elbow";
children[205] = ROUTE836;

ROUTE ROUTE837 = createNode("ROUTE");
ROUTE837.fromField = "value_changed";
ROUTE837.fromNode = "Pitches_r_shoulder_RotationInterpolator";
ROUTE837.toField = "set_rotation";
ROUTE837.toNode = "boxman_r_shoulder";
children[206] = ROUTE837;

ROUTE ROUTE838 = createNode("ROUTE");
ROUTE838.fromField = "value_changed";
ROUTE838.fromNode = "Pitches_l_wrist_RotationInterpolator";
ROUTE838.toField = "set_rotation";
ROUTE838.toNode = "boxman_l_wrist";
children[207] = ROUTE838;

ROUTE ROUTE839 = createNode("ROUTE");
ROUTE839.fromField = "value_changed";
ROUTE839.fromNode = "Pitches_l_elbow_RotationInterpolator";
ROUTE839.toField = "set_rotation";
ROUTE839.toNode = "boxman_l_elbow";
children[208] = ROUTE839;

ROUTE ROUTE840 = createNode("ROUTE");
ROUTE840.fromField = "value_changed";
ROUTE840.fromNode = "Pitches_l_shoulder_RotationInterpolator";
ROUTE840.toField = "set_rotation";
ROUTE840.toNode = "boxman_l_shoulder";
children[209] = ROUTE840;

ROUTE ROUTE841 = createNode("ROUTE");
ROUTE841.fromField = "value_changed";
ROUTE841.fromNode = "Pitches_head_RotationInterpolator";
ROUTE841.toField = "set_rotation";
ROUTE841.toNode = "boxman_skullbase";
children[210] = ROUTE841;

ROUTE ROUTE842 = createNode("ROUTE");
ROUTE842.fromField = "value_changed";
ROUTE842.fromNode = "Pitches_whole_body_RotationInterpolator";
ROUTE842.toField = "set_rotation";
ROUTE842.toNode = "boxman_humanoid_root";
children[211] = ROUTE842;

ROUTE ROUTE843 = createNode("ROUTE");
ROUTE843.fromField = "value_changed";
ROUTE843.fromNode = "Pitches_whole_body_TranslationInterpolator";
ROUTE843.toField = "set_translation";
ROUTE843.toNode = "boxman_humanoid_root";
children[212] = ROUTE843;

ROUTE ROUTE844 = createNode("ROUTE");
ROUTE844.fromField = "value_changed";
ROUTE844.fromNode = "Pitch_vl5_YawInterpolator";
ROUTE844.toField = "set_rotation";
ROUTE844.toNode = "boxman_vl5";
children[213] = ROUTE844;

ROUTE ROUTE845 = createNode("ROUTE");
ROUTE845.fromField = "fraction_changed";
ROUTE845.fromNode = "YawTimer";
ROUTE845.toField = "set_fraction";
ROUTE845.toNode = "Yaws_r_ankle_RotationInterpolator";
children[214] = ROUTE845;

ROUTE ROUTE846 = createNode("ROUTE");
ROUTE846.fromField = "fraction_changed";
ROUTE846.fromNode = "YawTimer";
ROUTE846.toField = "set_fraction";
ROUTE846.toNode = "Yaws_r_knee_RotationInterpolator";
children[215] = ROUTE846;

ROUTE ROUTE847 = createNode("ROUTE");
ROUTE847.fromField = "fraction_changed";
ROUTE847.fromNode = "YawTimer";
ROUTE847.toField = "set_fraction";
ROUTE847.toNode = "Yaws_r_hip_RotationInterpolator";
children[216] = ROUTE847;

ROUTE ROUTE848 = createNode("ROUTE");
ROUTE848.fromField = "fraction_changed";
ROUTE848.fromNode = "YawTimer";
ROUTE848.toField = "set_fraction";
ROUTE848.toNode = "Yaws_l_ankle_RotationInterpolator";
children[217] = ROUTE848;

ROUTE ROUTE849 = createNode("ROUTE");
ROUTE849.fromField = "fraction_changed";
ROUTE849.fromNode = "YawTimer";
ROUTE849.toField = "set_fraction";
ROUTE849.toNode = "Yaws_l_knee_RotationInterpolator";
children[218] = ROUTE849;

ROUTE ROUTE850 = createNode("ROUTE");
ROUTE850.fromField = "fraction_changed";
ROUTE850.fromNode = "YawTimer";
ROUTE850.toField = "set_fraction";
ROUTE850.toNode = "Yaws_l_hip_RotationInterpolator";
children[219] = ROUTE850;

ROUTE ROUTE851 = createNode("ROUTE");
ROUTE851.fromField = "fraction_changed";
ROUTE851.fromNode = "YawTimer";
ROUTE851.toField = "set_fraction";
ROUTE851.toNode = "Yaws_lower_body_RotationInterpolator";
children[220] = ROUTE851;

ROUTE ROUTE852 = createNode("ROUTE");
ROUTE852.fromField = "fraction_changed";
ROUTE852.fromNode = "YawTimer";
ROUTE852.toField = "set_fraction";
ROUTE852.toNode = "Yaws_r_wrist_RotationInterpolator";
children[221] = ROUTE852;

ROUTE ROUTE853 = createNode("ROUTE");
ROUTE853.fromField = "fraction_changed";
ROUTE853.fromNode = "YawTimer";
ROUTE853.toField = "set_fraction";
ROUTE853.toNode = "Yaws_r_elbow_RotationInterpolator";
children[222] = ROUTE853;

ROUTE ROUTE854 = createNode("ROUTE");
ROUTE854.fromField = "fraction_changed";
ROUTE854.fromNode = "YawTimer";
ROUTE854.toField = "set_fraction";
ROUTE854.toNode = "Yaws_r_shoulder_RotationInterpolator";
children[223] = ROUTE854;

ROUTE ROUTE855 = createNode("ROUTE");
ROUTE855.fromField = "fraction_changed";
ROUTE855.fromNode = "YawTimer";
ROUTE855.toField = "set_fraction";
ROUTE855.toNode = "Yaws_l_wrist_RotationInterpolator";
children[224] = ROUTE855;

ROUTE ROUTE856 = createNode("ROUTE");
ROUTE856.fromField = "fraction_changed";
ROUTE856.fromNode = "YawTimer";
ROUTE856.toField = "set_fraction";
ROUTE856.toNode = "Yaws_l_elbow_RotationInterpolator";
children[225] = ROUTE856;

ROUTE ROUTE857 = createNode("ROUTE");
ROUTE857.fromField = "fraction_changed";
ROUTE857.fromNode = "YawTimer";
ROUTE857.toField = "set_fraction";
ROUTE857.toNode = "Yaws_l_shoulder_RotationInterpolator";
children[226] = ROUTE857;

ROUTE ROUTE858 = createNode("ROUTE");
ROUTE858.fromField = "fraction_changed";
ROUTE858.fromNode = "YawTimer";
ROUTE858.toField = "set_fraction";
ROUTE858.toNode = "Yaws_head_RotationInterpolator";
children[227] = ROUTE858;

ROUTE ROUTE859 = createNode("ROUTE");
ROUTE859.fromField = "fraction_changed";
ROUTE859.fromNode = "YawTimer";
ROUTE859.toField = "set_fraction";
ROUTE859.toNode = "Yaws_neck_RotationInterpolator";
children[228] = ROUTE859;

ROUTE ROUTE860 = createNode("ROUTE");
ROUTE860.fromField = "fraction_changed";
ROUTE860.fromNode = "YawTimer";
ROUTE860.toField = "set_fraction";
ROUTE860.toNode = "Yaws_upper_body_RotationInterpolator";
children[229] = ROUTE860;

ROUTE ROUTE861 = createNode("ROUTE");
ROUTE861.fromField = "fraction_changed";
ROUTE861.fromNode = "YawTimer";
ROUTE861.toField = "set_fraction";
ROUTE861.toNode = "Yaws_whole_body_RotationInterpolator";
children[230] = ROUTE861;

ROUTE ROUTE862 = createNode("ROUTE");
ROUTE862.fromField = "fraction_changed";
ROUTE862.fromNode = "YawTimer";
ROUTE862.toField = "set_fraction";
ROUTE862.toNode = "Yaws_whole_body_TranslationInterpolator";
children[231] = ROUTE862;

ROUTE ROUTE863 = createNode("ROUTE");
ROUTE863.fromField = "fraction_changed";
ROUTE863.fromNode = "YawTimer";
ROUTE863.toField = "set_fraction";
ROUTE863.toNode = "Yaw_l_sternoclavicular_RollInterpolator";
children[232] = ROUTE863;

ROUTE ROUTE864 = createNode("ROUTE");
ROUTE864.fromField = "fraction_changed";
ROUTE864.fromNode = "YawTimer";
ROUTE864.toField = "set_fraction";
ROUTE864.toNode = "Yaw_l_acromioclavicular_RollInterpolator";
children[233] = ROUTE864;

ROUTE ROUTE865 = createNode("ROUTE");
ROUTE865.fromField = "fraction_changed";
ROUTE865.fromNode = "YawTimer";
ROUTE865.toField = "set_fraction";
ROUTE865.toNode = "Yaw_r_sternoclavicular_RollInterpolator";
children[234] = ROUTE865;

ROUTE ROUTE866 = createNode("ROUTE");
ROUTE866.fromField = "fraction_changed";
ROUTE866.fromNode = "YawTimer";
ROUTE866.toField = "set_fraction";
ROUTE866.toNode = "Yaw_r_acromioclavicular_RollInterpolator";
children[235] = ROUTE866;

ROUTE ROUTE867 = createNode("ROUTE");
ROUTE867.fromField = "fraction_changed";
ROUTE867.fromNode = "YawTimer";
ROUTE867.toField = "set_fraction";
ROUTE867.toNode = "Yaw_r_metatarsal_PitchInterpolator";
children[236] = ROUTE867;

ROUTE ROUTE868 = createNode("ROUTE");
ROUTE868.fromField = "fraction_changed";
ROUTE868.fromNode = "YawTimer";
ROUTE868.toField = "set_fraction";
ROUTE868.toNode = "Yaw_sacroiliac_YawInterpolator";
children[237] = ROUTE868;

ROUTE ROUTE869 = createNode("ROUTE");
ROUTE869.fromField = "fraction_changed";
ROUTE869.fromNode = "YawTimer";
ROUTE869.toField = "set_fraction";
ROUTE869.toNode = "Yaw_vl5_YawInterpolator";
children[238] = ROUTE869;

ROUTE ROUTE870 = createNode("ROUTE");
ROUTE870.fromField = "fraction_changed";
ROUTE870.fromNode = "YawTimer";
ROUTE870.toField = "set_fraction";
ROUTE870.toNode = "Yaw_vc6_YawInterpolator";
children[239] = ROUTE870;

ROUTE ROUTE871 = createNode("ROUTE");
ROUTE871.fromField = "fraction_changed";
ROUTE871.fromNode = "YawTimer";
ROUTE871.toField = "set_fraction";
ROUTE871.toNode = "Yaw_l_thumb1_PitchInterpolator";
children[240] = ROUTE871;

ROUTE ROUTE872 = createNode("ROUTE");
ROUTE872.fromField = "fraction_changed";
ROUTE872.fromNode = "YawTimer";
ROUTE872.toField = "set_fraction";
ROUTE872.toNode = "Yaw_r_thumb1_PitchInterpolator";
children[241] = ROUTE872;

ROUTE ROUTE873 = createNode("ROUTE");
ROUTE873.fromField = "value_changed";
ROUTE873.fromNode = "Yaws_r_ankle_RotationInterpolator";
ROUTE873.toField = "set_rotation";
ROUTE873.toNode = "boxman_r_ankle";
children[242] = ROUTE873;

ROUTE ROUTE874 = createNode("ROUTE");
ROUTE874.fromField = "value_changed";
ROUTE874.fromNode = "Yaws_r_knee_RotationInterpolator";
ROUTE874.toField = "set_rotation";
ROUTE874.toNode = "boxman_r_knee";
children[243] = ROUTE874;

ROUTE ROUTE875 = createNode("ROUTE");
ROUTE875.fromField = "value_changed";
ROUTE875.fromNode = "Yaws_r_hip_RotationInterpolator";
ROUTE875.toField = "set_rotation";
ROUTE875.toNode = "boxman_r_hip";
children[244] = ROUTE875;

ROUTE ROUTE876 = createNode("ROUTE");
ROUTE876.fromField = "value_changed";
ROUTE876.fromNode = "Yaws_l_ankle_RotationInterpolator";
ROUTE876.toField = "set_rotation";
ROUTE876.toNode = "boxman_l_ankle";
children[245] = ROUTE876;

ROUTE ROUTE877 = createNode("ROUTE");
ROUTE877.fromField = "value_changed";
ROUTE877.fromNode = "Yaws_l_knee_RotationInterpolator";
ROUTE877.toField = "set_rotation";
ROUTE877.toNode = "boxman_l_knee";
children[246] = ROUTE877;

ROUTE ROUTE878 = createNode("ROUTE");
ROUTE878.fromField = "value_changed";
ROUTE878.fromNode = "Yaws_l_hip_RotationInterpolator";
ROUTE878.toField = "set_rotation";
ROUTE878.toNode = "boxman_l_hip";
children[247] = ROUTE878;

ROUTE ROUTE879 = createNode("ROUTE");
ROUTE879.fromField = "value_changed";
ROUTE879.fromNode = "Yaws_r_wrist_RotationInterpolator";
ROUTE879.toField = "set_rotation";
ROUTE879.toNode = "boxman_r_wrist";
children[248] = ROUTE879;

ROUTE ROUTE880 = createNode("ROUTE");
ROUTE880.fromField = "value_changed";
ROUTE880.fromNode = "Yaws_r_elbow_RotationInterpolator";
ROUTE880.toField = "set_rotation";
ROUTE880.toNode = "boxman_r_elbow";
children[249] = ROUTE880;

ROUTE ROUTE881 = createNode("ROUTE");
ROUTE881.fromField = "value_changed";
ROUTE881.fromNode = "Yaws_r_shoulder_RotationInterpolator";
ROUTE881.toField = "set_rotation";
ROUTE881.toNode = "boxman_r_shoulder";
children[250] = ROUTE881;

ROUTE ROUTE882 = createNode("ROUTE");
ROUTE882.fromField = "value_changed";
ROUTE882.fromNode = "Yaws_l_wrist_RotationInterpolator";
ROUTE882.toField = "set_rotation";
ROUTE882.toNode = "boxman_l_wrist";
children[251] = ROUTE882;

ROUTE ROUTE883 = createNode("ROUTE");
ROUTE883.fromField = "value_changed";
ROUTE883.fromNode = "Yaws_l_elbow_RotationInterpolator";
ROUTE883.toField = "set_rotation";
ROUTE883.toNode = "boxman_l_elbow";
children[252] = ROUTE883;

ROUTE ROUTE884 = createNode("ROUTE");
ROUTE884.fromField = "value_changed";
ROUTE884.fromNode = "Yaws_l_shoulder_RotationInterpolator";
ROUTE884.toField = "set_rotation";
ROUTE884.toNode = "boxman_l_shoulder";
children[253] = ROUTE884;

ROUTE ROUTE885 = createNode("ROUTE");
ROUTE885.fromField = "value_changed";
ROUTE885.fromNode = "Yaws_head_RotationInterpolator";
ROUTE885.toField = "set_rotation";
ROUTE885.toNode = "boxman_skullbase";
children[254] = ROUTE885;

ROUTE ROUTE886 = createNode("ROUTE");
ROUTE886.fromField = "value_changed";
ROUTE886.fromNode = "Yaws_whole_body_RotationInterpolator";
ROUTE886.toField = "set_rotation";
ROUTE886.toNode = "boxman_humanoid_root";
children[255] = ROUTE886;

ROUTE ROUTE887 = createNode("ROUTE");
ROUTE887.fromField = "value_changed";
ROUTE887.fromNode = "Yaws_whole_body_TranslationInterpolator";
ROUTE887.toField = "set_translation";
ROUTE887.toNode = "boxman_humanoid_root";
children[256] = ROUTE887;

ROUTE ROUTE888 = createNode("ROUTE");
ROUTE888.fromField = "value_changed";
ROUTE888.fromNode = "Yaw_vl5_YawInterpolator";
ROUTE888.toField = "set_rotation";
ROUTE888.toNode = "boxman_vl5";
children[257] = ROUTE888;

ROUTE ROUTE889 = createNode("ROUTE");
ROUTE889.fromField = "fraction_changed";
ROUTE889.fromNode = "RollTimer";
ROUTE889.toField = "set_fraction";
ROUTE889.toNode = "Rolls_r_ankle_RotationInterpolator";
children[258] = ROUTE889;

ROUTE ROUTE890 = createNode("ROUTE");
ROUTE890.fromField = "fraction_changed";
ROUTE890.fromNode = "RollTimer";
ROUTE890.toField = "set_fraction";
ROUTE890.toNode = "Rolls_r_knee_RotationInterpolator";
children[259] = ROUTE890;

ROUTE ROUTE891 = createNode("ROUTE");
ROUTE891.fromField = "fraction_changed";
ROUTE891.fromNode = "RollTimer";
ROUTE891.toField = "set_fraction";
ROUTE891.toNode = "Rolls_r_hip_RotationInterpolator";
children[260] = ROUTE891;

ROUTE ROUTE892 = createNode("ROUTE");
ROUTE892.fromField = "fraction_changed";
ROUTE892.fromNode = "RollTimer";
ROUTE892.toField = "set_fraction";
ROUTE892.toNode = "Rolls_l_ankle_RotationInterpolator";
children[261] = ROUTE892;

ROUTE ROUTE893 = createNode("ROUTE");
ROUTE893.fromField = "fraction_changed";
ROUTE893.fromNode = "RollTimer";
ROUTE893.toField = "set_fraction";
ROUTE893.toNode = "Rolls_l_knee_RotationInterpolator";
children[262] = ROUTE893;

ROUTE ROUTE894 = createNode("ROUTE");
ROUTE894.fromField = "fraction_changed";
ROUTE894.fromNode = "RollTimer";
ROUTE894.toField = "set_fraction";
ROUTE894.toNode = "Rolls_l_hip_RotationInterpolator";
children[263] = ROUTE894;

ROUTE ROUTE895 = createNode("ROUTE");
ROUTE895.fromField = "fraction_changed";
ROUTE895.fromNode = "RollTimer";
ROUTE895.toField = "set_fraction";
ROUTE895.toNode = "Rolls_lower_body_RotationInterpolator";
children[264] = ROUTE895;

ROUTE ROUTE896 = createNode("ROUTE");
ROUTE896.fromField = "fraction_changed";
ROUTE896.fromNode = "RollTimer";
ROUTE896.toField = "set_fraction";
ROUTE896.toNode = "Rolls_r_wrist_RotationInterpolator";
children[265] = ROUTE896;

ROUTE ROUTE897 = createNode("ROUTE");
ROUTE897.fromField = "fraction_changed";
ROUTE897.fromNode = "RollTimer";
ROUTE897.toField = "set_fraction";
ROUTE897.toNode = "Rolls_r_elbow_RotationInterpolator";
children[266] = ROUTE897;

ROUTE ROUTE898 = createNode("ROUTE");
ROUTE898.fromField = "fraction_changed";
ROUTE898.fromNode = "RollTimer";
ROUTE898.toField = "set_fraction";
ROUTE898.toNode = "Rolls_r_shoulder_RotationInterpolator";
children[267] = ROUTE898;

ROUTE ROUTE899 = createNode("ROUTE");
ROUTE899.fromField = "fraction_changed";
ROUTE899.fromNode = "RollTimer";
ROUTE899.toField = "set_fraction";
ROUTE899.toNode = "Rolls_l_wrist_RotationInterpolator";
children[268] = ROUTE899;

ROUTE ROUTE900 = createNode("ROUTE");
ROUTE900.fromField = "fraction_changed";
ROUTE900.fromNode = "RollTimer";
ROUTE900.toField = "set_fraction";
ROUTE900.toNode = "Rolls_l_elbow_RotationInterpolator";
children[269] = ROUTE900;

ROUTE ROUTE901 = createNode("ROUTE");
ROUTE901.fromField = "fraction_changed";
ROUTE901.fromNode = "RollTimer";
ROUTE901.toField = "set_fraction";
ROUTE901.toNode = "Rolls_l_shoulder_RotationInterpolator";
children[270] = ROUTE901;

ROUTE ROUTE902 = createNode("ROUTE");
ROUTE902.fromField = "fraction_changed";
ROUTE902.fromNode = "RollTimer";
ROUTE902.toField = "set_fraction";
ROUTE902.toNode = "Rolls_head_RotationInterpolator";
children[271] = ROUTE902;

ROUTE ROUTE903 = createNode("ROUTE");
ROUTE903.fromField = "fraction_changed";
ROUTE903.fromNode = "RollTimer";
ROUTE903.toField = "set_fraction";
ROUTE903.toNode = "Rolls_neck_RotationInterpolator";
children[272] = ROUTE903;

ROUTE ROUTE904 = createNode("ROUTE");
ROUTE904.fromField = "fraction_changed";
ROUTE904.fromNode = "RollTimer";
ROUTE904.toField = "set_fraction";
ROUTE904.toNode = "Rolls_upper_body_RotationInterpolator";
children[273] = ROUTE904;

ROUTE ROUTE905 = createNode("ROUTE");
ROUTE905.fromField = "fraction_changed";
ROUTE905.fromNode = "RollTimer";
ROUTE905.toField = "set_fraction";
ROUTE905.toNode = "Rolls_whole_body_RotationInterpolator";
children[274] = ROUTE905;

ROUTE ROUTE906 = createNode("ROUTE");
ROUTE906.fromField = "fraction_changed";
ROUTE906.fromNode = "RollTimer";
ROUTE906.toField = "set_fraction";
ROUTE906.toNode = "Rolls_whole_body_TranslationInterpolator";
children[275] = ROUTE906;

ROUTE ROUTE907 = createNode("ROUTE");
ROUTE907.fromField = "fraction_changed";
ROUTE907.fromNode = "RollTimer";
ROUTE907.toField = "set_fraction";
ROUTE907.toNode = "Roll_l_sternoclavicular_RollInterpolator";
children[276] = ROUTE907;

ROUTE ROUTE908 = createNode("ROUTE");
ROUTE908.fromField = "fraction_changed";
ROUTE908.fromNode = "RollTimer";
ROUTE908.toField = "set_fraction";
ROUTE908.toNode = "Roll_l_acromioclavicular_RollInterpolator";
children[277] = ROUTE908;

ROUTE ROUTE909 = createNode("ROUTE");
ROUTE909.fromField = "fraction_changed";
ROUTE909.fromNode = "RollTimer";
ROUTE909.toField = "set_fraction";
ROUTE909.toNode = "Roll_r_sternoclavicular_RollInterpolator";
children[278] = ROUTE909;

ROUTE ROUTE910 = createNode("ROUTE");
ROUTE910.fromField = "fraction_changed";
ROUTE910.fromNode = "RollTimer";
ROUTE910.toField = "set_fraction";
ROUTE910.toNode = "Roll_r_acromioclavicular_RollInterpolator";
children[279] = ROUTE910;

ROUTE ROUTE911 = createNode("ROUTE");
ROUTE911.fromField = "fraction_changed";
ROUTE911.fromNode = "RollTimer";
ROUTE911.toField = "set_fraction";
ROUTE911.toNode = "Roll_r_metatarsal_PitchInterpolator";
children[280] = ROUTE911;

ROUTE ROUTE912 = createNode("ROUTE");
ROUTE912.fromField = "fraction_changed";
ROUTE912.fromNode = "RollTimer";
ROUTE912.toField = "set_fraction";
ROUTE912.toNode = "Roll_sacroiliac_YawInterpolator";
children[281] = ROUTE912;

ROUTE ROUTE913 = createNode("ROUTE");
ROUTE913.fromField = "fraction_changed";
ROUTE913.fromNode = "RollTimer";
ROUTE913.toField = "set_fraction";
ROUTE913.toNode = "Roll_vl5_YawInterpolator";
children[282] = ROUTE913;

ROUTE ROUTE914 = createNode("ROUTE");
ROUTE914.fromField = "fraction_changed";
ROUTE914.fromNode = "RollTimer";
ROUTE914.toField = "set_fraction";
ROUTE914.toNode = "Roll_vc6_YawInterpolator";
children[283] = ROUTE914;

ROUTE ROUTE915 = createNode("ROUTE");
ROUTE915.fromField = "fraction_changed";
ROUTE915.fromNode = "RollTimer";
ROUTE915.toField = "set_fraction";
ROUTE915.toNode = "Roll_l_thumb1_PitchInterpolator";
children[284] = ROUTE915;

ROUTE ROUTE916 = createNode("ROUTE");
ROUTE916.fromField = "fraction_changed";
ROUTE916.fromNode = "RollTimer";
ROUTE916.toField = "set_fraction";
ROUTE916.toNode = "Roll_r_thumb1_PitchInterpolator";
children[285] = ROUTE916;

ROUTE ROUTE917 = createNode("ROUTE");
ROUTE917.fromField = "value_changed";
ROUTE917.fromNode = "Rolls_r_ankle_RotationInterpolator";
ROUTE917.toField = "set_rotation";
ROUTE917.toNode = "boxman_r_ankle";
children[286] = ROUTE917;

ROUTE ROUTE918 = createNode("ROUTE");
ROUTE918.fromField = "value_changed";
ROUTE918.fromNode = "Rolls_r_knee_RotationInterpolator";
ROUTE918.toField = "set_rotation";
ROUTE918.toNode = "boxman_r_knee";
children[287] = ROUTE918;

ROUTE ROUTE919 = createNode("ROUTE");
ROUTE919.fromField = "value_changed";
ROUTE919.fromNode = "Rolls_r_hip_RotationInterpolator";
ROUTE919.toField = "set_rotation";
ROUTE919.toNode = "boxman_r_hip";
children[288] = ROUTE919;

ROUTE ROUTE920 = createNode("ROUTE");
ROUTE920.fromField = "value_changed";
ROUTE920.fromNode = "Rolls_l_ankle_RotationInterpolator";
ROUTE920.toField = "set_rotation";
ROUTE920.toNode = "boxman_l_ankle";
children[289] = ROUTE920;

ROUTE ROUTE921 = createNode("ROUTE");
ROUTE921.fromField = "value_changed";
ROUTE921.fromNode = "Rolls_l_knee_RotationInterpolator";
ROUTE921.toField = "set_rotation";
ROUTE921.toNode = "boxman_l_knee";
children[290] = ROUTE921;

ROUTE ROUTE922 = createNode("ROUTE");
ROUTE922.fromField = "value_changed";
ROUTE922.fromNode = "Rolls_l_hip_RotationInterpolator";
ROUTE922.toField = "set_rotation";
ROUTE922.toNode = "boxman_l_hip";
children[291] = ROUTE922;

ROUTE ROUTE923 = createNode("ROUTE");
ROUTE923.fromField = "value_changed";
ROUTE923.fromNode = "Rolls_r_wrist_RotationInterpolator";
ROUTE923.toField = "set_rotation";
ROUTE923.toNode = "boxman_r_wrist";
children[292] = ROUTE923;

ROUTE ROUTE924 = createNode("ROUTE");
ROUTE924.fromField = "value_changed";
ROUTE924.fromNode = "Rolls_r_elbow_RotationInterpolator";
ROUTE924.toField = "set_rotation";
ROUTE924.toNode = "boxman_r_elbow";
children[293] = ROUTE924;

ROUTE ROUTE925 = createNode("ROUTE");
ROUTE925.fromField = "value_changed";
ROUTE925.fromNode = "Rolls_r_shoulder_RotationInterpolator";
ROUTE925.toField = "set_rotation";
ROUTE925.toNode = "boxman_r_shoulder";
children[294] = ROUTE925;

ROUTE ROUTE926 = createNode("ROUTE");
ROUTE926.fromField = "value_changed";
ROUTE926.fromNode = "Rolls_l_wrist_RotationInterpolator";
ROUTE926.toField = "set_rotation";
ROUTE926.toNode = "boxman_l_wrist";
children[295] = ROUTE926;

ROUTE ROUTE927 = createNode("ROUTE");
ROUTE927.fromField = "value_changed";
ROUTE927.fromNode = "Rolls_l_elbow_RotationInterpolator";
ROUTE927.toField = "set_rotation";
ROUTE927.toNode = "boxman_l_elbow";
children[296] = ROUTE927;

ROUTE ROUTE928 = createNode("ROUTE");
ROUTE928.fromField = "value_changed";
ROUTE928.fromNode = "Rolls_l_shoulder_RotationInterpolator";
ROUTE928.toField = "set_rotation";
ROUTE928.toNode = "boxman_l_shoulder";
children[297] = ROUTE928;

ROUTE ROUTE929 = createNode("ROUTE");
ROUTE929.fromField = "value_changed";
ROUTE929.fromNode = "Rolls_head_RotationInterpolator";
ROUTE929.toField = "set_rotation";
ROUTE929.toNode = "boxman_skullbase";
children[298] = ROUTE929;

ROUTE ROUTE930 = createNode("ROUTE");
ROUTE930.fromField = "value_changed";
ROUTE930.fromNode = "Rolls_whole_body_RotationInterpolator";
ROUTE930.toField = "set_rotation";
ROUTE930.toNode = "boxman_humanoid_root";
children[299] = ROUTE930;

ROUTE ROUTE931 = createNode("ROUTE");
ROUTE931.fromField = "value_changed";
ROUTE931.fromNode = "Rolls_whole_body_TranslationInterpolator";
ROUTE931.toField = "set_translation";
ROUTE931.toNode = "boxman_humanoid_root";
children[300] = ROUTE931;

ROUTE ROUTE932 = createNode("ROUTE");
ROUTE932.fromField = "value_changed";
ROUTE932.fromNode = "Roll_vl5_YawInterpolator";
ROUTE932.toField = "set_rotation";
ROUTE932.toNode = "boxman_vl5";
children[301] = ROUTE932;

ROUTE ROUTE933 = createNode("ROUTE");
ROUTE933.fromField = "fraction_changed";
ROUTE933.fromNode = "WalkTimer";
ROUTE933.toField = "set_fraction";
ROUTE933.toNode = "Walk_r_ankle_RotationInterpolator";
children[302] = ROUTE933;

ROUTE ROUTE934 = createNode("ROUTE");
ROUTE934.fromField = "fraction_changed";
ROUTE934.fromNode = "WalkTimer";
ROUTE934.toField = "set_fraction";
ROUTE934.toNode = "Walk_r_knee_RotationInterpolator";
children[303] = ROUTE934;

ROUTE ROUTE935 = createNode("ROUTE");
ROUTE935.fromField = "fraction_changed";
ROUTE935.fromNode = "WalkTimer";
ROUTE935.toField = "set_fraction";
ROUTE935.toNode = "Walk_r_hip_RotationInterpolator";
children[304] = ROUTE935;

ROUTE ROUTE936 = createNode("ROUTE");
ROUTE936.fromField = "fraction_changed";
ROUTE936.fromNode = "WalkTimer";
ROUTE936.toField = "set_fraction";
ROUTE936.toNode = "Walk_l_ankle_RotationInterpolator";
children[305] = ROUTE936;

ROUTE ROUTE937 = createNode("ROUTE");
ROUTE937.fromField = "fraction_changed";
ROUTE937.fromNode = "WalkTimer";
ROUTE937.toField = "set_fraction";
ROUTE937.toNode = "Walk_l_knee_RotationInterpolator";
children[306] = ROUTE937;

ROUTE ROUTE938 = createNode("ROUTE");
ROUTE938.fromField = "fraction_changed";
ROUTE938.fromNode = "WalkTimer";
ROUTE938.toField = "set_fraction";
ROUTE938.toNode = "Walk_l_hip_RotationInterpolator";
children[307] = ROUTE938;

ROUTE ROUTE939 = createNode("ROUTE");
ROUTE939.fromField = "fraction_changed";
ROUTE939.fromNode = "WalkTimer";
ROUTE939.toField = "set_fraction";
ROUTE939.toNode = "Walk_lower_body_RotationInterpolator";
children[308] = ROUTE939;

ROUTE ROUTE940 = createNode("ROUTE");
ROUTE940.fromField = "fraction_changed";
ROUTE940.fromNode = "WalkTimer";
ROUTE940.toField = "set_fraction";
ROUTE940.toNode = "Walk_r_wrist_RotationInterpolator";
children[309] = ROUTE940;

ROUTE ROUTE941 = createNode("ROUTE");
ROUTE941.fromField = "fraction_changed";
ROUTE941.fromNode = "WalkTimer";
ROUTE941.toField = "set_fraction";
ROUTE941.toNode = "Walk_r_elbow_RotationInterpolator";
children[310] = ROUTE941;

ROUTE ROUTE942 = createNode("ROUTE");
ROUTE942.fromField = "fraction_changed";
ROUTE942.fromNode = "WalkTimer";
ROUTE942.toField = "set_fraction";
ROUTE942.toNode = "Walk_r_shoulder_RotationInterpolator";
children[311] = ROUTE942;

ROUTE ROUTE943 = createNode("ROUTE");
ROUTE943.fromField = "fraction_changed";
ROUTE943.fromNode = "WalkTimer";
ROUTE943.toField = "set_fraction";
ROUTE943.toNode = "Walk_l_wrist_RotationInterpolator";
children[312] = ROUTE943;

ROUTE ROUTE944 = createNode("ROUTE");
ROUTE944.fromField = "fraction_changed";
ROUTE944.fromNode = "WalkTimer";
ROUTE944.toField = "set_fraction";
ROUTE944.toNode = "Walk_l_elbow_RotationInterpolator";
children[313] = ROUTE944;

ROUTE ROUTE945 = createNode("ROUTE");
ROUTE945.fromField = "fraction_changed";
ROUTE945.fromNode = "WalkTimer";
ROUTE945.toField = "set_fraction";
ROUTE945.toNode = "Walk_l_shoulder_RotationInterpolator";
children[314] = ROUTE945;

ROUTE ROUTE946 = createNode("ROUTE");
ROUTE946.fromField = "fraction_changed";
ROUTE946.fromNode = "WalkTimer";
ROUTE946.toField = "set_fraction";
ROUTE946.toNode = "Walk_head_RotationInterpolator";
children[315] = ROUTE946;

ROUTE ROUTE947 = createNode("ROUTE");
ROUTE947.fromField = "fraction_changed";
ROUTE947.fromNode = "WalkTimer";
ROUTE947.toField = "set_fraction";
ROUTE947.toNode = "Walk_neck_RotationInterpolator";
children[316] = ROUTE947;

ROUTE ROUTE948 = createNode("ROUTE");
ROUTE948.fromField = "fraction_changed";
ROUTE948.fromNode = "WalkTimer";
ROUTE948.toField = "set_fraction";
ROUTE948.toNode = "Walk_upper_body_RotationInterpolator";
children[317] = ROUTE948;

ROUTE ROUTE949 = createNode("ROUTE");
ROUTE949.fromField = "fraction_changed";
ROUTE949.fromNode = "WalkTimer";
ROUTE949.toField = "set_fraction";
ROUTE949.toNode = "Walk_whole_body_RotationInterpolator";
children[318] = ROUTE949;

ROUTE ROUTE950 = createNode("ROUTE");
ROUTE950.fromField = "fraction_changed";
ROUTE950.fromNode = "WalkTimer";
ROUTE950.toField = "set_fraction";
ROUTE950.toNode = "Walk_whole_body_TranslationInterpolator";
children[319] = ROUTE950;

ROUTE ROUTE951 = createNode("ROUTE");
ROUTE951.fromField = "fraction_changed";
ROUTE951.fromNode = "WalkTimer";
ROUTE951.toField = "set_fraction";
ROUTE951.toNode = "Walk_l_sternoclavicular_RollInterpolator";
children[320] = ROUTE951;

ROUTE ROUTE952 = createNode("ROUTE");
ROUTE952.fromField = "fraction_changed";
ROUTE952.fromNode = "WalkTimer";
ROUTE952.toField = "set_fraction";
ROUTE952.toNode = "Walk_l_acromioclavicular_RollInterpolator";
children[321] = ROUTE952;

ROUTE ROUTE953 = createNode("ROUTE");
ROUTE953.fromField = "fraction_changed";
ROUTE953.fromNode = "WalkTimer";
ROUTE953.toField = "set_fraction";
ROUTE953.toNode = "Walk_r_sternoclavicular_RollInterpolator";
children[322] = ROUTE953;

ROUTE ROUTE954 = createNode("ROUTE");
ROUTE954.fromField = "fraction_changed";
ROUTE954.fromNode = "WalkTimer";
ROUTE954.toField = "set_fraction";
ROUTE954.toNode = "Walk_r_acromioclavicular_RollInterpolator";
children[323] = ROUTE954;

ROUTE ROUTE955 = createNode("ROUTE");
ROUTE955.fromField = "fraction_changed";
ROUTE955.fromNode = "WalkTimer";
ROUTE955.toField = "set_fraction";
ROUTE955.toNode = "Walk_r_metatarsal_PitchInterpolator";
children[324] = ROUTE955;

ROUTE ROUTE956 = createNode("ROUTE");
ROUTE956.fromField = "fraction_changed";
ROUTE956.fromNode = "WalkTimer";
ROUTE956.toField = "set_fraction";
ROUTE956.toNode = "Walk_sacroiliac_YawInterpolator";
children[325] = ROUTE956;

ROUTE ROUTE957 = createNode("ROUTE");
ROUTE957.fromField = "fraction_changed";
ROUTE957.fromNode = "WalkTimer";
ROUTE957.toField = "set_fraction";
ROUTE957.toNode = "Walk_vl5_YawInterpolator";
children[326] = ROUTE957;

ROUTE ROUTE958 = createNode("ROUTE");
ROUTE958.fromField = "fraction_changed";
ROUTE958.fromNode = "WalkTimer";
ROUTE958.toField = "set_fraction";
ROUTE958.toNode = "Walk_vc6_YawInterpolator";
children[327] = ROUTE958;

ROUTE ROUTE959 = createNode("ROUTE");
ROUTE959.fromField = "fraction_changed";
ROUTE959.fromNode = "WalkTimer";
ROUTE959.toField = "set_fraction";
ROUTE959.toNode = "Walk_l_thumb1_PitchInterpolator";
children[328] = ROUTE959;

ROUTE ROUTE960 = createNode("ROUTE");
ROUTE960.fromField = "fraction_changed";
ROUTE960.fromNode = "WalkTimer";
ROUTE960.toField = "set_fraction";
ROUTE960.toNode = "Walk_r_thumb1_PitchInterpolator";
children[329] = ROUTE960;

ROUTE ROUTE961 = createNode("ROUTE");
ROUTE961.fromField = "value_changed";
ROUTE961.fromNode = "Walk_r_ankle_RotationInterpolator";
ROUTE961.toField = "set_rotation";
ROUTE961.toNode = "boxman_r_ankle";
children[330] = ROUTE961;

ROUTE ROUTE962 = createNode("ROUTE");
ROUTE962.fromField = "value_changed";
ROUTE962.fromNode = "Walk_r_knee_RotationInterpolator";
ROUTE962.toField = "set_rotation";
ROUTE962.toNode = "boxman_r_knee";
children[331] = ROUTE962;

ROUTE ROUTE963 = createNode("ROUTE");
ROUTE963.fromField = "value_changed";
ROUTE963.fromNode = "Walk_r_hip_RotationInterpolator";
ROUTE963.toField = "set_rotation";
ROUTE963.toNode = "boxman_r_hip";
children[332] = ROUTE963;

ROUTE ROUTE964 = createNode("ROUTE");
ROUTE964.fromField = "value_changed";
ROUTE964.fromNode = "Walk_l_ankle_RotationInterpolator";
ROUTE964.toField = "set_rotation";
ROUTE964.toNode = "boxman_l_ankle";
children[333] = ROUTE964;

ROUTE ROUTE965 = createNode("ROUTE");
ROUTE965.fromField = "value_changed";
ROUTE965.fromNode = "Walk_l_knee_RotationInterpolator";
ROUTE965.toField = "set_rotation";
ROUTE965.toNode = "boxman_l_knee";
children[334] = ROUTE965;

ROUTE ROUTE966 = createNode("ROUTE");
ROUTE966.fromField = "value_changed";
ROUTE966.fromNode = "Walk_l_hip_RotationInterpolator";
ROUTE966.toField = "set_rotation";
ROUTE966.toNode = "boxman_l_hip";
children[335] = ROUTE966;

ROUTE ROUTE967 = createNode("ROUTE");
ROUTE967.fromField = "value_changed";
ROUTE967.fromNode = "Walk_r_wrist_RotationInterpolator";
ROUTE967.toField = "set_rotation";
ROUTE967.toNode = "boxman_r_wrist";
children[336] = ROUTE967;

ROUTE ROUTE968 = createNode("ROUTE");
ROUTE968.fromField = "value_changed";
ROUTE968.fromNode = "Walk_r_elbow_RotationInterpolator";
ROUTE968.toField = "set_rotation";
ROUTE968.toNode = "boxman_r_elbow";
children[337] = ROUTE968;

ROUTE ROUTE969 = createNode("ROUTE");
ROUTE969.fromField = "value_changed";
ROUTE969.fromNode = "Walk_r_shoulder_RotationInterpolator";
ROUTE969.toField = "set_rotation";
ROUTE969.toNode = "boxman_r_shoulder";
children[338] = ROUTE969;

ROUTE ROUTE970 = createNode("ROUTE");
ROUTE970.fromField = "value_changed";
ROUTE970.fromNode = "Walk_l_wrist_RotationInterpolator";
ROUTE970.toField = "set_rotation";
ROUTE970.toNode = "boxman_l_wrist";
children[339] = ROUTE970;

ROUTE ROUTE971 = createNode("ROUTE");
ROUTE971.fromField = "value_changed";
ROUTE971.fromNode = "Walk_l_elbow_RotationInterpolator";
ROUTE971.toField = "set_rotation";
ROUTE971.toNode = "boxman_l_elbow";
children[340] = ROUTE971;

ROUTE ROUTE972 = createNode("ROUTE");
ROUTE972.fromField = "value_changed";
ROUTE972.fromNode = "Walk_l_shoulder_RotationInterpolator";
ROUTE972.toField = "set_rotation";
ROUTE972.toNode = "boxman_l_shoulder";
children[341] = ROUTE972;

ROUTE ROUTE973 = createNode("ROUTE");
ROUTE973.fromField = "value_changed";
ROUTE973.fromNode = "Walk_head_RotationInterpolator";
ROUTE973.toField = "set_rotation";
ROUTE973.toNode = "boxman_skullbase";
children[342] = ROUTE973;

ROUTE ROUTE974 = createNode("ROUTE");
ROUTE974.fromField = "value_changed";
ROUTE974.fromNode = "Walk_whole_body_RotationInterpolator";
ROUTE974.toField = "set_rotation";
ROUTE974.toNode = "boxman_humanoid_root";
children[343] = ROUTE974;

ROUTE ROUTE975 = createNode("ROUTE");
ROUTE975.fromField = "value_changed";
ROUTE975.fromNode = "Walk_whole_body_TranslationInterpolator";
ROUTE975.toField = "set_translation";
ROUTE975.toNode = "boxman_humanoid_root";
children[344] = ROUTE975;

ROUTE ROUTE976 = createNode("ROUTE");
ROUTE976.fromField = "value_changed";
ROUTE976.fromNode = "Walk_vl5_YawInterpolator";
ROUTE976.toField = "set_rotation";
ROUTE976.toNode = "boxman_vl5";
children[345] = ROUTE976;

ROUTE ROUTE977 = createNode("ROUTE");
ROUTE977.fromField = "fraction_changed";
ROUTE977.fromNode = "RunTimer";
ROUTE977.toField = "set_fraction";
ROUTE977.toNode = "Run_r_ankle_RotationInterpolator_Run";
children[346] = ROUTE977;

ROUTE ROUTE978 = createNode("ROUTE");
ROUTE978.fromField = "fraction_changed";
ROUTE978.fromNode = "RunTimer";
ROUTE978.toField = "set_fraction";
ROUTE978.toNode = "Run_r_knee_RotationInterpolator_Run";
children[347] = ROUTE978;

ROUTE ROUTE979 = createNode("ROUTE");
ROUTE979.fromField = "fraction_changed";
ROUTE979.fromNode = "RunTimer";
ROUTE979.toField = "set_fraction";
ROUTE979.toNode = "Run_r_hip_RotationInterpolator_Run";
children[348] = ROUTE979;

ROUTE ROUTE980 = createNode("ROUTE");
ROUTE980.fromField = "fraction_changed";
ROUTE980.fromNode = "RunTimer";
ROUTE980.toField = "set_fraction";
ROUTE980.toNode = "Run_l_ankle_RotationInterpolator_Run";
children[349] = ROUTE980;

ROUTE ROUTE981 = createNode("ROUTE");
ROUTE981.fromField = "fraction_changed";
ROUTE981.fromNode = "RunTimer";
ROUTE981.toField = "set_fraction";
ROUTE981.toNode = "Run_l_knee_RotationInterpolator_Run";
children[350] = ROUTE981;

ROUTE ROUTE982 = createNode("ROUTE");
ROUTE982.fromField = "fraction_changed";
ROUTE982.fromNode = "RunTimer";
ROUTE982.toField = "set_fraction";
ROUTE982.toNode = "Run_l_hip_RotationInterpolator_Run";
children[351] = ROUTE982;

ROUTE ROUTE983 = createNode("ROUTE");
ROUTE983.fromField = "fraction_changed";
ROUTE983.fromNode = "RunTimer";
ROUTE983.toField = "set_fraction";
ROUTE983.toNode = "Run_lower_body_RotationInterpolator_Run";
children[352] = ROUTE983;

ROUTE ROUTE984 = createNode("ROUTE");
ROUTE984.fromField = "fraction_changed";
ROUTE984.fromNode = "RunTimer";
ROUTE984.toField = "set_fraction";
ROUTE984.toNode = "Run_r_wrist_RotationInterpolator_Run";
children[353] = ROUTE984;

ROUTE ROUTE985 = createNode("ROUTE");
ROUTE985.fromField = "fraction_changed";
ROUTE985.fromNode = "RunTimer";
ROUTE985.toField = "set_fraction";
ROUTE985.toNode = "Run_r_elbow_RotationInterpolator_Run";
children[354] = ROUTE985;

ROUTE ROUTE986 = createNode("ROUTE");
ROUTE986.fromField = "fraction_changed";
ROUTE986.fromNode = "RunTimer";
ROUTE986.toField = "set_fraction";
ROUTE986.toNode = "Run_r_shoulder_RotationInterpolator_Run";
children[355] = ROUTE986;

ROUTE ROUTE987 = createNode("ROUTE");
ROUTE987.fromField = "fraction_changed";
ROUTE987.fromNode = "RunTimer";
ROUTE987.toField = "set_fraction";
ROUTE987.toNode = "Run_l_wrist_RotationInterpolator_Run";
children[356] = ROUTE987;

ROUTE ROUTE988 = createNode("ROUTE");
ROUTE988.fromField = "fraction_changed";
ROUTE988.fromNode = "RunTimer";
ROUTE988.toField = "set_fraction";
ROUTE988.toNode = "Run_l_elbow_RotationInterpolator_Run";
children[357] = ROUTE988;

ROUTE ROUTE989 = createNode("ROUTE");
ROUTE989.fromField = "fraction_changed";
ROUTE989.fromNode = "RunTimer";
ROUTE989.toField = "set_fraction";
ROUTE989.toNode = "Run_l_shoulder_RotationInterpolator_Run";
children[358] = ROUTE989;

ROUTE ROUTE990 = createNode("ROUTE");
ROUTE990.fromField = "fraction_changed";
ROUTE990.fromNode = "RunTimer";
ROUTE990.toField = "set_fraction";
ROUTE990.toNode = "Run_head_RotationInterpolator_Run";
children[359] = ROUTE990;

ROUTE ROUTE991 = createNode("ROUTE");
ROUTE991.fromField = "fraction_changed";
ROUTE991.fromNode = "RunTimer";
ROUTE991.toField = "set_fraction";
ROUTE991.toNode = "Run_neck_RotationInterpolator_Run";
children[360] = ROUTE991;

ROUTE ROUTE992 = createNode("ROUTE");
ROUTE992.fromField = "fraction_changed";
ROUTE992.fromNode = "RunTimer";
ROUTE992.toField = "set_fraction";
ROUTE992.toNode = "Run_upper_body_RotationInterpolator_Run";
children[361] = ROUTE992;

ROUTE ROUTE993 = createNode("ROUTE");
ROUTE993.fromField = "fraction_changed";
ROUTE993.fromNode = "RunTimer";
ROUTE993.toField = "set_fraction";
ROUTE993.toNode = "Run_whole_body_RotationInterpolator_Run";
children[362] = ROUTE993;

ROUTE ROUTE994 = createNode("ROUTE");
ROUTE994.fromField = "fraction_changed";
ROUTE994.fromNode = "RunTimer";
ROUTE994.toField = "set_fraction";
ROUTE994.toNode = "Run_whole_body_TranslationInterpolator_Run";
children[363] = ROUTE994;

ROUTE ROUTE995 = createNode("ROUTE");
ROUTE995.fromField = "fraction_changed";
ROUTE995.fromNode = "RunTimer";
ROUTE995.toField = "set_fraction";
ROUTE995.toNode = "Run_l_sternoclavicular_RollInterpolator";
children[364] = ROUTE995;

ROUTE ROUTE996 = createNode("ROUTE");
ROUTE996.fromField = "fraction_changed";
ROUTE996.fromNode = "RunTimer";
ROUTE996.toField = "set_fraction";
ROUTE996.toNode = "Run_l_acromioclavicular_RollInterpolator";
children[365] = ROUTE996;

ROUTE ROUTE997 = createNode("ROUTE");
ROUTE997.fromField = "fraction_changed";
ROUTE997.fromNode = "RunTimer";
ROUTE997.toField = "set_fraction";
ROUTE997.toNode = "Run_r_sternoclavicular_RollInterpolator";
children[366] = ROUTE997;

ROUTE ROUTE998 = createNode("ROUTE");
ROUTE998.fromField = "fraction_changed";
ROUTE998.fromNode = "RunTimer";
ROUTE998.toField = "set_fraction";
ROUTE998.toNode = "Run_r_acromioclavicular_RollInterpolator";
children[367] = ROUTE998;

ROUTE ROUTE999 = createNode("ROUTE");
ROUTE999.fromField = "fraction_changed";
ROUTE999.fromNode = "RunTimer";
ROUTE999.toField = "set_fraction";
ROUTE999.toNode = "Run_r_metatarsal_PitchInterpolator";
children[368] = ROUTE999;

ROUTE ROUTE1000 = createNode("ROUTE");
ROUTE1000.fromField = "fraction_changed";
ROUTE1000.fromNode = "RunTimer";
ROUTE1000.toField = "set_fraction";
ROUTE1000.toNode = "Run_sacroiliac_YawInterpolator";
children[369] = ROUTE1000;

ROUTE ROUTE1001 = createNode("ROUTE");
ROUTE1001.fromField = "fraction_changed";
ROUTE1001.fromNode = "RunTimer";
ROUTE1001.toField = "set_fraction";
ROUTE1001.toNode = "Run_vl5_YawInterpolator";
children[370] = ROUTE1001;

ROUTE ROUTE1002 = createNode("ROUTE");
ROUTE1002.fromField = "fraction_changed";
ROUTE1002.fromNode = "RunTimer";
ROUTE1002.toField = "set_fraction";
ROUTE1002.toNode = "Run_vc6_YawInterpolator";
children[371] = ROUTE1002;

ROUTE ROUTE1003 = createNode("ROUTE");
ROUTE1003.fromField = "fraction_changed";
ROUTE1003.fromNode = "RunTimer";
ROUTE1003.toField = "set_fraction";
ROUTE1003.toNode = "Run_l_thumb1_PitchInterpolator";
children[372] = ROUTE1003;

ROUTE ROUTE1004 = createNode("ROUTE");
ROUTE1004.fromField = "fraction_changed";
ROUTE1004.fromNode = "RunTimer";
ROUTE1004.toField = "set_fraction";
ROUTE1004.toNode = "Run_r_thumb1_PitchInterpolator";
children[373] = ROUTE1004;

ROUTE ROUTE1005 = createNode("ROUTE");
ROUTE1005.fromField = "value_changed";
ROUTE1005.fromNode = "Run_r_ankle_RotationInterpolator_Run";
ROUTE1005.toField = "set_rotation";
ROUTE1005.toNode = "boxman_r_ankle";
children[374] = ROUTE1005;

ROUTE ROUTE1006 = createNode("ROUTE");
ROUTE1006.fromField = "value_changed";
ROUTE1006.fromNode = "Run_r_knee_RotationInterpolator_Run";
ROUTE1006.toField = "set_rotation";
ROUTE1006.toNode = "boxman_r_knee";
children[375] = ROUTE1006;

ROUTE ROUTE1007 = createNode("ROUTE");
ROUTE1007.fromField = "value_changed";
ROUTE1007.fromNode = "Run_r_hip_RotationInterpolator_Run";
ROUTE1007.toField = "set_rotation";
ROUTE1007.toNode = "boxman_r_hip";
children[376] = ROUTE1007;

ROUTE ROUTE1008 = createNode("ROUTE");
ROUTE1008.fromField = "value_changed";
ROUTE1008.fromNode = "Run_l_ankle_RotationInterpolator_Run";
ROUTE1008.toField = "set_rotation";
ROUTE1008.toNode = "boxman_l_ankle";
children[377] = ROUTE1008;

ROUTE ROUTE1009 = createNode("ROUTE");
ROUTE1009.fromField = "value_changed";
ROUTE1009.fromNode = "Run_l_knee_RotationInterpolator_Run";
ROUTE1009.toField = "set_rotation";
ROUTE1009.toNode = "boxman_l_knee";
children[378] = ROUTE1009;

ROUTE ROUTE1010 = createNode("ROUTE");
ROUTE1010.fromField = "value_changed";
ROUTE1010.fromNode = "Run_l_hip_RotationInterpolator_Run";
ROUTE1010.toField = "set_rotation";
ROUTE1010.toNode = "boxman_l_hip";
children[379] = ROUTE1010;

ROUTE ROUTE1011 = createNode("ROUTE");
ROUTE1011.fromField = "value_changed";
ROUTE1011.fromNode = "Run_r_wrist_RotationInterpolator_Run";
ROUTE1011.toField = "set_rotation";
ROUTE1011.toNode = "boxman_r_wrist";
children[380] = ROUTE1011;

ROUTE ROUTE1012 = createNode("ROUTE");
ROUTE1012.fromField = "value_changed";
ROUTE1012.fromNode = "Run_r_elbow_RotationInterpolator_Run";
ROUTE1012.toField = "set_rotation";
ROUTE1012.toNode = "boxman_r_elbow";
children[381] = ROUTE1012;

ROUTE ROUTE1013 = createNode("ROUTE");
ROUTE1013.fromField = "value_changed";
ROUTE1013.fromNode = "Run_r_shoulder_RotationInterpolator_Run";
ROUTE1013.toField = "set_rotation";
ROUTE1013.toNode = "boxman_r_shoulder";
children[382] = ROUTE1013;

ROUTE ROUTE1014 = createNode("ROUTE");
ROUTE1014.fromField = "value_changed";
ROUTE1014.fromNode = "Run_l_wrist_RotationInterpolator_Run";
ROUTE1014.toField = "set_rotation";
ROUTE1014.toNode = "boxman_l_wrist";
children[383] = ROUTE1014;

ROUTE ROUTE1015 = createNode("ROUTE");
ROUTE1015.fromField = "value_changed";
ROUTE1015.fromNode = "Run_l_elbow_RotationInterpolator_Run";
ROUTE1015.toField = "set_rotation";
ROUTE1015.toNode = "boxman_l_elbow";
children[384] = ROUTE1015;

ROUTE ROUTE1016 = createNode("ROUTE");
ROUTE1016.fromField = "value_changed";
ROUTE1016.fromNode = "Run_l_shoulder_RotationInterpolator_Run";
ROUTE1016.toField = "set_rotation";
ROUTE1016.toNode = "boxman_l_shoulder";
children[385] = ROUTE1016;

ROUTE ROUTE1017 = createNode("ROUTE");
ROUTE1017.fromField = "value_changed";
ROUTE1017.fromNode = "Run_head_RotationInterpolator_Run";
ROUTE1017.toField = "set_rotation";
ROUTE1017.toNode = "boxman_skullbase";
children[386] = ROUTE1017;

ROUTE ROUTE1018 = createNode("ROUTE");
ROUTE1018.fromField = "value_changed";
ROUTE1018.fromNode = "Run_whole_body_RotationInterpolator_Run";
ROUTE1018.toField = "set_rotation";
ROUTE1018.toNode = "boxman_humanoid_root";
children[387] = ROUTE1018;

ROUTE ROUTE1019 = createNode("ROUTE");
ROUTE1019.fromField = "value_changed";
ROUTE1019.fromNode = "Run_whole_body_TranslationInterpolator_Run";
ROUTE1019.toField = "set_translation";
ROUTE1019.toNode = "boxman_humanoid_root";
children[388] = ROUTE1019;

ROUTE ROUTE1020 = createNode("ROUTE");
ROUTE1020.fromField = "value_changed";
ROUTE1020.fromNode = "Run_vl5_YawInterpolator";
ROUTE1020.toField = "set_rotation";
ROUTE1020.toNode = "boxman_vl5";
children[389] = ROUTE1020;

ROUTE ROUTE1021 = createNode("ROUTE");
ROUTE1021.fromField = "fraction_changed";
ROUTE1021.fromNode = "JumpTimer";
ROUTE1021.toField = "set_fraction";
ROUTE1021.toNode = "Jump_r_ankle_RotationInterpolator";
children[390] = ROUTE1021;

ROUTE ROUTE1022 = createNode("ROUTE");
ROUTE1022.fromField = "fraction_changed";
ROUTE1022.fromNode = "JumpTimer";
ROUTE1022.toField = "set_fraction";
ROUTE1022.toNode = "Jump_r_knee_RotationInterpolator";
children[391] = ROUTE1022;

ROUTE ROUTE1023 = createNode("ROUTE");
ROUTE1023.fromField = "fraction_changed";
ROUTE1023.fromNode = "JumpTimer";
ROUTE1023.toField = "set_fraction";
ROUTE1023.toNode = "Jump_r_hip_RotationInterpolator";
children[392] = ROUTE1023;

ROUTE ROUTE1024 = createNode("ROUTE");
ROUTE1024.fromField = "fraction_changed";
ROUTE1024.fromNode = "JumpTimer";
ROUTE1024.toField = "set_fraction";
ROUTE1024.toNode = "Jump_l_ankle_RotationInterpolator";
children[393] = ROUTE1024;

ROUTE ROUTE1025 = createNode("ROUTE");
ROUTE1025.fromField = "fraction_changed";
ROUTE1025.fromNode = "JumpTimer";
ROUTE1025.toField = "set_fraction";
ROUTE1025.toNode = "Jump_l_knee_RotationInterpolator";
children[394] = ROUTE1025;

ROUTE ROUTE1026 = createNode("ROUTE");
ROUTE1026.fromField = "fraction_changed";
ROUTE1026.fromNode = "JumpTimer";
ROUTE1026.toField = "set_fraction";
ROUTE1026.toNode = "Jump_l_hip_RotationInterpolator";
children[395] = ROUTE1026;

ROUTE ROUTE1027 = createNode("ROUTE");
ROUTE1027.fromField = "fraction_changed";
ROUTE1027.fromNode = "JumpTimer";
ROUTE1027.toField = "set_fraction";
ROUTE1027.toNode = "Jump_lower_body_RotationInterpolator";
children[396] = ROUTE1027;

ROUTE ROUTE1028 = createNode("ROUTE");
ROUTE1028.fromField = "fraction_changed";
ROUTE1028.fromNode = "JumpTimer";
ROUTE1028.toField = "set_fraction";
ROUTE1028.toNode = "Jump_r_wrist_RotationInterpolator";
children[397] = ROUTE1028;

ROUTE ROUTE1029 = createNode("ROUTE");
ROUTE1029.fromField = "fraction_changed";
ROUTE1029.fromNode = "JumpTimer";
ROUTE1029.toField = "set_fraction";
ROUTE1029.toNode = "Jump_r_elbow_RotationInterpolator";
children[398] = ROUTE1029;

ROUTE ROUTE1030 = createNode("ROUTE");
ROUTE1030.fromField = "fraction_changed";
ROUTE1030.fromNode = "JumpTimer";
ROUTE1030.toField = "set_fraction";
ROUTE1030.toNode = "Jump_r_shoulder_RotationInterpolator";
children[399] = ROUTE1030;

ROUTE ROUTE1031 = createNode("ROUTE");
ROUTE1031.fromField = "fraction_changed";
ROUTE1031.fromNode = "JumpTimer";
ROUTE1031.toField = "set_fraction";
ROUTE1031.toNode = "Jump_l_wrist_RotationInterpolator";
children[400] = ROUTE1031;

ROUTE ROUTE1032 = createNode("ROUTE");
ROUTE1032.fromField = "fraction_changed";
ROUTE1032.fromNode = "JumpTimer";
ROUTE1032.toField = "set_fraction";
ROUTE1032.toNode = "Jump_l_elbow_RotationInterpolator";
children[401] = ROUTE1032;

ROUTE ROUTE1033 = createNode("ROUTE");
ROUTE1033.fromField = "fraction_changed";
ROUTE1033.fromNode = "JumpTimer";
ROUTE1033.toField = "set_fraction";
ROUTE1033.toNode = "Jump_l_shoulder_RotationInterpolator";
children[402] = ROUTE1033;

ROUTE ROUTE1034 = createNode("ROUTE");
ROUTE1034.fromField = "fraction_changed";
ROUTE1034.fromNode = "JumpTimer";
ROUTE1034.toField = "set_fraction";
ROUTE1034.toNode = "Jump_head_RotationInterpolator";
children[403] = ROUTE1034;

ROUTE ROUTE1035 = createNode("ROUTE");
ROUTE1035.fromField = "fraction_changed";
ROUTE1035.fromNode = "JumpTimer";
ROUTE1035.toField = "set_fraction";
ROUTE1035.toNode = "Jump_neck_RotationInterpolator";
children[404] = ROUTE1035;

ROUTE ROUTE1036 = createNode("ROUTE");
ROUTE1036.fromField = "fraction_changed";
ROUTE1036.fromNode = "JumpTimer";
ROUTE1036.toField = "set_fraction";
ROUTE1036.toNode = "Jump_upper_body_RotationInterpolator";
children[405] = ROUTE1036;

ROUTE ROUTE1037 = createNode("ROUTE");
ROUTE1037.fromField = "fraction_changed";
ROUTE1037.fromNode = "JumpTimer";
ROUTE1037.toField = "set_fraction";
ROUTE1037.toNode = "Jump_whole_body_RotationInterpolator";
children[406] = ROUTE1037;

ROUTE ROUTE1038 = createNode("ROUTE");
ROUTE1038.fromField = "fraction_changed";
ROUTE1038.fromNode = "JumpTimer";
ROUTE1038.toField = "set_fraction";
ROUTE1038.toNode = "Jump_whole_body_TranslationInterpolator";
children[407] = ROUTE1038;

ROUTE ROUTE1039 = createNode("ROUTE");
ROUTE1039.fromField = "fraction_changed";
ROUTE1039.fromNode = "JumpTimer";
ROUTE1039.toField = "set_fraction";
ROUTE1039.toNode = "Jump_l_sternoclavicular_RollInterpolator";
children[408] = ROUTE1039;

ROUTE ROUTE1040 = createNode("ROUTE");
ROUTE1040.fromField = "fraction_changed";
ROUTE1040.fromNode = "JumpTimer";
ROUTE1040.toField = "set_fraction";
ROUTE1040.toNode = "Jump_l_acromioclavicular_RollInterpolator";
children[409] = ROUTE1040;

ROUTE ROUTE1041 = createNode("ROUTE");
ROUTE1041.fromField = "fraction_changed";
ROUTE1041.fromNode = "JumpTimer";
ROUTE1041.toField = "set_fraction";
ROUTE1041.toNode = "Jump_r_sternoclavicular_RollInterpolator";
children[410] = ROUTE1041;

ROUTE ROUTE1042 = createNode("ROUTE");
ROUTE1042.fromField = "fraction_changed";
ROUTE1042.fromNode = "JumpTimer";
ROUTE1042.toField = "set_fraction";
ROUTE1042.toNode = "Jump_r_acromioclavicular_RollInterpolator";
children[411] = ROUTE1042;

ROUTE ROUTE1043 = createNode("ROUTE");
ROUTE1043.fromField = "fraction_changed";
ROUTE1043.fromNode = "JumpTimer";
ROUTE1043.toField = "set_fraction";
ROUTE1043.toNode = "Jump_r_metatarsal_PitchInterpolator";
children[412] = ROUTE1043;

ROUTE ROUTE1044 = createNode("ROUTE");
ROUTE1044.fromField = "fraction_changed";
ROUTE1044.fromNode = "JumpTimer";
ROUTE1044.toField = "set_fraction";
ROUTE1044.toNode = "Jump_sacroiliac_YawInterpolator";
children[413] = ROUTE1044;

ROUTE ROUTE1045 = createNode("ROUTE");
ROUTE1045.fromField = "fraction_changed";
ROUTE1045.fromNode = "JumpTimer";
ROUTE1045.toField = "set_fraction";
ROUTE1045.toNode = "Jump_vl5_YawInterpolator";
children[414] = ROUTE1045;

ROUTE ROUTE1046 = createNode("ROUTE");
ROUTE1046.fromField = "fraction_changed";
ROUTE1046.fromNode = "JumpTimer";
ROUTE1046.toField = "set_fraction";
ROUTE1046.toNode = "Jump_vc6_YawInterpolator";
children[415] = ROUTE1046;

ROUTE ROUTE1047 = createNode("ROUTE");
ROUTE1047.fromField = "fraction_changed";
ROUTE1047.fromNode = "JumpTimer";
ROUTE1047.toField = "set_fraction";
ROUTE1047.toNode = "Jump_l_thumb1_PitchInterpolator";
children[416] = ROUTE1047;

ROUTE ROUTE1048 = createNode("ROUTE");
ROUTE1048.fromField = "fraction_changed";
ROUTE1048.fromNode = "JumpTimer";
ROUTE1048.toField = "set_fraction";
ROUTE1048.toNode = "Jump_r_thumb1_PitchInterpolator";
children[417] = ROUTE1048;

ROUTE ROUTE1049 = createNode("ROUTE");
ROUTE1049.fromField = "value_changed";
ROUTE1049.fromNode = "Jump_r_ankle_RotationInterpolator";
ROUTE1049.toField = "set_rotation";
ROUTE1049.toNode = "boxman_r_ankle";
children[418] = ROUTE1049;

ROUTE ROUTE1050 = createNode("ROUTE");
ROUTE1050.fromField = "value_changed";
ROUTE1050.fromNode = "Jump_r_knee_RotationInterpolator";
ROUTE1050.toField = "set_rotation";
ROUTE1050.toNode = "boxman_r_knee";
children[419] = ROUTE1050;

ROUTE ROUTE1051 = createNode("ROUTE");
ROUTE1051.fromField = "value_changed";
ROUTE1051.fromNode = "Jump_r_hip_RotationInterpolator";
ROUTE1051.toField = "set_rotation";
ROUTE1051.toNode = "boxman_r_hip";
children[420] = ROUTE1051;

ROUTE ROUTE1052 = createNode("ROUTE");
ROUTE1052.fromField = "value_changed";
ROUTE1052.fromNode = "Jump_l_ankle_RotationInterpolator";
ROUTE1052.toField = "set_rotation";
ROUTE1052.toNode = "boxman_l_ankle";
children[421] = ROUTE1052;

ROUTE ROUTE1053 = createNode("ROUTE");
ROUTE1053.fromField = "value_changed";
ROUTE1053.fromNode = "Jump_l_knee_RotationInterpolator";
ROUTE1053.toField = "set_rotation";
ROUTE1053.toNode = "boxman_l_knee";
children[422] = ROUTE1053;

ROUTE ROUTE1054 = createNode("ROUTE");
ROUTE1054.fromField = "value_changed";
ROUTE1054.fromNode = "Jump_l_hip_RotationInterpolator";
ROUTE1054.toField = "set_rotation";
ROUTE1054.toNode = "boxman_l_hip";
children[423] = ROUTE1054;

ROUTE ROUTE1055 = createNode("ROUTE");
ROUTE1055.fromField = "value_changed";
ROUTE1055.fromNode = "Jump_r_wrist_RotationInterpolator";
ROUTE1055.toField = "set_rotation";
ROUTE1055.toNode = "boxman_r_wrist";
children[424] = ROUTE1055;

ROUTE ROUTE1056 = createNode("ROUTE");
ROUTE1056.fromField = "value_changed";
ROUTE1056.fromNode = "Jump_r_elbow_RotationInterpolator";
ROUTE1056.toField = "set_rotation";
ROUTE1056.toNode = "boxman_r_elbow";
children[425] = ROUTE1056;

ROUTE ROUTE1057 = createNode("ROUTE");
ROUTE1057.fromField = "value_changed";
ROUTE1057.fromNode = "Jump_r_shoulder_RotationInterpolator";
ROUTE1057.toField = "set_rotation";
ROUTE1057.toNode = "boxman_r_shoulder";
children[426] = ROUTE1057;

ROUTE ROUTE1058 = createNode("ROUTE");
ROUTE1058.fromField = "value_changed";
ROUTE1058.fromNode = "Jump_l_wrist_RotationInterpolator";
ROUTE1058.toField = "set_rotation";
ROUTE1058.toNode = "boxman_l_wrist";
children[427] = ROUTE1058;

ROUTE ROUTE1059 = createNode("ROUTE");
ROUTE1059.fromField = "value_changed";
ROUTE1059.fromNode = "Jump_l_elbow_RotationInterpolator";
ROUTE1059.toField = "set_rotation";
ROUTE1059.toNode = "boxman_l_elbow";
children[428] = ROUTE1059;

ROUTE ROUTE1060 = createNode("ROUTE");
ROUTE1060.fromField = "value_changed";
ROUTE1060.fromNode = "Jump_l_shoulder_RotationInterpolator";
ROUTE1060.toField = "set_rotation";
ROUTE1060.toNode = "boxman_l_shoulder";
children[429] = ROUTE1060;

ROUTE ROUTE1061 = createNode("ROUTE");
ROUTE1061.fromField = "value_changed";
ROUTE1061.fromNode = "Jump_head_RotationInterpolator";
ROUTE1061.toField = "set_rotation";
ROUTE1061.toNode = "boxman_skullbase";
children[430] = ROUTE1061;

ROUTE ROUTE1062 = createNode("ROUTE");
ROUTE1062.fromField = "value_changed";
ROUTE1062.fromNode = "Jump_whole_body_RotationInterpolator";
ROUTE1062.toField = "set_rotation";
ROUTE1062.toNode = "boxman_humanoid_root";
children[431] = ROUTE1062;

ROUTE ROUTE1063 = createNode("ROUTE");
ROUTE1063.fromField = "value_changed";
ROUTE1063.fromNode = "Jump_whole_body_TranslationInterpolator";
ROUTE1063.toField = "set_translation";
ROUTE1063.toNode = "boxman_humanoid_root";
children[432] = ROUTE1063;

ROUTE ROUTE1064 = createNode("ROUTE");
ROUTE1064.fromField = "value_changed";
ROUTE1064.fromNode = "Jump_vl5_YawInterpolator";
ROUTE1064.toField = "set_rotation";
ROUTE1064.toNode = "boxman_vl5";
children[433] = ROUTE1064;

ROUTE ROUTE1065 = createNode("ROUTE");
ROUTE1065.fromField = "fraction_changed";
ROUTE1065.fromNode = "KickTimer";
ROUTE1065.toField = "set_fraction";
ROUTE1065.toNode = "Kick_l_sternoclavicular_RollInterpolator";
children[434] = ROUTE1065;

ROUTE ROUTE1066 = createNode("ROUTE");
ROUTE1066.fromField = "fraction_changed";
ROUTE1066.fromNode = "KickTimer";
ROUTE1066.toField = "set_fraction";
ROUTE1066.toNode = "Kick_l_acromioclavicular_RollInterpolator";
children[435] = ROUTE1066;

ROUTE ROUTE1067 = createNode("ROUTE");
ROUTE1067.fromField = "fraction_changed";
ROUTE1067.fromNode = "KickTimer";
ROUTE1067.toField = "set_fraction";
ROUTE1067.toNode = "Kick_l_shoulder_RollInterpolator";
children[436] = ROUTE1067;

ROUTE ROUTE1068 = createNode("ROUTE");
ROUTE1068.fromField = "fraction_changed";
ROUTE1068.fromNode = "KickTimer";
ROUTE1068.toField = "set_fraction";
ROUTE1068.toNode = "Kick_l_ForeArm_PitchInterpolator";
children[437] = ROUTE1068;

ROUTE ROUTE1069 = createNode("ROUTE");
ROUTE1069.fromField = "fraction_changed";
ROUTE1069.fromNode = "KickTimer";
ROUTE1069.toField = "set_fraction";
ROUTE1069.toNode = "Kick_l_wrist_RollInterpolator";
children[438] = ROUTE1069;

ROUTE ROUTE1070 = createNode("ROUTE");
ROUTE1070.fromField = "fraction_changed";
ROUTE1070.fromNode = "KickTimer";
ROUTE1070.toField = "set_fraction";
ROUTE1070.toNode = "Kick_l_thumb1_PitchInterpolator";
children[439] = ROUTE1070;

ROUTE ROUTE1071 = createNode("ROUTE");
ROUTE1071.fromField = "fraction_changed";
ROUTE1071.fromNode = "KickTimer";
ROUTE1071.toField = "set_fraction";
ROUTE1071.toNode = "Kick_r_sternoclavicular_RollInterpolator";
children[440] = ROUTE1071;

ROUTE ROUTE1072 = createNode("ROUTE");
ROUTE1072.fromField = "fraction_changed";
ROUTE1072.fromNode = "KickTimer";
ROUTE1072.toField = "set_fraction";
ROUTE1072.toNode = "Kick_r_acromioclavicular_RollInterpolator";
children[441] = ROUTE1072;

ROUTE ROUTE1073 = createNode("ROUTE");
ROUTE1073.fromField = "fraction_changed";
ROUTE1073.fromNode = "KickTimer";
ROUTE1073.toField = "set_fraction";
ROUTE1073.toNode = "Kick_r_shoulder_RollInterpolator";
children[442] = ROUTE1073;

ROUTE ROUTE1074 = createNode("ROUTE");
ROUTE1074.fromField = "fraction_changed";
ROUTE1074.fromNode = "KickTimer";
ROUTE1074.toField = "set_fraction";
ROUTE1074.toNode = "Kick_r_ForeArm_PitchInterpolator";
children[443] = ROUTE1074;

ROUTE ROUTE1075 = createNode("ROUTE");
ROUTE1075.fromField = "fraction_changed";
ROUTE1075.fromNode = "KickTimer";
ROUTE1075.toField = "set_fraction";
ROUTE1075.toNode = "Kick_r_wrist_RollInterpolator";
children[444] = ROUTE1075;

ROUTE ROUTE1076 = createNode("ROUTE");
ROUTE1076.fromField = "fraction_changed";
ROUTE1076.fromNode = "KickTimer";
ROUTE1076.toField = "set_fraction";
ROUTE1076.toNode = "Kick_r_thumb1_PitchInterpolator";
children[445] = ROUTE1076;

ROUTE ROUTE1077 = createNode("ROUTE");
ROUTE1077.fromField = "fraction_changed";
ROUTE1077.fromNode = "KickTimer";
ROUTE1077.toField = "set_fraction";
ROUTE1077.toNode = "Kick_r_hip_PitchInterpolator";
children[446] = ROUTE1077;

ROUTE ROUTE1078 = createNode("ROUTE");
ROUTE1078.fromField = "fraction_changed";
ROUTE1078.fromNode = "KickTimer";
ROUTE1078.toField = "set_fraction";
ROUTE1078.toNode = "Kick_r_knee_PitchInterpolator";
children[447] = ROUTE1078;

ROUTE ROUTE1079 = createNode("ROUTE");
ROUTE1079.fromField = "fraction_changed";
ROUTE1079.fromNode = "KickTimer";
ROUTE1079.toField = "set_fraction";
ROUTE1079.toNode = "Kick_l_hip_PitchInterpolator";
children[448] = ROUTE1079;

ROUTE ROUTE1080 = createNode("ROUTE");
ROUTE1080.fromField = "fraction_changed";
ROUTE1080.fromNode = "KickTimer";
ROUTE1080.toField = "set_fraction";
ROUTE1080.toNode = "Kick_l_knee_PitchInterpolator";
children[449] = ROUTE1080;

ROUTE ROUTE1081 = createNode("ROUTE");
ROUTE1081.fromField = "fraction_changed";
ROUTE1081.fromNode = "KickTimer";
ROUTE1081.toField = "set_fraction";
ROUTE1081.toNode = "Kick_r_ankle_PitchInterpolator";
children[450] = ROUTE1081;

ROUTE ROUTE1082 = createNode("ROUTE");
ROUTE1082.fromField = "fraction_changed";
ROUTE1082.fromNode = "KickTimer";
ROUTE1082.toField = "set_fraction";
ROUTE1082.toNode = "Kick_r_metatarsal_PitchInterpolator";
children[451] = ROUTE1082;

ROUTE ROUTE1083 = createNode("ROUTE");
ROUTE1083.fromField = "fraction_changed";
ROUTE1083.fromNode = "KickTimer";
ROUTE1083.toField = "set_fraction";
ROUTE1083.toNode = "Kick_sacroiliac_YawInterpolator";
children[452] = ROUTE1083;

ROUTE ROUTE1084 = createNode("ROUTE");
ROUTE1084.fromField = "fraction_changed";
ROUTE1084.fromNode = "KickTimer";
ROUTE1084.toField = "set_fraction";
ROUTE1084.toNode = "Kick_vl5_YawInterpolator";
children[453] = ROUTE1084;

ROUTE ROUTE1085 = createNode("ROUTE");
ROUTE1085.fromField = "fraction_changed";
ROUTE1085.fromNode = "KickTimer";
ROUTE1085.toField = "set_fraction";
ROUTE1085.toNode = "Kick_vc6_YawInterpolator";
children[454] = ROUTE1085;

ROUTE ROUTE1086 = createNode("ROUTE");
ROUTE1086.fromField = "fraction_changed";
ROUTE1086.fromNode = "KickTimer";
ROUTE1086.toField = "set_fraction";
ROUTE1086.toNode = "Kick_lower_body_RotationInterpolator";
children[455] = ROUTE1086;

ROUTE ROUTE1087 = createNode("ROUTE");
ROUTE1087.fromField = "fraction_changed";
ROUTE1087.fromNode = "KickTimer";
ROUTE1087.toField = "set_fraction";
ROUTE1087.toNode = "Kick_upper_body_RotationInterpolator";
children[456] = ROUTE1087;

ROUTE ROUTE1088 = createNode("ROUTE");
ROUTE1088.fromField = "fraction_changed";
ROUTE1088.fromNode = "KickTimer";
ROUTE1088.toField = "set_fraction";
ROUTE1088.toNode = "Kick_whole_body_RotationInterpolator";
children[457] = ROUTE1088;

ROUTE ROUTE1089 = createNode("ROUTE");
ROUTE1089.fromField = "fraction_changed";
ROUTE1089.fromNode = "KickTimer";
ROUTE1089.toField = "set_fraction";
ROUTE1089.toNode = "Kick_whole_body_TranslationInterpolator";
children[458] = ROUTE1089;

ROUTE ROUTE1090 = createNode("ROUTE");
ROUTE1090.fromField = "fraction_changed";
ROUTE1090.fromNode = "KickTimer";
ROUTE1090.toField = "set_fraction";
ROUTE1090.toNode = "Kick_neck_RotationInterpolator";
children[459] = ROUTE1090;

ROUTE ROUTE1091 = createNode("ROUTE");
ROUTE1091.fromField = "value_changed";
ROUTE1091.fromNode = "Kick_l_shoulder_RollInterpolator";
ROUTE1091.toField = "set_rotation";
ROUTE1091.toNode = "boxman_l_shoulder";
children[460] = ROUTE1091;

ROUTE ROUTE1092 = createNode("ROUTE");
ROUTE1092.fromField = "value_changed";
ROUTE1092.fromNode = "Kick_l_ForeArm_PitchInterpolator";
ROUTE1092.toField = "set_rotation";
ROUTE1092.toNode = "boxman_l_elbow";
children[461] = ROUTE1092;

ROUTE ROUTE1093 = createNode("ROUTE");
ROUTE1093.fromField = "value_changed";
ROUTE1093.fromNode = "Kick_l_wrist_RollInterpolator";
ROUTE1093.toField = "set_rotation";
ROUTE1093.toNode = "boxman_l_wrist";
children[462] = ROUTE1093;

ROUTE ROUTE1094 = createNode("ROUTE");
ROUTE1094.fromField = "value_changed";
ROUTE1094.fromNode = "Kick_r_shoulder_RollInterpolator";
ROUTE1094.toField = "set_rotation";
ROUTE1094.toNode = "boxman_r_shoulder";
children[463] = ROUTE1094;

ROUTE ROUTE1095 = createNode("ROUTE");
ROUTE1095.fromField = "value_changed";
ROUTE1095.fromNode = "Kick_r_ForeArm_PitchInterpolator";
ROUTE1095.toField = "set_rotation";
ROUTE1095.toNode = "boxman_r_elbow";
children[464] = ROUTE1095;

ROUTE ROUTE1096 = createNode("ROUTE");
ROUTE1096.fromField = "value_changed";
ROUTE1096.fromNode = "Kick_r_wrist_RollInterpolator";
ROUTE1096.toField = "set_rotation";
ROUTE1096.toNode = "boxman_r_wrist";
children[465] = ROUTE1096;

ROUTE ROUTE1097 = createNode("ROUTE");
ROUTE1097.fromField = "value_changed";
ROUTE1097.fromNode = "Kick_r_hip_PitchInterpolator";
ROUTE1097.toField = "set_rotation";
ROUTE1097.toNode = "boxman_r_hip";
children[466] = ROUTE1097;

ROUTE ROUTE1098 = createNode("ROUTE");
ROUTE1098.fromField = "value_changed";
ROUTE1098.fromNode = "Kick_r_knee_PitchInterpolator";
ROUTE1098.toField = "set_rotation";
ROUTE1098.toNode = "boxman_r_knee";
children[467] = ROUTE1098;

ROUTE ROUTE1099 = createNode("ROUTE");
ROUTE1099.fromField = "value_changed";
ROUTE1099.fromNode = "Kick_r_ankle_PitchInterpolator";
ROUTE1099.toField = "set_rotation";
ROUTE1099.toNode = "boxman_r_ankle";
children[468] = ROUTE1099;

ROUTE ROUTE1100 = createNode("ROUTE");
ROUTE1100.fromField = "value_changed";
ROUTE1100.fromNode = "Kick_l_hip_PitchInterpolator";
ROUTE1100.toField = "set_rotation";
ROUTE1100.toNode = "boxman_l_hip";
children[469] = ROUTE1100;

ROUTE ROUTE1101 = createNode("ROUTE");
ROUTE1101.fromField = "value_changed";
ROUTE1101.fromNode = "Kick_l_knee_PitchInterpolator";
ROUTE1101.toField = "set_rotation";
ROUTE1101.toNode = "boxman_l_knee";
children[470] = ROUTE1101;

ROUTE ROUTE1102 = createNode("ROUTE");
ROUTE1102.fromField = "value_changed";
ROUTE1102.fromNode = "Kick_r_ankle_PitchInterpolator";
ROUTE1102.toField = "set_rotation";
ROUTE1102.toNode = "boxman_l_ankle";
children[471] = ROUTE1102;

ROUTE ROUTE1103 = createNode("ROUTE");
ROUTE1103.fromField = "value_changed";
ROUTE1103.fromNode = "Kick_vl5_YawInterpolator";
ROUTE1103.toField = "set_rotation";
ROUTE1103.toNode = "boxman_vl5";
children[472] = ROUTE1103;

ROUTE ROUTE1104 = createNode("ROUTE");
ROUTE1104.fromField = "value_changed";
ROUTE1104.fromNode = "Kick_whole_body_RotationInterpolator";
ROUTE1104.toField = "set_rotation";
ROUTE1104.toNode = "boxman_humanoid_root";
children[473] = ROUTE1104;

ROUTE ROUTE1105 = createNode("ROUTE");
ROUTE1105.fromField = "value_changed";
ROUTE1105.fromNode = "Kick_whole_body_TranslationInterpolator";
ROUTE1105.toField = "set_translation";
ROUTE1105.toNode = "boxman_humanoid_root";
children[474] = ROUTE1105;

ROUTE ROUTE1106 = createNode("ROUTE");
ROUTE1106.fromField = "position_changed";
ROUTE1106.fromNode = "HudProx";
ROUTE1106.toField = "set_translation";
ROUTE1106.toNode = "HudXform";
children[475] = ROUTE1106;

ROUTE ROUTE1107 = createNode("ROUTE");
ROUTE1107.fromField = "orientation_changed";
ROUTE1107.fromNode = "HudProx";
ROUTE1107.toField = "set_rotation";
ROUTE1107.toNode = "HudXform";
children[476] = ROUTE1107;

ROUTE ROUTE1108 = createNode("ROUTE");
ROUTE1108.fromField = "touchTime";
ROUTE1108.fromNode = "Stand_Touch";
ROUTE1108.toField = "set_stopTime";
ROUTE1108.toNode = "PitchTimer";
children[477] = ROUTE1108;

ROUTE ROUTE1109 = createNode("ROUTE");
ROUTE1109.fromField = "touchTime";
ROUTE1109.fromNode = "Stand_Touch";
ROUTE1109.toField = "set_stopTime";
ROUTE1109.toNode = "YawTimer";
children[478] = ROUTE1109;

ROUTE ROUTE1110 = createNode("ROUTE");
ROUTE1110.fromField = "touchTime";
ROUTE1110.fromNode = "Stand_Touch";
ROUTE1110.toField = "set_stopTime";
ROUTE1110.toNode = "RollTimer";
children[479] = ROUTE1110;

ROUTE ROUTE1111 = createNode("ROUTE");
ROUTE1111.fromField = "touchTime";
ROUTE1111.fromNode = "Stand_Touch";
ROUTE1111.toField = "set_stopTime";
ROUTE1111.toNode = "WalkTimer";
children[480] = ROUTE1111;

ROUTE ROUTE1112 = createNode("ROUTE");
ROUTE1112.fromField = "touchTime";
ROUTE1112.fromNode = "Stand_Touch";
ROUTE1112.toField = "set_stopTime";
ROUTE1112.toNode = "RunTimer";
children[481] = ROUTE1112;

ROUTE ROUTE1113 = createNode("ROUTE");
ROUTE1113.fromField = "touchTime";
ROUTE1113.fromNode = "Stand_Touch";
ROUTE1113.toField = "set_stopTime";
ROUTE1113.toNode = "JumpTimer";
children[482] = ROUTE1113;

ROUTE ROUTE1114 = createNode("ROUTE");
ROUTE1114.fromField = "touchTime";
ROUTE1114.fromNode = "Stand_Touch";
ROUTE1114.toField = "set_stopTime";
ROUTE1114.toNode = "KickTimer";
children[483] = ROUTE1114;

ROUTE ROUTE1115 = createNode("ROUTE");
ROUTE1115.fromField = "touchTime";
ROUTE1115.fromNode = "Stand_Touch";
ROUTE1115.toField = "set_stopTime";
ROUTE1115.toNode = "StopTimer";
children[484] = ROUTE1115;

ROUTE ROUTE1116 = createNode("ROUTE");
ROUTE1116.fromField = "touchTime";
ROUTE1116.fromNode = "Stand_Touch";
ROUTE1116.toField = "set_startTime";
ROUTE1116.toNode = "StandTimer";
children[485] = ROUTE1116;

ROUTE ROUTE1117 = createNode("ROUTE");
ROUTE1117.fromField = "touchTime";
ROUTE1117.fromNode = "Pitch_Touch";
ROUTE1117.toField = "set_stopTime";
ROUTE1117.toNode = "StandTimer";
children[486] = ROUTE1117;

ROUTE ROUTE1118 = createNode("ROUTE");
ROUTE1118.fromField = "touchTime";
ROUTE1118.fromNode = "Pitch_Touch";
ROUTE1118.toField = "set_stopTime";
ROUTE1118.toNode = "YawTimer";
children[487] = ROUTE1118;

ROUTE ROUTE1119 = createNode("ROUTE");
ROUTE1119.fromField = "touchTime";
ROUTE1119.fromNode = "Pitch_Touch";
ROUTE1119.toField = "set_stopTime";
ROUTE1119.toNode = "RollTimer";
children[488] = ROUTE1119;

ROUTE ROUTE1120 = createNode("ROUTE");
ROUTE1120.fromField = "touchTime";
ROUTE1120.fromNode = "Pitch_Touch";
ROUTE1120.toField = "set_stopTime";
ROUTE1120.toNode = "WalkTimer";
children[489] = ROUTE1120;

ROUTE ROUTE1121 = createNode("ROUTE");
ROUTE1121.fromField = "touchTime";
ROUTE1121.fromNode = "Pitch_Touch";
ROUTE1121.toField = "set_stopTime";
ROUTE1121.toNode = "RunTimer";
children[490] = ROUTE1121;

ROUTE ROUTE1122 = createNode("ROUTE");
ROUTE1122.fromField = "touchTime";
ROUTE1122.fromNode = "Pitch_Touch";
ROUTE1122.toField = "set_stopTime";
ROUTE1122.toNode = "JumpTimer";
children[491] = ROUTE1122;

ROUTE ROUTE1123 = createNode("ROUTE");
ROUTE1123.fromField = "touchTime";
ROUTE1123.fromNode = "Pitch_Touch";
ROUTE1123.toField = "set_stopTime";
ROUTE1123.toNode = "KickTimer";
children[492] = ROUTE1123;

ROUTE ROUTE1124 = createNode("ROUTE");
ROUTE1124.fromField = "touchTime";
ROUTE1124.fromNode = "Pitch_Touch";
ROUTE1124.toField = "set_stopTime";
ROUTE1124.toNode = "StopTimer";
children[493] = ROUTE1124;

ROUTE ROUTE1125 = createNode("ROUTE");
ROUTE1125.fromField = "touchTime";
ROUTE1125.fromNode = "Pitch_Touch";
ROUTE1125.toField = "set_startTime";
ROUTE1125.toNode = "PitchTimer";
children[494] = ROUTE1125;

ROUTE ROUTE1126 = createNode("ROUTE");
ROUTE1126.fromField = "touchTime";
ROUTE1126.fromNode = "Yaw_Touch";
ROUTE1126.toField = "set_stopTime";
ROUTE1126.toNode = "StandTimer";
children[495] = ROUTE1126;

ROUTE ROUTE1127 = createNode("ROUTE");
ROUTE1127.fromField = "touchTime";
ROUTE1127.fromNode = "Yaw_Touch";
ROUTE1127.toField = "set_stopTime";
ROUTE1127.toNode = "PitchTimer";
children[496] = ROUTE1127;

ROUTE ROUTE1128 = createNode("ROUTE");
ROUTE1128.fromField = "touchTime";
ROUTE1128.fromNode = "Yaw_Touch";
ROUTE1128.toField = "set_stopTime";
ROUTE1128.toNode = "RollTimer";
children[497] = ROUTE1128;

ROUTE ROUTE1129 = createNode("ROUTE");
ROUTE1129.fromField = "touchTime";
ROUTE1129.fromNode = "Yaw_Touch";
ROUTE1129.toField = "set_stopTime";
ROUTE1129.toNode = "WalkTimer";
children[498] = ROUTE1129;

ROUTE ROUTE1130 = createNode("ROUTE");
ROUTE1130.fromField = "touchTime";
ROUTE1130.fromNode = "Yaw_Touch";
ROUTE1130.toField = "set_stopTime";
ROUTE1130.toNode = "RunTimer";
children[499] = ROUTE1130;

ROUTE ROUTE1131 = createNode("ROUTE");
ROUTE1131.fromField = "touchTime";
ROUTE1131.fromNode = "Yaw_Touch";
ROUTE1131.toField = "set_stopTime";
ROUTE1131.toNode = "JumpTimer";
children[500] = ROUTE1131;

ROUTE ROUTE1132 = createNode("ROUTE");
ROUTE1132.fromField = "touchTime";
ROUTE1132.fromNode = "Yaw_Touch";
ROUTE1132.toField = "set_stopTime";
ROUTE1132.toNode = "KickTimer";
children[501] = ROUTE1132;

ROUTE ROUTE1133 = createNode("ROUTE");
ROUTE1133.fromField = "touchTime";
ROUTE1133.fromNode = "Yaw_Touch";
ROUTE1133.toField = "set_stopTime";
ROUTE1133.toNode = "StopTimer";
children[502] = ROUTE1133;

ROUTE ROUTE1134 = createNode("ROUTE");
ROUTE1134.fromField = "touchTime";
ROUTE1134.fromNode = "Yaw_Touch";
ROUTE1134.toField = "set_startTime";
ROUTE1134.toNode = "YawTimer";
children[503] = ROUTE1134;

ROUTE ROUTE1135 = createNode("ROUTE");
ROUTE1135.fromField = "touchTime";
ROUTE1135.fromNode = "Walk_Touch";
ROUTE1135.toField = "set_stopTime";
ROUTE1135.toNode = "StandTimer";
children[504] = ROUTE1135;

ROUTE ROUTE1136 = createNode("ROUTE");
ROUTE1136.fromField = "touchTime";
ROUTE1136.fromNode = "Walk_Touch";
ROUTE1136.toField = "set_stopTime";
ROUTE1136.toNode = "PitchTimer";
children[505] = ROUTE1136;

ROUTE ROUTE1137 = createNode("ROUTE");
ROUTE1137.fromField = "touchTime";
ROUTE1137.fromNode = "Walk_Touch";
ROUTE1137.toField = "set_stopTime";
ROUTE1137.toNode = "YawTimer";
children[506] = ROUTE1137;

ROUTE ROUTE1138 = createNode("ROUTE");
ROUTE1138.fromField = "touchTime";
ROUTE1138.fromNode = "Walk_Touch";
ROUTE1138.toField = "set_stopTime";
ROUTE1138.toNode = "RollTimer";
children[507] = ROUTE1138;

ROUTE ROUTE1139 = createNode("ROUTE");
ROUTE1139.fromField = "touchTime";
ROUTE1139.fromNode = "Walk_Touch";
ROUTE1139.toField = "set_stopTime";
ROUTE1139.toNode = "RunTimer";
children[508] = ROUTE1139;

ROUTE ROUTE1140 = createNode("ROUTE");
ROUTE1140.fromField = "touchTime";
ROUTE1140.fromNode = "Walk_Touch";
ROUTE1140.toField = "set_stopTime";
ROUTE1140.toNode = "JumpTimer";
children[509] = ROUTE1140;

ROUTE ROUTE1141 = createNode("ROUTE");
ROUTE1141.fromField = "touchTime";
ROUTE1141.fromNode = "Walk_Touch";
ROUTE1141.toField = "set_stopTime";
ROUTE1141.toNode = "KickTimer";
children[510] = ROUTE1141;

ROUTE ROUTE1142 = createNode("ROUTE");
ROUTE1142.fromField = "touchTime";
ROUTE1142.fromNode = "Walk_Touch";
ROUTE1142.toField = "set_stopTime";
ROUTE1142.toNode = "StopTimer";
children[511] = ROUTE1142;

ROUTE ROUTE1143 = createNode("ROUTE");
ROUTE1143.fromField = "touchTime";
ROUTE1143.fromNode = "Walk_Touch";
ROUTE1143.toField = "set_startTime";
ROUTE1143.toNode = "WalkTimer";
children[512] = ROUTE1143;

ROUTE ROUTE1144 = createNode("ROUTE");
ROUTE1144.fromField = "touchTime";
ROUTE1144.fromNode = "Roll_Touch";
ROUTE1144.toField = "set_stopTime";
ROUTE1144.toNode = "StandTimer";
children[513] = ROUTE1144;

ROUTE ROUTE1145 = createNode("ROUTE");
ROUTE1145.fromField = "touchTime";
ROUTE1145.fromNode = "Roll_Touch";
ROUTE1145.toField = "set_stopTime";
ROUTE1145.toNode = "PitchTimer";
children[514] = ROUTE1145;

ROUTE ROUTE1146 = createNode("ROUTE");
ROUTE1146.fromField = "touchTime";
ROUTE1146.fromNode = "Roll_Touch";
ROUTE1146.toField = "set_stopTime";
ROUTE1146.toNode = "YawTimer";
children[515] = ROUTE1146;

ROUTE ROUTE1147 = createNode("ROUTE");
ROUTE1147.fromField = "touchTime";
ROUTE1147.fromNode = "Roll_Touch";
ROUTE1147.toField = "set_stopTime";
ROUTE1147.toNode = "WalkTimer";
children[516] = ROUTE1147;

ROUTE ROUTE1148 = createNode("ROUTE");
ROUTE1148.fromField = "touchTime";
ROUTE1148.fromNode = "Roll_Touch";
ROUTE1148.toField = "set_stopTime";
ROUTE1148.toNode = "RunTimer";
children[517] = ROUTE1148;

ROUTE ROUTE1149 = createNode("ROUTE");
ROUTE1149.fromField = "touchTime";
ROUTE1149.fromNode = "Roll_Touch";
ROUTE1149.toField = "set_stopTime";
ROUTE1149.toNode = "JumpTimer";
children[518] = ROUTE1149;

ROUTE ROUTE1150 = createNode("ROUTE");
ROUTE1150.fromField = "touchTime";
ROUTE1150.fromNode = "Roll_Touch";
ROUTE1150.toField = "set_stopTime";
ROUTE1150.toNode = "KickTimer";
children[519] = ROUTE1150;

ROUTE ROUTE1151 = createNode("ROUTE");
ROUTE1151.fromField = "touchTime";
ROUTE1151.fromNode = "Roll_Touch";
ROUTE1151.toField = "set_stopTime";
ROUTE1151.toNode = "StopTimer";
children[520] = ROUTE1151;

ROUTE ROUTE1152 = createNode("ROUTE");
ROUTE1152.fromField = "touchTime";
ROUTE1152.fromNode = "Roll_Touch";
ROUTE1152.toField = "set_startTime";
ROUTE1152.toNode = "RollTimer";
children[521] = ROUTE1152;

ROUTE ROUTE1153 = createNode("ROUTE");
ROUTE1153.fromField = "touchTime";
ROUTE1153.fromNode = "Run_Touch";
ROUTE1153.toField = "set_stopTime";
ROUTE1153.toNode = "StandTimer";
children[522] = ROUTE1153;

ROUTE ROUTE1154 = createNode("ROUTE");
ROUTE1154.fromField = "touchTime";
ROUTE1154.fromNode = "Run_Touch";
ROUTE1154.toField = "set_stopTime";
ROUTE1154.toNode = "PitchTimer";
children[523] = ROUTE1154;

ROUTE ROUTE1155 = createNode("ROUTE");
ROUTE1155.fromField = "touchTime";
ROUTE1155.fromNode = "Run_Touch";
ROUTE1155.toField = "set_stopTime";
ROUTE1155.toNode = "YawTimer";
children[524] = ROUTE1155;

ROUTE ROUTE1156 = createNode("ROUTE");
ROUTE1156.fromField = "touchTime";
ROUTE1156.fromNode = "Run_Touch";
ROUTE1156.toField = "set_stopTime";
ROUTE1156.toNode = "RollTimer";
children[525] = ROUTE1156;

ROUTE ROUTE1157 = createNode("ROUTE");
ROUTE1157.fromField = "touchTime";
ROUTE1157.fromNode = "Run_Touch";
ROUTE1157.toField = "set_stopTime";
ROUTE1157.toNode = "WalkTimer";
children[526] = ROUTE1157;

ROUTE ROUTE1158 = createNode("ROUTE");
ROUTE1158.fromField = "touchTime";
ROUTE1158.fromNode = "Run_Touch";
ROUTE1158.toField = "set_stopTime";
ROUTE1158.toNode = "JumpTimer";
children[527] = ROUTE1158;

ROUTE ROUTE1159 = createNode("ROUTE");
ROUTE1159.fromField = "touchTime";
ROUTE1159.fromNode = "Run_Touch";
ROUTE1159.toField = "set_stopTime";
ROUTE1159.toNode = "KickTimer";
children[528] = ROUTE1159;

ROUTE ROUTE1160 = createNode("ROUTE");
ROUTE1160.fromField = "touchTime";
ROUTE1160.fromNode = "Run_Touch";
ROUTE1160.toField = "set_stopTime";
ROUTE1160.toNode = "StopTimer";
children[529] = ROUTE1160;

ROUTE ROUTE1161 = createNode("ROUTE");
ROUTE1161.fromField = "touchTime";
ROUTE1161.fromNode = "Run_Touch";
ROUTE1161.toField = "set_startTime";
ROUTE1161.toNode = "RunTimer";
children[530] = ROUTE1161;

ROUTE ROUTE1162 = createNode("ROUTE");
ROUTE1162.fromField = "touchTime";
ROUTE1162.fromNode = "Jump_Touch";
ROUTE1162.toField = "set_stopTime";
ROUTE1162.toNode = "StandTimer";
children[531] = ROUTE1162;

ROUTE ROUTE1163 = createNode("ROUTE");
ROUTE1163.fromField = "touchTime";
ROUTE1163.fromNode = "Jump_Touch";
ROUTE1163.toField = "set_stopTime";
ROUTE1163.toNode = "PitchTimer";
children[532] = ROUTE1163;

ROUTE ROUTE1164 = createNode("ROUTE");
ROUTE1164.fromField = "touchTime";
ROUTE1164.fromNode = "Jump_Touch";
ROUTE1164.toField = "set_stopTime";
ROUTE1164.toNode = "YawTimer";
children[533] = ROUTE1164;

ROUTE ROUTE1165 = createNode("ROUTE");
ROUTE1165.fromField = "touchTime";
ROUTE1165.fromNode = "Jump_Touch";
ROUTE1165.toField = "set_stopTime";
ROUTE1165.toNode = "RollTimer";
children[534] = ROUTE1165;

ROUTE ROUTE1166 = createNode("ROUTE");
ROUTE1166.fromField = "touchTime";
ROUTE1166.fromNode = "Jump_Touch";
ROUTE1166.toField = "set_stopTime";
ROUTE1166.toNode = "WalkTimer";
children[535] = ROUTE1166;

ROUTE ROUTE1167 = createNode("ROUTE");
ROUTE1167.fromField = "touchTime";
ROUTE1167.fromNode = "Jump_Touch";
ROUTE1167.toField = "set_stopTime";
ROUTE1167.toNode = "RunTimer";
children[536] = ROUTE1167;

ROUTE ROUTE1168 = createNode("ROUTE");
ROUTE1168.fromField = "touchTime";
ROUTE1168.fromNode = "Jump_Touch";
ROUTE1168.toField = "set_stopTime";
ROUTE1168.toNode = "KickTimer";
children[537] = ROUTE1168;

ROUTE ROUTE1169 = createNode("ROUTE");
ROUTE1169.fromField = "touchTime";
ROUTE1169.fromNode = "Jump_Touch";
ROUTE1169.toField = "set_stopTime";
ROUTE1169.toNode = "StopTimer";
children[538] = ROUTE1169;

ROUTE ROUTE1170 = createNode("ROUTE");
ROUTE1170.fromField = "touchTime";
ROUTE1170.fromNode = "Jump_Touch";
ROUTE1170.toField = "set_startTime";
ROUTE1170.toNode = "JumpTimer";
children[539] = ROUTE1170;

ROUTE ROUTE1171 = createNode("ROUTE");
ROUTE1171.fromField = "touchTime";
ROUTE1171.fromNode = "Kick_Touch";
ROUTE1171.toField = "set_stopTime";
ROUTE1171.toNode = "StandTimer";
children[540] = ROUTE1171;

ROUTE ROUTE1172 = createNode("ROUTE");
ROUTE1172.fromField = "touchTime";
ROUTE1172.fromNode = "Kick_Touch";
ROUTE1172.toField = "set_stopTime";
ROUTE1172.toNode = "PitchTimer";
children[541] = ROUTE1172;

ROUTE ROUTE1173 = createNode("ROUTE");
ROUTE1173.fromField = "touchTime";
ROUTE1173.fromNode = "Kick_Touch";
ROUTE1173.toField = "set_stopTime";
ROUTE1173.toNode = "YawTimer";
children[542] = ROUTE1173;

ROUTE ROUTE1174 = createNode("ROUTE");
ROUTE1174.fromField = "touchTime";
ROUTE1174.fromNode = "Kick_Touch";
ROUTE1174.toField = "set_stopTime";
ROUTE1174.toNode = "RollTimer";
children[543] = ROUTE1174;

ROUTE ROUTE1175 = createNode("ROUTE");
ROUTE1175.fromField = "touchTime";
ROUTE1175.fromNode = "Kick_Touch";
ROUTE1175.toField = "set_stopTime";
ROUTE1175.toNode = "WalkTimer";
children[544] = ROUTE1175;

ROUTE ROUTE1176 = createNode("ROUTE");
ROUTE1176.fromField = "touchTime";
ROUTE1176.fromNode = "Kick_Touch";
ROUTE1176.toField = "set_stopTime";
ROUTE1176.toNode = "RunTimer";
children[545] = ROUTE1176;

ROUTE ROUTE1177 = createNode("ROUTE");
ROUTE1177.fromField = "touchTime";
ROUTE1177.fromNode = "Kick_Touch";
ROUTE1177.toField = "set_stopTime";
ROUTE1177.toNode = "JumpTimer";
children[546] = ROUTE1177;

ROUTE ROUTE1178 = createNode("ROUTE");
ROUTE1178.fromField = "touchTime";
ROUTE1178.fromNode = "Kick_Touch";
ROUTE1178.toField = "set_stopTime";
ROUTE1178.toNode = "StopTimer";
children[547] = ROUTE1178;

ROUTE ROUTE1179 = createNode("ROUTE");
ROUTE1179.fromField = "touchTime";
ROUTE1179.fromNode = "Kick_Touch";
ROUTE1179.toField = "set_startTime";
ROUTE1179.toNode = "KickTimer";
children[548] = ROUTE1179;

ROUTE ROUTE1180 = createNode("ROUTE");
ROUTE1180.fromField = "touchTime";
ROUTE1180.fromNode = "Stop_Touch";
ROUTE1180.toField = "set_stopTime";
ROUTE1180.toNode = "StandTimer";
children[549] = ROUTE1180;

ROUTE ROUTE1181 = createNode("ROUTE");
ROUTE1181.fromField = "touchTime";
ROUTE1181.fromNode = "Stop_Touch";
ROUTE1181.toField = "set_stopTime";
ROUTE1181.toNode = "PitchTimer";
children[550] = ROUTE1181;

ROUTE ROUTE1182 = createNode("ROUTE");
ROUTE1182.fromField = "touchTime";
ROUTE1182.fromNode = "Stop_Touch";
ROUTE1182.toField = "set_stopTime";
ROUTE1182.toNode = "YawTimer";
children[551] = ROUTE1182;

ROUTE ROUTE1183 = createNode("ROUTE");
ROUTE1183.fromField = "touchTime";
ROUTE1183.fromNode = "Stop_Touch";
ROUTE1183.toField = "set_stopTime";
ROUTE1183.toNode = "RollTimer";
children[552] = ROUTE1183;

ROUTE ROUTE1184 = createNode("ROUTE");
ROUTE1184.fromField = "touchTime";
ROUTE1184.fromNode = "Stop_Touch";
ROUTE1184.toField = "set_stopTime";
ROUTE1184.toNode = "WalkTimer";
children[553] = ROUTE1184;

ROUTE ROUTE1185 = createNode("ROUTE");
ROUTE1185.fromField = "touchTime";
ROUTE1185.fromNode = "Stop_Touch";
ROUTE1185.toField = "set_stopTime";
ROUTE1185.toNode = "RunTimer";
children[554] = ROUTE1185;

ROUTE ROUTE1186 = createNode("ROUTE");
ROUTE1186.fromField = "touchTime";
ROUTE1186.fromNode = "Stop_Touch";
ROUTE1186.toField = "set_stopTime";
ROUTE1186.toNode = "JumpTimer";
children[555] = ROUTE1186;

ROUTE ROUTE1187 = createNode("ROUTE");
ROUTE1187.fromField = "touchTime";
ROUTE1187.fromNode = "Stop_Touch";
ROUTE1187.toField = "set_stopTime";
ROUTE1187.toNode = "KickTimer";
children[556] = ROUTE1187;

ROUTE ROUTE1188 = createNode("ROUTE");
ROUTE1188.fromField = "touchTime";
ROUTE1188.fromNode = "Stop_Touch";
ROUTE1188.toField = "set_startTime";
ROUTE1188.toNode = "StopTimer";
children[557] = ROUTE1188;

}

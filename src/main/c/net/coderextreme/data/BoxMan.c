#include "/c/x3d-code/www.web3d.org/x3d/languages/c/X3DLib/X3DLib.h"
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
meta9.content = "7 March 2021";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "http://HAnim.org";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "boxman.original.wrl";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "BoxMan.js";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "warning";
meta13.content = "Skin mesh is split across multiple shapes within a Group, should that be allowed?";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "TODO";
meta14.content = "What does the original animation script accomplish? It is not hooked up, script source contains errors...";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "TODO";
meta15.content = "InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "Image";
meta16.content = "BoxManViewInclined.png";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "Image";
meta17.content = "BoxManViewFront.png";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "Image";
meta18.content = "BoxManViewRight.png";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "Image";
meta19.content = "BoxManViewLeft.png";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "Image";
meta20.content = "BoxManViewTop.png";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "reference";
meta21.content = "BoxManAnimationPanel.x3d";
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
meta31.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan.x3d";
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
WorldInfo35.title = "BoxMan - A Seamless VRML Human";
children = new MFNode();

children[0] = WorldInfo35;

Background Background36 = createNode("Background");
Background36.groundColor = new MFColor(new float[0.6,0.6,0.6]);
Background36.skyColor = new MFColor(new float[0.75,0.75,0.75]);
children[1] = Background36;

//When converting to VRML97 (which didn't include HAnim), HAnim node prototypes are provided automatically by the X3dToVrml97.xslt translation stylesheet
HAnimHumanoid HAnimHumanoid37 = createNode("HAnimHumanoid");
HAnimHumanoid37.name = "Humanoid";
HAnimHumanoid37.DEF = "boxman_Humanoid";
HAnimHumanoid37.info = new MFString(new java.lang.String["authorName=James Smith","authorEmail=james@vapourtech.com","copyright=(C) 2000 James Smith - james@vapourtech.com","humanoidVersion=1.0"]);
HAnimHumanoid37.version = "1.0";
HAnimJoint HAnimJoint38 = createNode("HAnimJoint");
HAnimJoint38.name = "humanoid_root";
HAnimJoint38.DEF = "boxman_humanoid_root";
HAnimJoint38.center = new SFVec3f(new float[0,0.9723,-0.0728]);
HAnimJoint38.skinCoordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9,10,11]);
HAnimJoint38.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint38.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint38.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint38.stiffness = new SFVec3f(new float[0,0,0]);
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
HAnimJoint45.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint45.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint45.stiffness = new SFVec3f(new float[0,0,0]);
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
HAnimJoint49.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint49.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint49.stiffness = new SFVec3f(new float[0,0,0]);
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
HAnimJoint53.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint53.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint53.stiffness = new SFVec3f(new float[0,0,0]);
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
HAnimJoint57.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint57.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint57.stiffness = new SFVec3f(new float[0,0,0]);
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
HAnimJoint66.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint66.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint66.stiffness = new SFVec3f(new float[0,0,0]);
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
HAnimJoint70.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint70.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint70.stiffness = new SFVec3f(new float[0,0,0]);
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
HAnimJoint74.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint74.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint74.stiffness = new SFVec3f(new float[0,0,0]);
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
HAnimJoint78.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint78.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint78.stiffness = new SFVec3f(new float[0,0,0]);
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
HAnimJoint84.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint84.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint84.stiffness = new SFVec3f(new float[0,0,0]);
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
HAnimJoint88.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint88.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint88.stiffness = new SFVec3f(new float[0,0,0]);
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
HAnimJoint94.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint94.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint94.stiffness = new SFVec3f(new float[0,0,0]);
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
HAnimJoint98.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint98.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint98.stiffness = new SFVec3f(new float[0,0,0]);
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
HAnimJoint102.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint102.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint102.stiffness = new SFVec3f(new float[0,0,0]);
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
HAnimJoint108.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint108.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint108.stiffness = new SFVec3f(new float[0,0,0]);
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
HAnimJoint112.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint112.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint112.stiffness = new SFVec3f(new float[0,0,0]);
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
HAnimJoint116.ulimit = new SFVec3f(new float[0,0,0]);
HAnimJoint116.llimit = new SFVec3f(new float[0,0,0]);
HAnimJoint116.stiffness = new SFVec3f(new float[0,0,0]);
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
Viewpoint152.DEF = "Right_View";
Viewpoint152.description = "Right-side View";
Viewpoint152.orientation = new SFRotation(new float[0,1,0,-1.57]);
Viewpoint152.position = new SFVec3f(new float[-3,1,0]);
HAnimSite149.children[2] = Viewpoint152;

Viewpoint Viewpoint153 = createNode("Viewpoint");
Viewpoint153.DEF = "Left_View";
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
HAnimJoint158.USE = "boxman_l_ankle";
HAnimHumanoid37.joints[6] = HAnimJoint158;

HAnimJoint HAnimJoint159 = createNode("HAnimJoint");
HAnimJoint159.USE = "boxman_r_ankle";
HAnimHumanoid37.joints[7] = HAnimJoint159;

HAnimJoint HAnimJoint160 = createNode("HAnimJoint");
HAnimJoint160.USE = "boxman_l_elbow";
HAnimHumanoid37.joints[8] = HAnimJoint160;

HAnimJoint HAnimJoint161 = createNode("HAnimJoint");
HAnimJoint161.USE = "boxman_r_elbow";
HAnimHumanoid37.joints[9] = HAnimJoint161;

HAnimJoint HAnimJoint162 = createNode("HAnimJoint");
HAnimJoint162.USE = "boxman_l_hip";
HAnimHumanoid37.joints[10] = HAnimJoint162;

HAnimJoint HAnimJoint163 = createNode("HAnimJoint");
HAnimJoint163.USE = "boxman_r_hip";
HAnimHumanoid37.joints[11] = HAnimJoint163;

HAnimJoint HAnimJoint164 = createNode("HAnimJoint");
HAnimJoint164.USE = "boxman_l_knee";
HAnimHumanoid37.joints[12] = HAnimJoint164;

HAnimJoint HAnimJoint165 = createNode("HAnimJoint");
HAnimJoint165.USE = "boxman_r_knee";
HAnimHumanoid37.joints[13] = HAnimJoint165;

HAnimJoint HAnimJoint166 = createNode("HAnimJoint");
HAnimJoint166.USE = "boxman_l_midtarsal";
HAnimHumanoid37.joints[14] = HAnimJoint166;

HAnimJoint HAnimJoint167 = createNode("HAnimJoint");
HAnimJoint167.USE = "boxman_r_midtarsal";
HAnimHumanoid37.joints[15] = HAnimJoint167;

HAnimJoint HAnimJoint168 = createNode("HAnimJoint");
HAnimJoint168.USE = "boxman_l_shoulder";
HAnimHumanoid37.joints[16] = HAnimJoint168;

HAnimJoint HAnimJoint169 = createNode("HAnimJoint");
HAnimJoint169.USE = "boxman_r_shoulder";
HAnimHumanoid37.joints[17] = HAnimJoint169;

HAnimJoint HAnimJoint170 = createNode("HAnimJoint");
HAnimJoint170.USE = "boxman_l_wrist";
HAnimHumanoid37.joints[18] = HAnimJoint170;

HAnimJoint HAnimJoint171 = createNode("HAnimJoint");
HAnimJoint171.USE = "boxman_r_wrist";
HAnimHumanoid37.joints[19] = HAnimJoint171;

HAnimSegment HAnimSegment172 = createNode("HAnimSegment");
HAnimSegment172.USE = "boxman_l5";
HAnimHumanoid37.segments[20] = HAnimSegment172;

HAnimSegment HAnimSegment173 = createNode("HAnimSegment");
HAnimSegment173.USE = "boxman_sacrum";
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

ExternProtoDeclare ExternProtoDeclare194 = createNode("ExternProtoDeclare");
ExternProtoDeclare194.name = "LOA1_WalkAnimation";
ExternProtoDeclare194.url = new MFString(new java.lang.String["LOA1_WalkAnimation.wrl#LOA1_WalkAnimation","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation","http://HAnim.org/Models/HAnim2001/boxman/protos/LOA1WalkAnimation.wrl#LOA1WalkAnimation","LOA1_WalkAnimation.x3d#LOA1_WalkAnimation","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation","http://HAnim.org/Models/HAnim2001/boxman/protos/LOA1WalkAnimation.x3d#LOA1WalkAnimation"]);
field field195 = createNode("field");
field195.name = "cycleInterval";
field195.accessType = "inputOutput";
field195.type = "SFTime";
ExternProtoDeclare194.field = new MFNode();

ExternProtoDeclare194.field[0] = field195;

field field196 = createNode("field");
field196.name = "enabled";
field196.accessType = "inputOutput";
field196.type = "SFBool";
ExternProtoDeclare194.field[1] = field196;

field field197 = createNode("field");
field197.name = "loop";
field197.accessType = "inputOutput";
field197.type = "SFBool";
ExternProtoDeclare194.field[2] = field197;

field field198 = createNode("field");
field198.name = "startTime";
field198.accessType = "inputOutput";
field198.type = "SFTime";
ExternProtoDeclare194.field[3] = field198;

field field199 = createNode("field");
field199.name = "stopTime";
field199.accessType = "inputOutput";
field199.type = "SFTime";
ExternProtoDeclare194.field[4] = field199;

field field200 = createNode("field");
field200.name = "fraction_changed";
field200.accessType = "outputOnly";
field200.type = "SFFloat";
ExternProtoDeclare194.field[5] = field200;

field field201 = createNode("field");
field201.name = "HumanoidRoot_translation_changed";
field201.accessType = "outputOnly";
field201.type = "SFVec3f";
ExternProtoDeclare194.field[6] = field201;

field field202 = createNode("field");
field202.name = "HumanoidRoot_rotation_changed";
field202.accessType = "outputOnly";
field202.type = "SFRotation";
ExternProtoDeclare194.field[7] = field202;

field field203 = createNode("field");
field203.name = "l_hip_rotation_changed";
field203.accessType = "outputOnly";
field203.type = "SFRotation";
ExternProtoDeclare194.field[8] = field203;

field field204 = createNode("field");
field204.name = "l_knee_rotation_changed";
field204.accessType = "outputOnly";
field204.type = "SFRotation";
ExternProtoDeclare194.field[9] = field204;

field field205 = createNode("field");
field205.name = "l_ankle_rotation_changed";
field205.accessType = "outputOnly";
field205.type = "SFRotation";
ExternProtoDeclare194.field[10] = field205;

field field206 = createNode("field");
field206.name = "l_midtarsal_rotation_changed";
field206.accessType = "outputOnly";
field206.type = "SFRotation";
ExternProtoDeclare194.field[11] = field206;

field field207 = createNode("field");
field207.name = "r_hip_rotation_changed";
field207.accessType = "outputOnly";
field207.type = "SFRotation";
ExternProtoDeclare194.field[12] = field207;

field field208 = createNode("field");
field208.name = "r_knee_rotation_changed";
field208.accessType = "outputOnly";
field208.type = "SFRotation";
ExternProtoDeclare194.field[13] = field208;

field field209 = createNode("field");
field209.name = "r_ankle_rotation_changed";
field209.accessType = "outputOnly";
field209.type = "SFRotation";
ExternProtoDeclare194.field[14] = field209;

field field210 = createNode("field");
field210.name = "r_midtarsal_rotation_changed";
field210.accessType = "outputOnly";
field210.type = "SFRotation";
ExternProtoDeclare194.field[15] = field210;

field field211 = createNode("field");
field211.name = "vl5_rotation_changed";
field211.accessType = "outputOnly";
field211.type = "SFRotation";
ExternProtoDeclare194.field[16] = field211;

field field212 = createNode("field");
field212.name = "skullbase_rotation_changed";
field212.accessType = "outputOnly";
field212.type = "SFRotation";
ExternProtoDeclare194.field[17] = field212;

field field213 = createNode("field");
field213.name = "l_shoulder_rotation_changed";
field213.accessType = "outputOnly";
field213.type = "SFRotation";
ExternProtoDeclare194.field[18] = field213;

field field214 = createNode("field");
field214.name = "l_elbow_rotation_changed";
field214.accessType = "outputOnly";
field214.type = "SFRotation";
ExternProtoDeclare194.field[19] = field214;

field field215 = createNode("field");
field215.name = "l_wrist_rotation_changed";
field215.accessType = "outputOnly";
field215.type = "SFRotation";
ExternProtoDeclare194.field[20] = field215;

field field216 = createNode("field");
field216.name = "r_shoulder_rotation_changed";
field216.accessType = "outputOnly";
field216.type = "SFRotation";
ExternProtoDeclare194.field[21] = field216;

field field217 = createNode("field");
field217.name = "r_elbow_rotation_changed";
field217.accessType = "outputOnly";
field217.type = "SFRotation";
ExternProtoDeclare194.field[22] = field217;

field field218 = createNode("field");
field218.name = "r_wrist_rotation_changed";
field218.accessType = "outputOnly";
field218.type = "SFRotation";
ExternProtoDeclare194.field[23] = field218;

field field219 = createNode("field");
field219.name = "isActive";
field219.accessType = "outputOnly";
field219.type = "SFBool";
ExternProtoDeclare194.field[24] = field219;

children[3] = ExternProtoDeclare194;

ProtoInstance ProtoInstance220 = createNode("ProtoInstance");
ProtoInstance220.name = "LOA1_WalkAnimation";
ProtoInstance220.DEF = "ANIMATOR";
children[4] = ProtoInstance220;

//Animation ROUTEs
ROUTE ROUTE221 = createNode("ROUTE");
ROUTE221.fromField = "HumanoidRoot_translation_changed";
ROUTE221.fromNode = "ANIMATOR";
ROUTE221.toField = "set_translation";
ROUTE221.toNode = "boxman_humanoid_root";
children[5] = ROUTE221;

ROUTE ROUTE222 = createNode("ROUTE");
ROUTE222.fromField = "HumanoidRoot_rotation_changed";
ROUTE222.fromNode = "ANIMATOR";
ROUTE222.toField = "set_rotation";
ROUTE222.toNode = "boxman_humanoid_root";
children[6] = ROUTE222;

ROUTE ROUTE223 = createNode("ROUTE");
ROUTE223.fromField = "l_hip_rotation_changed";
ROUTE223.fromNode = "ANIMATOR";
ROUTE223.toField = "set_rotation";
ROUTE223.toNode = "boxman_l_hip";
children[7] = ROUTE223;

ROUTE ROUTE224 = createNode("ROUTE");
ROUTE224.fromField = "l_knee_rotation_changed";
ROUTE224.fromNode = "ANIMATOR";
ROUTE224.toField = "set_rotation";
ROUTE224.toNode = "boxman_l_knee";
children[8] = ROUTE224;

ROUTE ROUTE225 = createNode("ROUTE");
ROUTE225.fromField = "l_ankle_rotation_changed";
ROUTE225.fromNode = "ANIMATOR";
ROUTE225.toField = "set_rotation";
ROUTE225.toNode = "boxman_l_ankle";
children[9] = ROUTE225;

ROUTE ROUTE226 = createNode("ROUTE");
ROUTE226.fromField = "l_midtarsal_rotation_changed";
ROUTE226.fromNode = "ANIMATOR";
ROUTE226.toField = "set_rotation";
ROUTE226.toNode = "boxman_l_midtarsal";
children[10] = ROUTE226;

ROUTE ROUTE227 = createNode("ROUTE");
ROUTE227.fromField = "r_hip_rotation_changed";
ROUTE227.fromNode = "ANIMATOR";
ROUTE227.toField = "set_rotation";
ROUTE227.toNode = "boxman_r_hip";
children[11] = ROUTE227;

ROUTE ROUTE228 = createNode("ROUTE");
ROUTE228.fromField = "r_knee_rotation_changed";
ROUTE228.fromNode = "ANIMATOR";
ROUTE228.toField = "set_rotation";
ROUTE228.toNode = "boxman_r_knee";
children[12] = ROUTE228;

ROUTE ROUTE229 = createNode("ROUTE");
ROUTE229.fromField = "r_ankle_rotation_changed";
ROUTE229.fromNode = "ANIMATOR";
ROUTE229.toField = "set_rotation";
ROUTE229.toNode = "boxman_r_ankle";
children[13] = ROUTE229;

ROUTE ROUTE230 = createNode("ROUTE");
ROUTE230.fromField = "r_midtarsal_rotation_changed";
ROUTE230.fromNode = "ANIMATOR";
ROUTE230.toField = "set_rotation";
ROUTE230.toNode = "boxman_r_midtarsal";
children[14] = ROUTE230;

ROUTE ROUTE231 = createNode("ROUTE");
ROUTE231.fromField = "vl5_rotation_changed";
ROUTE231.fromNode = "ANIMATOR";
ROUTE231.toField = "set_rotation";
ROUTE231.toNode = "boxman_vl5";
children[15] = ROUTE231;

ROUTE ROUTE232 = createNode("ROUTE");
ROUTE232.fromField = "skullbase_rotation_changed";
ROUTE232.fromNode = "ANIMATOR";
ROUTE232.toField = "set_rotation";
ROUTE232.toNode = "boxman_skullbase";
children[16] = ROUTE232;

ROUTE ROUTE233 = createNode("ROUTE");
ROUTE233.fromField = "l_shoulder_rotation_changed";
ROUTE233.fromNode = "ANIMATOR";
ROUTE233.toField = "set_rotation";
ROUTE233.toNode = "boxman_l_shoulder";
children[17] = ROUTE233;

ROUTE ROUTE234 = createNode("ROUTE");
ROUTE234.fromField = "l_elbow_rotation_changed";
ROUTE234.fromNode = "ANIMATOR";
ROUTE234.toField = "set_rotation";
ROUTE234.toNode = "boxman_l_elbow";
children[18] = ROUTE234;

ROUTE ROUTE235 = createNode("ROUTE");
ROUTE235.fromField = "l_wrist_rotation_changed";
ROUTE235.fromNode = "ANIMATOR";
ROUTE235.toField = "set_rotation";
ROUTE235.toNode = "boxman_l_wrist";
children[19] = ROUTE235;

ROUTE ROUTE236 = createNode("ROUTE");
ROUTE236.fromField = "r_shoulder_rotation_changed";
ROUTE236.fromNode = "ANIMATOR";
ROUTE236.toField = "set_rotation";
ROUTE236.toNode = "boxman_r_shoulder";
children[20] = ROUTE236;

ROUTE ROUTE237 = createNode("ROUTE");
ROUTE237.fromField = "r_elbow_rotation_changed";
ROUTE237.fromNode = "ANIMATOR";
ROUTE237.toField = "set_rotation";
ROUTE237.toNode = "boxman_r_elbow";
children[21] = ROUTE237;

ROUTE ROUTE238 = createNode("ROUTE");
ROUTE238.fromField = "r_wrist_rotation_changed";
ROUTE238.fromNode = "ANIMATOR";
ROUTE238.toField = "set_rotation";
ROUTE238.toNode = "boxman_r_wrist";
children[22] = ROUTE238;

Script Script239 = createNode("Script");
Script239.DEF = "ENGINE";
Script239.directOutput = True;
Script239.url = new MFString(new java.lang.String["BoxMan.js","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan.js"]);
field field240 = createNode("field");
field240.name = "update";
field240.accessType = "inputOnly";
field240.type = "SFRotation";
Script239.field = new MFNode();

Script239.field[0] = field240;

field field241 = createNode("field");
field241.name = "humanoid";
field241.accessType = "initializeOnly";
field241.type = "SFNode";
HAnimHumanoid HAnimHumanoid242 = createNode("HAnimHumanoid");
HAnimHumanoid242.USE = "boxman_Humanoid";
field241.children = new MFNode();

field241.children[0] = HAnimHumanoid242;

Script239.field[1] = field241;

field field243 = createNode("field");
field243.name = "coordList";
field243.accessType = "initializeOnly";
field243.type = "MFVec3f";
Script239.field[2] = field243;

field field244 = createNode("field");
field244.name = "joint";
field244.accessType = "initializeOnly";
field244.type = "SFNode";
//initialization node (if any) goes here
Script239.field[3] = field244;

field field245 = createNode("field");
field245.name = "translation";
field245.accessType = "initializeOnly";
field245.type = "SFVec3f";
field245.value = "0 0 0";
Script239.field[4] = field245;

field field246 = createNode("field");
field246.name = "rotation";
field246.accessType = "initializeOnly";
field246.type = "SFRotation";
field246.value = "1 0 0 0";
Script239.field[5] = field246;

field field247 = createNode("field");
field247.name = "scale";
field247.accessType = "initializeOnly";
field247.type = "SFVec3f";
field247.value = "1 1 1";
Script239.field[6] = field247;

children[23] = Script239;

//Trigger calculation after each animation change
//<ROUTE fromField='rotation_changed' fromNode='boxman_r_wrist' toField='update' toNode='ENGINE'/>
}

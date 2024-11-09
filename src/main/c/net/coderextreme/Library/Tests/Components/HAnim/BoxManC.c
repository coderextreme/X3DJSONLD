#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.0";
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
meta4.content = "A Seamless VRML Human, demonstrating the H-Anim 2001 Specification. Animation scripting via EcmaScript.";
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
meta9.content = "17 November 2014";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "http://h-anim.org";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "boxman.original.wrl";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "TODO";
meta12.content = "reconcile z-coordinate mismatches using source anthropometry, see source for details";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "http://h-anim.org/Models/H-Anim2001/boxman";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "http://h-anim.org/Models/H-Anim2001/boxman/boxman.wrl";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "reference";
meta15.content = "http://www.vapourtech.com/team/james/boxman.wrl";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "reference";
meta16.content = "http://h-anim.org/Specifications/H-Anim2001";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "reference";
meta17.content = "http://h-anim.org/Models";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "reference";
meta18.content = "http://h-anim.org/Nodes";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "reference";
meta19.content = "http://www.web3d.org/x3d/content/X3dToVrml97.xslt";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "rights";
meta20.content = "(C) 2000 James Smith - james@vapourtech.com";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "reference";
meta21.content = "http://www.vapourtech.com";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "subject";
meta22.content = "BoxMan H-Anim 2.0";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "identifier";
meta23.content = "http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/BoxMan.x3d";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "generator";
meta24.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "license";
meta25.content = "../license.html";
head1.meta[23] = meta25;

head = head1;

WorldInfo WorldInfo27 = createNode("WorldInfo");
WorldInfo27.info = new MFString(new java.lang.String["(C) 2000 James Smith - james@vapourtech.com","http://www.vapourtech.com/team/james/boxman.wrl","Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com"]);
WorldInfo27.title = "BoxMan - A Seamless VRML Human";
children = new MFNode();

children[0] = WorldInfo27;

Background Background28 = createNode("Background");
Background28.groundColor = new MFColor(new float[0.6,0.6,0.6]);
Background28.skyColor = new MFColor(new float[0.75,0.75,0.75]);
children[1] = Background28;

//H-Anim node prototypes are provided automatically by the X3dToVrml97.xsl translation stylesheet when converting to VRML97 (which didn't include H-Anim)
HAnimHumanoid HAnimHumanoid29 = createNode("HAnimHumanoid");
HAnimHumanoid29.name = "Humanoid";
HAnimHumanoid29.DEF = "HUMANOID";
HAnimHumanoid29.info = new MFString(new java.lang.String["authorName=James Smith","authorEmail=james@vapourtech.com","copyright=(C) 2000 James Smith - james@vapourtech.com","humanoidVersion=2.0"]);
HAnimHumanoid29.version = "2.0";
HAnimJoint HAnimJoint30 = createNode("HAnimJoint");
HAnimJoint30.name = "HumanoidRoot";
HAnimJoint30.DEF = "hanim_HumanoidRoot";
HAnimJoint30.center = new SFVec3f(new float[0,0.9723,-0.0728]);
HAnimJoint30.skinCoordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9,10,11]);
HAnimJoint30.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint30.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint30.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment31 = createNode("HAnimSegment");
HAnimSegment31.name = "sacrum";
HAnimSegment31.DEF = "hanim_sacrum";
Transform Transform32 = createNode("Transform");
Transform32.translation = new SFVec3f(new float[0,0.9723,-0.0728]);
Shape Shape33 = createNode("Shape");
Shape33.DEF = "SphereYellow";
Appearance Appearance34 = createNode("Appearance");
Material Material35 = createNode("Material");
Material35.diffuseColor = new SFColor(new float[1,1,0]);
Appearance34.material = Material35;

Shape33.appearance = Appearance34;

Sphere Sphere36 = createNode("Sphere");
Sphere36.radius = 0.02;
Shape33.geometry = Sphere36;

Transform32.child = new undefined();

Transform32.child[0] = Shape33;

HAnimSegment31.children = new MFNode();

HAnimSegment31.children[0] = Transform32;

HAnimJoint30.children = new MFNode();

HAnimJoint30.children[0] = HAnimSegment31;

HAnimJoint HAnimJoint37 = createNode("HAnimJoint");
HAnimJoint37.name = "l_hip";
HAnimJoint37.DEF = "hanim_l_hip";
HAnimJoint37.center = new SFVec3f(new float[0.0956,0.9364,0]);
HAnimJoint37.skinCoordIndex = new MFInt32(new int[12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43]);
HAnimJoint37.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
HAnimJoint37.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint37.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment38 = createNode("HAnimSegment");
HAnimSegment38.name = "l_thigh";
HAnimSegment38.DEF = "hanim_l_thigh";
//TODO reconcile z-coordinate mismatch using source anthropometry
Transform Transform39 = createNode("Transform");
Transform39.translation = new SFVec3f(new float[0.0956,0.9346,0]);
Shape Shape40 = createNode("Shape");
Shape40.USE = "SphereYellow";
Transform39.child = new undefined();

Transform39.child[0] = Shape40;

HAnimSegment38.children = new MFNode();

HAnimSegment38.children[0] = Transform39;

HAnimJoint37.children = new MFNode();

HAnimJoint37.children[0] = HAnimSegment38;

HAnimJoint HAnimJoint41 = createNode("HAnimJoint");
HAnimJoint41.name = "l_knee";
HAnimJoint41.DEF = "hanim_l_knee";
HAnimJoint41.center = new SFVec3f(new float[0.0956,0.5095,-0.0036]);
HAnimJoint41.skinCoordIndex = new MFInt32(new int[36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63]);
HAnimJoint41.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint41.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint41.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment42 = createNode("HAnimSegment");
HAnimSegment42.name = "l_calf";
HAnimSegment42.DEF = "hanim_l_calf";
Transform Transform43 = createNode("Transform");
Transform43.translation = new SFVec3f(new float[0.0956,0.5095,-0.0036]);
Shape Shape44 = createNode("Shape");
Shape44.USE = "SphereYellow";
Transform43.child = new undefined();

Transform43.child[0] = Shape44;

HAnimSegment42.children = new MFNode();

HAnimSegment42.children[0] = Transform43;

HAnimJoint41.children = new MFNode();

HAnimJoint41.children[0] = HAnimSegment42;

HAnimJoint HAnimJoint45 = createNode("HAnimJoint");
HAnimJoint45.name = "l_ankle";
HAnimJoint45.DEF = "hanim_l_ankle";
HAnimJoint45.center = new SFVec3f(new float[0.0946,0.0762,-0.0261]);
HAnimJoint45.skinCoordIndex = new MFInt32(new int[64,65,66,67,68,69,70,71]);
HAnimJoint45.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint45.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint45.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment46 = createNode("HAnimSegment");
HAnimSegment46.name = "l_hindfoot";
HAnimSegment46.DEF = "hanim_l_hindfoot";
Transform Transform47 = createNode("Transform");
Transform47.translation = new SFVec3f(new float[0.0946,0.0762,-0.0261]);
Shape Shape48 = createNode("Shape");
Shape48.USE = "SphereYellow";
Transform47.child = new undefined();

Transform47.child[0] = Shape48;

HAnimSegment46.children = new MFNode();

HAnimSegment46.children[0] = Transform47;

HAnimJoint45.children = new MFNode();

HAnimJoint45.children[0] = HAnimSegment46;

HAnimJoint HAnimJoint49 = createNode("HAnimJoint");
HAnimJoint49.name = "l_midtarsal";
HAnimJoint49.DEF = "hanim_l_midtarsal";
HAnimJoint49.center = new SFVec3f(new float[0.1079,0.0317,0.067]);
HAnimJoint49.skinCoordIndex = new MFInt32(new int[72,73,74,75,76,77,78,79]);
HAnimJoint49.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint49.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint49.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment50 = createNode("HAnimSegment");
HAnimSegment50.name = "l_middistal";
HAnimSegment50.DEF = "hanim_l_middistal";
Transform Transform51 = createNode("Transform");
Transform51.translation = new SFVec3f(new float[0.1079,0.0317,0.067]);
Shape Shape52 = createNode("Shape");
Shape52.USE = "SphereYellow";
Transform51.child = new undefined();

Transform51.child[0] = Shape52;

HAnimSegment50.children = new MFNode();

HAnimSegment50.children[0] = Transform51;

HAnimSite HAnimSite53 = createNode("HAnimSite");
HAnimSite53.name = "l_middle_distal_tip";
HAnimSite53.DEF = "hanim_l_middle_distal_tip";
HAnimSite53.translation = new SFVec3f(new float[0.095,0.0005,0.1924]);
HAnimSegment50.children[1] = HAnimSite53;

Transform Transform54 = createNode("Transform");
Transform54.translation = new SFVec3f(new float[0.095,0.0005,0.1924]);
Shape Shape55 = createNode("Shape");
Shape55.DEF = "SphereRed";
Appearance Appearance56 = createNode("Appearance");
Material Material57 = createNode("Material");
Material57.diffuseColor = new SFColor(new float[1,0,0]);
Appearance56.material = Material57;

Shape55.appearance = Appearance56;

Sphere Sphere58 = createNode("Sphere");
Sphere58.radius = 0.02;
Shape55.geometry = Sphere58;

Transform54.child = new undefined();

Transform54.child[0] = Shape55;

HAnimSegment50.children[2] = Transform54;

HAnimJoint49.children = new MFNode();

HAnimJoint49.children[0] = HAnimSegment50;

HAnimJoint45.children[1] = HAnimJoint49;

HAnimJoint41.children[1] = HAnimJoint45;

HAnimJoint37.children[1] = HAnimJoint41;

HAnimJoint30.children[1] = HAnimJoint37;

HAnimJoint HAnimJoint59 = createNode("HAnimJoint");
HAnimJoint59.name = "r_hip";
HAnimJoint59.DEF = "hanim_r_hip";
HAnimJoint59.center = new SFVec3f(new float[-0.0956,0.9364,0]);
HAnimJoint59.skinCoordIndex = new MFInt32(new int[80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111]);
HAnimJoint59.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]);
HAnimJoint59.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint59.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment60 = createNode("HAnimSegment");
HAnimSegment60.name = "r_thigh";
HAnimSegment60.DEF = "hanim_r_thigh";
//TODO reconcile z-coordinate mismatch using source anthropometry
Transform Transform61 = createNode("Transform");
Transform61.translation = new SFVec3f(new float[-0.0956,0.9346,0]);
Shape Shape62 = createNode("Shape");
Shape62.USE = "SphereYellow";
Transform61.child = new undefined();

Transform61.child[0] = Shape62;

HAnimSegment60.children = new MFNode();

HAnimSegment60.children[0] = Transform61;

HAnimJoint59.children = new MFNode();

HAnimJoint59.children[0] = HAnimSegment60;

HAnimJoint HAnimJoint63 = createNode("HAnimJoint");
HAnimJoint63.name = "r_knee";
HAnimJoint63.DEF = "hanim_r_knee";
HAnimJoint63.center = new SFVec3f(new float[-0.0956,0.5095,-0.0036]);
HAnimJoint63.skinCoordIndex = new MFInt32(new int[104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131]);
HAnimJoint63.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint63.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint63.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment64 = createNode("HAnimSegment");
HAnimSegment64.name = "r_calf";
HAnimSegment64.DEF = "hanim_r_calf";
Transform Transform65 = createNode("Transform");
Transform65.translation = new SFVec3f(new float[-0.0956,0.5095,-0.0036]);
Shape Shape66 = createNode("Shape");
Shape66.USE = "SphereYellow";
Transform65.child = new undefined();

Transform65.child[0] = Shape66;

HAnimSegment64.children = new MFNode();

HAnimSegment64.children[0] = Transform65;

HAnimJoint63.children = new MFNode();

HAnimJoint63.children[0] = HAnimSegment64;

HAnimJoint HAnimJoint67 = createNode("HAnimJoint");
HAnimJoint67.name = "r_ankle";
HAnimJoint67.DEF = "hanim_r_ankle";
HAnimJoint67.center = new SFVec3f(new float[-0.0946,0.0762,-0.0261]);
HAnimJoint67.skinCoordIndex = new MFInt32(new int[132,133,134,135,136,137,138,139]);
HAnimJoint67.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint67.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint67.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment68 = createNode("HAnimSegment");
HAnimSegment68.name = "r_hindfoot";
HAnimSegment68.DEF = "hanim_r_hindfoot";
Transform Transform69 = createNode("Transform");
Transform69.translation = new SFVec3f(new float[-0.0946,0.0762,-0.0261]);
Shape Shape70 = createNode("Shape");
Shape70.USE = "SphereYellow";
Transform69.child = new undefined();

Transform69.child[0] = Shape70;

HAnimSegment68.children = new MFNode();

HAnimSegment68.children[0] = Transform69;

HAnimJoint67.children = new MFNode();

HAnimJoint67.children[0] = HAnimSegment68;

HAnimJoint HAnimJoint71 = createNode("HAnimJoint");
HAnimJoint71.name = "r_midtarsal";
HAnimJoint71.DEF = "hanim_r_midtarsal";
HAnimJoint71.center = new SFVec3f(new float[-0.1079,0.0317,0.067]);
HAnimJoint71.skinCoordIndex = new MFInt32(new int[140,141,142,143,144,145,146,147]);
HAnimJoint71.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint71.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint71.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment72 = createNode("HAnimSegment");
HAnimSegment72.name = "r_middistal";
HAnimSegment72.DEF = "hanim_r_middistal";
Transform Transform73 = createNode("Transform");
Transform73.translation = new SFVec3f(new float[-0.1079,0.0317,0.067]);
Shape Shape74 = createNode("Shape");
Shape74.USE = "SphereYellow";
Transform73.child = new undefined();

Transform73.child[0] = Shape74;

HAnimSegment72.children = new MFNode();

HAnimSegment72.children[0] = Transform73;

HAnimSite HAnimSite75 = createNode("HAnimSite");
HAnimSite75.name = "r_middle_distal_tip";
HAnimSite75.DEF = "hanim_r_middle_distal_tip";
HAnimSite75.translation = new SFVec3f(new float[-0.095,0.0005,0.1924]);
HAnimSegment72.children[1] = HAnimSite75;

Transform Transform76 = createNode("Transform");
Transform76.translation = new SFVec3f(new float[-0.095,0.0005,0.1924]);
Shape Shape77 = createNode("Shape");
Shape77.USE = "SphereRed";
Transform76.child = new undefined();

Transform76.child[0] = Shape77;

HAnimSegment72.children[2] = Transform76;

HAnimJoint71.children = new MFNode();

HAnimJoint71.children[0] = HAnimSegment72;

HAnimJoint67.children[1] = HAnimJoint71;

HAnimJoint63.children[1] = HAnimJoint67;

HAnimJoint59.children[1] = HAnimJoint63;

HAnimJoint30.children[2] = HAnimJoint59;

HAnimJoint HAnimJoint78 = createNode("HAnimJoint");
HAnimJoint78.name = "vl5";
HAnimJoint78.DEF = "hanim_vl5";
HAnimJoint78.center = new SFVec3f(new float[0,1.0817,-0.0728]);
HAnimJoint78.skinCoordIndex = new MFInt32(new int[148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167]);
HAnimJoint78.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint78.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint78.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment79 = createNode("HAnimSegment");
HAnimSegment79.name = "l5";
HAnimSegment79.DEF = "hanim_l5";
Transform Transform80 = createNode("Transform");
Transform80.translation = new SFVec3f(new float[0,1.0817,-0.0728]);
Shape Shape81 = createNode("Shape");
Shape81.USE = "SphereYellow";
Transform80.child = new undefined();

Transform80.child[0] = Shape81;

HAnimSegment79.children = new MFNode();

HAnimSegment79.children[0] = Transform80;

HAnimJoint78.children = new MFNode();

HAnimJoint78.children[0] = HAnimSegment79;

HAnimJoint HAnimJoint82 = createNode("HAnimJoint");
HAnimJoint82.name = "skullbase";
HAnimJoint82.DEF = "hanim_skullbase";
HAnimJoint82.center = new SFVec3f(new float[0,1.644,0.036]);
HAnimJoint82.skinCoordIndex = new MFInt32(new int[168,169,170,171,172,173,174,175]);
HAnimJoint82.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint82.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint82.llimit = new MFFloat(new float[0,0,0]);
HAnimDisplacer HAnimDisplacer83 = createNode("HAnimDisplacer");
HAnimDisplacer83.DEF = "hanim_skullbase_displacer";
HAnimDisplacer83.displacements = new MFVec3f(new float[0,0.031993,0]);
HAnimDisplacer83.coordIndex = new MFInt32(new int[168]);
HAnimDisplacer83.weight = 1;
HAnimJoint82.displacers = new MFNode();

HAnimJoint82.displacers[0] = HAnimDisplacer83;

HAnimSegment HAnimSegment84 = createNode("HAnimSegment");
HAnimSegment84.name = "skull";
HAnimSegment84.DEF = "hanim_skull";
//TODO reconcile z-coordinate mismatch using source anthropometry
Transform Transform85 = createNode("Transform");
Transform85.translation = new SFVec3f(new float[0,1.644,0.0036]);
Shape Shape86 = createNode("Shape");
Shape86.USE = "SphereYellow";
Transform85.child = new undefined();

Transform85.child[0] = Shape86;

HAnimSegment84.children = new MFNode();

HAnimSegment84.children[0] = Transform85;

HAnimSite HAnimSite87 = createNode("HAnimSite");
HAnimSite87.name = "skull_tip";
HAnimSite87.DEF = "hanim_skull_tip";
HAnimSite87.translation = new SFVec3f(new float[-0.0029,1.7771,0.0274]);
HAnimSegment84.children[1] = HAnimSite87;

Transform Transform88 = createNode("Transform");
Transform88.translation = new SFVec3f(new float[-0.0029,1.7771,0.0274]);
Shape Shape89 = createNode("Shape");
Shape89.USE = "SphereYellow";
Transform88.child = new undefined();

Transform88.child[0] = Shape89;

HAnimSegment84.children[2] = Transform88;

HAnimJoint82.children[1] = HAnimSegment84;

HAnimJoint78.children[1] = HAnimJoint82;

HAnimJoint HAnimJoint90 = createNode("HAnimJoint");
HAnimJoint90.name = "l_shoulder";
HAnimJoint90.DEF = "hanim_l_shoulder";
HAnimJoint90.center = new SFVec3f(new float[0.1968,1.4642,-0.0265]);
HAnimJoint90.skinCoordIndex = new MFInt32(new int[176,177,178,179,180,181,182,183]);
HAnimJoint90.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint90.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint90.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment91 = createNode("HAnimSegment");
HAnimSegment91.name = "l_upperarm";
HAnimSegment91.DEF = "hanim_l_upperarm";
Transform Transform92 = createNode("Transform");
Transform92.translation = new SFVec3f(new float[0.1968,1.4642,-0.0265]);
Shape Shape93 = createNode("Shape");
Shape93.USE = "SphereYellow";
Transform92.child = new undefined();

Transform92.child[0] = Shape93;

HAnimSegment91.children = new MFNode();

HAnimSegment91.children[0] = Transform92;

HAnimJoint90.children = new MFNode();

HAnimJoint90.children[0] = HAnimSegment91;

HAnimJoint HAnimJoint94 = createNode("HAnimJoint");
HAnimJoint94.name = "l_elbow";
HAnimJoint94.DEF = "hanim_l_elbow";
HAnimJoint94.center = new SFVec3f(new float[0.1982,1.1622,-0.0557]);
HAnimJoint94.skinCoordIndex = new MFInt32(new int[184,185,186,187,188,189,190,191]);
HAnimJoint94.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint94.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint94.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment95 = createNode("HAnimSegment");
HAnimSegment95.name = "l_forearm";
HAnimSegment95.DEF = "hanim_l_forearm";
Transform Transform96 = createNode("Transform");
Transform96.translation = new SFVec3f(new float[0.1982,1.1622,-0.0557]);
Shape Shape97 = createNode("Shape");
Shape97.USE = "SphereYellow";
Transform96.child = new undefined();

Transform96.child[0] = Shape97;

HAnimSegment95.children = new MFNode();

HAnimSegment95.children[0] = Transform96;

HAnimJoint94.children = new MFNode();

HAnimJoint94.children[0] = HAnimSegment95;

HAnimJoint HAnimJoint98 = createNode("HAnimJoint");
HAnimJoint98.name = "l_wrist";
HAnimJoint98.DEF = "hanim_l_wrist";
HAnimJoint98.center = new SFVec3f(new float[0.1972,0.8929,-0.069]);
HAnimJoint98.skinCoordIndex = new MFInt32(new int[192,193,194,195,196,197,198,199]);
HAnimJoint98.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint98.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint98.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment99 = createNode("HAnimSegment");
HAnimSegment99.name = "l_hand";
HAnimSegment99.DEF = "hanim_l_hand";
Transform Transform100 = createNode("Transform");
Transform100.translation = new SFVec3f(new float[0.1972,0.8929,-0.069]);
Shape Shape101 = createNode("Shape");
Shape101.USE = "SphereYellow";
Transform100.child = new undefined();

Transform100.child[0] = Shape101;

HAnimSegment99.children = new MFNode();

HAnimSegment99.children[0] = Transform100;

HAnimSite HAnimSite102 = createNode("HAnimSite");
HAnimSite102.name = "l_hand_tip";
HAnimSite102.DEF = "hanim_l_hand_tip";
HAnimSite102.translation = new SFVec3f(new float[0.1912,0.6976,-0.071]);
HAnimSegment99.children[1] = HAnimSite102;

Transform Transform103 = createNode("Transform");
Transform103.translation = new SFVec3f(new float[0.1912,0.6976,-0.071]);
Shape Shape104 = createNode("Shape");
Shape104.USE = "SphereRed";
Transform103.child = new undefined();

Transform103.child[0] = Shape104;

HAnimSegment99.children[2] = Transform103;

HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimSegment99;

HAnimJoint94.children[1] = HAnimJoint98;

HAnimJoint90.children[1] = HAnimJoint94;

HAnimJoint78.children[2] = HAnimJoint90;

HAnimJoint HAnimJoint105 = createNode("HAnimJoint");
HAnimJoint105.name = "r_shoulder";
HAnimJoint105.DEF = "hanim_r_shoulder";
HAnimJoint105.center = new SFVec3f(new float[-0.1968,1.4642,-0.0265]);
HAnimJoint105.skinCoordIndex = new MFInt32(new int[200,201,202,203,204,205,206,207]);
HAnimJoint105.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint105.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint105.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment106 = createNode("HAnimSegment");
HAnimSegment106.name = "r_upperarm";
HAnimSegment106.DEF = "hanim_r_upperarm";
Transform Transform107 = createNode("Transform");
Transform107.translation = new SFVec3f(new float[-0.1968,1.4642,-0.0265]);
Shape Shape108 = createNode("Shape");
Shape108.USE = "SphereYellow";
Transform107.child = new undefined();

Transform107.child[0] = Shape108;

HAnimSegment106.children = new MFNode();

HAnimSegment106.children[0] = Transform107;

HAnimJoint105.children = new MFNode();

HAnimJoint105.children[0] = HAnimSegment106;

HAnimJoint HAnimJoint109 = createNode("HAnimJoint");
HAnimJoint109.name = "r_elbow";
HAnimJoint109.DEF = "hanim_r_elbow";
HAnimJoint109.center = new SFVec3f(new float[-0.1982,1.1622,-0.0557]);
HAnimJoint109.skinCoordIndex = new MFInt32(new int[208,209,210,211,212,213,214,215]);
HAnimJoint109.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint109.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint109.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment110 = createNode("HAnimSegment");
HAnimSegment110.name = "r_forearm";
HAnimSegment110.DEF = "hanim_r_forearm";
Transform Transform111 = createNode("Transform");
Transform111.translation = new SFVec3f(new float[-0.1982,1.1622,-0.0557]);
Shape Shape112 = createNode("Shape");
Shape112.USE = "SphereYellow";
Transform111.child = new undefined();

Transform111.child[0] = Shape112;

HAnimSegment110.children = new MFNode();

HAnimSegment110.children[0] = Transform111;

HAnimJoint109.children = new MFNode();

HAnimJoint109.children[0] = HAnimSegment110;

HAnimJoint HAnimJoint113 = createNode("HAnimJoint");
HAnimJoint113.name = "r_wrist";
HAnimJoint113.DEF = "hanim_r_wrist";
HAnimJoint113.center = new SFVec3f(new float[-0.1972,0.8929,-0.069]);
HAnimJoint113.skinCoordIndex = new MFInt32(new int[216,217,218,219,220,221,222,223]);
HAnimJoint113.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint113.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint113.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment114 = createNode("HAnimSegment");
HAnimSegment114.name = "r_hand";
HAnimSegment114.DEF = "hanim_r_hand";
Transform Transform115 = createNode("Transform");
Transform115.translation = new SFVec3f(new float[-0.1972,0.8929,-0.069]);
Shape Shape116 = createNode("Shape");
Shape116.USE = "SphereYellow";
Transform115.child = new undefined();

Transform115.child[0] = Shape116;

HAnimSegment114.children = new MFNode();

HAnimSegment114.children[0] = Transform115;

HAnimSite HAnimSite117 = createNode("HAnimSite");
HAnimSite117.name = "r_hand_tip";
HAnimSite117.DEF = "hanim_r_hand_tip";
HAnimSite117.translation = new SFVec3f(new float[-0.1912,0.6976,-0.071]);
HAnimSegment114.children[1] = HAnimSite117;

Transform Transform118 = createNode("Transform");
Transform118.translation = new SFVec3f(new float[-0.1912,0.6976,-0.071]);
Shape Shape119 = createNode("Shape");
Shape119.USE = "SphereRed";
Transform118.child = new undefined();

Transform118.child[0] = Shape119;

HAnimSegment114.children[2] = Transform118;

HAnimJoint113.children = new MFNode();

HAnimJoint113.children[0] = HAnimSegment114;

HAnimJoint109.children[1] = HAnimJoint113;

HAnimJoint105.children[1] = HAnimJoint109;

HAnimJoint78.children[3] = HAnimJoint105;

HAnimJoint30.children[3] = HAnimJoint78;

HAnimHumanoid29.joints = new MFNode();

HAnimHumanoid29.joints[0] = HAnimJoint30;

//# sacrum (12) # l_thigh (28) # l_calf (24) # l_hindfoot (8) # l_middistal (8) # r_thigh (28) # r_calf (24) # r_hindfoot (8) # r_middistal (8) # l5 (20) # skull (8) # l_upperarm (8) # l_forearm (8) # l_hand (8) # r_upperarm (8) # r_forearm (8) # r_hand (8)
//top-level joint references
//top-level site references
//top-level segment references
//top-level viewpoint references
Coordinate Coordinate120 = createNode("Coordinate");
Coordinate120.DEF = "SKINCOORD";
Coordinate120.point = new MFVec3f(new float[-0.05,1,0.05,0.05,1,0.05,0.03,0.97,-0.1,-0.03,0.97,-0.1,0.03,0.94,-0.075,-0.03,0.94,-0.075,0,0.92,0,0,0.94,0.03,-0.12,1.06,0.05,0.12,1.06,0.05,0.12,1.06,-0.1,-0.12,1.06,-0.1,0.0456,0.9364,0.05,0.1456,0.9364,0.05,0.1456,0.9364,-0.05,0.0456,0.9364,-0.05,0.0456,0.9,0.05,0.1456,0.9,0.05,0.1456,0.9,-0.05,0.0456,0.9,-0.05,0.0456,0.8,0.05,0.1456,0.8,0.05,0.1456,0.8,-0.05,0.0456,0.8,-0.05,0.0456,0.7,0.05,0.1456,0.7,0.05,0.1456,0.7,-0.05,0.0456,0.7,-0.05,0.0456,0.6,0.05,0.1456,0.6,0.05,0.1456,0.6,-0.05,0.0456,0.6,-0.05,0.0456,0.55,0.05,0.1456,0.55,0.05,0.1456,0.55,-0.05,0.0456,0.55,-0.05,0.0456,0.52,0.05,0.1456,0.52,0.05,0.1456,0.52,-0.05,0.0456,0.52,-0.05,0.0456,0.5,0.05,0.1456,0.5,0.05,0.1456,0.5,-0.05,0.0456,0.5,-0.05,0.0454,0.43,0.045,0.1454,0.43,0.045,0.1454,0.43,-0.055,0.0454,0.43,-0.055,0.0452,0.36,0.04,0.1452,0.36,0.04,0.1452,0.36,-0.06,0.0452,0.36,-0.06,0.045,0.29,0.035,0.145,0.29,0.035,0.145,0.29,-0.065,0.045,0.29,-0.065,0.0448,0.21,0.03,0.1448,0.21,0.03,0.1448,0.21,-0.07,0.0448,0.21,-0.07,0.0446,0.1262,0.025,0.1446,0.1262,0.025,0.1446,0.1262,-0.075,0.0446,0.1262,-0.075,0.0446,0.0762,0.025,0.1446,0.0762,0.025,0.1446,0,-0.075,0.0446,0,-0.075,0.0446,0.0562,0.057,0.1446,0.0562,0.057,0.1446,0,0.057,0.0446,0,0.057,0.0446,0.0562,0.087,0.1446,0.0562,0.087,0.1446,0,0.087,0.0446,0,0.087,0.0446,0.0562,0.1924,0.1446,0.0562,0.1924,0.1446,0,0.1924,0.0446,0,0.1924,-0.0456,0.9364,0.05,-0.1456,0.9364,0.05,-0.1456,0.9364,-0.05,-0.0456,0.9364,-0.05,-0.0456,0.9,0.05,-0.1456,0.9,0.05,-0.1456,0.9,-0.05,-0.0456,0.9,-0.05,-0.0456,0.8,0.05,-0.1456,0.8,0.05,-0.1456,0.8,-0.05,-0.0456,0.8,-0.05,-0.0456,0.7,0.05,-0.1456,0.7,0.05,-0.1456,0.7,-0.05,-0.0456,0.7,-0.05,-0.0456,0.6,0.05,-0.1456,0.6,0.05,-0.1456,0.6,-0.05,-0.0456,0.6,-0.05,-0.0456,0.55,0.05,-0.1456,0.55,0.05,-0.1456,0.55,-0.05,-0.0456,0.55,-0.05,-0.0456,0.52,0.05,-0.1456,0.52,0.05,-0.1456,0.52,-0.05,-0.0456,0.52,-0.05,-0.0456,0.5,0.05,-0.1456,0.5,0.05,-0.1456,0.5,-0.05,-0.0456,0.5,-0.05,-0.0454,0.43,0.045,-0.1454,0.43,0.045,-0.1454,0.43,-0.055,-0.0454,0.43,-0.055,-0.0452,0.36,0.04,-0.1452,0.36,0.04,-0.1452,0.36,-0.06,-0.0452,0.36,-0.06,-0.045,0.29,0.035,-0.145,0.29,0.035,-0.145,0.29,-0.065,-0.045,0.29,-0.065,-0.0448,0.21,0.03,-0.1448,0.21,0.03,-0.1448,0.21,-0.07,-0.0448,0.21,-0.07,-0.0446,0.1262,0.025,-0.1446,0.1262,0.025,-0.1446,0.1262,-0.075,-0.0446,0.1262,-0.075,-0.0446,0.0762,0.025,-0.1446,0.0762,0.025,-0.1446,0,-0.075,-0.0446,0,-0.075,-0.0446,0.0562,0.057,-0.1446,0.0562,0.057,-0.1446,0,0.057,-0.0446,0,0.057,-0.0446,0.0562,0.087,-0.1446,0.0562,0.087,-0.1446,0,0.087,-0.0446,0,0.087,-0.0446,0.0562,0.1924,-0.1446,0.0562,0.1924,-0.1446,0,0.1924,-0.0446,0,0.1924,-0.12,1.1,0.05,0.12,1.1,0.05,0.12,1.1,-0.1,-0.12,1.1,-0.1,-0.14,1.42,0.045,0.14,1.42,0.045,0.14,1.42,-0.09,-0.14,1.42,-0.09,-0.24,1.52,0.035,0.24,1.52,0.035,0.24,1.52,-0.09,-0.24,1.52,-0.09,-0.05,1.56,0.03,0.05,1.56,0.03,0.05,1.56,-0.06,-0.05,1.56,-0.06,-0.05,1.6,0.06,0.05,1.6,0.06,0.05,1.62,-0.03,-0.05,1.62,-0.03,-0.07,1.777,0.13,0.07,1.777,0.13,0.07,1.777,-0.03,-0.07,1.777,-0.03,-0.07,1.6,0.13,0.07,1.6,0.13,0.07,1.66,-0.03,-0.07,1.66,-0.03,0.16,1.42,0.015,0.24,1.5,0.015,0.24,1.5,-0.075,0.16,1.42,-0.075,0.17,1.18,-0.025,0.23,1.18,-0.025,0.23,1.18,-0.085,0.17,1.18,-0.085,0.17,1.14,-0.025,0.23,1.14,-0.025,0.23,1.14,-0.085,0.17,1.14,-0.085,0.18,0.91,-0.05,0.22,0.91,-0.05,0.22,0.91,-0.09,0.18,0.91,-0.09,0.18,0.87,-0.02,0.22,0.87,-0.02,0.22,0.87,-0.1,0.18,0.87,-0.1,0.18,0.6976,-0.02,0.22,0.6976,-0.02,0.22,0.6976,-0.1,0.18,0.6976,-0.1,-0.16,1.42,0.015,-0.24,1.5,0.015,-0.24,1.5,-0.075,-0.16,1.42,-0.075,-0.17,1.18,-0.025,-0.23,1.18,-0.025,-0.23,1.18,-0.085,-0.17,1.18,-0.085,-0.17,1.14,-0.025,-0.23,1.14,-0.025,-0.23,1.14,-0.085,-0.17,1.14,-0.085,-0.18,0.91,-0.05,-0.22,0.91,-0.05,-0.22,0.91,-0.09,-0.18,0.91,-0.09,-0.18,0.87,-0.02,-0.22,0.87,-0.02,-0.22,0.87,-0.1,-0.18,0.87,-0.1,-0.18,0.6976,-0.02,-0.22,0.6976,-0.02,-0.22,0.6976,-0.1,-0.18,0.6976,-0.1]);
HAnimHumanoid29.skinCoord = Coordinate120;

Group Group121 = createNode("Group");
Shape Shape122 = createNode("Shape");
Shape122.DEF = "TrouserSkin";
Appearance Appearance123 = createNode("Appearance");
Material Material124 = createNode("Material");
Material124.diffuseColor = new SFColor(new float[0,0,1]);
Material124.transparency = 0.5;
Appearance123.material = Material124;

Shape122.appearance = Appearance123;

//# 0: sacrum (8) # 1: l_hip joint (8) # 2: r_hip joint (8) # 3: l_thigh (48) # 4: l_knee joint (8) # 5: l_calf (40) # 10: r_thigh (48) # 11: r_knee joint (8) # 12: r_calf (40)
IndexedFaceSet IndexedFaceSet125 = createNode("IndexedFaceSet");
IndexedFaceSet125.coordIndex = new MFInt32(new int[0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1]);
Coordinate Coordinate126 = createNode("Coordinate");
Coordinate126.USE = "SKINCOORD";
IndexedFaceSet125.coord = Coordinate126;

Shape122.geometry = IndexedFaceSet125;

Group121.children = new MFNode();

Group121.children[0] = Shape122;

Shape Shape127 = createNode("Shape");
Shape127.DEF = "ShoeSkin";
Appearance Appearance128 = createNode("Appearance");
Material Material129 = createNode("Material");
Material129.diffuseColor = new SFColor(new float[0,0,0]);
Material129.transparency = 0.5;
Appearance128.material = Material129;

Shape127.appearance = Appearance128;

//# 6: l_ankle joint (8) # 7: l_hindfoot (8) # 8: l_midtarsal joint (8) # 9: l_middistal (10) # 13: r_ankle joint (8) # 14: r_hindfoot (8) # 15: r_midtarsal joint (8) # 16: r_middistal (10)
IndexedFaceSet IndexedFaceSet130 = createNode("IndexedFaceSet");
IndexedFaceSet130.coordIndex = new MFInt32(new int[60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1]);
Coordinate Coordinate131 = createNode("Coordinate");
Coordinate131.USE = "SKINCOORD";
IndexedFaceSet130.coord = Coordinate131;

Shape127.geometry = IndexedFaceSet130;

Group121.children[1] = Shape127;

Shape Shape132 = createNode("Shape");
Shape132.DEF = "ShirtSkin";
Appearance Appearance133 = createNode("Appearance");
Material Material134 = createNode("Material");
Material134.diffuseColor = new SFColor(new float[1,1,0]);
Material134.transparency = 0.5;
Appearance133.material = Material134;

Shape132.appearance = Appearance133;

//# 17: vl5_joint (8) # 18: l5 (28) # 21: l_shoulder joint (8) # 22: l_upperarm (8) # 23: l_elbow joint (8) # 24: l_forearm (8) # 27: r_shoulder joint (8) # 28: r_upperarm (8) # 29: r_elbow joint (8) # 30: r_forearm (8)
IndexedFaceSet IndexedFaceSet135 = createNode("IndexedFaceSet");
IndexedFaceSet135.coordIndex = new MFInt32(new int[148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1]);
Coordinate Coordinate136 = createNode("Coordinate");
Coordinate136.USE = "SKINCOORD";
IndexedFaceSet135.coord = Coordinate136;

Shape132.geometry = IndexedFaceSet135;

Group121.children[2] = Shape132;

Shape Shape137 = createNode("Shape");
Shape137.DEF = "HeadHandsFleshToneSkin";
Appearance Appearance138 = createNode("Appearance");
Material Material139 = createNode("Material");
Material139.diffuseColor = new SFColor(new float[1,0.75,0.75]);
Material139.transparency = 0.5;
Appearance138.material = Material139;

Shape137.appearance = Appearance138;

//# 19: skullbase joint (8) # 20: skull (10) # 25: l_wrist joint (8) # 26: l_hand (10) # 31: r_wrist joint (8) # 32: r_hand (10)
IndexedFaceSet IndexedFaceSet140 = createNode("IndexedFaceSet");
IndexedFaceSet140.coordIndex = new MFInt32(new int[172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
Coordinate Coordinate141 = createNode("Coordinate");
Coordinate141.USE = "SKINCOORD";
IndexedFaceSet140.coord = Coordinate141;

Shape137.geometry = IndexedFaceSet140;

Group121.children[3] = Shape137;

Shape Shape142 = createNode("Shape");
Shape142.DEF = "SkinLines";
Appearance Appearance143 = createNode("Appearance");
Material Material144 = createNode("Material");
Material144.diffuseColor = new SFColor(new float[0,0,0]);
Appearance143.material = Material144;

Shape142.appearance = Appearance143;

//Combined set of prior IFS coordIndex values
IndexedLineSet IndexedLineSet145 = createNode("IndexedLineSet");
IndexedLineSet145.coordIndex = new MFInt32(new int[0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]);
Coordinate Coordinate146 = createNode("Coordinate");
Coordinate146.USE = "SKINCOORD";
IndexedLineSet145.coord = Coordinate146;

Shape142.geometry = IndexedLineSet145;

Group121.children[4] = Shape142;

HAnimHumanoid29.skin[1] = Group121;

HAnimJoint HAnimJoint147 = createNode("HAnimJoint");
HAnimJoint147.USE = "hanim_r_wrist";
HAnimHumanoid29.joints[2] = HAnimJoint147;

HAnimJoint HAnimJoint148 = createNode("HAnimJoint");
HAnimJoint148.USE = "hanim_r_elbow";
HAnimHumanoid29.joints[3] = HAnimJoint148;

HAnimJoint HAnimJoint149 = createNode("HAnimJoint");
HAnimJoint149.USE = "hanim_r_shoulder";
HAnimHumanoid29.joints[4] = HAnimJoint149;

HAnimJoint HAnimJoint150 = createNode("HAnimJoint");
HAnimJoint150.USE = "hanim_l_wrist";
HAnimHumanoid29.joints[5] = HAnimJoint150;

HAnimJoint HAnimJoint151 = createNode("HAnimJoint");
HAnimJoint151.USE = "hanim_l_elbow";
HAnimHumanoid29.joints[6] = HAnimJoint151;

HAnimJoint HAnimJoint152 = createNode("HAnimJoint");
HAnimJoint152.USE = "hanim_l_shoulder";
HAnimHumanoid29.joints[7] = HAnimJoint152;

HAnimJoint HAnimJoint153 = createNode("HAnimJoint");
HAnimJoint153.USE = "hanim_skullbase";
HAnimHumanoid29.joints[8] = HAnimJoint153;

HAnimJoint HAnimJoint154 = createNode("HAnimJoint");
HAnimJoint154.USE = "hanim_vl5";
HAnimHumanoid29.joints[9] = HAnimJoint154;

HAnimJoint HAnimJoint155 = createNode("HAnimJoint");
HAnimJoint155.USE = "hanim_r_midtarsal";
HAnimHumanoid29.joints[10] = HAnimJoint155;

HAnimJoint HAnimJoint156 = createNode("HAnimJoint");
HAnimJoint156.USE = "hanim_r_ankle";
HAnimHumanoid29.joints[11] = HAnimJoint156;

HAnimJoint HAnimJoint157 = createNode("HAnimJoint");
HAnimJoint157.USE = "hanim_r_knee";
HAnimHumanoid29.joints[12] = HAnimJoint157;

HAnimJoint HAnimJoint158 = createNode("HAnimJoint");
HAnimJoint158.USE = "hanim_r_hip";
HAnimHumanoid29.joints[13] = HAnimJoint158;

HAnimJoint HAnimJoint159 = createNode("HAnimJoint");
HAnimJoint159.USE = "hanim_l_midtarsal";
HAnimHumanoid29.joints[14] = HAnimJoint159;

HAnimJoint HAnimJoint160 = createNode("HAnimJoint");
HAnimJoint160.USE = "hanim_l_ankle";
HAnimHumanoid29.joints[15] = HAnimJoint160;

HAnimJoint HAnimJoint161 = createNode("HAnimJoint");
HAnimJoint161.USE = "hanim_l_knee";
HAnimHumanoid29.joints[16] = HAnimJoint161;

HAnimJoint HAnimJoint162 = createNode("HAnimJoint");
HAnimJoint162.USE = "hanim_l_hip";
HAnimHumanoid29.joints[17] = HAnimJoint162;

HAnimJoint HAnimJoint163 = createNode("HAnimJoint");
HAnimJoint163.USE = "hanim_HumanoidRoot";
HAnimHumanoid29.joints[18] = HAnimJoint163;

HAnimSite HAnimSite164 = createNode("HAnimSite");
HAnimSite164.USE = "hanim_l_middle_distal_tip";
HAnimHumanoid29.viewpoints[19] = HAnimSite164;

HAnimSite HAnimSite165 = createNode("HAnimSite");
HAnimSite165.USE = "hanim_r_middle_distal_tip";
HAnimHumanoid29.viewpoints[20] = HAnimSite165;

HAnimSite HAnimSite166 = createNode("HAnimSite");
HAnimSite166.USE = "hanim_skull_tip";
HAnimHumanoid29.viewpoints[21] = HAnimSite166;

HAnimSite HAnimSite167 = createNode("HAnimSite");
HAnimSite167.USE = "hanim_l_hand_tip";
HAnimHumanoid29.viewpoints[22] = HAnimSite167;

HAnimSite HAnimSite168 = createNode("HAnimSite");
HAnimSite168.USE = "hanim_r_hand_tip";
HAnimHumanoid29.viewpoints[23] = HAnimSite168;

HAnimSegment HAnimSegment169 = createNode("HAnimSegment");
HAnimSegment169.USE = "hanim_sacrum";
HAnimHumanoid29.segments[24] = HAnimSegment169;

HAnimSegment HAnimSegment170 = createNode("HAnimSegment");
HAnimSegment170.USE = "hanim_l_thigh";
HAnimHumanoid29.segments[25] = HAnimSegment170;

HAnimSegment HAnimSegment171 = createNode("HAnimSegment");
HAnimSegment171.USE = "hanim_l_calf";
HAnimHumanoid29.segments[26] = HAnimSegment171;

HAnimSegment HAnimSegment172 = createNode("HAnimSegment");
HAnimSegment172.USE = "hanim_l_hindfoot";
HAnimHumanoid29.segments[27] = HAnimSegment172;

HAnimSegment HAnimSegment173 = createNode("HAnimSegment");
HAnimSegment173.USE = "hanim_l_middistal";
HAnimHumanoid29.segments[28] = HAnimSegment173;

HAnimSegment HAnimSegment174 = createNode("HAnimSegment");
HAnimSegment174.USE = "hanim_r_thigh";
HAnimHumanoid29.segments[29] = HAnimSegment174;

HAnimSegment HAnimSegment175 = createNode("HAnimSegment");
HAnimSegment175.USE = "hanim_r_calf";
HAnimHumanoid29.segments[30] = HAnimSegment175;

HAnimSegment HAnimSegment176 = createNode("HAnimSegment");
HAnimSegment176.USE = "hanim_r_hindfoot";
HAnimHumanoid29.segments[31] = HAnimSegment176;

HAnimSegment HAnimSegment177 = createNode("HAnimSegment");
HAnimSegment177.USE = "hanim_r_middistal";
HAnimHumanoid29.segments[32] = HAnimSegment177;

HAnimSegment HAnimSegment178 = createNode("HAnimSegment");
HAnimSegment178.USE = "hanim_l5";
HAnimHumanoid29.segments[33] = HAnimSegment178;

HAnimSegment HAnimSegment179 = createNode("HAnimSegment");
HAnimSegment179.USE = "hanim_skull";
HAnimHumanoid29.segments[34] = HAnimSegment179;

HAnimSegment HAnimSegment180 = createNode("HAnimSegment");
HAnimSegment180.USE = "hanim_l_upperarm";
HAnimHumanoid29.segments[35] = HAnimSegment180;

HAnimSegment HAnimSegment181 = createNode("HAnimSegment");
HAnimSegment181.USE = "hanim_l_forearm";
HAnimHumanoid29.segments[36] = HAnimSegment181;

HAnimSegment HAnimSegment182 = createNode("HAnimSegment");
HAnimSegment182.USE = "hanim_l_hand";
HAnimHumanoid29.segments[37] = HAnimSegment182;

HAnimSegment HAnimSegment183 = createNode("HAnimSegment");
HAnimSegment183.USE = "hanim_r_upperarm";
HAnimHumanoid29.segments[38] = HAnimSegment183;

HAnimSegment HAnimSegment184 = createNode("HAnimSegment");
HAnimSegment184.USE = "hanim_r_forearm";
HAnimHumanoid29.segments[39] = HAnimSegment184;

HAnimSegment HAnimSegment185 = createNode("HAnimSegment");
HAnimSegment185.USE = "hanim_r_hand";
HAnimHumanoid29.segments[40] = HAnimSegment185;

Viewpoint Viewpoint186 = createNode("Viewpoint");
Viewpoint186.DEF = "Inclined_View";
Viewpoint186.description = "Inclined View";
Viewpoint186.orientation = new SFRotation(new float[0,1,0,0.78]);
Viewpoint186.position = new SFVec3f(new float[2,1,2]);
HAnimHumanoid29.viewpoints = Viewpoint186;

Viewpoint Viewpoint187 = createNode("Viewpoint");
Viewpoint187.DEF = "Best_View";
Viewpoint187.description = "Best View";
Viewpoint187.orientation = new SFRotation(new float[0,1,0,-1.57]);
Viewpoint187.position = new SFVec3f(new float[-2,0.25,0]);
HAnimHumanoid29.viewpoint[41] = Viewpoint187;

Viewpoint Viewpoint188 = createNode("Viewpoint");
Viewpoint188.DEF = "Front_View";
Viewpoint188.description = "Front View";
Viewpoint188.position = new SFVec3f(new float[0,1,3]);
HAnimHumanoid29.viewpoint[42] = Viewpoint188;

Viewpoint Viewpoint189 = createNode("Viewpoint");
Viewpoint189.DEF = "Side_View";
Viewpoint189.description = "Side View";
Viewpoint189.orientation = new SFRotation(new float[0,1,0,1.57]);
Viewpoint189.position = new SFVec3f(new float[3,1,0]);
HAnimHumanoid29.viewpoint[43] = Viewpoint189;

Viewpoint Viewpoint190 = createNode("Viewpoint");
Viewpoint190.DEF = "Top_View";
Viewpoint190.description = "Top View";
Viewpoint190.orientation = new SFRotation(new float[1,0,0,-1.57]);
Viewpoint190.position = new SFVec3f(new float[0,3,0]);
HAnimHumanoid29.viewpoint[44] = Viewpoint190;

children[2] = HAnimHumanoid29;

//ExternProtoDeclare name='LOA1_WalkAnimation' url='\"LOA1_WalkAnimation.wrl#LOA1_WalkAnimation\" \"http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation\" \"http://h-anim.org/Models/H-Anim2001/boxman/protos/LOA1WalkAnimation.wrl#LOA1WalkAnimation\" \"LOA1_WalkAnimation.x3d#LOA1_WalkAnimation\" \"http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation\" \"http://h-anim.org/Models/H-Anim2001/boxman/protos/LOA1WalkAnimation.x3d#LOA1WalkAnimation\"'> <field accessType='inputOutput' name='cycleInterval' type='SFTime'/> <field accessType='inputOutput' name='enabled' type='SFBool'/> <field accessType='inputOutput' name='loop' type='SFBool'/> <field accessType='inputOutput' name='startTime' type='SFTime'/> <field accessType='inputOutput' name='stopTime' type='SFTime'/> <field accessType='outputOnly' name='fraction_changed' type='SFFloat'/> <field accessType='outputOnly' name='HumanoidRoot_translation_changed' type='SFVec3f'/> <field accessType='outputOnly' name='HumanoidRoot_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_hip_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_knee_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_ankle_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_midtarsal_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_hip_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_knee_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_ankle_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_midtarsal_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='vl5_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='skullbase_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_shoulder_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_elbow_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='l_wrist_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_shoulder_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_elbow_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='r_wrist_rotation_changed' type='SFRotation'/> <field accessType='outputOnly' name='isActive' type='SFBool'/> </ExternProtoDeclare> <ProtoInstance DEF='ANIMATOR' name='LOA1_WalkAnimation'/
Group Group191 = createNode("Group");
//ROUTE information for TIMER node: [from fraction_changed to HUMANOIDROOT_POSITION_ANIMATOR.set_fraction ] [from fraction_changed to HUMANOIDROOT_ANIMATOR.set_fraction ] [from fraction_changed to SACROILIAC_ANIMATOR.set_fraction ] [from fraction_changed to L_HIP_ANIMATOR.set_fraction ] [from fraction_changed to L_KNEE_ANIMATOR.set_fraction ] [from fraction_changed to L_ANKLE_ANIMATOR.set_fraction ] [from fraction_changed to L_MIDTARSAL_ANIMATOR.set_fraction ] [from fraction_changed to R_HIP_ANIMATOR.set_fraction ] [from fraction_changed to R_KNEE_ANIMATOR.set_fraction ] [from fraction_changed to R_ANKLE_ANIMATOR.set_fraction ] [from fraction_changed to R_MIDTARSAL_ANIMATOR.set_fraction ] [from fraction_changed to VL5_ANIMATOR.set_fraction ] [from fraction_changed to SKULLBASE_ANIMATOR.set_fraction ] [from fraction_changed to L_SHOULDER_ANIMATOR.set_fraction ] [from fraction_changed to L_ELBOW_ANIMATOR.set_fraction ] [from fraction_changed to L_WRIST_ANIMATOR.set_fraction ] [from fraction_changed to R_SHOULDER_ANIMATOR.set_fraction ] [from fraction_changed to R_ELBOW_ANIMATOR.set_fraction ] [from fraction_changed to R_WRIST_ANIMATOR.set_fraction ]
TimeSensor TimeSensor192 = createNode("TimeSensor");
TimeSensor192.DEF = "TIMER";
TimeSensor192.cycleInterval = 2;
TimeSensor192.loop = True;
//field name='cycleInterval' type='SFTime' value='2' accessType='inputOutput'/> <field name='enabled' type='SFBool' value='true' accessType='inputOutput'/> <field name='loop' type='SFBool' value='true' accessType='inputOutput'/> <field name='startTime' type='SFTime' value='0' accessType='inputOutput'/> <field name='stopTime' type='SFTime' value='-1' accessType='inputOutput'/!
//IS> <connect nodeField='cycleInterval' protoField='cycleInterval'/> <connect nodeField='enabled' protoField='enabled'/> <connect nodeField='loop' protoField='loop'/> <connect nodeField='startTime' protoField='startTime'/> <connect nodeField='stopTime' protoField='stopTime'/> <connect nodeField='fraction_changed' protoField='fraction_changed'/> <connect nodeField='isActive' protoField='isActive'/> </IS
Group191.children = new MFNode();

Group191.children[0] = TimeSensor192;

//ROUTE information for HUMANOIDROOT_POSITION_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
PositionInterpolator PositionInterpolator193 = createNode("PositionInterpolator");
PositionInterpolator193.DEF = "HUMANOIDROOT_POSITION_ANIMATOR";
PositionInterpolator193.key = new MFFloat(new float[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator193.keyValue = new MFVec3f(new float[0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
//IS> <connect nodeField='value_changed' protoField='HumanoidRoot_translation_changed'/> </IS
Group191.children[1] = PositionInterpolator193;

//ROUTE information for HUMANOIDROOT_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator OrientationInterpolator194 = createNode("OrientationInterpolator");
OrientationInterpolator194.DEF = "HUMANOIDROOT_ANIMATOR";
OrientationInterpolator194.key = new MFFloat(new float[0,1]);
OrientationInterpolator194.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0]);
//IS> <connect nodeField='value_changed' protoField='HumanoidRoot_rotation_changed'/> </IS
Group191.children[2] = OrientationInterpolator194;

//ROUTE information for SACROILIAC_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator OrientationInterpolator195 = createNode("OrientationInterpolator");
OrientationInterpolator195.DEF = "SACROILIAC_ANIMATOR";
OrientationInterpolator195.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator195.keyValue = new MFRotation(new float[0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
//IS> <connect nodeField='value_changed' protoField='lower_body_rotation_changed'/> </IS
Group191.children[3] = OrientationInterpolator195;

//ROUTE information for L_HIP_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator OrientationInterpolator196 = createNode("OrientationInterpolator");
OrientationInterpolator196.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator196.key = new MFFloat(new float[0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator196.keyValue = new MFRotation(new float[-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
//IS> <connect nodeField='value_changed' protoField='l_hip_rotation_changed'/> </IS
Group191.children[4] = OrientationInterpolator196;

//ROUTE information for L_KNEE_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator OrientationInterpolator197 = createNode("OrientationInterpolator");
OrientationInterpolator197.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator197.key = new MFFloat(new float[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator197.keyValue = new MFRotation(new float[1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
//IS> <connect nodeField='value_changed' protoField='l_knee_rotation_changed'/> </IS
Group191.children[5] = OrientationInterpolator197;

//ROUTE information for L_ANKLE_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator OrientationInterpolator198 = createNode("OrientationInterpolator");
OrientationInterpolator198.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator198.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator198.keyValue = new MFRotation(new float[-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714]);
//IS> <connect nodeField='value_changed' protoField='l_ankle_rotation_changed'/> </IS
Group191.children[6] = OrientationInterpolator198;

//ROUTE information for L_MIDTARSAL_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator OrientationInterpolator199 = createNode("OrientationInterpolator");
OrientationInterpolator199.DEF = "L_MIDTARSAL_ANIMATOR";
OrientationInterpolator199.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator199.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.2,1,0,0,0]);
//IS> <connect nodeField='value_changed' protoField='l_midtarsal_rotation_changed'/> </IS
Group191.children[7] = OrientationInterpolator199;

//ROUTE information for R_HIP_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator OrientationInterpolator200 = createNode("OrientationInterpolator");
OrientationInterpolator200.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator200.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator200.keyValue = new MFRotation(new float[-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
//IS> <connect nodeField='value_changed' protoField='r_hip_rotation_changed'/> </IS
Group191.children[8] = OrientationInterpolator200;

//ROUTE information for R_KNEE_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator OrientationInterpolator201 = createNode("OrientationInterpolator");
OrientationInterpolator201.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator201.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator201.keyValue = new MFRotation(new float[1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,-1.176e-8,-4.971e-9,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573]);
//IS> <connect nodeField='value_changed' protoField='r_knee_rotation_changed'/> <IS
Group191.children[9] = OrientationInterpolator201;

//ROUTE information for R_ANKLE_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator OrientationInterpolator202 = createNode("OrientationInterpolator");
OrientationInterpolator202.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator202.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator202.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,-1.641e-7,1.827e-8,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0]);
//IS> <connect nodeField='value_changed' protoField='r_ankle_rotation_changed'/> <IS
Group191.children[10] = OrientationInterpolator202;

//ROUTE information for R_MIDTARSAL_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator OrientationInterpolator203 = createNode("OrientationInterpolator");
OrientationInterpolator203.DEF = "R_MIDTARSAL_ANIMATOR";
OrientationInterpolator203.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator203.keyValue = new MFRotation(new float[1,0,0,-0.2,1,0,0,0,1,0,0,-0.2]);
//IS> <connect nodeField='value_changed' protoField='r_midtarsal_rotation_changed'/> <IS
Group191.children[11] = OrientationInterpolator203;

//ROUTE information for VL5_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator OrientationInterpolator204 = createNode("OrientationInterpolator");
OrientationInterpolator204.DEF = "VL5_ANIMATOR";
OrientationInterpolator204.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator204.keyValue = new MFRotation(new float[0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
//IS> <connect nodeField='value_changed' protoField='vl5_rotation_changed'/> <IS
Group191.children[12] = OrientationInterpolator204;

//ROUTE information for SKULLBASE_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator OrientationInterpolator205 = createNode("OrientationInterpolator");
OrientationInterpolator205.DEF = "SKULLBASE_ANIMATOR";
OrientationInterpolator205.key = new MFFloat(new float[0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator205.keyValue = new MFRotation(new float[0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642]);
//IS> <connect nodeField='value_changed' protoField='skullbase_rotation_changed'/> <IS
Group191.children[13] = OrientationInterpolator205;

//ROUTE information for L_SHOULDER_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator OrientationInterpolator206 = createNode("OrientationInterpolator");
OrientationInterpolator206.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator206.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator206.keyValue = new MFRotation(new float[1,0,0,0.1189,-1,-5.928e-7,1.525e-7,0.1861,1,-2.038e-7,-1.257e-7,0.3357,1,0,0,0.1189]);
//IS> <connect nodeField='value_changed' protoField='l_shoulder_rotation_changed'/> <IS
Group191.children[14] = OrientationInterpolator206;

//ROUTE information for L_ELBOW_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator OrientationInterpolator207 = createNode("OrientationInterpolator");
OrientationInterpolator207.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator207.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator207.keyValue = new MFRotation(new float[-1,-1.58298e-7,8.15967e-8,0.0659878,-1,-3.28826e-8,-2.31665e-8,0.488383,-1,0.00000306462,-0.00000311947,0.0177536,-1,-1.58298e-7,8.15967e-8,0.0659878]);
//IS> <connect nodeField='value_changed' protoField='l_elbow_rotation_changed'/> <IS
Group191.children[15] = OrientationInterpolator207;

//ROUTE information for L_WRIST_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator OrientationInterpolator208 = createNode("OrientationInterpolator");
OrientationInterpolator208.DEF = "L_WRIST_ANIMATOR";
OrientationInterpolator208.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator208.keyValue = new MFRotation(new float[0.00000151276,-1,0.0000017724,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0.00000151276,-1,0.0000017724,0.461076]);
//IS> <connect nodeField='value_changed' protoField='l_wrist_rotation_changed'/> <IS
Group191.children[16] = OrientationInterpolator208;

//ROUTE information for R_SHOULDER_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator OrientationInterpolator209 = createNode("OrientationInterpolator");
OrientationInterpolator209.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator209.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator209.keyValue = new MFRotation(new float[-1,-7.689e-7,-1.48e-7,0.09346,1,5.004e-8,2.254e-8,0.3197,-1,-1.104e-7,5.267e-10,0.1564,-1,-7.689e-7,-1.48e-7,0.09346]);
//IS> <connect nodeField='value_changed' protoField='r_shoulder_rotation_changed'/> <IS
Group191.children[17] = OrientationInterpolator209;

//ROUTE information for R_ELBOW_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator OrientationInterpolator210 = createNode("OrientationInterpolator");
OrientationInterpolator210.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator210.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator210.keyValue = new MFRotation(new float[-1,-4.45619e-8,2.70318e-8,0.411508,-1,8.16742e-7,-1.09556e-7,0.0925011,-1,-2.47628e-8,-7.02862e-9,0.572568,-1,-4.45619e-8,2.70318e-8,0.411508]);
//IS> <connect nodeField='value_changed' protoField='r_elbow_rotation_changed'/> <IS
Group191.children[18] = OrientationInterpolator210;

//ROUTE information for R_WRIST_ANIMATOR node: [from TIMER.fraction_changed to set_fraction ]
OrientationInterpolator OrientationInterpolator211 = createNode("OrientationInterpolator");
OrientationInterpolator211.DEF = "R_WRIST_ANIMATOR";
OrientationInterpolator211.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator211.keyValue = new MFRotation(new float[-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]);
//IS> <connect nodeField='value_changed' protoField='r_wrist_rotation_changed'/> <IS
Group191.children[19] = OrientationInterpolator211;

children[3] = Group191;

ROUTE ROUTE212 = createNode("ROUTE");
ROUTE212.fromNode = "TIMER";
ROUTE212.fromField = "fraction_changed";
ROUTE212.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ROUTE212.toField = "set_fraction";
children[4] = ROUTE212;

ROUTE ROUTE213 = createNode("ROUTE");
ROUTE213.fromNode = "TIMER";
ROUTE213.fromField = "fraction_changed";
ROUTE213.toNode = "HUMANOIDROOT_ANIMATOR";
ROUTE213.toField = "set_fraction";
children[5] = ROUTE213;

ROUTE ROUTE214 = createNode("ROUTE");
ROUTE214.fromNode = "TIMER";
ROUTE214.fromField = "fraction_changed";
ROUTE214.toNode = "SACROILIAC_ANIMATOR";
ROUTE214.toField = "set_fraction";
children[6] = ROUTE214;

ROUTE ROUTE215 = createNode("ROUTE");
ROUTE215.fromNode = "TIMER";
ROUTE215.fromField = "fraction_changed";
ROUTE215.toNode = "L_HIP_ANIMATOR";
ROUTE215.toField = "set_fraction";
children[7] = ROUTE215;

ROUTE ROUTE216 = createNode("ROUTE");
ROUTE216.fromNode = "TIMER";
ROUTE216.fromField = "fraction_changed";
ROUTE216.toNode = "L_KNEE_ANIMATOR";
ROUTE216.toField = "set_fraction";
children[8] = ROUTE216;

ROUTE ROUTE217 = createNode("ROUTE");
ROUTE217.fromNode = "TIMER";
ROUTE217.fromField = "fraction_changed";
ROUTE217.toNode = "L_ANKLE_ANIMATOR";
ROUTE217.toField = "set_fraction";
children[9] = ROUTE217;

ROUTE ROUTE218 = createNode("ROUTE");
ROUTE218.fromNode = "TIMER";
ROUTE218.fromField = "fraction_changed";
ROUTE218.toNode = "L_MIDTARSAL_ANIMATOR";
ROUTE218.toField = "set_fraction";
children[10] = ROUTE218;

ROUTE ROUTE219 = createNode("ROUTE");
ROUTE219.fromNode = "TIMER";
ROUTE219.fromField = "fraction_changed";
ROUTE219.toNode = "R_HIP_ANIMATOR";
ROUTE219.toField = "set_fraction";
children[11] = ROUTE219;

ROUTE ROUTE220 = createNode("ROUTE");
ROUTE220.fromNode = "TIMER";
ROUTE220.fromField = "fraction_changed";
ROUTE220.toNode = "R_KNEE_ANIMATOR";
ROUTE220.toField = "set_fraction";
children[12] = ROUTE220;

ROUTE ROUTE221 = createNode("ROUTE");
ROUTE221.fromNode = "TIMER";
ROUTE221.fromField = "fraction_changed";
ROUTE221.toNode = "R_ANKLE_ANIMATOR";
ROUTE221.toField = "set_fraction";
children[13] = ROUTE221;

ROUTE ROUTE222 = createNode("ROUTE");
ROUTE222.fromNode = "TIMER";
ROUTE222.fromField = "fraction_changed";
ROUTE222.toNode = "R_MIDTARSAL_ANIMATOR";
ROUTE222.toField = "set_fraction";
children[14] = ROUTE222;

ROUTE ROUTE223 = createNode("ROUTE");
ROUTE223.fromNode = "TIMER";
ROUTE223.fromField = "fraction_changed";
ROUTE223.toNode = "VL5_ANIMATOR";
ROUTE223.toField = "set_fraction";
children[15] = ROUTE223;

ROUTE ROUTE224 = createNode("ROUTE");
ROUTE224.fromNode = "TIMER";
ROUTE224.fromField = "fraction_changed";
ROUTE224.toNode = "SKULLBASE_ANIMATOR";
ROUTE224.toField = "set_fraction";
children[16] = ROUTE224;

ROUTE ROUTE225 = createNode("ROUTE");
ROUTE225.fromNode = "TIMER";
ROUTE225.fromField = "fraction_changed";
ROUTE225.toNode = "L_SHOULDER_ANIMATOR";
ROUTE225.toField = "set_fraction";
children[17] = ROUTE225;

ROUTE ROUTE226 = createNode("ROUTE");
ROUTE226.fromNode = "TIMER";
ROUTE226.fromField = "fraction_changed";
ROUTE226.toNode = "L_ELBOW_ANIMATOR";
ROUTE226.toField = "set_fraction";
children[18] = ROUTE226;

ROUTE ROUTE227 = createNode("ROUTE");
ROUTE227.fromNode = "TIMER";
ROUTE227.fromField = "fraction_changed";
ROUTE227.toNode = "L_WRIST_ANIMATOR";
ROUTE227.toField = "set_fraction";
children[19] = ROUTE227;

ROUTE ROUTE228 = createNode("ROUTE");
ROUTE228.fromNode = "TIMER";
ROUTE228.fromField = "fraction_changed";
ROUTE228.toNode = "R_SHOULDER_ANIMATOR";
ROUTE228.toField = "set_fraction";
children[20] = ROUTE228;

ROUTE ROUTE229 = createNode("ROUTE");
ROUTE229.fromNode = "TIMER";
ROUTE229.fromField = "fraction_changed";
ROUTE229.toNode = "R_ELBOW_ANIMATOR";
ROUTE229.toField = "set_fraction";
children[21] = ROUTE229;

ROUTE ROUTE230 = createNode("ROUTE");
ROUTE230.fromNode = "TIMER";
ROUTE230.fromField = "fraction_changed";
ROUTE230.toNode = "R_WRIST_ANIMATOR";
ROUTE230.toField = "set_fraction";
children[22] = ROUTE230;

//Animation ROUTEs
ROUTE ROUTE231 = createNode("ROUTE");
ROUTE231.fromField = "value_changed";
ROUTE231.fromNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ROUTE231.toField = "set_translation";
ROUTE231.toNode = "hanim_HumanoidRoot";
children[23] = ROUTE231;

ROUTE ROUTE232 = createNode("ROUTE");
ROUTE232.fromField = "value_changed";
ROUTE232.fromNode = "HUMANOIDROOT_ANIMATOR";
ROUTE232.toField = "set_rotation";
ROUTE232.toNode = "hanim_HumanoidRoot";
children[24] = ROUTE232;

ROUTE ROUTE233 = createNode("ROUTE");
ROUTE233.fromField = "value_changed";
ROUTE233.fromNode = "L_HIP_ANIMATOR";
ROUTE233.toField = "set_rotation";
ROUTE233.toNode = "hanim_l_hip";
children[25] = ROUTE233;

ROUTE ROUTE234 = createNode("ROUTE");
ROUTE234.fromField = "value_changed";
ROUTE234.fromNode = "L_KNEE_ANIMATOR";
ROUTE234.toField = "set_rotation";
ROUTE234.toNode = "hanim_l_knee";
children[26] = ROUTE234;

ROUTE ROUTE235 = createNode("ROUTE");
ROUTE235.fromField = "value_changed";
ROUTE235.fromNode = "L_ANKLE_ANIMATOR";
ROUTE235.toField = "set_rotation";
ROUTE235.toNode = "hanim_l_ankle";
children[27] = ROUTE235;

ROUTE ROUTE236 = createNode("ROUTE");
ROUTE236.fromField = "value_changed";
ROUTE236.fromNode = "L_MIDTARSAL_ANIMATOR";
ROUTE236.toField = "set_rotation";
ROUTE236.toNode = "hanim_l_midtarsal";
children[28] = ROUTE236;

ROUTE ROUTE237 = createNode("ROUTE");
ROUTE237.fromField = "value_changed";
ROUTE237.fromNode = "R_HIP_ANIMATOR";
ROUTE237.toField = "set_rotation";
ROUTE237.toNode = "hanim_r_hip";
children[29] = ROUTE237;

ROUTE ROUTE238 = createNode("ROUTE");
ROUTE238.fromField = "value_changed";
ROUTE238.fromNode = "R_KNEE_ANIMATOR";
ROUTE238.toField = "set_rotation";
ROUTE238.toNode = "hanim_r_knee";
children[30] = ROUTE238;

ROUTE ROUTE239 = createNode("ROUTE");
ROUTE239.fromField = "value_changed";
ROUTE239.fromNode = "R_ANKLE_ANIMATOR";
ROUTE239.toField = "set_rotation";
ROUTE239.toNode = "hanim_r_ankle";
children[31] = ROUTE239;

ROUTE ROUTE240 = createNode("ROUTE");
ROUTE240.fromField = "value_changed";
ROUTE240.fromNode = "R_MIDTARSAL_ANIMATOR";
ROUTE240.toField = "set_rotation";
ROUTE240.toNode = "hanim_r_midtarsal";
children[32] = ROUTE240;

ROUTE ROUTE241 = createNode("ROUTE");
ROUTE241.fromField = "value_changed";
ROUTE241.fromNode = "VL5_ANIMATOR";
ROUTE241.toField = "set_rotation";
ROUTE241.toNode = "hanim_vl5";
children[33] = ROUTE241;

ROUTE ROUTE242 = createNode("ROUTE");
ROUTE242.fromField = "value_changed";
ROUTE242.fromNode = "SKULLBASE_ANIMATOR";
ROUTE242.toField = "set_rotation";
ROUTE242.toNode = "hanim_skullbase";
children[34] = ROUTE242;

ROUTE ROUTE243 = createNode("ROUTE");
ROUTE243.fromField = "value_changed";
ROUTE243.fromNode = "L_SHOULDER_ANIMATOR";
ROUTE243.toField = "set_rotation";
ROUTE243.toNode = "hanim_l_shoulder";
children[35] = ROUTE243;

ROUTE ROUTE244 = createNode("ROUTE");
ROUTE244.fromField = "value_changed";
ROUTE244.fromNode = "L_ELBOW_ANIMATOR";
ROUTE244.toField = "set_rotation";
ROUTE244.toNode = "hanim_l_elbow";
children[36] = ROUTE244;

ROUTE ROUTE245 = createNode("ROUTE");
ROUTE245.fromField = "value_changed";
ROUTE245.fromNode = "L_WRIST_ANIMATOR";
ROUTE245.toField = "set_rotation";
ROUTE245.toNode = "hanim_l_wrist";
children[37] = ROUTE245;

ROUTE ROUTE246 = createNode("ROUTE");
ROUTE246.fromField = "value_changed";
ROUTE246.fromNode = "R_SHOULDER_ANIMATOR";
ROUTE246.toField = "set_rotation";
ROUTE246.toNode = "hanim_r_shoulder";
children[38] = ROUTE246;

ROUTE ROUTE247 = createNode("ROUTE");
ROUTE247.fromField = "value_changed";
ROUTE247.fromNode = "R_ELBOW_ANIMATOR";
ROUTE247.toField = "set_rotation";
ROUTE247.toNode = "hanim_r_elbow";
children[39] = ROUTE247;

ROUTE ROUTE248 = createNode("ROUTE");
ROUTE248.fromField = "value_changed";
ROUTE248.fromNode = "R_WRIST_ANIMATOR";
ROUTE248.toField = "set_rotation";
ROUTE248.toNode = "hanim_r_wrist";
children[40] = ROUTE248;

ROUTE ROUTE249 = createNode("ROUTE");
ROUTE249.fromNode = "TIMER";
ROUTE249.fromField = "fraction_changed";
ROUTE249.toNode = "hanim_skullbase_displacer";
ROUTE249.toField = "weight";
children[41] = ROUTE249;

}

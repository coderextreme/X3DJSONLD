#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "HAnimPoseExample.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Native XML definition of an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "created";
meta4.content = "11 December 2025";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "modified";
meta5.content = "14 December 2025";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "creator";
meta6.content = "Don Brutzman";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "warning";
meta7.content = "under development for X3D 4.1";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "specificationSection";
meta8.content = "HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "specificationUrl";
meta9.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "specificationSection";
meta10.content = "HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "specificationUrl";
meta11.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "specificationSection";
meta12.content = "HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "specificationUrl";
meta13.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "generator";
meta14.content = "X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "identifier";
meta15.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExample.x3d";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "license";
meta16.content = "https://www.web3d.org/x3d/content/examples/license.html";
head1.meta[14] = meta16;

head = head1;

WorldInfo WorldInfo18 = createNode("WorldInfo");
WorldInfo18.DEF = "ModelInfo";
WorldInfo18.info = new MFString(new java.lang.String["Example scene for HAnimPose node"]);
WorldInfo18.title = "HAnimPoseExample.x3d";
children = new MFNode();

children[0] = WorldInfo18;

Background Background19 = createNode("Background");
Background19.skyColor = new MFColor(new float[0.8,0.8,1]);
children[1] = Background19;

NavigationInfo NavigationInfo20 = createNode("NavigationInfo");
children[2] = NavigationInfo20;

Group Group21 = createNode("Group");
Group21.DEF = "HandleInlineLoading";
//Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2
//Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun
Inline Inline22 = createNode("Inline");
Inline22.DEF = "HumanoidInline";
Inline22.description = "remote HAnimHumanoid for IMPORT";
Inline22.url = new MFString(new java.lang.String["../Skin/JoeSkeletonSkinSite.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSite.x3d"]);
Group21.children = new MFNode();

Group21.children[0] = Inline22;

//Note that the following importedDEF must match the EXPORT name found in remote file
IMPORT IMPORT23 = createNode("IMPORT");
IMPORT23.AS = "HumanoidImported";
IMPORT23.importedDEF = "JoeSkeletonSkinSite";
IMPORT23.inlineDEF = "HumanoidInline";
Group21.children[1] = IMPORT23;

LoadSensor LoadSensor24 = createNode("LoadSensor");
LoadSensor24.DEF = "HumanoidInlineLoadSensor";
LoadSensor24.timeOut = 2;
Inline Inline25 = createNode("Inline");
Inline25.USE = "HumanoidInline";
LoadSensor24.children = new MFNode();

LoadSensor24.children[0] = Inline25;

Group21.children[2] = LoadSensor24;

children[3] = Group21;

Viewpoint Viewpoint26 = createNode("Viewpoint");
Viewpoint26.description = "HAnimPose for HumanoidInline IMPORT model";
Viewpoint26.position = new SFVec3f(new float[0,1,4]);
children[4] = Viewpoint26;

//no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc...
Group Group27 = createNode("Group");
Group27.DEF = "InterfaceButtonsGroup";
Transform Transform28 = createNode("Transform");
Transform28.DEF = "DisplayHeader";
Transform28.translation = new SFVec3f(new float[0,2,0]);
Shape Shape29 = createNode("Shape");
Text Text30 = createNode("Text");
Text30.string = new MFString(new java.lang.String["HAnimPosePrototype example implementation"]);
FontStyle FontStyle31 = createNode("FontStyle");
FontStyle31.DEF = "HeaderFont";
FontStyle31.family = new MFString(new java.lang.String["SANS"]);
FontStyle31.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle31.size = 0.15;
FontStyle31.style = "BOLD";
Text30.fontStyle = FontStyle31;

Shape29.geometry = Text30;

Appearance Appearance32 = createNode("Appearance");
Appearance32.DEF = "PoseTextAppearance";
Material Material33 = createNode("Material");
Material33.diffuseColor = new SFColor(new float[0.1,0.5,0.3]);
Appearance32.material = Material33;

Shape29.appearance = Appearance32;

Transform28.child = new undefined();

Transform28.child[0] = Shape29;

Group27.children = new MFNode();

Group27.children[0] = Transform28;

Transform Transform34 = createNode("Transform");
Transform34.DEF = "T_PoseInterface";
Transform34.translation = new SFVec3f(new float[-1.5,1.5,0]);
Shape Shape35 = createNode("Shape");
Text Text36 = createNode("Text");
Text36.string = new MFString(new java.lang.String["\"T\" Pose"]);
FontStyle FontStyle37 = createNode("FontStyle");
FontStyle37.DEF = "SharedFont";
FontStyle37.family = new MFString(new java.lang.String["SANS"]);
FontStyle37.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle37.size = 0.1;
FontStyle37.style = "BOLD";
Text36.fontStyle = FontStyle37;

Shape35.geometry = Text36;

Appearance Appearance38 = createNode("Appearance");
Appearance38.USE = "PoseTextAppearance";
Shape35.appearance = Appearance38;

Transform34.child = new undefined();

Transform34.child[0] = Shape35;

Shape Shape39 = createNode("Shape");
Appearance Appearance40 = createNode("Appearance");
Appearance40.DEF = "TransparentAppearance";
Material Material41 = createNode("Material");
Material41.transparency = 0.8;
Appearance40.material = Material41;

Shape39.appearance = Appearance40;

Box Box42 = createNode("Box");
Box42.size = new SFVec3f(new float[0.45,0.2,0.001]);
Shape39.geometry = Box42;

Transform34.child[1] = Shape39;

TouchSensor TouchSensor43 = createNode("TouchSensor");
TouchSensor43.DEF = "T_PoseTouchSensor";
TouchSensor43.description = "select to move shoulders to \"T\" pose, leave other joints unchanged";
Transform34.children[2] = TouchSensor43;

ROUTE ROUTE44 = createNode("ROUTE");
ROUTE44.fromField = "isActive";
ROUTE44.fromNode = "T_PoseTouchSensor";
ROUTE44.toField = "commencePose";
ROUTE44.toNode = "T_Pose";
Transform34.children[3] = ROUTE44;

Group27.children[1] = Transform34;

Transform Transform45 = createNode("Transform");
Transform45.DEF = "A_PoseInterface";
Transform45.translation = new SFVec3f(new float[-1.5,1,0]);
Shape Shape46 = createNode("Shape");
Text Text47 = createNode("Text");
Text47.string = new MFString(new java.lang.String["\"A\" Pose"]);
FontStyle FontStyle48 = createNode("FontStyle");
FontStyle48.USE = "SharedFont";
Text47.fontStyle = FontStyle48;

Shape46.geometry = Text47;

Appearance Appearance49 = createNode("Appearance");
Appearance49.USE = "PoseTextAppearance";
Shape46.appearance = Appearance49;

Transform45.child = new undefined();

Transform45.child[0] = Shape46;

Shape Shape50 = createNode("Shape");
//Selectable Text transparent Box for easy user selection
Appearance Appearance51 = createNode("Appearance");
Appearance51.USE = "TransparentAppearance";
Shape50.appearance = Appearance51;

Box Box52 = createNode("Box");
Box52.size = new SFVec3f(new float[0.45,0.2,0.001]);
Shape50.geometry = Box52;

Transform45.child[1] = Shape50;

TouchSensor TouchSensor53 = createNode("TouchSensor");
TouchSensor53.DEF = "A_PoseTouchSensor";
TouchSensor53.description = "select to move shoulders to \"A\" pose, leave other joints unchanged";
Transform45.children[2] = TouchSensor53;

ROUTE ROUTE54 = createNode("ROUTE");
ROUTE54.fromField = "isActive";
ROUTE54.fromNode = "A_PoseTouchSensor";
ROUTE54.toField = "commencePose";
ROUTE54.toNode = "A_Pose";
Transform45.children[3] = ROUTE54;

Group27.children[2] = Transform45;

Transform Transform55 = createNode("Transform");
Transform55.DEF = "TouchDown_PoseInterface";
Transform55.translation = new SFVec3f(new float[-1.5,0.5,0]);
Shape Shape56 = createNode("Shape");
Text Text57 = createNode("Text");
Text57.string = new MFString(new java.lang.String["TouchDown Pose"]);
FontStyle FontStyle58 = createNode("FontStyle");
FontStyle58.USE = "SharedFont";
Text57.fontStyle = FontStyle58;

Shape56.geometry = Text57;

Appearance Appearance59 = createNode("Appearance");
Appearance59.USE = "PoseTextAppearance";
Shape56.appearance = Appearance59;

Transform55.child = new undefined();

Transform55.child[0] = Shape56;

Shape Shape60 = createNode("Shape");
//Selectable Text transparent Box for easy user selection
Appearance Appearance61 = createNode("Appearance");
Appearance61.USE = "TransparentAppearance";
Shape60.appearance = Appearance61;

Box Box62 = createNode("Box");
Box62.size = new SFVec3f(new float[0.85,0.2,0.001]);
Shape60.geometry = Box62;

Transform55.child[1] = Shape60;

TouchSensor TouchSensor63 = createNode("TouchSensor");
TouchSensor63.DEF = "TouchDown_PoseTouchSensor";
TouchSensor63.description = "select to transition all joints to TouchDown pose";
Transform55.children[2] = TouchSensor63;

ROUTE ROUTE64 = createNode("ROUTE");
ROUTE64.fromField = "isActive";
ROUTE64.fromNode = "TouchDown_PoseTouchSensor";
ROUTE64.toField = "commencePose";
ROUTE64.toNode = "TouchDown_Pose";
Transform55.children[3] = ROUTE64;

Group27.children[3] = Transform55;

Transform Transform65 = createNode("Transform");
Transform65.DEF = "I_PoseInterface";
Transform65.translation = new SFVec3f(new float[-1.5,0,0]);
Shape Shape66 = createNode("Shape");
Text Text67 = createNode("Text");
Text67.string = new MFString(new java.lang.String["\"I\" Pose"]);
FontStyle FontStyle68 = createNode("FontStyle");
FontStyle68.USE = "SharedFont";
Text67.fontStyle = FontStyle68;

Shape66.geometry = Text67;

Appearance Appearance69 = createNode("Appearance");
Appearance69.USE = "PoseTextAppearance";
Shape66.appearance = Appearance69;

Transform65.child = new undefined();

Transform65.child[0] = Shape66;

Shape Shape70 = createNode("Shape");
//Selectable Text transparent Box for easy user selection
Appearance Appearance71 = createNode("Appearance");
Appearance71.USE = "TransparentAppearance";
Shape70.appearance = Appearance71;

Box Box72 = createNode("Box");
Box72.size = new SFVec3f(new float[0.45,0.2,0.001]);
Shape70.geometry = Box72;

Transform65.child[1] = Shape70;

TouchSensor TouchSensor73 = createNode("TouchSensor");
TouchSensor73.DEF = "I_PoseTouchSensor";
TouchSensor73.description = "select to transition all joints to \"I\" pose";
Transform65.children[2] = TouchSensor73;

ROUTE ROUTE74 = createNode("ROUTE");
ROUTE74.fromField = "isActive";
ROUTE74.fromNode = "I_PoseTouchSensor";
ROUTE74.toField = "commencePose";
ROUTE74.toNode = "I_Pose";
Transform65.children[3] = ROUTE74;

Group27.children[4] = Transform65;

Transform Transform75 = createNode("Transform");
Transform75.DEF = "FaceLeftPoseInterface";
Transform75.translation = new SFVec3f(new float[1.5,1.5,0]);
Shape Shape76 = createNode("Shape");
Text Text77 = createNode("Text");
Text77.string = new MFString(new java.lang.String["Face Left Pose"]);
FontStyle FontStyle78 = createNode("FontStyle");
FontStyle78.USE = "SharedFont";
Text77.fontStyle = FontStyle78;

Shape76.geometry = Text77;

Appearance Appearance79 = createNode("Appearance");
Appearance79.USE = "PoseTextAppearance";
Shape76.appearance = Appearance79;

Transform75.child = new undefined();

Transform75.child[0] = Shape76;

Shape Shape80 = createNode("Shape");
Appearance Appearance81 = createNode("Appearance");
Appearance81.USE = "TransparentAppearance";
Shape80.appearance = Appearance81;

Box Box82 = createNode("Box");
Box82.size = new SFVec3f(new float[0.9,0.2,0.001]);
Shape80.geometry = Box82;

Transform75.child[1] = Shape80;

TouchSensor TouchSensor83 = createNode("TouchSensor");
TouchSensor83.DEF = "FaceLeftTouchSensor";
TouchSensor83.description = "select to rotate body and Face Left, leave other joints unchanged";
Transform75.children[2] = TouchSensor83;

ROUTE ROUTE84 = createNode("ROUTE");
ROUTE84.fromField = "isActive";
ROUTE84.fromNode = "FaceLeftTouchSensor";
ROUTE84.toField = "commencePose";
ROUTE84.toNode = "FaceLeft_Pose";
Transform75.children[3] = ROUTE84;

Group27.children[5] = Transform75;

Transform Transform85 = createNode("Transform");
Transform85.DEF = "FaceRightPoseInterface";
Transform85.translation = new SFVec3f(new float[1.5,1,0]);
Shape Shape86 = createNode("Shape");
Text Text87 = createNode("Text");
Text87.string = new MFString(new java.lang.String["Face Right Pose"]);
FontStyle FontStyle88 = createNode("FontStyle");
FontStyle88.USE = "SharedFont";
Text87.fontStyle = FontStyle88;

Shape86.geometry = Text87;

Appearance Appearance89 = createNode("Appearance");
Appearance89.USE = "PoseTextAppearance";
Shape86.appearance = Appearance89;

Transform85.child = new undefined();

Transform85.child[0] = Shape86;

Shape Shape90 = createNode("Shape");
//Selectable Text transparent Box for easy user selection
Appearance Appearance91 = createNode("Appearance");
Appearance91.USE = "TransparentAppearance";
Shape90.appearance = Appearance91;

Box Box92 = createNode("Box");
Box92.size = new SFVec3f(new float[0.9,0.2,0.001]);
Shape90.geometry = Box92;

Transform85.child[1] = Shape90;

TouchSensor TouchSensor93 = createNode("TouchSensor");
TouchSensor93.DEF = "FaceRightTouchSensor";
TouchSensor93.description = "select to rotate body and Face Right, leave other joints unchanged";
Transform85.children[2] = TouchSensor93;

ROUTE ROUTE94 = createNode("ROUTE");
ROUTE94.fromField = "isActive";
ROUTE94.fromNode = "FaceRightTouchSensor";
ROUTE94.toField = "commencePose";
ROUTE94.toNode = "FaceRight_Pose";
Transform85.children[3] = ROUTE94;

Group27.children[6] = Transform85;

Transform Transform95 = createNode("Transform");
Transform95.DEF = "AnimatePosesInterface";
Transform95.translation = new SFVec3f(new float[1.5,0.5,0]);
Shape Shape96 = createNode("Shape");
Text Text97 = createNode("Text");
Text97.string = new MFString(new java.lang.String["Direct animation","to, from \"I\" Pose"]);
FontStyle FontStyle98 = createNode("FontStyle");
FontStyle98.USE = "SharedFont";
Text97.fontStyle = FontStyle98;

Shape96.geometry = Text97;

Appearance Appearance99 = createNode("Appearance");
Appearance99.DEF = "AnimationTextAppearance";
Material Material100 = createNode("Material");
Material100.diffuseColor = new SFColor(new float[0.1,0.2,0.3]);
Appearance99.material = Material100;

Shape96.appearance = Appearance99;

Transform95.child = new undefined();

Transform95.child[0] = Shape96;

Shape Shape101 = createNode("Shape");
//Selectable Text transparent Box for easy user selection
Appearance Appearance102 = createNode("Appearance");
Appearance102.USE = "TransparentAppearance";
Shape101.appearance = Appearance102;

Box Box103 = createNode("Box");
Box103.size = new SFVec3f(new float[0.9,0.25,0.001]);
Shape101.geometry = Box103;

Transform95.child[1] = Shape101;

TouchSensor TouchSensor104 = createNode("TouchSensor");
TouchSensor104.DEF = "AnimatePosesTouchSensor";
TouchSensor104.description = "select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events";
Transform95.children[2] = TouchSensor104;

//cycleInterval=4 also hard-coded in script execution message
TimeSensor TimeSensor105 = createNode("TimeSensor");
TimeSensor105.DEF = "AnimatePosesClock";
TimeSensor105.cycleInterval = 4;
TimeSensor105.description = "directly animate several poses";
Transform95.children[3] = TimeSensor105;

ScalarInterpolator ScalarInterpolator106 = createNode("ScalarInterpolator");
ScalarInterpolator106.DEF = "AnimatePosesLoopInterpolator";
ScalarInterpolator106.key = new MFFloat(new float[0,0.05,0.45,0.55,0.95,1]);
ScalarInterpolator106.keyValue = new MFFloat(new float[0,0,1,1,0,0]);
Transform95.children[4] = ScalarInterpolator106;

ROUTE ROUTE107 = createNode("ROUTE");
ROUTE107.fromField = "touchTime";
ROUTE107.fromNode = "AnimatePosesTouchSensor";
ROUTE107.toField = "startTime";
ROUTE107.toNode = "AnimatePosesClock";
Transform95.children[5] = ROUTE107;

ROUTE ROUTE108 = createNode("ROUTE");
ROUTE108.fromField = "fraction_changed";
ROUTE108.fromNode = "AnimatePosesClock";
ROUTE108.toField = "set_fraction";
ROUTE108.toNode = "AnimatePosesLoopInterpolator";
Transform95.children[6] = ROUTE108;

ROUTE ROUTE109 = createNode("ROUTE");
ROUTE109.fromField = "value_changed";
ROUTE109.fromNode = "AnimatePosesLoopInterpolator";
ROUTE109.toField = "set_fraction";
ROUTE109.toNode = "I_Pose";
Transform95.children[7] = ROUTE109;

Group27.children[7] = Transform95;

Transform Transform110 = createNode("Transform");
Transform110.DEF = "ResetDefaultPoseInterface";
Transform110.translation = new SFVec3f(new float[1.5,0,0]);
Shape Shape111 = createNode("Shape");
Text Text112 = createNode("Text");
Text112.string = new MFString(new java.lang.String["Reset All Joints","to Default \"I\" Pose"]);
FontStyle FontStyle113 = createNode("FontStyle");
FontStyle113.USE = "SharedFont";
Text112.fontStyle = FontStyle113;

Shape111.geometry = Text112;

Appearance Appearance114 = createNode("Appearance");
Appearance114.USE = "AnimationTextAppearance";
Shape111.appearance = Appearance114;

Transform110.child = new undefined();

Transform110.child[0] = Shape111;

Shape Shape115 = createNode("Shape");
//Selectable Text transparent Box for easy user selection
Appearance Appearance116 = createNode("Appearance");
Appearance116.USE = "TransparentAppearance";
Shape115.appearance = Appearance116;

Box Box117 = createNode("Box");
Box117.size = new SFVec3f(new float[0.9,0.25,0.001]);
Shape115.geometry = Box117;

Transform110.child[1] = Shape115;

TouchSensor TouchSensor118 = createNode("TouchSensor");
TouchSensor118.DEF = "ResetPoseTouchSensor";
TouchSensor118.description = "select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event";
Transform110.children[2] = TouchSensor118;

ROUTE ROUTE119 = createNode("ROUTE");
ROUTE119.fromField = "isActive";
ROUTE119.fromNode = "ResetPoseTouchSensor";
ROUTE119.toField = "resetAllJoints";
ROUTE119.toNode = "FaceLeft_Pose";
Transform110.children[3] = ROUTE119;

Group27.children[8] = Transform110;

children[5] = Group27;

Group Group120 = createNode("Group");
Group120.DEF = "HandleInlineLoadsensorRouting";
ROUTE ROUTE121 = createNode("ROUTE");
ROUTE121.fromField = "isLoaded";
ROUTE121.fromNode = "HumanoidInlineLoadSensor";
ROUTE121.toField = "isLoaded";
ROUTE121.toNode = "A_Pose";
Group120.children = new MFNode();

Group120.children[0] = ROUTE121;

ROUTE ROUTE122 = createNode("ROUTE");
ROUTE122.fromField = "isLoaded";
ROUTE122.fromNode = "HumanoidInlineLoadSensor";
ROUTE122.toField = "isLoaded";
ROUTE122.toNode = "H_Pose";
Group120.children[1] = ROUTE122;

ROUTE ROUTE123 = createNode("ROUTE");
ROUTE123.fromField = "isLoaded";
ROUTE123.fromNode = "HumanoidInlineLoadSensor";
ROUTE123.toField = "isLoaded";
ROUTE123.toNode = "I_Pose";
Group120.children[2] = ROUTE123;

ROUTE ROUTE124 = createNode("ROUTE");
ROUTE124.fromField = "isLoaded";
ROUTE124.fromNode = "HumanoidInlineLoadSensor";
ROUTE124.toField = "isLoaded";
ROUTE124.toNode = "T_Pose";
Group120.children[3] = ROUTE124;

ROUTE ROUTE125 = createNode("ROUTE");
ROUTE125.fromField = "isLoaded";
ROUTE125.fromNode = "HumanoidInlineLoadSensor";
ROUTE125.toField = "isLoaded";
ROUTE125.toNode = "FaceLeft_Pose";
Group120.children[4] = ROUTE125;

ROUTE ROUTE126 = createNode("ROUTE");
ROUTE126.fromField = "isLoaded";
ROUTE126.fromNode = "HumanoidInlineLoadSensor";
ROUTE126.toField = "isLoaded";
ROUTE126.toNode = "FaceRight_Pose";
Group120.children[5] = ROUTE126;

ROUTE ROUTE127 = createNode("ROUTE");
ROUTE127.fromField = "isLoaded";
ROUTE127.fromNode = "HumanoidInlineLoadSensor";
ROUTE127.toField = "isLoaded";
ROUTE127.toNode = "TouchDown_Pose";
Group120.children[6] = ROUTE127;

children[6] = Group120;

HAnimHumanoid HAnimHumanoid128 = createNode("HAnimHumanoid");
HAnimHumanoid128.name = "HumanoidStub";
HAnimHumanoid128.info = new MFString(new java.lang.String["humanoidVersion=2.0"]);
HAnimHumanoid128.version = "2.0";
HAnimPose HAnimPose129 = createNode("HAnimPose");
HAnimPose129.USE = "TouchDown_Pose";
HAnimHumanoid128.children = new MFNode();

HAnimHumanoid128.children[0] = HAnimPose129;

children[7] = HAnimHumanoid128;

}

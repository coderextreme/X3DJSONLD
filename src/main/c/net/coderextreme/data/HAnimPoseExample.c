#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "4.1";
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
HAnimPose HAnimPose27 = createNode("HAnimPose");
HAnimPose27.name = "T";
HAnimPose27.DEF = "T_Pose";
HAnimPose27.description = "arms stretched outward and level similar to letter T";
HAnimPose27.loa = 1;
HAnimPose27.transitionDuration = 1.3;
MetadataString MetadataString28 = createNode("MetadataString");
MetadataString28.name = "metadataTest";
MetadataString28.value = new MFString(new java.lang.String["hello HAnimPose metadata"]);
HAnimPose27.metadata = MetadataString28;

//test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/
HAnimJoint HAnimJoint29 = createNode("HAnimJoint");
HAnimJoint29.name = "l_shoulder";
HAnimJoint29.DEF = "PoseJoint_l_shoulder_1";
HAnimJoint29.description = "left shoulder";
HAnimJoint29.rotation = new SFRotation(new float[0,0,1,1.57]);
HAnimJoint29.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint29.llimit = new MFFloat(new float[0,0,0]);
HAnimPose27.children = new MFNode();

HAnimPose27.children[0] = HAnimJoint29;

HAnimJoint HAnimJoint30 = createNode("HAnimJoint");
HAnimJoint30.name = "r_shoulder";
HAnimJoint30.DEF = "PoseJoint_r_shoulder_1";
HAnimJoint30.description = "right shoulder";
HAnimJoint30.rotation = new SFRotation(new float[0,0,-1,1.57]);
HAnimJoint30.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint30.llimit = new MFFloat(new float[0,0,0]);
HAnimPose27.children[1] = HAnimJoint30;

children[5] = HAnimPose27;

HAnimPose HAnimPose31 = createNode("HAnimPose");
HAnimPose31.name = "A";
HAnimPose31.DEF = "A_Pose";
HAnimPose31.description = "arms stretched outward and downward similar to letter A";
HAnimPose31.loa = 1;
HAnimPose31.transitionDuration = 1.2;
HAnimJoint HAnimJoint32 = createNode("HAnimJoint");
HAnimJoint32.name = "l_shoulder";
HAnimJoint32.DEF = "PoseJoint_l_shoulder";
HAnimJoint32.description = "left shoulder";
HAnimJoint32.rotation = new SFRotation(new float[0,0,1,0.5]);
HAnimJoint32.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint32.llimit = new MFFloat(new float[0,0,0]);
HAnimPose31.children = new MFNode();

HAnimPose31.children[0] = HAnimJoint32;

HAnimJoint HAnimJoint33 = createNode("HAnimJoint");
HAnimJoint33.name = "r_shoulder";
HAnimJoint33.DEF = "PoseJoint_r_shoulder";
HAnimJoint33.description = "right shoulder";
HAnimJoint33.rotation = new SFRotation(new float[0,0,-1,0.5]);
HAnimJoint33.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint33.llimit = new MFFloat(new float[0,0,0]);
HAnimPose31.children[1] = HAnimJoint33;

children[6] = HAnimPose31;

HAnimPose HAnimPose34 = createNode("HAnimPose");
HAnimPose34.name = "TouchDown";
HAnimPose34.DEF = "TouchDown_Pose";
HAnimPose34.description = "arms and legs stretched outward providing a TouchDown gesture";
HAnimPose34.loa = 1;
HAnimPose34.transitionDuration = 1.2;
HAnimJoint HAnimJoint35 = createNode("HAnimJoint");
HAnimJoint35.name = "humanoid_root";
HAnimJoint35.rotation = new SFRotation(new float[0,1,0,-0.698132]);
HAnimJoint35.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint35.llimit = new MFFloat(new float[0,0,0]);
HAnimPose34.children = new MFNode();

HAnimPose34.children[0] = HAnimJoint35;

HAnimJoint HAnimJoint36 = createNode("HAnimJoint");
HAnimJoint36.name = "l_hip";
HAnimJoint36.rotation = new SFRotation(new float[-1,1,1,1]);
HAnimJoint36.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint36.llimit = new MFFloat(new float[0,0,0]);
HAnimPose34.children[1] = HAnimJoint36;

HAnimJoint HAnimJoint37 = createNode("HAnimJoint");
HAnimJoint37.name = "l_knee";
HAnimJoint37.rotation = new SFRotation(new float[1,0,0,1]);
HAnimJoint37.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint37.llimit = new MFFloat(new float[0,0,0]);
HAnimPose34.children[2] = HAnimJoint37;

HAnimJoint HAnimJoint38 = createNode("HAnimJoint");
HAnimJoint38.name = "l_talocrural";
HAnimJoint38.rotation = new SFRotation(new float[-0.2,0,0.1,0.225]);
HAnimJoint38.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint38.llimit = new MFFloat(new float[0,0,0]);
HAnimPose34.children[3] = HAnimJoint38;

HAnimJoint HAnimJoint39 = createNode("HAnimJoint");
HAnimJoint39.name = "r_hip";
HAnimJoint39.rotation = new SFRotation(new float[-1,-1,-1,1]);
HAnimJoint39.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint39.llimit = new MFFloat(new float[0,0,0]);
HAnimPose34.children[4] = HAnimJoint39;

HAnimJoint HAnimJoint40 = createNode("HAnimJoint");
HAnimJoint40.name = "r_knee";
HAnimJoint40.rotation = new SFRotation(new float[1,0,0,1]);
HAnimJoint40.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint40.llimit = new MFFloat(new float[0,0,0]);
HAnimPose34.children[5] = HAnimJoint40;

HAnimJoint HAnimJoint41 = createNode("HAnimJoint");
HAnimJoint41.name = "r_talocrural";
HAnimJoint41.rotation = new SFRotation(new float[-0.2,0,0.1,0.25]);
HAnimJoint41.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint41.llimit = new MFFloat(new float[0,0,0]);
HAnimPose34.children[6] = HAnimJoint41;

HAnimJoint HAnimJoint42 = createNode("HAnimJoint");
HAnimJoint42.name = "vl5";
HAnimJoint42.rotation = new SFRotation(new float[0,0,0.01,0.2]);
HAnimJoint42.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint42.llimit = new MFFloat(new float[0,0,0]);
HAnimPose34.children[7] = HAnimJoint42;

HAnimJoint HAnimJoint43 = createNode("HAnimJoint");
HAnimJoint43.name = "vt10";
HAnimJoint43.rotation = new SFRotation(new float[0,0,0.01,0.1]);
HAnimJoint43.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint43.llimit = new MFFloat(new float[0,0,0]);
HAnimPose34.children[8] = HAnimJoint43;

HAnimJoint HAnimJoint44 = createNode("HAnimJoint");
HAnimJoint44.name = "vc4";
HAnimJoint44.rotation = new SFRotation(new float[0,0,-0.01,0.15]);
HAnimJoint44.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint44.llimit = new MFFloat(new float[0,0,0]);
HAnimPose34.children[9] = HAnimJoint44;

HAnimJoint HAnimJoint45 = createNode("HAnimJoint");
HAnimJoint45.name = "l_shoulder";
HAnimJoint45.rotation = new SFRotation(new float[-1,0.5,1,2]);
HAnimJoint45.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint45.llimit = new MFFloat(new float[0,0,0]);
HAnimPose34.children[10] = HAnimJoint45;

HAnimJoint HAnimJoint46 = createNode("HAnimJoint");
HAnimJoint46.name = "l_elbow";
HAnimJoint46.rotation = new SFRotation(new float[-1,0,0,1]);
HAnimJoint46.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint46.llimit = new MFFloat(new float[0,0,0]);
HAnimPose34.children[11] = HAnimJoint46;

HAnimJoint HAnimJoint47 = createNode("HAnimJoint");
HAnimJoint47.name = "l_radiocarpal";
HAnimJoint47.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint47.llimit = new MFFloat(new float[0,0,0]);
HAnimPose34.children[12] = HAnimJoint47;

HAnimJoint HAnimJoint48 = createNode("HAnimJoint");
HAnimJoint48.name = "r_shoulder";
HAnimJoint48.rotation = new SFRotation(new float[-1,-0.5,-1,2.6]);
HAnimJoint48.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint48.llimit = new MFFloat(new float[0,0,0]);
HAnimPose34.children[13] = HAnimJoint48;

HAnimJoint HAnimJoint49 = createNode("HAnimJoint");
HAnimJoint49.name = "r_elbow";
HAnimJoint49.rotation = new SFRotation(new float[-1,0,0,1]);
HAnimJoint49.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint49.llimit = new MFFloat(new float[0,0,0]);
HAnimPose34.children[14] = HAnimJoint49;

HAnimJoint HAnimJoint50 = createNode("HAnimJoint");
HAnimJoint50.name = "r_radiocarpal";
HAnimJoint50.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint50.llimit = new MFFloat(new float[0,0,0]);
HAnimPose34.children[15] = HAnimJoint50;

children[7] = HAnimPose34;

HAnimPose HAnimPose51 = createNode("HAnimPose");
HAnimPose51.name = "I";
HAnimPose51.DEF = "I_Pose";
HAnimPose51.description = "arms and legs straight down default binding pose for baseline Humanoid";
HAnimPose51.loa = 1;
HAnimPose51.transitionDuration = 1.5;
//not defining any poseJoint HAnimJoint nodes equals the default \"I\" pose
children[8] = HAnimPose51;

HAnimPose HAnimPose52 = createNode("HAnimPose");
HAnimPose52.name = "H";
HAnimPose52.DEF = "H_Pose";
HAnimPose52.description = "TODO experimental pose not yet implemented";
HAnimPose52.enabled = False;
HAnimPose52.transitionDuration = 1.4;
HAnimPose52.loa = -1;
//TODO define poseJoint HAnimJoint nodes
children[9] = HAnimPose52;

HAnimPose HAnimPose53 = createNode("HAnimPose");
HAnimPose53.name = "FaceLeft";
HAnimPose53.DEF = "FaceLeft_Pose";
HAnimPose53.description = "Only modify humanoid_root Joint node to face left";
HAnimPose53.loa = 0;
HAnimPose53.transitionDuration = 1.1;
HAnimJoint HAnimJoint54 = createNode("HAnimJoint");
HAnimJoint54.name = "humanoid_root";
HAnimJoint54.DEF = "FaceLeft_humanoid_root";
HAnimJoint54.description = "Only rotate the model";
HAnimJoint54.rotation = new SFRotation(new float[0,1,0,1.570796]);
HAnimJoint54.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint54.llimit = new MFFloat(new float[0,0,0]);
HAnimPose53.children = new MFNode();

HAnimPose53.children[0] = HAnimJoint54;

children[10] = HAnimPose53;

HAnimPose HAnimPose55 = createNode("HAnimPose");
HAnimPose55.name = "FaceRight";
HAnimPose55.DEF = "FaceRight_Pose";
HAnimPose55.description = "Only modify humanoid_root Joint node to face right";
HAnimPose55.loa = 0;
HAnimPose55.transitionDuration = 1.1;
HAnimJoint HAnimJoint56 = createNode("HAnimJoint");
HAnimJoint56.name = "humanoid_root";
HAnimJoint56.DEF = "FaceRight_humanoid_root";
HAnimJoint56.description = "Only rotate the model";
HAnimJoint56.rotation = new SFRotation(new float[0,1,0,-1.570796]);
HAnimJoint56.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint56.llimit = new MFFloat(new float[0,0,0]);
HAnimPose55.children = new MFNode();

HAnimPose55.children[0] = HAnimJoint56;

children[11] = HAnimPose55;

Group Group57 = createNode("Group");
Group57.DEF = "InterfaceButtonsGroup";
Transform Transform58 = createNode("Transform");
Transform58.DEF = "DisplayHeader";
Transform58.translation = new SFVec3f(new float[0,2,0]);
Shape Shape59 = createNode("Shape");
Text Text60 = createNode("Text");
Text60.string = new MFString(new java.lang.String["HAnimPosePrototype example implementation"]);
FontStyle FontStyle61 = createNode("FontStyle");
FontStyle61.DEF = "HeaderFont";
FontStyle61.family = new MFString(new java.lang.String["SANS"]);
FontStyle61.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle61.size = 0.15;
FontStyle61.style = "BOLD";
Text60.fontStyle = FontStyle61;

Shape59.geometry = Text60;

Appearance Appearance62 = createNode("Appearance");
Appearance62.DEF = "PoseTextAppearance";
Material Material63 = createNode("Material");
Material63.diffuseColor = new SFColor(new float[0.1,0.5,0.3]);
Appearance62.material = Material63;

Shape59.appearance = Appearance62;

Transform58.child = new undefined();

Transform58.child[0] = Shape59;

Group57.children = new MFNode();

Group57.children[0] = Transform58;

Transform Transform64 = createNode("Transform");
Transform64.DEF = "T_PoseInterface";
Transform64.translation = new SFVec3f(new float[-1.5,1.5,0]);
Shape Shape65 = createNode("Shape");
Text Text66 = createNode("Text");
Text66.string = new MFString(new java.lang.String["\"T\" Pose"]);
FontStyle FontStyle67 = createNode("FontStyle");
FontStyle67.DEF = "SharedFont";
FontStyle67.family = new MFString(new java.lang.String["SANS"]);
FontStyle67.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle67.size = 0.1;
FontStyle67.style = "BOLD";
Text66.fontStyle = FontStyle67;

Shape65.geometry = Text66;

Appearance Appearance68 = createNode("Appearance");
Appearance68.USE = "PoseTextAppearance";
Shape65.appearance = Appearance68;

Transform64.child = new undefined();

Transform64.child[0] = Shape65;

Shape Shape69 = createNode("Shape");
Appearance Appearance70 = createNode("Appearance");
Appearance70.DEF = "TransparentAppearance";
Material Material71 = createNode("Material");
Material71.transparency = 0.8;
Appearance70.material = Material71;

Shape69.appearance = Appearance70;

Box Box72 = createNode("Box");
Box72.size = new SFVec3f(new float[0.45,0.2,0.001]);
Shape69.geometry = Box72;

Transform64.child[1] = Shape69;

TouchSensor TouchSensor73 = createNode("TouchSensor");
TouchSensor73.DEF = "T_PoseTouchSensor";
TouchSensor73.description = "select to move shoulders to \"T\" pose, leave other joints unchanged";
Transform64.children[2] = TouchSensor73;

ROUTE ROUTE74 = createNode("ROUTE");
ROUTE74.fromField = "isActive";
ROUTE74.fromNode = "T_PoseTouchSensor";
ROUTE74.toField = "commencePose";
ROUTE74.toNode = "T_Pose";
Transform64.children[3] = ROUTE74;

Group57.children[1] = Transform64;

Transform Transform75 = createNode("Transform");
Transform75.DEF = "A_PoseInterface";
Transform75.translation = new SFVec3f(new float[-1.5,1,0]);
Shape Shape76 = createNode("Shape");
Text Text77 = createNode("Text");
Text77.string = new MFString(new java.lang.String["\"A\" Pose"]);
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
//Selectable Text transparent Box for easy user selection
Appearance Appearance81 = createNode("Appearance");
Appearance81.USE = "TransparentAppearance";
Shape80.appearance = Appearance81;

Box Box82 = createNode("Box");
Box82.size = new SFVec3f(new float[0.45,0.2,0.001]);
Shape80.geometry = Box82;

Transform75.child[1] = Shape80;

TouchSensor TouchSensor83 = createNode("TouchSensor");
TouchSensor83.DEF = "A_PoseTouchSensor";
TouchSensor83.description = "select to move shoulders to \"A\" pose, leave other joints unchanged";
Transform75.children[2] = TouchSensor83;

ROUTE ROUTE84 = createNode("ROUTE");
ROUTE84.fromField = "isActive";
ROUTE84.fromNode = "A_PoseTouchSensor";
ROUTE84.toField = "commencePose";
ROUTE84.toNode = "A_Pose";
Transform75.children[3] = ROUTE84;

Group57.children[2] = Transform75;

Transform Transform85 = createNode("Transform");
Transform85.DEF = "TouchDown_PoseInterface";
Transform85.translation = new SFVec3f(new float[-1.5,0.5,0]);
Shape Shape86 = createNode("Shape");
Text Text87 = createNode("Text");
Text87.string = new MFString(new java.lang.String["TouchDown Pose"]);
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
Box92.size = new SFVec3f(new float[0.85,0.2,0.001]);
Shape90.geometry = Box92;

Transform85.child[1] = Shape90;

TouchSensor TouchSensor93 = createNode("TouchSensor");
TouchSensor93.DEF = "TouchDown_PoseTouchSensor";
TouchSensor93.description = "select to transition all joints to TouchDown pose";
Transform85.children[2] = TouchSensor93;

ROUTE ROUTE94 = createNode("ROUTE");
ROUTE94.fromField = "isActive";
ROUTE94.fromNode = "TouchDown_PoseTouchSensor";
ROUTE94.toField = "commencePose";
ROUTE94.toNode = "TouchDown_Pose";
Transform85.children[3] = ROUTE94;

Group57.children[3] = Transform85;

Transform Transform95 = createNode("Transform");
Transform95.DEF = "I_PoseInterface";
Transform95.translation = new SFVec3f(new float[-1.5,0,0]);
Shape Shape96 = createNode("Shape");
Text Text97 = createNode("Text");
Text97.string = new MFString(new java.lang.String["\"I\" Pose"]);
FontStyle FontStyle98 = createNode("FontStyle");
FontStyle98.USE = "SharedFont";
Text97.fontStyle = FontStyle98;

Shape96.geometry = Text97;

Appearance Appearance99 = createNode("Appearance");
Appearance99.USE = "PoseTextAppearance";
Shape96.appearance = Appearance99;

Transform95.child = new undefined();

Transform95.child[0] = Shape96;

Shape Shape100 = createNode("Shape");
//Selectable Text transparent Box for easy user selection
Appearance Appearance101 = createNode("Appearance");
Appearance101.USE = "TransparentAppearance";
Shape100.appearance = Appearance101;

Box Box102 = createNode("Box");
Box102.size = new SFVec3f(new float[0.45,0.2,0.001]);
Shape100.geometry = Box102;

Transform95.child[1] = Shape100;

TouchSensor TouchSensor103 = createNode("TouchSensor");
TouchSensor103.DEF = "I_PoseTouchSensor";
TouchSensor103.description = "select to transition all joints to \"I\" pose";
Transform95.children[2] = TouchSensor103;

ROUTE ROUTE104 = createNode("ROUTE");
ROUTE104.fromField = "isActive";
ROUTE104.fromNode = "I_PoseTouchSensor";
ROUTE104.toField = "commencePose";
ROUTE104.toNode = "I_Pose";
Transform95.children[3] = ROUTE104;

Group57.children[4] = Transform95;

Transform Transform105 = createNode("Transform");
Transform105.DEF = "FaceLeftPoseInterface";
Transform105.translation = new SFVec3f(new float[1.5,1.5,0]);
Shape Shape106 = createNode("Shape");
Text Text107 = createNode("Text");
Text107.string = new MFString(new java.lang.String["Face Left Pose"]);
FontStyle FontStyle108 = createNode("FontStyle");
FontStyle108.USE = "SharedFont";
Text107.fontStyle = FontStyle108;

Shape106.geometry = Text107;

Appearance Appearance109 = createNode("Appearance");
Appearance109.USE = "PoseTextAppearance";
Shape106.appearance = Appearance109;

Transform105.child = new undefined();

Transform105.child[0] = Shape106;

Shape Shape110 = createNode("Shape");
Appearance Appearance111 = createNode("Appearance");
Appearance111.USE = "TransparentAppearance";
Shape110.appearance = Appearance111;

Box Box112 = createNode("Box");
Box112.size = new SFVec3f(new float[0.9,0.2,0.001]);
Shape110.geometry = Box112;

Transform105.child[1] = Shape110;

TouchSensor TouchSensor113 = createNode("TouchSensor");
TouchSensor113.DEF = "FaceLeftTouchSensor";
TouchSensor113.description = "select to rotate body and Face Left, leave other joints unchanged";
Transform105.children[2] = TouchSensor113;

ROUTE ROUTE114 = createNode("ROUTE");
ROUTE114.fromField = "isActive";
ROUTE114.fromNode = "FaceLeftTouchSensor";
ROUTE114.toField = "commencePose";
ROUTE114.toNode = "FaceLeft_Pose";
Transform105.children[3] = ROUTE114;

Group57.children[5] = Transform105;

Transform Transform115 = createNode("Transform");
Transform115.DEF = "FaceRightPoseInterface";
Transform115.translation = new SFVec3f(new float[1.5,1,0]);
Shape Shape116 = createNode("Shape");
Text Text117 = createNode("Text");
Text117.string = new MFString(new java.lang.String["Face Right Pose"]);
FontStyle FontStyle118 = createNode("FontStyle");
FontStyle118.USE = "SharedFont";
Text117.fontStyle = FontStyle118;

Shape116.geometry = Text117;

Appearance Appearance119 = createNode("Appearance");
Appearance119.USE = "PoseTextAppearance";
Shape116.appearance = Appearance119;

Transform115.child = new undefined();

Transform115.child[0] = Shape116;

Shape Shape120 = createNode("Shape");
//Selectable Text transparent Box for easy user selection
Appearance Appearance121 = createNode("Appearance");
Appearance121.USE = "TransparentAppearance";
Shape120.appearance = Appearance121;

Box Box122 = createNode("Box");
Box122.size = new SFVec3f(new float[0.9,0.2,0.001]);
Shape120.geometry = Box122;

Transform115.child[1] = Shape120;

TouchSensor TouchSensor123 = createNode("TouchSensor");
TouchSensor123.DEF = "FaceRightTouchSensor";
TouchSensor123.description = "select to rotate body and Face Right, leave other joints unchanged";
Transform115.children[2] = TouchSensor123;

ROUTE ROUTE124 = createNode("ROUTE");
ROUTE124.fromField = "isActive";
ROUTE124.fromNode = "FaceRightTouchSensor";
ROUTE124.toField = "commencePose";
ROUTE124.toNode = "FaceRight_Pose";
Transform115.children[3] = ROUTE124;

Group57.children[6] = Transform115;

Transform Transform125 = createNode("Transform");
Transform125.DEF = "AnimatePosesInterface";
Transform125.translation = new SFVec3f(new float[1.5,0.5,0]);
Shape Shape126 = createNode("Shape");
Text Text127 = createNode("Text");
Text127.string = new MFString(new java.lang.String["Direct animation","to, from \"I\" Pose"]);
FontStyle FontStyle128 = createNode("FontStyle");
FontStyle128.USE = "SharedFont";
Text127.fontStyle = FontStyle128;

Shape126.geometry = Text127;

Appearance Appearance129 = createNode("Appearance");
Appearance129.DEF = "AnimationTextAppearance";
Material Material130 = createNode("Material");
Material130.diffuseColor = new SFColor(new float[0.1,0.2,0.3]);
Appearance129.material = Material130;

Shape126.appearance = Appearance129;

Transform125.child = new undefined();

Transform125.child[0] = Shape126;

Shape Shape131 = createNode("Shape");
//Selectable Text transparent Box for easy user selection
Appearance Appearance132 = createNode("Appearance");
Appearance132.USE = "TransparentAppearance";
Shape131.appearance = Appearance132;

Box Box133 = createNode("Box");
Box133.size = new SFVec3f(new float[0.9,0.25,0.001]);
Shape131.geometry = Box133;

Transform125.child[1] = Shape131;

TouchSensor TouchSensor134 = createNode("TouchSensor");
TouchSensor134.DEF = "AnimatePosesTouchSensor";
TouchSensor134.description = "select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events";
Transform125.children[2] = TouchSensor134;

//cycleInterval=4 also hard-coded in script execution message
TimeSensor TimeSensor135 = createNode("TimeSensor");
TimeSensor135.DEF = "AnimatePosesClock";
TimeSensor135.cycleInterval = 4;
TimeSensor135.description = "directly animate several poses";
Transform125.children[3] = TimeSensor135;

ScalarInterpolator ScalarInterpolator136 = createNode("ScalarInterpolator");
ScalarInterpolator136.DEF = "AnimatePosesLoopInterpolator";
ScalarInterpolator136.key = new MFFloat(new float[0,0.05,0.45,0.55,0.95,1]);
ScalarInterpolator136.keyValue = new MFFloat(new float[0,0,1,1,0,0]);
Transform125.children[4] = ScalarInterpolator136;

ROUTE ROUTE137 = createNode("ROUTE");
ROUTE137.fromField = "touchTime";
ROUTE137.fromNode = "AnimatePosesTouchSensor";
ROUTE137.toField = "startTime";
ROUTE137.toNode = "AnimatePosesClock";
Transform125.children[5] = ROUTE137;

ROUTE ROUTE138 = createNode("ROUTE");
ROUTE138.fromField = "fraction_changed";
ROUTE138.fromNode = "AnimatePosesClock";
ROUTE138.toField = "set_fraction";
ROUTE138.toNode = "AnimatePosesLoopInterpolator";
Transform125.children[6] = ROUTE138;

ROUTE ROUTE139 = createNode("ROUTE");
ROUTE139.fromField = "value_changed";
ROUTE139.fromNode = "AnimatePosesLoopInterpolator";
ROUTE139.toField = "set_fraction";
ROUTE139.toNode = "I_Pose";
Transform125.children[7] = ROUTE139;

Group57.children[7] = Transform125;

Transform Transform140 = createNode("Transform");
Transform140.DEF = "ResetDefaultPoseInterface";
Transform140.translation = new SFVec3f(new float[1.5,0,0]);
Shape Shape141 = createNode("Shape");
Text Text142 = createNode("Text");
Text142.string = new MFString(new java.lang.String["Reset All Joints","to Default \"I\" Pose"]);
FontStyle FontStyle143 = createNode("FontStyle");
FontStyle143.USE = "SharedFont";
Text142.fontStyle = FontStyle143;

Shape141.geometry = Text142;

Appearance Appearance144 = createNode("Appearance");
Appearance144.USE = "AnimationTextAppearance";
Shape141.appearance = Appearance144;

Transform140.child = new undefined();

Transform140.child[0] = Shape141;

Shape Shape145 = createNode("Shape");
//Selectable Text transparent Box for easy user selection
Appearance Appearance146 = createNode("Appearance");
Appearance146.USE = "TransparentAppearance";
Shape145.appearance = Appearance146;

Box Box147 = createNode("Box");
Box147.size = new SFVec3f(new float[0.9,0.25,0.001]);
Shape145.geometry = Box147;

Transform140.child[1] = Shape145;

TouchSensor TouchSensor148 = createNode("TouchSensor");
TouchSensor148.DEF = "ResetPoseTouchSensor";
TouchSensor148.description = "select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event";
Transform140.children[2] = TouchSensor148;

ROUTE ROUTE149 = createNode("ROUTE");
ROUTE149.fromField = "isActive";
ROUTE149.fromNode = "ResetPoseTouchSensor";
ROUTE149.toField = "resetAllJoints";
ROUTE149.toNode = "FaceLeft_Pose";
Transform140.children[3] = ROUTE149;

Group57.children[8] = Transform140;

children[12] = Group57;

Group Group150 = createNode("Group");
Group150.DEF = "HandleInlineLoadsensorRouting";
ROUTE ROUTE151 = createNode("ROUTE");
ROUTE151.fromField = "isLoaded";
ROUTE151.fromNode = "HumanoidInlineLoadSensor";
ROUTE151.toField = "isLoaded";
ROUTE151.toNode = "A_Pose";
Group150.children = new MFNode();

Group150.children[0] = ROUTE151;

ROUTE ROUTE152 = createNode("ROUTE");
ROUTE152.fromField = "isLoaded";
ROUTE152.fromNode = "HumanoidInlineLoadSensor";
ROUTE152.toField = "isLoaded";
ROUTE152.toNode = "H_Pose";
Group150.children[1] = ROUTE152;

ROUTE ROUTE153 = createNode("ROUTE");
ROUTE153.fromField = "isLoaded";
ROUTE153.fromNode = "HumanoidInlineLoadSensor";
ROUTE153.toField = "isLoaded";
ROUTE153.toNode = "I_Pose";
Group150.children[2] = ROUTE153;

ROUTE ROUTE154 = createNode("ROUTE");
ROUTE154.fromField = "isLoaded";
ROUTE154.fromNode = "HumanoidInlineLoadSensor";
ROUTE154.toField = "isLoaded";
ROUTE154.toNode = "T_Pose";
Group150.children[3] = ROUTE154;

ROUTE ROUTE155 = createNode("ROUTE");
ROUTE155.fromField = "isLoaded";
ROUTE155.fromNode = "HumanoidInlineLoadSensor";
ROUTE155.toField = "isLoaded";
ROUTE155.toNode = "FaceLeft_Pose";
Group150.children[4] = ROUTE155;

ROUTE ROUTE156 = createNode("ROUTE");
ROUTE156.fromField = "isLoaded";
ROUTE156.fromNode = "HumanoidInlineLoadSensor";
ROUTE156.toField = "isLoaded";
ROUTE156.toNode = "FaceRight_Pose";
Group150.children[5] = ROUTE156;

ROUTE ROUTE157 = createNode("ROUTE");
ROUTE157.fromField = "isLoaded";
ROUTE157.fromNode = "HumanoidInlineLoadSensor";
ROUTE157.toField = "isLoaded";
ROUTE157.toNode = "TouchDown_Pose";
Group150.children[6] = ROUTE157;

children[13] = Group150;

HAnimHumanoid HAnimHumanoid158 = createNode("HAnimHumanoid");
HAnimHumanoid158.name = "HumanoidStub";
HAnimHumanoid158.info = new MFString(new java.lang.String["humanoidVersion=2.0"]);
HAnimHumanoid158.version = "2.0";
HAnimPose HAnimPose159 = createNode("HAnimPose");
HAnimPose159.USE = "A_Pose";
HAnimHumanoid158.children = new MFNode();

HAnimHumanoid158.children[0] = HAnimPose159;

HAnimPose HAnimPose160 = createNode("HAnimPose");
HAnimPose160.USE = "T_Pose";
HAnimHumanoid158.children[1] = HAnimPose160;

HAnimPose HAnimPose161 = createNode("HAnimPose");
HAnimPose161.USE = "I_Pose";
HAnimHumanoid158.children[2] = HAnimPose161;

HAnimPose HAnimPose162 = createNode("HAnimPose");
HAnimPose162.USE = "H_Pose";
HAnimHumanoid158.children[3] = HAnimPose162;

HAnimPose HAnimPose163 = createNode("HAnimPose");
HAnimPose163.USE = "FaceLeft_Pose";
HAnimHumanoid158.children[4] = HAnimPose163;

HAnimPose HAnimPose164 = createNode("HAnimPose");
HAnimPose164.USE = "FaceRight_Pose";
HAnimHumanoid158.children[5] = HAnimPose164;

HAnimPose HAnimPose165 = createNode("HAnimPose");
HAnimPose165.USE = "TouchDown_Pose";
HAnimHumanoid158.children[6] = HAnimPose165;

children[14] = HAnimHumanoid158;

}

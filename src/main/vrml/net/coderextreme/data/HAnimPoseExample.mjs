const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Full"));
scene.addMetaData("title", "HAnimPoseExample.x3d");
scene.addMetaData("description", "Native XML definition of an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.");
scene.addMetaData("created", "11 December 2025");
scene.addMetaData("modified", "14 December 2025");
scene.addMetaData("creator", "Don Brutzman");
scene.addMetaData("warning", "under development for X3D 4.1");
scene.addMetaData("specificationSection", "HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose");
scene.addMetaData("specificationUrl", "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose");
scene.addMetaData("specificationSection", "HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures");
scene.addMetaData("specificationUrl", "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures");
scene.addMetaData("specificationSection", "HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses");
scene.addMetaData("specificationUrl", "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses");
scene.addMetaData("generator", "X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExample.x3d");
scene.addMetaData("license", "https://www.web3d.org/x3d/content/examples/license.html");
await browser .loadComponents (scene);
let WorldInfo18 = browser.currentScene.createNode("WorldInfo");
WorldInfo18.DEF = "ModelInfo";
WorldInfo18.info = new X3D.MFString([new X3D.SFString("Example scene for HAnimPose node")]);
WorldInfo18.title = "HAnimPoseExample.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo18;

let Background19 = browser.currentScene.createNode("Background");
Background19.skyColor = new X3D.MFColor([0.8,0.8,1]);
browser.currentScene.children[1] = Background19;

let NavigationInfo20 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[2] = NavigationInfo20;

let Group21 = browser.currentScene.createNode("Group");
Group21.DEF = "HandleInlineLoading";
//Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2
//Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun
let Inline22 = browser.currentScene.createNode("Inline");
Inline22.DEF = "HumanoidInline";
Inline22.description = "remote HAnimHumanoid for IMPORT";
Inline22.url = new X3D.MFString([new X3D.SFString("../Skin/JoeSkeletonSkinSite.x3d"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSite.x3d")]);
Group21YYY.children = new X3D.MFNode();

Group21ZZZ.children[0] = Inline22;

//Note that the following importedDEF must match the EXPORT name found in remote file
let IMPORT23 = browser.currentScene.createNode("IMPORT");
IMPORT23.AS = "HumanoidImported";
IMPORT23.importedDEF = "JoeSkeletonSkinSite";
IMPORT23.inlineDEF = "HumanoidInline";
Group21ZZZ.children[1] = IMPORT23;

let LoadSensor24 = browser.currentScene.createNode("LoadSensor");
LoadSensor24.DEF = "HumanoidInlineLoadSensor";
LoadSensor24.timeOut = 2;
let Inline25 = browser.currentScene.createNode("Inline");
Inline25.USE = "HumanoidInline";
LoadSensor24YYY.children = new X3D.MFNode();

LoadSensor24ZZZ.children[0] = Inline25;

Group21ZZZ.children[2] = LoadSensor24;

browser.currentScene.children[3] = Group21;

let Viewpoint26 = browser.currentScene.createNode("Viewpoint");
Viewpoint26.description = "HAnimPose for HumanoidInline IMPORT model";
Viewpoint26.position = new X3D.SFVec3f([0,1,4]);
browser.currentScene.children[4] = Viewpoint26;

//no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc...
let Group27 = browser.currentScene.createNode("Group");
Group27.DEF = "InterfaceButtonsGroup";
let Transform28 = browser.currentScene.createNode("Transform");
Transform28.DEF = "DisplayHeader";
Transform28.translation = new X3D.SFVec3f([0,2,0]);
let Shape29 = browser.currentScene.createNode("Shape");
let Text30 = browser.currentScene.createNode("Text");
Text30.string = new X3D.MFString([new X3D.SFString("HAnimPosePrototype example implementation")]);
let FontStyle31 = browser.currentScene.createNode("FontStyle");
FontStyle31.DEF = "HeaderFont";
FontStyle31.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle31.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle31.size = 0.15;
FontStyle31.style = "BOLD";
fontStyle = FontStyle31;

geometry = Text30;

let Appearance32 = browser.currentScene.createNode("Appearance");
Appearance32.DEF = "PoseTextAppearance";
let Material33 = browser.currentScene.createNode("Material");
Material33.diffuseColor = new X3D.SFColor([0.1,0.5,0.3]);
material = Material33;

appearance = Appearance32;

Transform28YYY.child = new X3D.undefined();

Transform28ZZZ.child[0] = Shape29;

Group27YYY.children = new X3D.MFNode();

Group27ZZZ.children[0] = Transform28;

let Transform34 = browser.currentScene.createNode("Transform");
Transform34.DEF = "T_PoseInterface";
Transform34.translation = new X3D.SFVec3f([-1.5,1.5,0]);
let Shape35 = browser.currentScene.createNode("Shape");
let Text36 = browser.currentScene.createNode("Text");
Text36.string = new X3D.MFString([new X3D.SFString("\"T\" Pose")]);
let FontStyle37 = browser.currentScene.createNode("FontStyle");
FontStyle37.DEF = "SharedFont";
FontStyle37.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle37.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle37.size = 0.1;
FontStyle37.style = "BOLD";
fontStyle = FontStyle37;

geometry = Text36;

let Appearance38 = browser.currentScene.createNode("Appearance");
Appearance38.USE = "PoseTextAppearance";
appearance = Appearance38;

Transform34YYY.child = new X3D.undefined();

Transform34ZZZ.child[0] = Shape35;

let Shape39 = browser.currentScene.createNode("Shape");
let Appearance40 = browser.currentScene.createNode("Appearance");
Appearance40.DEF = "TransparentAppearance";
let Material41 = browser.currentScene.createNode("Material");
Material41.transparency = 0.8;
material = Material41;

appearance = Appearance40;

let Box42 = browser.currentScene.createNode("Box");
Box42.size = new X3D.SFVec3f([0.45,0.2,0.001]);
geometry = Box42;

Transform34ZZZ.child[1] = Shape39;

let TouchSensor43 = browser.currentScene.createNode("TouchSensor");
TouchSensor43.DEF = "T_PoseTouchSensor";
TouchSensor43.description = "select to move shoulders to \"T\" pose, leave other joints unchanged";
Transform34ZZZ.children[2] = TouchSensor43;

let ROUTE44 = browser.currentScene.createNode("ROUTE");
ROUTE44.fromField = "isActive";
ROUTE44.fromNode = "T_PoseTouchSensor";
ROUTE44.toField = "commencePose";
ROUTE44.toNode = "T_Pose";
Transform34ZZZ.children[3] = ROUTE44;

Group27ZZZ.children[1] = Transform34;

let Transform45 = browser.currentScene.createNode("Transform");
Transform45.DEF = "A_PoseInterface";
Transform45.translation = new X3D.SFVec3f([-1.5,1,0]);
let Shape46 = browser.currentScene.createNode("Shape");
let Text47 = browser.currentScene.createNode("Text");
Text47.string = new X3D.MFString([new X3D.SFString("\"A\" Pose")]);
let FontStyle48 = browser.currentScene.createNode("FontStyle");
FontStyle48.USE = "SharedFont";
fontStyle = FontStyle48;

geometry = Text47;

let Appearance49 = browser.currentScene.createNode("Appearance");
Appearance49.USE = "PoseTextAppearance";
appearance = Appearance49;

Transform45YYY.child = new X3D.undefined();

Transform45ZZZ.child[0] = Shape46;

let Shape50 = browser.currentScene.createNode("Shape");
//Selectable Text transparent Box for easy user selection
let Appearance51 = browser.currentScene.createNode("Appearance");
Appearance51.USE = "TransparentAppearance";
appearance = Appearance51;

let Box52 = browser.currentScene.createNode("Box");
Box52.size = new X3D.SFVec3f([0.45,0.2,0.001]);
geometry = Box52;

Transform45ZZZ.child[1] = Shape50;

let TouchSensor53 = browser.currentScene.createNode("TouchSensor");
TouchSensor53.DEF = "A_PoseTouchSensor";
TouchSensor53.description = "select to move shoulders to \"A\" pose, leave other joints unchanged";
Transform45ZZZ.children[2] = TouchSensor53;

let ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromField = "isActive";
ROUTE54.fromNode = "A_PoseTouchSensor";
ROUTE54.toField = "commencePose";
ROUTE54.toNode = "A_Pose";
Transform45ZZZ.children[3] = ROUTE54;

Group27ZZZ.children[2] = Transform45;

let Transform55 = browser.currentScene.createNode("Transform");
Transform55.DEF = "TouchDown_PoseInterface";
Transform55.translation = new X3D.SFVec3f([-1.5,0.5,0]);
let Shape56 = browser.currentScene.createNode("Shape");
let Text57 = browser.currentScene.createNode("Text");
Text57.string = new X3D.MFString([new X3D.SFString("TouchDown Pose")]);
let FontStyle58 = browser.currentScene.createNode("FontStyle");
FontStyle58.USE = "SharedFont";
fontStyle = FontStyle58;

geometry = Text57;

let Appearance59 = browser.currentScene.createNode("Appearance");
Appearance59.USE = "PoseTextAppearance";
appearance = Appearance59;

Transform55YYY.child = new X3D.undefined();

Transform55ZZZ.child[0] = Shape56;

let Shape60 = browser.currentScene.createNode("Shape");
//Selectable Text transparent Box for easy user selection
let Appearance61 = browser.currentScene.createNode("Appearance");
Appearance61.USE = "TransparentAppearance";
appearance = Appearance61;

let Box62 = browser.currentScene.createNode("Box");
Box62.size = new X3D.SFVec3f([0.85,0.2,0.001]);
geometry = Box62;

Transform55ZZZ.child[1] = Shape60;

let TouchSensor63 = browser.currentScene.createNode("TouchSensor");
TouchSensor63.DEF = "TouchDown_PoseTouchSensor";
TouchSensor63.description = "select to transition all joints to TouchDown pose";
Transform55ZZZ.children[2] = TouchSensor63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromField = "isActive";
ROUTE64.fromNode = "TouchDown_PoseTouchSensor";
ROUTE64.toField = "commencePose";
ROUTE64.toNode = "TouchDown_Pose";
Transform55ZZZ.children[3] = ROUTE64;

Group27ZZZ.children[3] = Transform55;

let Transform65 = browser.currentScene.createNode("Transform");
Transform65.DEF = "I_PoseInterface";
Transform65.translation = new X3D.SFVec3f([-1.5,0,0]);
let Shape66 = browser.currentScene.createNode("Shape");
let Text67 = browser.currentScene.createNode("Text");
Text67.string = new X3D.MFString([new X3D.SFString("\"I\" Pose")]);
let FontStyle68 = browser.currentScene.createNode("FontStyle");
FontStyle68.USE = "SharedFont";
fontStyle = FontStyle68;

geometry = Text67;

let Appearance69 = browser.currentScene.createNode("Appearance");
Appearance69.USE = "PoseTextAppearance";
appearance = Appearance69;

Transform65YYY.child = new X3D.undefined();

Transform65ZZZ.child[0] = Shape66;

let Shape70 = browser.currentScene.createNode("Shape");
//Selectable Text transparent Box for easy user selection
let Appearance71 = browser.currentScene.createNode("Appearance");
Appearance71.USE = "TransparentAppearance";
appearance = Appearance71;

let Box72 = browser.currentScene.createNode("Box");
Box72.size = new X3D.SFVec3f([0.45,0.2,0.001]);
geometry = Box72;

Transform65ZZZ.child[1] = Shape70;

let TouchSensor73 = browser.currentScene.createNode("TouchSensor");
TouchSensor73.DEF = "I_PoseTouchSensor";
TouchSensor73.description = "select to transition all joints to \"I\" pose";
Transform65ZZZ.children[2] = TouchSensor73;

let ROUTE74 = browser.currentScene.createNode("ROUTE");
ROUTE74.fromField = "isActive";
ROUTE74.fromNode = "I_PoseTouchSensor";
ROUTE74.toField = "commencePose";
ROUTE74.toNode = "I_Pose";
Transform65ZZZ.children[3] = ROUTE74;

Group27ZZZ.children[4] = Transform65;

let Transform75 = browser.currentScene.createNode("Transform");
Transform75.DEF = "FaceLeftPoseInterface";
Transform75.translation = new X3D.SFVec3f([1.5,1.5,0]);
let Shape76 = browser.currentScene.createNode("Shape");
let Text77 = browser.currentScene.createNode("Text");
Text77.string = new X3D.MFString([new X3D.SFString("Face Left Pose")]);
let FontStyle78 = browser.currentScene.createNode("FontStyle");
FontStyle78.USE = "SharedFont";
fontStyle = FontStyle78;

geometry = Text77;

let Appearance79 = browser.currentScene.createNode("Appearance");
Appearance79.USE = "PoseTextAppearance";
appearance = Appearance79;

Transform75YYY.child = new X3D.undefined();

Transform75ZZZ.child[0] = Shape76;

let Shape80 = browser.currentScene.createNode("Shape");
let Appearance81 = browser.currentScene.createNode("Appearance");
Appearance81.USE = "TransparentAppearance";
appearance = Appearance81;

let Box82 = browser.currentScene.createNode("Box");
Box82.size = new X3D.SFVec3f([0.9,0.2,0.001]);
geometry = Box82;

Transform75ZZZ.child[1] = Shape80;

let TouchSensor83 = browser.currentScene.createNode("TouchSensor");
TouchSensor83.DEF = "FaceLeftTouchSensor";
TouchSensor83.description = "select to rotate body and Face Left, leave other joints unchanged";
Transform75ZZZ.children[2] = TouchSensor83;

let ROUTE84 = browser.currentScene.createNode("ROUTE");
ROUTE84.fromField = "isActive";
ROUTE84.fromNode = "FaceLeftTouchSensor";
ROUTE84.toField = "commencePose";
ROUTE84.toNode = "FaceLeft_Pose";
Transform75ZZZ.children[3] = ROUTE84;

Group27ZZZ.children[5] = Transform75;

let Transform85 = browser.currentScene.createNode("Transform");
Transform85.DEF = "FaceRightPoseInterface";
Transform85.translation = new X3D.SFVec3f([1.5,1,0]);
let Shape86 = browser.currentScene.createNode("Shape");
let Text87 = browser.currentScene.createNode("Text");
Text87.string = new X3D.MFString([new X3D.SFString("Face Right Pose")]);
let FontStyle88 = browser.currentScene.createNode("FontStyle");
FontStyle88.USE = "SharedFont";
fontStyle = FontStyle88;

geometry = Text87;

let Appearance89 = browser.currentScene.createNode("Appearance");
Appearance89.USE = "PoseTextAppearance";
appearance = Appearance89;

Transform85YYY.child = new X3D.undefined();

Transform85ZZZ.child[0] = Shape86;

let Shape90 = browser.currentScene.createNode("Shape");
//Selectable Text transparent Box for easy user selection
let Appearance91 = browser.currentScene.createNode("Appearance");
Appearance91.USE = "TransparentAppearance";
appearance = Appearance91;

let Box92 = browser.currentScene.createNode("Box");
Box92.size = new X3D.SFVec3f([0.9,0.2,0.001]);
geometry = Box92;

Transform85ZZZ.child[1] = Shape90;

let TouchSensor93 = browser.currentScene.createNode("TouchSensor");
TouchSensor93.DEF = "FaceRightTouchSensor";
TouchSensor93.description = "select to rotate body and Face Right, leave other joints unchanged";
Transform85ZZZ.children[2] = TouchSensor93;

let ROUTE94 = browser.currentScene.createNode("ROUTE");
ROUTE94.fromField = "isActive";
ROUTE94.fromNode = "FaceRightTouchSensor";
ROUTE94.toField = "commencePose";
ROUTE94.toNode = "FaceRight_Pose";
Transform85ZZZ.children[3] = ROUTE94;

Group27ZZZ.children[6] = Transform85;

let Transform95 = browser.currentScene.createNode("Transform");
Transform95.DEF = "AnimatePosesInterface";
Transform95.translation = new X3D.SFVec3f([1.5,0.5,0]);
let Shape96 = browser.currentScene.createNode("Shape");
let Text97 = browser.currentScene.createNode("Text");
Text97.string = new X3D.MFString([new X3D.SFString("Direct animation"), new X3D.SFString("to, from \"I\" Pose")]);
let FontStyle98 = browser.currentScene.createNode("FontStyle");
FontStyle98.USE = "SharedFont";
fontStyle = FontStyle98;

geometry = Text97;

let Appearance99 = browser.currentScene.createNode("Appearance");
Appearance99.DEF = "AnimationTextAppearance";
let Material100 = browser.currentScene.createNode("Material");
Material100.diffuseColor = new X3D.SFColor([0.1,0.2,0.3]);
material = Material100;

appearance = Appearance99;

Transform95YYY.child = new X3D.undefined();

Transform95ZZZ.child[0] = Shape96;

let Shape101 = browser.currentScene.createNode("Shape");
//Selectable Text transparent Box for easy user selection
let Appearance102 = browser.currentScene.createNode("Appearance");
Appearance102.USE = "TransparentAppearance";
appearance = Appearance102;

let Box103 = browser.currentScene.createNode("Box");
Box103.size = new X3D.SFVec3f([0.9,0.25,0.001]);
geometry = Box103;

Transform95ZZZ.child[1] = Shape101;

let TouchSensor104 = browser.currentScene.createNode("TouchSensor");
TouchSensor104.DEF = "AnimatePosesTouchSensor";
TouchSensor104.description = "select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events";
Transform95ZZZ.children[2] = TouchSensor104;

//cycleInterval=4 also hard-coded in script execution message
let TimeSensor105 = browser.currentScene.createNode("TimeSensor");
TimeSensor105.DEF = "AnimatePosesClock";
TimeSensor105.cycleInterval = 4;
TimeSensor105.description = "directly animate several poses";
Transform95ZZZ.children[3] = TimeSensor105;

let ScalarInterpolator106 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator106.DEF = "AnimatePosesLoopInterpolator";
ScalarInterpolator106.key = new X3D.MFFloat([0,0.05,0.45,0.55,0.95,1]);
ScalarInterpolator106.keyValue = new X3D.MFFloat([0,0,1,1,0,0]);
Transform95ZZZ.children[4] = ScalarInterpolator106;

let ROUTE107 = browser.currentScene.createNode("ROUTE");
ROUTE107.fromField = "touchTime";
ROUTE107.fromNode = "AnimatePosesTouchSensor";
ROUTE107.toField = "startTime";
ROUTE107.toNode = "AnimatePosesClock";
Transform95ZZZ.children[5] = ROUTE107;

let ROUTE108 = browser.currentScene.createNode("ROUTE");
ROUTE108.fromField = "fraction_changed";
ROUTE108.fromNode = "AnimatePosesClock";
ROUTE108.toField = "set_fraction";
ROUTE108.toNode = "AnimatePosesLoopInterpolator";
Transform95ZZZ.children[6] = ROUTE108;

let ROUTE109 = browser.currentScene.createNode("ROUTE");
ROUTE109.fromField = "value_changed";
ROUTE109.fromNode = "AnimatePosesLoopInterpolator";
ROUTE109.toField = "set_fraction";
ROUTE109.toNode = "I_Pose";
Transform95ZZZ.children[7] = ROUTE109;

Group27ZZZ.children[7] = Transform95;

let Transform110 = browser.currentScene.createNode("Transform");
Transform110.DEF = "ResetDefaultPoseInterface";
Transform110.translation = new X3D.SFVec3f([1.5,0,0]);
let Shape111 = browser.currentScene.createNode("Shape");
let Text112 = browser.currentScene.createNode("Text");
Text112.string = new X3D.MFString([new X3D.SFString("Reset All Joints"), new X3D.SFString("to Default \"I\" Pose")]);
let FontStyle113 = browser.currentScene.createNode("FontStyle");
FontStyle113.USE = "SharedFont";
fontStyle = FontStyle113;

geometry = Text112;

let Appearance114 = browser.currentScene.createNode("Appearance");
Appearance114.USE = "AnimationTextAppearance";
appearance = Appearance114;

Transform110YYY.child = new X3D.undefined();

Transform110ZZZ.child[0] = Shape111;

let Shape115 = browser.currentScene.createNode("Shape");
//Selectable Text transparent Box for easy user selection
let Appearance116 = browser.currentScene.createNode("Appearance");
Appearance116.USE = "TransparentAppearance";
appearance = Appearance116;

let Box117 = browser.currentScene.createNode("Box");
Box117.size = new X3D.SFVec3f([0.9,0.25,0.001]);
geometry = Box117;

Transform110ZZZ.child[1] = Shape115;

let TouchSensor118 = browser.currentScene.createNode("TouchSensor");
TouchSensor118.DEF = "ResetPoseTouchSensor";
TouchSensor118.description = "select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event";
Transform110ZZZ.children[2] = TouchSensor118;

let ROUTE119 = browser.currentScene.createNode("ROUTE");
ROUTE119.fromField = "isActive";
ROUTE119.fromNode = "ResetPoseTouchSensor";
ROUTE119.toField = "resetAllJoints";
ROUTE119.toNode = "FaceLeft_Pose";
Transform110ZZZ.children[3] = ROUTE119;

Group27ZZZ.children[8] = Transform110;

browser.currentScene.children[5] = Group27;

let Group120 = browser.currentScene.createNode("Group");
Group120.DEF = "HandleInlineLoadsensorRouting";
let ROUTE121 = browser.currentScene.createNode("ROUTE");
ROUTE121.fromField = "isLoaded";
ROUTE121.fromNode = "HumanoidInlineLoadSensor";
ROUTE121.toField = "isLoaded";
ROUTE121.toNode = "A_Pose";
Group120YYY.children = new X3D.MFNode();

Group120ZZZ.children[0] = ROUTE121;

let ROUTE122 = browser.currentScene.createNode("ROUTE");
ROUTE122.fromField = "isLoaded";
ROUTE122.fromNode = "HumanoidInlineLoadSensor";
ROUTE122.toField = "isLoaded";
ROUTE122.toNode = "H_Pose";
Group120ZZZ.children[1] = ROUTE122;

let ROUTE123 = browser.currentScene.createNode("ROUTE");
ROUTE123.fromField = "isLoaded";
ROUTE123.fromNode = "HumanoidInlineLoadSensor";
ROUTE123.toField = "isLoaded";
ROUTE123.toNode = "I_Pose";
Group120ZZZ.children[2] = ROUTE123;

let ROUTE124 = browser.currentScene.createNode("ROUTE");
ROUTE124.fromField = "isLoaded";
ROUTE124.fromNode = "HumanoidInlineLoadSensor";
ROUTE124.toField = "isLoaded";
ROUTE124.toNode = "T_Pose";
Group120ZZZ.children[3] = ROUTE124;

let ROUTE125 = browser.currentScene.createNode("ROUTE");
ROUTE125.fromField = "isLoaded";
ROUTE125.fromNode = "HumanoidInlineLoadSensor";
ROUTE125.toField = "isLoaded";
ROUTE125.toNode = "FaceLeft_Pose";
Group120ZZZ.children[4] = ROUTE125;

let ROUTE126 = browser.currentScene.createNode("ROUTE");
ROUTE126.fromField = "isLoaded";
ROUTE126.fromNode = "HumanoidInlineLoadSensor";
ROUTE126.toField = "isLoaded";
ROUTE126.toNode = "FaceRight_Pose";
Group120ZZZ.children[5] = ROUTE126;

let ROUTE127 = browser.currentScene.createNode("ROUTE");
ROUTE127.fromField = "isLoaded";
ROUTE127.fromNode = "HumanoidInlineLoadSensor";
ROUTE127.toField = "isLoaded";
ROUTE127.toNode = "TouchDown_Pose";
Group120ZZZ.children[6] = ROUTE127;

browser.currentScene.children[6] = Group120;

let HAnimHumanoid128 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid128.name = "HumanoidStub";
HAnimHumanoid128.info = new X3D.MFString([new X3D.SFString("humanoidVersion=2.0")]);
HAnimHumanoid128.version = "2.0";
let HAnimPose129 = browser.currentScene.createNode("HAnimPose");
HAnimPose129.USE = "TouchDown_Pose";
HAnimHumanoid128.children = new X3D.MFNode();

HAnimHumanoid128XXX.children[0] = HAnimPose129;

browser.currentScene.children[7] = HAnimHumanoid128;

}
main ();

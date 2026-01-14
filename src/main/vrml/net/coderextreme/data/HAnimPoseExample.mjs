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
let HAnimPose27 = browser.currentScene.createNode("HAnimPose");
HAnimPose27.name = "T";
HAnimPose27.DEF = "T_Pose";
HAnimPose27.description = "arms stretched outward and level similar to letter T";
HAnimPose27.loa = 1;
HAnimPose27.transitionDuration = 1.3;
let MetadataString28 = browser.currentScene.createNode("MetadataString");
MetadataString28.name = "metadataTest";
MetadataString28.value = new X3D.MFString([new X3D.SFString("hello HAnimPose metadata")]);
metadata = MetadataString28;

//test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/
let HAnimJoint29 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint29.name = "l_shoulder";
HAnimJoint29.DEF = "PoseJoint_l_shoulder_1";
HAnimJoint29.description = "left shoulder";
HAnimJoint29.rotation = new X3D.SFRotation([0,0,1,1.57]);
HAnimJoint29.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint29.llimit = new X3D.MFFloat([0,0,0]);
HAnimPose27YYY.children = new X3D.MFNode();

HAnimPose27ZZZ.children[0] = HAnimJoint29;

let HAnimJoint30 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint30.name = "r_shoulder";
HAnimJoint30.DEF = "PoseJoint_r_shoulder_1";
HAnimJoint30.description = "right shoulder";
HAnimJoint30.rotation = new X3D.SFRotation([0,0,-1,1.57]);
HAnimJoint30.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint30.llimit = new X3D.MFFloat([0,0,0]);
HAnimPose27ZZZ.children[1] = HAnimJoint30;

browser.currentScene.children[5] = HAnimPose27;

let HAnimPose31 = browser.currentScene.createNode("HAnimPose");
HAnimPose31.name = "A";
HAnimPose31.DEF = "A_Pose";
HAnimPose31.description = "arms stretched outward and downward similar to letter A";
HAnimPose31.loa = 1;
HAnimPose31.transitionDuration = 1.2;
let HAnimJoint32 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint32.name = "l_shoulder";
HAnimJoint32.DEF = "PoseJoint_l_shoulder";
HAnimJoint32.description = "left shoulder";
HAnimJoint32.rotation = new X3D.SFRotation([0,0,1,0.5]);
HAnimJoint32.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint32.llimit = new X3D.MFFloat([0,0,0]);
HAnimPose31YYY.children = new X3D.MFNode();

HAnimPose31ZZZ.children[0] = HAnimJoint32;

let HAnimJoint33 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint33.name = "r_shoulder";
HAnimJoint33.DEF = "PoseJoint_r_shoulder";
HAnimJoint33.description = "right shoulder";
HAnimJoint33.rotation = new X3D.SFRotation([0,0,-1,0.5]);
HAnimJoint33.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint33.llimit = new X3D.MFFloat([0,0,0]);
HAnimPose31ZZZ.children[1] = HAnimJoint33;

browser.currentScene.children[6] = HAnimPose31;

let HAnimPose34 = browser.currentScene.createNode("HAnimPose");
HAnimPose34.name = "TouchDown";
HAnimPose34.DEF = "TouchDown_Pose";
HAnimPose34.description = "arms and legs stretched outward providing a TouchDown gesture";
HAnimPose34.loa = 1;
HAnimPose34.transitionDuration = 1.2;
let HAnimJoint35 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint35.name = "humanoid_root";
HAnimJoint35.rotation = new X3D.SFRotation([0,1,0,-0.698132]);
HAnimJoint35.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint35.llimit = new X3D.MFFloat([0,0,0]);
HAnimPose34YYY.children = new X3D.MFNode();

HAnimPose34ZZZ.children[0] = HAnimJoint35;

let HAnimJoint36 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint36.name = "l_hip";
HAnimJoint36.rotation = new X3D.SFRotation([-1,1,1,1]);
HAnimJoint36.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint36.llimit = new X3D.MFFloat([0,0,0]);
HAnimPose34ZZZ.children[1] = HAnimJoint36;

let HAnimJoint37 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint37.name = "l_knee";
HAnimJoint37.rotation = new X3D.SFRotation([1,0,0,1]);
HAnimJoint37.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint37.llimit = new X3D.MFFloat([0,0,0]);
HAnimPose34ZZZ.children[2] = HAnimJoint37;

let HAnimJoint38 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint38.name = "l_talocrural";
HAnimJoint38.rotation = new X3D.SFRotation([-0.2,0,0.1,0.225]);
HAnimJoint38.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint38.llimit = new X3D.MFFloat([0,0,0]);
HAnimPose34ZZZ.children[3] = HAnimJoint38;

let HAnimJoint39 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint39.name = "r_hip";
HAnimJoint39.rotation = new X3D.SFRotation([-1,-1,-1,1]);
HAnimJoint39.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint39.llimit = new X3D.MFFloat([0,0,0]);
HAnimPose34ZZZ.children[4] = HAnimJoint39;

let HAnimJoint40 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint40.name = "r_knee";
HAnimJoint40.rotation = new X3D.SFRotation([1,0,0,1]);
HAnimJoint40.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint40.llimit = new X3D.MFFloat([0,0,0]);
HAnimPose34ZZZ.children[5] = HAnimJoint40;

let HAnimJoint41 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint41.name = "r_talocrural";
HAnimJoint41.rotation = new X3D.SFRotation([-0.2,0,0.1,0.25]);
HAnimJoint41.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint41.llimit = new X3D.MFFloat([0,0,0]);
HAnimPose34ZZZ.children[6] = HAnimJoint41;

let HAnimJoint42 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint42.name = "vl5";
HAnimJoint42.rotation = new X3D.SFRotation([0,0,0.01,0.2]);
HAnimJoint42.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint42.llimit = new X3D.MFFloat([0,0,0]);
HAnimPose34ZZZ.children[7] = HAnimJoint42;

let HAnimJoint43 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint43.name = "vt10";
HAnimJoint43.rotation = new X3D.SFRotation([0,0,0.01,0.1]);
HAnimJoint43.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint43.llimit = new X3D.MFFloat([0,0,0]);
HAnimPose34ZZZ.children[8] = HAnimJoint43;

let HAnimJoint44 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint44.name = "vc4";
HAnimJoint44.rotation = new X3D.SFRotation([0,0,-0.01,0.15]);
HAnimJoint44.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint44.llimit = new X3D.MFFloat([0,0,0]);
HAnimPose34ZZZ.children[9] = HAnimJoint44;

let HAnimJoint45 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint45.name = "l_shoulder";
HAnimJoint45.rotation = new X3D.SFRotation([-1,0.5,1,2]);
HAnimJoint45.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint45.llimit = new X3D.MFFloat([0,0,0]);
HAnimPose34ZZZ.children[10] = HAnimJoint45;

let HAnimJoint46 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint46.name = "l_elbow";
HAnimJoint46.rotation = new X3D.SFRotation([-1,0,0,1]);
HAnimJoint46.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint46.llimit = new X3D.MFFloat([0,0,0]);
HAnimPose34ZZZ.children[11] = HAnimJoint46;

let HAnimJoint47 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint47.name = "l_radiocarpal";
HAnimJoint47.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint47.llimit = new X3D.MFFloat([0,0,0]);
HAnimPose34ZZZ.children[12] = HAnimJoint47;

let HAnimJoint48 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint48.name = "r_shoulder";
HAnimJoint48.rotation = new X3D.SFRotation([-1,-0.5,-1,2.6]);
HAnimJoint48.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint48.llimit = new X3D.MFFloat([0,0,0]);
HAnimPose34ZZZ.children[13] = HAnimJoint48;

let HAnimJoint49 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint49.name = "r_elbow";
HAnimJoint49.rotation = new X3D.SFRotation([-1,0,0,1]);
HAnimJoint49.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint49.llimit = new X3D.MFFloat([0,0,0]);
HAnimPose34ZZZ.children[14] = HAnimJoint49;

let HAnimJoint50 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint50.name = "r_radiocarpal";
HAnimJoint50.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint50.llimit = new X3D.MFFloat([0,0,0]);
HAnimPose34ZZZ.children[15] = HAnimJoint50;

browser.currentScene.children[7] = HAnimPose34;

let HAnimPose51 = browser.currentScene.createNode("HAnimPose");
HAnimPose51.name = "I";
HAnimPose51.DEF = "I_Pose";
HAnimPose51.description = "arms and legs straight down default binding pose for baseline Humanoid";
HAnimPose51.loa = 1;
HAnimPose51.transitionDuration = 1.5;
//not defining any poseJoint HAnimJoint nodes equals the default \"I\" pose
browser.currentScene.children[8] = HAnimPose51;

let HAnimPose52 = browser.currentScene.createNode("HAnimPose");
HAnimPose52.name = "H";
HAnimPose52.DEF = "H_Pose";
HAnimPose52.description = "TODO experimental pose not yet implemented";
HAnimPose52.enabled = False;
HAnimPose52.transitionDuration = 1.4;
HAnimPose52.loa = -1;
//TODO define poseJoint HAnimJoint nodes
browser.currentScene.children[9] = HAnimPose52;

let HAnimPose53 = browser.currentScene.createNode("HAnimPose");
HAnimPose53.name = "FaceLeft";
HAnimPose53.DEF = "FaceLeft_Pose";
HAnimPose53.description = "Only modify humanoid_root Joint node to face left";
HAnimPose53.loa = 0;
HAnimPose53.transitionDuration = 1.1;
let HAnimJoint54 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint54.name = "humanoid_root";
HAnimJoint54.DEF = "FaceLeft_humanoid_root";
HAnimJoint54.description = "Only rotate the model";
HAnimJoint54.rotation = new X3D.SFRotation([0,1,0,1.570796]);
HAnimJoint54.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint54.llimit = new X3D.MFFloat([0,0,0]);
HAnimPose53YYY.children = new X3D.MFNode();

HAnimPose53ZZZ.children[0] = HAnimJoint54;

browser.currentScene.children[10] = HAnimPose53;

let HAnimPose55 = browser.currentScene.createNode("HAnimPose");
HAnimPose55.name = "FaceRight";
HAnimPose55.DEF = "FaceRight_Pose";
HAnimPose55.description = "Only modify humanoid_root Joint node to face right";
HAnimPose55.loa = 0;
HAnimPose55.transitionDuration = 1.1;
let HAnimJoint56 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint56.name = "humanoid_root";
HAnimJoint56.DEF = "FaceRight_humanoid_root";
HAnimJoint56.description = "Only rotate the model";
HAnimJoint56.rotation = new X3D.SFRotation([0,1,0,-1.570796]);
HAnimJoint56.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint56.llimit = new X3D.MFFloat([0,0,0]);
HAnimPose55YYY.children = new X3D.MFNode();

HAnimPose55ZZZ.children[0] = HAnimJoint56;

browser.currentScene.children[11] = HAnimPose55;

let Group57 = browser.currentScene.createNode("Group");
Group57.DEF = "InterfaceButtonsGroup";
let Transform58 = browser.currentScene.createNode("Transform");
Transform58.DEF = "DisplayHeader";
Transform58.translation = new X3D.SFVec3f([0,2,0]);
let Shape59 = browser.currentScene.createNode("Shape");
let Text60 = browser.currentScene.createNode("Text");
Text60.string = new X3D.MFString([new X3D.SFString("HAnimPosePrototype example implementation")]);
let FontStyle61 = browser.currentScene.createNode("FontStyle");
FontStyle61.DEF = "HeaderFont";
FontStyle61.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle61.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle61.size = 0.15;
FontStyle61.style = "BOLD";
fontStyle = FontStyle61;

geometry = Text60;

let Appearance62 = browser.currentScene.createNode("Appearance");
Appearance62.DEF = "PoseTextAppearance";
let Material63 = browser.currentScene.createNode("Material");
Material63.diffuseColor = new X3D.SFColor([0.1,0.5,0.3]);
material = Material63;

appearance = Appearance62;

Transform58YYY.child = new X3D.undefined();

Transform58ZZZ.child[0] = Shape59;

Group57YYY.children = new X3D.MFNode();

Group57ZZZ.children[0] = Transform58;

let Transform64 = browser.currentScene.createNode("Transform");
Transform64.DEF = "T_PoseInterface";
Transform64.translation = new X3D.SFVec3f([-1.5,1.5,0]);
let Shape65 = browser.currentScene.createNode("Shape");
let Text66 = browser.currentScene.createNode("Text");
Text66.string = new X3D.MFString([new X3D.SFString("\"T\" Pose")]);
let FontStyle67 = browser.currentScene.createNode("FontStyle");
FontStyle67.DEF = "SharedFont";
FontStyle67.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle67.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle67.size = 0.1;
FontStyle67.style = "BOLD";
fontStyle = FontStyle67;

geometry = Text66;

let Appearance68 = browser.currentScene.createNode("Appearance");
Appearance68.USE = "PoseTextAppearance";
appearance = Appearance68;

Transform64YYY.child = new X3D.undefined();

Transform64ZZZ.child[0] = Shape65;

let Shape69 = browser.currentScene.createNode("Shape");
let Appearance70 = browser.currentScene.createNode("Appearance");
Appearance70.DEF = "TransparentAppearance";
let Material71 = browser.currentScene.createNode("Material");
Material71.transparency = 0.8;
material = Material71;

appearance = Appearance70;

let Box72 = browser.currentScene.createNode("Box");
Box72.size = new X3D.SFVec3f([0.45,0.2,0.001]);
geometry = Box72;

Transform64ZZZ.child[1] = Shape69;

let TouchSensor73 = browser.currentScene.createNode("TouchSensor");
TouchSensor73.DEF = "T_PoseTouchSensor";
TouchSensor73.description = "select to move shoulders to \"T\" pose, leave other joints unchanged";
Transform64ZZZ.children[2] = TouchSensor73;

let ROUTE74 = browser.currentScene.createNode("ROUTE");
ROUTE74.fromField = "isActive";
ROUTE74.fromNode = "T_PoseTouchSensor";
ROUTE74.toField = "commencePose";
ROUTE74.toNode = "T_Pose";
Transform64ZZZ.children[3] = ROUTE74;

Group57ZZZ.children[1] = Transform64;

let Transform75 = browser.currentScene.createNode("Transform");
Transform75.DEF = "A_PoseInterface";
Transform75.translation = new X3D.SFVec3f([-1.5,1,0]);
let Shape76 = browser.currentScene.createNode("Shape");
let Text77 = browser.currentScene.createNode("Text");
Text77.string = new X3D.MFString([new X3D.SFString("\"A\" Pose")]);
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
//Selectable Text transparent Box for easy user selection
let Appearance81 = browser.currentScene.createNode("Appearance");
Appearance81.USE = "TransparentAppearance";
appearance = Appearance81;

let Box82 = browser.currentScene.createNode("Box");
Box82.size = new X3D.SFVec3f([0.45,0.2,0.001]);
geometry = Box82;

Transform75ZZZ.child[1] = Shape80;

let TouchSensor83 = browser.currentScene.createNode("TouchSensor");
TouchSensor83.DEF = "A_PoseTouchSensor";
TouchSensor83.description = "select to move shoulders to \"A\" pose, leave other joints unchanged";
Transform75ZZZ.children[2] = TouchSensor83;

let ROUTE84 = browser.currentScene.createNode("ROUTE");
ROUTE84.fromField = "isActive";
ROUTE84.fromNode = "A_PoseTouchSensor";
ROUTE84.toField = "commencePose";
ROUTE84.toNode = "A_Pose";
Transform75ZZZ.children[3] = ROUTE84;

Group57ZZZ.children[2] = Transform75;

let Transform85 = browser.currentScene.createNode("Transform");
Transform85.DEF = "TouchDown_PoseInterface";
Transform85.translation = new X3D.SFVec3f([-1.5,0.5,0]);
let Shape86 = browser.currentScene.createNode("Shape");
let Text87 = browser.currentScene.createNode("Text");
Text87.string = new X3D.MFString([new X3D.SFString("TouchDown Pose")]);
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
Box92.size = new X3D.SFVec3f([0.85,0.2,0.001]);
geometry = Box92;

Transform85ZZZ.child[1] = Shape90;

let TouchSensor93 = browser.currentScene.createNode("TouchSensor");
TouchSensor93.DEF = "TouchDown_PoseTouchSensor";
TouchSensor93.description = "select to transition all joints to TouchDown pose";
Transform85ZZZ.children[2] = TouchSensor93;

let ROUTE94 = browser.currentScene.createNode("ROUTE");
ROUTE94.fromField = "isActive";
ROUTE94.fromNode = "TouchDown_PoseTouchSensor";
ROUTE94.toField = "commencePose";
ROUTE94.toNode = "TouchDown_Pose";
Transform85ZZZ.children[3] = ROUTE94;

Group57ZZZ.children[3] = Transform85;

let Transform95 = browser.currentScene.createNode("Transform");
Transform95.DEF = "I_PoseInterface";
Transform95.translation = new X3D.SFVec3f([-1.5,0,0]);
let Shape96 = browser.currentScene.createNode("Shape");
let Text97 = browser.currentScene.createNode("Text");
Text97.string = new X3D.MFString([new X3D.SFString("\"I\" Pose")]);
let FontStyle98 = browser.currentScene.createNode("FontStyle");
FontStyle98.USE = "SharedFont";
fontStyle = FontStyle98;

geometry = Text97;

let Appearance99 = browser.currentScene.createNode("Appearance");
Appearance99.USE = "PoseTextAppearance";
appearance = Appearance99;

Transform95YYY.child = new X3D.undefined();

Transform95ZZZ.child[0] = Shape96;

let Shape100 = browser.currentScene.createNode("Shape");
//Selectable Text transparent Box for easy user selection
let Appearance101 = browser.currentScene.createNode("Appearance");
Appearance101.USE = "TransparentAppearance";
appearance = Appearance101;

let Box102 = browser.currentScene.createNode("Box");
Box102.size = new X3D.SFVec3f([0.45,0.2,0.001]);
geometry = Box102;

Transform95ZZZ.child[1] = Shape100;

let TouchSensor103 = browser.currentScene.createNode("TouchSensor");
TouchSensor103.DEF = "I_PoseTouchSensor";
TouchSensor103.description = "select to transition all joints to \"I\" pose";
Transform95ZZZ.children[2] = TouchSensor103;

let ROUTE104 = browser.currentScene.createNode("ROUTE");
ROUTE104.fromField = "isActive";
ROUTE104.fromNode = "I_PoseTouchSensor";
ROUTE104.toField = "commencePose";
ROUTE104.toNode = "I_Pose";
Transform95ZZZ.children[3] = ROUTE104;

Group57ZZZ.children[4] = Transform95;

let Transform105 = browser.currentScene.createNode("Transform");
Transform105.DEF = "FaceLeftPoseInterface";
Transform105.translation = new X3D.SFVec3f([1.5,1.5,0]);
let Shape106 = browser.currentScene.createNode("Shape");
let Text107 = browser.currentScene.createNode("Text");
Text107.string = new X3D.MFString([new X3D.SFString("Face Left Pose")]);
let FontStyle108 = browser.currentScene.createNode("FontStyle");
FontStyle108.USE = "SharedFont";
fontStyle = FontStyle108;

geometry = Text107;

let Appearance109 = browser.currentScene.createNode("Appearance");
Appearance109.USE = "PoseTextAppearance";
appearance = Appearance109;

Transform105YYY.child = new X3D.undefined();

Transform105ZZZ.child[0] = Shape106;

let Shape110 = browser.currentScene.createNode("Shape");
let Appearance111 = browser.currentScene.createNode("Appearance");
Appearance111.USE = "TransparentAppearance";
appearance = Appearance111;

let Box112 = browser.currentScene.createNode("Box");
Box112.size = new X3D.SFVec3f([0.9,0.2,0.001]);
geometry = Box112;

Transform105ZZZ.child[1] = Shape110;

let TouchSensor113 = browser.currentScene.createNode("TouchSensor");
TouchSensor113.DEF = "FaceLeftTouchSensor";
TouchSensor113.description = "select to rotate body and Face Left, leave other joints unchanged";
Transform105ZZZ.children[2] = TouchSensor113;

let ROUTE114 = browser.currentScene.createNode("ROUTE");
ROUTE114.fromField = "isActive";
ROUTE114.fromNode = "FaceLeftTouchSensor";
ROUTE114.toField = "commencePose";
ROUTE114.toNode = "FaceLeft_Pose";
Transform105ZZZ.children[3] = ROUTE114;

Group57ZZZ.children[5] = Transform105;

let Transform115 = browser.currentScene.createNode("Transform");
Transform115.DEF = "FaceRightPoseInterface";
Transform115.translation = new X3D.SFVec3f([1.5,1,0]);
let Shape116 = browser.currentScene.createNode("Shape");
let Text117 = browser.currentScene.createNode("Text");
Text117.string = new X3D.MFString([new X3D.SFString("Face Right Pose")]);
let FontStyle118 = browser.currentScene.createNode("FontStyle");
FontStyle118.USE = "SharedFont";
fontStyle = FontStyle118;

geometry = Text117;

let Appearance119 = browser.currentScene.createNode("Appearance");
Appearance119.USE = "PoseTextAppearance";
appearance = Appearance119;

Transform115YYY.child = new X3D.undefined();

Transform115ZZZ.child[0] = Shape116;

let Shape120 = browser.currentScene.createNode("Shape");
//Selectable Text transparent Box for easy user selection
let Appearance121 = browser.currentScene.createNode("Appearance");
Appearance121.USE = "TransparentAppearance";
appearance = Appearance121;

let Box122 = browser.currentScene.createNode("Box");
Box122.size = new X3D.SFVec3f([0.9,0.2,0.001]);
geometry = Box122;

Transform115ZZZ.child[1] = Shape120;

let TouchSensor123 = browser.currentScene.createNode("TouchSensor");
TouchSensor123.DEF = "FaceRightTouchSensor";
TouchSensor123.description = "select to rotate body and Face Right, leave other joints unchanged";
Transform115ZZZ.children[2] = TouchSensor123;

let ROUTE124 = browser.currentScene.createNode("ROUTE");
ROUTE124.fromField = "isActive";
ROUTE124.fromNode = "FaceRightTouchSensor";
ROUTE124.toField = "commencePose";
ROUTE124.toNode = "FaceRight_Pose";
Transform115ZZZ.children[3] = ROUTE124;

Group57ZZZ.children[6] = Transform115;

let Transform125 = browser.currentScene.createNode("Transform");
Transform125.DEF = "AnimatePosesInterface";
Transform125.translation = new X3D.SFVec3f([1.5,0.5,0]);
let Shape126 = browser.currentScene.createNode("Shape");
let Text127 = browser.currentScene.createNode("Text");
Text127.string = new X3D.MFString([new X3D.SFString("Direct animation"), new X3D.SFString("to, from \"I\" Pose")]);
let FontStyle128 = browser.currentScene.createNode("FontStyle");
FontStyle128.USE = "SharedFont";
fontStyle = FontStyle128;

geometry = Text127;

let Appearance129 = browser.currentScene.createNode("Appearance");
Appearance129.DEF = "AnimationTextAppearance";
let Material130 = browser.currentScene.createNode("Material");
Material130.diffuseColor = new X3D.SFColor([0.1,0.2,0.3]);
material = Material130;

appearance = Appearance129;

Transform125YYY.child = new X3D.undefined();

Transform125ZZZ.child[0] = Shape126;

let Shape131 = browser.currentScene.createNode("Shape");
//Selectable Text transparent Box for easy user selection
let Appearance132 = browser.currentScene.createNode("Appearance");
Appearance132.USE = "TransparentAppearance";
appearance = Appearance132;

let Box133 = browser.currentScene.createNode("Box");
Box133.size = new X3D.SFVec3f([0.9,0.25,0.001]);
geometry = Box133;

Transform125ZZZ.child[1] = Shape131;

let TouchSensor134 = browser.currentScene.createNode("TouchSensor");
TouchSensor134.DEF = "AnimatePosesTouchSensor";
TouchSensor134.description = "select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events";
Transform125ZZZ.children[2] = TouchSensor134;

//cycleInterval=4 also hard-coded in script execution message
let TimeSensor135 = browser.currentScene.createNode("TimeSensor");
TimeSensor135.DEF = "AnimatePosesClock";
TimeSensor135.cycleInterval = 4;
TimeSensor135.description = "directly animate several poses";
Transform125ZZZ.children[3] = TimeSensor135;

let ScalarInterpolator136 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator136.DEF = "AnimatePosesLoopInterpolator";
ScalarInterpolator136.key = new X3D.MFFloat([0,0.05,0.45,0.55,0.95,1]);
ScalarInterpolator136.keyValue = new X3D.MFFloat([0,0,1,1,0,0]);
Transform125ZZZ.children[4] = ScalarInterpolator136;

let ROUTE137 = browser.currentScene.createNode("ROUTE");
ROUTE137.fromField = "touchTime";
ROUTE137.fromNode = "AnimatePosesTouchSensor";
ROUTE137.toField = "startTime";
ROUTE137.toNode = "AnimatePosesClock";
Transform125ZZZ.children[5] = ROUTE137;

let ROUTE138 = browser.currentScene.createNode("ROUTE");
ROUTE138.fromField = "fraction_changed";
ROUTE138.fromNode = "AnimatePosesClock";
ROUTE138.toField = "set_fraction";
ROUTE138.toNode = "AnimatePosesLoopInterpolator";
Transform125ZZZ.children[6] = ROUTE138;

let ROUTE139 = browser.currentScene.createNode("ROUTE");
ROUTE139.fromField = "value_changed";
ROUTE139.fromNode = "AnimatePosesLoopInterpolator";
ROUTE139.toField = "set_fraction";
ROUTE139.toNode = "I_Pose";
Transform125ZZZ.children[7] = ROUTE139;

Group57ZZZ.children[7] = Transform125;

let Transform140 = browser.currentScene.createNode("Transform");
Transform140.DEF = "ResetDefaultPoseInterface";
Transform140.translation = new X3D.SFVec3f([1.5,0,0]);
let Shape141 = browser.currentScene.createNode("Shape");
let Text142 = browser.currentScene.createNode("Text");
Text142.string = new X3D.MFString([new X3D.SFString("Reset All Joints"), new X3D.SFString("to Default \"I\" Pose")]);
let FontStyle143 = browser.currentScene.createNode("FontStyle");
FontStyle143.USE = "SharedFont";
fontStyle = FontStyle143;

geometry = Text142;

let Appearance144 = browser.currentScene.createNode("Appearance");
Appearance144.USE = "AnimationTextAppearance";
appearance = Appearance144;

Transform140YYY.child = new X3D.undefined();

Transform140ZZZ.child[0] = Shape141;

let Shape145 = browser.currentScene.createNode("Shape");
//Selectable Text transparent Box for easy user selection
let Appearance146 = browser.currentScene.createNode("Appearance");
Appearance146.USE = "TransparentAppearance";
appearance = Appearance146;

let Box147 = browser.currentScene.createNode("Box");
Box147.size = new X3D.SFVec3f([0.9,0.25,0.001]);
geometry = Box147;

Transform140ZZZ.child[1] = Shape145;

let TouchSensor148 = browser.currentScene.createNode("TouchSensor");
TouchSensor148.DEF = "ResetPoseTouchSensor";
TouchSensor148.description = "select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event";
Transform140ZZZ.children[2] = TouchSensor148;

let ROUTE149 = browser.currentScene.createNode("ROUTE");
ROUTE149.fromField = "isActive";
ROUTE149.fromNode = "ResetPoseTouchSensor";
ROUTE149.toField = "resetAllJoints";
ROUTE149.toNode = "FaceLeft_Pose";
Transform140ZZZ.children[3] = ROUTE149;

Group57ZZZ.children[8] = Transform140;

browser.currentScene.children[12] = Group57;

let Group150 = browser.currentScene.createNode("Group");
Group150.DEF = "HandleInlineLoadsensorRouting";
let ROUTE151 = browser.currentScene.createNode("ROUTE");
ROUTE151.fromField = "isLoaded";
ROUTE151.fromNode = "HumanoidInlineLoadSensor";
ROUTE151.toField = "isLoaded";
ROUTE151.toNode = "A_Pose";
Group150YYY.children = new X3D.MFNode();

Group150ZZZ.children[0] = ROUTE151;

let ROUTE152 = browser.currentScene.createNode("ROUTE");
ROUTE152.fromField = "isLoaded";
ROUTE152.fromNode = "HumanoidInlineLoadSensor";
ROUTE152.toField = "isLoaded";
ROUTE152.toNode = "H_Pose";
Group150ZZZ.children[1] = ROUTE152;

let ROUTE153 = browser.currentScene.createNode("ROUTE");
ROUTE153.fromField = "isLoaded";
ROUTE153.fromNode = "HumanoidInlineLoadSensor";
ROUTE153.toField = "isLoaded";
ROUTE153.toNode = "I_Pose";
Group150ZZZ.children[2] = ROUTE153;

let ROUTE154 = browser.currentScene.createNode("ROUTE");
ROUTE154.fromField = "isLoaded";
ROUTE154.fromNode = "HumanoidInlineLoadSensor";
ROUTE154.toField = "isLoaded";
ROUTE154.toNode = "T_Pose";
Group150ZZZ.children[3] = ROUTE154;

let ROUTE155 = browser.currentScene.createNode("ROUTE");
ROUTE155.fromField = "isLoaded";
ROUTE155.fromNode = "HumanoidInlineLoadSensor";
ROUTE155.toField = "isLoaded";
ROUTE155.toNode = "FaceLeft_Pose";
Group150ZZZ.children[4] = ROUTE155;

let ROUTE156 = browser.currentScene.createNode("ROUTE");
ROUTE156.fromField = "isLoaded";
ROUTE156.fromNode = "HumanoidInlineLoadSensor";
ROUTE156.toField = "isLoaded";
ROUTE156.toNode = "FaceRight_Pose";
Group150ZZZ.children[5] = ROUTE156;

let ROUTE157 = browser.currentScene.createNode("ROUTE");
ROUTE157.fromField = "isLoaded";
ROUTE157.fromNode = "HumanoidInlineLoadSensor";
ROUTE157.toField = "isLoaded";
ROUTE157.toNode = "TouchDown_Pose";
Group150ZZZ.children[6] = ROUTE157;

browser.currentScene.children[13] = Group150;

let HAnimHumanoid158 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid158.name = "HumanoidStub";
HAnimHumanoid158.info = new X3D.MFString([new X3D.SFString("humanoidVersion=2.0")]);
HAnimHumanoid158.version = "2.0";
let HAnimPose159 = browser.currentScene.createNode("HAnimPose");
HAnimPose159.USE = "A_Pose";
HAnimHumanoid158.children = new X3D.MFNode();

HAnimHumanoid158XXX.children[0] = HAnimPose159;

let HAnimPose160 = browser.currentScene.createNode("HAnimPose");
HAnimPose160.USE = "T_Pose";
children[1] = HAnimPose160;

let HAnimPose161 = browser.currentScene.createNode("HAnimPose");
HAnimPose161.USE = "I_Pose";
children[2] = HAnimPose161;

let HAnimPose162 = browser.currentScene.createNode("HAnimPose");
HAnimPose162.USE = "H_Pose";
children[3] = HAnimPose162;

let HAnimPose163 = browser.currentScene.createNode("HAnimPose");
HAnimPose163.USE = "FaceLeft_Pose";
children[4] = HAnimPose163;

let HAnimPose164 = browser.currentScene.createNode("HAnimPose");
HAnimPose164.USE = "FaceRight_Pose";
children[5] = HAnimPose164;

let HAnimPose165 = browser.currentScene.createNode("HAnimPose");
HAnimPose165.USE = "TouchDown_Pose";
children[6] = HAnimPose165;

browser.currentScene.children[14] = HAnimHumanoid158;

}
main ();

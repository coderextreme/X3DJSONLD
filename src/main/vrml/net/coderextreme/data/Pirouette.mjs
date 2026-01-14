const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 3));
scene.addMetaData("title", "Pirouette.x3d");
scene.addMetaData("description", "BVH file conversion: CMU example animation that also runs in three.js");
scene.addMetaData("warning", "debugging in progress, nearly complete");
scene.addMetaData("TODO", "find original model and author");
scene.addMetaData("TODO", "Joe Williams: First, stop the animation, rescale to humanoid, and navigate or maybe the player can find the thing, or try and figure it out by some analysis (as shown in example)? Sets of these may be similar. Best practice mocap eventually found a standard before animation pose and starting view location.");
scene.addMetaData("creator", "*enter name of original author here*");
scene.addMetaData("created", "*enter date of initial version here*");
scene.addMetaData("translated", "20 November 2022");
scene.addMetaData("modified", "Mon, 15 Sep 2025 05:20:56 GMT");
scene.addMetaData("reference", "Pirouette.bvh");
scene.addMetaData("reference", "https://github.com/mrdoob/three.js/blob/dev/examples/models/bvh/pirouette.bvh");
scene.addMetaData("reference", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/MotionAnimation/Pirouette.bvh");
scene.addMetaData("reference", "https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#MOCAP");
scene.addMetaData("reference", "https://threejs.org/examples/#webgl_loader_bvh");
scene.addMetaData("reference", "http://mocap.cs.cmu.edu/resources.php");
scene.addMetaData("reference", "CMU Graphics Lab Motion Capture Database, subject #5 (modern dance) Trial #11 dance - sideways steps, pirouette");
scene.addMetaData("reference", "http://mocap.cs.cmu.edu/search.php?subjectnumber=5");
scene.addMetaData("reference", "http://mocap.cs.cmu.edu/subjects/05/05_11.mpg");
scene.addMetaData("reference", "https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/tools/X3dEdit4.0/X3dEditModuleSuite/X3dSourceFilePalette/src/org/web3d/x3d/hanim/bvh");
scene.addMetaData("reference", "X3D-EditBvhImport.png");
scene.addMetaData("generator", "X3D-Edit Java BVH to X3D Converter, org.web3d.x3d.hanim.bvh package");
scene.addMetaData("generator", "Java BVH to X3D Converter, org.web3d.x3d.hanim.bvh package");
scene.addMetaData("generator", "X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit");
await browser .loadComponents (scene);
let WorldInfo27 = browser.currentScene.createNode("WorldInfo");
WorldInfo27.title = "Pirouette.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo27;

let NavigationInfo28 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo28;

let Group29 = browser.currentScene.createNode("Group");
Group29.DEF = "BvhPirouette_BvhToX3dConversionImportInformation";
let MetadataSet30 = browser.currentScene.createNode("MetadataSet");
MetadataSet30.name = "BvhToHAnimConversionNameTable";
let MetadataString31 = browser.currentScene.createNode("MetadataString");
MetadataString31.name = "ROOT_hip";
MetadataString31.reference = "ROOT";
MetadataString31.value = new X3D.MFString([new X3D.SFString("humanoid_root"), new X3D.SFString("sacrum")]);
MetadataSet30.value = new X3D.MFNode();

MetadataSet30XXX.value[0] = MetadataString31;

let MetadataString32 = browser.currentScene.createNode("MetadataString");
MetadataString32.name = "abdomen";
MetadataString32.reference = "JOINT";
MetadataString32.value = new X3D.MFString([new X3D.SFString("abdomen"), new X3D.SFString("humanoid_root_to_abdomen")]);
value[1] = MetadataString32;

let MetadataString33 = browser.currentScene.createNode("MetadataString");
MetadataString33.name = "chest";
MetadataString33.reference = "JOINT";
MetadataString33.value = new X3D.MFString([new X3D.SFString("vl5"), new X3D.SFString("l5")]);
value[2] = MetadataString33;

let MetadataString34 = browser.currentScene.createNode("MetadataString");
MetadataString34.name = "neck";
MetadataString34.reference = "JOINT";
MetadataString34.value = new X3D.MFString([new X3D.SFString("neck"), new X3D.SFString("vl5_to_neck")]);
value[3] = MetadataString34;

let MetadataString35 = browser.currentScene.createNode("MetadataString");
MetadataString35.name = "head";
MetadataString35.reference = "JOINT";
MetadataString35.value = new X3D.MFString([new X3D.SFString("skullbase"), new X3D.SFString("skull")]);
value[4] = MetadataString35;

let MetadataString36 = browser.currentScene.createNode("MetadataString");
MetadataString36.name = "leftEye";
MetadataString36.reference = "JOINT";
MetadataString36.value = new X3D.MFString([new X3D.SFString("leftEye"), new X3D.SFString("skullbase_to_leftEye")]);
value[5] = MetadataString36;

let MetadataString37 = browser.currentScene.createNode("MetadataString");
MetadataString37.name = "leftEyeSite";
MetadataString37.reference = "Site";
MetadataString37.value = new X3D.MFString([new X3D.SFString("leftEye_tip")]);
value[6] = MetadataString37;

let MetadataString38 = browser.currentScene.createNode("MetadataString");
MetadataString38.name = "rightEye";
MetadataString38.reference = "JOINT";
MetadataString38.value = new X3D.MFString([new X3D.SFString("rightEye"), new X3D.SFString("skullbase_to_rightEye")]);
value[7] = MetadataString38;

let MetadataString39 = browser.currentScene.createNode("MetadataString");
MetadataString39.name = "rightEyeSite";
MetadataString39.reference = "Site";
MetadataString39.value = new X3D.MFString([new X3D.SFString("rightEye_tip")]);
value[8] = MetadataString39;

let MetadataString40 = browser.currentScene.createNode("MetadataString");
MetadataString40.name = "rCollar";
MetadataString40.reference = "JOINT";
MetadataString40.value = new X3D.MFString([new X3D.SFString("rCollar"), new X3D.SFString("vl5_to_rCollar")]);
value[9] = MetadataString40;

let MetadataString41 = browser.currentScene.createNode("MetadataString");
MetadataString41.name = "rShldr";
MetadataString41.reference = "JOINT";
MetadataString41.value = new X3D.MFString([new X3D.SFString("rShldr"), new X3D.SFString("rCollar_to_rShldr")]);
value[10] = MetadataString41;

let MetadataString42 = browser.currentScene.createNode("MetadataString");
MetadataString42.name = "rForeArm";
MetadataString42.reference = "JOINT";
MetadataString42.value = new X3D.MFString([new X3D.SFString("rForeArm"), new X3D.SFString("rShldr_to_rForeArm")]);
value[11] = MetadataString42;

let MetadataString43 = browser.currentScene.createNode("MetadataString");
MetadataString43.name = "rHand";
MetadataString43.reference = "JOINT";
MetadataString43.value = new X3D.MFString([new X3D.SFString("rHand"), new X3D.SFString("rForeArm_to_rHand")]);
value[12] = MetadataString43;

let MetadataString44 = browser.currentScene.createNode("MetadataString");
MetadataString44.name = "rThumb1";
MetadataString44.reference = "JOINT";
MetadataString44.value = new X3D.MFString([new X3D.SFString("rThumb1"), new X3D.SFString("rHand_to_rThumb1")]);
value[13] = MetadataString44;

let MetadataString45 = browser.currentScene.createNode("MetadataString");
MetadataString45.name = "rThumb2";
MetadataString45.reference = "JOINT";
MetadataString45.value = new X3D.MFString([new X3D.SFString("rThumb2"), new X3D.SFString("rThumb1_to_rThumb2")]);
value[14] = MetadataString45;

let MetadataString46 = browser.currentScene.createNode("MetadataString");
MetadataString46.name = "rThumb2Site";
MetadataString46.reference = "Site";
MetadataString46.value = new X3D.MFString([new X3D.SFString("rThumb2_tip")]);
value[15] = MetadataString46;

let MetadataString47 = browser.currentScene.createNode("MetadataString");
MetadataString47.name = "rIndex1";
MetadataString47.reference = "JOINT";
MetadataString47.value = new X3D.MFString([new X3D.SFString("rIndex1"), new X3D.SFString("rHand_to_rIndex1")]);
value[16] = MetadataString47;

let MetadataString48 = browser.currentScene.createNode("MetadataString");
MetadataString48.name = "rIndex2";
MetadataString48.reference = "JOINT";
MetadataString48.value = new X3D.MFString([new X3D.SFString("rIndex2"), new X3D.SFString("rIndex1_to_rIndex2")]);
value[17] = MetadataString48;

let MetadataString49 = browser.currentScene.createNode("MetadataString");
MetadataString49.name = "rIndex2Site";
MetadataString49.reference = "Site";
MetadataString49.value = new X3D.MFString([new X3D.SFString("rIndex2_tip")]);
value[18] = MetadataString49;

let MetadataString50 = browser.currentScene.createNode("MetadataString");
MetadataString50.name = "rMid1";
MetadataString50.reference = "JOINT";
MetadataString50.value = new X3D.MFString([new X3D.SFString("rMid1"), new X3D.SFString("rHand_to_rMid1")]);
value[19] = MetadataString50;

let MetadataString51 = browser.currentScene.createNode("MetadataString");
MetadataString51.name = "rMid2";
MetadataString51.reference = "JOINT";
MetadataString51.value = new X3D.MFString([new X3D.SFString("rMid2"), new X3D.SFString("rMid1_to_rMid2")]);
value[20] = MetadataString51;

let MetadataString52 = browser.currentScene.createNode("MetadataString");
MetadataString52.name = "rMid2Site";
MetadataString52.reference = "Site";
MetadataString52.value = new X3D.MFString([new X3D.SFString("rMid2_tip")]);
value[21] = MetadataString52;

let MetadataString53 = browser.currentScene.createNode("MetadataString");
MetadataString53.name = "rRing1";
MetadataString53.reference = "JOINT";
MetadataString53.value = new X3D.MFString([new X3D.SFString("rRing1"), new X3D.SFString("rHand_to_rRing1")]);
value[22] = MetadataString53;

let MetadataString54 = browser.currentScene.createNode("MetadataString");
MetadataString54.name = "rRing2";
MetadataString54.reference = "JOINT";
MetadataString54.value = new X3D.MFString([new X3D.SFString("rRing2"), new X3D.SFString("rRing1_to_rRing2")]);
value[23] = MetadataString54;

let MetadataString55 = browser.currentScene.createNode("MetadataString");
MetadataString55.name = "rRing2Site";
MetadataString55.reference = "Site";
MetadataString55.value = new X3D.MFString([new X3D.SFString("rRing2_tip")]);
value[24] = MetadataString55;

let MetadataString56 = browser.currentScene.createNode("MetadataString");
MetadataString56.name = "rPinky1";
MetadataString56.reference = "JOINT";
MetadataString56.value = new X3D.MFString([new X3D.SFString("rPinky1"), new X3D.SFString("rHand_to_rPinky1")]);
value[25] = MetadataString56;

let MetadataString57 = browser.currentScene.createNode("MetadataString");
MetadataString57.name = "rPinky2";
MetadataString57.reference = "JOINT";
MetadataString57.value = new X3D.MFString([new X3D.SFString("rPinky2"), new X3D.SFString("rPinky1_to_rPinky2")]);
value[26] = MetadataString57;

let MetadataString58 = browser.currentScene.createNode("MetadataString");
MetadataString58.name = "rPinky2Site";
MetadataString58.reference = "Site";
MetadataString58.value = new X3D.MFString([new X3D.SFString("rPinky2_tip")]);
value[27] = MetadataString58;

let MetadataString59 = browser.currentScene.createNode("MetadataString");
MetadataString59.name = "lCollar";
MetadataString59.reference = "JOINT";
MetadataString59.value = new X3D.MFString([new X3D.SFString("lCollar"), new X3D.SFString("vl5_to_lCollar")]);
value[28] = MetadataString59;

let MetadataString60 = browser.currentScene.createNode("MetadataString");
MetadataString60.name = "lShldr";
MetadataString60.reference = "JOINT";
MetadataString60.value = new X3D.MFString([new X3D.SFString("lShldr"), new X3D.SFString("lCollar_to_lShldr")]);
value[29] = MetadataString60;

let MetadataString61 = browser.currentScene.createNode("MetadataString");
MetadataString61.name = "lForeArm";
MetadataString61.reference = "JOINT";
MetadataString61.value = new X3D.MFString([new X3D.SFString("lForeArm"), new X3D.SFString("lShldr_to_lForeArm")]);
value[30] = MetadataString61;

let MetadataString62 = browser.currentScene.createNode("MetadataString");
MetadataString62.name = "lHand";
MetadataString62.reference = "JOINT";
MetadataString62.value = new X3D.MFString([new X3D.SFString("lHand"), new X3D.SFString("lForeArm_to_lHand")]);
value[31] = MetadataString62;

let MetadataString63 = browser.currentScene.createNode("MetadataString");
MetadataString63.name = "lThumb1";
MetadataString63.reference = "JOINT";
MetadataString63.value = new X3D.MFString([new X3D.SFString("lThumb1"), new X3D.SFString("lHand_to_lThumb1")]);
value[32] = MetadataString63;

let MetadataString64 = browser.currentScene.createNode("MetadataString");
MetadataString64.name = "lThumb2";
MetadataString64.reference = "JOINT";
MetadataString64.value = new X3D.MFString([new X3D.SFString("lThumb2"), new X3D.SFString("lThumb1_to_lThumb2")]);
value[33] = MetadataString64;

let MetadataString65 = browser.currentScene.createNode("MetadataString");
MetadataString65.name = "lThumb2Site";
MetadataString65.reference = "Site";
MetadataString65.value = new X3D.MFString([new X3D.SFString("lThumb2_tip")]);
value[34] = MetadataString65;

let MetadataString66 = browser.currentScene.createNode("MetadataString");
MetadataString66.name = "lIndex1";
MetadataString66.reference = "JOINT";
MetadataString66.value = new X3D.MFString([new X3D.SFString("lIndex1"), new X3D.SFString("lHand_to_lIndex1")]);
value[35] = MetadataString66;

let MetadataString67 = browser.currentScene.createNode("MetadataString");
MetadataString67.name = "lIndex2";
MetadataString67.reference = "JOINT";
MetadataString67.value = new X3D.MFString([new X3D.SFString("lIndex2"), new X3D.SFString("lIndex1_to_lIndex2")]);
value[36] = MetadataString67;

let MetadataString68 = browser.currentScene.createNode("MetadataString");
MetadataString68.name = "lIndex2Site";
MetadataString68.reference = "Site";
MetadataString68.value = new X3D.MFString([new X3D.SFString("lIndex2_tip")]);
value[37] = MetadataString68;

let MetadataString69 = browser.currentScene.createNode("MetadataString");
MetadataString69.name = "lMid1";
MetadataString69.reference = "JOINT";
MetadataString69.value = new X3D.MFString([new X3D.SFString("lMid1"), new X3D.SFString("lHand_to_lMid1")]);
value[38] = MetadataString69;

let MetadataString70 = browser.currentScene.createNode("MetadataString");
MetadataString70.name = "lMid2";
MetadataString70.reference = "JOINT";
MetadataString70.value = new X3D.MFString([new X3D.SFString("lMid2"), new X3D.SFString("lMid1_to_lMid2")]);
value[39] = MetadataString70;

let MetadataString71 = browser.currentScene.createNode("MetadataString");
MetadataString71.name = "lMid2Site";
MetadataString71.reference = "Site";
MetadataString71.value = new X3D.MFString([new X3D.SFString("lMid2_tip")]);
value[40] = MetadataString71;

let MetadataString72 = browser.currentScene.createNode("MetadataString");
MetadataString72.name = "lRing1";
MetadataString72.reference = "JOINT";
MetadataString72.value = new X3D.MFString([new X3D.SFString("lRing1"), new X3D.SFString("lHand_to_lRing1")]);
value[41] = MetadataString72;

let MetadataString73 = browser.currentScene.createNode("MetadataString");
MetadataString73.name = "lRing2";
MetadataString73.reference = "JOINT";
MetadataString73.value = new X3D.MFString([new X3D.SFString("lRing2"), new X3D.SFString("lRing1_to_lRing2")]);
value[42] = MetadataString73;

let MetadataString74 = browser.currentScene.createNode("MetadataString");
MetadataString74.name = "lRing2Site";
MetadataString74.reference = "Site";
MetadataString74.value = new X3D.MFString([new X3D.SFString("lRing2_tip")]);
value[43] = MetadataString74;

let MetadataString75 = browser.currentScene.createNode("MetadataString");
MetadataString75.name = "lPinky1";
MetadataString75.reference = "JOINT";
MetadataString75.value = new X3D.MFString([new X3D.SFString("lPinky1"), new X3D.SFString("lHand_to_lPinky1")]);
value[44] = MetadataString75;

let MetadataString76 = browser.currentScene.createNode("MetadataString");
MetadataString76.name = "lPinky2";
MetadataString76.reference = "JOINT";
MetadataString76.value = new X3D.MFString([new X3D.SFString("lPinky2"), new X3D.SFString("lPinky1_to_lPinky2")]);
value[45] = MetadataString76;

let MetadataString77 = browser.currentScene.createNode("MetadataString");
MetadataString77.name = "lPinky2Site";
MetadataString77.reference = "Site";
MetadataString77.value = new X3D.MFString([new X3D.SFString("lPinky2_tip")]);
value[46] = MetadataString77;

let MetadataString78 = browser.currentScene.createNode("MetadataString");
MetadataString78.name = "rButtock";
MetadataString78.reference = "JOINT";
MetadataString78.value = new X3D.MFString([new X3D.SFString("rButtock"), new X3D.SFString("humanoid_root_to_rButtock")]);
value[47] = MetadataString78;

let MetadataString79 = browser.currentScene.createNode("MetadataString");
MetadataString79.name = "rThigh";
MetadataString79.reference = "JOINT";
MetadataString79.value = new X3D.MFString([new X3D.SFString("rThigh"), new X3D.SFString("rButtock_to_rThigh")]);
value[48] = MetadataString79;

let MetadataString80 = browser.currentScene.createNode("MetadataString");
MetadataString80.name = "rShin";
MetadataString80.reference = "JOINT";
MetadataString80.value = new X3D.MFString([new X3D.SFString("rShin"), new X3D.SFString("rThigh_to_rShin")]);
value[49] = MetadataString80;

let MetadataString81 = browser.currentScene.createNode("MetadataString");
MetadataString81.name = "rFoot";
MetadataString81.reference = "JOINT";
MetadataString81.value = new X3D.MFString([new X3D.SFString("rFoot"), new X3D.SFString("rShin_to_rFoot")]);
value[50] = MetadataString81;

let MetadataString82 = browser.currentScene.createNode("MetadataString");
MetadataString82.name = "rFootSite";
MetadataString82.reference = "Site";
MetadataString82.value = new X3D.MFString([new X3D.SFString("rFoot_tip")]);
value[51] = MetadataString82;

let MetadataString83 = browser.currentScene.createNode("MetadataString");
MetadataString83.name = "lButtock";
MetadataString83.reference = "JOINT";
MetadataString83.value = new X3D.MFString([new X3D.SFString("lButtock"), new X3D.SFString("humanoid_root_to_lButtock")]);
value[52] = MetadataString83;

let MetadataString84 = browser.currentScene.createNode("MetadataString");
MetadataString84.name = "lThigh";
MetadataString84.reference = "JOINT";
MetadataString84.value = new X3D.MFString([new X3D.SFString("lThigh"), new X3D.SFString("lButtock_to_lThigh")]);
value[53] = MetadataString84;

let MetadataString85 = browser.currentScene.createNode("MetadataString");
MetadataString85.name = "lShin";
MetadataString85.reference = "JOINT";
MetadataString85.value = new X3D.MFString([new X3D.SFString("lShin"), new X3D.SFString("lThigh_to_lShin")]);
value[54] = MetadataString85;

let MetadataString86 = browser.currentScene.createNode("MetadataString");
MetadataString86.name = "lFoot";
MetadataString86.reference = "JOINT";
MetadataString86.value = new X3D.MFString([new X3D.SFString("lFoot"), new X3D.SFString("lShin_to_lFoot")]);
value[55] = MetadataString86;

let MetadataString87 = browser.currentScene.createNode("MetadataString");
MetadataString87.name = "lFootSite";
MetadataString87.reference = "Site";
MetadataString87.value = new X3D.MFString([new X3D.SFString("lFoot_tip")]);
value[56] = MetadataString87;

metadata = MetadataSet30;

browser.currentScene.children[2] = Group29;

let Transform88 = browser.currentScene.createNode("Transform");
Transform88.DEF = "InitialPositionScaled";
Transform88.translation = new X3D.SFVec3f([0.124,0.555,0.636]);
let Viewpoint89 = browser.currentScene.createNode("Viewpoint");
Viewpoint89.description = "BvhPirouette model BVH to X3D conversion, from 8m";
Viewpoint89.position = new X3D.SFVec3f([0,0,8]);
Transform88YYY.children = new X3D.MFNode();

Transform88ZZZ.children[0] = Viewpoint89;

let Viewpoint90 = browser.currentScene.createNode("Viewpoint");
Viewpoint90.description = "BvhPirouette initial motion position";
Viewpoint90.position = new X3D.SFVec3f([1.531,8.489,23.204]);
Transform88ZZZ.children[1] = Viewpoint90;

let Viewpoint91 = browser.currentScene.createNode("Viewpoint");
Viewpoint91.description = "BvhPirouette final motion position";
Viewpoint91.position = new X3D.SFVec3f([-2.226,7.149,20.734]);
Transform88ZZZ.children[2] = Viewpoint91;

browser.currentScene.children[3] = Transform88;

let HAnimHumanoid92 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid92.DEF = "BvhPirouette_ROOT_hip";
HAnimHumanoid92.name = "ROOT_hip";
let MetadataSet93 = browser.currentScene.createNode("MetadataSet");
MetadataSet93.name = "HAnimHumanoid.info";
MetadataSet93.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString94 = browser.currentScene.createNode("MetadataString");
MetadataString94.name = "authorEmail";
MetadataString94.value = new X3D.MFString([new X3D.SFString("*TODO*")]);
MetadataSet93.value = new X3D.MFNode();

MetadataSet93XXX.value[0] = MetadataString94;

let MetadataString95 = browser.currentScene.createNode("MetadataString");
MetadataString95.name = "authorName";
MetadataString95.value = new X3D.MFString([new X3D.SFString("*TODO*")]);
value[1] = MetadataString95;

let MetadataString96 = browser.currentScene.createNode("MetadataString");
MetadataString96.name = "copyright";
MetadataString96.value = new X3D.MFString([new X3D.SFString("Copyright (c) 2022")]);
value[2] = MetadataString96;

let MetadataString97 = browser.currentScene.createNode("MetadataString");
MetadataString97.name = "humanoidVersion";
MetadataString97.value = new X3D.MFString([new X3D.SFString("*TODO*")]);
value[3] = MetadataString97;

let MetadataString98 = browser.currentScene.createNode("MetadataString");
MetadataString98.name = "usageDescription";
MetadataString98.value = new X3D.MFString([new X3D.SFString("*TODO*")]);
value[4] = MetadataString98;

HAnimHumanoid92.metadata = new X3D.SFNode();

HAnimHumanoid92XXX.metadata[0] = MetadataSet93;

let HAnimJoint99 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint99.DEF = "BvhPirouette_humanoid_root";
HAnimJoint99.name = "humanoid_root";
HAnimJoint99.translation = new X3D.SFVec3f([-3.157873,8.272441,10.929]);
HAnimJoint99.rotation = new X3D.SFRotation([-0.133650569347231,0.977277953494903,-0.164515430662217,2.72224668131931]);
HAnimJoint99.scale = new X3D.SFVec3f([0.1,0.1,0.1]);
let HAnimSegment100 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment100.DEF = "BvhPirouette_sacrum";
HAnimSegment100.name = "sacrum";
let Switch101 = browser.currentScene.createNode("Switch");
Switch101.whichChoice = 0;
let Group102 = browser.currentScene.createNode("Group");
let TouchSensor103 = browser.currentScene.createNode("TouchSensor");
TouchSensor103.description = "HAnimHumanoid ROOT ROOT_hip, HAnimSegment sacrum";
Group102YYY.children = new X3D.MFNode();

Group102ZZZ.children[0] = TouchSensor103;

let Shape104 = browser.currentScene.createNode("Shape");
Shape104.DEF = "HAnimRootShape";
let Appearance105 = browser.currentScene.createNode("Appearance");
let Material106 = browser.currentScene.createNode("Material");
Material106.DEF = "HAnimRootMaterial";
Material106.diffuseColor = new X3D.SFColor([0.8,0,0]);
Material106.transparency = 0.3;
material = Material106;

appearance = Appearance105;

let Sphere107 = browser.currentScene.createNode("Sphere");
Sphere107.DEF = "HAnimJointSphere";
Sphere107.radius = 0.254;
geometry = Sphere107;

Group102ZZZ.children[1] = Shape104;

Switch101YYY.children = new X3D.MFNode();

Switch101ZZZ.children[0] = Group102;

let Shape108 = browser.currentScene.createNode("Shape");
Shape108.DEF = "HAnimJointShape";
let Appearance109 = browser.currentScene.createNode("Appearance");
let Material110 = browser.currentScene.createNode("Material");
Material110.DEF = "HAnimJointMaterial";
Material110.diffuseColor = new X3D.SFColor([0,0,0.8]);
Material110.transparency = 0.3;
material = Material110;

appearance = Appearance109;

let Sphere111 = browser.currentScene.createNode("Sphere");
Sphere111.USE = "HAnimJointSphere";
geometry = Sphere111;

Switch101ZZZ.children[1] = Shape108;

let Shape112 = browser.currentScene.createNode("Shape");
let LineSet113 = browser.currentScene.createNode("LineSet");
LineSet113.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA114 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA114.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA114.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1]);
color = ColorRGBA114;

let Coordinate115 = browser.currentScene.createNode("Coordinate");
Coordinate115.point = new X3D.MFVec3f([0,0,0,0,0,0]);
coord = Coordinate115;

geometry = LineSet113;

Switch101ZZZ.children[2] = Shape112;

let Shape116 = browser.currentScene.createNode("Shape");
Shape116.DEF = "HAnimSiteShape";
let Appearance117 = browser.currentScene.createNode("Appearance");
let Material118 = browser.currentScene.createNode("Material");
Material118.diffuseColor = new X3D.SFColor([1,0.5,0]);
Material118.transparency = 0.3;
material = Material118;

appearance = Appearance117;

let IndexedFaceSet119 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet119.DEF = "DiamondIFS";
IndexedFaceSet119.solid = False;
IndexedFaceSet119.creaseAngle = 0.5;
IndexedFaceSet119.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate120 = browser.currentScene.createNode("Coordinate");
Coordinate120.point = new X3D.MFVec3f([0,0.254,0,-0.254,0,0,0,0,0.254,0.254,0,0,0,0,-0.254,0,-0.254,0]);
coord = Coordinate120;

geometry = IndexedFaceSet119;

Switch101ZZZ.children[3] = Shape116;

let Shape121 = browser.currentScene.createNode("Shape");
let LineSet122 = browser.currentScene.createNode("LineSet");
LineSet122.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA123 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA123.DEF = "HAnimSiteLineColorRGBA";
ColorRGBA123.color = new X3D.MFColorRGBA([1,0.5,0,1,1,0.5,0,0.1]);
color = ColorRGBA123;

let Coordinate124 = browser.currentScene.createNode("Coordinate");
Coordinate124.point = new X3D.MFVec3f([0,0,0,0,0,0]);
coord = Coordinate124;

geometry = LineSet122;

Switch101ZZZ.children[4] = Shape121;

HAnimSegment100YYY.children = new X3D.MFNode();

HAnimSegment100ZZZ.children[0] = Switch101;

let Shape125 = browser.currentScene.createNode("Shape");
let LineSet126 = browser.currentScene.createNode("LineSet");
LineSet126.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA127 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA127.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA127;

let Coordinate128 = browser.currentScene.createNode("Coordinate");
Coordinate128.point = new X3D.MFVec3f([0,0,0,0,20.6881,-0.73152]);
coord = Coordinate128;

geometry = LineSet126;

HAnimSegment100ZZZ.children[1] = Shape125;

let Shape129 = browser.currentScene.createNode("Shape");
let LineSet130 = browser.currentScene.createNode("LineSet");
LineSet130.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA131 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA131.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA131;

let Coordinate132 = browser.currentScene.createNode("Coordinate");
Coordinate132.point = new X3D.MFVec3f([0,0,0,-8.77824,4.35084,1.2192]);
coord = Coordinate132;

geometry = LineSet130;

HAnimSegment100ZZZ.children[2] = Shape129;

let Shape133 = browser.currentScene.createNode("Shape");
let LineSet134 = browser.currentScene.createNode("LineSet");
LineSet134.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA135 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA135.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA135;

let Coordinate136 = browser.currentScene.createNode("Coordinate");
Coordinate136.point = new X3D.MFVec3f([0,0,0,8.77824,4.35084,1.2192]);
coord = Coordinate136;

geometry = LineSet134;

HAnimSegment100ZZZ.children[3] = Shape133;

HAnimJoint99YYY.children = new X3D.MFNode();

HAnimJoint99ZZZ.children[0] = HAnimSegment100;

let HAnimJoint137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint137.DEF = "BvhPirouette_abdomen";
HAnimJoint137.name = "abdomen";
HAnimJoint137.rotation = new X3D.SFRotation([-0.839149639882915,0.521672564565088,0.153901323140716,0.384958481788717]);
HAnimJoint137.center = new X3D.SFVec3f([0,20.6881,-0.73152]);
let HAnimSegment138 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment138.DEF = "BvhPirouette_humanoid_root_to_abdomen";
HAnimSegment138.name = "humanoid_root_to_abdomen";
let Transform139 = browser.currentScene.createNode("Transform");
Transform139.translation = new X3D.SFVec3f([0,20.6881,-0.73152]);
let TouchSensor140 = browser.currentScene.createNode("TouchSensor");
TouchSensor140.description = "HAnimJoint abdomen abdomen, HAnimSegment humanoid_root_to_abdomen";
Transform139YYY.children = new X3D.MFNode();

Transform139ZZZ.children[0] = TouchSensor140;

let Shape141 = browser.currentScene.createNode("Shape");
Shape141.USE = "HAnimJointShape";
Transform139ZZZ.child[1] = Shape141;

let Shape142 = browser.currentScene.createNode("Shape");
let LineSet143 = browser.currentScene.createNode("LineSet");
LineSet143.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA144 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA144.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA144;

let Coordinate145 = browser.currentScene.createNode("Coordinate");
Coordinate145.point = new X3D.MFVec3f([0,0,0,0,11.7043,-0.48768]);
coord = Coordinate145;

geometry = LineSet143;

Transform139ZZZ.child[2] = Shape142;

HAnimSegment138YYY.children = new X3D.MFNode();

HAnimSegment138ZZZ.children[0] = Transform139;

HAnimJoint137YYY.children = new X3D.MFNode();

HAnimJoint137ZZZ.children[0] = HAnimSegment138;

let HAnimJoint146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint146.DEF = "BvhPirouette_vl5";
HAnimJoint146.name = "vl5";
HAnimJoint146.rotation = new X3D.SFRotation([-0.954519086594991,0.21620497724168,0.205301537114884,0.191014169898018]);
HAnimJoint146.center = new X3D.SFVec3f([0,32.3924,-1.2192]);
let HAnimSegment147 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment147.DEF = "BvhPirouette_l5";
HAnimSegment147.name = "l5";
let Transform148 = browser.currentScene.createNode("Transform");
Transform148.translation = new X3D.SFVec3f([0,32.3924,-1.2192]);
let TouchSensor149 = browser.currentScene.createNode("TouchSensor");
TouchSensor149.description = "HAnimJoint chest vl5, HAnimSegment l5";
Transform148YYY.children = new X3D.MFNode();

Transform148ZZZ.children[0] = TouchSensor149;

let Shape150 = browser.currentScene.createNode("Shape");
Shape150.USE = "HAnimJointShape";
Transform148ZZZ.child[1] = Shape150;

let Shape151 = browser.currentScene.createNode("Shape");
let LineSet152 = browser.currentScene.createNode("LineSet");
LineSet152.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA153 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA153.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA153;

let Coordinate154 = browser.currentScene.createNode("Coordinate");
Coordinate154.point = new X3D.MFVec3f([0,0,0,0,22.1894,-2.19456]);
coord = Coordinate154;

geometry = LineSet152;

Transform148ZZZ.child[2] = Shape151;

let Shape155 = browser.currentScene.createNode("Shape");
let LineSet156 = browser.currentScene.createNode("LineSet");
LineSet156.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA157 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA157.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA157;

let Coordinate158 = browser.currentScene.createNode("Coordinate");
Coordinate158.point = new X3D.MFVec3f([0,0,0,-2.68224,19.2634,-4.8768]);
coord = Coordinate158;

geometry = LineSet156;

Transform148ZZZ.child[3] = Shape155;

let Shape159 = browser.currentScene.createNode("Shape");
let LineSet160 = browser.currentScene.createNode("LineSet");
LineSet160.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA161 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA161.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA161;

let Coordinate162 = browser.currentScene.createNode("Coordinate");
Coordinate162.point = new X3D.MFVec3f([0,0,0,2.68224,19.2634,-4.8768]);
coord = Coordinate162;

geometry = LineSet160;

Transform148ZZZ.child[4] = Shape159;

HAnimSegment147YYY.children = new X3D.MFNode();

HAnimSegment147ZZZ.children[0] = Transform148;

HAnimJoint146YYY.children = new X3D.MFNode();

HAnimJoint146ZZZ.children[0] = HAnimSegment147;

let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.DEF = "BvhPirouette_neck";
HAnimJoint163.name = "neck";
HAnimJoint163.rotation = new X3D.SFRotation([0.329700234008805,-0.510227653481805,-0.794333366614532,0.0543954412302556]);
HAnimJoint163.center = new X3D.SFVec3f([0,54.5818,-3.41376]);
let HAnimSegment164 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment164.DEF = "BvhPirouette_vl5_to_neck";
HAnimSegment164.name = "vl5_to_neck";
let Transform165 = browser.currentScene.createNode("Transform");
Transform165.translation = new X3D.SFVec3f([0,54.5818,-3.41376]);
let TouchSensor166 = browser.currentScene.createNode("TouchSensor");
TouchSensor166.description = "HAnimJoint neck neck, HAnimSegment vl5_to_neck";
Transform165YYY.children = new X3D.MFNode();

Transform165ZZZ.children[0] = TouchSensor166;

let Shape167 = browser.currentScene.createNode("Shape");
Shape167.USE = "HAnimJointShape";
Transform165ZZZ.child[1] = Shape167;

let Shape168 = browser.currentScene.createNode("Shape");
let LineSet169 = browser.currentScene.createNode("LineSet");
LineSet169.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA170 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA170.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA170;

let Coordinate171 = browser.currentScene.createNode("Coordinate");
Coordinate171.point = new X3D.MFVec3f([0,0,0,-0.24384,7.07133,1.2192]);
coord = Coordinate171;

geometry = LineSet169;

Transform165ZZZ.child[2] = Shape168;

HAnimSegment164YYY.children = new X3D.MFNode();

HAnimSegment164ZZZ.children[0] = Transform165;

HAnimJoint163YYY.children = new X3D.MFNode();

HAnimJoint163ZZZ.children[0] = HAnimSegment164;

let HAnimJoint172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint172.DEF = "BvhPirouette_skullbase";
HAnimJoint172.name = "skullbase";
HAnimJoint172.rotation = new X3D.SFRotation([0.158247985792579,-0.305746438380444,0.938869900683956,0.220568510242509]);
HAnimJoint172.center = new X3D.SFVec3f([-0.24384,61.65313,-2.19456]);
let HAnimSegment173 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment173.DEF = "BvhPirouette_skull";
HAnimSegment173.name = "skull";
let Transform174 = browser.currentScene.createNode("Transform");
Transform174.translation = new X3D.SFVec3f([-0.24384,61.65313,-2.19456]);
let TouchSensor175 = browser.currentScene.createNode("TouchSensor");
TouchSensor175.description = "HAnimJoint head skullbase, HAnimSegment skull";
Transform174YYY.children = new X3D.MFNode();

Transform174ZZZ.children[0] = TouchSensor175;

let Shape176 = browser.currentScene.createNode("Shape");
Shape176.USE = "HAnimJointShape";
Transform174ZZZ.child[1] = Shape176;

let Shape177 = browser.currentScene.createNode("Shape");
let LineSet178 = browser.currentScene.createNode("LineSet");
LineSet178.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA179 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA179.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA179;

let Coordinate180 = browser.currentScene.createNode("Coordinate");
Coordinate180.point = new X3D.MFVec3f([0,0,0,4.14528,8.04674,8.04672]);
coord = Coordinate180;

geometry = LineSet178;

Transform174ZZZ.child[2] = Shape177;

let Shape181 = browser.currentScene.createNode("Shape");
let LineSet182 = browser.currentScene.createNode("LineSet");
LineSet182.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA183 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA183.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA183;

let Coordinate184 = browser.currentScene.createNode("Coordinate");
Coordinate184.point = new X3D.MFVec3f([0,0,0,-3.6576,8.04674,8.04672]);
coord = Coordinate184;

geometry = LineSet182;

Transform174ZZZ.child[3] = Shape181;

HAnimSegment173YYY.children = new X3D.MFNode();

HAnimSegment173ZZZ.children[0] = Transform174;

HAnimJoint172YYY.children = new X3D.MFNode();

HAnimJoint172ZZZ.children[0] = HAnimSegment173;

let HAnimJoint185 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint185.DEF = "BvhPirouette_leftEye";
HAnimJoint185.name = "leftEye";
HAnimJoint185.center = new X3D.SFVec3f([3.90144,69.69987,5.85216]);
let HAnimSegment186 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment186.DEF = "BvhPirouette_skullbase_to_leftEye";
HAnimSegment186.name = "skullbase_to_leftEye";
let Transform187 = browser.currentScene.createNode("Transform");
Transform187.translation = new X3D.SFVec3f([3.90144,69.69987,5.85216]);
let HAnimSite188 = browser.currentScene.createNode("HAnimSite");
HAnimSite188.DEF = "BvhPirouette_skullbase_to_leftEye_tip";
HAnimSite188.name = "skullbase_to_leftEye_tip";
HAnimSite188.translation = new X3D.SFVec3f([1,0,0]);
let TouchSensor189 = browser.currentScene.createNode("TouchSensor");
TouchSensor189.description = "HAnimSite skullbase_to_leftEye_tip";
HAnimSite188YYY.children = new X3D.MFNode();

HAnimSite188ZZZ.children[0] = TouchSensor189;

let Shape190 = browser.currentScene.createNode("Shape");
Shape190.USE = "HAnimSiteShape";
HAnimSite188ZZZ.children[1] = Shape190;

let Shape191 = browser.currentScene.createNode("Shape");
let LineSet192 = browser.currentScene.createNode("LineSet");
LineSet192.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA193 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA193.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA193;

let Coordinate194 = browser.currentScene.createNode("Coordinate");
Coordinate194.point = new X3D.MFVec3f([-1,0,0,0,0,0]);
coord = Coordinate194;

geometry = LineSet192;

HAnimSite188ZZZ.children[2] = Shape191;

Transform187YYY.children = new X3D.MFNode();

Transform187ZZZ.children[0] = HAnimSite188;

let TouchSensor195 = browser.currentScene.createNode("TouchSensor");
TouchSensor195.description = "HAnimJoint leftEye leftEye, HAnimSegment skullbase_to_leftEye";
Transform187ZZZ.children[1] = TouchSensor195;

let Shape196 = browser.currentScene.createNode("Shape");
Shape196.USE = "HAnimJointShape";
Transform187ZZZ.child[2] = Shape196;

HAnimSegment186YYY.children = new X3D.MFNode();

HAnimSegment186ZZZ.children[0] = Transform187;

HAnimJoint185YYY.children = new X3D.MFNode();

HAnimJoint185ZZZ.children[0] = HAnimSegment186;

HAnimJoint172ZZZ.children[1] = HAnimJoint185;

let HAnimJoint197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint197.DEF = "BvhPirouette_rightEye";
HAnimJoint197.name = "rightEye";
HAnimJoint197.center = new X3D.SFVec3f([-3.90144,69.69987,5.85216]);
let HAnimSegment198 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment198.DEF = "BvhPirouette_skullbase_to_rightEye";
HAnimSegment198.name = "skullbase_to_rightEye";
let Transform199 = browser.currentScene.createNode("Transform");
Transform199.translation = new X3D.SFVec3f([-3.90144,69.69987,5.85216]);
let HAnimSite200 = browser.currentScene.createNode("HAnimSite");
HAnimSite200.DEF = "BvhPirouette_skullbase_to_rightEye_tip";
HAnimSite200.name = "skullbase_to_rightEye_tip";
HAnimSite200.translation = new X3D.SFVec3f([1,0,0]);
let TouchSensor201 = browser.currentScene.createNode("TouchSensor");
TouchSensor201.description = "HAnimSite skullbase_to_rightEye_tip";
HAnimSite200YYY.children = new X3D.MFNode();

HAnimSite200ZZZ.children[0] = TouchSensor201;

let Shape202 = browser.currentScene.createNode("Shape");
Shape202.USE = "HAnimSiteShape";
HAnimSite200ZZZ.children[1] = Shape202;

let Shape203 = browser.currentScene.createNode("Shape");
let LineSet204 = browser.currentScene.createNode("LineSet");
LineSet204.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA205 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA205.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA205;

let Coordinate206 = browser.currentScene.createNode("Coordinate");
Coordinate206.point = new X3D.MFVec3f([-1,0,0,0,0,0]);
coord = Coordinate206;

geometry = LineSet204;

HAnimSite200ZZZ.children[2] = Shape203;

Transform199YYY.children = new X3D.MFNode();

Transform199ZZZ.children[0] = HAnimSite200;

let TouchSensor207 = browser.currentScene.createNode("TouchSensor");
TouchSensor207.description = "HAnimJoint rightEye rightEye, HAnimSegment skullbase_to_rightEye";
Transform199ZZZ.children[1] = TouchSensor207;

let Shape208 = browser.currentScene.createNode("Shape");
Shape208.USE = "HAnimJointShape";
Transform199ZZZ.child[2] = Shape208;

HAnimSegment198YYY.children = new X3D.MFNode();

HAnimSegment198ZZZ.children[0] = Transform199;

HAnimJoint197YYY.children = new X3D.MFNode();

HAnimJoint197ZZZ.children[0] = HAnimSegment198;

HAnimJoint172ZZZ.children[2] = HAnimJoint197;

HAnimJoint163ZZZ.children[1] = HAnimJoint172;

HAnimJoint146ZZZ.children[1] = HAnimJoint163;

let HAnimJoint209 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint209.DEF = "BvhPirouette_rCollar";
HAnimJoint209.name = "rCollar";
HAnimJoint209.center = new X3D.SFVec3f([-2.68224,51.6558,-6.096]);
let HAnimSegment210 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment210.DEF = "BvhPirouette_vl5_to_rCollar";
HAnimSegment210.name = "vl5_to_rCollar";
let Transform211 = browser.currentScene.createNode("Transform");
Transform211.translation = new X3D.SFVec3f([-2.68224,51.6558,-6.096]);
let TouchSensor212 = browser.currentScene.createNode("TouchSensor");
TouchSensor212.description = "HAnimJoint rCollar rCollar, HAnimSegment vl5_to_rCollar";
Transform211YYY.children = new X3D.MFNode();

Transform211ZZZ.children[0] = TouchSensor212;

let Shape213 = browser.currentScene.createNode("Shape");
Shape213.USE = "HAnimJointShape";
Transform211ZZZ.child[1] = Shape213;

let Shape214 = browser.currentScene.createNode("Shape");
let LineSet215 = browser.currentScene.createNode("LineSet");
LineSet215.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA216 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA216.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA216;

let Coordinate217 = browser.currentScene.createNode("Coordinate");
Coordinate217.point = new X3D.MFVec3f([0,0,0,-8.77824,-1.95073,1.46304]);
coord = Coordinate217;

geometry = LineSet215;

Transform211ZZZ.child[2] = Shape214;

HAnimSegment210YYY.children = new X3D.MFNode();

HAnimSegment210ZZZ.children[0] = Transform211;

HAnimJoint209YYY.children = new X3D.MFNode();

HAnimJoint209ZZZ.children[0] = HAnimSegment210;

let HAnimJoint218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint218.DEF = "BvhPirouette_rShldr";
HAnimJoint218.name = "rShldr";
HAnimJoint218.rotation = new X3D.SFRotation([-0.991273966701197,0.101153375634304,0.0845216986238447,1.95052047853662]);
HAnimJoint218.center = new X3D.SFVec3f([-11.46048,49.70507,-4.63296]);
let HAnimSegment219 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment219.DEF = "BvhPirouette_rCollar_to_rShldr";
HAnimSegment219.name = "rCollar_to_rShldr";
let Transform220 = browser.currentScene.createNode("Transform");
Transform220.translation = new X3D.SFVec3f([-11.46048,49.70507,-4.63296]);
let TouchSensor221 = browser.currentScene.createNode("TouchSensor");
TouchSensor221.description = "HAnimJoint rShldr rShldr, HAnimSegment rCollar_to_rShldr";
Transform220YYY.children = new X3D.MFNode();

Transform220ZZZ.children[0] = TouchSensor221;

let Shape222 = browser.currentScene.createNode("Shape");
Shape222.USE = "HAnimJointShape";
Transform220ZZZ.child[1] = Shape222;

let Shape223 = browser.currentScene.createNode("Shape");
let LineSet224 = browser.currentScene.createNode("LineSet");
LineSet224.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA225 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA225.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA225;

let Coordinate226 = browser.currentScene.createNode("Coordinate");
Coordinate226.point = new X3D.MFVec3f([0,0,0,-28.1742,-1.7115,0.48768]);
coord = Coordinate226;

geometry = LineSet224;

Transform220ZZZ.child[2] = Shape223;

HAnimSegment219YYY.children = new X3D.MFNode();

HAnimSegment219ZZZ.children[0] = Transform220;

HAnimJoint218YYY.children = new X3D.MFNode();

HAnimJoint218ZZZ.children[0] = HAnimSegment219;

let HAnimJoint227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint227.DEF = "BvhPirouette_rForeArm";
HAnimJoint227.name = "rForeArm";
HAnimJoint227.rotation = new X3D.SFRotation([-0.120595277535301,0.85759087073749,-0.49999467743557,0.185930507315219]);
HAnimJoint227.center = new X3D.SFVec3f([-39.63468,47.99357,-4.14528]);
let HAnimSegment228 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment228.DEF = "BvhPirouette_rShldr_to_rForeArm";
HAnimSegment228.name = "rShldr_to_rForeArm";
let Transform229 = browser.currentScene.createNode("Transform");
Transform229.translation = new X3D.SFVec3f([-39.63468,47.99357,-4.14528]);
let TouchSensor230 = browser.currentScene.createNode("TouchSensor");
TouchSensor230.description = "HAnimJoint rForeArm rForeArm, HAnimSegment rShldr_to_rForeArm";
Transform229YYY.children = new X3D.MFNode();

Transform229ZZZ.children[0] = TouchSensor230;

let Shape231 = browser.currentScene.createNode("Shape");
Shape231.USE = "HAnimJointShape";
Transform229ZZZ.child[1] = Shape231;

let Shape232 = browser.currentScene.createNode("Shape");
let LineSet233 = browser.currentScene.createNode("LineSet");
LineSet233.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA234 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA234.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA234;

let Coordinate235 = browser.currentScene.createNode("Coordinate");
Coordinate235.point = new X3D.MFVec3f([0,0,0,-22.5879,0.773209,7.07136]);
coord = Coordinate235;

geometry = LineSet233;

Transform229ZZZ.child[2] = Shape232;

HAnimSegment228YYY.children = new X3D.MFNode();

HAnimSegment228ZZZ.children[0] = Transform229;

HAnimJoint227YYY.children = new X3D.MFNode();

HAnimJoint227ZZZ.children[0] = HAnimSegment228;

let HAnimJoint236 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint236.DEF = "BvhPirouette_rHand";
HAnimJoint236.name = "rHand";
HAnimJoint236.rotation = new X3D.SFRotation([0.990291592045932,0.139005587616552,0.0000966152661426757,1.76943453866354]);
HAnimJoint236.center = new X3D.SFVec3f([-62.22258,48.76678,2.92608]);
let HAnimSegment237 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment237.DEF = "BvhPirouette_rForeArm_to_rHand";
HAnimSegment237.name = "rForeArm_to_rHand";
let Transform238 = browser.currentScene.createNode("Transform");
Transform238.translation = new X3D.SFVec3f([-62.22258,48.76678,2.92608]);
let TouchSensor239 = browser.currentScene.createNode("TouchSensor");
TouchSensor239.description = "HAnimJoint rHand rHand, HAnimSegment rForeArm_to_rHand";
Transform238YYY.children = new X3D.MFNode();

Transform238ZZZ.children[0] = TouchSensor239;

let Shape240 = browser.currentScene.createNode("Shape");
Shape240.USE = "HAnimJointShape";
Transform238ZZZ.child[1] = Shape240;

let Shape241 = browser.currentScene.createNode("Shape");
let LineSet242 = browser.currentScene.createNode("LineSet");
LineSet242.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA243 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA243.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA243;

let Coordinate244 = browser.currentScene.createNode("Coordinate");
Coordinate244.point = new X3D.MFVec3f([0,0,0,-1.2192,-0.487915,3.41376]);
coord = Coordinate244;

geometry = LineSet242;

Transform238ZZZ.child[2] = Shape241;

let Shape245 = browser.currentScene.createNode("Shape");
let LineSet246 = browser.currentScene.createNode("LineSet");
LineSet246.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA247 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA247.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA247;

let Coordinate248 = browser.currentScene.createNode("Coordinate");
Coordinate248.point = new X3D.MFVec3f([0,0,0,-7.75947,0.938293,5.60832]);
coord = Coordinate248;

geometry = LineSet246;

Transform238ZZZ.child[3] = Shape245;

let Shape249 = browser.currentScene.createNode("Shape");
let LineSet250 = browser.currentScene.createNode("LineSet");
LineSet250.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA251 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA251.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA251;

let Coordinate252 = browser.currentScene.createNode("Coordinate");
Coordinate252.point = new X3D.MFVec3f([0,0,0,-8.24714,1.18213,3.41376]);
coord = Coordinate252;

geometry = LineSet250;

Transform238ZZZ.child[4] = Shape249;

let Shape253 = browser.currentScene.createNode("Shape");
let LineSet254 = browser.currentScene.createNode("LineSet");
LineSet254.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA255 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA255.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA255;

let Coordinate256 = browser.currentScene.createNode("Coordinate");
Coordinate256.point = new X3D.MFVec3f([0,0,0,-8.82822,0.546677,1.51678]);
coord = Coordinate256;

geometry = LineSet254;

Transform238ZZZ.child[5] = Shape253;

let Shape257 = browser.currentScene.createNode("Shape");
let LineSet258 = browser.currentScene.createNode("LineSet");
LineSet258.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA259 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA259.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA259;

let Coordinate260 = browser.currentScene.createNode("Coordinate");
Coordinate260.point = new X3D.MFVec3f([0,0,0,-8.27202,-0.0477905,-0.4584]);
coord = Coordinate260;

geometry = LineSet258;

Transform238ZZZ.child[6] = Shape257;

HAnimSegment237YYY.children = new X3D.MFNode();

HAnimSegment237ZZZ.children[0] = Transform238;

HAnimJoint236YYY.children = new X3D.MFNode();

HAnimJoint236ZZZ.children[0] = HAnimSegment237;

let HAnimJoint261 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint261.DEF = "BvhPirouette_rThumb1";
HAnimJoint261.name = "rThumb1";
HAnimJoint261.center = new X3D.SFVec3f([-63.44178,48.27886,6.33984]);
let HAnimSegment262 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment262.DEF = "BvhPirouette_rHand_to_rThumb1";
HAnimSegment262.name = "rHand_to_rThumb1";
let Transform263 = browser.currentScene.createNode("Transform");
Transform263.translation = new X3D.SFVec3f([-63.44178,48.27886,6.33984]);
let TouchSensor264 = browser.currentScene.createNode("TouchSensor");
TouchSensor264.description = "HAnimJoint rThumb1 rThumb1, HAnimSegment rHand_to_rThumb1";
Transform263YYY.children = new X3D.MFNode();

Transform263ZZZ.children[0] = TouchSensor264;

let Shape265 = browser.currentScene.createNode("Shape");
Shape265.USE = "HAnimJointShape";
Transform263ZZZ.child[1] = Shape265;

let Shape266 = browser.currentScene.createNode("Shape");
let LineSet267 = browser.currentScene.createNode("LineSet");
LineSet267.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA268 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA268.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA268;

let Coordinate269 = browser.currentScene.createNode("Coordinate");
Coordinate269.point = new X3D.MFVec3f([0,0,0,-3.37035,-0.52449,3.41376]);
coord = Coordinate269;

geometry = LineSet267;

Transform263ZZZ.child[2] = Shape266;

HAnimSegment262YYY.children = new X3D.MFNode();

HAnimSegment262ZZZ.children[0] = Transform263;

HAnimJoint261YYY.children = new X3D.MFNode();

HAnimJoint261ZZZ.children[0] = HAnimSegment262;

let HAnimJoint270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint270.DEF = "BvhPirouette_rThumb2";
HAnimJoint270.name = "rThumb2";
HAnimJoint270.center = new X3D.SFVec3f([-66.81213,47.75437,9.7536]);
let HAnimSegment271 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment271.DEF = "BvhPirouette_rThumb1_to_rThumb2";
HAnimSegment271.name = "rThumb1_to_rThumb2";
let Transform272 = browser.currentScene.createNode("Transform");
Transform272.translation = new X3D.SFVec3f([-66.81213,47.75437,9.7536]);
let HAnimSite273 = browser.currentScene.createNode("HAnimSite");
HAnimSite273.DEF = "BvhPirouette_rThumb1_to_rThumb2_tip";
HAnimSite273.name = "rThumb1_to_rThumb2_tip";
HAnimSite273.translation = new X3D.SFVec3f([-1.78271,-1.18214,1.43049]);
let TouchSensor274 = browser.currentScene.createNode("TouchSensor");
TouchSensor274.description = "HAnimSite rThumb1_to_rThumb2_tip";
HAnimSite273YYY.children = new X3D.MFNode();

HAnimSite273ZZZ.children[0] = TouchSensor274;

let Shape275 = browser.currentScene.createNode("Shape");
Shape275.USE = "HAnimSiteShape";
HAnimSite273ZZZ.children[1] = Shape275;

let Shape276 = browser.currentScene.createNode("Shape");
let LineSet277 = browser.currentScene.createNode("LineSet");
LineSet277.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA278 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA278.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA278;

let Coordinate279 = browser.currentScene.createNode("Coordinate");
Coordinate279.point = new X3D.MFVec3f([1.78271,1.18214,-1.43049,0,0,0]);
coord = Coordinate279;

geometry = LineSet277;

HAnimSite273ZZZ.children[2] = Shape276;

Transform272YYY.children = new X3D.MFNode();

Transform272ZZZ.children[0] = HAnimSite273;

let TouchSensor280 = browser.currentScene.createNode("TouchSensor");
TouchSensor280.description = "HAnimJoint rThumb2 rThumb2, HAnimSegment rThumb1_to_rThumb2";
Transform272ZZZ.children[1] = TouchSensor280;

let Shape281 = browser.currentScene.createNode("Shape");
Shape281.USE = "HAnimJointShape";
Transform272ZZZ.child[2] = Shape281;

HAnimSegment271YYY.children = new X3D.MFNode();

HAnimSegment271ZZZ.children[0] = Transform272;

HAnimJoint270YYY.children = new X3D.MFNode();

HAnimJoint270ZZZ.children[0] = HAnimSegment271;

HAnimJoint261ZZZ.children[1] = HAnimJoint270;

HAnimJoint236ZZZ.children[1] = HAnimJoint261;

let HAnimJoint282 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint282.DEF = "BvhPirouette_rIndex1";
HAnimJoint282.name = "rIndex1";
HAnimJoint282.center = new X3D.SFVec3f([-69.98205,49.70507,8.5344]);
let HAnimSegment283 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment283.DEF = "BvhPirouette_rHand_to_rIndex1";
HAnimSegment283.name = "rHand_to_rIndex1";
let Transform284 = browser.currentScene.createNode("Transform");
Transform284.translation = new X3D.SFVec3f([-69.98205,49.70507,8.5344]);
let TouchSensor285 = browser.currentScene.createNode("TouchSensor");
TouchSensor285.description = "HAnimJoint rIndex1 rIndex1, HAnimSegment rHand_to_rIndex1";
Transform284YYY.children = new X3D.MFNode();

Transform284ZZZ.children[0] = TouchSensor285;

let Shape286 = browser.currentScene.createNode("Shape");
Shape286.USE = "HAnimJointShape";
Transform284ZZZ.child[1] = Shape286;

let Shape287 = browser.currentScene.createNode("Shape");
let LineSet288 = browser.currentScene.createNode("LineSet");
LineSet288.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA289 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA289.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA289;

let Coordinate290 = browser.currentScene.createNode("Coordinate");
Coordinate290.point = new X3D.MFVec3f([0,0,0,-2.54057,-0.884171,1.56538]);
coord = Coordinate290;

geometry = LineSet288;

Transform284ZZZ.child[2] = Shape287;

HAnimSegment283YYY.children = new X3D.MFNode();

HAnimSegment283ZZZ.children[0] = Transform284;

HAnimJoint282YYY.children = new X3D.MFNode();

HAnimJoint282ZZZ.children[0] = HAnimSegment283;

let HAnimJoint291 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint291.DEF = "BvhPirouette_rIndex2";
HAnimJoint291.name = "rIndex2";
HAnimJoint291.rotation = new X3D.SFRotation([0.572691999548646,0.0826988447052087,0.81558860630675,0.165700000000001]);
HAnimJoint291.center = new X3D.SFVec3f([-72.52262,48.8209,10.09978]);
let HAnimSegment292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment292.DEF = "BvhPirouette_rIndex1_to_rIndex2";
HAnimSegment292.name = "rIndex1_to_rIndex2";
let Transform293 = browser.currentScene.createNode("Transform");
Transform293.translation = new X3D.SFVec3f([-72.52262,48.8209,10.09978]);
let HAnimSite294 = browser.currentScene.createNode("HAnimSite");
HAnimSite294.DEF = "BvhPirouette_rIndex1_to_rIndex2_tip";
HAnimSite294.name = "rIndex1_to_rIndex2_tip";
HAnimSite294.translation = new X3D.SFVec3f([-1.62519,-0.234802,1.16502]);
let TouchSensor295 = browser.currentScene.createNode("TouchSensor");
TouchSensor295.description = "HAnimSite rIndex1_to_rIndex2_tip";
HAnimSite294YYY.children = new X3D.MFNode();

HAnimSite294ZZZ.children[0] = TouchSensor295;

let Shape296 = browser.currentScene.createNode("Shape");
Shape296.USE = "HAnimSiteShape";
HAnimSite294ZZZ.children[1] = Shape296;

let Shape297 = browser.currentScene.createNode("Shape");
let LineSet298 = browser.currentScene.createNode("LineSet");
LineSet298.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA299 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA299.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA299;

let Coordinate300 = browser.currentScene.createNode("Coordinate");
Coordinate300.point = new X3D.MFVec3f([1.62519,0.234802,-1.16502,0,0,0]);
coord = Coordinate300;

geometry = LineSet298;

HAnimSite294ZZZ.children[2] = Shape297;

Transform293YYY.children = new X3D.MFNode();

Transform293ZZZ.children[0] = HAnimSite294;

let TouchSensor301 = browser.currentScene.createNode("TouchSensor");
TouchSensor301.description = "HAnimJoint rIndex2 rIndex2, HAnimSegment rIndex1_to_rIndex2";
Transform293ZZZ.children[1] = TouchSensor301;

let Shape302 = browser.currentScene.createNode("Shape");
Shape302.USE = "HAnimJointShape";
Transform293ZZZ.child[2] = Shape302;

HAnimSegment292YYY.children = new X3D.MFNode();

HAnimSegment292ZZZ.children[0] = Transform293;

HAnimJoint291YYY.children = new X3D.MFNode();

HAnimJoint291ZZZ.children[0] = HAnimSegment292;

HAnimJoint282ZZZ.children[1] = HAnimJoint291;

HAnimJoint236ZZZ.children[2] = HAnimJoint282;

let HAnimJoint303 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint303.DEF = "BvhPirouette_rMid1";
HAnimJoint303.name = "rMid1";
HAnimJoint303.center = new X3D.SFVec3f([-70.46972,49.94891,6.33984]);
let HAnimSegment304 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment304.DEF = "BvhPirouette_rHand_to_rMid1";
HAnimSegment304.name = "rHand_to_rMid1";
let Transform305 = browser.currentScene.createNode("Transform");
Transform305.translation = new X3D.SFVec3f([-70.46972,49.94891,6.33984]);
let TouchSensor306 = browser.currentScene.createNode("TouchSensor");
TouchSensor306.description = "HAnimJoint rMid1 rMid1, HAnimSegment rHand_to_rMid1";
Transform305YYY.children = new X3D.MFNode();

Transform305ZZZ.children[0] = TouchSensor306;

let Shape307 = browser.currentScene.createNode("Shape");
Shape307.USE = "HAnimJointShape";
Transform305ZZZ.child[1] = Shape307;

let Shape308 = browser.currentScene.createNode("Shape");
let LineSet309 = browser.currentScene.createNode("LineSet");
LineSet309.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA310 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA310.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA310;

let Coordinate311 = browser.currentScene.createNode("Coordinate");
Coordinate311.point = new X3D.MFVec3f([0,0,0,-3.10165,-0.590103,1.0647]);
coord = Coordinate311;

geometry = LineSet309;

Transform305ZZZ.child[2] = Shape308;

HAnimSegment304YYY.children = new X3D.MFNode();

HAnimSegment304ZZZ.children[0] = Transform305;

HAnimJoint303YYY.children = new X3D.MFNode();

HAnimJoint303ZZZ.children[0] = HAnimSegment304;

let HAnimJoint312 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint312.DEF = "BvhPirouette_rMid2";
HAnimJoint312.name = "rMid2";
HAnimJoint312.rotation = new X3D.SFRotation([0.314093463783051,0.0415991343310249,0.948480262331181,0.053499999999996]);
HAnimJoint312.center = new X3D.SFVec3f([-73.57137,49.35881,7.40454]);
let HAnimSegment313 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment313.DEF = "BvhPirouette_rMid1_to_rMid2";
HAnimSegment313.name = "rMid1_to_rMid2";
let Transform314 = browser.currentScene.createNode("Transform");
Transform314.translation = new X3D.SFVec3f([-73.57137,49.35881,7.40454]);
let HAnimSite315 = browser.currentScene.createNode("HAnimSite");
HAnimSite315.DEF = "BvhPirouette_rMid1_to_rMid2_tip";
HAnimSite315.name = "rMid1_to_rMid2_tip";
HAnimSite315.translation = new X3D.SFVec3f([-2.48547,-0.328903,0.83742]);
let TouchSensor316 = browser.currentScene.createNode("TouchSensor");
TouchSensor316.description = "HAnimSite rMid1_to_rMid2_tip";
HAnimSite315YYY.children = new X3D.MFNode();

HAnimSite315ZZZ.children[0] = TouchSensor316;

let Shape317 = browser.currentScene.createNode("Shape");
Shape317.USE = "HAnimSiteShape";
HAnimSite315ZZZ.children[1] = Shape317;

let Shape318 = browser.currentScene.createNode("Shape");
let LineSet319 = browser.currentScene.createNode("LineSet");
LineSet319.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA320 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA320.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA320;

let Coordinate321 = browser.currentScene.createNode("Coordinate");
Coordinate321.point = new X3D.MFVec3f([2.48547,0.328903,-0.83742,0,0,0]);
coord = Coordinate321;

geometry = LineSet319;

HAnimSite315ZZZ.children[2] = Shape318;

Transform314YYY.children = new X3D.MFNode();

Transform314ZZZ.children[0] = HAnimSite315;

let TouchSensor322 = browser.currentScene.createNode("TouchSensor");
TouchSensor322.description = "HAnimJoint rMid2 rMid2, HAnimSegment rMid1_to_rMid2";
Transform314ZZZ.children[1] = TouchSensor322;

let Shape323 = browser.currentScene.createNode("Shape");
Shape323.USE = "HAnimJointShape";
Transform314ZZZ.child[2] = Shape323;

HAnimSegment313YYY.children = new X3D.MFNode();

HAnimSegment313ZZZ.children[0] = Transform314;

HAnimJoint312YYY.children = new X3D.MFNode();

HAnimJoint312ZZZ.children[0] = HAnimSegment313;

HAnimJoint303ZZZ.children[1] = HAnimJoint312;

HAnimJoint236ZZZ.children[3] = HAnimJoint303;

let HAnimJoint324 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint324.DEF = "BvhPirouette_rRing1";
HAnimJoint324.name = "rRing1";
HAnimJoint324.center = new X3D.SFVec3f([-71.0508,49.31346,4.44286]);
let HAnimSegment325 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment325.DEF = "BvhPirouette_rHand_to_rRing1";
HAnimSegment325.name = "rHand_to_rRing1";
let Transform326 = browser.currentScene.createNode("Transform");
Transform326.translation = new X3D.SFVec3f([-71.0508,49.31346,4.44286]);
let TouchSensor327 = browser.currentScene.createNode("TouchSensor");
TouchSensor327.description = "HAnimJoint rRing1 rRing1, HAnimSegment rHand_to_rRing1";
Transform326YYY.children = new X3D.MFNode();

Transform326ZZZ.children[0] = TouchSensor327;

let Shape328 = browser.currentScene.createNode("Shape");
Shape328.USE = "HAnimJointShape";
Transform326ZZZ.child[1] = Shape328;

let Shape329 = browser.currentScene.createNode("Shape");
let LineSet330 = browser.currentScene.createNode("LineSet");
LineSet330.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA331 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA331.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA331;

let Coordinate332 = browser.currentScene.createNode("Coordinate");
Coordinate332.point = new X3D.MFVec3f([0,0,0,-2.60934,-0.819778,-0.0198488]);
coord = Coordinate332;

geometry = LineSet330;

Transform326ZZZ.child[2] = Shape329;

HAnimSegment325YYY.children = new X3D.MFNode();

HAnimSegment325ZZZ.children[0] = Transform326;

HAnimJoint324YYY.children = new X3D.MFNode();

HAnimJoint324ZZZ.children[0] = HAnimSegment325;

let HAnimJoint333 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint333.DEF = "BvhPirouette_rRing2";
HAnimJoint333.name = "rRing2";
HAnimJoint333.rotation = new X3D.SFRotation([0.070597535483054,0.00889968931726884,0.99746517909839,0.179899999999999]);
HAnimJoint333.center = new X3D.SFVec3f([-73.66014,48.49368,4.423011]);
let HAnimSegment334 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment334.DEF = "BvhPirouette_rRing1_to_rRing2";
HAnimSegment334.name = "rRing1_to_rRing2";
let Transform335 = browser.currentScene.createNode("Transform");
Transform335.translation = new X3D.SFVec3f([-73.66014,48.49368,4.423011]);
let HAnimSite336 = browser.currentScene.createNode("HAnimSite");
HAnimSite336.DEF = "BvhPirouette_rRing1_to_rRing2_tip";
HAnimSite336.name = "rRing1_to_rRing2_tip";
HAnimSite336.translation = new X3D.SFVec3f([-2.33842,-0.294052,0.168128]);
let TouchSensor337 = browser.currentScene.createNode("TouchSensor");
TouchSensor337.description = "HAnimSite rRing1_to_rRing2_tip";
HAnimSite336YYY.children = new X3D.MFNode();

HAnimSite336ZZZ.children[0] = TouchSensor337;

let Shape338 = browser.currentScene.createNode("Shape");
Shape338.USE = "HAnimSiteShape";
HAnimSite336ZZZ.children[1] = Shape338;

let Shape339 = browser.currentScene.createNode("Shape");
let LineSet340 = browser.currentScene.createNode("LineSet");
LineSet340.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA341 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA341.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA341;

let Coordinate342 = browser.currentScene.createNode("Coordinate");
Coordinate342.point = new X3D.MFVec3f([2.33842,0.294052,-0.168128,0,0,0]);
coord = Coordinate342;

geometry = LineSet340;

HAnimSite336ZZZ.children[2] = Shape339;

Transform335YYY.children = new X3D.MFNode();

Transform335ZZZ.children[0] = HAnimSite336;

let TouchSensor343 = browser.currentScene.createNode("TouchSensor");
TouchSensor343.description = "HAnimJoint rRing2 rRing2, HAnimSegment rRing1_to_rRing2";
Transform335ZZZ.children[1] = TouchSensor343;

let Shape344 = browser.currentScene.createNode("Shape");
Shape344.USE = "HAnimJointShape";
Transform335ZZZ.child[2] = Shape344;

HAnimSegment334YYY.children = new X3D.MFNode();

HAnimSegment334ZZZ.children[0] = Transform335;

HAnimJoint333YYY.children = new X3D.MFNode();

HAnimJoint333ZZZ.children[0] = HAnimSegment334;

HAnimJoint324ZZZ.children[1] = HAnimJoint333;

HAnimJoint236ZZZ.children[4] = HAnimJoint324;

let HAnimJoint345 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint345.DEF = "BvhPirouette_rPinky1";
HAnimJoint345.name = "rPinky1";
HAnimJoint345.center = new X3D.SFVec3f([-70.4946,48.71899,2.46768]);
let HAnimSegment346 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment346.DEF = "BvhPirouette_rHand_to_rPinky1";
HAnimSegment346.name = "rHand_to_rPinky1";
let Transform347 = browser.currentScene.createNode("Transform");
Transform347.translation = new X3D.SFVec3f([-70.4946,48.71899,2.46768]);
let TouchSensor348 = browser.currentScene.createNode("TouchSensor");
TouchSensor348.description = "HAnimJoint rPinky1 rPinky1, HAnimSegment rHand_to_rPinky1";
Transform347YYY.children = new X3D.MFNode();

Transform347ZZZ.children[0] = TouchSensor348;

let Shape349 = browser.currentScene.createNode("Shape");
Shape349.USE = "HAnimJointShape";
Transform347ZZZ.child[1] = Shape349;

let Shape350 = browser.currentScene.createNode("Shape");
let LineSet351 = browser.currentScene.createNode("LineSet");
LineSet351.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA352 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA352.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA352;

let Coordinate353 = browser.currentScene.createNode("Coordinate");
Coordinate353.point = new X3D.MFVec3f([0,0,0,-1.82734,-0.647385,-0.700984]);
coord = Coordinate353;

geometry = LineSet351;

Transform347ZZZ.child[2] = Shape350;

HAnimSegment346YYY.children = new X3D.MFNode();

HAnimSegment346ZZZ.children[0] = Transform347;

HAnimJoint345YYY.children = new X3D.MFNode();

HAnimJoint345ZZZ.children[0] = HAnimSegment346;

let HAnimJoint354 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint354.DEF = "BvhPirouette_rPinky2";
HAnimJoint354.name = "rPinky2";
HAnimJoint354.rotation = new X3D.SFRotation([-0.310297066155107,-0.0948991027332247,0.945891056642331,0.0410000000000003]);
HAnimJoint354.center = new X3D.SFVec3f([-72.32194,48.0716,1.766696]);
let HAnimSegment355 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment355.DEF = "BvhPirouette_rPinky1_to_rPinky2";
HAnimSegment355.name = "rPinky1_to_rPinky2";
let Transform356 = browser.currentScene.createNode("Transform");
Transform356.translation = new X3D.SFVec3f([-72.32194,48.0716,1.766696]);
let HAnimSite357 = browser.currentScene.createNode("HAnimSite");
HAnimSite357.DEF = "BvhPirouette_rPinky1_to_rPinky2_tip";
HAnimSite357.name = "rPinky1_to_rPinky2_tip";
HAnimSite357.translation = new X3D.SFVec3f([-1.69225,-0.51767,-0.607171]);
let TouchSensor358 = browser.currentScene.createNode("TouchSensor");
TouchSensor358.description = "HAnimSite rPinky1_to_rPinky2_tip";
HAnimSite357YYY.children = new X3D.MFNode();

HAnimSite357ZZZ.children[0] = TouchSensor358;

let Shape359 = browser.currentScene.createNode("Shape");
Shape359.USE = "HAnimSiteShape";
HAnimSite357ZZZ.children[1] = Shape359;

let Shape360 = browser.currentScene.createNode("Shape");
let LineSet361 = browser.currentScene.createNode("LineSet");
LineSet361.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA362 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA362.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA362;

let Coordinate363 = browser.currentScene.createNode("Coordinate");
Coordinate363.point = new X3D.MFVec3f([1.69225,0.51767,0.607171,0,0,0]);
coord = Coordinate363;

geometry = LineSet361;

HAnimSite357ZZZ.children[2] = Shape360;

Transform356YYY.children = new X3D.MFNode();

Transform356ZZZ.children[0] = HAnimSite357;

let TouchSensor364 = browser.currentScene.createNode("TouchSensor");
TouchSensor364.description = "HAnimJoint rPinky2 rPinky2, HAnimSegment rPinky1_to_rPinky2";
Transform356ZZZ.children[1] = TouchSensor364;

let Shape365 = browser.currentScene.createNode("Shape");
Shape365.USE = "HAnimJointShape";
Transform356ZZZ.child[2] = Shape365;

HAnimSegment355YYY.children = new X3D.MFNode();

HAnimSegment355ZZZ.children[0] = Transform356;

HAnimJoint354YYY.children = new X3D.MFNode();

HAnimJoint354ZZZ.children[0] = HAnimSegment355;

HAnimJoint345ZZZ.children[1] = HAnimJoint354;

HAnimJoint236ZZZ.children[5] = HAnimJoint345;

HAnimJoint227ZZZ.children[1] = HAnimJoint236;

HAnimJoint218ZZZ.children[1] = HAnimJoint227;

HAnimJoint209ZZZ.children[1] = HAnimJoint218;

HAnimJoint146ZZZ.children[2] = HAnimJoint209;

let HAnimJoint366 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint366.DEF = "BvhPirouette_lCollar";
HAnimJoint366.name = "lCollar";
HAnimJoint366.center = new X3D.SFVec3f([2.68224,51.6558,-6.096]);
let HAnimSegment367 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment367.DEF = "BvhPirouette_vl5_to_lCollar";
HAnimSegment367.name = "vl5_to_lCollar";
let Transform368 = browser.currentScene.createNode("Transform");
Transform368.translation = new X3D.SFVec3f([2.68224,51.6558,-6.096]);
let TouchSensor369 = browser.currentScene.createNode("TouchSensor");
TouchSensor369.description = "HAnimJoint lCollar lCollar, HAnimSegment vl5_to_lCollar";
Transform368YYY.children = new X3D.MFNode();

Transform368ZZZ.children[0] = TouchSensor369;

let Shape370 = browser.currentScene.createNode("Shape");
Shape370.USE = "HAnimJointShape";
Transform368ZZZ.child[1] = Shape370;

let Shape371 = browser.currentScene.createNode("Shape");
let LineSet372 = browser.currentScene.createNode("LineSet");
LineSet372.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA373 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA373.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA373;

let Coordinate374 = browser.currentScene.createNode("Coordinate");
Coordinate374.point = new X3D.MFVec3f([0,0,0,8.77824,-1.95073,1.46304]);
coord = Coordinate374;

geometry = LineSet372;

Transform368ZZZ.child[2] = Shape371;

HAnimSegment367YYY.children = new X3D.MFNode();

HAnimSegment367ZZZ.children[0] = Transform368;

HAnimJoint366YYY.children = new X3D.MFNode();

HAnimJoint366ZZZ.children[0] = HAnimSegment367;

let HAnimJoint375 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint375.DEF = "BvhPirouette_lShldr";
HAnimJoint375.name = "lShldr";
HAnimJoint375.rotation = new X3D.SFRotation([-0.701409289484404,0.682061964144576,0.206921448120372,0.408054819441743]);
HAnimJoint375.center = new X3D.SFVec3f([11.46048,49.70507,-4.63296]);
let HAnimSegment376 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment376.DEF = "BvhPirouette_lCollar_to_lShldr";
HAnimSegment376.name = "lCollar_to_lShldr";
let Transform377 = browser.currentScene.createNode("Transform");
Transform377.translation = new X3D.SFVec3f([11.46048,49.70507,-4.63296]);
let TouchSensor378 = browser.currentScene.createNode("TouchSensor");
TouchSensor378.description = "HAnimJoint lShldr lShldr, HAnimSegment lCollar_to_lShldr";
Transform377YYY.children = new X3D.MFNode();

Transform377ZZZ.children[0] = TouchSensor378;

let Shape379 = browser.currentScene.createNode("Shape");
Shape379.USE = "HAnimJointShape";
Transform377ZZZ.child[1] = Shape379;

let Shape380 = browser.currentScene.createNode("Shape");
let LineSet381 = browser.currentScene.createNode("LineSet");
LineSet381.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA382 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA382.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA382;

let Coordinate383 = browser.currentScene.createNode("Coordinate");
Coordinate383.point = new X3D.MFVec3f([0,0,0,28.1742,-1.7115,0.48768]);
coord = Coordinate383;

geometry = LineSet381;

Transform377ZZZ.child[2] = Shape380;

HAnimSegment376YYY.children = new X3D.MFNode();

HAnimSegment376ZZZ.children[0] = Transform377;

HAnimJoint375YYY.children = new X3D.MFNode();

HAnimJoint375ZZZ.children[0] = HAnimSegment376;

let HAnimJoint384 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint384.DEF = "BvhPirouette_lForeArm";
HAnimJoint384.name = "lForeArm";
HAnimJoint384.rotation = new X3D.SFRotation([-0.120500119897679,-0.857600853313272,0.500000497500742,0.388918137512711]);
HAnimJoint384.center = new X3D.SFVec3f([39.63468,47.99357,-4.14528]);
let HAnimSegment385 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment385.DEF = "BvhPirouette_lShldr_to_lForeArm";
HAnimSegment385.name = "lShldr_to_lForeArm";
let Transform386 = browser.currentScene.createNode("Transform");
Transform386.translation = new X3D.SFVec3f([39.63468,47.99357,-4.14528]);
let TouchSensor387 = browser.currentScene.createNode("TouchSensor");
TouchSensor387.description = "HAnimJoint lForeArm lForeArm, HAnimSegment lShldr_to_lForeArm";
Transform386YYY.children = new X3D.MFNode();

Transform386ZZZ.children[0] = TouchSensor387;

let Shape388 = browser.currentScene.createNode("Shape");
Shape388.USE = "HAnimJointShape";
Transform386ZZZ.child[1] = Shape388;

let Shape389 = browser.currentScene.createNode("Shape");
let LineSet390 = browser.currentScene.createNode("LineSet");
LineSet390.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA391 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA391.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA391;

let Coordinate392 = browser.currentScene.createNode("Coordinate");
Coordinate392.point = new X3D.MFVec3f([0,0,0,22.5879,0.773209,7.07136]);
coord = Coordinate392;

geometry = LineSet390;

Transform386ZZZ.child[2] = Shape389;

HAnimSegment385YYY.children = new X3D.MFNode();

HAnimSegment385ZZZ.children[0] = Transform386;

HAnimJoint384YYY.children = new X3D.MFNode();

HAnimJoint384ZZZ.children[0] = HAnimSegment385;

let HAnimJoint393 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint393.DEF = "BvhPirouette_lHand";
HAnimJoint393.name = "lHand";
HAnimJoint393.rotation = new X3D.SFRotation([0.990264979898219,-0.139195077453127,0,0.474008130850952]);
HAnimJoint393.center = new X3D.SFVec3f([62.22258,48.76678,2.92608]);
let HAnimSegment394 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment394.DEF = "BvhPirouette_lForeArm_to_lHand";
HAnimSegment394.name = "lForeArm_to_lHand";
let Transform395 = browser.currentScene.createNode("Transform");
Transform395.translation = new X3D.SFVec3f([62.22258,48.76678,2.92608]);
let TouchSensor396 = browser.currentScene.createNode("TouchSensor");
TouchSensor396.description = "HAnimJoint lHand lHand, HAnimSegment lForeArm_to_lHand";
Transform395YYY.children = new X3D.MFNode();

Transform395ZZZ.children[0] = TouchSensor396;

let Shape397 = browser.currentScene.createNode("Shape");
Shape397.USE = "HAnimJointShape";
Transform395ZZZ.child[1] = Shape397;

let Shape398 = browser.currentScene.createNode("Shape");
let LineSet399 = browser.currentScene.createNode("LineSet");
LineSet399.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA400 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA400.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA400;

let Coordinate401 = browser.currentScene.createNode("Coordinate");
Coordinate401.point = new X3D.MFVec3f([0,0,0,1.2192,-0.487915,3.41376]);
coord = Coordinate401;

geometry = LineSet399;

Transform395ZZZ.child[2] = Shape398;

let Shape402 = browser.currentScene.createNode("Shape");
let LineSet403 = browser.currentScene.createNode("LineSet");
LineSet403.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA404 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA404.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA404;

let Coordinate405 = browser.currentScene.createNode("Coordinate");
Coordinate405.point = new X3D.MFVec3f([0,0,0,7.75947,0.938293,5.60832]);
coord = Coordinate405;

geometry = LineSet403;

Transform395ZZZ.child[3] = Shape402;

let Shape406 = browser.currentScene.createNode("Shape");
let LineSet407 = browser.currentScene.createNode("LineSet");
LineSet407.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA408 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA408.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA408;

let Coordinate409 = browser.currentScene.createNode("Coordinate");
Coordinate409.point = new X3D.MFVec3f([0,0,0,8.24714,1.18213,3.41376]);
coord = Coordinate409;

geometry = LineSet407;

Transform395ZZZ.child[4] = Shape406;

let Shape410 = browser.currentScene.createNode("Shape");
let LineSet411 = browser.currentScene.createNode("LineSet");
LineSet411.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA412 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA412.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA412;

let Coordinate413 = browser.currentScene.createNode("Coordinate");
Coordinate413.point = new X3D.MFVec3f([0,0,0,8.82822,0.546677,1.51678]);
coord = Coordinate413;

geometry = LineSet411;

Transform395ZZZ.child[5] = Shape410;

let Shape414 = browser.currentScene.createNode("Shape");
let LineSet415 = browser.currentScene.createNode("LineSet");
LineSet415.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA416 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA416.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA416;

let Coordinate417 = browser.currentScene.createNode("Coordinate");
Coordinate417.point = new X3D.MFVec3f([0,0,0,8.27202,-0.0477905,-0.4584]);
coord = Coordinate417;

geometry = LineSet415;

Transform395ZZZ.child[6] = Shape414;

HAnimSegment394YYY.children = new X3D.MFNode();

HAnimSegment394ZZZ.children[0] = Transform395;

HAnimJoint393YYY.children = new X3D.MFNode();

HAnimJoint393ZZZ.children[0] = HAnimSegment394;

let HAnimJoint418 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint418.DEF = "BvhPirouette_lThumb1";
HAnimJoint418.name = "lThumb1";
HAnimJoint418.center = new X3D.SFVec3f([63.44178,48.27886,6.33984]);
let HAnimSegment419 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment419.DEF = "BvhPirouette_lHand_to_lThumb1";
HAnimSegment419.name = "lHand_to_lThumb1";
let Transform420 = browser.currentScene.createNode("Transform");
Transform420.translation = new X3D.SFVec3f([63.44178,48.27886,6.33984]);
let TouchSensor421 = browser.currentScene.createNode("TouchSensor");
TouchSensor421.description = "HAnimJoint lThumb1 lThumb1, HAnimSegment lHand_to_lThumb1";
Transform420YYY.children = new X3D.MFNode();

Transform420ZZZ.children[0] = TouchSensor421;

let Shape422 = browser.currentScene.createNode("Shape");
Shape422.USE = "HAnimJointShape";
Transform420ZZZ.child[1] = Shape422;

let Shape423 = browser.currentScene.createNode("Shape");
let LineSet424 = browser.currentScene.createNode("LineSet");
LineSet424.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA425 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA425.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA425;

let Coordinate426 = browser.currentScene.createNode("Coordinate");
Coordinate426.point = new X3D.MFVec3f([0,0,0,3.37035,-0.52449,3.41376]);
coord = Coordinate426;

geometry = LineSet424;

Transform420ZZZ.child[2] = Shape423;

HAnimSegment419YYY.children = new X3D.MFNode();

HAnimSegment419ZZZ.children[0] = Transform420;

HAnimJoint418YYY.children = new X3D.MFNode();

HAnimJoint418ZZZ.children[0] = HAnimSegment419;

let HAnimJoint427 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint427.DEF = "BvhPirouette_lThumb2";
HAnimJoint427.name = "lThumb2";
HAnimJoint427.center = new X3D.SFVec3f([66.81213,47.75437,9.7536]);
let HAnimSegment428 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment428.DEF = "BvhPirouette_lThumb1_to_lThumb2";
HAnimSegment428.name = "lThumb1_to_lThumb2";
let Transform429 = browser.currentScene.createNode("Transform");
Transform429.translation = new X3D.SFVec3f([66.81213,47.75437,9.7536]);
let HAnimSite430 = browser.currentScene.createNode("HAnimSite");
HAnimSite430.DEF = "BvhPirouette_lThumb1_to_lThumb2_tip";
HAnimSite430.name = "lThumb1_to_lThumb2_tip";
HAnimSite430.translation = new X3D.SFVec3f([1.78271,-1.18214,1.43049]);
let TouchSensor431 = browser.currentScene.createNode("TouchSensor");
TouchSensor431.description = "HAnimSite lThumb1_to_lThumb2_tip";
HAnimSite430YYY.children = new X3D.MFNode();

HAnimSite430ZZZ.children[0] = TouchSensor431;

let Shape432 = browser.currentScene.createNode("Shape");
Shape432.USE = "HAnimSiteShape";
HAnimSite430ZZZ.children[1] = Shape432;

let Shape433 = browser.currentScene.createNode("Shape");
let LineSet434 = browser.currentScene.createNode("LineSet");
LineSet434.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA435 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA435.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA435;

let Coordinate436 = browser.currentScene.createNode("Coordinate");
Coordinate436.point = new X3D.MFVec3f([-1.78271,1.18214,-1.43049,0,0,0]);
coord = Coordinate436;

geometry = LineSet434;

HAnimSite430ZZZ.children[2] = Shape433;

Transform429YYY.children = new X3D.MFNode();

Transform429ZZZ.children[0] = HAnimSite430;

let TouchSensor437 = browser.currentScene.createNode("TouchSensor");
TouchSensor437.description = "HAnimJoint lThumb2 lThumb2, HAnimSegment lThumb1_to_lThumb2";
Transform429ZZZ.children[1] = TouchSensor437;

let Shape438 = browser.currentScene.createNode("Shape");
Shape438.USE = "HAnimJointShape";
Transform429ZZZ.child[2] = Shape438;

HAnimSegment428YYY.children = new X3D.MFNode();

HAnimSegment428ZZZ.children[0] = Transform429;

HAnimJoint427YYY.children = new X3D.MFNode();

HAnimJoint427ZZZ.children[0] = HAnimSegment428;

HAnimJoint418ZZZ.children[1] = HAnimJoint427;

HAnimJoint393ZZZ.children[1] = HAnimJoint418;

let HAnimJoint439 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint439.DEF = "BvhPirouette_lIndex1";
HAnimJoint439.name = "lIndex1";
HAnimJoint439.center = new X3D.SFVec3f([69.98205,49.70507,8.5344]);
let HAnimSegment440 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment440.DEF = "BvhPirouette_lHand_to_lIndex1";
HAnimSegment440.name = "lHand_to_lIndex1";
let Transform441 = browser.currentScene.createNode("Transform");
Transform441.translation = new X3D.SFVec3f([69.98205,49.70507,8.5344]);
let TouchSensor442 = browser.currentScene.createNode("TouchSensor");
TouchSensor442.description = "HAnimJoint lIndex1 lIndex1, HAnimSegment lHand_to_lIndex1";
Transform441YYY.children = new X3D.MFNode();

Transform441ZZZ.children[0] = TouchSensor442;

let Shape443 = browser.currentScene.createNode("Shape");
Shape443.USE = "HAnimJointShape";
Transform441ZZZ.child[1] = Shape443;

let Shape444 = browser.currentScene.createNode("Shape");
let LineSet445 = browser.currentScene.createNode("LineSet");
LineSet445.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA446 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA446.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA446;

let Coordinate447 = browser.currentScene.createNode("Coordinate");
Coordinate447.point = new X3D.MFVec3f([0,0,0,2.54057,-0.884171,1.56538]);
coord = Coordinate447;

geometry = LineSet445;

Transform441ZZZ.child[2] = Shape444;

HAnimSegment440YYY.children = new X3D.MFNode();

HAnimSegment440ZZZ.children[0] = Transform441;

HAnimJoint439YYY.children = new X3D.MFNode();

HAnimJoint439ZZZ.children[0] = HAnimSegment440;

let HAnimJoint448 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint448.DEF = "BvhPirouette_lIndex2";
HAnimJoint448.name = "lIndex2";
HAnimJoint448.rotation = new X3D.SFRotation([0.572691999548646,-0.0826988447052087,-0.81558860630675,0.165700000000001]);
HAnimJoint448.center = new X3D.SFVec3f([72.52262,48.8209,10.09978]);
let HAnimSegment449 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment449.DEF = "BvhPirouette_lIndex1_to_lIndex2";
HAnimSegment449.name = "lIndex1_to_lIndex2";
let Transform450 = browser.currentScene.createNode("Transform");
Transform450.translation = new X3D.SFVec3f([72.52262,48.8209,10.09978]);
let HAnimSite451 = browser.currentScene.createNode("HAnimSite");
HAnimSite451.DEF = "BvhPirouette_lIndex1_to_lIndex2_tip";
HAnimSite451.name = "lIndex1_to_lIndex2_tip";
HAnimSite451.translation = new X3D.SFVec3f([1.62519,-0.234802,1.16502]);
let TouchSensor452 = browser.currentScene.createNode("TouchSensor");
TouchSensor452.description = "HAnimSite lIndex1_to_lIndex2_tip";
HAnimSite451YYY.children = new X3D.MFNode();

HAnimSite451ZZZ.children[0] = TouchSensor452;

let Shape453 = browser.currentScene.createNode("Shape");
Shape453.USE = "HAnimSiteShape";
HAnimSite451ZZZ.children[1] = Shape453;

let Shape454 = browser.currentScene.createNode("Shape");
let LineSet455 = browser.currentScene.createNode("LineSet");
LineSet455.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA456 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA456.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA456;

let Coordinate457 = browser.currentScene.createNode("Coordinate");
Coordinate457.point = new X3D.MFVec3f([-1.62519,0.234802,-1.16502,0,0,0]);
coord = Coordinate457;

geometry = LineSet455;

HAnimSite451ZZZ.children[2] = Shape454;

Transform450YYY.children = new X3D.MFNode();

Transform450ZZZ.children[0] = HAnimSite451;

let TouchSensor458 = browser.currentScene.createNode("TouchSensor");
TouchSensor458.description = "HAnimJoint lIndex2 lIndex2, HAnimSegment lIndex1_to_lIndex2";
Transform450ZZZ.children[1] = TouchSensor458;

let Shape459 = browser.currentScene.createNode("Shape");
Shape459.USE = "HAnimJointShape";
Transform450ZZZ.child[2] = Shape459;

HAnimSegment449YYY.children = new X3D.MFNode();

HAnimSegment449ZZZ.children[0] = Transform450;

HAnimJoint448YYY.children = new X3D.MFNode();

HAnimJoint448ZZZ.children[0] = HAnimSegment449;

HAnimJoint439ZZZ.children[1] = HAnimJoint448;

HAnimJoint393ZZZ.children[2] = HAnimJoint439;

let HAnimJoint460 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint460.DEF = "BvhPirouette_lMid1";
HAnimJoint460.name = "lMid1";
HAnimJoint460.center = new X3D.SFVec3f([70.46972,49.94891,6.33984]);
let HAnimSegment461 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment461.DEF = "BvhPirouette_lHand_to_lMid1";
HAnimSegment461.name = "lHand_to_lMid1";
let Transform462 = browser.currentScene.createNode("Transform");
Transform462.translation = new X3D.SFVec3f([70.46972,49.94891,6.33984]);
let TouchSensor463 = browser.currentScene.createNode("TouchSensor");
TouchSensor463.description = "HAnimJoint lMid1 lMid1, HAnimSegment lHand_to_lMid1";
Transform462YYY.children = new X3D.MFNode();

Transform462ZZZ.children[0] = TouchSensor463;

let Shape464 = browser.currentScene.createNode("Shape");
Shape464.USE = "HAnimJointShape";
Transform462ZZZ.child[1] = Shape464;

let Shape465 = browser.currentScene.createNode("Shape");
let LineSet466 = browser.currentScene.createNode("LineSet");
LineSet466.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA467 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA467.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA467;

let Coordinate468 = browser.currentScene.createNode("Coordinate");
Coordinate468.point = new X3D.MFVec3f([0,0,0,3.10165,-0.590103,1.0647]);
coord = Coordinate468;

geometry = LineSet466;

Transform462ZZZ.child[2] = Shape465;

HAnimSegment461YYY.children = new X3D.MFNode();

HAnimSegment461ZZZ.children[0] = Transform462;

HAnimJoint460YYY.children = new X3D.MFNode();

HAnimJoint460ZZZ.children[0] = HAnimSegment461;

let HAnimJoint469 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint469.DEF = "BvhPirouette_lMid2";
HAnimJoint469.name = "lMid2";
HAnimJoint469.rotation = new X3D.SFRotation([0.314093463783051,-0.0415991343310249,-0.948480262331181,0.053499999999996]);
HAnimJoint469.center = new X3D.SFVec3f([73.57137,49.35881,7.40454]);
let HAnimSegment470 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment470.DEF = "BvhPirouette_lMid1_to_lMid2";
HAnimSegment470.name = "lMid1_to_lMid2";
let Transform471 = browser.currentScene.createNode("Transform");
Transform471.translation = new X3D.SFVec3f([73.57137,49.35881,7.40454]);
let HAnimSite472 = browser.currentScene.createNode("HAnimSite");
HAnimSite472.DEF = "BvhPirouette_lMid1_to_lMid2_tip";
HAnimSite472.name = "lMid1_to_lMid2_tip";
HAnimSite472.translation = new X3D.SFVec3f([2.48547,-0.328903,0.83742]);
let TouchSensor473 = browser.currentScene.createNode("TouchSensor");
TouchSensor473.description = "HAnimSite lMid1_to_lMid2_tip";
HAnimSite472YYY.children = new X3D.MFNode();

HAnimSite472ZZZ.children[0] = TouchSensor473;

let Shape474 = browser.currentScene.createNode("Shape");
Shape474.USE = "HAnimSiteShape";
HAnimSite472ZZZ.children[1] = Shape474;

let Shape475 = browser.currentScene.createNode("Shape");
let LineSet476 = browser.currentScene.createNode("LineSet");
LineSet476.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA477 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA477.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA477;

let Coordinate478 = browser.currentScene.createNode("Coordinate");
Coordinate478.point = new X3D.MFVec3f([-2.48547,0.328903,-0.83742,0,0,0]);
coord = Coordinate478;

geometry = LineSet476;

HAnimSite472ZZZ.children[2] = Shape475;

Transform471YYY.children = new X3D.MFNode();

Transform471ZZZ.children[0] = HAnimSite472;

let TouchSensor479 = browser.currentScene.createNode("TouchSensor");
TouchSensor479.description = "HAnimJoint lMid2 lMid2, HAnimSegment lMid1_to_lMid2";
Transform471ZZZ.children[1] = TouchSensor479;

let Shape480 = browser.currentScene.createNode("Shape");
Shape480.USE = "HAnimJointShape";
Transform471ZZZ.child[2] = Shape480;

HAnimSegment470YYY.children = new X3D.MFNode();

HAnimSegment470ZZZ.children[0] = Transform471;

HAnimJoint469YYY.children = new X3D.MFNode();

HAnimJoint469ZZZ.children[0] = HAnimSegment470;

HAnimJoint460ZZZ.children[1] = HAnimJoint469;

HAnimJoint393ZZZ.children[3] = HAnimJoint460;

let HAnimJoint481 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint481.DEF = "BvhPirouette_lRing1";
HAnimJoint481.name = "lRing1";
HAnimJoint481.center = new X3D.SFVec3f([71.0508,49.31346,4.44286]);
let HAnimSegment482 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment482.DEF = "BvhPirouette_lHand_to_lRing1";
HAnimSegment482.name = "lHand_to_lRing1";
let Transform483 = browser.currentScene.createNode("Transform");
Transform483.translation = new X3D.SFVec3f([71.0508,49.31346,4.44286]);
let TouchSensor484 = browser.currentScene.createNode("TouchSensor");
TouchSensor484.description = "HAnimJoint lRing1 lRing1, HAnimSegment lHand_to_lRing1";
Transform483YYY.children = new X3D.MFNode();

Transform483ZZZ.children[0] = TouchSensor484;

let Shape485 = browser.currentScene.createNode("Shape");
Shape485.USE = "HAnimJointShape";
Transform483ZZZ.child[1] = Shape485;

let Shape486 = browser.currentScene.createNode("Shape");
let LineSet487 = browser.currentScene.createNode("LineSet");
LineSet487.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA488 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA488.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA488;

let Coordinate489 = browser.currentScene.createNode("Coordinate");
Coordinate489.point = new X3D.MFVec3f([0,0,0,2.60934,-0.819778,-0.0198488]);
coord = Coordinate489;

geometry = LineSet487;

Transform483ZZZ.child[2] = Shape486;

HAnimSegment482YYY.children = new X3D.MFNode();

HAnimSegment482ZZZ.children[0] = Transform483;

HAnimJoint481YYY.children = new X3D.MFNode();

HAnimJoint481ZZZ.children[0] = HAnimSegment482;

let HAnimJoint490 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint490.DEF = "BvhPirouette_lRing2";
HAnimJoint490.name = "lRing2";
HAnimJoint490.rotation = new X3D.SFRotation([0.070597535483054,-0.00889968931726884,-0.99746517909839,0.179899999999999]);
HAnimJoint490.center = new X3D.SFVec3f([73.66014,48.49368,4.423011]);
let HAnimSegment491 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment491.DEF = "BvhPirouette_lRing1_to_lRing2";
HAnimSegment491.name = "lRing1_to_lRing2";
let Transform492 = browser.currentScene.createNode("Transform");
Transform492.translation = new X3D.SFVec3f([73.66014,48.49368,4.423011]);
let HAnimSite493 = browser.currentScene.createNode("HAnimSite");
HAnimSite493.DEF = "BvhPirouette_lRing1_to_lRing2_tip";
HAnimSite493.name = "lRing1_to_lRing2_tip";
HAnimSite493.translation = new X3D.SFVec3f([2.33842,-0.294052,0.168128]);
let TouchSensor494 = browser.currentScene.createNode("TouchSensor");
TouchSensor494.description = "HAnimSite lRing1_to_lRing2_tip";
HAnimSite493YYY.children = new X3D.MFNode();

HAnimSite493ZZZ.children[0] = TouchSensor494;

let Shape495 = browser.currentScene.createNode("Shape");
Shape495.USE = "HAnimSiteShape";
HAnimSite493ZZZ.children[1] = Shape495;

let Shape496 = browser.currentScene.createNode("Shape");
let LineSet497 = browser.currentScene.createNode("LineSet");
LineSet497.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA498 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA498.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA498;

let Coordinate499 = browser.currentScene.createNode("Coordinate");
Coordinate499.point = new X3D.MFVec3f([-2.33842,0.294052,-0.168128,0,0,0]);
coord = Coordinate499;

geometry = LineSet497;

HAnimSite493ZZZ.children[2] = Shape496;

Transform492YYY.children = new X3D.MFNode();

Transform492ZZZ.children[0] = HAnimSite493;

let TouchSensor500 = browser.currentScene.createNode("TouchSensor");
TouchSensor500.description = "HAnimJoint lRing2 lRing2, HAnimSegment lRing1_to_lRing2";
Transform492ZZZ.children[1] = TouchSensor500;

let Shape501 = browser.currentScene.createNode("Shape");
Shape501.USE = "HAnimJointShape";
Transform492ZZZ.child[2] = Shape501;

HAnimSegment491YYY.children = new X3D.MFNode();

HAnimSegment491ZZZ.children[0] = Transform492;

HAnimJoint490YYY.children = new X3D.MFNode();

HAnimJoint490ZZZ.children[0] = HAnimSegment491;

HAnimJoint481ZZZ.children[1] = HAnimJoint490;

HAnimJoint393ZZZ.children[4] = HAnimJoint481;

let HAnimJoint502 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint502.DEF = "BvhPirouette_lPinky1";
HAnimJoint502.name = "lPinky1";
HAnimJoint502.center = new X3D.SFVec3f([70.4946,48.71899,2.46768]);
let HAnimSegment503 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment503.DEF = "BvhPirouette_lHand_to_lPinky1";
HAnimSegment503.name = "lHand_to_lPinky1";
let Transform504 = browser.currentScene.createNode("Transform");
Transform504.translation = new X3D.SFVec3f([70.4946,48.71899,2.46768]);
let TouchSensor505 = browser.currentScene.createNode("TouchSensor");
TouchSensor505.description = "HAnimJoint lPinky1 lPinky1, HAnimSegment lHand_to_lPinky1";
Transform504YYY.children = new X3D.MFNode();

Transform504ZZZ.children[0] = TouchSensor505;

let Shape506 = browser.currentScene.createNode("Shape");
Shape506.USE = "HAnimJointShape";
Transform504ZZZ.child[1] = Shape506;

let Shape507 = browser.currentScene.createNode("Shape");
let LineSet508 = browser.currentScene.createNode("LineSet");
LineSet508.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA509 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA509.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA509;

let Coordinate510 = browser.currentScene.createNode("Coordinate");
Coordinate510.point = new X3D.MFVec3f([0,0,0,1.82734,-0.647385,-0.700984]);
coord = Coordinate510;

geometry = LineSet508;

Transform504ZZZ.child[2] = Shape507;

HAnimSegment503YYY.children = new X3D.MFNode();

HAnimSegment503ZZZ.children[0] = Transform504;

HAnimJoint502YYY.children = new X3D.MFNode();

HAnimJoint502ZZZ.children[0] = HAnimSegment503;

let HAnimJoint511 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint511.DEF = "BvhPirouette_lPinky2";
HAnimJoint511.name = "lPinky2";
HAnimJoint511.rotation = new X3D.SFRotation([-0.310297066155107,0.0948991027332247,-0.945891056642331,0.0410000000000003]);
HAnimJoint511.center = new X3D.SFVec3f([72.32194,48.0716,1.766696]);
let HAnimSegment512 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment512.DEF = "BvhPirouette_lPinky1_to_lPinky2";
HAnimSegment512.name = "lPinky1_to_lPinky2";
let Transform513 = browser.currentScene.createNode("Transform");
Transform513.translation = new X3D.SFVec3f([72.32194,48.0716,1.766696]);
let HAnimSite514 = browser.currentScene.createNode("HAnimSite");
HAnimSite514.DEF = "BvhPirouette_lPinky1_to_lPinky2_tip";
HAnimSite514.name = "lPinky1_to_lPinky2_tip";
HAnimSite514.translation = new X3D.SFVec3f([1.69225,-0.51767,-0.607171]);
let TouchSensor515 = browser.currentScene.createNode("TouchSensor");
TouchSensor515.description = "HAnimSite lPinky1_to_lPinky2_tip";
HAnimSite514YYY.children = new X3D.MFNode();

HAnimSite514ZZZ.children[0] = TouchSensor515;

let Shape516 = browser.currentScene.createNode("Shape");
Shape516.USE = "HAnimSiteShape";
HAnimSite514ZZZ.children[1] = Shape516;

let Shape517 = browser.currentScene.createNode("Shape");
let LineSet518 = browser.currentScene.createNode("LineSet");
LineSet518.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA519 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA519.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA519;

let Coordinate520 = browser.currentScene.createNode("Coordinate");
Coordinate520.point = new X3D.MFVec3f([-1.69225,0.51767,0.607171,0,0,0]);
coord = Coordinate520;

geometry = LineSet518;

HAnimSite514ZZZ.children[2] = Shape517;

Transform513YYY.children = new X3D.MFNode();

Transform513ZZZ.children[0] = HAnimSite514;

let TouchSensor521 = browser.currentScene.createNode("TouchSensor");
TouchSensor521.description = "HAnimJoint lPinky2 lPinky2, HAnimSegment lPinky1_to_lPinky2";
Transform513ZZZ.children[1] = TouchSensor521;

let Shape522 = browser.currentScene.createNode("Shape");
Shape522.USE = "HAnimJointShape";
Transform513ZZZ.child[2] = Shape522;

HAnimSegment512YYY.children = new X3D.MFNode();

HAnimSegment512ZZZ.children[0] = Transform513;

HAnimJoint511YYY.children = new X3D.MFNode();

HAnimJoint511ZZZ.children[0] = HAnimSegment512;

HAnimJoint502ZZZ.children[1] = HAnimJoint511;

HAnimJoint393ZZZ.children[5] = HAnimJoint502;

HAnimJoint384ZZZ.children[1] = HAnimJoint393;

HAnimJoint375ZZZ.children[1] = HAnimJoint384;

HAnimJoint366ZZZ.children[1] = HAnimJoint375;

HAnimJoint146ZZZ.children[3] = HAnimJoint366;

HAnimJoint137ZZZ.children[1] = HAnimJoint146;

HAnimJoint99ZZZ.children[1] = HAnimJoint137;

let HAnimJoint523 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint523.DEF = "BvhPirouette_rButtock";
HAnimJoint523.name = "rButtock";
HAnimJoint523.center = new X3D.SFVec3f([-8.77824,4.35084,1.2192]);
let HAnimSegment524 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment524.DEF = "BvhPirouette_humanoid_root_to_rButtock";
HAnimSegment524.name = "humanoid_root_to_rButtock";
let Transform525 = browser.currentScene.createNode("Transform");
Transform525.translation = new X3D.SFVec3f([-8.77824,4.35084,1.2192]);
let TouchSensor526 = browser.currentScene.createNode("TouchSensor");
TouchSensor526.description = "HAnimJoint rButtock rButtock, HAnimSegment humanoid_root_to_rButtock";
Transform525YYY.children = new X3D.MFNode();

Transform525ZZZ.children[0] = TouchSensor526;

let Shape527 = browser.currentScene.createNode("Shape");
Shape527.USE = "HAnimJointShape";
Transform525ZZZ.child[1] = Shape527;

let Shape528 = browser.currentScene.createNode("Shape");
let LineSet529 = browser.currentScene.createNode("LineSet");
LineSet529.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA530 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA530.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA530;

let Coordinate531 = browser.currentScene.createNode("Coordinate");
Coordinate531.point = new X3D.MFVec3f([0,0,0,0,-1.70687,-2.19456]);
coord = Coordinate531;

geometry = LineSet529;

Transform525ZZZ.child[2] = Shape528;

HAnimSegment524YYY.children = new X3D.MFNode();

HAnimSegment524ZZZ.children[0] = Transform525;

HAnimJoint523YYY.children = new X3D.MFNode();

HAnimJoint523ZZZ.children[0] = HAnimSegment524;

let HAnimJoint532 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint532.DEF = "BvhPirouette_rThigh";
HAnimJoint532.name = "rThigh";
HAnimJoint532.rotation = new X3D.SFRotation([0.225026837791958,0.973611359873578,-0.0379979236082684,0.111747680571667]);
HAnimJoint532.center = new X3D.SFVec3f([-8.77824,2.64397,-0.97536]);
let HAnimSegment533 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment533.DEF = "BvhPirouette_rButtock_to_rThigh";
HAnimSegment533.name = "rButtock_to_rThigh";
let Transform534 = browser.currentScene.createNode("Transform");
Transform534.translation = new X3D.SFVec3f([-8.77824,2.64397,-0.97536]);
let TouchSensor535 = browser.currentScene.createNode("TouchSensor");
TouchSensor535.description = "HAnimJoint rThigh rThigh, HAnimSegment rButtock_to_rThigh";
Transform534YYY.children = new X3D.MFNode();

Transform534ZZZ.children[0] = TouchSensor535;

let Shape536 = browser.currentScene.createNode("Shape");
Shape536.USE = "HAnimJointShape";
Transform534ZZZ.child[1] = Shape536;

let Shape537 = browser.currentScene.createNode("Shape");
let LineSet538 = browser.currentScene.createNode("LineSet");
LineSet538.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA539 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA539.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA539;

let Coordinate540 = browser.currentScene.createNode("Coordinate");
Coordinate540.point = new X3D.MFVec3f([0,0,0,0,-36.8199,0.73152]);
coord = Coordinate540;

geometry = LineSet538;

Transform534ZZZ.child[2] = Shape537;

HAnimSegment533YYY.children = new X3D.MFNode();

HAnimSegment533ZZZ.children[0] = Transform534;

HAnimJoint532YYY.children = new X3D.MFNode();

HAnimJoint532ZZZ.children[0] = HAnimSegment533;

let HAnimJoint541 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint541.DEF = "BvhPirouette_rShin";
HAnimJoint541.name = "rShin";
HAnimJoint541.rotation = new X3D.SFRotation([0.996558471522664,0.0813931864503982,0.0156959241796386,0.22717491314776]);
HAnimJoint541.center = new X3D.SFVec3f([-8.77824,-34.17593,-0.24384]);
let HAnimSegment542 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment542.DEF = "BvhPirouette_rThigh_to_rShin";
HAnimSegment542.name = "rThigh_to_rShin";
let Transform543 = browser.currentScene.createNode("Transform");
Transform543.translation = new X3D.SFVec3f([-8.77824,-34.17593,-0.24384]);
let TouchSensor544 = browser.currentScene.createNode("TouchSensor");
TouchSensor544.description = "HAnimJoint rShin rShin, HAnimSegment rThigh_to_rShin";
Transform543YYY.children = new X3D.MFNode();

Transform543ZZZ.children[0] = TouchSensor544;

let Shape545 = browser.currentScene.createNode("Shape");
Shape545.USE = "HAnimJointShape";
Transform543ZZZ.child[1] = Shape545;

let Shape546 = browser.currentScene.createNode("Shape");
let LineSet547 = browser.currentScene.createNode("LineSet");
LineSet547.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA548 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA548.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA548;

let Coordinate549 = browser.currentScene.createNode("Coordinate");
Coordinate549.point = new X3D.MFVec3f([0,0,0,0.73152,-45.1104,-5.12064]);
coord = Coordinate549;

geometry = LineSet547;

Transform543ZZZ.child[2] = Shape546;

HAnimSegment542YYY.children = new X3D.MFNode();

HAnimSegment542ZZZ.children[0] = Transform543;

HAnimJoint541YYY.children = new X3D.MFNode();

HAnimJoint541ZZZ.children[0] = HAnimSegment542;

let HAnimJoint550 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint550.DEF = "BvhPirouette_rFoot";
HAnimJoint550.name = "rFoot";
HAnimJoint550.rotation = new X3D.SFRotation([-0.709386091541287,-0.656799165973824,-0.255707310618734,0.880659950518146]);
HAnimJoint550.center = new X3D.SFVec3f([-8.04672,-79.28633,-5.36448]);
let HAnimSegment551 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment551.DEF = "BvhPirouette_rShin_to_rFoot";
HAnimSegment551.name = "rShin_to_rFoot";
let Transform552 = browser.currentScene.createNode("Transform");
Transform552.translation = new X3D.SFVec3f([-8.04672,-79.28633,-5.36448]);
let HAnimSite553 = browser.currentScene.createNode("HAnimSite");
HAnimSite553.DEF = "BvhPirouette_rShin_to_rFoot_tip";
HAnimSite553.name = "rShin_to_rFoot_tip";
HAnimSite553.translation = new X3D.SFVec3f([-1.1221,-3.69964,12.103]);
let TouchSensor554 = browser.currentScene.createNode("TouchSensor");
TouchSensor554.description = "HAnimSite rShin_to_rFoot_tip";
HAnimSite553YYY.children = new X3D.MFNode();

HAnimSite553ZZZ.children[0] = TouchSensor554;

let Shape555 = browser.currentScene.createNode("Shape");
Shape555.USE = "HAnimSiteShape";
HAnimSite553ZZZ.children[1] = Shape555;

let Shape556 = browser.currentScene.createNode("Shape");
let LineSet557 = browser.currentScene.createNode("LineSet");
LineSet557.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA558 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA558.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA558;

let Coordinate559 = browser.currentScene.createNode("Coordinate");
Coordinate559.point = new X3D.MFVec3f([1.1221,3.69964,-12.103,0,0,0]);
coord = Coordinate559;

geometry = LineSet557;

HAnimSite553ZZZ.children[2] = Shape556;

Transform552YYY.children = new X3D.MFNode();

Transform552ZZZ.children[0] = HAnimSite553;

let TouchSensor560 = browser.currentScene.createNode("TouchSensor");
TouchSensor560.description = "HAnimJoint rFoot rFoot, HAnimSegment rShin_to_rFoot";
Transform552ZZZ.children[1] = TouchSensor560;

let Shape561 = browser.currentScene.createNode("Shape");
Shape561.USE = "HAnimJointShape";
Transform552ZZZ.child[2] = Shape561;

HAnimSegment551YYY.children = new X3D.MFNode();

HAnimSegment551ZZZ.children[0] = Transform552;

HAnimJoint550YYY.children = new X3D.MFNode();

HAnimJoint550ZZZ.children[0] = HAnimSegment551;

HAnimJoint541ZZZ.children[1] = HAnimJoint550;

HAnimJoint532ZZZ.children[1] = HAnimJoint541;

HAnimJoint523ZZZ.children[1] = HAnimJoint532;

HAnimJoint99ZZZ.children[2] = HAnimJoint523;

let HAnimJoint562 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint562.DEF = "BvhPirouette_lButtock";
HAnimJoint562.name = "lButtock";
HAnimJoint562.center = new X3D.SFVec3f([8.77824,4.35084,1.2192]);
let HAnimSegment563 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment563.DEF = "BvhPirouette_humanoid_root_to_lButtock";
HAnimSegment563.name = "humanoid_root_to_lButtock";
let Transform564 = browser.currentScene.createNode("Transform");
Transform564.translation = new X3D.SFVec3f([8.77824,4.35084,1.2192]);
let TouchSensor565 = browser.currentScene.createNode("TouchSensor");
TouchSensor565.description = "HAnimJoint lButtock lButtock, HAnimSegment humanoid_root_to_lButtock";
Transform564YYY.children = new X3D.MFNode();

Transform564ZZZ.children[0] = TouchSensor565;

let Shape566 = browser.currentScene.createNode("Shape");
Shape566.USE = "HAnimJointShape";
Transform564ZZZ.child[1] = Shape566;

let Shape567 = browser.currentScene.createNode("Shape");
let LineSet568 = browser.currentScene.createNode("LineSet");
LineSet568.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA569 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA569.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA569;

let Coordinate570 = browser.currentScene.createNode("Coordinate");
Coordinate570.point = new X3D.MFVec3f([0,0,0,0,-1.70687,-2.19456]);
coord = Coordinate570;

geometry = LineSet568;

Transform564ZZZ.child[2] = Shape567;

HAnimSegment563YYY.children = new X3D.MFNode();

HAnimSegment563ZZZ.children[0] = Transform564;

HAnimJoint562YYY.children = new X3D.MFNode();

HAnimJoint562ZZZ.children[0] = HAnimSegment563;

let HAnimJoint571 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint571.DEF = "BvhPirouette_lThigh";
HAnimJoint571.name = "lThigh";
HAnimJoint571.rotation = new X3D.SFRotation([-0.935909910117953,0.344682644210195,0.0725707580453327,0.937204395074155]);
HAnimJoint571.center = new X3D.SFVec3f([8.77824,2.64397,-0.97536]);
let HAnimSegment572 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment572.DEF = "BvhPirouette_lButtock_to_lThigh";
HAnimSegment572.name = "lButtock_to_lThigh";
let Transform573 = browser.currentScene.createNode("Transform");
Transform573.translation = new X3D.SFVec3f([8.77824,2.64397,-0.97536]);
let TouchSensor574 = browser.currentScene.createNode("TouchSensor");
TouchSensor574.description = "HAnimJoint lThigh lThigh, HAnimSegment lButtock_to_lThigh";
Transform573YYY.children = new X3D.MFNode();

Transform573ZZZ.children[0] = TouchSensor574;

let Shape575 = browser.currentScene.createNode("Shape");
Shape575.USE = "HAnimJointShape";
Transform573ZZZ.child[1] = Shape575;

let Shape576 = browser.currentScene.createNode("Shape");
let LineSet577 = browser.currentScene.createNode("LineSet");
LineSet577.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA578 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA578.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA578;

let Coordinate579 = browser.currentScene.createNode("Coordinate");
Coordinate579.point = new X3D.MFVec3f([0,0,0,0,-36.8199,0.73152]);
coord = Coordinate579;

geometry = LineSet577;

Transform573ZZZ.child[2] = Shape576;

HAnimSegment572YYY.children = new X3D.MFNode();

HAnimSegment572ZZZ.children[0] = Transform573;

HAnimJoint571YYY.children = new X3D.MFNode();

HAnimJoint571ZZZ.children[0] = HAnimSegment572;

let HAnimJoint580 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint580.DEF = "BvhPirouette_lShin";
HAnimJoint580.name = "lShin";
HAnimJoint580.rotation = new X3D.SFRotation([0.999453076682571,-0.0324021283968972,-0.00660678326377699,0.651020430034326]);
HAnimJoint580.center = new X3D.SFVec3f([8.77824,-34.17593,-0.24384]);
let HAnimSegment581 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment581.DEF = "BvhPirouette_lThigh_to_lShin";
HAnimSegment581.name = "lThigh_to_lShin";
let Transform582 = browser.currentScene.createNode("Transform");
Transform582.translation = new X3D.SFVec3f([8.77824,-34.17593,-0.24384]);
let TouchSensor583 = browser.currentScene.createNode("TouchSensor");
TouchSensor583.description = "HAnimJoint lShin lShin, HAnimSegment lThigh_to_lShin";
Transform582YYY.children = new X3D.MFNode();

Transform582ZZZ.children[0] = TouchSensor583;

let Shape584 = browser.currentScene.createNode("Shape");
Shape584.USE = "HAnimJointShape";
Transform582ZZZ.child[1] = Shape584;

let Shape585 = browser.currentScene.createNode("Shape");
let LineSet586 = browser.currentScene.createNode("LineSet");
LineSet586.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA587 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA587.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA587;

let Coordinate588 = browser.currentScene.createNode("Coordinate");
Coordinate588.point = new X3D.MFVec3f([0,0,0,-0.73152,-45.1104,-5.12064]);
coord = Coordinate588;

geometry = LineSet586;

Transform582ZZZ.child[2] = Shape585;

HAnimSegment581YYY.children = new X3D.MFNode();

HAnimSegment581ZZZ.children[0] = Transform582;

HAnimJoint580YYY.children = new X3D.MFNode();

HAnimJoint580ZZZ.children[0] = HAnimSegment581;

let HAnimJoint589 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint589.DEF = "BvhPirouette_lFoot";
HAnimJoint589.name = "lFoot";
HAnimJoint589.rotation = new X3D.SFRotation([-0.768206325587295,0.589114225547607,0.250606206198309,0.824638168319481]);
HAnimJoint589.center = new X3D.SFVec3f([8.04672,-79.28633,-5.36448]);
let HAnimSegment590 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment590.DEF = "BvhPirouette_lShin_to_lFoot";
HAnimSegment590.name = "lShin_to_lFoot";
let Transform591 = browser.currentScene.createNode("Transform");
Transform591.translation = new X3D.SFVec3f([8.04672,-79.28633,-5.36448]);
let HAnimSite592 = browser.currentScene.createNode("HAnimSite");
HAnimSite592.DEF = "BvhPirouette_lShin_to_lFoot_tip";
HAnimSite592.name = "lShin_to_lFoot_tip";
HAnimSite592.translation = new X3D.SFVec3f([1.1221,-3.69964,12.103]);
let TouchSensor593 = browser.currentScene.createNode("TouchSensor");
TouchSensor593.description = "HAnimSite lShin_to_lFoot_tip";
HAnimSite592YYY.children = new X3D.MFNode();

HAnimSite592ZZZ.children[0] = TouchSensor593;

let Shape594 = browser.currentScene.createNode("Shape");
Shape594.USE = "HAnimSiteShape";
HAnimSite592ZZZ.children[1] = Shape594;

let Shape595 = browser.currentScene.createNode("Shape");
let LineSet596 = browser.currentScene.createNode("LineSet");
LineSet596.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA597 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA597.USE = "HAnimSiteLineColorRGBA";
color = ColorRGBA597;

let Coordinate598 = browser.currentScene.createNode("Coordinate");
Coordinate598.point = new X3D.MFVec3f([-1.1221,3.69964,-12.103,0,0,0]);
coord = Coordinate598;

geometry = LineSet596;

HAnimSite592ZZZ.children[2] = Shape595;

Transform591YYY.children = new X3D.MFNode();

Transform591ZZZ.children[0] = HAnimSite592;

let TouchSensor599 = browser.currentScene.createNode("TouchSensor");
TouchSensor599.description = "HAnimJoint lFoot lFoot, HAnimSegment lShin_to_lFoot";
Transform591ZZZ.children[1] = TouchSensor599;

let Shape600 = browser.currentScene.createNode("Shape");
Shape600.USE = "HAnimJointShape";
Transform591ZZZ.child[2] = Shape600;

HAnimSegment590YYY.children = new X3D.MFNode();

HAnimSegment590ZZZ.children[0] = Transform591;

HAnimJoint589YYY.children = new X3D.MFNode();

HAnimJoint589ZZZ.children[0] = HAnimSegment590;

HAnimJoint580ZZZ.children[1] = HAnimJoint589;

HAnimJoint571ZZZ.children[1] = HAnimJoint580;

HAnimJoint562ZZZ.children[1] = HAnimJoint571;

HAnimJoint99ZZZ.children[3] = HAnimJoint562;

joints[1] = HAnimJoint99;

let HAnimJoint601 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint601.USE = "BvhPirouette_humanoid_root";
joints[2] = HAnimJoint601;

let HAnimJoint602 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint602.USE = "BvhPirouette_abdomen";
joints[3] = HAnimJoint602;

let HAnimJoint603 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint603.USE = "BvhPirouette_vl5";
joints[4] = HAnimJoint603;

let HAnimJoint604 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint604.USE = "BvhPirouette_neck";
joints[5] = HAnimJoint604;

let HAnimJoint605 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint605.USE = "BvhPirouette_skullbase";
joints[6] = HAnimJoint605;

let HAnimJoint606 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint606.USE = "BvhPirouette_leftEye";
joints[7] = HAnimJoint606;

let HAnimJoint607 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint607.USE = "BvhPirouette_rightEye";
joints[8] = HAnimJoint607;

let HAnimJoint608 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint608.USE = "BvhPirouette_rCollar";
joints[9] = HAnimJoint608;

let HAnimJoint609 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint609.USE = "BvhPirouette_rShldr";
joints[10] = HAnimJoint609;

let HAnimJoint610 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint610.USE = "BvhPirouette_rForeArm";
joints[11] = HAnimJoint610;

let HAnimJoint611 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint611.USE = "BvhPirouette_rHand";
joints[12] = HAnimJoint611;

let HAnimJoint612 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint612.USE = "BvhPirouette_rThumb1";
joints[13] = HAnimJoint612;

let HAnimJoint613 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint613.USE = "BvhPirouette_rThumb2";
joints[14] = HAnimJoint613;

let HAnimJoint614 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint614.USE = "BvhPirouette_rIndex1";
joints[15] = HAnimJoint614;

let HAnimJoint615 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint615.USE = "BvhPirouette_rIndex2";
joints[16] = HAnimJoint615;

let HAnimJoint616 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint616.USE = "BvhPirouette_rMid1";
joints[17] = HAnimJoint616;

let HAnimJoint617 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint617.USE = "BvhPirouette_rMid2";
joints[18] = HAnimJoint617;

let HAnimJoint618 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint618.USE = "BvhPirouette_rRing1";
joints[19] = HAnimJoint618;

let HAnimJoint619 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint619.USE = "BvhPirouette_rRing2";
joints[20] = HAnimJoint619;

let HAnimJoint620 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint620.USE = "BvhPirouette_rPinky1";
joints[21] = HAnimJoint620;

let HAnimJoint621 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint621.USE = "BvhPirouette_rPinky2";
joints[22] = HAnimJoint621;

let HAnimJoint622 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint622.USE = "BvhPirouette_lCollar";
joints[23] = HAnimJoint622;

let HAnimJoint623 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint623.USE = "BvhPirouette_lShldr";
joints[24] = HAnimJoint623;

let HAnimJoint624 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint624.USE = "BvhPirouette_lForeArm";
joints[25] = HAnimJoint624;

let HAnimJoint625 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint625.USE = "BvhPirouette_lHand";
joints[26] = HAnimJoint625;

let HAnimJoint626 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint626.USE = "BvhPirouette_lThumb1";
joints[27] = HAnimJoint626;

let HAnimJoint627 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint627.USE = "BvhPirouette_lThumb2";
joints[28] = HAnimJoint627;

let HAnimJoint628 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint628.USE = "BvhPirouette_lIndex1";
joints[29] = HAnimJoint628;

let HAnimJoint629 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint629.USE = "BvhPirouette_lIndex2";
joints[30] = HAnimJoint629;

let HAnimJoint630 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint630.USE = "BvhPirouette_lMid1";
joints[31] = HAnimJoint630;

let HAnimJoint631 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint631.USE = "BvhPirouette_lMid2";
joints[32] = HAnimJoint631;

let HAnimJoint632 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint632.USE = "BvhPirouette_lRing1";
joints[33] = HAnimJoint632;

let HAnimJoint633 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint633.USE = "BvhPirouette_lRing2";
joints[34] = HAnimJoint633;

let HAnimJoint634 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint634.USE = "BvhPirouette_lPinky1";
joints[35] = HAnimJoint634;

let HAnimJoint635 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint635.USE = "BvhPirouette_lPinky2";
joints[36] = HAnimJoint635;

let HAnimJoint636 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint636.USE = "BvhPirouette_rButtock";
joints[37] = HAnimJoint636;

let HAnimJoint637 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint637.USE = "BvhPirouette_rThigh";
joints[38] = HAnimJoint637;

let HAnimJoint638 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint638.USE = "BvhPirouette_rShin";
joints[39] = HAnimJoint638;

let HAnimJoint639 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint639.USE = "BvhPirouette_rFoot";
joints[40] = HAnimJoint639;

let HAnimJoint640 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint640.USE = "BvhPirouette_lButtock";
joints[41] = HAnimJoint640;

let HAnimJoint641 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint641.USE = "BvhPirouette_lThigh";
joints[42] = HAnimJoint641;

let HAnimJoint642 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint642.USE = "BvhPirouette_lShin";
joints[43] = HAnimJoint642;

let HAnimJoint643 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint643.USE = "BvhPirouette_lFoot";
joints[44] = HAnimJoint643;

let HAnimSegment644 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment644.USE = "BvhPirouette_sacrum";
segments[45] = HAnimSegment644;

let HAnimSegment645 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment645.USE = "BvhPirouette_humanoid_root_to_abdomen";
segments[46] = HAnimSegment645;

let HAnimSegment646 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment646.USE = "BvhPirouette_l5";
segments[47] = HAnimSegment646;

let HAnimSegment647 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment647.USE = "BvhPirouette_vl5_to_neck";
segments[48] = HAnimSegment647;

let HAnimSegment648 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment648.USE = "BvhPirouette_skull";
segments[49] = HAnimSegment648;

let HAnimSegment649 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment649.USE = "BvhPirouette_skullbase_to_leftEye";
segments[50] = HAnimSegment649;

let HAnimSegment650 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment650.USE = "BvhPirouette_skullbase_to_rightEye";
segments[51] = HAnimSegment650;

let HAnimSegment651 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment651.USE = "BvhPirouette_vl5_to_rCollar";
segments[52] = HAnimSegment651;

let HAnimSegment652 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment652.USE = "BvhPirouette_rCollar_to_rShldr";
segments[53] = HAnimSegment652;

let HAnimSegment653 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment653.USE = "BvhPirouette_rShldr_to_rForeArm";
segments[54] = HAnimSegment653;

let HAnimSegment654 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment654.USE = "BvhPirouette_rForeArm_to_rHand";
segments[55] = HAnimSegment654;

let HAnimSegment655 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment655.USE = "BvhPirouette_rHand_to_rThumb1";
segments[56] = HAnimSegment655;

let HAnimSegment656 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment656.USE = "BvhPirouette_rThumb1_to_rThumb2";
segments[57] = HAnimSegment656;

let HAnimSegment657 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment657.USE = "BvhPirouette_rHand_to_rIndex1";
segments[58] = HAnimSegment657;

let HAnimSegment658 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment658.USE = "BvhPirouette_rIndex1_to_rIndex2";
segments[59] = HAnimSegment658;

let HAnimSegment659 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment659.USE = "BvhPirouette_rHand_to_rMid1";
segments[60] = HAnimSegment659;

let HAnimSegment660 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment660.USE = "BvhPirouette_rMid1_to_rMid2";
segments[61] = HAnimSegment660;

let HAnimSegment661 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment661.USE = "BvhPirouette_rHand_to_rRing1";
segments[62] = HAnimSegment661;

let HAnimSegment662 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment662.USE = "BvhPirouette_rRing1_to_rRing2";
segments[63] = HAnimSegment662;

let HAnimSegment663 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment663.USE = "BvhPirouette_rHand_to_rPinky1";
segments[64] = HAnimSegment663;

let HAnimSegment664 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment664.USE = "BvhPirouette_rPinky1_to_rPinky2";
segments[65] = HAnimSegment664;

let HAnimSegment665 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment665.USE = "BvhPirouette_vl5_to_lCollar";
segments[66] = HAnimSegment665;

let HAnimSegment666 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment666.USE = "BvhPirouette_lCollar_to_lShldr";
segments[67] = HAnimSegment666;

let HAnimSegment667 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment667.USE = "BvhPirouette_lShldr_to_lForeArm";
segments[68] = HAnimSegment667;

let HAnimSegment668 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment668.USE = "BvhPirouette_lForeArm_to_lHand";
segments[69] = HAnimSegment668;

let HAnimSegment669 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment669.USE = "BvhPirouette_lHand_to_lThumb1";
segments[70] = HAnimSegment669;

let HAnimSegment670 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment670.USE = "BvhPirouette_lThumb1_to_lThumb2";
segments[71] = HAnimSegment670;

let HAnimSegment671 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment671.USE = "BvhPirouette_lHand_to_lIndex1";
segments[72] = HAnimSegment671;

let HAnimSegment672 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment672.USE = "BvhPirouette_lIndex1_to_lIndex2";
segments[73] = HAnimSegment672;

let HAnimSegment673 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment673.USE = "BvhPirouette_lHand_to_lMid1";
segments[74] = HAnimSegment673;

let HAnimSegment674 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment674.USE = "BvhPirouette_lMid1_to_lMid2";
segments[75] = HAnimSegment674;

let HAnimSegment675 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment675.USE = "BvhPirouette_lHand_to_lRing1";
segments[76] = HAnimSegment675;

let HAnimSegment676 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment676.USE = "BvhPirouette_lRing1_to_lRing2";
segments[77] = HAnimSegment676;

let HAnimSegment677 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment677.USE = "BvhPirouette_lHand_to_lPinky1";
segments[78] = HAnimSegment677;

let HAnimSegment678 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment678.USE = "BvhPirouette_lPinky1_to_lPinky2";
segments[79] = HAnimSegment678;

let HAnimSegment679 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment679.USE = "BvhPirouette_humanoid_root_to_rButtock";
segments[80] = HAnimSegment679;

let HAnimSegment680 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment680.USE = "BvhPirouette_rButtock_to_rThigh";
segments[81] = HAnimSegment680;

let HAnimSegment681 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment681.USE = "BvhPirouette_rThigh_to_rShin";
segments[82] = HAnimSegment681;

let HAnimSegment682 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment682.USE = "BvhPirouette_rShin_to_rFoot";
segments[83] = HAnimSegment682;

let HAnimSegment683 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment683.USE = "BvhPirouette_humanoid_root_to_lButtock";
segments[84] = HAnimSegment683;

let HAnimSegment684 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment684.USE = "BvhPirouette_lButtock_to_lThigh";
segments[85] = HAnimSegment684;

let HAnimSegment685 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment685.USE = "BvhPirouette_lThigh_to_lShin";
segments[86] = HAnimSegment685;

let HAnimSegment686 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment686.USE = "BvhPirouette_lShin_to_lFoot";
segments[87] = HAnimSegment686;

let HAnimSite687 = browser.currentScene.createNode("HAnimSite");
HAnimSite687.DEF = "BvhPirouette_humanoid_root_view";
HAnimSite687.name = "humanoid_root_view";
let Viewpoint688 = browser.currentScene.createNode("Viewpoint");
Viewpoint688.DEF = "BvhPirouette_humanoid_root_viewpoint";
Viewpoint688.description = "BvhPirouette front view towards HAnimHumanoid center";
Viewpoint688.position = new X3D.SFVec3f([0,0,80]);
HAnimSite687YYY.children = new X3D.MFNode();

HAnimSite687ZZZ.children[0] = Viewpoint688;

HAnimHumanoid92ZZZ.viewpoints[88] = HAnimSite687;

let HAnimSite689 = browser.currentScene.createNode("HAnimSite");
HAnimSite689.USE = "BvhPirouette_skullbase_to_leftEye_tip";
viewpoints[89] = HAnimSite689;

let HAnimSite690 = browser.currentScene.createNode("HAnimSite");
HAnimSite690.USE = "BvhPirouette_skullbase_to_rightEye_tip";
viewpoints[90] = HAnimSite690;

let HAnimSite691 = browser.currentScene.createNode("HAnimSite");
HAnimSite691.USE = "BvhPirouette_rThumb1_to_rThumb2_tip";
viewpoints[91] = HAnimSite691;

let HAnimSite692 = browser.currentScene.createNode("HAnimSite");
HAnimSite692.USE = "BvhPirouette_rIndex1_to_rIndex2_tip";
viewpoints[92] = HAnimSite692;

let HAnimSite693 = browser.currentScene.createNode("HAnimSite");
HAnimSite693.USE = "BvhPirouette_rMid1_to_rMid2_tip";
viewpoints[93] = HAnimSite693;

let HAnimSite694 = browser.currentScene.createNode("HAnimSite");
HAnimSite694.USE = "BvhPirouette_rRing1_to_rRing2_tip";
viewpoints[94] = HAnimSite694;

let HAnimSite695 = browser.currentScene.createNode("HAnimSite");
HAnimSite695.USE = "BvhPirouette_rPinky1_to_rPinky2_tip";
viewpoints[95] = HAnimSite695;

let HAnimSite696 = browser.currentScene.createNode("HAnimSite");
HAnimSite696.USE = "BvhPirouette_lThumb1_to_lThumb2_tip";
viewpoints[96] = HAnimSite696;

let HAnimSite697 = browser.currentScene.createNode("HAnimSite");
HAnimSite697.USE = "BvhPirouette_lIndex1_to_lIndex2_tip";
viewpoints[97] = HAnimSite697;

let HAnimSite698 = browser.currentScene.createNode("HAnimSite");
HAnimSite698.USE = "BvhPirouette_lMid1_to_lMid2_tip";
viewpoints[98] = HAnimSite698;

let HAnimSite699 = browser.currentScene.createNode("HAnimSite");
HAnimSite699.USE = "BvhPirouette_lRing1_to_lRing2_tip";
viewpoints[99] = HAnimSite699;

let HAnimSite700 = browser.currentScene.createNode("HAnimSite");
HAnimSite700.USE = "BvhPirouette_lPinky1_to_lPinky2_tip";
viewpoints[100] = HAnimSite700;

let HAnimSite701 = browser.currentScene.createNode("HAnimSite");
HAnimSite701.USE = "BvhPirouette_rShin_to_rFoot_tip";
viewpoints[101] = HAnimSite701;

let HAnimSite702 = browser.currentScene.createNode("HAnimSite");
HAnimSite702.USE = "BvhPirouette_lShin_to_lFoot_tip";
viewpoints[102] = HAnimSite702;

let HAnimSite703 = browser.currentScene.createNode("HAnimSite");
HAnimSite703.USE = "BvhPirouette_humanoid_root_view";
viewpoints[103] = HAnimSite703;

browser.currentScene.children[4] = HAnimHumanoid92;

let Group704 = browser.currentScene.createNode("Group");
Group704.DEF = "BvhPirouette_MotionGroup";
let TimeSensor705 = browser.currentScene.createNode("TimeSensor");
TimeSensor705.DEF = "RealTimer";
TimeSensor705.cycleInterval = 4.933;
TimeSensor705.loop = True;
Group704YYY.children = new X3D.MFNode();

Group704ZZZ.children[0] = TimeSensor705;

let TimeSensor706 = browser.currentScene.createNode("TimeSensor");
TimeSensor706.DEF = "StepTimer";
TimeSensor706.enabled = False;
TimeSensor706.cycleInterval = 592;
TimeSensor706.loop = True;
Group704ZZZ.children[1] = TimeSensor706;

let ScalarInterpolator707 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator707.DEF = "FrameStepper";
ScalarInterpolator707.key = new X3D.MFFloat([0,0.0017,0.0017,0.0034,0.0034,0.0051,0.0051,0.0068,0.0068,0.0085,0.0085,0.0102,0.0102,0.0118,0.0118,0.0135,0.0135,0.0152,0.0152,0.0169,0.0169,0.0186,0.0186,0.0203,0.0203,0.022,0.022,0.0237,0.0237,0.0254,0.0254,0.0271,0.0271,0.0288,0.0288,0.0305,0.0305,0.0321,0.0321,0.0338,0.0338,0.0355,0.0355,0.0372,0.0372,0.0389,0.0389,0.0406,0.0406,0.0423,0.0423,0.044,0.044,0.0457,0.0457,0.0474,0.0474,0.0491,0.0491,0.0508,0.0508,0.0525,0.0525,0.0541,0.0541,0.0558,0.0558,0.0575,0.0575,0.0592,0.0592,0.0609,0.0609,0.0626,0.0626,0.0643,0.0643,0.066,0.066,0.0677,0.0677,0.0694,0.0694,0.0711,0.0711,0.0728,0.0728,0.0745,0.0745,0.0761,0.0761,0.0778,0.0778,0.0795,0.0795,0.0812,0.0812,0.0829,0.0829,0.0846,0.0846,0.0863,0.0863,0.088,0.088,0.0897,0.0897,0.0914,0.0914,0.0931,0.0931,0.0948,0.0948,0.0964,0.0964,0.0981,0.0981,0.0998,0.0998,0.1015,0.1015,0.1032,0.1032,0.1049,0.1049,0.1066,0.1066,0.1083,0.1083,0.11,0.11,0.1117,0.1117,0.1134,0.1134,0.1151,0.1151,0.1168,0.1168,0.1184,0.1184,0.1201,0.1201,0.1218,0.1218,0.1235,0.1235,0.1252,0.1252,0.1269,0.1269,0.1286,0.1286,0.1303,0.1303,0.132,0.132,0.1337,0.1337,0.1354,0.1354,0.1371,0.1371,0.1387,0.1387,0.1404,0.1404,0.1421,0.1421,0.1438,0.1438,0.1455,0.1455,0.1472,0.1472,0.1489,0.1489,0.1506,0.1506,0.1523,0.1523,0.154,0.154,0.1557,0.1557,0.1574,0.1574,0.1591,0.1591,0.1607,0.1607,0.1624,0.1624,0.1641,0.1641,0.1658,0.1658,0.1675,0.1675,0.1692,0.1692,0.1709,0.1709,0.1726,0.1726,0.1743,0.1743,0.176,0.176,0.1777,0.1777,0.1794,0.1794,0.181,0.181,0.1827,0.1827,0.1844,0.1844,0.1861,0.1861,0.1878,0.1878,0.1895,0.1895,0.1912,0.1912,0.1929,0.1929,0.1946,0.1946,0.1963,0.1963,0.198,0.198,0.1997,0.1997,0.2014,0.2014,0.203,0.203,0.2047,0.2047,0.2064,0.2064,0.2081,0.2081,0.2098,0.2098,0.2115,0.2115,0.2132,0.2132,0.2149,0.2149,0.2166,0.2166,0.2183,0.2183,0.22,0.22,0.2217,0.2217,0.2234,0.2234,0.225,0.225,0.2267,0.2267,0.2284,0.2284,0.2301,0.2301,0.2318,0.2318,0.2335,0.2335,0.2352,0.2352,0.2369,0.2369,0.2386,0.2386,0.2403,0.2403,0.242,0.242,0.2437,0.2437,0.2453,0.2453,0.247,0.247,0.2487,0.2487,0.2504,0.2504,0.2521,0.2521,0.2538,0.2538,0.2555,0.2555,0.2572,0.2572,0.2589,0.2589,0.2606,0.2606,0.2623,0.2623,0.264,0.264,0.2657,0.2657,0.2673,0.2673,0.269,0.269,0.2707,0.2707,0.2724,0.2724,0.2741,0.2741,0.2758,0.2758,0.2775,0.2775,0.2792,0.2792,0.2809,0.2809,0.2826,0.2826,0.2843,0.2843,0.286,0.286,0.2876,0.2876,0.2893,0.2893,0.291,0.291,0.2927,0.2927,0.2944,0.2944,0.2961,0.2961,0.2978,0.2978,0.2995,0.2995,0.3012,0.3012,0.3029,0.3029,0.3046,0.3046,0.3063,0.3063,0.308,0.308,0.3096,0.3096,0.3113,0.3113,0.313,0.313,0.3147,0.3147,0.3164,0.3164,0.3181,0.3181,0.3198,0.3198,0.3215,0.3215,0.3232,0.3232,0.3249,0.3249,0.3266,0.3266,0.3283,0.3283,0.3299,0.3299,0.3316,0.3316,0.3333,0.3333,0.335,0.335,0.3367,0.3367,0.3384,0.3384,0.3401,0.3401,0.3418,0.3418,0.3435,0.3435,0.3452,0.3452,0.3469,0.3469,0.3486,0.3486,0.3503,0.3503,0.3519,0.3519,0.3536,0.3536,0.3553,0.3553,0.357,0.357,0.3587,0.3587,0.3604,0.3604,0.3621,0.3621,0.3638,0.3638,0.3655,0.3655,0.3672,0.3672,0.3689,0.3689,0.3706,0.3706,0.3723,0.3723,0.3739,0.3739,0.3756,0.3756,0.3773,0.3773,0.379,0.379,0.3807,0.3807,0.3824,0.3824,0.3841,0.3841,0.3858,0.3858,0.3875,0.3875,0.3892,0.3892,0.3909,0.3909,0.3926,0.3926,0.3942,0.3942,0.3959,0.3959,0.3976,0.3976,0.3993,0.3993,0.401,0.401,0.4027,0.4027,0.4044,0.4044,0.4061,0.4061,0.4078,0.4078,0.4095,0.4095,0.4112,0.4112,0.4129,0.4129,0.4146,0.4146,0.4162,0.4162,0.4179,0.4179,0.4196,0.4196,0.4213,0.4213,0.423,0.423,0.4247,0.4247,0.4264,0.4264,0.4281,0.4281,0.4298,0.4298,0.4315,0.4315,0.4332,0.4332,0.4349,0.4349,0.4365,0.4365,0.4382,0.4382,0.4399,0.4399,0.4416,0.4416,0.4433,0.4433,0.445,0.445,0.4467,0.4467,0.4484,0.4484,0.4501,0.4501,0.4518,0.4518,0.4535,0.4535,0.4552,0.4552,0.4569,0.4569,0.4585,0.4585,0.4602,0.4602,0.4619,0.4619,0.4636,0.4636,0.4653,0.4653,0.467,0.467,0.4687,0.4687,0.4704,0.4704,0.4721,0.4721,0.4738,0.4738,0.4755,0.4755,0.4772,0.4772,0.4788,0.4788,0.4805,0.4805,0.4822,0.4822,0.4839,0.4839,0.4856,0.4856,0.4873,0.4873,0.489,0.489,0.4907,0.4907,0.4924,0.4924,0.4941,0.4941,0.4958,0.4958,0.4975,0.4975,0.4992,0.4992,0.5008,0.5008,0.5025,0.5025,0.5042,0.5042,0.5059,0.5059,0.5076,0.5076,0.5093,0.5093,0.511,0.511,0.5127,0.5127,0.5144,0.5144,0.5161,0.5161,0.5178,0.5178,0.5195,0.5195,0.5212,0.5212,0.5228,0.5228,0.5245,0.5245,0.5262,0.5262,0.5279,0.5279,0.5296,0.5296,0.5313,0.5313,0.533,0.533,0.5347,0.5347,0.5364,0.5364,0.5381,0.5381,0.5398,0.5398,0.5415,0.5415,0.5431,0.5431,0.5448,0.5448,0.5465,0.5465,0.5482,0.5482,0.5499,0.5499,0.5516,0.5516,0.5533,0.5533,0.555,0.555,0.5567,0.5567,0.5584,0.5584,0.5601,0.5601,0.5618,0.5618,0.5635,0.5635,0.5651,0.5651,0.5668,0.5668,0.5685,0.5685,0.5702,0.5702,0.5719,0.5719,0.5736,0.5736,0.5753,0.5753,0.577,0.577,0.5787,0.5787,0.5804,0.5804,0.5821,0.5821,0.5838,0.5838,0.5854,0.5854,0.5871,0.5871,0.5888,0.5888,0.5905,0.5905,0.5922,0.5922,0.5939,0.5939,0.5956,0.5956,0.5973,0.5973,0.599,0.599,0.6007,0.6007,0.6024,0.6024,0.6041,0.6041,0.6058,0.6058,0.6074,0.6074,0.6091,0.6091,0.6108,0.6108,0.6125,0.6125,0.6142,0.6142,0.6159,0.6159,0.6176,0.6176,0.6193,0.6193,0.621,0.621,0.6227,0.6227,0.6244,0.6244,0.6261,0.6261,0.6277,0.6277,0.6294,0.6294,0.6311,0.6311,0.6328,0.6328,0.6345,0.6345,0.6362,0.6362,0.6379,0.6379,0.6396,0.6396,0.6413,0.6413,0.643,0.643,0.6447,0.6447,0.6464,0.6464,0.6481,0.6481,0.6497,0.6497,0.6514,0.6514,0.6531,0.6531,0.6548,0.6548,0.6565,0.6565,0.6582,0.6582,0.6599,0.6599,0.6616,0.6616,0.6633,0.6633,0.665,0.665,0.6667,0.6667,0.6684,0.6684,0.6701,0.6701,0.6717,0.6717,0.6734,0.6734,0.6751,0.6751,0.6768,0.6768,0.6785,0.6785,0.6802,0.6802,0.6819,0.6819,0.6836,0.6836,0.6853,0.6853,0.687,0.687,0.6887,0.6887,0.6904,0.6904,0.692,0.692,0.6937,0.6937,0.6954,0.6954,0.6971,0.6971,0.6988,0.6988,0.7005,0.7005,0.7022,0.7022,0.7039,0.7039,0.7056,0.7056,0.7073,0.7073,0.709,0.709,0.7107,0.7107,0.7124,0.7124,0.714,0.714,0.7157,0.7157,0.7174,0.7174,0.7191,0.7191,0.7208,0.7208,0.7225,0.7225,0.7242,0.7242,0.7259,0.7259,0.7276,0.7276,0.7293,0.7293,0.731,0.731,0.7327,0.7327,0.7343,0.7343,0.736,0.736,0.7377,0.7377,0.7394,0.7394,0.7411,0.7411,0.7428,0.7428,0.7445,0.7445,0.7462,0.7462,0.7479,0.7479,0.7496,0.7496,0.7513,0.7513,0.753,0.753,0.7547,0.7547,0.7563,0.7563,0.758,0.758,0.7597,0.7597,0.7614,0.7614,0.7631,0.7631,0.7648,0.7648,0.7665,0.7665,0.7682,0.7682,0.7699,0.7699,0.7716,0.7716,0.7733,0.7733,0.775,0.775,0.7766,0.7766,0.7783,0.7783,0.78,0.78,0.7817,0.7817,0.7834,0.7834,0.7851,0.7851,0.7868,0.7868,0.7885,0.7885,0.7902,0.7902,0.7919,0.7919,0.7936,0.7936,0.7953,0.7953,0.797,0.797,0.7986,0.7986,0.8003,0.8003,0.802,0.802,0.8037,0.8037,0.8054,0.8054,0.8071,0.8071,0.8088,0.8088,0.8105,0.8105,0.8122,0.8122,0.8139,0.8139,0.8156,0.8156,0.8173,0.8173,0.819,0.819,0.8206,0.8206,0.8223,0.8223,0.824,0.824,0.8257,0.8257,0.8274,0.8274,0.8291,0.8291,0.8308,0.8308,0.8325,0.8325,0.8342,0.8342,0.8359,0.8359,0.8376,0.8376,0.8393,0.8393,0.8409,0.8409,0.8426,0.8426,0.8443,0.8443,0.846,0.846,0.8477,0.8477,0.8494,0.8494,0.8511,0.8511,0.8528,0.8528,0.8545,0.8545,0.8562,0.8562,0.8579,0.8579,0.8596,0.8596,0.8613,0.8613,0.8629,0.8629,0.8646,0.8646,0.8663,0.8663,0.868,0.868,0.8697,0.8697,0.8714,0.8714,0.8731,0.8731,0.8748,0.8748,0.8765,0.8765,0.8782,0.8782,0.8799,0.8799,0.8816,0.8816,0.8832,0.8832,0.8849,0.8849,0.8866,0.8866,0.8883,0.8883,0.89,0.89,0.8917,0.8917,0.8934,0.8934,0.8951,0.8951,0.8968,0.8968,0.8985,0.8985,0.9002,0.9002,0.9019,0.9019,0.9036,0.9036,0.9052,0.9052,0.9069,0.9069,0.9086,0.9086,0.9103,0.9103,0.912,0.912,0.9137,0.9137,0.9154,0.9154,0.9171,0.9171,0.9188,0.9188,0.9205,0.9205,0.9222,0.9222,0.9239,0.9239,0.9255,0.9255,0.9272,0.9272,0.9289,0.9289,0.9306,0.9306,0.9323,0.9323,0.934,0.934,0.9357,0.9357,0.9374,0.9374,0.9391,0.9391,0.9408,0.9408,0.9425,0.9425,0.9442,0.9442,0.9459,0.9459,0.9475,0.9475,0.9492,0.9492,0.9509,0.9509,0.9526,0.9526,0.9543,0.9543,0.956,0.956,0.9577,0.9577,0.9594,0.9594,0.9611,0.9611,0.9628,0.9628,0.9645,0.9645,0.9662,0.9662,0.9679,0.9679,0.9695,0.9695,0.9712,0.9712,0.9729,0.9729,0.9746,0.9746,0.9763,0.9763,0.978,0.978,0.9797,0.9797,0.9814,0.9814,0.9831,0.9831,0.9848,0.9848,0.9865,0.9865,0.9882,0.9882,0.9898,0.9898,0.9915,0.9915,0.9932,0.9932,0.9949,0.9949,0.9966,0.9966,0.9983,0.9983,1,1]);
ScalarInterpolator707.keyValue = new X3D.MFFloat([0,0,0.0017,0.0017,0.0034,0.0034,0.0051,0.0051,0.0068,0.0068,0.0085,0.0085,0.0102,0.0102,0.0118,0.0118,0.0135,0.0135,0.0152,0.0152,0.0169,0.0169,0.0186,0.0186,0.0203,0.0203,0.022,0.022,0.0237,0.0237,0.0254,0.0254,0.0271,0.0271,0.0288,0.0288,0.0305,0.0305,0.0321,0.0321,0.0338,0.0338,0.0355,0.0355,0.0372,0.0372,0.0389,0.0389,0.0406,0.0406,0.0423,0.0423,0.044,0.044,0.0457,0.0457,0.0474,0.0474,0.0491,0.0491,0.0508,0.0508,0.0525,0.0525,0.0541,0.0541,0.0558,0.0558,0.0575,0.0575,0.0592,0.0592,0.0609,0.0609,0.0626,0.0626,0.0643,0.0643,0.066,0.066,0.0677,0.0677,0.0694,0.0694,0.0711,0.0711,0.0728,0.0728,0.0745,0.0745,0.0761,0.0761,0.0778,0.0778,0.0795,0.0795,0.0812,0.0812,0.0829,0.0829,0.0846,0.0846,0.0863,0.0863,0.088,0.088,0.0897,0.0897,0.0914,0.0914,0.0931,0.0931,0.0948,0.0948,0.0964,0.0964,0.0981,0.0981,0.0998,0.0998,0.1015,0.1015,0.1032,0.1032,0.1049,0.1049,0.1066,0.1066,0.1083,0.1083,0.11,0.11,0.1117,0.1117,0.1134,0.1134,0.1151,0.1151,0.1168,0.1168,0.1184,0.1184,0.1201,0.1201,0.1218,0.1218,0.1235,0.1235,0.1252,0.1252,0.1269,0.1269,0.1286,0.1286,0.1303,0.1303,0.132,0.132,0.1337,0.1337,0.1354,0.1354,0.1371,0.1371,0.1387,0.1387,0.1404,0.1404,0.1421,0.1421,0.1438,0.1438,0.1455,0.1455,0.1472,0.1472,0.1489,0.1489,0.1506,0.1506,0.1523,0.1523,0.154,0.154,0.1557,0.1557,0.1574,0.1574,0.1591,0.1591,0.1607,0.1607,0.1624,0.1624,0.1641,0.1641,0.1658,0.1658,0.1675,0.1675,0.1692,0.1692,0.1709,0.1709,0.1726,0.1726,0.1743,0.1743,0.176,0.176,0.1777,0.1777,0.1794,0.1794,0.181,0.181,0.1827,0.1827,0.1844,0.1844,0.1861,0.1861,0.1878,0.1878,0.1895,0.1895,0.1912,0.1912,0.1929,0.1929,0.1946,0.1946,0.1963,0.1963,0.198,0.198,0.1997,0.1997,0.2014,0.2014,0.203,0.203,0.2047,0.2047,0.2064,0.2064,0.2081,0.2081,0.2098,0.2098,0.2115,0.2115,0.2132,0.2132,0.2149,0.2149,0.2166,0.2166,0.2183,0.2183,0.22,0.22,0.2217,0.2217,0.2234,0.2234,0.225,0.225,0.2267,0.2267,0.2284,0.2284,0.2301,0.2301,0.2318,0.2318,0.2335,0.2335,0.2352,0.2352,0.2369,0.2369,0.2386,0.2386,0.2403,0.2403,0.242,0.242,0.2437,0.2437,0.2453,0.2453,0.247,0.247,0.2487,0.2487,0.2504,0.2504,0.2521,0.2521,0.2538,0.2538,0.2555,0.2555,0.2572,0.2572,0.2589,0.2589,0.2606,0.2606,0.2623,0.2623,0.264,0.264,0.2657,0.2657,0.2673,0.2673,0.269,0.269,0.2707,0.2707,0.2724,0.2724,0.2741,0.2741,0.2758,0.2758,0.2775,0.2775,0.2792,0.2792,0.2809,0.2809,0.2826,0.2826,0.2843,0.2843,0.286,0.286,0.2876,0.2876,0.2893,0.2893,0.291,0.291,0.2927,0.2927,0.2944,0.2944,0.2961,0.2961,0.2978,0.2978,0.2995,0.2995,0.3012,0.3012,0.3029,0.3029,0.3046,0.3046,0.3063,0.3063,0.308,0.308,0.3096,0.3096,0.3113,0.3113,0.313,0.313,0.3147,0.3147,0.3164,0.3164,0.3181,0.3181,0.3198,0.3198,0.3215,0.3215,0.3232,0.3232,0.3249,0.3249,0.3266,0.3266,0.3283,0.3283,0.3299,0.3299,0.3316,0.3316,0.3333,0.3333,0.335,0.335,0.3367,0.3367,0.3384,0.3384,0.3401,0.3401,0.3418,0.3418,0.3435,0.3435,0.3452,0.3452,0.3469,0.3469,0.3486,0.3486,0.3503,0.3503,0.3519,0.3519,0.3536,0.3536,0.3553,0.3553,0.357,0.357,0.3587,0.3587,0.3604,0.3604,0.3621,0.3621,0.3638,0.3638,0.3655,0.3655,0.3672,0.3672,0.3689,0.3689,0.3706,0.3706,0.3723,0.3723,0.3739,0.3739,0.3756,0.3756,0.3773,0.3773,0.379,0.379,0.3807,0.3807,0.3824,0.3824,0.3841,0.3841,0.3858,0.3858,0.3875,0.3875,0.3892,0.3892,0.3909,0.3909,0.3926,0.3926,0.3942,0.3942,0.3959,0.3959,0.3976,0.3976,0.3993,0.3993,0.401,0.401,0.4027,0.4027,0.4044,0.4044,0.4061,0.4061,0.4078,0.4078,0.4095,0.4095,0.4112,0.4112,0.4129,0.4129,0.4146,0.4146,0.4162,0.4162,0.4179,0.4179,0.4196,0.4196,0.4213,0.4213,0.423,0.423,0.4247,0.4247,0.4264,0.4264,0.4281,0.4281,0.4298,0.4298,0.4315,0.4315,0.4332,0.4332,0.4349,0.4349,0.4365,0.4365,0.4382,0.4382,0.4399,0.4399,0.4416,0.4416,0.4433,0.4433,0.445,0.445,0.4467,0.4467,0.4484,0.4484,0.4501,0.4501,0.4518,0.4518,0.4535,0.4535,0.4552,0.4552,0.4569,0.4569,0.4585,0.4585,0.4602,0.4602,0.4619,0.4619,0.4636,0.4636,0.4653,0.4653,0.467,0.467,0.4687,0.4687,0.4704,0.4704,0.4721,0.4721,0.4738,0.4738,0.4755,0.4755,0.4772,0.4772,0.4788,0.4788,0.4805,0.4805,0.4822,0.4822,0.4839,0.4839,0.4856,0.4856,0.4873,0.4873,0.489,0.489,0.4907,0.4907,0.4924,0.4924,0.4941,0.4941,0.4958,0.4958,0.4975,0.4975,0.4992,0.4992,0.5008,0.5008,0.5025,0.5025,0.5042,0.5042,0.5059,0.5059,0.5076,0.5076,0.5093,0.5093,0.511,0.511,0.5127,0.5127,0.5144,0.5144,0.5161,0.5161,0.5178,0.5178,0.5195,0.5195,0.5212,0.5212,0.5228,0.5228,0.5245,0.5245,0.5262,0.5262,0.5279,0.5279,0.5296,0.5296,0.5313,0.5313,0.533,0.533,0.5347,0.5347,0.5364,0.5364,0.5381,0.5381,0.5398,0.5398,0.5415,0.5415,0.5431,0.5431,0.5448,0.5448,0.5465,0.5465,0.5482,0.5482,0.5499,0.5499,0.5516,0.5516,0.5533,0.5533,0.555,0.555,0.5567,0.5567,0.5584,0.5584,0.5601,0.5601,0.5618,0.5618,0.5635,0.5635,0.5651,0.5651,0.5668,0.5668,0.5685,0.5685,0.5702,0.5702,0.5719,0.5719,0.5736,0.5736,0.5753,0.5753,0.577,0.577,0.5787,0.5787,0.5804,0.5804,0.5821,0.5821,0.5838,0.5838,0.5854,0.5854,0.5871,0.5871,0.5888,0.5888,0.5905,0.5905,0.5922,0.5922,0.5939,0.5939,0.5956,0.5956,0.5973,0.5973,0.599,0.599,0.6007,0.6007,0.6024,0.6024,0.6041,0.6041,0.6058,0.6058,0.6074,0.6074,0.6091,0.6091,0.6108,0.6108,0.6125,0.6125,0.6142,0.6142,0.6159,0.6159,0.6176,0.6176,0.6193,0.6193,0.621,0.621,0.6227,0.6227,0.6244,0.6244,0.6261,0.6261,0.6277,0.6277,0.6294,0.6294,0.6311,0.6311,0.6328,0.6328,0.6345,0.6345,0.6362,0.6362,0.6379,0.6379,0.6396,0.6396,0.6413,0.6413,0.643,0.643,0.6447,0.6447,0.6464,0.6464,0.6481,0.6481,0.6497,0.6497,0.6514,0.6514,0.6531,0.6531,0.6548,0.6548,0.6565,0.6565,0.6582,0.6582,0.6599,0.6599,0.6616,0.6616,0.6633,0.6633,0.665,0.665,0.6667,0.6667,0.6684,0.6684,0.6701,0.6701,0.6717,0.6717,0.6734,0.6734,0.6751,0.6751,0.6768,0.6768,0.6785,0.6785,0.6802,0.6802,0.6819,0.6819,0.6836,0.6836,0.6853,0.6853,0.687,0.687,0.6887,0.6887,0.6904,0.6904,0.692,0.692,0.6937,0.6937,0.6954,0.6954,0.6971,0.6971,0.6988,0.6988,0.7005,0.7005,0.7022,0.7022,0.7039,0.7039,0.7056,0.7056,0.7073,0.7073,0.709,0.709,0.7107,0.7107,0.7124,0.7124,0.714,0.714,0.7157,0.7157,0.7174,0.7174,0.7191,0.7191,0.7208,0.7208,0.7225,0.7225,0.7242,0.7242,0.7259,0.7259,0.7276,0.7276,0.7293,0.7293,0.731,0.731,0.7327,0.7327,0.7343,0.7343,0.736,0.736,0.7377,0.7377,0.7394,0.7394,0.7411,0.7411,0.7428,0.7428,0.7445,0.7445,0.7462,0.7462,0.7479,0.7479,0.7496,0.7496,0.7513,0.7513,0.753,0.753,0.7547,0.7547,0.7563,0.7563,0.758,0.758,0.7597,0.7597,0.7614,0.7614,0.7631,0.7631,0.7648,0.7648,0.7665,0.7665,0.7682,0.7682,0.7699,0.7699,0.7716,0.7716,0.7733,0.7733,0.775,0.775,0.7766,0.7766,0.7783,0.7783,0.78,0.78,0.7817,0.7817,0.7834,0.7834,0.7851,0.7851,0.7868,0.7868,0.7885,0.7885,0.7902,0.7902,0.7919,0.7919,0.7936,0.7936,0.7953,0.7953,0.797,0.797,0.7986,0.7986,0.8003,0.8003,0.802,0.802,0.8037,0.8037,0.8054,0.8054,0.8071,0.8071,0.8088,0.8088,0.8105,0.8105,0.8122,0.8122,0.8139,0.8139,0.8156,0.8156,0.8173,0.8173,0.819,0.819,0.8206,0.8206,0.8223,0.8223,0.824,0.824,0.8257,0.8257,0.8274,0.8274,0.8291,0.8291,0.8308,0.8308,0.8325,0.8325,0.8342,0.8342,0.8359,0.8359,0.8376,0.8376,0.8393,0.8393,0.8409,0.8409,0.8426,0.8426,0.8443,0.8443,0.846,0.846,0.8477,0.8477,0.8494,0.8494,0.8511,0.8511,0.8528,0.8528,0.8545,0.8545,0.8562,0.8562,0.8579,0.8579,0.8596,0.8596,0.8613,0.8613,0.8629,0.8629,0.8646,0.8646,0.8663,0.8663,0.868,0.868,0.8697,0.8697,0.8714,0.8714,0.8731,0.8731,0.8748,0.8748,0.8765,0.8765,0.8782,0.8782,0.8799,0.8799,0.8816,0.8816,0.8832,0.8832,0.8849,0.8849,0.8866,0.8866,0.8883,0.8883,0.89,0.89,0.8917,0.8917,0.8934,0.8934,0.8951,0.8951,0.8968,0.8968,0.8985,0.8985,0.9002,0.9002,0.9019,0.9019,0.9036,0.9036,0.9052,0.9052,0.9069,0.9069,0.9086,0.9086,0.9103,0.9103,0.912,0.912,0.9137,0.9137,0.9154,0.9154,0.9171,0.9171,0.9188,0.9188,0.9205,0.9205,0.9222,0.9222,0.9239,0.9239,0.9255,0.9255,0.9272,0.9272,0.9289,0.9289,0.9306,0.9306,0.9323,0.9323,0.934,0.934,0.9357,0.9357,0.9374,0.9374,0.9391,0.9391,0.9408,0.9408,0.9425,0.9425,0.9442,0.9442,0.9459,0.9459,0.9475,0.9475,0.9492,0.9492,0.9509,0.9509,0.9526,0.9526,0.9543,0.9543,0.956,0.956,0.9577,0.9577,0.9594,0.9594,0.9611,0.9611,0.9628,0.9628,0.9645,0.9645,0.9662,0.9662,0.9679,0.9679,0.9695,0.9695,0.9712,0.9712,0.9729,0.9729,0.9746,0.9746,0.9763,0.9763,0.978,0.978,0.9797,0.9797,0.9814,0.9814,0.9831,0.9831,0.9848,0.9848,0.9865,0.9865,0.9882,0.9882,0.9898,0.9898,0.9915,0.9915,0.9932,0.9932,0.9949,0.9949,0.9966,0.9966,0.9983,0.9983,1]);
Group704ZZZ.children[2] = ScalarInterpolator707;

let PositionInterpolator708 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator708.DEF = "Interpolator0_humanoid_root";
PositionInterpolator708.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
PositionInterpolator708.keyValue = new X3D.MFVec3f([1.5314,8.4886,15.2037,1.3559,8.1946,14.603,1.3595,8.3044,14.5353,1.3713,8.4041,14.4527,1.3795,8.5103,14.3616,1.3865,8.61,14.286,1.3936,8.6964,14.2194,1.4025,8.7755,14.1493,1.4233,8.8688,14.0712,1.4515,8.9661,13.9893,1.4835,9.0446,13.9129,1.5157,9.0974,13.8427,1.5459,9.1491,13.7744,1.5748,9.1983,13.7141,1.6009,9.2359,13.6651,1.6343,9.2639,13.5962,1.6724,9.2844,13.5309,1.7012,9.2993,13.4682,1.7253,9.3093,13.407,1.7547,9.3143,13.342,1.7912,9.3156,13.262,1.824,9.3152,13.1794,1.8538,9.3033,13.0981,1.8678,9.2938,13.0383,1.8839,9.2772,12.9694,1.9021,9.2547,12.8962,1.9142,9.2209,12.8307,1.9218,9.1821,12.7736,1.9257,9.1438,12.7123,1.9404,9.1073,12.642,1.9496,9.0552,12.575,1.9522,8.9981,12.5165,1.9685,8.9347,12.4528,1.9956,8.8709,12.3809,2.043,8.8085,12.3037,2.0635,8.7485,12.2383,2.0765,8.6894,12.174,2.0912,8.6279,12.1105,2.1119,8.5707,12.039,2.1255,8.5073,11.9897,2.1347,8.4455,11.9387,2.1381,8.3861,11.8852,2.1429,8.3342,11.8313,2.1518,8.2905,11.7777,2.1588,8.2545,11.7244,2.1661,8.229,11.6636,2.1761,8.2159,11.6049,2.1859,8.2109,11.5398,2.202,8.2137,11.4611,2.226,8.2271,11.3714,2.2449,8.2475,11.2808,2.2615,8.2689,11.2007,2.2773,8.2971,11.1205,2.2886,8.3316,11.0325,2.2988,8.3704,10.9397,2.3176,8.4139,10.8367,2.3373,8.452,10.7538,2.3634,8.4972,10.6352,2.393,8.5375,10.5363,2.4139,8.5768,10.4385,2.4372,8.614,10.3352,2.4715,8.646,10.228,2.4972,8.6726,10.1293,2.5193,8.6974,10.0205,2.5558,8.717,9.9222,2.5911,8.7359,9.8266,2.6235,8.755,9.7264,2.6599,8.7701,9.6267,2.6941,8.7796,9.5388,2.7259,8.7858,9.4529,2.7588,8.7888,9.3613,2.79,8.7901,9.2779,2.8157,8.7929,9.2041,2.8428,8.7972,9.1284,2.8703,8.8032,9.0473,2.8925,8.804,8.9658,2.9219,8.8044,8.8812,2.957,8.8042,8.8033,2.9841,8.8049,8.7236,3.0097,8.8058,8.6488,3.0394,8.8057,8.5786,3.0707,8.8043,8.5108,3.0926,8.8027,8.4503,3.108,8.8019,8.3965,3.1263,8.8017,8.3404,3.1481,8.8057,8.2801,3.1695,8.8105,8.2244,3.1912,8.8137,8.1779,3.2063,8.8159,8.1088,3.2217,8.818,8.0519,3.2348,8.8221,8.0008,3.2454,8.8295,7.9485,3.2573,8.8384,7.8973,3.2744,8.8446,7.8428,3.2878,8.8487,7.7954,3.2973,8.8567,7.7548,3.3019,8.8656,7.7168,3.3076,8.8703,7.6764,3.3148,8.8741,7.6304,3.3177,8.8772,7.5889,3.3216,8.8794,7.5526,3.3226,8.8813,7.5132,3.3212,8.8828,7.4707,3.3223,8.883,7.4317,3.3255,8.8822,7.3998,3.3259,8.8816,7.3671,3.3186,8.8808,7.3344,3.3127,8.8803,7.2982,3.3109,8.8749,7.2639,3.3077,8.8671,7.232,3.2992,8.8585,7.205,3.2911,8.8462,7.1786,3.2825,8.8346,7.1502,3.2699,8.8248,7.1249,3.2556,8.8113,7.1002,3.2471,8.7937,7.0757,3.2308,8.7741,7.0567,3.2129,8.7466,7.0391,3.2006,8.7142,7.0204,3.1828,8.6726,6.9986,3.1611,8.631,6.9792,3.145,8.577,6.9634,3.1311,8.5099,6.9512,3.1091,8.4378,6.9417,3.0841,8.3723,6.9342,3.0617,8.3037,6.9303,3.0381,8.2293,6.9296,3.0111,8.1559,6.9303,2.9869,8.0771,6.951,2.9568,8.0065,6.9363,2.9339,7.9255,6.9502,2.9089,7.8479,6.9647,2.8787,7.7736,6.9751,2.8485,7.6981,6.9833,2.8157,7.6259,6.9919,2.7832,7.5564,7.0042,2.7466,7.4855,7.0231,2.7116,7.4156,7.0376,2.6788,7.3535,7.0421,2.6442,7.2828,7.0644,2.603,7.2241,7.0609,2.5661,7.1542,7.0691,2.5305,7.0855,7.0762,2.4949,7.0288,7.0782,2.4566,6.9829,7.0844,2.4115,6.9403,7.0874,2.3656,6.9061,7.0864,2.3138,6.893,7.0831,2.2602,6.8902,7.0799,2.2026,6.898,7.0706,2.145,6.9208,7.0511,2.0906,6.9458,7.0336,2.0262,6.9764,7.0171,1.957,7.0299,7.0008,1.8869,7.1002,6.9816,1.816,7.1707,6.9598,1.7423,7.2391,6.9325,1.6764,7.3024,6.9006,1.6043,7.4125,6.8648,1.525,7.4906,6.8523,1.4546,7.6074,6.8008,1.3807,7.7063,6.7721,1.3159,7.8006,6.7393,1.2873,7.9066,6.6627,1.2099,7.9823,6.6555,1.1522,8.0498,6.641,1.1062,8.1086,6.6238,1.0601,8.1666,6.6008,1.0091,8.2254,6.581,0.9613,8.2871,6.5633,0.9153,8.3485,6.524,0.8835,8.4131,6.5117,0.8227,8.479,6.5214,0.7892,8.5008,6.4428,0.758,8.5443,6.4221,0.7212,8.585,6.3808,0.6944,8.6113,6.3051,0.6602,8.6424,6.3084,0.6386,8.665,6.284,0.6335,8.6805,6.24,0.6336,8.6955,6.208,0.6316,8.7078,6.1923,0.6245,8.7173,6.1715,0.6222,8.7316,6.1476,0.6169,8.7405,6.126,0.6085,8.7382,6.0989,0.6183,8.7629,6.1141,0.6122,8.7638,6.1022,0.6088,8.8018,6.1095,0.6093,8.7726,6.1159,0.6028,8.8136,6.1243,0.6083,8.8082,6.1409,0.6015,8.811,6.1485,0.6016,8.8098,6.1767,0.5944,8.8106,6.1888,0.5782,8.8192,6.1923,0.5784,8.8204,6.2137,0.5691,8.8286,6.2264,0.54,8.8458,6.2397,0.5232,8.8587,6.2627,0.5104,8.871,6.28,0.5031,8.8753,6.3178,0.4878,8.8767,6.3623,0.4722,8.8767,6.3776,0.4563,8.8819,6.392,0.4413,8.8841,6.4104,0.423,8.8918,6.4235,0.4095,8.8944,6.4538,0.3982,8.8956,6.4891,0.39,8.9107,6.4959,0.3875,8.9301,6.4972,0.3811,8.9129,6.5425,0.3683,8.9157,6.582,0.3415,8.8424,6.6322,0.3147,8.8581,6.6699,0.3081,8.8164,6.7016,0.2917,8.799,6.7279,0.2908,8.7754,6.7559,0.2795,8.7317,6.7855,0.249,8.6817,6.8163,0.225,8.6234,6.844,0.2093,8.5897,6.8704,0.1938,8.5374,6.8935,0.175,8.506,6.9216,0.1537,8.4582,6.9523,0.1371,8.4074,6.9852,0.1163,8.3551,7.0152,0.0998,8.3013,7.0472,0.0869,8.2609,7.0885,0.0657,8.2603,7.1457,0.0391,8.234,7.1987,0.0113,8.2123,7.2576,-0.0264,8.1912,7.3099,-0.0677,8.1696,7.3565,-0.1047,8.1636,7.382,-0.1372,8.1631,7.3915,-0.1732,8.1575,7.4053,-0.2027,8.1311,7.4235,-0.2262,8.1382,7.4645,-0.257,8.1331,7.4981,-0.3019,8.1095,7.5186,-0.3345,8.1217,7.5587,-0.3727,8.1122,7.5746,-0.4029,8.1227,7.6864,-0.43,8.0872,7.5659,-0.467,8.0743,7.6019,-0.507,8.0685,7.6587,-0.5483,8.0602,7.7062,-0.5836,8.0459,7.7269,-0.6143,8.0339,7.7459,-0.6557,8.042,7.7701,-0.6895,8.0414,7.7879,-0.7333,8.036,7.803,-0.7649,8.0292,7.8089,-0.8018,8.044,7.8149,-0.8333,8.0486,7.8231,-0.8604,8.0418,7.8364,-0.8892,8.0532,7.8466,-0.9149,8.0406,7.8209,-0.9377,8.0483,7.8305,-0.9727,8.0681,7.8382,-1.0049,8.0938,7.822,-1.0127,8.1007,7.8215,-1.0346,8.1134,7.8032,-1.0462,8.1286,7.7895,-1.0592,8.156,7.7862,-1.0763,8.1791,7.7872,-1.0949,8.2092,7.7823,-1.1059,8.2468,7.7713,-1.1206,8.308,7.7865,-1.1215,8.3701,7.7984,-1.1214,8.4296,7.8105,-1.1166,8.4878,7.8356,-1.1092,8.5433,7.8955,-1.1231,8.5672,7.9386,-1.1401,8.631,7.9891,-1.154,8.6876,8.0341,-1.1696,8.7379,8.0781,-1.1861,8.784,8.1121,-1.2076,8.8223,8.1606,-1.2335,8.8579,8.2153,-1.2578,8.8886,8.275,-1.2853,8.9201,8.3356,-1.3166,8.947,8.3959,-1.3503,8.9619,8.4517,-1.3861,8.9724,8.5106,-1.4254,8.9861,8.5754,-1.4614,8.9923,8.6473,-1.5038,8.9838,8.7082,-1.5464,8.9881,8.79,-1.592,8.9828,8.848,-1.6426,8.9658,8.9088,-1.6947,8.9531,8.9792,-1.7413,8.9462,9.0469,-1.7975,8.9118,9.1068,-1.8594,8.8661,9.1828,-1.924,8.808,9.2695,-1.9842,8.7382,9.3398,-2.0438,8.66,9.3974,-2.1184,8.5858,9.4648,-2.1948,8.5089,9.5596,-2.2699,8.4224,9.6472,-2.352,8.3338,9.7056,-2.4371,8.2561,9.7563,-2.514,8.1878,9.828,-2.5861,8.1217,9.9218,-2.6572,8.0554,10.0066,-2.7302,7.9931,10.0775,-2.7898,7.9446,10.1331,-2.8411,7.9138,10.1774,-2.8828,7.884,10.2165,-2.926,7.8508,10.2367,-2.9758,7.8213,10.2712,-3.0292,7.7928,10.3439,-3.069,7.7794,10.365,-3.1096,7.7724,10.4306,-3.1384,7.7927,10.4383,-3.174,7.8245,10.4449,-3.2076,7.8638,10.431,-3.2364,7.8797,10.4865,-3.2607,7.9027,10.5109,-3.2852,7.9269,10.5372,-3.305,7.9475,10.5613,-3.3205,7.9671,10.5697,-3.326,7.9829,10.5719,-3.3318,7.9955,10.5798,-3.3419,8.0073,10.5961,-3.3463,8.0221,10.6098,-3.3526,8.0426,10.6185,-3.351,8.0658,10.6273,-3.3481,8.0889,10.6537,-3.3603,8.115,10.6586,-3.3677,8.1358,10.6755,-3.3621,8.1553,10.6966,-3.3435,8.1776,10.7131,-3.3257,8.1999,10.727,-3.339,8.2146,10.7441,-3.3523,8.2263,10.7615,-3.3445,8.2414,10.7705,-3.3276,8.2536,10.7924,-3.3178,8.2663,10.7985,-3.3063,8.2772,10.8125,-3.2926,8.2865,10.8243,-3.2821,8.2945,10.83,-3.2699,8.3011,10.8334,-3.2509,8.306,10.8333,-3.2346,8.3082,10.8395,-3.2221,8.3088,10.8525,-3.2011,8.3069,10.8712,-3.1841,8.3009,10.891,-3.1752,8.2843,10.9087,-3.1587,8.2729,10.9283,-3.1349,8.2597,10.9484,-3.0824,8.259,11.0279,-3.059,8.2412,11.0415,-3.0357,8.2207,11.0563,-3.0083,8.2099,11.0926,-2.9842,8.1983,11.1247,-2.96,8.1837,11.1539,-2.9363,8.166,11.1753,-2.9062,8.1392,11.1986,-2.8785,8.1103,11.2376,-2.8513,8.074,11.2693,-2.8221,8.0316,11.3004,-2.7902,7.9848,11.3404,-2.7654,7.9342,11.3855,-2.7423,7.8739,11.4129,-2.7151,7.8128,11.4414,-2.6878,7.7514,11.4815,-2.6594,7.6877,11.5259,-2.6372,7.6193,11.5622,-2.6149,7.5503,11.604,-2.59,7.4789,11.6505,-2.5639,7.4041,11.6996,-2.538,7.3285,11.7445,-2.5145,7.2524,11.7832,-2.494,7.1733,11.8241,-2.464,7.0944,11.8727,-2.4398,7.0277,11.9194,-2.4272,6.9639,11.9571,-2.4166,6.9027,11.9948,-2.4044,6.8502,12.0367,-2.3915,6.8023,12.0787,-2.3788,6.7585,12.121,-2.3648,6.7211,12.1572,-2.3478,6.6887,12.1891,-2.3259,6.6664,12.2183,-2.3018,6.6585,12.2423,-2.2811,6.666,12.2626,-2.2653,6.6808,12.2641,-2.2467,6.7021,12.2688,-2.2348,6.7282,12.2735,-2.2203,6.7518,12.2738,-2.2132,6.7781,12.2686,-2.2143,6.8071,12.2657,-2.2112,6.8349,12.2626,-2.2144,6.8672,12.2636,-2.2168,6.8992,12.2663,-2.2123,6.9308,12.2675,-2.2032,6.9627,12.2749,-2.1932,6.9945,12.2842,-2.1925,7.025,12.289,-2.1812,7.054,12.316,-2.1807,7.08,12.3219,-2.1716,7.101,12.3383,-2.1648,7.1246,12.3582,-2.1614,7.1445,12.3683,-2.1597,7.163,12.3913,-2.1608,7.1797,12.4105,-2.1537,7.1973,12.4384,-2.1532,7.2095,12.4544,-2.1432,7.2169,12.4817,-2.1319,7.2229,12.5017,-2.1197,7.2254,12.5251,-2.1128,7.2249,12.5464,-2.1046,7.2182,12.5567,-2.1054,7.2102,12.5661,-2.1098,7.2039,12.5839,-2.1067,7.1957,12.6075,-2.1081,7.1874,12.6283,-2.1049,7.1747,12.6449,-2.1026,7.1669,12.6588,-2.0986,7.162,12.6721,-2.096,7.1638,12.6883,-2.0934,7.1673,12.7004,-2.0868,7.168,12.7079,-2.0758,7.1702,12.7154,-2.0718,7.1784,12.7196,-2.0649,7.185,12.7178,-2.0528,7.187,12.7151,-2.0446,7.1915,12.7121,-2.038,7.1952,12.7083,-2.0337,7.2005,12.707,-2.0249,7.2044,12.7125,-2.0171,7.2056,12.7215,-2.0102,7.2063,12.7212,-2.0036,7.2096,12.7193,-1.9968,7.2145,12.7224,-1.9908,7.2174,12.7212,-1.9869,7.2197,12.7225,-1.988,7.2242,12.7262,-1.9862,7.227,12.7281,-1.9862,7.2283,12.7261,-1.9904,7.2284,12.7226,-1.9868,7.2222,12.7223,-1.9812,7.2196,12.7285,-1.9794,7.2169,12.735,-1.9759,7.2146,12.7373,-1.9757,7.212,12.7377,-1.9744,7.2096,12.7338,-1.9788,7.2077,12.7313,-1.978,7.208,12.7382,-1.9759,7.216,12.7477,-1.971,7.2207,12.7523,-1.966,7.2225,12.7549,-1.9644,7.2265,12.7604,-1.962,7.2337,12.7636,-1.9645,7.2454,12.7656,-1.9615,7.2565,12.7673,-1.9628,7.2674,12.7703,-1.9625,7.2737,12.7736,-1.9613,7.2799,12.78,-1.9584,7.2863,12.7883,-1.9579,7.2938,12.7945,-1.9534,7.3006,12.7973,-1.9469,7.3061,12.7998,-1.947,7.3137,12.8031,-1.9441,7.3207,12.8106,-1.9436,7.3301,12.8203,-1.943,7.3364,12.8289,-1.9388,7.3421,12.8332,-1.9333,7.3459,12.8384,-1.9274,7.3468,12.8501,-1.9216,7.3475,12.8587,-1.9192,7.3482,12.8636,-1.9171,7.3479,12.8637,-1.9198,7.3474,12.8652,-1.9272,7.3471,12.8699,-1.9256,7.3476,12.8765,-1.9165,7.3485,12.8888,-1.9112,7.3489,12.8996,-1.911,7.3485,12.9011,-1.9046,7.3485,12.9031,-1.9009,7.3487,12.9075,-1.8981,7.349,12.9115,-1.8979,7.3492,12.914,-1.8966,7.3492,12.9159,-1.893,7.3496,12.9199,-1.8875,7.3498,12.9211,-1.886,7.3494,12.9188,-1.884,7.3492,12.9187,-1.8782,7.3499,12.9215,-1.8768,7.3501,12.9222,-1.8795,7.3496,12.9192,-1.8816,7.3491,12.9168,-1.8811,7.3492,12.9172,-1.8765,7.3494,12.9165,-1.8788,7.3485,12.9146,-1.8831,7.3473,12.9159,-1.8824,7.3464,12.9202,-1.8784,7.3458,12.9262,-1.8781,7.3444,12.9274,-1.8836,7.3416,12.9251,-1.8858,7.3382,12.9229,-1.8831,7.3363,12.9258,-1.8809,7.335,12.9306,-1.8818,7.3334,12.9312,-1.8818,7.3311,12.9274,-1.882,7.3267,12.9204,-1.8828,7.3201,12.9115,-1.8839,7.3161,12.9076,-1.8888,7.3155,12.9064,-1.8908,7.3128,12.9055,-1.8892,7.3088,12.9025,-1.887,7.3045,12.8998,-1.8881,7.3039,12.899,-1.8909,7.3031,12.8992,-1.8974,7.3022,12.8994,-1.9023,7.3012,12.8974,-1.9042,7.3006,12.8934,-1.9083,7.2997,12.8892,-1.9131,7.2983,12.8845,-1.9128,7.2967,12.8794,-1.9119,7.2926,12.8802,-1.9115,7.291,12.8848,-1.9106,7.2907,12.8877,-1.9169,7.2891,12.8681,-1.9151,7.2913,12.8866,-1.9242,7.2891,12.8772,-1.9314,7.2864,12.8693,-1.9354,7.283,12.8635,-1.9334,7.2812,12.8779,-1.9422,7.2798,12.8839,-1.9497,7.279,12.8797,-1.9566,7.2782,12.8795,-1.9689,7.2767,12.8772,-1.983,7.2748,12.8728,-1.9909,7.2735,12.8714,-1.9986,7.2723,12.8721,-2.009,7.2708,12.8697,-2.0122,7.2704,12.8722,-2.016,7.2711,12.8766,-2.026,7.2713,12.8763,-2.0367,7.2717,12.8752,-2.0442,7.272,12.8716,-2.0527,7.2724,12.8636,-2.0659,7.2727,12.8589,-2.0792,7.2729,12.857,-2.0906,7.2736,12.8564,-2.0992,7.2743,12.8559,-2.1113,7.2747,12.8527,-2.1224,7.2752,12.8512,-2.1353,7.2758,12.8534,-2.1418,7.2767,12.8536,-2.15,7.2775,12.8497,-2.1614,7.2781,12.8462,-2.1708,7.2783,12.8426,-2.1758,7.2784,12.8386,-2.1819,7.279,12.8374,-2.1907,7.2794,12.8387,-2.201,7.2801,12.8398,-2.2041,7.2808,12.8417,-2.209,7.2817,12.8454,-2.216,7.2818,12.846,-2.2239,7.2816,12.8446,-2.2335,7.2814,12.8459,-2.2349,7.2818,12.85,-2.2392,7.2816,12.8532,-2.2465,7.2808,12.8534,-2.2496,7.2793,12.8493,-2.2538,7.2775,12.8442,-2.2549,7.2748,12.844,-2.257,7.2727,12.8481,-2.2586,7.2701,12.8416,-2.259,7.2681,12.8367,-2.2657,7.2671,12.837,-2.2675,7.2658,12.8374,-2.2622,7.2614,12.8339,-2.2588,7.2573,12.837,-2.2576,7.252,12.8363,-2.2558,7.2473,12.8352,-2.2564,7.2387,12.8122,-2.249,7.2293,12.8077,-2.2433,7.221,12.8046,-2.2372,7.2146,12.799,-2.2283,7.2051,12.7912,-2.2233,7.1946,12.784,-2.2182,7.1854,12.7769,-2.219,7.1772,12.7712,-2.2209,7.1671,12.7597,-2.2228,7.1564,12.7414,-2.2259,7.1485,12.7337]);
Group704ZZZ.children[3] = PositionInterpolator708;

let OrientationInterpolator709 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator709.DEF = "Interpolator1_humanoid_root";
OrientationInterpolator709.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator709.keyValue = new X3D.MFRotation([0,1,0,0,-0.0781,0.9764,-0.2015,2.1395,-0.0733,0.9749,-0.21,2.1517,-0.072,0.9756,-0.2072,2.1573,-0.0705,0.9767,-0.2026,2.1593,-0.0661,0.9765,-0.2052,2.1674,-0.0612,0.976,-0.209,2.1771,-0.059,0.9765,-0.2071,2.1814,-0.0596,0.9779,-0.2002,2.1835,-0.0629,0.9799,-0.1891,2.1836,-0.0676,0.9815,-0.1789,2.1831,-0.0714,0.9824,-0.1725,2.1857,-0.0757,0.9833,-0.1657,2.1887,-0.0816,0.9839,-0.1587,2.1888,-0.0848,0.9839,-0.1575,2.1935,-0.0874,0.9844,-0.1527,2.2032,-0.0923,0.9853,-0.1435,2.2102,-0.0956,0.9862,-0.1351,2.217,-0.098,0.987,-0.1274,2.2263,-0.1026,0.9881,-0.1144,2.2357,-0.1097,0.9896,-0.0935,2.2437,-0.1151,0.9905,-0.0752,2.2528,-0.1148,0.991,-0.0689,2.2699,-0.1189,0.9914,-0.0547,2.2701,-0.1199,0.9918,-0.0454,2.277,-0.1202,0.992,-0.038,2.2868,-0.1193,0.9923,-0.0342,2.2943,-0.1166,0.9926,-0.0352,2.2994,-0.1133,0.9929,-0.0356,2.3027,-0.1128,0.9931,-0.0326,2.3071,-0.1099,0.9933,-0.0352,2.3131,-0.1044,0.9936,-0.044,2.3184,-0.1054,0.9935,-0.0429,2.3213,-0.1108,0.9932,-0.0363,2.3232,-0.1165,0.9928,-0.0277,2.3333,-0.1146,0.9929,-0.0326,2.3389,-0.1134,0.9929,-0.0367,2.3403,-0.1123,0.9928,-0.0405,2.3425,-0.1115,0.9928,-0.0426,2.3447,-0.1093,0.9928,-0.0491,2.3478,-0.1039,0.9929,-0.0584,2.3508,-0.0961,0.9928,-0.071,2.3521,-0.0871,0.9925,-0.0854,2.3552,-0.0768,0.9918,-0.1022,2.3609,-0.066,0.9904,-0.1211,2.3639,-0.057,0.9889,-0.1369,2.3691,-0.0492,0.9873,-0.1512,2.3765,-0.0411,0.9857,-0.1636,2.3844,-0.0359,0.9846,-0.1708,2.3898,-0.0336,0.9843,-0.1732,2.3944,-0.0303,0.984,-0.1756,2.3996,-0.0269,0.9832,-0.1803,2.4065,-0.0258,0.9827,-0.1833,2.4088,-0.0269,0.9827,-0.1834,2.4048,-0.0274,0.9827,-0.183,2.4014,-0.0285,0.9833,-0.18,2.3978,-0.0308,0.9838,-0.1764,2.3976,-0.036,0.9855,-0.1659,2.388,-0.0423,0.9867,-0.1569,2.3806,-0.0433,0.9873,-0.153,2.3776,-0.0439,0.9879,-0.1487,2.3744,-0.048,0.9888,-0.1413,2.3708,-0.0477,0.9889,-0.141,2.3688,-0.0435,0.9886,-0.1444,2.3703,-0.0427,0.9882,-0.1469,2.3744,-0.041,0.9878,-0.1505,2.3804,-0.0394,0.9873,-0.1538,2.3841,-0.0387,0.9867,-0.1582,2.388,-0.0357,0.9853,-0.1672,2.3968,-0.0327,0.9839,-0.1755,2.4039,-0.0318,0.9831,-0.1805,2.4086,-0.0293,0.982,-0.1865,2.4163,-0.0256,0.9807,-0.1937,2.4254,-0.0249,0.9803,-0.1959,2.4278,-0.0266,0.9807,-0.194,2.4248,-0.0252,0.9806,-0.1943,2.4251,-0.0274,0.9815,-0.1897,2.4219,-0.0313,0.9828,-0.1823,2.4195,-0.0334,0.9839,-0.1753,2.4127,-0.0341,0.985,-0.1692,2.4106,-0.0365,0.9861,-0.1621,2.4088,-0.041,0.9871,-0.155,2.4033,-0.0437,0.9877,-0.1503,2.3984,-0.0442,0.988,-0.1479,2.3965,-0.045,0.9883,-0.1456,2.3954,-0.0471,0.9888,-0.1413,2.3942,-0.0491,0.9894,-0.1367,2.3947,-0.0515,0.9896,-0.1342,2.3958,-0.0536,0.9905,-0.1264,2.3918,-0.0559,0.9911,-0.1204,2.3918,-0.0564,0.9916,-0.1163,2.3957,-0.0582,0.9922,-0.1103,2.3967,-0.0613,0.9927,-0.1042,2.3972,-0.065,0.9932,-0.0967,2.4002,-0.0671,0.9936,-0.0912,2.4062,-0.0687,0.9938,-0.0873,2.4134,-0.0694,0.9941,-0.0837,2.4212,-0.0709,0.9944,-0.0789,2.4316,-0.0733,0.9946,-0.0731,2.4425,-0.0734,0.9948,-0.0706,2.4553,-0.0738,0.995,-0.0678,2.4697,-0.0738,0.9952,-0.0648,2.4836,-0.0737,0.9953,-0.063,2.4998,-0.0749,0.9953,-0.0606,2.5176,-0.0757,0.9953,-0.0598,2.5382,-0.0756,0.9954,-0.0594,2.5595,-0.0738,0.9955,-0.0602,2.5788,-0.0742,0.9955,-0.0585,2.5954,-0.0744,0.9955,-0.0581,2.6149,-0.0751,0.9955,-0.0575,2.6372,-0.0764,0.9954,-0.0579,2.6573,-0.0784,0.9952,-0.0579,2.6751,-0.079,0.9952,-0.0579,2.6944,-0.0775,0.9952,-0.0596,2.7144,-0.0757,0.9952,-0.0613,2.7362,-0.0775,0.9951,-0.062,2.7569,-0.0778,0.9949,-0.0642,2.7751,-0.0769,0.9948,-0.0662,2.7957,-0.0778,0.9947,-0.0677,2.816,-0.0793,0.9945,-0.069,2.8308,-0.079,0.9944,-0.0702,2.8462,-0.0817,0.9941,-0.0709,2.8609,-0.0838,0.9938,-0.0726,2.878,-0.0837,0.9936,-0.0757,2.894,-0.0844,0.9933,-0.0784,2.9066,-0.0842,0.9931,-0.0813,2.9198,-0.0827,0.993,-0.0849,2.9331,-0.0812,0.9927,-0.0889,2.9434,-0.0796,0.992,-0.0977,2.9625,-0.0777,0.9922,-0.0979,2.9644,-0.0774,0.9915,-0.1048,2.9832,-0.0775,0.9908,-0.1114,2.997,-0.0751,0.9904,-0.1164,3.0094,-0.0722,0.9901,-0.1206,3.0259,-0.0686,0.9898,-0.1245,3.0427,-0.0656,0.9895,-0.129,3.0566,-0.0613,0.989,-0.1347,3.0739,-0.0579,0.9887,-0.1386,3.0908,-0.056,0.9885,-0.1402,3.1007,-0.0531,0.9879,-0.1455,3.1235,-0.0487,0.9883,-0.1444,3.1329,0.0458,-0.9884,0.1447,3.1353,0.0433,-0.9885,0.145,3.1177,0.0411,-0.9886,0.1447,3.0981,0.0393,-0.9885,0.1458,3.0796,0.0372,-0.9885,0.1467,3.0597,0.0365,-0.9883,0.1481,3.0396,0.0347,-0.988,0.1507,3.0182,0.0325,-0.9874,0.1546,2.9959,0.0288,-0.9871,0.1574,2.9681,0.0236,-0.987,0.1589,2.9316,0.0198,-0.9868,0.1608,2.8951,0.0159,-0.9865,0.163,2.8601,0.0133,-0.9859,0.1666,2.8241,0.0118,-0.9851,0.1717,2.786,0.0087,-0.9841,0.1775,2.7402,0.0048,-0.983,0.1836,2.6876,0.0022,-0.9817,0.1904,2.6337,-0.0014,-0.9801,0.1983,2.5786,-0.0071,-0.9778,0.2096,2.5265,-0.012,-0.9759,0.2178,2.4639,-0.0179,-0.9734,0.2284,2.4102,-0.0224,-0.9699,0.2425,2.3572,-0.0227,-0.9672,0.2529,2.2923,-0.0323,-0.9615,0.2728,2.2441,-0.0384,-0.9535,0.2988,2.1973,-0.0439,-0.9428,0.3305,2.1522,-0.0504,-0.928,0.369,2.1178,-0.0571,-0.9057,0.4201,2.1069,-0.0606,-0.8673,0.494,2.1562,-0.0676,-0.8147,0.5759,2.2787,-0.0632,-0.7266,0.6841,2.7614,0.0575,0.7021,-0.7097,2.6139,0.0922,0.801,-0.5915,1.9009,0.112,0.8783,-0.4648,1.5732,0.1354,0.9217,-0.3636,1.3805,0.1696,0.9505,-0.2603,1.2326,0.1828,0.9483,-0.2593,1.1283,0.2067,0.9481,-0.2417,1.0266,0.2431,0.9472,-0.2091,0.9268,0.2838,0.9399,-0.1898,0.8282,0.3267,0.9249,-0.1945,0.733,0.3779,0.8989,-0.2218,0.6441,0.4411,0.8588,-0.2605,0.56,0.5298,0.7862,-0.3182,0.4764,0.6433,0.6583,-0.391,0.4002,0.7297,0.4946,-0.4722,0.3577,0.8018,0.2225,-0.5547,0.3342,0.7994,-0.056,-0.5982,0.3406,0.7395,-0.3066,-0.5993,0.3742,0.6588,-0.4839,-0.576,0.4267,0.5796,-0.601,-0.5503,0.4933,0.5125,-0.6746,-0.5313,0.5695,0.463,-0.724,-0.5114,0.6439,0.4191,-0.7561,-0.5026,0.7269,0.3804,-0.7771,-0.5015,0.8191,0.3499,-0.7956,-0.4946,0.8938,0.3187,-0.8098,-0.4926,0.9902,0.2976,-0.8046,-0.5139,1.1091,0.2736,-0.8058,-0.5253,1.2215,0.2531,-0.7991,-0.5453,1.3495,0.2296,-0.7962,-0.5598,1.4767,0.2059,-0.7877,-0.5807,1.6194,0.1903,-0.7624,-0.6185,1.8186,0.1769,-0.7304,-0.6597,2.0928,0.164,-0.7048,-0.6902,2.4522,0.1554,-0.6995,-0.6975,2.8927,-0.1529,0.7284,0.6679,2.9301,-0.1562,0.7876,0.596,2.5477,-0.1638,0.8435,0.5116,2.3596,-0.1703,0.8847,0.434,2.2863,-0.1688,0.9219,0.3486,2.2396,-0.1635,0.9484,0.2718,2.2372,-0.1557,0.966,0.2063,2.2636,-0.1486,0.9765,0.1559,2.3125,-0.1435,0.9824,0.1197,2.3789,-0.1384,0.9864,0.0888,2.4549,-0.1354,0.9888,0.0631,2.5386,-0.1316,0.9905,0.0391,2.6232,-0.1252,0.992,0.017,2.7047,-0.1193,0.9929,-0.0016,2.7879,-0.1169,0.993,-0.0172,2.8749,-0.1144,0.9929,-0.0313,2.9613,-0.1101,0.9929,-0.0448,3.0439,-0.1054,0.9927,-0.0584,3.1282,0.1006,-0.9924,0.0714,3.0659,0.095,-0.992,0.0828,2.9767,0.0906,-0.9914,0.0946,2.8883,0.0868,-0.9904,0.1074,2.8005,0.0815,-0.9893,0.1209,2.7155,0.0758,-0.9879,0.1355,2.6294,0.0697,-0.9858,0.1527,2.5408,0.0608,-0.9836,0.1697,2.4569,0.0461,-0.9826,0.1799,2.3638,0.0353,-0.9804,0.1937,2.2835,0.0229,-0.9787,0.2042,2.1985,0.0076,-0.9784,0.2064,2.1036,-0.0029,-0.975,0.2222,2.0205,-0.0068,-0.9632,0.2686,1.9629,-0.0151,-0.9452,0.326,1.9206,-0.0269,-0.9051,0.4243,1.9408,-0.0222,-0.7424,0.6695,2.6152,0.0392,0.8116,-0.5828,2.0195,0.0281,0.8738,-0.4855,1.6998,0.0851,0.996,-0.0284,1.3609,0.1048,0.9939,0.0353,1.2739,0.1167,0.9928,0.0274,1.1858,0.131,0.991,0.0275,1.0993,0.1549,0.9863,0.0567,1.0171,0.1834,0.9798,0.0796,0.9352,0.2174,0.9715,0.0947,0.8531,0.2567,0.9601,0.1108,0.7721,0.3014,0.9458,0.1213,0.6932,0.3589,0.9227,0.141,0.6219,0.4333,0.8846,0.1726,0.5561,0.5251,0.8246,0.2106,0.4936,0.6229,0.7407,0.2516,0.4353,0.7188,0.6315,0.2909,0.3959,0.8306,0.4586,0.3159,0.3751,0.8893,0.3099,0.3362,0.3609,0.9294,0.1355,0.3433,0.3551,0.9359,-0.0337,0.3507,0.3645,0.9179,-0.1509,0.367,0.381,0.8952,-0.248,0.3702,0.3985,0.8666,-0.3304,0.374,0.4152,0.8353,-0.405,0.3718,0.4279,0.807,-0.4707,0.3566,0.4408,0.7814,-0.5286,0.3317,0.4545,0.7504,-0.5845,0.3086,0.471,0.7366,-0.621,0.2681,0.4825,0.7202,-0.6504,0.2415,0.4968,0.7021,-0.6795,0.2129,0.511,0.6799,-0.7083,0.1902,0.5247,0.6485,-0.7397,0.1795,0.5373,0.6143,-0.7768,0.1389,0.5615,0.5875,-0.8032,0.0989,0.5835,0.5623,-0.8242,0.0673,0.6028,0.5357,-0.8435,0.0391,0.6231,0.5081,-0.8612,0.011,0.6492,0.4786,-0.8779,-0.0145,0.6765,0.4461,-0.8943,-0.0353,0.7007,0.4133,-0.9092,-0.0497,0.7263,0.3814,-0.922,-0.0665,0.7562,0.3531,-0.9317,-0.0853,0.7847,0.3282,-0.9386,-0.106,0.8142,0.3064,-0.9432,-0.1284,0.8468,0.2893,-0.944,-0.1589,0.8816,0.276,-0.9438,-0.1816,0.9165,0.2675,-0.9403,-0.2104,0.959,0.2585,-0.9382,-0.23,1.0034,0.256,-0.9289,-0.2675,1.0592,0.2533,-0.9189,-0.3025,1.1182,0.2501,-0.908,-0.3363,1.1793,0.2494,-0.8945,-0.371,1.2456,0.249,-0.8756,-0.4139,1.327,0.2426,-0.8639,-0.4414,1.4044,0.2328,-0.8547,-0.4639,1.4834,0.2245,-0.832,-0.5074,1.6039,0.2152,-0.798,-0.563,1.7764,0.2017,-0.7622,-0.6151,1.9936,0.182,-0.7359,-0.6522,2.2316,0.1627,-0.707,-0.6883,2.5992,0.1524,-0.7,-0.6977,3.1191,-0.1501,0.7424,0.6529,2.6364,-0.1519,0.8222,0.5486,2.2266,-0.1497,0.9033,0.402,1.982,-0.1391,0.9571,0.254,1.8778,-0.1215,0.9852,0.1209,1.8521,-0.1094,0.9934,0.0356,1.868,-0.1072,0.9942,-0.0008,1.8985,-0.1093,0.9939,-0.0178,1.9329,-0.1141,0.9934,-0.0151,1.9549,-0.1096,0.9927,-0.0507,1.9922,-0.1029,0.99,-0.0969,2.0215,-0.1008,0.9891,-0.107,2.056,-0.0953,0.9869,-0.1298,2.0885,-0.1012,0.9886,-0.1115,2.1081,-0.1016,0.9893,-0.1049,2.1325,-0.1024,0.9902,-0.0945,2.1556,-0.1088,0.9901,-0.0886,2.1695,-0.113,0.9901,-0.0832,2.188,-0.114,0.99,-0.0831,2.2115,-0.1162,0.9896,-0.085,2.2327,-0.1202,0.9895,-0.08,2.2537,-0.1252,0.9894,-0.0735,2.2779,-0.1289,0.989,-0.0722,2.3001,-0.1296,0.9886,-0.0764,2.3213,-0.1313,0.9882,-0.0789,2.3399,-0.1304,0.9879,-0.0839,2.3588,-0.1309,0.9874,-0.0892,2.3804,-0.1318,0.9865,-0.0968,2.4034,-0.1301,0.9862,-0.1019,2.4194,-0.128,0.9855,-0.1113,2.439,-0.1287,0.9845,-0.1191,2.46,-0.1309,0.9838,-0.1224,2.4791,-0.1335,0.9831,-0.1249,2.4976,-0.1293,0.9827,-0.1329,2.5182,-0.1245,0.9822,-0.1409,2.539,-0.1255,0.9818,-0.1427,2.5555,-0.1286,0.9809,-0.1459,2.5772,-0.131,0.9805,-0.1467,2.591,-0.1335,0.9799,-0.1482,2.6071,-0.136,0.9794,-0.1495,2.6238,-0.1365,0.9791,-0.151,2.6391,-0.1355,0.9788,-0.1533,2.6558,-0.136,0.9786,-0.1543,2.6708,-0.1353,0.9785,-0.1557,2.6845,-0.1344,0.9783,-0.1574,2.6946,-0.1366,0.9779,-0.1584,2.6995,-0.1366,0.9776,-0.16,2.7057,-0.1336,0.9776,-0.1626,2.715,-0.1336,0.9773,-0.1645,2.722,-0.1351,0.977,-0.165,2.7291,-0.1433,0.9733,-0.1792,2.7607,-0.1415,0.9732,-0.1811,2.7682,-0.1404,0.9733,-0.1816,2.7718,-0.141,0.9721,-0.1872,2.7824,-0.1405,0.9711,-0.1931,2.7917,-0.1401,0.9699,-0.1991,2.7964,-0.1393,0.9692,-0.2032,2.7991,-0.1398,0.9688,-0.2045,2.8002,-0.1384,0.9678,-0.2104,2.8058,-0.1368,0.9671,-0.2146,2.8107,-0.1356,0.9665,-0.2181,2.8132,-0.1359,0.9653,-0.2229,2.8146,-0.1339,0.9644,-0.228,2.82,-0.129,0.9646,-0.2299,2.8213,-0.1264,0.9646,-0.2314,2.8227,-0.1242,0.9642,-0.2345,2.8243,-0.1228,0.9634,-0.2383,2.8232,-0.1197,0.9631,-0.241,2.8227,-0.1165,0.9627,-0.2444,2.8251,-0.1132,0.9623,-0.2473,2.8256,-0.1096,0.9621,-0.2499,2.8274,-0.1062,0.9619,-0.2518,2.8277,-0.1046,0.962,-0.2522,2.8226,-0.1012,0.9623,-0.2523,2.8226,-0.0994,0.9623,-0.2534,2.8234,-0.0948,0.9624,-0.2546,2.8274,-0.0893,0.9629,-0.2548,2.8305,-0.0837,0.9635,-0.2544,2.8337,-0.0775,0.964,-0.2544,2.841,-0.0727,0.9643,-0.2546,2.8478,-0.0693,0.9644,-0.255,2.8522,-0.0672,0.9648,-0.2544,2.8555,-0.0684,0.9651,-0.2528,2.8557,-0.0712,0.9653,-0.2514,2.8552,-0.0743,0.9651,-0.2511,2.8545,-0.0762,0.9647,-0.2521,2.8548,-0.0789,0.9651,-0.2497,2.8513,-0.084,0.965,-0.2484,2.8473,-0.089,0.9649,-0.2469,2.8418,-0.0958,0.9653,-0.2429,2.8307,-0.0997,0.9661,-0.2382,2.8243,-0.1003,0.967,-0.2341,2.8201,-0.103,0.9679,-0.2294,2.8098,-0.1022,0.9685,-0.2271,2.8046,-0.1,0.969,-0.2259,2.8039,-0.0987,0.9696,-0.2238,2.801,-0.0987,0.97,-0.2223,2.7961,-0.1,0.97,-0.2217,2.7921,-0.098,0.9701,-0.2221,2.7918,-0.0995,0.9689,-0.2265,2.7949,-0.0958,0.969,-0.2277,2.7988,-0.0961,0.9686,-0.2293,2.7998,-0.0962,0.9678,-0.2324,2.8041,-0.095,0.9676,-0.2339,2.8105,-0.0935,0.9669,-0.2374,2.822,-0.0914,0.9665,-0.24,2.8316,-0.0913,0.9656,-0.2434,2.8456,-0.0887,0.9656,-0.2443,2.8587,-0.0895,0.9649,-0.2467,2.8724,-0.0892,0.9649,-0.2469,2.884,-0.0878,0.965,-0.2472,2.8974,-0.087,0.9647,-0.2487,2.909,-0.0882,0.9646,-0.2483,2.9144,-0.0857,0.965,-0.2478,2.9223,-0.0818,0.965,-0.249,2.9325,-0.0798,0.9647,-0.2509,2.942,-0.0759,0.9647,-0.2522,2.9525,-0.0741,0.9646,-0.2529,2.9581,-0.0724,0.9646,-0.2536,2.9628,-0.0701,0.9645,-0.2545,2.9664,-0.0665,0.9642,-0.2567,2.9715,-0.0646,0.9641,-0.2576,2.9732,-0.0644,0.9642,-0.2574,2.9726,-0.0646,0.9642,-0.2572,2.9716,-0.0626,0.9644,-0.257,2.9742,-0.0641,0.9646,-0.256,2.9724,-0.0684,0.9647,-0.2544,2.966,-0.0714,0.9649,-0.2527,2.9596,-0.0739,0.9653,-0.2504,2.9517,-0.0749,0.9656,-0.249,2.9468,-0.0771,0.9655,-0.2486,2.9434,-0.0788,0.9654,-0.2488,2.941,-0.08,0.9657,-0.2472,2.9373,-0.08,0.9661,-0.2456,2.9336,-0.0802,0.9661,-0.2453,2.9306,-0.0804,0.9664,-0.244,2.9257,-0.0795,0.9665,-0.2439,2.9231,-0.0767,0.9667,-0.2442,2.9236,-0.075,0.9668,-0.2441,2.9223,-0.0735,0.967,-0.2438,2.9207,-0.0713,0.9673,-0.2434,2.9184,-0.0722,0.9673,-0.2431,2.9138,-0.0709,0.9674,-0.2432,2.9169,-0.0678,0.9677,-0.2429,2.9206,-0.0668,0.9678,-0.2425,2.9198,-0.0655,0.9679,-0.2425,2.9196,-0.0658,0.9679,-0.2426,2.9167,-0.0653,0.9676,-0.2439,2.9146,-0.0651,0.9673,-0.245,2.914,-0.0623,0.9673,-0.2461,2.9182,-0.0614,0.9671,-0.2468,2.9185,-0.0627,0.9669,-0.2473,2.9146,-0.0631,0.9663,-0.2494,2.9102,-0.0635,0.966,-0.2507,2.9046,-0.0616,0.9658,-0.2519,2.9027,-0.0606,0.9657,-0.2526,2.9019,-0.0587,0.9656,-0.2535,2.9025,-0.0587,0.9654,-0.2541,2.8987,-0.0594,0.9651,-0.2551,2.8938,-0.0605,0.9647,-0.2563,2.889,-0.0602,0.9646,-0.2567,2.8862,-0.0604,0.9644,-0.2573,2.8841,-0.0614,0.9642,-0.258,2.8813,-0.0613,0.9641,-0.2584,2.8786,-0.0623,0.9639,-0.259,2.8748,-0.0619,0.9635,-0.2604,2.875,-0.0611,0.9633,-0.2614,2.876,-0.0613,0.9632,-0.2616,2.8752,-0.062,0.9631,-0.2619,2.8741,-0.0628,0.9628,-0.2629,2.873,-0.0634,0.9626,-0.2633,2.874,-0.0617,0.9625,-0.2642,2.8788,-0.0602,0.9628,-0.2634,2.8814,-0.0578,0.9632,-0.2627,2.8839,-0.0541,0.9633,-0.2628,2.8892,-0.0541,0.9634,-0.2627,2.8909,-0.0554,0.9631,-0.2633,2.8929,-0.0546,0.9629,-0.2642,2.8973,-0.0532,0.9633,-0.2631,2.8999,-0.0544,0.9636,-0.2616,2.8985,-0.0553,0.9638,-0.2609,2.8975,-0.0564,0.9639,-0.2601,2.8941,-0.0563,0.9641,-0.2594,2.8942,-0.0565,0.9642,-0.259,2.8959,-0.0575,0.9643,-0.2586,2.8971,-0.0593,0.9643,-0.258,2.8966,-0.0601,0.9647,-0.2565,2.8952,-0.0608,0.9648,-0.2557,2.8942,-0.0628,0.9647,-0.2559,2.8938,-0.0632,0.9647,-0.2555,2.8943,-0.0625,0.9651,-0.2541,2.8938,-0.062,0.9654,-0.2532,2.8929,-0.0621,0.9654,-0.2534,2.8932,-0.064,0.9654,-0.2529,2.8912,-0.0633,0.9657,-0.2518,2.8914,-0.0617,0.9658,-0.2517,2.8937,-0.0619,0.9657,-0.2523,2.8942,-0.0632,0.9652,-0.2536,2.8936,-0.0633,0.9651,-0.2543,2.8937,-0.0614,0.9653,-0.2538,2.8951,-0.0608,0.9656,-0.2529,2.8951,-0.062,0.9658,-0.2518,2.8941,-0.0625,0.9658,-0.2516,2.8963,-0.0618,0.9658,-0.2519,2.8999,-0.0618,0.966,-0.2512,2.9011,-0.0622,0.9664,-0.2496,2.8996,-0.0629,0.967,-0.2469,2.8958,-0.0635,0.9673,-0.2457,2.8932,-0.0624,0.9673,-0.2457,2.8941,-0.0623,0.9674,-0.2457,2.8939,-0.0636,0.9675,-0.2447,2.8916,-0.0649,0.9676,-0.2439,2.8893,-0.0648,0.9676,-0.2439,2.8881,-0.0638,0.9676,-0.2444,2.8888,-0.0615,0.9675,-0.2452,2.8912,-0.0602,0.9675,-0.2454,2.8923,-0.0606,0.9675,-0.2455,2.8909,-0.0607,0.9674,-0.246,2.8906,-0.0606,0.9673,-0.2463,2.8905,-0.0612,0.9674,-0.2458,2.8912,-0.0619,0.9672,-0.2465,2.8916,-0.0631,0.9666,-0.2483,2.8935,-0.0648,0.9662,-0.2495,2.8936,-0.064,0.9672,-0.2459,2.8856,-0.0668,0.966,-0.2498,2.8841,-0.0645,0.9665,-0.2484,2.8828,-0.0639,0.9668,-0.2476,2.8801,-0.0641,0.9669,-0.2468,2.8761,-0.0662,0.9661,-0.2495,2.8749,-0.0646,0.9657,-0.2514,2.8763,-0.0645,0.9657,-0.2514,2.8727,-0.0649,0.9656,-0.2519,2.8681,-0.0633,0.9655,-0.2527,2.8662,-0.0612,0.9654,-0.2534,2.866,-0.0604,0.9652,-0.2546,2.8652,-0.0595,0.9649,-0.2559,2.8631,-0.058,0.9649,-0.2563,2.8598,-0.0591,0.9646,-0.2572,2.8539,-0.0594,0.9639,-0.2594,2.8517,-0.0584,0.9636,-0.2608,2.852,-0.0571,0.9633,-0.2622,2.8519,-0.0576,0.9632,-0.2627,2.8478,-0.0582,0.9632,-0.2625,2.8423,-0.0569,0.9631,-0.263,2.8388,-0.0549,0.963,-0.2639,2.8383,-0.0534,0.9627,-0.2653,2.8388,-0.0527,0.9624,-0.2666,2.8389,-0.0517,0.9622,-0.2673,2.8381,-0.0516,0.9621,-0.2677,2.8338,-0.0503,0.9619,-0.2687,2.8319,-0.0509,0.9616,-0.2697,2.828,-0.0513,0.9614,-0.2703,2.8248,-0.0503,0.9613,-0.2707,2.8251,-0.0494,0.9614,-0.2708,2.8232,-0.0499,0.9615,-0.2704,2.8196,-0.0491,0.9614,-0.2708,2.8203,-0.0478,0.9612,-0.2718,2.8224,-0.0467,0.961,-0.2727,2.8226,-0.048,0.9607,-0.2735,2.8189,-0.0486,0.9602,-0.2751,2.8172,-0.0489,0.9601,-0.2754,2.8172,-0.049,0.9602,-0.275,2.8172,-0.0474,0.9601,-0.2758,2.8206,-0.0486,0.9595,-0.2775,2.8192,-0.0479,0.9591,-0.2791,2.82,-0.0465,0.959,-0.2797,2.8228,-0.0476,0.9591,-0.2789,2.8212,-0.0472,0.9592,-0.2786,2.8217,-0.0474,0.9591,-0.2792,2.8238,-0.0468,0.9588,-0.2803,2.8245,-0.0461,0.9589,-0.2799,2.8279,-0.0459,0.9589,-0.2799,2.8288,-0.0434,0.9584,-0.282,2.8321,-0.0431,0.958,-0.2836,2.8336,-0.0452,0.9579,-0.2834,2.8344,-0.0465,0.9576,-0.2844,2.8342,-0.0469,0.9574,-0.285,2.8358,-0.0475,0.957,-0.2863,2.8356,-0.048,0.9577,-0.2839,2.8319,-0.0508,0.9575,-0.2841,2.8295,-0.0529,0.9572,-0.2844,2.8269,-0.055,0.957,-0.2849,2.825,-0.0583,0.9566,-0.2855,2.821,-0.06,0.9564,-0.2857,2.8188,-0.062,0.9563,-0.2857,2.8157,-0.061,0.9561,-0.2866,2.8184,-0.0586,0.9563,-0.2864,2.8235,-0.0567,0.9568,-0.2851,2.8244,-0.0555,0.9565,-0.2865,2.8242]);
Group704ZZZ.children[4] = OrientationInterpolator709;

let OrientationInterpolator710 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator710.DEF = "Interpolator2_abdomen";
OrientationInterpolator710.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator710.keyValue = new X3D.MFRotation([-0.0067,-0.0286,-0.9996,0.0033,-0.8793,0.0634,-0.4719,0.0913,-0.8872,0.0821,-0.4541,0.1861,-0.8882,0.1004,-0.4484,0.2702,-0.8864,0.1164,-0.4481,0.3282,-0.8797,0.1302,-0.4573,0.3497,-0.869,0.1432,-0.4737,0.3454,-0.8588,0.1555,-0.4882,0.3308,-0.8568,0.1655,-0.4883,0.3208,-0.8677,0.17,-0.4671,0.3176,-0.8859,0.1706,-0.4313,0.3141,-0.9064,0.1703,-0.3867,0.3113,-0.9243,0.1727,-0.3403,0.3096,-0.9394,0.1775,-0.2934,0.3103,-0.9526,0.183,-0.2432,0.3131,-0.9629,0.1904,-0.1913,0.3156,-0.9698,0.2012,-0.1379,0.3157,-0.9724,0.2191,-0.0803,0.3128,-0.9699,0.2427,-0.0176,0.3087,-0.9626,0.2667,0.0479,0.304,-0.9516,0.2856,0.1137,0.2988,-0.9367,0.2979,0.1841,0.2922,-0.9156,0.3065,0.2604,0.2847,-0.8892,0.3128,0.3338,0.278,-0.862,0.3183,0.3944,0.2729,-0.8381,0.324,0.4388,0.2682,-0.8174,0.3294,0.4726,0.2629,-0.8001,0.3343,0.4981,0.2581,-0.7864,0.3385,0.5167,0.2549,-0.7791,0.343,0.5248,0.2535,-0.7786,0.3476,0.5225,0.2529,-0.7807,0.3503,0.5175,0.2533,-0.7813,0.3489,0.5175,0.2549,-0.7781,0.3417,0.5271,0.2589,-0.7737,0.3304,0.5406,0.2649,-0.7712,0.3183,0.5514,0.2704,-0.7737,0.3081,0.5536,0.2731,-0.7806,0.2994,0.5486,0.2731,-0.7908,0.2907,0.5387,0.2713,-0.8065,0.2832,0.5189,0.2671,-0.8304,0.2775,0.4832,0.2596,-0.8654,0.2735,0.4199,0.2479,-0.9069,0.2685,0.3248,0.2344,-0.9432,0.26,0.2068,0.2237,-0.9648,0.2481,0.0874,0.2185,-0.9717,0.2349,-0.0251,0.2186,-0.9662,0.2209,-0.1327,0.2227,-0.9523,0.2078,-0.2236,0.2293,-0.9361,0.1968,-0.2914,0.2364,-0.9216,0.1894,-0.3387,0.2423,-0.91,0.185,-0.3712,0.2473,-0.9029,0.1824,-0.3892,0.2515,-0.9018,0.1804,-0.3928,0.2555,-0.9086,0.1765,-0.3786,0.2594,-0.9212,0.172,-0.3489,0.2631,-0.9348,0.1703,-0.3115,0.2665,-0.9457,0.1753,-0.2738,0.269,-0.9541,0.1911,-0.2306,0.2697,-0.9602,0.2143,-0.1791,0.2697,-0.9624,0.2376,-0.1318,0.2708,-0.9618,0.2538,-0.1025,0.274,-0.9605,0.2613,-0.0954,0.2788,-0.9589,0.2644,-0.1029,0.2843,-0.9567,0.2652,-0.1199,0.291,-0.9535,0.2659,-0.1417,0.2989,-0.9491,0.266,-0.1688,0.3087,-0.9429,0.2651,-0.2014,0.3203,-0.9353,0.2643,-0.2351,0.3331,-0.9268,0.2648,-0.2662,0.3461,-0.9167,0.2661,-0.2979,0.3603,-0.9052,0.2678,-0.3301,0.3759,-0.8942,0.2707,-0.3566,0.3903,-0.8858,0.2757,-0.3733,0.4006,-0.8808,0.2829,-0.3797,0.4059,-0.878,0.2919,-0.3794,0.4075,-0.8765,0.3025,-0.3746,0.4062,-0.8755,0.3145,-0.367,0.4025,-0.875,0.3287,-0.3554,0.3952,-0.8752,0.3455,-0.3386,0.3845,-0.8751,0.3645,-0.3185,0.3737,-0.8739,0.3841,-0.2978,0.3655,-0.872,0.4034,-0.2773,0.361,-0.8694,0.4227,-0.2557,0.3585,-0.8659,0.4422,-0.2341,0.3573,-0.8609,0.462,-0.213,0.3564,-0.8544,0.4823,-0.1935,0.356,-0.8466,0.5026,-0.175,0.3566,-0.838,0.5228,-0.1564,0.3573,-0.8288,0.5428,-0.1363,0.3576,-0.8192,0.5621,-0.114,0.3572,-0.8089,0.581,-0.0904,0.3565,-0.7973,0.6,-0.0658,0.3562,-0.7838,0.6197,-0.0409,0.3568,-0.769,0.6391,-0.0154,0.3583,-0.753,0.658,0.0106,0.3605,-0.7346,0.6776,0.0356,0.3639,-0.7129,0.6989,0.0578,0.3693,-0.6854,0.7243,0.0749,0.3786,-0.6543,0.7511,0.0881,0.3912,-0.6253,0.7738,0.1008,0.4031,-0.6028,0.7894,0.1166,0.4101,-0.5903,0.7947,0.1414,0.407,-0.5832,0.7935,0.174,0.3974,-0.5737,0.7931,0.2045,0.3898,-0.5558,0.8017,0.2199,0.3926,-0.5263,0.8238,0.2104,0.4118,-0.492,0.8502,0.1873,0.442,-0.4613,0.8716,0.1655,0.4743,-0.4407,0.8842,0.155,0.4989,-0.4333,0.8873,0.158,0.5108,-0.4335,0.8854,0.1677,0.5158,-0.434,0.883,0.1787,0.5194,-0.428,0.8846,0.1851,0.5274,-0.4125,0.8921,0.1846,0.5424,-0.3923,0.9019,0.1807,0.5614,-0.3725,0.9111,0.1764,0.5807,-0.3573,0.9176,0.1743,0.5966,-0.3475,0.9213,0.1746,0.6074,-0.3406,0.9236,0.1761,0.6153,-0.3349,0.9251,0.179,0.622,-0.3291,0.9263,0.1836,0.6292,-0.3226,0.9269,0.1918,0.6379,-0.3162,0.9268,0.2026,0.647,-0.3109,0.9265,0.2121,0.6553,-0.3077,0.9265,0.2167,0.6613,-0.3077,0.9269,0.2149,0.6638,-0.3101,0.9275,0.209,0.6637,-0.3125,0.9283,0.2014,0.663,-0.3128,0.9296,0.195,0.6637,-0.3106,0.9312,0.1909,0.6665,-0.307,0.9331,0.1875,0.6704,-0.3023,0.9354,0.1835,0.6743,-0.2964,0.9384,0.1777,0.6771,-0.2889,0.9424,0.1687,0.6797,-0.2799,0.947,0.1575,0.6824,-0.2705,0.9515,0.1464,0.6832,-0.2618,0.9552,0.138,0.6802,-0.2546,0.9579,0.1329,0.6716,-0.2481,0.96,0.1298,0.6588,-0.2406,0.9621,0.1281,0.6445,-0.2306,0.9647,0.1272,0.6313,-0.2152,0.9682,0.1271,0.62,-0.1958,0.9722,0.1283,0.6093,-0.1772,0.9755,0.1305,0.5987,-0.1649,0.9772,0.1337,0.5871,-0.162,0.977,0.1388,0.5739,-0.1658,0.9753,0.1457,0.5596,-0.1731,0.9731,0.1524,0.545,-0.1807,0.971,0.1565,0.5309,-0.1876,0.97,0.1545,0.517,-0.196,0.9694,0.1479,0.5031,-0.2067,0.9679,0.1428,0.49,-0.2205,0.9644,0.1459,0.4783,-0.238,0.9578,0.1615,0.4682,-0.2584,0.948,0.1857,0.4597,-0.28,0.9359,0.2137,0.4528,-0.3009,0.9229,0.2404,0.4472,-0.3207,0.9095,0.2645,0.444,-0.3398,0.8953,0.2882,0.443,-0.3586,0.8799,0.3116,0.4416,-0.3779,0.863,0.3352,0.4372,-0.3985,0.8428,0.3617,0.429,-0.4202,0.819,0.3907,0.4185,-0.4421,0.7935,0.4181,0.4068,-0.464,0.7693,0.4392,0.3944,-0.4873,0.7493,0.4484,0.3797,-0.5132,0.7317,0.4487,0.3628,-0.5399,0.7119,0.4491,0.3469,-0.5635,0.6859,0.4603,0.3357,-0.5779,0.6493,0.4945,0.3324,-0.5833,0.6059,0.541,0.335,-0.587,0.5646,0.5803,0.338,-0.599,0.5331,0.5975,0.335,-0.6293,0.5148,0.5822,0.3218,-0.6743,0.5038,0.5399,0.303,-0.7228,0.4937,0.4837,0.2849,-0.7603,0.4805,0.437,0.2715,-0.7819,0.4646,0.4157,0.2631,-0.7941,0.4496,0.4089,0.2567,-0.8006,0.4389,0.4079,0.251,-0.8052,0.4358,0.4021,0.2451,-0.807,0.444,0.3895,0.2381,-0.8038,0.4619,0.3748,0.2309,-0.7982,0.4845,0.358,0.2244,-0.793,0.5057,0.3396,0.2196,-0.789,0.5262,0.3173,0.2171,-0.7841,0.5475,0.2923,0.2164,-0.7793,0.5655,0.2699,0.2165,-0.776,0.5767,0.2554,0.2164,-0.7741,0.5809,0.2518,0.2163,-0.7735,0.5798,0.2561,0.2163,-0.7754,0.5737,0.2639,0.216,-0.781,0.5626,0.271,0.2147,-0.7926,0.5426,0.2781,0.2111,-0.8088,0.5134,0.2868,0.2061,-0.8253,0.482,0.2943,0.2022,-0.8379,0.4578,0.2972,0.2016,-0.845,0.4453,0.2961,0.2058,-0.849,0.4401,0.2925,0.2133,-0.8521,0.4391,0.2849,0.2212,-0.8562,0.4395,0.2717,0.2267,-0.8621,0.4411,0.2494,0.2283,-0.8684,0.4448,0.2193,0.228,-0.8733,0.4498,0.187,0.2278,-0.8758,0.4557,0.1592,0.2295,-0.8762,0.4621,0.1369,0.2335,-0.8753,0.4692,0.1174,0.2389,-0.8726,0.4776,0.1024,0.245,-0.8679,0.4878,0.0932,0.2512,-0.8608,0.4999,0.0952,0.2576,-0.8519,0.5131,0.105,0.2642,-0.8423,0.5274,0.1113,0.2713,-0.8335,0.5426,0.1041,0.2784,-0.8231,0.5627,0.0768,0.2864,-0.81,0.5852,0.0382,0.2954,-0.7984,0.6022,0.0001,0.3044,-0.7935,0.6079,-0.0272,0.3115,-0.8012,0.5969,-0.0426,0.3143,-0.817,0.5742,-0.0526,0.3143,-0.8321,0.5515,-0.059,0.3156,-0.8382,0.5417,-0.0629,0.3217,-0.8326,0.5502,-0.0641,0.3349,-0.8208,0.5678,-0.0619,0.3529,-0.8074,0.5873,-0.0571,0.3719,-0.7958,0.6035,-0.0506,0.388,-0.7853,0.6176,-0.0424,0.4003,-0.7744,0.6319,-0.0325,0.4109,-0.7646,0.6441,-0.0219,0.4203,-0.7579,0.6523,-0.0116,0.4287,-0.7548,0.656,0.0026,0.4356,-0.7541,0.6565,0.0196,0.4411,-0.7547,0.6553,0.0311,0.4461,-0.7561,0.6538,0.0291,0.4514,-0.7592,0.6508,0.005,0.4576,-0.7628,0.6458,-0.0335,0.4647,-0.7641,0.6411,-0.0711,0.4723,-0.7625,0.6402,-0.0935,0.4791,-0.7567,0.6467,-0.0959,0.4849,-0.7482,0.6577,-0.0871,0.4902,-0.7405,0.6679,-0.0738,0.4935,-0.7374,0.6725,-0.0624,0.4932,-0.7416,0.6687,-0.0536,0.4875,-0.7506,0.6593,-0.0438,0.4779,-0.7604,0.6487,-0.0329,0.4668,-0.7666,0.6418,-0.021,0.4568,-0.7687,0.6396,-0.007,0.4478,-0.7685,0.6398,0.0088,0.4388,-0.7653,0.6432,0.0241,0.4307,-0.7585,0.6507,0.0358,0.4246,-0.7465,0.6638,0.0461,0.4213,-0.7299,0.6813,0.0549,0.4204,-0.7117,0.7002,0.0563,0.42,-0.6949,0.7178,0.0445,0.4183,-0.6783,0.7346,0.0158,0.4148,-0.66,0.7508,-0.0266,0.411,-0.6418,0.7629,-0.078,0.4076,-0.6261,0.7683,-0.1334,0.4047,-0.6136,0.7658,-0.1924,0.4039,-0.6026,0.7559,-0.2561,0.4051,-0.5921,0.7383,-0.323,0.4063,-0.5814,0.7126,-0.3926,0.4056,-0.5703,0.672,-0.4724,0.4028,-0.5573,0.6146,-0.5583,0.401,-0.5412,0.5513,-0.635,0.4007,-0.5234,0.4971,-0.692,0.3995,-0.5025,0.4587,-0.7329,0.3938,-0.4794,0.4292,-0.7655,0.3836,-0.4605,0.4057,-0.7895,0.3706,-0.454,0.3853,-0.8034,0.3565,-0.4698,0.3664,-0.8031,0.3409,-0.5043,0.3512,-0.7889,0.3229,-0.5452,0.3426,-0.7651,0.3042,-0.578,0.346,-0.7391,0.2857,-0.5975,0.3693,-0.7117,0.2681,-0.6099,0.4125,-0.6767,0.2511,-0.6159,0.4697,-0.6325,0.2342,-0.6169,0.5349,-0.5773,0.2164,-0.6128,0.607,-0.5059,0.1974,-0.5954,0.6913,-0.4094,0.1793,-0.5501,0.7865,-0.2808,0.1644,-0.4607,0.8792,-0.1217,0.156,-0.3134,0.9483,0.0513,0.1577,-0.14,0.9685,0.2057,0.1708,0.0062,0.9465,0.3225,0.1917,0.106,0.9053,0.4113,0.2144,0.1776,0.8536,0.4897,0.2359,0.2327,0.797,0.5574,0.2578,0.2649,0.7466,0.6103,0.2794,0.2706,0.7118,0.6482,0.2987,0.2508,0.6933,0.6755,0.314,0.2143,0.6832,0.6981,0.3256,0.1676,0.6761,0.7175,0.3353,0.1168,0.6679,0.735,0.3445,0.0589,0.6561,0.7524,0.3531,-0.0074,0.6413,0.7672,0.3612,-0.0735,0.627,0.7755,0.3704,-0.1305,0.6179,0.7754,0.3812,-0.1813,0.6168,0.766,0.3949,-0.228,0.6204,0.7504,0.4107,-0.2642,0.6259,0.7337,0.4249,-0.286,0.632,0.7203,0.4332,-0.2915,0.6386,0.7122,0.4344,-0.285,0.6475,0.7068,0.4302,-0.2723,0.6601,0.7001,0.4209,-0.2589,0.6783,0.6876,0.4069,-0.238,0.7095,0.6633,0.385,-0.2057,0.7524,0.6258,0.357,-0.1767,0.7945,0.581,0.3299,-0.1735,0.8217,0.5429,0.3094,-0.2168,0.8242,0.5231,0.2966,-0.2945,0.8058,0.5137,0.2892,-0.3815,0.774,0.5053,0.2866,-0.4538,0.7432,0.4917,0.286,-0.5103,0.7195,0.471,0.2858,-0.5598,0.6968,0.4484,0.2872,-0.5987,0.6748,0.4315,0.29,-0.6243,0.6536,0.4278,0.2935,-0.6335,0.6334,0.4444,0.2973,-0.6294,0.6147,0.4754,0.3015,-0.6195,0.5982,0.5084,0.3066,-0.6118,0.5853,0.532,0.3125,-0.6069,0.5777,0.5458,0.3198,-0.6016,0.5742,0.5554,0.3281,-0.5984,0.5726,0.5604,0.3359,-0.5996,0.5713,0.5605,0.3419,-0.6053,0.5697,0.5559,0.3456,-0.6142,0.5689,0.5469,0.3478,-0.6262,0.5686,0.5335,0.3491,-0.6409,0.5688,0.5154,0.3497,-0.6601,0.5691,0.4903,0.3496,-0.6826,0.5693,0.4582,0.349,-0.7047,0.5693,0.4235,0.3488,-0.723,0.5693,0.3914,0.35,-0.7373,0.5696,0.3633,0.3522,-0.7494,0.57,0.3369,0.3552,-0.759,0.5712,0.3125,0.3588,-0.7662,0.5733,0.2903,0.3631,-0.77,0.578,0.2701,0.3684,-0.7711,0.5847,0.2521,0.3744,-0.7717,0.5902,0.2369,0.3805,-0.7738,0.5921,0.225,0.3856,-0.7783,0.5889,0.2177,0.3899,-0.784,0.5827,0.214,0.3936,-0.7903,0.5753,0.2109,0.3964,-0.7964,0.5687,0.2058,0.3982,-0.8024,0.5632,0.1972,0.3987,-0.8087,0.5579,0.1866,0.398,-0.8149,0.5522,0.1761,0.3968,-0.8209,0.546,0.1673,0.3953,-0.827,0.5385,0.1617,0.3922,-0.8332,0.53,0.1579,0.3878,-0.839,0.5219,0.1541,0.3849,-0.8438,0.5157,0.1485,0.3866,-0.846,0.5143,0.1407,0.3953,-0.8463,0.516,0.1324,0.4089,-0.8473,0.5164,0.1244,0.4232,-0.8514,0.5114,0.1167,0.434,-0.8594,0.4995,0.1092,0.44,-0.8698,0.4828,0.1014,0.4436,-0.8812,0.4637,0.0926,0.4464,-0.892,0.4445,0.0821,0.4497,-0.9024,0.4252,0.0696,0.4546,-0.9127,0.4049,0.0558,0.4603,-0.9223,0.3844,0.0407,0.4653,-0.9309,0.3644,0.0247,0.4678,-0.9389,0.3442,0.0066,0.467,-0.9462,0.3233,-0.0135,0.4639,-0.9528,0.3017,-0.0342,0.46,-0.9586,0.2799,-0.0535,0.4566,-0.9636,0.2578,-0.0707,0.4544,-0.968,0.2355,-0.087,0.4525,-0.9716,0.2132,-0.1027,0.4496,-0.9744,0.1911,-0.1186,0.4443,-0.9767,0.1678,-0.1342,0.4357,-0.9784,0.143,-0.1496,0.4247,-0.979,0.118,-0.1664,0.4126,-0.9778,0.0947,-0.1867,0.4007,-0.9744,0.0736,-0.2123,0.389,-0.9687,0.0536,-0.2422,0.3771,-0.961,0.0348,-0.2743,0.3655,-0.9519,0.0174,-0.3059,0.3547,-0.9402,0.0022,-0.3406,0.3443,-0.9255,-0.0109,-0.3785,0.3343,-0.9113,-0.0221,-0.4112,0.3254,-0.9024,-0.0315,-0.4297,0.318,-0.9026,-0.037,-0.4288,0.3119,-0.9099,-0.0385,-0.4131,0.3069,-0.921,-0.0395,-0.3876,0.3025,-0.9328,-0.0434,-0.3577,0.2984,-0.9463,-0.0517,-0.3193,0.2951,-0.9607,-0.0623,-0.2706,0.2931,-0.9722,-0.0742,-0.2221,0.2915,-0.9791,-0.0864,-0.1839,0.2888,-0.9823,-0.1006,-0.1577,0.2837,-0.9834,-0.1172,-0.1385,0.2769,-0.983,-0.1328,-0.1267,0.2697,-0.9819,-0.1437,-0.1232,0.2635,-0.9801,-0.1479,-0.1321,0.2579,-0.9772,-0.1473,-0.1528,0.2525,-0.9732,-0.144,-0.1793,0.2482,-0.9688,-0.1401,-0.2046,0.2459,-0.9641,-0.1373,-0.2273,0.2463,-0.959,-0.1341,-0.2498,0.2486,-0.9539,-0.1281,-0.2716,0.2519,-0.9492,-0.1172,-0.292,0.2551,-0.945,-0.1015,-0.311,0.2582,-0.9409,-0.0823,-0.3286,0.2618,-0.9366,-0.059,-0.3453,0.2652,-0.9317,-0.0308,-0.3619,0.2678,-0.9258,0.0048,-0.378,0.2695,-0.9182,0.0467,-0.3933,0.271,-0.9082,0.0901,-0.4087,0.2722,-0.8957,0.1306,-0.425,0.2731,-0.8809,0.1689,-0.4422,0.2732,-0.8634,0.2069,-0.4602,0.2727,-0.8433,0.2423,-0.4797,0.2725,-0.821,0.2726,-0.5017,0.2733,-0.7962,0.2966,-0.5273,0.2753,-0.7693,0.3157,-0.5555,0.2781,-0.7422,0.3304,-0.5831,0.2814,-0.7172,0.3413,-0.6075,0.285,-0.6948,0.3479,-0.6295,0.2888,-0.6742,0.3505,-0.6501,0.2928,-0.6558,0.3514,-0.6681,0.2968,-0.6398,0.3528,-0.6827,0.3001,-0.6257,0.3545,-0.6949,0.303,-0.6136,0.3556,-0.705,0.3056,-0.6043,0.3578,-0.7119,0.3071,-0.5987,0.3626,-0.7143,0.3066,-0.5985,0.3703,-0.7104,0.303,-0.603,0.3807,-0.701,0.2971,-0.6086,0.3935,-0.689,0.2911,-0.6113,0.4084,-0.6778,0.2872,-0.6101,0.4274,-0.6671,0.2863,-0.6068,0.4495,-0.6556,0.2871,-0.6022,0.4696,-0.6456,0.2888,-0.5973,0.4833,-0.64,0.2904,-0.5925,0.4884,-0.6406,0.2918,-0.5872,0.4878,-0.6459,0.2933,-0.5818,0.4854,-0.6526,0.2947,-0.5764,0.485,-0.6577,0.2961,-0.5717,0.4873,-0.66,0.2972,-0.5675,0.4904,-0.6614,0.2982,-0.5621,0.4941,-0.6632,0.2991,-0.5541,0.4983,-0.6668,0.3003,-0.5411,0.5036,-0.6735,0.3021,-0.5244,0.5097,-0.6821,0.3043,-0.5084,0.515,-0.6901,0.3064,-0.4972,0.5185,-0.6956,0.3077,-0.4924,0.5196,-0.6983,0.3079,-0.4915,0.5192,-0.6992,0.3074,-0.4928,0.5183,-0.6989,0.3063,-0.4944,0.5181,-0.698,0.3051,-0.4975,0.519,-0.6951,0.3035,-0.5025,0.5203,-0.6905,0.3015,-0.5066,0.5215,-0.6866,0.2995,-0.5068,0.5219,-0.6861,0.298,-0.5008,0.5208,-0.6914,0.2975,-0.4905,0.5185,-0.7004,0.2977,-0.4798,0.5166,-0.7092,0.2978,-0.4723,0.5168,-0.714,0.2969,-0.4696,0.52,-0.7136,0.2944,-0.4693,0.5251,-0.71,0.2909,-0.4703,0.5316,-0.7044,0.2874,-0.4711,0.5389,-0.6983,0.2847,-0.4716,0.5476,-0.6911,0.2832,-0.4725,0.5577,-0.6824,0.2824,-0.4735,0.5674,-0.6737,0.282,-0.4742,0.5751,-0.6666,0.2816,-0.4755,0.5807,-0.6608,0.2811,-0.4774,0.5849,-0.6558,0.2806,-0.478,0.5876,-0.6529,0.2803,-0.4753,0.5889,-0.6536,0.2803,-0.4677,0.5876,-0.6603,0.2803,-0.4566,0.5839,-0.6712,0.2806,-0.4447,0.5801,-0.6825,0.2813,-0.435,0.5783,-0.6902,0.2827,-0.4287,0.5797,-0.693,0.2855,-0.4241,0.5829,-0.6931,0.2895,-0.42,0.5867,-0.6923,0.2929,-0.4153,0.59,-0.6924,0.2942,-0.4089,0.5923,-0.6942,0.2922,-0.4014,0.5945,-0.6967,0.2881,-0.3942,0.5971,-0.6987,0.2836,-0.3885,0.6003,-0.699,0.2804,-0.3855,0.6046,-0.697,0.2794,-0.3842,0.6095,-0.6935,0.2794,-0.3836,0.6146,-0.6893,0.2796,-0.3825,0.6199,-0.6851,0.2794,-0.3808,0.6257,-0.6808,0.2784,-0.3788,0.6321,-0.6759,0.2769,-0.3769,0.638,-0.6715,0.2756,-0.3752,0.6423,-0.6683,0.2747,-0.3739,0.6445,-0.667,0.2743,-0.3727,0.6453,-0.6669,0.2743,-0.3718,0.6451,-0.6676,0.2746,-0.3709,0.6444,-0.6687,0.2751,-0.3709,0.6433,-0.6698,0.2761,-0.3715,0.6415,-0.6712,0.2774,-0.3711,0.6392,-0.6735,0.2787,-0.3682,0.6366,-0.6776,0.2795,-0.362,0.6327,-0.6846,0.2796,-0.3534,0.6276,-0.6937,0.2791,-0.3434,0.6232,-0.7027,0.2787,-0.3331,0.6215,-0.7091,0.279,-0.3224,0.6244,-0.7114,0.2805,-0.3112,0.6303,-0.7113,0.2829,-0.2995,0.6362,-0.711,0.285,-0.2877,0.6396,-0.7128,0.2859,-0.2744,0.6393,-0.7184,0.2846,-0.2597,0.6366,-0.7261,0.2821,-0.2458,0.6335,-0.7336,0.2794,-0.2353,0.6319,-0.7385,0.2779,-0.2308,0.6337,-0.7383,0.278,-0.2305,0.6377,-0.735,0.2789,-0.2305,0.6404,-0.7327,0.2801,-0.2271,0.6386,-0.7352,0.2811,-0.2171,0.6289,-0.7465,0.2816,-0.2033,0.6135,-0.7631,0.282,-0.1907,0.5983,-0.7782,0.2829,-0.1841,0.5899,-0.7862,0.2844,-0.1879,0.5921,-0.7837,0.2872,-0.1982,0.6005,-0.7747,0.2909,-0.208,0.61,-0.7646,0.2943,-0.2113,0.6161,-0.7588,0.2958,-0.2049,0.6175,-0.7594,0.2944,-0.1927,0.6168,-0.7632,0.2911,-0.1785,0.6152,-0.7679,0.2875,-0.1669,0.6141,-0.7714,0.2849,-0.1599,0.6131,-0.7737,0.2836,-0.1549,0.6118,-0.7757,0.2829,-0.1501,0.6114,-0.7769,0.2827,-0.1433,0.613,-0.7769,0.2831,-0.1337,0.6176,-0.775,0.2845,-0.1225,0.6241,-0.7717,0.2867,-0.1113,0.6309,-0.7678,0.2891,-0.1015,0.6364,-0.7646,0.2912,-0.0933,0.6404,-0.7623,0.2927,-0.0858,0.6437,-0.7605,0.2939,-0.0794,0.6466,-0.7587,0.2952,-0.0744,0.6494,-0.7568,0.2967,-0.0719,0.6523,-0.7545,0.2985,-0.0714,0.6551,-0.7521,0.3004,-0.0707,0.6577,-0.7499,0.3025,-0.0679,0.66,-0.7482,0.3046,-0.0619,0.6615,-0.7474,0.3067,-0.054,0.6625,-0.7471,0.3089,-0.0458,0.6637,-0.7466,0.3111,-0.0388,0.6659,-0.745,0.3133,-0.0336,0.6699,-0.7416,0.3157,-0.0293,0.6751,-0.7371,0.3183,-0.0251,0.6802,-0.7326,0.3205,-0.0204,0.6838,-0.7293,0.3217,-0.0145,0.6868,-0.7267,0.3214,-0.008,0.6893,-0.7244,0.3201,-0.0014,0.6901,-0.7237,0.3185,0.0046,0.6876,-0.7261,0.3172,0.01,0.6785,-0.7345,0.3162,0.0149,0.6643,-0.7473,0.3154,0.0194,0.651,-0.7588,0.3148,0.0232,0.6451,-0.7638,0.3146,0.0264,0.6514,-0.7582,0.3145,0.0289,0.6655,-0.7458,0.3148,0.0309,0.6798,-0.7327,0.3154,0.0327,0.6873,-0.7257,0.3164,0.0334,0.6853,-0.7275,0.318,0.0333,0.678,-0.7343,0.3201,0.0341,0.6687,-0.7428,0.3221,0.0379,0.6606,-0.7498,0.3232,0.0461,0.6547,-0.7545,0.3228,0.0576,0.6492,-0.7584,0.3214,0.0698,0.6429,-0.7628,0.3201,0.0801,0.6348,-0.7685,0.3199,0.0877,0.6234,-0.777,0.3214,0.0938,0.6097,-0.7871,0.3241,0.0989,0.5967,-0.7963,0.3267,0.1034,0.5875,-0.8026,0.3283,0.1066,0.5831,-0.8054,0.3283,0.1086,0.5817,-0.8061,0.3275,0.1113,0.5823,-0.8053,0.326,0.1166,0.5834,-0.8037,0.3239,0.1271,0.5835,-0.8021,0.3203,0.1414,0.5836,-0.7997,0.3156,0.1551,0.5867,-0.7948,0.3116,0.1634,0.5961,-0.7861,0.3105,0.161,0.6173,-0.77,0.3135,0.1519,0.6457,-0.7483,0.3196,0.144,0.6699,-0.7283,0.3267,0.1451,0.6813,-0.7175,0.3323,0.1599,0.6744,-0.7209,0.3351,0.1826,0.656,-0.7323,0.3368,0.2049,0.6372,-0.743,0.3388]);
Group704ZZZ.children[5] = OrientationInterpolator710;

let OrientationInterpolator711 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator711.DEF = "Interpolator3_vl5";
OrientationInterpolator711.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator711.keyValue = new X3D.MFRotation([-0.0377,-0.1706,-0.9846,0.0009,-0.9744,0.0383,0.2214,0.0279,-0.9701,0.0365,0.2398,0.0573,-0.9694,0.035,0.2431,0.084,-0.9703,0.0359,0.2392,0.1036,-0.9732,0.0414,0.2262,0.1138,-0.9771,0.0501,0.207,0.1173,-0.9804,0.0593,0.188,0.1175,-0.982,0.0657,0.1773,0.1178,-0.9814,0.0676,0.1795,0.1184,-0.9797,0.0672,0.1888,0.1177,-0.9776,0.0669,0.1996,0.1163,-0.9761,0.0687,0.206,0.1147,-0.9754,0.073,0.2082,0.1129,-0.9748,0.0788,0.2088,0.1105,-0.975,0.0868,0.2045,0.1081,-0.9766,0.0974,0.1918,0.1064,-0.9797,0.1128,0.1655,0.1053,-0.9829,0.1319,0.1284,0.1048,-0.9846,0.15,0.0902,0.1049,-0.9848,0.1625,0.0609,0.1055,-0.9849,0.1672,0.0445,0.1067,-0.9853,0.167,0.0357,0.1084,-0.9858,0.1653,0.0296,0.11,-0.986,0.1651,0.0214,0.1108,-0.9859,0.1668,0.0097,0.1109,-0.9856,0.1689,-0.0033,0.1104,-0.985,0.1717,-0.0165,0.1093,-0.984,0.1759,-0.029,0.1078,-0.9823,0.1818,-0.045,0.1061,-0.9798,0.1893,-0.0638,0.104,-0.9772,0.1979,-0.0773,0.1011,-0.9753,0.2074,-0.0762,0.0969,-0.9741,0.221,-0.0468,0.09,-0.9707,0.24,0.011,0.0814,-0.9623,0.2593,0.0821,0.0737,-0.9532,0.2702,0.1355,0.0688,-0.9535,0.2668,0.1398,0.0672,-0.9609,0.2532,0.1118,0.0677,-0.9686,0.2343,0.0838,0.0694,-0.9728,0.2152,0.0858,0.0713,-0.9724,0.1947,0.1282,0.0735,-0.9667,0.1718,0.1896,0.0767,-0.9561,0.1499,0.2518,0.0803,-0.9442,0.1323,0.3017,0.0837,-0.9318,0.1191,0.3429,0.0864,-0.918,0.1083,0.3814,0.0889,-0.9054,0.0995,0.4126,0.0911,-0.8968,0.0926,0.4326,0.0931,-0.8945,0.0874,0.4385,0.095,-0.8967,0.0839,0.4347,0.0967,-0.9001,0.0819,0.4279,0.0976,-0.9019,0.0813,0.4242,0.0971,-0.8991,0.0817,0.4301,0.094,-0.8934,0.0834,0.4415,0.0891,-0.8901,0.0872,0.4474,0.0843,-0.8962,0.0941,0.4336,0.0816,-0.9163,0.1053,0.3864,0.0824,-0.9404,0.1189,0.3186,0.0856,-0.9581,0.131,0.2549,0.0898,-0.967,0.1395,0.2134,0.0933,-0.9701,0.1436,0.1956,0.0956,-0.9708,0.1451,0.191,0.0975,-0.9697,0.1468,0.1952,0.0986,-0.9671,0.1511,0.2046,0.0986,-0.9622,0.1585,0.2216,0.0973,-0.9541,0.1682,0.2477,0.095,-0.9433,0.1804,0.2787,0.092,-0.9305,0.1956,0.3096,0.0888,-0.9114,0.2165,0.35,0.0846,-0.8829,0.2435,0.4015,0.0799,-0.8547,0.2722,0.4421,0.0758,-0.8451,0.2966,0.4448,0.0733,-0.87,0.3105,0.3829,0.073,-0.9087,0.314,0.2752,0.0749,-0.9354,0.3126,0.1654,0.0783,-0.9445,0.316,0.09,0.081,-0.9431,0.3278,0.0554,0.082,-0.9379,0.3444,0.0408,0.0822,-0.9303,0.3652,0.033,0.0817,-0.9208,0.3895,0.019,0.0809,-0.9078,0.4194,-0.0066,0.0796,-0.8895,0.4553,-0.0373,0.0778,-0.8678,0.4923,-0.0674,0.0763,-0.8466,0.5246,-0.0896,0.0757,-0.8299,0.5491,-0.0988,0.0764,-0.8166,0.5686,-0.0993,0.0778,-0.8041,0.5865,-0.0972,0.0793,-0.7895,0.6058,-0.0988,0.0805,-0.7706,0.6291,-0.1021,0.0809,-0.749,0.6542,-0.1053,0.081,-0.7268,0.6774,-0.1133,0.0813,-0.7075,0.6945,-0.1309,0.0826,-0.6942,0.7019,-0.1596,0.0851,-0.6845,0.7026,-0.1946,0.0884,-0.6737,0.7019,-0.2311,0.0924,-0.658,0.7048,-0.2652,0.0968,-0.6327,0.7128,-0.3027,0.1023,-0.6026,0.7216,-0.3409,0.1088,-0.577,0.7288,-0.3686,0.115,-0.5634,0.7341,-0.3791,0.1189,-0.5706,0.7371,-0.3621,0.1185,-0.5915,0.7382,-0.3244,0.1153,-0.6079,0.7398,-0.2883,0.1128,-0.6019,0.747,-0.2823,0.1139,-0.5695,0.7541,-0.327,0.1222,-0.5242,0.757,-0.3902,0.1356,-0.4731,0.764,-0.4387,0.1485,-0.4174,0.7846,-0.4584,0.1547,-0.3292,0.8361,-0.4388,0.1494,-0.1929,0.9042,-0.3812,0.1396,-0.0507,0.95,-0.3082,0.1341,0.0162,0.961,-0.276,0.1352,-0.0401,0.9467,-0.3197,0.142,-0.158,0.906,-0.3927,0.1548,-0.2648,0.8527,-0.4504,0.1718,-0.324,0.8157,-0.4792,0.1859,-0.344,0.8041,-0.4849,0.1929,-0.3496,0.8039,-0.4811,0.1959,-0.3476,0.8069,-0.4775,0.1976,-0.3438,0.8052,-0.4832,0.2005,-0.3368,0.7948,-0.5047,0.2061,-0.325,0.7806,-0.5339,0.213,-0.3127,0.7678,-0.5592,0.2193,-0.3039,0.762,-0.5718,0.223,-0.2967,0.7677,-0.5679,0.2223,-0.2894,0.7811,-0.5533,0.2186,-0.287,0.7947,-0.5349,0.2148,-0.2949,0.8007,-0.5214,0.2135,-0.3175,0.7958,-0.5157,0.2159,-0.3496,0.7841,-0.5128,0.2205,-0.3832,0.7694,-0.5111,0.2262,-0.4117,0.7555,-0.5097,0.2318,-0.4369,0.741,-0.5099,0.2376,-0.461,0.7251,-0.5116,0.244,-0.4802,0.712,-0.5123,0.2497,-0.4919,0.7055,-0.5103,0.2533,-0.4917,0.7097,-0.5045,0.2536,-0.4831,0.7214,-0.4962,0.2515,-0.4748,0.7331,-0.487,0.2488,-0.4764,0.7374,-0.4788,0.2471,-0.4946,0.7297,-0.4722,0.2474,-0.5223,0.7144,-0.4657,0.2486,-0.5499,0.6972,-0.4599,0.2497,-0.5689,0.6846,-0.4557,0.2488,-0.5748,0.6798,-0.4556,0.2444,-0.5731,0.6791,-0.4586,0.2378,-0.5716,0.6793,-0.4603,0.2309,-0.579,0.6762,-0.4556,0.2255,-0.5996,0.6681,-0.4406,0.2223,-0.628,0.6564,-0.4181,0.2206,-0.6576,0.6423,-0.3938,0.2198,-0.6831,0.6276,-0.3735,0.2194,-0.7032,0.6133,-0.3598,0.219,-0.7208,0.5986,-0.3495,0.219,-0.7373,0.5837,-0.3402,0.2194,-0.7537,0.5687,-0.3293,0.2204,-0.7696,0.5546,-0.3165,0.2222,-0.7843,0.5413,-0.3031,0.2246,-0.7991,0.5269,-0.2895,0.2272,-0.8151,0.5096,-0.2756,0.2293,-0.8331,0.4875,-0.2613,0.2309,-0.8519,0.462,-0.2464,0.2325,-0.87,0.4355,-0.2313,0.2338,-0.8859,0.4105,-0.2162,0.2347,-0.9007,0.3871,-0.1973,0.2348,-0.9148,0.3638,-0.1755,0.2343,-0.9265,0.3414,-0.1583,0.2337,-0.9347,0.3209,-0.1531,0.2332,-0.9382,0.3032,-0.1672,0.2329,-0.9378,0.2874,-0.1948,0.2326,-0.9357,0.2726,-0.2242,0.2324,-0.935,0.2577,-0.2438,0.2318,-0.9368,0.2425,-0.2522,0.2306,-0.9398,0.2272,-0.2552,0.2287,-0.9441,0.2129,-0.2518,0.2267,-0.9495,0.2007,-0.2413,0.2248,-0.9569,0.1905,-0.2192,0.2231,-0.9654,0.1818,-0.187,0.2218,-0.9727,0.1749,-0.1527,0.2206,-0.9775,0.1701,-0.1245,0.2192,-0.9801,0.1688,-0.1042,0.2169,-0.9815,0.1704,-0.0876,0.2139,-0.9821,0.1732,-0.0743,0.2115,-0.9825,0.1749,-0.0644,0.2111,-0.9829,0.1748,-0.0581,0.2142,-0.9831,0.1742,-0.0556,0.2196,-0.9832,0.1736,-0.057,0.2247,-0.9828,0.1736,-0.0623,0.2268,-0.9817,0.1752,-0.0743,0.2244,-0.9797,0.1779,-0.0927,0.2193,-0.9773,0.1794,-0.1126,0.2135,-0.9757,0.1776,-0.1282,0.209,-0.9759,0.1697,-0.1372,0.2068,-0.9771,0.1576,-0.1427,0.2056,-0.9786,0.146,-0.1454,0.2043,-0.9794,0.1393,-0.1463,0.2016,-0.9795,0.1403,-0.1449,0.1965,-0.9792,0.1465,-0.1406,0.19,-0.9787,0.1547,-0.1348,0.1835,-0.9785,0.1611,-0.1291,0.1788,-0.9788,0.1636,-0.1229,0.1766,-0.9796,0.1643,-0.1158,0.176,-0.9801,0.1652,-0.1101,0.1758,-0.9798,0.1681,-0.1079,0.1749,-0.9788,0.1739,-0.1085,0.1729,-0.977,0.1817,-0.1114,0.1704,-0.9745,0.1904,-0.1187,0.1681,-0.971,0.199,-0.1328,0.1668,-0.9654,0.2063,-0.1592,0.1671,-0.9576,0.2129,-0.1943,0.1687,-0.9488,0.2198,-0.2269,0.1707,-0.9415,0.2288,-0.2473,0.1718,-0.9364,0.2431,-0.2532,0.1717,-0.9323,0.2613,-0.25,0.1709,-0.9301,0.2776,-0.2405,0.1698,-0.9308,0.2863,-0.2274,0.1688,-0.9386,0.2773,-0.2054,0.1671,-0.951,0.2556,-0.174,0.1649,-0.9599,0.2395,-0.1457,0.1639,-0.9593,0.2486,-0.1343,0.1653,-0.9434,0.2956,-0.1501,0.1706,-0.9148,0.3614,-0.1803,0.1796,-0.8827,0.4216,-0.2075,0.1896,-0.8592,0.4618,-0.22,0.1971,-0.8484,0.4833,-0.2157,0.1998,-0.8442,0.4963,-0.2023,0.1998,-0.8433,0.5041,-0.1863,0.199,-0.8425,0.5096,-0.1746,0.1991,-0.8426,0.5115,-0.1686,0.2009,-0.8446,0.5093,-0.1649,0.2033,-0.8469,0.5062,-0.1631,0.2056,-0.8475,0.5053,-0.1626,0.2069,-0.8456,0.5076,-0.1653,0.2067,-0.8421,0.5115,-0.1708,0.2055,-0.8386,0.5158,-0.1753,0.2042,-0.8366,0.5191,-0.1748,0.2039,-0.8364,0.5231,-0.1641,0.205,-0.8369,0.5274,-0.1468,0.207,-0.8384,0.5288,-0.1323,0.2092,-0.8415,0.5246,-0.1295,0.2109,-0.8461,0.5125,-0.1462,0.2115,-0.8514,0.4943,-0.1757,0.2118,-0.857,0.4731,-0.2042,0.2126,-0.8641,0.4536,-0.218,0.2146,-0.8749,0.4358,-0.2112,0.218,-0.8878,0.4181,-0.1924,0.2224,-0.8993,0.4027,-0.1706,0.2273,-0.9069,0.3921,-0.1541,0.2318,-0.9099,0.3877,-0.1479,0.2357,-0.9101,0.3878,-0.1462,0.2394,-0.9101,0.3897,-0.1409,0.2426,-0.912,0.3909,-0.1243,0.2452,-0.9157,0.3913,-0.0921,0.247,-0.9189,0.3914,-0.0492,0.2486,-0.9209,0.3898,-0.0023,0.2503,-0.9217,0.3856,0.0421,0.252,-0.9212,0.38,0.0834,0.2537,-0.9194,0.373,0.1248,0.2552,-0.9172,0.3624,0.1653,0.2569,-0.9158,0.346,0.2038,0.2591,-0.9157,0.3211,0.2417,0.2617,-0.9156,0.2897,0.2788,0.2648,-0.9148,0.2573,0.3112,0.2682,-0.9136,0.2291,0.3361,0.2717,-0.9131,0.2058,0.352,0.2751,-0.9138,0.185,0.3616,0.2785,-0.9149,0.1668,0.3676,0.2813,-0.9155,0.1513,0.3728,0.283,-0.9157,0.1377,0.3774,0.2832,-0.9162,0.1261,0.3805,0.2823,-0.9165,0.1172,0.3825,0.2807,-0.9165,0.1122,0.3841,0.2791,-0.9164,0.1129,0.3841,0.2764,-0.9163,0.1186,0.3826,0.2727,-0.9156,0.1256,0.382,0.2702,-0.9137,0.1304,0.3849,0.2711,-0.9092,0.1302,0.3956,0.2783,-0.9029,0.1274,0.4105,0.2899,-0.8981,0.1259,0.4214,0.3009,-0.8974,0.1295,0.4218,0.3065,-0.9018,0.1417,0.4082,0.3038,-0.9094,0.1601,0.3838,0.2962,-0.9181,0.1799,0.3532,0.2876,-0.9259,0.1952,0.3233,0.2816,-0.9331,0.2027,0.2969,0.2798,-0.9403,0.2057,0.271,0.2801,-0.947,0.2078,0.2449,0.2803,-0.9528,0.2126,0.217,0.2781,-0.9579,0.2213,0.183,0.2728,-0.9621,0.232,0.1435,0.266,-0.9642,0.2436,0.1044,0.2581,-0.9641,0.2553,0.0725,0.2494,-0.9624,0.2665,0.052,0.2393,-0.9596,0.2786,0.0391,0.2276,-0.9555,0.2935,0.03,0.2153,-0.9494,0.3133,0.0202,0.2035,-0.9396,0.3421,0.0096,0.1917,-0.9251,0.3798,0.0003,0.1797,-0.9075,0.4199,-0.0093,0.169,-0.8911,0.4534,-0.0211,0.1608,-0.8781,0.4769,-0.0393,0.1548,-0.8678,0.4932,-0.0613,0.1506,-0.8622,0.5005,-0.078,0.1484,-0.8635,0.4979,-0.0798,0.1486,-0.8759,0.4793,-0.0556,0.1532,-0.8937,0.4483,-0.0165,0.1617,-0.9083,0.418,0.0182,0.1701,-0.9165,0.3984,0.0352,0.1736,-0.9194,0.3922,0.0311,0.1694,-0.9195,0.3929,0.0131,0.1603,-0.9181,0.396,-0.0125,0.1502,-0.9174,0.3962,-0.0365,0.1426,-0.918,0.3925,-0.0574,0.1382,-0.9185,0.3874,-0.0793,0.1353,-0.9195,0.3808,-0.0975,0.1335,-0.9219,0.3723,-0.1072,0.1327,-0.927,0.3609,-0.1027,0.1332,-0.9337,0.3473,-0.0877,0.135,-0.9396,0.3347,-0.0724,0.1374,-0.9431,0.3259,-0.0659,0.1397,-0.9437,0.3224,-0.0744,0.1418,-0.9423,0.3221,-0.0911,0.1442,-0.9404,0.3231,-0.1057,0.1463,-0.9398,0.3238,-0.109,0.1477,-0.9412,0.3237,-0.0971,0.1484,-0.9432,0.3235,-0.0755,0.1485,-0.9449,0.3236,-0.0496,0.1481,-0.9455,0.3247,-0.0246,0.1473,-0.9445,0.3286,0.0007,0.1451,-0.9419,0.3347,0.0293,0.1419,-0.939,0.3393,0.057,0.1395,-0.9378,0.3384,0.0778,0.1397,-0.9403,0.3288,0.0882,0.1436,-0.9449,0.3143,0.0913,0.1501,-0.9493,0.301,0.0908,0.1571,-0.9517,0.2933,0.0903,0.1625,-0.952,0.293,0.0884,0.1659,-0.9512,0.2969,0.0843,0.1683,-0.95,0.3014,0.0816,0.1701,-0.9492,0.3031,0.084,0.1716,-0.9491,0.3013,0.0924,0.1726,-0.9489,0.2976,0.1048,0.1731,-0.9486,0.2927,0.1201,0.1735,-0.9481,0.287,0.1371,0.1743,-0.9466,0.2808,0.1586,0.1754,-0.9441,0.2736,0.184,0.1768,-0.9418,0.2653,0.2066,0.1785,-0.9414,0.2557,0.2201,0.1808,-0.9443,0.2434,0.2216,0.1837,-0.9493,0.2292,0.2152,0.1872,-0.9544,0.2165,0.2056,0.1909,-0.958,0.2082,0.1972,0.1942,-0.9599,0.2067,0.1896,0.1971,-0.9609,0.2095,0.1811,0.1999,-0.9617,0.2122,0.1735,0.2024,-0.963,0.2105,0.1683,0.2042,-0.9652,0.2024,0.1653,0.2057,-0.9679,0.1906,0.1638,0.207,-0.9703,0.1777,0.1644,0.2073,-0.9716,0.1666,0.1678,0.2059,-0.9716,0.158,0.1763,0.2019,-0.9703,0.1503,0.1894,0.1959,-0.9687,0.1418,0.2037,0.1896,-0.9678,0.1309,0.2149,0.1845,-0.9681,0.117,0.2217,0.1812,-0.9689,0.101,0.2261,0.1787,-0.9701,0.0839,0.2276,0.1767,-0.9719,0.0663,0.2257,0.1748,-0.9742,0.0488,0.2203,0.1724,-0.9769,0.0308,0.2113,0.17,-0.98,0.0119,0.1988,0.1686,-0.9831,-0.0076,0.1831,0.1693,-0.9865,-0.0278,0.1616,0.1731,-0.9895,-0.0472,0.1364,0.1792,-0.9914,-0.0641,0.1141,0.1862,-0.992,-0.0775,0.1,0.1924,-0.9915,-0.0877,0.0964,0.1978,-0.9905,-0.0956,0.0992,0.2029,-0.9894,-0.1018,0.1034,0.2075,-0.9888,-0.1068,0.1045,0.2115,-0.9886,-0.1104,0.1028,0.2152,-0.9886,-0.1125,0.1003,0.2187,-0.9889,-0.114,0.0955,0.221,-0.9895,-0.1154,0.0868,0.2215,-0.9906,-0.1166,0.0718,0.2196,-0.9918,-0.1173,0.0514,0.2159,-0.9925,-0.1184,0.029,0.2113,-0.9927,-0.1207,0.0085,0.2065,-0.9921,-0.1251,-0.0089,0.2007,-0.991,-0.1313,-0.0258,0.1938,-0.9895,-0.1379,-0.0426,0.1876,-0.9879,-0.1432,-0.0594,0.1842,-0.9862,-0.1462,-0.0771,0.1848,-0.9845,-0.1478,-0.094,0.188,-0.9832,-0.1481,-0.1071,0.1919,-0.9825,-0.1473,-0.1138,0.1947,-0.9831,-0.145,-0.112,0.196,-0.9845,-0.1412,-0.1039,0.1969,-0.9861,-0.1373,-0.0938,0.1971,-0.9871,-0.1347,-0.086,0.1964,-0.9877,-0.1346,-0.0801,0.1944,-0.988,-0.1358,-0.0741,0.1912,-0.9881,-0.1367,-0.0704,0.1879,-0.9882,-0.1352,-0.0716,0.1857,-0.9881,-0.1313,-0.0803,0.1849,-0.9876,-0.1258,-0.0944,0.1849,-0.9869,-0.1182,-0.1102,0.1853,-0.9864,-0.108,-0.1237,0.1856,-0.9865,-0.0941,-0.1338,0.1853,-0.9868,-0.0771,-0.1426,0.1849,-0.9867,-0.059,-0.1514,0.185,-0.986,-0.0419,-0.1612,0.1863,-0.9844,-0.026,-0.1743,0.1897,-0.982,-0.0108,-0.1888,0.1946,-0.9797,0.0028,-0.2002,0.1994,-0.9786,0.0146,-0.2052,0.2026,-0.9793,0.0249,-0.2008,0.2033,-0.9812,0.0342,-0.19,0.2024,-0.9832,0.0422,-0.1777,0.2013,-0.9844,0.0484,-0.1693,0.2012,-0.9847,0.0517,-0.1666,0.2029,-0.9846,0.0527,-0.1667,0.2055,-0.9844,0.0531,-0.1679,0.2078,-0.9841,0.0545,-0.1688,0.2085,-0.9841,0.0575,-0.1678,0.2065,-0.9842,0.0612,-0.166,0.2028,-0.9839,0.0654,-0.1662,0.1989,-0.9828,0.0694,-0.1709,0.1965,-0.9806,0.0726,-0.1821,0.1959,-0.9773,0.0753,-0.1979,0.1965,-0.9734,0.0784,-0.2152,0.1979,-0.9695,0.0826,-0.2309,0.1997,-0.9652,0.0888,-0.2461,0.2027,-0.9605,0.0961,-0.2613,0.2066,-0.9563,0.1031,-0.2737,0.2103,-0.9535,0.1084,-0.2812,0.2126,-0.9532,0.1116,-0.281,0.2126,-0.9547,0.1136,-0.2752,0.2112,-0.9562,0.1149,-0.2692,0.2096,-0.9562,0.1162,-0.2687,0.2089,-0.9536,0.1172,-0.2774,0.2097,-0.9493,0.1177,-0.2915,0.2113,-0.945,0.1182,-0.3051,0.2133,-0.9423,0.1195,-0.3129,0.2149,-0.9419,0.1221,-0.313,0.2161,-0.9428,0.1255,-0.3087,0.2172,-0.9445,0.1286,-0.3023,0.2182,-0.9462,0.1303,-0.2961,0.2195,-0.9483,0.1298,-0.2897,0.2212,-0.9508,0.1278,-0.2823,0.2233,-0.953,0.1256,-0.2756,0.2252,-0.9544,0.124,-0.2715,0.2264,-0.9546,0.1238,-0.2711,0.2262,-0.9539,0.1242,-0.2733,0.2251,-0.9531,0.1243,-0.2759,0.2243,-0.953,0.1232,-0.2769,0.2253,-0.9539,0.12,-0.2749,0.2289,-0.9555,0.1157,-0.2715,0.2342,-0.9568,0.1115,-0.2686,0.2398,-0.9573,0.1086,-0.268,0.2443,-0.957,0.1069,-0.2698,0.2474,-0.9562,0.1058,-0.2731,0.2498,-0.9548,0.1057,-0.2779,0.2515,-0.9528,0.1067,-0.2844,0.2521,-0.9496,0.1098,-0.2937,0.2511,-0.9452,0.1145,-0.3057,0.2489,-0.9405,0.1194,-0.3181,0.2465,-0.9366,0.1228,-0.3283,0.2453,-0.9336,0.1239,-0.3362,0.2461,-0.9313,0.1237,-0.3427,0.2481,-0.9296,0.1232,-0.3472,0.2499,-0.9288,0.1234,-0.3494,0.2502,-0.9294,0.1243,-0.3474,0.2485,-0.9312,0.1256,-0.3421,0.2455,-0.933,0.1274,-0.3365,0.2421,-0.9335,0.1299,-0.3342,0.2393,-0.9319,0.1333,-0.3373,0.2376,-0.929,0.1376,-0.3437,0.2365,-0.9258,0.1419,-0.3504,0.2352,-0.9237,0.1454,-0.3545,0.2335,-0.9234,0.1476,-0.3544,0.2309,-0.9241,0.149,-0.3519,0.2278,-0.9249,0.1505,-0.3492,0.2245,-0.9246,0.1528,-0.3491,0.2215,-0.9226,0.1565,-0.3526,0.2187,-0.9195,0.1611,-0.3584,0.2158,-0.916,0.1659,-0.3653,0.2132,-0.9126,0.1701,-0.3718,0.2111,-0.9095,0.1734,-0.3778,0.2095,-0.9065,0.1761,-0.3837,0.2085,-0.9034,0.1787,-0.3897,0.2075,-0.9001,0.1815,-0.396,0.206,-0.8964,0.1847,-0.403,0.2037,-0.8922,0.1881,-0.4107,0.2009,-0.888,0.1915,-0.4181,0.1981,-0.8844,0.1947,-0.4242,0.1955,-0.8813,0.1974,-0.4293,0.1934,-0.8787,0.1998,-0.4336,0.1916,-0.8768,0.202,-0.4363,0.1896,-0.876,0.2044,-0.4368,0.1873,-0.8772,0.207,-0.4331,0.184,-0.8801,0.2096,-0.4259,0.1802,-0.883,0.2125,-0.4186,0.1766,-0.8839,0.2154,-0.4152,0.1744,-0.8816,0.2182,-0.4186,0.1746,-0.8773,0.2208,-0.4261,0.1763,-0.873,0.2236,-0.4335,0.1778,-0.8705,0.2269,-0.4367,0.1773,-0.871,0.2314,-0.4334,0.1736,-0.8733,0.2371,-0.4257,0.1679,-0.8757,0.2433,-0.417,0.162,-0.8766,0.2489,-0.4118,0.1578,-0.8747,0.2535,-0.413,0.156,-0.8712,0.2575,-0.418,0.1555,-0.8677,0.2604,-0.4233,0.1554,-0.8661,0.2622,-0.4255,0.1544,-0.8681,0.2614,-0.4219,0.1522,-0.8725,0.2584,-0.4148,0.1493,-0.8763,0.2562,-0.408,0.1463,-0.8769,0.2577,-0.4058,0.1437,-0.8717,0.2663,-0.4114,0.1415,-0.8624,0.2797,-0.4219,0.1394,-0.8522,0.2929,-0.4336,0.1378,-0.8448,0.3005,-0.4427,0.1369,-0.8425,0.2993,-0.448,0.1371,-0.8429,0.2928,-0.4514,0.1382,-0.8443,0.2853,-0.4537,0.1393,-0.8445,0.281,-0.4559,0.1397,-0.8433,0.2812,-0.458,0.1387,-0.8415,0.2836,-0.4598,0.1369,-0.8395,0.2871,-0.4612,0.1352,-0.8379,0.2905,-0.4621,0.1345,-0.8365,0.294,-0.4624,0.1351,-0.8352,0.2981,-0.4622,0.1364,-0.8343,0.3015,-0.4616,0.1383,-0.8343,0.303,-0.4606,0.1404,-0.8356,0.3013,-0.4593,0.1431,-0.8378,0.2976,-0.4577,0.1464,-0.84,0.2943,-0.4558,0.1496,-0.8412,0.2936,-0.4541,0.1517,-0.841,0.2973,-0.452,0.1518,-0.8401,0.3037,-0.4494,0.1508,-0.839,0.3098,-0.4474,0.1499,-0.8383,0.3123,-0.447,0.1505,-0.839,0.3092,-0.4477,0.1535,-0.8405,0.3029,-0.4492,0.158,-0.841,0.2964,-0.4526,0.1629,-0.8393,0.2919,-0.4587,0.1671,-0.8334,0.2899,-0.4705,0.1707,-0.8246,0.2891,-0.4863,0.1742,-0.8166,0.2886,-0.5,0.1772,-0.8128,0.288,-0.5065,0.1795,-0.8148,0.2866,-0.504,0.1813,-0.8203,0.285,-0.4958,0.1827,-0.8273,0.284,-0.4846,0.183,-0.8341,0.2846,-0.4726,0.1812,-0.8419,0.2879,-0.4564,0.1761,-0.8516,0.2934,-0.4345,0.1683,-0.8598,0.3001,-0.4131,0.1608,-0.8632,0.3064,-0.4013,0.1561,-0.8581,0.3121,-0.4077,0.1554,-0.8471,0.3173,-0.4262,0.1571,-0.8357,0.3211,-0.4456,0.1598,-0.8292,0.3226,-0.4565,0.1616,-0.8298,0.3208,-0.4567,0.1627,-0.8343,0.3165,-0.4515,0.1637,-0.8404,0.312,-0.4432,0.164,-0.8462,0.3097,-0.4337,0.1633,-0.8513,0.3114,-0.4221,0.1606,-0.8571,0.3158,-0.4071,0.1564,-0.8631,0.3197,-0.3909,0.1524,-0.8694,0.3199,-0.3766,0.1501,-0.8764,0.3146,-0.3646,0.1499,-0.8839,0.3058,-0.3539,0.1509,-0.8902,0.2957,-0.3466,0.1529,-0.894,0.2863,-0.3446,0.1551,-0.8944,0.2774,-0.3508,0.158,-0.8923,0.2684,-0.3629,0.1617,-0.8898,0.2604,-0.3747,0.1654,-0.8889,0.2542,-0.3812,0.1683,-0.8926,0.2492,-0.3758,0.1698,-0.8989,0.2448,-0.3634,0.1704,-0.9026,0.2425,-0.3557,0.1712,-0.8986,0.2438,-0.3647,0.1731,-0.8813,0.251,-0.4003,0.1772,-0.8537,0.2615,-0.4503,0.1832,-0.8256,0.2701,-0.4955,0.1896,-0.8078,0.2735,-0.5222,0.1943,-0.8069,0.2703,-0.5252,0.1956,-0.8155,0.2632,-0.5154,0.1949,-0.824,0.256,-0.5054,0.1943]);
Group704ZZZ.children[6] = OrientationInterpolator711;

let OrientationInterpolator712 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator712.DEF = "Interpolator4_neck";
OrientationInterpolator712.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator712.keyValue = new X3D.MFRotation([0,1,0,0,-0.1095,-0.7561,-0.6453,0.0506,-0.1253,-0.7543,-0.6445,0.1043,-0.1337,-0.7507,-0.647,0.1523,-0.1315,-0.7458,-0.653,0.1856,-0.1132,-0.7379,-0.6653,0.1987,-0.0811,-0.7264,-0.6824,0.1977,-0.0431,-0.7128,-0.7,0.1908,-0.0118,-0.7023,-0.7118,0.1856,0.0066,-0.6995,-0.7146,0.1826,0.0205,-0.7012,-0.7127,0.1779,0.033,-0.7034,-0.71,0.173,0.0469,-0.7019,-0.7107,0.1693,0.0612,-0.6934,-0.7179,0.1677,0.0745,-0.6808,-0.7287,0.1673,0.0893,-0.6685,-0.7384,0.1668,0.1087,-0.6608,-0.7427,0.1652,0.138,-0.6613,-0.7373,0.1616,0.1754,-0.6666,-0.7245,0.1571,0.2126,-0.6706,-0.7107,0.1525,0.2394,-0.6678,-0.7048,0.1489,0.2482,-0.6551,-0.7136,0.1461,0.2446,-0.636,-0.7319,0.1439,0.2389,-0.6147,-0.7517,0.142,0.2418,-0.5965,-0.7653,0.1402,0.255,-0.5817,-0.7724,0.1389,0.2732,-0.5682,-0.7762,0.138,0.2981,-0.5576,-0.7748,0.1368,0.3318,-0.5508,-0.7658,0.1349,0.3836,-0.5506,-0.7414,0.1316,0.4506,-0.5533,-0.7006,0.1279,0.5152,-0.5525,-0.6552,0.1251,0.5598,-0.545,-0.6242,0.1237,0.5766,-0.5305,-0.6213,0.1238,0.576,-0.5127,-0.6367,0.1247,0.5683,-0.4962,-0.6564,0.1253,0.5637,-0.4856,-0.6682,0.124,0.5665,-0.4826,-0.668,0.1203,0.5709,-0.485,-0.6624,0.1148,0.5727,-0.4914,-0.6562,0.1085,0.5662,-0.5003,-0.6551,0.1024,0.5385,-0.5138,-0.6679,0.0961,0.4899,-0.5326,-0.6902,0.0894,0.4412,-0.5517,-0.7078,0.0836,0.4243,-0.5667,-0.7063,0.0792,0.4689,-0.5763,-0.6693,0.0765,0.5533,-0.5764,-0.6013,0.0756,0.6366,-0.5633,-0.5268,0.0765,0.6891,-0.5442,-0.4785,0.0777,0.7125,-0.5245,-0.466,0.078,0.7223,-0.5027,-0.4749,0.0781,0.7201,-0.4798,-0.5013,0.0786,0.707,-0.4573,-0.5395,0.0802,0.6727,-0.4357,-0.5981,0.0834,0.6204,-0.4129,-0.6668,0.0883,0.5744,-0.3904,-0.7195,0.0944,0.5568,-0.3719,-0.7427,0.1008,0.574,-0.3594,-0.7358,0.1075,0.6081,-0.3506,-0.7123,0.1149,0.6441,-0.3428,-0.6838,0.122,0.6727,-0.3341,-0.6602,0.128,0.6973,-0.3233,-0.6397,0.1325,0.7221,-0.3112,-0.6178,0.136,0.7426,-0.2999,-0.5988,0.1387,0.7552,-0.2916,-0.5871,0.1401,0.7579,-0.287,-0.5859,0.1395,0.7538,-0.2847,-0.5922,0.1371,0.7475,-0.2837,-0.6006,0.1345,0.7436,-0.2832,-0.6056,0.1337,0.7426,-0.2835,-0.6068,0.1349,0.7421,-0.285,-0.6067,0.1372,0.7438,-0.2864,-0.6039,0.1404,0.7493,-0.2866,-0.597,0.1439,0.7622,-0.2838,-0.5819,0.1483,0.7791,-0.2792,-0.5613,0.1539,0.7927,-0.276,-0.5436,0.159,0.7974,-0.2771,-0.5361,0.1623,0.79,-0.2839,-0.5434,0.1627,0.7743,-0.2946,-0.5601,0.1613,0.7557,-0.307,-0.5784,0.1595,0.7415,-0.319,-0.5902,0.1584,0.7346,-0.3306,-0.5924,0.1582,0.7312,-0.3429,-0.5897,0.1581,0.7292,-0.3548,-0.5852,0.1584,0.7263,-0.3655,-0.5822,0.159,0.7257,-0.3745,-0.5772,0.1597,0.7274,-0.3823,-0.5698,0.1605,0.7245,-0.3896,-0.5686,0.1619,0.7103,-0.3967,-0.5815,0.1641,0.6756,-0.4035,-0.617,0.1679,0.6264,-0.408,-0.6642,0.1736,0.5793,-0.4095,-0.7048,0.1799,0.5507,-0.4101,-0.727,0.1852,0.5422,-0.4098,-0.7336,0.1883,0.5454,-0.4087,-0.7318,0.1902,0.5606,-0.4098,-0.7196,0.1912,0.5878,-0.4154,-0.6942,0.1918,0.642,-0.4301,-0.6347,0.1924,0.7112,-0.4458,-0.5436,0.1947,0.7627,-0.4527,-0.4619,0.1985,0.7792,-0.451,-0.4353,0.2004,0.7435,-0.4375,-0.5058,0.1974,0.6578,-0.4054,-0.6349,0.1949,0.5597,-0.3645,-0.7442,0.1967,0.5138,-0.3462,-0.7849,0.1982,0.5653,-0.3733,-0.7356,0.1948,0.6694,-0.4215,-0.6117,0.1921,0.7566,-0.4593,-0.4653,0.1942,0.7901,-0.4814,-0.3794,0.1958,0.7671,-0.5034,-0.3977,0.1886,0.7006,-0.5267,-0.4814,0.1769,0.6108,-0.5391,-0.5799,0.168,0.5511,-0.5417,-0.6347,0.1646,0.5607,-0.5419,-0.6261,0.1659,0.6072,-0.5378,-0.5848,0.1704,0.6573,-0.5301,-0.5356,0.1761,0.6875,-0.5237,-0.5031,0.1795,0.697,-0.5206,-0.4931,0.1792,0.6986,-0.5188,-0.4928,0.177,0.6954,-0.5191,-0.4969,0.1733,0.6903,-0.5227,-0.5003,0.1685,0.6825,-0.5316,-0.5016,0.1625,0.6697,-0.5457,-0.5037,0.1551,0.6534,-0.5621,-0.507,0.1472,0.6357,-0.5774,-0.5124,0.1397,0.6165,-0.5914,-0.5198,0.1317,0.5937,-0.6059,-0.5295,0.1233,0.5682,-0.6187,-0.5426,0.1159,0.5427,-0.6259,-0.5601,0.1112,0.5209,-0.6228,-0.5837,0.1103,0.5032,-0.6115,-0.6107,0.1123,0.4877,-0.5986,-0.6355,0.115,0.4718,-0.5899,-0.6553,0.1163,0.4513,-0.5872,-0.6719,0.1159,0.4283,-0.5873,-0.6867,0.115,0.4088,-0.5881,-0.6979,0.113,0.3992,-0.5877,-0.7037,0.1095,0.4071,-0.5892,-0.698,0.1038,0.4296,-0.5926,-0.6814,0.0964,0.4576,-0.5909,-0.6643,0.0885,0.4788,-0.5752,-0.6633,0.0812,0.483,-0.5361,-0.6923,0.0756,0.4741,-0.4735,-0.7423,0.0712,0.4579,-0.3896,-0.7991,0.0665,0.4422,-0.2815,-0.8516,0.0598,0.4038,-0.1273,-0.906,0.0505,0.3101,0.1254,-0.9424,0.041,0.1731,0.4977,-0.8499,0.0355,0.0906,0.8259,-0.5565,0.0374,0.128,0.9681,-0.2156,0.0469,0.1952,0.9803,0.031,0.0624,0.2432,0.955,0.1696,0.081,0.2652,0.9341,0.2391,0.0994,0.2764,0.9232,0.267,0.1168,0.2876,0.9171,0.2762,0.1338,0.2944,0.913,0.2824,0.1499,0.2939,0.9091,0.2951,0.1649,0.2836,0.904,0.32,0.1789,0.2681,0.8979,0.3492,0.1922,0.2548,0.8923,0.3727,0.2043,0.2495,0.8893,0.3833,0.2145,0.2581,0.8892,0.3778,0.2237,0.2744,0.8904,0.3632,0.2319,0.2873,0.8926,0.3474,0.2372,0.2871,0.8966,0.3372,0.2377,0.2637,0.9046,0.335,0.2322,0.222,0.9154,0.3357,0.2223,0.1756,0.9253,0.336,0.2097,0.1428,0.9321,0.3327,0.1956,0.1349,0.9344,0.3297,0.1797,0.1444,0.9337,0.3275,0.1613,0.1648,0.9346,0.3153,0.1405,0.1862,0.9438,0.2731,0.1176,0.197,0.9676,0.1579,0.0919,0.1926,0.9752,-0.1093,0.0668,0.1526,0.7931,-0.5897,0.0517,0.0922,0.3231,-0.9419,0.0553,0.0721,-0.0546,-0.9959,0.0715,0.0758,-0.2702,-0.9598,0.0931,0.0889,-0.3961,-0.9139,0.1171,0.1031,-0.4764,-0.8732,0.1429,0.112,-0.5325,-0.839,0.1703,0.1204,-0.5735,-0.8103,0.1987,0.1365,-0.6035,-0.7856,0.2273,0.1649,-0.625,-0.763,0.2555,0.2084,-0.6404,-0.7392,0.2841,0.2578,-0.6513,-0.7137,0.3134,0.3029,-0.6583,-0.6891,0.3428,0.3377,-0.6625,-0.6686,0.3708,0.3652,-0.6639,-0.6526,0.3981,0.3897,-0.6633,-0.6389,0.4248,0.4103,-0.6628,-0.6264,0.4489,0.4268,-0.6637,-0.6143,0.4679,0.4407,-0.6665,-0.6013,0.4808,0.4534,-0.6699,-0.588,0.4888,0.4644,-0.6727,-0.576,0.4938,0.4731,-0.6741,-0.5673,0.4972,0.4785,-0.6738,-0.5631,0.4994,0.4814,-0.6725,-0.5621,0.4994,0.4844,-0.6702,-0.5623,0.4972,0.4897,-0.667,-0.5615,0.4925,0.4979,-0.6622,-0.5601,0.4853,0.5077,-0.6557,-0.5588,0.4758,0.5198,-0.6487,-0.5559,0.4637,0.5345,-0.6424,-0.5493,0.4491,0.5531,-0.6383,-0.5354,0.4305,0.5758,-0.6353,-0.5146,0.4087,0.6011,-0.6304,-0.4912,0.3862,0.6275,-0.6196,-0.4715,0.3656,0.6547,-0.6,-0.4597,0.3478,0.6834,-0.5725,-0.4529,0.3315,0.7132,-0.5394,-0.4477,0.3156,0.7438,-0.5034,-0.4397,0.2991,0.7759,-0.4653,-0.4259,0.2824,0.8093,-0.4225,-0.4082,0.2659,0.8432,-0.3711,-0.389,0.2486,0.8773,-0.3051,-0.3705,0.2291,0.909,-0.2114,-0.3592,0.2047,0.9342,-0.0769,-0.3483,0.1781,0.9441,0.0951,-0.3156,0.1569,0.934,0.2631,-0.2417,0.1474,0.9182,0.3737,-0.1311,0.1504,0.9019,0.4317,-0.0159,0.1614,0.8836,0.4617,0.0777,0.1772,0.8611,0.4887,0.1404,0.1942,0.8362,0.5191,0.1768,0.214,0.8161,0.5438,0.1956,0.2365,0.8018,0.5618,0.2037,0.2562,0.793,0.5729,0.2071,0.2679,0.7933,0.5749,0.2005,0.2683,0.8003,0.5705,0.1845,0.2609,0.8054,0.5669,0.173,0.2501,0.799,0.5727,0.1835,0.2403,0.7689,0.5944,0.2356,0.2331,0.7159,0.6221,0.317,0.2276,0.6542,0.643,0.3982,0.2234,0.6068,0.6529,0.4533,0.2172,0.5886,0.6575,0.4704,0.2052,0.59,0.6611,0.4635,0.1887,0.5998,0.6616,0.45,0.1713,0.6033,0.6549,0.4551,0.1564,0.5901,0.634,0.4999,0.1458,0.5663,0.5961,0.5691,0.1383,0.5411,0.5463,0.6393,0.1314,0.5279,0.4927,0.6918,0.1218,0.5321,0.4383,0.7244,0.1074,0.5533,0.3699,0.7464,0.0902,0.6042,0.2596,0.7533,0.0721,0.6949,0.0537,0.7171,0.0564,0.7971,-0.2992,0.5245,0.0478,0.7556,-0.6379,0.1489,0.0519,0.6048,-0.7837,-0.1413,0.0667,0.4672,-0.8361,-0.2875,0.0846,0.3518,-0.8667,-0.3536,0.102,0.2571,-0.8864,-0.385,0.1193,0.1844,-0.8962,-0.4036,0.1366,0.1343,-0.897,-0.4211,0.154,0.0972,-0.8924,-0.4407,0.1715,0.0677,-0.8859,-0.4589,0.1888,0.0506,-0.8791,-0.474,0.2053,0.0493,-0.8731,-0.485,0.2203,0.0699,-0.8679,-0.4919,0.2335,0.1038,-0.8622,-0.4958,0.2454,0.1351,-0.8565,-0.4981,0.2568,0.1506,-0.8523,-0.5009,0.2678,0.1437,-0.8513,-0.5046,0.2782,0.1253,-0.8519,-0.5085,0.288,0.1085,-0.8514,-0.5132,0.2973,0.1049,-0.8481,-0.5193,0.3061,0.1217,-0.8402,-0.5285,0.315,0.1494,-0.8288,-0.5392,0.3241,0.1753,-0.8182,-0.5476,0.3324,0.1884,-0.8127,-0.5514,0.3381,0.1833,-0.8164,-0.5476,0.3398,0.1676,-0.8257,-0.5386,0.3387,0.1501,-0.834,-0.531,0.3369,0.1402,-0.8351,-0.532,0.3366,0.1407,-0.8246,-0.5479,0.3386,0.1463,-0.8066,-0.5727,0.3421,0.1552,-0.7878,-0.596,0.3456,0.166,-0.7756,-0.609,0.3475,0.1822,-0.7734,-0.6071,0.3472,0.2034,-0.7766,-0.5962,0.3456,0.2227,-0.7813,-0.5831,0.3428,0.2326,-0.7839,-0.5756,0.3387,0.2263,-0.7845,-0.5773,0.3322,0.2082,-0.7847,-0.5839,0.3238,0.1894,-0.7841,-0.591,0.315,0.1822,-0.7829,-0.5948,0.3074,0.1935,-0.7829,-0.5913,0.3006,0.2166,-0.783,-0.5831,0.2942,0.2447,-0.7797,-0.5764,0.2891,0.27,-0.7698,-0.5783,0.2864,0.2916,-0.7503,-0.5933,0.2873,0.312,-0.7235,-0.6158,0.2915,0.3292,-0.6955,-0.6387,0.2965,0.3422,-0.6719,-0.6568,0.2993,0.3486,-0.6537,-0.6716,0.2988,0.3501,-0.638,-0.6858,0.2963,0.3529,-0.6237,-0.6975,0.293,0.3631,-0.6099,-0.7044,0.2903,0.3858,-0.5961,-0.7042,0.2894,0.4164,-0.5825,-0.6981,0.2896,0.4467,-0.5701,-0.6895,0.2888,0.4699,-0.5602,-0.6821,0.2847,0.4842,-0.5543,-0.677,0.2754,0.4939,-0.5517,-0.6721,0.2623,0.5018,-0.5509,-0.6669,0.2482,0.5107,-0.5494,-0.6613,0.236,0.5214,-0.5468,-0.655,0.2255,0.5323,-0.5443,-0.6483,0.2156,0.5432,-0.5415,-0.6417,0.2072,0.5538,-0.5376,-0.6358,0.2016,0.5668,-0.5319,-0.6292,0.1999,0.5805,-0.5251,-0.6224,0.2015,0.5889,-0.5188,-0.6197,0.2037,0.5869,-0.5146,-0.6251,0.2039,0.5672,-0.5121,-0.645,0.2017,0.5331,-0.5097,-0.6753,0.1987,0.4958,-0.5081,-0.7042,0.1952,0.4689,-0.5098,-0.7213,0.1909,0.4582,-0.5196,-0.7212,0.1845,0.4568,-0.5367,-0.7094,0.1763,0.4603,-0.5546,-0.6933,0.1685,0.4639,-0.565,-0.6823,0.1632,0.4691,-0.5618,-0.6814,0.1617,0.4777,-0.5498,-0.6852,0.1627,0.4849,-0.5366,-0.6906,0.1637,0.4868,-0.5295,-0.6948,0.1623,0.4785,-0.5317,-0.6989,0.1571,0.462,-0.5396,-0.7039,0.1498,0.445,-0.5494,-0.7072,0.1418,0.4376,-0.5566,-0.7062,0.1344,0.4484,-0.5586,-0.6978,0.1277,0.4728,-0.5572,-0.6826,0.1211,0.5016,-0.5543,-0.6642,0.1149,0.524,-0.5528,-0.648,0.1094,0.5353,-0.5554,-0.6363,0.1047,0.5405,-0.5608,-0.6272,0.1006,0.5433,-0.5658,-0.6203,0.0966,0.5481,-0.567,-0.615,0.0922,0.5592,-0.5604,-0.6109,0.0869,0.5742,-0.5473,-0.6088,0.0812,0.5865,-0.533,-0.6099,0.0756,0.5872,-0.525,-0.616,0.0707,0.5674,-0.5309,-0.6295,0.0664,0.5287,-0.5464,-0.6496,0.0627,0.4799,-0.5623,-0.6734,0.0596,0.434,-0.5686,-0.6988,0.0573,0.3961,-0.5576,-0.7295,0.0557,0.3613,-0.5348,-0.7639,0.0548,0.3306,-0.5107,-0.7937,0.0544,0.3048,-0.4973,-0.8123,0.0543,0.2883,-0.5025,-0.8151,0.0544,0.2806,-0.5193,-0.8072,0.0548,0.2737,-0.5373,-0.7977,0.0553,0.2604,-0.5467,-0.7958,0.0556,0.2413,-0.5445,-0.8033,0.0559,0.2198,-0.536,-0.8151,0.0562,0.1908,-0.5243,-0.8299,0.0562,0.1481,-0.5119,-0.8462,0.0553,0.0824,-0.499,-0.8627,0.0534,-0.007,-0.4808,-0.8768,0.0511,-0.1116,-0.4517,-0.8852,0.0489,-0.2165,-0.4082,-0.8868,0.0475,-0.3238,-0.3504,-0.8788,0.0467,-0.4325,-0.2793,-0.8573,0.0467,-0.5196,-0.1998,-0.8307,0.0474,-0.5679,-0.1191,-0.8144,0.0486,-0.5747,-0.0397,-0.8174,0.0504,-0.5532,0.0367,-0.8323,0.0528,-0.5135,0.1092,-0.8511,0.055,-0.4629,0.1804,-0.8679,0.0563,-0.3988,0.2561,-0.8806,0.0564,-0.314,0.3363,-0.8879,0.0561,-0.2087,0.4145,-0.8858,0.0562,-0.0899,0.4804,-0.8724,0.0575,0.0368,0.5256,-0.8499,0.0603,0.1631,0.5522,-0.8176,0.0645,0.2775,0.5676,-0.7752,0.0698,0.3749,0.5794,-0.7237,0.0758,0.4588,0.5882,-0.6659,0.0826,0.5303,0.5924,-0.6066,0.0903,0.5868,0.5958,-0.5484,0.0984,0.6288,0.6019,-0.4922,0.1062,0.6649,0.6078,-0.4342,0.1141,0.695,0.6131,-0.3757,0.1224,0.7119,0.6241,-0.322,0.1296,0.711,0.6472,-0.2751,0.134,0.6863,0.6897,-0.2309,0.1346,0.6403,0.7459,-0.1835,0.1329,0.5826,0.8019,-0.1326,0.131,0.5295,0.8444,-0.0818,0.1306,0.4937,0.869,-0.033,0.132,0.4664,0.8845,0.0143,0.1339,0.4348,0.8987,0.058,0.1355,0.3852,0.9177,0.0973,0.1361,0.3065,0.9427,0.132,0.1351,0.2041,0.9653,0.163,0.1338,0.0939,0.9772,0.1906,0.1343,-0.0022,0.9766,0.2151,0.1375,-0.0765,0.9682,0.2382,0.1433,-0.1369,0.9562,0.2586,0.1507,-0.1851,0.9437,0.274,0.1588,-0.2242,0.9326,0.2828,0.1665,-0.2557,0.9241,0.2839,0.1738,-0.2803,0.9181,0.2801,0.1807,-0.2995,0.9135,0.2753,0.1872,-0.3146,0.9092,0.2728,0.1931,-0.3269,0.9049,0.2728,0.1982,-0.3361,0.9012,0.2736,0.2026,-0.3418,0.8985,0.2753,0.2065,-0.3434,0.8971,0.278,0.21,-0.3384,0.8972,0.2836,0.2128,-0.3283,0.8985,0.2912,0.2151,-0.3181,0.9003,0.2971,0.2173,-0.3128,0.902,0.2975,0.2202,-0.316,0.9033,0.29,0.2241,-0.3239,0.9045,0.2776,0.2286,-0.3303,0.9061,0.2645,0.2331,-0.3299,0.909,0.2546,0.2368,-0.319,0.9145,0.2489,0.2392,-0.3016,0.9214,0.2449,0.2409,-0.2838,0.928,0.2414,0.2424,-0.2716,0.9327,0.2374,0.2442,-0.268,0.9352,0.2314,0.2465,-0.2692,0.9366,0.2245,0.249,-0.2711,0.9372,0.2194,0.2513,-0.2703,0.9377,0.2185,0.2529,-0.2664,0.9375,0.224,0.2537,-0.2611,0.9365,0.2339,0.254,-0.2537,0.9358,0.2446,0.2538,-0.2432,0.9364,0.2529,0.2528,-0.2248,0.9395,0.2584,0.2505,-0.1997,0.9439,0.2628,0.2473,-0.1774,0.9477,0.2654,0.2442,-0.1678,0.9494,0.2656,0.242,-0.1773,0.9489,0.2611,0.2409,-0.1997,0.9467,0.2527,0.2404,-0.2265,0.9427,0.2448,0.2405,-0.2496,0.9377,0.2419,0.2407,-0.2682,0.9314,0.2461,0.2407,-0.2861,0.9237,0.2548,0.2409,-0.3021,0.9156,0.2652,0.2412,-0.3152,0.9083,0.2748,0.2417,-0.3215,0.9031,0.2846,0.242,-0.3228,0.8992,0.2954,0.2423,-0.3266,0.8948,0.3045,0.2429,-0.3402,0.8881,0.3092,0.2441,-0.3679,0.8781,0.3058,0.2464,-0.4038,0.8654,0.2966,0.2496,-0.4406,0.8503,0.2878,0.2537,-0.472,0.8341,0.2854,0.2582,-0.4967,0.817,0.2927,0.2632,-0.5182,0.7988,0.3055,0.2688,-0.5377,0.7806,0.3188,0.2743,-0.5564,0.7632,0.3285,0.2792,-0.5755,0.746,0.3351,0.2833,-0.5943,0.7286,0.3406,0.2869,-0.6117,0.7129,0.343,0.2898,-0.6269,0.7008,0.3404,0.2916,-0.6401,0.6933,0.331,0.2918,-0.6521,0.6891,0.3162,0.2906,-0.6627,0.6866,0.299,0.2889,-0.6719,0.6846,0.2825,0.2871,-0.6813,0.6823,0.2651,0.2854,-0.6904,0.6804,0.2457,0.2835,-0.6961,0.6804,0.229,0.2813,-0.6957,0.684,0.2196,0.2785,-0.6852,0.6936,0.2222,0.2745,-0.6665,0.708,0.2336,0.2697,-0.6456,0.7228,0.2466,0.2654,-0.6302,0.7339,0.2537,0.2629,-0.6248,0.7393,0.2512,0.2628,-0.6252,0.7415,0.2437,0.2644,-0.6262,0.7431,0.2358,0.2662,-0.6229,0.7471,0.232,0.2667,-0.6123,0.7551,0.2343,0.2651,-0.5973,0.7653,0.2399,0.2625,-0.5817,0.7752,0.2464,0.2599,-0.5702,0.7823,0.2508,0.2584,-0.5652,0.7851,0.2531,0.2583,-0.5643,0.7854,0.2545,0.2591,-0.5645,0.7852,0.2545,0.2599,-0.563,0.787,0.2525,0.26,-0.5592,0.7912,0.2478,0.2591,-0.5544,0.7966,0.2408,0.2577,-0.5487,0.8029,0.2328,0.2559,-0.5419,0.8098,0.2249,0.2539,-0.5342,0.8173,0.2161,0.2518,-0.5254,0.8255,0.206,0.2494,-0.5151,0.8341,0.1975,0.2469,-0.5029,0.8424,0.1936,0.2444,-0.487,0.8509,0.1971,0.2418,-0.4679,0.8595,0.2059,0.2391,-0.4487,0.8672,0.2158,0.2366,-0.4331,0.8734,0.2226,0.2344,-0.4222,0.8778,0.2264,0.2324,-0.4144,0.8808,0.2291,0.2306,-0.4091,0.8834,0.2287,0.2288,-0.4056,0.8863,0.2233,0.2271,-0.4075,0.8889,0.2093,0.2258,-0.4138,0.8907,0.1885,0.2248,-0.4174,0.8933,0.1671,0.2236,-0.4113,0.8989,0.1511,0.2214,-0.3906,0.9089,0.1458,0.2176,-0.3588,0.9218,0.1467,0.2129,-0.3218,0.9355,0.1459,0.2082,-0.2871,0.9484,0.1345,0.2042,-0.2631,0.959,0.1051,0.2013,-0.2443,0.9676,0.0633,0.1993,-0.2175,0.9758,0.0205,0.1974,-0.1688,0.9856,-0.0121,0.1951,-0.0792,0.9964,-0.0302,0.1921,0.041,0.9984,-0.0393,0.1907,0.1572,0.9866,-0.0434,0.1922,0.2356,0.9707,-0.0472,0.1955,0.2618,0.9637,-0.0529,0.1986,0.2575,0.9645,-0.0579,0.201,0.2466,0.9672,-0.0608,0.2032,0.2519,0.9659,-0.06,0.2056,0.2835,0.9574,-0.0541,0.2085,0.3264,0.9442,-0.0446,0.2119,0.366,0.93,-0.034,0.2157,0.39,0.9205,-0.0249,0.2189,0.395,0.9185,-0.0183,0.2211,0.3887,0.9213,-0.0125,0.2226,0.377,0.9262,-0.0063,0.2236,0.3652,0.9309,0.0017,0.2244,0.3505,0.9365,0.0126,0.2248,0.3311,0.9433,0.0254,0.2249,0.3148,0.9484,0.0385,0.225,0.3099,0.9495,0.0499,0.2254,0.3208,0.9453,0.0598,0.2261,0.3423,0.9371,0.0688,0.227,0.3675,0.9269,0.076,0.2284,0.3901,0.9173,0.0801,0.2301,0.4115,0.9078,0.0807,0.2328,0.4337,0.8976,0.0783,0.2362,0.4519,0.889,0.0741,0.2393,0.4617,0.8844,0.069,0.241,0.4584,0.8868,0.0593,0.2405,0.4455,0.8941,0.0457,0.2385,0.432,0.9012,0.0353,0.2364,0.4277,0.9032,0.0358,0.2352,0.4377,0.8976,0.0516,0.2353,0.4557,0.8868,0.0776,0.2363,0.4745,0.8736,0.1079,0.2379,0.4881,0.862,0.1368,0.2392,0.4954,0.8522,0.1683,0.2403,0.4995,0.8421,0.2033,0.2415,0.5011,0.8335,0.2328,0.2423,0.5017,0.8286,0.2483,0.2421,0.5024,0.8298,0.2431,0.2399,0.5023,0.8355,0.2228,0.2363,0.4998,0.8431,0.1985,0.2325,0.4935,0.8504,0.1822,0.2296,0.4806,0.8586,0.1784,0.2279,0.4625,0.868,0.1806,0.2267,0.4449,0.8762,0.1854,0.2257,0.4337,0.8809,0.1893,0.2243,0.433,0.881,0.1909,0.2221,0.4389,0.8777,0.1922,0.2196,0.4463,0.8734,0.195,0.2168,0.4495,0.8704,0.2009,0.214,0.4488,0.8678,0.2136,0.2117,0.4463,0.8645,0.2311,0.2097,0.4393,0.8636,0.2474,0.207,0.4243,0.8686,0.2559,0.2024,0.3948,0.8839,0.2506,0.1949,0.3505,0.9068,0.2341,0.1857,0.2995,0.9296,0.2148,0.1769,0.2552,0.9451,0.2044,0.1699,0.2257,0.9509,0.2116,0.1648,0.2053,0.9512,0.2305,0.1607,0.1892,0.949,0.2524,0.1568,0.1711,0.9482,0.2677,0.1522,0.147,0.9504,0.2742,0.1466,0.1201,0.9536,0.2762,0.1404,0.0954,0.957,0.2739,0.1341,0.0793,0.9602,0.2679,0.1279,0.0697,0.9659,0.2494,0.122,0.0656,0.9735,0.219,0.1162,0.0782,0.9779,0.1939,0.1102,0.1215,0.9732,0.1954,0.1039,0.2234,0.942,0.2504,0.0977,0.372,0.8628,0.3424,0.0944,0.5113,0.7479,0.4234,0.0948,0.6053,0.6487,0.4612,0.0955,0.6589,0.6013,0.452,0.0922,0.6979,0.5843,0.4143,0.086,0.7397,0.5626,0.3693,0.0802]);
Group704ZZZ.children[7] = OrientationInterpolator712;

let OrientationInterpolator713 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator713.DEF = "Interpolator5_skullbase";
OrientationInterpolator713.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator713.keyValue = new X3D.MFRotation([0,1,0,0,0.3372,-0.8519,0.4007,0.0846,0.3464,-0.8445,0.4085,0.1745,0.361,-0.8332,0.419,0.2561,0.3804,-0.8178,0.4319,0.3156,0.4065,-0.7945,0.4512,0.3451,0.4376,-0.7638,0.4745,0.3533,0.47,-0.7316,0.4938,0.3516,0.4985,-0.7077,0.5006,0.3508,0.5227,-0.6978,0.4897,0.3509,0.5469,-0.6949,0.4668,0.3472,0.5698,-0.6943,0.4396,0.3422,0.5898,-0.6917,0.4168,0.338,0.6073,-0.6852,0.402,0.3354,0.623,-0.6778,0.3905,0.3329,0.6357,-0.672,0.3798,0.3295,0.6444,-0.6707,0.3673,0.3242,0.646,-0.6781,0.3505,0.3158,0.6414,-0.6922,0.3308,0.305,0.6364,-0.7058,0.3111,0.2942,0.638,-0.7109,0.2958,0.2854,0.6519,-0.702,0.287,0.2795,0.6732,-0.6833,0.2827,0.2754,0.6945,-0.6622,0.2816,0.2719,0.7085,-0.6466,0.2826,0.2677,0.7134,-0.6385,0.2887,0.2624,0.7127,-0.6341,0.2999,0.2566,0.7081,-0.6338,0.3114,0.2502,0.7017,-0.6378,0.3175,0.2433,0.6935,-0.6488,0.3131,0.2358,0.6819,-0.6664,0.3013,0.2278,0.667,-0.6866,0.2893,0.2191,0.6492,-0.705,0.2855,0.2096,0.6244,-0.7227,0.2965,0.1979,0.5904,-0.7414,0.319,0.1849,0.5535,-0.7574,0.3465,0.1728,0.525,-0.7667,0.3696,0.1637,0.5144,-0.7664,0.3847,0.158,0.5178,-0.7586,0.3956,0.1545,0.5294,-0.7472,0.4018,0.152,0.543,-0.7365,0.4033,0.1496,0.5641,-0.7226,0.3994,0.1478,0.5934,-0.7044,0.3895,0.147,0.6176,-0.6916,0.3746,0.1457,0.6249,-0.695,0.3556,0.142,0.6027,-0.7286,0.3253,0.1342,0.5518,-0.7859,0.2791,0.1243,0.4853,-0.8443,0.2274,0.1154,0.4336,-0.8806,0.1912,0.1093,0.4173,-0.8889,0.1889,0.1053,0.424,-0.8806,0.2116,0.1023,0.4445,-0.8617,0.2448,0.1005,0.4681,-0.8406,0.2723,0.0996,0.4969,-0.8173,0.2918,0.0997,0.5329,-0.7875,0.3096,0.101,0.5672,-0.7576,0.323,0.1035,0.5925,-0.7346,0.3305,0.107,0.606,-0.7243,0.3289,0.1117,0.6129,-0.7219,0.3213,0.1176,0.6186,-0.7194,0.316,0.1239,0.628,-0.7098,0.319,0.1299,0.6428,-0.691,0.3305,0.1357,0.6592,-0.6676,0.346,0.1417,0.6741,-0.6424,0.3647,0.1476,0.6848,-0.6182,0.3858,0.1531,0.6951,-0.5913,0.4088,0.1588,0.7047,-0.5618,0.4334,0.1646,0.707,-0.5367,0.4606,0.1695,0.6965,-0.522,0.4923,0.1724,0.6666,-0.5207,0.5334,0.1723,0.6193,-0.5271,0.5819,0.1705,0.5642,-0.5346,0.6292,0.1692,0.5158,-0.538,0.6667,0.1701,0.48,-0.5365,0.6941,0.1737,0.4509,-0.5337,0.7155,0.1788,0.4279,-0.5321,0.7306,0.1838,0.4092,-0.5338,0.74,0.1871,0.3968,-0.5397,0.7425,0.1879,0.3902,-0.5488,0.7393,0.187,0.383,-0.5605,0.7343,0.1854,0.3693,-0.574,0.7308,0.1841,0.3441,-0.5905,0.73,0.1832,0.3113,-0.6093,0.7293,0.1822,0.2783,-0.6275,0.7272,0.1818,0.2533,-0.6424,0.7233,0.1824,0.2386,-0.657,0.7151,0.1829,0.2301,-0.6716,0.7043,0.1836,0.2269,-0.6801,0.6972,0.1859,0.2284,-0.6763,0.7003,0.1914,0.2384,-0.654,0.718,0.2026,0.2536,-0.6208,0.7418,0.2183,0.2655,-0.5901,0.7624,0.2342,0.2685,-0.5719,0.7751,0.2459,0.2654,-0.5634,0.7824,0.2523,0.2587,-0.5596,0.7873,0.2557,0.244,-0.5648,0.7884,0.2562,0.216,-0.5831,0.7832,0.2543,0.1577,-0.629,0.7612,0.2492,0.0715,-0.6923,0.7181,0.2432,-0.0125,-0.7426,0.6696,0.239,-0.0588,-0.7603,0.6469,0.2353,-0.0386,-0.7299,0.6824,0.2282,0.0289,-0.6571,0.7532,0.2204,0.1002,-0.5735,0.8131,0.2169,0.1283,-0.5363,0.8342,0.2161,0.0882,-0.5851,0.8062,0.2169,0.0082,-0.6756,0.7372,0.2219,-0.0726,-0.7534,0.6536,0.2309,-0.122,-0.7927,0.5973,0.2375,-0.1367,-0.7989,0.5857,0.2351,-0.1341,-0.7895,0.599,0.2271,-0.1202,-0.7729,0.6231,0.2189,-0.1027,-0.7602,0.6415,0.2156,-0.0797,-0.7551,0.6508,0.2204,-0.0504,-0.7513,0.6581,0.2301,-0.0242,-0.7482,0.663,0.2401,-0.0073,-0.7459,0.666,0.2459,-0.0026,-0.7455,0.6666,0.2454,-0.0053,-0.7467,0.6652,0.2413,-0.0093,-0.748,0.6637,0.2359,-0.0082,-0.7477,0.664,0.2314,0.0017,-0.744,0.6682,0.2289,0.0166,-0.738,0.6746,0.2271,0.0316,-0.7325,0.68,0.2245,0.0422,-0.7308,0.6813,0.2198,0.0462,-0.7361,0.6753,0.2112,0.0462,-0.7468,0.6634,0.1998,0.0454,-0.7585,0.6501,0.1888,0.0473,-0.7655,0.6418,0.1811,0.0532,-0.7633,0.6438,0.1783,0.0609,-0.7554,0.6525,0.1787,0.0687,-0.7467,0.6616,0.1797,0.0754,-0.7421,0.666,0.1791,0.0895,-0.7411,0.6654,0.1773,0.109,-0.7414,0.6621,0.1753,0.1173,-0.7467,0.6547,0.171,0.0961,-0.7611,0.6415,0.1626,0.0174,-0.7933,0.6085,0.1485,-0.1244,-0.8312,0.5419,0.1325,-0.3026,-0.8414,0.4478,0.1195,-0.4626,-0.8082,0.3646,0.1104,-0.58,-0.7439,0.3321,0.1028,-0.6785,-0.6522,0.3381,0.0955,-0.7705,-0.5256,0.3607,0.0884,-0.8623,-0.3499,0.366,0.0826,-0.9306,-0.1175,0.3467,0.0792,-0.9388,0.1514,0.3095,0.08,-0.882,0.4055,0.2401,0.0864,-0.7881,0.5987,0.1429,0.0987,-0.6868,0.7261,0.032,0.117,-0.5927,0.8027,-0.0666,0.1401,-0.5132,0.8467,-0.1403,0.166,-0.4479,0.8739,-0.1891,0.192,-0.3972,0.8902,-0.223,0.2176,-0.3556,0.9007,-0.2496,0.2433,-0.3141,0.9105,-0.2688,0.2685,-0.2663,0.9221,-0.2806,0.2932,-0.2046,0.9352,-0.289,0.3191,-0.1376,0.9456,-0.295,0.3467,-0.0798,0.9521,-0.2951,0.373,-0.0407,0.9571,-0.2869,0.3943,-0.022,0.9631,-0.2682,0.4102,-0.0141,0.9702,-0.2421,0.422,-0.0093,0.9771,-0.2126,0.4283,0.0001,0.9831,-0.183,0.4275,0.0195,0.9885,-0.1497,0.4186,0.0463,0.993,-0.1084,0.4033,0.0756,0.9952,-0.0618,0.3836,0.1009,0.9948,-0.0141,0.361,0.118,0.9926,0.0301,0.3338,0.1316,0.9883,0.0776,0.3017,0.148,0.9787,0.1421,0.2674,0.1764,0.954,0.2423,0.2349,0.2223,0.8891,0.4001,0.208,0.2781,0.7506,0.5994,0.1912,0.3279,0.5388,0.776,0.1888,0.3615,0.3092,0.8796,0.1981,0.3833,0.1065,0.9175,0.2139,0.3965,-0.0627,0.9159,0.2348,0.4017,-0.2014,0.8933,0.2597,0.3991,-0.3153,0.861,0.2886,0.3932,-0.4094,0.8233,0.3213,0.3862,-0.486,0.784,0.3564,0.376,-0.5479,0.7473,0.3927,0.3613,-0.598,0.7154,0.4287,0.343,-0.6419,0.6858,0.4637,0.3229,-0.6809,0.6573,0.498,0.3014,-0.713,0.6331,0.532,0.2791,-0.7366,0.6161,0.5656,0.2538,-0.7523,0.608,0.6,0.2274,-0.7633,0.6047,0.6347,0.2045,-0.7721,0.6017,0.6664,0.1885,-0.7807,0.5957,0.6917,0.1776,-0.7906,0.586,0.7089,0.169,-0.8006,0.5749,0.72,0.1632,-0.8092,0.5644,0.7271,0.1612,-0.815,0.5566,0.7322,0.1645,-0.8174,0.552,0.7358,0.1721,-0.8175,0.5496,0.7369,0.181,-0.8162,0.5487,0.7347,0.1885,-0.8143,0.5489,0.7285,0.195,-0.8116,0.5507,0.7179,0.202,-0.8075,0.5542,0.7034,0.2081,-0.8033,0.558,0.6852,0.2119,-0.8005,0.5607,0.6638,0.2122,-0.8013,0.5594,0.6374,0.2099,-0.8048,0.5553,0.6065,0.2069,-0.8065,0.5538,0.5743,0.2052,-0.8014,0.5619,0.5441,0.2045,-0.7847,0.5851,0.5173,0.203,-0.7575,0.6205,0.4929,0.2003,-0.7224,0.6618,0.4697,0.1969,-0.6836,0.7028,0.4462,0.1896,-0.6438,0.7413,0.4217,0.1787,-0.5985,0.781,0.3974,0.1712,-0.541,0.8234,0.3738,0.1759,-0.463,0.8687,0.3517,0.2059,-0.3484,0.9144,0.3311,0.2556,-0.1971,0.9465,0.3156,0.3011,-0.0357,0.9529,0.3085,0.3191,0.0993,0.9425,0.3082,0.3057,0.1872,0.9335,0.3115,0.2749,0.2435,0.9301,0.316,0.233,0.29,0.9282,0.3199,0.1842,0.3471,0.9196,0.3229,0.1174,0.4206,0.8996,0.323,0.0333,0.4977,0.8667,0.324,-0.0407,0.5672,0.8226,0.3323,-0.0772,0.6203,0.7805,0.3506,-0.0719,0.6597,0.7481,0.3821,-0.0475,0.6894,0.7228,0.4223,-0.0165,0.7103,0.7037,0.46,0.0165,0.7241,0.6895,0.4842,0.0601,0.7315,0.6791,0.4913,0.1175,0.7323,0.6708,0.4885,0.1801,0.7261,0.6635,0.4806,0.2376,0.7144,0.6582,0.4711,0.2881,0.6964,0.6573,0.4591,0.3385,0.6705,0.6602,0.4432,0.3897,0.6385,0.6636,0.4255,0.4417,0.6036,0.6638,0.4078,0.497,0.5685,0.6556,0.3887,0.556,0.5294,0.6408,0.3678,0.6126,0.4805,0.6275,0.3487,0.6585,0.4174,0.6262,0.3353,0.6865,0.341,0.6422,0.3296,0.6984,0.2565,0.6682,0.33,0.6975,0.1672,0.6968,0.3346,0.6882,0.0748,0.7217,0.3415,0.6674,-0.021,0.7444,0.3515,0.6354,-0.1156,0.7635,0.3661,0.6017,-0.2031,0.7725,0.3835,0.5747,-0.2808,0.7687,0.4009,0.5588,-0.3523,0.7507,0.4162,0.5478,-0.4194,0.7239,0.4306,0.5341,-0.4783,0.6971,0.4461,0.513,-0.5254,0.6788,0.4642,0.486,-0.5612,0.67,0.4851,0.4573,-0.5891,0.6662,0.5075,0.4274,-0.6102,0.6671,0.5304,0.3963,-0.6254,0.6722,0.5531,0.3598,-0.6339,0.6846,0.5761,0.3201,-0.6368,0.7014,0.6001,0.2853,-0.638,0.7153,0.6243,0.2623,-0.641,0.7213,0.6466,0.2537,-0.6465,0.7195,0.6667,0.2535,-0.6528,0.7139,0.6849,0.2557,-0.6594,0.7069,0.7001,0.2551,-0.6662,0.7007,0.711,0.2492,-0.6733,0.6961,0.7166,0.241,-0.6808,0.6917,0.7179,0.2337,-0.6889,0.6862,0.7164,0.2306,-0.6978,0.6781,0.7137,0.2333,-0.7087,0.6658,0.7104,0.2399,-0.721,0.6501,0.7058,0.2479,-0.7328,0.6337,0.6997,0.2552,-0.7422,0.6197,0.6913,0.2644,-0.7481,0.6086,0.679,0.2764,-0.7518,0.5987,0.6634,0.2856,-0.7552,0.59,0.6476,0.2857,-0.7605,0.5832,0.6341,0.2683,-0.7693,0.5798,0.6242,0.2378,-0.7797,0.5793,0.6166,0.2073,-0.7884,0.5792,0.61,0.1905,-0.7933,0.5782,0.602,0.1957,-0.7939,0.5757,0.5908,0.2154,-0.7914,0.5721,0.5778,0.2397,-0.787,0.5685,0.5653,0.2576,-0.7826,0.5667,0.5546,0.2652,-0.7787,0.5685,0.5464,0.2683,-0.7745,0.5729,0.5399,0.2689,-0.77,0.5786,0.5333,0.2695,-0.7657,0.584,0.5251,0.2698,-0.7617,0.589,0.5147,0.2689,-0.7579,0.5944,0.503,0.268,-0.7535,0.6003,0.4908,0.2686,-0.7479,0.607,0.4791,0.2742,-0.7403,0.6138,0.468,0.2834,-0.7311,0.6207,0.4571,0.2895,-0.7215,0.629,0.4466,0.285,-0.7131,0.6405,0.4369,0.26,-0.706,0.6587,0.429,0.2194,-0.6987,0.681,0.4234,0.1786,-0.691,0.7005,0.4182,0.1542,-0.6845,0.7125,0.4101,0.1572,-0.6822,0.714,0.3961,0.1798,-0.6835,0.7075,0.3782,0.2087,-0.6851,0.698,0.3602,0.227,-0.6837,0.6936,0.3454,0.2265,-0.677,0.7003,0.3343,0.2155,-0.6666,0.7136,0.3253,0.1994,-0.6558,0.7281,0.3181,0.1849,-0.6487,0.7382,0.312,0.17,-0.6483,0.7422,0.3075,0.1525,-0.6522,0.7426,0.3046,0.14,-0.6572,0.7406,0.3022,0.14,-0.6602,0.7379,0.2986,0.1608,-0.6593,0.7345,0.2933,0.1973,-0.6559,0.7286,0.2875,0.2373,-0.6524,0.7198,0.282,0.2674,-0.6524,0.7091,0.2769,0.2858,-0.6606,0.6942,0.2714,0.2986,-0.6746,0.6751,0.2658,0.3032,-0.6877,0.6597,0.2607,0.2974,-0.6931,0.6566,0.2569,0.2742,-0.6869,0.673,0.2551,0.2361,-0.672,0.7019,0.2552,0.1954,-0.6528,0.7319,0.2564,0.1649,-0.6351,0.7546,0.2569,0.1484,-0.6207,0.7699,0.2559,0.1393,-0.6068,0.7825,0.2541,0.1338,-0.5936,0.7936,0.2516,0.1279,-0.5808,0.8039,0.2485,0.1224,-0.5688,0.8133,0.2445,0.1189,-0.5574,0.8217,0.2394,0.1147,-0.546,0.8299,0.2345,0.1067,-0.5339,0.8388,0.2308,0.0916,-0.5223,0.8479,0.229,0.0718,-0.5111,0.8565,0.2286,0.0532,-0.4986,0.8652,0.2284,0.0413,-0.4832,0.8745,0.2274,0.0377,-0.4621,0.886,0.2249,0.0394,-0.4364,0.8989,0.2217,0.0457,-0.4102,0.9108,0.2187,0.0556,-0.3887,0.9197,0.217,0.0711,-0.3752,0.9242,0.2172,0.0918,-0.3667,0.9258,0.2185,0.1127,-0.3597,0.9262,0.2202,0.1291,-0.3507,0.9275,0.2212,0.1414,-0.3368,0.9309,0.2213,0.1517,-0.3203,0.9351,0.2212,0.1582,-0.306,0.9388,0.2206,0.1596,-0.2987,0.9409,0.2197,0.1534,-0.3025,0.9407,0.2181,0.1409,-0.3141,0.9389,0.216,0.1259,-0.3269,0.9366,0.2137,0.1124,-0.3343,0.9358,0.2115,0.102,-0.3343,0.9369,0.21,0.0925,-0.3305,0.9393,0.2087,0.0823,-0.3239,0.9425,0.2067,0.0697,-0.3155,0.9464,0.2029,0.0537,-0.3054,0.9507,0.1966,0.0347,-0.2923,0.9557,0.1886,0.012,-0.2746,0.9615,0.1802,-0.0144,-0.2509,0.9679,0.1725,-0.0392,-0.221,0.9745,0.1654,-0.0642,-0.1844,0.9808,0.1587,-0.1005,-0.1395,0.9851,0.1532,-0.1592,-0.0859,0.9835,0.1504,-0.2402,-0.0242,0.9704,0.1524,-0.3289,0.0389,0.9436,0.1591,-0.4165,0.0964,0.904,0.1688,-0.4996,0.1459,0.8539,0.1793,-0.5769,0.1891,0.7946,0.1901,-0.6467,0.2262,0.7284,0.2028,-0.7083,0.2554,0.6581,0.2182,-0.7613,0.2754,0.587,0.2372,-0.8069,0.2863,0.5167,0.2603,-0.8441,0.291,0.4503,0.2872,-0.8721,0.2928,0.3922,0.3165,-0.8916,0.2942,0.3443,0.3466,-0.9055,0.2951,0.3049,0.3777,-0.9159,0.2954,0.2717,0.4101,-0.9235,0.2962,0.2437,0.4419,-0.9288,0.2985,0.2196,0.4713,-0.933,0.301,0.1974,0.4996,-0.9362,0.3038,0.1769,0.5271,-0.9377,0.3089,0.1593,0.5503,-0.9368,0.3183,0.1449,0.5655,-0.9333,0.3335,0.1328,0.5709,-0.9276,0.3533,0.1216,0.5688,-0.9201,0.3756,0.1108,0.5617,-0.9118,0.3982,0.1001,0.5521,-0.9027,0.4208,0.0897,0.5402,-0.8918,0.4454,0.0791,0.5247,-0.8789,0.4722,0.0678,0.5067,-0.8633,0.5016,0.0553,0.4871,-0.8437,0.5351,0.0417,0.4637,-0.8187,0.5736,0.0265,0.4372,-0.7884,0.6151,0.0083,0.4126,-0.7552,0.6554,-0.014,0.3947,-0.7208,0.6919,-0.0413,0.3847,-0.6853,0.7247,-0.0719,0.38,-0.651,0.7522,-0.102,0.3794,-0.6201,0.774,-0.1283,0.3813,-0.5937,0.791,-0.1479,0.3854,-0.5724,0.8037,-0.1625,0.3921,-0.5566,0.8119,-0.1759,0.4003,-0.5464,0.8153,-0.1914,0.4092,-0.5429,0.813,-0.2102,0.4189,-0.5451,0.8062,-0.2299,0.4299,-0.5499,0.7973,-0.2488,0.4414,-0.5543,0.7887,-0.2657,0.4528,-0.5591,0.7803,-0.2802,0.4634,-0.5651,0.7712,-0.2932,0.4739,-0.5706,0.7622,-0.3058,0.4848,-0.574,0.7542,-0.3189,0.4969,-0.574,0.7477,-0.3338,0.5108,-0.572,0.7421,-0.3493,0.526,-0.57,0.7372,-0.3629,0.5413,-0.5701,0.7324,-0.3723,0.5555,-0.5733,0.7275,-0.3769,0.5686,-0.5784,0.7227,-0.3784,0.5811,-0.5835,0.7186,-0.3785,0.5925,-0.5869,0.7156,-0.3786,0.6027,-0.5891,0.7139,-0.3785,0.6119,-0.5906,0.7131,-0.3777,0.6202,-0.5909,0.7131,-0.3774,0.6266,-0.5892,0.7136,-0.3788,0.6303,-0.5849,0.715,-0.383,0.6307,-0.5783,0.7171,-0.3891,0.6285,-0.5709,0.7195,-0.3955,0.6245,-0.5642,0.7219,-0.4007,0.6199,-0.5596,0.7236,-0.404,0.6149,-0.5562,0.7249,-0.4064,0.6089,-0.5511,0.7276,-0.4086,0.6017,-0.5415,0.7332,-0.4112,0.5929,-0.5249,0.7434,-0.4144,0.582,-0.5024,0.757,-0.4177,0.5697,-0.4771,0.7715,-0.421,0.5573,-0.4526,0.7842,-0.4245,0.5456,-0.4295,0.7952,-0.428,0.5338,-0.4059,0.8057,-0.4313,0.5218,-0.3828,0.8147,-0.4356,0.511,-0.3614,0.8211,-0.4418,0.5028,-0.3446,0.8232,-0.4512,0.4981,-0.3317,0.822,-0.463,0.4959,-0.3185,0.82,-0.4755,0.4945,-0.3006,0.8201,-0.4868,0.4922,-0.2751,0.8242,-0.4951,0.4882,-0.2443,0.8301,-0.5013,0.4837,-0.2121,0.8342,-0.509,0.4803,-0.1829,0.8332,-0.5218,0.4792,-0.1587,0.825,-0.5423,0.4812,-0.1375,0.8118,-0.5676,0.4856,-0.1177,0.7965,-0.5931,0.4907,-0.0976,0.7823,-0.6152,0.4945,-0.0738,0.7697,-0.6342,0.496,-0.048,0.7569,-0.6518,0.4964,-0.0258,0.7444,-0.6672,0.4966,-0.0129,0.7332,-0.6799,0.4972,-0.0123,0.7235,-0.6902,0.4983,-0.0204,0.7154,-0.6985,0.4994,-0.033,0.7088,-0.7046,0.5001,-0.0459,0.7042,-0.7085,0.5,-0.0587,0.7022,-0.7096,0.4982,-0.0734,0.7024,-0.708,0.4953,-0.0899,0.7033,-0.7052,0.4926,-0.1078,0.7035,-0.7025,0.4915,-0.129,0.7016,-0.7008,0.4929,-0.1527,0.6985,-0.6991,0.4962,-0.1746,0.6966,-0.6959,0.4998,-0.191,0.698,-0.6902,0.502,-0.1995,0.7048,-0.6808,0.502,-0.2027,0.7154,-0.6687,0.5007,-0.2051,0.7267,-0.6556,0.4991,-0.2107,0.7356,-0.6438,0.4981,-0.2218,0.7414,-0.6333,0.4975,-0.2358,0.7456,-0.6233,0.4972,-0.2497,0.7487,-0.6141,0.4971,-0.2605,0.7514,-0.6062,0.4973,-0.2659,0.7537,-0.601,0.4977,-0.268,0.7555,-0.5978,0.4984,-0.2706,0.7572,-0.5945,0.4991,-0.2773,0.7591,-0.589,0.4997,-0.2898,0.7613,-0.5801,0.5002,-0.3059,0.7634,-0.569,0.5008,-0.3231,0.7651,-0.557,0.5015,-0.3393,0.7664,-0.5455,0.5024,-0.3542,0.7678,-0.5338,0.5032,-0.369,0.7693,-0.5216,0.504,-0.3832,0.7697,-0.5107,0.5051,-0.3963,0.768,-0.5031,0.5068,-0.4081,0.7635,-0.5005,0.5096,-0.4189,0.7569,-0.5016,0.513,-0.4289,0.7501,-0.5034,0.5163,-0.4382,0.7448,-0.5032,0.5185,-0.4464,0.7416,-0.5008,0.5189,-0.4535,0.7395,-0.4975,0.5181,-0.4611,0.7378,-0.493,0.5172,-0.4705,0.7358,-0.4871,0.5171,-0.4805,0.7344,-0.4793,0.5179,-0.4909,0.7336,-0.4698,0.5191,-0.5041,0.7312,-0.4597,0.5213,-0.5222,0.7246,-0.4497,0.5253,-0.5465,0.7121,-0.4408,0.5318,-0.5744,0.6951,-0.4323,0.5407,-0.6029,0.6768,-0.4225,0.5515,-0.6292,0.6601,-0.4104,0.5632,-0.6528,0.6468,-0.3944,0.5753,-0.6749,0.635,-0.376,0.5884,-0.6963,0.6221,-0.3579,0.603,-0.7176,0.6062,-0.3428,0.6198,-0.7407,0.5846,-0.3311,0.641,-0.7636,0.56,-0.3215,0.6659,-0.7825,0.538,-0.3136,0.6909,-0.7951,0.5232,-0.3067,0.7116,-0.8014,0.5176,-0.2999,0.7257,-0.8037,0.5175,-0.2936,0.7355,-0.8043,0.5193,-0.2889,0.7431,-0.8049,0.5193,-0.2873,0.7507,-0.8061,0.5161,-0.2897,0.759,-0.8068,0.5118,-0.295,0.7667,-0.8067,0.5082,-0.3015,0.7734,-0.8053,0.507,-0.3073,0.7783,-0.8022,0.5091,-0.3118,0.7809,-0.7978,0.5134,-0.3161,0.7815,-0.7927,0.5184,-0.3209,0.7812,-0.7875,0.5225,-0.3269,0.7809,-0.7818,0.526,-0.3349,0.7805,-0.7754,0.5294,-0.3443,0.7795,-0.7694,0.5319,-0.3538,0.7788,-0.7649,0.5325,-0.3623,0.7787,-0.7626,0.5306,-0.3701,0.7792,-0.7616,0.5268,-0.3775,0.7802,-0.7616,0.5225,-0.3834,0.7818,-0.7622,0.5192,-0.3866,0.7844,-0.7641,0.517,-0.3859,0.7888,-0.7671,0.5152,-0.3823,0.7947,-0.77,0.5141,-0.3779,0.8002,-0.7717,0.5138,-0.3747,0.8032,-0.7717,0.515,-0.3731,0.803,-0.7706,0.5175,-0.372,0.8008,-0.7692,0.5198,-0.3716,0.7974,-0.7684,0.5207,-0.3722,0.7938,-0.7685,0.5194,-0.3736,0.7899,-0.7692,0.5168,-0.3759,0.7854,-0.7697,0.5136,-0.3792,0.7807,-0.7696,0.5104,-0.3838,0.7762,-0.768,0.507,-0.3913,0.7722,-0.7655,0.5032,-0.401,0.7683,-0.7632,0.4996,-0.4099,0.7646,-0.7623,0.4969,-0.4147,0.7613,-0.7638,0.4959,-0.4132,0.7577,-0.7669,0.4958,-0.4075,0.7541,-0.77,0.4962,-0.401,0.7513,-0.772,0.4962,-0.3973,0.75,-0.7716,0.4965,-0.3976,0.7511,-0.7699,0.4972,-0.4001,0.7539,-0.7685,0.4969,-0.4031,0.7569,-0.7689,0.4945,-0.4053,0.7587,-0.7719,0.4889,-0.4063,0.7592,-0.7766,0.4809,-0.4069,0.7591,-0.7818,0.4723,-0.4072,0.7582,-0.7861,0.4649,-0.4073,0.7562,-0.7894,0.4591,-0.4074,0.753,-0.7923,0.4541,-0.4075,0.7488,-0.7952,0.4494,-0.407,0.7436,-0.7987,0.4446,-0.4055,0.7377,-0.8027,0.4399,-0.4026,0.7305,-0.8072,0.4355,-0.3985,0.7222,-0.8121,0.4307,-0.3938,0.7137,-0.8175,0.4248,-0.389,0.7058,-0.8231,0.4176,-0.3848,0.6987,-0.8291,0.4094,-0.3808,0.692,-0.8358,0.4003,-0.3757,0.6855,-0.8438,0.3903,-0.3683,0.6792,-0.8533,0.3792,-0.3578,0.6725,-0.8639,0.367,-0.3449,0.6656,-0.875,0.3536,-0.3306,0.66,-0.8861,0.3389,-0.3162,0.6568,-0.8963,0.3243,-0.3024,0.6567,-0.906,0.3095,-0.2888,0.6589,-0.9161,0.2921,-0.2748,0.6628,-0.9273,0.2694,-0.2599,0.6678,-0.9401,0.2377,-0.2442,0.675,-0.9529,0.1998,-0.2283,0.6849,-0.9636,0.1628,-0.2121,0.6953,-0.9716,0.1329,-0.1956,0.7034,-0.9775,0.1137,-0.1775,0.7072,-0.9823,0.1003,-0.158,0.7084,-0.9865,0.0868,-0.1386,0.71]);
Group704ZZZ.children[8] = OrientationInterpolator713;

let OrientationInterpolator714 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator714.DEF = "Interpolator6_leftEye";
OrientationInterpolator714.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator714.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0]);
Group704ZZZ.children[9] = OrientationInterpolator714;

let OrientationInterpolator715 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator715.DEF = "Interpolator7_rightEye";
OrientationInterpolator715.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator715.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0]);
Group704ZZZ.children[10] = OrientationInterpolator715;

let OrientationInterpolator716 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator716.DEF = "Interpolator8_rCollar";
OrientationInterpolator716.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator716.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0]);
Group704ZZZ.children[11] = OrientationInterpolator716;

let OrientationInterpolator717 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator717.DEF = "Interpolator9_rShldr";
OrientationInterpolator717.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator717.keyValue = new X3D.MFRotation([0,1,0,0,-0.9515,0.0077,0.3075,0.5739,-0.9476,-0.0827,0.3085,1.1853,-0.9409,-0.1692,0.2935,1.7292,-0.9339,-0.2332,0.2711,2.1025,-0.9312,-0.2601,0.2553,2.2392,-0.9331,-0.2599,0.2486,2.2094,-0.9368,-0.2492,0.2455,2.1169,-0.9398,-0.2428,0.2403,2.0646,-0.942,-0.242,0.2324,2.0766,-0.9445,-0.2397,0.2246,2.099,-0.947,-0.2363,0.2178,2.118,-0.9491,-0.232,0.2128,2.1195,-0.9511,-0.2265,0.21,2.0944,-0.953,-0.2198,0.2086,2.0519,-0.9547,-0.2132,0.2078,2.0056,-0.9562,-0.2074,0.2066,1.9692,-0.9573,-0.2024,0.2062,1.9357,-0.9582,-0.1978,0.2066,1.9013,-0.9592,-0.1936,0.2059,1.8847,-0.9608,-0.1897,0.2023,1.9046,-0.9632,-0.1864,0.1936,1.9976,-0.9655,-0.185,0.183,2.1436,-0.967,-0.1854,0.175,2.2757,-0.9677,-0.1849,0.1716,2.3269,-0.9678,-0.1814,0.1745,2.2523,-0.9672,-0.1773,0.1819,2.0965,-0.9656,-0.1761,0.1913,1.9272,-0.9638,-0.1784,0.1981,1.8113,-0.9626,-0.1831,0.1995,1.766,-0.9618,-0.1893,0.1978,1.7555,-0.9613,-0.1955,0.1942,1.7676,-0.961,-0.2008,0.1901,1.7901,-0.9614,-0.2041,0.1847,1.831,-0.9621,-0.2065,0.1779,1.8929,-0.9627,-0.2093,0.1716,1.9562,-0.9624,-0.2139,0.1674,2.0006,-0.961,-0.2208,0.1663,2.0128,-0.9589,-0.2294,0.1673,2.0062,-0.9565,-0.2384,0.1683,2.0009,-0.9547,-0.2463,0.1668,2.0172,-0.9541,-0.2524,0.1612,2.0728,-0.954,-0.2577,0.1531,2.1528,-0.9538,-0.2634,0.1448,2.2283,-0.9529,-0.2699,0.1384,2.2702,-0.951,-0.278,0.135,2.2585,-0.9484,-0.2875,0.1337,2.213,-0.9454,-0.2975,0.1332,2.1643,-0.9429,-0.3059,0.1318,2.143,-0.9416,-0.3116,0.128,2.1636,-0.9409,-0.3155,0.1228,2.2078,-0.9405,-0.3187,0.1177,2.2557,-0.94,-0.3217,0.1139,2.2878,-0.9394,-0.324,0.1119,2.3014,-0.939,-0.3255,0.1109,2.3062,-0.9384,-0.3273,0.1108,2.3009,-0.9372,-0.3306,0.1114,2.2841,-0.935,-0.3365,0.1123,2.2495,-0.9319,-0.3444,0.1142,2.2,-0.9281,-0.3532,0.1176,2.1479,-0.9243,-0.3613,0.123,2.1052,-0.9203,-0.3685,0.1316,2.0667,-0.9159,-0.3752,0.1428,2.0289,-0.9118,-0.3806,0.1542,2.0057,-0.9089,-0.3839,0.1627,2.011,-0.9081,-0.3847,0.1656,2.0613,-0.9082,-0.3848,0.1647,2.1451,-0.9079,-0.3858,0.1638,2.2343,-0.9064,-0.3883,0.1664,2.3002,-0.9035,-0.3912,0.1749,2.3267,-0.9,-0.3937,0.1872,2.332,-0.8962,-0.3961,0.1997,2.3384,-0.8928,-0.3992,0.2087,2.3685,-0.8898,-0.4045,0.2111,2.4377,-0.8867,-0.4122,0.2094,2.5309,-0.883,-0.4209,0.2078,2.6241,-0.8788,-0.4282,0.2106,2.6937,-0.8745,-0.4322,0.2199,2.7315,-0.8702,-0.4338,0.2335,2.7509,-0.8658,-0.434,0.2489,2.7609,-0.8614,-0.4342,0.2636,2.7704,-0.857,-0.4347,0.2769,2.7823,-0.8526,-0.4347,0.2902,2.7917,-0.8482,-0.4338,0.3041,2.7955,-0.8438,-0.4317,0.3189,2.7909,-0.8393,-0.4282,0.3349,2.7749,-0.8348,-0.4234,0.352,2.7499,-0.8303,-0.4169,0.3698,2.7207,-0.8261,-0.4085,0.3882,2.6919,-0.8223,-0.3975,0.4072,2.663,-0.8188,-0.384,0.4268,2.6319,-0.8153,-0.3691,0.4462,2.6012,-0.8116,-0.3537,0.465,2.5732,-0.8076,-0.3382,0.4832,2.5498,-0.8034,-0.3221,0.5007,2.5292,-0.7995,-0.3049,0.5176,2.5088,-0.7959,-0.2862,0.5335,2.4857,-0.7933,-0.2664,0.5475,2.4595,-0.7912,-0.2458,0.5599,2.4313,-0.7887,-0.2233,0.5729,2.4007,-0.7844,-0.1976,0.588,2.3674,-0.7768,-0.1655,0.6076,2.3295,-0.7667,-0.1277,0.6291,2.2888,-0.7567,-0.0894,0.6476,2.2495,-0.7497,-0.0569,0.6594,2.2147,-0.7473,-0.0363,0.6635,2.1852,-0.7482,-0.0236,0.6631,2.1586,-0.7502,-0.0106,0.6612,2.1329,-0.7508,0.0114,0.6604,2.1062,-0.749,0.0485,0.6608,2.0791,-0.7451,0.0952,0.6602,2.0526,-0.739,0.1426,0.6585,2.0252,-0.732,0.1817,0.6566,1.9949,-0.7254,0.2077,0.6562,1.9598,-0.719,0.226,0.6573,1.921,-0.7124,0.2431,0.6584,1.8813,-0.7055,0.2657,0.657,1.8437,-0.6977,0.2967,0.652,1.8096,-0.689,0.3321,0.6442,1.7775,-0.6795,0.3687,0.6343,1.7459,-0.6701,0.4034,0.6231,1.7132,-0.6598,0.438,0.6106,1.6752,-0.6485,0.4732,0.5963,1.6341,-0.6386,0.5048,0.5808,1.5977,-0.6333,0.5281,0.5658,1.5734,-0.6328,0.5444,0.5507,1.5627,-0.6361,0.5551,0.5359,1.5619,-0.6446,0.5562,0.5246,1.5698,-0.6597,0.5436,0.519,1.5856,-0.6837,0.5119,0.5201,1.6122,-0.7136,0.4651,0.5239,1.6514,-0.7434,0.4132,0.5259,1.6995,-0.769,0.3664,0.5238,1.7507,-0.7905,0.3263,0.5184,1.8037,-0.8098,0.2883,0.5109,1.8611,-0.8271,0.253,0.5019,1.9222,-0.8425,0.2207,0.4914,1.9866,-0.8562,0.1916,0.4797,2.0579,-0.8684,0.1656,0.4675,2.135,-0.8789,0.1421,0.4553,2.2097,-0.8882,0.1202,0.4434,2.2737,-0.8965,0.0991,0.4319,2.3251,-0.904,0.0788,0.4203,2.3676,-0.911,0.0593,0.4081,2.4007,-0.9179,0.0409,0.3947,2.4244,-0.9246,0.0237,0.3802,2.4368,-0.931,0.007,0.365,2.438,-0.9371,-0.0101,0.349,2.4309,-0.9428,-0.0286,0.3323,2.4186,-0.9479,-0.0503,0.3146,2.4052,-0.9522,-0.0747,0.2963,2.3875,-0.9555,-0.0988,0.278,2.3576,-0.958,-0.1199,0.2605,2.308,-0.9598,-0.1381,0.2444,2.225,-0.9604,-0.1568,0.2302,2.1171,-0.9598,-0.1774,0.2175,2.0096,-0.9583,-0.1994,0.2047,1.9281,-0.9566,-0.2213,0.1898,1.8746,-0.9546,-0.2423,0.1731,1.8374,-0.953,-0.2598,0.1557,1.8202,-0.9524,-0.2716,0.1389,1.8266,-0.9539,-0.2747,0.1212,1.8754,-0.9571,-0.2708,0.1035,1.9584,-0.9602,-0.2644,0.09,2.0391,-0.9622,-0.2591,0.0836,2.0803,-0.9631,-0.2553,0.0851,2.0661,-0.9635,-0.2511,0.0925,2.0182,-0.9636,-0.2464,0.1036,1.9551,-0.9636,-0.2406,0.1162,1.8956,-0.9636,-0.2337,0.1301,1.8454,-0.9632,-0.2255,0.1464,1.7941,-0.9625,-0.2153,0.165,1.7373,-0.9614,-0.2027,0.186,1.6701,-0.9601,-0.1881,0.207,1.6003,-0.9584,-0.1708,0.2288,1.5275,-0.9551,-0.1478,0.2569,1.4347,-0.9479,-0.1129,0.2979,1.3058,-0.9308,-0.0508,0.362,1.1187,-0.8896,0.0581,0.4531,0.8954,-0.792,0.2318,0.5648,0.6912,-0.6043,0.4487,0.6584,0.5613,-0.3566,0.635,0.6853,0.5161,-0.1127,0.7537,0.6475,0.5267,0.0748,0.8091,0.5829,0.5678,0.2084,0.8287,0.5194,0.6202,0.2959,0.8302,0.4724,0.6737,0.3461,0.8256,0.4458,0.7232,0.3756,0.8206,0.4307,0.7679,0.396,0.8172,0.4188,0.8092,0.4075,0.8158,0.4105,0.8463,0.4096,0.8155,0.409,0.878,0.4085,0.8152,0.4106,0.906,0.4093,0.8142,0.4117,0.9324,0.4128,0.8119,0.4129,0.9576,0.4165,0.8087,0.4154,0.9808,0.4206,0.8053,0.4178,1.0021,0.4253,0.8023,0.4188,1.0214,0.4306,0.7998,0.4182,1.0385,0.4366,0.7973,0.4168,1.0535,0.4433,0.7945,0.415,1.0668,0.4508,0.7913,0.413,1.0785,0.4601,0.7872,0.4106,1.0882,0.4707,0.7823,0.408,1.0962,0.4809,0.7775,0.4053,1.1033,0.4891,0.7736,0.4029,1.1106,0.4945,0.771,0.4013,1.1182,0.498,0.7694,0.4,1.1253,0.5011,0.7681,0.3987,1.1322,0.5048,0.7668,0.3966,1.139,0.5094,0.765,0.394,1.1466,0.5144,0.7633,0.3909,1.1547,0.5194,0.7618,0.3872,1.1614,0.5241,0.7608,0.3829,1.1648,0.5289,0.7594,0.3789,1.1617,0.534,0.7578,0.3751,1.1541,0.5383,0.7577,0.3688,1.1475,0.541,0.7611,0.3578,1.148,0.541,0.7702,0.3377,1.1607,0.5389,0.7829,0.311,1.1813,0.5363,0.7941,0.2861,1.2014,0.5352,0.8,0.2713,1.2125,0.5366,0.799,0.2714,1.2106,0.5394,0.7938,0.2811,1.2007,0.5424,0.7874,0.2929,1.1881,0.5448,0.7834,0.299,1.1782,0.5468,0.783,0.2965,1.171,0.5487,0.7843,0.2896,1.164,0.5495,0.7865,0.2819,1.1599,0.5484,0.789,0.277,1.161,0.5443,0.7924,0.2755,1.1692,0.538,0.7966,0.2755,1.1825,0.5312,0.8007,0.2771,1.1978,0.5255,0.8033,0.2803,1.2121,0.521,0.8041,0.2865,1.226,0.5167,0.8037,0.295,1.241,0.5133,0.8028,0.3032,1.2547,0.5115,0.8019,0.3088,1.2647,0.5127,0.8,0.3116,1.2677,0.5162,0.7972,0.313,1.266,0.5193,0.7954,0.3126,1.2647,0.5192,0.7964,0.31,1.2693,0.5148,0.8014,0.3047,1.2823,0.5076,0.8089,0.2968,1.3,0.4992,0.8174,0.2875,1.319,0.4909,0.8256,0.2782,1.3359,0.4835,0.8333,0.2678,1.3507,0.4761,0.8412,0.2562,1.3649,0.4679,0.849,0.2457,1.3777,0.4581,0.8564,0.2383,1.3883,0.4468,0.8632,0.2351,1.3966,0.4341,0.8697,0.2348,1.4032,0.4201,0.8762,0.2361,1.4084,0.4044,0.8832,0.2375,1.4125,0.387,0.8906,0.2387,1.4156,0.3679,0.8983,0.2403,1.4179,0.3471,0.9058,0.243,1.4195,0.3249,0.9129,0.2472,1.4206,0.3007,0.9193,0.2538,1.4206,0.2747,0.9251,0.2622,1.4199,0.2474,0.9303,0.2709,1.4206,0.2196,0.9351,0.2782,1.424,0.1915,0.9396,0.2836,1.4318,0.1627,0.9437,0.2878,1.4424,0.1336,0.9472,0.2915,1.4528,0.1044,0.9498,0.295,1.4605,0.0751,0.9518,0.2974,1.4655,0.0457,0.9532,0.2988,1.4695,0.0157,0.9534,0.3014,1.4738,-0.015,0.9515,0.3074,1.4792,-0.0459,0.9477,0.3159,1.4864,-0.0768,0.9422,0.3263,1.4949,-0.1092,0.934,0.3402,1.5039,-0.1443,0.922,0.3591,1.5131,-0.1782,0.9087,0.3775,1.5206,-0.2115,0.8936,0.3959,1.5276,-0.253,0.8692,0.4248,1.5402,-0.3094,0.8256,0.4718,1.5671,-0.3778,0.756,0.5346,1.6132,-0.4497,0.6618,0.5999,1.6815,-0.5201,0.5457,0.6571,1.7817,-0.5836,0.4147,0.6982,1.9219,-0.6421,0.2549,0.723,2.1399,-0.6834,0.0798,0.7257,2.4245,-0.7013,-0.0718,0.7093,2.694,-0.7047,-0.1706,0.6887,2.8635,-0.7054,-0.203,0.6791,2.8914,-0.7067,-0.1925,0.6809,2.8257,-0.7067,-0.166,0.6878,2.7211,-0.7047,-0.1497,0.6935,2.6328,-0.7007,-0.1493,0.6977,2.5701,-0.6941,-0.1512,0.7038,2.5057,-0.6858,-0.153,0.7116,2.4403,-0.6766,-0.1523,0.7204,2.3746,-0.6668,-0.1487,0.7303,2.3074,-0.6555,-0.1432,0.7415,2.2391,-0.6431,-0.1361,0.7536,2.1719,-0.6302,-0.1279,0.7659,2.1079,-0.6171,-0.1187,0.7779,2.0469,-0.6038,-0.1082,0.7898,1.988,-0.5895,-0.0961,0.802,1.9317,-0.5736,-0.082,0.815,1.8785,-0.5556,-0.0654,0.8289,1.8302,-0.536,-0.0463,0.8429,1.786,-0.5153,-0.0252,0.8567,1.7432,-0.4937,-0.0029,0.8696,1.6988,-0.4705,0.0219,0.8821,1.6502,-0.4454,0.0491,0.894,1.5998,-0.4195,0.076,0.9046,1.5514,-0.3947,0.0996,0.9134,1.5087,-0.3731,0.1182,0.9203,1.4743,-0.3541,0.1332,0.9257,1.445,-0.3357,0.1469,0.9304,1.4155,-0.3154,0.1616,0.9351,1.3809,-0.2896,0.1793,0.9402,1.3385,-0.2598,0.1983,0.9451,1.2918,-0.2308,0.2147,0.949,1.2447,-0.2087,0.2248,0.9518,1.2002,-0.1954,0.2286,0.9537,1.1566,-0.1892,0.2275,0.9552,1.1123,-0.1928,0.2204,0.9562,1.0694,-0.2094,0.206,0.9559,1.0307,-0.2361,0.1871,0.9536,0.9954,-0.2743,0.1634,0.9477,0.9639,-0.333,0.1287,0.9341,0.9421,-0.4181,0.0777,0.9051,0.9391,-0.5232,0.0105,0.8521,0.9628,-0.6304,-0.0616,0.7738,1.0189,-0.7246,-0.125,0.6777,1.1141,-0.7973,-0.1714,0.5787,1.2501,-0.8523,-0.2062,0.4806,1.4532,-0.889,-0.2332,0.3941,1.7126,-0.9103,-0.2511,0.3291,1.9658,-0.9228,-0.258,0.2862,2.1491,-0.9312,-0.2529,0.2627,2.2316,-0.938,-0.24,0.2502,2.2476,-0.9442,-0.2236,0.2419,2.2329,-0.9503,-0.2073,0.2323,2.2241,-0.9564,-0.1916,0.2206,2.2267,-0.9622,-0.1747,0.209,2.2225,-0.9676,-0.1568,0.198,2.2133,-0.9724,-0.1378,0.188,2.2008,-0.9767,-0.1176,0.1795,2.1827,-0.9804,-0.0962,0.1718,2.1587,-0.9837,-0.0742,0.164,2.1339,-0.9864,-0.0525,0.1558,2.1136,-0.9886,-0.0314,0.1472,2.1023,-0.9903,-0.0104,0.1387,2.0961,-0.9914,0.0107,0.1301,2.0877,-0.9921,0.0322,0.121,2.0697,-0.9924,0.0546,0.1104,2.0374,-0.9921,0.0776,0.0983,1.9958,-0.9913,0.1004,0.085,1.9519,-0.9899,0.1223,0.071,1.9125,-0.9881,0.1429,0.0567,1.8777,-0.9858,0.1626,0.0417,1.8445,-0.983,0.1818,0.0266,1.815,-0.9795,0.2009,0.0121,1.7914,-0.9755,0.2202,-0.0016,1.7725,-0.9708,0.2393,-0.0145,1.7576,-0.9658,0.2578,-0.0264,1.7492,-0.9607,0.275,-0.0371,1.7498,-0.9557,0.2907,-0.0455,1.7622,-0.9509,0.3053,-0.0516,1.784,-0.9461,0.319,-0.0565,1.81,-0.9412,0.3322,-0.0615,1.835,-0.9362,0.3451,-0.0669,1.8585,-0.9311,0.3575,-0.0719,1.8828,-0.9261,0.3693,-0.0769,1.9077,-0.9211,0.3805,-0.0822,1.9327,-0.9162,0.391,-0.0876,1.9591,-0.9114,0.4008,-0.0931,1.9867,-0.9066,0.4103,-0.0991,2.0131,-0.9015,0.4197,-0.106,2.0356,-0.896,0.4291,-0.114,2.0539,-0.8904,0.4383,-0.1229,2.0695,-0.8845,0.4472,-0.1329,2.0823,-0.8786,0.4554,-0.1438,2.0928,-0.8724,0.4632,-0.1562,2.1011,-0.866,0.4703,-0.1699,2.1073,-0.8595,0.4767,-0.1844,2.111,-0.8533,0.482,-0.1988,2.1117,-0.8473,0.4861,-0.214,2.1081,-0.8413,0.4891,-0.2302,2.1008,-0.8357,0.4911,-0.2458,2.092,-0.831,0.4922,-0.2593,2.0837,-0.8272,0.4924,-0.2707,2.0757,-0.8243,0.4917,-0.2806,2.0667,-0.8221,0.4906,-0.2888,2.0578,-0.8205,0.4896,-0.2949,2.0496,-0.8193,0.4886,-0.3,2.0396,-0.8185,0.4875,-0.3039,2.0284,-0.8188,0.4868,-0.3045,2.0209,-0.8205,0.4869,-0.2995,2.0224,-0.8242,0.4884,-0.2868,2.0366,-0.8292,0.4904,-0.2681,2.06,-0.8348,0.4919,-0.2475,2.0878,-0.84,0.4919,-0.2289,2.1147,-0.845,0.4902,-0.2135,2.14,-0.8501,0.4876,-0.199,2.1661,-0.8551,0.4843,-0.185,2.1926,-0.86,0.4808,-0.1708,2.2193,-0.8649,0.4772,-0.1558,2.2468,-0.8697,0.4731,-0.1406,2.2749,-0.8744,0.4686,-0.1259,2.3025,-0.8788,0.4639,-0.1122,2.3279,-0.8829,0.4588,-0.0996,2.3501,-0.8869,0.4535,-0.0878,2.37,-0.8907,0.4482,-0.0767,2.3894,-0.8941,0.4429,-0.0661,2.4099,-0.8973,0.4379,-0.0558,2.434,-0.9002,0.433,-0.0458,2.46,-0.9029,0.4282,-0.0368,2.4837,-0.9053,0.4238,-0.0295,2.501,-0.9074,0.4195,-0.0238,2.5091,-0.9094,0.4155,-0.0195,2.5106,-0.911,0.412,-0.0162,2.5098,-0.9123,0.4093,-0.0137,2.5108,-0.913,0.4078,-0.012,2.5162,-0.9133,0.4072,-0.0113,2.5233,-0.9134,0.407,-0.0112,2.528,-0.9136,0.4065,-0.0118,2.5263,-0.9139,0.4056,-0.0133,2.5146,-0.9143,0.4048,-0.0157,2.4959,-0.9147,0.4037,-0.0181,2.4759,-0.9153,0.4024,-0.0197,2.4606,-0.916,0.4006,-0.0206,2.4513,-0.917,0.3984,-0.0211,2.4449,-0.918,0.3961,-0.0206,2.4407,-0.919,0.3939,-0.0186,2.4378,-0.92,0.3916,-0.0144,2.4369,-0.9211,0.3893,-0.0086,2.4381,-0.9221,0.387,-0.0021,2.4403,-0.9231,0.3846,0.0043,2.4425,-0.9242,0.3818,0.011,2.4458,-0.9254,0.3787,0.0182,2.4505,-0.9263,0.376,0.0248,2.4535,-0.9267,0.3745,0.0297,2.4515,-0.9266,0.3747,0.0326,2.4437,-0.9259,0.3762,0.0342,2.4319,-0.925,0.3783,0.0345,2.4164,-0.9242,0.3805,0.0337,2.3978,-0.9234,0.3826,0.0312,2.374,-0.9225,0.3849,0.0272,2.3456,-0.9216,0.3876,0.0226,2.3166,-0.9204,0.3904,0.0185,2.291,-0.9192,0.3936,0.0149,2.2695,-0.9177,0.397,0.0113,2.2501,-0.9162,0.4006,0.008,2.2329,-0.9146,0.4043,0.0053,2.2183,-0.9128,0.4083,0.0036,2.2066,-0.9109,0.4126,0.0027,2.1977,-0.9091,0.4167,0.0016,2.1906,-0.9076,0.4199,-0.001,2.1841,-0.9066,0.422,-0.0062,2.1787,-0.9059,0.4233,-0.0132,2.1746,-0.9054,0.4241,-0.0198,2.1711,-0.9051,0.4246,-0.0238,2.1671,-0.9048,0.4251,-0.0243,2.1611,-0.9047,0.4254,-0.0225,2.1541,-0.9048,0.4254,-0.0197,2.1487,-0.905,0.425,-0.0173,2.1473,-0.9054,0.4242,-0.0151,2.1525,-0.9061,0.423,-0.0126,2.1624,-0.9067,0.4216,-0.0104,2.1726,-0.9073,0.4204,-0.0093,2.1789,-0.9077,0.4195,-0.0098,2.1793,-0.9081,0.4186,-0.0115,2.1765,-0.9085,0.4178,-0.0132,2.1725,-0.9088,0.417,-0.014,2.1693,-0.9092,0.4162,-0.0134,2.1667,-0.9096,0.4154,-0.0121,2.1639,-0.9099,0.4147,-0.0104,2.162,-0.9101,0.4142,-0.0089,2.1622,-0.9102,0.4141,-0.0075,2.1653,-0.9101,0.4143,-0.0061,2.1705,-0.91,0.4145,-0.0049,2.1764,-0.9102,0.4142,-0.0039,2.1813,-0.9107,0.4131,-0.0035,2.185,-0.9114,0.4116,-0.0033,2.1883,-0.912,0.4101,-0.0033,2.1911,-0.9125,0.4091,-0.0034,2.1938,-0.9125,0.4091,-0.0037,2.1956,-0.9122,0.4097,-0.0041,2.1968,-0.912,0.4102,-0.0044,2.1984,-0.9121,0.4099,-0.004,2.2014,-0.9126,0.4088,-0.0027,2.206,-0.9134,0.407,-0.0008,2.2118,-0.9144,0.4049,0.0014,2.2187,-0.9153,0.4027,0.0037,2.2266,-0.9163,0.4004,0.0063,2.2366,-0.9175,0.3977,0.0091,2.2483,-0.9185,0.3952,0.0118,2.2598,-0.9195,0.3929,0.0138,2.2687,-0.9203,0.391,0.0149,2.2741,-0.921,0.3893,0.0154,2.2773,-0.9216,0.3879,0.0158,2.2796,-0.922,0.3868,0.0166,2.2824,-0.9223,0.386,0.018,2.2865,-0.9225,0.3854,0.0199,2.291,-0.9226,0.3852,0.0216,2.2948,-0.9225,0.3855,0.0225,2.2966,-0.922,0.3866,0.0225,2.2952,-0.9212,0.3885,0.0218,2.2916,-0.9205,0.3903,0.0208,2.2878,-0.9201,0.3912,0.0198,2.2858,-0.9203,0.3907,0.0187,2.2862,-0.921,0.3893,0.0176,2.288,-0.9216,0.3878,0.0163,2.2905,-0.9218,0.3873,0.015,2.2929,-0.9215,0.3883,0.0136,2.2959,-0.9207,0.3901,0.0121,2.2995,-0.9199,0.392,0.0105,2.3025,-0.9194,0.3931,0.0091,2.3032,-0.9195,0.3931,0.0076,2.3005,-0.9198,0.3924,0.006,2.2953,-0.9202,0.3915,0.0048,2.2899,-0.9204,0.391,0.0045,2.2866,-0.9204,0.391,0.0057,2.2872,-0.9202,0.3914,0.0079,2.2902,-0.92,0.3917,0.0102,2.2926,-0.9201,0.3916,0.0113,2.2915,-0.9203,0.3911,0.0107,2.2848,-0.9207,0.3903,0.0089,2.2747,-0.9211,0.3893,0.0073,2.2638,-0.9215,0.3883,0.007,2.2551,-0.9219,0.3874,0.0085,2.2495,-0.9222,0.3864,0.0112,2.2454,-0.9226,0.3854,0.0144,2.242,-0.9231,0.3842,0.0174,2.2385,-0.9235,0.3831,0.02,2.2348,-0.9239,0.382,0.0226,2.2314,-0.9245,0.3804,0.0254,2.228,-0.9253,0.3781,0.0285,2.2243,-0.9266,0.3748,0.0316,2.2193,-0.928,0.3709,0.0346,2.2133,-0.9297,0.3664,0.0387,2.2086,-0.9315,0.361,0.045,2.2071,-0.9334,0.3546,0.0543,2.2105,-0.9355,0.3473,0.0657,2.2174,-0.9374,0.3394,0.0778,2.2259,-0.9392,0.3315,0.0895,2.2334,-0.9407,0.3242,0.1001,2.2395,-0.9419,0.3171,0.1104,2.2454,-0.9432,0.3093,0.1211,2.2514,-0.9446,0.3003,0.1324,2.2576,-0.9462,0.2894,0.1449,2.265,-0.9477,0.2773,0.1581,2.2732,-0.949,0.2645,0.1715,2.2812,-0.95,0.2517,0.1846,2.2877,-0.9507,0.2385,0.198,2.2929,-0.9511,0.2249,0.2115,2.2973,-0.9511,0.2118,0.2247,2.3001,-0.9508,0.2,0.2366,2.3005,-0.9503,0.1898,0.2468,2.2972,-0.9496,0.1809,0.2558,2.2908,-0.9486,0.1729,0.2649,2.283,-0.947,0.1656,0.2752,2.2759,-0.9445,0.1598,0.2871,2.2703,-0.9412,0.1554,0.3,2.2653,-0.9377,0.1507,0.3131,2.2598,-0.9345,0.1439,0.3257,2.2528,-0.9318,0.134,0.3373,2.2436,-0.9292,0.1221,0.3488,2.2329,-0.9262,0.1096,0.3607,2.2217,-0.9223,0.0977,0.374,2.2111,-0.9172,0.0867,0.3888,2.2014,-0.9112,0.0762,0.4048,2.1925,-0.9045,0.0662,0.4212,2.1844,-0.8974,0.0569,0.4375,2.1772,-0.89,0.0487,0.4534,2.1712,-0.8821,0.0414,0.4692,2.1664,-0.8738,0.0341,0.485,2.1617,-0.865,0.0257,0.5012,2.1563,-0.8552,0.0162,0.5181,2.1501,-0.8445,0.0061,0.5356,2.1438,-0.833,-0.0046,0.5533,2.1376,-0.821,-0.016,0.5708,2.1319,-0.808,-0.0286,0.5885,2.1266,-0.7938,-0.0421,0.6067,2.1218,-0.779,-0.0556,0.6246,2.1175,-0.7641,-0.0683,0.6414,2.1136,-0.7494,-0.0798,0.6573,2.1086,-0.7345,-0.0906,0.6725,2.1027,-0.7196,-0.102,0.6869,2.0983,-0.7049,-0.1154,0.6999,2.0973,-0.691,-0.1327,0.7106,2.1012,-0.6777,-0.1526,0.7193,2.1081,-0.6639,-0.1724,0.7277,2.1152,-0.6489,-0.1888,0.737,2.1203,-0.6326,-0.2002,0.7481,2.1221,-0.6155,-0.2087,0.76,2.1224,-0.5978,-0.2166,0.7719,2.1238]);
Group704ZZZ.children[12] = OrientationInterpolator717;

let OrientationInterpolator718 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator718.DEF = "Interpolator10_rForeArm";
OrientationInterpolator718.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator718.keyValue = new X3D.MFRotation([0,1,0,0,-0.1551,0.8463,-0.5097,0.0602,-0.1415,0.8509,-0.506,0.1237,-0.1292,0.8549,-0.5025,0.1799,-0.1205,0.8576,-0.5,0.2188,-0.1171,0.8587,-0.499,0.2334,-0.1175,0.8585,-0.4991,0.2307,-0.1194,0.8579,-0.4997,0.2216,-0.1205,0.8576,-0.5,0.2167,-0.1205,0.8576,-0.5,0.2186,-0.1205,0.8576,-0.5,0.2217,-0.1205,0.8576,-0.5,0.2245,-0.1205,0.8576,-0.5,0.2255,-0.1205,0.8576,-0.5,0.2236,-0.1206,0.8576,-0.5,0.22,-0.1206,0.8576,-0.5,0.2162,-0.1205,0.8576,-0.5,0.2141,-0.1205,0.8576,-0.5,0.2139,-0.1205,0.8576,-0.5,0.2148,-0.1205,0.8576,-0.5,0.2168,-0.1205,0.8576,-0.5,0.2199,-0.1206,0.8576,-0.5,0.2256,-0.1207,0.8575,-0.5001,0.2335,-0.1206,0.8576,-0.5,0.2404,-0.1205,0.8576,-0.5,0.2436,-0.1206,0.8576,-0.5,0.2411,-0.1207,0.8576,-0.5,0.2347,-0.1207,0.8576,-0.5,0.2274,-0.1205,0.8576,-0.5,0.2222,-0.1203,0.8576,-0.5,0.2198,-0.12,0.8576,-0.5,0.2187,-0.1198,0.8577,-0.5001,0.2182,-0.1197,0.8577,-0.5001,0.2178,-0.1198,0.8577,-0.5001,0.2176,-0.12,0.8576,-0.5,0.2177,-0.1202,0.8576,-0.5,0.2178,-0.1204,0.8576,-0.5,0.2177,-0.1205,0.8576,-0.5,0.2169,-0.1205,0.8576,-0.5,0.2157,-0.1205,0.8576,-0.5,0.2149,-0.1205,0.8576,-0.5,0.2154,-0.1206,0.8576,-0.5,0.2181,-0.1206,0.8576,-0.5,0.2222,-0.1206,0.8576,-0.5,0.2264,-0.1205,0.8576,-0.5,0.2293,-0.1205,0.8576,-0.5,0.2298,-0.1205,0.8576,-0.5,0.229,-0.1205,0.8576,-0.5,0.2282,-0.1205,0.8576,-0.5,0.2288,-0.1206,0.8576,-0.5,0.2316,-0.1206,0.8576,-0.5,0.2357,-0.1206,0.8576,-0.5,0.2399,-0.1205,0.8576,-0.5,0.2432,-0.1205,0.8576,-0.5,0.2456,-0.1205,0.8576,-0.5,0.2475,-0.1205,0.8576,-0.5,0.2486,-0.1205,0.8576,-0.5,0.2484,-0.1206,0.8576,-0.5,0.2463,-0.1206,0.8576,-0.5,0.2427,-0.1205,0.8576,-0.5,0.2387,-0.1205,0.8576,-0.5,0.2354,-0.1205,0.8576,-0.5,0.2323,-0.1205,0.8576,-0.5,0.2291,-0.1205,0.8576,-0.5,0.2271,-0.1205,0.8576,-0.5,0.2274,-0.1206,0.8576,-0.5,0.2318,-0.1207,0.8575,-0.5001,0.239,-0.1206,0.8576,-0.5,0.2464,-0.1205,0.8576,-0.5,0.2513,-0.1204,0.8576,-0.5,0.2511,-0.1203,0.8577,-0.4999,0.2481,-0.1203,0.8577,-0.4999,0.246,-0.1205,0.8576,-0.5,0.2491,-0.121,0.8574,-0.5002,0.2605,-0.1212,0.8573,-0.5003,0.2775,-0.121,0.8574,-0.5002,0.2945,-0.1205,0.8576,-0.5,0.3061,-0.1203,0.8577,-0.4999,0.3102,-0.1203,0.8577,-0.4999,0.3101,-0.1205,0.8576,-0.5,0.3078,-0.1205,0.8576,-0.5,0.3055,-0.1205,0.8576,-0.5,0.3045,-0.1204,0.8577,-0.4999,0.3032,-0.1203,0.8577,-0.4999,0.3002,-0.1205,0.8576,-0.5,0.294,-0.1208,0.8575,-0.5001,0.2831,-0.1209,0.8575,-0.5002,0.2687,-0.1207,0.8575,-0.5001,0.253,-0.1205,0.8576,-0.5,0.2384,-0.1206,0.8576,-0.5,0.2245,-0.1207,0.8575,-0.5001,0.2105,-0.1207,0.8575,-0.5001,0.1975,-0.1205,0.8576,-0.5,0.1867,-0.1203,0.8577,-0.4999,0.1788,-0.1203,0.8577,-0.4999,0.1731,-0.1204,0.8576,-0.5,0.1684,-0.1205,0.8576,-0.5,0.1635,-0.1204,0.8576,-0.5,0.1588,-0.1203,0.8577,-0.4999,0.1547,-0.1203,0.8577,-0.4999,0.1501,-0.1205,0.8576,-0.5,0.1436,-0.1209,0.8575,-0.5001,0.1334,-0.1212,0.8574,-0.5002,0.1208,-0.121,0.8574,-0.5002,0.1089,-0.1205,0.8576,-0.5,0.1012,-0.1202,0.8577,-0.4999,0.0993,-0.1203,0.8577,-0.4999,0.101,-0.1204,0.8576,-0.5,0.1045,-0.1205,0.8576,-0.5,0.1077,-0.1205,0.8576,-0.5,0.1102,-0.1205,0.8576,-0.5,0.1129,-0.1204,0.8576,-0.5,0.1162,-0.1205,0.8576,-0.5,0.1205,-0.1207,0.8575,-0.5001,0.127,-0.1208,0.8575,-0.5001,0.1349,-0.1207,0.8575,-0.5001,0.1424,-0.1205,0.8576,-0.5,0.1473,-0.1204,0.8576,-0.5,0.1483,-0.1205,0.8576,-0.5,0.1468,-0.1205,0.8576,-0.5,0.1447,-0.1205,0.8576,-0.5,0.1444,-0.1206,0.8576,-0.5,0.1473,-0.1206,0.8576,-0.5,0.1519,-0.1205,0.8576,-0.5,0.1558,-0.1205,0.8576,-0.5,0.1567,-0.1207,0.8576,-0.5,0.1524,-0.1208,0.8575,-0.5001,0.1447,-0.1207,0.8575,-0.5,0.137,-0.1205,0.8576,-0.5,0.133,-0.1205,0.8576,-0.5,0.1349,-0.1206,0.8576,-0.5,0.1405,-0.1206,0.8576,-0.5,0.1462,-0.1205,0.8576,-0.5,0.1483,-0.1206,0.8576,-0.5,0.1444,-0.1207,0.8575,-0.5001,0.1369,-0.1206,0.8576,-0.5,0.1297,-0.1205,0.8576,-0.5,0.1268,-0.1204,0.8576,-0.4999,0.1292,-0.1202,0.8577,-0.4999,0.1348,-0.1201,0.8577,-0.4999,0.1432,-0.1205,0.8576,-0.5,0.1537,-0.1211,0.8574,-0.5002,0.1676,-0.1212,0.8574,-0.5002,0.1847,-0.1209,0.8575,-0.5001,0.2025,-0.1205,0.8576,-0.5,0.2184,-0.1206,0.8576,-0.5,0.2338,-0.1207,0.8575,-0.5001,0.2491,-0.1206,0.8575,-0.5001,0.2614,-0.1205,0.8576,-0.5,0.2676,-0.1205,0.8576,-0.5,0.2648,-0.1207,0.8575,-0.5001,0.2555,-0.1206,0.8576,-0.5,0.2439,-0.1205,0.8576,-0.5,0.2346,-0.1205,0.8576,-0.5,0.2275,-0.1205,0.8576,-0.5,0.2208,-0.1205,0.8576,-0.5,0.2157,-0.1205,0.8576,-0.5,0.2134,-0.1205,0.8576,-0.5,0.2147,-0.1204,0.8576,-0.5,0.2187,-0.1204,0.8576,-0.5,0.2246,-0.1205,0.8576,-0.5,0.2316,-0.1207,0.8575,-0.5001,0.2409,-0.1208,0.8575,-0.5001,0.2524,-0.1207,0.8575,-0.5001,0.2636,-0.1205,0.8576,-0.5,0.2718,-0.1204,0.8576,-0.4999,0.2766,-0.1204,0.8577,-0.4999,0.2793,-0.1204,0.8576,-0.5,0.2799,-0.1205,0.8576,-0.5,0.2781,-0.1205,0.8576,-0.5,0.2735,-0.1205,0.8576,-0.5,0.2665,-0.1204,0.8576,-0.5,0.2576,-0.1205,0.8576,-0.5,0.2473,-0.1209,0.8574,-0.5002,0.2327,-0.1212,0.8574,-0.5002,0.2147,-0.1209,0.8575,-0.5001,0.199,-0.1205,0.8576,-0.5,0.1919,-0.1198,0.8579,-0.4997,0.1945,-0.1189,0.8583,-0.4992,0.2036,-0.119,0.8582,-0.4993,0.2191,-0.1205,0.8576,-0.5,0.2405,-0.1219,0.8571,-0.5005,0.2696,-0.1216,0.8573,-0.5003,0.3058,-0.1207,0.8576,-0.4999,0.3453,-0.1205,0.8576,-0.5,0.3845,-0.1208,0.8575,-0.5002,0.4229,-0.1206,0.8576,-0.5,0.4623,-0.1204,0.8577,-0.4999,0.5021,-0.1205,0.8576,-0.5,0.542,-0.1209,0.8574,-0.5003,0.5827,-0.1211,0.8573,-0.5004,0.624,-0.1209,0.8574,-0.5002,0.6645,-0.1205,0.8576,-0.5,0.7024,-0.1204,0.8576,-0.5,0.7378,-0.1206,0.8575,-0.5001,0.7715,-0.1207,0.8575,-0.5001,0.8031,-0.1205,0.8576,-0.5,0.8323,-0.1203,0.8577,-0.4999,0.8588,-0.1204,0.8576,-0.4999,0.883,-0.1206,0.8576,-0.5,0.9054,-0.1205,0.8576,-0.5,0.9264,-0.1205,0.8576,-0.5,0.9465,-0.1206,0.8576,-0.5,0.9654,-0.1206,0.8575,-0.5001,0.9824,-0.1205,0.8576,-0.5,0.9967,-0.1203,0.8577,-0.4999,1.0068,-0.1203,0.8577,-0.4998,1.0137,-0.1204,0.8577,-0.4999,1.0202,-0.1205,0.8576,-0.5,1.029,-0.1206,0.8575,-0.5001,1.0413,-0.1207,0.8575,-0.5001,1.0555,-0.1206,0.8576,-0.5001,1.07,-0.1205,0.8576,-0.5,1.0834,-0.1205,0.8576,-0.5,1.0954,-0.1205,0.8576,-0.5,1.1067,-0.1205,0.8576,-0.5,1.1175,-0.1205,0.8576,-0.5,1.1278,-0.1205,0.8576,-0.5,1.1366,-0.1204,0.8577,-0.4999,1.1444,-0.1204,0.8577,-0.4999,1.1527,-0.1205,0.8576,-0.5,1.163,-0.1206,0.8576,-0.5001,1.1759,-0.1206,0.8576,-0.5,1.1905,-0.1205,0.8576,-0.5,1.206,-0.1205,0.8576,-0.5,1.2216,-0.1206,0.8576,-0.5001,1.2378,-0.1207,0.8575,-0.5001,1.2549,-0.1206,0.8575,-0.5001,1.2714,-0.1205,0.8576,-0.5,1.286,-0.1204,0.8577,-0.4999,1.2977,-0.1204,0.8577,-0.4999,1.3075,-0.1205,0.8576,-0.4999,1.317,-0.1205,0.8576,-0.5,1.3276,-0.1206,0.8576,-0.5,1.34,-0.1206,0.8576,-0.5001,1.3534,-0.1206,0.8576,-0.5,1.3668,-0.1205,0.8576,-0.5,1.3792,-0.1205,0.8576,-0.5,1.3915,-0.1206,0.8576,-0.5,1.4039,-0.1206,0.8576,-0.5,1.4144,-0.1205,0.8576,-0.5,1.4211,-0.1205,0.8576,-0.5,1.423,-0.1205,0.8576,-0.5,1.4213,-0.1205,0.8576,-0.5,1.4173,-0.1205,0.8576,-0.5,1.4126,-0.1205,0.8576,-0.5,1.4078,-0.1204,0.8577,-0.4999,1.4023,-0.1204,0.8577,-0.4999,1.3945,-0.1205,0.8576,-0.5,1.3829,-0.1208,0.8574,-0.5002,1.3657,-0.1209,0.8574,-0.5003,1.3439,-0.1208,0.8575,-0.5002,1.321,-0.1205,0.8576,-0.5,1.3004,-0.1204,0.8577,-0.4999,1.283,-0.1205,0.8576,-0.4999,1.267,-0.1205,0.8576,-0.5,1.2519,-0.1205,0.8576,-0.5,1.2373,-0.1204,0.8577,-0.4999,1.2241,-0.1203,0.8577,-0.4998,1.2123,-0.1203,0.8577,-0.4999,1.1997,-0.1205,0.8576,-0.5,1.1842,-0.1204,0.8577,-0.4999,1.1664,-0.1199,0.8579,-0.4996,1.147,-0.1198,0.858,-0.4995,1.1238,-0.1205,0.8576,-0.5,1.0948,-0.121,0.8573,-0.5004,1.0588,-0.1205,0.8575,-0.5001,1.0168,-0.1199,0.8578,-0.4997,0.9693,-0.1205,0.8576,-0.5,0.9169,-0.1221,0.8568,-0.501,0.8574,-0.1227,0.8564,-0.5016,0.7906,-0.1219,0.8567,-0.5012,0.7204,-0.1205,0.8576,-0.5,0.6512,-0.1205,0.8578,-0.4996,0.5826,-0.1215,0.8573,-0.5003,0.513,-0.1221,0.8568,-0.501,0.4448,-0.1205,0.8576,-0.5,0.3808,-0.1199,0.8584,-0.4988,0.3175,-0.1223,0.8576,-0.4996,0.2552,-0.1241,0.8566,-0.5009,0.2018,-0.1205,0.8576,-0.5,0.1655,-0.1154,0.8596,-0.4978,0.1546,-0.1165,0.8592,-0.4982,0.1628,-0.1192,0.8581,-0.4994,0.1768,-0.1205,0.8576,-0.5,0.183,-0.1207,0.8576,-0.5,0.1782,-0.1207,0.8575,-0.5001,0.1693,-0.1206,0.8576,-0.5,0.1588,-0.1205,0.8576,-0.5,0.1488,-0.1207,0.8576,-0.5,0.1392,-0.1208,0.8575,-0.5001,0.1289,-0.1208,0.8575,-0.5001,0.1193,-0.1205,0.8576,-0.5,0.1116,-0.1203,0.8577,-0.4999,0.1058,-0.1203,0.8577,-0.4999,0.1012,-0.1204,0.8576,-0.5,0.0986,-0.1205,0.8576,-0.5,0.0985,-0.1206,0.8576,-0.5,0.1019,-0.1206,0.8576,-0.5,0.1081,-0.1206,0.8576,-0.5,0.1157,-0.1205,0.8576,-0.5,0.1229,-0.1206,0.8576,-0.5,0.1299,-0.1207,0.8576,-0.5,0.1374,-0.1206,0.8576,-0.5,0.1445,-0.1205,0.8576,-0.5,0.1505,-0.1203,0.8577,-0.4999,0.1536,-0.12,0.8578,-0.4998,0.1548,-0.1201,0.8578,-0.4998,0.1572,-0.1205,0.8576,-0.5,0.1637,-0.1209,0.8575,-0.5001,0.1759,-0.1209,0.8575,-0.5001,0.192,-0.1206,0.8576,-0.5,0.2099,-0.1205,0.8576,-0.5,0.2276,-0.1209,0.8575,-0.5002,0.2462,-0.1211,0.8574,-0.5002,0.2662,-0.1209,0.8574,-0.5002,0.285,-0.1205,0.8576,-0.5,0.2999,-0.1202,0.8577,-0.4999,0.3114,-0.1202,0.8577,-0.4998,0.3207,-0.1203,0.8577,-0.4999,0.3258,-0.1205,0.8576,-0.5,0.3249,-0.1207,0.8575,-0.5001,0.3163,-0.1206,0.8575,-0.5001,0.3014,-0.1204,0.8576,-0.5,0.2829,-0.1205,0.8576,-0.5,0.2634,-0.1215,0.8573,-0.5003,0.2399,-0.1222,0.857,-0.5006,0.2122,-0.1218,0.8571,-0.5005,0.1872,-0.1205,0.8576,-0.5,0.172,-0.1198,0.8579,-0.4997,0.1703,-0.12,0.8578,-0.4998,0.1778,-0.1203,0.8577,-0.4999,0.1894,-0.1205,0.8576,-0.5,0.2002,-0.1207,0.8575,-0.5001,0.2105,-0.1208,0.8575,-0.5001,0.2224,-0.1207,0.8575,-0.5001,0.2334,-0.1205,0.8576,-0.5,0.2412,-0.1204,0.8576,-0.4999,0.2451,-0.1204,0.8577,-0.4999,0.2463,-0.1204,0.8576,-0.5,0.2454,-0.1205,0.8576,-0.5,0.2426,-0.1207,0.8576,-0.5,0.2368,-0.1207,0.8575,-0.5001,0.2283,-0.1207,0.8575,-0.5001,0.2194,-0.1205,0.8576,-0.5,0.2124,-0.1205,0.8576,-0.5,0.2084,-0.1204,0.8576,-0.5,0.2059,-0.1205,0.8576,-0.5,0.2039,-0.1205,0.8576,-0.5,0.2011,-0.1206,0.8576,-0.5,0.1965,-0.1206,0.8576,-0.5,0.1908,-0.1206,0.8576,-0.5,0.186,-0.1205,0.8576,-0.5,0.184,-0.1206,0.8576,-0.5,0.1861,-0.1206,0.8576,-0.5,0.1911,-0.1206,0.8576,-0.5,0.1967,-0.1205,0.8576,-0.5,0.2003,-0.1205,0.8576,-0.5,0.2009,-0.1205,0.8576,-0.5,0.1998,-0.1205,0.8576,-0.5,0.1987,-0.1205,0.8576,-0.5,0.1994,-0.1206,0.8576,-0.5,0.2027,-0.1206,0.8576,-0.5,0.2077,-0.1206,0.8576,-0.5,0.2129,-0.1205,0.8576,-0.5,0.2168,-0.1205,0.8576,-0.5,0.219,-0.1205,0.8576,-0.5,0.2201,-0.1205,0.8576,-0.5,0.2208,-0.1205,0.8576,-0.5,0.2219,-0.1205,0.8576,-0.5,0.2233,-0.1205,0.8576,-0.5,0.2247,-0.1205,0.8576,-0.5,0.2264,-0.1205,0.8576,-0.5,0.2286,-0.1205,0.8576,-0.5,0.2312,-0.1205,0.8576,-0.5,0.2342,-0.1205,0.8576,-0.5,0.2379,-0.1205,0.8576,-0.5,0.2431,-0.1206,0.8576,-0.5,0.2502,-0.1206,0.8576,-0.5,0.2589,-0.1206,0.8576,-0.5,0.2681,-0.1205,0.8576,-0.5,0.2766,-0.1205,0.8576,-0.5,0.2845,-0.1206,0.8576,-0.5,0.2923,-0.1206,0.8576,-0.5,0.2994,-0.1205,0.8576,-0.5,0.3055,-0.1205,0.8576,-0.5,0.3105,-0.1205,0.8576,-0.5,0.3146,-0.1205,0.8576,-0.5,0.3178,-0.1205,0.8576,-0.5,0.3203,-0.1205,0.8576,-0.5,0.3227,-0.1204,0.8576,-0.5,0.3249,-0.1204,0.8576,-0.5,0.3254,-0.1205,0.8576,-0.5,0.323,-0.1206,0.8576,-0.5,0.3166,-0.1207,0.8575,-0.5001,0.3071,-0.1206,0.8576,-0.5,0.2963,-0.1205,0.8576,-0.5,0.2861,-0.1206,0.8576,-0.5,0.2759,-0.1207,0.8575,-0.5001,0.2653,-0.1206,0.8576,-0.5,0.2554,-0.1205,0.8576,-0.5,0.2475,-0.1204,0.8576,-0.5,0.2423,-0.1204,0.8576,-0.5,0.2389,-0.1205,0.8576,-0.5,0.2365,-0.1205,0.8576,-0.5,0.2344,-0.1205,0.8576,-0.5,0.2325,-0.1205,0.8576,-0.5,0.2312,-0.1205,0.8576,-0.5,0.2302,-0.1205,0.8576,-0.5,0.2294,-0.1205,0.8576,-0.5,0.2286,-0.1205,0.8576,-0.5,0.2278,-0.1205,0.8576,-0.5,0.2276,-0.1205,0.8576,-0.5,0.2284,-0.1206,0.8576,-0.5,0.231,-0.1206,0.8576,-0.5,0.2348,-0.1205,0.8576,-0.5,0.2385,-0.1205,0.8576,-0.5,0.2408,-0.1205,0.8576,-0.5,0.2408,-0.1205,0.8576,-0.5,0.2394,-0.1205,0.8576,-0.5,0.2376,-0.1205,0.8576,-0.5,0.2366,-0.1205,0.8576,-0.5,0.2369,-0.1205,0.8576,-0.5,0.238,-0.1205,0.8576,-0.5,0.2387,-0.1205,0.8576,-0.5,0.2377,-0.1206,0.8576,-0.5,0.2343,-0.1206,0.8576,-0.5,0.2292,-0.1206,0.8576,-0.5,0.2237,-0.1205,0.8576,-0.5,0.2187,-0.1205,0.8576,-0.5,0.2147,-0.1205,0.8576,-0.5,0.2109,-0.1205,0.8576,-0.5,0.2073,-0.1205,0.8576,-0.5,0.2041,-0.1205,0.8576,-0.5,0.201,-0.1205,0.8576,-0.5,0.1982,-0.1205,0.8576,-0.5,0.1957,-0.1205,0.8576,-0.5,0.1937,-0.1205,0.8576,-0.5,0.1922,-0.1205,0.8576,-0.5,0.1911,-0.1205,0.8576,-0.5,0.1903,-0.1205,0.8576,-0.5,0.1896,-0.1205,0.8576,-0.5,0.1887,-0.1205,0.8576,-0.5,0.1878,-0.1205,0.8576,-0.5,0.1874,-0.1205,0.8576,-0.5,0.1881,-0.1206,0.8576,-0.5,0.1905,-0.1206,0.8576,-0.5,0.1942,-0.1206,0.8576,-0.5,0.1981,-0.1205,0.8576,-0.5,0.2011,-0.1205,0.8576,-0.5,0.2033,-0.1205,0.8576,-0.5,0.2052,-0.1205,0.8576,-0.5,0.2063,-0.1205,0.8576,-0.5,0.2062,-0.1206,0.8576,-0.5,0.2037,-0.1206,0.8576,-0.5,0.1994,-0.1206,0.8576,-0.5,0.1954,-0.1205,0.8576,-0.5,0.1935,-0.1205,0.8576,-0.5,0.1953,-0.1206,0.8576,-0.5,0.1993,-0.1206,0.8576,-0.5,0.2034,-0.1205,0.8576,-0.5,0.2055,-0.1205,0.8576,-0.5,0.2043,-0.1205,0.8576,-0.5,0.2014,-0.1205,0.8576,-0.5,0.1982,-0.1205,0.8576,-0.5,0.1968,-0.1205,0.8576,-0.5,0.1977,-0.1205,0.8576,-0.5,0.2,-0.1205,0.8576,-0.5,0.2026,-0.1205,0.8576,-0.5,0.2047,-0.1205,0.8576,-0.5,0.2062,-0.1205,0.8576,-0.5,0.2074,-0.1205,0.8576,-0.5,0.2082,-0.1205,0.8576,-0.5,0.2086,-0.1205,0.8576,-0.5,0.2084,-0.1205,0.8576,-0.5,0.2076,-0.1205,0.8576,-0.5,0.2065,-0.1205,0.8576,-0.5,0.2051,-0.1205,0.8576,-0.5,0.203,-0.1205,0.8576,-0.5,0.2003,-0.1205,0.8576,-0.5,0.1978,-0.1205,0.8576,-0.5,0.1962,-0.1205,0.8576,-0.5,0.1961,-0.1205,0.8576,-0.5,0.1969,-0.1205,0.8576,-0.5,0.1978,-0.1205,0.8576,-0.5,0.1978,-0.1205,0.8576,-0.5,0.1968,-0.1205,0.8576,-0.5,0.1952,-0.1205,0.8576,-0.5,0.1932,-0.1205,0.8576,-0.5,0.1911,-0.1205,0.8576,-0.5,0.1884,-0.1206,0.8576,-0.5,0.1852,-0.1205,0.8576,-0.5,0.1822,-0.1205,0.8576,-0.5,0.18,-0.1205,0.8576,-0.5,0.1786,-0.1205,0.8576,-0.5,0.1778,-0.1205,0.8576,-0.5,0.1775,-0.1205,0.8576,-0.5,0.1781,-0.1205,0.8576,-0.5,0.1795,-0.1205,0.8576,-0.5,0.1818,-0.1205,0.8576,-0.5,0.1846,-0.1205,0.8576,-0.5,0.1875,-0.1205,0.8576,-0.5,0.1909,-0.1206,0.8576,-0.5,0.1948,-0.1205,0.8576,-0.5,0.1984,-0.1205,0.8576,-0.5,0.2008,-0.1205,0.8576,-0.5,0.2014,-0.1205,0.8576,-0.5,0.2008,-0.1205,0.8576,-0.5,0.2,-0.1205,0.8576,-0.5,0.1998,-0.1205,0.8576,-0.5,0.2009,-0.1205,0.8576,-0.5,0.2026,-0.1205,0.8576,-0.5,0.2043,-0.1205,0.8576,-0.5,0.2051,-0.1205,0.8576,-0.5,0.2049,-0.1205,0.8576,-0.5,0.2039,-0.1205,0.8576,-0.5,0.2028,-0.1205,0.8576,-0.5,0.2022,-0.1205,0.8576,-0.5,0.2026,-0.1205,0.8576,-0.5,0.2034,-0.1205,0.8576,-0.5,0.2043,-0.1205,0.8576,-0.5,0.2045,-0.1205,0.8576,-0.5,0.2039,-0.1205,0.8576,-0.5,0.2028,-0.1205,0.8576,-0.5,0.2014,-0.1205,0.8576,-0.5,0.1999,-0.1205,0.8576,-0.5,0.1983,-0.1205,0.8576,-0.5,0.1966,-0.1205,0.8576,-0.5,0.1947,-0.1205,0.8576,-0.5,0.1926,-0.1205,0.8576,-0.5,0.1901,-0.1205,0.8576,-0.5,0.1873,-0.1205,0.8576,-0.5,0.1845,-0.1205,0.8576,-0.5,0.1821,-0.1205,0.8576,-0.5,0.18,-0.1205,0.8576,-0.5,0.1781,-0.1205,0.8576,-0.5,0.1766,-0.1205,0.8576,-0.5,0.1757,-0.1205,0.8576,-0.5,0.176,-0.1205,0.8576,-0.5,0.1771,-0.1205,0.8576,-0.5,0.1781,-0.1205,0.8576,-0.5,0.1778,-0.1206,0.8576,-0.5,0.1754,-0.1206,0.8576,-0.5,0.1718,-0.1206,0.8576,-0.5,0.1679,-0.1205,0.8576,-0.5,0.165,-0.1205,0.8576,-0.5,0.1624,-0.1204,0.8576,-0.5,0.16,-0.1204,0.8576,-0.5,0.1589,-0.1205,0.8576,-0.5,0.1602,-0.1207,0.8575,-0.5001,0.1661,-0.1208,0.8575,-0.5001,0.1754,-0.1207,0.8576,-0.5,0.184,-0.1205,0.8576,-0.5,0.1882,-0.1206,0.8576,-0.5,0.1859,-0.1206,0.8576,-0.5,0.1795,-0.1206,0.8576,-0.5,0.1717,-0.1205,0.8576,-0.5,0.165,-0.1205,0.8576,-0.5,0.1595,-0.1206,0.8576,-0.5,0.1539,-0.1206,0.8576,-0.5,0.1493,-0.1205,0.8576,-0.5,0.1464,-0.1205,0.8576,-0.5,0.1462,-0.1205,0.8576,-0.5,0.1479,-0.1205,0.8576,-0.5,0.1502,-0.1205,0.8576,-0.5,0.1518,-0.1205,0.8576,-0.5,0.1525,-0.1205,0.8576,-0.5,0.1531,-0.1205,0.8576,-0.5,0.1532,-0.1205,0.8576,-0.5,0.1525,-0.1206,0.8576,-0.5,0.1509,-0.1206,0.8576,-0.5,0.1484,-0.1206,0.8576,-0.5,0.1457,-0.1205,0.8576,-0.5,0.1433,-0.1204,0.8576,-0.5,0.1415,-0.1202,0.8576,-0.5,0.1397,-0.12,0.8577,-0.5,0.1382,-0.1199,0.8577,-0.5,0.1368,-0.12,0.8577,-0.5,0.1359,-0.1201,0.8576,-0.5,0.1353,-0.1204,0.8576,-0.5,0.1346,-0.1205,0.8576,-0.5,0.1333,-0.1206,0.8576,-0.5,0.1311,-0.1206,0.8576,-0.5,0.1284,-0.1206,0.8576,-0.5,0.1255,-0.1205,0.8576,-0.5,0.123,-0.1205,0.8576,-0.5,0.1211,-0.1205,0.8576,-0.5,0.1196,-0.1205,0.8576,-0.5,0.1179,-0.1205,0.8576,-0.5,0.1156,-0.1206,0.8576,-0.5,0.1122,-0.1206,0.8576,-0.5,0.1082,-0.1205,0.8576,-0.5,0.1041]);
Group704ZZZ.children[13] = OrientationInterpolator718;

let OrientationInterpolator719 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator719.DEF = "Interpolator11_rHand";
OrientationInterpolator719.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator719.keyValue = new X3D.MFRotation([0,1,0,0,0.9927,0.0937,0.076,0.5165,0.9921,0.1148,0.05,1.0617,0.9912,0.1305,0.0222,1.5422,0.9903,0.1392,0,1.8669,0.9898,0.1419,-0.0092,1.9742,0.9899,0.1415,-0.0079,1.927,0.9901,0.14,-0.0029,1.8222,0.9903,0.1392,0,1.7569,0.9903,0.1392,0,1.7546,0.9903,0.1393,-0.0001,1.7643,0.9903,0.1393,-0.0001,1.7713,0.9903,0.1392,0,1.7611,0.9903,0.139,0.0002,1.7235,0.9903,0.1389,0.0003,1.6684,0.9903,0.139,0.0002,1.611,0.9903,0.1392,0,1.5669,0.9902,0.1394,-0.0002,1.5299,0.9902,0.1397,-0.0004,1.4952,0.9902,0.1398,-0.0005,1.48,0.9903,0.1392,0,1.5019,0.9904,0.1379,0.001,1.5973,0.9905,0.1376,0.0014,1.7464,0.9904,0.1386,0.0005,1.8818,0.9903,0.1392,0,1.9358,0.9904,0.1381,0.001,1.8639,0.9906,0.137,0.002,1.7111,0.9905,0.1375,0.0015,1.5436,0.9903,0.1392,0,1.4281,0.9901,0.14,-0.0007,1.3813,0.9901,0.14,-0.0007,1.3681,0.9902,0.1396,-0.0003,1.3766,0.9903,0.1392,0,1.3952,0.9903,0.139,0.0002,1.4311,0.9903,0.1389,0.0003,1.4871,0.9903,0.139,0.0002,1.5447,0.9903,0.1392,0,1.5854,0.9902,0.1393,-0.0002,1.5956,0.9902,0.1395,-0.0003,1.5881,0.9902,0.1395,-0.0002,1.584,0.9903,0.1392,0,1.6047,0.9903,0.1386,0.0004,1.6692,0.9904,0.1384,0.0007,1.7617,0.9903,0.1387,0.0004,1.8513,0.9903,0.1392,0,1.9067,0.9902,0.1393,-0.0001,1.908,0.9903,0.1393,-0.0001,1.8756,0.9903,0.1392,-0.0001,1.8393,0.9903,0.1392,0,1.8284,0.9903,0.139,0.0001,1.8568,0.9903,0.1389,0.0002,1.9069,0.9903,0.139,0.0001,1.9607,0.9903,0.1392,0,2.0003,0.9903,0.1393,-0.0001,2.0236,0.9903,0.1393,-0.0001,2.0393,0.9903,0.1392,0,2.0455,0.9903,0.1392,0,2.0405,0.9903,0.1391,0.0001,2.0169,0.9903,0.139,0.0001,1.9781,0.9903,0.1391,0.0001,1.938,0.9903,0.1392,0,1.9105,0.9902,0.1393,-0.0001,1.893,0.9902,0.1395,-0.0002,1.8803,0.9902,0.1395,-0.0002,1.8821,0.9903,0.1392,0,1.9084,0.9904,0.1386,0.0004,1.9743,0.9904,0.1383,0.0005,2.0704,0.9903,0.1386,0.0003,2.1699,0.9903,0.1392,0,2.2457,0.9902,0.1396,-0.0002,2.2809,0.9902,0.1398,-0.0003,2.2931,0.9902,0.1397,-0.0002,2.3072,0.9903,0.1392,0,2.3481,0.9904,0.1384,0.0002,2.4338,0.9904,0.138,0.0004,2.5473,0.9904,0.1384,0.0002,2.6611,0.9903,0.1392,0,2.7479,0.9902,0.1395,-0.0001,2.7979,0.9902,0.1395,-0.0001,2.8266,0.9903,0.1393,0,2.8439,0.9903,0.1392,0,2.8599,0.9903,0.1392,0,2.879,0.9903,0.1392,0,2.8952,0.9903,0.1392,0,2.9033,0.9903,0.1392,0,2.8982,0.9903,0.1391,0,2.8763,0.9903,0.1392,0,2.8411,0.9903,0.1392,0,2.798,0.9903,0.1392,0,2.7524,0.9903,0.1391,0,2.7035,0.9903,0.1391,0,2.6493,0.9903,0.1391,0,2.593,0.9903,0.1392,0,2.5379,0.9903,0.1392,0,2.4853,0.9903,0.1392,0,2.4334,0.9903,0.1392,0,2.3805,0.9903,0.1392,0,2.3246,0.9903,0.1391,0,2.2653,0.9903,0.1391,0,2.2035,0.9903,0.1392,0,2.1397,0.9903,0.1392,0,2.0745,0.9903,0.1391,0.0001,2.0068,0.9903,0.1391,0.0001,1.9368,0.9903,0.1391,0,1.8665,0.9903,0.1392,0,1.7981,0.9903,0.1392,0,1.733,0.9903,0.1392,-0.0001,1.6699,0.9903,0.1392,-0.0001,1.6063,0.9903,0.1392,0,1.5397,0.9903,0.1391,0.0001,1.4692,0.9903,0.1391,0,1.3963,0.9903,0.1391,0,1.3219,0.9903,0.1392,0,1.2468,0.9903,0.1392,0,1.1715,0.9903,0.1392,0,1.0954,0.9903,0.1391,-0.0001,1.0179,0.9903,0.1392,0,0.9386,0.9903,0.1391,0.0003,0.8548,0.9903,0.139,0.0006,0.7677,0.9903,0.1389,0.0005,0.682,0.9903,0.1392,0,0.6026,0.9902,0.1394,0.0001,0.5266,0.9902,0.1393,0.0007,0.4527,0.9903,0.1391,0.0009,0.3887,0.9903,0.1392,0,0.3425,0.9902,0.1398,-0.0022,0.3099,0.9901,0.1405,-0.0043,0.2889,0.9901,0.1405,-0.0039,0.2902,0.9903,0.1392,0,0.3245,0.9904,0.1385,0.0037,0.405,0.9903,0.1389,0.0037,0.5224,0.9902,0.1393,0.0016,0.654,0.9903,0.1392,0,0.777,0.9903,0.1391,-0.0002,0.8864,0.9902,0.1393,-0.0002,0.994,0.9902,0.1395,-0.0001,1.1025,0.9903,0.1392,0,1.2148,0.9903,0.1386,0.0003,1.3358,0.9904,0.1385,0.0006,1.4626,0.9903,0.1388,0.0005,1.5866,0.9903,0.1392,0,1.6991,0.9903,0.1392,-0.0003,1.8005,0.9903,0.139,-0.0001,1.8947,0.9903,0.1389,0.0001,1.9777,0.9903,0.1392,0,2.0457,0.9902,0.1394,-0.0002,2.0935,0.9902,0.1394,-0.0002,2.1247,0.9903,0.1393,-0.0001,2.1478,0.9903,0.1392,0,2.1719,0.9903,0.1392,0,2.2049,0.9903,0.1392,0,2.2403,0.9903,0.1393,-0.0001,2.2648,0.9903,0.1392,0,2.2648,0.9903,0.1389,0.0001,2.2266,0.9903,0.1387,0.0002,2.1606,0.9903,0.1389,0.0002,2.0904,0.9903,0.1392,0,2.0394,0.9902,0.1394,-0.0001,2.0093,0.9902,0.1394,-0.0001,1.9892,0.9902,0.1394,-0.0001,1.9833,0.9903,0.1392,0,1.9961,0.9903,0.1388,0.0002,2.0456,0.9903,0.1387,0.0003,2.1239,0.9903,0.139,0.0001,2.1961,0.9903,0.1392,0,2.2272,0.9903,0.139,0.0001,2.1988,0.9903,0.1388,0.0002,2.1324,0.9903,0.1389,0.0001,2.0536,0.9903,0.1392,0,1.9876,0.9902,0.1394,-0.0001,1.9449,0.9902,0.1395,-0.0003,1.9108,0.9902,0.1395,-0.0003,1.8728,0.9903,0.1392,0,1.8186,0.9903,0.1392,-0.0007,1.7544,0.9902,0.1397,-0.0022,1.6835,0.9902,0.1399,-0.0025,1.5897,0.9903,0.1392,0,1.4563,0.9906,0.1367,0.005,1.2576,0.9909,0.134,0.0086,1.0089,0.9909,0.1342,0.007,0.7556,0.9903,0.1392,0,0.5436,0.9894,0.1453,-0.0049,0.3828,0.989,0.1481,-0.0041,0.2497,0.9895,0.1446,0.0022,0.14,0.9903,0.1392,0,0.0498,-0.9901,-0.1224,-0.0684,0.0164,-0.9907,-0.1346,-0.0175,0.0581,-0.9904,-0.138,-0.0039,0.0862,-0.9903,-0.1392,0,0.1114,-0.9903,-0.1392,-0.0009,0.1341,-0.9903,-0.1392,-0.0007,0.1493,-0.9903,-0.1392,-0.0002,0.1601,-0.9903,-0.1392,0,0.1695,-0.9903,-0.1392,-0.0001,0.1775,-0.9903,-0.1392,-0.0001,0.1828,-0.9903,-0.1392,0,0.1865,-0.9903,-0.1392,0,0.1901,-0.9903,-0.1392,0,0.1929,-0.9903,-0.1392,0,0.1947,-0.9903,-0.1392,0,0.1968,-0.9903,-0.1392,0,0.2006,-0.9903,-0.1392,0,0.2069,-0.9903,-0.1392,0,0.2149,-0.9903,-0.1392,0,0.2233,-0.9903,-0.1392,0,0.2311,-0.9903,-0.1392,0,0.2383,-0.9903,-0.1392,0,0.2454,-0.9903,-0.1392,0,0.252,-0.9903,-0.1392,0,0.2575,-0.9903,-0.1392,0,0.2616,-0.9903,-0.1392,0,0.2645,-0.9903,-0.1392,0,0.267,-0.9903,-0.1392,0,0.2701,-0.9903,-0.1392,0,0.2739,-0.9903,-0.1392,0,0.2781,-0.9903,-0.1392,0,0.2823,-0.9903,-0.1392,0,0.2862,-0.9903,-0.1392,0,0.2904,-0.9903,-0.1392,0,0.2947,-0.9903,-0.1392,0,0.2982,-0.9903,-0.1392,0,0.3,-0.9903,-0.1392,0,0.2989,-0.9903,-0.1392,0,0.2956,-0.9903,-0.1392,0,0.2923,-0.9903,-0.1392,0,0.2912,-0.9903,-0.1392,0,0.2936,-0.9903,-0.1392,0,0.298,-0.9903,-0.1392,0,0.3026,-0.9903,-0.1392,0,0.3052,-0.9903,-0.1392,0,0.304,-0.9903,-0.1392,0,0.3004,-0.9903,-0.1392,0,0.2976,-0.9903,-0.1392,0,0.2988,-0.9903,-0.1392,0.0001,0.3067,-0.9903,-0.1392,0.0001,0.319,-0.9903,-0.1392,0.0001,0.3312,-0.9903,-0.1392,0,0.339,-0.9903,-0.1392,0,0.3403,-0.9903,-0.1392,0,0.338,-0.9903,-0.1392,0,0.3341,-0.9903,-0.1392,0,0.3312,-0.9903,-0.1392,0,0.3288,-0.9903,-0.1392,0,0.3259,-0.9903,-0.1392,0,0.3243,-0.9903,-0.1392,0,0.3255,-0.9903,-0.1392,0,0.3315,-0.9903,-0.1392,0.0001,0.341,-0.9903,-0.1392,0,0.3505,-0.9903,-0.1392,0,0.3566,-0.9903,-0.1392,0,0.3588,-0.9903,-0.1392,0,0.3588,-0.9903,-0.1392,0,0.3565,-0.9903,-0.1392,0,0.3516,-0.9903,-0.1392,0.0001,0.3417,-0.9903,-0.1392,0.0001,0.3277,-0.9903,-0.1392,0.0001,0.3143,-0.9903,-0.1392,0,0.3064,-0.9903,-0.1392,0,0.3062,-0.9903,-0.1392,0,0.3109,-0.9903,-0.1392,0,0.3174,-0.9903,-0.1392,0,0.3226,-0.9903,-0.1392,0,0.3271,-0.9903,-0.1392,0,0.3322,-0.9903,-0.1392,0,0.3354,-0.9903,-0.1392,0,0.3342,-0.9903,-0.1392,0,0.3274,-0.9903,-0.1392,0,0.3167,-0.9903,-0.1392,0,0.3032,-0.9903,-0.1392,0,0.2881,-0.9903,-0.1392,-0.0003,0.2746,-0.9903,-0.1392,-0.0009,0.261,-0.9903,-0.1392,-0.0011,0.2416,-0.9903,-0.1392,0,0.2106,-0.9908,-0.1354,-0.0082,0.1814,-0.9915,-0.1275,-0.0275,0.1521,-0.9917,-0.1194,-0.0482,0.0941,0.9903,0.1392,0,0.0211,0.989,0.1452,0.0284,0.2068,0.9882,0.1524,0.0153,0.4454,0.9888,0.1491,0.0041,0.7195,0.9903,0.1392,0,1.0125,0.9919,0.1269,0.0051,1.3729,0.9922,0.1245,0.0087,1.7937,0.9913,0.1314,0.0062,2.1733,0.9903,0.1392,0,2.4091,0.9899,0.1419,-0.0034,2.4439,0.99,0.141,-0.0027,2.3424,0.9902,0.1396,-0.0009,2.1854,0.9903,0.1392,0,2.0534,0.9903,0.1391,0.0001,1.9594,0.9903,0.1391,0,1.8634,0.9903,0.1391,-0.0001,1.7658,0.9903,0.1392,0,1.6671,0.9903,0.1391,0.0002,1.5655,0.9903,0.139,0.0003,1.4614,0.9903,0.1389,0.0002,1.3583,0.9903,0.1392,0,1.2597,0.9902,0.1394,0,1.1662,0.9903,0.1393,0.0001,1.0759,0.9903,0.1391,0.0001,0.989,0.9903,0.1392,0,0.9053,0.9902,0.1394,0,0.8246,0.9903,0.1393,0.0001,0.7471,0.9903,0.1391,0.0002,0.6731,0.9903,0.1392,0,0.6031,0.9902,0.1394,-0.0001,0.5359,0.9903,0.1393,0.0003,0.4717,0.9903,0.1391,0.0005,0.4131,0.9903,0.1392,0,0.3628,0.9902,0.1394,-0.0008,0.3245,0.9902,0.1394,-0.0009,0.2958,0.9903,0.1393,-0.0005,0.2703,0.9903,0.1392,0,0.2415,0.9903,0.1392,0.0005,0.2051,0.9903,0.1391,0.0011,0.1655,0.9903,0.1391,0.0011,0.1291,0.9903,0.1392,0,0.1023,0.9902,0.1394,-0.002,0.084,0.9902,0.1396,-0.0039,0.0716,0.9902,0.1396,-0.0035,0.0698,0.9903,0.1392,0,0.0834,0.9897,0.1429,-0.0066,0.1058,0.9891,0.1468,-0.0153,0.1371,0.9894,0.1448,-0.0122,0.1918,0.9903,0.1392,0,0.2843,0.99,0.1409,0.0058,0.4203,0.9894,0.145,0.0035,0.5914,0.9895,0.1444,0.0002,0.7905,0.9903,0.1392,0,1.0111,0.9912,0.1324,0.0042,1.2832,0.9914,0.1308,0.0065,1.6003,0.9909,0.1345,0.0045,1.901,0.9903,0.1392,0,2.1236,0.99,0.1413,-0.0028,2.2419,0.99,0.1411,-0.0025,2.2921,0.9902,0.1399,-0.0009,2.3066,0.9903,0.1392,0,2.3175,0.9903,0.1393,-0.0001,2.3275,0.9903,0.1393,-0.0001,2.3214,0.9903,0.1393,0,2.3046,0.9903,0.1392,0,2.2824,0.9903,0.1391,0,2.2533,0.9903,0.1391,0,2.2154,0.9903,0.1391,0,2.1736,0.9903,0.1392,0,2.1326,0.9903,0.1392,0,2.0953,0.9903,0.1393,-0.0001,2.0586,0.9903,0.1393,-0.0001,2.0184,0.9903,0.1392,0,1.9704,0.9903,0.139,0.0001,1.9105,0.9903,0.1389,0.0002,1.842,0.9903,0.139,0.0001,1.7717,0.9903,0.1392,0,1.7065,0.9903,0.1392,0,1.6481,0.9903,0.1392,0,1.5928,0.9903,0.1392,0,1.5396,0.9903,0.1392,0,1.4873,0.9903,0.1392,0.0001,1.433,0.9903,0.1391,0.0001,1.3783,0.9903,0.1391,0.0001,1.3284,0.9903,0.1392,0,1.2888,0.9903,0.1393,-0.0001,1.2628,0.9903,0.1393,-0.0001,1.2471,0.9903,0.1392,0,1.2364,0.9903,0.1392,0,1.2256,0.9903,0.1392,0,1.2141,0.9903,0.1392,0,1.2045,0.9903,0.1392,0,1.1959,0.9903,0.1392,0,1.1878,0.9903,0.1392,0,1.1809,0.9903,0.1392,0,1.1753,0.9903,0.1392,0,1.1691,0.9903,0.1392,0,1.1603,0.9903,0.1392,0,1.1489,0.9903,0.1392,0,1.1358,0.9903,0.1392,0,1.1203,0.9903,0.1392,0,1.1017,0.9903,0.1392,0,1.081,0.9903,0.1392,-0.0001,1.058,0.9903,0.1392,-0.0001,1.0309,0.9903,0.1392,0,0.998,0.9903,0.1391,0.0003,0.9544,0.9903,0.139,0.0004,0.9026,0.9903,0.139,0.0003,0.8513,0.9903,0.1392,0,0.8093,0.9903,0.1393,-0.0002,0.7791,0.9903,0.1393,-0.0001,0.7559,0.9903,0.1392,0,0.7378,0.9903,0.1392,0,0.723,0.9903,0.1392,-0.0001,0.7088,0.9903,0.1392,-0.0001,0.697,0.9903,0.1392,-0.0001,0.6921,0.9903,0.1392,0,0.6987,0.9903,0.1391,0.0002,0.7223,0.9903,0.1391,0.0003,0.759,0.9903,0.1391,0.0002,0.7993,0.9903,0.1392,0,0.8339,0.9903,0.1392,-0.0001,0.8596,0.9903,0.1392,-0.0001,0.8817,0.9903,0.1392,-0.0001,0.9033,0.9903,0.1392,0,0.9275,0.9903,0.1392,0,0.9554,0.9903,0.1392,0,0.9852,0.9903,0.1392,0,1.0159,0.9903,0.1392,0,1.0467,0.9903,0.1392,0,1.0776,0.9903,0.1392,0,1.109,0.9903,0.1392,0,1.1404,0.9903,0.1392,0,1.1711,0.9903,0.1392,0,1.2025,0.9903,0.1391,0,1.2345,0.9903,0.1391,0,1.2639,0.9903,0.1392,0,1.288,0.9903,0.1392,0,1.3047,0.9903,0.1392,0,1.316,0.9903,0.1392,0,1.3247,0.9903,0.1392,0,1.3337,0.9903,0.1392,0,1.3453,0.9903,0.1392,0,1.3573,0.9903,0.1392,0,1.3663,0.9903,0.1392,0,1.3685,0.9903,0.1392,0,1.3605,0.9903,0.1392,0,1.3452,0.9903,0.1392,0,1.3281,0.9903,0.1392,0,1.3152,0.9903,0.1392,0,1.306,0.9903,0.1392,0,1.2982,0.9903,0.1392,0,1.2942,0.9903,0.1392,0,1.2967,0.9903,0.1392,0,1.3073,0.9903,0.1392,0,1.3243,0.9903,0.1392,0,1.345,0.9903,0.1392,0,1.3668,0.9903,0.1391,0,1.3927,0.9903,0.1391,0.0001,1.4228,0.9903,0.1391,0.0001,1.4501,0.9903,0.1392,0,1.4678,0.9903,0.1392,-0.0001,1.4748,0.9903,0.1392,-0.0001,1.4745,0.9903,0.1392,-0.0001,1.4666,0.9903,0.1392,0,1.4506,0.9903,0.1391,0.0001,1.4231,0.9903,0.1391,0.0001,1.3852,0.9903,0.1391,0.0001,1.3442,0.9903,0.1392,0,1.3072,0.9903,0.1392,0,1.2743,0.9903,0.1392,0,1.2422,0.9903,0.1391,0,1.2132,0.9903,0.1392,0,1.1896,0.9903,0.1392,0,1.1731,0.9903,0.1392,0,1.1621,0.9903,0.1392,0,1.154,0.9903,0.1392,0,1.1462,0.9903,0.1392,0,1.1375,0.9903,0.1392,0,1.1296,0.9903,0.1392,0,1.1237,0.9903,0.1392,0,1.1214,0.9903,0.1392,0,1.1228,0.9903,0.1392,0,1.1273,0.9903,0.1392,0,1.1348,0.9903,0.1392,0,1.1456,0.9903,0.1391,0,1.1624,0.9903,0.1391,0.0001,1.1843,0.9903,0.1391,0,1.2054,0.9903,0.1392,0,1.2197,0.9903,0.1392,0,1.2244,0.9903,0.1392,0,1.2233,0.9903,0.1392,0,1.2196,0.9903,0.1392,0,1.2169,0.9903,0.1392,0,1.2153,0.9903,0.1392,0,1.2131,0.9903,0.1392,0,1.2115,0.9903,0.1392,0,1.2112,0.9903,0.1392,0,1.2128,0.9903,0.1392,0,1.2158,0.9903,0.1392,0,1.2193,0.9903,0.1392,0,1.2227,0.9903,0.1392,0,1.2262,0.9903,0.1392,0,1.23,0.9903,0.1392,0,1.2335,0.9903,0.1392,0,1.2362,0.9903,0.1392,0,1.237,0.9903,0.1392,0,1.2364,0.9903,0.1392,0,1.2366,0.9903,0.1392,0,1.2394,0.9903,0.1392,0,1.2456,0.9903,0.1392,0,1.2539,0.9903,0.1392,0,1.2638,0.9903,0.1392,0,1.2747,0.9903,0.1392,0,1.2876,0.9903,0.1392,0,1.3024,0.9903,0.1392,0,1.3168,0.9903,0.1392,0,1.3285,0.9903,0.1392,0,1.3368,0.9903,0.1392,0,1.3429,0.9903,0.1392,0,1.3474,0.9903,0.1392,0,1.3508,0.9903,0.1392,0,1.3533,0.9903,0.1392,0,1.3547,0.9903,0.1392,0,1.3544,0.9903,0.1392,0,1.3522,0.9903,0.1392,0,1.3467,0.9903,0.1392,0,1.3385,0.9903,0.1392,0,1.33,0.9903,0.1392,0,1.3238,0.9903,0.1392,0,1.3206,0.9903,0.1392,0,1.3191,0.9903,0.1392,0,1.3183,0.9903,0.1392,0,1.3172,0.9903,0.1392,0,1.3153,0.9903,0.1392,0,1.3132,0.9903,0.1392,0,1.3114,0.9903,0.1392,0,1.3101,0.9903,0.1392,0,1.3095,0.9903,0.1392,0,1.3093,0.9903,0.1392,0,1.3095,0.9903,0.1392,0,1.3101,0.9903,0.1392,0,1.3119,0.9903,0.1392,0,1.3146,0.9903,0.1392,0,1.3168,0.9903,0.1392,0,1.3169,0.9903,0.1392,0,1.3136,0.9903,0.1392,0,1.3082,0.9903,0.1392,0,1.3025,0.9903,0.1392,0,1.2986,0.9903,0.1392,0,1.2972,0.9903,0.1392,0,1.2971,0.9903,0.1392,0,1.2978,0.9903,0.1392,0,1.2988,0.9903,0.1392,0,1.2991,0.9903,0.1392,0,1.2993,0.9903,0.1392,0,1.3011,0.9903,0.1392,0,1.3063,0.9903,0.1392,0,1.3152,0.9903,0.1392,0,1.3268,0.9903,0.1392,0,1.3412,0.9903,0.1392,0,1.3583,0.9903,0.1391,0,1.3797,0.9903,0.1391,0,1.4051,0.9903,0.1391,0,1.4308,0.9903,0.1392,0,1.4534,0.9903,0.1392,0,1.4707,0.9903,0.1392,0,1.485,0.9903,0.1392,0,1.4995,0.9903,0.1392,0,1.5177,0.9903,0.1391,0,1.5415,0.9903,0.1391,0,1.5688,0.9903,0.1392,0,1.5967,0.9903,0.1392,0,1.6222,0.9903,0.1392,0,1.6449,0.9903,0.1392,0,1.6664,0.9903,0.1392,0,1.6862,0.9903,0.1392,0,1.7041,0.9903,0.1392,0,1.7205,0.9903,0.1392,0,1.7353,0.9903,0.1392,0,1.7477,0.9903,0.1392,0,1.7566,0.9903,0.1392,0,1.761,0.9903,0.1392,0,1.7617,0.9903,0.1392,0,1.7603,0.9903,0.1392,0,1.7587,0.9903,0.1392,0,1.7571,0.9903,0.1392,0,1.7547,0.9903,0.1392,0,1.7513,0.9903,0.1392,0,1.7466,0.9903,0.1392,0,1.7401,0.9903,0.1392,0,1.7321,0.9903,0.1392,0,1.7234,0.9903,0.1392,0,1.715,0.9903,0.1392,0,1.7076,0.9903,0.1392,0,1.7006,0.9903,0.1392,0,1.6927,0.9903,0.1392,0,1.6825,0.9903,0.1392,0,1.6688,0.9903,0.1392,0,1.6524,0.9903,0.1392,0,1.636,0.9903,0.1392,0,1.6218,0.9903,0.1392,0,1.6104,0.9903,0.1392,0,1.6005,0.9903,0.1392,0,1.592,0.9903,0.1392,0,1.5847,0.9903,0.1392,0,1.5795,0.9903,0.1392,0,1.5763,0.9903,0.1392,0,1.5731,0.9903,0.1392,0,1.5678,0.9903,0.1392,0,1.5584,0.9903,0.1392,0,1.5466,0.9903,0.1392,0,1.5356,0.9903,0.1392,0,1.5288,0.9903,0.1392,0,1.5285,0.9903,0.1392,0,1.5323,0.9903,0.1392,0,1.5361]);
Group704ZZZ.children[14] = OrientationInterpolator719;

let OrientationInterpolator720 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator720.DEF = "Interpolator12_rThumb1";
OrientationInterpolator720.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator720.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0]);
Group704ZZZ.children[15] = OrientationInterpolator720;

let OrientationInterpolator721 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator721.DEF = "Interpolator13_rThumb2";
OrientationInterpolator721.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator721.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0]);
Group704ZZZ.children[16] = OrientationInterpolator721;

let OrientationInterpolator722 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator722.DEF = "Interpolator14_rIndex1";
OrientationInterpolator722.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator722.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0]);
Group704ZZZ.children[17] = OrientationInterpolator722;

let OrientationInterpolator723 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator723.DEF = "Interpolator15_rIndex2";
OrientationInterpolator723.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator723.keyValue = new X3D.MFRotation([0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657,0.5727,0.0827,0.8156,0.1657]);
Group704ZZZ.children[18] = OrientationInterpolator723;

let OrientationInterpolator724 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator724.DEF = "Interpolator16_rMid1";
OrientationInterpolator724.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator724.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0]);
Group704ZZZ.children[19] = OrientationInterpolator724;

let OrientationInterpolator725 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator725.DEF = "Interpolator17_rMid2";
OrientationInterpolator725.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator725.keyValue = new X3D.MFRotation([0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535,0.3141,0.0416,0.9485,0.0535]);
Group704ZZZ.children[20] = OrientationInterpolator725;

let OrientationInterpolator726 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator726.DEF = "Interpolator18_rRing1";
OrientationInterpolator726.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator726.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0]);
Group704ZZZ.children[21] = OrientationInterpolator726;

let OrientationInterpolator727 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator727.DEF = "Interpolator19_rRing2";
OrientationInterpolator727.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator727.keyValue = new X3D.MFRotation([0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799,0.0706,0.0089,0.9975,0.1799]);
Group704ZZZ.children[22] = OrientationInterpolator727;

let OrientationInterpolator728 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator728.DEF = "Interpolator20_rPinky1";
OrientationInterpolator728.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator728.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0]);
Group704ZZZ.children[23] = OrientationInterpolator728;

let OrientationInterpolator729 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator729.DEF = "Interpolator21_rPinky2";
OrientationInterpolator729.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator729.keyValue = new X3D.MFRotation([-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041,-0.3103,-0.0949,0.9459,0.041]);
Group704ZZZ.children[24] = OrientationInterpolator729;

let OrientationInterpolator730 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator730.DEF = "Interpolator22_lCollar";
OrientationInterpolator730.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator730.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0]);
Group704ZZZ.children[25] = OrientationInterpolator730;

let OrientationInterpolator731 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator731.DEF = "Interpolator23_lShldr";
OrientationInterpolator731.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator731.keyValue = new X3D.MFRotation([0,1,0,0,-0.9297,0.3282,-0.1672,0.1407,-0.9293,0.3397,-0.1449,0.2901,-0.9277,0.3521,-0.1243,0.4185,-0.9248,0.3643,-0.1099,0.4973,-0.9199,0.3781,-0.1041,0.5053,-0.9119,0.3969,-0.1042,0.4633,-0.8999,0.4227,-0.1073,0.4057,-0.886,0.45,-0.1124,0.3668,-0.8733,0.472,-0.1211,0.3528,-0.8607,0.4913,-0.1339,0.3464,-0.8501,0.5052,-0.1488,0.3459,-0.8431,0.5122,-0.1637,0.3496,-0.8418,0.5097,-0.1778,0.3594,-0.8446,0.5001,-0.191,0.3756,-0.8484,0.489,-0.2029,0.3933,-0.8505,0.4804,-0.214,0.408,-0.8519,0.473,-0.2249,0.4183,-0.8534,0.465,-0.2355,0.4268,-0.8536,0.4591,-0.2462,0.4344,-0.8509,0.458,-0.2572,0.442,-0.8443,0.4636,-0.2689,0.4502,-0.8348,0.4735,-0.2811,0.4583,-0.8245,0.4842,-0.2928,0.4656,-0.8156,0.4927,-0.3034,0.4712,-0.8097,0.4975,-0.3114,0.4769,-0.8053,0.5005,-0.3178,0.4825,-0.7997,0.5042,-0.326,0.4839,-0.7897,0.5109,-0.3397,0.4775,-0.7699,0.5241,-0.3641,0.457,-0.7394,0.5426,-0.3986,0.4268,-0.7037,0.5609,-0.436,0.3989,-0.6761,0.5712,-0.4654,0.3839,-0.6695,0.5673,-0.4796,0.3874,-0.6768,0.5551,-0.4836,0.4022,-0.6862,0.544,-0.4829,0.4195,-0.6886,0.5408,-0.4831,0.4302,-0.6809,0.5482,-0.4857,0.4308,-0.668,0.5618,-0.488,0.4266,-0.6543,0.5771,-0.4887,0.4216,-0.6449,0.5894,-0.4865,0.4194,-0.6411,0.5976,-0.4814,0.4207,-0.6405,0.6041,-0.4741,0.4236,-0.643,0.609,-0.4645,0.4276,-0.6485,0.6121,-0.4525,0.4326,-0.6582,0.6128,-0.4373,0.4389,-0.6713,0.6112,-0.4193,0.4467,-0.6847,0.6088,-0.4007,0.455,-0.6962,0.6071,-0.3832,0.463,-0.707,0.6059,-0.3648,0.471,-0.7177,0.6046,-0.3456,0.4793,-0.7255,0.6042,-0.3296,0.4866,-0.7278,0.6061,-0.3209,0.4914,-0.7205,0.6131,-0.3241,0.4913,-0.7059,0.6238,-0.3357,0.4879,-0.692,0.6328,-0.3474,0.4851,-0.6879,0.6353,-0.3508,0.4864,-0.7005,0.6265,-0.3419,0.4957,-0.7219,0.6104,-0.3261,0.5103,-0.7416,0.5953,-0.3092,0.524,-0.7519,0.5891,-0.2959,0.5297,-0.7499,0.5958,-0.2875,0.5233,-0.7402,0.611,-0.2808,0.5091,-0.7273,0.6296,-0.2732,0.4933,-0.7173,0.6455,-0.2624,0.4813,-0.7117,0.6575,-0.2472,0.4738,-0.7077,0.6683,-0.2292,0.4682,-0.7058,0.6766,-0.21,0.4646,-0.7069,0.6809,-0.1918,0.4634,-0.7127,0.6793,-0.1748,0.4656,-0.7223,0.6731,-0.1588,0.4707,-0.7324,0.6655,-0.1439,0.4762,-0.74,0.6599,-0.1303,0.4797,-0.7445,0.6574,-0.1161,0.4795,-0.7476,0.6563,-0.1018,0.4772,-0.7501,0.6551,-0.0903,0.4751,-0.7528,0.6528,-0.0851,0.4752,-0.7544,0.6504,-0.089,0.4781,-0.755,0.6482,-0.0994,0.4826,-0.7572,0.6435,-0.1117,0.4885,-0.7638,0.6339,-0.1216,0.4957,-0.7773,0.6158,-0.1283,0.506,-0.7945,0.5923,-0.1339,0.5193,-0.8103,0.5693,-0.139,0.5319,-0.8212,0.5522,-0.1439,0.5395,-0.8266,0.5426,-0.1494,0.5389,-0.8291,0.5371,-0.1552,0.5328,-0.8308,0.5329,-0.1604,0.5255,-0.8336,0.5275,-0.1641,0.5215,-0.8378,0.5199,-0.1665,0.5222,-0.8425,0.5118,-0.168,0.5252,-0.8471,0.5043,-0.1677,0.5291,-0.8511,0.4985,-0.1647,0.5324,-0.8534,0.4965,-0.1585,0.5336,-0.8547,0.4971,-0.1497,0.5338,-0.8571,0.4961,-0.1391,0.5356,-0.8628,0.4891,-0.1279,0.5415,-0.8752,0.4696,-0.1156,0.552,-0.8909,0.4424,-0.1027,0.5663,-0.903,0.4199,-0.0907,0.5842,-0.9068,0.4137,-0.0807,0.6051,-0.8984,0.433,-0.0729,0.6341,-0.8824,0.4659,-0.0656,0.6699,-0.8668,0.4953,-0.0574,0.7012,-0.8595,0.5088,-0.0485,0.7163,-0.8641,0.5019,-0.0378,0.7018,-0.8758,0.4821,-0.0238,0.6672,-0.8894,0.457,-0.0083,0.6352,-0.8992,0.4376,0.0016,0.6289,-0.9034,0.4287,-0.0018,0.6648,-0.9045,0.4263,-0.0107,0.727,-0.9037,0.4279,-0.0153,0.7896,-0.9029,0.4297,-0.0122,0.8269,-0.9029,0.4298,0,0.8276,-0.9026,0.4302,0.0187,0.8074,-0.9008,0.4324,0.0396,0.781,-0.8974,0.4376,0.0561,0.7633,-0.8922,0.4471,0.0643,0.7567,-0.8853,0.46,0.0677,0.7538,-0.8785,0.4726,0.0697,0.7536,-0.8734,0.4815,0.0735,0.7552,-0.87,0.4863,0.0808,0.7561,-0.8678,0.4888,0.0897,0.7574,-0.8672,0.4882,0.0977,0.7638,-0.8689,0.4842,0.1024,0.7797,-0.8737,0.4754,0.103,0.8124,-0.8802,0.4637,0.1015,0.8576,-0.8861,0.4526,0.0997,0.9022,-0.8905,0.4441,0.0984,0.9327,-0.8939,0.4376,0.0972,0.9456,-0.8971,0.4315,0.0955,0.9479,-0.8997,0.4265,0.0932,0.9424,-0.9014,0.4236,0.0901,0.9316,-0.9011,0.4247,0.0874,0.9107,-0.8993,0.4291,0.0848,0.8802,-0.8979,0.4328,0.0802,0.8502,-0.8994,0.4312,0.0712,0.8311,-0.9047,0.4224,0.056,0.8282,-0.9117,0.4092,0.0363,0.8358,-0.9194,0.3931,0.0148,0.8474,-0.9269,0.3752,-0.0063,0.8563,-0.9348,0.3541,-0.0269,0.8622,-0.9428,0.3299,-0.0482,0.8687,-0.9499,0.3046,-0.0699,0.8738,-0.9556,0.2798,-0.0923,0.8757,-0.9599,0.2555,-0.1151,0.874,-0.9632,0.2303,-0.1383,0.8695,-0.9653,0.2041,-0.1628,0.8623,-0.9659,0.1764,-0.1893,0.8523,-0.9649,0.1464,-0.2181,0.8374,-0.9618,0.1132,-0.2491,0.8186,-0.9564,0.0776,-0.2815,0.8007,-0.9485,0.0413,-0.3142,0.7885,-0.938,0.0061,-0.3466,0.7848,-0.9252,-0.0281,-0.3784,0.7868,-0.9103,-0.062,-0.4093,0.7907,-0.893,-0.0971,-0.4394,0.7926,-0.8718,-0.1358,-0.4706,0.789,-0.8464,-0.1775,-0.5021,0.7833,-0.82,-0.2183,-0.529,0.7812,-0.7975,-0.2534,-0.5476,0.7876,-0.7821,-0.2787,-0.5574,0.8038,-0.7722,-0.297,-0.5617,0.8259,-0.7651,-0.3124,-0.563,0.8505,-0.7582,-0.3293,-0.5628,0.8745,-0.7518,-0.348,-0.56,0.8991,-0.7468,-0.3665,-0.5549,0.9252,-0.7408,-0.3852,-0.5502,0.9495,-0.7319,-0.4051,-0.5479,0.9684,-0.7202,-0.426,-0.5476,0.9825,-0.7066,-0.4479,-0.5479,0.9932,-0.6899,-0.472,-0.5489,0.9989,-0.6687,-0.4997,-0.5505,0.9978,-0.6369,-0.5377,-0.5525,0.9844,-0.5943,-0.5838,-0.5531,0.9631,-0.5515,-0.6254,-0.5521,0.946,-0.5234,-0.6492,-0.5519,0.9417,-0.5205,-0.647,-0.5572,0.9549,-0.5337,-0.6278,-0.5666,0.9788,-0.5501,-0.6052,-0.5754,1.0033,-0.5591,-0.5921,-0.5804,1.0176,-0.5594,-0.5917,-0.5805,1.0177,-0.5565,-0.5969,-0.578,1.0097,-0.5508,-0.6057,-0.5743,0.997,-0.5426,-0.616,-0.5712,0.9833,-0.5311,-0.6277,-0.5692,0.9692,-0.516,-0.6418,-0.5674,0.9531,-0.4982,-0.6578,-0.5648,0.9353,-0.4789,-0.6753,-0.5608,0.9159,-0.4556,-0.6968,-0.554,0.8926,-0.4275,-0.7216,-0.5446,0.8665,-0.3997,-0.7445,-0.5347,0.8426,-0.3789,-0.7603,-0.5276,0.825,-0.3699,-0.7665,-0.5251,0.8149,-0.3694,-0.7662,-0.5259,0.8092,-0.3727,-0.7628,-0.5285,0.8064,-0.3748,-0.7598,-0.5313,0.8048,-0.3756,-0.7574,-0.534,0.804,-0.3774,-0.7541,-0.5375,0.8051,-0.3786,-0.7505,-0.5417,0.8077,-0.3777,-0.7474,-0.5466,0.8116,-0.3753,-0.7444,-0.5522,0.8181,-0.3721,-0.7413,-0.5585,0.8269,-0.3664,-0.7392,-0.565,0.8356,-0.3566,-0.7392,-0.5714,0.8417,-0.342,-0.7413,-0.5774,0.8449,-0.3235,-0.745,-0.5833,0.8466,-0.3014,-0.7499,-0.5889,0.8474,-0.2763,-0.7556,-0.5939,0.8479,-0.2455,-0.7634,-0.5975,0.847,-0.2093,-0.7725,-0.5996,0.8455,-0.1731,-0.7799,-0.6015,0.8464,-0.1428,-0.7832,-0.6052,0.8516,-0.1192,-0.7827,-0.6108,0.8633,-0.1002,-0.7801,-0.6176,0.8793,-0.0869,-0.775,-0.6259,0.8952,-0.0797,-0.767,-0.6367,0.9062,-0.0839,-0.7521,-0.6536,0.9082,-0.097,-0.7313,-0.6751,0.9049,-0.1076,-0.7112,-0.6947,0.9027,-0.1043,-0.7003,-0.7062,0.9079,-0.0764,-0.7056,-0.7044,0.9236,-0.0352,-0.7206,-0.6925,0.947,0.0004,-0.7341,-0.6791,0.9737,0.0148,-0.7376,-0.6751,0.9974,0.0035,-0.7286,-0.6849,1.0163,-0.0227,-0.7117,-0.7022,1.0339,-0.0553,-0.6896,-0.7221,1.0514,-0.0863,-0.6661,-0.7408,1.069,-0.1185,-0.639,-0.76,1.0875,-0.154,-0.6068,-0.7798,1.1075,-0.1847,-0.576,-0.7963,1.1267,-0.2037,-0.5539,-0.8073,1.1414,-0.2086,-0.5438,-0.8128,1.1479,-0.2044,-0.5419,-0.8152,1.1481,-0.1955,-0.5443,-0.8158,1.1465,-0.1861,-0.5471,-0.8161,1.148,-0.1767,-0.5494,-0.8166,1.1566,-0.1656,-0.5534,-0.8163,1.1689,-0.1535,-0.5594,-0.8146,1.1783,-0.1407,-0.5677,-0.8111,1.1778,-0.1221,-0.5815,-0.8044,1.1633,-0.0983,-0.5993,-0.7944,1.1396,-0.0785,-0.6156,-0.7841,1.1128,-0.0738,-0.6249,-0.7772,1.0879,-0.0951,-0.6223,-0.777,1.0674,-0.1357,-0.6112,-0.7797,1.0496,-0.1802,-0.6002,-0.7793,1.0323,-0.2123,-0.5993,-0.7719,1.0106,-0.227,-0.6139,-0.7561,0.9823,-0.2319,-0.6388,-0.7336,0.9498,-0.2304,-0.669,-0.7066,0.9139,-0.2266,-0.6998,-0.6774,0.8746,-0.218,-0.7324,-0.645,0.8308,-0.2024,-0.7691,-0.6062,0.7831,-0.1868,-0.8062,-0.5614,0.7344,-0.1803,-0.8398,-0.5121,0.6868,-0.1963,-0.8668,-0.4583,0.6424,-0.2318,-0.8886,-0.3958,0.6008,-0.2701,-0.9081,-0.3199,0.5606,-0.2904,-0.9298,-0.2259,0.5184,-0.2654,-0.9589,-0.0999,0.4663,-0.1974,-0.9779,0.0692,0.4128,-0.122,-0.9575,0.2613,0.3758,-0.1035,-0.8996,0.4244,0.3635,-0.1784,-0.8334,0.5231,0.3727,-0.2971,-0.7693,0.5657,0.3982,-0.4082,-0.7143,0.5684,0.4353,-0.4841,-0.6754,0.5563,0.4743,-0.5382,-0.6539,0.5317,0.5119,-0.5839,-0.6449,0.4931,0.5501,-0.6141,-0.6445,0.4554,0.5842,-0.6246,-0.6517,0.4303,0.6087,-0.6137,-0.6679,0.421,0.6228,-0.5874,-0.6921,0.4195,0.6294,-0.5515,-0.7207,0.42,0.6282,-0.5118,-0.7513,0.4167,0.6188,-0.4566,-0.7878,0.4133,0.5941,-0.3772,-0.8313,0.4083,0.5606,-0.2941,-0.8733,0.3884,0.5352,-0.2447,-0.9058,0.3459,0.5291,-0.2597,-0.925,0.2774,0.5474,-0.3119,-0.9299,0.1949,0.5829,-0.3637,-0.9243,0.116,0.6234,-0.3912,-0.9188,0.052,0.6532,-0.393,-0.9195,0.0023,0.6659,-0.3835,-0.9226,-0.0419,0.6697,-0.3677,-0.9261,-0.084,0.6694,-0.3511,-0.9278,-0.1262,0.6697,-0.3341,-0.9273,-0.1687,0.6722,-0.3136,-0.9258,-0.2109,0.6745,-0.2909,-0.9228,-0.2526,0.6752,-0.2665,-0.9178,-0.2942,0.6727,-0.2372,-0.9107,-0.3382,0.6657,-0.2017,-0.9006,-0.3851,0.6563,-0.1646,-0.8866,-0.4323,0.6474,-0.1323,-0.8692,-0.4765,0.6408,-0.1072,-0.8493,-0.5169,0.6355,-0.0863,-0.8271,-0.5554,0.63,-0.0692,-0.8025,-0.5926,0.6243,-0.0553,-0.7755,-0.629,0.6187,-0.0446,-0.7469,-0.6635,0.6126,-0.0379,-0.7166,-0.6965,0.6056,-0.0351,-0.6823,-0.7302,0.5984,-0.0361,-0.6415,-0.7663,0.5926,-0.0446,-0.5902,-0.806,0.5895,-0.0591,-0.5303,-0.8458,0.5889,-0.0719,-0.4675,-0.881,0.5894,-0.0757,-0.4084,-0.9097,0.5883,-0.0673,-0.3531,-0.9332,0.583,-0.051,-0.2981,-0.9532,0.5752,-0.0324,-0.2454,-0.9689,0.5685,-0.0172,-0.1984,-0.98,0.5661,-0.0042,-0.1616,-0.9869,0.5677,0.0083,-0.1333,-0.991,0.5711,0.0155,-0.1086,-0.994,0.5759,0.0129,-0.0827,-0.9965,0.5822,-0.0045,-0.0543,-0.9985,0.5918,-0.0319,-0.0261,-0.9992,0.6041,-0.0598,0.0005,-0.9982,0.6159,-0.0801,0.0248,-0.9965,0.6232,-0.0898,0.0463,-0.9949,0.6243,-0.0945,0.0662,-0.9933,0.6213,-0.0993,0.0859,-0.9913,0.6157,-0.1093,0.1068,-0.9883,0.6094,-0.1293,0.1293,-0.9832,0.6031,-0.1558,0.1526,-0.9759,0.596,-0.1818,0.1764,-0.9674,0.5874,-0.1997,0.2005,-0.9591,0.576,-0.2036,0.225,-0.9528,0.5605,-0.1979,0.2512,-0.9475,0.5419,-0.1921,0.2806,-0.9404,0.5223,-0.197,0.3146,-0.9286,0.5034,-0.2186,0.355,-0.909,0.486,-0.2516,0.4001,-0.8813,0.4699,-0.2906,0.4453,-0.8469,0.4549,-0.3293,0.4866,-0.8092,0.4403,-0.367,0.5213,-0.7704,0.425,-0.4066,0.5517,-0.7282,0.4096,-0.4472,0.5811,-0.6799,0.3953,-0.487,0.6127,-0.6225,0.3837,-0.5224,0.6478,-0.5544,0.3755,-0.5533,0.6825,-0.4774,0.3705,-0.582,0.7109,-0.3948,0.3689,-0.6113,0.7279,-0.3106,0.3705,-0.6447,0.73,-0.2269,0.3766,-0.678,0.7205,-0.1457,0.3866,-0.7046,0.7062,-0.0696,0.3973,-0.7199,0.694,0.0017,0.4052,-0.7216,0.6888,0.0704,0.4082,-0.7135,0.6869,0.1382,0.4081,-0.7017,0.6825,0.2047,0.408,-0.6928,0.6694,0.2681,0.4104,-0.6904,0.6454,0.3269,0.4154,-0.6904,0.6145,0.3817,0.4216,-0.6889,0.5814,0.4329,0.4287,-0.6824,0.5503,0.4811,0.4363,-0.6687,0.5234,0.5281,0.4437,-0.6504,0.4984,0.5732,0.4511,-0.6326,0.473,0.6133,0.4601,-0.6206,0.4452,0.6454,0.4717,-0.6175,0.4149,0.6682,0.4864,-0.6201,0.3838,0.6843,0.5031,-0.6241,0.3534,0.6968,0.5204,-0.6259,0.325,0.709,0.537,-0.6227,0.2997,0.7228,0.5519,-0.6175,0.2763,0.7365,0.5658,-0.6148,0.2524,0.7472,0.5806,-0.619,0.2258,0.7522,0.5981,-0.6309,0.1955,0.7508,0.6192,-0.6469,0.1635,0.7448,0.6431,-0.6651,0.1319,0.735,0.6684,-0.6838,0.1026,0.7225,0.6936,-0.7033,0.0749,0.7069,0.7196,-0.7237,0.0484,0.6884,0.7471,-0.7437,0.0243,0.668,0.7741,-0.7628,0.0035,0.6467,0.7986,-0.7821,-0.0148,0.623,0.8213,-0.8017,-0.0308,0.597,0.8432,-0.8194,-0.0436,0.5716,0.8622,-0.8338,-0.0524,0.5496,0.8759,-0.8449,-0.0571,0.5319,0.8826,-0.8542,-0.0586,0.5166,0.8835,-0.8627,-0.058,0.5023,0.8805,-0.8713,-0.0562,0.4875,0.8755,-0.8801,-0.0537,0.4718,0.8688,-0.8887,-0.05,0.4558,0.8596,-0.8973,-0.0444,0.4393,0.8477,-0.9059,-0.036,0.422,0.8328,-0.9146,-0.0232,0.4038,0.8133,-0.9232,-0.0065,0.3842,0.7898,-0.9319,0.0112,0.3625,0.7659,-0.9406,0.0268,0.3385,0.7452,-0.949,0.0395,0.3129,0.7265,-0.957,0.0508,0.2856,0.7086,-0.9649,0.0603,0.2555,0.6956,-0.9727,0.0677,0.222,0.6913,-0.9802,0.0711,0.1846,0.6986,-0.9867,0.0718,0.1459,0.7151,-0.9912,0.0735,0.1102,0.737,-0.9936,0.0791,0.0808,0.7598,-0.9943,0.0899,0.0581,0.7817,-0.9938,0.1035,0.0405,0.8049,-0.9927,0.1172,0.0272,0.8303,-0.9915,0.1286,0.0176,0.859,-0.9906,0.1366,0.0114,0.896,-0.9897,0.1427,0.0086,0.939,-0.9889,0.1483,0.0088,0.9782,-0.9879,0.1549,0.0113,1.0035,-0.9864,0.1639,0.0161,1.0096,-0.9844,0.1744,0.0232,1.0027,-0.9823,0.1849,0.0317,0.991,-0.9803,0.1932,0.0411,0.9822,-0.9789,0.1978,0.0516,0.979,-0.9777,0.1999,0.0637,0.9771,-0.9764,0.202,0.0759,0.9738,-0.9746,0.2063,0.0873,0.9663,-0.9717,0.2151,0.0977,0.951,-0.9679,0.2269,0.1078,0.9305,-0.9639,0.2389,0.1176,0.911,-0.9605,0.2477,0.1269,0.8989,-0.9584,0.2512,0.1356,0.8972,-0.9572,0.2512,0.1437,0.902,-0.9565,0.2498,0.1509,0.9088,-0.9557,0.2491,0.157,0.9131,-0.9545,0.2502,0.1621,0.9142,-0.9534,0.2518,0.1661,0.9142,-0.9527,0.2525,0.1694,0.9133,-0.9526,0.2509,0.1719,0.9115,-0.9534,0.2466,0.1738,0.9082,-0.9547,0.2405,0.1751,0.9036,-0.9567,0.2323,0.1755,0.8988,-0.9593,0.2221,0.1747,0.8952,-0.9628,0.2083,0.1722,0.8931,-0.9669,0.1916,0.1683,0.892,-0.971,0.1747,0.1635,0.8917,-0.9743,0.1604,0.1584,0.8917,-0.9768,0.15,0.1526,0.8923,-0.9791,0.1417,0.146,0.8934,-0.981,0.1343,0.1399,0.8946,-0.9828,0.126,0.1352,0.8956,-0.9844,0.1158,0.1324,0.8972,-0.9859,0.1048,0.1308,0.8991,-0.987,0.0947,0.1301,0.8997,-0.9877,0.087,0.1302,0.8971,-0.9879,0.0821,0.1314,0.8896,-0.9878,0.0791,0.1338,0.8785,-0.9876,0.0778,0.1367,0.8665,-0.9872,0.0779,0.139,0.8564,-0.9868,0.0799,0.1406,0.8491,-0.9864,0.0837,0.1418,0.8431,-0.9858,0.0885,0.1429,0.8374,-0.9851,0.0934,0.1443,0.831,-0.9844,0.0984,0.1459,0.8241,-0.9836,0.104,0.1476,0.817,-0.9826,0.1099,0.1497,0.8093,-0.9815,0.1158,0.1525,0.8001,-0.9799,0.1224,0.1574,0.7872,-0.9779,0.1299,0.1638,0.7718,-0.976,0.1365,0.1695,0.7581,-0.975,0.1404,0.1721,0.7508,-0.9753,0.1406,0.1702,0.7518,-0.9765,0.1381,0.1654,0.7586,-0.9781,0.1341,0.1595,0.7682,-0.9795,0.1297,0.1541,0.7779,-0.9809,0.1244,0.1492,0.7875,-0.9825,0.1181,0.1441,0.7984,-0.9839,0.1118,0.1394,0.8098,-0.985,0.1067,0.1356,0.821,-0.9857,0.1027,0.1333,0.832,-0.9863,0.0994,0.132,0.8429,-0.9867,0.0968,0.1309,0.8538,-0.987,0.0951,0.1294,0.8647,-0.9874,0.0947,0.1271,0.8764,-0.9876,0.0955,0.1244,0.8886,-0.9878,0.0964,0.122,0.8996,-0.9881,0.0964,0.1203,0.908,-0.9883,0.0947,0.1196,0.9132,-0.9886,0.0921,0.1195,0.916,-0.9887,0.0898,0.1197,0.917,-0.9888,0.0892,0.1196,0.9165,-0.9887,0.0912,0.1189,0.9138,-0.9885,0.0949,0.118,0.909,-0.9882,0.0989,0.1172,0.9036,-0.9879,0.1016,0.117,0.8989,-0.9877,0.1026,0.1177,0.896,-0.9876,0.1026,0.119,0.8937,-0.9874,0.1021,0.1206,0.8908,-0.9873,0.1014,0.1223,0.886,-0.9871,0.101,0.1244,0.8771,-0.9868,0.1005,0.1269,0.8654,-0.9866,0.0992,0.1293,0.8547,-0.9867,0.0964,0.1311,0.8487,-0.987,0.0915,0.1319,0.8491,-0.9876,0.0849,0.132,0.8538,-0.9882,0.078,0.1318,0.8605,-0.9887,0.0719,0.1314,0.8668,-0.9891,0.0668,0.1311,0.8727,-0.9895,0.0622,0.1307,0.8792,-0.9898,0.058,0.13,0.8858,-0.9902,0.0539,0.129,0.8921,-0.9906,0.0504,0.1271,0.8985,-0.9911,0.0472,0.1246,0.9049,-0.9915,0.0439,0.1224,0.9107,-0.9918,0.04,0.1214,0.9149,-0.9919,0.0348,0.1224,0.917,-0.9918,0.0286,0.1248,0.9174,-0.9916,0.0228,0.1272,0.9173,-0.9916,0.0187,0.1281,0.9174,-0.9918,0.0174,0.1265,0.9187,-0.9922,0.0178,0.1234,0.9206,-0.9925,0.0186,0.1205,0.9213,-0.9927,0.0184,0.1192,0.919,-0.9925,0.0168,0.1208,0.9109,-0.9921,0.0145,0.1243,0.8987,-0.9917,0.0119,0.1278,0.8877,-0.9916,0.0093,0.1294,0.8831,-0.9918,0.0067,0.1279,0.8901,-0.9922,0.0042,0.1245,0.9046,-0.9927,0.0019,0.1209,0.918,-0.993,-0.0001,0.1184,0.9218,-0.9931,-0.0017,0.1177,0.9112,-0.993,-0.0032,0.118,0.8914,-0.993,-0.0046,0.1181,0.8695,-0.9932,-0.0058,0.1166,0.8525,-0.9935,-0.0065,0.1133,0.8425,-0.994,-0.0069,0.1088,0.8359,-0.9947,-0.0073,0.1028,0.8302,-0.9954,-0.0084,0.0951,0.8233,-0.9963,-0.0095,0.0857,0.8146,-0.9972,-0.0106,0.0746,0.8054,-0.998,-0.0134,0.0615,0.7961,-0.9987,-0.0194,0.0464,0.7871,-0.9991,-0.0299,0.0291,0.7777,-0.999,-0.0442,0.0097,0.7684,-0.9981,-0.0601,-0.0118,0.7608,-0.9965,-0.0753,-0.0355,0.7565,-0.9941,-0.0892,-0.0613,0.7573,-0.9908,-0.1025,-0.0888,0.7621,-0.9864,-0.115,-0.1173,0.7682,-0.981,-0.1267,-0.1466,0.7725,-0.9745,-0.138,-0.177,0.7733,-0.9665,-0.149,-0.2088,0.7727,-0.9573,-0.1597,-0.2411,0.7737,-0.947,-0.1696,-0.2729,0.7791,-0.936,-0.1784,-0.3034,0.7912,-0.9247,-0.1857,-0.3324,0.8078,-0.9128,-0.192,-0.3605,0.8256,-0.9002,-0.1978,-0.3881,0.8414,-0.8865,-0.2039,-0.4153,0.8542,-0.872,-0.2102,-0.442,0.866,-0.8568,-0.2153,-0.4686,0.8773,-0.8408,-0.2182,-0.4955,0.8891,-0.8238,-0.2186,-0.5231,0.9013,-0.8057,-0.2173,-0.551,0.9138,-0.7871,-0.2148,-0.5782,0.9267,-0.7685,-0.2117,-0.6038,0.94,-0.7505,-0.207,-0.6276,0.9536,-0.7325,-0.2008,-0.6505,0.9674,-0.714,-0.1955,-0.6723,0.9815,-0.6946,-0.193,-0.693,0.9963,-0.6738,-0.1949,-0.7127,1.0124,-0.6524,-0.1997,-0.7311,1.0297,-0.6312,-0.2047,-0.7481,1.0467,-0.611,-0.2075,-0.764,1.0622,-0.5914,-0.2074,-0.7793,1.0743,-0.5718,-0.2058,-0.7942,1.0843,-0.5526,-0.2036,-0.8082,1.0947,-0.5347,-0.2018,-0.8206,1.108,-0.5196,-0.1998,-0.8307,1.1264,-0.5066,-0.1973,-0.8393,1.1478,-0.4936,-0.1955,-0.8474,1.1682,-0.4782,-0.1957,-0.8562,1.184,-0.4588,-0.1986,-0.866,1.1939,-0.4367,-0.2034,-0.8763,1.2003,-0.4137,-0.2093,-0.8861,1.2052,-0.3915,-0.2152,-0.8946,1.2101,-0.3713,-0.2205,-0.902,1.215,-0.3517,-0.2257,-0.9085,1.219,-0.3315,-0.2319,-0.9145,1.2226,-0.3098,-0.2402,-0.92,1.2264,-0.286,-0.2508,-0.9249,1.2312,-0.2608,-0.263,-0.9289,1.2367,-0.2349,-0.2769,-0.9317,1.2419,-0.2087,-0.2924,-0.9332,1.2458,-0.1801,-0.3117,-0.9329,1.247,-0.1494,-0.3339,-0.9307,1.2467,-0.1207,-0.3544,-0.9273,1.2473,-0.0987,-0.3691,-0.9241,1.2506,-0.0873,-0.3748,-0.923,1.2567,-0.0827,-0.3749,-0.9234,1.2639,-0.0782,-0.3751,-0.9237,1.2711]);
Group704ZZZ.children[26] = OrientationInterpolator731;

let OrientationInterpolator732 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator732.DEF = "Interpolator24_lForeArm";
OrientationInterpolator732.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator732.keyValue = new X3D.MFRotation([0,1,0,0,-0.1705,-0.8396,0.5158,0.0858,-0.1509,-0.8469,0.5099,0.1758,-0.1331,-0.8533,0.5042,0.2554,-0.1205,-0.8576,0.5,0.3103,-0.1156,-0.8593,0.4983,0.3314,-0.1161,-0.8591,0.4985,0.3283,-0.1189,-0.8582,0.4994,0.3158,-0.1205,-0.8576,0.5,0.3082,-0.1205,-0.8576,0.5,0.308,-0.1205,-0.8576,0.5,0.3081,-0.1205,-0.8576,0.5,0.3082,-0.1205,-0.8576,0.5,0.3083,-0.1205,-0.8576,0.5,0.3084,-0.1205,-0.8576,0.5,0.3084,-0.1205,-0.8576,0.5,0.3084,-0.1205,-0.8576,0.5,0.3085,-0.1205,-0.8576,0.5,0.3085,-0.1205,-0.8576,0.5,0.3086,-0.1205,-0.8576,0.5,0.3088,-0.1205,-0.8576,0.5,0.3095,-0.1205,-0.8576,0.5,0.311,-0.1205,-0.8576,0.5,0.3129,-0.1205,-0.8576,0.5,0.315,-0.1205,-0.8576,0.5,0.317,-0.1205,-0.8576,0.5,0.3181,-0.1205,-0.8576,0.5,0.3188,-0.1205,-0.8576,0.5,0.3203,-0.1205,-0.8576,0.5,0.3238,-0.1207,-0.8575,0.5001,0.331,-0.1207,-0.8575,0.5001,0.3407,-0.1206,-0.8575,0.5001,0.3502,-0.1205,-0.8576,0.5,0.3565,-0.1205,-0.8576,0.5,0.3582,-0.1205,-0.8576,0.5,0.3571,-0.1205,-0.8576,0.5,0.355,-0.1205,-0.8576,0.5,0.3536,-0.1205,-0.8576,0.5,0.3534,-0.1205,-0.8576,0.5,0.3535,-0.1205,-0.8576,0.5,0.3535,-0.1205,-0.8576,0.5,0.353,-0.1205,-0.8576,0.5,0.3519,-0.1205,-0.8576,0.5,0.3505,-0.1205,-0.8576,0.5,0.3488,-0.1205,-0.8576,0.5,0.3469,-0.1205,-0.8576,0.5,0.3445,-0.1205,-0.8576,0.5,0.3418,-0.1205,-0.8576,0.5,0.3392,-0.1205,-0.8576,0.5,0.3371,-0.1205,-0.8576,0.5,0.3354,-0.1205,-0.8576,0.5,0.334,-0.1205,-0.8576,0.5,0.3331,-0.1205,-0.8576,0.5,0.3328,-0.1205,-0.8576,0.5,0.3339,-0.1205,-0.8576,0.5,0.3361,-0.1205,-0.8576,0.5,0.3378,-0.1205,-0.8576,0.5,0.3375,-0.1206,-0.8576,0.5,0.3339,-0.1206,-0.8576,0.5,0.3281,-0.1206,-0.8576,0.5,0.3223,-0.1205,-0.8576,0.5,0.319,-0.1205,-0.8576,0.5,0.3192,-0.1205,-0.8576,0.5,0.3215,-0.1205,-0.8576,0.5,0.3246,-0.1205,-0.8576,0.5,0.3272,-0.1205,-0.8576,0.5,0.3291,-0.1205,-0.8576,0.5,0.3311,-0.1205,-0.8576,0.5,0.3328,-0.1205,-0.8576,0.5,0.3338,-0.1205,-0.8576,0.5,0.334,-0.1205,-0.8576,0.5,0.3336,-0.1205,-0.8576,0.5,0.3328,-0.1205,-0.8576,0.5,0.3318,-0.1205,-0.8576,0.5,0.3305,-0.1205,-0.8576,0.5,0.3288,-0.1205,-0.8576,0.5,0.3272,-0.1205,-0.8576,0.5,0.3261,-0.1205,-0.8576,0.5,0.3257,-0.1205,-0.8576,0.5,0.3258,-0.1205,-0.8576,0.5,0.3259,-0.1205,-0.8576,0.5,0.3257,-0.1205,-0.8576,0.5,0.3249,-0.1205,-0.8576,0.5,0.3239,-0.1205,-0.8576,0.5,0.3227,-0.1205,-0.8576,0.5,0.3215,-0.1205,-0.8576,0.5,0.3201,-0.1205,-0.8576,0.5,0.3185,-0.1205,-0.8576,0.5,0.3171,-0.1205,-0.8576,0.5,0.316,-0.1205,-0.8576,0.5,0.3156,-0.1205,-0.8576,0.5,0.3155,-0.1205,-0.8576,0.5,0.3156,-0.1205,-0.8576,0.5,0.3159,-0.1205,-0.8576,0.5,0.3164,-0.1205,-0.8576,0.5,0.3173,-0.1205,-0.8576,0.5,0.3179,-0.1205,-0.8576,0.5,0.318,-0.1205,-0.8576,0.5,0.3171,-0.1205,-0.8576,0.5,0.3155,-0.1205,-0.8576,0.5,0.3138,-0.1205,-0.8576,0.5,0.3125,-0.1205,-0.8576,0.5,0.3117,-0.1205,-0.8576,0.5,0.3111,-0.1205,-0.8576,0.5,0.3107,-0.1205,-0.8576,0.5,0.3105,-0.1205,-0.8576,0.5,0.3107,-0.1205,-0.8576,0.5,0.3112,-0.1205,-0.8576,0.5,0.3114,-0.1205,-0.8576,0.5,0.3109,-0.1205,-0.8576,0.5,0.3088,-0.1205,-0.8576,0.5,0.3056,-0.1205,-0.8576,0.5,0.3026,-0.1205,-0.8576,0.5,0.3009,-0.1205,-0.8576,0.5,0.3009,-0.1205,-0.8576,0.5,0.3019,-0.1205,-0.8576,0.5,0.3036,-0.1205,-0.8576,0.5,0.3055,-0.1205,-0.8576,0.5,0.3079,-0.1205,-0.8576,0.5,0.3109,-0.1205,-0.8576,0.5,0.314,-0.1205,-0.8576,0.5,0.3164,-0.1205,-0.8576,0.5,0.3187,-0.1205,-0.8576,0.5,0.3208,-0.1205,-0.8576,0.5,0.322,-0.1205,-0.8576,0.5,0.3218,-0.1206,-0.8576,0.5,0.3191,-0.1206,-0.8576,0.5,0.3147,-0.1206,-0.8576,0.5,0.31,-0.1205,-0.8576,0.5,0.3063,-0.1205,-0.8576,0.5,0.3042,-0.1205,-0.8576,0.5,0.3028,-0.1205,-0.8576,0.5,0.3018,-0.1205,-0.8576,0.5,0.3006,-0.1205,-0.8576,0.5,0.2992,-0.1205,-0.8576,0.5,0.2977,-0.1205,-0.8576,0.5,0.2963,-0.1205,-0.8576,0.5,0.2948,-0.1205,-0.8576,0.5,0.2932,-0.1205,-0.8576,0.5,0.2916,-0.1205,-0.8576,0.5,0.2899,-0.1205,-0.8576,0.5,0.2881,-0.1205,-0.8576,0.5,0.2858,-0.1205,-0.8576,0.5,0.2832,-0.1205,-0.8576,0.5,0.2809,-0.1205,-0.8576,0.5,0.2795,-0.1205,-0.8576,0.5,0.2793,-0.1205,-0.8576,0.5,0.2799,-0.1205,-0.8576,0.5,0.281,-0.1205,-0.8576,0.5,0.2822,-0.1205,-0.8576,0.5,0.2837,-0.1205,-0.8576,0.5,0.2856,-0.1205,-0.8576,0.5,0.2875,-0.1205,-0.8576,0.5,0.289,-0.1205,-0.8576,0.5,0.2897,-0.1205,-0.8576,0.5,0.2901,-0.1205,-0.8576,0.5,0.2904,-0.1205,-0.8576,0.5,0.2911,-0.1205,-0.8576,0.5,0.2932,-0.1205,-0.8576,0.5,0.296,-0.1205,-0.8576,0.5,0.2981,-0.1205,-0.8576,0.5,0.2979,-0.1206,-0.8576,0.5,0.2941,-0.1206,-0.8576,0.5,0.288,-0.1206,-0.8576,0.5,0.2813,-0.1205,-0.8576,0.5,0.2757,-0.1205,-0.8576,0.5,0.2712,-0.1205,-0.8576,0.5,0.267,-0.1205,-0.8576,0.5,0.2639,-0.1205,-0.8576,0.5,0.2623,-0.1204,-0.8576,0.5,0.262,-0.1203,-0.8577,0.4999,0.2627,-0.1203,-0.8577,0.4999,0.2655,-0.1205,-0.8576,0.5,0.2714,-0.1209,-0.8574,0.5002,0.283,-0.1211,-0.8574,0.5003,0.299,-0.1209,-0.8575,0.5002,0.3144,-0.1205,-0.8576,0.5,0.3245,-0.1204,-0.8577,0.4999,0.3266,-0.1204,-0.8576,0.4999,0.3238,-0.1205,-0.8576,0.5,0.3197,-0.1205,-0.8576,0.5,0.3182,-0.1205,-0.8576,0.5,0.3202,-0.1205,-0.8576,0.5,0.3237,-0.1205,-0.8576,0.5,0.3281,-0.1205,-0.8576,0.5,0.3327,-0.1205,-0.8576,0.5,0.3366,-0.1204,-0.8577,0.4999,0.3406,-0.1203,-0.8577,0.4999,0.3459,-0.1205,-0.8576,0.5,0.3542,-0.1209,-0.8575,0.5002,0.3675,-0.121,-0.8574,0.5002,0.3846,-0.1208,-0.8575,0.5002,0.4013,-0.1205,-0.8576,0.5,0.4137,-0.1204,-0.8577,0.4999,0.4207,-0.1204,-0.8577,0.4999,0.4243,-0.1205,-0.8576,0.5,0.4257,-0.1205,-0.8576,0.5,0.4258,-0.1205,-0.8576,0.5,0.4246,-0.1205,-0.8576,0.5,0.4216,-0.1205,-0.8576,0.5,0.4172,-0.1205,-0.8576,0.5,0.4117,-0.1206,-0.8576,0.5001,0.4039,-0.1207,-0.8575,0.5001,0.3941,-0.1206,-0.8575,0.5001,0.3846,-0.1205,-0.8576,0.5,0.3778,-0.1205,-0.8576,0.5,0.3743,-0.1204,-0.8576,0.5,0.3728,-0.1205,-0.8576,0.5,0.3731,-0.1205,-0.8576,0.5,0.375,-0.1206,-0.8576,0.5,0.3795,-0.1206,-0.8576,0.5,0.3863,-0.1206,-0.8576,0.5,0.3933,-0.1205,-0.8576,0.5,0.3982,-0.1205,-0.8576,0.5,0.4007,-0.1205,-0.8576,0.5,0.4019,-0.1205,-0.8576,0.5,0.4017,-0.1205,-0.8576,0.5,0.4001,-0.1206,-0.8576,0.5,0.3961,-0.1206,-0.8576,0.5,0.39,-0.1206,-0.8576,0.5,0.3838,-0.1205,-0.8576,0.5,0.3795,-0.1205,-0.8576,0.5,0.3791,-0.1204,-0.8577,0.4999,0.3811,-0.1204,-0.8577,0.4999,0.3821,-0.1205,-0.8576,0.5,0.3785,-0.1208,-0.8575,0.5001,0.3681,-0.1209,-0.8574,0.5002,0.353,-0.1208,-0.8575,0.5001,0.337,-0.1205,-0.8576,0.5,0.3237,-0.1204,-0.8576,0.5,0.3135,-0.1205,-0.8576,0.5,0.3046,-0.1205,-0.8576,0.5,0.2977,-0.1205,-0.8576,0.5,0.2933,-0.1205,-0.8576,0.5,0.2923,-0.1205,-0.8576,0.5,0.294,-0.1205,-0.8576,0.5,0.2975,-0.1205,-0.8576,0.5,0.3014,-0.1205,-0.8576,0.5,0.3055,-0.1204,-0.8576,0.5,0.3102,-0.1204,-0.8576,0.4999,0.3163,-0.1205,-0.8576,0.5,0.3241,-0.1208,-0.8575,0.5001,0.3362,-0.1209,-0.8574,0.5002,0.3514,-0.1207,-0.8575,0.5001,0.3651,-0.1205,-0.8576,0.5,0.3726,-0.1205,-0.8576,0.5,0.3711,-0.1206,-0.8576,0.5,0.3637,-0.1206,-0.8576,0.5,0.3544,-0.1205,-0.8576,0.5,0.3475,-0.1205,-0.8576,0.5,0.3427,-0.1204,-0.8577,0.4999,0.3383,-0.1204,-0.8577,0.4999,0.3361,-0.1205,-0.8576,0.5,0.3382,-0.1208,-0.8575,0.5001,0.3467,-0.1208,-0.8575,0.5001,0.36,-0.1207,-0.8575,0.5001,0.3747,-0.1205,-0.8576,0.5,0.3872,-0.1202,-0.8577,0.4998,0.395,-0.1198,-0.8579,0.4996,0.4004,-0.1199,-0.8579,0.4996,0.4079,-0.1205,-0.8576,0.5,0.4217,-0.1217,-0.857,0.5007,0.4475,-0.1223,-0.8568,0.501,0.4815,-0.1216,-0.8571,0.5006,0.5135,-0.1205,-0.8576,0.5,0.534,-0.1201,-0.8578,0.4997,0.5384,-0.1202,-0.8578,0.4998,0.5326,-0.1204,-0.8576,0.4999,0.5228,-0.1205,-0.8576,0.5,0.5153,-0.1205,-0.8576,0.5,0.5106,-0.1205,-0.8576,0.5,0.5058,-0.1205,-0.8576,0.5,0.5018,-0.1205,-0.8576,0.5,0.4991,-0.1205,-0.8576,0.5,0.4975,-0.1204,-0.8576,0.5,0.4968,-0.1204,-0.8576,0.5,0.4979,-0.1205,-0.8576,0.5,0.5017,-0.1207,-0.8575,0.5001,0.5114,-0.1207,-0.8575,0.5001,0.5255,-0.1206,-0.8576,0.5,0.538,-0.1205,-0.8576,0.5,0.5427,-0.1207,-0.8575,0.5001,0.5353,-0.1209,-0.8574,0.5002,0.5199,-0.1208,-0.8575,0.5002,0.5033,-0.1205,-0.8576,0.5,0.4926,-0.1204,-0.8577,0.4999,0.4898,-0.1204,-0.8577,0.4999,0.4911,-0.1205,-0.8576,0.5,0.4949,-0.1205,-0.8576,0.5,0.4997,-0.1206,-0.8576,0.5,0.5054,-0.1205,-0.8576,0.5,0.5129,-0.1205,-0.8576,0.5,0.5214,-0.1205,-0.8576,0.5,0.5303,-0.1206,-0.8576,0.5,0.5396,-0.1205,-0.8576,0.5,0.5495,-0.1205,-0.8576,0.5,0.5599,-0.1205,-0.8576,0.5,0.5705,-0.1206,-0.8576,0.5,0.5818,-0.1206,-0.8576,0.5001,0.5936,-0.1206,-0.8576,0.5,0.6052,-0.1205,-0.8576,0.5,0.6154,-0.1205,-0.8576,0.5,0.624,-0.1205,-0.8576,0.5,0.6315,-0.1205,-0.8576,0.5,0.6384,-0.1205,-0.8576,0.5,0.6453,-0.1205,-0.8576,0.5,0.6518,-0.1205,-0.8576,0.5,0.6579,-0.1205,-0.8576,0.5,0.6644,-0.1205,-0.8576,0.5,0.6722,-0.1206,-0.8575,0.5001,0.684,-0.1207,-0.8575,0.5001,0.6985,-0.1206,-0.8576,0.5,0.7105,-0.1205,-0.8576,0.5,0.7151,-0.1206,-0.8576,0.5,0.7093,-0.1207,-0.8575,0.5001,0.6963,-0.1206,-0.8576,0.5,0.6802,-0.1205,-0.8576,0.5,0.665,-0.1206,-0.8576,0.5,0.6509,-0.1207,-0.8575,0.5001,0.6359,-0.1206,-0.8575,0.5001,0.6213,-0.1205,-0.8576,0.5,0.6082,-0.1204,-0.8576,0.4999,0.5974,-0.1204,-0.8577,0.4999,0.5882,-0.1205,-0.8576,0.5,0.5793,-0.1205,-0.8576,0.5,0.5694,-0.1206,-0.8576,0.5001,0.5574,-0.1207,-0.8575,0.5001,0.5442,-0.1207,-0.8575,0.5001,0.5318,-0.1205,-0.8576,0.5,0.5226,-0.1204,-0.8577,0.4999,0.5187,-0.1204,-0.8577,0.4999,0.5183,-0.1204,-0.8577,0.4999,0.5181,-0.1205,-0.8576,0.5,0.5142,-0.1207,-0.8575,0.5001,0.5053,-0.1207,-0.8575,0.5001,0.4933,-0.1206,-0.8576,0.5001,0.4802,-0.1205,-0.8576,0.5,0.4681,-0.1205,-0.8576,0.5,0.4569,-0.1206,-0.8576,0.5,0.4459,-0.1206,-0.8576,0.5,0.4354,-0.1205,-0.8576,0.5,0.4257,-0.1205,-0.8576,0.5,0.4168,-0.1205,-0.8576,0.5,0.4085,-0.1206,-0.8576,0.5,0.4011,-0.1205,-0.8576,0.5,0.3949,-0.1205,-0.8576,0.5,0.3896,-0.1205,-0.8576,0.5,0.3852,-0.1205,-0.8576,0.5,0.3822,-0.1205,-0.8576,0.5,0.3809,-0.1205,-0.8576,0.5,0.382,-0.1205,-0.8576,0.5,0.385,-0.1205,-0.8576,0.5,0.3888,-0.1205,-0.8576,0.5,0.3922,-0.1205,-0.8576,0.5,0.3948,-0.1205,-0.8576,0.5,0.3972,-0.1205,-0.8576,0.5,0.3997,-0.1205,-0.8576,0.5,0.4024,-0.1205,-0.8576,0.5,0.4052,-0.1205,-0.8576,0.5,0.4083,-0.1205,-0.8576,0.5,0.4112,-0.1205,-0.8576,0.5,0.4139,-0.1205,-0.8576,0.5,0.4159,-0.1205,-0.8576,0.5,0.4175,-0.1205,-0.8576,0.5,0.4192,-0.1205,-0.8576,0.5,0.4216,-0.1205,-0.8576,0.5,0.4254,-0.1206,-0.8576,0.5,0.4301,-0.1206,-0.8576,0.5,0.4345,-0.1205,-0.8576,0.5,0.4373,-0.1205,-0.8576,0.5,0.4378,-0.1205,-0.8576,0.5,0.4368,-0.1205,-0.8576,0.5,0.4353,-0.1205,-0.8576,0.5,0.4346,-0.1205,-0.8576,0.5,0.4349,-0.1205,-0.8576,0.5,0.4357,-0.1205,-0.8576,0.5,0.4365,-0.1205,-0.8576,0.5,0.437,-0.1205,-0.8576,0.5,0.437,-0.1205,-0.8576,0.5,0.4367,-0.1205,-0.8576,0.5,0.4363,-0.1205,-0.8576,0.5,0.4361,-0.1205,-0.8576,0.5,0.4363,-0.1205,-0.8576,0.5,0.4367,-0.1205,-0.8576,0.5,0.4368,-0.1205,-0.8576,0.5,0.4361,-0.1205,-0.8576,0.5,0.4342,-0.1205,-0.8576,0.5,0.4317,-0.1205,-0.8576,0.5,0.4286,-0.1205,-0.8576,0.5,0.4254,-0.1205,-0.8576,0.5,0.4224,-0.1205,-0.8576,0.5,0.4193,-0.1205,-0.8576,0.5,0.4156,-0.1205,-0.8576,0.5,0.4109,-0.1205,-0.8576,0.5,0.4049,-0.1205,-0.8576,0.5,0.3979,-0.1205,-0.8576,0.5,0.3902,-0.1205,-0.8576,0.5,0.3821,-0.1206,-0.8576,0.5,0.3727,-0.1207,-0.8575,0.5001,0.3624,-0.1206,-0.8576,0.5,0.3524,-0.1205,-0.8576,0.5,0.3442,-0.1205,-0.8576,0.5,0.3385,-0.1205,-0.8576,0.5,0.3344,-0.1205,-0.8576,0.5,0.3313,-0.1205,-0.8576,0.5,0.3286,-0.1205,-0.8576,0.5,0.3259,-0.1205,-0.8576,0.5,0.3236,-0.1205,-0.8576,0.5,0.3222,-0.1205,-0.8576,0.5,0.3223,-0.1205,-0.8576,0.5,0.3243,-0.1206,-0.8576,0.5,0.328,-0.1205,-0.8576,0.5,0.3322,-0.1205,-0.8576,0.5,0.3358,-0.1205,-0.8576,0.5,0.3385,-0.1205,-0.8576,0.5,0.3408,-0.1205,-0.8576,0.5,0.3432,-0.1205,-0.8576,0.5,0.3461,-0.1205,-0.8576,0.5,0.3499,-0.1206,-0.8576,0.5,0.3543,-0.1205,-0.8576,0.5,0.3586,-0.1205,-0.8576,0.5,0.3622,-0.1205,-0.8576,0.5,0.3648,-0.1205,-0.8576,0.5,0.3669,-0.1205,-0.8576,0.5,0.3687,-0.1205,-0.8576,0.5,0.3704,-0.1205,-0.8576,0.5,0.3724,-0.1205,-0.8576,0.5,0.3744,-0.1205,-0.8576,0.5,0.3761,-0.1205,-0.8576,0.5,0.377,-0.1205,-0.8576,0.5,0.3768,-0.1205,-0.8576,0.5,0.3757,-0.1205,-0.8576,0.5,0.3744,-0.1205,-0.8576,0.5,0.3734,-0.1205,-0.8576,0.5,0.3726,-0.1205,-0.8576,0.5,0.372,-0.1205,-0.8576,0.5,0.3715,-0.1205,-0.8576,0.5,0.3712,-0.1205,-0.8576,0.5,0.3713,-0.1205,-0.8576,0.5,0.3716,-0.1205,-0.8576,0.5,0.372,-0.1205,-0.8576,0.5,0.3723,-0.1205,-0.8576,0.5,0.3723,-0.1205,-0.8576,0.5,0.3721,-0.1205,-0.8576,0.5,0.3722,-0.1205,-0.8576,0.5,0.3731,-0.1205,-0.8576,0.5,0.3751,-0.1205,-0.8576,0.5,0.3778,-0.1205,-0.8576,0.5,0.3808,-0.1205,-0.8576,0.5,0.3838,-0.1205,-0.8576,0.5,0.3869,-0.1205,-0.8576,0.5,0.3901,-0.1205,-0.8576,0.5,0.3933,-0.1205,-0.8576,0.5,0.3963,-0.1205,-0.8576,0.5,0.3993,-0.1205,-0.8576,0.5,0.4023,-0.1205,-0.8576,0.5,0.405,-0.1205,-0.8576,0.5,0.4071,-0.1205,-0.8576,0.5,0.4087,-0.1205,-0.8576,0.5,0.41,-0.1205,-0.8576,0.5,0.4105,-0.1205,-0.8576,0.5,0.4098,-0.1205,-0.8576,0.5,0.4075,-0.1205,-0.8576,0.5,0.4041,-0.1205,-0.8576,0.5,0.4,-0.1205,-0.8576,0.5,0.3956,-0.1205,-0.8576,0.5,0.3909,-0.1206,-0.8576,0.5,0.3856,-0.1205,-0.8576,0.5,0.3803,-0.1205,-0.8576,0.5,0.3758,-0.1205,-0.8576,0.5,0.3721,-0.1205,-0.8576,0.5,0.3689,-0.1205,-0.8576,0.5,0.3663,-0.1205,-0.8576,0.5,0.364,-0.1205,-0.8576,0.5,0.3621,-0.1205,-0.8576,0.5,0.3606,-0.1205,-0.8576,0.5,0.3597,-0.1205,-0.8576,0.5,0.3593,-0.1205,-0.8576,0.5,0.3598,-0.1205,-0.8576,0.5,0.3608,-0.1205,-0.8576,0.5,0.3624,-0.1205,-0.8576,0.5,0.3644,-0.1205,-0.8576,0.5,0.367,-0.1205,-0.8576,0.5,0.3702,-0.1205,-0.8576,0.5,0.3734,-0.1205,-0.8576,0.5,0.3759,-0.1205,-0.8576,0.5,0.3772,-0.1205,-0.8576,0.5,0.3778,-0.1205,-0.8576,0.5,0.3782,-0.1205,-0.8576,0.5,0.3787,-0.1205,-0.8576,0.5,0.3798,-0.1205,-0.8576,0.5,0.381,-0.1205,-0.8576,0.5,0.382,-0.1205,-0.8576,0.5,0.3822,-0.1205,-0.8576,0.5,0.3812,-0.1205,-0.8576,0.5,0.3794,-0.1205,-0.8576,0.5,0.3775,-0.1205,-0.8576,0.5,0.3762,-0.1205,-0.8576,0.5,0.3756,-0.1205,-0.8576,0.5,0.3754,-0.1205,-0.8576,0.5,0.3755,-0.1205,-0.8576,0.5,0.3757,-0.1205,-0.8576,0.5,0.376,-0.1205,-0.8576,0.5,0.3765,-0.1205,-0.8576,0.5,0.3771,-0.1205,-0.8576,0.5,0.3777,-0.1205,-0.8576,0.5,0.3783,-0.1205,-0.8576,0.5,0.3788,-0.1205,-0.8576,0.5,0.3794,-0.1205,-0.8576,0.5,0.3803,-0.1205,-0.8576,0.5,0.3815,-0.1205,-0.8576,0.5,0.3829,-0.1205,-0.8576,0.5,0.3845,-0.1205,-0.8576,0.5,0.3865,-0.1205,-0.8576,0.5,0.3892,-0.1205,-0.8576,0.5,0.3924,-0.1205,-0.8576,0.5,0.3954,-0.1205,-0.8576,0.5,0.3974,-0.1205,-0.8576,0.5,0.3976,-0.1205,-0.8576,0.5,0.3966,-0.1205,-0.8576,0.5,0.3957,-0.1205,-0.8576,0.5,0.3963,-0.1206,-0.8576,0.5,0.3993,-0.1206,-0.8576,0.5,0.404,-0.1206,-0.8576,0.5,0.4086,-0.1205,-0.8576,0.5,0.4119,-0.1205,-0.8576,0.5,0.4132,-0.1205,-0.8576,0.5,0.4135,-0.1205,-0.8576,0.5,0.4131,-0.1205,-0.8576,0.5,0.4124,-0.1205,-0.8576,0.5,0.4116,-0.1205,-0.8576,0.5,0.4103,-0.1205,-0.8576,0.5,0.4086,-0.1205,-0.8576,0.5,0.406,-0.1205,-0.8576,0.5,0.4023,-0.1206,-0.8576,0.5,0.3976,-0.1205,-0.8576,0.5,0.3928,-0.1205,-0.8576,0.5,0.3886,-0.1205,-0.8576,0.5,0.3852,-0.1205,-0.8576,0.5,0.3823,-0.1205,-0.8576,0.5,0.3796,-0.1205,-0.8576,0.5,0.3773,-0.1205,-0.8576,0.5,0.3756,-0.1205,-0.8576,0.5,0.3744,-0.1205,-0.8576,0.5,0.3731,-0.1205,-0.8576,0.5,0.3709,-0.1205,-0.8576,0.5,0.3675,-0.1206,-0.8576,0.5,0.3632,-0.1205,-0.8576,0.5,0.3588,-0.1205,-0.8576,0.5,0.3547,-0.1205,-0.8576,0.5,0.3514,-0.1205,-0.8576,0.5,0.3483,-0.1205,-0.8576,0.5,0.3454,-0.1205,-0.8576,0.5,0.3424,-0.1205,-0.8576,0.5,0.3389,-0.1205,-0.8576,0.5,0.3351,-0.1205,-0.8576,0.5,0.3318,-0.1205,-0.8576,0.5,0.33,-0.1205,-0.8576,0.5,0.3306,-0.1205,-0.8576,0.5,0.333,-0.1205,-0.8576,0.5,0.3353,-0.1205,-0.8576,0.5,0.3358,-0.1205,-0.8576,0.5,0.3335,-0.1206,-0.8576,0.5,0.3296,-0.1205,-0.8576,0.5,0.3254,-0.1205,-0.8576,0.5,0.3227,-0.1205,-0.8576,0.5,0.3221,-0.1205,-0.8576,0.5,0.3228,-0.1205,-0.8576,0.5,0.3236,-0.1205,-0.8576,0.5,0.3236,-0.1205,-0.8576,0.5,0.3221,-0.1205,-0.8576,0.5,0.3197,-0.1205,-0.8576,0.5,0.3175,-0.1205,-0.8576,0.5,0.3166,-0.1205,-0.8576,0.5,0.3174,-0.1205,-0.8576,0.5,0.3194,-0.1205,-0.8576,0.5,0.3219,-0.1205,-0.8576,0.5,0.3243,-0.1205,-0.8576,0.5,0.3264,-0.1205,-0.8576,0.5,0.3286,-0.1205,-0.8576,0.5,0.3312,-0.1205,-0.8576,0.5,0.3344,-0.1205,-0.8576,0.5,0.3383,-0.1205,-0.8576,0.5,0.3428,-0.1205,-0.8576,0.5,0.3478,-0.1205,-0.8576,0.5,0.3532,-0.1206,-0.8576,0.5,0.3593,-0.1206,-0.8576,0.5,0.366,-0.1206,-0.8576,0.5,0.3728,-0.1205,-0.8576,0.5,0.3792,-0.1205,-0.8576,0.5,0.385,-0.1205,-0.8576,0.5,0.3904,-0.1205,-0.8576,0.5,0.3959]);
Group704ZZZ.children[27] = OrientationInterpolator732;

let OrientationInterpolator733 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator733.DEF = "Interpolator25_lHand";
OrientationInterpolator733.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator733.keyValue = new X3D.MFRotation([0,1,0,0,0.9909,-0.1267,-0.0444,0.256,0.9908,-0.1328,-0.0274,0.5273,0.9905,-0.137,-0.0114,0.7662,0.9903,-0.1392,0,0.925,0.9902,-0.1398,0.0044,0.971,0.9902,-0.1397,0.0037,0.9367,0.9902,-0.1393,0.0013,0.8725,0.9903,-0.1392,0,0.8286,0.9903,-0.1392,0,0.8135,0.9903,-0.1392,0,0.8021,0.9903,-0.1392,0,0.7944,0.9903,-0.1392,0,0.7902,0.9903,-0.1392,0,0.791,0.9903,-0.1392,0,0.7963,0.9903,-0.1392,0,0.8034,0.9903,-0.1392,0,0.8094,0.9903,-0.1392,0,0.8139,0.9903,-0.1392,0,0.8183,0.9903,-0.1392,0,0.8225,0.9903,-0.1392,0,0.8265,0.9903,-0.1392,0,0.8311,0.9903,-0.1392,0,0.8361,0.9903,-0.1392,0,0.8394,0.9903,-0.1392,0,0.8392,0.9903,-0.1392,0,0.836,0.9903,-0.1392,0.0001,0.8304,0.9903,-0.1392,0.0001,0.8206,0.9903,-0.1392,0,0.8047,0.9903,-0.1391,-0.0002,0.7771,0.9903,-0.1391,-0.0003,0.7405,0.9903,-0.1391,-0.0002,0.7054,0.9903,-0.1392,0,0.682,0.9903,-0.1392,0.0001,0.6757,0.9903,-0.1392,0.0001,0.6802,0.9903,-0.1392,0,0.6883,0.9903,-0.1392,0,0.6927,0.9903,-0.1392,0,0.6915,0.9903,-0.1392,0,0.6884,0.9903,-0.1392,0,0.6854,0.9903,-0.1392,0,0.6844,0.9903,-0.1392,0,0.6853,0.9903,-0.1392,0,0.6873,0.9903,-0.1392,0,0.6909,0.9903,-0.1392,0,0.6965,0.9903,-0.1392,0,0.7052,0.9903,-0.1392,0,0.7164,0.9903,-0.1392,0,0.7281,0.9903,-0.1392,0,0.7381,0.9903,-0.1392,0,0.747,0.9903,-0.1392,0,0.7555,0.9903,-0.1392,0,0.7619,0.9903,-0.1392,0,0.7646,0.9903,-0.1392,0,0.7608,0.9903,-0.1392,0,0.7521,0.9903,-0.1392,0,0.7437,0.9903,-0.1392,0,0.7407,0.9903,-0.1392,0,0.7479,0.9903,-0.1392,0,0.7614,0.9903,-0.1392,0,0.7734,0.9903,-0.1392,0,0.7759,0.9903,-0.1391,-0.0001,0.7644,0.9903,-0.1391,-0.0001,0.744,0.9903,-0.1391,-0.0001,0.721,0.9903,-0.1392,0,0.7021,0.9903,-0.1392,0,0.6877,0.9903,-0.1392,0,0.6748,0.9903,-0.1392,0,0.6644,0.9903,-0.1392,0,0.6577,0.9903,-0.1392,0,0.656,0.9903,-0.1392,0,0.6584,0.9903,-0.1392,0,0.6624,0.9903,-0.1392,0,0.6657,0.9903,-0.1392,0,0.6686,0.9903,-0.1392,0,0.672,0.9903,-0.1392,0,0.6746,0.9903,-0.1392,0,0.6751,0.9903,-0.1392,0,0.6715,0.9903,-0.1392,0,0.6653,0.9903,-0.1392,0,0.6594,0.9903,-0.1392,0,0.657,0.9903,-0.1392,0,0.6605,0.9903,-0.1392,0,0.6676,0.9903,-0.1392,0,0.6749,0.9903,-0.1392,0,0.679,0.9903,-0.1392,0,0.6782,0.9903,-0.1392,0,0.6746,0.9903,-0.1392,0,0.6704,0.9903,-0.1392,0,0.6679,0.9903,-0.1392,0,0.6681,0.9903,-0.1392,0,0.6697,0.9903,-0.1392,0,0.6715,0.9903,-0.1392,0,0.6724,0.9903,-0.1392,0,0.67,0.9903,-0.1392,0,0.6656,0.9903,-0.1392,0.0001,0.6637,0.9903,-0.1392,0,0.6688,0.9903,-0.1391,-0.0001,0.6844,0.9903,-0.1391,-0.0001,0.7074,0.9903,-0.1391,-0.0001,0.7321,0.9903,-0.1392,0,0.7531,0.9903,-0.1392,0,0.7715,0.9903,-0.1392,0,0.7894,0.9903,-0.1392,0,0.8026,0.9903,-0.1392,0,0.8069,0.9903,-0.1392,-0.0001,0.7951,0.9903,-0.1391,-0.0001,0.7715,0.9903,-0.1392,0,0.7492,0.9903,-0.1392,0,0.7416,0.9903,-0.1391,-0.0001,0.7586,0.9903,-0.1391,-0.0002,0.7909,0.9903,-0.1391,-0.0001,0.8231,0.9903,-0.1392,0,0.8394,0.9903,-0.1392,0,0.8339,0.9903,-0.1392,0,0.8154,0.9903,-0.1392,0,0.791,0.9903,-0.1392,0,0.7675,0.9903,-0.1392,0,0.7451,0.9903,-0.1391,-0.0001,0.7208,0.9903,-0.1392,0,0.6963,0.9903,-0.1392,0,0.6737,0.9903,-0.1392,0,0.65,0.9903,-0.1392,0,0.6253,0.9903,-0.1392,0,0.6061,0.9903,-0.1392,0,0.599,0.9903,-0.1391,-0.0001,0.6108,0.9903,-0.1391,-0.0002,0.6363,0.9903,-0.1391,-0.0001,0.664,0.9903,-0.1392,0,0.6823,0.9903,-0.1392,0.0001,0.6891,0.9903,-0.1392,0.0001,0.6903,0.9903,-0.1392,0.0001,0.6862,0.9903,-0.1392,0,0.6772,0.9903,-0.1391,-0.0001,0.6583,0.9903,-0.1391,-0.0002,0.631,0.9903,-0.1391,-0.0001,0.6053,0.9903,-0.1392,0,0.5911,0.9903,-0.1392,0,0.5938,0.9903,-0.1392,0,0.6072,0.9903,-0.1392,0,0.6239,0.9903,-0.1392,0,0.6366,0.9903,-0.1392,0,0.6453,0.9903,-0.1392,0,0.6532,0.9903,-0.1392,0,0.6579,0.9903,-0.1392,0,0.6569,0.9903,-0.1392,0,0.648,0.9903,-0.1392,-0.0001,0.6329,0.9903,-0.1392,0,0.6155,0.9903,-0.1392,0,0.5996,0.9903,-0.1392,0,0.5848,0.9903,-0.1392,0,0.5695,0.9903,-0.1392,0,0.5559,0.9903,-0.1392,0,0.546,0.9903,-0.1392,0,0.5419,0.9903,-0.1392,0,0.5421,0.9903,-0.1392,0,0.543,0.9903,-0.1392,0,0.5408,0.9903,-0.1392,0,0.5311,0.9903,-0.1392,0,0.5171,0.9903,-0.1392,0.0001,0.5065,0.9903,-0.1392,0,0.5069,0.9903,-0.1391,-0.0002,0.5242,0.9903,-0.1391,-0.0003,0.5529,0.9903,-0.1391,-0.0002,0.5842,0.9903,-0.1392,0,0.6091,0.9903,-0.1392,0.0001,0.6272,0.9903,-0.1392,0.0001,0.6427,0.9903,-0.1392,0,0.6532,0.9903,-0.1392,0,0.6564,0.9903,-0.1392,0.0001,0.6521,0.9903,-0.1392,0.0002,0.6414,0.9903,-0.1392,0.0002,0.624,0.9903,-0.1392,0,0.5995,0.9903,-0.139,-0.0005,0.5589,0.9903,-0.1389,-0.0009,0.5052,0.9903,-0.139,-0.0006,0.4566,0.9903,-0.1392,0,0.4314,0.9903,-0.1392,-0.0001,0.4424,0.9903,-0.1391,-0.0003,0.4772,0.9903,-0.1391,-0.0003,0.5162,0.9903,-0.1392,0,0.5396,0.9903,-0.1392,0.0001,0.5412,0.9903,-0.1392,0.0001,0.5319,0.9903,-0.1392,0,0.5174,0.9903,-0.1392,0,0.5033,0.9903,-0.1392,0,0.4911,0.9903,-0.1392,0.0001,0.478,0.9903,-0.1392,0.0001,0.4624,0.9903,-0.1392,0,0.4432,0.9903,-0.1391,-0.0003,0.4159,0.9903,-0.1391,-0.0005,0.3828,0.9903,-0.1391,-0.0003,0.3517,0.9903,-0.1392,0,0.3305,0.9903,-0.1392,0.0002,0.3228,0.9903,-0.1392,0.0002,0.3238,0.9903,-0.1392,0.0001,0.3294,0.9903,-0.1392,0,0.3357,0.9903,-0.1392,0,0.3437,0.9903,-0.1392,-0.0001,0.3549,0.9903,-0.1392,0,0.3657,0.9903,-0.1392,0,0.3727,0.9903,-0.1392,0,0.3741,0.9903,-0.1392,0,0.372,0.9903,-0.1392,0,0.3689,0.9903,-0.1392,0,0.3672,0.9903,-0.1392,0,0.3685,0.9903,-0.1392,0,0.371,0.9903,-0.1392,0,0.3728,0.9903,-0.1392,0,0.3717,0.9903,-0.1392,0,0.3655,0.9903,-0.1392,0,0.3559,0.9903,-0.1392,0,0.3467,0.9903,-0.1392,0,0.3413,0.9903,-0.1392,0,0.3413,0.9903,-0.1392,0,0.3445,0.9903,-0.1392,0,0.3495,0.9903,-0.1392,0,0.3548,0.9903,-0.1392,0,0.3625,0.9903,-0.1392,0,0.3726,0.9903,-0.1392,0,0.3804,0.9903,-0.1392,0,0.3813,0.9903,-0.1392,-0.0001,0.3685,0.9903,-0.1392,-0.0001,0.3464,0.9903,-0.1392,0,0.3268,0.9903,-0.1392,0,0.3213,0.9903,-0.1392,-0.0001,0.335,0.9903,-0.1392,-0.0001,0.361,0.9903,-0.1392,0,0.393,0.9903,-0.1392,0,0.4249,0.9903,-0.1391,-0.0003,0.4604,0.9903,-0.1391,-0.0004,0.501,0.9903,-0.1391,-0.0003,0.537,0.9903,-0.1392,0,0.5587,0.9903,-0.1392,0.0001,0.5605,0.9903,-0.1392,0.0001,0.5486,0.9903,-0.1392,0,0.5308,0.9903,-0.1392,0,0.515,0.9903,-0.1392,0,0.5034,0.9903,-0.1392,0.0001,0.4918,0.9903,-0.1392,0.0001,0.4782,0.9903,-0.1392,0,0.4603,0.9903,-0.1391,-0.0003,0.432,0.9903,-0.1391,-0.0004,0.3963,0.9903,-0.1391,-0.0003,0.3649,0.9903,-0.1392,0,0.3498,0.9903,-0.1391,-0.0001,0.3612,0.9903,-0.1391,-0.0003,0.3904,0.9903,-0.1391,-0.0002,0.4209,0.9903,-0.1392,0,0.4365,0.9903,-0.1392,0.0001,0.4333,0.9903,-0.1392,0.0003,0.4199,0.9903,-0.1392,0.0003,0.3983,0.9903,-0.1392,0,0.3706,0.9903,-0.1391,-0.0009,0.3305,0.9903,-0.1389,-0.0016,0.2792,0.9903,-0.139,-0.0013,0.2299,0.9903,-0.1392,0,0.1956,0.9902,-0.1393,0.001,0.1854,0.9902,-0.1393,0.0011,0.1906,0.9903,-0.1392,0.0007,0.1973,0.9903,-0.1392,0,0.1919,0.9903,-0.1391,-0.001,0.1667,0.9903,-0.139,-0.0019,0.1305,0.9903,-0.139,-0.0018,0.0937,0.9903,-0.1392,0,0.0667,0.9902,-0.1393,0.0016,0.0543,0.9902,-0.1393,0.0017,0.0502,0.9903,-0.1392,0.0008,0.0486,0.9903,-0.1392,0,0.0433,0.9903,-0.1392,-0.0008,0.031,0.9903,-0.1392,-0.0023,0.0153,0.9902,-0.139,-0.0133,0.0014,-0.9903,0.1392,0,0.0054,-0.9902,0.1392,-0.014,0.0005,0.9903,-0.1392,-0.0014,0.0123,0.9903,-0.1392,-0.0003,0.0252,0.9903,-0.1392,0,0.0304,0.9903,-0.1392,0.0001,0.02,0.9667,-0.1546,0.2038,0.0002,-0.9903,0.1388,0.0055,0.0159,-0.9903,0.1392,0,0.0149,0.9902,-0.1384,-0.0201,0.0126,0.9903,-0.139,-0.007,0.0577,0.9903,-0.1391,-0.0025,0.1056,0.9903,-0.1392,0,0.1417,0.9903,-0.1392,0.0007,0.1624,0.9903,-0.1392,0.0006,0.1755,0.9903,-0.1392,0.0002,0.1831,0.9903,-0.1392,0,0.1873,0.9903,-0.1392,0.0001,0.189,0.9903,-0.1392,0.0003,0.1868,0.9903,-0.1392,0.0003,0.1801,0.9903,-0.1392,0,0.1684,0.9903,-0.1391,-0.0007,0.1473,0.9903,-0.1391,-0.0013,0.1187,0.9903,-0.1391,-0.0011,0.0907,0.9903,-0.1392,0,0.0717,0.9903,-0.1392,0.001,0.0634,0.9903,-0.1393,0.0013,0.0616,0.9903,-0.1392,0.0009,0.0655,0.9903,-0.1392,0,0.0745,0.9903,-0.1391,-0.0007,0.0908,0.9903,-0.1391,-0.0008,0.1142,0.9903,-0.1392,-0.0004,0.1394,0.9903,-0.1392,0,0.1613,0.9903,-0.1392,0.0001,0.1823,0.9903,-0.1392,0.0001,0.2039,0.9903,-0.1392,0.0001,0.2196,0.9903,-0.1392,0,0.223,0.9903,-0.1391,-0.0005,0.207,0.9903,-0.1391,-0.001,0.1769,0.9903,-0.1391,-0.0008,0.1445,0.9903,-0.1392,0,0.1218,0.9903,-0.1393,0.0008,0.1091,0.9902,-0.1393,0.0014,0.1011,0.9902,-0.1393,0.0013,0.1008,0.9903,-0.1392,0,0.1112,0.9903,-0.139,-0.0016,0.1393,0.9903,-0.139,-0.0019,0.1816,0.9903,-0.1391,-0.001,0.2248,0.9903,-0.1392,0,0.2557,0.9903,-0.1392,0.0004,0.2691,0.9903,-0.1392,0.0004,0.2727,0.9903,-0.1392,0.0001,0.2724,0.9903,-0.1392,0,0.2741,0.9903,-0.1392,0,0.2803,0.9903,-0.1392,0,0.2875,0.9903,-0.1392,0,0.2927,0.9903,-0.1392,0,0.2927,0.9903,-0.1392,-0.0001,0.2829,0.9903,-0.1392,-0.0002,0.2663,0.9903,-0.1392,-0.0001,0.2509,0.9903,-0.1392,0,0.2445,0.9903,-0.1392,0,0.2506,0.9903,-0.1392,-0.0001,0.2646,0.9903,-0.1392,0,0.2822,0.9903,-0.1392,0,0.2989,0.9903,-0.1392,0,0.3145,0.9903,-0.1392,0,0.3308,0.9903,-0.1392,0,0.3475,0.9903,-0.1392,0,0.3639,0.9903,-0.1392,0,0.38,0.9903,-0.1392,0,0.3959,0.9903,-0.1392,0,0.4119,0.9903,-0.1392,0,0.4281,0.9903,-0.1392,0,0.4468,0.9903,-0.1391,-0.0001,0.4672,0.9903,-0.1392,-0.0001,0.4847,0.9903,-0.1392,0,0.4946,0.9903,-0.1392,0,0.4938,0.9903,-0.1392,0,0.4853,0.9903,-0.1392,0,0.4743,0.9903,-0.1392,0,0.4659,0.9903,-0.1392,0,0.4624,0.9903,-0.1392,0,0.4608,0.9903,-0.1392,0,0.4582,0.9903,-0.1392,0,0.4516,0.9903,-0.1392,-0.0001,0.439,0.9903,-0.1392,-0.0001,0.4224,0.9903,-0.1392,-0.0001,0.405,0.9903,-0.1392,0,0.3902,0.9903,-0.1392,0,0.3787,0.9903,-0.1392,0,0.3688,0.9903,-0.1392,0,0.36,0.9903,-0.1392,0,0.3521,0.9903,-0.1392,0,0.3442,0.9903,-0.1392,0,0.3367,0.9903,-0.1392,0,0.3313,0.9903,-0.1392,0,0.3293,0.9903,-0.1392,0,0.3318,0.9903,-0.1392,0,0.3377,0.9903,-0.1392,0,0.3458,0.9903,-0.1392,0,0.355,0.9903,-0.1392,0,0.3659,0.9903,-0.1392,0,0.3788,0.9903,-0.1392,0,0.3921,0.9903,-0.1392,0,0.4043,0.9903,-0.1392,0,0.4154,0.9903,-0.1392,0,0.426,0.9903,-0.1392,0,0.4357,0.9903,-0.1392,0,0.4437,0.9903,-0.1392,0,0.4493,0.9903,-0.1392,0,0.4532,0.9903,-0.1392,0,0.4564,0.9903,-0.1392,0,0.46,0.9903,-0.1392,0,0.4642,0.9903,-0.1392,0,0.4686,0.9903,-0.1392,0,0.4729,0.9903,-0.1392,0,0.4766,0.9903,-0.1392,0,0.4794,0.9903,-0.1392,0,0.4815,0.9903,-0.1392,0,0.4839,0.9903,-0.1392,0,0.4876,0.9903,-0.1392,0,0.4918,0.9903,-0.1392,0.0001,0.4964,0.9903,-0.1392,0.0001,0.5031,0.9903,-0.1392,0,0.5136,0.9903,-0.1392,-0.0001,0.5295,0.9903,-0.1392,-0.0001,0.5495,0.9903,-0.1392,0,0.571,0.9903,-0.1392,0,0.5914,0.9903,-0.1392,0,0.61,0.9903,-0.1392,0,0.6281,0.9903,-0.1392,0,0.6465,0.9903,-0.1392,0,0.6661,0.9903,-0.1391,-0.0001,0.6913,0.9903,-0.1391,-0.0001,0.7202,0.9903,-0.1392,0,0.7442,0.9903,-0.1392,0,0.7546,0.9903,-0.1392,-0.0001,0.7446,0.9903,-0.1391,-0.0001,0.7202,0.9903,-0.1391,-0.0001,0.6923,0.9903,-0.1392,0,0.6715,0.9903,-0.1392,0.0001,0.6626,0.9903,-0.1392,0.0001,0.6591,0.9903,-0.1392,0.0001,0.6555,0.9903,-0.1392,0,0.6462,0.9903,-0.1391,-0.0001,0.6269,0.9903,-0.1391,-0.0002,0.6015,0.9903,-0.1391,-0.0001,0.5768,0.9903,-0.1392,0,0.5598,0.9903,-0.1392,0.0001,0.5535,0.9903,-0.1392,0.0001,0.554,0.9903,-0.1392,0,0.5569,0.9903,-0.1392,0,0.5582,0.9903,-0.1392,0,0.5566,0.9903,-0.1392,0,0.5543,0.9903,-0.1392,0,0.5525,0.9903,-0.1392,0,0.5521,0.9903,-0.1392,0,0.5538,0.9903,-0.1392,0,0.5569,0.9903,-0.1392,0,0.5606,0.9903,-0.1392,0,0.5639,0.9903,-0.1392,0,0.5672,0.9903,-0.1392,0,0.5706,0.9903,-0.1392,0,0.5736,0.9903,-0.1392,0,0.5755,0.9903,-0.1392,0,0.576,0.9903,-0.1392,0,0.5754,0.9903,-0.1392,0,0.5745,0.9903,-0.1392,0,0.5741,0.9903,-0.1392,0,0.5756,0.9903,-0.1392,0,0.5783,0.9903,-0.1392,0,0.5794,0.9903,-0.1392,0,0.5764,0.9903,-0.1392,0,0.5667,0.9903,-0.1392,-0.0001,0.5525,0.9903,-0.1392,0,0.5377,0.9903,-0.1392,0,0.5263,0.9903,-0.1392,0,0.5197,0.9903,-0.1392,0,0.5156,0.9903,-0.1392,0,0.5127,0.9903,-0.1392,0,0.5095,0.9903,-0.1392,0,0.506,0.9903,-0.1392,0,0.5029,0.9903,-0.1392,0,0.4997,0.9903,-0.1392,0,0.4959,0.9903,-0.1392,0,0.4902,0.9903,-0.1392,0,0.4832,0.9903,-0.1392,0,0.4776,0.9903,-0.1392,0,0.4762,0.9903,-0.1392,0,0.4806,0.9903,-0.1392,0,0.4891,0.9903,-0.1392,0,0.4993,0.9903,-0.1392,0,0.5089,0.9903,-0.1392,0,0.5174,0.9903,-0.1392,0,0.526,0.9903,-0.1392,0,0.5348,0.9903,-0.1392,0,0.5437,0.9903,-0.1392,0,0.5536,0.9903,-0.1392,0,0.5642,0.9903,-0.1392,0,0.5739,0.9903,-0.1392,0,0.581,0.9903,-0.1392,0,0.5848,0.9903,-0.1392,0,0.5862,0.9903,-0.1392,0,0.5863,0.9903,-0.1392,0,0.5862,0.9903,-0.1392,0,0.5861,0.9903,-0.1392,0,0.5855,0.9903,-0.1392,0,0.5841,0.9903,-0.1392,0,0.5816,0.9903,-0.1392,0,0.5776,0.9903,-0.1392,0,0.5724,0.9903,-0.1392,0,0.5667,0.9903,-0.1392,0,0.5612,0.9903,-0.1392,0,0.5562,0.9903,-0.1392,0,0.5513,0.9903,-0.1392,0,0.5461,0.9903,-0.1392,0,0.5404,0.9903,-0.1392,0,0.5328,0.9903,-0.1392,0,0.524,0.9903,-0.1392,0,0.5163,0.9903,-0.1392,0,0.5117,0.9903,-0.1392,0,0.5118,0.9903,-0.1392,0,0.5152,0.9903,-0.1392,0,0.5196,0.9903,-0.1392,0,0.523,0.9903,-0.1392,0,0.5251,0.9903,-0.1392,0,0.5269,0.9903,-0.1392,0,0.5284,0.9903,-0.1392,0,0.5298,0.9903,-0.1392,0,0.5309,0.9903,-0.1392,0,0.5318,0.9903,-0.1392,0,0.5326,0.9903,-0.1392,0,0.5335,0.9903,-0.1392,0,0.5349,0.9903,-0.1392,0,0.5368,0.9903,-0.1392,0,0.5381,0.9903,-0.1392,0,0.538,0.9903,-0.1392,0,0.5366,0.9903,-0.1392,0,0.5343,0.9903,-0.1392,0,0.5305,0.9903,-0.1392,0,0.525,0.9903,-0.1392,0,0.5156,0.9903,-0.1392,0,0.5031,0.9903,-0.1392,0,0.4917,0.9903,-0.1392,0,0.4855,0.9903,-0.1392,0,0.4886,0.9903,-0.1392,0,0.4978,0.9903,-0.1392,0,0.5063,0.9903,-0.1392,0,0.5075,0.9903,-0.1392,-0.0001,0.497,0.9903,-0.1391,-0.0001,0.4793,0.9903,-0.1392,-0.0001,0.4608,0.9903,-0.1392,0,0.4485,0.9903,-0.1392,0,0.4449,0.9903,-0.1392,0,0.4462,0.9903,-0.1392,0,0.4492,0.9903,-0.1392,0,0.4505,0.9903,-0.1392,0,0.449,0.9903,-0.1392,0,0.4467,0.9903,-0.1392,0,0.4445,0.9903,-0.1392,0,0.4435,0.9903,-0.1392,0,0.444,0.9903,-0.1392,0,0.4452,0.9903,-0.1392,0,0.4475,0.9903,-0.1392,0,0.4511,0.9903,-0.1392,0,0.4576,0.9903,-0.1392,0,0.4663,0.9903,-0.1392,0,0.4742,0.9903,-0.1392,0,0.4782,0.9903,-0.1392,0,0.4754,0.9903,-0.1392,0,0.468,0.9903,-0.1392,0,0.4611,0.9903,-0.1392,0,0.4598,0.9903,-0.1392,0,0.467,0.9903,-0.1392,-0.0001,0.4794,0.9903,-0.1392,0,0.4931,0.9903,-0.1392,0,0.5041,0.9903,-0.1392,0,0.5114,0.9903,-0.1392,0,0.5172,0.9903,-0.1392,0,0.522,0.9903,-0.1392,0,0.5263,0.9903,-0.1392,0,0.5304,0.9903,-0.1392,0,0.5341,0.9903,-0.1392,0,0.5367,0.9903,-0.1392,0,0.5378,0.9903,-0.1392,0,0.5361,0.9903,-0.1392,0,0.5324,0.9903,-0.1392,0,0.5287,0.9903,-0.1392,0,0.5271,0.9903,-0.1392,0,0.529,0.9903,-0.1392,0,0.5331,0.9903,-0.1392,0,0.5372,0.9903,-0.1392,0,0.5395,0.9903,-0.1392,0,0.5393,0.9903,-0.1392,0,0.5379,0.9903,-0.1392,0,0.5354,0.9903,-0.1392,0,0.5324,0.9903,-0.1392,0,0.5289,0.9903,-0.1392,0,0.5247,0.9903,-0.1392,0,0.5198,0.9903,-0.1392,0,0.514,0.9903,-0.1392,0,0.5068,0.9903,-0.1392,0,0.4983,0.9903,-0.1392,0,0.4899,0.9903,-0.1392,0,0.4828,0.9903,-0.1392,0,0.4788,0.9903,-0.1392,0.0001,0.4767,0.9903,-0.1392,0,0.4736,0.9903,-0.1392,0,0.4664,0.9903,-0.1392,-0.0001,0.4534,0.9903,-0.1392,-0.0001,0.4366,0.9903,-0.1392,0,0.4184,0.9903,-0.1392,0,0.4013,0.9903,-0.1392,0,0.3854,0.9903,-0.1392,0,0.3695,0.9903,-0.1392,0,0.3545,0.9903,-0.1392,0,0.3414,0.9903,-0.1392,0,0.3313,0.9903,-0.1392,0,0.3233,0.9903,-0.1392,0,0.3154]);
Group704ZZZ.children[28] = OrientationInterpolator733;

let OrientationInterpolator734 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator734.DEF = "Interpolator26_lThumb1";
OrientationInterpolator734.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator734.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0]);
Group704ZZZ.children[29] = OrientationInterpolator734;

let OrientationInterpolator735 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator735.DEF = "Interpolator27_lThumb2";
OrientationInterpolator735.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator735.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0]);
Group704ZZZ.children[30] = OrientationInterpolator735;

let OrientationInterpolator736 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator736.DEF = "Interpolator28_lIndex1";
OrientationInterpolator736.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator736.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0]);
Group704ZZZ.children[31] = OrientationInterpolator736;

let OrientationInterpolator737 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator737.DEF = "Interpolator29_lIndex2";
OrientationInterpolator737.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator737.keyValue = new X3D.MFRotation([0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657,0.5727,-0.0827,-0.8156,0.1657]);
Group704ZZZ.children[32] = OrientationInterpolator737;

let OrientationInterpolator738 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator738.DEF = "Interpolator30_lMid1";
OrientationInterpolator738.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator738.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0]);
Group704ZZZ.children[33] = OrientationInterpolator738;

let OrientationInterpolator739 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator739.DEF = "Interpolator31_lMid2";
OrientationInterpolator739.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator739.keyValue = new X3D.MFRotation([0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535,0.3141,-0.0416,-0.9485,0.0535]);
Group704ZZZ.children[34] = OrientationInterpolator739;

let OrientationInterpolator740 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator740.DEF = "Interpolator32_lRing1";
OrientationInterpolator740.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator740.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0]);
Group704ZZZ.children[35] = OrientationInterpolator740;

let OrientationInterpolator741 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator741.DEF = "Interpolator33_lRing2";
OrientationInterpolator741.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator741.keyValue = new X3D.MFRotation([0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799,0.0706,-0.0089,-0.9975,0.1799]);
Group704ZZZ.children[36] = OrientationInterpolator741;

let OrientationInterpolator742 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator742.DEF = "Interpolator34_lPinky1";
OrientationInterpolator742.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator742.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0]);
Group704ZZZ.children[37] = OrientationInterpolator742;

let OrientationInterpolator743 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator743.DEF = "Interpolator35_lPinky2";
OrientationInterpolator743.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator743.keyValue = new X3D.MFRotation([-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041,-0.3103,0.0949,-0.9459,0.041]);
Group704ZZZ.children[38] = OrientationInterpolator743;

let OrientationInterpolator744 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator744.DEF = "Interpolator36_rButtock";
OrientationInterpolator744.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator744.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0]);
Group704ZZZ.children[39] = OrientationInterpolator744;

let OrientationInterpolator745 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator745.DEF = "Interpolator37_rThigh";
OrientationInterpolator745.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator745.keyValue = new X3D.MFRotation([-0.9929,-0.0147,0.1181,0.0499,-0.9942,0.0467,0.0965,0.2315,-0.994,0.0465,0.0991,0.4245,-0.9938,0.0416,0.1034,0.5955,-0.9935,0.0377,0.1071,0.711,-0.9933,0.037,0.1093,0.7473,-0.9931,0.0392,0.1107,0.7272,-0.9927,0.043,0.1129,0.6865,-0.992,0.0471,0.1173,0.6613,-0.9907,0.0535,0.1253,0.6581,-0.9888,0.062,0.1355,0.6588,-0.987,0.0677,0.1457,0.6625,-0.986,0.0661,0.1533,0.6679,-0.9861,0.0529,0.1573,0.6759,-0.9868,0.0321,0.1588,0.6869,-0.9871,0.011,0.1595,0.6985,-0.9869,-0.0038,0.161,0.7084,-0.9863,-0.0115,0.1646,0.7165,-0.9855,-0.0157,0.1692,0.7238,-0.9847,-0.0164,0.1733,0.7294,-0.9844,-0.0134,0.1754,0.7327,-0.9842,-0.0059,0.1767,0.7324,-0.9841,0.0058,0.1776,0.7295,-0.9844,0.0202,0.175,0.7258,-0.9854,0.0359,0.1663,0.7231,-0.9873,0.0531,0.1494,0.722,-0.9893,0.0725,0.1262,0.7218,-0.9907,0.0923,0.0999,0.7225,-0.9911,0.111,0.0735,0.724,-0.9909,0.1261,0.0465,0.7261,-0.9901,0.139,0.0179,0.7292,-0.988,0.1541,-0.0101,0.7332,-0.9839,0.1755,-0.0352,0.7379,-0.9765,0.2081,-0.0553,0.7436,-0.9661,0.248,-0.0719,0.7506,-0.9542,0.2858,-0.0887,0.7579,-0.9434,0.3132,-0.1093,0.7642,-0.9355,0.3269,-0.1344,0.7687,-0.9292,0.3322,-0.1621,0.7722,-0.9228,0.3335,-0.1929,0.7759,-0.9144,0.3353,-0.2269,0.7809,-0.9029,0.3375,-0.2662,0.7882,-0.8889,0.338,-0.3092,0.7978,-0.8735,0.3375,-0.3507,0.8087,-0.8586,0.3369,-0.3863,0.8193,-0.8445,0.3364,-0.4167,0.8289,-0.8307,0.3356,-0.4442,0.838,-0.8182,0.3352,-0.4671,0.8458,-0.8079,0.3359,-0.4842,0.8515,-0.7995,0.3407,-0.4947,0.8549,-0.7928,0.3484,-0.5001,0.8561,-0.7892,0.3536,-0.5022,0.8542,-0.7901,0.3509,-0.5026,0.8486,-0.7965,0.338,-0.5013,0.8388,-0.8075,0.3174,-0.4972,0.8253,-0.8212,0.2913,-0.4907,0.8089,-0.836,0.2617,-0.4824,0.7899,-0.8531,0.2252,-0.4707,0.7668,-0.8723,0.1804,-0.4545,0.7403,-0.89,0.1337,-0.436,0.7141,-0.9034,0.0933,-0.4185,0.6918,-0.9127,0.0598,-0.4042,0.6733,-0.9195,0.0306,-0.3918,0.6568,-0.9246,0.0103,-0.3807,0.6423,-0.929,0.0037,-0.3702,0.6298,-0.9323,0.0198,-0.3611,0.6195,-0.9337,0.0549,-0.3539,0.6118,-0.9332,0.0938,-0.3469,0.6066,-0.933,0.1208,-0.3391,0.6032,-0.9345,0.1308,-0.3312,0.6022,-0.9369,0.132,-0.3236,0.6032,-0.9401,0.1291,-0.3154,0.6037,-0.9438,0.1269,-0.3052,0.6008,-0.9481,0.1252,-0.2923,0.5939,-0.9531,0.122,-0.2771,0.5845,-0.9583,0.1194,-0.2598,0.5734,-0.9632,0.1198,-0.2406,0.5614,-0.9676,0.1273,-0.218,0.5478,-0.9713,0.1402,-0.1919,0.5328,-0.9747,0.1516,-0.1646,0.5183,-0.9783,0.1535,-0.139,0.5062,-0.9834,0.1384,-0.1171,0.4968,-0.989,0.1111,-0.0973,0.4892,-0.9935,0.0826,-0.0779,0.4825,-0.9963,0.0645,-0.0567,0.4753,-0.9974,0.0639,-0.0327,0.4675,-0.9972,0.0743,-0.0074,0.4597,-0.9961,0.0864,0.0184,0.4519,-0.9949,0.0904,0.0436,0.444,-0.9943,0.0817,0.0682,0.4353,-0.9935,0.0655,0.093,0.426,-0.9919,0.0467,0.1181,0.4172,-0.9892,0.0307,0.1432,0.4098,-0.9855,0.0195,0.1686,0.4042,-0.981,0.0103,0.1939,0.3996,-0.976,0.0017,0.2178,0.3959,-0.9708,-0.0081,0.2396,0.3925,-0.9657,-0.0193,0.2588,0.3894,-0.9607,-0.0311,0.2758,0.3867,-0.9558,-0.0434,0.2909,0.3843,-0.9509,-0.0558,0.3044,0.3824,-0.9461,-0.0693,0.3164,0.3808,-0.9415,-0.0836,0.3266,0.3797,-0.9372,-0.0968,0.335,0.3788,-0.9337,-0.107,0.3416,0.378,-0.9315,-0.1128,0.3457,0.3771,-0.9306,-0.1156,0.3474,0.3762,-0.93,-0.1173,0.3485,0.3755,-0.9288,-0.1201,0.3506,0.3752,-0.9263,-0.1248,0.3555,0.3755,-0.9232,-0.1302,0.3617,0.3761,-0.9205,-0.1352,0.3667,0.3772,-0.9195,-0.1387,0.3679,0.3785,-0.9207,-0.1404,0.3641,0.3801,-0.9235,-0.1409,0.3569,0.3818,-0.9269,-0.1404,0.348,0.3843,-0.9303,-0.1393,0.3393,0.3879,-0.9338,-0.1362,0.3309,0.3926,-0.9375,-0.1316,0.3222,0.3981,-0.9409,-0.128,0.3135,0.4051,-0.9437,-0.1277,0.3051,0.4142,-0.945,-0.1326,0.299,0.4255,-0.9453,-0.1406,0.2942,0.4387,-0.9463,-0.1481,0.2873,0.4537,-0.9493,-0.1517,0.2754,0.4704,-0.9546,-0.1504,0.257,0.4894,-0.9609,-0.1462,0.235,0.5108,-0.9669,-0.1407,0.213,0.5332,-0.9717,-0.1355,0.1936,0.5554,-0.9753,-0.1311,0.1778,0.5769,-0.9783,-0.1266,0.1638,0.5983,-0.9812,-0.1216,0.1497,0.6199,-0.9842,-0.1153,0.1341,0.642,-0.9873,-0.1081,0.1161,0.665,-0.9902,-0.1001,0.0971,0.6886,-0.9928,-0.0907,0.0785,0.7124,-0.995,-0.0794,0.0614,0.7357,-0.9967,-0.0673,0.0454,0.7589,-0.9981,-0.0544,0.0301,0.7823,-0.9991,-0.0388,0.0166,0.8045,-0.9998,-0.0186,0.0056,0.8239,-1,0.0084,-0.0024,0.8399,-0.9992,0.0404,-0.0082,0.8537,-0.9972,0.0731,-0.0128,0.8661,-0.9946,0.1024,-0.0168,0.878,-0.9918,0.126,-0.0199,0.8892,-0.9889,0.1468,-0.0222,0.8994,-0.9854,0.1687,-0.0248,0.9086,-0.9803,0.1953,-0.0289,0.9171,-0.9729,0.2287,-0.0351,0.9251,-0.9629,0.2664,-0.0426,0.9328,-0.951,0.3049,-0.0506,0.9403,-0.9383,0.3409,-0.0586,0.9475,-0.9241,0.3764,-0.0663,0.9541,-0.9081,0.4121,-0.0742,0.9603,-0.8925,0.4433,-0.0825,0.9663,-0.8802,0.4658,-0.091,0.9717,-0.8698,0.4828,-0.1018,0.9774,-0.8611,0.4955,-0.114,0.9828,-0.8588,0.4969,-0.1243,0.9859,-0.8676,0.4801,-0.1293,0.9844,-0.889,0.4391,-0.1297,0.9754,-0.9177,0.3766,-0.1263,0.9623,-0.9472,0.2989,-0.1163,0.9528,-0.9716,0.2154,-0.0981,0.954,-0.9894,0.1252,-0.073,0.9698,-0.9986,0.0283,-0.0446,0.9974,-0.9979,-0.0633,-0.0151,1.0326,-0.99,-0.1403,0.0152,1.0692,-0.9779,-0.2029,0.0512,1.1051,-0.9623,-0.2563,0.091,1.1432,-0.9453,-0.3009,0.1259,1.1833,-0.9298,-0.3369,0.1485,1.2244,-0.918,-0.3646,0.1559,1.2673,-0.91,-0.3849,0.1544,1.3112,-0.9043,-0.3993,0.1509,1.3514,-0.8996,-0.4094,0.1521,1.3839,-0.8957,-0.4145,0.1608,1.4067,-0.8932,-0.4147,0.1736,1.4232,-0.8916,-0.4123,0.1871,1.4362,-0.8905,-0.4097,0.1978,1.4484,-0.8902,-0.4067,0.2052,1.4593,-0.8908,-0.4023,0.2113,1.4678,-0.8918,-0.3975,0.216,1.475,-0.8929,-0.3934,0.2192,1.4821,-0.8941,-0.3896,0.2209,1.4886,-0.8956,-0.3859,0.2212,1.4941,-0.8971,-0.3831,0.2201,1.4998,-0.898,-0.3823,0.2179,1.5065,-0.8983,-0.3836,0.2143,1.5149,-0.8982,-0.3864,0.2095,1.5242,-0.8977,-0.3907,0.2034,1.5339,-0.8967,-0.3967,0.1961,1.5434,-0.895,-0.4053,0.1863,1.553,-0.8925,-0.416,0.1743,1.563,-0.8896,-0.4267,0.1628,1.5724,-0.8868,-0.4356,0.1545,1.5805,-0.8843,-0.4419,0.1508,1.5869,-0.8819,-0.4468,0.1502,1.592,-0.8793,-0.4518,0.1505,1.5961,-0.8761,-0.4583,0.1494,1.5998,-0.8718,-0.4675,0.1463,1.603,-0.8665,-0.4784,0.1422,1.6056,-0.8614,-0.4888,0.1383,1.6073,-0.8574,-0.4965,0.1357,1.6081,-0.8551,-0.5007,0.1342,1.6077,-0.854,-0.5029,0.1336,1.6062,-0.8534,-0.5037,0.134,1.604,-0.8529,-0.504,0.136,1.6013,-0.8519,-0.5044,0.1408,1.5976,-0.8508,-0.5042,0.1478,1.5929,-0.8505,-0.5027,0.1545,1.5885,-0.8521,-0.4989,0.1584,1.5857,-0.8562,-0.4921,0.1577,1.5841,-0.862,-0.4829,0.1542,1.5832,-0.8685,-0.4724,0.1503,1.5842,-0.8744,-0.462,0.1486,1.5879,-0.8802,-0.4505,0.1497,1.5954,-0.8861,-0.4378,0.1522,1.6059,-0.8908,-0.4267,0.156,1.6179,-0.8933,-0.4198,0.1607,1.6296,-0.8929,-0.4184,0.1665,1.6409,-0.8905,-0.4208,0.1732,1.6527,-0.8869,-0.4252,0.1804,1.6642,-0.8833,-0.4297,0.1877,1.6746,-0.8796,-0.4339,0.1948,1.6843,-0.8756,-0.4388,0.202,1.6935,-0.8709,-0.4445,0.2095,1.7012,-0.8656,-0.451,0.2175,1.7065,-0.8589,-0.4593,0.2266,1.7092,-0.851,-0.4689,0.2367,1.7098,-0.8431,-0.478,0.2464,1.7085,-0.8368,-0.485,0.2541,1.7052,-0.833,-0.4892,0.2585,1.6993,-0.8308,-0.4917,0.2608,1.6908,-0.829,-0.4935,0.2631,1.6811,-0.8263,-0.4954,0.2679,1.6716,-0.8219,-0.498,0.2766,1.6617,-0.8164,-0.5006,0.2878,1.6511,-0.8113,-0.5022,0.2992,1.6416,-0.808,-0.502,0.3086,1.6345,-0.8076,-0.4991,0.314,1.6307,-0.8094,-0.4945,0.3169,1.6292,-0.8111,-0.4891,0.3206,1.6285,-0.811,-0.4844,0.3282,1.6276,-0.8084,-0.4797,0.3412,1.6265,-0.8043,-0.4745,0.3577,1.6262,-0.7989,-0.47,0.3752,1.6261,-0.7925,-0.4676,0.3915,1.6257,-0.7846,-0.4681,0.4066,1.6245,-0.7751,-0.4706,0.4216,1.6229,-0.7651,-0.4739,0.4359,1.6215,-0.7557,-0.4768,0.449,1.6206,-0.7467,-0.4796,0.4609,1.62,-0.7377,-0.4828,0.4719,1.6194,-0.7294,-0.4857,0.4818,1.6194,-0.7223,-0.4879,0.4902,1.6208,-0.7162,-0.4895,0.4974,1.6237,-0.7111,-0.4907,0.5036,1.6277,-0.7076,-0.4913,0.5079,1.6321,-0.7065,-0.4912,0.5095,1.6363,-0.7088,-0.4899,0.5075,1.6406,-0.7138,-0.4877,0.5026,1.6451,-0.7198,-0.4853,0.4964,1.6491,-0.7249,-0.4838,0.4904,1.6519,-0.727,-0.4847,0.4863,1.6532,-0.7278,-0.487,0.4828,1.6535,-0.7309,-0.4883,0.4768,1.6528,-0.74,-0.4859,0.4652,1.6518,-0.7552,-0.4806,0.4458,1.6557,-0.7743,-0.4726,0.4208,1.6634,-0.7973,-0.4581,0.393,1.6667,-0.8242,-0.4336,0.3644,1.6567,-0.855,-0.3973,0.3333,1.6286,-0.8884,-0.35,0.2971,1.589,-0.9217,-0.2914,0.2562,1.5451,-0.9519,-0.2212,0.212,1.5037,-0.9787,-0.1289,0.16,1.4647,-0.995,-0.0161,0.0986,1.4275,-0.9948,0.0945,0.0373,1.3957,-0.9838,0.1786,-0.0122,1.3682,-0.9737,0.2241,-0.0416,1.3398,-0.9679,0.2449,-0.0562,1.3078,-0.9644,0.2569,-0.0633,1.274,-0.9584,0.2764,-0.0718,1.2414,-0.9477,0.3082,-0.0833,1.2112,-0.9344,0.3438,-0.0935,1.182,-0.9195,0.3795,-0.1029,1.1536,-0.9048,0.4109,-0.1122,1.1252,-0.892,0.4359,-0.12,1.096,-0.8805,0.457,-0.1261,1.0661,-0.8686,0.4774,-0.1325,1.0366,-0.8543,0.5,-0.142,1.0087,-0.8345,0.5284,-0.1564,0.9834,-0.8102,0.5597,-0.1741,0.9603,-0.7864,0.5868,-0.1932,0.9382,-0.7693,0.6029,-0.2112,0.9153,-0.7683,0.5986,-0.2265,0.8863,-0.7794,0.5788,-0.2399,0.8526,-0.7887,0.5605,-0.2525,0.822,-0.7818,0.5636,-0.2668,0.8025,-0.7468,0.6024,-0.2819,0.8018,-0.6913,0.6592,-0.2959,0.8167,-0.6312,0.7104,-0.3112,0.837,-0.5844,0.7403,-0.3323,0.8491,-0.558,0.7446,-0.3664,0.8447,-0.5423,0.7334,-0.41,0.8318,-0.5302,0.7171,-0.4524,0.8193,-0.5154,0.7085,-0.482,0.8152,-0.4941,0.7166,-0.4923,0.8244,-0.4712,0.7331,-0.4905,0.841,-0.4532,0.7473,-0.486,0.8559,-0.4463,0.7501,-0.4881,0.8594,-0.4559,0.7356,-0.5011,0.8478,-0.4776,0.7085,-0.5195,0.827,-0.5021,0.6769,-0.5382,0.8015,-0.5204,0.6516,-0.5519,0.775,-0.5291,0.6383,-0.5592,0.7453,-0.5331,0.6318,-0.5627,0.711,-0.5357,0.6289,-0.5635,0.6759,-0.5406,0.6249,-0.5632,0.6439,-0.5494,0.6192,-0.5611,0.6161,-0.5601,0.6137,-0.5564,0.5907,-0.5724,0.6072,-0.5511,0.5666,-0.5854,0.5981,-0.5473,0.5425,-0.6007,0.5843,-0.5457,0.518,-0.6184,0.566,-0.5452,0.4938,-0.6354,0.5462,-0.5457,0.4707,-0.6486,0.5287,-0.5476,0.4493,-0.6557,0.5146,-0.5525,0.4301,-0.6583,0.5025,-0.5605,0.4127,-0.6584,0.4928,-0.5689,0.3963,-0.6585,0.4859,-0.5747,0.3806,-0.6592,0.4834,-0.576,0.3662,-0.6593,0.4852,-0.5744,0.3531,-0.6582,0.4897,-0.5719,0.3399,-0.6553,0.4947,-0.5708,0.3251,-0.6507,0.4982,-0.5731,0.3083,-0.6441,0.5019,-0.5773,0.2902,-0.6338,0.5108,-0.5808,0.2714,-0.6179,0.5309,-0.5799,0.2529,-0.5923,0.5687,-0.5707,0.2352,-0.5545,0.6223,-0.5524,0.2186,-0.5052,0.6844,-0.5258,0.2033,-0.4466,0.7463,-0.4935,0.189,-0.3741,0.8086,-0.4542,0.1755,-0.2829,0.8705,-0.4027,0.1638,-0.1815,0.9226,-0.3405,0.154,-0.0822,0.9588,-0.272,0.1453,0.0156,0.9785,-0.2056,0.1341,0.1223,0.9835,-0.1333,0.1211,0.223,0.9739,-0.0417,0.1118,0.2799,0.9578,0.0658,0.1111,0.2487,0.9548,0.1626,0.1213,0.1696,0.9575,0.2333,0.1388,0.1052,0.9524,0.2862,0.1587,0.0869,0.938,0.3357,0.1751,0.124,0.9125,0.3899,0.1865,0.1863,0.8772,0.4425,0.1969,0.2414,0.8385,0.4884,0.2074,0.264,0.8082,0.5265,0.2174,0.2472,0.7907,0.56,0.2256,0.21,0.7785,0.5915,0.2325,0.1686,0.7661,0.6203,0.2386,0.138,0.7504,0.6464,0.2442,0.1221,0.732,0.6703,0.2489,0.1121,0.7123,0.6928,0.2526,0.1034,0.6914,0.715,0.2558,0.0915,0.669,0.7376,0.2594,0.0726,0.6449,0.7608,0.2635,0.0502,0.6189,0.7838,0.268,0.0311,0.5918,0.8055,0.2725,0.0218,0.5643,0.8253,0.2769,0.0248,0.5348,0.8446,0.2812,0.0359,0.5036,0.8632,0.2858,0.0507,0.4746,0.8788,0.2898,0.0655,0.4512,0.89,0.2921,0.0814,0.4337,0.8974,0.2919,0.0999,0.4199,0.9021,0.2898,0.1184,0.4098,0.9045,0.2867,0.1342,0.4038,0.905,0.2832,0.1478,0.4039,0.9028,0.2781,0.1607,0.4097,0.898,0.2714,0.1701,0.4179,0.8924,0.2657,0.1731,0.4249,0.8885,0.2637,0.167,0.4308,0.8869,0.2664,0.1542,0.4367,0.8863,0.2725,0.1388,0.4405,0.8869,0.2802,0.1245,0.4407,0.889,0.2879,0.1093,0.4371,0.8927,0.2961,0.0926,0.431,0.8976,0.3054,0.0793,0.4223,0.903,0.3141,0.0739,0.4114,0.9084,0.3206,0.0799,0.3966,0.9145,0.3242,0.0936,0.3783,0.9209,0.326,0.1083,0.3591,0.927,0.3268,0.1173,0.3422,0.9323,0.3274,0.1199,0.3268,0.9374,0.3276,0.1193,0.3118,0.9426,0.3271,0.1151,0.2995,0.9471,0.3261,0.1068,0.2923,0.9503,0.3249,0.0933,0.2905,0.9523,0.3235,0.0751,0.293,0.9532,0.3217,0.0538,0.3001,0.9524,0.3198,0.031,0.3124,0.9494,0.3182,0.0064,0.33,0.944,0.3166,-0.0206,0.3525,0.9356,0.3152,-0.0484,0.3795,0.9239,0.3147,-0.0751,0.41,0.909,0.3158,-0.1014,0.4462,0.8892,0.3189,-0.1271,0.486,0.8647,0.3241,-0.149,0.5235,0.8389,0.3305,-0.1648,0.5543,0.8158,0.3366,-0.1732,0.5779,0.7975,0.3422,-0.1764,0.5975,0.7822,0.3476,-0.1777,0.6152,0.7681,0.352,-0.18,0.6331,0.7529,0.3547,-0.1839,0.6527,0.7349,0.3553,-0.1878,0.6731,0.7153,0.3543,-0.1915,0.6922,0.6959,0.3524,-0.1952,0.7078,0.679,0.3504,-0.1992,0.7197,0.665,0.3478,-0.2038,0.7294,0.653,0.3442,-0.2079,0.7368,0.6434,0.3407,-0.2105,0.7418,0.6367,0.3383,-0.2113,0.745,0.6328,0.3371,-0.2107,0.746,0.6317,0.3366,-0.2093,0.7443,0.6342,0.3368,-0.2073,0.7389,0.6411,0.3375,-0.204,0.7279,0.6547,0.3391,-0.1994,0.7121,0.6732,0.3418,-0.1949,0.6952,0.6919,0.3448,-0.1919,0.6811,0.7066,0.3476,-0.1916,0.6706,0.7167,0.35,-0.1928,0.6619,0.7243,0.3525,-0.1943,0.6544,0.7308,0.3541,-0.1948,0.6473,0.7369,0.3544,-0.194,0.6405,0.743,0.3529,-0.1927,0.6343,0.7486,0.3499,-0.1908,0.6285,0.7541,0.3462,-0.1882,0.6226,0.7596,0.3424,-0.1847,0.616,0.7658,0.3382,-0.1802,0.6091,0.7724,0.3336,-0.1754,0.603,0.7782,0.329,-0.1705,0.5994,0.7821,0.3249,-0.1649,0.5997,0.783,0.3214,-0.1588,0.6031,0.7817,0.3182,-0.1535,0.6071,0.7796,0.3153,-0.1508,0.6096,0.7782,0.3126,-0.151,0.6105,0.7775,0.3102,-0.1534,0.6109,0.7767,0.308,-0.1577,0.6098,0.7767,0.306,-0.1635,0.6063,0.7783,0.3045,-0.1717,0.5988,0.7823,0.3037,-0.182,0.5883,0.7879,0.3037,-0.1926,0.5772,0.7935,0.3035,-0.2016,0.568,0.7979,0.3024,-0.2082,0.5621,0.8004,0.2997,-0.2137,0.5579,0.8019,0.2958,-0.2193,0.5535,0.8034,0.292,-0.2263,0.547,0.8059,0.2893,-0.2352,0.5372,0.81,0.2882,-0.245,0.5253,0.8149,0.2881,-0.2551,0.5131,0.8196,0.2884,-0.2645,0.5025,0.8231,0.2888,-0.2733,0.4938,0.8255,0.2891,-0.2817,0.486,0.8273,0.2894,-0.2898,0.4795,0.8283,0.2899,-0.2978,0.4743,0.8285,0.2906,-0.3063,0.4703,0.8276,0.2916,-0.315,0.4676,0.8259,0.2931,-0.3225,0.4664,0.8237,0.2942,-0.3271,0.4676,0.8212,0.2945,-0.3273,0.4715,0.8189,0.2934,-0.3242,0.4779,0.8164,0.2914,-0.3207,0.4857,0.8131,0.2892,-0.3196,0.4939,0.8086,0.2877,-0.3227,0.5035,0.8014,0.2871,-0.3282,0.5146,0.7922,0.2871,-0.333,0.5244,0.7836,0.2873,-0.3345,0.5307,0.7787,0.2876,-0.3309,0.5317,0.7796,0.2879,-0.324,0.529,0.7843,0.2881,-0.3165,0.5256,0.7897,0.2887,-0.3109,0.5241,0.7928,0.2898,-0.3082,0.526,0.7927,0.2914,-0.307,0.5294,0.7909,0.2936,-0.3061,0.5328,0.7889,0.296,-0.3047,0.5349,0.7881,0.2983,-0.3026,0.5352,0.7887,0.3006,-0.3002,0.5346,0.79,0.303,-0.2977,0.5334,0.7917,0.3051,-0.2947,0.5322,0.7937,0.3065,-0.2907,0.5305,0.7962,0.3069,-0.2859,0.5284,0.7994,0.3065,-0.2816,0.5265,0.8022,0.3058,-0.279,0.5256,0.8036,0.3054,-0.2796,0.5264,0.8029,0.3052,-0.2823,0.5283,0.8008,0.3052,-0.2849,0.5304,0.7984,0.305,-0.2853,0.5318,0.7974,0.3047,-0.2825,0.5319,0.7983,0.3039,-0.2778,0.5312,0.8004,0.3029,-0.2724,0.5308,0.8025,0.3019,-0.2673,0.5319,0.8035,0.3014,-0.2633,0.5356,0.8024,0.3018,-0.2595,0.5411,0.8,0.3027,-0.2553,0.546,0.7979,0.3036,-0.2502,0.5483,0.798,0.3038,-0.2431,0.5467,0.8013,0.3031,-0.2346,0.5425,0.8066,0.3018,-0.2262,0.5373,0.8125,0.3004,-0.2196,0.5327,0.8173,0.2996,-0.2154,0.5288,0.8209,0.2997,-0.2127,0.5249,0.8242,0.3004,-0.211,0.5216,0.8267,0.3009,-0.2097,0.5196,0.8283,0.3006,-0.2086,0.5192,0.8288,0.2989,-0.2081,0.52,0.8284,0.2963,-0.2084,0.5217,0.8273,0.2938,-0.2098,0.5238,0.8256,0.2926,-0.2133,0.5275,0.8224,0.2933,-0.2182,0.5324,0.8179,0.2954,-0.223,0.5362,0.8141,0.2976,-0.2262,0.5366,0.8129,0.2989,-0.2267,0.5322,0.8157,0.2989,-0.2257,0.5243,0.8211,0.2982,-0.2246,0.5154,0.827,0.2971,-0.2249,0.5083,0.8313,0.296,-0.228,0.5041,0.833,0.295,-0.2326,0.5013,0.8334,0.294,-0.2372,0.4984,0.8339,0.2926,-0.2399,0.4939,0.8357,0.2904,-0.2397,0.4873,0.8397,0.287,-0.2377,0.4791,0.8449,0.2827,-0.2354,0.4699,0.8508,0.2782,-0.2347,0.46,0.8564,0.2744,-0.236,0.4489,0.8619,0.2712,-0.2384,0.4365,0.8675,0.2685,-0.2419,0.4243,0.8726,0.266,-0.2465,0.4139,0.8763,0.2637,-0.2534,0.4066,0.8778,0.2618,-0.2623,0.4013,0.8776,0.2603,-0.2707,0.3962,0.8773,0.2586,-0.2764,0.3892,0.8787,0.2561,-0.2776,0.3791,0.8827,0.2525,-0.276,0.3668,0.8884,0.2482,-0.2736,0.3538,0.8944,0.2438,-0.273,0.3416,0.8993,0.2399,-0.2751,0.331,0.9026,0.2364,-0.2788,0.3211,0.9051,0.2332,-0.2828,0.3114,0.9072,0.2302,-0.286,0.3012,0.9097,0.2277,-0.2878,0.2895,0.9129,0.2258,-0.2889,0.2771,0.9164,0.2244,-0.2896,0.2655,0.9196,0.2231,-0.2903,0.2562,0.922,0.2215,-0.2906,0.2504,0.9235,0.2192,-0.2904,0.247,0.9245,0.2166,-0.2908,0.2445,0.925,0.2142,-0.2929,0.2413,0.9252,0.2128,-0.2968,0.2365,0.9252,0.2129,-0.3019,0.2312,0.9249,0.2142,-0.3081,0.2267,0.9239,0.2155,-0.3154,0.2247,0.922,0.2159,-0.3254,0.2259,0.9182,0.2148,-0.3375,0.2294,0.9129,0.213,-0.3491,0.2339,0.9074,0.2111,-0.357,0.2377,0.9034,0.2099,-0.3591,0.2401,0.9019,0.2097,-0.3574,0.2421,0.902,0.2101,-0.3551,0.2444,0.9023,0.2104,-0.3554,0.2479,0.9013,0.21,-0.3593,0.2529,0.8983,0.2083,-0.3652,0.2591,0.8941,0.2057,-0.3721,0.2661,0.8892,0.2034,-0.3789,0.2733,0.8842,0.2028,-0.3865,0.2816,0.8782,0.2042,-0.3948,0.2907,0.8716,0.2071,-0.4012,0.298,0.8662,0.2108,-0.4032,0.3013,0.8641,0.2145,-0.3987,0.299,0.867,0.2182,-0.3899,0.293,0.873,0.2224,-0.3807,0.2861,0.8793,0.2266,-0.3748,0.2813,0.8834,0.2304,-0.3745,0.2788,0.8843,0.2343,-0.3772,0.2772,0.8837,0.2383,-0.3791,0.2763,0.8832,0.2412,-0.3767,0.2756,0.8844,0.2418,-0.3673,0.2755,0.8883,0.2388,-0.3531,0.2758,0.894,0.2334,-0.3382,0.276,0.8997,0.228]);
Group704ZZZ.children[40] = OrientationInterpolator745;

let OrientationInterpolator746 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator746.DEF = "Interpolator38_rShin";
OrientationInterpolator746.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator746.keyValue = new X3D.MFRotation([-0.9905,-0.1363,-0.015,0.0073,1,0.0056,-0.0018,0.1601,1,0.0086,-0.0024,0.3381,1,0.0092,-0.0032,0.4948,1,0.0091,-0.0039,0.5984,1,0.0081,-0.0044,0.626,1,0.0065,-0.0048,0.5996,1,0.005,-0.0052,0.5538,1,0.0048,-0.0053,0.5232,1,0.0069,-0.0044,0.514,0.9999,0.0106,-0.003,0.5089,0.9999,0.0144,-0.0014,0.5068,0.9999,0.0169,-0.0004,0.507,0.9999,0.0173,-0.0003,0.5103,0.9999,0.0165,-0.0006,0.5167,0.9999,0.0153,-0.001,0.5243,0.9999,0.0147,-0.0013,0.5314,0.9999,0.0151,-0.0012,0.5383,0.9999,0.0158,-0.0009,0.5457,0.9999,0.0164,-0.0007,0.5522,0.9999,0.0163,-0.0008,0.5563,0.9999,0.0151,-0.0013,0.557,0.9999,0.0133,-0.002,0.5552,0.9999,0.0112,-0.0029,0.5527,1,0.0089,-0.0039,0.5513,1,0.0057,-0.0052,0.5516,1,0.0017,-0.0069,0.5525,1,-0.0013,-0.0081,0.5536,1,-0.0013,-0.0081,0.5544,1,0.0032,-0.0062,0.5561,0.9999,0.011,-0.003,0.5584,0.9998,0.0191,0.0003,0.559,0.9997,0.0246,0.0026,0.5553,0.9996,0.0267,0.0034,0.5454,0.9996,0.0269,0.0034,0.531,0.9997,0.0262,0.003,0.5153,0.9997,0.0254,0.0026,0.5015,0.9997,0.0246,0.0022,0.4896,0.9997,0.0232,0.0017,0.4783,0.9998,0.0217,0.001,0.4684,0.9998,0.0204,0.0005,0.4607,0.9998,0.0195,0.0001,0.4563,0.9998,0.0187,-0.0003,0.4544,0.9998,0.0181,-0.0005,0.4534,0.9998,0.0175,-0.0008,0.4518,0.9999,0.017,-0.001,0.4489,0.9999,0.0166,-0.0012,0.4457,0.9999,0.0162,-0.0014,0.4428,0.9999,0.0158,-0.0016,0.441,0.9999,0.015,-0.0019,0.4406,0.9999,0.0141,-0.0023,0.441,0.9999,0.0133,-0.0026,0.4422,0.9999,0.0132,-0.0027,0.4437,0.9999,0.0139,-0.0024,0.4462,0.9999,0.0153,-0.0019,0.4496,0.9999,0.0168,-0.0014,0.4528,0.9998,0.0182,-0.0009,0.4547,0.9998,0.0195,-0.0004,0.4547,0.9998,0.0207,0.0001,0.4535,0.9998,0.0219,0.0006,0.452,0.9997,0.0231,0.0011,0.4511,0.9997,0.0241,0.0015,0.4513,0.9997,0.0251,0.0019,0.452,0.9997,0.0259,0.0023,0.4527,0.9996,0.0268,0.0026,0.4526,0.9996,0.0275,0.0029,0.4511,0.9996,0.0281,0.0031,0.4488,0.9996,0.0287,0.0033,0.4467,0.9996,0.0294,0.0036,0.4458,0.9995,0.0304,0.0039,0.447,0.9995,0.0314,0.0043,0.4496,0.9995,0.0324,0.0047,0.4522,0.9994,0.0335,0.0051,0.4535,0.9994,0.0345,0.0055,0.4532,0.9993,0.0356,0.0058,0.4519,0.9993,0.0366,0.0062,0.45,0.9993,0.0373,0.0065,0.4476,0.9993,0.0379,0.0067,0.4444,0.9992,0.0383,0.0068,0.4404,0.9992,0.0385,0.0069,0.4365,0.9992,0.0384,0.0068,0.4333,0.9993,0.0377,0.0067,0.4315,0.9993,0.0366,0.0063,0.4307,0.9994,0.0355,0.006,0.4296,0.9994,0.0348,0.0058,0.4273,0.9994,0.0347,0.0058,0.4233,0.9994,0.0351,0.006,0.4183,0.9993,0.0355,0.0061,0.4127,0.9993,0.0358,0.0063,0.407,0.9993,0.0357,0.0063,0.4011,0.9994,0.0354,0.0063,0.3949,0.9994,0.0351,0.0062,0.3888,0.9994,0.0348,0.0062,0.3834,0.9994,0.0346,0.0062,0.3786,0.9994,0.0345,0.0062,0.3743,0.9994,0.0342,0.0061,0.3707,0.9994,0.0336,0.006,0.368,0.9995,0.0325,0.0057,0.3664,0.9995,0.0311,0.0053,0.3657,0.9996,0.0295,0.0048,0.3658,0.9996,0.0278,0.0043,0.3664,0.9997,0.0259,0.0037,0.3677,0.9997,0.0239,0.0031,0.3696,0.9998,0.0219,0.0024,0.3719,0.9998,0.0201,0.0018,0.3744,0.9998,0.0184,0.0013,0.377,0.9999,0.0169,0.0007,0.3799,0.9999,0.0155,0.0002,0.3829,0.9999,0.0142,-0.0002,0.3859,0.9999,0.0129,-0.0007,0.3885,0.9999,0.0118,-0.0012,0.3908,0.9999,0.0108,-0.0016,0.3937,0.9999,0.01,-0.0019,0.3982,1,0.0095,-0.0022,0.4042,1,0.0092,-0.0024,0.4112,1,0.0091,-0.0026,0.4199,1,0.0092,-0.0027,0.4308,1,0.0096,-0.0026,0.4439,0.9999,0.0102,-0.0025,0.4589,0.9999,0.0109,-0.0024,0.4762,0.9999,0.0116,-0.0022,0.4959,0.9999,0.0124,-0.0019,0.5185,0.9999,0.0133,-0.0016,0.5437,0.9999,0.0141,-0.0013,0.5707,0.9999,0.0147,-0.0011,0.5986,0.9999,0.0152,-0.001,0.6277,0.9999,0.0156,-0.0008,0.6585,0.9999,0.0159,-0.0007,0.6897,0.9999,0.0161,-0.0006,0.7204,0.9999,0.0164,-0.0005,0.7501,0.9999,0.0166,-0.0005,0.7796,0.9999,0.0168,-0.0004,0.8089,0.9999,0.0169,-0.0003,0.8382,0.9999,0.017,-0.0003,0.8675,0.9999,0.0171,-0.0002,0.8968,0.9999,0.0171,-0.0002,0.9262,0.9999,0.0171,-0.0002,0.9555,0.9999,0.0171,-0.0002,0.9859,0.9999,0.0171,-0.0003,1.0169,0.9999,0.0171,-0.0003,1.0467,0.9999,0.0171,-0.0003,1.0731,0.9999,0.0172,-0.0002,1.0966,0.9999,0.0173,-0.0001,1.1179,0.9998,0.0174,0,1.1356,0.9998,0.0175,0,1.1483,0.9998,0.0176,0.0001,1.1559,0.9998,0.0177,0.0001,1.159,0.9998,0.0177,0.0002,1.1576,0.9998,0.0177,0.0002,1.1515,0.9998,0.0176,0.0001,1.1411,0.9998,0.0175,0,1.1262,0.9998,0.0173,-0.0001,1.1064,0.9999,0.0171,-0.0003,1.0811,0.9999,0.0168,-0.0004,1.0493,0.9999,0.0165,-0.0007,1.0114,0.9999,0.016,-0.001,0.9698,0.9999,0.0154,-0.0013,0.9264,0.9999,0.0146,-0.0016,0.8789,0.9999,0.0135,-0.002,0.8271,0.9999,0.0123,-0.0026,0.7768,0.9999,0.0113,-0.003,0.7338,0.9999,0.0105,-0.0033,0.6961,0.9999,0.0098,-0.0035,0.6619,1,0.0093,-0.0036,0.6369,1,0.0089,-0.0037,0.627,1,0.0088,-0.0038,0.6363,1,0.0091,-0.0039,0.6608,0.9999,0.0094,-0.004,0.6943,0.9999,0.0096,-0.0042,0.7304,0.9999,0.0097,-0.0043,0.768,0.9999,0.0098,-0.0045,0.8103,0.9999,0.0098,-0.0047,0.8573,0.9999,0.0098,-0.005,0.9087,0.9999,0.0097,-0.0054,0.9663,0.9999,0.0096,-0.0058,1.0294,0.9999,0.0094,-0.0063,1.095,0.9999,0.0091,-0.007,1.1597,0.9999,0.0087,-0.008,1.2235,0.9999,0.0081,-0.0091,1.2878,0.9999,0.0076,-0.0101,1.3517,0.9999,0.0075,-0.0108,1.4142,0.9999,0.0077,-0.011,1.4762,0.9999,0.0083,-0.0111,1.5378,0.9999,0.0089,-0.011,1.5968,0.9999,0.0095,-0.011,1.6505,0.9999,0.01,-0.0108,1.6987,0.9999,0.0105,-0.0105,1.7424,0.9999,0.011,-0.0102,1.7819,0.9999,0.0115,-0.0099,1.8171,0.9999,0.0121,-0.0092,1.8477,0.9999,0.0127,-0.0084,1.8737,0.9999,0.0132,-0.0078,1.896,0.9999,0.0133,-0.008,1.9151,0.9999,0.0126,-0.0094,1.9309,0.9999,0.0115,-0.0117,1.9431,0.9998,0.0104,-0.014,1.9523,0.9998,0.0097,-0.0153,1.9591,0.9998,0.0096,-0.0155,1.9631,0.9998,0.0099,-0.0149,1.9641,0.9998,0.0104,-0.014,1.9631,0.9999,0.0108,-0.0132,1.9609,0.9999,0.011,-0.0127,1.9569,0.9999,0.0112,-0.0122,1.9509,0.9999,0.0114,-0.0117,1.9444,0.9999,0.0116,-0.0113,1.9388,0.9999,0.0116,-0.0113,1.9342,0.9999,0.0114,-0.0115,1.93,0.9999,0.0113,-0.0116,1.9263,0.9999,0.0116,-0.0111,1.9233,0.9999,0.0124,-0.0095,1.9208,0.9999,0.0137,-0.0071,1.9188,0.9999,0.0148,-0.0051,1.9179,0.9999,0.0152,-0.0043,1.9188,0.9999,0.0145,-0.0057,1.9222,0.9999,0.0131,-0.0084,1.9277,0.9999,0.0115,-0.0114,1.9338,0.9999,0.0104,-0.0136,1.9389,0.9998,0.0097,-0.0149,1.9435,0.9998,0.0093,-0.0158,1.9483,0.9998,0.0091,-0.0162,1.9516,0.9998,0.0092,-0.0161,1.9518,0.9998,0.0097,-0.0152,1.948,0.9999,0.0105,-0.0135,1.9412,0.9999,0.0114,-0.0117,1.9329,0.9999,0.012,-0.0104,1.9247,0.9999,0.0125,-0.0095,1.9177,0.9999,0.0128,-0.0089,1.9109,0.9999,0.0129,-0.0085,1.9023,0.9999,0.0129,-0.0084,1.8897,0.9999,0.0124,-0.0089,1.8711,0.9999,0.0117,-0.0097,1.8483,0.9999,0.011,-0.0107,1.8243,0.9999,0.0106,-0.0112,1.8025,0.9999,0.0104,-0.0113,1.784,0.9999,0.0105,-0.011,1.7668,0.9999,0.0106,-0.0105,1.7501,0.9999,0.0107,-0.0101,1.7327,0.9999,0.0109,-0.0097,1.714,0.9999,0.0112,-0.0091,1.6949,0.9999,0.0114,-0.0086,1.6759,0.9999,0.0113,-0.0086,1.6577,0.9999,0.0106,-0.0092,1.6422,0.9999,0.0096,-0.0104,1.6286,0.9999,0.0086,-0.0116,1.6131,0.9999,0.008,-0.0121,1.5922,0.9999,0.0082,-0.0118,1.5643,0.9999,0.0087,-0.0107,1.5315,0.9999,0.0094,-0.0095,1.4958,0.9999,0.01,-0.0084,1.4594,0.9999,0.0105,-0.0076,1.4221,0.9999,0.011,-0.0068,1.3832,0.9999,0.0115,-0.006,1.3433,0.9999,0.0119,-0.0054,1.303,0.9999,0.0122,-0.0049,1.2627,0.9999,0.0124,-0.0045,1.2221,0.9999,0.0126,-0.0042,1.1804,0.9999,0.0128,-0.0039,1.1369,0.9999,0.0128,-0.0036,1.0918,0.9999,0.0127,-0.0035,1.0454,0.9999,0.0127,-0.0034,0.997,0.9999,0.0128,-0.0032,0.9464,0.9999,0.0132,-0.0029,0.8926,0.9999,0.0138,-0.0025,0.8361,0.9999,0.0145,-0.002,0.7785,0.9999,0.0152,-0.0015,0.7213,0.9999,0.016,-0.0011,0.66,0.9999,0.0168,-0.0008,0.5956,0.9998,0.0178,-0.0006,0.5371,0.9998,0.0187,-0.0004,0.494,0.9998,0.0199,-0.0001,0.4724,0.9998,0.021,0.0003,0.4661,0.9998,0.0215,0.0004,0.4659,0.9998,0.0205,0.0001,0.4623,0.9999,0.0165,-0.0013,0.453,0.9999,0.0101,-0.0035,0.4429,1,0.0042,-0.0055,0.4337,1,0.002,-0.0063,0.4273,1,0.0059,-0.005,0.4234,0.9999,0.0141,-0.0021,0.4214,0.9997,0.0224,0.001,0.422,0.9996,0.0269,0.0026,0.4258,0.9997,0.0258,0.0023,0.4347,0.9998,0.0215,0.001,0.4477,0.9999,0.0168,-0.0004,0.4613,0.9999,0.0139,-0.0013,0.472,0.9999,0.0132,-0.0014,0.4796,0.9999,0.0134,-0.0013,0.4857,0.9999,0.0141,-0.0011,0.4894,0.9999,0.015,-0.0008,0.4899,0.9999,0.016,-0.0005,0.4869,0.9998,0.0175,0,0.4809,0.9998,0.0191,0.0004,0.4722,0.9998,0.0208,0.0008,0.4611,0.9997,0.0226,0.0013,0.4468,0.9997,0.0247,0.0018,0.4295,0.9996,0.0267,0.0022,0.4109,0.9996,0.0279,0.0025,0.3929,0.9996,0.0282,0.0027,0.3739,0.9996,0.0277,0.0027,0.3534,0.9997,0.0262,0.0024,0.3358,0.9997,0.0234,0.0015,0.3251,0.9998,0.0184,0,0.3239,0.9999,0.0118,-0.002,0.3294,1,0.0057,-0.0038,0.3382,1,0.002,-0.0049,0.347,1,0.0014,-0.0051,0.3558,1,0.0028,-0.0048,0.3662,1,0.0045,-0.0044,0.3767,1,0.0051,-0.0043,0.3858,1,0.0038,-0.0048,0.3925,1,0.0018,-0.0055,0.3979,1,-0.0001,-0.0062,0.4034,1,-0.0006,-0.0064,0.4103,1,0.0006,-0.006,0.4211,1,0.0028,-0.0052,0.4343,1,0.0053,-0.0045,0.4455,1,0.0075,-0.0037,0.4503,1,0.0094,-0.0031,0.4451,0.9999,0.0115,-0.0023,0.4332,0.9999,0.0137,-0.0014,0.4198,0.9999,0.0158,-0.0006,0.4106,0.9998,0.0177,0.0002,0.4066,0.9998,0.0195,0.0008,0.4051,0.9998,0.0213,0.0015,0.4054,0.9997,0.0234,0.0022,0.4068,0.9997,0.0258,0.0031,0.4101,0.9996,0.0285,0.004,0.4154,0.9995,0.031,0.0049,0.4206,0.9994,0.0333,0.0056,0.4235,0.9994,0.0352,0.0063,0.4235,0.9993,0.0371,0.0069,0.4217,0.9992,0.0388,0.0074,0.4187,0.9992,0.0403,0.0079,0.4151,0.9991,0.0417,0.0083,0.4111,0.999,0.0429,0.0086,0.4064,0.999,0.044,0.0089,0.4006,0.9989,0.0452,0.0092,0.3935,0.9989,0.0463,0.0095,0.3848,0.9988,0.0473,0.0097,0.3749,0.9988,0.0485,0.01,0.3637,0.9987,0.0504,0.0104,0.3516,0.9985,0.0533,0.011,0.3381,0.9983,0.057,0.0119,0.3232,0.998,0.0613,0.0129,0.3079,0.9978,0.0653,0.0138,0.2934,0.9975,0.0692,0.0145,0.2789,0.9972,0.0731,0.0151,0.2643,0.9969,0.0769,0.0155,0.251,0.9967,0.0799,0.0159,0.2404,0.9966,0.0814,0.016,0.2338,0.9965,0.0817,0.0159,0.23,0.9966,0.0814,0.0157,0.2273,0.9966,0.0813,0.0156,0.2237,0.9966,0.0812,0.0153,0.2206,0.9966,0.0806,0.015,0.2184,0.9966,0.0808,0.0148,0.2137,0.9964,0.0829,0.015,0.2035,0.9959,0.0891,0.0158,0.183,0.9948,0.1006,0.0174,0.1553,0.9929,0.1171,0.0196,0.1284,0.9909,0.1332,0.0217,0.1104,0.9899,0.1402,0.0226,0.1047,0.9899,0.1396,0.0226,0.1067,0.9904,0.1363,0.0223,0.1118,0.9905,0.1355,0.0224,0.1153,0.9902,0.1375,0.0228,0.1166,0.9899,0.1401,0.0233,0.1181,0.9894,0.1431,0.0239,0.1194,0.9889,0.1467,0.0246,0.1206,0.9882,0.1507,0.0254,0.1217,0.9875,0.1553,0.0263,0.1227,0.9867,0.1602,0.0272,0.1235,0.9858,0.1656,0.0281,0.1236,0.9847,0.1716,0.0291,0.1229,0.9835,0.1783,0.0302,0.1216,0.9822,0.1854,0.0313,0.1199,0.9807,0.1926,0.0324,0.1183,0.9792,0.1999,0.0335,0.1166,0.9776,0.2076,0.0346,0.1147,0.9759,0.2153,0.0357,0.1129,0.9743,0.2224,0.0367,0.1113,0.9727,0.229,0.0377,0.1099,0.9712,0.2352,0.0386,0.1086,0.9698,0.2406,0.0393,0.1075,0.9688,0.2447,0.0399,0.1067,0.968,0.2476,0.0403,0.1062,0.9676,0.2493,0.0406,0.106,0.9675,0.2494,0.0406,0.106,0.968,0.2476,0.0404,0.1065,0.9692,0.2429,0.0397,0.1076,0.971,0.2358,0.0387,0.1093,0.9728,0.2284,0.0377,0.111,0.9742,0.2227,0.0369,0.1123,0.9751,0.2188,0.0363,0.1132,0.9758,0.2157,0.0359,0.1137,0.9764,0.2132,0.0355,0.1141,0.9769,0.2109,0.0351,0.1143,0.9774,0.2087,0.0347,0.1144,0.9778,0.2066,0.0344,0.1143,0.9782,0.205,0.0341,0.114,0.9784,0.2039,0.0339,0.1136,0.9784,0.2038,0.0338,0.1128,0.9783,0.2044,0.0338,0.1118,0.9782,0.2051,0.0338,0.1108,0.9781,0.2054,0.0338,0.1101,0.9782,0.2051,0.0337,0.1096,0.9783,0.2046,0.0336,0.1093,0.9785,0.2038,0.0334,0.1091,0.9787,0.2028,0.0332,0.1091,0.9789,0.2015,0.033,0.1092,0.9793,0.1999,0.0328,0.1096,0.9796,0.1983,0.0326,0.1099,0.9799,0.197,0.0324,0.1103,0.9801,0.1959,0.0322,0.1106,0.9803,0.1948,0.0321,0.1109,0.9805,0.1941,0.032,0.1112,0.9804,0.1942,0.032,0.1112,0.9802,0.1955,0.0322,0.1109,0.9798,0.1975,0.0325,0.1104,0.9793,0.1999,0.0328,0.1097,0.9788,0.2021,0.0331,0.1091,0.9784,0.204,0.0334,0.1086,0.978,0.206,0.0337,0.108,0.9776,0.2078,0.0339,0.1074,0.9773,0.2092,0.0341,0.1069,0.9771,0.2101,0.0342,0.1065,0.9769,0.2108,0.0343,0.1062,0.9769,0.2111,0.0343,0.1059,0.9769,0.2111,0.0343,0.1058,0.977,0.2105,0.0342,0.1059,0.9772,0.2094,0.0341,0.1061,0.9775,0.2082,0.0339,0.1064,0.9777,0.2071,0.0337,0.1066,0.978,0.2059,0.0335,0.1068,0.9783,0.2046,0.0333,0.107,0.9785,0.2037,0.0332,0.1071,0.9785,0.2035,0.0332,0.107,0.9783,0.2044,0.0333,0.1065,0.9779,0.2063,0.0335,0.1057,0.9775,0.2083,0.0338,0.105,0.9771,0.21,0.034,0.1043,0.9769,0.2109,0.0341,0.1039,0.9768,0.2115,0.0342,0.1036,0.9767,0.212,0.0342,0.1034,0.9765,0.2127,0.0343,0.1032,0.9763,0.2135,0.0344,0.1029,0.9762,0.2143,0.0345,0.1027,0.976,0.2152,0.0346,0.1025,0.9757,0.2163,0.0348,0.1022,0.9753,0.218,0.035,0.1018,0.9749,0.2199,0.0353,0.1012,0.9744,0.2218,0.0355,0.1007,0.9741,0.2231,0.0357,0.1003,0.9741,0.2235,0.0357,0.1001,0.9741,0.2232,0.0357,0.1,0.9742,0.2228,0.0356,0.0999,0.9742,0.2229,0.0356,0.0996,0.974,0.2238,0.0357,0.0991,0.9737,0.225,0.0358,0.0985,0.9734,0.2263,0.036,0.0979,0.9732,0.2272,0.036,0.0973,0.9731,0.2276,0.0361,0.0969,0.9731,0.2276,0.036,0.0966,0.9731,0.2275,0.036,0.0963,0.9731,0.2276,0.036,0.096,0.973,0.2279,0.036,0.0957,0.9729,0.2283,0.036,0.0954,0.9728,0.2288,0.0361,0.0951,0.9727,0.2291,0.0361,0.0948,0.9727,0.2293,0.0361,0.0946,0.9727,0.2292,0.036,0.0944,0.9727,0.2293,0.036,0.0942,0.9726,0.2297,0.0361,0.094,0.9724,0.2307,0.0362,0.0936,0.972,0.232,0.0364,0.0932,0.9717,0.2335,0.0365,0.0928,0.9714,0.2345,0.0367,0.0924,0.9713,0.2352,0.0368,0.0922,0.9712,0.2355,0.0368,0.0921,0.9711,0.2358,0.0368,0.092,0.971,0.236,0.0369,0.0919,0.9709,0.2365,0.0369,0.0918,0.9708,0.2369,0.037,0.0917,0.9707,0.2373,0.037,0.0916,0.9707,0.2373,0.037,0.0916,0.9708,0.2369,0.037,0.0917,0.971,0.2363,0.0369,0.0919,0.9712,0.2355,0.0368,0.0921,0.9713,0.2349,0.0367,0.0922,0.9714,0.2344,0.0367,0.0924,0.9715,0.2341,0.0366,0.0925,0.9716,0.2338,0.0366,0.0926,0.9717,0.2335,0.0365,0.0927,0.9718,0.2331,0.0365,0.0929,0.9719,0.2327,0.0364,0.093,0.972,0.2323,0.0364,0.0931,0.9721,0.2318,0.0363,0.0932,0.9722,0.2311,0.0362,0.0934,0.9724,0.2303,0.0361,0.0936,0.9726,0.2297,0.0361,0.0937,0.9726,0.2295,0.036,0.0938,0.9725,0.2301,0.0361,0.0938,0.9722,0.2311,0.0363,0.0936,0.972,0.2322,0.0364,0.0935,0.9718,0.2328,0.0365,0.0934,0.9719,0.2327,0.0365,0.0936,0.972,0.2321,0.0364,0.0938,0.9722,0.2314,0.0364,0.0941,0.9723,0.2308,0.0363,0.0943,0.9724,0.2305,0.0363,0.0945,0.9725,0.2301,0.0362,0.0947,0.9725,0.2299,0.0362,0.0949,0.9726,0.2298,0.0362,0.0951,0.9725,0.2299,0.0362,0.0951,0.9725,0.2301,0.0363,0.0952,0.9724,0.2304,0.0363,0.0951,0.9723,0.2307,0.0364,0.0951,0.9723,0.231,0.0364,0.095,0.9722,0.2313,0.0364,0.095,0.9721,0.2316,0.0365,0.0949,0.9721,0.2317,0.0365,0.0949,0.9721,0.2317,0.0365,0.095,0.9721,0.2315,0.0365,0.0951,0.9722,0.2313,0.0365,0.0953,0.9723,0.2308,0.0364,0.0954,0.9725,0.23,0.0363,0.0957,0.9728,0.2288,0.0362,0.096,0.973,0.2278,0.036,0.0963,0.9732,0.2272,0.0359,0.0964,0.9732,0.2272,0.036,0.0965,0.9731,0.2276,0.036,0.0965,0.9729,0.2283,0.0361,0.0964,0.9727,0.2291,0.0362,0.0962,0.9725,0.2302,0.0364,0.096,0.9721,0.2316,0.0366,0.0956,0.9718,0.2331,0.0368,0.0953,0.9714,0.2347,0.037,0.0949,0.9709,0.2365,0.0372,0.0944,0.9704,0.2384,0.0375,0.0939,0.97,0.2403,0.0377,0.0934,0.9695,0.2419,0.0379,0.093,0.9692,0.2432,0.0381,0.0927,0.969,0.2442,0.0382,0.0924,0.9687,0.2451,0.0383,0.0922,0.9685,0.2461,0.0384,0.0919,0.9681,0.2474,0.0386,0.0915,0.9678,0.2488,0.0388,0.0911,0.9674,0.2501,0.0389,0.0907,0.9671,0.2514,0.0391,0.0903,0.9668,0.2526,0.0392,0.09,0.9665,0.2537,0.0393,0.0896,0.9662,0.2547,0.0395,0.0893,0.966,0.2555,0.0396,0.0891,0.9659,0.2559,0.0396,0.0889,0.9658,0.2561,0.0396,0.0889,0.9658,0.2563,0.0397,0.0888,0.9656,0.2568,0.0397,0.0887,0.9653,0.2579,0.0399,0.0885,0.9649,0.2594,0.0401,0.0882,0.9646,0.2607,0.0402,0.0879,0.9643,0.2616,0.0403,0.0877,0.9644,0.2615,0.0403,0.0878,0.9645,0.2608,0.0402,0.0879,0.9648,0.2601,0.0402,0.0881,0.9649,0.2597,0.0401,0.0882,0.9648,0.2599,0.0401,0.0882,0.9647,0.2603,0.0402,0.0881,0.9645,0.2608,0.0403,0.088,0.9644,0.2613,0.0403,0.088,0.9643,0.2618,0.0404,0.088,0.9641,0.2623,0.0405,0.088,0.964,0.2628,0.0406,0.0881,0.9639,0.2632,0.0406,0.0881,0.9637,0.2638,0.0407,0.0881,0.9636,0.2643,0.0408,0.0881,0.9635,0.2647,0.0409,0.0881,0.9635,0.2647,0.0409,0.0882,0.9636,0.2643,0.0409,0.0885,0.9638,0.2636,0.0408,0.0888,0.9641,0.2626,0.0407,0.0892,0.9645,0.2611,0.0405,0.0898,0.965,0.259,0.0403,0.0904,0.9657,0.2565,0.04,0.0913,0.9664,0.2538,0.0397,0.0921,0.9671,0.2515,0.0394,0.0929,0.9677,0.2491,0.0391,0.0937,0.9684,0.2466,0.0388,0.0945,0.9688,0.2447,0.0386,0.0951,0.969,0.2441,0.0385,0.0955,0.9686,0.2455,0.0387,0.0954,0.9679,0.2483,0.0391,0.095,0.9671,0.2512,0.0396,0.0946]);
Group704ZZZ.children[41] = OrientationInterpolator746;

let OrientationInterpolator747 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator747.DEF = "Interpolator39_rFoot";
OrientationInterpolator747.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator747.keyValue = new X3D.MFRotation([0.989,0.0325,-0.1446,0.0574,0.594,-0.7975,-0.1058,0.1103,0.3659,-0.9278,-0.0735,0.1967,0.2892,-0.9556,-0.0561,0.2802,0.2848,-0.9577,-0.0411,0.3444,0.3696,-0.9291,-0.014,0.3946,0.4872,-0.8731,0.019,0.4408,0.5632,-0.8254,0.0381,0.4651,0.5574,-0.8297,0.0302,0.4385,0.3168,-0.9479,-0.0323,0.3414,-0.3862,-0.9124,-0.1352,0.2875,-0.8621,-0.4898,-0.13,0.3723,-0.9768,-0.2015,-0.0723,0.4381,-0.9933,0.1151,0.0125,0.3898,-0.7619,0.6399,0.1002,0.3345,-0.2325,0.9692,0.0808,0.3834,0.1157,0.9932,0.0127,0.4686,0.3521,0.9349,-0.0456,0.5008,0.5926,0.8004,-0.0908,0.5128,0.7852,0.61,-0.1066,0.5378,0.8906,0.4437,-0.1,0.5791,0.9385,0.3342,-0.0874,0.6167,0.9669,0.245,-0.0708,0.6407,0.9861,0.1584,-0.0502,0.6525,0.9979,0.0595,-0.0242,0.6567,0.9974,-0.0706,0.0112,0.6763,0.9759,-0.212,0.0524,0.7084,0.9339,-0.3467,0.087,0.7149,0.8664,-0.489,0.1005,0.6561,0.6875,-0.723,0.0676,0.5028,0.0851,-0.9943,-0.0639,0.3841,-0.5931,-0.7849,-0.1793,0.4796,-0.8089,-0.5536,-0.198,0.6424,-0.878,-0.4402,-0.1883,0.7297,-0.9182,-0.3598,-0.1657,0.7593,-0.9477,-0.2881,-0.1372,0.765,-0.9697,-0.2186,-0.1086,0.7839,-0.9849,-0.153,-0.0808,0.821,-0.9943,-0.0927,-0.052,0.8569,-0.9988,-0.0414,-0.025,0.8921,-1,-0.0025,-0.0028,0.9258,-0.9996,0.0236,0.0133,0.9557,-0.9988,0.0413,0.025,0.981,-0.9979,0.0543,0.0342,1.0038,-0.9969,0.0655,0.0426,1.0266,-0.996,0.0747,0.05,1.0502,-0.9951,0.081,0.0559,1.073,-0.9944,0.0864,0.0611,1.094,-0.9935,0.0926,0.0668,1.112,-0.992,0.1018,0.0746,1.1277,-0.9901,0.1126,0.0835,1.1414,-0.9885,0.1211,0.0905,1.1514,-0.988,0.1237,0.0928,1.1558,-0.989,0.1186,0.0889,1.154,-0.9909,0.108,0.0806,1.1472,-0.9931,0.0943,0.0697,1.1358,-0.9951,0.0799,0.0582,1.1205,-0.9968,0.0649,0.0463,1.1006,-0.9983,0.0476,0.033,1.0765,-0.9994,0.0278,0.0185,1.0491,-1,0.0053,0.003,1.0197,-0.9996,-0.0222,-0.0148,0.9843,-0.9979,-0.0555,-0.0346,0.9444,-0.9944,-0.0906,-0.0539,0.9084,-0.9901,-0.1216,-0.0697,0.8843,-0.9866,-0.142,-0.0801,0.8763,-0.9842,-0.1545,-0.0869,0.8786,-0.9817,-0.1659,-0.0933,0.8837,-0.9777,-0.1833,-0.1027,0.8847,-0.971,-0.2094,-0.1157,0.8799,-0.9619,-0.2403,-0.1306,0.8737,-0.9505,-0.2741,-0.1464,0.8677,-0.9372,-0.3088,-0.162,0.8636,-0.9212,-0.3458,-0.1782,0.8617,-0.9021,-0.3851,-0.1947,0.8619,-0.8819,-0.4224,-0.2096,0.8636,-0.8633,-0.4537,-0.2212,0.8655,-0.8491,-0.476,-0.2292,0.8683,-0.8381,-0.4923,-0.235,0.8714,-0.827,-0.5085,-0.2397,0.8717,-0.8119,-0.5303,-0.2443,0.8664,-0.7885,-0.5625,-0.2488,0.8525,-0.7581,-0.6016,-0.2518,0.8334,-0.7253,-0.6402,-0.2531,0.8158,-0.6977,-0.6702,-0.2533,0.805,-0.6807,-0.6873,-0.2536,0.803,-0.671,-0.6964,-0.2544,0.8055,-0.6639,-0.703,-0.2549,0.8081,-0.6543,-0.7121,-0.2544,0.8067,-0.6405,-0.7254,-0.2523,0.7999,-0.6248,-0.74,-0.2491,0.7902,-0.6083,-0.7549,-0.2452,0.7792,-0.5922,-0.7688,-0.2413,0.7689,-0.5787,-0.7801,-0.2378,0.7601,-0.5667,-0.7899,-0.2344,0.7518,-0.5523,-0.8012,-0.2303,0.7422,-0.5311,-0.817,-0.2247,0.73,-0.4995,-0.8388,-0.2167,0.7154,-0.4589,-0.8641,-0.2065,0.7,-0.4124,-0.8901,-0.194,0.684,-0.3632,-0.9141,-0.18,0.667,-0.3097,-0.9366,-0.1641,0.6482,-0.2493,-0.9574,-0.1459,0.6286,-0.1855,-0.9744,-0.1267,0.6101,-0.1232,-0.9865,-0.1082,0.5938,-0.0646,-0.9937,-0.0911,0.5798,-0.008,-0.9971,-0.075,0.5669,0.0476,-0.9971,-0.0598,0.5541,0.1032,-0.9936,-0.0454,0.5405,0.1615,-0.9864,-0.0314,0.5255,0.2216,-0.975,-0.0182,0.5095,0.2796,-0.9601,-0.0069,0.4935,0.3309,-0.9437,0.0015,0.4778,0.3754,-0.9268,0.0071,0.4613,0.415,-0.9097,0.0102,0.4433,0.4478,-0.894,0.011,0.4246,0.4712,-0.882,0.0096,0.4055,0.483,-0.8756,0.0056,0.3856,0.4833,-0.8754,-0.0006,0.3642,0.4719,-0.8816,-0.0088,0.3421,0.4481,-0.8938,-0.0186,0.3203,0.4067,-0.9131,-0.0304,0.2989,0.3422,-0.9386,-0.0448,0.2783,0.2557,-0.9648,-0.0609,0.2607,0.1527,-0.9852,-0.0772,0.2478,0.0361,-0.995,-0.093,0.2415,-0.0894,-0.9901,-0.1078,0.2418,-0.2114,-0.9699,-0.1206,0.2468,-0.3231,-0.9373,-0.1309,0.254,-0.4257,-0.8941,-0.1387,0.2622,-0.5179,-0.8432,-0.144,0.2726,-0.5944,-0.7906,-0.147,0.2855,-0.6523,-0.7432,-0.1485,0.3007,-0.693,-0.7052,-0.1497,0.3181,-0.7222,-0.675,-0.151,0.3366,-0.7447,-0.6498,-0.1522,0.3543,-0.7644,-0.6264,-0.1526,0.3694,-0.7834,-0.6027,-0.152,0.3804,-0.8007,-0.5799,-0.1505,0.3884,-0.8154,-0.5594,-0.149,0.396,-0.8263,-0.5434,-0.1482,0.4057,-0.8334,-0.5323,-0.1486,0.4188,-0.8379,-0.5248,-0.1498,0.4336,-0.8401,-0.5208,-0.1516,0.4481,-0.8403,-0.52,-0.1535,0.4601,-0.8377,-0.5234,-0.1558,0.4697,-0.8328,-0.5304,-0.1585,0.4778,-0.8273,-0.5382,-0.161,0.4837,-0.823,-0.5443,-0.1624,0.4865,-0.8201,-0.5485,-0.1629,0.487,-0.8176,-0.5523,-0.1628,0.4853,-0.8157,-0.5554,-0.1617,0.4796,-0.8146,-0.5577,-0.1592,0.4683,-0.8121,-0.5623,-0.156,0.4527,-0.8084,-0.5687,-0.152,0.4331,-0.8087,-0.5699,-0.1458,0.4062,-0.8195,-0.5567,-0.136,0.3689,-0.8544,-0.5056,-0.1196,0.3208,-0.9128,-0.3971,-0.095,0.2664,-0.9737,-0.2186,-0.0637,0.2098,-0.9982,0.051,-0.0319,0.1527,-0.8016,0.5979,-0.004,0.0977,0.1145,0.9934,-0.007,0.11,0.5668,0.8232,-0.0322,0.1826,0.7189,0.6933,-0.0503,0.2474,0.809,0.5848,-0.0588,0.2857,0.8833,0.465,-0.0593,0.3083,0.9406,0.3354,-0.0533,0.3247,0.9765,0.2111,-0.0438,0.3425,0.9954,0.0906,-0.0319,0.3554,0.999,-0.0405,-0.0173,0.3636,0.9862,-0.1658,-0.0014,0.3805,0.966,-0.2583,0.0146,0.4159,0.9517,-0.3055,0.0311,0.474,0.9438,-0.327,0.0477,0.5458,0.9375,-0.342,0.0642,0.6202,0.9281,-0.3634,0.0806,0.6868,0.9107,-0.4009,0.0992,0.746,0.8885,-0.4432,0.1192,0.8033,0.8696,-0.4745,0.1366,0.8549,0.8626,-0.4837,0.148,0.8959,0.8704,-0.4686,0.151,0.9213,0.8867,-0.4383,0.1474,0.9356,0.9057,-0.4001,0.1401,0.9468,0.9227,-0.3619,0.1325,0.9622,0.9378,-0.3239,0.1249,0.9835,0.9521,-0.2831,0.1153,1.0076,0.9643,-0.2433,0.1046,1.0328,0.9736,-0.2079,0.0939,1.057,0.9822,-0.1695,0.0806,1.0801,0.9895,-0.1292,0.0651,1.1033,0.9934,-0.1015,0.0538,1.1244,0.9936,-0.0994,0.0536,1.1399,0.9899,-0.1246,0.0679,1.1578,0.9814,-0.1682,0.0925,1.1779,0.9655,-0.2297,0.1226,1.1857,0.9377,-0.3126,0.152,1.1675,0.878,-0.4445,0.1775,1.115,0.763,-0.6193,0.1852,1.0631,0.6098,-0.7754,0.1639,1.0474,0.4829,-0.8657,0.1319,1.0605,0.4227,-0.8994,0.1113,1.0669,0.4049,-0.9088,0.1005,1.0571,0.4068,-0.9085,0.0956,1.0405,0.4047,-0.9099,0.0911,1.0296,0.4029,-0.9108,0.0904,1.0298,0.4106,-0.9069,0.0949,1.0335,0.4117,-0.9063,0.0959,1.0346,0.3898,-0.917,0.0844,1.0272,0.3142,-0.9483,0.0443,1.0083,0.1957,-0.9805,-0.019,0.9941,0.0895,-0.9931,-0.0764,0.9929,0.0549,-0.9939,-0.0957,0.989,0.127,-0.9902,-0.0582,0.9733,0.2716,-0.9623,0.0157,0.9665,0.4301,-0.898,0.0926,0.9841,0.5507,-0.8221,0.1445,1.0121,0.6317,-0.7558,0.1721,1.033,0.698,-0.6907,0.1889,1.0518,0.7568,-0.6234,0.1965,1.0678,0.8128,-0.5489,0.1954,1.0835,0.8706,-0.4572,0.1815,1.0982,0.9225,-0.3535,0.1547,1.1149,0.9583,-0.2578,0.1231,1.1371,0.9768,-0.1903,0.0979,1.1606,0.984,-0.1569,0.0848,1.1773,0.9862,-0.1451,0.0801,1.1853,0.9859,-0.1467,0.081,1.1879,0.9845,-0.1538,0.0848,1.189,0.9809,-0.1704,0.0935,1.1895,0.9742,-0.1986,0.1076,1.1879,0.966,-0.2281,0.1216,1.1849,0.9598,-0.2484,0.1305,1.1796,0.9573,-0.2568,0.1331,1.1706,0.9568,-0.2588,0.1323,1.1581,0.9579,-0.2565,0.1292,1.1438,0.9596,-0.2521,0.1252,1.1293,0.9642,-0.2381,0.117,1.1148,0.9708,-0.2155,0.1052,1.0999,0.9751,-0.1996,0.0964,1.0845,0.9735,-0.2069,0.0972,1.0676,0.9587,-0.26,0.1153,1.0473,0.9275,-0.3456,0.1425,1.0302,0.8901,-0.4251,0.1647,1.0225,0.8703,-0.4611,0.1731,1.0186,0.8852,-0.4348,0.1655,1.0131,0.9187,-0.367,0.1463,1.0104,0.9509,-0.2852,0.1205,1.0139,0.9707,-0.2197,0.0974,1.0187,0.981,-0.1765,0.0804,1.0186,0.9879,-0.1406,0.0651,1.0158,0.9926,-0.1101,0.0518,1.0133,0.9957,-0.0835,0.0403,1.0141,0.9976,-0.0614,0.031,1.0195,0.9987,-0.0445,0.0239,1.027,0.9993,-0.0318,0.0185,1.0349,0.9996,-0.0222,0.0144,1.0413,0.9998,-0.0174,0.0126,1.0461,0.9998,-0.0171,0.0128,1.0499,0.9998,-0.0175,0.0133,1.0525,0.9998,-0.0148,0.0123,1.0538,0.9999,-0.0075,0.0092,1.0545,1,0.0021,0.0049,1.0547,0.9999,0.0127,0.0001,1.0525,0.9997,0.023,-0.0046,1.0464,0.9994,0.0346,-0.01,1.0368,0.9987,0.0478,-0.0159,1.0245,0.998,0.0594,-0.0209,1.0076,0.9975,0.066,-0.0231,0.9845,0.9972,0.0707,-0.0239,0.9519,0.997,0.0738,-0.0236,0.9115,0.9976,0.0666,-0.0192,0.869,0.9992,0.0382,-0.0079,0.83,0.9996,-0.0244,0.0139,0.8273,0.9933,-0.1073,0.0438,0.8516,0.9776,-0.1972,0.0741,0.8448,0.946,-0.3103,0.094,0.7482,0.8223,-0.5628,0.0841,0.5173,0.0836,-0.995,-0.0544,0.3445,-0.6917,-0.6986,-0.1832,0.5291,-0.8508,-0.4842,-0.2042,0.7582,-0.8975,-0.3954,-0.1951,0.8499,-0.9264,-0.3361,-0.17,0.8486,-0.9493,-0.2821,-0.139,0.8124,-0.9668,-0.2293,-0.1125,0.8014,-0.9779,-0.1866,-0.0946,0.8247,-0.9848,-0.1538,-0.0804,0.8507,-0.9897,-0.1261,-0.0679,0.8784,-0.9935,-0.0994,-0.0553,0.9079,-0.9966,-0.071,-0.0408,0.9388,-0.9987,-0.0436,-0.0261,0.9712,-0.9997,-0.0216,-0.0134,1.0055,-1,-0.0085,-0.0053,1.0418,-1,-0.0079,-0.0047,1.0836,-0.9998,-0.0151,-0.0095,1.1293,-0.9997,-0.0218,-0.0143,1.1712,-0.9997,-0.0213,-0.0139,1.2016,-0.9999,-0.0128,-0.0072,1.2111,-1,0.0001,0.003,1.2065,-0.9997,0.0175,0.0166,1.2041,-0.9987,0.0381,0.0334,1.2204,-0.9963,0.064,0.0571,1.2687,-0.9921,0.0916,0.0861,1.3385,-0.9872,0.1129,0.1127,1.4084,-0.9837,0.1245,0.1295,1.456,-0.9832,0.1257,0.1324,1.4679,-0.9847,0.1205,0.1262,1.4579,-0.9865,0.1133,0.1179,1.4442,-0.9874,0.1094,0.1145,1.4452,-0.9867,0.1108,0.1193,1.4727,-0.9852,0.1142,0.1281,1.5145,-0.9837,0.1172,0.1365,1.553,-0.983,0.1184,0.1402,1.5703,-0.9834,0.1177,0.1377,1.5578,-0.9845,0.1158,0.1314,1.5264,-0.986,0.1128,0.1232,1.487,-0.9874,0.1091,0.115,1.4505,-0.9887,0.1048,0.1071,1.4192,-0.9902,0.0994,0.0985,1.3874,-0.9916,0.0933,0.0895,1.3544,-0.993,0.0867,0.0803,1.3192,-0.9941,0.0809,0.0719,1.2802,-0.9951,0.0752,0.0638,1.2382,-0.9963,0.0668,0.0542,1.1965,-0.9978,0.0523,0.0409,1.1582,-0.9993,0.0286,0.0223,1.1246,-1,-0.0026,-0.0003,1.0948,-0.999,-0.0376,-0.0241,1.0686,-0.9964,-0.0718,-0.0461,1.0449,-0.9923,-0.1046,-0.0661,1.0233,-0.9868,-0.1377,-0.0854,1.0045,-0.98,-0.17,-0.1032,0.9878,-0.9725,-0.2002,-0.119,0.9728,-0.9644,-0.2286,-0.133,0.9587,-0.9559,-0.2551,-0.1454,0.9457,-0.9477,-0.2787,-0.1558,0.9339,-0.9403,-0.2984,-0.1638,0.9236,-0.9359,-0.3098,-0.1676,0.9137,-0.9342,-0.3146,-0.1681,0.9038,-0.932,-0.3205,-0.1693,0.8957,-0.9257,-0.3355,-0.1749,0.891,-0.9126,-0.3636,-0.187,0.8924,-0.8943,-0.3991,-0.2024,0.8995,-0.8736,-0.4353,-0.2176,0.9088,-0.854,-0.4669,-0.2296,0.916,-0.8373,-0.4922,-0.2382,0.9211,-0.8217,-0.5146,-0.245,0.9254,-0.8056,-0.5369,-0.2504,0.9267,-0.787,-0.562,-0.2545,0.9229,-0.7649,-0.5907,-0.2568,0.9126,-0.7396,-0.622,-0.2572,0.8976,-0.7105,-0.6556,-0.2558,0.8812,-0.6777,-0.6904,-0.253,0.8665,-0.6427,-0.7242,-0.2498,0.8576,-0.6051,-0.7573,-0.2455,0.8521,-0.5612,-0.7929,-0.2373,0.844,-0.5051,-0.8341,-0.2215,0.8285,-0.4235,-0.8852,-0.1926,0.8062,-0.3163,-0.9367,-0.15,0.7853,-0.201,-0.9744,-0.1009,0.7694,-0.0996,-0.9934,-0.0568,0.7545,-0.0131,-0.9997,-0.021,0.7298,0.0705,-0.9975,0.0097,0.697,0.1443,-0.989,0.0328,0.6642,0.196,-0.9795,0.0468,0.6381,0.2202,-0.9741,0.0517,0.6157,0.2197,-0.9744,0.0486,0.5916,0.1898,-0.9811,0.0377,0.5695,0.1261,-0.9918,0.0189,0.5545,0.0165,-0.9998,-0.0115,0.5529,-0.1264,-0.9906,-0.0519,0.5697,-0.2656,-0.9595,-0.0934,0.6041,-0.3759,-0.9177,-0.1284,0.6476,-0.4602,-0.8737,-0.1575,0.6965,-0.5281,-0.8291,-0.1835,0.7529,-0.5804,-0.7879,-0.2059,0.8113,-0.6197,-0.7521,-0.2242,0.866,-0.6496,-0.7217,-0.2392,0.9153,-0.673,-0.6955,-0.2517,0.9604,-0.6914,-0.6732,-0.2622,1.0014,-0.7055,-0.6547,-0.2712,1.0381,-0.7164,-0.6396,-0.2788,1.0702,-0.7246,-0.6275,-0.285,1.0976,-0.7303,-0.6184,-0.2901,1.1201,-0.7339,-0.6123,-0.2941,1.1377,-0.7359,-0.6085,-0.2971,1.1509,-0.7364,-0.6069,-0.2991,1.1594,-0.7343,-0.6089,-0.3,1.1624,-0.7286,-0.6158,-0.2999,1.1593,-0.7167,-0.6304,-0.2981,1.1475,-0.6992,-0.6515,-0.2943,1.129,-0.68,-0.6738,-0.2893,1.1087,-0.6639,-0.6917,-0.2843,1.0911,-0.6529,-0.7039,-0.2798,1.0757,-0.6445,-0.7133,-0.2753,1.0603,-0.6379,-0.7207,-0.2713,1.0463,-0.632,-0.7271,-0.268,1.0352,-0.6267,-0.7325,-0.2657,1.0274,-0.6227,-0.7365,-0.2641,1.0219,-0.6201,-0.7391,-0.2632,1.0185,-0.6189,-0.7402,-0.2629,1.0166,-0.6204,-0.7388,-0.2634,1.0164,-0.624,-0.7352,-0.2646,1.0181,-0.6276,-0.7316,-0.2662,1.0212,-0.6289,-0.73,-0.2677,1.0251,-0.627,-0.7311,-0.2689,1.0297,-0.6233,-0.7338,-0.2702,1.0352,-0.6187,-0.7372,-0.2716,1.0418,-0.6142,-0.7404,-0.2731,1.0494,-0.6095,-0.7436,-0.2748,1.0583,-0.6044,-0.7471,-0.2767,1.0684,-0.5996,-0.7502,-0.2788,1.0792,-0.5958,-0.7524,-0.281,1.0901,-0.5927,-0.7539,-0.2833,1.1014,-0.5901,-0.755,-0.2859,1.1133,-0.5888,-0.755,-0.2886,1.1249,-0.5894,-0.7535,-0.2915,1.1356,-0.5928,-0.7495,-0.2947,1.1457,-0.5984,-0.7436,-0.2983,1.1555,-0.6044,-0.7374,-0.3015,1.1638,-0.6093,-0.7325,-0.3037,1.1693,-0.6126,-0.7293,-0.3047,1.171,-0.6153,-0.727,-0.3049,1.1696,-0.6176,-0.7251,-0.3046,1.1669,-0.6198,-0.7233,-0.3044,1.1646,-0.6221,-0.7214,-0.3042,1.1626,-0.6243,-0.7196,-0.304,1.1604,-0.626,-0.7183,-0.3036,1.1582,-0.6269,-0.7177,-0.3033,1.1566,-0.6266,-0.718,-0.303,1.1557,-0.6256,-0.7191,-0.3027,1.1553,-0.6238,-0.7207,-0.3024,1.155,-0.6217,-0.7227,-0.302,1.1543,-0.6181,-0.7261,-0.3013,1.1531,-0.6133,-0.7305,-0.3003,1.1515,-0.6093,-0.7342,-0.2995,1.1501,-0.6079,-0.7356,-0.2991,1.1489,-0.6105,-0.7332,-0.2994,1.1482,-0.616,-0.7283,-0.3002,1.1479,-0.6218,-0.723,-0.301,1.1476,-0.6257,-0.7195,-0.3014,1.1467,-0.6269,-0.7185,-0.3012,1.1451,-0.6266,-0.719,-0.3007,1.143,-0.6258,-0.7199,-0.3001,1.1406,-0.6257,-0.7203,-0.2996,1.1383,-0.6261,-0.7201,-0.299,1.1357,-0.6266,-0.72,-0.2984,1.1327,-0.6276,-0.7193,-0.2979,1.1302,-0.6296,-0.7176,-0.2978,1.1289,-0.6333,-0.7141,-0.2984,1.1296,-0.6383,-0.7091,-0.2995,1.1318,-0.6429,-0.7045,-0.3005,1.1341,-0.6454,-0.702,-0.3011,1.1353,-0.6446,-0.7027,-0.3011,1.1349,-0.6417,-0.7056,-0.3006,1.1335,-0.6385,-0.7087,-0.3001,1.132,-0.6369,-0.7102,-0.2999,1.131,-0.638,-0.7091,-0.3001,1.1309,-0.6406,-0.7066,-0.3006,1.1312,-0.6431,-0.7041,-0.3011,1.1315,-0.6442,-0.703,-0.3013,1.1312,-0.643,-0.7042,-0.3012,1.13,-0.6404,-0.7068,-0.3007,1.1283,-0.6375,-0.7095,-0.3003,1.1264,-0.6357,-0.7113,-0.2999,1.125,-0.6354,-0.7116,-0.2998,1.1239,-0.636,-0.7111,-0.2997,1.123,-0.6368,-0.7104,-0.2997,1.1223,-0.6369,-0.7103,-0.2997,1.1218,-0.6359,-0.7113,-0.2997,1.1214,-0.6342,-0.7128,-0.2996,1.1212,-0.6327,-0.7141,-0.2996,1.1212,-0.6321,-0.7146,-0.2997,1.1214,-0.6329,-0.7137,-0.3001,1.1222,-0.6347,-0.7119,-0.3006,1.1233,-0.6366,-0.7099,-0.3012,1.1243,-0.6381,-0.7085,-0.3015,1.1249,-0.6388,-0.7079,-0.3016,1.1246,-0.6391,-0.7076,-0.3014,1.1237,-0.6393,-0.7075,-0.3012,1.1228,-0.6397,-0.7072,-0.3012,1.1224,-0.6404,-0.7065,-0.3013,1.1225,-0.6412,-0.7057,-0.3015,1.123,-0.6419,-0.705,-0.3016,1.1235,-0.642,-0.7048,-0.3017,1.1239,-0.6413,-0.7055,-0.3017,1.1239,-0.64,-0.7068,-0.3015,1.1238,-0.6386,-0.7081,-0.3013,1.1236,-0.6379,-0.7088,-0.3012,1.1234,-0.6379,-0.7088,-0.301,1.1232,-0.6386,-0.7083,-0.3009,1.1229,-0.6392,-0.7077,-0.3008,1.1225,-0.6395,-0.7075,-0.3007,1.1222,-0.6393,-0.7078,-0.3006,1.1218,-0.6389,-0.7082,-0.3004,1.1214,-0.6382,-0.7089,-0.3002,1.121,-0.6372,-0.7099,-0.3,1.1205,-0.6352,-0.7119,-0.2996,1.1197,-0.6325,-0.7145,-0.2991,1.1188,-0.6301,-0.7167,-0.2987,1.118,-0.6294,-0.7175,-0.2986,1.1178,-0.6311,-0.7158,-0.2989,1.1186,-0.6345,-0.7125,-0.2995,1.12,-0.6381,-0.7091,-0.3001,1.1214,-0.6404,-0.7069,-0.3005,1.1222,-0.6409,-0.7064,-0.3003,1.1218,-0.6406,-0.7069,-0.2999,1.1207,-0.6397,-0.7079,-0.2995,1.1195,-0.6388,-0.7088,-0.2991,1.1188,-0.6375,-0.71,-0.299,1.1187,-0.6358,-0.7116,-0.2989,1.1191,-0.6343,-0.713,-0.2988,1.1195,-0.6338,-0.7135,-0.2988,1.1197,-0.6346,-0.7127,-0.2988,1.1195,-0.6364,-0.7111,-0.2988,1.1193,-0.6384,-0.7094,-0.2988,1.119,-0.6397,-0.7082,-0.2988,1.1187,-0.6401,-0.7078,-0.2988,1.1185,-0.6401,-0.7078,-0.2988,1.1183,-0.6399,-0.708,-0.2987,1.1181,-0.6399,-0.708,-0.2987,1.1181,-0.6402,-0.7077,-0.2989,1.1186,-0.6408,-0.7071,-0.2991,1.1195,-0.641,-0.7069,-0.2991,1.12,-0.6403,-0.7076,-0.2988,1.1193,-0.6381,-0.7099,-0.298,1.1167,-0.6348,-0.7134,-0.2967,1.1129,-0.6316,-0.7169,-0.2953,1.1089,-0.6296,-0.7191,-0.2942,1.1054,-0.6293,-0.7196,-0.2934,1.1026,-0.6302,-0.7191,-0.2928,1.0999,-0.6316,-0.718,-0.2924,1.0977,-0.6333,-0.7167,-0.2922,1.0962,-0.635,-0.7151,-0.2922,1.0955,-0.6372,-0.7131,-0.2925,1.0955,-0.6396,-0.7108,-0.2929,1.096,-0.6422,-0.7082,-0.2933,1.0967,-0.6453,-0.7051,-0.294,1.0979,-0.6489,-0.7015,-0.2947,1.0996,-0.6523,-0.698,-0.2955,1.1013,-0.6551,-0.6952,-0.2959,1.1023,-0.6569,-0.6934,-0.296,1.1021,-0.6582,-0.6922,-0.2959,1.1012,-0.6593,-0.6912,-0.2958,1.1001,-0.6606,-0.69,-0.2958,1.0995,-0.6622,-0.6885,-0.2959,1.0995,-0.6638,-0.6867,-0.2962,1.0998,-0.6655,-0.6851,-0.2964,1.1002,-0.6669,-0.6835,-0.2967,1.1005,-0.6683,-0.6821,-0.2969,1.1008,-0.6697,-0.6807,-0.2971,1.1011,-0.6708,-0.6795,-0.2973,1.1014,-0.6715,-0.6787,-0.2974,1.1015,-0.6713,-0.6789,-0.2974,1.1015,-0.6706,-0.6796,-0.2974,1.1012,-0.67,-0.6802,-0.2974,1.1011,-0.6703,-0.6799,-0.2975,1.1011,-0.6722,-0.6779,-0.2976,1.1014,-0.6752,-0.6748,-0.2978,1.1019,-0.678,-0.6719,-0.298,1.1025,-0.6793,-0.6705,-0.2981,1.1029,-0.6784,-0.6715,-0.2982,1.103,-0.676,-0.6739,-0.2982,1.103,-0.6733,-0.6765,-0.2982,1.103,-0.6716,-0.6782,-0.2983,1.1033,-0.6712,-0.6786,-0.2984,1.1039,-0.6713,-0.6783,-0.2987,1.1047,-0.6719,-0.6776,-0.299,1.1057,-0.6727,-0.6767,-0.2992,1.1067,-0.6739,-0.6754,-0.2995,1.1078,-0.6755,-0.6737,-0.2997,1.109,-0.6772,-0.6719,-0.3,1.1103,-0.6787,-0.6702,-0.3002,1.1115,-0.6801,-0.6687,-0.3005,1.1127,-0.6816,-0.6671,-0.3007,1.114,-0.6828,-0.6658,-0.301,1.1151,-0.6834,-0.6651,-0.3011,1.1159,-0.6836,-0.6648,-0.3012,1.1166,-0.6834,-0.665,-0.3012,1.1171,-0.6827,-0.6658,-0.3011,1.1172,-0.6811,-0.6676,-0.3007,1.1163,-0.6782,-0.6709,-0.3,1.1143,-0.6742,-0.6753,-0.299,1.1113,-0.67,-0.68,-0.2979,1.108,-0.6662,-0.6842,-0.2969,1.105,-0.662,-0.6887,-0.2958,1.102,-0.6573,-0.6937,-0.2946,1.0989,-0.6541,-0.6971,-0.2936,1.0963,-0.6546,-0.6969,-0.2931,1.0948,-0.6607,-0.691,-0.2933,1.0951,-0.6706,-0.6811,-0.2938,1.0967,-0.6804,-0.6712,-0.2942,1.0985]);
Group704ZZZ.children[42] = OrientationInterpolator747;

let OrientationInterpolator748 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator748.DEF = "Interpolator40_lButtock";
OrientationInterpolator748.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator748.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0]);
Group704ZZZ.children[43] = OrientationInterpolator748;

let OrientationInterpolator749 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator749.DEF = "Interpolator41_lThigh";
OrientationInterpolator749.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator749.keyValue = new X3D.MFRotation([-0.9849,0.0196,-0.1719,0.0635,-0.9792,-0.0874,0.1832,0.1503,-0.9521,-0.1314,0.2763,0.2475,-0.9411,-0.1544,0.3009,0.3345,-0.9436,-0.159,0.2903,0.3947,-0.9586,-0.1413,0.2473,0.4171,-0.9782,-0.1059,0.1784,0.4144,-0.9933,-0.0626,0.0973,0.4057,-0.9992,-0.0263,0.0309,0.4074,-1,-0.0033,-0.0076,0.421,-0.9993,0.0144,-0.0337,0.4378,-0.9981,0.0299,-0.0537,0.456,-0.9962,0.0466,-0.0732,0.4746,-0.9934,0.0655,-0.0942,0.4948,-0.9899,0.0846,-0.1134,0.5166,-0.9863,0.1025,-0.129,0.5373,-0.9831,0.1184,-0.1398,0.5541,-0.9802,0.1341,-0.1455,0.5662,-0.9776,0.1498,-0.1478,0.575,-0.9755,0.1622,-0.1484,0.581,-0.9744,0.1683,-0.149,0.5845,-0.975,0.1655,-0.1482,0.5849,-0.9769,0.156,-0.1458,0.5823,-0.9788,0.1445,-0.1453,0.5778,-0.9793,0.1354,-0.1504,0.5724,-0.9783,0.1269,-0.1635,0.566,-0.9762,0.1174,-0.1825,0.5583,-0.9725,0.1119,-0.204,0.5502,-0.9675,0.1161,-0.2246,0.5422,-0.9598,0.1355,-0.246,0.534,-0.9486,0.1663,-0.2693,0.5258,-0.9357,0.2005,-0.2902,0.5187,-0.9248,0.2293,-0.3037,0.5131,-0.9184,0.2517,-0.3052,0.5093,-0.9152,0.2715,-0.298,0.5067,-0.913,0.2882,-0.2889,0.5044,-0.9099,0.3013,-0.2851,0.5014,-0.9067,0.3095,-0.2867,0.4972,-0.9041,0.3134,-0.2907,0.4924,-0.9005,0.3154,-0.2995,0.4872,-0.8939,0.3178,-0.316,0.4823,-0.8825,0.3203,-0.3444,0.4781,-0.8666,0.3212,-0.382,0.4747,-0.8483,0.3216,-0.4207,0.4723,-0.8308,0.3233,-0.4531,0.4701,-0.8144,0.3281,-0.4785,0.4685,-0.7982,0.335,-0.5006,0.4673,-0.7838,0.3417,-0.5185,0.4652,-0.7729,0.3463,-0.5316,0.4607,-0.7659,0.3505,-0.5391,0.4531,-0.7621,0.3549,-0.5416,0.4431,-0.7622,0.3561,-0.5407,0.4314,-0.7669,0.3499,-0.538,0.4189,-0.7776,0.3303,-0.535,0.4049,-0.7936,0.2993,-0.5298,0.3894,-0.8131,0.265,-0.5182,0.3743,-0.8347,0.2379,-0.4966,0.3608,-0.8598,0.2214,-0.4602,0.349,-0.8874,0.2103,-0.4101,0.3388,-0.913,0.2043,-0.353,0.3314,-0.9327,0.2034,-0.2979,0.3273,-0.9459,0.2097,-0.2477,0.3266,-0.9541,0.2229,-0.2001,0.3289,-0.9585,0.2383,-0.1567,0.3335,-0.9604,0.2518,-0.119,0.34,-0.9601,0.2658,-0.0875,0.3485,-0.9578,0.2809,-0.0618,0.3588,-0.9556,0.2919,-0.0415,0.3699,-0.9553,0.2944,-0.0261,0.3804,-0.9578,0.2867,-0.0178,0.39,-0.962,0.2727,-0.0154,0.3992,-0.9667,0.2556,-0.0135,0.4083,-0.9711,0.2387,-0.0071,0.4176,-0.9752,0.2214,0.0045,0.4267,-0.9791,0.2025,0.0186,0.4357,-0.9824,0.1838,0.0345,0.4454,-0.9846,0.1672,0.0518,0.4564,-0.9855,0.1539,0.0716,0.4688,-0.9854,0.1426,0.0935,0.4823,-0.9848,0.1309,0.1139,0.497,-0.9846,0.1168,0.1299,0.5128,-0.985,0.1007,0.1403,0.5303,-0.9856,0.0838,0.1472,0.5493,-0.9861,0.0655,0.1524,0.5685,-0.9864,0.0451,0.1578,0.5868,-0.9863,0.0213,0.1634,0.6041,-0.9857,-0.0049,0.1683,0.621,-0.9845,-0.0309,0.1728,0.6375,-0.9827,-0.0542,0.1769,0.6535,-0.9807,-0.075,0.1808,0.6686,-0.9783,-0.0946,0.1843,0.683,-0.9757,-0.1124,0.1881,0.697,-0.9729,-0.1281,0.1923,0.7105,-0.97,-0.1416,0.1974,0.724,-0.967,-0.1534,0.2032,0.7371,-0.9641,-0.1637,0.2091,0.7494,-0.9613,-0.1727,0.2148,0.7603,-0.9588,-0.1797,0.2201,0.7694,-0.9565,-0.185,0.2254,0.7771,-0.9542,-0.1904,0.231,0.7839,-0.9513,-0.1973,0.2368,0.7901,-0.948,-0.2057,0.243,0.796,-0.9442,-0.2149,0.2495,0.8011,-0.9399,-0.2256,0.2563,0.8056,-0.9347,-0.2385,0.2634,0.8094,-0.928,-0.256,0.2708,0.8123,-0.9197,-0.2767,0.2786,0.8144,-0.911,-0.2966,0.2867,0.8164,-0.9032,-0.3114,0.2953,0.8185,-0.8968,-0.3207,0.3049,0.821,-0.891,-0.3266,0.3153,0.8236,-0.8865,-0.3291,0.3253,0.8257,-0.8837,-0.3281,0.3339,0.8267,-0.8827,-0.3237,0.3407,0.8259,-0.8833,-0.3159,0.3464,0.8238,-0.8854,-0.3047,0.3512,0.8215,-0.8886,-0.29,0.3554,0.8204,-0.8931,-0.2713,0.3588,0.8205,-0.8987,-0.2486,0.3612,0.8215,-0.9045,-0.2236,0.3632,0.8237,-0.9096,-0.198,0.3652,0.8276,-0.9141,-0.1703,0.368,0.8334,-0.9179,-0.1407,0.3711,0.8409,-0.9209,-0.1128,0.3731,0.8502,-0.9235,-0.0903,0.3727,0.8605,-0.9263,-0.0749,0.3692,0.8717,-0.9294,-0.0641,0.3636,0.8839,-0.9323,-0.0558,0.3573,0.8966,-0.9348,-0.0479,0.3519,0.9097,-0.9365,-0.0419,0.3481,0.9233,-0.9378,-0.0382,0.345,0.9374,-0.9394,-0.0329,0.3413,0.9516,-0.9416,-0.0221,0.3359,0.9656,-0.9445,-0.0037,0.3285,0.9794,-0.9473,0.0197,0.3198,0.9933,-0.9495,0.0445,0.3106,1.0077,-0.9511,0.0675,0.3015,1.023,-0.9522,0.0889,0.2921,1.0394,-0.953,0.11,0.2825,1.0569,-0.9531,0.1294,0.2736,1.0743,-0.9528,0.1458,0.2664,1.0906,-0.9521,0.1587,0.2613,1.106,-0.9514,0.1689,0.2575,1.1207,-0.9507,0.1776,0.2541,1.1339,-0.9502,0.1858,0.2503,1.1444,-0.95,0.1926,0.2459,1.1527,-0.9501,0.198,0.2411,1.159,-0.9501,0.204,0.2361,1.1623,-0.9495,0.2127,0.2307,1.1617,-0.9481,0.2252,0.2244,1.1563,-0.9461,0.2402,0.2171,1.1468,-0.9435,0.2567,0.2097,1.1349,-0.9402,0.2735,0.203,1.1224,-0.9365,0.2896,0.1976,1.1098,-0.9323,0.3061,0.1928,1.0962,-0.9271,0.3243,0.1878,1.0811,-0.9205,0.3459,0.182,1.0641,-0.9115,0.3726,0.1745,1.0448,-0.9,0.4034,0.1654,1.0239,-0.8866,0.4355,0.1555,1.0025,-0.8726,0.4661,0.1458,0.9816,-0.8577,0.4957,0.1364,0.9604,-0.8413,0.5255,0.127,0.939,-0.8247,0.5532,0.1176,0.9184,-0.8097,0.5767,0.1086,0.8998,-0.796,0.597,0.1002,0.8849,-0.7834,0.6146,0.0926,0.8724,-0.7749,0.6262,0.0862,0.8579,-0.7733,0.6287,0.0816,0.8368,-0.7822,0.6174,0.0834,0.8056,-0.7997,0.5933,0.0919,0.7673,-0.8207,0.5627,0.0994,0.7273,-0.8406,0.5333,0.0951,0.6908,-0.8595,0.5067,0.0675,0.6587,-0.8785,0.4772,0.0211,0.6302,-0.8953,0.4445,-0.0312,0.607,-0.909,0.4104,-0.0729,0.5888,-0.9204,0.3791,-0.0962,0.5746,-0.9302,0.3506,-0.1088,0.5637,-0.9393,0.3222,-0.1177,0.5542,-0.9481,0.29,-0.1303,0.545,-0.9565,0.2509,-0.1491,0.5359,-0.9634,0.2072,-0.1698,0.528,-0.968,0.1635,-0.1903,0.5215,-0.9701,0.1246,-0.2082,0.5163,-0.9703,0.0919,-0.2238,0.5116,-0.9691,0.0633,-0.2382,0.5073,-0.9674,0.039,-0.2501,0.5037,-0.9659,0.0192,-0.2584,0.5014,-0.9651,0.0103,-0.2618,0.5002,-0.9652,0.0107,-0.2614,0.4996,-0.9658,0.0073,-0.2593,0.4998,-0.9662,-0.0126,-0.2575,0.5007,-0.9642,-0.0634,-0.2574,0.5043,-0.9573,-0.1328,-0.2569,0.5114,-0.9474,-0.1955,-0.2534,0.5199,-0.9418,-0.2297,-0.2455,0.5247,-0.947,-0.2236,-0.2305,0.5223,-0.9589,-0.1914,-0.2095,0.5158,-0.9704,-0.1521,-0.1876,0.5091,-0.977,-0.1273,-0.1712,0.5048,-0.9784,-0.1247,-0.1646,0.5023,-0.9775,-0.1329,-0.1638,0.5004,-0.9756,-0.1454,-0.1643,0.4987,-0.9746,-0.1555,-0.1614,0.4972,-0.9758,-0.1553,-0.1542,0.4954,-0.9779,-0.1503,-0.145,0.4937,-0.9789,-0.1543,-0.1342,0.4922,-0.9759,-0.181,-0.1222,0.4915,-0.9638,-0.2443,-0.1068,0.4927,-0.9395,-0.331,-0.0879,0.4978,-0.9074,-0.4145,-0.0698,0.5067,-0.879,-0.4733,-0.0571,0.516,-0.8654,-0.4984,-0.0526,0.5211,-0.8613,-0.5053,-0.0534,0.5231,-0.8569,-0.5125,-0.0558,0.5262,-0.8416,-0.5371,-0.0561,0.5348,-0.808,-0.5867,-0.054,0.5538,-0.7627,-0.6447,-0.0514,0.5816,-0.7169,-0.6955,-0.0479,0.6116,-0.6814,-0.7306,-0.043,0.6353,-0.6574,-0.7527,-0.0352,0.6504,-0.6393,-0.7685,-0.0252,0.6602,-0.6269,-0.7789,-0.0154,0.6647,-0.6201,-0.7845,-0.008,0.6634,-0.618,-0.7862,-0.003,0.6538,-0.6211,-0.7837,0.0006,0.6367,-0.6313,-0.7756,0.0022,0.6171,-0.6505,-0.7595,0.0011,0.6003,-0.6826,-0.7308,-0.001,0.5882,-0.7245,-0.6893,-0.0038,0.5793,-0.7671,-0.6415,-0.01,0.5732,-0.8028,-0.5958,-0.0227,0.5683,-0.8331,-0.551,-0.0479,0.5609,-0.8599,-0.5036,-0.0832,0.5532,-0.8792,-0.4615,-0.1189,0.5496,-0.889,-0.4347,-0.1439,0.5535,-0.8912,-0.4268,-0.1534,0.5652,-0.8881,-0.4331,-0.1543,0.5821,-0.8793,-0.4512,-0.1522,0.6034,-0.8649,-0.4783,-0.1524,0.6285,-0.8416,-0.5166,-0.1575,0.66,-0.8108,-0.5618,-0.1642,0.6986,-0.7789,-0.6041,-0.1687,0.7399,-0.7516,-0.6379,-0.1679,0.7783,-0.729,-0.6656,-0.1599,0.8131,-0.7078,-0.6908,-0.1479,0.8467,-0.6889,-0.7119,-0.1364,0.8767,-0.6735,-0.7279,-0.1288,0.9012,-0.6612,-0.7398,-0.1244,0.92,-0.6516,-0.7489,-0.1211,0.9339,-0.6459,-0.754,-0.1193,0.9424,-0.6457,-0.7542,-0.1196,0.945,-0.6513,-0.7488,-0.123,0.9413,-0.662,-0.7383,-0.1287,0.9317,-0.6772,-0.7232,-0.1358,0.917,-0.6962,-0.7034,-0.1432,0.8977,-0.722,-0.6753,-0.1505,0.8712,-0.7538,-0.6375,-0.1592,0.8386,-0.7854,-0.5951,-0.17,0.8066,-0.8107,-0.5559,-0.1835,0.7809,-0.8267,-0.5253,-0.2015,0.7647,-0.8368,-0.5,-0.2229,0.754,-0.8451,-0.4762,-0.2431,0.7434,-0.8556,-0.4489,-0.2578,0.7276,-0.8717,-0.4115,-0.266,0.7038,-0.8906,-0.3661,-0.2697,0.6758,-0.9076,-0.3219,-0.2697,0.6477,-0.9187,-0.2911,-0.2671,0.6224,-0.923,-0.2836,-0.2601,0.5988,-0.9232,-0.2937,-0.2478,0.5751,-0.921,-0.3124,-0.2326,0.5532,-0.9188,-0.329,-0.2183,0.5344,-0.9154,-0.3453,-0.2068,0.5185,-0.9099,-0.3657,-0.1958,0.5049,-0.9056,-0.382,-0.1842,0.4946,-0.907,-0.385,-0.1708,0.4884,-0.9156,-0.3708,-0.1554,0.4873,-0.9285,-0.3445,-0.1389,0.4909,-0.9426,-0.3109,-0.1218,0.4982,-0.9557,-0.275,-0.1047,0.5076,-0.9691,-0.2304,-0.0886,0.519,-0.9812,-0.1787,-0.0728,0.5339,-0.9892,-0.1356,-0.0555,0.5521,-0.9927,-0.115,-0.036,0.572,-0.9928,-0.1183,-0.0163,0.593,-0.9907,-0.1363,0.0028,0.6153,-0.9859,-0.1657,0.0224,0.639,-0.9781,-0.2036,0.044,0.664,-0.9644,-0.2555,0.0685,0.6913,-0.9437,-0.3174,0.0933,0.7216,-0.92,-0.3747,0.1153,0.7542,-0.8997,-0.416,0.1326,0.7867,-0.8832,-0.4453,0.147,0.821,-0.869,-0.4684,0.1595,0.8566,-0.861,-0.4798,0.1688,0.8879,-0.8627,-0.4747,0.1744,0.9098,-0.8774,-0.4459,0.1771,0.9217,-0.9,-0.3979,0.1778,0.9278,-0.9227,-0.3423,0.1773,0.9289,-0.9403,-0.2915,0.1757,0.9242,-0.9534,-0.2467,0.1734,0.9096,-0.965,-0.2005,0.1689,0.8862,-0.9751,-0.1532,0.1602,0.8595,-0.9836,-0.1067,0.1454,0.8355,-0.9908,-0.0604,0.1214,0.8118,-0.996,-0.014,0.0888,0.7871,-0.9981,0.0292,0.0539,0.7679,-0.9975,0.0651,0.0259,0.7602,-0.9959,0.0896,0.0111,0.7681,-0.9945,0.1045,0.0056,0.7867,-0.9934,0.1143,0.003,0.808,-0.9923,0.1236,-0.0031,0.824,-0.991,0.1331,-0.0161,0.8336,-0.9895,0.1408,-0.0323,0.8409,-0.988,0.1475,-0.0468,0.8455,-0.9866,0.1539,-0.0548,0.8472,-0.9855,0.1606,-0.0541,0.8439,-0.9848,0.1672,-0.0475,0.8365,-0.9841,0.1732,-0.0384,0.8284,-0.9835,0.1782,-0.0302,0.8227,-0.9832,0.1809,-0.0232,0.8202,-0.9832,0.182,-0.0156,0.8191,-0.983,0.1833,-0.0085,0.819,-0.9824,0.1866,-0.0024,0.8194,-0.9813,0.1926,0.0026,0.8208,-0.9797,0.2001,0.007,0.8231,-0.978,0.2086,0.0101,0.8256,-0.976,0.2172,0.0116,0.8275,-0.974,0.2262,0.0107,0.8283,-0.9718,0.2356,0.0077,0.8285,-0.9694,0.2455,0.0043,0.829,-0.9668,0.2555,0.0021,0.8308,-0.964,0.2659,0.0014,0.8343,-0.961,0.2767,0.0013,0.8391,-0.9579,0.2871,0.002,0.8443,-0.9549,0.2968,0.0033,0.8492,-0.9521,0.3058,0.0052,0.8539,-0.9492,0.3145,0.0076,0.8586,-0.9466,0.3221,0.0109,0.8632,-0.9446,0.3279,0.0155,0.8673,-0.9433,0.3312,0.0219,0.8707,-0.9426,0.3326,0.0297,0.8735,-0.9421,0.3333,0.0379,0.8765,-0.9413,0.3346,0.0451,0.8806,-0.9402,0.3368,0.0513,0.8854,-0.939,0.3392,0.0571,0.8907,-0.9378,0.3415,0.0622,0.8972,-0.9368,0.3434,0.0664,0.9053,-0.9364,0.3441,0.0692,0.9143,-0.9363,0.3439,0.071,0.924,-0.936,0.3446,0.0725,0.9366,-0.9347,0.3474,0.0746,0.954,-0.9323,0.3532,0.0781,0.9785,-0.929,0.3607,0.0824,1.0082,-0.9256,0.3685,0.0869,1.0396,-0.9224,0.3754,0.0903,1.0687,-0.9195,0.382,0.0925,1.0944,-0.9166,0.3885,0.0942,1.1189,-0.914,0.3943,0.0952,1.1432,-0.9122,0.3985,0.0959,1.1684,-0.9113,0.4003,0.0965,1.195,-0.9111,0.4006,0.0969,1.2224,-0.911,0.4009,0.0964,1.2502,-0.9103,0.4029,0.0948,1.2779,-0.9085,0.4077,0.0917,1.3058,-0.906,0.414,0.0878,1.3339,-0.9036,0.4201,0.0835,1.3618,-0.9022,0.4241,0.0793,1.389,-0.9019,0.4254,0.0747,1.4161,-0.9024,0.4253,0.0696,1.4433,-0.9032,0.4244,0.0645,1.4698,-0.9041,0.4231,0.06,1.4946,-0.9054,0.4207,0.0562,1.5175,-0.9072,0.4173,0.0526,1.539,-0.9088,0.4143,0.049,1.5594,-0.9096,0.413,0.0451,1.5788,-0.9096,0.4136,0.0407,1.5974,-0.9089,0.4154,0.0361,1.6149,-0.9078,0.4182,0.0316,1.6314,-0.9062,0.4219,0.0275,1.6469,-0.9039,0.4272,0.0233,1.661,-0.9008,0.4337,0.0191,1.6738,-0.8978,0.4402,0.0159,1.686,-0.8953,0.4452,0.0148,1.6985,-0.8937,0.4483,0.0164,1.7124,-0.8927,0.4501,0.0199,1.727,-0.892,0.4514,0.0244,1.7401,-0.8913,0.4525,0.029,1.7498,-0.8904,0.454,0.0341,1.7561,-0.8894,0.4554,0.04,1.76,-0.8887,0.4562,0.0455,1.7606,-0.8887,0.4558,0.0496,1.7566,-0.8894,0.4541,0.052,1.7466,-0.8907,0.4515,0.0533,1.7314,-0.8924,0.4481,0.0539,1.7138,-0.8943,0.4442,0.0539,1.6967,-0.8968,0.4393,0.0531,1.6795,-0.8997,0.4334,0.0515,1.6609,-0.9027,0.4275,0.0495,1.6432,-0.9051,0.4226,0.0472,1.6285,-0.9068,0.4192,0.0442,1.6177,-0.9082,0.4165,0.0404,1.6096,-0.9092,0.4146,0.0366,1.6036,-0.9099,0.4135,0.0335,1.5993,-0.9101,0.4131,0.0312,1.5969,-0.91,0.4136,0.0291,1.5965,-0.9095,0.4148,0.0279,1.5977,-0.9087,0.4165,0.0277,1.6001,-0.9076,0.4189,0.0292,1.6041,-0.906,0.422,0.032,1.6098,-0.9044,0.4253,0.0353,1.6161,-0.9027,0.4285,0.0383,1.6218,-0.9011,0.4315,0.0413,1.6267,-0.8995,0.4346,0.0446,1.6314,-0.8979,0.4376,0.0473,1.636,-0.8965,0.4404,0.0486,1.6404,-0.8952,0.4431,0.0481,1.6448,-0.894,0.4457,0.0462,1.6492,-0.8929,0.4481,0.0437,1.6532,-0.8919,0.4505,0.0411,1.6566,-0.8909,0.4526,0.0381,1.6593,-0.89,0.4546,0.0346,1.6616,-0.8891,0.4565,0.0313,1.6633,-0.8883,0.4584,0.029,1.6645,-0.8871,0.4607,0.0277,1.6651,-0.8859,0.4631,0.0271,1.6652,-0.8849,0.4649,0.0273,1.6646,-0.8848,0.4651,0.0281,1.6633,-0.8859,0.463,0.0302,1.6609,-0.8877,0.4592,0.0332,1.6577,-0.8899,0.4548,0.0365,1.6541,-0.8919,0.4505,0.0391,1.6505,-0.8939,0.4463,0.0409,1.6468,-0.8961,0.4418,0.0425,1.643,-0.8981,0.4377,0.0434,1.639,-0.8995,0.4347,0.0435,1.635,-0.9004,0.433,0.0422,1.6306,-0.9008,0.4323,0.04,1.626,-0.901,0.4323,0.0372,1.6215,-0.901,0.4324,0.0347,1.6175,-0.901,0.4327,0.0323,1.614,-0.9007,0.4334,0.0298,1.6108,-0.9003,0.4343,0.0274,1.6081,-0.9,0.4353,0.0252,1.6058,-0.8995,0.4362,0.0235,1.604,-0.899,0.4373,0.0221,1.6027,-0.8985,0.4384,0.0208,1.6018,-0.8981,0.4393,0.0193,1.6014,-0.8976,0.4404,0.0175,1.6018,-0.8971,0.4415,0.0156,1.6029,-0.8969,0.4421,0.0137,1.6039,-0.8971,0.4417,0.0119,1.6042,-0.8981,0.4397,0.0105,1.6036,-0.8996,0.4366,0.0092,1.6025,-0.9012,0.4333,0.0078,1.6007,-0.9026,0.4304,0.0058,1.5977,-0.9035,0.4285,0.003,1.593,-0.9042,0.427,-0.0004,1.5869,-0.905,0.4255,-0.0039,1.5805,-0.906,0.4233,-0.0068,1.575,-0.9074,0.4202,-0.0092,1.5706,-0.9091,0.4165,-0.0112,1.5667,-0.9107,0.4128,-0.013,1.5633,-0.9121,0.4096,-0.0147,1.5603,-0.9133,0.4071,-0.0161,1.5575,-0.9142,0.4048,-0.0174,1.5551,-0.915,0.4031,-0.0186,1.5532,-0.9155,0.4019,-0.0196,1.552,-0.9157,0.4013,-0.0205,1.552,-0.9158,0.4012,-0.0212,1.5528,-0.9155,0.4017,-0.0219,1.5538,-0.9149,0.4031,-0.0227,1.5543,-0.9137,0.4057,-0.0238,1.5541,-0.9121,0.4093,-0.025,1.5535,-0.9103,0.4132,-0.0262,1.553,-0.9088,0.4164,-0.0272,1.553,-0.9075,0.4191,-0.0281,1.5541,-0.9064,0.4215,-0.0289,1.5559,-0.9055,0.4234,-0.0295,1.5576,-0.9048,0.4248,-0.0296,1.5585,-0.9046,0.4253,-0.0291,1.5581,-0.9047,0.4251,-0.0282,1.5569,-0.9049,0.4247,-0.0271,1.5557,-0.9051,0.4245,-0.0258,1.5551,-0.905,0.4248,-0.0243,1.5557,-0.9048,0.4253,-0.0225,1.5568,-0.9046,0.4257,-0.0207,1.5581,-0.9046,0.4258,-0.019,1.5592,-0.9047,0.4257,-0.0172,1.56,-0.905,0.4252,-0.0154,1.5609,-0.9052,0.4248,-0.0137,1.5614,-0.9054,0.4244,-0.0124,1.5615,-0.9055,0.4243,-0.0116,1.5606,-0.9055,0.4242,-0.0111,1.559,-0.9055,0.4242,-0.0108,1.5574,-0.9055,0.4243,-0.0107,1.5567,-0.9054,0.4244,-0.0107,1.5571,-0.9053,0.4246,-0.011,1.5583,-0.9052,0.4248,-0.0112,1.5598,-0.905,0.4252,-0.0114,1.5608,-0.9047,0.4259,-0.0114,1.5613,-0.9043,0.4268,-0.0114,1.5616,-0.9039,0.4276,-0.0113,1.5618,-0.9037,0.428,-0.0108,1.562,-0.9038,0.4279,-0.0098,1.5624,-0.904,0.4275,-0.0085,1.563,-0.9042,0.427,-0.0071,1.5633,-0.9044,0.4266,-0.0061,1.5633,-0.9045,0.4264,-0.0058,1.5626,-0.9045,0.4263,-0.0058,1.5614,-0.9046,0.4262,-0.0058,1.5602,-0.9048,0.4258,-0.0058,1.5595,-0.9053,0.4248,-0.0053,1.5592,-0.9059,0.4234,-0.0046,1.5592,-0.9065,0.4223,-0.0041,1.5594,-0.9065,0.4223,-0.0042,1.5598,-0.9056,0.424,-0.0053,1.5603,-0.9043,0.4269,-0.0072,1.561,-0.9028,0.43,-0.009,1.562,-0.9016,0.4324,-0.01,1.5638,-0.9009,0.4339,-0.0099,1.5669,-0.9004,0.4349,-0.009,1.5711,-0.9002,0.4355,-0.008,1.575,-0.9002,0.4354,-0.0075,1.5776,-0.9006,0.4345,-0.0075,1.5781,-0.9014,0.433,-0.0077,1.5773,-0.9023,0.431,-0.0082,1.5761,-0.9033,0.4289,-0.0089,1.5752,-0.9044,0.4265,-0.0098,1.5753,-0.9058,0.4236,-0.0109,1.5757,-0.9071,0.4208,-0.0123,1.5759,-0.9081,0.4185,-0.0142,1.5752,-0.9088,0.4169,-0.0167,1.5733,-0.9093,0.4157,-0.0198,1.5706,-0.9097,0.4146,-0.0231,1.5678,-0.9102,0.4134,-0.0263,1.5654,-0.9109,0.4116,-0.0294,1.5636,-0.9117,0.4096,-0.0324,1.5621,-0.9124,0.4079,-0.0355,1.561,-0.9127,0.4068,-0.0384,1.5605,-0.9126,0.4068,-0.0412,1.5612,-0.9121,0.4076,-0.0438,1.5629,-0.9115,0.4086,-0.0465,1.5643,-0.9111,0.4093,-0.0495,1.5644,-0.9106,0.4098,-0.0529,1.5626,-0.9102,0.4104,-0.0566,1.5595,-0.9098,0.4105,-0.0604,1.5559,-0.9099,0.4099,-0.064,1.5524,-0.9105,0.408,-0.0673,1.5491,-0.9115,0.4052,-0.0705,1.5455,-0.9126,0.4021,-0.0736,1.542,-0.9137,0.3992,-0.0762,1.5388,-0.9147,0.3964,-0.0785,1.5361,-0.9158,0.3935,-0.0803,1.5337,-0.9168,0.3909,-0.082,1.5315,-0.9176,0.3886,-0.0838,1.5294,-0.918,0.3871,-0.0858,1.5273,-0.9183,0.386,-0.0879,1.5252,-0.9185,0.3851,-0.0898,1.5236,-0.9188,0.384,-0.0913,1.5227,-0.9193,0.3826,-0.092,1.5229,-0.92,0.3809,-0.0921,1.5238,-0.9206,0.3796,-0.0923,1.5252,-0.9208,0.3788,-0.0929,1.5267,-0.9206,0.379,-0.0943,1.5285,-0.9201,0.3798,-0.0961,1.5306,-0.9195,0.3808,-0.0979,1.5328,-0.919,0.3815,-0.099,1.5348,-0.9189,0.3818,-0.099,1.5365,-0.919,0.3819,-0.0984,1.5379,-0.919,0.382,-0.0978,1.5394,-0.9187,0.3827,-0.0976,1.541,-0.918,0.3843,-0.0985,1.5426,-0.9169,0.3865,-0.0999,1.5442,-0.9159,0.3885,-0.1011,1.5463,-0.9154,0.3895,-0.1014,1.5492,-0.9157,0.3892,-0.1004,1.5535,-0.9163,0.3881,-0.0986,1.5588,-0.9172,0.3865,-0.0963,1.5643,-0.9183,0.3847,-0.0937,1.5691,-0.9194,0.3827,-0.0907,1.573,-0.9207,0.3805,-0.087,1.5765,-0.9221,0.3779,-0.0833,1.5799,-0.9235,0.3752,-0.08,1.5835,-0.9251,0.3719,-0.0769,1.5882,-0.9268,0.3681,-0.0739,1.5934,-0.9284,0.3646,-0.0714,1.598,-0.9295,0.3621,-0.0699,1.6007,-0.9299,0.3611,-0.07,1.6005,-0.9298,0.361,-0.0711,1.5982,-0.9298,0.361,-0.0722,1.596]);
Group704ZZZ.children[44] = OrientationInterpolator749;

let OrientationInterpolator750 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator750.DEF = "Interpolator42_lShin";
OrientationInterpolator750.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator750.keyValue = new X3D.MFRotation([0.9992,0.0395,0.0049,0.0163,0.9995,-0.0293,-0.0134,0.1563,0.9993,-0.0345,-0.0119,0.3043,0.9993,-0.0364,-0.0097,0.4364,0.9993,-0.0367,-0.0077,0.5289,0.9993,-0.0356,-0.0065,0.5659,0.9994,-0.0334,-0.0058,0.5633,0.9995,-0.0307,-0.0052,0.5448,0.9996,-0.0283,-0.0044,0.5345,0.9996,-0.0264,-0.0037,0.5359,0.9997,-0.0247,-0.003,0.5373,0.9997,-0.0231,-0.0023,0.5391,0.9998,-0.0216,-0.0017,0.5416,0.9998,-0.0205,-0.0012,0.5451,0.9998,-0.0195,-0.0008,0.5495,0.9998,-0.0187,-0.0005,0.554,0.9998,-0.0179,-0.0002,0.5582,0.9999,-0.0171,0.0001,0.5618,0.9999,-0.0164,0.0003,0.5653,0.9999,-0.0158,0.0005,0.5685,0.9999,-0.0154,0.0007,0.5712,0.9999,-0.0152,0.0007,0.5744,0.9999,-0.0152,0.0007,0.5776,0.9999,-0.0154,0.0006,0.5796,0.9999,-0.0157,0.0005,0.5787,0.9999,-0.0161,0.0003,0.5745,0.9999,-0.0167,0,0.5679,0.9998,-0.0173,-0.0003,0.5593,0.9998,-0.018,-0.0005,0.5495,0.9998,-0.0186,-0.0008,0.5368,0.9998,-0.0192,-0.001,0.5215,0.9998,-0.0198,-0.0013,0.5071,0.9998,-0.0204,-0.0015,0.4972,0.9998,-0.0209,-0.0017,0.4937,0.9998,-0.0213,-0.0018,0.4944,0.9998,-0.0217,-0.002,0.4966,0.9997,-0.0223,-0.0022,0.4973,0.9997,-0.0232,-0.0025,0.4964,0.9997,-0.0242,-0.0029,0.4952,0.9997,-0.0253,-0.0033,0.4931,0.9996,-0.0263,-0.0037,0.4895,0.9996,-0.0273,-0.0041,0.4838,0.9996,-0.0283,-0.0045,0.4765,0.9996,-0.0292,-0.0049,0.4686,0.9995,-0.03,-0.0052,0.4612,0.9995,-0.0306,-0.0055,0.4546,0.9995,-0.0311,-0.0058,0.4482,0.9995,-0.0314,-0.006,0.4418,0.9995,-0.0317,-0.0061,0.4352,0.9995,-0.0319,-0.0064,0.4279,0.9995,-0.0321,-0.0066,0.42,0.9995,-0.0322,-0.0067,0.4127,0.9995,-0.0322,-0.0068,0.4067,0.9995,-0.0322,-0.0069,0.4014,0.9995,-0.0321,-0.0069,0.3966,0.9995,-0.0318,-0.0069,0.3941,0.9995,-0.0312,-0.0066,0.3959,0.9995,-0.0302,-0.0061,0.4035,0.9996,-0.0289,-0.0055,0.4155,0.9996,-0.0276,-0.0048,0.4296,0.9996,-0.0264,-0.0042,0.4431,0.9997,-0.0254,-0.0037,0.4566,0.9997,-0.0244,-0.0032,0.4708,0.9997,-0.0236,-0.0028,0.4844,0.9997,-0.0227,-0.0023,0.4959,0.9998,-0.0217,-0.0019,0.505,0.9998,-0.0206,-0.0015,0.5127,0.9998,-0.0197,-0.0011,0.5183,0.9998,-0.0191,-0.0009,0.5216,0.9998,-0.0188,-0.0007,0.5217,0.9998,-0.0187,-0.0007,0.5189,0.9998,-0.0189,-0.0008,0.515,0.9998,-0.0193,-0.001,0.5116,0.9998,-0.0202,-0.0013,0.5083,0.9998,-0.0216,-0.0018,0.5046,0.9997,-0.0229,-0.0023,0.5017,0.9997,-0.0241,-0.0027,0.5007,0.9997,-0.0249,-0.003,0.5025,0.9997,-0.0254,-0.0032,0.5063,0.9997,-0.0259,-0.0033,0.5108,0.9996,-0.0262,-0.0034,0.5148,0.9996,-0.0265,-0.0035,0.5183,0.9996,-0.0267,-0.0036,0.5219,0.9996,-0.0269,-0.0036,0.5252,0.9996,-0.0271,-0.0036,0.5281,0.9996,-0.0272,-0.0037,0.5302,0.9996,-0.0274,-0.0037,0.5319,0.9996,-0.0275,-0.0038,0.5333,0.9996,-0.0276,-0.0038,0.5348,0.9996,-0.0277,-0.0038,0.5365,0.9996,-0.0278,-0.0038,0.5383,0.9996,-0.0278,-0.0038,0.5398,0.9996,-0.0276,-0.0037,0.5407,0.9996,-0.027,-0.0035,0.5407,0.9996,-0.0263,-0.0032,0.5401,0.9997,-0.0255,-0.0028,0.5391,0.9997,-0.0248,-0.0025,0.5381,0.9997,-0.0241,-0.0023,0.537,0.9997,-0.0235,-0.002,0.5357,0.9997,-0.023,-0.0018,0.5344,0.9997,-0.0226,-0.0016,0.5331,0.9997,-0.0226,-0.0016,0.532,0.9997,-0.0227,-0.0016,0.531,0.9997,-0.0229,-0.0017,0.5299,0.9997,-0.023,-0.0018,0.5285,0.9997,-0.0231,-0.0018,0.5265,0.9997,-0.0231,-0.0018,0.5241,0.9997,-0.0231,-0.0018,0.5218,0.9997,-0.0231,-0.0018,0.5203,0.9997,-0.0232,-0.0018,0.5194,0.9997,-0.0233,-0.0019,0.5189,0.9997,-0.0233,-0.0019,0.5191,0.9997,-0.0233,-0.0019,0.5203,0.9997,-0.0234,-0.002,0.5218,0.9997,-0.0236,-0.0021,0.5237,0.9997,-0.0234,-0.0021,0.5274,0.9997,-0.0224,-0.0017,0.5343,0.9998,-0.0201,-0.0008,0.5443,0.9999,-0.0171,0.0005,0.5566,0.9999,-0.0141,0.0017,0.5723,0.9999,-0.0119,0.0026,0.592,0.9999,-0.0108,0.0031,0.6171,0.9999,-0.0102,0.0036,0.6467,0.9999,-0.01,0.0038,0.6786,0.9999,-0.01,0.0039,0.7105,0.9999,-0.0103,0.0038,0.7427,0.9999,-0.0109,0.0036,0.7763,0.9999,-0.0116,0.0034,0.8094,0.9999,-0.0121,0.0032,0.8402,0.9999,-0.0125,0.0031,0.8681,0.9999,-0.0128,0.003,0.8941,0.9999,-0.0131,0.0029,0.9188,0.9999,-0.0133,0.0028,0.9426,0.9999,-0.0136,0.0027,0.9651,0.9999,-0.0137,0.0026,0.9862,0.9999,-0.0139,0.0025,1.0071,0.9999,-0.0141,0.0025,1.0292,0.9999,-0.0142,0.0024,1.0527,0.9999,-0.0144,0.0024,1.0771,0.9999,-0.0145,0.0023,1.1019,0.9999,-0.0146,0.0023,1.1271,0.9999,-0.0148,0.0022,1.154,0.9999,-0.0149,0.0022,1.1822,0.9999,-0.015,0.0021,1.2088,0.9999,-0.0152,0.002,1.2308,0.9999,-0.0154,0.0019,1.248,0.9999,-0.0156,0.0017,1.2617,0.9999,-0.0158,0.0015,1.2715,0.9999,-0.016,0.0013,1.2768,0.9999,-0.0163,0.0011,1.2773,0.9999,-0.0165,0.0009,1.2734,0.9999,-0.0168,0.0006,1.2654,0.9999,-0.0171,0.0003,1.2538,0.9998,-0.0174,0,1.2386,0.9998,-0.0178,-0.0003,1.2198,0.9998,-0.0182,-0.0006,1.197,0.9998,-0.0187,-0.001,1.17,0.9998,-0.0193,-0.0014,1.1373,0.9998,-0.02,-0.0019,1.0994,0.9998,-0.0207,-0.0023,1.0595,0.9998,-0.0213,-0.0027,1.0207,0.9998,-0.0218,-0.003,0.9816,0.9997,-0.0222,-0.0031,0.9413,0.9997,-0.0226,-0.0032,0.9035,0.9997,-0.023,-0.0033,0.8718,0.9997,-0.0233,-0.0034,0.8487,0.9997,-0.0235,-0.0034,0.8317,0.9997,-0.0237,-0.0035,0.8173,0.9997,-0.024,-0.0037,0.8019,0.9997,-0.0245,-0.0039,0.7846,0.9997,-0.0252,-0.0042,0.7673,0.9997,-0.0259,-0.0046,0.7506,0.9996,-0.0268,-0.0051,0.735,0.9996,-0.0279,-0.0057,0.7201,0.9996,-0.0293,-0.0064,0.7059,0.9995,-0.0306,-0.0071,0.6931,0.9995,-0.0316,-0.0077,0.6824,0.9994,-0.0322,-0.0081,0.6747,0.9994,-0.0326,-0.0083,0.6695,0.9994,-0.0327,-0.0085,0.665,0.9994,-0.0326,-0.0085,0.6595,0.9994,-0.0321,-0.0084,0.6528,0.9995,-0.0312,-0.0082,0.6458,0.9995,-0.0304,-0.0079,0.6382,0.9995,-0.0302,-0.0079,0.6301,0.9995,-0.0309,-0.0084,0.6207,0.9994,-0.0322,-0.0092,0.6104,0.9994,-0.0337,-0.0101,0.6004,0.9993,-0.0347,-0.0107,0.5921,0.9993,-0.0349,-0.0111,0.5854,0.9993,-0.0346,-0.0112,0.5799,0.9993,-0.0344,-0.0112,0.5757,0.9993,-0.0345,-0.0114,0.5729,0.9993,-0.0355,-0.0119,0.5725,0.9992,-0.037,-0.0126,0.574,0.9992,-0.0382,-0.013,0.5758,0.9992,-0.0383,-0.013,0.576,0.9992,-0.0367,-0.0123,0.5738,0.9994,-0.034,-0.011,0.5703,0.9995,-0.0309,-0.0095,0.5666,0.9996,-0.0285,-0.0084,0.5639,0.9996,-0.0271,-0.0077,0.5625,0.9996,-0.026,-0.0072,0.5617,0.9997,-0.0252,-0.0068,0.5613,0.9997,-0.0243,-0.0065,0.5611,0.9997,-0.0233,-0.006,0.5612,0.9997,-0.0222,-0.0055,0.5617,0.9998,-0.0213,-0.0052,0.562,0.9998,-0.021,-0.005,0.5617,0.9998,-0.0215,-0.0052,0.5605,0.9997,-0.0226,-0.0056,0.5588,0.9997,-0.0237,-0.0061,0.5568,0.9997,-0.0242,-0.0064,0.5546,0.9997,-0.0235,-0.0063,0.5521,0.9997,-0.0221,-0.006,0.5492,0.9998,-0.0208,-0.0058,0.5463,0.9998,-0.0207,-0.006,0.5436,0.9997,-0.022,-0.0069,0.5416,0.9997,-0.0243,-0.0082,0.5399,0.9996,-0.0271,-0.0097,0.5378,0.9995,-0.0301,-0.0112,0.5345,0.9994,-0.0332,-0.0127,0.5294,0.9992,-0.0368,-0.0145,0.5231,0.999,-0.0405,-0.0163,0.5165,0.9989,-0.0442,-0.0179,0.511,0.9987,-0.048,-0.0194,0.5053,0.9984,-0.0521,-0.0209,0.4992,0.9982,-0.0556,-0.0221,0.4957,0.9981,-0.0575,-0.0225,0.4976,0.9981,-0.057,-0.0218,0.5082,0.9983,-0.055,-0.0204,0.5252,0.9984,-0.0525,-0.0189,0.5428,0.9986,-0.0507,-0.0178,0.5555,0.9986,-0.0498,-0.0171,0.5605,0.9987,-0.0491,-0.0167,0.5612,0.9987,-0.0484,-0.0163,0.5611,0.9987,-0.0476,-0.0158,0.5636,0.9988,-0.0465,-0.0152,0.57,0.9989,-0.0453,-0.0145,0.5785,0.9989,-0.044,-0.0139,0.5871,0.999,-0.0427,-0.0133,0.5942,0.9991,-0.0414,-0.0126,0.5986,0.9991,-0.0398,-0.0118,0.6016,0.9992,-0.0384,-0.0111,0.6044,0.9992,-0.0374,-0.0106,0.6084,0.9993,-0.0367,-0.0102,0.6148,0.9993,-0.0363,-0.01,0.6225,0.9993,-0.0361,-0.0099,0.6298,0.9993,-0.0359,-0.0097,0.6349,0.9993,-0.0358,-0.0096,0.6375,0.9993,-0.0358,-0.0095,0.6386,0.9993,-0.0358,-0.0094,0.6382,0.9993,-0.036,-0.0094,0.6363,0.9993,-0.0362,-0.0094,0.6332,0.9993,-0.0366,-0.0094,0.6288,0.9993,-0.037,-0.0095,0.6226,0.9992,-0.0376,-0.0096,0.6142,0.9992,-0.0384,-0.0098,0.6032,0.9992,-0.0394,-0.01,0.5899,0.9991,-0.0405,-0.0103,0.5749,0.9991,-0.0414,-0.0105,0.5587,0.999,-0.0424,-0.0107,0.5408,0.999,-0.0435,-0.0108,0.5211,0.999,-0.0445,-0.0109,0.501,0.9989,-0.045,-0.0108,0.4818,0.9989,-0.0447,-0.0105,0.465,0.999,-0.0436,-0.0099,0.4496,0.9991,-0.0426,-0.0093,0.433,0.9991,-0.0423,-0.0089,0.4126,0.999,-0.0437,-0.009,0.3841,0.9989,-0.0465,-0.0096,0.3501,0.9987,-0.0497,-0.0103,0.3185,0.9986,-0.0517,-0.0106,0.2971,0.9986,-0.0517,-0.0105,0.2865,0.9987,-0.0505,-0.0103,0.2832,0.9988,-0.0475,-0.0096,0.2883,0.9991,-0.0427,-0.0081,0.3033,0.9993,-0.0361,-0.006,0.3305,0.9996,-0.0292,-0.0039,0.3687,0.9997,-0.023,-0.002,0.4133,0.9998,-0.0183,-0.0003,0.4602,0.9999,-0.0144,0.0015,0.5138,0.9999,-0.011,0.0032,0.5745,1,-0.0086,0.0045,0.6318,1,-0.0074,0.005,0.6748,1,-0.0075,0.005,0.7022,1,-0.0085,0.0046,0.7191,0.9999,-0.0097,0.0041,0.7249,0.9999,-0.0105,0.0037,0.7191,0.9999,-0.011,0.0034,0.6953,0.9999,-0.0114,0.003,0.6559,0.9999,-0.0117,0.0027,0.6133,0.9999,-0.0118,0.0024,0.5802,0.9999,-0.0115,0.0024,0.5574,0.9999,-0.0109,0.0025,0.5392,0.9999,-0.0102,0.0027,0.5275,0.9999,-0.0097,0.0029,0.5246,1,-0.0093,0.0032,0.5325,1,-0.0091,0.0035,0.5497,1,-0.009,0.0037,0.5725,0.9999,-0.0093,0.0037,0.597,0.9999,-0.0101,0.0034,0.6256,0.9999,-0.0112,0.0029,0.6593,0.9999,-0.0123,0.0025,0.6921,0.9999,-0.0132,0.0022,0.7182,0.9999,-0.0138,0.002,0.7344,0.9999,-0.0144,0.0017,0.7443,0.9999,-0.0148,0.0015,0.7526,0.9999,-0.0152,0.0013,0.7641,0.9999,-0.0155,0.0011,0.7816,0.9999,-0.0157,0.001,0.8021,0.9999,-0.0159,0.0009,0.8215,0.9999,-0.0161,0.0008,0.8356,0.9999,-0.0164,0.0007,0.8435,0.9999,-0.0166,0.0005,0.8473,0.9999,-0.0168,0.0004,0.8476,0.9999,-0.017,0.0003,0.845,0.9999,-0.0172,0.0002,0.8381,0.9998,-0.0174,0.0001,0.827,0.9998,-0.0176,0,0.8148,0.9998,-0.0179,-0.0002,0.8045,0.9998,-0.0182,-0.0004,0.7967,0.9998,-0.0186,-0.0006,0.7899,0.9998,-0.019,-0.0008,0.7836,0.9998,-0.0194,-0.001,0.7773,0.9998,-0.0197,-0.0011,0.7716,0.9998,-0.02,-0.0013,0.7666,0.9998,-0.0203,-0.0014,0.7607,0.9998,-0.0206,-0.0015,0.7524,0.9998,-0.0209,-0.0017,0.7408,0.9998,-0.0212,-0.0018,0.7268,0.9998,-0.0215,-0.0019,0.7119,0.9998,-0.0218,-0.002,0.6978,0.9998,-0.0222,-0.0021,0.6843,0.9997,-0.0225,-0.0023,0.6707,0.9997,-0.0229,-0.0024,0.6579,0.9997,-0.0234,-0.0026,0.6468,0.9997,-0.0239,-0.0028,0.6377,0.9997,-0.0244,-0.003,0.63,0.9997,-0.0251,-0.0032,0.6236,0.9997,-0.0258,-0.0035,0.6184,0.9996,-0.0267,-0.0038,0.6141,0.9996,-0.0276,-0.0042,0.6109,0.9996,-0.0286,-0.0046,0.609,0.9996,-0.0295,-0.005,0.6084,0.9995,-0.0302,-0.0053,0.6087,0.9995,-0.0308,-0.0055,0.6101,0.9995,-0.0313,-0.0058,0.6132,0.9995,-0.0317,-0.006,0.6186,0.9995,-0.032,-0.0062,0.6272,0.9995,-0.0323,-0.0064,0.6383,0.9995,-0.0324,-0.0066,0.6506,0.9994,-0.0325,-0.0068,0.6627,0.9994,-0.0326,-0.0069,0.6742,0.9994,-0.0326,-0.007,0.6858,0.9994,-0.0325,-0.0071,0.698,0.9994,-0.0326,-0.0073,0.7113,0.9994,-0.0329,-0.0076,0.7257,0.9994,-0.0333,-0.008,0.741,0.9994,-0.0337,-0.0084,0.7575,0.9994,-0.0336,-0.0085,0.7756,0.9994,-0.0332,-0.0085,0.7958,0.9994,-0.0325,-0.0083,0.8178,0.9995,-0.0317,-0.0081,0.8408,0.9995,-0.031,-0.008,0.8643,0.9995,-0.0304,-0.0079,0.8884,0.9995,-0.0299,-0.0078,0.9134,0.9995,-0.0295,-0.0077,0.9386,0.9995,-0.0291,-0.0077,0.9637,0.9996,-0.0287,-0.0077,0.9885,0.9996,-0.0285,-0.0078,1.0132,0.9996,-0.0282,-0.0078,1.038,0.9996,-0.0279,-0.0078,1.0628,0.9996,-0.0276,-0.0077,1.0884,0.9996,-0.0272,-0.0076,1.1145,0.9996,-0.0268,-0.0075,1.1399,0.9996,-0.0264,-0.0074,1.1635,0.9996,-0.0261,-0.0073,1.1852,0.9996,-0.0257,-0.0071,1.2055,0.9997,-0.0254,-0.007,1.2242,0.9997,-0.0251,-0.0069,1.2408,0.9997,-0.0249,-0.0067,1.2555,0.9997,-0.0246,-0.0066,1.2683,0.9997,-0.0244,-0.0065,1.2791,0.9997,-0.0242,-0.0064,1.2881,0.9997,-0.0241,-0.0063,1.2954,0.9997,-0.024,-0.0062,1.301,0.9997,-0.024,-0.0062,1.3043,0.9997,-0.0239,-0.0062,1.3049,0.9997,-0.024,-0.0062,1.3019,0.9997,-0.0241,-0.0063,1.2959,0.9997,-0.0242,-0.0063,1.2882,0.9997,-0.0243,-0.0064,1.28,0.9997,-0.0244,-0.0064,1.2717,0.9997,-0.0246,-0.0065,1.2626,0.9997,-0.0247,-0.0065,1.2525,0.9997,-0.0248,-0.0066,1.2413,0.9997,-0.0249,-0.0066,1.2286,0.9997,-0.025,-0.0066,1.2145,0.9997,-0.0251,-0.0066,1.1999,0.9997,-0.0252,-0.0066,1.1856,0.9997,-0.0253,-0.0066,1.171,0.9997,-0.0254,-0.0065,1.1561,0.9997,-0.0255,-0.0065,1.1418,0.9997,-0.0256,-0.0065,1.1292,0.9996,-0.0257,-0.0065,1.1186,0.9996,-0.0257,-0.0065,1.1093,0.9996,-0.0258,-0.0065,1.1013,0.9996,-0.0259,-0.0065,1.0945,0.9996,-0.026,-0.0065,1.089,0.9996,-0.0261,-0.0066,1.0848,0.9996,-0.0262,-0.0066,1.0818,0.9996,-0.0263,-0.0066,1.0802,0.9996,-0.0263,-0.0067,1.0805,0.9996,-0.0263,-0.0067,1.0824,0.9996,-0.0263,-0.0067,1.0849,0.9996,-0.0262,-0.0067,1.0871,0.9996,-0.0262,-0.0067,1.089,0.9996,-0.0262,-0.0067,1.0911,0.9996,-0.0262,-0.0067,1.0927,0.9996,-0.0262,-0.0067,1.0934,0.9996,-0.0262,-0.0067,1.0927,0.9996,-0.0261,-0.0066,1.091,0.9996,-0.0261,-0.0066,1.0888,0.9996,-0.0261,-0.0065,1.0864,0.9996,-0.026,-0.0065,1.0837,0.9996,-0.0259,-0.0064,1.0806,0.9996,-0.0258,-0.0063,1.0775,0.9996,-0.0258,-0.0062,1.075,0.9996,-0.0258,-0.0062,1.0736,0.9996,-0.0258,-0.0063,1.0728,0.9996,-0.0259,-0.0063,1.0719,0.9996,-0.026,-0.0063,1.0704,0.9996,-0.026,-0.0064,1.0681,0.9996,-0.0262,-0.0065,1.0653,0.9996,-0.0263,-0.0065,1.0621,0.9996,-0.0263,-0.0065,1.0587,0.9996,-0.0263,-0.0065,1.0547,0.9996,-0.0263,-0.0065,1.0501,0.9996,-0.0263,-0.0064,1.0458,0.9996,-0.0262,-0.0063,1.0423,0.9996,-0.0262,-0.0063,1.04,0.9996,-0.0262,-0.0063,1.0385,0.9996,-0.0261,-0.0062,1.0375,0.9996,-0.0261,-0.0062,1.0366,0.9996,-0.0261,-0.0062,1.036,0.9996,-0.026,-0.0062,1.0358,0.9996,-0.026,-0.0061,1.0356,0.9996,-0.026,-0.0061,1.035,0.9996,-0.0259,-0.0061,1.0343,0.9996,-0.0258,-0.006,1.0334,0.9997,-0.0258,-0.0059,1.0321,0.9997,-0.0257,-0.0059,1.0301,0.9997,-0.0257,-0.0059,1.0273,0.9997,-0.0258,-0.0059,1.0239,0.9996,-0.0258,-0.0059,1.02,0.9996,-0.0259,-0.0059,1.0155,0.9996,-0.0259,-0.0059,1.0104,0.9996,-0.026,-0.0059,1.0046,0.9996,-0.026,-0.0059,0.9986,0.9996,-0.0261,-0.0059,0.9927,0.9996,-0.0261,-0.0059,0.9868,0.9996,-0.0262,-0.0059,0.9809,0.9996,-0.0262,-0.0059,0.9751,0.9996,-0.0263,-0.0059,0.9697,0.9996,-0.0263,-0.0059,0.9648,0.9996,-0.0263,-0.0058,0.9603,0.9996,-0.0263,-0.0058,0.9561,0.9996,-0.0263,-0.0058,0.9521,0.9996,-0.0264,-0.0058,0.9483,0.9996,-0.0264,-0.0058,0.9448,0.9996,-0.0264,-0.0058,0.9415,0.9996,-0.0264,-0.0058,0.9384,0.9996,-0.0264,-0.0057,0.9356,0.9996,-0.0263,-0.0056,0.9332,0.9996,-0.0262,-0.0056,0.9309,0.9996,-0.0262,-0.0055,0.9289,0.9996,-0.0262,-0.0055,0.9271,0.9996,-0.0262,-0.0055,0.9254,0.9996,-0.0262,-0.0055,0.9241,0.9996,-0.0262,-0.0055,0.9231,0.9996,-0.0262,-0.0055,0.9225,0.9996,-0.0261,-0.0054,0.9223,0.9996,-0.026,-0.0053,0.9224,0.9996,-0.026,-0.0053,0.9224,0.9996,-0.0259,-0.0053,0.9224,0.9997,-0.0259,-0.0053,0.9225,0.9997,-0.0259,-0.0053,0.9227,0.9997,-0.0259,-0.0053,0.9229,0.9997,-0.0259,-0.0053,0.9233,0.9996,-0.0259,-0.0053,0.9237,0.9996,-0.0259,-0.0053,0.9243,0.9996,-0.026,-0.0054,0.9248,0.9996,-0.026,-0.0054,0.9253,0.9996,-0.026,-0.0054,0.9259,0.9996,-0.026,-0.0054,0.9265,0.9996,-0.026,-0.0054,0.9272,0.9996,-0.026,-0.0054,0.9279,0.9996,-0.026,-0.0054,0.9286,0.9996,-0.026,-0.0054,0.9295,0.9996,-0.026,-0.0054,0.9305,0.9996,-0.0259,-0.0054,0.9318,0.9997,-0.0258,-0.0053,0.9332,0.9997,-0.0257,-0.0053,0.9347,0.9997,-0.0256,-0.0052,0.9364,0.9997,-0.0256,-0.0052,0.9382,0.9997,-0.0256,-0.0053,0.9402,0.9997,-0.0257,-0.0053,0.9423,0.9997,-0.0257,-0.0053,0.9445,0.9997,-0.0257,-0.0053,0.947,0.9997,-0.0256,-0.0053,0.9498,0.9997,-0.0255,-0.0053,0.9524,0.9997,-0.0255,-0.0052,0.9546,0.9997,-0.0255,-0.0052,0.9563,0.9997,-0.0255,-0.0052,0.9576,0.9997,-0.0255,-0.0052,0.9586,0.9997,-0.0255,-0.0052,0.9594,0.9997,-0.0254,-0.0052,0.9599,0.9997,-0.0253,-0.0052,0.96,0.9997,-0.0253,-0.0051,0.9601,0.9997,-0.0252,-0.0051,0.9607,0.9997,-0.0252,-0.0051,0.9619,0.9997,-0.0252,-0.0051,0.9635,0.9997,-0.0252,-0.0051,0.9651,0.9997,-0.0252,-0.0051,0.9666,0.9997,-0.0252,-0.0051,0.9679,0.9997,-0.0252,-0.0052,0.969,0.9997,-0.0253,-0.0052,0.9701,0.9997,-0.0253,-0.0052,0.9711,0.9997,-0.0253,-0.0053,0.972,0.9997,-0.0253,-0.0053,0.9729,0.9997,-0.0253,-0.0053,0.9736,0.9997,-0.0253,-0.0053,0.9741,0.9997,-0.0253,-0.0053,0.9743,0.9997,-0.0253,-0.0052,0.9744,0.9997,-0.0252,-0.0052,0.9743,0.9997,-0.0252,-0.0052,0.974,0.9997,-0.0252,-0.0052,0.9735,0.9997,-0.0251,-0.0051,0.9727,0.9997,-0.0251,-0.0051,0.9718,0.9997,-0.0251,-0.0051,0.9708,0.9997,-0.025,-0.005,0.9699,0.9997,-0.025,-0.005,0.9689,0.9997,-0.0249,-0.005,0.9678,0.9997,-0.0249,-0.0049,0.9666,0.9997,-0.0249,-0.0049,0.9653,0.9997,-0.0248,-0.0048,0.9639,0.9997,-0.0248,-0.0048,0.9624,0.9997,-0.0248,-0.0048,0.961,0.9997,-0.0248,-0.0048,0.9594,0.9997,-0.0248,-0.0048,0.9578,0.9997,-0.0248,-0.0048,0.9563,0.9997,-0.0248,-0.0048,0.9552,0.9997,-0.0248,-0.0048,0.9545,0.9997,-0.0248,-0.0048,0.9542,0.9997,-0.0248,-0.0048,0.9541,0.9997,-0.0248,-0.0048,0.9538,0.9997,-0.0248,-0.0048,0.9533,0.9997,-0.0248,-0.0048,0.9527,0.9997,-0.0248,-0.0048,0.9522,0.9997,-0.0249,-0.0048,0.952,0.9997,-0.0249,-0.0048,0.9523,0.9997,-0.0249,-0.0048,0.9528,0.9997,-0.0249,-0.0048,0.9534,0.9997,-0.0249,-0.0048,0.954,0.9997,-0.0248,-0.0048,0.9544,0.9997,-0.0248,-0.0048,0.9547,0.9997,-0.0248,-0.0048,0.9551,0.9997,-0.0248,-0.0048,0.956,0.9997,-0.0248,-0.0048,0.9576,0.9997,-0.0247,-0.0048,0.9596,0.9997,-0.0247,-0.0048,0.9617,0.9997,-0.0247,-0.0047,0.9637,0.9997,-0.0246,-0.0047,0.9653,0.9997,-0.0246,-0.0047,0.9666,0.9997,-0.0246,-0.0047,0.9683,0.9997,-0.0246,-0.0047,0.9706,0.9997,-0.0246,-0.0047,0.9737,0.9997,-0.0246,-0.0048,0.9773,0.9997,-0.0246,-0.0048,0.9815,0.9997,-0.0247,-0.0049,0.9862,0.9997,-0.0247,-0.0049,0.9918,0.9997,-0.0247,-0.005,0.998,0.9997,-0.0248,-0.0051,1.0045,0.9997,-0.0248,-0.0051,1.0107,0.9997,-0.0249,-0.0052,1.0167,0.9997,-0.0249,-0.0053,1.0227,0.9997,-0.025,-0.0054,1.0285,0.9997,-0.025,-0.0054,1.0338,0.9997,-0.025,-0.0054,1.0383,0.9997,-0.025,-0.0054,1.0423,0.9997,-0.0249,-0.0054,1.0463]);
Group704ZZZ.children[45] = OrientationInterpolator750;

let OrientationInterpolator751 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator751.DEF = "Interpolator43_lFoot";
OrientationInterpolator751.key = new X3D.MFFloat([0,0.0017,0.0034,0.0051,0.0068,0.0085,0.0102,0.0118,0.0135,0.0152,0.0169,0.0186,0.0203,0.022,0.0237,0.0254,0.0271,0.0288,0.0305,0.0321,0.0338,0.0355,0.0372,0.0389,0.0406,0.0423,0.044,0.0457,0.0474,0.0491,0.0508,0.0525,0.0541,0.0558,0.0575,0.0592,0.0609,0.0626,0.0643,0.066,0.0677,0.0694,0.0711,0.0728,0.0745,0.0761,0.0778,0.0795,0.0812,0.0829,0.0846,0.0863,0.088,0.0897,0.0914,0.0931,0.0948,0.0964,0.0981,0.0998,0.1015,0.1032,0.1049,0.1066,0.1083,0.11,0.1117,0.1134,0.1151,0.1168,0.1184,0.1201,0.1218,0.1235,0.1252,0.1269,0.1286,0.1303,0.132,0.1337,0.1354,0.1371,0.1387,0.1404,0.1421,0.1438,0.1455,0.1472,0.1489,0.1506,0.1523,0.154,0.1557,0.1574,0.1591,0.1607,0.1624,0.1641,0.1658,0.1675,0.1692,0.1709,0.1726,0.1743,0.176,0.1777,0.1794,0.181,0.1827,0.1844,0.1861,0.1878,0.1895,0.1912,0.1929,0.1946,0.1963,0.198,0.1997,0.2014,0.203,0.2047,0.2064,0.2081,0.2098,0.2115,0.2132,0.2149,0.2166,0.2183,0.22,0.2217,0.2234,0.225,0.2267,0.2284,0.2301,0.2318,0.2335,0.2352,0.2369,0.2386,0.2403,0.242,0.2437,0.2453,0.247,0.2487,0.2504,0.2521,0.2538,0.2555,0.2572,0.2589,0.2606,0.2623,0.264,0.2657,0.2673,0.269,0.2707,0.2724,0.2741,0.2758,0.2775,0.2792,0.2809,0.2826,0.2843,0.286,0.2876,0.2893,0.291,0.2927,0.2944,0.2961,0.2978,0.2995,0.3012,0.3029,0.3046,0.3063,0.308,0.3096,0.3113,0.313,0.3147,0.3164,0.3181,0.3198,0.3215,0.3232,0.3249,0.3266,0.3283,0.3299,0.3316,0.3333,0.335,0.3367,0.3384,0.3401,0.3418,0.3435,0.3452,0.3469,0.3486,0.3503,0.3519,0.3536,0.3553,0.357,0.3587,0.3604,0.3621,0.3638,0.3655,0.3672,0.3689,0.3706,0.3723,0.3739,0.3756,0.3773,0.379,0.3807,0.3824,0.3841,0.3858,0.3875,0.3892,0.3909,0.3926,0.3942,0.3959,0.3976,0.3993,0.401,0.4027,0.4044,0.4061,0.4078,0.4095,0.4112,0.4129,0.4146,0.4162,0.4179,0.4196,0.4213,0.423,0.4247,0.4264,0.4281,0.4298,0.4315,0.4332,0.4349,0.4365,0.4382,0.4399,0.4416,0.4433,0.445,0.4467,0.4484,0.4501,0.4518,0.4535,0.4552,0.4569,0.4585,0.4602,0.4619,0.4636,0.4653,0.467,0.4687,0.4704,0.4721,0.4738,0.4755,0.4772,0.4788,0.4805,0.4822,0.4839,0.4856,0.4873,0.489,0.4907,0.4924,0.4941,0.4958,0.4975,0.4992,0.5008,0.5025,0.5042,0.5059,0.5076,0.5093,0.511,0.5127,0.5144,0.5161,0.5178,0.5195,0.5212,0.5228,0.5245,0.5262,0.5279,0.5296,0.5313,0.533,0.5347,0.5364,0.5381,0.5398,0.5415,0.5431,0.5448,0.5465,0.5482,0.5499,0.5516,0.5533,0.555,0.5567,0.5584,0.5601,0.5618,0.5635,0.5651,0.5668,0.5685,0.5702,0.5719,0.5736,0.5753,0.577,0.5787,0.5804,0.5821,0.5838,0.5854,0.5871,0.5888,0.5905,0.5922,0.5939,0.5956,0.5973,0.599,0.6007,0.6024,0.6041,0.6058,0.6074,0.6091,0.6108,0.6125,0.6142,0.6159,0.6176,0.6193,0.621,0.6227,0.6244,0.6261,0.6277,0.6294,0.6311,0.6328,0.6345,0.6362,0.6379,0.6396,0.6413,0.643,0.6447,0.6464,0.6481,0.6497,0.6514,0.6531,0.6548,0.6565,0.6582,0.6599,0.6616,0.6633,0.665,0.6667,0.6684,0.6701,0.6717,0.6734,0.6751,0.6768,0.6785,0.6802,0.6819,0.6836,0.6853,0.687,0.6887,0.6904,0.692,0.6937,0.6954,0.6971,0.6988,0.7005,0.7022,0.7039,0.7056,0.7073,0.709,0.7107,0.7124,0.714,0.7157,0.7174,0.7191,0.7208,0.7225,0.7242,0.7259,0.7276,0.7293,0.731,0.7327,0.7343,0.736,0.7377,0.7394,0.7411,0.7428,0.7445,0.7462,0.7479,0.7496,0.7513,0.753,0.7547,0.7563,0.758,0.7597,0.7614,0.7631,0.7648,0.7665,0.7682,0.7699,0.7716,0.7733,0.775,0.7766,0.7783,0.78,0.7817,0.7834,0.7851,0.7868,0.7885,0.7902,0.7919,0.7936,0.7953,0.797,0.7986,0.8003,0.802,0.8037,0.8054,0.8071,0.8088,0.8105,0.8122,0.8139,0.8156,0.8173,0.819,0.8206,0.8223,0.824,0.8257,0.8274,0.8291,0.8308,0.8325,0.8342,0.8359,0.8376,0.8393,0.8409,0.8426,0.8443,0.846,0.8477,0.8494,0.8511,0.8528,0.8545,0.8562,0.8579,0.8596,0.8613,0.8629,0.8646,0.8663,0.868,0.8697,0.8714,0.8731,0.8748,0.8765,0.8782,0.8799,0.8816,0.8832,0.8849,0.8866,0.8883,0.89,0.8917,0.8934,0.8951,0.8968,0.8985,0.9002,0.9019,0.9036,0.9052,0.9069,0.9086,0.9103,0.912,0.9137,0.9154,0.9171,0.9188,0.9205,0.9222,0.9239,0.9255,0.9272,0.9289,0.9306,0.9323,0.934,0.9357,0.9374,0.9391,0.9408,0.9425,0.9442,0.9459,0.9475,0.9492,0.9509,0.9526,0.9543,0.956,0.9577,0.9594,0.9611,0.9628,0.9645,0.9662,0.9679,0.9695,0.9712,0.9729,0.9746,0.9763,0.978,0.9797,0.9814,0.9831,0.9848,0.9865,0.9882,0.9898,0.9915,0.9932,0.9949,0.9966,0.9983,1]);
OrientationInterpolator751.keyValue = new X3D.MFRotation([0.9834,-0.0362,0.178,0.047,-0.8445,0.5229,0.1157,0.2224,-0.8712,0.4681,0.1479,0.5033,-0.8723,0.4498,0.1918,0.7471,-0.8638,0.4507,0.2252,0.8987,-0.8443,0.4788,0.2405,0.9221,-0.8108,0.5332,0.2413,0.8569,-0.7616,0.6044,0.234,0.7618,-0.7083,0.6688,0.226,0.6919,-0.6656,0.7133,0.2197,0.6526,-0.6247,0.7515,0.2119,0.6164,-0.5846,0.7854,0.2035,0.5835,-0.5437,0.8163,0.195,0.5552,-0.5052,0.8425,0.1869,0.5319,-0.4717,0.8633,0.1796,0.5121,-0.4394,0.8816,0.1724,0.4939,-0.4027,0.9004,0.1645,0.4762,-0.356,0.9216,0.1547,0.4571,-0.3023,0.9423,0.1435,0.4383,-0.2503,0.959,0.1329,0.4229,-0.2121,0.9692,0.1253,0.4133,-0.1948,0.9733,0.1218,0.4095,-0.1939,0.9735,0.1216,0.4095,-0.2049,0.9709,0.1237,0.4124,-0.2228,0.9666,0.127,0.4171,-0.2503,0.9591,0.132,0.4242,-0.287,0.9478,0.1387,0.4346,-0.3239,0.9348,0.1457,0.4471,-0.3538,0.9229,0.1518,0.4602,-0.3755,0.9134,0.1569,0.4741,-0.3932,0.9051,0.1617,0.4893,-0.4085,0.8975,0.1662,0.5039,-0.4231,0.8899,0.1704,0.5163,-0.4345,0.8837,0.1738,0.5255,-0.4435,0.8787,0.1766,0.5324,-0.4559,0.8717,0.1797,0.5386,-0.4769,0.8595,0.1839,0.5458,-0.5103,0.8388,0.1896,0.5553,-0.5507,0.8114,0.1958,0.5669,-0.59,0.782,0.2009,0.5795,-0.6218,0.756,0.2043,0.5914,-0.6467,0.7343,0.2064,0.6021,-0.6681,0.7145,0.2076,0.6122,-0.6859,0.6973,0.208,0.6206,-0.7001,0.6832,0.2077,0.6261,-0.7119,0.6712,0.2065,0.6276,-0.7218,0.6612,0.2045,0.6258,-0.7277,0.6554,0.2024,0.6221,-0.7277,0.6558,0.2007,0.6179,-0.7201,0.6646,0.1995,0.6127,-0.7057,0.6802,0.1983,0.6062,-0.6869,0.6995,0.1973,0.6002,-0.6666,0.7191,0.1964,0.5965,-0.644,0.7395,0.196,0.5966,-0.6183,0.7612,0.1956,0.5996,-0.5923,0.7818,0.1949,0.603,-0.5689,0.7993,0.1937,0.6041,-0.5481,0.814,0.1922,0.6016,-0.5286,0.8272,0.1907,0.597,-0.5106,0.8387,0.1891,0.5914,-0.4951,0.8483,0.1877,0.5861,-0.4855,0.8541,0.1868,0.5811,-0.4805,0.8569,0.1866,0.5758,-0.4739,0.8607,0.1859,0.57,-0.4587,0.8694,0.1838,0.5639,-0.4263,0.8868,0.1784,0.5575,-0.3812,0.9087,0.1703,0.5517,-0.3377,0.9273,0.1617,0.5473,-0.3115,0.9374,0.1561,0.5438,-0.3051,0.9398,0.154,0.5386,-0.3117,0.9376,0.1543,0.5321,-0.3336,0.9294,0.1577,0.5276,-0.3719,0.9136,0.1647,0.5291,-0.4329,0.884,0.1764,0.5408,-0.5067,0.8409,0.1903,0.5627,-0.5735,0.7939,0.2021,0.5902,-0.6219,0.7544,0.2101,0.6156,-0.6512,0.7277,0.2152,0.636,-0.6711,0.7082,0.2193,0.654,-0.6892,0.6897,0.2223,0.669,-0.7117,0.6659,0.2237,0.6812,-0.7424,0.6321,0.2222,0.69,-0.7763,0.5915,0.2177,0.6968,-0.8074,0.5509,0.2114,0.7036,-0.8304,0.5178,0.2056,0.7116,-0.8443,0.4963,0.2019,0.7198,-0.8532,0.4818,0.1996,0.7272,-0.8603,0.4699,0.1976,0.7336,-0.8684,0.456,0.1947,0.7391,-0.8772,0.4405,0.191,0.7447,-0.8856,0.4251,0.1872,0.7499,-0.8948,0.4076,0.182,0.7534,-0.906,0.3856,0.1744,0.7543,-0.9205,0.3551,0.1628,0.752,-0.9366,0.3177,0.1476,0.7481,-0.9511,0.2795,0.1315,0.7437,-0.9618,0.2473,0.1175,0.7394,-0.9693,0.2217,0.1059,0.7334,-0.9752,0.1996,0.0957,0.7255,-0.9793,0.1825,0.0877,0.7177,-0.9816,0.1721,0.0828,0.7118,-0.9815,0.1726,0.0827,0.7075,-0.9794,0.1823,0.0865,0.704,-0.9767,0.1941,0.0913,0.702,-0.9751,0.2008,0.0942,0.7023,-0.976,0.1969,0.093,0.7077,-0.9782,0.1874,0.0899,0.717,-0.9795,0.1814,0.0879,0.7243,-0.9782,0.1871,0.0904,0.7235,-0.9735,0.2069,0.0978,0.7127,-0.9654,0.2372,0.1084,0.6958,-0.9527,0.2782,0.122,0.6757,-0.934,0.3295,0.1378,0.6559,-0.9065,0.3921,0.1564,0.6426,-0.8679,0.4645,0.1761,0.6349,-0.8165,0.5442,0.193,0.6249,-0.7475,0.6324,0.2035,0.6047,-0.6337,0.7462,0.2041,0.5735,-0.4605,0.8679,0.1863,0.5493,-0.2665,0.9521,0.1501,0.5403,-0.111,0.9874,0.1127,0.5334,-0.0049,0.9963,0.0862,0.504,0.0842,0.9941,0.068,0.4534,0.1607,0.9853,0.0575,0.3973,0.2156,0.975,0.0538,0.3522,0.2197,0.9738,0.0594,0.318,0.1624,0.9839,0.0747,0.2856,0.0594,0.9938,0.094,0.2587,-0.0555,0.9923,0.1109,0.2399,-0.1669,0.9782,0.1234,0.2303,-0.2815,0.9502,0.1334,0.23,-0.3879,0.9109,0.1404,0.2352,-0.4831,0.8635,0.1449,0.2419,-0.5677,0.81,0.1467,0.2493,-0.6403,0.754,0.1464,0.2588,-0.7012,0.6982,0.1444,0.2701,-0.7511,0.6448,0.1415,0.2831,-0.7939,0.5923,0.1375,0.2973,-0.8298,0.542,0.1328,0.3127,-0.8563,0.5002,0.1286,0.3287,-0.8727,0.4718,0.126,0.3444,-0.8803,0.4575,0.1256,0.3585,-0.8825,0.4529,0.1269,0.3712,-0.8809,0.4551,0.1296,0.384,-0.877,0.4615,0.1336,0.3984,-0.8702,0.4726,0.1392,0.4151,-0.8605,0.488,0.146,0.4334,-0.8498,0.5043,0.1534,0.4524,-0.8396,0.5189,0.1604,0.4715,-0.8303,0.5316,0.167,0.4899,-0.8211,0.5438,0.1735,0.5083,-0.8117,0.5555,0.1802,0.5274,-0.8023,0.5668,0.1871,0.5482,-0.792,0.5787,0.1946,0.571,-0.7812,0.5906,0.2025,0.5953,-0.7716,0.6003,0.2102,0.6206,-0.7651,0.6062,0.2173,0.6462,-0.7616,0.6079,0.2244,0.6747,-0.7602,0.607,0.2316,0.7054,-0.7602,0.6047,0.2377,0.7327,-0.7609,0.6022,0.2417,0.7512,-0.7645,0.5973,0.2425,0.7594,-0.7705,0.5901,0.2411,0.7601,-0.7746,0.5857,0.2386,0.7548,-0.7728,0.5891,0.2362,0.7444,-0.7627,0.603,0.2338,0.7267,-0.7457,0.625,0.2307,0.7024,-0.7229,0.6525,0.2272,0.6768,-0.6964,0.6819,0.2237,0.6551,-0.6643,0.7143,0.2204,0.6387,-0.6251,0.7499,0.2164,0.6256,-0.5842,0.7837,0.2111,0.6153,-0.5476,0.8113,0.205,0.6063,-0.518,0.8321,0.1984,0.5973,-0.493,0.8486,0.1917,0.5885,-0.4718,0.862,0.1855,0.5807,-0.4533,0.8729,0.1805,0.5746,-0.4414,0.8796,0.1774,0.5687,-0.436,0.8825,0.1761,0.5628,-0.4295,0.8859,0.1753,0.56,-0.4141,0.8935,0.1736,0.5635,-0.3754,0.9115,0.1682,0.5773,-0.324,0.9325,0.1597,0.6002,-0.2882,0.9452,0.1533,0.6249,-0.2911,0.9439,0.156,0.642,-0.3524,0.9197,0.173,0.6481,-0.45,0.8712,0.1962,0.654,-0.543,0.8119,0.2142,0.6668,-0.5985,0.7694,0.2232,0.6829,-0.608,0.7612,0.2256,0.6942,-0.5936,0.7727,0.2248,0.7014,-0.5749,0.7872,0.2233,0.7086,-0.5711,0.7896,0.2243,0.7191,-0.5977,0.7676,0.2313,0.7399,-0.6371,0.7323,0.2405,0.7689,-0.6651,0.7049,0.2467,0.7923,-0.6642,0.7055,0.2471,0.7938,-0.6186,0.7486,0.2385,0.7648,-0.5298,0.8195,0.2187,0.7216,-0.4123,0.8914,0.1882,0.6824,-0.3003,0.941,0.1558,0.6548,-0.21,0.9692,0.1285,0.633,-0.1253,0.9868,0.1029,0.6124,-0.045,0.9958,0.0795,0.5921,0.0329,0.9978,0.0583,0.572,0.1172,0.9924,0.0375,0.5485,0.206,0.9784,0.0188,0.5224,0.2807,0.9598,0.0065,0.4982,0.3185,0.9479,0.004,0.4773,0.2772,0.9607,0.0172,0.4625,0.171,0.9843,0.043,0.454,0.0651,0.9954,0.0696,0.4445,0.0255,0.9961,0.0849,0.4154,0.1243,0.9887,0.0841,0.3488,0.3972,0.9141,0.0813,0.2719,0.7484,0.6569,0.0917,0.2304,0.9257,0.3606,0.1144,0.2206,0.9649,0.2158,0.1498,0.1973,0.9638,0.1638,0.2102,0.1552,0.9275,0.1707,0.3326,0.105,0.7903,0.1597,0.5915,0.0622,0.1849,0.0022,0.9827,0.039,-0.6687,-0.1232,0.7333,0.054,-0.8851,-0.12,0.4497,0.0905,-0.9436,-0.0997,0.3157,0.1314,-0.967,-0.0953,0.2365,0.1766,-0.9783,-0.0919,0.1855,0.2247,-0.9854,-0.066,0.157,0.2689,-0.989,-0.0048,0.1479,0.3036,-0.9822,0.1054,0.1554,0.3284,-0.955,0.2428,0.1704,0.3514,-0.9098,0.3717,0.1847,0.3771,-0.8628,0.4665,0.1946,0.4045,-0.8182,0.5382,0.2023,0.4306,-0.7717,0.6009,0.2086,0.4557,-0.7325,0.6467,0.2127,0.4787,-0.7095,0.671,0.2153,0.4976,-0.7083,0.6716,0.2174,0.5122,-0.7215,0.6568,0.2192,0.5224,-0.7391,0.6367,0.2199,0.5261,-0.7527,0.6208,0.2193,0.5208,-0.7616,0.6106,0.2172,0.5009,-0.7709,0.5998,0.2143,0.4692,-0.7806,0.5879,0.212,0.436,-0.7901,0.5756,0.2108,0.4113,-0.7994,0.5627,0.2104,0.3978,-0.8083,0.55,0.21,0.39,-0.8149,0.5403,0.2098,0.3861,-0.8176,0.5361,0.2098,0.384,-0.8154,0.5394,0.2101,0.3838,-0.8091,0.5485,0.2107,0.3865,-0.8007,0.5606,0.2113,0.3908,-0.7918,0.573,0.2117,0.3958,-0.7825,0.5853,0.2122,0.4016,-0.7723,0.5987,0.2126,0.4087,-0.7614,0.6124,0.2128,0.4163,-0.7503,0.6261,0.2124,0.4237,-0.7409,0.6376,0.2113,0.4309,-0.7323,0.6479,0.2096,0.4382,-0.7209,0.6611,0.208,0.4454,-0.7026,0.6809,0.2066,0.4524,-0.6716,0.7118,0.2057,0.4629,-0.6316,0.7479,0.2041,0.4767,-0.5927,0.78,0.201,0.4873,-0.5632,0.8027,0.196,0.4871,-0.548,0.8148,0.1892,0.4697,-0.5408,0.8214,0.1812,0.44,-0.5324,0.8287,0.1727,0.4069,-0.5115,0.8434,0.1645,0.3795,-0.472,0.8677,0.156,0.359,-0.4172,0.8969,0.1465,0.3417,-0.3507,0.9265,0.1362,0.33,-0.2795,0.9519,0.1257,0.3255,-0.2128,0.9702,0.1159,0.3312,-0.1523,0.9826,0.1064,0.3451,-0.0936,0.9909,0.0966,0.3617,-0.0291,0.9959,0.0852,0.3761,0.0407,0.9965,0.0728,0.3894,0.1115,0.992,0.0597,0.404,0.1881,0.9811,0.0445,0.4178,0.2756,0.9609,0.026,0.4294,0.3897,0.9209,0.0004,0.4456,0.5119,0.8586,-0.0277,0.4702,0.6124,0.7891,-0.0484,0.4924,0.6826,0.7287,-0.0561,0.4951,0.7419,0.6687,-0.0489,0.46,0.807,0.5897,-0.0316,0.3988,0.8655,0.5007,-0.0118,0.3354,0.8923,0.4514,0.0021,0.2898,0.8507,0.5256,0.0084,0.2639,0.7228,0.6909,0.0153,0.2543,0.5522,0.8333,0.0254,0.2641,0.4329,0.9008,0.0339,0.2779,0.3894,0.9204,0.0359,0.2862,0.3877,0.9212,0.0327,0.2929,0.4113,0.9111,0.0277,0.295,0.4463,0.8945,0.0241,0.2899,0.5221,0.8527,0.02,0.2767,0.6386,0.7694,0.0159,0.2608,0.7386,0.6739,0.0173,0.2445,0.7758,0.6305,0.0264,0.2209,0.707,0.7055,0.0494,0.1806,0.4363,0.8949,0.0944,0.1375,-0.1128,0.9838,0.139,0.1255,-0.5172,0.8436,0.1441,0.1494,-0.6884,0.7123,0.1371,0.1838,-0.768,0.6268,0.1319,0.2221,-0.8066,0.5766,0.13,0.2595,-0.8264,0.5478,0.1305,0.2934,-0.8339,0.5358,0.1326,0.3221,-0.8328,0.5366,0.1361,0.3461,-0.8276,0.5434,0.1405,0.3679,-0.8217,0.551,0.1456,0.3901,-0.8147,0.5597,0.1516,0.4138,-0.8058,0.5707,0.1583,0.4378,-0.7966,0.5815,0.1649,0.4603,-0.7887,0.5906,0.1707,0.4798,-0.7817,0.5984,0.1755,0.4948,-0.7749,0.6061,0.1796,0.5066,-0.7686,0.6129,0.1835,0.5174,-0.7633,0.6182,0.1873,0.5298,-0.7595,0.6217,0.1915,0.5448,-0.7566,0.6239,0.1957,0.561,-0.7543,0.6254,0.1997,0.5769,-0.752,0.627,0.2032,0.5909,-0.75,0.6284,0.2062,0.6027,-0.7484,0.6296,0.2087,0.613,-0.7466,0.631,0.211,0.6223,-0.7441,0.6331,0.2133,0.6315,-0.7406,0.6365,0.2156,0.6403,-0.7364,0.6406,0.2178,0.6485,-0.7321,0.6447,0.22,0.6566,-0.7284,0.6482,0.2221,0.6646,-0.7248,0.6515,0.2242,0.6725,-0.7211,0.6549,0.2262,0.6802,-0.7185,0.6571,0.2281,0.688,-0.7179,0.6571,0.23,0.6964,-0.7194,0.6548,0.2317,0.7053,-0.7225,0.6508,0.2334,0.7144,-0.727,0.6452,0.235,0.7243,-0.7324,0.6383,0.2368,0.7352,-0.7399,0.629,0.2387,0.7484,-0.7488,0.6176,0.2406,0.7634,-0.757,0.6068,0.2424,0.778,-0.7628,0.5989,0.244,0.7901,-0.7656,0.5947,0.2454,0.7988,-0.7667,0.5928,0.2466,0.8053,-0.7669,0.592,0.2477,0.8104,-0.7672,0.5913,0.2486,0.8149,-0.7678,0.5901,0.2494,0.819,-0.7684,0.5892,0.25,0.8223,-0.7683,0.5891,0.2506,0.8246,-0.7669,0.5905,0.2512,0.8257,-0.763,0.5952,0.2522,0.8262,-0.757,0.6022,0.2535,0.826,-0.7517,0.6085,0.2542,0.8241,-0.7499,0.611,0.2534,0.8194,-0.7534,0.6078,0.2507,0.8108,-0.7605,0.6007,0.2465,0.7992,-0.7687,0.5923,0.2416,0.7864,-0.7755,0.5852,0.237,0.774,-0.781,0.5795,0.2329,0.7622,-0.7862,0.574,0.2288,0.7501,-0.7902,0.5701,0.225,0.738,-0.7917,0.5692,0.2219,0.7262,-0.7897,0.5728,0.2197,0.7138,-0.7847,0.5802,0.2182,0.7012,-0.7784,0.589,0.2171,0.6898,-0.7727,0.5967,0.2165,0.6811,-0.7674,0.6035,0.2165,0.6761,-0.7619,0.6102,0.217,0.6737,-0.7572,0.6158,0.2177,0.6726,-0.7546,0.619,0.2179,0.6713,-0.755,0.6186,0.2174,0.6698,-0.7577,0.6156,0.2166,0.6687,-0.7609,0.612,0.2158,0.6677,-0.7628,0.6098,0.2151,0.6667,-0.7628,0.6098,0.215,0.6657,-0.762,0.6109,0.2151,0.6648,-0.7609,0.6121,0.2152,0.6636,-0.7605,0.6127,0.215,0.6616,-0.761,0.6123,0.2143,0.6586,-0.7621,0.6113,0.2134,0.6549,-0.7632,0.6103,0.2124,0.6507,-0.7638,0.6099,0.2114,0.6463,-0.7638,0.6102,0.2104,0.642,-0.7635,0.6109,0.2095,0.6376,-0.7628,0.6121,0.2084,0.6326,-0.7619,0.6137,0.2071,0.6267,-0.76,0.6166,0.2055,0.6187,-0.7573,0.6206,0.2035,0.6091,-0.755,0.624,0.2017,0.6003,-0.7543,0.6253,0.2003,0.5947,-0.7559,0.6235,0.1995,0.5936,-0.7591,0.6197,0.1991,0.5954,-0.763,0.6151,0.1989,0.5986,-0.7665,0.6106,0.1988,0.6017,-0.771,0.6051,0.1984,0.6047,-0.7764,0.5984,0.1979,0.6082,-0.78,0.5937,0.1977,0.6118,-0.7794,0.5943,0.1984,0.6148,-0.773,0.602,0.2002,0.6169,-0.7623,0.6147,0.2026,0.6187,-0.7498,0.629,0.2053,0.6205,-0.7381,0.6419,0.2076,0.6228,-0.7273,0.6534,0.2098,0.6256,-0.7162,0.6649,0.212,0.6286,-0.7059,0.6752,0.2139,0.632,-0.6974,0.6835,0.2157,0.6357,-0.6911,0.6893,0.2174,0.64,-0.6864,0.6934,0.219,0.6447,-0.6832,0.6962,0.2204,0.6492,-0.681,0.698,0.2216,0.6526,-0.6804,0.6984,0.2222,0.6544,-0.6813,0.6975,0.2224,0.655,-0.6826,0.696,0.2226,0.6557,-0.6836,0.695,0.2231,0.6575,-0.6845,0.6938,0.2241,0.6614,-0.6856,0.6923,0.2253,0.6665,-0.6858,0.6916,0.2266,0.6715,-0.6841,0.693,0.2276,0.6749,-0.6797,0.6971,0.2283,0.6763,-0.6733,0.7031,0.2288,0.6766,-0.6659,0.71,0.229,0.676,-0.6586,0.7168,0.2289,0.6744,-0.6506,0.7243,0.2283,0.6711,-0.6414,0.7328,0.2273,0.6664,-0.6332,0.7402,0.2263,0.6618,-0.6282,0.7447,0.2255,0.6588,-0.6278,0.7451,0.2252,0.6578,-0.6307,0.7427,0.2252,0.6579,-0.6349,0.739,0.2253,0.6589,-0.6387,0.7357,0.2255,0.6603,-0.6424,0.7323,0.2259,0.6626,-0.6466,0.7284,0.2265,0.6659,-0.65,0.7252,0.2271,0.669,-0.6514,0.7238,0.2274,0.6708,-0.6495,0.7255,0.2274,0.671,-0.6453,0.7293,0.2273,0.6702,-0.6409,0.7333,0.2269,0.6688,-0.6386,0.7355,0.2264,0.6669,-0.6397,0.7348,0.2257,0.6644,-0.6428,0.7323,0.2248,0.6611,-0.6458,0.7299,0.224,0.6579,-0.6466,0.7294,0.2233,0.6555,-0.6442,0.7316,0.2231,0.6545,-0.64,0.7353,0.2231,0.6543,-0.6348,0.7397,0.2231,0.6543,-0.6298,0.744,0.223,0.6539,-0.6243,0.7487,0.2227,0.6527,-0.618,0.7541,0.2223,0.6511,-0.6126,0.7586,0.2219,0.6496,-0.6101,0.7607,0.2215,0.6487,-0.6114,0.7597,0.2214,0.6484,-0.6156,0.7563,0.2214,0.6485,-0.6208,0.752,0.2215,0.6489,-0.6256,0.7481,0.2215,0.6496,-0.6299,0.7444,0.2217,0.6505,-0.6345,0.7404,0.2219,0.6517,-0.6386,0.7368,0.2221,0.653,-0.6413,0.7344,0.2223,0.6541,-0.6416,0.7341,0.2224,0.6552,-0.6404,0.7351,0.2225,0.6562,-0.6391,0.7362,0.2226,0.6569,-0.6392,0.7361,0.2225,0.6572,-0.642,0.7338,0.2223,0.6566,-0.6462,0.7302,0.2218,0.6554,-0.6501,0.7269,0.2214,0.6542,-0.6513,0.7259,0.2211,0.6534,-0.6491,0.7279,0.2211,0.6534,-0.6445,0.7319,0.2213,0.654,-0.6389,0.7367,0.2214,0.6544,-0.6338,0.7412,0.2213,0.6541,-0.6287,0.7456,0.2209,0.6523,-0.6233,0.7503,0.2202,0.6497,-0.6183,0.7546,0.2195,0.6471,-0.6148,0.7577,0.219,0.6453,-0.6137,0.7586,0.2189,0.645,-0.6144,0.758,0.2191,0.6455,-0.6151,0.7573,0.2192,0.6459,-0.6143,0.758,0.219,0.6453,-0.6109,0.761,0.2184,0.6429,-0.6059,0.7653,0.2174,0.6395,-0.6008,0.7696,0.2164,0.636,-0.5971,0.7727,0.2156,0.6334,-0.5955,0.774,0.2152,0.6318,-0.5952,0.7743,0.2149,0.6308,-0.5953,0.7742,0.2149,0.6303,-0.595,0.7744,0.2149,0.6306,-0.5939,0.7752,0.2152,0.6321,-0.5923,0.7763,0.2158,0.6346,-0.5911,0.777,0.2163,0.637,-0.591,0.777,0.2166,0.6383,-0.5927,0.7757,0.2166,0.6378,-0.5956,0.7736,0.2163,0.6363,-0.5986,0.7713,0.216,0.6345,-0.6006,0.7699,0.2158,0.6335,-0.6009,0.7696,0.2159,0.634,-0.6002,0.7701,0.2162,0.6352,-0.5993,0.7707,0.2164,0.6361,-0.5987,0.7712,0.2163,0.6356,-0.5987,0.7714,0.2155,0.6324,-0.599,0.7715,0.2144,0.6276,-0.5991,0.7717,0.2133,0.6229,-0.5989,0.7721,0.2127,0.6203,-0.5982,0.7726,0.2128,0.6208,-0.5973,0.7731,0.2134,0.6233,-0.596,0.7739,0.2141,0.6261,-0.5941,0.7753,0.2144,0.6278,-0.5912,0.7776,0.2143,0.6277,-0.5873,0.7806,0.2139,0.6269,-0.5836,0.7834,0.2135,0.6258,-0.5813,0.7853,0.2132,0.625,-0.581,0.7855,0.2132,0.6249,-0.5821,0.7846,0.2133,0.6251,-0.5834,0.7837,0.2133,0.6251,-0.5837,0.7835,0.2131,0.6241,-0.5822,0.7848,0.2125,0.6217,-0.5798,0.7868,0.2116,0.6182,-0.5775,0.7888,0.2106,0.6147,-0.5763,0.7898,0.21,0.612,-0.5766,0.7897,0.2096,0.6103,-0.5777,0.7889,0.2094,0.6091,-0.5796,0.7876,0.2094,0.6084,-0.5822,0.7856,0.2094,0.6081,-0.586,0.7827,0.2096,0.6081,-0.591,0.7789,0.2098,0.6086,-0.5958,0.7751,0.2102,0.6094,-0.5992,0.7725,0.2105,0.6104,-0.6004,0.7714,0.2108,0.6119,-0.6004,0.7713,0.2112,0.6138,-0.6,0.7715,0.2116,0.6156,-0.5999,0.7715,0.2119,0.6169,-0.6007,0.7709,0.212,0.6174,-0.6018,0.77,0.212,0.6175,-0.6026,0.7694,0.212,0.6173,-0.6028,0.7692,0.2119,0.6171,-0.602,0.7699,0.2118,0.6171,-0.6004,0.7712,0.2118,0.6171,-0.5987,0.7725,0.2116,0.6168,-0.5974,0.7736,0.2113,0.6159,-0.5967,0.7743,0.2108,0.6142,-0.5962,0.7748,0.2102,0.6119,-0.596,0.7751,0.2096,0.6093,-0.5962,0.7752,0.209,0.607,-0.5969,0.7747,0.2084,0.6047,-0.5981,0.774,0.2079,0.6023,-0.5995,0.773,0.2074,0.6004,-0.6006,0.7722,0.2073,0.5998,-0.6014,0.7715,0.2076,0.6011,-0.602,0.7709,0.2081,0.6036,-0.6026,0.7703,0.2088,0.6065,-0.603,0.7698,0.2094,0.609,-0.6034,0.7693,0.2098,0.6106,-0.6038,0.769,0.21,0.6118,-0.604,0.7688,0.2103,0.6131,-0.6041,0.7686,0.2106,0.6146,-0.604,0.7685,0.2111,0.6166,-0.6038,0.7685,0.2117,0.6191,-0.6036,0.7685,0.2122,0.6213,-0.6036,0.7685,0.2126,0.6227,-0.6038,0.7683,0.2126,0.6231,-0.6042,0.768,0.2125,0.6228,-0.6045,0.7678,0.2124,0.6221,-0.6046,0.7678,0.2122,0.6216,-0.6043,0.768,0.2121,0.6212,-0.6039,0.7683,0.212,0.6207,-0.6033,0.7689,0.2119,0.6203,-0.6024,0.7695,0.2119,0.6201,-0.6012,0.7705,0.212,0.6203,-0.5996,0.7717,0.2121,0.6208,-0.5981,0.7728,0.2122,0.6214,-0.5969,0.7737,0.2122,0.6216,-0.5962,0.7743,0.2121,0.6211,-0.5958,0.7747,0.2119,0.6201,-0.5956,0.7748,0.2118,0.6194,-0.5956,0.7748,0.212,0.6197,-0.5953,0.7749,0.2124,0.6215,-0.595,0.775,0.2132,0.6244,-0.5954,0.7744,0.214,0.6274,-0.5974,0.7727,0.2146,0.6298,-0.6016,0.7693,0.2151,0.6311,-0.6074,0.7646,0.2155,0.6319,-0.6139,0.7593,0.2158,0.6328,-0.6201,0.7541,0.2163,0.6342,-0.6261,0.749,0.2169,0.6365,-0.6322,0.7436,0.2176,0.6394,-0.638,0.7384,0.2184,0.6424,-0.6432,0.7337,0.219,0.6452,-0.6474,0.7298,0.2197,0.6478,-0.651,0.7264,0.2203,0.6502,-0.6545,0.7231,0.2209,0.6527]);
Group704ZZZ.children[46] = OrientationInterpolator751;

browser.currentScene.children[5] = Group704;

let ROUTE752 = browser.currentScene.createNode("ROUTE");
ROUTE752.fromNode = "StepTimer";
ROUTE752.fromField = "fraction_changed";
ROUTE752.toNode = "FrameStepper";
ROUTE752.toField = "set_fraction";
browser.currentScene.children[6] = ROUTE752;

let ROUTE753 = browser.currentScene.createNode("ROUTE");
ROUTE753.fromNode = "RealTimer";
ROUTE753.fromField = "fraction_changed";
ROUTE753.toNode = "Interpolator0_humanoid_root";
ROUTE753.toField = "set_fraction";
browser.currentScene.children[7] = ROUTE753;

let ROUTE754 = browser.currentScene.createNode("ROUTE");
ROUTE754.fromNode = "FrameStepper";
ROUTE754.fromField = "value_changed";
ROUTE754.toNode = "Interpolator0_humanoid_root";
ROUTE754.toField = "set_fraction";
browser.currentScene.children[8] = ROUTE754;

let ROUTE755 = browser.currentScene.createNode("ROUTE");
ROUTE755.fromNode = "Interpolator0_humanoid_root";
ROUTE755.fromField = "value_changed";
ROUTE755.toNode = "BvhPirouette_humanoid_root";
ROUTE755.toField = "set_translation";
browser.currentScene.children[9] = ROUTE755;

let ROUTE756 = browser.currentScene.createNode("ROUTE");
ROUTE756.fromNode = "RealTimer";
ROUTE756.fromField = "fraction_changed";
ROUTE756.toNode = "Interpolator1_humanoid_root";
ROUTE756.toField = "set_fraction";
browser.currentScene.children[10] = ROUTE756;

let ROUTE757 = browser.currentScene.createNode("ROUTE");
ROUTE757.fromNode = "FrameStepper";
ROUTE757.fromField = "value_changed";
ROUTE757.toNode = "Interpolator1_humanoid_root";
ROUTE757.toField = "set_fraction";
browser.currentScene.children[11] = ROUTE757;

let ROUTE758 = browser.currentScene.createNode("ROUTE");
ROUTE758.fromNode = "Interpolator1_humanoid_root";
ROUTE758.fromField = "value_changed";
ROUTE758.toNode = "BvhPirouette_humanoid_root";
ROUTE758.toField = "set_rotation";
browser.currentScene.children[12] = ROUTE758;

let ROUTE759 = browser.currentScene.createNode("ROUTE");
ROUTE759.fromNode = "RealTimer";
ROUTE759.fromField = "fraction_changed";
ROUTE759.toNode = "Interpolator2_abdomen";
ROUTE759.toField = "set_fraction";
browser.currentScene.children[13] = ROUTE759;

let ROUTE760 = browser.currentScene.createNode("ROUTE");
ROUTE760.fromNode = "FrameStepper";
ROUTE760.fromField = "value_changed";
ROUTE760.toNode = "Interpolator2_abdomen";
ROUTE760.toField = "set_fraction";
browser.currentScene.children[14] = ROUTE760;

let ROUTE761 = browser.currentScene.createNode("ROUTE");
ROUTE761.fromNode = "Interpolator2_abdomen";
ROUTE761.fromField = "value_changed";
ROUTE761.toNode = "BvhPirouette_abdomen";
ROUTE761.toField = "set_rotation";
browser.currentScene.children[15] = ROUTE761;

let ROUTE762 = browser.currentScene.createNode("ROUTE");
ROUTE762.fromNode = "RealTimer";
ROUTE762.fromField = "fraction_changed";
ROUTE762.toNode = "Interpolator3_vl5";
ROUTE762.toField = "set_fraction";
browser.currentScene.children[16] = ROUTE762;

let ROUTE763 = browser.currentScene.createNode("ROUTE");
ROUTE763.fromNode = "FrameStepper";
ROUTE763.fromField = "value_changed";
ROUTE763.toNode = "Interpolator3_vl5";
ROUTE763.toField = "set_fraction";
browser.currentScene.children[17] = ROUTE763;

let ROUTE764 = browser.currentScene.createNode("ROUTE");
ROUTE764.fromNode = "Interpolator3_vl5";
ROUTE764.fromField = "value_changed";
ROUTE764.toNode = "BvhPirouette_vl5";
ROUTE764.toField = "set_rotation";
browser.currentScene.children[18] = ROUTE764;

let ROUTE765 = browser.currentScene.createNode("ROUTE");
ROUTE765.fromNode = "RealTimer";
ROUTE765.fromField = "fraction_changed";
ROUTE765.toNode = "Interpolator4_neck";
ROUTE765.toField = "set_fraction";
browser.currentScene.children[19] = ROUTE765;

let ROUTE766 = browser.currentScene.createNode("ROUTE");
ROUTE766.fromNode = "FrameStepper";
ROUTE766.fromField = "value_changed";
ROUTE766.toNode = "Interpolator4_neck";
ROUTE766.toField = "set_fraction";
browser.currentScene.children[20] = ROUTE766;

let ROUTE767 = browser.currentScene.createNode("ROUTE");
ROUTE767.fromNode = "Interpolator4_neck";
ROUTE767.fromField = "value_changed";
ROUTE767.toNode = "BvhPirouette_neck";
ROUTE767.toField = "set_rotation";
browser.currentScene.children[21] = ROUTE767;

let ROUTE768 = browser.currentScene.createNode("ROUTE");
ROUTE768.fromNode = "RealTimer";
ROUTE768.fromField = "fraction_changed";
ROUTE768.toNode = "Interpolator5_skullbase";
ROUTE768.toField = "set_fraction";
browser.currentScene.children[22] = ROUTE768;

let ROUTE769 = browser.currentScene.createNode("ROUTE");
ROUTE769.fromNode = "FrameStepper";
ROUTE769.fromField = "value_changed";
ROUTE769.toNode = "Interpolator5_skullbase";
ROUTE769.toField = "set_fraction";
browser.currentScene.children[23] = ROUTE769;

let ROUTE770 = browser.currentScene.createNode("ROUTE");
ROUTE770.fromNode = "Interpolator5_skullbase";
ROUTE770.fromField = "value_changed";
ROUTE770.toNode = "BvhPirouette_skullbase";
ROUTE770.toField = "set_rotation";
browser.currentScene.children[24] = ROUTE770;

let ROUTE771 = browser.currentScene.createNode("ROUTE");
ROUTE771.fromNode = "RealTimer";
ROUTE771.fromField = "fraction_changed";
ROUTE771.toNode = "Interpolator6_leftEye";
ROUTE771.toField = "set_fraction";
browser.currentScene.children[25] = ROUTE771;

let ROUTE772 = browser.currentScene.createNode("ROUTE");
ROUTE772.fromNode = "FrameStepper";
ROUTE772.fromField = "value_changed";
ROUTE772.toNode = "Interpolator6_leftEye";
ROUTE772.toField = "set_fraction";
browser.currentScene.children[26] = ROUTE772;

let ROUTE773 = browser.currentScene.createNode("ROUTE");
ROUTE773.fromNode = "Interpolator6_leftEye";
ROUTE773.fromField = "value_changed";
ROUTE773.toNode = "BvhPirouette_leftEye";
ROUTE773.toField = "set_rotation";
browser.currentScene.children[27] = ROUTE773;

let ROUTE774 = browser.currentScene.createNode("ROUTE");
ROUTE774.fromNode = "RealTimer";
ROUTE774.fromField = "fraction_changed";
ROUTE774.toNode = "Interpolator7_rightEye";
ROUTE774.toField = "set_fraction";
browser.currentScene.children[28] = ROUTE774;

let ROUTE775 = browser.currentScene.createNode("ROUTE");
ROUTE775.fromNode = "FrameStepper";
ROUTE775.fromField = "value_changed";
ROUTE775.toNode = "Interpolator7_rightEye";
ROUTE775.toField = "set_fraction";
browser.currentScene.children[29] = ROUTE775;

let ROUTE776 = browser.currentScene.createNode("ROUTE");
ROUTE776.fromNode = "Interpolator7_rightEye";
ROUTE776.fromField = "value_changed";
ROUTE776.toNode = "BvhPirouette_rightEye";
ROUTE776.toField = "set_rotation";
browser.currentScene.children[30] = ROUTE776;

let ROUTE777 = browser.currentScene.createNode("ROUTE");
ROUTE777.fromNode = "RealTimer";
ROUTE777.fromField = "fraction_changed";
ROUTE777.toNode = "Interpolator8_rCollar";
ROUTE777.toField = "set_fraction";
browser.currentScene.children[31] = ROUTE777;

let ROUTE778 = browser.currentScene.createNode("ROUTE");
ROUTE778.fromNode = "FrameStepper";
ROUTE778.fromField = "value_changed";
ROUTE778.toNode = "Interpolator8_rCollar";
ROUTE778.toField = "set_fraction";
browser.currentScene.children[32] = ROUTE778;

let ROUTE779 = browser.currentScene.createNode("ROUTE");
ROUTE779.fromNode = "Interpolator8_rCollar";
ROUTE779.fromField = "value_changed";
ROUTE779.toNode = "BvhPirouette_rCollar";
ROUTE779.toField = "set_rotation";
browser.currentScene.children[33] = ROUTE779;

let ROUTE780 = browser.currentScene.createNode("ROUTE");
ROUTE780.fromNode = "RealTimer";
ROUTE780.fromField = "fraction_changed";
ROUTE780.toNode = "Interpolator9_rShldr";
ROUTE780.toField = "set_fraction";
browser.currentScene.children[34] = ROUTE780;

let ROUTE781 = browser.currentScene.createNode("ROUTE");
ROUTE781.fromNode = "FrameStepper";
ROUTE781.fromField = "value_changed";
ROUTE781.toNode = "Interpolator9_rShldr";
ROUTE781.toField = "set_fraction";
browser.currentScene.children[35] = ROUTE781;

let ROUTE782 = browser.currentScene.createNode("ROUTE");
ROUTE782.fromNode = "Interpolator9_rShldr";
ROUTE782.fromField = "value_changed";
ROUTE782.toNode = "BvhPirouette_rShldr";
ROUTE782.toField = "set_rotation";
browser.currentScene.children[36] = ROUTE782;

let ROUTE783 = browser.currentScene.createNode("ROUTE");
ROUTE783.fromNode = "RealTimer";
ROUTE783.fromField = "fraction_changed";
ROUTE783.toNode = "Interpolator10_rForeArm";
ROUTE783.toField = "set_fraction";
browser.currentScene.children[37] = ROUTE783;

let ROUTE784 = browser.currentScene.createNode("ROUTE");
ROUTE784.fromNode = "FrameStepper";
ROUTE784.fromField = "value_changed";
ROUTE784.toNode = "Interpolator10_rForeArm";
ROUTE784.toField = "set_fraction";
browser.currentScene.children[38] = ROUTE784;

let ROUTE785 = browser.currentScene.createNode("ROUTE");
ROUTE785.fromNode = "Interpolator10_rForeArm";
ROUTE785.fromField = "value_changed";
ROUTE785.toNode = "BvhPirouette_rForeArm";
ROUTE785.toField = "set_rotation";
browser.currentScene.children[39] = ROUTE785;

let ROUTE786 = browser.currentScene.createNode("ROUTE");
ROUTE786.fromNode = "RealTimer";
ROUTE786.fromField = "fraction_changed";
ROUTE786.toNode = "Interpolator11_rHand";
ROUTE786.toField = "set_fraction";
browser.currentScene.children[40] = ROUTE786;

let ROUTE787 = browser.currentScene.createNode("ROUTE");
ROUTE787.fromNode = "FrameStepper";
ROUTE787.fromField = "value_changed";
ROUTE787.toNode = "Interpolator11_rHand";
ROUTE787.toField = "set_fraction";
browser.currentScene.children[41] = ROUTE787;

let ROUTE788 = browser.currentScene.createNode("ROUTE");
ROUTE788.fromNode = "Interpolator11_rHand";
ROUTE788.fromField = "value_changed";
ROUTE788.toNode = "BvhPirouette_rHand";
ROUTE788.toField = "set_rotation";
browser.currentScene.children[42] = ROUTE788;

let ROUTE789 = browser.currentScene.createNode("ROUTE");
ROUTE789.fromNode = "RealTimer";
ROUTE789.fromField = "fraction_changed";
ROUTE789.toNode = "Interpolator12_rThumb1";
ROUTE789.toField = "set_fraction";
browser.currentScene.children[43] = ROUTE789;

let ROUTE790 = browser.currentScene.createNode("ROUTE");
ROUTE790.fromNode = "FrameStepper";
ROUTE790.fromField = "value_changed";
ROUTE790.toNode = "Interpolator12_rThumb1";
ROUTE790.toField = "set_fraction";
browser.currentScene.children[44] = ROUTE790;

let ROUTE791 = browser.currentScene.createNode("ROUTE");
ROUTE791.fromNode = "Interpolator12_rThumb1";
ROUTE791.fromField = "value_changed";
ROUTE791.toNode = "BvhPirouette_rThumb1";
ROUTE791.toField = "set_rotation";
browser.currentScene.children[45] = ROUTE791;

let ROUTE792 = browser.currentScene.createNode("ROUTE");
ROUTE792.fromNode = "RealTimer";
ROUTE792.fromField = "fraction_changed";
ROUTE792.toNode = "Interpolator13_rThumb2";
ROUTE792.toField = "set_fraction";
browser.currentScene.children[46] = ROUTE792;

let ROUTE793 = browser.currentScene.createNode("ROUTE");
ROUTE793.fromNode = "FrameStepper";
ROUTE793.fromField = "value_changed";
ROUTE793.toNode = "Interpolator13_rThumb2";
ROUTE793.toField = "set_fraction";
browser.currentScene.children[47] = ROUTE793;

let ROUTE794 = browser.currentScene.createNode("ROUTE");
ROUTE794.fromNode = "Interpolator13_rThumb2";
ROUTE794.fromField = "value_changed";
ROUTE794.toNode = "BvhPirouette_rThumb2";
ROUTE794.toField = "set_rotation";
browser.currentScene.children[48] = ROUTE794;

let ROUTE795 = browser.currentScene.createNode("ROUTE");
ROUTE795.fromNode = "RealTimer";
ROUTE795.fromField = "fraction_changed";
ROUTE795.toNode = "Interpolator14_rIndex1";
ROUTE795.toField = "set_fraction";
browser.currentScene.children[49] = ROUTE795;

let ROUTE796 = browser.currentScene.createNode("ROUTE");
ROUTE796.fromNode = "FrameStepper";
ROUTE796.fromField = "value_changed";
ROUTE796.toNode = "Interpolator14_rIndex1";
ROUTE796.toField = "set_fraction";
browser.currentScene.children[50] = ROUTE796;

let ROUTE797 = browser.currentScene.createNode("ROUTE");
ROUTE797.fromNode = "Interpolator14_rIndex1";
ROUTE797.fromField = "value_changed";
ROUTE797.toNode = "BvhPirouette_rIndex1";
ROUTE797.toField = "set_rotation";
browser.currentScene.children[51] = ROUTE797;

let ROUTE798 = browser.currentScene.createNode("ROUTE");
ROUTE798.fromNode = "RealTimer";
ROUTE798.fromField = "fraction_changed";
ROUTE798.toNode = "Interpolator15_rIndex2";
ROUTE798.toField = "set_fraction";
browser.currentScene.children[52] = ROUTE798;

let ROUTE799 = browser.currentScene.createNode("ROUTE");
ROUTE799.fromNode = "FrameStepper";
ROUTE799.fromField = "value_changed";
ROUTE799.toNode = "Interpolator15_rIndex2";
ROUTE799.toField = "set_fraction";
browser.currentScene.children[53] = ROUTE799;

let ROUTE800 = browser.currentScene.createNode("ROUTE");
ROUTE800.fromNode = "Interpolator15_rIndex2";
ROUTE800.fromField = "value_changed";
ROUTE800.toNode = "BvhPirouette_rIndex2";
ROUTE800.toField = "set_rotation";
browser.currentScene.children[54] = ROUTE800;

let ROUTE801 = browser.currentScene.createNode("ROUTE");
ROUTE801.fromNode = "RealTimer";
ROUTE801.fromField = "fraction_changed";
ROUTE801.toNode = "Interpolator16_rMid1";
ROUTE801.toField = "set_fraction";
browser.currentScene.children[55] = ROUTE801;

let ROUTE802 = browser.currentScene.createNode("ROUTE");
ROUTE802.fromNode = "FrameStepper";
ROUTE802.fromField = "value_changed";
ROUTE802.toNode = "Interpolator16_rMid1";
ROUTE802.toField = "set_fraction";
browser.currentScene.children[56] = ROUTE802;

let ROUTE803 = browser.currentScene.createNode("ROUTE");
ROUTE803.fromNode = "Interpolator16_rMid1";
ROUTE803.fromField = "value_changed";
ROUTE803.toNode = "BvhPirouette_rMid1";
ROUTE803.toField = "set_rotation";
browser.currentScene.children[57] = ROUTE803;

let ROUTE804 = browser.currentScene.createNode("ROUTE");
ROUTE804.fromNode = "RealTimer";
ROUTE804.fromField = "fraction_changed";
ROUTE804.toNode = "Interpolator17_rMid2";
ROUTE804.toField = "set_fraction";
browser.currentScene.children[58] = ROUTE804;

let ROUTE805 = browser.currentScene.createNode("ROUTE");
ROUTE805.fromNode = "FrameStepper";
ROUTE805.fromField = "value_changed";
ROUTE805.toNode = "Interpolator17_rMid2";
ROUTE805.toField = "set_fraction";
browser.currentScene.children[59] = ROUTE805;

let ROUTE806 = browser.currentScene.createNode("ROUTE");
ROUTE806.fromNode = "Interpolator17_rMid2";
ROUTE806.fromField = "value_changed";
ROUTE806.toNode = "BvhPirouette_rMid2";
ROUTE806.toField = "set_rotation";
browser.currentScene.children[60] = ROUTE806;

let ROUTE807 = browser.currentScene.createNode("ROUTE");
ROUTE807.fromNode = "RealTimer";
ROUTE807.fromField = "fraction_changed";
ROUTE807.toNode = "Interpolator18_rRing1";
ROUTE807.toField = "set_fraction";
browser.currentScene.children[61] = ROUTE807;

let ROUTE808 = browser.currentScene.createNode("ROUTE");
ROUTE808.fromNode = "FrameStepper";
ROUTE808.fromField = "value_changed";
ROUTE808.toNode = "Interpolator18_rRing1";
ROUTE808.toField = "set_fraction";
browser.currentScene.children[62] = ROUTE808;

let ROUTE809 = browser.currentScene.createNode("ROUTE");
ROUTE809.fromNode = "Interpolator18_rRing1";
ROUTE809.fromField = "value_changed";
ROUTE809.toNode = "BvhPirouette_rRing1";
ROUTE809.toField = "set_rotation";
browser.currentScene.children[63] = ROUTE809;

let ROUTE810 = browser.currentScene.createNode("ROUTE");
ROUTE810.fromNode = "RealTimer";
ROUTE810.fromField = "fraction_changed";
ROUTE810.toNode = "Interpolator19_rRing2";
ROUTE810.toField = "set_fraction";
browser.currentScene.children[64] = ROUTE810;

let ROUTE811 = browser.currentScene.createNode("ROUTE");
ROUTE811.fromNode = "FrameStepper";
ROUTE811.fromField = "value_changed";
ROUTE811.toNode = "Interpolator19_rRing2";
ROUTE811.toField = "set_fraction";
browser.currentScene.children[65] = ROUTE811;

let ROUTE812 = browser.currentScene.createNode("ROUTE");
ROUTE812.fromNode = "Interpolator19_rRing2";
ROUTE812.fromField = "value_changed";
ROUTE812.toNode = "BvhPirouette_rRing2";
ROUTE812.toField = "set_rotation";
browser.currentScene.children[66] = ROUTE812;

let ROUTE813 = browser.currentScene.createNode("ROUTE");
ROUTE813.fromNode = "RealTimer";
ROUTE813.fromField = "fraction_changed";
ROUTE813.toNode = "Interpolator20_rPinky1";
ROUTE813.toField = "set_fraction";
browser.currentScene.children[67] = ROUTE813;

let ROUTE814 = browser.currentScene.createNode("ROUTE");
ROUTE814.fromNode = "FrameStepper";
ROUTE814.fromField = "value_changed";
ROUTE814.toNode = "Interpolator20_rPinky1";
ROUTE814.toField = "set_fraction";
browser.currentScene.children[68] = ROUTE814;

let ROUTE815 = browser.currentScene.createNode("ROUTE");
ROUTE815.fromNode = "Interpolator20_rPinky1";
ROUTE815.fromField = "value_changed";
ROUTE815.toNode = "BvhPirouette_rPinky1";
ROUTE815.toField = "set_rotation";
browser.currentScene.children[69] = ROUTE815;

let ROUTE816 = browser.currentScene.createNode("ROUTE");
ROUTE816.fromNode = "RealTimer";
ROUTE816.fromField = "fraction_changed";
ROUTE816.toNode = "Interpolator21_rPinky2";
ROUTE816.toField = "set_fraction";
browser.currentScene.children[70] = ROUTE816;

let ROUTE817 = browser.currentScene.createNode("ROUTE");
ROUTE817.fromNode = "FrameStepper";
ROUTE817.fromField = "value_changed";
ROUTE817.toNode = "Interpolator21_rPinky2";
ROUTE817.toField = "set_fraction";
browser.currentScene.children[71] = ROUTE817;

let ROUTE818 = browser.currentScene.createNode("ROUTE");
ROUTE818.fromNode = "Interpolator21_rPinky2";
ROUTE818.fromField = "value_changed";
ROUTE818.toNode = "BvhPirouette_rPinky2";
ROUTE818.toField = "set_rotation";
browser.currentScene.children[72] = ROUTE818;

let ROUTE819 = browser.currentScene.createNode("ROUTE");
ROUTE819.fromNode = "RealTimer";
ROUTE819.fromField = "fraction_changed";
ROUTE819.toNode = "Interpolator22_lCollar";
ROUTE819.toField = "set_fraction";
browser.currentScene.children[73] = ROUTE819;

let ROUTE820 = browser.currentScene.createNode("ROUTE");
ROUTE820.fromNode = "FrameStepper";
ROUTE820.fromField = "value_changed";
ROUTE820.toNode = "Interpolator22_lCollar";
ROUTE820.toField = "set_fraction";
browser.currentScene.children[74] = ROUTE820;

let ROUTE821 = browser.currentScene.createNode("ROUTE");
ROUTE821.fromNode = "Interpolator22_lCollar";
ROUTE821.fromField = "value_changed";
ROUTE821.toNode = "BvhPirouette_lCollar";
ROUTE821.toField = "set_rotation";
browser.currentScene.children[75] = ROUTE821;

let ROUTE822 = browser.currentScene.createNode("ROUTE");
ROUTE822.fromNode = "RealTimer";
ROUTE822.fromField = "fraction_changed";
ROUTE822.toNode = "Interpolator23_lShldr";
ROUTE822.toField = "set_fraction";
browser.currentScene.children[76] = ROUTE822;

let ROUTE823 = browser.currentScene.createNode("ROUTE");
ROUTE823.fromNode = "FrameStepper";
ROUTE823.fromField = "value_changed";
ROUTE823.toNode = "Interpolator23_lShldr";
ROUTE823.toField = "set_fraction";
browser.currentScene.children[77] = ROUTE823;

let ROUTE824 = browser.currentScene.createNode("ROUTE");
ROUTE824.fromNode = "Interpolator23_lShldr";
ROUTE824.fromField = "value_changed";
ROUTE824.toNode = "BvhPirouette_lShldr";
ROUTE824.toField = "set_rotation";
browser.currentScene.children[78] = ROUTE824;

let ROUTE825 = browser.currentScene.createNode("ROUTE");
ROUTE825.fromNode = "RealTimer";
ROUTE825.fromField = "fraction_changed";
ROUTE825.toNode = "Interpolator24_lForeArm";
ROUTE825.toField = "set_fraction";
browser.currentScene.children[79] = ROUTE825;

let ROUTE826 = browser.currentScene.createNode("ROUTE");
ROUTE826.fromNode = "FrameStepper";
ROUTE826.fromField = "value_changed";
ROUTE826.toNode = "Interpolator24_lForeArm";
ROUTE826.toField = "set_fraction";
browser.currentScene.children[80] = ROUTE826;

let ROUTE827 = browser.currentScene.createNode("ROUTE");
ROUTE827.fromNode = "Interpolator24_lForeArm";
ROUTE827.fromField = "value_changed";
ROUTE827.toNode = "BvhPirouette_lForeArm";
ROUTE827.toField = "set_rotation";
browser.currentScene.children[81] = ROUTE827;

let ROUTE828 = browser.currentScene.createNode("ROUTE");
ROUTE828.fromNode = "RealTimer";
ROUTE828.fromField = "fraction_changed";
ROUTE828.toNode = "Interpolator25_lHand";
ROUTE828.toField = "set_fraction";
browser.currentScene.children[82] = ROUTE828;

let ROUTE829 = browser.currentScene.createNode("ROUTE");
ROUTE829.fromNode = "FrameStepper";
ROUTE829.fromField = "value_changed";
ROUTE829.toNode = "Interpolator25_lHand";
ROUTE829.toField = "set_fraction";
browser.currentScene.children[83] = ROUTE829;

let ROUTE830 = browser.currentScene.createNode("ROUTE");
ROUTE830.fromNode = "Interpolator25_lHand";
ROUTE830.fromField = "value_changed";
ROUTE830.toNode = "BvhPirouette_lHand";
ROUTE830.toField = "set_rotation";
browser.currentScene.children[84] = ROUTE830;

let ROUTE831 = browser.currentScene.createNode("ROUTE");
ROUTE831.fromNode = "RealTimer";
ROUTE831.fromField = "fraction_changed";
ROUTE831.toNode = "Interpolator26_lThumb1";
ROUTE831.toField = "set_fraction";
browser.currentScene.children[85] = ROUTE831;

let ROUTE832 = browser.currentScene.createNode("ROUTE");
ROUTE832.fromNode = "FrameStepper";
ROUTE832.fromField = "value_changed";
ROUTE832.toNode = "Interpolator26_lThumb1";
ROUTE832.toField = "set_fraction";
browser.currentScene.children[86] = ROUTE832;

let ROUTE833 = browser.currentScene.createNode("ROUTE");
ROUTE833.fromNode = "Interpolator26_lThumb1";
ROUTE833.fromField = "value_changed";
ROUTE833.toNode = "BvhPirouette_lThumb1";
ROUTE833.toField = "set_rotation";
browser.currentScene.children[87] = ROUTE833;

let ROUTE834 = browser.currentScene.createNode("ROUTE");
ROUTE834.fromNode = "RealTimer";
ROUTE834.fromField = "fraction_changed";
ROUTE834.toNode = "Interpolator27_lThumb2";
ROUTE834.toField = "set_fraction";
browser.currentScene.children[88] = ROUTE834;

let ROUTE835 = browser.currentScene.createNode("ROUTE");
ROUTE835.fromNode = "FrameStepper";
ROUTE835.fromField = "value_changed";
ROUTE835.toNode = "Interpolator27_lThumb2";
ROUTE835.toField = "set_fraction";
browser.currentScene.children[89] = ROUTE835;

let ROUTE836 = browser.currentScene.createNode("ROUTE");
ROUTE836.fromNode = "Interpolator27_lThumb2";
ROUTE836.fromField = "value_changed";
ROUTE836.toNode = "BvhPirouette_lThumb2";
ROUTE836.toField = "set_rotation";
browser.currentScene.children[90] = ROUTE836;

let ROUTE837 = browser.currentScene.createNode("ROUTE");
ROUTE837.fromNode = "RealTimer";
ROUTE837.fromField = "fraction_changed";
ROUTE837.toNode = "Interpolator28_lIndex1";
ROUTE837.toField = "set_fraction";
browser.currentScene.children[91] = ROUTE837;

let ROUTE838 = browser.currentScene.createNode("ROUTE");
ROUTE838.fromNode = "FrameStepper";
ROUTE838.fromField = "value_changed";
ROUTE838.toNode = "Interpolator28_lIndex1";
ROUTE838.toField = "set_fraction";
browser.currentScene.children[92] = ROUTE838;

let ROUTE839 = browser.currentScene.createNode("ROUTE");
ROUTE839.fromNode = "Interpolator28_lIndex1";
ROUTE839.fromField = "value_changed";
ROUTE839.toNode = "BvhPirouette_lIndex1";
ROUTE839.toField = "set_rotation";
browser.currentScene.children[93] = ROUTE839;

let ROUTE840 = browser.currentScene.createNode("ROUTE");
ROUTE840.fromNode = "RealTimer";
ROUTE840.fromField = "fraction_changed";
ROUTE840.toNode = "Interpolator29_lIndex2";
ROUTE840.toField = "set_fraction";
browser.currentScene.children[94] = ROUTE840;

let ROUTE841 = browser.currentScene.createNode("ROUTE");
ROUTE841.fromNode = "FrameStepper";
ROUTE841.fromField = "value_changed";
ROUTE841.toNode = "Interpolator29_lIndex2";
ROUTE841.toField = "set_fraction";
browser.currentScene.children[95] = ROUTE841;

let ROUTE842 = browser.currentScene.createNode("ROUTE");
ROUTE842.fromNode = "Interpolator29_lIndex2";
ROUTE842.fromField = "value_changed";
ROUTE842.toNode = "BvhPirouette_lIndex2";
ROUTE842.toField = "set_rotation";
browser.currentScene.children[96] = ROUTE842;

let ROUTE843 = browser.currentScene.createNode("ROUTE");
ROUTE843.fromNode = "RealTimer";
ROUTE843.fromField = "fraction_changed";
ROUTE843.toNode = "Interpolator30_lMid1";
ROUTE843.toField = "set_fraction";
browser.currentScene.children[97] = ROUTE843;

let ROUTE844 = browser.currentScene.createNode("ROUTE");
ROUTE844.fromNode = "FrameStepper";
ROUTE844.fromField = "value_changed";
ROUTE844.toNode = "Interpolator30_lMid1";
ROUTE844.toField = "set_fraction";
browser.currentScene.children[98] = ROUTE844;

let ROUTE845 = browser.currentScene.createNode("ROUTE");
ROUTE845.fromNode = "Interpolator30_lMid1";
ROUTE845.fromField = "value_changed";
ROUTE845.toNode = "BvhPirouette_lMid1";
ROUTE845.toField = "set_rotation";
browser.currentScene.children[99] = ROUTE845;

let ROUTE846 = browser.currentScene.createNode("ROUTE");
ROUTE846.fromNode = "RealTimer";
ROUTE846.fromField = "fraction_changed";
ROUTE846.toNode = "Interpolator31_lMid2";
ROUTE846.toField = "set_fraction";
browser.currentScene.children[100] = ROUTE846;

let ROUTE847 = browser.currentScene.createNode("ROUTE");
ROUTE847.fromNode = "FrameStepper";
ROUTE847.fromField = "value_changed";
ROUTE847.toNode = "Interpolator31_lMid2";
ROUTE847.toField = "set_fraction";
browser.currentScene.children[101] = ROUTE847;

let ROUTE848 = browser.currentScene.createNode("ROUTE");
ROUTE848.fromNode = "Interpolator31_lMid2";
ROUTE848.fromField = "value_changed";
ROUTE848.toNode = "BvhPirouette_lMid2";
ROUTE848.toField = "set_rotation";
browser.currentScene.children[102] = ROUTE848;

let ROUTE849 = browser.currentScene.createNode("ROUTE");
ROUTE849.fromNode = "RealTimer";
ROUTE849.fromField = "fraction_changed";
ROUTE849.toNode = "Interpolator32_lRing1";
ROUTE849.toField = "set_fraction";
browser.currentScene.children[103] = ROUTE849;

let ROUTE850 = browser.currentScene.createNode("ROUTE");
ROUTE850.fromNode = "FrameStepper";
ROUTE850.fromField = "value_changed";
ROUTE850.toNode = "Interpolator32_lRing1";
ROUTE850.toField = "set_fraction";
browser.currentScene.children[104] = ROUTE850;

let ROUTE851 = browser.currentScene.createNode("ROUTE");
ROUTE851.fromNode = "Interpolator32_lRing1";
ROUTE851.fromField = "value_changed";
ROUTE851.toNode = "BvhPirouette_lRing1";
ROUTE851.toField = "set_rotation";
browser.currentScene.children[105] = ROUTE851;

let ROUTE852 = browser.currentScene.createNode("ROUTE");
ROUTE852.fromNode = "RealTimer";
ROUTE852.fromField = "fraction_changed";
ROUTE852.toNode = "Interpolator33_lRing2";
ROUTE852.toField = "set_fraction";
browser.currentScene.children[106] = ROUTE852;

let ROUTE853 = browser.currentScene.createNode("ROUTE");
ROUTE853.fromNode = "FrameStepper";
ROUTE853.fromField = "value_changed";
ROUTE853.toNode = "Interpolator33_lRing2";
ROUTE853.toField = "set_fraction";
browser.currentScene.children[107] = ROUTE853;

let ROUTE854 = browser.currentScene.createNode("ROUTE");
ROUTE854.fromNode = "Interpolator33_lRing2";
ROUTE854.fromField = "value_changed";
ROUTE854.toNode = "BvhPirouette_lRing2";
ROUTE854.toField = "set_rotation";
browser.currentScene.children[108] = ROUTE854;

let ROUTE855 = browser.currentScene.createNode("ROUTE");
ROUTE855.fromNode = "RealTimer";
ROUTE855.fromField = "fraction_changed";
ROUTE855.toNode = "Interpolator34_lPinky1";
ROUTE855.toField = "set_fraction";
browser.currentScene.children[109] = ROUTE855;

let ROUTE856 = browser.currentScene.createNode("ROUTE");
ROUTE856.fromNode = "FrameStepper";
ROUTE856.fromField = "value_changed";
ROUTE856.toNode = "Interpolator34_lPinky1";
ROUTE856.toField = "set_fraction";
browser.currentScene.children[110] = ROUTE856;

let ROUTE857 = browser.currentScene.createNode("ROUTE");
ROUTE857.fromNode = "Interpolator34_lPinky1";
ROUTE857.fromField = "value_changed";
ROUTE857.toNode = "BvhPirouette_lPinky1";
ROUTE857.toField = "set_rotation";
browser.currentScene.children[111] = ROUTE857;

let ROUTE858 = browser.currentScene.createNode("ROUTE");
ROUTE858.fromNode = "RealTimer";
ROUTE858.fromField = "fraction_changed";
ROUTE858.toNode = "Interpolator35_lPinky2";
ROUTE858.toField = "set_fraction";
browser.currentScene.children[112] = ROUTE858;

let ROUTE859 = browser.currentScene.createNode("ROUTE");
ROUTE859.fromNode = "FrameStepper";
ROUTE859.fromField = "value_changed";
ROUTE859.toNode = "Interpolator35_lPinky2";
ROUTE859.toField = "set_fraction";
browser.currentScene.children[113] = ROUTE859;

let ROUTE860 = browser.currentScene.createNode("ROUTE");
ROUTE860.fromNode = "Interpolator35_lPinky2";
ROUTE860.fromField = "value_changed";
ROUTE860.toNode = "BvhPirouette_lPinky2";
ROUTE860.toField = "set_rotation";
browser.currentScene.children[114] = ROUTE860;

let ROUTE861 = browser.currentScene.createNode("ROUTE");
ROUTE861.fromNode = "RealTimer";
ROUTE861.fromField = "fraction_changed";
ROUTE861.toNode = "Interpolator36_rButtock";
ROUTE861.toField = "set_fraction";
browser.currentScene.children[115] = ROUTE861;

let ROUTE862 = browser.currentScene.createNode("ROUTE");
ROUTE862.fromNode = "FrameStepper";
ROUTE862.fromField = "value_changed";
ROUTE862.toNode = "Interpolator36_rButtock";
ROUTE862.toField = "set_fraction";
browser.currentScene.children[116] = ROUTE862;

let ROUTE863 = browser.currentScene.createNode("ROUTE");
ROUTE863.fromNode = "Interpolator36_rButtock";
ROUTE863.fromField = "value_changed";
ROUTE863.toNode = "BvhPirouette_rButtock";
ROUTE863.toField = "set_rotation";
browser.currentScene.children[117] = ROUTE863;

let ROUTE864 = browser.currentScene.createNode("ROUTE");
ROUTE864.fromNode = "RealTimer";
ROUTE864.fromField = "fraction_changed";
ROUTE864.toNode = "Interpolator37_rThigh";
ROUTE864.toField = "set_fraction";
browser.currentScene.children[118] = ROUTE864;

let ROUTE865 = browser.currentScene.createNode("ROUTE");
ROUTE865.fromNode = "FrameStepper";
ROUTE865.fromField = "value_changed";
ROUTE865.toNode = "Interpolator37_rThigh";
ROUTE865.toField = "set_fraction";
browser.currentScene.children[119] = ROUTE865;

let ROUTE866 = browser.currentScene.createNode("ROUTE");
ROUTE866.fromNode = "Interpolator37_rThigh";
ROUTE866.fromField = "value_changed";
ROUTE866.toNode = "BvhPirouette_rThigh";
ROUTE866.toField = "set_rotation";
browser.currentScene.children[120] = ROUTE866;

let ROUTE867 = browser.currentScene.createNode("ROUTE");
ROUTE867.fromNode = "RealTimer";
ROUTE867.fromField = "fraction_changed";
ROUTE867.toNode = "Interpolator38_rShin";
ROUTE867.toField = "set_fraction";
browser.currentScene.children[121] = ROUTE867;

let ROUTE868 = browser.currentScene.createNode("ROUTE");
ROUTE868.fromNode = "FrameStepper";
ROUTE868.fromField = "value_changed";
ROUTE868.toNode = "Interpolator38_rShin";
ROUTE868.toField = "set_fraction";
browser.currentScene.children[122] = ROUTE868;

let ROUTE869 = browser.currentScene.createNode("ROUTE");
ROUTE869.fromNode = "Interpolator38_rShin";
ROUTE869.fromField = "value_changed";
ROUTE869.toNode = "BvhPirouette_rShin";
ROUTE869.toField = "set_rotation";
browser.currentScene.children[123] = ROUTE869;

let ROUTE870 = browser.currentScene.createNode("ROUTE");
ROUTE870.fromNode = "RealTimer";
ROUTE870.fromField = "fraction_changed";
ROUTE870.toNode = "Interpolator39_rFoot";
ROUTE870.toField = "set_fraction";
browser.currentScene.children[124] = ROUTE870;

let ROUTE871 = browser.currentScene.createNode("ROUTE");
ROUTE871.fromNode = "FrameStepper";
ROUTE871.fromField = "value_changed";
ROUTE871.toNode = "Interpolator39_rFoot";
ROUTE871.toField = "set_fraction";
browser.currentScene.children[125] = ROUTE871;

let ROUTE872 = browser.currentScene.createNode("ROUTE");
ROUTE872.fromNode = "Interpolator39_rFoot";
ROUTE872.fromField = "value_changed";
ROUTE872.toNode = "BvhPirouette_rFoot";
ROUTE872.toField = "set_rotation";
browser.currentScene.children[126] = ROUTE872;

let ROUTE873 = browser.currentScene.createNode("ROUTE");
ROUTE873.fromNode = "RealTimer";
ROUTE873.fromField = "fraction_changed";
ROUTE873.toNode = "Interpolator40_lButtock";
ROUTE873.toField = "set_fraction";
browser.currentScene.children[127] = ROUTE873;

let ROUTE874 = browser.currentScene.createNode("ROUTE");
ROUTE874.fromNode = "FrameStepper";
ROUTE874.fromField = "value_changed";
ROUTE874.toNode = "Interpolator40_lButtock";
ROUTE874.toField = "set_fraction";
browser.currentScene.children[128] = ROUTE874;

let ROUTE875 = browser.currentScene.createNode("ROUTE");
ROUTE875.fromNode = "Interpolator40_lButtock";
ROUTE875.fromField = "value_changed";
ROUTE875.toNode = "BvhPirouette_lButtock";
ROUTE875.toField = "set_rotation";
browser.currentScene.children[129] = ROUTE875;

let ROUTE876 = browser.currentScene.createNode("ROUTE");
ROUTE876.fromNode = "RealTimer";
ROUTE876.fromField = "fraction_changed";
ROUTE876.toNode = "Interpolator41_lThigh";
ROUTE876.toField = "set_fraction";
browser.currentScene.children[130] = ROUTE876;

let ROUTE877 = browser.currentScene.createNode("ROUTE");
ROUTE877.fromNode = "FrameStepper";
ROUTE877.fromField = "value_changed";
ROUTE877.toNode = "Interpolator41_lThigh";
ROUTE877.toField = "set_fraction";
browser.currentScene.children[131] = ROUTE877;

let ROUTE878 = browser.currentScene.createNode("ROUTE");
ROUTE878.fromNode = "Interpolator41_lThigh";
ROUTE878.fromField = "value_changed";
ROUTE878.toNode = "BvhPirouette_lThigh";
ROUTE878.toField = "set_rotation";
browser.currentScene.children[132] = ROUTE878;

let ROUTE879 = browser.currentScene.createNode("ROUTE");
ROUTE879.fromNode = "RealTimer";
ROUTE879.fromField = "fraction_changed";
ROUTE879.toNode = "Interpolator42_lShin";
ROUTE879.toField = "set_fraction";
browser.currentScene.children[133] = ROUTE879;

let ROUTE880 = browser.currentScene.createNode("ROUTE");
ROUTE880.fromNode = "FrameStepper";
ROUTE880.fromField = "value_changed";
ROUTE880.toNode = "Interpolator42_lShin";
ROUTE880.toField = "set_fraction";
browser.currentScene.children[134] = ROUTE880;

let ROUTE881 = browser.currentScene.createNode("ROUTE");
ROUTE881.fromNode = "Interpolator42_lShin";
ROUTE881.fromField = "value_changed";
ROUTE881.toNode = "BvhPirouette_lShin";
ROUTE881.toField = "set_rotation";
browser.currentScene.children[135] = ROUTE881;

let ROUTE882 = browser.currentScene.createNode("ROUTE");
ROUTE882.fromNode = "RealTimer";
ROUTE882.fromField = "fraction_changed";
ROUTE882.toNode = "Interpolator43_lFoot";
ROUTE882.toField = "set_fraction";
browser.currentScene.children[136] = ROUTE882;

let ROUTE883 = browser.currentScene.createNode("ROUTE");
ROUTE883.fromNode = "FrameStepper";
ROUTE883.fromField = "value_changed";
ROUTE883.toNode = "Interpolator43_lFoot";
ROUTE883.toField = "set_fraction";
browser.currentScene.children[137] = ROUTE883;

let ROUTE884 = browser.currentScene.createNode("ROUTE");
ROUTE884.fromNode = "Interpolator43_lFoot";
ROUTE884.fromField = "value_changed";
ROUTE884.toNode = "BvhPirouette_lFoot";
ROUTE884.toField = "set_rotation";
browser.currentScene.children[138] = ROUTE884;

}
main ();

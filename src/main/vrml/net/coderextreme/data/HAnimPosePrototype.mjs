const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Full"));
scene.addMetaData("title", "HAnimPosePrototype.x3d");
scene.addMetaData("description", "Define an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.");
scene.addMetaData("info", "This model also takes advantage of Inline/IMPORT capabilities (equivalent to USE node) and thus avoids fully copying a large, complex HAnimHumanoid model. Multiple HAnimHumanoid models have been tested satisfactorily, for HAnim version 1 (X3d 3) AND HAnim version 2 (X3D 4).");
scene.addMetaData("created", "2 October 2025");
scene.addMetaData("modified", "14 December 2025");
scene.addMetaData("creator", "Don Brutzman");
scene.addMetaData("creator", "Joe Williams");
scene.addMetaData("contributor", "Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE");
scene.addMetaData("reference", "HAnimPosePrototype.console.txt");
scene.addMetaData("MovingImage", "demonstration video https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeDemoVideo.mp4");
scene.addMetaData("Image", "HAnimPoseExampleTouchDown.png");
scene.addMetaData("Image", "HAnimPoseExampleTouchDownFaceLeftAPose.png");
scene.addMetaData("Image", "images/HAnimPoseExampleBoxMan1.png");
scene.addMetaData("Image", "images/HAnimPoseExampleBoxMan2.png");
scene.addMetaData("Image", "images/HAnimPoseExampleJoeKick.png");
scene.addMetaData("Image", "images/HAnimPoseExampleJoeSkeletonSkinSite.png");
scene.addMetaData("Image", "images/HAnimPoseExampleKoreanCharacter01Jin.png");
scene.addMetaData("Image", "images/HAnimPoseExampleKoreanCharacter02Chul.png");
scene.addMetaData("Image", "images/HAnimPoseExampleKoreanCharacter03Hyun.png");
scene.addMetaData("Image", "images/HAnimPoseExampleKoreanCharacter04Young.png");
scene.addMetaData("Image", "images/HAnimPoseExampleKoreanCharacter05Ju.png");
scene.addMetaData("Image", "images/HAnimPoseExampleKoreanCharacter06Ga.png");
scene.addMetaData("Image", "images/HAnimPoseExampleKoreanCharacter07No.png");
scene.addMetaData("Image", "images/HAnimPoseExampleKoreanCharacter08Da.png");
scene.addMetaData("Image", "images/HAnimPoseExampleKoreanCharacter09Ru.png");
scene.addMetaData("Image", "images/HAnimPoseExampleKoreanCharacter10Mi.png");
scene.addMetaData("Image", "images/HAnimPoseExampleKoreanCharacter11Min.png");
scene.addMetaData("Image", "images/HAnimPoseExampleKoreanCharacter12Sun.png");
scene.addMetaData("specificationSection", "HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose");
scene.addMetaData("specificationUrl", "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose");
scene.addMetaData("specificationSection", "HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures");
scene.addMetaData("specificationUrl", "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures");
scene.addMetaData("specificationSection", "HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses");
scene.addMetaData("specificationUrl", "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses");
scene.addMetaData("reference", "Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript");
scene.addMetaData("reference", "earlier version of this prototype: originals/HAnimPosePreliminary.x3d");
scene.addMetaData("generator", "X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit");
scene.addMetaData("generator", "Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototype.x3d");
scene.addMetaData("license", "https://www.web3d.org/x3d/content/examples/license.html");
await browser .loadComponents (scene);
let WorldInfo43 = browser.currentScene.createNode("WorldInfo");
WorldInfo43.DEF = "ModelInfo";
WorldInfo43.info = new X3D.MFString([new X3D.SFString("Design to illustrate a potential HAnimPose node")]);
WorldInfo43.title = "HAnimPosePrototype.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo43;

let Background44 = browser.currentScene.createNode("Background");
Background44.skyColor = new X3D.MFColor([0.8,0.8,1]);
browser.currentScene.children[1] = Background44;

let NavigationInfo45 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[2] = NavigationInfo45;

let Group46 = browser.currentScene.createNode("Group");
Group46.DEF = "HandleInlineLoading";
//Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2
//Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun
let Inline47 = browser.currentScene.createNode("Inline");
Inline47.DEF = "HumanoidInline";
Inline47.description = "remote HAnimHumanoid for IMPORT";
Inline47.url = new X3D.MFString([new X3D.SFString("../Skin/BoxMan2.x3d"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/BoxMan2.x3d")]);
Group46YYY.children = new X3D.MFNode();

Group46ZZZ.children[0] = Inline47;

//Note that the following importedDEF must match the EXPORT name found in remote file
let IMPORT48 = browser.currentScene.createNode("IMPORT");
IMPORT48.AS = "HumanoidImported";
IMPORT48.importedDEF = "BoxMan2";
IMPORT48.inlineDEF = "HumanoidInline";
Group46ZZZ.children[1] = IMPORT48;

let LoadSensor49 = browser.currentScene.createNode("LoadSensor");
LoadSensor49.DEF = "HumanoidInlineLoadSensor";
LoadSensor49.timeOut = 2;
let Inline50 = browser.currentScene.createNode("Inline");
Inline50.USE = "HumanoidInline";
LoadSensor49YYY.children = new X3D.MFNode();

LoadSensor49ZZZ.children[0] = Inline50;

Group46ZZZ.children[2] = LoadSensor49;

browser.currentScene.children[3] = Group46;

let ProtoDeclare51 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="HAnimPose" appinfo="Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values." ><ProtoInterface><field name="parentHAnimHumanoid" accessType="inputOutput" appinfo="HAnimHumanoid for this Pose to act upon" type="SFNode"><!--HAnimHumanoid initialization node goes here, this field is only used in the prototype implementation--></field>
<field name="name" accessType="inputOutput" appinfo="name of this pose" type="SFString" value="newPoseName"></field>
<field name="children" accessType="inputOutput" appinfo="joint values to apply to HAnimHumanoid" type="MFNode"><!--initializating Joint nodes (if any) go here--></field>
<field name="description" accessType="inputOutput" appinfo="explanation of purpose" type="SFString"></field>
<field name="enabled" accessType="inputOutput" appinfo="default value true" type="SFBool" value="true"></field>
<field name="loa" accessType="initializeOnly" appinfo="default is no loa" type="SFInt32" value="-1"></field>
<field name="transitionDuration" accessType="inputOutput" appinfo="how many seconds to achieve the pose" type="SFTime" value="0"></field>
<field name="metadata" accessType="inputOutput" appinfo="single Metadata* node" type="SFNode"></field>
<field name="isActive" accessType="outputOnly" appinfo="event indicating when pose transition is active" type="SFBool"></field>
<field name="commencePose" accessType="inputOnly" appinfo="this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1" type="SFBool"></field>
<field name="resetAllJoints" accessType="inputOnly" appinfo="reset the skeleton to I pose with all joints zeroed" type="SFBool"></field>
<field name="set_fraction" accessType="inputOnly" appinfo="allows transition to proceed incrementally from fraction [0..10" type="SFFloat"></field>
<field name="set_startTime" accessType="inputOnly" appinfo="starts the animation clock" type="SFTime"></field>
<field name="isLoaded" accessType="inputOnly" appinfo="possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE" type="SFBool"></field>
<field name="traceEnabled" accessType="inputOutput" appinfo="debug trace to Browser output console this is a local prototype field" type="SFBool" value="true"></field>
</ProtoInterface>
<ProtoBody><TimeSensor DEF="ClockTimeSensor" description="control timing of pose animation when triggered"><IS><connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="cycleInterval" protoField="transitionDuration"></connect>
<connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="startTime" protoField="set_startTime"></connect>
<connect nodeField="metadata" protoField="metadata"></connect>
</IS>
</TimeSensor>
<TimeSensor DEF="ResetTimeSensor" description="control timing of skeleton reset to &quot;A&quot; pose when triggered"><IS><connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="cycleInterval" protoField="transitionDuration"></connect>
<connect nodeField="startTime" protoField="set_startTime"></connect>
<!--no need to report isActive since that would be duplicative--></IS>
</TimeSensor>
<Group DEF="PoseInterpolatorGroup"><!--interpolators generated by prototype script appear here at runtime--></Group>
<Group DEF="ResetInterpolatorGroup"><!--interpolators generated by prototype script appear here at runtime--></Group>
<Script DEF="HAnimPoseScript" directOutput="true" url="&quot;HAnimPosePrototypeScript.js&quot; &quot;https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeScript.js&quot;"><field name="parentHAnimHumanoid" accessType="inputOutput" appinfo="Humanoid for this Pose to act upon" type="SFNode"><!--initialization node (if any) goes here--></field>
<field name="name" accessType="inputOutput" appinfo="name of this pose" type="SFString"></field>
<field name="loa" accessType="initializeOnly" appinfo="default is no loa" type="SFInt32"></field>
<field name="description" accessType="inputOutput" appinfo="explanation of purpose" type="SFString"></field>
<field name="enabled" accessType="inputOutput" appinfo="default value true" type="SFBool"></field>
<field name="resetAllJoints" accessType="inputOnly" appinfo="reset the skeleton to I pose with all joints zeroed" type="SFBool"></field>
<field name="children" accessType="inputOutput" appinfo="joint values to apply to HAnimHumanoid" type="MFNode"><!--initializating Joint nodes (if any) go here--></field>
<field name="transitionDuration" accessType="inputOutput" appinfo="how many seconds to achieve the pose" type="SFTime"></field>
<field name="commencePose" accessType="inputOnly" appinfo="this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1" type="SFBool"></field>
<field name="set_fraction" accessType="inputOnly" appinfo="allows transition to proceed incrementally from fraction [0..10" type="SFFloat"></field>
<field name="set_startTime" accessType="inputOnly" appinfo="starts the animation clock" type="SFTime"></field>
<field name="isLoaded" accessType="inputOnly" appinfo="possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE" type="SFBool"></field>
<field name="traceEnabled" accessType="inputOutput" appinfo="debug trace to Browser output console" type="SFBool"></field>
<field name="numberPoseJoints" accessType="initializeOnly" appinfo="number of joints found in children field" type="SFInt32" value="0"></field>
<field name="numberSkeletonJoints" accessType="initializeOnly" appinfo="number of joints found in Humanoid" type="SFInt32" value="0"></field>
<field name="jointOrientationInterpolators" accessType="initializeOnly" appinfo="OrientationInterpolator node array matching number of children" type="MFNode"><!--initializating Joint nodes (if any) go here--></field>
<IS><connect nodeField="parentHAnimHumanoid" protoField="parentHAnimHumanoid"></connect>
<connect nodeField="name" protoField="name"></connect>
<connect nodeField="loa" protoField="loa"></connect>
<connect nodeField="description" protoField="description"></connect>
<connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="resetAllJoints" protoField="resetAllJoints"></connect>
<connect nodeField="children" protoField="children"></connect>
<connect nodeField="transitionDuration" protoField="transitionDuration"></connect>
<connect nodeField="commencePose" protoField="commencePose"></connect>
<connect nodeField="set_fraction" protoField="set_fraction"></connect>
<connect nodeField="set_startTime" protoField="set_startTime"></connect>
<connect nodeField="isLoaded" protoField="isLoaded"></connect>
<connect nodeField="traceEnabled" protoField="traceEnabled"></connect>
</IS>
</Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare51.name = "HAnimPose";
ProtoDeclare51.appinfo = "Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values.";
ProtoInterface53.getField("parentHAnimHumanoid")//HAnimHumanoid initialization node goes here, this field is only used in the prototype implementation
ProtoInterface52YYY.field = new X3D.MFNode();

ProtoInterface54.getField("name").setValue("newPoseName");
ProtoInterface52YYY.field = new X3D.MFNode();

ProtoInterface55.getField("children")//initializating Joint nodes (if any) go here
ProtoInterface52YYY.field = new X3D.MFNode();

ProtoInterface56.getField("description")ProtoInterface52YYY.field = new X3D.MFNode();

ProtoInterface57.getField("enabled").setValue("true");
ProtoInterface52YYY.field = new X3D.MFNode();

ProtoInterface58.getField("loa").setValue("-1");
ProtoInterface52YYY.field = new X3D.MFNode();

ProtoInterface59.getField("transitionDuration").setValue("0");
ProtoInterface52YYY.field = new X3D.MFNode();

ProtoInterface60.getField("metadata")ProtoInterface52YYY.field = new X3D.MFNode();

ProtoInterface61.getField("isActive")ProtoInterface52YYY.field = new X3D.MFNode();

ProtoInterface62.getField("commencePose")ProtoInterface52YYY.field = new X3D.MFNode();

ProtoInterface63.getField("resetAllJoints")ProtoInterface52YYY.field = new X3D.MFNode();

ProtoInterface64.getField("set_fraction")ProtoInterface52YYY.field = new X3D.MFNode();

ProtoInterface65.getField("set_startTime")ProtoInterface52YYY.field = new X3D.MFNode();

ProtoInterface66.getField("isLoaded")ProtoInterface52YYY.field = new X3D.MFNode();

ProtoInterface67.getField("traceEnabled").setValue("true");
ProtoInterface52YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface52;

let ProtoBody68 = browser.currentScene.createNode("ProtoBody");
let TimeSensor69 = browser.currentScene.createNode("TimeSensor");
TimeSensor69.DEF = "ClockTimeSensor";
TimeSensor69.description = "control timing of pose animation when triggered";
let IS70 = browser.currentScene.createNode("IS");
let connect71 = browser.currentScene.createNode("connect");
connect71.nodeField = "enabled";
connect71.protoField = "enabled";
IS70YYY.connect = new X3D.MFNode();

IS70ZZZ.connect[0] = connect71;

let connect72 = browser.currentScene.createNode("connect");
connect72.nodeField = "cycleInterval";
connect72.protoField = "transitionDuration";
IS70ZZZ.connect[1] = connect72;

let connect73 = browser.currentScene.createNode("connect");
connect73.nodeField = "isActive";
connect73.protoField = "isActive";
IS70ZZZ.connect[2] = connect73;

let connect74 = browser.currentScene.createNode("connect");
connect74.nodeField = "startTime";
connect74.protoField = "set_startTime";
IS70ZZZ.connect[3] = connect74;

let connect75 = browser.currentScene.createNode("connect");
connect75.nodeField = "metadata";
connect75.protoField = "metadata";
IS70ZZZ.connect[4] = connect75;

iS = IS70;

ProtoBody68YYY.children = new X3D.MFNode();

ProtoBody68ZZZ.children[0] = TimeSensor69;

let TimeSensor76 = browser.currentScene.createNode("TimeSensor");
TimeSensor76.DEF = "ResetTimeSensor";
TimeSensor76.description = "control timing of skeleton reset to \"A\" pose when triggered";
let IS77 = browser.currentScene.createNode("IS");
let connect78 = browser.currentScene.createNode("connect");
connect78.nodeField = "enabled";
connect78.protoField = "enabled";
IS77YYY.connect = new X3D.MFNode();

IS77ZZZ.connect[0] = connect78;

let connect79 = browser.currentScene.createNode("connect");
connect79.nodeField = "cycleInterval";
connect79.protoField = "transitionDuration";
IS77ZZZ.connect[1] = connect79;

let connect80 = browser.currentScene.createNode("connect");
connect80.nodeField = "startTime";
connect80.protoField = "set_startTime";
IS77ZZZ.connect[2] = connect80;

//no need to report isActive since that would be duplicative
iS = IS77;

ProtoBody68ZZZ.children[1] = TimeSensor76;

let Group81 = browser.currentScene.createNode("Group");
Group81.DEF = "PoseInterpolatorGroup";
//interpolators generated by prototype script appear here at runtime
ProtoBody68ZZZ.children[2] = Group81;

let Group82 = browser.currentScene.createNode("Group");
Group82.DEF = "ResetInterpolatorGroup";
//interpolators generated by prototype script appear here at runtime
ProtoBody68ZZZ.children[3] = Group82;

let Script83 = browser.currentScene.createNode("Script");
Script83.DEF = "HAnimPoseScript";
Script83.directOutput = True;
Script83.url = new X3D.MFString([new X3D.SFString("HAnimPosePrototypeScript.js"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeScript.js")]);
Script84.getField("parentHAnimHumanoid")//initialization node (if any) goes here
Script83YYY.field = new X3D.MFNode();

Script85.getField("name")Script83YYY.field = new X3D.MFNode();

Script86.getField("loa")Script83YYY.field = new X3D.MFNode();

Script87.getField("description")Script83YYY.field = new X3D.MFNode();

Script88.getField("enabled")Script83YYY.field = new X3D.MFNode();

Script89.getField("resetAllJoints")Script83YYY.field = new X3D.MFNode();

Script90.getField("children")//initializating Joint nodes (if any) go here
Script83YYY.field = new X3D.MFNode();

Script91.getField("transitionDuration")Script83YYY.field = new X3D.MFNode();

Script92.getField("commencePose")Script83YYY.field = new X3D.MFNode();

Script93.getField("set_fraction")Script83YYY.field = new X3D.MFNode();

Script94.getField("set_startTime")Script83YYY.field = new X3D.MFNode();

Script95.getField("isLoaded")Script83YYY.field = new X3D.MFNode();

Script96.getField("traceEnabled")Script83YYY.field = new X3D.MFNode();

Script97.getField("numberPoseJoints").setValue("0");
Script83YYY.field = new X3D.MFNode();

Script98.getField("numberSkeletonJoints").setValue("0");
Script83YYY.field = new X3D.MFNode();

Script99.getField("jointOrientationInterpolators")//initializating Joint nodes (if any) go here
Script83YYY.field = new X3D.MFNode();

let IS100 = browser.currentScene.createNode("IS");
let connect101 = browser.currentScene.createNode("connect");
connect101.nodeField = "parentHAnimHumanoid";
connect101.protoField = "parentHAnimHumanoid";
IS100YYY.connect = new X3D.MFNode();

IS100ZZZ.connect[0] = connect101;

let connect102 = browser.currentScene.createNode("connect");
connect102.nodeField = "name";
connect102.protoField = "name";
IS100ZZZ.connect[1] = connect102;

let connect103 = browser.currentScene.createNode("connect");
connect103.nodeField = "loa";
connect103.protoField = "loa";
IS100ZZZ.connect[2] = connect103;

let connect104 = browser.currentScene.createNode("connect");
connect104.nodeField = "description";
connect104.protoField = "description";
IS100ZZZ.connect[3] = connect104;

let connect105 = browser.currentScene.createNode("connect");
connect105.nodeField = "enabled";
connect105.protoField = "enabled";
IS100ZZZ.connect[4] = connect105;

let connect106 = browser.currentScene.createNode("connect");
connect106.nodeField = "resetAllJoints";
connect106.protoField = "resetAllJoints";
IS100ZZZ.connect[5] = connect106;

let connect107 = browser.currentScene.createNode("connect");
connect107.nodeField = "children";
connect107.protoField = "children";
IS100ZZZ.connect[6] = connect107;

let connect108 = browser.currentScene.createNode("connect");
connect108.nodeField = "transitionDuration";
connect108.protoField = "transitionDuration";
IS100ZZZ.connect[7] = connect108;

let connect109 = browser.currentScene.createNode("connect");
connect109.nodeField = "commencePose";
connect109.protoField = "commencePose";
IS100ZZZ.connect[8] = connect109;

let connect110 = browser.currentScene.createNode("connect");
connect110.nodeField = "set_fraction";
connect110.protoField = "set_fraction";
IS100ZZZ.connect[9] = connect110;

let connect111 = browser.currentScene.createNode("connect");
connect111.nodeField = "set_startTime";
connect111.protoField = "set_startTime";
IS100ZZZ.connect[10] = connect111;

let connect112 = browser.currentScene.createNode("connect");
connect112.nodeField = "isLoaded";
connect112.protoField = "isLoaded";
IS100ZZZ.connect[11] = connect112;

let connect113 = browser.currentScene.createNode("connect");
connect113.nodeField = "traceEnabled";
connect113.protoField = "traceEnabled";
IS100ZZZ.connect[12] = connect113;

iS = IS100;

ProtoBody68ZZZ.children[4] = Script83;

protoBody = ProtoBody68;

browser.currentScene.children[4] = ProtoDeclare51;

let Viewpoint114 = browser.currentScene.createNode("Viewpoint");
Viewpoint114.description = "HAnimPose for HumanoidInline IMPORT model";
Viewpoint114.position = new X3D.SFVec3f([0,1,4]);
browser.currentScene.children[5] = Viewpoint114;

//no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc...
let ProtoInstance115 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance115.name = "HAnimPose";
ProtoInstance115.DEF = "T_Pose";
let fieldValue116 = browser.currentScene.createNode("fieldValue");
fieldValue116.name = "name";
fieldValue116.value = "T";
ProtoInstance115YYY.fieldValue = new X3D.MFNode();

ProtoInstance115ZZZ.fieldValue[0] = fieldValue116;

let fieldValue117 = browser.currentScene.createNode("fieldValue");
fieldValue117.name = "enabled";
fieldValue117.value = "true";
ProtoInstance115ZZZ.fieldValue[1] = fieldValue117;

let fieldValue118 = browser.currentScene.createNode("fieldValue");
fieldValue118.name = "parentHAnimHumanoid";
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
//debug test case for incorrect node type: <HAnimJoint DEF=\"ErrorDiagnosticsTest\" USE='HumanoidImported'/>
let HAnimHumanoid119 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid119.USE = "HumanoidImported";
fieldValue118YYY.children = new X3D.MFNode();

fieldValue118ZZZ.children[0] = HAnimHumanoid119;

ProtoInstance115ZZZ.fieldValue[2] = fieldValue118;

let fieldValue120 = browser.currentScene.createNode("fieldValue");
fieldValue120.name = "loa";
fieldValue120.value = "1";
ProtoInstance115ZZZ.fieldValue[3] = fieldValue120;

let fieldValue121 = browser.currentScene.createNode("fieldValue");
fieldValue121.name = "description";
fieldValue121.value = "arms stretched outward and level similar to letter T";
ProtoInstance115ZZZ.fieldValue[4] = fieldValue121;

let fieldValue122 = browser.currentScene.createNode("fieldValue");
fieldValue122.name = "children";
let HAnimJoint123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint123.name = "l_shoulder";
HAnimJoint123.DEF = "PoseJoint_l_shoulder_1";
HAnimJoint123.description = "left shoulder";
HAnimJoint123.rotation = new X3D.SFRotation([0,0,1,1.57]);
HAnimJoint123.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint123.llimit = new X3D.MFFloat([0,0,0]);
fieldValue122YYY.children = new X3D.MFNode();

fieldValue122ZZZ.children[0] = HAnimJoint123;

let HAnimJoint124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint124.name = "r_shoulder";
HAnimJoint124.DEF = "PoseJoint_r_shoulder_1";
HAnimJoint124.description = "right shoulder";
HAnimJoint124.rotation = new X3D.SFRotation([0,0,-1,1.57]);
HAnimJoint124.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint124.llimit = new X3D.MFFloat([0,0,0]);
fieldValue122ZZZ.children[1] = HAnimJoint124;

//test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/
ProtoInstance115ZZZ.fieldValue[5] = fieldValue122;

let fieldValue125 = browser.currentScene.createNode("fieldValue");
fieldValue125.name = "transitionDuration";
fieldValue125.value = "1.3";
ProtoInstance115ZZZ.fieldValue[6] = fieldValue125;

browser.currentScene.children[6] = ProtoInstance115;

let ProtoInstance126 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance126.name = "HAnimPose";
ProtoInstance126.DEF = "A_Pose";
let fieldValue127 = browser.currentScene.createNode("fieldValue");
fieldValue127.name = "name";
fieldValue127.value = "A";
ProtoInstance126YYY.fieldValue = new X3D.MFNode();

ProtoInstance126ZZZ.fieldValue[0] = fieldValue127;

let fieldValue128 = browser.currentScene.createNode("fieldValue");
fieldValue128.name = "enabled";
fieldValue128.value = "true";
ProtoInstance126ZZZ.fieldValue[1] = fieldValue128;

let fieldValue129 = browser.currentScene.createNode("fieldValue");
fieldValue129.name = "parentHAnimHumanoid";
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
let HAnimHumanoid130 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid130.USE = "HumanoidImported";
fieldValue129YYY.children = new X3D.MFNode();

fieldValue129ZZZ.children[0] = HAnimHumanoid130;

ProtoInstance126ZZZ.fieldValue[2] = fieldValue129;

let fieldValue131 = browser.currentScene.createNode("fieldValue");
fieldValue131.name = "loa";
fieldValue131.value = "1";
ProtoInstance126ZZZ.fieldValue[3] = fieldValue131;

let fieldValue132 = browser.currentScene.createNode("fieldValue");
fieldValue132.name = "description";
fieldValue132.value = "arms stretched outward and downward similar to letter A";
ProtoInstance126ZZZ.fieldValue[4] = fieldValue132;

let fieldValue133 = browser.currentScene.createNode("fieldValue");
fieldValue133.name = "children";
let HAnimJoint134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint134.name = "l_shoulder";
HAnimJoint134.DEF = "PoseJoint_l_shoulder";
HAnimJoint134.description = "left shoulder";
HAnimJoint134.rotation = new X3D.SFRotation([0,0,1,0.5]);
HAnimJoint134.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint134.llimit = new X3D.MFFloat([0,0,0]);
fieldValue133YYY.children = new X3D.MFNode();

fieldValue133ZZZ.children[0] = HAnimJoint134;

let HAnimJoint135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint135.name = "r_shoulder";
HAnimJoint135.DEF = "PoseJoint_r_shoulder";
HAnimJoint135.description = "right shoulder";
HAnimJoint135.rotation = new X3D.SFRotation([0,0,-1,0.5]);
HAnimJoint135.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint135.llimit = new X3D.MFFloat([0,0,0]);
fieldValue133ZZZ.children[1] = HAnimJoint135;

ProtoInstance126ZZZ.fieldValue[5] = fieldValue133;

let fieldValue136 = browser.currentScene.createNode("fieldValue");
fieldValue136.name = "transitionDuration";
fieldValue136.value = "1.2";
ProtoInstance126ZZZ.fieldValue[6] = fieldValue136;

let fieldValue137 = browser.currentScene.createNode("fieldValue");
fieldValue137.name = "traceEnabled";
fieldValue137.value = "true";
ProtoInstance126ZZZ.fieldValue[7] = fieldValue137;

browser.currentScene.children[7] = ProtoInstance126;

let ProtoInstance138 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance138.name = "HAnimPose";
ProtoInstance138.DEF = "TouchDown_Pose";
//thanks Joe
let fieldValue139 = browser.currentScene.createNode("fieldValue");
fieldValue139.name = "name";
fieldValue139.value = "TouchDown";
ProtoInstance138YYY.fieldValue = new X3D.MFNode();

ProtoInstance138ZZZ.fieldValue[0] = fieldValue139;

let fieldValue140 = browser.currentScene.createNode("fieldValue");
fieldValue140.name = "enabled";
fieldValue140.value = "true";
ProtoInstance138ZZZ.fieldValue[1] = fieldValue140;

let fieldValue141 = browser.currentScene.createNode("fieldValue");
fieldValue141.name = "parentHAnimHumanoid";
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
let HAnimHumanoid142 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid142.USE = "HumanoidImported";
fieldValue141YYY.children = new X3D.MFNode();

fieldValue141ZZZ.children[0] = HAnimHumanoid142;

ProtoInstance138ZZZ.fieldValue[2] = fieldValue141;

let fieldValue143 = browser.currentScene.createNode("fieldValue");
fieldValue143.name = "loa";
fieldValue143.value = "1";
ProtoInstance138ZZZ.fieldValue[3] = fieldValue143;

let fieldValue144 = browser.currentScene.createNode("fieldValue");
fieldValue144.name = "description";
fieldValue144.value = "arms and legs stretched outward providing a TouchDown gesture";
ProtoInstance138ZZZ.fieldValue[4] = fieldValue144;

let fieldValue145 = browser.currentScene.createNode("fieldValue");
fieldValue145.name = "children";
let HAnimJoint146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint146.name = "humanoid_root";
HAnimJoint146.rotation = new X3D.SFRotation([0,1,0,-0.698132]);
HAnimJoint146.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint146.llimit = new X3D.MFFloat([0,0,0]);
fieldValue145YYY.children = new X3D.MFNode();

fieldValue145ZZZ.children[0] = HAnimJoint146;

let HAnimJoint147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint147.name = "l_hip";
HAnimJoint147.rotation = new X3D.SFRotation([-1,1,1,1]);
HAnimJoint147.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint147.llimit = new X3D.MFFloat([0,0,0]);
fieldValue145ZZZ.children[1] = HAnimJoint147;

let HAnimJoint148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint148.name = "l_knee";
HAnimJoint148.rotation = new X3D.SFRotation([1,0,0,1]);
HAnimJoint148.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint148.llimit = new X3D.MFFloat([0,0,0]);
fieldValue145ZZZ.children[2] = HAnimJoint148;

let HAnimJoint149 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint149.name = "l_talocrural";
HAnimJoint149.rotation = new X3D.SFRotation([-0.2,0,0.1,0.225]);
HAnimJoint149.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint149.llimit = new X3D.MFFloat([0,0,0]);
fieldValue145ZZZ.children[3] = HAnimJoint149;

let HAnimJoint150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint150.name = "r_hip";
HAnimJoint150.rotation = new X3D.SFRotation([-1,-1,-1,1]);
HAnimJoint150.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint150.llimit = new X3D.MFFloat([0,0,0]);
fieldValue145ZZZ.children[4] = HAnimJoint150;

let HAnimJoint151 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint151.name = "r_knee";
HAnimJoint151.rotation = new X3D.SFRotation([1,0,0,1]);
HAnimJoint151.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint151.llimit = new X3D.MFFloat([0,0,0]);
fieldValue145ZZZ.children[5] = HAnimJoint151;

let HAnimJoint152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint152.name = "r_talocrural";
HAnimJoint152.rotation = new X3D.SFRotation([-0.2,0,0.1,0.25]);
HAnimJoint152.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint152.llimit = new X3D.MFFloat([0,0,0]);
fieldValue145ZZZ.children[6] = HAnimJoint152;

let HAnimJoint153 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint153.name = "vl5";
HAnimJoint153.rotation = new X3D.SFRotation([0,0,0.01,0.2]);
HAnimJoint153.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint153.llimit = new X3D.MFFloat([0,0,0]);
fieldValue145ZZZ.children[7] = HAnimJoint153;

let HAnimJoint154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint154.name = "vt10";
HAnimJoint154.rotation = new X3D.SFRotation([0,0,0.01,0.1]);
HAnimJoint154.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint154.llimit = new X3D.MFFloat([0,0,0]);
fieldValue145ZZZ.children[8] = HAnimJoint154;

let HAnimJoint155 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint155.name = "vc4";
HAnimJoint155.rotation = new X3D.SFRotation([0,0,-0.01,0.15]);
HAnimJoint155.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint155.llimit = new X3D.MFFloat([0,0,0]);
fieldValue145ZZZ.children[9] = HAnimJoint155;

let HAnimJoint156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint156.name = "l_shoulder";
HAnimJoint156.rotation = new X3D.SFRotation([-1,0.5,1,2]);
HAnimJoint156.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint156.llimit = new X3D.MFFloat([0,0,0]);
fieldValue145ZZZ.children[10] = HAnimJoint156;

let HAnimJoint157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint157.name = "l_elbow";
HAnimJoint157.rotation = new X3D.SFRotation([-1,0,0,1]);
HAnimJoint157.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint157.llimit = new X3D.MFFloat([0,0,0]);
fieldValue145ZZZ.children[11] = HAnimJoint157;

let HAnimJoint158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint158.name = "l_radiocarpal";
HAnimJoint158.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint158.llimit = new X3D.MFFloat([0,0,0]);
fieldValue145ZZZ.children[12] = HAnimJoint158;

let HAnimJoint159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint159.name = "r_shoulder";
HAnimJoint159.rotation = new X3D.SFRotation([-1,-0.5,-1,2.6]);
HAnimJoint159.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint159.llimit = new X3D.MFFloat([0,0,0]);
fieldValue145ZZZ.children[13] = HAnimJoint159;

let HAnimJoint160 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint160.name = "r_elbow";
HAnimJoint160.rotation = new X3D.SFRotation([-1,0,0,1]);
HAnimJoint160.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint160.llimit = new X3D.MFFloat([0,0,0]);
fieldValue145ZZZ.children[14] = HAnimJoint160;

let HAnimJoint161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint161.name = "r_radiocarpal";
HAnimJoint161.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint161.llimit = new X3D.MFFloat([0,0,0]);
fieldValue145ZZZ.children[15] = HAnimJoint161;

ProtoInstance138ZZZ.fieldValue[5] = fieldValue145;

let fieldValue162 = browser.currentScene.createNode("fieldValue");
fieldValue162.name = "transitionDuration";
fieldValue162.value = "1.2";
ProtoInstance138ZZZ.fieldValue[6] = fieldValue162;

let fieldValue163 = browser.currentScene.createNode("fieldValue");
fieldValue163.name = "traceEnabled";
fieldValue163.value = "true";
ProtoInstance138ZZZ.fieldValue[7] = fieldValue163;

browser.currentScene.children[8] = ProtoInstance138;

let ProtoInstance164 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance164.name = "HAnimPose";
ProtoInstance164.DEF = "I_Pose";
let fieldValue165 = browser.currentScene.createNode("fieldValue");
fieldValue165.name = "name";
fieldValue165.value = "I";
ProtoInstance164YYY.fieldValue = new X3D.MFNode();

ProtoInstance164ZZZ.fieldValue[0] = fieldValue165;

let fieldValue166 = browser.currentScene.createNode("fieldValue");
fieldValue166.name = "enabled";
fieldValue166.value = "true";
ProtoInstance164ZZZ.fieldValue[1] = fieldValue166;

let fieldValue167 = browser.currentScene.createNode("fieldValue");
fieldValue167.name = "parentHAnimHumanoid";
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
let HAnimHumanoid168 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid168.USE = "HumanoidImported";
fieldValue167YYY.children = new X3D.MFNode();

fieldValue167ZZZ.children[0] = HAnimHumanoid168;

ProtoInstance164ZZZ.fieldValue[2] = fieldValue167;

let fieldValue169 = browser.currentScene.createNode("fieldValue");
fieldValue169.name = "loa";
fieldValue169.value = "1";
ProtoInstance164ZZZ.fieldValue[3] = fieldValue169;

let fieldValue170 = browser.currentScene.createNode("fieldValue");
fieldValue170.name = "description";
fieldValue170.value = "arms and legs straight down default binding pose for baseline Humanoid";
ProtoInstance164ZZZ.fieldValue[4] = fieldValue170;

let fieldValue171 = browser.currentScene.createNode("fieldValue");
fieldValue171.name = "children";
//not defining any children equals the default \"I\" pose
ProtoInstance164ZZZ.fieldValue[5] = fieldValue171;

let fieldValue172 = browser.currentScene.createNode("fieldValue");
fieldValue172.name = "transitionDuration";
fieldValue172.value = "1.5";
ProtoInstance164ZZZ.fieldValue[6] = fieldValue172;

let fieldValue173 = browser.currentScene.createNode("fieldValue");
fieldValue173.name = "traceEnabled";
fieldValue173.value = "true";
ProtoInstance164ZZZ.fieldValue[7] = fieldValue173;

browser.currentScene.children[9] = ProtoInstance164;

let ProtoInstance174 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance174.name = "HAnimPose";
ProtoInstance174.DEF = "H_Pose";
let fieldValue175 = browser.currentScene.createNode("fieldValue");
fieldValue175.name = "name";
fieldValue175.value = "H";
ProtoInstance174YYY.fieldValue = new X3D.MFNode();

ProtoInstance174ZZZ.fieldValue[0] = fieldValue175;

let fieldValue176 = browser.currentScene.createNode("fieldValue");
fieldValue176.name = "enabled";
fieldValue176.value = "false";
ProtoInstance174ZZZ.fieldValue[1] = fieldValue176;

let fieldValue177 = browser.currentScene.createNode("fieldValue");
fieldValue177.name = "description";
fieldValue177.value = "TODO experimental pose not yet implemented";
ProtoInstance174ZZZ.fieldValue[2] = fieldValue177;

let fieldValue178 = browser.currentScene.createNode("fieldValue");
fieldValue178.name = "transitionDuration";
fieldValue178.value = "1.4";
ProtoInstance174ZZZ.fieldValue[3] = fieldValue178;

let fieldValue179 = browser.currentScene.createNode("fieldValue");
fieldValue179.name = "traceEnabled";
fieldValue179.value = "true";
ProtoInstance174ZZZ.fieldValue[4] = fieldValue179;

//<fieldValue name='loa' value='1'/>
browser.currentScene.children[10] = ProtoInstance174;

let ProtoInstance180 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance180.name = "HAnimPose";
ProtoInstance180.DEF = "FaceLeft_Pose";
let fieldValue181 = browser.currentScene.createNode("fieldValue");
fieldValue181.name = "name";
fieldValue181.value = "FaceLeft";
ProtoInstance180YYY.fieldValue = new X3D.MFNode();

ProtoInstance180ZZZ.fieldValue[0] = fieldValue181;

let fieldValue182 = browser.currentScene.createNode("fieldValue");
fieldValue182.name = "enabled";
fieldValue182.value = "true";
ProtoInstance180ZZZ.fieldValue[1] = fieldValue182;

let fieldValue183 = browser.currentScene.createNode("fieldValue");
fieldValue183.name = "parentHAnimHumanoid";
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
let HAnimHumanoid184 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid184.USE = "HumanoidImported";
fieldValue183YYY.children = new X3D.MFNode();

fieldValue183ZZZ.children[0] = HAnimHumanoid184;

ProtoInstance180ZZZ.fieldValue[2] = fieldValue183;

let fieldValue185 = browser.currentScene.createNode("fieldValue");
fieldValue185.name = "loa";
fieldValue185.value = "0";
ProtoInstance180ZZZ.fieldValue[3] = fieldValue185;

let fieldValue186 = browser.currentScene.createNode("fieldValue");
fieldValue186.name = "description";
fieldValue186.value = "Only modify humanoid_root Joint node to face left";
ProtoInstance180ZZZ.fieldValue[4] = fieldValue186;

let fieldValue187 = browser.currentScene.createNode("fieldValue");
fieldValue187.name = "children";
let HAnimJoint188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint188.name = "humanoid_root";
HAnimJoint188.DEF = "FaceLeft_humanoid_root";
HAnimJoint188.description = "Only rotate the model";
HAnimJoint188.rotation = new X3D.SFRotation([0,1,0,1.570796]);
HAnimJoint188.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint188.llimit = new X3D.MFFloat([0,0,0]);
fieldValue187YYY.children = new X3D.MFNode();

fieldValue187ZZZ.children[0] = HAnimJoint188;

ProtoInstance180ZZZ.fieldValue[5] = fieldValue187;

let fieldValue189 = browser.currentScene.createNode("fieldValue");
fieldValue189.name = "transitionDuration";
fieldValue189.value = "1.1";
ProtoInstance180ZZZ.fieldValue[6] = fieldValue189;

let fieldValue190 = browser.currentScene.createNode("fieldValue");
fieldValue190.name = "traceEnabled";
fieldValue190.value = "true";
ProtoInstance180ZZZ.fieldValue[7] = fieldValue190;

browser.currentScene.children[11] = ProtoInstance180;

let ProtoInstance191 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance191.name = "HAnimPose";
ProtoInstance191.DEF = "FaceRight_Pose";
let fieldValue192 = browser.currentScene.createNode("fieldValue");
fieldValue192.name = "name";
fieldValue192.value = "FaceRight";
ProtoInstance191YYY.fieldValue = new X3D.MFNode();

ProtoInstance191ZZZ.fieldValue[0] = fieldValue192;

let fieldValue193 = browser.currentScene.createNode("fieldValue");
fieldValue193.name = "enabled";
fieldValue193.value = "true";
ProtoInstance191ZZZ.fieldValue[1] = fieldValue193;

let fieldValue194 = browser.currentScene.createNode("fieldValue");
fieldValue194.name = "parentHAnimHumanoid";
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
let HAnimHumanoid195 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid195.USE = "HumanoidImported";
fieldValue194YYY.children = new X3D.MFNode();

fieldValue194ZZZ.children[0] = HAnimHumanoid195;

ProtoInstance191ZZZ.fieldValue[2] = fieldValue194;

let fieldValue196 = browser.currentScene.createNode("fieldValue");
fieldValue196.name = "loa";
fieldValue196.value = "0";
ProtoInstance191ZZZ.fieldValue[3] = fieldValue196;

let fieldValue197 = browser.currentScene.createNode("fieldValue");
fieldValue197.name = "description";
fieldValue197.value = "Only modify humanoid_root Joint node to face right";
ProtoInstance191ZZZ.fieldValue[4] = fieldValue197;

let fieldValue198 = browser.currentScene.createNode("fieldValue");
fieldValue198.name = "children";
let HAnimJoint199 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint199.name = "humanoid_root";
HAnimJoint199.DEF = "FaceRight_humanoid_root";
HAnimJoint199.description = "Only rotate the model";
HAnimJoint199.rotation = new X3D.SFRotation([0,1,0,-1.570796]);
HAnimJoint199.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint199.llimit = new X3D.MFFloat([0,0,0]);
fieldValue198YYY.children = new X3D.MFNode();

fieldValue198ZZZ.children[0] = HAnimJoint199;

ProtoInstance191ZZZ.fieldValue[5] = fieldValue198;

let fieldValue200 = browser.currentScene.createNode("fieldValue");
fieldValue200.name = "transitionDuration";
fieldValue200.value = "1.1";
ProtoInstance191ZZZ.fieldValue[6] = fieldValue200;

let fieldValue201 = browser.currentScene.createNode("fieldValue");
fieldValue201.name = "traceEnabled";
fieldValue201.value = "true";
ProtoInstance191ZZZ.fieldValue[7] = fieldValue201;

browser.currentScene.children[12] = ProtoInstance191;

let Group202 = browser.currentScene.createNode("Group");
Group202.DEF = "InterfaceButtonsGroup";
let Transform203 = browser.currentScene.createNode("Transform");
Transform203.DEF = "DisplayHeader";
Transform203.translation = new X3D.SFVec3f([0,2,0]);
let Shape204 = browser.currentScene.createNode("Shape");
let Text205 = browser.currentScene.createNode("Text");
Text205.string = new X3D.MFString([new X3D.SFString("HAnimPosePrototype example implementation")]);
let FontStyle206 = browser.currentScene.createNode("FontStyle");
FontStyle206.DEF = "HeaderFont";
FontStyle206.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle206.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle206.size = 0.15;
FontStyle206.style = "BOLD";
fontStyle = FontStyle206;

geometry = Text205;

let Appearance207 = browser.currentScene.createNode("Appearance");
Appearance207.DEF = "PoseTextAppearance";
let Material208 = browser.currentScene.createNode("Material");
Material208.diffuseColor = new X3D.SFColor([0.1,0.5,0.3]);
material = Material208;

appearance = Appearance207;

Transform203YYY.child = new X3D.undefined();

Transform203ZZZ.child[0] = Shape204;

Group202YYY.children = new X3D.MFNode();

Group202ZZZ.children[0] = Transform203;

let Transform209 = browser.currentScene.createNode("Transform");
Transform209.DEF = "T_PoseInterface";
Transform209.translation = new X3D.SFVec3f([-1.5,1.5,0]);
let Shape210 = browser.currentScene.createNode("Shape");
let Text211 = browser.currentScene.createNode("Text");
Text211.string = new X3D.MFString([new X3D.SFString("\"T\" Pose")]);
let FontStyle212 = browser.currentScene.createNode("FontStyle");
FontStyle212.DEF = "SharedFont";
FontStyle212.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle212.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle212.size = 0.1;
FontStyle212.style = "BOLD";
fontStyle = FontStyle212;

geometry = Text211;

let Appearance213 = browser.currentScene.createNode("Appearance");
Appearance213.USE = "PoseTextAppearance";
appearance = Appearance213;

Transform209YYY.child = new X3D.undefined();

Transform209ZZZ.child[0] = Shape210;

let Shape214 = browser.currentScene.createNode("Shape");
let Appearance215 = browser.currentScene.createNode("Appearance");
Appearance215.DEF = "TransparentAppearance";
let Material216 = browser.currentScene.createNode("Material");
Material216.transparency = 0.8;
material = Material216;

appearance = Appearance215;

let Box217 = browser.currentScene.createNode("Box");
Box217.size = new X3D.SFVec3f([0.45,0.2,0.001]);
geometry = Box217;

Transform209ZZZ.child[1] = Shape214;

let TouchSensor218 = browser.currentScene.createNode("TouchSensor");
TouchSensor218.DEF = "T_PoseTouchSensor";
TouchSensor218.description = "select to move shoulders to \"T\" pose, leave other joints unchanged";
Transform209ZZZ.children[2] = TouchSensor218;

let ROUTE219 = browser.currentScene.createNode("ROUTE");
ROUTE219.fromField = "isActive";
ROUTE219.fromNode = "T_PoseTouchSensor";
ROUTE219.toField = "commencePose";
ROUTE219.toNode = "T_Pose";
Transform209ZZZ.children[3] = ROUTE219;

Group202ZZZ.children[1] = Transform209;

let Transform220 = browser.currentScene.createNode("Transform");
Transform220.DEF = "A_PoseInterface";
Transform220.translation = new X3D.SFVec3f([-1.5,1,0]);
let Shape221 = browser.currentScene.createNode("Shape");
let Text222 = browser.currentScene.createNode("Text");
Text222.string = new X3D.MFString([new X3D.SFString("\"A\" Pose")]);
let FontStyle223 = browser.currentScene.createNode("FontStyle");
FontStyle223.USE = "SharedFont";
fontStyle = FontStyle223;

geometry = Text222;

let Appearance224 = browser.currentScene.createNode("Appearance");
Appearance224.USE = "PoseTextAppearance";
appearance = Appearance224;

Transform220YYY.child = new X3D.undefined();

Transform220ZZZ.child[0] = Shape221;

let Shape225 = browser.currentScene.createNode("Shape");
//Selectable Text transparent Box for easy user selection
let Appearance226 = browser.currentScene.createNode("Appearance");
Appearance226.USE = "TransparentAppearance";
appearance = Appearance226;

let Box227 = browser.currentScene.createNode("Box");
Box227.size = new X3D.SFVec3f([0.45,0.2,0.001]);
geometry = Box227;

Transform220ZZZ.child[1] = Shape225;

let TouchSensor228 = browser.currentScene.createNode("TouchSensor");
TouchSensor228.DEF = "A_PoseTouchSensor";
TouchSensor228.description = "select to move shoulders to \"A\" pose, leave other joints unchanged";
Transform220ZZZ.children[2] = TouchSensor228;

let ROUTE229 = browser.currentScene.createNode("ROUTE");
ROUTE229.fromField = "isActive";
ROUTE229.fromNode = "A_PoseTouchSensor";
ROUTE229.toField = "commencePose";
ROUTE229.toNode = "A_Pose";
Transform220ZZZ.children[3] = ROUTE229;

Group202ZZZ.children[2] = Transform220;

let Transform230 = browser.currentScene.createNode("Transform");
Transform230.DEF = "TouchDown_PoseInterface";
Transform230.translation = new X3D.SFVec3f([-1.5,0.5,0]);
let Shape231 = browser.currentScene.createNode("Shape");
let Text232 = browser.currentScene.createNode("Text");
Text232.string = new X3D.MFString([new X3D.SFString("TouchDown Pose")]);
let FontStyle233 = browser.currentScene.createNode("FontStyle");
FontStyle233.USE = "SharedFont";
fontStyle = FontStyle233;

geometry = Text232;

let Appearance234 = browser.currentScene.createNode("Appearance");
Appearance234.USE = "PoseTextAppearance";
appearance = Appearance234;

Transform230YYY.child = new X3D.undefined();

Transform230ZZZ.child[0] = Shape231;

let Shape235 = browser.currentScene.createNode("Shape");
//Selectable Text transparent Box for easy user selection
let Appearance236 = browser.currentScene.createNode("Appearance");
Appearance236.USE = "TransparentAppearance";
appearance = Appearance236;

let Box237 = browser.currentScene.createNode("Box");
Box237.size = new X3D.SFVec3f([0.85,0.2,0.001]);
geometry = Box237;

Transform230ZZZ.child[1] = Shape235;

let TouchSensor238 = browser.currentScene.createNode("TouchSensor");
TouchSensor238.DEF = "TouchDown_PoseTouchSensor";
TouchSensor238.description = "select to transition all joints to TouchDown pose";
Transform230ZZZ.children[2] = TouchSensor238;

let ROUTE239 = browser.currentScene.createNode("ROUTE");
ROUTE239.fromField = "isActive";
ROUTE239.fromNode = "TouchDown_PoseTouchSensor";
ROUTE239.toField = "commencePose";
ROUTE239.toNode = "TouchDown_Pose";
Transform230ZZZ.children[3] = ROUTE239;

Group202ZZZ.children[3] = Transform230;

let Transform240 = browser.currentScene.createNode("Transform");
Transform240.DEF = "I_PoseInterface";
Transform240.translation = new X3D.SFVec3f([-1.5,0,0]);
let Shape241 = browser.currentScene.createNode("Shape");
let Text242 = browser.currentScene.createNode("Text");
Text242.string = new X3D.MFString([new X3D.SFString("\"I\" Pose")]);
let FontStyle243 = browser.currentScene.createNode("FontStyle");
FontStyle243.USE = "SharedFont";
fontStyle = FontStyle243;

geometry = Text242;

let Appearance244 = browser.currentScene.createNode("Appearance");
Appearance244.USE = "PoseTextAppearance";
appearance = Appearance244;

Transform240YYY.child = new X3D.undefined();

Transform240ZZZ.child[0] = Shape241;

let Shape245 = browser.currentScene.createNode("Shape");
//Selectable Text transparent Box for easy user selection
let Appearance246 = browser.currentScene.createNode("Appearance");
Appearance246.USE = "TransparentAppearance";
appearance = Appearance246;

let Box247 = browser.currentScene.createNode("Box");
Box247.size = new X3D.SFVec3f([0.45,0.2,0.001]);
geometry = Box247;

Transform240ZZZ.child[1] = Shape245;

let TouchSensor248 = browser.currentScene.createNode("TouchSensor");
TouchSensor248.DEF = "I_PoseTouchSensor";
TouchSensor248.description = "select to transition all joints to \"I\" pose";
Transform240ZZZ.children[2] = TouchSensor248;

let ROUTE249 = browser.currentScene.createNode("ROUTE");
ROUTE249.fromField = "isActive";
ROUTE249.fromNode = "I_PoseTouchSensor";
ROUTE249.toField = "commencePose";
ROUTE249.toNode = "I_Pose";
Transform240ZZZ.children[3] = ROUTE249;

Group202ZZZ.children[4] = Transform240;

let Transform250 = browser.currentScene.createNode("Transform");
Transform250.DEF = "FaceLeftPoseInterface";
Transform250.translation = new X3D.SFVec3f([1.5,1.5,0]);
let Shape251 = browser.currentScene.createNode("Shape");
let Text252 = browser.currentScene.createNode("Text");
Text252.string = new X3D.MFString([new X3D.SFString("Face Left Pose")]);
let FontStyle253 = browser.currentScene.createNode("FontStyle");
FontStyle253.USE = "SharedFont";
fontStyle = FontStyle253;

geometry = Text252;

let Appearance254 = browser.currentScene.createNode("Appearance");
Appearance254.USE = "PoseTextAppearance";
appearance = Appearance254;

Transform250YYY.child = new X3D.undefined();

Transform250ZZZ.child[0] = Shape251;

let Shape255 = browser.currentScene.createNode("Shape");
let Appearance256 = browser.currentScene.createNode("Appearance");
Appearance256.USE = "TransparentAppearance";
appearance = Appearance256;

let Box257 = browser.currentScene.createNode("Box");
Box257.size = new X3D.SFVec3f([0.9,0.2,0.001]);
geometry = Box257;

Transform250ZZZ.child[1] = Shape255;

let TouchSensor258 = browser.currentScene.createNode("TouchSensor");
TouchSensor258.DEF = "FaceLeftTouchSensor";
TouchSensor258.description = "select to rotate body and Face Left, leave other joints unchanged";
Transform250ZZZ.children[2] = TouchSensor258;

let ROUTE259 = browser.currentScene.createNode("ROUTE");
ROUTE259.fromField = "isActive";
ROUTE259.fromNode = "FaceLeftTouchSensor";
ROUTE259.toField = "commencePose";
ROUTE259.toNode = "FaceLeft_Pose";
Transform250ZZZ.children[3] = ROUTE259;

Group202ZZZ.children[5] = Transform250;

let Transform260 = browser.currentScene.createNode("Transform");
Transform260.DEF = "FaceRightPoseInterface";
Transform260.translation = new X3D.SFVec3f([1.5,1,0]);
let Shape261 = browser.currentScene.createNode("Shape");
let Text262 = browser.currentScene.createNode("Text");
Text262.string = new X3D.MFString([new X3D.SFString("Face Right Pose")]);
let FontStyle263 = browser.currentScene.createNode("FontStyle");
FontStyle263.USE = "SharedFont";
fontStyle = FontStyle263;

geometry = Text262;

let Appearance264 = browser.currentScene.createNode("Appearance");
Appearance264.USE = "PoseTextAppearance";
appearance = Appearance264;

Transform260YYY.child = new X3D.undefined();

Transform260ZZZ.child[0] = Shape261;

let Shape265 = browser.currentScene.createNode("Shape");
//Selectable Text transparent Box for easy user selection
let Appearance266 = browser.currentScene.createNode("Appearance");
Appearance266.USE = "TransparentAppearance";
appearance = Appearance266;

let Box267 = browser.currentScene.createNode("Box");
Box267.size = new X3D.SFVec3f([0.9,0.2,0.001]);
geometry = Box267;

Transform260ZZZ.child[1] = Shape265;

let TouchSensor268 = browser.currentScene.createNode("TouchSensor");
TouchSensor268.DEF = "FaceRightTouchSensor";
TouchSensor268.description = "select to rotate body and Face Right, leave other joints unchanged";
Transform260ZZZ.children[2] = TouchSensor268;

let ROUTE269 = browser.currentScene.createNode("ROUTE");
ROUTE269.fromField = "isActive";
ROUTE269.fromNode = "FaceRightTouchSensor";
ROUTE269.toField = "commencePose";
ROUTE269.toNode = "FaceRight_Pose";
Transform260ZZZ.children[3] = ROUTE269;

Group202ZZZ.children[6] = Transform260;

let Transform270 = browser.currentScene.createNode("Transform");
Transform270.DEF = "AnimatePosesInterface";
Transform270.translation = new X3D.SFVec3f([1.5,0.5,0]);
let Shape271 = browser.currentScene.createNode("Shape");
let Text272 = browser.currentScene.createNode("Text");
Text272.string = new X3D.MFString([new X3D.SFString("Direct animation"), new X3D.SFString("to, from \"I\" Pose")]);
let FontStyle273 = browser.currentScene.createNode("FontStyle");
FontStyle273.USE = "SharedFont";
fontStyle = FontStyle273;

geometry = Text272;

let Appearance274 = browser.currentScene.createNode("Appearance");
Appearance274.DEF = "AnimationTextAppearance";
let Material275 = browser.currentScene.createNode("Material");
Material275.diffuseColor = new X3D.SFColor([0.1,0.2,0.3]);
material = Material275;

appearance = Appearance274;

Transform270YYY.child = new X3D.undefined();

Transform270ZZZ.child[0] = Shape271;

let Shape276 = browser.currentScene.createNode("Shape");
//Selectable Text transparent Box for easy user selection
let Appearance277 = browser.currentScene.createNode("Appearance");
Appearance277.USE = "TransparentAppearance";
appearance = Appearance277;

let Box278 = browser.currentScene.createNode("Box");
Box278.size = new X3D.SFVec3f([0.9,0.25,0.001]);
geometry = Box278;

Transform270ZZZ.child[1] = Shape276;

let TouchSensor279 = browser.currentScene.createNode("TouchSensor");
TouchSensor279.DEF = "AnimatePosesTouchSensor";
TouchSensor279.description = "select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events";
Transform270ZZZ.children[2] = TouchSensor279;

//cycleInterval=4 also hard-coded in script execution message
let TimeSensor280 = browser.currentScene.createNode("TimeSensor");
TimeSensor280.DEF = "AnimatePosesClock";
TimeSensor280.cycleInterval = 4;
TimeSensor280.description = "directly animate several poses";
Transform270ZZZ.children[3] = TimeSensor280;

let ScalarInterpolator281 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator281.DEF = "AnimatePosesLoopInterpolator";
ScalarInterpolator281.key = new X3D.MFFloat([0,0.05,0.45,0.55,0.95,1]);
ScalarInterpolator281.keyValue = new X3D.MFFloat([0,0,1,1,0,0]);
Transform270ZZZ.children[4] = ScalarInterpolator281;

let ROUTE282 = browser.currentScene.createNode("ROUTE");
ROUTE282.fromField = "touchTime";
ROUTE282.fromNode = "AnimatePosesTouchSensor";
ROUTE282.toField = "startTime";
ROUTE282.toNode = "AnimatePosesClock";
Transform270ZZZ.children[5] = ROUTE282;

let ROUTE283 = browser.currentScene.createNode("ROUTE");
ROUTE283.fromField = "fraction_changed";
ROUTE283.fromNode = "AnimatePosesClock";
ROUTE283.toField = "set_fraction";
ROUTE283.toNode = "AnimatePosesLoopInterpolator";
Transform270ZZZ.children[6] = ROUTE283;

let ROUTE284 = browser.currentScene.createNode("ROUTE");
ROUTE284.fromField = "value_changed";
ROUTE284.fromNode = "AnimatePosesLoopInterpolator";
ROUTE284.toField = "set_fraction";
ROUTE284.toNode = "I_Pose";
Transform270ZZZ.children[7] = ROUTE284;

Group202ZZZ.children[7] = Transform270;

let Transform285 = browser.currentScene.createNode("Transform");
Transform285.DEF = "ResetDefaultPoseInterface";
Transform285.translation = new X3D.SFVec3f([1.5,0,0]);
let Shape286 = browser.currentScene.createNode("Shape");
let Text287 = browser.currentScene.createNode("Text");
Text287.string = new X3D.MFString([new X3D.SFString("Reset All Joints"), new X3D.SFString("to Default \"I\" Pose")]);
let FontStyle288 = browser.currentScene.createNode("FontStyle");
FontStyle288.USE = "SharedFont";
fontStyle = FontStyle288;

geometry = Text287;

let Appearance289 = browser.currentScene.createNode("Appearance");
Appearance289.USE = "AnimationTextAppearance";
appearance = Appearance289;

Transform285YYY.child = new X3D.undefined();

Transform285ZZZ.child[0] = Shape286;

let Shape290 = browser.currentScene.createNode("Shape");
//Selectable Text transparent Box for easy user selection
let Appearance291 = browser.currentScene.createNode("Appearance");
Appearance291.USE = "TransparentAppearance";
appearance = Appearance291;

let Box292 = browser.currentScene.createNode("Box");
Box292.size = new X3D.SFVec3f([0.9,0.25,0.001]);
geometry = Box292;

Transform285ZZZ.child[1] = Shape290;

let TouchSensor293 = browser.currentScene.createNode("TouchSensor");
TouchSensor293.DEF = "ResetPoseTouchSensor";
TouchSensor293.description = "select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event";
Transform285ZZZ.children[2] = TouchSensor293;

let ROUTE294 = browser.currentScene.createNode("ROUTE");
ROUTE294.fromField = "isActive";
ROUTE294.fromNode = "ResetPoseTouchSensor";
ROUTE294.toField = "resetAllJoints";
ROUTE294.toNode = "FaceLeft_Pose";
Transform285ZZZ.children[3] = ROUTE294;

Group202ZZZ.children[8] = Transform285;

browser.currentScene.children[13] = Group202;

let Group295 = browser.currentScene.createNode("Group");
Group295.DEF = "HandleInlineLoadsensorRouting";
let ROUTE296 = browser.currentScene.createNode("ROUTE");
ROUTE296.fromField = "isLoaded";
ROUTE296.fromNode = "HumanoidInlineLoadSensor";
ROUTE296.toField = "isLoaded";
ROUTE296.toNode = "A_Pose";
Group295YYY.children = new X3D.MFNode();

Group295ZZZ.children[0] = ROUTE296;

let ROUTE297 = browser.currentScene.createNode("ROUTE");
ROUTE297.fromField = "isLoaded";
ROUTE297.fromNode = "HumanoidInlineLoadSensor";
ROUTE297.toField = "isLoaded";
ROUTE297.toNode = "H_Pose";
Group295ZZZ.children[1] = ROUTE297;

let ROUTE298 = browser.currentScene.createNode("ROUTE");
ROUTE298.fromField = "isLoaded";
ROUTE298.fromNode = "HumanoidInlineLoadSensor";
ROUTE298.toField = "isLoaded";
ROUTE298.toNode = "I_Pose";
Group295ZZZ.children[2] = ROUTE298;

let ROUTE299 = browser.currentScene.createNode("ROUTE");
ROUTE299.fromField = "isLoaded";
ROUTE299.fromNode = "HumanoidInlineLoadSensor";
ROUTE299.toField = "isLoaded";
ROUTE299.toNode = "T_Pose";
Group295ZZZ.children[3] = ROUTE299;

let ROUTE300 = browser.currentScene.createNode("ROUTE");
ROUTE300.fromField = "isLoaded";
ROUTE300.fromNode = "HumanoidInlineLoadSensor";
ROUTE300.toField = "isLoaded";
ROUTE300.toNode = "FaceLeft_Pose";
Group295ZZZ.children[4] = ROUTE300;

let ROUTE301 = browser.currentScene.createNode("ROUTE");
ROUTE301.fromField = "isLoaded";
ROUTE301.fromNode = "HumanoidInlineLoadSensor";
ROUTE301.toField = "isLoaded";
ROUTE301.toNode = "FaceRight_Pose";
Group295ZZZ.children[5] = ROUTE301;

let ROUTE302 = browser.currentScene.createNode("ROUTE");
ROUTE302.fromField = "isLoaded";
ROUTE302.fromNode = "HumanoidInlineLoadSensor";
ROUTE302.toField = "isLoaded";
ROUTE302.toNode = "TouchDown_Pose";
Group295ZZZ.children[6] = ROUTE302;

browser.currentScene.children[14] = Group295;

}
main ();

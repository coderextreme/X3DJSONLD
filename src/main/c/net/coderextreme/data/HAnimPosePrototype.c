#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "HAnimPosePrototype.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Define an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "info";
meta4.content = "This model also takes advantage of Inline/IMPORT capabilities (equivalent to USE node) and thus avoids fully copying a large, complex HAnimHumanoid model. Multiple HAnimHumanoid models have been tested satisfactorily, for HAnim version 1 (X3d 3) AND HAnim version 2 (X3D 4).";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "created";
meta5.content = "2 October 2025";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "14 December 2025";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "creator";
meta7.content = "Don Brutzman";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "creator";
meta8.content = "Joe Williams";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "contributor";
meta9.content = "Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "HAnimPosePrototype.console.txt";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "MovingImage";
meta11.content = "demonstration video https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeDemoVideo.mp4";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "Image";
meta12.content = "HAnimPoseExampleTouchDown.png";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "Image";
meta13.content = "HAnimPoseExampleTouchDownFaceLeftAPose.png";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "Image";
meta14.content = "images/HAnimPoseExampleBoxMan1.png";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "Image";
meta15.content = "images/HAnimPoseExampleBoxMan2.png";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "Image";
meta16.content = "images/HAnimPoseExampleJoeKick.png";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "Image";
meta17.content = "images/HAnimPoseExampleJoeSkeletonSkinSite.png";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "Image";
meta18.content = "images/HAnimPoseExampleKoreanCharacter01Jin.png";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "Image";
meta19.content = "images/HAnimPoseExampleKoreanCharacter02Chul.png";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "Image";
meta20.content = "images/HAnimPoseExampleKoreanCharacter03Hyun.png";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "Image";
meta21.content = "images/HAnimPoseExampleKoreanCharacter04Young.png";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "Image";
meta22.content = "images/HAnimPoseExampleKoreanCharacter05Ju.png";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "Image";
meta23.content = "images/HAnimPoseExampleKoreanCharacter06Ga.png";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "Image";
meta24.content = "images/HAnimPoseExampleKoreanCharacter07No.png";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "Image";
meta25.content = "images/HAnimPoseExampleKoreanCharacter08Da.png";
head1.meta[23] = meta25;

meta meta26 = createNode("meta");
meta26.name = "Image";
meta26.content = "images/HAnimPoseExampleKoreanCharacter09Ru.png";
head1.meta[24] = meta26;

meta meta27 = createNode("meta");
meta27.name = "Image";
meta27.content = "images/HAnimPoseExampleKoreanCharacter10Mi.png";
head1.meta[25] = meta27;

meta meta28 = createNode("meta");
meta28.name = "Image";
meta28.content = "images/HAnimPoseExampleKoreanCharacter11Min.png";
head1.meta[26] = meta28;

meta meta29 = createNode("meta");
meta29.name = "Image";
meta29.content = "images/HAnimPoseExampleKoreanCharacter12Sun.png";
head1.meta[27] = meta29;

meta meta30 = createNode("meta");
meta30.name = "specificationSection";
meta30.content = "HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose";
head1.meta[28] = meta30;

meta meta31 = createNode("meta");
meta31.name = "specificationUrl";
meta31.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose";
head1.meta[29] = meta31;

meta meta32 = createNode("meta");
meta32.name = "specificationSection";
meta32.content = "HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures";
head1.meta[30] = meta32;

meta meta33 = createNode("meta");
meta33.name = "specificationUrl";
meta33.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures";
head1.meta[31] = meta33;

meta meta34 = createNode("meta");
meta34.name = "specificationSection";
meta34.content = "HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses";
head1.meta[32] = meta34;

meta meta35 = createNode("meta");
meta35.name = "specificationUrl";
meta35.content = "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses";
head1.meta[33] = meta35;

meta meta36 = createNode("meta");
meta36.name = "reference";
meta36.content = "Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript";
head1.meta[34] = meta36;

meta meta37 = createNode("meta");
meta37.name = "reference";
meta37.content = "earlier version of this prototype: originals/HAnimPosePreliminary.x3d";
head1.meta[35] = meta37;

meta meta38 = createNode("meta");
meta38.name = "generator";
meta38.content = "X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit";
head1.meta[36] = meta38;

meta meta39 = createNode("meta");
meta39.name = "generator";
meta39.content = "Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize";
head1.meta[37] = meta39;

meta meta40 = createNode("meta");
meta40.name = "identifier";
meta40.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototype.x3d";
head1.meta[38] = meta40;

meta meta41 = createNode("meta");
meta41.name = "license";
meta41.content = "https://www.web3d.org/x3d/content/examples/license.html";
head1.meta[39] = meta41;

head = head1;

WorldInfo WorldInfo43 = createNode("WorldInfo");
WorldInfo43.DEF = "ModelInfo";
WorldInfo43.info = new MFString(new java.lang.String["Design to illustrate a potential HAnimPose node"]);
WorldInfo43.title = "HAnimPosePrototype.x3d";
children = new MFNode();

children[0] = WorldInfo43;

Background Background44 = createNode("Background");
Background44.skyColor = new MFColor(new float[0.8,0.8,1]);
children[1] = Background44;

NavigationInfo NavigationInfo45 = createNode("NavigationInfo");
children[2] = NavigationInfo45;

Group Group46 = createNode("Group");
Group46.DEF = "HandleInlineLoading";
//Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2
//Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun
Inline Inline47 = createNode("Inline");
Inline47.DEF = "HumanoidInline";
Inline47.description = "remote HAnimHumanoid for IMPORT";
Inline47.url = new MFString(new java.lang.String["../Skin/BoxMan2.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/BoxMan2.x3d"]);
Group46.children = new MFNode();

Group46.children[0] = Inline47;

//Note that the following importedDEF must match the EXPORT name found in remote file
IMPORT IMPORT48 = createNode("IMPORT");
IMPORT48.AS = "HumanoidImported";
IMPORT48.importedDEF = "BoxMan2";
IMPORT48.inlineDEF = "HumanoidInline";
Group46.children[1] = IMPORT48;

LoadSensor LoadSensor49 = createNode("LoadSensor");
LoadSensor49.DEF = "HumanoidInlineLoadSensor";
LoadSensor49.timeOut = 2;
Inline Inline50 = createNode("Inline");
Inline50.USE = "HumanoidInline";
LoadSensor49.children = new MFNode();

LoadSensor49.children[0] = Inline50;

Group46.children[2] = LoadSensor49;

children[3] = Group46;

ProtoDeclare ProtoDeclare51 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface ProtoInterface52 = createNode("ProtoInterface");
field field53 = createNode("field");
field53.name = "parentHAnimHumanoid";
field53.accessType = "inputOutput";
field53.appinfo = "HAnimHumanoid for this Pose to act upon";
field53.type = "SFNode";
//HAnimHumanoid initialization node goes here, this field is only used in the prototype implementation
ProtoInterface52.field = new MFNode();

ProtoInterface52.field[0] = field53;

field field54 = createNode("field");
field54.name = "name";
field54.accessType = "inputOutput";
field54.appinfo = "name of this pose";
field54.type = "SFString";
field54.value = "newPoseName";
ProtoInterface52.field[1] = field54;

field field55 = createNode("field");
field55.name = "children";
field55.accessType = "inputOutput";
field55.appinfo = "joint values to apply to HAnimHumanoid";
field55.type = "MFNode";
//initializating Joint nodes (if any) go here
ProtoInterface52.field[2] = field55;

field field56 = createNode("field");
field56.name = "description";
field56.accessType = "inputOutput";
field56.appinfo = "explanation of purpose";
field56.type = "SFString";
ProtoInterface52.field[3] = field56;

field field57 = createNode("field");
field57.name = "enabled";
field57.accessType = "inputOutput";
field57.appinfo = "default value true";
field57.type = "SFBool";
field57.value = "true";
ProtoInterface52.field[4] = field57;

field field58 = createNode("field");
field58.name = "loa";
field58.accessType = "initializeOnly";
field58.appinfo = "default is no loa";
field58.type = "SFInt32";
field58.value = "-1";
ProtoInterface52.field[5] = field58;

field field59 = createNode("field");
field59.name = "transitionDuration";
field59.accessType = "inputOutput";
field59.appinfo = "how many seconds to achieve the pose";
field59.type = "SFTime";
field59.value = "0";
ProtoInterface52.field[6] = field59;

field field60 = createNode("field");
field60.name = "metadata";
field60.accessType = "inputOutput";
field60.appinfo = "single Metadata* node";
field60.type = "SFNode";
ProtoInterface52.field[7] = field60;

field field61 = createNode("field");
field61.name = "isActive";
field61.accessType = "outputOnly";
field61.appinfo = "event indicating when pose transition is active";
field61.type = "SFBool";
ProtoInterface52.field[8] = field61;

field field62 = createNode("field");
field62.name = "commencePose";
field62.accessType = "inputOnly";
field62.appinfo = "this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1";
field62.type = "SFBool";
ProtoInterface52.field[9] = field62;

field field63 = createNode("field");
field63.name = "resetAllJoints";
field63.accessType = "inputOnly";
field63.appinfo = "reset the skeleton to I pose with all joints zeroed";
field63.type = "SFBool";
ProtoInterface52.field[10] = field63;

field field64 = createNode("field");
field64.name = "set_fraction";
field64.accessType = "inputOnly";
field64.appinfo = "allows transition to proceed incrementally from fraction [0..10";
field64.type = "SFFloat";
ProtoInterface52.field[11] = field64;

field field65 = createNode("field");
field65.name = "set_startTime";
field65.accessType = "inputOnly";
field65.appinfo = "starts the animation clock";
field65.type = "SFTime";
ProtoInterface52.field[12] = field65;

field field66 = createNode("field");
field66.name = "isLoaded";
field66.accessType = "inputOnly";
field66.appinfo = "possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE";
field66.type = "SFBool";
ProtoInterface52.field[13] = field66;

field field67 = createNode("field");
field67.name = "traceEnabled";
field67.accessType = "inputOutput";
field67.appinfo = "debug trace to Browser output console this is a local prototype field";
field67.type = "SFBool";
field67.value = "true";
ProtoInterface52.field[14] = field67;

ProtoDeclare51.protoInterface = ProtoInterface52;

ProtoBody ProtoBody68 = createNode("ProtoBody");
TimeSensor TimeSensor69 = createNode("TimeSensor");
TimeSensor69.DEF = "ClockTimeSensor";
TimeSensor69.description = "control timing of pose animation when triggered";
IS IS70 = createNode("IS");
connect connect71 = createNode("connect");
connect71.nodeField = "enabled";
connect71.protoField = "enabled";
IS70.connect = new MFNode();

IS70.connect[0] = connect71;

connect connect72 = createNode("connect");
connect72.nodeField = "cycleInterval";
connect72.protoField = "transitionDuration";
IS70.connect[1] = connect72;

connect connect73 = createNode("connect");
connect73.nodeField = "isActive";
connect73.protoField = "isActive";
IS70.connect[2] = connect73;

connect connect74 = createNode("connect");
connect74.nodeField = "startTime";
connect74.protoField = "set_startTime";
IS70.connect[3] = connect74;

connect connect75 = createNode("connect");
connect75.nodeField = "metadata";
connect75.protoField = "metadata";
IS70.connect[4] = connect75;

TimeSensor69.iS = IS70;

ProtoBody68.children = new MFNode();

ProtoBody68.children[0] = TimeSensor69;

TimeSensor TimeSensor76 = createNode("TimeSensor");
TimeSensor76.DEF = "ResetTimeSensor";
TimeSensor76.description = "control timing of skeleton reset to \"A\" pose when triggered";
IS IS77 = createNode("IS");
connect connect78 = createNode("connect");
connect78.nodeField = "enabled";
connect78.protoField = "enabled";
IS77.connect = new MFNode();

IS77.connect[0] = connect78;

connect connect79 = createNode("connect");
connect79.nodeField = "cycleInterval";
connect79.protoField = "transitionDuration";
IS77.connect[1] = connect79;

connect connect80 = createNode("connect");
connect80.nodeField = "startTime";
connect80.protoField = "set_startTime";
IS77.connect[2] = connect80;

//no need to report isActive since that would be duplicative
TimeSensor76.iS = IS77;

ProtoBody68.children[1] = TimeSensor76;

Group Group81 = createNode("Group");
Group81.DEF = "PoseInterpolatorGroup";
//interpolators generated by prototype script appear here at runtime
ProtoBody68.children[2] = Group81;

Group Group82 = createNode("Group");
Group82.DEF = "ResetInterpolatorGroup";
//interpolators generated by prototype script appear here at runtime
ProtoBody68.children[3] = Group82;

Script Script83 = createNode("Script");
Script83.DEF = "HAnimPoseScript";
Script83.directOutput = True;
Script83.url = new MFString(new java.lang.String["HAnimPosePrototypeScript.js","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeScript.js"]);
field field84 = createNode("field");
field84.name = "parentHAnimHumanoid";
field84.accessType = "inputOutput";
field84.appinfo = "Humanoid for this Pose to act upon";
field84.type = "SFNode";
//initialization node (if any) goes here
Script83.field = new MFNode();

Script83.field[0] = field84;

field field85 = createNode("field");
field85.name = "name";
field85.accessType = "inputOutput";
field85.appinfo = "name of this pose";
field85.type = "SFString";
Script83.field[1] = field85;

field field86 = createNode("field");
field86.name = "loa";
field86.accessType = "initializeOnly";
field86.appinfo = "default is no loa";
field86.type = "SFInt32";
Script83.field[2] = field86;

field field87 = createNode("field");
field87.name = "description";
field87.accessType = "inputOutput";
field87.appinfo = "explanation of purpose";
field87.type = "SFString";
Script83.field[3] = field87;

field field88 = createNode("field");
field88.name = "enabled";
field88.accessType = "inputOutput";
field88.appinfo = "default value true";
field88.type = "SFBool";
Script83.field[4] = field88;

field field89 = createNode("field");
field89.name = "resetAllJoints";
field89.accessType = "inputOnly";
field89.appinfo = "reset the skeleton to I pose with all joints zeroed";
field89.type = "SFBool";
Script83.field[5] = field89;

field field90 = createNode("field");
field90.name = "children";
field90.accessType = "inputOutput";
field90.appinfo = "joint values to apply to HAnimHumanoid";
field90.type = "MFNode";
//initializating Joint nodes (if any) go here
Script83.field[6] = field90;

field field91 = createNode("field");
field91.name = "transitionDuration";
field91.accessType = "inputOutput";
field91.appinfo = "how many seconds to achieve the pose";
field91.type = "SFTime";
Script83.field[7] = field91;

field field92 = createNode("field");
field92.name = "commencePose";
field92.accessType = "inputOnly";
field92.appinfo = "this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1";
field92.type = "SFBool";
Script83.field[8] = field92;

field field93 = createNode("field");
field93.name = "set_fraction";
field93.accessType = "inputOnly";
field93.appinfo = "allows transition to proceed incrementally from fraction [0..10";
field93.type = "SFFloat";
Script83.field[9] = field93;

field field94 = createNode("field");
field94.name = "set_startTime";
field94.accessType = "inputOnly";
field94.appinfo = "starts the animation clock";
field94.type = "SFTime";
Script83.field[10] = field94;

field field95 = createNode("field");
field95.name = "isLoaded";
field95.accessType = "inputOnly";
field95.appinfo = "possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE";
field95.type = "SFBool";
Script83.field[11] = field95;

field field96 = createNode("field");
field96.name = "traceEnabled";
field96.accessType = "inputOutput";
field96.appinfo = "debug trace to Browser output console";
field96.type = "SFBool";
Script83.field[12] = field96;

field field97 = createNode("field");
field97.name = "numberPoseJoints";
field97.accessType = "initializeOnly";
field97.appinfo = "number of joints found in children field";
field97.type = "SFInt32";
field97.value = "0";
Script83.field[13] = field97;

field field98 = createNode("field");
field98.name = "numberSkeletonJoints";
field98.accessType = "initializeOnly";
field98.appinfo = "number of joints found in Humanoid";
field98.type = "SFInt32";
field98.value = "0";
Script83.field[14] = field98;

field field99 = createNode("field");
field99.name = "jointOrientationInterpolators";
field99.accessType = "initializeOnly";
field99.appinfo = "OrientationInterpolator node array matching number of children";
field99.type = "MFNode";
//initializating Joint nodes (if any) go here
Script83.field[15] = field99;

IS IS100 = createNode("IS");
connect connect101 = createNode("connect");
connect101.nodeField = "parentHAnimHumanoid";
connect101.protoField = "parentHAnimHumanoid";
IS100.connect = new MFNode();

IS100.connect[0] = connect101;

connect connect102 = createNode("connect");
connect102.nodeField = "name";
connect102.protoField = "name";
IS100.connect[1] = connect102;

connect connect103 = createNode("connect");
connect103.nodeField = "loa";
connect103.protoField = "loa";
IS100.connect[2] = connect103;

connect connect104 = createNode("connect");
connect104.nodeField = "description";
connect104.protoField = "description";
IS100.connect[3] = connect104;

connect connect105 = createNode("connect");
connect105.nodeField = "enabled";
connect105.protoField = "enabled";
IS100.connect[4] = connect105;

connect connect106 = createNode("connect");
connect106.nodeField = "resetAllJoints";
connect106.protoField = "resetAllJoints";
IS100.connect[5] = connect106;

connect connect107 = createNode("connect");
connect107.nodeField = "children";
connect107.protoField = "children";
IS100.connect[6] = connect107;

connect connect108 = createNode("connect");
connect108.nodeField = "transitionDuration";
connect108.protoField = "transitionDuration";
IS100.connect[7] = connect108;

connect connect109 = createNode("connect");
connect109.nodeField = "commencePose";
connect109.protoField = "commencePose";
IS100.connect[8] = connect109;

connect connect110 = createNode("connect");
connect110.nodeField = "set_fraction";
connect110.protoField = "set_fraction";
IS100.connect[9] = connect110;

connect connect111 = createNode("connect");
connect111.nodeField = "set_startTime";
connect111.protoField = "set_startTime";
IS100.connect[10] = connect111;

connect connect112 = createNode("connect");
connect112.nodeField = "isLoaded";
connect112.protoField = "isLoaded";
IS100.connect[11] = connect112;

connect connect113 = createNode("connect");
connect113.nodeField = "traceEnabled";
connect113.protoField = "traceEnabled";
IS100.connect[12] = connect113;

Script83.iS = IS100;

ProtoBody68.children[4] = Script83;

ProtoDeclare51.protoBody = ProtoBody68;

children[4] = ProtoDeclare51;

Viewpoint Viewpoint114 = createNode("Viewpoint");
Viewpoint114.description = "HAnimPose for HumanoidInline IMPORT model";
Viewpoint114.position = new SFVec3f(new float[0,1,4]);
children[5] = Viewpoint114;

//no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc...
ProtoInstance ProtoInstance115 = createNode("ProtoInstance");
ProtoInstance115.name = "HAnimPose";
ProtoInstance115.DEF = "T_Pose";
fieldValue fieldValue116 = createNode("fieldValue");
fieldValue116.name = "name";
fieldValue116.value = "T";
ProtoInstance115.fieldValue = new MFNode();

ProtoInstance115.fieldValue[0] = fieldValue116;

fieldValue fieldValue117 = createNode("fieldValue");
fieldValue117.name = "enabled";
fieldValue117.value = "true";
ProtoInstance115.fieldValue[1] = fieldValue117;

fieldValue fieldValue118 = createNode("fieldValue");
fieldValue118.name = "parentHAnimHumanoid";
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
//debug test case for incorrect node type: <HAnimJoint DEF=\"ErrorDiagnosticsTest\" USE='HumanoidImported'/>
HAnimHumanoid HAnimHumanoid119 = createNode("HAnimHumanoid");
HAnimHumanoid119.USE = "HumanoidImported";
fieldValue118.children = new MFNode();

fieldValue118.children[0] = HAnimHumanoid119;

ProtoInstance115.fieldValue[2] = fieldValue118;

fieldValue fieldValue120 = createNode("fieldValue");
fieldValue120.name = "loa";
fieldValue120.value = "1";
ProtoInstance115.fieldValue[3] = fieldValue120;

fieldValue fieldValue121 = createNode("fieldValue");
fieldValue121.name = "description";
fieldValue121.value = "arms stretched outward and level similar to letter T";
ProtoInstance115.fieldValue[4] = fieldValue121;

fieldValue fieldValue122 = createNode("fieldValue");
fieldValue122.name = "children";
HAnimJoint HAnimJoint123 = createNode("HAnimJoint");
HAnimJoint123.name = "l_shoulder";
HAnimJoint123.DEF = "PoseJoint_l_shoulder_1";
HAnimJoint123.description = "left shoulder";
HAnimJoint123.rotation = new SFRotation(new float[0,0,1,1.57]);
HAnimJoint123.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint123.llimit = new MFFloat(new float[0,0,0]);
fieldValue122.children = new MFNode();

fieldValue122.children[0] = HAnimJoint123;

HAnimJoint HAnimJoint124 = createNode("HAnimJoint");
HAnimJoint124.name = "r_shoulder";
HAnimJoint124.DEF = "PoseJoint_r_shoulder_1";
HAnimJoint124.description = "right shoulder";
HAnimJoint124.rotation = new SFRotation(new float[0,0,-1,1.57]);
HAnimJoint124.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint124.llimit = new MFFloat(new float[0,0,0]);
fieldValue122.children[1] = HAnimJoint124;

//test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/
ProtoInstance115.fieldValue[5] = fieldValue122;

fieldValue fieldValue125 = createNode("fieldValue");
fieldValue125.name = "transitionDuration";
fieldValue125.value = "1.3";
ProtoInstance115.fieldValue[6] = fieldValue125;

children[6] = ProtoInstance115;

ProtoInstance ProtoInstance126 = createNode("ProtoInstance");
ProtoInstance126.name = "HAnimPose";
ProtoInstance126.DEF = "A_Pose";
fieldValue fieldValue127 = createNode("fieldValue");
fieldValue127.name = "name";
fieldValue127.value = "A";
ProtoInstance126.fieldValue = new MFNode();

ProtoInstance126.fieldValue[0] = fieldValue127;

fieldValue fieldValue128 = createNode("fieldValue");
fieldValue128.name = "enabled";
fieldValue128.value = "true";
ProtoInstance126.fieldValue[1] = fieldValue128;

fieldValue fieldValue129 = createNode("fieldValue");
fieldValue129.name = "parentHAnimHumanoid";
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
HAnimHumanoid HAnimHumanoid130 = createNode("HAnimHumanoid");
HAnimHumanoid130.USE = "HumanoidImported";
fieldValue129.children = new MFNode();

fieldValue129.children[0] = HAnimHumanoid130;

ProtoInstance126.fieldValue[2] = fieldValue129;

fieldValue fieldValue131 = createNode("fieldValue");
fieldValue131.name = "loa";
fieldValue131.value = "1";
ProtoInstance126.fieldValue[3] = fieldValue131;

fieldValue fieldValue132 = createNode("fieldValue");
fieldValue132.name = "description";
fieldValue132.value = "arms stretched outward and downward similar to letter A";
ProtoInstance126.fieldValue[4] = fieldValue132;

fieldValue fieldValue133 = createNode("fieldValue");
fieldValue133.name = "children";
HAnimJoint HAnimJoint134 = createNode("HAnimJoint");
HAnimJoint134.name = "l_shoulder";
HAnimJoint134.DEF = "PoseJoint_l_shoulder";
HAnimJoint134.description = "left shoulder";
HAnimJoint134.rotation = new SFRotation(new float[0,0,1,0.5]);
HAnimJoint134.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint134.llimit = new MFFloat(new float[0,0,0]);
fieldValue133.children = new MFNode();

fieldValue133.children[0] = HAnimJoint134;

HAnimJoint HAnimJoint135 = createNode("HAnimJoint");
HAnimJoint135.name = "r_shoulder";
HAnimJoint135.DEF = "PoseJoint_r_shoulder";
HAnimJoint135.description = "right shoulder";
HAnimJoint135.rotation = new SFRotation(new float[0,0,-1,0.5]);
HAnimJoint135.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint135.llimit = new MFFloat(new float[0,0,0]);
fieldValue133.children[1] = HAnimJoint135;

ProtoInstance126.fieldValue[5] = fieldValue133;

fieldValue fieldValue136 = createNode("fieldValue");
fieldValue136.name = "transitionDuration";
fieldValue136.value = "1.2";
ProtoInstance126.fieldValue[6] = fieldValue136;

fieldValue fieldValue137 = createNode("fieldValue");
fieldValue137.name = "traceEnabled";
fieldValue137.value = "true";
ProtoInstance126.fieldValue[7] = fieldValue137;

children[7] = ProtoInstance126;

ProtoInstance ProtoInstance138 = createNode("ProtoInstance");
ProtoInstance138.name = "HAnimPose";
ProtoInstance138.DEF = "TouchDown_Pose";
//thanks Joe
fieldValue fieldValue139 = createNode("fieldValue");
fieldValue139.name = "name";
fieldValue139.value = "TouchDown";
ProtoInstance138.fieldValue = new MFNode();

ProtoInstance138.fieldValue[0] = fieldValue139;

fieldValue fieldValue140 = createNode("fieldValue");
fieldValue140.name = "enabled";
fieldValue140.value = "true";
ProtoInstance138.fieldValue[1] = fieldValue140;

fieldValue fieldValue141 = createNode("fieldValue");
fieldValue141.name = "parentHAnimHumanoid";
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
HAnimHumanoid HAnimHumanoid142 = createNode("HAnimHumanoid");
HAnimHumanoid142.USE = "HumanoidImported";
fieldValue141.children = new MFNode();

fieldValue141.children[0] = HAnimHumanoid142;

ProtoInstance138.fieldValue[2] = fieldValue141;

fieldValue fieldValue143 = createNode("fieldValue");
fieldValue143.name = "loa";
fieldValue143.value = "1";
ProtoInstance138.fieldValue[3] = fieldValue143;

fieldValue fieldValue144 = createNode("fieldValue");
fieldValue144.name = "description";
fieldValue144.value = "arms and legs stretched outward providing a TouchDown gesture";
ProtoInstance138.fieldValue[4] = fieldValue144;

fieldValue fieldValue145 = createNode("fieldValue");
fieldValue145.name = "children";
HAnimJoint HAnimJoint146 = createNode("HAnimJoint");
HAnimJoint146.name = "humanoid_root";
HAnimJoint146.rotation = new SFRotation(new float[0,1,0,-0.698132]);
HAnimJoint146.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint146.llimit = new MFFloat(new float[0,0,0]);
fieldValue145.children = new MFNode();

fieldValue145.children[0] = HAnimJoint146;

HAnimJoint HAnimJoint147 = createNode("HAnimJoint");
HAnimJoint147.name = "l_hip";
HAnimJoint147.rotation = new SFRotation(new float[-1,1,1,1]);
HAnimJoint147.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint147.llimit = new MFFloat(new float[0,0,0]);
fieldValue145.children[1] = HAnimJoint147;

HAnimJoint HAnimJoint148 = createNode("HAnimJoint");
HAnimJoint148.name = "l_knee";
HAnimJoint148.rotation = new SFRotation(new float[1,0,0,1]);
HAnimJoint148.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint148.llimit = new MFFloat(new float[0,0,0]);
fieldValue145.children[2] = HAnimJoint148;

HAnimJoint HAnimJoint149 = createNode("HAnimJoint");
HAnimJoint149.name = "l_talocrural";
HAnimJoint149.rotation = new SFRotation(new float[-0.2,0,0.1,0.225]);
HAnimJoint149.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint149.llimit = new MFFloat(new float[0,0,0]);
fieldValue145.children[3] = HAnimJoint149;

HAnimJoint HAnimJoint150 = createNode("HAnimJoint");
HAnimJoint150.name = "r_hip";
HAnimJoint150.rotation = new SFRotation(new float[-1,-1,-1,1]);
HAnimJoint150.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint150.llimit = new MFFloat(new float[0,0,0]);
fieldValue145.children[4] = HAnimJoint150;

HAnimJoint HAnimJoint151 = createNode("HAnimJoint");
HAnimJoint151.name = "r_knee";
HAnimJoint151.rotation = new SFRotation(new float[1,0,0,1]);
HAnimJoint151.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint151.llimit = new MFFloat(new float[0,0,0]);
fieldValue145.children[5] = HAnimJoint151;

HAnimJoint HAnimJoint152 = createNode("HAnimJoint");
HAnimJoint152.name = "r_talocrural";
HAnimJoint152.rotation = new SFRotation(new float[-0.2,0,0.1,0.25]);
HAnimJoint152.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint152.llimit = new MFFloat(new float[0,0,0]);
fieldValue145.children[6] = HAnimJoint152;

HAnimJoint HAnimJoint153 = createNode("HAnimJoint");
HAnimJoint153.name = "vl5";
HAnimJoint153.rotation = new SFRotation(new float[0,0,0.01,0.2]);
HAnimJoint153.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint153.llimit = new MFFloat(new float[0,0,0]);
fieldValue145.children[7] = HAnimJoint153;

HAnimJoint HAnimJoint154 = createNode("HAnimJoint");
HAnimJoint154.name = "vt10";
HAnimJoint154.rotation = new SFRotation(new float[0,0,0.01,0.1]);
HAnimJoint154.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint154.llimit = new MFFloat(new float[0,0,0]);
fieldValue145.children[8] = HAnimJoint154;

HAnimJoint HAnimJoint155 = createNode("HAnimJoint");
HAnimJoint155.name = "vc4";
HAnimJoint155.rotation = new SFRotation(new float[0,0,-0.01,0.15]);
HAnimJoint155.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint155.llimit = new MFFloat(new float[0,0,0]);
fieldValue145.children[9] = HAnimJoint155;

HAnimJoint HAnimJoint156 = createNode("HAnimJoint");
HAnimJoint156.name = "l_shoulder";
HAnimJoint156.rotation = new SFRotation(new float[-1,0.5,1,2]);
HAnimJoint156.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint156.llimit = new MFFloat(new float[0,0,0]);
fieldValue145.children[10] = HAnimJoint156;

HAnimJoint HAnimJoint157 = createNode("HAnimJoint");
HAnimJoint157.name = "l_elbow";
HAnimJoint157.rotation = new SFRotation(new float[-1,0,0,1]);
HAnimJoint157.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint157.llimit = new MFFloat(new float[0,0,0]);
fieldValue145.children[11] = HAnimJoint157;

HAnimJoint HAnimJoint158 = createNode("HAnimJoint");
HAnimJoint158.name = "l_radiocarpal";
HAnimJoint158.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint158.llimit = new MFFloat(new float[0,0,0]);
fieldValue145.children[12] = HAnimJoint158;

HAnimJoint HAnimJoint159 = createNode("HAnimJoint");
HAnimJoint159.name = "r_shoulder";
HAnimJoint159.rotation = new SFRotation(new float[-1,-0.5,-1,2.6]);
HAnimJoint159.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint159.llimit = new MFFloat(new float[0,0,0]);
fieldValue145.children[13] = HAnimJoint159;

HAnimJoint HAnimJoint160 = createNode("HAnimJoint");
HAnimJoint160.name = "r_elbow";
HAnimJoint160.rotation = new SFRotation(new float[-1,0,0,1]);
HAnimJoint160.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint160.llimit = new MFFloat(new float[0,0,0]);
fieldValue145.children[14] = HAnimJoint160;

HAnimJoint HAnimJoint161 = createNode("HAnimJoint");
HAnimJoint161.name = "r_radiocarpal";
HAnimJoint161.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint161.llimit = new MFFloat(new float[0,0,0]);
fieldValue145.children[15] = HAnimJoint161;

ProtoInstance138.fieldValue[5] = fieldValue145;

fieldValue fieldValue162 = createNode("fieldValue");
fieldValue162.name = "transitionDuration";
fieldValue162.value = "1.2";
ProtoInstance138.fieldValue[6] = fieldValue162;

fieldValue fieldValue163 = createNode("fieldValue");
fieldValue163.name = "traceEnabled";
fieldValue163.value = "true";
ProtoInstance138.fieldValue[7] = fieldValue163;

children[8] = ProtoInstance138;

ProtoInstance ProtoInstance164 = createNode("ProtoInstance");
ProtoInstance164.name = "HAnimPose";
ProtoInstance164.DEF = "I_Pose";
fieldValue fieldValue165 = createNode("fieldValue");
fieldValue165.name = "name";
fieldValue165.value = "I";
ProtoInstance164.fieldValue = new MFNode();

ProtoInstance164.fieldValue[0] = fieldValue165;

fieldValue fieldValue166 = createNode("fieldValue");
fieldValue166.name = "enabled";
fieldValue166.value = "true";
ProtoInstance164.fieldValue[1] = fieldValue166;

fieldValue fieldValue167 = createNode("fieldValue");
fieldValue167.name = "parentHAnimHumanoid";
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
HAnimHumanoid HAnimHumanoid168 = createNode("HAnimHumanoid");
HAnimHumanoid168.USE = "HumanoidImported";
fieldValue167.children = new MFNode();

fieldValue167.children[0] = HAnimHumanoid168;

ProtoInstance164.fieldValue[2] = fieldValue167;

fieldValue fieldValue169 = createNode("fieldValue");
fieldValue169.name = "loa";
fieldValue169.value = "1";
ProtoInstance164.fieldValue[3] = fieldValue169;

fieldValue fieldValue170 = createNode("fieldValue");
fieldValue170.name = "description";
fieldValue170.value = "arms and legs straight down default binding pose for baseline Humanoid";
ProtoInstance164.fieldValue[4] = fieldValue170;

fieldValue fieldValue171 = createNode("fieldValue");
fieldValue171.name = "children";
//not defining any children equals the default \"I\" pose
ProtoInstance164.fieldValue[5] = fieldValue171;

fieldValue fieldValue172 = createNode("fieldValue");
fieldValue172.name = "transitionDuration";
fieldValue172.value = "1.5";
ProtoInstance164.fieldValue[6] = fieldValue172;

fieldValue fieldValue173 = createNode("fieldValue");
fieldValue173.name = "traceEnabled";
fieldValue173.value = "true";
ProtoInstance164.fieldValue[7] = fieldValue173;

children[9] = ProtoInstance164;

ProtoInstance ProtoInstance174 = createNode("ProtoInstance");
ProtoInstance174.name = "HAnimPose";
ProtoInstance174.DEF = "H_Pose";
fieldValue fieldValue175 = createNode("fieldValue");
fieldValue175.name = "name";
fieldValue175.value = "H";
ProtoInstance174.fieldValue = new MFNode();

ProtoInstance174.fieldValue[0] = fieldValue175;

fieldValue fieldValue176 = createNode("fieldValue");
fieldValue176.name = "enabled";
fieldValue176.value = "false";
ProtoInstance174.fieldValue[1] = fieldValue176;

fieldValue fieldValue177 = createNode("fieldValue");
fieldValue177.name = "description";
fieldValue177.value = "TODO experimental pose not yet implemented";
ProtoInstance174.fieldValue[2] = fieldValue177;

fieldValue fieldValue178 = createNode("fieldValue");
fieldValue178.name = "transitionDuration";
fieldValue178.value = "1.4";
ProtoInstance174.fieldValue[3] = fieldValue178;

fieldValue fieldValue179 = createNode("fieldValue");
fieldValue179.name = "traceEnabled";
fieldValue179.value = "true";
ProtoInstance174.fieldValue[4] = fieldValue179;

//<fieldValue name='loa' value='1'/>
children[10] = ProtoInstance174;

ProtoInstance ProtoInstance180 = createNode("ProtoInstance");
ProtoInstance180.name = "HAnimPose";
ProtoInstance180.DEF = "FaceLeft_Pose";
fieldValue fieldValue181 = createNode("fieldValue");
fieldValue181.name = "name";
fieldValue181.value = "FaceLeft";
ProtoInstance180.fieldValue = new MFNode();

ProtoInstance180.fieldValue[0] = fieldValue181;

fieldValue fieldValue182 = createNode("fieldValue");
fieldValue182.name = "enabled";
fieldValue182.value = "true";
ProtoInstance180.fieldValue[1] = fieldValue182;

fieldValue fieldValue183 = createNode("fieldValue");
fieldValue183.name = "parentHAnimHumanoid";
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
HAnimHumanoid HAnimHumanoid184 = createNode("HAnimHumanoid");
HAnimHumanoid184.USE = "HumanoidImported";
fieldValue183.children = new MFNode();

fieldValue183.children[0] = HAnimHumanoid184;

ProtoInstance180.fieldValue[2] = fieldValue183;

fieldValue fieldValue185 = createNode("fieldValue");
fieldValue185.name = "loa";
fieldValue185.value = "0";
ProtoInstance180.fieldValue[3] = fieldValue185;

fieldValue fieldValue186 = createNode("fieldValue");
fieldValue186.name = "description";
fieldValue186.value = "Only modify humanoid_root Joint node to face left";
ProtoInstance180.fieldValue[4] = fieldValue186;

fieldValue fieldValue187 = createNode("fieldValue");
fieldValue187.name = "children";
HAnimJoint HAnimJoint188 = createNode("HAnimJoint");
HAnimJoint188.name = "humanoid_root";
HAnimJoint188.DEF = "FaceLeft_humanoid_root";
HAnimJoint188.description = "Only rotate the model";
HAnimJoint188.rotation = new SFRotation(new float[0,1,0,1.570796]);
HAnimJoint188.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint188.llimit = new MFFloat(new float[0,0,0]);
fieldValue187.children = new MFNode();

fieldValue187.children[0] = HAnimJoint188;

ProtoInstance180.fieldValue[5] = fieldValue187;

fieldValue fieldValue189 = createNode("fieldValue");
fieldValue189.name = "transitionDuration";
fieldValue189.value = "1.1";
ProtoInstance180.fieldValue[6] = fieldValue189;

fieldValue fieldValue190 = createNode("fieldValue");
fieldValue190.name = "traceEnabled";
fieldValue190.value = "true";
ProtoInstance180.fieldValue[7] = fieldValue190;

children[11] = ProtoInstance180;

ProtoInstance ProtoInstance191 = createNode("ProtoInstance");
ProtoInstance191.name = "HAnimPose";
ProtoInstance191.DEF = "FaceRight_Pose";
fieldValue fieldValue192 = createNode("fieldValue");
fieldValue192.name = "name";
fieldValue192.value = "FaceRight";
ProtoInstance191.fieldValue = new MFNode();

ProtoInstance191.fieldValue[0] = fieldValue192;

fieldValue fieldValue193 = createNode("fieldValue");
fieldValue193.name = "enabled";
fieldValue193.value = "true";
ProtoInstance191.fieldValue[1] = fieldValue193;

fieldValue fieldValue194 = createNode("fieldValue");
fieldValue194.name = "parentHAnimHumanoid";
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
HAnimHumanoid HAnimHumanoid195 = createNode("HAnimHumanoid");
HAnimHumanoid195.USE = "HumanoidImported";
fieldValue194.children = new MFNode();

fieldValue194.children[0] = HAnimHumanoid195;

ProtoInstance191.fieldValue[2] = fieldValue194;

fieldValue fieldValue196 = createNode("fieldValue");
fieldValue196.name = "loa";
fieldValue196.value = "0";
ProtoInstance191.fieldValue[3] = fieldValue196;

fieldValue fieldValue197 = createNode("fieldValue");
fieldValue197.name = "description";
fieldValue197.value = "Only modify humanoid_root Joint node to face right";
ProtoInstance191.fieldValue[4] = fieldValue197;

fieldValue fieldValue198 = createNode("fieldValue");
fieldValue198.name = "children";
HAnimJoint HAnimJoint199 = createNode("HAnimJoint");
HAnimJoint199.name = "humanoid_root";
HAnimJoint199.DEF = "FaceRight_humanoid_root";
HAnimJoint199.description = "Only rotate the model";
HAnimJoint199.rotation = new SFRotation(new float[0,1,0,-1.570796]);
HAnimJoint199.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint199.llimit = new MFFloat(new float[0,0,0]);
fieldValue198.children = new MFNode();

fieldValue198.children[0] = HAnimJoint199;

ProtoInstance191.fieldValue[5] = fieldValue198;

fieldValue fieldValue200 = createNode("fieldValue");
fieldValue200.name = "transitionDuration";
fieldValue200.value = "1.1";
ProtoInstance191.fieldValue[6] = fieldValue200;

fieldValue fieldValue201 = createNode("fieldValue");
fieldValue201.name = "traceEnabled";
fieldValue201.value = "true";
ProtoInstance191.fieldValue[7] = fieldValue201;

children[12] = ProtoInstance191;

Group Group202 = createNode("Group");
Group202.DEF = "InterfaceButtonsGroup";
Transform Transform203 = createNode("Transform");
Transform203.DEF = "DisplayHeader";
Transform203.translation = new SFVec3f(new float[0,2,0]);
Shape Shape204 = createNode("Shape");
Text Text205 = createNode("Text");
Text205.string = new MFString(new java.lang.String["HAnimPosePrototype example implementation"]);
FontStyle FontStyle206 = createNode("FontStyle");
FontStyle206.DEF = "HeaderFont";
FontStyle206.family = new MFString(new java.lang.String["SANS"]);
FontStyle206.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle206.size = 0.15;
FontStyle206.style = "BOLD";
Text205.fontStyle = FontStyle206;

Shape204.geometry = Text205;

Appearance Appearance207 = createNode("Appearance");
Appearance207.DEF = "PoseTextAppearance";
Material Material208 = createNode("Material");
Material208.diffuseColor = new SFColor(new float[0.1,0.5,0.3]);
Appearance207.material = Material208;

Shape204.appearance = Appearance207;

Transform203.child = new undefined();

Transform203.child[0] = Shape204;

Group202.children = new MFNode();

Group202.children[0] = Transform203;

Transform Transform209 = createNode("Transform");
Transform209.DEF = "T_PoseInterface";
Transform209.translation = new SFVec3f(new float[-1.5,1.5,0]);
Shape Shape210 = createNode("Shape");
Text Text211 = createNode("Text");
Text211.string = new MFString(new java.lang.String["\"T\" Pose"]);
FontStyle FontStyle212 = createNode("FontStyle");
FontStyle212.DEF = "SharedFont";
FontStyle212.family = new MFString(new java.lang.String["SANS"]);
FontStyle212.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle212.size = 0.1;
FontStyle212.style = "BOLD";
Text211.fontStyle = FontStyle212;

Shape210.geometry = Text211;

Appearance Appearance213 = createNode("Appearance");
Appearance213.USE = "PoseTextAppearance";
Shape210.appearance = Appearance213;

Transform209.child = new undefined();

Transform209.child[0] = Shape210;

Shape Shape214 = createNode("Shape");
Appearance Appearance215 = createNode("Appearance");
Appearance215.DEF = "TransparentAppearance";
Material Material216 = createNode("Material");
Material216.transparency = 0.8;
Appearance215.material = Material216;

Shape214.appearance = Appearance215;

Box Box217 = createNode("Box");
Box217.size = new SFVec3f(new float[0.45,0.2,0.001]);
Shape214.geometry = Box217;

Transform209.child[1] = Shape214;

TouchSensor TouchSensor218 = createNode("TouchSensor");
TouchSensor218.DEF = "T_PoseTouchSensor";
TouchSensor218.description = "select to move shoulders to \"T\" pose, leave other joints unchanged";
Transform209.children[2] = TouchSensor218;

ROUTE ROUTE219 = createNode("ROUTE");
ROUTE219.fromField = "isActive";
ROUTE219.fromNode = "T_PoseTouchSensor";
ROUTE219.toField = "commencePose";
ROUTE219.toNode = "T_Pose";
Transform209.children[3] = ROUTE219;

Group202.children[1] = Transform209;

Transform Transform220 = createNode("Transform");
Transform220.DEF = "A_PoseInterface";
Transform220.translation = new SFVec3f(new float[-1.5,1,0]);
Shape Shape221 = createNode("Shape");
Text Text222 = createNode("Text");
Text222.string = new MFString(new java.lang.String["\"A\" Pose"]);
FontStyle FontStyle223 = createNode("FontStyle");
FontStyle223.USE = "SharedFont";
Text222.fontStyle = FontStyle223;

Shape221.geometry = Text222;

Appearance Appearance224 = createNode("Appearance");
Appearance224.USE = "PoseTextAppearance";
Shape221.appearance = Appearance224;

Transform220.child = new undefined();

Transform220.child[0] = Shape221;

Shape Shape225 = createNode("Shape");
//Selectable Text transparent Box for easy user selection
Appearance Appearance226 = createNode("Appearance");
Appearance226.USE = "TransparentAppearance";
Shape225.appearance = Appearance226;

Box Box227 = createNode("Box");
Box227.size = new SFVec3f(new float[0.45,0.2,0.001]);
Shape225.geometry = Box227;

Transform220.child[1] = Shape225;

TouchSensor TouchSensor228 = createNode("TouchSensor");
TouchSensor228.DEF = "A_PoseTouchSensor";
TouchSensor228.description = "select to move shoulders to \"A\" pose, leave other joints unchanged";
Transform220.children[2] = TouchSensor228;

ROUTE ROUTE229 = createNode("ROUTE");
ROUTE229.fromField = "isActive";
ROUTE229.fromNode = "A_PoseTouchSensor";
ROUTE229.toField = "commencePose";
ROUTE229.toNode = "A_Pose";
Transform220.children[3] = ROUTE229;

Group202.children[2] = Transform220;

Transform Transform230 = createNode("Transform");
Transform230.DEF = "TouchDown_PoseInterface";
Transform230.translation = new SFVec3f(new float[-1.5,0.5,0]);
Shape Shape231 = createNode("Shape");
Text Text232 = createNode("Text");
Text232.string = new MFString(new java.lang.String["TouchDown Pose"]);
FontStyle FontStyle233 = createNode("FontStyle");
FontStyle233.USE = "SharedFont";
Text232.fontStyle = FontStyle233;

Shape231.geometry = Text232;

Appearance Appearance234 = createNode("Appearance");
Appearance234.USE = "PoseTextAppearance";
Shape231.appearance = Appearance234;

Transform230.child = new undefined();

Transform230.child[0] = Shape231;

Shape Shape235 = createNode("Shape");
//Selectable Text transparent Box for easy user selection
Appearance Appearance236 = createNode("Appearance");
Appearance236.USE = "TransparentAppearance";
Shape235.appearance = Appearance236;

Box Box237 = createNode("Box");
Box237.size = new SFVec3f(new float[0.85,0.2,0.001]);
Shape235.geometry = Box237;

Transform230.child[1] = Shape235;

TouchSensor TouchSensor238 = createNode("TouchSensor");
TouchSensor238.DEF = "TouchDown_PoseTouchSensor";
TouchSensor238.description = "select to transition all joints to TouchDown pose";
Transform230.children[2] = TouchSensor238;

ROUTE ROUTE239 = createNode("ROUTE");
ROUTE239.fromField = "isActive";
ROUTE239.fromNode = "TouchDown_PoseTouchSensor";
ROUTE239.toField = "commencePose";
ROUTE239.toNode = "TouchDown_Pose";
Transform230.children[3] = ROUTE239;

Group202.children[3] = Transform230;

Transform Transform240 = createNode("Transform");
Transform240.DEF = "I_PoseInterface";
Transform240.translation = new SFVec3f(new float[-1.5,0,0]);
Shape Shape241 = createNode("Shape");
Text Text242 = createNode("Text");
Text242.string = new MFString(new java.lang.String["\"I\" Pose"]);
FontStyle FontStyle243 = createNode("FontStyle");
FontStyle243.USE = "SharedFont";
Text242.fontStyle = FontStyle243;

Shape241.geometry = Text242;

Appearance Appearance244 = createNode("Appearance");
Appearance244.USE = "PoseTextAppearance";
Shape241.appearance = Appearance244;

Transform240.child = new undefined();

Transform240.child[0] = Shape241;

Shape Shape245 = createNode("Shape");
//Selectable Text transparent Box for easy user selection
Appearance Appearance246 = createNode("Appearance");
Appearance246.USE = "TransparentAppearance";
Shape245.appearance = Appearance246;

Box Box247 = createNode("Box");
Box247.size = new SFVec3f(new float[0.45,0.2,0.001]);
Shape245.geometry = Box247;

Transform240.child[1] = Shape245;

TouchSensor TouchSensor248 = createNode("TouchSensor");
TouchSensor248.DEF = "I_PoseTouchSensor";
TouchSensor248.description = "select to transition all joints to \"I\" pose";
Transform240.children[2] = TouchSensor248;

ROUTE ROUTE249 = createNode("ROUTE");
ROUTE249.fromField = "isActive";
ROUTE249.fromNode = "I_PoseTouchSensor";
ROUTE249.toField = "commencePose";
ROUTE249.toNode = "I_Pose";
Transform240.children[3] = ROUTE249;

Group202.children[4] = Transform240;

Transform Transform250 = createNode("Transform");
Transform250.DEF = "FaceLeftPoseInterface";
Transform250.translation = new SFVec3f(new float[1.5,1.5,0]);
Shape Shape251 = createNode("Shape");
Text Text252 = createNode("Text");
Text252.string = new MFString(new java.lang.String["Face Left Pose"]);
FontStyle FontStyle253 = createNode("FontStyle");
FontStyle253.USE = "SharedFont";
Text252.fontStyle = FontStyle253;

Shape251.geometry = Text252;

Appearance Appearance254 = createNode("Appearance");
Appearance254.USE = "PoseTextAppearance";
Shape251.appearance = Appearance254;

Transform250.child = new undefined();

Transform250.child[0] = Shape251;

Shape Shape255 = createNode("Shape");
Appearance Appearance256 = createNode("Appearance");
Appearance256.USE = "TransparentAppearance";
Shape255.appearance = Appearance256;

Box Box257 = createNode("Box");
Box257.size = new SFVec3f(new float[0.9,0.2,0.001]);
Shape255.geometry = Box257;

Transform250.child[1] = Shape255;

TouchSensor TouchSensor258 = createNode("TouchSensor");
TouchSensor258.DEF = "FaceLeftTouchSensor";
TouchSensor258.description = "select to rotate body and Face Left, leave other joints unchanged";
Transform250.children[2] = TouchSensor258;

ROUTE ROUTE259 = createNode("ROUTE");
ROUTE259.fromField = "isActive";
ROUTE259.fromNode = "FaceLeftTouchSensor";
ROUTE259.toField = "commencePose";
ROUTE259.toNode = "FaceLeft_Pose";
Transform250.children[3] = ROUTE259;

Group202.children[5] = Transform250;

Transform Transform260 = createNode("Transform");
Transform260.DEF = "FaceRightPoseInterface";
Transform260.translation = new SFVec3f(new float[1.5,1,0]);
Shape Shape261 = createNode("Shape");
Text Text262 = createNode("Text");
Text262.string = new MFString(new java.lang.String["Face Right Pose"]);
FontStyle FontStyle263 = createNode("FontStyle");
FontStyle263.USE = "SharedFont";
Text262.fontStyle = FontStyle263;

Shape261.geometry = Text262;

Appearance Appearance264 = createNode("Appearance");
Appearance264.USE = "PoseTextAppearance";
Shape261.appearance = Appearance264;

Transform260.child = new undefined();

Transform260.child[0] = Shape261;

Shape Shape265 = createNode("Shape");
//Selectable Text transparent Box for easy user selection
Appearance Appearance266 = createNode("Appearance");
Appearance266.USE = "TransparentAppearance";
Shape265.appearance = Appearance266;

Box Box267 = createNode("Box");
Box267.size = new SFVec3f(new float[0.9,0.2,0.001]);
Shape265.geometry = Box267;

Transform260.child[1] = Shape265;

TouchSensor TouchSensor268 = createNode("TouchSensor");
TouchSensor268.DEF = "FaceRightTouchSensor";
TouchSensor268.description = "select to rotate body and Face Right, leave other joints unchanged";
Transform260.children[2] = TouchSensor268;

ROUTE ROUTE269 = createNode("ROUTE");
ROUTE269.fromField = "isActive";
ROUTE269.fromNode = "FaceRightTouchSensor";
ROUTE269.toField = "commencePose";
ROUTE269.toNode = "FaceRight_Pose";
Transform260.children[3] = ROUTE269;

Group202.children[6] = Transform260;

Transform Transform270 = createNode("Transform");
Transform270.DEF = "AnimatePosesInterface";
Transform270.translation = new SFVec3f(new float[1.5,0.5,0]);
Shape Shape271 = createNode("Shape");
Text Text272 = createNode("Text");
Text272.string = new MFString(new java.lang.String["Direct animation","to, from \"I\" Pose"]);
FontStyle FontStyle273 = createNode("FontStyle");
FontStyle273.USE = "SharedFont";
Text272.fontStyle = FontStyle273;

Shape271.geometry = Text272;

Appearance Appearance274 = createNode("Appearance");
Appearance274.DEF = "AnimationTextAppearance";
Material Material275 = createNode("Material");
Material275.diffuseColor = new SFColor(new float[0.1,0.2,0.3]);
Appearance274.material = Material275;

Shape271.appearance = Appearance274;

Transform270.child = new undefined();

Transform270.child[0] = Shape271;

Shape Shape276 = createNode("Shape");
//Selectable Text transparent Box for easy user selection
Appearance Appearance277 = createNode("Appearance");
Appearance277.USE = "TransparentAppearance";
Shape276.appearance = Appearance277;

Box Box278 = createNode("Box");
Box278.size = new SFVec3f(new float[0.9,0.25,0.001]);
Shape276.geometry = Box278;

Transform270.child[1] = Shape276;

TouchSensor TouchSensor279 = createNode("TouchSensor");
TouchSensor279.DEF = "AnimatePosesTouchSensor";
TouchSensor279.description = "select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events";
Transform270.children[2] = TouchSensor279;

//cycleInterval=4 also hard-coded in script execution message
TimeSensor TimeSensor280 = createNode("TimeSensor");
TimeSensor280.DEF = "AnimatePosesClock";
TimeSensor280.cycleInterval = 4;
TimeSensor280.description = "directly animate several poses";
Transform270.children[3] = TimeSensor280;

ScalarInterpolator ScalarInterpolator281 = createNode("ScalarInterpolator");
ScalarInterpolator281.DEF = "AnimatePosesLoopInterpolator";
ScalarInterpolator281.key = new MFFloat(new float[0,0.05,0.45,0.55,0.95,1]);
ScalarInterpolator281.keyValue = new MFFloat(new float[0,0,1,1,0,0]);
Transform270.children[4] = ScalarInterpolator281;

ROUTE ROUTE282 = createNode("ROUTE");
ROUTE282.fromField = "touchTime";
ROUTE282.fromNode = "AnimatePosesTouchSensor";
ROUTE282.toField = "startTime";
ROUTE282.toNode = "AnimatePosesClock";
Transform270.children[5] = ROUTE282;

ROUTE ROUTE283 = createNode("ROUTE");
ROUTE283.fromField = "fraction_changed";
ROUTE283.fromNode = "AnimatePosesClock";
ROUTE283.toField = "set_fraction";
ROUTE283.toNode = "AnimatePosesLoopInterpolator";
Transform270.children[6] = ROUTE283;

ROUTE ROUTE284 = createNode("ROUTE");
ROUTE284.fromField = "value_changed";
ROUTE284.fromNode = "AnimatePosesLoopInterpolator";
ROUTE284.toField = "set_fraction";
ROUTE284.toNode = "I_Pose";
Transform270.children[7] = ROUTE284;

Group202.children[7] = Transform270;

Transform Transform285 = createNode("Transform");
Transform285.DEF = "ResetDefaultPoseInterface";
Transform285.translation = new SFVec3f(new float[1.5,0,0]);
Shape Shape286 = createNode("Shape");
Text Text287 = createNode("Text");
Text287.string = new MFString(new java.lang.String["Reset All Joints","to Default \"I\" Pose"]);
FontStyle FontStyle288 = createNode("FontStyle");
FontStyle288.USE = "SharedFont";
Text287.fontStyle = FontStyle288;

Shape286.geometry = Text287;

Appearance Appearance289 = createNode("Appearance");
Appearance289.USE = "AnimationTextAppearance";
Shape286.appearance = Appearance289;

Transform285.child = new undefined();

Transform285.child[0] = Shape286;

Shape Shape290 = createNode("Shape");
//Selectable Text transparent Box for easy user selection
Appearance Appearance291 = createNode("Appearance");
Appearance291.USE = "TransparentAppearance";
Shape290.appearance = Appearance291;

Box Box292 = createNode("Box");
Box292.size = new SFVec3f(new float[0.9,0.25,0.001]);
Shape290.geometry = Box292;

Transform285.child[1] = Shape290;

TouchSensor TouchSensor293 = createNode("TouchSensor");
TouchSensor293.DEF = "ResetPoseTouchSensor";
TouchSensor293.description = "select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event";
Transform285.children[2] = TouchSensor293;

ROUTE ROUTE294 = createNode("ROUTE");
ROUTE294.fromField = "isActive";
ROUTE294.fromNode = "ResetPoseTouchSensor";
ROUTE294.toField = "resetAllJoints";
ROUTE294.toNode = "FaceLeft_Pose";
Transform285.children[3] = ROUTE294;

Group202.children[8] = Transform285;

children[13] = Group202;

Group Group295 = createNode("Group");
Group295.DEF = "HandleInlineLoadsensorRouting";
ROUTE ROUTE296 = createNode("ROUTE");
ROUTE296.fromField = "isLoaded";
ROUTE296.fromNode = "HumanoidInlineLoadSensor";
ROUTE296.toField = "isLoaded";
ROUTE296.toNode = "A_Pose";
Group295.children = new MFNode();

Group295.children[0] = ROUTE296;

ROUTE ROUTE297 = createNode("ROUTE");
ROUTE297.fromField = "isLoaded";
ROUTE297.fromNode = "HumanoidInlineLoadSensor";
ROUTE297.toField = "isLoaded";
ROUTE297.toNode = "H_Pose";
Group295.children[1] = ROUTE297;

ROUTE ROUTE298 = createNode("ROUTE");
ROUTE298.fromField = "isLoaded";
ROUTE298.fromNode = "HumanoidInlineLoadSensor";
ROUTE298.toField = "isLoaded";
ROUTE298.toNode = "I_Pose";
Group295.children[2] = ROUTE298;

ROUTE ROUTE299 = createNode("ROUTE");
ROUTE299.fromField = "isLoaded";
ROUTE299.fromNode = "HumanoidInlineLoadSensor";
ROUTE299.toField = "isLoaded";
ROUTE299.toNode = "T_Pose";
Group295.children[3] = ROUTE299;

ROUTE ROUTE300 = createNode("ROUTE");
ROUTE300.fromField = "isLoaded";
ROUTE300.fromNode = "HumanoidInlineLoadSensor";
ROUTE300.toField = "isLoaded";
ROUTE300.toNode = "FaceLeft_Pose";
Group295.children[4] = ROUTE300;

ROUTE ROUTE301 = createNode("ROUTE");
ROUTE301.fromField = "isLoaded";
ROUTE301.fromNode = "HumanoidInlineLoadSensor";
ROUTE301.toField = "isLoaded";
ROUTE301.toNode = "FaceRight_Pose";
Group295.children[5] = ROUTE301;

ROUTE ROUTE302 = createNode("ROUTE");
ROUTE302.fromField = "isLoaded";
ROUTE302.fromNode = "HumanoidInlineLoadSensor";
ROUTE302.toField = "isLoaded";
ROUTE302.toNode = "TouchDown_Pose";
Group295.children[6] = ROUTE302;

children[14] = Group295;

}

const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "HAnimPosePrototype.x3d");
scene.addMetaData("description", "Define an experimental new node to simply capture a single pose for an HAnimHumanoid model.");
scene.addMetaData("created", "4 April 2025");
scene.addMetaData("modified", "Mon, 15 Sep 2025 05:20:09 GMT");
scene.addMetaData("creator", "Don Brutzman");
scene.addMetaData("creator", "Joe Williams");
scene.addMetaData("warning", "under development");
scene.addMetaData("reference", "HAnimPoseDesignNotes19MAR2025.pdf");
scene.addMetaData("reference", "HAnim Architecture volume 1 version 2.0, clause 4.8.2 Modelling of human-like HAnim figures, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#ModellingOfHumanLikeHAnimFigures");
scene.addMetaData("reference", "HAnim Architecture volume 1 version 2.0, clause 4.8.3 Poses, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Poses");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/HelloWorldScenes/HAnimPosePrototype.x3d");
await browser .loadComponents (scene);
let ProtoDeclare14 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="HAnimPose" appinfo="Assumes HAnimHumanoid configuration must be in I pose, which can be achieved by resetting every HAnimJoint to default values" ><ProtoInterface><field accessType="inputOutput" type="SFBool" name="enabled" value="true" appinfo="default value true"></field>
<field accessType="inputOnly" type="SFBool" name="setPose" appinfo="this event tells the HAnimPose node to do it's thing!"></field>
<field accessType="inputOutput" type="SFString" name="name" value="PoseName" appinfo="name of this pose"></field>
<field accessType="inputOutput" type="MFString" name="namesPoseJoints" value="&quot;nameJoint1&quot; &quot;nameJoint2&quot; &quot;nameJoint3&quot; &quot;nameJoint4&quot;" appinfo="names of joints in pose"></field>
<field accessType="inputOutput" type="MFVec3f" name="positionsPoseJoints" appinfo="positions of joints in pose"></field>
<field accessType="inputOutput" type="MFRotation" name="rotationsPoseJoints" appinfo="rotations of joints in pose"></field>
<field accessType="inputOutput" type="SFInt32" name="whichChoice" appinfo="selects one of the HAnimHumanoid nodes"></field>
<field accessType="inputOutput" type="MFNode" name="children" appinfo="references one or more HAnimHumanoid nodes, typically via USE references"></field>
<field accessType="inputOnly" type="MFNode" name="addChildren" appinfo="references one or more HAnimHumanoid nodes, typically via USE references"></field>
<field accessType="inputOnly" type="MFNode" name="removeChildren" appinfo="references one or more HAnimHumanoid nodes, typically via USE references"></field>
<field accessType="inputOutput" type="SFBool" name="traceEnabled" value="true" appinfo="debug trace to Browser output console"></field>
</ProtoInterface>
<ProtoBody><Switch DEF="PrototypeRootNode"><IS><connect nodeField="whichChoice" protoField="whichChoice"></connect>
<connect nodeField="addChildren" protoField="addChildren"></connect>
<connect nodeField="removeChildren" protoField="removeChildren"></connect>
<connect nodeField="children" protoField="children"></connect>
</IS>
</Switch>
<MetadataString name="interface" reference="https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/concepts.html#InterfaceHierarchy" value="&quot;X3DGroupingNode&quot;"></MetadataString>
<Script DEF="HAnimPoseScriptOperations" directOutput="true"><field accessType="inputOutput" type="SFBool" name="enabled" appinfo="default value true"></field>
<field accessType="inputOnly" type="SFBool" name="setPose" appinfo="this event tells the HAnimPose node to do it's thing!"></field>
<field accessType="inputOutput" type="SFString" name="name" appinfo="name of this pose"></field>
<field accessType="inputOutput" type="MFString" name="namesPoseJoints" appinfo="names of joints in pose"></field>
<field accessType="inputOutput" type="MFVec3f" name="positionsPoseJoints" appinfo="positions of joints in pose"></field>
<field accessType="inputOutput" type="MFRotation" name="rotationsPoseJoints" appinfo="rotations of joints in pose"></field>
<field accessType="inputOutput" type="SFInt32" name="whichChoice" appinfo="selects one of the HAnimHumanoid nodes"></field>
<field accessType="inputOutput" type="MFNode" name="children" appinfo="references one or more HAnimHumanoid nodes, typically via USE references"></field>
<field accessType="inputOnly" type="MFNode" name="addChildren" appinfo="references one or more HAnimHumanoid nodes, typically via USE references"></field>
<field accessType="inputOnly" type="MFNode" name="removeChildren" appinfo="references one or more HAnimHumanoid nodes, typically via USE references"></field>
<field accessType="inputOutput" type="SFBool" name="traceEnabled" appinfo="debug trace to Browser output console"></field>
<![CDATA[ecmascript:

// Needed functionality:
// a. get access to a humanoid
// b. confirm skeletalConfiguration = 'BASIC' so we know that it has a valid default pose
// c. walk the tree for all joints, then set transation, scale, rotation to default values
// d. for each name/position/rotation triplet in the pose arrays, update the appropriate
//    HAnimJoint nodes to that corresponding set of values

var scriptName='HAnimPoseScript';

function initialize ()
{
    // TODO author initialization code (if any) goes here
    
    // check that array sizes are identical for namesPoseJoints, positionsPoseJoints, rotationsPoseJoints
    
    // check humanoid connectivity

    tracePrint ('initialization() successful');
}
function set_enabled (eventValue)
{
    // input eventValue received for inputOutput field enabled
    enabled = eventValue;
    tracePrint ('enabled = ' + enabled);

    // TODO author code (if any) goes here
}
function setPose (eventValue)
{
    // input eventValue received for inputOnly field setPose
    setPose = eventValue;

    tracePrint ('setPose = ' + setPose);

    // TODO author code (if any) goes here
}
function set_name (eventValue)
{
    // input eventValue received for inputOutput field name
    name = eventValue;
    tracePrint ('name = ' + name);

    // TODO author code (if any) goes here
}
function set_namesPoseJoints (eventValue)
{
    // input eventValue received for inputOutput field namesPoseJoints
    namesPoseJoints = eventValue;
    tracePrint ('namesPoseJoints = ' + namesPoseJoints);

    // TODO author code (if any) goes here
}
function set_positionsPoseJoints (eventValue)
{
    // input eventValue received for inputOutput field positionsPoseJoints
    positionsPoseJoints = eventValue;
    tracePrint ('positionsPoseJoints = ' + positionsPoseJoints);

    // TODO author code (if any) goes here
}
function set_rotationsPoseJoints (eventValue)
{
    // input eventValue received for inputOutput field rotationsPoseJoints
    rotationsPoseJoints = eventValue;
    tracePrint ('rotationsPoseJoints = ' + rotationsPoseJoints);

    // TODO author code (if any) goes here
}
function set_humanoid (eventValue)
{
    // input eventValue received for inputOutput field humanoid
    humanoid = eventValue;
    tracePrint ('humanoid = ' + humanoid);

    // TODO author code (if any) goes here
}
// ================== Trace output functions ==================

function tracePrint (outputString)
{
   // if traceEnabled is true, print outputString on X3D browser console
   if (traceEnabled)
      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');
}
function alwaysPrint (outputString)
{
      // always print outputString on X3D browser console
      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');
}
function set_traceEnabled (eventValue)
{
      // input eventValue received for inputOutput field
      traceEnabled = eventValue;
}
// ===========================================================]]><IS><connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="setPose" protoField="setPose"></connect>
<connect nodeField="name" protoField="name"></connect>
<connect nodeField="namesPoseJoints" protoField="namesPoseJoints"></connect>
<connect nodeField="positionsPoseJoints" protoField="positionsPoseJoints"></connect>
<connect nodeField="rotationsPoseJoints" protoField="rotationsPoseJoints"></connect>
<connect nodeField="whichChoice" protoField="whichChoice"></connect>
<connect nodeField="children" protoField="children"></connect>
<connect nodeField="addChildren" protoField="addChildren"></connect>
<connect nodeField="removeChildren" protoField="removeChildren"></connect>
<connect nodeField="traceEnabled" protoField="traceEnabled"></connect>
</IS>
</Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare14.name = "HAnimPose";
ProtoDeclare14.appinfo = "Assumes HAnimHumanoid configuration must be in I pose, which can be achieved by resetting every HAnimJoint to default values";
ProtoInterface16.getField("enabled").setValue("true");
ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface17.getField("setPose")ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface18.getField("name").setValue("PoseName");
ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface19.getField("namesPoseJoints").setValue("\"nameJoint1\" \"nameJoint2\" \"nameJoint3\" \"nameJoint4\"");
ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface20.getField("positionsPoseJoints")ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface21.getField("rotationsPoseJoints")ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface22.getField("whichChoice")ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface23.getField("children")ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface24.getField("addChildren")ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface25.getField("removeChildren")ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface26.getField("traceEnabled").setValue("true");
ProtoInterface15YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface15;

let ProtoBody27 = browser.currentScene.createNode("ProtoBody");
let Switch28 = browser.currentScene.createNode("Switch");
Switch28.DEF = "PrototypeRootNode";
let IS29 = browser.currentScene.createNode("IS");
let connect30 = browser.currentScene.createNode("connect");
connect30.nodeField = "whichChoice";
connect30.protoField = "whichChoice";
IS29YYY.connect = new X3D.MFNode();

IS29ZZZ.connect[0] = connect30;

let connect31 = browser.currentScene.createNode("connect");
connect31.nodeField = "addChildren";
connect31.protoField = "addChildren";
IS29ZZZ.connect[1] = connect31;

let connect32 = browser.currentScene.createNode("connect");
connect32.nodeField = "removeChildren";
connect32.protoField = "removeChildren";
IS29ZZZ.connect[2] = connect32;

let connect33 = browser.currentScene.createNode("connect");
connect33.nodeField = "children";
connect33.protoField = "children";
IS29ZZZ.connect[3] = connect33;

iS = IS29;

ProtoBody27YYY.children = new X3D.MFNode();

ProtoBody27ZZZ.children[0] = Switch28;

let MetadataString34 = browser.currentScene.createNode("MetadataString");
MetadataString34.name = "interface";
MetadataString34.reference = "https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/concepts.html#InterfaceHierarchy";
MetadataString34.value = new X3D.MFString([new X3D.SFString("X3DGroupingNode")]);
ProtoBody27ZZZ.children[1] = MetadataString34;

let Script35 = browser.currentScene.createNode("Script");
Script35.DEF = "HAnimPoseScriptOperations";
Script35.directOutput = True;
Script36.getField("enabled")Script35YYY.field = new X3D.MFNode();

Script37.getField("setPose")Script35YYY.field = new X3D.MFNode();

Script38.getField("name")Script35YYY.field = new X3D.MFNode();

Script39.getField("namesPoseJoints")Script35YYY.field = new X3D.MFNode();

Script40.getField("positionsPoseJoints")Script35YYY.field = new X3D.MFNode();

Script41.getField("rotationsPoseJoints")Script35YYY.field = new X3D.MFNode();

Script42.getField("whichChoice")Script35YYY.field = new X3D.MFNode();

Script43.getField("children")Script35YYY.field = new X3D.MFNode();

Script44.getField("addChildren")Script35YYY.field = new X3D.MFNode();

Script45.getField("removeChildren")Script35YYY.field = new X3D.MFNode();

Script46.getField("traceEnabled")Script35YYY.field = new X3D.MFNode();


Script35.setSourceCode(`ecmascript:\n"+
"\n"+
"// Needed functionality:\n"+
"// a. get access to a humanoid\n"+
"// b. confirm skeletalConfiguration = 'BASIC' so we know that it has a valid default pose\n"+
"// c. walk the tree for all joints, then set transation, scale, rotation to default values\n"+
"// d. for each name/position/rotation triplet in the pose arrays, update the appropriate\n"+
"//    HAnimJoint nodes to that corresponding set of values\n"+
"\n"+
"var scriptName='HAnimPoseScript';\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"    // TODO author initialization code (if any) goes here\n"+
"    \n"+
"    // check that array sizes are identical for namesPoseJoints, positionsPoseJoints, rotationsPoseJoints\n"+
"    \n"+
"    // check humanoid connectivity\n"+
"\n"+
"    tracePrint ('initialization() successful');\n"+
"}\n"+
"function set_enabled (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOutput field enabled\n"+
"    enabled = eventValue;\n"+
"    tracePrint ('enabled = ' + enabled);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"function setPose (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOnly field setPose\n"+
"    setPose = eventValue;\n"+
"\n"+
"    tracePrint ('setPose = ' + setPose);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"function set_name (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOutput field name\n"+
"    name = eventValue;\n"+
"    tracePrint ('name = ' + name);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"function set_namesPoseJoints (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOutput field namesPoseJoints\n"+
"    namesPoseJoints = eventValue;\n"+
"    tracePrint ('namesPoseJoints = ' + namesPoseJoints);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"function set_positionsPoseJoints (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOutput field positionsPoseJoints\n"+
"    positionsPoseJoints = eventValue;\n"+
"    tracePrint ('positionsPoseJoints = ' + positionsPoseJoints);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"function set_rotationsPoseJoints (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOutput field rotationsPoseJoints\n"+
"    rotationsPoseJoints = eventValue;\n"+
"    tracePrint ('rotationsPoseJoints = ' + rotationsPoseJoints);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"function set_humanoid (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOutput field humanoid\n"+
"    humanoid = eventValue;\n"+
"    tracePrint ('humanoid = ' + humanoid);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"// ================== Trace output functions ==================\n"+
"\n"+
"function tracePrint (outputString)\n"+
"{\n"+
"   // if traceEnabled is true, print outputString on X3D browser console\n"+
"   if (traceEnabled)\n"+
"      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');\n"+
"}\n"+
"function alwaysPrint (outputString)\n"+
"{\n"+
"      // always print outputString on X3D browser console\n"+
"      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');\n"+
"}\n"+
"function set_traceEnabled (eventValue)\n"+
"{\n"+
"      // input eventValue received for inputOutput field\n"+
"      traceEnabled = eventValue;\n"+
"}\n"+
"// ===========================================================`)
let IS47 = browser.currentScene.createNode("IS");
let connect48 = browser.currentScene.createNode("connect");
connect48.nodeField = "enabled";
connect48.protoField = "enabled";
IS47YYY.connect = new X3D.MFNode();

IS47ZZZ.connect[0] = connect48;

let connect49 = browser.currentScene.createNode("connect");
connect49.nodeField = "setPose";
connect49.protoField = "setPose";
IS47ZZZ.connect[1] = connect49;

let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "name";
connect50.protoField = "name";
IS47ZZZ.connect[2] = connect50;

let connect51 = browser.currentScene.createNode("connect");
connect51.nodeField = "namesPoseJoints";
connect51.protoField = "namesPoseJoints";
IS47ZZZ.connect[3] = connect51;

let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "positionsPoseJoints";
connect52.protoField = "positionsPoseJoints";
IS47ZZZ.connect[4] = connect52;

let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "rotationsPoseJoints";
connect53.protoField = "rotationsPoseJoints";
IS47ZZZ.connect[5] = connect53;

let connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "whichChoice";
connect54.protoField = "whichChoice";
IS47ZZZ.connect[6] = connect54;

let connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "children";
connect55.protoField = "children";
IS47ZZZ.connect[7] = connect55;

let connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "addChildren";
connect56.protoField = "addChildren";
IS47ZZZ.connect[8] = connect56;

let connect57 = browser.currentScene.createNode("connect");
connect57.nodeField = "removeChildren";
connect57.protoField = "removeChildren";
IS47ZZZ.connect[9] = connect57;

let connect58 = browser.currentScene.createNode("connect");
connect58.nodeField = "traceEnabled";
connect58.protoField = "traceEnabled";
IS47ZZZ.connect[10] = connect58;

iS = IS47;

ProtoBody27ZZZ.children[2] = Script35;

protoBody = ProtoBody27;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = ProtoDeclare14;

let WorldInfo59 = browser.currentScene.createNode("WorldInfo");
WorldInfo59.DEF = "ModelInfo";
WorldInfo59.title = "HAnimPose Prototype";
WorldInfo59.info = new X3D.MFString([new X3D.SFString("Design to illustrate a potential HAnimPose node")]);
browser.currentScene.children[1] = WorldInfo59;

let NavigationInfo60 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[2] = NavigationInfo60;

let ProtoInstance61 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance61.name = "HAnimPose";
let fieldValue62 = browser.currentScene.createNode("fieldValue");
fieldValue62.name = "name";
fieldValue62.value = "A";
ProtoInstance61YYY.fieldValue = new X3D.MFNode();

ProtoInstance61ZZZ.fieldValue[0] = fieldValue62;

let fieldValue63 = browser.currentScene.createNode("fieldValue");
fieldValue63.name = "namesPoseJoints";
fieldValue63.value = "\"l_hip\" \"r_hip\"";
ProtoInstance61ZZZ.fieldValue[1] = fieldValue63;

let fieldValue64 = browser.currentScene.createNode("fieldValue");
fieldValue64.name = "positionsPoseJoints";
fieldValue64.value = "0 0 0 0 0 0";
ProtoInstance61ZZZ.fieldValue[2] = fieldValue64;

let fieldValue65 = browser.currentScene.createNode("fieldValue");
fieldValue65.name = "rotationsPoseJoints";
fieldValue65.value = "0 0 1 0.2 0 0 1 -0.2";
ProtoInstance61ZZZ.fieldValue[3] = fieldValue65;

browser.currentScene.children[3] = ProtoInstance61;

let ProtoInstance66 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance66.name = "HAnimPose";
let fieldValue67 = browser.currentScene.createNode("fieldValue");
fieldValue67.name = "name";
fieldValue67.value = "T";
ProtoInstance66YYY.fieldValue = new X3D.MFNode();

ProtoInstance66ZZZ.fieldValue[0] = fieldValue67;

let fieldValue68 = browser.currentScene.createNode("fieldValue");
fieldValue68.name = "namesPoseJoints";
fieldValue68.value = "\"l_shoulder\" \"r_shoulder\"";
ProtoInstance66ZZZ.fieldValue[1] = fieldValue68;

let fieldValue69 = browser.currentScene.createNode("fieldValue");
fieldValue69.name = "positionsPoseJoints";
fieldValue69.value = "0 0 0 0 0 0";
ProtoInstance66ZZZ.fieldValue[2] = fieldValue69;

let fieldValue70 = browser.currentScene.createNode("fieldValue");
fieldValue70.name = "rotationsPoseJoints";
fieldValue70.value = "0 0 1 1.57 0 0 1 -1.57";
ProtoInstance66ZZZ.fieldValue[3] = fieldValue70;

browser.currentScene.children[4] = ProtoInstance66;

}
main ();

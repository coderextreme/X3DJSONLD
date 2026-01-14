#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "HAnimPosePrototype.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Define an experimental new node to simply capture a single pose for an HAnimHumanoid model.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "created";
meta4.content = "4 April 2025";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "modified";
meta5.content = "Mon, 15 Sep 2025 05:20:09 GMT";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "creator";
meta6.content = "Don Brutzman";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "creator";
meta7.content = "Joe Williams";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "warning";
meta8.content = "under development";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "HAnimPoseDesignNotes19MAR2025.pdf";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "HAnim Architecture volume 1 version 2.0, clause 4.8.2 Modelling of human-like HAnim figures, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#ModellingOfHumanLikeHAnimFigures";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "HAnim Architecture volume 1 version 2.0, clause 4.8.3 Poses, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Poses";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "identifier";
meta12.content = "https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/HelloWorldScenes/HAnimPosePrototype.x3d";
head1.meta[10] = meta12;

head = head1;

ProtoDeclare ProtoDeclare14 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface ProtoInterface15 = createNode("ProtoInterface");
field field16 = createNode("field");
field16.accessType = "inputOutput";
field16.type = "SFBool";
field16.name = "enabled";
field16.value = "true";
field16.appinfo = "default value true";
ProtoInterface15.field = new MFNode();

ProtoInterface15.field[0] = field16;

field field17 = createNode("field");
field17.accessType = "inputOnly";
field17.type = "SFBool";
field17.name = "setPose";
field17.appinfo = "this event tells the HAnimPose node to do it's thing!";
ProtoInterface15.field[1] = field17;

field field18 = createNode("field");
field18.accessType = "inputOutput";
field18.type = "SFString";
field18.name = "name";
field18.value = "PoseName";
field18.appinfo = "name of this pose";
ProtoInterface15.field[2] = field18;

field field19 = createNode("field");
field19.accessType = "inputOutput";
field19.type = "MFString";
field19.name = "namesPoseJoints";
field19.value = "\"nameJoint1\" \"nameJoint2\" \"nameJoint3\" \"nameJoint4\"";
field19.appinfo = "names of joints in pose";
ProtoInterface15.field[3] = field19;

field field20 = createNode("field");
field20.accessType = "inputOutput";
field20.type = "MFVec3f";
field20.name = "positionsPoseJoints";
field20.appinfo = "positions of joints in pose";
ProtoInterface15.field[4] = field20;

field field21 = createNode("field");
field21.accessType = "inputOutput";
field21.type = "MFRotation";
field21.name = "rotationsPoseJoints";
field21.appinfo = "rotations of joints in pose";
ProtoInterface15.field[5] = field21;

field field22 = createNode("field");
field22.accessType = "inputOutput";
field22.type = "SFInt32";
field22.name = "whichChoice";
field22.appinfo = "selects one of the HAnimHumanoid nodes";
ProtoInterface15.field[6] = field22;

field field23 = createNode("field");
field23.accessType = "inputOutput";
field23.type = "MFNode";
field23.name = "children";
field23.appinfo = "references one or more HAnimHumanoid nodes, typically via USE references";
ProtoInterface15.field[7] = field23;

field field24 = createNode("field");
field24.accessType = "inputOnly";
field24.type = "MFNode";
field24.name = "addChildren";
field24.appinfo = "references one or more HAnimHumanoid nodes, typically via USE references";
ProtoInterface15.field[8] = field24;

field field25 = createNode("field");
field25.accessType = "inputOnly";
field25.type = "MFNode";
field25.name = "removeChildren";
field25.appinfo = "references one or more HAnimHumanoid nodes, typically via USE references";
ProtoInterface15.field[9] = field25;

field field26 = createNode("field");
field26.accessType = "inputOutput";
field26.type = "SFBool";
field26.name = "traceEnabled";
field26.value = "true";
field26.appinfo = "debug trace to Browser output console";
ProtoInterface15.field[10] = field26;

ProtoDeclare14.protoInterface = ProtoInterface15;

ProtoBody ProtoBody27 = createNode("ProtoBody");
Switch Switch28 = createNode("Switch");
Switch28.DEF = "PrototypeRootNode";
IS IS29 = createNode("IS");
connect connect30 = createNode("connect");
connect30.nodeField = "whichChoice";
connect30.protoField = "whichChoice";
IS29.connect = new MFNode();

IS29.connect[0] = connect30;

connect connect31 = createNode("connect");
connect31.nodeField = "addChildren";
connect31.protoField = "addChildren";
IS29.connect[1] = connect31;

connect connect32 = createNode("connect");
connect32.nodeField = "removeChildren";
connect32.protoField = "removeChildren";
IS29.connect[2] = connect32;

connect connect33 = createNode("connect");
connect33.nodeField = "children";
connect33.protoField = "children";
IS29.connect[3] = connect33;

Switch28.iS = IS29;

ProtoBody27.children = new MFNode();

ProtoBody27.children[0] = Switch28;

MetadataString MetadataString34 = createNode("MetadataString");
MetadataString34.name = "interface";
MetadataString34.reference = "https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/concepts.html#InterfaceHierarchy";
MetadataString34.value = new MFString(new java.lang.String["X3DGroupingNode"]);
ProtoBody27.children[1] = MetadataString34;

Script Script35 = createNode("Script");
Script35.DEF = "HAnimPoseScriptOperations";
Script35.directOutput = True;
field field36 = createNode("field");
field36.accessType = "inputOutput";
field36.type = "SFBool";
field36.name = "enabled";
field36.appinfo = "default value true";
Script35.field = new MFNode();

Script35.field[0] = field36;

field field37 = createNode("field");
field37.accessType = "inputOnly";
field37.type = "SFBool";
field37.name = "setPose";
field37.appinfo = "this event tells the HAnimPose node to do it's thing!";
Script35.field[1] = field37;

field field38 = createNode("field");
field38.accessType = "inputOutput";
field38.type = "SFString";
field38.name = "name";
field38.appinfo = "name of this pose";
Script35.field[2] = field38;

field field39 = createNode("field");
field39.accessType = "inputOutput";
field39.type = "MFString";
field39.name = "namesPoseJoints";
field39.appinfo = "names of joints in pose";
Script35.field[3] = field39;

field field40 = createNode("field");
field40.accessType = "inputOutput";
field40.type = "MFVec3f";
field40.name = "positionsPoseJoints";
field40.appinfo = "positions of joints in pose";
Script35.field[4] = field40;

field field41 = createNode("field");
field41.accessType = "inputOutput";
field41.type = "MFRotation";
field41.name = "rotationsPoseJoints";
field41.appinfo = "rotations of joints in pose";
Script35.field[5] = field41;

field field42 = createNode("field");
field42.accessType = "inputOutput";
field42.type = "SFInt32";
field42.name = "whichChoice";
field42.appinfo = "selects one of the HAnimHumanoid nodes";
Script35.field[6] = field42;

field field43 = createNode("field");
field43.accessType = "inputOutput";
field43.type = "MFNode";
field43.name = "children";
field43.appinfo = "references one or more HAnimHumanoid nodes, typically via USE references";
Script35.field[7] = field43;

field field44 = createNode("field");
field44.accessType = "inputOnly";
field44.type = "MFNode";
field44.name = "addChildren";
field44.appinfo = "references one or more HAnimHumanoid nodes, typically via USE references";
Script35.field[8] = field44;

field field45 = createNode("field");
field45.accessType = "inputOnly";
field45.type = "MFNode";
field45.name = "removeChildren";
field45.appinfo = "references one or more HAnimHumanoid nodes, typically via USE references";
Script35.field[9] = field45;

field field46 = createNode("field");
field46.accessType = "inputOutput";
field46.type = "SFBool";
field46.name = "traceEnabled";
field46.appinfo = "debug trace to Browser output console";
Script35.field[10] = field46;


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
IS IS47 = createNode("IS");
connect connect48 = createNode("connect");
connect48.nodeField = "enabled";
connect48.protoField = "enabled";
IS47.connect = new MFNode();

IS47.connect[0] = connect48;

connect connect49 = createNode("connect");
connect49.nodeField = "setPose";
connect49.protoField = "setPose";
IS47.connect[1] = connect49;

connect connect50 = createNode("connect");
connect50.nodeField = "name";
connect50.protoField = "name";
IS47.connect[2] = connect50;

connect connect51 = createNode("connect");
connect51.nodeField = "namesPoseJoints";
connect51.protoField = "namesPoseJoints";
IS47.connect[3] = connect51;

connect connect52 = createNode("connect");
connect52.nodeField = "positionsPoseJoints";
connect52.protoField = "positionsPoseJoints";
IS47.connect[4] = connect52;

connect connect53 = createNode("connect");
connect53.nodeField = "rotationsPoseJoints";
connect53.protoField = "rotationsPoseJoints";
IS47.connect[5] = connect53;

connect connect54 = createNode("connect");
connect54.nodeField = "whichChoice";
connect54.protoField = "whichChoice";
IS47.connect[6] = connect54;

connect connect55 = createNode("connect");
connect55.nodeField = "children";
connect55.protoField = "children";
IS47.connect[7] = connect55;

connect connect56 = createNode("connect");
connect56.nodeField = "addChildren";
connect56.protoField = "addChildren";
IS47.connect[8] = connect56;

connect connect57 = createNode("connect");
connect57.nodeField = "removeChildren";
connect57.protoField = "removeChildren";
IS47.connect[9] = connect57;

connect connect58 = createNode("connect");
connect58.nodeField = "traceEnabled";
connect58.protoField = "traceEnabled";
IS47.connect[10] = connect58;

Script35.iS = IS47;

ProtoBody27.children[2] = Script35;

ProtoDeclare14.protoBody = ProtoBody27;

children = new MFNode();

children[0] = ProtoDeclare14;

WorldInfo WorldInfo59 = createNode("WorldInfo");
WorldInfo59.DEF = "ModelInfo";
WorldInfo59.title = "HAnimPose Prototype";
WorldInfo59.info = new MFString(new java.lang.String["Design to illustrate a potential HAnimPose node"]);
children[1] = WorldInfo59;

NavigationInfo NavigationInfo60 = createNode("NavigationInfo");
children[2] = NavigationInfo60;

ProtoInstance ProtoInstance61 = createNode("ProtoInstance");
ProtoInstance61.name = "HAnimPose";
fieldValue fieldValue62 = createNode("fieldValue");
fieldValue62.name = "name";
fieldValue62.value = "A";
ProtoInstance61.fieldValue = new MFNode();

ProtoInstance61.fieldValue[0] = fieldValue62;

fieldValue fieldValue63 = createNode("fieldValue");
fieldValue63.name = "namesPoseJoints";
fieldValue63.value = "\"l_hip\" \"r_hip\"";
ProtoInstance61.fieldValue[1] = fieldValue63;

fieldValue fieldValue64 = createNode("fieldValue");
fieldValue64.name = "positionsPoseJoints";
fieldValue64.value = "0 0 0 0 0 0";
ProtoInstance61.fieldValue[2] = fieldValue64;

fieldValue fieldValue65 = createNode("fieldValue");
fieldValue65.name = "rotationsPoseJoints";
fieldValue65.value = "0 0 1 0.2 0 0 1 -0.2";
ProtoInstance61.fieldValue[3] = fieldValue65;

children[3] = ProtoInstance61;

ProtoInstance ProtoInstance66 = createNode("ProtoInstance");
ProtoInstance66.name = "HAnimPose";
fieldValue fieldValue67 = createNode("fieldValue");
fieldValue67.name = "name";
fieldValue67.value = "T";
ProtoInstance66.fieldValue = new MFNode();

ProtoInstance66.fieldValue[0] = fieldValue67;

fieldValue fieldValue68 = createNode("fieldValue");
fieldValue68.name = "namesPoseJoints";
fieldValue68.value = "\"l_shoulder\" \"r_shoulder\"";
ProtoInstance66.fieldValue[1] = fieldValue68;

fieldValue fieldValue69 = createNode("fieldValue");
fieldValue69.name = "positionsPoseJoints";
fieldValue69.value = "0 0 0 0 0 0";
ProtoInstance66.fieldValue[2] = fieldValue69;

fieldValue fieldValue70 = createNode("fieldValue");
fieldValue70.name = "rotationsPoseJoints";
fieldValue70.value = "0 0 1 1.57 0 0 1 -1.57";
ProtoInstance66.fieldValue[3] = fieldValue70;

children[4] = ProtoInstance66;

}

let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
//Thanks to Leonard Daly for the original design of this prototype
let ProtoDeclare2 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ViewPositionOrientation" appinfo="ViewPositionOrientation provides provides console output of local position and orientation as user navigates" ><ProtoInterface><field name="enabled" accessType="inputOutput" appinfo="Whether or not ViewPositionOrientation sends output to console" type="SFBool" value="true"></field>
<field name="traceEnabled" accessType="initializeOnly" appinfo="Output internal trace messages for debugging this node, intended for developer use only" type="SFBool" value="true"></field>
<field name="set_traceEnabled" accessType="inputOnly" appinfo="Ability to turn output tracing on/off at runtime" type="SFBool"></field>
<field name="position_changed" accessType="outputOnly" appinfo="Output local position" type="SFVec3f"></field>
<field name="orientation_changed" accessType="outputOnly" appinfo="Output local orientation" type="SFRotation"></field>
<field name="outputViewpointString" accessType="outputOnly" appinfo="MFString value of new Viewpoint, suitable for use in string field of a Text node" type="MFString"></field>
</ProtoInterface>
<ProtoBody><ProximitySensor DEF="WhereSensor" size="1000000000 1000000000 1000000000"><IS><connect nodeField="enabled" protoField="enabled"></connect>
</IS>
</ProximitySensor>
<!--it's a big old world out there! large box likely handles most use cases.--><Script DEF="OutputPositionOrientation"><field name="traceEnabled" accessType="initializeOnly" type="SFBool"></field>
<field name="set_traceEnabled" accessType="inputOnly" type="SFBool"></field>
<field name="set_position" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_orientation" accessType="inputOnly" type="SFRotation"></field>
<field name="position" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="orientation" accessType="initializeOnly" type="SFRotation" value="0 1 0 0"></field>
<field name="position_changed" accessType="outputOnly" type="SFVec3f"></field>
<field name="orientation_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="outputViewpointString" accessType="outputOnly" type="MFString"></field>
<IS><connect nodeField="traceEnabled" protoField="traceEnabled"></connect>
<connect nodeField="set_traceEnabled" protoField="set_traceEnabled"></connect>
<connect nodeField="position_changed" protoField="position_changed"></connect>
<connect nodeField="orientation_changed" protoField="orientation_changed"></connect>
<connect nodeField="outputViewpointString" protoField="outputViewpointString"></connect>
</IS>
<![CDATA[ecmascript:

function roundoff (value, digits) // for local use only
{
	var resolution = 1;
	for (i = 1; i <= digits; i++ )
	{
		resolution *= 10;
	}
	return Math.round (value*resolution) / resolution; // round to resolution
}
function outputViewpoint ()
{
  var holdString = 
        '<Viewpoint position="' +
		roundoff (position.x, 1) + ' ' +
		roundoff (position.y, 1) + ' ' +
		roundoff (position.z, 1) +
        '" orientation="' +
		roundoff (orientation.x, 3) + ' ' +
		roundoff (orientation.y, 3) + ' ' +
		roundoff (orientation.z, 3) + ' ' +
		roundoff (orientation.angle, 4) + '"></Viewpoint>' ;
   tracePrint (holdString);
   outputViewpointString = new MFString (holdString);
}
function set_position (value)
{
	position = value; // save persistent value
	position_changed = position; // output event
	outputViewpoint ();
}
function set_orientation (value)
{
	orientation = value; // save persistent value
	orientation_changed = orientation; // output event
	outputViewpoint ();
}
function set_traceEnabled (value)
{
	traceEnabled = value;
	alwaysPrint ('traceEnabled=' + traceEnabled);
}
function alwaysPrint (text)
{
	Browser.print ('[ViewPositionOrientation] ' + text + '\n');
}
function tracePrint (text)
{
	if (traceEnabled) alwaysPrint (text);
}]]></Script>
<ROUTE fromField="position_changed" fromNode="WhereSensor" toField="set_position" toNode="OutputPositionOrientation"></ROUTE>
<ROUTE fromField="orientation_changed" fromNode="WhereSensor" toField="set_orientation" toNode="OutputPositionOrientation"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare2.name = "ViewPositionOrientation";
ProtoDeclare2.appinfo = "ViewPositionOrientation provides provides console output of local position and orientation as user navigates";
let ProtoInterface3 = browser.currentScene.createNode("ProtoInterface");
let field4 = browser.currentScene.createNode("field");
field4.name = "enabled";
field4.accessType = "inputOutput";
field4.appinfo = "Whether or not ViewPositionOrientation sends output to console";
field4.type = "SFBool";
field4.value = "true";
ProtoInterface3.field = new MFNode();

ProtoInterface3.field[0] = field4;

let field5 = browser.currentScene.createNode("field");
field5.name = "traceEnabled";
field5.accessType = "initializeOnly";
field5.appinfo = "Output internal trace messages for debugging this node, intended for developer use only";
field5.type = "SFBool";
field5.value = "true";
ProtoInterface3.field[1] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "set_traceEnabled";
field6.accessType = "inputOnly";
field6.appinfo = "Ability to turn output tracing on/off at runtime";
field6.type = "SFBool";
ProtoInterface3.field[2] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "position_changed";
field7.accessType = "outputOnly";
field7.appinfo = "Output local position";
field7.type = "SFVec3f";
ProtoInterface3.field[3] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "orientation_changed";
field8.accessType = "outputOnly";
field8.appinfo = "Output local orientation";
field8.type = "SFRotation";
ProtoInterface3.field[4] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "outputViewpointString";
field9.accessType = "outputOnly";
field9.appinfo = "MFString value of new Viewpoint, suitable for use in string field of a Text node";
field9.type = "MFString";
ProtoInterface3.field[5] = field9;

ProtoDeclare2.protoInterface = ProtoInterface3;

let ProtoBody10 = browser.currentScene.createNode("ProtoBody");
let ProximitySensor11 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor11.DEF = "WhereSensor";
ProximitySensor11.size = new SFVec3f(new float[1000000000,1000000000,1000000000]);
let IS12 = browser.currentScene.createNode("IS");
let connect13 = browser.currentScene.createNode("connect");
connect13.nodeField = "enabled";
connect13.protoField = "enabled";
IS12.connect = new MFNode();

IS12.connect[0] = connect13;

ProximitySensor11.iS = IS12;

ProtoBody10.children = new MFNode();

ProtoBody10.children[0] = ProximitySensor11;

//it's a big old world out there! large box likely handles most use cases.
let Script14 = browser.currentScene.createNode("Script");
Script14.DEF = "OutputPositionOrientation";
let field15 = browser.currentScene.createNode("field");
field15.name = "traceEnabled";
field15.accessType = "initializeOnly";
field15.type = "SFBool";
Script14.field = new MFNode();

Script14.field[0] = field15;

let field16 = browser.currentScene.createNode("field");
field16.name = "set_traceEnabled";
field16.accessType = "inputOnly";
field16.type = "SFBool";
Script14.field[1] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "set_position";
field17.accessType = "inputOnly";
field17.type = "SFVec3f";
Script14.field[2] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "set_orientation";
field18.accessType = "inputOnly";
field18.type = "SFRotation";
Script14.field[3] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "position";
field19.accessType = "initializeOnly";
field19.type = "SFVec3f";
field19.value = "0 0 0";
Script14.field[4] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "orientation";
field20.accessType = "initializeOnly";
field20.type = "SFRotation";
field20.value = "0 1 0 0";
Script14.field[5] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "position_changed";
field21.accessType = "outputOnly";
field21.type = "SFVec3f";
Script14.field[6] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "orientation_changed";
field22.accessType = "outputOnly";
field22.type = "SFRotation";
Script14.field[7] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "outputViewpointString";
field23.accessType = "outputOnly";
field23.type = "MFString";
Script14.field[8] = field23;

let IS24 = browser.currentScene.createNode("IS");
let connect25 = browser.currentScene.createNode("connect");
connect25.nodeField = "traceEnabled";
connect25.protoField = "traceEnabled";
IS24.connect = new MFNode();

IS24.connect[0] = connect25;

let connect26 = browser.currentScene.createNode("connect");
connect26.nodeField = "set_traceEnabled";
connect26.protoField = "set_traceEnabled";
IS24.connect[1] = connect26;

let connect27 = browser.currentScene.createNode("connect");
connect27.nodeField = "position_changed";
connect27.protoField = "position_changed";
IS24.connect[2] = connect27;

let connect28 = browser.currentScene.createNode("connect");
connect28.nodeField = "orientation_changed";
connect28.protoField = "orientation_changed";
IS24.connect[3] = connect28;

let connect29 = browser.currentScene.createNode("connect");
connect29.nodeField = "outputViewpointString";
connect29.protoField = "outputViewpointString";
IS24.connect[4] = connect29;

Script14.iS = IS24;


Script14.setSourceCode(`ecmascript:\n"+
"\n"+
"function roundoff (value, digits) // for local use only\n"+
"{\n"+
"	var resolution = 1;\n"+
"	for (i = 1; i <= digits; i++ )\n"+
"	{\n"+
"		resolution *= 10;\n"+
"	}\n"+
"	return Math.round (value*resolution) / resolution; // round to resolution\n"+
"}\n"+
"function outputViewpoint ()\n"+
"{\n"+
"  var holdString = \n"+
"        '<Viewpoint position=\"' +\n"+
"		roundoff (position.x, 1) + ' ' +\n"+
"		roundoff (position.y, 1) + ' ' +\n"+
"		roundoff (position.z, 1) +\n"+
"        '\" orientation=\"' +\n"+
"		roundoff (orientation.x, 3) + ' ' +\n"+
"		roundoff (orientation.y, 3) + ' ' +\n"+
"		roundoff (orientation.z, 3) + ' ' +\n"+
"		roundoff (orientation.angle, 4) + '\"/>' ;\n"+
"   tracePrint (holdString);\n"+
"   outputViewpointString = new MFString (holdString);\n"+
"}\n"+
"function set_position (value)\n"+
"{\n"+
"	position = value; // save persistent value\n"+
"	position_changed = position; // output event\n"+
"	outputViewpoint ();\n"+
"}\n"+
"function set_orientation (value)\n"+
"{\n"+
"	orientation = value; // save persistent value\n"+
"	orientation_changed = orientation; // output event\n"+
"	outputViewpoint ();\n"+
"}\n"+
"function set_traceEnabled (value)\n"+
"{\n"+
"	traceEnabled = value;\n"+
"	alwaysPrint ('traceEnabled=' + traceEnabled);\n"+
"}\n"+
"function alwaysPrint (text)\n"+
"{\n"+
"	Browser.print ('[ViewPositionOrientation] ' + text + '\\n');\n"+
"}\n"+
"function tracePrint (text)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (text);\n"+
"}`)
ProtoBody10.children[1] = Script14;

let ROUTE30 = browser.currentScene.createNode("ROUTE");
ROUTE30.fromField = "position_changed";
ROUTE30.fromNode = "WhereSensor";
ROUTE30.toField = "set_position";
ROUTE30.toNode = "OutputPositionOrientation";
ProtoBody10.children[2] = ROUTE30;

let ROUTE31 = browser.currentScene.createNode("ROUTE");
ROUTE31.fromField = "orientation_changed";
ROUTE31.fromNode = "WhereSensor";
ROUTE31.toField = "set_orientation";
ROUTE31.toNode = "OutputPositionOrientation";
ProtoBody10.children[3] = ROUTE31;

ProtoDeclare2.protoBody = ProtoBody10;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare2;

//====================
let Viewpoint32 = browser.currentScene.createNode("Viewpoint");
Viewpoint32.description = "ViewPositionOrientation prototype";
Viewpoint32.position = new SFVec3f(new float[0,0,14]);
browser.currentScene.children[1] = Viewpoint32;

let Anchor33 = browser.currentScene.createNode("Anchor");
Anchor33.description = "ViewPositionOrientation Example";
Anchor33.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor33.url = new MFString(new java.lang.String["ViewPositionOrientationExample.x3d","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationExample.x3d","ViewPositionOrientationExample.wrl","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationExample.wrl"]);
let Shape34 = browser.currentScene.createNode("Shape");
let Text35 = browser.currentScene.createNode("Text");
Text35.string = new MFString(new java.lang.String["ViewPositionOrientationPrototype","is a prototype definition file","","Click this text to see","ViewPositionOrientationExample"]);
let FontStyle36 = browser.currentScene.createNode("FontStyle");
FontStyle36.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle36.size = 1.2;
Text35.fontStyle = FontStyle36;

Shape34.geometry = Text35;

let Appearance37 = browser.currentScene.createNode("Appearance");
let Material38 = browser.currentScene.createNode("Material");
Material38.diffuseColor = new SFColor(new float[0.6,0.8,0.4]);
Appearance37.material = Material38;

Shape34.appearance = Appearance37;

Anchor33.children = new MFNode();

Anchor33.children[0] = Shape34;

//Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip
let Shape39 = browser.currentScene.createNode("Shape");
//Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible.
let Box40 = browser.currentScene.createNode("Box");
Box40.size = new SFVec3f(new float[16,7,0.001]);
Shape39.geometry = Box40;

let Appearance41 = browser.currentScene.createNode("Appearance");
let Material42 = browser.currentScene.createNode("Material");
Material42.transparency = 1;
Appearance41.material = Material42;

Shape39.appearance = Appearance41;

Anchor33.children[1] = Shape39;

browser.currentScene.children[2] = Anchor33;


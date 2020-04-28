let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "LoadSensorPrototype.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ProtoDeclare3 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="LoadSensor" appinfo="LoadSensor monitors the progress and success of downloading URL elements over a network. Only nodes that contain a valid URL field (i.e. descendants of X3DUrlObject) may be specified as watchList children. Multiple nodes may be watched with a single LoadSensor." documentation="https://www.web3d.org/specifications/ISO-IEC-19775/Part01/components/networking.html#LoadSensor" ><ProtoInterface><field name="enabled" accessType="inputOutput" appinfo="Enables/disables the sensor node." type="SFBool" value="true"></field>
<field name="timeOut" accessType="inputOutput" appinfo="Maximum time for which the LoadSensor will monitor loading starting from when the sensor becomes active. timeOut=0 ordinarily indicates an indefinite time out period; i.e. the LoadSensor will wait until loading has completed either with success or failure timeOut=0 causes immediate loading for this implementation." type="SFTime" value="0"></field>
<field name="watchList" accessType="initializeOnly" appinfo="Zero or more nodes with url fields to monitor." type="MFNode"></field>
<field name="set_watchList" accessType="inputOnly" appinfo="Change watchList MFNode array." type="MFNode"></field>
<field name="isActive" accessType="outputOnly" appinfo="isActive=true when loading begins isActive=false when loading ends." type="SFBool"></field>
<field name="isLoaded" accessType="outputOnly" appinfo="isLoaded=true when loading succeeds isLoaded=false when loading fails or timeOut reached." type="SFBool"></field>
<field name="loadTime" accessType="outputOnly" appinfo="loadTime event is generated when loading has successfully completed." type="SFTime"></field>
<field name="progress" accessType="outputOnly" appinfo="progress [0..1] indicates fraction of loading complete." type="SFFloat"></field>
<field name="metadata" accessType="initializeOnly" appinfo="associated Metadata node." type="SFNode"></field>
</ProtoInterface>
<ProtoBody><Group><TimeSensor DEF="Clock" loop="true"><IS><connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="cycleInterval" protoField="timeOut"></connect>
</IS>
</TimeSensor>
<Script DEF="LoadSensorScript" directOutput="true"><field name="ClockNode" accessType="initializeOnly" type="SFNode"><TimeSensor USE="Clock"></TimeSensor>
</field>
<field name="loopStart" accessType="outputOnly" type="SFTime"></field>
<field name="fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="priorFraction" accessType="initializeOnly" type="SFFloat" value="0"></field>
<field name="progress" accessType="outputOnly" type="SFFloat"></field>
<field name="watchList" accessType="initializeOnly" type="MFNode"></field>
<field name="set_watchList" accessType="inputOnly" type="MFNode"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="isLoaded" accessType="outputOnly" type="SFBool"></field>
<field name="loadTime" accessType="outputOnly" type="SFTime"></field>
<field name="traceEnabled" accessType="initializeOnly" type="SFBool" value="false"></field>
<IS><connect nodeField="watchList" protoField="watchList"></connect>
<connect nodeField="set_watchList" protoField="set_watchList"></connect>
<connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="isLoaded" protoField="isLoaded"></connect>
<connect nodeField="loadTime" protoField="loadTime"></connect>
<connect nodeField="progress" protoField="progress"></connect>
</IS>
<![CDATA[ecmascript:

function initialize ()
{
	enabled = ClockNode.enabled;
	tracePrint ('initialize() enabled=' + enabled);
	if (enabled)
	{
		isActive = true;
		// isLoaded event only sent upon completion
		progress = 0.0;
		tracePrintEvents ();
		timeOut = ClockNode.cycleInterval;
		tracePrint ('timeOut=' + timeOut);
		if (timeOut <= 0.0) // instantaneous, no loop
		{
			isActive = false;
			isLoaded = true;
			progress = 1.0;
			loadTime = timestamp;
			tracePrintEvents ();
		}
	}
}
function fraction (value, timestamp)
{
	enabled = ClockNode.enabled;
	if (enabled)
		tracePrint ('progress=' + value + ', priorFraction=' + priorFraction);
	// use priorFraction to check for looping, then stop loop
	if (enabled && ((value >=1) || (value < priorFraction)))
	{
		isActive = false;
		isLoaded = true;
		loadTime = timestamp;
		progress = 1;
		tracePrintEvents ();
		tracePrint ('complete');
                loopStart = true;
	}
	else progress= value; // output event
	priorFraction = progress;
}
function set_watchList (value, timestamp)
{
	watchList = value;
}
function tracePrintEvents ()
{
	tracePrint ('isActive=' + isActive);
	tracePrint ('isLoaded=' + isLoaded);
	tracePrint ('loadTime=' + loadTime);
	tracePrint ('progress=' + progress);
}
function tracePrint (outputString)
{
	if (traceEnabled) Browser.print ('[LoadSensor]' + outputString);
}
function alwaysPrint (outputString)
{
	Browser.print ('[LoadSensor]' + outputString);
}]]></Script>
<ROUTE fromField="loopStart" fromNode="LoadSensorScript" toField="startTime" toNode="Clock"></ROUTE>
<ROUTE fromField="isActive" fromNode="LoadSensorScript" toField="enabled" toNode="Clock"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="Clock" toField="fraction" toNode="LoadSensorScript"></ROUTE>
<Collision enabled="false"><IS><connect nodeField="proxy" protoField="metadata"></connect>
</IS>
</Collision>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare3.name = "LoadSensor";
ProtoDeclare3.appinfo = "LoadSensor monitors the progress and success of downloading URL elements over a network. Only nodes that contain a valid URL field (i.e. descendants of X3DUrlObject) may be specified as watchList children. Multiple nodes may be watched with a single LoadSensor.";
ProtoDeclare3.documentation = "https://www.web3d.org/specifications/ISO-IEC-19775/Part01/components/networking.html#LoadSensor";
let ProtoInterface4 = browser.currentScene.createNode("ProtoInterface");
let field5 = browser.currentScene.createNode("field");
field5.name = "enabled";
field5.accessType = "inputOutput";
field5.appinfo = "Enables/disables the sensor node.";
field5.type = "SFBool";
field5.value = "true";
ProtoInterface4.field = new MFNode();

ProtoInterface4.field[0] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "timeOut";
field6.accessType = "inputOutput";
field6.appinfo = "Maximum time for which the LoadSensor will monitor loading starting from when the sensor becomes active. timeOut=0 ordinarily indicates an indefinite time out period; i.e. the LoadSensor will wait until loading has completed either with success or failure timeOut=0 causes immediate loading for this implementation.";
field6.type = "SFTime";
field6.value = "0";
ProtoInterface4.field[1] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "watchList";
field7.accessType = "initializeOnly";
field7.appinfo = "Zero or more nodes with url fields to monitor.";
field7.type = "MFNode";
ProtoInterface4.field[2] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "set_watchList";
field8.accessType = "inputOnly";
field8.appinfo = "Change watchList MFNode array.";
field8.type = "MFNode";
ProtoInterface4.field[3] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "isActive";
field9.accessType = "outputOnly";
field9.appinfo = "isActive=true when loading begins isActive=false when loading ends.";
field9.type = "SFBool";
ProtoInterface4.field[4] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "isLoaded";
field10.accessType = "outputOnly";
field10.appinfo = "isLoaded=true when loading succeeds isLoaded=false when loading fails or timeOut reached.";
field10.type = "SFBool";
ProtoInterface4.field[5] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "loadTime";
field11.accessType = "outputOnly";
field11.appinfo = "loadTime event is generated when loading has successfully completed.";
field11.type = "SFTime";
ProtoInterface4.field[6] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "progress";
field12.accessType = "outputOnly";
field12.appinfo = "progress [0..1] indicates fraction of loading complete.";
field12.type = "SFFloat";
ProtoInterface4.field[7] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "metadata";
field13.accessType = "initializeOnly";
field13.appinfo = "associated Metadata node.";
field13.type = "SFNode";
ProtoInterface4.field[8] = field13;

ProtoDeclare3.protoInterface = ProtoInterface4;

let ProtoBody14 = browser.currentScene.createNode("ProtoBody");
let Group15 = browser.currentScene.createNode("Group");
let TimeSensor16 = browser.currentScene.createNode("TimeSensor");
TimeSensor16.DEF = "Clock";
TimeSensor16.loop = True;
let IS17 = browser.currentScene.createNode("IS");
let connect18 = browser.currentScene.createNode("connect");
connect18.nodeField = "enabled";
connect18.protoField = "enabled";
IS17.connect = new MFNode();

IS17.connect[0] = connect18;

let connect19 = browser.currentScene.createNode("connect");
connect19.nodeField = "cycleInterval";
connect19.protoField = "timeOut";
IS17.connect[1] = connect19;

TimeSensor16.iS = IS17;

Group15.children = new MFNode();

Group15.children[0] = TimeSensor16;

let Script20 = browser.currentScene.createNode("Script");
Script20.DEF = "LoadSensorScript";
Script20.directOutput = True;
let field21 = browser.currentScene.createNode("field");
field21.name = "ClockNode";
field21.accessType = "initializeOnly";
field21.type = "SFNode";
let TimeSensor22 = browser.currentScene.createNode("TimeSensor");
TimeSensor22.USE = "Clock";
field21.children = new MFNode();

field21.children[0] = TimeSensor22;

Script20.field = new MFNode();

Script20.field[0] = field21;

let field23 = browser.currentScene.createNode("field");
field23.name = "loopStart";
field23.accessType = "outputOnly";
field23.type = "SFTime";
Script20.field[1] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "fraction";
field24.accessType = "inputOnly";
field24.type = "SFFloat";
Script20.field[2] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "priorFraction";
field25.accessType = "initializeOnly";
field25.type = "SFFloat";
field25.value = "0";
Script20.field[3] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "progress";
field26.accessType = "outputOnly";
field26.type = "SFFloat";
Script20.field[4] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "watchList";
field27.accessType = "initializeOnly";
field27.type = "MFNode";
Script20.field[5] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "set_watchList";
field28.accessType = "inputOnly";
field28.type = "MFNode";
Script20.field[6] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "isActive";
field29.accessType = "outputOnly";
field29.type = "SFBool";
Script20.field[7] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "isLoaded";
field30.accessType = "outputOnly";
field30.type = "SFBool";
Script20.field[8] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "loadTime";
field31.accessType = "outputOnly";
field31.type = "SFTime";
Script20.field[9] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "traceEnabled";
field32.accessType = "initializeOnly";
field32.type = "SFBool";
field32.value = "false";
Script20.field[10] = field32;

let IS33 = browser.currentScene.createNode("IS");
let connect34 = browser.currentScene.createNode("connect");
connect34.nodeField = "watchList";
connect34.protoField = "watchList";
IS33.connect = new MFNode();

IS33.connect[0] = connect34;

let connect35 = browser.currentScene.createNode("connect");
connect35.nodeField = "set_watchList";
connect35.protoField = "set_watchList";
IS33.connect[1] = connect35;

let connect36 = browser.currentScene.createNode("connect");
connect36.nodeField = "isActive";
connect36.protoField = "isActive";
IS33.connect[2] = connect36;

let connect37 = browser.currentScene.createNode("connect");
connect37.nodeField = "isLoaded";
connect37.protoField = "isLoaded";
IS33.connect[3] = connect37;

let connect38 = browser.currentScene.createNode("connect");
connect38.nodeField = "loadTime";
connect38.protoField = "loadTime";
IS33.connect[4] = connect38;

let connect39 = browser.currentScene.createNode("connect");
connect39.nodeField = "progress";
connect39.protoField = "progress";
IS33.connect[5] = connect39;

Script20.iS = IS33;


Script20.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	enabled = ClockNode.enabled;\n"+
"	tracePrint ('initialize() enabled=' + enabled);\n"+
"	if (enabled)\n"+
"	{\n"+
"		isActive = true;\n"+
"		// isLoaded event only sent upon completion\n"+
"		progress = 0.0;\n"+
"		tracePrintEvents ();\n"+
"		timeOut = ClockNode.cycleInterval;\n"+
"		tracePrint ('timeOut=' + timeOut);\n"+
"		if (timeOut <= 0.0) // instantaneous, no loop\n"+
"		{\n"+
"			isActive = false;\n"+
"			isLoaded = true;\n"+
"			progress = 1.0;\n"+
"			loadTime = timestamp;\n"+
"			tracePrintEvents ();\n"+
"		}\n"+
"	}\n"+
"}\n"+
"function fraction (value, timestamp)\n"+
"{\n"+
"	enabled = ClockNode.enabled;\n"+
"	if (enabled)\n"+
"		tracePrint ('progress=' + value + ', priorFraction=' + priorFraction);\n"+
"	// use priorFraction to check for looping, then stop loop\n"+
"	if (enabled && ((value >=1) || (value < priorFraction)))\n"+
"	{\n"+
"		isActive = false;\n"+
"		isLoaded = true;\n"+
"		loadTime = timestamp;\n"+
"		progress = 1;\n"+
"		tracePrintEvents ();\n"+
"		tracePrint ('complete');\n"+
"                loopStart = true;\n"+
"	}\n"+
"	else progress= value; // output event\n"+
"	priorFraction = progress;\n"+
"}\n"+
"function set_watchList (value, timestamp)\n"+
"{\n"+
"	watchList = value;\n"+
"}\n"+
"function tracePrintEvents ()\n"+
"{\n"+
"	tracePrint ('isActive=' + isActive);\n"+
"	tracePrint ('isLoaded=' + isLoaded);\n"+
"	tracePrint ('loadTime=' + loadTime);\n"+
"	tracePrint ('progress=' + progress);\n"+
"}\n"+
"function tracePrint (outputString)\n"+
"{\n"+
"	if (traceEnabled) Browser.print ('[LoadSensor]' + outputString);\n"+
"}\n"+
"function alwaysPrint (outputString)\n"+
"{\n"+
"	Browser.print ('[LoadSensor]' + outputString);\n"+
"}`)
Group15.children[1] = Script20;

let ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromField = "loopStart";
ROUTE40.fromNode = "LoadSensorScript";
ROUTE40.toField = "startTime";
ROUTE40.toNode = "Clock";
Group15.children[2] = ROUTE40;

let ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromField = "isActive";
ROUTE41.fromNode = "LoadSensorScript";
ROUTE41.toField = "enabled";
ROUTE41.toNode = "Clock";
Group15.children[3] = ROUTE41;

let ROUTE42 = browser.currentScene.createNode("ROUTE");
ROUTE42.fromField = "fraction_changed";
ROUTE42.fromNode = "Clock";
ROUTE42.toField = "fraction";
ROUTE42.toNode = "LoadSensorScript";
Group15.children[4] = ROUTE42;

let Collision43 = browser.currentScene.createNode("Collision");
Collision43.enabled = False;
let IS44 = browser.currentScene.createNode("IS");
let connect45 = browser.currentScene.createNode("connect");
connect45.nodeField = "proxy";
connect45.protoField = "metadata";
IS44.connect = new MFNode();

IS44.connect[0] = connect45;

Collision43.iS = IS44;

Group15.children[5] = Collision43;

ProtoBody14.children = new MFNode();

ProtoBody14.children[0] = Group15;

ProtoDeclare3.protoBody = ProtoBody14;

browser.currentScene.children[1] = ProtoDeclare3;

//======================================
//Example use
let Anchor46 = browser.currentScene.createNode("Anchor");
Anchor46.description = "LoadSensorExample";
Anchor46.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor46.url = new MFString(new java.lang.String["LoadSensorExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorExample.x3d","LoadSensorExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorExample.wrl"]);
let Shape47 = browser.currentScene.createNode("Shape");
let Text48 = browser.currentScene.createNode("Text");
Text48.string = new MFString(new java.lang.String["LoadSensorPrototype","defines a prototype","","Click on this text to see","LoadSensorExample scene"]);
let FontStyle49 = browser.currentScene.createNode("FontStyle");
FontStyle49.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle49.size = 0.7;
Text48.fontStyle = FontStyle49;

Shape47.geometry = Text48;

let Appearance50 = browser.currentScene.createNode("Appearance");
let Material51 = browser.currentScene.createNode("Material");
Material51.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance50.material = Material51;

Shape47.appearance = Appearance50;

Anchor46.children = new MFNode();

Anchor46.children[0] = Shape47;

browser.currentScene.children[2] = Anchor46;


let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "HeadsUpDisplayPrototype.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Generic Heads Up Display (HUD) prototype to keep children on screen.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Don Brutzman";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "created";
meta5.content = "9 November 2003";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "modified";
meta6.content = "14 January 2014";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "subject";
meta7.content = "HUD Heads Up Display";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "identifier";
meta8.content = "https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "generator";
meta9.content = "X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "license";
meta10.content = "../../license.html";
head1.meta[8] = meta10;

head = head1;

let ProtoDeclare12 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="HeadsUpDisplay" appinfo="HeadsUpDisplay positions child geometry in screen space, movable by the user" ><ProtoInterface><field name="children" accessType="inputOutput" appinfo="Displayed subscene positioned as a HUD." type="MFNode"><!--default is null array of nodes--></field>
<field name="dragChildren" accessType="inputOutput" appinfo="Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position." type="MFNode"><!--default is null array of nodes--></field>
<field name="locationOffset" accessType="initializeOnly" appinfo="Modified screen location and distance (for size)." type="SFVec3f" value="-2 -2 0"></field>
<field name="traceEnabled" accessType="initializeOnly" appinfo="Enable/disable console output for troubleshooting." type="SFBool" value="false"></field>
</ProtoInterface>
<ProtoBody><Group><ProximitySensor DEF="WhereSensor" size="1000000000 1000000000 1000000000"><IS><connect nodeField="center" protoField="locationOffset"></connect>
</IS>
</ProximitySensor>
<Transform DEF="FixedLocation"><Transform DEF="MovableLocation"><Transform DEF="LocationOffset"><IS><connect nodeField="translation" protoField="locationOffset"></connect>
</IS>
<Transform translation="0 0 -10"><Group><IS><connect nodeField="children" protoField="children"></connect>
</IS>
</Group>
<Group DEF="PlaneMovementSensorGroup"><Group DEF="DragGeometry"><IS><connect nodeField="children" protoField="dragChildren"></connect>
</IS>
</Group>
<PlaneSensor DEF="PlaneMovementSensor" description="click and drag to move interface"><IS><connect nodeField="offset" protoField="locationOffset"></connect>
</IS>
</PlaneSensor>
<VisibilitySensor DEF="MovementVisibilitySensor"></VisibilitySensor>
<Script DEF="VisibilityControlScript"><field name="traceEnabled" accessType="initializeOnly" type="SFBool"></field>
<field name="isVisible" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="planeSensorTranslation" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="setIsVisible" accessType="inputOnly" type="SFBool"></field>
<field name="setPlaneSensorIsActive" accessType="inputOnly" type="SFBool"></field>
<field name="setPlaneSensorTranslation" accessType="inputOnly" type="SFVec3f"></field>
<field name="translationChanged" accessType="outputOnly" type="SFVec3f"></field>
<field name="translationOffsetChanged" accessType="outputOnly" type="SFVec3f"></field>
<IS><connect nodeField="traceEnabled" protoField="traceEnabled"></connect>
</IS>
<![CDATA[ecmascript:

function tracePrint (text)
{
	if (traceEnabled) Browser.print ('[HeadsUpDisplayPrototype VisibilityControlScript] ' + text);
}
function setIsVisible (value, timeStamp)
{
	isVisible = value;
	tracePrint('isVisible=' + value);
}
function setPlaneSensorIsActive (value, timeStamp)
{
	tracePrint('PlaneSensor isActive=' + value);

	if (value == false)
	{
		tracePrint('planeSensorTranslation=' + planeSensorTranslation);
		if (isVisible)
		{
			translationChanged = planeSensorTranslation;
		}
		else
		{
			// fell off screen, reset to center
			translationChanged = new SFVec3f(0, 0, 0);
			translationOffsetChanged  = new SFVec3f(0, 0, 0);
		}
	}
}
function setPlaneSensorTranslation (value, timeStamp)
{
	planeSensorTranslation = value;
	tracePrint('planeSensorTranslation=' + value);
}]]></Script>
<ROUTE fromField="isActive" fromNode="PlaneMovementSensor" toField="setPlaneSensorIsActive" toNode="VisibilityControlScript"></ROUTE>
<ROUTE fromField="translation_changed" fromNode="PlaneMovementSensor" toField="setPlaneSensorTranslation" toNode="VisibilityControlScript"></ROUTE>
<ROUTE fromField="isActive" fromNode="MovementVisibilitySensor" toField="setIsVisible" toNode="VisibilityControlScript"></ROUTE>
</Group>
</Transform>
</Transform>
<ROUTE fromField="translation_changed" fromNode="PlaneMovementSensor" toField="set_translation" toNode="MovableLocation"></ROUTE>
<ROUTE fromField="translationChanged" fromNode="VisibilityControlScript" toField="set_translation" toNode="MovableLocation"></ROUTE>
<ROUTE fromField="translationOffsetChanged" fromNode="VisibilityControlScript" toField="set_offset" toNode="PlaneMovementSensor"></ROUTE>
</Transform>
</Transform>
<ROUTE fromField="position_changed" fromNode="WhereSensor" toField="set_translation" toNode="FixedLocation"></ROUTE>
<ROUTE fromField="orientation_changed" fromNode="WhereSensor" toField="set_rotation" toNode="FixedLocation"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare12.name = "HeadsUpDisplay";
ProtoDeclare12.appinfo = "HeadsUpDisplay positions child geometry in screen space, movable by the user";
let ProtoInterface13 = browser.currentScene.createNode("ProtoInterface");
let field14 = browser.currentScene.createNode("field");
field14.name = "children";
field14.accessType = "inputOutput";
field14.appinfo = "Displayed subscene positioned as a HUD.";
field14.type = "MFNode";
//default is null array of nodes
ProtoInterface13.field = new MFNode();

ProtoInterface13.field[0] = field14;

let field15 = browser.currentScene.createNode("field");
field15.name = "dragChildren";
field15.accessType = "inputOutput";
field15.appinfo = "Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position.";
field15.type = "MFNode";
//default is null array of nodes
ProtoInterface13.field[1] = field15;

let field16 = browser.currentScene.createNode("field");
field16.name = "locationOffset";
field16.accessType = "initializeOnly";
field16.appinfo = "Modified screen location and distance (for size).";
field16.type = "SFVec3f";
field16.value = "-2 -2 0";
ProtoInterface13.field[2] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "traceEnabled";
field17.accessType = "initializeOnly";
field17.appinfo = "Enable/disable console output for troubleshooting.";
field17.type = "SFBool";
field17.value = "false";
ProtoInterface13.field[3] = field17;

ProtoDeclare12.protoInterface = ProtoInterface13;

let ProtoBody18 = browser.currentScene.createNode("ProtoBody");
let Group19 = browser.currentScene.createNode("Group");
let ProximitySensor20 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor20.DEF = "WhereSensor";
ProximitySensor20.size = new SFVec3f(new float[1000000000,1000000000,1000000000]);
let IS21 = browser.currentScene.createNode("IS");
let connect22 = browser.currentScene.createNode("connect");
connect22.nodeField = "center";
connect22.protoField = "locationOffset";
IS21.connect = new MFNode();

IS21.connect[0] = connect22;

ProximitySensor20.iS = IS21;

Group19.children = new MFNode();

Group19.children[0] = ProximitySensor20;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.DEF = "FixedLocation";
let Transform24 = browser.currentScene.createNode("Transform");
Transform24.DEF = "MovableLocation";
let Transform25 = browser.currentScene.createNode("Transform");
Transform25.DEF = "LocationOffset";
let IS26 = browser.currentScene.createNode("IS");
let connect27 = browser.currentScene.createNode("connect");
connect27.nodeField = "translation";
connect27.protoField = "locationOffset";
IS26.connect = new MFNode();

IS26.connect[0] = connect27;

Transform25.iS = IS26;

let Transform28 = browser.currentScene.createNode("Transform");
Transform28.translation = new SFVec3f(new float[0,0,-10]);
let Group29 = browser.currentScene.createNode("Group");
let IS30 = browser.currentScene.createNode("IS");
let connect31 = browser.currentScene.createNode("connect");
connect31.nodeField = "children";
connect31.protoField = "children";
IS30.connect = new MFNode();

IS30.connect[0] = connect31;

Group29.iS = IS30;

Transform28.children = new MFNode();

Transform28.children[0] = Group29;

let Group32 = browser.currentScene.createNode("Group");
Group32.DEF = "PlaneMovementSensorGroup";
let Group33 = browser.currentScene.createNode("Group");
Group33.DEF = "DragGeometry";
let IS34 = browser.currentScene.createNode("IS");
let connect35 = browser.currentScene.createNode("connect");
connect35.nodeField = "children";
connect35.protoField = "dragChildren";
IS34.connect = new MFNode();

IS34.connect[0] = connect35;

Group33.iS = IS34;

Group32.children = new MFNode();

Group32.children[0] = Group33;

let PlaneSensor36 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor36.DEF = "PlaneMovementSensor";
PlaneSensor36.description = "click and drag to move interface";
let IS37 = browser.currentScene.createNode("IS");
let connect38 = browser.currentScene.createNode("connect");
connect38.nodeField = "offset";
connect38.protoField = "locationOffset";
IS37.connect = new MFNode();

IS37.connect[0] = connect38;

PlaneSensor36.iS = IS37;

Group32.children[1] = PlaneSensor36;

let VisibilitySensor39 = browser.currentScene.createNode("VisibilitySensor");
VisibilitySensor39.DEF = "MovementVisibilitySensor";
Group32.children[2] = VisibilitySensor39;

let Script40 = browser.currentScene.createNode("Script");
Script40.DEF = "VisibilityControlScript";
let field41 = browser.currentScene.createNode("field");
field41.name = "traceEnabled";
field41.accessType = "initializeOnly";
field41.type = "SFBool";
Script40.field = new MFNode();

Script40.field[0] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "isVisible";
field42.accessType = "initializeOnly";
field42.type = "SFBool";
field42.value = "true";
Script40.field[1] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "planeSensorTranslation";
field43.accessType = "initializeOnly";
field43.type = "SFVec3f";
field43.value = "0 0 0";
Script40.field[2] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "setIsVisible";
field44.accessType = "inputOnly";
field44.type = "SFBool";
Script40.field[3] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "setPlaneSensorIsActive";
field45.accessType = "inputOnly";
field45.type = "SFBool";
Script40.field[4] = field45;

let field46 = browser.currentScene.createNode("field");
field46.name = "setPlaneSensorTranslation";
field46.accessType = "inputOnly";
field46.type = "SFVec3f";
Script40.field[5] = field46;

let field47 = browser.currentScene.createNode("field");
field47.name = "translationChanged";
field47.accessType = "outputOnly";
field47.type = "SFVec3f";
Script40.field[6] = field47;

let field48 = browser.currentScene.createNode("field");
field48.name = "translationOffsetChanged";
field48.accessType = "outputOnly";
field48.type = "SFVec3f";
Script40.field[7] = field48;

let IS49 = browser.currentScene.createNode("IS");
let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "traceEnabled";
connect50.protoField = "traceEnabled";
IS49.connect = new MFNode();

IS49.connect[0] = connect50;

Script40.iS = IS49;


Script40.setSourceCode(`ecmascript:\n"+
"\n"+
"function tracePrint (text)\n"+
"{\n"+
"	if (traceEnabled) Browser.print ('[HeadsUpDisplayPrototype VisibilityControlScript] ' + text);\n"+
"}\n"+
"function setIsVisible (value, timeStamp)\n"+
"{\n"+
"	isVisible = value;\n"+
"	tracePrint('isVisible=' + value);\n"+
"}\n"+
"function setPlaneSensorIsActive (value, timeStamp)\n"+
"{\n"+
"	tracePrint('PlaneSensor isActive=' + value);\n"+
"\n"+
"	if (value == false)\n"+
"	{\n"+
"		tracePrint('planeSensorTranslation=' + planeSensorTranslation);\n"+
"		if (isVisible)\n"+
"		{\n"+
"			translationChanged = planeSensorTranslation;\n"+
"		}\n"+
"		else\n"+
"		{\n"+
"			// fell off screen, reset to center\n"+
"			translationChanged = new SFVec3f(0, 0, 0);\n"+
"			translationOffsetChanged  = new SFVec3f(0, 0, 0);\n"+
"		}\n"+
"	}\n"+
"}\n"+
"function setPlaneSensorTranslation (value, timeStamp)\n"+
"{\n"+
"	planeSensorTranslation = value;\n"+
"	tracePrint('planeSensorTranslation=' + value);\n"+
"}`)
Group32.children[3] = Script40;

let ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromField = "isActive";
ROUTE51.fromNode = "PlaneMovementSensor";
ROUTE51.toField = "setPlaneSensorIsActive";
ROUTE51.toNode = "VisibilityControlScript";
Group32.children[4] = ROUTE51;

let ROUTE52 = browser.currentScene.createNode("ROUTE");
ROUTE52.fromField = "translation_changed";
ROUTE52.fromNode = "PlaneMovementSensor";
ROUTE52.toField = "setPlaneSensorTranslation";
ROUTE52.toNode = "VisibilityControlScript";
Group32.children[5] = ROUTE52;

let ROUTE53 = browser.currentScene.createNode("ROUTE");
ROUTE53.fromField = "isActive";
ROUTE53.fromNode = "MovementVisibilitySensor";
ROUTE53.toField = "setIsVisible";
ROUTE53.toNode = "VisibilityControlScript";
Group32.children[6] = ROUTE53;

Transform28.children[1] = Group32;

Transform25.children = new MFNode();

Transform25.children[0] = Transform28;

Transform24.children = new MFNode();

Transform24.children[0] = Transform25;

let ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromField = "translation_changed";
ROUTE54.fromNode = "PlaneMovementSensor";
ROUTE54.toField = "set_translation";
ROUTE54.toNode = "MovableLocation";
Transform24.children[1] = ROUTE54;

let ROUTE55 = browser.currentScene.createNode("ROUTE");
ROUTE55.fromField = "translationChanged";
ROUTE55.fromNode = "VisibilityControlScript";
ROUTE55.toField = "set_translation";
ROUTE55.toNode = "MovableLocation";
Transform24.children[2] = ROUTE55;

let ROUTE56 = browser.currentScene.createNode("ROUTE");
ROUTE56.fromField = "translationOffsetChanged";
ROUTE56.fromNode = "VisibilityControlScript";
ROUTE56.toField = "set_offset";
ROUTE56.toNode = "PlaneMovementSensor";
Transform24.children[3] = ROUTE56;

Transform23.children = new MFNode();

Transform23.children[0] = Transform24;

Group19.children[1] = Transform23;

let ROUTE57 = browser.currentScene.createNode("ROUTE");
ROUTE57.fromField = "position_changed";
ROUTE57.fromNode = "WhereSensor";
ROUTE57.toField = "set_translation";
ROUTE57.toNode = "FixedLocation";
Group19.children[2] = ROUTE57;

let ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromField = "orientation_changed";
ROUTE58.fromNode = "WhereSensor";
ROUTE58.toField = "set_rotation";
ROUTE58.toNode = "FixedLocation";
Group19.children[3] = ROUTE58;

ProtoBody18.children = new MFNode();

ProtoBody18.children[0] = Group19;

ProtoDeclare12.protoBody = ProtoBody18;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare12;

//====================
let Background59 = browser.currentScene.createNode("Background");
Background59.groundColor = new MFColor(new float[0.1,0.1,0.3]);
Background59.skyColor = new MFColor(new float[0.5,0.5,0.1]);
browser.currentScene.children[1] = Background59;

let Anchor60 = browser.currentScene.createNode("Anchor");
Anchor60.description = "HeadsUpDisplayExample";
Anchor60.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor60.url = new MFString(new java.lang.String["HeadsUpDisplayExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayrExample.x3d","HeadsUpDisplayExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayExample.wrl"]);
let Shape61 = browser.currentScene.createNode("Shape");
let Appearance62 = browser.currentScene.createNode("Appearance");
let Material63 = browser.currentScene.createNode("Material");
Material63.diffuseColor = new SFColor(new float[0,1,1]);
Material63.emissiveColor = new SFColor(new float[0,1,1]);
Appearance62.material = Material63;

Shape61.appearance = Appearance62;

let Text64 = browser.currentScene.createNode("Text");
Text64.string = new MFString(new java.lang.String["HeadsUpDisplayPrototype.x3d","is a Prototype definition file.","","To see an example scene using this node","click this text to view","HeadsUpDisplayExample.x3d"]);
let FontStyle65 = browser.currentScene.createNode("FontStyle");
FontStyle65.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle65.size = 0.8;
Text64.fontStyle = FontStyle65;

Shape61.geometry = Text64;

Anchor60.children = new MFNode();

Anchor60.children[0] = Shape61;

browser.currentScene.children[2] = Anchor60;


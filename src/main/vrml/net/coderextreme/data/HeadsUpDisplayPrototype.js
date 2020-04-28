let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let ProtoDeclare2 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare appinfo="HeadsUpDisplay positions child geometry in screen space, movable by the user" name="HeadsUpDisplay" ><ProtoInterface><field accessType="inputOutput" appinfo="Displayed subscene positioned as a HUD." name="children" type="MFNode"><!-- default is null array of nodes --></field>
<field accessType="inputOutput" appinfo="Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position." name="dragChildren" type="MFNode"><!-- default is null array of nodes --></field>
<field accessType="initializeOnly" appinfo="Modified screen location and distance (for size)." name="locationOffset" type="SFVec3f" value="-2 -2 0"></field>
<field accessType="initializeOnly" appinfo="Enable/disable console output for troubleshooting." name="traceEnabled" type="SFBool" value="false"></field>
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
<Script DEF="VisibilityControlScript"><field accessType="initializeOnly" name="traceEnabled" type="SFBool"></field>
<field accessType="initializeOnly" name="isVisible" type="SFBool" value="true"></field>
<field accessType="initializeOnly" name="planeSensorTranslation" type="SFVec3f" value="0 0 0"></field>
<field accessType="inputOnly" name="setIsVisible" type="SFBool"></field>
<field accessType="inputOnly" name="setPlaneSensorIsActive" type="SFBool"></field>
<field accessType="inputOnly" name="setPlaneSensorTranslation" type="SFVec3f"></field>
<field accessType="outputOnly" name="translationChanged" type="SFVec3f"></field>
<field accessType="outputOnly" name="translationOffsetChanged" type="SFVec3f"></field>
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
ProtoDeclare2.appinfo = "HeadsUpDisplay positions child geometry in screen space, movable by the user";
ProtoDeclare2.name = "HeadsUpDisplay";
let ProtoInterface3 = browser.currentScene.createNode("ProtoInterface");
let field4 = browser.currentScene.createNode("field");
field4.accessType = "inputOutput";
field4.appinfo = "Displayed subscene positioned as a HUD.";
field4.name = "children";
field4.type = "MFNode";
// default is null array of nodes 
ProtoInterface3.field = new MFNode();

ProtoInterface3.field[0] = field4;

let field5 = browser.currentScene.createNode("field");
field5.accessType = "inputOutput";
field5.appinfo = "Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position.";
field5.name = "dragChildren";
field5.type = "MFNode";
// default is null array of nodes 
ProtoInterface3.field[1] = field5;

let field6 = browser.currentScene.createNode("field");
field6.accessType = "initializeOnly";
field6.appinfo = "Modified screen location and distance (for size).";
field6.name = "locationOffset";
field6.type = "SFVec3f";
field6.value = "-2 -2 0";
ProtoInterface3.field[2] = field6;

let field7 = browser.currentScene.createNode("field");
field7.accessType = "initializeOnly";
field7.appinfo = "Enable/disable console output for troubleshooting.";
field7.name = "traceEnabled";
field7.type = "SFBool";
field7.value = "false";
ProtoInterface3.field[3] = field7;

ProtoDeclare2.protoInterface = ProtoInterface3;

let ProtoBody8 = browser.currentScene.createNode("ProtoBody");
let Group9 = browser.currentScene.createNode("Group");
let ProximitySensor10 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor10.DEF = "WhereSensor";
ProximitySensor10.size = new SFVec3f(new float[1000000000,1000000000,1000000000]);
let IS11 = browser.currentScene.createNode("IS");
let connect12 = browser.currentScene.createNode("connect");
connect12.nodeField = "center";
connect12.protoField = "locationOffset";
IS11.connect = new MFNode();

IS11.connect[0] = connect12;

ProximitySensor10.iS = IS11;

Group9.children = new MFNode();

Group9.children[0] = ProximitySensor10;

let Transform13 = browser.currentScene.createNode("Transform");
Transform13.DEF = "FixedLocation";
let Transform14 = browser.currentScene.createNode("Transform");
Transform14.DEF = "MovableLocation";
let Transform15 = browser.currentScene.createNode("Transform");
Transform15.DEF = "LocationOffset";
let IS16 = browser.currentScene.createNode("IS");
let connect17 = browser.currentScene.createNode("connect");
connect17.nodeField = "translation";
connect17.protoField = "locationOffset";
IS16.connect = new MFNode();

IS16.connect[0] = connect17;

Transform15.iS = IS16;

let Transform18 = browser.currentScene.createNode("Transform");
Transform18.translation = new SFVec3f(new float[0,0,-10]);
let Group19 = browser.currentScene.createNode("Group");
let IS20 = browser.currentScene.createNode("IS");
let connect21 = browser.currentScene.createNode("connect");
connect21.nodeField = "children";
connect21.protoField = "children";
IS20.connect = new MFNode();

IS20.connect[0] = connect21;

Group19.iS = IS20;

Transform18.children = new MFNode();

Transform18.children[0] = Group19;

let Group22 = browser.currentScene.createNode("Group");
Group22.DEF = "PlaneMovementSensorGroup";
let Group23 = browser.currentScene.createNode("Group");
Group23.DEF = "DragGeometry";
let IS24 = browser.currentScene.createNode("IS");
let connect25 = browser.currentScene.createNode("connect");
connect25.nodeField = "children";
connect25.protoField = "dragChildren";
IS24.connect = new MFNode();

IS24.connect[0] = connect25;

Group23.iS = IS24;

Group22.children = new MFNode();

Group22.children[0] = Group23;

let PlaneSensor26 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor26.DEF = "PlaneMovementSensor";
PlaneSensor26.description = "click and drag to move interface";
let IS27 = browser.currentScene.createNode("IS");
let connect28 = browser.currentScene.createNode("connect");
connect28.nodeField = "offset";
connect28.protoField = "locationOffset";
IS27.connect = new MFNode();

IS27.connect[0] = connect28;

PlaneSensor26.iS = IS27;

Group22.children[1] = PlaneSensor26;

let VisibilitySensor29 = browser.currentScene.createNode("VisibilitySensor");
VisibilitySensor29.DEF = "MovementVisibilitySensor";
Group22.children[2] = VisibilitySensor29;

let Script30 = browser.currentScene.createNode("Script");
Script30.DEF = "VisibilityControlScript";
let field31 = browser.currentScene.createNode("field");
field31.accessType = "initializeOnly";
field31.name = "traceEnabled";
field31.type = "SFBool";
Script30.field = new MFNode();

Script30.field[0] = field31;

let field32 = browser.currentScene.createNode("field");
field32.accessType = "initializeOnly";
field32.name = "isVisible";
field32.type = "SFBool";
field32.value = "true";
Script30.field[1] = field32;

let field33 = browser.currentScene.createNode("field");
field33.accessType = "initializeOnly";
field33.name = "planeSensorTranslation";
field33.type = "SFVec3f";
field33.value = "0 0 0";
Script30.field[2] = field33;

let field34 = browser.currentScene.createNode("field");
field34.accessType = "inputOnly";
field34.name = "setIsVisible";
field34.type = "SFBool";
Script30.field[3] = field34;

let field35 = browser.currentScene.createNode("field");
field35.accessType = "inputOnly";
field35.name = "setPlaneSensorIsActive";
field35.type = "SFBool";
Script30.field[4] = field35;

let field36 = browser.currentScene.createNode("field");
field36.accessType = "inputOnly";
field36.name = "setPlaneSensorTranslation";
field36.type = "SFVec3f";
Script30.field[5] = field36;

let field37 = browser.currentScene.createNode("field");
field37.accessType = "outputOnly";
field37.name = "translationChanged";
field37.type = "SFVec3f";
Script30.field[6] = field37;

let field38 = browser.currentScene.createNode("field");
field38.accessType = "outputOnly";
field38.name = "translationOffsetChanged";
field38.type = "SFVec3f";
Script30.field[7] = field38;

let IS39 = browser.currentScene.createNode("IS");
let connect40 = browser.currentScene.createNode("connect");
connect40.nodeField = "traceEnabled";
connect40.protoField = "traceEnabled";
IS39.connect = new MFNode();

IS39.connect[0] = connect40;

Script30.iS = IS39;


Script30.setSourceCode(`ecmascript:\n"+
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
Group22.children[3] = Script30;

let ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromField = "isActive";
ROUTE41.fromNode = "PlaneMovementSensor";
ROUTE41.toField = "setPlaneSensorIsActive";
ROUTE41.toNode = "VisibilityControlScript";
Group22.children[4] = ROUTE41;

let ROUTE42 = browser.currentScene.createNode("ROUTE");
ROUTE42.fromField = "translation_changed";
ROUTE42.fromNode = "PlaneMovementSensor";
ROUTE42.toField = "setPlaneSensorTranslation";
ROUTE42.toNode = "VisibilityControlScript";
Group22.children[5] = ROUTE42;

let ROUTE43 = browser.currentScene.createNode("ROUTE");
ROUTE43.fromField = "isActive";
ROUTE43.fromNode = "MovementVisibilitySensor";
ROUTE43.toField = "setIsVisible";
ROUTE43.toNode = "VisibilityControlScript";
Group22.children[6] = ROUTE43;

Transform18.children[1] = Group22;

Transform15.children = new MFNode();

Transform15.children[0] = Transform18;

Transform14.children = new MFNode();

Transform14.children[0] = Transform15;

let ROUTE44 = browser.currentScene.createNode("ROUTE");
ROUTE44.fromField = "translation_changed";
ROUTE44.fromNode = "PlaneMovementSensor";
ROUTE44.toField = "set_translation";
ROUTE44.toNode = "MovableLocation";
Transform14.children[1] = ROUTE44;

let ROUTE45 = browser.currentScene.createNode("ROUTE");
ROUTE45.fromField = "translationChanged";
ROUTE45.fromNode = "VisibilityControlScript";
ROUTE45.toField = "set_translation";
ROUTE45.toNode = "MovableLocation";
Transform14.children[2] = ROUTE45;

let ROUTE46 = browser.currentScene.createNode("ROUTE");
ROUTE46.fromField = "translationOffsetChanged";
ROUTE46.fromNode = "VisibilityControlScript";
ROUTE46.toField = "set_offset";
ROUTE46.toNode = "PlaneMovementSensor";
Transform14.children[3] = ROUTE46;

Transform13.children = new MFNode();

Transform13.children[0] = Transform14;

Group9.children[1] = Transform13;

let ROUTE47 = browser.currentScene.createNode("ROUTE");
ROUTE47.fromField = "position_changed";
ROUTE47.fromNode = "WhereSensor";
ROUTE47.toField = "set_translation";
ROUTE47.toNode = "FixedLocation";
Group9.children[2] = ROUTE47;

let ROUTE48 = browser.currentScene.createNode("ROUTE");
ROUTE48.fromField = "orientation_changed";
ROUTE48.fromNode = "WhereSensor";
ROUTE48.toField = "set_rotation";
ROUTE48.toNode = "FixedLocation";
Group9.children[3] = ROUTE48;

ProtoBody8.children = new MFNode();

ProtoBody8.children[0] = Group9;

ProtoDeclare2.protoBody = ProtoBody8;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare2;

// ==================== 
let Background49 = browser.currentScene.createNode("Background");
Background49.groundColor = new MFColor(new float[0.1,0.1,0.3]);
Background49.skyColor = new MFColor(new float[0.5,0.5,0.1]);
browser.currentScene.children[1] = Background49;

let Anchor50 = browser.currentScene.createNode("Anchor");
Anchor50.description = "HeadsUpDisplayExample";
Anchor50.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor50.url = new MFString(new java.lang.String["HeadsUpDisplayExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayrExample.x3d","HeadsUpDisplayExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayExample.wrl"]);
let Shape51 = browser.currentScene.createNode("Shape");
let Appearance52 = browser.currentScene.createNode("Appearance");
let Material53 = browser.currentScene.createNode("Material");
Material53.diffuseColor = new SFColor(new float[0,1,1]);
Material53.emissiveColor = new SFColor(new float[0,1,1]);
Appearance52.material = Material53;

Shape51.appearance = Appearance52;

let Text54 = browser.currentScene.createNode("Text");
Text54.string = new MFString(new java.lang.String["HeadsUpDisplayPrototype.x3d","is a Prototype definition file.","","To see an example scene using this node","click this text to view","HeadsUpDisplayExample.x3d"]);
let FontStyle55 = browser.currentScene.createNode("FontStyle");
FontStyle55.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle55.size = 0.8;
Text54.fontStyle = FontStyle55;

Shape51.geometry = Text54;

Anchor50.children = new MFNode();

Anchor50.children[0] = Shape51;

browser.currentScene.children[2] = Anchor50;


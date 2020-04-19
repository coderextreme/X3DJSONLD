var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
ProtoDeclare2 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare2.name = "HeadsUpDisplay";
ProtoDeclare2.appinfo = "HeadsUpDisplay positions child geometry in screen space, movable by the user";
ProtoInterface3 = browser.currentScene.createNode("ProtoInterface");
field4 = browser.currentScene.createNode("field");
field4.name = "children";
field4.accessType = "inputOutput";
field4.appinfo = "Displayed subscene positioned as a HUD.";
field4.type = "MFNode";
//default is null array of nodes
ProtoInterface3.field = [];

ProtoInterface3.field[0] = field4;

field5 = browser.currentScene.createNode("field");
field5.name = "dragChildren";
field5.accessType = "inputOutput";
field5.appinfo = "Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position.";
field5.type = "MFNode";
//default is null array of nodes
ProtoInterface3.field[1] = field5;

field6 = browser.currentScene.createNode("field");
field6.name = "locationOffset";
field6.accessType = "initializeOnly";
field6.appinfo = "Modified screen location and distance (for size).";
field6.type = "SFVec3f";
field6.value = "-2 -2 0";
ProtoInterface3.field[2] = field6;

field7 = browser.currentScene.createNode("field");
field7.name = "traceEnabled";
field7.accessType = "initializeOnly";
field7.appinfo = "Enable/disable console output for troubleshooting.";
field7.type = "SFBool";
field7.value = "false";
ProtoInterface3.field[3] = field7;

ProtoDeclare2.protoInterface = ProtoInterface3;

ProtoBody8 = browser.currentScene.createNode("ProtoBody");
Group9 = browser.currentScene.createNode("Group");
ProximitySensor10 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor10.DEF = "WhereSensor";
ProximitySensor10.size = [1000000000,1000000000,1000000000];
IS11 = browser.currentScene.createNode("IS");
connect12 = browser.currentScene.createNode("connect");
connect12.nodeField = "center";
connect12.protoField = "locationOffset";
IS11.connect = [];

IS11.connect[0] = connect12;

ProximitySensor10.iS = IS11;

Group9.children = [];

Group9.children[0] = ProximitySensor10;

Transform13 = browser.currentScene.createNode("Transform");
Transform13.DEF = "FixedLocation";
Transform14 = browser.currentScene.createNode("Transform");
Transform14.DEF = "MovableLocation";
Transform15 = browser.currentScene.createNode("Transform");
Transform15.DEF = "LocationOffset";
IS16 = browser.currentScene.createNode("IS");
connect17 = browser.currentScene.createNode("connect");
connect17.nodeField = "translation";
connect17.protoField = "locationOffset";
IS16.connect = [];

IS16.connect[0] = connect17;

Transform15.iS = IS16;

Transform18 = browser.currentScene.createNode("Transform");
Transform18.translation = [0,0,-10];
Group19 = browser.currentScene.createNode("Group");
IS20 = browser.currentScene.createNode("IS");
connect21 = browser.currentScene.createNode("connect");
connect21.nodeField = "children";
connect21.protoField = "children";
IS20.connect = [];

IS20.connect[0] = connect21;

Group19.iS = IS20;

Transform18.children = [];

Transform18.children[0] = Group19;

Group22 = browser.currentScene.createNode("Group");
Group22.DEF = "PlaneMovementSensorGroup";
Group23 = browser.currentScene.createNode("Group");
Group23.DEF = "DragGeometry";
IS24 = browser.currentScene.createNode("IS");
connect25 = browser.currentScene.createNode("connect");
connect25.nodeField = "children";
connect25.protoField = "dragChildren";
IS24.connect = [];

IS24.connect[0] = connect25;

Group23.iS = IS24;

Group22.children = [];

Group22.children[0] = Group23;

PlaneSensor26 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor26.DEF = "PlaneMovementSensor";
PlaneSensor26.description = "click and drag to move interface";
IS27 = browser.currentScene.createNode("IS");
connect28 = browser.currentScene.createNode("connect");
connect28.nodeField = "offset";
connect28.protoField = "locationOffset";
IS27.connect = [];

IS27.connect[0] = connect28;

PlaneSensor26.iS = IS27;

Group22.children[1] = PlaneSensor26;

VisibilitySensor29 = browser.currentScene.createNode("VisibilitySensor");
VisibilitySensor29.DEF = "MovementVisibilitySensor";
Group22.children[2] = VisibilitySensor29;

Script30 = browser.currentScene.createNode("Script");
Script30.DEF = "VisibilityControlScript";
field31 = browser.currentScene.createNode("field");
field31.name = "traceEnabled";
field31.accessType = "initializeOnly";
field31.type = "SFBool";
Script30.field = [];

Script30.field[0] = field31;

field32 = browser.currentScene.createNode("field");
field32.name = "isVisible";
field32.accessType = "initializeOnly";
field32.type = "SFBool";
field32.value = "true";
Script30.field[1] = field32;

field33 = browser.currentScene.createNode("field");
field33.name = "planeSensorTranslation";
field33.accessType = "initializeOnly";
field33.type = "SFVec3f";
field33.value = "0 0 0";
Script30.field[2] = field33;

field34 = browser.currentScene.createNode("field");
field34.name = "setIsVisible";
field34.accessType = "inputOnly";
field34.type = "SFBool";
Script30.field[3] = field34;

field35 = browser.currentScene.createNode("field");
field35.name = "setPlaneSensorIsActive";
field35.accessType = "inputOnly";
field35.type = "SFBool";
Script30.field[4] = field35;

field36 = browser.currentScene.createNode("field");
field36.name = "setPlaneSensorTranslation";
field36.accessType = "inputOnly";
field36.type = "SFVec3f";
Script30.field[5] = field36;

field37 = browser.currentScene.createNode("field");
field37.name = "translationChanged";
field37.accessType = "outputOnly";
field37.type = "SFVec3f";
Script30.field[6] = field37;

field38 = browser.currentScene.createNode("field");
field38.name = "translationOffsetChanged";
field38.accessType = "outputOnly";
field38.type = "SFVec3f";
Script30.field[7] = field38;

IS39 = browser.currentScene.createNode("IS");
connect40 = browser.currentScene.createNode("connect");
connect40.nodeField = "traceEnabled";
connect40.protoField = "traceEnabled";
IS39.connect = [];

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

ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromField = "isActive";
ROUTE41.fromNode = "PlaneMovementSensor";
ROUTE41.toField = "setPlaneSensorIsActive";
ROUTE41.toNode = "VisibilityControlScript";
Group22.children[4] = ROUTE41;

ROUTE42 = browser.currentScene.createNode("ROUTE");
ROUTE42.fromField = "translation_changed";
ROUTE42.fromNode = "PlaneMovementSensor";
ROUTE42.toField = "setPlaneSensorTranslation";
ROUTE42.toNode = "VisibilityControlScript";
Group22.children[5] = ROUTE42;

ROUTE43 = browser.currentScene.createNode("ROUTE");
ROUTE43.fromField = "isActive";
ROUTE43.fromNode = "MovementVisibilitySensor";
ROUTE43.toField = "setIsVisible";
ROUTE43.toNode = "VisibilityControlScript";
Group22.children[6] = ROUTE43;

Transform18.children[1] = Group22;

Transform15.children = [];

Transform15.children[0] = Transform18;

Transform14.children = [];

Transform14.children[0] = Transform15;

ROUTE44 = browser.currentScene.createNode("ROUTE");
ROUTE44.fromField = "translation_changed";
ROUTE44.fromNode = "PlaneMovementSensor";
ROUTE44.toField = "set_translation";
ROUTE44.toNode = "MovableLocation";
Transform14.children[1] = ROUTE44;

ROUTE45 = browser.currentScene.createNode("ROUTE");
ROUTE45.fromField = "translationChanged";
ROUTE45.fromNode = "VisibilityControlScript";
ROUTE45.toField = "set_translation";
ROUTE45.toNode = "MovableLocation";
Transform14.children[2] = ROUTE45;

ROUTE46 = browser.currentScene.createNode("ROUTE");
ROUTE46.fromField = "translationOffsetChanged";
ROUTE46.fromNode = "VisibilityControlScript";
ROUTE46.toField = "set_offset";
ROUTE46.toNode = "PlaneMovementSensor";
Transform14.children[3] = ROUTE46;

Transform13.children = [];

Transform13.children[0] = Transform14;

Group9.children[1] = Transform13;

ROUTE47 = browser.currentScene.createNode("ROUTE");
ROUTE47.fromField = "position_changed";
ROUTE47.fromNode = "WhereSensor";
ROUTE47.toField = "set_translation";
ROUTE47.toNode = "FixedLocation";
Group9.children[2] = ROUTE47;

ROUTE48 = browser.currentScene.createNode("ROUTE");
ROUTE48.fromField = "orientation_changed";
ROUTE48.fromNode = "WhereSensor";
ROUTE48.toField = "set_rotation";
ROUTE48.toNode = "FixedLocation";
Group9.children[3] = ROUTE48;

ProtoBody8.children = [];

ProtoBody8.children[0] = Group9;

ProtoDeclare2.protoBody = ProtoBody8;

browser.currentScene.children = [];

browser.currentScene.children[0] = ProtoDeclare2;

//====================
Background49 = browser.currentScene.createNode("Background");
Background49.groundColor = [0.1,0.1,0.3];
Background49.skyColor = [0.5,0.5,0.1];
browser.currentScene.children[1] = Background49;

Anchor50 = browser.currentScene.createNode("Anchor");
Anchor50.description = "HeadsUpDisplayExample";
Anchor50.parameter = ["target=_blank"];
Anchor50.url = ["HeadsUpDisplayExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayrExample.x3d","HeadsUpDisplayExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayExample.wrl"];
Shape51 = browser.currentScene.createNode("Shape");
Appearance52 = browser.currentScene.createNode("Appearance");
Material53 = browser.currentScene.createNode("Material");
Material53.diffuseColor = [0,1,1];
Material53.emissiveColor = [0,1,1];
Appearance52.material = Material53;

Shape51.appearance = Appearance52;

Text54 = browser.currentScene.createNode("Text");
Text54.string = ["HeadsUpDisplayPrototype.x3d","is a Prototype definition file.","","To see an example scene using this node","click this text to view","HeadsUpDisplayExample.x3d"];
FontStyle55 = browser.currentScene.createNode("FontStyle");
FontStyle55.justify = ["MIDDLE","MIDDLE"];
FontStyle55.size = 0.8;
Text54.fontStyle = FontStyle55;

Shape51.geometry = Text54;

Anchor50.children = [];

Anchor50.children[0] = Shape51;

browser.currentScene.children[2] = Anchor50;


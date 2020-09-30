let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let ProtoDeclare2 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="HeadsUpDisplay" appinfo="HeadsUpDisplay positions child geometry in screen space, movable by the user" ><ProtoInterface><field name="children" accessType="inputOutput" appinfo="Displayed subscene positioned as a HUD." type="MFNode"><!--default is null array of nodes--></field>
<field name="dragChildren" accessType="inputOutput" appinfo="Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position." type="MFNode"><!--default is null array of nodes--></field>
<field name="locationOffset" accessType="initializeOnly" appinfo="Modified screen location and distance (for size)." type="SFVec3f" value="-2 -2 0"></field>
<field name="traceEnabled" accessType="initializeOnly" appinfo="Enable/disable console output for troubleshooting." type="SFBool" value="false"></field>
</ProtoInterface>
<ProtoBody><Group bboxCenter="0 0 0" bboxSize="-1 -1 -1"><ProximitySensor DEF="WhereSensor" size="1000000000 1000000000 1000000000"><IS><connect nodeField="center" protoField="locationOffset"></connect>
</IS>
</ProximitySensor>
<Transform DEF="FixedLocation" bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Transform DEF="MovableLocation" bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Transform DEF="LocationOffset" bboxCenter="0 0 0" bboxSize="-1 -1 -1"><IS><connect nodeField="translation" protoField="locationOffset"></connect>
</IS>
<Transform translation="0 0 -10" bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Group bboxCenter="0 0 0" bboxSize="-1 -1 -1"><IS><connect nodeField="children" protoField="children"></connect>
</IS>
</Group>
<Group DEF="PlaneMovementSensorGroup" bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Group DEF="DragGeometry" bboxCenter="0 0 0" bboxSize="-1 -1 -1"><IS><connect nodeField="children" protoField="dragChildren"></connect>
</IS>
</Group>
<PlaneSensor DEF="PlaneMovementSensor" description="click and drag to move interface"><IS><connect nodeField="offset" protoField="locationOffset"></connect>
</IS>
</PlaneSensor>
<VisibilitySensor DEF="MovementVisibilitySensor"></VisibilitySensor>
<ROUTE fromField="isActive" fromNode="PlaneMovementSensor" toField="setPlaneSensorIsActive" toNode="VisibilityControlScript"></ROUTE>
<ROUTE fromField="translation_changed" fromNode="PlaneMovementSensor" toField="setPlaneSensorTranslation" toNode="VisibilityControlScript"></ROUTE>
<ROUTE fromField="isActive" fromNode="MovementVisibilitySensor" toField="setIsVisible" toNode="VisibilityControlScript"></ROUTE>
<X3DScript DEF="VisibilityControlScript"><field name="traceEnabled" accessType="initializeOnly" type="SFBool"></field>
<field name="isVisible" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="planeSensorTranslation" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="setIsVisible" accessType="inputOnly" type="SFBool"></field>
<field name="setPlaneSensorIsActive" accessType="inputOnly" type="SFBool"></field>
<field name="setPlaneSensorTranslation" accessType="inputOnly" type="SFVec3f"></field>
<field name="translationChanged" accessType="outputOnly" type="SFVec3f"></field>
<field name="translationOffsetChanged" accessType="outputOnly" type="SFVec3f"></field>
<IS><connect nodeField="traceEnabled" protoField="traceEnabled"></connect>
</IS>
</X3DScript>
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
ProtoDeclare2.name = "HeadsUpDisplay";
ProtoDeclare2.appinfo = "HeadsUpDisplay positions child geometry in screen space, movable by the user";
let ProtoInterface3 = browser.currentScene.createNode("ProtoInterface");
let field4 = browser.currentScene.createNode("field");
field4.name = "children";
field4.accessType = "inputOutput";
field4.appinfo = "Displayed subscene positioned as a HUD.";
field4.type = "MFNode";
//default is null array of nodes
ProtoInterface3.field = new MFNode();

ProtoInterface3.field[0] = field4;

let field5 = browser.currentScene.createNode("field");
field5.name = "dragChildren";
field5.accessType = "inputOutput";
field5.appinfo = "Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position.";
field5.type = "MFNode";
//default is null array of nodes
ProtoInterface3.field[1] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "locationOffset";
field6.accessType = "initializeOnly";
field6.appinfo = "Modified screen location and distance (for size).";
field6.type = "SFVec3f";
field6.value = "-2 -2 0";
ProtoInterface3.field[2] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "traceEnabled";
field7.accessType = "initializeOnly";
field7.appinfo = "Enable/disable console output for troubleshooting.";
field7.type = "SFBool";
field7.value = "false";
ProtoInterface3.field[3] = field7;

ProtoDeclare2.protoInterface = ProtoInterface3;

let ProtoBody8 = browser.currentScene.createNode("ProtoBody");
let Group9 = browser.currentScene.createNode("Group");
Group9.bboxCenter = new SFVec3f(new float[0,0,0]);
Group9.bboxSize = new SFVec3f(new float[-1,-1,-1]);
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
Transform13.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform13.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform14 = browser.currentScene.createNode("Transform");
Transform14.DEF = "MovableLocation";
Transform14.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform14.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform15 = browser.currentScene.createNode("Transform");
Transform15.DEF = "LocationOffset";
Transform15.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform15.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let IS16 = browser.currentScene.createNode("IS");
let connect17 = browser.currentScene.createNode("connect");
connect17.nodeField = "translation";
connect17.protoField = "locationOffset";
IS16.connect = new MFNode();

IS16.connect[0] = connect17;

Transform15.iS = IS16;

let Transform18 = browser.currentScene.createNode("Transform");
Transform18.translation = new SFVec3f(new float[0,0,-10]);
Transform18.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform18.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Group19 = browser.currentScene.createNode("Group");
Group19.bboxCenter = new SFVec3f(new float[0,0,0]);
Group19.bboxSize = new SFVec3f(new float[-1,-1,-1]);
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
Group22.bboxCenter = new SFVec3f(new float[0,0,0]);
Group22.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Group23 = browser.currentScene.createNode("Group");
Group23.DEF = "DragGeometry";
Group23.bboxCenter = new SFVec3f(new float[0,0,0]);
Group23.bboxSize = new SFVec3f(new float[-1,-1,-1]);
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

let ROUTE30 = browser.currentScene.createNode("ROUTE");
ROUTE30.fromField = "isActive";
ROUTE30.fromNode = "PlaneMovementSensor";
ROUTE30.toField = "setPlaneSensorIsActive";
ROUTE30.toNode = "VisibilityControlScript";
Group22.children[3] = ROUTE30;

let ROUTE31 = browser.currentScene.createNode("ROUTE");
ROUTE31.fromField = "translation_changed";
ROUTE31.fromNode = "PlaneMovementSensor";
ROUTE31.toField = "setPlaneSensorTranslation";
ROUTE31.toNode = "VisibilityControlScript";
Group22.children[4] = ROUTE31;

let ROUTE32 = browser.currentScene.createNode("ROUTE");
ROUTE32.fromField = "isActive";
ROUTE32.fromNode = "MovementVisibilitySensor";
ROUTE32.toField = "setIsVisible";
ROUTE32.toNode = "VisibilityControlScript";
Group22.children[5] = ROUTE32;

let X3DScript33 = browser.currentScene.createNode("X3DScript");
X3DScript33.DEF = "VisibilityControlScript";
let field34 = browser.currentScene.createNode("field");
field34.name = "traceEnabled";
field34.accessType = "initializeOnly";
field34.type = "SFBool";
X3DScript33.field = new MFNode();

X3DScript33.field[0] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "isVisible";
field35.accessType = "initializeOnly";
field35.type = "SFBool";
field35.value = "true";
X3DScript33.field[1] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "planeSensorTranslation";
field36.accessType = "initializeOnly";
field36.type = "SFVec3f";
field36.value = "0 0 0";
X3DScript33.field[2] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "setIsVisible";
field37.accessType = "inputOnly";
field37.type = "SFBool";
X3DScript33.field[3] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "setPlaneSensorIsActive";
field38.accessType = "inputOnly";
field38.type = "SFBool";
X3DScript33.field[4] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "setPlaneSensorTranslation";
field39.accessType = "inputOnly";
field39.type = "SFVec3f";
X3DScript33.field[5] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "translationChanged";
field40.accessType = "outputOnly";
field40.type = "SFVec3f";
X3DScript33.field[6] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "translationOffsetChanged";
field41.accessType = "outputOnly";
field41.type = "SFVec3f";
X3DScript33.field[7] = field41;

let IS42 = browser.currentScene.createNode("IS");
let connect43 = browser.currentScene.createNode("connect");
connect43.nodeField = "traceEnabled";
connect43.protoField = "traceEnabled";
IS42.connect = new MFNode();

IS42.connect[0] = connect43;

X3DScript33.iS = IS42;

Group22.x3DScript[6] = X3DScript33;

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

//====================
let Background49 = browser.currentScene.createNode("Background");
Background49.groundColor = new MFColor(new float[0.1,0.1,0.3]);
Background49.skyColor = new MFColor(new float[0.5,0.5,0.1]);
browser.currentScene.children[1] = Background49;

let Anchor50 = browser.currentScene.createNode("Anchor");
Anchor50.description = "HeadsUpDisplayExample";
Anchor50.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor50.url = new MFString(new java.lang.String["HeadsUpDisplayExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayrExample.x3d","HeadsUpDisplayExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayExample.wrl"]);
Anchor50.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor50.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape51 = browser.currentScene.createNode("Shape");
Shape51.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape51.bboxSize = new SFVec3f(new float[-1,-1,-1]);
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


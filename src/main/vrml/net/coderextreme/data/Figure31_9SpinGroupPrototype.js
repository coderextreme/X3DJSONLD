let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "Figure31_9SpinGroupPrototype.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ProtoDeclare3 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="SpinGroup" ><ProtoInterface><field name="children" accessType="inputOutput" type="MFNode"><!--NULL node initialization--></field>
<field name="cycleInterval" accessType="inputOutput" type="SFTime" value="1"></field>
<field name="loop" accessType="inputOutput" type="SFBool" value="false"></field>
<field name="startTime" accessType="inputOutput" type="SFTime" value="0"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime" value="0"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="SpinGroupTransform"><IS><connect nodeField="children" protoField="children"></connect>
</IS>
</Transform>
<!--following nodes will not be rendered, only the first node of a ProtoBody is drawn--><TimeSensor DEF="SpinGroupClock"><IS><connect nodeField="cycleInterval" protoField="cycleInterval"></connect>
<connect nodeField="loop" protoField="loop"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
</IS>
</TimeSensor>
<OrientationInterpolator DEF="Spinner" key="0 0.5 1" keyValue="0 1 0 0 0 1 0 3.14 0 1 0 6.28"></OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="SpinGroupClock" toField="set_fraction" toNode="Spinner"></ROUTE>
<ROUTE fromField="value_changed" fromNode="Spinner" toField="set_rotation" toNode="SpinGroupTransform"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare3.name = "SpinGroup";
let ProtoInterface4 = browser.currentScene.createNode("ProtoInterface");
let field5 = browser.currentScene.createNode("field");
field5.name = "children";
field5.accessType = "inputOutput";
field5.type = "MFNode";
//NULL node initialization
ProtoInterface4.field = new MFNode();

ProtoInterface4.field[0] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "cycleInterval";
field6.accessType = "inputOutput";
field6.type = "SFTime";
field6.value = "1";
ProtoInterface4.field[1] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "loop";
field7.accessType = "inputOutput";
field7.type = "SFBool";
field7.value = "false";
ProtoInterface4.field[2] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "startTime";
field8.accessType = "inputOutput";
field8.type = "SFTime";
field8.value = "0";
ProtoInterface4.field[3] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "stopTime";
field9.accessType = "inputOutput";
field9.type = "SFTime";
field9.value = "0";
ProtoInterface4.field[4] = field9;

ProtoDeclare3.protoInterface = ProtoInterface4;

let ProtoBody10 = browser.currentScene.createNode("ProtoBody");
let Transform11 = browser.currentScene.createNode("Transform");
Transform11.DEF = "SpinGroupTransform";
let IS12 = browser.currentScene.createNode("IS");
let connect13 = browser.currentScene.createNode("connect");
connect13.nodeField = "children";
connect13.protoField = "children";
IS12.connect = new MFNode();

IS12.connect[0] = connect13;

Transform11.iS = IS12;

ProtoBody10.children = new MFNode();

ProtoBody10.children[0] = Transform11;

//following nodes will not be rendered, only the first node of a ProtoBody is drawn
let TimeSensor14 = browser.currentScene.createNode("TimeSensor");
TimeSensor14.DEF = "SpinGroupClock";
let IS15 = browser.currentScene.createNode("IS");
let connect16 = browser.currentScene.createNode("connect");
connect16.nodeField = "cycleInterval";
connect16.protoField = "cycleInterval";
IS15.connect = new MFNode();

IS15.connect[0] = connect16;

let connect17 = browser.currentScene.createNode("connect");
connect17.nodeField = "loop";
connect17.protoField = "loop";
IS15.connect[1] = connect17;

let connect18 = browser.currentScene.createNode("connect");
connect18.nodeField = "startTime";
connect18.protoField = "startTime";
IS15.connect[2] = connect18;

let connect19 = browser.currentScene.createNode("connect");
connect19.nodeField = "stopTime";
connect19.protoField = "stopTime";
IS15.connect[3] = connect19;

TimeSensor14.iS = IS15;

ProtoBody10.children[1] = TimeSensor14;

let OrientationInterpolator20 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator20.DEF = "Spinner";
OrientationInterpolator20.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator20.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,3.14,0,1,0,6.28]);
ProtoBody10.children[2] = OrientationInterpolator20;

let ROUTE21 = browser.currentScene.createNode("ROUTE");
ROUTE21.fromField = "fraction_changed";
ROUTE21.fromNode = "SpinGroupClock";
ROUTE21.toField = "set_fraction";
ROUTE21.toNode = "Spinner";
ProtoBody10.children[3] = ROUTE21;

let ROUTE22 = browser.currentScene.createNode("ROUTE");
ROUTE22.fromField = "value_changed";
ROUTE22.fromNode = "Spinner";
ROUTE22.toField = "set_rotation";
ROUTE22.toNode = "SpinGroupTransform";
ProtoBody10.children[4] = ROUTE22;

ProtoDeclare3.protoBody = ProtoBody10;

browser.currentScene.children[1] = ProtoDeclare3;

//Now the scene proper begins. Nothing renders in a ProtoDeclare (or ExternProtoDeclare).
let Viewpoint23 = browser.currentScene.createNode("Viewpoint");
Viewpoint23.description = "Click on blue crossbar to activate second SpinGroup";
Viewpoint23.orientation = new SFRotation(new float[1,0,0,-0.52]);
Viewpoint23.position = new SFVec3f(new float[0,18,30]);
browser.currentScene.children[2] = Viewpoint23;

//Create an instance, meaning actual nodes that render
let ProtoInstance24 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance24.name = "SpinGroup";
let fieldValue25 = browser.currentScene.createNode("fieldValue");
fieldValue25.name = "cycleInterval";
fieldValue25.value = "8";
ProtoInstance24.fieldValue = new MFNode();

ProtoInstance24.fieldValue[0] = fieldValue25;

let fieldValue26 = browser.currentScene.createNode("fieldValue");
fieldValue26.name = "loop";
fieldValue26.value = "true";
ProtoInstance24.fieldValue[1] = fieldValue26;

let fieldValue27 = browser.currentScene.createNode("fieldValue");
fieldValue27.name = "children";
let Shape28 = browser.currentScene.createNode("Shape");
let Box29 = browser.currentScene.createNode("Box");
Box29.size = new SFVec3f(new float[25,2,2]);
Shape28.geometry = Box29;

let Appearance30 = browser.currentScene.createNode("Appearance");
Appearance30.DEF = "Green";
let Material31 = browser.currentScene.createNode("Material");
Material31.diffuseColor = new SFColor(new float[0,1,0.3]);
Appearance30.material = Material31;

Shape28.appearance = Appearance30;

fieldValue27.children = new MFNode();

fieldValue27.children[0] = Shape28;

let Shape32 = browser.currentScene.createNode("Shape");
let Box33 = browser.currentScene.createNode("Box");
Box33.size = new SFVec3f(new float[2,25,2]);
Shape32.geometry = Box33;

let Appearance34 = browser.currentScene.createNode("Appearance");
Appearance34.USE = "Green";
Shape32.appearance = Appearance34;

fieldValue27.children[1] = Shape32;

let ProtoInstance35 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance35.name = "SpinGroup";
ProtoInstance35.DEF = "SecondSpinGroup";
let fieldValue36 = browser.currentScene.createNode("fieldValue");
fieldValue36.name = "cycleInterval";
fieldValue36.value = "4";
ProtoInstance35.fieldValue = new MFNode();

ProtoInstance35.fieldValue[0] = fieldValue36;

let fieldValue37 = browser.currentScene.createNode("fieldValue");
fieldValue37.name = "loop";
fieldValue37.value = "true";
ProtoInstance35.fieldValue[1] = fieldValue37;

let fieldValue38 = browser.currentScene.createNode("fieldValue");
fieldValue38.name = "stopTime";
fieldValue38.value = "1";
ProtoInstance35.fieldValue[2] = fieldValue38;

let fieldValue39 = browser.currentScene.createNode("fieldValue");
fieldValue39.name = "children";
let TouchSensor40 = browser.currentScene.createNode("TouchSensor");
TouchSensor40.DEF = "ActivateSecondSpinGroup";
TouchSensor40.description = "Activate second SpinGroup by clicking blue bar";
fieldValue39.children = new MFNode();

fieldValue39.children[0] = TouchSensor40;

let Shape41 = browser.currentScene.createNode("Shape");
let Box42 = browser.currentScene.createNode("Box");
Box42.size = new SFVec3f(new float[2,2.05,25]);
Shape41.geometry = Box42;

let Appearance43 = browser.currentScene.createNode("Appearance");
let Material44 = browser.currentScene.createNode("Material");
Material44.diffuseColor = new SFColor(new float[0,0.3,1]);
Appearance43.material = Material44;

Shape41.appearance = Appearance43;

fieldValue39.children[1] = Shape41;

ProtoInstance35.fieldValue[3] = fieldValue39;

//stopTime > startTime ensures that initial state is stopped
fieldValue27.children[2] = ProtoInstance35;

ProtoInstance24.fieldValue[2] = fieldValue27;

browser.currentScene.children[3] = ProtoInstance24;

let ROUTE45 = browser.currentScene.createNode("ROUTE");
ROUTE45.fromField = "touchTime";
ROUTE45.fromNode = "ActivateSecondSpinGroup";
ROUTE45.toField = "startTime";
ROUTE45.toNode = "SecondSpinGroup";
browser.currentScene.children[4] = ROUTE45;


let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo2.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.position = new SFVec3f(new float[0,0,4]);
Viewpoint3.orientation = new SFRotation(new float[1,0,0,0]);
Viewpoint3.description = "Bubble in action";
browser.currentScene.children[1] = Viewpoint3;

let ProtoDeclare4 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Bubble" ><ProtoBody><Transform DEF="transform" bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Shape bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Sphere containerField="geometry" radius="0.25"></Sphere>
<Appearance><Material diffuseColor="1 0 0" transparency="0.2"></Material>
</Appearance>
</Shape>
<TimeSensor DEF="bubbleClock" cycleInterval="10" loop="true"></TimeSensor>
<ROUTE fromNode="bounce" fromField="translation_changed" toNode="transform" toField="set_translation"></ROUTE>
<ROUTE fromNode="bounce" fromField="scale_changed" toNode="transform" toField="set_scale"></ROUTE>
<ROUTE fromNode="bubbleClock" fromField="fraction_changed" toNode="bounce" toField="set_fraction"></ROUTE>
<X3DScript DEF="bounce"><field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="velocity" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="scalvel" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
</X3DScript>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare4.name = "Bubble";
let ProtoBody5 = browser.currentScene.createNode("ProtoBody");
let Transform6 = browser.currentScene.createNode("Transform");
Transform6.DEF = "transform";
Transform6.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform6.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape7 = browser.currentScene.createNode("Shape");
Shape7.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape7.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Sphere8 = browser.currentScene.createNode("Sphere");
Sphere8.radius = 0.25;
Shape7.geometry = Sphere8;

let Appearance9 = browser.currentScene.createNode("Appearance");
let Material10 = browser.currentScene.createNode("Material");
Material10.diffuseColor = new SFColor(new float[1,0,0]);
Material10.transparency = 0.2;
Appearance9.material = Material10;

Shape7.appearance = Appearance9;

Transform6.children = new MFNode();

Transform6.children[0] = Shape7;

let TimeSensor11 = browser.currentScene.createNode("TimeSensor");
TimeSensor11.DEF = "bubbleClock";
TimeSensor11.cycleInterval = 10;
TimeSensor11.loop = True;
Transform6.children[1] = TimeSensor11;

let ROUTE12 = browser.currentScene.createNode("ROUTE");
ROUTE12.fromNode = "bounce";
ROUTE12.fromField = "translation_changed";
ROUTE12.toNode = "transform";
ROUTE12.toField = "set_translation";
Transform6.children[2] = ROUTE12;

let ROUTE13 = browser.currentScene.createNode("ROUTE");
ROUTE13.fromNode = "bounce";
ROUTE13.fromField = "scale_changed";
ROUTE13.toNode = "transform";
ROUTE13.toField = "set_scale";
Transform6.children[3] = ROUTE13;

let ROUTE14 = browser.currentScene.createNode("ROUTE");
ROUTE14.fromNode = "bubbleClock";
ROUTE14.fromField = "fraction_changed";
ROUTE14.toNode = "bounce";
ROUTE14.toField = "set_fraction";
Transform6.children[4] = ROUTE14;

let X3DScript15 = browser.currentScene.createNode("X3DScript");
X3DScript15.DEF = "bounce";
let field16 = browser.currentScene.createNode("field");
field16.name = "scale";
field16.accessType = "inputOutput";
field16.type = "SFVec3f";
field16.value = "1 1 1";
X3DScript15.field = new MFNode();

X3DScript15.field[0] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "translation";
field17.accessType = "inputOutput";
field17.type = "SFVec3f";
field17.value = "0 0 0";
X3DScript15.field[1] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "velocity";
field18.accessType = "inputOutput";
field18.type = "SFVec3f";
field18.value = "0 0 0";
X3DScript15.field[2] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "scalvel";
field19.accessType = "inputOutput";
field19.type = "SFVec3f";
field19.value = "0 0 0";
X3DScript15.field[3] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "set_fraction";
field20.accessType = "inputOnly";
field20.type = "SFFloat";
X3DScript15.field[4] = field20;

Transform6.x3DScript[5] = X3DScript15;

ProtoBody5.children = new MFNode();

ProtoBody5.children[0] = Transform6;

ProtoDeclare4.protoBody = ProtoBody5;

browser.currentScene.children[2] = ProtoDeclare4;

let ProtoInstance21 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance21.name = "Bubble";
ProtoInstance21.DEF = "bubbleA";
browser.currentScene.children[3] = ProtoInstance21;


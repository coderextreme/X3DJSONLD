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
Viewpoint3.description = "Bubbles in action";
browser.currentScene.children[1] = Viewpoint3;

let Background4 = browser.currentScene.createNode("Background");
Background4.backUrl = new MFString(new java.lang.String["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"]);
Background4.bottomUrl = new MFString(new java.lang.String["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"]);
Background4.frontUrl = new MFString(new java.lang.String["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"]);
Background4.leftUrl = new MFString(new java.lang.String["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"]);
Background4.rightUrl = new MFString(new java.lang.String["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"]);
Background4.topUrl = new MFString(new java.lang.String["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"]);
Background4.skyColor = new MFColor(new float[0,0,0]);
Background4.transparency = 0;
browser.currentScene.children[2] = Background4;

let ProtoDeclare5 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Bubble" ><ProtoBody><Transform DEF="body_trans" bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Shape bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Sphere containerField="geometry" radius="0.25"></Sphere>
<Appearance><Material diffuseColor="1 0 0" transparency="0.2"></Material>
</Appearance>
</Shape>
<TimeSensor DEF="bubbleClock" cycleInterval="10" loop="true"></TimeSensor>
<ROUTE fromNode="bounce" fromField="translation_changed" toNode="body_trans" toField="set_translation"></ROUTE>
<ROUTE fromNode="bounce" fromField="scale_changed" toNode="body_trans" toField="set_scale"></ROUTE>
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
ProtoDeclare5.name = "Bubble";
let ProtoBody6 = browser.currentScene.createNode("ProtoBody");
let Transform7 = browser.currentScene.createNode("Transform");
Transform7.DEF = "body_trans";
Transform7.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform7.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape8 = browser.currentScene.createNode("Shape");
Shape8.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape8.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Sphere9 = browser.currentScene.createNode("Sphere");
Sphere9.radius = 0.25;
Shape8.geometry = Sphere9;

let Appearance10 = browser.currentScene.createNode("Appearance");
let Material11 = browser.currentScene.createNode("Material");
Material11.diffuseColor = new SFColor(new float[1,0,0]);
Material11.transparency = 0.2;
Appearance10.material = Material11;

Shape8.appearance = Appearance10;

Transform7.children = new MFNode();

Transform7.children[0] = Shape8;

let TimeSensor12 = browser.currentScene.createNode("TimeSensor");
TimeSensor12.DEF = "bubbleClock";
TimeSensor12.cycleInterval = 10;
TimeSensor12.loop = True;
Transform7.children[1] = TimeSensor12;

let ROUTE13 = browser.currentScene.createNode("ROUTE");
ROUTE13.fromNode = "bounce";
ROUTE13.fromField = "translation_changed";
ROUTE13.toNode = "body_trans";
ROUTE13.toField = "set_translation";
Transform7.children[2] = ROUTE13;

let ROUTE14 = browser.currentScene.createNode("ROUTE");
ROUTE14.fromNode = "bounce";
ROUTE14.fromField = "scale_changed";
ROUTE14.toNode = "body_trans";
ROUTE14.toField = "set_scale";
Transform7.children[3] = ROUTE14;

let ROUTE15 = browser.currentScene.createNode("ROUTE");
ROUTE15.fromNode = "bubbleClock";
ROUTE15.fromField = "fraction_changed";
ROUTE15.toNode = "bounce";
ROUTE15.toField = "set_fraction";
Transform7.children[4] = ROUTE15;

let X3DScript16 = browser.currentScene.createNode("X3DScript");
X3DScript16.DEF = "bounce";
let field17 = browser.currentScene.createNode("field");
field17.name = "scale";
field17.accessType = "inputOutput";
field17.type = "SFVec3f";
field17.value = "1 1 1";
X3DScript16.field = new MFNode();

X3DScript16.field[0] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "translation";
field18.accessType = "inputOutput";
field18.type = "SFVec3f";
field18.value = "0 0 0";
X3DScript16.field[1] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "velocity";
field19.accessType = "inputOutput";
field19.type = "SFVec3f";
field19.value = "0 0 0";
X3DScript16.field[2] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "scalvel";
field20.accessType = "inputOutput";
field20.type = "SFVec3f";
field20.value = "0 0 0";
X3DScript16.field[3] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "set_fraction";
field21.accessType = "inputOnly";
field21.type = "SFFloat";
X3DScript16.field[4] = field21;

Transform7.x3DScript[5] = X3DScript16;

ProtoBody6.children = new MFNode();

ProtoBody6.children[0] = Transform7;

ProtoDeclare5.protoBody = ProtoBody6;

browser.currentScene.children[3] = ProtoDeclare5;

let ProtoInstance22 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance22.name = "Bubble";
ProtoInstance22.DEF = "bubbleA";
browser.currentScene.children[4] = ProtoInstance22;

let ProtoInstance23 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance23.name = "Bubble";
ProtoInstance23.DEF = "bubbleB";
browser.currentScene.children[5] = ProtoInstance23;

let ProtoInstance24 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance24.name = "Bubble";
ProtoInstance24.DEF = "bubbleC";
browser.currentScene.children[6] = ProtoInstance24;

let ProtoInstance25 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance25.name = "Bubble";
ProtoInstance25.DEF = "bubbleD";
browser.currentScene.children[7] = ProtoInstance25;


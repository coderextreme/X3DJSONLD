let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "bubs2.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "creator";
meta3.content = "John Carlson";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "description";
meta4.content = "Tour around a prismatic sphere";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "generator";
meta5.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "identifier";
meta6.content = "https://coderextreme.net/X3DJSONLD/geo.x3d";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "translated";
meta7.content = "13 March 2016";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "generator";
meta8.content = "X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html";
head1.meta[6] = meta8;

head = head1;

let NavigationInfo10 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo10.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo10;

let Viewpoint11 = browser.currentScene.createNode("Viewpoint");
Viewpoint11.position = new SFVec3f(new float[0,0,4]);
Viewpoint11.orientation = new SFRotation(new float[1,0,0,0]);
Viewpoint11.description = "Bubbles in action";
browser.currentScene.children[1] = Viewpoint11;

let Background12 = browser.currentScene.createNode("Background");
Background12.backUrl = new MFString(new java.lang.String["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"]);
Background12.bottomUrl = new MFString(new java.lang.String["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"]);
Background12.frontUrl = new MFString(new java.lang.String["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"]);
Background12.leftUrl = new MFString(new java.lang.String["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"]);
Background12.rightUrl = new MFString(new java.lang.String["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"]);
Background12.topUrl = new MFString(new java.lang.String["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"]);
browser.currentScene.children[2] = Background12;

let ProtoDeclare13 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Bubble" ><ProtoBody><Transform DEF="body_trans"><Shape><Sphere containerField="geometry" radius="0.25"></Sphere>
<Appearance><Material diffuseColor="1 0 0" transparency="0.2"></Material>
</Appearance>
</Shape>
<Script DEF="bounce"><field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="velocity" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="scalvel" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<#sourceCode/>
</Script>
<TimeSensor DEF="bubbleClock" cycleInterval="10" loop="true"></TimeSensor>
<ROUTE fromNode="bounce" fromField="translation_changed" toNode="body_trans" toField="set_translation"></ROUTE>
<ROUTE fromNode="bounce" fromField="scale_changed" toNode="body_trans" toField="set_scale"></ROUTE>
<ROUTE fromNode="bubbleClock" fromField="fraction_changed" toNode="bounce" toField="set_fraction"></ROUTE>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare13.name = "Bubble";
let ProtoBody14 = browser.currentScene.createNode("ProtoBody");
let Transform15 = browser.currentScene.createNode("Transform");
Transform15.DEF = "body_trans";
let Shape16 = browser.currentScene.createNode("Shape");
let Sphere17 = browser.currentScene.createNode("Sphere");
Sphere17.radius = 0.25;
Shape16.geometry = Sphere17;

let Appearance18 = browser.currentScene.createNode("Appearance");
let Material19 = browser.currentScene.createNode("Material");
Material19.diffuseColor = new SFColor(new float[1,0,0]);
Material19.transparency = 0.2;
Appearance18.material = Material19;

Shape16.appearance = Appearance18;

Transform15.children = new MFNode();

Transform15.children[0] = Shape16;

let Script20 = browser.currentScene.createNode("Script");
Script20.DEF = "bounce";
let field21 = browser.currentScene.createNode("field");
field21.name = "scale";
field21.accessType = "inputOutput";
field21.type = "SFVec3f";
field21.value = "1 1 1";
Script20.field = new MFNode();

Script20.field[0] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "translation";
field22.accessType = "inputOutput";
field22.type = "SFVec3f";
field22.value = "0 0 0";
Script20.field[1] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "velocity";
field23.accessType = "inputOutput";
field23.type = "SFVec3f";
field23.value = "0 0 0";
Script20.field[2] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "scalvel";
field24.accessType = "inputOutput";
field24.type = "SFVec3f";
field24.value = "0 0 0";
Script20.field[3] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "set_fraction";
field25.accessType = "inputOnly";
field25.type = "SFFloat";
Script20.field[4] = field25;

let #sourceCode26 = browser.currentScene.createNode("#sourceCode");
Script20.#sourceCode[5] = #sourceCode26;

Transform15.children[1] = Script20;

let TimeSensor27 = browser.currentScene.createNode("TimeSensor");
TimeSensor27.DEF = "bubbleClock";
TimeSensor27.cycleInterval = 10;
TimeSensor27.loop = True;
Transform15.children[2] = TimeSensor27;

let ROUTE28 = browser.currentScene.createNode("ROUTE");
ROUTE28.fromNode = "bounce";
ROUTE28.fromField = "translation_changed";
ROUTE28.toNode = "body_trans";
ROUTE28.toField = "set_translation";
Transform15.children[3] = ROUTE28;

let ROUTE29 = browser.currentScene.createNode("ROUTE");
ROUTE29.fromNode = "bounce";
ROUTE29.fromField = "scale_changed";
ROUTE29.toNode = "body_trans";
ROUTE29.toField = "set_scale";
Transform15.children[4] = ROUTE29;

let ROUTE30 = browser.currentScene.createNode("ROUTE");
ROUTE30.fromNode = "bubbleClock";
ROUTE30.fromField = "fraction_changed";
ROUTE30.toNode = "bounce";
ROUTE30.toField = "set_fraction";
Transform15.children[5] = ROUTE30;

ProtoBody14.children = new MFNode();

ProtoBody14.children[0] = Transform15;

ProtoDeclare13.protoBody = ProtoBody14;

browser.currentScene.children[3] = ProtoDeclare13;

let ProtoInstance31 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance31.name = "Bubble";
ProtoInstance31.DEF = "bubbleA";
browser.currentScene.children[4] = ProtoInstance31;

let ProtoInstance32 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance32.name = "Bubble";
ProtoInstance32.DEF = "bubbleB";
browser.currentScene.children[5] = ProtoInstance32;

let ProtoInstance33 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance33.name = "Bubble";
ProtoInstance33.DEF = "bubbleC";
browser.currentScene.children[6] = ProtoInstance33;

let ProtoInstance34 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance34.name = "Bubble";
ProtoInstance34.DEF = "bubbleD";
browser.currentScene.children[7] = ProtoInstance34;


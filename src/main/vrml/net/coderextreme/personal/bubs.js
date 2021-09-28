let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "Scripting";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "title";
meta3.content = "bubs.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "John Carlson";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "description";
meta5.content = "Tour around a prismatic sphere";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "generator";
meta6.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "identifier";
meta7.content = "https://coderextreme.net/X3DJSONLD/bubs.x3d";
head1.meta[5] = meta7;

head = head1;

let NavigationInfo9 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo9.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo9;

let Viewpoint10 = browser.currentScene.createNode("Viewpoint");
Viewpoint10.position = new SFVec3f(new float[0,0,4]);
Viewpoint10.orientation = new SFRotation(new float[1,0,0,0]);
Viewpoint10.description = "Bubbles in action";
browser.currentScene.children[1] = Viewpoint10;

let Background11 = browser.currentScene.createNode("Background");
Background11.backUrl = new MFString(new java.lang.String["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"]);
Background11.bottomUrl = new MFString(new java.lang.String["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"]);
Background11.frontUrl = new MFString(new java.lang.String["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"]);
Background11.leftUrl = new MFString(new java.lang.String["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"]);
Background11.rightUrl = new MFString(new java.lang.String["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"]);
Background11.topUrl = new MFString(new java.lang.String["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"]);
browser.currentScene.children[2] = Background11;

let ProtoDeclare12 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Bubble" ><ProtoBody><Transform DEF="body_trans"><Shape><Sphere containerField="geometry" radius="0.25"></Sphere>
<Appearance><Material diffuseColor="1 0 0" transparency="0.2"></Material>
</Appearance>
</Shape>
<Script DEF="bounce1"><field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="velocity" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="scalvel" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<![CDATA[ecmascript:
function initialize() {
    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);

    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);
}

function set_fraction(value) {
    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);
    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);
    // if you get to far away or too big, explode
    if ( Math.abs(translation.x) > 256) {
	translation.x = 0;
	initialize();
    }
    if ( Math.abs(translation.y) > 256) {
	translation.y = 0;
	initialize();
    }
    if ( Math.abs(translation.z) > 256) {
	translation.z = 0;
	initialize();
    }
    if (Math.abs(scale.x) > 20) {
	scale.x = scale.x/20;
	translation.x = 0;
	initialize();
    }
    if (Math.abs(scale.y) > 20) {
	scale.y = scale.y/20;
	translation.y = 0;
	initialize();
    }
    if (Math.abs(scale.z) > 20) {
	scale.z = scale.z/20;
	translation.z = 0;
	initialize();
    }
}]]></Script>
<TimeSensor DEF="bubbleClock" cycleInterval="10" loop="true"></TimeSensor>
<ROUTE fromNode="bounce1" fromField="translation_changed" toNode="body_trans" toField="set_translation"></ROUTE>
<ROUTE fromNode="bounce1" fromField="scale_changed" toNode="body_trans" toField="set_scale"></ROUTE>
<ROUTE fromNode="bubbleClock" fromField="fraction_changed" toNode="bounce1" toField="set_fraction"></ROUTE>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare12.name = "Bubble";
let ProtoBody13 = browser.currentScene.createNode("ProtoBody");
let Transform14 = browser.currentScene.createNode("Transform");
Transform14.DEF = "body_trans";
let Shape15 = browser.currentScene.createNode("Shape");
let Sphere16 = browser.currentScene.createNode("Sphere");
Sphere16.radius = 0.25;
Shape15.geometry = Sphere16;

let Appearance17 = browser.currentScene.createNode("Appearance");
let Material18 = browser.currentScene.createNode("Material");
Material18.diffuseColor = new SFColor(new float[1,0,0]);
Material18.transparency = 0.2;
Appearance17.material = Material18;

Shape15.appearance = Appearance17;

Transform14.children = new MFNode();

Transform14.children[0] = Shape15;

let Script19 = browser.currentScene.createNode("Script");
Script19.DEF = "bounce1";
let field20 = browser.currentScene.createNode("field");
field20.name = "scale";
field20.accessType = "inputOutput";
field20.type = "SFVec3f";
field20.value = "1 1 1";
Script19.field = new MFNode();

Script19.field[0] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "translation";
field21.accessType = "inputOutput";
field21.type = "SFVec3f";
field21.value = "0 0 0";
Script19.field[1] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "velocity";
field22.accessType = "inputOutput";
field22.type = "SFVec3f";
field22.value = "0 0 0";
Script19.field[2] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "scalvel";
field23.accessType = "inputOutput";
field23.type = "SFVec3f";
field23.value = "0 0 0";
Script19.field[3] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "set_fraction";
field24.accessType = "inputOnly";
field24.type = "SFFloat";
Script19.field[4] = field24;


Script19.setSourceCode(`ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\n"+
"    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\n"+
"    // if you get to far away or too big, explode\n"+
"    if ( Math.abs(translation.x) > 256) {\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.y) > 256) {\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.z) > 256) {\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.x) > 20) {\n"+
"	scale.x = scale.x/20;\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.y) > 20) {\n"+
"	scale.y = scale.y/20;\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.z) > 20) {\n"+
"	scale.z = scale.z/20;\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"}`)
Transform14.children[1] = Script19;

let TimeSensor25 = browser.currentScene.createNode("TimeSensor");
TimeSensor25.DEF = "bubbleClock";
TimeSensor25.cycleInterval = 10;
TimeSensor25.loop = True;
Transform14.children[2] = TimeSensor25;

let ROUTE26 = browser.currentScene.createNode("ROUTE");
ROUTE26.fromNode = "bounce1";
ROUTE26.fromField = "translation_changed";
ROUTE26.toNode = "body_trans";
ROUTE26.toField = "set_translation";
Transform14.children[3] = ROUTE26;

let ROUTE27 = browser.currentScene.createNode("ROUTE");
ROUTE27.fromNode = "bounce1";
ROUTE27.fromField = "scale_changed";
ROUTE27.toNode = "body_trans";
ROUTE27.toField = "set_scale";
Transform14.children[4] = ROUTE27;

let ROUTE28 = browser.currentScene.createNode("ROUTE");
ROUTE28.fromNode = "bubbleClock";
ROUTE28.fromField = "fraction_changed";
ROUTE28.toNode = "bounce1";
ROUTE28.toField = "set_fraction";
Transform14.children[5] = ROUTE28;

ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = Transform14;

ProtoDeclare12.protoBody = ProtoBody13;

browser.currentScene.children[3] = ProtoDeclare12;

let ProtoInstance29 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance29.name = "Bubble";
ProtoInstance29.DEF = "bubbleA";
browser.currentScene.children[4] = ProtoInstance29;

let ProtoInstance30 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance30.name = "Bubble";
ProtoInstance30.DEF = "bubbleB";
browser.currentScene.children[5] = ProtoInstance30;

let ProtoInstance31 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance31.name = "Bubble";
ProtoInstance31.DEF = "bubbleC";
browser.currentScene.children[6] = ProtoInstance31;

let ProtoInstance32 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance32.name = "Bubble";
ProtoInstance32.DEF = "bubbleD";
browser.currentScene.children[7] = ProtoInstance32;


let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "bubs.x3d";
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

let component6 = browser.currentScene.createNode("component");
component6.name = "Scripting";
component6.level = 1;
head1.component[4] = component6;

head = head1;

let ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Bubble" ><ProtoInterface></ProtoInterface>
<ProtoBody><Transform DEF="body_trans"><Shape><Appearance><Material diffuseColor="1 0 0" transparency="0.2"></Material>
</Appearance>
<Sphere radius="0.25"></Sphere>
</Shape>
<Script DEF="bounce1"><field accessType="inputOutput" type="SFVec3f" name="scale" value="1 1 1"></field>
<field accessType="inputOutput" type="SFVec3f" name="translation"></field>
<field accessType="inputOutput" type="SFVec3f" name="velocity"></field>
<field accessType="inputOutput" type="SFVec3f" name="scalvel"></field>
<field accessType="inputOnly" type="SFFloat" name="set_fraction"></field>
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
</Transform>
<ROUTE fromNode="bounce1" fromField="translation" toNode="body_trans" toField="translation"></ROUTE>
<ROUTE fromNode="bounce1" fromField="scale" toNode="body_trans" toField="scale"></ROUTE>
<ROUTE fromNode="bubbleClock" fromField="fraction_changed" toNode="bounce1" toField="set_fraction"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Bubble";
let ProtoInterface9 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare8.protoInterface = ProtoInterface9;

let ProtoBody10 = browser.currentScene.createNode("ProtoBody");
let Transform11 = browser.currentScene.createNode("Transform");
Transform11.DEF = "body_trans";
let Shape12 = browser.currentScene.createNode("Shape");
let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
Material14.diffuseColor = new SFColor(new float[1,0,0]);
Material14.transparency = 0.2;
Appearance13.material = Material14;

Shape12.appearance = Appearance13;

let Sphere15 = browser.currentScene.createNode("Sphere");
Sphere15.radius = 0.25;
Shape12.geometry = Sphere15;

Transform11.child = new undefined();

Transform11.child[0] = Shape12;

let Script16 = browser.currentScene.createNode("Script");
Script16.DEF = "bounce1";
let field17 = browser.currentScene.createNode("field");
field17.accessType = "inputOutput";
field17.type = "SFVec3f";
field17.name = "scale";
field17.value = "1 1 1";
Script16.field = new MFNode();

Script16.field[0] = field17;

let field18 = browser.currentScene.createNode("field");
field18.accessType = "inputOutput";
field18.type = "SFVec3f";
field18.name = "translation";
Script16.field[1] = field18;

let field19 = browser.currentScene.createNode("field");
field19.accessType = "inputOutput";
field19.type = "SFVec3f";
field19.name = "velocity";
Script16.field[2] = field19;

let field20 = browser.currentScene.createNode("field");
field20.accessType = "inputOutput";
field20.type = "SFVec3f";
field20.name = "scalvel";
Script16.field[3] = field20;

let field21 = browser.currentScene.createNode("field");
field21.accessType = "inputOnly";
field21.type = "SFFloat";
field21.name = "set_fraction";
Script16.field[4] = field21;


Script16.setSourceCode(`ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\n"+
"    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\n"+
"    // if you get to far away or too big, explode\n"+
"    if ( Math.abs(translation.x) > 256) {\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.y) > 256) {\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.z) > 256) {\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.x) > 20) {\n"+
"	scale.x = scale.x/20;\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.y) > 20) {\n"+
"	scale.y = scale.y/20;\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.z) > 20) {\n"+
"	scale.z = scale.z/20;\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"}`)
Transform11.children[1] = Script16;

let TimeSensor22 = browser.currentScene.createNode("TimeSensor");
TimeSensor22.DEF = "bubbleClock";
TimeSensor22.cycleInterval = 10;
TimeSensor22.loop = True;
Transform11.children[2] = TimeSensor22;

ProtoBody10.children = new MFNode();

ProtoBody10.children[0] = Transform11;

let ROUTE23 = browser.currentScene.createNode("ROUTE");
ROUTE23.fromNode = "bounce1";
ROUTE23.fromField = "translation";
ROUTE23.toNode = "body_trans";
ROUTE23.toField = "translation";
ProtoBody10.children[1] = ROUTE23;

let ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromNode = "bounce1";
ROUTE24.fromField = "scale";
ROUTE24.toNode = "body_trans";
ROUTE24.toField = "scale";
ProtoBody10.children[2] = ROUTE24;

let ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromNode = "bubbleClock";
ROUTE25.fromField = "fraction_changed";
ROUTE25.toNode = "bounce1";
ROUTE25.toField = "set_fraction";
ProtoBody10.children[3] = ROUTE25;

ProtoDeclare8.protoBody = ProtoBody10;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare8;

let NavigationInfo26 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo26.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children[1] = NavigationInfo26;

let Viewpoint27 = browser.currentScene.createNode("Viewpoint");
Viewpoint27.description = "Bubbles in action";
Viewpoint27.position = new SFVec3f(new float[0,0,4]);
browser.currentScene.children[2] = Viewpoint27;

let Background28 = browser.currentScene.createNode("Background");
Background28.frontUrl = new MFString(new java.lang.String["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"]);
Background28.backUrl = new MFString(new java.lang.String["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"]);
Background28.leftUrl = new MFString(new java.lang.String["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"]);
Background28.rightUrl = new MFString(new java.lang.String["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"]);
Background28.topUrl = new MFString(new java.lang.String["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"]);
Background28.bottomUrl = new MFString(new java.lang.String["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"]);
browser.currentScene.children[3] = Background28;

let ProtoInstance29 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance29.DEF = "bubbleA";
ProtoInstance29.name = "Bubble";
browser.currentScene.children[4] = ProtoInstance29;

let ProtoInstance30 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance30.DEF = "bubbleB";
ProtoInstance30.name = "Bubble";
browser.currentScene.children[5] = ProtoInstance30;

let ProtoInstance31 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance31.DEF = "bubbleC";
ProtoInstance31.name = "Bubble";
browser.currentScene.children[6] = ProtoInstance31;

let ProtoInstance32 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance32.DEF = "bubbleD";
ProtoInstance32.name = "Bubble";
browser.currentScene.children[7] = ProtoInstance32;


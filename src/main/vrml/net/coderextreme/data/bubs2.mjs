let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
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
meta6.name = "generator";
meta6.content = "X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "generator";
meta7.content = "x3d-tidy V1.0.118, https://www.npmjs.com/package/x3d-tidy";
head1.meta[5] = meta7;

let component8 = browser.currentScene.createNode("component");
component8.name = "Scripting";
component8.level = 1;
head1.component[6] = component8;

head = head1;

let ProtoDeclare10 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Bubble" ><ProtoInterface></ProtoInterface>
<ProtoBody><Transform DEF="body_trans"><Shape><Appearance><Material diffuseColor="1 0 0" transparency="0.2"></Material>
</Appearance>
<Sphere radius="0.25"></Sphere>
</Shape>
<Script DEF="bounce"><field accessType="inputOutput" type="SFVec3f" name="scale" value="1 1 1"></field>
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
    if (typeof translation === 'undefined') {
		translation = new SFVec3f(0, 0, 0);
    }
    if (typeof velocity === 'undefined') {
		velocity = new SFVec3f(0, 0, 0);
    }
    if (typeof scalvel === 'undefined') {
		scalvel = new SFVec3f(0, 0, 0);
    }
    if (typeof scale === 'undefined') {
		scale = new SFVec3f(1, 1, 1);
    }
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
<ROUTE fromNode="bounce" fromField="translation" toNode="body_trans" toField="translation"></ROUTE>
<ROUTE fromNode="bounce" fromField="scale" toNode="body_trans" toField="scale"></ROUTE>
<ROUTE fromNode="bubbleClock" fromField="fraction_changed" toNode="bounce" toField="set_fraction"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare10.name = "Bubble";
let ProtoInterface11 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare10.protoInterface = ProtoInterface11;

let ProtoBody12 = browser.currentScene.createNode("ProtoBody");
let Transform13 = browser.currentScene.createNode("Transform");
Transform13.DEF = "body_trans";
let Shape14 = browser.currentScene.createNode("Shape");
let Appearance15 = browser.currentScene.createNode("Appearance");
let Material16 = browser.currentScene.createNode("Material");
Material16.diffuseColor = new SFColor(new float[1,0,0]);
Material16.transparency = 0.2;
Appearance15.material = Material16;

Shape14.appearance = Appearance15;

let Sphere17 = browser.currentScene.createNode("Sphere");
Sphere17.radius = 0.25;
Shape14.geometry = Sphere17;

Transform13.child = new undefined();

Transform13.child[0] = Shape14;

let Script18 = browser.currentScene.createNode("Script");
Script18.DEF = "bounce";
let field19 = browser.currentScene.createNode("field");
field19.accessType = "inputOutput";
field19.type = "SFVec3f";
field19.name = "scale";
field19.value = "1 1 1";
Script18.field = new MFNode();

Script18.field[0] = field19;

let field20 = browser.currentScene.createNode("field");
field20.accessType = "inputOutput";
field20.type = "SFVec3f";
field20.name = "translation";
Script18.field[1] = field20;

let field21 = browser.currentScene.createNode("field");
field21.accessType = "inputOutput";
field21.type = "SFVec3f";
field21.name = "velocity";
Script18.field[2] = field21;

let field22 = browser.currentScene.createNode("field");
field22.accessType = "inputOutput";
field22.type = "SFVec3f";
field22.name = "scalvel";
Script18.field[3] = field22;

let field23 = browser.currentScene.createNode("field");
field23.accessType = "inputOnly";
field23.type = "SFFloat";
field23.name = "set_fraction";
Script18.field[4] = field23;


Script18.setSourceCode(`ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    if (typeof translation === 'undefined') {\n"+
"		translation = new SFVec3f(0, 0, 0);\n"+
"    }\n"+
"    if (typeof velocity === 'undefined') {\n"+
"		velocity = new SFVec3f(0, 0, 0);\n"+
"    }\n"+
"    if (typeof scalvel === 'undefined') {\n"+
"		scalvel = new SFVec3f(0, 0, 0);\n"+
"    }\n"+
"    if (typeof scale === 'undefined') {\n"+
"		scale = new SFVec3f(1, 1, 1);\n"+
"    }\n"+
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
Transform13.children[1] = Script18;

let TimeSensor24 = browser.currentScene.createNode("TimeSensor");
TimeSensor24.DEF = "bubbleClock";
TimeSensor24.cycleInterval = 10;
TimeSensor24.loop = True;
Transform13.children[2] = TimeSensor24;

ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = Transform13;

let ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromNode = "bounce";
ROUTE25.fromField = "translation";
ROUTE25.toNode = "body_trans";
ROUTE25.toField = "translation";
ProtoBody12.children[1] = ROUTE25;

let ROUTE26 = browser.currentScene.createNode("ROUTE");
ROUTE26.fromNode = "bounce";
ROUTE26.fromField = "scale";
ROUTE26.toNode = "body_trans";
ROUTE26.toField = "scale";
ProtoBody12.children[2] = ROUTE26;

let ROUTE27 = browser.currentScene.createNode("ROUTE");
ROUTE27.fromNode = "bubbleClock";
ROUTE27.fromField = "fraction_changed";
ROUTE27.toNode = "bounce";
ROUTE27.toField = "set_fraction";
ProtoBody12.children[3] = ROUTE27;

ProtoDeclare10.protoBody = ProtoBody12;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare10;

let NavigationInfo28 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo28.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children[1] = NavigationInfo28;

let Viewpoint29 = browser.currentScene.createNode("Viewpoint");
Viewpoint29.description = "Bubbles in action";
Viewpoint29.position = new SFVec3f(new float[0,0,4]);
browser.currentScene.children[2] = Viewpoint29;

let Background30 = browser.currentScene.createNode("Background");
Background30.frontUrl = new MFString(new java.lang.String["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"]);
Background30.backUrl = new MFString(new java.lang.String["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"]);
Background30.leftUrl = new MFString(new java.lang.String["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"]);
Background30.rightUrl = new MFString(new java.lang.String["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"]);
Background30.topUrl = new MFString(new java.lang.String["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"]);
Background30.bottomUrl = new MFString(new java.lang.String["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"]);
browser.currentScene.children[3] = Background30;

let ProtoInstance31 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance31.DEF = "bubbleA";
ProtoInstance31.name = "Bubble";
browser.currentScene.children[4] = ProtoInstance31;

let ProtoInstance32 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance32.DEF = "bubbleB";
ProtoInstance32.name = "Bubble";
browser.currentScene.children[5] = ProtoInstance32;

let ProtoInstance33 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance33.DEF = "bubbleC";
ProtoInstance33.name = "Bubble";
browser.currentScene.children[6] = ProtoInstance33;

let ProtoInstance34 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance34.DEF = "bubbleD";
ProtoInstance34.name = "Bubble";
browser.currentScene.children[7] = ProtoInstance34;


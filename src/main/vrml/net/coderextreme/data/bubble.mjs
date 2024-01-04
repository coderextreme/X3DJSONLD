let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "bubble.x3d";
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

head = head1;

let ProtoDeclare7 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Bubble" ><ProtoInterface></ProtoInterface>
<ProtoBody><Transform DEF="transform"><Shape><Appearance><Material diffuseColor="1 0 0" transparency="0.2"></Material>
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
	translation = new SFVec3f(
		translation.x + velocity.x,
		translation.y + velocity.y,
		translation.z + velocity.z);
	scale = new SFVec3f(
		scale.x + scalvel.x,
		scale.y + scalvel.y,
		scale.z + scalvel.z);
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
		scale.x = scale.x/2;
		translation.x = 0;
		initialize();
	}
	if (Math.abs(scale.y) > 20) {
		scale.y = scale.y/2;
		translation.y = 0;
		initialize();
	}
	if (Math.abs(scale.z) > 20) {
		scale.z = scale.z/2;
		translation.z = 0;
		initialize();
	}
}]]></Script>
<TimeSensor DEF="bubbleClock" cycleInterval="10" loop="true"></TimeSensor>
</Transform>
<ROUTE fromNode="bounce" fromField="translation" toNode="transform" toField="translation"></ROUTE>
<ROUTE fromNode="bounce" fromField="scale" toNode="transform" toField="scale"></ROUTE>
<ROUTE fromNode="bubbleClock" fromField="fraction_changed" toNode="bounce" toField="set_fraction"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare7.name = "Bubble";
let ProtoInterface8 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare7.protoInterface = ProtoInterface8;

let ProtoBody9 = browser.currentScene.createNode("ProtoBody");
let Transform10 = browser.currentScene.createNode("Transform");
Transform10.DEF = "transform";
let Shape11 = browser.currentScene.createNode("Shape");
let Appearance12 = browser.currentScene.createNode("Appearance");
let Material13 = browser.currentScene.createNode("Material");
Material13.diffuseColor = new SFColor(new float[1,0,0]);
Material13.transparency = 0.2;
Appearance12.material = Material13;

Shape11.appearance = Appearance12;

let Sphere14 = browser.currentScene.createNode("Sphere");
Sphere14.radius = 0.25;
Shape11.geometry = Sphere14;

Transform10.child = new undefined();

Transform10.child[0] = Shape11;

let Script15 = browser.currentScene.createNode("Script");
Script15.DEF = "bounce";
let field16 = browser.currentScene.createNode("field");
field16.accessType = "inputOutput";
field16.type = "SFVec3f";
field16.name = "scale";
field16.value = "1 1 1";
Script15.field = new MFNode();

Script15.field[0] = field16;

let field17 = browser.currentScene.createNode("field");
field17.accessType = "inputOutput";
field17.type = "SFVec3f";
field17.name = "translation";
Script15.field[1] = field17;

let field18 = browser.currentScene.createNode("field");
field18.accessType = "inputOutput";
field18.type = "SFVec3f";
field18.name = "velocity";
Script15.field[2] = field18;

let field19 = browser.currentScene.createNode("field");
field19.accessType = "inputOutput";
field19.type = "SFVec3f";
field19.name = "scalvel";
Script15.field[3] = field19;

let field20 = browser.currentScene.createNode("field");
field20.accessType = "inputOnly";
field20.type = "SFFloat";
field20.name = "set_fraction";
Script15.field[4] = field20;


Script15.setSourceCode(`ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"	translation = new SFVec3f(\n"+
"		translation.x + velocity.x,\n"+
"		translation.y + velocity.y,\n"+
"		translation.z + velocity.z);\n"+
"	scale = new SFVec3f(\n"+
"		scale.x + scalvel.x,\n"+
"		scale.y + scalvel.y,\n"+
"		scale.z + scalvel.z);\n"+
"        // if you get to far away or too big, explode\n"+
"        if ( Math.abs(translation.x) > 256) {\n"+
"		translation.x = 0;\n"+
"		initialize();\n"+
"	}\n"+
"        if ( Math.abs(translation.y) > 256) {\n"+
"		translation.y = 0;\n"+
"		initialize();\n"+
"	}\n"+
"        if ( Math.abs(translation.z) > 256) {\n"+
"		translation.z = 0;\n"+
"		initialize();\n"+
"	}\n"+
"	if (Math.abs(scale.x) > 20) {\n"+
"		scale.x = scale.x/2;\n"+
"		translation.x = 0;\n"+
"		initialize();\n"+
"	}\n"+
"	if (Math.abs(scale.y) > 20) {\n"+
"		scale.y = scale.y/2;\n"+
"		translation.y = 0;\n"+
"		initialize();\n"+
"	}\n"+
"	if (Math.abs(scale.z) > 20) {\n"+
"		scale.z = scale.z/2;\n"+
"		translation.z = 0;\n"+
"		initialize();\n"+
"	}\n"+
"}`)
Transform10.children[1] = Script15;

let TimeSensor21 = browser.currentScene.createNode("TimeSensor");
TimeSensor21.DEF = "bubbleClock";
TimeSensor21.cycleInterval = 10;
TimeSensor21.loop = True;
Transform10.children[2] = TimeSensor21;

ProtoBody9.children = new MFNode();

ProtoBody9.children[0] = Transform10;

let ROUTE22 = browser.currentScene.createNode("ROUTE");
ROUTE22.fromNode = "bounce";
ROUTE22.fromField = "translation";
ROUTE22.toNode = "transform";
ROUTE22.toField = "translation";
ProtoBody9.children[1] = ROUTE22;

let ROUTE23 = browser.currentScene.createNode("ROUTE");
ROUTE23.fromNode = "bounce";
ROUTE23.fromField = "scale";
ROUTE23.toNode = "transform";
ROUTE23.toField = "scale";
ProtoBody9.children[2] = ROUTE23;

let ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromNode = "bubbleClock";
ROUTE24.fromField = "fraction_changed";
ROUTE24.toNode = "bounce";
ROUTE24.toField = "set_fraction";
ProtoBody9.children[3] = ROUTE24;

ProtoDeclare7.protoBody = ProtoBody9;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare7;

let NavigationInfo25 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo25.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children[1] = NavigationInfo25;

let Viewpoint26 = browser.currentScene.createNode("Viewpoint");
Viewpoint26.description = "Bubble in action";
Viewpoint26.position = new SFVec3f(new float[0,0,4]);
browser.currentScene.children[2] = Viewpoint26;

let ProtoInstance27 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance27.DEF = "bubbleA";
ProtoInstance27.name = "Bubble";
browser.currentScene.children[3] = ProtoInstance27;


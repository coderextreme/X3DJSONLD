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
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Bubble" ><ProtoBody><Transform DEF="transform"><Shape><Sphere containerField="geometry" radius="0.25"></Sphere>
<Appearance><Material diffuseColor="1 0 0" transparency="0.2"></Material>
</Appearance>
</Shape>
<Script DEF="bounce"><field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
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
<ROUTE fromNode="bounce" fromField="translation_changed" toNode="transform" toField="set_translation"></ROUTE>
<ROUTE fromNode="bounce" fromField="scale_changed" toNode="transform" toField="set_scale"></ROUTE>
<ROUTE fromNode="bubbleClock" fromField="fraction_changed" toNode="bounce" toField="set_fraction"></ROUTE>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare4.name = "Bubble";
let ProtoBody5 = browser.currentScene.createNode("ProtoBody");
let Transform6 = browser.currentScene.createNode("Transform");
Transform6.DEF = "transform";
let Shape7 = browser.currentScene.createNode("Shape");
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

let Script11 = browser.currentScene.createNode("Script");
Script11.DEF = "bounce";
let field12 = browser.currentScene.createNode("field");
field12.name = "scale";
field12.accessType = "inputOutput";
field12.type = "SFVec3f";
field12.value = "1 1 1";
Script11.field = new MFNode();

Script11.field[0] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "translation";
field13.accessType = "inputOutput";
field13.type = "SFVec3f";
field13.value = "0 0 0";
Script11.field[1] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "velocity";
field14.accessType = "inputOutput";
field14.type = "SFVec3f";
field14.value = "0 0 0";
Script11.field[2] = field14;

let field15 = browser.currentScene.createNode("field");
field15.name = "scalvel";
field15.accessType = "inputOutput";
field15.type = "SFVec3f";
field15.value = "0 0 0";
Script11.field[3] = field15;

let field16 = browser.currentScene.createNode("field");
field16.name = "set_fraction";
field16.accessType = "inputOnly";
field16.type = "SFFloat";
Script11.field[4] = field16;


Script11.setSourceCode(`ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"	translation = new SFVec3f(\n"+
"		translation.x + velocity.x,\n"+
"		translation.y + velocity.y,\n"+
"		translation.z + velocity.z);\n"+
"	scale = new SFVec3f(\n"+
"		scale.x + scalvel.x,\n"+
"		scale.y + scalvel.y,\n"+
"		scale.z + scalvel.z);\n"+
"        // if you get to far away or too big, explode\n"+
"        if ( Math.abs(translation.x) > 256) {\n"+
"		translation.x = 0;\n"+
"		initialize();\n"+
"	}\n"+
"        if ( Math.abs(translation.y) > 256) {\n"+
"		translation.y = 0;\n"+
"		initialize();\n"+
"	}\n"+
"        if ( Math.abs(translation.z) > 256) {\n"+
"		translation.z = 0;\n"+
"		initialize();\n"+
"	}\n"+
"	if (Math.abs(scale.x) > 20) {\n"+
"		scale.x = scale.x/2;\n"+
"		translation.x = 0;\n"+
"		initialize();\n"+
"	}\n"+
"	if (Math.abs(scale.y) > 20) {\n"+
"		scale.y = scale.y/2;\n"+
"		translation.y = 0;\n"+
"		initialize();\n"+
"	}\n"+
"	if (Math.abs(scale.z) > 20) {\n"+
"		scale.z = scale.z/2;\n"+
"		translation.z = 0;\n"+
"		initialize();\n"+
"	}\n"+
"}`)
Transform6.children[1] = Script11;

let TimeSensor17 = browser.currentScene.createNode("TimeSensor");
TimeSensor17.DEF = "bubbleClock";
TimeSensor17.cycleInterval = 10;
TimeSensor17.loop = True;
Transform6.children[2] = TimeSensor17;

let ROUTE18 = browser.currentScene.createNode("ROUTE");
ROUTE18.fromNode = "bounce";
ROUTE18.fromField = "translation_changed";
ROUTE18.toNode = "transform";
ROUTE18.toField = "set_translation";
Transform6.children[3] = ROUTE18;

let ROUTE19 = browser.currentScene.createNode("ROUTE");
ROUTE19.fromNode = "bounce";
ROUTE19.fromField = "scale_changed";
ROUTE19.toNode = "transform";
ROUTE19.toField = "set_scale";
Transform6.children[4] = ROUTE19;

let ROUTE20 = browser.currentScene.createNode("ROUTE");
ROUTE20.fromNode = "bubbleClock";
ROUTE20.fromField = "fraction_changed";
ROUTE20.toNode = "bounce";
ROUTE20.toField = "set_fraction";
Transform6.children[5] = ROUTE20;

ProtoBody5.children = new MFNode();

ProtoBody5.children[0] = Transform6;

ProtoDeclare4.protoBody = ProtoBody5;

browser.currentScene.children[2] = ProtoDeclare4;

let ProtoInstance21 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance21.name = "Bubble";
ProtoInstance21.DEF = "bubbleA";
browser.currentScene.children[3] = ProtoInstance21;


const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "bubble.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("description", "Tour around a prismatic sphere");
scene.addMetaData("generator", "X3D-Edit, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/bubble.x3d");
await browser .loadComponents (scene);
let NavigationInfo8 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo8.type = new X3D.MFString([new X3D.SFString("EXAMINE")]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo8;

let Viewpoint9 = browser.currentScene.createNode("Viewpoint");
Viewpoint9.position = new X3D.SFVec3f([0,0,4]);
Viewpoint9.orientation = new X3D.SFRotation([1,0,0,0]);
Viewpoint9.description = "Bubble in action";
browser.currentScene.children[1] = Viewpoint9;

let ProtoDeclare10 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Bubble" ><ProtoBody><Transform DEF="transform"><Shape><Sphere radius="0.25"></Sphere>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 0 0" transparency="0.2"></Material>
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
ProtoDeclare10.name = "Bubble";
let ProtoBody11 = browser.currentScene.createNode("ProtoBody");
let Transform12 = browser.currentScene.createNode("Transform");
Transform12.DEF = "transform";
let Shape13 = browser.currentScene.createNode("Shape");
let Sphere14 = browser.currentScene.createNode("Sphere");
Sphere14.radius = 0.25;
geometry = Sphere14;

let Appearance15 = browser.currentScene.createNode("Appearance");
let Material16 = browser.currentScene.createNode("Material");
Material16.diffuseColor = new X3D.SFColor([1,0,0]);
Material16.transparency = 0.2;
material = Material16;

appearance = Appearance15;

Transform12YYY.child = new X3D.undefined();

Transform12ZZZ.child[0] = Shape13;

let Script17 = browser.currentScene.createNode("Script");
Script17.DEF = "bounce";
Script18.getField("scale").setValue("1 1 1");
Script17YYY.field = new X3D.MFNode();

Script19.getField("translation").setValue("0 0 0");
Script17YYY.field = new X3D.MFNode();

Script20.getField("velocity").setValue("0 0 0");
Script17YYY.field = new X3D.MFNode();

Script21.getField("scalvel").setValue("0 0 0");
Script17YYY.field = new X3D.MFNode();

Script22.getField("set_fraction")Script17YYY.field = new X3D.MFNode();


Script17.setSourceCode(`ecmascript:\n"+
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
Transform12ZZZ.children[1] = Script17;

let TimeSensor23 = browser.currentScene.createNode("TimeSensor");
TimeSensor23.DEF = "bubbleClock";
TimeSensor23.cycleInterval = 10;
TimeSensor23.loop = True;
Transform12ZZZ.children[2] = TimeSensor23;

let ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromNode = "bounce";
ROUTE24.fromField = "translation_changed";
ROUTE24.toNode = "transform";
ROUTE24.toField = "set_translation";
Transform12ZZZ.children[3] = ROUTE24;

let ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromNode = "bounce";
ROUTE25.fromField = "scale_changed";
ROUTE25.toNode = "transform";
ROUTE25.toField = "set_scale";
Transform12ZZZ.children[4] = ROUTE25;

let ROUTE26 = browser.currentScene.createNode("ROUTE");
ROUTE26.fromNode = "bubbleClock";
ROUTE26.fromField = "fraction_changed";
ROUTE26.toNode = "bounce";
ROUTE26.toField = "set_fraction";
Transform12ZZZ.children[5] = ROUTE26;

ProtoBody11YYY.children = new X3D.MFNode();

ProtoBody11ZZZ.children[0] = Transform12;

protoBody = ProtoBody11;

browser.currentScene.children[2] = ProtoDeclare10;

let ProtoInstance27 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance27.name = "Bubble";
ProtoInstance27.DEF = "bubbleA";
browser.currentScene.children[3] = ProtoInstance27;

}
main ();

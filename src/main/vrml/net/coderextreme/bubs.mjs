const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("Scripting", 1));
scene.addMetaData("title", "bubs.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("description", "Tour around a prismatic sphere");
scene.addMetaData("generator", "X3D-Edit, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/bubs.x3d");
await browser .loadComponents (scene);
let NavigationInfo9 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo9.type = new X3D.MFString([new X3D.SFString("EXAMINE")]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo9;

let Viewpoint10 = browser.currentScene.createNode("Viewpoint");
Viewpoint10.position = new X3D.SFVec3f([0,0,4]);
Viewpoint10.orientation = new X3D.SFRotation([1,0,0,0]);
Viewpoint10.description = "Bubbles in action";
browser.currentScene.children[1] = Viewpoint10;

let Background11 = browser.currentScene.createNode("Background");
Background11.backUrl = new X3D.MFString([new X3D.SFString("../resources/images/BK.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png")]);
Background11.bottomUrl = new X3D.MFString([new X3D.SFString("../resources/images/BT.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png")]);
Background11.frontUrl = new X3D.MFString([new X3D.SFString("../resources/images/FR.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png")]);
Background11.leftUrl = new X3D.MFString([new X3D.SFString("../resources/images/LF.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png")]);
Background11.rightUrl = new X3D.MFString([new X3D.SFString("../resources/images/RT.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png")]);
Background11.topUrl = new X3D.MFString([new X3D.SFString("../resources/images/TP.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png")]);
browser.currentScene.children[2] = Background11;

let ProtoDeclare12 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Bubble" ><ProtoBody><Transform DEF="body_trans"><Shape><Sphere radius="0.25"></Sphere>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 0 0" transparency="0.2"></Material>
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
geometry = Sphere16;

let Appearance17 = browser.currentScene.createNode("Appearance");
let Material18 = browser.currentScene.createNode("Material");
Material18.diffuseColor = new X3D.SFColor([1,0,0]);
Material18.transparency = 0.2;
material = Material18;

appearance = Appearance17;

Transform14YYY.child = new X3D.undefined();

Transform14ZZZ.child[0] = Shape15;

let Script19 = browser.currentScene.createNode("Script");
Script19.DEF = "bounce1";
Script20.getField("scale").setValue("1 1 1");
Script19YYY.field = new X3D.MFNode();

Script21.getField("translation").setValue("0 0 0");
Script19YYY.field = new X3D.MFNode();

Script22.getField("velocity").setValue("0 0 0");
Script19YYY.field = new X3D.MFNode();

Script23.getField("scalvel").setValue("0 0 0");
Script19YYY.field = new X3D.MFNode();

Script24.getField("set_fraction")Script19YYY.field = new X3D.MFNode();


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
Transform14ZZZ.children[1] = Script19;

let TimeSensor25 = browser.currentScene.createNode("TimeSensor");
TimeSensor25.DEF = "bubbleClock";
TimeSensor25.cycleInterval = 10;
TimeSensor25.loop = True;
Transform14ZZZ.children[2] = TimeSensor25;

let ROUTE26 = browser.currentScene.createNode("ROUTE");
ROUTE26.fromNode = "bounce1";
ROUTE26.fromField = "translation_changed";
ROUTE26.toNode = "body_trans";
ROUTE26.toField = "set_translation";
Transform14ZZZ.children[3] = ROUTE26;

let ROUTE27 = browser.currentScene.createNode("ROUTE");
ROUTE27.fromNode = "bounce1";
ROUTE27.fromField = "scale_changed";
ROUTE27.toNode = "body_trans";
ROUTE27.toField = "set_scale";
Transform14ZZZ.children[4] = ROUTE27;

let ROUTE28 = browser.currentScene.createNode("ROUTE");
ROUTE28.fromNode = "bubbleClock";
ROUTE28.fromField = "fraction_changed";
ROUTE28.toNode = "bounce1";
ROUTE28.toField = "set_fraction";
Transform14ZZZ.children[5] = ROUTE28;

ProtoBody13YYY.children = new X3D.MFNode();

ProtoBody13ZZZ.children[0] = Transform14;

protoBody = ProtoBody13;

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

}
main ();

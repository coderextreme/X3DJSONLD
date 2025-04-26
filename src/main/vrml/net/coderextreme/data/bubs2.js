const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "bubs2.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("description", "Tour around a prismatic sphere");
scene.addMetaData("generator", "X3D-Edit, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d");
scene.addMetaData("translated", "13 March 2016");
scene.addMetaData("generator", "X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html");
scene .addComponent (browser .getComponent ("Scripting", 1));
await browser .loadComponents (scene);
let NavigationInfo11 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo11.type = new X3D.MFString([new X3D.SFString("EXAMINE")]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo11;

let Viewpoint12 = browser.currentScene.createNode("Viewpoint");
Viewpoint12.position = new X3D.SFVec3f([0,0,4]);
Viewpoint12.orientation = new X3D.SFRotation([1,0,0,0]);
Viewpoint12.description = "Bubbles in action";
browser.currentScene.children[1] = Viewpoint12;

let Background13 = browser.currentScene.createNode("Background");
Background13.backUrl = new X3D.MFString([new X3D.SFString("../resources/images/BK.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png")]);
Background13.bottomUrl = new X3D.MFString([new X3D.SFString("../resources/images/BT.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png")]);
Background13.frontUrl = new X3D.MFString([new X3D.SFString("../resources/images/FR.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png")]);
Background13.leftUrl = new X3D.MFString([new X3D.SFString("../resources/images/LF.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png")]);
Background13.rightUrl = new X3D.MFString([new X3D.SFString("../resources/images/RT.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png")]);
Background13.topUrl = new X3D.MFString([new X3D.SFString("../resources/images/TP.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png")]);
browser.currentScene.children[2] = Background13;

let ProtoDeclare14 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Bubble" ><ProtoBody><Transform DEF="body_trans"><Shape><Sphere radius="0.25"></Sphere>
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
<ROUTE fromNode="bounce" fromField="translation_changed" toNode="body_trans" toField="set_translation"></ROUTE>
<ROUTE fromNode="bounce" fromField="scale_changed" toNode="body_trans" toField="set_scale"></ROUTE>
<ROUTE fromNode="bubbleClock" fromField="fraction_changed" toNode="bounce" toField="set_fraction"></ROUTE>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare14.name = "Bubble";
let ProtoBody15 = browser.currentScene.createNode("ProtoBody");
let Transform16 = browser.currentScene.createNode("Transform");
Transform16.DEF = "body_trans";
let Shape17 = browser.currentScene.createNode("Shape");
let Sphere18 = browser.currentScene.createNode("Sphere");
Sphere18.radius = 0.25;
geometry = Sphere18;

let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.diffuseColor = new X3D.SFColor([1,0,0]);
Material20.transparency = 0.2;
material = Material20;

appearance = Appearance19;

Transform16YYY.child = new X3D.undefined();

Transform16ZZZ.child[0] = Shape17;

let Script21 = browser.currentScene.createNode("Script");
Script21.DEF = "bounce";
Script22.getField("scale").setValue("1 1 1");
Script21YYY.field = new X3D.MFNode();

Script23.getField("translation").setValue("0 0 0");
Script21YYY.field = new X3D.MFNode();

Script24.getField("velocity").setValue("0 0 0");
Script21YYY.field = new X3D.MFNode();

Script25.getField("scalvel").setValue("0 0 0");
Script21YYY.field = new X3D.MFNode();

Script26.getField("set_fraction")Script21YYY.field = new X3D.MFNode();


Script21.setSourceCode(`ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    if (typeof translation === 'undefined') {\n"+
"		translation = new SFVec3f(0, 0, 0);\n"+
"    }\n"+
"    if (typeof velocity === 'undefined') {\n"+
"		velocity = new SFVec3f(0, 0, 0);\n"+
"    }\n"+
"    if (typeof scalvel === 'undefined') {\n"+
"		scalvel = new SFVec3f(0, 0, 0);\n"+
"    }\n"+
"    if (typeof scale === 'undefined') {\n"+
"		scale = new SFVec3f(1, 1, 1);\n"+
"    }\n"+
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
Transform16ZZZ.children[1] = Script21;

let TimeSensor27 = browser.currentScene.createNode("TimeSensor");
TimeSensor27.DEF = "bubbleClock";
TimeSensor27.cycleInterval = 10;
TimeSensor27.loop = True;
Transform16ZZZ.children[2] = TimeSensor27;

let ROUTE28 = browser.currentScene.createNode("ROUTE");
ROUTE28.fromNode = "bounce";
ROUTE28.fromField = "translation_changed";
ROUTE28.toNode = "body_trans";
ROUTE28.toField = "set_translation";
Transform16ZZZ.children[3] = ROUTE28;

let ROUTE29 = browser.currentScene.createNode("ROUTE");
ROUTE29.fromNode = "bounce";
ROUTE29.fromField = "scale_changed";
ROUTE29.toNode = "body_trans";
ROUTE29.toField = "set_scale";
Transform16ZZZ.children[4] = ROUTE29;

let ROUTE30 = browser.currentScene.createNode("ROUTE");
ROUTE30.fromNode = "bubbleClock";
ROUTE30.fromField = "fraction_changed";
ROUTE30.toNode = "bounce";
ROUTE30.toField = "set_fraction";
Transform16ZZZ.children[5] = ROUTE30;

ProtoBody15YYY.children = new X3D.MFNode();

ProtoBody15ZZZ.children[0] = Transform16;

protoBody = ProtoBody15;

browser.currentScene.children[3] = ProtoDeclare14;

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

}
main ();

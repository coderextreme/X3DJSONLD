const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "bubs3.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("description", "Tour around a prismatic sphere");
scene.addMetaData("generator", "X3D-Edit, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/bubs.x3d");
await browser .loadComponents (scene);
let NavigationInfo8 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo8.type = new X3D.MFString([new X3D.SFString("EXAMINE")]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo8;

let Viewpoint9 = browser.currentScene.createNode("Viewpoint");
Viewpoint9.position = new X3D.SFVec3f([0,0,4]);
Viewpoint9.orientation = new X3D.SFRotation([1,0,0,0]);
Viewpoint9.description = "Bubbles in action";
browser.currentScene.children[1] = Viewpoint9;

let Background10 = browser.currentScene.createNode("Background");
Background10.backUrl = new X3D.MFString([new X3D.SFString("../resources/images/BK.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png")]);
Background10.bottomUrl = new X3D.MFString([new X3D.SFString("../resources/images/BT.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png")]);
Background10.frontUrl = new X3D.MFString([new X3D.SFString("../resources/images/FR.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png")]);
Background10.leftUrl = new X3D.MFString([new X3D.SFString("../resources/images/LF.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png")]);
Background10.rightUrl = new X3D.MFString([new X3D.SFString("../resources/images/RT.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png")]);
Background10.topUrl = new X3D.MFString([new X3D.SFString("../resources/images/TP.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png")]);
browser.currentScene.children[2] = Background10;

let Transform11 = browser.currentScene.createNode("Transform");
Transform11.DEF = "DECLBubble_transformA";
let Shape12 = browser.currentScene.createNode("Shape");
let Sphere13 = browser.currentScene.createNode("Sphere");
Sphere13.radius = 0.25;
geometry = Sphere13;

let Appearance14 = browser.currentScene.createNode("Appearance");
let Material15 = browser.currentScene.createNode("Material");
Material15.diffuseColor = new X3D.SFColor([1,0,0]);
Material15.transparency = 0.2;
material = Material15;

appearance = Appearance14;

Transform11YYY.child = new X3D.undefined();

Transform11ZZZ.child[0] = Shape12;

let Script16 = browser.currentScene.createNode("Script");
Script16.DEF = "DECLBubble_bubbleA_bounce";
Script17.getField("scale").setValue("1 1 1");
Script16YYY.field = new X3D.MFNode();

Script18.getField("translation").setValue("0 0 0");
Script16YYY.field = new X3D.MFNode();

Script19.getField("velocity").setValue("0 0 0");
Script16YYY.field = new X3D.MFNode();

Script20.getField("scalvel").setValue("0 0 0");
Script16YYY.field = new X3D.MFNode();

Script21.getField("set_fraction")Script16YYY.field = new X3D.MFNode();


Script16.setSourceCode(`ecmascript:\n"+
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
Transform11ZZZ.children[1] = Script16;

let TimeSensor22 = browser.currentScene.createNode("TimeSensor");
TimeSensor22.DEF = "DECLBubble_bubbleA_bubbleClock";
TimeSensor22.cycleInterval = 10;
TimeSensor22.loop = True;
Transform11ZZZ.children[2] = TimeSensor22;

let ROUTE23 = browser.currentScene.createNode("ROUTE");
ROUTE23.fromNode = "DECLBubble_bubbleA_bounce";
ROUTE23.fromField = "translation_changed";
ROUTE23.toNode = "DECLBubble_transformA";
ROUTE23.toField = "set_translation";
Transform11ZZZ.children[3] = ROUTE23;

let ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromNode = "DECLBubble_bubbleA_bounce";
ROUTE24.fromField = "scale_changed";
ROUTE24.toNode = "DECLBubble_transformA";
ROUTE24.toField = "set_scale";
Transform11ZZZ.children[4] = ROUTE24;

let ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromNode = "DECLBubble_bubbleA_bubbleClock";
ROUTE25.fromField = "fraction_changed";
ROUTE25.toNode = "DECLBubble_bubbleA_bounce";
ROUTE25.toField = "set_fraction";
Transform11ZZZ.children[5] = ROUTE25;

browser.currentScene.children[3] = Transform11;

let Transform26 = browser.currentScene.createNode("Transform");
Transform26.DEF = "DECLBubble_transformB";
let Shape27 = browser.currentScene.createNode("Shape");
let Sphere28 = browser.currentScene.createNode("Sphere");
Sphere28.radius = 0.25;
geometry = Sphere28;

let Appearance29 = browser.currentScene.createNode("Appearance");
let Material30 = browser.currentScene.createNode("Material");
Material30.diffuseColor = new X3D.SFColor([1,0,0]);
Material30.transparency = 0.2;
material = Material30;

appearance = Appearance29;

Transform26YYY.child = new X3D.undefined();

Transform26ZZZ.child[0] = Shape27;

let Script31 = browser.currentScene.createNode("Script");
Script31.DEF = "DECLBubble_bubbleB_bounce";
Script32.getField("scale").setValue("1 1 1");
Script31YYY.field = new X3D.MFNode();

Script33.getField("translation").setValue("0 0 0");
Script31YYY.field = new X3D.MFNode();

Script34.getField("velocity").setValue("0 0 0");
Script31YYY.field = new X3D.MFNode();

Script35.getField("scalvel").setValue("0 0 0");
Script31YYY.field = new X3D.MFNode();

Script36.getField("set_fraction")Script31YYY.field = new X3D.MFNode();


Script31.setSourceCode(`ecmascript:\n"+
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
Transform26ZZZ.children[1] = Script31;

let TimeSensor37 = browser.currentScene.createNode("TimeSensor");
TimeSensor37.DEF = "DECLBubble_bubbleB_bubbleClock";
TimeSensor37.cycleInterval = 10;
TimeSensor37.loop = True;
Transform26ZZZ.children[2] = TimeSensor37;

let ROUTE38 = browser.currentScene.createNode("ROUTE");
ROUTE38.fromNode = "DECLBubble_bubbleB_bounce";
ROUTE38.fromField = "translation_changed";
ROUTE38.toNode = "DECLBubble_transformB";
ROUTE38.toField = "set_translation";
Transform26ZZZ.children[3] = ROUTE38;

let ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromNode = "DECLBubble_bubbleB_bounce";
ROUTE39.fromField = "scale_changed";
ROUTE39.toNode = "DECLBubble_transformB";
ROUTE39.toField = "set_scale";
Transform26ZZZ.children[4] = ROUTE39;

let ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromNode = "DECLBubble_bubbleB_bubbleClock";
ROUTE40.fromField = "fraction_changed";
ROUTE40.toNode = "DECLBubble_bubbleB_bounce";
ROUTE40.toField = "set_fraction";
Transform26ZZZ.children[5] = ROUTE40;

browser.currentScene.children[4] = Transform26;

let Transform41 = browser.currentScene.createNode("Transform");
Transform41.DEF = "DECLBubble_transformC";
let Shape42 = browser.currentScene.createNode("Shape");
let Sphere43 = browser.currentScene.createNode("Sphere");
Sphere43.radius = 0.25;
geometry = Sphere43;

let Appearance44 = browser.currentScene.createNode("Appearance");
let Material45 = browser.currentScene.createNode("Material");
Material45.diffuseColor = new X3D.SFColor([1,0,0]);
Material45.transparency = 0.2;
material = Material45;

appearance = Appearance44;

Transform41YYY.child = new X3D.undefined();

Transform41ZZZ.child[0] = Shape42;

let Script46 = browser.currentScene.createNode("Script");
Script46.DEF = "DECLBubble_bubbleC_bounce";
Script47.getField("scale").setValue("1 1 1");
Script46YYY.field = new X3D.MFNode();

Script48.getField("translation").setValue("0 0 0");
Script46YYY.field = new X3D.MFNode();

Script49.getField("velocity").setValue("0 0 0");
Script46YYY.field = new X3D.MFNode();

Script50.getField("scalvel").setValue("0 0 0");
Script46YYY.field = new X3D.MFNode();

Script51.getField("set_fraction")Script46YYY.field = new X3D.MFNode();


Script46.setSourceCode(`ecmascript:\n"+
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
Transform41ZZZ.children[1] = Script46;

let TimeSensor52 = browser.currentScene.createNode("TimeSensor");
TimeSensor52.DEF = "DECLBubble_bubbleC_bubbleClock";
TimeSensor52.cycleInterval = 10;
TimeSensor52.loop = True;
Transform41ZZZ.children[2] = TimeSensor52;

let ROUTE53 = browser.currentScene.createNode("ROUTE");
ROUTE53.fromNode = "DECLBubble_bubbleC_bounce";
ROUTE53.fromField = "translation_changed";
ROUTE53.toNode = "DECLBubble_transformC";
ROUTE53.toField = "set_translation";
Transform41ZZZ.children[3] = ROUTE53;

let ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromNode = "DECLBubble_bubbleC_bounce";
ROUTE54.fromField = "scale_changed";
ROUTE54.toNode = "DECLBubble_transformC";
ROUTE54.toField = "set_scale";
Transform41ZZZ.children[4] = ROUTE54;

let ROUTE55 = browser.currentScene.createNode("ROUTE");
ROUTE55.fromNode = "DECLBubble_bubbleC_bubbleClock";
ROUTE55.fromField = "fraction_changed";
ROUTE55.toNode = "DECLBubble_bubbleC_bounce";
ROUTE55.toField = "set_fraction";
Transform41ZZZ.children[5] = ROUTE55;

browser.currentScene.children[5] = Transform41;

let Transform56 = browser.currentScene.createNode("Transform");
Transform56.DEF = "DECLBubble_transformD";
let Shape57 = browser.currentScene.createNode("Shape");
let Sphere58 = browser.currentScene.createNode("Sphere");
Sphere58.radius = 0.25;
geometry = Sphere58;

let Appearance59 = browser.currentScene.createNode("Appearance");
let Material60 = browser.currentScene.createNode("Material");
Material60.diffuseColor = new X3D.SFColor([1,0,0]);
Material60.transparency = 0.2;
material = Material60;

appearance = Appearance59;

Transform56YYY.child = new X3D.undefined();

Transform56ZZZ.child[0] = Shape57;

let Script61 = browser.currentScene.createNode("Script");
Script61.DEF = "DECLBubble_bubbleD_bounce";
Script62.getField("scale").setValue("1 1 1");
Script61YYY.field = new X3D.MFNode();

Script63.getField("translation").setValue("0 0 0");
Script61YYY.field = new X3D.MFNode();

Script64.getField("velocity").setValue("0 0 0");
Script61YYY.field = new X3D.MFNode();

Script65.getField("scalvel").setValue("0 0 0");
Script61YYY.field = new X3D.MFNode();

Script66.getField("set_fraction")Script61YYY.field = new X3D.MFNode();


Script61.setSourceCode(`ecmascript:\n"+
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
Transform56ZZZ.children[1] = Script61;

let TimeSensor67 = browser.currentScene.createNode("TimeSensor");
TimeSensor67.DEF = "DECLBubble_bubbleD_bubbleClock";
TimeSensor67.cycleInterval = 10;
TimeSensor67.loop = True;
Transform56ZZZ.children[2] = TimeSensor67;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromNode = "DECLBubble_bubbleD_bounce";
ROUTE68.fromField = "translation_changed";
ROUTE68.toNode = "DECLBubble_transformD";
ROUTE68.toField = "set_translation";
Transform56ZZZ.children[3] = ROUTE68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromNode = "DECLBubble_bubbleD_bounce";
ROUTE69.fromField = "scale_changed";
ROUTE69.toNode = "DECLBubble_transformD";
ROUTE69.toField = "set_scale";
Transform56ZZZ.children[4] = ROUTE69;

let ROUTE70 = browser.currentScene.createNode("ROUTE");
ROUTE70.fromNode = "DECLBubble_bubbleD_bubbleClock";
ROUTE70.fromField = "fraction_changed";
ROUTE70.toNode = "DECLBubble_bubbleD_bounce";
ROUTE70.toField = "set_fraction";
Transform56ZZZ.children[5] = ROUTE70;

browser.currentScene.children[6] = Transform56;

}
main ();

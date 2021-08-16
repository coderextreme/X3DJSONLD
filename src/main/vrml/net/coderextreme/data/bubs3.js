let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "bubs3.x3d";
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
meta6.content = "https://coderextreme.net/X3DJSONLD/bubs.x3d";
head1.meta[4] = meta6;

head = head1;

let NavigationInfo8 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo8.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo8;

let Viewpoint9 = browser.currentScene.createNode("Viewpoint");
Viewpoint9.position = new SFVec3f(new float[0,0,4]);
Viewpoint9.orientation = new SFRotation(new float[1,0,0,0]);
Viewpoint9.description = "Bubbles in action";
browser.currentScene.children[1] = Viewpoint9;

let Background10 = browser.currentScene.createNode("Background");
Background10.backUrl = new MFString(new java.lang.String["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"]);
Background10.bottomUrl = new MFString(new java.lang.String["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"]);
Background10.frontUrl = new MFString(new java.lang.String["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"]);
Background10.leftUrl = new MFString(new java.lang.String["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"]);
Background10.rightUrl = new MFString(new java.lang.String["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"]);
Background10.topUrl = new MFString(new java.lang.String["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"]);
browser.currentScene.children[2] = Background10;

let Transform11 = browser.currentScene.createNode("Transform");
Transform11.DEF = "DECLBubble_bubbleA";
let Shape12 = browser.currentScene.createNode("Shape");
let Sphere13 = browser.currentScene.createNode("Sphere");
Sphere13.radius = 0.25;
Shape12.geometry = Sphere13;

let Appearance14 = browser.currentScene.createNode("Appearance");
let Material15 = browser.currentScene.createNode("Material");
Material15.diffuseColor = new SFColor(new float[1,0,0]);
Material15.transparency = 0.2;
Appearance14.material = Material15;

Shape12.appearance = Appearance14;

Transform11.children = new MFNode();

Transform11.children[0] = Shape12;

let Script16 = browser.currentScene.createNode("Script");
Script16.DEF = "DECLBubble_bubbleA_bounce";
let field17 = browser.currentScene.createNode("field");
field17.name = "scale";
field17.accessType = "inputOutput";
field17.type = "SFVec3f";
field17.value = "1 1 1";
Script16.field = new MFNode();

Script16.field[0] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "translation";
field18.accessType = "inputOutput";
field18.type = "SFVec3f";
field18.value = "0 0 0";
Script16.field[1] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "velocity";
field19.accessType = "inputOutput";
field19.type = "SFVec3f";
field19.value = "0 0 0";
Script16.field[2] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "scalvel";
field20.accessType = "inputOutput";
field20.type = "SFVec3f";
field20.value = "0 0 0";
Script16.field[3] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "set_fraction";
field21.accessType = "inputOnly";
field21.type = "SFFloat";
Script16.field[4] = field21;


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
Transform11.children[1] = Script16;

let TimeSensor22 = browser.currentScene.createNode("TimeSensor");
TimeSensor22.DEF = "DECLBubble_bubbleA_bubbleClock";
TimeSensor22.cycleInterval = 10;
TimeSensor22.loop = True;
Transform11.children[2] = TimeSensor22;

let ROUTE23 = browser.currentScene.createNode("ROUTE");
ROUTE23.fromNode = "DECLBubble_bubbleA_bounce";
ROUTE23.fromField = "translation_changed";
ROUTE23.toNode = "DECLBubble_transform";
ROUTE23.toField = "set_translation";
Transform11.children[3] = ROUTE23;

let ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromNode = "DECLBubble_bubbleA_bounce";
ROUTE24.fromField = "scale_changed";
ROUTE24.toNode = "DECLBubble_transform";
ROUTE24.toField = "set_scale";
Transform11.children[4] = ROUTE24;

let ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromNode = "DECLBubble_bubbleA_bubbleClock";
ROUTE25.fromField = "fraction_changed";
ROUTE25.toNode = "DECLBubble_bubbleA_bounce";
ROUTE25.toField = "set_fraction";
Transform11.children[5] = ROUTE25;

browser.currentScene.children[3] = Transform11;

let Transform26 = browser.currentScene.createNode("Transform");
Transform26.DEF = "DECLBubble_bubbleB";
let Shape27 = browser.currentScene.createNode("Shape");
let Sphere28 = browser.currentScene.createNode("Sphere");
Sphere28.radius = 0.25;
Shape27.geometry = Sphere28;

let Appearance29 = browser.currentScene.createNode("Appearance");
let Material30 = browser.currentScene.createNode("Material");
Material30.diffuseColor = new SFColor(new float[1,0,0]);
Material30.transparency = 0.2;
Appearance29.material = Material30;

Shape27.appearance = Appearance29;

Transform26.children = new MFNode();

Transform26.children[0] = Shape27;

let Script31 = browser.currentScene.createNode("Script");
Script31.DEF = "DECLBubble_bubbleB_bounce";
let field32 = browser.currentScene.createNode("field");
field32.name = "scale";
field32.accessType = "inputOutput";
field32.type = "SFVec3f";
field32.value = "1 1 1";
Script31.field = new MFNode();

Script31.field[0] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "translation";
field33.accessType = "inputOutput";
field33.type = "SFVec3f";
field33.value = "0 0 0";
Script31.field[1] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "velocity";
field34.accessType = "inputOutput";
field34.type = "SFVec3f";
field34.value = "0 0 0";
Script31.field[2] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "scalvel";
field35.accessType = "inputOutput";
field35.type = "SFVec3f";
field35.value = "0 0 0";
Script31.field[3] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "set_fraction";
field36.accessType = "inputOnly";
field36.type = "SFFloat";
Script31.field[4] = field36;


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
Transform26.children[1] = Script31;

let TimeSensor37 = browser.currentScene.createNode("TimeSensor");
TimeSensor37.DEF = "DECLBubble_bubbleB_bubbleClock";
TimeSensor37.cycleInterval = 10;
TimeSensor37.loop = True;
Transform26.children[2] = TimeSensor37;

let ROUTE38 = browser.currentScene.createNode("ROUTE");
ROUTE38.fromNode = "DECLBubble_bubbleB_bounce";
ROUTE38.fromField = "translation_changed";
ROUTE38.toNode = "DECLBubble_transform";
ROUTE38.toField = "set_translation";
Transform26.children[3] = ROUTE38;

let ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromNode = "DECLBubble_bubbleB_bounce";
ROUTE39.fromField = "scale_changed";
ROUTE39.toNode = "DECLBubble_transform";
ROUTE39.toField = "set_scale";
Transform26.children[4] = ROUTE39;

let ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromNode = "DECLBubble_bubbleB_bubbleClock";
ROUTE40.fromField = "fraction_changed";
ROUTE40.toNode = "DECLBubble_bubbleB_bounce";
ROUTE40.toField = "set_fraction";
Transform26.children[5] = ROUTE40;

browser.currentScene.children[4] = Transform26;

let Transform41 = browser.currentScene.createNode("Transform");
Transform41.DEF = "DECLBubble_bubbleC";
let Shape42 = browser.currentScene.createNode("Shape");
let Sphere43 = browser.currentScene.createNode("Sphere");
Sphere43.radius = 0.25;
Shape42.geometry = Sphere43;

let Appearance44 = browser.currentScene.createNode("Appearance");
let Material45 = browser.currentScene.createNode("Material");
Material45.diffuseColor = new SFColor(new float[1,0,0]);
Material45.transparency = 0.2;
Appearance44.material = Material45;

Shape42.appearance = Appearance44;

Transform41.children = new MFNode();

Transform41.children[0] = Shape42;

let Script46 = browser.currentScene.createNode("Script");
Script46.DEF = "DECLBubble_bubbleC_bounce";
let field47 = browser.currentScene.createNode("field");
field47.name = "scale";
field47.accessType = "inputOutput";
field47.type = "SFVec3f";
field47.value = "1 1 1";
Script46.field = new MFNode();

Script46.field[0] = field47;

let field48 = browser.currentScene.createNode("field");
field48.name = "translation";
field48.accessType = "inputOutput";
field48.type = "SFVec3f";
field48.value = "0 0 0";
Script46.field[1] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "velocity";
field49.accessType = "inputOutput";
field49.type = "SFVec3f";
field49.value = "0 0 0";
Script46.field[2] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "scalvel";
field50.accessType = "inputOutput";
field50.type = "SFVec3f";
field50.value = "0 0 0";
Script46.field[3] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "set_fraction";
field51.accessType = "inputOnly";
field51.type = "SFFloat";
Script46.field[4] = field51;


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
Transform41.children[1] = Script46;

let TimeSensor52 = browser.currentScene.createNode("TimeSensor");
TimeSensor52.DEF = "DECLBubble_bubbleC_bubbleClock";
TimeSensor52.cycleInterval = 10;
TimeSensor52.loop = True;
Transform41.children[2] = TimeSensor52;

let ROUTE53 = browser.currentScene.createNode("ROUTE");
ROUTE53.fromNode = "DECLBubble_bubbleC_bounce";
ROUTE53.fromField = "translation_changed";
ROUTE53.toNode = "DECLBubble_transform";
ROUTE53.toField = "set_translation";
Transform41.children[3] = ROUTE53;

let ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromNode = "DECLBubble_bubbleC_bounce";
ROUTE54.fromField = "scale_changed";
ROUTE54.toNode = "DECLBubble_transform";
ROUTE54.toField = "set_scale";
Transform41.children[4] = ROUTE54;

let ROUTE55 = browser.currentScene.createNode("ROUTE");
ROUTE55.fromNode = "DECLBubble_bubbleC_bubbleClock";
ROUTE55.fromField = "fraction_changed";
ROUTE55.toNode = "DECLBubble_bubbleC_bounce";
ROUTE55.toField = "set_fraction";
Transform41.children[5] = ROUTE55;

browser.currentScene.children[5] = Transform41;

let Transform56 = browser.currentScene.createNode("Transform");
Transform56.DEF = "DECLBubble_bubbleD";
let Shape57 = browser.currentScene.createNode("Shape");
let Sphere58 = browser.currentScene.createNode("Sphere");
Sphere58.radius = 0.25;
Shape57.geometry = Sphere58;

let Appearance59 = browser.currentScene.createNode("Appearance");
let Material60 = browser.currentScene.createNode("Material");
Material60.diffuseColor = new SFColor(new float[1,0,0]);
Material60.transparency = 0.2;
Appearance59.material = Material60;

Shape57.appearance = Appearance59;

Transform56.children = new MFNode();

Transform56.children[0] = Shape57;

let Script61 = browser.currentScene.createNode("Script");
Script61.DEF = "DECLBubble_bubbleD_bounce";
let field62 = browser.currentScene.createNode("field");
field62.name = "scale";
field62.accessType = "inputOutput";
field62.type = "SFVec3f";
field62.value = "1 1 1";
Script61.field = new MFNode();

Script61.field[0] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "translation";
field63.accessType = "inputOutput";
field63.type = "SFVec3f";
field63.value = "0 0 0";
Script61.field[1] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "velocity";
field64.accessType = "inputOutput";
field64.type = "SFVec3f";
field64.value = "0 0 0";
Script61.field[2] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "scalvel";
field65.accessType = "inputOutput";
field65.type = "SFVec3f";
field65.value = "0 0 0";
Script61.field[3] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "set_fraction";
field66.accessType = "inputOnly";
field66.type = "SFFloat";
Script61.field[4] = field66;


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
Transform56.children[1] = Script61;

let TimeSensor67 = browser.currentScene.createNode("TimeSensor");
TimeSensor67.DEF = "DECLBubble_bubbleD_bubbleClock";
TimeSensor67.cycleInterval = 10;
TimeSensor67.loop = True;
Transform56.children[2] = TimeSensor67;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromNode = "DECLBubble_bubbleD_bounce";
ROUTE68.fromField = "translation_changed";
ROUTE68.toNode = "DECLBubble_transform";
ROUTE68.toField = "set_translation";
Transform56.children[3] = ROUTE68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromNode = "DECLBubble_bubbleD_bounce";
ROUTE69.fromField = "scale_changed";
ROUTE69.toNode = "DECLBubble_transform";
ROUTE69.toField = "set_scale";
Transform56.children[4] = ROUTE69;

let ROUTE70 = browser.currentScene.createNode("ROUTE");
ROUTE70.fromNode = "DECLBubble_bubbleD_bubbleClock";
ROUTE70.fromField = "fraction_changed";
ROUTE70.toNode = "DECLBubble_bubbleD_bounce";
ROUTE70.toField = "set_fraction";
Transform56.children[5] = ROUTE70;

browser.currentScene.children[6] = Transform56;


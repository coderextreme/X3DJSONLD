let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
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

head = head1;

let NavigationInfo7 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo7.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo7;

let Viewpoint8 = browser.currentScene.createNode("Viewpoint");
Viewpoint8.description = "Bubbles in action";
Viewpoint8.position = new SFVec3f(new float[0,0,4]);
browser.currentScene.children[1] = Viewpoint8;

let Background9 = browser.currentScene.createNode("Background");
Background9.frontUrl = new MFString(new java.lang.String["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"]);
Background9.backUrl = new MFString(new java.lang.String["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"]);
Background9.leftUrl = new MFString(new java.lang.String["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"]);
Background9.rightUrl = new MFString(new java.lang.String["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"]);
Background9.topUrl = new MFString(new java.lang.String["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"]);
Background9.bottomUrl = new MFString(new java.lang.String["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"]);
browser.currentScene.children[2] = Background9;

let Transform10 = browser.currentScene.createNode("Transform");
Transform10.DEF = "DECLBubble_bubbleA";
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
Script15.DEF = "DECLBubble_bubbleA_bounce";
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
Transform10.children[1] = Script15;

let TimeSensor21 = browser.currentScene.createNode("TimeSensor");
TimeSensor21.DEF = "DECLBubble_bubbleA_bubbleClock";
TimeSensor21.cycleInterval = 10;
TimeSensor21.loop = True;
Transform10.children[2] = TimeSensor21;

browser.currentScene.children[3] = Transform10;

let Transform22 = browser.currentScene.createNode("Transform");
Transform22.DEF = "DECLBubble_bubbleB";
let Shape23 = browser.currentScene.createNode("Shape");
let Appearance24 = browser.currentScene.createNode("Appearance");
let Material25 = browser.currentScene.createNode("Material");
Material25.diffuseColor = new SFColor(new float[1,0,0]);
Material25.transparency = 0.2;
Appearance24.material = Material25;

Shape23.appearance = Appearance24;

let Sphere26 = browser.currentScene.createNode("Sphere");
Sphere26.radius = 0.25;
Shape23.geometry = Sphere26;

Transform22.child = new undefined();

Transform22.child[0] = Shape23;

let Script27 = browser.currentScene.createNode("Script");
Script27.DEF = "DECLBubble_bubbleB_bounce";
let field28 = browser.currentScene.createNode("field");
field28.accessType = "inputOutput";
field28.type = "SFVec3f";
field28.name = "scale";
field28.value = "1 1 1";
Script27.field = new MFNode();

Script27.field[0] = field28;

let field29 = browser.currentScene.createNode("field");
field29.accessType = "inputOutput";
field29.type = "SFVec3f";
field29.name = "translation";
Script27.field[1] = field29;

let field30 = browser.currentScene.createNode("field");
field30.accessType = "inputOutput";
field30.type = "SFVec3f";
field30.name = "velocity";
Script27.field[2] = field30;

let field31 = browser.currentScene.createNode("field");
field31.accessType = "inputOutput";
field31.type = "SFVec3f";
field31.name = "scalvel";
Script27.field[3] = field31;

let field32 = browser.currentScene.createNode("field");
field32.accessType = "inputOnly";
field32.type = "SFFloat";
field32.name = "set_fraction";
Script27.field[4] = field32;


Script27.setSourceCode(`ecmascript:\n"+
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
Transform22.children[1] = Script27;

let TimeSensor33 = browser.currentScene.createNode("TimeSensor");
TimeSensor33.DEF = "DECLBubble_bubbleB_bubbleClock";
TimeSensor33.cycleInterval = 10;
TimeSensor33.loop = True;
Transform22.children[2] = TimeSensor33;

browser.currentScene.children[4] = Transform22;

let Transform34 = browser.currentScene.createNode("Transform");
Transform34.DEF = "DECLBubble_bubbleC";
let Shape35 = browser.currentScene.createNode("Shape");
let Appearance36 = browser.currentScene.createNode("Appearance");
let Material37 = browser.currentScene.createNode("Material");
Material37.diffuseColor = new SFColor(new float[1,0,0]);
Material37.transparency = 0.2;
Appearance36.material = Material37;

Shape35.appearance = Appearance36;

let Sphere38 = browser.currentScene.createNode("Sphere");
Sphere38.radius = 0.25;
Shape35.geometry = Sphere38;

Transform34.child = new undefined();

Transform34.child[0] = Shape35;

let Script39 = browser.currentScene.createNode("Script");
Script39.DEF = "DECLBubble_bubbleC_bounce";
let field40 = browser.currentScene.createNode("field");
field40.accessType = "inputOutput";
field40.type = "SFVec3f";
field40.name = "scale";
field40.value = "1 1 1";
Script39.field = new MFNode();

Script39.field[0] = field40;

let field41 = browser.currentScene.createNode("field");
field41.accessType = "inputOutput";
field41.type = "SFVec3f";
field41.name = "translation";
Script39.field[1] = field41;

let field42 = browser.currentScene.createNode("field");
field42.accessType = "inputOutput";
field42.type = "SFVec3f";
field42.name = "velocity";
Script39.field[2] = field42;

let field43 = browser.currentScene.createNode("field");
field43.accessType = "inputOutput";
field43.type = "SFVec3f";
field43.name = "scalvel";
Script39.field[3] = field43;

let field44 = browser.currentScene.createNode("field");
field44.accessType = "inputOnly";
field44.type = "SFFloat";
field44.name = "set_fraction";
Script39.field[4] = field44;


Script39.setSourceCode(`ecmascript:\n"+
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
Transform34.children[1] = Script39;

let TimeSensor45 = browser.currentScene.createNode("TimeSensor");
TimeSensor45.DEF = "DECLBubble_bubbleC_bubbleClock";
TimeSensor45.cycleInterval = 10;
TimeSensor45.loop = True;
Transform34.children[2] = TimeSensor45;

browser.currentScene.children[5] = Transform34;

let Transform46 = browser.currentScene.createNode("Transform");
Transform46.DEF = "DECLBubble_bubbleD";
let Shape47 = browser.currentScene.createNode("Shape");
let Appearance48 = browser.currentScene.createNode("Appearance");
let Material49 = browser.currentScene.createNode("Material");
Material49.diffuseColor = new SFColor(new float[1,0,0]);
Material49.transparency = 0.2;
Appearance48.material = Material49;

Shape47.appearance = Appearance48;

let Sphere50 = browser.currentScene.createNode("Sphere");
Sphere50.radius = 0.25;
Shape47.geometry = Sphere50;

Transform46.child = new undefined();

Transform46.child[0] = Shape47;

let Script51 = browser.currentScene.createNode("Script");
Script51.DEF = "DECLBubble_bubbleD_bounce";
let field52 = browser.currentScene.createNode("field");
field52.accessType = "inputOutput";
field52.type = "SFVec3f";
field52.name = "scale";
field52.value = "1 1 1";
Script51.field = new MFNode();

Script51.field[0] = field52;

let field53 = browser.currentScene.createNode("field");
field53.accessType = "inputOutput";
field53.type = "SFVec3f";
field53.name = "translation";
Script51.field[1] = field53;

let field54 = browser.currentScene.createNode("field");
field54.accessType = "inputOutput";
field54.type = "SFVec3f";
field54.name = "velocity";
Script51.field[2] = field54;

let field55 = browser.currentScene.createNode("field");
field55.accessType = "inputOutput";
field55.type = "SFVec3f";
field55.name = "scalvel";
Script51.field[3] = field55;

let field56 = browser.currentScene.createNode("field");
field56.accessType = "inputOnly";
field56.type = "SFFloat";
field56.name = "set_fraction";
Script51.field[4] = field56;


Script51.setSourceCode(`ecmascript:\n"+
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
Transform46.children[1] = Script51;

let TimeSensor57 = browser.currentScene.createNode("TimeSensor");
TimeSensor57.DEF = "DECLBubble_bubbleD_bubbleClock";
TimeSensor57.cycleInterval = 10;
TimeSensor57.loop = True;
Transform46.children[2] = TimeSensor57;

browser.currentScene.children[6] = Transform46;

let ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromNode = "DECLBubble_bubbleA_bubbleClock";
ROUTE58.fromField = "fraction_changed";
ROUTE58.toNode = "DECLBubble_bubbleA_bounce";
ROUTE58.toField = "set_fraction";
browser.currentScene.children[7] = ROUTE58;

let ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromNode = "DECLBubble_bubbleB_bubbleClock";
ROUTE59.fromField = "fraction_changed";
ROUTE59.toNode = "DECLBubble_bubbleB_bounce";
ROUTE59.toField = "set_fraction";
browser.currentScene.children[8] = ROUTE59;

let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromNode = "DECLBubble_bubbleC_bubbleClock";
ROUTE60.fromField = "fraction_changed";
ROUTE60.toNode = "DECLBubble_bubbleC_bounce";
ROUTE60.toField = "set_fraction";
browser.currentScene.children[9] = ROUTE60;

let ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromNode = "DECLBubble_bubbleD_bubbleClock";
ROUTE61.fromField = "fraction_changed";
ROUTE61.toNode = "DECLBubble_bubbleD_bounce";
ROUTE61.toField = "set_fraction";
browser.currentScene.children[10] = ROUTE61;


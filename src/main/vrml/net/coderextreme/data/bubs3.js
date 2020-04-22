var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo2.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.position = new SFVec3f(new float[0,0,4]);
Viewpoint3.orientation = new SFRotation(new float[1,0,0,0]);
Viewpoint3.description = "Bubbles in action";
browser.currentScene.children[1] = Viewpoint3;

Background4 = browser.currentScene.createNode("Background");
Background4.backUrl = new MFString(new java.lang.String["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"]);
Background4.bottomUrl = new MFString(new java.lang.String["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"]);
Background4.frontUrl = new MFString(new java.lang.String["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"]);
Background4.leftUrl = new MFString(new java.lang.String["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"]);
Background4.rightUrl = new MFString(new java.lang.String["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"]);
Background4.topUrl = new MFString(new java.lang.String["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"]);
browser.currentScene.children[2] = Background4;

Transform5 = browser.currentScene.createNode("Transform");
Transform5.DEF = "DECLBubble_bubbleA";
Shape6 = browser.currentScene.createNode("Shape");
Sphere7 = browser.currentScene.createNode("Sphere");
Sphere7.radius = 0.25;
Shape6.geometry = Sphere7;

Appearance8 = browser.currentScene.createNode("Appearance");
Material9 = browser.currentScene.createNode("Material");
Material9.diffuseColor = new SFColor(new float[1,0,0]);
Material9.transparency = 0.2;
Appearance8.material = Material9;

Shape6.appearance = Appearance8;

Transform5.children = new MFNode();

Transform5.children[0] = Shape6;

Script10 = browser.currentScene.createNode("Script");
Script10.DEF = "DECLBubble_bubbleA_bounce";
field11 = browser.currentScene.createNode("field");
field11.name = "scale";
field11.accessType = "inputOutput";
field11.type = "SFVec3f";
field11.value = "1 1 1";
Script10.field = new MFNode();

Script10.field[0] = field11;

field12 = browser.currentScene.createNode("field");
field12.name = "translation";
field12.accessType = "inputOutput";
field12.type = "SFVec3f";
field12.value = "0 0 0";
Script10.field[1] = field12;

field13 = browser.currentScene.createNode("field");
field13.name = "velocity";
field13.accessType = "inputOutput";
field13.type = "SFVec3f";
field13.value = "0 0 0";
Script10.field[2] = field13;

field14 = browser.currentScene.createNode("field");
field14.name = "scalvel";
field14.accessType = "inputOutput";
field14.type = "SFVec3f";
field14.value = "0 0 0";
Script10.field[3] = field14;

field15 = browser.currentScene.createNode("field");
field15.name = "set_fraction";
field15.accessType = "inputOnly";
field15.type = "SFFloat";
Script10.field[4] = field15;


Script10.setSourceCode(`ecmascript:\n"+
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
Transform5.children[1] = Script10;

TimeSensor16 = browser.currentScene.createNode("TimeSensor");
TimeSensor16.DEF = "DECLBubble_bubbleA_bubbleClock";
TimeSensor16.cycleInterval = 10;
TimeSensor16.loop = True;
Transform5.children[2] = TimeSensor16;

ROUTE17 = browser.currentScene.createNode("ROUTE");
ROUTE17.fromNode = "DECLBubble_bubbleA_bounce";
ROUTE17.fromField = "translation_changed";
ROUTE17.toNode = "DECLBubble_transform";
ROUTE17.toField = "set_translation";
Transform5.children[3] = ROUTE17;

ROUTE18 = browser.currentScene.createNode("ROUTE");
ROUTE18.fromNode = "DECLBubble_bubbleA_bounce";
ROUTE18.fromField = "scale_changed";
ROUTE18.toNode = "DECLBubble_transform";
ROUTE18.toField = "set_scale";
Transform5.children[4] = ROUTE18;

ROUTE19 = browser.currentScene.createNode("ROUTE");
ROUTE19.fromNode = "DECLBubble_bubbleA_bubbleClock";
ROUTE19.fromField = "fraction_changed";
ROUTE19.toNode = "DECLBubble_bubbleA_bounce";
ROUTE19.toField = "set_fraction";
Transform5.children[5] = ROUTE19;

browser.currentScene.children[3] = Transform5;

Transform20 = browser.currentScene.createNode("Transform");
Transform20.DEF = "DECLBubble_bubbleB";
Shape21 = browser.currentScene.createNode("Shape");
Sphere22 = browser.currentScene.createNode("Sphere");
Sphere22.radius = 0.25;
Shape21.geometry = Sphere22;

Appearance23 = browser.currentScene.createNode("Appearance");
Material24 = browser.currentScene.createNode("Material");
Material24.diffuseColor = new SFColor(new float[1,0,0]);
Material24.transparency = 0.2;
Appearance23.material = Material24;

Shape21.appearance = Appearance23;

Transform20.children = new MFNode();

Transform20.children[0] = Shape21;

Script25 = browser.currentScene.createNode("Script");
Script25.DEF = "DECLBubble_bubbleB_bounce";
field26 = browser.currentScene.createNode("field");
field26.name = "scale";
field26.accessType = "inputOutput";
field26.type = "SFVec3f";
field26.value = "1 1 1";
Script25.field = new MFNode();

Script25.field[0] = field26;

field27 = browser.currentScene.createNode("field");
field27.name = "translation";
field27.accessType = "inputOutput";
field27.type = "SFVec3f";
field27.value = "0 0 0";
Script25.field[1] = field27;

field28 = browser.currentScene.createNode("field");
field28.name = "velocity";
field28.accessType = "inputOutput";
field28.type = "SFVec3f";
field28.value = "0 0 0";
Script25.field[2] = field28;

field29 = browser.currentScene.createNode("field");
field29.name = "scalvel";
field29.accessType = "inputOutput";
field29.type = "SFVec3f";
field29.value = "0 0 0";
Script25.field[3] = field29;

field30 = browser.currentScene.createNode("field");
field30.name = "set_fraction";
field30.accessType = "inputOnly";
field30.type = "SFFloat";
Script25.field[4] = field30;


Script25.setSourceCode(`ecmascript:\n"+
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
Transform20.children[1] = Script25;

TimeSensor31 = browser.currentScene.createNode("TimeSensor");
TimeSensor31.DEF = "DECLBubble_bubbleB_bubbleClock";
TimeSensor31.cycleInterval = 10;
TimeSensor31.loop = True;
Transform20.children[2] = TimeSensor31;

ROUTE32 = browser.currentScene.createNode("ROUTE");
ROUTE32.fromNode = "DECLBubble_bubbleB_bounce";
ROUTE32.fromField = "translation_changed";
ROUTE32.toNode = "DECLBubble_transform";
ROUTE32.toField = "set_translation";
Transform20.children[3] = ROUTE32;

ROUTE33 = browser.currentScene.createNode("ROUTE");
ROUTE33.fromNode = "DECLBubble_bubbleB_bounce";
ROUTE33.fromField = "scale_changed";
ROUTE33.toNode = "DECLBubble_transform";
ROUTE33.toField = "set_scale";
Transform20.children[4] = ROUTE33;

ROUTE34 = browser.currentScene.createNode("ROUTE");
ROUTE34.fromNode = "DECLBubble_bubbleB_bubbleClock";
ROUTE34.fromField = "fraction_changed";
ROUTE34.toNode = "DECLBubble_bubbleB_bounce";
ROUTE34.toField = "set_fraction";
Transform20.children[5] = ROUTE34;

browser.currentScene.children[4] = Transform20;

Transform35 = browser.currentScene.createNode("Transform");
Transform35.DEF = "DECLBubble_bubbleC";
Shape36 = browser.currentScene.createNode("Shape");
Sphere37 = browser.currentScene.createNode("Sphere");
Sphere37.radius = 0.25;
Shape36.geometry = Sphere37;

Appearance38 = browser.currentScene.createNode("Appearance");
Material39 = browser.currentScene.createNode("Material");
Material39.diffuseColor = new SFColor(new float[1,0,0]);
Material39.transparency = 0.2;
Appearance38.material = Material39;

Shape36.appearance = Appearance38;

Transform35.children = new MFNode();

Transform35.children[0] = Shape36;

Script40 = browser.currentScene.createNode("Script");
Script40.DEF = "DECLBubble_bubbleC_bounce";
field41 = browser.currentScene.createNode("field");
field41.name = "scale";
field41.accessType = "inputOutput";
field41.type = "SFVec3f";
field41.value = "1 1 1";
Script40.field = new MFNode();

Script40.field[0] = field41;

field42 = browser.currentScene.createNode("field");
field42.name = "translation";
field42.accessType = "inputOutput";
field42.type = "SFVec3f";
field42.value = "0 0 0";
Script40.field[1] = field42;

field43 = browser.currentScene.createNode("field");
field43.name = "velocity";
field43.accessType = "inputOutput";
field43.type = "SFVec3f";
field43.value = "0 0 0";
Script40.field[2] = field43;

field44 = browser.currentScene.createNode("field");
field44.name = "scalvel";
field44.accessType = "inputOutput";
field44.type = "SFVec3f";
field44.value = "0 0 0";
Script40.field[3] = field44;

field45 = browser.currentScene.createNode("field");
field45.name = "set_fraction";
field45.accessType = "inputOnly";
field45.type = "SFFloat";
Script40.field[4] = field45;


Script40.setSourceCode(`ecmascript:\n"+
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
Transform35.children[1] = Script40;

TimeSensor46 = browser.currentScene.createNode("TimeSensor");
TimeSensor46.DEF = "DECLBubble_bubbleC_bubbleClock";
TimeSensor46.cycleInterval = 10;
TimeSensor46.loop = True;
Transform35.children[2] = TimeSensor46;

ROUTE47 = browser.currentScene.createNode("ROUTE");
ROUTE47.fromNode = "DECLBubble_bubbleC_bounce";
ROUTE47.fromField = "translation_changed";
ROUTE47.toNode = "DECLBubble_transform";
ROUTE47.toField = "set_translation";
Transform35.children[3] = ROUTE47;

ROUTE48 = browser.currentScene.createNode("ROUTE");
ROUTE48.fromNode = "DECLBubble_bubbleC_bounce";
ROUTE48.fromField = "scale_changed";
ROUTE48.toNode = "DECLBubble_transform";
ROUTE48.toField = "set_scale";
Transform35.children[4] = ROUTE48;

ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromNode = "DECLBubble_bubbleC_bubbleClock";
ROUTE49.fromField = "fraction_changed";
ROUTE49.toNode = "DECLBubble_bubbleC_bounce";
ROUTE49.toField = "set_fraction";
Transform35.children[5] = ROUTE49;

browser.currentScene.children[5] = Transform35;

Transform50 = browser.currentScene.createNode("Transform");
Transform50.DEF = "DECLBubble_bubbleD";
Shape51 = browser.currentScene.createNode("Shape");
Sphere52 = browser.currentScene.createNode("Sphere");
Sphere52.radius = 0.25;
Shape51.geometry = Sphere52;

Appearance53 = browser.currentScene.createNode("Appearance");
Material54 = browser.currentScene.createNode("Material");
Material54.diffuseColor = new SFColor(new float[1,0,0]);
Material54.transparency = 0.2;
Appearance53.material = Material54;

Shape51.appearance = Appearance53;

Transform50.children = new MFNode();

Transform50.children[0] = Shape51;

Script55 = browser.currentScene.createNode("Script");
Script55.DEF = "DECLBubble_bubbleD_bounce";
field56 = browser.currentScene.createNode("field");
field56.name = "scale";
field56.accessType = "inputOutput";
field56.type = "SFVec3f";
field56.value = "1 1 1";
Script55.field = new MFNode();

Script55.field[0] = field56;

field57 = browser.currentScene.createNode("field");
field57.name = "translation";
field57.accessType = "inputOutput";
field57.type = "SFVec3f";
field57.value = "0 0 0";
Script55.field[1] = field57;

field58 = browser.currentScene.createNode("field");
field58.name = "velocity";
field58.accessType = "inputOutput";
field58.type = "SFVec3f";
field58.value = "0 0 0";
Script55.field[2] = field58;

field59 = browser.currentScene.createNode("field");
field59.name = "scalvel";
field59.accessType = "inputOutput";
field59.type = "SFVec3f";
field59.value = "0 0 0";
Script55.field[3] = field59;

field60 = browser.currentScene.createNode("field");
field60.name = "set_fraction";
field60.accessType = "inputOnly";
field60.type = "SFFloat";
Script55.field[4] = field60;


Script55.setSourceCode(`ecmascript:\n"+
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
Transform50.children[1] = Script55;

TimeSensor61 = browser.currentScene.createNode("TimeSensor");
TimeSensor61.DEF = "DECLBubble_bubbleD_bubbleClock";
TimeSensor61.cycleInterval = 10;
TimeSensor61.loop = True;
Transform50.children[2] = TimeSensor61;

ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromNode = "DECLBubble_bubbleD_bounce";
ROUTE62.fromField = "translation_changed";
ROUTE62.toNode = "DECLBubble_transform";
ROUTE62.toField = "set_translation";
Transform50.children[3] = ROUTE62;

ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "DECLBubble_bubbleD_bounce";
ROUTE63.fromField = "scale_changed";
ROUTE63.toNode = "DECLBubble_transform";
ROUTE63.toField = "set_scale";
Transform50.children[4] = ROUTE63;

ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromNode = "DECLBubble_bubbleD_bubbleClock";
ROUTE64.fromField = "fraction_changed";
ROUTE64.toNode = "DECLBubble_bubbleD_bounce";
ROUTE64.toField = "set_fraction";
Transform50.children[5] = ROUTE64;

browser.currentScene.children[6] = Transform50;


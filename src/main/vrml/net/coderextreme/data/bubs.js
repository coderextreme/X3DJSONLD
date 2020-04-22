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

ProtoDeclare5 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare5.name = "Bubble";
ProtoBody6 = browser.currentScene.createNode("ProtoBody");
Transform7 = browser.currentScene.createNode("Transform");
Transform7.DEF = "transform";
Shape8 = browser.currentScene.createNode("Shape");
Sphere9 = browser.currentScene.createNode("Sphere");
Sphere9.radius = 0.25;
Shape8.geometry = Sphere9;

Appearance10 = browser.currentScene.createNode("Appearance");
Material11 = browser.currentScene.createNode("Material");
Material11.diffuseColor = new SFColor(new float[1,0,0]);
Material11.transparency = 0.2;
Appearance10.material = Material11;

Shape8.appearance = Appearance10;

Transform7.children = new MFNode();

Transform7.children[0] = Shape8;

Script12 = browser.currentScene.createNode("Script");
Script12.DEF = "bounce1";
field13 = browser.currentScene.createNode("field");
field13.name = "scale";
field13.accessType = "inputOutput";
field13.type = "SFVec3f";
field13.value = "1 1 1";
Script12.field = new MFNode();

Script12.field[0] = field13;

field14 = browser.currentScene.createNode("field");
field14.name = "translation";
field14.accessType = "inputOutput";
field14.type = "SFVec3f";
field14.value = "0 0 0";
Script12.field[1] = field14;

field15 = browser.currentScene.createNode("field");
field15.name = "velocity";
field15.accessType = "inputOutput";
field15.type = "SFVec3f";
field15.value = "0 0 0";
Script12.field[2] = field15;

field16 = browser.currentScene.createNode("field");
field16.name = "scalvel";
field16.accessType = "inputOutput";
field16.type = "SFVec3f";
field16.value = "0 0 0";
Script12.field[3] = field16;

field17 = browser.currentScene.createNode("field");
field17.name = "set_fraction";
field17.accessType = "inputOnly";
field17.type = "SFFloat";
Script12.field[4] = field17;


Script12.setSourceCode(`ecmascript:\n"+
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
Transform7.children[1] = Script12;

TimeSensor18 = browser.currentScene.createNode("TimeSensor");
TimeSensor18.DEF = "bubbleClock";
TimeSensor18.cycleInterval = 10;
TimeSensor18.loop = True;
Transform7.children[2] = TimeSensor18;

ROUTE19 = browser.currentScene.createNode("ROUTE");
ROUTE19.fromNode = "bounce1";
ROUTE19.fromField = "translation_changed";
ROUTE19.toNode = "transform";
ROUTE19.toField = "set_translation";
Transform7.children[3] = ROUTE19;

ROUTE20 = browser.currentScene.createNode("ROUTE");
ROUTE20.fromNode = "bounce1";
ROUTE20.fromField = "scale_changed";
ROUTE20.toNode = "transform";
ROUTE20.toField = "set_scale";
Transform7.children[4] = ROUTE20;

ROUTE21 = browser.currentScene.createNode("ROUTE");
ROUTE21.fromNode = "bubbleClock";
ROUTE21.fromField = "fraction_changed";
ROUTE21.toNode = "bounce1";
ROUTE21.toField = "set_fraction";
Transform7.children[5] = ROUTE21;

ProtoBody6.children = new MFNode();

ProtoBody6.children[0] = Transform7;

ProtoDeclare5.protoBody = ProtoBody6;

browser.currentScene.children[3] = ProtoDeclare5;

ProtoInstance22 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance22.name = "Bubble";
ProtoInstance22.DEF = "bubbleA";
browser.currentScene.children[4] = ProtoInstance22;

ProtoInstance23 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance23.name = "Bubble";
ProtoInstance23.DEF = "bubbleB";
browser.currentScene.children[5] = ProtoInstance23;

ProtoInstance24 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance24.name = "Bubble";
ProtoInstance24.DEF = "bubbleC";
browser.currentScene.children[6] = ProtoInstance24;

ProtoInstance25 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance25.name = "Bubble";
ProtoInstance25.DEF = "bubbleD";
browser.currentScene.children[7] = ProtoInstance25;


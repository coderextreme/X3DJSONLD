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
Viewpoint3.description = "Bubbles in action";
browser.currentScene.children[1] = Viewpoint3;

let Background4 = browser.currentScene.createNode("Background");
Background4.backUrl = new MFString(new java.lang.String["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"]);
Background4.bottomUrl = new MFString(new java.lang.String["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"]);
Background4.frontUrl = new MFString(new java.lang.String["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"]);
Background4.leftUrl = new MFString(new java.lang.String["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"]);
Background4.rightUrl = new MFString(new java.lang.String["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"]);
Background4.topUrl = new MFString(new java.lang.String["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"]);
Background4.skyColor = new MFColor(new float[0,0,0]);
Background4.transparency = 0;
browser.currentScene.children[2] = Background4;

let Transform5 = browser.currentScene.createNode("Transform");
Transform5.DEF = "DECLBubble_bubbleA";
Transform5.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform5.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape6 = browser.currentScene.createNode("Shape");
Shape6.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape6.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Sphere7 = browser.currentScene.createNode("Sphere");
Sphere7.radius = 0.25;
Shape6.geometry = Sphere7;

let Appearance8 = browser.currentScene.createNode("Appearance");
let Material9 = browser.currentScene.createNode("Material");
Material9.diffuseColor = new SFColor(new float[1,0,0]);
Material9.transparency = 0.2;
Appearance8.material = Material9;

Shape6.appearance = Appearance8;

Transform5.children = new MFNode();

Transform5.children[0] = Shape6;

let TimeSensor10 = browser.currentScene.createNode("TimeSensor");
TimeSensor10.DEF = "DECLBubble_bubbleA_bubbleClock";
TimeSensor10.cycleInterval = 10;
TimeSensor10.loop = True;
Transform5.children[1] = TimeSensor10;

let ROUTE11 = browser.currentScene.createNode("ROUTE");
ROUTE11.fromNode = "DECLBubble_bubbleA_bounce";
ROUTE11.fromField = "translation_changed";
ROUTE11.toNode = "DECLBubble_transform";
ROUTE11.toField = "set_translation";
Transform5.children[2] = ROUTE11;

let ROUTE12 = browser.currentScene.createNode("ROUTE");
ROUTE12.fromNode = "DECLBubble_bubbleA_bounce";
ROUTE12.fromField = "scale_changed";
ROUTE12.toNode = "DECLBubble_transform";
ROUTE12.toField = "set_scale";
Transform5.children[3] = ROUTE12;

let ROUTE13 = browser.currentScene.createNode("ROUTE");
ROUTE13.fromNode = "DECLBubble_bubbleA_bubbleClock";
ROUTE13.fromField = "fraction_changed";
ROUTE13.toNode = "DECLBubble_bubbleA_bounce";
ROUTE13.toField = "set_fraction";
Transform5.children[4] = ROUTE13;

let X3DScript14 = browser.currentScene.createNode("X3DScript");
X3DScript14.DEF = "DECLBubble_bubbleA_bounce";
let field15 = browser.currentScene.createNode("field");
field15.name = "scale";
field15.accessType = "inputOutput";
field15.type = "SFVec3f";
field15.value = "1 1 1";
X3DScript14.field = new MFNode();

X3DScript14.field[0] = field15;

let field16 = browser.currentScene.createNode("field");
field16.name = "translation";
field16.accessType = "inputOutput";
field16.type = "SFVec3f";
field16.value = "0 0 0";
X3DScript14.field[1] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "velocity";
field17.accessType = "inputOutput";
field17.type = "SFVec3f";
field17.value = "0 0 0";
X3DScript14.field[2] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "scalvel";
field18.accessType = "inputOutput";
field18.type = "SFVec3f";
field18.value = "0 0 0";
X3DScript14.field[3] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "set_fraction";
field19.accessType = "inputOnly";
field19.type = "SFFloat";
X3DScript14.field[4] = field19;

Transform5.x3DScript[5] = X3DScript14;

browser.currentScene.children[3] = Transform5;

let Transform20 = browser.currentScene.createNode("Transform");
Transform20.DEF = "DECLBubble_bubbleB";
Transform20.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform20.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape21 = browser.currentScene.createNode("Shape");
Shape21.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape21.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Sphere22 = browser.currentScene.createNode("Sphere");
Sphere22.radius = 0.25;
Shape21.geometry = Sphere22;

let Appearance23 = browser.currentScene.createNode("Appearance");
let Material24 = browser.currentScene.createNode("Material");
Material24.diffuseColor = new SFColor(new float[1,0,0]);
Material24.transparency = 0.2;
Appearance23.material = Material24;

Shape21.appearance = Appearance23;

Transform20.children = new MFNode();

Transform20.children[0] = Shape21;

let TimeSensor25 = browser.currentScene.createNode("TimeSensor");
TimeSensor25.DEF = "DECLBubble_bubbleB_bubbleClock";
TimeSensor25.cycleInterval = 10;
TimeSensor25.loop = True;
Transform20.children[1] = TimeSensor25;

let ROUTE26 = browser.currentScene.createNode("ROUTE");
ROUTE26.fromNode = "DECLBubble_bubbleB_bounce";
ROUTE26.fromField = "translation_changed";
ROUTE26.toNode = "DECLBubble_transform";
ROUTE26.toField = "set_translation";
Transform20.children[2] = ROUTE26;

let ROUTE27 = browser.currentScene.createNode("ROUTE");
ROUTE27.fromNode = "DECLBubble_bubbleB_bounce";
ROUTE27.fromField = "scale_changed";
ROUTE27.toNode = "DECLBubble_transform";
ROUTE27.toField = "set_scale";
Transform20.children[3] = ROUTE27;

let ROUTE28 = browser.currentScene.createNode("ROUTE");
ROUTE28.fromNode = "DECLBubble_bubbleB_bubbleClock";
ROUTE28.fromField = "fraction_changed";
ROUTE28.toNode = "DECLBubble_bubbleB_bounce";
ROUTE28.toField = "set_fraction";
Transform20.children[4] = ROUTE28;

let X3DScript29 = browser.currentScene.createNode("X3DScript");
X3DScript29.DEF = "DECLBubble_bubbleB_bounce";
let field30 = browser.currentScene.createNode("field");
field30.name = "scale";
field30.accessType = "inputOutput";
field30.type = "SFVec3f";
field30.value = "1 1 1";
X3DScript29.field = new MFNode();

X3DScript29.field[0] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "translation";
field31.accessType = "inputOutput";
field31.type = "SFVec3f";
field31.value = "0 0 0";
X3DScript29.field[1] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "velocity";
field32.accessType = "inputOutput";
field32.type = "SFVec3f";
field32.value = "0 0 0";
X3DScript29.field[2] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "scalvel";
field33.accessType = "inputOutput";
field33.type = "SFVec3f";
field33.value = "0 0 0";
X3DScript29.field[3] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "set_fraction";
field34.accessType = "inputOnly";
field34.type = "SFFloat";
X3DScript29.field[4] = field34;

Transform20.x3DScript[5] = X3DScript29;

browser.currentScene.children[4] = Transform20;

let Transform35 = browser.currentScene.createNode("Transform");
Transform35.DEF = "DECLBubble_bubbleC";
Transform35.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform35.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape36 = browser.currentScene.createNode("Shape");
Shape36.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape36.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Sphere37 = browser.currentScene.createNode("Sphere");
Sphere37.radius = 0.25;
Shape36.geometry = Sphere37;

let Appearance38 = browser.currentScene.createNode("Appearance");
let Material39 = browser.currentScene.createNode("Material");
Material39.diffuseColor = new SFColor(new float[1,0,0]);
Material39.transparency = 0.2;
Appearance38.material = Material39;

Shape36.appearance = Appearance38;

Transform35.children = new MFNode();

Transform35.children[0] = Shape36;

let TimeSensor40 = browser.currentScene.createNode("TimeSensor");
TimeSensor40.DEF = "DECLBubble_bubbleC_bubbleClock";
TimeSensor40.cycleInterval = 10;
TimeSensor40.loop = True;
Transform35.children[1] = TimeSensor40;

let ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromNode = "DECLBubble_bubbleC_bounce";
ROUTE41.fromField = "translation_changed";
ROUTE41.toNode = "DECLBubble_transform";
ROUTE41.toField = "set_translation";
Transform35.children[2] = ROUTE41;

let ROUTE42 = browser.currentScene.createNode("ROUTE");
ROUTE42.fromNode = "DECLBubble_bubbleC_bounce";
ROUTE42.fromField = "scale_changed";
ROUTE42.toNode = "DECLBubble_transform";
ROUTE42.toField = "set_scale";
Transform35.children[3] = ROUTE42;

let ROUTE43 = browser.currentScene.createNode("ROUTE");
ROUTE43.fromNode = "DECLBubble_bubbleC_bubbleClock";
ROUTE43.fromField = "fraction_changed";
ROUTE43.toNode = "DECLBubble_bubbleC_bounce";
ROUTE43.toField = "set_fraction";
Transform35.children[4] = ROUTE43;

let X3DScript44 = browser.currentScene.createNode("X3DScript");
X3DScript44.DEF = "DECLBubble_bubbleC_bounce";
let field45 = browser.currentScene.createNode("field");
field45.name = "scale";
field45.accessType = "inputOutput";
field45.type = "SFVec3f";
field45.value = "1 1 1";
X3DScript44.field = new MFNode();

X3DScript44.field[0] = field45;

let field46 = browser.currentScene.createNode("field");
field46.name = "translation";
field46.accessType = "inputOutput";
field46.type = "SFVec3f";
field46.value = "0 0 0";
X3DScript44.field[1] = field46;

let field47 = browser.currentScene.createNode("field");
field47.name = "velocity";
field47.accessType = "inputOutput";
field47.type = "SFVec3f";
field47.value = "0 0 0";
X3DScript44.field[2] = field47;

let field48 = browser.currentScene.createNode("field");
field48.name = "scalvel";
field48.accessType = "inputOutput";
field48.type = "SFVec3f";
field48.value = "0 0 0";
X3DScript44.field[3] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "set_fraction";
field49.accessType = "inputOnly";
field49.type = "SFFloat";
X3DScript44.field[4] = field49;

Transform35.x3DScript[5] = X3DScript44;

browser.currentScene.children[5] = Transform35;

let Transform50 = browser.currentScene.createNode("Transform");
Transform50.DEF = "DECLBubble_bubbleD";
Transform50.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform50.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape51 = browser.currentScene.createNode("Shape");
Shape51.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape51.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Sphere52 = browser.currentScene.createNode("Sphere");
Sphere52.radius = 0.25;
Shape51.geometry = Sphere52;

let Appearance53 = browser.currentScene.createNode("Appearance");
let Material54 = browser.currentScene.createNode("Material");
Material54.diffuseColor = new SFColor(new float[1,0,0]);
Material54.transparency = 0.2;
Appearance53.material = Material54;

Shape51.appearance = Appearance53;

Transform50.children = new MFNode();

Transform50.children[0] = Shape51;

let TimeSensor55 = browser.currentScene.createNode("TimeSensor");
TimeSensor55.DEF = "DECLBubble_bubbleD_bubbleClock";
TimeSensor55.cycleInterval = 10;
TimeSensor55.loop = True;
Transform50.children[1] = TimeSensor55;

let ROUTE56 = browser.currentScene.createNode("ROUTE");
ROUTE56.fromNode = "DECLBubble_bubbleD_bounce";
ROUTE56.fromField = "translation_changed";
ROUTE56.toNode = "DECLBubble_transform";
ROUTE56.toField = "set_translation";
Transform50.children[2] = ROUTE56;

let ROUTE57 = browser.currentScene.createNode("ROUTE");
ROUTE57.fromNode = "DECLBubble_bubbleD_bounce";
ROUTE57.fromField = "scale_changed";
ROUTE57.toNode = "DECLBubble_transform";
ROUTE57.toField = "set_scale";
Transform50.children[3] = ROUTE57;

let ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromNode = "DECLBubble_bubbleD_bubbleClock";
ROUTE58.fromField = "fraction_changed";
ROUTE58.toNode = "DECLBubble_bubbleD_bounce";
ROUTE58.toField = "set_fraction";
Transform50.children[4] = ROUTE58;

let X3DScript59 = browser.currentScene.createNode("X3DScript");
X3DScript59.DEF = "DECLBubble_bubbleD_bounce";
let field60 = browser.currentScene.createNode("field");
field60.name = "scale";
field60.accessType = "inputOutput";
field60.type = "SFVec3f";
field60.value = "1 1 1";
X3DScript59.field = new MFNode();

X3DScript59.field[0] = field60;

let field61 = browser.currentScene.createNode("field");
field61.name = "translation";
field61.accessType = "inputOutput";
field61.type = "SFVec3f";
field61.value = "0 0 0";
X3DScript59.field[1] = field61;

let field62 = browser.currentScene.createNode("field");
field62.name = "velocity";
field62.accessType = "inputOutput";
field62.type = "SFVec3f";
field62.value = "0 0 0";
X3DScript59.field[2] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "scalvel";
field63.accessType = "inputOutput";
field63.type = "SFVec3f";
field63.value = "0 0 0";
X3DScript59.field[3] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "set_fraction";
field64.accessType = "inputOnly";
field64.type = "SFFloat";
X3DScript59.field[4] = field64;

Transform50.x3DScript[5] = X3DScript59;

browser.currentScene.children[6] = Transform50;


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

let #sourceCode22 = browser.currentScene.createNode("#sourceCode");
Script16.#sourceCode[5] = #sourceCode22;

Transform11.children[1] = Script16;

let TimeSensor23 = browser.currentScene.createNode("TimeSensor");
TimeSensor23.DEF = "DECLBubble_bubbleA_bubbleClock";
TimeSensor23.cycleInterval = 10;
TimeSensor23.loop = True;
Transform11.children[2] = TimeSensor23;

let ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromNode = "DECLBubble_bubbleA_bounce";
ROUTE24.fromField = "translation_changed";
ROUTE24.toNode = "DECLBubble_transform";
ROUTE24.toField = "set_translation";
Transform11.children[3] = ROUTE24;

let ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromNode = "DECLBubble_bubbleA_bounce";
ROUTE25.fromField = "scale_changed";
ROUTE25.toNode = "DECLBubble_transform";
ROUTE25.toField = "set_scale";
Transform11.children[4] = ROUTE25;

let ROUTE26 = browser.currentScene.createNode("ROUTE");
ROUTE26.fromNode = "DECLBubble_bubbleA_bubbleClock";
ROUTE26.fromField = "fraction_changed";
ROUTE26.toNode = "DECLBubble_bubbleA_bounce";
ROUTE26.toField = "set_fraction";
Transform11.children[5] = ROUTE26;

browser.currentScene.children[3] = Transform11;

let Transform27 = browser.currentScene.createNode("Transform");
Transform27.DEF = "DECLBubble_bubbleB";
let Shape28 = browser.currentScene.createNode("Shape");
let Sphere29 = browser.currentScene.createNode("Sphere");
Sphere29.radius = 0.25;
Shape28.geometry = Sphere29;

let Appearance30 = browser.currentScene.createNode("Appearance");
let Material31 = browser.currentScene.createNode("Material");
Material31.diffuseColor = new SFColor(new float[1,0,0]);
Material31.transparency = 0.2;
Appearance30.material = Material31;

Shape28.appearance = Appearance30;

Transform27.children = new MFNode();

Transform27.children[0] = Shape28;

let Script32 = browser.currentScene.createNode("Script");
Script32.DEF = "DECLBubble_bubbleB_bounce";
let field33 = browser.currentScene.createNode("field");
field33.name = "scale";
field33.accessType = "inputOutput";
field33.type = "SFVec3f";
field33.value = "1 1 1";
Script32.field = new MFNode();

Script32.field[0] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "translation";
field34.accessType = "inputOutput";
field34.type = "SFVec3f";
field34.value = "0 0 0";
Script32.field[1] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "velocity";
field35.accessType = "inputOutput";
field35.type = "SFVec3f";
field35.value = "0 0 0";
Script32.field[2] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "scalvel";
field36.accessType = "inputOutput";
field36.type = "SFVec3f";
field36.value = "0 0 0";
Script32.field[3] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "set_fraction";
field37.accessType = "inputOnly";
field37.type = "SFFloat";
Script32.field[4] = field37;

let #sourceCode38 = browser.currentScene.createNode("#sourceCode");
Script32.#sourceCode[5] = #sourceCode38;

Transform27.children[1] = Script32;

let TimeSensor39 = browser.currentScene.createNode("TimeSensor");
TimeSensor39.DEF = "DECLBubble_bubbleB_bubbleClock";
TimeSensor39.cycleInterval = 10;
TimeSensor39.loop = True;
Transform27.children[2] = TimeSensor39;

let ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromNode = "DECLBubble_bubbleB_bounce";
ROUTE40.fromField = "translation_changed";
ROUTE40.toNode = "DECLBubble_transform";
ROUTE40.toField = "set_translation";
Transform27.children[3] = ROUTE40;

let ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromNode = "DECLBubble_bubbleB_bounce";
ROUTE41.fromField = "scale_changed";
ROUTE41.toNode = "DECLBubble_transform";
ROUTE41.toField = "set_scale";
Transform27.children[4] = ROUTE41;

let ROUTE42 = browser.currentScene.createNode("ROUTE");
ROUTE42.fromNode = "DECLBubble_bubbleB_bubbleClock";
ROUTE42.fromField = "fraction_changed";
ROUTE42.toNode = "DECLBubble_bubbleB_bounce";
ROUTE42.toField = "set_fraction";
Transform27.children[5] = ROUTE42;

browser.currentScene.children[4] = Transform27;

let Transform43 = browser.currentScene.createNode("Transform");
Transform43.DEF = "DECLBubble_bubbleC";
let Shape44 = browser.currentScene.createNode("Shape");
let Sphere45 = browser.currentScene.createNode("Sphere");
Sphere45.radius = 0.25;
Shape44.geometry = Sphere45;

let Appearance46 = browser.currentScene.createNode("Appearance");
let Material47 = browser.currentScene.createNode("Material");
Material47.diffuseColor = new SFColor(new float[1,0,0]);
Material47.transparency = 0.2;
Appearance46.material = Material47;

Shape44.appearance = Appearance46;

Transform43.children = new MFNode();

Transform43.children[0] = Shape44;

let Script48 = browser.currentScene.createNode("Script");
Script48.DEF = "DECLBubble_bubbleC_bounce";
let field49 = browser.currentScene.createNode("field");
field49.name = "scale";
field49.accessType = "inputOutput";
field49.type = "SFVec3f";
field49.value = "1 1 1";
Script48.field = new MFNode();

Script48.field[0] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "translation";
field50.accessType = "inputOutput";
field50.type = "SFVec3f";
field50.value = "0 0 0";
Script48.field[1] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "velocity";
field51.accessType = "inputOutput";
field51.type = "SFVec3f";
field51.value = "0 0 0";
Script48.field[2] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "scalvel";
field52.accessType = "inputOutput";
field52.type = "SFVec3f";
field52.value = "0 0 0";
Script48.field[3] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "set_fraction";
field53.accessType = "inputOnly";
field53.type = "SFFloat";
Script48.field[4] = field53;

let #sourceCode54 = browser.currentScene.createNode("#sourceCode");
Script48.#sourceCode[5] = #sourceCode54;

Transform43.children[1] = Script48;

let TimeSensor55 = browser.currentScene.createNode("TimeSensor");
TimeSensor55.DEF = "DECLBubble_bubbleC_bubbleClock";
TimeSensor55.cycleInterval = 10;
TimeSensor55.loop = True;
Transform43.children[2] = TimeSensor55;

let ROUTE56 = browser.currentScene.createNode("ROUTE");
ROUTE56.fromNode = "DECLBubble_bubbleC_bounce";
ROUTE56.fromField = "translation_changed";
ROUTE56.toNode = "DECLBubble_transform";
ROUTE56.toField = "set_translation";
Transform43.children[3] = ROUTE56;

let ROUTE57 = browser.currentScene.createNode("ROUTE");
ROUTE57.fromNode = "DECLBubble_bubbleC_bounce";
ROUTE57.fromField = "scale_changed";
ROUTE57.toNode = "DECLBubble_transform";
ROUTE57.toField = "set_scale";
Transform43.children[4] = ROUTE57;

let ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromNode = "DECLBubble_bubbleC_bubbleClock";
ROUTE58.fromField = "fraction_changed";
ROUTE58.toNode = "DECLBubble_bubbleC_bounce";
ROUTE58.toField = "set_fraction";
Transform43.children[5] = ROUTE58;

browser.currentScene.children[5] = Transform43;

let Transform59 = browser.currentScene.createNode("Transform");
Transform59.DEF = "DECLBubble_bubbleD";
let Shape60 = browser.currentScene.createNode("Shape");
let Sphere61 = browser.currentScene.createNode("Sphere");
Sphere61.radius = 0.25;
Shape60.geometry = Sphere61;

let Appearance62 = browser.currentScene.createNode("Appearance");
let Material63 = browser.currentScene.createNode("Material");
Material63.diffuseColor = new SFColor(new float[1,0,0]);
Material63.transparency = 0.2;
Appearance62.material = Material63;

Shape60.appearance = Appearance62;

Transform59.children = new MFNode();

Transform59.children[0] = Shape60;

let Script64 = browser.currentScene.createNode("Script");
Script64.DEF = "DECLBubble_bubbleD_bounce";
let field65 = browser.currentScene.createNode("field");
field65.name = "scale";
field65.accessType = "inputOutput";
field65.type = "SFVec3f";
field65.value = "1 1 1";
Script64.field = new MFNode();

Script64.field[0] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "translation";
field66.accessType = "inputOutput";
field66.type = "SFVec3f";
field66.value = "0 0 0";
Script64.field[1] = field66;

let field67 = browser.currentScene.createNode("field");
field67.name = "velocity";
field67.accessType = "inputOutput";
field67.type = "SFVec3f";
field67.value = "0 0 0";
Script64.field[2] = field67;

let field68 = browser.currentScene.createNode("field");
field68.name = "scalvel";
field68.accessType = "inputOutput";
field68.type = "SFVec3f";
field68.value = "0 0 0";
Script64.field[3] = field68;

let field69 = browser.currentScene.createNode("field");
field69.name = "set_fraction";
field69.accessType = "inputOnly";
field69.type = "SFFloat";
Script64.field[4] = field69;

let #sourceCode70 = browser.currentScene.createNode("#sourceCode");
Script64.#sourceCode[5] = #sourceCode70;

Transform59.children[1] = Script64;

let TimeSensor71 = browser.currentScene.createNode("TimeSensor");
TimeSensor71.DEF = "DECLBubble_bubbleD_bubbleClock";
TimeSensor71.cycleInterval = 10;
TimeSensor71.loop = True;
Transform59.children[2] = TimeSensor71;

let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromNode = "DECLBubble_bubbleD_bounce";
ROUTE72.fromField = "translation_changed";
ROUTE72.toNode = "DECLBubble_transform";
ROUTE72.toField = "set_translation";
Transform59.children[3] = ROUTE72;

let ROUTE73 = browser.currentScene.createNode("ROUTE");
ROUTE73.fromNode = "DECLBubble_bubbleD_bounce";
ROUTE73.fromField = "scale_changed";
ROUTE73.toNode = "DECLBubble_transform";
ROUTE73.toField = "set_scale";
Transform59.children[4] = ROUTE73;

let ROUTE74 = browser.currentScene.createNode("ROUTE");
ROUTE74.fromNode = "DECLBubble_bubbleD_bubbleClock";
ROUTE74.fromField = "fraction_changed";
ROUTE74.toNode = "DECLBubble_bubbleD_bounce";
ROUTE74.toField = "set_fraction";
Transform59.children[5] = ROUTE74;

browser.currentScene.children[6] = Transform59;


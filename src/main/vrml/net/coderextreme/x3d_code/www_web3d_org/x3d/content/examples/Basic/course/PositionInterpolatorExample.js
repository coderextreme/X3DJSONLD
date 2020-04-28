let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "PositionInterpolatorExample.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Transform3 = browser.currentScene.createNode("Transform");
Transform3.DEF = "BouncingBoxTransform";
let Shape4 = browser.currentScene.createNode("Shape");
let Box5 = browser.currentScene.createNode("Box");
Shape4.geometry = Box5;

let Appearance6 = browser.currentScene.createNode("Appearance");
let Material7 = browser.currentScene.createNode("Material");
Material7.diffuseColor = new SFColor(new float[0,0.6,0.8]);
Appearance6.material = Material7;

Shape4.appearance = Appearance6;

Transform3.children = new MFNode();

Transform3.children[0] = Shape4;

browser.currentScene.children[1] = Transform3;

let PositionInterpolator8 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator8.DEF = "PI";
PositionInterpolator8.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator8.keyValue = new MFVec3f(new float[0,1,0,0,-1,0,0,1,0]);
browser.currentScene.children[2] = PositionInterpolator8;

let TimeSensor9 = browser.currentScene.createNode("TimeSensor");
TimeSensor9.DEF = "CLOCK";
TimeSensor9.cycleInterval = 4;
TimeSensor9.loop = True;
browser.currentScene.children[3] = TimeSensor9;

let ROUTE10 = browser.currentScene.createNode("ROUTE");
ROUTE10.fromField = "fraction_changed";
ROUTE10.fromNode = "CLOCK";
ROUTE10.toField = "set_fraction";
ROUTE10.toNode = "PI";
browser.currentScene.children[4] = ROUTE10;

let ROUTE11 = browser.currentScene.createNode("ROUTE");
ROUTE11.fromField = "value_changed";
ROUTE11.fromNode = "PI";
ROUTE11.toField = "set_translation";
ROUTE11.toNode = "BouncingBoxTransform";
browser.currentScene.children[5] = ROUTE11;


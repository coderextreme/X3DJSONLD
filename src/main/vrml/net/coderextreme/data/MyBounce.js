let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

let Transform3 = browser.currentScene.createNode("Transform");
Transform3.DEF = "transform";
Transform3.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform3.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape4 = browser.currentScene.createNode("Shape");
Shape4.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape4.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance5 = browser.currentScene.createNode("Appearance");
let Material6 = browser.currentScene.createNode("Material");
Material6.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material6.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance5.material = Material6;

Shape4.appearance = Appearance5;

let Sphere7 = browser.currentScene.createNode("Sphere");
Shape4.geometry = Sphere7;

Transform3.children = new MFNode();

Transform3.children[0] = Shape4;

browser.currentScene.children[1] = Transform3;

let TimeSensor8 = browser.currentScene.createNode("TimeSensor");
TimeSensor8.DEF = "TourTime";
TimeSensor8.cycleInterval = 0.15;
TimeSensor8.loop = True;
browser.currentScene.children[2] = TimeSensor8;

let ROUTE9 = browser.currentScene.createNode("ROUTE");
ROUTE9.fromNode = "TourTime";
ROUTE9.fromField = "cycleTime";
ROUTE9.toNode = "Bounce2";
ROUTE9.toField = "set_fraction";
browser.currentScene.children[3] = ROUTE9;

let ROUTE10 = browser.currentScene.createNode("ROUTE");
ROUTE10.fromNode = "Bounce2";
ROUTE10.fromField = "translation_changed";
ROUTE10.toNode = "transform";
ROUTE10.toField = "set_translation";
browser.currentScene.children[4] = ROUTE10;


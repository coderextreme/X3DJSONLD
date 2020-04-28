let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interactive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "AmelaExampleScene.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Group3 = browser.currentScene.createNode("Group");
let Shape4 = browser.currentScene.createNode("Shape");
let Appearance5 = browser.currentScene.createNode("Appearance");
let Material6 = browser.currentScene.createNode("Material");
Material6.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Appearance5.material = Material6;

Shape4.appearance = Appearance5;

let Cylinder7 = browser.currentScene.createNode("Cylinder");
Shape4.geometry = Cylinder7;

Group3.children = new MFNode();

Group3.children[0] = Shape4;

browser.currentScene.children[1] = Group3;

let Transform8 = browser.currentScene.createNode("Transform");
Transform8.translation = new SFVec3f(new float[0,-2,4]);
let Shape9 = browser.currentScene.createNode("Shape");
let Appearance10 = browser.currentScene.createNode("Appearance");
let Material11 = browser.currentScene.createNode("Material");
Material11.emissiveColor = new SFColor(new float[0,0,0.8]);
Appearance10.material = Material11;

Shape9.appearance = Appearance10;

let Sphere12 = browser.currentScene.createNode("Sphere");
Sphere12.radius = 0.2;
Shape9.geometry = Sphere12;

Transform8.children = new MFNode();

Transform8.children[0] = Shape9;

let PointLight13 = browser.currentScene.createNode("PointLight");
PointLight13.DEF = "MyPointLight";
PointLight13.color = new SFColor(new float[0,0,1]);
PointLight13.on = False;
Transform8.children[1] = PointLight13;

browser.currentScene.children[2] = Transform8;

let TouchSensor14 = browser.currentScene.createNode("TouchSensor");
TouchSensor14.DEF = "MyTouchSensor";
TouchSensor14.description = "pointing device over geometry turns on light";
browser.currentScene.children[3] = TouchSensor14;

let ROUTE15 = browser.currentScene.createNode("ROUTE");
ROUTE15.fromField = "isOver";
ROUTE15.fromNode = "MyTouchSensor";
ROUTE15.toField = "on";
ROUTE15.toNode = "MyPointLight";
browser.currentScene.children[4] = ROUTE15;


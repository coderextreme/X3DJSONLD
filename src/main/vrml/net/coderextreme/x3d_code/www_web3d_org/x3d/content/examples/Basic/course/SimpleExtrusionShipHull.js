let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "SimpleExtrusionShipHull.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Extruded ship hull and deck";
Viewpoint3.orientation = new SFRotation(new float[1,0,0,-0.2]);
Viewpoint3.position = new SFVec3f(new float[-2,8,40]);
browser.currentScene.children[1] = Viewpoint3;

let Transform4 = browser.currentScene.createNode("Transform");
let Shape5 = browser.currentScene.createNode("Shape");
let Extrusion6 = browser.currentScene.createNode("Extrusion");
Extrusion6.creaseAngle = 1.57;
Extrusion6.crossSection = new MFVec2f(new float[0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1]);
Extrusion6.orientation = new MFRotation(new float[0,1,0,0,0,1,0,0,0,1,0,0,0,0,1,-0.5]);
Extrusion6.scale = new MFVec2f(new float[4,4,4,4,4,4,4,0.1]);
Extrusion6.solid = False;
Extrusion6.spine = new MFVec3f(new float[-20,0,0,0,0,0,10,0,0,18,0.25,0]);
Shape5.geometry = Extrusion6;

let Appearance7 = browser.currentScene.createNode("Appearance");
let Material8 = browser.currentScene.createNode("Material");
Material8.diffuseColor = new SFColor(new float[0,0.3,1]);
Material8.emissiveColor = new SFColor(new float[0.2,0.2,0.2]);
Appearance7.material = Material8;

Shape5.appearance = Appearance7;

Transform4.children = new MFNode();

Transform4.children[0] = Shape5;

let Shape9 = browser.currentScene.createNode("Shape");
let Extrusion10 = browser.currentScene.createNode("Extrusion");
Extrusion10.creaseAngle = 1.57;
Extrusion10.crossSection = new MFVec2f(new float[0.1,0.96,0.1,-0.96]);
Extrusion10.scale = new MFVec2f(new float[4,4,4,4,4,4,4,0.1]);
Extrusion10.solid = False;
Extrusion10.spine = new MFVec3f(new float[-19.9,0,0,0,0,0,10,0,0,17.5,0.25,0]);
Shape9.geometry = Extrusion10;

let Appearance11 = browser.currentScene.createNode("Appearance");
let Material12 = browser.currentScene.createNode("Material");
Material12.diffuseColor = new SFColor(new float[0,1,0]);
Material12.emissiveColor = new SFColor(new float[0,0.2,0]);
Appearance11.material = Material12;

Shape9.appearance = Appearance11;

Transform4.children[1] = Shape9;

browser.currentScene.children[2] = Transform4;


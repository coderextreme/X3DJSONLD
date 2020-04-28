let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "ExtrusionHeart.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Extrusion Heart";
Viewpoint3.orientation = new SFRotation(new float[1,0,0,1.57]);
Viewpoint3.position = new SFVec3f(new float[0,-4,0]);
browser.currentScene.children[1] = Viewpoint3;

let Transform4 = browser.currentScene.createNode("Transform");
Transform4.translation = new SFVec3f(new float[0,-0.5,0]);
let Shape5 = browser.currentScene.createNode("Shape");
let Extrusion6 = browser.currentScene.createNode("Extrusion");
Extrusion6.creaseAngle = 3.14159;
Extrusion6.crossSection = new MFVec2f(new float[0,0.8,0.2,1,0.7,0.95,1,0.5,0.8,0,0.5,-0.3,0,-0.7,-0.5,-0.3,-0.8,0,-1,0.5,-0.7,0.95,-0.2,1,0,0.8]);
Extrusion6.scale = new MFVec2f(new float[0.01,0.01,0.8,0.8,1,1,0.8,0.8,0.01,0.01]);
Extrusion6.solid = False;
Extrusion6.spine = new MFVec3f(new float[0,0,0,0,0.1,0,0,0.5,0,0,0.9,0,0,1,0]);
Shape5.geometry = Extrusion6;

let Appearance7 = browser.currentScene.createNode("Appearance");
let Material8 = browser.currentScene.createNode("Material");
Material8.diffuseColor = new SFColor(new float[0.8,0.3,0.3]);
Appearance7.material = Material8;

Shape5.appearance = Appearance7;

Transform4.children = new MFNode();

Transform4.children[0] = Shape5;

browser.currentScene.children[2] = Transform4;


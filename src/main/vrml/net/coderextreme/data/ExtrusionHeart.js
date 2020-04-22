let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let Viewpoint2 = browser.currentScene.createNode("Viewpoint");
Viewpoint2.description = "Extrusion Heart";
Viewpoint2.orientation = new SFRotation(new float[1,0,0,1.57]);
Viewpoint2.position = new SFVec3f(new float[0,-4,0]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint2;

let Transform3 = browser.currentScene.createNode("Transform");
Transform3.translation = new SFVec3f(new float[0,-0.5,0]);
let Shape4 = browser.currentScene.createNode("Shape");
let Extrusion5 = browser.currentScene.createNode("Extrusion");
Extrusion5.creaseAngle = 3.14159;
Extrusion5.crossSection = new MFVec2f(new float[0,0.8,0.2,1,0.7,0.95,1,0.5,0.8,0,0.5,-0.3,0,-0.7,-0.5,-0.3,-0.8,0,-1,0.5,-0.7,0.95,-0.2,1,0,0.8]);
Extrusion5.scale = new MFVec2f(new float[0.01,0.01,0.8,0.8,1,1,0.8,0.8,0.01,0.01]);
Extrusion5.solid = False;
Extrusion5.spine = new MFVec3f(new float[0,0,0,0,0.1,0,0,0.5,0,0,0.9,0,0,1,0]);
Shape4.geometry = Extrusion5;

let Appearance6 = browser.currentScene.createNode("Appearance");
let Material7 = browser.currentScene.createNode("Material");
Material7.diffuseColor = new SFColor(new float[0.8,0.3,0.3]);
Appearance6.material = Material7;

Shape4.appearance = Appearance6;

Transform3.children = new MFNode();

Transform3.children[0] = Shape4;

browser.currentScene.children[1] = Transform3;


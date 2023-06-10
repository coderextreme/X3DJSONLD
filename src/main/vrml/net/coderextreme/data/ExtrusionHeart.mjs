let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "ExtrusionHeart.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Simple extrusion of a Valentine heart.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Class participants in course Introduction to VRML/X3D.";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "created";
meta5.content = "14 February 2001";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "modified";
meta6.content = "27 November 2015";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "identifier";
meta7.content = "https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "generator";
meta8.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "license";
meta9.content = "../license.html";
head1.meta[7] = meta9;

head = head1;

let Viewpoint11 = browser.currentScene.createNode("Viewpoint");
Viewpoint11.description = "Extrusion Heart";
Viewpoint11.orientation = new SFRotation(new float[1,0,0,1.57]);
Viewpoint11.position = new SFVec3f(new float[0,-4,0]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint11;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.translation = new SFVec3f(new float[0,-0.5,0]);
let Shape13 = browser.currentScene.createNode("Shape");
let Extrusion14 = browser.currentScene.createNode("Extrusion");
Extrusion14.creaseAngle = 3.14159;
Extrusion14.crossSection = new MFVec2f(new float[0,0.8,0.2,1,0.7,0.95,1,0.5,0.8,0,0.5,-0.3,0,-0.7,-0.5,-0.3,-0.8,0,-1,0.5,-0.7,0.95,-0.2,1,0,0.8]);
Extrusion14.scale = new MFVec2f(new float[0.01,0.01,0.8,0.8,1,1,0.8,0.8,0.01,0.01]);
Extrusion14.solid = False;
Extrusion14.spine = new MFVec3f(new float[0,0,0,0,0.1,0,0,0.5,0,0,0.9,0,0,1,0]);
Shape13.geometry = Extrusion14;

let Appearance15 = browser.currentScene.createNode("Appearance");
let Material16 = browser.currentScene.createNode("Material");
Material16.diffuseColor = new SFColor(new float[0.8,0.3,0.3]);
Appearance15.material = Material16;

Shape13.appearance = Appearance15;

Transform12.children = new MFNode();

Transform12.children[0] = Shape13;

browser.currentScene.children[1] = Transform12;


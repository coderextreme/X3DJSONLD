var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
Viewpoint2 = browser.currentScene.createNode("Viewpoint");
Viewpoint2.description = "Extrusion Heart";
Viewpoint2.orientation = [1,0,0,1.57];
Viewpoint2.position = [0,-4,0];
browser.currentScene.children = [];

browser.currentScene.children[0] = Viewpoint2;

Transform3 = browser.currentScene.createNode("Transform");
Transform3.translation = [0,-0.5,0];
Shape4 = browser.currentScene.createNode("Shape");
Extrusion5 = browser.currentScene.createNode("Extrusion");
Extrusion5.creaseAngle = 3.14159;
Extrusion5.crossSection = [0,0.8,0.2,1,0.7,0.95,1,0.5,0.8,0,0.5,-0.3,0,-0.7,-0.5,-0.3,-0.8,0,-1,0.5,-0.7,0.95,-0.2,1,0,0.8];
Extrusion5.scale = [0.01,0.01,0.8,0.8,1,1,0.8,0.8,0.01,0.01];
Extrusion5.solid = False;
Extrusion5.spine = [0,0,0,0,0.1,0,0,0.5,0,0,0.9,0,0,1,0];
Shape4.geometry = Extrusion5;

Appearance6 = browser.currentScene.createNode("Appearance");
Material7 = browser.currentScene.createNode("Material");
Material7.diffuseColor = [0.8,0.3,0.3];
Appearance6.material = Material7;

Shape4.appearance = Appearance6;

Transform3.children = [];

Transform3.children[0] = Shape4;

browser.currentScene.children[1] = Transform3;


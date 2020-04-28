let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "GeometryExample.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Shape3 = browser.currentScene.createNode("Shape");
let Appearance4 = browser.currentScene.createNode("Appearance");
let Material5 = browser.currentScene.createNode("Material");
Material5.diffuseColor = new SFColor(new float[0,0.5,1]);
Appearance4.material = Material5;

Shape3.appearance = Appearance4;

//Edit this code, attempt to modify geometry and Cylinder to see how field-wrapper tags work. Only Cylinder can be replaced, and then only by another geometry node.
let Cylinder6 = browser.currentScene.createNode("Cylinder");
Shape3.geometry = Cylinder6;

browser.currentScene.children[1] = Shape3;


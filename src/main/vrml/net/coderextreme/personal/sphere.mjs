let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "Scripting";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "title";
meta3.content = "sphere.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "John Carlson";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "generator";
meta5.content = "manual";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "identifier";
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/sphere.x3d";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "description";
meta7.content = "a sphere";
head1.meta[5] = meta7;

head = head1;

let Group9 = browser.currentScene.createNode("Group");
let Shape10 = browser.currentScene.createNode("Shape");
let Appearance11 = browser.currentScene.createNode("Appearance");
let Material12 = browser.currentScene.createNode("Material");
Material12.diffuseColor = new SFColor(new float[1,1,1]);
Appearance11.material = Material12;

Shape10.appearance = Appearance11;

let Sphere13 = browser.currentScene.createNode("Sphere");
Shape10.geometry = Sphere13;

Group9.children = new MFNode();

Group9.children[0] = Shape10;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Group9;


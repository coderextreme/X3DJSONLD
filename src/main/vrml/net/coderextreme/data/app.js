let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let Group2 = browser.currentScene.createNode("Group");
let Shape3 = browser.currentScene.createNode("Shape");
let Appearance4 = browser.currentScene.createNode("Appearance");
let Material5 = browser.currentScene.createNode("Material");
Material5.diffuseColor = new SFColor(new float[1,0,0]);
Appearance4.material = Material5;

Shape3.appearance = Appearance4;

let Box6 = browser.currentScene.createNode("Box");
Shape3.geometry = Box6;

Group2.children = new MFNode();

Group2.children[0] = Shape3;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Group2;

let Transform7 = browser.currentScene.createNode("Transform");
Transform7.rotation = new SFRotation(new float[7,8,9,3.14]);
Transform7.scale = new SFVec3f(new float[4,5,6]);
Transform7.translation = new SFVec3f(new float[1,2,3]);
browser.currentScene.children[1] = Transform7;


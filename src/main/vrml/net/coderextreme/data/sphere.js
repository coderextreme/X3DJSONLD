let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.3";
let Group2 = browser.currentScene.createNode("Group");
Group2.bboxCenter = new SFVec3f(new float[0,0,0]);
Group2.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape3 = browser.currentScene.createNode("Shape");
Shape3.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape3.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance4 = browser.currentScene.createNode("Appearance");
let Material5 = browser.currentScene.createNode("Material");
Material5.diffuseColor = new SFColor(new float[1,1,1]);
Appearance4.material = Material5;

Shape3.appearance = Appearance4;

let Sphere6 = browser.currentScene.createNode("Sphere");
Shape3.geometry = Sphere6;

Group2.children = new MFNode();

Group2.children[0] = Shape3;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Group2;


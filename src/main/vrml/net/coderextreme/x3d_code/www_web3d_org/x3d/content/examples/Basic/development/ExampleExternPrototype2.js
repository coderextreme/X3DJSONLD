let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "ExampleExternPrototype2.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ExternProtoDeclare3 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare3.name = "MyNodeAppearance";
ExternProtoDeclare3.url = new MFString(new java.lang.String["https://www.web3d.org/somewhere/MyNodePROTOs.wrl#MyNodeAppearance"]);
browser.currentScene.children[1] = ExternProtoDeclare3;

let ExternProtoDeclare4 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare4.name = "MyNodeGeometry";
ExternProtoDeclare4.url = new MFString(new java.lang.String["https://www.web3d.org/somewhere/MyNodePROTOs.wrl#MyNodeGeometry"]);
browser.currentScene.children[2] = ExternProtoDeclare4;

let Group5 = browser.currentScene.createNode("Group");
let Shape6 = browser.currentScene.createNode("Shape");
Shape6.DEF = "A_SHAPE";
let ProtoInstance7 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance7.name = "MyNodeAppearance";
Shape6.geometry = ProtoInstance7;

let ProtoInstance8 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance8.name = "MyNodeGeometry";
Shape6.geometry = ProtoInstance8;

Group5.children = new MFNode();

Group5.children[0] = Shape6;

browser.currentScene.children[3] = Group5;


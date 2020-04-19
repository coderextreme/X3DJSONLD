var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.3";
Group2 = browser.currentScene.createNode("Group");
Shape3 = browser.currentScene.createNode("Shape");
Appearance4 = browser.currentScene.createNode("Appearance");
Material5 = browser.currentScene.createNode("Material");
Material5.diffuseColor = [1,1,1];
Appearance4.material = Material5;

Shape3.appearance = Appearance4;

Sphere6 = browser.currentScene.createNode("Sphere");
Shape3.geometry = Sphere6;

Group2.children = [];

Group2.children[0] = Shape3;

browser.currentScene.children = [];

browser.currentScene.children[0] = Group2;


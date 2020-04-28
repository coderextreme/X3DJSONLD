let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
//a simple Inline node is all that is needed for any scene to use X3D Earth assets
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "HelloEarthOpenStreetMap.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Inline3 = browser.currentScene.createNode("Inline");
Inline3.url = new MFString(new java.lang.String["http://x3d-earth.nps.edu/osmdemo.x3d"]);
browser.currentScene.children[1] = Inline3;


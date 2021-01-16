let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
//All head/meta tags are optional, WorldInfo is also optional
//Text node not supported by X3D Interchange profile, use Immersive profile or Text component level 1
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "HelloWorldMinimal.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Shape3 = browser.currentScene.createNode("Shape");
let Text4 = browser.currentScene.createNode("Text");
Text4.string = new MFString(new java.lang.String["hello, world"]);
Shape3.geometry = Text4;

browser.currentScene.children[1] = Shape3;


let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "H-Anim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "title";
meta3.content = "JohnBoy.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "identifier";
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "description";
meta5.content = "An attempt at a standard LOA-4 skeleton";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "generator";
meta6.content = "h.pl";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "creator";
meta7.content = "John Carlson";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "created";
meta8.content = "12 June 2020";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "license";
meta9.content = "../license.html";
head1.meta[7] = meta9;

head = head1;

let WorldInfo11 = browser.currentScene.createNode("WorldInfo");
WorldInfo11.title = "JohnBoy.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo11;

let NavigationInfo12 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo12.speed = 1.5;
browser.currentScene.children[1] = NavigationInfo12;

let Viewpoint13 = browser.currentScene.createNode("Viewpoint");
Viewpoint13.centerOfRotation = new SFVec3f(new float[0,1,0]);
Viewpoint13.description = "JohnBoy";
Viewpoint13.position = new SFVec3f(new float[0,1,3]);
browser.currentScene.children[2] = Viewpoint13;


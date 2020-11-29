let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo2.speed = 1.5;
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.centerOfRotation = new SFVec3f(new float[0,1,0]);
Viewpoint3.description = "AnnexD01Jin";
Viewpoint3.position = new SFVec3f(new float[0,1,3]);
browser.currentScene.children[1] = Viewpoint3;


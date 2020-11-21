let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "KoreanCharacterAnnexD01Jin.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let NavigationInfo3 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo3.speed = 1.5;
browser.currentScene.children[1] = NavigationInfo3;

//Viewpoint centerOfRotation=\"0 1 0\" description=\"AnnexD01Jin\" position=\"0 35 113\"/
let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.centerOfRotation = new SFVec3f(new float[0,1,0]);
Viewpoint4.description = "AnnexD01Jin";
Viewpoint4.position = new SFVec3f(new float[0,40,140]);
browser.currentScene.children[2] = Viewpoint4;


let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "HAnimModelsHandsFeet.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Hands and feet 10m";
browser.currentScene.children[1] = Viewpoint3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.description = "Hands and feet 1.7m";
Viewpoint4.position = new SFVec3f(new float[0,0,1.7]);
browser.currentScene.children[2] = Viewpoint4;

let Transform5 = browser.currentScene.createNode("Transform");
Transform5.translation = new SFVec3f(new float[-1,1,0]);
let Inline6 = browser.currentScene.createNode("Inline");
Inline6.url = new MFString(new java.lang.String["HAnimModelHandLeft.x3d","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandLeft.x3d","HAnimModelHandLeft.wrl","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandLeft.wrl"]);
Transform5.children = new MFNode();

Transform5.children[0] = Inline6;

//Grid overlay authoring hint: first adjust grid scale to convenient large size, then adjust overall scale for your scene model
let Transform7 = browser.currentScene.createNode("Transform");
Transform7.DEF = "GridXY_20x20Fixed_AdjustScale";
Transform7.scale = new SFVec3f(new float[0.1,0.1,0.1]);
let Inline8 = browser.currentScene.createNode("Inline");
Inline8.DEF = "GridXY_20x20Fixed";
Inline8.url = new MFString(new java.lang.String["GridXY_20x20Fixed.x3d","../../Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","GridXY_20x20Fixed.wrl","../../Savage/Tools/Authoring/GridXY_20x20Fixed.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl"]);
Transform7.children = new MFNode();

Transform7.children[0] = Inline8;

Transform5.children[1] = Transform7;

browser.currentScene.children[3] = Transform5;

let Transform9 = browser.currentScene.createNode("Transform");
Transform9.translation = new SFVec3f(new float[1,1,0]);
let Inline10 = browser.currentScene.createNode("Inline");
Inline10.url = new MFString(new java.lang.String["HAnimModelHandRight.x3d","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandRight.x3d","HAnimModelHandRight.wrl","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandRight.wrl"]);
Transform9.children = new MFNode();

Transform9.children[0] = Inline10;

let Transform11 = browser.currentScene.createNode("Transform");
Transform11.USE = "GridXY_20x20Fixed_AdjustScale";
Transform9.children[1] = Transform11;

browser.currentScene.children[4] = Transform9;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.translation = new SFVec3f(new float[-1,-1,0]);
//rotation='0 0 1 3.141593'
let Inline13 = browser.currentScene.createNode("Inline");
Inline13.url = new MFString(new java.lang.String["HAnimModelFootLeft.x3d","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootLeft.x3d","HAnimModelFootLeft.wrl","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootLeft.wrl"]);
Transform12.children = new MFNode();

Transform12.children[0] = Inline13;

let Transform14 = browser.currentScene.createNode("Transform");
Transform14.USE = "GridXY_20x20Fixed_AdjustScale";
Transform12.children[1] = Transform14;

browser.currentScene.children[5] = Transform12;

let Transform15 = browser.currentScene.createNode("Transform");
Transform15.translation = new SFVec3f(new float[1,-1,0]);
//rotation='0 0 1 3.141593'
let Inline16 = browser.currentScene.createNode("Inline");
Inline16.url = new MFString(new java.lang.String["HAnimModelFootRight.x3d","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootRight.x3d","HAnimModelFootRight.wrl","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootRight.wrl"]);
Transform15.children = new MFNode();

Transform15.children[0] = Inline16;

let Transform17 = browser.currentScene.createNode("Transform");
Transform17.USE = "GridXY_20x20Fixed_AdjustScale";
Transform15.children[1] = Transform17;

browser.currentScene.children[6] = Transform15;


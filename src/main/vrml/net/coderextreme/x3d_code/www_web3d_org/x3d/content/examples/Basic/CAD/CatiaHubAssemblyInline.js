let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interactive";
X3D0.version = "3.1";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "CatiaHubAssemblyInline.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Hello CatiaHubAssemblyInline";
Viewpoint3.position = new SFVec3f(new float[0,0,1]);
browser.currentScene.children[1] = Viewpoint3;

let Transform4 = browser.currentScene.createNode("Transform");
Transform4.DEF = "RootTransform";
let CADAssembly5 = browser.currentScene.createNode("CADAssembly");
CADAssembly5.name = "Hub_Assembly";
let Transform6 = browser.currentScene.createNode("Transform");
Transform6.DEF = "TransformCatiaHubDiscWithHoles";
let CADAssembly7 = browser.currentScene.createNode("CADAssembly");
CADAssembly7.name = "disc_with_holes";
let Inline8 = browser.currentScene.createNode("Inline");
Inline8.DEF = "CatiaHubDiscWithHoles";
Inline8.url = new MFString(new java.lang.String["CatiaHubDiscWithHoles.x3d","https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubDiscWithHoles.x3d","CatiaHubDiscWithHoles.wrl","https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubDiscWithHoles.wrl"]);
CADAssembly7.children = new MFNode();

CADAssembly7.children[0] = Inline8;

Transform6.children = new MFNode();

Transform6.children[0] = CADAssembly7;

CADAssembly5.children = new MFNode();

CADAssembly5.children[0] = Transform6;

let Transform9 = browser.currentScene.createNode("Transform");
Transform9.DEF = "TransformCatiaHubCap";
Transform9.translation = new SFVec3f(new float[0,0,0.03]);
let CADAssembly10 = browser.currentScene.createNode("CADAssembly");
CADAssembly10.name = "cap";
let Inline11 = browser.currentScene.createNode("Inline");
Inline11.DEF = "CatiaHubCap";
Inline11.url = new MFString(new java.lang.String["CatiaHubCap.x3d","https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubCap.x3d","CatiaHubCap.wrl","https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubCap.wrl"]);
CADAssembly10.children = new MFNode();

CADAssembly10.children[0] = Inline11;

Transform9.children = new MFNode();

Transform9.children[0] = CADAssembly10;

CADAssembly5.children[1] = Transform9;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.DEF = "TransformCatiaHubGasket";
let CADAssembly13 = browser.currentScene.createNode("CADAssembly");
CADAssembly13.name = "sleeve_sub_assembly";
let Transform14 = browser.currentScene.createNode("Transform");
Transform14.DEF = "Transform";
Transform14.translation = new SFVec3f(new float[0,0,0.05]);
let Inline15 = browser.currentScene.createNode("Inline");
Inline15.DEF = "CatiaHubGasket";
Inline15.url = new MFString(new java.lang.String["CatiaHubGasket.x3d","https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubGasket.x3d","CatiaHubGasket.wrl","https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubGasket.wrl"]);
Transform14.children = new MFNode();

Transform14.children[0] = Inline15;

CADAssembly13.children = new MFNode();

CADAssembly13.children[0] = Transform14;

Transform12.children = new MFNode();

Transform12.children[0] = CADAssembly13;

CADAssembly5.children[2] = Transform12;

let Transform16 = browser.currentScene.createNode("Transform");
Transform16.DEF = "TransformCatiaHubBushing";
Transform16.translation = new SFVec3f(new float[0,0,0.085]);
let CADAssembly17 = browser.currentScene.createNode("CADAssembly");
CADAssembly17.name = "cylinder";
let Inline18 = browser.currentScene.createNode("Inline");
Inline18.DEF = "CatiaHubBushing";
Inline18.url = new MFString(new java.lang.String["CatiaHubBushing.x3d","https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubBushing.x3d","CatiaHubBushing.wrl","https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubBushing.wrl"]);
CADAssembly17.children = new MFNode();

CADAssembly17.children[0] = Inline18;

Transform16.children = new MFNode();

Transform16.children[0] = CADAssembly17;

CADAssembly5.children[3] = Transform16;

Transform4.children = new MFNode();

Transform4.children[0] = CADAssembly5;

browser.currentScene.children[2] = Transform4;


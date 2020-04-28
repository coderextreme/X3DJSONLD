let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "PyramidWithAxes.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Pyramid with axes";
Viewpoint3.position = new SFVec3f(new float[0,0,40]);
browser.currentScene.children[1] = Viewpoint3;

let Transform4 = browser.currentScene.createNode("Transform");
Transform4.scale = new SFVec3f(new float[12,12,12]);
let Inline5 = browser.currentScene.createNode("Inline");
Inline5.DEF = "CoordinateAxes";
Inline5.url = new MFString(new java.lang.String["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"]);
Transform4.children = new MFNode();

Transform4.children[0] = Inline5;

browser.currentScene.children[2] = Transform4;

let Inline6 = browser.currentScene.createNode("Inline");
Inline6.url = new MFString(new java.lang.String["Pyramid.x3d","https://www.web3d.org/x3d/content/examples/Basic/course/Pyramid.x3d","Pyramid.wrl","https://www.web3d.org/x3d/content/examples/Basic/course/Pyramid.wrl"]);
browser.currentScene.children[3] = Inline6;


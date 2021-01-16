let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "ifscubeworks.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Group3 = browser.currentScene.createNode("Group");
let Shape4 = browser.currentScene.createNode("Shape");
let IndexedFaceSet5 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet5.DEF = "IndexedFaceSet";
IndexedFaceSet5.coordIndex = new MFInt32(new int[0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1]);
IndexedFaceSet5.normalIndex = new MFInt32(new int[0,0,1,2,3,4,5]);
IndexedFaceSet5.normalPerVertex = False;
IndexedFaceSet5.colorIndex = new MFInt32(new int[0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1]);
let Coordinate6 = browser.currentScene.createNode("Coordinate");
Coordinate6.point = new MFVec3f(new float[0,0,1,0,1,1,1,1,1,1,0,1]);
IndexedFaceSet5.coord = Coordinate6;

let Normal7 = browser.currentScene.createNode("Normal");
Normal7.vector = new MFVec3f(new float[1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1]);
IndexedFaceSet5.normal = Normal7;

let Color8 = browser.currentScene.createNode("Color");
Color8.color = new MFColor(new float[0,1,0]);
IndexedFaceSet5.color = Color8;

Shape4.geometry = IndexedFaceSet5;

Group3.children = new MFNode();

Group3.children[0] = Shape4;

browser.currentScene.children[1] = Group3;


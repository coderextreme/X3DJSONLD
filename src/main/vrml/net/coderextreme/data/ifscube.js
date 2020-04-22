let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.3";
let Group2 = browser.currentScene.createNode("Group");
let Shape3 = browser.currentScene.createNode("Shape");
let IndexedFaceSet4 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet4.creaseAngle = 1.57;
IndexedFaceSet4.DEF = "IndexedFaceSet";
IndexedFaceSet4.coordIndex = new MFInt32(new int[0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1]);
IndexedFaceSet4.normalIndex = new MFInt32(new int[0,-1,0,-1,1,-1,2,-1,3,-1,4,-1,5,-1]);
IndexedFaceSet4.normalPerVertex = False;
IndexedFaceSet4.colorIndex = new MFInt32(new int[0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1]);
let Coordinate5 = browser.currentScene.createNode("Coordinate");
Coordinate5.point = new MFVec3f(new float[0,0,1,0,1,1,1,1,1,1,0,1]);
IndexedFaceSet4.coord = Coordinate5;

let Normal6 = browser.currentScene.createNode("Normal");
Normal6.vector = new MFVec3f(new float[1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1]);
IndexedFaceSet4.normal = Normal6;

let Color7 = browser.currentScene.createNode("Color");
Color7.color = new MFColor(new float[0,1,0]);
IndexedFaceSet4.color = Color7;

Shape3.geometry = IndexedFaceSet4;

Group2.children = new MFNode();

Group2.children[0] = Shape3;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Group2;


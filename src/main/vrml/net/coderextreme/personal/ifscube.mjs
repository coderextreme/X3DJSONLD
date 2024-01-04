let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "ifscube.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "identifier";
meta3.content = "http://coderextreme.net/X3DJSONLD/src/main/data/ifscube.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "description";
meta4.content = "Template for an Indexed Face Set";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "creator";
meta5.content = "John Carlson";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "created";
meta6.content = "4 April 2017";
head1.meta[4] = meta6;

head = head1;

let Group8 = browser.currentScene.createNode("Group");
let Shape9 = browser.currentScene.createNode("Shape");
let IndexedFaceSet10 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet10.creaseAngle = 1.57;
IndexedFaceSet10.DEF = "IndexedFaceSet";
IndexedFaceSet10.coordIndex = new MFInt32(new int[0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1]);
IndexedFaceSet10.normalIndex = new MFInt32(new int[0,-1,0,-1,1,-1,2,-1,3,-1,4,-1,5,-1]);
IndexedFaceSet10.normalPerVertex = False;
IndexedFaceSet10.colorIndex = new MFInt32(new int[0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1]);
let Coordinate11 = browser.currentScene.createNode("Coordinate");
Coordinate11.point = new MFVec3f(new float[0,0,1,0,1,1,1,1,1,1,0,1]);
IndexedFaceSet10.coord = Coordinate11;

let Normal12 = browser.currentScene.createNode("Normal");
Normal12.vector = new MFVec3f(new float[1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1]);
IndexedFaceSet10.normal = Normal12;

let Color13 = browser.currentScene.createNode("Color");
Color13.color = new MFColor(new float[0,1,0]);
IndexedFaceSet10.color = Color13;

Shape9.geometry = IndexedFaceSet10;

Group8.children = new MFNode();

Group8.children[0] = Shape9;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Group8;


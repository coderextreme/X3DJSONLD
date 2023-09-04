let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "4.0";
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

head = head1;

let Group7 = browser.currentScene.createNode("Group");
let Shape8 = browser.currentScene.createNode("Shape");
let IndexedFaceSet9 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet9.DEF = "IndexedFaceSet";
IndexedFaceSet9.creaseAngle = 1.57;
IndexedFaceSet9.normalPerVertex = False;
IndexedFaceSet9.colorIndex = new MFInt32(new int[0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1]);
IndexedFaceSet9.normalIndex = new MFInt32(new int[0,-1,0,-1,1,-1,2,-1,3,-1,4,-1,5,-1]);
IndexedFaceSet9.coordIndex = new MFInt32(new int[0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1]);
let Color10 = browser.currentScene.createNode("Color");
Color10.color = new MFColor(new float[0,1,0]);
IndexedFaceSet9.color = Color10;

let Normal11 = browser.currentScene.createNode("Normal");
Normal11.vector = new MFVec3f(new float[1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1]);
IndexedFaceSet9.normal = Normal11;

let Coordinate12 = browser.currentScene.createNode("Coordinate");
Coordinate12.point = new MFVec3f(new float[0,0,1,0,1,1,1,1,1,1,0,1]);
IndexedFaceSet9.coord = Coordinate12;

Shape8.geometry = IndexedFaceSet9;

Group7.children = new MFNode();

Group7.children[0] = Shape8;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Group7;


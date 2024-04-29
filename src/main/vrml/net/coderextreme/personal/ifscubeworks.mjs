let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "ifscubeworks.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "identifier";
meta3.content = "http://coderextreme.net/X3DJSONLD/src/main/personal/ifscubeworks.x3d";
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

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "license";
meta7.content = "https://coderextreme.net/X3DJSONLD/LICENSE";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "generator";
meta8.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[6] = meta8;

head = head1;

let WorldInfo10 = browser.currentScene.createNode("WorldInfo");
WorldInfo10.title = "ifscubeworks.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo10;

let Group11 = browser.currentScene.createNode("Group");
let Shape12 = browser.currentScene.createNode("Shape");
let IndexedFaceSet13 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet13.DEF = "IndexedFaceSet";
IndexedFaceSet13.coordIndex = new MFInt32(new int[0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1]);
IndexedFaceSet13.normalIndex = new MFInt32(new int[0,0,1,2,3,4,5]);
IndexedFaceSet13.normalPerVertex = False;
IndexedFaceSet13.colorIndex = new MFInt32(new int[0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1]);
let Coordinate14 = browser.currentScene.createNode("Coordinate");
Coordinate14.point = new MFVec3f(new float[0,0,1,0,1,1,1,1,1,1,0,1]);
IndexedFaceSet13.coord = Coordinate14;

let Normal15 = browser.currentScene.createNode("Normal");
Normal15.vector = new MFVec3f(new float[1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1]);
IndexedFaceSet13.normal = Normal15;

let Color16 = browser.currentScene.createNode("Color");
Color16.color = new MFColor(new float[0,1,0]);
IndexedFaceSet13.color = Color16;

Shape12.geometry = IndexedFaceSet13;

Group11.children = new MFNode();

Group11.children[0] = Shape12;

browser.currentScene.children[1] = Group11;


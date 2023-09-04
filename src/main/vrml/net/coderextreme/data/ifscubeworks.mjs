let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "ifscubeworks.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "identifier";
meta3.content = "http://coderextreme.net/X3DJSONLD/src/main/data/ifscubeworks.x3d";
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
meta7.content = "https://www.web3d.org/x3d/content/examples/license.html";
head1.meta[5] = meta7;

head = head1;

let WorldInfo9 = browser.currentScene.createNode("WorldInfo");
WorldInfo9.title = "ifscubeworks.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo9;

let Group10 = browser.currentScene.createNode("Group");
let Shape11 = browser.currentScene.createNode("Shape");
let IndexedFaceSet12 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet12.DEF = "IndexedFaceSet";
IndexedFaceSet12.normalPerVertex = False;
IndexedFaceSet12.colorIndex = new MFInt32(new int[0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1]);
IndexedFaceSet12.normalIndex = new MFInt32(new int[0,0,1,2,3,4,5]);
IndexedFaceSet12.coordIndex = new MFInt32(new int[0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1]);
let Color13 = browser.currentScene.createNode("Color");
Color13.color = new MFColor(new float[0,1,0]);
IndexedFaceSet12.color = Color13;

let Normal14 = browser.currentScene.createNode("Normal");
Normal14.vector = new MFVec3f(new float[1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1]);
IndexedFaceSet12.normal = Normal14;

let Coordinate15 = browser.currentScene.createNode("Coordinate");
Coordinate15.point = new MFVec3f(new float[0,0,1,0,1,1,1,1,1,1,0,1]);
IndexedFaceSet12.coord = Coordinate15;

Shape11.geometry = IndexedFaceSet12;

Group10.children = new MFNode();

Group10.children[0] = Shape11;

browser.currentScene.children[1] = Group10;


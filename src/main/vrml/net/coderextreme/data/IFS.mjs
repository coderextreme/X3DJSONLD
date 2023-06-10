let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "HAnim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "title";
meta3.content = "JohnIFS.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "identifier";
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/IFS.x3d";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "description";
meta5.content = "An attempt at a standard LOA-4 skeleton";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "generator";
meta6.content = "h2.pl";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "modified";
meta7.content = "18 Jan 2023";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "creator";
meta8.content = "John Carlson";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "created";
meta9.content = "9 November 2020";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "license";
meta10.content = "../license.html";
head1.meta[8] = meta10;

head = head1;

let Group12 = browser.currentScene.createNode("Group");
//DEFS for markers of skeleton joints, segments, and sites
let Transform13 = browser.currentScene.createNode("Transform");
Transform13.translation = new SFVec3f(new float[0,2.1,0]);
let Shape14 = browser.currentScene.createNode("Shape");
Shape14.DEF = "HAnimSiteShape";
let IndexedFaceSet15 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet15.DEF = "DiamondIFS";
IndexedFaceSet15.creaseAngle = 0.5;
IndexedFaceSet15.solid = False;
IndexedFaceSet15.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let ColorRGBA16 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA16.DEF = "HAnimSiteColorRGBA";
ColorRGBA16.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
IndexedFaceSet15.color = ColorRGBA16;

let Coordinate17 = browser.currentScene.createNode("Coordinate");
Coordinate17.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet15.coord = Coordinate17;

Shape14.geometry = IndexedFaceSet15;

let Appearance18 = browser.currentScene.createNode("Appearance");
let Material19 = browser.currentScene.createNode("Material");
Material19.diffuseColor = new SFColor(new float[1,1,0]);
Material19.transparency = 0.3;
Appearance18.material = Material19;

Shape14.appearance = Appearance18;

Transform13.children = new MFNode();

Transform13.children[0] = Shape14;

Group12.children = new MFNode();

Group12.children[0] = Transform13;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Group12;

let NavigationInfo20 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo20.speed = 1.5;
browser.currentScene.children[1] = NavigationInfo20;

let Viewpoint21 = browser.currentScene.createNode("Viewpoint");
Viewpoint21.description = "default";
browser.currentScene.children[2] = Viewpoint21;


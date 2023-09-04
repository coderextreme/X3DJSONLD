let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "IFS.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "identifier";
meta3.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/IFS.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "description";
meta4.content = "An attempt at a standard LOA-4 skeleton";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "generator";
meta5.content = "h2.pl";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "modified";
meta6.content = "18 Jan 2023";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "creator";
meta7.content = "John Carlson";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "created";
meta8.content = "9 November 2020";
head1.meta[6] = meta8;

let component9 = browser.currentScene.createNode("component");
component9.name = "HAnim";
component9.level = 1;
head1.component[7] = component9;

head = head1;

let Group11 = browser.currentScene.createNode("Group");
let Transform12 = browser.currentScene.createNode("Transform");
Transform12.translation = new SFVec3f(new float[0,2.1,0]);
let Shape13 = browser.currentScene.createNode("Shape");
Shape13.DEF = "HAnimSiteShape";
let Appearance14 = browser.currentScene.createNode("Appearance");
let Material15 = browser.currentScene.createNode("Material");
Material15.diffuseColor = new SFColor(new float[1,1,0]);
Material15.transparency = 0.3;
Appearance14.material = Material15;

Shape13.appearance = Appearance14;

let IndexedFaceSet16 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet16.DEF = "DiamondIFS";
IndexedFaceSet16.solid = False;
IndexedFaceSet16.creaseAngle = 0.5;
IndexedFaceSet16.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let ColorRGBA17 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA17.DEF = "HAnimSiteColorRGBA";
ColorRGBA17.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
IndexedFaceSet16.color = ColorRGBA17;

let Coordinate18 = browser.currentScene.createNode("Coordinate");
Coordinate18.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet16.coord = Coordinate18;

Shape13.geometry = IndexedFaceSet16;

Transform12.child = new undefined();

Transform12.child[0] = Shape13;

Group11.children = new MFNode();

Group11.children[0] = Transform12;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Group11;

let NavigationInfo19 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo19.speed = 1.5;
browser.currentScene.children[1] = NavigationInfo19;

let Viewpoint20 = browser.currentScene.createNode("Viewpoint");
Viewpoint20.description = "default";
browser.currentScene.children[2] = Viewpoint20;


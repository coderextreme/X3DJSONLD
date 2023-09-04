let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "app.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "creator";
meta3.content = "Carlson, I";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Carlson, II";
head1.meta[2] = meta4;

head = head1;

let Group6 = browser.currentScene.createNode("Group");
let Shape7 = browser.currentScene.createNode("Shape");
let Appearance8 = browser.currentScene.createNode("Appearance");
let Material9 = browser.currentScene.createNode("Material");
Material9.diffuseColor = new SFColor(new float[1,0,0]);
Appearance8.material = Material9;

Shape7.appearance = Appearance8;

let Box10 = browser.currentScene.createNode("Box");
Shape7.geometry = Box10;

Group6.children = new MFNode();

Group6.children[0] = Shape7;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Group6;

let Transform11 = browser.currentScene.createNode("Transform");
Transform11.translation = new SFVec3f(new float[1,2,3]);
Transform11.rotation = new SFRotation(new float[7,8,9,3.14]);
Transform11.scale = new SFVec3f(new float[4,5,6]);
browser.currentScene.children[1] = Transform11;


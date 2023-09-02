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

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "creator";
meta5.content = "Carlson, III";
head1.meta[3] = meta5;

head = head1;

let Group7 = browser.currentScene.createNode("Group");
let Shape8 = browser.currentScene.createNode("Shape");
let Appearance9 = browser.currentScene.createNode("Appearance");
let Material10 = browser.currentScene.createNode("Material");
Material10.diffuseColor = new SFColor(new float[1,0,0]);
Appearance9.material = Material10;

Shape8.appearance = Appearance9;

let Box11 = browser.currentScene.createNode("Box");
Shape8.geometry = Box11;

Group7.children = new MFNode();

Group7.children[0] = Shape8;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Group7;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.rotation = new SFRotation(new float[7,8,9,3.14]);
Transform12.scale = new SFVec3f(new float[4,5,6]);
Transform12.translation = new SFVec3f(new float[1,2,3]);
browser.currentScene.children[1] = Transform12;


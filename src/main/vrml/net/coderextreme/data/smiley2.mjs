let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
let head1 = browser.currentScene.createNode("head");
head = head1;

let Transform3 = browser.currentScene.createNode("Transform");
Transform3.scale = new SFVec3f(new float[10,10,1]);
Transform3.rotation = new SFRotation(new float[1,0,0,3.14]);
let Shape4 = browser.currentScene.createNode("Shape");
let Appearance5 = browser.currentScene.createNode("Appearance");
let Material6 = browser.currentScene.createNode("Material");
Material6.diffuseColor = new SFColor(new float[0.5,0.8,0.5]);
Appearance5.material = Material6;

let ImageTexture7 = browser.currentScene.createNode("ImageTexture");
ImageTexture7.url = new MFString(new java.lang.String["./face2.jpg"]);
Appearance5.texture = ImageTexture7;

Shape4.appearance = Appearance5;

let Sphere8 = browser.currentScene.createNode("Sphere");
Shape4.geometry = Sphere8;

Transform3.child = new undefined();

Transform3.child[0] = Shape4;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Transform3;


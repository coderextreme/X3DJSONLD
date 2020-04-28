let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "GroupFormation.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "watch the boxes";
Viewpoint3.position = new SFVec3f(new float[0,2,10]);
browser.currentScene.children[1] = Viewpoint3;

//Translate and rotate the entire formation here. 90 degrees around y axis turns to West.
let Transform4 = browser.currentScene.createNode("Transform");
Transform4.rotation = new SFRotation(new float[0,1,0,-0.345]);
let Group5 = browser.currentScene.createNode("Group");
Group5.DEF = "LEAD_ENTITY";
let Shape6 = browser.currentScene.createNode("Shape");
Shape6.DEF = "FLYING_BOX";
let Box7 = browser.currentScene.createNode("Box");
Box7.size = new SFVec3f(new float[0.5,0.5,3]);
Shape6.geometry = Box7;

let Appearance8 = browser.currentScene.createNode("Appearance");
let Material9 = browser.currentScene.createNode("Material");
Material9.diffuseColor = new SFColor(new float[0,0.2,0.8]);
Appearance8.material = Material9;

Shape6.appearance = Appearance8;

Group5.children = new MFNode();

Group5.children[0] = Shape6;

Transform4.children = new MFNode();

Transform4.children[0] = Group5;

let Transform10 = browser.currentScene.createNode("Transform");
Transform10.DEF = "SECOND_ENTITY";
Transform10.translation = new SFVec3f(new float[5,0,-2]);
let Shape11 = browser.currentScene.createNode("Shape");
Shape11.USE = "FLYING_BOX";
Transform10.children = new MFNode();

Transform10.children[0] = Shape11;

Transform4.children[1] = Transform10;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.DEF = "THIRD_ENTITY";
Transform12.translation = new SFVec3f(new float[-5,0,-2]);
let Shape13 = browser.currentScene.createNode("Shape");
Shape13.USE = "FLYING_BOX";
Transform12.children = new MFNode();

Transform12.children[0] = Shape13;

Transform4.children[2] = Transform12;

browser.currentScene.children[2] = Transform4;


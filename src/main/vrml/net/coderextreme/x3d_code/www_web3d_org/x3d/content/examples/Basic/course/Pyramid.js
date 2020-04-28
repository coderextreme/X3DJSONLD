let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.0";
//Viewpoint is 1m left of center to provide good contrast
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "Pyramid.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Pyramid";
Viewpoint3.orientation = new SFRotation(new float[0,1,0,0.2]);
Viewpoint3.position = new SFVec3f(new float[4,0,25]);
browser.currentScene.children[1] = Viewpoint3;

let Transform4 = browser.currentScene.createNode("Transform");
Transform4.translation = new SFVec3f(new float[0,-5,0]);
let Shape5 = browser.currentScene.createNode("Shape");
let IndexedFaceSet6 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet6.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,0,-1,3,1,0]);
let Coordinate7 = browser.currentScene.createNode("Coordinate");
Coordinate7.point = new MFVec3f(new float[0,0,0,10,0,0,5,0,8.3,5,8.3,2.8]);
IndexedFaceSet6.coord = Coordinate7;

Shape5.geometry = IndexedFaceSet6;

let Appearance8 = browser.currentScene.createNode("Appearance");
let Material9 = browser.currentScene.createNode("Material");
Material9.diffuseColor = new SFColor(new float[0.8,0.8,0.2]);
Material9.specularColor = new SFColor(new float[0,0,0.5]);
Appearance8.material = Material9;

Shape5.appearance = Appearance8;

Transform4.children = new MFNode();

Transform4.children[0] = Shape5;

browser.currentScene.children[2] = Transform4;


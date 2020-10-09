let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.0";
let Viewpoint2 = browser.currentScene.createNode("Viewpoint");
Viewpoint2.description = "Front View";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Rear View";
Viewpoint3.orientation = new SFRotation(new float[0,1,0,3.14]);
Viewpoint3.position = new SFVec3f(new float[0,0,-10]);
browser.currentScene.children[1] = Viewpoint3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.description = "Top View";
Viewpoint4.orientation = new SFRotation(new float[1,0,0,-1.57]);
Viewpoint4.position = new SFVec3f(new float[0,10,0]);
browser.currentScene.children[2] = Viewpoint4;

let Viewpoint5 = browser.currentScene.createNode("Viewpoint");
Viewpoint5.description = "Bottom View";
Viewpoint5.orientation = new SFRotation(new float[1,0,0,1.57]);
Viewpoint5.position = new SFVec3f(new float[0,-10,0]);
browser.currentScene.children[3] = Viewpoint5;

let Viewpoint6 = browser.currentScene.createNode("Viewpoint");
Viewpoint6.description = "Right View";
Viewpoint6.orientation = new SFRotation(new float[0,1,0,1.57]);
Viewpoint6.position = new SFVec3f(new float[10,0,0]);
browser.currentScene.children[4] = Viewpoint6;

let Viewpoint7 = browser.currentScene.createNode("Viewpoint");
Viewpoint7.description = "Left View";
Viewpoint7.orientation = new SFRotation(new float[0,1,0,-1.57]);
Viewpoint7.position = new SFVec3f(new float[-10,0,0]);
browser.currentScene.children[5] = Viewpoint7;

let NavigationInfo8 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo8.type = new MFString(new java.lang.String["EXAMINE","WALK","FLY","ANY"]);
browser.currentScene.children[6] = NavigationInfo8;

let Shape9 = browser.currentScene.createNode("Shape");
let Appearance10 = browser.currentScene.createNode("Appearance");
let Material11 = browser.currentScene.createNode("Material");
Appearance10.material = Material11;

let PixelTexture12 = browser.currentScene.createNode("PixelTexture");
PixelTexture12.image = new SFImage(new int[2,2,4,-16776961,16711935,-1,-65281]);
PixelTexture12.repeatS = False;
PixelTexture12.repeatT = False;
Appearance10.texture = PixelTexture12;

Shape9.appearance = Appearance10;

let IndexedFaceSet13 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet13.coordIndex = new MFInt32(new int[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]);
let Coordinate14 = browser.currentScene.createNode("Coordinate");
Coordinate14.point = new MFVec3f(new float[-2,1.5,1,-2,-1.5,1,2,1.5,1,2,-1.5,1,2,1.5,-1,2,-1.5,-1,-2,1.5,-1,-2,-1.5,-1]);
IndexedFaceSet13.coord = Coordinate14;

Shape9.geometry = IndexedFaceSet13;

browser.currentScene.children[7] = Shape9;


let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "CADInterchange";
X3D0.version = "3.1";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "QuadSetExample.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let NavigationInfo3 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo3.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children[1] = NavigationInfo3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.DEF = "Side";
Viewpoint4.description = "QuadSet side view";
browser.currentScene.children[2] = Viewpoint4;

let Viewpoint5 = browser.currentScene.createNode("Viewpoint");
Viewpoint5.DEF = "Front";
Viewpoint5.description = "QuadSet front view";
Viewpoint5.orientation = new SFRotation(new float[0,1,0,1.57]);
Viewpoint5.position = new SFVec3f(new float[10,0,0]);
browser.currentScene.children[3] = Viewpoint5;

let Viewpoint6 = browser.currentScene.createNode("Viewpoint");
Viewpoint6.DEF = "Top";
Viewpoint6.description = "QuadSet top view";
Viewpoint6.orientation = new SFRotation(new float[1,0,0,-1.57]);
Viewpoint6.position = new SFVec3f(new float[0,10,0]);
browser.currentScene.children[4] = Viewpoint6;

let Transform7 = browser.currentScene.createNode("Transform");
Transform7.scale = new SFVec3f(new float[2,2,2]);
let Shape8 = browser.currentScene.createNode("Shape");
let Appearance9 = browser.currentScene.createNode("Appearance");
let Material10 = browser.currentScene.createNode("Material");
Material10.diffuseColor = new SFColor(new float[0.321569,0.592157,1]);
Appearance9.material = Material10;

Shape8.appearance = Appearance9;

let QuadSet11 = browser.currentScene.createNode("QuadSet");
QuadSet11.solid = False;
let Coordinate12 = browser.currentScene.createNode("Coordinate");
Coordinate12.point = new MFVec3f(new float[-1.5,0,0,-0.5,0,0,-0.5,1,-1,-1.5,1,-1,0.5,0,0,1.5,0,0,1.5,1,-1,0.5,1,-1,-0.5,2,-1,0.5,2,-1]);
QuadSet11.coord = Coordinate12;

Shape8.geometry = QuadSet11;

Transform7.children = new MFNode();

Transform7.children[0] = Shape8;

browser.currentScene.children[5] = Transform7;


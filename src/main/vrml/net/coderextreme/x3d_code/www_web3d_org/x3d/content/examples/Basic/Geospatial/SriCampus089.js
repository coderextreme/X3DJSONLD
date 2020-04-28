let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interactive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "SriCampus089.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let TouchSensor3 = browser.currentScene.createNode("TouchSensor");
TouchSensor3.DEF = "MouseOverPopupDescription";
TouchSensor3.description = "House-81";
TouchSensor3.enabled = False;
browser.currentScene.children[1] = TouchSensor3;

let Shape4 = browser.currentScene.createNode("Shape");
let Appearance5 = browser.currentScene.createNode("Appearance");
let Material6 = browser.currentScene.createNode("Material");
Material6.diffuseColor = new SFColor(new float[0.75,0.75,0.75]);
Appearance5.material = Material6;

Shape4.appearance = Appearance5;

let IndexedFaceSet7 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet7.convex = False;
IndexedFaceSet7.coordIndex = new MFInt32(new int[10,11,13,-1,9,12,8,-1,9,10,13,12,-1,8,12,13,11,-1,10,2,3,11,-1,8,0,1,9,-1,2,10,9,1,-1,0,8,11,3,-1,0,3,2,1,-1]);
IndexedFaceSet7.solid = False;
let Coordinate8 = browser.currentScene.createNode("Coordinate");
Coordinate8.DEF = "OBJECT-89-VERTICES";
Coordinate8.point = new MFVec3f(new float[-9.676358,-6.965627,23.128222,9.676358,-6.965627,23.128222,9.676358,-6.965627,-23.128222,-9.676358,-6.965627,-23.128222,-9.676358,1.4501029,23.128222,9.676358,1.4501029,23.128222,9.676358,1.4501029,-23.128222,-9.676358,1.4501029,-23.128222,-9.676358,1.4501029,23.128222,9.676358,1.4501029,23.128222,9.676358,1.4501029,-23.128222,-9.676358,1.4501029,-23.128222,0,6.965627,13.451863,0,6.965627,-13.451863]);
IndexedFaceSet7.coord = Coordinate8;

Shape4.geometry = IndexedFaceSet7;

browser.currentScene.children[2] = Shape4;


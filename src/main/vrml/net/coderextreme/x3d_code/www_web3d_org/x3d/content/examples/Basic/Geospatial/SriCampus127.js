let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interactive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "SriCampus127.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let TouchSensor3 = browser.currentScene.createNode("TouchSensor");
TouchSensor3.DEF = "MouseOverPopupDescription";
TouchSensor3.description = "Cylinder-72";
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
IndexedFaceSet7.coordIndex = new MFInt32(new int[24,23,22,21,20,19,18,17,16,15,14,13,-1,12,24,13,1,-1,11,23,24,12,-1,10,22,23,11,-1,9,21,22,10,-1,8,20,21,9,-1,7,19,20,8,-1,6,18,19,7,-1,5,17,18,6,-1,4,16,17,5,-1,3,15,16,4,-1,2,14,15,3,-1,1,13,14,2,-1,1,2,3,4,5,6,7,8,9,10,11,12,-1]);
IndexedFaceSet7.creaseAngle = 4;
IndexedFaceSet7.solid = False;
let Coordinate8 = browser.currentScene.createNode("Coordinate");
Coordinate8.DEF = "OBJECT-127-VERTICES";
Coordinate8.point = new MFVec3f(new float[0,10.061776,0,1.0506709,10.061776,0,0.9099076,10.061776,-0.52533543,0.52533543,10.061776,-0.9099076,6.433503e-17,10.061776,-1.0506709,-0.52533543,10.061776,-0.9099076,-0.9099076,10.061776,-0.52533543,-1.0506709,10.061776,-1.2867006e-16,-0.9099076,10.061776,0.52533543,-0.52533543,10.061776,0.9099076,-1.930051e-16,10.061776,1.0506709,0.52533543,10.061776,0.9099076,0.9099076,10.061776,0.52533543,1.0506709,-10.061776,0,0.9099076,-10.061776,-0.52533543,0.52533543,-10.061776,-0.9099076,6.433503e-17,-10.061776,-1.0506709,-0.52533543,-10.061776,-0.9099076,-0.9099076,-10.061776,-0.52533543,-1.0506709,-10.061776,-1.2867006e-16,-0.9099076,-10.061776,0.52533543,-0.52533543,-10.061776,0.9099076,-1.930051e-16,-10.061776,1.0506709,0.52533543,-10.061776,0.9099076,0.9099076,-10.061776,0.52533543,0,-10.061776,0]);
IndexedFaceSet7.coord = Coordinate8;

Shape4.geometry = IndexedFaceSet7;

browser.currentScene.children[2] = Shape4;


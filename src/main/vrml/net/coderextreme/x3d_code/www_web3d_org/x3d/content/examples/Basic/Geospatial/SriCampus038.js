let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interactive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "SriCampus038.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let TouchSensor3 = browser.currentScene.createNode("TouchSensor");
TouchSensor3.DEF = "MouseOverPopupDescription";
TouchSensor3.description = "Extrusion-32";
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
IndexedFaceSet7.coordIndex = new MFInt32(new int[0,1,23,22,-1,22,23,21,20,-1,20,21,19,18,-1,18,19,17,16,-1,16,17,15,14,-1,14,15,13,12,-1,12,13,11,10,-1,10,11,9,8,-1,8,9,7,6,-1,6,7,5,4,-1,4,5,3,2,-1,2,3,1,0,-1,1,3,5,7,9,11,13,15,17,19,21,23,-1,22,20,18,16,14,12,10,8,6,4,2,0,-1]);
IndexedFaceSet7.solid = False;
let Coordinate8 = browser.currentScene.createNode("Coordinate");
Coordinate8.DEF = "OBJECT-38-VERTICES";
Coordinate8.point = new MFVec3f(new float[0,0,0,0,-9.484278,0,3.3223958,0.0018668034,2.212849,3.3223958,-9.484278,2.212849,4.432964,0.0018668034,0.32619318,4.432964,-9.484278,0.32619318,21.44774,0.0018668034,10.711402,21.44774,-9.484278,10.711402,-4.010508,0.0018668034,52.605297,-4.010508,-9.484278,52.605297,-0.33522218,0.0018668034,54.886795,-0.33522218,-9.484278,54.886795,-3.8217719,0.0018668034,60.43055,-3.8217719,-9.484278,60.43055,-7.514823,0.0018668034,58.197594,-7.514823,-9.484278,58.197594,-8.589095,0.0018668034,60.43538,-8.589095,-9.484278,60.43538,-25.792877,0.0018668034,49.57786,-25.792877,-9.484278,49.57786,0.18562403,0.0018668034,8.225281,0.18562403,-9.484278,8.225281,-3.6218371,0.0018668034,5.8302464,-3.6218371,-9.484278,5.8302464]);
IndexedFaceSet7.coord = Coordinate8;

Shape4.geometry = IndexedFaceSet7;

browser.currentScene.children[2] = Shape4;


let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interactive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "SriCampus126.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let TouchSensor3 = browser.currentScene.createNode("TouchSensor");
TouchSensor3.DEF = "MouseOverPopupDescription";
TouchSensor3.description = "Extrusion-45";
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
IndexedFaceSet7.coordIndex = new MFInt32(new int[0,1,11,10,-1,10,11,9,8,-1,8,9,7,6,-1,6,7,5,4,-1,4,5,3,2,-1,2,3,1,0,-1,1,3,5,7,9,11,-1,10,8,6,4,2,0,-1]);
IndexedFaceSet7.solid = False;
let Coordinate8 = browser.currentScene.createNode("Coordinate");
Coordinate8.DEF = "OBJECT-126-VERTICES";
Coordinate8.point = new MFVec3f(new float[5.066829,0,3.1276891,5.066829,-12.265352,3.1276891,-10.888467,0.06769758,28.856411,-10.888467,-12.265352,28.856411,-28.493797,0.06769758,17.816875,-28.493797,-12.265352,17.816875,-36.22332,0.06769758,30.4933,-36.22332,-12.265352,30.4933,-52.176147,0.06769758,20.504843,-52.176147,-12.265352,20.504843,-28.390215,0.06769758,-18.102266,-28.390215,-12.265352,-18.102266]);
IndexedFaceSet7.coord = Coordinate8;

Shape4.geometry = IndexedFaceSet7;

browser.currentScene.children[2] = Shape4;


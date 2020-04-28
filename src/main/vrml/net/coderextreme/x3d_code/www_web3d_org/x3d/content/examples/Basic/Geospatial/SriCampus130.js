let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interactive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "SriCampus130.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let TouchSensor3 = browser.currentScene.createNode("TouchSensor");
TouchSensor3.DEF = "MouseOverPopupDescription";
TouchSensor3.description = "Extrusion-93";
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
IndexedFaceSet7.coordIndex = new MFInt32(new int[22,23,1,0,-1,20,21,23,22,-1,18,19,21,20,-1,16,17,19,18,-1,14,15,17,16,-1,12,13,15,14,-1,10,11,13,12,-1,8,9,11,10,-1,6,7,9,8,-1,4,5,7,6,-1,2,3,5,4,-1,0,1,3,2,-1,23,21,19,17,15,13,11,9,7,5,3,1,-1,0,2,4,6,8,10,12,14,16,18,20,22,-1]);
IndexedFaceSet7.solid = False;
let Coordinate8 = browser.currentScene.createNode("Coordinate");
Coordinate8.DEF = "OBJECT-130-VERTICES";
Coordinate8.point = new MFVec3f(new float[0,0,0,0,-19.724653,0,-6.8044662,0.2911204,-4.284637,-6.8044662,-19.724653,-4.284637,-2.6234202,0.2911204,-10.716507,-2.6234202,-19.724653,-10.716507,-15.842095,0.2911204,-18.61724,-15.842095,-19.724653,-18.61724,-19.784231,0.2911204,-12.059479,-19.784231,-19.724653,-12.059479,-26.428905,0.2911204,-16.336636,-26.428905,-19.724653,-16.336636,-34.09341,0.2911204,-3.7996523,-34.09341,-19.724653,-3.7996523,-27.319904,0.2911204,0.45736328,-27.319904,-19.724653,0.45736328,-31.540434,0.2911204,6.8987556,-31.540434,-19.724653,6.8987556,-18.79812,0.2911204,14.75616,-18.79812,-19.724653,14.75616,-14.643542,0.2911204,8.332657,-14.643542,-19.724653,8.332657,-8.036341,0.2911204,12.31677,-8.036341,-19.724653,12.31677]);
IndexedFaceSet7.coord = Coordinate8;

Shape4.geometry = IndexedFaceSet7;

browser.currentScene.children[2] = Shape4;


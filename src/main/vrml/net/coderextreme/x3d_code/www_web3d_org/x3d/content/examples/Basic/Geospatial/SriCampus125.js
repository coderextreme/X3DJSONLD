let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interactive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "SriCampus125.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let TouchSensor3 = browser.currentScene.createNode("TouchSensor");
TouchSensor3.DEF = "MouseOverPopupDescription";
TouchSensor3.description = "Extrusion-15";
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
IndexedFaceSet7.coordIndex = new MFInt32(new int[10,11,1,0,-1,8,9,11,10,-1,6,7,9,8,-1,4,5,7,6,-1,2,3,5,4,-1,0,1,3,2,-1,11,9,7,5,3,1,-1,0,2,4,6,8,10,-1]);
IndexedFaceSet7.solid = False;
let Coordinate8 = browser.currentScene.createNode("Coordinate");
Coordinate8.DEF = "OBJECT-125-VERTICES";
Coordinate8.point = new MFVec3f(new float[0.3075746,0,0.13641687,0.3075746,-10.897053,0.13641687,19.930931,-0.04462655,12.371759,19.930931,-10.897053,12.371759,21.730421,-0.04462655,10.188748,21.730421,-10.897053,10.188748,28.452564,-5.5624266,0.44381082,28.452564,-10.897053,0.44381082,8.15889,-5.517522,-12.376565,8.15889,-10.897053,-12.376565,1.8786962,-0.04462655,-2.1686823,1.8786962,-10.897053,-2.1686823]);
IndexedFaceSet7.coord = Coordinate8;

Shape4.geometry = IndexedFaceSet7;

browser.currentScene.children[2] = Shape4;


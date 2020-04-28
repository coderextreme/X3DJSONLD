let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interactive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "SriCampus084.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let TouchSensor3 = browser.currentScene.createNode("TouchSensor");
TouchSensor3.DEF = "MouseOverPopupDescription";
TouchSensor3.description = "Extrusion-1";
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
Coordinate8.DEF = "OBJECT-84-VERTICES";
Coordinate8.point = new MFVec3f(new float[0,0,0,0,-19.185282,0,39.48961,-0.009602958,25.27011,39.48961,-19.185282,25.27011,4.118791,-0.009602958,82.995636,4.118791,-19.185282,82.995636,-2.8337252,-0.009602958,78.492256,-2.8337252,-19.185282,78.492256,-12.33182,-0.009602958,94.01302,-12.33182,-19.185282,94.01302,57.142956,-0.009602958,138.72198,57.142956,-19.185282,138.72198,66.697876,-0.009602958,123.04895,66.697876,-19.185282,123.04895,19.938276,-0.009602958,93.16426,19.938276,-19.185282,93.16426,55.416702,-0.009602958,35.203,55.416702,-19.185282,35.203,62.583485,-0.009602958,39.806126,62.583485,-19.185282,39.806126,72.2735,-0.009602958,24.287418,72.2735,-19.185282,24.287418,9.762531,-0.009602958,-14.5450325,9.762531,-19.185282,-14.5450325]);
IndexedFaceSet7.coord = Coordinate8;

Shape4.geometry = IndexedFaceSet7;

browser.currentScene.children[2] = Shape4;


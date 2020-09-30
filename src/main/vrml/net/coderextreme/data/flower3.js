let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

let DirectionalLight3 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight3.direction = new SFVec3f(new float[0,-0.8,-0.2]);
DirectionalLight3.intensity = 0.5;
browser.currentScene.children[1] = DirectionalLight3;

let Background4 = browser.currentScene.createNode("Background");
Background4.skyColor = new MFColor(new float[1,1,1]);
Background4.transparency = 0;
browser.currentScene.children[2] = Background4;

let Viewpoint5 = browser.currentScene.createNode("Viewpoint");
Viewpoint5.description = "One mathematical orbital";
Viewpoint5.position = new SFVec3f(new float[0,0,50]);
browser.currentScene.children[3] = Viewpoint5;

let Transform6 = browser.currentScene.createNode("Transform");
Transform6.DEF = "OrbitTransform";
Transform6.translation = new SFVec3f(new float[8,0,0]);
Transform6.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform6.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape7 = browser.currentScene.createNode("Shape");
Shape7.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape7.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance8 = browser.currentScene.createNode("Appearance");
let Material9 = browser.currentScene.createNode("Material");
Material9.diffuseColor = new SFColor(new float[0,0.5,1]);
Material9.specularColor = new SFColor(new float[0,0.5,1]);
Appearance8.material = Material9;

Shape7.appearance = Appearance8;

let IndexedFaceSet10 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet10.convex = False;
IndexedFaceSet10.DEF = "Orbit";
let Coordinate11 = browser.currentScene.createNode("Coordinate");
Coordinate11.DEF = "OrbitCoordinates";
IndexedFaceSet10.coord = Coordinate11;

Shape7.geometry = IndexedFaceSet10;

Transform6.children = new MFNode();

Transform6.children[0] = Shape7;

browser.currentScene.children[4] = Transform6;

let TimeSensor12 = browser.currentScene.createNode("TimeSensor");
TimeSensor12.DEF = "Clock";
TimeSensor12.cycleInterval = 16;
TimeSensor12.loop = True;
browser.currentScene.children[5] = TimeSensor12;

let ROUTE13 = browser.currentScene.createNode("ROUTE");
ROUTE13.fromNode = "OrbitScript";
ROUTE13.fromField = "coordIndexes";
ROUTE13.toNode = "Orbit";
ROUTE13.toField = "coordIndex";
browser.currentScene.children[6] = ROUTE13;

let ROUTE14 = browser.currentScene.createNode("ROUTE");
ROUTE14.fromNode = "OrbitScript";
ROUTE14.fromField = "coordinates";
ROUTE14.toNode = "OrbitCoordinates";
ROUTE14.toField = "point";
browser.currentScene.children[7] = ROUTE14;

let ROUTE15 = browser.currentScene.createNode("ROUTE");
ROUTE15.fromNode = "Clock";
ROUTE15.fromField = "fraction_changed";
ROUTE15.toNode = "OrbitScript";
ROUTE15.toField = "set_fraction";
browser.currentScene.children[8] = ROUTE15;


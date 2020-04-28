let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.info = new MFString(new java.lang.String["how well do schemas handle this simple world without data typing for arrays?"]);
WorldInfo2.title = "Orbiter.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Hello, world";
Viewpoint3.orientation = new SFRotation(new float[0,1,0,3.14159]);
Viewpoint3.position = new SFVec3f(new float[0,0,-8]);
browser.currentScene.children[1] = Viewpoint3;

let Transform4 = browser.currentScene.createNode("Transform");
Transform4.DEF = "EarthCoordinateSystem";
let Group5 = browser.currentScene.createNode("Group");
Group5.DEF = "MiniWorld";
let Shape6 = browser.currentScene.createNode("Shape");
let Appearance7 = browser.currentScene.createNode("Appearance");
let ImageTexture8 = browser.currentScene.createNode("ImageTexture");
ImageTexture8.url = new MFString(new java.lang.String["earth-topo.png","earth-topo.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.gif"]);
Appearance7.texture = ImageTexture8;

Shape6.appearance = Appearance7;

let Sphere9 = browser.currentScene.createNode("Sphere");
Shape6.geometry = Sphere9;

Group5.children = new MFNode();

Group5.children[0] = Shape6;

Transform4.children = new MFNode();

Transform4.children[0] = Group5;

let Transform10 = browser.currentScene.createNode("Transform");
Transform10.DEF = "SimpleGeoStationarySatellite";
Transform10.rotation = new SFRotation(new float[1,0,0,0.3]);
Transform10.scale = new SFVec3f(new float[0.1,0.3,0.1]);
Transform10.translation = new SFVec3f(new float[0,0,5]);
let Shape11 = browser.currentScene.createNode("Shape");
let Appearance12 = browser.currentScene.createNode("Appearance");
let Material13 = browser.currentScene.createNode("Material");
Material13.diffuseColor = new SFColor(new float[0.9,0.1,0.1]);
Appearance12.material = Material13;

Shape11.appearance = Appearance12;

let Box14 = browser.currentScene.createNode("Box");
Shape11.geometry = Box14;

Transform10.children = new MFNode();

Transform10.children[0] = Shape11;

Transform4.children[1] = Transform10;

browser.currentScene.children[2] = Transform4;

let TimeSensor15 = browser.currentScene.createNode("TimeSensor");
TimeSensor15.DEF = "OrbitalTimeInterval";
TimeSensor15.cycleInterval = 12;
TimeSensor15.loop = True;
browser.currentScene.children[3] = TimeSensor15;

let OrientationInterpolator16 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator16.DEF = "SpinThoseThings";
OrientationInterpolator16.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator16.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,1.57079,0,1,0,3.14159,0,1,0,4.7123889,0,1,0,6.2831852]);
browser.currentScene.children[4] = OrientationInterpolator16;

let ROUTE17 = browser.currentScene.createNode("ROUTE");
ROUTE17.fromField = "fraction_changed";
ROUTE17.fromNode = "OrbitalTimeInterval";
ROUTE17.toField = "set_fraction";
ROUTE17.toNode = "SpinThoseThings";
browser.currentScene.children[5] = ROUTE17;

let ROUTE18 = browser.currentScene.createNode("ROUTE");
ROUTE18.fromField = "value_changed";
ROUTE18.fromNode = "SpinThoseThings";
ROUTE18.toField = "rotation";
ROUTE18.toNode = "EarthCoordinateSystem";
browser.currentScene.children[6] = ROUTE18;


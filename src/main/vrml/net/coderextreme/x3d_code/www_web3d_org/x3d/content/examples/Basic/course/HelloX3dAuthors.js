let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.info = new MFString(new java.lang.String["an introductory scene"]);
WorldInfo2.title = "Hello X3D Authors";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Hello, world";
Viewpoint3.orientation = new SFRotation(new float[0,1,0,3.14159]);
Viewpoint3.position = new SFVec3f(new float[0,0,-8]);
browser.currentScene.children[1] = Viewpoint3;

let TimeSensor4 = browser.currentScene.createNode("TimeSensor");
TimeSensor4.DEF = "OrbitalTimeInterval";
TimeSensor4.cycleInterval = 12;
TimeSensor4.loop = True;
browser.currentScene.children[2] = TimeSensor4;

let OrientationInterpolator5 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator5.DEF = "SpinThoseThings";
OrientationInterpolator5.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator5.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,1.57079,0,1,0,3.14159,0,1,0,4.7123889,0,1,0,6.2831852]);
browser.currentScene.children[3] = OrientationInterpolator5;

let ROUTE6 = browser.currentScene.createNode("ROUTE");
ROUTE6.fromField = "fraction_changed";
ROUTE6.fromNode = "OrbitalTimeInterval";
ROUTE6.toField = "set_fraction";
ROUTE6.toNode = "SpinThoseThings";
browser.currentScene.children[4] = ROUTE6;

let Transform7 = browser.currentScene.createNode("Transform");
Transform7.DEF = "EarthCoordinateSystem";
let Group8 = browser.currentScene.createNode("Group");
Group8.DEF = "MiniWorld";
let Shape9 = browser.currentScene.createNode("Shape");
let Appearance10 = browser.currentScene.createNode("Appearance");
let ImageTexture11 = browser.currentScene.createNode("ImageTexture");
ImageTexture11.url = new MFString(new java.lang.String["earth-topo.png","earth-topo.gif","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/course/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/course/earth-topo.gif"]);
Appearance10.texture = ImageTexture11;

Shape9.appearance = Appearance10;

let Sphere12 = browser.currentScene.createNode("Sphere");
Shape9.geometry = Sphere12;

Group8.children = new MFNode();

Group8.children[0] = Shape9;

Transform7.children = new MFNode();

Transform7.children[0] = Group8;

let Transform13 = browser.currentScene.createNode("Transform");
Transform13.DEF = "SimpleGeoStationarySatellite";
Transform13.rotation = new SFRotation(new float[1,0,0,0.3]);
Transform13.scale = new SFVec3f(new float[0.1,0.3,0.1]);
Transform13.translation = new SFVec3f(new float[0,0,5]);
let Shape14 = browser.currentScene.createNode("Shape");
let Appearance15 = browser.currentScene.createNode("Appearance");
let Material16 = browser.currentScene.createNode("Material");
Material16.diffuseColor = new SFColor(new float[0.9,0.1,0.1]);
Appearance15.material = Material16;

Shape14.appearance = Appearance15;

let Text17 = browser.currentScene.createNode("Text");
Text17.string = new MFString(new java.lang.String["Hello X3D Authors !!"]);
let FontStyle18 = browser.currentScene.createNode("FontStyle");
FontStyle18.size = 3;
Text17.fontStyle = FontStyle18;

Shape14.geometry = Text17;

Transform13.children = new MFNode();

Transform13.children[0] = Shape14;

Transform7.children[1] = Transform13;

browser.currentScene.children[5] = Transform7;

let ROUTE19 = browser.currentScene.createNode("ROUTE");
ROUTE19.fromField = "value_changed";
ROUTE19.fromNode = "SpinThoseThings";
ROUTE19.toField = "rotation";
ROUTE19.toNode = "EarthCoordinateSystem";
browser.currentScene.children[6] = ROUTE19;


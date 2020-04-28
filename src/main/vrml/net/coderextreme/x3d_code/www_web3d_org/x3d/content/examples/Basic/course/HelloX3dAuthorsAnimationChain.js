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
let ROUTE8 = browser.currentScene.createNode("ROUTE");
ROUTE8.fromField = "value_changed";
ROUTE8.fromNode = "SpinThoseThings";
ROUTE8.toField = "rotation";
ROUTE8.toNode = "EarthCoordinateSystem";
Transform7.children = new MFNode();

Transform7.children[0] = ROUTE8;

let Group9 = browser.currentScene.createNode("Group");
Group9.DEF = "MiniWorld";
let Shape10 = browser.currentScene.createNode("Shape");
let Appearance11 = browser.currentScene.createNode("Appearance");
let ImageTexture12 = browser.currentScene.createNode("ImageTexture");
ImageTexture12.url = new MFString(new java.lang.String["earth-topo.png","earth-topo.gif","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/course/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/course/earth-topo.gif"]);
Appearance11.texture = ImageTexture12;

Shape10.appearance = Appearance11;

let Sphere13 = browser.currentScene.createNode("Sphere");
Shape10.geometry = Sphere13;

Group9.children = new MFNode();

Group9.children[0] = Shape10;

Transform7.children[1] = Group9;

let Transform14 = browser.currentScene.createNode("Transform");
Transform14.DEF = "SimpleGeoStationarySatellite";
Transform14.rotation = new SFRotation(new float[1,0,0,0.3]);
Transform14.scale = new SFVec3f(new float[0.1,0.3,0.1]);
Transform14.translation = new SFVec3f(new float[0,0,5]);
let Shape15 = browser.currentScene.createNode("Shape");
let Appearance16 = browser.currentScene.createNode("Appearance");
let Material17 = browser.currentScene.createNode("Material");
Material17.diffuseColor = new SFColor(new float[0.9,0.1,0.1]);
Appearance16.material = Material17;

Shape15.appearance = Appearance16;

let Text18 = browser.currentScene.createNode("Text");
Text18.string = new MFString(new java.lang.String["Hello X3D Authors !!"]);
let FontStyle19 = browser.currentScene.createNode("FontStyle");
FontStyle19.size = 3;
Text18.fontStyle = FontStyle19;

Shape15.geometry = Text18;

Transform14.children = new MFNode();

Transform14.children[0] = Shape15;

let TouchSensor20 = browser.currentScene.createNode("TouchSensor");
TouchSensor20.DEF = "ClickTriggerTouchSensor";
TouchSensor20.description = "Click to start animation";
Transform14.children[1] = TouchSensor20;

let ROUTE21 = browser.currentScene.createNode("ROUTE");
ROUTE21.fromField = "touchTime";
ROUTE21.fromNode = "ClickTriggerTouchSensor";
ROUTE21.toField = "startTime";
ROUTE21.toNode = "OrbitalTimeInterval";
Transform14.children[2] = ROUTE21;

Transform7.children[2] = Transform14;

browser.currentScene.children[5] = Transform7;


let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.info = new MFString(new java.lang.String["how well do schemas handle this simple world without data typing for arrays?"]);
WorldInfo2.title = "Orbiter.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Background3 = browser.currentScene.createNode("Background");
Background3.groundColor = new MFColor(new float[0.8,0.8,1]);
Background3.skyColor = new MFColor(new float[0.8,0.8,1]);
browser.currentScene.children[1] = Background3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.description = "Hello, world";
Viewpoint4.orientation = new SFRotation(new float[0,1,0,3.14159]);
Viewpoint4.position = new SFVec3f(new float[0,0,-8]);
browser.currentScene.children[2] = Viewpoint4;

let Transform5 = browser.currentScene.createNode("Transform");
Transform5.DEF = "EarthCoordinateSystem";
let Group6 = browser.currentScene.createNode("Group");
Group6.DEF = "MiniWorld";
let Shape7 = browser.currentScene.createNode("Shape");
let Appearance8 = browser.currentScene.createNode("Appearance");
let ImageTexture9 = browser.currentScene.createNode("ImageTexture");
ImageTexture9.url = new MFString(new java.lang.String["earth-topo.png","earth-topo.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.gif"]);
Appearance8.texture = ImageTexture9;

Shape7.appearance = Appearance8;

let Sphere10 = browser.currentScene.createNode("Sphere");
Shape7.geometry = Sphere10;

Group6.children = new MFNode();

Group6.children[0] = Shape7;

Transform5.children = new MFNode();

Transform5.children[0] = Group6;

let Transform11 = browser.currentScene.createNode("Transform");
Transform11.DEF = "SimpleGeoStationarySatellite";
Transform11.rotation = new SFRotation(new float[1,0,0,0.3]);
Transform11.scale = new SFVec3f(new float[0.1,0.3,0.1]);
Transform11.translation = new SFVec3f(new float[0,0,5]);
let Shape12 = browser.currentScene.createNode("Shape");
let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
Material14.diffuseColor = new SFColor(new float[0.9,0.1,0.1]);
Appearance13.material = Material14;

Shape12.appearance = Appearance13;

let Text15 = browser.currentScene.createNode("Text");
Text15.string = new MFString(new java.lang.String["Hello SIGGRAPH","2003!!"]);
let FontStyle16 = browser.currentScene.createNode("FontStyle");
FontStyle16.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle16.size = 3;
Text15.fontStyle = FontStyle16;

Shape12.geometry = Text15;

Transform11.children = new MFNode();

Transform11.children[0] = Shape12;

Transform5.children[1] = Transform11;

browser.currentScene.children[3] = Transform5;

let TimeSensor17 = browser.currentScene.createNode("TimeSensor");
TimeSensor17.DEF = "OrbitalTimeInterval";
TimeSensor17.cycleInterval = 20;
TimeSensor17.loop = True;
browser.currentScene.children[4] = TimeSensor17;

let OrientationInterpolator18 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator18.DEF = "SpinThoseThings";
OrientationInterpolator18.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator18.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,1.57079,0,1,0,3.14159,0,1,0,4.7123889,0,1,0,6.2831852]);
browser.currentScene.children[5] = OrientationInterpolator18;

let ROUTE19 = browser.currentScene.createNode("ROUTE");
ROUTE19.fromField = "fraction_changed";
ROUTE19.fromNode = "OrbitalTimeInterval";
ROUTE19.toField = "set_fraction";
ROUTE19.toNode = "SpinThoseThings";
browser.currentScene.children[6] = ROUTE19;

let ROUTE20 = browser.currentScene.createNode("ROUTE");
ROUTE20.fromField = "value_changed";
ROUTE20.fromNode = "SpinThoseThings";
ROUTE20.toField = "rotation";
ROUTE20.toNode = "EarthCoordinateSystem";
browser.currentScene.children[7] = ROUTE20;


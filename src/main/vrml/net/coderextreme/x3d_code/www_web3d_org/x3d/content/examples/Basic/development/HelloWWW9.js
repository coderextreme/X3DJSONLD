let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.info = new MFString(new java.lang.String["A simple example VRML/X3D scene graph, easily modifiable for demonstration at WWW9 Amsterdam."]);
WorldInfo2.title = "Hello WWW 9";
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

let Anchor5 = browser.currentScene.createNode("Anchor");
Anchor5.description = "World WIde Web Conference 9 home page";
Anchor5.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor5.url = new MFString(new java.lang.String["http://www.www9.org"]);
let Transform6 = browser.currentScene.createNode("Transform");
Transform6.DEF = "EarthCoordinateSystem";
let Group7 = browser.currentScene.createNode("Group");
Group7.DEF = "MiniWorld";
let Shape8 = browser.currentScene.createNode("Shape");
let Appearance9 = browser.currentScene.createNode("Appearance");
let ImageTexture10 = browser.currentScene.createNode("ImageTexture");
ImageTexture10.url = new MFString(new java.lang.String["earth-topo.png","earth-topo.gif","https://www.web3d.org/x3d/content/earth-topo.png","https://www.web3d.org/x3d/content/earth-topo.gif"]);
Appearance9.texture = ImageTexture10;

Shape8.appearance = Appearance9;

let Sphere11 = browser.currentScene.createNode("Sphere");
Shape8.geometry = Sphere11;

Group7.children = new MFNode();

Group7.children[0] = Shape8;

Transform6.children = new MFNode();

Transform6.children[0] = Group7;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.DEF = "SimpleGeoStationarySatellite";
Transform12.rotation = new SFRotation(new float[1,0,0,0.3]);
Transform12.scale = new SFVec3f(new float[0.1,0.3,0.1]);
Transform12.translation = new SFVec3f(new float[0,0,5]);
let Shape13 = browser.currentScene.createNode("Shape");
let Appearance14 = browser.currentScene.createNode("Appearance");
let Material15 = browser.currentScene.createNode("Material");
Material15.diffuseColor = new SFColor(new float[0.9,0.1,0.1]);
Appearance14.material = Material15;

Shape13.appearance = Appearance14;

let Text16 = browser.currentScene.createNode("Text");
Text16.string = new MFString(new java.lang.String["Hello WWW9 !!","and WWW 2003 too!!"]);
let FontStyle17 = browser.currentScene.createNode("FontStyle");
FontStyle17.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle17.size = 3;
FontStyle17.style = "BOLD";
Text16.fontStyle = FontStyle17;

Shape13.geometry = Text16;

Transform12.children = new MFNode();

Transform12.children[0] = Shape13;

Transform6.children[1] = Transform12;

Anchor5.children = new MFNode();

Anchor5.children[0] = Transform6;

browser.currentScene.children[3] = Anchor5;

let TimeSensor18 = browser.currentScene.createNode("TimeSensor");
TimeSensor18.DEF = "OrbitalTimeInterval";
TimeSensor18.cycleInterval = 30;
TimeSensor18.loop = True;
browser.currentScene.children[4] = TimeSensor18;

let OrientationInterpolator19 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator19.DEF = "SpinThoseThings";
OrientationInterpolator19.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator19.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,1.57079,0,1,0,3.14159,0,1,0,4.7123889,0,1,0,6.2831852]);
browser.currentScene.children[5] = OrientationInterpolator19;

let ROUTE20 = browser.currentScene.createNode("ROUTE");
ROUTE20.fromField = "fraction_changed";
ROUTE20.fromNode = "OrbitalTimeInterval";
ROUTE20.toField = "set_fraction";
ROUTE20.toNode = "SpinThoseThings";
browser.currentScene.children[6] = ROUTE20;

let ROUTE21 = browser.currentScene.createNode("ROUTE");
ROUTE21.fromField = "value_changed";
ROUTE21.fromNode = "SpinThoseThings";
ROUTE21.toField = "rotation";
ROUTE21.toNode = "EarthCoordinateSystem";
browser.currentScene.children[7] = ROUTE21;


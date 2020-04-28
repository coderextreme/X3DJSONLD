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
let Anchor5 = browser.currentScene.createNode("Anchor");
Anchor5.description = "launch the SDK site";
Anchor5.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor5.url = new MFString(new java.lang.String["https://www.web3d.org/x3d/content/examples/X3dResources.html#Showcase"]);
let Transform6 = browser.currentScene.createNode("Transform");
Transform6.DEF = "SimpleGeoStationarySatellite";
Transform6.rotation = new SFRotation(new float[1,0,0,0.3]);
Transform6.scale = new SFVec3f(new float[0.1,0.3,0.1]);
Transform6.translation = new SFVec3f(new float[0,0,5]);
let Shape7 = browser.currentScene.createNode("Shape");
let Appearance8 = browser.currentScene.createNode("Appearance");
Appearance8.DEF = "TEXT_MATERIAL";
let Material9 = browser.currentScene.createNode("Material");
Material9.diffuseColor = new SFColor(new float[0.9,0.1,0.1]);
Appearance8.material = Material9;

Shape7.appearance = Appearance8;

let Text10 = browser.currentScene.createNode("Text");
Text10.string = new MFString(new java.lang.String["Hello SIGGRAPH 2000 !!","https://www.web3d.org/x3d/content/examples/X3dResources.html#Showcase"]);
let FontStyle11 = browser.currentScene.createNode("FontStyle");
FontStyle11.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle11.size = 2.5;
Text10.fontStyle = FontStyle11;

Shape7.geometry = Text10;

Transform6.children = new MFNode();

Transform6.children[0] = Shape7;

Anchor5.children = new MFNode();

Anchor5.children[0] = Transform6;

let Group12 = browser.currentScene.createNode("Group");
Group12.DEF = "MiniWorld";
let Shape13 = browser.currentScene.createNode("Shape");
let Appearance14 = browser.currentScene.createNode("Appearance");
let ImageTexture15 = browser.currentScene.createNode("ImageTexture");
ImageTexture15.url = new MFString(new java.lang.String["earth-topo.png","earth-topo.gif","https://www.web3d.org/x3d/content/earth-topo.png","https://www.web3d.org/x3d/content/earth-topo.gif"]);
Appearance14.texture = ImageTexture15;

let Material16 = browser.currentScene.createNode("Material");
Material16.emissiveColor = new SFColor(new float[0.05,0.05,0.1]);
Appearance14.material = Material16;

Shape13.appearance = Appearance14;

let Sphere17 = browser.currentScene.createNode("Sphere");
Shape13.geometry = Sphere17;

Group12.children = new MFNode();

Group12.children[0] = Shape13;

Anchor5.children[1] = Group12;

Transform4.children = new MFNode();

Transform4.children[0] = Anchor5;

browser.currentScene.children[2] = Transform4;

let TimeSensor18 = browser.currentScene.createNode("TimeSensor");
TimeSensor18.DEF = "OrbitalTimeInterval";
TimeSensor18.cycleInterval = 20;
TimeSensor18.loop = True;
browser.currentScene.children[3] = TimeSensor18;

let OrientationInterpolator19 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator19.DEF = "SpinThoseThings";
OrientationInterpolator19.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator19.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,1.57079,0,1,0,3.14159,0,1,0,4.7123889,0,1,0,6.2831852]);
browser.currentScene.children[4] = OrientationInterpolator19;

let ROUTE20 = browser.currentScene.createNode("ROUTE");
ROUTE20.fromField = "fraction_changed";
ROUTE20.fromNode = "OrbitalTimeInterval";
ROUTE20.toField = "set_fraction";
ROUTE20.toNode = "SpinThoseThings";
browser.currentScene.children[5] = ROUTE20;

let ROUTE21 = browser.currentScene.createNode("ROUTE");
ROUTE21.fromField = "value_changed";
ROUTE21.fromNode = "SpinThoseThings";
ROUTE21.toField = "rotation";
ROUTE21.toNode = "EarthCoordinateSystem";
browser.currentScene.children[6] = ROUTE21;


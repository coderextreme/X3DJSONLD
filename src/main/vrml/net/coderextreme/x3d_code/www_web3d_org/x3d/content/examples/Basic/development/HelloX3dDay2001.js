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
let Transform5 = browser.currentScene.createNode("Transform");
Transform5.DEF = "SimpleGeoStationarySatellite";
Transform5.rotation = new SFRotation(new float[1,0,0,0.3]);
Transform5.scale = new SFVec3f(new float[0.1,0.3,0.1]);
Transform5.translation = new SFVec3f(new float[0,0,5]);
let Shape6 = browser.currentScene.createNode("Shape");
let Appearance7 = browser.currentScene.createNode("Appearance");
Appearance7.DEF = "TEXT_MATERIAL";
let Material8 = browser.currentScene.createNode("Material");
Material8.diffuseColor = new SFColor(new float[0.9,0.1,0.1]);
Appearance7.material = Material8;

Shape6.appearance = Appearance7;

let Text9 = browser.currentScene.createNode("Text");
Text9.string = new MFString(new java.lang.String["Hello X3D Day Santa Clara !!","https://www.web3d.org/x3d"]);
let FontStyle10 = browser.currentScene.createNode("FontStyle");
FontStyle10.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle10.size = 3;
Text9.fontStyle = FontStyle10;

Shape6.geometry = Text9;

Transform5.children = new MFNode();

Transform5.children[0] = Shape6;

let Shape11 = browser.currentScene.createNode("Shape");
let Appearance12 = browser.currentScene.createNode("Appearance");
let Material13 = browser.currentScene.createNode("Material");
Appearance12.material = Material13;

Shape11.appearance = Appearance12;

let IndexedFaceSet14 = browser.currentScene.createNode("IndexedFaceSet");
Shape11.geometry = IndexedFaceSet14;

Transform5.children[1] = Shape11;

Transform4.children = new MFNode();

Transform4.children[0] = Transform5;

let Anchor15 = browser.currentScene.createNode("Anchor");
Anchor15.description = "launch the SDK site";
Anchor15.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor15.url = new MFString(new java.lang.String["https://www.web3d.org/x3d/content/examples/X3dResources.html#Showcase"]);
let Group16 = browser.currentScene.createNode("Group");
Group16.DEF = "MiniWorld";
let Shape17 = browser.currentScene.createNode("Shape");
let Appearance18 = browser.currentScene.createNode("Appearance");
let ImageTexture19 = browser.currentScene.createNode("ImageTexture");
ImageTexture19.url = new MFString(new java.lang.String["earth-topo.png","earth-topo.gif","https://www.web3d.org/x3d/content/earth-topo.png","https://www.web3d.org/x3d/content/earth-topo.gif"]);
Appearance18.texture = ImageTexture19;

let Material20 = browser.currentScene.createNode("Material");
Material20.emissiveColor = new SFColor(new float[0.05,0.05,0.1]);
Appearance18.material = Material20;

Shape17.appearance = Appearance18;

let Sphere21 = browser.currentScene.createNode("Sphere");
Shape17.geometry = Sphere21;

Group16.children = new MFNode();

Group16.children[0] = Shape17;

Anchor15.children = new MFNode();

Anchor15.children[0] = Group16;

Transform4.children[1] = Anchor15;

browser.currentScene.children[2] = Transform4;

let TimeSensor22 = browser.currentScene.createNode("TimeSensor");
TimeSensor22.DEF = "OrbitalTimeInterval";
TimeSensor22.cycleInterval = 20;
TimeSensor22.loop = True;
browser.currentScene.children[3] = TimeSensor22;

let OrientationInterpolator23 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator23.DEF = "SpinThoseThings";
OrientationInterpolator23.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator23.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,1.57079,0,1,0,3.14159,0,1,0,4.7123889,0,1,0,6.2831852]);
browser.currentScene.children[4] = OrientationInterpolator23;

let ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromField = "fraction_changed";
ROUTE24.fromNode = "OrbitalTimeInterval";
ROUTE24.toField = "set_fraction";
ROUTE24.toNode = "SpinThoseThings";
browser.currentScene.children[5] = ROUTE24;

let ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromField = "value_changed";
ROUTE25.fromNode = "SpinThoseThings";
ROUTE25.toField = "rotation";
ROUTE25.toNode = "EarthCoordinateSystem";
browser.currentScene.children[6] = ROUTE25;


let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "CoordinateInterpolator2dExample.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Click to activate animation";
Viewpoint3.orientation = new SFRotation(new float[1,0,0,-0.4]);
Viewpoint3.position = new SFVec3f(new float[0,4,10]);
browser.currentScene.children[1] = Viewpoint3;

let TimeSensor4 = browser.currentScene.createNode("TimeSensor");
TimeSensor4.DEF = "Clock";
TimeSensor4.cycleInterval = 5;
TimeSensor4.enabled = False;
TimeSensor4.loop = True;
browser.currentScene.children[2] = TimeSensor4;

let CoordinateInterpolator2D5 = browser.currentScene.createNode("CoordinateInterpolator2D");
CoordinateInterpolator2D5.DEF = "InterpolateCrossSection";
CoordinateInterpolator2D5.key = new MFFloat(new float[0,0.45,0.9,1]);
CoordinateInterpolator2D5.keyValue = new MFVec2f(new float[1,1,1,-1,-1,-1,-1,1,1,1,2,2,2,-2,-1,-1,-1,1,2,2,1,1,1,-1,-1,-1,-1,1,1,1,1,1,1,-1,-1,-1,-1,1,1,1]);
browser.currentScene.children[3] = CoordinateInterpolator2D5;

let ROUTE6 = browser.currentScene.createNode("ROUTE");
ROUTE6.fromField = "fraction_changed";
ROUTE6.fromNode = "Clock";
ROUTE6.toField = "set_fraction";
ROUTE6.toNode = "InterpolateCrossSection";
browser.currentScene.children[4] = ROUTE6;

let Transform7 = browser.currentScene.createNode("Transform");
Transform7.translation = new SFVec3f(new float[0.25,1,0]);
let TouchSensor8 = browser.currentScene.createNode("TouchSensor");
TouchSensor8.DEF = "Toucher";
TouchSensor8.description = "click & hold shape to animate Extrusion";
Transform7.children = new MFNode();

Transform7.children[0] = TouchSensor8;

let ROUTE9 = browser.currentScene.createNode("ROUTE");
ROUTE9.fromField = "isActive";
ROUTE9.fromNode = "Toucher";
ROUTE9.toField = "enabled";
ROUTE9.toNode = "Clock";
Transform7.children[1] = ROUTE9;

//also reset clock to restart
let ROUTE10 = browser.currentScene.createNode("ROUTE");
ROUTE10.fromField = "touchTime";
ROUTE10.fromNode = "Toucher";
ROUTE10.toField = "startTime";
ROUTE10.toNode = "Clock";
Transform7.children[2] = ROUTE10;

let Shape11 = browser.currentScene.createNode("Shape");
let Extrusion12 = browser.currentScene.createNode("Extrusion");
Extrusion12.DEF = "AnimatedCrossSectionExtrusion";
Extrusion12.spine = new MFVec3f(new float[-4,0,-2,-1,0,-2,2,0,1,2,0,4]);
Shape11.geometry = Extrusion12;

let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
Material14.diffuseColor = new SFColor(new float[0.2,0.8,0.4]);
Appearance13.material = Material14;

Shape11.appearance = Appearance13;

Transform7.children[3] = Shape11;

let ROUTE15 = browser.currentScene.createNode("ROUTE");
ROUTE15.fromField = "value_changed";
ROUTE15.fromNode = "InterpolateCrossSection";
ROUTE15.toField = "set_crossSection";
ROUTE15.toNode = "AnimatedCrossSectionExtrusion";
Transform7.children[4] = ROUTE15;

browser.currentScene.children[5] = Transform7;

let Transform16 = browser.currentScene.createNode("Transform");
Transform16.translation = new SFVec3f(new float[-1.5,-1,2]);
let Billboard17 = browser.currentScene.createNode("Billboard");
Billboard17.axisOfRotation = new SFVec3f(new float[0,0,0]);
let Shape18 = browser.currentScene.createNode("Shape");
let Text19 = browser.currentScene.createNode("Text");
Text19.string = new MFString(new java.lang.String["click & hold shape","to animate Extrusion"]);
let FontStyle20 = browser.currentScene.createNode("FontStyle");
FontStyle20.family = new MFString(new java.lang.String["SANS"]);
FontStyle20.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle20.size = 0.8;
Text19.fontStyle = FontStyle20;

Shape18.geometry = Text19;

let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new SFColor(new float[0.8,0.4,0.2]);
Appearance21.material = Material22;

Shape18.appearance = Appearance21;

Billboard17.children = new MFNode();

Billboard17.children[0] = Shape18;

Transform16.children = new MFNode();

Transform16.children[0] = Billboard17;

browser.currentScene.children[6] = Transform16;


let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
//====================
//Example instance
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "ExtrusionExampleShip.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let NavigationInfo3 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo3.speed = 4;
browser.currentScene.children[1] = NavigationInfo3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.description = "ship hull";
Viewpoint4.position = new SFVec3f(new float[0,0,40]);
browser.currentScene.children[2] = Viewpoint4;

let Viewpoint5 = browser.currentScene.createNode("Viewpoint");
Viewpoint5.description = "stack";
Viewpoint5.position = new SFVec3f(new float[8,5,20]);
browser.currentScene.children[3] = Viewpoint5;

let Viewpoint6 = browser.currentScene.createNode("Viewpoint");
Viewpoint6.description = "smoke extrusion start";
Viewpoint6.position = new SFVec3f(new float[6.8,7,10]);
browser.currentScene.children[4] = Viewpoint6;

let Viewpoint7 = browser.currentScene.createNode("Viewpoint");
Viewpoint7.description = "forward starboard quarter";
Viewpoint7.orientation = new SFRotation(new float[0,1,0,0.5]);
Viewpoint7.position = new SFVec3f(new float[20,3,25]);
browser.currentScene.children[5] = Viewpoint7;

let Transform8 = browser.currentScene.createNode("Transform");
Transform8.rotation = new SFRotation(new float[0,1,0,1.57]);
Transform8.translation = new SFVec3f(new float[15,30,0]);
let Viewpoint9 = browser.currentScene.createNode("Viewpoint");
Viewpoint9.description = "touch smoke to animate";
Viewpoint9.orientation = new SFRotation(new float[1,0,0,-1]);
Viewpoint9.position = new SFVec3f(new float[0,0,0]);
Transform8.children = new MFNode();

Transform8.children[0] = Viewpoint9;

browser.currentScene.children[6] = Transform8;

let Background10 = browser.currentScene.createNode("Background");
Background10.groundColor = new MFColor(new float[0.7,0.7,0.7]);
Background10.skyAngle = new MFFloat(new float[0.05,1.5,1.59]);
Background10.skyColor = new MFColor(new float[0.6,0.6,0.4,0.4,0.4,0.7,0.3,0.3,0.6,0.1,0.1,0.3]);
browser.currentScene.children[7] = Background10;

//====================
let Transform11 = browser.currentScene.createNode("Transform");
Transform11.DEF = "SmokePosition";
Transform11.translation = new SFVec3f(new float[5.8,7,0]);
//Smoke shows that crossSection, spine, scale and orientation can be animated
let Shape12 = browser.currentScene.createNode("Shape");
let Extrusion13 = browser.currentScene.createNode("Extrusion");
Extrusion13.DEF = "Smoke";
Extrusion13.creaseAngle = 1;
Extrusion13.crossSection = new MFVec2f(new float[0,1,-1,0,0,-0.5,1.5,0,0,1]);
Extrusion13.orientation = new MFRotation(new float[0,1,0,0,0,1,0,0,0,1,0,-0.4,0,1,0,0,1,0,0,0.4]);
Extrusion13.scale = new MFVec2f(new float[0.8,0.7,0.7,0.6,0.6,0.5,0.5,0.3,0.4,0.2]);
Extrusion13.solid = False;
Extrusion13.spine = new MFVec3f(new float[0,0,0,-1,0,0,-2,0,0,-3,0,0,-5,0,0]);
Shape12.geometry = Extrusion13;

let Appearance14 = browser.currentScene.createNode("Appearance");
let Material15 = browser.currentScene.createNode("Material");
Material15.diffuseColor = new SFColor(new float[0,0.9,0.9]);
Material15.transparency = 0.3;
Appearance14.material = Material15;

Shape12.appearance = Appearance14;

Transform11.children = new MFNode();

Transform11.children[0] = Shape12;

let TouchSensor16 = browser.currentScene.createNode("TouchSensor");
TouchSensor16.DEF = "TouchSmoke";
TouchSensor16.description = "click smoke to animate";
Transform11.children[1] = TouchSensor16;

let TimeSensor17 = browser.currentScene.createNode("TimeSensor");
TimeSensor17.DEF = "SmokeClock";
TimeSensor17.cycleInterval = 30;
TimeSensor17.startTime = -1;
Transform11.children[2] = TimeSensor17;

let CoordinateInterpolator18 = browser.currentScene.createNode("CoordinateInterpolator");
CoordinateInterpolator18.DEF = "SmokeSpineInterpolator";
CoordinateInterpolator18.key = new MFFloat(new float[0,0.2,0.5,0.8,1]);
CoordinateInterpolator18.keyValue = new MFVec3f(new float[0,0,0,-1,0,0,-2,0,0,-3,0,0,-5,0,0,0,0,0,-2,0,0,-4,-0.5,0,-6,-1,0,-8,-2,0,0,0,0,-4,0,0,-8,-1,0,-13,-2,0,-20,-2.5,0,0,0,0,-2,0,0,-4,-0.5,0,-6,-1,0,-8,-2,0,0,0,0,-1,0,0,-2,0,0,-3,0,0,-5,0,0]);
Transform11.children[3] = CoordinateInterpolator18;

let ROUTE19 = browser.currentScene.createNode("ROUTE");
ROUTE19.fromField = "touchTime";
ROUTE19.fromNode = "TouchSmoke";
ROUTE19.toField = "startTime";
ROUTE19.toNode = "SmokeClock";
Transform11.children[4] = ROUTE19;

let ROUTE20 = browser.currentScene.createNode("ROUTE");
ROUTE20.fromField = "fraction_changed";
ROUTE20.fromNode = "SmokeClock";
ROUTE20.toField = "set_fraction";
ROUTE20.toNode = "SmokeSpineInterpolator";
Transform11.children[5] = ROUTE20;

let ROUTE21 = browser.currentScene.createNode("ROUTE");
ROUTE21.fromField = "value_changed";
ROUTE21.fromNode = "SmokeSpineInterpolator";
ROUTE21.toField = "set_spine";
ROUTE21.toNode = "Smoke";
Transform11.children[6] = ROUTE21;

browser.currentScene.children[8] = Transform11;

let Transform22 = browser.currentScene.createNode("Transform");
Transform22.DEF = "SuperstructurePosition";
Transform22.translation = new SFVec3f(new float[12,1,0]);
let Shape23 = browser.currentScene.createNode("Shape");
let Extrusion24 = browser.currentScene.createNode("Extrusion");
Extrusion24.DEF = "Superstructure";
Extrusion24.crossSection = new MFVec2f(new float[0.1,1,0.1,-1,-1,-1,-1,1,0.1,1]);
Extrusion24.scale = new MFVec2f(new float[6,2,6,2,6,2,1,1.8,1,1.8]);
Extrusion24.spine = new MFVec3f(new float[0,0,0,0,1,0,0,1.95,0,0,1.96,0,0,3,0]);
Shape23.geometry = Extrusion24;

let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
Material26.diffuseColor = new SFColor(new float[0.3,0.6,0.6]);
Appearance25.material = Material26;

Shape23.appearance = Appearance25;

Transform22.children = new MFNode();

Transform22.children[0] = Shape23;

browser.currentScene.children[9] = Transform22;

let Transform27 = browser.currentScene.createNode("Transform");
Transform27.DEF = "StackPosition";
Transform27.translation = new SFVec3f(new float[8,1,0]);
let Shape28 = browser.currentScene.createNode("Shape");
let Extrusion29 = browser.currentScene.createNode("Extrusion");
Extrusion29.DEF = "Stack";
Extrusion29.creaseAngle = 1;
Extrusion29.crossSection = new MFVec2f(new float[0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1]);
Extrusion29.orientation = new MFRotation(new float[0,1,0,0,0,1,0,0,0,1,0,0,0,0,1,0.4]);
Extrusion29.scale = new MFVec2f(new float[1,1,1,1,0.9,0.85,0.8,0.4]);
Extrusion29.spine = new MFVec3f(new float[0.1,2,0,0,5,0,-0.4,5.6,0,-1,6,0]);
Shape28.geometry = Extrusion29;

let Appearance30 = browser.currentScene.createNode("Appearance");
let Material31 = browser.currentScene.createNode("Material");
Material31.diffuseColor = new SFColor(new float[0.3,0.3,0.3]);
Material31.transparency = 0.5;
Appearance30.material = Material31;

Shape28.appearance = Appearance30;

Transform27.children = new MFNode();

Transform27.children[0] = Shape28;

browser.currentScene.children[10] = Transform27;

let Transform32 = browser.currentScene.createNode("Transform");
Transform32.DEF = "HullPosition";
Transform32.translation = new SFVec3f(new float[0,1,0]);
let Shape33 = browser.currentScene.createNode("Shape");
let Extrusion34 = browser.currentScene.createNode("Extrusion");
Extrusion34.DEF = "Hull";
Extrusion34.creaseAngle = 3.14;
Extrusion34.crossSection = new MFVec2f(new float[0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1]);
Extrusion34.orientation = new MFRotation(new float[1,0,0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,0,1,-0.5]);
Extrusion34.scale = new MFVec2f(new float[3,4,4,4,4,4,4,4,5,0.1]);
Extrusion34.solid = False;
Extrusion34.spine = new MFVec3f(new float[-20,0,0,-17,0,0,0,0,0,10,0,0,22,1,0]);
Shape33.geometry = Extrusion34;

let Appearance35 = browser.currentScene.createNode("Appearance");
let Material36 = browser.currentScene.createNode("Material");
Material36.diffuseColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance35.material = Material36;

Shape33.appearance = Appearance35;

Transform32.children = new MFNode();

Transform32.children[0] = Shape33;

browser.currentScene.children[11] = Transform32;

//====================
//Display world coordinate axes at (0 0 0)
let Transform37 = browser.currentScene.createNode("Transform");
Transform37.scale = new SFVec3f(new float[5,5,5]);
let Inline38 = browser.currentScene.createNode("Inline");
Inline38.DEF = "CoordinateAxes";
Inline38.url = new MFString(new java.lang.String["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"]);
Transform37.children = new MFNode();

Transform37.children[0] = Inline38;

browser.currentScene.children[12] = Transform37;

//Display smoke extrusion coordinate axes: y along spine, x pointing up
let Transform39 = browser.currentScene.createNode("Transform");
Transform39.translation = new SFVec3f(new float[6,8.5,0]);
let Transform40 = browser.currentScene.createNode("Transform");
Transform40.rotation = new SFRotation(new float[0,0,1,1.57]);
let Inline41 = browser.currentScene.createNode("Inline");
Inline41.USE = "CoordinateAxes";
Transform40.children = new MFNode();

Transform40.children[0] = Inline41;

Transform39.children = new MFNode();

Transform39.children[0] = Transform40;

browser.currentScene.children[13] = Transform39;


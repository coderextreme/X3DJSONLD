let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "ImportExportSyntax.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let NavigationInfo3 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo3.DEF = "LocalNavInfo";
browser.currentScene.children[1] = NavigationInfo3;

let EXPORT4 = browser.currentScene.createNode("EXPORT");
EXPORT4.AS = "NI";
EXPORT4.localDEF = "LocalNavInfo";
browser.currentScene.children[2] = EXPORT4;

let Transform5 = browser.currentScene.createNode("Transform");
Transform5.scale = new SFVec3f(new float[2,2,2]);
//the following Inline presumably contains some node with DEF=\"SomeRemoteNodeNameInsideInlinedScene\"
let Inline6 = browser.currentScene.createNode("Inline");
Inline6.DEF = "CoordinateAxes";
Inline6.url = new MFString(new java.lang.String["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"]);
Transform5.children = new MFNode();

Transform5.children[0] = Inline6;

let IMPORT7 = browser.currentScene.createNode("IMPORT");
IMPORT7.AS = "NewImportedNodeName";
IMPORT7.importedDEF = "SomeRemoteNodeNameInsideInlinedScene";
IMPORT7.inlineDEF = "CoordinateAxes";
Transform5.children[1] = IMPORT7;

browser.currentScene.children[3] = Transform5;

//=====================
//Abstract spec IMPORT example
let Inline8 = browser.currentScene.createNode("Inline");
Inline8.DEF = "I1";
Inline8.url = new MFString(new java.lang.String["someUrl.x3d","http://online.address/someUrl.x3d"]);
browser.currentScene.children[4] = Inline8;

let IMPORT9 = browser.currentScene.createNode("IMPORT");
IMPORT9.AS = "I1Root";
IMPORT9.importedDEF = "rootTransform";
IMPORT9.inlineDEF = "I1";
browser.currentScene.children[5] = IMPORT9;

let TimeSensor10 = browser.currentScene.createNode("TimeSensor");
TimeSensor10.DEF = "CLOCK";
browser.currentScene.children[6] = TimeSensor10;

let PositionInterpolator11 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator11.DEF = "PI";
PositionInterpolator11.key = new MFFloat(new float[0,1]);
PositionInterpolator11.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
browser.currentScene.children[7] = PositionInterpolator11;

let ROUTE12 = browser.currentScene.createNode("ROUTE");
ROUTE12.fromField = "fraction_changed";
ROUTE12.fromNode = "CLOCK";
ROUTE12.toField = "set_fraction";
ROUTE12.toNode = "PI";
browser.currentScene.children[8] = ROUTE12;

let ROUTE13 = browser.currentScene.createNode("ROUTE");
ROUTE13.fromField = "value_changed";
ROUTE13.fromNode = "PI";
ROUTE13.toField = "set_translation";
ROUTE13.toNode = "I1Root";
browser.currentScene.children[9] = ROUTE13;

//=====================
//Abstract spec EXPORT example
let Transform14 = browser.currentScene.createNode("Transform");
Transform14.DEF = "T1";
browser.currentScene.children[10] = Transform14;

let EXPORT15 = browser.currentScene.createNode("EXPORT");
EXPORT15.AS = "rootTransform";
EXPORT15.localDEF = "T1";
browser.currentScene.children[11] = EXPORT15;


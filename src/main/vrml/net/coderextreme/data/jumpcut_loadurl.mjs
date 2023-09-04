let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "jumpcut_loadurl.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "reference";
meta3.content = "http://www.nist.gov/vrml.html";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "reference";
meta4.content = "http://www.itl.nist.gov/div897/ctg/vrml/vrml.html";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "creator";
meta5.content = "http://www.itl.nist.gov/div897/ctg/vrml/members.html";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "disclaimer";
meta6.content = "This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "info";
meta7.content = "Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "translator";
meta8.content = "Michael Kass NIST, Don Brutzman NPS";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "translated";
meta9.content = "21 January 2001";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "modified";
meta10.content = "20 October 2019";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "description";
meta11.content = "Test jumpcut Viewpoint transition using Script loadUrl method. A NavigationInfo type of ANY is NOT included in the NavigationInfo node field in this world. Consequently, a Script node with a call to the \"loadURL\" method, with a url corresponding to the MFString \"Top_View\" (the name of a Viewpoint in this world) should create a \"jump cut\" transition of views when the Box geometry in this world is indicated by the pointing device. As a result, indicating the Box geometry should result in a Viewpoint transition to the top view of the Box geometry.";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "identifier";
meta12.content = "https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "generator";
meta13.content = "Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "generator";
meta14.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[12] = meta14;

head = head1;

let WorldInfo16 = browser.currentScene.createNode("WorldInfo");
WorldInfo16.title = "jumpcut_loadurl.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo16;

let Background17 = browser.currentScene.createNode("Background");
Background17.skyColor = new MFColor(new float[0,0,1]);
Background17.groundAngle = new MFFloat(new float[1.57]);
Background17.groundColor = new MFColor(new float[0,0.5,0,0,0.5,0]);
browser.currentScene.children[1] = Background17;

let NavigationInfo18 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo18.type = new MFString(new java.lang.String["EXAMINE","WALK","FLY","ANY"]);
browser.currentScene.children[2] = NavigationInfo18;

let Viewpoint19 = browser.currentScene.createNode("Viewpoint");
Viewpoint19.DEF = "Front_View";
Viewpoint19.description = "Front View";
browser.currentScene.children[3] = Viewpoint19;

let Viewpoint20 = browser.currentScene.createNode("Viewpoint");
Viewpoint20.DEF = "Top_View";
Viewpoint20.description = "Top View";
Viewpoint20.position = new SFVec3f(new float[0,10,0]);
Viewpoint20.orientation = new SFRotation(new float[1,0,0,-1.57]);
browser.currentScene.children[4] = Viewpoint20;

let TouchSensor21 = browser.currentScene.createNode("TouchSensor");
TouchSensor21.DEF = "STARTER";
TouchSensor21.description = "touch to activate";
browser.currentScene.children[5] = TouchSensor21;

let Transform22 = browser.currentScene.createNode("Transform");
Transform22.DEF = "ROOT";
let Shape23 = browser.currentScene.createNode("Shape");
let Appearance24 = browser.currentScene.createNode("Appearance");
let Material25 = browser.currentScene.createNode("Material");
Appearance24.material = Material25;

Shape23.appearance = Appearance24;

let Box26 = browser.currentScene.createNode("Box");
Shape23.geometry = Box26;

Transform22.child = new undefined();

Transform22.child[0] = Shape23;

browser.currentScene.children[6] = Transform22;

let Script27 = browser.currentScene.createNode("Script");
Script27.DEF = "MYSCRIPT";
Script27.url = new MFString(new java.lang.String["jumpcut_loadurl.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.js"]);
let field28 = browser.currentScene.createNode("field");
field28.accessType = "initializeOnly";
field28.type = "MFString";
field28.name = "myParameter";
field28.value = "\"Top_View\"";
Script27.field = new MFNode();

Script27.field[0] = field28;

let field29 = browser.currentScene.createNode("field");
field29.accessType = "initializeOnly";
field29.type = "MFString";
field29.name = "myUrl";
field29.value = "\"jumpcut_loadurl.x3d#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d#Top_View\" \"jumpcut_loadurl.wrl#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.wrl#Top_View\"";
Script27.field[1] = field29;

let field30 = browser.currentScene.createNode("field");
field30.accessType = "inputOnly";
field30.type = "SFBool";
field30.name = "trigger_event";
Script27.field[2] = field30;

browser.currentScene.children[7] = Script27;

let ROUTE31 = browser.currentScene.createNode("ROUTE");
ROUTE31.fromNode = "STARTER";
ROUTE31.fromField = "isActive";
ROUTE31.toNode = "MYSCRIPT";
ROUTE31.toField = "trigger_event";
browser.currentScene.children[8] = ROUTE31;


let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
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

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "license";
meta15.content = "../../license.html";
head1.meta[13] = meta15;

head = head1;

let WorldInfo17 = browser.currentScene.createNode("WorldInfo");
WorldInfo17.title = "jumpcut_loadurl.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo17;

let Background18 = browser.currentScene.createNode("Background");
Background18.groundAngle = new MFFloat(new float[1.57]);
Background18.groundColor = new MFColor(new float[0,0.5,0,0,0.5,0]);
Background18.skyColor = new MFColor(new float[0,0,1]);
browser.currentScene.children[1] = Background18;

let NavigationInfo19 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo19.type = new MFString(new java.lang.String["EXAMINE","WALK","FLY","ANY"]);
browser.currentScene.children[2] = NavigationInfo19;

let Viewpoint20 = browser.currentScene.createNode("Viewpoint");
Viewpoint20.DEF = "Front_View";
Viewpoint20.description = "Front View";
browser.currentScene.children[3] = Viewpoint20;

let Viewpoint21 = browser.currentScene.createNode("Viewpoint");
Viewpoint21.DEF = "Top_View";
Viewpoint21.description = "Top View";
Viewpoint21.orientation = new SFRotation(new float[1,0,0,-1.57]);
Viewpoint21.position = new SFVec3f(new float[0,10,0]);
browser.currentScene.children[4] = Viewpoint21;

let TouchSensor22 = browser.currentScene.createNode("TouchSensor");
TouchSensor22.DEF = "STARTER";
TouchSensor22.description = "touch to activate";
browser.currentScene.children[5] = TouchSensor22;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.DEF = "ROOT";
let Shape24 = browser.currentScene.createNode("Shape");
let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
Appearance25.material = Material26;

Shape24.appearance = Appearance25;

let Box27 = browser.currentScene.createNode("Box");
Shape24.geometry = Box27;

Transform23.child = new undefined();

Transform23.child[0] = Shape24;

browser.currentScene.children[6] = Transform23;

let Script28 = browser.currentScene.createNode("Script");
Script28.DEF = "MYSCRIPT";
Script28.url = new MFString(new java.lang.String["jumpcut_loadurl.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.js"]);
let field29 = browser.currentScene.createNode("field");
field29.name = "myParameter";
field29.accessType = "initializeOnly";
field29.type = "MFString";
field29.value = "\"Top_View\"";
Script28.field = new MFNode();

Script28.field[0] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "myUrl";
field30.accessType = "initializeOnly";
field30.type = "MFString";
field30.value = "\"jumpcut_loadurl.x3d#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d#Top_View\" \"jumpcut_loadurl.wrl#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.wrl#Top_View\"";
Script28.field[1] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "trigger_event";
field31.accessType = "inputOnly";
field31.type = "SFBool";
Script28.field[2] = field31;

browser.currentScene.children[7] = Script28;

let ROUTE32 = browser.currentScene.createNode("ROUTE");
ROUTE32.fromField = "isActive";
ROUTE32.fromNode = "STARTER";
ROUTE32.toField = "trigger_event";
ROUTE32.toNode = "MYSCRIPT";
browser.currentScene.children[8] = ROUTE32;


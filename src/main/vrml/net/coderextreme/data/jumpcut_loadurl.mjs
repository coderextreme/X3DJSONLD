const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "jumpcut_loadurl.x3d");
scene.addMetaData("reference", "http://www.nist.gov/vrml.html");
scene.addMetaData("reference", "http://www.itl.nist.gov/div897/ctg/vrml/vrml.html");
scene.addMetaData("creator", "http://www.itl.nist.gov/div897/ctg/vrml/members.html");
scene.addMetaData("disclaimer", "This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.");
scene.addMetaData("info", "Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d");
scene.addMetaData("translator", "Michael Kass NIST, Don Brutzman NPS");
scene.addMetaData("translated", "21 January 2001");
scene.addMetaData("modified", "20 October 2019");
scene.addMetaData("description", "Test jumpcut Viewpoint transition using Script loadUrl method. A NavigationInfo type of ANY is NOT included in the NavigationInfo node field in this world. Consequently, a Script node with a call to the "loadURL" method, with a url corresponding to the MFString "Top_View" (the name of a Viewpoint in this world) should create a "jump cut" transition of views when the Box geometry in this world is indicated by the pointing device. As a result, indicating the Box geometry should result in a Viewpoint transition to the top view of the Box geometry.");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d");
scene.addMetaData("generator", "Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../../license.html");
await browser .loadComponents (scene);
let WorldInfo17 = browser.currentScene.createNode("WorldInfo");
WorldInfo17.title = "jumpcut_loadurl.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo17;

let Background18 = browser.currentScene.createNode("Background");
Background18.groundAngle = new X3D.MFFloat([1.57]);
Background18.groundColor = new X3D.MFColor([0,0.5,0,0,0.5,0]);
Background18.skyColor = new X3D.MFColor([0,0,1]);
browser.currentScene.children[1] = Background18;

let NavigationInfo19 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo19.type = new X3D.MFString([new X3D.SFString("EXAMINE"), new X3D.SFString("WALK"), new X3D.SFString("FLY"), new X3D.SFString("ANY")]);
browser.currentScene.children[2] = NavigationInfo19;

let Viewpoint20 = browser.currentScene.createNode("Viewpoint");
Viewpoint20.DEF = "Front_View";
Viewpoint20.description = "Front View";
browser.currentScene.children[3] = Viewpoint20;

let Viewpoint21 = browser.currentScene.createNode("Viewpoint");
Viewpoint21.DEF = "Top_View";
Viewpoint21.description = "Top View";
Viewpoint21.orientation = new X3D.SFRotation([1,0,0,-1.57]);
Viewpoint21.position = new X3D.SFVec3f([0,10,0]);
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
material = Material26;

appearance = Appearance25;

let Box27 = browser.currentScene.createNode("Box");
geometry = Box27;

Transform23YYY.child = new X3D.undefined();

Transform23ZZZ.child[0] = Shape24;

browser.currentScene.children[6] = Transform23;

let Script28 = browser.currentScene.createNode("Script");
Script28.DEF = "MYSCRIPT";
Script28.url = new X3D.MFString([new X3D.SFString("jumpcut_loadurl.js"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.js")]);
Script29.getField("myParameter").setValue("\"Top_View\"");
Script28YYY.field = new X3D.MFNode();

Script30.getField("myUrl").setValue("\"jumpcut_loadurl.x3d#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d#Top_View\" \"jumpcut_loadurl.wrl#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.wrl#Top_View\"");
Script28YYY.field = new X3D.MFNode();

Script31.getField("trigger_event")Script28YYY.field = new X3D.MFNode();

browser.currentScene.children[7] = Script28;

let ROUTE32 = browser.currentScene.createNode("ROUTE");
ROUTE32.fromField = "isActive";
ROUTE32.fromNode = "STARTER";
ROUTE32.toField = "trigger_event";
ROUTE32.toNode = "MYSCRIPT";
browser.currentScene.children[8] = ROUTE32;

}
main ();

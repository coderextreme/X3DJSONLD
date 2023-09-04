#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "jumpcut_loadurl.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "reference";
meta3.content = "http://www.nist.gov/vrml.html";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "reference";
meta4.content = "http://www.itl.nist.gov/div897/ctg/vrml/vrml.html";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "http://www.itl.nist.gov/div897/ctg/vrml/members.html";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "disclaimer";
meta6.content = "This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "info";
meta7.content = "Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "translator";
meta8.content = "Michael Kass NIST, Don Brutzman NPS";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "translated";
meta9.content = "21 January 2001";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "modified";
meta10.content = "20 October 2019";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "description";
meta11.content = "Test jumpcut Viewpoint transition using Script loadUrl method. A NavigationInfo type of ANY is NOT included in the NavigationInfo node field in this world. Consequently, a Script node with a call to the \"loadURL\" method, with a url corresponding to the MFString \"Top_View\" (the name of a Viewpoint in this world) should create a \"jump cut\" transition of views when the Box geometry in this world is indicated by the pointing device. As a result, indicating the Box geometry should result in a Viewpoint transition to the top view of the Box geometry.";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "identifier";
meta12.content = "https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "generator";
meta13.content = "Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "generator";
meta14.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[12] = meta14;

head = head1;

WorldInfo WorldInfo16 = createNode("WorldInfo");
WorldInfo16.title = "jumpcut_loadurl.x3d";
children = new MFNode();

children[0] = WorldInfo16;

Background Background17 = createNode("Background");
Background17.skyColor = new MFColor(new float[0,0,1]);
Background17.groundAngle = new MFFloat(new float[1.57]);
Background17.groundColor = new MFColor(new float[0,0.5,0,0,0.5,0]);
children[1] = Background17;

NavigationInfo NavigationInfo18 = createNode("NavigationInfo");
NavigationInfo18.type = new MFString(new java.lang.String["EXAMINE","WALK","FLY","ANY"]);
children[2] = NavigationInfo18;

Viewpoint Viewpoint19 = createNode("Viewpoint");
Viewpoint19.DEF = "Front_View";
Viewpoint19.description = "Front View";
children[3] = Viewpoint19;

Viewpoint Viewpoint20 = createNode("Viewpoint");
Viewpoint20.DEF = "Top_View";
Viewpoint20.description = "Top View";
Viewpoint20.position = new SFVec3f(new float[0,10,0]);
Viewpoint20.orientation = new SFRotation(new float[1,0,0,-1.57]);
children[4] = Viewpoint20;

TouchSensor TouchSensor21 = createNode("TouchSensor");
TouchSensor21.DEF = "STARTER";
TouchSensor21.description = "touch to activate";
children[5] = TouchSensor21;

Transform Transform22 = createNode("Transform");
Transform22.DEF = "ROOT";
Shape Shape23 = createNode("Shape");
Appearance Appearance24 = createNode("Appearance");
Material Material25 = createNode("Material");
Appearance24.material = Material25;

Shape23.appearance = Appearance24;

Box Box26 = createNode("Box");
Shape23.geometry = Box26;

Transform22.child = new undefined();

Transform22.child[0] = Shape23;

children[6] = Transform22;

Script Script27 = createNode("Script");
Script27.DEF = "MYSCRIPT";
Script27.url = new MFString(new java.lang.String["jumpcut_loadurl.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.js"]);
field field28 = createNode("field");
field28.accessType = "initializeOnly";
field28.type = "MFString";
field28.name = "myParameter";
field28.value = "\"Top_View\"";
Script27.field = new MFNode();

Script27.field[0] = field28;

field field29 = createNode("field");
field29.accessType = "initializeOnly";
field29.type = "MFString";
field29.name = "myUrl";
field29.value = "\"jumpcut_loadurl.x3d#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d#Top_View\" \"jumpcut_loadurl.wrl#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.wrl#Top_View\"";
Script27.field[1] = field29;

field field30 = createNode("field");
field30.accessType = "inputOnly";
field30.type = "SFBool";
field30.name = "trigger_event";
Script27.field[2] = field30;

children[7] = Script27;

ROUTE ROUTE31 = createNode("ROUTE");
ROUTE31.fromNode = "STARTER";
ROUTE31.fromField = "isActive";
ROUTE31.toNode = "MYSCRIPT";
ROUTE31.toField = "trigger_event";
children[8] = ROUTE31;

}

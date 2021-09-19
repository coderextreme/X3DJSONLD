let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "Geospatial";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "title";
meta3.content = "geobubbles.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "John Carlson";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "generator";
meta5.content = "manual";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "identifier";
meta6.content = "https://coderextreme.net/X3DJSONLD/geobubbles.x3d";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "description";
meta7.content = "geo bubbles";
head1.meta[5] = meta7;

head = head1;

//Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/
//PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/
let GeoViewpoint9 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint9.DEF = "Tour";
GeoViewpoint9.position = new SFVec3d(new double[0,0,4]);
GeoViewpoint9.orientation = new SFRotation(new float[1,0,0,0]);
GeoViewpoint9.description = "Tour Views";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = GeoViewpoint9;

let Background10 = browser.currentScene.createNode("Background");
Background10.backUrl = new MFString(new java.lang.String["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"]);
Background10.bottomUrl = new MFString(new java.lang.String["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"]);
Background10.frontUrl = new MFString(new java.lang.String["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"]);
Background10.leftUrl = new MFString(new java.lang.String["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"]);
Background10.rightUrl = new MFString(new java.lang.String["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"]);
Background10.topUrl = new MFString(new java.lang.String["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"]);
browser.currentScene.children[1] = Background10;

let Transform11 = browser.currentScene.createNode("Transform");
let Shape12 = browser.currentScene.createNode("Shape");
let Sphere13 = browser.currentScene.createNode("Sphere");
Shape12.geometry = Sphere13;

let Appearance14 = browser.currentScene.createNode("Appearance");
let Material15 = browser.currentScene.createNode("Material");
Material15.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material15.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance14.material = Material15;

Shape12.appearance = Appearance14;

Transform11.children = new MFNode();

Transform11.children[0] = Shape12;

browser.currentScene.children[2] = Transform11;

let TimeSensor16 = browser.currentScene.createNode("TimeSensor");
TimeSensor16.DEF = "TourTime";
TimeSensor16.cycleInterval = 5;
TimeSensor16.loop = True;
browser.currentScene.children[3] = TimeSensor16;

let GeoPositionInterpolator17 = browser.currentScene.createNode("GeoPositionInterpolator");
GeoPositionInterpolator17.DEF = "TourPosition";
GeoPositionInterpolator17.key = new MFFloat(new float[0,1]);
GeoPositionInterpolator17.keyValue = new MFVec3d(new double[0.0015708,0,4,0,0.0015708,4]);
browser.currentScene.children[4] = GeoPositionInterpolator17;

let Script18 = browser.currentScene.createNode("Script");
Script18.DEF = "RandomTourTime";
let field19 = browser.currentScene.createNode("field");
field19.name = "set_cycle";
field19.accessType = "inputOnly";
field19.type = "SFTime";
Script18.field = new MFNode();

Script18.field[0] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "val";
field20.accessType = "inputOutput";
field20.type = "SFFloat";
field20.value = "0";
Script18.field[1] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "positions";
field21.accessType = "inputOutput";
field21.type = "MFVec3d";
field21.value = "0.0015708 0 4 0 0.0015708 4";
Script18.field[2] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "position";
field22.accessType = "inputOutput";
field22.type = "MFVec3d";
field22.value = "0.0015708 0 4 0 0.0015708 4";
Script18.field[3] = field22;


Script18.setSourceCode(`ecmascript:\n"+
"\n"+
"               function set_cycle(value) {\n"+
"                        var cartesianMult = -150;  // -150 if cartesian, 1 if geo\n"+
"                        var ov = val;\n"+
"			// Browser.print('old '+ov);\n"+
"                        do {\n"+
"                                val = Math.floor(Math.random()*2);\n"+
"                                var vc = val;\n"+
"                                positions[vc] = new SFVec3d(Math.round(Math.random()*2)*0.0015708*cartesianMult, Math.round(Math.random()*2)*0.0015708*cartesianMult, 4);\n"+
"                        } while ( positions[ov][0] === positions[vc][0] && positions[ov][1] === positions[vc][1] && positions[ov][2] === positions[vc][2]);\n"+
"			// Browser.println(positions[ov]);\n"+
"			// Browser.println(positions[vc]);\n"+
"                        position = new MFVec3d();\n"+
"                        position[0] = new SFVec3d(positions[ov][0],positions[ov][1],positions[ov][2]);\n"+
"                        position[1] = new SFVec3d(positions[vc][0],positions[vc][1],positions[vc][2]);\n"+
"               }`)
browser.currentScene.children[5] = Script18;

let ROUTE23 = browser.currentScene.createNode("ROUTE");
ROUTE23.fromNode = "TourTime";
ROUTE23.fromField = "cycleTime";
ROUTE23.toNode = "RandomTourTime";
ROUTE23.toField = "set_cycle";
browser.currentScene.children[6] = ROUTE23;

let ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromNode = "RandomTourTime";
ROUTE24.fromField = "position";
ROUTE24.toNode = "TourPosition";
ROUTE24.toField = "keyValue";
browser.currentScene.children[7] = ROUTE24;

let ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromNode = "TourTime";
ROUTE25.fromField = "fraction_changed";
ROUTE25.toNode = "TourPosition";
ROUTE25.toField = "set_fraction";
browser.currentScene.children[8] = ROUTE25;

let ROUTE26 = browser.currentScene.createNode("ROUTE");
ROUTE26.fromNode = "TourPosition";
ROUTE26.fromField = "geovalue_changed";
ROUTE26.toNode = "Tour";
ROUTE26.toField = "set_position";
browser.currentScene.children[9] = ROUTE26;


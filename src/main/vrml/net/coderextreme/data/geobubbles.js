let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
//Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/
//PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/
let GeoViewpoint2 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint2.DEF = "Tour";
GeoViewpoint2.position = new SFVec3d(new double[0,0,4]);
GeoViewpoint2.orientation = new SFRotation(new float[1,0,0,0]);
GeoViewpoint2.description = "Tour Views";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = GeoViewpoint2;

let Background3 = browser.currentScene.createNode("Background");
Background3.backUrl = new MFString(new java.lang.String["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"]);
Background3.bottomUrl = new MFString(new java.lang.String["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"]);
Background3.frontUrl = new MFString(new java.lang.String["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"]);
Background3.leftUrl = new MFString(new java.lang.String["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"]);
Background3.rightUrl = new MFString(new java.lang.String["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"]);
Background3.topUrl = new MFString(new java.lang.String["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"]);
browser.currentScene.children[1] = Background3;

let Transform4 = browser.currentScene.createNode("Transform");
let Shape5 = browser.currentScene.createNode("Shape");
let Sphere6 = browser.currentScene.createNode("Sphere");
Shape5.geometry = Sphere6;

let Appearance7 = browser.currentScene.createNode("Appearance");
let Material8 = browser.currentScene.createNode("Material");
Material8.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material8.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance7.material = Material8;

Shape5.appearance = Appearance7;

Transform4.children = new MFNode();

Transform4.children[0] = Shape5;

browser.currentScene.children[2] = Transform4;

let TimeSensor9 = browser.currentScene.createNode("TimeSensor");
TimeSensor9.DEF = "TourTime";
TimeSensor9.cycleInterval = 5;
TimeSensor9.loop = True;
browser.currentScene.children[3] = TimeSensor9;

let GeoPositionInterpolator10 = browser.currentScene.createNode("GeoPositionInterpolator");
GeoPositionInterpolator10.DEF = "TourPosition";
GeoPositionInterpolator10.key = new MFFloat(new float[0,1]);
GeoPositionInterpolator10.keyValue = new MFVec3d(new double[0.0015708,0,4,0,0.0015708,4]);
browser.currentScene.children[4] = GeoPositionInterpolator10;

let Script11 = browser.currentScene.createNode("Script");
Script11.DEF = "RandomTourTime";
let field12 = browser.currentScene.createNode("field");
field12.name = "set_cycle";
field12.accessType = "inputOnly";
field12.type = "SFTime";
Script11.field = new MFNode();

Script11.field[0] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "val";
field13.accessType = "inputOutput";
field13.type = "SFFloat";
field13.value = "0";
Script11.field[1] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "positions";
field14.accessType = "inputOutput";
field14.type = "MFVec3d";
field14.value = "0.0015708 0 4 0 0.0015708 4";
Script11.field[2] = field14;

let field15 = browser.currentScene.createNode("field");
field15.name = "position";
field15.accessType = "inputOutput";
field15.type = "MFVec3d";
field15.value = "0.0015708 0 4 0 0.0015708 4";
Script11.field[3] = field15;


Script11.setSourceCode(`ecmascript:\n"+
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
browser.currentScene.children[5] = Script11;

let ROUTE16 = browser.currentScene.createNode("ROUTE");
ROUTE16.fromNode = "TourTime";
ROUTE16.fromField = "cycleTime";
ROUTE16.toNode = "RandomTourTime";
ROUTE16.toField = "set_cycle";
browser.currentScene.children[6] = ROUTE16;

let ROUTE17 = browser.currentScene.createNode("ROUTE");
ROUTE17.fromNode = "RandomTourTime";
ROUTE17.fromField = "position";
ROUTE17.toNode = "TourPosition";
ROUTE17.toField = "keyValue";
browser.currentScene.children[7] = ROUTE17;

let ROUTE18 = browser.currentScene.createNode("ROUTE");
ROUTE18.fromNode = "TourTime";
ROUTE18.fromField = "fraction_changed";
ROUTE18.toNode = "TourPosition";
ROUTE18.toField = "set_fraction";
browser.currentScene.children[8] = ROUTE18;

let ROUTE19 = browser.currentScene.createNode("ROUTE");
ROUTE19.fromNode = "TourPosition";
ROUTE19.fromField = "geovalue_changed";
ROUTE19.toNode = "Tour";
ROUTE19.toField = "set_position";
browser.currentScene.children[9] = ROUTE19;


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
Background3.skyColor = new MFColor(new float[0,0,0]);
Background3.transparency = 0;
browser.currentScene.children[1] = Background3;

let Transform4 = browser.currentScene.createNode("Transform");
Transform4.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform4.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape5 = browser.currentScene.createNode("Shape");
Shape5.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape5.bboxSize = new SFVec3f(new float[-1,-1,-1]);
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

let ROUTE11 = browser.currentScene.createNode("ROUTE");
ROUTE11.fromNode = "TourTime";
ROUTE11.fromField = "cycleTime";
ROUTE11.toNode = "RandomTourTime";
ROUTE11.toField = "set_cycle";
browser.currentScene.children[5] = ROUTE11;

let ROUTE12 = browser.currentScene.createNode("ROUTE");
ROUTE12.fromNode = "RandomTourTime";
ROUTE12.fromField = "position";
ROUTE12.toNode = "TourPosition";
ROUTE12.toField = "keyValue";
browser.currentScene.children[6] = ROUTE12;

let ROUTE13 = browser.currentScene.createNode("ROUTE");
ROUTE13.fromNode = "TourTime";
ROUTE13.fromField = "fraction_changed";
ROUTE13.toNode = "TourPosition";
ROUTE13.toField = "set_fraction";
browser.currentScene.children[7] = ROUTE13;

let ROUTE14 = browser.currentScene.createNode("ROUTE");
ROUTE14.fromNode = "TourPosition";
ROUTE14.fromField = "geovalue_changed";
ROUTE14.toNode = "Tour";
ROUTE14.toField = "set_position";
browser.currentScene.children[8] = ROUTE14;


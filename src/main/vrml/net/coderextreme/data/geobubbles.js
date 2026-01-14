const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("Geospatial", 1));
scene.addMetaData("title", "geobubbles.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("generator", "manual");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d");
scene.addMetaData("description", "geo bubbles");
await browser .loadComponents (scene);
//Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/
//PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/
let GeoViewpoint9 = browser.currentScene.createNode("GeoViewpoint");
GeoViewpoint9.DEF = "Tour";
GeoViewpoint9.position = new X3D.SFVec3d([0,0,4]);
GeoViewpoint9.orientation = new X3D.SFRotation([1,0,0,0]);
GeoViewpoint9.description = "Tour Views";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = GeoViewpoint9;

let Background10 = browser.currentScene.createNode("Background");
Background10.backUrl = new X3D.MFString([new X3D.SFString("../resources/images/BK.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png")]);
Background10.bottomUrl = new X3D.MFString([new X3D.SFString("../resources/images/BT.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png")]);
Background10.frontUrl = new X3D.MFString([new X3D.SFString("../resources/images/FR.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png")]);
Background10.leftUrl = new X3D.MFString([new X3D.SFString("../resources/images/LF.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png")]);
Background10.rightUrl = new X3D.MFString([new X3D.SFString("../resources/images/RT.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png")]);
Background10.topUrl = new X3D.MFString([new X3D.SFString("../resources/images/TP.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png")]);
browser.currentScene.children[1] = Background10;

let Transform11 = browser.currentScene.createNode("Transform");
let Shape12 = browser.currentScene.createNode("Shape");
let Sphere13 = browser.currentScene.createNode("Sphere");
geometry = Sphere13;

let Appearance14 = browser.currentScene.createNode("Appearance");
let Material15 = browser.currentScene.createNode("Material");
Material15.diffuseColor = new X3D.SFColor([0.7,0.7,0.7]);
Material15.specularColor = new X3D.SFColor([0.5,0.5,0.5]);
material = Material15;

appearance = Appearance14;

Transform11YYY.child = new X3D.undefined();

Transform11ZZZ.child[0] = Shape12;

browser.currentScene.children[2] = Transform11;

let TimeSensor16 = browser.currentScene.createNode("TimeSensor");
TimeSensor16.DEF = "TourTime";
TimeSensor16.cycleInterval = 5;
TimeSensor16.loop = True;
browser.currentScene.children[3] = TimeSensor16;

let GeoPositionInterpolator17 = browser.currentScene.createNode("GeoPositionInterpolator");
GeoPositionInterpolator17.DEF = "TourPosition";
GeoPositionInterpolator17.key = new X3D.MFFloat([0,1]);
GeoPositionInterpolator17.keyValue = new X3D.MFVec3d([0.0015708,0,4,0,0.0015708,4]);
browser.currentScene.children[4] = GeoPositionInterpolator17;

let Script18 = browser.currentScene.createNode("Script");
Script18.DEF = "RandomTourTime";
Script19.getField("set_cycle")Script18YYY.field = new X3D.MFNode();

Script20.getField("val").setValue("0");
Script18YYY.field = new X3D.MFNode();

Script21.getField("positions").setValue("0.0015708 0 4 0 0.0015708 4");
Script18YYY.field = new X3D.MFNode();

Script22.getField("position").setValue("0.0015708 0 4 0 0.0015708 4");
Script18YYY.field = new X3D.MFNode();


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

}
main ();

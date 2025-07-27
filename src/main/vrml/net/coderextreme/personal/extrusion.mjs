const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("creator", "John W Carlson");
scene.addMetaData("created", "December 13 2015");
scene.addMetaData("title", "extrusion.x3d");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/personal/extrusion.x3d");
scene.addMetaData("description", "beginnings of a force directed graph in 3D");
scene.addMetaData("generator", "Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit");
await browser .loadComponents (scene);
let Group9 = browser.currentScene.createNode("Group");
let Shape10 = browser.currentScene.createNode("Shape");
let Extrusion11 = browser.currentScene.createNode("Extrusion");
Extrusion11.DEF = "extrusion";
Extrusion11.spine = new X3D.MFVec3f([-50,-50,0,50,50,0]);
Extrusion11.creaseAngle = 0.785;
Extrusion11.crossSection = new X3D.MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
geometry = Extrusion11;

let Appearance12 = browser.currentScene.createNode("Appearance");
let Material13 = browser.currentScene.createNode("Material");
Material13.diffuseColor = new X3D.SFColor([0,1,0]);
material = Material13;

appearance = Appearance12;

Group9YYY.children = new X3D.MFNode();

Group9ZZZ.children[0] = Shape10;

let TimeSensor14 = browser.currentScene.createNode("TimeSensor");
TimeSensor14.DEF = "TourTime";
TimeSensor14.loop = True;
Group9ZZZ.children[1] = TimeSensor14;

let Script15 = browser.currentScene.createNode("Script");
Script15.DEF = "MoveCylinder";
Script16.getField("set_cycle")Script15YYY.field = new X3D.MFNode();

Script17.getField("spine").setValue("-50 -50 0 50 50 0");
Script15YYY.field = new X3D.MFNode();


Script15.setSourceCode(`ecmascript:\n"+
"\n"+
"                function set_cycle(value) {\n"+
"                        Browser.print(value);\n"+
"                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);\n"+
"                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);\n"+
"                        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = endA;\n"+
"			tmpspine[1] = endB;\n"+
"                        spine = tmpspine;\n"+
"                }`)
Group9ZZZ.children[2] = Script15;

let ROUTE18 = browser.currentScene.createNode("ROUTE");
ROUTE18.fromNode = "TourTime";
ROUTE18.fromField = "cycleTime";
ROUTE18.toNode = "MoveCylinder";
ROUTE18.toField = "set_cycle";
Group9ZZZ.children[3] = ROUTE18;

let ROUTE19 = browser.currentScene.createNode("ROUTE");
ROUTE19.fromNode = "MoveCylinder";
ROUTE19.fromField = "spine_changed";
ROUTE19.toNode = "extrusion";
ROUTE19.toField = "set_spine";
Group9ZZZ.children[4] = ROUTE19;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Group9;

}
main ();

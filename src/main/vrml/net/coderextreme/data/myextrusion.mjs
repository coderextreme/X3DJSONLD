const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("creator", "John W Carlson");
scene.addMetaData("created", "December 13 2015");
scene.addMetaData("modified", "November 9 2024");
scene.addMetaData("title", "myextrusion.x3d");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/myextrusion.x3d");
scene.addMetaData("description", "beginnings of a force directed graph in 3D");
scene.addMetaData("generator", "Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit");
await browser .loadComponents (scene);
let Group10 = browser.currentScene.createNode("Group");
let Shape11 = browser.currentScene.createNode("Shape");
let Extrusion12 = browser.currentScene.createNode("Extrusion");
Extrusion12.DEF = "myextrusion";
Extrusion12.spine = new X3D.MFVec3f([-50,-50,0,50,50,0]);
Extrusion12.creaseAngle = 0.785;
Extrusion12.crossSection = new X3D.MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
geometry = Extrusion12;

let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
Material14.diffuseColor = new X3D.SFColor([0,1,0]);
material = Material14;

appearance = Appearance13;

Group10YYY.children = new X3D.MFNode();

Group10ZZZ.children[0] = Shape11;

let TimeSensor15 = browser.currentScene.createNode("TimeSensor");
TimeSensor15.DEF = "TourTime";
TimeSensor15.loop = True;
Group10ZZZ.children[1] = TimeSensor15;

let Script16 = browser.currentScene.createNode("Script");
Script16.DEF = "MoveCylinder";
Script17.getField("set_cycle")Script16YYY.field = new X3D.MFNode();

Script18.getField("spine").setValue("-50 -50 0 50 50 0");
Script16YYY.field = new X3D.MFNode();


Script16.setSourceCode(`ecmascript:\n"+
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
Group10ZZZ.children[2] = Script16;

let ROUTE19 = browser.currentScene.createNode("ROUTE");
ROUTE19.fromNode = "TourTime";
ROUTE19.fromField = "cycleTime";
ROUTE19.toNode = "MoveCylinder";
ROUTE19.toField = "set_cycle";
Group10ZZZ.children[3] = ROUTE19;

let ROUTE20 = browser.currentScene.createNode("ROUTE");
ROUTE20.fromNode = "MoveCylinder";
ROUTE20.fromField = "spine_changed";
ROUTE20.toNode = "myextrusion";
ROUTE20.toField = "set_spine";
Group10ZZZ.children[4] = ROUTE20;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Group10;

}
main ();

let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let Group2 = browser.currentScene.createNode("Group");
let Shape3 = browser.currentScene.createNode("Shape");
let Extrusion4 = browser.currentScene.createNode("Extrusion");
Extrusion4.DEF = "extrusion";
Extrusion4.spine = new MFVec3f(new float[-50,-50,0,50,50,0]);
Extrusion4.creaseAngle = 0.785;
Extrusion4.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Shape3.geometry = Extrusion4;

let Appearance5 = browser.currentScene.createNode("Appearance");
let Material6 = browser.currentScene.createNode("Material");
Material6.diffuseColor = new SFColor(new float[0,1,0]);
Appearance5.material = Material6;

Shape3.appearance = Appearance5;

Group2.children = new MFNode();

Group2.children[0] = Shape3;

let TimeSensor7 = browser.currentScene.createNode("TimeSensor");
TimeSensor7.DEF = "TourTime";
TimeSensor7.loop = True;
Group2.children[1] = TimeSensor7;

let Script8 = browser.currentScene.createNode("Script");
Script8.DEF = "MoveCylinder";
let field9 = browser.currentScene.createNode("field");
field9.name = "set_cycle";
field9.accessType = "inputOnly";
field9.type = "SFTime";
Script8.field = new MFNode();

Script8.field[0] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "spine";
field10.accessType = "inputOutput";
field10.type = "MFVec3f";
field10.value = "-50 -50 0 50 50 0";
Script8.field[1] = field10;


Script8.setSourceCode(`ecmascript:\n"+
"\n"+
"                function set_cycle(value) {\n"+
"                        Browser.print(value);\n"+
"                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);\n"+
"                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);\n"+
"		        spine = new MFVec3f([endA, endB]);\n"+
"                }`)
Group2.children[2] = Script8;

let ROUTE11 = browser.currentScene.createNode("ROUTE");
ROUTE11.fromNode = "TourTime";
ROUTE11.fromField = "cycleTime";
ROUTE11.toNode = "MoveCylinder";
ROUTE11.toField = "set_cycle";
Group2.children[3] = ROUTE11;

let ROUTE12 = browser.currentScene.createNode("ROUTE");
ROUTE12.fromNode = "MoveCylinder";
ROUTE12.fromField = "spine_changed";
ROUTE12.toNode = "extrusion";
ROUTE12.toField = "spine";
Group2.children[4] = ROUTE12;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Group2;


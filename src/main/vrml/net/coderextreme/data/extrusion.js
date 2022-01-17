let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "creator";
meta2.content = "John W Carlson";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "created";
meta3.content = "December 13 2015";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "title";
meta4.content = "extrusion.x3d";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "identifier";
meta5.content = "https://coderextreme.net/X3DJSONLD/force.x3d";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "description";
meta6.content = "beginnings of a force directed graph in 3D";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "generator";
meta7.content = "Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[5] = meta7;

head = head1;

let Group9 = browser.currentScene.createNode("Group");
let Shape10 = browser.currentScene.createNode("Shape");
let Extrusion11 = browser.currentScene.createNode("Extrusion");
Extrusion11.DEF = "extrusion";
Extrusion11.spine = new MFVec3f(new float[-50,-50,0,50,50,0]);
Extrusion11.creaseAngle = 0.785;
Extrusion11.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Shape10.geometry = Extrusion11;

let Appearance12 = browser.currentScene.createNode("Appearance");
let Material13 = browser.currentScene.createNode("Material");
Material13.diffuseColor = new SFColor(new float[0,1,0]);
Appearance12.material = Material13;

Shape10.appearance = Appearance12;

Group9.children = new MFNode();

Group9.children[0] = Shape10;

let TimeSensor14 = browser.currentScene.createNode("TimeSensor");
TimeSensor14.DEF = "TourTime";
TimeSensor14.loop = True;
Group9.children[1] = TimeSensor14;

let Script15 = browser.currentScene.createNode("Script");
Script15.DEF = "MoveCylinder";
let field16 = browser.currentScene.createNode("field");
field16.name = "set_cycle";
field16.accessType = "inputOnly";
field16.type = "SFTime";
Script15.field = new MFNode();

Script15.field[0] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "spine";
field17.accessType = "inputOutput";
field17.type = "MFVec3f";
field17.value = "-50 -50 0 50 50 0";
Script15.field[1] = field17;

let #sourceCode18 = browser.currentScene.createNode("#sourceCode");
Script15.#sourceCode[2] = #sourceCode18;

Group9.children[2] = Script15;

let ROUTE19 = browser.currentScene.createNode("ROUTE");
ROUTE19.fromNode = "TourTime";
ROUTE19.fromField = "cycleTime";
ROUTE19.toNode = "MoveCylinder";
ROUTE19.toField = "set_cycle";
Group9.children[3] = ROUTE19;

let ROUTE20 = browser.currentScene.createNode("ROUTE");
ROUTE20.fromNode = "MoveCylinder";
ROUTE20.fromField = "spine_changed";
ROUTE20.toNode = "extrusion";
ROUTE20.toField = "set_spine";
Group9.children[4] = ROUTE20;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Group9;


let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let Group2 = browser.currentScene.createNode("Group");
Group2.bboxCenter = new SFVec3f(new float[0,0,0]);
Group2.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape3 = browser.currentScene.createNode("Shape");
Shape3.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape3.bboxSize = new SFVec3f(new float[-1,-1,-1]);
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

let ROUTE8 = browser.currentScene.createNode("ROUTE");
ROUTE8.fromNode = "TourTime";
ROUTE8.fromField = "cycleTime";
ROUTE8.toNode = "MoveCylinder";
ROUTE8.toField = "set_cycle";
Group2.children[2] = ROUTE8;

let ROUTE9 = browser.currentScene.createNode("ROUTE");
ROUTE9.fromNode = "MoveCylinder";
ROUTE9.fromField = "spine_changed";
ROUTE9.toNode = "extrusion";
ROUTE9.toField = "spine";
Group2.children[3] = ROUTE9;

let X3DScript10 = browser.currentScene.createNode("X3DScript");
X3DScript10.DEF = "MoveCylinder";
let field11 = browser.currentScene.createNode("field");
field11.name = "set_cycle";
field11.accessType = "inputOnly";
field11.type = "SFTime";
X3DScript10.field = new MFNode();

X3DScript10.field[0] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "spine";
field12.accessType = "inputOutput";
field12.type = "MFVec3f";
field12.value = "-50 -50 0 50 50 0";
X3DScript10.field[1] = field12;

Group2.x3DScript[4] = X3DScript10;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Group2;


let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "LODlevelChangedExample.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let LOD3 = browser.currentScene.createNode("LOD");
LOD3.DEF = "activeLOD";
LOD3.range = new MFFloat(new float[6,10]);
let Shape4 = browser.currentScene.createNode("Shape");
Shape4.DEF = "ShapeLevel0";
let Text5 = browser.currentScene.createNode("Text");
Text5.string = new MFString(new java.lang.String["developmental test scene","LODlevelChangedExample"]);
let FontStyle6 = browser.currentScene.createNode("FontStyle");
FontStyle6.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text5.fontStyle = FontStyle6;

Shape4.geometry = Text5;

LOD3.children = new MFNode();

LOD3.children[0] = Shape4;

let Inline7 = browser.currentScene.createNode("Inline");
Inline7.DEF = "InlineLevel1";
Inline7.load = False;
LOD3.children[1] = Inline7;

let Inline8 = browser.currentScene.createNode("Inline");
Inline8.DEF = "InlineLevel2";
Inline8.load = False;
LOD3.children[2] = Inline8;

//etc.
browser.currentScene.children[1] = LOD3;

let Group9 = browser.currentScene.createNode("Group");
Group9.DEF = "PreloadActivationGroup";
let Script10 = browser.currentScene.createNode("Script");
Script10.DEF = "PreloadLevelsScript";
let field11 = browser.currentScene.createNode("field");
field11.name = "level_changed";
field11.accessType = "inputOnly";
field11.type = "SFInt32";
Script10.field = new MFNode();

Script10.field[0] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "activateLevel1";
field12.accessType = "outputOnly";
field12.type = "SFBool";
Script10.field[1] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "activateLevel2";
field13.accessType = "outputOnly";
field13.type = "SFBool";
Script10.field[2] = field13;


Script10.setSourceCode(`ecmascript:\n"+
"\n"+
"function level_changed (value, timestamp)\n"+
"{\n"+
"	Browser.print ('level=' + value);\n"+
"	if      (value == 1) activateLevel1 = true;\n"+
"	else if (value == 2) activateLevel2 = true;\n"+
"	// etc.\n"+
"}`)
Group9.children = new MFNode();

Group9.children[0] = Script10;

let ROUTE14 = browser.currentScene.createNode("ROUTE");
ROUTE14.fromField = "level_changed";
ROUTE14.fromNode = "activeLOD";
ROUTE14.toField = "level_changed";
ROUTE14.toNode = "PreloadLevelsScript";
Group9.children[1] = ROUTE14;

let ROUTE15 = browser.currentScene.createNode("ROUTE");
ROUTE15.fromField = "activateLevel1";
ROUTE15.fromNode = "PreloadLevelsScript";
ROUTE15.toField = "load";
ROUTE15.toNode = "InlineLevel1";
Group9.children[2] = ROUTE15;

let ROUTE16 = browser.currentScene.createNode("ROUTE");
ROUTE16.fromField = "activateLevel2";
ROUTE16.fromNode = "PreloadLevelsScript";
ROUTE16.toField = "load";
ROUTE16.toNode = "InlineLevel2";
Group9.children[3] = ROUTE16;

browser.currentScene.children[2] = Group9;

let Group17 = browser.currentScene.createNode("Group");
Group17.DEF = "ViewpointGroup";
let Viewpoint18 = browser.currentScene.createNode("Viewpoint");
Viewpoint18.description = "level 0";
Viewpoint18.position = new SFVec3f(new float[0,0,4]);
Group17.children = new MFNode();

Group17.children[0] = Viewpoint18;

let Viewpoint19 = browser.currentScene.createNode("Viewpoint");
Viewpoint19.description = "level 1";
Viewpoint19.position = new SFVec3f(new float[0,0,8]);
Group17.children[1] = Viewpoint19;

let Viewpoint20 = browser.currentScene.createNode("Viewpoint");
Viewpoint20.description = "level 2";
Viewpoint20.position = new SFVec3f(new float[0,0,12]);
Group17.children[2] = Viewpoint20;

browser.currentScene.children[3] = Group17;


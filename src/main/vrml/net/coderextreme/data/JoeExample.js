let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.version = "3.0";
X3D0.profile = "Immersive";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "filename";
meta2.content = "Scripting.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

head = head1;

let Script4 = browser.currentScene.createNode("Script");
Script4.DEF = "OpenVault";
let field5 = browser.currentScene.createNode("field");
field5.name = "openVault";
field5.type = "SFTime";
field5.accessType = "inputOnly";
Script4.field = new MFNode();

Script4.field[0] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "combinationEntered";
field6.type = "SFBool";
field6.accessType = "inputOnly";
Script4.field[1] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "vaultUnlocked";
field7.type = "SFTime";
field7.accessType = "outputOnly";
Script4.field[2] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "unlocked";
field8.type = "SFBool";
field8.value = "false";
field8.accessType = "initializeOnly";
Script4.field[3] = field8;


Script4.setSourceCode(`ecmascript:\n"+
"\n"+
"      function combinationEntered (value) {\n"+
"\n"+
"        unlocked = value;\n"+
"\n"+
"      }\n"+
"\n"+
"      function openVault(value) {\n"+
"\n"+
"      if (unlocked) vaultUnlocked = value;\n"+
"\n"+
"      }`)
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Script4;

let Shape9 = browser.currentScene.createNode("Shape");
let Appearance10 = browser.currentScene.createNode("Appearance");
let Material11 = browser.currentScene.createNode("Material");
Material11.diffuseColor = new SFColor(new float[1,0,0]);
Appearance10.material = Material11;

Shape9.appearance = Appearance10;

let Sphere12 = browser.currentScene.createNode("Sphere");
Shape9.geometry = Sphere12;

browser.currentScene.children[1] = Shape9;

let Sound13 = browser.currentScene.createNode("Sound");
Sound13.maxBack = 1000;
Sound13.maxFront = 1000;
Sound13.minBack = 1000;
Sound13.minFront = 1000;
let AudioClip14 = browser.currentScene.createNode("AudioClip");
AudioClip14.DEF = "Click";
AudioClip14.stopTime = 1;
AudioClip14.description = "clicking sound";
AudioClip14.url = new MFString(new java.lang.String["../resources/chandubabamusic1.wav"]);
Sound13.source = AudioClip14;

browser.currentScene.children[2] = Sound13;

let TouchSensor15 = browser.currentScene.createNode("TouchSensor");
TouchSensor15.DEF = "TS";
browser.currentScene.children[3] = TouchSensor15;

let ROUTE16 = browser.currentScene.createNode("ROUTE");
ROUTE16.fromNode = "TS";
ROUTE16.fromField = "isOver";
ROUTE16.toNode = "OpenVault";
ROUTE16.toField = "combinationEntered";
browser.currentScene.children[4] = ROUTE16;

let ROUTE17 = browser.currentScene.createNode("ROUTE");
ROUTE17.fromNode = "TS";
ROUTE17.fromField = "touchTime";
ROUTE17.toNode = "OpenVault";
ROUTE17.toField = "openVault";
browser.currentScene.children[5] = ROUTE17;

let ROUTE18 = browser.currentScene.createNode("ROUTE");
ROUTE18.fromNode = "OpenVault";
ROUTE18.fromField = "vaultUnlocked";
ROUTE18.toNode = "Click";
ROUTE18.toField = "startTime";
browser.currentScene.children[6] = ROUTE18;


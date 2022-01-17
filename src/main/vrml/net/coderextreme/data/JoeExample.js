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

let #sourceCode9 = browser.currentScene.createNode("#sourceCode");
Script4.#sourceCode[4] = #sourceCode9;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Script4;

let Shape10 = browser.currentScene.createNode("Shape");
let Appearance11 = browser.currentScene.createNode("Appearance");
let Material12 = browser.currentScene.createNode("Material");
Material12.diffuseColor = new SFColor(new float[1,0,0]);
Appearance11.material = Material12;

Shape10.appearance = Appearance11;

let Sphere13 = browser.currentScene.createNode("Sphere");
Shape10.geometry = Sphere13;

browser.currentScene.children[1] = Shape10;

let Sound14 = browser.currentScene.createNode("Sound");
Sound14.maxBack = 1000;
Sound14.maxFront = 1000;
Sound14.minBack = 1000;
Sound14.minFront = 1000;
let AudioClip15 = browser.currentScene.createNode("AudioClip");
AudioClip15.DEF = "Click";
AudioClip15.stopTime = 1;
AudioClip15.description = "clicking sound";
AudioClip15.url = new MFString(new java.lang.String["../resources/chandubabamusic1.wav"]);
Sound14.source = AudioClip15;

browser.currentScene.children[2] = Sound14;

let TouchSensor16 = browser.currentScene.createNode("TouchSensor");
TouchSensor16.DEF = "TS";
browser.currentScene.children[3] = TouchSensor16;

let ROUTE17 = browser.currentScene.createNode("ROUTE");
ROUTE17.fromNode = "TS";
ROUTE17.fromField = "isOver";
ROUTE17.toNode = "OpenVault";
ROUTE17.toField = "combinationEntered";
browser.currentScene.children[4] = ROUTE17;

let ROUTE18 = browser.currentScene.createNode("ROUTE");
ROUTE18.fromNode = "TS";
ROUTE18.fromField = "touchTime";
ROUTE18.toNode = "OpenVault";
ROUTE18.toField = "openVault";
browser.currentScene.children[5] = ROUTE18;

let ROUTE19 = browser.currentScene.createNode("ROUTE");
ROUTE19.fromNode = "OpenVault";
ROUTE19.fromField = "vaultUnlocked";
ROUTE19.toNode = "Click";
ROUTE19.toField = "startTime";
browser.currentScene.children[6] = ROUTE19;


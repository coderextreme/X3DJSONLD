let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let Transform2 = browser.currentScene.createNode("Transform");
let Shape3 = browser.currentScene.createNode("Shape");
let Text4 = browser.currentScene.createNode("Text");
Text4.string = new MFString(new java.lang.String["Node\"\"\""]);
let FontStyle5 = browser.currentScene.createNode("FontStyle");
Text4.fontStyle = FontStyle5;

Shape3.geometry = Text4;

let Appearance6 = browser.currentScene.createNode("Appearance");
let Material7 = browser.currentScene.createNode("Material");
Appearance6.material = Material7;

Shape3.appearance = Appearance6;

Transform2.children = new MFNode();

Transform2.children[0] = Shape3;

let Shape8 = browser.currentScene.createNode("Shape");
let Text9 = browser.currentScene.createNode("Text");
Text9.string = new MFString(new java.lang.String["Node2","\\\\","\\\\\\\\","Node2"]);
let FontStyle10 = browser.currentScene.createNode("FontStyle");
Text9.fontStyle = FontStyle10;

Shape8.geometry = Text9;

let Appearance11 = browser.currentScene.createNode("Appearance");
let Material12 = browser.currentScene.createNode("Material");
Appearance11.material = Material12;

Shape8.appearance = Appearance11;

Transform2.children[1] = Shape8;

let Shape13 = browser.currentScene.createNode("Shape");
let Text14 = browser.currentScene.createNode("Text");
Text14.string = new MFString(new java.lang.String["Node3 \\\\\\\\ \\\\ ","Node3\"\"\""]);
let FontStyle15 = browser.currentScene.createNode("FontStyle");
Text14.fontStyle = FontStyle15;

Shape13.geometry = Text14;

let Appearance16 = browser.currentScene.createNode("Appearance");
let Material17 = browser.currentScene.createNode("Material");
Appearance16.material = Material17;

Shape13.appearance = Appearance16;

Transform2.children[2] = Shape13;

let Script18 = browser.currentScene.createNode("Script");
let field19 = browser.currentScene.createNode("field");
field19.name = "frontUrls";
field19.type = "MFString";
field19.accessType = "initializeOnly";
field19.value = "\"rnl_front.png\" \"uffizi_front.png\"";
Script18.field = new MFNode();

Script18.field[0] = field19;


Script18.setSourceCode(`ecmascript:\n"+
"			    var me = '\"1\" \"\\\"2\" \"\\n3\"';`)
Transform2.children[3] = Script18;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Transform2;


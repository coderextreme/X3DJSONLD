var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
Transform2 = browser.currentScene.createNode("Transform");
Shape3 = browser.currentScene.createNode("Shape");
Text4 = browser.currentScene.createNode("Text");
Text4.string = new MFString(new java.lang.String["Node\"\"\""]);
FontStyle5 = browser.currentScene.createNode("FontStyle");
Text4.fontStyle = FontStyle5;

Shape3.geometry = Text4;

Appearance6 = browser.currentScene.createNode("Appearance");
Material7 = browser.currentScene.createNode("Material");
Appearance6.material = Material7;

Shape3.appearance = Appearance6;

Transform2.children = new MFNode();

Transform2.children[0] = Shape3;

Shape8 = browser.currentScene.createNode("Shape");
Text9 = browser.currentScene.createNode("Text");
Text9.string = new MFString(new java.lang.String["Node2","\\\\","\\\\\\\\","Node2"]);
FontStyle10 = browser.currentScene.createNode("FontStyle");
Text9.fontStyle = FontStyle10;

Shape8.geometry = Text9;

Appearance11 = browser.currentScene.createNode("Appearance");
Material12 = browser.currentScene.createNode("Material");
Appearance11.material = Material12;

Shape8.appearance = Appearance11;

Transform2.children[1] = Shape8;

Shape13 = browser.currentScene.createNode("Shape");
Text14 = browser.currentScene.createNode("Text");
Text14.string = new MFString(new java.lang.String["Node3 \\\\\\\\ \\\\ ","Node3\"\"\""]);
FontStyle15 = browser.currentScene.createNode("FontStyle");
Text14.fontStyle = FontStyle15;

Shape13.geometry = Text14;

Appearance16 = browser.currentScene.createNode("Appearance");
Material17 = browser.currentScene.createNode("Material");
Appearance16.material = Material17;

Shape13.appearance = Appearance16;

Transform2.children[2] = Shape13;

Script18 = browser.currentScene.createNode("Script");
field19 = browser.currentScene.createNode("field");
field19.name = "frontUrls";
field19.type = "MFString";
field19.accessType = "initializeOnly";
field19.value = "\"rnl_front.png\" \"uffizi_front.png\"";
Script18.field = new MFNode();

Script18.field[0] = field19;


Script18.setSourceCode(`ecmascript:\n"+
"			    var me = '\"1\" \"\"2\" \"\\n3\"';`)
Transform2.children[3] = Script18;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Transform2;


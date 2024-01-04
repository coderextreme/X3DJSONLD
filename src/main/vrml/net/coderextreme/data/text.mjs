let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
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
meta4.content = "text.x3d";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "identifier";
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/text.x3d";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "description";
meta6.content = "test \\\n text";
head1.meta[4] = meta6;

head = head1;

let Transform8 = browser.currentScene.createNode("Transform");
let Shape9 = browser.currentScene.createNode("Shape");
let Appearance10 = browser.currentScene.createNode("Appearance");
let Material11 = browser.currentScene.createNode("Material");
Appearance10.material = Material11;

Shape9.appearance = Appearance10;

let Text12 = browser.currentScene.createNode("Text");
Text12.string = new MFString(new java.lang.String["Node\"\"\""]);
let FontStyle13 = browser.currentScene.createNode("FontStyle");
Text12.fontStyle = FontStyle13;

Shape9.geometry = Text12;

Transform8.child = new undefined();

Transform8.child[0] = Shape9;

let Shape14 = browser.currentScene.createNode("Shape");
let Appearance15 = browser.currentScene.createNode("Appearance");
let Material16 = browser.currentScene.createNode("Material");
Appearance15.material = Material16;

Shape14.appearance = Appearance15;

let Text17 = browser.currentScene.createNode("Text");
Text17.string = new MFString(new java.lang.String["Node2","\\\\","\\\\\\\\","Node2"]);
let FontStyle18 = browser.currentScene.createNode("FontStyle");
Text17.fontStyle = FontStyle18;

Shape14.geometry = Text17;

Transform8.child[1] = Shape14;

let Shape19 = browser.currentScene.createNode("Shape");
let Appearance20 = browser.currentScene.createNode("Appearance");
let Material21 = browser.currentScene.createNode("Material");
Appearance20.material = Material21;

Shape19.appearance = Appearance20;

let Text22 = browser.currentScene.createNode("Text");
Text22.string = new MFString(new java.lang.String["Node3 \\\\\\\\ \\\\ ","Node3\"\"\""]);
let FontStyle23 = browser.currentScene.createNode("FontStyle");
Text22.fontStyle = FontStyle23;

Shape19.geometry = Text22;

Transform8.child[2] = Shape19;

let Script24 = browser.currentScene.createNode("Script");
let field25 = browser.currentScene.createNode("field");
field25.accessType = "initializeOnly";
field25.type = "MFString";
field25.name = "frontUrls";
field25.value = "\"rnl_front.png\" \"uffizi_front.png\"";
Script24.field = new MFNode();

Script24.field[0] = field25;


Script24.setSourceCode(`ecmascript:\n"+
"			    var me = '\"1\" \"\\\"2\" \"\\n3\"';`)
Transform8.children[3] = Script24;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Transform8;


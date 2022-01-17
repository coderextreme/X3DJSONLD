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
meta4.content = "text.x3d";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "identifier";
meta5.content = "https://coderextreme.net/X3DJSONLD/text.x3d";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "description";
meta6.content = "test \\n text";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "generator";
meta7.content = "Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[5] = meta7;

head = head1;

let Transform9 = browser.currentScene.createNode("Transform");
let Shape10 = browser.currentScene.createNode("Shape");
let Text11 = browser.currentScene.createNode("Text");
Text11.string = new MFString(new java.lang.String["Node\"\"\""]);
let FontStyle12 = browser.currentScene.createNode("FontStyle");
Text11.fontStyle = FontStyle12;

Shape10.geometry = Text11;

let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
Appearance13.material = Material14;

Shape10.appearance = Appearance13;

Transform9.children = new MFNode();

Transform9.children[0] = Shape10;

let Shape15 = browser.currentScene.createNode("Shape");
let Text16 = browser.currentScene.createNode("Text");
Text16.string = new MFString(new java.lang.String["Node2","\\\\","\\\\\\\\","Node2"]);
let FontStyle17 = browser.currentScene.createNode("FontStyle");
Text16.fontStyle = FontStyle17;

Shape15.geometry = Text16;

let Appearance18 = browser.currentScene.createNode("Appearance");
let Material19 = browser.currentScene.createNode("Material");
Appearance18.material = Material19;

Shape15.appearance = Appearance18;

Transform9.children[1] = Shape15;

let Shape20 = browser.currentScene.createNode("Shape");
let Text21 = browser.currentScene.createNode("Text");
Text21.string = new MFString(new java.lang.String["Node3 \\\\\\\\ \\\\ ","Node3\"\"\""]);
let FontStyle22 = browser.currentScene.createNode("FontStyle");
Text21.fontStyle = FontStyle22;

Shape20.geometry = Text21;

let Appearance23 = browser.currentScene.createNode("Appearance");
let Material24 = browser.currentScene.createNode("Material");
Appearance23.material = Material24;

Shape20.appearance = Appearance23;

Transform9.children[2] = Shape20;

let Script25 = browser.currentScene.createNode("Script");
let field26 = browser.currentScene.createNode("field");
field26.name = "frontUrls";
field26.type = "MFString";
field26.accessType = "initializeOnly";
field26.value = "\"rnl_front.png\" \"uffizi_front.png\"";
Script25.field = new MFNode();

Script25.field[0] = field26;

let #sourceCode27 = browser.currentScene.createNode("#sourceCode");
Script25.#sourceCode[1] = #sourceCode27;

Transform9.children[3] = Script25;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Transform9;


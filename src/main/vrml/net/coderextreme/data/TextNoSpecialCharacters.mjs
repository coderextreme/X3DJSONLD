let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "TextSpecialCharacters.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Text node demonstration of quotation, apostrophe, ampersand and backslash characters using X3D MFString escaping for XML character entities";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Don Brutzman";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "created";
meta5.content = "12 July 2008";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "modified";
meta6.content = "2 April 2017";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "reference";
meta7.content = "Character entity references in HTML 4";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "reference";
meta8.content = "http://www.w3.org/TR/REC-html40/sgml/entities.html";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "rights";
meta9.content = "Copyright (c) Don Brutzman and Leonard Daly, 2008";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "identifier";
meta10.content = "http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter02GeometryPrimitives/TextSpecialCharacters.x3d";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "generator";
meta11.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "license";
meta12.content = "../license.html";
head1.meta[10] = meta12;

head = head1;

let Background14 = browser.currentScene.createNode("Background");
Background14.skyColor = new MFColor(new float[1,1,1]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Background14;

let Viewpoint15 = browser.currentScene.createNode("Viewpoint");
Viewpoint15.description = "Default View";
Viewpoint15.position = new SFVec3f(new float[0,0,15]);
browser.currentScene.children[1] = Viewpoint15;

let Shape16 = browser.currentScene.createNode("Shape");
//Empty string \"\" means to skip a line
//The ampersand escape characters are based on XML rules
//apostrophe ' is &apos; and needs to be escaped in single-quote delimiters used for string='value' attribute
//ampersand & is &amp; and needs to be escaped
//quotation \" is &quot; and isn't needed if single-quote delimiters used for string='value' attribute
//quotation \" can be used within an X3D string if escaped with backslash \\ as \\\"\"
//backslash \\ is used as escape character for \" (and itself) in X3D
//character entities are listed in HTML specification and are good for any XML
let Text17 = browser.currentScene.createNode("Text");
Text17.DEF = "DefaultText";
Text17.string = new MFString(new java.lang.String["Character entity substitutions:","empty string \"\" skips a line:","","apostrophe ' is &apos;","ampersand & is &amp;","quote mark \" is &quot;","backslash \\\\ is X3D escape character","double backslash \\\\\\\\ is X3D backslash \\\\ character","Pi is pi is pi XML character entity"]);
let FontStyle18 = browser.currentScene.createNode("FontStyle");
FontStyle18.DEF = "CenteredFontStyle";
FontStyle18.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text17.fontStyle = FontStyle18;

Shape16.geometry = Text17;

let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.DEF = "DefaultMaterial";
Material20.diffuseColor = new SFColor(new float[0.2,0.2,0.2]);
Appearance19.material = Material20;

Shape16.appearance = Appearance19;

browser.currentScene.children[2] = Shape16;

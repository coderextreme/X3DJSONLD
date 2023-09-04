let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "TextExamples.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Show different escape-character text examples for embedded quotation marks.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Don Brutzman";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "created";
meta5.content = "7 April 2001";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "modified";
meta6.content = "26 April 2016";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "warning";
meta7.content = "Note that X3D Canonicalization (C14N) will scrub alternate XML character representations, be careful to check original encoding into version control.";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "warning";
meta8.content = "Usually this source document needs to be inspected and edited using a plain-text editor in order to see the differences in these XML-equivalent text representations.";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "identifier";
meta9.content = "https://www.web3d.org/x3d/content/examples/Basic/development/TextExamples.x3d";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "generator";
meta10.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[8] = meta10;

head = head1;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.translation = new SFVec3f(new float[0,2,0]);
let Shape13 = browser.currentScene.createNode("Shape");
let Appearance14 = browser.currentScene.createNode("Appearance");
Appearance14.DEF = "LightBlueAppearance";
let Material15 = browser.currentScene.createNode("Material");
Material15.diffuseColor = new SFColor(new float[0.1,0.7,0.7]);
Appearance14.material = Material15;

Shape13.appearance = Appearance14;

let Text16 = browser.currentScene.createNode("Text");
Text16.string = new MFString(new java.lang.String["Compare special character escaping"]);
let FontStyle17 = browser.currentScene.createNode("FontStyle");
FontStyle17.DEF = "testFontStyle";
FontStyle17.size = 0.8;
FontStyle17.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text16.fontStyle = FontStyle17;

Shape13.geometry = Text16;

Transform12.child = new undefined();

Transform12.child[0] = Shape13;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Transform12;

let Transform18 = browser.currentScene.createNode("Transform");
Transform18.translation = new SFVec3f(new float[-3,0,0]);
let Shape19 = browser.currentScene.createNode("Shape");
let Appearance20 = browser.currentScene.createNode("Appearance");
Appearance20.USE = "LightBlueAppearance";
Shape19.appearance = Appearance20;

let Text21 = browser.currentScene.createNode("Text");
Text21.string = new MFString(new java.lang.String["I don't think so","","he said \"Hi\""]);
let FontStyle22 = browser.currentScene.createNode("FontStyle");
FontStyle22.USE = "testFontStyle";
Text21.fontStyle = FontStyle22;

Shape19.geometry = Text21;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

browser.currentScene.children[1] = Transform18;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.translation = new SFVec3f(new float[3,0,0]);
let Shape24 = browser.currentScene.createNode("Shape");
let Appearance25 = browser.currentScene.createNode("Appearance");
Appearance25.USE = "LightBlueAppearance";
Shape24.appearance = Appearance25;

let Text26 = browser.currentScene.createNode("Text");
Text26.string = new MFString(new java.lang.String["I don't think so","","he said \"Hi\""]);
let FontStyle27 = browser.currentScene.createNode("FontStyle");
FontStyle27.USE = "testFontStyle";
Text26.fontStyle = FontStyle27;

Shape24.geometry = Text26;

Transform23.child = new undefined();

Transform23.child[0] = Shape24;

browser.currentScene.children[2] = Transform23;


let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
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

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "license";
meta11.content = "../license.html";
head1.meta[9] = meta11;

head = head1;

let Transform13 = browser.currentScene.createNode("Transform");
Transform13.translation = new SFVec3f(new float[0,2,0]);
let Shape14 = browser.currentScene.createNode("Shape");
let Text15 = browser.currentScene.createNode("Text");
Text15.string = new MFString(new java.lang.String["Compare special character escaping"]);
let FontStyle16 = browser.currentScene.createNode("FontStyle");
FontStyle16.DEF = "testFontStyle";
FontStyle16.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle16.size = 0.8;
Text15.fontStyle = FontStyle16;

Shape14.geometry = Text15;

let Appearance17 = browser.currentScene.createNode("Appearance");
Appearance17.DEF = "LightBlueAppearance";
let Material18 = browser.currentScene.createNode("Material");
Material18.diffuseColor = new SFColor(new float[0.1,0.7,0.7]);
Appearance17.material = Material18;

Shape14.appearance = Appearance17;

Transform13.children = new MFNode();

Transform13.children[0] = Shape14;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Transform13;

let Transform19 = browser.currentScene.createNode("Transform");
Transform19.translation = new SFVec3f(new float[-3,0,0]);
let Shape20 = browser.currentScene.createNode("Shape");
let Text21 = browser.currentScene.createNode("Text");
Text21.string = new MFString(new java.lang.String["I don't think so","","he said \"Hi\""]);
let FontStyle22 = browser.currentScene.createNode("FontStyle");
FontStyle22.USE = "testFontStyle";
Text21.fontStyle = FontStyle22;

Shape20.geometry = Text21;

let Appearance23 = browser.currentScene.createNode("Appearance");
Appearance23.USE = "LightBlueAppearance";
Shape20.appearance = Appearance23;

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

browser.currentScene.children[1] = Transform19;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.translation = new SFVec3f(new float[3,0,0]);
let Shape25 = browser.currentScene.createNode("Shape");
let Text26 = browser.currentScene.createNode("Text");
Text26.string = new MFString(new java.lang.String["I don't think so","","he said \"Hi\""]);
let FontStyle27 = browser.currentScene.createNode("FontStyle");
FontStyle27.USE = "testFontStyle";
Text26.fontStyle = FontStyle27;

Shape25.geometry = Text26;

let Appearance28 = browser.currentScene.createNode("Appearance");
Appearance28.USE = "LightBlueAppearance";
Shape25.appearance = Appearance28;

Transform24.children = new MFNode();

Transform24.children[0] = Shape25;

browser.currentScene.children[2] = Transform24;


let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let Background2 = browser.currentScene.createNode("Background");
Background2.skyColor = new MFColor(new float[0.1,0.1,0.4]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Background2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Table 5.18 SFImage component examples";
Viewpoint3.position = new SFVec3f(new float[0,0,14]);
browser.currentScene.children[1] = Viewpoint3;

let Transform4 = browser.currentScene.createNode("Transform");
Transform4.translation = new SFVec3f(new float[-6,0,0]);
let Shape5 = browser.currentScene.createNode("Shape");
let Appearance6 = browser.currentScene.createNode("Appearance");
let PixelTexture7 = browser.currentScene.createNode("PixelTexture");
PixelTexture7.DEF = "ZeroComponents";
Appearance6.texture = PixelTexture7;

Shape5.appearance = Appearance6;

let Box8 = browser.currentScene.createNode("Box");
Shape5.geometry = Box8;

Transform4.children = new MFNode();

Transform4.children[0] = Shape5;

let Transform9 = browser.currentScene.createNode("Transform");
Transform9.translation = new SFVec3f(new float[0,-2,0]);
let Shape10 = browser.currentScene.createNode("Shape");
let Text11 = browser.currentScene.createNode("Text");
Text11.string = new MFString(new java.lang.String["0"]);
let FontStyle12 = browser.currentScene.createNode("FontStyle");
FontStyle12.DEF = "CenterJustify";
FontStyle12.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text11.fontStyle = FontStyle12;

Shape10.geometry = Text11;

let Appearance13 = browser.currentScene.createNode("Appearance");
Appearance13.DEF = "TextMaterial";
let Material14 = browser.currentScene.createNode("Material");
Material14.diffuseColor = new SFColor(new float[1,1,1]);
Appearance13.material = Material14;

Shape10.appearance = Appearance13;

Transform9.children = new MFNode();

Transform9.children[0] = Shape10;

Transform4.children[1] = Transform9;

browser.currentScene.children[2] = Transform4;

let Transform15 = browser.currentScene.createNode("Transform");
Transform15.translation = new SFVec3f(new float[-3,0,0]);
let Shape16 = browser.currentScene.createNode("Shape");
let Appearance17 = browser.currentScene.createNode("Appearance");
let PixelTexture18 = browser.currentScene.createNode("PixelTexture");
PixelTexture18.DEF = "OneComponent";
PixelTexture18.image = new SFImage(new int[1,2,1,255,0]);
Appearance17.texture = PixelTexture18;

Shape16.appearance = Appearance17;

let Box19 = browser.currentScene.createNode("Box");
Shape16.geometry = Box19;

Transform15.children = new MFNode();

Transform15.children[0] = Shape16;

let Transform20 = browser.currentScene.createNode("Transform");
Transform20.translation = new SFVec3f(new float[0,-2,0]);
let Shape21 = browser.currentScene.createNode("Shape");
let Text22 = browser.currentScene.createNode("Text");
Text22.string = new MFString(new java.lang.String["1"]);
let FontStyle23 = browser.currentScene.createNode("FontStyle");
FontStyle23.USE = "CenterJustify";
Text22.fontStyle = FontStyle23;

Shape21.geometry = Text22;

let Appearance24 = browser.currentScene.createNode("Appearance");
Appearance24.USE = "TextMaterial";
Shape21.appearance = Appearance24;

Transform20.children = new MFNode();

Transform20.children[0] = Shape21;

Transform15.children[1] = Transform20;

browser.currentScene.children[3] = Transform15;

let Transform25 = browser.currentScene.createNode("Transform");
let Shape26 = browser.currentScene.createNode("Shape");
let Appearance27 = browser.currentScene.createNode("Appearance");
let PixelTexture28 = browser.currentScene.createNode("PixelTexture");
PixelTexture28.DEF = "TwoComponents";
PixelTexture28.image = new SFImage(new int[2,1,2,52479,8823]);
Appearance27.texture = PixelTexture28;

Shape26.appearance = Appearance27;

let Box29 = browser.currentScene.createNode("Box");
Shape26.geometry = Box29;

Transform25.children = new MFNode();

Transform25.children[0] = Shape26;

let Transform30 = browser.currentScene.createNode("Transform");
Transform30.translation = new SFVec3f(new float[0,-2,0]);
let Shape31 = browser.currentScene.createNode("Shape");
let Text32 = browser.currentScene.createNode("Text");
Text32.string = new MFString(new java.lang.String["2"]);
let FontStyle33 = browser.currentScene.createNode("FontStyle");
FontStyle33.USE = "CenterJustify";
Text32.fontStyle = FontStyle33;

Shape31.geometry = Text32;

let Appearance34 = browser.currentScene.createNode("Appearance");
Appearance34.USE = "TextMaterial";
Shape31.appearance = Appearance34;

Transform30.children = new MFNode();

Transform30.children[0] = Shape31;

Transform25.children[1] = Transform30;

browser.currentScene.children[4] = Transform25;

let Transform35 = browser.currentScene.createNode("Transform");
Transform35.translation = new SFVec3f(new float[3,0,0]);
let Shape36 = browser.currentScene.createNode("Shape");
let Appearance37 = browser.currentScene.createNode("Appearance");
//note 0x000000 = 0
let PixelTexture38 = browser.currentScene.createNode("PixelTexture");
PixelTexture38.DEF = "ThreeComponents";
PixelTexture38.image = new SFImage(new int[2,4,3,16711680,65280,0,0,0,0,16777215,16776960]);
Appearance37.texture = PixelTexture38;

Shape36.appearance = Appearance37;

let Box39 = browser.currentScene.createNode("Box");
Shape36.geometry = Box39;

Transform35.children = new MFNode();

Transform35.children[0] = Shape36;

let Transform40 = browser.currentScene.createNode("Transform");
Transform40.translation = new SFVec3f(new float[0,-2,0]);
let Shape41 = browser.currentScene.createNode("Shape");
let Text42 = browser.currentScene.createNode("Text");
Text42.string = new MFString(new java.lang.String["3"]);
let FontStyle43 = browser.currentScene.createNode("FontStyle");
FontStyle43.USE = "CenterJustify";
Text42.fontStyle = FontStyle43;

Shape41.geometry = Text42;

let Appearance44 = browser.currentScene.createNode("Appearance");
Appearance44.USE = "TextMaterial";
Shape41.appearance = Appearance44;

Transform40.children = new MFNode();

Transform40.children[0] = Shape41;

Transform35.children[1] = Transform40;

browser.currentScene.children[5] = Transform35;

let Transform45 = browser.currentScene.createNode("Transform");
Transform45.translation = new SFVec3f(new float[6,0,0]);
let Shape46 = browser.currentScene.createNode("Shape");
let Appearance47 = browser.currentScene.createNode("Appearance");
//Erroneous value in book: 1 0 0 255, 0 1 0 255, 0 0 1 255, 1 0 0 127, 0 1 0 127, 0 0 1 127
let PixelTexture48 = browser.currentScene.createNode("PixelTexture");
PixelTexture48.DEF = "FourComponents";
PixelTexture48.image = new SFImage(new int[3,2,4,-16776961,16711935,65535,-16777089,16711807,65407]);
Appearance47.texture = PixelTexture48;

Shape46.appearance = Appearance47;

let Box49 = browser.currentScene.createNode("Box");
Shape46.geometry = Box49;

Transform45.children = new MFNode();

Transform45.children[0] = Shape46;

let Transform50 = browser.currentScene.createNode("Transform");
Transform50.translation = new SFVec3f(new float[0,-2,0]);
let Shape51 = browser.currentScene.createNode("Shape");
let Text52 = browser.currentScene.createNode("Text");
Text52.string = new MFString(new java.lang.String["4"]);
let FontStyle53 = browser.currentScene.createNode("FontStyle");
FontStyle53.USE = "CenterJustify";
Text52.fontStyle = FontStyle53;

Shape51.geometry = Text52;

let Appearance54 = browser.currentScene.createNode("Appearance");
Appearance54.USE = "TextMaterial";
Shape51.appearance = Appearance54;

Transform50.children = new MFNode();

Transform50.children[0] = Shape51;

Transform45.children[1] = Transform50;

browser.currentScene.children[6] = Transform45;

//Background from PixelTextureBW.x3d
let Transform55 = browser.currentScene.createNode("Transform");
Transform55.translation = new SFVec3f(new float[0,6,-2]);
let Shape56 = browser.currentScene.createNode("Shape");
let Appearance57 = browser.currentScene.createNode("Appearance");
let PixelTexture58 = browser.currentScene.createNode("PixelTexture");
PixelTexture58.image = new SFImage(new int[8,8,1,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204]);
Appearance57.texture = PixelTexture58;

Shape56.appearance = Appearance57;

let Box59 = browser.currentScene.createNode("Box");
Box59.size = new SFVec3f(new float[16,16,0.1]);
Shape56.geometry = Box59;

Transform55.children = new MFNode();

Transform55.children[0] = Shape56;

browser.currentScene.children[7] = Transform55;


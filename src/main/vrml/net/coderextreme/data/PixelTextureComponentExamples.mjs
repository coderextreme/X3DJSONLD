let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "PixelTextureComponentExamples.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "This example shows the five PixelTexture components, with 0 to 4 components each, shown in Table 5-18.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Leonard Daly and Don Brutzman";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "created";
meta5.content = "25 August 2008";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "modified";
meta6.content = "7 January 2014";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "reference";
meta7.content = "http://X3dGraphics.com";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "reference";
meta8.content = "X3D for Web Authors, Table 5.18";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "reference";
meta9.content = "https://www.web3d.org/x3d/content/examples/X3dResources.html";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "rights";
meta10.content = "Copyright (c) 2006, Daly Realism and Don Brutzman";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "subject";
meta11.content = "X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "identifier";
meta12.content = "http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.x3d";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "generator";
meta13.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "license";
meta14.content = "../license.html";
head1.meta[12] = meta14;

head = head1;

let Background16 = browser.currentScene.createNode("Background");
Background16.skyColor = new MFColor(new float[0.1,0.1,0.4]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Background16;

let Viewpoint17 = browser.currentScene.createNode("Viewpoint");
Viewpoint17.description = "Table 5.18 SFImage component examples";
Viewpoint17.position = new SFVec3f(new float[0,0,14]);
browser.currentScene.children[1] = Viewpoint17;

let Transform18 = browser.currentScene.createNode("Transform");
Transform18.translation = new SFVec3f(new float[-6,0,0]);
let Shape19 = browser.currentScene.createNode("Shape");
let Appearance20 = browser.currentScene.createNode("Appearance");
let PixelTexture21 = browser.currentScene.createNode("PixelTexture");
PixelTexture21.DEF = "ZeroComponents";
Appearance20.texture = PixelTexture21;

Shape19.appearance = Appearance20;

let Box22 = browser.currentScene.createNode("Box");
Shape19.geometry = Box22;

Transform18.children = new MFNode();

Transform18.children[0] = Shape19;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.translation = new SFVec3f(new float[0,-2,0]);
let Shape24 = browser.currentScene.createNode("Shape");
let Text25 = browser.currentScene.createNode("Text");
Text25.string = new MFString(new java.lang.String["0"]);
let FontStyle26 = browser.currentScene.createNode("FontStyle");
FontStyle26.DEF = "CenterJustify";
FontStyle26.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text25.fontStyle = FontStyle26;

Shape24.geometry = Text25;

let Appearance27 = browser.currentScene.createNode("Appearance");
Appearance27.DEF = "TextMaterial";
let Material28 = browser.currentScene.createNode("Material");
Material28.diffuseColor = new SFColor(new float[1,1,1]);
Appearance27.material = Material28;

Shape24.appearance = Appearance27;

Transform23.children = new MFNode();

Transform23.children[0] = Shape24;

Transform18.children[1] = Transform23;

browser.currentScene.children[2] = Transform18;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.translation = new SFVec3f(new float[-3,0,0]);
let Shape30 = browser.currentScene.createNode("Shape");
let Appearance31 = browser.currentScene.createNode("Appearance");
let PixelTexture32 = browser.currentScene.createNode("PixelTexture");
PixelTexture32.DEF = "OneComponent";
PixelTexture32.image = new SFImage(new int[1,2,1,255,0]);
Appearance31.texture = PixelTexture32;

Shape30.appearance = Appearance31;

let Box33 = browser.currentScene.createNode("Box");
Shape30.geometry = Box33;

Transform29.children = new MFNode();

Transform29.children[0] = Shape30;

let Transform34 = browser.currentScene.createNode("Transform");
Transform34.translation = new SFVec3f(new float[0,-2,0]);
let Shape35 = browser.currentScene.createNode("Shape");
let Text36 = browser.currentScene.createNode("Text");
Text36.string = new MFString(new java.lang.String["1"]);
let FontStyle37 = browser.currentScene.createNode("FontStyle");
FontStyle37.USE = "CenterJustify";
Text36.fontStyle = FontStyle37;

Shape35.geometry = Text36;

let Appearance38 = browser.currentScene.createNode("Appearance");
Appearance38.USE = "TextMaterial";
Shape35.appearance = Appearance38;

Transform34.children = new MFNode();

Transform34.children[0] = Shape35;

Transform29.children[1] = Transform34;

browser.currentScene.children[3] = Transform29;

let Transform39 = browser.currentScene.createNode("Transform");
let Shape40 = browser.currentScene.createNode("Shape");
let Appearance41 = browser.currentScene.createNode("Appearance");
let PixelTexture42 = browser.currentScene.createNode("PixelTexture");
PixelTexture42.DEF = "TwoComponents";
PixelTexture42.image = new SFImage(new int[2,1,2,52479,8823]);
Appearance41.texture = PixelTexture42;

Shape40.appearance = Appearance41;

let Box43 = browser.currentScene.createNode("Box");
Shape40.geometry = Box43;

Transform39.children = new MFNode();

Transform39.children[0] = Shape40;

let Transform44 = browser.currentScene.createNode("Transform");
Transform44.translation = new SFVec3f(new float[0,-2,0]);
let Shape45 = browser.currentScene.createNode("Shape");
let Text46 = browser.currentScene.createNode("Text");
Text46.string = new MFString(new java.lang.String["2"]);
let FontStyle47 = browser.currentScene.createNode("FontStyle");
FontStyle47.USE = "CenterJustify";
Text46.fontStyle = FontStyle47;

Shape45.geometry = Text46;

let Appearance48 = browser.currentScene.createNode("Appearance");
Appearance48.USE = "TextMaterial";
Shape45.appearance = Appearance48;

Transform44.children = new MFNode();

Transform44.children[0] = Shape45;

Transform39.children[1] = Transform44;

browser.currentScene.children[4] = Transform39;

let Transform49 = browser.currentScene.createNode("Transform");
Transform49.translation = new SFVec3f(new float[3,0,0]);
let Shape50 = browser.currentScene.createNode("Shape");
let Appearance51 = browser.currentScene.createNode("Appearance");
//note 0x000000 = 0
let PixelTexture52 = browser.currentScene.createNode("PixelTexture");
PixelTexture52.DEF = "ThreeComponents";
PixelTexture52.image = new SFImage(new int[2,4,3,16711680,65280,0,0,0,0,16777215,16776960]);
Appearance51.texture = PixelTexture52;

Shape50.appearance = Appearance51;

let Box53 = browser.currentScene.createNode("Box");
Shape50.geometry = Box53;

Transform49.children = new MFNode();

Transform49.children[0] = Shape50;

let Transform54 = browser.currentScene.createNode("Transform");
Transform54.translation = new SFVec3f(new float[0,-2,0]);
let Shape55 = browser.currentScene.createNode("Shape");
let Text56 = browser.currentScene.createNode("Text");
Text56.string = new MFString(new java.lang.String["3"]);
let FontStyle57 = browser.currentScene.createNode("FontStyle");
FontStyle57.USE = "CenterJustify";
Text56.fontStyle = FontStyle57;

Shape55.geometry = Text56;

let Appearance58 = browser.currentScene.createNode("Appearance");
Appearance58.USE = "TextMaterial";
Shape55.appearance = Appearance58;

Transform54.children = new MFNode();

Transform54.children[0] = Shape55;

Transform49.children[1] = Transform54;

browser.currentScene.children[5] = Transform49;

let Transform59 = browser.currentScene.createNode("Transform");
Transform59.translation = new SFVec3f(new float[6,0,0]);
let Shape60 = browser.currentScene.createNode("Shape");
let Appearance61 = browser.currentScene.createNode("Appearance");
//Erroneous value in book: 1 0 0 255, 0 1 0 255, 0 0 1 255, 1 0 0 127, 0 1 0 127, 0 0 1 127
let PixelTexture62 = browser.currentScene.createNode("PixelTexture");
PixelTexture62.DEF = "FourComponents";
PixelTexture62.image = new SFImage(new int[3,2,4,-16776961,16711935,65535,-16777089,16711807,65407]);
Appearance61.texture = PixelTexture62;

Shape60.appearance = Appearance61;

let Box63 = browser.currentScene.createNode("Box");
Shape60.geometry = Box63;

Transform59.children = new MFNode();

Transform59.children[0] = Shape60;

let Transform64 = browser.currentScene.createNode("Transform");
Transform64.translation = new SFVec3f(new float[0,-2,0]);
let Shape65 = browser.currentScene.createNode("Shape");
let Text66 = browser.currentScene.createNode("Text");
Text66.string = new MFString(new java.lang.String["4"]);
let FontStyle67 = browser.currentScene.createNode("FontStyle");
FontStyle67.USE = "CenterJustify";
Text66.fontStyle = FontStyle67;

Shape65.geometry = Text66;

let Appearance68 = browser.currentScene.createNode("Appearance");
Appearance68.USE = "TextMaterial";
Shape65.appearance = Appearance68;

Transform64.children = new MFNode();

Transform64.children[0] = Shape65;

Transform59.children[1] = Transform64;

browser.currentScene.children[6] = Transform59;

//Background from PixelTextureBW.x3d
let Transform69 = browser.currentScene.createNode("Transform");
Transform69.translation = new SFVec3f(new float[0,6,-2]);
let Shape70 = browser.currentScene.createNode("Shape");
let Appearance71 = browser.currentScene.createNode("Appearance");
let PixelTexture72 = browser.currentScene.createNode("PixelTexture");
PixelTexture72.image = new SFImage(new int[8,8,1,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204]);
Appearance71.texture = PixelTexture72;

Shape70.appearance = Appearance71;

let Box73 = browser.currentScene.createNode("Box");
Box73.size = new SFVec3f(new float[16,16,0.1]);
Shape70.geometry = Box73;

Transform69.children = new MFNode();

Transform69.children[0] = Shape70;

browser.currentScene.children[7] = Transform69;


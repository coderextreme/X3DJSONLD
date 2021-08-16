let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "Table5_18PixelTexture";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "PixelTexture example for Table 5.18";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Leonard Daly and Don Brutzman";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "created";
meta5.content = "18 December 2006";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "modified";
meta6.content = "2 April 2017";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "reference";
meta7.content = "http://X3dGraphics.com";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "reference";
meta8.content = "https://www.web3d.org/x3d/content/examples/X3dResources.html";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "rights";
meta9.content = "Copyright 2006, Daly Realism and Don Brutzman";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "subject";
meta10.content = "X3D, PixelTexture";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "identifier";
meta11.content = "http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/Table5_18PixelTexture";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "generator";
meta12.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "license";
meta13.content = "../license.html";
head1.meta[11] = meta13;

head = head1;

let Background15 = browser.currentScene.createNode("Background");
Background15.skyColor = new MFColor(new float[0,0,1]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Background15;

let Transform16 = browser.currentScene.createNode("Transform");
Transform16.DEF = "Checkerboard";
Transform16.translation = new SFVec3f(new float[0,0,-10]);
let Shape17 = browser.currentScene.createNode("Shape");
let Appearance18 = browser.currentScene.createNode("Appearance");
let TextureTransform19 = browser.currentScene.createNode("TextureTransform");
TextureTransform19.scale = new SFVec2f(new float[500,500]);
Appearance18.textureTransform = TextureTransform19;

let PixelTexture20 = browser.currentScene.createNode("PixelTexture");
PixelTexture20.image = new SFImage(new int[2,2,3,15119869,16767927,16767927,15119869]);
Appearance18.texture = PixelTexture20;

Shape17.appearance = Appearance18;

let Box21 = browser.currentScene.createNode("Box");
Box21.size = new SFVec3f(new float[1000,1000,0.01]);
Shape17.geometry = Box21;

Transform16.children = new MFNode();

Transform16.children[0] = Shape17;

browser.currentScene.children[1] = Transform16;

let Viewpoint22 = browser.currentScene.createNode("Viewpoint");
Viewpoint22.description = "View All";
Viewpoint22.position = new SFVec3f(new float[0,0,20]);
browser.currentScene.children[2] = Viewpoint22;

let Viewpoint23 = browser.currentScene.createNode("Viewpoint");
Viewpoint23.description = "Empty Image";
Viewpoint23.position = new SFVec3f(new float[0,5,5]);
browser.currentScene.children[3] = Viewpoint23;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.DEF = "EmptyImage";
Transform24.rotation = new SFRotation(new float[1,1,0,1]);
Transform24.translation = new SFVec3f(new float[0,5,0]);
let Shape25 = browser.currentScene.createNode("Shape");
let Appearance26 = browser.currentScene.createNode("Appearance");
let PixelTexture27 = browser.currentScene.createNode("PixelTexture");
Appearance26.texture = PixelTexture27;

Shape25.appearance = Appearance26;

let Box28 = browser.currentScene.createNode("Box");
Box28.DEF = "StandardBox";
Shape25.geometry = Box28;

Transform24.children = new MFNode();

Transform24.children[0] = Shape25;

browser.currentScene.children[4] = Transform24;

let Viewpoint29 = browser.currentScene.createNode("Viewpoint");
Viewpoint29.description = "Black and white PixelTexture";
Viewpoint29.position = new SFVec3f(new float[-5,0,5]);
browser.currentScene.children[5] = Viewpoint29;

let Transform30 = browser.currentScene.createNode("Transform");
Transform30.DEF = "BW";
Transform30.rotation = new SFRotation(new float[1,1,0,1]);
Transform30.translation = new SFVec3f(new float[-5,0,0]);
let Shape31 = browser.currentScene.createNode("Shape");
let Appearance32 = browser.currentScene.createNode("Appearance");
let PixelTexture33 = browser.currentScene.createNode("PixelTexture");
PixelTexture33.image = new SFImage(new int[1,2,1,255,0]);
Appearance32.texture = PixelTexture33;

Shape31.appearance = Appearance32;

let Box34 = browser.currentScene.createNode("Box");
Box34.USE = "StandardBox";
Shape31.geometry = Box34;

Transform30.children = new MFNode();

Transform30.children[0] = Shape31;

browser.currentScene.children[6] = Transform30;

let Viewpoint35 = browser.currentScene.createNode("Viewpoint");
Viewpoint35.description = "Black and white with Alpha PixelTexture";
Viewpoint35.position = new SFVec3f(new float[5,0,5]);
browser.currentScene.children[7] = Viewpoint35;

let Transform36 = browser.currentScene.createNode("Transform");
Transform36.DEF = "AlphaBW";
Transform36.rotation = new SFRotation(new float[1,1,0,1]);
Transform36.translation = new SFVec3f(new float[5,0,0]);
let Shape37 = browser.currentScene.createNode("Shape");
let Appearance38 = browser.currentScene.createNode("Appearance");
let PixelTexture39 = browser.currentScene.createNode("PixelTexture");
PixelTexture39.image = new SFImage(new int[2,1,2,52479,8823]);
Appearance38.texture = PixelTexture39;

Shape37.appearance = Appearance38;

let Box40 = browser.currentScene.createNode("Box");
Box40.USE = "StandardBox";
Shape37.geometry = Box40;

Transform36.children = new MFNode();

Transform36.children[0] = Shape37;

browser.currentScene.children[8] = Transform36;

let Viewpoint41 = browser.currentScene.createNode("Viewpoint");
Viewpoint41.description = "RGB PixelTexture";
Viewpoint41.position = new SFVec3f(new float[-5,-5,5]);
browser.currentScene.children[9] = Viewpoint41;

let Transform42 = browser.currentScene.createNode("Transform");
Transform42.DEF = "RGB";
Transform42.rotation = new SFRotation(new float[1,1,0,1]);
Transform42.translation = new SFVec3f(new float[-5,-5,0]);
let Shape43 = browser.currentScene.createNode("Shape");
let Appearance44 = browser.currentScene.createNode("Appearance");
let PixelTexture45 = browser.currentScene.createNode("PixelTexture");
PixelTexture45.image = new SFImage(new int[2,4,3,16711680,65280,0,0,0,0,16777215,16776960]);
Appearance44.texture = PixelTexture45;

Shape43.appearance = Appearance44;

let Box46 = browser.currentScene.createNode("Box");
Box46.USE = "StandardBox";
Shape43.geometry = Box46;

Transform42.children = new MFNode();

Transform42.children[0] = Shape43;

browser.currentScene.children[10] = Transform42;

let Viewpoint47 = browser.currentScene.createNode("Viewpoint");
Viewpoint47.description = "RGB with Alpha PixelTexture";
Viewpoint47.position = new SFVec3f(new float[5,-5,5]);
browser.currentScene.children[11] = Viewpoint47;

let Transform48 = browser.currentScene.createNode("Transform");
Transform48.DEF = "AlphaRGB";
Transform48.rotation = new SFRotation(new float[1,1,0,1]);
Transform48.translation = new SFVec3f(new float[5,-5,0]);
let Shape49 = browser.currentScene.createNode("Shape");
let Appearance50 = browser.currentScene.createNode("Appearance");
let PixelTexture51 = browser.currentScene.createNode("PixelTexture");
PixelTexture51.image = new SFImage(new int[3,2,4,-16776961,16711935,65535,-16777089,16711807,65407]);
Appearance50.texture = PixelTexture51;

Shape49.appearance = Appearance50;

let Box52 = browser.currentScene.createNode("Box");
Box52.USE = "StandardBox";
Shape49.geometry = Box52;

Transform48.children = new MFNode();

Transform48.children[0] = Shape49;

browser.currentScene.children[12] = Transform48;


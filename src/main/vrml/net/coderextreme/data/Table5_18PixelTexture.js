let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.3";
let Background2 = browser.currentScene.createNode("Background");
Background2.skyColor = new MFColor(new float[0,0,1]);
Background2.transparency = 0;
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Background2;

let Transform3 = browser.currentScene.createNode("Transform");
Transform3.DEF = "Checkerboard";
Transform3.translation = new SFVec3f(new float[0,0,-10]);
Transform3.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform3.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape4 = browser.currentScene.createNode("Shape");
Shape4.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape4.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance5 = browser.currentScene.createNode("Appearance");
let TextureTransform6 = browser.currentScene.createNode("TextureTransform");
TextureTransform6.scale = new SFVec2f(new float[500,500]);
Appearance5.textureTransform = TextureTransform6;

let PixelTexture7 = browser.currentScene.createNode("PixelTexture");
PixelTexture7.image = new SFImage(new int[2,2,3,15119869,16767927,16767927,15119869]);
Appearance5.texture = PixelTexture7;

Shape4.appearance = Appearance5;

let Box8 = browser.currentScene.createNode("Box");
Box8.size = new SFVec3f(new float[1000,1000,0.01]);
Box8.solid = True;
Shape4.geometry = Box8;

Transform3.children = new MFNode();

Transform3.children[0] = Shape4;

browser.currentScene.children[1] = Transform3;

let Viewpoint9 = browser.currentScene.createNode("Viewpoint");
Viewpoint9.description = "View All";
Viewpoint9.position = new SFVec3f(new float[0,0,20]);
browser.currentScene.children[2] = Viewpoint9;

let Viewpoint10 = browser.currentScene.createNode("Viewpoint");
Viewpoint10.description = "Empty Image";
Viewpoint10.position = new SFVec3f(new float[0,5,5]);
browser.currentScene.children[3] = Viewpoint10;

let Transform11 = browser.currentScene.createNode("Transform");
Transform11.DEF = "EmptyImage";
Transform11.rotation = new SFRotation(new float[1,1,0,1]);
Transform11.translation = new SFVec3f(new float[0,5,0]);
Transform11.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform11.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape12 = browser.currentScene.createNode("Shape");
Shape12.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape12.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance13 = browser.currentScene.createNode("Appearance");
let PixelTexture14 = browser.currentScene.createNode("PixelTexture");
Appearance13.texture = PixelTexture14;

Shape12.appearance = Appearance13;

let Box15 = browser.currentScene.createNode("Box");
Box15.DEF = "StandardBox";
Box15.size = new SFVec3f(new float[2,2,2]);
Box15.solid = True;
Shape12.geometry = Box15;

Transform11.children = new MFNode();

Transform11.children[0] = Shape12;

browser.currentScene.children[4] = Transform11;

let Viewpoint16 = browser.currentScene.createNode("Viewpoint");
Viewpoint16.description = "Black and white PixelTexture";
Viewpoint16.position = new SFVec3f(new float[-5,0,5]);
browser.currentScene.children[5] = Viewpoint16;

let Transform17 = browser.currentScene.createNode("Transform");
Transform17.DEF = "BW";
Transform17.rotation = new SFRotation(new float[1,1,0,1]);
Transform17.translation = new SFVec3f(new float[-5,0,0]);
Transform17.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform17.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape18 = browser.currentScene.createNode("Shape");
Shape18.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape18.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance19 = browser.currentScene.createNode("Appearance");
let PixelTexture20 = browser.currentScene.createNode("PixelTexture");
PixelTexture20.image = new SFImage(new int[1,2,1,255,0]);
Appearance19.texture = PixelTexture20;

Shape18.appearance = Appearance19;

let Box21 = browser.currentScene.createNode("Box");
Box21.USE = "StandardBox";
Shape18.geometry = Box21;

Transform17.children = new MFNode();

Transform17.children[0] = Shape18;

browser.currentScene.children[6] = Transform17;

let Viewpoint22 = browser.currentScene.createNode("Viewpoint");
Viewpoint22.description = "Black and white with Alpha PixelTexture";
Viewpoint22.position = new SFVec3f(new float[5,0,5]);
browser.currentScene.children[7] = Viewpoint22;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.DEF = "AlphaBW";
Transform23.rotation = new SFRotation(new float[1,1,0,1]);
Transform23.translation = new SFVec3f(new float[5,0,0]);
Transform23.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform23.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape24 = browser.currentScene.createNode("Shape");
Shape24.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape24.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance25 = browser.currentScene.createNode("Appearance");
let PixelTexture26 = browser.currentScene.createNode("PixelTexture");
PixelTexture26.image = new SFImage(new int[2,1,2,52479,8823]);
Appearance25.texture = PixelTexture26;

Shape24.appearance = Appearance25;

let Box27 = browser.currentScene.createNode("Box");
Box27.USE = "StandardBox";
Shape24.geometry = Box27;

Transform23.children = new MFNode();

Transform23.children[0] = Shape24;

browser.currentScene.children[8] = Transform23;

let Viewpoint28 = browser.currentScene.createNode("Viewpoint");
Viewpoint28.description = "RGB PixelTexture";
Viewpoint28.position = new SFVec3f(new float[-5,-5,5]);
browser.currentScene.children[9] = Viewpoint28;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.DEF = "RGB";
Transform29.rotation = new SFRotation(new float[1,1,0,1]);
Transform29.translation = new SFVec3f(new float[-5,-5,0]);
Transform29.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform29.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape30 = browser.currentScene.createNode("Shape");
Shape30.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape30.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance31 = browser.currentScene.createNode("Appearance");
let PixelTexture32 = browser.currentScene.createNode("PixelTexture");
PixelTexture32.image = new SFImage(new int[2,4,3,16711680,65280,0,0,0,0,16777215,16776960]);
Appearance31.texture = PixelTexture32;

Shape30.appearance = Appearance31;

let Box33 = browser.currentScene.createNode("Box");
Box33.USE = "StandardBox";
Shape30.geometry = Box33;

Transform29.children = new MFNode();

Transform29.children[0] = Shape30;

browser.currentScene.children[10] = Transform29;

let Viewpoint34 = browser.currentScene.createNode("Viewpoint");
Viewpoint34.description = "RGB with Alpha PixelTexture";
Viewpoint34.position = new SFVec3f(new float[5,-5,5]);
browser.currentScene.children[11] = Viewpoint34;

let Transform35 = browser.currentScene.createNode("Transform");
Transform35.DEF = "AlphaRGB";
Transform35.rotation = new SFRotation(new float[1,1,0,1]);
Transform35.translation = new SFVec3f(new float[5,-5,0]);
Transform35.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform35.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape36 = browser.currentScene.createNode("Shape");
Shape36.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape36.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance37 = browser.currentScene.createNode("Appearance");
let PixelTexture38 = browser.currentScene.createNode("PixelTexture");
PixelTexture38.image = new SFImage(new int[3,2,4,-16776961,16711935,65535,-16777089,16711807,65407]);
Appearance37.texture = PixelTexture38;

Shape36.appearance = Appearance37;

let Box39 = browser.currentScene.createNode("Box");
Box39.USE = "StandardBox";
Shape36.geometry = Box39;

Transform35.children = new MFNode();

Transform35.children[0] = Shape36;

browser.currentScene.children[12] = Transform35;


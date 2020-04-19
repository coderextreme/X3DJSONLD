var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.3";
Background2 = browser.currentScene.createNode("Background");
Background2.skyColor = [0,0,1];
browser.currentScene.children = [];

browser.currentScene.children[0] = Background2;

Transform3 = browser.currentScene.createNode("Transform");
Transform3.DEF = "Checkerboard";
Transform3.translation = [0,0,-10];
Shape4 = browser.currentScene.createNode("Shape");
Appearance5 = browser.currentScene.createNode("Appearance");
TextureTransform6 = browser.currentScene.createNode("TextureTransform");
TextureTransform6.scale = [500,500];
Appearance5.textureTransform = TextureTransform6;

PixelTexture7 = browser.currentScene.createNode("PixelTexture");
PixelTexture7.image = [2,2,3,15119869,16767927,16767927,15119869];
Appearance5.texture = PixelTexture7;

Shape4.appearance = Appearance5;

Box8 = browser.currentScene.createNode("Box");
Box8.size = [1000,1000,0.01];
Shape4.geometry = Box8;

Transform3.children = [];

Transform3.children[0] = Shape4;

browser.currentScene.children[1] = Transform3;

Viewpoint9 = browser.currentScene.createNode("Viewpoint");
Viewpoint9.description = "View All";
Viewpoint9.position = [0,0,20];
browser.currentScene.children[2] = Viewpoint9;

Viewpoint10 = browser.currentScene.createNode("Viewpoint");
Viewpoint10.description = "Empty Image";
Viewpoint10.position = [0,5,5];
browser.currentScene.children[3] = Viewpoint10;

Transform11 = browser.currentScene.createNode("Transform");
Transform11.DEF = "EmptyImage";
Transform11.rotation = [1,1,0,1];
Transform11.translation = [0,5,0];
Shape12 = browser.currentScene.createNode("Shape");
Appearance13 = browser.currentScene.createNode("Appearance");
PixelTexture14 = browser.currentScene.createNode("PixelTexture");
Appearance13.texture = PixelTexture14;

Shape12.appearance = Appearance13;

Box15 = browser.currentScene.createNode("Box");
Box15.DEF = "StandardBox";
Shape12.geometry = Box15;

Transform11.children = [];

Transform11.children[0] = Shape12;

browser.currentScene.children[4] = Transform11;

Viewpoint16 = browser.currentScene.createNode("Viewpoint");
Viewpoint16.description = "Black and white PixelTexture";
Viewpoint16.position = [-5,0,5];
browser.currentScene.children[5] = Viewpoint16;

Transform17 = browser.currentScene.createNode("Transform");
Transform17.DEF = "BW";
Transform17.rotation = [1,1,0,1];
Transform17.translation = [-5,0,0];
Shape18 = browser.currentScene.createNode("Shape");
Appearance19 = browser.currentScene.createNode("Appearance");
PixelTexture20 = browser.currentScene.createNode("PixelTexture");
PixelTexture20.image = [1,2,1,255,0];
Appearance19.texture = PixelTexture20;

Shape18.appearance = Appearance19;

Box21 = browser.currentScene.createNode("Box");
Box21.USE = "StandardBox";
Shape18.geometry = Box21;

Transform17.children = [];

Transform17.children[0] = Shape18;

browser.currentScene.children[6] = Transform17;

Viewpoint22 = browser.currentScene.createNode("Viewpoint");
Viewpoint22.description = "Black and white with Alpha PixelTexture";
Viewpoint22.position = [5,0,5];
browser.currentScene.children[7] = Viewpoint22;

Transform23 = browser.currentScene.createNode("Transform");
Transform23.DEF = "AlphaBW";
Transform23.rotation = [1,1,0,1];
Transform23.translation = [5,0,0];
Shape24 = browser.currentScene.createNode("Shape");
Appearance25 = browser.currentScene.createNode("Appearance");
PixelTexture26 = browser.currentScene.createNode("PixelTexture");
PixelTexture26.image = [2,1,2,52479,8823];
Appearance25.texture = PixelTexture26;

Shape24.appearance = Appearance25;

Box27 = browser.currentScene.createNode("Box");
Box27.USE = "StandardBox";
Shape24.geometry = Box27;

Transform23.children = [];

Transform23.children[0] = Shape24;

browser.currentScene.children[8] = Transform23;

Viewpoint28 = browser.currentScene.createNode("Viewpoint");
Viewpoint28.description = "RGB PixelTexture";
Viewpoint28.position = [-5,-5,5];
browser.currentScene.children[9] = Viewpoint28;

Transform29 = browser.currentScene.createNode("Transform");
Transform29.DEF = "RGB";
Transform29.rotation = [1,1,0,1];
Transform29.translation = [-5,-5,0];
Shape30 = browser.currentScene.createNode("Shape");
Appearance31 = browser.currentScene.createNode("Appearance");
PixelTexture32 = browser.currentScene.createNode("PixelTexture");
PixelTexture32.image = [2,4,3,16711680,65280,0,0,0,0,16777215,16776960];
Appearance31.texture = PixelTexture32;

Shape30.appearance = Appearance31;

Box33 = browser.currentScene.createNode("Box");
Box33.USE = "StandardBox";
Shape30.geometry = Box33;

Transform29.children = [];

Transform29.children[0] = Shape30;

browser.currentScene.children[10] = Transform29;

Viewpoint34 = browser.currentScene.createNode("Viewpoint");
Viewpoint34.description = "RGB with Alpha PixelTexture";
Viewpoint34.position = [5,-5,5];
browser.currentScene.children[11] = Viewpoint34;

Transform35 = browser.currentScene.createNode("Transform");
Transform35.DEF = "AlphaRGB";
Transform35.rotation = [1,1,0,1];
Transform35.translation = [5,-5,0];
Shape36 = browser.currentScene.createNode("Shape");
Appearance37 = browser.currentScene.createNode("Appearance");
PixelTexture38 = browser.currentScene.createNode("PixelTexture");
PixelTexture38.image = [3,2,4,-16776961,16711935,65535,-16777089,16711807,65407];
Appearance37.texture = PixelTexture38;

Shape36.appearance = Appearance37;

Box39 = browser.currentScene.createNode("Box");
Box39.USE = "StandardBox";
Shape36.geometry = Box39;

Transform35.children = [];

Transform35.children[0] = Shape36;

browser.currentScene.children[12] = Transform35;


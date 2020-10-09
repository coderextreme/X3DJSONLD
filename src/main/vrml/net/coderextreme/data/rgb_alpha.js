let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.0";
let NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo2.type = new MFString(new java.lang.String["EXAMINE","WALK","FLY","ANY"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

let Group3 = browser.currentScene.createNode("Group");
let Transform4 = browser.currentScene.createNode("Transform");
Transform4.translation = new SFVec3f(new float[6.14221,0.0694613,-0.000999451]);
let Shape5 = browser.currentScene.createNode("Shape");
let Appearance6 = browser.currentScene.createNode("Appearance");
let Material7 = browser.currentScene.createNode("Material");
Appearance6.material = Material7;

let PixelTexture8 = browser.currentScene.createNode("PixelTexture");
PixelTexture8.DEF = "RgbOpacityCheckerboard";
PixelTexture8.image = new SFImage(new int[2,2,4,-16776961,-65536,-65536,-16776961]);
Appearance6.texture = PixelTexture8;

Shape5.appearance = Appearance6;

let Box9 = browser.currentScene.createNode("Box");
Shape5.geometry = Box9;

Transform4.children = new MFNode();

Transform4.children[0] = Shape5;

Group3.children = new MFNode();

Group3.children[0] = Transform4;

let Transform10 = browser.currentScene.createNode("Transform");
Transform10.translation = new SFVec3f(new float[-4.85443,0.0694381,-0.00149918]);
let Shape11 = browser.currentScene.createNode("Shape");
let Appearance12 = browser.currentScene.createNode("Appearance");
let Material13 = browser.currentScene.createNode("Material");
Appearance12.material = Material13;

let PixelTexture14 = browser.currentScene.createNode("PixelTexture");
PixelTexture14.USE = "RgbOpacityCheckerboard";
Appearance12.texture = PixelTexture14;

Shape11.appearance = Appearance12;

let Sphere15 = browser.currentScene.createNode("Sphere");
Shape11.geometry = Sphere15;

Transform10.children = new MFNode();

Transform10.children[0] = Shape11;

Group3.children[1] = Transform10;

let Transform16 = browser.currentScene.createNode("Transform");
Transform16.translation = new SFVec3f(new float[-1.47341,0.036672,-0.00175095]);
let Shape17 = browser.currentScene.createNode("Shape");
let Appearance18 = browser.currentScene.createNode("Appearance");
let Material19 = browser.currentScene.createNode("Material");
Appearance18.material = Material19;

let PixelTexture20 = browser.currentScene.createNode("PixelTexture");
PixelTexture20.USE = "RgbOpacityCheckerboard";
Appearance18.texture = PixelTexture20;

Shape17.appearance = Appearance18;

let Cone21 = browser.currentScene.createNode("Cone");
Shape17.geometry = Cone21;

Transform16.children = new MFNode();

Transform16.children[0] = Shape17;

Group3.children[2] = Transform16;

let Transform22 = browser.currentScene.createNode("Transform");
Transform22.translation = new SFVec3f(new float[2.31094,0.0694206,-0.00187683]);
let Shape23 = browser.currentScene.createNode("Shape");
let Appearance24 = browser.currentScene.createNode("Appearance");
let Material25 = browser.currentScene.createNode("Material");
Appearance24.material = Material25;

let PixelTexture26 = browser.currentScene.createNode("PixelTexture");
PixelTexture26.USE = "RgbOpacityCheckerboard";
Appearance24.texture = PixelTexture26;

Shape23.appearance = Appearance24;

let Cylinder27 = browser.currentScene.createNode("Cylinder");
Shape23.geometry = Cylinder27;

Transform22.children = new MFNode();

Transform22.children[0] = Shape23;

Group3.children[3] = Transform22;

browser.currentScene.children[1] = Group3;


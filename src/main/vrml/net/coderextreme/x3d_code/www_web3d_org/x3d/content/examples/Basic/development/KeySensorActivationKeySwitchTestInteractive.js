let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interactive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "KeySensorActivationKeySwitchTestInteractive.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ExternProtoDeclare3 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare3.name = "KeySensor";
ExternProtoDeclare3.url = new MFString(new java.lang.String["KeySensorActivationKeySwitchTest.wrl#KeySensor","https://www.web3d.org/x3d/content/examples/Basic/development/KeySensorActivationKeySwitchTest.wrl#KeySensor","KeySensorActivationKeySwitchTest.x3d#KeySensor","https://www.web3d.org/x3d/content/examples/Basic/development/KeySensorActivationKeySwitchTest.x3d#KeySensor"]);
let field4 = browser.currentScene.createNode("field");
field4.name = "altKey";
field4.accessType = "outputOnly";
field4.type = "SFBool";
ExternProtoDeclare3.field = new MFNode();

ExternProtoDeclare3.field[0] = field4;

let field5 = browser.currentScene.createNode("field");
field5.name = "keyPress";
field5.accessType = "outputOnly";
field5.type = "SFInt32";
ExternProtoDeclare3.field[1] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "set_enabled";
field6.accessType = "inputOnly";
field6.type = "SFBool";
ExternProtoDeclare3.field[2] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "keyRelease";
field7.accessType = "outputOnly";
field7.type = "SFInt32";
ExternProtoDeclare3.field[3] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "enabled";
field8.accessType = "initializeOnly";
field8.type = "SFBool";
ExternProtoDeclare3.field[4] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "shiftKey";
field9.accessType = "outputOnly";
field9.type = "SFBool";
ExternProtoDeclare3.field[5] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "actionKeyRelease";
field10.accessType = "outputOnly";
field10.type = "SFInt32";
ExternProtoDeclare3.field[6] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "isActive";
field11.accessType = "outputOnly";
field11.type = "SFBool";
ExternProtoDeclare3.field[7] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "enabled_changed";
field12.accessType = "outputOnly";
field12.type = "SFBool";
ExternProtoDeclare3.field[8] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "actionKeyPress";
field13.accessType = "outputOnly";
field13.type = "SFInt32";
ExternProtoDeclare3.field[9] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "controlKey";
field14.accessType = "outputOnly";
field14.type = "SFBool";
ExternProtoDeclare3.field[10] = field14;

browser.currentScene.children[1] = ExternProtoDeclare3;

let Viewpoint15 = browser.currentScene.createNode("Viewpoint");
Viewpoint15.DEF = "Viewpoint1";
Viewpoint15.description = "Viewpoint1";
Viewpoint15.fieldOfView = 0.79;
Viewpoint15.position = new SFVec3f(new float[0,0,30]);
browser.currentScene.children[2] = Viewpoint15;

let KeySensor16 = browser.currentScene.createNode("KeySensor");
KeySensor16.DEF = "SingleKeySensor";
KeySensor16.enabled = False;
browser.currentScene.children[3] = KeySensor16;

let Shape17 = browser.currentScene.createNode("Shape");
Shape17.DEF = "A";
let Appearance18 = browser.currentScene.createNode("Appearance");
let Material19 = browser.currentScene.createNode("Material");
Material19.DEF = "red";
Material19.diffuseColor = new SFColor(new float[1,0,0]);
Appearance18.material = Material19;

let PixelTexture20 = browser.currentScene.createNode("PixelTexture");
PixelTexture20.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0]);
Appearance18.texture = PixelTexture20;

Shape17.appearance = Appearance18;

let IndexedFaceSet21 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet21.DEF = "slab";
IndexedFaceSet21.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1]);
IndexedFaceSet21.creaseAngle = 0.5;
let Coordinate22 = browser.currentScene.createNode("Coordinate");
Coordinate22.point = new MFVec3f(new float[-0.5,0.5,0.5,-0.5,-0.5,0.5,0.5,-0.5,0.5,0.5,0.5,0.5]);
IndexedFaceSet21.coord = Coordinate22;

Shape17.geometry = IndexedFaceSet21;

browser.currentScene.children[4] = Shape17;

let Shape23 = browser.currentScene.createNode("Shape");
Shape23.DEF = "B";
let Appearance24 = browser.currentScene.createNode("Appearance");
let Material25 = browser.currentScene.createNode("Material");
Material25.USE = "red";
Appearance24.material = Material25;

let PixelTexture26 = browser.currentScene.createNode("PixelTexture");
PixelTexture26.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,0,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0]);
Appearance24.texture = PixelTexture26;

Shape23.appearance = Appearance24;

let IndexedFaceSet27 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet27.USE = "slab";
Shape23.geometry = IndexedFaceSet27;

browser.currentScene.children[5] = Shape23;

let Shape28 = browser.currentScene.createNode("Shape");
Shape28.DEF = "C";
let Appearance29 = browser.currentScene.createNode("Appearance");
let TextureTransform30 = browser.currentScene.createNode("TextureTransform");
TextureTransform30.scale = new SFVec2f(new float[0.75,1]);
Appearance29.textureTransform = TextureTransform30;

let Material31 = browser.currentScene.createNode("Material");
Material31.USE = "red";
Appearance29.material = Material31;

let PixelTexture32 = browser.currentScene.createNode("PixelTexture");
PixelTexture32.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0]);
Appearance29.texture = PixelTexture32;

Shape28.appearance = Appearance29;

let IndexedFaceSet33 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet33.USE = "slab";
Shape28.geometry = IndexedFaceSet33;

browser.currentScene.children[6] = Shape28;

let Shape34 = browser.currentScene.createNode("Shape");
Shape34.DEF = "D";
let Appearance35 = browser.currentScene.createNode("Appearance");
let TextureTransform36 = browser.currentScene.createNode("TextureTransform");
TextureTransform36.scale = new SFVec2f(new float[0.75,1]);
Appearance35.textureTransform = TextureTransform36;

let Material37 = browser.currentScene.createNode("Material");
Material37.USE = "red";
Appearance35.material = Material37;

let PixelTexture38 = browser.currentScene.createNode("PixelTexture");
PixelTexture38.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0]);
Appearance35.texture = PixelTexture38;

Shape34.appearance = Appearance35;

let IndexedFaceSet39 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet39.USE = "slab";
Shape34.geometry = IndexedFaceSet39;

browser.currentScene.children[7] = Shape34;

let Shape40 = browser.currentScene.createNode("Shape");
Shape40.DEF = "E";
let Appearance41 = browser.currentScene.createNode("Appearance");
let TextureTransform42 = browser.currentScene.createNode("TextureTransform");
TextureTransform42.scale = new SFVec2f(new float[0.75,1]);
Appearance41.textureTransform = TextureTransform42;

let Material43 = browser.currentScene.createNode("Material");
Material43.USE = "red";
Appearance41.material = Material43;

let PixelTexture44 = browser.currentScene.createNode("PixelTexture");
PixelTexture44.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0]);
Appearance41.texture = PixelTexture44;

Shape40.appearance = Appearance41;

let IndexedFaceSet45 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet45.USE = "slab";
Shape40.geometry = IndexedFaceSet45;

browser.currentScene.children[8] = Shape40;

let Shape46 = browser.currentScene.createNode("Shape");
Shape46.DEF = "F";
let Appearance47 = browser.currentScene.createNode("Appearance");
let TextureTransform48 = browser.currentScene.createNode("TextureTransform");
TextureTransform48.scale = new SFVec2f(new float[0.75,1]);
Appearance47.textureTransform = TextureTransform48;

let Material49 = browser.currentScene.createNode("Material");
Material49.USE = "red";
Appearance47.material = Material49;

let PixelTexture50 = browser.currentScene.createNode("PixelTexture");
PixelTexture50.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0]);
Appearance47.texture = PixelTexture50;

Shape46.appearance = Appearance47;

let IndexedFaceSet51 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet51.USE = "slab";
Shape46.geometry = IndexedFaceSet51;

browser.currentScene.children[9] = Shape46;

let Shape52 = browser.currentScene.createNode("Shape");
Shape52.DEF = "G";
let Appearance53 = browser.currentScene.createNode("Appearance");
let TextureTransform54 = browser.currentScene.createNode("TextureTransform");
TextureTransform54.scale = new SFVec2f(new float[0.75,1]);
Appearance53.textureTransform = TextureTransform54;

let Material55 = browser.currentScene.createNode("Material");
Material55.USE = "red";
Appearance53.material = Material55;

let PixelTexture56 = browser.currentScene.createNode("PixelTexture");
PixelTexture56.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,255,255,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0]);
Appearance53.texture = PixelTexture56;

Shape52.appearance = Appearance53;

let IndexedFaceSet57 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet57.USE = "slab";
Shape52.geometry = IndexedFaceSet57;

browser.currentScene.children[10] = Shape52;

let Shape58 = browser.currentScene.createNode("Shape");
Shape58.DEF = "H";
let Appearance59 = browser.currentScene.createNode("Appearance");
let TextureTransform60 = browser.currentScene.createNode("TextureTransform");
TextureTransform60.scale = new SFVec2f(new float[0.75,1]);
Appearance59.textureTransform = TextureTransform60;

let Material61 = browser.currentScene.createNode("Material");
Material61.USE = "red";
Appearance59.material = Material61;

let PixelTexture62 = browser.currentScene.createNode("PixelTexture");
PixelTexture62.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,0,0,0,0,0,0,0]);
Appearance59.texture = PixelTexture62;

Shape58.appearance = Appearance59;

let IndexedFaceSet63 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet63.USE = "slab";
Shape58.geometry = IndexedFaceSet63;

browser.currentScene.children[11] = Shape58;

let Shape64 = browser.currentScene.createNode("Shape");
Shape64.DEF = "I";
let Appearance65 = browser.currentScene.createNode("Appearance");
let TextureTransform66 = browser.currentScene.createNode("TextureTransform");
TextureTransform66.scale = new SFVec2f(new float[0.75,1]);
Appearance65.textureTransform = TextureTransform66;

let Material67 = browser.currentScene.createNode("Material");
Material67.USE = "red";
Appearance65.material = Material67;

let PixelTexture68 = browser.currentScene.createNode("PixelTexture");
PixelTexture68.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,255,255,255,255,255,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0]);
Appearance65.texture = PixelTexture68;

Shape64.appearance = Appearance65;

let IndexedFaceSet69 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet69.USE = "slab";
Shape64.geometry = IndexedFaceSet69;

browser.currentScene.children[12] = Shape64;

let Shape70 = browser.currentScene.createNode("Shape");
Shape70.DEF = "J";
let Appearance71 = browser.currentScene.createNode("Appearance");
let TextureTransform72 = browser.currentScene.createNode("TextureTransform");
TextureTransform72.scale = new SFVec2f(new float[0.75,1]);
Appearance71.textureTransform = TextureTransform72;

let Material73 = browser.currentScene.createNode("Material");
Material73.USE = "red";
Appearance71.material = Material73;

let PixelTexture74 = browser.currentScene.createNode("PixelTexture");
PixelTexture74.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,255,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0]);
Appearance71.texture = PixelTexture74;

Shape70.appearance = Appearance71;

let IndexedFaceSet75 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet75.USE = "slab";
Shape70.geometry = IndexedFaceSet75;

browser.currentScene.children[13] = Shape70;

let Shape76 = browser.currentScene.createNode("Shape");
Shape76.DEF = "K";
let Appearance77 = browser.currentScene.createNode("Appearance");
let TextureTransform78 = browser.currentScene.createNode("TextureTransform");
TextureTransform78.scale = new SFVec2f(new float[0.75,1]);
Appearance77.textureTransform = TextureTransform78;

let Material79 = browser.currentScene.createNode("Material");
Material79.USE = "red";
Appearance77.material = Material79;

let PixelTexture80 = browser.currentScene.createNode("PixelTexture");
PixelTexture80.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,255,0,0,0,0,0,255,0,255,0,0,0,0,0,255,255,0,0,0,0,0,0,255,0,255,0,0,0,0,0,255,0,0,255,0,0,0,0,0,0,0,0,0,0,0]);
Appearance77.texture = PixelTexture80;

Shape76.appearance = Appearance77;

let IndexedFaceSet81 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet81.USE = "slab";
Shape76.geometry = IndexedFaceSet81;

browser.currentScene.children[14] = Shape76;

let Shape82 = browser.currentScene.createNode("Shape");
Shape82.DEF = "L";
let Appearance83 = browser.currentScene.createNode("Appearance");
let TextureTransform84 = browser.currentScene.createNode("TextureTransform");
TextureTransform84.scale = new SFVec2f(new float[0.75,1]);
Appearance83.textureTransform = TextureTransform84;

let Material85 = browser.currentScene.createNode("Material");
Material85.USE = "red";
Appearance83.material = Material85;

let PixelTexture86 = browser.currentScene.createNode("PixelTexture");
PixelTexture86.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
Appearance83.texture = PixelTexture86;

Shape82.appearance = Appearance83;

let IndexedFaceSet87 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet87.USE = "slab";
Shape82.geometry = IndexedFaceSet87;

browser.currentScene.children[15] = Shape82;

let Shape88 = browser.currentScene.createNode("Shape");
Shape88.DEF = "M";
let Appearance89 = browser.currentScene.createNode("Appearance");
let TextureTransform90 = browser.currentScene.createNode("TextureTransform");
TextureTransform90.scale = new SFVec2f(new float[0.75,1]);
Appearance89.textureTransform = TextureTransform90;

let Material91 = browser.currentScene.createNode("Material");
Material91.USE = "red";
Appearance89.material = Material91;

let PixelTexture92 = browser.currentScene.createNode("PixelTexture");
PixelTexture92.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,255,0,255,0,0,0,255,0,255,0,255,0,0,0,0,255,0,255,0,0,0,0,0,0,0,0,0,0,0,0]);
Appearance89.texture = PixelTexture92;

Shape88.appearance = Appearance89;

let IndexedFaceSet93 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet93.USE = "slab";
Shape88.geometry = IndexedFaceSet93;

browser.currentScene.children[16] = Shape88;

let Shape94 = browser.currentScene.createNode("Shape");
Shape94.DEF = "N";
let Appearance95 = browser.currentScene.createNode("Appearance");
let TextureTransform96 = browser.currentScene.createNode("TextureTransform");
TextureTransform96.scale = new SFVec2f(new float[0.75,1]);
Appearance95.textureTransform = TextureTransform96;

let Material97 = browser.currentScene.createNode("Material");
Material97.USE = "red";
Appearance95.material = Material97;

let PixelTexture98 = browser.currentScene.createNode("PixelTexture");
PixelTexture98.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,255,255,0,0,0,0,255,255,0,255,0,0,0,0,255,0,0,255,0,0,0,0,0,0,0,0,0,0,0]);
Appearance95.texture = PixelTexture98;

Shape94.appearance = Appearance95;

let IndexedFaceSet99 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet99.USE = "slab";
Shape94.geometry = IndexedFaceSet99;

browser.currentScene.children[17] = Shape94;

let Shape100 = browser.currentScene.createNode("Shape");
Shape100.DEF = "O";
let Appearance101 = browser.currentScene.createNode("Appearance");
let TextureTransform102 = browser.currentScene.createNode("TextureTransform");
TextureTransform102.scale = new SFVec2f(new float[0.75,1]);
Appearance101.textureTransform = TextureTransform102;

let Material103 = browser.currentScene.createNode("Material");
Material103.USE = "red";
Appearance101.material = Material103;

let PixelTexture104 = browser.currentScene.createNode("PixelTexture");
PixelTexture104.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0]);
Appearance101.texture = PixelTexture104;

Shape100.appearance = Appearance101;

let IndexedFaceSet105 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet105.USE = "slab";
Shape100.geometry = IndexedFaceSet105;

browser.currentScene.children[18] = Shape100;

let Shape106 = browser.currentScene.createNode("Shape");
Shape106.DEF = "P";
let Appearance107 = browser.currentScene.createNode("Appearance");
let TextureTransform108 = browser.currentScene.createNode("TextureTransform");
TextureTransform108.scale = new SFVec2f(new float[0.75,1]);
Appearance107.textureTransform = TextureTransform108;

let Material109 = browser.currentScene.createNode("Material");
Material109.USE = "red";
Appearance107.material = Material109;

let PixelTexture110 = browser.currentScene.createNode("PixelTexture");
PixelTexture110.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0]);
Appearance107.texture = PixelTexture110;

Shape106.appearance = Appearance107;

let IndexedFaceSet111 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet111.USE = "slab";
Shape106.geometry = IndexedFaceSet111;

browser.currentScene.children[19] = Shape106;

let Shape112 = browser.currentScene.createNode("Shape");
Shape112.DEF = "Q";
let Appearance113 = browser.currentScene.createNode("Appearance");
let TextureTransform114 = browser.currentScene.createNode("TextureTransform");
TextureTransform114.scale = new SFVec2f(new float[0.75,1]);
Appearance113.textureTransform = TextureTransform114;

let Material115 = browser.currentScene.createNode("Material");
Material115.USE = "red";
Appearance113.material = Material115;

let PixelTexture116 = browser.currentScene.createNode("PixelTexture");
PixelTexture116.image = new SFImage(new int[8,8,1,0,0,0,0,0,255,0,0,0,0,255,255,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0]);
Appearance113.texture = PixelTexture116;

Shape112.appearance = Appearance113;

let IndexedFaceSet117 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet117.USE = "slab";
Shape112.geometry = IndexedFaceSet117;

browser.currentScene.children[20] = Shape112;

let Shape118 = browser.currentScene.createNode("Shape");
Shape118.DEF = "R";
let Appearance119 = browser.currentScene.createNode("Appearance");
let TextureTransform120 = browser.currentScene.createNode("TextureTransform");
TextureTransform120.scale = new SFVec2f(new float[0.75,1]);
Appearance119.textureTransform = TextureTransform120;

let Material121 = browser.currentScene.createNode("Material");
Material121.USE = "red";
Appearance119.material = Material121;

let PixelTexture122 = browser.currentScene.createNode("PixelTexture");
PixelTexture122.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,255,0,0,0,0,0,255,255,0,0,0,0,0,0,255,0,255,0,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0]);
Appearance119.texture = PixelTexture122;

Shape118.appearance = Appearance119;

let IndexedFaceSet123 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet123.USE = "slab";
Shape118.geometry = IndexedFaceSet123;

browser.currentScene.children[21] = Shape118;

let Shape124 = browser.currentScene.createNode("Shape");
Shape124.DEF = "S";
let Appearance125 = browser.currentScene.createNode("Appearance");
let TextureTransform126 = browser.currentScene.createNode("TextureTransform");
TextureTransform126.scale = new SFVec2f(new float[0.75,1]);
Appearance125.textureTransform = TextureTransform126;

let Material127 = browser.currentScene.createNode("Material");
Material127.USE = "red";
Appearance125.material = Material127;

let PixelTexture128 = browser.currentScene.createNode("PixelTexture");
PixelTexture128.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,255,255,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0]);
Appearance125.texture = PixelTexture128;

Shape124.appearance = Appearance125;

let IndexedFaceSet129 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet129.USE = "slab";
Shape124.geometry = IndexedFaceSet129;

browser.currentScene.children[22] = Shape124;

let Shape130 = browser.currentScene.createNode("Shape");
Shape130.DEF = "T";
let Appearance131 = browser.currentScene.createNode("Appearance");
let TextureTransform132 = browser.currentScene.createNode("TextureTransform");
TextureTransform132.scale = new SFVec2f(new float[0.75,1]);
Appearance131.textureTransform = TextureTransform132;

let Material133 = browser.currentScene.createNode("Material");
Material133.USE = "red";
Appearance131.material = Material133;

let PixelTexture134 = browser.currentScene.createNode("PixelTexture");
PixelTexture134.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0]);
Appearance131.texture = PixelTexture134;

Shape130.appearance = Appearance131;

let IndexedFaceSet135 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet135.USE = "slab";
Shape130.geometry = IndexedFaceSet135;

browser.currentScene.children[23] = Shape130;

let Shape136 = browser.currentScene.createNode("Shape");
Shape136.DEF = "U";
let Appearance137 = browser.currentScene.createNode("Appearance");
let TextureTransform138 = browser.currentScene.createNode("TextureTransform");
TextureTransform138.scale = new SFVec2f(new float[0.75,1]);
Appearance137.textureTransform = TextureTransform138;

let Material139 = browser.currentScene.createNode("Material");
Material139.USE = "red";
Appearance137.material = Material139;

let PixelTexture140 = browser.currentScene.createNode("PixelTexture");
PixelTexture140.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,0,0,0,0,0,0,0]);
Appearance137.texture = PixelTexture140;

Shape136.appearance = Appearance137;

let IndexedFaceSet141 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet141.USE = "slab";
Shape136.geometry = IndexedFaceSet141;

browser.currentScene.children[24] = Shape136;

let Shape142 = browser.currentScene.createNode("Shape");
Shape142.DEF = "V";
let Appearance143 = browser.currentScene.createNode("Appearance");
let TextureTransform144 = browser.currentScene.createNode("TextureTransform");
TextureTransform144.scale = new SFVec2f(new float[0.75,1]);
Appearance143.textureTransform = TextureTransform144;

let Material145 = browser.currentScene.createNode("Material");
Material145.USE = "red";
Appearance143.material = Material145;

let PixelTexture146 = browser.currentScene.createNode("PixelTexture");
PixelTexture146.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,255,0,255,0,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0]);
Appearance143.texture = PixelTexture146;

Shape142.appearance = Appearance143;

let IndexedFaceSet147 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet147.USE = "slab";
Shape142.geometry = IndexedFaceSet147;

browser.currentScene.children[25] = Shape142;

let Shape148 = browser.currentScene.createNode("Shape");
Shape148.DEF = "W";
let Appearance149 = browser.currentScene.createNode("Appearance");
let TextureTransform150 = browser.currentScene.createNode("TextureTransform");
TextureTransform150.scale = new SFVec2f(new float[0.75,1]);
Appearance149.textureTransform = TextureTransform150;

let Material151 = browser.currentScene.createNode("Material");
Material151.USE = "red";
Appearance149.material = Material151;

let PixelTexture152 = browser.currentScene.createNode("PixelTexture");
PixelTexture152.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,255,0,255,0,0,0,0,255,0,255,0,255,0,0,0,255,0,255,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0]);
Appearance149.texture = PixelTexture152;

Shape148.appearance = Appearance149;

let IndexedFaceSet153 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet153.USE = "slab";
Shape148.geometry = IndexedFaceSet153;

browser.currentScene.children[26] = Shape148;

let Shape154 = browser.currentScene.createNode("Shape");
Shape154.DEF = "X";
let Appearance155 = browser.currentScene.createNode("Appearance");
let TextureTransform156 = browser.currentScene.createNode("TextureTransform");
TextureTransform156.scale = new SFVec2f(new float[0.75,1]);
Appearance155.textureTransform = TextureTransform156;

let Material157 = browser.currentScene.createNode("Material");
Material157.USE = "red";
Appearance155.material = Material157;

let PixelTexture158 = browser.currentScene.createNode("PixelTexture");
PixelTexture158.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,255,0,0,0,255,0,0,0,0,255,0,255,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,255,0,255,0,0,0,0,255,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0]);
Appearance155.texture = PixelTexture158;

Shape154.appearance = Appearance155;

let IndexedFaceSet159 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet159.USE = "slab";
Shape154.geometry = IndexedFaceSet159;

browser.currentScene.children[27] = Shape154;

let Shape160 = browser.currentScene.createNode("Shape");
Shape160.DEF = "Y";
let Appearance161 = browser.currentScene.createNode("Appearance");
let TextureTransform162 = browser.currentScene.createNode("TextureTransform");
TextureTransform162.scale = new SFVec2f(new float[0.75,1]);
Appearance161.textureTransform = TextureTransform162;

let Material163 = browser.currentScene.createNode("Material");
Material163.USE = "red";
Appearance161.material = Material163;

let PixelTexture164 = browser.currentScene.createNode("PixelTexture");
PixelTexture164.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,255,0,255,0,0,0,0,255,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0]);
Appearance161.texture = PixelTexture164;

Shape160.appearance = Appearance161;

let IndexedFaceSet165 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet165.USE = "slab";
Shape160.geometry = IndexedFaceSet165;

browser.currentScene.children[28] = Shape160;

let Shape166 = browser.currentScene.createNode("Shape");
Shape166.DEF = "Z";
let Appearance167 = browser.currentScene.createNode("Appearance");
let TextureTransform168 = browser.currentScene.createNode("TextureTransform");
TextureTransform168.scale = new SFVec2f(new float[0.75,1]);
Appearance167.textureTransform = TextureTransform168;

let Material169 = browser.currentScene.createNode("Material");
Material169.USE = "red";
Appearance167.material = Material169;

let PixelTexture170 = browser.currentScene.createNode("PixelTexture");
PixelTexture170.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0]);
Appearance167.texture = PixelTexture170;

Shape166.appearance = Appearance167;

let IndexedFaceSet171 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet171.USE = "slab";
Shape166.geometry = IndexedFaceSet171;

browser.currentScene.children[29] = Shape166;

let Shape172 = browser.currentScene.createNode("Shape");
Shape172.DEF = "One";
let Appearance173 = browser.currentScene.createNode("Appearance");
let TextureTransform174 = browser.currentScene.createNode("TextureTransform");
TextureTransform174.scale = new SFVec2f(new float[0.75,1]);
Appearance173.textureTransform = TextureTransform174;

let Material175 = browser.currentScene.createNode("Material");
Material175.USE = "red";
Appearance173.material = Material175;

let PixelTexture176 = browser.currentScene.createNode("PixelTexture");
PixelTexture176.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0]);
Appearance173.texture = PixelTexture176;

Shape172.appearance = Appearance173;

let IndexedFaceSet177 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet177.USE = "slab";
Shape172.geometry = IndexedFaceSet177;

browser.currentScene.children[30] = Shape172;

let Shape178 = browser.currentScene.createNode("Shape");
Shape178.DEF = "Two";
let Appearance179 = browser.currentScene.createNode("Appearance");
let TextureTransform180 = browser.currentScene.createNode("TextureTransform");
TextureTransform180.scale = new SFVec2f(new float[0.75,1]);
Appearance179.textureTransform = TextureTransform180;

let Material181 = browser.currentScene.createNode("Material");
Material181.USE = "red";
Appearance179.material = Material181;

let PixelTexture182 = browser.currentScene.createNode("PixelTexture");
PixelTexture182.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0]);
Appearance179.texture = PixelTexture182;

Shape178.appearance = Appearance179;

let IndexedFaceSet183 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet183.USE = "slab";
Shape178.geometry = IndexedFaceSet183;

browser.currentScene.children[31] = Shape178;

let Shape184 = browser.currentScene.createNode("Shape");
Shape184.DEF = "Three";
let Appearance185 = browser.currentScene.createNode("Appearance");
let TextureTransform186 = browser.currentScene.createNode("TextureTransform");
TextureTransform186.scale = new SFVec2f(new float[0.75,1]);
Appearance185.textureTransform = TextureTransform186;

let Material187 = browser.currentScene.createNode("Material");
Material187.USE = "red";
Appearance185.material = Material187;

let PixelTexture188 = browser.currentScene.createNode("PixelTexture");
PixelTexture188.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0]);
Appearance185.texture = PixelTexture188;

Shape184.appearance = Appearance185;

let IndexedFaceSet189 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet189.USE = "slab";
Shape184.geometry = IndexedFaceSet189;

browser.currentScene.children[32] = Shape184;

let Shape190 = browser.currentScene.createNode("Shape");
Shape190.DEF = "Four";
let Appearance191 = browser.currentScene.createNode("Appearance");
let TextureTransform192 = browser.currentScene.createNode("TextureTransform");
TextureTransform192.scale = new SFVec2f(new float[0.75,1]);
Appearance191.textureTransform = TextureTransform192;

let Material193 = browser.currentScene.createNode("Material");
Material193.USE = "red";
Appearance191.material = Material193;

let PixelTexture194 = browser.currentScene.createNode("PixelTexture");
PixelTexture194.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,0,0,0,0,0,0,0]);
Appearance191.texture = PixelTexture194;

Shape190.appearance = Appearance191;

let IndexedFaceSet195 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet195.USE = "slab";
Shape190.geometry = IndexedFaceSet195;

browser.currentScene.children[33] = Shape190;

let Shape196 = browser.currentScene.createNode("Shape");
Shape196.DEF = "Five";
let Appearance197 = browser.currentScene.createNode("Appearance");
let TextureTransform198 = browser.currentScene.createNode("TextureTransform");
TextureTransform198.scale = new SFVec2f(new float[0.75,1]);
Appearance197.textureTransform = TextureTransform198;

let Material199 = browser.currentScene.createNode("Material");
Material199.USE = "red";
Appearance197.material = Material199;

let PixelTexture200 = browser.currentScene.createNode("PixelTexture");
PixelTexture200.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,255,255,255,0,0,0,0,0,255,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0]);
Appearance197.texture = PixelTexture200;

Shape196.appearance = Appearance197;

let IndexedFaceSet201 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet201.USE = "slab";
Shape196.geometry = IndexedFaceSet201;

browser.currentScene.children[34] = Shape196;

let Shape202 = browser.currentScene.createNode("Shape");
Shape202.DEF = "Six";
let Appearance203 = browser.currentScene.createNode("Appearance");
let TextureTransform204 = browser.currentScene.createNode("TextureTransform");
TextureTransform204.scale = new SFVec2f(new float[0.75,1]);
Appearance203.textureTransform = TextureTransform204;

let Material205 = browser.currentScene.createNode("Material");
Material205.USE = "red";
Appearance203.material = Material205;

let PixelTexture206 = browser.currentScene.createNode("PixelTexture");
PixelTexture206.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0]);
Appearance203.texture = PixelTexture206;

Shape202.appearance = Appearance203;

let IndexedFaceSet207 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet207.USE = "slab";
Shape202.geometry = IndexedFaceSet207;

browser.currentScene.children[35] = Shape202;

let Shape208 = browser.currentScene.createNode("Shape");
Shape208.DEF = "Seven";
let Appearance209 = browser.currentScene.createNode("Appearance");
let TextureTransform210 = browser.currentScene.createNode("TextureTransform");
TextureTransform210.scale = new SFVec2f(new float[0.75,1]);
Appearance209.textureTransform = TextureTransform210;

let Material211 = browser.currentScene.createNode("Material");
Material211.USE = "red";
Appearance209.material = Material211;

let PixelTexture212 = browser.currentScene.createNode("PixelTexture");
PixelTexture212.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0]);
Appearance209.texture = PixelTexture212;

Shape208.appearance = Appearance209;

let IndexedFaceSet213 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet213.USE = "slab";
Shape208.geometry = IndexedFaceSet213;

browser.currentScene.children[36] = Shape208;

let Shape214 = browser.currentScene.createNode("Shape");
Shape214.DEF = "Eight";
let Appearance215 = browser.currentScene.createNode("Appearance");
let TextureTransform216 = browser.currentScene.createNode("TextureTransform");
TextureTransform216.scale = new SFVec2f(new float[0.75,1]);
Appearance215.textureTransform = TextureTransform216;

let Material217 = browser.currentScene.createNode("Material");
Material217.USE = "red";
Appearance215.material = Material217;

let PixelTexture218 = browser.currentScene.createNode("PixelTexture");
PixelTexture218.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,0,255,255,0,0,0,0,0,255,0,0,255,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0]);
Appearance215.texture = PixelTexture218;

Shape214.appearance = Appearance215;

let IndexedFaceSet219 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet219.USE = "slab";
Shape214.geometry = IndexedFaceSet219;

browser.currentScene.children[37] = Shape214;

let Shape220 = browser.currentScene.createNode("Shape");
Shape220.DEF = "Nine";
let Appearance221 = browser.currentScene.createNode("Appearance");
let TextureTransform222 = browser.currentScene.createNode("TextureTransform");
TextureTransform222.scale = new SFVec2f(new float[0.75,1]);
Appearance221.textureTransform = TextureTransform222;

let Material223 = browser.currentScene.createNode("Material");
Material223.USE = "red";
Appearance221.material = Material223;

let PixelTexture224 = browser.currentScene.createNode("PixelTexture");
PixelTexture224.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,255,255,255,0,0,0,0,255,0,0,255,0,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0]);
Appearance221.texture = PixelTexture224;

Shape220.appearance = Appearance221;

let IndexedFaceSet225 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet225.USE = "slab";
Shape220.geometry = IndexedFaceSet225;

browser.currentScene.children[38] = Shape220;

let Shape226 = browser.currentScene.createNode("Shape");
Shape226.DEF = "Zero";
let Appearance227 = browser.currentScene.createNode("Appearance");
let TextureTransform228 = browser.currentScene.createNode("TextureTransform");
TextureTransform228.scale = new SFVec2f(new float[0.75,1]);
Appearance227.textureTransform = TextureTransform228;

let Material229 = browser.currentScene.createNode("Material");
Material229.USE = "red";
Appearance227.material = Material229;

let PixelTexture230 = browser.currentScene.createNode("PixelTexture");
PixelTexture230.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0]);
Appearance227.texture = PixelTexture230;

Shape226.appearance = Appearance227;

let IndexedFaceSet231 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet231.USE = "slab";
Shape226.geometry = IndexedFaceSet231;

browser.currentScene.children[39] = Shape226;

let Shape232 = browser.currentScene.createNode("Shape");
Shape232.DEF = "Colon";
let Appearance233 = browser.currentScene.createNode("Appearance");
let TextureTransform234 = browser.currentScene.createNode("TextureTransform");
TextureTransform234.scale = new SFVec2f(new float[0.75,1]);
Appearance233.textureTransform = TextureTransform234;

let Material235 = browser.currentScene.createNode("Material");
Material235.USE = "red";
Appearance233.material = Material235;

let PixelTexture236 = browser.currentScene.createNode("PixelTexture");
PixelTexture236.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0]);
Appearance233.texture = PixelTexture236;

Shape232.appearance = Appearance233;

let IndexedFaceSet237 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet237.USE = "slab";
Shape232.geometry = IndexedFaceSet237;

browser.currentScene.children[40] = Shape232;

let Shape238 = browser.currentScene.createNode("Shape");
Shape238.DEF = "Comma";
let Appearance239 = browser.currentScene.createNode("Appearance");
let TextureTransform240 = browser.currentScene.createNode("TextureTransform");
TextureTransform240.scale = new SFVec2f(new float[0.75,1]);
Appearance239.textureTransform = TextureTransform240;

let Material241 = browser.currentScene.createNode("Material");
Material241.USE = "red";
Appearance239.material = Material241;

let PixelTexture242 = browser.currentScene.createNode("PixelTexture");
PixelTexture242.image = new SFImage(new int[8,8,1,0,0,0,255,0,0,0,0,0,0,255,255,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
Appearance239.texture = PixelTexture242;

Shape238.appearance = Appearance239;

let IndexedFaceSet243 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet243.USE = "slab";
Shape238.geometry = IndexedFaceSet243;

browser.currentScene.children[41] = Shape238;

let Shape244 = browser.currentScene.createNode("Shape");
Shape244.DEF = "Dot";
let Appearance245 = browser.currentScene.createNode("Appearance");
let TextureTransform246 = browser.currentScene.createNode("TextureTransform");
TextureTransform246.scale = new SFVec2f(new float[0.75,1]);
Appearance245.textureTransform = TextureTransform246;

let Material247 = browser.currentScene.createNode("Material");
Material247.USE = "red";
Appearance245.material = Material247;

let PixelTexture248 = browser.currentScene.createNode("PixelTexture");
PixelTexture248.image = new SFImage(new int[8,8,1,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
Appearance245.texture = PixelTexture248;

Shape244.appearance = Appearance245;

let IndexedFaceSet249 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet249.USE = "slab";
Shape244.geometry = IndexedFaceSet249;

browser.currentScene.children[42] = Shape244;

let Group250 = browser.currentScene.createNode("Group");
let Transform251 = browser.currentScene.createNode("Transform");
Transform251.translation = new SFVec3f(new float[0,5,0]);
let Transform252 = browser.currentScene.createNode("Transform");
Transform252.translation = new SFVec3f(new float[-12,0,0]);
let Shape253 = browser.currentScene.createNode("Shape");
Shape253.USE = "T";
Transform252.children = new MFNode();

Transform252.children[0] = Shape253;

Transform251.children = new MFNode();

Transform251.children[0] = Transform252;

let Transform254 = browser.currentScene.createNode("Transform");
Transform254.translation = new SFVec3f(new float[-11,0,0]);
let Shape255 = browser.currentScene.createNode("Shape");
Shape255.USE = "O";
Transform254.children = new MFNode();

Transform254.children[0] = Shape255;

Transform251.children[1] = Transform254;

let Transform256 = browser.currentScene.createNode("Transform");
Transform256.translation = new SFVec3f(new float[-10,0,0]);
let Shape257 = browser.currentScene.createNode("Shape");
Shape257.USE = "U";
Transform256.children = new MFNode();

Transform256.children[0] = Shape257;

Transform251.children[2] = Transform256;

let Transform258 = browser.currentScene.createNode("Transform");
Transform258.translation = new SFVec3f(new float[-9,0,0]);
let Shape259 = browser.currentScene.createNode("Shape");
Shape259.USE = "C";
Transform258.children = new MFNode();

Transform258.children[0] = Shape259;

Transform251.children[3] = Transform258;

let Transform260 = browser.currentScene.createNode("Transform");
Transform260.translation = new SFVec3f(new float[-8,0,0]);
let Shape261 = browser.currentScene.createNode("Shape");
Shape261.USE = "H";
Transform260.children = new MFNode();

Transform260.children[0] = Shape261;

Transform251.children[4] = Transform260;

let Transform262 = browser.currentScene.createNode("Transform");
Transform262.translation = new SFVec3f(new float[-6,0,0]);
let Shape263 = browser.currentScene.createNode("Shape");
Shape263.USE = "T";
Transform262.children = new MFNode();

Transform262.children[0] = Shape263;

Transform251.children[5] = Transform262;

let Transform264 = browser.currentScene.createNode("Transform");
Transform264.translation = new SFVec3f(new float[-5,0,0]);
let Shape265 = browser.currentScene.createNode("Shape");
Shape265.USE = "H";
Transform264.children = new MFNode();

Transform264.children[0] = Shape265;

Transform251.children[6] = Transform264;

let Transform266 = browser.currentScene.createNode("Transform");
Transform266.translation = new SFVec3f(new float[-4,0,0]);
let Shape267 = browser.currentScene.createNode("Shape");
Shape267.USE = "I";
Transform266.children = new MFNode();

Transform266.children[0] = Shape267;

Transform251.children[7] = Transform266;

let Transform268 = browser.currentScene.createNode("Transform");
Transform268.translation = new SFVec3f(new float[-3,0,0]);
let Shape269 = browser.currentScene.createNode("Shape");
Shape269.USE = "S";
Transform268.children = new MFNode();

Transform268.children[0] = Shape269;

Transform251.children[8] = Transform268;

let Transform270 = browser.currentScene.createNode("Transform");
Transform270.translation = new SFVec3f(new float[-1,0,0]);
let Shape271 = browser.currentScene.createNode("Shape");
Shape271.USE = "T";
Transform270.children = new MFNode();

Transform270.children[0] = Shape271;

Transform251.children[9] = Transform270;

let Transform272 = browser.currentScene.createNode("Transform");
let Shape273 = browser.currentScene.createNode("Shape");
Shape273.USE = "E";
Transform272.children = new MFNode();

Transform272.children[0] = Shape273;

Transform251.children[10] = Transform272;

let Transform274 = browser.currentScene.createNode("Transform");
Transform274.translation = new SFVec3f(new float[1,0,0]);
let Shape275 = browser.currentScene.createNode("Shape");
Shape275.USE = "X";
Transform274.children = new MFNode();

Transform274.children[0] = Shape275;

Transform251.children[11] = Transform274;

let Transform276 = browser.currentScene.createNode("Transform");
Transform276.translation = new SFVec3f(new float[2,0,0]);
let Shape277 = browser.currentScene.createNode("Shape");
Shape277.USE = "T";
Transform276.children = new MFNode();

Transform276.children[0] = Shape277;

Transform251.children[12] = Transform276;

let Transform278 = browser.currentScene.createNode("Transform");
Transform278.translation = new SFVec3f(new float[4,0,0]);
let Shape279 = browser.currentScene.createNode("Shape");
Shape279.USE = "T";
Transform278.children = new MFNode();

Transform278.children[0] = Shape279;

Transform251.children[13] = Transform278;

let Transform280 = browser.currentScene.createNode("Transform");
Transform280.translation = new SFVec3f(new float[5,0,0]);
let Shape281 = browser.currentScene.createNode("Shape");
Shape281.USE = "O";
Transform280.children = new MFNode();

Transform280.children[0] = Shape281;

Transform251.children[14] = Transform280;

let Transform282 = browser.currentScene.createNode("Transform");
Transform282.translation = new SFVec3f(new float[7,0,0]);
let Shape283 = browser.currentScene.createNode("Shape");
Shape283.USE = "E";
Transform282.children = new MFNode();

Transform282.children[0] = Shape283;

Transform251.children[15] = Transform282;

let Transform284 = browser.currentScene.createNode("Transform");
Transform284.translation = new SFVec3f(new float[8,0,0]);
let Shape285 = browser.currentScene.createNode("Shape");
Shape285.USE = "N";
Transform284.children = new MFNode();

Transform284.children[0] = Shape285;

Transform251.children[16] = Transform284;

let Transform286 = browser.currentScene.createNode("Transform");
Transform286.translation = new SFVec3f(new float[9,0,0]);
let Shape287 = browser.currentScene.createNode("Shape");
Shape287.USE = "A";
Transform286.children = new MFNode();

Transform286.children[0] = Shape287;

Transform251.children[17] = Transform286;

let Transform288 = browser.currentScene.createNode("Transform");
Transform288.translation = new SFVec3f(new float[10,0,0]);
let Shape289 = browser.currentScene.createNode("Shape");
Shape289.USE = "B";
Transform288.children = new MFNode();

Transform288.children[0] = Shape289;

Transform251.children[18] = Transform288;

let Transform290 = browser.currentScene.createNode("Transform");
Transform290.translation = new SFVec3f(new float[11,0,0]);
let Shape291 = browser.currentScene.createNode("Shape");
Shape291.USE = "L";
Transform290.children = new MFNode();

Transform290.children[0] = Shape291;

Transform251.children[19] = Transform290;

let Transform292 = browser.currentScene.createNode("Transform");
Transform292.translation = new SFVec3f(new float[12,0,0]);
let Shape293 = browser.currentScene.createNode("Shape");
Shape293.USE = "E";
Transform292.children = new MFNode();

Transform292.children[0] = Shape293;

Transform251.children[20] = Transform292;

let Transform294 = browser.currentScene.createNode("Transform");
Transform294.translation = new SFVec3f(new float[-15,-1,0]);
let Shape295 = browser.currentScene.createNode("Shape");
Shape295.USE = "K";
Transform294.children = new MFNode();

Transform294.children[0] = Shape295;

Transform251.children[21] = Transform294;

let Transform296 = browser.currentScene.createNode("Transform");
Transform296.translation = new SFVec3f(new float[-14,-1,0]);
let Shape297 = browser.currentScene.createNode("Shape");
Shape297.USE = "E";
Transform296.children = new MFNode();

Transform296.children[0] = Shape297;

Transform251.children[22] = Transform296;

let Transform298 = browser.currentScene.createNode("Transform");
Transform298.translation = new SFVec3f(new float[-13,-1,0]);
let Shape299 = browser.currentScene.createNode("Shape");
Shape299.USE = "Y";
Transform298.children = new MFNode();

Transform298.children[0] = Shape299;

Transform251.children[23] = Transform298;

let Transform300 = browser.currentScene.createNode("Transform");
Transform300.translation = new SFVec3f(new float[-12,-1,0]);
let Shape301 = browser.currentScene.createNode("Shape");
Shape301.USE = "S";
Transform300.children = new MFNode();

Transform300.children[0] = Shape301;

Transform251.children[24] = Transform300;

let Transform302 = browser.currentScene.createNode("Transform");
Transform302.translation = new SFVec3f(new float[-11,-1,0]);
let Shape303 = browser.currentScene.createNode("Shape");
Shape303.USE = "E";
Transform302.children = new MFNode();

Transform302.children[0] = Shape303;

Transform251.children[25] = Transform302;

let Transform304 = browser.currentScene.createNode("Transform");
Transform304.translation = new SFVec3f(new float[-10,-1,0]);
let Shape305 = browser.currentScene.createNode("Shape");
Shape305.USE = "N";
Transform304.children = new MFNode();

Transform304.children[0] = Shape305;

Transform251.children[26] = Transform304;

let Transform306 = browser.currentScene.createNode("Transform");
Transform306.translation = new SFVec3f(new float[-9,-1,0]);
let Shape307 = browser.currentScene.createNode("Shape");
Shape307.USE = "S";
Transform306.children = new MFNode();

Transform306.children[0] = Shape307;

Transform251.children[27] = Transform306;

let Transform308 = browser.currentScene.createNode("Transform");
Transform308.translation = new SFVec3f(new float[-8,-1,0]);
let Shape309 = browser.currentScene.createNode("Shape");
Shape309.USE = "O";
Transform308.children = new MFNode();

Transform308.children[0] = Shape309;

Transform251.children[28] = Transform308;

let Transform310 = browser.currentScene.createNode("Transform");
Transform310.translation = new SFVec3f(new float[-7,-1,0]);
let Shape311 = browser.currentScene.createNode("Shape");
Shape311.USE = "R";
Transform310.children = new MFNode();

Transform310.children[0] = Shape311;

Transform251.children[29] = Transform310;

let Transform312 = browser.currentScene.createNode("Transform");
Transform312.translation = new SFVec3f(new float[-5,-1,0]);
let Shape313 = browser.currentScene.createNode("Shape");
Shape313.USE = "A";
Transform312.children = new MFNode();

Transform312.children[0] = Shape313;

Transform251.children[30] = Transform312;

let Transform314 = browser.currentScene.createNode("Transform");
Transform314.translation = new SFVec3f(new float[-4,-1,0]);
let Shape315 = browser.currentScene.createNode("Shape");
Shape315.USE = "C";
Transform314.children = new MFNode();

Transform314.children[0] = Shape315;

Transform251.children[31] = Transform314;

let Transform316 = browser.currentScene.createNode("Transform");
Transform316.translation = new SFVec3f(new float[-3,-1,0]);
let Shape317 = browser.currentScene.createNode("Shape");
Shape317.USE = "T";
Transform316.children = new MFNode();

Transform316.children[0] = Shape317;

Transform251.children[32] = Transform316;

let Transform318 = browser.currentScene.createNode("Transform");
Transform318.translation = new SFVec3f(new float[-2,-1,0]);
let Shape319 = browser.currentScene.createNode("Shape");
Shape319.USE = "I";
Transform318.children = new MFNode();

Transform318.children[0] = Shape319;

Transform251.children[33] = Transform318;

let Transform320 = browser.currentScene.createNode("Transform");
Transform320.translation = new SFVec3f(new float[-1,-1,0]);
let Shape321 = browser.currentScene.createNode("Shape");
Shape321.USE = "V";
Transform320.children = new MFNode();

Transform320.children[0] = Shape321;

Transform251.children[34] = Transform320;

let Transform322 = browser.currentScene.createNode("Transform");
Transform322.translation = new SFVec3f(new float[0,-1,0]);
let Shape323 = browser.currentScene.createNode("Shape");
Shape323.USE = "A";
Transform322.children = new MFNode();

Transform322.children[0] = Shape323;

Transform251.children[35] = Transform322;

let Transform324 = browser.currentScene.createNode("Transform");
Transform324.translation = new SFVec3f(new float[1,-1,0]);
let Shape325 = browser.currentScene.createNode("Shape");
Shape325.USE = "T";
Transform324.children = new MFNode();

Transform324.children[0] = Shape325;

Transform251.children[36] = Transform324;

let Transform326 = browser.currentScene.createNode("Transform");
Transform326.translation = new SFVec3f(new float[2,-1,0]);
let Shape327 = browser.currentScene.createNode("Shape");
Shape327.USE = "I";
Transform326.children = new MFNode();

Transform326.children[0] = Shape327;

Transform251.children[37] = Transform326;

let Transform328 = browser.currentScene.createNode("Transform");
Transform328.translation = new SFVec3f(new float[3,-1,0]);
let Shape329 = browser.currentScene.createNode("Shape");
Shape329.USE = "O";
Transform328.children = new MFNode();

Transform328.children[0] = Shape329;

Transform251.children[38] = Transform328;

let Transform330 = browser.currentScene.createNode("Transform");
Transform330.translation = new SFVec3f(new float[4,-1,0]);
let Shape331 = browser.currentScene.createNode("Shape");
Shape331.USE = "N";
Transform330.children = new MFNode();

Transform330.children[0] = Shape331;

Transform251.children[39] = Transform330;

let Transform332 = browser.currentScene.createNode("Transform");
Transform332.translation = new SFVec3f(new float[6,-1,0]);
let Shape333 = browser.currentScene.createNode("Shape");
Shape333.USE = "K";
Transform332.children = new MFNode();

Transform332.children[0] = Shape333;

Transform251.children[40] = Transform332;

let Transform334 = browser.currentScene.createNode("Transform");
Transform334.translation = new SFVec3f(new float[7,-1,0]);
let Shape335 = browser.currentScene.createNode("Shape");
Shape335.USE = "E";
Transform334.children = new MFNode();

Transform334.children[0] = Shape335;

Transform251.children[41] = Transform334;

let Transform336 = browser.currentScene.createNode("Transform");
Transform336.translation = new SFVec3f(new float[8,-1,0]);
let Shape337 = browser.currentScene.createNode("Shape");
Shape337.USE = "Y";
Transform336.children = new MFNode();

Transform336.children[0] = Shape337;

Transform251.children[42] = Transform336;

let Transform338 = browser.currentScene.createNode("Transform");
Transform338.translation = new SFVec3f(new float[9,-1,0]);
let Shape339 = browser.currentScene.createNode("Shape");
Shape339.USE = "S";
Transform338.children = new MFNode();

Transform338.children[0] = Shape339;

Transform251.children[43] = Transform338;

let Transform340 = browser.currentScene.createNode("Transform");
Transform340.translation = new SFVec3f(new float[10,-1,0]);
let Shape341 = browser.currentScene.createNode("Shape");
Shape341.USE = "Comma";
Transform340.children = new MFNode();

Transform340.children[0] = Shape341;

Transform251.children[44] = Transform340;

let Transform342 = browser.currentScene.createNode("Transform");
Transform342.translation = new SFVec3f(new float[12,-1,0]);
let Shape343 = browser.currentScene.createNode("Shape");
Shape343.USE = "T";
Transform342.children = new MFNode();

Transform342.children[0] = Shape343;

Transform251.children[45] = Transform342;

let Transform344 = browser.currentScene.createNode("Transform");
Transform344.translation = new SFVec3f(new float[13,-1,0]);
let Shape345 = browser.currentScene.createNode("Shape");
Shape345.USE = "H";
Transform344.children = new MFNode();

Transform344.children[0] = Shape345;

Transform251.children[46] = Transform344;

let Transform346 = browser.currentScene.createNode("Transform");
Transform346.translation = new SFVec3f(new float[14,-1,0]);
let Shape347 = browser.currentScene.createNode("Shape");
Shape347.USE = "E";
Transform346.children = new MFNode();

Transform346.children[0] = Shape347;

Transform251.children[47] = Transform346;

let Transform348 = browser.currentScene.createNode("Transform");
Transform348.translation = new SFVec3f(new float[15,-1,0]);
let Shape349 = browser.currentScene.createNode("Shape");
Shape349.USE = "N";
Transform348.children = new MFNode();

Transform348.children[0] = Shape349;

Transform251.children[48] = Transform348;

let Transform350 = browser.currentScene.createNode("Transform");
Transform350.translation = new SFVec3f(new float[-15,-2,0]);
let Shape351 = browser.currentScene.createNode("Shape");
Shape351.USE = "P";
Transform350.children = new MFNode();

Transform350.children[0] = Shape351;

Transform251.children[49] = Transform350;

let Transform352 = browser.currentScene.createNode("Transform");
Transform352.translation = new SFVec3f(new float[-14,-2,0]);
let Shape353 = browser.currentScene.createNode("Shape");
Shape353.USE = "R";
Transform352.children = new MFNode();

Transform352.children[0] = Shape353;

Transform251.children[50] = Transform352;

let Transform354 = browser.currentScene.createNode("Transform");
Transform354.translation = new SFVec3f(new float[-13,-2,0]);
let Shape355 = browser.currentScene.createNode("Shape");
Shape355.USE = "E";
Transform354.children = new MFNode();

Transform354.children[0] = Shape355;

Transform251.children[51] = Transform354;

let Transform356 = browser.currentScene.createNode("Transform");
Transform356.translation = new SFVec3f(new float[-12,-2,0]);
let Shape357 = browser.currentScene.createNode("Shape");
Shape357.USE = "S";
Transform356.children = new MFNode();

Transform356.children[0] = Shape357;

Transform251.children[52] = Transform356;

let Transform358 = browser.currentScene.createNode("Transform");
Transform358.translation = new SFVec3f(new float[-11,-2,0]);
let Shape359 = browser.currentScene.createNode("Shape");
Shape359.USE = "S";
Transform358.children = new MFNode();

Transform358.children[0] = Shape359;

Transform251.children[53] = Transform358;

let Transform360 = browser.currentScene.createNode("Transform");
Transform360.translation = new SFVec3f(new float[-9,-2,0]);
let Shape361 = browser.currentScene.createNode("Shape");
Shape361.USE = "A";
Transform360.children = new MFNode();

Transform360.children[0] = Shape361;

Transform251.children[54] = Transform360;

let Transform362 = browser.currentScene.createNode("Transform");
Transform362.translation = new SFVec3f(new float[-8,-2,0]);
let Shape363 = browser.currentScene.createNode("Shape");
Shape363.USE = "C";
Transform362.children = new MFNode();

Transform362.children[0] = Shape363;

Transform251.children[55] = Transform362;

let Transform364 = browser.currentScene.createNode("Transform");
Transform364.translation = new SFVec3f(new float[-7,-2,0]);
let Shape365 = browser.currentScene.createNode("Shape");
Shape365.USE = "T";
Transform364.children = new MFNode();

Transform364.children[0] = Shape365;

Transform251.children[56] = Transform364;

let Transform366 = browser.currentScene.createNode("Transform");
Transform366.translation = new SFVec3f(new float[-6,-2,0]);
let Shape367 = browser.currentScene.createNode("Shape");
Shape367.USE = "I";
Transform366.children = new MFNode();

Transform366.children[0] = Shape367;

Transform251.children[57] = Transform366;

let Transform368 = browser.currentScene.createNode("Transform");
Transform368.translation = new SFVec3f(new float[-5,-2,0]);
let Shape369 = browser.currentScene.createNode("Shape");
Shape369.USE = "V";
Transform368.children = new MFNode();

Transform368.children[0] = Shape369;

Transform251.children[58] = Transform368;

let Transform370 = browser.currentScene.createNode("Transform");
Transform370.translation = new SFVec3f(new float[-4,-2,0]);
let Shape371 = browser.currentScene.createNode("Shape");
Shape371.USE = "A";
Transform370.children = new MFNode();

Transform370.children[0] = Shape371;

Transform251.children[59] = Transform370;

let Transform372 = browser.currentScene.createNode("Transform");
Transform372.translation = new SFVec3f(new float[-3,-2,0]);
let Shape373 = browser.currentScene.createNode("Shape");
Shape373.USE = "T";
Transform372.children = new MFNode();

Transform372.children[0] = Shape373;

Transform251.children[60] = Transform372;

let Transform374 = browser.currentScene.createNode("Transform");
Transform374.translation = new SFVec3f(new float[-2,-2,0]);
let Shape375 = browser.currentScene.createNode("Shape");
Shape375.USE = "I";
Transform374.children = new MFNode();

Transform374.children[0] = Shape375;

Transform251.children[61] = Transform374;

let Transform376 = browser.currentScene.createNode("Transform");
Transform376.translation = new SFVec3f(new float[-1,-2,0]);
let Shape377 = browser.currentScene.createNode("Shape");
Shape377.USE = "O";
Transform376.children = new MFNode();

Transform376.children[0] = Shape377;

Transform251.children[62] = Transform376;

let Transform378 = browser.currentScene.createNode("Transform");
Transform378.translation = new SFVec3f(new float[0,-2,0]);
let Shape379 = browser.currentScene.createNode("Shape");
Shape379.USE = "N";
Transform378.children = new MFNode();

Transform378.children[0] = Shape379;

Transform251.children[63] = Transform378;

let Transform380 = browser.currentScene.createNode("Transform");
Transform380.translation = new SFVec3f(new float[2,-2,0]);
let Shape381 = browser.currentScene.createNode("Shape");
Shape381.USE = "K";
Transform380.children = new MFNode();

Transform380.children[0] = Shape381;

Transform251.children[64] = Transform380;

let Transform382 = browser.currentScene.createNode("Transform");
Transform382.translation = new SFVec3f(new float[3,-2,0]);
let Shape383 = browser.currentScene.createNode("Shape");
Shape383.USE = "E";
Transform382.children = new MFNode();

Transform382.children[0] = Shape383;

Transform251.children[65] = Transform382;

let Transform384 = browser.currentScene.createNode("Transform");
Transform384.translation = new SFVec3f(new float[4,-2,0]);
let Shape385 = browser.currentScene.createNode("Shape");
Shape385.USE = "Y";
Transform384.children = new MFNode();

Transform384.children[0] = Shape385;

Transform251.children[66] = Transform384;

let Transform386 = browser.currentScene.createNode("Transform");
Transform386.translation = new SFVec3f(new float[5,-2,0]);
let Shape387 = browser.currentScene.createNode("Shape");
Shape387.USE = "S";
Transform386.children = new MFNode();

Transform386.children[0] = Shape387;

Transform251.children[67] = Transform386;

let Transform388 = browser.currentScene.createNode("Transform");
Transform388.translation = new SFVec3f(new float[7,-2,0]);
let Shape389 = browser.currentScene.createNode("Shape");
Shape389.USE = "T";
Transform388.children = new MFNode();

Transform388.children[0] = Shape389;

Transform251.children[68] = Transform388;

let Transform390 = browser.currentScene.createNode("Transform");
Transform390.translation = new SFVec3f(new float[8,-2,0]);
let Shape391 = browser.currentScene.createNode("Shape");
Shape391.USE = "O";
Transform390.children = new MFNode();

Transform390.children[0] = Shape391;

Transform251.children[69] = Transform390;

let Transform392 = browser.currentScene.createNode("Transform");
Transform392.translation = new SFVec3f(new float[10,-2,0]);
let Shape393 = browser.currentScene.createNode("Shape");
Shape393.USE = "T";
Transform392.children = new MFNode();

Transform392.children[0] = Shape393;

Transform251.children[70] = Transform392;

let Transform394 = browser.currentScene.createNode("Transform");
Transform394.translation = new SFVec3f(new float[11,-2,0]);
let Shape395 = browser.currentScene.createNode("Shape");
Shape395.USE = "E";
Transform394.children = new MFNode();

Transform394.children[0] = Shape395;

Transform251.children[71] = Transform394;

let Transform396 = browser.currentScene.createNode("Transform");
Transform396.translation = new SFVec3f(new float[12,-2,0]);
let Shape397 = browser.currentScene.createNode("Shape");
Shape397.USE = "S";
Transform396.children = new MFNode();

Transform396.children[0] = Shape397;

Transform251.children[72] = Transform396;

let Transform398 = browser.currentScene.createNode("Transform");
Transform398.translation = new SFVec3f(new float[13,-2,0]);
let Shape399 = browser.currentScene.createNode("Shape");
Shape399.USE = "T";
Transform398.children = new MFNode();

Transform398.children[0] = Shape399;

Transform251.children[73] = Transform398;

let Transform400 = browser.currentScene.createNode("Transform");
Transform400.translation = new SFVec3f(new float[14,-2,0]);
let Shape401 = browser.currentScene.createNode("Shape");
Shape401.USE = "Dot";
Transform400.children = new MFNode();

Transform400.children[0] = Shape401;

Transform251.children[74] = Transform400;

Group250.children = new MFNode();

Group250.children[0] = Transform251;

let Switch402 = browser.currentScene.createNode("Switch");
Switch402.DEF = "ActivationKeyMessageSwitch";
Switch402.whichChoice = 0;
let Transform403 = browser.currentScene.createNode("Transform");
Transform403.DEF = "Nokeypress";
Transform403.translation = new SFVec3f(new float[-2,0,0]);
let Transform404 = browser.currentScene.createNode("Transform");
Transform404.translation = new SFVec3f(new float[-13,-4,0]);
let Shape405 = browser.currentScene.createNode("Shape");
Shape405.USE = "N";
Transform404.children = new MFNode();

Transform404.children[0] = Shape405;

Transform403.children = new MFNode();

Transform403.children[0] = Transform404;

let Transform406 = browser.currentScene.createNode("Transform");
Transform406.translation = new SFVec3f(new float[-12,-4,0]);
let Shape407 = browser.currentScene.createNode("Shape");
Shape407.USE = "O";
Transform406.children = new MFNode();

Transform406.children[0] = Shape407;

Transform403.children[1] = Transform406;

let Transform408 = browser.currentScene.createNode("Transform");
Transform408.translation = new SFVec3f(new float[-10,-4,0]);
let Shape409 = browser.currentScene.createNode("Shape");
Shape409.USE = "A";
Transform408.children = new MFNode();

Transform408.children[0] = Shape409;

Transform403.children[2] = Transform408;

let Transform410 = browser.currentScene.createNode("Transform");
Transform410.translation = new SFVec3f(new float[-9,-4,0]);
let Shape411 = browser.currentScene.createNode("Shape");
Shape411.USE = "C";
Transform410.children = new MFNode();

Transform410.children[0] = Shape411;

Transform403.children[3] = Transform410;

let Transform412 = browser.currentScene.createNode("Transform");
Transform412.translation = new SFVec3f(new float[-8,-4,0]);
let Shape413 = browser.currentScene.createNode("Shape");
Shape413.USE = "T";
Transform412.children = new MFNode();

Transform412.children[0] = Shape413;

Transform403.children[4] = Transform412;

let Transform414 = browser.currentScene.createNode("Transform");
Transform414.translation = new SFVec3f(new float[-7,-4,0]);
let Shape415 = browser.currentScene.createNode("Shape");
Shape415.USE = "I";
Transform414.children = new MFNode();

Transform414.children[0] = Shape415;

Transform403.children[5] = Transform414;

let Transform416 = browser.currentScene.createNode("Transform");
Transform416.translation = new SFVec3f(new float[-6,-4,0]);
let Shape417 = browser.currentScene.createNode("Shape");
Shape417.USE = "V";
Transform416.children = new MFNode();

Transform416.children[0] = Shape417;

Transform403.children[6] = Transform416;

let Transform418 = browser.currentScene.createNode("Transform");
Transform418.translation = new SFVec3f(new float[-5,-4,0]);
let Shape419 = browser.currentScene.createNode("Shape");
Shape419.USE = "A";
Transform418.children = new MFNode();

Transform418.children[0] = Shape419;

Transform403.children[7] = Transform418;

let Transform420 = browser.currentScene.createNode("Transform");
Transform420.translation = new SFVec3f(new float[-4,-4,0]);
let Shape421 = browser.currentScene.createNode("Shape");
Shape421.USE = "T";
Transform420.children = new MFNode();

Transform420.children[0] = Shape421;

Transform403.children[8] = Transform420;

let Transform422 = browser.currentScene.createNode("Transform");
Transform422.translation = new SFVec3f(new float[-3,-4,0]);
let Shape423 = browser.currentScene.createNode("Shape");
Shape423.USE = "I";
Transform422.children = new MFNode();

Transform422.children[0] = Shape423;

Transform403.children[9] = Transform422;

let Transform424 = browser.currentScene.createNode("Transform");
Transform424.translation = new SFVec3f(new float[-2,-4,0]);
let Shape425 = browser.currentScene.createNode("Shape");
Shape425.USE = "O";
Transform424.children = new MFNode();

Transform424.children[0] = Shape425;

Transform403.children[10] = Transform424;

let Transform426 = browser.currentScene.createNode("Transform");
Transform426.translation = new SFVec3f(new float[-1,-4,0]);
let Shape427 = browser.currentScene.createNode("Shape");
Shape427.USE = "N";
Transform426.children = new MFNode();

Transform426.children[0] = Shape427;

Transform403.children[11] = Transform426;

let Transform428 = browser.currentScene.createNode("Transform");
Transform428.translation = new SFVec3f(new float[1,-4,0]);
let Shape429 = browser.currentScene.createNode("Shape");
Shape429.USE = "K";
Transform428.children = new MFNode();

Transform428.children[0] = Shape429;

Transform403.children[12] = Transform428;

let Transform430 = browser.currentScene.createNode("Transform");
Transform430.translation = new SFVec3f(new float[2,-4,0]);
let Shape431 = browser.currentScene.createNode("Shape");
Shape431.USE = "E";
Transform430.children = new MFNode();

Transform430.children[0] = Shape431;

Transform403.children[13] = Transform430;

let Transform432 = browser.currentScene.createNode("Transform");
Transform432.translation = new SFVec3f(new float[3,-4,0]);
let Shape433 = browser.currentScene.createNode("Shape");
Shape433.USE = "Y";
Transform432.children = new MFNode();

Transform432.children[0] = Shape433;

Transform403.children[14] = Transform432;

let Transform434 = browser.currentScene.createNode("Transform");
Transform434.translation = new SFVec3f(new float[4,-4,0]);
let Shape435 = browser.currentScene.createNode("Shape");
Shape435.USE = "P";
Transform434.children = new MFNode();

Transform434.children[0] = Shape435;

Transform403.children[15] = Transform434;

let Transform436 = browser.currentScene.createNode("Transform");
Transform436.translation = new SFVec3f(new float[5,-4,0]);
let Shape437 = browser.currentScene.createNode("Shape");
Shape437.USE = "R";
Transform436.children = new MFNode();

Transform436.children[0] = Shape437;

Transform403.children[16] = Transform436;

let Transform438 = browser.currentScene.createNode("Transform");
Transform438.translation = new SFVec3f(new float[6,-4,0]);
let Shape439 = browser.currentScene.createNode("Shape");
Shape439.USE = "E";
Transform438.children = new MFNode();

Transform438.children[0] = Shape439;

Transform403.children[17] = Transform438;

let Transform440 = browser.currentScene.createNode("Transform");
Transform440.translation = new SFVec3f(new float[7,-4,0]);
let Shape441 = browser.currentScene.createNode("Shape");
Shape441.USE = "S";
Transform440.children = new MFNode();

Transform440.children[0] = Shape441;

Transform403.children[18] = Transform440;

let Transform442 = browser.currentScene.createNode("Transform");
Transform442.translation = new SFVec3f(new float[8,-4,0]);
let Shape443 = browser.currentScene.createNode("Shape");
Shape443.USE = "S";
Transform442.children = new MFNode();

Transform442.children[0] = Shape443;

Transform403.children[19] = Transform442;

let Transform444 = browser.currentScene.createNode("Transform");
Transform444.translation = new SFVec3f(new float[10,-4,0]);
let Shape445 = browser.currentScene.createNode("Shape");
Shape445.USE = "S";
Transform444.children = new MFNode();

Transform444.children[0] = Shape445;

Transform403.children[20] = Transform444;

let Transform446 = browser.currentScene.createNode("Transform");
Transform446.translation = new SFVec3f(new float[11,-4,0]);
let Shape447 = browser.currentScene.createNode("Shape");
Shape447.USE = "E";
Transform446.children = new MFNode();

Transform446.children[0] = Shape447;

Transform403.children[21] = Transform446;

let Transform448 = browser.currentScene.createNode("Transform");
Transform448.translation = new SFVec3f(new float[12,-4,0]);
let Shape449 = browser.currentScene.createNode("Shape");
Shape449.USE = "N";
Transform448.children = new MFNode();

Transform448.children[0] = Shape449;

Transform403.children[22] = Transform448;

let Transform450 = browser.currentScene.createNode("Transform");
Transform450.translation = new SFVec3f(new float[13,-4,0]);
let Shape451 = browser.currentScene.createNode("Shape");
Shape451.USE = "S";
Transform450.children = new MFNode();

Transform450.children[0] = Shape451;

Transform403.children[23] = Transform450;

let Transform452 = browser.currentScene.createNode("Transform");
Transform452.translation = new SFVec3f(new float[14,-4,0]);
let Shape453 = browser.currentScene.createNode("Shape");
Shape453.USE = "E";
Transform452.children = new MFNode();

Transform452.children[0] = Shape453;

Transform403.children[24] = Transform452;

let Transform454 = browser.currentScene.createNode("Transform");
Transform454.translation = new SFVec3f(new float[15,-4,0]);
let Shape455 = browser.currentScene.createNode("Shape");
Shape455.USE = "D";
Transform454.children = new MFNode();

Transform454.children[0] = Shape455;

Transform403.children[25] = Transform454;

let Transform456 = browser.currentScene.createNode("Transform");
Transform456.translation = new SFVec3f(new float[16,-4,0]);
let Shape457 = browser.currentScene.createNode("Shape");
Shape457.USE = "Dot";
Transform456.children = new MFNode();

Transform456.children[0] = Shape457;

Transform403.children[26] = Transform456;

let Transform458 = browser.currentScene.createNode("Transform");
Transform458.translation = new SFVec3f(new float[17,-4,0]);
let Shape459 = browser.currentScene.createNode("Shape");
Shape459.USE = "Dot";
Transform458.children = new MFNode();

Transform458.children[0] = Shape459;

Transform403.children[27] = Transform458;

Switch402.children = new MFNode();

Switch402.children[0] = Transform403;

let Transform460 = browser.currentScene.createNode("Transform");
Transform460.DEF = "Functions";
Transform460.translation = new SFVec3f(new float[0,-6,0]);
let Transform461 = browser.currentScene.createNode("Transform");
Transform461.DEF = "F1";
let Transform462 = browser.currentScene.createNode("Transform");
Transform462.translation = new SFVec3f(new float[-1,0,0]);
let Shape463 = browser.currentScene.createNode("Shape");
Shape463.USE = "F";
Transform462.children = new MFNode();

Transform462.children[0] = Shape463;

Transform461.children = new MFNode();

Transform461.children[0] = Transform462;

let Transform464 = browser.currentScene.createNode("Transform");
let Shape465 = browser.currentScene.createNode("Shape");
Shape465.USE = "One";
Transform464.children = new MFNode();

Transform464.children[0] = Shape465;

Transform461.children[1] = Transform464;

Transform460.children = new MFNode();

Transform460.children[0] = Transform461;

let Transform466 = browser.currentScene.createNode("Transform");
Transform466.DEF = "F2";
Transform466.translation = new SFVec3f(new float[0,-1,0]);
let Transform467 = browser.currentScene.createNode("Transform");
Transform467.translation = new SFVec3f(new float[-1,0,0]);
let Shape468 = browser.currentScene.createNode("Shape");
Shape468.USE = "F";
Transform467.children = new MFNode();

Transform467.children[0] = Shape468;

Transform466.children = new MFNode();

Transform466.children[0] = Transform467;

let Transform469 = browser.currentScene.createNode("Transform");
let Shape470 = browser.currentScene.createNode("Shape");
Shape470.USE = "Two";
Transform469.children = new MFNode();

Transform469.children[0] = Shape470;

Transform466.children[1] = Transform469;

Transform460.children[1] = Transform466;

let Transform471 = browser.currentScene.createNode("Transform");
Transform471.DEF = "F3";
Transform471.translation = new SFVec3f(new float[0,-2,0]);
let Transform472 = browser.currentScene.createNode("Transform");
Transform472.translation = new SFVec3f(new float[-1,0,0]);
let Shape473 = browser.currentScene.createNode("Shape");
Shape473.USE = "F";
Transform472.children = new MFNode();

Transform472.children[0] = Shape473;

Transform471.children = new MFNode();

Transform471.children[0] = Transform472;

let Transform474 = browser.currentScene.createNode("Transform");
let Shape475 = browser.currentScene.createNode("Shape");
Shape475.USE = "Three";
Transform474.children = new MFNode();

Transform474.children[0] = Shape475;

Transform471.children[1] = Transform474;

Transform460.children[2] = Transform471;

let Transform476 = browser.currentScene.createNode("Transform");
Transform476.DEF = "F4";
Transform476.translation = new SFVec3f(new float[0,-3,0]);
let Transform477 = browser.currentScene.createNode("Transform");
Transform477.translation = new SFVec3f(new float[-1,0,0]);
let Shape478 = browser.currentScene.createNode("Shape");
Shape478.USE = "F";
Transform477.children = new MFNode();

Transform477.children[0] = Shape478;

Transform476.children = new MFNode();

Transform476.children[0] = Transform477;

let Transform479 = browser.currentScene.createNode("Transform");
let Shape480 = browser.currentScene.createNode("Shape");
Shape480.USE = "Four";
Transform479.children = new MFNode();

Transform479.children[0] = Shape480;

Transform476.children[1] = Transform479;

Transform460.children[3] = Transform476;

let Transform481 = browser.currentScene.createNode("Transform");
Transform481.DEF = "F5";
Transform481.translation = new SFVec3f(new float[0,-4,0]);
let Transform482 = browser.currentScene.createNode("Transform");
Transform482.translation = new SFVec3f(new float[-1,0,0]);
let Shape483 = browser.currentScene.createNode("Shape");
Shape483.USE = "F";
Transform482.children = new MFNode();

Transform482.children[0] = Shape483;

Transform481.children = new MFNode();

Transform481.children[0] = Transform482;

let Transform484 = browser.currentScene.createNode("Transform");
let Shape485 = browser.currentScene.createNode("Shape");
Shape485.USE = "Five";
Transform484.children = new MFNode();

Transform484.children[0] = Shape485;

Transform481.children[1] = Transform484;

Transform460.children[4] = Transform481;

let Transform486 = browser.currentScene.createNode("Transform");
Transform486.DEF = "F6";
Transform486.translation = new SFVec3f(new float[0,-5,0]);
let Transform487 = browser.currentScene.createNode("Transform");
Transform487.translation = new SFVec3f(new float[-1,0,0]);
let Shape488 = browser.currentScene.createNode("Shape");
Shape488.USE = "F";
Transform487.children = new MFNode();

Transform487.children[0] = Shape488;

Transform486.children = new MFNode();

Transform486.children[0] = Transform487;

let Transform489 = browser.currentScene.createNode("Transform");
let Shape490 = browser.currentScene.createNode("Shape");
Shape490.USE = "Six";
Transform489.children = new MFNode();

Transform489.children[0] = Shape490;

Transform486.children[1] = Transform489;

Transform460.children[5] = Transform486;

let Transform491 = browser.currentScene.createNode("Transform");
Transform491.DEF = "F7";
Transform491.translation = new SFVec3f(new float[0,-6,0]);
let Transform492 = browser.currentScene.createNode("Transform");
Transform492.translation = new SFVec3f(new float[-1,0,0]);
let Shape493 = browser.currentScene.createNode("Shape");
Shape493.USE = "F";
Transform492.children = new MFNode();

Transform492.children[0] = Shape493;

Transform491.children = new MFNode();

Transform491.children[0] = Transform492;

let Transform494 = browser.currentScene.createNode("Transform");
let Shape495 = browser.currentScene.createNode("Shape");
Shape495.USE = "Seven";
Transform494.children = new MFNode();

Transform494.children[0] = Shape495;

Transform491.children[1] = Transform494;

Transform460.children[6] = Transform491;

let Transform496 = browser.currentScene.createNode("Transform");
Transform496.DEF = "F8";
Transform496.translation = new SFVec3f(new float[0,-7,0]);
let Transform497 = browser.currentScene.createNode("Transform");
Transform497.translation = new SFVec3f(new float[-1,0,0]);
let Shape498 = browser.currentScene.createNode("Shape");
Shape498.USE = "F";
Transform497.children = new MFNode();

Transform497.children[0] = Shape498;

Transform496.children = new MFNode();

Transform496.children[0] = Transform497;

let Transform499 = browser.currentScene.createNode("Transform");
let Shape500 = browser.currentScene.createNode("Shape");
Shape500.USE = "Eight";
Transform499.children = new MFNode();

Transform499.children[0] = Shape500;

Transform496.children[1] = Transform499;

Transform460.children[7] = Transform496;

let Transform501 = browser.currentScene.createNode("Transform");
Transform501.DEF = "F9";
Transform501.translation = new SFVec3f(new float[0,-8,0]);
let Transform502 = browser.currentScene.createNode("Transform");
Transform502.translation = new SFVec3f(new float[-1,0,0]);
let Shape503 = browser.currentScene.createNode("Shape");
Shape503.USE = "F";
Transform502.children = new MFNode();

Transform502.children[0] = Shape503;

Transform501.children = new MFNode();

Transform501.children[0] = Transform502;

let Transform504 = browser.currentScene.createNode("Transform");
let Shape505 = browser.currentScene.createNode("Shape");
Shape505.USE = "Nine";
Transform504.children = new MFNode();

Transform504.children[0] = Shape505;

Transform501.children[1] = Transform504;

Transform460.children[8] = Transform501;

let Transform506 = browser.currentScene.createNode("Transform");
Transform506.DEF = "F10";
Transform506.translation = new SFVec3f(new float[0,-9,0]);
let Transform507 = browser.currentScene.createNode("Transform");
Transform507.translation = new SFVec3f(new float[-1,0,0]);
let Shape508 = browser.currentScene.createNode("Shape");
Shape508.USE = "F";
Transform507.children = new MFNode();

Transform507.children[0] = Shape508;

Transform506.children = new MFNode();

Transform506.children[0] = Transform507;

let Transform509 = browser.currentScene.createNode("Transform");
let Shape510 = browser.currentScene.createNode("Shape");
Shape510.USE = "One";
Transform509.children = new MFNode();

Transform509.children[0] = Shape510;

Transform506.children[1] = Transform509;

let Transform511 = browser.currentScene.createNode("Transform");
Transform511.translation = new SFVec3f(new float[1,0,0]);
let Shape512 = browser.currentScene.createNode("Shape");
Shape512.USE = "Zero";
Transform511.children = new MFNode();

Transform511.children[0] = Shape512;

Transform506.children[2] = Transform511;

Transform460.children[9] = Transform506;

let Transform513 = browser.currentScene.createNode("Transform");
Transform513.DEF = "F11";
Transform513.translation = new SFVec3f(new float[0,-10,0]);
let Transform514 = browser.currentScene.createNode("Transform");
Transform514.translation = new SFVec3f(new float[-1,0,0]);
let Shape515 = browser.currentScene.createNode("Shape");
Shape515.USE = "F";
Transform514.children = new MFNode();

Transform514.children[0] = Shape515;

Transform513.children = new MFNode();

Transform513.children[0] = Transform514;

let Transform516 = browser.currentScene.createNode("Transform");
let Shape517 = browser.currentScene.createNode("Shape");
Shape517.USE = "One";
Transform516.children = new MFNode();

Transform516.children[0] = Shape517;

Transform513.children[1] = Transform516;

let Transform518 = browser.currentScene.createNode("Transform");
Transform518.translation = new SFVec3f(new float[1,0,0]);
let Shape519 = browser.currentScene.createNode("Shape");
Shape519.USE = "One";
Transform518.children = new MFNode();

Transform518.children[0] = Shape519;

Transform513.children[2] = Transform518;

Transform460.children[10] = Transform513;

let Transform520 = browser.currentScene.createNode("Transform");
Transform520.DEF = "F12";
Transform520.translation = new SFVec3f(new float[0,-11,0]);
let Transform521 = browser.currentScene.createNode("Transform");
Transform521.translation = new SFVec3f(new float[-1,0,0]);
let Shape522 = browser.currentScene.createNode("Shape");
Shape522.USE = "F";
Transform521.children = new MFNode();

Transform521.children[0] = Shape522;

Transform520.children = new MFNode();

Transform520.children[0] = Transform521;

let Transform523 = browser.currentScene.createNode("Transform");
let Shape524 = browser.currentScene.createNode("Shape");
Shape524.USE = "One";
Transform523.children = new MFNode();

Transform523.children[0] = Shape524;

Transform520.children[1] = Transform523;

let Transform525 = browser.currentScene.createNode("Transform");
Transform525.translation = new SFVec3f(new float[1,0,0]);
let Shape526 = browser.currentScene.createNode("Shape");
Shape526.USE = "Two";
Transform525.children = new MFNode();

Transform525.children[0] = Shape526;

Transform520.children[2] = Transform525;

Transform460.children[11] = Transform520;

let Transform527 = browser.currentScene.createNode("Transform");
Transform527.DEF = "Home";
Transform527.translation = new SFVec3f(new float[0,-12,0]);
let Transform528 = browser.currentScene.createNode("Transform");
Transform528.translation = new SFVec3f(new float[-3,0,0]);
let Shape529 = browser.currentScene.createNode("Shape");
Shape529.USE = "One";
Transform528.children = new MFNode();

Transform528.children[0] = Shape529;

Transform527.children = new MFNode();

Transform527.children[0] = Transform528;

let Transform530 = browser.currentScene.createNode("Transform");
Transform530.translation = new SFVec3f(new float[-2,0,0]);
let Shape531 = browser.currentScene.createNode("Shape");
Shape531.USE = "Three";
Transform530.children = new MFNode();

Transform530.children[0] = Shape531;

Transform527.children[1] = Transform530;

let Transform532 = browser.currentScene.createNode("Transform");
Transform532.translation = new SFVec3f(new float[-1,0,0]);
let Shape533 = browser.currentScene.createNode("Shape");
Shape533.USE = "Colon";
Transform532.children = new MFNode();

Transform532.children[0] = Shape533;

Transform527.children[2] = Transform532;

let Transform534 = browser.currentScene.createNode("Transform");
let Shape535 = browser.currentScene.createNode("Shape");
Shape535.USE = "H";
Transform534.children = new MFNode();

Transform534.children[0] = Shape535;

Transform527.children[3] = Transform534;

let Transform536 = browser.currentScene.createNode("Transform");
Transform536.translation = new SFVec3f(new float[1,0,0]);
let Shape537 = browser.currentScene.createNode("Shape");
Shape537.USE = "O";
Transform536.children = new MFNode();

Transform536.children[0] = Shape537;

Transform527.children[4] = Transform536;

let Transform538 = browser.currentScene.createNode("Transform");
Transform538.translation = new SFVec3f(new float[2,0,0]);
let Shape539 = browser.currentScene.createNode("Shape");
Shape539.USE = "M";
Transform538.children = new MFNode();

Transform538.children[0] = Shape539;

Transform527.children[5] = Transform538;

let Transform540 = browser.currentScene.createNode("Transform");
Transform540.translation = new SFVec3f(new float[3,0,0]);
let Shape541 = browser.currentScene.createNode("Shape");
Shape541.USE = "E";
Transform540.children = new MFNode();

Transform540.children[0] = Shape541;

Transform527.children[6] = Transform540;

Transform460.children[12] = Transform527;

let Transform542 = browser.currentScene.createNode("Transform");
Transform542.DEF = "End";
Transform542.translation = new SFVec3f(new float[0,-13,0]);
let Transform543 = browser.currentScene.createNode("Transform");
Transform543.translation = new SFVec3f(new float[-3,0,0]);
let Shape544 = browser.currentScene.createNode("Shape");
Shape544.USE = "One";
Transform543.children = new MFNode();

Transform543.children[0] = Shape544;

Transform542.children = new MFNode();

Transform542.children[0] = Transform543;

let Transform545 = browser.currentScene.createNode("Transform");
Transform545.translation = new SFVec3f(new float[-2,0,0]);
let Shape546 = browser.currentScene.createNode("Shape");
Shape546.USE = "Four";
Transform545.children = new MFNode();

Transform545.children[0] = Shape546;

Transform542.children[1] = Transform545;

let Transform547 = browser.currentScene.createNode("Transform");
Transform547.translation = new SFVec3f(new float[-1,0,0]);
let Shape548 = browser.currentScene.createNode("Shape");
Shape548.USE = "Colon";
Transform547.children = new MFNode();

Transform547.children[0] = Shape548;

Transform542.children[2] = Transform547;

let Transform549 = browser.currentScene.createNode("Transform");
let Shape550 = browser.currentScene.createNode("Shape");
Shape550.USE = "E";
Transform549.children = new MFNode();

Transform549.children[0] = Shape550;

Transform542.children[3] = Transform549;

let Transform551 = browser.currentScene.createNode("Transform");
Transform551.translation = new SFVec3f(new float[1,0,0]);
let Shape552 = browser.currentScene.createNode("Shape");
Shape552.USE = "N";
Transform551.children = new MFNode();

Transform551.children[0] = Shape552;

Transform542.children[4] = Transform551;

let Transform553 = browser.currentScene.createNode("Transform");
Transform553.translation = new SFVec3f(new float[2,0,0]);
let Shape554 = browser.currentScene.createNode("Shape");
Shape554.USE = "D";
Transform553.children = new MFNode();

Transform553.children[0] = Shape554;

Transform542.children[5] = Transform553;

Transform460.children[13] = Transform542;

let Transform555 = browser.currentScene.createNode("Transform");
Transform555.DEF = "Left";
Transform555.translation = new SFVec3f(new float[0,-14,0]);
let Transform556 = browser.currentScene.createNode("Transform");
Transform556.translation = new SFVec3f(new float[-3,0,0]);
let Shape557 = browser.currentScene.createNode("Shape");
Shape557.USE = "One";
Transform556.children = new MFNode();

Transform556.children[0] = Shape557;

Transform555.children = new MFNode();

Transform555.children[0] = Transform556;

let Transform558 = browser.currentScene.createNode("Transform");
Transform558.translation = new SFVec3f(new float[-2,0,0]);
let Shape559 = browser.currentScene.createNode("Shape");
Shape559.USE = "Five";
Transform558.children = new MFNode();

Transform558.children[0] = Shape559;

Transform555.children[1] = Transform558;

let Transform560 = browser.currentScene.createNode("Transform");
Transform560.translation = new SFVec3f(new float[-1,0,0]);
let Shape561 = browser.currentScene.createNode("Shape");
Shape561.USE = "Colon";
Transform560.children = new MFNode();

Transform560.children[0] = Shape561;

Transform555.children[2] = Transform560;

let Transform562 = browser.currentScene.createNode("Transform");
let Shape563 = browser.currentScene.createNode("Shape");
Shape563.USE = "L";
Transform562.children = new MFNode();

Transform562.children[0] = Shape563;

Transform555.children[3] = Transform562;

let Transform564 = browser.currentScene.createNode("Transform");
Transform564.translation = new SFVec3f(new float[1,0,0]);
let Shape565 = browser.currentScene.createNode("Shape");
Shape565.USE = "E";
Transform564.children = new MFNode();

Transform564.children[0] = Shape565;

Transform555.children[4] = Transform564;

let Transform566 = browser.currentScene.createNode("Transform");
Transform566.translation = new SFVec3f(new float[2,0,0]);
let Shape567 = browser.currentScene.createNode("Shape");
Shape567.USE = "F";
Transform566.children = new MFNode();

Transform566.children[0] = Shape567;

Transform555.children[5] = Transform566;

let Transform568 = browser.currentScene.createNode("Transform");
Transform568.translation = new SFVec3f(new float[2,0,0]);
let Shape569 = browser.currentScene.createNode("Shape");
Shape569.USE = "T";
Transform568.children = new MFNode();

Transform568.children[0] = Shape569;

Transform555.children[6] = Transform568;

Transform460.children[14] = Transform555;

let Transform570 = browser.currentScene.createNode("Transform");
Transform570.DEF = "Right";
Transform570.translation = new SFVec3f(new float[0,-15,0]);
let Transform571 = browser.currentScene.createNode("Transform");
Transform571.translation = new SFVec3f(new float[-3,0,0]);
let Shape572 = browser.currentScene.createNode("Shape");
Shape572.USE = "One";
Transform571.children = new MFNode();

Transform571.children[0] = Shape572;

Transform570.children = new MFNode();

Transform570.children[0] = Transform571;

let Transform573 = browser.currentScene.createNode("Transform");
Transform573.translation = new SFVec3f(new float[-2,0,0]);
let Shape574 = browser.currentScene.createNode("Shape");
Shape574.USE = "Six";
Transform573.children = new MFNode();

Transform573.children[0] = Shape574;

Transform570.children[1] = Transform573;

let Transform575 = browser.currentScene.createNode("Transform");
Transform575.translation = new SFVec3f(new float[-1,0,0]);
let Shape576 = browser.currentScene.createNode("Shape");
Shape576.USE = "Colon";
Transform575.children = new MFNode();

Transform575.children[0] = Shape576;

Transform570.children[2] = Transform575;

let Transform577 = browser.currentScene.createNode("Transform");
let Shape578 = browser.currentScene.createNode("Shape");
Shape578.USE = "R";
Transform577.children = new MFNode();

Transform577.children[0] = Shape578;

Transform570.children[3] = Transform577;

let Transform579 = browser.currentScene.createNode("Transform");
Transform579.translation = new SFVec3f(new float[1,0,0]);
let Shape580 = browser.currentScene.createNode("Shape");
Shape580.USE = "I";
Transform579.children = new MFNode();

Transform579.children[0] = Shape580;

Transform570.children[4] = Transform579;

let Transform581 = browser.currentScene.createNode("Transform");
Transform581.translation = new SFVec3f(new float[2,0,0]);
let Shape582 = browser.currentScene.createNode("Shape");
Shape582.USE = "G";
Transform581.children = new MFNode();

Transform581.children[0] = Shape582;

Transform570.children[5] = Transform581;

let Transform583 = browser.currentScene.createNode("Transform");
Transform583.translation = new SFVec3f(new float[2,0,0]);
let Shape584 = browser.currentScene.createNode("Shape");
Shape584.USE = "H";
Transform583.children = new MFNode();

Transform583.children[0] = Shape584;

Transform570.children[6] = Transform583;

let Transform585 = browser.currentScene.createNode("Transform");
Transform585.translation = new SFVec3f(new float[2,0,0]);
let Shape586 = browser.currentScene.createNode("Shape");
Shape586.USE = "T";
Transform585.children = new MFNode();

Transform585.children[0] = Shape586;

Transform570.children[7] = Transform585;

Transform460.children[15] = Transform570;

let Transform587 = browser.currentScene.createNode("Transform");
Transform587.DEF = "Up";
Transform587.translation = new SFVec3f(new float[0,-16,0]);
let Transform588 = browser.currentScene.createNode("Transform");
Transform588.translation = new SFVec3f(new float[-3,0,0]);
let Shape589 = browser.currentScene.createNode("Shape");
Shape589.USE = "One";
Transform588.children = new MFNode();

Transform588.children[0] = Shape589;

Transform587.children = new MFNode();

Transform587.children[0] = Transform588;

let Transform590 = browser.currentScene.createNode("Transform");
Transform590.translation = new SFVec3f(new float[-2,0,0]);
let Shape591 = browser.currentScene.createNode("Shape");
Shape591.USE = "Seven";
Transform590.children = new MFNode();

Transform590.children[0] = Shape591;

Transform587.children[1] = Transform590;

let Transform592 = browser.currentScene.createNode("Transform");
Transform592.translation = new SFVec3f(new float[-1,0,0]);
let Shape593 = browser.currentScene.createNode("Shape");
Shape593.USE = "Colon";
Transform592.children = new MFNode();

Transform592.children[0] = Shape593;

Transform587.children[2] = Transform592;

let Transform594 = browser.currentScene.createNode("Transform");
let Shape595 = browser.currentScene.createNode("Shape");
Shape595.USE = "U";
Transform594.children = new MFNode();

Transform594.children[0] = Shape595;

Transform587.children[3] = Transform594;

let Transform596 = browser.currentScene.createNode("Transform");
Transform596.translation = new SFVec3f(new float[1,0,0]);
let Shape597 = browser.currentScene.createNode("Shape");
Shape597.USE = "P";
Transform596.children = new MFNode();

Transform596.children[0] = Shape597;

Transform587.children[4] = Transform596;

Transform460.children[16] = Transform587;

let Transform598 = browser.currentScene.createNode("Transform");
Transform598.DEF = "Down";
Transform598.translation = new SFVec3f(new float[0,-17,0]);
let Transform599 = browser.currentScene.createNode("Transform");
Transform599.translation = new SFVec3f(new float[-3,0,0]);
let Shape600 = browser.currentScene.createNode("Shape");
Shape600.USE = "One";
Transform599.children = new MFNode();

Transform599.children[0] = Shape600;

Transform598.children = new MFNode();

Transform598.children[0] = Transform599;

let Transform601 = browser.currentScene.createNode("Transform");
Transform601.translation = new SFVec3f(new float[-2,0,0]);
let Shape602 = browser.currentScene.createNode("Shape");
Shape602.USE = "Eight";
Transform601.children = new MFNode();

Transform601.children[0] = Shape602;

Transform598.children[1] = Transform601;

let Transform603 = browser.currentScene.createNode("Transform");
Transform603.translation = new SFVec3f(new float[-1,0,0]);
let Shape604 = browser.currentScene.createNode("Shape");
Shape604.USE = "Colon";
Transform603.children = new MFNode();

Transform603.children[0] = Shape604;

Transform598.children[2] = Transform603;

let Transform605 = browser.currentScene.createNode("Transform");
let Shape606 = browser.currentScene.createNode("Shape");
Shape606.USE = "D";
Transform605.children = new MFNode();

Transform605.children[0] = Shape606;

Transform598.children[3] = Transform605;

let Transform607 = browser.currentScene.createNode("Transform");
Transform607.translation = new SFVec3f(new float[1,0,0]);
let Shape608 = browser.currentScene.createNode("Shape");
Shape608.USE = "O";
Transform607.children = new MFNode();

Transform607.children[0] = Shape608;

Transform598.children[4] = Transform607;

let Transform609 = browser.currentScene.createNode("Transform");
Transform609.translation = new SFVec3f(new float[2,0,0]);
let Shape610 = browser.currentScene.createNode("Shape");
Shape610.USE = "W";
Transform609.children = new MFNode();

Transform609.children[0] = Shape610;

Transform598.children[5] = Transform609;

let Transform611 = browser.currentScene.createNode("Transform");
Transform611.translation = new SFVec3f(new float[2,0,0]);
let Shape612 = browser.currentScene.createNode("Shape");
Shape612.USE = "N";
Transform611.children = new MFNode();

Transform611.children[0] = Shape612;

Transform598.children[6] = Transform611;

Transform460.children[17] = Transform598;

let Transform613 = browser.currentScene.createNode("Transform");
Transform613.DEF = "PGUP";
Transform613.translation = new SFVec3f(new float[0,-18,0]);
let Transform614 = browser.currentScene.createNode("Transform");
Transform614.translation = new SFVec3f(new float[-3,0,0]);
let Shape615 = browser.currentScene.createNode("Shape");
Shape615.USE = "One";
Transform614.children = new MFNode();

Transform614.children[0] = Shape615;

Transform613.children = new MFNode();

Transform613.children[0] = Transform614;

let Transform616 = browser.currentScene.createNode("Transform");
Transform616.translation = new SFVec3f(new float[-2,0,0]);
let Shape617 = browser.currentScene.createNode("Shape");
Shape617.USE = "Nine";
Transform616.children = new MFNode();

Transform616.children[0] = Shape617;

Transform613.children[1] = Transform616;

let Transform618 = browser.currentScene.createNode("Transform");
Transform618.translation = new SFVec3f(new float[-1,0,0]);
let Shape619 = browser.currentScene.createNode("Shape");
Shape619.USE = "Colon";
Transform618.children = new MFNode();

Transform618.children[0] = Shape619;

Transform613.children[2] = Transform618;

let Transform620 = browser.currentScene.createNode("Transform");
let Shape621 = browser.currentScene.createNode("Shape");
Shape621.USE = "P";
Transform620.children = new MFNode();

Transform620.children[0] = Shape621;

Transform613.children[3] = Transform620;

let Transform622 = browser.currentScene.createNode("Transform");
Transform622.translation = new SFVec3f(new float[1,0,0]);
let Shape623 = browser.currentScene.createNode("Shape");
Shape623.USE = "G";
Transform622.children = new MFNode();

Transform622.children[0] = Shape623;

Transform613.children[4] = Transform622;

let Transform624 = browser.currentScene.createNode("Transform");
Transform624.translation = new SFVec3f(new float[2,0,0]);
let Shape625 = browser.currentScene.createNode("Shape");
Shape625.USE = "U";
Transform624.children = new MFNode();

Transform624.children[0] = Shape625;

Transform613.children[5] = Transform624;

let Transform626 = browser.currentScene.createNode("Transform");
Transform626.translation = new SFVec3f(new float[2,0,0]);
let Shape627 = browser.currentScene.createNode("Shape");
Shape627.USE = "P";
Transform626.children = new MFNode();

Transform626.children[0] = Shape627;

Transform613.children[6] = Transform626;

Transform460.children[18] = Transform613;

let Transform628 = browser.currentScene.createNode("Transform");
Transform628.DEF = "PGDN";
Transform628.translation = new SFVec3f(new float[0,-19,0]);
let Transform629 = browser.currentScene.createNode("Transform");
Transform629.translation = new SFVec3f(new float[-3,0,0]);
let Shape630 = browser.currentScene.createNode("Shape");
Shape630.USE = "Two";
Transform629.children = new MFNode();

Transform629.children[0] = Shape630;

Transform628.children = new MFNode();

Transform628.children[0] = Transform629;

let Transform631 = browser.currentScene.createNode("Transform");
Transform631.translation = new SFVec3f(new float[-2,0,0]);
let Shape632 = browser.currentScene.createNode("Shape");
Shape632.USE = "Zero";
Transform631.children = new MFNode();

Transform631.children[0] = Shape632;

Transform628.children[1] = Transform631;

let Transform633 = browser.currentScene.createNode("Transform");
Transform633.translation = new SFVec3f(new float[-1,0,0]);
let Shape634 = browser.currentScene.createNode("Shape");
Shape634.USE = "Colon";
Transform633.children = new MFNode();

Transform633.children[0] = Shape634;

Transform628.children[2] = Transform633;

let Transform635 = browser.currentScene.createNode("Transform");
let Shape636 = browser.currentScene.createNode("Shape");
Shape636.USE = "P";
Transform635.children = new MFNode();

Transform635.children[0] = Shape636;

Transform628.children[3] = Transform635;

let Transform637 = browser.currentScene.createNode("Transform");
Transform637.translation = new SFVec3f(new float[1,0,0]);
let Shape638 = browser.currentScene.createNode("Shape");
Shape638.USE = "G";
Transform637.children = new MFNode();

Transform637.children[0] = Shape638;

Transform628.children[4] = Transform637;

let Transform639 = browser.currentScene.createNode("Transform");
Transform639.translation = new SFVec3f(new float[2,0,0]);
let Shape640 = browser.currentScene.createNode("Shape");
Shape640.USE = "D";
Transform639.children = new MFNode();

Transform639.children[0] = Shape640;

Transform628.children[5] = Transform639;

let Transform641 = browser.currentScene.createNode("Transform");
Transform641.translation = new SFVec3f(new float[2,0,0]);
let Shape642 = browser.currentScene.createNode("Shape");
Shape642.USE = "N";
Transform641.children = new MFNode();

Transform641.children[0] = Shape642;

Transform628.children[6] = Transform641;

Transform460.children[19] = Transform628;

Switch402.children[1] = Transform460;

Group250.children[1] = Switch402;

browser.currentScene.children[43] = Group250;

let ROUTE643 = browser.currentScene.createNode("ROUTE");
ROUTE643.fromField = "actionKeyPress";
ROUTE643.fromNode = "SingleKeySensor";
ROUTE643.toField = "whichChoice";
ROUTE643.toNode = "ActivationKeyMessageSwitch";
browser.currentScene.children[44] = ROUTE643;


let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Full";
X3D0.version = "4.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "SplitChannels.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let NavigationInfo3 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo3.DEF = "NAV";
NavigationInfo3.type = new MFString(new java.lang.String["NONE"]);
browser.currentScene.children[1] = NavigationInfo3;

let Background4 = browser.currentScene.createNode("Background");
Background4.skyColor = new MFColor(new float[0.2,0.2,0.21]);
browser.currentScene.children[2] = Background4;

let Viewpoint5 = browser.currentScene.createNode("Viewpoint");
Viewpoint5.orientation = new SFRotation(new float[1,0,0,-0.5]);
Viewpoint5.position = new SFVec3f(new float[0,500,600]);
Viewpoint5.retainUserOffsets = True;
browser.currentScene.children[3] = Viewpoint5;

let Transform6 = browser.currentScene.createNode("Transform");
Transform6.DEF = "PowerR";
Transform6.translation = new SFVec3f(new float[100,400,400]);
let Transform7 = browser.currentScene.createNode("Transform");
Transform7.DEF = "pR";
Transform7.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform7.translation = new SFVec3f(new float[0,40,0]);
let Shape8 = browser.currentScene.createNode("Shape");
let Appearance9 = browser.currentScene.createNode("Appearance");
Appearance9.DEF = "audio_emit1";
let Material10 = browser.currentScene.createNode("Material");
Material10.diffuseColor = new SFColor(new float[0,1,0]);
Material10.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Material10.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Appearance9.material = Material10;

Shape8.appearance = Appearance9;

let Box11 = browser.currentScene.createNode("Box");
Box11.size = new SFVec3f(new float[10,80,0.01]);
Shape8.geometry = Box11;

Transform7.children = new MFNode();

Transform7.children[0] = Shape8;

Transform6.children = new MFNode();

Transform6.children[0] = Transform7;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform12.translation = new SFVec3f(new float[-2.7,37,0]);
let Shape13 = browser.currentScene.createNode("Shape");
let Appearance14 = browser.currentScene.createNode("Appearance");
Appearance14.DEF = "audio_emit2";
let Material15 = browser.currentScene.createNode("Material");
Material15.diffuseColor = new SFColor(new float[0,1,0]);
Material15.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Material15.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Appearance14.material = Material15;

let ImageTexture16 = browser.currentScene.createNode("ImageTexture");
ImageTexture16.url = new MFString(new java.lang.String["images/line.png"]);
Appearance14.texture = ImageTexture16;

Shape13.appearance = Appearance14;

let Box17 = browser.currentScene.createNode("Box");
Box17.size = new SFVec3f(new float[25,83,0.01]);
Shape13.geometry = Box17;

Transform12.children = new MFNode();

Transform12.children[0] = Shape13;

Transform6.children[1] = Transform12;

let Transform18 = browser.currentScene.createNode("Transform");
Transform18.DEF = "volumeRight";
Transform18.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform18.scale = new SFVec3f(new float[10,10,10]);
Transform18.translation = new SFVec3f(new float[0,-10,0]);
let Shape19 = browser.currentScene.createNode("Shape");
let Appearance20 = browser.currentScene.createNode("Appearance");
let Material21 = browser.currentScene.createNode("Material");
Material21.diffuseColor = new SFColor(new float[0.345,0.345,0.882]);
Appearance20.material = Material21;

let Material22 = browser.currentScene.createNode("Material");
Material22.ambientIntensity = 0.0933;
Material22.diffuseColor = new SFColor(new float[1,1,1]);
Material22.shininess = 0.51;
Material22.specularColor = new SFColor(new float[0.46,0.46,0.46]);
Appearance20.material = Material22;

Shape19.appearance = Appearance20;

let Text23 = browser.currentScene.createNode("Text");
Text23.string = new MFString(new java.lang.String["Right Channel Volume"]);
let FontStyle24 = browser.currentScene.createNode("FontStyle");
FontStyle24.family = new MFString(new java.lang.String["Times"]);
FontStyle24.style = "BOLD";
Text23.fontStyle = FontStyle24;

Shape19.geometry = Text23;

Transform18.children = new MFNode();

Transform18.children[0] = Shape19;

Transform6.children[2] = Transform18;

browser.currentScene.children[4] = Transform6;

let Transform25 = browser.currentScene.createNode("Transform");
Transform25.DEF = "PowerL";
Transform25.translation = new SFVec3f(new float[-100,400,400]);
let Transform26 = browser.currentScene.createNode("Transform");
Transform26.DEF = "pL";
Transform26.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform26.translation = new SFVec3f(new float[0,40,0]);
let Shape27 = browser.currentScene.createNode("Shape");
let Appearance28 = browser.currentScene.createNode("Appearance");
Appearance28.DEF = "audio_emit3";
let Material29 = browser.currentScene.createNode("Material");
Material29.diffuseColor = new SFColor(new float[0,1,0]);
Material29.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Material29.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

let Box30 = browser.currentScene.createNode("Box");
Box30.size = new SFVec3f(new float[10,80,0.01]);
Shape27.geometry = Box30;

Transform26.children = new MFNode();

Transform26.children[0] = Shape27;

Transform25.children = new MFNode();

Transform25.children[0] = Transform26;

let Transform31 = browser.currentScene.createNode("Transform");
Transform31.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform31.translation = new SFVec3f(new float[13.2,37,0]);
let Shape32 = browser.currentScene.createNode("Shape");
let Appearance33 = browser.currentScene.createNode("Appearance");
Appearance33.DEF = "audio_emit4";
let Material34 = browser.currentScene.createNode("Material");
Material34.diffuseColor = new SFColor(new float[0,1,0]);
Material34.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Material34.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Appearance33.material = Material34;

let ImageTexture35 = browser.currentScene.createNode("ImageTexture");
ImageTexture35.url = new MFString(new java.lang.String["images/line.png"]);
Appearance33.texture = ImageTexture35;

Shape32.appearance = Appearance33;

let Box36 = browser.currentScene.createNode("Box");
Box36.size = new SFVec3f(new float[25,83,0.01]);
Shape32.geometry = Box36;

Transform31.children = new MFNode();

Transform31.children[0] = Shape32;

Transform25.children[1] = Transform31;

let Transform37 = browser.currentScene.createNode("Transform");
Transform37.DEF = "volumeLeft";
Transform37.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform37.scale = new SFVec3f(new float[10,10,10]);
Transform37.translation = new SFVec3f(new float[0,-10,0]);
let Shape38 = browser.currentScene.createNode("Shape");
let Appearance39 = browser.currentScene.createNode("Appearance");
let Material40 = browser.currentScene.createNode("Material");
Material40.diffuseColor = new SFColor(new float[0.345,0.345,0.882]);
Appearance39.material = Material40;

let Material41 = browser.currentScene.createNode("Material");
Material41.ambientIntensity = 0.0933;
Material41.diffuseColor = new SFColor(new float[1,1,1]);
Material41.shininess = 0.51;
Material41.specularColor = new SFColor(new float[0.46,0.46,0.46]);
Appearance39.material = Material41;

Shape38.appearance = Appearance39;

let Text42 = browser.currentScene.createNode("Text");
Text42.string = new MFString(new java.lang.String["Left Channel Volume"]);
let FontStyle43 = browser.currentScene.createNode("FontStyle");
FontStyle43.family = new MFString(new java.lang.String["Times"]);
FontStyle43.style = "BOLD";
Text42.fontStyle = FontStyle43;

Shape38.geometry = Text42;

Transform37.children = new MFNode();

Transform37.children[0] = Shape38;

Transform25.children[2] = Transform37;

browser.currentScene.children[5] = Transform25;

let Transform44 = browser.currentScene.createNode("Transform");
Transform44.DEF = "Audio3";
Transform44.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform44.translation = new SFVec3f(new float[0,100,0]);
let Shape45 = browser.currentScene.createNode("Shape");
let Appearance46 = browser.currentScene.createNode("Appearance");
Appearance46.DEF = "audio_emit5";
let Material47 = browser.currentScene.createNode("Material");
Material47.diffuseColor = new SFColor(new float[0.3,1,0.3]);
Material47.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Material47.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Appearance46.material = Material47;

let ImageTexture48 = browser.currentScene.createNode("ImageTexture");
ImageTexture48.url = new MFString(new java.lang.String["images/loudspeaker.png"]);
Appearance46.texture = ImageTexture48;

Shape45.appearance = Appearance46;

let Box49 = browser.currentScene.createNode("Box");
Box49.size = new SFVec3f(new float[100,100,0.001]);
Shape45.geometry = Box49;

Transform44.children = new MFNode();

Transform44.children[0] = Shape45;

browser.currentScene.children[6] = Transform44;

let Transform50 = browser.currentScene.createNode("Transform");
let Shape51 = browser.currentScene.createNode("Shape");
let Appearance52 = browser.currentScene.createNode("Appearance");
Appearance52.DEF = "floor";
let Material53 = browser.currentScene.createNode("Material");
Material53.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material53.shininess = 0.8;
Material53.specularColor = new SFColor(new float[0.5,0.6,0.7]);
Appearance52.material = Material53;

Shape51.appearance = Appearance52;

let Box54 = browser.currentScene.createNode("Box");
Box54.size = new SFVec3f(new float[1500,10,500]);
Shape51.geometry = Box54;

Transform50.children = new MFNode();

Transform50.children[0] = Shape51;

browser.currentScene.children[7] = Transform50;


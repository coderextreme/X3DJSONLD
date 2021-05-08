let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Full";
X3D0.version = "4.0";
let NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

let Background3 = browser.currentScene.createNode("Background");
Background3.skyColor = new MFColor(new float[0.2,0.2,0.2]);
browser.currentScene.children[1] = Background3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.bind = "true";
Viewpoint4.orientation = new SFRotation(new float[1,0,0,-0.5]);
Viewpoint4.position = new SFVec3f(new float[0,500,600]);
Viewpoint4.retainUserOffsets = True;
browser.currentScene.children[2] = Viewpoint4;

let Transform5 = browser.currentScene.createNode("Transform");
Transform5.DEF = "Audio1";
Transform5.translation = new SFVec3f(new float[-200,50,0]);
let Shape6 = browser.currentScene.createNode("Shape");
let Appearance7 = browser.currentScene.createNode("Appearance");
Appearance7.DEF = "audio_emit";
let Material8 = browser.currentScene.createNode("Material");
Material8.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material8.emmisiveColor = "0.8 0.8 0.8";
Material8.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Appearance7.material = Material8;

Shape6.appearance = Appearance7;

let Sphere9 = browser.currentScene.createNode("Sphere");
Sphere9.radius = 30;
Shape6.geometry = Sphere9;

Transform5.children = new MFNode();

Transform5.children[0] = Shape6;

browser.currentScene.children[3] = Transform5;

let Transform10 = browser.currentScene.createNode("Transform");
Transform10.DEF = "Audio2";
Transform10.translation = new SFVec3f(new float[0,50,0]);
let Shape11 = browser.currentScene.createNode("Shape");
let Appearance12 = browser.currentScene.createNode("Appearance");
Appearance12.DEF = "audio_emit";
let Material13 = browser.currentScene.createNode("Material");
Material13.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material13.emmisiveColor = "0.8 0.8 0.8";
Material13.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Appearance12.material = Material13;

Shape11.appearance = Appearance12;

let Sphere14 = browser.currentScene.createNode("Sphere");
Sphere14.radius = 30;
Shape11.geometry = Sphere14;

Transform10.children = new MFNode();

Transform10.children[0] = Shape11;

browser.currentScene.children[4] = Transform10;

let Transform15 = browser.currentScene.createNode("Transform");
Transform15.DEF = "Audio3";
Transform15.translation = new SFVec3f(new float[200,50,0]);
let Shape16 = browser.currentScene.createNode("Shape");
let Appearance17 = browser.currentScene.createNode("Appearance");
Appearance17.DEF = "audio_emit";
let Material18 = browser.currentScene.createNode("Material");
Material18.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material18.emmisiveColor = "0.8 0.8 0.8";
Material18.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Appearance17.material = Material18;

Shape16.appearance = Appearance17;

let Sphere19 = browser.currentScene.createNode("Sphere");
Sphere19.radius = 30;
Shape16.geometry = Sphere19;

Transform15.children = new MFNode();

Transform15.children[0] = Shape16;

browser.currentScene.children[5] = Transform15;

let Transform20 = browser.currentScene.createNode("Transform");
Transform20.DEF = "AnimData";
Transform20.translation = new SFVec3f(new float[0,50,0]);
browser.currentScene.children[6] = Transform20;

let Transform21 = browser.currentScene.createNode("Transform");
Transform21.DEF = "AnimDataBoxH";
Transform21.translation = new SFVec3f(new float[0,100,0]);
browser.currentScene.children[7] = Transform21;

let Transform22 = browser.currentScene.createNode("Transform");
Transform22.DEF = "AnimDataBoxM";
Transform22.translation = new SFVec3f(new float[15,100,0]);
browser.currentScene.children[8] = Transform22;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.DEF = "AnimDataBoxL";
Transform23.translation = new SFVec3f(new float[30,100,0]);
browser.currentScene.children[9] = Transform23;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.DEF = "AnimDataBoxMM";
Transform24.translation = new SFVec3f(new float[-15,100,0]);
browser.currentScene.children[10] = Transform24;

let Transform25 = browser.currentScene.createNode("Transform");
Transform25.DEF = "AnimDataBoxLM";
Transform25.translation = new SFVec3f(new float[-30,100,0]);
browser.currentScene.children[11] = Transform25;

let Transform26 = browser.currentScene.createNode("Transform");
let Shape27 = browser.currentScene.createNode("Shape");
let Appearance28 = browser.currentScene.createNode("Appearance");
Appearance28.DEF = "floor";
let Material29 = browser.currentScene.createNode("Material");
Material29.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material29.shininess = 0.8;
Material29.specularColor = new SFColor(new float[0.5,0.6,0.7]);
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

let Cylinder30 = browser.currentScene.createNode("Cylinder");
Cylinder30.radius = 500;
Shape27.geometry = Cylinder30;

Transform26.children = new MFNode();

Transform26.children[0] = Shape27;

browser.currentScene.children[12] = Transform26;

let AudioDestination31 = browser.currentScene.createNode("AudioDestination");
let DynamicsCompressor32 = browser.currentScene.createNode("DynamicsCompressor");
let Gain33 = browser.currentScene.createNode("Gain");
let SpatialSound34 = browser.currentScene.createNode("SpatialSound");
SpatialSound34.USE = "Audio1";
let Gain35 = browser.currentScene.createNode("Gain");
let Analyser36 = browser.currentScene.createNode("Analyser");
let BiquadFilter37 = browser.currentScene.createNode("BiquadFilter");
BiquadFilter37.detune = 50;
BiquadFilter37.frequency = 600;
BiquadFilter37.qualityFactor = 30;
BiquadFilter37.type = "allpass";
let AudioClip38 = browser.currentScene.createNode("AudioClip");
AudioClip38.loop = True;
AudioClip38.pauseTime = -1;
AudioClip38.resumeTime = -1;
AudioClip38.stopTime = -1;
AudioClip38.url = new MFString(new java.lang.String["sound/techno_beat.mp3"]);
BiquadFilter37.children = new MFNode();

BiquadFilter37.children[0] = AudioClip38;

Analyser36.children = new MFNode();

Analyser36.children[0] = BiquadFilter37;

Gain35.children = new MFNode();

Gain35.children[0] = Analyser36;

SpatialSound34.children = new MFNode();

SpatialSound34.children[0] = Gain35;

Gain33.children = new MFNode();

Gain33.children[0] = SpatialSound34;

let SpatialSound39 = browser.currentScene.createNode("SpatialSound");
SpatialSound39.USE = "Audio2";
let Gain40 = browser.currentScene.createNode("Gain");
let Analyser41 = browser.currentScene.createNode("Analyser");
let BiquadFilter42 = browser.currentScene.createNode("BiquadFilter");
BiquadFilter42.detune = 15;
BiquadFilter42.frequency = 600;
BiquadFilter42.qualityFactor = 15;
BiquadFilter42.type = "allpass";
let AudioClip43 = browser.currentScene.createNode("AudioClip");
AudioClip43.loop = True;
AudioClip43.pauseTime = -1;
AudioClip43.resumeTime = -1;
AudioClip43.stopTime = -1;
AudioClip43.url = new MFString(new java.lang.String["sound/beat.mp3"]);
BiquadFilter42.children = new MFNode();

BiquadFilter42.children[0] = AudioClip43;

Analyser41.children = new MFNode();

Analyser41.children[0] = BiquadFilter42;

Gain40.children = new MFNode();

Gain40.children[0] = Analyser41;

SpatialSound39.children = new MFNode();

SpatialSound39.children[0] = Gain40;

Gain33.children[1] = SpatialSound39;

let SpatialSound44 = browser.currentScene.createNode("SpatialSound");
SpatialSound44.USE = "Audio3";
let Gain45 = browser.currentScene.createNode("Gain");
let Analyser46 = browser.currentScene.createNode("Analyser");
let BiquadFilter47 = browser.currentScene.createNode("BiquadFilter");
BiquadFilter47.frequency = 1000;
BiquadFilter47.qualityFactor = 0;
BiquadFilter47.type = "allpass";
let AudioClip48 = browser.currentScene.createNode("AudioClip");
AudioClip48.loop = True;
AudioClip48.pauseTime = -1;
AudioClip48.resumeTime = -1;
AudioClip48.stopTime = -1;
AudioClip48.url = new MFString(new java.lang.String["sound/wobble_loop.mp3"]);
BiquadFilter47.children = new MFNode();

BiquadFilter47.children[0] = AudioClip48;

Analyser46.children = new MFNode();

Analyser46.children[0] = BiquadFilter47;

Gain45.children = new MFNode();

Gain45.children[0] = Analyser46;

SpatialSound44.children = new MFNode();

SpatialSound44.children[0] = Gain45;

Gain33.children[2] = SpatialSound44;

DynamicsCompressor32.children = new MFNode();

DynamicsCompressor32.children[0] = Gain33;

AudioDestination31.children = new MFNode();

AudioDestination31.children[0] = DynamicsCompressor32;

browser.currentScene.children[13] = AudioDestination31;


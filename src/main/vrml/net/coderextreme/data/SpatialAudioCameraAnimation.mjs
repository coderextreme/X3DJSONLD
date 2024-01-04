let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Full";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "SpatialAudioCameraAnimation.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "info";
meta4.content = "This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "creator";
meta5.content = "Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "created";
meta6.content = "28 October 2020";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "modified";
meta7.content = "5 December 2021";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "reference";
meta8.content = "CHANGELOG.txt";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "TODO";
meta9.content = "credit for audio files";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "reference";
meta10.content = "https://www.medialab.hmu.gr/minipages/x3domAudio";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "identifier";
meta11.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "generator";
meta12.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "license";
meta13.content = "../license.html";
head1.meta[11] = meta13;

head = head1;

let WorldInfo15 = browser.currentScene.createNode("WorldInfo");
WorldInfo15.title = "SpatialAudioCameraAnimation.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo15;

let NavigationInfo16 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo16;

let Background17 = browser.currentScene.createNode("Background");
Background17.backUrl = new MFString(new java.lang.String["images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"]);
Background17.bottomUrl = new MFString(new java.lang.String["images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"]);
Background17.frontUrl = new MFString(new java.lang.String["images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"]);
Background17.leftUrl = new MFString(new java.lang.String["images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"]);
Background17.rightUrl = new MFString(new java.lang.String["images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"]);
Background17.topUrl = new MFString(new java.lang.String["images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"]);
browser.currentScene.children[2] = Background17;

let Viewpoint18 = browser.currentScene.createNode("Viewpoint");
Viewpoint18.DEF = "Camera001";
Viewpoint18.description = "Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view";
Viewpoint18.orientation = new SFRotation(new float[1,0,0,-0.523599]);
Viewpoint18.position = new SFVec3f(new float[0,2000,3500]);
browser.currentScene.children[3] = Viewpoint18;

let TimeSensor19 = browser.currentScene.createNode("TimeSensor");
TimeSensor19.DEF = "TIMER";
TimeSensor19.cycleInterval = 33.333332;
TimeSensor19.loop = True;
browser.currentScene.children[4] = TimeSensor19;

let PositionInterpolator20 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator20.DEF = "Camera001-POS-INTERP";
PositionInterpolator20.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
PositionInterpolator20.keyValue = new MFVec3f(new float[0,2000,3500,0,2000,0,0,2000,-3500,0,2000,0,0,2000,3500]);
browser.currentScene.children[5] = PositionInterpolator20;

let OrientationInterpolator21 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator21.DEF = "Camera001-ROT-INTERP";
OrientationInterpolator21.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator21.keyValue = new MFRotation(new float[1,0,0,-0.523599,0.99999,0.003554,0.002727,-1.309007,0,-0.965926,-0.258819,-3.141593,0.002282,-0.793351,-0.60876,-3.135645,1,-0.000001,0,-0.523599]);
browser.currentScene.children[6] = OrientationInterpolator21;

let ROUTE22 = browser.currentScene.createNode("ROUTE");
ROUTE22.fromField = "fraction_changed";
ROUTE22.fromNode = "TIMER";
ROUTE22.toField = "set_fraction";
ROUTE22.toNode = "Camera001-POS-INTERP";
browser.currentScene.children[7] = ROUTE22;

let ROUTE23 = browser.currentScene.createNode("ROUTE");
ROUTE23.fromField = "value_changed";
ROUTE23.fromNode = "Camera001-POS-INTERP";
ROUTE23.toField = "set_position";
ROUTE23.toNode = "Camera001";
browser.currentScene.children[8] = ROUTE23;

let ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromField = "fraction_changed";
ROUTE24.fromNode = "TIMER";
ROUTE24.toField = "set_fraction";
ROUTE24.toNode = "Camera001-ROT-INTERP";
browser.currentScene.children[9] = ROUTE24;

let ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromField = "value_changed";
ROUTE25.fromNode = "Camera001-ROT-INTERP";
ROUTE25.toField = "set_orientation";
ROUTE25.toNode = "Camera001";
browser.currentScene.children[10] = ROUTE25;

let Transform26 = browser.currentScene.createNode("Transform");
Transform26.DEF = "Floor";
Transform26.translation = new SFVec3f(new float[1.241,0,0.358]);
let Shape27 = browser.currentScene.createNode("Shape");
let Appearance28 = browser.currentScene.createNode("Appearance");
Appearance28.DEF = "WireColor";
let Material29 = browser.currentScene.createNode("Material");
Material29.diffuseColor = new SFColor(new float[0.122,0.114,0.125]);
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

let Box30 = browser.currentScene.createNode("Box");
Box30.size = new SFVec3f(new float[2000,1,2000]);
Shape27.geometry = Box30;

Transform26.child = new undefined();

Transform26.child[0] = Shape27;

browser.currentScene.children[11] = Transform26;

let Transform31 = browser.currentScene.createNode("Transform");
Transform31.DEF = "TransformAudio1";
Transform31.translation = new SFVec3f(new float[-933.123474,0,-926.253235]);
let Shape32 = browser.currentScene.createNode("Shape");
let Appearance33 = browser.currentScene.createNode("Appearance");
Appearance33.DEF = "WireColor_1";
let Material34 = browser.currentScene.createNode("Material");
Material34.diffuseColor = new SFColor(new float[0.690196,0.101961,0.101961]);
Appearance33.material = Material34;

Shape32.appearance = Appearance33;

let Sphere35 = browser.currentScene.createNode("Sphere");
Sphere35.radius = 100;
Shape32.geometry = Sphere35;

Transform31.child = new undefined();

Transform31.child[0] = Shape32;

let Billboard36 = browser.currentScene.createNode("Billboard");
let Transform37 = browser.currentScene.createNode("Transform");
Transform37.DEF = "violin";
Transform37.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform37.scale = new SFVec3f(new float[100,100,100]);
Transform37.translation = new SFVec3f(new float[0,100,0]);
let Shape38 = browser.currentScene.createNode("Shape");
let Appearance39 = browser.currentScene.createNode("Appearance");
let Material40 = browser.currentScene.createNode("Material");
Material40.ambientIntensity = 0.0933;
Material40.diffuseColor = new SFColor(new float[1,1,1]);
Material40.shininess = 0.51;
Material40.specularColor = new SFColor(new float[0.46,0.46,0.46]);
Appearance39.material = Material40;

Shape38.appearance = Appearance39;

let Text41 = browser.currentScene.createNode("Text");
Text41.string = new MFString(new java.lang.String["Violin"]);
let FontStyle42 = browser.currentScene.createNode("FontStyle");
FontStyle42.DEF = "ModelFontStyle";
FontStyle42.family = new MFString(new java.lang.String["Times","SERIF"]);
FontStyle42.style = "BOLD";
Text41.fontStyle = FontStyle42;

Shape38.geometry = Text41;

Transform37.child = new undefined();

Transform37.child[0] = Shape38;

Billboard36.children = new MFNode();

Billboard36.children[0] = Transform37;

Transform31.children[1] = Billboard36;

browser.currentScene.children[12] = Transform31;

let Transform43 = browser.currentScene.createNode("Transform");
Transform43.DEF = "TransformAudio2";
Transform43.translation = new SFVec3f(new float[933.475586,0,924.423218]);
let Shape44 = browser.currentScene.createNode("Shape");
let Appearance45 = browser.currentScene.createNode("Appearance");
Appearance45.DEF = "WireColor_2";
let Material46 = browser.currentScene.createNode("Material");
Material46.diffuseColor = new SFColor(new float[0.105882,0.694118,0.580392]);
Appearance45.material = Material46;

Shape44.appearance = Appearance45;

let Sphere47 = browser.currentScene.createNode("Sphere");
Sphere47.radius = 100;
Shape44.geometry = Sphere47;

Transform43.child = new undefined();

Transform43.child[0] = Shape44;

let Billboard48 = browser.currentScene.createNode("Billboard");
let Transform49 = browser.currentScene.createNode("Transform");
Transform49.DEF = "saxophone";
Transform49.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform49.scale = new SFVec3f(new float[100,100,100]);
Transform49.translation = new SFVec3f(new float[0,100,0]);
let Shape50 = browser.currentScene.createNode("Shape");
let Appearance51 = browser.currentScene.createNode("Appearance");
let Material52 = browser.currentScene.createNode("Material");
Material52.ambientIntensity = 0.0933;
Material52.diffuseColor = new SFColor(new float[1,1,1]);
Material52.shininess = 0.51;
Material52.specularColor = new SFColor(new float[0.46,0.46,0.46]);
Appearance51.material = Material52;

Shape50.appearance = Appearance51;

let Text53 = browser.currentScene.createNode("Text");
Text53.string = new MFString(new java.lang.String["Saxophone"]);
let FontStyle54 = browser.currentScene.createNode("FontStyle");
FontStyle54.USE = "ModelFontStyle";
Text53.fontStyle = FontStyle54;

Shape50.geometry = Text53;

Transform49.child = new undefined();

Transform49.child[0] = Shape50;

Billboard48.children = new MFNode();

Billboard48.children[0] = Transform49;

Transform43.children[1] = Billboard48;

browser.currentScene.children[13] = Transform43;

let ListenerPointSource55 = browser.currentScene.createNode("ListenerPointSource");
ListenerPointSource55.trackCurrentView = True;
browser.currentScene.children[14] = ListenerPointSource55;

let StreamAudioDestination56 = browser.currentScene.createNode("StreamAudioDestination");
let SpatialSound57 = browser.currentScene.createNode("SpatialSound");
SpatialSound57.DEF = "Audio1";
let Gain58 = browser.currentScene.createNode("Gain");
let AudioClip59 = browser.currentScene.createNode("AudioClip");
AudioClip59.description = "Violin";
AudioClip59.loop = True;
AudioClip59.url = new MFString(new java.lang.String["sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"]);
Gain58.children = new MFNode();

Gain58.children[0] = AudioClip59;

SpatialSound57.children = new MFNode();

SpatialSound57.children[0] = Gain58;

StreamAudioDestination56.children = new MFNode();

StreamAudioDestination56.children[0] = SpatialSound57;

let SpatialSound60 = browser.currentScene.createNode("SpatialSound");
SpatialSound60.DEF = "Audio2";
let Gain61 = browser.currentScene.createNode("Gain");
let AudioClip62 = browser.currentScene.createNode("AudioClip");
AudioClip62.description = "Saxophone";
AudioClip62.loop = True;
AudioClip62.url = new MFString(new java.lang.String["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"]);
Gain61.children = new MFNode();

Gain61.children[0] = AudioClip62;

SpatialSound60.children = new MFNode();

SpatialSound60.children[0] = Gain61;

StreamAudioDestination56.children[1] = SpatialSound60;

browser.currentScene.children[15] = StreamAudioDestination56;


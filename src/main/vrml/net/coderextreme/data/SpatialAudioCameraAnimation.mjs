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
meta9.name = "reference";
meta9.content = "https://www.medialab.hmu.gr/minipages/x3domAudio";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "TODO";
meta10.content = "credit for audio files";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "identifier";
meta11.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "generator";
meta12.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit";
head1.meta[10] = meta12;

head = head1;

let WorldInfo14 = browser.currentScene.createNode("WorldInfo");
WorldInfo14.title = "SpatialAudioCameraAnimation.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo14;

let NavigationInfo15 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo15;

let Background16 = browser.currentScene.createNode("Background");
Background16.frontUrl = new MFString(new java.lang.String["images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"]);
Background16.backUrl = new MFString(new java.lang.String["images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"]);
Background16.leftUrl = new MFString(new java.lang.String["images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"]);
Background16.rightUrl = new MFString(new java.lang.String["images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"]);
Background16.topUrl = new MFString(new java.lang.String["images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"]);
Background16.bottomUrl = new MFString(new java.lang.String["images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"]);
browser.currentScene.children[2] = Background16;

let Viewpoint17 = browser.currentScene.createNode("Viewpoint");
Viewpoint17.DEF = "Camera001";
Viewpoint17.description = "Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view";
Viewpoint17.position = new SFVec3f(new float[0,2000,3500]);
Viewpoint17.orientation = new SFRotation(new float[1,0,0,-0.523599]);
browser.currentScene.children[3] = Viewpoint17;

let TimeSensor18 = browser.currentScene.createNode("TimeSensor");
TimeSensor18.DEF = "TIMER";
TimeSensor18.cycleInterval = 33.333332;
TimeSensor18.loop = True;
browser.currentScene.children[4] = TimeSensor18;

let PositionInterpolator19 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator19.DEF = "Camera001-POS-INTERP";
PositionInterpolator19.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
PositionInterpolator19.keyValue = new MFVec3f(new float[0,2000,3500,0,2000,0,0,2000,-3500,0,2000,0,0,2000,3500]);
browser.currentScene.children[5] = PositionInterpolator19;

let OrientationInterpolator20 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator20.DEF = "Camera001-ROT-INTERP";
OrientationInterpolator20.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator20.keyValue = new MFRotation(new float[1,0,0,-0.523599,0.99999,0.003554,0.002727,-1.309007,0,-0.965926,-0.258819,-3.141593,0.002282,-0.793351,-0.60876,-3.135645,1,-0.000001,0,-0.523599]);
browser.currentScene.children[6] = OrientationInterpolator20;

let Transform21 = browser.currentScene.createNode("Transform");
Transform21.DEF = "Floor";
Transform21.translation = new SFVec3f(new float[1.241,0,0.358]);
let Shape22 = browser.currentScene.createNode("Shape");
let Appearance23 = browser.currentScene.createNode("Appearance");
Appearance23.DEF = "WireColor";
let Material24 = browser.currentScene.createNode("Material");
Material24.diffuseColor = new SFColor(new float[0.122,0.114,0.125]);
Appearance23.material = Material24;

Shape22.appearance = Appearance23;

let Box25 = browser.currentScene.createNode("Box");
Box25.size = new SFVec3f(new float[2000,1,2000]);
Shape22.geometry = Box25;

Transform21.child = new undefined();

Transform21.child[0] = Shape22;

browser.currentScene.children[7] = Transform21;

let Transform26 = browser.currentScene.createNode("Transform");
Transform26.DEF = "TransformAudio1";
Transform26.translation = new SFVec3f(new float[-933.1235,0,-926.2532]);
let Shape27 = browser.currentScene.createNode("Shape");
let Appearance28 = browser.currentScene.createNode("Appearance");
Appearance28.DEF = "WireColor_1";
let Material29 = browser.currentScene.createNode("Material");
Material29.diffuseColor = new SFColor(new float[0.690196,0.101961,0.101961]);
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

let Sphere30 = browser.currentScene.createNode("Sphere");
Sphere30.radius = 100;
Shape27.geometry = Sphere30;

Transform26.child = new undefined();

Transform26.child[0] = Shape27;

let Billboard31 = browser.currentScene.createNode("Billboard");
let Transform32 = browser.currentScene.createNode("Transform");
Transform32.DEF = "violin";
Transform32.translation = new SFVec3f(new float[0,100,0]);
Transform32.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform32.scale = new SFVec3f(new float[100,100,100]);
let Shape33 = browser.currentScene.createNode("Shape");
let Appearance34 = browser.currentScene.createNode("Appearance");
let Material35 = browser.currentScene.createNode("Material");
Material35.ambientIntensity = 0.0933;
Material35.diffuseColor = new SFColor(new float[1,1,1]);
Material35.specularColor = new SFColor(new float[0.46,0.46,0.46]);
Material35.shininess = 0.51;
Appearance34.material = Material35;

Shape33.appearance = Appearance34;

let Text36 = browser.currentScene.createNode("Text");
Text36.string = new MFString(new java.lang.String["Violin"]);
let FontStyle37 = browser.currentScene.createNode("FontStyle");
FontStyle37.DEF = "ModelFontStyle";
FontStyle37.family = new MFString(new java.lang.String["Times","SERIF"]);
FontStyle37.style = "BOLD";
Text36.fontStyle = FontStyle37;

Shape33.geometry = Text36;

Transform32.child = new undefined();

Transform32.child[0] = Shape33;

Billboard31.children = new MFNode();

Billboard31.children[0] = Transform32;

Transform26.children[1] = Billboard31;

browser.currentScene.children[8] = Transform26;

let Transform38 = browser.currentScene.createNode("Transform");
Transform38.DEF = "TransformAudio2";
Transform38.translation = new SFVec3f(new float[933.4756,0,924.4232]);
let Shape39 = browser.currentScene.createNode("Shape");
let Appearance40 = browser.currentScene.createNode("Appearance");
Appearance40.DEF = "WireColor_2";
let Material41 = browser.currentScene.createNode("Material");
Material41.diffuseColor = new SFColor(new float[0.105882,0.694118,0.580392]);
Appearance40.material = Material41;

Shape39.appearance = Appearance40;

let Sphere42 = browser.currentScene.createNode("Sphere");
Sphere42.radius = 100;
Shape39.geometry = Sphere42;

Transform38.child = new undefined();

Transform38.child[0] = Shape39;

let Billboard43 = browser.currentScene.createNode("Billboard");
let Transform44 = browser.currentScene.createNode("Transform");
Transform44.DEF = "saxophone";
Transform44.translation = new SFVec3f(new float[0,100,0]);
Transform44.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform44.scale = new SFVec3f(new float[100,100,100]);
let Shape45 = browser.currentScene.createNode("Shape");
let Appearance46 = browser.currentScene.createNode("Appearance");
let Material47 = browser.currentScene.createNode("Material");
Material47.ambientIntensity = 0.0933;
Material47.diffuseColor = new SFColor(new float[1,1,1]);
Material47.specularColor = new SFColor(new float[0.46,0.46,0.46]);
Material47.shininess = 0.51;
Appearance46.material = Material47;

Shape45.appearance = Appearance46;

let Text48 = browser.currentScene.createNode("Text");
Text48.string = new MFString(new java.lang.String["Saxophone"]);
let FontStyle49 = browser.currentScene.createNode("FontStyle");
FontStyle49.USE = "ModelFontStyle";
Text48.fontStyle = FontStyle49;

Shape45.geometry = Text48;

Transform44.child = new undefined();

Transform44.child[0] = Shape45;

Billboard43.children = new MFNode();

Billboard43.children[0] = Transform44;

Transform38.children[1] = Billboard43;

browser.currentScene.children[9] = Transform38;

let ListenerPointSource50 = browser.currentScene.createNode("ListenerPointSource");
ListenerPointSource50.trackCurrentView = True;
browser.currentScene.children[10] = ListenerPointSource50;

let StreamAudioDestination51 = browser.currentScene.createNode("StreamAudioDestination");
let SpatialSound52 = browser.currentScene.createNode("SpatialSound");
SpatialSound52.DEF = "Audio1";
let Gain53 = browser.currentScene.createNode("Gain");
let AudioClip54 = browser.currentScene.createNode("AudioClip");
AudioClip54.description = "Violin";
AudioClip54.url = new MFString(new java.lang.String["sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"]);
AudioClip54.loop = True;
Gain53.children = new MFNode();

Gain53.children[0] = AudioClip54;

SpatialSound52.children = new MFNode();

SpatialSound52.children[0] = Gain53;

StreamAudioDestination51.children = new MFNode();

StreamAudioDestination51.children[0] = SpatialSound52;

let SpatialSound55 = browser.currentScene.createNode("SpatialSound");
SpatialSound55.DEF = "Audio2";
let Gain56 = browser.currentScene.createNode("Gain");
let AudioClip57 = browser.currentScene.createNode("AudioClip");
AudioClip57.description = "Saxophone";
AudioClip57.url = new MFString(new java.lang.String["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"]);
AudioClip57.loop = True;
Gain56.children = new MFNode();

Gain56.children[0] = AudioClip57;

SpatialSound55.children = new MFNode();

SpatialSound55.children[0] = Gain56;

StreamAudioDestination51.children[1] = SpatialSound55;

browser.currentScene.children[11] = StreamAudioDestination51;

let ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromNode = "TIMER";
ROUTE58.fromField = "fraction_changed";
ROUTE58.toNode = "Camera001-POS-INTERP";
ROUTE58.toField = "set_fraction";
browser.currentScene.children[12] = ROUTE58;

let ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromNode = "Camera001-POS-INTERP";
ROUTE59.fromField = "value_changed";
ROUTE59.toNode = "Camera001";
ROUTE59.toField = "position";
browser.currentScene.children[13] = ROUTE59;

let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromNode = "TIMER";
ROUTE60.fromField = "fraction_changed";
ROUTE60.toNode = "Camera001-ROT-INTERP";
ROUTE60.toField = "set_fraction";
browser.currentScene.children[14] = ROUTE60;

let ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromNode = "Camera001-ROT-INTERP";
ROUTE61.fromField = "value_changed";
ROUTE61.toNode = "Camera001";
ROUTE61.toField = "orientation";
browser.currentScene.children[15] = ROUTE61;


let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Full";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "Filters.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "This X3D scene involves three sound sources. Each of them is visualized by a 3D object (in our case is a sphere) that depicts the sound effects. Specifically, we have added filters through of them we are able to manage the different sound effects in an impressive way. Filters can be composed of a number of attributes, frequency, detune, gain and the quality factor which also known as Q. Furthermore, the filters are classified in some specific types, depending on the sound effects that produce. In detail, there is the Low-pass filter which can create more muffled sound. Another one is the High-pass filter, which is used to generate tinny sound. Equally important is the Band-pass filter, which cuts off low and high frequencies and passes through only these within a certain range. On the contrary, the Notch filter has exactly the opposite operation of the Band-pass filter. Then is the Low-shelf filter, its role is to change the amount of bass in a sound, as a result the frequencies that are lower than the current frequency get a boost, while them that are over it remain unchanged. Next, the High-shelf filter is responsible for the quantity of treble in a sound. Moreover, Peaking filter is used in order to handle the amount of midrange in a sound. Lastly, there is the All-pass filter, whose role is to introduce phaser effects.";
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
meta11.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/Filters.x3d";
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
WorldInfo15.title = "Filters.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo15;

let NavigationInfo16 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo16;

let Background17 = browser.currentScene.createNode("Background");
Background17.skyColor = new MFColor(new float[0.2,0.2,0.2]);
browser.currentScene.children[2] = Background17;

let Viewpoint18 = browser.currentScene.createNode("Viewpoint");
Viewpoint18.description = "View entire audio model";
Viewpoint18.orientation = new SFRotation(new float[1,0,0,-0.5]);
Viewpoint18.position = new SFVec3f(new float[0,500,600]);
Viewpoint18.retainUserOffsets = True;
browser.currentScene.children[3] = Viewpoint18;

let Transform19 = browser.currentScene.createNode("Transform");
Transform19.DEF = "TransformAudio1";
Transform19.translation = new SFVec3f(new float[-200,50,0]);
let Shape20 = browser.currentScene.createNode("Shape");
let Appearance21 = browser.currentScene.createNode("Appearance");
Appearance21.DEF = "audio_emit";
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material22.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Material22.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

let Sphere23 = browser.currentScene.createNode("Sphere");
Sphere23.radius = 30;
Shape20.geometry = Sphere23;

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

browser.currentScene.children[4] = Transform19;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.DEF = "TransformAudio2";
Transform24.translation = new SFVec3f(new float[0,50,0]);
let Shape25 = browser.currentScene.createNode("Shape");
let Appearance26 = browser.currentScene.createNode("Appearance");
Appearance26.DEF = "audio_emit2";
let Material27 = browser.currentScene.createNode("Material");
Material27.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material27.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Material27.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Appearance26.material = Material27;

Shape25.appearance = Appearance26;

let Sphere28 = browser.currentScene.createNode("Sphere");
Sphere28.radius = 30;
Shape25.geometry = Sphere28;

Transform24.children = new MFNode();

Transform24.children[0] = Shape25;

browser.currentScene.children[5] = Transform24;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.DEF = "TransformAudio3";
Transform29.translation = new SFVec3f(new float[200,50,0]);
let Shape30 = browser.currentScene.createNode("Shape");
let Appearance31 = browser.currentScene.createNode("Appearance");
Appearance31.DEF = "audio_emit3";
let Material32 = browser.currentScene.createNode("Material");
Material32.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material32.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Material32.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Appearance31.material = Material32;

Shape30.appearance = Appearance31;

let Sphere33 = browser.currentScene.createNode("Sphere");
Sphere33.radius = 30;
Shape30.geometry = Sphere33;

Transform29.children = new MFNode();

Transform29.children[0] = Shape30;

browser.currentScene.children[6] = Transform29;

let Transform34 = browser.currentScene.createNode("Transform");
Transform34.DEF = "AnimData";
Transform34.translation = new SFVec3f(new float[0,50,0]);
browser.currentScene.children[7] = Transform34;

let Transform35 = browser.currentScene.createNode("Transform");
Transform35.DEF = "AnimDataBoxH";
Transform35.translation = new SFVec3f(new float[0,100,0]);
browser.currentScene.children[8] = Transform35;

let Transform36 = browser.currentScene.createNode("Transform");
Transform36.DEF = "AnimDataBoxM";
Transform36.translation = new SFVec3f(new float[15,100,0]);
browser.currentScene.children[9] = Transform36;

let Transform37 = browser.currentScene.createNode("Transform");
Transform37.DEF = "AnimDataBoxL";
Transform37.translation = new SFVec3f(new float[30,100,0]);
browser.currentScene.children[10] = Transform37;

let Transform38 = browser.currentScene.createNode("Transform");
Transform38.DEF = "AnimDataBoxMM";
Transform38.translation = new SFVec3f(new float[-15,100,0]);
browser.currentScene.children[11] = Transform38;

let Transform39 = browser.currentScene.createNode("Transform");
Transform39.DEF = "AnimDataBoxLM";
Transform39.translation = new SFVec3f(new float[-30,100,0]);
browser.currentScene.children[12] = Transform39;

let Transform40 = browser.currentScene.createNode("Transform");
let Shape41 = browser.currentScene.createNode("Shape");
let Appearance42 = browser.currentScene.createNode("Appearance");
Appearance42.DEF = "floor";
let Material43 = browser.currentScene.createNode("Material");
Material43.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material43.shininess = 0.8;
Material43.specularColor = new SFColor(new float[0.5,0.6,0.7]);
Appearance42.material = Material43;

Shape41.appearance = Appearance42;

let Cylinder44 = browser.currentScene.createNode("Cylinder");
Cylinder44.radius = 500;
Shape41.geometry = Cylinder44;

Transform40.children = new MFNode();

Transform40.children[0] = Shape41;

browser.currentScene.children[13] = Transform40;

let ListenerPointSource45 = browser.currentScene.createNode("ListenerPointSource");
ListenerPointSource45.trackCurrentView = True;
browser.currentScene.children[14] = ListenerPointSource45;

let StreamAudioDestination46 = browser.currentScene.createNode("StreamAudioDestination");
StreamAudioDestination46.channelCountMode = "MAX";
StreamAudioDestination46.channelInterpretation = "SPEAKERS";
let DynamicsCompressor47 = browser.currentScene.createNode("DynamicsCompressor");
DynamicsCompressor47.channelCountMode = "MAX";
DynamicsCompressor47.channelInterpretation = "SPEAKERS";
let Gain48 = browser.currentScene.createNode("Gain");
Gain48.channelCountMode = "MAX";
Gain48.channelInterpretation = "SPEAKERS";
let SpatialSound49 = browser.currentScene.createNode("SpatialSound");
SpatialSound49.DEF = "Audio1";
SpatialSound49.distanceModel = "INVERSE";
let Gain50 = browser.currentScene.createNode("Gain");
Gain50.channelCountMode = "MAX";
Gain50.channelInterpretation = "SPEAKERS";
let Analyser51 = browser.currentScene.createNode("Analyser");
Analyser51.channelCountMode = "MAX";
Analyser51.channelInterpretation = "SPEAKERS";
let BiquadFilter52 = browser.currentScene.createNode("BiquadFilter");
BiquadFilter52.detune = 50;
BiquadFilter52.frequency = 600;
BiquadFilter52.qualityFactor = 30;
BiquadFilter52.type = "allpass";
BiquadFilter52.channelCountMode = "MAX";
BiquadFilter52.channelInterpretation = "SPEAKERS";
let AudioClip53 = browser.currentScene.createNode("AudioClip");
AudioClip53.description = "Techno beat";
AudioClip53.loop = True;
AudioClip53.url = new MFString(new java.lang.String["sound/techno_beat.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/techno_beat.mp3"]);
BiquadFilter52.children = new MFNode();

BiquadFilter52.children[0] = AudioClip53;

Analyser51.children = new MFNode();

Analyser51.children[0] = BiquadFilter52;

Gain50.children = new MFNode();

Gain50.children[0] = Analyser51;

SpatialSound49.children = new MFNode();

SpatialSound49.children[0] = Gain50;

Gain48.children = new MFNode();

Gain48.children[0] = SpatialSound49;

let SpatialSound54 = browser.currentScene.createNode("SpatialSound");
SpatialSound54.DEF = "Audio2";
SpatialSound54.distanceModel = "INVERSE";
let Gain55 = browser.currentScene.createNode("Gain");
Gain55.channelCountMode = "MAX";
Gain55.channelInterpretation = "SPEAKERS";
let Analyser56 = browser.currentScene.createNode("Analyser");
Analyser56.channelCountMode = "MAX";
Analyser56.channelInterpretation = "SPEAKERS";
let BiquadFilter57 = browser.currentScene.createNode("BiquadFilter");
BiquadFilter57.detune = 15;
BiquadFilter57.frequency = 600;
BiquadFilter57.qualityFactor = 15;
BiquadFilter57.type = "allpass";
BiquadFilter57.channelCountMode = "MAX";
BiquadFilter57.channelInterpretation = "SPEAKERS";
let AudioClip58 = browser.currentScene.createNode("AudioClip");
AudioClip58.description = "Simple beat";
AudioClip58.loop = True;
AudioClip58.url = new MFString(new java.lang.String["sound/beat.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/beat.mp3"]);
BiquadFilter57.children = new MFNode();

BiquadFilter57.children[0] = AudioClip58;

Analyser56.children = new MFNode();

Analyser56.children[0] = BiquadFilter57;

Gain55.children = new MFNode();

Gain55.children[0] = Analyser56;

SpatialSound54.children = new MFNode();

SpatialSound54.children[0] = Gain55;

Gain48.children[1] = SpatialSound54;

let SpatialSound59 = browser.currentScene.createNode("SpatialSound");
SpatialSound59.DEF = "Audio3";
SpatialSound59.distanceModel = "INVERSE";
let Gain60 = browser.currentScene.createNode("Gain");
Gain60.channelCountMode = "MAX";
Gain60.channelInterpretation = "SPEAKERS";
let Analyser61 = browser.currentScene.createNode("Analyser");
Analyser61.channelCountMode = "MAX";
Analyser61.channelInterpretation = "SPEAKERS";
let BiquadFilter62 = browser.currentScene.createNode("BiquadFilter");
BiquadFilter62.frequency = 1000;
BiquadFilter62.qualityFactor = 0;
BiquadFilter62.type = "allpass";
BiquadFilter62.channelCountMode = "MAX";
BiquadFilter62.channelInterpretation = "SPEAKERS";
let AudioClip63 = browser.currentScene.createNode("AudioClip");
AudioClip63.description = "Wobble loop";
AudioClip63.loop = True;
AudioClip63.url = new MFString(new java.lang.String["sound/wobble_loop.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/wobble_loop.mp3"]);
BiquadFilter62.children = new MFNode();

BiquadFilter62.children[0] = AudioClip63;

Analyser61.children = new MFNode();

Analyser61.children[0] = BiquadFilter62;

Gain60.children = new MFNode();

Gain60.children[0] = Analyser61;

SpatialSound59.children = new MFNode();

SpatialSound59.children[0] = Gain60;

Gain48.children[2] = SpatialSound59;

DynamicsCompressor47.children = new MFNode();

DynamicsCompressor47.children[0] = Gain48;

StreamAudioDestination46.children = new MFNode();

StreamAudioDestination46.children[0] = DynamicsCompressor47;

browser.currentScene.children[15] = StreamAudioDestination46;


let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Full";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "AllAudioGraphNodesTest.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Don Brutzman";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "created";
meta5.content = "25 October 2020";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "modified";
meta6.content = "26 November 2021";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "warning";
meta7.content = "Developmental test, no actual 3D model expected";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "identifier";
meta8.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "generator";
meta9.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit";
head1.meta[7] = meta9;

head = head1;

let WorldInfo11 = browser.currentScene.createNode("WorldInfo");
WorldInfo11.title = "AllAudioGraphNodes.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo11;

let Shape12 = browser.currentScene.createNode("Shape");
let Appearance13 = browser.currentScene.createNode("Appearance");
let AcousticProperties14 = browser.currentScene.createNode("AcousticProperties");
AcousticProperties14.description = "Testing of X3D4 nodes demonstrating W3C Audio API in progress";
AcousticProperties14.refraction = 0.5;
AcousticProperties14.diffuse = 0.25;
AcousticProperties14.specular = 1;
Appearance13.acousticProperties = AcousticProperties14;

let Material15 = browser.currentScene.createNode("Material");
Appearance13.material = Material15;

Shape12.appearance = Appearance13;

let Box16 = browser.currentScene.createNode("Box");
Shape12.geometry = Box16;

browser.currentScene.children[1] = Shape12;

let Sound17 = browser.currentScene.createNode("Sound");
Sound17.location = new SFVec3f(new float[0,1.6,0]);
let AudioClip18 = browser.currentScene.createNode("AudioClip");
AudioClip18.description = "testing";
AudioClip18.url = new MFString(new java.lang.String["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"]);
Sound17.source = AudioClip18;

browser.currentScene.children[2] = Sound17;

let Sound19 = browser.currentScene.createNode("Sound");
Sound19.location = new SFVec3f(new float[0,1.6,0]);
let MovieTexture20 = browser.currentScene.createNode("MovieTexture");
MovieTexture20.description = "testing";
MovieTexture20.url = new MFString(new java.lang.String["bogus.mpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg"]);
Sound19.source = MovieTexture20;

browser.currentScene.children[3] = Sound19;

let SpatialSound21 = browser.currentScene.createNode("SpatialSound");
let Analyser22 = browser.currentScene.createNode("Analyser");
let StreamAudioDestination23 = browser.currentScene.createNode("StreamAudioDestination");
let BiquadFilter24 = browser.currentScene.createNode("BiquadFilter");
let ChannelMerger25 = browser.currentScene.createNode("ChannelMerger");
let ChannelSelector26 = browser.currentScene.createNode("ChannelSelector");
let ChannelSplitter27 = browser.currentScene.createNode("ChannelSplitter");
let Convolver28 = browser.currentScene.createNode("Convolver");
let Delay29 = browser.currentScene.createNode("Delay");
let DynamicsCompressor30 = browser.currentScene.createNode("DynamicsCompressor");
let Gain31 = browser.currentScene.createNode("Gain");
let StreamAudioDestination32 = browser.currentScene.createNode("StreamAudioDestination");
let WaveShaper33 = browser.currentScene.createNode("WaveShaper");
let BufferAudioSource34 = browser.currentScene.createNode("BufferAudioSource");
WaveShaper33.children = new MFNode();

WaveShaper33.children[0] = BufferAudioSource34;

let ListenerPointSource35 = browser.currentScene.createNode("ListenerPointSource");
WaveShaper33.children[1] = ListenerPointSource35;

let MicrophoneSource36 = browser.currentScene.createNode("MicrophoneSource");
WaveShaper33.children[2] = MicrophoneSource36;

let OscillatorSource37 = browser.currentScene.createNode("OscillatorSource");
WaveShaper33.children[3] = OscillatorSource37;

let StreamAudioSource38 = browser.currentScene.createNode("StreamAudioSource");
WaveShaper33.children[4] = StreamAudioSource38;

StreamAudioDestination32.children = new MFNode();

StreamAudioDestination32.children[0] = WaveShaper33;

Gain31.children = new MFNode();

Gain31.children[0] = StreamAudioDestination32;

DynamicsCompressor30.children = new MFNode();

DynamicsCompressor30.children[0] = Gain31;

Delay29.children = new MFNode();

Delay29.children[0] = DynamicsCompressor30;

Convolver28.children = new MFNode();

Convolver28.children[0] = Delay29;

ChannelSplitter27.outputs = new MFNode();

ChannelSplitter27.outputs[0] = Convolver28;

ChannelSelector26.children = new MFNode();

ChannelSelector26.children[0] = ChannelSplitter27;

ChannelMerger25.children = new MFNode();

ChannelMerger25.children[0] = ChannelSelector26;

BiquadFilter24.children = new MFNode();

BiquadFilter24.children[0] = ChannelMerger25;

StreamAudioDestination23.children = new MFNode();

StreamAudioDestination23.children[0] = BiquadFilter24;

Analyser22.children = new MFNode();

Analyser22.children[0] = StreamAudioDestination23;

SpatialSound21.children = new MFNode();

SpatialSound21.children[0] = Analyser22;

browser.currentScene.children[4] = SpatialSound21;


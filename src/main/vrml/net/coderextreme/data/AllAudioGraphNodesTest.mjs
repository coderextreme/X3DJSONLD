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

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "license";
meta10.content = "../license.html";
head1.meta[8] = meta10;

head = head1;

let WorldInfo12 = browser.currentScene.createNode("WorldInfo");
WorldInfo12.title = "AllAudioGraphNodes.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo12;

let Shape13 = browser.currentScene.createNode("Shape");
let Box14 = browser.currentScene.createNode("Box");
Shape13.geometry = Box14;

let Appearance15 = browser.currentScene.createNode("Appearance");
let AcousticProperties16 = browser.currentScene.createNode("AcousticProperties");
AcousticProperties16.description = "Testing of X3D4 nodes demonstrating W3C Audio API in progress";
AcousticProperties16.diffuse = 0.25;
AcousticProperties16.refraction = 0.5;
AcousticProperties16.specular = 1;
Appearance15.acousticProperties = AcousticProperties16;

let Material17 = browser.currentScene.createNode("Material");
Appearance15.material = Material17;

Shape13.appearance = Appearance15;

browser.currentScene.children[1] = Shape13;

let Sound18 = browser.currentScene.createNode("Sound");
Sound18.location = new SFVec3f(new float[0,1.6,0]);
let AudioClip19 = browser.currentScene.createNode("AudioClip");
AudioClip19.description = "testing";
AudioClip19.url = new MFString(new java.lang.String["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"]);
Sound18.source = AudioClip19;

browser.currentScene.children[2] = Sound18;

let Sound20 = browser.currentScene.createNode("Sound");
Sound20.location = new SFVec3f(new float[0,1.6,0]);
let MovieTexture21 = browser.currentScene.createNode("MovieTexture");
MovieTexture21.description = "testing";
MovieTexture21.url = new MFString(new java.lang.String["bogus.mpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg"]);
Sound20.source = MovieTexture21;

browser.currentScene.children[3] = Sound20;

let SpatialSound22 = browser.currentScene.createNode("SpatialSound");
SpatialSound22.distanceModel = "INVERSE";
let Analyser23 = browser.currentScene.createNode("Analyser");
Analyser23.channelCountMode = "MAX";
Analyser23.channelInterpretation = "SPEAKERS";
let StreamAudioDestination24 = browser.currentScene.createNode("StreamAudioDestination");
StreamAudioDestination24.channelCountMode = "MAX";
StreamAudioDestination24.channelInterpretation = "SPEAKERS";
let BiquadFilter25 = browser.currentScene.createNode("BiquadFilter");
BiquadFilter25.channelCountMode = "MAX";
BiquadFilter25.channelInterpretation = "SPEAKERS";
BiquadFilter25.type = "LOWPASS";
let ChannelMerger26 = browser.currentScene.createNode("ChannelMerger");
ChannelMerger26.channelCountMode = "MAX";
ChannelMerger26.channelInterpretation = "SPEAKERS";
let ChannelSelector27 = browser.currentScene.createNode("ChannelSelector");
ChannelSelector27.channelCountMode = "MAX";
ChannelSelector27.channelInterpretation = "SPEAKERS";
let ChannelSplitter28 = browser.currentScene.createNode("ChannelSplitter");
ChannelSplitter28.channelCountMode = "MAX";
ChannelSplitter28.channelInterpretation = "SPEAKERS";
let Convolver29 = browser.currentScene.createNode("Convolver");
Convolver29.channelCountMode = "MAX";
Convolver29.channelInterpretation = "SPEAKERS";
let Delay30 = browser.currentScene.createNode("Delay");
Delay30.channelCountMode = "MAX";
Delay30.channelInterpretation = "SPEAKERS";
let DynamicsCompressor31 = browser.currentScene.createNode("DynamicsCompressor");
DynamicsCompressor31.channelCountMode = "MAX";
DynamicsCompressor31.channelInterpretation = "SPEAKERS";
let Gain32 = browser.currentScene.createNode("Gain");
Gain32.channelCountMode = "MAX";
Gain32.channelInterpretation = "SPEAKERS";
let StreamAudioDestination33 = browser.currentScene.createNode("StreamAudioDestination");
StreamAudioDestination33.channelCountMode = "MAX";
StreamAudioDestination33.channelInterpretation = "SPEAKERS";
let WaveShaper34 = browser.currentScene.createNode("WaveShaper");
WaveShaper34.channelCountMode = "MAX";
WaveShaper34.channelInterpretation = "SPEAKERS";
//The following X3DSoundSourceNode nodes have no audio-graph children
let BufferAudioSource35 = browser.currentScene.createNode("BufferAudioSource");
BufferAudioSource35.channelCountMode = "MAX";
BufferAudioSource35.channelInterpretation = "SPEAKERS";
WaveShaper34.children = new MFNode();

WaveShaper34.children[0] = BufferAudioSource35;

let ListenerPointSource36 = browser.currentScene.createNode("ListenerPointSource");
WaveShaper34.children[1] = ListenerPointSource36;

let MicrophoneSource37 = browser.currentScene.createNode("MicrophoneSource");
WaveShaper34.children[2] = MicrophoneSource37;

let OscillatorSource38 = browser.currentScene.createNode("OscillatorSource");
OscillatorSource38.frequency = 440;
WaveShaper34.children[3] = OscillatorSource38;

let StreamAudioSource39 = browser.currentScene.createNode("StreamAudioSource");
StreamAudioSource39.channelCountMode = "MAX";
StreamAudioSource39.channelInterpretation = "SPEAKERS";
WaveShaper34.children[4] = StreamAudioSource39;

StreamAudioDestination33.children = new MFNode();

StreamAudioDestination33.children[0] = WaveShaper34;

Gain32.children = new MFNode();

Gain32.children[0] = StreamAudioDestination33;

DynamicsCompressor31.children = new MFNode();

DynamicsCompressor31.children[0] = Gain32;

Delay30.children = new MFNode();

Delay30.children[0] = DynamicsCompressor31;

Convolver29.children = new MFNode();

Convolver29.children[0] = Delay30;

ChannelSplitter28.outputs = new MFNode();

ChannelSplitter28.outputs[0] = Convolver29;

ChannelSelector27.children = new MFNode();

ChannelSelector27.children[0] = ChannelSplitter28;

ChannelMerger26.children = new MFNode();

ChannelMerger26.children[0] = ChannelSelector27;

BiquadFilter25.children = new MFNode();

BiquadFilter25.children[0] = ChannelMerger26;

StreamAudioDestination24.children = new MFNode();

StreamAudioDestination24.children[0] = BiquadFilter25;

Analyser23.children = new MFNode();

Analyser23.children[0] = StreamAudioDestination24;

SpatialSound22.children = new MFNode();

SpatialSound22.children[0] = Analyser23;

browser.currentScene.children[4] = SpatialSound22;


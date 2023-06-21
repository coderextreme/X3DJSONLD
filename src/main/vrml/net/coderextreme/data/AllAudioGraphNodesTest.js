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
meta6.content = "4 August 2021";
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
meta9.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
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
Appearance15.acousticProperties = AcousticProperties16;

let Material17 = browser.currentScene.createNode("Material");
Appearance15.material = Material17;

Shape13.appearance = Appearance15;

browser.currentScene.children[1] = Shape13;

let SpatialSound18 = browser.currentScene.createNode("SpatialSound");
SpatialSound18.distanceModel = "INVERSE";
SpatialSound18.dopplerEnabled = "false";
let Analyser19 = browser.currentScene.createNode("Analyser");
Analyser19.channelCountMode = "MAX";
Analyser19.channelInterpretation = "SPEAKERS";
let AudioDestination20 = browser.currentScene.createNode("AudioDestination");
AudioDestination20.channelCountMode = "MAX";
AudioDestination20.channelInterpretation = "SPEAKERS";
let BiquadFilter21 = browser.currentScene.createNode("BiquadFilter");
BiquadFilter21.channelCountMode = "MAX";
BiquadFilter21.channelInterpretation = "SPEAKERS";
BiquadFilter21.type = "LOWPASS";
let ChannelMerger22 = browser.currentScene.createNode("ChannelMerger");
ChannelMerger22.channelCountMode = "MAX";
ChannelMerger22.channelInterpretation = "SPEAKERS";
let ChannelSelector23 = browser.currentScene.createNode("ChannelSelector");
ChannelSelector23.channelCountMode = "MAX";
ChannelSelector23.channelInterpretation = "SPEAKERS";
let ChannelSplitter24 = browser.currentScene.createNode("ChannelSplitter");
ChannelSplitter24.channelCountMode = "MAX";
ChannelSplitter24.channelInterpretation = "SPEAKERS";
let Convolver25 = browser.currentScene.createNode("Convolver");
Convolver25.channelCountMode = "MAX";
Convolver25.channelInterpretation = "SPEAKERS";
let Delay26 = browser.currentScene.createNode("Delay");
Delay26.channelCountMode = "MAX";
Delay26.channelInterpretation = "SPEAKERS";
let DynamicsCompressor27 = browser.currentScene.createNode("DynamicsCompressor");
DynamicsCompressor27.channelCountMode = "MAX";
DynamicsCompressor27.channelInterpretation = "SPEAKERS";
let Gain28 = browser.currentScene.createNode("Gain");
Gain28.channelCountMode = "MAX";
Gain28.channelInterpretation = "SPEAKERS";
let StreamAudioDestination29 = browser.currentScene.createNode("StreamAudioDestination");
StreamAudioDestination29.channelCountMode = "MAX";
StreamAudioDestination29.channelInterpretation = "SPEAKERS";
let WaveShaper30 = browser.currentScene.createNode("WaveShaper");
WaveShaper30.channelCountMode = "MAX";
WaveShaper30.channelInterpretation = "SPEAKERS";
//The following X3DSoundSourceNode nodes have no audio-graph children
let BufferAudioSource31 = browser.currentScene.createNode("BufferAudioSource");
BufferAudioSource31.channelCountMode = "MAX";
BufferAudioSource31.channelInterpretation = "SPEAKERS";
WaveShaper30.children = new MFNode();

WaveShaper30.children[0] = BufferAudioSource31;

let ListenerPointSource32 = browser.currentScene.createNode("ListenerPointSource");
ListenerPointSource32.dopplerEnabled = "false";
WaveShaper30.children[1] = ListenerPointSource32;

let MicrophoneSource33 = browser.currentScene.createNode("MicrophoneSource");
WaveShaper30.children[2] = MicrophoneSource33;

let OscillatorSource34 = browser.currentScene.createNode("OscillatorSource");
OscillatorSource34.frequency = 440;
WaveShaper30.children[3] = OscillatorSource34;

let StreamAudioSource35 = browser.currentScene.createNode("StreamAudioSource");
StreamAudioSource35.channelCountMode = "MAX";
StreamAudioSource35.channelInterpretation = "SPEAKERS";
WaveShaper30.children[4] = StreamAudioSource35;

StreamAudioDestination29.children = new MFNode();

StreamAudioDestination29.children[0] = WaveShaper30;

Gain28.children = new MFNode();

Gain28.children[0] = StreamAudioDestination29;

DynamicsCompressor27.children = new MFNode();

DynamicsCompressor27.children[0] = Gain28;

Delay26.children = new MFNode();

Delay26.children[0] = DynamicsCompressor27;

Convolver25.children = new MFNode();

Convolver25.children[0] = Delay26;

ChannelSplitter24.outputs = new MFNode();

ChannelSplitter24.outputs[0] = Convolver25;

ChannelSelector23.children = new MFNode();

ChannelSelector23.children[0] = ChannelSplitter24;

ChannelMerger22.children = new MFNode();

ChannelMerger22.children[0] = ChannelSelector23;

BiquadFilter21.children = new MFNode();

BiquadFilter21.children[0] = ChannelMerger22;

AudioDestination20.children = new MFNode();

AudioDestination20.children[0] = BiquadFilter21;

Analyser19.children = new MFNode();

Analyser19.children[0] = AudioDestination20;

SpatialSound18.children = new MFNode();

SpatialSound18.children[0] = Analyser19;

browser.currentScene.children[2] = SpatialSound18;

let Sound36 = browser.currentScene.createNode("Sound");
Sound36.location = new SFVec3f(new float[0,1.6,0]);
let AudioClip37 = browser.currentScene.createNode("AudioClip");
AudioClip37.description = "testing";
AudioClip37.url = new MFString(new java.lang.String["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"]);
Sound36.source = AudioClip37;

browser.currentScene.children[3] = Sound36;

let Sound38 = browser.currentScene.createNode("Sound");
Sound38.location = new SFVec3f(new float[0,1.6,0]);
let MovieTexture39 = browser.currentScene.createNode("MovieTexture");
MovieTexture39.description = "testing";
MovieTexture39.url = new MFString(new java.lang.String["bogus.mpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg"]);
Sound38.source = MovieTexture39;

browser.currentScene.children[4] = Sound38;


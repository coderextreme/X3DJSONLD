let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Full";
X3D0.version = "4.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "AllAudioGraphNodes.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Shape3 = browser.currentScene.createNode("Shape");
let Box4 = browser.currentScene.createNode("Box");
Shape3.geometry = Box4;

let Appearance5 = browser.currentScene.createNode("Appearance");
let AcousticProperties6 = browser.currentScene.createNode("AcousticProperties");
Appearance5.acousticProperties = AcousticProperties6;

let Material7 = browser.currentScene.createNode("Material");
Appearance5.material = Material7;

Shape3.appearance = Appearance5;

browser.currentScene.children[1] = Shape3;

let SpatialSound8 = browser.currentScene.createNode("SpatialSound");
let Analyser9 = browser.currentScene.createNode("Analyser");
let AudioDestination10 = browser.currentScene.createNode("AudioDestination");
let BiquadFilter11 = browser.currentScene.createNode("BiquadFilter");
let ChannelMerger12 = browser.currentScene.createNode("ChannelMerger");
let ChannelSelector13 = browser.currentScene.createNode("ChannelSelector");
let ChannelSplitter14 = browser.currentScene.createNode("ChannelSplitter");
let Convolver15 = browser.currentScene.createNode("Convolver");
let Delay16 = browser.currentScene.createNode("Delay");
let DynamicsCompressor17 = browser.currentScene.createNode("DynamicsCompressor");
let Gain18 = browser.currentScene.createNode("Gain");
let StreamAudioDestination19 = browser.currentScene.createNode("StreamAudioDestination");
let WaveShaper20 = browser.currentScene.createNode("WaveShaper");
//The following X3DSoundSourceNode nodes have no audio-graph children
let BufferAudioSource21 = browser.currentScene.createNode("BufferAudioSource");
WaveShaper20.children = new MFNode();

WaveShaper20.children[0] = BufferAudioSource21;

let ListenerPointSource22 = browser.currentScene.createNode("ListenerPointSource");
WaveShaper20.children[1] = ListenerPointSource22;

let MicrophoneSource23 = browser.currentScene.createNode("MicrophoneSource");
WaveShaper20.children[2] = MicrophoneSource23;

let OscillatorSource24 = browser.currentScene.createNode("OscillatorSource");
WaveShaper20.children[3] = OscillatorSource24;

let StreamAudioSource25 = browser.currentScene.createNode("StreamAudioSource");
WaveShaper20.children[4] = StreamAudioSource25;

StreamAudioDestination19.children = new MFNode();

StreamAudioDestination19.children[0] = WaveShaper20;

Gain18.children = new MFNode();

Gain18.children[0] = StreamAudioDestination19;

DynamicsCompressor17.children = new MFNode();

DynamicsCompressor17.children[0] = Gain18;

Delay16.children = new MFNode();

Delay16.children[0] = DynamicsCompressor17;

Convolver15.children = new MFNode();

Convolver15.children[0] = Delay16;

ChannelSplitter14.outputs = new MFNode();

ChannelSplitter14.outputs[0] = Convolver15;

ChannelSelector13.children = new MFNode();

ChannelSelector13.children[0] = ChannelSplitter14;

ChannelMerger12.children = new MFNode();

ChannelMerger12.children[0] = ChannelSelector13;

BiquadFilter11.children = new MFNode();

BiquadFilter11.children[0] = ChannelMerger12;

AudioDestination10.children = new MFNode();

AudioDestination10.children[0] = BiquadFilter11;

Analyser9.children = new MFNode();

Analyser9.children[0] = AudioDestination10;

SpatialSound8.children = new MFNode();

SpatialSound8.children[0] = Analyser9;

browser.currentScene.children[2] = SpatialSound8;

let Sound26 = browser.currentScene.createNode("Sound");
Sound26.location = new SFVec3f(new float[0,1.6,0]);
let AudioClip27 = browser.currentScene.createNode("AudioClip");
AudioClip27.description = "testing";
AudioClip27.url = new MFString(new java.lang.String["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"]);
Sound26.source = AudioClip27;

browser.currentScene.children[3] = Sound26;

let Sound28 = browser.currentScene.createNode("Sound");
Sound28.location = new SFVec3f(new float[0,1.6,0]);
let MovieTexture29 = browser.currentScene.createNode("MovieTexture");
MovieTexture29.description = "testing";
MovieTexture29.url = new MFString(new java.lang.String["bogus.mpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg"]);
Sound28.source = MovieTexture29;

browser.currentScene.children[4] = Sound28;


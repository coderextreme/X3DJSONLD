#include "/c/x3d-code/www.web3d.org/x3d/languages/c/X3DLib/X3DLib.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "AllAudioGraphNodesTest.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Don Brutzman";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "created";
meta5.content = "25 October 2020";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "4 August 2021";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "warning";
meta7.content = "Developmental test, no actual 3D model expected";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "identifier";
meta8.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "generator";
meta9.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "license";
meta10.content = "../license.html";
head1.meta[8] = meta10;

head = head1;

WorldInfo WorldInfo12 = createNode("WorldInfo");
WorldInfo12.title = "AllAudioGraphNodes.x3d";
children = new MFNode();

children[0] = WorldInfo12;

Shape Shape13 = createNode("Shape");
Box Box14 = createNode("Box");
Shape13.geometry = Box14;

Appearance Appearance15 = createNode("Appearance");
AcousticProperties AcousticProperties16 = createNode("AcousticProperties");
Appearance15.acousticProperties = AcousticProperties16;

Material Material17 = createNode("Material");
Appearance15.material = Material17;

Shape13.appearance = Appearance15;

children[1] = Shape13;

SpatialSound SpatialSound18 = createNode("SpatialSound");
SpatialSound18.distanceModel = "INVERSE";
SpatialSound18.dopplerEnabled = "false";
Analyser Analyser19 = createNode("Analyser");
Analyser19.channelCountMode = "MAX";
Analyser19.channelInterpretation = "SPEAKERS";
AudioDestination AudioDestination20 = createNode("AudioDestination");
AudioDestination20.channelCountMode = "MAX";
AudioDestination20.channelInterpretation = "SPEAKERS";
BiquadFilter BiquadFilter21 = createNode("BiquadFilter");
BiquadFilter21.channelCountMode = "MAX";
BiquadFilter21.channelInterpretation = "SPEAKERS";
BiquadFilter21.type = "LOWPASS";
ChannelMerger ChannelMerger22 = createNode("ChannelMerger");
ChannelMerger22.channelCountMode = "MAX";
ChannelMerger22.channelInterpretation = "SPEAKERS";
ChannelSelector ChannelSelector23 = createNode("ChannelSelector");
ChannelSelector23.channelCountMode = "MAX";
ChannelSelector23.channelInterpretation = "SPEAKERS";
ChannelSplitter ChannelSplitter24 = createNode("ChannelSplitter");
ChannelSplitter24.channelCountMode = "MAX";
ChannelSplitter24.channelInterpretation = "SPEAKERS";
Convolver Convolver25 = createNode("Convolver");
Convolver25.channelCountMode = "MAX";
Convolver25.channelInterpretation = "SPEAKERS";
Delay Delay26 = createNode("Delay");
Delay26.channelCountMode = "MAX";
Delay26.channelInterpretation = "SPEAKERS";
DynamicsCompressor DynamicsCompressor27 = createNode("DynamicsCompressor");
DynamicsCompressor27.channelCountMode = "MAX";
DynamicsCompressor27.channelInterpretation = "SPEAKERS";
Gain Gain28 = createNode("Gain");
Gain28.channelCountMode = "MAX";
Gain28.channelInterpretation = "SPEAKERS";
StreamAudioDestination StreamAudioDestination29 = createNode("StreamAudioDestination");
StreamAudioDestination29.channelCountMode = "MAX";
StreamAudioDestination29.channelInterpretation = "SPEAKERS";
WaveShaper WaveShaper30 = createNode("WaveShaper");
WaveShaper30.channelCountMode = "MAX";
WaveShaper30.channelInterpretation = "SPEAKERS";
//The following X3DSoundSourceNode nodes have no audio-graph children
BufferAudioSource BufferAudioSource31 = createNode("BufferAudioSource");
BufferAudioSource31.channelCountMode = "MAX";
BufferAudioSource31.channelInterpretation = "SPEAKERS";
WaveShaper30.children = new MFNode();

WaveShaper30.children[0] = BufferAudioSource31;

ListenerPointSource ListenerPointSource32 = createNode("ListenerPointSource");
ListenerPointSource32.dopplerEnabled = "false";
WaveShaper30.children[1] = ListenerPointSource32;

MicrophoneSource MicrophoneSource33 = createNode("MicrophoneSource");
WaveShaper30.children[2] = MicrophoneSource33;

OscillatorSource OscillatorSource34 = createNode("OscillatorSource");
OscillatorSource34.frequency = 440;
WaveShaper30.children[3] = OscillatorSource34;

StreamAudioSource StreamAudioSource35 = createNode("StreamAudioSource");
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

children[2] = SpatialSound18;

Sound Sound36 = createNode("Sound");
Sound36.location = new SFVec3f(new float[0,1.6,0]);
AudioClip AudioClip37 = createNode("AudioClip");
AudioClip37.description = "testing";
AudioClip37.url = new MFString(new java.lang.String["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"]);
Sound36.source = AudioClip37;

children[3] = Sound36;

Sound Sound38 = createNode("Sound");
Sound38.location = new SFVec3f(new float[0,1.6,0]);
MovieTexture MovieTexture39 = createNode("MovieTexture");
MovieTexture39.description = "testing";
MovieTexture39.url = new MFString(new java.lang.String["bogus.mpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg"]);
Sound38.source = MovieTexture39;

children[4] = Sound38;

}

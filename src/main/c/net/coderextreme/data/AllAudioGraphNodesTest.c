#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
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
meta6.content = "26 November 2021";
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
meta9.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit";
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
AcousticProperties16.description = "Testing of X3D4 nodes demonstrating W3C Audio API in progress";
AcousticProperties16.diffuse = 0.25;
AcousticProperties16.refraction = 0.5;
AcousticProperties16.specular = 1;
Appearance15.acousticProperties = AcousticProperties16;

Material Material17 = createNode("Material");
Appearance15.material = Material17;

Shape13.appearance = Appearance15;

children[1] = Shape13;

Sound Sound18 = createNode("Sound");
Sound18.location = new SFVec3f(new float[0,1.6,0]);
AudioClip AudioClip19 = createNode("AudioClip");
AudioClip19.description = "testing";
AudioClip19.url = new MFString(new java.lang.String["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"]);
Sound18.source = AudioClip19;

children[2] = Sound18;

Sound Sound20 = createNode("Sound");
Sound20.location = new SFVec3f(new float[0,1.6,0]);
MovieTexture MovieTexture21 = createNode("MovieTexture");
MovieTexture21.description = "testing";
MovieTexture21.url = new MFString(new java.lang.String["bogus.mpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg"]);
Sound20.source = MovieTexture21;

children[3] = Sound20;

SpatialSound SpatialSound22 = createNode("SpatialSound");
SpatialSound22.distanceModel = "INVERSE";
Analyser Analyser23 = createNode("Analyser");
Analyser23.channelCountMode = "MAX";
Analyser23.channelInterpretation = "SPEAKERS";
StreamAudioDestination StreamAudioDestination24 = createNode("StreamAudioDestination");
StreamAudioDestination24.channelCountMode = "MAX";
StreamAudioDestination24.channelInterpretation = "SPEAKERS";
BiquadFilter BiquadFilter25 = createNode("BiquadFilter");
BiquadFilter25.channelCountMode = "MAX";
BiquadFilter25.channelInterpretation = "SPEAKERS";
BiquadFilter25.type = "LOWPASS";
ChannelMerger ChannelMerger26 = createNode("ChannelMerger");
ChannelMerger26.channelCountMode = "MAX";
ChannelMerger26.channelInterpretation = "SPEAKERS";
ChannelSelector ChannelSelector27 = createNode("ChannelSelector");
ChannelSelector27.channelCountMode = "MAX";
ChannelSelector27.channelInterpretation = "SPEAKERS";
ChannelSplitter ChannelSplitter28 = createNode("ChannelSplitter");
ChannelSplitter28.channelCountMode = "MAX";
ChannelSplitter28.channelInterpretation = "SPEAKERS";
Convolver Convolver29 = createNode("Convolver");
Convolver29.channelCountMode = "MAX";
Convolver29.channelInterpretation = "SPEAKERS";
Delay Delay30 = createNode("Delay");
Delay30.channelCountMode = "MAX";
Delay30.channelInterpretation = "SPEAKERS";
DynamicsCompressor DynamicsCompressor31 = createNode("DynamicsCompressor");
DynamicsCompressor31.channelCountMode = "MAX";
DynamicsCompressor31.channelInterpretation = "SPEAKERS";
Gain Gain32 = createNode("Gain");
Gain32.channelCountMode = "MAX";
Gain32.channelInterpretation = "SPEAKERS";
StreamAudioDestination StreamAudioDestination33 = createNode("StreamAudioDestination");
StreamAudioDestination33.channelCountMode = "MAX";
StreamAudioDestination33.channelInterpretation = "SPEAKERS";
WaveShaper WaveShaper34 = createNode("WaveShaper");
WaveShaper34.channelCountMode = "MAX";
WaveShaper34.channelInterpretation = "SPEAKERS";
//The following X3DSoundSourceNode nodes have no audio-graph children
BufferAudioSource BufferAudioSource35 = createNode("BufferAudioSource");
BufferAudioSource35.channelCountMode = "MAX";
BufferAudioSource35.channelInterpretation = "SPEAKERS";
WaveShaper34.children = new MFNode();

WaveShaper34.children[0] = BufferAudioSource35;

ListenerPointSource ListenerPointSource36 = createNode("ListenerPointSource");
WaveShaper34.children[1] = ListenerPointSource36;

MicrophoneSource MicrophoneSource37 = createNode("MicrophoneSource");
WaveShaper34.children[2] = MicrophoneSource37;

OscillatorSource OscillatorSource38 = createNode("OscillatorSource");
OscillatorSource38.frequency = 440;
WaveShaper34.children[3] = OscillatorSource38;

StreamAudioSource StreamAudioSource39 = createNode("StreamAudioSource");
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

children[4] = SpatialSound22;

}

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

head = head1;

WorldInfo WorldInfo11 = createNode("WorldInfo");
WorldInfo11.title = "AllAudioGraphNodes.x3d";
children = new MFNode();

children[0] = WorldInfo11;

Shape Shape12 = createNode("Shape");
Appearance Appearance13 = createNode("Appearance");
AcousticProperties AcousticProperties14 = createNode("AcousticProperties");
AcousticProperties14.description = "Testing of X3D4 nodes demonstrating W3C Audio API in progress";
AcousticProperties14.refraction = 0.5;
AcousticProperties14.diffuse = 0.25;
AcousticProperties14.specular = 1;
Appearance13.acousticProperties = AcousticProperties14;

Material Material15 = createNode("Material");
Appearance13.material = Material15;

Shape12.appearance = Appearance13;

Box Box16 = createNode("Box");
Shape12.geometry = Box16;

children[1] = Shape12;

Sound Sound17 = createNode("Sound");
Sound17.location = new SFVec3f(new float[0,1.6,0]);
AudioClip AudioClip18 = createNode("AudioClip");
AudioClip18.description = "testing";
AudioClip18.url = new MFString(new java.lang.String["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"]);
Sound17.source = AudioClip18;

children[2] = Sound17;

Sound Sound19 = createNode("Sound");
Sound19.location = new SFVec3f(new float[0,1.6,0]);
MovieTexture MovieTexture20 = createNode("MovieTexture");
MovieTexture20.description = "testing";
MovieTexture20.url = new MFString(new java.lang.String["bogus.mpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg"]);
Sound19.source = MovieTexture20;

children[3] = Sound19;

SpatialSound SpatialSound21 = createNode("SpatialSound");
Analyser Analyser22 = createNode("Analyser");
StreamAudioDestination StreamAudioDestination23 = createNode("StreamAudioDestination");
BiquadFilter BiquadFilter24 = createNode("BiquadFilter");
ChannelMerger ChannelMerger25 = createNode("ChannelMerger");
ChannelSelector ChannelSelector26 = createNode("ChannelSelector");
ChannelSplitter ChannelSplitter27 = createNode("ChannelSplitter");
Convolver Convolver28 = createNode("Convolver");
Delay Delay29 = createNode("Delay");
DynamicsCompressor DynamicsCompressor30 = createNode("DynamicsCompressor");
Gain Gain31 = createNode("Gain");
StreamAudioDestination StreamAudioDestination32 = createNode("StreamAudioDestination");
WaveShaper WaveShaper33 = createNode("WaveShaper");
BufferAudioSource BufferAudioSource34 = createNode("BufferAudioSource");
WaveShaper33.children = new MFNode();

WaveShaper33.children[0] = BufferAudioSource34;

ListenerPointSource ListenerPointSource35 = createNode("ListenerPointSource");
WaveShaper33.children[1] = ListenerPointSource35;

MicrophoneSource MicrophoneSource36 = createNode("MicrophoneSource");
WaveShaper33.children[2] = MicrophoneSource36;

OscillatorSource OscillatorSource37 = createNode("OscillatorSource");
WaveShaper33.children[3] = OscillatorSource37;

StreamAudioSource StreamAudioSource38 = createNode("StreamAudioSource");
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

children[4] = SpatialSound21;

}

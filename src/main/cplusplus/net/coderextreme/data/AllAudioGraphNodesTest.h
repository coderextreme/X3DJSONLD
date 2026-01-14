//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("Sound"));
component2.setLevel(3);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("title"));
meta3.setContent(CString("AllAudioGraphNodesTest.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Don Brutzman"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("created"));
meta6.setContent(CString("25 October 2020"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Mon, 15 Sep 2025 05:18:43 GMT"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("warning"));
meta8.setContent(CString("Developmental test, no actual 3D model expected"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("identifier"));
meta9.setContent(CString("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d"));
head1.addMeta(&meta9);

X3D0.setHead(&head1);

Scene& Scene10 =  Scene();
WorldInfo& WorldInfo11 =  WorldInfo();
WorldInfo11.setTitle(CString("AllAudioGraphNodesTest.x3d"));
Scene10.addChild(&WorldInfo11);

Shape& Shape12 =  Shape();
Appearance& Appearance13 =  Appearance();
AcousticProperties& AcousticProperties14 =  AcousticProperties();
AcousticProperties14.setDescription(CString("Testing of X3D4 nodes demonstrating W3C Audio API in progress"));
AcousticProperties14.setDiffuse(0.25);
AcousticProperties14.setSpecular(1);
AcousticProperties14.setRefraction(0.5);
Appearance13.setAcousticProperties(AcousticProperties14);

Material& Material15 =  Material();
Appearance13.addChild(&Material15);

Shape12.addChild(&Appearance13);

Box& Box16 =  Box();
Shape12.setGeometry(&Box16);

Scene10.addChild(&Shape12);

Sound& Sound17 =  Sound();
Sound17.setLocation(new float[]{0.0,1.6,0.0});
AudioClip& AudioClip18 =  AudioClip();
AudioClip18.setDescription(CString("testing"));
AudioClip18.setUrl(new CString[]{CString("sound/saxophone.mp3"), CString("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3")}, 2);
Sound17.setSource(AudioClip18);

Scene10.addChild(&Sound17);

Sound& Sound19 =  Sound();
Sound19.setLocation(new float[]{0.0,1.6,0.0});
MovieTexture& MovieTexture20 =  MovieTexture();
MovieTexture20.setDescription(CString("testing"));
MovieTexture20.setUrl(new CString[]{CString("bogus.mpg"), CString("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg")}, 2);
Sound19.setSource(MovieTexture20);

Scene10.addChild(&Sound19);

SpatialSound& SpatialSound21 =  SpatialSound();
Analyser& Analyser22 =  Analyser();
StreamAudioDestination& StreamAudioDestination23 =  StreamAudioDestination();
BiquadFilter& BiquadFilter24 =  BiquadFilter();
ChannelMerger& ChannelMerger25 =  ChannelMerger();
ChannelSelector& ChannelSelector26 =  ChannelSelector();
ChannelSplitter& ChannelSplitter27 =  ChannelSplitter();
Convolver& Convolver28 =  Convolver();
Delay& Delay29 =  Delay();
DynamicsCompressor& DynamicsCompressor30 =  DynamicsCompressor();
Gain& Gain31 =  Gain();
StreamAudioDestination& StreamAudioDestination32 =  StreamAudioDestination();
WaveShaper& WaveShaper33 =  WaveShaper();
BufferAudioSource& BufferAudioSource34 =  BufferAudioSource();
WaveShaper33.addChildren(BufferAudioSource34);

ListenerPointSource& ListenerPointSource35 =  ListenerPointSource();
WaveShaper33.addChildren(ListenerPointSource35);

MicrophoneSource& MicrophoneSource36 =  MicrophoneSource();
WaveShaper33.addChildren(MicrophoneSource36);

OscillatorSource& OscillatorSource37 =  OscillatorSource();
WaveShaper33.addChildren(OscillatorSource37);

StreamAudioSource& StreamAudioSource38 =  StreamAudioSource();
WaveShaper33.addChildren(StreamAudioSource38);

StreamAudioDestination32.addChildren(WaveShaper33);

Gain31.addChildren(StreamAudioDestination32);

DynamicsCompressor30.addChildren(Gain31);

Delay29.addChildren(DynamicsCompressor30);

Convolver28.addChildren(Delay29);

ChannelSplitter27.addOutputs(Convolver28);

ChannelSelector26.addChildren(ChannelSplitter27);

ChannelMerger25.addChildren(ChannelSelector26);

BiquadFilter24.addChildren(ChannelMerger25);

StreamAudioDestination23.addChildren(BiquadFilter24);

Analyser22.addChildren(StreamAudioDestination23);

SpatialSound21.addChildren(Analyser22);

Scene10.addChild(&SpatialSound21);

X3D0.setScene(&Scene10);

//}

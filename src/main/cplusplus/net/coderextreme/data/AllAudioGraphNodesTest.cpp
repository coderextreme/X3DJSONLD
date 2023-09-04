/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/stylesheets/cpp/concretes.h"
int main(int argc, char ** argv) {
CX3DScene m_pScene;
CBrowser browser = X3D.getBrowser();
CX3D* X3D0 = new CX3D();
CGroup* group = (CGroup*)(m_pScene.createNode("Group"));
group->addChildren(X3D0);
X3D0->setProfile("Full");
X3D0->setVersion("4.0");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("AllAudioGraphNodesTest.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Don Brutzman");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("created");
meta5->setContent("25 October 2020");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("26 November 2021");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("warning");
meta7->setContent("Developmental test, no actual 3D model expected");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("identifier");
meta8->setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("generator");
meta9->setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta9);

X3D0->setHead(*head1);

CScene* Scene10 = new CScene();
CWorldInfo* WorldInfo11 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo11->setTitle("AllAudioGraphNodes.x3d");
group->addChildren(*WorldInfo11);

CShape* Shape12 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance13 = (CAppearance *)(m_pScene.createNode("Appearance"));
CAcousticProperties* AcousticProperties14 = (CAcousticProperties *)(m_pScene.createNode("AcousticProperties"));
AcousticProperties14->setDescription("Testing of X3D4 nodes demonstrating W3C Audio API in progress");
AcousticProperties14->setRefraction(0.5);
AcousticProperties14->setDiffuse(0.25);
AcousticProperties14->setSpecular(1);
Appearance13->setAcousticProperties(*AcousticProperties14);

CMaterial* Material15 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance13->setMaterial(*Material15);

Shape12->setAppearance(*Appearance13);

CBox* Box16 = (CBox *)(m_pScene.createNode("Box"));
Shape12->setGeometry(Box16);

group->addChildren(*Shape12);

CSound* Sound17 = (CSound *)(m_pScene.createNode("Sound"));
Sound17->setLocation(new float[3]{0,1.6,0});
CAudioClip* AudioClip18 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip18->setDescription("testing");
AudioClip18->setUrl(new CString[2]{"sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"}, 2);
Sound17->setSource(*AudioClip18);

group->addChildren(*Sound17);

CSound* Sound19 = (CSound *)(m_pScene.createNode("Sound"));
Sound19->setLocation(new float[3]{0,1.6,0});
CMovieTexture* MovieTexture20 = (CMovieTexture *)(m_pScene.createNode("MovieTexture"));
MovieTexture20->setDescription("testing");
MovieTexture20->setUrl(new CString[2]{"bogus.mpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg"}, 2);
Sound19->setSource(*MovieTexture20);

group->addChildren(*Sound19);

CSpatialSound* SpatialSound21 = (CSpatialSound *)(m_pScene.createNode("SpatialSound"));
CAnalyser* Analyser22 = (CAnalyser *)(m_pScene.createNode("Analyser"));
CStreamAudioDestination* StreamAudioDestination23 = (CStreamAudioDestination *)(m_pScene.createNode("StreamAudioDestination"));
CBiquadFilter* BiquadFilter24 = (CBiquadFilter *)(m_pScene.createNode("BiquadFilter"));
CChannelMerger* ChannelMerger25 = (CChannelMerger *)(m_pScene.createNode("ChannelMerger"));
CChannelSelector* ChannelSelector26 = (CChannelSelector *)(m_pScene.createNode("ChannelSelector"));
CChannelSplitter* ChannelSplitter27 = (CChannelSplitter *)(m_pScene.createNode("ChannelSplitter"));
CConvolver* Convolver28 = (CConvolver *)(m_pScene.createNode("Convolver"));
CDelay* Delay29 = (CDelay *)(m_pScene.createNode("Delay"));
CDynamicsCompressor* DynamicsCompressor30 = (CDynamicsCompressor *)(m_pScene.createNode("DynamicsCompressor"));
CGain* Gain31 = (CGain *)(m_pScene.createNode("Gain"));
CStreamAudioDestination* StreamAudioDestination32 = (CStreamAudioDestination *)(m_pScene.createNode("StreamAudioDestination"));
CWaveShaper* WaveShaper33 = (CWaveShaper *)(m_pScene.createNode("WaveShaper"));
CBufferAudioSource* BufferAudioSource34 = (CBufferAudioSource *)(m_pScene.createNode("BufferAudioSource"));
WaveShaper33->addChildren(*BufferAudioSource34);

CListenerPointSource* ListenerPointSource35 = (CListenerPointSource *)(m_pScene.createNode("ListenerPointSource"));
WaveShaper33->addChildren(*ListenerPointSource35);

CMicrophoneSource* MicrophoneSource36 = (CMicrophoneSource *)(m_pScene.createNode("MicrophoneSource"));
WaveShaper33->addChildren(*MicrophoneSource36);

COscillatorSource* OscillatorSource37 = (COscillatorSource *)(m_pScene.createNode("OscillatorSource"));
WaveShaper33->addChildren(*OscillatorSource37);

CStreamAudioSource* StreamAudioSource38 = (CStreamAudioSource *)(m_pScene.createNode("StreamAudioSource"));
WaveShaper33->addChildren(*StreamAudioSource38);

StreamAudioDestination32->addChildren(*WaveShaper33);

Gain31->addChildren(*StreamAudioDestination32);

DynamicsCompressor30->addChildren(*Gain31);

Delay29->addChildren(*DynamicsCompressor30);

Convolver28->addChildren(*Delay29);

ChannelSplitter27->addOutputs(*Convolver28);

ChannelSelector26->addChildren(*ChannelSplitter27);

ChannelMerger25->addChildren(*ChannelSelector26);

BiquadFilter24->addChildren(*ChannelMerger25);

StreamAudioDestination23->addChildren(*BiquadFilter24);

Analyser22->addChildren(*StreamAudioDestination23);

SpatialSound21->addChildren(*Analyser22);

group->addChildren(*SpatialSound21);

X3D0->setScene(*Scene10);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "/c/x3d-code/www.web3d.org/x3d/languages/cpp/X3DLib/X3DLib.h"
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

Cmeta* meta10 = new Cmeta();
meta10->setName("license");
meta10->setContent("../license.html");
head1->addMeta(*meta10);

X3D0->setHead(*head1);

CScene* Scene11 = new CScene();
CWorldInfo* WorldInfo12 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo12->setTitle("AllAudioGraphNodes.x3d");
group->addChildren(*WorldInfo12);

CShape* Shape13 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box14 = (CBox *)(m_pScene.createNode("Box"));
Shape13->setGeometry(Box14);

CAppearance* Appearance15 = (CAppearance *)(m_pScene.createNode("Appearance"));
CAcousticProperties* AcousticProperties16 = (CAcousticProperties *)(m_pScene.createNode("AcousticProperties"));
AcousticProperties16->setDescription("Testing of X3D4 nodes demonstrating W3C Audio API in progress");
AcousticProperties16->setDiffuse(0.25);
AcousticProperties16->setRefraction(0.5);
AcousticProperties16->setSpecular(1);
Appearance15->setAcousticProperties(*AcousticProperties16);

CMaterial* Material17 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance15->setMaterial(*Material17);

Shape13->setAppearance(*Appearance15);

group->addChildren(*Shape13);

CSound* Sound18 = (CSound *)(m_pScene.createNode("Sound"));
Sound18->setLocation(new float[3]{0,1.6,0});
CAudioClip* AudioClip19 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip19->setDescription("testing");
AudioClip19->setUrl(new CString[2]{"sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"}, 2);
Sound18->setSource(*AudioClip19);

group->addChildren(*Sound18);

CSound* Sound20 = (CSound *)(m_pScene.createNode("Sound"));
Sound20->setLocation(new float[3]{0,1.6,0});
CMovieTexture* MovieTexture21 = (CMovieTexture *)(m_pScene.createNode("MovieTexture"));
MovieTexture21->setDescription("testing");
MovieTexture21->setUrl(new CString[2]{"bogus.mpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg"}, 2);
Sound20->setSource(*MovieTexture21);

group->addChildren(*Sound20);

CSpatialSound* SpatialSound22 = (CSpatialSound *)(m_pScene.createNode("SpatialSound"));
CAnalyser* Analyser23 = (CAnalyser *)(m_pScene.createNode("Analyser"));
CStreamAudioDestination* StreamAudioDestination24 = (CStreamAudioDestination *)(m_pScene.createNode("StreamAudioDestination"));
CBiquadFilter* BiquadFilter25 = (CBiquadFilter *)(m_pScene.createNode("BiquadFilter"));
CChannelMerger* ChannelMerger26 = (CChannelMerger *)(m_pScene.createNode("ChannelMerger"));
CChannelSelector* ChannelSelector27 = (CChannelSelector *)(m_pScene.createNode("ChannelSelector"));
CChannelSplitter* ChannelSplitter28 = (CChannelSplitter *)(m_pScene.createNode("ChannelSplitter"));
CConvolver* Convolver29 = (CConvolver *)(m_pScene.createNode("Convolver"));
CDelay* Delay30 = (CDelay *)(m_pScene.createNode("Delay"));
CDynamicsCompressor* DynamicsCompressor31 = (CDynamicsCompressor *)(m_pScene.createNode("DynamicsCompressor"));
CGain* Gain32 = (CGain *)(m_pScene.createNode("Gain"));
CStreamAudioDestination* StreamAudioDestination33 = (CStreamAudioDestination *)(m_pScene.createNode("StreamAudioDestination"));
CWaveShaper* WaveShaper34 = (CWaveShaper *)(m_pScene.createNode("WaveShaper"));
//The following X3DSoundSourceNode nodes have no audio-graph children
CBufferAudioSource* BufferAudioSource35 = (CBufferAudioSource *)(m_pScene.createNode("BufferAudioSource"));
WaveShaper34->addChildren(*BufferAudioSource35);

CListenerPointSource* ListenerPointSource36 = (CListenerPointSource *)(m_pScene.createNode("ListenerPointSource"));
WaveShaper34->addChildren(*ListenerPointSource36);

CMicrophoneSource* MicrophoneSource37 = (CMicrophoneSource *)(m_pScene.createNode("MicrophoneSource"));
WaveShaper34->addChildren(*MicrophoneSource37);

COscillatorSource* OscillatorSource38 = (COscillatorSource *)(m_pScene.createNode("OscillatorSource"));
OscillatorSource38->setFrequency(440);
WaveShaper34->addChildren(*OscillatorSource38);

CStreamAudioSource* StreamAudioSource39 = (CStreamAudioSource *)(m_pScene.createNode("StreamAudioSource"));
WaveShaper34->addChildren(*StreamAudioSource39);

StreamAudioDestination33->addChildren(*WaveShaper34);

Gain32->addChildren(*StreamAudioDestination33);

DynamicsCompressor31->addChildren(*Gain32);

Delay30->addChildren(*DynamicsCompressor31);

Convolver29->addChildren(*Delay30);

ChannelSplitter28->addOutputs(*Convolver29);

ChannelSelector27->addChildren(*ChannelSplitter28);

ChannelMerger26->addChildren(*ChannelSelector27);

BiquadFilter25->addChildren(*ChannelMerger26);

StreamAudioDestination24->addChildren(*BiquadFilter25);

Analyser23->addChildren(*StreamAudioDestination24);

SpatialSound22->addChildren(*Analyser23);

group->addChildren(*SpatialSound22);

X3D0->setScene(*Scene11);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

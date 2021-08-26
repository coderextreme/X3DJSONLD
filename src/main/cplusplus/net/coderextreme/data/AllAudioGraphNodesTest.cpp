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
meta6->setContent("10 April 2021");
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
meta9->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
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
Appearance15->setAcousticProperties(*AcousticProperties16);

CMaterial* Material17 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance15->setMaterial(*Material17);

Shape13->setAppearance(*Appearance15);

group->addChildren(*Shape13);

CSpatialSound* SpatialSound18 = (CSpatialSound *)(m_pScene.createNode("SpatialSound"));
CAnalyser* Analyser19 = (CAnalyser *)(m_pScene.createNode("Analyser"));
CAudioDestination* AudioDestination20 = (CAudioDestination *)(m_pScene.createNode("AudioDestination"));
CBiquadFilter* BiquadFilter21 = (CBiquadFilter *)(m_pScene.createNode("BiquadFilter"));
CChannelMerger* ChannelMerger22 = (CChannelMerger *)(m_pScene.createNode("ChannelMerger"));
CChannelSelector* ChannelSelector23 = (CChannelSelector *)(m_pScene.createNode("ChannelSelector"));
CChannelSplitter* ChannelSplitter24 = (CChannelSplitter *)(m_pScene.createNode("ChannelSplitter"));
CConvolver* Convolver25 = (CConvolver *)(m_pScene.createNode("Convolver"));
CDelay* Delay26 = (CDelay *)(m_pScene.createNode("Delay"));
CDynamicsCompressor* DynamicsCompressor27 = (CDynamicsCompressor *)(m_pScene.createNode("DynamicsCompressor"));
CGain* Gain28 = (CGain *)(m_pScene.createNode("Gain"));
CStreamAudioDestination* StreamAudioDestination29 = (CStreamAudioDestination *)(m_pScene.createNode("StreamAudioDestination"));
CWaveShaper* WaveShaper30 = (CWaveShaper *)(m_pScene.createNode("WaveShaper"));
//The following X3DSoundSourceNode nodes have no audio-graph children
CBufferAudioSource* BufferAudioSource31 = (CBufferAudioSource *)(m_pScene.createNode("BufferAudioSource"));
WaveShaper30->addChildren(*BufferAudioSource31);

CListenerPointSource* ListenerPointSource32 = (CListenerPointSource *)(m_pScene.createNode("ListenerPointSource"));
WaveShaper30->addChildren(*ListenerPointSource32);

CMicrophoneSource* MicrophoneSource33 = (CMicrophoneSource *)(m_pScene.createNode("MicrophoneSource"));
WaveShaper30->addChildren(*MicrophoneSource33);

COscillatorSource* OscillatorSource34 = (COscillatorSource *)(m_pScene.createNode("OscillatorSource"));
WaveShaper30->addChildren(*OscillatorSource34);

CStreamAudioSource* StreamAudioSource35 = (CStreamAudioSource *)(m_pScene.createNode("StreamAudioSource"));
WaveShaper30->addChildren(*StreamAudioSource35);

StreamAudioDestination29->addChildren(*WaveShaper30);

Gain28->addChildren(*StreamAudioDestination29);

DynamicsCompressor27->addChildren(*Gain28);

Delay26->addChildren(*DynamicsCompressor27);

Convolver25->addChildren(*Delay26);

ChannelSplitter24->addOutputs(*Convolver25);

ChannelSelector23->addChildren(*ChannelSplitter24);

ChannelMerger22->addChildren(*ChannelSelector23);

BiquadFilter21->addChildren(*ChannelMerger22);

AudioDestination20->addChildren(*BiquadFilter21);

Analyser19->addChildren(*AudioDestination20);

SpatialSound18->addChildren(*Analyser19);

group->addChildren(*SpatialSound18);

CSound* Sound36 = (CSound *)(m_pScene.createNode("Sound"));
Sound36->setLocation(new float[3]{0,1.6,0});
CAudioClip* AudioClip37 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip37->setDescription("testing");
AudioClip37->setUrl(new CString[2]{"sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"}, 2);
Sound36->setSource(*AudioClip37);

group->addChildren(*Sound36);

CSound* Sound38 = (CSound *)(m_pScene.createNode("Sound"));
Sound38->setLocation(new float[3]{0,1.6,0});
CMovieTexture* MovieTexture39 = (CMovieTexture *)(m_pScene.createNode("MovieTexture"));
MovieTexture39->setDescription("testing");
MovieTexture39->setUrl(new CString[2]{"bogus.mpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg"}, 2);
Sound38->setSource(*MovieTexture39);

group->addChildren(*Sound38);

X3D0->setScene(*Scene11);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

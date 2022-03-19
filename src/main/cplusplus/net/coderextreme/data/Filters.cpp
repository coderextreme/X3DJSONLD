/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Concretes.h"
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
meta2->setContent("Filters.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("This X3D scene involves three sound sources. Each of them is visualized by a 3D object (in our case is a sphere) that depicts the sound effects. Specifically, we have added filters through of them we are able to manage the different sound effects in an impressive way. Filters can be composed of a number of attributes, frequency, detune, gain and the quality factor which also known as Q. Furthermore, the filters are classified in some specific types, depending on the sound effects that produce. In detail, there is the Low-pass filter which can create more muffled sound. Another one is the High-pass filter, which is used to generate tinny sound. Equally important is the Band-pass filter, which cuts off low and high frequencies and passes through only these within a certain range. On the contrary, the Notch filter has exactly the opposite operation of the Band-pass filter. Then is the Low-shelf filter, its role is to change the amount of bass in a sound, as a result the frequencies that are lower than the current frequency get a boost, while them that are over it remain unchanged. Next, the High-shelf filter is responsible for the quantity of treble in a sound. Moreover, Peaking filter is used in order to handle the amount of midrange in a sound. Lastly, there is the All-pass filter, whose role is to introduce phaser effects.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("info");
meta4->setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("28 October 2020");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("5 December 2021");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("CHANGELOG.txt");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("TODO");
meta9->setContent("credit for audio files");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("https://www.medialab.hmu.gr/minipages/x3domAudio");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("identifier");
meta11->setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/Filters.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("generator");
meta12->setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("license");
meta13->setContent("../license.html");
head1->addMeta(*meta13);

X3D0->setHead(*head1);

CScene* Scene14 = new CScene();
CWorldInfo* WorldInfo15 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo15->setTitle("Filters.x3d");
group->addChildren(*WorldInfo15);

CNavigationInfo* NavigationInfo16 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo16);

CBackground* Background17 = (CBackground *)(m_pScene.createNode("Background"));
Background17->setSkyColor(new float[3]{0.2,0.2,0.2});
group->addChildren(*Background17);

CViewpoint* Viewpoint18 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint18->setDescription("View entire audio model");
Viewpoint18->setOrientation(new float[4]{1,0,0,-0.5});
Viewpoint18->setPosition(new float[3]{0,500,600});
Viewpoint18->setRetainUserOffsets(True);
group->addChildren(*Viewpoint18);

CTransform* Transform19 = (CTransform *)(m_pScene.createNode("Transform"));
Transform19->setDEF("TransformAudio1");
Transform19->setTranslation(new float[3]{-200,50,0});
CShape* Shape20 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance21 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance21->setDEF("audio_emit");
CMaterial* Material22 = (CMaterial *)(m_pScene.createNode("Material"));
Material22->setDiffuseColor(new float[3]{0.1,0.1,0.1});
Material22->setEmissiveColor(new float[3]{0.8,0.8,0.8});
Material22->setSpecularColor(new float[3]{0.01,0.01,0.01});
Appearance21->setMaterial(*Material22);

Shape20->setAppearance(*Appearance21);

CSphere* Sphere23 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere23->setRadius(30);
Shape20->setGeometry(Sphere23);

Transform19->addChildren(*Shape20);

group->addChildren(*Transform19);

CTransform* Transform24 = (CTransform *)(m_pScene.createNode("Transform"));
Transform24->setDEF("TransformAudio2");
Transform24->setTranslation(new float[3]{0,50,0});
CShape* Shape25 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance26 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance26->setDEF("audio_emit2");
CMaterial* Material27 = (CMaterial *)(m_pScene.createNode("Material"));
Material27->setDiffuseColor(new float[3]{0.1,0.1,0.1});
Material27->setEmissiveColor(new float[3]{0.8,0.8,0.8});
Material27->setSpecularColor(new float[3]{0.01,0.01,0.01});
Appearance26->setMaterial(*Material27);

Shape25->setAppearance(*Appearance26);

CSphere* Sphere28 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere28->setRadius(30);
Shape25->setGeometry(Sphere28);

Transform24->addChildren(*Shape25);

group->addChildren(*Transform24);

CTransform* Transform29 = (CTransform *)(m_pScene.createNode("Transform"));
Transform29->setDEF("TransformAudio3");
Transform29->setTranslation(new float[3]{200,50,0});
CShape* Shape30 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance31 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance31->setDEF("audio_emit3");
CMaterial* Material32 = (CMaterial *)(m_pScene.createNode("Material"));
Material32->setDiffuseColor(new float[3]{0.1,0.1,0.1});
Material32->setEmissiveColor(new float[3]{0.8,0.8,0.8});
Material32->setSpecularColor(new float[3]{0.01,0.01,0.01});
Appearance31->setMaterial(*Material32);

Shape30->setAppearance(*Appearance31);

CSphere* Sphere33 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere33->setRadius(30);
Shape30->setGeometry(Sphere33);

Transform29->addChildren(*Shape30);

group->addChildren(*Transform29);

CTransform* Transform34 = (CTransform *)(m_pScene.createNode("Transform"));
Transform34->setDEF("AnimData");
Transform34->setTranslation(new float[3]{0,50,0});
group->addChildren(*Transform34);

CTransform* Transform35 = (CTransform *)(m_pScene.createNode("Transform"));
Transform35->setDEF("AnimDataBoxH");
Transform35->setTranslation(new float[3]{0,100,0});
group->addChildren(*Transform35);

CTransform* Transform36 = (CTransform *)(m_pScene.createNode("Transform"));
Transform36->setDEF("AnimDataBoxM");
Transform36->setTranslation(new float[3]{15,100,0});
group->addChildren(*Transform36);

CTransform* Transform37 = (CTransform *)(m_pScene.createNode("Transform"));
Transform37->setDEF("AnimDataBoxL");
Transform37->setTranslation(new float[3]{30,100,0});
group->addChildren(*Transform37);

CTransform* Transform38 = (CTransform *)(m_pScene.createNode("Transform"));
Transform38->setDEF("AnimDataBoxMM");
Transform38->setTranslation(new float[3]{-15,100,0});
group->addChildren(*Transform38);

CTransform* Transform39 = (CTransform *)(m_pScene.createNode("Transform"));
Transform39->setDEF("AnimDataBoxLM");
Transform39->setTranslation(new float[3]{-30,100,0});
group->addChildren(*Transform39);

CTransform* Transform40 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape41 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance42 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance42->setDEF("floor");
CMaterial* Material43 = (CMaterial *)(m_pScene.createNode("Material"));
Material43->setDiffuseColor(new float[3]{0.1,0.1,0.1});
Material43->setShininess(0.8);
Material43->setSpecularColor(new float[3]{0.5,0.6,0.7});
Appearance42->setMaterial(*Material43);

Shape41->setAppearance(*Appearance42);

CCylinder* Cylinder44 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder44->setRadius(500);
Shape41->setGeometry(Cylinder44);

Transform40->addChildren(*Shape41);

group->addChildren(*Transform40);

CListenerPointSource* ListenerPointSource45 = (CListenerPointSource *)(m_pScene.createNode("ListenerPointSource"));
ListenerPointSource45->setTrackCurrentView(True);
group->addChildren(*ListenerPointSource45);

CStreamAudioDestination* StreamAudioDestination46 = (CStreamAudioDestination *)(m_pScene.createNode("StreamAudioDestination"));
CDynamicsCompressor* DynamicsCompressor47 = (CDynamicsCompressor *)(m_pScene.createNode("DynamicsCompressor"));
CGain* Gain48 = (CGain *)(m_pScene.createNode("Gain"));
CSpatialSound* SpatialSound49 = (CSpatialSound *)(m_pScene.createNode("SpatialSound"));
SpatialSound49->setDEF("Audio1");
CGain* Gain50 = (CGain *)(m_pScene.createNode("Gain"));
CAnalyser* Analyser51 = (CAnalyser *)(m_pScene.createNode("Analyser"));
CBiquadFilter* BiquadFilter52 = (CBiquadFilter *)(m_pScene.createNode("BiquadFilter"));
BiquadFilter52->setDetune(50);
BiquadFilter52->setFrequency(600);
BiquadFilter52->setQualityFactor(30);
BiquadFilter52->setType("allpass");
CAudioClip* AudioClip53 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip53->setDescription("Techno beat");
AudioClip53->setLoop(True);
AudioClip53->setUrl(new CString[2]{"sound/techno_beat.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/techno_beat.mp3"}, 2);
BiquadFilter52->addChildren(*AudioClip53);

Analyser51->addChildren(*BiquadFilter52);

Gain50->addChildren(*Analyser51);

SpatialSound49->addChildren(*Gain50);

Gain48->addChildren(*SpatialSound49);

CSpatialSound* SpatialSound54 = (CSpatialSound *)(m_pScene.createNode("SpatialSound"));
SpatialSound54->setDEF("Audio2");
CGain* Gain55 = (CGain *)(m_pScene.createNode("Gain"));
CAnalyser* Analyser56 = (CAnalyser *)(m_pScene.createNode("Analyser"));
CBiquadFilter* BiquadFilter57 = (CBiquadFilter *)(m_pScene.createNode("BiquadFilter"));
BiquadFilter57->setDetune(15);
BiquadFilter57->setFrequency(600);
BiquadFilter57->setQualityFactor(15);
BiquadFilter57->setType("allpass");
CAudioClip* AudioClip58 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip58->setDescription("Simple beat");
AudioClip58->setLoop(True);
AudioClip58->setUrl(new CString[2]{"sound/beat.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/beat.mp3"}, 2);
BiquadFilter57->addChildren(*AudioClip58);

Analyser56->addChildren(*BiquadFilter57);

Gain55->addChildren(*Analyser56);

SpatialSound54->addChildren(*Gain55);

Gain48->addChildren(*SpatialSound54);

CSpatialSound* SpatialSound59 = (CSpatialSound *)(m_pScene.createNode("SpatialSound"));
SpatialSound59->setDEF("Audio3");
CGain* Gain60 = (CGain *)(m_pScene.createNode("Gain"));
CAnalyser* Analyser61 = (CAnalyser *)(m_pScene.createNode("Analyser"));
CBiquadFilter* BiquadFilter62 = (CBiquadFilter *)(m_pScene.createNode("BiquadFilter"));
BiquadFilter62->setFrequency(1000);
BiquadFilter62->setQualityFactor(0);
BiquadFilter62->setType("allpass");
CAudioClip* AudioClip63 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip63->setDescription("Wobble loop");
AudioClip63->setLoop(True);
AudioClip63->setUrl(new CString[2]{"sound/wobble_loop.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/wobble_loop.mp3"}, 2);
BiquadFilter62->addChildren(*AudioClip63);

Analyser61->addChildren(*BiquadFilter62);

Gain60->addChildren(*Analyser61);

SpatialSound59->addChildren(*Gain60);

Gain48->addChildren(*SpatialSound59);

DynamicsCompressor47->addChildren(*Gain48);

StreamAudioDestination46->addChildren(*DynamicsCompressor47);

group->addChildren(*StreamAudioDestination46);

X3D0->setScene(*Scene14);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

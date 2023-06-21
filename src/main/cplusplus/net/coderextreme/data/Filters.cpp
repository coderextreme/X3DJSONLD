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
meta7->setContent("4 August 2021");
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
CNavigationInfo* NavigationInfo15 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo15);

CBackground* Background16 = (CBackground *)(m_pScene.createNode("Background"));
Background16->setSkyColor(new float[3]{0.2,0.2,0.2});
group->addChildren(*Background16);

CViewpoint* Viewpoint17 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint17->setOrientation(new float[4]{1,0,0,-0.5});
Viewpoint17->setPosition(new float[3]{0,500,600});
Viewpoint17->setRetainUserOffsets(True);
group->addChildren(*Viewpoint17);

CTransform* Transform18 = (CTransform *)(m_pScene.createNode("Transform"));
Transform18->setDEF("Audio1");
Transform18->setTranslation(new float[3]{-200,50,0});
CShape* Shape19 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance20 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance20->setDEF("audio_emit");
CMaterial* Material21 = (CMaterial *)(m_pScene.createNode("Material"));
Material21->setDiffuseColor(new float[3]{0.1,0.1,0.1});
Material21->setEmissiveColor(new float[3]{0.8,0.8,0.8});
Material21->setSpecularColor(new float[3]{0.01,0.01,0.01});
Appearance20->setMaterial(*Material21);

Shape19->setAppearance(*Appearance20);

CSphere* Sphere22 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere22->setRadius(30);
Shape19->setGeometry(Sphere22);

Transform18->addChildren(*Shape19);

group->addChildren(*Transform18);

CTransform* Transform23 = (CTransform *)(m_pScene.createNode("Transform"));
Transform23->setDEF("Audio2");
Transform23->setTranslation(new float[3]{0,50,0});
CShape* Shape24 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance25 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance25->setDEF("audio_emit");
CMaterial* Material26 = (CMaterial *)(m_pScene.createNode("Material"));
Material26->setDiffuseColor(new float[3]{0.1,0.1,0.1});
Material26->setEmissiveColor(new float[3]{0.8,0.8,0.8});
Material26->setSpecularColor(new float[3]{0.01,0.01,0.01});
Appearance25->setMaterial(*Material26);

Shape24->setAppearance(*Appearance25);

CSphere* Sphere27 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere27->setRadius(30);
Shape24->setGeometry(Sphere27);

Transform23->addChildren(*Shape24);

group->addChildren(*Transform23);

CTransform* Transform28 = (CTransform *)(m_pScene.createNode("Transform"));
Transform28->setDEF("Audio3");
Transform28->setTranslation(new float[3]{200,50,0});
CShape* Shape29 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance30 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance30->setDEF("audio_emit");
CMaterial* Material31 = (CMaterial *)(m_pScene.createNode("Material"));
Material31->setDiffuseColor(new float[3]{0.1,0.1,0.1});
Material31->setEmissiveColor(new float[3]{0.8,0.8,0.8});
Material31->setSpecularColor(new float[3]{0.01,0.01,0.01});
Appearance30->setMaterial(*Material31);

Shape29->setAppearance(*Appearance30);

CSphere* Sphere32 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere32->setRadius(30);
Shape29->setGeometry(Sphere32);

Transform28->addChildren(*Shape29);

group->addChildren(*Transform28);

CTransform* Transform33 = (CTransform *)(m_pScene.createNode("Transform"));
Transform33->setDEF("AnimData");
Transform33->setTranslation(new float[3]{0,50,0});
group->addChildren(*Transform33);

CTransform* Transform34 = (CTransform *)(m_pScene.createNode("Transform"));
Transform34->setDEF("AnimDataBoxH");
Transform34->setTranslation(new float[3]{0,100,0});
group->addChildren(*Transform34);

CTransform* Transform35 = (CTransform *)(m_pScene.createNode("Transform"));
Transform35->setDEF("AnimDataBoxM");
Transform35->setTranslation(new float[3]{15,100,0});
group->addChildren(*Transform35);

CTransform* Transform36 = (CTransform *)(m_pScene.createNode("Transform"));
Transform36->setDEF("AnimDataBoxL");
Transform36->setTranslation(new float[3]{30,100,0});
group->addChildren(*Transform36);

CTransform* Transform37 = (CTransform *)(m_pScene.createNode("Transform"));
Transform37->setDEF("AnimDataBoxMM");
Transform37->setTranslation(new float[3]{-15,100,0});
group->addChildren(*Transform37);

CTransform* Transform38 = (CTransform *)(m_pScene.createNode("Transform"));
Transform38->setDEF("AnimDataBoxLM");
Transform38->setTranslation(new float[3]{-30,100,0});
group->addChildren(*Transform38);

CTransform* Transform39 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape40 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance41 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance41->setDEF("floor");
CMaterial* Material42 = (CMaterial *)(m_pScene.createNode("Material"));
Material42->setDiffuseColor(new float[3]{0.1,0.1,0.1});
Material42->setShininess(0.8);
Material42->setSpecularColor(new float[3]{0.5,0.6,0.7});
Appearance41->setMaterial(*Material42);

Shape40->setAppearance(*Appearance41);

CCylinder* Cylinder43 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder43->setRadius(500);
Shape40->setGeometry(Cylinder43);

Transform39->addChildren(*Shape40);

group->addChildren(*Transform39);

CAudioDestination* AudioDestination44 = (CAudioDestination *)(m_pScene.createNode("AudioDestination"));
AudioDestination44->setChannelCountMode("MAX");
CDynamicsCompressor* DynamicsCompressor45 = (CDynamicsCompressor *)(m_pScene.createNode("DynamicsCompressor"));
DynamicsCompressor45->setChannelCountMode("MAX");
DynamicsCompressor45->setChannelInterpretation("SPEAKERS");
CGain* Gain46 = (CGain *)(m_pScene.createNode("Gain"));
Gain46->setChannelCountMode("MAX");
Gain46->setChannelInterpretation("SPEAKERS");
CSpatialSound* SpatialSound47 = (CSpatialSound *)(m_pScene.createNode("SpatialSound"));
SpatialSound47->setUSE("Audio1");
CGain* Gain48 = (CGain *)(m_pScene.createNode("Gain"));
Gain48->setChannelCountMode("MAX");
Gain48->setChannelInterpretation("SPEAKERS");
CAnalyser* Analyser49 = (CAnalyser *)(m_pScene.createNode("Analyser"));
Analyser49->setChannelCountMode("MAX");
Analyser49->setChannelInterpretation("SPEAKERS");
CBiquadFilter* BiquadFilter50 = (CBiquadFilter *)(m_pScene.createNode("BiquadFilter"));
BiquadFilter50->setDetune(50);
BiquadFilter50->setFrequency(600);
BiquadFilter50->setQualityFactor(30);
BiquadFilter50->setType("allpass");
BiquadFilter50->setChannelCountMode("MAX");
BiquadFilter50->setChannelInterpretation("SPEAKERS");
CAudioClip* AudioClip51 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip51->setLoop(True);
AudioClip51->setPauseTime(-1);
AudioClip51->setResumeTime(-1);
AudioClip51->setStopTime(-1);
AudioClip51->setUrl(new CString[1]{"sound/techno_beat.mp3"}, 1);
BiquadFilter50->addChildren(*AudioClip51);

Analyser49->addChildren(*BiquadFilter50);

Gain48->addChildren(*Analyser49);

SpatialSound47->addChildren(*Gain48);

Gain46->addChildren(*SpatialSound47);

CSpatialSound* SpatialSound52 = (CSpatialSound *)(m_pScene.createNode("SpatialSound"));
SpatialSound52->setUSE("Audio2");
CGain* Gain53 = (CGain *)(m_pScene.createNode("Gain"));
Gain53->setChannelCountMode("MAX");
Gain53->setChannelInterpretation("SPEAKERS");
CAnalyser* Analyser54 = (CAnalyser *)(m_pScene.createNode("Analyser"));
Analyser54->setChannelCountMode("MAX");
Analyser54->setChannelInterpretation("SPEAKERS");
CBiquadFilter* BiquadFilter55 = (CBiquadFilter *)(m_pScene.createNode("BiquadFilter"));
BiquadFilter55->setDetune(15);
BiquadFilter55->setFrequency(600);
BiquadFilter55->setQualityFactor(15);
BiquadFilter55->setType("allpass");
BiquadFilter55->setChannelCountMode("MAX");
BiquadFilter55->setChannelInterpretation("SPEAKERS");
CAudioClip* AudioClip56 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip56->setLoop(True);
AudioClip56->setPauseTime(-1);
AudioClip56->setResumeTime(-1);
AudioClip56->setStopTime(-1);
AudioClip56->setUrl(new CString[1]{"sound/beat.mp3"}, 1);
BiquadFilter55->addChildren(*AudioClip56);

Analyser54->addChildren(*BiquadFilter55);

Gain53->addChildren(*Analyser54);

SpatialSound52->addChildren(*Gain53);

Gain46->addChildren(*SpatialSound52);

CSpatialSound* SpatialSound57 = (CSpatialSound *)(m_pScene.createNode("SpatialSound"));
SpatialSound57->setUSE("Audio3");
CGain* Gain58 = (CGain *)(m_pScene.createNode("Gain"));
Gain58->setChannelCountMode("MAX");
Gain58->setChannelInterpretation("SPEAKERS");
CAnalyser* Analyser59 = (CAnalyser *)(m_pScene.createNode("Analyser"));
Analyser59->setChannelCountMode("MAX");
Analyser59->setChannelInterpretation("SPEAKERS");
CBiquadFilter* BiquadFilter60 = (CBiquadFilter *)(m_pScene.createNode("BiquadFilter"));
BiquadFilter60->setFrequency(1000);
BiquadFilter60->setQualityFactor(0);
BiquadFilter60->setType("allpass");
BiquadFilter60->setChannelCountMode("MAX");
BiquadFilter60->setChannelInterpretation("SPEAKERS");
CAudioClip* AudioClip61 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip61->setLoop(True);
AudioClip61->setPauseTime(-1);
AudioClip61->setResumeTime(-1);
AudioClip61->setStopTime(-1);
AudioClip61->setUrl(new CString[1]{"sound/wobble_loop.mp3"}, 1);
BiquadFilter60->addChildren(*AudioClip61);

Analyser59->addChildren(*BiquadFilter60);

Gain58->addChildren(*Analyser59);

SpatialSound57->addChildren(*Gain58);

Gain46->addChildren(*SpatialSound57);

DynamicsCompressor45->addChildren(*Gain46);

AudioDestination44->addChildren(*DynamicsCompressor45);

group->addChildren(*AudioDestination44);

X3D0->setScene(*Scene14);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

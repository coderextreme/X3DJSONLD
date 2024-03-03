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
meta2->setContent("SplitChannels.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner.");
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
meta7->setContent("23 April 2023");
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
meta10->setContent("http://www.medialab.hmu.gr/minipages/x3domAudio");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("identifier");
meta11->setContent("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d");
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
WorldInfo15->setTitle("SplitChannels.x3d");
group->addChildren(*WorldInfo15);

CNavigationInfo* NavigationInfo16 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo16->setType(new CString[1]{"NONE"}, 1);
group->addChildren(*NavigationInfo16);

CBackground* Background17 = (CBackground *)(m_pScene.createNode("Background"));
Background17->setSkyColor(new float[3]{0.2,0.2,0.21});
group->addChildren(*Background17);

CViewpoint* Viewpoint18 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint18->setOrientation(new float[4]{1,0,0,-0.5});
Viewpoint18->setPosition(new float[3]{0,500,600});
Viewpoint18->setRetainUserOffsets(True);
group->addChildren(*Viewpoint18);

CTransform* Transform19 = (CTransform *)(m_pScene.createNode("Transform"));
Transform19->setDEF("PowerR");
Transform19->setTranslation(new float[3]{100,400,400});
CTransform* Transform20 = (CTransform *)(m_pScene.createNode("Transform"));
Transform20->setRotation(new float[4]{1,0,0,-0.5});
Transform20->setTranslation(new float[3]{0,40,0});
CShape* Shape21 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance22 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance22->setDEF("audio_emit");
CMaterial* Material23 = (CMaterial *)(m_pScene.createNode("Material"));
Material23->setDiffuseColor(new float[3]{0,1,0});
Material23->setEmissiveColor(new float[3]{0.8,0.8,0.8});
Material23->setSpecularColor(new float[3]{0.01,0.01,0.01});
Appearance22->setMaterial(*Material23);

Shape21->setAppearance(*Appearance22);

CBox* Box24 = (CBox *)(m_pScene.createNode("Box"));
Box24->setSize(new float[3]{10,80,0.01});
Shape21->setGeometry(Box24);

Transform20->addChild(*Shape21);

Transform19->addChildren(*Transform20);

CTransform* Transform25 = (CTransform *)(m_pScene.createNode("Transform"));
Transform25->setRotation(new float[4]{1,0,0,-0.5});
Transform25->setTranslation(new float[3]{-2.7,37,0});
CShape* Shape26 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance27 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance27->setDEF("audio_emit2");
CMaterial* Material28 = (CMaterial *)(m_pScene.createNode("Material"));
Material28->setDiffuseColor(new float[3]{0,1,0});
Material28->setEmissiveColor(new float[3]{0.8,0.8,0.8});
Material28->setSpecularColor(new float[3]{0.01,0.01,0.01});
Appearance27->setMaterial(*Material28);

CImageTexture* ImageTexture29 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture29->setUrl(new CString[2]{"images/line.png","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"}, 2);
Appearance27->setTexture(*ImageTexture29);

Shape26->setAppearance(*Appearance27);

CBox* Box30 = (CBox *)(m_pScene.createNode("Box"));
Box30->setSize(new float[3]{25,83,0.01});
Shape26->setGeometry(Box30);

Transform25->addChild(*Shape26);

Transform19->addChildren(*Transform25);

CTransform* Transform31 = (CTransform *)(m_pScene.createNode("Transform"));
Transform31->setDEF("volumeRight");
Transform31->setRotation(new float[4]{1,0,0,-0.5});
Transform31->setScale(new float[3]{10,10,10});
Transform31->setTranslation(new float[3]{0,-10,0});
CShape* Shape32 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance33 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material34 = (CMaterial *)(m_pScene.createNode("Material"));
Material34->setAmbientIntensity(0.0933);
Material34->setDiffuseColor(new float[3]{0.345,0.345,0.882});
Material34->setShininess(0.51);
Material34->setSpecularColor(new float[3]{0.46,0.46,0.46});
Appearance33->setMaterial(*Material34);

Shape32->setAppearance(*Appearance33);

CText* Text35 = (CText *)(m_pScene.createNode("Text"));
Text35->setString(new CString[1]{"Right Channel Volume"}, 1);
CFontStyle* FontStyle36 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle36->setDEF("VolumeFontStyle");
FontStyle36->setFamily(new CString[2]{"Times","SERIF"}, 2);
FontStyle36->setStyle("BOLD");
Text35->setFontStyle(*FontStyle36);

Shape32->setGeometry(Text35);

Transform31->addChild(*Shape32);

Transform19->addChildren(*Transform31);

group->addChildren(*Transform19);

CTransform* Transform37 = (CTransform *)(m_pScene.createNode("Transform"));
Transform37->setDEF("PowerL");
Transform37->setTranslation(new float[3]{-100,400,400});
CTransform* Transform38 = (CTransform *)(m_pScene.createNode("Transform"));
Transform38->setRotation(new float[4]{1,0,0,-0.5});
Transform38->setTranslation(new float[3]{0,40,0});
CShape* Shape39 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance40 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance40->setDEF("audio_emit3");
CMaterial* Material41 = (CMaterial *)(m_pScene.createNode("Material"));
Material41->setDiffuseColor(new float[3]{0,1,0});
Material41->setEmissiveColor(new float[3]{0.8,0.8,0.8});
Material41->setSpecularColor(new float[3]{0.01,0.01,0.01});
Appearance40->setMaterial(*Material41);

Shape39->setAppearance(*Appearance40);

CBox* Box42 = (CBox *)(m_pScene.createNode("Box"));
Box42->setSize(new float[3]{10,80,0.01});
Shape39->setGeometry(Box42);

Transform38->addChild(*Shape39);

Transform37->addChildren(*Transform38);

CTransform* Transform43 = (CTransform *)(m_pScene.createNode("Transform"));
Transform43->setRotation(new float[4]{1,0,0,-0.5});
Transform43->setTranslation(new float[3]{13.2,37,0});
CShape* Shape44 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance45 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance45->setDEF("audio_emit4");
CMaterial* Material46 = (CMaterial *)(m_pScene.createNode("Material"));
Material46->setDiffuseColor(new float[3]{0,1,0});
Material46->setEmissiveColor(new float[3]{0.8,0.8,0.8});
Material46->setSpecularColor(new float[3]{0.01,0.01,0.01});
Appearance45->setMaterial(*Material46);

CImageTexture* ImageTexture47 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture47->setUrl(new CString[2]{"images/line.png","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"}, 2);
Appearance45->setTexture(*ImageTexture47);

Shape44->setAppearance(*Appearance45);

CBox* Box48 = (CBox *)(m_pScene.createNode("Box"));
Box48->setSize(new float[3]{25,83,0.01});
Shape44->setGeometry(Box48);

Transform43->addChild(*Shape44);

Transform37->addChildren(*Transform43);

CTransform* Transform49 = (CTransform *)(m_pScene.createNode("Transform"));
Transform49->setDEF("volumeLeft");
Transform49->setRotation(new float[4]{1,0,0,-0.5});
Transform49->setScale(new float[3]{10,10,10});
Transform49->setTranslation(new float[3]{0,-10,0});
CShape* Shape50 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance51 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material52 = (CMaterial *)(m_pScene.createNode("Material"));
Material52->setAmbientIntensity(0.0933);
Material52->setDiffuseColor(new float[3]{0.345,0.345,0.882});
Material52->setShininess(0.51);
Material52->setSpecularColor(new float[3]{0.46,0.46,0.46});
Appearance51->setMaterial(*Material52);

Shape50->setAppearance(*Appearance51);

CText* Text53 = (CText *)(m_pScene.createNode("Text"));
Text53->setString(new CString[1]{"Left Channel Volume"}, 1);
CFontStyle* FontStyle54 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle54->setUSE("VolumeFontStyle");
Text53->setFontStyle(*FontStyle54);

Shape50->setGeometry(Text53);

Transform49->addChild(*Shape50);

Transform37->addChildren(*Transform49);

group->addChildren(*Transform37);

CTransform* Transform55 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape56 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance57 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance57->setDEF("floor");
CMaterial* Material58 = (CMaterial *)(m_pScene.createNode("Material"));
Material58->setDiffuseColor(new float[3]{0.1,0.1,0.1});
Material58->setShininess(0.8);
Material58->setSpecularColor(new float[3]{0.5,0.6,0.7});
Appearance57->setMaterial(*Material58);

Shape56->setAppearance(*Appearance57);

CBox* Box59 = (CBox *)(m_pScene.createNode("Box"));
Box59->setSize(new float[3]{1500,10,500});
Shape56->setGeometry(Box59);

Transform55->addChild(*Shape56);

group->addChildren(*Transform55);

CListenerPointSource* ListenerPointSource60 = (CListenerPointSource *)(m_pScene.createNode("ListenerPointSource"));
ListenerPointSource60->setTrackCurrentView(True);
group->addChildren(*ListenerPointSource60);

CStreamAudioDestination* StreamAudioDestination61 = (CStreamAudioDestination *)(m_pScene.createNode("StreamAudioDestination"));
CGain* Gain62 = (CGain *)(m_pScene.createNode("Gain"));
CChannelMerger* ChannelMerger63 = (CChannelMerger *)(m_pScene.createNode("ChannelMerger"));
CChannelSelector* ChannelSelector64 = (CChannelSelector *)(m_pScene.createNode("ChannelSelector"));
CGain* Gain65 = (CGain *)(m_pScene.createNode("Gain"));
Gain65->setUSE("ChannelSplitter");
ChannelSelector64->addChildren(*Gain65);

ChannelMerger63->addChildren(*ChannelSelector64);

CChannelSelector* ChannelSelector66 = (CChannelSelector *)(m_pScene.createNode("ChannelSelector"));
ChannelSelector66->setChannelSelection(1);
CGain* Gain67 = (CGain *)(m_pScene.createNode("Gain"));
Gain67->setUSE("ChannelSplitter");
ChannelSelector66->addChildren(*Gain67);

ChannelMerger63->addChildren(*ChannelSelector66);

Gain62->addChildren(*ChannelMerger63);

StreamAudioDestination61->addChildren(*Gain62);

group->addChildren(*StreamAudioDestination61);

CChannelSplitter* ChannelSplitter68 = (CChannelSplitter *)(m_pScene.createNode("ChannelSplitter"));
ChannelSplitter68->setDEF("ChannelSplitter");
ChannelSplitter68->setChannelCountMode("EXPLICIT");
CAudioClip* AudioClip69 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip69->setDescription("Violin");
AudioClip69->setUrl(new CString[2]{"sound/violin.mp3","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"}, 2);
ChannelSplitter68->addOutputs(*AudioClip69);

group->addChildren(*ChannelSplitter68);

CTransform* Transform70 = (CTransform *)(m_pScene.createNode("Transform"));
Transform70->setDEF("Audio3");
Transform70->setRotation(new float[4]{1,0,0,-0.5});
Transform70->setTranslation(new float[3]{0,100,0});
CShape* Shape71 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance72 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance72->setDEF("audio_emit5");
CMaterial* Material73 = (CMaterial *)(m_pScene.createNode("Material"));
Material73->setDiffuseColor(new float[3]{0.3,1,0.3});
Material73->setEmissiveColor(new float[3]{0.8,0.8,0.8});
Material73->setSpecularColor(new float[3]{0.01,0.01,0.01});
Appearance72->setMaterial(*Material73);

CImageTexture* ImageTexture74 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture74->setUrl(new CString[2]{"images/loudspeaker.png","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png"}, 2);
Appearance72->setTexture(*ImageTexture74);

Shape71->setAppearance(*Appearance72);

CBox* Box75 = (CBox *)(m_pScene.createNode("Box"));
Box75->setSize(new float[3]{100,100,0.001});
Shape71->setGeometry(Box75);

Transform70->addChild(*Shape71);

group->addChildren(*Transform70);

X3D0->setScene(*Scene14);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

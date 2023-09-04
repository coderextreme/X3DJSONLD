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
meta7->setContent("5 December 2021");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("CHANGELOG.txt");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("http://www.medialab.hmu.gr/minipages/x3domAudio");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("TODO");
meta10->setContent("credit for audio files");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("identifier");
meta11->setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("generator");
meta12->setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta12);

X3D0->setHead(*head1);

CScene* Scene13 = new CScene();
CWorldInfo* WorldInfo14 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo14->setTitle("SplitChannels.x3d");
group->addChildren(*WorldInfo14);

CNavigationInfo* NavigationInfo15 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo15);

CBackground* Background16 = (CBackground *)(m_pScene.createNode("Background"));
Background16->setSkyColor(new float[3]{0.2,0.2,0.21});
group->addChildren(*Background16);

CViewpoint* Viewpoint17 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint17->setPosition(new float[3]{0,500,600});
Viewpoint17->setOrientation(new float[4]{1,0,0,-0.5});
Viewpoint17->setRetainUserOffsets(True);
group->addChildren(*Viewpoint17);

CTransform* Transform18 = (CTransform *)(m_pScene.createNode("Transform"));
Transform18->setDEF("PowerR");
Transform18->setTranslation(new float[3]{100,400,400});
CTransform* Transform19 = (CTransform *)(m_pScene.createNode("Transform"));
Transform19->setTranslation(new float[3]{0,40,0});
Transform19->setRotation(new float[4]{1,0,0,-0.5});
CShape* Shape20 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance21 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance21->setDEF("audio_emit");
CMaterial* Material22 = (CMaterial *)(m_pScene.createNode("Material"));
Material22->setDiffuseColor(new float[3]{0,1,0});
Material22->setSpecularColor(new float[3]{0.01,0.01,0.01});
Material22->setEmissiveColor(new float[3]{0.8,0.8,0.8});
Appearance21->setMaterial(*Material22);

Shape20->setAppearance(*Appearance21);

CBox* Box23 = (CBox *)(m_pScene.createNode("Box"));
Box23->setSize(new float[3]{10,80,0.01});
Shape20->setGeometry(Box23);

Transform19->addChild(*Shape20);

Transform18->addChildren(*Transform19);

CTransform* Transform24 = (CTransform *)(m_pScene.createNode("Transform"));
Transform24->setTranslation(new float[3]{-2.7,37,0});
Transform24->setRotation(new float[4]{1,0,0,-0.5});
CShape* Shape25 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance26 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance26->setDEF("audio_emit2");
CMaterial* Material27 = (CMaterial *)(m_pScene.createNode("Material"));
Material27->setDiffuseColor(new float[3]{0,1,0});
Material27->setSpecularColor(new float[3]{0.01,0.01,0.01});
Material27->setEmissiveColor(new float[3]{0.8,0.8,0.8});
Appearance26->setMaterial(*Material27);

CImageTexture* ImageTexture28 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture28->setUrl(new CString[2]{"images/line.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"}, 2);
Appearance26->setTexture(*ImageTexture28);

Shape25->setAppearance(*Appearance26);

CBox* Box29 = (CBox *)(m_pScene.createNode("Box"));
Box29->setSize(new float[3]{25,83,0.01});
Shape25->setGeometry(Box29);

Transform24->addChild(*Shape25);

Transform18->addChildren(*Transform24);

CTransform* Transform30 = (CTransform *)(m_pScene.createNode("Transform"));
Transform30->setDEF("volumeRight");
Transform30->setTranslation(new float[3]{0,-10,0});
Transform30->setRotation(new float[4]{1,0,0,-0.5});
Transform30->setScale(new float[3]{10,10,10});
CShape* Shape31 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance32 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material33 = (CMaterial *)(m_pScene.createNode("Material"));
Material33->setAmbientIntensity(0.0933);
Material33->setDiffuseColor(new float[3]{0.345,0.345,0.882});
Material33->setSpecularColor(new float[3]{0.46,0.46,0.46});
Material33->setShininess(0.51);
Appearance32->setMaterial(*Material33);

Shape31->setAppearance(*Appearance32);

CText* Text34 = (CText *)(m_pScene.createNode("Text"));
CFontStyle* FontStyle35 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle35->setFamily(new CString[1]{"Times"}, 1);
FontStyle35->setStyle("BOLD");
Text34->setFontStyle(*FontStyle35);

Shape31->setGeometry(Text34);

Transform30->addChild(*Shape31);

Transform18->addChildren(*Transform30);

group->addChildren(*Transform18);

CTransform* Transform36 = (CTransform *)(m_pScene.createNode("Transform"));
Transform36->setDEF("PowerL");
Transform36->setTranslation(new float[3]{-100,400,400});
CTransform* Transform37 = (CTransform *)(m_pScene.createNode("Transform"));
Transform37->setTranslation(new float[3]{0,40,0});
Transform37->setRotation(new float[4]{1,0,0,-0.5});
CShape* Shape38 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance39 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance39->setDEF("audio_emit3");
CMaterial* Material40 = (CMaterial *)(m_pScene.createNode("Material"));
Material40->setDiffuseColor(new float[3]{0,1,0});
Material40->setSpecularColor(new float[3]{0.01,0.01,0.01});
Material40->setEmissiveColor(new float[3]{0.8,0.8,0.8});
Appearance39->setMaterial(*Material40);

Shape38->setAppearance(*Appearance39);

CBox* Box41 = (CBox *)(m_pScene.createNode("Box"));
Box41->setSize(new float[3]{10,80,0.01});
Shape38->setGeometry(Box41);

Transform37->addChild(*Shape38);

Transform36->addChildren(*Transform37);

CTransform* Transform42 = (CTransform *)(m_pScene.createNode("Transform"));
Transform42->setTranslation(new float[3]{13.2,37,0});
Transform42->setRotation(new float[4]{1,0,0,-0.5});
CShape* Shape43 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance44 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance44->setDEF("audio_emit4");
CMaterial* Material45 = (CMaterial *)(m_pScene.createNode("Material"));
Material45->setDiffuseColor(new float[3]{0,1,0});
Material45->setSpecularColor(new float[3]{0.01,0.01,0.01});
Material45->setEmissiveColor(new float[3]{0.8,0.8,0.8});
Appearance44->setMaterial(*Material45);

CImageTexture* ImageTexture46 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture46->setUrl(new CString[2]{"images/line.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"}, 2);
Appearance44->setTexture(*ImageTexture46);

Shape43->setAppearance(*Appearance44);

CBox* Box47 = (CBox *)(m_pScene.createNode("Box"));
Box47->setSize(new float[3]{25,83,0.01});
Shape43->setGeometry(Box47);

Transform42->addChild(*Shape43);

Transform36->addChildren(*Transform42);

CTransform* Transform48 = (CTransform *)(m_pScene.createNode("Transform"));
Transform48->setDEF("volumeLeft");
Transform48->setTranslation(new float[3]{0,-10,0});
Transform48->setRotation(new float[4]{1,0,0,-0.5});
Transform48->setScale(new float[3]{10,10,10});
CShape* Shape49 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance50 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material51 = (CMaterial *)(m_pScene.createNode("Material"));
Material51->setAmbientIntensity(0.0933);
Material51->setDiffuseColor(new float[3]{0.345,0.345,0.882});
Material51->setSpecularColor(new float[3]{0.46,0.46,0.46});
Material51->setShininess(0.51);
Appearance50->setMaterial(*Material51);

Shape49->setAppearance(*Appearance50);

CText* Text52 = (CText *)(m_pScene.createNode("Text"));
CFontStyle* FontStyle53 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle53->setFamily(new CString[1]{"Times"}, 1);
FontStyle53->setStyle("BOLD");
Text52->setFontStyle(*FontStyle53);

Shape49->setGeometry(Text52);

Transform48->addChild(*Shape49);

Transform36->addChildren(*Transform48);

group->addChildren(*Transform36);

CTransform* Transform54 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape55 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance56 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance56->setDEF("floor");
CMaterial* Material57 = (CMaterial *)(m_pScene.createNode("Material"));
Material57->setDiffuseColor(new float[3]{0.1,0.1,0.1});
Material57->setSpecularColor(new float[3]{0.5,0.6,0.7});
Material57->setShininess(0.8);
Appearance56->setMaterial(*Material57);

Shape55->setAppearance(*Appearance56);

CBox* Box58 = (CBox *)(m_pScene.createNode("Box"));
Box58->setSize(new float[3]{1500,10,500});
Shape55->setGeometry(Box58);

Transform54->addChild(*Shape55);

group->addChildren(*Transform54);

CListenerPointSource* ListenerPointSource59 = (CListenerPointSource *)(m_pScene.createNode("ListenerPointSource"));
ListenerPointSource59->setTrackCurrentView(True);
group->addChildren(*ListenerPointSource59);

CStreamAudioDestination* StreamAudioDestination60 = (CStreamAudioDestination *)(m_pScene.createNode("StreamAudioDestination"));
CGain* Gain61 = (CGain *)(m_pScene.createNode("Gain"));
CChannelMerger* ChannelMerger62 = (CChannelMerger *)(m_pScene.createNode("ChannelMerger"));
CChannelSelector* ChannelSelector63 = (CChannelSelector *)(m_pScene.createNode("ChannelSelector"));
CGain* Gain64 = (CGain *)(m_pScene.createNode("Gain"));
ChannelSelector63->addChildren(*Gain64);

ChannelMerger62->addChildren(*ChannelSelector63);

CChannelSelector* ChannelSelector65 = (CChannelSelector *)(m_pScene.createNode("ChannelSelector"));
ChannelSelector65->setChannelSelection(1);
CGain* Gain66 = (CGain *)(m_pScene.createNode("Gain"));
ChannelSelector65->addChildren(*Gain66);

ChannelMerger62->addChildren(*ChannelSelector65);

Gain61->addChildren(*ChannelMerger62);

StreamAudioDestination60->addChildren(*Gain61);

group->addChildren(*StreamAudioDestination60);

CChannelSplitter* ChannelSplitter67 = (CChannelSplitter *)(m_pScene.createNode("ChannelSplitter"));
ChannelSplitter67->setDEF("ChannelSplitter");
ChannelSplitter67->setChannelCountMode("EXPLICIT");
CAudioClip* AudioClip68 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip68->setDescription("Violin");
AudioClip68->setUrl(new CString[2]{"sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"}, 2);
ChannelSplitter67->addOutputs(*AudioClip68);

group->addChildren(*ChannelSplitter67);

CTransform* Transform69 = (CTransform *)(m_pScene.createNode("Transform"));
Transform69->setDEF("Audio3");
Transform69->setTranslation(new float[3]{0,100,0});
Transform69->setRotation(new float[4]{1,0,0,-0.5});
CShape* Shape70 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance71 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance71->setDEF("audio_emit5");
CMaterial* Material72 = (CMaterial *)(m_pScene.createNode("Material"));
Material72->setDiffuseColor(new float[3]{0.3,1,0.3});
Material72->setSpecularColor(new float[3]{0.01,0.01,0.01});
Material72->setEmissiveColor(new float[3]{0.8,0.8,0.8});
Appearance71->setMaterial(*Material72);

CImageTexture* ImageTexture73 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture73->setUrl(new CString[2]{"images/loudspeaker.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png"}, 2);
Appearance71->setTexture(*ImageTexture73);

Shape70->setAppearance(*Appearance71);

CBox* Box74 = (CBox *)(m_pScene.createNode("Box"));
Box74->setSize(new float[3]{100,100,0.001});
Shape70->setGeometry(Box74);

Transform69->addChild(*Shape70);

group->addChildren(*Transform69);

X3D0->setScene(*Scene13);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

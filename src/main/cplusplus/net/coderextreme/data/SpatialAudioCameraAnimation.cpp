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
meta2->setContent("SpatialAudioCameraAnimation.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world.");
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
meta9->setContent("https://www.medialab.hmu.gr/minipages/x3domAudio");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("TODO");
meta10->setContent("credit for audio files");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("identifier");
meta11->setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("generator");
meta12->setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta12);

X3D0->setHead(*head1);

CScene* Scene13 = new CScene();
CWorldInfo* WorldInfo14 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo14->setTitle("SpatialAudioCameraAnimation.x3d");
group->addChildren(*WorldInfo14);

CNavigationInfo* NavigationInfo15 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo15);

CBackground* Background16 = (CBackground *)(m_pScene.createNode("Background"));
Background16->setFrontUrl(new CString[2]{"images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"}, 2);
Background16->setBackUrl(new CString[2]{"images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"}, 2);
Background16->setLeftUrl(new CString[2]{"images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"}, 2);
Background16->setRightUrl(new CString[2]{"images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"}, 2);
Background16->setTopUrl(new CString[2]{"images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"}, 2);
Background16->setBottomUrl(new CString[2]{"images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"}, 2);
group->addChildren(*Background16);

CViewpoint* Viewpoint17 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint17->setDEF("Camera001");
Viewpoint17->setDescription("Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view");
Viewpoint17->setPosition(new float[3]{0,2000,3500});
Viewpoint17->setOrientation(new float[4]{1,0,0,-0.523599});
group->addChildren(*Viewpoint17);

CTimeSensor* TimeSensor18 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor18->setDEF("TIMER");
TimeSensor18->setCycleInterval(33.333332);
TimeSensor18->setLoop(True);
group->addChildren(*TimeSensor18);

CPositionInterpolator* PositionInterpolator19 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator19->setDEF("Camera001-POS-INTERP");
PositionInterpolator19->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
PositionInterpolator19->setKeyValue(new float[15]{0,2000,3500,0,2000,0,0,2000,-3500,0,2000,0,0,2000,3500});
group->addChildren(*PositionInterpolator19);

COrientationInterpolator* OrientationInterpolator20 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator20->setDEF("Camera001-ROT-INTERP");
OrientationInterpolator20->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator20->setKeyValue(new float[20]{1,0,0,-0.523599,0.99999,0.003554,0.002727,-1.309007,0,-0.965926,-0.258819,-3.141593,0.002282,-0.793351,-0.60876,-3.135645,1,-0.000001,0,-0.523599});
group->addChildren(*OrientationInterpolator20);

CTransform* Transform21 = (CTransform *)(m_pScene.createNode("Transform"));
Transform21->setDEF("Floor");
Transform21->setTranslation(new float[3]{1.241,0,0.358});
CShape* Shape22 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance23 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance23->setDEF("WireColor");
CMaterial* Material24 = (CMaterial *)(m_pScene.createNode("Material"));
Material24->setDiffuseColor(new float[3]{0.122,0.114,0.125});
Appearance23->setMaterial(*Material24);

Shape22->setAppearance(*Appearance23);

CBox* Box25 = (CBox *)(m_pScene.createNode("Box"));
Box25->setSize(new float[3]{2000,1,2000});
Shape22->setGeometry(Box25);

Transform21->addChild(*Shape22);

group->addChildren(*Transform21);

CTransform* Transform26 = (CTransform *)(m_pScene.createNode("Transform"));
Transform26->setDEF("TransformAudio1");
Transform26->setTranslation(new float[3]{-933.1235,0,-926.2532});
CShape* Shape27 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance28 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance28->setDEF("WireColor_1");
CMaterial* Material29 = (CMaterial *)(m_pScene.createNode("Material"));
Material29->setDiffuseColor(new float[3]{0.690196,0.101961,0.101961});
Appearance28->setMaterial(*Material29);

Shape27->setAppearance(*Appearance28);

CSphere* Sphere30 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere30->setRadius(100);
Shape27->setGeometry(Sphere30);

Transform26->addChild(*Shape27);

CBillboard* Billboard31 = (CBillboard *)(m_pScene.createNode("Billboard"));
CTransform* Transform32 = (CTransform *)(m_pScene.createNode("Transform"));
Transform32->setDEF("violin");
Transform32->setTranslation(new float[3]{0,100,0});
Transform32->setRotation(new float[4]{1,0,0,-0.5});
Transform32->setScale(new float[3]{100,100,100});
CShape* Shape33 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance34 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material35 = (CMaterial *)(m_pScene.createNode("Material"));
Material35->setAmbientIntensity(0.0933);
Material35->setDiffuseColor(new float[3]{1,1,1});
Material35->setSpecularColor(new float[3]{0.46,0.46,0.46});
Material35->setShininess(0.51);
Appearance34->setMaterial(*Material35);

Shape33->setAppearance(*Appearance34);

CText* Text36 = (CText *)(m_pScene.createNode("Text"));
Text36->setString(new CString[1]{"Violin"}, 1);
CFontStyle* FontStyle37 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle37->setDEF("ModelFontStyle");
FontStyle37->setFamily(new CString[2]{"Times","SERIF"}, 2);
FontStyle37->setStyle("BOLD");
Text36->setFontStyle(*FontStyle37);

Shape33->setGeometry(Text36);

Transform32->addChild(*Shape33);

Billboard31->addChildren(*Transform32);

Transform26->addChildren(*Billboard31);

group->addChildren(*Transform26);

CTransform* Transform38 = (CTransform *)(m_pScene.createNode("Transform"));
Transform38->setDEF("TransformAudio2");
Transform38->setTranslation(new float[3]{933.4756,0,924.4232});
CShape* Shape39 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance40 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance40->setDEF("WireColor_2");
CMaterial* Material41 = (CMaterial *)(m_pScene.createNode("Material"));
Material41->setDiffuseColor(new float[3]{0.105882,0.694118,0.580392});
Appearance40->setMaterial(*Material41);

Shape39->setAppearance(*Appearance40);

CSphere* Sphere42 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere42->setRadius(100);
Shape39->setGeometry(Sphere42);

Transform38->addChild(*Shape39);

CBillboard* Billboard43 = (CBillboard *)(m_pScene.createNode("Billboard"));
CTransform* Transform44 = (CTransform *)(m_pScene.createNode("Transform"));
Transform44->setDEF("saxophone");
Transform44->setTranslation(new float[3]{0,100,0});
Transform44->setRotation(new float[4]{1,0,0,-0.5});
Transform44->setScale(new float[3]{100,100,100});
CShape* Shape45 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance46 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material47 = (CMaterial *)(m_pScene.createNode("Material"));
Material47->setAmbientIntensity(0.0933);
Material47->setDiffuseColor(new float[3]{1,1,1});
Material47->setSpecularColor(new float[3]{0.46,0.46,0.46});
Material47->setShininess(0.51);
Appearance46->setMaterial(*Material47);

Shape45->setAppearance(*Appearance46);

CText* Text48 = (CText *)(m_pScene.createNode("Text"));
Text48->setString(new CString[1]{"Saxophone"}, 1);
CFontStyle* FontStyle49 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle49->setUSE("ModelFontStyle");
Text48->setFontStyle(*FontStyle49);

Shape45->setGeometry(Text48);

Transform44->addChild(*Shape45);

Billboard43->addChildren(*Transform44);

Transform38->addChildren(*Billboard43);

group->addChildren(*Transform38);

CListenerPointSource* ListenerPointSource50 = (CListenerPointSource *)(m_pScene.createNode("ListenerPointSource"));
ListenerPointSource50->setTrackCurrentView(True);
group->addChildren(*ListenerPointSource50);

CStreamAudioDestination* StreamAudioDestination51 = (CStreamAudioDestination *)(m_pScene.createNode("StreamAudioDestination"));
CSpatialSound* SpatialSound52 = (CSpatialSound *)(m_pScene.createNode("SpatialSound"));
SpatialSound52->setDEF("Audio1");
CGain* Gain53 = (CGain *)(m_pScene.createNode("Gain"));
CAudioClip* AudioClip54 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip54->setDescription("Violin");
AudioClip54->setUrl(new CString[2]{"sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"}, 2);
AudioClip54->setLoop(True);
Gain53->addChildren(*AudioClip54);

SpatialSound52->addChildren(*Gain53);

StreamAudioDestination51->addChildren(*SpatialSound52);

CSpatialSound* SpatialSound55 = (CSpatialSound *)(m_pScene.createNode("SpatialSound"));
SpatialSound55->setDEF("Audio2");
CGain* Gain56 = (CGain *)(m_pScene.createNode("Gain"));
CAudioClip* AudioClip57 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip57->setDescription("Saxophone");
AudioClip57->setUrl(new CString[2]{"sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"}, 2);
AudioClip57->setLoop(True);
Gain56->addChildren(*AudioClip57);

SpatialSound55->addChildren(*Gain56);

StreamAudioDestination51->addChildren(*SpatialSound55);

group->addChildren(*StreamAudioDestination51);

CROUTE* ROUTE58 = new CROUTE();
ROUTE58->setFromNode("TIMER");
ROUTE58->setFromField("fraction_changed");
ROUTE58->setToNode("Camera001-POS-INTERP");
ROUTE58->setToField("set_fraction");
group->addChildren(*ROUTE58);

CROUTE* ROUTE59 = new CROUTE();
ROUTE59->setFromNode("Camera001-POS-INTERP");
ROUTE59->setFromField("value_changed");
ROUTE59->setToNode("Camera001");
ROUTE59->setToField("position");
group->addChildren(*ROUTE59);

CROUTE* ROUTE60 = new CROUTE();
ROUTE60->setFromNode("TIMER");
ROUTE60->setFromField("fraction_changed");
ROUTE60->setToNode("Camera001-ROT-INTERP");
ROUTE60->setToField("set_fraction");
group->addChildren(*ROUTE60);

CROUTE* ROUTE61 = new CROUTE();
ROUTE61->setFromNode("Camera001-ROT-INTERP");
ROUTE61->setFromField("value_changed");
ROUTE61->setToNode("Camera001");
ROUTE61->setToField("orientation");
group->addChildren(*ROUTE61);

X3D0->setScene(*Scene13);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

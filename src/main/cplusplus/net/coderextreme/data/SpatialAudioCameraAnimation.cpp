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
meta7->setContent("7 August 2021");
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
meta11->setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d");
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
WorldInfo15->setTitle("SpatialAudioCameraAnimation.x3d");
group->addChildren(*WorldInfo15);

CNavigationInfo* NavigationInfo16 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo16);

CBackground* Background17 = (CBackground *)(m_pScene.createNode("Background"));
Background17->setBackUrl(new CString[2]{"images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"}, 2);
Background17->setBottomUrl(new CString[2]{"images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"}, 2);
Background17->setFrontUrl(new CString[2]{"images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"}, 2);
Background17->setLeftUrl(new CString[2]{"images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"}, 2);
Background17->setRightUrl(new CString[2]{"images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"}, 2);
Background17->setTopUrl(new CString[2]{"images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"}, 2);
group->addChildren(*Background17);

CViewpoint* Viewpoint18 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint18->setDEF("Camera001");
Viewpoint18->setDescription("Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view");
Viewpoint18->setFarDistance(0);
Viewpoint18->setNearDistance(1);
Viewpoint18->setOrientation(new float[4]{1,0,0,-0.523599});
Viewpoint18->setPosition(new float[3]{0,2000,3500});
group->addChildren(*Viewpoint18);

CTimeSensor* TimeSensor19 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor19->setDEF("TIMER");
TimeSensor19->setCycleInterval(33.333332);
TimeSensor19->setLoop(True);
group->addChildren(*TimeSensor19);

CPositionInterpolator* PositionInterpolator20 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator20->setDEF("Camera001-POS-INTERP");
PositionInterpolator20->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
PositionInterpolator20->setKeyValue(new float[15]{0,2000,3500,0,2000,0,0,2000,-3500,0,2000,0,0,2000,3500});
group->addChildren(*PositionInterpolator20);

COrientationInterpolator* OrientationInterpolator21 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator21->setDEF("Camera001-ROT-INTERP");
OrientationInterpolator21->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator21->setKeyValue(new float[20]{1,0,0,-0.523599,0.99999,0.003554,0.002727,-1.309007,0,-0.965926,-0.258819,-3.141593,0.002282,-0.793351,-0.60876,-3.135645,1,-0.000001,0,-0.523599});
group->addChildren(*OrientationInterpolator21);

CROUTE* ROUTE22 = new CROUTE();
ROUTE22->setFromField("fraction_changed");
ROUTE22->setFromNode("TIMER");
ROUTE22->setToField("set_fraction");
ROUTE22->setToNode("Camera001-POS-INTERP");
group->addChildren(*ROUTE22);

CROUTE* ROUTE23 = new CROUTE();
ROUTE23->setFromField("value_changed");
ROUTE23->setFromNode("Camera001-POS-INTERP");
ROUTE23->setToField("set_position");
ROUTE23->setToNode("Camera001");
group->addChildren(*ROUTE23);

CROUTE* ROUTE24 = new CROUTE();
ROUTE24->setFromField("fraction_changed");
ROUTE24->setFromNode("TIMER");
ROUTE24->setToField("set_fraction");
ROUTE24->setToNode("Camera001-ROT-INTERP");
group->addChildren(*ROUTE24);

CROUTE* ROUTE25 = new CROUTE();
ROUTE25->setFromField("value_changed");
ROUTE25->setFromNode("Camera001-ROT-INTERP");
ROUTE25->setToField("set_orientation");
ROUTE25->setToNode("Camera001");
group->addChildren(*ROUTE25);

CTransform* Transform26 = (CTransform *)(m_pScene.createNode("Transform"));
Transform26->setDEF("Floor");
Transform26->setTranslation(new float[3]{1.241,0,0.358});
CShape* Shape27 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance28 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance28->setDEF("WireColor");
CMaterial* Material29 = (CMaterial *)(m_pScene.createNode("Material"));
Material29->setDiffuseColor(new float[3]{0.122,0.114,0.125});
Appearance28->setMaterial(*Material29);

Shape27->setAppearance(*Appearance28);

CBox* Box30 = (CBox *)(m_pScene.createNode("Box"));
Box30->setSize(new float[3]{2000,1,2000});
Shape27->setGeometry(Box30);

Transform26->addChildren(*Shape27);

group->addChildren(*Transform26);

CTransform* Transform31 = (CTransform *)(m_pScene.createNode("Transform"));
Transform31->setDEF("Audio1Transform");
Transform31->setTranslation(new float[3]{-933.123474,0,-926.253235});
CShape* Shape32 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance33 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance33->setDEF("WireColor_1");
CMaterial* Material34 = (CMaterial *)(m_pScene.createNode("Material"));
Material34->setDiffuseColor(new float[3]{0.690196,0.101961,0.101961});
Appearance33->setMaterial(*Material34);

Shape32->setAppearance(*Appearance33);

CSphere* Sphere35 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere35->setRadius(100);
Shape32->setGeometry(Sphere35);

Transform31->addChildren(*Shape32);

CBillboard* Billboard36 = (CBillboard *)(m_pScene.createNode("Billboard"));
CTransform* Transform37 = (CTransform *)(m_pScene.createNode("Transform"));
Transform37->setDEF("violin");
Transform37->setRotation(new float[4]{1,0,0,-0.5});
Transform37->setScale(new float[3]{100,100,100});
Transform37->setTranslation(new float[3]{0,100,0});
CShape* Shape38 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance39 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material40 = (CMaterial *)(m_pScene.createNode("Material"));
Material40->setAmbientIntensity(0.0933);
Material40->setDiffuseColor(new float[3]{1,1,1});
Material40->setShininess(0.51);
Material40->setSpecularColor(new float[3]{0.46,0.46,0.46});
Appearance39->setMaterial(*Material40);

Shape38->setAppearance(*Appearance39);

CText* Text41 = (CText *)(m_pScene.createNode("Text"));
Text41->setString(new CString[1]{"Violin"}, 1);
CFontStyle* FontStyle42 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle42->setStyle("BOLD");
Text41->setFontStyle(*FontStyle42);

Shape38->setGeometry(Text41);

Transform37->addChildren(*Shape38);

Billboard36->addChildren(*Transform37);

Transform31->addChildren(*Billboard36);

group->addChildren(*Transform31);

CTransform* Transform43 = (CTransform *)(m_pScene.createNode("Transform"));
Transform43->setDEF("Audio2");
Transform43->setTranslation(new float[3]{933.475586,0,924.423218});
CShape* Shape44 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance45 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance45->setDEF("WireColor_2");
CMaterial* Material46 = (CMaterial *)(m_pScene.createNode("Material"));
Material46->setDiffuseColor(new float[3]{0.105882,0.694118,0.580392});
Appearance45->setMaterial(*Material46);

Shape44->setAppearance(*Appearance45);

CSphere* Sphere47 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere47->setRadius(100);
Shape44->setGeometry(Sphere47);

Transform43->addChildren(*Shape44);

CBillboard* Billboard48 = (CBillboard *)(m_pScene.createNode("Billboard"));
CTransform* Transform49 = (CTransform *)(m_pScene.createNode("Transform"));
Transform49->setDEF("saxophone");
Transform49->setRotation(new float[4]{1,0,0,-0.5});
Transform49->setScale(new float[3]{100,100,100});
Transform49->setTranslation(new float[3]{0,100,0});
CShape* Shape50 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance51 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material52 = (CMaterial *)(m_pScene.createNode("Material"));
Material52->setAmbientIntensity(0.0933);
Material52->setDiffuseColor(new float[3]{1,1,1});
Material52->setShininess(0.51);
Material52->setSpecularColor(new float[3]{0.46,0.46,0.46});
Appearance51->setMaterial(*Material52);

Shape50->setAppearance(*Appearance51);

CText* Text53 = (CText *)(m_pScene.createNode("Text"));
Text53->setString(new CString[1]{"Saxophone"}, 1);
CFontStyle* FontStyle54 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle54->setFamily(new CString[1]{"Times"}, 1);
FontStyle54->setStyle("BOLD");
Text53->setFontStyle(*FontStyle54);

Shape50->setGeometry(Text53);

Transform49->addChildren(*Shape50);

Billboard48->addChildren(*Transform49);

Transform43->addChildren(*Billboard48);

group->addChildren(*Transform43);

CListenerPointSource* ListenerPointSource55 = (CListenerPointSource *)(m_pScene.createNode("ListenerPointSource"));
ListenerPointSource55->setTrackCurrentView(True);
ListenerPointSource55->setDopplerEnabled("false");
group->addChildren(*ListenerPointSource55);

CStreamAudioDestination* StreamAudioDestination56 = (CStreamAudioDestination *)(m_pScene.createNode("StreamAudioDestination"));
StreamAudioDestination56->setChannelCountMode("MAX");
StreamAudioDestination56->setChannelInterpretation("SPEAKERS");
CSpatialSound* SpatialSound57 = (CSpatialSound *)(m_pScene.createNode("SpatialSound"));
SpatialSound57->setDEF("Audio1");
SpatialSound57->setDistanceModel("INVERSE");
SpatialSound57->setDopplerEnabled("false");
CGain* Gain58 = (CGain *)(m_pScene.createNode("Gain"));
Gain58->setChannelCountMode("MAX");
Gain58->setChannelInterpretation("SPEAKERS");
CAudioClip* AudioClip59 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip59->setLoop(True);
AudioClip59->setPauseTime(-1);
AudioClip59->setResumeTime(-1);
AudioClip59->setStopTime(-1);
AudioClip59->setUrl(new CString[2]{"sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"}, 2);
Gain58->addChildren(*AudioClip59);

SpatialSound57->addChildren(*Gain58);

StreamAudioDestination56->addChildren(*SpatialSound57);

CSpatialSound* SpatialSound60 = (CSpatialSound *)(m_pScene.createNode("SpatialSound"));
SpatialSound60->setDEF("Audio2");
SpatialSound60->setDistanceModel("INVERSE");
SpatialSound60->setDopplerEnabled("false");
CGain* Gain61 = (CGain *)(m_pScene.createNode("Gain"));
Gain61->setChannelCountMode("MAX");
Gain61->setChannelInterpretation("SPEAKERS");
CAudioClip* AudioClip62 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip62->setLoop(True);
AudioClip62->setPauseTime(-1);
AudioClip62->setResumeTime(-1);
AudioClip62->setStopTime(-1);
AudioClip62->setUrl(new CString[2]{"sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"}, 2);
Gain61->addChildren(*AudioClip62);

SpatialSound60->addChildren(*Gain61);

StreamAudioDestination56->addChildren(*SpatialSound60);

group->addChildren(*StreamAudioDestination56);

X3D0->setScene(*Scene14);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

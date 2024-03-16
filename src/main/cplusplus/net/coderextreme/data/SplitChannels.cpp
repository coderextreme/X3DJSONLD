/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Abstracts.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Concretes.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile("Full");
X3D0->setVersion("4.0");
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName("title");
meta2->setContent("SplitChannels.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("description");
meta3->setContent("This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner.");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("info");
meta4->setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("creator");
meta5->setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("created");
meta6->setContent("28 October 2020");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("modified");
meta7->setContent("23 April 2023");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("reference");
meta8->setContent("CHANGELOG.txt");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("TODO");
meta9->setContent("credit for audio files");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("reference");
meta10->setContent("http://www.medialab.hmu.gr/minipages/x3domAudio");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("identifier");
meta11->setContent("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("generator");
meta12->setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("license");
meta13->setContent("../license.html");
head1->addMeta(meta13);

X3D0->setHead(head1);

Scene* Scene14 = new Scene();
WorldInfo* WorldInfo15 = new WorldInfo();
WorldInfo15->setTitle("SplitChannels.x3d");
Scene14->addChild(WorldInfo15);

NavigationInfo* NavigationInfo16 = new NavigationInfo();
NavigationInfo16->setType(new String[1]{"NONE"}, 1);
Scene14->addChild(NavigationInfo16);

Background* Background17 = new Background();
Background17->setSkyColor(new float[3]{0.2,0.2,0.21});
Scene14->addChild(Background17);

Viewpoint* Viewpoint18 = new Viewpoint();
Viewpoint18->setOrientation(new float[4]{1,0,0,-0.5});
Viewpoint18->setPosition(new float[3]{0,500,600});
Viewpoint18->setRetainUserOffsets(True);
Scene14->addChild(Viewpoint18);

Transform* Transform19 = new Transform();
Transform19->setDEF("PowerR");
Transform19->setTranslation(new float[3]{100,400,400});
Transform* Transform20 = new Transform();
Transform20->setRotation(new float[4]{1,0,0,-0.5});
Transform20->setTranslation(new float[3]{0,40,0});
Shape* Shape21 = new Shape();
Appearance* Appearance22 = new Appearance();
Appearance22->setDEF("audio_emit");
Material* Material23 = new Material();
Material23->setDiffuseColor(new float[3]{0,1,0});
Material23->setEmissiveColor(new float[3]{0.8,0.8,0.8});
Material23->setSpecularColor(new float[3]{0.01,0.01,0.01});
Appearance22->setMaterial(Material23);

Shape21->setAppearance(Appearance22);

Box* Box24 = new Box();
Box24->setSize(new float[3]{10,80,0.01});
Shape21->setGeometry(Box24);

Transform20->addChild(Shape21);

Transform19->addChild(Transform20);

Transform* Transform25 = new Transform();
Transform25->setRotation(new float[4]{1,0,0,-0.5});
Transform25->setTranslation(new float[3]{-2.7,37,0});
Shape* Shape26 = new Shape();
Appearance* Appearance27 = new Appearance();
Appearance27->setDEF("audio_emit2");
Material* Material28 = new Material();
Material28->setDiffuseColor(new float[3]{0,1,0});
Material28->setEmissiveColor(new float[3]{0.8,0.8,0.8});
Material28->setSpecularColor(new float[3]{0.01,0.01,0.01});
Appearance27->setMaterial(Material28);

ImageTexture* ImageTexture29 = new ImageTexture();
ImageTexture29->setUrl(new String[2]{"images/line.png","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"}, 2);
Appearance27->setTexture(ImageTexture29);

Shape26->setAppearance(Appearance27);

Box* Box30 = new Box();
Box30->setSize(new float[3]{25,83,0.01});
Shape26->setGeometry(Box30);

Transform25->addChild(Shape26);

Transform19->addChild(Transform25);

Transform* Transform31 = new Transform();
Transform31->setDEF("volumeRight");
Transform31->setRotation(new float[4]{1,0,0,-0.5});
Transform31->setScale(new float[3]{10,10,10});
Transform31->setTranslation(new float[3]{0,-10,0});
Shape* Shape32 = new Shape();
Appearance* Appearance33 = new Appearance();
Material* Material34 = new Material();
Material34->setAmbientIntensity(0.0933);
Material34->setDiffuseColor(new float[3]{0.345,0.345,0.882});
Material34->setShininess(0.51);
Material34->setSpecularColor(new float[3]{0.46,0.46,0.46});
Appearance33->setMaterial(Material34);

Shape32->setAppearance(Appearance33);

Text* Text35 = new Text();
Text35->setString(new String[1]{"Right Channel Volume"}, 1);
FontStyle* FontStyle36 = new FontStyle();
FontStyle36->setDEF("VolumeFontStyle");
FontStyle36->setFamily(new String[2]{"Times","SERIF"}, 2);
FontStyle36->setStyle("BOLD");
Text35->setFontStyle(FontStyle36);

Shape32->setGeometry(Text35);

Transform31->addChild(Shape32);

Transform19->addChild(Transform31);

Scene14->addChild(Transform19);

Transform* Transform37 = new Transform();
Transform37->setDEF("PowerL");
Transform37->setTranslation(new float[3]{-100,400,400});
Transform* Transform38 = new Transform();
Transform38->setRotation(new float[4]{1,0,0,-0.5});
Transform38->setTranslation(new float[3]{0,40,0});
Shape* Shape39 = new Shape();
Appearance* Appearance40 = new Appearance();
Appearance40->setDEF("audio_emit3");
Material* Material41 = new Material();
Material41->setDiffuseColor(new float[3]{0,1,0});
Material41->setEmissiveColor(new float[3]{0.8,0.8,0.8});
Material41->setSpecularColor(new float[3]{0.01,0.01,0.01});
Appearance40->setMaterial(Material41);

Shape39->setAppearance(Appearance40);

Box* Box42 = new Box();
Box42->setSize(new float[3]{10,80,0.01});
Shape39->setGeometry(Box42);

Transform38->addChild(Shape39);

Transform37->addChild(Transform38);

Transform* Transform43 = new Transform();
Transform43->setRotation(new float[4]{1,0,0,-0.5});
Transform43->setTranslation(new float[3]{13.2,37,0});
Shape* Shape44 = new Shape();
Appearance* Appearance45 = new Appearance();
Appearance45->setDEF("audio_emit4");
Material* Material46 = new Material();
Material46->setDiffuseColor(new float[3]{0,1,0});
Material46->setEmissiveColor(new float[3]{0.8,0.8,0.8});
Material46->setSpecularColor(new float[3]{0.01,0.01,0.01});
Appearance45->setMaterial(Material46);

ImageTexture* ImageTexture47 = new ImageTexture();
ImageTexture47->setUrl(new String[2]{"images/line.png","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"}, 2);
Appearance45->setTexture(ImageTexture47);

Shape44->setAppearance(Appearance45);

Box* Box48 = new Box();
Box48->setSize(new float[3]{25,83,0.01});
Shape44->setGeometry(Box48);

Transform43->addChild(Shape44);

Transform37->addChild(Transform43);

Transform* Transform49 = new Transform();
Transform49->setDEF("volumeLeft");
Transform49->setRotation(new float[4]{1,0,0,-0.5});
Transform49->setScale(new float[3]{10,10,10});
Transform49->setTranslation(new float[3]{0,-10,0});
Shape* Shape50 = new Shape();
Appearance* Appearance51 = new Appearance();
Material* Material52 = new Material();
Material52->setAmbientIntensity(0.0933);
Material52->setDiffuseColor(new float[3]{0.345,0.345,0.882});
Material52->setShininess(0.51);
Material52->setSpecularColor(new float[3]{0.46,0.46,0.46});
Appearance51->setMaterial(Material52);

Shape50->setAppearance(Appearance51);

Text* Text53 = new Text();
Text53->setString(new String[1]{"Left Channel Volume"}, 1);
FontStyle* FontStyle54 = new FontStyle();
FontStyle54->setUSE("VolumeFontStyle");
Text53->setFontStyle(FontStyle54);

Shape50->setGeometry(Text53);

Transform49->addChild(Shape50);

Transform37->addChild(Transform49);

Scene14->addChild(Transform37);

Transform* Transform55 = new Transform();
Shape* Shape56 = new Shape();
Appearance* Appearance57 = new Appearance();
Appearance57->setDEF("floor");
Material* Material58 = new Material();
Material58->setDiffuseColor(new float[3]{0.1,0.1,0.1});
Material58->setShininess(0.8);
Material58->setSpecularColor(new float[3]{0.5,0.6,0.7});
Appearance57->setMaterial(Material58);

Shape56->setAppearance(Appearance57);

Box* Box59 = new Box();
Box59->setSize(new float[3]{1500,10,500});
Shape56->setGeometry(Box59);

Transform55->addChild(Shape56);

Scene14->addChild(Transform55);

ListenerPointSource* ListenerPointSource60 = new ListenerPointSource();
ListenerPointSource60->setTrackCurrentView(True);
Scene14->addChild(ListenerPointSource60);

StreamAudioDestination* StreamAudioDestination61 = new StreamAudioDestination();
Gain* Gain62 = new Gain();
ChannelMerger* ChannelMerger63 = new ChannelMerger();
ChannelSelector* ChannelSelector64 = new ChannelSelector();
Gain* Gain65 = new Gain();
Gain65->setUSE("ChannelSplitter");
ChannelSelector64->addChild(Gain65);

ChannelMerger63->addChild(ChannelSelector64);

ChannelSelector* ChannelSelector66 = new ChannelSelector();
ChannelSelector66->setChannelSelection(1);
Gain* Gain67 = new Gain();
Gain67->setUSE("ChannelSplitter");
ChannelSelector66->addChild(Gain67);

ChannelMerger63->addChild(ChannelSelector66);

Gain62->addChild(ChannelMerger63);

StreamAudioDestination61->addChild(Gain62);

Scene14->addChild(StreamAudioDestination61);

ChannelSplitter* ChannelSplitter68 = new ChannelSplitter();
ChannelSplitter68->setDEF("ChannelSplitter");
ChannelSplitter68->setChannelCountMode("EXPLICIT");
AudioClip* AudioClip69 = new AudioClip();
AudioClip69->setDescription("Violin");
AudioClip69->setUrl(new String[2]{"sound/violin.mp3","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"}, 2);
ChannelSplitter68->addOutputs(AudioClip69);

Scene14->addChild(ChannelSplitter68);

Transform* Transform70 = new Transform();
Transform70->setDEF("Audio3");
Transform70->setRotation(new float[4]{1,0,0,-0.5});
Transform70->setTranslation(new float[3]{0,100,0});
Shape* Shape71 = new Shape();
Appearance* Appearance72 = new Appearance();
Appearance72->setDEF("audio_emit5");
Material* Material73 = new Material();
Material73->setDiffuseColor(new float[3]{0.3,1,0.3});
Material73->setEmissiveColor(new float[3]{0.8,0.8,0.8});
Material73->setSpecularColor(new float[3]{0.01,0.01,0.01});
Appearance72->setMaterial(Material73);

ImageTexture* ImageTexture74 = new ImageTexture();
ImageTexture74->setUrl(new String[2]{"images/loudspeaker.png","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png"}, 2);
Appearance72->setTexture(ImageTexture74);

Shape71->setAppearance(Appearance72);

Box* Box75 = new Box();
Box75->setSize(new float[3]{100,100,0.001});
Shape71->setGeometry(Box75);

Transform70->addChild(Shape71);

Scene14->addChild(Transform70);

X3D0->setScene(Scene14);

X3D0->toXMLString();
}

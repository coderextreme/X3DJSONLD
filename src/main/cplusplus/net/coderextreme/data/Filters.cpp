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
meta2->setContent("Filters.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("description");
meta3->setContent("This X3D scene involves three sound sources. Each of them is visualized by a 3D object (in our case is a sphere) that depicts the sound effects. Specifically, we have added filters through of them we are able to manage the different sound effects in an impressive way. Filters can be composed of a number of attributes, frequency, detune, gain and the quality factor which also known as Q. Furthermore, the filters are classified in some specific types, depending on the sound effects that produce. In detail, there is the Low-pass filter which can create more muffled sound. Another one is the High-pass filter, which is used to generate tinny sound. Equally important is the Band-pass filter, which cuts off low and high frequencies and passes through only these within a certain range. On the contrary, the Notch filter has exactly the opposite operation of the Band-pass filter. Then is the Low-shelf filter, its role is to change the amount of bass in a sound, as a result the frequencies that are lower than the current frequency get a boost, while them that are over it remain unchanged. Next, the High-shelf filter is responsible for the quantity of treble in a sound. Moreover, Peaking filter is used in order to handle the amount of midrange in a sound. Lastly, there is the All-pass filter, whose role is to introduce phaser effects.");
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
meta7->setContent("5 December 2021");
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
meta10->setContent("https://www.medialab.hmu.gr/minipages/x3domAudio");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("identifier");
meta11->setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/Filters.x3d");
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
WorldInfo15->setTitle("Filters.x3d");
Scene14->addChild(WorldInfo15);

NavigationInfo* NavigationInfo16 = new NavigationInfo();
Scene14->addChild(NavigationInfo16);

Background* Background17 = new Background();
Background17->setSkyColor(new float[3]{0.2,0.2,0.2});
Scene14->addChild(Background17);

Viewpoint* Viewpoint18 = new Viewpoint();
Viewpoint18->setDescription("View entire audio model");
Viewpoint18->setOrientation(new float[4]{1,0,0,-0.5});
Viewpoint18->setPosition(new float[3]{0,500,600});
Viewpoint18->setRetainUserOffsets(True);
Scene14->addChild(Viewpoint18);

Transform* Transform19 = new Transform();
Transform19->setDEF("TransformAudio1");
Transform19->setTranslation(new float[3]{-200,50,0});
Shape* Shape20 = new Shape();
Appearance* Appearance21 = new Appearance();
Appearance21->setDEF("audio_emit");
Material* Material22 = new Material();
Material22->setDiffuseColor(new float[3]{0.1,0.1,0.1});
Material22->setEmissiveColor(new float[3]{0.8,0.8,0.8});
Material22->setSpecularColor(new float[3]{0.01,0.01,0.01});
Appearance21->setMaterial(Material22);

Shape20->setAppearance(Appearance21);

Sphere* Sphere23 = new Sphere();
Sphere23->setRadius(30);
Shape20->setGeometry(Sphere23);

Transform19->addChild(Shape20);

Scene14->addChild(Transform19);

Transform* Transform24 = new Transform();
Transform24->setDEF("TransformAudio2");
Transform24->setTranslation(new float[3]{0,50,0});
Shape* Shape25 = new Shape();
Appearance* Appearance26 = new Appearance();
Appearance26->setDEF("audio_emit2");
Material* Material27 = new Material();
Material27->setDiffuseColor(new float[3]{0.1,0.1,0.1});
Material27->setEmissiveColor(new float[3]{0.8,0.8,0.8});
Material27->setSpecularColor(new float[3]{0.01,0.01,0.01});
Appearance26->setMaterial(Material27);

Shape25->setAppearance(Appearance26);

Sphere* Sphere28 = new Sphere();
Sphere28->setRadius(30);
Shape25->setGeometry(Sphere28);

Transform24->addChild(Shape25);

Scene14->addChild(Transform24);

Transform* Transform29 = new Transform();
Transform29->setDEF("TransformAudio3");
Transform29->setTranslation(new float[3]{200,50,0});
Shape* Shape30 = new Shape();
Appearance* Appearance31 = new Appearance();
Appearance31->setDEF("audio_emit3");
Material* Material32 = new Material();
Material32->setDiffuseColor(new float[3]{0.1,0.1,0.1});
Material32->setEmissiveColor(new float[3]{0.8,0.8,0.8});
Material32->setSpecularColor(new float[3]{0.01,0.01,0.01});
Appearance31->setMaterial(Material32);

Shape30->setAppearance(Appearance31);

Sphere* Sphere33 = new Sphere();
Sphere33->setRadius(30);
Shape30->setGeometry(Sphere33);

Transform29->addChild(Shape30);

Scene14->addChild(Transform29);

Transform* Transform34 = new Transform();
Transform34->setDEF("AnimData");
Transform34->setTranslation(new float[3]{0,50,0});
Scene14->addChild(Transform34);

Transform* Transform35 = new Transform();
Transform35->setDEF("AnimDataBoxH");
Transform35->setTranslation(new float[3]{0,100,0});
Scene14->addChild(Transform35);

Transform* Transform36 = new Transform();
Transform36->setDEF("AnimDataBoxM");
Transform36->setTranslation(new float[3]{15,100,0});
Scene14->addChild(Transform36);

Transform* Transform37 = new Transform();
Transform37->setDEF("AnimDataBoxL");
Transform37->setTranslation(new float[3]{30,100,0});
Scene14->addChild(Transform37);

Transform* Transform38 = new Transform();
Transform38->setDEF("AnimDataBoxMM");
Transform38->setTranslation(new float[3]{-15,100,0});
Scene14->addChild(Transform38);

Transform* Transform39 = new Transform();
Transform39->setDEF("AnimDataBoxLM");
Transform39->setTranslation(new float[3]{-30,100,0});
Scene14->addChild(Transform39);

Transform* Transform40 = new Transform();
Shape* Shape41 = new Shape();
Appearance* Appearance42 = new Appearance();
Appearance42->setDEF("floor");
Material* Material43 = new Material();
Material43->setDiffuseColor(new float[3]{0.1,0.1,0.1});
Material43->setShininess(0.8);
Material43->setSpecularColor(new float[3]{0.5,0.6,0.7});
Appearance42->setMaterial(Material43);

Shape41->setAppearance(Appearance42);

Cylinder* Cylinder44 = new Cylinder();
Cylinder44->setRadius(500);
Shape41->setGeometry(Cylinder44);

Transform40->addChild(Shape41);

Scene14->addChild(Transform40);

ListenerPointSource* ListenerPointSource45 = new ListenerPointSource();
ListenerPointSource45->setTrackCurrentView(True);
Scene14->addChild(ListenerPointSource45);

StreamAudioDestination* StreamAudioDestination46 = new StreamAudioDestination();
DynamicsCompressor* DynamicsCompressor47 = new DynamicsCompressor();
Gain* Gain48 = new Gain();
SpatialSound* SpatialSound49 = new SpatialSound();
SpatialSound49->setDEF("Audio1");
Gain* Gain50 = new Gain();
Analyser* Analyser51 = new Analyser();
BiquadFilter* BiquadFilter52 = new BiquadFilter();
BiquadFilter52->setDetune(50);
BiquadFilter52->setFrequency(600);
BiquadFilter52->setQualityFactor(30);
BiquadFilter52->setType("ALLPASS");
AudioClip* AudioClip53 = new AudioClip();
AudioClip53->setDescription("Techno beat");
AudioClip53->setLoop(True);
AudioClip53->setUrl(new String[2]{"sound/techno_beat.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/techno_beat.mp3"}, 2);
BiquadFilter52->addChild(AudioClip53);

Analyser51->addChild(BiquadFilter52);

Gain50->addChild(Analyser51);

SpatialSound49->addChild(Gain50);

Gain48->addChild(SpatialSound49);

SpatialSound* SpatialSound54 = new SpatialSound();
SpatialSound54->setDEF("Audio2");
Gain* Gain55 = new Gain();
Analyser* Analyser56 = new Analyser();
BiquadFilter* BiquadFilter57 = new BiquadFilter();
BiquadFilter57->setDetune(15);
BiquadFilter57->setFrequency(600);
BiquadFilter57->setQualityFactor(15);
BiquadFilter57->setType("ALLPASS");
AudioClip* AudioClip58 = new AudioClip();
AudioClip58->setDescription("Simple beat");
AudioClip58->setLoop(True);
AudioClip58->setUrl(new String[2]{"sound/beat.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/beat.mp3"}, 2);
BiquadFilter57->addChild(AudioClip58);

Analyser56->addChild(BiquadFilter57);

Gain55->addChild(Analyser56);

SpatialSound54->addChild(Gain55);

Gain48->addChild(SpatialSound54);

SpatialSound* SpatialSound59 = new SpatialSound();
SpatialSound59->setDEF("Audio3");
Gain* Gain60 = new Gain();
Analyser* Analyser61 = new Analyser();
BiquadFilter* BiquadFilter62 = new BiquadFilter();
BiquadFilter62->setFrequency(1000);
BiquadFilter62->setQualityFactor(0);
BiquadFilter62->setType("ALLPASS");
AudioClip* AudioClip63 = new AudioClip();
AudioClip63->setDescription("Wobble loop");
AudioClip63->setLoop(True);
AudioClip63->setUrl(new String[2]{"sound/wobble_loop.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/wobble_loop.mp3"}, 2);
BiquadFilter62->addChild(AudioClip63);

Analyser61->addChild(BiquadFilter62);

Gain60->addChild(Analyser61);

SpatialSound59->addChild(Gain60);

Gain48->addChild(SpatialSound59);

DynamicsCompressor47->addChild(Gain48);

StreamAudioDestination46->addChild(DynamicsCompressor47);

Scene14->addChild(StreamAudioDestination46);

X3D0->setScene(Scene14);

X3D0->toXMLString();
}

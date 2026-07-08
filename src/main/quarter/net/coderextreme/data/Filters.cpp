
#include <Inventor/nodes/SoCone.h>
#include <Inventor/nodes/SoBaseColor.h>
#include <Inventor/nodes/SoSeparator.h>
#include <Inventor/nodes/SoShape.h>
#include <Inventor/nodes/SoTransform.h>
#include <Inventor/nodes/SoSphere.h>
#include <Inventor/nodes/SoMaterial.h>
#include <Inventor/misc/SoProtoInstance.h>
#include <Inventor/VRMLnodes/SoVRMLAppearance.h>
#include <Quarter/Quarter.h>
#include <Quarter/QuarterWidget.h>
#include <QApplication>
#include <QMainWindow>

using namespace SIM::Coin3D::Quarter;
int main(int argc, char ** argv) 
{

  QApplication app(argc, argv);
  Quarter::init();

  SoSeparator * root = new SoSeparator;
  root->ref();

  SoBaseColor * col = new SoBaseColor;
  col->rgb = SbColor(1, 1, 0);
  root->addChild(col);

  root->addChild(new SoCone);

  QMainWindow * mainwin = new QMainWindow();

  QuarterWidget * viewer = new QuarterWidget(mainwin);
  viewer->setNavigationModeFile();
  mainwin->setCentralWidget(viewer);
  viewer->setSceneGraph(root);

  mainwin->show();
  app.exec();
  root->unref();
  delete viewer;

  Quarter::clean();
SoSceneManager* SoSceneManager0 = new SoSceneManager();
SoSceneManager0->setProfile(QString("Full"));
SoSceneManager0->setVersion(QString("4.0"));
Sohead* Sohead1 = new Sohead();
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("Filters.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("This X3D scene involves three sound sources. Each of them is visualized by a 3D object (in our case is a sphere) that depicts the sound effects. Specifically, we have added filters through of them we are able to manage the different sound effects in an impressive way. Filters can be composed of a number of attributes, frequency, detune, gain and the quality factor which also known as Q. Furthermore, the filters are classified in some specific types, depending on the sound effects that produce. In detail, there is the Low-pass filter which can create more muffled sound. Another one is the High-pass filter, which is used to generate tinny sound. Equally important is the Band-pass filter, which cuts off low and high frequencies and passes through only these within a certain range. On the contrary, the Notch filter has exactly the opposite operation of the Band-pass filter. Then is the Low-shelf filter, its role is to change the amount of bass in a sound, as a result the frequencies that are lower than the current frequency get a boost, while them that are over it remain unchanged. Next, the High-shelf filter is responsible for the quantity of treble in a sound. Moreover, Peaking filter is used in order to handle the amount of midrange in a sound. Lastly, there is the All-pass filter, whose role is to introduce phaser effects."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("info"));
Someta4->setContent(QString("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("created"));
Someta6->setContent(QString("28 October 2020"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("modified"));
Someta7->setContent(QString("5 December 2021"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("reference"));
Someta8->setContent(QString("CHANGELOG.txt"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("TODO"));
Someta9->setContent(QString("credit for audio files"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("https://www.medialab.hmu.gr/minipages/x3domAudio"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("identifier"));
Someta11->setContent(QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/Filters.x3d"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("generator"));
Someta12->setContent(QString("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("license"));
Someta13->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta13);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode14 = new SoNode();
SoWorldInfo* SoWorldInfo15 = new SoWorldInfo();
SoWorldInfo15->setTitle(QString("Filters.x3d"));
SoNode14->addChild(*SoWorldInfo15);

SoNavigationInfo* SoNavigationInfo16 = new SoNavigationInfo();
SoNode14->addChild(*SoNavigationInfo16);

SoBackground* SoBackground17 = new SoBackground();
SoBackground17->setSkyColor(new float[]{0.2,0.2,0.2}, 3);
SoNode14->addChild(*SoBackground17);

SoViewpoint* SoViewpoint18 = new SoViewpoint();
SoViewpoint18->setDescription(QString("View entire audio model"));
SoViewpoint18->setOrientation(new float[]{1.0,0.0,0.0,-0.5});
SoViewpoint18->setPosition(new float[]{0.0,500.0,600.0});
SoViewpoint18->setRetainUserOffsets(true);
SoNode14->addChild(*SoViewpoint18);

SoTransform* SoTransform19 = new SoTransform();
SoTransform19->setDEF(QString("TransformAudio1"));
SoTransform19->setTranslation(new float[]{-200.0,50.0,0.0});
SoShape* SoShape20 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance21 = new SoVRMLAppearance();
SoVRMLAppearance21->setDEF(QString("audio_emit"));
SoMaterial* SoMaterial22 = new SoMaterial();
SoMaterial22->setDiffuseColor(new float[]{0.1,0.1,0.1});
SoMaterial22->setEmissiveColor(new float[]{0.8,0.8,0.8});
SoMaterial22->setSpecularColor(new float[]{0.01,0.01,0.01});
SoVRMLAppearance21->addChild(*SoMaterial22);

SoShape20->addChild(*SoVRMLAppearance21);

SoSphere* SoSphere23 = new SoSphere();
SoSphere23->setRadius(30);
SoShape20->setGeometry(*SoSphere23);

SoTransform19->addChild(*SoShape20);

SoNode14->addChild(*SoTransform19);

SoTransform* SoTransform24 = new SoTransform();
SoTransform24->setDEF(QString("TransformAudio2"));
SoTransform24->setTranslation(new float[]{0.0,50.0,0.0});
SoShape* SoShape25 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance26 = new SoVRMLAppearance();
SoVRMLAppearance26->setDEF(QString("audio_emit2"));
SoMaterial* SoMaterial27 = new SoMaterial();
SoMaterial27->setDiffuseColor(new float[]{0.1,0.1,0.1});
SoMaterial27->setEmissiveColor(new float[]{0.8,0.8,0.8});
SoMaterial27->setSpecularColor(new float[]{0.01,0.01,0.01});
SoVRMLAppearance26->addChild(*SoMaterial27);

SoShape25->addChild(*SoVRMLAppearance26);

SoSphere* SoSphere28 = new SoSphere();
SoSphere28->setRadius(30);
SoShape25->setGeometry(*SoSphere28);

SoTransform24->addChild(*SoShape25);

SoNode14->addChild(*SoTransform24);

SoTransform* SoTransform29 = new SoTransform();
SoTransform29->setDEF(QString("TransformAudio3"));
SoTransform29->setTranslation(new float[]{200.0,50.0,0.0});
SoShape* SoShape30 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance31 = new SoVRMLAppearance();
SoVRMLAppearance31->setDEF(QString("audio_emit3"));
SoMaterial* SoMaterial32 = new SoMaterial();
SoMaterial32->setDiffuseColor(new float[]{0.1,0.1,0.1});
SoMaterial32->setEmissiveColor(new float[]{0.8,0.8,0.8});
SoMaterial32->setSpecularColor(new float[]{0.01,0.01,0.01});
SoVRMLAppearance31->addChild(*SoMaterial32);

SoShape30->addChild(*SoVRMLAppearance31);

SoSphere* SoSphere33 = new SoSphere();
SoSphere33->setRadius(30);
SoShape30->setGeometry(*SoSphere33);

SoTransform29->addChild(*SoShape30);

SoNode14->addChild(*SoTransform29);

SoTransform* SoTransform34 = new SoTransform();
SoTransform34->setDEF(QString("AnimData"));
SoTransform34->setTranslation(new float[]{0.0,50.0,0.0});
SoNode14->addChild(*SoTransform34);

SoTransform* SoTransform35 = new SoTransform();
SoTransform35->setDEF(QString("AnimDataBoxH"));
SoTransform35->setTranslation(new float[]{0.0,100.0,0.0});
SoNode14->addChild(*SoTransform35);

SoTransform* SoTransform36 = new SoTransform();
SoTransform36->setDEF(QString("AnimDataBoxM"));
SoTransform36->setTranslation(new float[]{15.0,100.0,0.0});
SoNode14->addChild(*SoTransform36);

SoTransform* SoTransform37 = new SoTransform();
SoTransform37->setDEF(QString("AnimDataBoxL"));
SoTransform37->setTranslation(new float[]{30.0,100.0,0.0});
SoNode14->addChild(*SoTransform37);

SoTransform* SoTransform38 = new SoTransform();
SoTransform38->setDEF(QString("AnimDataBoxMM"));
SoTransform38->setTranslation(new float[]{-15.0,100.0,0.0});
SoNode14->addChild(*SoTransform38);

SoTransform* SoTransform39 = new SoTransform();
SoTransform39->setDEF(QString("AnimDataBoxLM"));
SoTransform39->setTranslation(new float[]{-30.0,100.0,0.0});
SoNode14->addChild(*SoTransform39);

SoTransform* SoTransform40 = new SoTransform();
SoShape* SoShape41 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance42 = new SoVRMLAppearance();
SoVRMLAppearance42->setDEF(QString("floor"));
SoMaterial* SoMaterial43 = new SoMaterial();
SoMaterial43->setDiffuseColor(new float[]{0.1,0.1,0.1});
SoMaterial43->setShininess(0.8);
SoMaterial43->setSpecularColor(new float[]{0.5,0.6,0.7});
SoVRMLAppearance42->addChild(*SoMaterial43);

SoShape41->addChild(*SoVRMLAppearance42);

SoCylinder* SoCylinder44 = new SoCylinder();
SoCylinder44->setRadius(500);
SoShape41->setGeometry(*SoCylinder44);

SoTransform40->addChild(*SoShape41);

SoNode14->addChild(*SoTransform40);

SoListenerPointSource* SoListenerPointSource45 = new SoListenerPointSource();
SoListenerPointSource45->setTrackCurrentView(true);
SoNode14->addChild(*SoListenerPointSource45);

SoStreamAudioDestination* SoStreamAudioDestination46 = new SoStreamAudioDestination();
SoDynamicsCompressor* SoDynamicsCompressor47 = new SoDynamicsCompressor();
SoGain* SoGain48 = new SoGain();
SoSpatialSound* SoSpatialSound49 = new SoSpatialSound();
SoSpatialSound49->setDEF(QString("Audio1"));
SoGain* SoGain50 = new SoGain();
SoAnalyser* SoAnalyser51 = new SoAnalyser();
SoBiquadFilter* SoBiquadFilter52 = new SoBiquadFilter();
SoBiquadFilter52->setDetune(50);
SoBiquadFilter52->setFrequency(600);
SoBiquadFilter52->setQualityFactor(30);
SoBiquadFilter52->setType(QString("ALLPASS"));
SoAudioClip* SoAudioClip53 = new SoAudioClip();
SoAudioClip53->setDescription(QString("Techno beat"));
SoAudioClip53->setLoop(true);
SoAudioClip53->setUrl(new QString[]{QString("sound/techno_beat.mp3"), QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/techno_beat.mp3")}, 2);
SoBiquadFilter52->addChildren(SoAudioClip53);

SoAnalyser51->addChildren(SoBiquadFilter52);

SoGain50->addChildren(SoAnalyser51);

SoSpatialSound49->addChildren(SoGain50);

SoGain48->addChildren(SoSpatialSound49);

SoSpatialSound* SoSpatialSound54 = new SoSpatialSound();
SoSpatialSound54->setDEF(QString("Audio2"));
SoGain* SoGain55 = new SoGain();
SoAnalyser* SoAnalyser56 = new SoAnalyser();
SoBiquadFilter* SoBiquadFilter57 = new SoBiquadFilter();
SoBiquadFilter57->setDetune(15);
SoBiquadFilter57->setFrequency(600);
SoBiquadFilter57->setQualityFactor(15);
SoBiquadFilter57->setType(QString("ALLPASS"));
SoAudioClip* SoAudioClip58 = new SoAudioClip();
SoAudioClip58->setDescription(QString("Simple beat"));
SoAudioClip58->setLoop(true);
SoAudioClip58->setUrl(new QString[]{QString("sound/beat.mp3"), QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/beat.mp3")}, 2);
SoBiquadFilter57->addChildren(SoAudioClip58);

SoAnalyser56->addChildren(SoBiquadFilter57);

SoGain55->addChildren(SoAnalyser56);

SoSpatialSound54->addChildren(SoGain55);

SoGain48->addChildren(SoSpatialSound54);

SoSpatialSound* SoSpatialSound59 = new SoSpatialSound();
SoSpatialSound59->setDEF(QString("Audio3"));
SoGain* SoGain60 = new SoGain();
SoAnalyser* SoAnalyser61 = new SoAnalyser();
SoBiquadFilter* SoBiquadFilter62 = new SoBiquadFilter();
SoBiquadFilter62->setFrequency(1000);
SoBiquadFilter62->setQualityFactor(0);
SoBiquadFilter62->setType(QString("ALLPASS"));
SoAudioClip* SoAudioClip63 = new SoAudioClip();
SoAudioClip63->setDescription(QString("Wobble loop"));
SoAudioClip63->setLoop(true);
SoAudioClip63->setUrl(new QString[]{QString("sound/wobble_loop.mp3"), QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/wobble_loop.mp3")}, 2);
SoBiquadFilter62->addChildren(SoAudioClip63);

SoAnalyser61->addChildren(SoBiquadFilter62);

SoGain60->addChildren(SoAnalyser61);

SoSpatialSound59->addChildren(SoGain60);

SoGain48->addChildren(SoSpatialSound59);

SoDynamicsCompressor47->addChildren(SoGain48);

SoStreamAudioDestination46->addChildren(SoDynamicsCompressor47);

SoNode14->addChild(*SoStreamAudioDestination46);

SoSceneManager0->setSceneGraph(*SoNode14);

return 0;
}

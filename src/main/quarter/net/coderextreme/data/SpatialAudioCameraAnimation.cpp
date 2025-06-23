
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
Someta2->setContent(QString("SpatialAudioCameraAnimation.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world."));
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
Someta11->setContent(QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d"));
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
SoWorldInfo15->setTitle(QString("SpatialAudioCameraAnimation.x3d"));
SoNode14->addChild(*SoWorldInfo15);

SoNavigationInfo* SoNavigationInfo16 = new SoNavigationInfo();
SoNode14->addChild(*SoNavigationInfo16);

SoBackground* SoBackground17 = new SoBackground();
SoBackground17->setBackUrl(new QString[]{QString("images/generic/BK1.png"), QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png")}, 2);
SoBackground17->setBottomUrl(new QString[]{QString("images/generic/DN1.png"), QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png")}, 2);
SoBackground17->setFrontUrl(new QString[]{QString("images/generic/FR1.png"), QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png")}, 2);
SoBackground17->setLeftUrl(new QString[]{QString("images/generic/LF1.png"), QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png")}, 2);
SoBackground17->setRightUrl(new QString[]{QString("images/generic/RT1.png"), QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png")}, 2);
SoBackground17->setTopUrl(new QString[]{QString("images/generic/UP1.png"), QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png")}, 2);
SoNode14->addChild(*SoBackground17);

SoViewpoint* SoViewpoint18 = new SoViewpoint();
SoViewpoint18->setDEF(QString("Camera001"));
SoViewpoint18->setDescription(QString("Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view"));
SoViewpoint18->setOrientation(new float[]{1.0,0.0,0.0,-0.523599});
SoViewpoint18->setPosition(new float[]{0.0,2000.0,3500.0});
SoNode14->addChild(*SoViewpoint18);

SoTimeSensor* SoTimeSensor19 = new SoTimeSensor();
SoTimeSensor19->setDEF(QString("TIMER"));
SoTimeSensor19->setCycleInterval(33.333332);
SoTimeSensor19->setLoop(true);
SoNode14->addChild(*SoTimeSensor19);

SoPositionInterpolator* SoPositionInterpolator20 = new SoPositionInterpolator();
SoPositionInterpolator20->setDEF(QString("Camera001-POS-INTERP"));
SoPositionInterpolator20->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoPositionInterpolator20->setKeyValue(new float[]{0.0,2000.0,3500.0,0.0,2000.0,0.0,0.0,2000.0,-3500.0,0.0,2000.0,0.0,0.0,2000.0,3500.0}, 15);
SoNode14->addChild(*SoPositionInterpolator20);

SoOrientationInterpolator* SoOrientationInterpolator21 = new SoOrientationInterpolator();
SoOrientationInterpolator21->setDEF(QString("Camera001-ROT-INTERP"));
SoOrientationInterpolator21->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator21->setKeyValue(new float[]{1.0,0.0,0.0,-0.523599,0.99999,0.003554,0.002727,-1.309007,0.0,-0.965926,-0.258819,-3.141593,0.002282,-0.793351,-0.60876,-3.135645,1.0,-0.000001,0.0,-0.523599}, 20);
SoNode14->addChild(*SoOrientationInterpolator21);

SoROUTE* SoROUTE22 = new SoROUTE();
SoROUTE22->setFromField(QString("fraction_changed"));
SoROUTE22->setFromNode(QString("TIMER"));
SoROUTE22->setToField(QString("set_fraction"));
SoROUTE22->setToNode(QString("Camera001-POS-INTERP"));
SoNode14->addChild(*SoROUTE22);

SoROUTE* SoROUTE23 = new SoROUTE();
SoROUTE23->setFromField(QString("value_changed"));
SoROUTE23->setFromNode(QString("Camera001-POS-INTERP"));
SoROUTE23->setToField(QString("set_position"));
SoROUTE23->setToNode(QString("Camera001"));
SoNode14->addChild(*SoROUTE23);

SoROUTE* SoROUTE24 = new SoROUTE();
SoROUTE24->setFromField(QString("fraction_changed"));
SoROUTE24->setFromNode(QString("TIMER"));
SoROUTE24->setToField(QString("set_fraction"));
SoROUTE24->setToNode(QString("Camera001-ROT-INTERP"));
SoNode14->addChild(*SoROUTE24);

SoROUTE* SoROUTE25 = new SoROUTE();
SoROUTE25->setFromField(QString("value_changed"));
SoROUTE25->setFromNode(QString("Camera001-ROT-INTERP"));
SoROUTE25->setToField(QString("set_orientation"));
SoROUTE25->setToNode(QString("Camera001"));
SoNode14->addChild(*SoROUTE25);

SoTransform* SoTransform26 = new SoTransform();
SoTransform26->setDEF(QString("Floor"));
SoTransform26->setTranslation(new float[]{1.241,0.0,0.358});
SoShape* SoShape27 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance28 = new SoVRMLAppearance();
SoVRMLAppearance28->setDEF(QString("WireColor"));
SoMaterial* SoMaterial29 = new SoMaterial();
SoMaterial29->setDiffuseColor(new float[]{0.122,0.114,0.125});
SoVRMLAppearance28->addChild(*SoMaterial29);

SoShape27->addChild(*SoVRMLAppearance28);

SoBox* SoBox30 = new SoBox();
SoBox30->setSize(new float[]{2000.0,1.0,2000.0});
SoShape27->setGeometry(*SoBox30);

SoTransform26->addChild(*SoShape27);

SoNode14->addChild(*SoTransform26);

SoTransform* SoTransform31 = new SoTransform();
SoTransform31->setDEF(QString("TransformAudio1"));
SoTransform31->setTranslation(new float[]{-933.123474,0.0,-926.253235});
SoShape* SoShape32 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance33 = new SoVRMLAppearance();
SoVRMLAppearance33->setDEF(QString("WireColor_1"));
SoMaterial* SoMaterial34 = new SoMaterial();
SoMaterial34->setDiffuseColor(new float[]{0.690196,0.101961,0.101961});
SoVRMLAppearance33->addChild(*SoMaterial34);

SoShape32->addChild(*SoVRMLAppearance33);

SoSphere* SoSphere35 = new SoSphere();
SoSphere35->setRadius(100);
SoShape32->setGeometry(*SoSphere35);

SoTransform31->addChild(*SoShape32);

SoBillboard* SoBillboard36 = new SoBillboard();
SoTransform* SoTransform37 = new SoTransform();
SoTransform37->setDEF(QString("violin"));
SoTransform37->setRotation(new float[]{1.0,0.0,0.0,-0.5});
SoTransform37->setScale(new float[]{100.0,100.0,100.0});
SoTransform37->setTranslation(new float[]{0.0,100.0,0.0});
SoShape* SoShape38 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance39 = new SoVRMLAppearance();
SoMaterial* SoMaterial40 = new SoMaterial();
SoMaterial40->setAmbientIntensity(0.0933);
SoMaterial40->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoMaterial40->setShininess(0.51);
SoMaterial40->setSpecularColor(new float[]{0.46,0.46,0.46});
SoVRMLAppearance39->addChild(*SoMaterial40);

SoShape38->addChild(*SoVRMLAppearance39);

SoText* SoText41 = new SoText();
SoText41->setString(new QString[]{QString("Violin")}, 1);
SoFontStyle* SoFontStyle42 = new SoFontStyle();
SoFontStyle42->setDEF(QString("ModelFontStyle"));
SoFontStyle42->setFamily(new QString[]{QString("Times"), QString("SERIF")}, 2);
SoFontStyle42->setStyle(QString("BOLD"));
SoText41->setFontStyle(*SoFontStyle42);

SoShape38->setGeometry(*SoText41);

SoTransform37->addChild(*SoShape38);

SoBillboard36->addChild(*SoTransform37);

SoTransform31->addChild(*SoBillboard36);

SoNode14->addChild(*SoTransform31);

SoTransform* SoTransform43 = new SoTransform();
SoTransform43->setDEF(QString("TransformAudio2"));
SoTransform43->setTranslation(new float[]{933.475586,0.0,924.423218});
SoShape* SoShape44 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance45 = new SoVRMLAppearance();
SoVRMLAppearance45->setDEF(QString("WireColor_2"));
SoMaterial* SoMaterial46 = new SoMaterial();
SoMaterial46->setDiffuseColor(new float[]{0.105882,0.694118,0.580392});
SoVRMLAppearance45->addChild(*SoMaterial46);

SoShape44->addChild(*SoVRMLAppearance45);

SoSphere* SoSphere47 = new SoSphere();
SoSphere47->setRadius(100);
SoShape44->setGeometry(*SoSphere47);

SoTransform43->addChild(*SoShape44);

SoBillboard* SoBillboard48 = new SoBillboard();
SoTransform* SoTransform49 = new SoTransform();
SoTransform49->setDEF(QString("saxophone"));
SoTransform49->setRotation(new float[]{1.0,0.0,0.0,-0.5});
SoTransform49->setScale(new float[]{100.0,100.0,100.0});
SoTransform49->setTranslation(new float[]{0.0,100.0,0.0});
SoShape* SoShape50 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance51 = new SoVRMLAppearance();
SoMaterial* SoMaterial52 = new SoMaterial();
SoMaterial52->setAmbientIntensity(0.0933);
SoMaterial52->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoMaterial52->setShininess(0.51);
SoMaterial52->setSpecularColor(new float[]{0.46,0.46,0.46});
SoVRMLAppearance51->addChild(*SoMaterial52);

SoShape50->addChild(*SoVRMLAppearance51);

SoText* SoText53 = new SoText();
SoText53->setString(new QString[]{QString("Saxophone")}, 1);
SoFontStyle* SoFontStyle54 = new SoFontStyle();
SoFontStyle54->setUSE(QString("ModelFontStyle"));
SoText53->setFontStyle(*SoFontStyle54);

SoShape50->setGeometry(*SoText53);

SoTransform49->addChild(*SoShape50);

SoBillboard48->addChild(*SoTransform49);

SoTransform43->addChild(*SoBillboard48);

SoNode14->addChild(*SoTransform43);

SoListenerPointSource* SoListenerPointSource55 = new SoListenerPointSource();
SoListenerPointSource55->setTrackCurrentView(true);
SoNode14->addChild(*SoListenerPointSource55);

SoStreamAudioDestination* SoStreamAudioDestination56 = new SoStreamAudioDestination();
SoSpatialSound* SoSpatialSound57 = new SoSpatialSound();
SoSpatialSound57->setDEF(QString("Audio1"));
SoGain* SoGain58 = new SoGain();
SoAudioClip* SoAudioClip59 = new SoAudioClip();
SoAudioClip59->setDescription(QString("Violin"));
SoAudioClip59->setLoop(true);
SoAudioClip59->setUrl(new QString[]{QString("sound/violin.mp3"), QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3")}, 2);
SoGain58->addChildren(SoAudioClip59);

SoSpatialSound57->addChildren(SoGain58);

SoStreamAudioDestination56->addChildren(SoSpatialSound57);

SoSpatialSound* SoSpatialSound60 = new SoSpatialSound();
SoSpatialSound60->setDEF(QString("Audio2"));
SoGain* SoGain61 = new SoGain();
SoAudioClip* SoAudioClip62 = new SoAudioClip();
SoAudioClip62->setDescription(QString("Saxophone"));
SoAudioClip62->setLoop(true);
SoAudioClip62->setUrl(new QString[]{QString("sound/saxophone.mp3"), QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3")}, 2);
SoGain61->addChildren(SoAudioClip62);

SoSpatialSound60->addChildren(SoGain61);

SoStreamAudioDestination56->addChildren(SoSpatialSound60);

SoNode14->addChild(*SoStreamAudioDestination56);

SoSceneManager0->setSceneGraph(*SoNode14);

return 0;
}

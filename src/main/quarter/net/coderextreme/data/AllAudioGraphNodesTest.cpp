
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
SoSceneManager0->setProfile(QString("Immersive"));
SoSceneManager0->setVersion(QString("4.0"));
Sohead* Sohead1 = new Sohead();
Socomponent* Socomponent2 = new Socomponent();
Socomponent2->setName(QString("Sound"));
Socomponent2->setLevel(3);
Sohead1->addChild(*Socomponent2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("title"));
Someta3->setContent(QString("AllAudioGraphNodesTest.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working."));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("Don Brutzman"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("created"));
Someta6->setContent(QString("25 October 2020"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("modified"));
Someta7->setContent(QString("Mon, 15 Sep 2025 05:18:43 GMT"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("warning"));
Someta8->setContent(QString("Developmental test, no actual 3D model expected"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("identifier"));
Someta9->setContent(QString("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d"));
Sohead1->addMeta(*Someta9);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode10 = new SoNode();
SoWorldInfo* SoWorldInfo11 = new SoWorldInfo();
SoWorldInfo11->setTitle(QString("AllAudioGraphNodesTest.x3d"));
SoNode10->addChild(*SoWorldInfo11);

SoShape* SoShape12 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance13 = new SoVRMLAppearance();
SoAcousticProperties* SoAcousticProperties14 = new SoAcousticProperties();
SoAcousticProperties14->setDescription(QString("Testing of X3D4 nodes demonstrating W3C Audio API in progress"));
SoAcousticProperties14->setDiffuse(0.25);
SoAcousticProperties14->setSpecular(1);
SoAcousticProperties14->setRefraction(0.5);
SoVRMLAppearance13->setAcousticProperties(SoAcousticProperties14);

SoMaterial* SoMaterial15 = new SoMaterial();
SoVRMLAppearance13->addChild(*SoMaterial15);

SoShape12->addChild(*SoVRMLAppearance13);

SoBox* SoBox16 = new SoBox();
SoShape12->setGeometry(*SoBox16);

SoNode10->addChild(*SoShape12);

SoSound* SoSound17 = new SoSound();
SoSound17->setLocation(new float[]{0.0,1.6,0.0});
SoAudioClip* SoAudioClip18 = new SoAudioClip();
SoAudioClip18->setDescription(QString("testing"));
SoAudioClip18->setUrl(new QString[]{QString("sound/saxophone.mp3"), QString("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3")}, 2);
SoSound17->setSource(*SoAudioClip18);

SoNode10->addChild(*SoSound17);

SoSound* SoSound19 = new SoSound();
SoSound19->setLocation(new float[]{0.0,1.6,0.0});
SoMovieTexture* SoMovieTexture20 = new SoMovieTexture();
SoMovieTexture20->setDescription(QString("testing"));
SoMovieTexture20->setUrl(new QString[]{QString("bogus.mpg"), QString("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg")}, 2);
SoSound19->setSource(SoMovieTexture20);

SoNode10->addChild(*SoSound19);

SoSpatialSound* SoSpatialSound21 = new SoSpatialSound();
SoAnalyser* SoAnalyser22 = new SoAnalyser();
SoStreamAudioDestination* SoStreamAudioDestination23 = new SoStreamAudioDestination();
SoBiquadFilter* SoBiquadFilter24 = new SoBiquadFilter();
SoChannelMerger* SoChannelMerger25 = new SoChannelMerger();
SoChannelSelector* SoChannelSelector26 = new SoChannelSelector();
SoChannelSplitter* SoChannelSplitter27 = new SoChannelSplitter();
SoConvolver* SoConvolver28 = new SoConvolver();
SoDelay* SoDelay29 = new SoDelay();
SoDynamicsCompressor* SoDynamicsCompressor30 = new SoDynamicsCompressor();
SoGain* SoGain31 = new SoGain();
SoStreamAudioDestination* SoStreamAudioDestination32 = new SoStreamAudioDestination();
SoWaveShaper* SoWaveShaper33 = new SoWaveShaper();
SoBufferAudioSource* SoBufferAudioSource34 = new SoBufferAudioSource();
SoWaveShaper33->addChildren(SoBufferAudioSource34);

SoListenerPointSource* SoListenerPointSource35 = new SoListenerPointSource();
SoWaveShaper33->addChildren(SoListenerPointSource35);

SoMicrophoneSource* SoMicrophoneSource36 = new SoMicrophoneSource();
SoWaveShaper33->addChildren(SoMicrophoneSource36);

SoOscillatorSource* SoOscillatorSource37 = new SoOscillatorSource();
SoWaveShaper33->addChildren(SoOscillatorSource37);

SoStreamAudioSource* SoStreamAudioSource38 = new SoStreamAudioSource();
SoWaveShaper33->addChildren(SoStreamAudioSource38);

SoStreamAudioDestination32->addChildren(SoWaveShaper33);

SoGain31->addChildren(SoStreamAudioDestination32);

SoDynamicsCompressor30->addChildren(SoGain31);

SoDelay29->addChildren(SoDynamicsCompressor30);

SoConvolver28->addChildren(SoDelay29);

SoChannelSplitter27->addOutputs(SoConvolver28);

SoChannelSelector26->addChildren(SoChannelSplitter27);

SoChannelMerger25->addChildren(SoChannelSelector26);

SoBiquadFilter24->addChildren(SoChannelMerger25);

SoStreamAudioDestination23->addChildren(SoBiquadFilter24);

SoAnalyser22->addChildren(SoStreamAudioDestination23);

SoSpatialSound21->addChildren(SoAnalyser22);

SoNode10->addChild(*SoSpatialSound21);

SoSceneManager0->setSceneGraph(*SoNode10);

return 0;
}

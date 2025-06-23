
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
Someta2->setContent(QString("SplitChannels.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner."));
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
Someta7->setContent(QString("23 April 2023"));
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
Someta10->setContent(QString("http://www.medialab.hmu.gr/minipages/x3domAudio"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("identifier"));
Someta11->setContent(QString("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d"));
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
SoWorldInfo15->setTitle(QString("SplitChannels.x3d"));
SoNode14->addChild(*SoWorldInfo15);

SoNavigationInfo* SoNavigationInfo16 = new SoNavigationInfo();
SoNavigationInfo16->setType(new QString[]{QString("NONE")}, 1);
SoNode14->addChild(*SoNavigationInfo16);

SoBackground* SoBackground17 = new SoBackground();
SoBackground17->setSkyColor(new float[]{0.2,0.2,0.21}, 3);
SoNode14->addChild(*SoBackground17);

SoViewpoint* SoViewpoint18 = new SoViewpoint();
SoViewpoint18->setOrientation(new float[]{1.0,0.0,0.0,-0.5});
SoViewpoint18->setPosition(new float[]{0.0,500.0,600.0});
SoViewpoint18->setRetainUserOffsets(true);
SoNode14->addChild(*SoViewpoint18);

SoTransform* SoTransform19 = new SoTransform();
SoTransform19->setDEF(QString("PowerR"));
SoTransform19->setTranslation(new float[]{100.0,400.0,400.0});
SoTransform* SoTransform20 = new SoTransform();
SoTransform20->setRotation(new float[]{1.0,0.0,0.0,-0.5});
SoTransform20->setTranslation(new float[]{0.0,40.0,0.0});
SoShape* SoShape21 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance22 = new SoVRMLAppearance();
SoVRMLAppearance22->setDEF(QString("audio_emit"));
SoMaterial* SoMaterial23 = new SoMaterial();
SoMaterial23->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoMaterial23->setEmissiveColor(new float[]{0.8,0.8,0.8});
SoMaterial23->setSpecularColor(new float[]{0.01,0.01,0.01});
SoVRMLAppearance22->addChild(*SoMaterial23);

SoShape21->addChild(*SoVRMLAppearance22);

SoBox* SoBox24 = new SoBox();
SoBox24->setSize(new float[]{10.0,80.0,0.01});
SoShape21->setGeometry(*SoBox24);

SoTransform20->addChild(*SoShape21);

SoTransform19->addChild(*SoTransform20);

SoTransform* SoTransform25 = new SoTransform();
SoTransform25->setRotation(new float[]{1.0,0.0,0.0,-0.5});
SoTransform25->setTranslation(new float[]{-2.7,37.0,0.0});
SoShape* SoShape26 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance27 = new SoVRMLAppearance();
SoVRMLAppearance27->setDEF(QString("audio_emit2"));
SoMaterial* SoMaterial28 = new SoMaterial();
SoMaterial28->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoMaterial28->setEmissiveColor(new float[]{0.8,0.8,0.8});
SoMaterial28->setSpecularColor(new float[]{0.01,0.01,0.01});
SoVRMLAppearance27->addChild(*SoMaterial28);

SoImageTexture* SoImageTexture29 = new SoImageTexture();
SoImageTexture29->setUrl(new QString[]{QString("images/line.png"), QString("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png")}, 2);
SoVRMLAppearance27->addChild(*SoImageTexture29);

SoShape26->addChild(*SoVRMLAppearance27);

SoBox* SoBox30 = new SoBox();
SoBox30->setSize(new float[]{25.0,83.0,0.01});
SoShape26->setGeometry(*SoBox30);

SoTransform25->addChild(*SoShape26);

SoTransform19->addChild(*SoTransform25);

SoTransform* SoTransform31 = new SoTransform();
SoTransform31->setDEF(QString("volumeRight"));
SoTransform31->setRotation(new float[]{1.0,0.0,0.0,-0.5});
SoTransform31->setScale(new float[]{10.0,10.0,10.0});
SoTransform31->setTranslation(new float[]{0.0,-10.0,0.0});
SoShape* SoShape32 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance33 = new SoVRMLAppearance();
SoMaterial* SoMaterial34 = new SoMaterial();
SoMaterial34->setAmbientIntensity(0.0933);
SoMaterial34->setDiffuseColor(new float[]{0.345,0.345,0.882});
SoMaterial34->setShininess(0.51);
SoMaterial34->setSpecularColor(new float[]{0.46,0.46,0.46});
SoVRMLAppearance33->addChild(*SoMaterial34);

SoShape32->addChild(*SoVRMLAppearance33);

SoText* SoText35 = new SoText();
SoText35->setString(new QString[]{QString("Right Channel Volume")}, 1);
SoFontStyle* SoFontStyle36 = new SoFontStyle();
SoFontStyle36->setDEF(QString("VolumeFontStyle"));
SoFontStyle36->setFamily(new QString[]{QString("Times"), QString("SERIF")}, 2);
SoFontStyle36->setStyle(QString("BOLD"));
SoText35->setFontStyle(*SoFontStyle36);

SoShape32->setGeometry(*SoText35);

SoTransform31->addChild(*SoShape32);

SoTransform19->addChild(*SoTransform31);

SoNode14->addChild(*SoTransform19);

SoTransform* SoTransform37 = new SoTransform();
SoTransform37->setDEF(QString("PowerL"));
SoTransform37->setTranslation(new float[]{-100.0,400.0,400.0});
SoTransform* SoTransform38 = new SoTransform();
SoTransform38->setRotation(new float[]{1.0,0.0,0.0,-0.5});
SoTransform38->setTranslation(new float[]{0.0,40.0,0.0});
SoShape* SoShape39 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance40 = new SoVRMLAppearance();
SoVRMLAppearance40->setDEF(QString("audio_emit3"));
SoMaterial* SoMaterial41 = new SoMaterial();
SoMaterial41->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoMaterial41->setEmissiveColor(new float[]{0.8,0.8,0.8});
SoMaterial41->setSpecularColor(new float[]{0.01,0.01,0.01});
SoVRMLAppearance40->addChild(*SoMaterial41);

SoShape39->addChild(*SoVRMLAppearance40);

SoBox* SoBox42 = new SoBox();
SoBox42->setSize(new float[]{10.0,80.0,0.01});
SoShape39->setGeometry(*SoBox42);

SoTransform38->addChild(*SoShape39);

SoTransform37->addChild(*SoTransform38);

SoTransform* SoTransform43 = new SoTransform();
SoTransform43->setRotation(new float[]{1.0,0.0,0.0,-0.5});
SoTransform43->setTranslation(new float[]{13.2,37.0,0.0});
SoShape* SoShape44 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance45 = new SoVRMLAppearance();
SoVRMLAppearance45->setDEF(QString("audio_emit4"));
SoMaterial* SoMaterial46 = new SoMaterial();
SoMaterial46->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoMaterial46->setEmissiveColor(new float[]{0.8,0.8,0.8});
SoMaterial46->setSpecularColor(new float[]{0.01,0.01,0.01});
SoVRMLAppearance45->addChild(*SoMaterial46);

SoImageTexture* SoImageTexture47 = new SoImageTexture();
SoImageTexture47->setUrl(new QString[]{QString("images/line.png"), QString("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png")}, 2);
SoVRMLAppearance45->addChild(*SoImageTexture47);

SoShape44->addChild(*SoVRMLAppearance45);

SoBox* SoBox48 = new SoBox();
SoBox48->setSize(new float[]{25.0,83.0,0.01});
SoShape44->setGeometry(*SoBox48);

SoTransform43->addChild(*SoShape44);

SoTransform37->addChild(*SoTransform43);

SoTransform* SoTransform49 = new SoTransform();
SoTransform49->setDEF(QString("volumeLeft"));
SoTransform49->setRotation(new float[]{1.0,0.0,0.0,-0.5});
SoTransform49->setScale(new float[]{10.0,10.0,10.0});
SoTransform49->setTranslation(new float[]{0.0,-10.0,0.0});
SoShape* SoShape50 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance51 = new SoVRMLAppearance();
SoMaterial* SoMaterial52 = new SoMaterial();
SoMaterial52->setAmbientIntensity(0.0933);
SoMaterial52->setDiffuseColor(new float[]{0.345,0.345,0.882});
SoMaterial52->setShininess(0.51);
SoMaterial52->setSpecularColor(new float[]{0.46,0.46,0.46});
SoVRMLAppearance51->addChild(*SoMaterial52);

SoShape50->addChild(*SoVRMLAppearance51);

SoText* SoText53 = new SoText();
SoText53->setString(new QString[]{QString("Left Channel Volume")}, 1);
SoFontStyle* SoFontStyle54 = new SoFontStyle();
SoFontStyle54->setUSE(QString("VolumeFontStyle"));
SoText53->setFontStyle(*SoFontStyle54);

SoShape50->setGeometry(*SoText53);

SoTransform49->addChild(*SoShape50);

SoTransform37->addChild(*SoTransform49);

SoNode14->addChild(*SoTransform37);

SoTransform* SoTransform55 = new SoTransform();
SoShape* SoShape56 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance57 = new SoVRMLAppearance();
SoVRMLAppearance57->setDEF(QString("floor"));
SoMaterial* SoMaterial58 = new SoMaterial();
SoMaterial58->setDiffuseColor(new float[]{0.1,0.1,0.1});
SoMaterial58->setShininess(0.8);
SoMaterial58->setSpecularColor(new float[]{0.5,0.6,0.7});
SoVRMLAppearance57->addChild(*SoMaterial58);

SoShape56->addChild(*SoVRMLAppearance57);

SoBox* SoBox59 = new SoBox();
SoBox59->setSize(new float[]{1500.0,10.0,500.0});
SoShape56->setGeometry(*SoBox59);

SoTransform55->addChild(*SoShape56);

SoNode14->addChild(*SoTransform55);

SoListenerPointSource* SoListenerPointSource60 = new SoListenerPointSource();
SoListenerPointSource60->setTrackCurrentView(true);
SoNode14->addChild(*SoListenerPointSource60);

SoStreamAudioDestination* SoStreamAudioDestination61 = new SoStreamAudioDestination();
SoGain* SoGain62 = new SoGain();
SoChannelMerger* SoChannelMerger63 = new SoChannelMerger();
SoChannelSelector* SoChannelSelector64 = new SoChannelSelector();
SoGain* SoGain65 = new SoGain();
SoGain65->setUSE(QString("ChannelSplitter"));
SoChannelSelector64->addChildren(SoGain65);

SoChannelMerger63->addChildren(SoChannelSelector64);

SoChannelSelector* SoChannelSelector66 = new SoChannelSelector();
SoChannelSelector66->setChannelSelection(1);
SoGain* SoGain67 = new SoGain();
SoGain67->setUSE(QString("ChannelSplitter"));
SoChannelSelector66->addChildren(SoGain67);

SoChannelMerger63->addChildren(SoChannelSelector66);

SoGain62->addChildren(SoChannelMerger63);

SoStreamAudioDestination61->addChildren(SoGain62);

SoNode14->addChild(*SoStreamAudioDestination61);

SoChannelSplitter* SoChannelSplitter68 = new SoChannelSplitter();
SoChannelSplitter68->setDEF(QString("ChannelSplitter"));
SoChannelSplitter68->setChannelCountMode(QString("EXPLICIT"));
SoAudioClip* SoAudioClip69 = new SoAudioClip();
SoAudioClip69->setDescription(QString("Violin"));
SoAudioClip69->setUrl(new QString[]{QString("sound/violin.mp3"), QString("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3")}, 2);
SoChannelSplitter68->addOutputs(SoAudioClip69);

SoNode14->addChild(*SoChannelSplitter68);

SoTransform* SoTransform70 = new SoTransform();
SoTransform70->setDEF(QString("Audio3"));
SoTransform70->setRotation(new float[]{1.0,0.0,0.0,-0.5});
SoTransform70->setTranslation(new float[]{0.0,100.0,0.0});
SoShape* SoShape71 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance72 = new SoVRMLAppearance();
SoVRMLAppearance72->setDEF(QString("audio_emit5"));
SoMaterial* SoMaterial73 = new SoMaterial();
SoMaterial73->setDiffuseColor(new float[]{0.3,1.0,0.3});
SoMaterial73->setEmissiveColor(new float[]{0.8,0.8,0.8});
SoMaterial73->setSpecularColor(new float[]{0.01,0.01,0.01});
SoVRMLAppearance72->addChild(*SoMaterial73);

SoImageTexture* SoImageTexture74 = new SoImageTexture();
SoImageTexture74->setUrl(new QString[]{QString("images/loudspeaker.png"), QString("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png")}, 2);
SoVRMLAppearance72->addChild(*SoImageTexture74);

SoShape71->addChild(*SoVRMLAppearance72);

SoBox* SoBox75 = new SoBox();
SoBox75->setSize(new float[]{100.0,100.0,0.001});
SoShape71->setGeometry(*SoBox75);

SoTransform70->addChild(*SoShape71);

SoNode14->addChild(*SoTransform70);

SoSceneManager0->setSceneGraph(*SoNode14);

return 0;
}

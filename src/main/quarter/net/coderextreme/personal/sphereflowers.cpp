
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
Socomponent2->setName(QString("Scripting"));
Socomponent2->setLevel(1);
Sohead1->addChild(*Socomponent2);

Socomponent* Socomponent3 = new Socomponent();
Socomponent3->setName(QString("EnvironmentalEffects"));
Socomponent3->setLevel(3);
Sohead1->addChild(*Socomponent3);

Socomponent* Socomponent4 = new Socomponent();
Socomponent4->setName(QString("Shaders"));
Socomponent4->setLevel(1);
Sohead1->addChild(*Socomponent4);

Socomponent* Socomponent5 = new Socomponent();
Socomponent5->setName(QString("CubeMapTexturing"));
Socomponent5->setLevel(1);
Sohead1->addChild(*Socomponent5);

Socomponent* Socomponent6 = new Socomponent();
Socomponent6->setName(QString("Texturing"));
Socomponent6->setLevel(1);
Sohead1->addChild(*Socomponent6);

Socomponent* Socomponent7 = new Socomponent();
Socomponent7->setName(QString("Rendering"));
Socomponent7->setLevel(1);
Sohead1->addChild(*Socomponent7);

Socomponent* Socomponent8 = new Socomponent();
Socomponent8->setName(QString("Grouping"));
Socomponent8->setLevel(3);
Sohead1->addChild(*Socomponent8);

Socomponent* Socomponent9 = new Socomponent();
Socomponent9->setName(QString("Core"));
Socomponent9->setLevel(1);
Sohead1->addChild(*Socomponent9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("title"));
Someta10->setContent(QString("sphereflowers.x3d"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("creator"));
Someta11->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("created"));
Someta12->setContent(QString("Jan 17 2022"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("modified"));
Someta13->setContent(QString("Sep 3 2023"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("description"));
Someta14->setContent(QString("5 or more prismatic flowers"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("generator"));
Someta15->setContent(QString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("identifier"));
Someta16->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/personal/sphereflowers.x3d"));
Sohead1->addMeta(*Someta16);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode17 = new SoNode();
SoNavigationInfo* SoNavigationInfo18 = new SoNavigationInfo();
SoNode17->addChild(*SoNavigationInfo18);

SoBackground* SoBackground19 = new SoBackground();
SoBackground19->setBackUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoBackground19->setBottomUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoBackground19->setFrontUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoBackground19->setLeftUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoBackground19->setRightUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoBackground19->setTopUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoNode17->addChild(*SoBackground19);

SoGroup* SoGroup20 = new SoGroup();
SoExternProtoDeclare* SoExternProtoDeclare21 = new SoExternProtoDeclare();
SoExternProtoDeclare21->setName(QString("FlowerProto"));
SoExternProtoDeclare21->setUrl(new QString[]{QString("../personal/flowerproto.x3d#FlowerProto"), QString("https://coderextreme.net/X3DJSONLD/src/main/personal/flowerproto.x3d#FlowerProto")}, 2);
Sofield* Sofield22 = new Sofield();
Sofield22->setName(QString("vertex"));
Sofield22->setAccessType(QString("inputOutput"));
Sofield22->setType(QString("MFString"));
SoExternProtoDeclare21->addChild(*Sofield22);

Sofield* Sofield23 = new Sofield();
Sofield23->setName(QString("fragment"));
Sofield23->setAccessType(QString("inputOutput"));
Sofield23->setType(QString("MFString"));
SoExternProtoDeclare21->addChild(*Sofield23);

SoGroup20->addChild(*SoExternProtoDeclare21);

SoProtoDeclare* SoProtoDeclare24 = new SoProtoDeclare();
SoProtoDeclare24->setName(QString("flower"));
SoProtoBody* SoProtoBody25 = new SoProtoBody();
SoGroup* SoGroup26 = new SoGroup();
SoProtoInstance* SoProtoInstance27 = new SoProtoInstance();
SoProtoInstance27->setName(QString("FlowerProto"));
SoField* SoField28 = new SoField();
SoField28->setName(QString("vertex"));
SoField28->setValue(QString("\"../shaders/x_ite_flowers_chromatic.vs\""));
SoProtoInstance27->addChild(*SoField28);

SoField* SoField29 = new SoField();
SoField29->setName(QString("fragment"));
SoField29->setValue(QString("\"../shaders/x_ite.fs\""));
SoProtoInstance27->addChild(*SoField29);

SoGroup26->addChild(*SoProtoInstance27);

SoProtoBody25->addChild(*SoGroup26);

SoProtoDeclare24->addChild(*SoProtoBody25);

SoGroup20->addChild(*SoProtoDeclare24);

SoProtoInstance* SoProtoInstance30 = new SoProtoInstance();
SoProtoInstance30->setName(QString("flower"));
SoGroup20->addChild(*SoProtoInstance30);

SoProtoInstance* SoProtoInstance31 = new SoProtoInstance();
SoProtoInstance31->setName(QString("flower"));
SoGroup20->addChild(*SoProtoInstance31);

SoProtoInstance* SoProtoInstance32 = new SoProtoInstance();
SoProtoInstance32->setName(QString("flower"));
SoGroup20->addChild(*SoProtoInstance32);

SoProtoInstance* SoProtoInstance33 = new SoProtoInstance();
SoProtoInstance33->setName(QString("flower"));
SoGroup20->addChild(*SoProtoInstance33);

SoProtoInstance* SoProtoInstance34 = new SoProtoInstance();
SoProtoInstance34->setName(QString("flower"));
SoGroup20->addChild(*SoProtoInstance34);

SoProtoInstance* SoProtoInstance35 = new SoProtoInstance();
SoProtoInstance35->setName(QString("flower"));
SoGroup20->addChild(*SoProtoInstance35);

SoTimeSensor* SoTimeSensor36 = new SoTimeSensor();
SoTimeSensor36->setDEF(QString("SongTime"));
SoTimeSensor36->setLoop(true);
SoGroup20->addChild(*SoTimeSensor36);

SoSound* SoSound37 = new SoSound();
SoSound37->setMaxBack(100);
SoSound37->setMaxFront(100);
SoSound37->setMinBack(20);
SoSound37->setMinFront(20);
SoSound37->setLocation(new float[]{0.0,1.0,0.0});
SoAudioClip* SoAudioClip38 = new SoAudioClip();
SoAudioClip38->setDEF(QString("AudioClip"));
SoAudioClip38->setDescription(QString("Chandubabamusic #1"));
SoAudioClip38->setUrl(new QString[]{QString("../resources/chandubabamusic1.wav"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/chandubabamusic1.wav")}, 2);
SoSound37->setSource(*SoAudioClip38);

SoGroup20->addChild(*SoSound37);

SoROUTE* SoROUTE39 = new SoROUTE();
SoROUTE39->setFromField(QString("cycleTime"));
SoROUTE39->setFromNode(QString("SongTime"));
SoROUTE39->setToField(QString("startTime"));
SoROUTE39->setToNode(QString("AudioClip"));
SoGroup20->addChild(*SoROUTE39);

SoNode17->addChild(*SoGroup20);

SoSceneManager0->setSceneGraph(*SoNode17);

return 0;
}

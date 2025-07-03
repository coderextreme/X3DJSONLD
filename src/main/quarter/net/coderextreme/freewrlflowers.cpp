
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
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("freewrlflowers.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("creator"));
Someta3->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("5 or more prismatic flowers"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("generator"));
Someta5->setContent(QString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("identifier"));
Someta6->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/freewrlflowers.x3d"));
Sohead1->addMeta(*Someta6);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode7 = new SoNode();
SoNavigationInfo* SoNavigationInfo8 = new SoNavigationInfo();
SoNode7->addChild(*SoNavigationInfo8);

SoBackground* SoBackground9 = new SoBackground();
SoBackground9->setBackUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoBackground9->setBottomUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoBackground9->setFrontUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoBackground9->setLeftUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoBackground9->setRightUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoBackground9->setTopUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoNode7->addChild(*SoBackground9);

SoGroup* SoGroup10 = new SoGroup();
SoExternProtoDeclare* SoExternProtoDeclare11 = new SoExternProtoDeclare();
SoExternProtoDeclare11->setName(QString("FlowerProto"));
SoExternProtoDeclare11->setUrl(new QString[]{QString("../data/flowerproto.x3d#FlowerProto")}, 1);
Sofield* Sofield12 = new Sofield();
Sofield12->setName(QString("vertex"));
Sofield12->setAccessType(QString("inputOutput"));
Sofield12->setType(QString("MFString"));
SoExternProtoDeclare11->addChild(*Sofield12);

Sofield* Sofield13 = new Sofield();
Sofield13->setName(QString("fragment"));
Sofield13->setAccessType(QString("inputOutput"));
Sofield13->setType(QString("MFString"));
SoExternProtoDeclare11->addChild(*Sofield13);

SoGroup10->addChild(*SoExternProtoDeclare11);

SoProtoDeclare* SoProtoDeclare14 = new SoProtoDeclare();
SoProtoDeclare14->setName(QString("flower"));
SoProtoBody* SoProtoBody15 = new SoProtoBody();
SoGroup* SoGroup16 = new SoGroup();
SoProtoInstance* SoProtoInstance17 = new SoProtoInstance();
SoProtoInstance17->setName(QString("FlowerProto"));
SoField* SoField18 = new SoField();
SoField18->setName(QString("vertex"));
SoField18->setValue(QString("\"../shaders/freewrl_flowers_chromatic.vs\""));
SoProtoInstance17->addChild(*SoField18);

SoField* SoField19 = new SoField();
SoField19->setName(QString("fragment"));
SoField19->setValue(QString("\"../shaders/freewrl.fs\""));
SoProtoInstance17->addChild(*SoField19);

SoGroup16->addChild(*SoProtoInstance17);

SoProtoBody15->addChild(*SoGroup16);

SoProtoDeclare14->addChild(*SoProtoBody15);

SoGroup10->addChild(*SoProtoDeclare14);

SoProtoInstance* SoProtoInstance20 = new SoProtoInstance();
SoProtoInstance20->setName(QString("flower"));
SoGroup10->addChild(*SoProtoInstance20);

SoProtoInstance* SoProtoInstance21 = new SoProtoInstance();
SoProtoInstance21->setName(QString("flower"));
SoGroup10->addChild(*SoProtoInstance21);

SoProtoInstance* SoProtoInstance22 = new SoProtoInstance();
SoProtoInstance22->setName(QString("flower"));
SoGroup10->addChild(*SoProtoInstance22);

SoProtoInstance* SoProtoInstance23 = new SoProtoInstance();
SoProtoInstance23->setName(QString("flower"));
SoGroup10->addChild(*SoProtoInstance23);

SoProtoInstance* SoProtoInstance24 = new SoProtoInstance();
SoProtoInstance24->setName(QString("flower"));
SoGroup10->addChild(*SoProtoInstance24);

SoProtoInstance* SoProtoInstance25 = new SoProtoInstance();
SoProtoInstance25->setName(QString("flower"));
SoGroup10->addChild(*SoProtoInstance25);

SoNode7->addChild(*SoGroup10);

SoSceneManager0->setSceneGraph(*SoNode7);

return 0;
}

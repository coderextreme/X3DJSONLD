
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

SoViewpoint* SoViewpoint9 = new SoViewpoint();
SoViewpoint9->setDescription(QString("Tour Views"));
SoViewpoint9->setPosition(new float[]{0.0,0.0,50.0});
SoNode7->addChild(*SoViewpoint9);

SoBackground* SoBackground10 = new SoBackground();
SoBackground10->setBackUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoBackground10->setBottomUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoBackground10->setFrontUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoBackground10->setLeftUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoBackground10->setRightUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoBackground10->setTopUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoNode7->addChild(*SoBackground10);

SoGroup* SoGroup11 = new SoGroup();
SoExternProtoDeclare* SoExternProtoDeclare12 = new SoExternProtoDeclare();
SoExternProtoDeclare12->setName(QString("FlowerProto"));
SoExternProtoDeclare12->setUrl(new QString[]{QString("../data/flowerprotofreewrl.x3d#FlowerProto"), QString("https://coderextreme.net/X3DJSONLD/src/main/data/flowerprotofreewrl.x3d#FlowerProto")}, 2);
Sofield* Sofield13 = new Sofield();
Sofield13->setName(QString("vertex"));
Sofield13->setAccessType(QString("inputOutput"));
Sofield13->setType(QString("MFString"));
SoExternProtoDeclare12->addChild(*Sofield13);

Sofield* Sofield14 = new Sofield();
Sofield14->setName(QString("fragment"));
Sofield14->setAccessType(QString("inputOutput"));
Sofield14->setType(QString("MFString"));
SoExternProtoDeclare12->addChild(*Sofield14);

SoGroup11->addChild(*SoExternProtoDeclare12);

SoProtoDeclare* SoProtoDeclare15 = new SoProtoDeclare();
SoProtoDeclare15->setName(QString("flower"));
SoProtoBody* SoProtoBody16 = new SoProtoBody();
SoGroup* SoGroup17 = new SoGroup();
SoProtoInstance* SoProtoInstance18 = new SoProtoInstance();
SoProtoInstance18->setName(QString("FlowerProto"));
SoField* SoField19 = new SoField();
SoField19->setName(QString("vertex"));
SoField19->setValue(QString("\"../shaders/freewrl_flowers_chromatic.vs\""));
SoProtoInstance18->addChild(*SoField19);

SoField* SoField20 = new SoField();
SoField20->setName(QString("fragment"));
SoField20->setValue(QString("\"../shaders/freewrl.fs\""));
SoProtoInstance18->addChild(*SoField20);

SoGroup17->addChild(*SoProtoInstance18);

SoProtoBody16->addChild(*SoGroup17);

SoProtoDeclare15->addChild(*SoProtoBody16);

SoGroup11->addChild(*SoProtoDeclare15);

SoProtoInstance* SoProtoInstance21 = new SoProtoInstance();
SoProtoInstance21->setName(QString("flower"));
SoGroup11->addChild(*SoProtoInstance21);

SoProtoInstance* SoProtoInstance22 = new SoProtoInstance();
SoProtoInstance22->setName(QString("flower"));
SoGroup11->addChild(*SoProtoInstance22);

SoProtoInstance* SoProtoInstance23 = new SoProtoInstance();
SoProtoInstance23->setName(QString("flower"));
SoGroup11->addChild(*SoProtoInstance23);

SoProtoInstance* SoProtoInstance24 = new SoProtoInstance();
SoProtoInstance24->setName(QString("flower"));
SoGroup11->addChild(*SoProtoInstance24);

SoProtoInstance* SoProtoInstance25 = new SoProtoInstance();
SoProtoInstance25->setName(QString("flower"));
SoGroup11->addChild(*SoProtoInstance25);

SoProtoInstance* SoProtoInstance26 = new SoProtoInstance();
SoProtoInstance26->setName(QString("flower"));
SoGroup11->addChild(*SoProtoInstance26);

SoNode7->addChild(*SoGroup11);

SoSceneManager0->setSceneGraph(*SoNode7);

return 0;
}

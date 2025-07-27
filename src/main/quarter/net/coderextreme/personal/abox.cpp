
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
SoSceneManager0->setVersion(QString("3.3"));
Sohead* Sohead1 = new Sohead();
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("abox.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("creator"));
Someta3->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("generator"));
Someta4->setContent(QString("manual"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("identifier"));
Someta5->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/personal/abox.x3d"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("description"));
Someta6->setContent(QString("a box"));
Sohead1->addMeta(*Someta6);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode7 = new SoNode();
SoProtoDeclare* SoProtoDeclare8 = new SoProtoDeclare();
SoProtoDeclare8->setName(QString("anyShape"));
SoProtoInterface* SoProtoInterface9 = new SoProtoInterface();
Sofield* Sofield10 = new Sofield();
Sofield10->setName(QString("myShape"));
Sofield10->setAccessType(QString("inputOutput"));
Sofield10->setType(QString("MFNode"));
SoShape* SoShape11 = new SoShape();
SoSphere* SoSphere12 = new SoSphere();
SoShape11->setGeometry(*SoSphere12);

Sofield10->addChild(*SoShape11);

SoProtoInterface9->addChild(*Sofield10);

SoProtoDeclare8->addChild(*SoProtoInterface9);

SoProtoBody* SoProtoBody13 = new SoProtoBody();
SoTransform* SoTransform14 = new SoTransform();
SoIS* SoIS15 = new SoIS();
Soconnect* Soconnect16 = new Soconnect();
Soconnect16->setNodeField(QString("children"));
Soconnect16->setProtoField(QString("myShape"));
SoIS15->addChild(*Soconnect16);

SoTransform14->addChild(*SoIS15);

SoProtoBody13->addChild(*SoTransform14);

SoProtoDeclare8->addChild(*SoProtoBody13);

SoNode7->addChild(*SoProtoDeclare8);

SoProtoDeclare* SoProtoDeclare17 = new SoProtoDeclare();
SoProtoDeclare17->setName(QString("one"));
SoProtoInterface* SoProtoInterface18 = new SoProtoInterface();
Sofield* Sofield19 = new Sofield();
Sofield19->setName(QString("myShape"));
Sofield19->setAccessType(QString("inputOutput"));
Sofield19->setType(QString("MFNode"));
SoShape* SoShape20 = new SoShape();
SoCylinder* SoCylinder21 = new SoCylinder();
SoShape20->setGeometry(*SoCylinder21);

Sofield19->addChild(*SoShape20);

SoProtoInterface18->addChild(*Sofield19);

SoProtoDeclare17->addChild(*SoProtoInterface18);

SoProtoBody* SoProtoBody22 = new SoProtoBody();
SoTransform* SoTransform23 = new SoTransform();
SoProtoInstance* SoProtoInstance24 = new SoProtoInstance();
SoProtoInstance24->setName(QString("anyShape"));
SoIS* SoIS25 = new SoIS();
Soconnect* Soconnect26 = new Soconnect();
Soconnect26->setNodeField(QString("myShape"));
Soconnect26->setProtoField(QString("myShape"));
SoIS25->addChild(*Soconnect26);

SoProtoInstance24->addChild(*SoIS25);

SoTransform23->addChild(*SoProtoInstance24);

SoProtoBody22->addChild(*SoTransform23);

SoProtoDeclare17->addChild(*SoProtoBody22);

SoNode7->addChild(*SoProtoDeclare17);

SoProtoInstance* SoProtoInstance27 = new SoProtoInstance();
SoProtoInstance27->setName(QString("one"));
SoField* SoField28 = new SoField();
SoField28->setName(QString("myShape"));
SoShape* SoShape29 = new SoShape();
SoBox* SoBox30 = new SoBox();
SoBox30->setSize(new float[]{140.0,140.0,140.0});
SoShape29->setGeometry(*SoBox30);

SoField28->addChild(*SoShape29);

SoProtoInstance27->addChild(*SoField28);

SoNode7->addChild(*SoProtoInstance27);

SoSceneManager0->setSceneGraph(*SoNode7);

return 0;
}


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
Someta2->setContent(QString("ThreeInARow.x3d"));
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
Someta5->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/ThreeInARow.x3d"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("description"));
Someta6->setContent(QString("3 boxes"));
Sohead1->addMeta(*Someta6);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode7 = new SoNode();
SoNavigationInfo* SoNavigationInfo8 = new SoNavigationInfo();
SoNavigationInfo8->setType(new QString[]{QString("EXAMINE")}, 1);
SoNode7->addChild(*SoNavigationInfo8);

SoViewpoint* SoViewpoint9 = new SoViewpoint();
SoViewpoint9->setDescription(QString("Cubes"));
SoViewpoint9->setPosition(new float[]{0.0,0.0,12.0});
SoNode7->addChild(*SoViewpoint9);

SoTransform* SoTransform10 = new SoTransform();
SoTransform10->setDEF(QString("first"));
SoTransform10->setTranslation(new float[]{0.0,2.0,0.0});
SoShape* SoShape11 = new SoShape();
SoShape11->setDEF(QString("ball"));
SoSphere* SoSphere12 = new SoSphere();
SoShape11->setGeometry(*SoSphere12);

SoVRMLAppearance* SoVRMLAppearance13 = new SoVRMLAppearance();
SoMaterial* SoMaterial14 = new SoMaterial();
SoMaterial14->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance13->addChild(*SoMaterial14);

SoShape11->addChild(*SoVRMLAppearance13);

SoTransform10->addChild(*SoShape11);

SoNode7->addChild(*SoTransform10);

SoTransform* SoTransform15 = new SoTransform();
SoShape* SoShape16 = new SoShape();
SoShape16->setUSE(QString("ball"));
SoTransform15->addChild(*SoShape16);

SoNode7->addChild(*SoTransform15);

SoTransform* SoTransform17 = new SoTransform();
SoTransform17->setTranslation(new float[]{0.0,-2.0,0.0});
SoShape* SoShape18 = new SoShape();
SoShape18->setUSE(QString("ball"));
SoTransform17->addChild(*SoShape18);

SoNode7->addChild(*SoTransform17);

SoSceneManager0->setSceneGraph(*SoNode7);

return 0;
}

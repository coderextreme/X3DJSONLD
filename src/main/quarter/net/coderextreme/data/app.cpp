
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
Someta2->setContent(QString("app.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("creator"));
Someta3->setContent(QString("Carlson, I"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("Carlson, II"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("Carlson, III"));
Sohead1->addMeta(*Someta5);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode6 = new SoNode();
SoGroup* SoGroup7 = new SoGroup();
SoShape* SoShape8 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance9 = new SoVRMLAppearance();
SoMaterial* SoMaterial10 = new SoMaterial();
SoMaterial10->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance9->addChild(*SoMaterial10);

SoShape8->addChild(*SoVRMLAppearance9);

SoBox* SoBox11 = new SoBox();
SoShape8->setGeometry(*SoBox11);

SoGroup7->addChild(*SoShape8);

SoNode6->addChild(*SoGroup7);

SoTransform* SoTransform12 = new SoTransform();
SoTransform12->setRotation(new float[]{7.0,8.0,9.0,3.14});
SoTransform12->setScale(new float[]{4.0,5.0,6.0});
SoTransform12->setTranslation(new float[]{1.0,2.0,3.0});
SoNode6->addChild(*SoTransform12);

SoSceneManager0->setSceneGraph(*SoNode6);

return 0;
}

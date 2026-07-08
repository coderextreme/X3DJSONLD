
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
Someta2->setContent(QString("AllenBox.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("creator"));
Someta3->setContent(QString("Allen Box"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("created"));
Someta4->setContent(QString("8 July 2025"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("license"));
Someta5->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta5);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode6 = new SoNode();
SoWorldInfo* SoWorldInfo7 = new SoWorldInfo();
SoWorldInfo7->setTitle(QString("AllenBox.x3d"));
SoNode6->addChild(*SoWorldInfo7);

SoNavigationInfo* SoNavigationInfo8 = new SoNavigationInfo();
SoNavigationInfo8->setAvatarSize(new float[]{0.15,1.53,0.75}, 3);
SoNavigationInfo8->setSpeed(0.5);
SoNavigationInfo8->setType(new QString[]{QString("EXAMINE")}, 1);
SoNode6->addChild(*SoNavigationInfo8);

SoTransform* SoTransform9 = new SoTransform();
SoTransform9->setDEF(QString("Floor"));
SoTransform9->setScale(new float[]{1.0,0.0125,1.0});
SoTransform9->setTranslation(new float[]{0.0,-0.0125,0.0});
SoShape* SoShape10 = new SoShape();
SoBox* SoBox11 = new SoBox();
SoShape10->setGeometry(*SoBox11);

SoVRMLAppearance* SoVRMLAppearance12 = new SoVRMLAppearance();
SoMaterial* SoMaterial13 = new SoMaterial();
SoVRMLAppearance12->addChild(*SoMaterial13);

SoShape10->addChild(*SoVRMLAppearance12);

SoTransform9->addChild(*SoShape10);

SoNode6->addChild(*SoTransform9);

SoSceneManager0->setSceneGraph(*SoNode6);

return 0;
}

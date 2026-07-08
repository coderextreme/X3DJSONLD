
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
Someta2->setContent(QString("ifscube.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("identifier"));
Someta3->setContent(QString("http://coderextreme.net/X3DJSONLD/src/main/data/ifscube.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("Template for an Indexed Face Set"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("created"));
Someta6->setContent(QString("4 April 2017"));
Sohead1->addMeta(*Someta6);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode7 = new SoNode();
SoGroup* SoGroup8 = new SoGroup();
SoShape* SoShape9 = new SoShape();
SoIndexedFaceSet* SoIndexedFaceSet10 = new SoIndexedFaceSet();
SoIndexedFaceSet10->setCreaseAngle(1.57);
SoIndexedFaceSet10->setDEF(QString("IndexedFaceSet"));
SoIndexedFaceSet10->setCoordIndex(new int32_t[]{0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1}, 33);
SoIndexedFaceSet10->setNormalIndex(new int32_t[]{0,-1,0,-1,1,-1,2,-1,3,-1,4,-1,5,-1}, 14);
SoIndexedFaceSet10->setNormalPerVertex(false);
SoIndexedFaceSet10->setColorIndex(new int[]{0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1}, 33);
SoCoordinate* SoCoordinate11 = new SoCoordinate();
SoCoordinate11->setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0}, 12);
SoIndexedFaceSet10->setCoord(*SoCoordinate11);

SoNormal* SoNormal12 = new SoNormal();
SoNormal12->setVector(new float[]{1.0,0.0,0.0,-1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.0,-1.0,0.0,0.0,0.0,1.0}, 18);
SoIndexedFaceSet10->setNormal(*SoNormal12);

SoColor* SoColor13 = new SoColor();
SoColor13->setColor(new float[]{0.0,1.0,0.0}, 3);
SoIndexedFaceSet10->setColor(*SoColor13);

SoShape9->setGeometry(*SoIndexedFaceSet10);

SoGroup8->addChild(*SoShape9);

SoNode7->addChild(*SoGroup8);

SoSceneManager0->setSceneGraph(*SoNode7);

return 0;
}

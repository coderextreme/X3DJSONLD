
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
Someta2->setContent(QString("ifscubeworks.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("identifier"));
Someta3->setContent(QString("http://coderextreme.net/X3DJSONLD/src/main/data/ifscubeworks.x3d"));
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

Someta* Someta7 = new Someta();
Someta7->setName(QString("license"));
Someta7->setContent(QString("https://www.web3d.org/x3d/content/examples/license.html"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("generator"));
Someta8->setContent(QString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta8);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode9 = new SoNode();
SoWorldInfo* SoWorldInfo10 = new SoWorldInfo();
SoWorldInfo10->setTitle(QString("ifscubeworks.x3d"));
SoNode9->addChild(*SoWorldInfo10);

SoGroup* SoGroup11 = new SoGroup();
SoShape* SoShape12 = new SoShape();
SoIndexedFaceSet* SoIndexedFaceSet13 = new SoIndexedFaceSet();
SoIndexedFaceSet13->setDEF(QString("IndexedFaceSet"));
SoIndexedFaceSet13->setCoordIndex(new int32_t[]{0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1}, 33);
SoIndexedFaceSet13->setNormalIndex(new int32_t[]{0,0,1,2,3,4,5}, 7);
SoIndexedFaceSet13->setNormalPerVertex(false);
SoIndexedFaceSet13->setColorIndex(new int[]{0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1}, 33);
SoCoordinate* SoCoordinate14 = new SoCoordinate();
SoCoordinate14->setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0}, 12);
SoIndexedFaceSet13->setCoord(*SoCoordinate14);

SoNormal* SoNormal15 = new SoNormal();
SoNormal15->setVector(new float[]{1.0,0.0,0.0,-1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.0,-1.0,0.0,0.0,0.0,1.0}, 18);
SoIndexedFaceSet13->setNormal(*SoNormal15);

SoColor* SoColor16 = new SoColor();
SoColor16->setColor(new float[]{0.0,1.0,0.0}, 3);
SoIndexedFaceSet13->setColor(*SoColor16);

SoShape12->setGeometry(*SoIndexedFaceSet13);

SoGroup11->addChild(*SoShape12);

SoNode9->addChild(*SoGroup11);

SoSceneManager0->setSceneGraph(*SoNode9);

return 0;
}

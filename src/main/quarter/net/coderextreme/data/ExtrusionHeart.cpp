
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
Someta2->setContent(QString("ExtrusionHeart.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Simple extrusion of a Valentine heart."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("Class participants in course Introduction to VRML/X3D."));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("created"));
Someta5->setContent(QString("14 February 2001"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("modified"));
Someta6->setContent(QString("27 November 2015"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("identifier"));
Someta7->setContent(QString("https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("generator"));
Someta8->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("license"));
Someta9->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta9);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode10 = new SoNode();
SoViewpoint* SoViewpoint11 = new SoViewpoint();
SoViewpoint11->setDescription(QString("Extrusion Heart"));
SoViewpoint11->setOrientation(new float[]{1.0,0.0,0.0,1.57});
SoViewpoint11->setPosition(new float[]{0.0,-4.0,0.0});
SoNode10->addChild(*SoViewpoint11);

SoTransform* SoTransform12 = new SoTransform();
SoTransform12->setTranslation(new float[]{0.0,-0.5,0.0});
SoShape* SoShape13 = new SoShape();
SoExtrusion* SoExtrusion14 = new SoExtrusion();
SoExtrusion14->setCreaseAngle(3.14159);
SoExtrusion14->setCrossSection(new float[]{0.0,0.8,0.2,1.0,0.7,0.95,1.0,0.5,0.8,0.0,0.5,-0.3,0.0,-0.7,-0.5,-0.3,-0.8,0.0,-1.0,0.5,-0.7,0.95,-0.2,1.0,0.0,0.8}, 26);
SoExtrusion14->setScale(new float[]{0.01,0.01,0.8,0.8,1.0,1.0,0.8,0.8,0.01,0.01}, 10);
SoExtrusion14->setSolid(false);
SoExtrusion14->setSpine(new float[]{0.0,0.0,0.0,0.0,0.1,0.0,0.0,0.5,0.0,0.0,0.9,0.0,0.0,1.0,0.0}, 15);
SoShape13->setGeometry(*SoExtrusion14);

SoVRMLAppearance* SoVRMLAppearance15 = new SoVRMLAppearance();
SoMaterial* SoMaterial16 = new SoMaterial();
SoMaterial16->setDiffuseColor(new float[]{0.8,0.3,0.3});
SoVRMLAppearance15->addChild(*SoMaterial16);

SoShape13->addChild(*SoVRMLAppearance15);

SoTransform12->addChild(*SoShape13);

SoNode10->addChild(*SoTransform12);

SoSceneManager0->setSceneGraph(*SoNode10);

return 0;
}


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
Someta2->setContent(QString("qq3.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("creator"));
Someta3->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("translator"));
Someta4->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("created"));
Someta5->setContent(QString("11 Jan 2015"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("modified"));
Someta6->setContent(QString("05 May 2017"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("description"));
Someta7->setContent(QString("12 extrusions"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("identifier"));
Someta8->setContent(QString("https://coderextreme.net/x3d/qq3.x3d"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("generator"));
Someta9->setContent(QString("manual"));
Sohead1->addMeta(*Someta9);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode10 = new SoNode();
SoProtoDeclare* SoProtoDeclare11 = new SoProtoDeclare();
SoProtoDeclare11->setName(QString("Process"));
SoProtoBody* SoProtoBody12 = new SoProtoBody();
SoGroup* SoGroup13 = new SoGroup();
//left
SoTransform* SoTransform14 = new SoTransform();
SoTransform14->setScale(new float[]{0.5,0.5,0.5});
SoShape* SoShape15 = new SoShape();
SoShape15->setDEF(QString("ShapeLeftDown"));
SoVRMLAppearance* SoVRMLAppearance16 = new SoVRMLAppearance();
SoMaterial* SoMaterial17 = new SoMaterial();
SoMaterial17->setDiffuseColor(new float[]{0.7,1.0,0.0});
SoVRMLAppearance16->addChild(*SoMaterial17);

SoShape15->addChild(*SoVRMLAppearance16);

SoExtrusion* SoExtrusion18 = new SoExtrusion();
SoExtrusion18->setSpine(new float[]{-2.5,0.0,0.0,-2.0,0.0,0.0,-1.5,0.0,0.0}, 9);
SoExtrusion18->setCreaseAngle(0.785);
SoExtrusion18->setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
SoShape15->setGeometry(*SoExtrusion18);

SoTransform14->addChild(*SoShape15);

SoGroup13->addChild(*SoTransform14);

//right
SoTransform* SoTransform19 = new SoTransform();
SoTransform19->setScale(new float[]{0.5,0.5,0.5});
SoShape* SoShape20 = new SoShape();
SoShape20->setDEF(QString("ShapeUpRight"));
SoVRMLAppearance* SoVRMLAppearance21 = new SoVRMLAppearance();
SoMaterial* SoMaterial22 = new SoMaterial();
SoMaterial22->setDiffuseColor(new float[]{0.0,0.7,1.0});
SoVRMLAppearance21->addChild(*SoMaterial22);

SoShape20->addChild(*SoVRMLAppearance21);

SoExtrusion* SoExtrusion23 = new SoExtrusion();
SoExtrusion23->setSpine(new float[]{1.5,0.0,0.0,2.0,0.0,0.0,2.5,0.0,0.0}, 9);
SoExtrusion23->setCreaseAngle(0.785);
SoExtrusion23->setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
SoShape20->setGeometry(*SoExtrusion23);

SoTransform19->addChild(*SoShape20);

SoGroup13->addChild(*SoTransform19);

//up
SoTransform* SoTransform24 = new SoTransform();
SoTransform24->setScale(new float[]{0.5,0.5,0.5});
SoShape* SoShape25 = new SoShape();
SoShape25->setUSE(QString("ShapeUpRight"));
SoTransform24->addChild(*SoShape25);

SoGroup13->addChild(*SoTransform24);

//down
SoTransform* SoTransform26 = new SoTransform();
SoTransform26->setScale(new float[]{0.5,0.5,0.5});
SoShape* SoShape27 = new SoShape();
SoShape27->setUSE(QString("ShapeLeftDown"));
SoTransform26->addChild(*SoShape27);

SoGroup13->addChild(*SoTransform26);

SoProtoBody12->addChild(*SoGroup13);

SoProtoDeclare11->addChild(*SoProtoBody12);

SoNode10->addChild(*SoProtoDeclare11);

SoViewpoint* SoViewpoint28 = new SoViewpoint();
SoViewpoint28->setDescription(QString("Process pipes"));
SoViewpoint28->setOrientation(new float[]{1.0,0.0,0.0,-0.4});
SoViewpoint28->setPosition(new float[]{0.0,5.0,12.0});
SoNode10->addChild(*SoViewpoint28);

SoTransform* SoTransform29 = new SoTransform();
SoTransform29->setTranslation(new float[]{0.0,-2.5,0.0});
SoProtoInstance* SoProtoInstance30 = new SoProtoInstance();
SoProtoInstance30->setName(QString("Process"));
SoTransform29->addChild(*SoProtoInstance30);

SoNode10->addChild(*SoTransform29);

SoTransform* SoTransform31 = new SoTransform();
SoProtoInstance* SoProtoInstance32 = new SoProtoInstance();
SoProtoInstance32->setName(QString("Process"));
SoTransform31->addChild(*SoProtoInstance32);

SoNode10->addChild(*SoTransform31);

SoTransform* SoTransform33 = new SoTransform();
SoTransform33->setTranslation(new float[]{0.0,2.5,0.0});
SoProtoInstance* SoProtoInstance34 = new SoProtoInstance();
SoProtoInstance34->setName(QString("Process"));
SoTransform33->addChild(*SoProtoInstance34);

SoNode10->addChild(*SoTransform33);

SoSceneManager0->setSceneGraph(*SoNode10);

return 0;
}

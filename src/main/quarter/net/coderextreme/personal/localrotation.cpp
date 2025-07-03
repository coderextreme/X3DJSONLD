
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
Someta2->setContent(QString("localrotation.x3d"));
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
Someta5->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/personal/localrotation.x3d"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("description"));
Someta6->setContent(QString("chained boxes"));
Sohead1->addMeta(*Someta6);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode7 = new SoNode();
SoWorldInfo* SoWorldInfo8 = new SoWorldInfo();
SoWorldInfo8->setTitle(QString("localrotation.x3d"));
SoNode7->addChild(*SoWorldInfo8);

SoNavigationInfo* SoNavigationInfo9 = new SoNavigationInfo();
SoNavigationInfo9->setType(new QString[]{QString("ANY"), QString("EXAMINE"), QString("FLY"), QString("LOOKAT")}, 4);
SoNode7->addChild(*SoNavigationInfo9);

SoViewpoint* SoViewpoint10 = new SoViewpoint();
SoViewpoint10->setDescription(QString("Tour Views"));
SoViewpoint10->setPosition(new float[]{0.0,0.0,20.0});
SoNode7->addChild(*SoViewpoint10);

SoTransform* SoTransform11 = new SoTransform();
SoTransform11->setTranslation(new float[]{-4.0,0.0,0.0});
SoShape* SoShape12 = new SoShape();
SoBox* SoBox13 = new SoBox();
SoShape12->setGeometry(*SoBox13);

SoTransform11->addChild(*SoShape12);

SoTransform* SoTransform14 = new SoTransform();
SoTransform14->setDEF(QString("TransformTargetParent"));
SoTransform14->setTranslation(new float[]{4.0,0.0,0.0});
SoShape* SoShape15 = new SoShape();
SoBox* SoBox16 = new SoBox();
SoShape15->setGeometry(*SoBox16);

SoTransform14->addChild(*SoShape15);

SoTransform* SoTransform17 = new SoTransform();
SoTransform17->setDEF(QString("TransformTargetChild"));
SoTransform17->setTranslation(new float[]{4.0,0.0,0.0});
SoShape* SoShape18 = new SoShape();
SoBox* SoBox19 = new SoBox();
SoShape18->setGeometry(*SoBox19);

SoTransform17->addChild(*SoShape18);

SoTransform14->addChild(*SoTransform17);

SoTransform11->addChild(*SoTransform14);

SoNode7->addChild(*SoTransform11);

SoProximitySensor* SoProximitySensor20 = new SoProximitySensor();
SoProximitySensor20->setDEF(QString("ActivateSensor"));
SoProximitySensor20->setSize(new float[]{1000000.0,1000000.0,1000000.0});
SoNode7->addChild(*SoProximitySensor20);

SoTimeSensor* SoTimeSensor21 = new SoTimeSensor();
SoTimeSensor21->setDEF(QString("Clock"));
SoNode7->addChild(*SoTimeSensor21);

SoROUTE* SoROUTE22 = new SoROUTE();
SoROUTE22->setFromNode(QString("ActivateSensor"));
SoROUTE22->setFromField(QString("enterTime"));
SoROUTE22->setToNode(QString("Clock"));
SoROUTE22->setToField(QString("set_startTime"));
SoNode7->addChild(*SoROUTE22);

SoOrientationInterpolator* SoOrientationInterpolator23 = new SoOrientationInterpolator();
SoOrientationInterpolator23->setDEF(QString("Rotater"));
SoOrientationInterpolator23->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator23->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.57}, 8);
SoNode7->addChild(*SoOrientationInterpolator23);

SoROUTE* SoROUTE24 = new SoROUTE();
SoROUTE24->setFromNode(QString("Clock"));
SoROUTE24->setFromField(QString("fraction_changed"));
SoROUTE24->setToNode(QString("Rotater"));
SoROUTE24->setToField(QString("set_fraction"));
SoNode7->addChild(*SoROUTE24);

SoROUTE* SoROUTE25 = new SoROUTE();
SoROUTE25->setFromNode(QString("Rotater"));
SoROUTE25->setFromField(QString("value_changed"));
SoROUTE25->setToNode(QString("TransformTargetParent"));
SoROUTE25->setToField(QString("set_rotation"));
SoNode7->addChild(*SoROUTE25);

SoROUTE* SoROUTE26 = new SoROUTE();
SoROUTE26->setFromNode(QString("Rotater"));
SoROUTE26->setFromField(QString("value_changed"));
SoROUTE26->setToNode(QString("TransformTargetChild"));
SoROUTE26->setToField(QString("set_rotation"));
SoNode7->addChild(*SoROUTE26);

SoSceneManager0->setSceneGraph(*SoNode7);

return 0;
}

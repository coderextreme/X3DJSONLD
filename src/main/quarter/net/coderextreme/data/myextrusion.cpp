
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
Someta2->setName(QString("creator"));
Someta2->setContent(QString("John W Carlson"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("created"));
Someta3->setContent(QString("December 13 2015"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("modified"));
Someta4->setContent(QString("November 9 2024"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("title"));
Someta5->setContent(QString("myextrusion.x3d"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("identifier"));
Someta6->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/myextrusion.x3d"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("description"));
Someta7->setContent(QString("beginnings of a force directed graph in 3D"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("generator"));
Someta8->setContent(QString("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta8);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode9 = new SoNode();
SoGroup* SoGroup10 = new SoGroup();
SoShape* SoShape11 = new SoShape();
SoExtrusion* SoExtrusion12 = new SoExtrusion();
SoExtrusion12->setDEF(QString("myextrusion"));
SoExtrusion12->setSpine(new float[]{-50.0,-50.0,0.0,50.0,50.0,0.0}, 6);
SoExtrusion12->setCreaseAngle(0.785);
SoExtrusion12->setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
SoShape11->setGeometry(*SoExtrusion12);

SoVRMLAppearance* SoVRMLAppearance13 = new SoVRMLAppearance();
SoMaterial* SoMaterial14 = new SoMaterial();
SoMaterial14->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoVRMLAppearance13->addChild(*SoMaterial14);

SoShape11->addChild(*SoVRMLAppearance13);

SoGroup10->addChild(*SoShape11);

SoTimeSensor* SoTimeSensor15 = new SoTimeSensor();
SoTimeSensor15->setDEF(QString("TourTime"));
SoTimeSensor15->setLoop(true);
SoGroup10->addChild(*SoTimeSensor15);

SoScript* SoScript16 = new SoScript();
SoScript16->setDEF(QString("MoveCylinder"));
Sofield* Sofield17 = new Sofield();
Sofield17->setName(QString("set_cycle"));
Sofield17->setAccessType(QString("inputOnly"));
Sofield17->setType(QString("SFTime"));
SoScript16->addChild(*Sofield17);

Sofield* Sofield18 = new Sofield();
Sofield18->setName(QString("spine"));
Sofield18->setAccessType(QString("inputOutput"));
Sofield18->setType(QString("MFVec3f"));
Sofield18->setValue(QString("-50 -50 0 50 50 0"));
SoScript16->addChild(*Sofield18);


//SoScript16->setSourceCode(QString("ecmascript:")+
//_T("                function set_cycle(value) {")+
//_T("                        Browser.print(value);")+
//_T("                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);")+
//_T("                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);")+
//_T("                        var tmpspine = new MFVec3f();")+
//_T("			tmpspine[0] = endA;")+
//_T("			tmpspine[1] = endB;")+
//_T("                        spine = tmpspine;")+
//_T("                }"));
SoGroup10->addChild(*SoScript16);

SoROUTE* SoROUTE19 = new SoROUTE();
SoROUTE19->setFromNode(QString("TourTime"));
SoROUTE19->setFromField(QString("cycleTime"));
SoROUTE19->setToNode(QString("MoveCylinder"));
SoROUTE19->setToField(QString("set_cycle"));
SoGroup10->addChild(*SoROUTE19);

SoROUTE* SoROUTE20 = new SoROUTE();
SoROUTE20->setFromNode(QString("MoveCylinder"));
SoROUTE20->setFromField(QString("spine_changed"));
SoROUTE20->setToNode(QString("myextrusion"));
SoROUTE20->setToField(QString("set_spine"));
SoGroup10->addChild(*SoROUTE20);

SoNode9->addChild(*SoGroup10);

SoSceneManager0->setSceneGraph(*SoNode9);

return 0;
}

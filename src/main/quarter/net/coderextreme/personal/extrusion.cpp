
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
Someta4->setName(QString("title"));
Someta4->setContent(QString("extrusion.x3d"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("identifier"));
Someta5->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/personal/extrusion.x3d"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("description"));
Someta6->setContent(QString("beginnings of a force directed graph in 3D"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("generator"));
Someta7->setContent(QString("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta7);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode8 = new SoNode();
SoGroup* SoGroup9 = new SoGroup();
SoShape* SoShape10 = new SoShape();
SoExtrusion* SoExtrusion11 = new SoExtrusion();
SoExtrusion11->setDEF(QString("extrusion"));
SoExtrusion11->setSpine(new float[]{-50.0,-50.0,0.0,50.0,50.0,0.0}, 6);
SoExtrusion11->setCreaseAngle(0.785);
SoExtrusion11->setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
SoShape10->setGeometry(*SoExtrusion11);

SoVRMLAppearance* SoVRMLAppearance12 = new SoVRMLAppearance();
SoMaterial* SoMaterial13 = new SoMaterial();
SoMaterial13->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoVRMLAppearance12->addChild(*SoMaterial13);

SoShape10->addChild(*SoVRMLAppearance12);

SoGroup9->addChild(*SoShape10);

SoTimeSensor* SoTimeSensor14 = new SoTimeSensor();
SoTimeSensor14->setDEF(QString("TourTime"));
SoTimeSensor14->setLoop(true);
SoGroup9->addChild(*SoTimeSensor14);

SoScript* SoScript15 = new SoScript();
SoScript15->setDEF(QString("MoveCylinder"));
Sofield* Sofield16 = new Sofield();
Sofield16->setName(QString("set_cycle"));
Sofield16->setAccessType(QString("inputOnly"));
Sofield16->setType(QString("SFTime"));
SoScript15->addChild(*Sofield16);

Sofield* Sofield17 = new Sofield();
Sofield17->setName(QString("spine"));
Sofield17->setAccessType(QString("inputOutput"));
Sofield17->setType(QString("MFVec3f"));
Sofield17->setValue(QString("-50 -50 0 50 50 0"));
SoScript15->addChild(*Sofield17);


//SoScript15->setSourceCode(QString("ecmascript:")+
//_T("                function set_cycle(value) {")+
//_T("                        Browser.print(value);")+
//_T("                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);")+
//_T("                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);")+
//_T("                        var tmpspine = new MFVec3f();")+
//_T("			tmpspine[0] = endA;")+
//_T("			tmpspine[1] = endB;")+
//_T("                        spine = tmpspine;")+
//_T("                }"));
SoGroup9->addChild(*SoScript15);

SoROUTE* SoROUTE18 = new SoROUTE();
SoROUTE18->setFromNode(QString("TourTime"));
SoROUTE18->setFromField(QString("cycleTime"));
SoROUTE18->setToNode(QString("MoveCylinder"));
SoROUTE18->setToField(QString("set_cycle"));
SoGroup9->addChild(*SoROUTE18);

SoROUTE* SoROUTE19 = new SoROUTE();
SoROUTE19->setFromNode(QString("MoveCylinder"));
SoROUTE19->setFromField(QString("spine_changed"));
SoROUTE19->setToNode(QString("extrusion"));
SoROUTE19->setToField(QString("set_spine"));
SoGroup9->addChild(*SoROUTE19);

SoNode8->addChild(*SoGroup9);

SoSceneManager0->setSceneGraph(*SoNode8);

return 0;
}

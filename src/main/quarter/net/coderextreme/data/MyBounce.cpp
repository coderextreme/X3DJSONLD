
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
Socomponent* Socomponent2 = new Socomponent();
Socomponent2->setName(QString("Scripting"));
Socomponent2->setLevel(1);
Sohead1->addChild(*Socomponent2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("title"));
Someta3->setContent(QString("MyBounce.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("description"));
Someta5->setContent(QString("3 prismatic spheres"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("identifier"));
Someta6->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/SFVec3f.x3d"));
Sohead1->addMeta(*Someta6);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode7 = new SoNode();
SoNavigationInfo* SoNavigationInfo8 = new SoNavigationInfo();
SoNode7->addChild(*SoNavigationInfo8);

SoTransform* SoTransform9 = new SoTransform();
SoTransform9->setDEF(QString("transform"));
SoShape* SoShape10 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance11 = new SoVRMLAppearance();
SoMaterial* SoMaterial12 = new SoMaterial();
SoMaterial12->setDiffuseColor(new float[]{0.7,0.7,0.7});
SoMaterial12->setSpecularColor(new float[]{0.5,0.5,0.5});
SoVRMLAppearance11->addChild(*SoMaterial12);

SoShape10->addChild(*SoVRMLAppearance11);

SoSphere* SoSphere13 = new SoSphere();
SoShape10->setGeometry(*SoSphere13);

SoTransform9->addChild(*SoShape10);

SoNode7->addChild(*SoTransform9);

SoScript* SoScript14 = new SoScript();
SoScript14->setDEF(QString("Bounce2"));
Sofield* Sofield15 = new Sofield();
Sofield15->setName(QString("set_translation"));
Sofield15->setAccessType(QString("inputOnly"));
Sofield15->setType(QString("SFVec3f"));
Sofield15->setValue(QString("0 0 0"));
SoScript14->addChild(*Sofield15);

Sofield* Sofield16 = new Sofield();
Sofield16->setName(QString("translation_changed"));
Sofield16->setAccessType(QString("outputOnly"));
Sofield16->setType(QString("SFVec3f"));
Sofield16->setValue(QString("0 0 0"));
SoScript14->addChild(*Sofield16);

Sofield* Sofield17 = new Sofield();
Sofield17->setName(QString("translation"));
Sofield17->setAccessType(QString("inputOutput"));
Sofield17->setType(QString("SFVec3f"));
Sofield17->setValue(QString("0 0 0"));
SoScript14->addChild(*Sofield17);

Sofield* Sofield18 = new Sofield();
Sofield18->setName(QString("velocity"));
Sofield18->setAccessType(QString("inputOutput"));
Sofield18->setType(QString("SFVec3f"));
Sofield18->setValue(QString("0 0 0"));
SoScript14->addChild(*Sofield18);

Sofield* Sofield19 = new Sofield();
Sofield19->setName(QString("set_fraction"));
Sofield19->setAccessType(QString("inputOnly"));
Sofield19->setType(QString("SFTime"));
SoScript14->addChild(*Sofield19);


//SoScript14->setSourceCode(QString("ecmascript:")+
//_T("			function newBubble() {")+
//_T("			    translation = new SFVec3f(0, 0, 0);")+
//_T("			    velocity = new SFVec3f(")+
//_T("			    	Math.random() - 0.5,")+
//_T("				Math.random() - 0.5,")+
//_T("				Math.random() - 0.5);")+
//_T("			}")+
//_T("			function set_fraction() {")+
//_T("			    translation = new SFVec3f(")+
//_T("			    	translation.x + velocity.x,")+
//_T("				translation.y + velocity.y,")+
//_T("				translation.z + velocity.z);")+
//_T("				if (Math.abs(translation.x) > 10) {")+
//_T("					newBubble();")+
//_T("				} else if (Math.abs(translation.y) > 10) {")+
//_T("					newBubble();")+
//_T("				} else if (Math.abs(translation.z) > 10) {")+
//_T("					newBubble();")+
//_T("				} else {")+
//_T("					velocity = new SFVec3f(")+
//_T("						velocity.x + Math.random() * 0.2 - 0.1,")+
//_T("						velocity.y + Math.random() * 0.2 - 0.1,")+
//_T("						velocity.z + Math.random() * 0.2 - 0.1")+
//_T("					);")+
//_T("				}")+
//_T("			}")+
//_T("			function initialize() {")+
//_T("			     newBubble();")+
//_T("			}"));
SoNode7->addChild(*SoScript14);

SoTimeSensor* SoTimeSensor20 = new SoTimeSensor();
SoTimeSensor20->setDEF(QString("TourTime"));
SoTimeSensor20->setCycleInterval(0.15);
SoTimeSensor20->setLoop(true);
SoNode7->addChild(*SoTimeSensor20);

SoROUTE* SoROUTE21 = new SoROUTE();
SoROUTE21->setFromNode(QString("TourTime"));
SoROUTE21->setFromField(QString("cycleTime"));
SoROUTE21->setToNode(QString("Bounce2"));
SoROUTE21->setToField(QString("set_fraction"));
SoNode7->addChild(*SoROUTE21);

SoROUTE* SoROUTE22 = new SoROUTE();
SoROUTE22->setFromNode(QString("Bounce2"));
SoROUTE22->setFromField(QString("translation_changed"));
SoROUTE22->setToNode(QString("transform"));
SoROUTE22->setToField(QString("set_translation"));
SoNode7->addChild(*SoROUTE22);

SoSceneManager0->setSceneGraph(*SoNode7);

return 0;
}

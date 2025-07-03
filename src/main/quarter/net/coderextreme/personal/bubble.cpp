
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
SoSceneManager0->setVersion(QString("3.3"));
Sohead* Sohead1 = new Sohead();
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("bubble.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("creator"));
Someta3->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("Tour around a prismatic sphere"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("generator"));
Someta5->setContent(QString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("identifier"));
Someta6->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/personal/bubble.x3d"));
Sohead1->addMeta(*Someta6);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode7 = new SoNode();
SoNavigationInfo* SoNavigationInfo8 = new SoNavigationInfo();
SoNavigationInfo8->setType(new QString[]{QString("EXAMINE")}, 1);
SoNode7->addChild(*SoNavigationInfo8);

SoViewpoint* SoViewpoint9 = new SoViewpoint();
SoViewpoint9->setPosition(new float[]{0.0,0.0,4.0});
SoViewpoint9->setOrientation(new float[]{1.0,0.0,0.0,0.0});
SoViewpoint9->setDescription(QString("Bubble in action"));
SoNode7->addChild(*SoViewpoint9);

SoProtoDeclare* SoProtoDeclare10 = new SoProtoDeclare();
SoProtoDeclare10->setName(QString("Bubble"));
SoProtoBody* SoProtoBody11 = new SoProtoBody();
SoTransform* SoTransform12 = new SoTransform();
SoTransform12->setDEF(QString("transform"));
SoShape* SoShape13 = new SoShape();
SoSphere* SoSphere14 = new SoSphere();
SoSphere14->setRadius(0.25);
SoShape13->setGeometry(*SoSphere14);

SoVRMLAppearance* SoVRMLAppearance15 = new SoVRMLAppearance();
SoMaterial* SoMaterial16 = new SoMaterial();
SoMaterial16->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoMaterial16->setTransparency(0.2);
SoVRMLAppearance15->addChild(*SoMaterial16);

SoShape13->addChild(*SoVRMLAppearance15);

SoTransform12->addChild(*SoShape13);

SoScript* SoScript17 = new SoScript();
SoScript17->setDEF(QString("bounce"));
Sofield* Sofield18 = new Sofield();
Sofield18->setName(QString("scale"));
Sofield18->setAccessType(QString("inputOutput"));
Sofield18->setType(QString("SFVec3f"));
Sofield18->setValue(QString("1 1 1"));
SoScript17->addChild(*Sofield18);

Sofield* Sofield19 = new Sofield();
Sofield19->setName(QString("translation"));
Sofield19->setAccessType(QString("inputOutput"));
Sofield19->setType(QString("SFVec3f"));
Sofield19->setValue(QString("0 0 0"));
SoScript17->addChild(*Sofield19);

Sofield* Sofield20 = new Sofield();
Sofield20->setName(QString("velocity"));
Sofield20->setAccessType(QString("inputOutput"));
Sofield20->setType(QString("SFVec3f"));
Sofield20->setValue(QString("0 0 0"));
SoScript17->addChild(*Sofield20);

Sofield* Sofield21 = new Sofield();
Sofield21->setName(QString("scalvel"));
Sofield21->setAccessType(QString("inputOutput"));
Sofield21->setType(QString("SFVec3f"));
Sofield21->setValue(QString("0 0 0"));
SoScript17->addChild(*Sofield21);

Sofield* Sofield22 = new Sofield();
Sofield22->setName(QString("set_fraction"));
Sofield22->setAccessType(QString("inputOnly"));
Sofield22->setType(QString("SFFloat"));
SoScript17->addChild(*Sofield22);


//SoScript17->setSourceCode(QString("ecmascript:")+
//_T("function initialize() {")+
//_T("    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);")+
//_T("    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);")+
//_T("}")+
//_T("function set_fraction(value) {")+
//_T("	translation = new SFVec3f(")+
//_T("		translation.x + velocity.x,")+
//_T("		translation.y + velocity.y,")+
//_T("		translation.z + velocity.z);")+
//_T("	scale = new SFVec3f(")+
//_T("		scale.x + scalvel.x,")+
//_T("		scale.y + scalvel.y,")+
//_T("		scale.z + scalvel.z);")+
//_T("        // if you get to far away or too big, explode")+
//_T("        if ( Math.abs(translation.x) > 256) {")+
//_T("		translation.x = 0;")+
//_T("		initialize();")+
//_T("	}")+
//_T("        if ( Math.abs(translation.y) > 256) {")+
//_T("		translation.y = 0;")+
//_T("		initialize();")+
//_T("	}")+
//_T("        if ( Math.abs(translation.z) > 256) {")+
//_T("		translation.z = 0;")+
//_T("		initialize();")+
//_T("	}")+
//_T("	if (Math.abs(scale.x) > 20) {")+
//_T("		scale.x = scale.x/2;")+
//_T("		translation.x = 0;")+
//_T("		initialize();")+
//_T("	}")+
//_T("	if (Math.abs(scale.y) > 20) {")+
//_T("		scale.y = scale.y/2;")+
//_T("		translation.y = 0;")+
//_T("		initialize();")+
//_T("	}")+
//_T("	if (Math.abs(scale.z) > 20) {")+
//_T("		scale.z = scale.z/2;")+
//_T("		translation.z = 0;")+
//_T("		initialize();")+
//_T("	}")+
//_T("}"));
SoTransform12->addChild(*SoScript17);

SoTimeSensor* SoTimeSensor23 = new SoTimeSensor();
SoTimeSensor23->setDEF(QString("bubbleClock"));
SoTimeSensor23->setCycleInterval(10);
SoTimeSensor23->setLoop(true);
SoTransform12->addChild(*SoTimeSensor23);

SoROUTE* SoROUTE24 = new SoROUTE();
SoROUTE24->setFromNode(QString("bounce"));
SoROUTE24->setFromField(QString("translation_changed"));
SoROUTE24->setToNode(QString("transform"));
SoROUTE24->setToField(QString("set_translation"));
SoTransform12->addChild(*SoROUTE24);

SoROUTE* SoROUTE25 = new SoROUTE();
SoROUTE25->setFromNode(QString("bounce"));
SoROUTE25->setFromField(QString("scale_changed"));
SoROUTE25->setToNode(QString("transform"));
SoROUTE25->setToField(QString("set_scale"));
SoTransform12->addChild(*SoROUTE25);

SoROUTE* SoROUTE26 = new SoROUTE();
SoROUTE26->setFromNode(QString("bubbleClock"));
SoROUTE26->setFromField(QString("fraction_changed"));
SoROUTE26->setToNode(QString("bounce"));
SoROUTE26->setToField(QString("set_fraction"));
SoTransform12->addChild(*SoROUTE26);

SoProtoBody11->addChild(*SoTransform12);

SoProtoDeclare10->addChild(*SoProtoBody11);

SoNode7->addChild(*SoProtoDeclare10);

SoProtoInstance* SoProtoInstance27 = new SoProtoInstance();
SoProtoInstance27->setName(QString("Bubble"));
SoProtoInstance27->setDEF(QString("bubbleA"));
SoNode7->addChild(*SoProtoInstance27);

SoSceneManager0->setSceneGraph(*SoNode7);

return 0;
}

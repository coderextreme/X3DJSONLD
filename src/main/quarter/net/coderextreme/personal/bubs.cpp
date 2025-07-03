
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
Socomponent* Socomponent2 = new Socomponent();
Socomponent2->setName(QString("Scripting"));
Socomponent2->setLevel(1);
Sohead1->addChild(*Socomponent2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("title"));
Someta3->setContent(QString("bubs.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("description"));
Someta5->setContent(QString("Tour around a prismatic sphere"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("generator"));
Someta6->setContent(QString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("identifier"));
Someta7->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/personal/bubs.x3d"));
Sohead1->addMeta(*Someta7);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode8 = new SoNode();
SoNavigationInfo* SoNavigationInfo9 = new SoNavigationInfo();
SoNavigationInfo9->setType(new QString[]{QString("EXAMINE")}, 1);
SoNode8->addChild(*SoNavigationInfo9);

SoViewpoint* SoViewpoint10 = new SoViewpoint();
SoViewpoint10->setPosition(new float[]{0.0,0.0,4.0});
SoViewpoint10->setOrientation(new float[]{1.0,0.0,0.0,0.0});
SoViewpoint10->setDescription(QString("Bubbles in action"));
SoNode8->addChild(*SoViewpoint10);

SoBackground* SoBackground11 = new SoBackground();
SoBackground11->setBackUrl(new QString[]{QString("../resources/images/BK.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png")}, 2);
SoBackground11->setBottomUrl(new QString[]{QString("../resources/images/BT.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png")}, 2);
SoBackground11->setFrontUrl(new QString[]{QString("../resources/images/FR.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png")}, 2);
SoBackground11->setLeftUrl(new QString[]{QString("../resources/images/LF.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png")}, 2);
SoBackground11->setRightUrl(new QString[]{QString("../resources/images/RT.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png")}, 2);
SoBackground11->setTopUrl(new QString[]{QString("../resources/images/TP.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png")}, 2);
SoNode8->addChild(*SoBackground11);

SoProtoDeclare* SoProtoDeclare12 = new SoProtoDeclare();
SoProtoDeclare12->setName(QString("Bubble"));
SoProtoBody* SoProtoBody13 = new SoProtoBody();
SoTransform* SoTransform14 = new SoTransform();
SoTransform14->setDEF(QString("body_trans"));
SoShape* SoShape15 = new SoShape();
SoSphere* SoSphere16 = new SoSphere();
SoSphere16->setRadius(0.25);
SoShape15->setGeometry(*SoSphere16);

SoVRMLAppearance* SoVRMLAppearance17 = new SoVRMLAppearance();
SoMaterial* SoMaterial18 = new SoMaterial();
SoMaterial18->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoMaterial18->setTransparency(0.2);
SoVRMLAppearance17->addChild(*SoMaterial18);

SoShape15->addChild(*SoVRMLAppearance17);

SoTransform14->addChild(*SoShape15);

SoScript* SoScript19 = new SoScript();
SoScript19->setDEF(QString("bounce1"));
Sofield* Sofield20 = new Sofield();
Sofield20->setName(QString("scale"));
Sofield20->setAccessType(QString("inputOutput"));
Sofield20->setType(QString("SFVec3f"));
Sofield20->setValue(QString("1 1 1"));
SoScript19->addChild(*Sofield20);

Sofield* Sofield21 = new Sofield();
Sofield21->setName(QString("translation"));
Sofield21->setAccessType(QString("inputOutput"));
Sofield21->setType(QString("SFVec3f"));
Sofield21->setValue(QString("0 0 0"));
SoScript19->addChild(*Sofield21);

Sofield* Sofield22 = new Sofield();
Sofield22->setName(QString("velocity"));
Sofield22->setAccessType(QString("inputOutput"));
Sofield22->setType(QString("SFVec3f"));
Sofield22->setValue(QString("0 0 0"));
SoScript19->addChild(*Sofield22);

Sofield* Sofield23 = new Sofield();
Sofield23->setName(QString("scalvel"));
Sofield23->setAccessType(QString("inputOutput"));
Sofield23->setType(QString("SFVec3f"));
Sofield23->setValue(QString("0 0 0"));
SoScript19->addChild(*Sofield23);

Sofield* Sofield24 = new Sofield();
Sofield24->setName(QString("set_fraction"));
Sofield24->setAccessType(QString("inputOnly"));
Sofield24->setType(QString("SFFloat"));
SoScript19->addChild(*Sofield24);


//SoScript19->setSourceCode(QString("ecmascript:")+
//_T("function initialize() {")+
//_T("    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);")+
//_T("    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);")+
//_T("}")+
//_T("function set_fraction(value) {")+
//_T("    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);")+
//_T("    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);")+
//_T("    // if you get to far away or too big, explode")+
//_T("    if ( Math.abs(translation.x) > 256) {")+
//_T("	translation.x = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if ( Math.abs(translation.y) > 256) {")+
//_T("	translation.y = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if ( Math.abs(translation.z) > 256) {")+
//_T("	translation.z = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if (Math.abs(scale.x) > 20) {")+
//_T("	scale.x = scale.x/20;")+
//_T("	translation.x = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if (Math.abs(scale.y) > 20) {")+
//_T("	scale.y = scale.y/20;")+
//_T("	translation.y = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if (Math.abs(scale.z) > 20) {")+
//_T("	scale.z = scale.z/20;")+
//_T("	translation.z = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("}"));
SoTransform14->addChild(*SoScript19);

SoTimeSensor* SoTimeSensor25 = new SoTimeSensor();
SoTimeSensor25->setDEF(QString("bubbleClock"));
SoTimeSensor25->setCycleInterval(10);
SoTimeSensor25->setLoop(true);
SoTransform14->addChild(*SoTimeSensor25);

SoROUTE* SoROUTE26 = new SoROUTE();
SoROUTE26->setFromNode(QString("bounce1"));
SoROUTE26->setFromField(QString("translation_changed"));
SoROUTE26->setToNode(QString("body_trans"));
SoROUTE26->setToField(QString("set_translation"));
SoTransform14->addChild(*SoROUTE26);

SoROUTE* SoROUTE27 = new SoROUTE();
SoROUTE27->setFromNode(QString("bounce1"));
SoROUTE27->setFromField(QString("scale_changed"));
SoROUTE27->setToNode(QString("body_trans"));
SoROUTE27->setToField(QString("set_scale"));
SoTransform14->addChild(*SoROUTE27);

SoROUTE* SoROUTE28 = new SoROUTE();
SoROUTE28->setFromNode(QString("bubbleClock"));
SoROUTE28->setFromField(QString("fraction_changed"));
SoROUTE28->setToNode(QString("bounce1"));
SoROUTE28->setToField(QString("set_fraction"));
SoTransform14->addChild(*SoROUTE28);

SoProtoBody13->addChild(*SoTransform14);

SoProtoDeclare12->addChild(*SoProtoBody13);

SoNode8->addChild(*SoProtoDeclare12);

SoProtoInstance* SoProtoInstance29 = new SoProtoInstance();
SoProtoInstance29->setName(QString("Bubble"));
SoProtoInstance29->setDEF(QString("bubbleA"));
SoNode8->addChild(*SoProtoInstance29);

SoProtoInstance* SoProtoInstance30 = new SoProtoInstance();
SoProtoInstance30->setName(QString("Bubble"));
SoProtoInstance30->setDEF(QString("bubbleB"));
SoNode8->addChild(*SoProtoInstance30);

SoProtoInstance* SoProtoInstance31 = new SoProtoInstance();
SoProtoInstance31->setName(QString("Bubble"));
SoProtoInstance31->setDEF(QString("bubbleC"));
SoNode8->addChild(*SoProtoInstance31);

SoProtoInstance* SoProtoInstance32 = new SoProtoInstance();
SoProtoInstance32->setName(QString("Bubble"));
SoProtoInstance32->setDEF(QString("bubbleD"));
SoNode8->addChild(*SoProtoInstance32);

SoSceneManager0->setSceneGraph(*SoNode8);

return 0;
}

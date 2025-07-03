
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
Someta2->setContent(QString("bubs2.x3d"));
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
Someta6->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/personal/geo.x3d"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("translated"));
Someta7->setContent(QString("13 March 2016"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("generator"));
Someta8->setContent(QString("X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"));
Sohead1->addMeta(*Someta8);

Socomponent* Socomponent9 = new Socomponent();
Socomponent9->setName(QString("Scripting"));
Socomponent9->setLevel(1);
Sohead1->addChild(*Socomponent9);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode10 = new SoNode();
SoNavigationInfo* SoNavigationInfo11 = new SoNavigationInfo();
SoNavigationInfo11->setType(new QString[]{QString("EXAMINE")}, 1);
SoNode10->addChild(*SoNavigationInfo11);

SoViewpoint* SoViewpoint12 = new SoViewpoint();
SoViewpoint12->setPosition(new float[]{0.0,0.0,4.0});
SoViewpoint12->setOrientation(new float[]{1.0,0.0,0.0,0.0});
SoViewpoint12->setDescription(QString("Bubbles in action"));
SoNode10->addChild(*SoViewpoint12);

SoBackground* SoBackground13 = new SoBackground();
SoBackground13->setBackUrl(new QString[]{QString("../resources/images/BK.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png")}, 2);
SoBackground13->setBottomUrl(new QString[]{QString("../resources/images/BT.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png")}, 2);
SoBackground13->setFrontUrl(new QString[]{QString("../resources/images/FR.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png")}, 2);
SoBackground13->setLeftUrl(new QString[]{QString("../resources/images/LF.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png")}, 2);
SoBackground13->setRightUrl(new QString[]{QString("../resources/images/RT.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png")}, 2);
SoBackground13->setTopUrl(new QString[]{QString("../resources/images/TP.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png")}, 2);
SoNode10->addChild(*SoBackground13);

SoProtoDeclare* SoProtoDeclare14 = new SoProtoDeclare();
SoProtoDeclare14->setName(QString("Bubble"));
SoProtoBody* SoProtoBody15 = new SoProtoBody();
SoTransform* SoTransform16 = new SoTransform();
SoTransform16->setDEF(QString("body_trans"));
SoShape* SoShape17 = new SoShape();
SoSphere* SoSphere18 = new SoSphere();
SoSphere18->setRadius(0.25);
SoShape17->setGeometry(*SoSphere18);

SoVRMLAppearance* SoVRMLAppearance19 = new SoVRMLAppearance();
SoMaterial* SoMaterial20 = new SoMaterial();
SoMaterial20->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoMaterial20->setTransparency(0.2);
SoVRMLAppearance19->addChild(*SoMaterial20);

SoShape17->addChild(*SoVRMLAppearance19);

SoTransform16->addChild(*SoShape17);

SoScript* SoScript21 = new SoScript();
SoScript21->setDEF(QString("bounce"));
Sofield* Sofield22 = new Sofield();
Sofield22->setName(QString("scale"));
Sofield22->setAccessType(QString("inputOutput"));
Sofield22->setType(QString("SFVec3f"));
Sofield22->setValue(QString("1 1 1"));
SoScript21->addChild(*Sofield22);

Sofield* Sofield23 = new Sofield();
Sofield23->setName(QString("translation"));
Sofield23->setAccessType(QString("inputOutput"));
Sofield23->setType(QString("SFVec3f"));
Sofield23->setValue(QString("0 0 0"));
SoScript21->addChild(*Sofield23);

Sofield* Sofield24 = new Sofield();
Sofield24->setName(QString("velocity"));
Sofield24->setAccessType(QString("inputOutput"));
Sofield24->setType(QString("SFVec3f"));
Sofield24->setValue(QString("0 0 0"));
SoScript21->addChild(*Sofield24);

Sofield* Sofield25 = new Sofield();
Sofield25->setName(QString("scalvel"));
Sofield25->setAccessType(QString("inputOutput"));
Sofield25->setType(QString("SFVec3f"));
Sofield25->setValue(QString("0 0 0"));
SoScript21->addChild(*Sofield25);

Sofield* Sofield26 = new Sofield();
Sofield26->setName(QString("set_fraction"));
Sofield26->setAccessType(QString("inputOnly"));
Sofield26->setType(QString("SFFloat"));
SoScript21->addChild(*Sofield26);


//SoScript21->setSourceCode(QString("ecmascript:")+
//_T("function initialize() {")+
//_T("    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);")+
//_T("    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);")+
//_T("}")+
//_T("function set_fraction(value) {")+
//_T("    if (typeof translation === 'undefined') {")+
//_T("		translation = new SFVec3f(0, 0, 0);")+
//_T("    }")+
//_T("    if (typeof velocity === 'undefined') {")+
//_T("		velocity = new SFVec3f(0, 0, 0);")+
//_T("    }")+
//_T("    if (typeof scalvel === 'undefined') {")+
//_T("		scalvel = new SFVec3f(0, 0, 0);")+
//_T("    }")+
//_T("    if (typeof scale === 'undefined') {")+
//_T("		scale = new SFVec3f(1, 1, 1);")+
//_T("    }")+
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
SoTransform16->addChild(*SoScript21);

SoTimeSensor* SoTimeSensor27 = new SoTimeSensor();
SoTimeSensor27->setDEF(QString("bubbleClock"));
SoTimeSensor27->setCycleInterval(10);
SoTimeSensor27->setLoop(true);
SoTransform16->addChild(*SoTimeSensor27);

SoROUTE* SoROUTE28 = new SoROUTE();
SoROUTE28->setFromNode(QString("bounce"));
SoROUTE28->setFromField(QString("translation_changed"));
SoROUTE28->setToNode(QString("body_trans"));
SoROUTE28->setToField(QString("set_translation"));
SoTransform16->addChild(*SoROUTE28);

SoROUTE* SoROUTE29 = new SoROUTE();
SoROUTE29->setFromNode(QString("bounce"));
SoROUTE29->setFromField(QString("scale_changed"));
SoROUTE29->setToNode(QString("body_trans"));
SoROUTE29->setToField(QString("set_scale"));
SoTransform16->addChild(*SoROUTE29);

SoROUTE* SoROUTE30 = new SoROUTE();
SoROUTE30->setFromNode(QString("bubbleClock"));
SoROUTE30->setFromField(QString("fraction_changed"));
SoROUTE30->setToNode(QString("bounce"));
SoROUTE30->setToField(QString("set_fraction"));
SoTransform16->addChild(*SoROUTE30);

SoProtoBody15->addChild(*SoTransform16);

SoProtoDeclare14->addChild(*SoProtoBody15);

SoNode10->addChild(*SoProtoDeclare14);

SoProtoInstance* SoProtoInstance31 = new SoProtoInstance();
SoProtoInstance31->setName(QString("Bubble"));
SoProtoInstance31->setDEF(QString("bubbleA"));
SoNode10->addChild(*SoProtoInstance31);

SoProtoInstance* SoProtoInstance32 = new SoProtoInstance();
SoProtoInstance32->setName(QString("Bubble"));
SoProtoInstance32->setDEF(QString("bubbleB"));
SoNode10->addChild(*SoProtoInstance32);

SoProtoInstance* SoProtoInstance33 = new SoProtoInstance();
SoProtoInstance33->setName(QString("Bubble"));
SoProtoInstance33->setDEF(QString("bubbleC"));
SoNode10->addChild(*SoProtoInstance33);

SoProtoInstance* SoProtoInstance34 = new SoProtoInstance();
SoProtoInstance34->setName(QString("Bubble"));
SoProtoInstance34->setDEF(QString("bubbleD"));
SoNode10->addChild(*SoProtoInstance34);

SoSceneManager0->setSceneGraph(*SoNode10);

return 0;
}

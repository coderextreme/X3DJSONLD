
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
SoSeparator* SoSeparator0 = new SoSeparator();
SoSeparator0->setProfile(QString("Immersive"));
SoSeparator0->setVersion(QString("3.3"));
Sohead* Sohead1 = new Sohead();
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("rubik.x3d"));
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
Someta5->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/personal/rubik.x3d"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("description"));
Someta6->setContent(QString("a kind of rubik cube with spheres"));
Sohead1->addMeta(*Someta6);

SoSeparator0->setHead(*Sohead1);

SoScene* SoScene7 = new SoScene();
SoNavigationInfo* SoNavigationInfo8 = new SoNavigationInfo();
SoNavigationInfo8->setType(new QString[]{QString("EXAMINE")}, 1);
SoScene7->addChild(*SoNavigationInfo8);

SoViewpoint* SoViewpoint9 = new SoViewpoint();
SoViewpoint9->setDescription(QString("Rubiks Cube"));
SoViewpoint9->setPosition(new float[]{0.0,0.0,12.0});
SoScene7->addChild(*SoViewpoint9);

SoProtoDeclare* SoProtoDeclare10 = new SoProtoDeclare();
SoProtoDeclare10->setName(QString("sphereproto"));
SoProtoInterface* SoProtoInterface11 = new SoProtoInterface();
Sofield* Sofield12 = new Sofield();
Sofield12->setName(QString("xtranslation"));
Sofield12->setAccessType(QString("inputOutput"));
Sofield12->setType(QString("SFVec3f"));
Sofield12->setValue(QString("0 0 0"));
SoProtoInterface11->addChild(*Sofield12);

SoProtoDeclare10->addChild(*SoProtoInterface11);

SoProtoBody* SoProtoBody13 = new SoProtoBody();
SoTransform* SoTransform14 = new SoTransform();
SoIS* SoIS15 = new SoIS();
Soconnect* Soconnect16 = new Soconnect();
Soconnect16->setNodeField(QString("translation"));
Soconnect16->setProtoField(QString("xtranslation"));
SoIS15->addChild(*Soconnect16);

SoTransform14->addChild(*SoIS15);

SoShape* SoShape17 = new SoShape();
SoSphere* SoSphere18 = new SoSphere();
SoShape17->setGeometry(*SoSphere18);

SoVRMLAppearance* SoVRMLAppearance19 = new SoVRMLAppearance();
SoMaterial* SoMaterial20 = new SoMaterial();
SoMaterial20->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance19->addChild(*SoMaterial20);

SoShape17->addChild(*SoVRMLAppearance19);

SoTransform14->addChild(*SoShape17);

SoProtoBody13->addChild(*SoTransform14);

SoProtoDeclare10->addChild(*SoProtoBody13);

SoScene7->addChild(*SoProtoDeclare10);

SoProtoDeclare* SoProtoDeclare21 = new SoProtoDeclare();
SoProtoDeclare21->setName(QString("three"));
SoProtoInterface* SoProtoInterface22 = new SoProtoInterface();
Sofield* Sofield23 = new Sofield();
Sofield23->setName(QString("ytranslation"));
Sofield23->setAccessType(QString("inputOutput"));
Sofield23->setType(QString("SFVec3f"));
Sofield23->setValue(QString("0 0 0"));
SoProtoInterface22->addChild(*Sofield23);

SoProtoDeclare21->addChild(*SoProtoInterface22);

SoProtoBody* SoProtoBody24 = new SoProtoBody();
SoTransform* SoTransform25 = new SoTransform();
SoIS* SoIS26 = new SoIS();
Soconnect* Soconnect27 = new Soconnect();
Soconnect27->setNodeField(QString("translation"));
Soconnect27->setProtoField(QString("ytranslation"));
SoIS26->addChild(*Soconnect27);

SoTransform25->addChild(*SoIS26);

SoProtoInstance* SoProtoInstance28 = new SoProtoInstance();
SoProtoInstance28->setName(QString("sphereproto"));
SofieldValue* SofieldValue29 = new SofieldValue();
SofieldValue29->setName(QString("xtranslation"));
SofieldValue29->setValue(QString("0 0 0"));
SoProtoInstance28->addChild(*SofieldValue29);

SoTransform25->addChild(*SoProtoInstance28);

SoProtoInstance* SoProtoInstance30 = new SoProtoInstance();
SoProtoInstance30->setName(QString("sphereproto"));
SofieldValue* SofieldValue31 = new SofieldValue();
SofieldValue31->setName(QString("xtranslation"));
SofieldValue31->setValue(QString("2 0 0"));
SoProtoInstance30->addChild(*SofieldValue31);

SoTransform25->addChild(*SoProtoInstance30);

SoProtoInstance* SoProtoInstance32 = new SoProtoInstance();
SoProtoInstance32->setName(QString("sphereproto"));
SofieldValue* SofieldValue33 = new SofieldValue();
SofieldValue33->setName(QString("xtranslation"));
SofieldValue33->setValue(QString("-2 0 0"));
SoProtoInstance32->addChild(*SofieldValue33);

SoTransform25->addChild(*SoProtoInstance32);

SoProtoBody24->addChild(*SoTransform25);

SoProtoDeclare21->addChild(*SoProtoBody24);

SoScene7->addChild(*SoProtoDeclare21);

SoProtoDeclare* SoProtoDeclare34 = new SoProtoDeclare();
SoProtoDeclare34->setName(QString("nine"));
SoProtoInterface* SoProtoInterface35 = new SoProtoInterface();
Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("ztranslation"));
Sofield36->setAccessType(QString("inputOutput"));
Sofield36->setType(QString("SFVec3f"));
Sofield36->setValue(QString("0 0 0"));
SoProtoInterface35->addChild(*Sofield36);

SoProtoDeclare34->addChild(*SoProtoInterface35);

SoProtoBody* SoProtoBody37 = new SoProtoBody();
SoTransform* SoTransform38 = new SoTransform();
SoIS* SoIS39 = new SoIS();
Soconnect* Soconnect40 = new Soconnect();
Soconnect40->setNodeField(QString("translation"));
Soconnect40->setProtoField(QString("ztranslation"));
SoIS39->addChild(*Soconnect40);

SoTransform38->addChild(*SoIS39);

SoProtoInstance* SoProtoInstance41 = new SoProtoInstance();
SoProtoInstance41->setName(QString("three"));
SofieldValue* SofieldValue42 = new SofieldValue();
SofieldValue42->setName(QString("ytranslation"));
SofieldValue42->setValue(QString("0 0 0"));
SoProtoInstance41->addChild(*SofieldValue42);

SoTransform38->addChild(*SoProtoInstance41);

SoProtoInstance* SoProtoInstance43 = new SoProtoInstance();
SoProtoInstance43->setName(QString("three"));
SofieldValue* SofieldValue44 = new SofieldValue();
SofieldValue44->setName(QString("ytranslation"));
SofieldValue44->setValue(QString("0 2 0"));
SoProtoInstance43->addChild(*SofieldValue44);

SoTransform38->addChild(*SoProtoInstance43);

SoProtoInstance* SoProtoInstance45 = new SoProtoInstance();
SoProtoInstance45->setName(QString("three"));
SofieldValue* SofieldValue46 = new SofieldValue();
SofieldValue46->setName(QString("ytranslation"));
SofieldValue46->setValue(QString("0 -2 0"));
SoProtoInstance45->addChild(*SofieldValue46);

SoTransform38->addChild(*SoProtoInstance45);

SoProtoBody37->addChild(*SoTransform38);

SoProtoDeclare34->addChild(*SoProtoBody37);

SoScene7->addChild(*SoProtoDeclare34);

SoProtoDeclare* SoProtoDeclare47 = new SoProtoDeclare();
SoProtoDeclare47->setName(QString("twentyseven"));
SoProtoInterface* SoProtoInterface48 = new SoProtoInterface();
Sofield* Sofield49 = new Sofield();
Sofield49->setName(QString("ttranslation"));
Sofield49->setAccessType(QString("inputOutput"));
Sofield49->setType(QString("SFVec3f"));
Sofield49->setValue(QString("0 0 0"));
SoProtoInterface48->addChild(*Sofield49);

SoProtoDeclare47->addChild(*SoProtoInterface48);

SoProtoBody* SoProtoBody50 = new SoProtoBody();
SoTransform* SoTransform51 = new SoTransform();
SoIS* SoIS52 = new SoIS();
Soconnect* Soconnect53 = new Soconnect();
Soconnect53->setNodeField(QString("translation"));
Soconnect53->setProtoField(QString("ttranslation"));
SoIS52->addChild(*Soconnect53);

SoTransform51->addChild(*SoIS52);

SoProtoInstance* SoProtoInstance54 = new SoProtoInstance();
SoProtoInstance54->setName(QString("nine"));
SofieldValue* SofieldValue55 = new SofieldValue();
SofieldValue55->setName(QString("ztranslation"));
SofieldValue55->setValue(QString("0 0 0"));
SoProtoInstance54->addChild(*SofieldValue55);

SoTransform51->addChild(*SoProtoInstance54);

SoProtoInstance* SoProtoInstance56 = new SoProtoInstance();
SoProtoInstance56->setName(QString("nine"));
SofieldValue* SofieldValue57 = new SofieldValue();
SofieldValue57->setName(QString("ztranslation"));
SofieldValue57->setValue(QString("0 0 2"));
SoProtoInstance56->addChild(*SofieldValue57);

SoTransform51->addChild(*SoProtoInstance56);

SoProtoInstance* SoProtoInstance58 = new SoProtoInstance();
SoProtoInstance58->setName(QString("nine"));
SofieldValue* SofieldValue59 = new SofieldValue();
SofieldValue59->setName(QString("ztranslation"));
SofieldValue59->setValue(QString("0 0 -2"));
SoProtoInstance58->addChild(*SofieldValue59);

SoTransform51->addChild(*SoProtoInstance58);

SoProtoBody50->addChild(*SoTransform51);

SoProtoDeclare47->addChild(*SoProtoBody50);

SoScene7->addChild(*SoProtoDeclare47);

SoProtoInstance* SoProtoInstance60 = new SoProtoInstance();
SoProtoInstance60->setName(QString("twentyseven"));
SofieldValue* SofieldValue61 = new SofieldValue();
SofieldValue61->setName(QString("ttranslation"));
SofieldValue61->setValue(QString("0 0 0"));
SoProtoInstance60->addChild(*SofieldValue61);

SoScene7->addChild(*SoProtoInstance60);

SoSeparator0->setScene(*SoScene7);

return 0;
}

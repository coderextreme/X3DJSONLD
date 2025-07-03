
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
Someta2->setContent(QString("BoxEm.x3d"));
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
Someta5->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/personal/box.x3d"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("description"));
Someta6->setContent(QString("3 boxes"));
Sohead1->addMeta(*Someta6);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode7 = new SoNode();
SoNavigationInfo* SoNavigationInfo8 = new SoNavigationInfo();
SoNavigationInfo8->setType(new QString[]{QString("EXAMINE")}, 1);
SoNode7->addChild(*SoNavigationInfo8);

SoViewpoint* SoViewpoint9 = new SoViewpoint();
SoViewpoint9->setDescription(QString("Cubes on Fire"));
SoViewpoint9->setPosition(new float[]{0.0,0.0,12.0});
SoNode7->addChild(*SoViewpoint9);

SoProtoDeclare* SoProtoDeclare10 = new SoProtoDeclare();
SoProtoDeclare10->setName(QString("anyShape"));
SoProtoInterface* SoProtoInterface11 = new SoProtoInterface();
Sofield* Sofield12 = new Sofield();
Sofield12->setName(QString("xtranslation"));
Sofield12->setAccessType(QString("inputOutput"));
Sofield12->setType(QString("SFVec3f"));
Sofield12->setValue(QString("0 0 0"));
SoProtoInterface11->addChild(*Sofield12);

Sofield* Sofield13 = new Sofield();
Sofield13->setName(QString("myShape"));
Sofield13->setAccessType(QString("inputOutput"));
Sofield13->setType(QString("MFNode"));
SoShape* SoShape14 = new SoShape();
SoSphere* SoSphere15 = new SoSphere();
SoShape14->setGeometry(*SoSphere15);

SoVRMLAppearance* SoVRMLAppearance16 = new SoVRMLAppearance();
SoMaterial* SoMaterial17 = new SoMaterial();
SoMaterial17->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance16->addChild(*SoMaterial17);

SoShape14->addChild(*SoVRMLAppearance16);

Sofield13->addChild(*SoShape14);

SoProtoInterface11->addChild(*Sofield13);

SoProtoDeclare10->addChild(*SoProtoInterface11);

SoProtoBody* SoProtoBody18 = new SoProtoBody();
SoTransform* SoTransform19 = new SoTransform();
SoIS* SoIS20 = new SoIS();
Soconnect* Soconnect21 = new Soconnect();
Soconnect21->setNodeField(QString("translation"));
Soconnect21->setProtoField(QString("xtranslation"));
SoIS20->addChild(*Soconnect21);

Soconnect* Soconnect22 = new Soconnect();
Soconnect22->setNodeField(QString("children"));
Soconnect22->setProtoField(QString("myShape"));
SoIS20->addChild(*Soconnect22);

SoTransform19->addChild(*SoIS20);

SoProtoBody18->addChild(*SoTransform19);

SoProtoDeclare10->addChild(*SoProtoBody18);

SoNode7->addChild(*SoProtoDeclare10);

SoProtoDeclare* SoProtoDeclare23 = new SoProtoDeclare();
SoProtoDeclare23->setName(QString("three"));
SoProtoInterface* SoProtoInterface24 = new SoProtoInterface();
Sofield* Sofield25 = new Sofield();
Sofield25->setName(QString("ytranslation"));
Sofield25->setAccessType(QString("inputOutput"));
Sofield25->setType(QString("SFVec3f"));
Sofield25->setValue(QString("0 0 0"));
SoProtoInterface24->addChild(*Sofield25);

Sofield* Sofield26 = new Sofield();
Sofield26->setName(QString("myShape"));
Sofield26->setAccessType(QString("inputOutput"));
Sofield26->setType(QString("MFNode"));
SoShape* SoShape27 = new SoShape();
SoCylinder* SoCylinder28 = new SoCylinder();
SoShape27->setGeometry(*SoCylinder28);

SoVRMLAppearance* SoVRMLAppearance29 = new SoVRMLAppearance();
SoMaterial* SoMaterial30 = new SoMaterial();
SoMaterial30->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance29->addChild(*SoMaterial30);

SoShape27->addChild(*SoVRMLAppearance29);

Sofield26->addChild(*SoShape27);

SoProtoInterface24->addChild(*Sofield26);

SoProtoDeclare23->addChild(*SoProtoInterface24);

SoProtoBody* SoProtoBody31 = new SoProtoBody();
SoTransform* SoTransform32 = new SoTransform();
SoIS* SoIS33 = new SoIS();
Soconnect* Soconnect34 = new Soconnect();
Soconnect34->setNodeField(QString("translation"));
Soconnect34->setProtoField(QString("ytranslation"));
SoIS33->addChild(*Soconnect34);

SoTransform32->addChild(*SoIS33);

SoProtoInstance* SoProtoInstance35 = new SoProtoInstance();
SoProtoInstance35->setName(QString("anyShape"));
SoField* SoField36 = new SoField();
SoField36->setName(QString("xtranslation"));
SoField36->setValue(QString("0 0 0"));
SoProtoInstance35->addChild(*SoField36);

SoIS* SoIS37 = new SoIS();
Soconnect* Soconnect38 = new Soconnect();
Soconnect38->setNodeField(QString("myShape"));
Soconnect38->setProtoField(QString("myShape"));
SoIS37->addChild(*Soconnect38);

SoProtoInstance35->addChild(*SoIS37);

SoTransform32->addChild(*SoProtoInstance35);

SoProtoInstance* SoProtoInstance39 = new SoProtoInstance();
SoProtoInstance39->setName(QString("anyShape"));
SoField* SoField40 = new SoField();
SoField40->setName(QString("xtranslation"));
SoField40->setValue(QString("2 0 0"));
SoProtoInstance39->addChild(*SoField40);

SoIS* SoIS41 = new SoIS();
Soconnect* Soconnect42 = new Soconnect();
Soconnect42->setNodeField(QString("myShape"));
Soconnect42->setProtoField(QString("myShape"));
SoIS41->addChild(*Soconnect42);

SoProtoInstance39->addChild(*SoIS41);

SoTransform32->addChild(*SoProtoInstance39);

SoProtoInstance* SoProtoInstance43 = new SoProtoInstance();
SoProtoInstance43->setName(QString("anyShape"));
SoField* SoField44 = new SoField();
SoField44->setName(QString("xtranslation"));
SoField44->setValue(QString("-2 0 0"));
SoProtoInstance43->addChild(*SoField44);

SoIS* SoIS45 = new SoIS();
Soconnect* Soconnect46 = new Soconnect();
Soconnect46->setNodeField(QString("myShape"));
Soconnect46->setProtoField(QString("myShape"));
SoIS45->addChild(*Soconnect46);

SoProtoInstance43->addChild(*SoIS45);

SoTransform32->addChild(*SoProtoInstance43);

SoProtoBody31->addChild(*SoTransform32);

SoProtoDeclare23->addChild(*SoProtoBody31);

SoNode7->addChild(*SoProtoDeclare23);

SoProtoInstance* SoProtoInstance47 = new SoProtoInstance();
SoProtoInstance47->setName(QString("three"));
SoProtoInstance47->setDEF(QString("threepi"));
SoField* SoField48 = new SoField();
SoField48->setName(QString("ytranslation"));
SoField48->setValue(QString("0 0 0"));
SoProtoInstance47->addChild(*SoField48);

SoField* SoField49 = new SoField();
SoField49->setName(QString("myShape"));
SoShape* SoShape50 = new SoShape();
SoShape50->setDEF(QString("box"));
SoBox* SoBox51 = new SoBox();
SoBox51->setSize(new float[]{1.0,1.0,1.0});
SoShape50->setGeometry(*SoBox51);

SoVRMLAppearance* SoVRMLAppearance52 = new SoVRMLAppearance();
SoMaterial* SoMaterial53 = new SoMaterial();
SoMaterial53->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoVRMLAppearance52->addChild(*SoMaterial53);

SoShape50->addChild(*SoVRMLAppearance52);

SoField49->addChild(*SoShape50);

SoProtoInstance47->addChild(*SoField49);

SoNode7->addChild(*SoProtoInstance47);

SoTransform* SoTransform54 = new SoTransform();
SoTransform54->setTranslation(new float[]{0.0,2.0,0.0});
SoShape* SoShape55 = new SoShape();
SoShape55->setUSE(QString("box"));
SoTransform54->addChild(*SoShape55);

SoNode7->addChild(*SoTransform54);

SoSceneManager0->setSceneGraph(*SoNode7);

return 0;
}

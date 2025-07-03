
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
Someta2->setContent(QString("rubikFurnace.x3d"));
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
Someta5->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/personal/rubikFurnace.x3d"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("description"));
Someta6->setContent(QString("a green rubik cube"));
Sohead1->addMeta(*Someta6);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode7 = new SoNode();
SoNavigationInfo* SoNavigationInfo8 = new SoNavigationInfo();
SoNavigationInfo8->setType(new QString[]{QString("EXAMINE")}, 1);
SoNode7->addChild(*SoNavigationInfo8);

SoViewpoint* SoViewpoint9 = new SoViewpoint();
SoViewpoint9->setDescription(QString("Rubiks Cube on Fire"));
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
SoSphere* SoSphere28 = new SoSphere();
SoShape27->setGeometry(*SoSphere28);

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

SoProtoDeclare* SoProtoDeclare47 = new SoProtoDeclare();
SoProtoDeclare47->setName(QString("nine"));
SoProtoInterface* SoProtoInterface48 = new SoProtoInterface();
Sofield* Sofield49 = new Sofield();
Sofield49->setName(QString("ztranslation"));
Sofield49->setAccessType(QString("inputOutput"));
Sofield49->setType(QString("SFVec3f"));
Sofield49->setValue(QString("0 0 0"));
SoProtoInterface48->addChild(*Sofield49);

Sofield* Sofield50 = new Sofield();
Sofield50->setName(QString("myShape"));
Sofield50->setAccessType(QString("inputOutput"));
Sofield50->setType(QString("MFNode"));
SoShape* SoShape51 = new SoShape();
SoSphere* SoSphere52 = new SoSphere();
SoShape51->setGeometry(*SoSphere52);

SoVRMLAppearance* SoVRMLAppearance53 = new SoVRMLAppearance();
SoMaterial* SoMaterial54 = new SoMaterial();
SoMaterial54->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance53->addChild(*SoMaterial54);

SoShape51->addChild(*SoVRMLAppearance53);

Sofield50->addChild(*SoShape51);

SoProtoInterface48->addChild(*Sofield50);

SoProtoDeclare47->addChild(*SoProtoInterface48);

SoProtoBody* SoProtoBody55 = new SoProtoBody();
SoTransform* SoTransform56 = new SoTransform();
SoIS* SoIS57 = new SoIS();
Soconnect* Soconnect58 = new Soconnect();
Soconnect58->setNodeField(QString("translation"));
Soconnect58->setProtoField(QString("ztranslation"));
SoIS57->addChild(*Soconnect58);

SoTransform56->addChild(*SoIS57);

SoProtoInstance* SoProtoInstance59 = new SoProtoInstance();
SoProtoInstance59->setName(QString("three"));
SoField* SoField60 = new SoField();
SoField60->setName(QString("ytranslation"));
SoField60->setValue(QString("0 0 0"));
SoProtoInstance59->addChild(*SoField60);

SoIS* SoIS61 = new SoIS();
Soconnect* Soconnect62 = new Soconnect();
Soconnect62->setNodeField(QString("myShape"));
Soconnect62->setProtoField(QString("myShape"));
SoIS61->addChild(*Soconnect62);

SoProtoInstance59->addChild(*SoIS61);

SoTransform56->addChild(*SoProtoInstance59);

SoProtoInstance* SoProtoInstance63 = new SoProtoInstance();
SoProtoInstance63->setName(QString("three"));
SoField* SoField64 = new SoField();
SoField64->setName(QString("ytranslation"));
SoField64->setValue(QString("0 2 0"));
SoProtoInstance63->addChild(*SoField64);

SoIS* SoIS65 = new SoIS();
Soconnect* Soconnect66 = new Soconnect();
Soconnect66->setNodeField(QString("myShape"));
Soconnect66->setProtoField(QString("myShape"));
SoIS65->addChild(*Soconnect66);

SoProtoInstance63->addChild(*SoIS65);

SoTransform56->addChild(*SoProtoInstance63);

SoProtoInstance* SoProtoInstance67 = new SoProtoInstance();
SoProtoInstance67->setName(QString("three"));
SoField* SoField68 = new SoField();
SoField68->setName(QString("ytranslation"));
SoField68->setValue(QString("0 -2 0"));
SoProtoInstance67->addChild(*SoField68);

SoIS* SoIS69 = new SoIS();
Soconnect* Soconnect70 = new Soconnect();
Soconnect70->setNodeField(QString("myShape"));
Soconnect70->setProtoField(QString("myShape"));
SoIS69->addChild(*Soconnect70);

SoProtoInstance67->addChild(*SoIS69);

SoTransform56->addChild(*SoProtoInstance67);

SoProtoBody55->addChild(*SoTransform56);

SoProtoDeclare47->addChild(*SoProtoBody55);

SoNode7->addChild(*SoProtoDeclare47);

SoProtoDeclare* SoProtoDeclare71 = new SoProtoDeclare();
SoProtoDeclare71->setName(QString("twentyseven"));
SoProtoInterface* SoProtoInterface72 = new SoProtoInterface();
Sofield* Sofield73 = new Sofield();
Sofield73->setName(QString("ttranslation"));
Sofield73->setAccessType(QString("inputOutput"));
Sofield73->setType(QString("SFVec3f"));
Sofield73->setValue(QString("0 0 0"));
SoProtoInterface72->addChild(*Sofield73);

Sofield* Sofield74 = new Sofield();
Sofield74->setName(QString("myShape"));
Sofield74->setAccessType(QString("inputOutput"));
Sofield74->setType(QString("MFNode"));
SoShape* SoShape75 = new SoShape();
SoSphere* SoSphere76 = new SoSphere();
SoShape75->setGeometry(*SoSphere76);

SoVRMLAppearance* SoVRMLAppearance77 = new SoVRMLAppearance();
SoMaterial* SoMaterial78 = new SoMaterial();
SoMaterial78->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance77->addChild(*SoMaterial78);

SoShape75->addChild(*SoVRMLAppearance77);

Sofield74->addChild(*SoShape75);

SoProtoInterface72->addChild(*Sofield74);

SoProtoDeclare71->addChild(*SoProtoInterface72);

SoProtoBody* SoProtoBody79 = new SoProtoBody();
SoTransform* SoTransform80 = new SoTransform();
SoIS* SoIS81 = new SoIS();
Soconnect* Soconnect82 = new Soconnect();
Soconnect82->setNodeField(QString("translation"));
Soconnect82->setProtoField(QString("ttranslation"));
SoIS81->addChild(*Soconnect82);

SoTransform80->addChild(*SoIS81);

SoProtoInstance* SoProtoInstance83 = new SoProtoInstance();
SoProtoInstance83->setName(QString("nine"));
SoField* SoField84 = new SoField();
SoField84->setName(QString("ztranslation"));
SoField84->setValue(QString("0 0 0"));
SoProtoInstance83->addChild(*SoField84);

SoIS* SoIS85 = new SoIS();
Soconnect* Soconnect86 = new Soconnect();
Soconnect86->setNodeField(QString("myShape"));
Soconnect86->setProtoField(QString("myShape"));
SoIS85->addChild(*Soconnect86);

SoProtoInstance83->addChild(*SoIS85);

SoTransform80->addChild(*SoProtoInstance83);

SoProtoInstance* SoProtoInstance87 = new SoProtoInstance();
SoProtoInstance87->setName(QString("nine"));
SoField* SoField88 = new SoField();
SoField88->setName(QString("ztranslation"));
SoField88->setValue(QString("0 0 2"));
SoProtoInstance87->addChild(*SoField88);

SoIS* SoIS89 = new SoIS();
Soconnect* Soconnect90 = new Soconnect();
Soconnect90->setNodeField(QString("myShape"));
Soconnect90->setProtoField(QString("myShape"));
SoIS89->addChild(*Soconnect90);

SoProtoInstance87->addChild(*SoIS89);

SoTransform80->addChild(*SoProtoInstance87);

SoProtoInstance* SoProtoInstance91 = new SoProtoInstance();
SoProtoInstance91->setName(QString("nine"));
SoField* SoField92 = new SoField();
SoField92->setName(QString("ztranslation"));
SoField92->setValue(QString("0 0 -2"));
SoProtoInstance91->addChild(*SoField92);

SoIS* SoIS93 = new SoIS();
Soconnect* Soconnect94 = new Soconnect();
Soconnect94->setNodeField(QString("myShape"));
Soconnect94->setProtoField(QString("myShape"));
SoIS93->addChild(*Soconnect94);

SoProtoInstance91->addChild(*SoIS93);

SoTransform80->addChild(*SoProtoInstance91);

SoProtoBody79->addChild(*SoTransform80);

SoProtoDeclare71->addChild(*SoProtoBody79);

SoNode7->addChild(*SoProtoDeclare71);

SoProtoInstance* SoProtoInstance95 = new SoProtoInstance();
SoProtoInstance95->setName(QString("twentyseven"));
SoField* SoField96 = new SoField();
SoField96->setName(QString("ttranslation"));
SoField96->setValue(QString("0 0 0"));
SoProtoInstance95->addChild(*SoField96);

SoField* SoField97 = new SoField();
SoField97->setName(QString("myShape"));
SoShape* SoShape98 = new SoShape();
SoBox* SoBox99 = new SoBox();
SoBox99->setSize(new float[]{1.0,1.0,1.0});
SoShape98->setGeometry(*SoBox99);

SoVRMLAppearance* SoVRMLAppearance100 = new SoVRMLAppearance();
SoMaterial* SoMaterial101 = new SoMaterial();
SoMaterial101->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoVRMLAppearance100->addChild(*SoMaterial101);

SoShape98->addChild(*SoVRMLAppearance100);

SoField97->addChild(*SoShape98);

SoProtoInstance95->addChild(*SoField97);

SoNode7->addChild(*SoProtoInstance95);

SoSceneManager0->setSceneGraph(*SoNode7);

return 0;
}

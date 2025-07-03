
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
Someta2->setContent(QString("rubikOnFire.x3d"));
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
Someta5->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/personal/rubikOnFire.x3d"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("description"));
Someta6->setContent(QString("a white rubik cube"));
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
Sofield13->setType(QString("SFNode"));
SoSphere* SoSphere14 = new SoSphere();
Sofield13->addChild(*SoSphere14);

SoProtoInterface11->addChild(*Sofield13);

SoProtoDeclare10->addChild(*SoProtoInterface11);

SoProtoBody* SoProtoBody15 = new SoProtoBody();
SoTransform* SoTransform16 = new SoTransform();
SoIS* SoIS17 = new SoIS();
Soconnect* Soconnect18 = new Soconnect();
Soconnect18->setNodeField(QString("translation"));
Soconnect18->setProtoField(QString("xtranslation"));
SoIS17->addChild(*Soconnect18);

SoTransform16->addChild(*SoIS17);

SoShape* SoShape19 = new SoShape();
SoIS* SoIS20 = new SoIS();
Soconnect* Soconnect21 = new Soconnect();
Soconnect21->setNodeField(QString("geometry"));
Soconnect21->setProtoField(QString("myShape"));
SoIS20->addChild(*Soconnect21);

SoShape19->addChild(*SoIS20);

SoVRMLAppearance* SoVRMLAppearance22 = new SoVRMLAppearance();
SoMaterial* SoMaterial23 = new SoMaterial();
SoMaterial23->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance22->addChild(*SoMaterial23);

SoShape19->addChild(*SoVRMLAppearance22);

SoTransform16->addChild(*SoShape19);

SoProtoBody15->addChild(*SoTransform16);

SoProtoDeclare10->addChild(*SoProtoBody15);

SoNode7->addChild(*SoProtoDeclare10);

SoProtoDeclare* SoProtoDeclare24 = new SoProtoDeclare();
SoProtoDeclare24->setName(QString("three"));
SoProtoInterface* SoProtoInterface25 = new SoProtoInterface();
Sofield* Sofield26 = new Sofield();
Sofield26->setName(QString("ytranslation"));
Sofield26->setAccessType(QString("inputOutput"));
Sofield26->setType(QString("SFVec3f"));
Sofield26->setValue(QString("0 0 0"));
SoProtoInterface25->addChild(*Sofield26);

Sofield* Sofield27 = new Sofield();
Sofield27->setName(QString("myShape"));
Sofield27->setAccessType(QString("inputOutput"));
Sofield27->setType(QString("SFNode"));
SoSphere* SoSphere28 = new SoSphere();
Sofield27->addChild(*SoSphere28);

SoProtoInterface25->addChild(*Sofield27);

SoProtoDeclare24->addChild(*SoProtoInterface25);

SoProtoBody* SoProtoBody29 = new SoProtoBody();
SoTransform* SoTransform30 = new SoTransform();
SoIS* SoIS31 = new SoIS();
Soconnect* Soconnect32 = new Soconnect();
Soconnect32->setNodeField(QString("translation"));
Soconnect32->setProtoField(QString("ytranslation"));
SoIS31->addChild(*Soconnect32);

SoTransform30->addChild(*SoIS31);

SoProtoInstance* SoProtoInstance33 = new SoProtoInstance();
SoProtoInstance33->setName(QString("anyShape"));
SoField* SoField34 = new SoField();
SoField34->setName(QString("xtranslation"));
SoField34->setValue(QString("0 0 0"));
SoProtoInstance33->addChild(*SoField34);

SoIS* SoIS35 = new SoIS();
Soconnect* Soconnect36 = new Soconnect();
Soconnect36->setNodeField(QString("myShape"));
Soconnect36->setProtoField(QString("myShape"));
SoIS35->addChild(*Soconnect36);

SoProtoInstance33->addChild(*SoIS35);

SoTransform30->addChild(*SoProtoInstance33);

SoProtoInstance* SoProtoInstance37 = new SoProtoInstance();
SoProtoInstance37->setName(QString("anyShape"));
SoField* SoField38 = new SoField();
SoField38->setName(QString("xtranslation"));
SoField38->setValue(QString("2 0 0"));
SoProtoInstance37->addChild(*SoField38);

SoIS* SoIS39 = new SoIS();
Soconnect* Soconnect40 = new Soconnect();
Soconnect40->setNodeField(QString("myShape"));
Soconnect40->setProtoField(QString("myShape"));
SoIS39->addChild(*Soconnect40);

SoProtoInstance37->addChild(*SoIS39);

SoTransform30->addChild(*SoProtoInstance37);

SoProtoInstance* SoProtoInstance41 = new SoProtoInstance();
SoProtoInstance41->setName(QString("anyShape"));
SoField* SoField42 = new SoField();
SoField42->setName(QString("xtranslation"));
SoField42->setValue(QString("-2 0 0"));
SoProtoInstance41->addChild(*SoField42);

SoIS* SoIS43 = new SoIS();
Soconnect* Soconnect44 = new Soconnect();
Soconnect44->setNodeField(QString("myShape"));
Soconnect44->setProtoField(QString("myShape"));
SoIS43->addChild(*Soconnect44);

SoProtoInstance41->addChild(*SoIS43);

SoTransform30->addChild(*SoProtoInstance41);

SoProtoBody29->addChild(*SoTransform30);

SoProtoDeclare24->addChild(*SoProtoBody29);

SoNode7->addChild(*SoProtoDeclare24);

SoProtoDeclare* SoProtoDeclare45 = new SoProtoDeclare();
SoProtoDeclare45->setName(QString("nine"));
SoProtoInterface* SoProtoInterface46 = new SoProtoInterface();
Sofield* Sofield47 = new Sofield();
Sofield47->setName(QString("ztranslation"));
Sofield47->setAccessType(QString("inputOutput"));
Sofield47->setType(QString("SFVec3f"));
Sofield47->setValue(QString("0 0 0"));
SoProtoInterface46->addChild(*Sofield47);

Sofield* Sofield48 = new Sofield();
Sofield48->setName(QString("myShape"));
Sofield48->setAccessType(QString("inputOutput"));
Sofield48->setType(QString("SFNode"));
SoSphere* SoSphere49 = new SoSphere();
Sofield48->addChild(*SoSphere49);

SoProtoInterface46->addChild(*Sofield48);

SoProtoDeclare45->addChild(*SoProtoInterface46);

SoProtoBody* SoProtoBody50 = new SoProtoBody();
SoTransform* SoTransform51 = new SoTransform();
SoIS* SoIS52 = new SoIS();
Soconnect* Soconnect53 = new Soconnect();
Soconnect53->setNodeField(QString("translation"));
Soconnect53->setProtoField(QString("ztranslation"));
SoIS52->addChild(*Soconnect53);

SoTransform51->addChild(*SoIS52);

SoProtoInstance* SoProtoInstance54 = new SoProtoInstance();
SoProtoInstance54->setName(QString("three"));
SoField* SoField55 = new SoField();
SoField55->setName(QString("ytranslation"));
SoField55->setValue(QString("0 0 0"));
SoProtoInstance54->addChild(*SoField55);

SoIS* SoIS56 = new SoIS();
Soconnect* Soconnect57 = new Soconnect();
Soconnect57->setNodeField(QString("myShape"));
Soconnect57->setProtoField(QString("myShape"));
SoIS56->addChild(*Soconnect57);

SoProtoInstance54->addChild(*SoIS56);

SoTransform51->addChild(*SoProtoInstance54);

SoProtoInstance* SoProtoInstance58 = new SoProtoInstance();
SoProtoInstance58->setName(QString("three"));
SoField* SoField59 = new SoField();
SoField59->setName(QString("ytranslation"));
SoField59->setValue(QString("0 2 0"));
SoProtoInstance58->addChild(*SoField59);

SoIS* SoIS60 = new SoIS();
Soconnect* Soconnect61 = new Soconnect();
Soconnect61->setNodeField(QString("myShape"));
Soconnect61->setProtoField(QString("myShape"));
SoIS60->addChild(*Soconnect61);

SoProtoInstance58->addChild(*SoIS60);

SoTransform51->addChild(*SoProtoInstance58);

SoProtoInstance* SoProtoInstance62 = new SoProtoInstance();
SoProtoInstance62->setName(QString("three"));
SoField* SoField63 = new SoField();
SoField63->setName(QString("ytranslation"));
SoField63->setValue(QString("0 -2 0"));
SoProtoInstance62->addChild(*SoField63);

SoIS* SoIS64 = new SoIS();
Soconnect* Soconnect65 = new Soconnect();
Soconnect65->setNodeField(QString("myShape"));
Soconnect65->setProtoField(QString("myShape"));
SoIS64->addChild(*Soconnect65);

SoProtoInstance62->addChild(*SoIS64);

SoTransform51->addChild(*SoProtoInstance62);

SoProtoBody50->addChild(*SoTransform51);

SoProtoDeclare45->addChild(*SoProtoBody50);

SoNode7->addChild(*SoProtoDeclare45);

SoProtoDeclare* SoProtoDeclare66 = new SoProtoDeclare();
SoProtoDeclare66->setName(QString("twentyseven"));
SoProtoInterface* SoProtoInterface67 = new SoProtoInterface();
Sofield* Sofield68 = new Sofield();
Sofield68->setName(QString("ttranslation"));
Sofield68->setAccessType(QString("inputOutput"));
Sofield68->setType(QString("SFVec3f"));
Sofield68->setValue(QString("0 0 0"));
SoProtoInterface67->addChild(*Sofield68);

Sofield* Sofield69 = new Sofield();
Sofield69->setName(QString("myShape"));
Sofield69->setAccessType(QString("inputOutput"));
Sofield69->setType(QString("SFNode"));
SoSphere* SoSphere70 = new SoSphere();
Sofield69->addChild(*SoSphere70);

SoProtoInterface67->addChild(*Sofield69);

SoProtoDeclare66->addChild(*SoProtoInterface67);

SoProtoBody* SoProtoBody71 = new SoProtoBody();
SoTransform* SoTransform72 = new SoTransform();
SoIS* SoIS73 = new SoIS();
Soconnect* Soconnect74 = new Soconnect();
Soconnect74->setNodeField(QString("translation"));
Soconnect74->setProtoField(QString("ttranslation"));
SoIS73->addChild(*Soconnect74);

SoTransform72->addChild(*SoIS73);

SoProtoInstance* SoProtoInstance75 = new SoProtoInstance();
SoProtoInstance75->setName(QString("nine"));
SoField* SoField76 = new SoField();
SoField76->setName(QString("ztranslation"));
SoField76->setValue(QString("0 0 0"));
SoProtoInstance75->addChild(*SoField76);

SoIS* SoIS77 = new SoIS();
Soconnect* Soconnect78 = new Soconnect();
Soconnect78->setNodeField(QString("myShape"));
Soconnect78->setProtoField(QString("myShape"));
SoIS77->addChild(*Soconnect78);

SoProtoInstance75->addChild(*SoIS77);

SoTransform72->addChild(*SoProtoInstance75);

SoProtoInstance* SoProtoInstance79 = new SoProtoInstance();
SoProtoInstance79->setName(QString("nine"));
SoField* SoField80 = new SoField();
SoField80->setName(QString("ztranslation"));
SoField80->setValue(QString("0 0 2"));
SoProtoInstance79->addChild(*SoField80);

SoIS* SoIS81 = new SoIS();
Soconnect* Soconnect82 = new Soconnect();
Soconnect82->setNodeField(QString("myShape"));
Soconnect82->setProtoField(QString("myShape"));
SoIS81->addChild(*Soconnect82);

SoProtoInstance79->addChild(*SoIS81);

SoTransform72->addChild(*SoProtoInstance79);

SoProtoInstance* SoProtoInstance83 = new SoProtoInstance();
SoProtoInstance83->setName(QString("nine"));
SoField* SoField84 = new SoField();
SoField84->setName(QString("ztranslation"));
SoField84->setValue(QString("0 0 -2"));
SoProtoInstance83->addChild(*SoField84);

SoIS* SoIS85 = new SoIS();
Soconnect* Soconnect86 = new Soconnect();
Soconnect86->setNodeField(QString("myShape"));
Soconnect86->setProtoField(QString("myShape"));
SoIS85->addChild(*Soconnect86);

SoProtoInstance83->addChild(*SoIS85);

SoTransform72->addChild(*SoProtoInstance83);

SoProtoBody71->addChild(*SoTransform72);

SoProtoDeclare66->addChild(*SoProtoBody71);

SoNode7->addChild(*SoProtoDeclare66);

SoProtoInstance* SoProtoInstance87 = new SoProtoInstance();
SoProtoInstance87->setName(QString("twentyseven"));
SoField* SoField88 = new SoField();
SoField88->setName(QString("ttranslation"));
SoField88->setValue(QString("0 0 0"));
SoProtoInstance87->addChild(*SoField88);

SoField* SoField89 = new SoField();
SoField89->setName(QString("myShape"));
SoBox* SoBox90 = new SoBox();
SoBox90->setSize(new float[]{1.0,1.0,1.0});
SoField89->addChild(*SoBox90);

SoProtoInstance87->addChild(*SoField89);

SoNode7->addChild(*SoProtoInstance87);

SoSceneManager0->setSceneGraph(*SoNode7);

return 0;
}

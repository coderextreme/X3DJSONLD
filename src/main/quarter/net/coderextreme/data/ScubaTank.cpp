
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
SoSceneManager0->setProfile(QString("Interchange"));
SoSceneManager0->setVersion(QString("4.0"));
Sohead* Sohead1 = new Sohead();
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("ScubaTank.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Scuba gear used by Nancy Diving example."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("Etsuko Lippi"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("created"));
Someta5->setContent(QString("24 January 2001"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("modified"));
Someta6->setContent(QString("23 May 2020"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("identifier"));
Someta7->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("generator"));
Someta8->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("license"));
Someta9->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta9);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode10 = new SoNode();
SoWorldInfo* SoWorldInfo11 = new SoWorldInfo();
SoWorldInfo11->setTitle(QString("ScubaTank.x3d"));
SoNode10->addChild(*SoWorldInfo11);

SoTransform* SoTransform12 = new SoTransform();
SoTransform12->setDEF(QString("ScubaTank"));
SoTransform* SoTransform13 = new SoTransform();
SoShape* SoShape14 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance15 = new SoVRMLAppearance();
SoMaterial* SoMaterial16 = new SoMaterial();
SoMaterial16->setDEF(QString("tank"));
SoMaterial16->setAmbientIntensity(0.3);
SoMaterial16->setDiffuseColor(new float[]{0.3,0.3,0.5});
SoMaterial16->setShininess(0.1);
SoMaterial16->setSpecularColor(new float[]{0.7,0.7,0.8});
SoVRMLAppearance15->addChild(*SoMaterial16);

SoShape14->addChild(*SoVRMLAppearance15);

SoCylinder* SoCylinder17 = new SoCylinder();
SoCylinder17->setHeight(0.7);
SoCylinder17->setRadius(0.1);
SoShape14->setGeometry(*SoCylinder17);

SoTransform13->addChild(*SoShape14);

SoTransform12->addChild(*SoTransform13);

SoTransform* SoTransform18 = new SoTransform();
SoTransform18->setTranslation(new float[]{0.0,0.35,0.0});
SoShape* SoShape19 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance20 = new SoVRMLAppearance();
SoMaterial* SoMaterial21 = new SoMaterial();
SoMaterial21->setUSE(QString("tank"));
SoVRMLAppearance20->addChild(*SoMaterial21);

SoShape19->addChild(*SoVRMLAppearance20);

SoSphere* SoSphere22 = new SoSphere();
SoSphere22->setRadius(0.098);
SoShape19->setGeometry(*SoSphere22);

SoTransform18->addChild(*SoShape19);

SoTransform12->addChild(*SoTransform18);

SoTransform* SoTransform23 = new SoTransform();
SoTransform23->setTranslation(new float[]{0.0,-0.35,0.0});
SoShape* SoShape24 = new SoShape();
SoShape24->setDEF(QString("tankBottom"));
SoVRMLAppearance* SoVRMLAppearance25 = new SoVRMLAppearance();
SoMaterial* SoMaterial26 = new SoMaterial();
SoMaterial26->setDEF(QString("black"));
SoMaterial26->setAmbientIntensity(0.3);
SoMaterial26->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoVRMLAppearance25->addChild(*SoMaterial26);

SoShape24->addChild(*SoVRMLAppearance25);

SoCylinder* SoCylinder27 = new SoCylinder();
SoCylinder27->setHeight(0.06);
SoCylinder27->setRadius(0.115);
SoShape24->setGeometry(*SoCylinder27);

SoTransform23->addChild(*SoShape24);

SoTransform12->addChild(*SoTransform23);

SoGroup* SoGroup28 = new SoGroup();
SoGroup28->setDEF(QString("tankNozzle"));
SoTransform* SoTransform29 = new SoTransform();
SoTransform* SoTransform30 = new SoTransform();
SoTransform30->setTranslation(new float[]{0.0,0.45,0.0});
SoShape* SoShape31 = new SoShape();
SoShape31->setDEF(QString("pressure"));
SoVRMLAppearance* SoVRMLAppearance32 = new SoVRMLAppearance();
SoMaterial* SoMaterial33 = new SoMaterial();
SoMaterial33->setDEF(QString("pressureColor"));
SoMaterial33->setAmbientIntensity(0.4);
SoMaterial33->setDiffuseColor(new float[]{0.91,0.91,0.91});
SoMaterial33->setShininess(0.16);
SoMaterial33->setSpecularColor(new float[]{0.91,0.9,0.91});
SoVRMLAppearance32->addChild(*SoMaterial33);

SoShape31->addChild(*SoVRMLAppearance32);

SoCylinder* SoCylinder34 = new SoCylinder();
SoCylinder34->setHeight(0.1);
SoCylinder34->setRadius(0.015);
SoShape31->setGeometry(*SoCylinder34);

SoTransform30->addChild(*SoShape31);

SoTransform29->addChild(*SoTransform30);

SoTransform* SoTransform35 = new SoTransform();
SoTransform35->setTranslation(new float[]{0.0,0.5,0.0});
SoShape* SoShape36 = new SoShape();
SoShape36->setDEF(QString("pressureTop"));
SoVRMLAppearance* SoVRMLAppearance37 = new SoVRMLAppearance();
SoMaterial* SoMaterial38 = new SoMaterial();
SoMaterial38->setUSE(QString("black"));
SoVRMLAppearance37->addChild(*SoMaterial38);

SoShape36->addChild(*SoVRMLAppearance37);

SoCylinder* SoCylinder39 = new SoCylinder();
SoCylinder39->setHeight(0.02);
SoCylinder39->setRadius(0.025);
SoShape36->setGeometry(*SoCylinder39);

SoTransform35->addChild(*SoShape36);

SoTransform29->addChild(*SoTransform35);

SoTransform* SoTransform40 = new SoTransform();
SoTransform40->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoTransform40->setTranslation(new float[]{-0.028,0.462,0.0});
SoTransform* SoTransform41 = new SoTransform();
SoShape* SoShape42 = new SoShape();
SoShape42->setDEF(QString("connectorToRegulator"));
SoVRMLAppearance* SoVRMLAppearance43 = new SoVRMLAppearance();
SoMaterial* SoMaterial44 = new SoMaterial();
SoMaterial44->setUSE(QString("pressureColor"));
SoVRMLAppearance43->addChild(*SoMaterial44);

SoShape42->addChild(*SoVRMLAppearance43);

SoCylinder* SoCylinder45 = new SoCylinder();
SoCylinder45->setHeight(0.03);
SoCylinder45->setRadius(0.01);
SoShape42->setGeometry(*SoCylinder45);

SoTransform41->addChild(*SoShape42);

SoTransform40->addChild(*SoTransform41);

SoTransform* SoTransform46 = new SoTransform();
SoTransform46->setTranslation(new float[]{0.0,0.02,0.0});
SoShape* SoShape47 = new SoShape();
SoShape47->setDEF(QString("connectorToRegulatorTop"));
SoVRMLAppearance* SoVRMLAppearance48 = new SoVRMLAppearance();
SoMaterial* SoMaterial49 = new SoMaterial();
SoMaterial49->setUSE(QString("black"));
SoVRMLAppearance48->addChild(*SoMaterial49);

SoShape47->addChild(*SoVRMLAppearance48);

SoCylinder* SoCylinder50 = new SoCylinder();
SoCylinder50->setHeight(0.02);
SoCylinder50->setRadius(0.02);
SoShape47->setGeometry(*SoCylinder50);

SoTransform46->addChild(*SoShape47);

SoTransform40->addChild(*SoTransform46);

SoTransform29->addChild(*SoTransform40);

SoGroup28->addChild(*SoTransform29);

SoTransform12->addChild(*SoGroup28);

SoTransform* SoTransform51 = new SoTransform();
SoTransform51->setTranslation(new float[]{0.0,0.2,0.0});
SoShape* SoShape52 = new SoShape();
SoShape52->setDEF(QString("tankHoldBelt"));
SoVRMLAppearance* SoVRMLAppearance53 = new SoVRMLAppearance();
SoMaterial* SoMaterial54 = new SoMaterial();
SoMaterial54->setUSE(QString("black"));
SoVRMLAppearance53->addChild(*SoMaterial54);

SoShape52->addChild(*SoVRMLAppearance53);

SoCylinder* SoCylinder55 = new SoCylinder();
SoCylinder55->setHeight(0.1);
SoCylinder55->setRadius(0.115);
SoShape52->setGeometry(*SoCylinder55);

SoTransform51->addChild(*SoShape52);

SoTransform12->addChild(*SoTransform51);

SoNode10->addChild(*SoTransform12);

SoBackground* SoBackground56 = new SoBackground();
SoBackground56->setSkyColor(new float[]{0.6,0.6,0.6}, 3);
SoNode10->addChild(*SoBackground56);

SoSceneManager0->setSceneGraph(*SoNode10);

return 0;
}

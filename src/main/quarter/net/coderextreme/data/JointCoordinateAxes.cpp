
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
Someta2->setName(QString("converter"));
Someta2->setContent(QString("x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("converted"));
Someta3->setContent(QString("Mon, 31 Jul 2023 03:48:04 GMT"));
Sohead1->addMeta(*Someta3);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode4 = new SoNode();
SoNavigationInfo* SoNavigationInfo5 = new SoNavigationInfo();
SoNavigationInfo5->setHeadlight(false);
SoNode4->addChild(*SoNavigationInfo5);

SoGroup* SoGroup6 = new SoGroup();
SoGroup* SoGroup7 = new SoGroup();
SoGroup7->setDEF(QString("ARROW"));
SoShape* SoShape8 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance9 = new SoVRMLAppearance();
SoVRMLAppearance9->setDEF(QString("ARROW_APPEARANCE"));
SoMaterial* SoMaterial10 = new SoMaterial();
SoMaterial10->setDiffuseColor(new float[]{0.3,0.3,1.0});
SoMaterial10->setEmissiveColor(new float[]{0.3,0.3,0.33});
SoVRMLAppearance9->addChild(*SoMaterial10);

SoShape8->addChild(*SoVRMLAppearance9);

SoCylinder* SoCylinder11 = new SoCylinder();
SoCylinder11->setTop(false);
SoCylinder11->setBottom(false);
SoCylinder11->setRadius(0.025);
SoShape8->setGeometry(*SoCylinder11);

SoGroup7->addChild(*SoShape8);

SoTransform* SoTransform12 = new SoTransform();
SoTransform12->setTranslation(new float[]{0.0,1.0,0.0});
SoShape* SoShape13 = new SoShape();
SoShape13->setDEF(QString("ARROW_POINTER"));
SoVRMLAppearance* SoVRMLAppearance14 = new SoVRMLAppearance();
SoVRMLAppearance14->setUSE(QString("ARROW_APPEARANCE"));
SoShape13->addChild(*SoVRMLAppearance14);

SoCone* SoCone15 = new SoCone();
SoCone15->setHeight(0.1);
SoCone15->setBottomRadius(0.05);
SoShape13->setGeometry(*SoCone15);

SoTransform12->addChild(*SoShape13);

SoGroup7->addChild(*SoTransform12);

SoTransform* SoTransform16 = new SoTransform();
SoTransform16->setTranslation(new float[]{0.0,-1.0,0.0});
SoTransform16->setRotation(new float[]{1.0,0.0,0.0,3.1416});
SoShape* SoShape17 = new SoShape();
SoShape17->setUSE(QString("ARROW_POINTER"));
SoTransform16->addChild(*SoShape17);

SoGroup7->addChild(*SoTransform16);

SoGroup6->addChild(*SoGroup7);

SoTransform* SoTransform18 = new SoTransform();
SoTransform18->setTranslation(new float[]{0.0,1.08,0.0});
SoBillboard* SoBillboard19 = new SoBillboard();
SoShape* SoShape20 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance21 = new SoVRMLAppearance();
SoVRMLAppearance21->setDEF(QString("LABEL_APPEARANCE"));
SoMaterial* SoMaterial22 = new SoMaterial();
SoMaterial22->setDiffuseColor(new float[]{1.0,1.0,0.3});
SoMaterial22->setEmissiveColor(new float[]{0.33,0.33,0.1});
SoVRMLAppearance21->addChild(*SoMaterial22);

SoShape20->addChild(*SoVRMLAppearance21);

SoText* SoText23 = new SoText();
SoText23->setString(new QString[]{QString("Y")}, 1);
SoFontStyle* SoFontStyle24 = new SoFontStyle();
SoFontStyle24->setDEF(QString("LABEL_FONT"));
SoFontStyle24->setFamily(new QString[]{QString("SANS")}, 1);
SoFontStyle24->setSize(0.2);
SoFontStyle24->setJustify(new QString[]{QString("MIDDLE")}, 1);
SoText23->setFontStyle(*SoFontStyle24);

SoShape20->setGeometry(*SoText23);

SoBillboard19->addChild(*SoShape20);

SoTransform18->addChild(*SoBillboard19);

SoGroup6->addChild(*SoTransform18);

SoNode4->addChild(*SoGroup6);

SoTransform* SoTransform25 = new SoTransform();
SoTransform25->setRotation(new float[]{0.0,0.0,1.0,-1.5708});
SoGroup* SoGroup26 = new SoGroup();
SoGroup* SoGroup27 = new SoGroup();
SoGroup27->setUSE(QString("ARROW"));
SoGroup26->addChild(*SoGroup27);

SoTransform* SoTransform28 = new SoTransform();
SoTransform28->setTranslation(new float[]{0.072,1.1,0.0});
SoTransform28->setRotation(new float[]{0.0,0.0,1.0,1.5708});
SoBillboard* SoBillboard29 = new SoBillboard();
SoShape* SoShape30 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance31 = new SoVRMLAppearance();
SoVRMLAppearance31->setUSE(QString("LABEL_APPEARANCE"));
SoShape30->addChild(*SoVRMLAppearance31);

SoText* SoText32 = new SoText();
SoText32->setString(new QString[]{QString("X")}, 1);
SoFontStyle* SoFontStyle33 = new SoFontStyle();
SoFontStyle33->setUSE(QString("LABEL_FONT"));
SoText32->setFontStyle(*SoFontStyle33);

SoShape30->setGeometry(*SoText32);

SoBillboard29->addChild(*SoShape30);

SoTransform28->addChild(*SoBillboard29);

SoGroup26->addChild(*SoTransform28);

SoTransform25->addChild(*SoGroup26);

SoNode4->addChild(*SoTransform25);

SoTransform* SoTransform34 = new SoTransform();
SoTransform34->setRotation(new float[]{1.0,0.0,0.0,1.5708});
SoGroup* SoGroup35 = new SoGroup();
SoGroup* SoGroup36 = new SoGroup();
SoGroup36->setUSE(QString("ARROW"));
SoGroup35->addChild(*SoGroup36);

SoTransform* SoTransform37 = new SoTransform();
SoTransform37->setTranslation(new float[]{0.0,1.1,0.072});
SoTransform37->setRotation(new float[]{1.0,0.0,0.0,-1.5708});
SoBillboard* SoBillboard38 = new SoBillboard();
SoShape* SoShape39 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance40 = new SoVRMLAppearance();
SoVRMLAppearance40->setUSE(QString("LABEL_APPEARANCE"));
SoShape39->addChild(*SoVRMLAppearance40);

SoText* SoText41 = new SoText();
SoText41->setString(new QString[]{QString("Z")}, 1);
SoFontStyle* SoFontStyle42 = new SoFontStyle();
SoFontStyle42->setUSE(QString("LABEL_FONT"));
SoText41->setFontStyle(*SoFontStyle42);

SoShape39->setGeometry(*SoText41);

SoBillboard38->addChild(*SoShape39);

SoTransform37->addChild(*SoBillboard38);

SoGroup35->addChild(*SoTransform37);

SoTransform34->addChild(*SoGroup35);

SoNode4->addChild(*SoTransform34);

SoSceneManager0->setSceneGraph(*SoNode4);

return 0;
}

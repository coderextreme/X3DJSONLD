
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
Someta2->setName(QString("title"));
Someta2->setContent(QString("CoordinateAxes.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("creator"));
Someta3->setContent(QString("Don Brutzman, Byounghyun Yoo"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("created"));
Someta4->setContent(QString("14 July 2000"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("modified"));
Someta5->setContent(QString("20 October 2019"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("description"));
Someta6->setContent(QString("X Y Z axis arrows and labels in X3D coordinate system. See CoordinateAxesExample for use as an Inline coordinate-system reference frame."));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("reference"));
Someta7->setContent(QString("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("reference"));
Someta8->setContent(QString("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxesNSEW.x3d"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("reference"));
Someta9->setContent(QString("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxesNSEW.x3d"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("identifier"));
Someta11->setContent(QString("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("generator"));
Someta12->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("license"));
Someta13->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta13);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode14 = new SoNode();
SoWorldInfo* SoWorldInfo15 = new SoWorldInfo();
SoWorldInfo15->setTitle(QString("CoordinateAxes.x3d"));
SoNode14->addChild(*SoWorldInfo15);

SoCollision* SoCollision16 = new SoCollision();
SoCollision16->setDEF(QString("DoNotCollideWithVisualizationWidget"));
//Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph.
//This NavigationInfo allows examine mode and will be overridden by any parent scene.
//Each arrow goes from +1m to -1m to allow linear scaling to fit a scene
//Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user
SoGroup* SoGroup17 = new SoGroup();
//Vertical Y arrow and label
SoGroup* SoGroup18 = new SoGroup();
SoGroup18->setDEF(QString("ArrowGreen"));
SoShape* SoShape19 = new SoShape();
SoCylinder* SoCylinder20 = new SoCylinder();
SoCylinder20->setDEF(QString("ArrowCylinder"));
SoCylinder20->setRadius(0.025);
SoCylinder20->setTop(false);
SoShape19->setGeometry(*SoCylinder20);

SoVRMLAppearance* SoVRMLAppearance21 = new SoVRMLAppearance();
SoVRMLAppearance21->setDEF(QString("Green"));
SoMaterial* SoMaterial22 = new SoMaterial();
SoMaterial22->setDiffuseColor(new float[]{0.1,0.6,0.1});
SoMaterial22->setEmissiveColor(new float[]{0.05,0.2,0.05});
SoVRMLAppearance21->addChild(*SoMaterial22);

SoShape19->addChild(*SoVRMLAppearance21);

SoGroup18->addChild(*SoShape19);

SoTransform* SoTransform23 = new SoTransform();
SoTransform23->setTranslation(new float[]{0.0,1.0,0.0});
SoShape* SoShape24 = new SoShape();
SoCone* SoCone25 = new SoCone();
SoCone25->setDEF(QString("ArrowCone"));
SoCone25->setBottomRadius(0.05);
SoCone25->setHeight(0.1);
SoShape24->setGeometry(*SoCone25);

SoVRMLAppearance* SoVRMLAppearance26 = new SoVRMLAppearance();
SoVRMLAppearance26->setUSE(QString("Green"));
SoShape24->addChild(*SoVRMLAppearance26);

SoTransform23->addChild(*SoShape24);

SoGroup18->addChild(*SoTransform23);

SoGroup17->addChild(*SoGroup18);

SoTransform* SoTransform27 = new SoTransform();
SoTransform27->setTranslation(new float[]{0.0,1.08,0.0});
SoBillboard* SoBillboard28 = new SoBillboard();
SoShape* SoShape29 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance30 = new SoVRMLAppearance();
SoVRMLAppearance30->setDEF(QString("LABEL_APPEARANCE"));
SoMaterial* SoMaterial31 = new SoMaterial();
SoMaterial31->setDiffuseColor(new float[]{1.0,1.0,0.3});
SoMaterial31->setEmissiveColor(new float[]{0.33,0.33,0.1});
SoVRMLAppearance30->addChild(*SoMaterial31);

SoShape29->addChild(*SoVRMLAppearance30);

SoText* SoText32 = new SoText();
SoText32->setString(new QString[]{QString("Y")}, 1);
SoFontStyle* SoFontStyle33 = new SoFontStyle();
SoFontStyle33->setDEF(QString("LABEL_FONT"));
SoFontStyle33->setFamily(new QString[]{QString("SANS")}, 1);
SoFontStyle33->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoFontStyle33->setSize(0.2);
SoText32->setFontStyle(*SoFontStyle33);

SoShape29->setGeometry(*SoText32);

SoBillboard28->addChild(*SoShape29);

SoTransform27->addChild(*SoBillboard28);

SoGroup17->addChild(*SoTransform27);

SoCollision16->addChildren(*SoGroup17);

SoTransform* SoTransform34 = new SoTransform();
SoTransform34->setRotation(new float[]{0.0,0.0,1.0,-1.57079});
//Horizontal X arrow and label
SoGroup* SoGroup35 = new SoGroup();
SoGroup* SoGroup36 = new SoGroup();
SoGroup36->setDEF(QString("ArrowRed"));
SoShape* SoShape37 = new SoShape();
SoCylinder* SoCylinder38 = new SoCylinder();
SoCylinder38->setUSE(QString("ArrowCylinder"));
SoShape37->setGeometry(*SoCylinder38);

SoVRMLAppearance* SoVRMLAppearance39 = new SoVRMLAppearance();
SoVRMLAppearance39->setDEF(QString("Red"));
SoMaterial* SoMaterial40 = new SoMaterial();
SoMaterial40->setDiffuseColor(new float[]{0.7,0.1,0.1});
SoMaterial40->setEmissiveColor(new float[]{0.33,0.0,0.0});
SoVRMLAppearance39->addChild(*SoMaterial40);

SoShape37->addChild(*SoVRMLAppearance39);

SoGroup36->addChild(*SoShape37);

SoTransform* SoTransform41 = new SoTransform();
SoTransform41->setTranslation(new float[]{0.0,1.0,0.0});
SoShape* SoShape42 = new SoShape();
SoCone* SoCone43 = new SoCone();
SoCone43->setUSE(QString("ArrowCone"));
SoShape42->setGeometry(*SoCone43);

SoVRMLAppearance* SoVRMLAppearance44 = new SoVRMLAppearance();
SoVRMLAppearance44->setUSE(QString("Red"));
SoShape42->addChild(*SoVRMLAppearance44);

SoTransform41->addChild(*SoShape42);

SoGroup36->addChild(*SoTransform41);

SoGroup35->addChild(*SoGroup36);

SoTransform* SoTransform45 = new SoTransform();
SoTransform45->setRotation(new float[]{0.0,0.0,1.0,1.57079});
SoTransform45->setTranslation(new float[]{0.072,1.1,0.0});
//note label rotated back to original coordinate frame
SoBillboard* SoBillboard46 = new SoBillboard();
SoShape* SoShape47 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance48 = new SoVRMLAppearance();
SoVRMLAppearance48->setUSE(QString("LABEL_APPEARANCE"));
SoShape47->addChild(*SoVRMLAppearance48);

SoText* SoText49 = new SoText();
SoText49->setString(new QString[]{QString("X")}, 1);
SoFontStyle* SoFontStyle50 = new SoFontStyle();
SoFontStyle50->setUSE(QString("LABEL_FONT"));
SoText49->setFontStyle(*SoFontStyle50);

SoShape47->setGeometry(*SoText49);

SoBillboard46->addChild(*SoShape47);

SoTransform45->addChild(*SoBillboard46);

SoGroup35->addChild(*SoTransform45);

SoTransform34->addChild(*SoGroup35);

SoCollision16->addChildren(*SoTransform34);

SoTransform* SoTransform51 = new SoTransform();
SoTransform51->setRotation(new float[]{1.0,0.0,0.0,1.57079});
//Perpendicular Z arrow and label, note right-hand rule
SoGroup* SoGroup52 = new SoGroup();
SoGroup* SoGroup53 = new SoGroup();
SoGroup53->setDEF(QString("ArrowBlue"));
SoShape* SoShape54 = new SoShape();
SoCylinder* SoCylinder55 = new SoCylinder();
SoCylinder55->setUSE(QString("ArrowCylinder"));
SoShape54->setGeometry(*SoCylinder55);

SoVRMLAppearance* SoVRMLAppearance56 = new SoVRMLAppearance();
SoVRMLAppearance56->setDEF(QString("Blue"));
SoMaterial* SoMaterial57 = new SoMaterial();
SoMaterial57->setDiffuseColor(new float[]{0.3,0.3,1.0});
SoMaterial57->setEmissiveColor(new float[]{0.1,0.1,0.33});
SoVRMLAppearance56->addChild(*SoMaterial57);

SoShape54->addChild(*SoVRMLAppearance56);

SoGroup53->addChild(*SoShape54);

SoTransform* SoTransform58 = new SoTransform();
SoTransform58->setTranslation(new float[]{0.0,1.0,0.0});
SoShape* SoShape59 = new SoShape();
SoCone* SoCone60 = new SoCone();
SoCone60->setUSE(QString("ArrowCone"));
SoShape59->setGeometry(*SoCone60);

SoVRMLAppearance* SoVRMLAppearance61 = new SoVRMLAppearance();
SoVRMLAppearance61->setUSE(QString("Blue"));
SoShape59->addChild(*SoVRMLAppearance61);

SoTransform58->addChild(*SoShape59);

SoGroup53->addChild(*SoTransform58);

SoGroup52->addChild(*SoGroup53);

SoTransform* SoTransform62 = new SoTransform();
SoTransform62->setRotation(new float[]{1.0,0.0,0.0,-1.57079});
SoTransform62->setTranslation(new float[]{0.0,1.1,0.072});
//note label rotated back to original coordinate frame
SoBillboard* SoBillboard63 = new SoBillboard();
SoShape* SoShape64 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance65 = new SoVRMLAppearance();
SoVRMLAppearance65->setUSE(QString("LABEL_APPEARANCE"));
SoShape64->addChild(*SoVRMLAppearance65);

SoText* SoText66 = new SoText();
SoText66->setString(new QString[]{QString("Z")}, 1);
SoFontStyle* SoFontStyle67 = new SoFontStyle();
SoFontStyle67->setUSE(QString("LABEL_FONT"));
SoText66->setFontStyle(*SoFontStyle67);

SoShape64->setGeometry(*SoText66);

SoBillboard63->addChild(*SoShape64);

SoTransform62->addChild(*SoBillboard63);

SoGroup52->addChild(*SoTransform62);

SoTransform51->addChild(*SoGroup52);

SoCollision16->addChildren(*SoTransform51);

SoNode14->addChild(*SoCollision16);

SoSceneManager0->setSceneGraph(*SoNode14);

return 0;
}

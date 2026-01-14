
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
SoSceneManager0->setVersion(QString("3.0"));
Sohead* Sohead1 = new Sohead();
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("GridXZ_20x20Fixed.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("creator"));
Someta3->setContent(QString("MV4204 class"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("created"));
Someta4->setContent(QString("3 September 2000"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("modified"));
Someta5->setContent(QString("28 November 2019"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("reference"));
Someta6->setContent(QString("GridXY_20x20Fixed.x3d"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("reference"));
Someta7->setContent(QString("GridYZ_20x20Fixed.x3d"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("description"));
Someta8->setContent(QString("Line grid authoring tool to enable precise visual measurement of objects in 3D space - fixed position. Oriented along XZ plane, size 20m by 20m, default block size 1m by 1m."));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("identifier"));
Someta9->setContent(QString("https://www.web3d.org/x3d/content/examples/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("generator"));
Someta10->setContent(QString("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("license"));
Someta11->setContent(QString("../../license.html"));
Sohead1->addMeta(*Someta11);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode12 = new SoNode();
SoWorldInfo* SoWorldInfo13 = new SoWorldInfo();
SoWorldInfo13->setTitle(QString("GridXZ_20x20Fixed.x3d"));
SoNode12->addChild(*SoWorldInfo13);

SoViewpoint* SoViewpoint14 = new SoViewpoint();
SoViewpoint14->setDescription(QString("XZ horizontal grid, perpendicular to Y axis (seen from 0 10 25)"));
SoViewpoint14->setOrientation(new float[]{1.0,0.0,0.0,-0.4});
SoViewpoint14->setPosition(new float[]{0.0,10.0,25.0});
SoNode12->addChild(*SoViewpoint14);

SoTransform* SoTransform15 = new SoTransform();
SoTransform15->setDEF(QString("GridLocation"));
SoGroup* SoGroup16 = new SoGroup();
SoShape* SoShape17 = new SoShape();
SoShape17->setDEF(QString("LinesAlignedAlongZ"));
SoIndexedLineSet* SoIndexedLineSet18 = new SoIndexedLineSet();
SoIndexedLineSet18->setColorIndex(new int[]{1,0,0,0,0,2,0,0,0,0,1,0,0,0,0,2,0,0,0,0,1}, 21);
SoIndexedLineSet18->setColorPerVertex(false);
SoIndexedLineSet18->setCoordIndex(new int32_t[]{1,22,-1,2,23,-1,3,24,-1,4,25,-1,5,26,-1,6,27,-1,7,28,-1,8,29,-1,9,30,-1,10,31,-1,11,32,-1,12,33,-1,13,34,-1,14,35,-1,15,36,-1,16,37,-1,17,38,-1,18,39,-1,19,40,-1,20,41,-1,21,42,-1}, 63);
SoCoordinate* SoCoordinate19 = new SoCoordinate();
SoCoordinate19->setDEF(QString("EndPoints"));
SoCoordinate19->setPoint(new float[]{0.0,0.0,0.0,-10.0,0.0,10.0,-9.0,0.0,10.0,-8.0,0.0,10.0,-7.0,0.0,10.0,-6.0,0.0,10.0,-5.0,0.0,10.0,-4.0,0.0,10.0,-3.0,0.0,10.0,-2.0,0.0,10.0,-1.0,0.0,10.0,0.0,0.0,10.0,1.0,0.0,10.0,2.0,0.0,10.0,3.0,0.0,10.0,4.0,0.0,10.0,5.0,0.0,10.0,6.0,0.0,10.0,7.0,0.0,10.0,8.0,0.0,10.0,9.0,0.0,10.0,10.0,0.0,10.0,-10.0,0.0,-10.0,-9.0,0.0,-10.0,-8.0,0.0,-10.0,-7.0,0.0,-10.0,-6.0,0.0,-10.0,-5.0,0.0,-10.0,-4.0,0.0,-10.0,-3.0,0.0,-10.0,-2.0,0.0,-10.0,-1.0,0.0,-10.0,0.0,0.0,-10.0,1.0,0.0,-10.0,2.0,0.0,-10.0,3.0,0.0,-10.0,4.0,0.0,-10.0,5.0,0.0,-10.0,6.0,0.0,-10.0,7.0,0.0,-10.0,8.0,0.0,-10.0,9.0,0.0,-10.0,10.0,0.0,-10.0}, 129);
SoIndexedLineSet18->setCoord(*SoCoordinate19);

SoColor* SoColor20 = new SoColor();
SoColor20->setColor(new float[]{0.4,0.4,0.4,0.8,0.2,0.0,0.4,0.1,0.05}, 9);
SoIndexedLineSet18->setColor(*SoColor20);

SoShape17->setGeometry(*SoIndexedLineSet18);

SoGroup16->addChild(*SoShape17);

SoTransform* SoTransform21 = new SoTransform();
SoTransform21->setDEF(QString("LinesAlignedAlongX"));
SoTransform21->setRotation(new float[]{0.0,1.0,0.0,1.57079});
SoShape* SoShape22 = new SoShape();
SoShape22->setUSE(QString("LinesAlignedAlongZ"));
SoTransform21->addChild(*SoShape22);

SoGroup16->addChild(*SoTransform21);

SoTransform* SoTransform23 = new SoTransform();
SoTransform23->setTranslation(new float[]{0.0,-0.5,0.0});
SoBillboard* SoBillboard24 = new SoBillboard();
SoShape* SoShape25 = new SoShape();
SoText* SoText26 = new SoText();
SoText26->setDEF(QString("CenterTextNode"));
SoText26->setString(new QString[]{QString("origin")}, 1);
SoFontStyle* SoFontStyle27 = new SoFontStyle();
SoFontStyle27->setDEF(QString("FS4"));
SoFontStyle27->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoFontStyle27->setSize(0.4);
SoText26->setFontStyle(*SoFontStyle27);

SoShape25->setGeometry(*SoText26);

SoVRMLAppearance* SoVRMLAppearance28 = new SoVRMLAppearance();
SoVRMLAppearance28->setDEF(QString("DefaultAppearance"));
SoMaterial* SoMaterial29 = new SoMaterial();
SoVRMLAppearance28->addChild(*SoMaterial29);

SoShape25->addChild(*SoVRMLAppearance28);

SoBillboard24->addChild(*SoShape25);

SoTransform23->addChild(*SoBillboard24);

SoGroup16->addChild(*SoTransform23);

SoTransform* SoTransform30 = new SoTransform();
SoTransform30->setTranslation(new float[]{10.0,-0.5,10.0});
SoBillboard* SoBillboard31 = new SoBillboard();
SoShape* SoShape32 = new SoShape();
SoText* SoText33 = new SoText();
SoText33->setString(new QString[]{QString("10 0 10")}, 1);
SoFontStyle* SoFontStyle34 = new SoFontStyle();
SoFontStyle34->setUSE(QString("FS4"));
SoText33->setFontStyle(*SoFontStyle34);

SoShape32->setGeometry(*SoText33);

SoVRMLAppearance* SoVRMLAppearance35 = new SoVRMLAppearance();
SoVRMLAppearance35->setUSE(QString("DefaultAppearance"));
SoShape32->addChild(*SoVRMLAppearance35);

SoBillboard31->addChild(*SoShape32);

SoTransform30->addChild(*SoBillboard31);

SoGroup16->addChild(*SoTransform30);

SoTransform* SoTransform36 = new SoTransform();
SoTransform36->setTranslation(new float[]{10.0,-0.5,-10.0});
SoBillboard* SoBillboard37 = new SoBillboard();
SoShape* SoShape38 = new SoShape();
SoText* SoText39 = new SoText();
SoText39->setString(new QString[]{QString("10 0 -10")}, 1);
SoFontStyle* SoFontStyle40 = new SoFontStyle();
SoFontStyle40->setUSE(QString("FS4"));
SoText39->setFontStyle(*SoFontStyle40);

SoShape38->setGeometry(*SoText39);

SoVRMLAppearance* SoVRMLAppearance41 = new SoVRMLAppearance();
SoVRMLAppearance41->setUSE(QString("DefaultAppearance"));
SoShape38->addChild(*SoVRMLAppearance41);

SoBillboard37->addChild(*SoShape38);

SoTransform36->addChild(*SoBillboard37);

SoGroup16->addChild(*SoTransform36);

SoTransform* SoTransform42 = new SoTransform();
SoTransform42->setTranslation(new float[]{-10.0,-0.5,10.0});
SoBillboard* SoBillboard43 = new SoBillboard();
SoShape* SoShape44 = new SoShape();
SoText* SoText45 = new SoText();
SoText45->setString(new QString[]{QString("-10 0 10")}, 1);
SoFontStyle* SoFontStyle46 = new SoFontStyle();
SoFontStyle46->setUSE(QString("FS4"));
SoText45->setFontStyle(*SoFontStyle46);

SoShape44->setGeometry(*SoText45);

SoVRMLAppearance* SoVRMLAppearance47 = new SoVRMLAppearance();
SoVRMLAppearance47->setUSE(QString("DefaultAppearance"));
SoShape44->addChild(*SoVRMLAppearance47);

SoBillboard43->addChild(*SoShape44);

SoTransform42->addChild(*SoBillboard43);

SoGroup16->addChild(*SoTransform42);

SoTransform* SoTransform48 = new SoTransform();
SoTransform48->setTranslation(new float[]{-10.0,-0.5,-10.0});
SoBillboard* SoBillboard49 = new SoBillboard();
SoShape* SoShape50 = new SoShape();
SoText* SoText51 = new SoText();
SoText51->setString(new QString[]{QString("-10 0 -10")}, 1);
SoFontStyle* SoFontStyle52 = new SoFontStyle();
SoFontStyle52->setUSE(QString("FS4"));
SoText51->setFontStyle(*SoFontStyle52);

SoShape50->setGeometry(*SoText51);

SoVRMLAppearance* SoVRMLAppearance53 = new SoVRMLAppearance();
SoVRMLAppearance53->setUSE(QString("DefaultAppearance"));
SoShape50->addChild(*SoVRMLAppearance53);

SoBillboard49->addChild(*SoShape50);

SoTransform48->addChild(*SoBillboard49);

SoGroup16->addChild(*SoTransform48);

SoTransform15->addChild(*SoGroup16);

SoNode12->addChild(*SoTransform15);

SoSceneManager0->setSceneGraph(*SoNode12);

return 0;
}

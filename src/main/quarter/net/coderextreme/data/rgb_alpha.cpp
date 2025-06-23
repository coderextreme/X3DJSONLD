
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
SoSceneManager0->setVersion(QString("3.0"));
Sohead* Sohead1 = new Sohead();
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("rgb_alpha.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("Image"));
Someta3->setContent(QString("rgb_alpha-front.jpg"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("Image"));
Someta4->setContent(QString("rgb_alpha-rear.jpg"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("Image"));
Someta5->setContent(QString("rgb_alpha-top.jpg"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("Image"));
Someta6->setContent(QString("rgb_alpha-bottom.jpg"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("reference"));
Someta7->setContent(QString("http://www.nist.gov/vrml.html"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("reference"));
Someta8->setContent(QString("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("creator"));
Someta9->setContent(QString("http://www.itl.nist.gov/div897/ctg/vrml/members.html"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("disclaimer"));
Someta10->setContent(QString("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("info"));
Someta11->setContent(QString("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("translator"));
Someta12->setContent(QString("Michael Kass NIST, Don Brutzman NPS"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("translated"));
Someta13->setContent(QString("21 January 2001"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("modified"));
Someta14->setContent(QString("16 January 2011"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("description"));
Someta15->setContent(QString("Test browser ability to map a RGB plus alpha opacity to geometry. A checkerboard of four colored squares: lower left (red), lower right (transparent), uppser left (transparent) and upper right (red) map onto the faces of all geometry. For the sphere, the texture should cover the entire surface, and wrap counterclockwise from the back of the sphere. For the cone, the texture should wrap counterclockwise (from above) starting at the back of the cone. A circle cutout of the texture is applied right side up to the base of the cone when the cone is tilted toward the -z axis. For the cylinder, the texture should wrap counterclockwise (from above) starting at the back of the cylinder. A circle cutout of the texture is applied right side up to the top and bottom caps of the cylinder. For the box, the texture should be applied right side up in its entirety to each face of the box."));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("identifier"));
Someta16->setContent(QString("https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/PixelTexture/rgb_alpha.x3d"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("generator"));
Someta17->setContent(QString("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("generator"));
Someta18->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("license"));
Someta19->setContent(QString("../../license.html"));
Sohead1->addMeta(*Someta19);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode20 = new SoNode();
SoNavigationInfo* SoNavigationInfo21 = new SoNavigationInfo();
SoNavigationInfo21->setType(new QString[]{QString("EXAMINE"), QString("WALK"), QString("FLY"), QString("ANY")}, 4);
SoNode20->addChild(*SoNavigationInfo21);

SoGroup* SoGroup22 = new SoGroup();
SoTransform* SoTransform23 = new SoTransform();
SoTransform23->setTranslation(new float[]{6.14221,0.0694613,-0.000999451});
SoShape* SoShape24 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance25 = new SoVRMLAppearance();
SoMaterial* SoMaterial26 = new SoMaterial();
SoVRMLAppearance25->addChild(*SoMaterial26);

SoPixelTexture* SoPixelTexture27 = new SoPixelTexture();
SoPixelTexture27->setDEF(QString("RgbOpacityCheckerboard"));
SoPixelTexture27->setImage(QString("2 2 4 4278190335 4294901760 4294901760 4278190335"));
SoVRMLAppearance25->addChild(*SoPixelTexture27);

SoShape24->addChild(*SoVRMLAppearance25);

SoBox* SoBox28 = new SoBox();
SoShape24->setGeometry(*SoBox28);

SoTransform23->addChild(*SoShape24);

SoGroup22->addChild(*SoTransform23);

SoTransform* SoTransform29 = new SoTransform();
SoTransform29->setTranslation(new float[]{-4.85443,0.0694381,-0.00149918});
SoShape* SoShape30 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance31 = new SoVRMLAppearance();
SoMaterial* SoMaterial32 = new SoMaterial();
SoVRMLAppearance31->addChild(*SoMaterial32);

SoPixelTexture* SoPixelTexture33 = new SoPixelTexture();
SoPixelTexture33->setUSE(QString("RgbOpacityCheckerboard"));
SoVRMLAppearance31->addChild(*SoPixelTexture33);

SoShape30->addChild(*SoVRMLAppearance31);

SoSphere* SoSphere34 = new SoSphere();
SoShape30->setGeometry(*SoSphere34);

SoTransform29->addChild(*SoShape30);

SoGroup22->addChild(*SoTransform29);

SoTransform* SoTransform35 = new SoTransform();
SoTransform35->setTranslation(new float[]{-1.47341,0.036672,-0.00175095});
SoShape* SoShape36 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance37 = new SoVRMLAppearance();
SoMaterial* SoMaterial38 = new SoMaterial();
SoVRMLAppearance37->addChild(*SoMaterial38);

SoPixelTexture* SoPixelTexture39 = new SoPixelTexture();
SoPixelTexture39->setUSE(QString("RgbOpacityCheckerboard"));
SoVRMLAppearance37->addChild(*SoPixelTexture39);

SoShape36->addChild(*SoVRMLAppearance37);

SoCone* SoCone40 = new SoCone();
SoShape36->setGeometry(*SoCone40);

SoTransform35->addChild(*SoShape36);

SoGroup22->addChild(*SoTransform35);

SoTransform* SoTransform41 = new SoTransform();
SoTransform41->setTranslation(new float[]{2.31094,0.0694206,-0.00187683});
SoShape* SoShape42 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance43 = new SoVRMLAppearance();
SoMaterial* SoMaterial44 = new SoMaterial();
SoVRMLAppearance43->addChild(*SoMaterial44);

SoPixelTexture* SoPixelTexture45 = new SoPixelTexture();
SoPixelTexture45->setUSE(QString("RgbOpacityCheckerboard"));
SoVRMLAppearance43->addChild(*SoPixelTexture45);

SoShape42->addChild(*SoVRMLAppearance43);

SoCylinder* SoCylinder46 = new SoCylinder();
SoShape42->setGeometry(*SoCylinder46);

SoTransform41->addChild(*SoShape42);

SoGroup22->addChild(*SoTransform41);

SoNode20->addChild(*SoGroup22);

SoSceneManager0->setSceneGraph(*SoNode20);

return 0;
}

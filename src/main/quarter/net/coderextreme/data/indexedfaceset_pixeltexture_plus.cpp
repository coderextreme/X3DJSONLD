
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
Someta2->setContent(QString("indexedfaceset_pixeltexture_plus.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("Image"));
Someta3->setContent(QString("indexedfaceset_pixeltexture_plus-front.jpg"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("Image"));
Someta4->setContent(QString("indexedfaceset_pixeltexture_plus-rear.jpg"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("Image"));
Someta5->setContent(QString("indexedfaceset_pixeltexture_plus-top.jpg"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("Image"));
Someta6->setContent(QString("indexedfaceset_pixeltexture_plus-bottom.jpg"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("Image"));
Someta7->setContent(QString("indexedfaceset_pixeltexture_plus-left.jpg"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("Image"));
Someta8->setContent(QString("indexedfaceset_pixeltexture_plus-right.jpg"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("reference"));
Someta9->setContent(QString("http://www.nist.gov/vrml.html"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("creator"));
Someta11->setContent(QString("http://www.itl.nist.gov/div897/ctg/vrml/members.html"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("disclaimer"));
Someta12->setContent(QString("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("info"));
Someta13->setContent(QString("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("translator"));
Someta14->setContent(QString("Michael Kass NIST, Don Brutzman NPS"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("translated"));
Someta15->setContent(QString("21 January 2001"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("modified"));
Someta16->setContent(QString("13 January 2014"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("description"));
Someta17->setContent(QString("Test of browser ability to map a 3 times multiple of an PixelTexture onto an IndexedFaceSet geometry. A 3 by 3 matrix of four equal sized red, green, white and yellow squares in the pixel texture map all the faces of the cube."));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("identifier"));
Someta18->setContent(QString("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_plus.x3d"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("generator"));
Someta19->setContent(QString("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"));
Sohead1->addMeta(*Someta19);

Someta* Someta20 = new Someta();
Someta20->setName(QString("generator"));
Someta20->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta20);

Someta* Someta21 = new Someta();
Someta21->setName(QString("license"));
Someta21->setContent(QString("../../license.html"));
Sohead1->addMeta(*Someta21);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode22 = new SoNode();
SoViewpoint* SoViewpoint23 = new SoViewpoint();
SoViewpoint23->setDescription(QString("Front View"));
SoNode22->addChild(*SoViewpoint23);

SoViewpoint* SoViewpoint24 = new SoViewpoint();
SoViewpoint24->setDescription(QString("Rear View"));
SoViewpoint24->setOrientation(new float[]{0.0,1.0,0.0,3.14});
SoViewpoint24->setPosition(new float[]{0.0,0.0,-10.0});
SoNode22->addChild(*SoViewpoint24);

SoViewpoint* SoViewpoint25 = new SoViewpoint();
SoViewpoint25->setDescription(QString("Top View"));
SoViewpoint25->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoViewpoint25->setPosition(new float[]{0.0,10.0,0.0});
SoNode22->addChild(*SoViewpoint25);

SoViewpoint* SoViewpoint26 = new SoViewpoint();
SoViewpoint26->setDescription(QString("Bottom View"));
SoViewpoint26->setOrientation(new float[]{1.0,0.0,0.0,1.57});
SoViewpoint26->setPosition(new float[]{0.0,-10.0,0.0});
SoNode22->addChild(*SoViewpoint26);

SoViewpoint* SoViewpoint27 = new SoViewpoint();
SoViewpoint27->setDescription(QString("Right View"));
SoViewpoint27->setOrientation(new float[]{0.0,1.0,0.0,1.57});
SoViewpoint27->setPosition(new float[]{10.0,0.0,0.0});
SoNode22->addChild(*SoViewpoint27);

SoViewpoint* SoViewpoint28 = new SoViewpoint();
SoViewpoint28->setDescription(QString("Left View"));
SoViewpoint28->setOrientation(new float[]{0.0,1.0,0.0,-1.57});
SoViewpoint28->setPosition(new float[]{-10.0,0.0,0.0});
SoNode22->addChild(*SoViewpoint28);

SoNavigationInfo* SoNavigationInfo29 = new SoNavigationInfo();
SoNavigationInfo29->setType(new QString[]{QString("EXAMINE"), QString("WALK"), QString("FLY"), QString("ANY")}, 4);
SoNode22->addChild(*SoNavigationInfo29);

SoShape* SoShape30 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance31 = new SoVRMLAppearance();
SoMaterial* SoMaterial32 = new SoMaterial();
SoVRMLAppearance31->addChild(*SoMaterial32);

SoPixelTexture* SoPixelTexture33 = new SoPixelTexture();
SoPixelTexture33->setImage(QString("2 2 4 4278190335 16711935 4294967295 4294902015"));
SoVRMLAppearance31->addChild(*SoPixelTexture33);

SoShape30->addChild(*SoVRMLAppearance31);

SoIndexedFaceSet* SoIndexedFaceSet34 = new SoIndexedFaceSet();
SoIndexedFaceSet34->setColorPerVertex(false);
SoIndexedFaceSet34->setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 30);
SoIndexedFaceSet34->setCreaseAngle(0.5);
SoIndexedFaceSet34->setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1}, 30);
SoColor* SoColor35 = new SoColor();
SoColor35->setColor(new float[]{0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0}, 18);
SoIndexedFaceSet34->setColor(*SoColor35);

SoCoordinate* SoCoordinate36 = new SoCoordinate();
SoCoordinate36->setPoint(new float[]{-2.0,1.0,1.0,-2.0,-1.0,1.0,2.0,1.0,1.0,2.0,-1.0,1.0,2.0,1.0,-1.0,2.0,-1.0,-1.0,-2.0,1.0,-1.0,-2.0,-1.0,-1.0}, 24);
SoIndexedFaceSet34->setCoord(*SoCoordinate36);

SoTextureCoordinate* SoTextureCoordinate37 = new SoTextureCoordinate();
SoTextureCoordinate37->setPoint(new float[]{-1.0,2.0,-1.0,-1.0,2.0,2.0,2.0,-1.0}, 8);
SoIndexedFaceSet34->setTexCoord(*SoTextureCoordinate37);

SoShape30->setGeometry(*SoIndexedFaceSet34);

SoNode22->addChild(*SoShape30);

SoSceneManager0->setSceneGraph(*SoNode22);

return 0;
}

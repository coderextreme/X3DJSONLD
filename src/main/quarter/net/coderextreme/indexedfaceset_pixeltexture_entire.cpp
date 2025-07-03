
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
Someta2->setContent(QString("indexedfaceset_pixeltexture_entire.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("reference"));
Someta3->setContent(QString("http://www.nist.gov/vrml.html"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("reference"));
Someta4->setContent(QString("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("http://www.itl.nist.gov/div897/ctg/vrml/members.html"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("disclaimer"));
Someta6->setContent(QString("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("info"));
Someta7->setContent(QString("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("translator"));
Someta8->setContent(QString("Michael Kass NIST, Don Brutzman NPS"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("translated"));
Someta9->setContent(QString("21 January 2001"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("modified"));
Someta10->setContent(QString("13 January 2014"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("description"));
Someta11->setContent(QString("Test browser ability to completely map one PixelTexture onto the surface of an IndexedFaceSet geometry. Four colored squares should map onto each face of the IndexedFaceSet. The PixelTexture consists of red quarter (lower left), green quarter (lower right), white quarter (upper left) and yellow quarter (upper right). PixelTexture should map once onto the surface of the IndexedFaceSet, with the S (horizontal) axis of the texture corresponding to the X axis of the geometry."));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("identifier"));
Someta12->setContent(QString("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_entire.x3d"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("generator"));
Someta13->setContent(QString("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("generator"));
Someta14->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("license"));
Someta15->setContent(QString("../../license.html"));
Sohead1->addMeta(*Someta15);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode16 = new SoNode();
SoViewpoint* SoViewpoint17 = new SoViewpoint();
SoViewpoint17->setDescription(QString("Front View"));
SoNode16->addChild(*SoViewpoint17);

SoViewpoint* SoViewpoint18 = new SoViewpoint();
SoViewpoint18->setDescription(QString("Rear View"));
SoViewpoint18->setOrientation(new float[]{0.0,1.0,0.0,3.14});
SoViewpoint18->setPosition(new float[]{0.0,0.0,-10.0});
SoNode16->addChild(*SoViewpoint18);

SoViewpoint* SoViewpoint19 = new SoViewpoint();
SoViewpoint19->setDescription(QString("Top View"));
SoViewpoint19->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoViewpoint19->setPosition(new float[]{0.0,10.0,0.0});
SoNode16->addChild(*SoViewpoint19);

SoViewpoint* SoViewpoint20 = new SoViewpoint();
SoViewpoint20->setDescription(QString("Bottom View"));
SoViewpoint20->setOrientation(new float[]{1.0,0.0,0.0,1.57});
SoViewpoint20->setPosition(new float[]{0.0,-10.0,0.0});
SoNode16->addChild(*SoViewpoint20);

SoViewpoint* SoViewpoint21 = new SoViewpoint();
SoViewpoint21->setDescription(QString("Right View"));
SoViewpoint21->setOrientation(new float[]{0.0,1.0,0.0,1.57});
SoViewpoint21->setPosition(new float[]{10.0,0.0,0.0});
SoNode16->addChild(*SoViewpoint21);

SoViewpoint* SoViewpoint22 = new SoViewpoint();
SoViewpoint22->setDescription(QString("Left View"));
SoViewpoint22->setOrientation(new float[]{0.0,1.0,0.0,-1.57});
SoViewpoint22->setPosition(new float[]{-10.0,0.0,0.0});
SoNode16->addChild(*SoViewpoint22);

SoNavigationInfo* SoNavigationInfo23 = new SoNavigationInfo();
SoNavigationInfo23->setType(new QString[]{QString("EXAMINE"), QString("WALK"), QString("FLY"), QString("ANY")}, 4);
SoNode16->addChild(*SoNavigationInfo23);

SoShape* SoShape24 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance25 = new SoVRMLAppearance();
SoMaterial* SoMaterial26 = new SoMaterial();
SoVRMLAppearance25->addChild(*SoMaterial26);

SoPixelTexture* SoPixelTexture27 = new SoPixelTexture();
SoPixelTexture27->setImage(QString("2 2 4 4278190335 16711935 4294967295 4294902015"));
SoPixelTexture27->setRepeatS(false);
SoPixelTexture27->setRepeatT(false);
SoVRMLAppearance25->addChild(*SoPixelTexture27);

SoShape24->addChild(*SoVRMLAppearance25);

SoIndexedFaceSet* SoIndexedFaceSet28 = new SoIndexedFaceSet();
SoIndexedFaceSet28->setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 30);
SoCoordinate* SoCoordinate29 = new SoCoordinate();
SoCoordinate29->setPoint(new float[]{-2.0,1.5,1.0,-2.0,-1.5,1.0,2.0,1.5,1.0,2.0,-1.5,1.0,2.0,1.5,-1.0,2.0,-1.5,-1.0,-2.0,1.5,-1.0,-2.0,-1.5,-1.0}, 24);
SoIndexedFaceSet28->setCoord(*SoCoordinate29);

SoShape24->setGeometry(*SoIndexedFaceSet28);

SoNode16->addChild(*SoShape24);

SoSceneManager0->setSceneGraph(*SoNode16);

return 0;
}

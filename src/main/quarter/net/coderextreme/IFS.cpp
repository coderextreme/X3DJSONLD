
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
Socomponent* Socomponent2 = new Socomponent();
Socomponent2->setName(QString("HAnim"));
Socomponent2->setLevel(1);
Sohead1->addChild(*Socomponent2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("title"));
Someta3->setContent(QString("IFS.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("identifier"));
Someta4->setContent(QString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/IFS.x3d"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("description"));
Someta5->setContent(QString("An attempt at a standard LOA-4 skeleton"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("generator"));
Someta6->setContent(QString("h2.pl"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("modified"));
Someta7->setContent(QString("18 Jan 2023"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("creator"));
Someta8->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("created"));
Someta9->setContent(QString("9 November 2020"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("license"));
Someta10->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta10);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode11 = new SoNode();
SoGroup* SoGroup12 = new SoGroup();
//DEFS for markers of skeleton joints, segments, and sites
SoTransform* SoTransform13 = new SoTransform();
SoTransform13->setTranslation(new float[]{0.0,2.1,0.0});
SoShape* SoShape14 = new SoShape();
SoShape14->setDEF(QString("HAnimSiteShape"));
SoIndexedFaceSet* SoIndexedFaceSet15 = new SoIndexedFaceSet();
SoIndexedFaceSet15->setDEF(QString("DiamondIFS"));
SoIndexedFaceSet15->setCreaseAngle(0.5);
SoIndexedFaceSet15->setSolid(false);
SoIndexedFaceSet15->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoColorRGBA* SoColorRGBA16 = new SoColorRGBA();
SoColorRGBA16->setDEF(QString("HAnimSiteColorRGBA"));
SoColorRGBA16->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 8);
SoIndexedFaceSet15->addChild(*SoColorRGBA16);

SoCoordinate* SoCoordinate17 = new SoCoordinate();
SoCoordinate17->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet15->setCoord(*SoCoordinate17);

SoShape14->setGeometry(*SoIndexedFaceSet15);

SoVRMLAppearance* SoVRMLAppearance18 = new SoVRMLAppearance();
SoMaterial* SoMaterial19 = new SoMaterial();
SoMaterial19->setDiffuseColor(new float[]{1.0,1.0,0.0});
SoMaterial19->setTransparency(0.3);
SoVRMLAppearance18->addChild(*SoMaterial19);

SoShape14->addChild(*SoVRMLAppearance18);

SoTransform13->addChild(*SoShape14);

SoGroup12->addChild(*SoTransform13);

SoNode11->addChild(*SoGroup12);

SoNavigationInfo* SoNavigationInfo20 = new SoNavigationInfo();
SoNavigationInfo20->setSpeed(1.5);
SoNode11->addChild(*SoNavigationInfo20);

SoViewpoint* SoViewpoint21 = new SoViewpoint();
SoViewpoint21->setDescription(QString("default"));
SoNode11->addChild(*SoViewpoint21);

SoSceneManager0->setSceneGraph(*SoNode11);

return 0;
}

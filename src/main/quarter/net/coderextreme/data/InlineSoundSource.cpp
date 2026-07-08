
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
SoSceneManager0->setProfile(QString("Full"));
SoSceneManager0->setVersion(QString("4.0"));
Sohead* Sohead1 = new Sohead();
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("InlineSoundSource.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("This demo is the same with the Single Audio Demo, with the difference that it uses the Inline grouping node. Namely, the scene is an X3D file and all nodes are loaded by Inline node via the \"url\" of X3D file."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("info"));
Someta4->setContent(QString("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("created"));
Someta6->setContent(QString("28 October 2020"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("modified"));
Someta7->setContent(QString("4 August 2021"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("reference"));
Someta8->setContent(QString("CHANGELOG.txt"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("TODO"));
Someta9->setContent(QString("credit for audio files"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("https://medialab.hmu.gr/minipages/x3domAudio"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("identifier"));
Someta11->setContent(QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/InlineSoundSource.x3d"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("generator"));
Someta12->setContent(QString("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("license"));
Someta13->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta13);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode14 = new SoNode();
SoWorldInfo* SoWorldInfo15 = new SoWorldInfo();
SoWorldInfo15->setTitle(QString("InlineSoundSource.x3d"));
SoNode14->addChild(*SoWorldInfo15);

SoNavigationInfo* SoNavigationInfo16 = new SoNavigationInfo();
SoNavigationInfo16->setDEF(QString("NAV"));
SoNode14->addChild(*SoNavigationInfo16);

SoBackground* SoBackground17 = new SoBackground();
SoBackground17->setBackUrl(new QString[]{QString("images/generic/BK1.png"), QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png")}, 2);
SoBackground17->setBottomUrl(new QString[]{QString("images/generic/DN1.png"), QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png")}, 2);
SoBackground17->setFrontUrl(new QString[]{QString("images/generic/FR1.png"), QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png")}, 2);
SoBackground17->setLeftUrl(new QString[]{QString("images/generic/LF1.png"), QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png")}, 2);
SoBackground17->setRightUrl(new QString[]{QString("images/generic/RT1.png"), QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png")}, 2);
SoBackground17->setTopUrl(new QString[]{QString("images/generic/UP1.png"), QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png")}, 2);
SoNode14->addChild(*SoBackground17);

SoViewpoint* SoViewpoint18 = new SoViewpoint();
SoViewpoint18->setDEF(QString("Camera001"));
SoViewpoint18->setDescription(QString("Camera001"));
SoViewpoint18->setFarDistance(0);
SoViewpoint18->setNearDistance(1);
SoViewpoint18->setOrientation(new float[]{1.0,0.0,0.0,-0.523599});
SoViewpoint18->setPosition(new float[]{0.0,2000.0,3500.0});
SoNode14->addChild(*SoViewpoint18);

SoTransform* SoTransform19 = new SoTransform();
SoTransform19->setDEF(QString("Floor"));
SoTransform19->setTranslation(new float[]{1.241,0.0,0.358});
SoShape* SoShape20 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance21 = new SoVRMLAppearance();
SoVRMLAppearance21->setDEF(QString("WireColor"));
SoMaterial* SoMaterial22 = new SoMaterial();
SoMaterial22->setDiffuseColor(new float[]{0.122,0.114,0.125});
SoVRMLAppearance21->addChild(*SoMaterial22);

SoShape20->addChild(*SoVRMLAppearance21);

SoIndexedFaceSet* SoIndexedFaceSet23 = new SoIndexedFaceSet();
SoIndexedFaceSet23->setDEF(QString("Box001-GEOMETRY"));
SoIndexedFaceSet23->setCoordIndex(new int32_t[]{0,1,2,-1,3,4,5,-1,6,7,8,-1,9,10,11,-1,12,13,14,-1,15,16,17,-1,18,19,20,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,33,34,35,-1}, 48);
SoIndexedFaceSet23->setSolid(false);
SoCoordinate* SoCoordinate24 = new SoCoordinate();
SoCoordinate24->setPoint(new float[]{-1000.0,0.0,1000.0,-1000.0,0.0,-1000.0,1000.0,0.0,-1000.0,1000.0,0.0,-1000.0,1000.0,0.0,1000.0,-1000.0,0.0,1000.0,-1000.0,8.031588,1000.0,1000.0,8.031588,1000.0,1000.0,8.031588,-1000.0,1000.0,8.031588,-1000.0,-1000.0,8.031588,-1000.0,-1000.0,8.031588,1000.0,-1000.0,0.0,1000.0,1000.0,0.0,1000.0,1000.0,8.031588,1000.0,1000.0,8.031588,1000.0,-1000.0,8.031588,1000.0,-1000.0,0.0,1000.0,1000.0,0.0,1000.0,1000.0,0.0,-1000.0,1000.0,8.031588,-1000.0,1000.0,8.031588,-1000.0,1000.0,8.031588,1000.0,1000.0,0.0,1000.0,1000.0,0.0,-1000.0,-1000.0,0.0,-1000.0,-1000.0,8.031588,-1000.0,-1000.0,8.031588,-1000.0,1000.0,8.031588,-1000.0,1000.0,0.0,-1000.0,-1000.0,0.0,-1000.0,-1000.0,0.0,1000.0,-1000.0,8.031588,1000.0,-1000.0,8.031588,1000.0,-1000.0,8.031588,-1000.0,-1000.0,0.0,-1000.0}, 108);
SoIndexedFaceSet23->setCoord(*SoCoordinate24);

SoNormal* SoNormal25 = new SoNormal();
SoNormal25->setVector(new float[]{0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0}, 108);
SoIndexedFaceSet23->setNormal(*SoNormal25);

SoShape20->setGeometry(*SoIndexedFaceSet23);

SoTransform19->addChild(*SoShape20);

SoNode14->addChild(*SoTransform19);

SoTransform* SoTransform26 = new SoTransform();
SoTransform26->setDEF(QString("InlineScene"));
SoInline* SoInline27 = new SoInline();
SoInline27->setDEF(QString("inline"));
SoInline27->setUrl(new QString[]{QString("x3d/example1.x3d"), QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.x3d"), QString("x3d/example1.wrl"), QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.wrl")}, 4);
SoTransform26->addChild(*SoInline27);

SoNode14->addChild(*SoTransform26);

SoSceneManager0->setSceneGraph(*SoNode14);

return 0;
}

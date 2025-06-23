
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
Someta3->setContent(QString("JohnJoint.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("identifier"));
Someta4->setContent(QString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint.x3d"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("description"));
Someta5->setContent(QString("An attempt at a standard LOA-4 skeleton"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("generator"));
Someta6->setContent(QString("h6.pl"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("creator"));
Someta7->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("created"));
Someta8->setContent(QString("12 January 2023"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("license"));
Someta9->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta9);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode10 = new SoNode();
SoTransform* SoTransform11 = new SoTransform();
//DEF for markerfor XYZ axes
SoShape* SoShape12 = new SoShape();
SoShape12->setDEF(QString("AxisLinesShape"));
//RGB lines showing XYZ axes
SoIndexedLineSet* SoIndexedLineSet13 = new SoIndexedLineSet();
SoIndexedLineSet13->setColorIndex(new int[]{0,1,2}, 3);
SoIndexedLineSet13->setColorPerVertex(false);
SoIndexedLineSet13->setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
SoCoordinate* SoCoordinate14 = new SoCoordinate();
SoCoordinate14->setPoint(new float[]{0.0,0.0,0.0,0.1,0.0,0.0,0.0,0.1,0.0,0.0,0.0,0.1}, 12);
SoIndexedLineSet13->setCoord(*SoCoordinate14);

SoColor* SoColor15 = new SoColor();
SoColor15->setColor(new float[]{1.0,0.0,0.0,0.0,0.6,0.0,0.0,0.0,1.0}, 9);
SoIndexedLineSet13->setColor(*SoColor15);

SoShape12->setGeometry(*SoIndexedLineSet13);

SoTransform11->addChild(*SoShape12);

SoNode10->addChild(*SoTransform11);

SoGroup* SoGroup16 = new SoGroup();
//DEFS for markers of skeleton joints, segments, and sites
SoTransform* SoTransform17 = new SoTransform();
//<Transform translation='0 2 0' scale='1 1 1'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
SoTransform* SoTransform18 = new SoTransform();
SoTransform18->setTranslation(new float[]{0.0,2.1,0.0});
SoShape* SoShape19 = new SoShape();
SoShape19->setDEF(QString("HAnimJointShape"));
SoSphere* SoSphere20 = new SoSphere();
SoSphere20->setRadius(0.02);
SoShape19->setGeometry(*SoSphere20);

SoVRMLAppearance* SoVRMLAppearance21 = new SoVRMLAppearance();
SoMaterial* SoMaterial22 = new SoMaterial();
SoMaterial22->setDEF(QString("HAnimJointMaterial"));
SoMaterial22->setDiffuseColor(new float[]{0.0,0.0,0.8});
SoMaterial22->setTransparency(0.3);
SoVRMLAppearance21->addChild(*SoMaterial22);

SoShape19->addChild(*SoVRMLAppearance21);

SoTransform18->addChild(*SoShape19);

SoTransform17->addChild(*SoTransform18);

SoTransform* SoTransform23 = new SoTransform();
SoTransform23->setTranslation(new float[]{0.0,2.05,0.0});
SoShape* SoShape24 = new SoShape();
SoShape24->setDEF(QString("HAnimSegmentLine"));
SoLineSet* SoLineSet25 = new SoLineSet();
SoLineSet25->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA26 = new SoColorRGBA();
SoColorRGBA26->setDEF(QString("HAnimSegmentLineColorRGBA"));
SoColorRGBA26->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 8);
SoLineSet25->addChild(*SoColorRGBA26);

SoCoordinate* SoCoordinate27 = new SoCoordinate();
SoCoordinate27->setPoint(new float[]{-0.05,0.0,0.0,0.05,0.0,0.0}, 6);
SoLineSet25->setCoord(*SoCoordinate27);

SoShape24->setGeometry(*SoLineSet25);

SoTransform23->addChild(*SoShape24);

SoTransform17->addChild(*SoTransform23);

//<Transform translation='0 2.1 0' scale='1 1 1'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
SoGroup16->addChild(*SoTransform17);

SoNode10->addChild(*SoGroup16);

SoNavigationInfo* SoNavigationInfo28 = new SoNavigationInfo();
SoNavigationInfo28->setSpeed(1.5);
SoNode10->addChild(*SoNavigationInfo28);

SoViewpoint* SoViewpoint29 = new SoViewpoint();
SoViewpoint29->setDescription(QString("default"));
SoNode10->addChild(*SoViewpoint29);

SoSceneManager0->setSceneGraph(*SoNode10);

return 0;
}

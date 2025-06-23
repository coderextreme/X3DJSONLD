
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
SoSceneManager0->setProfile(QString("CADInterchange"));
SoSceneManager0->setVersion(QString("3.1"));
Sohead* Sohead1 = new Sohead();
Socomponent* Socomponent2 = new Socomponent();
Socomponent2->setName(QString("CADGeometry"));
Socomponent2->setLevel(2);
Sohead1->addChild(*Socomponent2);

Socomponent* Socomponent3 = new Socomponent();
Socomponent3->setName(QString("EnvironmentalEffects"));
Socomponent3->setLevel(1);
Sohead1->addChild(*Socomponent3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("title"));
Someta4->setContent(QString("CADPartChildNoTransformation.x3d"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("description"));
Someta5->setContent(QString("Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children."));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("creator"));
Someta6->setContent(QString("Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("translator"));
Someta7->setContent(QString("Vince Marchetti bushing generation using python scripts"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("reference"));
Someta8->setContent(QString("https://www.web3d.org/member-only/mantis/view.php?id=528"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("warning"));
Someta9->setContent(QString("This scene is intended for specification development only."));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("created"));
Someta10->setContent(QString("29 June 2012"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("modified"));
Someta11->setContent(QString("20 October 2019"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("identifier"));
Someta12->setContent(QString("https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("generator"));
Someta13->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("license"));
Someta14->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta14);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode15 = new SoNode();
SoWorldInfo* SoWorldInfo16 = new SoWorldInfo();
SoWorldInfo16->setTitle(QString("CADPartChildNoTransformation.x3d"));
SoNode15->addChild(*SoWorldInfo16);

SoBackground* SoBackground17 = new SoBackground();
SoBackground17->setSkyColor(new float[]{0.9607843,1.0,0.9607843}, 3);
SoNode15->addChild(*SoBackground17);

SoViewpoint* SoViewpoint18 = new SoViewpoint();
SoViewpoint18->setDescription(QString("Hello CAD bushing"));
SoViewpoint18->setOrientation(new float[]{1.0,0.0,0.0,-0.321751});
SoViewpoint18->setPosition(new float[]{0.0,5.0,15.0});
SoNode15->addChild(*SoViewpoint18);

SoCADAssembly* SoCADAssembly19 = new SoCADAssembly();
SoCADAssembly19->X3DNode::setName(QString("DesignPatternAssembly"));
SoCADPart* SoCADPart20 = new SoCADPart();
SoCADPart20->X3DNode::setName(QString("CADPartExample"));
//the rotation and translation attributes serve to position the bushing within the assembly
SoCADFace* SoCADFace21 = new SoCADFace();
SoCADFace21->X3DNode::setName(QString("outerSurface"));
SoShape* SoShape22 = new SoShape();
//note solid='true' and so one-sided external rendering only
SoCylinder* SoCylinder23 = new SoCylinder();
SoCylinder23->setBottom(false);
SoCylinder23->setHeight(3);
SoCylinder23->setRadius(2);
SoCylinder23->setTop(false);
SoShape22->setGeometry(*SoCylinder23);

SoVRMLAppearance* SoVRMLAppearance24 = new SoVRMLAppearance();
SoVRMLAppearance24->setDEF(QString("AppearanceGrey"));
SoMaterial* SoMaterial25 = new SoMaterial();
SoVRMLAppearance24->addChild(*SoMaterial25);

SoShape22->addChild(*SoVRMLAppearance24);

SoCADFace21->setShape(SoShape22);

SoCADPart20->addChildren(SoCADFace21);

SoCADFace* SoCADFace26 = new SoCADFace();
SoCADFace26->X3DNode::setName(QString("innerSurface"));
SoShape* SoShape27 = new SoShape();
//note solid='false' and so two-sided internal + external rendering
SoCylinder* SoCylinder28 = new SoCylinder();
SoCylinder28->setBottom(false);
SoCylinder28->setHeight(3);
SoCylinder28->setSolid(false);
SoCylinder28->setTop(false);
SoShape27->setGeometry(*SoCylinder28);

SoVRMLAppearance* SoVRMLAppearance29 = new SoVRMLAppearance();
SoVRMLAppearance29->setUSE(QString("AppearanceGrey"));
SoShape27->addChild(*SoVRMLAppearance29);

SoCADFace26->setShape(SoShape27);

SoCADPart20->addChildren(SoCADFace26);

SoCADFace* SoCADFace30 = new SoCADFace();
SoCADFace30->X3DNode::setName(QString("topCap"));
SoShape* SoShape31 = new SoShape();
SoIndexedTriangleSet* SoIndexedTriangleSet32 = new SoIndexedTriangleSet();
SoIndexedTriangleSet32->setIndex(new int32_t[]{0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65}, 192);
SoCoordinate* SoCoordinate33 = new SoCoordinate();
SoCoordinate33->setPoint(new float[]{2.0,1.5,0.0,1.0,1.5,0.0,1.9616,1.5,0.3902,0.9808,1.5,0.1951,1.8478,1.5,0.7654,0.9239,1.5,0.3827,1.6629,1.5,1.1111,0.8315,1.5,0.5556,1.4142,1.5,1.4142,0.7071,1.5,0.7071,1.1111,1.5,1.6629,0.5556,1.5,0.8315,0.7654,1.5,1.8478,0.3827,1.5,0.9239,0.3902,1.5,1.9616,0.1951,1.5,0.9808,0.0,1.5,2.0,0.0,1.5,1.0,-0.3902,1.5,1.9616,-0.1951,1.5,0.9808,-0.7654,1.5,1.8478,-0.3827,1.5,0.9239,-1.1111,1.5,1.6629,-0.5556,1.5,0.8315,-1.4142,1.5,1.4142,-0.7071,1.5,0.7071,-1.6629,1.5,1.1111,-0.8315,1.5,0.5556,-1.8478,1.5,0.7654,-0.9239,1.5,0.3827,-1.9616,1.5,0.3902,-0.9808,1.5,0.1951,-2.0,1.5,0.0,-1.0,1.5,0.0,-1.9616,1.5,-0.3902,-0.9808,1.5,-0.1951,-1.8478,1.5,-0.7654,-0.9239,1.5,-0.3827,-1.6629,1.5,-1.1111,-0.8315,1.5,-0.5556,-1.4142,1.5,-1.4142,-0.7071,1.5,-0.7071,-1.1111,1.5,-1.6629,-0.5556,1.5,-0.8315,-0.7654,1.5,-1.8478,-0.3827,1.5,-0.9239,-0.3902,1.5,-1.9616,-0.1951,1.5,-0.9808,0.0,1.5,-2.0,0.0,1.5,-1.0,0.3902,1.5,-1.9616,0.1951,1.5,-0.9808,0.7654,1.5,-1.8478,0.3827,1.5,-0.9239,1.1111,1.5,-1.6629,0.5556,1.5,-0.8315,1.4142,1.5,-1.4142,0.7071,1.5,-0.7071,1.6629,1.5,-1.1111,0.8315,1.5,-0.5556,1.8478,1.5,-0.7654,0.9239,1.5,-0.3827,1.9616,1.5,-0.3902,0.9808,1.5,-0.1951,2.0,1.5,0.0,1.0,1.5,0.0}, 198);
SoIndexedTriangleSet32->setCoord(*SoCoordinate33);

SoShape31->setGeometry(*SoIndexedTriangleSet32);

SoVRMLAppearance* SoVRMLAppearance34 = new SoVRMLAppearance();
SoVRMLAppearance34->setUSE(QString("AppearanceGrey"));
SoShape31->addChild(*SoVRMLAppearance34);

SoCADFace30->setShape(SoShape31);

SoCADPart20->addChildren(SoCADFace30);

SoCADFace* SoCADFace35 = new SoCADFace();
SoCADFace35->X3DNode::setName(QString("bottomCap"));
SoShape* SoShape36 = new SoShape();
SoIndexedTriangleSet* SoIndexedTriangleSet37 = new SoIndexedTriangleSet();
SoIndexedTriangleSet37->setIndex(new int32_t[]{0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65}, 192);
SoCoordinate* SoCoordinate38 = new SoCoordinate();
SoCoordinate38->setPoint(new float[]{2.0,-1.5,0.0,1.0,-1.5,0.0,1.9616,-1.5,-0.3902,0.9808,-1.5,-0.1951,1.8478,-1.5,-0.7654,0.9239,-1.5,-0.3827,1.6629,-1.5,-1.1111,0.8315,-1.5,-0.5556,1.4142,-1.5,-1.4142,0.7071,-1.5,-0.7071,1.1111,-1.5,-1.6629,0.5556,-1.5,-0.8315,0.7654,-1.5,-1.8478,0.3827,-1.5,-0.9239,0.3902,-1.5,-1.9616,0.1951,-1.5,-0.9808,0.0,-1.5,-2.0,0.0,-1.5,-1.0,-0.3902,-1.5,-1.9616,-0.1951,-1.5,-0.9808,-0.7654,-1.5,-1.8478,-0.3827,-1.5,-0.9239,-1.1111,-1.5,-1.6629,-0.5556,-1.5,-0.8315,-1.4142,-1.5,-1.4142,-0.7071,-1.5,-0.7071,-1.6629,-1.5,-1.1111,-0.8315,-1.5,-0.5556,-1.8478,-1.5,-0.7654,-0.9239,-1.5,-0.3827,-1.9616,-1.5,-0.3902,-0.9808,-1.5,-0.1951,-2.0,-1.5,0.0,-1.0,-1.5,0.0,-1.9616,-1.5,0.3902,-0.9808,-1.5,0.1951,-1.8478,-1.5,0.7654,-0.9239,-1.5,0.3827,-1.6629,-1.5,1.1111,-0.8315,-1.5,0.5556,-1.4142,-1.5,1.4142,-0.7071,-1.5,0.7071,-1.1111,-1.5,1.6629,-0.5556,-1.5,0.8315,-0.7654,-1.5,1.8478,-0.3827,-1.5,0.9239,-0.3902,-1.5,1.9616,-0.1951,-1.5,0.9808,0.0,-1.5,2.0,0.0,-1.5,1.0,0.3902,-1.5,1.9616,0.1951,-1.5,0.9808,0.7654,-1.5,1.8478,0.3827,-1.5,0.9239,1.1111,-1.5,1.6629,0.5556,-1.5,0.8315,1.4142,-1.5,1.4142,0.7071,-1.5,0.7071,1.6629,-1.5,1.1111,0.8315,-1.5,0.5556,1.8478,-1.5,0.7654,0.9239,-1.5,0.3827,1.9616,-1.5,0.3902,0.9808,-1.5,0.1951,2.0,-1.5,0.0,1.0,-1.5,0.0}, 198);
SoIndexedTriangleSet37->setCoord(*SoCoordinate38);

SoShape36->setGeometry(*SoIndexedTriangleSet37);

SoVRMLAppearance* SoVRMLAppearance39 = new SoVRMLAppearance();
SoVRMLAppearance39->setUSE(QString("AppearanceGrey"));
SoShape36->addChild(*SoVRMLAppearance39);

SoCADFace35->setShape(SoShape36);

SoCADPart20->addChildren(SoCADFace35);

SoCADAssembly19->X3DGroupingNode::addChild(static_cast<X3DGroupingNode*>(*SoCADPart20));

SoNode15->X3DBaseNode::addChild(static_cast<X3DGroupingNode*>(*SoCADAssembly19));

SoSceneManager0->setSceneGraph(*SoNode15);

return 0;
}

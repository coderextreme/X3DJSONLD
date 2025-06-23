
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
Someta2->setContent(QString("ViewFrustumExample.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Display view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, illustrating ProtoInstance reuse of a separately declared prototype."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("Don Brutzman"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("translated"));
Someta5->setContent(QString("16 August 2008"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("modified"));
Someta6->setContent(QString("20 October 2019"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("reference"));
Someta7->setContent(QString("ViewFrustumPrototype.x3d"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("drawing"));
Someta8->setContent(QString("ViewFrustumComputation.png"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("Image"));
Someta9->setContent(QString("ViewFrustumOverheadView.png"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("Image"));
Someta10->setContent(QString("ViewFrustumObliqueView.png"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("Image"));
Someta11->setContent(QString("ViewpointCalculator.png"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("Image"));
Someta12->setContent(QString("ViewpointCalculatorComposed.png"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("subject"));
Someta13->setContent(QString("view culling frustum"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("identifier"));
Someta14->setContent(QString("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("generator"));
Someta15->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("license"));
Someta16->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta16);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode17 = new SoNode();
SoWorldInfo* SoWorldInfo18 = new SoWorldInfo();
SoWorldInfo18->setTitle(QString("ViewFrustumExample.x3d"));
SoNode17->addChild(*SoWorldInfo18);

SoViewpoint* SoViewpoint19 = new SoViewpoint();
SoViewpoint19->setDescription(QString("ViewFrustum from above, looking down"));
SoViewpoint19->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoViewpoint19->setPosition(new float[]{0.0,40.0,0.0});
SoNode17->addChild(*SoViewpoint19);

SoViewpoint* SoViewpoint20 = new SoViewpoint();
SoViewpoint20->setDescription(QString("ViewFrustum from point of view"));
SoNode17->addChild(*SoViewpoint20);

SoViewpoint* SoViewpoint21 = new SoViewpoint();
SoViewpoint21->setDescription(QString("ViewFrustum behind point of view"));
SoViewpoint21->setPosition(new float[]{0.0,0.0,15.0});
SoNode17->addChild(*SoViewpoint21);

SoViewpoint* SoViewpoint22 = new SoViewpoint();
SoViewpoint22->setDescription(QString("ViewFrustum oblique side view"));
SoViewpoint22->setOrientation(new float[]{0.8005,0.5926,0.0898,-0.3743});
SoViewpoint22->setPosition(new float[]{-5.0,5.0,20.0});
SoNode17->addChild(*SoViewpoint22);

SoNavigationInfo* SoNavigationInfo23 = new SoNavigationInfo();
SoNavigationInfo23->setType(new QString[]{QString("EXAMINE"), QString("FLY"), QString("ANY")}, 3);
SoNode17->addChild(*SoNavigationInfo23);

SoExternProtoDeclare* SoExternProtoDeclare24 = new SoExternProtoDeclare();
SoExternProtoDeclare24->setName(QString("ViewFrustum"));
SoExternProtoDeclare24->setAppinfo(QString("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes"));
SoExternProtoDeclare24->setUrl(new QString[]{QString("ViewFrustumPrototype.x3d#ViewFrustum")}, 1);
Sofield* Sofield25 = new Sofield();
Sofield25->setName(QString("ViewpointNode"));
Sofield25->setAccessType(QString("initializeOnly"));
Sofield25->setAppinfo(QString("required: insert Viewpoint DEF or USE node for view of interest"));
Sofield25->setType(QString("SFNode"));
SoExternProtoDeclare24->addChild(*Sofield25);

Sofield* Sofield26 = new Sofield();
Sofield26->setName(QString("NavigationInfoNode"));
Sofield26->setAccessType(QString("initializeOnly"));
Sofield26->setAppinfo(QString("required: insert NavigationInfo DEF or USE node of interest"));
Sofield26->setType(QString("SFNode"));
SoExternProtoDeclare24->addChild(*Sofield26);

Sofield* Sofield27 = new Sofield();
Sofield27->setName(QString("visible"));
Sofield27->setAccessType(QString("inputOutput"));
Sofield27->setAppinfo(QString("whether or not frustum geometry is rendered"));
Sofield27->setType(QString("SFBool"));
SoExternProtoDeclare24->addChild(*Sofield27);

Sofield* Sofield28 = new Sofield();
Sofield28->setName(QString("lineColor"));
Sofield28->setAccessType(QString("inputOutput"));
Sofield28->setAppinfo(QString("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"));
Sofield28->setType(QString("SFColor"));
SoExternProtoDeclare24->addChild(*Sofield28);

Sofield* Sofield29 = new Sofield();
Sofield29->setName(QString("frustumColor"));
Sofield29->setAccessType(QString("inputOutput"));
Sofield29->setAppinfo(QString("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"));
Sofield29->setType(QString("SFColor"));
SoExternProtoDeclare24->addChild(*Sofield29);

Sofield* Sofield30 = new Sofield();
Sofield30->setName(QString("transparency"));
Sofield30->setAccessType(QString("inputOutput"));
Sofield30->setAppinfo(QString("transparency of ViewFrustum hull geometry, default value 0.5"));
Sofield30->setType(QString("SFFloat"));
SoExternProtoDeclare24->addChild(*Sofield30);

Sofield* Sofield31 = new Sofield();
Sofield31->setName(QString("aspectRatio"));
Sofield31->setAccessType(QString("inputOutput"));
Sofield31->setAppinfo(QString("assumed ratio height/width, default value 0.75"));
Sofield31->setType(QString("SFFloat"));
SoExternProtoDeclare24->addChild(*Sofield31);

Sofield* Sofield32 = new Sofield();
Sofield32->setName(QString("trace"));
Sofield32->setAccessType(QString("initializeOnly"));
Sofield32->setAppinfo(QString("debug support, default false"));
Sofield32->setType(QString("SFBool"));
SoExternProtoDeclare24->addChild(*Sofield32);

SoNode17->addChild(*SoExternProtoDeclare24);

//Example use
SoProtoInstance* SoProtoInstance33 = new SoProtoInstance();
SoProtoInstance33->setName(QString("ViewFrustum"));
SoField* SoField34 = new SoField();
SoField34->setName(QString("ViewpointNode"));
//prefer empty description to prevent entry in player's ViewpointList
SoViewpoint* SoViewpoint35 = new SoViewpoint();
SoViewpoint35->setDescription(QString("ViewFrustum ViewpointNode"));
SoField34->addChild(*SoViewpoint35);

SoProtoInstance33->addChild(*SoField34);

SoField* SoField36 = new SoField();
SoField36->setName(QString("NavigationInfoNode"));
SoNavigationInfo* SoNavigationInfo37 = new SoNavigationInfo();
SoNavigationInfo37->setVisibilityLimit(15);
SoField36->addChild(*SoNavigationInfo37);

SoProtoInstance33->addChild(*SoField36);

SoField* SoField38 = new SoField();
SoField38->setName(QString("visible"));
SoField38->setValue(QString("true"));
SoProtoInstance33->addChild(*SoField38);

SoField* SoField39 = new SoField();
SoField39->setName(QString("lineColor"));
SoField39->setValue(QString("0.9 0.9 0.9"));
SoProtoInstance33->addChild(*SoField39);

SoField* SoField40 = new SoField();
SoField40->setName(QString("frustumColor"));
SoField40->setValue(QString("0.8 0.8 0.8"));
SoProtoInstance33->addChild(*SoField40);

SoField* SoField41 = new SoField();
SoField41->setName(QString("transparency"));
SoField41->setValue(QString("0.75"));
SoProtoInstance33->addChild(*SoField41);

SoField* SoField42 = new SoField();
SoField42->setName(QString("trace"));
SoField42->setValue(QString("true"));
SoProtoInstance33->addChild(*SoField42);

SoNode17->addChild(*SoProtoInstance33);

//Visualization assists
SoInline* SoInline43 = new SoInline();
SoInline43->setDEF(QString("GridXZ"));
SoInline43->setUrl(new QString[]{QString("GridXZ_20x20Fixed.x3d")}, 1);
SoNode17->addChild(*SoInline43);

SoTransform* SoTransform44 = new SoTransform();
SoTransform44->setScale(new float[]{5.0,5.0,5.0});
SoInline* SoInline45 = new SoInline();
SoInline45->setDEF(QString("CoordinateAxes"));
SoInline45->setUrl(new QString[]{QString("CoordinateAxes.x3d")}, 1);
SoTransform44->addChild(*SoInline45);

SoNode17->addChild(*SoTransform44);

SoSceneManager0->setSceneGraph(*SoNode17);

return 0;
}

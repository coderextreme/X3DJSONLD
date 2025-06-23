
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
Someta2->setContent(QString("jumpcut_loadurl.x3d"));
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
Someta10->setContent(QString("20 October 2019"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("description"));
Someta11->setContent(QString("Test jumpcut Viewpoint transition using Script loadUrl method. A NavigationInfo type of ANY is NOT included in the NavigationInfo node field in this world. Consequently, a Script node with a call to the \"loadURL\" method, with a url corresponding to the MFString \"Top_View\" (the name of a Viewpoint in this world) should create a \"jump cut\" transition of views when the Box geometry in this world is indicated by the pointing device. As a result, indicating the Box geometry should result in a Viewpoint transition to the top view of the Box geometry."));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("identifier"));
Someta12->setContent(QString("https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d"));
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
SoWorldInfo* SoWorldInfo17 = new SoWorldInfo();
SoWorldInfo17->setTitle(QString("jumpcut_loadurl.x3d"));
SoNode16->addChild(*SoWorldInfo17);

SoBackground* SoBackground18 = new SoBackground();
SoBackground18->setGroundAngle(new float[]{1.57}, 1);
SoBackground18->setGroundColor(new float[]{0.0,0.5,0.0,0.0,0.5,0.0}, 6);
SoBackground18->setSkyColor(new float[]{0.0,0.0,1.0}, 3);
SoNode16->addChild(*SoBackground18);

SoNavigationInfo* SoNavigationInfo19 = new SoNavigationInfo();
SoNavigationInfo19->setType(new QString[]{QString("EXAMINE"), QString("WALK"), QString("FLY"), QString("ANY")}, 4);
SoNode16->addChild(*SoNavigationInfo19);

SoViewpoint* SoViewpoint20 = new SoViewpoint();
SoViewpoint20->setDEF(QString("Front_View"));
SoViewpoint20->setDescription(QString("Front View"));
SoNode16->addChild(*SoViewpoint20);

SoViewpoint* SoViewpoint21 = new SoViewpoint();
SoViewpoint21->setDEF(QString("Top_View"));
SoViewpoint21->setDescription(QString("Top View"));
SoViewpoint21->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoViewpoint21->setPosition(new float[]{0.0,10.0,0.0});
SoNode16->addChild(*SoViewpoint21);

SoTouchSensor* SoTouchSensor22 = new SoTouchSensor();
SoTouchSensor22->setDEF(QString("STARTER"));
SoTouchSensor22->setDescription(QString("touch to activate"));
SoNode16->addChild(*SoTouchSensor22);

SoTransform* SoTransform23 = new SoTransform();
SoTransform23->setDEF(QString("ROOT"));
SoShape* SoShape24 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance25 = new SoVRMLAppearance();
SoMaterial* SoMaterial26 = new SoMaterial();
SoVRMLAppearance25->addChild(*SoMaterial26);

SoShape24->addChild(*SoVRMLAppearance25);

SoBox* SoBox27 = new SoBox();
SoShape24->setGeometry(*SoBox27);

SoTransform23->addChild(*SoShape24);

SoNode16->addChild(*SoTransform23);

SoScript* SoScript28 = new SoScript();
SoScript28->setDEF(QString("MYSCRIPT"));
SoScript28->setUrl(new QString[]{QString("jumpcut_loadurl.js"), QString("https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.js")}, 2);
Sofield* Sofield29 = new Sofield();
Sofield29->setName(QString("myParameter"));
Sofield29->setAccessType(QString("initializeOnly"));
Sofield29->setType(QString("MFString"));
Sofield29->setValue(QString("\"Top_View\""));
SoScript28->addChild(*Sofield29);

Sofield* Sofield30 = new Sofield();
Sofield30->setName(QString("myUrl"));
Sofield30->setAccessType(QString("initializeOnly"));
Sofield30->setType(QString("MFString"));
Sofield30->setValue(QString("\"jumpcut_loadurl.x3d#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d#Top_View\" \"jumpcut_loadurl.wrl#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.wrl#Top_View\""));
SoScript28->addChild(*Sofield30);

Sofield* Sofield31 = new Sofield();
Sofield31->setName(QString("trigger_event"));
Sofield31->setAccessType(QString("inputOnly"));
Sofield31->setType(QString("SFBool"));
SoScript28->addChild(*Sofield31);

SoNode16->addChild(*SoScript28);

SoROUTE* SoROUTE32 = new SoROUTE();
SoROUTE32->setFromField(QString("isActive"));
SoROUTE32->setFromNode(QString("STARTER"));
SoROUTE32->setToField(QString("trigger_event"));
SoROUTE32->setToNode(QString("MYSCRIPT"));
SoNode16->addChild(*SoROUTE32);

SoSceneManager0->setSceneGraph(*SoNode16);

return 0;
}


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
SoSceneManager0->setVersion(QString("3.3"));
Sohead* Sohead1 = new Sohead();
Socomponent* Socomponent2 = new Socomponent();
Socomponent2->setName(QString("Scripting"));
Socomponent2->setLevel(1);
Sohead1->addChild(*Socomponent2);

Socomponent* Socomponent3 = new Socomponent();
Socomponent3->setName(QString("EnvironmentalEffects"));
Socomponent3->setLevel(3);
Sohead1->addChild(*Socomponent3);

Socomponent* Socomponent4 = new Socomponent();
Socomponent4->setName(QString("Shaders"));
Socomponent4->setLevel(1);
Sohead1->addChild(*Socomponent4);

Socomponent* Socomponent5 = new Socomponent();
Socomponent5->setName(QString("CubeMapTexturing"));
Socomponent5->setLevel(1);
Sohead1->addChild(*Socomponent5);

Socomponent* Socomponent6 = new Socomponent();
Socomponent6->setName(QString("Texturing"));
Socomponent6->setLevel(1);
Sohead1->addChild(*Socomponent6);

Socomponent* Socomponent7 = new Socomponent();
Socomponent7->setName(QString("Rendering"));
Socomponent7->setLevel(1);
Sohead1->addChild(*Socomponent7);

Socomponent* Socomponent8 = new Socomponent();
Socomponent8->setName(QString("Grouping"));
Socomponent8->setLevel(3);
Sohead1->addChild(*Socomponent8);

Socomponent* Socomponent9 = new Socomponent();
Socomponent9->setName(QString("Core"));
Socomponent9->setLevel(1);
Sohead1->addChild(*Socomponent9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("title"));
Someta10->setContent(QString("x3domflowers.x3d"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("creator"));
Someta11->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("description"));
Someta12->setContent(QString("5 or more prismatic flowers"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("generator"));
Someta13->setContent(QString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("identifier"));
Someta14->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/personal/x3domflowers.x3d"));
Sohead1->addMeta(*Someta14);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode15 = new SoNode();
SoNavigationInfo* SoNavigationInfo16 = new SoNavigationInfo();
SoNode15->addChild(*SoNavigationInfo16);

//Images courtesy of Paul Debevec's Light Probe Image Gallery
SoBackground* SoBackground17 = new SoBackground();
SoBackground17->setBackUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoBackground17->setBottomUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoBackground17->setFrontUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoBackground17->setLeftUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoBackground17->setRightUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoBackground17->setTopUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoNode15->addChild(*SoBackground17);

SoGroup* SoGroup18 = new SoGroup();
SoExternProtoDeclare* SoExternProtoDeclare19 = new SoExternProtoDeclare();
SoExternProtoDeclare19->setName(QString("FlowerProto"));
SoExternProtoDeclare19->setUrl(new QString[]{QString("../personal/flowerproto.json#FlowerProto")}, 1);
Sofield* Sofield20 = new Sofield();
Sofield20->setName(QString("vertex"));
Sofield20->setAccessType(QString("inputOutput"));
Sofield20->setType(QString("MFString"));
SoExternProtoDeclare19->addChild(*Sofield20);

Sofield* Sofield21 = new Sofield();
Sofield21->setName(QString("fragment"));
Sofield21->setAccessType(QString("inputOutput"));
Sofield21->setType(QString("MFString"));
SoExternProtoDeclare19->addChild(*Sofield21);

SoGroup18->addChild(*SoExternProtoDeclare19);

SoProtoDeclare* SoProtoDeclare22 = new SoProtoDeclare();
SoProtoDeclare22->setName(QString("flower"));
SoProtoBody* SoProtoBody23 = new SoProtoBody();
SoGroup* SoGroup24 = new SoGroup();
SoProtoInstance* SoProtoInstance25 = new SoProtoInstance();
SoProtoInstance25->setName(QString("FlowerProto"));
SoField* SoField26 = new SoField();
SoField26->setName(QString("vertex"));
SoField26->setValue(QString("\"../shaders/x3dom_flowers_chromatic.vs\""));
SoProtoInstance25->addChild(*SoField26);

SoField* SoField27 = new SoField();
SoField27->setName(QString("fragment"));
SoField27->setValue(QString("\"../shaders/common.fs\""));
SoProtoInstance25->addChild(*SoField27);

SoGroup24->addChild(*SoProtoInstance25);

SoProtoBody23->addChild(*SoGroup24);

SoProtoDeclare22->addChild(*SoProtoBody23);

SoGroup18->addChild(*SoProtoDeclare22);

SoProtoInstance* SoProtoInstance28 = new SoProtoInstance();
SoProtoInstance28->setName(QString("flower"));
SoGroup18->addChild(*SoProtoInstance28);

SoProtoInstance* SoProtoInstance29 = new SoProtoInstance();
SoProtoInstance29->setName(QString("flower"));
SoGroup18->addChild(*SoProtoInstance29);

SoProtoInstance* SoProtoInstance30 = new SoProtoInstance();
SoProtoInstance30->setName(QString("flower"));
SoGroup18->addChild(*SoProtoInstance30);

SoProtoInstance* SoProtoInstance31 = new SoProtoInstance();
SoProtoInstance31->setName(QString("flower"));
SoGroup18->addChild(*SoProtoInstance31);

SoProtoInstance* SoProtoInstance32 = new SoProtoInstance();
SoProtoInstance32->setName(QString("flower"));
SoGroup18->addChild(*SoProtoInstance32);

SoProtoInstance* SoProtoInstance33 = new SoProtoInstance();
SoProtoInstance33->setName(QString("flower"));
SoGroup18->addChild(*SoProtoInstance33);

SoNode15->addChild(*SoGroup18);

SoSceneManager0->setSceneGraph(*SoNode15);

return 0;
}

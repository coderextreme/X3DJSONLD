
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
Someta3->setContent(QString("HAnimModelsHandsFeet.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("Left and right hands and feet, using high-fidelity definitions for HAnim version 2.0"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("Kwan Hee YOO and Don Brutzman"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("created"));
Someta6->setContent(QString("8 February 2015"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("modified"));
Someta7->setContent(QString("Mon, 15 Sep 2025 05:20:09 GMT"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("warning"));
Someta8->setContent(QString("not yet to scale"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("warning"));
Someta9->setContent(QString("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("TODO"));
Someta10->setContent(QString("how to have HAnimHumanoid root with Inline IMPORT/EXPORT of limbs?"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("Image"));
Someta11->setContent(QString("HAnimModelsHandsFeet.png"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("Image"));
Someta12->setContent(QString("HAnimModelsHandsFeetWithFour1mGrids.png"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("reference"));
Someta13->setContent(QString("https://www.web3d.org/working-groups/humanoid-animation-HAnim"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("reference"));
Someta14->setContent(QString("https://www.web3d.org/documents/specifications/19774/V2.0"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("reference"));
Someta15->setContent(QString("https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/components/hanim.html"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("subject"));
Someta16->setContent(QString("X3D HAnim humanoid animation"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("identifier"));
Someta17->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelsHandsFeet.x3d"));
Sohead1->addMeta(*Someta17);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode18 = new SoNode();
SoWorldInfo* SoWorldInfo19 = new SoWorldInfo();
SoWorldInfo19->setTitle(QString("HAnimModelsHandsFeet.x3d"));
SoNode18->addChild(*SoWorldInfo19);

SoViewpoint* SoViewpoint20 = new SoViewpoint();
SoViewpoint20->setDescription(QString("Hands and feet 10m"));
SoNode18->addChild(*SoViewpoint20);

SoViewpoint* SoViewpoint21 = new SoViewpoint();
SoViewpoint21->setDescription(QString("Hands and feet 1.7m"));
SoViewpoint21->setPosition(new float[]{0.0,0.0,1.7});
SoNode18->addChild(*SoViewpoint21);

SoTransform* SoTransform22 = new SoTransform();
SoTransform22->setTranslation(new float[]{-1.0,1.0,0.0});
SoInline* SoInline23 = new SoInline();
SoInline23->setUrl(new QString[]{QString("HAnimModelHandLeft.x3d"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d"), QString("HAnimModelHandLeft.wrl"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.wrl")}, 4);
SoTransform22->addChild(*SoInline23);

SoTransform* SoTransform24 = new SoTransform();
SoTransform24->setDEF(QString("GridXY_20x20Fixed_AdjustScale"));
SoTransform24->setScale(new float[]{0.1,0.1,0.1});
SoInline* SoInline25 = new SoInline();
SoInline25->setDEF(QString("GridXY_20x20Fixed"));
SoInline25->setUrl(new QString[]{QString("../../Savage/Tools/Authoring/GridXY_20x20Fixed.x3d"), QString("https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d"), QString("../../Savage/Tools/Authoring/GridXY_20x20Fixed.wrl"), QString("https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl")}, 4);
SoTransform24->addChild(*SoInline25);

SoTransform22->addChild(*SoTransform24);

SoNode18->addChild(*SoTransform22);

SoTransform* SoTransform26 = new SoTransform();
SoTransform26->setTranslation(new float[]{1.0,1.0,0.0});
SoInline* SoInline27 = new SoInline();
SoInline27->setUrl(new QString[]{QString("HAnimModelHandRight.x3d"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d"), QString("HAnimModelHandRight.wrl"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.wrl")}, 4);
SoTransform26->addChild(*SoInline27);

SoTransform* SoTransform28 = new SoTransform();
SoTransform28->setUSE(QString("GridXY_20x20Fixed_AdjustScale"));
SoTransform26->addChild(*SoTransform28);

SoNode18->addChild(*SoTransform26);

SoTransform* SoTransform29 = new SoTransform();
SoTransform29->setTranslation(new float[]{-1.0,-1.0,0.0});
SoInline* SoInline30 = new SoInline();
SoInline30->setUrl(new QString[]{QString("HAnimModelFootLeft.x3d"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d"), QString("HAnimModelFootLeft.wrl"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.wrl")}, 4);
SoTransform29->addChild(*SoInline30);

SoTransform* SoTransform31 = new SoTransform();
SoTransform31->setUSE(QString("GridXY_20x20Fixed_AdjustScale"));
SoTransform29->addChild(*SoTransform31);

SoNode18->addChild(*SoTransform29);

SoTransform* SoTransform32 = new SoTransform();
SoTransform32->setTranslation(new float[]{1.0,-1.0,0.0});
SoInline* SoInline33 = new SoInline();
SoInline33->setUrl(new QString[]{QString("HAnimModelFootRight.x3d"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d"), QString("HAnimModelFootRight.wrl"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.wrl")}, 4);
SoTransform32->addChild(*SoInline33);

SoTransform* SoTransform34 = new SoTransform();
SoTransform34->setUSE(QString("GridXY_20x20Fixed_AdjustScale"));
SoTransform32->addChild(*SoTransform34);

SoNode18->addChild(*SoTransform32);

SoSceneManager0->setSceneGraph(*SoNode18);

return 0;
}

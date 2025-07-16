
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
Someta2->setContent(QString("ArtDecoExamples.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("David Roussel"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("translator"));
Someta5->setContent(QString("James Harney, Don Brutzman NPS"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("created"));
Someta6->setContent(QString("7 April 2002"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("modified"));
Someta7->setContent(QString("19 January 2025"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("reference"));
Someta8->setContent(QString("http://vrmlstuff.free.fr/materials"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("subject"));
Someta9->setContent(QString("Universal Media Material Library"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("identifier"));
Someta10->setContent(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("generator"));
Someta11->setContent(QString("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("license"));
Someta12->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta12);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode13 = new SoNode();
SoWorldInfo* SoWorldInfo14 = new SoWorldInfo();
SoWorldInfo14->setTitle(QString("ArtDecoExamples.x3d"));
SoNode13->addChild(*SoWorldInfo14);

SoExternProtoDeclare* SoExternProtoDeclare15 = new SoExternProtoDeclare();
SoExternProtoDeclare15->setName(QString("ArtDeco00"));
SoExternProtoDeclare15->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare15->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare15->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco00"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco00"), QString("ArtDecoPrototypes.wrl#ArtDeco00"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco00")}, 4);
SoNode13->addChild(*SoExternProtoDeclare15);

SoExternProtoDeclare* SoExternProtoDeclare16 = new SoExternProtoDeclare();
SoExternProtoDeclare16->setName(QString("ArtDeco01"));
SoExternProtoDeclare16->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare16->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare16->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco01"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco01"), QString("ArtDecoPrototypes.wrl#ArtDeco01"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco01")}, 4);
SoNode13->addChild(*SoExternProtoDeclare16);

SoExternProtoDeclare* SoExternProtoDeclare17 = new SoExternProtoDeclare();
SoExternProtoDeclare17->setName(QString("ArtDeco02"));
SoExternProtoDeclare17->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare17->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare17->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco02"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02"), QString("ArtDecoPrototypes.wrl#ArtDeco02"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02")}, 4);
SoNode13->addChild(*SoExternProtoDeclare17);

SoExternProtoDeclare* SoExternProtoDeclare18 = new SoExternProtoDeclare();
SoExternProtoDeclare18->setName(QString("ArtDeco03"));
SoExternProtoDeclare18->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare18->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare18->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco03"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco03"), QString("ArtDecoPrototypes.wrl#ArtDeco03"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco03")}, 4);
SoNode13->addChild(*SoExternProtoDeclare18);

SoExternProtoDeclare* SoExternProtoDeclare19 = new SoExternProtoDeclare();
SoExternProtoDeclare19->setName(QString("ArtDeco04"));
SoExternProtoDeclare19->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare19->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare19->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco04"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04"), QString("ArtDecoPrototypes.wrl#ArtDeco04"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04")}, 4);
SoNode13->addChild(*SoExternProtoDeclare19);

SoExternProtoDeclare* SoExternProtoDeclare20 = new SoExternProtoDeclare();
SoExternProtoDeclare20->setName(QString("ArtDeco05"));
SoExternProtoDeclare20->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare20->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare20->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco05"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05"), QString("ArtDecoPrototypes.wrl#ArtDeco05"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05")}, 4);
SoNode13->addChild(*SoExternProtoDeclare20);

SoExternProtoDeclare* SoExternProtoDeclare21 = new SoExternProtoDeclare();
SoExternProtoDeclare21->setName(QString("ArtDeco06"));
SoExternProtoDeclare21->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare21->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare21->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco06"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco06"), QString("ArtDecoPrototypes.wrl#ArtDeco06"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco06")}, 4);
SoNode13->addChild(*SoExternProtoDeclare21);

SoExternProtoDeclare* SoExternProtoDeclare22 = new SoExternProtoDeclare();
SoExternProtoDeclare22->setName(QString("ArtDeco07"));
SoExternProtoDeclare22->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare22->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare22->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco07"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco07"), QString("ArtDecoPrototypes.wrl#ArtDeco07"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco07")}, 4);
SoNode13->addChild(*SoExternProtoDeclare22);

SoExternProtoDeclare* SoExternProtoDeclare23 = new SoExternProtoDeclare();
SoExternProtoDeclare23->setName(QString("ArtDeco08"));
SoExternProtoDeclare23->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare23->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare23->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco08"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08"), QString("ArtDecoPrototypes.wrl#ArtDeco08"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08")}, 4);
SoNode13->addChild(*SoExternProtoDeclare23);

SoExternProtoDeclare* SoExternProtoDeclare24 = new SoExternProtoDeclare();
SoExternProtoDeclare24->setName(QString("ArtDeco09"));
SoExternProtoDeclare24->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare24->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare24->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco09"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09"), QString("ArtDecoPrototypes.wrl#ArtDeco09"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09")}, 4);
SoNode13->addChild(*SoExternProtoDeclare24);

SoExternProtoDeclare* SoExternProtoDeclare25 = new SoExternProtoDeclare();
SoExternProtoDeclare25->setName(QString("ArtDeco10"));
SoExternProtoDeclare25->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare25->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare25->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco10"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco10"), QString("ArtDecoPrototypes.wrl#ArtDeco10"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco10")}, 4);
SoNode13->addChild(*SoExternProtoDeclare25);

SoExternProtoDeclare* SoExternProtoDeclare26 = new SoExternProtoDeclare();
SoExternProtoDeclare26->setName(QString("ArtDeco11"));
SoExternProtoDeclare26->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare26->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare26->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco11"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco11"), QString("ArtDecoPrototypes.wrl#ArtDeco11"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco11")}, 4);
SoNode13->addChild(*SoExternProtoDeclare26);

SoExternProtoDeclare* SoExternProtoDeclare27 = new SoExternProtoDeclare();
SoExternProtoDeclare27->setName(QString("ArtDeco12"));
SoExternProtoDeclare27->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare27->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare27->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco12"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco12"), QString("ArtDecoPrototypes.wrl#ArtDeco12"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco12")}, 4);
SoNode13->addChild(*SoExternProtoDeclare27);

SoExternProtoDeclare* SoExternProtoDeclare28 = new SoExternProtoDeclare();
SoExternProtoDeclare28->setName(QString("ArtDeco13"));
SoExternProtoDeclare28->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare28->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare28->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco13"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13"), QString("ArtDecoPrototypes.wrl#ArtDeco13"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13")}, 4);
SoNode13->addChild(*SoExternProtoDeclare28);

SoExternProtoDeclare* SoExternProtoDeclare29 = new SoExternProtoDeclare();
SoExternProtoDeclare29->setName(QString("ArtDeco14"));
SoExternProtoDeclare29->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare29->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare29->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco14"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco14"), QString("ArtDecoPrototypes.wrl#ArtDeco14"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco14")}, 4);
SoNode13->addChild(*SoExternProtoDeclare29);

SoExternProtoDeclare* SoExternProtoDeclare30 = new SoExternProtoDeclare();
SoExternProtoDeclare30->setName(QString("ArtDeco15"));
SoExternProtoDeclare30->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare30->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare30->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco15"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco15"), QString("ArtDecoPrototypes.wrl#ArtDeco15"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco15")}, 4);
SoNode13->addChild(*SoExternProtoDeclare30);

SoExternProtoDeclare* SoExternProtoDeclare31 = new SoExternProtoDeclare();
SoExternProtoDeclare31->setName(QString("ArtDeco16"));
SoExternProtoDeclare31->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare31->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare31->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco16"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco16"), QString("ArtDecoPrototypes.wrl#ArtDeco16"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco16")}, 4);
SoNode13->addChild(*SoExternProtoDeclare31);

SoExternProtoDeclare* SoExternProtoDeclare32 = new SoExternProtoDeclare();
SoExternProtoDeclare32->setName(QString("ArtDeco17"));
SoExternProtoDeclare32->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare32->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare32->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco17"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco17"), QString("ArtDecoPrototypes.wrl#ArtDeco17"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco17")}, 4);
SoNode13->addChild(*SoExternProtoDeclare32);

SoExternProtoDeclare* SoExternProtoDeclare33 = new SoExternProtoDeclare();
SoExternProtoDeclare33->setName(QString("ArtDeco18"));
SoExternProtoDeclare33->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare33->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare33->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco18"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18"), QString("ArtDecoPrototypes.wrl#ArtDeco18"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18")}, 4);
SoNode13->addChild(*SoExternProtoDeclare33);

SoExternProtoDeclare* SoExternProtoDeclare34 = new SoExternProtoDeclare();
SoExternProtoDeclare34->setName(QString("ArtDeco19"));
SoExternProtoDeclare34->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare34->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare34->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco19"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco19"), QString("ArtDecoPrototypes.wrl#ArtDeco19"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco19")}, 4);
SoNode13->addChild(*SoExternProtoDeclare34);

SoExternProtoDeclare* SoExternProtoDeclare35 = new SoExternProtoDeclare();
SoExternProtoDeclare35->setName(QString("ArtDeco20"));
SoExternProtoDeclare35->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare35->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare35->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco20"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco20"), QString("ArtDecoPrototypes.wrl#ArtDeco20"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco20")}, 4);
SoNode13->addChild(*SoExternProtoDeclare35);

SoExternProtoDeclare* SoExternProtoDeclare36 = new SoExternProtoDeclare();
SoExternProtoDeclare36->setName(QString("ArtDeco21"));
SoExternProtoDeclare36->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare36->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare36->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco21"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21"), QString("ArtDecoPrototypes.wrl#ArtDeco21"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21")}, 4);
SoNode13->addChild(*SoExternProtoDeclare36);

SoExternProtoDeclare* SoExternProtoDeclare37 = new SoExternProtoDeclare();
SoExternProtoDeclare37->setName(QString("ArtDeco22"));
SoExternProtoDeclare37->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare37->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare37->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco22"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco22"), QString("ArtDecoPrototypes.wrl#ArtDeco22"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco22")}, 4);
SoNode13->addChild(*SoExternProtoDeclare37);

SoExternProtoDeclare* SoExternProtoDeclare38 = new SoExternProtoDeclare();
SoExternProtoDeclare38->setName(QString("ArtDeco23"));
SoExternProtoDeclare38->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare38->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare38->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco23"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco23"), QString("ArtDecoPrototypes.wrl#ArtDeco23"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco23")}, 4);
SoNode13->addChild(*SoExternProtoDeclare38);

SoExternProtoDeclare* SoExternProtoDeclare39 = new SoExternProtoDeclare();
SoExternProtoDeclare39->setName(QString("ArtDeco24"));
SoExternProtoDeclare39->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare39->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare39->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco24"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24"), QString("ArtDecoPrototypes.wrl#ArtDeco24"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24")}, 4);
SoNode13->addChild(*SoExternProtoDeclare39);

SoExternProtoDeclare* SoExternProtoDeclare40 = new SoExternProtoDeclare();
SoExternProtoDeclare40->setName(QString("ArtDeco25"));
SoExternProtoDeclare40->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare40->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare40->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco25"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25"), QString("ArtDecoPrototypes.wrl#ArtDeco25"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25")}, 4);
SoNode13->addChild(*SoExternProtoDeclare40);

SoExternProtoDeclare* SoExternProtoDeclare41 = new SoExternProtoDeclare();
SoExternProtoDeclare41->setName(QString("ArtDeco26"));
SoExternProtoDeclare41->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare41->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare41->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco26"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco26"), QString("ArtDecoPrototypes.wrl#ArtDeco26"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco26")}, 4);
SoNode13->addChild(*SoExternProtoDeclare41);

SoExternProtoDeclare* SoExternProtoDeclare42 = new SoExternProtoDeclare();
SoExternProtoDeclare42->setName(QString("ArtDeco27"));
SoExternProtoDeclare42->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare42->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare42->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco27"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco27"), QString("ArtDecoPrototypes.wrl#ArtDeco27"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco27")}, 4);
SoNode13->addChild(*SoExternProtoDeclare42);

SoExternProtoDeclare* SoExternProtoDeclare43 = new SoExternProtoDeclare();
SoExternProtoDeclare43->setName(QString("ArtDeco28"));
SoExternProtoDeclare43->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare43->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare43->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco28"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco28"), QString("ArtDecoPrototypes.wrl#ArtDeco28"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco28")}, 4);
SoNode13->addChild(*SoExternProtoDeclare43);

SoExternProtoDeclare* SoExternProtoDeclare44 = new SoExternProtoDeclare();
SoExternProtoDeclare44->setName(QString("ArtDeco29"));
SoExternProtoDeclare44->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare44->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare44->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco29"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco29"), QString("ArtDecoPrototypes.wrl#ArtDeco29"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco29")}, 4);
SoNode13->addChild(*SoExternProtoDeclare44);

SoExternProtoDeclare* SoExternProtoDeclare45 = new SoExternProtoDeclare();
SoExternProtoDeclare45->setName(QString("ArtDeco30"));
SoExternProtoDeclare45->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare45->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare45->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco30"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco30"), QString("ArtDecoPrototypes.wrl#ArtDeco30"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco30")}, 4);
SoNode13->addChild(*SoExternProtoDeclare45);

SoExternProtoDeclare* SoExternProtoDeclare46 = new SoExternProtoDeclare();
SoExternProtoDeclare46->setName(QString("ArtDeco31"));
SoExternProtoDeclare46->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare46->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare46->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco31"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco31"), QString("ArtDecoPrototypes.wrl#ArtDeco31"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco31")}, 4);
SoNode13->addChild(*SoExternProtoDeclare46);

SoExternProtoDeclare* SoExternProtoDeclare47 = new SoExternProtoDeclare();
SoExternProtoDeclare47->setName(QString("ArtDeco32"));
SoExternProtoDeclare47->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare47->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare47->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco32"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco32"), QString("ArtDecoPrototypes.wrl#ArtDeco32"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco32")}, 4);
SoNode13->addChild(*SoExternProtoDeclare47);

SoExternProtoDeclare* SoExternProtoDeclare48 = new SoExternProtoDeclare();
SoExternProtoDeclare48->setName(QString("ArtDeco33"));
SoExternProtoDeclare48->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare48->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare48->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco33"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco33"), QString("ArtDecoPrototypes.wrl#ArtDeco33"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco33")}, 4);
SoNode13->addChild(*SoExternProtoDeclare48);

SoExternProtoDeclare* SoExternProtoDeclare49 = new SoExternProtoDeclare();
SoExternProtoDeclare49->setName(QString("ArtDeco34"));
SoExternProtoDeclare49->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoExternProtoDeclare49->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoExternProtoDeclare49->setUrl(new QString[]{QString("ArtDecoPrototypes.x3d#ArtDeco34"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco34"), QString("ArtDecoPrototypes.wrl#ArtDeco34"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco34")}, 4);
SoNode13->addChild(*SoExternProtoDeclare49);

SoGroup* SoGroup50 = new SoGroup();
SoNavigationInfo* SoNavigationInfo51 = new SoNavigationInfo();
SoNavigationInfo51->setHeadlight(false);
SoGroup50->addChild(*SoNavigationInfo51);

SoViewpoint* SoViewpoint52 = new SoViewpoint();
SoViewpoint52->setDEF(QString("Front"));
SoViewpoint52->setDescription(QString("Front view"));
SoViewpoint52->setPosition(new float[]{0.0,0.0,12.0});
SoGroup50->addChild(*SoViewpoint52);

SoViewpoint* SoViewpoint53 = new SoViewpoint();
SoViewpoint53->setDEF(QString("PersRight"));
SoViewpoint53->setDescription(QString("Low Right"));
SoViewpoint53->setOrientation(new float[]{0.74291,0.30772,0.59447,1.2171});
SoViewpoint53->setPosition(new float[]{6.9282,-6.9282,6.9282});
SoGroup50->addChild(*SoViewpoint53);

SoViewpoint* SoViewpoint54 = new SoViewpoint();
SoViewpoint54->setDEF(QString("PersLeft"));
SoViewpoint54->setDescription(QString("Low Left"));
SoViewpoint54->setOrientation(new float[]{0.74291,-0.30772,-0.59447,1.2171});
SoViewpoint54->setPosition(new float[]{-6.9282,-6.9282,6.9282});
SoGroup50->addChild(*SoViewpoint54);

SoViewpoint* SoViewpoint55 = new SoViewpoint();
SoViewpoint55->setDEF(QString("Back"));
SoViewpoint55->setDescription(QString("Back view"));
SoViewpoint55->setOrientation(new float[]{0.0,1.0,0.0,3.1416});
SoViewpoint55->setPosition(new float[]{0.0,0.0,-12.0});
SoGroup50->addChild(*SoViewpoint55);

SoTransform* SoTransform56 = new SoTransform();
SoTransform56->setDEF(QString("Close_travel"));
SoPositionInterpolator* SoPositionInterpolator57 = new SoPositionInterpolator();
SoPositionInterpolator57->setDEF(QString("Close_Mover"));
SoPositionInterpolator57->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoPositionInterpolator57->setKeyValue(new float[]{0.0,2.5,0.0,0.0,0.0,0.0,0.0,-2.5,0.0,0.0,0.0,0.0,0.0,2.5,0.0}, 15);
SoTransform56->addChild(*SoPositionInterpolator57);

SoTimeSensor* SoTimeSensor58 = new SoTimeSensor();
SoTimeSensor58->setDEF(QString("Close_Time"));
SoTimeSensor58->setCycleInterval(12);
SoTimeSensor58->setLoop(true);
SoTransform56->addChild(*SoTimeSensor58);

SoViewpoint* SoViewpoint59 = new SoViewpoint();
SoViewpoint59->setDEF(QString("Close"));
SoViewpoint59->setDescription(QString("Close Front"));
SoViewpoint59->setPosition(new float[]{0.0,0.0,6.0});
SoTransform56->addChild(*SoViewpoint59);

SoGroup50->addChild(*SoTransform56);

SoDirectionalLight* SoDirectionalLight60 = new SoDirectionalLight();
SoDirectionalLight60->setDirection(new float[]{1.0,-1.0,-1.0});
SoGroup50->addChild(*SoDirectionalLight60);

SoDirectionalLight* SoDirectionalLight61 = new SoDirectionalLight();
SoDirectionalLight61->setDirection(new float[]{0.0,1.0,-0.5});
SoDirectionalLight61->setIntensity(0.5);
SoGroup50->addChild(*SoDirectionalLight61);

SoAnchor* SoAnchor62 = new SoAnchor();
SoAnchor62->setDescription(QString("Return to front view"));
SoAnchor62->setUrl(new QString[]{QString("#Front")}, 1);
SoTransform* SoTransform63 = new SoTransform();
SoTransform63->setTranslation(new float[]{0.0,0.0,-0.5});
SoInline* SoInline64 = new SoInline();
SoInline64->setUrl(new QString[]{QString("gridBack.x3d"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d"), QString("gridBack.wrl"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl")}, 4);
SoTransform63->addChild(*SoInline64);

SoAnchor62->addChild(*SoTransform63);

SoGroup50->addChild(*SoAnchor62);

SoViewpoint* SoViewpoint65 = new SoViewpoint();
SoViewpoint65->setDEF(QString("View00"));
SoViewpoint65->setDescription(QString("ArtDeco00"));
SoViewpoint65->setPosition(new float[]{-3.75,3.75,3.0});
SoGroup50->addChild(*SoViewpoint65);

SoTransform* SoTransform66 = new SoTransform();
SoTransform66->setTranslation(new float[]{-3.75,3.75,0.0});
SoAnchor* SoAnchor67 = new SoAnchor();
SoAnchor67->setDescription(QString("ArtDeco00 view"));
SoAnchor67->setUrl(new QString[]{QString("#View00")}, 1);
SoShape* SoShape68 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance69 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance70 = new SoProtoInstance();
SoProtoInstance70->setName(QString("ArtDeco00"));
SoVRMLAppearance69->addChild(*SoProtoInstance70);

SoShape68->addChild(*SoVRMLAppearance69);

SoSphere* SoSphere71 = new SoSphere();
SoSphere71->setDEF(QString("Ball"));
SoSphere71->setRadius(0.5);
SoShape68->setGeometry(*SoSphere71);

SoAnchor67->addChild(*SoShape68);

SoTransform66->addChild(*SoAnchor67);

SoTransform* SoTransform72 = new SoTransform();
SoTransform72->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor73 = new SoAnchor();
SoAnchor73->setDescription(QString("ArtDeco00 view source documentation"));
SoAnchor73->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor73->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00")}, 2);
SoShape* SoShape74 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance75 = new SoVRMLAppearance();
SoMaterial* SoMaterial76 = new SoMaterial();
SoMaterial76->setDEF(QString("TextMat"));
SoMaterial76->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance75->addChild(*SoMaterial76);

SoShape74->addChild(*SoVRMLAppearance75);

SoText* SoText77 = new SoText();
SoText77->setString(new QString[]{QString("ArtDeco00")}, 1);
SoFontStyle* SoFontStyle78 = new SoFontStyle();
SoFontStyle78->setDEF(QString("Style"));
SoFontStyle78->setFamily(new QString[]{QString("SANS")}, 1);
SoFontStyle78->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoFontStyle78->setSize(0.3);
SoFontStyle78->setStyle(QString("BOLD"));
SoText77->setFontStyle(*SoFontStyle78);

SoShape74->setGeometry(*SoText77);

SoAnchor73->addChild(*SoShape74);

SoTransform72->addChild(*SoAnchor73);

SoTransform66->addChild(*SoTransform72);

SoGroup50->addChild(*SoTransform66);

SoViewpoint* SoViewpoint79 = new SoViewpoint();
SoViewpoint79->setDEF(QString("View01"));
SoViewpoint79->setDescription(QString("ArtDeco01"));
SoViewpoint79->setPosition(new float[]{-2.25,3.75,3.0});
SoGroup50->addChild(*SoViewpoint79);

SoTransform* SoTransform80 = new SoTransform();
SoTransform80->setTranslation(new float[]{-2.25,3.75,0.0});
SoAnchor* SoAnchor81 = new SoAnchor();
SoAnchor81->setDescription(QString("ArtDeco01 view"));
SoAnchor81->setUrl(new QString[]{QString("#View01")}, 1);
SoShape* SoShape82 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance83 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance84 = new SoProtoInstance();
SoProtoInstance84->setName(QString("ArtDeco01"));
SoVRMLAppearance83->addChild(*SoProtoInstance84);

SoShape82->addChild(*SoVRMLAppearance83);

SoSphere* SoSphere85 = new SoSphere();
SoSphere85->setUSE(QString("Ball"));
SoShape82->setGeometry(*SoSphere85);

SoAnchor81->addChild(*SoShape82);

SoTransform80->addChild(*SoAnchor81);

SoTransform* SoTransform86 = new SoTransform();
SoTransform86->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor87 = new SoAnchor();
SoAnchor87->setDescription(QString("ArtDeco01 view source documentation"));
SoAnchor87->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor87->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01")}, 2);
SoShape* SoShape88 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance89 = new SoVRMLAppearance();
SoMaterial* SoMaterial90 = new SoMaterial();
SoMaterial90->setUSE(QString("TextMat"));
SoVRMLAppearance89->addChild(*SoMaterial90);

SoShape88->addChild(*SoVRMLAppearance89);

SoText* SoText91 = new SoText();
SoText91->setString(new QString[]{QString("ArtDeco01")}, 1);
SoFontStyle* SoFontStyle92 = new SoFontStyle();
SoFontStyle92->setUSE(QString("Style"));
SoText91->setFontStyle(*SoFontStyle92);

SoShape88->setGeometry(*SoText91);

SoAnchor87->addChild(*SoShape88);

SoTransform86->addChild(*SoAnchor87);

SoTransform80->addChild(*SoTransform86);

SoGroup50->addChild(*SoTransform80);

SoViewpoint* SoViewpoint93 = new SoViewpoint();
SoViewpoint93->setDEF(QString("View02"));
SoViewpoint93->setDescription(QString("ArtDeco02"));
SoViewpoint93->setPosition(new float[]{-0.75,3.75,3.0});
SoGroup50->addChild(*SoViewpoint93);

SoTransform* SoTransform94 = new SoTransform();
SoTransform94->setTranslation(new float[]{-0.75,3.75,0.0});
SoAnchor* SoAnchor95 = new SoAnchor();
SoAnchor95->setDescription(QString("ArtDeco02 view"));
SoAnchor95->setUrl(new QString[]{QString("#View02")}, 1);
SoShape* SoShape96 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance97 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance98 = new SoProtoInstance();
SoProtoInstance98->setName(QString("ArtDeco02"));
SoVRMLAppearance97->addChild(*SoProtoInstance98);

SoShape96->addChild(*SoVRMLAppearance97);

SoSphere* SoSphere99 = new SoSphere();
SoSphere99->setUSE(QString("Ball"));
SoShape96->setGeometry(*SoSphere99);

SoAnchor95->addChild(*SoShape96);

SoTransform94->addChild(*SoAnchor95);

SoTransform* SoTransform100 = new SoTransform();
SoTransform100->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor101 = new SoAnchor();
SoAnchor101->setDescription(QString("ArtDeco02 view source documentation"));
SoAnchor101->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor101->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02")}, 2);
SoShape* SoShape102 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance103 = new SoVRMLAppearance();
SoMaterial* SoMaterial104 = new SoMaterial();
SoMaterial104->setUSE(QString("TextMat"));
SoVRMLAppearance103->addChild(*SoMaterial104);

SoShape102->addChild(*SoVRMLAppearance103);

SoText* SoText105 = new SoText();
SoText105->setString(new QString[]{QString("ArtDeco02")}, 1);
SoFontStyle* SoFontStyle106 = new SoFontStyle();
SoFontStyle106->setUSE(QString("Style"));
SoText105->setFontStyle(*SoFontStyle106);

SoShape102->setGeometry(*SoText105);

SoAnchor101->addChild(*SoShape102);

SoTransform100->addChild(*SoAnchor101);

SoTransform94->addChild(*SoTransform100);

SoGroup50->addChild(*SoTransform94);

SoViewpoint* SoViewpoint107 = new SoViewpoint();
SoViewpoint107->setDEF(QString("View03"));
SoViewpoint107->setDescription(QString("ArtDeco03"));
SoViewpoint107->setPosition(new float[]{0.75,3.75,3.0});
SoGroup50->addChild(*SoViewpoint107);

SoTransform* SoTransform108 = new SoTransform();
SoTransform108->setTranslation(new float[]{0.75,3.75,0.0});
SoAnchor* SoAnchor109 = new SoAnchor();
SoAnchor109->setDescription(QString("ArtDeco03 view"));
SoAnchor109->setUrl(new QString[]{QString("#View03")}, 1);
SoShape* SoShape110 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance111 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance112 = new SoProtoInstance();
SoProtoInstance112->setName(QString("ArtDeco03"));
SoVRMLAppearance111->addChild(*SoProtoInstance112);

SoShape110->addChild(*SoVRMLAppearance111);

SoSphere* SoSphere113 = new SoSphere();
SoSphere113->setUSE(QString("Ball"));
SoShape110->setGeometry(*SoSphere113);

SoAnchor109->addChild(*SoShape110);

SoTransform108->addChild(*SoAnchor109);

SoTransform* SoTransform114 = new SoTransform();
SoTransform114->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor115 = new SoAnchor();
SoAnchor115->setDescription(QString("ArtDeco03 view source documentation"));
SoAnchor115->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor115->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03")}, 2);
SoShape* SoShape116 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance117 = new SoVRMLAppearance();
SoMaterial* SoMaterial118 = new SoMaterial();
SoMaterial118->setUSE(QString("TextMat"));
SoVRMLAppearance117->addChild(*SoMaterial118);

SoShape116->addChild(*SoVRMLAppearance117);

SoText* SoText119 = new SoText();
SoText119->setString(new QString[]{QString("ArtDeco03")}, 1);
SoFontStyle* SoFontStyle120 = new SoFontStyle();
SoFontStyle120->setUSE(QString("Style"));
SoText119->setFontStyle(*SoFontStyle120);

SoShape116->setGeometry(*SoText119);

SoAnchor115->addChild(*SoShape116);

SoTransform114->addChild(*SoAnchor115);

SoTransform108->addChild(*SoTransform114);

SoGroup50->addChild(*SoTransform108);

SoViewpoint* SoViewpoint121 = new SoViewpoint();
SoViewpoint121->setDEF(QString("View04"));
SoViewpoint121->setDescription(QString("ArtDeco04"));
SoViewpoint121->setPosition(new float[]{2.25,3.75,3.0});
SoGroup50->addChild(*SoViewpoint121);

SoTransform* SoTransform122 = new SoTransform();
SoTransform122->setTranslation(new float[]{2.25,3.75,0.0});
SoAnchor* SoAnchor123 = new SoAnchor();
SoAnchor123->setDescription(QString("ArtDeco04 view"));
SoAnchor123->setUrl(new QString[]{QString("#View04")}, 1);
SoShape* SoShape124 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance125 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance126 = new SoProtoInstance();
SoProtoInstance126->setName(QString("ArtDeco04"));
SoVRMLAppearance125->addChild(*SoProtoInstance126);

SoShape124->addChild(*SoVRMLAppearance125);

SoSphere* SoSphere127 = new SoSphere();
SoSphere127->setUSE(QString("Ball"));
SoShape124->setGeometry(*SoSphere127);

SoAnchor123->addChild(*SoShape124);

SoTransform122->addChild(*SoAnchor123);

SoTransform* SoTransform128 = new SoTransform();
SoTransform128->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor129 = new SoAnchor();
SoAnchor129->setDescription(QString("ArtDeco04 view source documentation"));
SoAnchor129->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor129->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04")}, 2);
SoShape* SoShape130 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance131 = new SoVRMLAppearance();
SoMaterial* SoMaterial132 = new SoMaterial();
SoMaterial132->setUSE(QString("TextMat"));
SoVRMLAppearance131->addChild(*SoMaterial132);

SoShape130->addChild(*SoVRMLAppearance131);

SoText* SoText133 = new SoText();
SoText133->setString(new QString[]{QString("ArtDeco04")}, 1);
SoFontStyle* SoFontStyle134 = new SoFontStyle();
SoFontStyle134->setUSE(QString("Style"));
SoText133->setFontStyle(*SoFontStyle134);

SoShape130->setGeometry(*SoText133);

SoAnchor129->addChild(*SoShape130);

SoTransform128->addChild(*SoAnchor129);

SoTransform122->addChild(*SoTransform128);

SoGroup50->addChild(*SoTransform122);

SoViewpoint* SoViewpoint135 = new SoViewpoint();
SoViewpoint135->setDEF(QString("View05"));
SoViewpoint135->setDescription(QString("ArtDeco05"));
SoViewpoint135->setPosition(new float[]{3.75,3.75,3.0});
SoGroup50->addChild(*SoViewpoint135);

SoTransform* SoTransform136 = new SoTransform();
SoTransform136->setTranslation(new float[]{3.75,3.75,0.0});
SoAnchor* SoAnchor137 = new SoAnchor();
SoAnchor137->setDescription(QString("ArtDeco05 view"));
SoAnchor137->setUrl(new QString[]{QString("#View05")}, 1);
SoShape* SoShape138 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance139 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance140 = new SoProtoInstance();
SoProtoInstance140->setName(QString("ArtDeco05"));
SoVRMLAppearance139->addChild(*SoProtoInstance140);

SoShape138->addChild(*SoVRMLAppearance139);

SoSphere* SoSphere141 = new SoSphere();
SoSphere141->setUSE(QString("Ball"));
SoShape138->setGeometry(*SoSphere141);

SoAnchor137->addChild(*SoShape138);

SoTransform136->addChild(*SoAnchor137);

SoTransform* SoTransform142 = new SoTransform();
SoTransform142->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor143 = new SoAnchor();
SoAnchor143->setDescription(QString("ArtDeco05 view source documentation"));
SoAnchor143->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor143->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05")}, 2);
SoShape* SoShape144 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance145 = new SoVRMLAppearance();
SoMaterial* SoMaterial146 = new SoMaterial();
SoMaterial146->setUSE(QString("TextMat"));
SoVRMLAppearance145->addChild(*SoMaterial146);

SoShape144->addChild(*SoVRMLAppearance145);

SoText* SoText147 = new SoText();
SoText147->setString(new QString[]{QString("ArtDeco05")}, 1);
SoFontStyle* SoFontStyle148 = new SoFontStyle();
SoFontStyle148->setUSE(QString("Style"));
SoText147->setFontStyle(*SoFontStyle148);

SoShape144->setGeometry(*SoText147);

SoAnchor143->addChild(*SoShape144);

SoTransform142->addChild(*SoAnchor143);

SoTransform136->addChild(*SoTransform142);

SoGroup50->addChild(*SoTransform136);

SoViewpoint* SoViewpoint149 = new SoViewpoint();
SoViewpoint149->setDEF(QString("View06"));
SoViewpoint149->setDescription(QString("ArtDeco06"));
SoViewpoint149->setPosition(new float[]{-3.75,2.25,3.0});
SoGroup50->addChild(*SoViewpoint149);

SoTransform* SoTransform150 = new SoTransform();
SoTransform150->setTranslation(new float[]{-3.75,2.25,0.0});
SoAnchor* SoAnchor151 = new SoAnchor();
SoAnchor151->setDescription(QString("ArtDeco06 view"));
SoAnchor151->setUrl(new QString[]{QString("#View06")}, 1);
SoShape* SoShape152 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance153 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance154 = new SoProtoInstance();
SoProtoInstance154->setName(QString("ArtDeco06"));
SoVRMLAppearance153->addChild(*SoProtoInstance154);

SoShape152->addChild(*SoVRMLAppearance153);

SoSphere* SoSphere155 = new SoSphere();
SoSphere155->setUSE(QString("Ball"));
SoShape152->setGeometry(*SoSphere155);

SoAnchor151->addChild(*SoShape152);

SoTransform150->addChild(*SoAnchor151);

SoTransform* SoTransform156 = new SoTransform();
SoTransform156->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor157 = new SoAnchor();
SoAnchor157->setDescription(QString("ArtDeco06 view source documentation"));
SoAnchor157->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor157->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06")}, 2);
SoShape* SoShape158 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance159 = new SoVRMLAppearance();
SoMaterial* SoMaterial160 = new SoMaterial();
SoMaterial160->setUSE(QString("TextMat"));
SoVRMLAppearance159->addChild(*SoMaterial160);

SoShape158->addChild(*SoVRMLAppearance159);

SoText* SoText161 = new SoText();
SoText161->setString(new QString[]{QString("ArtDeco06")}, 1);
SoFontStyle* SoFontStyle162 = new SoFontStyle();
SoFontStyle162->setUSE(QString("Style"));
SoText161->setFontStyle(*SoFontStyle162);

SoShape158->setGeometry(*SoText161);

SoAnchor157->addChild(*SoShape158);

SoTransform156->addChild(*SoAnchor157);

SoTransform150->addChild(*SoTransform156);

SoGroup50->addChild(*SoTransform150);

SoViewpoint* SoViewpoint163 = new SoViewpoint();
SoViewpoint163->setDEF(QString("View07"));
SoViewpoint163->setDescription(QString("ArtDeco07"));
SoViewpoint163->setPosition(new float[]{-2.25,2.25,3.0});
SoGroup50->addChild(*SoViewpoint163);

SoTransform* SoTransform164 = new SoTransform();
SoTransform164->setTranslation(new float[]{-2.25,2.25,0.0});
SoAnchor* SoAnchor165 = new SoAnchor();
SoAnchor165->setDescription(QString("ArtDeco07 view"));
SoAnchor165->setUrl(new QString[]{QString("#View07")}, 1);
SoShape* SoShape166 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance167 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance168 = new SoProtoInstance();
SoProtoInstance168->setName(QString("ArtDeco07"));
SoVRMLAppearance167->addChild(*SoProtoInstance168);

SoShape166->addChild(*SoVRMLAppearance167);

SoSphere* SoSphere169 = new SoSphere();
SoSphere169->setUSE(QString("Ball"));
SoShape166->setGeometry(*SoSphere169);

SoAnchor165->addChild(*SoShape166);

SoTransform164->addChild(*SoAnchor165);

SoTransform* SoTransform170 = new SoTransform();
SoTransform170->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor171 = new SoAnchor();
SoAnchor171->setDescription(QString("ArtDeco07 view source documentation"));
SoAnchor171->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor171->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07")}, 2);
SoShape* SoShape172 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance173 = new SoVRMLAppearance();
SoMaterial* SoMaterial174 = new SoMaterial();
SoMaterial174->setUSE(QString("TextMat"));
SoVRMLAppearance173->addChild(*SoMaterial174);

SoShape172->addChild(*SoVRMLAppearance173);

SoText* SoText175 = new SoText();
SoText175->setString(new QString[]{QString("ArtDeco07")}, 1);
SoFontStyle* SoFontStyle176 = new SoFontStyle();
SoFontStyle176->setUSE(QString("Style"));
SoText175->setFontStyle(*SoFontStyle176);

SoShape172->setGeometry(*SoText175);

SoAnchor171->addChild(*SoShape172);

SoTransform170->addChild(*SoAnchor171);

SoTransform164->addChild(*SoTransform170);

SoGroup50->addChild(*SoTransform164);

SoViewpoint* SoViewpoint177 = new SoViewpoint();
SoViewpoint177->setDEF(QString("View08"));
SoViewpoint177->setDescription(QString("ArtDeco08"));
SoViewpoint177->setPosition(new float[]{-0.75,2.25,3.0});
SoGroup50->addChild(*SoViewpoint177);

SoTransform* SoTransform178 = new SoTransform();
SoTransform178->setTranslation(new float[]{-0.75,2.25,0.0});
SoAnchor* SoAnchor179 = new SoAnchor();
SoAnchor179->setDescription(QString("ArtDeco08 view"));
SoAnchor179->setUrl(new QString[]{QString("#View08")}, 1);
SoShape* SoShape180 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance181 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance182 = new SoProtoInstance();
SoProtoInstance182->setName(QString("ArtDeco08"));
SoVRMLAppearance181->addChild(*SoProtoInstance182);

SoShape180->addChild(*SoVRMLAppearance181);

SoSphere* SoSphere183 = new SoSphere();
SoSphere183->setUSE(QString("Ball"));
SoShape180->setGeometry(*SoSphere183);

SoAnchor179->addChild(*SoShape180);

SoTransform178->addChild(*SoAnchor179);

SoTransform* SoTransform184 = new SoTransform();
SoTransform184->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor185 = new SoAnchor();
SoAnchor185->setDescription(QString("ArtDeco08 view source documentation"));
SoAnchor185->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor185->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08")}, 2);
SoShape* SoShape186 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance187 = new SoVRMLAppearance();
SoMaterial* SoMaterial188 = new SoMaterial();
SoMaterial188->setUSE(QString("TextMat"));
SoVRMLAppearance187->addChild(*SoMaterial188);

SoShape186->addChild(*SoVRMLAppearance187);

SoText* SoText189 = new SoText();
SoText189->setString(new QString[]{QString("ArtDeco08")}, 1);
SoFontStyle* SoFontStyle190 = new SoFontStyle();
SoFontStyle190->setUSE(QString("Style"));
SoText189->setFontStyle(*SoFontStyle190);

SoShape186->setGeometry(*SoText189);

SoAnchor185->addChild(*SoShape186);

SoTransform184->addChild(*SoAnchor185);

SoTransform178->addChild(*SoTransform184);

SoGroup50->addChild(*SoTransform178);

SoViewpoint* SoViewpoint191 = new SoViewpoint();
SoViewpoint191->setDEF(QString("View09"));
SoViewpoint191->setDescription(QString("ArtDeco09"));
SoViewpoint191->setPosition(new float[]{0.75,2.25,3.0});
SoGroup50->addChild(*SoViewpoint191);

SoTransform* SoTransform192 = new SoTransform();
SoTransform192->setTranslation(new float[]{0.75,2.25,0.0});
SoAnchor* SoAnchor193 = new SoAnchor();
SoAnchor193->setDescription(QString("ArtDeco09 view"));
SoAnchor193->setUrl(new QString[]{QString("#View09")}, 1);
SoShape* SoShape194 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance195 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance196 = new SoProtoInstance();
SoProtoInstance196->setName(QString("ArtDeco09"));
SoVRMLAppearance195->addChild(*SoProtoInstance196);

SoShape194->addChild(*SoVRMLAppearance195);

SoSphere* SoSphere197 = new SoSphere();
SoSphere197->setUSE(QString("Ball"));
SoShape194->setGeometry(*SoSphere197);

SoAnchor193->addChild(*SoShape194);

SoTransform192->addChild(*SoAnchor193);

SoTransform* SoTransform198 = new SoTransform();
SoTransform198->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor199 = new SoAnchor();
SoAnchor199->setDescription(QString("ArtDeco09 view source documentation"));
SoAnchor199->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor199->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09")}, 2);
SoShape* SoShape200 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance201 = new SoVRMLAppearance();
SoMaterial* SoMaterial202 = new SoMaterial();
SoMaterial202->setUSE(QString("TextMat"));
SoVRMLAppearance201->addChild(*SoMaterial202);

SoShape200->addChild(*SoVRMLAppearance201);

SoText* SoText203 = new SoText();
SoText203->setString(new QString[]{QString("ArtDeco09")}, 1);
SoFontStyle* SoFontStyle204 = new SoFontStyle();
SoFontStyle204->setUSE(QString("Style"));
SoText203->setFontStyle(*SoFontStyle204);

SoShape200->setGeometry(*SoText203);

SoAnchor199->addChild(*SoShape200);

SoTransform198->addChild(*SoAnchor199);

SoTransform192->addChild(*SoTransform198);

SoGroup50->addChild(*SoTransform192);

SoViewpoint* SoViewpoint205 = new SoViewpoint();
SoViewpoint205->setDEF(QString("View10"));
SoViewpoint205->setDescription(QString("ArtDeco10"));
SoViewpoint205->setPosition(new float[]{2.25,2.25,3.0});
SoGroup50->addChild(*SoViewpoint205);

SoTransform* SoTransform206 = new SoTransform();
SoTransform206->setTranslation(new float[]{2.25,2.25,0.0});
SoAnchor* SoAnchor207 = new SoAnchor();
SoAnchor207->setDescription(QString("ArtDeco10 view"));
SoAnchor207->setUrl(new QString[]{QString("#View10")}, 1);
SoShape* SoShape208 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance209 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance210 = new SoProtoInstance();
SoProtoInstance210->setName(QString("ArtDeco10"));
SoVRMLAppearance209->addChild(*SoProtoInstance210);

SoShape208->addChild(*SoVRMLAppearance209);

SoSphere* SoSphere211 = new SoSphere();
SoSphere211->setUSE(QString("Ball"));
SoShape208->setGeometry(*SoSphere211);

SoAnchor207->addChild(*SoShape208);

SoTransform206->addChild(*SoAnchor207);

SoTransform* SoTransform212 = new SoTransform();
SoTransform212->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor213 = new SoAnchor();
SoAnchor213->setDescription(QString("ArtDeco10 view source documentation"));
SoAnchor213->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor213->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10")}, 2);
SoShape* SoShape214 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance215 = new SoVRMLAppearance();
SoMaterial* SoMaterial216 = new SoMaterial();
SoMaterial216->setUSE(QString("TextMat"));
SoVRMLAppearance215->addChild(*SoMaterial216);

SoShape214->addChild(*SoVRMLAppearance215);

SoText* SoText217 = new SoText();
SoText217->setString(new QString[]{QString("ArtDeco10")}, 1);
SoFontStyle* SoFontStyle218 = new SoFontStyle();
SoFontStyle218->setUSE(QString("Style"));
SoText217->setFontStyle(*SoFontStyle218);

SoShape214->setGeometry(*SoText217);

SoAnchor213->addChild(*SoShape214);

SoTransform212->addChild(*SoAnchor213);

SoTransform206->addChild(*SoTransform212);

SoGroup50->addChild(*SoTransform206);

SoViewpoint* SoViewpoint219 = new SoViewpoint();
SoViewpoint219->setDEF(QString("View11"));
SoViewpoint219->setDescription(QString("ArtDeco11"));
SoViewpoint219->setPosition(new float[]{3.75,2.25,3.0});
SoGroup50->addChild(*SoViewpoint219);

SoTransform* SoTransform220 = new SoTransform();
SoTransform220->setTranslation(new float[]{3.75,2.25,0.0});
SoAnchor* SoAnchor221 = new SoAnchor();
SoAnchor221->setDescription(QString("ArtDeco11 view"));
SoAnchor221->setUrl(new QString[]{QString("#View11")}, 1);
SoShape* SoShape222 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance223 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance224 = new SoProtoInstance();
SoProtoInstance224->setName(QString("ArtDeco11"));
SoVRMLAppearance223->addChild(*SoProtoInstance224);

SoShape222->addChild(*SoVRMLAppearance223);

SoSphere* SoSphere225 = new SoSphere();
SoSphere225->setUSE(QString("Ball"));
SoShape222->setGeometry(*SoSphere225);

SoAnchor221->addChild(*SoShape222);

SoTransform220->addChild(*SoAnchor221);

SoTransform* SoTransform226 = new SoTransform();
SoTransform226->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor227 = new SoAnchor();
SoAnchor227->setDescription(QString("ArtDeco11 view source documentation"));
SoAnchor227->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor227->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11")}, 2);
SoShape* SoShape228 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance229 = new SoVRMLAppearance();
SoMaterial* SoMaterial230 = new SoMaterial();
SoMaterial230->setUSE(QString("TextMat"));
SoVRMLAppearance229->addChild(*SoMaterial230);

SoShape228->addChild(*SoVRMLAppearance229);

SoText* SoText231 = new SoText();
SoText231->setString(new QString[]{QString("ArtDeco11")}, 1);
SoFontStyle* SoFontStyle232 = new SoFontStyle();
SoFontStyle232->setUSE(QString("Style"));
SoText231->setFontStyle(*SoFontStyle232);

SoShape228->setGeometry(*SoText231);

SoAnchor227->addChild(*SoShape228);

SoTransform226->addChild(*SoAnchor227);

SoTransform220->addChild(*SoTransform226);

SoGroup50->addChild(*SoTransform220);

SoViewpoint* SoViewpoint233 = new SoViewpoint();
SoViewpoint233->setDEF(QString("View12"));
SoViewpoint233->setDescription(QString("ArtDeco12"));
SoViewpoint233->setPosition(new float[]{-3.75,0.75,3.0});
SoGroup50->addChild(*SoViewpoint233);

SoTransform* SoTransform234 = new SoTransform();
SoTransform234->setTranslation(new float[]{-3.75,0.75,0.0});
SoAnchor* SoAnchor235 = new SoAnchor();
SoAnchor235->setDescription(QString("ArtDeco12 view"));
SoAnchor235->setUrl(new QString[]{QString("#View12")}, 1);
SoShape* SoShape236 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance237 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance238 = new SoProtoInstance();
SoProtoInstance238->setName(QString("ArtDeco12"));
SoVRMLAppearance237->addChild(*SoProtoInstance238);

SoShape236->addChild(*SoVRMLAppearance237);

SoSphere* SoSphere239 = new SoSphere();
SoSphere239->setUSE(QString("Ball"));
SoShape236->setGeometry(*SoSphere239);

SoAnchor235->addChild(*SoShape236);

SoTransform234->addChild(*SoAnchor235);

SoTransform* SoTransform240 = new SoTransform();
SoTransform240->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor241 = new SoAnchor();
SoAnchor241->setDescription(QString("ArtDeco12 view source documentation"));
SoAnchor241->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor241->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12")}, 2);
SoShape* SoShape242 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance243 = new SoVRMLAppearance();
SoMaterial* SoMaterial244 = new SoMaterial();
SoMaterial244->setUSE(QString("TextMat"));
SoVRMLAppearance243->addChild(*SoMaterial244);

SoShape242->addChild(*SoVRMLAppearance243);

SoText* SoText245 = new SoText();
SoText245->setString(new QString[]{QString("ArtDeco12")}, 1);
SoFontStyle* SoFontStyle246 = new SoFontStyle();
SoFontStyle246->setUSE(QString("Style"));
SoText245->setFontStyle(*SoFontStyle246);

SoShape242->setGeometry(*SoText245);

SoAnchor241->addChild(*SoShape242);

SoTransform240->addChild(*SoAnchor241);

SoTransform234->addChild(*SoTransform240);

SoGroup50->addChild(*SoTransform234);

SoViewpoint* SoViewpoint247 = new SoViewpoint();
SoViewpoint247->setDEF(QString("View13"));
SoViewpoint247->setDescription(QString("ArtDeco13"));
SoViewpoint247->setPosition(new float[]{-2.25,0.75,3.0});
SoGroup50->addChild(*SoViewpoint247);

SoTransform* SoTransform248 = new SoTransform();
SoTransform248->setTranslation(new float[]{-2.25,0.75,0.0});
SoAnchor* SoAnchor249 = new SoAnchor();
SoAnchor249->setDescription(QString("ArtDeco13 view"));
SoAnchor249->setUrl(new QString[]{QString("#View13")}, 1);
SoShape* SoShape250 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance251 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance252 = new SoProtoInstance();
SoProtoInstance252->setName(QString("ArtDeco13"));
SoVRMLAppearance251->addChild(*SoProtoInstance252);

SoShape250->addChild(*SoVRMLAppearance251);

SoSphere* SoSphere253 = new SoSphere();
SoSphere253->setUSE(QString("Ball"));
SoShape250->setGeometry(*SoSphere253);

SoAnchor249->addChild(*SoShape250);

SoTransform248->addChild(*SoAnchor249);

SoTransform* SoTransform254 = new SoTransform();
SoTransform254->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor255 = new SoAnchor();
SoAnchor255->setDescription(QString("ArtDeco13 view source documentation"));
SoAnchor255->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor255->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco3"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco13")}, 2);
SoShape* SoShape256 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance257 = new SoVRMLAppearance();
SoMaterial* SoMaterial258 = new SoMaterial();
SoMaterial258->setUSE(QString("TextMat"));
SoVRMLAppearance257->addChild(*SoMaterial258);

SoShape256->addChild(*SoVRMLAppearance257);

SoText* SoText259 = new SoText();
SoText259->setString(new QString[]{QString("ArtDeco13")}, 1);
SoFontStyle* SoFontStyle260 = new SoFontStyle();
SoFontStyle260->setUSE(QString("Style"));
SoText259->setFontStyle(*SoFontStyle260);

SoShape256->setGeometry(*SoText259);

SoAnchor255->addChild(*SoShape256);

SoTransform254->addChild(*SoAnchor255);

SoTransform248->addChild(*SoTransform254);

SoGroup50->addChild(*SoTransform248);

SoViewpoint* SoViewpoint261 = new SoViewpoint();
SoViewpoint261->setDEF(QString("View14"));
SoViewpoint261->setDescription(QString("ArtDeco14"));
SoViewpoint261->setPosition(new float[]{-0.75,0.75,3.0});
SoGroup50->addChild(*SoViewpoint261);

SoTransform* SoTransform262 = new SoTransform();
SoTransform262->setTranslation(new float[]{-0.75,0.75,0.0});
SoAnchor* SoAnchor263 = new SoAnchor();
SoAnchor263->setDescription(QString("ArtDeco14 view"));
SoAnchor263->setUrl(new QString[]{QString("#View14")}, 1);
SoShape* SoShape264 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance265 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance266 = new SoProtoInstance();
SoProtoInstance266->setName(QString("ArtDeco14"));
SoVRMLAppearance265->addChild(*SoProtoInstance266);

SoShape264->addChild(*SoVRMLAppearance265);

SoSphere* SoSphere267 = new SoSphere();
SoSphere267->setUSE(QString("Ball"));
SoShape264->setGeometry(*SoSphere267);

SoAnchor263->addChild(*SoShape264);

SoTransform262->addChild(*SoAnchor263);

SoTransform* SoTransform268 = new SoTransform();
SoTransform268->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor269 = new SoAnchor();
SoAnchor269->setDescription(QString("ArtDeco14 view source documentation"));
SoAnchor269->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor269->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco4"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco14")}, 2);
SoShape* SoShape270 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance271 = new SoVRMLAppearance();
SoMaterial* SoMaterial272 = new SoMaterial();
SoMaterial272->setUSE(QString("TextMat"));
SoVRMLAppearance271->addChild(*SoMaterial272);

SoShape270->addChild(*SoVRMLAppearance271);

SoText* SoText273 = new SoText();
SoText273->setString(new QString[]{QString("ArtDeco14")}, 1);
SoFontStyle* SoFontStyle274 = new SoFontStyle();
SoFontStyle274->setUSE(QString("Style"));
SoText273->setFontStyle(*SoFontStyle274);

SoShape270->setGeometry(*SoText273);

SoAnchor269->addChild(*SoShape270);

SoTransform268->addChild(*SoAnchor269);

SoTransform262->addChild(*SoTransform268);

SoGroup50->addChild(*SoTransform262);

SoViewpoint* SoViewpoint275 = new SoViewpoint();
SoViewpoint275->setDEF(QString("View15"));
SoViewpoint275->setDescription(QString("ArtDeco15"));
SoViewpoint275->setPosition(new float[]{0.75,0.75,3.0});
SoGroup50->addChild(*SoViewpoint275);

SoTransform* SoTransform276 = new SoTransform();
SoTransform276->setTranslation(new float[]{0.75,0.75,0.0});
SoAnchor* SoAnchor277 = new SoAnchor();
SoAnchor277->setDescription(QString("ArtDeco15 view"));
SoAnchor277->setUrl(new QString[]{QString("#View15")}, 1);
SoShape* SoShape278 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance279 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance280 = new SoProtoInstance();
SoProtoInstance280->setName(QString("ArtDeco15"));
SoVRMLAppearance279->addChild(*SoProtoInstance280);

SoShape278->addChild(*SoVRMLAppearance279);

SoSphere* SoSphere281 = new SoSphere();
SoSphere281->setUSE(QString("Ball"));
SoShape278->setGeometry(*SoSphere281);

SoAnchor277->addChild(*SoShape278);

SoTransform276->addChild(*SoAnchor277);

SoTransform* SoTransform282 = new SoTransform();
SoTransform282->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor283 = new SoAnchor();
SoAnchor283->setDescription(QString("ArtDeco15 view source documentation"));
SoAnchor283->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor283->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco5"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco15")}, 2);
SoShape* SoShape284 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance285 = new SoVRMLAppearance();
SoMaterial* SoMaterial286 = new SoMaterial();
SoMaterial286->setUSE(QString("TextMat"));
SoVRMLAppearance285->addChild(*SoMaterial286);

SoShape284->addChild(*SoVRMLAppearance285);

SoText* SoText287 = new SoText();
SoText287->setString(new QString[]{QString("ArtDeco15")}, 1);
SoFontStyle* SoFontStyle288 = new SoFontStyle();
SoFontStyle288->setUSE(QString("Style"));
SoText287->setFontStyle(*SoFontStyle288);

SoShape284->setGeometry(*SoText287);

SoAnchor283->addChild(*SoShape284);

SoTransform282->addChild(*SoAnchor283);

SoTransform276->addChild(*SoTransform282);

SoGroup50->addChild(*SoTransform276);

SoViewpoint* SoViewpoint289 = new SoViewpoint();
SoViewpoint289->setDEF(QString("View16"));
SoViewpoint289->setDescription(QString("ArtDeco16"));
SoViewpoint289->setPosition(new float[]{2.25,0.75,3.0});
SoGroup50->addChild(*SoViewpoint289);

SoTransform* SoTransform290 = new SoTransform();
SoTransform290->setTranslation(new float[]{2.25,0.75,0.0});
SoAnchor* SoAnchor291 = new SoAnchor();
SoAnchor291->setDescription(QString("ArtDeco16 view"));
SoAnchor291->setUrl(new QString[]{QString("#View16")}, 1);
SoShape* SoShape292 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance293 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance294 = new SoProtoInstance();
SoProtoInstance294->setName(QString("ArtDeco16"));
SoVRMLAppearance293->addChild(*SoProtoInstance294);

SoShape292->addChild(*SoVRMLAppearance293);

SoSphere* SoSphere295 = new SoSphere();
SoSphere295->setUSE(QString("Ball"));
SoShape292->setGeometry(*SoSphere295);

SoAnchor291->addChild(*SoShape292);

SoTransform290->addChild(*SoAnchor291);

SoTransform* SoTransform296 = new SoTransform();
SoTransform296->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor297 = new SoAnchor();
SoAnchor297->setDescription(QString("ArtDeco16 view source documentation"));
SoAnchor297->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor297->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16")}, 2);
SoShape* SoShape298 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance299 = new SoVRMLAppearance();
SoMaterial* SoMaterial300 = new SoMaterial();
SoMaterial300->setUSE(QString("TextMat"));
SoVRMLAppearance299->addChild(*SoMaterial300);

SoShape298->addChild(*SoVRMLAppearance299);

SoText* SoText301 = new SoText();
SoText301->setString(new QString[]{QString("ArtDeco16")}, 1);
SoFontStyle* SoFontStyle302 = new SoFontStyle();
SoFontStyle302->setUSE(QString("Style"));
SoText301->setFontStyle(*SoFontStyle302);

SoShape298->setGeometry(*SoText301);

SoAnchor297->addChild(*SoShape298);

SoTransform296->addChild(*SoAnchor297);

SoTransform290->addChild(*SoTransform296);

SoGroup50->addChild(*SoTransform290);

SoViewpoint* SoViewpoint303 = new SoViewpoint();
SoViewpoint303->setDEF(QString("View17"));
SoViewpoint303->setDescription(QString("ArtDeco17"));
SoViewpoint303->setPosition(new float[]{3.75,0.75,3.0});
SoGroup50->addChild(*SoViewpoint303);

SoTransform* SoTransform304 = new SoTransform();
SoTransform304->setTranslation(new float[]{3.75,0.75,0.0});
SoAnchor* SoAnchor305 = new SoAnchor();
SoAnchor305->setDescription(QString("ArtDeco17 view"));
SoAnchor305->setUrl(new QString[]{QString("#View17")}, 1);
SoShape* SoShape306 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance307 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance308 = new SoProtoInstance();
SoProtoInstance308->setName(QString("ArtDeco17"));
SoVRMLAppearance307->addChild(*SoProtoInstance308);

SoShape306->addChild(*SoVRMLAppearance307);

SoSphere* SoSphere309 = new SoSphere();
SoSphere309->setUSE(QString("Ball"));
SoShape306->setGeometry(*SoSphere309);

SoAnchor305->addChild(*SoShape306);

SoTransform304->addChild(*SoAnchor305);

SoTransform* SoTransform310 = new SoTransform();
SoTransform310->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor311 = new SoAnchor();
SoAnchor311->setDescription(QString("ArtDeco17 view source documentation"));
SoAnchor311->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor311->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco7"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco17")}, 2);
SoShape* SoShape312 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance313 = new SoVRMLAppearance();
SoMaterial* SoMaterial314 = new SoMaterial();
SoMaterial314->setUSE(QString("TextMat"));
SoVRMLAppearance313->addChild(*SoMaterial314);

SoShape312->addChild(*SoVRMLAppearance313);

SoText* SoText315 = new SoText();
SoText315->setString(new QString[]{QString("ArtDeco17")}, 1);
SoFontStyle* SoFontStyle316 = new SoFontStyle();
SoFontStyle316->setUSE(QString("Style"));
SoText315->setFontStyle(*SoFontStyle316);

SoShape312->setGeometry(*SoText315);

SoAnchor311->addChild(*SoShape312);

SoTransform310->addChild(*SoAnchor311);

SoTransform304->addChild(*SoTransform310);

SoGroup50->addChild(*SoTransform304);

SoViewpoint* SoViewpoint317 = new SoViewpoint();
SoViewpoint317->setDEF(QString("View18"));
SoViewpoint317->setDescription(QString("ArtDeco18"));
SoViewpoint317->setPosition(new float[]{-3.75,-0.75,3.0});
SoGroup50->addChild(*SoViewpoint317);

SoTransform* SoTransform318 = new SoTransform();
SoTransform318->setTranslation(new float[]{-3.75,-0.75,0.0});
SoAnchor* SoAnchor319 = new SoAnchor();
SoAnchor319->setDescription(QString("ArtDeco18 view"));
SoAnchor319->setUrl(new QString[]{QString("#View18")}, 1);
SoShape* SoShape320 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance321 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance322 = new SoProtoInstance();
SoProtoInstance322->setName(QString("ArtDeco18"));
SoVRMLAppearance321->addChild(*SoProtoInstance322);

SoShape320->addChild(*SoVRMLAppearance321);

SoSphere* SoSphere323 = new SoSphere();
SoSphere323->setUSE(QString("Ball"));
SoShape320->setGeometry(*SoSphere323);

SoAnchor319->addChild(*SoShape320);

SoTransform318->addChild(*SoAnchor319);

SoTransform* SoTransform324 = new SoTransform();
SoTransform324->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor325 = new SoAnchor();
SoAnchor325->setDescription(QString("ArtDeco18 view source documentation"));
SoAnchor325->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor325->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18")}, 2);
SoShape* SoShape326 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance327 = new SoVRMLAppearance();
SoMaterial* SoMaterial328 = new SoMaterial();
SoMaterial328->setUSE(QString("TextMat"));
SoVRMLAppearance327->addChild(*SoMaterial328);

SoShape326->addChild(*SoVRMLAppearance327);

SoText* SoText329 = new SoText();
SoText329->setString(new QString[]{QString("ArtDeco18")}, 1);
SoFontStyle* SoFontStyle330 = new SoFontStyle();
SoFontStyle330->setUSE(QString("Style"));
SoText329->setFontStyle(*SoFontStyle330);

SoShape326->setGeometry(*SoText329);

SoAnchor325->addChild(*SoShape326);

SoTransform324->addChild(*SoAnchor325);

SoTransform318->addChild(*SoTransform324);

SoGroup50->addChild(*SoTransform318);

SoViewpoint* SoViewpoint331 = new SoViewpoint();
SoViewpoint331->setDEF(QString("View19"));
SoViewpoint331->setDescription(QString("ArtDeco19"));
SoViewpoint331->setPosition(new float[]{-2.25,-0.75,3.0});
SoGroup50->addChild(*SoViewpoint331);

SoTransform* SoTransform332 = new SoTransform();
SoTransform332->setTranslation(new float[]{-2.25,-0.75,0.0});
SoAnchor* SoAnchor333 = new SoAnchor();
SoAnchor333->setDescription(QString("ArtDeco19 view"));
SoAnchor333->setUrl(new QString[]{QString("#View19")}, 1);
SoShape* SoShape334 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance335 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance336 = new SoProtoInstance();
SoProtoInstance336->setName(QString("ArtDeco19"));
SoVRMLAppearance335->addChild(*SoProtoInstance336);

SoShape334->addChild(*SoVRMLAppearance335);

SoSphere* SoSphere337 = new SoSphere();
SoSphere337->setUSE(QString("Ball"));
SoShape334->setGeometry(*SoSphere337);

SoAnchor333->addChild(*SoShape334);

SoTransform332->addChild(*SoAnchor333);

SoTransform* SoTransform338 = new SoTransform();
SoTransform338->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor339 = new SoAnchor();
SoAnchor339->setDescription(QString("ArtDeco19 view source documentation"));
SoAnchor339->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor339->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco9"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco19")}, 2);
SoShape* SoShape340 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance341 = new SoVRMLAppearance();
SoMaterial* SoMaterial342 = new SoMaterial();
SoMaterial342->setUSE(QString("TextMat"));
SoVRMLAppearance341->addChild(*SoMaterial342);

SoShape340->addChild(*SoVRMLAppearance341);

SoText* SoText343 = new SoText();
SoText343->setString(new QString[]{QString("ArtDeco19")}, 1);
SoFontStyle* SoFontStyle344 = new SoFontStyle();
SoFontStyle344->setUSE(QString("Style"));
SoText343->setFontStyle(*SoFontStyle344);

SoShape340->setGeometry(*SoText343);

SoAnchor339->addChild(*SoShape340);

SoTransform338->addChild(*SoAnchor339);

SoTransform332->addChild(*SoTransform338);

SoGroup50->addChild(*SoTransform332);

SoViewpoint* SoViewpoint345 = new SoViewpoint();
SoViewpoint345->setDEF(QString("View20"));
SoViewpoint345->setDescription(QString("ArtDeco20"));
SoViewpoint345->setPosition(new float[]{-0.75,-0.75,3.0});
SoGroup50->addChild(*SoViewpoint345);

SoTransform* SoTransform346 = new SoTransform();
SoTransform346->setTranslation(new float[]{-0.75,-0.75,0.0});
SoAnchor* SoAnchor347 = new SoAnchor();
SoAnchor347->setDescription(QString("ArtDeco20 view"));
SoAnchor347->setUrl(new QString[]{QString("#View20")}, 1);
SoShape* SoShape348 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance349 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance350 = new SoProtoInstance();
SoProtoInstance350->setName(QString("ArtDeco20"));
SoVRMLAppearance349->addChild(*SoProtoInstance350);

SoShape348->addChild(*SoVRMLAppearance349);

SoSphere* SoSphere351 = new SoSphere();
SoSphere351->setUSE(QString("Ball"));
SoShape348->setGeometry(*SoSphere351);

SoAnchor347->addChild(*SoShape348);

SoTransform346->addChild(*SoAnchor347);

SoTransform* SoTransform352 = new SoTransform();
SoTransform352->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor353 = new SoAnchor();
SoAnchor353->setDescription(QString("ArtDeco20 view source documentation"));
SoAnchor353->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor353->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20")}, 2);
SoShape* SoShape354 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance355 = new SoVRMLAppearance();
SoMaterial* SoMaterial356 = new SoMaterial();
SoMaterial356->setUSE(QString("TextMat"));
SoVRMLAppearance355->addChild(*SoMaterial356);

SoShape354->addChild(*SoVRMLAppearance355);

SoText* SoText357 = new SoText();
SoText357->setString(new QString[]{QString("ArtDeco20")}, 1);
SoFontStyle* SoFontStyle358 = new SoFontStyle();
SoFontStyle358->setUSE(QString("Style"));
SoText357->setFontStyle(*SoFontStyle358);

SoShape354->setGeometry(*SoText357);

SoAnchor353->addChild(*SoShape354);

SoTransform352->addChild(*SoAnchor353);

SoTransform346->addChild(*SoTransform352);

SoGroup50->addChild(*SoTransform346);

SoViewpoint* SoViewpoint359 = new SoViewpoint();
SoViewpoint359->setDEF(QString("View21"));
SoViewpoint359->setDescription(QString("ArtDeco21"));
SoViewpoint359->setPosition(new float[]{0.75,-0.75,3.0});
SoGroup50->addChild(*SoViewpoint359);

SoTransform* SoTransform360 = new SoTransform();
SoTransform360->setTranslation(new float[]{0.75,-0.75,0.0});
SoAnchor* SoAnchor361 = new SoAnchor();
SoAnchor361->setDescription(QString("ArtDeco21 view"));
SoAnchor361->setUrl(new QString[]{QString("#View21")}, 1);
SoShape* SoShape362 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance363 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance364 = new SoProtoInstance();
SoProtoInstance364->setName(QString("ArtDeco21"));
SoVRMLAppearance363->addChild(*SoProtoInstance364);

SoShape362->addChild(*SoVRMLAppearance363);

SoSphere* SoSphere365 = new SoSphere();
SoSphere365->setUSE(QString("Ball"));
SoShape362->setGeometry(*SoSphere365);

SoAnchor361->addChild(*SoShape362);

SoTransform360->addChild(*SoAnchor361);

SoTransform* SoTransform366 = new SoTransform();
SoTransform366->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor367 = new SoAnchor();
SoAnchor367->setDescription(QString("ArtDeco21 view source documentation"));
SoAnchor367->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor367->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21")}, 2);
SoShape* SoShape368 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance369 = new SoVRMLAppearance();
SoMaterial* SoMaterial370 = new SoMaterial();
SoMaterial370->setUSE(QString("TextMat"));
SoVRMLAppearance369->addChild(*SoMaterial370);

SoShape368->addChild(*SoVRMLAppearance369);

SoText* SoText371 = new SoText();
SoText371->setString(new QString[]{QString("ArtDeco21")}, 1);
SoFontStyle* SoFontStyle372 = new SoFontStyle();
SoFontStyle372->setUSE(QString("Style"));
SoText371->setFontStyle(*SoFontStyle372);

SoShape368->setGeometry(*SoText371);

SoAnchor367->addChild(*SoShape368);

SoTransform366->addChild(*SoAnchor367);

SoTransform360->addChild(*SoTransform366);

SoGroup50->addChild(*SoTransform360);

SoViewpoint* SoViewpoint373 = new SoViewpoint();
SoViewpoint373->setDEF(QString("View22"));
SoViewpoint373->setDescription(QString("ArtDeco22"));
SoViewpoint373->setPosition(new float[]{2.25,-0.75,3.0});
SoGroup50->addChild(*SoViewpoint373);

SoTransform* SoTransform374 = new SoTransform();
SoTransform374->setTranslation(new float[]{2.25,-0.75,0.0});
SoAnchor* SoAnchor375 = new SoAnchor();
SoAnchor375->setDescription(QString("ArtDeco22 view"));
SoAnchor375->setUrl(new QString[]{QString("#View22")}, 1);
SoShape* SoShape376 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance377 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance378 = new SoProtoInstance();
SoProtoInstance378->setName(QString("ArtDeco22"));
SoVRMLAppearance377->addChild(*SoProtoInstance378);

SoShape376->addChild(*SoVRMLAppearance377);

SoSphere* SoSphere379 = new SoSphere();
SoSphere379->setUSE(QString("Ball"));
SoShape376->setGeometry(*SoSphere379);

SoAnchor375->addChild(*SoShape376);

SoTransform374->addChild(*SoAnchor375);

SoTransform* SoTransform380 = new SoTransform();
SoTransform380->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor381 = new SoAnchor();
SoAnchor381->setDescription(QString("ArtDeco22 view source documentation"));
SoAnchor381->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor381->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22")}, 2);
SoShape* SoShape382 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance383 = new SoVRMLAppearance();
SoMaterial* SoMaterial384 = new SoMaterial();
SoMaterial384->setUSE(QString("TextMat"));
SoVRMLAppearance383->addChild(*SoMaterial384);

SoShape382->addChild(*SoVRMLAppearance383);

SoText* SoText385 = new SoText();
SoText385->setString(new QString[]{QString("ArtDeco22")}, 1);
SoFontStyle* SoFontStyle386 = new SoFontStyle();
SoFontStyle386->setUSE(QString("Style"));
SoText385->setFontStyle(*SoFontStyle386);

SoShape382->setGeometry(*SoText385);

SoAnchor381->addChild(*SoShape382);

SoTransform380->addChild(*SoAnchor381);

SoTransform374->addChild(*SoTransform380);

SoGroup50->addChild(*SoTransform374);

SoViewpoint* SoViewpoint387 = new SoViewpoint();
SoViewpoint387->setDEF(QString("View23"));
SoViewpoint387->setDescription(QString("ArtDeco23"));
SoViewpoint387->setPosition(new float[]{3.75,-0.75,3.0});
SoGroup50->addChild(*SoViewpoint387);

SoTransform* SoTransform388 = new SoTransform();
SoTransform388->setTranslation(new float[]{3.75,-0.75,0.0});
SoAnchor* SoAnchor389 = new SoAnchor();
SoAnchor389->setDescription(QString("ArtDeco23 view"));
SoAnchor389->setUrl(new QString[]{QString("#View23")}, 1);
SoShape* SoShape390 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance391 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance392 = new SoProtoInstance();
SoProtoInstance392->setName(QString("ArtDeco23"));
SoVRMLAppearance391->addChild(*SoProtoInstance392);

SoShape390->addChild(*SoVRMLAppearance391);

SoSphere* SoSphere393 = new SoSphere();
SoSphere393->setUSE(QString("Ball"));
SoShape390->setGeometry(*SoSphere393);

SoAnchor389->addChild(*SoShape390);

SoTransform388->addChild(*SoAnchor389);

SoTransform* SoTransform394 = new SoTransform();
SoTransform394->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor395 = new SoAnchor();
SoAnchor395->setDescription(QString("ArtDeco23 view source documentation"));
SoAnchor395->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor395->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23")}, 2);
SoShape* SoShape396 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance397 = new SoVRMLAppearance();
SoMaterial* SoMaterial398 = new SoMaterial();
SoMaterial398->setUSE(QString("TextMat"));
SoVRMLAppearance397->addChild(*SoMaterial398);

SoShape396->addChild(*SoVRMLAppearance397);

SoText* SoText399 = new SoText();
SoText399->setString(new QString[]{QString("ArtDeco23")}, 1);
SoFontStyle* SoFontStyle400 = new SoFontStyle();
SoFontStyle400->setUSE(QString("Style"));
SoText399->setFontStyle(*SoFontStyle400);

SoShape396->setGeometry(*SoText399);

SoAnchor395->addChild(*SoShape396);

SoTransform394->addChild(*SoAnchor395);

SoTransform388->addChild(*SoTransform394);

SoGroup50->addChild(*SoTransform388);

SoViewpoint* SoViewpoint401 = new SoViewpoint();
SoViewpoint401->setDEF(QString("View24"));
SoViewpoint401->setDescription(QString("ArtDeco24"));
SoViewpoint401->setPosition(new float[]{-3.75,-2.25,3.0});
SoGroup50->addChild(*SoViewpoint401);

SoTransform* SoTransform402 = new SoTransform();
SoTransform402->setTranslation(new float[]{-3.75,-2.25,0.0});
SoAnchor* SoAnchor403 = new SoAnchor();
SoAnchor403->setDescription(QString("ArtDeco24 view"));
SoAnchor403->setUrl(new QString[]{QString("#View24")}, 1);
SoShape* SoShape404 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance405 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance406 = new SoProtoInstance();
SoProtoInstance406->setName(QString("ArtDeco24"));
SoVRMLAppearance405->addChild(*SoProtoInstance406);

SoShape404->addChild(*SoVRMLAppearance405);

SoSphere* SoSphere407 = new SoSphere();
SoSphere407->setUSE(QString("Ball"));
SoShape404->setGeometry(*SoSphere407);

SoAnchor403->addChild(*SoShape404);

SoTransform402->addChild(*SoAnchor403);

SoTransform* SoTransform408 = new SoTransform();
SoTransform408->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor409 = new SoAnchor();
SoAnchor409->setDescription(QString("ArtDeco24 view source documentation"));
SoAnchor409->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor409->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24")}, 2);
SoShape* SoShape410 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance411 = new SoVRMLAppearance();
SoMaterial* SoMaterial412 = new SoMaterial();
SoMaterial412->setUSE(QString("TextMat"));
SoVRMLAppearance411->addChild(*SoMaterial412);

SoShape410->addChild(*SoVRMLAppearance411);

SoText* SoText413 = new SoText();
SoText413->setString(new QString[]{QString("ArtDeco24")}, 1);
SoFontStyle* SoFontStyle414 = new SoFontStyle();
SoFontStyle414->setUSE(QString("Style"));
SoText413->setFontStyle(*SoFontStyle414);

SoShape410->setGeometry(*SoText413);

SoAnchor409->addChild(*SoShape410);

SoTransform408->addChild(*SoAnchor409);

SoTransform402->addChild(*SoTransform408);

SoGroup50->addChild(*SoTransform402);

SoViewpoint* SoViewpoint415 = new SoViewpoint();
SoViewpoint415->setDEF(QString("View25"));
SoViewpoint415->setDescription(QString("ArtDeco25"));
SoViewpoint415->setPosition(new float[]{-2.25,-2.25,3.0});
SoGroup50->addChild(*SoViewpoint415);

SoTransform* SoTransform416 = new SoTransform();
SoTransform416->setTranslation(new float[]{-2.25,-2.25,0.0});
SoAnchor* SoAnchor417 = new SoAnchor();
SoAnchor417->setDescription(QString("ArtDeco25 view"));
SoAnchor417->setUrl(new QString[]{QString("#View25")}, 1);
SoShape* SoShape418 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance419 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance420 = new SoProtoInstance();
SoProtoInstance420->setName(QString("ArtDeco25"));
SoVRMLAppearance419->addChild(*SoProtoInstance420);

SoShape418->addChild(*SoVRMLAppearance419);

SoSphere* SoSphere421 = new SoSphere();
SoSphere421->setUSE(QString("Ball"));
SoShape418->setGeometry(*SoSphere421);

SoAnchor417->addChild(*SoShape418);

SoTransform416->addChild(*SoAnchor417);

SoTransform* SoTransform422 = new SoTransform();
SoTransform422->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor423 = new SoAnchor();
SoAnchor423->setDescription(QString("ArtDeco25 view source documentation"));
SoAnchor423->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor423->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25")}, 2);
SoShape* SoShape424 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance425 = new SoVRMLAppearance();
SoMaterial* SoMaterial426 = new SoMaterial();
SoMaterial426->setUSE(QString("TextMat"));
SoVRMLAppearance425->addChild(*SoMaterial426);

SoShape424->addChild(*SoVRMLAppearance425);

SoText* SoText427 = new SoText();
SoText427->setString(new QString[]{QString("ArtDeco25")}, 1);
SoFontStyle* SoFontStyle428 = new SoFontStyle();
SoFontStyle428->setUSE(QString("Style"));
SoText427->setFontStyle(*SoFontStyle428);

SoShape424->setGeometry(*SoText427);

SoAnchor423->addChild(*SoShape424);

SoTransform422->addChild(*SoAnchor423);

SoTransform416->addChild(*SoTransform422);

SoGroup50->addChild(*SoTransform416);

SoViewpoint* SoViewpoint429 = new SoViewpoint();
SoViewpoint429->setDEF(QString("View26"));
SoViewpoint429->setDescription(QString("ArtDeco26"));
SoViewpoint429->setPosition(new float[]{-0.75,-2.25,3.0});
SoGroup50->addChild(*SoViewpoint429);

SoTransform* SoTransform430 = new SoTransform();
SoTransform430->setTranslation(new float[]{-0.75,-2.25,0.0});
SoAnchor* SoAnchor431 = new SoAnchor();
SoAnchor431->setDescription(QString("ArtDeco26 view"));
SoAnchor431->setUrl(new QString[]{QString("#View26")}, 1);
SoShape* SoShape432 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance433 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance434 = new SoProtoInstance();
SoProtoInstance434->setName(QString("ArtDeco26"));
SoVRMLAppearance433->addChild(*SoProtoInstance434);

SoShape432->addChild(*SoVRMLAppearance433);

SoSphere* SoSphere435 = new SoSphere();
SoSphere435->setUSE(QString("Ball"));
SoShape432->setGeometry(*SoSphere435);

SoAnchor431->addChild(*SoShape432);

SoTransform430->addChild(*SoAnchor431);

SoTransform* SoTransform436 = new SoTransform();
SoTransform436->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor437 = new SoAnchor();
SoAnchor437->setDescription(QString("ArtDeco26 view source documentation"));
SoAnchor437->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor437->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26")}, 2);
SoShape* SoShape438 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance439 = new SoVRMLAppearance();
SoMaterial* SoMaterial440 = new SoMaterial();
SoMaterial440->setUSE(QString("TextMat"));
SoVRMLAppearance439->addChild(*SoMaterial440);

SoShape438->addChild(*SoVRMLAppearance439);

SoText* SoText441 = new SoText();
SoText441->setString(new QString[]{QString("ArtDeco26")}, 1);
SoFontStyle* SoFontStyle442 = new SoFontStyle();
SoFontStyle442->setUSE(QString("Style"));
SoText441->setFontStyle(*SoFontStyle442);

SoShape438->setGeometry(*SoText441);

SoAnchor437->addChild(*SoShape438);

SoTransform436->addChild(*SoAnchor437);

SoTransform430->addChild(*SoTransform436);

SoGroup50->addChild(*SoTransform430);

SoViewpoint* SoViewpoint443 = new SoViewpoint();
SoViewpoint443->setDEF(QString("View27"));
SoViewpoint443->setDescription(QString("ArtDeco27"));
SoViewpoint443->setPosition(new float[]{0.75,-2.25,3.0});
SoGroup50->addChild(*SoViewpoint443);

SoTransform* SoTransform444 = new SoTransform();
SoTransform444->setTranslation(new float[]{0.75,-2.25,0.0});
SoAnchor* SoAnchor445 = new SoAnchor();
SoAnchor445->setDescription(QString("ArtDeco27 view"));
SoAnchor445->setUrl(new QString[]{QString("#View27")}, 1);
SoShape* SoShape446 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance447 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance448 = new SoProtoInstance();
SoProtoInstance448->setName(QString("ArtDeco27"));
SoVRMLAppearance447->addChild(*SoProtoInstance448);

SoShape446->addChild(*SoVRMLAppearance447);

SoSphere* SoSphere449 = new SoSphere();
SoSphere449->setUSE(QString("Ball"));
SoShape446->setGeometry(*SoSphere449);

SoAnchor445->addChild(*SoShape446);

SoTransform444->addChild(*SoAnchor445);

SoTransform* SoTransform450 = new SoTransform();
SoTransform450->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor451 = new SoAnchor();
SoAnchor451->setDescription(QString("ArtDeco27 view source documentation"));
SoAnchor451->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor451->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27")}, 2);
SoShape* SoShape452 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance453 = new SoVRMLAppearance();
SoMaterial* SoMaterial454 = new SoMaterial();
SoMaterial454->setUSE(QString("TextMat"));
SoVRMLAppearance453->addChild(*SoMaterial454);

SoShape452->addChild(*SoVRMLAppearance453);

SoText* SoText455 = new SoText();
SoText455->setString(new QString[]{QString("ArtDeco27")}, 1);
SoFontStyle* SoFontStyle456 = new SoFontStyle();
SoFontStyle456->setUSE(QString("Style"));
SoText455->setFontStyle(*SoFontStyle456);

SoShape452->setGeometry(*SoText455);

SoAnchor451->addChild(*SoShape452);

SoTransform450->addChild(*SoAnchor451);

SoTransform444->addChild(*SoTransform450);

SoGroup50->addChild(*SoTransform444);

SoViewpoint* SoViewpoint457 = new SoViewpoint();
SoViewpoint457->setDEF(QString("View28"));
SoViewpoint457->setDescription(QString("ArtDeco28"));
SoViewpoint457->setPosition(new float[]{2.25,-2.25,3.0});
SoGroup50->addChild(*SoViewpoint457);

SoTransform* SoTransform458 = new SoTransform();
SoTransform458->setTranslation(new float[]{2.25,-2.25,0.0});
SoAnchor* SoAnchor459 = new SoAnchor();
SoAnchor459->setDescription(QString("ArtDeco28 view"));
SoAnchor459->setUrl(new QString[]{QString("#View28")}, 1);
SoShape* SoShape460 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance461 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance462 = new SoProtoInstance();
SoProtoInstance462->setName(QString("ArtDeco28"));
SoVRMLAppearance461->addChild(*SoProtoInstance462);

SoShape460->addChild(*SoVRMLAppearance461);

SoSphere* SoSphere463 = new SoSphere();
SoSphere463->setUSE(QString("Ball"));
SoShape460->setGeometry(*SoSphere463);

SoAnchor459->addChild(*SoShape460);

SoTransform458->addChild(*SoAnchor459);

SoTransform* SoTransform464 = new SoTransform();
SoTransform464->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor465 = new SoAnchor();
SoAnchor465->setDescription(QString("ArtDeco28 view source documentation"));
SoAnchor465->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor465->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28")}, 2);
SoShape* SoShape466 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance467 = new SoVRMLAppearance();
SoMaterial* SoMaterial468 = new SoMaterial();
SoMaterial468->setUSE(QString("TextMat"));
SoVRMLAppearance467->addChild(*SoMaterial468);

SoShape466->addChild(*SoVRMLAppearance467);

SoText* SoText469 = new SoText();
SoText469->setString(new QString[]{QString("ArtDeco28")}, 1);
SoFontStyle* SoFontStyle470 = new SoFontStyle();
SoFontStyle470->setUSE(QString("Style"));
SoText469->setFontStyle(*SoFontStyle470);

SoShape466->setGeometry(*SoText469);

SoAnchor465->addChild(*SoShape466);

SoTransform464->addChild(*SoAnchor465);

SoTransform458->addChild(*SoTransform464);

SoGroup50->addChild(*SoTransform458);

SoViewpoint* SoViewpoint471 = new SoViewpoint();
SoViewpoint471->setDEF(QString("View29"));
SoViewpoint471->setDescription(QString("ArtDeco29"));
SoViewpoint471->setPosition(new float[]{3.75,-2.25,3.0});
SoGroup50->addChild(*SoViewpoint471);

SoTransform* SoTransform472 = new SoTransform();
SoTransform472->setTranslation(new float[]{3.75,-2.25,0.0});
SoAnchor* SoAnchor473 = new SoAnchor();
SoAnchor473->setDescription(QString("ArtDeco29 view"));
SoAnchor473->setUrl(new QString[]{QString("#View29")}, 1);
SoShape* SoShape474 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance475 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance476 = new SoProtoInstance();
SoProtoInstance476->setName(QString("ArtDeco29"));
SoVRMLAppearance475->addChild(*SoProtoInstance476);

SoShape474->addChild(*SoVRMLAppearance475);

SoSphere* SoSphere477 = new SoSphere();
SoSphere477->setUSE(QString("Ball"));
SoShape474->setGeometry(*SoSphere477);

SoAnchor473->addChild(*SoShape474);

SoTransform472->addChild(*SoAnchor473);

SoTransform* SoTransform478 = new SoTransform();
SoTransform478->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor479 = new SoAnchor();
SoAnchor479->setDescription(QString("ArtDeco29 view source documentation"));
SoAnchor479->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor479->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29")}, 2);
SoShape* SoShape480 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance481 = new SoVRMLAppearance();
SoMaterial* SoMaterial482 = new SoMaterial();
SoMaterial482->setUSE(QString("TextMat"));
SoVRMLAppearance481->addChild(*SoMaterial482);

SoShape480->addChild(*SoVRMLAppearance481);

SoText* SoText483 = new SoText();
SoText483->setString(new QString[]{QString("ArtDeco29")}, 1);
SoFontStyle* SoFontStyle484 = new SoFontStyle();
SoFontStyle484->setUSE(QString("Style"));
SoText483->setFontStyle(*SoFontStyle484);

SoShape480->setGeometry(*SoText483);

SoAnchor479->addChild(*SoShape480);

SoTransform478->addChild(*SoAnchor479);

SoTransform472->addChild(*SoTransform478);

SoGroup50->addChild(*SoTransform472);

SoViewpoint* SoViewpoint485 = new SoViewpoint();
SoViewpoint485->setDEF(QString("View30"));
SoViewpoint485->setDescription(QString("ArtDeco30"));
SoViewpoint485->setPosition(new float[]{-3.75,-3.75,3.0});
SoGroup50->addChild(*SoViewpoint485);

SoTransform* SoTransform486 = new SoTransform();
SoTransform486->setTranslation(new float[]{-3.75,-3.75,0.0});
SoAnchor* SoAnchor487 = new SoAnchor();
SoAnchor487->setDescription(QString("ArtDeco30 view"));
SoAnchor487->setUrl(new QString[]{QString("#View30")}, 1);
SoShape* SoShape488 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance489 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance490 = new SoProtoInstance();
SoProtoInstance490->setName(QString("ArtDeco30"));
SoVRMLAppearance489->addChild(*SoProtoInstance490);

SoShape488->addChild(*SoVRMLAppearance489);

SoSphere* SoSphere491 = new SoSphere();
SoSphere491->setUSE(QString("Ball"));
SoShape488->setGeometry(*SoSphere491);

SoAnchor487->addChild(*SoShape488);

SoTransform486->addChild(*SoAnchor487);

SoTransform* SoTransform492 = new SoTransform();
SoTransform492->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor493 = new SoAnchor();
SoAnchor493->setDescription(QString("ArtDeco30 view source documentation"));
SoAnchor493->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor493->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30")}, 2);
SoShape* SoShape494 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance495 = new SoVRMLAppearance();
SoMaterial* SoMaterial496 = new SoMaterial();
SoMaterial496->setUSE(QString("TextMat"));
SoVRMLAppearance495->addChild(*SoMaterial496);

SoShape494->addChild(*SoVRMLAppearance495);

SoText* SoText497 = new SoText();
SoText497->setString(new QString[]{QString("ArtDeco30")}, 1);
SoFontStyle* SoFontStyle498 = new SoFontStyle();
SoFontStyle498->setUSE(QString("Style"));
SoText497->setFontStyle(*SoFontStyle498);

SoShape494->setGeometry(*SoText497);

SoAnchor493->addChild(*SoShape494);

SoTransform492->addChild(*SoAnchor493);

SoTransform486->addChild(*SoTransform492);

SoGroup50->addChild(*SoTransform486);

SoViewpoint* SoViewpoint499 = new SoViewpoint();
SoViewpoint499->setDEF(QString("View31"));
SoViewpoint499->setDescription(QString("ArtDeco31"));
SoViewpoint499->setPosition(new float[]{-2.25,-3.75,3.0});
SoGroup50->addChild(*SoViewpoint499);

SoTransform* SoTransform500 = new SoTransform();
SoTransform500->setTranslation(new float[]{-2.25,-3.75,0.0});
SoAnchor* SoAnchor501 = new SoAnchor();
SoAnchor501->setDescription(QString("ArtDeco31 view"));
SoAnchor501->setUrl(new QString[]{QString("#View31")}, 1);
SoShape* SoShape502 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance503 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance504 = new SoProtoInstance();
SoProtoInstance504->setName(QString("ArtDeco31"));
SoVRMLAppearance503->addChild(*SoProtoInstance504);

SoShape502->addChild(*SoVRMLAppearance503);

SoSphere* SoSphere505 = new SoSphere();
SoSphere505->setUSE(QString("Ball"));
SoShape502->setGeometry(*SoSphere505);

SoAnchor501->addChild(*SoShape502);

SoTransform500->addChild(*SoAnchor501);

SoTransform* SoTransform506 = new SoTransform();
SoTransform506->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor507 = new SoAnchor();
SoAnchor507->setDescription(QString("ArtDeco31 view source documentation"));
SoAnchor507->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor507->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31")}, 2);
SoShape* SoShape508 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance509 = new SoVRMLAppearance();
SoMaterial* SoMaterial510 = new SoMaterial();
SoMaterial510->setUSE(QString("TextMat"));
SoVRMLAppearance509->addChild(*SoMaterial510);

SoShape508->addChild(*SoVRMLAppearance509);

SoText* SoText511 = new SoText();
SoText511->setString(new QString[]{QString("ArtDeco31")}, 1);
SoFontStyle* SoFontStyle512 = new SoFontStyle();
SoFontStyle512->setUSE(QString("Style"));
SoText511->setFontStyle(*SoFontStyle512);

SoShape508->setGeometry(*SoText511);

SoAnchor507->addChild(*SoShape508);

SoTransform506->addChild(*SoAnchor507);

SoTransform500->addChild(*SoTransform506);

SoGroup50->addChild(*SoTransform500);

SoViewpoint* SoViewpoint513 = new SoViewpoint();
SoViewpoint513->setDEF(QString("View32"));
SoViewpoint513->setDescription(QString("ArtDeco32"));
SoViewpoint513->setPosition(new float[]{-0.75,-3.75,3.0});
SoGroup50->addChild(*SoViewpoint513);

SoTransform* SoTransform514 = new SoTransform();
SoTransform514->setTranslation(new float[]{-0.75,-3.75,0.0});
SoAnchor* SoAnchor515 = new SoAnchor();
SoAnchor515->setDescription(QString("ArtDeco32 view"));
SoAnchor515->setUrl(new QString[]{QString("#View32")}, 1);
SoShape* SoShape516 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance517 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance518 = new SoProtoInstance();
SoProtoInstance518->setName(QString("ArtDeco32"));
SoVRMLAppearance517->addChild(*SoProtoInstance518);

SoShape516->addChild(*SoVRMLAppearance517);

SoSphere* SoSphere519 = new SoSphere();
SoSphere519->setUSE(QString("Ball"));
SoShape516->setGeometry(*SoSphere519);

SoAnchor515->addChild(*SoShape516);

SoTransform514->addChild(*SoAnchor515);

SoTransform* SoTransform520 = new SoTransform();
SoTransform520->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor521 = new SoAnchor();
SoAnchor521->setDescription(QString("ArtDeco32 view source documentation"));
SoAnchor521->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor521->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32")}, 2);
SoShape* SoShape522 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance523 = new SoVRMLAppearance();
SoMaterial* SoMaterial524 = new SoMaterial();
SoMaterial524->setUSE(QString("TextMat"));
SoVRMLAppearance523->addChild(*SoMaterial524);

SoShape522->addChild(*SoVRMLAppearance523);

SoText* SoText525 = new SoText();
SoText525->setString(new QString[]{QString("ArtDeco32")}, 1);
SoFontStyle* SoFontStyle526 = new SoFontStyle();
SoFontStyle526->setUSE(QString("Style"));
SoText525->setFontStyle(*SoFontStyle526);

SoShape522->setGeometry(*SoText525);

SoAnchor521->addChild(*SoShape522);

SoTransform520->addChild(*SoAnchor521);

SoTransform514->addChild(*SoTransform520);

SoGroup50->addChild(*SoTransform514);

SoViewpoint* SoViewpoint527 = new SoViewpoint();
SoViewpoint527->setDEF(QString("View33"));
SoViewpoint527->setDescription(QString("ArtDeco33"));
SoViewpoint527->setPosition(new float[]{0.75,-3.75,3.0});
SoGroup50->addChild(*SoViewpoint527);

SoTransform* SoTransform528 = new SoTransform();
SoTransform528->setTranslation(new float[]{0.75,-3.75,0.0});
SoAnchor* SoAnchor529 = new SoAnchor();
SoAnchor529->setDescription(QString("ArtDeco33 view"));
SoAnchor529->setUrl(new QString[]{QString("#View33")}, 1);
SoShape* SoShape530 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance531 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance532 = new SoProtoInstance();
SoProtoInstance532->setName(QString("ArtDeco33"));
SoVRMLAppearance531->addChild(*SoProtoInstance532);

SoShape530->addChild(*SoVRMLAppearance531);

SoSphere* SoSphere533 = new SoSphere();
SoSphere533->setUSE(QString("Ball"));
SoShape530->setGeometry(*SoSphere533);

SoAnchor529->addChild(*SoShape530);

SoTransform528->addChild(*SoAnchor529);

SoTransform* SoTransform534 = new SoTransform();
SoTransform534->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor535 = new SoAnchor();
SoAnchor535->setDescription(QString("ArtDeco33 view source documentation"));
SoAnchor535->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor535->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33")}, 2);
SoShape* SoShape536 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance537 = new SoVRMLAppearance();
SoMaterial* SoMaterial538 = new SoMaterial();
SoMaterial538->setUSE(QString("TextMat"));
SoVRMLAppearance537->addChild(*SoMaterial538);

SoShape536->addChild(*SoVRMLAppearance537);

SoText* SoText539 = new SoText();
SoText539->setString(new QString[]{QString("ArtDeco33")}, 1);
SoFontStyle* SoFontStyle540 = new SoFontStyle();
SoFontStyle540->setUSE(QString("Style"));
SoText539->setFontStyle(*SoFontStyle540);

SoShape536->setGeometry(*SoText539);

SoAnchor535->addChild(*SoShape536);

SoTransform534->addChild(*SoAnchor535);

SoTransform528->addChild(*SoTransform534);

SoGroup50->addChild(*SoTransform528);

SoViewpoint* SoViewpoint541 = new SoViewpoint();
SoViewpoint541->setDEF(QString("View34"));
SoViewpoint541->setDescription(QString("ArtDeco34"));
SoViewpoint541->setPosition(new float[]{2.25,-3.75,3.0});
SoGroup50->addChild(*SoViewpoint541);

SoTransform* SoTransform542 = new SoTransform();
SoTransform542->setTranslation(new float[]{2.25,-3.75,0.0});
SoAnchor* SoAnchor543 = new SoAnchor();
SoAnchor543->setDescription(QString("ArtDeco34 view"));
SoAnchor543->setUrl(new QString[]{QString("#View34")}, 1);
SoShape* SoShape544 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance545 = new SoVRMLAppearance();
SoProtoInstance* SoProtoInstance546 = new SoProtoInstance();
SoProtoInstance546->setName(QString("ArtDeco34"));
SoVRMLAppearance545->addChild(*SoProtoInstance546);

SoShape544->addChild(*SoVRMLAppearance545);

SoSphere* SoSphere547 = new SoSphere();
SoSphere547->setUSE(QString("Ball"));
SoShape544->setGeometry(*SoSphere547);

SoAnchor543->addChild(*SoShape544);

SoTransform542->addChild(*SoAnchor543);

SoTransform* SoTransform548 = new SoTransform();
SoTransform548->setTranslation(new float[]{0.0,0.3,0.5});
SoAnchor* SoAnchor549 = new SoAnchor();
SoAnchor549->setDescription(QString("ArtDeco34 view source documentation"));
SoAnchor549->setParameter(new QString[]{QString("target=_source")}, 1);
SoAnchor549->setUrl(new QString[]{QString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34"), QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34")}, 2);
SoShape* SoShape550 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance551 = new SoVRMLAppearance();
SoMaterial* SoMaterial552 = new SoMaterial();
SoMaterial552->setUSE(QString("TextMat"));
SoVRMLAppearance551->addChild(*SoMaterial552);

SoShape550->addChild(*SoVRMLAppearance551);

SoText* SoText553 = new SoText();
SoText553->setString(new QString[]{QString("ArtDeco34")}, 1);
SoFontStyle* SoFontStyle554 = new SoFontStyle();
SoFontStyle554->setUSE(QString("Style"));
SoText553->setFontStyle(*SoFontStyle554);

SoShape550->setGeometry(*SoText553);

SoAnchor549->addChild(*SoShape550);

SoTransform548->addChild(*SoAnchor549);

SoTransform542->addChild(*SoTransform548);

SoGroup50->addChild(*SoTransform542);

SoNode13->addChild(*SoGroup50);

SoROUTE* SoROUTE555 = new SoROUTE();
SoROUTE555->setFromField(QString("fraction_changed"));
SoROUTE555->setFromNode(QString("Close_Time"));
SoROUTE555->setToField(QString("set_fraction"));
SoROUTE555->setToNode(QString("Close_Mover"));
SoNode13->addChild(*SoROUTE555);

SoROUTE* SoROUTE556 = new SoROUTE();
SoROUTE556->setFromField(QString("value_changed"));
SoROUTE556->setFromNode(QString("Close_Mover"));
SoROUTE556->setToField(QString("set_translation"));
SoROUTE556->setToNode(QString("Close_travel"));
SoNode13->addChild(*SoROUTE556);

SoSceneManager0->setSceneGraph(*SoNode13);

return 0;
}

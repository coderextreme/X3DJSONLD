
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
SoSceneManager0->setVersion(QString("4.0"));
Sohead* Sohead1 = new Sohead();
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("ArchHalf.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Create a half arch with parameters clearSpanWidth=4; riseHeight=2; depth=3; topAbutmentHeight=0.5; pierWidth=0.5; pierHeight=1. Parameter clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width. Modify them with Transform scale or by editing the IndexedFileSet node. See the reference file ArchModelingDiagrams.pdf and the ArchScript_more_readable.js script to find further information."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("Michele Foti, Don Brutzman"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("created"));
Someta5->setContent(QString("15 December 2014"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("modified"));
Someta6->setContent(QString("20 October 2019"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("reference"));
Someta7->setContent(QString("ArchModelingDiagrams.pdf"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("reference"));
Someta8->setContent(QString("https://en.wikipedia.org/wiki/Arch"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("identifier"));
Someta9->setContent(QString("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/Buildings/ArchHalf.x3d"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("generator"));
Someta10->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("license"));
Someta11->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta11);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode12 = new SoNode();
SoWorldInfo* SoWorldInfo13 = new SoWorldInfo();
SoWorldInfo13->setTitle(QString("ArchHalf.x3d"));
SoNode12->addChild(*SoWorldInfo13);

SoShape* SoShape14 = new SoShape();
SoShape14->setDEF(QString("Arch"));
//note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly
SoIndexedFaceSet* SoIndexedFaceSet15 = new SoIndexedFaceSet();
SoIndexedFaceSet15->setDEF(QString("ArchIndex"));
SoIndexedFaceSet15->setConvex(false);
SoIndexedFaceSet15->setCoordIndex(new int32_t[]{31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,144,-1,149,31,144,147,-1,134,147,144,145,-1,145,144,62,141,-1,132,133,141,62,-1,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,143,-1,148,94,143,146,-1,142,128,146,143,-1,140,125,143,142,-1,125,126,127,140,-1,31,94,95,32,-1,32,95,96,33,-1,33,96,97,34,-1,34,97,98,35,-1,35,98,99,36,-1,36,99,100,37,-1,37,100,101,38,-1,38,101,102,39,-1,39,102,103,40,-1,40,103,104,41,-1,41,104,105,42,-1,42,105,106,43,-1,43,106,107,44,-1,44,107,108,45,-1,45,108,109,46,-1,46,109,110,47,-1,47,110,111,48,-1,48,111,112,49,-1,49,112,113,50,-1,50,113,114,51,-1,51,114,115,52,-1,52,115,116,53,-1,53,116,117,54,-1,54,117,118,55,-1,55,118,119,56,-1,56,119,120,57,-1,57,120,121,58,-1,58,121,122,59,-1,59,122,123,60,-1,60,123,124,61,-1,61,124,125,62,-1,148,149,147,146,-1,146,147,134,128,-1,128,134,145,142,-1,140,141,145,142,-1,127,133,141,140,-1,127,126,132,133,-1,126,132,62,125,-1,31,94,143,144,-1,142,143,144,145,-1,140,125,62,141,-1,31,94,148,149,-1}, 318);
SoIndexedFaceSet15->setSolid(false);
SoCoordinate* SoCoordinate16 = new SoCoordinate();
SoCoordinate16->setDEF(QString("ArchChord"));
SoCoordinate16->setPoint(new float[]{2.0,0.0,0.0,1.997498435543818,0.1,0.0,1.98997487421324,0.2,0.0,1.977371993328519,0.3,0.0,1.9595917942265424,0.4,0.0,1.9364916731037085,0.5,0.0,1.907878402833891,0.6,0.0,1.8734993995195193,0.7,0.0,1.833030277982336,0.8,0.0,1.786057109949175,0.9,0.0,1.7320508075688774,1.0,0.0,1.6703293088490068,1.1,0.0,1.6,1.2,0.0,1.5198684153570663,1.3,0.0,1.42828568570857,1.4,0.0,1.3228756555322954,1.5,0.0,1.2,1.6,0.0,1.0535653752852738,1.7,0.0,0.9020947843768965,1.785,0.0,0.7599342076785331,1.85,0.0,0.6244997998398398,1.9,0.0,0.5425633603552678,1.925,0.0,0.4444097208657794,1.95,0.0,0.36181625170796194,1.967,0.0,0.2821347195933173,1.98,0.0,0.19974984355438344,1.99,0.0,0.16718552568927703,1.993,0.0,0.14133294025102577,1.995,0.0,0.10950342460398416,1.997,0.0,0.08942035562443253,1.998,0.0,0.06323764701505419,1.999,0.0,0.0,2.0,0.0,-0.06323764701505419,1.999,0.0,-0.08942035562443253,1.998,0.0,-0.10950342460398416,1.997,0.0,-0.14133294025102577,1.995,0.0,-0.16718552568927703,1.993,0.0,-0.19974984355438344,1.99,0.0,-0.2821347195933173,1.98,0.0,-0.36181625170796194,1.967,0.0,-0.4444097208657794,1.95,0.0,-0.5425633603552678,1.925,0.0,-0.6244997998398398,1.9,0.0,-0.7599342076785331,1.85,0.0,-0.9020947843768965,1.785,0.0,-1.0535653752852738,1.7,0.0,-1.2,1.6,0.0,-1.3228756555322954,1.5,0.0,-1.42828568570857,1.4,0.0,-1.5198684153570663,1.3,0.0,-1.6,1.2,0.0,-1.6703293088490068,1.1,0.0,-1.7320508075688774,1.0,0.0,-1.786057109949175,0.9,0.0,-1.833030277982336,0.8,0.0,-1.8734993995195193,0.7,0.0,-1.907878402833891,0.6,0.0,-1.9364916731037085,0.5,0.0,-1.9595917942265424,0.4,0.0,-1.977371993328519,0.3,0.0,-1.98997487421324,0.2,0.0,-1.997498435543818,0.1,0.0,-2.0,0.0,0.0,2.0,0.0,3.0,1.997498435543818,0.1,3.0,1.98997487421324,0.2,3.0,1.977371993328519,0.3,3.0,1.9595917942265424,0.4,3.0,1.9364916731037085,0.5,3.0,1.907878402833891,0.6,3.0,1.8734993995195193,0.7,3.0,1.833030277982336,0.8,3.0,1.786057109949175,0.9,3.0,1.7320508075688774,1.0,3.0,1.6703293088490068,1.1,3.0,1.6,1.2,3.0,1.5198684153570663,1.3,3.0,1.42828568570857,1.4,3.0,1.3228756555322954,1.5,3.0,1.2,1.6,3.0,1.0535653752852738,1.7,3.0,0.9020947843768965,1.785,3.0,0.7599342076785331,1.85,3.0,0.6244997998398398,1.9,3.0,0.5425633603552678,1.925,3.0,0.4444097208657794,1.95,3.0,0.36181625170796194,1.967,3.0,0.2821347195933173,1.98,3.0,0.19974984355438344,1.99,3.0,0.16718552568927703,1.993,3.0,0.14133294025102577,1.995,3.0,0.10950342460398416,1.997,3.0,0.08942035562443253,1.998,3.0,0.06323764701505419,1.999,3.0,0.0,2.0,3.0,-0.06323764701505419,1.999,3.0,-0.08942035562443253,1.998,3.0,-0.10950342460398416,1.997,3.0,-0.14133294025102577,1.995,3.0,-0.16718552568927703,1.993,3.0,-0.19974984355438344,1.99,3.0,-0.2821347195933173,1.98,3.0,-0.36181625170796194,1.967,3.0,-0.4444097208657794,1.95,3.0,-0.5425633603552678,1.925,3.0,-0.6244997998398398,1.9,3.0,-0.7599342076785331,1.85,3.0,-0.9020947843768965,1.785,3.0,-1.0535653752852738,1.7,3.0,-1.2,1.6,3.0,-1.3228756555322954,1.5,3.0,-1.42828568570857,1.4,3.0,-1.5198684153570663,1.3,3.0,-1.6,1.2,3.0,-1.6703293088490068,1.1,3.0,-1.7320508075688774,1.0,3.0,-1.786057109949175,0.9,3.0,-1.833030277982336,0.8,3.0,-1.8734993995195193,0.7,3.0,-1.907878402833891,0.6,3.0,-1.9364916731037085,0.5,3.0,-1.9595917942265424,0.4,3.0,-1.977371993328519,0.3,3.0,-1.98997487421324,0.2,3.0,-1.997498435543818,0.1,3.0,-2.0,0.0,3.0,-2.0,-1.0,3.0,-2.5,-1.0,3.0,-2.5,2.5,3.0,2.5,2.5,3.0,2.5,-1.0,3.0,2.0,-1.0,3.0,-2.0,-1.0,0.0,-2.5,-1.0,0.0,-2.5,2.5,0.0,2.5,2.5,0.0,2.5,-1.0,0.0,2.0,-1.0,0.0,2.5,0.0,3.0,2.5,0.0,0.0,-2.5,0.0,3.0,-2.5,0.0,0.0,-2.5,2.0,3.0,-2.0,2.0,3.0,-2.0,2.0,0.0,-2.5,2.0,0.0,-2.0,2.5,3.0,-2.0,2.5,0.0,0.0,2.5,3.0,0.0,2.5,0.0,2.0,2.0,3.0,2.5,2.0,3.0,2.5,2.0,0.0,2.0,2.0,0.0,2.0,2.5,3.0,2.0,2.5,0.0}, 468);
SoIndexedFaceSet15->setCoord(*SoCoordinate16);

SoShape14->setGeometry(*SoIndexedFaceSet15);

SoVRMLAppearance* SoVRMLAppearance17 = new SoVRMLAppearance();
SoMaterial* SoMaterial18 = new SoMaterial();
SoMaterial18->setDEF(QString("MaterialNode"));
SoMaterial18->setDiffuseColor(new float[]{1.0,0.75,0.25});
SoVRMLAppearance17->addChild(*SoMaterial18);

SoShape14->addChild(*SoVRMLAppearance17);

SoNode12->addChild(*SoShape14);

SoSceneManager0->setSceneGraph(*SoNode12);

return 0;
}

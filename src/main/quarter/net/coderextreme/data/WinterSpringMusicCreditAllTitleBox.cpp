
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
Someta2->setContent(QString("WinterAndSpringMusicCreditAllTitleBox.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Credits for scene musics clips."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("Carol McDonald"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("translator"));
Someta5->setContent(QString("Joe Williams and Don Brutzman"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("created"));
Someta6->setContent(QString("26 June 2023"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("modified"));
Someta7->setContent(QString("Mon, 15 Sep 2025 05:21:02 GMT"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("reference"));
Someta8->setContent(QString("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/Flower.Set.x3d"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("identifier"));
Someta9->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringMusicCreditAllTitleBox.x3d"));
Sohead1->addMeta(*Someta9);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode10 = new SoNode();
SoWorldInfo* SoWorldInfo11 = new SoWorldInfo();
SoWorldInfo11->setTitle(QString("WinterAndSpringMusicCreditAllTitleBox.x3d"));
SoNode10->addChild(*SoWorldInfo11);

SoViewpoint* SoViewpoint12 = new SoViewpoint();
SoViewpoint12->setDEF(QString("WSAuthorsAllTitleView"));
SoViewpoint12->setDescription(QString("Look at Music Credit title"));
SoViewpoint12->setPosition(new float[]{10.0,11.0,-15.0});
SoViewpoint12->setOrientation(new float[]{-0.15,0.0,0.0,0.2});
SoNode10->addChild(*SoViewpoint12);

SoTransform* SoTransform13 = new SoTransform();
SoTransform13->setDEF(QString("WSMusicCreditAllTitle"));
SoTransform13->setTranslation(new float[]{10.0,10.0,-20.0});
SoShape* SoShape14 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance15 = new SoVRMLAppearance();
SoMaterial* SoMaterial16 = new SoMaterial();
SoVRMLAppearance15->addChild(*SoMaterial16);

SoImageTexture* SoImageTexture17 = new SoImageTexture();
SoImageTexture17->setUrl(new QString[]{QString("images/WSMusicCreditAll.png"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/images/WSMusicCreditAll.png")}, 2);
SoVRMLAppearance15->addChild(*SoImageTexture17);

SoShape14->addChild(*SoVRMLAppearance15);

SoBox* SoBox18 = new SoBox();
SoBox18->setSize(new float[]{4.0,3.0,0.25});
SoShape14->setGeometry(*SoBox18);

SoTransform13->addChild(*SoShape14);

SoNode10->addChild(*SoTransform13);

SoSceneManager0->setSceneGraph(*SoNode10);

return 0;
}

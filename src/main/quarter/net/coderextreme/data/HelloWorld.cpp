
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
//Alternate encodings: VRML97, X3D ClassicVRML Encoding, X3D Compressed Binary Encoding (CBE), X3DOM, JSON
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("HelloWorld.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Simple X3D model example: Hello World!"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("created"));
Someta4->setContent(QString("30 October 2000"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("modified"));
Someta5->setContent(QString("20 October 2019"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("creator"));
Someta6->setContent(QString("Don Brutzman"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("Image"));
Someta7->setContent(QString("HelloWorld.tall.png"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("reference"));
Someta8->setContent(QString("https://en.wikipedia.org/wiki/Hello_world"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("reference"));
Someta9->setContent(QString("https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("https://en.wikipedia.org/wiki/\"Hello,_World!\"_program"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("reference"));
Someta11->setContent(QString("https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("reference"));
Someta12->setContent(QString("https://www.HelloWorldExample.net"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("reference"));
Someta13->setContent(QString("https://www.web3d.org"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("reference"));
Someta14->setContent(QString("https://www.web3d.org/realtime-3d/news/internationalization-x3d"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("reference"));
Someta15->setContent(QString("https://www.web3d.org/x3d/content/examples/HelloWorld.x3d"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("reference"));
Someta16->setContent(QString("https://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorld.x3d"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("identifier"));
Someta17->setContent(QString("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("license"));
Someta18->setContent(QString("https://www.web3d.org/x3d/content/examples/license.html"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("generator"));
Someta19->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta19);

Someta* Someta20 = new Someta();
Someta20->setName(QString("reference"));
Someta20->setContent(QString("HelloWorld.wrl"));
Sohead1->addMeta(*Someta20);

Someta* Someta21 = new Someta();
Someta21->setName(QString("reference"));
Someta21->setContent(QString("HelloWorld.x3dv"));
Sohead1->addMeta(*Someta21);

Someta* Someta22 = new Someta();
Someta22->setName(QString("reference"));
Someta22->setContent(QString("HelloWorld.x3db"));
Sohead1->addMeta(*Someta22);

Someta* Someta23 = new Someta();
Someta23->setName(QString("reference"));
Someta23->setContent(QString("HelloWorld.xhtml"));
Sohead1->addMeta(*Someta23);

Someta* Someta24 = new Someta();
Someta24->setName(QString("reference"));
Someta24->setContent(QString("HelloWorld.json"));
Sohead1->addMeta(*Someta24);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode25 = new SoNode();
//Example scene to illustrate X3D nodes and fields (XML elements and attributes)
SoWorldInfo* SoWorldInfo26 = new SoWorldInfo();
SoWorldInfo26->setInfo(new QString[]{QString("Example scene to illustrate a simple X3D model")}, 1);
SoWorldInfo26->setTitle(QString("Hello World!"));
SoNode25->addChild(*SoWorldInfo26);

SoGroup* SoGroup27 = new SoGroup();
SoViewpoint* SoViewpoint28 = new SoViewpoint();
SoViewpoint28->setDEF(QString("ViewUpClose"));
SoViewpoint28->setCenterOfRotation(new float[]{0.0,-1.0,0.0});
SoViewpoint28->setDescription(QString("Hello world!"));
SoViewpoint28->setPosition(new float[]{0.0,-1.0,7.0});
SoGroup27->addChild(*SoViewpoint28);

SoTransform* SoTransform29 = new SoTransform();
SoTransform29->setRotation(new float[]{0.0,1.0,0.0,3.0});
SoShape* SoShape30 = new SoShape();
SoSphere* SoSphere31 = new SoSphere();
SoShape30->setGeometry(*SoSphere31);

SoVRMLAppearance* SoVRMLAppearance32 = new SoVRMLAppearance();
SoMaterial* SoMaterial33 = new SoMaterial();
SoMaterial33->setDEF(QString("MaterialLightBlue"));
SoMaterial33->setDiffuseColor(new float[]{0.1,0.5,1.0});
SoVRMLAppearance32->addChild(*SoMaterial33);

SoImageTexture* SoImageTexture34 = new SoImageTexture();
SoImageTexture34->setDEF(QString("ImageCloudlessEarth"));
SoImageTexture34->setUrl(new QString[]{QString("earth-topo.png"), QString("earth-topo.jpg"), QString("earth-topo-small.gif"), QString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png"), QString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg"), QString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif")}, 6);
SoVRMLAppearance32->addChild(*SoImageTexture34);

SoShape30->addChild(*SoVRMLAppearance32);

SoTransform29->addChild(*SoShape30);

SoGroup27->addChild(*SoTransform29);

SoTransform* SoTransform35 = new SoTransform();
SoTransform35->setTranslation(new float[]{0.0,-2.0,0.0});
SoShape* SoShape36 = new SoShape();
SoText* SoText37 = new SoText();
SoText37->setDEF(QString("TextMessage"));
SoText37->setString(new QString[]{QString("Hello"), QString("world!")}, 2);
SoFontStyle* SoFontStyle38 = new SoFontStyle();
SoFontStyle38->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText37->setFontStyle(*SoFontStyle38);

SoShape36->setGeometry(*SoText37);

SoVRMLAppearance* SoVRMLAppearance39 = new SoVRMLAppearance();
SoMaterial* SoMaterial40 = new SoMaterial();
SoMaterial40->setUSE(QString("MaterialLightBlue"));
SoVRMLAppearance39->addChild(*SoMaterial40);

SoShape36->addChild(*SoVRMLAppearance39);

SoTransform35->addChild(*SoShape36);

SoGroup27->addChild(*SoTransform35);

SoNode25->addChild(*SoGroup27);

SoSceneManager0->setSceneGraph(*SoNode25);

return 0;
}

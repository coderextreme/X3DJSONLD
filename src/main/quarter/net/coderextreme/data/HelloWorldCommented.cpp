
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
Someta2->setContent(QString("HelloWorldCommented.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Numerous comments added to simple X3D scene example for testing JSON encoding alternatives."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("created"));
Someta4->setContent(QString("19 December 2015"));
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
Someta7->setName(QString("info"));
Someta7->setContent(QString("HelloWorldCommented.json is most current, HelloWorldCommentedOriginalEncoding.json and HelloWorldCommentedAlternativeEncoding.json were experimental."));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("reference"));
Someta8->setContent(QString("HelloWorldCommented.json"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("reference"));
Someta9->setContent(QString("HelloWorldCommentedOriginalEncoding.json"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("HelloWorldCommentedAlternativeEncoding.json"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("identifier"));
Someta11->setContent(QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldCommented.x3d"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("license"));
Someta12->setContent(QString("https://www.web3d.org/x3d/content/examples/license.html"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("generator"));
Someta13->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta13);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode14 = new SoNode();
//Example scene to illustrate comments interspersed among X3D nodes and fields (XML elements and attributes)
//WorldInfo begin
SoWorldInfo* SoWorldInfo15 = new SoWorldInfo();
SoWorldInfo15->setTitle(QString("Hello world!"));
SoNode14->addChild(*SoWorldInfo15);

//WorldInfo complete, Group begin
SoGroup* SoGroup16 = new SoGroup();
//Viewpoint begin
SoViewpoint* SoViewpoint17 = new SoViewpoint();
SoViewpoint17->setDEF(QString("ViewUpClose"));
SoViewpoint17->setCenterOfRotation(new float[]{0.0,-1.0,0.0});
SoViewpoint17->setDescription(QString("Hello world!"));
SoViewpoint17->setPosition(new float[]{0.0,-1.0,7.0});
SoGroup16->addChild(*SoViewpoint17);

//Viewpoint complete, Transform begin
SoTransform* SoTransform18 = new SoTransform();
SoTransform18->setRotation(new float[]{0.0,1.0,0.0,3.0});
//Shape begin
SoShape* SoShape19 = new SoShape();
//Sphere begin
//Sphere complete, Appearance begin
//Appearance complete
SoSphere* SoSphere20 = new SoSphere();
SoShape19->setGeometry(*SoSphere20);

SoVRMLAppearance* SoVRMLAppearance21 = new SoVRMLAppearance();
//Material begin
//Material complete, ImageTexture begin
//ImageTexture complete
SoMaterial* SoMaterial22 = new SoMaterial();
SoMaterial22->setDEF(QString("MaterialLightBlue"));
SoMaterial22->setDiffuseColor(new float[]{0.1,0.5,1.0});
SoVRMLAppearance21->addChild(*SoMaterial22);

SoImageTexture* SoImageTexture23 = new SoImageTexture();
SoImageTexture23->setDEF(QString("ImageCloudlessEarth"));
SoImageTexture23->setUrl(new QString[]{QString("earth-topo.png"), QString("earth-topo.jpg"), QString("earth-topo-small.gif"), QString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png"), QString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg"), QString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif")}, 6);
SoVRMLAppearance21->addChild(*SoImageTexture23);

SoShape19->addChild(*SoVRMLAppearance21);

SoTransform18->addChild(*SoShape19);

//Shape complete
SoGroup16->addChild(*SoTransform18);

//Transform complete, Transform begin
SoTransform* SoTransform24 = new SoTransform();
SoTransform24->setTranslation(new float[]{0.0,-2.0,0.0});
//Shape begin
SoShape* SoShape25 = new SoShape();
//Text begin
//Text complete, Appearance begin
//Appearance complete
SoText* SoText26 = new SoText();
SoText26->setDEF(QString("TextMessage"));
SoText26->setString(new QString[]{QString("Hello"), QString("world!")}, 2);
//FontStyle begin
//FontStyle complete
SoFontStyle* SoFontStyle27 = new SoFontStyle();
SoFontStyle27->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText26->setFontStyle(*SoFontStyle27);

SoShape25->setGeometry(*SoText26);

SoVRMLAppearance* SoVRMLAppearance28 = new SoVRMLAppearance();
//Material begin
//Material complete
SoMaterial* SoMaterial29 = new SoMaterial();
SoMaterial29->setUSE(QString("MaterialLightBlue"));
SoVRMLAppearance28->addChild(*SoMaterial29);

SoShape25->addChild(*SoVRMLAppearance28);

SoTransform24->addChild(*SoShape25);

//Shape complete
SoGroup16->addChild(*SoTransform24);

//Transform complete
SoNode14->addChild(*SoGroup16);

//Group complete
SoSceneManager0->setSceneGraph(*SoNode14);

return 0;
}

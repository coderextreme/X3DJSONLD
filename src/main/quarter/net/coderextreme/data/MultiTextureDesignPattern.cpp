
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
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("MultiTextureDesignPattern.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Design pattern for MultiTexture, MultiTextureCoordinate, MultiTextureTransform node correspondences"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("Don Brutzman"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("created"));
Someta5->setContent(QString("5 March 2011"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("modified"));
Someta6->setContent(QString("29 October 2023"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("TODO"));
Someta7->setContent(QString("X3D schematron rules for quality assurance"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("Image"));
Someta8->setContent(QString("MultiTextureDesignPatternSceneGraph.png"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("subject"));
Someta9->setContent(QString("MultiTexture, MultiTextureCoordinate, MultiTextureTransform"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("https://www.web3d.org/files/specifications/19775-1/V3.2/Part01/components/texturing.html#MultiTexture"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("identifier"));
Someta11->setContent(QString("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/TextureMapping/MultiTextureDesignPattern.x3d"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("reference"));
Someta12->setContent(QString("https://www.web3d.org/x3d/content/examples/X3dResources.html"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("generator"));
Someta13->setContent(QString("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("license"));
Someta14->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta14);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode15 = new SoNode();
//================================
SoWorldInfo* SoWorldInfo16 = new SoWorldInfo();
SoWorldInfo16->setTitle(QString("MultiTextureDesignPattern.x3d"));
SoNode15->addChild(*SoWorldInfo16);

SoBackground* SoBackground17 = new SoBackground();
SoBackground17->setSkyColor(new float[]{0.72549,1.0,0.721569}, 3);
SoNode15->addChild(*SoBackground17);

SoViewpoint* SoViewpoint18 = new SoViewpoint();
SoViewpoint18->setDescription(QString("MultiTexture design pattern"));
SoNode15->addChild(*SoViewpoint18);

SoShape* SoShape19 = new SoShape();
SoText* SoText20 = new SoText();
SoText20->setString(new QString[]{QString("Source shows design pattern for"), QString("MultiTexture, MultiTextureCoordinate,"), QString(" and MultiTextureTransform nodes")}, 3);
SoFontStyle* SoFontStyle21 = new SoFontStyle();
SoFontStyle21->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoFontStyle21->setSize(0.6);
SoText20->setFontStyle(*SoFontStyle21);

SoShape19->setGeometry(*SoText20);

SoVRMLAppearance* SoVRMLAppearance22 = new SoVRMLAppearance();
SoMaterial* SoMaterial23 = new SoMaterial();
SoMaterial23->setDiffuseColor(new float[]{0.2,0.4,0.8});
SoVRMLAppearance22->addChild(*SoMaterial23);

SoShape19->addChild(*SoVRMLAppearance22);

SoNode15->addChild(*SoShape19);

//================================
SoShape* SoShape24 = new SoShape();
//add a single geometry node here
SoIndexedFaceSet* SoIndexedFaceSet25 = new SoIndexedFaceSet();
SoMultiTextureCoordinate* SoMultiTextureCoordinate26 = new SoMultiTextureCoordinate();
//add multiple TextureCoordinate nodes here, match corresponding MultiTexture child texture nodes
SoTextureCoordinate* SoTextureCoordinate27 = new SoTextureCoordinate();
SoTextureCoordinate27->setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
SoMultiTextureCoordinate26->addTexCoord(SoTextureCoordinate27);

SoTextureCoordinate* SoTextureCoordinate28 = new SoTextureCoordinate();
SoTextureCoordinate28->setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
SoMultiTextureCoordinate26->addTexCoord(SoTextureCoordinate28);

SoTextureCoordinate* SoTextureCoordinate29 = new SoTextureCoordinate();
SoTextureCoordinate29->setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
SoMultiTextureCoordinate26->addTexCoord(SoTextureCoordinate29);

SoIndexedFaceSet25->setTexCoord(SoMultiTextureCoordinate26);

SoShape24->setGeometry(*SoIndexedFaceSet25);

SoVRMLAppearance* SoVRMLAppearance30 = new SoVRMLAppearance();
SoMaterial* SoMaterial31 = new SoMaterial();
SoVRMLAppearance30->addChild(*SoMaterial31);

SoMultiTexture* SoMultiTexture32 = new SoMultiTexture();
SoMultiTexture32->setAlpha(0.8);
SoMultiTexture32->setColor(new float[]{0.9,1.0,0.2});
SoMultiTexture32->setFunction(new QString[]{QString("COMPLEMENT"), QString("ALPHAREPLICATE")}, 2);
SoMultiTexture32->setMode(new QString[]{QString("MODULATE"), QString("REPLACE"), QString("BLENDDIFFUSEALPHA")}, 3);
SoMultiTexture32->setSource(new QString[]{QString("DIFFUSE"), QString("SPECULAR"), QString("FACTOR")}, 3);
//add multiple texture nodes here
SoImageTexture* SoImageTexture33 = new SoImageTexture();
SoMultiTexture32->addTexture(SoImageTexture33);

SoMovieTexture* SoMovieTexture34 = new SoMovieTexture();
SoMultiTexture32->addTexture(SoMovieTexture34);

SoPixelTexture* SoPixelTexture35 = new SoPixelTexture();
SoMultiTexture32->addTexture(SoPixelTexture35);

SoVRMLAppearance30->addChild(SoMultiTexture32);

SoMultiTextureTransform* SoMultiTextureTransform36 = new SoMultiTextureTransform();
//add multiple TextureTransform nodes here, match corresponding MultiTexture child texture nodes
SoTextureTransform* SoTextureTransform37 = new SoTextureTransform();
SoMultiTextureTransform36->addTextureTransform(SoTextureTransform37);

SoTextureTransform* SoTextureTransform38 = new SoTextureTransform();
SoMultiTextureTransform36->addTextureTransform(SoTextureTransform38);

SoTextureTransform* SoTextureTransform39 = new SoTextureTransform();
SoMultiTextureTransform36->addTextureTransform(SoTextureTransform39);

SoVRMLAppearance30->setTextureTransform(SoMultiTextureTransform36);

SoShape24->addChild(*SoVRMLAppearance30);

SoNode15->addChild(*SoShape24);

SoSceneManager0->setSceneGraph(*SoNode15);

return 0;
}


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
Socomponent2->setName(QString("Shaders"));
Socomponent2->setLevel(1);
Sohead1->addChild(*Socomponent2);

Socomponent* Socomponent3 = new Socomponent();
Socomponent3->setName(QString("EnvironmentalEffects"));
Socomponent3->setLevel(3);
Sohead1->addChild(*Socomponent3);

Socomponent* Socomponent4 = new Socomponent();
Socomponent4->setName(QString("Rendering"));
Socomponent4->setLevel(1);
Sohead1->addChild(*Socomponent4);

Socomponent* Socomponent5 = new Socomponent();
Socomponent5->setName(QString("Texturing"));
Socomponent5->setLevel(1);
Sohead1->addChild(*Socomponent5);

Socomponent* Socomponent6 = new Socomponent();
Socomponent6->setName(QString("Grouping"));
Socomponent6->setLevel(3);
Sohead1->addChild(*Socomponent6);

Socomponent* Socomponent7 = new Socomponent();
Socomponent7->setName(QString("CubeMapTexturing"));
Socomponent7->setLevel(1);
Sohead1->addChild(*Socomponent7);

Socomponent* Socomponent8 = new Socomponent();
Socomponent8->setName(QString("Core"));
Socomponent8->setLevel(1);
Sohead1->addChild(*Socomponent8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("identifier"));
Someta9->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("title"));
Someta10->setContent(QString("ball.x3d"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("creator"));
Someta11->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("generator"));
Someta12->setContent(QString("manual"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("description"));
Someta13->setContent(QString("a prismatic sphere"));
Sohead1->addMeta(*Someta13);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode14 = new SoNode();
SoWorldInfo* SoWorldInfo15 = new SoWorldInfo();
SoWorldInfo15->setTitle(QString("ball.x3d"));
SoNode14->addChild(*SoWorldInfo15);

SoNavigationInfo* SoNavigationInfo16 = new SoNavigationInfo();
SoNavigationInfo16->setAvatarSize(new float[]{0.25,1.60000002384186,0.75}, 3);
SoNavigationInfo16->setType(new QString[]{QString("ANY"), QString("EXAMINE"), QString("FLY"), QString("LOOKAT")}, 4);
SoNode14->addChild(*SoNavigationInfo16);

SoViewpoint* SoViewpoint17 = new SoViewpoint();
SoViewpoint17->setPosition(new float[]{0.0,0.0,12.0});
SoViewpoint17->setDescription(QString("Tour Views"));
SoNode14->addChild(*SoViewpoint17);

SoBackground* SoBackground18 = new SoBackground();
SoBackground18->setTopUrl(new QString[]{QString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 1);
SoBackground18->setBackUrl(new QString[]{QString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 1);
SoBackground18->setLeftUrl(new QString[]{QString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 1);
SoBackground18->setFrontUrl(new QString[]{QString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 1);
SoBackground18->setRightUrl(new QString[]{QString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 1);
SoBackground18->setBottomUrl(new QString[]{QString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 1);
SoNode14->addChild(*SoBackground18);

SoTransform* SoTransform19 = new SoTransform();
SoShape* SoShape20 = new SoShape();
SoSphere* SoSphere21 = new SoSphere();
SoShape20->setGeometry(*SoSphere21);

SoVRMLAppearance* SoVRMLAppearance22 = new SoVRMLAppearance();
SoMaterial* SoMaterial23 = new SoMaterial();
SoMaterial23->setDiffuseColor(new float[]{0.699999988079071,0.699999988079071,0.699999988079071});
SoMaterial23->setSpecularColor(new float[]{0.5,0.5,0.5});
SoVRMLAppearance22->addChild(*SoMaterial23);

SoComposedShader* SoComposedShader24 = new SoComposedShader();
SoComposedShader24->setLanguage(QString("GLSL"));
Sofield* Sofield25 = new Sofield();
Sofield25->setName(QString("chromaticDispertion"));
Sofield25->setAccessType(QString("initializeOnly"));
Sofield25->setType(QString("SFVec3f"));
Sofield25->setValue(QString("0.980000019073486 1 1.03299999237061"));
SoComposedShader24->addChild(*Sofield25);

Sofield* Sofield26 = new Sofield();
Sofield26->setName(QString("cube"));
Sofield26->setAccessType(QString("initializeOnly"));
Sofield26->setType(QString("SFNode"));
SoComposedCubeMapTexture* SoComposedCubeMapTexture27 = new SoComposedCubeMapTexture();
SoImageTexture* SoImageTexture28 = new SoImageTexture();
SoImageTexture28->setUrl(new QString[]{QString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 1);
SoComposedCubeMapTexture27->setBack(*SoImageTexture28);

SoImageTexture* SoImageTexture29 = new SoImageTexture();
SoImageTexture29->setUrl(new QString[]{QString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 1);
SoComposedCubeMapTexture27->setBottom(*SoImageTexture29);

SoImageTexture* SoImageTexture30 = new SoImageTexture();
SoImageTexture30->setUrl(new QString[]{QString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 1);
SoComposedCubeMapTexture27->setFront(*SoImageTexture30);

SoImageTexture* SoImageTexture31 = new SoImageTexture();
SoImageTexture31->setUrl(new QString[]{QString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 1);
SoComposedCubeMapTexture27->setLeft(*SoImageTexture31);

SoImageTexture* SoImageTexture32 = new SoImageTexture();
SoImageTexture32->setUrl(new QString[]{QString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 1);
SoComposedCubeMapTexture27->setRight(*SoImageTexture32);

SoImageTexture* SoImageTexture33 = new SoImageTexture();
SoImageTexture33->setUrl(new QString[]{QString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 1);
SoComposedCubeMapTexture27->setTop(*SoImageTexture33);

Sofield26->addChild(*SoComposedCubeMapTexture27);

SoComposedShader24->addChild(*Sofield26);

Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("bias"));
Sofield34->setAccessType(QString("initializeOnly"));
Sofield34->setType(QString("SFFloat"));
Sofield34->setValue(QString("0.5"));
SoComposedShader24->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setName(QString("scale"));
Sofield35->setAccessType(QString("initializeOnly"));
Sofield35->setType(QString("SFFloat"));
Sofield35->setValue(QString("0.5"));
SoComposedShader24->addChild(*Sofield35);

Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("power"));
Sofield36->setAccessType(QString("initializeOnly"));
Sofield36->setType(QString("SFFloat"));
Sofield36->setValue(QString("2"));
SoComposedShader24->addChild(*Sofield36);

SoShaderPart* SoShaderPart37 = new SoShaderPart();
SoShaderPart37->setUrl(new QString[]{QString("file:/C:/Users/jcarl/X3DJSONLD/src/main/shaders/castle.vs")}, 1);
SoShaderPart37->setType(QString("VERTEX"));
SoComposedShader24->setParts(*SoShaderPart37);

SoShaderPart* SoShaderPart38 = new SoShaderPart();
SoShaderPart38->setDEF(QString("commonfs"));
SoShaderPart38->setUrl(new QString[]{QString("file:/C:/Users/jcarl/X3DJSONLD/src/main/shaders/castle.fs")}, 1);
SoShaderPart38->setType(QString("FRAGMENT"));
SoComposedShader24->setParts(*SoShaderPart38);

SoVRMLAppearance22->addChild(*SoComposedShader24);

SoShape20->addChild(*SoVRMLAppearance22);

SoTransform19->addChild(*SoShape20);

SoNode14->addChild(*SoTransform19);

SoSceneManager0->setSceneGraph(*SoNode14);

return 0;
}

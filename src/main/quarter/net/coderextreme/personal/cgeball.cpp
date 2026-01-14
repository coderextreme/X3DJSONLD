
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
Socomponent2->setName(QString("Scripting"));
Socomponent2->setLevel(1);
Sohead1->addChild(*Socomponent2);

Socomponent* Socomponent3 = new Socomponent();
Socomponent3->setName(QString("EnvironmentalEffects"));
Socomponent3->setLevel(3);
Sohead1->addChild(*Socomponent3);

Socomponent* Socomponent4 = new Socomponent();
Socomponent4->setName(QString("Texturing"));
Socomponent4->setLevel(1);
Sohead1->addChild(*Socomponent4);

Socomponent* Socomponent5 = new Socomponent();
Socomponent5->setName(QString("Rendering"));
Socomponent5->setLevel(1);
Sohead1->addChild(*Socomponent5);

Socomponent* Socomponent6 = new Socomponent();
Socomponent6->setName(QString("Grouping"));
Socomponent6->setLevel(3);
Sohead1->addChild(*Socomponent6);

Socomponent* Socomponent7 = new Socomponent();
Socomponent7->setName(QString("Core"));
Socomponent7->setLevel(1);
Sohead1->addChild(*Socomponent7);

//component name='Shaders' level='1'></component
//component name='CubeMapTexturing' level='1'></component
Someta* Someta8 = new Someta();
Someta8->setName(QString("title"));
Someta8->setContent(QString("ball.x3d"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("creator"));
Someta9->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("generator"));
Someta10->setContent(QString("manual"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("identifier"));
Someta11->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/personal/ball.x3d"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("description"));
Someta12->setContent(QString("a prismatic sphere"));
Sohead1->addMeta(*Someta12);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode13 = new SoNode();
SoWorldInfo* SoWorldInfo14 = new SoWorldInfo();
SoWorldInfo14->setTitle(QString("ball.x3d"));
SoNode13->addChild(*SoWorldInfo14);

SoNavigationInfo* SoNavigationInfo15 = new SoNavigationInfo();
SoNavigationInfo15->setType(new QString[]{QString("ANY"), QString("EXAMINE"), QString("FLY"), QString("LOOKAT")}, 4);
SoNode13->addChild(*SoNavigationInfo15);

SoViewpoint* SoViewpoint16 = new SoViewpoint();
SoViewpoint16->setDescription(QString("Tour Views"));
SoViewpoint16->setPosition(new float[]{0.0,0.0,12.0});
SoNode13->addChild(*SoViewpoint16);

SoBackground* SoBackground17 = new SoBackground();
SoBackground17->setBackUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoBackground17->setBottomUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoBackground17->setFrontUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoBackground17->setLeftUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoBackground17->setRightUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoBackground17->setTopUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoNode13->addChild(*SoBackground17);

SoTransform* SoTransform18 = new SoTransform();
SoShape* SoShape19 = new SoShape();
SoSphere* SoSphere20 = new SoSphere();
SoShape19->setGeometry(*SoSphere20);

SoVRMLAppearance* SoVRMLAppearance21 = new SoVRMLAppearance();
SoMaterial* SoMaterial22 = new SoMaterial();
SoMaterial22->setDiffuseColor(new float[]{0.7,0.7,0.7});
SoMaterial22->setSpecularColor(new float[]{0.5,0.5,0.5});
SoVRMLAppearance21->addChild(*SoMaterial22);

SoComposedCubeMapTexture* SoComposedCubeMapTexture23 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture23->setDEF(QString("texture"));
SoImageTexture* SoImageTexture24 = new SoImageTexture();
SoImageTexture24->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoComposedCubeMapTexture23->setBack(*SoImageTexture24);

SoImageTexture* SoImageTexture25 = new SoImageTexture();
SoImageTexture25->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoComposedCubeMapTexture23->setBottom(*SoImageTexture25);

SoImageTexture* SoImageTexture26 = new SoImageTexture();
SoImageTexture26->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoComposedCubeMapTexture23->setFront(*SoImageTexture26);

SoImageTexture* SoImageTexture27 = new SoImageTexture();
SoImageTexture27->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoComposedCubeMapTexture23->setLeft(*SoImageTexture27);

SoImageTexture* SoImageTexture28 = new SoImageTexture();
SoImageTexture28->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoComposedCubeMapTexture23->setRight(*SoImageTexture28);

SoImageTexture* SoImageTexture29 = new SoImageTexture();
SoImageTexture29->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoComposedCubeMapTexture23->setTop(*SoImageTexture29);

SoVRMLAppearance21->addChild(*SoComposedCubeMapTexture23);

SoComposedShader* SoComposedShader30 = new SoComposedShader();
SoComposedShader30->setLanguage(QString("GLSL"));
Sofield* Sofield31 = new Sofield();
Sofield31->setName(QString("chromaticDispertion"));
Sofield31->setAccessType(QString("inputOutput"));
Sofield31->setType(QString("SFVec3f"));
Sofield31->setValue(QString("0.98 1 1.033"));
SoComposedShader30->addChild(*Sofield31);

Sofield* Sofield32 = new Sofield();
Sofield32->setName(QString("cube"));
Sofield32->setType(QString("SFNode"));
Sofield32->setAccessType(QString("inputOutput"));
SoComposedCubeMapTexture* SoComposedCubeMapTexture33 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture33->setUSE(QString("texture"));
Sofield32->addChild(*SoComposedCubeMapTexture33);

SoComposedShader30->addChild(*Sofield32);

Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("bias"));
Sofield34->setAccessType(QString("inputOutput"));
Sofield34->setType(QString("SFFloat"));
Sofield34->setValue(QString("0.5"));
SoComposedShader30->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setName(QString("scale"));
Sofield35->setAccessType(QString("inputOutput"));
Sofield35->setType(QString("SFFloat"));
Sofield35->setValue(QString("0.5"));
SoComposedShader30->addChild(*Sofield35);

Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("power"));
Sofield36->setAccessType(QString("inputOutput"));
Sofield36->setType(QString("SFFloat"));
Sofield36->setValue(QString("2"));
SoComposedShader30->addChild(*Sofield36);

SoShaderPart* SoShaderPart37 = new SoShaderPart();
SoShaderPart37->setUrl(new QString[]{QString("../shaders/castle.vs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs")}, 2);
SoShaderPart37->setType(QString("VERTEX"));
SoComposedShader30->setParts(*SoShaderPart37);

SoShaderPart* SoShaderPart38 = new SoShaderPart();
SoShaderPart38->setDEF(QString("commonfs"));
SoShaderPart38->setUrl(new QString[]{QString("../shaders/castle.fs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs")}, 2);
SoShaderPart38->setType(QString("FRAGMENT"));
SoComposedShader30->setParts(*SoShaderPart38);

SoVRMLAppearance21->addChild(*SoComposedShader30);

SoShape19->addChild(*SoVRMLAppearance21);

SoTransform18->addChild(*SoShape19);

SoNode13->addChild(*SoTransform18);

SoSceneManager0->setSceneGraph(*SoNode13);

return 0;
}

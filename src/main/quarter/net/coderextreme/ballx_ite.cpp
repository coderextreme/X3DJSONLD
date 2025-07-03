
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
Someta10->setContent(QString("ballx_ite.x3d"));
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
Someta13->setName(QString("identifier"));
Someta13->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/ballx_ite.x3d"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("description"));
Someta14->setContent(QString("a prismatic sphere"));
Sohead1->addMeta(*Someta14);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode15 = new SoNode();
SoWorldInfo* SoWorldInfo16 = new SoWorldInfo();
SoWorldInfo16->setTitle(QString("ball.x3d"));
SoNode15->addChild(*SoWorldInfo16);

SoNavigationInfo* SoNavigationInfo17 = new SoNavigationInfo();
SoNavigationInfo17->setType(new QString[]{QString("ANY"), QString("EXAMINE"), QString("FLY"), QString("LOOKAT")}, 4);
SoNode15->addChild(*SoNavigationInfo17);

SoViewpoint* SoViewpoint18 = new SoViewpoint();
SoViewpoint18->setDescription(QString("Tour Views"));
SoNode15->addChild(*SoViewpoint18);

SoBackground* SoBackground19 = new SoBackground();
SoBackground19->setBackUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoBackground19->setBottomUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoBackground19->setFrontUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoBackground19->setLeftUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoBackground19->setRightUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoBackground19->setTopUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoNode15->addChild(*SoBackground19);

SoTransform* SoTransform20 = new SoTransform();
SoShape* SoShape21 = new SoShape();
SoSphere* SoSphere22 = new SoSphere();
SoShape21->setGeometry(*SoSphere22);

SoVRMLAppearance* SoVRMLAppearance23 = new SoVRMLAppearance();
SoMaterial* SoMaterial24 = new SoMaterial();
SoMaterial24->setDiffuseColor(new float[]{0.7,0.7,0.7});
SoMaterial24->setSpecularColor(new float[]{0.5,0.5,0.5});
SoVRMLAppearance23->addChild(*SoMaterial24);

SoComposedCubeMapTexture* SoComposedCubeMapTexture25 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture25->setDEF(QString("texture"));
SoImageTexture* SoImageTexture26 = new SoImageTexture();
SoImageTexture26->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoComposedCubeMapTexture25->setBack(*SoImageTexture26);

SoImageTexture* SoImageTexture27 = new SoImageTexture();
SoImageTexture27->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoComposedCubeMapTexture25->setBottom(*SoImageTexture27);

SoImageTexture* SoImageTexture28 = new SoImageTexture();
SoImageTexture28->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoComposedCubeMapTexture25->setFront(*SoImageTexture28);

SoImageTexture* SoImageTexture29 = new SoImageTexture();
SoImageTexture29->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoComposedCubeMapTexture25->setLeft(*SoImageTexture29);

SoImageTexture* SoImageTexture30 = new SoImageTexture();
SoImageTexture30->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoComposedCubeMapTexture25->setRight(*SoImageTexture30);

SoImageTexture* SoImageTexture31 = new SoImageTexture();
SoImageTexture31->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoComposedCubeMapTexture25->setTop(*SoImageTexture31);

SoVRMLAppearance23->addChild(*SoComposedCubeMapTexture25);

SoComposedShader* SoComposedShader32 = new SoComposedShader();
SoComposedShader32->setLanguage(QString("GLSL"));
Sofield* Sofield33 = new Sofield();
Sofield33->setName(QString("chromaticDispertion"));
Sofield33->setAccessType(QString("initializeOnly"));
Sofield33->setType(QString("SFVec3f"));
Sofield33->setValue(QString("0.98 1 1.033"));
SoComposedShader32->addChild(*Sofield33);

Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("cube"));
Sofield34->setType(QString("SFNode"));
Sofield34->setAccessType(QString("initializeOnly"));
SoComposedCubeMapTexture* SoComposedCubeMapTexture35 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture35->setUSE(QString("texture"));
Sofield34->addChild(*SoComposedCubeMapTexture35);

SoComposedShader32->addChild(*Sofield34);

Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("bias"));
Sofield36->setAccessType(QString("initializeOnly"));
Sofield36->setType(QString("SFFloat"));
Sofield36->setValue(QString("0.5"));
SoComposedShader32->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setName(QString("scale"));
Sofield37->setAccessType(QString("initializeOnly"));
Sofield37->setType(QString("SFFloat"));
Sofield37->setValue(QString("0.5"));
SoComposedShader32->addChild(*Sofield37);

Sofield* Sofield38 = new Sofield();
Sofield38->setName(QString("power"));
Sofield38->setAccessType(QString("initializeOnly"));
Sofield38->setType(QString("SFFloat"));
Sofield38->setValue(QString("2"));
SoComposedShader32->addChild(*Sofield38);

SoShaderPart* SoShaderPart39 = new SoShaderPart();
SoShaderPart39->setUrl(new QString[]{QString("../shaders/x_ite.vs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs")}, 2);
SoShaderPart39->setType(QString("VERTEX"));
SoComposedShader32->setParts(*SoShaderPart39);

SoShaderPart* SoShaderPart40 = new SoShaderPart();
SoShaderPart40->setUrl(new QString[]{QString("../shaders/x_itebubbles.fs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs")}, 2);
SoShaderPart40->setType(QString("FRAGMENT"));
SoComposedShader32->setParts(*SoShaderPart40);

SoVRMLAppearance23->addChild(*SoComposedShader32);

SoShape21->addChild(*SoVRMLAppearance23);

SoTransform20->addChild(*SoShape21);

SoNode15->addChild(*SoTransform20);

SoSceneManager0->setSceneGraph(*SoNode15);

return 0;
}

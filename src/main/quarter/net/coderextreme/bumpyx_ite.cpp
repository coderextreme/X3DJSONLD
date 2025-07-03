
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
SoSceneManager0->setProfile(QString("Full"));
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

//<component name='Shape' level='4'></component>
Someta* Someta10 = new Someta();
Someta10->setName(QString("title"));
Someta10->setContent(QString("bumpyx_ite.x3d"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("creator"));
Someta11->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("description"));
Someta12->setContent(QString("A flower"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("generator"));
Someta13->setContent(QString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("identifier"));
Someta14->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/bumpyx_ite.x3d"));
Sohead1->addMeta(*Someta14);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode15 = new SoNode();
SoWorldInfo* SoWorldInfo16 = new SoWorldInfo();
SoWorldInfo16->setTitle(QString("bumpyx_ite.x3d"));
SoNode15->addChild(*SoWorldInfo16);

SoNavigationInfo* SoNavigationInfo17 = new SoNavigationInfo();
SoNavigationInfo17->setType(new QString[]{QString("ANY"), QString("EXAMINE"), QString("FLY"), QString("LOOKAT")}, 4);
SoNode15->addChild(*SoNavigationInfo17);

SoViewpoint* SoViewpoint18 = new SoViewpoint();
SoViewpoint18->setPosition(new float[]{0.0,0.0,40.0});
SoViewpoint18->setDescription(QString("Transparent rose"));
SoNode15->addChild(*SoViewpoint18);

//Images courtesy of Paul Debevec's Light Probe Image Gallery
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
SoSphere22->setRadius(40);
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
SoComposedShader32->setDEF(QString("x_iteShader"));
SoComposedShader32->setLanguage(QString("GLSL"));
Sofield* Sofield33 = new Sofield();
Sofield33->setName(QString("chromaticDispertion"));
Sofield33->setAccessType(QString("inputOnly"));
Sofield33->setType(QString("SFVec3f"));
Sofield33->setValue(QString("0.98 1 1.033"));
SoComposedShader32->addChild(*Sofield33);

Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("cube"));
Sofield34->setType(QString("SFNode"));
Sofield34->setAccessType(QString("inputOnly"));
SoComposedCubeMapTexture* SoComposedCubeMapTexture35 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture35->setUSE(QString("texture"));
Sofield34->addChild(*SoComposedCubeMapTexture35);

SoComposedShader32->addChild(*Sofield34);

Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("bias"));
Sofield36->setType(QString("SFFloat"));
Sofield36->setAccessType(QString("inputOnly"));
Sofield36->setValue(QString("0.5"));
SoComposedShader32->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setName(QString("scale"));
Sofield37->setType(QString("SFFloat"));
Sofield37->setAccessType(QString("inputOnly"));
Sofield37->setValue(QString("0.5"));
SoComposedShader32->addChild(*Sofield37);

Sofield* Sofield38 = new Sofield();
Sofield38->setName(QString("power"));
Sofield38->setType(QString("SFFloat"));
Sofield38->setAccessType(QString("inputOnly"));
Sofield38->setValue(QString("2"));
SoComposedShader32->addChild(*Sofield38);

Sofield* Sofield39 = new Sofield();
Sofield39->setName(QString("a"));
Sofield39->setType(QString("SFFloat"));
Sofield39->setAccessType(QString("inputOutput"));
Sofield39->setValue(QString("15"));
SoComposedShader32->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setName(QString("b"));
Sofield40->setType(QString("SFFloat"));
Sofield40->setAccessType(QString("inputOutput"));
Sofield40->setValue(QString("5"));
SoComposedShader32->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setName(QString("c"));
Sofield41->setType(QString("SFFloat"));
Sofield41->setAccessType(QString("inputOutput"));
Sofield41->setValue(QString("5"));
SoComposedShader32->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setName(QString("d"));
Sofield42->setType(QString("SFFloat"));
Sofield42->setAccessType(QString("inputOutput"));
Sofield42->setValue(QString("5"));
SoComposedShader32->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setName(QString("tdelta"));
Sofield43->setType(QString("SFFloat"));
Sofield43->setAccessType(QString("inputOutput"));
Sofield43->setValue(QString("0"));
SoComposedShader32->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("pdelta"));
Sofield44->setType(QString("SFFloat"));
Sofield44->setAccessType(QString("inputOutput"));
Sofield44->setValue(QString("0"));
SoComposedShader32->addChild(*Sofield44);

SoShaderPart* SoShaderPart45 = new SoShaderPart();
SoShaderPart45->setUrl(new QString[]{QString("../shaders/x_ite_flowers_chromatic.vs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs")}, 2);
SoShaderPart45->setType(QString("VERTEX"));
SoComposedShader32->setParts(*SoShaderPart45);

SoShaderPart* SoShaderPart46 = new SoShaderPart();
SoShaderPart46->setUrl(new QString[]{QString("../shaders/x_ite.fs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")}, 2);
SoShaderPart46->setType(QString("FRAGMENT"));
SoComposedShader32->setParts(*SoShaderPart46);

//TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/x_itebubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>
SoVRMLAppearance23->addChild(*SoComposedShader32);

SoShape21->addChild(*SoVRMLAppearance23);

SoTransform20->addChild(*SoShape21);

SoNode15->addChild(*SoTransform20);

SoSceneManager0->setSceneGraph(*SoNode15);

return 0;
}


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

//<component name='Shape' level='4'></component>
Someta* Someta10 = new Someta();
Someta10->setName(QString("title"));
Someta10->setContent(QString("geo.x3d"));
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
Someta13->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/personal/geo.x3d"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("description"));
Someta14->setContent(QString("a sphere"));
Sohead1->addMeta(*Someta14);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode15 = new SoNode();
SoNavigationInfo* SoNavigationInfo16 = new SoNavigationInfo();
SoNavigationInfo16->setType(new QString[]{QString("ANY"), QString("EXAMINE"), QString("FLY"), QString("LOOKAT")}, 4);
SoNode15->addChild(*SoNavigationInfo16);

SoViewpoint* SoViewpoint17 = new SoViewpoint();
SoViewpoint17->setDEF(QString("Tour"));
SoViewpoint17->setDescription(QString("Tour Views"));
SoNode15->addChild(*SoViewpoint17);

//Viewpoint position='0 0 4' description='sphere in road'/
SoBackground* SoBackground18 = new SoBackground();
SoBackground18->setBackUrl(new QString[]{QString("../resources/images/bBK.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png")}, 2);
SoBackground18->setBottomUrl(new QString[]{QString("../resources/images/bBT.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png")}, 2);
SoBackground18->setFrontUrl(new QString[]{QString("../resources/images/bFR.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png")}, 2);
SoBackground18->setLeftUrl(new QString[]{QString("../resources/images/bLF.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png")}, 2);
SoBackground18->setRightUrl(new QString[]{QString("../resources/images/bRT.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png")}, 2);
SoBackground18->setTopUrl(new QString[]{QString("../resources/images/bTP.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png")}, 2);
SoNode15->addChild(*SoBackground18);

SoTransform* SoTransform19 = new SoTransform();
SoShape* SoShape20 = new SoShape();
SoSphere* SoSphere21 = new SoSphere();
SoShape20->setGeometry(*SoSphere21);

SoVRMLAppearance* SoVRMLAppearance22 = new SoVRMLAppearance();
SoMaterial* SoMaterial23 = new SoMaterial();
SoMaterial23->setDiffuseColor(new float[]{0.7,0.7,0.7});
SoMaterial23->setSpecularColor(new float[]{0.5,0.5,0.5});
SoVRMLAppearance22->addChild(*SoMaterial23);

SoComposedCubeMapTexture* SoComposedCubeMapTexture24 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture24->setDEF(QString("texture"));
SoImageTexture* SoImageTexture25 = new SoImageTexture();
SoImageTexture25->setUrl(new QString[]{QString("../resources/images/bBK.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png")}, 2);
SoComposedCubeMapTexture24->setBack(*SoImageTexture25);

SoImageTexture* SoImageTexture26 = new SoImageTexture();
SoImageTexture26->setUrl(new QString[]{QString("../resources/images/bBT.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png")}, 2);
SoComposedCubeMapTexture24->setBottom(*SoImageTexture26);

SoImageTexture* SoImageTexture27 = new SoImageTexture();
SoImageTexture27->setUrl(new QString[]{QString("../resources/images/bFR.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png")}, 2);
SoComposedCubeMapTexture24->setFront(*SoImageTexture27);

SoImageTexture* SoImageTexture28 = new SoImageTexture();
SoImageTexture28->setUrl(new QString[]{QString("../resources/images/bLF.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png")}, 2);
SoComposedCubeMapTexture24->setLeft(*SoImageTexture28);

SoImageTexture* SoImageTexture29 = new SoImageTexture();
SoImageTexture29->setUrl(new QString[]{QString("../resources/images/bRT.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png")}, 2);
SoComposedCubeMapTexture24->setRight(*SoImageTexture29);

SoImageTexture* SoImageTexture30 = new SoImageTexture();
SoImageTexture30->setUrl(new QString[]{QString("../resources/images/bTP.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png")}, 2);
SoComposedCubeMapTexture24->setTop(*SoImageTexture30);

SoVRMLAppearance22->addChild(*SoComposedCubeMapTexture24);

SoComposedShader* SoComposedShader31 = new SoComposedShader();
SoComposedShader31->setLanguage(QString("GLSL"));
Sofield* Sofield32 = new Sofield();
Sofield32->setName(QString("chromaticDispertion"));
Sofield32->setAccessType(QString("inputOutput"));
Sofield32->setType(QString("SFVec3f"));
Sofield32->setValue(QString("0.98 1 1.033"));
SoComposedShader31->addChild(*Sofield32);

Sofield* Sofield33 = new Sofield();
Sofield33->setName(QString("cube"));
Sofield33->setType(QString("SFNode"));
Sofield33->setAccessType(QString("inputOutput"));
SoComposedCubeMapTexture* SoComposedCubeMapTexture34 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture34->setUSE(QString("texture"));
Sofield33->addChild(*SoComposedCubeMapTexture34);

SoComposedShader31->addChild(*Sofield33);

Sofield* Sofield35 = new Sofield();
Sofield35->setName(QString("bias"));
Sofield35->setAccessType(QString("inputOutput"));
Sofield35->setType(QString("SFFloat"));
Sofield35->setValue(QString("0.5"));
SoComposedShader31->addChild(*Sofield35);

Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("scale"));
Sofield36->setAccessType(QString("inputOutput"));
Sofield36->setType(QString("SFFloat"));
Sofield36->setValue(QString("0.5"));
SoComposedShader31->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setName(QString("power"));
Sofield37->setAccessType(QString("inputOutput"));
Sofield37->setType(QString("SFFloat"));
Sofield37->setValue(QString("2"));
SoComposedShader31->addChild(*Sofield37);

SoShaderPart* SoShaderPart38 = new SoShaderPart();
SoShaderPart38->setUrl(new QString[]{QString("../shaders/x3dom.vs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs")}, 2);
SoShaderPart38->setType(QString("VERTEX"));
SoComposedShader31->setParts(*SoShaderPart38);

SoShaderPart* SoShaderPart39 = new SoShaderPart();
SoShaderPart39->setDEF(QString("common"));
SoShaderPart39->setUrl(new QString[]{QString("../shaders/common.fs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs")}, 2);
SoShaderPart39->setType(QString("FRAGMENT"));
SoComposedShader31->setParts(*SoShaderPart39);

SoVRMLAppearance22->addChild(*SoComposedShader31);

SoComposedShader* SoComposedShader40 = new SoComposedShader();
SoComposedShader40->setLanguage(QString("GLSL"));
Sofield* Sofield41 = new Sofield();
Sofield41->setName(QString("chromaticDispertion"));
Sofield41->setAccessType(QString("initializeOnly"));
Sofield41->setType(QString("SFVec3f"));
Sofield41->setValue(QString("0.98 1 1.033"));
SoComposedShader40->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setName(QString("cube"));
Sofield42->setType(QString("SFNode"));
Sofield42->setAccessType(QString("initializeOnly"));
SoComposedCubeMapTexture* SoComposedCubeMapTexture43 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture43->setUSE(QString("texture"));
Sofield42->addChild(*SoComposedCubeMapTexture43);

SoComposedShader40->addChild(*Sofield42);

Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("bias"));
Sofield44->setAccessType(QString("initializeOnly"));
Sofield44->setType(QString("SFFloat"));
Sofield44->setValue(QString("0.5"));
SoComposedShader40->addChild(*Sofield44);

Sofield* Sofield45 = new Sofield();
Sofield45->setName(QString("scale"));
Sofield45->setAccessType(QString("initializeOnly"));
Sofield45->setType(QString("SFFloat"));
Sofield45->setValue(QString("0.5"));
SoComposedShader40->addChild(*Sofield45);

Sofield* Sofield46 = new Sofield();
Sofield46->setName(QString("power"));
Sofield46->setAccessType(QString("initializeOnly"));
Sofield46->setType(QString("SFFloat"));
Sofield46->setValue(QString("2"));
SoComposedShader40->addChild(*Sofield46);

SoShaderPart* SoShaderPart47 = new SoShaderPart();
SoShaderPart47->setUrl(new QString[]{QString("../shaders/x_ite.vs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs")}, 2);
SoShaderPart47->setType(QString("VERTEX"));
SoComposedShader40->setParts(*SoShaderPart47);

SoShaderPart* SoShaderPart48 = new SoShaderPart();
SoShaderPart48->setUrl(new QString[]{QString("../shaders/x_ite.fs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")}, 2);
SoShaderPart48->setType(QString("FRAGMENT"));
SoComposedShader40->setParts(*SoShaderPart48);

SoVRMLAppearance22->addChild(*SoComposedShader40);

SoShape20->addChild(*SoVRMLAppearance22);

SoTransform19->addChild(*SoShape20);

SoNode15->addChild(*SoTransform19);

SoSceneManager0->setSceneGraph(*SoNode15);

return 0;
}

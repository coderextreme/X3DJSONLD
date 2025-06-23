
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
Socomponent2->setName(QString("EnvironmentalEffects"));
Socomponent2->setLevel(3);
Sohead1->addChild(*Socomponent2);

Socomponent* Socomponent3 = new Socomponent();
Socomponent3->setName(QString("Shaders"));
Socomponent3->setLevel(1);
Sohead1->addChild(*Socomponent3);

Socomponent* Socomponent4 = new Socomponent();
Socomponent4->setName(QString("CubeMapTexturing"));
Socomponent4->setLevel(1);
Sohead1->addChild(*Socomponent4);

Socomponent* Socomponent5 = new Socomponent();
Socomponent5->setName(QString("Texturing"));
Socomponent5->setLevel(1);
Sohead1->addChild(*Socomponent5);

Socomponent* Socomponent6 = new Socomponent();
Socomponent6->setName(QString("Rendering"));
Socomponent6->setLevel(1);
Sohead1->addChild(*Socomponent6);

Socomponent* Socomponent7 = new Socomponent();
Socomponent7->setName(QString("Grouping"));
Socomponent7->setLevel(3);
Sohead1->addChild(*Socomponent7);

Socomponent* Socomponent8 = new Socomponent();
Socomponent8->setName(QString("Core"));
Socomponent8->setLevel(1);
Sohead1->addChild(*Socomponent8);

Socomponent* Socomponent9 = new Socomponent();
Socomponent9->setName(QString("ParticleSystems"));
Socomponent9->setLevel(3);
Sohead1->addChild(*Socomponent9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("title"));
Someta10->setContent(QString("particleflowers.x3d"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("creator"));
Someta11->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("description"));
Someta12->setContent(QString("A flower proto with configurable shaders"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("identifier"));
Someta13->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d"));
Sohead1->addMeta(*Someta13);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode14 = new SoNode();
SoWorldInfo* SoWorldInfo15 = new SoWorldInfo();
SoWorldInfo15->setTitle(QString("particleflowers.x3d"));
SoNode14->addChild(*SoWorldInfo15);

SoNavigationInfo* SoNavigationInfo16 = new SoNavigationInfo();
SoNavigationInfo16->setType(new QString[]{QString("ANY"), QString("EXAMINE"), QString("FLY"), QString("LOOKAT")}, 4);
SoNode14->addChild(*SoNavigationInfo16);

SoViewpoint* SoViewpoint17 = new SoViewpoint();
SoViewpoint17->setDescription(QString("Tour Views"));
SoViewpoint17->setPosition(new float[]{0.0,0.0,12.0});
SoNode14->addChild(*SoViewpoint17);

SoBackground* SoBackground18 = new SoBackground();
SoBackground18->setBackUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 1);
SoBackground18->setBottomUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 1);
SoBackground18->setFrontUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 1);
SoBackground18->setLeftUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 1);
SoBackground18->setRightUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 1);
SoBackground18->setTopUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 1);
SoNode14->addChild(*SoBackground18);

SoTransform* SoTransform19 = new SoTransform();
SoParticleSystem* SoParticleSystem20 = new SoParticleSystem();
SoParticleSystem20->setMaxParticles(20);
SoParticleSystem20->setGeometryType(QString("GEOMETRY"));
SoBoundedPhysicsModel* SoBoundedPhysicsModel21 = new SoBoundedPhysicsModel();
SoSphere* SoSphere22 = new SoSphere();
SoSphere22->setRadius(100);
SoBoundedPhysicsModel21->setGeometry(*SoSphere22);

SoParticleSystem20->addPhysics(SoBoundedPhysicsModel21);

SoExplosionEmitter* SoExplosionEmitter23 = new SoExplosionEmitter();
SoExplosionEmitter23->setSpeed(2);
SoExplosionEmitter23->setVariation(0.75);
SoParticleSystem20->setEmitter(SoExplosionEmitter23);

//<Shape>
SoSphere* SoSphere24 = new SoSphere();
SoParticleSystem20->setGeometry(*SoSphere24);

SoVRMLAppearance* SoVRMLAppearance25 = new SoVRMLAppearance();
SoMaterial* SoMaterial26 = new SoMaterial();
SoMaterial26->setDiffuseColor(new float[]{0.7,0.7,0.7});
SoMaterial26->setSpecularColor(new float[]{0.5,0.5,0.5});
SoVRMLAppearance25->addChild(*SoMaterial26);

SoComposedCubeMapTexture* SoComposedCubeMapTexture27 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture27->setDEF(QString("texture"));
SoImageTexture* SoImageTexture28 = new SoImageTexture();
SoImageTexture28->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 1);
SoComposedCubeMapTexture27->setBack(*SoImageTexture28);

SoImageTexture* SoImageTexture29 = new SoImageTexture();
SoImageTexture29->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 1);
SoComposedCubeMapTexture27->setBottom(*SoImageTexture29);

SoImageTexture* SoImageTexture30 = new SoImageTexture();
SoImageTexture30->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 1);
SoComposedCubeMapTexture27->setFront(*SoImageTexture30);

SoImageTexture* SoImageTexture31 = new SoImageTexture();
SoImageTexture31->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 1);
SoComposedCubeMapTexture27->setLeft(*SoImageTexture31);

SoImageTexture* SoImageTexture32 = new SoImageTexture();
SoImageTexture32->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 1);
SoComposedCubeMapTexture27->setRight(*SoImageTexture32);

SoImageTexture* SoImageTexture33 = new SoImageTexture();
SoImageTexture33->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 1);
SoComposedCubeMapTexture27->setTop(*SoImageTexture33);

SoVRMLAppearance25->addChild(*SoComposedCubeMapTexture27);

//<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader DEF=\"shader\" language=\"GLSL\"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <ShaderPart type=\"VERTEX\" url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs\"'/> <ShaderPart type='FRAGMENT' url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"'/> </ComposedShader>
SoComposedShader* SoComposedShader34 = new SoComposedShader();
SoComposedShader34->setLanguage(QString("GLSL"));
Sofield* Sofield35 = new Sofield();
Sofield35->setName(QString("chromaticDispertion"));
Sofield35->setAccessType(QString("initializeOnly"));
Sofield35->setType(QString("SFVec3f"));
Sofield35->setValue(QString("0.98 1 1.033"));
SoComposedShader34->addChild(*Sofield35);

Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("cube"));
Sofield36->setType(QString("SFNode"));
Sofield36->setAccessType(QString("initializeOnly"));
SoComposedCubeMapTexture* SoComposedCubeMapTexture37 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture37->setUSE(QString("texture"));
Sofield36->addChild(*SoComposedCubeMapTexture37);

SoComposedShader34->addChild(*Sofield36);

Sofield* Sofield38 = new Sofield();
Sofield38->setName(QString("bias"));
Sofield38->setAccessType(QString("initializeOnly"));
Sofield38->setType(QString("SFFloat"));
Sofield38->setValue(QString("0.5"));
SoComposedShader34->addChild(*Sofield38);

Sofield* Sofield39 = new Sofield();
Sofield39->setName(QString("scale"));
Sofield39->setAccessType(QString("initializeOnly"));
Sofield39->setType(QString("SFFloat"));
Sofield39->setValue(QString("0.5"));
SoComposedShader34->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setName(QString("power"));
Sofield40->setAccessType(QString("initializeOnly"));
Sofield40->setType(QString("SFFloat"));
Sofield40->setValue(QString("2"));
SoComposedShader34->addChild(*Sofield40);

SoShaderPart* SoShaderPart41 = new SoShaderPart();
SoShaderPart41->setUrl(new QString[]{QString("../shaders/x_iteparticles.vs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_iteparticles.vs")}, 2);
SoShaderPart41->setType(QString("VERTEX"));
SoComposedShader34->setParts(*SoShaderPart41);

SoShaderPart* SoShaderPart42 = new SoShaderPart();
SoShaderPart42->setDEF(QString("commonfs"));
SoShaderPart42->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs")}, 1);
SoShaderPart42->setType(QString("FRAGMENT"));
SoComposedShader34->setParts(*SoShaderPart42);

SoVRMLAppearance25->addChild(*SoComposedShader34);

SoParticleSystem20->addChildren(*SoVRMLAppearance25);

SoTransform19->addChild(*SoParticleSystem20);

//</Shape>
SoNode14->addChild(*SoTransform19);

SoSceneManager0->setSceneGraph(*SoNode14);

return 0;
}

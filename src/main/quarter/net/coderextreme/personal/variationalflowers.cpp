
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
Someta10->setContent(QString("variationalflowers.x3d"));
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
Someta13->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/personal/variationalflowers.x3d"));
Sohead1->addMeta(*Someta13);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode14 = new SoNode();
SoWorldInfo* SoWorldInfo15 = new SoWorldInfo();
SoWorldInfo15->setTitle(QString("variationalflowers.x3d"));
SoNode14->addChild(*SoWorldInfo15);

SoNavigationInfo* SoNavigationInfo16 = new SoNavigationInfo();
SoNavigationInfo16->setType(new QString[]{QString("ANY"), QString("EXAMINE"), QString("FLY"), QString("LOOKAT")}, 4);
SoNode14->addChild(*SoNavigationInfo16);

SoViewpoint* SoViewpoint17 = new SoViewpoint();
SoViewpoint17->setDescription(QString("Tour Views"));
SoViewpoint17->setPosition(new float[]{0.0,0.0,12.0});
SoNode14->addChild(*SoViewpoint17);

SoBackground* SoBackground18 = new SoBackground();
SoBackground18->setBackUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoBackground18->setBottomUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoBackground18->setFrontUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoBackground18->setLeftUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoBackground18->setRightUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoBackground18->setTopUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoNode14->addChild(*SoBackground18);

SoTransform* SoTransform19 = new SoTransform();
SoParticleSystem* SoParticleSystem20 = new SoParticleSystem();
SoParticleSystem20->setMaxParticles(100);
SoParticleSystem20->setGeometryType(QString("GEOMETRY"));
//values - array of MFFloats to pass to ComposedShader variations in values - array of MFFloats to pass to ComposedShader that varies values lastFrame - last frame that was rendered (0 for default) updateRate - update rate is amount of time between frames
//<VariationPhysicsModel values=\"2 2 5 5 0 0\" varations=\"2 1 3 3 0.1 0.1\" lastFrame='0' updateRate='0.1'> </VariationPhysicsModel>
SoExplosionEmitter* SoExplosionEmitter21 = new SoExplosionEmitter();
SoExplosionEmitter21->setSpeed(1);
SoExplosionEmitter21->setVariation(0.75);
SoParticleSystem20->setEmitter(SoExplosionEmitter21);

SoSphere* SoSphere22 = new SoSphere();
SoParticleSystem20->setGeometry(*SoSphere22);

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

//<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader DEF=\"shader\" language=\"GLSL\"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <ShaderPart type=\"VERTEX\" url='\"../shaders/castle.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs\"'/> <ShaderPart type='FRAGMENT' url='\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"'/> </ComposedShader>
SoComposedShader* SoComposedShader32 = new SoComposedShader();
SoComposedShader32->setDEF(QString("x_ite"));
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

Sofield* Sofield39 = new Sofield();
Sofield39->setName(QString("x3d_ParticleValues"));
Sofield39->setType(QString("MFFloat"));
Sofield39->setAccessType(QString("inputOutput"));
Sofield39->setValue(QString("2 1 4 4 0 0"));
SoComposedShader32->addChild(*Sofield39);

SoShaderPart* SoShaderPart40 = new SoShaderPart();
SoShaderPart40->setUrl(new QString[]{QString("../shaders/x_ite_variations.vs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_variations.vs")}, 2);
SoShaderPart40->setType(QString("VERTEX"));
SoComposedShader32->setParts(*SoShaderPart40);

SoShaderPart* SoShaderPart41 = new SoShaderPart();
SoShaderPart41->setUrl(new QString[]{QString("../shaders/commonnew.fs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs")}, 2);
SoShaderPart41->setType(QString("FRAGMENT"));
SoComposedShader32->setParts(*SoShaderPart41);

SoVRMLAppearance23->addChild(*SoComposedShader32);

SoParticleSystem20->addChildren(*SoVRMLAppearance23);

SoTransform19->addChild(*SoParticleSystem20);

SoScript* SoScript42 = new SoScript();
SoScript42->setDEF(QString("Animate"));
Sofield* Sofield43 = new Sofield();
Sofield43->setName(QString("set_fraction"));
Sofield43->setAccessType(QString("inputOnly"));
Sofield43->setType(QString("SFFloat"));
SoScript42->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("values"));
Sofield44->setType(QString("MFFloat"));
Sofield44->setAccessType(QString("inputOutput"));
Sofield44->setValue(QString("2 2 5 5 0 0"));
SoScript42->addChild(*Sofield44);

Sofield* Sofield45 = new Sofield();
Sofield45->setName(QString("variations"));
Sofield45->setType(QString("MFFloat"));
Sofield45->setAccessType(QString("inputOutput"));
Sofield45->setValue(QString("0.2 0.1 0.3 0.3 0.01 0.01"));
SoScript42->addChild(*Sofield45);

Sofield* Sofield46 = new Sofield();
Sofield46->setName(QString("lastframe"));
Sofield46->setType(QString("SFFloat"));
Sofield46->setAccessType(QString("inputOutput"));
Sofield46->setValue(QString("0"));
SoScript42->addChild(*Sofield46);

Sofield* Sofield47 = new Sofield();
Sofield47->setName(QString("updaterate"));
Sofield47->setType(QString("SFFloat"));
Sofield47->setAccessType(QString("inputOutput"));
Sofield47->setValue(QString("0.1"));
SoScript42->addChild(*Sofield47);


//SoScript42->setSourceCode(QString("ecmascript:")+
//_T("			function set_fraction(f, tm) {")+
//_T("			    if (lastframe + updaterate < tm) {")+
//_T("			  	lastframe = tm;")+
//_T("				for (let v in values) {")+
//_T("					values[v] = values[v] + (2 * Math.random() - 1) * variations[v];")+
//_T("				}")+
//_T("			    }")+
//_T("			}"));
SoTransform19->addChild(*SoScript42);

SoTimeSensor* SoTimeSensor48 = new SoTimeSensor();
SoTimeSensor48->setDEF(QString("TourTime"));
SoTimeSensor48->setCycleInterval(45);
SoTimeSensor48->setLoop(true);
SoTransform19->addChild(*SoTimeSensor48);

SoROUTE* SoROUTE49 = new SoROUTE();
SoROUTE49->setFromNode(QString("TourTime"));
SoROUTE49->setFromField(QString("fraction_changed"));
SoROUTE49->setToNode(QString("Animate"));
SoROUTE49->setToField(QString("set_fraction"));
SoTransform19->addChild(*SoROUTE49);

SoROUTE* SoROUTE50 = new SoROUTE();
SoROUTE50->setFromNode(QString("Animate"));
SoROUTE50->setFromField(QString("values"));
SoROUTE50->setToNode(QString("x_ite"));
SoROUTE50->setToField(QString("x3d_ParticleValues"));
SoTransform19->addChild(*SoROUTE50);

SoNode14->addChild(*SoTransform19);

SoSceneManager0->setSceneGraph(*SoNode14);

return 0;
}

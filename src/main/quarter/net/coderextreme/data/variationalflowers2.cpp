
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
SoSceneManager0->setVersion(QString("4.1"));
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
Someta12->setContent(QString("A flower particle system"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("identifier"));
Someta13->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/variationalflowers.x3d"));
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
SoBackground18->setBackUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 1);
SoBackground18->setBottomUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 1);
SoBackground18->setFrontUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 1);
SoBackground18->setLeftUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 1);
SoBackground18->setRightUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 1);
SoBackground18->setTopUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 1);
SoNode14->addChild(*SoBackground18);

SoTransform* SoTransform19 = new SoTransform();
SoParticleSystem* SoParticleSystem20 = new SoParticleSystem();
SoParticleSystem20->setMaxParticles(20);
SoParticleSystem20->setGeometryType(QString("GEOMETRY"));
//* values - array of MFFloats to pass to ComposedShader
//* variations in values - array of MFFloats to pass to ComposedShader that varies values
SoVariationPhysicsModel* SoVariationPhysicsModel21 = new SoVariationPhysicsModel();
SoVariationPhysicsModel21->setValues(QString("2 2 5 5 0 0"));
SoVariationPhysicsModel21->setVariations(QString("0.2 0.1 0.3 0.3 0.01 0.01"));
SoParticleSystem20->addVariationPhysicsModel(SoVariationPhysicsModel21);

SoExplosionEmitter* SoExplosionEmitter22 = new SoExplosionEmitter();
SoExplosionEmitter22->setSpeed(1);
SoExplosionEmitter22->setVariation(0.75);
SoParticleSystem20->setEmitter(SoExplosionEmitter22);

SoSphere* SoSphere23 = new SoSphere();
SoParticleSystem20->setGeometry(*SoSphere23);

SoVRMLAppearance* SoVRMLAppearance24 = new SoVRMLAppearance();
SoMaterial* SoMaterial25 = new SoMaterial();
SoMaterial25->setDiffuseColor(new float[]{0.7,0.7,0.7});
SoMaterial25->setSpecularColor(new float[]{0.5,0.5,0.5});
SoVRMLAppearance24->addChild(*SoMaterial25);

SoComposedCubeMapTexture* SoComposedCubeMapTexture26 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture26->setDEF(QString("texture"));
SoImageTexture* SoImageTexture27 = new SoImageTexture();
SoImageTexture27->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 1);
SoComposedCubeMapTexture26->setBack(*SoImageTexture27);

SoImageTexture* SoImageTexture28 = new SoImageTexture();
SoImageTexture28->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 1);
SoComposedCubeMapTexture26->setBottom(*SoImageTexture28);

SoImageTexture* SoImageTexture29 = new SoImageTexture();
SoImageTexture29->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 1);
SoComposedCubeMapTexture26->setFront(*SoImageTexture29);

SoImageTexture* SoImageTexture30 = new SoImageTexture();
SoImageTexture30->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 1);
SoComposedCubeMapTexture26->setLeft(*SoImageTexture30);

SoImageTexture* SoImageTexture31 = new SoImageTexture();
SoImageTexture31->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 1);
SoComposedCubeMapTexture26->setRight(*SoImageTexture31);

SoImageTexture* SoImageTexture32 = new SoImageTexture();
SoImageTexture32->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 1);
SoComposedCubeMapTexture26->setTop(*SoImageTexture32);

SoVRMLAppearance24->addChild(*SoComposedCubeMapTexture26);

SoComposedShader* SoComposedShader33 = new SoComposedShader();
SoComposedShader33->setDEF(QString("x_ite"));
SoComposedShader33->setLanguage(QString("GLSL"));
Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("chromaticDispertion"));
Sofield34->setAccessType(QString("initializeOnly"));
Sofield34->setType(QString("SFVec3f"));
Sofield34->setValue(QString("0.98 1 1.033"));
SoComposedShader33->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setName(QString("cube"));
Sofield35->setType(QString("SFNode"));
Sofield35->setAccessType(QString("initializeOnly"));
SoComposedCubeMapTexture* SoComposedCubeMapTexture36 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture36->setUSE(QString("texture"));
Sofield35->addChild(*SoComposedCubeMapTexture36);

SoComposedShader33->addChild(*Sofield35);

Sofield* Sofield37 = new Sofield();
Sofield37->setName(QString("bias"));
Sofield37->setAccessType(QString("initializeOnly"));
Sofield37->setType(QString("SFFloat"));
Sofield37->setValue(QString("0.5"));
SoComposedShader33->addChild(*Sofield37);

Sofield* Sofield38 = new Sofield();
Sofield38->setName(QString("scale"));
Sofield38->setAccessType(QString("initializeOnly"));
Sofield38->setType(QString("SFFloat"));
Sofield38->setValue(QString("0.5"));
SoComposedShader33->addChild(*Sofield38);

Sofield* Sofield39 = new Sofield();
Sofield39->setName(QString("power"));
Sofield39->setAccessType(QString("initializeOnly"));
Sofield39->setType(QString("SFFloat"));
Sofield39->setValue(QString("2"));
SoComposedShader33->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setName(QString("x3d_ParticleValues"));
Sofield40->setType(QString("MFFloat"));
Sofield40->setAccessType(QString("inputOutput"));
Sofield40->setValue(QString("2 1 4 4 0 0"));
SoComposedShader33->addChild(*Sofield40);

SoShaderPart* SoShaderPart41 = new SoShaderPart();
SoShaderPart41->setUrl(new QString[]{QString("../shaders/x_ite_variations.vs")}, 1);
SoShaderPart41->setType(QString("VERTEX"));
SoComposedShader33->setParts(*SoShaderPart41);

SoShaderPart* SoShaderPart42 = new SoShaderPart();
SoShaderPart42->setUrl(new QString[]{QString("../shaders/commonnew.fs")}, 1);
SoShaderPart42->setType(QString("FRAGMENT"));
SoComposedShader33->setParts(*SoShaderPart42);

SoVRMLAppearance24->addChild(*SoComposedShader33);

SoParticleSystem20->addChildren(*SoVRMLAppearance24);

SoTransform19->addChild(*SoParticleSystem20);

SoScript* SoScript43 = new SoScript();
SoScript43->setDEF(QString("Animate"));
Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("set_fraction"));
Sofield44->setAccessType(QString("inputOnly"));
Sofield44->setType(QString("SFFloat"));
SoScript43->addChild(*Sofield44);

Sofield* Sofield45 = new Sofield();
Sofield45->setName(QString("values"));
Sofield45->setType(QString("MFFloat"));
Sofield45->setAccessType(QString("inputOutput"));
Sofield45->setValue(QString("2 2 5 5 0 0"));
SoScript43->addChild(*Sofield45);

Sofield* Sofield46 = new Sofield();
Sofield46->setName(QString("variations"));
Sofield46->setType(QString("MFFloat"));
Sofield46->setAccessType(QString("inputOutput"));
Sofield46->setValue(QString("0.2 0.1 0.3 0.3 0.01 0.01"));
SoScript43->addChild(*Sofield46);

Sofield* Sofield47 = new Sofield();
Sofield47->setName(QString("lastframe"));
Sofield47->setType(QString("SFFloat"));
Sofield47->setAccessType(QString("inputOutput"));
Sofield47->setValue(QString("0"));
SoScript43->addChild(*Sofield47);

Sofield* Sofield48 = new Sofield();
Sofield48->setName(QString("updaterate"));
Sofield48->setType(QString("SFFloat"));
Sofield48->setAccessType(QString("inputOutput"));
Sofield48->setValue(QString("0.1"));
SoScript43->addChild(*Sofield48);


//SoScript43->setSourceCode(QString("ecmascript:")+
//_T("			function set_fraction(f, tm) {")+
//_T("			    if (lastframe + updaterate < tm) {")+
//_T("			  	lastframe = tm;")+
//_T("				for (let v in values) {")+
//_T("					values[v] = values[v] + (2 * Math.random() - 1) * variations[v];")+
//_T("				}")+
//_T("			    }")+
//_T("			}"));
SoTransform19->addChild(*SoScript43);

SoTimeSensor* SoTimeSensor49 = new SoTimeSensor();
SoTimeSensor49->setDEF(QString("TourTime"));
SoTimeSensor49->setCycleInterval(45);
SoTimeSensor49->setLoop(true);
SoTransform19->addChild(*SoTimeSensor49);

SoROUTE* SoROUTE50 = new SoROUTE();
SoROUTE50->setFromNode(QString("TourTime"));
SoROUTE50->setFromField(QString("fraction_changed"));
SoROUTE50->setToNode(QString("Animate"));
SoROUTE50->setToField(QString("set_fraction"));
SoTransform19->addChild(*SoROUTE50);

SoROUTE* SoROUTE51 = new SoROUTE();
SoROUTE51->setFromNode(QString("Animate"));
SoROUTE51->setFromField(QString("values"));
SoROUTE51->setToNode(QString("x_ite"));
SoROUTE51->setToField(QString("x3d_ParticleValues"));
SoTransform19->addChild(*SoROUTE51);

SoNode14->addChild(*SoTransform19);

SoSceneManager0->setSceneGraph(*SoNode14);

return 0;
}


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
Socomponent5->setName(QString("Grouping"));
Socomponent5->setLevel(3);
Sohead1->addChild(*Socomponent5);

Socomponent* Socomponent6 = new Socomponent();
Socomponent6->setName(QString("ParticleSystems"));
Socomponent6->setLevel(3);
Sohead1->addChild(*Socomponent6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("title"));
Someta7->setContent(QString("particleflowers.x3d"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("creator"));
Someta8->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("description"));
Someta9->setContent(QString("A flower proto with configurable shaders"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("identifier"));
Someta10->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d"));
Sohead1->addMeta(*Someta10);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode11 = new SoNode();
SoWorldInfo* SoWorldInfo12 = new SoWorldInfo();
SoWorldInfo12->setTitle(QString("particleflowers.x3d"));
SoNode11->addChild(*SoWorldInfo12);

SoNavigationInfo* SoNavigationInfo13 = new SoNavigationInfo();
SoNavigationInfo13->setType(new QString[]{QString("ANY"), QString("EXAMINE"), QString("FLY"), QString("LOOKAT")}, 4);
SoNode11->addChild(*SoNavigationInfo13);

SoViewpoint* SoViewpoint14 = new SoViewpoint();
SoViewpoint14->setDescription(QString("Tour Views"));
SoViewpoint14->setPosition(new float[]{0.0,0.0,12.0});
SoNode11->addChild(*SoViewpoint14);

SoBackground* SoBackground15 = new SoBackground();
SoBackground15->setFrontUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 1);
SoBackground15->setBackUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 1);
SoBackground15->setLeftUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 1);
SoBackground15->setRightUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 1);
SoBackground15->setTopUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 1);
SoBackground15->setBottomUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 1);
SoNode11->addChild(*SoBackground15);

SoTransform* SoTransform16 = new SoTransform();
SoParticleSystem* SoParticleSystem17 = new SoParticleSystem();
SoParticleSystem17->setGeometryType(QString("GEOMETRY"));
SoParticleSystem17->setMaxParticles(20);
SoExplosionEmitter* SoExplosionEmitter18 = new SoExplosionEmitter();
SoExplosionEmitter18->setSpeed(2);
SoExplosionEmitter18->setVariation(0.75);
SoParticleSystem17->setEmitter(SoExplosionEmitter18);

SoBoundedPhysicsModel* SoBoundedPhysicsModel19 = new SoBoundedPhysicsModel();
SoSphere* SoSphere20 = new SoSphere();
SoSphere20->setRadius(100);
SoBoundedPhysicsModel19->setGeometry(*SoSphere20);

SoParticleSystem17->addPhysics(SoBoundedPhysicsModel19);

SoVRMLAppearance* SoVRMLAppearance21 = new SoVRMLAppearance();
SoMaterial* SoMaterial22 = new SoMaterial();
SoMaterial22->setDiffuseColor(new float[]{0.7,0.7,0.7});
SoMaterial22->setSpecularColor(new float[]{0.5,0.5,0.5});
SoVRMLAppearance21->addChild(*SoMaterial22);

SoComposedCubeMapTexture* SoComposedCubeMapTexture23 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture23->setDEF(QString("texture"));
SoImageTexture* SoImageTexture24 = new SoImageTexture();
SoImageTexture24->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 1);
SoComposedCubeMapTexture23->setFront(*SoImageTexture24);

SoImageTexture* SoImageTexture25 = new SoImageTexture();
SoImageTexture25->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 1);
SoComposedCubeMapTexture23->setBack(*SoImageTexture25);

SoImageTexture* SoImageTexture26 = new SoImageTexture();
SoImageTexture26->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 1);
SoComposedCubeMapTexture23->setLeft(*SoImageTexture26);

SoImageTexture* SoImageTexture27 = new SoImageTexture();
SoImageTexture27->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 1);
SoComposedCubeMapTexture23->setRight(*SoImageTexture27);

SoImageTexture* SoImageTexture28 = new SoImageTexture();
SoImageTexture28->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 1);
SoComposedCubeMapTexture23->setTop(*SoImageTexture28);

SoImageTexture* SoImageTexture29 = new SoImageTexture();
SoImageTexture29->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 1);
SoComposedCubeMapTexture23->setBottom(*SoImageTexture29);

SoVRMLAppearance21->addChild(*SoComposedCubeMapTexture23);

SoComposedShader* SoComposedShader30 = new SoComposedShader();
SoComposedShader30->setDEF(QString("fw"));
SoComposedShader30->setLanguage(QString("GLSL"));
SoShaderPart* SoShaderPart31 = new SoShaderPart();
SoShaderPart31->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs")}, 1);
SoComposedShader30->setParts(*SoShaderPart31);

SoShaderPart* SoShaderPart32 = new SoShaderPart();
SoShaderPart32->setType(QString("FRAGMENT"));
SoShaderPart32->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs")}, 1);
SoComposedShader30->setParts(*SoShaderPart32);

Sofield* Sofield33 = new Sofield();
Sofield33->setAccessType(QString("inputOutput"));
Sofield33->setType(QString("SFVec3f"));
Sofield33->setName(QString("chromaticDispertion"));
Sofield33->setValue(QString("0.98 1 1.033"));
SoComposedShader30->addChild(*Sofield33);

Sofield* Sofield34 = new Sofield();
Sofield34->setAccessType(QString("inputOutput"));
Sofield34->setType(QString("SFNode"));
Sofield34->setName(QString("cube"));
SoComposedCubeMapTexture* SoComposedCubeMapTexture35 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture35->setUSE(QString("texture"));
Sofield34->addChild(*SoComposedCubeMapTexture35);

SoComposedShader30->addChild(*Sofield34);

Sofield* Sofield36 = new Sofield();
Sofield36->setAccessType(QString("inputOutput"));
Sofield36->setType(QString("SFFloat"));
Sofield36->setName(QString("bias"));
Sofield36->setValue(QString("0.5"));
SoComposedShader30->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setAccessType(QString("inputOutput"));
Sofield37->setType(QString("SFFloat"));
Sofield37->setName(QString("scale"));
Sofield37->setValue(QString("0.5"));
SoComposedShader30->addChild(*Sofield37);

Sofield* Sofield38 = new Sofield();
Sofield38->setAccessType(QString("inputOutput"));
Sofield38->setType(QString("SFFloat"));
Sofield38->setName(QString("power"));
Sofield38->setValue(QString("2"));
SoComposedShader30->addChild(*Sofield38);

Sofield* Sofield39 = new Sofield();
Sofield39->setAccessType(QString("inputOutput"));
Sofield39->setType(QString("SFFloat"));
Sofield39->setName(QString("a"));
Sofield39->setValue(QString("2"));
SoComposedShader30->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setAccessType(QString("inputOutput"));
Sofield40->setType(QString("SFFloat"));
Sofield40->setName(QString("b"));
Sofield40->setValue(QString("1"));
SoComposedShader30->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setAccessType(QString("inputOutput"));
Sofield41->setType(QString("SFFloat"));
Sofield41->setName(QString("c"));
Sofield41->setValue(QString("5"));
SoComposedShader30->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setAccessType(QString("inputOutput"));
Sofield42->setType(QString("SFFloat"));
Sofield42->setName(QString("d"));
Sofield42->setValue(QString("5"));
SoComposedShader30->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setAccessType(QString("inputOutput"));
Sofield43->setType(QString("SFFloat"));
Sofield43->setName(QString("tdelta"));
SoComposedShader30->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setAccessType(QString("inputOutput"));
Sofield44->setType(QString("SFFloat"));
Sofield44->setName(QString("pdelta"));
SoComposedShader30->addChild(*Sofield44);

SoVRMLAppearance21->addChild(*SoComposedShader30);

SoParticleSystem17->addChildren(*SoVRMLAppearance21);

SoSphere* SoSphere45 = new SoSphere();
SoParticleSystem17->setGeometry(*SoSphere45);

SoTransform16->addChild(*SoParticleSystem17);

SoScript* SoScript46 = new SoScript();
SoScript46->setDEF(QString("Animate"));
Sofield* Sofield47 = new Sofield();
Sofield47->setAccessType(QString("inputOutput"));
Sofield47->setType(QString("SFVec3f"));
Sofield47->setName(QString("translation"));
SoScript46->addChild(*Sofield47);

Sofield* Sofield48 = new Sofield();
Sofield48->setAccessType(QString("inputOutput"));
Sofield48->setType(QString("SFVec3f"));
Sofield48->setName(QString("velocity"));
SoScript46->addChild(*Sofield48);

Sofield* Sofield49 = new Sofield();
Sofield49->setAccessType(QString("inputOnly"));
Sofield49->setType(QString("SFFloat"));
Sofield49->setName(QString("set_fraction"));
SoScript46->addChild(*Sofield49);

Sofield* Sofield50 = new Sofield();
Sofield50->setAccessType(QString("inputOutput"));
Sofield50->setType(QString("SFFloat"));
Sofield50->setName(QString("a"));
Sofield50->setValue(QString("0.5"));
SoScript46->addChild(*Sofield50);

Sofield* Sofield51 = new Sofield();
Sofield51->setAccessType(QString("inputOutput"));
Sofield51->setType(QString("SFFloat"));
Sofield51->setName(QString("b"));
Sofield51->setValue(QString("0.5"));
SoScript46->addChild(*Sofield51);

Sofield* Sofield52 = new Sofield();
Sofield52->setAccessType(QString("inputOutput"));
Sofield52->setType(QString("SFFloat"));
Sofield52->setName(QString("c"));
Sofield52->setValue(QString("3"));
SoScript46->addChild(*Sofield52);

Sofield* Sofield53 = new Sofield();
Sofield53->setAccessType(QString("inputOutput"));
Sofield53->setType(QString("SFFloat"));
Sofield53->setName(QString("d"));
Sofield53->setValue(QString("3"));
SoScript46->addChild(*Sofield53);

Sofield* Sofield54 = new Sofield();
Sofield54->setAccessType(QString("inputOutput"));
Sofield54->setType(QString("SFFloat"));
Sofield54->setName(QString("tdelta"));
Sofield54->setValue(QString("0.5"));
SoScript46->addChild(*Sofield54);

Sofield* Sofield55 = new Sofield();
Sofield55->setAccessType(QString("inputOutput"));
Sofield55->setType(QString("SFFloat"));
Sofield55->setName(QString("pdelta"));
Sofield55->setValue(QString("0.5"));
SoScript46->addChild(*Sofield55);


//SoScript46->setSourceCode(QString("ecmascript:")+
//_T("			function initialize() {")+
//_T("			    translation = new SFVec3f(0, 0, 0);")+
//_T("			    velocity = new SFVec3f(")+
//_T("			    	Math.random() - 0.5,")+
//_T("				Math.random() - 0.5,")+
//_T("				Math.random() - 0.5);")+
//_T("			}")+
//_T("			function set_fraction() {")+
//_T("			    translation = new SFVec3f(")+
//_T("			    	translation.x + velocity.x,")+
//_T("				translation.y + velocity.y,")+
//_T("				translation.z + velocity.z);")+
//_T("			    for (var j = 0; j <= 2; j++) {")+
//_T("				    if (Math.abs(translation.x) > 10) {")+
//_T("					initialize();")+
//_T("				    } else if (Math.abs(translation.y) > 10) {")+
//_T("					initialize();")+
//_T("				    } else if (Math.abs(translation.z) > 10) {")+
//_T("					initialize();")+
//_T("				    } else {")+
//_T("					velocity.x += Math.random() * 0.2 - 0.1;")+
//_T("					velocity.y += Math.random() * 0.2 - 0.1;")+
//_T("					velocity.z += Math.random() * 0.2 - 0.1;")+
//_T("				    }")+
//_T("			    }")+
//_T("			    animate_flowers();")+
//_T("			}")+
//_T("			function animate_flowers(fraction, eventTime) {")+
//_T("				var choice = Math.floor(Math.random() * 4);")+
//_T("				switch (choice) {")+
//_T("				case 0:")+
//_T("					a += Math.random() * 0.2 - 0.1;")+
//_T("					break;")+
//_T("				case 1:")+
//_T("					b += Math.random() * 0.2 - 0.1;")+
//_T("					break;")+
//_T("				case 2:")+
//_T("					c += Math.random() * 2 - 1;")+
//_T("					break;")+
//_T("				case 3:")+
//_T("					d += Math.random() * 2 - 1;")+
//_T("					break;")+
//_T("				}")+
//_T("				tdelta = tdelta + 0.05;")+
//_T("				pdelta = pdelta + 0.05;")+
//_T("				if (a > 1) {")+
//_T("					a =  0.5;")+
//_T("				}")+
//_T("				if (b > 1) {")+
//_T("					b =  0.5;")+
//_T("				}")+
//_T("				if (c < 1) {")+
//_T("					c =  4;")+
//_T("				}")+
//_T("				if (d < 1) {")+
//_T("					d =  4;")+
//_T("				}")+
//_T("				if (c > 10) {")+
//_T("					c = 4;")+
//_T("				}")+
//_T("				if (d > 10) {")+
//_T("					d = 4;")+
//_T("				}")+
//_T("			}"));
SoTransform16->addChild(*SoScript46);

SoNode11->addChild(*SoTransform16);

SoTimeSensor* SoTimeSensor56 = new SoTimeSensor();
SoTimeSensor56->setDEF(QString("TourTime"));
SoTimeSensor56->setCycleInterval(5);
SoTimeSensor56->setLoop(true);
SoNode11->addChild(*SoTimeSensor56);

SoROUTE* SoROUTE57 = new SoROUTE();
SoROUTE57->setFromNode(QString("TourTime"));
SoROUTE57->setFromField(QString("fraction_changed"));
SoROUTE57->setToNode(QString("Animate"));
SoROUTE57->setToField(QString("set_fraction"));
SoNode11->addChild(*SoROUTE57);

SoROUTE* SoROUTE58 = new SoROUTE();
SoROUTE58->setFromNode(QString("Animate"));
SoROUTE58->setFromField(QString("a_changed"));
SoROUTE58->setToNode(QString("fw"));
SoROUTE58->setToField(QString("set_a"));
SoNode11->addChild(*SoROUTE58);

SoROUTE* SoROUTE59 = new SoROUTE();
SoROUTE59->setFromNode(QString("Animate"));
SoROUTE59->setFromField(QString("b_changed"));
SoROUTE59->setToNode(QString("fw"));
SoROUTE59->setToField(QString("set_b"));
SoNode11->addChild(*SoROUTE59);

SoROUTE* SoROUTE60 = new SoROUTE();
SoROUTE60->setFromNode(QString("Animate"));
SoROUTE60->setFromField(QString("c_changed"));
SoROUTE60->setToNode(QString("fw"));
SoROUTE60->setToField(QString("set_c"));
SoNode11->addChild(*SoROUTE60);

SoROUTE* SoROUTE61 = new SoROUTE();
SoROUTE61->setFromNode(QString("Animate"));
SoROUTE61->setFromField(QString("d_changed"));
SoROUTE61->setToNode(QString("fw"));
SoROUTE61->setToField(QString("set_d"));
SoNode11->addChild(*SoROUTE61);

SoROUTE* SoROUTE62 = new SoROUTE();
SoROUTE62->setFromNode(QString("Animate"));
SoROUTE62->setFromField(QString("pdelta_changed"));
SoROUTE62->setToNode(QString("fw"));
SoROUTE62->setToField(QString("set_pdelta"));
SoNode11->addChild(*SoROUTE62);

SoROUTE* SoROUTE63 = new SoROUTE();
SoROUTE63->setFromNode(QString("Animate"));
SoROUTE63->setFromField(QString("tdelta_changed"));
SoROUTE63->setToNode(QString("fw"));
SoROUTE63->setToField(QString("set_tdelta"));
SoNode11->addChild(*SoROUTE63);

SoSceneManager0->setSceneGraph(*SoNode11);

return 0;
}


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
Someta9->setContent(QString("A flower particle system"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("identifier"));
Someta10->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("generator"));
Someta11->setContent(QString("Vim"));
Sohead1->addMeta(*Someta11);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode12 = new SoNode();
SoWorldInfo* SoWorldInfo13 = new SoWorldInfo();
SoWorldInfo13->setTitle(QString("particleflowers.x3d"));
SoNode12->addChild(*SoWorldInfo13);

SoNavigationInfo* SoNavigationInfo14 = new SoNavigationInfo();
SoNavigationInfo14->setType(new QString[]{QString("ANY"), QString("EXAMINE"), QString("FLY"), QString("LOOKAT")}, 4);
SoNode12->addChild(*SoNavigationInfo14);

SoViewpoint* SoViewpoint15 = new SoViewpoint();
SoViewpoint15->setDescription(QString("Tour Views"));
SoViewpoint15->setPosition(new float[]{0.0,0.0,12.0});
SoNode12->addChild(*SoViewpoint15);

SoBackground* SoBackground16 = new SoBackground();
SoBackground16->setFrontUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoBackground16->setBackUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoBackground16->setLeftUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoBackground16->setRightUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoBackground16->setTopUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoBackground16->setBottomUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoNode12->addChild(*SoBackground16);

SoGroup* SoGroup17 = new SoGroup();
SoParticleSystem* SoParticleSystem18 = new SoParticleSystem();
SoParticleSystem18->setGeometryType(QString("GEOMETRY"));
SoParticleSystem18->setMaxParticles(20);
SoExplosionEmitter* SoExplosionEmitter19 = new SoExplosionEmitter();
SoExplosionEmitter19->setSpeed(2);
SoExplosionEmitter19->setVariation(0.75);
SoParticleSystem18->setEmitter(SoExplosionEmitter19);

SoBoundedPhysicsModel* SoBoundedPhysicsModel20 = new SoBoundedPhysicsModel();
SoSphere* SoSphere21 = new SoSphere();
SoSphere21->setRadius(100);
SoBoundedPhysicsModel20->setGeometry(*SoSphere21);

SoParticleSystem18->addPhysics(SoBoundedPhysicsModel20);

SoVRMLAppearance* SoVRMLAppearance22 = new SoVRMLAppearance();
SoMaterial* SoMaterial23 = new SoMaterial();
SoMaterial23->setDiffuseColor(new float[]{0.7,0.7,0.7});
SoMaterial23->setSpecularColor(new float[]{0.5,0.5,0.5});
SoVRMLAppearance22->addChild(*SoMaterial23);

SoComposedCubeMapTexture* SoComposedCubeMapTexture24 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture24->setDEF(QString("texture"));
SoImageTexture* SoImageTexture25 = new SoImageTexture();
SoImageTexture25->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoComposedCubeMapTexture24->setFront(*SoImageTexture25);

SoImageTexture* SoImageTexture26 = new SoImageTexture();
SoImageTexture26->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoComposedCubeMapTexture24->setBack(*SoImageTexture26);

SoImageTexture* SoImageTexture27 = new SoImageTexture();
SoImageTexture27->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoComposedCubeMapTexture24->setLeft(*SoImageTexture27);

SoImageTexture* SoImageTexture28 = new SoImageTexture();
SoImageTexture28->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoComposedCubeMapTexture24->setRight(*SoImageTexture28);

SoImageTexture* SoImageTexture29 = new SoImageTexture();
SoImageTexture29->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoComposedCubeMapTexture24->setTop(*SoImageTexture29);

SoImageTexture* SoImageTexture30 = new SoImageTexture();
SoImageTexture30->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoComposedCubeMapTexture24->setBottom(*SoImageTexture30);

SoVRMLAppearance22->addChild(*SoComposedCubeMapTexture24);

SoComposedShader* SoComposedShader31 = new SoComposedShader();
SoComposedShader31->setDEF(QString("x_ite"));
SoComposedShader31->setLanguage(QString("GLSL"));
SoShaderPart* SoShaderPart32 = new SoShaderPart();
SoShaderPart32->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs"), QString("../shaders/x_ite_flower_particles.vs")}, 2);
SoComposedShader31->setParts(*SoShaderPart32);

SoShaderPart* SoShaderPart33 = new SoShaderPart();
SoShaderPart33->setType(QString("FRAGMENT"));
SoShaderPart33->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs"), QString("../shaders/commonnew.fs")}, 2);
SoComposedShader31->setParts(*SoShaderPart33);

Sofield* Sofield34 = new Sofield();
Sofield34->setAccessType(QString("initializeOnly"));
Sofield34->setType(QString("SFVec3f"));
Sofield34->setName(QString("chromaticDispertion"));
Sofield34->setValue(QString("0.98 1 1.033"));
SoComposedShader31->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setAccessType(QString("initializeOnly"));
Sofield35->setType(QString("SFNode"));
Sofield35->setName(QString("cube"));
SoComposedCubeMapTexture* SoComposedCubeMapTexture36 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture36->setUSE(QString("texture"));
Sofield35->addChild(*SoComposedCubeMapTexture36);

SoComposedShader31->addChild(*Sofield35);

Sofield* Sofield37 = new Sofield();
Sofield37->setAccessType(QString("initializeOnly"));
Sofield37->setType(QString("SFFloat"));
Sofield37->setName(QString("bias"));
Sofield37->setValue(QString("0.5"));
SoComposedShader31->addChild(*Sofield37);

Sofield* Sofield38 = new Sofield();
Sofield38->setAccessType(QString("initializeOnly"));
Sofield38->setType(QString("SFFloat"));
Sofield38->setName(QString("scale"));
Sofield38->setValue(QString("0.5"));
SoComposedShader31->addChild(*Sofield38);

Sofield* Sofield39 = new Sofield();
Sofield39->setAccessType(QString("initializeOnly"));
Sofield39->setType(QString("SFFloat"));
Sofield39->setName(QString("power"));
Sofield39->setValue(QString("2"));
SoComposedShader31->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setAccessType(QString("inputOutput"));
Sofield40->setType(QString("SFFloat"));
Sofield40->setName(QString("a"));
Sofield40->setValue(QString("2"));
SoComposedShader31->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setAccessType(QString("inputOutput"));
Sofield41->setType(QString("SFFloat"));
Sofield41->setName(QString("b"));
Sofield41->setValue(QString("1"));
SoComposedShader31->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setAccessType(QString("inputOutput"));
Sofield42->setType(QString("SFFloat"));
Sofield42->setName(QString("c"));
Sofield42->setValue(QString("5"));
SoComposedShader31->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setAccessType(QString("inputOutput"));
Sofield43->setType(QString("SFFloat"));
Sofield43->setName(QString("d"));
Sofield43->setValue(QString("5"));
SoComposedShader31->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setAccessType(QString("inputOutput"));
Sofield44->setType(QString("SFFloat"));
Sofield44->setName(QString("tdelta"));
SoComposedShader31->addChild(*Sofield44);

Sofield* Sofield45 = new Sofield();
Sofield45->setAccessType(QString("inputOutput"));
Sofield45->setType(QString("SFFloat"));
Sofield45->setName(QString("pdelta"));
SoComposedShader31->addChild(*Sofield45);

SoVRMLAppearance22->addChild(*SoComposedShader31);

SoParticleSystem18->addChildren(*SoVRMLAppearance22);

SoSphere* SoSphere46 = new SoSphere();
SoParticleSystem18->setGeometry(*SoSphere46);

SoGroup17->addChild(*SoParticleSystem18);

SoScript* SoScript47 = new SoScript();
SoScript47->setDEF(QString("Animate"));
Sofield* Sofield48 = new Sofield();
Sofield48->setAccessType(QString("inputOutput"));
Sofield48->setType(QString("SFVec3f"));
Sofield48->setName(QString("translation"));
SoScript47->addChild(*Sofield48);

Sofield* Sofield49 = new Sofield();
Sofield49->setAccessType(QString("inputOutput"));
Sofield49->setType(QString("SFVec3f"));
Sofield49->setName(QString("velocity"));
SoScript47->addChild(*Sofield49);

Sofield* Sofield50 = new Sofield();
Sofield50->setAccessType(QString("inputOnly"));
Sofield50->setType(QString("SFFloat"));
Sofield50->setName(QString("set_fraction"));
SoScript47->addChild(*Sofield50);

Sofield* Sofield51 = new Sofield();
Sofield51->setAccessType(QString("inputOutput"));
Sofield51->setType(QString("SFFloat"));
Sofield51->setName(QString("a"));
Sofield51->setValue(QString("0.5"));
SoScript47->addChild(*Sofield51);

Sofield* Sofield52 = new Sofield();
Sofield52->setAccessType(QString("inputOutput"));
Sofield52->setType(QString("SFFloat"));
Sofield52->setName(QString("b"));
Sofield52->setValue(QString("0.5"));
SoScript47->addChild(*Sofield52);

Sofield* Sofield53 = new Sofield();
Sofield53->setAccessType(QString("inputOutput"));
Sofield53->setType(QString("SFFloat"));
Sofield53->setName(QString("c"));
Sofield53->setValue(QString("3"));
SoScript47->addChild(*Sofield53);

Sofield* Sofield54 = new Sofield();
Sofield54->setAccessType(QString("inputOutput"));
Sofield54->setType(QString("SFFloat"));
Sofield54->setName(QString("d"));
Sofield54->setValue(QString("3"));
SoScript47->addChild(*Sofield54);

Sofield* Sofield55 = new Sofield();
Sofield55->setAccessType(QString("inputOutput"));
Sofield55->setType(QString("SFFloat"));
Sofield55->setName(QString("tdelta"));
Sofield55->setValue(QString("0.5"));
SoScript47->addChild(*Sofield55);

Sofield* Sofield56 = new Sofield();
Sofield56->setAccessType(QString("inputOutput"));
Sofield56->setType(QString("SFFloat"));
Sofield56->setName(QString("pdelta"));
Sofield56->setValue(QString("0.5"));
SoScript47->addChild(*Sofield56);


//SoScript47->setSourceCode(QString("ecmascript:")+
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
SoGroup17->addChild(*SoScript47);

SoTimeSensor* SoTimeSensor57 = new SoTimeSensor();
SoTimeSensor57->setDEF(QString("TourTime"));
SoTimeSensor57->setCycleInterval(5);
SoTimeSensor57->setLoop(true);
SoGroup17->addChild(*SoTimeSensor57);

SoNode12->addChild(*SoGroup17);

SoROUTE* SoROUTE58 = new SoROUTE();
SoROUTE58->setFromNode(QString("TourTime"));
SoROUTE58->setFromField(QString("fraction_changed"));
SoROUTE58->setToNode(QString("Animate"));
SoROUTE58->setToField(QString("set_fraction"));
SoNode12->addChild(*SoROUTE58);

SoROUTE* SoROUTE59 = new SoROUTE();
SoROUTE59->setFromNode(QString("Animate"));
SoROUTE59->setFromField(QString("a_changed"));
SoROUTE59->setToNode(QString("x_ite"));
SoROUTE59->setToField(QString("set_a"));
SoNode12->addChild(*SoROUTE59);

SoROUTE* SoROUTE60 = new SoROUTE();
SoROUTE60->setFromNode(QString("Animate"));
SoROUTE60->setFromField(QString("b_changed"));
SoROUTE60->setToNode(QString("x_ite"));
SoROUTE60->setToField(QString("set_b"));
SoNode12->addChild(*SoROUTE60);

SoROUTE* SoROUTE61 = new SoROUTE();
SoROUTE61->setFromNode(QString("Animate"));
SoROUTE61->setFromField(QString("c_changed"));
SoROUTE61->setToNode(QString("x_ite"));
SoROUTE61->setToField(QString("set_c"));
SoNode12->addChild(*SoROUTE61);

SoROUTE* SoROUTE62 = new SoROUTE();
SoROUTE62->setFromNode(QString("Animate"));
SoROUTE62->setFromField(QString("d_changed"));
SoROUTE62->setToNode(QString("x_ite"));
SoROUTE62->setToField(QString("set_d"));
SoNode12->addChild(*SoROUTE62);

SoROUTE* SoROUTE63 = new SoROUTE();
SoROUTE63->setFromNode(QString("Animate"));
SoROUTE63->setFromField(QString("pdelta_changed"));
SoROUTE63->setToNode(QString("x_ite"));
SoROUTE63->setToField(QString("set_pdelta"));
SoNode12->addChild(*SoROUTE63);

SoROUTE* SoROUTE64 = new SoROUTE();
SoROUTE64->setFromNode(QString("Animate"));
SoROUTE64->setFromField(QString("tdelta_changed"));
SoROUTE64->setToNode(QString("x_ite"));
SoROUTE64->setToField(QString("set_tdelta"));
SoNode12->addChild(*SoROUTE64);

SoSceneManager0->setSceneGraph(*SoNode12);

return 0;
}

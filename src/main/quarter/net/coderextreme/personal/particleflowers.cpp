
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
Someta12->setContent(QString("A flower particle system"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("identifier"));
Someta13->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/personal/particleflowers.x3d"));
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
SoBackground18->setBackUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoBackground18->setBottomUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoBackground18->setFrontUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoBackground18->setLeftUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoBackground18->setRightUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoBackground18->setTopUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoNode14->addChild(*SoBackground18);

SoGroup* SoGroup19 = new SoGroup();
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

SoVRMLAppearance* SoVRMLAppearance24 = new SoVRMLAppearance();
SoMaterial* SoMaterial25 = new SoMaterial();
SoMaterial25->setDiffuseColor(new float[]{0.7,0.7,0.7});
SoMaterial25->setSpecularColor(new float[]{0.5,0.5,0.5});
SoVRMLAppearance24->addChild(*SoMaterial25);

SoComposedCubeMapTexture* SoComposedCubeMapTexture26 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture26->setDEF(QString("texture"));
SoImageTexture* SoImageTexture27 = new SoImageTexture();
SoImageTexture27->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoComposedCubeMapTexture26->setBack(*SoImageTexture27);

SoImageTexture* SoImageTexture28 = new SoImageTexture();
SoImageTexture28->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoComposedCubeMapTexture26->setBottom(*SoImageTexture28);

SoImageTexture* SoImageTexture29 = new SoImageTexture();
SoImageTexture29->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoComposedCubeMapTexture26->setFront(*SoImageTexture29);

SoImageTexture* SoImageTexture30 = new SoImageTexture();
SoImageTexture30->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoComposedCubeMapTexture26->setLeft(*SoImageTexture30);

SoImageTexture* SoImageTexture31 = new SoImageTexture();
SoImageTexture31->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoComposedCubeMapTexture26->setRight(*SoImageTexture31);

SoImageTexture* SoImageTexture32 = new SoImageTexture();
SoImageTexture32->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
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
Sofield40->setName(QString("a"));
Sofield40->setType(QString("SFFloat"));
Sofield40->setAccessType(QString("inputOutput"));
Sofield40->setValue(QString("2"));
SoComposedShader33->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setName(QString("b"));
Sofield41->setType(QString("SFFloat"));
Sofield41->setAccessType(QString("inputOutput"));
Sofield41->setValue(QString("1"));
SoComposedShader33->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setName(QString("c"));
Sofield42->setType(QString("SFFloat"));
Sofield42->setAccessType(QString("inputOutput"));
Sofield42->setValue(QString("5"));
SoComposedShader33->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setName(QString("d"));
Sofield43->setType(QString("SFFloat"));
Sofield43->setAccessType(QString("inputOutput"));
Sofield43->setValue(QString("5"));
SoComposedShader33->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("tdelta"));
Sofield44->setType(QString("SFFloat"));
Sofield44->setAccessType(QString("inputOutput"));
Sofield44->setValue(QString("0"));
SoComposedShader33->addChild(*Sofield44);

Sofield* Sofield45 = new Sofield();
Sofield45->setName(QString("pdelta"));
Sofield45->setType(QString("SFFloat"));
Sofield45->setAccessType(QString("inputOutput"));
Sofield45->setValue(QString("0"));
SoComposedShader33->addChild(*Sofield45);

SoShaderPart* SoShaderPart46 = new SoShaderPart();
SoShaderPart46->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs"), QString("../shaders/x_ite_flower_particles.vs")}, 2);
SoShaderPart46->setType(QString("VERTEX"));
SoComposedShader33->setParts(*SoShaderPart46);

SoShaderPart* SoShaderPart47 = new SoShaderPart();
SoShaderPart47->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs"), QString("../shaders/commonnew.fs")}, 2);
SoShaderPart47->setType(QString("FRAGMENT"));
SoComposedShader33->setParts(*SoShaderPart47);

SoVRMLAppearance24->addChild(*SoComposedShader33);

SoParticleSystem20->addChildren(*SoVRMLAppearance24);

SoSphere* SoSphere48 = new SoSphere();
SoParticleSystem20->setGeometry(*SoSphere48);

SoGroup19->addChild(*SoParticleSystem20);

SoScript* SoScript49 = new SoScript();
SoScript49->setDEF(QString("Animate"));
Sofield* Sofield50 = new Sofield();
Sofield50->setName(QString("translation"));
Sofield50->setAccessType(QString("inputOutput"));
Sofield50->setType(QString("SFVec3f"));
Sofield50->setValue(QString("0 0 0"));
SoScript49->addChild(*Sofield50);

Sofield* Sofield51 = new Sofield();
Sofield51->setName(QString("velocity"));
Sofield51->setAccessType(QString("inputOutput"));
Sofield51->setType(QString("SFVec3f"));
Sofield51->setValue(QString("0 0 0"));
SoScript49->addChild(*Sofield51);

Sofield* Sofield52 = new Sofield();
Sofield52->setName(QString("set_fraction"));
Sofield52->setAccessType(QString("inputOnly"));
Sofield52->setType(QString("SFFloat"));
SoScript49->addChild(*Sofield52);

Sofield* Sofield53 = new Sofield();
Sofield53->setName(QString("a"));
Sofield53->setType(QString("SFFloat"));
Sofield53->setAccessType(QString("inputOutput"));
Sofield53->setValue(QString("0.5"));
SoScript49->addChild(*Sofield53);

Sofield* Sofield54 = new Sofield();
Sofield54->setName(QString("b"));
Sofield54->setType(QString("SFFloat"));
Sofield54->setAccessType(QString("inputOutput"));
Sofield54->setValue(QString("0.5"));
SoScript49->addChild(*Sofield54);

Sofield* Sofield55 = new Sofield();
Sofield55->setName(QString("c"));
Sofield55->setType(QString("SFFloat"));
Sofield55->setAccessType(QString("inputOutput"));
Sofield55->setValue(QString("3"));
SoScript49->addChild(*Sofield55);

Sofield* Sofield56 = new Sofield();
Sofield56->setName(QString("d"));
Sofield56->setType(QString("SFFloat"));
Sofield56->setAccessType(QString("inputOutput"));
Sofield56->setValue(QString("3"));
SoScript49->addChild(*Sofield56);

Sofield* Sofield57 = new Sofield();
Sofield57->setName(QString("tdelta"));
Sofield57->setType(QString("SFFloat"));
Sofield57->setAccessType(QString("inputOutput"));
Sofield57->setValue(QString("0.5"));
SoScript49->addChild(*Sofield57);

Sofield* Sofield58 = new Sofield();
Sofield58->setName(QString("pdelta"));
Sofield58->setType(QString("SFFloat"));
Sofield58->setAccessType(QString("inputOutput"));
Sofield58->setValue(QString("0.5"));
SoScript49->addChild(*Sofield58);


//SoScript49->setSourceCode(QString("ecmascript:")+
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
SoGroup19->addChild(*SoScript49);

SoTimeSensor* SoTimeSensor59 = new SoTimeSensor();
SoTimeSensor59->setDEF(QString("TourTime"));
SoTimeSensor59->setCycleInterval(5);
SoTimeSensor59->setLoop(true);
SoGroup19->addChild(*SoTimeSensor59);

SoROUTE* SoROUTE60 = new SoROUTE();
SoROUTE60->setFromNode(QString("TourTime"));
SoROUTE60->setFromField(QString("fraction_changed"));
SoROUTE60->setToNode(QString("Animate"));
SoROUTE60->setToField(QString("set_fraction"));
SoGroup19->addChild(*SoROUTE60);

SoROUTE* SoROUTE61 = new SoROUTE();
SoROUTE61->setFromNode(QString("Animate"));
SoROUTE61->setFromField(QString("a"));
SoROUTE61->setToNode(QString("x_ite"));
SoROUTE61->setToField(QString("a"));
SoGroup19->addChild(*SoROUTE61);

SoROUTE* SoROUTE62 = new SoROUTE();
SoROUTE62->setFromNode(QString("Animate"));
SoROUTE62->setFromField(QString("b"));
SoROUTE62->setToNode(QString("x_ite"));
SoROUTE62->setToField(QString("b"));
SoGroup19->addChild(*SoROUTE62);

SoROUTE* SoROUTE63 = new SoROUTE();
SoROUTE63->setFromNode(QString("Animate"));
SoROUTE63->setFromField(QString("c"));
SoROUTE63->setToNode(QString("x_ite"));
SoROUTE63->setToField(QString("c"));
SoGroup19->addChild(*SoROUTE63);

SoROUTE* SoROUTE64 = new SoROUTE();
SoROUTE64->setFromNode(QString("Animate"));
SoROUTE64->setFromField(QString("d"));
SoROUTE64->setToNode(QString("x_ite"));
SoROUTE64->setToField(QString("d"));
SoGroup19->addChild(*SoROUTE64);

SoROUTE* SoROUTE65 = new SoROUTE();
SoROUTE65->setFromNode(QString("Animate"));
SoROUTE65->setFromField(QString("pdelta"));
SoROUTE65->setToNode(QString("x_ite"));
SoROUTE65->setToField(QString("pdelta"));
SoGroup19->addChild(*SoROUTE65);

SoROUTE* SoROUTE66 = new SoROUTE();
SoROUTE66->setFromNode(QString("Animate"));
SoROUTE66->setFromField(QString("tdelta"));
SoROUTE66->setToNode(QString("x_ite"));
SoROUTE66->setToField(QString("tdelta"));
SoGroup19->addChild(*SoROUTE66);

SoNode14->addChild(*SoGroup19);

SoSceneManager0->setSceneGraph(*SoNode14);

return 0;
}


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
Someta13->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("generator"));
Someta14->setContent(QString("Vim"));
Sohead1->addMeta(*Someta14);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode15 = new SoNode();
SoWorldInfo* SoWorldInfo16 = new SoWorldInfo();
SoWorldInfo16->setTitle(QString("particleflowers.x3d"));
SoNode15->addChild(*SoWorldInfo16);

SoNavigationInfo* SoNavigationInfo17 = new SoNavigationInfo();
SoNavigationInfo17->setType(new QString[]{QString("ANY"), QString("EXAMINE"), QString("FLY"), QString("LOOKAT")}, 4);
SoNode15->addChild(*SoNavigationInfo17);

SoViewpoint* SoViewpoint18 = new SoViewpoint();
SoViewpoint18->setDescription(QString("Tour Views"));
SoViewpoint18->setPosition(new float[]{0.0,0.0,12.0});
SoNode15->addChild(*SoViewpoint18);

SoBackground* SoBackground19 = new SoBackground();
SoBackground19->setBackUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoBackground19->setBottomUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoBackground19->setFrontUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoBackground19->setLeftUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoBackground19->setRightUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoBackground19->setTopUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoNode15->addChild(*SoBackground19);

SoGroup* SoGroup20 = new SoGroup();
SoParticleSystem* SoParticleSystem21 = new SoParticleSystem();
SoParticleSystem21->setMaxParticles(20);
SoParticleSystem21->setGeometryType(QString("GEOMETRY"));
SoBoundedPhysicsModel* SoBoundedPhysicsModel22 = new SoBoundedPhysicsModel();
SoSphere* SoSphere23 = new SoSphere();
SoSphere23->setRadius(100);
SoBoundedPhysicsModel22->setGeometry(*SoSphere23);

SoParticleSystem21->addPhysics(SoBoundedPhysicsModel22);

SoExplosionEmitter* SoExplosionEmitter24 = new SoExplosionEmitter();
SoExplosionEmitter24->setSpeed(2);
SoExplosionEmitter24->setVariation(0.75);
SoParticleSystem21->setEmitter(SoExplosionEmitter24);

SoVRMLAppearance* SoVRMLAppearance25 = new SoVRMLAppearance();
SoMaterial* SoMaterial26 = new SoMaterial();
SoMaterial26->setDiffuseColor(new float[]{0.7,0.7,0.7});
SoMaterial26->setSpecularColor(new float[]{0.5,0.5,0.5});
SoVRMLAppearance25->addChild(*SoMaterial26);

SoComposedCubeMapTexture* SoComposedCubeMapTexture27 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture27->setDEF(QString("texture"));
SoImageTexture* SoImageTexture28 = new SoImageTexture();
SoImageTexture28->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoComposedCubeMapTexture27->setBack(*SoImageTexture28);

SoImageTexture* SoImageTexture29 = new SoImageTexture();
SoImageTexture29->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoComposedCubeMapTexture27->setBottom(*SoImageTexture29);

SoImageTexture* SoImageTexture30 = new SoImageTexture();
SoImageTexture30->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoComposedCubeMapTexture27->setFront(*SoImageTexture30);

SoImageTexture* SoImageTexture31 = new SoImageTexture();
SoImageTexture31->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoComposedCubeMapTexture27->setLeft(*SoImageTexture31);

SoImageTexture* SoImageTexture32 = new SoImageTexture();
SoImageTexture32->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoComposedCubeMapTexture27->setRight(*SoImageTexture32);

SoImageTexture* SoImageTexture33 = new SoImageTexture();
SoImageTexture33->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoComposedCubeMapTexture27->setTop(*SoImageTexture33);

SoVRMLAppearance25->addChild(*SoComposedCubeMapTexture27);

SoComposedShader* SoComposedShader34 = new SoComposedShader();
SoComposedShader34->setDEF(QString("x_ite"));
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

Sofield* Sofield41 = new Sofield();
Sofield41->setName(QString("a"));
Sofield41->setType(QString("SFFloat"));
Sofield41->setAccessType(QString("inputOutput"));
Sofield41->setValue(QString("2"));
SoComposedShader34->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setName(QString("b"));
Sofield42->setType(QString("SFFloat"));
Sofield42->setAccessType(QString("inputOutput"));
Sofield42->setValue(QString("1"));
SoComposedShader34->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setName(QString("c"));
Sofield43->setType(QString("SFFloat"));
Sofield43->setAccessType(QString("inputOutput"));
Sofield43->setValue(QString("5"));
SoComposedShader34->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("d"));
Sofield44->setType(QString("SFFloat"));
Sofield44->setAccessType(QString("inputOutput"));
Sofield44->setValue(QString("5"));
SoComposedShader34->addChild(*Sofield44);

Sofield* Sofield45 = new Sofield();
Sofield45->setName(QString("tdelta"));
Sofield45->setType(QString("SFFloat"));
Sofield45->setAccessType(QString("inputOutput"));
Sofield45->setValue(QString("0"));
SoComposedShader34->addChild(*Sofield45);

Sofield* Sofield46 = new Sofield();
Sofield46->setName(QString("pdelta"));
Sofield46->setType(QString("SFFloat"));
Sofield46->setAccessType(QString("inputOutput"));
Sofield46->setValue(QString("0"));
SoComposedShader34->addChild(*Sofield46);

SoShaderPart* SoShaderPart47 = new SoShaderPart();
SoShaderPart47->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs"), QString("../shaders/x_ite_flower_particles.vs")}, 2);
SoShaderPart47->setType(QString("VERTEX"));
SoComposedShader34->setParts(*SoShaderPart47);

SoShaderPart* SoShaderPart48 = new SoShaderPart();
SoShaderPart48->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs"), QString("../shaders/commonnew.fs")}, 2);
SoShaderPart48->setType(QString("FRAGMENT"));
SoComposedShader34->setParts(*SoShaderPart48);

SoVRMLAppearance25->addChild(*SoComposedShader34);

SoParticleSystem21->addChildren(*SoVRMLAppearance25);

SoSphere* SoSphere49 = new SoSphere();
SoParticleSystem21->setGeometry(*SoSphere49);

SoGroup20->addChild(*SoParticleSystem21);

SoScript* SoScript50 = new SoScript();
SoScript50->setDEF(QString("Animate"));
Sofield* Sofield51 = new Sofield();
Sofield51->setName(QString("translation"));
Sofield51->setAccessType(QString("inputOutput"));
Sofield51->setType(QString("SFVec3f"));
Sofield51->setValue(QString("0 0 0"));
SoScript50->addChild(*Sofield51);

Sofield* Sofield52 = new Sofield();
Sofield52->setName(QString("velocity"));
Sofield52->setAccessType(QString("inputOutput"));
Sofield52->setType(QString("SFVec3f"));
Sofield52->setValue(QString("0 0 0"));
SoScript50->addChild(*Sofield52);

Sofield* Sofield53 = new Sofield();
Sofield53->setName(QString("set_fraction"));
Sofield53->setAccessType(QString("inputOnly"));
Sofield53->setType(QString("SFFloat"));
SoScript50->addChild(*Sofield53);

Sofield* Sofield54 = new Sofield();
Sofield54->setName(QString("a"));
Sofield54->setType(QString("SFFloat"));
Sofield54->setAccessType(QString("inputOutput"));
Sofield54->setValue(QString("0.5"));
SoScript50->addChild(*Sofield54);

Sofield* Sofield55 = new Sofield();
Sofield55->setName(QString("b"));
Sofield55->setType(QString("SFFloat"));
Sofield55->setAccessType(QString("inputOutput"));
Sofield55->setValue(QString("0.5"));
SoScript50->addChild(*Sofield55);

Sofield* Sofield56 = new Sofield();
Sofield56->setName(QString("c"));
Sofield56->setType(QString("SFFloat"));
Sofield56->setAccessType(QString("inputOutput"));
Sofield56->setValue(QString("3"));
SoScript50->addChild(*Sofield56);

Sofield* Sofield57 = new Sofield();
Sofield57->setName(QString("d"));
Sofield57->setType(QString("SFFloat"));
Sofield57->setAccessType(QString("inputOutput"));
Sofield57->setValue(QString("3"));
SoScript50->addChild(*Sofield57);

Sofield* Sofield58 = new Sofield();
Sofield58->setName(QString("tdelta"));
Sofield58->setType(QString("SFFloat"));
Sofield58->setAccessType(QString("inputOutput"));
Sofield58->setValue(QString("0.5"));
SoScript50->addChild(*Sofield58);

Sofield* Sofield59 = new Sofield();
Sofield59->setName(QString("pdelta"));
Sofield59->setType(QString("SFFloat"));
Sofield59->setAccessType(QString("inputOutput"));
Sofield59->setValue(QString("0.5"));
SoScript50->addChild(*Sofield59);


//SoScript50->setSourceCode(QString("ecmascript:")+
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
SoGroup20->addChild(*SoScript50);

SoTimeSensor* SoTimeSensor60 = new SoTimeSensor();
SoTimeSensor60->setDEF(QString("TourTime"));
SoTimeSensor60->setCycleInterval(5);
SoTimeSensor60->setLoop(true);
SoGroup20->addChild(*SoTimeSensor60);

SoROUTE* SoROUTE61 = new SoROUTE();
SoROUTE61->setFromNode(QString("TourTime"));
SoROUTE61->setFromField(QString("fraction_changed"));
SoROUTE61->setToNode(QString("Animate"));
SoROUTE61->setToField(QString("set_fraction"));
SoGroup20->addChild(*SoROUTE61);

SoROUTE* SoROUTE62 = new SoROUTE();
SoROUTE62->setFromNode(QString("Animate"));
SoROUTE62->setFromField(QString("a"));
SoROUTE62->setToNode(QString("x_ite"));
SoROUTE62->setToField(QString("a"));
SoGroup20->addChild(*SoROUTE62);

SoROUTE* SoROUTE63 = new SoROUTE();
SoROUTE63->setFromNode(QString("Animate"));
SoROUTE63->setFromField(QString("b"));
SoROUTE63->setToNode(QString("x_ite"));
SoROUTE63->setToField(QString("b"));
SoGroup20->addChild(*SoROUTE63);

SoROUTE* SoROUTE64 = new SoROUTE();
SoROUTE64->setFromNode(QString("Animate"));
SoROUTE64->setFromField(QString("c"));
SoROUTE64->setToNode(QString("x_ite"));
SoROUTE64->setToField(QString("c"));
SoGroup20->addChild(*SoROUTE64);

SoROUTE* SoROUTE65 = new SoROUTE();
SoROUTE65->setFromNode(QString("Animate"));
SoROUTE65->setFromField(QString("d"));
SoROUTE65->setToNode(QString("x_ite"));
SoROUTE65->setToField(QString("d"));
SoGroup20->addChild(*SoROUTE65);

SoROUTE* SoROUTE66 = new SoROUTE();
SoROUTE66->setFromNode(QString("Animate"));
SoROUTE66->setFromField(QString("pdelta"));
SoROUTE66->setToNode(QString("x_ite"));
SoROUTE66->setToField(QString("pdelta"));
SoGroup20->addChild(*SoROUTE66);

SoROUTE* SoROUTE67 = new SoROUTE();
SoROUTE67->setFromNode(QString("Animate"));
SoROUTE67->setFromField(QString("tdelta"));
SoROUTE67->setToNode(QString("x_ite"));
SoROUTE67->setToField(QString("tdelta"));
SoGroup20->addChild(*SoROUTE67);

SoNode15->addChild(*SoGroup20);

SoSceneManager0->setSceneGraph(*SoNode15);

return 0;
}

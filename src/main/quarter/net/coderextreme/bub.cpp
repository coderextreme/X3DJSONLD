
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
Someta10->setContent(QString("bub.x3d"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("creator"));
Someta11->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("description"));
Someta12->setContent(QString("3 prismatic spheres"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("generator"));
Someta13->setContent(QString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("identifier"));
Someta14->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/bub.x3d"));
Sohead1->addMeta(*Someta14);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode15 = new SoNode();
SoNavigationInfo* SoNavigationInfo16 = new SoNavigationInfo();
SoNode15->addChild(*SoNavigationInfo16);

SoBackground* SoBackground17 = new SoBackground();
SoBackground17->setBackUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoBackground17->setBottomUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoBackground17->setFrontUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoBackground17->setLeftUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoBackground17->setRightUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoBackground17->setTopUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoNode15->addChild(*SoBackground17);

SoViewpoint* SoViewpoint18 = new SoViewpoint();
SoViewpoint18->setPosition(new float[]{0.0,0.0,20.0});
SoViewpoint18->setDescription(QString("Look at the bubbles flying"));
SoNode15->addChild(*SoViewpoint18);

SoProtoDeclare* SoProtoDeclare19 = new SoProtoDeclare();
SoProtoDeclare19->setName(QString("Bubble"));
SoProtoBody* SoProtoBody20 = new SoProtoBody();
SoTransform* SoTransform21 = new SoTransform();
SoTransform21->setDEF(QString("transform"));
SoShape* SoShape22 = new SoShape();
SoShape22->setDEF(QString("myShape"));
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

//<ComposedShader DEF='gl' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/gl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language=\"GLSL\"> <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader DEF='instant' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
SoComposedShader* SoComposedShader32 = new SoComposedShader();
SoComposedShader32->setDEF(QString("x3dom"));
SoComposedShader32->setLanguage(QString("GLSL"));
Sofield* Sofield33 = new Sofield();
Sofield33->setName(QString("cube"));
Sofield33->setType(QString("SFInt32"));
Sofield33->setAccessType(QString("inputOutput"));
Sofield33->setValue(QString("0"));
SoComposedShader32->addChild(*Sofield33);

Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("chromaticDispertion"));
Sofield34->setType(QString("SFVec3f"));
Sofield34->setAccessType(QString("inputOutput"));
Sofield34->setValue(QString("0.98 1 1.033"));
SoComposedShader32->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setName(QString("bias"));
Sofield35->setType(QString("SFFloat"));
Sofield35->setAccessType(QString("inputOutput"));
Sofield35->setValue(QString("0.5"));
SoComposedShader32->addChild(*Sofield35);

Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("scale"));
Sofield36->setType(QString("SFFloat"));
Sofield36->setAccessType(QString("inputOutput"));
Sofield36->setValue(QString("0.5"));
SoComposedShader32->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setName(QString("power"));
Sofield37->setType(QString("SFFloat"));
Sofield37->setAccessType(QString("inputOutput"));
Sofield37->setValue(QString("2"));
SoComposedShader32->addChild(*Sofield37);

SoShaderPart* SoShaderPart38 = new SoShaderPart();
SoShaderPart38->setUrl(new QString[]{QString("../shaders/x3dom.vs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs")}, 2);
SoShaderPart38->setType(QString("VERTEX"));
SoComposedShader32->setParts(*SoShaderPart38);

SoShaderPart* SoShaderPart39 = new SoShaderPart();
SoShaderPart39->setUrl(new QString[]{QString("../shaders/pc_bubbles.fs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs")}, 2);
SoShaderPart39->setType(QString("FRAGMENT"));
SoComposedShader32->setParts(*SoShaderPart39);

SoVRMLAppearance23->addChild(*SoComposedShader32);

SoComposedShader* SoComposedShader40 = new SoComposedShader();
SoComposedShader40->setDEF(QString("x_ite"));
SoComposedShader40->setLanguage(QString("GLSL"));
Sofield* Sofield41 = new Sofield();
Sofield41->setName(QString("cube"));
Sofield41->setType(QString("SFNode"));
Sofield41->setAccessType(QString("inputOutput"));
SoComposedCubeMapTexture* SoComposedCubeMapTexture42 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture42->setUSE(QString("texture"));
Sofield41->addChild(*SoComposedCubeMapTexture42);

SoComposedShader40->addChild(*Sofield41);

Sofield* Sofield43 = new Sofield();
Sofield43->setName(QString("chromaticDispertion"));
Sofield43->setType(QString("SFVec3f"));
Sofield43->setAccessType(QString("inputOutput"));
Sofield43->setValue(QString("0.98 1 1.033"));
SoComposedShader40->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("bias"));
Sofield44->setType(QString("SFFloat"));
Sofield44->setAccessType(QString("inputOutput"));
Sofield44->setValue(QString("0.5"));
SoComposedShader40->addChild(*Sofield44);

Sofield* Sofield45 = new Sofield();
Sofield45->setName(QString("scale"));
Sofield45->setType(QString("SFFloat"));
Sofield45->setAccessType(QString("inputOutput"));
Sofield45->setValue(QString("0.5"));
SoComposedShader40->addChild(*Sofield45);

Sofield* Sofield46 = new Sofield();
Sofield46->setName(QString("power"));
Sofield46->setType(QString("SFFloat"));
Sofield46->setAccessType(QString("inputOutput"));
Sofield46->setValue(QString("2"));
SoComposedShader40->addChild(*Sofield46);

SoShaderPart* SoShaderPart47 = new SoShaderPart();
SoShaderPart47->setUrl(new QString[]{QString("../shaders/x_ite.vs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs")}, 2);
SoShaderPart47->setType(QString("VERTEX"));
SoComposedShader40->setParts(*SoShaderPart47);

SoShaderPart* SoShaderPart48 = new SoShaderPart();
SoShaderPart48->setUrl(new QString[]{QString("../shaders/x_itebubbles.fs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs")}, 2);
SoShaderPart48->setType(QString("FRAGMENT"));
SoComposedShader40->setParts(*SoShaderPart48);

SoVRMLAppearance23->addChild(*SoComposedShader40);

SoShape22->addChild(*SoVRMLAppearance23);

SoSphere* SoSphere49 = new SoSphere();
SoShape22->setGeometry(*SoSphere49);

SoTransform21->addChild(*SoShape22);

SoProtoBody20->addChild(*SoTransform21);

SoScript* SoScript50 = new SoScript();
SoScript50->setDEF(QString("Bounce"));
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
Sofield53->setType(QString("SFTime"));
SoScript50->addChild(*Sofield53);


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
//_T("			    if (Math.abs(translation.x) > 10) {")+
//_T("				initialize();")+
//_T("			    } else if (Math.abs(translation.y) > 10) {")+
//_T("				initialize();")+
//_T("			    } else if (Math.abs(translation.z) > 10) {")+
//_T("				initialize();")+
//_T("			    } else {")+
//_T("				velocity.x += Math.random() * 0.2 - 0.1;")+
//_T("				velocity.y += Math.random() * 0.2 - 0.1;")+
//_T("				velocity.z += Math.random() * 0.2 - 0.1;")+
//_T("			    }")+
//_T("			}"));
SoProtoBody20->addChild(*SoScript50);

SoTimeSensor* SoTimeSensor54 = new SoTimeSensor();
SoTimeSensor54->setDEF(QString("TourTime"));
SoTimeSensor54->setCycleInterval(0.15);
SoTimeSensor54->setLoop(true);
SoProtoBody20->addChild(*SoTimeSensor54);

SoROUTE* SoROUTE55 = new SoROUTE();
SoROUTE55->setFromNode(QString("TourTime"));
SoROUTE55->setFromField(QString("cycleTime"));
SoROUTE55->setToNode(QString("Bounce"));
SoROUTE55->setToField(QString("set_fraction"));
SoProtoBody20->addChild(*SoROUTE55);

SoROUTE* SoROUTE56 = new SoROUTE();
SoROUTE56->setFromNode(QString("Bounce"));
SoROUTE56->setFromField(QString("translation_changed"));
SoROUTE56->setToNode(QString("transform"));
SoROUTE56->setToField(QString("set_translation"));
SoProtoBody20->addChild(*SoROUTE56);

SoProtoDeclare19->addChild(*SoProtoBody20);

SoNode15->addChild(*SoProtoDeclare19);

SoProtoInstance* SoProtoInstance57 = new SoProtoInstance();
SoProtoInstance57->setName(QString("Bubble"));
SoNode15->addChild(*SoProtoInstance57);

SoProtoInstance* SoProtoInstance58 = new SoProtoInstance();
SoProtoInstance58->setName(QString("Bubble"));
SoNode15->addChild(*SoProtoInstance58);

SoProtoInstance* SoProtoInstance59 = new SoProtoInstance();
SoProtoInstance59->setName(QString("Bubble"));
SoNode15->addChild(*SoProtoInstance59);

SoSceneManager0->setSceneGraph(*SoNode15);

return 0;
}

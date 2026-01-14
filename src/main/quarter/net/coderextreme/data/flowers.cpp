
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
Socomponent8->setName(QString("Shape"));
Socomponent8->setLevel(4);
Sohead1->addChild(*Socomponent8);

Socomponent* Socomponent9 = new Socomponent();
Socomponent9->setName(QString("Grouping"));
Socomponent9->setLevel(3);
Sohead1->addChild(*Socomponent9);

Socomponent* Socomponent10 = new Socomponent();
Socomponent10->setName(QString("Core"));
Socomponent10->setLevel(1);
Sohead1->addChild(*Socomponent10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("title"));
Someta11->setContent(QString("flowers.x3d"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("creator"));
Someta12->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("description"));
Someta13->setContent(QString("5 or more prismatic flowers"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("generator"));
Someta14->setContent(QString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("identifier"));
Someta15->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d"));
Sohead1->addMeta(*Someta15);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode16 = new SoNode();
SoNavigationInfo* SoNavigationInfo17 = new SoNavigationInfo();
SoNode16->addChild(*SoNavigationInfo17);

//Images courtesy of Paul Debevec's Light Probe Image Gallery
SoBackground* SoBackground18 = new SoBackground();
SoBackground18->setBackUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoBackground18->setBottomUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoBackground18->setFrontUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoBackground18->setLeftUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoBackground18->setRightUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoBackground18->setTopUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoNode16->addChild(*SoBackground18);

SoProtoDeclare* SoProtoDeclare19 = new SoProtoDeclare();
SoProtoDeclare19->setName(QString("flower"));
SoProtoBody* SoProtoBody20 = new SoProtoBody();
SoTransform* SoTransform21 = new SoTransform();
SoTransform21->setDEF(QString("animate_transform"));
SoShape* SoShape22 = new SoShape();
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

//<ComposedShader DEF='x3dom' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field> <field name='b' type='SFFloat' accessType='inputOutput' value='1'></field> <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\"'></ShaderPart> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
SoComposedShader* SoComposedShader32 = new SoComposedShader();
SoComposedShader32->setDEF(QString("x_ite"));
SoComposedShader32->setLanguage(QString("GLSL"));
Sofield* Sofield33 = new Sofield();
Sofield33->setName(QString("cube"));
Sofield33->setType(QString("SFNode"));
Sofield33->setAccessType(QString("inputOutput"));
SoComposedCubeMapTexture* SoComposedCubeMapTexture34 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture34->setUSE(QString("texture"));
Sofield33->addChild(*SoComposedCubeMapTexture34);

SoComposedShader32->addChild(*Sofield33);

Sofield* Sofield35 = new Sofield();
Sofield35->setName(QString("chromaticDispertion"));
Sofield35->setAccessType(QString("initializeOnly"));
Sofield35->setType(QString("SFVec3f"));
Sofield35->setValue(QString("0.98 1 1.033"));
SoComposedShader32->addChild(*Sofield35);

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
Sofield39->setAccessType(QString("inputOnly"));
Sofield39->setValue(QString("10"));
SoComposedShader32->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setName(QString("b"));
Sofield40->setType(QString("SFFloat"));
Sofield40->setAccessType(QString("inputOnly"));
Sofield40->setValue(QString("1"));
SoComposedShader32->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setName(QString("c"));
Sofield41->setType(QString("SFFloat"));
Sofield41->setAccessType(QString("inputOnly"));
Sofield41->setValue(QString("20"));
SoComposedShader32->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setName(QString("d"));
Sofield42->setType(QString("SFFloat"));
Sofield42->setAccessType(QString("inputOnly"));
Sofield42->setValue(QString("20"));
SoComposedShader32->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setName(QString("tdelta"));
Sofield43->setType(QString("SFFloat"));
Sofield43->setAccessType(QString("inputOnly"));
Sofield43->setValue(QString("0"));
SoComposedShader32->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("pdelta"));
Sofield44->setType(QString("SFFloat"));
Sofield44->setAccessType(QString("inputOnly"));
Sofield44->setValue(QString("0"));
SoComposedShader32->addChild(*Sofield44);

SoShaderPart* SoShaderPart45 = new SoShaderPart();
SoShaderPart45->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs")}, 2);
SoShaderPart45->setType(QString("VERTEX"));
SoComposedShader32->setParts(*SoShaderPart45);

SoShaderPart* SoShaderPart46 = new SoShaderPart();
SoShaderPart46->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")}, 2);
SoShaderPart46->setType(QString("FRAGMENT"));
SoComposedShader32->setParts(*SoShaderPart46);

SoVRMLAppearance23->addChild(*SoComposedShader32);

SoShape22->addChild(*SoVRMLAppearance23);

SoSphere* SoSphere47 = new SoSphere();
SoShape22->setGeometry(*SoSphere47);

SoTransform21->addChild(*SoShape22);

SoProtoBody20->addChild(*SoTransform21);

SoScript* SoScript48 = new SoScript();
SoScript48->setDEF(QString("Animate"));
Sofield* Sofield49 = new Sofield();
Sofield49->setName(QString("translation"));
Sofield49->setAccessType(QString("inputOutput"));
Sofield49->setType(QString("SFVec3f"));
Sofield49->setValue(QString("0 0 0"));
SoScript48->addChild(*Sofield49);

Sofield* Sofield50 = new Sofield();
Sofield50->setName(QString("velocity"));
Sofield50->setAccessType(QString("inputOutput"));
Sofield50->setType(QString("SFVec3f"));
Sofield50->setValue(QString("0 0 0"));
SoScript48->addChild(*Sofield50);

Sofield* Sofield51 = new Sofield();
Sofield51->setName(QString("set_fraction"));
Sofield51->setAccessType(QString("inputOnly"));
Sofield51->setType(QString("SFFloat"));
SoScript48->addChild(*Sofield51);

Sofield* Sofield52 = new Sofield();
Sofield52->setName(QString("a"));
Sofield52->setType(QString("SFFloat"));
Sofield52->setAccessType(QString("inputOutput"));
Sofield52->setValue(QString("0.5"));
SoScript48->addChild(*Sofield52);

Sofield* Sofield53 = new Sofield();
Sofield53->setName(QString("b"));
Sofield53->setType(QString("SFFloat"));
Sofield53->setAccessType(QString("inputOutput"));
Sofield53->setValue(QString("0.5"));
SoScript48->addChild(*Sofield53);

Sofield* Sofield54 = new Sofield();
Sofield54->setName(QString("c"));
Sofield54->setType(QString("SFFloat"));
Sofield54->setAccessType(QString("inputOutput"));
Sofield54->setValue(QString("3"));
SoScript48->addChild(*Sofield54);

Sofield* Sofield55 = new Sofield();
Sofield55->setName(QString("d"));
Sofield55->setType(QString("SFFloat"));
Sofield55->setAccessType(QString("inputOutput"));
Sofield55->setValue(QString("3"));
SoScript48->addChild(*Sofield55);

Sofield* Sofield56 = new Sofield();
Sofield56->setName(QString("tdelta"));
Sofield56->setType(QString("SFFloat"));
Sofield56->setAccessType(QString("inputOutput"));
Sofield56->setValue(QString("0.5"));
SoScript48->addChild(*Sofield56);

Sofield* Sofield57 = new Sofield();
Sofield57->setName(QString("pdelta"));
Sofield57->setType(QString("SFFloat"));
Sofield57->setAccessType(QString("inputOutput"));
Sofield57->setValue(QString("0.5"));
SoScript48->addChild(*Sofield57);


//SoScript48->setSourceCode(QString("ecmascript:")+
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
//_T("				tdelta = tdelta + 0.5;")+
//_T("				pdelta = pdelta + 0.5;")+
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
SoProtoBody20->addChild(*SoScript48);

SoTimeSensor* SoTimeSensor58 = new SoTimeSensor();
SoTimeSensor58->setDEF(QString("TourTime"));
SoTimeSensor58->setCycleInterval(5);
SoTimeSensor58->setLoop(true);
SoProtoBody20->addChild(*SoTimeSensor58);

SoROUTE* SoROUTE59 = new SoROUTE();
SoROUTE59->setFromNode(QString("TourTime"));
SoROUTE59->setFromField(QString("fraction_changed"));
SoROUTE59->setToNode(QString("Animate"));
SoROUTE59->setToField(QString("set_fraction"));
SoProtoBody20->addChild(*SoROUTE59);

SoROUTE* SoROUTE60 = new SoROUTE();
SoROUTE60->setFromNode(QString("Animate"));
SoROUTE60->setFromField(QString("translation_changed"));
SoROUTE60->setToNode(QString("animate_transform"));
SoROUTE60->setToField(QString("set_translation"));
SoProtoBody20->addChild(*SoROUTE60);

SoROUTE* SoROUTE61 = new SoROUTE();
SoROUTE61->setFromNode(QString("Animate"));
SoROUTE61->setFromField(QString("a"));
SoROUTE61->setToNode(QString("x_ite"));
SoROUTE61->setToField(QString("a"));
SoProtoBody20->addChild(*SoROUTE61);

SoROUTE* SoROUTE62 = new SoROUTE();
SoROUTE62->setFromNode(QString("Animate"));
SoROUTE62->setFromField(QString("b"));
SoROUTE62->setToNode(QString("x_ite"));
SoROUTE62->setToField(QString("b"));
SoProtoBody20->addChild(*SoROUTE62);

SoROUTE* SoROUTE63 = new SoROUTE();
SoROUTE63->setFromNode(QString("Animate"));
SoROUTE63->setFromField(QString("c"));
SoROUTE63->setToNode(QString("x_ite"));
SoROUTE63->setToField(QString("c"));
SoProtoBody20->addChild(*SoROUTE63);

SoROUTE* SoROUTE64 = new SoROUTE();
SoROUTE64->setFromNode(QString("Animate"));
SoROUTE64->setFromField(QString("d"));
SoROUTE64->setToNode(QString("x_ite"));
SoROUTE64->setToField(QString("d"));
SoProtoBody20->addChild(*SoROUTE64);

SoROUTE* SoROUTE65 = new SoROUTE();
SoROUTE65->setFromNode(QString("Animate"));
SoROUTE65->setFromField(QString("pdelta"));
SoROUTE65->setToNode(QString("x_ite"));
SoROUTE65->setToField(QString("pdelta"));
SoProtoBody20->addChild(*SoROUTE65);

SoROUTE* SoROUTE66 = new SoROUTE();
SoROUTE66->setFromNode(QString("Animate"));
SoROUTE66->setFromField(QString("tdelta"));
SoROUTE66->setToNode(QString("x_ite"));
SoROUTE66->setToField(QString("tdelta"));
SoProtoBody20->addChild(*SoROUTE66);

//<ROUTE fromNode='Animate' fromField='a' toNode='x3dom' toField='a'/> <ROUTE fromNode='Animate' fromField='b' toNode='x3dom' toField='b'/> <ROUTE fromNode='Animate' fromField='c' toNode='x3dom' toField='c'/> <ROUTE fromNode='Animate' fromField='d' toNode='x3dom' toField='d'/> <ROUTE fromNode='Animate' fromField='pdelta' toNode='x3dom' toField='pdelta'/> <ROUTE fromNode='Animate' fromField='tdelta' toNode='x3dom' toField='tdelta'/>
SoProtoDeclare19->addChild(*SoProtoBody20);

SoNode16->addChild(*SoProtoDeclare19);

SoProtoInstance* SoProtoInstance67 = new SoProtoInstance();
SoProtoInstance67->setName(QString("flower"));
SoNode16->addChild(*SoProtoInstance67);

SoProtoInstance* SoProtoInstance68 = new SoProtoInstance();
SoProtoInstance68->setName(QString("flower"));
SoNode16->addChild(*SoProtoInstance68);

SoProtoInstance* SoProtoInstance69 = new SoProtoInstance();
SoProtoInstance69->setName(QString("flower"));
SoNode16->addChild(*SoProtoInstance69);

SoSceneManager0->setSceneGraph(*SoNode16);

return 0;
}

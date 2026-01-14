
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
Someta11->setContent(QString("flowerproto.x3d"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("creator"));
Someta12->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("description"));
Someta13->setContent(QString("A flower proto with configurable shaders"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("generator"));
Someta14->setContent(QString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("identifier"));
Someta15->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d"));
Sohead1->addMeta(*Someta15);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode16 = new SoNode();
SoProtoDeclare* SoProtoDeclare17 = new SoProtoDeclare();
SoProtoDeclare17->setName(QString("FlowerProto"));
SoProtoInterface* SoProtoInterface18 = new SoProtoInterface();
Sofield* Sofield19 = new Sofield();
Sofield19->setName(QString("vertex"));
Sofield19->setAccessType(QString("inputOnly"));
Sofield19->setType(QString("MFString"));
Sofield19->setValue(QString("\"../shaders/gl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl_flowers_chromatic.vs\""));
SoProtoInterface18->addChild(*Sofield19);

Sofield* Sofield20 = new Sofield();
Sofield20->setName(QString("fragment"));
Sofield20->setAccessType(QString("inputOnly"));
Sofield20->setType(QString("MFString"));
Sofield20->setValue(QString("\"../shaders/pc_flowers.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_flowers.fs\""));
SoProtoInterface18->addChild(*Sofield20);

SoProtoDeclare17->addChild(*SoProtoInterface18);

SoProtoBody* SoProtoBody21 = new SoProtoBody();
SoTransform* SoTransform22 = new SoTransform();
SoTransform22->setDEF(QString("transform"));
SoShape* SoShape23 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance24 = new SoVRMLAppearance();
SoMaterial* SoMaterial25 = new SoMaterial();
SoMaterial25->setDiffuseColor(new float[]{0.7,0.7,0.7});
SoMaterial25->setSpecularColor(new float[]{0.5,0.5,0.5});
SoVRMLAppearance24->addChild(*SoMaterial25);

SoComposedCubeMapTexture* SoComposedCubeMapTexture26 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture26->setDEF(QString("texture"));
SoImageTexture* SoImageTexture27 = new SoImageTexture();
SoImageTexture27->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoComposedCubeMapTexture26->setBack(*SoImageTexture27);

SoImageTexture* SoImageTexture28 = new SoImageTexture();
SoImageTexture28->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoComposedCubeMapTexture26->setBottom(*SoImageTexture28);

SoImageTexture* SoImageTexture29 = new SoImageTexture();
SoImageTexture29->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoComposedCubeMapTexture26->setFront(*SoImageTexture29);

SoImageTexture* SoImageTexture30 = new SoImageTexture();
SoImageTexture30->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoComposedCubeMapTexture26->setLeft(*SoImageTexture30);

SoImageTexture* SoImageTexture31 = new SoImageTexture();
SoImageTexture31->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoComposedCubeMapTexture26->setRight(*SoImageTexture31);

SoImageTexture* SoImageTexture32 = new SoImageTexture();
SoImageTexture32->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoComposedCubeMapTexture26->setTop(*SoImageTexture32);

SoVRMLAppearance24->addChild(*SoComposedCubeMapTexture26);

SoComposedShader* SoComposedShader33 = new SoComposedShader();
SoComposedShader33->setDEF(QString("shader"));
SoComposedShader33->setLanguage(QString("GLSL"));
//<field name='fw_textureCoordGenType' accessType='inputOnly' type='SFInt32' value='0'></field>
Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("cube"));
Sofield34->setType(QString("SFNode"));
Sofield34->setAccessType(QString("inputOnly"));
SoComposedCubeMapTexture* SoComposedCubeMapTexture35 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture35->setUSE(QString("texture"));
Sofield34->addChild(*SoComposedCubeMapTexture35);

SoComposedShader33->addChild(*Sofield34);

Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("chromaticDispertion"));
Sofield36->setAccessType(QString("initializeOnly"));
Sofield36->setType(QString("SFVec3f"));
Sofield36->setValue(QString("0.98 1 1.033"));
SoComposedShader33->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setName(QString("bias"));
Sofield37->setType(QString("SFFloat"));
Sofield37->setAccessType(QString("inputOnly"));
Sofield37->setValue(QString("0.5"));
SoComposedShader33->addChild(*Sofield37);

Sofield* Sofield38 = new Sofield();
Sofield38->setName(QString("scale"));
Sofield38->setType(QString("SFFloat"));
Sofield38->setAccessType(QString("inputOnly"));
Sofield38->setValue(QString("0.5"));
SoComposedShader33->addChild(*Sofield38);

Sofield* Sofield39 = new Sofield();
Sofield39->setName(QString("power"));
Sofield39->setType(QString("SFFloat"));
Sofield39->setAccessType(QString("inputOnly"));
Sofield39->setValue(QString("2"));
SoComposedShader33->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setName(QString("a"));
Sofield40->setType(QString("SFFloat"));
Sofield40->setAccessType(QString("inputOnly"));
Sofield40->setValue(QString("10"));
SoComposedShader33->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setName(QString("b"));
Sofield41->setType(QString("SFFloat"));
Sofield41->setAccessType(QString("inputOnly"));
Sofield41->setValue(QString("1"));
SoComposedShader33->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setName(QString("c"));
Sofield42->setType(QString("SFFloat"));
Sofield42->setAccessType(QString("inputOnly"));
Sofield42->setValue(QString("20"));
SoComposedShader33->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setName(QString("d"));
Sofield43->setType(QString("SFFloat"));
Sofield43->setAccessType(QString("inputOnly"));
Sofield43->setValue(QString("20"));
SoComposedShader33->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("tdelta"));
Sofield44->setType(QString("SFFloat"));
Sofield44->setAccessType(QString("inputOnly"));
Sofield44->setValue(QString("0"));
SoComposedShader33->addChild(*Sofield44);

Sofield* Sofield45 = new Sofield();
Sofield45->setName(QString("pdelta"));
Sofield45->setType(QString("SFFloat"));
Sofield45->setAccessType(QString("inputOnly"));
Sofield45->setValue(QString("0"));
SoComposedShader33->addChild(*Sofield45);

SoShaderPart* SoShaderPart46 = new SoShaderPart();
SoShaderPart46->setType(QString("VERTEX"));
SoIS* SoIS47 = new SoIS();
Soconnect* Soconnect48 = new Soconnect();
Soconnect48->setNodeField(QString("url"));
Soconnect48->setProtoField(QString("vertex"));
SoIS47->addChild(*Soconnect48);

SoShaderPart46->addChild(*SoIS47);

SoComposedShader33->setParts(*SoShaderPart46);

SoShaderPart* SoShaderPart49 = new SoShaderPart();
SoShaderPart49->setType(QString("FRAGMENT"));
SoIS* SoIS50 = new SoIS();
Soconnect* Soconnect51 = new Soconnect();
Soconnect51->setNodeField(QString("url"));
Soconnect51->setProtoField(QString("fragment"));
SoIS50->addChild(*Soconnect51);

SoShaderPart49->addChild(*SoIS50);

SoComposedShader33->setParts(*SoShaderPart49);

SoVRMLAppearance24->addChild(*SoComposedShader33);

SoShape23->addChild(*SoVRMLAppearance24);

SoSphere* SoSphere52 = new SoSphere();
SoShape23->setGeometry(*SoSphere52);

SoTransform22->addChild(*SoShape23);

SoScript* SoScript53 = new SoScript();
SoScript53->setDEF(QString("Animate"));
SoScript53->setDirectOutput(true);
Sofield* Sofield54 = new Sofield();
Sofield54->setName(QString("translation"));
Sofield54->setAccessType(QString("inputOutput"));
Sofield54->setType(QString("SFVec3f"));
Sofield54->setValue(QString("0 0 0"));
SoScript53->addChild(*Sofield54);

Sofield* Sofield55 = new Sofield();
Sofield55->setName(QString("velocity"));
Sofield55->setAccessType(QString("outputOnly"));
Sofield55->setType(QString("SFVec3f"));
Sofield55->setValue(QString("0 0 0"));
SoScript53->addChild(*Sofield55);

Sofield* Sofield56 = new Sofield();
Sofield56->setName(QString("set_fraction"));
Sofield56->setAccessType(QString("inputOnly"));
Sofield56->setType(QString("SFFloat"));
SoScript53->addChild(*Sofield56);

Sofield* Sofield57 = new Sofield();
Sofield57->setName(QString("a"));
Sofield57->setType(QString("SFFloat"));
Sofield57->setAccessType(QString("outputOnly"));
Sofield57->setValue(QString("0.5"));
SoScript53->addChild(*Sofield57);

Sofield* Sofield58 = new Sofield();
Sofield58->setName(QString("b"));
Sofield58->setType(QString("SFFloat"));
Sofield58->setAccessType(QString("outputOnly"));
Sofield58->setValue(QString("0.5"));
SoScript53->addChild(*Sofield58);

Sofield* Sofield59 = new Sofield();
Sofield59->setName(QString("c"));
Sofield59->setType(QString("SFFloat"));
Sofield59->setAccessType(QString("outputOnly"));
Sofield59->setValue(QString("3"));
SoScript53->addChild(*Sofield59);

Sofield* Sofield60 = new Sofield();
Sofield60->setName(QString("d"));
Sofield60->setType(QString("SFFloat"));
Sofield60->setAccessType(QString("outputOnly"));
Sofield60->setValue(QString("3"));
SoScript53->addChild(*Sofield60);

Sofield* Sofield61 = new Sofield();
Sofield61->setName(QString("tdelta"));
Sofield61->setType(QString("SFFloat"));
Sofield61->setAccessType(QString("outputOnly"));
Sofield61->setValue(QString("0.5"));
SoScript53->addChild(*Sofield61);

Sofield* Sofield62 = new Sofield();
Sofield62->setName(QString("pdelta"));
Sofield62->setType(QString("SFFloat"));
Sofield62->setAccessType(QString("outputOnly"));
Sofield62->setValue(QString("0.5"));
SoScript53->addChild(*Sofield62);


//SoScript53->setSourceCode(QString("ecmascript:")+
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
//_T("				tdelta += 0.5;")+
//_T("				pdelta += 0.5;")+
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
SoTransform22->addChild(*SoScript53);

SoTimeSensor* SoTimeSensor63 = new SoTimeSensor();
SoTimeSensor63->setDEF(QString("TourTime"));
SoTimeSensor63->setCycleInterval(5);
SoTimeSensor63->setLoop(true);
SoTransform22->addChild(*SoTimeSensor63);

SoROUTE* SoROUTE64 = new SoROUTE();
SoROUTE64->setFromNode(QString("TourTime"));
SoROUTE64->setFromField(QString("fraction_changed"));
SoROUTE64->setToNode(QString("Animate"));
SoROUTE64->setToField(QString("set_fraction"));
SoTransform22->addChild(*SoROUTE64);

SoROUTE* SoROUTE65 = new SoROUTE();
SoROUTE65->setFromNode(QString("Animate"));
SoROUTE65->setFromField(QString("translation_changed"));
SoROUTE65->setToNode(QString("transform"));
SoROUTE65->setToField(QString("set_translation"));
SoTransform22->addChild(*SoROUTE65);

SoROUTE* SoROUTE66 = new SoROUTE();
SoROUTE66->setFromNode(QString("Animate"));
SoROUTE66->setFromField(QString("a"));
SoROUTE66->setToNode(QString("shader"));
SoROUTE66->setToField(QString("a"));
SoTransform22->addChild(*SoROUTE66);

SoROUTE* SoROUTE67 = new SoROUTE();
SoROUTE67->setFromNode(QString("Animate"));
SoROUTE67->setFromField(QString("b"));
SoROUTE67->setToNode(QString("shader"));
SoROUTE67->setToField(QString("b"));
SoTransform22->addChild(*SoROUTE67);

SoROUTE* SoROUTE68 = new SoROUTE();
SoROUTE68->setFromNode(QString("Animate"));
SoROUTE68->setFromField(QString("c"));
SoROUTE68->setToNode(QString("shader"));
SoROUTE68->setToField(QString("c"));
SoTransform22->addChild(*SoROUTE68);

SoROUTE* SoROUTE69 = new SoROUTE();
SoROUTE69->setFromNode(QString("Animate"));
SoROUTE69->setFromField(QString("d"));
SoROUTE69->setToNode(QString("shader"));
SoROUTE69->setToField(QString("d"));
SoTransform22->addChild(*SoROUTE69);

SoROUTE* SoROUTE70 = new SoROUTE();
SoROUTE70->setFromNode(QString("Animate"));
SoROUTE70->setFromField(QString("tdelta"));
SoROUTE70->setToNode(QString("shader"));
SoROUTE70->setToField(QString("tdelta"));
SoTransform22->addChild(*SoROUTE70);

SoROUTE* SoROUTE71 = new SoROUTE();
SoROUTE71->setFromNode(QString("Animate"));
SoROUTE71->setFromField(QString("pdelta"));
SoROUTE71->setToNode(QString("shader"));
SoROUTE71->setToField(QString("pdelta"));
SoTransform22->addChild(*SoROUTE71);

SoProtoBody21->addChild(*SoTransform22);

SoProtoDeclare17->addChild(*SoProtoBody21);

SoNode16->addChild(*SoProtoDeclare17);

SoSceneManager0->setSceneGraph(*SoNode16);

return 0;
}

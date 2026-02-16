
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
SoNavigationInfo* SoNavigationInfo17 = new SoNavigationInfo();
SoNode16->addChild(*SoNavigationInfo17);

SoViewpoint* SoViewpoint18 = new SoViewpoint();
SoViewpoint18->setDescription(QString("Tour Views"));
SoViewpoint18->setPosition(new float[]{0.0,0.0,50.0});
SoNode16->addChild(*SoViewpoint18);

SoBackground* SoBackground19 = new SoBackground();
SoBackground19->setBackUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoBackground19->setBottomUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoBackground19->setFrontUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoBackground19->setLeftUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoBackground19->setRightUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoBackground19->setTopUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoNode16->addChild(*SoBackground19);

SoProtoDeclare* SoProtoDeclare20 = new SoProtoDeclare();
SoProtoDeclare20->setName(QString("FlowerProto"));
SoProtoInterface* SoProtoInterface21 = new SoProtoInterface();
Sofield* Sofield22 = new Sofield();
Sofield22->setName(QString("vertex"));
Sofield22->setAccessType(QString("inputOnly"));
Sofield22->setType(QString("MFString"));
Sofield22->setValue(QString("\"../shaders/freewrl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs\""));
SoProtoInterface21->addChild(*Sofield22);

Sofield* Sofield23 = new Sofield();
Sofield23->setName(QString("fragment"));
Sofield23->setAccessType(QString("inputOnly"));
Sofield23->setType(QString("MFString"));
Sofield23->setValue(QString("\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\""));
SoProtoInterface21->addChild(*Sofield23);

SoProtoDeclare20->addChild(*SoProtoInterface21);

SoProtoBody* SoProtoBody24 = new SoProtoBody();
SoTransform* SoTransform25 = new SoTransform();
SoTransform25->setDEF(QString("transform"));
SoShape* SoShape26 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance27 = new SoVRMLAppearance();
SoMaterial* SoMaterial28 = new SoMaterial();
SoMaterial28->setDiffuseColor(new float[]{0.7,0.7,0.7});
SoMaterial28->setSpecularColor(new float[]{0.5,0.5,0.5});
SoVRMLAppearance27->addChild(*SoMaterial28);

SoComposedCubeMapTexture* SoComposedCubeMapTexture29 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture29->setDEF(QString("texture"));
SoImageTexture* SoImageTexture30 = new SoImageTexture();
SoImageTexture30->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoComposedCubeMapTexture29->setBack(*SoImageTexture30);

SoImageTexture* SoImageTexture31 = new SoImageTexture();
SoImageTexture31->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoComposedCubeMapTexture29->setBottom(*SoImageTexture31);

SoImageTexture* SoImageTexture32 = new SoImageTexture();
SoImageTexture32->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoComposedCubeMapTexture29->setFront(*SoImageTexture32);

SoImageTexture* SoImageTexture33 = new SoImageTexture();
SoImageTexture33->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoComposedCubeMapTexture29->setLeft(*SoImageTexture33);

SoImageTexture* SoImageTexture34 = new SoImageTexture();
SoImageTexture34->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoComposedCubeMapTexture29->setRight(*SoImageTexture34);

SoImageTexture* SoImageTexture35 = new SoImageTexture();
SoImageTexture35->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoComposedCubeMapTexture29->setTop(*SoImageTexture35);

SoVRMLAppearance27->addChild(*SoComposedCubeMapTexture29);

SoComposedShader* SoComposedShader36 = new SoComposedShader();
SoComposedShader36->setDEF(QString("shader"));
SoComposedShader36->setLanguage(QString("GLSL"));
Sofield* Sofield37 = new Sofield();
Sofield37->setName(QString("fw_textureCoordGenType"));
Sofield37->setAccessType(QString("inputOutput"));
Sofield37->setType(QString("SFInt32"));
Sofield37->setValue(QString("0"));
SoComposedShader36->addChild(*Sofield37);

Sofield* Sofield38 = new Sofield();
Sofield38->setName(QString("chromaticDispertion"));
Sofield38->setAccessType(QString("initializeOnly"));
Sofield38->setType(QString("SFVec3f"));
Sofield38->setValue(QString("0.98 1 1.033"));
SoComposedShader36->addChild(*Sofield38);

Sofield* Sofield39 = new Sofield();
Sofield39->setName(QString("bias"));
Sofield39->setType(QString("SFFloat"));
Sofield39->setAccessType(QString("inputOutput"));
Sofield39->setValue(QString("0.5"));
SoComposedShader36->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setName(QString("scale"));
Sofield40->setType(QString("SFFloat"));
Sofield40->setAccessType(QString("inputOutput"));
Sofield40->setValue(QString("0.5"));
SoComposedShader36->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setName(QString("power"));
Sofield41->setType(QString("SFFloat"));
Sofield41->setAccessType(QString("inputOutput"));
Sofield41->setValue(QString("2"));
SoComposedShader36->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setName(QString("a"));
Sofield42->setType(QString("SFFloat"));
Sofield42->setAccessType(QString("inputOutput"));
Sofield42->setValue(QString("5"));
SoComposedShader36->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setName(QString("b"));
Sofield43->setType(QString("SFFloat"));
Sofield43->setAccessType(QString("inputOutput"));
Sofield43->setValue(QString("5"));
SoComposedShader36->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("c"));
Sofield44->setType(QString("SFFloat"));
Sofield44->setAccessType(QString("inputOutput"));
Sofield44->setValue(QString("20"));
SoComposedShader36->addChild(*Sofield44);

Sofield* Sofield45 = new Sofield();
Sofield45->setName(QString("d"));
Sofield45->setType(QString("SFFloat"));
Sofield45->setAccessType(QString("inputOutput"));
Sofield45->setValue(QString("20"));
SoComposedShader36->addChild(*Sofield45);

Sofield* Sofield46 = new Sofield();
Sofield46->setName(QString("tdelta"));
Sofield46->setType(QString("SFFloat"));
Sofield46->setAccessType(QString("inputOutput"));
Sofield46->setValue(QString("0"));
SoComposedShader36->addChild(*Sofield46);

Sofield* Sofield47 = new Sofield();
Sofield47->setName(QString("pdelta"));
Sofield47->setType(QString("SFFloat"));
Sofield47->setAccessType(QString("inputOutput"));
Sofield47->setValue(QString("0"));
SoComposedShader36->addChild(*Sofield47);

//<field name='cube' type='SFNode' accessType=\"inputOutput\">
//<ComposedCubeMapTexture USE=\"texture\"/>
//</field>
SoShaderPart* SoShaderPart48 = new SoShaderPart();
SoShaderPart48->setType(QString("VERTEX"));
SoIS* SoIS49 = new SoIS();
Soconnect* Soconnect50 = new Soconnect();
Soconnect50->setNodeField(QString("url"));
Soconnect50->setProtoField(QString("vertex"));
SoIS49->addChild(*Soconnect50);

SoShaderPart48->addChild(*SoIS49);

SoComposedShader36->setParts(*SoShaderPart48);

SoShaderPart* SoShaderPart51 = new SoShaderPart();
SoShaderPart51->setType(QString("FRAGMENT"));
SoIS* SoIS52 = new SoIS();
Soconnect* Soconnect53 = new Soconnect();
Soconnect53->setNodeField(QString("url"));
Soconnect53->setProtoField(QString("fragment"));
SoIS52->addChild(*Soconnect53);

SoShaderPart51->addChild(*SoIS52);

SoComposedShader36->setParts(*SoShaderPart51);

SoVRMLAppearance27->addChild(*SoComposedShader36);

SoShape26->addChild(*SoVRMLAppearance27);

SoSphere* SoSphere54 = new SoSphere();
SoSphere54->setRadius(5);
SoShape26->setGeometry(*SoSphere54);

SoTransform25->addChild(*SoShape26);

SoScript* SoScript55 = new SoScript();
SoScript55->setDEF(QString("Animate"));
SoScript55->setDirectOutput(true);
Sofield* Sofield56 = new Sofield();
Sofield56->setName(QString("translation"));
Sofield56->setAccessType(QString("inputOutput"));
Sofield56->setType(QString("SFVec3f"));
Sofield56->setValue(QString("0 0 0"));
SoScript55->addChild(*Sofield56);

Sofield* Sofield57 = new Sofield();
Sofield57->setName(QString("velocity"));
Sofield57->setAccessType(QString("inputOutput"));
Sofield57->setType(QString("SFVec3f"));
Sofield57->setValue(QString("0 0 0"));
SoScript55->addChild(*Sofield57);

Sofield* Sofield58 = new Sofield();
Sofield58->setName(QString("set_fraction"));
Sofield58->setAccessType(QString("inputOutput"));
Sofield58->setType(QString("SFFloat"));
SoScript55->addChild(*Sofield58);

Sofield* Sofield59 = new Sofield();
Sofield59->setName(QString("a"));
Sofield59->setType(QString("SFFloat"));
Sofield59->setAccessType(QString("inputOutput"));
Sofield59->setValue(QString("0.5"));
SoScript55->addChild(*Sofield59);

Sofield* Sofield60 = new Sofield();
Sofield60->setName(QString("b"));
Sofield60->setType(QString("SFFloat"));
Sofield60->setAccessType(QString("inputOutput"));
Sofield60->setValue(QString("0.5"));
SoScript55->addChild(*Sofield60);

Sofield* Sofield61 = new Sofield();
Sofield61->setName(QString("c"));
Sofield61->setType(QString("SFFloat"));
Sofield61->setAccessType(QString("inputOutput"));
Sofield61->setValue(QString("3"));
SoScript55->addChild(*Sofield61);

Sofield* Sofield62 = new Sofield();
Sofield62->setName(QString("d"));
Sofield62->setType(QString("SFFloat"));
Sofield62->setAccessType(QString("inputOutput"));
Sofield62->setValue(QString("3"));
SoScript55->addChild(*Sofield62);

Sofield* Sofield63 = new Sofield();
Sofield63->setName(QString("tdelta"));
Sofield63->setType(QString("SFFloat"));
Sofield63->setAccessType(QString("inputOutput"));
Sofield63->setValue(QString("0.5"));
SoScript55->addChild(*Sofield63);

Sofield* Sofield64 = new Sofield();
Sofield64->setName(QString("pdelta"));
Sofield64->setType(QString("SFFloat"));
Sofield64->setAccessType(QString("inputOutput"));
Sofield64->setValue(QString("0.5"));
SoScript55->addChild(*Sofield64);


//SoScript55->setSourceCode(QString("ecmascript:")+
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
SoTransform25->addChild(*SoScript55);

SoTimeSensor* SoTimeSensor65 = new SoTimeSensor();
SoTimeSensor65->setDEF(QString("TourTime"));
SoTimeSensor65->setCycleInterval(5);
SoTimeSensor65->setLoop(true);
SoTransform25->addChild(*SoTimeSensor65);

SoROUTE* SoROUTE66 = new SoROUTE();
SoROUTE66->setFromNode(QString("TourTime"));
SoROUTE66->setFromField(QString("fraction_changed"));
SoROUTE66->setToNode(QString("Animate"));
SoROUTE66->setToField(QString("set_fraction"));
SoTransform25->addChild(*SoROUTE66);

SoROUTE* SoROUTE67 = new SoROUTE();
SoROUTE67->setFromNode(QString("Animate"));
SoROUTE67->setFromField(QString("translation_changed"));
SoROUTE67->setToNode(QString("transform"));
SoROUTE67->setToField(QString("set_translation"));
SoTransform25->addChild(*SoROUTE67);

SoROUTE* SoROUTE68 = new SoROUTE();
SoROUTE68->setFromNode(QString("Animate"));
SoROUTE68->setFromField(QString("a"));
SoROUTE68->setToNode(QString("shader"));
SoROUTE68->setToField(QString("a"));
SoTransform25->addChild(*SoROUTE68);

SoROUTE* SoROUTE69 = new SoROUTE();
SoROUTE69->setFromNode(QString("Animate"));
SoROUTE69->setFromField(QString("b"));
SoROUTE69->setToNode(QString("shader"));
SoROUTE69->setToField(QString("b"));
SoTransform25->addChild(*SoROUTE69);

SoROUTE* SoROUTE70 = new SoROUTE();
SoROUTE70->setFromNode(QString("Animate"));
SoROUTE70->setFromField(QString("c"));
SoROUTE70->setToNode(QString("shader"));
SoROUTE70->setToField(QString("c"));
SoTransform25->addChild(*SoROUTE70);

SoROUTE* SoROUTE71 = new SoROUTE();
SoROUTE71->setFromNode(QString("Animate"));
SoROUTE71->setFromField(QString("d"));
SoROUTE71->setToNode(QString("shader"));
SoROUTE71->setToField(QString("d"));
SoTransform25->addChild(*SoROUTE71);

SoROUTE* SoROUTE72 = new SoROUTE();
SoROUTE72->setFromNode(QString("Animate"));
SoROUTE72->setFromField(QString("tdelta"));
SoROUTE72->setToNode(QString("shader"));
SoROUTE72->setToField(QString("tdelta"));
SoTransform25->addChild(*SoROUTE72);

SoROUTE* SoROUTE73 = new SoROUTE();
SoROUTE73->setFromNode(QString("Animate"));
SoROUTE73->setFromField(QString("pdelta"));
SoROUTE73->setToNode(QString("shader"));
SoROUTE73->setToField(QString("pdelta"));
SoTransform25->addChild(*SoROUTE73);

SoProtoBody24->addChild(*SoTransform25);

SoProtoDeclare20->addChild(*SoProtoBody24);

SoNode16->addChild(*SoProtoDeclare20);

SoProtoInstance* SoProtoInstance74 = new SoProtoInstance();
SoProtoInstance74->setName(QString("FlowerProto"));
SoField* SoField75 = new SoField();
SoField75->setName(QString("vertex"));
SoField75->setValue(QString("\"../shaders/freewrl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs\""));
SoProtoInstance74->addChild(*SoField75);

SoField* SoField76 = new SoField();
SoField76->setName(QString("fragment"));
SoField76->setValue(QString("\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\""));
SoProtoInstance74->addChild(*SoField76);

SoNode16->addChild(*SoProtoInstance74);

SoSceneManager0->setSceneGraph(*SoNode16);

return 0;
}


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
Someta10->setContent(QString("mirror2.x3d"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("creator"));
Someta11->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("generator"));
Someta12->setContent(QString("manual"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("identifier"));
Someta13->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("description"));
Someta14->setContent(QString("a mirrored sphere"));
Sohead1->addMeta(*Someta14);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode15 = new SoNode();
SoViewpoint* SoViewpoint16 = new SoViewpoint();
SoViewpoint16->setPosition(new float[]{0.0,5.0,100.0});
SoViewpoint16->setDescription(QString("Switch background and images texture"));
SoNode15->addChild(*SoViewpoint16);

SoBackground* SoBackground17 = new SoBackground();
SoBackground17->setDEF(QString("cube"));
SoBackground17->setLeftUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png")}, 2);
SoBackground17->setRightUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png")}, 2);
SoBackground17->setFrontUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png")}, 2);
SoBackground17->setBackUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png")}, 2);
SoBackground17->setTopUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png")}, 2);
SoBackground17->setBottomUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")}, 2);
SoNode15->addChild(*SoBackground17);

SoTransform* SoTransform18 = new SoTransform();
SoShape* SoShape19 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance20 = new SoVRMLAppearance();
SoMaterial* SoMaterial21 = new SoMaterial();
SoMaterial21->setDiffuseColor(new float[]{0.7,0.7,0.7});
SoMaterial21->setSpecularColor(new float[]{0.5,0.5,0.5});
SoVRMLAppearance20->addChild(*SoMaterial21);

SoComposedCubeMapTexture* SoComposedCubeMapTexture22 = new SoComposedCubeMapTexture();
SoImageTexture* SoImageTexture23 = new SoImageTexture();
SoImageTexture23->setDEF(QString("backShader"));
SoImageTexture23->setUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png")}, 2);
SoComposedCubeMapTexture22->setBack(*SoImageTexture23);

SoImageTexture* SoImageTexture24 = new SoImageTexture();
SoImageTexture24->setDEF(QString("bottomShader"));
SoImageTexture24->setUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")}, 2);
SoComposedCubeMapTexture22->setBottom(*SoImageTexture24);

SoImageTexture* SoImageTexture25 = new SoImageTexture();
SoImageTexture25->setDEF(QString("frontShader"));
SoImageTexture25->setUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png")}, 2);
SoComposedCubeMapTexture22->setFront(*SoImageTexture25);

SoImageTexture* SoImageTexture26 = new SoImageTexture();
SoImageTexture26->setDEF(QString("leftShader"));
SoImageTexture26->setUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png")}, 2);
SoComposedCubeMapTexture22->setLeft(*SoImageTexture26);

SoImageTexture* SoImageTexture27 = new SoImageTexture();
SoImageTexture27->setDEF(QString("rightShader"));
SoImageTexture27->setUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png")}, 2);
SoComposedCubeMapTexture22->setRight(*SoImageTexture27);

SoImageTexture* SoImageTexture28 = new SoImageTexture();
SoImageTexture28->setDEF(QString("topShader"));
SoImageTexture28->setUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png")}, 2);
SoComposedCubeMapTexture22->setTop(*SoImageTexture28);

SoVRMLAppearance20->addChild(*SoComposedCubeMapTexture22);

SoComposedShader* SoComposedShader29 = new SoComposedShader();
SoComposedShader29->setDEF(QString("x_ite"));
SoComposedShader29->setLanguage(QString("GLSL"));
//http://hypertextbook.com/facts/2005/JustinChe.shtml
Sofield* Sofield30 = new Sofield();
Sofield30->setName(QString("chromaticDispertion"));
Sofield30->setAccessType(QString("inputOutput"));
Sofield30->setType(QString("SFVec3f"));
Sofield30->setValue(QString("0.98 1 1.033"));
SoComposedShader29->addChild(*Sofield30);

Sofield* Sofield31 = new Sofield();
Sofield31->setName(QString("cube"));
Sofield31->setAccessType(QString("inputOutput"));
Sofield31->setType(QString("SFInt32"));
Sofield31->setValue(QString("0"));
SoComposedShader29->addChild(*Sofield31);

Sofield* Sofield32 = new Sofield();
Sofield32->setName(QString("bias"));
Sofield32->setAccessType(QString("inputOutput"));
Sofield32->setType(QString("SFFloat"));
Sofield32->setValue(QString("0.5"));
SoComposedShader29->addChild(*Sofield32);

Sofield* Sofield33 = new Sofield();
Sofield33->setName(QString("scale"));
Sofield33->setAccessType(QString("inputOutput"));
Sofield33->setType(QString("SFFloat"));
Sofield33->setValue(QString("0.5"));
SoComposedShader29->addChild(*Sofield33);

Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("power"));
Sofield34->setAccessType(QString("inputOutput"));
Sofield34->setType(QString("SFFloat"));
Sofield34->setValue(QString("2"));
SoComposedShader29->addChild(*Sofield34);

SoShaderPart* SoShaderPart35 = new SoShaderPart();
SoShaderPart35->setUrl(new QString[]{QString("../shaders/x_ite.vs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs")}, 2);
SoShaderPart35->setType(QString("VERTEX"));
SoComposedShader29->setParts(*SoShaderPart35);

SoShaderPart* SoShaderPart36 = new SoShaderPart();
SoShaderPart36->setUrl(new QString[]{QString("../shaders/x_itemix.fs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs")}, 2);
SoShaderPart36->setType(QString("FRAGMENT"));
SoComposedShader29->setParts(*SoShaderPart36);

SoVRMLAppearance20->addChild(*SoComposedShader29);

SoComposedShader* SoComposedShader37 = new SoComposedShader();
SoComposedShader37->setDEF(QString("x3dom"));
SoComposedShader37->setLanguage(QString("GLSL"));
Sofield* Sofield38 = new Sofield();
Sofield38->setName(QString("chromaticDispertion"));
Sofield38->setAccessType(QString("inputOutput"));
Sofield38->setType(QString("SFVec3f"));
Sofield38->setValue(QString("0.98 1 1.033"));
SoComposedShader37->addChild(*Sofield38);

Sofield* Sofield39 = new Sofield();
Sofield39->setName(QString("cube"));
Sofield39->setAccessType(QString("inputOutput"));
Sofield39->setType(QString("SFInt32"));
Sofield39->setValue(QString("0"));
SoComposedShader37->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setName(QString("bias"));
Sofield40->setAccessType(QString("inputOutput"));
Sofield40->setType(QString("SFFloat"));
Sofield40->setValue(QString("0.5"));
SoComposedShader37->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setName(QString("scale"));
Sofield41->setAccessType(QString("inputOutput"));
Sofield41->setType(QString("SFFloat"));
Sofield41->setValue(QString("0.5"));
SoComposedShader37->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setName(QString("power"));
Sofield42->setAccessType(QString("inputOutput"));
Sofield42->setType(QString("SFFloat"));
Sofield42->setValue(QString("2"));
SoComposedShader37->addChild(*Sofield42);

SoShaderPart* SoShaderPart43 = new SoShaderPart();
SoShaderPart43->setUrl(new QString[]{QString("../shaders/x3dom.vs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs")}, 2);
SoShaderPart43->setType(QString("VERTEX"));
SoComposedShader37->setParts(*SoShaderPart43);

SoShaderPart* SoShaderPart44 = new SoShaderPart();
SoShaderPart44->setUrl(new QString[]{QString("../shaders/mix.fs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs")}, 2);
SoShaderPart44->setType(QString("FRAGMENT"));
SoComposedShader37->setParts(*SoShaderPart44);

SoVRMLAppearance20->addChild(*SoComposedShader37);

SoShape19->addChild(*SoVRMLAppearance20);

SoSphere* SoSphere45 = new SoSphere();
SoSphere45->setRadius(30);
SoShape19->setGeometry(*SoSphere45);

SoTransform18->addChild(*SoShape19);

SoScript* SoScript46 = new SoScript();
SoScript46->setDEF(QString("UrlSelector"));
SoScript46->setDirectOutput(true);
Sofield* Sofield47 = new Sofield();
Sofield47->setName(QString("frontUrls"));
Sofield47->setType(QString("MFString"));
Sofield47->setAccessType(QString("initializeOnly"));
Sofield47->setValue(QString("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\""));
SoScript46->addChild(*Sofield47);

Sofield* Sofield48 = new Sofield();
Sofield48->setName(QString("backUrls"));
Sofield48->setType(QString("MFString"));
Sofield48->setAccessType(QString("initializeOnly"));
Sofield48->setValue(QString("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\""));
SoScript46->addChild(*Sofield48);

Sofield* Sofield49 = new Sofield();
Sofield49->setName(QString("leftUrls"));
Sofield49->setType(QString("MFString"));
Sofield49->setAccessType(QString("initializeOnly"));
Sofield49->setValue(QString("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\""));
SoScript46->addChild(*Sofield49);

Sofield* Sofield50 = new Sofield();
Sofield50->setName(QString("rightUrls"));
Sofield50->setType(QString("MFString"));
Sofield50->setAccessType(QString("initializeOnly"));
Sofield50->setValue(QString("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\""));
SoScript46->addChild(*Sofield50);

Sofield* Sofield51 = new Sofield();
Sofield51->setName(QString("topUrls"));
Sofield51->setType(QString("MFString"));
Sofield51->setAccessType(QString("initializeOnly"));
Sofield51->setValue(QString("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\""));
SoScript46->addChild(*Sofield51);

Sofield* Sofield52 = new Sofield();
Sofield52->setName(QString("bottomUrls"));
Sofield52->setType(QString("MFString"));
Sofield52->setAccessType(QString("initializeOnly"));
Sofield52->setValue(QString("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\""));
SoScript46->addChild(*Sofield52);

Sofield* Sofield53 = new Sofield();
Sofield53->setName(QString("front_changed"));
Sofield53->setType(QString("MFString"));
Sofield53->setAccessType(QString("outputOnly"));
SoScript46->addChild(*Sofield53);

Sofield* Sofield54 = new Sofield();
Sofield54->setName(QString("back_changed"));
Sofield54->setType(QString("MFString"));
Sofield54->setAccessType(QString("outputOnly"));
SoScript46->addChild(*Sofield54);

Sofield* Sofield55 = new Sofield();
Sofield55->setName(QString("left_changed"));
Sofield55->setType(QString("MFString"));
Sofield55->setAccessType(QString("outputOnly"));
SoScript46->addChild(*Sofield55);

Sofield* Sofield56 = new Sofield();
Sofield56->setName(QString("right_changed"));
Sofield56->setType(QString("MFString"));
Sofield56->setAccessType(QString("outputOnly"));
SoScript46->addChild(*Sofield56);

Sofield* Sofield57 = new Sofield();
Sofield57->setName(QString("top_changed"));
Sofield57->setType(QString("MFString"));
Sofield57->setAccessType(QString("outputOnly"));
SoScript46->addChild(*Sofield57);

Sofield* Sofield58 = new Sofield();
Sofield58->setName(QString("bottom_changed"));
Sofield58->setType(QString("MFString"));
Sofield58->setAccessType(QString("outputOnly"));
SoScript46->addChild(*Sofield58);

Sofield* Sofield59 = new Sofield();
Sofield59->setName(QString("set_fraction"));
Sofield59->setType(QString("SFFloat"));
Sofield59->setAccessType(QString("inputOnly"));
SoScript46->addChild(*Sofield59);

Sofield* Sofield60 = new Sofield();
Sofield60->setName(QString("old"));
Sofield60->setType(QString("SFInt32"));
Sofield60->setAccessType(QString("inputOutput"));
Sofield60->setValue(QString("-1"));
SoScript46->addChild(*Sofield60);


//SoScript46->setSourceCode(QString("ecmascript:")+
//_T("        function set_fraction( f, tm ) {")+
//_T("	    var side = Math.floor(f*frontUrls.length);")+
//_T("	    if (side > frontUrls.length-1) {")+
//_T("	    	side = 0;")+
//_T("	    }")+
//_T("	    if (side != old) {")+
//_T("	    	    // Browser.print(f+\" \"+side);")+
//_T("	    	    old = side;")+
//_T("		    front_changed[0] = frontUrls[side];")+
//_T("		    back_changed[0] = backUrls[side];")+
//_T("		    left_changed[0] = leftUrls[side];")+
//_T("		    right_changed[0] = rightUrls[side];")+
//_T("		    top_changed[0] = topUrls[side];")+
//_T("		    bottom_changed[0] = bottomUrls[side];")+
//_T("            }")+
//_T("        }"));
SoTransform18->addChild(*SoScript46);

SoTimeSensor* SoTimeSensor61 = new SoTimeSensor();
SoTimeSensor61->setDEF(QString("Clock"));
SoTimeSensor61->setCycleInterval(45);
SoTimeSensor61->setLoop(true);
SoTransform18->addChild(*SoTimeSensor61);

SoROUTE* SoROUTE62 = new SoROUTE();
SoROUTE62->setFromNode(QString("Clock"));
SoROUTE62->setFromField(QString("fraction_changed"));
SoROUTE62->setToNode(QString("UrlSelector"));
SoROUTE62->setToField(QString("set_fraction"));
SoTransform18->addChild(*SoROUTE62);

SoROUTE* SoROUTE63 = new SoROUTE();
SoROUTE63->setFromNode(QString("UrlSelector"));
SoROUTE63->setFromField(QString("front_changed"));
SoROUTE63->setToNode(QString("cube"));
SoROUTE63->setToField(QString("frontUrl"));
SoTransform18->addChild(*SoROUTE63);

SoROUTE* SoROUTE64 = new SoROUTE();
SoROUTE64->setFromNode(QString("UrlSelector"));
SoROUTE64->setFromField(QString("back_changed"));
SoROUTE64->setToNode(QString("cube"));
SoROUTE64->setToField(QString("backUrl"));
SoTransform18->addChild(*SoROUTE64);

SoROUTE* SoROUTE65 = new SoROUTE();
SoROUTE65->setFromNode(QString("UrlSelector"));
SoROUTE65->setFromField(QString("left_changed"));
SoROUTE65->setToNode(QString("cube"));
SoROUTE65->setToField(QString("leftUrl"));
SoTransform18->addChild(*SoROUTE65);

SoROUTE* SoROUTE66 = new SoROUTE();
SoROUTE66->setFromNode(QString("UrlSelector"));
SoROUTE66->setFromField(QString("right_changed"));
SoROUTE66->setToNode(QString("cube"));
SoROUTE66->setToField(QString("rightUrl"));
SoTransform18->addChild(*SoROUTE66);

SoROUTE* SoROUTE67 = new SoROUTE();
SoROUTE67->setFromNode(QString("UrlSelector"));
SoROUTE67->setFromField(QString("top_changed"));
SoROUTE67->setToNode(QString("cube"));
SoROUTE67->setToField(QString("topUrl"));
SoTransform18->addChild(*SoROUTE67);

SoROUTE* SoROUTE68 = new SoROUTE();
SoROUTE68->setFromNode(QString("UrlSelector"));
SoROUTE68->setFromField(QString("bottom_changed"));
SoROUTE68->setToNode(QString("cube"));
SoROUTE68->setToField(QString("bottomUrl"));
SoTransform18->addChild(*SoROUTE68);

SoROUTE* SoROUTE69 = new SoROUTE();
SoROUTE69->setFromNode(QString("UrlSelector"));
SoROUTE69->setFromField(QString("front_changed"));
SoROUTE69->setToNode(QString("frontShader"));
SoROUTE69->setToField(QString("url"));
SoTransform18->addChild(*SoROUTE69);

SoROUTE* SoROUTE70 = new SoROUTE();
SoROUTE70->setFromNode(QString("UrlSelector"));
SoROUTE70->setFromField(QString("back_changed"));
SoROUTE70->setToNode(QString("backShader"));
SoROUTE70->setToField(QString("url"));
SoTransform18->addChild(*SoROUTE70);

SoROUTE* SoROUTE71 = new SoROUTE();
SoROUTE71->setFromNode(QString("UrlSelector"));
SoROUTE71->setFromField(QString("left_changed"));
SoROUTE71->setToNode(QString("leftShader"));
SoROUTE71->setToField(QString("url"));
SoTransform18->addChild(*SoROUTE71);

SoROUTE* SoROUTE72 = new SoROUTE();
SoROUTE72->setFromNode(QString("UrlSelector"));
SoROUTE72->setFromField(QString("right_changed"));
SoROUTE72->setToNode(QString("rightShader"));
SoROUTE72->setToField(QString("url"));
SoTransform18->addChild(*SoROUTE72);

SoROUTE* SoROUTE73 = new SoROUTE();
SoROUTE73->setFromNode(QString("UrlSelector"));
SoROUTE73->setFromField(QString("top_changed"));
SoROUTE73->setToNode(QString("topShader"));
SoROUTE73->setToField(QString("url"));
SoTransform18->addChild(*SoROUTE73);

SoROUTE* SoROUTE74 = new SoROUTE();
SoROUTE74->setFromNode(QString("UrlSelector"));
SoROUTE74->setFromField(QString("bottom_changed"));
SoROUTE74->setToNode(QString("bottomShader"));
SoROUTE74->setToField(QString("url"));
SoTransform18->addChild(*SoROUTE74);

SoNode15->addChild(*SoTransform18);

SoSceneManager0->setSceneGraph(*SoNode15);

return 0;
}

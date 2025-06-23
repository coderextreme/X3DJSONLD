
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
Someta10->setContent(QString("mirror.x3d"));
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
Someta13->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/mirror.x3d"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("description"));
Someta14->setContent(QString("sphere with alternating backgrounds"));
Sohead1->addMeta(*Someta14);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode15 = new SoNode();
SoViewpoint* SoViewpoint16 = new SoViewpoint();
SoViewpoint16->setPosition(new float[]{0.0,5.0,100.0});
SoViewpoint16->setDescription(QString("Switch background and images texture"));
SoNode15->addChild(*SoViewpoint16);

SoTextureBackground* SoTextureBackground17 = new SoTextureBackground();
SoImageTexture* SoImageTexture18 = new SoImageTexture();
SoImageTexture18->setDEF(QString("leftBackgroundTexture"));
SoImageTexture18->setUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_left.png"), QString("https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png")}, 2);
SoTextureBackground17->setLeftTexture(*SoImageTexture18);

SoImageTexture* SoImageTexture19 = new SoImageTexture();
SoImageTexture19->setDEF(QString("rightBackgroundTexture"));
SoImageTexture19->setUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_right.png"), QString("https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png")}, 2);
SoTextureBackground17->setRightTexture(*SoImageTexture19);

SoImageTexture* SoImageTexture20 = new SoImageTexture();
SoImageTexture20->setDEF(QString("frontBackgroundTexture"));
SoImageTexture20->setUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_front.png"), QString("https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png")}, 2);
SoTextureBackground17->setFrontTexture(*SoImageTexture20);

SoImageTexture* SoImageTexture21 = new SoImageTexture();
SoImageTexture21->setDEF(QString("backBackgroundTexture"));
SoImageTexture21->setUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_back.png"), QString("https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png")}, 2);
SoTextureBackground17->setBackTexture(*SoImageTexture21);

SoImageTexture* SoImageTexture22 = new SoImageTexture();
SoImageTexture22->setDEF(QString("topBackgroundTexture"));
SoImageTexture22->setUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_top.png"), QString("https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png")}, 2);
SoTextureBackground17->setTopTexture(*SoImageTexture22);

SoImageTexture* SoImageTexture23 = new SoImageTexture();
SoImageTexture23->setDEF(QString("bottomBackgroundTexture"));
SoImageTexture23->setUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_bottom.png"), QString("https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")}, 2);
SoTextureBackground17->setBottomTexture(*SoImageTexture23);

SoNode15->addChild(*SoTextureBackground17);

SoTransform* SoTransform24 = new SoTransform();
SoShape* SoShape25 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance26 = new SoVRMLAppearance();
SoMaterial* SoMaterial27 = new SoMaterial();
SoMaterial27->setDiffuseColor(new float[]{0.7,0.7,0.7});
SoMaterial27->setSpecularColor(new float[]{0.5,0.5,0.5});
SoVRMLAppearance26->addChild(*SoMaterial27);

SoComposedCubeMapTexture* SoComposedCubeMapTexture28 = new SoComposedCubeMapTexture();
SoImageTexture* SoImageTexture29 = new SoImageTexture();
SoImageTexture29->setDEF(QString("backShader"));
SoImageTexture29->setUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_back.png"), QString("https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png")}, 2);
SoComposedCubeMapTexture28->setBack(*SoImageTexture29);

SoImageTexture* SoImageTexture30 = new SoImageTexture();
SoImageTexture30->setDEF(QString("bottomShader"));
SoImageTexture30->setUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_bottom.png"), QString("https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")}, 2);
SoComposedCubeMapTexture28->setBottom(*SoImageTexture30);

SoImageTexture* SoImageTexture31 = new SoImageTexture();
SoImageTexture31->setDEF(QString("frontShader"));
SoImageTexture31->setUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_front.png"), QString("https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png")}, 2);
SoComposedCubeMapTexture28->setFront(*SoImageTexture31);

SoImageTexture* SoImageTexture32 = new SoImageTexture();
SoImageTexture32->setDEF(QString("leftShader"));
SoImageTexture32->setUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_left.png"), QString("https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png")}, 2);
SoComposedCubeMapTexture28->setLeft(*SoImageTexture32);

SoImageTexture* SoImageTexture33 = new SoImageTexture();
SoImageTexture33->setDEF(QString("rightShader"));
SoImageTexture33->setUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_right.png"), QString("https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png")}, 2);
SoComposedCubeMapTexture28->setRight(*SoImageTexture33);

SoImageTexture* SoImageTexture34 = new SoImageTexture();
SoImageTexture34->setDEF(QString("topShader"));
SoImageTexture34->setUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_top.png"), QString("https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png")}, 2);
SoComposedCubeMapTexture28->setTop(*SoImageTexture34);

SoVRMLAppearance26->addChild(*SoComposedCubeMapTexture28);

SoComposedShader* SoComposedShader35 = new SoComposedShader();
SoComposedShader35->setDEF(QString("x3dom"));
SoComposedShader35->setLanguage(QString("GLSL"));
Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("chromaticDispertion"));
Sofield36->setAccessType(QString("inputOutput"));
Sofield36->setType(QString("SFVec3f"));
Sofield36->setValue(QString("0.98 1 1.033"));
SoComposedShader35->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setName(QString("cube"));
Sofield37->setAccessType(QString("inputOutput"));
Sofield37->setType(QString("SFInt32"));
Sofield37->setValue(QString("0"));
SoComposedShader35->addChild(*Sofield37);

Sofield* Sofield38 = new Sofield();
Sofield38->setName(QString("bias"));
Sofield38->setAccessType(QString("inputOutput"));
Sofield38->setType(QString("SFFloat"));
Sofield38->setValue(QString("0.5"));
SoComposedShader35->addChild(*Sofield38);

Sofield* Sofield39 = new Sofield();
Sofield39->setName(QString("scale"));
Sofield39->setAccessType(QString("inputOutput"));
Sofield39->setType(QString("SFFloat"));
Sofield39->setValue(QString("0.5"));
SoComposedShader35->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setName(QString("power"));
Sofield40->setAccessType(QString("inputOutput"));
Sofield40->setType(QString("SFFloat"));
Sofield40->setValue(QString("2"));
SoComposedShader35->addChild(*Sofield40);

SoShaderPart* SoShaderPart41 = new SoShaderPart();
SoShaderPart41->setUrl(new QString[]{QString("../shaders/x3dom.vs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs")}, 2);
SoShaderPart41->setType(QString("VERTEX"));
SoComposedShader35->setParts(*SoShaderPart41);

SoShaderPart* SoShaderPart42 = new SoShaderPart();
SoShaderPart42->setUrl(new QString[]{QString("../shaders/mix.fs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs")}, 2);
SoShaderPart42->setType(QString("FRAGMENT"));
SoComposedShader35->setParts(*SoShaderPart42);

SoVRMLAppearance26->addChild(*SoComposedShader35);

SoComposedShader* SoComposedShader43 = new SoComposedShader();
SoComposedShader43->setDEF(QString("x_ite"));
SoComposedShader43->setLanguage(QString("GLSL"));
//http://hypertextbook.com/facts/2005/JustinChe.shtml
Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("chromaticDispertion"));
Sofield44->setAccessType(QString("inputOutput"));
Sofield44->setType(QString("SFVec3f"));
Sofield44->setValue(QString("0.98 1 1.033"));
SoComposedShader43->addChild(*Sofield44);

Sofield* Sofield45 = new Sofield();
Sofield45->setName(QString("cube"));
Sofield45->setAccessType(QString("inputOutput"));
Sofield45->setType(QString("SFInt32"));
Sofield45->setValue(QString("0"));
SoComposedShader43->addChild(*Sofield45);

Sofield* Sofield46 = new Sofield();
Sofield46->setName(QString("bias"));
Sofield46->setAccessType(QString("inputOutput"));
Sofield46->setType(QString("SFFloat"));
Sofield46->setValue(QString("0.5"));
SoComposedShader43->addChild(*Sofield46);

Sofield* Sofield47 = new Sofield();
Sofield47->setName(QString("scale"));
Sofield47->setAccessType(QString("inputOutput"));
Sofield47->setType(QString("SFFloat"));
Sofield47->setValue(QString("0.5"));
SoComposedShader43->addChild(*Sofield47);

Sofield* Sofield48 = new Sofield();
Sofield48->setName(QString("power"));
Sofield48->setAccessType(QString("inputOutput"));
Sofield48->setType(QString("SFFloat"));
Sofield48->setValue(QString("2"));
SoComposedShader43->addChild(*Sofield48);

SoShaderPart* SoShaderPart49 = new SoShaderPart();
SoShaderPart49->setUrl(new QString[]{QString("../shaders/x_ite.vs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs")}, 2);
SoShaderPart49->setType(QString("VERTEX"));
SoComposedShader43->setParts(*SoShaderPart49);

SoShaderPart* SoShaderPart50 = new SoShaderPart();
SoShaderPart50->setUrl(new QString[]{QString("../shaders/x_itemix.fs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs")}, 2);
SoShaderPart50->setType(QString("FRAGMENT"));
SoComposedShader43->setParts(*SoShaderPart50);

SoVRMLAppearance26->addChild(*SoComposedShader43);

SoShape25->addChild(*SoVRMLAppearance26);

SoSphere* SoSphere51 = new SoSphere();
SoSphere51->setRadius(30);
SoShape25->setGeometry(*SoSphere51);

SoTransform24->addChild(*SoShape25);

SoScript* SoScript52 = new SoScript();
SoScript52->setDEF(QString("UrlSelector"));
SoScript52->setDirectOutput(true);
Sofield* Sofield53 = new Sofield();
Sofield53->setName(QString("frontUrls"));
Sofield53->setType(QString("MFString"));
Sofield53->setAccessType(QString("initializeOnly"));
Sofield53->setValue(QString("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\""));
SoScript52->addChild(*Sofield53);

Sofield* Sofield54 = new Sofield();
Sofield54->setName(QString("backUrls"));
Sofield54->setType(QString("MFString"));
Sofield54->setAccessType(QString("initializeOnly"));
Sofield54->setValue(QString("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\""));
SoScript52->addChild(*Sofield54);

Sofield* Sofield55 = new Sofield();
Sofield55->setName(QString("leftUrls"));
Sofield55->setType(QString("MFString"));
Sofield55->setAccessType(QString("initializeOnly"));
Sofield55->setValue(QString("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\""));
SoScript52->addChild(*Sofield55);

Sofield* Sofield56 = new Sofield();
Sofield56->setName(QString("rightUrls"));
Sofield56->setType(QString("MFString"));
Sofield56->setAccessType(QString("initializeOnly"));
Sofield56->setValue(QString("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\""));
SoScript52->addChild(*Sofield56);

Sofield* Sofield57 = new Sofield();
Sofield57->setName(QString("topUrls"));
Sofield57->setType(QString("MFString"));
Sofield57->setAccessType(QString("initializeOnly"));
Sofield57->setValue(QString("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\""));
SoScript52->addChild(*Sofield57);

Sofield* Sofield58 = new Sofield();
Sofield58->setName(QString("bottomUrls"));
Sofield58->setType(QString("MFString"));
Sofield58->setAccessType(QString("initializeOnly"));
Sofield58->setValue(QString("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\""));
SoScript52->addChild(*Sofield58);

Sofield* Sofield59 = new Sofield();
Sofield59->setName(QString("front_changed"));
Sofield59->setType(QString("MFString"));
Sofield59->setAccessType(QString("outputOnly"));
SoScript52->addChild(*Sofield59);

Sofield* Sofield60 = new Sofield();
Sofield60->setName(QString("back_changed"));
Sofield60->setType(QString("MFString"));
Sofield60->setAccessType(QString("outputOnly"));
SoScript52->addChild(*Sofield60);

Sofield* Sofield61 = new Sofield();
Sofield61->setName(QString("left_changed"));
Sofield61->setType(QString("MFString"));
Sofield61->setAccessType(QString("outputOnly"));
SoScript52->addChild(*Sofield61);

Sofield* Sofield62 = new Sofield();
Sofield62->setName(QString("right_changed"));
Sofield62->setType(QString("MFString"));
Sofield62->setAccessType(QString("outputOnly"));
SoScript52->addChild(*Sofield62);

Sofield* Sofield63 = new Sofield();
Sofield63->setName(QString("top_changed"));
Sofield63->setType(QString("MFString"));
Sofield63->setAccessType(QString("outputOnly"));
SoScript52->addChild(*Sofield63);

Sofield* Sofield64 = new Sofield();
Sofield64->setName(QString("bottom_changed"));
Sofield64->setType(QString("MFString"));
Sofield64->setAccessType(QString("outputOnly"));
SoScript52->addChild(*Sofield64);

Sofield* Sofield65 = new Sofield();
Sofield65->setName(QString("set_fraction"));
Sofield65->setType(QString("SFFloat"));
Sofield65->setAccessType(QString("inputOnly"));
SoScript52->addChild(*Sofield65);

Sofield* Sofield66 = new Sofield();
Sofield66->setName(QString("old"));
Sofield66->setType(QString("SFInt32"));
Sofield66->setAccessType(QString("inputOutput"));
Sofield66->setValue(QString("-1"));
SoScript52->addChild(*Sofield66);


//SoScript52->setSourceCode(QString("ecmascript:")+
//_T("        function set_fraction( f, tm ) {")+
//_T("	    var side = Math.floor(f*frontUrls.length);")+
//_T("	    if (side > frontUrls.length-1) {")+
//_T("	    	side = 0;")+
//_T("	    }")+
//_T("	    if (side != old) {")+
//_T("	    	    Browser.print(f+\" \"+side);")+
//_T("	    	    old = side;")+
//_T("		    front_changed[0] = frontUrls[side];")+
//_T("		    back_changed[0] = backUrls[side];")+
//_T("		    left_changed[0] = leftUrls[side];")+
//_T("		    right_changed[0] = rightUrls[side];")+
//_T("		    top_changed[0] = topUrls[side];")+
//_T("		    bottom_changed[0] = bottomUrls[side];")+
//_T("            }")+
//_T("        }"));
SoTransform24->addChild(*SoScript52);

SoTimeSensor* SoTimeSensor67 = new SoTimeSensor();
SoTimeSensor67->setDEF(QString("Clock"));
SoTimeSensor67->setCycleInterval(45);
SoTimeSensor67->setLoop(true);
SoTransform24->addChild(*SoTimeSensor67);

SoROUTE* SoROUTE68 = new SoROUTE();
SoROUTE68->setFromNode(QString("Clock"));
SoROUTE68->setFromField(QString("fraction_changed"));
SoROUTE68->setToNode(QString("UrlSelector"));
SoROUTE68->setToField(QString("set_fraction"));
SoTransform24->addChild(*SoROUTE68);

SoROUTE* SoROUTE69 = new SoROUTE();
SoROUTE69->setFromNode(QString("UrlSelector"));
SoROUTE69->setFromField(QString("front_changed"));
SoROUTE69->setToNode(QString("frontBackgroundTexture"));
SoROUTE69->setToField(QString("url"));
SoTransform24->addChild(*SoROUTE69);

SoROUTE* SoROUTE70 = new SoROUTE();
SoROUTE70->setFromNode(QString("UrlSelector"));
SoROUTE70->setFromField(QString("back_changed"));
SoROUTE70->setToNode(QString("backBackgroundTexture"));
SoROUTE70->setToField(QString("url"));
SoTransform24->addChild(*SoROUTE70);

SoROUTE* SoROUTE71 = new SoROUTE();
SoROUTE71->setFromNode(QString("UrlSelector"));
SoROUTE71->setFromField(QString("left_changed"));
SoROUTE71->setToNode(QString("leftBackgroundTexture"));
SoROUTE71->setToField(QString("url"));
SoTransform24->addChild(*SoROUTE71);

SoROUTE* SoROUTE72 = new SoROUTE();
SoROUTE72->setFromNode(QString("UrlSelector"));
SoROUTE72->setFromField(QString("right_changed"));
SoROUTE72->setToNode(QString("rightBackgroundTexture"));
SoROUTE72->setToField(QString("url"));
SoTransform24->addChild(*SoROUTE72);

SoROUTE* SoROUTE73 = new SoROUTE();
SoROUTE73->setFromNode(QString("UrlSelector"));
SoROUTE73->setFromField(QString("top_changed"));
SoROUTE73->setToNode(QString("topBackgroundTexture"));
SoROUTE73->setToField(QString("url"));
SoTransform24->addChild(*SoROUTE73);

SoROUTE* SoROUTE74 = new SoROUTE();
SoROUTE74->setFromNode(QString("UrlSelector"));
SoROUTE74->setFromField(QString("bottom_changed"));
SoROUTE74->setToNode(QString("bottomBackgroundTexture"));
SoROUTE74->setToField(QString("url"));
SoTransform24->addChild(*SoROUTE74);

SoROUTE* SoROUTE75 = new SoROUTE();
SoROUTE75->setFromNode(QString("UrlSelector"));
SoROUTE75->setFromField(QString("front_changed"));
SoROUTE75->setToNode(QString("frontShader"));
SoROUTE75->setToField(QString("url"));
SoTransform24->addChild(*SoROUTE75);

SoROUTE* SoROUTE76 = new SoROUTE();
SoROUTE76->setFromNode(QString("UrlSelector"));
SoROUTE76->setFromField(QString("back_changed"));
SoROUTE76->setToNode(QString("backShader"));
SoROUTE76->setToField(QString("url"));
SoTransform24->addChild(*SoROUTE76);

SoROUTE* SoROUTE77 = new SoROUTE();
SoROUTE77->setFromNode(QString("UrlSelector"));
SoROUTE77->setFromField(QString("left_changed"));
SoROUTE77->setToNode(QString("leftShader"));
SoROUTE77->setToField(QString("url"));
SoTransform24->addChild(*SoROUTE77);

SoROUTE* SoROUTE78 = new SoROUTE();
SoROUTE78->setFromNode(QString("UrlSelector"));
SoROUTE78->setFromField(QString("right_changed"));
SoROUTE78->setToNode(QString("rightShader"));
SoROUTE78->setToField(QString("url"));
SoTransform24->addChild(*SoROUTE78);

SoROUTE* SoROUTE79 = new SoROUTE();
SoROUTE79->setFromNode(QString("UrlSelector"));
SoROUTE79->setFromField(QString("top_changed"));
SoROUTE79->setToNode(QString("topShader"));
SoROUTE79->setToField(QString("url"));
SoTransform24->addChild(*SoROUTE79);

SoROUTE* SoROUTE80 = new SoROUTE();
SoROUTE80->setFromNode(QString("UrlSelector"));
SoROUTE80->setFromField(QString("bottom_changed"));
SoROUTE80->setToNode(QString("bottomShader"));
SoROUTE80->setToField(QString("url"));
SoTransform24->addChild(*SoROUTE80);

SoNode15->addChild(*SoTransform24);

SoSceneManager0->setSceneGraph(*SoNode15);

return 0;
}

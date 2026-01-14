
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
Someta11->setContent(QString("flowers7.x3d"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("creator"));
Someta12->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("generator"));
Someta13->setContent(QString("manual"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("identifier"));
Someta14->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/personal/flowers7.x3d"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("description"));
Someta15->setContent(QString("a flower"));
Sohead1->addMeta(*Someta15);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode16 = new SoNode();
SoNavigationInfo* SoNavigationInfo17 = new SoNavigationInfo();
SoNode16->addChild(*SoNavigationInfo17);

//Images courtesy of Paul Debevec's Light Probe Image Gallery
SoBackground* SoBackground18 = new SoBackground();
SoBackground18->setDEF(QString("background"));
SoBackground18->setBackUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png")}, 2);
SoBackground18->setBottomUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")}, 2);
SoBackground18->setFrontUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png")}, 2);
SoBackground18->setLeftUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png")}, 2);
SoBackground18->setRightUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png")}, 2);
SoBackground18->setTopUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png")}, 2);
SoNode16->addChild(*SoBackground18);

SoViewpoint* SoViewpoint19 = new SoViewpoint();
SoViewpoint19->setPosition(new float[]{0.0,0.0,40.0});
SoViewpoint19->setDescription(QString("Transparent rose"));
SoNode16->addChild(*SoViewpoint19);

SoTransform* SoTransform20 = new SoTransform();
SoShape* SoShape21 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance22 = new SoVRMLAppearance();
SoMaterial* SoMaterial23 = new SoMaterial();
SoMaterial23->setDiffuseColor(new float[]{0.7,0.7,0.7});
SoMaterial23->setSpecularColor(new float[]{0.5,0.5,0.5});
SoVRMLAppearance22->addChild(*SoMaterial23);

SoComposedCubeMapTexture* SoComposedCubeMapTexture24 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture24->setDEF(QString("texture"));
SoImageTexture* SoImageTexture25 = new SoImageTexture();
SoImageTexture25->setDEF(QString("backShader"));
SoImageTexture25->setUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png")}, 2);
SoComposedCubeMapTexture24->setBack(*SoImageTexture25);

SoImageTexture* SoImageTexture26 = new SoImageTexture();
SoImageTexture26->setDEF(QString("bottomShader"));
SoImageTexture26->setUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")}, 2);
SoComposedCubeMapTexture24->setBottom(*SoImageTexture26);

SoImageTexture* SoImageTexture27 = new SoImageTexture();
SoImageTexture27->setDEF(QString("frontShader"));
SoImageTexture27->setUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png")}, 2);
SoComposedCubeMapTexture24->setFront(*SoImageTexture27);

SoImageTexture* SoImageTexture28 = new SoImageTexture();
SoImageTexture28->setDEF(QString("leftShader"));
SoImageTexture28->setUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png")}, 2);
SoComposedCubeMapTexture24->setLeft(*SoImageTexture28);

SoImageTexture* SoImageTexture29 = new SoImageTexture();
SoImageTexture29->setDEF(QString("rightShader"));
SoImageTexture29->setUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png")}, 2);
SoComposedCubeMapTexture24->setRight(*SoImageTexture29);

SoImageTexture* SoImageTexture30 = new SoImageTexture();
SoImageTexture30->setDEF(QString("topShader"));
SoImageTexture30->setUrl(new QString[]{QString("../resources/images/all_probes/beach_cross/beach_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png")}, 2);
SoComposedCubeMapTexture24->setTop(*SoImageTexture30);

SoVRMLAppearance22->addChild(*SoComposedCubeMapTexture24);

SoComposedShader* SoComposedShader31 = new SoComposedShader();
SoComposedShader31->setDEF(QString("x3dom"));
SoComposedShader31->setLanguage(QString("GLSL"));
//TODO VERIFY <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field>
Sofield* Sofield32 = new Sofield();
Sofield32->setName(QString("cube"));
Sofield32->setType(QString("SFNode"));
Sofield32->setAccessType(QString("inputOutput"));
SoComposedCubeMapTexture* SoComposedCubeMapTexture33 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture33->setUSE(QString("texture"));
Sofield32->addChild(*SoComposedCubeMapTexture33);

SoComposedShader31->addChild(*Sofield32);

Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("chromaticDispertion"));
Sofield34->setAccessType(QString("initializeOnly"));
Sofield34->setType(QString("SFVec3f"));
Sofield34->setValue(QString("0.98 1 1.033"));
SoComposedShader31->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setName(QString("bias"));
Sofield35->setType(QString("SFFloat"));
Sofield35->setAccessType(QString("inputOutput"));
Sofield35->setValue(QString("0.5"));
SoComposedShader31->addChild(*Sofield35);

Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("scale"));
Sofield36->setType(QString("SFFloat"));
Sofield36->setAccessType(QString("inputOutput"));
Sofield36->setValue(QString("0.5"));
SoComposedShader31->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setName(QString("power"));
Sofield37->setType(QString("SFFloat"));
Sofield37->setAccessType(QString("inputOutput"));
Sofield37->setValue(QString("2"));
SoComposedShader31->addChild(*Sofield37);

Sofield* Sofield38 = new Sofield();
Sofield38->setName(QString("a"));
Sofield38->setType(QString("SFFloat"));
Sofield38->setAccessType(QString("inputOutput"));
Sofield38->setValue(QString("10"));
SoComposedShader31->addChild(*Sofield38);

Sofield* Sofield39 = new Sofield();
Sofield39->setName(QString("b"));
Sofield39->setType(QString("SFFloat"));
Sofield39->setAccessType(QString("inputOutput"));
Sofield39->setValue(QString("1"));
SoComposedShader31->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setName(QString("c"));
Sofield40->setType(QString("SFFloat"));
Sofield40->setAccessType(QString("inputOutput"));
Sofield40->setValue(QString("20"));
SoComposedShader31->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setName(QString("d"));
Sofield41->setType(QString("SFFloat"));
Sofield41->setAccessType(QString("inputOutput"));
Sofield41->setValue(QString("20"));
SoComposedShader31->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setName(QString("tdelta"));
Sofield42->setType(QString("SFFloat"));
Sofield42->setAccessType(QString("inputOutput"));
Sofield42->setValue(QString("0"));
SoComposedShader31->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setName(QString("pdelta"));
Sofield43->setType(QString("SFFloat"));
Sofield43->setAccessType(QString("inputOutput"));
Sofield43->setValue(QString("0"));
SoComposedShader31->addChild(*Sofield43);

SoShaderPart* SoShaderPart44 = new SoShaderPart();
SoShaderPart44->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs")}, 2);
SoShaderPart44->setType(QString("VERTEX"));
SoComposedShader31->setParts(*SoShaderPart44);

SoShaderPart* SoShaderPart45 = new SoShaderPart();
SoShaderPart45->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs")}, 2);
SoShaderPart45->setType(QString("FRAGMENT"));
SoComposedShader31->setParts(*SoShaderPart45);

SoVRMLAppearance22->addChild(*SoComposedShader31);

SoComposedShader* SoComposedShader46 = new SoComposedShader();
SoComposedShader46->setDEF(QString("x_ite"));
SoComposedShader46->setLanguage(QString("GLSL"));
Sofield* Sofield47 = new Sofield();
Sofield47->setName(QString("cube"));
Sofield47->setType(QString("SFNode"));
Sofield47->setAccessType(QString("inputOutput"));
SoComposedCubeMapTexture* SoComposedCubeMapTexture48 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture48->setUSE(QString("texture"));
Sofield47->addChild(*SoComposedCubeMapTexture48);

SoComposedShader46->addChild(*Sofield47);

Sofield* Sofield49 = new Sofield();
Sofield49->setName(QString("chromaticDispertion"));
Sofield49->setAccessType(QString("initializeOnly"));
Sofield49->setType(QString("SFVec3f"));
Sofield49->setValue(QString("0.98 1 1.033"));
SoComposedShader46->addChild(*Sofield49);

Sofield* Sofield50 = new Sofield();
Sofield50->setName(QString("bias"));
Sofield50->setType(QString("SFFloat"));
Sofield50->setAccessType(QString("inputOnly"));
Sofield50->setValue(QString("0.5"));
SoComposedShader46->addChild(*Sofield50);

Sofield* Sofield51 = new Sofield();
Sofield51->setName(QString("scale"));
Sofield51->setType(QString("SFFloat"));
Sofield51->setAccessType(QString("inputOnly"));
Sofield51->setValue(QString("0.5"));
SoComposedShader46->addChild(*Sofield51);

Sofield* Sofield52 = new Sofield();
Sofield52->setName(QString("power"));
Sofield52->setType(QString("SFFloat"));
Sofield52->setAccessType(QString("inputOnly"));
Sofield52->setValue(QString("2"));
SoComposedShader46->addChild(*Sofield52);

Sofield* Sofield53 = new Sofield();
Sofield53->setName(QString("a"));
Sofield53->setType(QString("SFFloat"));
Sofield53->setAccessType(QString("inputOnly"));
Sofield53->setValue(QString("10"));
SoComposedShader46->addChild(*Sofield53);

Sofield* Sofield54 = new Sofield();
Sofield54->setName(QString("b"));
Sofield54->setType(QString("SFFloat"));
Sofield54->setAccessType(QString("inputOnly"));
Sofield54->setValue(QString("1"));
SoComposedShader46->addChild(*Sofield54);

Sofield* Sofield55 = new Sofield();
Sofield55->setName(QString("c"));
Sofield55->setType(QString("SFFloat"));
Sofield55->setAccessType(QString("inputOnly"));
Sofield55->setValue(QString("20"));
SoComposedShader46->addChild(*Sofield55);

Sofield* Sofield56 = new Sofield();
Sofield56->setName(QString("d"));
Sofield56->setType(QString("SFFloat"));
Sofield56->setAccessType(QString("inputOnly"));
Sofield56->setValue(QString("20"));
SoComposedShader46->addChild(*Sofield56);

Sofield* Sofield57 = new Sofield();
Sofield57->setName(QString("tdelta"));
Sofield57->setType(QString("SFFloat"));
Sofield57->setAccessType(QString("inputOnly"));
Sofield57->setValue(QString("0"));
SoComposedShader46->addChild(*Sofield57);

Sofield* Sofield58 = new Sofield();
Sofield58->setName(QString("pdelta"));
Sofield58->setType(QString("SFFloat"));
Sofield58->setAccessType(QString("inputOnly"));
Sofield58->setValue(QString("0"));
SoComposedShader46->addChild(*Sofield58);

SoShaderPart* SoShaderPart59 = new SoShaderPart();
SoShaderPart59->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs")}, 2);
SoShaderPart59->setType(QString("VERTEX"));
SoComposedShader46->setParts(*SoShaderPart59);

SoShaderPart* SoShaderPart60 = new SoShaderPart();
SoShaderPart60->setUrl(new QString[]{QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")}, 2);
SoShaderPart60->setType(QString("FRAGMENT"));
SoComposedShader46->setParts(*SoShaderPart60);

SoVRMLAppearance22->addChild(*SoComposedShader46);

SoShape21->addChild(*SoVRMLAppearance22);

SoSphere* SoSphere61 = new SoSphere();
SoShape21->setGeometry(*SoSphere61);

SoTransform20->addChild(*SoShape21);

SoNode16->addChild(*SoTransform20);

SoScript* SoScript62 = new SoScript();
SoScript62->setDEF(QString("UrlSelector"));
SoScript62->setDirectOutput(true);
Sofield* Sofield63 = new Sofield();
Sofield63->setName(QString("frontUrls"));
Sofield63->setType(QString("MFString"));
Sofield63->setAccessType(QString("initializeOnly"));
Sofield63->setValue(QString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png\""));
SoScript62->addChild(*Sofield63);

Sofield* Sofield64 = new Sofield();
Sofield64->setName(QString("backUrls"));
Sofield64->setType(QString("MFString"));
Sofield64->setAccessType(QString("initializeOnly"));
Sofield64->setValue(QString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png\""));
SoScript62->addChild(*Sofield64);

Sofield* Sofield65 = new Sofield();
Sofield65->setName(QString("leftUrls"));
Sofield65->setType(QString("MFString"));
Sofield65->setAccessType(QString("initializeOnly"));
Sofield65->setValue(QString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png\""));
SoScript62->addChild(*Sofield65);

Sofield* Sofield66 = new Sofield();
Sofield66->setName(QString("rightUrls"));
Sofield66->setType(QString("MFString"));
Sofield66->setAccessType(QString("initializeOnly"));
Sofield66->setValue(QString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png\""));
SoScript62->addChild(*Sofield66);

Sofield* Sofield67 = new Sofield();
Sofield67->setName(QString("topUrls"));
Sofield67->setType(QString("MFString"));
Sofield67->setAccessType(QString("initializeOnly"));
Sofield67->setValue(QString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png\""));
SoScript62->addChild(*Sofield67);

Sofield* Sofield68 = new Sofield();
Sofield68->setName(QString("bottomUrls"));
Sofield68->setType(QString("MFString"));
Sofield68->setAccessType(QString("initializeOnly"));
Sofield68->setValue(QString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png\""));
SoScript62->addChild(*Sofield68);

Sofield* Sofield69 = new Sofield();
Sofield69->setName(QString("front"));
Sofield69->setType(QString("MFString"));
Sofield69->setAccessType(QString("inputOutput"));
SoScript62->addChild(*Sofield69);

Sofield* Sofield70 = new Sofield();
Sofield70->setName(QString("back"));
Sofield70->setType(QString("MFString"));
Sofield70->setAccessType(QString("inputOutput"));
SoScript62->addChild(*Sofield70);

Sofield* Sofield71 = new Sofield();
Sofield71->setName(QString("left"));
Sofield71->setType(QString("MFString"));
Sofield71->setAccessType(QString("inputOutput"));
SoScript62->addChild(*Sofield71);

Sofield* Sofield72 = new Sofield();
Sofield72->setName(QString("right"));
Sofield72->setType(QString("MFString"));
Sofield72->setAccessType(QString("inputOutput"));
SoScript62->addChild(*Sofield72);

Sofield* Sofield73 = new Sofield();
Sofield73->setName(QString("top"));
Sofield73->setType(QString("MFString"));
Sofield73->setAccessType(QString("inputOutput"));
SoScript62->addChild(*Sofield73);

Sofield* Sofield74 = new Sofield();
Sofield74->setName(QString("bottom"));
Sofield74->setType(QString("MFString"));
Sofield74->setAccessType(QString("inputOutput"));
SoScript62->addChild(*Sofield74);

Sofield* Sofield75 = new Sofield();
Sofield75->setName(QString("set_fraction"));
Sofield75->setType(QString("SFFloat"));
Sofield75->setAccessType(QString("inputOnly"));
SoScript62->addChild(*Sofield75);

Sofield* Sofield76 = new Sofield();
Sofield76->setName(QString("old"));
Sofield76->setType(QString("SFInt32"));
Sofield76->setAccessType(QString("inputOutput"));
Sofield76->setValue(QString("-1"));
SoScript62->addChild(*Sofield76);


//SoScript62->setSourceCode(QString("ecmascript:")+
//_T("        function set_fraction( f, tm ) {")+
//_T("            var side = Math.floor(f*frontUrls.length);")+
//_T("            if (side > frontUrls.length-1) {")+
//_T("                side = 0;")+
//_T("            }")+
//_T("            if (side != old) {")+
//_T("                    old = side;")+
//_T("                    front[0] = frontUrls[side];")+
//_T("                    back[0] = backUrls[side];")+
//_T("                    left[0] = leftUrls[side];")+
//_T("                    right[0] = rightUrls[side];")+
//_T("                    top[0] = topUrls[side];")+
//_T("                    bottom[0] = bottomUrls[side];")+
//_T("            }")+
//_T("        }"));
SoNode16->addChild(*SoScript62);

//<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>
SoScript* SoScript77 = new SoScript();
SoScript77->setDEF(QString("Animate"));
SoScript77->setDirectOutput(true);
Sofield* Sofield78 = new Sofield();
Sofield78->setName(QString("set_fraction"));
Sofield78->setType(QString("SFFloat"));
Sofield78->setAccessType(QString("inputOnly"));
SoScript77->addChild(*Sofield78);

Sofield* Sofield79 = new Sofield();
Sofield79->setName(QString("a"));
Sofield79->setType(QString("SFFloat"));
Sofield79->setAccessType(QString("inputOutput"));
Sofield79->setValue(QString("10"));
SoScript77->addChild(*Sofield79);

Sofield* Sofield80 = new Sofield();
Sofield80->setName(QString("b"));
Sofield80->setType(QString("SFFloat"));
Sofield80->setAccessType(QString("inputOutput"));
Sofield80->setValue(QString("1"));
SoScript77->addChild(*Sofield80);

Sofield* Sofield81 = new Sofield();
Sofield81->setName(QString("c"));
Sofield81->setType(QString("SFFloat"));
Sofield81->setAccessType(QString("inputOutput"));
Sofield81->setValue(QString("20"));
SoScript77->addChild(*Sofield81);

Sofield* Sofield82 = new Sofield();
Sofield82->setName(QString("d"));
Sofield82->setType(QString("SFFloat"));
Sofield82->setAccessType(QString("inputOutput"));
Sofield82->setValue(QString("20"));
SoScript77->addChild(*Sofield82);

Sofield* Sofield83 = new Sofield();
Sofield83->setName(QString("tdelta"));
Sofield83->setType(QString("SFFloat"));
Sofield83->setAccessType(QString("inputOutput"));
Sofield83->setValue(QString("0"));
SoScript77->addChild(*Sofield83);

Sofield* Sofield84 = new Sofield();
Sofield84->setName(QString("pdelta"));
Sofield84->setType(QString("SFFloat"));
Sofield84->setAccessType(QString("inputOutput"));
Sofield84->setValue(QString("0"));
SoScript77->addChild(*Sofield84);


//SoScript77->setSourceCode(QString("ecmascript:")+
//_T("function set_fraction() {")+
//_T("	var choice = Math.floor(Math.random() * 4);")+
//_T("	switch (choice) {")+
//_T("	case 0:")+
//_T("		a = a + Math.floor(Math.random() * 2) * 2 - 1;")+
//_T("		break;")+
//_T("	case 1:")+
//_T("		b = b + Math.floor(Math.random() * 2) * 2 - 1;")+
//_T("		break;")+
//_T("	case 2:")+
//_T("		c = c + Math.floor(Math.random() * 2) * 2 - 1;")+
//_T("		break;")+
//_T("	case 3:")+
//_T("		d = d + Math.floor(Math.random() * 2) * 2 - 1;")+
//_T("		break;")+
//_T("	}")+
//_T("	tdelta = tdelta + 0.5;")+
//_T("	pdelta = pdelta + 0.5;")+
//_T("	if (a < 1) {")+
//_T("		a = 10;")+
//_T("	}")+
//_T("	if (b < 1) {")+
//_T("		b = 10;")+
//_T("	}")+
//_T("	if (c < 1) {")+
//_T("		c = 4;")+
//_T("	}")+
//_T("	if (c > 20) {")+
//_T("		c = 4;")+
//_T("	}")+
//_T("	if (d < 1) {")+
//_T("		d = 4;")+
//_T("	}")+
//_T("	if (d > 20) {")+
//_T("		d = 4;")+
//_T("	}")+
//_T("}"));
SoNode16->addChild(*SoScript77);

SoTimeSensor* SoTimeSensor85 = new SoTimeSensor();
SoTimeSensor85->setDEF(QString("TourTime"));
SoTimeSensor85->setCycleInterval(5);
SoTimeSensor85->setLoop(true);
SoNode16->addChild(*SoTimeSensor85);

SoROUTE* SoROUTE86 = new SoROUTE();
SoROUTE86->setFromNode(QString("TourTime"));
SoROUTE86->setFromField(QString("fraction_changed"));
SoROUTE86->setToNode(QString("Animate"));
SoROUTE86->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE86);

SoROUTE* SoROUTE87 = new SoROUTE();
SoROUTE87->setFromNode(QString("Animate"));
SoROUTE87->setFromField(QString("a"));
SoROUTE87->setToNode(QString("x_ite"));
SoROUTE87->setToField(QString("a"));
SoNode16->addChild(*SoROUTE87);

SoROUTE* SoROUTE88 = new SoROUTE();
SoROUTE88->setFromNode(QString("Animate"));
SoROUTE88->setFromField(QString("b"));
SoROUTE88->setToNode(QString("x_ite"));
SoROUTE88->setToField(QString("b"));
SoNode16->addChild(*SoROUTE88);

SoROUTE* SoROUTE89 = new SoROUTE();
SoROUTE89->setFromNode(QString("Animate"));
SoROUTE89->setFromField(QString("c"));
SoROUTE89->setToNode(QString("x_ite"));
SoROUTE89->setToField(QString("c"));
SoNode16->addChild(*SoROUTE89);

SoROUTE* SoROUTE90 = new SoROUTE();
SoROUTE90->setFromNode(QString("Animate"));
SoROUTE90->setFromField(QString("d"));
SoROUTE90->setToNode(QString("x_ite"));
SoROUTE90->setToField(QString("d"));
SoNode16->addChild(*SoROUTE90);

SoROUTE* SoROUTE91 = new SoROUTE();
SoROUTE91->setFromNode(QString("Animate"));
SoROUTE91->setFromField(QString("pdelta"));
SoROUTE91->setToNode(QString("x_ite"));
SoROUTE91->setToField(QString("pdelta"));
SoNode16->addChild(*SoROUTE91);

SoROUTE* SoROUTE92 = new SoROUTE();
SoROUTE92->setFromNode(QString("Animate"));
SoROUTE92->setFromField(QString("tdelta"));
SoROUTE92->setToNode(QString("x_ite"));
SoROUTE92->setToField(QString("tdelta"));
SoNode16->addChild(*SoROUTE92);

SoROUTE* SoROUTE93 = new SoROUTE();
SoROUTE93->setFromNode(QString("Animate"));
SoROUTE93->setFromField(QString("a"));
SoROUTE93->setToNode(QString("x3dom"));
SoROUTE93->setToField(QString("a"));
SoNode16->addChild(*SoROUTE93);

SoROUTE* SoROUTE94 = new SoROUTE();
SoROUTE94->setFromNode(QString("Animate"));
SoROUTE94->setFromField(QString("b"));
SoROUTE94->setToNode(QString("x3dom"));
SoROUTE94->setToField(QString("b"));
SoNode16->addChild(*SoROUTE94);

SoROUTE* SoROUTE95 = new SoROUTE();
SoROUTE95->setFromNode(QString("Animate"));
SoROUTE95->setFromField(QString("c"));
SoROUTE95->setToNode(QString("x3dom"));
SoROUTE95->setToField(QString("c"));
SoNode16->addChild(*SoROUTE95);

SoROUTE* SoROUTE96 = new SoROUTE();
SoROUTE96->setFromNode(QString("Animate"));
SoROUTE96->setFromField(QString("d"));
SoROUTE96->setToNode(QString("x3dom"));
SoROUTE96->setToField(QString("d"));
SoNode16->addChild(*SoROUTE96);

SoROUTE* SoROUTE97 = new SoROUTE();
SoROUTE97->setFromNode(QString("Animate"));
SoROUTE97->setFromField(QString("pdelta"));
SoROUTE97->setToNode(QString("x3dom"));
SoROUTE97->setToField(QString("pdelta"));
SoNode16->addChild(*SoROUTE97);

SoROUTE* SoROUTE98 = new SoROUTE();
SoROUTE98->setFromNode(QString("Animate"));
SoROUTE98->setFromField(QString("tdelta"));
SoROUTE98->setToNode(QString("x3dom"));
SoROUTE98->setToField(QString("tdelta"));
SoNode16->addChild(*SoROUTE98);

SoSceneManager0->setSceneGraph(*SoNode16);

return 0;
}

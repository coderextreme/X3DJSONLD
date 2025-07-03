
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
Socomponent8->setName(QString("Grouping"));
Socomponent8->setLevel(3);
Sohead1->addChild(*Socomponent8);

Socomponent* Socomponent9 = new Socomponent();
Socomponent9->setName(QString("Core"));
Socomponent9->setLevel(1);
Sohead1->addChild(*Socomponent9);

Socomponent* Socomponent10 = new Socomponent();
Socomponent10->setName(QString("DIS"));
Socomponent10->setLevel(2);
Sohead1->addChild(*Socomponent10);

//<component name='Shape' level='4'></component>
//Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces http://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L
Someta* Someta11 = new Someta();
Someta11->setName(QString("title"));
Someta11->setContent(QString("bumpfreewrlsliders.x3d"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("description"));
Someta12->setContent(QString("*enter description here, short-sentence summaries preferred*"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("creator"));
Someta13->setContent(QString("Doug Sanden, Christoph Valentin, John Carlson"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("translator"));
Someta14->setContent(QString("*if manually translating VRML-to-X3D, enter name of person translating here*"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("created"));
Someta15->setContent(QString("*enter date of initial version here*"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("translated"));
Someta16->setContent(QString("*enter date of translation here*"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("modified"));
Someta17->setContent(QString("*enter date of latest revision here*"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("version"));
Someta18->setContent(QString("*enter version here, if any*"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("reference"));
Someta19->setContent(QString("*enter reference citation or relative/online url here*"));
Sohead1->addMeta(*Someta19);

Someta* Someta20 = new Someta();
Someta20->setName(QString("reference"));
Someta20->setContent(QString("*enter additional url/bibliographic reference information here*"));
Sohead1->addMeta(*Someta20);

Someta* Someta21 = new Someta();
Someta21->setName(QString("requires"));
Someta21->setContent(QString("*enter reference resource here if required to support function, delivery, or coherence of content*"));
Sohead1->addMeta(*Someta21);

Someta* Someta22 = new Someta();
Someta22->setName(QString("rights"));
Someta22->setContent(QString("*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024"));
Sohead1->addMeta(*Someta22);

Someta* Someta23 = new Someta();
Someta23->setName(QString("drawing"));
Someta23->setContent(QString("*enter drawing filename/url here*"));
Sohead1->addMeta(*Someta23);

Someta* Someta24 = new Someta();
Someta24->setName(QString("MovingImage"));
Someta24->setContent(QString("*enter movie filename/url here*"));
Sohead1->addMeta(*Someta24);

Someta* Someta25 = new Someta();
Someta25->setName(QString("photo"));
Someta25->setContent(QString("*enter photo filename/url here*"));
Sohead1->addMeta(*Someta25);

Someta* Someta26 = new Someta();
Someta26->setName(QString("subject"));
Someta26->setContent(QString("*enter subject keywords here*"));
Sohead1->addMeta(*Someta26);

Someta* Someta27 = new Someta();
Someta27->setName(QString("accessRights"));
Someta27->setContent(QString("*enter permission statements or url here*"));
Sohead1->addMeta(*Someta27);

Someta* Someta28 = new Someta();
Someta28->setName(QString("identifier"));
Someta28->setContent(QString("*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*"));
Sohead1->addMeta(*Someta28);

Someta* Someta29 = new Someta();
Someta29->setName(QString("generator"));
Someta29->setContent(QString("PSPad, http://www.pspad.com/"));
Sohead1->addMeta(*Someta29);

Someta* Someta30 = new Someta();
Someta30->setName(QString("license"));
Someta30->setContent(QString("license.html"));
Sohead1->addMeta(*Someta30);

SoSceneManager0->setHead(*Sohead1);

//\"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution, It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) open for their \"discussion about the teapot\"
SoNode* SoNode31 = new SoNode();
//LayerSet with two layers, navigation happens in layer 1
SoLayerSet* SoLayerSet32 = new SoLayerSet();
SoLayerSet32->setActiveLayer(1);
SoLayerSet32->setOrder(new int32_t[]{1,2}, 2);
//the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"
//the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)
SoLayer* SoLayer33 = new SoLayer();
//basic nodes, which might be present in any scene
SoNavigationInfo* SoNavigationInfo34 = new SoNavigationInfo();
SoNavigationInfo34->setType(new QString[]{QString("EXAMINE")}, 1);
SoNavigationInfo34->setAvatarSize(new float[]{0.25,1.75,0.75}, 3);
SoLayer33->addChild(*SoNavigationInfo34);

SoDirectionalLight* SoDirectionalLight35 = new SoDirectionalLight();
SoDirectionalLight35->setAmbientIntensity(0.2);
SoDirectionalLight35->setDirection(new float[]{0.0,-1.0,0.0});
SoLayer33->addChild(*SoDirectionalLight35);

SoDirectionalLight* SoDirectionalLight36 = new SoDirectionalLight();
SoDirectionalLight36->setAmbientIntensity(0.2);
SoDirectionalLight36->setDirection(new float[]{-1.0,-0.1,-1.0});
SoLayer33->addChild(*SoDirectionalLight36);

SoViewpoint* SoViewpoint37 = new SoViewpoint();
SoViewpoint37->setDescription(QString("My Overview"));
SoViewpoint37->setFieldOfView(1.570796);
SoViewpoint37->setPosition(new float[]{0.0,1.75,60.0});
SoLayer33->addChild(*SoViewpoint37);

//this group contains the red/green/blue 3D crosshair
SoGroup* SoGroup38 = new SoGroup();
//Arrow X
SoTransform* SoTransform39 = new SoTransform();
SoTransform39->setTranslation(new float[]{25.0,0.0,0.0});
SoTransform39->setRotation(new float[]{0.0,0.0,-1.0,1.57});
SoShape* SoShape40 = new SoShape();
SoCylinder* SoCylinder41 = new SoCylinder();
SoCylinder41->setDEF(QString("Shaft"));
SoCylinder41->setRadius(0.35);
SoCylinder41->setHeight(50);
SoShape40->setGeometry(*SoCylinder41);

SoVRMLAppearance* SoVRMLAppearance42 = new SoVRMLAppearance();
SoMaterial* SoMaterial43 = new SoMaterial();
SoMaterial43->setDEF(QString("RED"));
SoMaterial43->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoMaterial43->setEmissiveColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance42->addChild(*SoMaterial43);

SoShape40->addChild(*SoVRMLAppearance42);

SoTransform39->addChild(*SoShape40);

SoGroup38->addChild(*SoTransform39);

SoTransform* SoTransform44 = new SoTransform();
SoTransform44->setTranslation(new float[]{50.0,0.0,0.0});
SoTransform44->setRotation(new float[]{0.0,0.0,-1.0,1.57});
SoShape* SoShape45 = new SoShape();
SoCone* SoCone46 = new SoCone();
SoCone46->setDEF(QString("Tip"));
SoCone46->setBottomRadius(0.8);
SoCone46->setHeight(3);
SoShape45->setGeometry(*SoCone46);

SoVRMLAppearance* SoVRMLAppearance47 = new SoVRMLAppearance();
SoMaterial* SoMaterial48 = new SoMaterial();
SoMaterial48->setUSE(QString("RED"));
SoVRMLAppearance47->addChild(*SoMaterial48);

SoShape45->addChild(*SoVRMLAppearance47);

SoTransform44->addChild(*SoShape45);

SoGroup38->addChild(*SoTransform44);

//Arrow Y
SoTransform* SoTransform49 = new SoTransform();
SoTransform49->setTranslation(new float[]{0.0,25.0,0.0});
SoShape* SoShape50 = new SoShape();
SoCylinder* SoCylinder51 = new SoCylinder();
SoCylinder51->setUSE(QString("Shaft"));
SoShape50->setGeometry(*SoCylinder51);

SoVRMLAppearance* SoVRMLAppearance52 = new SoVRMLAppearance();
SoMaterial* SoMaterial53 = new SoMaterial();
SoMaterial53->setDEF(QString("GREEN"));
SoMaterial53->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoMaterial53->setEmissiveColor(new float[]{0.0,1.0,0.0});
SoVRMLAppearance52->addChild(*SoMaterial53);

SoShape50->addChild(*SoVRMLAppearance52);

SoTransform49->addChild(*SoShape50);

SoGroup38->addChild(*SoTransform49);

SoTransform* SoTransform54 = new SoTransform();
SoTransform54->setTranslation(new float[]{0.0,50.0,0.0});
SoShape* SoShape55 = new SoShape();
SoCone* SoCone56 = new SoCone();
SoCone56->setUSE(QString("Tip"));
SoShape55->setGeometry(*SoCone56);

SoVRMLAppearance* SoVRMLAppearance57 = new SoVRMLAppearance();
SoMaterial* SoMaterial58 = new SoMaterial();
SoMaterial58->setUSE(QString("GREEN"));
SoVRMLAppearance57->addChild(*SoMaterial58);

SoShape55->addChild(*SoVRMLAppearance57);

SoTransform54->addChild(*SoShape55);

SoGroup38->addChild(*SoTransform54);

//Arrow Z
SoTransform* SoTransform59 = new SoTransform();
SoTransform59->setTranslation(new float[]{0.0,0.0,25.0});
SoTransform59->setRotation(new float[]{1.0,0.0,0.0,1.57});
SoShape* SoShape60 = new SoShape();
SoCylinder* SoCylinder61 = new SoCylinder();
SoCylinder61->setUSE(QString("Shaft"));
SoShape60->setGeometry(*SoCylinder61);

SoVRMLAppearance* SoVRMLAppearance62 = new SoVRMLAppearance();
SoMaterial* SoMaterial63 = new SoMaterial();
SoMaterial63->setDEF(QString("BLUE"));
SoMaterial63->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoMaterial63->setEmissiveColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance62->addChild(*SoMaterial63);

SoShape60->addChild(*SoVRMLAppearance62);

SoTransform59->addChild(*SoShape60);

SoGroup38->addChild(*SoTransform59);

SoTransform* SoTransform64 = new SoTransform();
SoTransform64->setTranslation(new float[]{0.0,0.0,50.0});
SoTransform64->setRotation(new float[]{1.0,0.0,0.0,1.57});
SoShape* SoShape65 = new SoShape();
SoCone* SoCone66 = new SoCone();
SoCone66->setUSE(QString("Tip"));
SoShape65->setGeometry(*SoCone66);

SoVRMLAppearance* SoVRMLAppearance67 = new SoVRMLAppearance();
SoMaterial* SoMaterial68 = new SoMaterial();
SoMaterial68->setUSE(QString("BLUE"));
SoVRMLAppearance67->addChild(*SoMaterial68);

SoShape65->addChild(*SoVRMLAppearance67);

SoTransform64->addChild(*SoShape65);

SoGroup38->addChild(*SoTransform64);

SoLayer33->addChild(*SoGroup38);

//the model that is being reviewed by the users of this scene
SoTransform* SoTransform69 = new SoTransform();
SoTransform69->setDEF(QString("FlowerTransform"));
//<Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />
//Images courtesy of Paul Debevec's Light Probe Image Gallery
SoBackground* SoBackground70 = new SoBackground();
SoBackground70->setBackUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoBackground70->setBottomUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoBackground70->setFrontUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoBackground70->setLeftUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoBackground70->setRightUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoBackground70->setTopUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoTransform69->addChild(*SoBackground70);

SoShape* SoShape71 = new SoShape();
SoSphere* SoSphere72 = new SoSphere();
SoSphere72->setRadius(40);
SoShape71->setGeometry(*SoSphere72);

SoVRMLAppearance* SoVRMLAppearance73 = new SoVRMLAppearance();
SoMaterial* SoMaterial74 = new SoMaterial();
SoMaterial74->setDiffuseColor(new float[]{0.7,0.7,0.7});
SoMaterial74->setSpecularColor(new float[]{0.5,0.5,0.5});
SoVRMLAppearance73->addChild(*SoMaterial74);

SoComposedCubeMapTexture* SoComposedCubeMapTexture75 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture75->setDEF(QString("texture"));
SoImageTexture* SoImageTexture76 = new SoImageTexture();
SoImageTexture76->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoComposedCubeMapTexture75->setBack(*SoImageTexture76);

SoImageTexture* SoImageTexture77 = new SoImageTexture();
SoImageTexture77->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoComposedCubeMapTexture75->setBottom(*SoImageTexture77);

SoImageTexture* SoImageTexture78 = new SoImageTexture();
SoImageTexture78->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoComposedCubeMapTexture75->setFront(*SoImageTexture78);

SoImageTexture* SoImageTexture79 = new SoImageTexture();
SoImageTexture79->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoComposedCubeMapTexture75->setLeft(*SoImageTexture79);

SoImageTexture* SoImageTexture80 = new SoImageTexture();
SoImageTexture80->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoComposedCubeMapTexture75->setRight(*SoImageTexture80);

SoImageTexture* SoImageTexture81 = new SoImageTexture();
SoImageTexture81->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoComposedCubeMapTexture75->setTop(*SoImageTexture81);

SoVRMLAppearance73->addChild(*SoComposedCubeMapTexture75);

SoComposedShader* SoComposedShader82 = new SoComposedShader();
SoComposedShader82->setDEF(QString("freewrlShader"));
SoComposedShader82->setLanguage(QString("GLSL"));
Sofield* Sofield83 = new Sofield();
Sofield83->setName(QString("chromaticDispertion"));
Sofield83->setAccessType(QString("inputOnly"));
Sofield83->setType(QString("SFVec3f"));
Sofield83->setValue(QString("0.98 1 1.033"));
SoComposedShader82->addChild(*Sofield83);

Sofield* Sofield84 = new Sofield();
Sofield84->setName(QString("fw_textureCoordGenType"));
Sofield84->setAccessType(QString("inputOnly"));
Sofield84->setType(QString("SFInt32"));
Sofield84->setValue(QString("0"));
SoComposedShader82->addChild(*Sofield84);

Sofield* Sofield85 = new Sofield();
Sofield85->setName(QString("bias"));
Sofield85->setType(QString("SFFloat"));
Sofield85->setAccessType(QString("inputOnly"));
Sofield85->setValue(QString("0.5"));
SoComposedShader82->addChild(*Sofield85);

Sofield* Sofield86 = new Sofield();
Sofield86->setName(QString("scale"));
Sofield86->setType(QString("SFFloat"));
Sofield86->setAccessType(QString("inputOnly"));
Sofield86->setValue(QString("0.5"));
SoComposedShader82->addChild(*Sofield86);

Sofield* Sofield87 = new Sofield();
Sofield87->setName(QString("power"));
Sofield87->setType(QString("SFFloat"));
Sofield87->setAccessType(QString("inputOnly"));
Sofield87->setValue(QString("2"));
SoComposedShader82->addChild(*Sofield87);

Sofield* Sofield88 = new Sofield();
Sofield88->setName(QString("a"));
Sofield88->setType(QString("SFFloat"));
Sofield88->setAccessType(QString("inputOutput"));
Sofield88->setValue(QString("15"));
SoComposedShader82->addChild(*Sofield88);

Sofield* Sofield89 = new Sofield();
Sofield89->setName(QString("b"));
Sofield89->setType(QString("SFFloat"));
Sofield89->setAccessType(QString("inputOutput"));
Sofield89->setValue(QString("5"));
SoComposedShader82->addChild(*Sofield89);

Sofield* Sofield90 = new Sofield();
Sofield90->setName(QString("c"));
Sofield90->setType(QString("SFFloat"));
Sofield90->setAccessType(QString("inputOutput"));
Sofield90->setValue(QString("5"));
SoComposedShader82->addChild(*Sofield90);

Sofield* Sofield91 = new Sofield();
Sofield91->setName(QString("d"));
Sofield91->setType(QString("SFFloat"));
Sofield91->setAccessType(QString("inputOutput"));
Sofield91->setValue(QString("5"));
SoComposedShader82->addChild(*Sofield91);

Sofield* Sofield92 = new Sofield();
Sofield92->setName(QString("tdelta"));
Sofield92->setType(QString("SFFloat"));
Sofield92->setAccessType(QString("inputOutput"));
Sofield92->setValue(QString("0"));
SoComposedShader82->addChild(*Sofield92);

Sofield* Sofield93 = new Sofield();
Sofield93->setName(QString("pdelta"));
Sofield93->setType(QString("SFFloat"));
Sofield93->setAccessType(QString("inputOutput"));
Sofield93->setValue(QString("0"));
SoComposedShader82->addChild(*Sofield93);

SoShaderPart* SoShaderPart94 = new SoShaderPart();
SoShaderPart94->setUrl(new QString[]{QString("../shaders/freewrl_flowers_chromatic.vs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs")}, 2);
SoShaderPart94->setType(QString("VERTEX"));
SoComposedShader82->setParts(*SoShaderPart94);

SoShaderPart* SoShaderPart95 = new SoShaderPart();
SoShaderPart95->setUrl(new QString[]{QString("../shaders/freewrl_bubbles.fs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs")}, 2);
SoShaderPart95->setType(QString("FRAGMENT"));
SoComposedShader82->setParts(*SoShaderPart95);

SoVRMLAppearance73->addChild(*SoComposedShader82);

SoShape71->addChild(*SoVRMLAppearance73);

SoTransform69->addChild(*SoShape71);

SoLayer33->addChild(*SoTransform69);

//DIS multiuser facilities
SoDISEntityManager* SoDISEntityManager96 = new SoDISEntityManager();
SoDISEntityManager96->setDEF(QString("EntityManager"));
SoDISEntityManager96->setNetworkMode("networkReader");
SoDISEntityTypeMapping* SoDISEntityTypeMapping97 = new SoDISEntityTypeMapping();
SoDISEntityTypeMapping97->setCategory(77);
SoDISEntityTypeMapping97->setSpecific(1);
SoDISEntityTypeMapping97->setUrl(new QString[]{QString("../data/Leif8Final.x3dv"), QString("https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3dv")}, 2);
SoDISEntityManager96->setMapping(*SoDISEntityTypeMapping97);

SoDISEntityTypeMapping* SoDISEntityTypeMapping98 = new SoDISEntityTypeMapping();
SoDISEntityTypeMapping98->setCategory(77);
SoDISEntityTypeMapping98->setSpecific(2);
SoDISEntityTypeMapping98->setUrl(new QString[]{QString("../data/Lily8Final.x3dv"), QString("https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3dv")}, 2);
SoDISEntityManager96->setMapping(*SoDISEntityTypeMapping98);

SoDISEntityTypeMapping* SoDISEntityTypeMapping99 = new SoDISEntityTypeMapping();
SoDISEntityTypeMapping99->setCategory(77);
SoDISEntityTypeMapping99->setSpecific(3);
SoDISEntityTypeMapping99->setUrl(new QString[]{QString("../data/Tufani8Final.x3dv"), QString("https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3dv")}, 2);
SoDISEntityManager96->setMapping(*SoDISEntityTypeMapping99);

SoDISEntityTypeMapping* SoDISEntityTypeMapping100 = new SoDISEntityTypeMapping();
SoDISEntityTypeMapping100->setCategory(77);
SoDISEntityTypeMapping100->setSpecific(4);
SoDISEntityTypeMapping100->setUrl(new QString[]{QString("../data/Gramps8Final.x3dv"), QString("https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3dv")}, 2);
SoDISEntityManager96->setMapping(*SoDISEntityTypeMapping100);

SoLayer33->addChild(*SoDISEntityManager96);

SoCollision* SoCollision101 = new SoCollision();
SoCollision101->setEnabled(false);
SoGroup* SoGroup102 = new SoGroup();
SoGroup102->setDEF(QString("AvatarHolder"));
SoCollision101->addChildren(*SoGroup102);

SoLayer33->addChild(*SoCollision101);

SoROUTE* SoROUTE103 = new SoROUTE();
SoROUTE103->setFromField(QString("addedEntities"));
SoROUTE103->setFromNode(QString("EntityManager"));
SoROUTE103->setToField(QString("addChildren"));
SoROUTE103->setToNode(QString("AvatarHolder"));
SoLayer33->addChild(*SoROUTE103);

SoROUTE* SoROUTE104 = new SoROUTE();
SoROUTE104->setFromField(QString("removedEntities"));
SoROUTE104->setFromNode(QString("EntityManager"));
SoROUTE104->setToField(QString("removeChildren"));
SoROUTE104->setToNode(QString("AvatarHolder"));
SoLayer33->addChild(*SoROUTE104);

SoLayerSet32->addChild(*SoLayer33);

SoLayoutLayer* SoLayoutLayer105 = new SoLayoutLayer();
//positioning the LayoutLayer
//clipping the LayoutLayer
//the content (children) of the LayoutLayer
//first, the slider for scaling the model
SoTransform* SoTransform106 = new SoTransform();
SoTransform106->setTranslation(new float[]{0.0,0.0,-3.0});
SoShape* SoShape107 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance108 = new SoVRMLAppearance();
SoMaterial* SoMaterial109 = new SoMaterial();
SoMaterial109->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoMaterial109->setTransparency(0.7);
SoVRMLAppearance108->addChild(*SoMaterial109);

SoShape107->addChild(*SoVRMLAppearance108);

SoBox* SoBox110 = new SoBox();
SoBox110->setSize(new float[]{100.0,100.0,0.02});
SoShape107->setGeometry(*SoBox110);

SoTransform106->addChild(*SoShape107);

SoLayoutLayer105->addChild(*SoTransform106);

//the plane sensors
SoTransform* SoTransform111 = new SoTransform();
SoTransform111->setDEF(QString("aSlider"));
SoTransform111->setTranslation(new float[]{0.0,0.7,0.0});
SoTransform* SoTransform112 = new SoTransform();
SoTransform112->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoShape* SoShape113 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance114 = new SoVRMLAppearance();
SoMaterial* SoMaterial115 = new SoMaterial();
SoVRMLAppearance114->addChild(*SoMaterial115);

SoShape113->addChild(*SoVRMLAppearance114);

SoCylinder* SoCylinder116 = new SoCylinder();
SoCylinder116->setRadius(0.05);
SoCylinder116->setHeight(2.5);
SoShape113->setGeometry(*SoCylinder116);

SoTransform112->addChild(*SoShape113);

SoTransform111->addChild(*SoTransform112);

SoTransform* SoTransform117 = new SoTransform();
SoTransform117->setDEF(QString("aTransform"));
SoTransform117->setTranslation(new float[]{0.0,0.0,0.1});
SoPlaneSensor* SoPlaneSensor118 = new SoPlaneSensor();
SoPlaneSensor118->setDEF(QString("aSensor"));
SoPlaneSensor118->setMinPosition(new float[]{-20.0,0.0});
SoPlaneSensor118->setMaxPosition(new float[]{20.0,0.0});
SoTransform117->addChild(*SoPlaneSensor118);

SoTransform* SoTransform119 = new SoTransform();
SoTransform119->setTranslation(new float[]{0.0,0.0,0.0});
SoTouchSensor* SoTouchSensor120 = new SoTouchSensor();
SoTouchSensor120->setDEF(QString("aTS"));
SoTransform119->addChild(*SoTouchSensor120);

SoShape* SoShape121 = new SoShape();
SoSphere* SoSphere122 = new SoSphere();
SoSphere122->setRadius(0.08);
SoShape121->setGeometry(*SoSphere122);

SoVRMLAppearance* SoVRMLAppearance123 = new SoVRMLAppearance();
SoMaterial* SoMaterial124 = new SoMaterial();
SoMaterial124->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance123->addChild(*SoMaterial124);

SoShape121->addChild(*SoVRMLAppearance123);

SoTransform119->addChild(*SoShape121);

SoTransform117->addChild(*SoTransform119);

SoShape* SoShape125 = new SoShape();
SoCylinder* SoCylinder126 = new SoCylinder();
SoCylinder126->setRadius(0.05);
SoCylinder126->setHeight(0.3);
SoShape125->setGeometry(*SoCylinder126);

SoVRMLAppearance* SoVRMLAppearance127 = new SoVRMLAppearance();
SoMaterial* SoMaterial128 = new SoMaterial();
SoVRMLAppearance127->addChild(*SoMaterial128);

SoShape125->addChild(*SoVRMLAppearance127);

SoTransform117->addChild(*SoShape125);

SoTransform111->addChild(*SoTransform117);

SoTransform* SoTransform129 = new SoTransform();
SoTransform129->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoShape* SoShape130 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance131 = new SoVRMLAppearance();
SoMaterial* SoMaterial132 = new SoMaterial();
SoVRMLAppearance131->addChild(*SoMaterial132);

SoShape130->addChild(*SoVRMLAppearance131);

SoCylinder* SoCylinder133 = new SoCylinder();
SoCylinder133->setRadius(0.05);
SoCylinder133->setHeight(2.5);
SoShape130->setGeometry(*SoCylinder133);

SoTransform129->addChild(*SoShape130);

SoTransform111->addChild(*SoTransform129);

SoLayoutLayer105->addChild(*SoTransform111);

SoTransform* SoTransform134 = new SoTransform();
SoTransform134->setDEF(QString("bSlider"));
SoTransform134->setTranslation(new float[]{0.0,0.4,0.0});
SoTransform* SoTransform135 = new SoTransform();
SoTransform135->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoShape* SoShape136 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance137 = new SoVRMLAppearance();
SoMaterial* SoMaterial138 = new SoMaterial();
SoVRMLAppearance137->addChild(*SoMaterial138);

SoShape136->addChild(*SoVRMLAppearance137);

SoCylinder* SoCylinder139 = new SoCylinder();
SoCylinder139->setRadius(0.05);
SoCylinder139->setHeight(2.5);
SoShape136->setGeometry(*SoCylinder139);

SoTransform135->addChild(*SoShape136);

SoTransform134->addChild(*SoTransform135);

SoTransform* SoTransform140 = new SoTransform();
SoTransform140->setDEF(QString("bTransform"));
SoTransform140->setTranslation(new float[]{0.0,0.0,0.1});
SoPlaneSensor* SoPlaneSensor141 = new SoPlaneSensor();
SoPlaneSensor141->setDEF(QString("bSensor"));
SoPlaneSensor141->setMinPosition(new float[]{-20.0,0.0});
SoPlaneSensor141->setMaxPosition(new float[]{20.0,0.0});
SoTransform140->addChild(*SoPlaneSensor141);

SoTransform* SoTransform142 = new SoTransform();
SoTransform142->setTranslation(new float[]{0.0,0.0,0.0});
SoTouchSensor* SoTouchSensor143 = new SoTouchSensor();
SoTouchSensor143->setDEF(QString("bTS"));
SoTransform142->addChild(*SoTouchSensor143);

SoShape* SoShape144 = new SoShape();
SoSphere* SoSphere145 = new SoSphere();
SoSphere145->setRadius(0.08);
SoShape144->setGeometry(*SoSphere145);

SoVRMLAppearance* SoVRMLAppearance146 = new SoVRMLAppearance();
SoMaterial* SoMaterial147 = new SoMaterial();
SoMaterial147->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance146->addChild(*SoMaterial147);

SoShape144->addChild(*SoVRMLAppearance146);

SoTransform142->addChild(*SoShape144);

SoTransform140->addChild(*SoTransform142);

SoShape* SoShape148 = new SoShape();
SoCylinder* SoCylinder149 = new SoCylinder();
SoCylinder149->setRadius(0.05);
SoCylinder149->setHeight(0.3);
SoShape148->setGeometry(*SoCylinder149);

SoVRMLAppearance* SoVRMLAppearance150 = new SoVRMLAppearance();
SoMaterial* SoMaterial151 = new SoMaterial();
SoVRMLAppearance150->addChild(*SoMaterial151);

SoShape148->addChild(*SoVRMLAppearance150);

SoTransform140->addChild(*SoShape148);

SoTransform134->addChild(*SoTransform140);

SoLayoutLayer105->addChild(*SoTransform134);

SoTransform* SoTransform152 = new SoTransform();
SoTransform152->setDEF(QString("cSlider"));
SoTransform152->setTranslation(new float[]{0.0,0.1,0.0});
SoTransform* SoTransform153 = new SoTransform();
SoTransform153->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoShape* SoShape154 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance155 = new SoVRMLAppearance();
SoMaterial* SoMaterial156 = new SoMaterial();
SoVRMLAppearance155->addChild(*SoMaterial156);

SoShape154->addChild(*SoVRMLAppearance155);

SoCylinder* SoCylinder157 = new SoCylinder();
SoCylinder157->setRadius(0.05);
SoCylinder157->setHeight(2.5);
SoShape154->setGeometry(*SoCylinder157);

SoTransform153->addChild(*SoShape154);

SoTransform152->addChild(*SoTransform153);

SoTransform* SoTransform158 = new SoTransform();
SoTransform158->setDEF(QString("cTransform"));
SoTransform158->setTranslation(new float[]{0.0,0.0,0.1});
SoPlaneSensor* SoPlaneSensor159 = new SoPlaneSensor();
SoPlaneSensor159->setDEF(QString("cSensor"));
SoPlaneSensor159->setMinPosition(new float[]{-20.0,0.0});
SoPlaneSensor159->setMaxPosition(new float[]{20.0,0.0});
SoTransform158->addChild(*SoPlaneSensor159);

SoTransform* SoTransform160 = new SoTransform();
SoTransform160->setTranslation(new float[]{0.0,0.0,0.0});
SoTouchSensor* SoTouchSensor161 = new SoTouchSensor();
SoTouchSensor161->setDEF(QString("cTS"));
SoTransform160->addChild(*SoTouchSensor161);

SoShape* SoShape162 = new SoShape();
SoSphere* SoSphere163 = new SoSphere();
SoSphere163->setRadius(0.08);
SoShape162->setGeometry(*SoSphere163);

SoVRMLAppearance* SoVRMLAppearance164 = new SoVRMLAppearance();
SoMaterial* SoMaterial165 = new SoMaterial();
SoMaterial165->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance164->addChild(*SoMaterial165);

SoShape162->addChild(*SoVRMLAppearance164);

SoTransform160->addChild(*SoShape162);

SoTransform158->addChild(*SoTransform160);

SoShape* SoShape166 = new SoShape();
SoCylinder* SoCylinder167 = new SoCylinder();
SoCylinder167->setRadius(0.05);
SoCylinder167->setHeight(0.3);
SoShape166->setGeometry(*SoCylinder167);

SoVRMLAppearance* SoVRMLAppearance168 = new SoVRMLAppearance();
SoMaterial* SoMaterial169 = new SoMaterial();
SoVRMLAppearance168->addChild(*SoMaterial169);

SoShape166->addChild(*SoVRMLAppearance168);

SoTransform158->addChild(*SoShape166);

SoTransform152->addChild(*SoTransform158);

SoLayoutLayer105->addChild(*SoTransform152);

SoTransform* SoTransform170 = new SoTransform();
SoTransform170->setDEF(QString("dSlider"));
SoTransform170->setTranslation(new float[]{0.0,-0.2,0.0});
SoTransform* SoTransform171 = new SoTransform();
SoTransform171->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoShape* SoShape172 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance173 = new SoVRMLAppearance();
SoMaterial* SoMaterial174 = new SoMaterial();
SoVRMLAppearance173->addChild(*SoMaterial174);

SoShape172->addChild(*SoVRMLAppearance173);

SoCylinder* SoCylinder175 = new SoCylinder();
SoCylinder175->setRadius(0.05);
SoCylinder175->setHeight(2.5);
SoShape172->setGeometry(*SoCylinder175);

SoTransform171->addChild(*SoShape172);

SoTransform170->addChild(*SoTransform171);

SoTransform* SoTransform176 = new SoTransform();
SoTransform176->setDEF(QString("dTransform"));
SoTransform176->setTranslation(new float[]{0.0,0.0,0.1});
SoPlaneSensor* SoPlaneSensor177 = new SoPlaneSensor();
SoPlaneSensor177->setDEF(QString("dSensor"));
SoPlaneSensor177->setMinPosition(new float[]{-20.0,0.0});
SoPlaneSensor177->setMaxPosition(new float[]{20.0,0.0});
SoTransform176->addChild(*SoPlaneSensor177);

SoTransform* SoTransform178 = new SoTransform();
SoTransform178->setTranslation(new float[]{0.0,0.0,0.0});
SoTouchSensor* SoTouchSensor179 = new SoTouchSensor();
SoTouchSensor179->setDEF(QString("dTS"));
SoTransform178->addChild(*SoTouchSensor179);

SoShape* SoShape180 = new SoShape();
SoSphere* SoSphere181 = new SoSphere();
SoSphere181->setRadius(0.08);
SoShape180->setGeometry(*SoSphere181);

SoVRMLAppearance* SoVRMLAppearance182 = new SoVRMLAppearance();
SoMaterial* SoMaterial183 = new SoMaterial();
SoMaterial183->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance182->addChild(*SoMaterial183);

SoShape180->addChild(*SoVRMLAppearance182);

SoTransform178->addChild(*SoShape180);

SoTransform176->addChild(*SoTransform178);

SoShape* SoShape184 = new SoShape();
SoCylinder* SoCylinder185 = new SoCylinder();
SoCylinder185->setRadius(0.05);
SoCylinder185->setHeight(0.3);
SoShape184->setGeometry(*SoCylinder185);

SoVRMLAppearance* SoVRMLAppearance186 = new SoVRMLAppearance();
SoMaterial* SoMaterial187 = new SoMaterial();
SoVRMLAppearance186->addChild(*SoMaterial187);

SoShape184->addChild(*SoVRMLAppearance186);

SoTransform176->addChild(*SoShape184);

SoTransform170->addChild(*SoTransform176);

SoLayoutLayer105->addChild(*SoTransform170);

SoTransform* SoTransform188 = new SoTransform();
SoTransform188->setDEF(QString("pdeltaSlider"));
SoTransform188->setTranslation(new float[]{0.0,-0.5,0.0});
SoTransform* SoTransform189 = new SoTransform();
SoTransform189->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoShape* SoShape190 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance191 = new SoVRMLAppearance();
SoMaterial* SoMaterial192 = new SoMaterial();
SoVRMLAppearance191->addChild(*SoMaterial192);

SoShape190->addChild(*SoVRMLAppearance191);

SoCylinder* SoCylinder193 = new SoCylinder();
SoCylinder193->setRadius(0.05);
SoCylinder193->setHeight(2.5);
SoShape190->setGeometry(*SoCylinder193);

SoTransform189->addChild(*SoShape190);

SoTransform188->addChild(*SoTransform189);

SoTransform* SoTransform194 = new SoTransform();
SoTransform194->setDEF(QString("pdeltaTransform"));
SoTransform194->setTranslation(new float[]{0.0,0.0,0.1});
SoPlaneSensor* SoPlaneSensor195 = new SoPlaneSensor();
SoPlaneSensor195->setDEF(QString("pdeltaSensor"));
SoPlaneSensor195->setMinPosition(new float[]{-20.0,0.0});
SoPlaneSensor195->setMaxPosition(new float[]{20.0,0.0});
SoTransform194->addChild(*SoPlaneSensor195);

SoTransform* SoTransform196 = new SoTransform();
SoTransform196->setTranslation(new float[]{0.0,0.0,0.0});
SoTouchSensor* SoTouchSensor197 = new SoTouchSensor();
SoTouchSensor197->setDEF(QString("pdeltaTS"));
SoTransform196->addChild(*SoTouchSensor197);

SoShape* SoShape198 = new SoShape();
SoSphere* SoSphere199 = new SoSphere();
SoSphere199->setRadius(0.08);
SoShape198->setGeometry(*SoSphere199);

SoVRMLAppearance* SoVRMLAppearance200 = new SoVRMLAppearance();
SoMaterial* SoMaterial201 = new SoMaterial();
SoMaterial201->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance200->addChild(*SoMaterial201);

SoShape198->addChild(*SoVRMLAppearance200);

SoTransform196->addChild(*SoShape198);

SoTransform194->addChild(*SoTransform196);

SoShape* SoShape202 = new SoShape();
SoCylinder* SoCylinder203 = new SoCylinder();
SoCylinder203->setRadius(0.05);
SoCylinder203->setHeight(0.3);
SoShape202->setGeometry(*SoCylinder203);

SoVRMLAppearance* SoVRMLAppearance204 = new SoVRMLAppearance();
SoMaterial* SoMaterial205 = new SoMaterial();
SoVRMLAppearance204->addChild(*SoMaterial205);

SoShape202->addChild(*SoVRMLAppearance204);

SoTransform194->addChild(*SoShape202);

SoTransform188->addChild(*SoTransform194);

SoLayoutLayer105->addChild(*SoTransform188);

SoTransform* SoTransform206 = new SoTransform();
SoTransform206->setDEF(QString("tdeltaSlider"));
SoTransform206->setTranslation(new float[]{0.0,-0.8,0.0});
SoTransform* SoTransform207 = new SoTransform();
SoTransform207->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoShape* SoShape208 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance209 = new SoVRMLAppearance();
SoMaterial* SoMaterial210 = new SoMaterial();
SoVRMLAppearance209->addChild(*SoMaterial210);

SoShape208->addChild(*SoVRMLAppearance209);

SoCylinder* SoCylinder211 = new SoCylinder();
SoCylinder211->setRadius(0.05);
SoCylinder211->setHeight(2.5);
SoShape208->setGeometry(*SoCylinder211);

SoTransform207->addChild(*SoShape208);

SoTransform206->addChild(*SoTransform207);

SoTransform* SoTransform212 = new SoTransform();
SoTransform212->setDEF(QString("tdeltaTransform"));
SoTransform212->setTranslation(new float[]{0.0,0.0,0.1});
SoPlaneSensor* SoPlaneSensor213 = new SoPlaneSensor();
SoPlaneSensor213->setDEF(QString("tdeltaSensor"));
SoPlaneSensor213->setMinPosition(new float[]{-20.0,0.0});
SoPlaneSensor213->setMaxPosition(new float[]{20.0,0.0});
SoTransform212->addChild(*SoPlaneSensor213);

SoTransform* SoTransform214 = new SoTransform();
SoTransform214->setTranslation(new float[]{0.0,0.0,0.0});
SoTouchSensor* SoTouchSensor215 = new SoTouchSensor();
SoTouchSensor215->setDEF(QString("tdeltaTS"));
SoTransform214->addChild(*SoTouchSensor215);

SoShape* SoShape216 = new SoShape();
SoSphere* SoSphere217 = new SoSphere();
SoSphere217->setRadius(0.08);
SoShape216->setGeometry(*SoSphere217);

SoVRMLAppearance* SoVRMLAppearance218 = new SoVRMLAppearance();
SoMaterial* SoMaterial219 = new SoMaterial();
SoMaterial219->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance218->addChild(*SoMaterial219);

SoShape216->addChild(*SoVRMLAppearance218);

SoTransform214->addChild(*SoShape216);

SoTransform212->addChild(*SoTransform214);

SoShape* SoShape220 = new SoShape();
SoCylinder* SoCylinder221 = new SoCylinder();
SoCylinder221->setRadius(0.05);
SoCylinder221->setHeight(0.3);
SoShape220->setGeometry(*SoCylinder221);

SoVRMLAppearance* SoVRMLAppearance222 = new SoVRMLAppearance();
SoMaterial* SoMaterial223 = new SoMaterial();
SoVRMLAppearance222->addChild(*SoMaterial223);

SoShape220->addChild(*SoVRMLAppearance222);

SoTransform212->addChild(*SoShape220);

SoTransform206->addChild(*SoTransform212);

SoLayoutLayer105->addChild(*SoTransform206);

SoScript* SoScript224 = new SoScript();
SoScript224->setDEF(QString("aValueTransformerScript"));
SoScript224->setDirectOutput(true);
SoScript224->setMustEvaluate(true);
Sofield* Sofield225 = new Sofield();
Sofield225->setName(QString("newTranslation"));
Sofield225->setAccessType(QString("inputOnly"));
Sofield225->setType(QString("SFVec3f"));
Sofield225->setValue(QString("1 1 1"));
SoScript224->addChild(*Sofield225);

Sofield* Sofield226 = new Sofield();
Sofield226->setName(QString("aValue"));
Sofield226->setAccessType(QString("outputOnly"));
Sofield226->setType(QString("SFFloat"));
Sofield226->setValue(QString("1"));
SoScript224->addChild(*Sofield226);


//SoScript224->setSourceCode(QString("ecmascript: function newTranslation(Value) { aValue = Value.x * 30; }"));
SoLayoutLayer105->addChild(*SoScript224);

SoScript* SoScript227 = new SoScript();
SoScript227->setDEF(QString("bValueTransformerScript"));
SoScript227->setDirectOutput(true);
SoScript227->setMustEvaluate(true);
Sofield* Sofield228 = new Sofield();
Sofield228->setName(QString("newTranslation"));
Sofield228->setAccessType(QString("inputOnly"));
Sofield228->setType(QString("SFVec3f"));
Sofield228->setValue(QString("1 1 1"));
SoScript227->addChild(*Sofield228);

Sofield* Sofield229 = new Sofield();
Sofield229->setName(QString("bValue"));
Sofield229->setAccessType(QString("outputOnly"));
Sofield229->setType(QString("SFFloat"));
Sofield229->setValue(QString("1"));
SoScript227->addChild(*Sofield229);


//SoScript227->setSourceCode(QString("ecmascript: function newTranslation(Value) { bValue = Value.x * 30; }"));
SoLayoutLayer105->addChild(*SoScript227);

SoScript* SoScript230 = new SoScript();
SoScript230->setDEF(QString("cValueTransformerScript"));
SoScript230->setDirectOutput(true);
SoScript230->setMustEvaluate(true);
Sofield* Sofield231 = new Sofield();
Sofield231->setName(QString("newTranslation"));
Sofield231->setAccessType(QString("inputOnly"));
Sofield231->setType(QString("SFVec3f"));
Sofield231->setValue(QString("1 1 1"));
SoScript230->addChild(*Sofield231);

Sofield* Sofield232 = new Sofield();
Sofield232->setName(QString("cValue"));
Sofield232->setAccessType(QString("outputOnly"));
Sofield232->setType(QString("SFFloat"));
Sofield232->setValue(QString("1"));
SoScript230->addChild(*Sofield232);


//SoScript230->setSourceCode(QString("ecmascript: function newTranslation(Value) { cValue = Value.x * 5; }"));
SoLayoutLayer105->addChild(*SoScript230);

SoScript* SoScript233 = new SoScript();
SoScript233->setDEF(QString("dValueTransformerScript"));
SoScript233->setDirectOutput(true);
SoScript233->setMustEvaluate(true);
Sofield* Sofield234 = new Sofield();
Sofield234->setName(QString("newTranslation"));
Sofield234->setAccessType(QString("inputOnly"));
Sofield234->setType(QString("SFVec3f"));
Sofield234->setValue(QString("1 1 1"));
SoScript233->addChild(*Sofield234);

Sofield* Sofield235 = new Sofield();
Sofield235->setName(QString("dValue"));
Sofield235->setAccessType(QString("outputOnly"));
Sofield235->setType(QString("SFFloat"));
Sofield235->setValue(QString("1"));
SoScript233->addChild(*Sofield235);


//SoScript233->setSourceCode(QString("ecmascript: function newTranslation(Value) { dValue = Value.x * 5; }"));
SoLayoutLayer105->addChild(*SoScript233);

SoScript* SoScript236 = new SoScript();
SoScript236->setDEF(QString("pdeltaValueTransformerScript"));
SoScript236->setDirectOutput(true);
SoScript236->setMustEvaluate(true);
Sofield* Sofield237 = new Sofield();
Sofield237->setName(QString("newTranslation"));
Sofield237->setAccessType(QString("inputOnly"));
Sofield237->setType(QString("SFVec3f"));
Sofield237->setValue(QString("1 1 1"));
SoScript236->addChild(*Sofield237);

Sofield* Sofield238 = new Sofield();
Sofield238->setName(QString("pdeltaValue"));
Sofield238->setAccessType(QString("outputOnly"));
Sofield238->setType(QString("SFFloat"));
Sofield238->setValue(QString("1"));
SoScript236->addChild(*Sofield238);


//SoScript236->setSourceCode(QString("ecmascript: function newTranslation(Value) { pdeltaValue = Value.x; }"));
SoLayoutLayer105->addChild(*SoScript236);

SoScript* SoScript239 = new SoScript();
SoScript239->setDEF(QString("tdeltaValueTransformerScript"));
SoScript239->setDirectOutput(true);
SoScript239->setMustEvaluate(true);
Sofield* Sofield240 = new Sofield();
Sofield240->setName(QString("newTranslation"));
Sofield240->setAccessType(QString("inputOnly"));
Sofield240->setType(QString("SFVec3f"));
Sofield240->setValue(QString("1 1 1"));
SoScript239->addChild(*Sofield240);

Sofield* Sofield241 = new Sofield();
Sofield241->setName(QString("tdeltaValue"));
Sofield241->setAccessType(QString("outputOnly"));
Sofield241->setType(QString("SFFloat"));
Sofield241->setValue(QString("1"));
SoScript239->addChild(*Sofield241);


//SoScript239->setSourceCode(QString("ecmascript: function newTranslation(Value) { tdeltaValue = Value.x; }"));
SoLayoutLayer105->addChild(*SoScript239);

SoROUTE* SoROUTE242 = new SoROUTE();
SoROUTE242->setFromField(QString("translation_changed"));
SoROUTE242->setFromNode(QString("aSensor"));
SoROUTE242->setToField(QString("set_translation"));
SoROUTE242->setToNode(QString("aTransform"));
SoLayoutLayer105->addChild(*SoROUTE242);

SoROUTE* SoROUTE243 = new SoROUTE();
SoROUTE243->setFromField(QString("translation_changed"));
SoROUTE243->setFromNode(QString("bSensor"));
SoROUTE243->setToField(QString("set_translation"));
SoROUTE243->setToNode(QString("bTransform"));
SoLayoutLayer105->addChild(*SoROUTE243);

SoROUTE* SoROUTE244 = new SoROUTE();
SoROUTE244->setFromField(QString("translation_changed"));
SoROUTE244->setFromNode(QString("cSensor"));
SoROUTE244->setToField(QString("set_translation"));
SoROUTE244->setToNode(QString("cTransform"));
SoLayoutLayer105->addChild(*SoROUTE244);

SoROUTE* SoROUTE245 = new SoROUTE();
SoROUTE245->setFromField(QString("translation_changed"));
SoROUTE245->setFromNode(QString("dSensor"));
SoROUTE245->setToField(QString("set_translation"));
SoROUTE245->setToNode(QString("dTransform"));
SoLayoutLayer105->addChild(*SoROUTE245);

SoROUTE* SoROUTE246 = new SoROUTE();
SoROUTE246->setFromField(QString("translation_changed"));
SoROUTE246->setFromNode(QString("pdeltaSensor"));
SoROUTE246->setToField(QString("set_translation"));
SoROUTE246->setToNode(QString("pdeltaTransform"));
SoLayoutLayer105->addChild(*SoROUTE246);

SoROUTE* SoROUTE247 = new SoROUTE();
SoROUTE247->setFromField(QString("translation_changed"));
SoROUTE247->setFromNode(QString("tdeltaSensor"));
SoROUTE247->setToField(QString("set_translation"));
SoROUTE247->setToNode(QString("tdeltaTransform"));
SoLayoutLayer105->addChild(*SoROUTE247);

SoROUTE* SoROUTE248 = new SoROUTE();
SoROUTE248->setFromField(QString("translation_changed"));
SoROUTE248->setFromNode(QString("aSensor"));
SoROUTE248->setToField(QString("newTranslation"));
SoROUTE248->setToNode(QString("aValueTransformerScript"));
SoLayoutLayer105->addChild(*SoROUTE248);

SoROUTE* SoROUTE249 = new SoROUTE();
SoROUTE249->setFromField(QString("translation_changed"));
SoROUTE249->setFromNode(QString("bSensor"));
SoROUTE249->setToField(QString("newTranslation"));
SoROUTE249->setToNode(QString("bValueTransformerScript"));
SoLayoutLayer105->addChild(*SoROUTE249);

SoROUTE* SoROUTE250 = new SoROUTE();
SoROUTE250->setFromField(QString("translation_changed"));
SoROUTE250->setFromNode(QString("cSensor"));
SoROUTE250->setToField(QString("newTranslation"));
SoROUTE250->setToNode(QString("cValueTransformerScript"));
SoLayoutLayer105->addChild(*SoROUTE250);

SoROUTE* SoROUTE251 = new SoROUTE();
SoROUTE251->setFromField(QString("translation_changed"));
SoROUTE251->setFromNode(QString("dSensor"));
SoROUTE251->setToField(QString("newTranslation"));
SoROUTE251->setToNode(QString("dValueTransformerScript"));
SoLayoutLayer105->addChild(*SoROUTE251);

SoROUTE* SoROUTE252 = new SoROUTE();
SoROUTE252->setFromField(QString("translation_changed"));
SoROUTE252->setFromNode(QString("pdeltaSensor"));
SoROUTE252->setToField(QString("newTranslation"));
SoROUTE252->setToNode(QString("pdeltaValueTransformerScript"));
SoLayoutLayer105->addChild(*SoROUTE252);

SoROUTE* SoROUTE253 = new SoROUTE();
SoROUTE253->setFromField(QString("translation_changed"));
SoROUTE253->setFromNode(QString("tdeltaSensor"));
SoROUTE253->setToField(QString("newTranslation"));
SoROUTE253->setToNode(QString("tdeltaValueTransformerScript"));
SoLayoutLayer105->addChild(*SoROUTE253);

SoROUTE* SoROUTE254 = new SoROUTE();
SoROUTE254->setFromField(QString("aValue"));
SoROUTE254->setFromNode(QString("aValueTransformerScript"));
SoROUTE254->setToField(QString("a"));
SoROUTE254->setToNode(QString("freewrlShader"));
SoLayoutLayer105->addChild(*SoROUTE254);

SoROUTE* SoROUTE255 = new SoROUTE();
SoROUTE255->setFromField(QString("bValue"));
SoROUTE255->setFromNode(QString("bValueTransformerScript"));
SoROUTE255->setToField(QString("b"));
SoROUTE255->setToNode(QString("freewrlShader"));
SoLayoutLayer105->addChild(*SoROUTE255);

SoROUTE* SoROUTE256 = new SoROUTE();
SoROUTE256->setFromField(QString("cValue"));
SoROUTE256->setFromNode(QString("cValueTransformerScript"));
SoROUTE256->setToField(QString("c"));
SoROUTE256->setToNode(QString("freewrlShader"));
SoLayoutLayer105->addChild(*SoROUTE256);

SoROUTE* SoROUTE257 = new SoROUTE();
SoROUTE257->setFromField(QString("dValue"));
SoROUTE257->setFromNode(QString("dValueTransformerScript"));
SoROUTE257->setToField(QString("d"));
SoROUTE257->setToNode(QString("freewrlShader"));
SoLayoutLayer105->addChild(*SoROUTE257);

SoROUTE* SoROUTE258 = new SoROUTE();
SoROUTE258->setFromField(QString("pdeltaValue"));
SoROUTE258->setFromNode(QString("pdeltaValueTransformerScript"));
SoROUTE258->setToField(QString("pdelta"));
SoROUTE258->setToNode(QString("freewrlShader"));
SoLayoutLayer105->addChild(*SoROUTE258);

SoROUTE* SoROUTE259 = new SoROUTE();
SoROUTE259->setFromField(QString("tdeltaValue"));
SoROUTE259->setFromNode(QString("tdeltaValueTransformerScript"));
SoROUTE259->setToField(QString("tdelta"));
SoROUTE259->setToNode(QString("freewrlShader"));
SoLayoutLayer105->addChild(*SoROUTE259);

SoLayout* SoLayout260 = new SoLayout();
SoLayout260->setAlign(new QString[]{QString("RIGHT"), QString("BOTTOM")}, 2);
SoLayout260->setOffset(new float[]{0.0,0.0}, 2);
SoLayout260->setOffsetUnits(new QString[]{QString("WORLD"), QString("WORLD")}, 2);
SoLayout260->setScaleMode(new QString[]{QString("NONE"), QString("NONE")}, 2);
SoLayout260->setSize(new float[]{0.4,1.0}, 2);
SoLayout260->setSizeUnits(new QString[]{QString("WORLD"), QString("WORLD")}, 2);
SoLayoutLayer105->setLayout(*SoLayout260);

SoViewport* SoViewport261 = new SoViewport();
SoViewport261->setClipBoundary(new float[]{0.0,1.0,0.0,1.0}, 4);
SoLayoutLayer105->setViewport(*SoViewport261);

SoLayerSet32->addChild(*SoLayoutLayer105);

SoNode31->addChild(*SoLayerSet32);

SoSceneManager0->setSceneGraph(*SoNode31);

return 0;
}

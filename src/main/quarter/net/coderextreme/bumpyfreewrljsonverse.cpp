
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
Someta11->setContent(QString("bumpyfreewrljsonverse.x3d"));
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
//basic nodes, which might be present in any scene
SoNavigationInfo* SoNavigationInfo32 = new SoNavigationInfo();
SoNavigationInfo32->setType(new QString[]{QString("EXAMINE")}, 1);
SoNavigationInfo32->setAvatarSize(new float[]{0.25,1.75,0.75}, 3);
SoNode31->addChild(*SoNavigationInfo32);

SoDirectionalLight* SoDirectionalLight33 = new SoDirectionalLight();
SoDirectionalLight33->setAmbientIntensity(0.2);
SoDirectionalLight33->setDirection(new float[]{0.0,-1.0,0.0});
SoNode31->addChild(*SoDirectionalLight33);

SoDirectionalLight* SoDirectionalLight34 = new SoDirectionalLight();
SoDirectionalLight34->setAmbientIntensity(0.2);
SoDirectionalLight34->setDirection(new float[]{-1.0,-0.1,-1.0});
SoNode31->addChild(*SoDirectionalLight34);

SoViewpoint* SoViewpoint35 = new SoViewpoint();
SoViewpoint35->setDescription(QString("My Overview"));
SoViewpoint35->setFieldOfView(1.570796);
SoViewpoint35->setPosition(new float[]{0.0,1.75,60.0});
SoNode31->addChild(*SoViewpoint35);

//LayerSet with two layers, navigation happens in layer 1
SoLayerSet* SoLayerSet36 = new SoLayerSet();
SoLayerSet36->setActiveLayer(1);
SoLayerSet36->setOrder(new int32_t[]{1,2}, 2);
//the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"
//the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)
SoLayer* SoLayer37 = new SoLayer();
SoLayer37->setPickable(true);
SoLayer37->setObjectType(new QString[]{QString("ALL")}, 1);
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

SoLayer37->addChild(*SoGroup38);

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

SoTransform* SoTransform71 = new SoTransform();
SoShape* SoShape72 = new SoShape();
//<Sphere radius='40'></Sphere>
SoIndexedFaceSet* SoIndexedFaceSet73 = new SoIndexedFaceSet();
SoIndexedFaceSet73->setConvex(false);
SoIndexedFaceSet73->setDEF(QString("Orbit"));
SoCoordinate* SoCoordinate74 = new SoCoordinate();
SoCoordinate74->setDEF(QString("OrbitCoordinates"));
SoIndexedFaceSet73->setCoord(*SoCoordinate74);

SoShape72->setGeometry(*SoIndexedFaceSet73);

SoVRMLAppearance* SoVRMLAppearance75 = new SoVRMLAppearance();
SoMaterial* SoMaterial76 = new SoMaterial();
SoMaterial76->setDiffuseColor(new float[]{0.7,0.7,0.7});
SoMaterial76->setSpecularColor(new float[]{0.5,0.5,0.5});
SoVRMLAppearance75->addChild(*SoMaterial76);

SoComposedCubeMapTexture* SoComposedCubeMapTexture77 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture77->setDEF(QString("texture"));
SoImageTexture* SoImageTexture78 = new SoImageTexture();
SoImageTexture78->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoComposedCubeMapTexture77->setBack(*SoImageTexture78);

SoImageTexture* SoImageTexture79 = new SoImageTexture();
SoImageTexture79->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoComposedCubeMapTexture77->setBottom(*SoImageTexture79);

SoImageTexture* SoImageTexture80 = new SoImageTexture();
SoImageTexture80->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoComposedCubeMapTexture77->setFront(*SoImageTexture80);

SoImageTexture* SoImageTexture81 = new SoImageTexture();
SoImageTexture81->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoComposedCubeMapTexture77->setLeft(*SoImageTexture81);

SoImageTexture* SoImageTexture82 = new SoImageTexture();
SoImageTexture82->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoComposedCubeMapTexture77->setRight(*SoImageTexture82);

SoImageTexture* SoImageTexture83 = new SoImageTexture();
SoImageTexture83->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoComposedCubeMapTexture77->setTop(*SoImageTexture83);

SoVRMLAppearance75->addChild(*SoComposedCubeMapTexture77);

SoComposedShader* SoComposedShader84 = new SoComposedShader();
SoComposedShader84->setDEF(QString("freewrlShader"));
SoComposedShader84->setLanguage(QString("GLSL"));
Sofield* Sofield85 = new Sofield();
Sofield85->setName(QString("chromaticDispertion"));
Sofield85->setAccessType(QString("inputOnly"));
Sofield85->setType(QString("SFVec3f"));
Sofield85->setValue(QString("0.98 1 1.033"));
SoComposedShader84->addChild(*Sofield85);

Sofield* Sofield86 = new Sofield();
Sofield86->setName(QString("fw_textureCoordGenType"));
Sofield86->setAccessType(QString("inputOnly"));
Sofield86->setType(QString("SFInt32"));
Sofield86->setValue(QString("0"));
SoComposedShader84->addChild(*Sofield86);

Sofield* Sofield87 = new Sofield();
Sofield87->setName(QString("bias"));
Sofield87->setType(QString("SFFloat"));
Sofield87->setAccessType(QString("inputOnly"));
Sofield87->setValue(QString("0.5"));
SoComposedShader84->addChild(*Sofield87);

Sofield* Sofield88 = new Sofield();
Sofield88->setName(QString("scale"));
Sofield88->setType(QString("SFFloat"));
Sofield88->setAccessType(QString("inputOnly"));
Sofield88->setValue(QString("0.5"));
SoComposedShader84->addChild(*Sofield88);

Sofield* Sofield89 = new Sofield();
Sofield89->setName(QString("power"));
Sofield89->setType(QString("SFFloat"));
Sofield89->setAccessType(QString("inputOnly"));
Sofield89->setValue(QString("2"));
SoComposedShader84->addChild(*Sofield89);

Sofield* Sofield90 = new Sofield();
Sofield90->setName(QString("a"));
Sofield90->setType(QString("SFFloat"));
Sofield90->setAccessType(QString("inputOutput"));
Sofield90->setValue(QString("15"));
SoComposedShader84->addChild(*Sofield90);

Sofield* Sofield91 = new Sofield();
Sofield91->setName(QString("b"));
Sofield91->setType(QString("SFFloat"));
Sofield91->setAccessType(QString("inputOutput"));
Sofield91->setValue(QString("5"));
SoComposedShader84->addChild(*Sofield91);

Sofield* Sofield92 = new Sofield();
Sofield92->setName(QString("c"));
Sofield92->setType(QString("SFFloat"));
Sofield92->setAccessType(QString("inputOutput"));
Sofield92->setValue(QString("5"));
SoComposedShader84->addChild(*Sofield92);

Sofield* Sofield93 = new Sofield();
Sofield93->setName(QString("d"));
Sofield93->setType(QString("SFFloat"));
Sofield93->setAccessType(QString("inputOutput"));
Sofield93->setValue(QString("5"));
SoComposedShader84->addChild(*Sofield93);

Sofield* Sofield94 = new Sofield();
Sofield94->setName(QString("tdelta"));
Sofield94->setType(QString("SFFloat"));
Sofield94->setAccessType(QString("inputOutput"));
Sofield94->setValue(QString("0"));
SoComposedShader84->addChild(*Sofield94);

Sofield* Sofield95 = new Sofield();
Sofield95->setName(QString("pdelta"));
Sofield95->setType(QString("SFFloat"));
Sofield95->setAccessType(QString("inputOutput"));
Sofield95->setValue(QString("0"));
SoComposedShader84->addChild(*Sofield95);

SoShaderPart* SoShaderPart96 = new SoShaderPart();
SoShaderPart96->setUrl(new QString[]{QString("../shaders/freewrl_flowers_chromatic.vs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs")}, 2);
SoShaderPart96->setType(QString("VERTEX"));
SoComposedShader84->setParts(*SoShaderPart96);

SoShaderPart* SoShaderPart97 = new SoShaderPart();
SoShaderPart97->setUrl(new QString[]{QString("../shaders/freewrl.fs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs")}, 2);
SoShaderPart97->setType(QString("FRAGMENT"));
SoComposedShader84->setParts(*SoShaderPart97);

//TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/freewrl.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/freewrl_bubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>
SoVRMLAppearance75->addChild(*SoComposedShader84);

SoShape72->addChild(*SoVRMLAppearance75);

SoTransform71->addChild(*SoShape72);

SoTransform69->addChild(*SoTransform71);

SoLayer37->addChild(*SoTransform69);

SoScript* SoScript98 = new SoScript();
SoScript98->setDEF(QString("OrbitScript"));
Sofield* Sofield99 = new Sofield();
Sofield99->setName(QString("coordinates"));
Sofield99->setAccessType(QString("inputOutput"));
Sofield99->setType(QString("MFVec3f"));
SoScript98->addChild(*Sofield99);

Sofield* Sofield100 = new Sofield();
Sofield100->setName(QString("coordIndexes"));
Sofield100->setAccessType(QString("outputOnly"));
Sofield100->setType(QString("MFInt32"));
SoScript98->addChild(*Sofield100);

Sofield* Sofield101 = new Sofield();
Sofield101->setName(QString("a"));
Sofield101->setType(QString("SFFloat"));
Sofield101->setAccessType(QString("inputOutput"));
Sofield101->setValue(QString("10"));
SoScript98->addChild(*Sofield101);

Sofield* Sofield102 = new Sofield();
Sofield102->setName(QString("b"));
Sofield102->setType(QString("SFFloat"));
Sofield102->setAccessType(QString("inputOutput"));
Sofield102->setValue(QString("10"));
SoScript98->addChild(*Sofield102);

Sofield* Sofield103 = new Sofield();
Sofield103->setName(QString("c"));
Sofield103->setType(QString("SFFloat"));
Sofield103->setAccessType(QString("inputOutput"));
Sofield103->setValue(QString("2"));
SoScript98->addChild(*Sofield103);

Sofield* Sofield104 = new Sofield();
Sofield104->setName(QString("d"));
Sofield104->setType(QString("SFFloat"));
Sofield104->setAccessType(QString("inputOutput"));
Sofield104->setValue(QString("2"));
SoScript98->addChild(*Sofield104);

Sofield* Sofield105 = new Sofield();
Sofield105->setName(QString("pdelta"));
Sofield105->setType(QString("SFFloat"));
Sofield105->setAccessType(QString("inputOutput"));
Sofield105->setValue(QString("0"));
SoScript98->addChild(*Sofield105);

Sofield* Sofield106 = new Sofield();
Sofield106->setName(QString("tdelta"));
Sofield106->setType(QString("SFFloat"));
Sofield106->setAccessType(QString("inputOutput"));
Sofield106->setValue(QString("0"));
SoScript98->addChild(*Sofield106);


//SoScript98->setSourceCode(QString("ecmascript:")+
//_T("function initialize() {")+
//_T("     var resolution = 100;")+
//_T("     var theta = 0.0;")+
//_T("     var phi = 0.0;")+
//_T("     var delta = (2 * 3.141592653) / (resolution-1);")+
//_T("     var crds = new MFVec3f();")+
//_T("     var vecCount = 0;")+
//_T("     for ( i = 0; i < resolution; i++) {")+
//_T("     	for ( j = 0; j < resolution; j++) {")+
//_T("		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);")+
//_T("		crds[vecCount] = new SFVec3f(")+
//_T("			rho * Math.cos(phi) * Math.cos(theta),")+
//_T("			rho * Math.cos(phi) * Math.sin(theta),")+
//_T("			rho * Math.sin(phi)")+
//_T("		);")+
//_T("		vecCount++;")+
//_T("		theta += delta;")+
//_T("	}")+
//_T("	phi += delta;")+
//_T("     }")+
//_T("     coordinates = crds;")+
//_T("     // coordinates = new MFVec3f(...crds);")+
//_T("     var cis = new MFInt32();")+
//_T("     var intCount = 0;")+
//_T("     for ( i = 0; i < resolution-1; i++) {")+
//_T("     	for ( j = 0; j < resolution-1; j++) {")+
//_T("	     cis[intCount++] = i*resolution+j;")+
//_T("	     cis[intCount++] = i*resolution+j+1;")+
//_T("	     cis[intCount++] = (i+1)*resolution+j+1;")+
//_T("	     cis[intCount++] = (i+1)*resolution+j;")+
//_T("	     cis[intCount++] = -1;")+
//_T("	}")+
//_T("    }")+
//_T("    coordIndexes = cis;")+
//_T("    // coordIndexes = new MFInt32(...cis);")+
//_T("}"));
SoLayer37->addChild(*SoScript98);

SoROUTE* SoROUTE107 = new SoROUTE();
SoROUTE107->setFromField(QString("coordIndexes"));
SoROUTE107->setFromNode(QString("OrbitScript"));
SoROUTE107->setToField(QString("set_coordIndex"));
SoROUTE107->setToNode(QString("Orbit"));
SoLayer37->addChild(*SoROUTE107);

SoROUTE* SoROUTE108 = new SoROUTE();
SoROUTE108->setFromField(QString("coordinates"));
SoROUTE108->setFromNode(QString("OrbitScript"));
SoROUTE108->setToField(QString("set_point"));
SoROUTE108->setToNode(QString("OrbitCoordinates"));
SoLayer37->addChild(*SoROUTE108);

//DIS multiuser facilities
SoDISEntityManager* SoDISEntityManager109 = new SoDISEntityManager();
SoDISEntityManager109->setDEF(QString("EntityManager"));
SoDISEntityTypeMapping* SoDISEntityTypeMapping110 = new SoDISEntityTypeMapping();
SoDISEntityTypeMapping110->setCategory(77);
SoDISEntityTypeMapping110->setSpecific(1);
SoDISEntityTypeMapping110->setUrl(new QString[]{QString("../data/Gramps8Final.x3d"), QString("https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d")}, 2);
SoDISEntityManager109->setMapping(*SoDISEntityTypeMapping110);

SoDISEntityTypeMapping* SoDISEntityTypeMapping111 = new SoDISEntityTypeMapping();
SoDISEntityTypeMapping111->setCategory(77);
SoDISEntityTypeMapping111->setSpecific(2);
SoDISEntityTypeMapping111->setUrl(new QString[]{QString("../data/Leif8Final.x3d"), QString("https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d")}, 2);
SoDISEntityManager109->setMapping(*SoDISEntityTypeMapping111);

SoDISEntityTypeMapping* SoDISEntityTypeMapping112 = new SoDISEntityTypeMapping();
SoDISEntityTypeMapping112->setCategory(77);
SoDISEntityTypeMapping112->setSpecific(3);
SoDISEntityTypeMapping112->setUrl(new QString[]{QString("../data/Lily8Final.x3d"), QString("https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d")}, 2);
SoDISEntityManager109->setMapping(*SoDISEntityTypeMapping112);

SoDISEntityTypeMapping* SoDISEntityTypeMapping113 = new SoDISEntityTypeMapping();
SoDISEntityTypeMapping113->setCategory(77);
SoDISEntityTypeMapping113->setSpecific(4);
SoDISEntityTypeMapping113->setUrl(new QString[]{QString("../data/Tufani8Final.x3d"), QString("https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d")}, 2);
SoDISEntityManager109->setMapping(*SoDISEntityTypeMapping113);

SoLayer37->addChild(*SoDISEntityManager109);

SoCollision* SoCollision114 = new SoCollision();
SoCollision114->setEnabled(false);
SoGroup* SoGroup115 = new SoGroup();
SoGroup115->setDEF(QString("AvatarHolder"));
SoCollision114->addChildren(*SoGroup115);

SoLayer37->addChild(*SoCollision114);

SoROUTE* SoROUTE116 = new SoROUTE();
SoROUTE116->setFromField(QString("addedEntities"));
SoROUTE116->setFromNode(QString("EntityManager"));
SoROUTE116->setToField(QString("addChildren"));
SoROUTE116->setToNode(QString("AvatarHolder"));
SoLayer37->addChild(*SoROUTE116);

SoROUTE* SoROUTE117 = new SoROUTE();
SoROUTE117->setFromField(QString("removedEntities"));
SoROUTE117->setFromNode(QString("EntityManager"));
SoROUTE117->setToField(QString("removeChildren"));
SoROUTE117->setToNode(QString("AvatarHolder"));
SoLayer37->addChild(*SoROUTE117);

SoLayerSet36->addChild(*SoLayer37);

SoLayoutLayer* SoLayoutLayer118 = new SoLayoutLayer();
SoLayoutLayer118->setPickable(true);
SoLayoutLayer118->setObjectType(new QString[]{QString("ALL")}, 1);
//positioning the LayoutLayer
//clipping the LayoutLayer
//the content (children) of the LayoutLayer
//first, the slider for scaling the model
SoTransform* SoTransform119 = new SoTransform();
SoTransform119->setTranslation(new float[]{0.0,0.0,-3.0});
SoShape* SoShape120 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance121 = new SoVRMLAppearance();
SoMaterial* SoMaterial122 = new SoMaterial();
SoMaterial122->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoMaterial122->setTransparency(0.7);
SoVRMLAppearance121->addChild(*SoMaterial122);

SoShape120->addChild(*SoVRMLAppearance121);

SoBox* SoBox123 = new SoBox();
SoBox123->setSize(new float[]{100.0,100.0,0.02});
SoShape120->setGeometry(*SoBox123);

SoTransform119->addChild(*SoShape120);

SoLayoutLayer118->addChild(*SoTransform119);

SoTransform* SoTransform124 = new SoTransform();
SoTransform124->setDEF(QString("equationTransform"));
SoTransform* SoTransform125 = new SoTransform();
SoTransform125->setTranslation(new float[]{0.0,0.0,-20.0});
SoShape* SoShape126 = new SoShape();
SoText* SoText127 = new SoText();
SoText127->setDEF(QString("equation"));
SoText127->setString(new QString[]{QString("r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)")}, 1);
SoFontStyle* SoFontStyle128 = new SoFontStyle();
SoFontStyle128->setSize(0.09);
SoText127->setFontStyle(*SoFontStyle128);

SoShape126->setGeometry(*SoText127);

SoVRMLAppearance* SoVRMLAppearance129 = new SoVRMLAppearance();
SoMaterial* SoMaterial130 = new SoMaterial();
SoMaterial130->setDiffuseColor(new float[]{1.0,1.0,0.0});
SoVRMLAppearance129->addChild(*SoMaterial130);

SoShape126->addChild(*SoVRMLAppearance129);

SoTransform125->addChild(*SoShape126);

SoTransform124->addChild(*SoTransform125);

SoLayoutLayer118->addChild(*SoTransform124);

SoProtoDeclare* SoProtoDeclare131 = new SoProtoDeclare();
SoProtoDeclare131->setName(QString("SliderProto"));
SoProtoInterface* SoProtoInterface132 = new SoProtoInterface();
Sofield* Sofield133 = new Sofield();
Sofield133->setName(QString("sliderTranslation"));
Sofield133->setAccessType(QString("inputOutput"));
Sofield133->setType(QString("SFVec3f"));
Sofield133->setValue(QString("0 0.7 0"));
SoProtoInterface132->addChild(*Sofield133);

Sofield* Sofield134 = new Sofield();
Sofield134->setName(QString("transformTranslation"));
Sofield134->setAccessType(QString("inputOutput"));
Sofield134->setType(QString("SFVec3f"));
Sofield134->setValue(QString("0 0 0.1"));
SoProtoInterface132->addChild(*Sofield134);

Sofield* Sofield135 = new Sofield();
Sofield135->setName(QString("sensorTranslation"));
Sofield135->setAccessType(QString("inputOutput"));
Sofield135->setType(QString("SFVec3f"));
Sofield135->setValue(QString("0 0 0"));
SoProtoInterface132->addChild(*Sofield135);

Sofield* Sofield136 = new Sofield();
Sofield136->setName(QString("textString"));
Sofield136->setAccessType(QString("inputOutput"));
Sofield136->setType(QString("MFString"));
Sofield136->setValue(QString("\"a=\""));
SoProtoInterface132->addChild(*Sofield136);

Sofield* Sofield137 = new Sofield();
Sofield137->setName(QString("parameterScale"));
Sofield137->setAccessType(QString("inputOutput"));
Sofield137->setType(QString("SFFloat"));
Sofield137->setValue(QString("30"));
SoProtoInterface132->addChild(*Sofield137);

Sofield* Sofield138 = new Sofield();
Sofield138->setName(QString("parameterName"));
Sofield138->setAccessType(QString("inputOutput"));
Sofield138->setType(QString("SFString"));
Sofield138->setValue(QString("a"));
SoProtoInterface132->addChild(*Sofield138);

Sofield* Sofield139 = new Sofield();
Sofield139->setName(QString("shaderNode"));
Sofield139->setAccessType(QString("inputOutput"));
Sofield139->setType(QString("SFNode"));
SoProtoInterface132->addChild(*Sofield139);

SoProtoDeclare131->addChild(*SoProtoInterface132);

SoProtoBody* SoProtoBody140 = new SoProtoBody();
SoGroup* SoGroup141 = new SoGroup();
SoTransform* SoTransform142 = new SoTransform();
SoTransform142->setDEF(QString("protoSlider"));
SoTransform142->setTranslation(new float[]{0.0,0.7,0.0});
SoIS* SoIS143 = new SoIS();
Soconnect* Soconnect144 = new Soconnect();
Soconnect144->setNodeField(QString("translation"));
Soconnect144->setProtoField(QString("sliderTranslation"));
SoIS143->addChild(*Soconnect144);

SoTransform142->addChild(*SoIS143);

SoTransform* SoTransform145 = new SoTransform();
SoTransform145->setDEF(QString("protoTransform"));
SoTransform145->setTranslation(new float[]{0.0,0.0,0.1});
SoIS* SoIS146 = new SoIS();
Soconnect* Soconnect147 = new Soconnect();
Soconnect147->setNodeField(QString("translation"));
Soconnect147->setProtoField(QString("sensorTranslation"));
SoIS146->addChild(*Soconnect147);

SoTransform145->addChild(*SoIS146);

SoPlaneSensor* SoPlaneSensor148 = new SoPlaneSensor();
SoPlaneSensor148->setDEF(QString("protoSensor"));
SoPlaneSensor148->setMaxPosition(new float[]{1.0,0.0});
SoTransform145->addChild(*SoPlaneSensor148);

SoTransform* SoTransform149 = new SoTransform();
SoTransform149->setTranslation(new float[]{0.0,0.0,0.0});
SoTouchSensor* SoTouchSensor150 = new SoTouchSensor();
SoTouchSensor150->setDEF(QString("protoTS"));
SoTransform149->addChild(*SoTouchSensor150);

SoTransform145->addChild(*SoTransform149);

SoTransform* SoTransform151 = new SoTransform();
SoShape* SoShape152 = new SoShape();
SoText* SoText153 = new SoText();
SoText153->setDEF(QString("protoText"));
SoText153->setString(new QString[]{QString("a=")}, 1);
SoIS* SoIS154 = new SoIS();
Soconnect* Soconnect155 = new Soconnect();
Soconnect155->setNodeField(QString("string"));
Soconnect155->setProtoField(QString("textString"));
SoIS154->addChild(*Soconnect155);

SoText153->addChild(*SoIS154);

SoFontStyle* SoFontStyle156 = new SoFontStyle();
SoFontStyle156->setSize(0.23);
SoText153->setFontStyle(*SoFontStyle156);

SoShape152->setGeometry(*SoText153);

SoVRMLAppearance* SoVRMLAppearance157 = new SoVRMLAppearance();
SoMaterial* SoMaterial158 = new SoMaterial();
SoVRMLAppearance157->addChild(*SoMaterial158);

SoShape152->addChild(*SoVRMLAppearance157);

SoTransform151->addChild(*SoShape152);

SoTransform145->addChild(*SoTransform151);

SoTransform142->addChild(*SoTransform145);

SoGroup141->addChild(*SoTransform142);

SoScript* SoScript159 = new SoScript();
SoScript159->setDEF(QString("protoValueTransformerScript"));
SoScript159->setDirectOutput(true);
SoScript159->setMustEvaluate(true);
Sofield* Sofield160 = new Sofield();
Sofield160->setName(QString("protoScale"));
Sofield160->setAccessType(QString("inputOutput"));
Sofield160->setType(QString("SFFloat"));
Sofield160->setValue(QString("30"));
SoScript159->addChild(*Sofield160);

Sofield* Sofield161 = new Sofield();
Sofield161->setName(QString("protoParameterName"));
Sofield161->setAccessType(QString("inputOutput"));
Sofield161->setType(QString("SFString"));
Sofield161->setValue(QString("a"));
SoScript159->addChild(*Sofield161);

Sofield* Sofield162 = new Sofield();
Sofield162->setName(QString("shader"));
Sofield162->setAccessType(QString("inputOutput"));
Sofield162->setType(QString("SFNode"));
SoScript159->addChild(*Sofield162);

Sofield* Sofield163 = new Sofield();
Sofield163->setName(QString("newTranslation"));
Sofield163->setAccessType(QString("inputOnly"));
Sofield163->setType(QString("SFVec3f"));
Sofield163->setValue(QString("1 1 1"));
SoScript159->addChild(*Sofield163);

Sofield* Sofield164 = new Sofield();
Sofield164->setName(QString("protoValue_changed"));
Sofield164->setAccessType(QString("outputOnly"));
Sofield164->setType(QString("SFFloat"));
Sofield164->setValue(QString("1"));
SoScript159->addChild(*Sofield164);

Sofield* Sofield165 = new Sofield();
Sofield165->setName(QString("protoText_changed"));
Sofield165->setAccessType(QString("outputOnly"));
Sofield165->setType(QString("MFString"));
Sofield165->setValue(QString("\"1.0\""));
SoScript159->addChild(*Sofield165);

SoIS* SoIS166 = new SoIS();
Soconnect* Soconnect167 = new Soconnect();
Soconnect167->setNodeField(QString("protoScale"));
Soconnect167->setProtoField(QString("parameterScale"));
SoIS166->addChild(*Soconnect167);

Soconnect* Soconnect168 = new Soconnect();
Soconnect168->setNodeField(QString("protoParameterName"));
Soconnect168->setProtoField(QString("parameterName"));
SoIS166->addChild(*Soconnect168);

Soconnect* Soconnect169 = new Soconnect();
Soconnect169->setNodeField(QString("shader"));
Soconnect169->setProtoField(QString("shaderNode"));
SoIS166->addChild(*Soconnect169);

SoScript159->addChild(*SoIS166);


//SoScript159->setSourceCode(QString("ecmascript:")+
//_T("const newTranslation = function(Value) {")+
//_T("	'use strict';")+
//_T("	protoValue_changed = Value.x * protoScale;")+
//_T("	protoText_changed = new MFString(protoParameterName+'='+protoValue_changed.toFixed(2));")+
//_T("        var orientation = Value.x;")+
//_T("        var ps = Browser.currentScene.getNamedNode(\"protoSensor\");")+
//_T("        var t = Browser.currentScene.getNamedNode(\"protoTransform\");")+
//_T("        var txt = Browser.currentScene.getNamedNode(\"protoText\");")+
//_T("        if (shader) {")+
//_T("            shader.getField(protoParameterName).setValue(orientation * protoScale);")+
//_T("        }")+
//_T("        if (txt) {")+
//_T("            var stringField = txt.getField(\"string\");")+
//_T("            var label = protoParameterName;")+
//_T("            stringField.setValue(new MFString(label+\"=\"+(orientation * protoScale).toFixed(2)));")+
//_T("        }")+
//_T("        if (ps) {")+
//_T("            ps.offset = new SFVec3f(orientation, ps.offset[1], ps.offset[2]);")+
//_T("        }")+
//_T("        if (t) {")+
//_T("            t.translation = new SFVec3f(orientation, t.translation[1], t.translation[2]);")+
//_T("        }")+
//_T("}"));
SoGroup141->addChild(*SoScript159);

SoROUTE* SoROUTE170 = new SoROUTE();
SoROUTE170->setFromField(QString("translation_changed"));
SoROUTE170->setFromNode(QString("protoSensor"));
SoROUTE170->setToField(QString("set_translation"));
SoROUTE170->setToNode(QString("protoTransform"));
SoGroup141->addChild(*SoROUTE170);

SoROUTE* SoROUTE171 = new SoROUTE();
SoROUTE171->setFromField(QString("translation_changed"));
SoROUTE171->setFromNode(QString("protoSensor"));
SoROUTE171->setToField(QString("newTranslation"));
SoROUTE171->setToNode(QString("protoValueTransformerScript"));
SoGroup141->addChild(*SoROUTE171);

SoROUTE* SoROUTE172 = new SoROUTE();
SoROUTE172->setFromField(QString("protoText_changed"));
SoROUTE172->setFromNode(QString("protoValueTransformerScript"));
SoROUTE172->setToField(QString("string"));
SoROUTE172->setToNode(QString("protoText"));
SoGroup141->addChild(*SoROUTE172);

SoProtoBody140->addChild(*SoGroup141);

SoProtoDeclare131->addChild(*SoProtoBody140);

SoLayoutLayer118->addChild(*SoProtoDeclare131);

SoProtoInstance* SoProtoInstance173 = new SoProtoInstance();
SoProtoInstance173->setName(QString("SliderProto"));
SoProtoInstance173->setDEF(QString("aPI"));
SoField* SoField174 = new SoField();
SoField174->setName(QString("sliderTranslation"));
SoField174->setValue(QString("0 0.7 0"));
SoProtoInstance173->addChild(*SoField174);

SoField* SoField175 = new SoField();
SoField175->setName(QString("transformTranslation"));
SoField175->setValue(QString("0 0 0.1"));
SoProtoInstance173->addChild(*SoField175);

SoField* SoField176 = new SoField();
SoField176->setName(QString("sensorTranslation"));
SoField176->setValue(QString("0 0 0"));
SoProtoInstance173->addChild(*SoField176);

SoField* SoField177 = new SoField();
SoField177->setName(QString("textString"));
SoField177->setValue(QString("\"a=\""));
SoProtoInstance173->addChild(*SoField177);

SoField* SoField178 = new SoField();
SoField178->setName(QString("parameterScale"));
SoField178->setValue(QString("30"));
SoProtoInstance173->addChild(*SoField178);

SoField* SoField179 = new SoField();
SoField179->setName(QString("parameterName"));
SoField179->setValue(QString("a"));
SoProtoInstance173->addChild(*SoField179);

SoField* SoField180 = new SoField();
SoField180->setName(QString("shaderNode"));
SoComposedShader* SoComposedShader181 = new SoComposedShader();
SoComposedShader181->setUSE(QString("freewrlShader"));
SoField180->addChild(*SoComposedShader181);

SoProtoInstance173->addChild(*SoField180);

SoLayoutLayer118->addChild(*SoProtoInstance173);

SoProtoInstance* SoProtoInstance182 = new SoProtoInstance();
SoProtoInstance182->setName(QString("SliderProto"));
SoProtoInstance182->setDEF(QString("bPI"));
SoField* SoField183 = new SoField();
SoField183->setName(QString("sliderTranslation"));
SoField183->setValue(QString("0 0.4 0"));
SoProtoInstance182->addChild(*SoField183);

SoField* SoField184 = new SoField();
SoField184->setName(QString("transformTranslation"));
SoField184->setValue(QString("0 0 0.1"));
SoProtoInstance182->addChild(*SoField184);

SoField* SoField185 = new SoField();
SoField185->setName(QString("sensorTranslation"));
SoField185->setValue(QString("0 0 0"));
SoProtoInstance182->addChild(*SoField185);

SoField* SoField186 = new SoField();
SoField186->setName(QString("textString"));
SoField186->setValue(QString("\"b=\""));
SoProtoInstance182->addChild(*SoField186);

SoField* SoField187 = new SoField();
SoField187->setName(QString("parameterScale"));
SoField187->setValue(QString("30"));
SoProtoInstance182->addChild(*SoField187);

SoField* SoField188 = new SoField();
SoField188->setName(QString("parameterName"));
SoField188->setValue(QString("b"));
SoProtoInstance182->addChild(*SoField188);

SoField* SoField189 = new SoField();
SoField189->setName(QString("shaderNode"));
SoComposedShader* SoComposedShader190 = new SoComposedShader();
SoComposedShader190->setUSE(QString("freewrlShader"));
SoField189->addChild(*SoComposedShader190);

SoProtoInstance182->addChild(*SoField189);

SoLayoutLayer118->addChild(*SoProtoInstance182);

SoProtoInstance* SoProtoInstance191 = new SoProtoInstance();
SoProtoInstance191->setName(QString("SliderProto"));
SoProtoInstance191->setDEF(QString("cPI"));
SoField* SoField192 = new SoField();
SoField192->setName(QString("sliderTranslation"));
SoField192->setValue(QString("0 0.1 0"));
SoProtoInstance191->addChild(*SoField192);

SoField* SoField193 = new SoField();
SoField193->setName(QString("transformTranslation"));
SoField193->setValue(QString("0 0 0.1"));
SoProtoInstance191->addChild(*SoField193);

SoField* SoField194 = new SoField();
SoField194->setName(QString("sensorTranslation"));
SoField194->setValue(QString("0 0 0"));
SoProtoInstance191->addChild(*SoField194);

SoField* SoField195 = new SoField();
SoField195->setName(QString("textString"));
SoField195->setValue(QString("\"c=\""));
SoProtoInstance191->addChild(*SoField195);

SoField* SoField196 = new SoField();
SoField196->setName(QString("parameterScale"));
SoField196->setValue(QString("20"));
SoProtoInstance191->addChild(*SoField196);

SoField* SoField197 = new SoField();
SoField197->setName(QString("parameterName"));
SoField197->setValue(QString("c"));
SoProtoInstance191->addChild(*SoField197);

SoField* SoField198 = new SoField();
SoField198->setName(QString("shaderNode"));
SoComposedShader* SoComposedShader199 = new SoComposedShader();
SoComposedShader199->setUSE(QString("freewrlShader"));
SoField198->addChild(*SoComposedShader199);

SoProtoInstance191->addChild(*SoField198);

SoLayoutLayer118->addChild(*SoProtoInstance191);

SoProtoInstance* SoProtoInstance200 = new SoProtoInstance();
SoProtoInstance200->setName(QString("SliderProto"));
SoProtoInstance200->setDEF(QString("dPI"));
SoField* SoField201 = new SoField();
SoField201->setName(QString("sliderTranslation"));
SoField201->setValue(QString("0 -0.2 0"));
SoProtoInstance200->addChild(*SoField201);

SoField* SoField202 = new SoField();
SoField202->setName(QString("transformTranslation"));
SoField202->setValue(QString("0 0 0.1"));
SoProtoInstance200->addChild(*SoField202);

SoField* SoField203 = new SoField();
SoField203->setName(QString("sensorTranslation"));
SoField203->setValue(QString("0 0 0"));
SoProtoInstance200->addChild(*SoField203);

SoField* SoField204 = new SoField();
SoField204->setName(QString("textString"));
SoField204->setValue(QString("\"d=\""));
SoProtoInstance200->addChild(*SoField204);

SoField* SoField205 = new SoField();
SoField205->setName(QString("parameterScale"));
SoField205->setValue(QString("20"));
SoProtoInstance200->addChild(*SoField205);

SoField* SoField206 = new SoField();
SoField206->setName(QString("parameterName"));
SoField206->setValue(QString("d"));
SoProtoInstance200->addChild(*SoField206);

SoField* SoField207 = new SoField();
SoField207->setName(QString("shaderNode"));
SoComposedShader* SoComposedShader208 = new SoComposedShader();
SoComposedShader208->setUSE(QString("freewrlShader"));
SoField207->addChild(*SoComposedShader208);

SoProtoInstance200->addChild(*SoField207);

SoLayoutLayer118->addChild(*SoProtoInstance200);

SoProtoInstance* SoProtoInstance209 = new SoProtoInstance();
SoProtoInstance209->setName(QString("SliderProto"));
SoProtoInstance209->setDEF(QString("tdeltaPI"));
SoField* SoField210 = new SoField();
SoField210->setName(QString("sliderTranslation"));
SoField210->setValue(QString("0 -0.5 0"));
SoProtoInstance209->addChild(*SoField210);

SoField* SoField211 = new SoField();
SoField211->setName(QString("transformTranslation"));
SoField211->setValue(QString("0 0 0.1"));
SoProtoInstance209->addChild(*SoField211);

SoField* SoField212 = new SoField();
SoField212->setName(QString("sensorTranslation"));
SoField212->setValue(QString("0 0 0"));
SoProtoInstance209->addChild(*SoField212);

SoField* SoField213 = new SoField();
SoField213->setName(QString("textString"));
SoField213->setValue(QString("\"tdelta=\""));
SoProtoInstance209->addChild(*SoField213);

SoField* SoField214 = new SoField();
SoField214->setName(QString("parameterScale"));
SoField214->setValue(QString("6.28"));
SoProtoInstance209->addChild(*SoField214);

SoField* SoField215 = new SoField();
SoField215->setName(QString("parameterName"));
SoField215->setValue(QString("tdelta"));
SoProtoInstance209->addChild(*SoField215);

SoField* SoField216 = new SoField();
SoField216->setName(QString("shaderNode"));
SoComposedShader* SoComposedShader217 = new SoComposedShader();
SoComposedShader217->setUSE(QString("freewrlShader"));
SoField216->addChild(*SoComposedShader217);

SoProtoInstance209->addChild(*SoField216);

SoLayoutLayer118->addChild(*SoProtoInstance209);

SoProtoInstance* SoProtoInstance218 = new SoProtoInstance();
SoProtoInstance218->setName(QString("SliderProto"));
SoProtoInstance218->setDEF(QString("pdeltaPI"));
SoField* SoField219 = new SoField();
SoField219->setName(QString("sliderTranslation"));
SoField219->setValue(QString("0 -0.8 0"));
SoProtoInstance218->addChild(*SoField219);

SoField* SoField220 = new SoField();
SoField220->setName(QString("transformTranslation"));
SoField220->setValue(QString("0 0 0.1"));
SoProtoInstance218->addChild(*SoField220);

SoField* SoField221 = new SoField();
SoField221->setName(QString("sensorTranslation"));
SoField221->setValue(QString("0 0 0"));
SoProtoInstance218->addChild(*SoField221);

SoField* SoField222 = new SoField();
SoField222->setName(QString("textString"));
SoField222->setValue(QString("\"pdelta=\""));
SoProtoInstance218->addChild(*SoField222);

SoField* SoField223 = new SoField();
SoField223->setName(QString("parameterScale"));
SoField223->setValue(QString("6.28"));
SoProtoInstance218->addChild(*SoField223);

SoField* SoField224 = new SoField();
SoField224->setName(QString("parameterName"));
SoField224->setValue(QString("pdelta"));
SoProtoInstance218->addChild(*SoField224);

SoField* SoField225 = new SoField();
SoField225->setName(QString("shaderNode"));
SoComposedShader* SoComposedShader226 = new SoComposedShader();
SoComposedShader226->setUSE(QString("freewrlShader"));
SoField225->addChild(*SoComposedShader226);

SoProtoInstance218->addChild(*SoField225);

SoLayoutLayer118->addChild(*SoProtoInstance218);

SoLayout* SoLayout227 = new SoLayout();
SoLayout227->setAlign(new QString[]{QString("LEFT"), QString("BOTTOM")}, 2);
SoLayout227->setOffset(new float[]{-0.2,0.19}, 2);
SoLayout227->setSize(new float[]{0.4,0.6}, 2);
SoLayoutLayer118->setLayout(*SoLayout227);

SoViewport* SoViewport228 = new SoViewport();
SoViewport228->setClipBoundary(new float[]{0.0,1.0,0.0,1.0}, 4);
SoLayoutLayer118->setViewport(*SoViewport228);

SoLayerSet36->addChild(*SoLayoutLayer118);

SoNode31->addChild(*SoLayerSet36);

SoSceneManager0->setSceneGraph(*SoNode31);

return 0;
}


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
//<component name='Shape' level='4'></component>
//<component name='DIS' level='2'></component>
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

Someta* Someta10 = new Someta();
Someta10->setName(QString("title"));
Someta10->setContent(QString("bumpyx_itesliders.x3d"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("description"));
Someta11->setContent(QString("*Bumpy flower with prototype sliders*"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("creator"));
Someta12->setContent(QString("Doug Sanden, Christoph Valentin, John Carlson"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("identifier"));
Someta13->setContent(QString("https://github.com/coderextreme/JSONverse/public/x3d/bumpyx_itesliders.x3d"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("generator"));
Someta14->setContent(QString("PSPad, http://www.pspad.com/"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("license"));
Someta15->setContent(QString("license.html"));
Sohead1->addMeta(*Someta15);

SoSceneManager0->setHead(*Sohead1);

//\"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution, It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) open for their \"discussion about the teapot\"
SoNode* SoNode16 = new SoNode();
//LayerSet with two layers, navigation happens in layer 1
SoLayerSet* SoLayerSet17 = new SoLayerSet();
SoLayerSet17->setActiveLayer(1);
SoLayerSet17->setOrder(new int32_t[]{1,2,3}, 3);
//the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"
SoLayer* SoLayer18 = new SoLayer();
SoLayer18->setPickable(true);
SoLayer18->setObjectType(new QString[]{QString("ALL")}, 1);
//basic nodes, which might be present in any scene
SoNavigationInfo* SoNavigationInfo19 = new SoNavigationInfo();
SoNavigationInfo19->setType(new QString[]{QString("EXAMINE")}, 1);
SoNavigationInfo19->setAvatarSize(new float[]{0.25,1.75,0.75}, 3);
SoLayer18->addChild(*SoNavigationInfo19);

SoDirectionalLight* SoDirectionalLight20 = new SoDirectionalLight();
SoDirectionalLight20->setAmbientIntensity(0.2);
SoDirectionalLight20->setDirection(new float[]{0.0,-1.0,0.0});
SoLayer18->addChild(*SoDirectionalLight20);

SoDirectionalLight* SoDirectionalLight21 = new SoDirectionalLight();
SoDirectionalLight21->setAmbientIntensity(0.2);
SoDirectionalLight21->setDirection(new float[]{-1.0,-0.1,-1.0});
SoLayer18->addChild(*SoDirectionalLight21);

SoViewpoint* SoViewpoint22 = new SoViewpoint();
SoViewpoint22->setDescription(QString("My Overview"));
SoViewpoint22->setFieldOfView(1.570796);
SoViewpoint22->setPosition(new float[]{0.0,1.75,60.0});
SoLayer18->addChild(*SoViewpoint22);

//this group contains the red/green/blue 3D crosshair
SoGroup* SoGroup23 = new SoGroup();
//Arrow X
SoTransform* SoTransform24 = new SoTransform();
SoTransform24->setTranslation(new float[]{25.0,0.0,0.0});
SoTransform24->setRotation(new float[]{0.0,0.0,-1.0,1.57});
SoShape* SoShape25 = new SoShape();
SoCylinder* SoCylinder26 = new SoCylinder();
SoCylinder26->setDEF(QString("Shaft"));
SoCylinder26->setRadius(0.35);
SoCylinder26->setHeight(50);
SoShape25->setGeometry(*SoCylinder26);

SoVRMLAppearance* SoVRMLAppearance27 = new SoVRMLAppearance();
SoMaterial* SoMaterial28 = new SoMaterial();
SoMaterial28->setDEF(QString("RED"));
SoMaterial28->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoMaterial28->setEmissiveColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance27->addChild(*SoMaterial28);

SoShape25->addChild(*SoVRMLAppearance27);

SoTransform24->addChild(*SoShape25);

SoGroup23->addChild(*SoTransform24);

SoTransform* SoTransform29 = new SoTransform();
SoTransform29->setTranslation(new float[]{50.0,0.0,0.0});
SoTransform29->setRotation(new float[]{0.0,0.0,-1.0,1.57});
SoShape* SoShape30 = new SoShape();
SoCone* SoCone31 = new SoCone();
SoCone31->setDEF(QString("Tip"));
SoCone31->setBottomRadius(0.8);
SoCone31->setHeight(3);
SoShape30->setGeometry(*SoCone31);

SoVRMLAppearance* SoVRMLAppearance32 = new SoVRMLAppearance();
SoMaterial* SoMaterial33 = new SoMaterial();
SoMaterial33->setUSE(QString("RED"));
SoVRMLAppearance32->addChild(*SoMaterial33);

SoShape30->addChild(*SoVRMLAppearance32);

SoTransform29->addChild(*SoShape30);

SoGroup23->addChild(*SoTransform29);

//Arrow Y
SoTransform* SoTransform34 = new SoTransform();
SoTransform34->setTranslation(new float[]{0.0,25.0,0.0});
SoShape* SoShape35 = new SoShape();
SoCylinder* SoCylinder36 = new SoCylinder();
SoCylinder36->setUSE(QString("Shaft"));
SoShape35->setGeometry(*SoCylinder36);

SoVRMLAppearance* SoVRMLAppearance37 = new SoVRMLAppearance();
SoMaterial* SoMaterial38 = new SoMaterial();
SoMaterial38->setDEF(QString("GREEN"));
SoMaterial38->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoMaterial38->setEmissiveColor(new float[]{0.0,1.0,0.0});
SoVRMLAppearance37->addChild(*SoMaterial38);

SoShape35->addChild(*SoVRMLAppearance37);

SoTransform34->addChild(*SoShape35);

SoGroup23->addChild(*SoTransform34);

SoTransform* SoTransform39 = new SoTransform();
SoTransform39->setTranslation(new float[]{0.0,50.0,0.0});
SoShape* SoShape40 = new SoShape();
SoCone* SoCone41 = new SoCone();
SoCone41->setUSE(QString("Tip"));
SoShape40->setGeometry(*SoCone41);

SoVRMLAppearance* SoVRMLAppearance42 = new SoVRMLAppearance();
SoMaterial* SoMaterial43 = new SoMaterial();
SoMaterial43->setUSE(QString("GREEN"));
SoVRMLAppearance42->addChild(*SoMaterial43);

SoShape40->addChild(*SoVRMLAppearance42);

SoTransform39->addChild(*SoShape40);

SoGroup23->addChild(*SoTransform39);

//Arrow Z
SoTransform* SoTransform44 = new SoTransform();
SoTransform44->setTranslation(new float[]{0.0,0.0,25.0});
SoTransform44->setRotation(new float[]{1.0,0.0,0.0,1.57});
SoShape* SoShape45 = new SoShape();
SoCylinder* SoCylinder46 = new SoCylinder();
SoCylinder46->setUSE(QString("Shaft"));
SoShape45->setGeometry(*SoCylinder46);

SoVRMLAppearance* SoVRMLAppearance47 = new SoVRMLAppearance();
SoMaterial* SoMaterial48 = new SoMaterial();
SoMaterial48->setDEF(QString("BLUE"));
SoMaterial48->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoMaterial48->setEmissiveColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance47->addChild(*SoMaterial48);

SoShape45->addChild(*SoVRMLAppearance47);

SoTransform44->addChild(*SoShape45);

SoGroup23->addChild(*SoTransform44);

SoTransform* SoTransform49 = new SoTransform();
SoTransform49->setTranslation(new float[]{0.0,0.0,50.0});
SoTransform49->setRotation(new float[]{1.0,0.0,0.0,1.57});
SoShape* SoShape50 = new SoShape();
SoCone* SoCone51 = new SoCone();
SoCone51->setUSE(QString("Tip"));
SoShape50->setGeometry(*SoCone51);

SoVRMLAppearance* SoVRMLAppearance52 = new SoVRMLAppearance();
SoMaterial* SoMaterial53 = new SoMaterial();
SoMaterial53->setUSE(QString("BLUE"));
SoVRMLAppearance52->addChild(*SoMaterial53);

SoShape50->addChild(*SoVRMLAppearance52);

SoTransform49->addChild(*SoShape50);

SoGroup23->addChild(*SoTransform49);

SoLayer18->addChild(*SoGroup23);

//the model that is being reviewed by the users of this scene
SoTransform* SoTransform54 = new SoTransform();
SoTransform54->setDEF(QString("FlowerTransform"));
//<Inline DEF=\"Flower\" url='\"bumpyx_ite.x3d\"' />
//Images courtesy of Paul Debevec's Light Probe Image Gallery
SoBackground* SoBackground55 = new SoBackground();
SoBackground55->setBackUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoBackground55->setBottomUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoBackground55->setFrontUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoBackground55->setLeftUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoBackground55->setRightUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoBackground55->setTopUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoTransform54->addChild(*SoBackground55);

SoTransform* SoTransform56 = new SoTransform();
SoShape* SoShape57 = new SoShape();
//<Sphere radius='40'></Sphere>
SoIndexedFaceSet* SoIndexedFaceSet58 = new SoIndexedFaceSet();
SoIndexedFaceSet58->setConvex(false);
SoIndexedFaceSet58->setDEF(QString("Orbit"));
SoCoordinate* SoCoordinate59 = new SoCoordinate();
SoCoordinate59->setDEF(QString("OrbitCoordinates"));
SoIndexedFaceSet58->setCoord(*SoCoordinate59);

SoShape57->setGeometry(*SoIndexedFaceSet58);

SoVRMLAppearance* SoVRMLAppearance60 = new SoVRMLAppearance();
SoMaterial* SoMaterial61 = new SoMaterial();
SoMaterial61->setDiffuseColor(new float[]{0.7,0.7,0.7});
SoMaterial61->setSpecularColor(new float[]{0.5,0.5,0.5});
SoVRMLAppearance60->addChild(*SoMaterial61);

SoComposedCubeMapTexture* SoComposedCubeMapTexture62 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture62->setDEF(QString("texture"));
SoImageTexture* SoImageTexture63 = new SoImageTexture();
SoImageTexture63->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoComposedCubeMapTexture62->setBack(*SoImageTexture63);

SoImageTexture* SoImageTexture64 = new SoImageTexture();
SoImageTexture64->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoComposedCubeMapTexture62->setBottom(*SoImageTexture64);

SoImageTexture* SoImageTexture65 = new SoImageTexture();
SoImageTexture65->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoComposedCubeMapTexture62->setFront(*SoImageTexture65);

SoImageTexture* SoImageTexture66 = new SoImageTexture();
SoImageTexture66->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoComposedCubeMapTexture62->setLeft(*SoImageTexture66);

SoImageTexture* SoImageTexture67 = new SoImageTexture();
SoImageTexture67->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoComposedCubeMapTexture62->setRight(*SoImageTexture67);

SoImageTexture* SoImageTexture68 = new SoImageTexture();
SoImageTexture68->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoComposedCubeMapTexture62->setTop(*SoImageTexture68);

SoVRMLAppearance60->addChild(*SoComposedCubeMapTexture62);

SoComposedShader* SoComposedShader69 = new SoComposedShader();
SoComposedShader69->setDEF(QString("x_iteShader"));
SoComposedShader69->setLanguage(QString("GLSL"));
Sofield* Sofield70 = new Sofield();
Sofield70->setName(QString("chromaticDispertion"));
Sofield70->setAccessType(QString("inputOnly"));
Sofield70->setType(QString("SFVec3f"));
Sofield70->setValue(QString("0.98 1 1.033"));
SoComposedShader69->addChild(*Sofield70);

Sofield* Sofield71 = new Sofield();
Sofield71->setName(QString("cube"));
Sofield71->setType(QString("SFNode"));
Sofield71->setAccessType(QString("inputOnly"));
SoComposedCubeMapTexture* SoComposedCubeMapTexture72 = new SoComposedCubeMapTexture();
SoComposedCubeMapTexture72->setUSE(QString("texture"));
Sofield71->addChild(*SoComposedCubeMapTexture72);

SoComposedShader69->addChild(*Sofield71);

Sofield* Sofield73 = new Sofield();
Sofield73->setName(QString("bias"));
Sofield73->setType(QString("SFFloat"));
Sofield73->setAccessType(QString("inputOnly"));
Sofield73->setValue(QString("0.5"));
SoComposedShader69->addChild(*Sofield73);

Sofield* Sofield74 = new Sofield();
Sofield74->setName(QString("scale"));
Sofield74->setType(QString("SFFloat"));
Sofield74->setAccessType(QString("inputOnly"));
Sofield74->setValue(QString("0.5"));
SoComposedShader69->addChild(*Sofield74);

Sofield* Sofield75 = new Sofield();
Sofield75->setName(QString("power"));
Sofield75->setType(QString("SFFloat"));
Sofield75->setAccessType(QString("inputOnly"));
Sofield75->setValue(QString("2"));
SoComposedShader69->addChild(*Sofield75);

Sofield* Sofield76 = new Sofield();
Sofield76->setName(QString("a"));
Sofield76->setType(QString("SFFloat"));
Sofield76->setAccessType(QString("inputOutput"));
Sofield76->setValue(QString("15"));
SoComposedShader69->addChild(*Sofield76);

Sofield* Sofield77 = new Sofield();
Sofield77->setName(QString("b"));
Sofield77->setType(QString("SFFloat"));
Sofield77->setAccessType(QString("inputOutput"));
Sofield77->setValue(QString("5"));
SoComposedShader69->addChild(*Sofield77);

Sofield* Sofield78 = new Sofield();
Sofield78->setName(QString("c"));
Sofield78->setType(QString("SFFloat"));
Sofield78->setAccessType(QString("inputOutput"));
Sofield78->setValue(QString("5"));
SoComposedShader69->addChild(*Sofield78);

Sofield* Sofield79 = new Sofield();
Sofield79->setName(QString("d"));
Sofield79->setType(QString("SFFloat"));
Sofield79->setAccessType(QString("inputOutput"));
Sofield79->setValue(QString("5"));
SoComposedShader69->addChild(*Sofield79);

Sofield* Sofield80 = new Sofield();
Sofield80->setName(QString("tdelta"));
Sofield80->setType(QString("SFFloat"));
Sofield80->setAccessType(QString("inputOutput"));
Sofield80->setValue(QString("0"));
SoComposedShader69->addChild(*Sofield80);

Sofield* Sofield81 = new Sofield();
Sofield81->setName(QString("pdelta"));
Sofield81->setType(QString("SFFloat"));
Sofield81->setAccessType(QString("inputOutput"));
Sofield81->setValue(QString("0"));
SoComposedShader69->addChild(*Sofield81);

SoShaderPart* SoShaderPart82 = new SoShaderPart();
SoShaderPart82->setUrl(new QString[]{QString("../shaders/x_ite_flowers_chromatic.vs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs")}, 2);
SoShaderPart82->setType(QString("VERTEX"));
SoComposedShader69->setParts(*SoShaderPart82);

SoShaderPart* SoShaderPart83 = new SoShaderPart();
SoShaderPart83->setUrl(new QString[]{QString("../shaders/x_ite.fs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")}, 2);
SoShaderPart83->setType(QString("FRAGMENT"));
SoComposedShader69->setParts(*SoShaderPart83);

//TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/x_itebubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/xite_bubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>
SoVRMLAppearance60->addChild(*SoComposedShader69);

SoShape57->addChild(*SoVRMLAppearance60);

SoTransform56->addChild(*SoShape57);

SoTransform54->addChild(*SoTransform56);

SoLayer18->addChild(*SoTransform54);

SoScript* SoScript84 = new SoScript();
SoScript84->setDEF(QString("OrbitScript"));
Sofield* Sofield85 = new Sofield();
Sofield85->setName(QString("coordinates"));
Sofield85->setAccessType(QString("inputOutput"));
Sofield85->setType(QString("MFVec3f"));
SoScript84->addChild(*Sofield85);

Sofield* Sofield86 = new Sofield();
Sofield86->setName(QString("coordIndexes"));
Sofield86->setAccessType(QString("outputOnly"));
Sofield86->setType(QString("MFInt32"));
SoScript84->addChild(*Sofield86);

Sofield* Sofield87 = new Sofield();
Sofield87->setName(QString("a"));
Sofield87->setType(QString("SFFloat"));
Sofield87->setAccessType(QString("inputOutput"));
Sofield87->setValue(QString("10"));
SoScript84->addChild(*Sofield87);

Sofield* Sofield88 = new Sofield();
Sofield88->setName(QString("b"));
Sofield88->setType(QString("SFFloat"));
Sofield88->setAccessType(QString("inputOutput"));
Sofield88->setValue(QString("10"));
SoScript84->addChild(*Sofield88);

Sofield* Sofield89 = new Sofield();
Sofield89->setName(QString("c"));
Sofield89->setType(QString("SFFloat"));
Sofield89->setAccessType(QString("inputOutput"));
Sofield89->setValue(QString("2"));
SoScript84->addChild(*Sofield89);

Sofield* Sofield90 = new Sofield();
Sofield90->setName(QString("d"));
Sofield90->setType(QString("SFFloat"));
Sofield90->setAccessType(QString("inputOutput"));
Sofield90->setValue(QString("2"));
SoScript84->addChild(*Sofield90);

Sofield* Sofield91 = new Sofield();
Sofield91->setName(QString("pdelta"));
Sofield91->setType(QString("SFFloat"));
Sofield91->setAccessType(QString("inputOutput"));
Sofield91->setValue(QString("0"));
SoScript84->addChild(*Sofield91);

Sofield* Sofield92 = new Sofield();
Sofield92->setName(QString("tdelta"));
Sofield92->setType(QString("SFFloat"));
Sofield92->setAccessType(QString("inputOutput"));
Sofield92->setValue(QString("0"));
SoScript84->addChild(*Sofield92);


//SoScript84->setSourceCode(QString("ecmascript:")+
//_T("function initialize() {")+
//_T("     var resolution = 300;")+
//_T("     var theta = 0.0;")+
//_T("     var phi = 0.0;")+
//_T("     var delta = (2 * 3.141592653) / (resolution-1);")+
//_T("     var crds = new MFVec3f();")+
//_T("     for ( i = 0; i < resolution; i++) {")+
//_T("     	for ( j = 0; j < resolution; j++) {")+
//_T("		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);")+
//_T("		crds.push(new SFVec3f(")+
//_T("			rho * Math.cos(phi) * Math.cos(theta),")+
//_T("			rho * Math.cos(phi) * Math.sin(theta),")+
//_T("			rho * Math.sin(phi)")+
//_T("		));")+
//_T("		theta += delta;")+
//_T("	}")+
//_T("	phi += delta;")+
//_T("     }")+
//_T("     coordinates = crds;")+
//_T("     var cis = new MFInt32();")+
//_T("     for ( i = 0; i < resolution-1; i++) {")+
//_T("     	for ( j = 0; j < resolution-1; j++) {")+
//_T("	     cis.push(i*resolution+j);")+
//_T("	     cis.push(i*resolution+j+1);")+
//_T("	     cis.push((i+1)*resolution+j+1);")+
//_T("	     cis.push((i+1)*resolution+j);")+
//_T("	     cis.push(-1);")+
//_T("	}")+
//_T("    }")+
//_T("    coordIndexes = cis;")+
//_T("}"));
SoLayer18->addChild(*SoScript84);

SoROUTE* SoROUTE93 = new SoROUTE();
SoROUTE93->setFromField(QString("coordIndexes"));
SoROUTE93->setFromNode(QString("OrbitScript"));
SoROUTE93->setToField(QString("set_coordIndex"));
SoROUTE93->setToNode(QString("Orbit"));
SoLayer18->addChild(*SoROUTE93);

SoROUTE* SoROUTE94 = new SoROUTE();
SoROUTE94->setFromField(QString("coordinates"));
SoROUTE94->setFromNode(QString("OrbitScript"));
SoROUTE94->setToField(QString("set_point"));
SoROUTE94->setToNode(QString("OrbitCoordinates"));
SoLayer18->addChild(*SoROUTE94);

SoLayerSet17->addChild(*SoLayer18);

SoLayoutLayer* SoLayoutLayer95 = new SoLayoutLayer();
SoLayoutLayer95->setPickable(true);
SoLayoutLayer95->setObjectType(new QString[]{QString("ALL")}, 1);
SoLayout* SoLayout96 = new SoLayout();
SoLayout96->setAlign(new QString[]{QString("LEFT"), QString("BOTTOM")}, 2);
SoLayout96->setOffset(new float[]{-0.2,0.19}, 2);
SoLayout96->setSize(new float[]{0.4,0.6}, 2);
SoLayoutLayer95->setLayout(*SoLayout96);

SoViewport* SoViewport97 = new SoViewport();
SoViewport97->setClipBoundary(new float[]{0.0,1.0,0.0,1.0}, 4);
SoLayoutLayer95->setViewport(*SoViewport97);

SoTransform* SoTransform98 = new SoTransform();
SoTransform98->setTranslation(new float[]{0.0,0.0,-3.0});
SoShape* SoShape99 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance100 = new SoVRMLAppearance();
SoMaterial* SoMaterial101 = new SoMaterial();
SoMaterial101->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoMaterial101->setTransparency(0.7);
SoVRMLAppearance100->addChild(*SoMaterial101);

SoShape99->addChild(*SoVRMLAppearance100);

SoBox* SoBox102 = new SoBox();
SoBox102->setSize(new float[]{100.0,100.0,0.02});
SoShape99->setGeometry(*SoBox102);

SoTransform98->addChild(*SoShape99);

SoLayoutLayer95->addChild(*SoTransform98);

SoTransform* SoTransform103 = new SoTransform();
SoTransform103->setDEF(QString("equationTransform"));
SoTransform* SoTransform104 = new SoTransform();
SoTransform104->setTranslation(new float[]{0.0,0.0,-20.0});
SoShape* SoShape105 = new SoShape();
SoText* SoText106 = new SoText();
SoText106->setDEF(QString("equation"));
SoText106->setString(new QString[]{QString("r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)")}, 1);
SoFontStyle* SoFontStyle107 = new SoFontStyle();
SoFontStyle107->setSize(0.09);
SoText106->setFontStyle(*SoFontStyle107);

SoShape105->setGeometry(*SoText106);

SoVRMLAppearance* SoVRMLAppearance108 = new SoVRMLAppearance();
SoMaterial* SoMaterial109 = new SoMaterial();
SoMaterial109->setDiffuseColor(new float[]{1.0,1.0,0.0});
SoVRMLAppearance108->addChild(*SoMaterial109);

SoShape105->addChild(*SoVRMLAppearance108);

SoTransform104->addChild(*SoShape105);

SoTransform103->addChild(*SoTransform104);

SoLayoutLayer95->addChild(*SoTransform103);

SoProtoDeclare* SoProtoDeclare110 = new SoProtoDeclare();
SoProtoDeclare110->setName(QString("SliderProto"));
SoProtoInterface* SoProtoInterface111 = new SoProtoInterface();
Sofield* Sofield112 = new Sofield();
Sofield112->setName(QString("sliderTranslation"));
Sofield112->setAccessType(QString("inputOutput"));
Sofield112->setType(QString("SFVec3f"));
Sofield112->setValue(QString("0 0.7 0"));
SoProtoInterface111->addChild(*Sofield112);

Sofield* Sofield113 = new Sofield();
Sofield113->setName(QString("transformTranslation"));
Sofield113->setAccessType(QString("inputOutput"));
Sofield113->setType(QString("SFVec3f"));
Sofield113->setValue(QString("0 0 0.1"));
SoProtoInterface111->addChild(*Sofield113);

Sofield* Sofield114 = new Sofield();
Sofield114->setName(QString("sensorTranslation"));
Sofield114->setAccessType(QString("inputOutput"));
Sofield114->setType(QString("SFVec3f"));
Sofield114->setValue(QString("0 0 0"));
SoProtoInterface111->addChild(*Sofield114);

Sofield* Sofield115 = new Sofield();
Sofield115->setName(QString("textString"));
Sofield115->setAccessType(QString("inputOutput"));
Sofield115->setType(QString("MFString"));
Sofield115->setValue(QString("\"a=\""));
SoProtoInterface111->addChild(*Sofield115);

Sofield* Sofield116 = new Sofield();
Sofield116->setName(QString("parameterScale"));
Sofield116->setAccessType(QString("inputOutput"));
Sofield116->setType(QString("SFFloat"));
Sofield116->setValue(QString("30"));
SoProtoInterface111->addChild(*Sofield116);

Sofield* Sofield117 = new Sofield();
Sofield117->setName(QString("parameterName"));
Sofield117->setAccessType(QString("inputOutput"));
Sofield117->setType(QString("SFString"));
Sofield117->setValue(QString("a"));
SoProtoInterface111->addChild(*Sofield117);

Sofield* Sofield118 = new Sofield();
Sofield118->setName(QString("petNames"));
Sofield118->setAccessType(QString("inputOutput"));
Sofield118->setType(QString("MFString"));
SoProtoInterface111->addChild(*Sofield118);

Sofield* Sofield119 = new Sofield();
Sofield119->setName(QString("shaderNode"));
Sofield119->setAccessType(QString("inputOutput"));
Sofield119->setType(QString("SFNode"));
SoProtoInterface111->addChild(*Sofield119);

SoProtoDeclare110->addChild(*SoProtoInterface111);

SoProtoBody* SoProtoBody120 = new SoProtoBody();
SoGroup* SoGroup121 = new SoGroup();
SoTransform* SoTransform122 = new SoTransform();
SoTransform122->setDEF(QString("protoSlider"));
SoTransform122->setTranslation(new float[]{0.0,0.7,0.0});
SoIS* SoIS123 = new SoIS();
Soconnect* Soconnect124 = new Soconnect();
Soconnect124->setNodeField(QString("translation"));
Soconnect124->setProtoField(QString("sliderTranslation"));
SoIS123->addChild(*Soconnect124);

SoTransform122->addChild(*SoIS123);

SoTransform* SoTransform125 = new SoTransform();
SoTransform125->setDEF(QString("protoTransform"));
SoTransform125->setTranslation(new float[]{0.0,0.0,0.1});
SoIS* SoIS126 = new SoIS();
Soconnect* Soconnect127 = new Soconnect();
Soconnect127->setNodeField(QString("translation"));
Soconnect127->setProtoField(QString("sensorTranslation"));
SoIS126->addChild(*Soconnect127);

SoTransform125->addChild(*SoIS126);

SoPlaneSensor* SoPlaneSensor128 = new SoPlaneSensor();
SoPlaneSensor128->setDEF(QString("protoSensor"));
SoPlaneSensor128->setDescription(QString("Grab with mouse to adjust slider"));
SoPlaneSensor128->setMaxPosition(new float[]{1.0,0.0});
SoTransform125->addChild(*SoPlaneSensor128);

SoTransform* SoTransform129 = new SoTransform();
SoTransform129->setTranslation(new float[]{0.0,0.0,0.0});
SoTouchSensor* SoTouchSensor130 = new SoTouchSensor();
SoTouchSensor130->setDEF(QString("protoTS"));
SoTransform129->addChild(*SoTouchSensor130);

SoTransform125->addChild(*SoTransform129);

SoTransform* SoTransform131 = new SoTransform();
SoShape* SoShape132 = new SoShape();
SoText* SoText133 = new SoText();
SoText133->setDEF(QString("protoText"));
SoText133->setString(new QString[]{QString("a=")}, 1);
SoIS* SoIS134 = new SoIS();
Soconnect* Soconnect135 = new Soconnect();
Soconnect135->setNodeField(QString("string"));
Soconnect135->setProtoField(QString("textString"));
SoIS134->addChild(*Soconnect135);

SoText133->addChild(*SoIS134);

SoFontStyle* SoFontStyle136 = new SoFontStyle();
SoFontStyle136->setSize(0.23);
SoText133->setFontStyle(*SoFontStyle136);

SoShape132->setGeometry(*SoText133);

SoVRMLAppearance* SoVRMLAppearance137 = new SoVRMLAppearance();
SoMaterial* SoMaterial138 = new SoMaterial();
SoVRMLAppearance137->addChild(*SoMaterial138);

SoShape132->addChild(*SoVRMLAppearance137);

SoTransform131->addChild(*SoShape132);

SoTransform125->addChild(*SoTransform131);

SoTransform122->addChild(*SoTransform125);

SoGroup121->addChild(*SoTransform122);

SoScript* SoScript139 = new SoScript();
SoScript139->setUrl(new QString[]{QString("../javascripts/X3DUser.js"), QString("https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DUser.js")}, 2);
SoScript139->setDEF(QString("protoValueTransformerScript"));
SoScript139->setDirectOutput(true);
SoScript139->setMustEvaluate(true);
Sofield* Sofield140 = new Sofield();
Sofield140->setName(QString("protoScale"));
Sofield140->setAccessType(QString("inputOutput"));
Sofield140->setType(QString("SFFloat"));
SoScript139->addChild(*Sofield140);

Sofield* Sofield141 = new Sofield();
Sofield141->setName(QString("petNames"));
Sofield141->setAccessType(QString("inputOutput"));
Sofield141->setType(QString("MFString"));
SoScript139->addChild(*Sofield141);

Sofield* Sofield142 = new Sofield();
Sofield142->setName(QString("protoParameterName"));
Sofield142->setAccessType(QString("inputOutput"));
Sofield142->setType(QString("SFString"));
SoScript139->addChild(*Sofield142);

Sofield* Sofield143 = new Sofield();
Sofield143->setName(QString("shader"));
Sofield143->setAccessType(QString("inputOutput"));
Sofield143->setType(QString("SFNode"));
SoScript139->addChild(*Sofield143);

Sofield* Sofield144 = new Sofield();
Sofield144->setName(QString("newTranslation"));
Sofield144->setAccessType(QString("inputOnly"));
Sofield144->setType(QString("SFVec3f"));
Sofield144->setValue(QString("1 1 1"));
SoScript139->addChild(*Sofield144);

Sofield* Sofield145 = new Sofield();
Sofield145->setName(QString("protoValue_changed"));
Sofield145->setAccessType(QString("outputOnly"));
Sofield145->setType(QString("SFFloat"));
Sofield145->setValue(QString("1"));
SoScript139->addChild(*Sofield145);

Sofield* Sofield146 = new Sofield();
Sofield146->setName(QString("protoText_changed"));
Sofield146->setAccessType(QString("outputOnly"));
Sofield146->setType(QString("MFString"));
Sofield146->setValue(QString("\"1.0\""));
SoScript139->addChild(*Sofield146);

SoIS* SoIS147 = new SoIS();
Soconnect* Soconnect148 = new Soconnect();
Soconnect148->setNodeField(QString("protoScale"));
Soconnect148->setProtoField(QString("parameterScale"));
SoIS147->addChild(*Soconnect148);

Soconnect* Soconnect149 = new Soconnect();
Soconnect149->setNodeField(QString("petNames"));
Soconnect149->setProtoField(QString("petNames"));
SoIS147->addChild(*Soconnect149);

Soconnect* Soconnect150 = new Soconnect();
Soconnect150->setNodeField(QString("protoParameterName"));
Soconnect150->setProtoField(QString("parameterName"));
SoIS147->addChild(*Soconnect150);

Soconnect* Soconnect151 = new Soconnect();
Soconnect151->setNodeField(QString("shader"));
Soconnect151->setProtoField(QString("shaderNode"));
SoIS147->addChild(*Soconnect151);

SoScript139->addChild(*SoIS147);

SoGroup121->addChild(*SoScript139);

SoROUTE* SoROUTE152 = new SoROUTE();
SoROUTE152->setFromField(QString("translation_changed"));
SoROUTE152->setFromNode(QString("protoSensor"));
SoROUTE152->setToField(QString("set_translation"));
SoROUTE152->setToNode(QString("protoTransform"));
SoGroup121->addChild(*SoROUTE152);

SoROUTE* SoROUTE153 = new SoROUTE();
SoROUTE153->setFromField(QString("translation_changed"));
SoROUTE153->setFromNode(QString("protoSensor"));
SoROUTE153->setToField(QString("newTranslation"));
SoROUTE153->setToNode(QString("protoValueTransformerScript"));
SoGroup121->addChild(*SoROUTE153);

SoROUTE* SoROUTE154 = new SoROUTE();
SoROUTE154->setFromField(QString("protoText_changed"));
SoROUTE154->setFromNode(QString("protoValueTransformerScript"));
SoROUTE154->setToField(QString("string"));
SoROUTE154->setToNode(QString("protoText"));
SoGroup121->addChild(*SoROUTE154);

SoProtoBody120->addChild(*SoGroup121);

SoProtoDeclare110->addChild(*SoProtoBody120);

SoLayoutLayer95->addChild(*SoProtoDeclare110);

SoProtoInstance* SoProtoInstance155 = new SoProtoInstance();
SoProtoInstance155->setName(QString("SliderProto"));
SoProtoInstance155->setDEF(QString("aPI"));
SoField* SoField156 = new SoField();
SoField156->setName(QString("sliderTranslation"));
SoField156->setValue(QString("0 0.7 0"));
SoProtoInstance155->addChild(*SoField156);

SoField* SoField157 = new SoField();
SoField157->setName(QString("transformTranslation"));
SoField157->setValue(QString("0 0 0.1"));
SoProtoInstance155->addChild(*SoField157);

SoField* SoField158 = new SoField();
SoField158->setName(QString("sensorTranslation"));
SoField158->setValue(QString("0 0 0"));
SoProtoInstance155->addChild(*SoField158);

SoField* SoField159 = new SoField();
SoField159->setName(QString("textString"));
SoField159->setValue(QString("\"a=\""));
SoProtoInstance155->addChild(*SoField159);

SoField* SoField160 = new SoField();
SoField160->setName(QString("parameterScale"));
SoField160->setValue(QString("30"));
SoProtoInstance155->addChild(*SoField160);

SoField* SoField161 = new SoField();
SoField161->setName(QString("parameterName"));
SoField161->setValue(QString("a"));
SoProtoInstance155->addChild(*SoField161);

SoField* SoField162 = new SoField();
SoField162->setName(QString("petNames"));
SoField162->setValue(QString("\"yottzumm\" \"group1-petname\""));
SoProtoInstance155->addChild(*SoField162);

SoField* SoField163 = new SoField();
SoField163->setName(QString("shaderNode"));
SoComposedShader* SoComposedShader164 = new SoComposedShader();
SoComposedShader164->setUSE(QString("x_iteShader"));
SoField163->addChild(*SoComposedShader164);

SoProtoInstance155->addChild(*SoField163);

SoLayoutLayer95->addChild(*SoProtoInstance155);

SoProtoInstance* SoProtoInstance165 = new SoProtoInstance();
SoProtoInstance165->setName(QString("SliderProto"));
SoProtoInstance165->setDEF(QString("bPI"));
SoField* SoField166 = new SoField();
SoField166->setName(QString("sliderTranslation"));
SoField166->setValue(QString("0 0.4 0"));
SoProtoInstance165->addChild(*SoField166);

SoField* SoField167 = new SoField();
SoField167->setName(QString("transformTranslation"));
SoField167->setValue(QString("0 0 0.1"));
SoProtoInstance165->addChild(*SoField167);

SoField* SoField168 = new SoField();
SoField168->setName(QString("sensorTranslation"));
SoField168->setValue(QString("0 0 0"));
SoProtoInstance165->addChild(*SoField168);

SoField* SoField169 = new SoField();
SoField169->setName(QString("textString"));
SoField169->setValue(QString("\"b=\""));
SoProtoInstance165->addChild(*SoField169);

SoField* SoField170 = new SoField();
SoField170->setName(QString("parameterScale"));
SoField170->setValue(QString("30"));
SoProtoInstance165->addChild(*SoField170);

SoField* SoField171 = new SoField();
SoField171->setName(QString("parameterName"));
SoField171->setValue(QString("b"));
SoProtoInstance165->addChild(*SoField171);

SoField* SoField172 = new SoField();
SoField172->setName(QString("petNames"));
SoField172->setValue(QString("\"yottzumm\" \"group1-petname\""));
SoProtoInstance165->addChild(*SoField172);

SoField* SoField173 = new SoField();
SoField173->setName(QString("shaderNode"));
SoComposedShader* SoComposedShader174 = new SoComposedShader();
SoComposedShader174->setUSE(QString("x_iteShader"));
SoField173->addChild(*SoComposedShader174);

SoProtoInstance165->addChild(*SoField173);

SoLayoutLayer95->addChild(*SoProtoInstance165);

SoProtoInstance* SoProtoInstance175 = new SoProtoInstance();
SoProtoInstance175->setName(QString("SliderProto"));
SoProtoInstance175->setDEF(QString("cPI"));
SoField* SoField176 = new SoField();
SoField176->setName(QString("sliderTranslation"));
SoField176->setValue(QString("0 0.1 0"));
SoProtoInstance175->addChild(*SoField176);

SoField* SoField177 = new SoField();
SoField177->setName(QString("transformTranslation"));
SoField177->setValue(QString("0 0 0.1"));
SoProtoInstance175->addChild(*SoField177);

SoField* SoField178 = new SoField();
SoField178->setName(QString("sensorTranslation"));
SoField178->setValue(QString("0 0 0"));
SoProtoInstance175->addChild(*SoField178);

SoField* SoField179 = new SoField();
SoField179->setName(QString("textString"));
SoField179->setValue(QString("\"c=\""));
SoProtoInstance175->addChild(*SoField179);

SoField* SoField180 = new SoField();
SoField180->setName(QString("parameterScale"));
SoField180->setValue(QString("20"));
SoProtoInstance175->addChild(*SoField180);

SoField* SoField181 = new SoField();
SoField181->setName(QString("parameterName"));
SoField181->setValue(QString("c"));
SoProtoInstance175->addChild(*SoField181);

SoField* SoField182 = new SoField();
SoField182->setName(QString("petNames"));
SoField182->setValue(QString("\"yottzumm\" \"yottzumm2\" \"group1-petname\""));
SoProtoInstance175->addChild(*SoField182);

SoField* SoField183 = new SoField();
SoField183->setName(QString("shaderNode"));
SoComposedShader* SoComposedShader184 = new SoComposedShader();
SoComposedShader184->setUSE(QString("x_iteShader"));
SoField183->addChild(*SoComposedShader184);

SoProtoInstance175->addChild(*SoField183);

SoLayoutLayer95->addChild(*SoProtoInstance175);

SoProtoInstance* SoProtoInstance185 = new SoProtoInstance();
SoProtoInstance185->setName(QString("SliderProto"));
SoProtoInstance185->setDEF(QString("dPI"));
SoField* SoField186 = new SoField();
SoField186->setName(QString("sliderTranslation"));
SoField186->setValue(QString("0 -0.2 0"));
SoProtoInstance185->addChild(*SoField186);

SoField* SoField187 = new SoField();
SoField187->setName(QString("transformTranslation"));
SoField187->setValue(QString("0 0 0.1"));
SoProtoInstance185->addChild(*SoField187);

SoField* SoField188 = new SoField();
SoField188->setName(QString("sensorTranslation"));
SoField188->setValue(QString("0 0 0"));
SoProtoInstance185->addChild(*SoField188);

SoField* SoField189 = new SoField();
SoField189->setName(QString("textString"));
SoField189->setValue(QString("\"d=\""));
SoProtoInstance185->addChild(*SoField189);

SoField* SoField190 = new SoField();
SoField190->setName(QString("parameterScale"));
SoField190->setValue(QString("20"));
SoProtoInstance185->addChild(*SoField190);

SoField* SoField191 = new SoField();
SoField191->setName(QString("parameterName"));
SoField191->setValue(QString("d"));
SoProtoInstance185->addChild(*SoField191);

SoField* SoField192 = new SoField();
SoField192->setName(QString("petNames"));
SoField192->setValue(QString("\"yottzumm\" \"yottzumm2\" \"group1-petname\""));
SoProtoInstance185->addChild(*SoField192);

SoField* SoField193 = new SoField();
SoField193->setName(QString("shaderNode"));
SoComposedShader* SoComposedShader194 = new SoComposedShader();
SoComposedShader194->setUSE(QString("x_iteShader"));
SoField193->addChild(*SoComposedShader194);

SoProtoInstance185->addChild(*SoField193);

SoLayoutLayer95->addChild(*SoProtoInstance185);

SoProtoInstance* SoProtoInstance195 = new SoProtoInstance();
SoProtoInstance195->setName(QString("SliderProto"));
SoProtoInstance195->setDEF(QString("tdeltaPI"));
SoField* SoField196 = new SoField();
SoField196->setName(QString("sliderTranslation"));
SoField196->setValue(QString("0 -0.5 0"));
SoProtoInstance195->addChild(*SoField196);

SoField* SoField197 = new SoField();
SoField197->setName(QString("transformTranslation"));
SoField197->setValue(QString("0 0 0.1"));
SoProtoInstance195->addChild(*SoField197);

SoField* SoField198 = new SoField();
SoField198->setName(QString("sensorTranslation"));
SoField198->setValue(QString("0 0 0"));
SoProtoInstance195->addChild(*SoField198);

SoField* SoField199 = new SoField();
SoField199->setName(QString("textString"));
SoField199->setValue(QString("\"tdelta=\""));
SoProtoInstance195->addChild(*SoField199);

SoField* SoField200 = new SoField();
SoField200->setName(QString("parameterScale"));
SoField200->setValue(QString("6.28"));
SoProtoInstance195->addChild(*SoField200);

SoField* SoField201 = new SoField();
SoField201->setName(QString("parameterName"));
SoField201->setValue(QString("tdelta"));
SoProtoInstance195->addChild(*SoField201);

SoField* SoField202 = new SoField();
SoField202->setName(QString("petNames"));
SoField202->setValue(QString("\"yottzumm2\" \"group1-petname\""));
SoProtoInstance195->addChild(*SoField202);

SoField* SoField203 = new SoField();
SoField203->setName(QString("shaderNode"));
SoComposedShader* SoComposedShader204 = new SoComposedShader();
SoComposedShader204->setUSE(QString("x_iteShader"));
SoField203->addChild(*SoComposedShader204);

SoProtoInstance195->addChild(*SoField203);

SoLayoutLayer95->addChild(*SoProtoInstance195);

SoProtoInstance* SoProtoInstance205 = new SoProtoInstance();
SoProtoInstance205->setName(QString("SliderProto"));
SoProtoInstance205->setDEF(QString("pdeltaPI"));
SoField* SoField206 = new SoField();
SoField206->setName(QString("sliderTranslation"));
SoField206->setValue(QString("0 -0.8 0"));
SoProtoInstance205->addChild(*SoField206);

SoField* SoField207 = new SoField();
SoField207->setName(QString("transformTranslation"));
SoField207->setValue(QString("0 0 0.1"));
SoProtoInstance205->addChild(*SoField207);

SoField* SoField208 = new SoField();
SoField208->setName(QString("sensorTranslation"));
SoField208->setValue(QString("0 0 0"));
SoProtoInstance205->addChild(*SoField208);

SoField* SoField209 = new SoField();
SoField209->setName(QString("textString"));
SoField209->setValue(QString("\"pdelta=\""));
SoProtoInstance205->addChild(*SoField209);

SoField* SoField210 = new SoField();
SoField210->setName(QString("parameterScale"));
SoField210->setValue(QString("6.28"));
SoProtoInstance205->addChild(*SoField210);

SoField* SoField211 = new SoField();
SoField211->setName(QString("parameterName"));
SoField211->setValue(QString("pdelta"));
SoProtoInstance205->addChild(*SoField211);

SoField* SoField212 = new SoField();
SoField212->setName(QString("petNames"));
SoField212->setValue(QString("\"yottzumm2\" \"group1-petname\""));
SoProtoInstance205->addChild(*SoField212);

SoField* SoField213 = new SoField();
SoField213->setName(QString("shaderNode"));
SoComposedShader* SoComposedShader214 = new SoComposedShader();
SoComposedShader214->setUSE(QString("x_iteShader"));
SoField213->addChild(*SoComposedShader214);

SoProtoInstance205->addChild(*SoField213);

SoLayoutLayer95->addChild(*SoProtoInstance205);

SoLayerSet17->addChild(*SoLayoutLayer95);

SoLayer* SoLayer215 = new SoLayer();
SoLayer215->setPickable(true);
SoLayer215->setObjectType(new QString[]{QString("ALL")}, 1);
SoViewpoint* SoViewpoint216 = new SoViewpoint();
SoViewpoint216->setDescription(QString("My Humanoids"));
SoViewpoint216->setFieldOfView(1.570796);
SoViewpoint216->setPosition(new float[]{0.0,1.75,80.0});
SoLayer215->addChild(*SoViewpoint216);

SoScript* SoScript217 = new SoScript();
SoScript217->setUrl(new QString[]{QString("../javascripts/X3DAvatar.js"), QString("https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DAvatar.js")}, 2);
SoScript217->setDEF(QString("HumanoidScript"));
SoScript217->setDirectOutput(true);
SoScript217->setMustEvaluate(true);
SoLayer215->addChild(*SoScript217);

SoGroup* SoGroup218 = new SoGroup();
SoGroup218->setDEF(QString("humanoidGroup"));
SoGroup* SoGroup219 = new SoGroup();
SoGroup218->addChild(*SoGroup219);

SoLayer215->addChild(*SoGroup218);

SoLayerSet17->addChild(*SoLayer215);

SoNode16->addChild(*SoLayerSet17);

SoSceneManager0->setSceneGraph(*SoNode16);

return 0;
}


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
SoSceneManager0->setVersion(QString("4.1"));
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

Socomponent* Socomponent11 = new Socomponent();
Socomponent11->setName(QString("DIS"));
Socomponent11->setLevel(2);
Sohead1->addChild(*Socomponent11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("title"));
Someta12->setContent(QString("bumpyfreewrlsliders.x3d"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("description"));
Someta13->setContent(QString("Bumpy Orbitals with Sliders for FreeWRL"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("creator"));
Someta14->setContent(QString("Doug Sanden, Christoph Valentin, John Carlson"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("identifier"));
Someta15->setContent(QString("https:/coderextreme.net/X3DJSONLD/src/main/data/bumpyfreewrlsliders.x3d"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("license"));
Someta16->setContent(QString("license.html"));
Sohead1->addMeta(*Someta16);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode17 = new SoNode();
//LayerSet with two layers, navigation happens in layer 1
SoLayerSet* SoLayerSet18 = new SoLayerSet();
SoLayerSet18->setActiveLayer(1);
SoLayerSet18->setOrder(new int32_t[]{1,2}, 2);
//the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"
//the second layer contains the sliders that are moved with the user's display
//like a HUD (heads up display)
SoLayer* SoLayer19 = new SoLayer();
SoLayer19->setPickable(true);
SoLayer19->setObjectType(new QString[]{QString("ALL")}, 1);
//basic nodes, which might be present in any scene
SoNavigationInfo* SoNavigationInfo20 = new SoNavigationInfo();
SoNavigationInfo20->setType(new QString[]{QString("EXAMINE"), QString("FLY"), QString("LOOKAT"), QString("ANY")}, 4);
SoNavigationInfo20->setAvatarSize(new float[]{0.25,1.75,0.75}, 3);
SoLayer19->addChild(*SoNavigationInfo20);

SoDirectionalLight* SoDirectionalLight21 = new SoDirectionalLight();
SoDirectionalLight21->setAmbientIntensity(0.2);
SoDirectionalLight21->setDirection(new float[]{0.0,-1.0,0.0});
SoLayer19->addChild(*SoDirectionalLight21);

SoDirectionalLight* SoDirectionalLight22 = new SoDirectionalLight();
SoDirectionalLight22->setAmbientIntensity(0.2);
SoDirectionalLight22->setDirection(new float[]{-1.0,-0.1,-1.0});
SoLayer19->addChild(*SoDirectionalLight22);

SoViewpoint* SoViewpoint23 = new SoViewpoint();
SoViewpoint23->setDescription(QString("My Overview"));
SoViewpoint23->setFieldOfView(1.570796);
SoViewpoint23->setPosition(new float[]{0.0,1.75,60.0});
SoLayer19->addChild(*SoViewpoint23);

//this group contains the red/green/blue 3D crosshair
SoGroup* SoGroup24 = new SoGroup();
//Arrow X
SoTransform* SoTransform25 = new SoTransform();
SoTransform25->setTranslation(new float[]{25.0,0.0,0.0});
SoTransform25->setRotation(new float[]{0.0,0.0,-1.0,1.57});
SoShape* SoShape26 = new SoShape();
SoCylinder* SoCylinder27 = new SoCylinder();
SoCylinder27->setDEF(QString("Shaft"));
SoCylinder27->setRadius(0.35);
SoCylinder27->setHeight(50);
SoShape26->setGeometry(*SoCylinder27);

SoVRMLAppearance* SoVRMLAppearance28 = new SoVRMLAppearance();
SoMaterial* SoMaterial29 = new SoMaterial();
SoMaterial29->setDEF(QString("RED"));
SoMaterial29->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoMaterial29->setEmissiveColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance28->addChild(*SoMaterial29);

SoShape26->addChild(*SoVRMLAppearance28);

SoTransform25->addChild(*SoShape26);

SoGroup24->addChild(*SoTransform25);

SoTransform* SoTransform30 = new SoTransform();
SoTransform30->setTranslation(new float[]{50.0,0.0,0.0});
SoTransform30->setRotation(new float[]{0.0,0.0,-1.0,1.57});
SoShape* SoShape31 = new SoShape();
SoCone* SoCone32 = new SoCone();
SoCone32->setDEF(QString("Tip"));
SoCone32->setBottomRadius(0.8);
SoCone32->setHeight(3);
SoShape31->setGeometry(*SoCone32);

SoVRMLAppearance* SoVRMLAppearance33 = new SoVRMLAppearance();
SoMaterial* SoMaterial34 = new SoMaterial();
SoMaterial34->setUSE(QString("RED"));
SoVRMLAppearance33->addChild(*SoMaterial34);

SoShape31->addChild(*SoVRMLAppearance33);

SoTransform30->addChild(*SoShape31);

SoGroup24->addChild(*SoTransform30);

//Arrow Y
SoTransform* SoTransform35 = new SoTransform();
SoTransform35->setTranslation(new float[]{0.0,25.0,0.0});
SoShape* SoShape36 = new SoShape();
SoCylinder* SoCylinder37 = new SoCylinder();
SoCylinder37->setUSE(QString("Shaft"));
SoShape36->setGeometry(*SoCylinder37);

SoVRMLAppearance* SoVRMLAppearance38 = new SoVRMLAppearance();
SoMaterial* SoMaterial39 = new SoMaterial();
SoMaterial39->setDEF(QString("GREEN"));
SoMaterial39->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoMaterial39->setEmissiveColor(new float[]{0.0,1.0,0.0});
SoVRMLAppearance38->addChild(*SoMaterial39);

SoShape36->addChild(*SoVRMLAppearance38);

SoTransform35->addChild(*SoShape36);

SoGroup24->addChild(*SoTransform35);

SoTransform* SoTransform40 = new SoTransform();
SoTransform40->setTranslation(new float[]{0.0,50.0,0.0});
SoShape* SoShape41 = new SoShape();
SoCone* SoCone42 = new SoCone();
SoCone42->setUSE(QString("Tip"));
SoShape41->setGeometry(*SoCone42);

SoVRMLAppearance* SoVRMLAppearance43 = new SoVRMLAppearance();
SoMaterial* SoMaterial44 = new SoMaterial();
SoMaterial44->setUSE(QString("GREEN"));
SoVRMLAppearance43->addChild(*SoMaterial44);

SoShape41->addChild(*SoVRMLAppearance43);

SoTransform40->addChild(*SoShape41);

SoGroup24->addChild(*SoTransform40);

//Arrow Z
SoTransform* SoTransform45 = new SoTransform();
SoTransform45->setTranslation(new float[]{0.0,0.0,25.0});
SoTransform45->setRotation(new float[]{1.0,0.0,0.0,1.57});
SoShape* SoShape46 = new SoShape();
SoCylinder* SoCylinder47 = new SoCylinder();
SoCylinder47->setUSE(QString("Shaft"));
SoShape46->setGeometry(*SoCylinder47);

SoVRMLAppearance* SoVRMLAppearance48 = new SoVRMLAppearance();
SoMaterial* SoMaterial49 = new SoMaterial();
SoMaterial49->setDEF(QString("BLUE"));
SoMaterial49->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoMaterial49->setEmissiveColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance48->addChild(*SoMaterial49);

SoShape46->addChild(*SoVRMLAppearance48);

SoTransform45->addChild(*SoShape46);

SoGroup24->addChild(*SoTransform45);

SoTransform* SoTransform50 = new SoTransform();
SoTransform50->setTranslation(new float[]{0.0,0.0,50.0});
SoTransform50->setRotation(new float[]{1.0,0.0,0.0,1.57});
SoShape* SoShape51 = new SoShape();
SoCone* SoCone52 = new SoCone();
SoCone52->setUSE(QString("Tip"));
SoShape51->setGeometry(*SoCone52);

SoVRMLAppearance* SoVRMLAppearance53 = new SoVRMLAppearance();
SoMaterial* SoMaterial54 = new SoMaterial();
SoMaterial54->setUSE(QString("BLUE"));
SoVRMLAppearance53->addChild(*SoMaterial54);

SoShape51->addChild(*SoVRMLAppearance53);

SoTransform50->addChild(*SoShape51);

SoGroup24->addChild(*SoTransform50);

SoLayer19->addChild(*SoGroup24);

//the model that is being reviewed by the users of this scene
SoTransform* SoTransform55 = new SoTransform();
SoTransform55->setDEF(QString("FlowerTransform"));
//<Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />
//Images courtesy of Paul Debevec's Light Probe Image Gallery
SoBackground* SoBackground56 = new SoBackground();
SoBackground56->setBackUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoBackground56->setBottomUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoBackground56->setFrontUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoBackground56->setLeftUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoBackground56->setRightUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoBackground56->setTopUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoTransform55->addChild(*SoBackground56);

SoTransform* SoTransform57 = new SoTransform();
SoShape* SoShape58 = new SoShape();
SoSphere* SoSphere59 = new SoSphere();
SoSphere59->setRadius(5);
SoShape58->setGeometry(*SoSphere59);

//<IndexedFaceSet convex=\"false\" DEF=\"Orbit\" creaseAngle=\"0\">
//<Coordinate DEF=\"OrbitCoordinates\"/>
//</IndexedFaceSet>
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
SoComposedShader69->setDEF(QString("freewrlShader"));
SoComposedShader69->setLanguage(QString("GLSL"));
Sofield* Sofield70 = new Sofield();
Sofield70->setName(QString("fw_textureCoordGenType"));
Sofield70->setAccessType(QString("inputOutput"));
Sofield70->setType(QString("SFInt32"));
Sofield70->setValue(QString("0"));
SoComposedShader69->addChild(*Sofield70);

Sofield* Sofield71 = new Sofield();
Sofield71->setName(QString("chromaticDispertion"));
Sofield71->setAccessType(QString("initializeOnly"));
Sofield71->setType(QString("SFVec3f"));
Sofield71->setValue(QString("0.98 1 1.033"));
SoComposedShader69->addChild(*Sofield71);

Sofield* Sofield72 = new Sofield();
Sofield72->setName(QString("bias"));
Sofield72->setType(QString("SFFloat"));
Sofield72->setAccessType(QString("inputOutput"));
Sofield72->setValue(QString("0.5"));
SoComposedShader69->addChild(*Sofield72);

Sofield* Sofield73 = new Sofield();
Sofield73->setName(QString("scale"));
Sofield73->setType(QString("SFFloat"));
Sofield73->setAccessType(QString("inputOutput"));
Sofield73->setValue(QString("0.5"));
SoComposedShader69->addChild(*Sofield73);

Sofield* Sofield74 = new Sofield();
Sofield74->setName(QString("power"));
Sofield74->setType(QString("SFFloat"));
Sofield74->setAccessType(QString("inputOutput"));
Sofield74->setValue(QString("2"));
SoComposedShader69->addChild(*Sofield74);

Sofield* Sofield75 = new Sofield();
Sofield75->setName(QString("a"));
Sofield75->setType(QString("SFFloat"));
Sofield75->setAccessType(QString("inputOutput"));
Sofield75->setValue(QString("15"));
SoComposedShader69->addChild(*Sofield75);

Sofield* Sofield76 = new Sofield();
Sofield76->setName(QString("b"));
Sofield76->setType(QString("SFFloat"));
Sofield76->setAccessType(QString("inputOutput"));
Sofield76->setValue(QString("5"));
SoComposedShader69->addChild(*Sofield76);

Sofield* Sofield77 = new Sofield();
Sofield77->setName(QString("c"));
Sofield77->setType(QString("SFFloat"));
Sofield77->setAccessType(QString("inputOutput"));
Sofield77->setValue(QString("20"));
SoComposedShader69->addChild(*Sofield77);

Sofield* Sofield78 = new Sofield();
Sofield78->setName(QString("d"));
Sofield78->setType(QString("SFFloat"));
Sofield78->setAccessType(QString("inputOutput"));
Sofield78->setValue(QString("20"));
SoComposedShader69->addChild(*Sofield78);

Sofield* Sofield79 = new Sofield();
Sofield79->setName(QString("tdelta"));
Sofield79->setType(QString("SFFloat"));
Sofield79->setAccessType(QString("inputOutput"));
Sofield79->setValue(QString("0"));
SoComposedShader69->addChild(*Sofield79);

Sofield* Sofield80 = new Sofield();
Sofield80->setName(QString("pdelta"));
Sofield80->setType(QString("SFFloat"));
Sofield80->setAccessType(QString("inputOutput"));
Sofield80->setValue(QString("0"));
SoComposedShader69->addChild(*Sofield80);

//<field name='cube' type='SFNode' accessType=\"inputOutput\">
//<ComposedCubeMapTexture USE=\"texture\"/>
//</field>
SoShaderPart* SoShaderPart81 = new SoShaderPart();
SoShaderPart81->setType(QString("VERTEX"));
SoIS* SoIS82 = new SoIS();
Soconnect* Soconnect83 = new Soconnect();
Soconnect83->setNodeField(QString("url"));
Soconnect83->setProtoField(QString("vertex"));
SoIS82->addChild(*Soconnect83);

SoShaderPart81->addChild(*SoIS82);

SoComposedShader69->setParts(*SoShaderPart81);

SoShaderPart* SoShaderPart84 = new SoShaderPart();
SoShaderPart84->setType(QString("FRAGMENT"));
SoIS* SoIS85 = new SoIS();
Soconnect* Soconnect86 = new Soconnect();
Soconnect86->setNodeField(QString("url"));
Soconnect86->setProtoField(QString("fragment"));
SoIS85->addChild(*Soconnect86);

SoShaderPart84->addChild(*SoIS85);

SoComposedShader69->setParts(*SoShaderPart84);

SoVRMLAppearance60->addChild(*SoComposedShader69);

//<ComposedShader DEF=\"freewrlShader\" language=\"GLSL\">
//<field name='fw_textureCoordGenType' accessType='inputOutput' type='SFInt32' value='0'></field>
//<field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field>
//<field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field>
//<field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field>
//<field name='power' type='SFFloat' accessType='inputOutput' value='2'></field>
//<field name='a' type='SFFloat' accessType='inputOutput' value='15'></field>
//<field name='b' type='SFFloat' accessType='inputOutput' value='5'></field>
//<field name='c' type='SFFloat' accessType='inputOutput' value='20'></field>
//<field name='d' type='SFFloat' accessType='inputOutput' value='20'></field>
//<field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field>
//<field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field>
//<ShaderPart type='VERTEX'>
//<IS>
//<connect nodeField=\"url\" protoField=\"vertex\"/>
//</IS>
//</ShaderPart>
//<ShaderPart type='FRAGMENT'>
//<IS>
//<connect nodeField=\"url\" protoField=\"fragment\"/>
//</IS>
//</ShaderPart>
//</ComposedShader>
SoShape58->addChild(*SoVRMLAppearance60);

SoTransform57->addChild(*SoShape58);

SoTransform55->addChild(*SoTransform57);

SoLayer19->addChild(*SoTransform55);

//<Script DEF=\"OrbitScript\">
//<field accessType=\"inputOutput\" name=\"coordinates\" type=\"MFVec3f\"/>
//<field accessType=\"outputOnly\" name=\"coordIndexes\" type=\"MFInt32\"/>
//<field name='a' type='SFFloat' accessType='inputOutput' value='10'></field>
//<field name='b' type='SFFloat' accessType='inputOutput' value='10'></field>
//<field name='c' type='SFFloat' accessType='inputOutput' value='2'></field>
//<field name='d' type='SFFloat' accessType='inputOutput' value='2'></field>
//<field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field>
//<field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field>
//<![CDATA[ecmascript: function initialize() { var resolution = 300; var theta = 0.0; var phi = 0.0; var delta = (2 * 3.141592653) / (resolution-1); var crds = new MFVec3f(); for ( i = 0; i < resolution; i++) { for ( j = 0; j < resolution; j++) { var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta); crds.push(new SFVec3f( rho * Math.cos(phi) * Math.cos(theta), rho * Math.cos(phi) * Math.sin(theta), rho * Math.sin(phi) )); theta += delta; } phi += delta; } coordinates = crds; var cis = new MFInt32(); for ( i = 0; i < resolution-1; i++) { for ( j = 0; j < resolution-1; j++) { cis.push(i*resolution+j); cis.push(i*resolution+j+1); cis.push((i+1)*resolution+j+1); cis.push((i+1)*resolution+j); cis.push(-1); } } coordIndexes = cis; } ]]></Script>
//<ROUTE fromField=\"coordIndexes\" fromNode=\"OrbitScript\" toField=\"set_coordIndex\" toNode=\"Orbit\"/>
//<ROUTE fromField=\"coordinates\" fromNode=\"OrbitScript\" toField=\"set_point\" toNode=\"OrbitCoordinates\"/>
//DIS multiuser facilities
SoDISEntityManager* SoDISEntityManager87 = new SoDISEntityManager();
SoDISEntityManager87->setDEF(QString("EntityManager"));
SoDISEntityTypeMapping* SoDISEntityTypeMapping88 = new SoDISEntityTypeMapping();
SoDISEntityTypeMapping88->setCategory(77);
SoDISEntityTypeMapping88->setSpecific(1);
SoDISEntityTypeMapping88->setUrl(new QString[]{QString("../data/Leif8Final.x3d"), QString("https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d")}, 2);
SoDISEntityManager87->setMapping(*SoDISEntityTypeMapping88);

SoDISEntityTypeMapping* SoDISEntityTypeMapping89 = new SoDISEntityTypeMapping();
SoDISEntityTypeMapping89->setCategory(77);
SoDISEntityTypeMapping89->setSpecific(2);
SoDISEntityTypeMapping89->setUrl(new QString[]{QString("../data/Lily8Final.x3d"), QString("https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d")}, 2);
SoDISEntityManager87->setMapping(*SoDISEntityTypeMapping89);

SoDISEntityTypeMapping* SoDISEntityTypeMapping90 = new SoDISEntityTypeMapping();
SoDISEntityTypeMapping90->setCategory(77);
SoDISEntityTypeMapping90->setSpecific(3);
SoDISEntityTypeMapping90->setUrl(new QString[]{QString("../data/Tufani8Final.x3d"), QString("https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d")}, 2);
SoDISEntityManager87->setMapping(*SoDISEntityTypeMapping90);

SoDISEntityTypeMapping* SoDISEntityTypeMapping91 = new SoDISEntityTypeMapping();
SoDISEntityTypeMapping91->setCategory(77);
SoDISEntityTypeMapping91->setSpecific(4);
SoDISEntityTypeMapping91->setUrl(new QString[]{QString("../data/Gramps8Final.x3d"), QString("https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d")}, 2);
SoDISEntityManager87->setMapping(*SoDISEntityTypeMapping91);

SoLayer19->addChild(*SoDISEntityManager87);

SoCollision* SoCollision92 = new SoCollision();
SoGroup* SoGroup93 = new SoGroup();
SoGroup93->setDEF(QString("AvatarHolder"));
SoCollision92->addChildren(*SoGroup93);

SoLayer19->addChild(*SoCollision92);

SoROUTE* SoROUTE94 = new SoROUTE();
SoROUTE94->setFromField(QString("addedEntities"));
SoROUTE94->setFromNode(QString("EntityManager"));
SoROUTE94->setToField(QString("addChildren"));
SoROUTE94->setToNode(QString("AvatarHolder"));
SoLayer19->addChild(*SoROUTE94);

SoROUTE* SoROUTE95 = new SoROUTE();
SoROUTE95->setFromField(QString("removedEntities"));
SoROUTE95->setFromNode(QString("EntityManager"));
SoROUTE95->setToField(QString("removeChildren"));
SoROUTE95->setToNode(QString("AvatarHolder"));
SoLayer19->addChild(*SoROUTE95);

SoLayerSet18->addChild(*SoLayer19);

SoLayoutLayer* SoLayoutLayer96 = new SoLayoutLayer();
SoLayoutLayer96->setPickable(true);
SoLayoutLayer96->setObjectType(new QString[]{QString("ALL")}, 1);
//positioning the LayoutLayer
//clipping the LayoutLayer
//the content (children) of the LayoutLayer
//first, the slider for scaling the model
SoTransform* SoTransform97 = new SoTransform();
SoTransform97->setTranslation(new float[]{0.0,0.0,-3.0});
SoShape* SoShape98 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance99 = new SoVRMLAppearance();
SoMaterial* SoMaterial100 = new SoMaterial();
SoMaterial100->setDiffuseColor(new float[]{0.1,0.1,0.1});
SoMaterial100->setTransparency(1);
SoVRMLAppearance99->addChild(*SoMaterial100);

SoShape98->addChild(*SoVRMLAppearance99);

SoBox* SoBox101 = new SoBox();
SoBox101->setSize(new float[]{100.0,100.0,0.02});
SoShape98->setGeometry(*SoBox101);

SoTransform97->addChild(*SoShape98);

SoLayoutLayer96->addChild(*SoTransform97);

SoTransform* SoTransform102 = new SoTransform();
SoTransform102->setDEF(QString("equationTransform"));
SoTransform* SoTransform103 = new SoTransform();
SoTransform103->setTranslation(new float[]{0.0,0.0,-20.0});
SoShape* SoShape104 = new SoShape();
SoText* SoText105 = new SoText();
SoText105->setDEF(QString("equation"));
SoText105->setString(new QString[]{QString("r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)")}, 1);
SoFontStyle* SoFontStyle106 = new SoFontStyle();
SoFontStyle106->setSize(0.09);
SoText105->setFontStyle(*SoFontStyle106);

SoShape104->setGeometry(*SoText105);

SoVRMLAppearance* SoVRMLAppearance107 = new SoVRMLAppearance();
SoMaterial* SoMaterial108 = new SoMaterial();
SoMaterial108->setDiffuseColor(new float[]{0.0,1.0,1.0});
SoVRMLAppearance107->addChild(*SoMaterial108);

SoShape104->addChild(*SoVRMLAppearance107);

SoTransform103->addChild(*SoShape104);

SoTransform102->addChild(*SoTransform103);

SoLayoutLayer96->addChild(*SoTransform102);

SoProtoDeclare* SoProtoDeclare109 = new SoProtoDeclare();
SoProtoDeclare109->setName(QString("SliderProto"));
SoProtoInterface* SoProtoInterface110 = new SoProtoInterface();
Sofield* Sofield111 = new Sofield();
Sofield111->setName(QString("sliderTranslation"));
Sofield111->setAccessType(QString("inputOutput"));
Sofield111->setType(QString("SFVec3f"));
Sofield111->setValue(QString("0 0.7 0"));
SoProtoInterface110->addChild(*Sofield111);

Sofield* Sofield112 = new Sofield();
Sofield112->setName(QString("transformTranslation"));
Sofield112->setAccessType(QString("inputOutput"));
Sofield112->setType(QString("SFVec3f"));
Sofield112->setValue(QString("0 0 0.1"));
SoProtoInterface110->addChild(*Sofield112);

Sofield* Sofield113 = new Sofield();
Sofield113->setName(QString("sensorTranslation"));
Sofield113->setAccessType(QString("inputOutput"));
Sofield113->setType(QString("SFVec3f"));
Sofield113->setValue(QString("0 0 0"));
SoProtoInterface110->addChild(*Sofield113);

Sofield* Sofield114 = new Sofield();
Sofield114->setName(QString("numberTranslation"));
Sofield114->setAccessType(QString("inputOutput"));
Sofield114->setType(QString("SFVec3f"));
Sofield114->setValue(QString("0.2 0 0"));
SoProtoInterface110->addChild(*Sofield114);

Sofield* Sofield115 = new Sofield();
Sofield115->setName(QString("textString"));
Sofield115->setAccessType(QString("inputOutput"));
Sofield115->setType(QString("MFString"));
Sofield115->setValue(QString("\"a=\""));
SoProtoInterface110->addChild(*Sofield115);

Sofield* Sofield116 = new Sofield();
Sofield116->setName(QString("parameterName"));
Sofield116->setAccessType(QString("inputOutput"));
Sofield116->setType(QString("SFString"));
Sofield116->setValue(QString("a"));
SoProtoInterface110->addChild(*Sofield116);

Sofield* Sofield117 = new Sofield();
Sofield117->setName(QString("parameterScale"));
Sofield117->setAccessType(QString("inputOutput"));
Sofield117->setType(QString("SFFloat"));
Sofield117->setValue(QString("30"));
SoProtoInterface110->addChild(*Sofield117);

Sofield* Sofield118 = new Sofield();
Sofield118->setName(QString("shaderNode"));
Sofield118->setAccessType(QString("inputOutput"));
Sofield118->setType(QString("SFNode"));
SoProtoInterface110->addChild(*Sofield118);

SoProtoDeclare109->addChild(*SoProtoInterface110);

SoProtoBody* SoProtoBody119 = new SoProtoBody();
SoGroup* SoGroup120 = new SoGroup();
SoTransform* SoTransform121 = new SoTransform();
SoTransform121->setDEF(QString("protoSlider"));
SoTransform121->setTranslation(new float[]{0.0,0.7,0.0});
SoIS* SoIS122 = new SoIS();
Soconnect* Soconnect123 = new Soconnect();
Soconnect123->setNodeField(QString("translation"));
Soconnect123->setProtoField(QString("sliderTranslation"));
SoIS122->addChild(*Soconnect123);

SoTransform121->addChild(*SoIS122);

SoTransform* SoTransform124 = new SoTransform();
SoTransform124->setDEF(QString("protoTransform"));
SoTransform124->setTranslation(new float[]{0.0,0.0,0.1});
SoIS* SoIS125 = new SoIS();
Soconnect* Soconnect126 = new Soconnect();
Soconnect126->setNodeField(QString("translation"));
Soconnect126->setProtoField(QString("sensorTranslation"));
SoIS125->addChild(*Soconnect126);

SoTransform124->addChild(*SoIS125);

SoPlaneSensor* SoPlaneSensor127 = new SoPlaneSensor();
SoPlaneSensor127->setDEF(QString("protoSensor"));
SoPlaneSensor127->setMaxPosition(new float[]{2.0,0.0});
SoTransform124->addChild(*SoPlaneSensor127);

SoTransform* SoTransform128 = new SoTransform();
SoTransform128->setTranslation(new float[]{0.0,0.0,0.0});
SoTouchSensor* SoTouchSensor129 = new SoTouchSensor();
SoTouchSensor129->setDEF(QString("protoTS"));
SoTransform128->addChild(*SoTouchSensor129);

SoTransform124->addChild(*SoTransform128);

SoTransform* SoTransform130 = new SoTransform();
SoShape* SoShape131 = new SoShape();
SoText* SoText132 = new SoText();
SoText132->setDEF(QString("protoText"));
SoText132->setString(new QString[]{QString("a=")}, 1);
SoIS* SoIS133 = new SoIS();
Soconnect* Soconnect134 = new Soconnect();
Soconnect134->setNodeField(QString("string"));
Soconnect134->setProtoField(QString("textString"));
SoIS133->addChild(*Soconnect134);

SoText132->addChild(*SoIS133);

SoFontStyle* SoFontStyle135 = new SoFontStyle();
SoFontStyle135->setSize(0.2);
SoText132->setFontStyle(*SoFontStyle135);

SoShape131->setGeometry(*SoText132);

SoVRMLAppearance* SoVRMLAppearance136 = new SoVRMLAppearance();
SoMaterial* SoMaterial137 = new SoMaterial();
SoMaterial137->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance136->addChild(*SoMaterial137);

SoShape131->addChild(*SoVRMLAppearance136);

SoTransform130->addChild(*SoShape131);

SoTransform* SoTransform138 = new SoTransform();
SoIS* SoIS139 = new SoIS();
Soconnect* Soconnect140 = new Soconnect();
Soconnect140->setNodeField(QString("translation"));
Soconnect140->setProtoField(QString("numberTranslation"));
SoIS139->addChild(*Soconnect140);

SoTransform138->addChild(*SoIS139);

SoShape* SoShape141 = new SoShape();
SoText* SoText142 = new SoText();
SoText142->setDEF(QString("protoNumber"));
SoText142->setString(new QString[]{QString("0")}, 1);
SoFontStyle* SoFontStyle143 = new SoFontStyle();
SoFontStyle143->setSize(0.2);
SoText142->setFontStyle(*SoFontStyle143);

SoShape141->setGeometry(*SoText142);

SoVRMLAppearance* SoVRMLAppearance144 = new SoVRMLAppearance();
SoMaterial* SoMaterial145 = new SoMaterial();
SoMaterial145->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance144->addChild(*SoMaterial145);

SoShape141->addChild(*SoVRMLAppearance144);

SoTransform138->addChild(*SoShape141);

SoTransform130->addChild(*SoTransform138);

SoTransform124->addChild(*SoTransform130);

SoTransform121->addChild(*SoTransform124);

SoGroup120->addChild(*SoTransform121);

SoScript* SoScript146 = new SoScript();
SoScript146->setDEF(QString("protoValueTransformerScript"));
SoScript146->setDirectOutput(true);
SoScript146->setMustEvaluate(true);
Sofield* Sofield147 = new Sofield();
Sofield147->setName(QString("protoScale"));
Sofield147->setAccessType(QString("inputOutput"));
Sofield147->setType(QString("SFFloat"));
Sofield147->setValue(QString("30"));
SoScript146->addChild(*Sofield147);

Sofield* Sofield148 = new Sofield();
Sofield148->setName(QString("shader"));
Sofield148->setAccessType(QString("inputOutput"));
Sofield148->setType(QString("SFNode"));
SoScript146->addChild(*Sofield148);

Sofield* Sofield149 = new Sofield();
Sofield149->setName(QString("newTranslation"));
Sofield149->setAccessType(QString("inputOutput"));
Sofield149->setType(QString("SFVec3f"));
Sofield149->setValue(QString("1 1 1"));
SoScript146->addChild(*Sofield149);

Sofield* Sofield150 = new Sofield();
Sofield150->setName(QString("protoValue_changed"));
Sofield150->setAccessType(QString("inputOutput"));
Sofield150->setType(QString("SFFloat"));
Sofield150->setValue(QString("1"));
SoScript146->addChild(*Sofield150);

Sofield* Sofield151 = new Sofield();
Sofield151->setName(QString("protoNumber_changed"));
Sofield151->setAccessType(QString("inputOutput"));
Sofield151->setType(QString("MFString"));
Sofield151->setValue(QString("\"0.0\""));
SoScript146->addChild(*Sofield151);

Sofield* Sofield152 = new Sofield();
Sofield152->setName(QString("protoParameterName"));
Sofield152->setAccessType(QString("inputOutput"));
Sofield152->setType(QString("SFString"));
Sofield152->setValue(QString("a"));
SoScript146->addChild(*Sofield152);

SoIS* SoIS153 = new SoIS();
Soconnect* Soconnect154 = new Soconnect();
Soconnect154->setNodeField(QString("protoScale"));
Soconnect154->setProtoField(QString("parameterScale"));
SoIS153->addChild(*Soconnect154);

Soconnect* Soconnect155 = new Soconnect();
Soconnect155->setNodeField(QString("protoParameterName"));
Soconnect155->setProtoField(QString("parameterName"));
SoIS153->addChild(*Soconnect155);

Soconnect* Soconnect156 = new Soconnect();
Soconnect156->setNodeField(QString("shader"));
Soconnect156->setProtoField(QString("shaderNode"));
SoIS153->addChild(*Soconnect156);

SoScript146->addChild(*SoIS153);


//SoScript146->setSourceCode(QString("ecmascript:")+
//_T("	const newTranslation = function(Value) {")+
//_T("	    protoValue_changed = Value[0] * protoScale;")+
//_T("	    protoNumber_changed = new MFString(protoValue_changed.toFixed(2).toString());")+
//_T("	    Browser.println(\"In newTranslation:\");")+
//_T("	    Browser.println(shader);")+
//_T("	    Browser.println(Value[0]);")+
//_T("	    Browser.println(Value.x);")+
//_T("	    Browser.println(protoScale);")+
//_T("	    Browser.println(Value[0] * protoScale);")+
//_T("	    Browser.println(protoParameterName);")+
//_T("					// shader[protoParameterName] = Value[0] * protoScale;")+
//_T("	};"));
SoGroup120->addChild(*SoScript146);

SoROUTE* SoROUTE157 = new SoROUTE();
SoROUTE157->setFromField(QString("translation_changed"));
SoROUTE157->setFromNode(QString("protoSensor"));
SoROUTE157->setToField(QString("set_translation"));
SoROUTE157->setToNode(QString("protoTransform"));
SoGroup120->addChild(*SoROUTE157);

SoROUTE* SoROUTE158 = new SoROUTE();
SoROUTE158->setFromField(QString("translation_changed"));
SoROUTE158->setFromNode(QString("protoSensor"));
SoROUTE158->setToField(QString("newTranslation"));
SoROUTE158->setToNode(QString("protoValueTransformerScript"));
SoGroup120->addChild(*SoROUTE158);

SoROUTE* SoROUTE159 = new SoROUTE();
SoROUTE159->setFromField(QString("protoNumber_changed"));
SoROUTE159->setFromNode(QString("protoValueTransformerScript"));
SoROUTE159->setToField(QString("string"));
SoROUTE159->setToNode(QString("protoNumber"));
SoGroup120->addChild(*SoROUTE159);

SoProtoBody119->addChild(*SoGroup120);

SoProtoDeclare109->addChild(*SoProtoBody119);

SoLayoutLayer96->addChild(*SoProtoDeclare109);

SoProtoInstance* SoProtoInstance160 = new SoProtoInstance();
SoProtoInstance160->setName(QString("SliderProto"));
SoProtoInstance160->setDEF(QString("aPI"));
SoField* SoField161 = new SoField();
SoField161->setName(QString("sliderTranslation"));
SoField161->setValue(QString("0 0.7 0"));
SoProtoInstance160->addChild(*SoField161);

SoField* SoField162 = new SoField();
SoField162->setName(QString("transformTranslation"));
SoField162->setValue(QString("0 0 0.1"));
SoProtoInstance160->addChild(*SoField162);

SoField* SoField163 = new SoField();
SoField163->setName(QString("sensorTranslation"));
SoField163->setValue(QString("0 0 0"));
SoProtoInstance160->addChild(*SoField163);

SoField* SoField164 = new SoField();
SoField164->setName(QString("numberTranslation"));
SoField164->setValue(QString("0.3 0 0"));
SoProtoInstance160->addChild(*SoField164);

SoField* SoField165 = new SoField();
SoField165->setName(QString("textString"));
SoField165->setValue(QString("\"a=\""));
SoProtoInstance160->addChild(*SoField165);

SoField* SoField166 = new SoField();
SoField166->setName(QString("parameterName"));
SoField166->setValue(QString("a"));
SoProtoInstance160->addChild(*SoField166);

SoField* SoField167 = new SoField();
SoField167->setName(QString("parameterScale"));
SoField167->setValue(QString("30"));
SoProtoInstance160->addChild(*SoField167);

SoField* SoField168 = new SoField();
SoField168->setName(QString("shaderNode"));
SoComposedShader* SoComposedShader169 = new SoComposedShader();
SoComposedShader169->setUSE(QString("freewrlShader"));
SoField168->addChild(*SoComposedShader169);

SoProtoInstance160->addChild(*SoField168);

SoLayoutLayer96->addChild(*SoProtoInstance160);

SoProtoInstance* SoProtoInstance170 = new SoProtoInstance();
SoProtoInstance170->setName(QString("SliderProto"));
SoProtoInstance170->setDEF(QString("bPI"));
SoField* SoField171 = new SoField();
SoField171->setName(QString("sliderTranslation"));
SoField171->setValue(QString("0 0.4 0"));
SoProtoInstance170->addChild(*SoField171);

SoField* SoField172 = new SoField();
SoField172->setName(QString("transformTranslation"));
SoField172->setValue(QString("0 0 0.1"));
SoProtoInstance170->addChild(*SoField172);

SoField* SoField173 = new SoField();
SoField173->setName(QString("sensorTranslation"));
SoField173->setValue(QString("0 0 0"));
SoProtoInstance170->addChild(*SoField173);

SoField* SoField174 = new SoField();
SoField174->setName(QString("numberTranslation"));
SoField174->setValue(QString("0.3 0 0"));
SoProtoInstance170->addChild(*SoField174);

SoField* SoField175 = new SoField();
SoField175->setName(QString("textString"));
SoField175->setValue(QString("\"b=\""));
SoProtoInstance170->addChild(*SoField175);

SoField* SoField176 = new SoField();
SoField176->setName(QString("parameterName"));
SoField176->setValue(QString("b"));
SoProtoInstance170->addChild(*SoField176);

SoField* SoField177 = new SoField();
SoField177->setName(QString("parameterScale"));
SoField177->setValue(QString("30"));
SoProtoInstance170->addChild(*SoField177);

SoField* SoField178 = new SoField();
SoField178->setName(QString("shaderNode"));
SoComposedShader* SoComposedShader179 = new SoComposedShader();
SoComposedShader179->setUSE(QString("freewrlShader"));
SoField178->addChild(*SoComposedShader179);

SoProtoInstance170->addChild(*SoField178);

SoLayoutLayer96->addChild(*SoProtoInstance170);

SoProtoInstance* SoProtoInstance180 = new SoProtoInstance();
SoProtoInstance180->setName(QString("SliderProto"));
SoProtoInstance180->setDEF(QString("cPI"));
SoField* SoField181 = new SoField();
SoField181->setName(QString("sliderTranslation"));
SoField181->setValue(QString("0 0.1 0"));
SoProtoInstance180->addChild(*SoField181);

SoField* SoField182 = new SoField();
SoField182->setName(QString("transformTranslation"));
SoField182->setValue(QString("0 0 0.1"));
SoProtoInstance180->addChild(*SoField182);

SoField* SoField183 = new SoField();
SoField183->setName(QString("sensorTranslation"));
SoField183->setValue(QString("0 0 0"));
SoProtoInstance180->addChild(*SoField183);

SoField* SoField184 = new SoField();
SoField184->setName(QString("numberTranslation"));
SoField184->setValue(QString("0.3 0 0"));
SoProtoInstance180->addChild(*SoField184);

SoField* SoField185 = new SoField();
SoField185->setName(QString("textString"));
SoField185->setValue(QString("\"c=\""));
SoProtoInstance180->addChild(*SoField185);

SoField* SoField186 = new SoField();
SoField186->setName(QString("parameterName"));
SoField186->setValue(QString("c"));
SoProtoInstance180->addChild(*SoField186);

SoField* SoField187 = new SoField();
SoField187->setName(QString("parameterScale"));
SoField187->setValue(QString("20"));
SoProtoInstance180->addChild(*SoField187);

SoField* SoField188 = new SoField();
SoField188->setName(QString("shaderNode"));
SoComposedShader* SoComposedShader189 = new SoComposedShader();
SoComposedShader189->setUSE(QString("freewrlShader"));
SoField188->addChild(*SoComposedShader189);

SoProtoInstance180->addChild(*SoField188);

SoLayoutLayer96->addChild(*SoProtoInstance180);

SoProtoInstance* SoProtoInstance190 = new SoProtoInstance();
SoProtoInstance190->setName(QString("SliderProto"));
SoProtoInstance190->setDEF(QString("dPI"));
SoField* SoField191 = new SoField();
SoField191->setName(QString("sliderTranslation"));
SoField191->setValue(QString("0 -0.2 0"));
SoProtoInstance190->addChild(*SoField191);

SoField* SoField192 = new SoField();
SoField192->setName(QString("transformTranslation"));
SoField192->setValue(QString("0 0 0.1"));
SoProtoInstance190->addChild(*SoField192);

SoField* SoField193 = new SoField();
SoField193->setName(QString("sensorTranslation"));
SoField193->setValue(QString("0 0 0"));
SoProtoInstance190->addChild(*SoField193);

SoField* SoField194 = new SoField();
SoField194->setName(QString("numberTranslation"));
SoField194->setValue(QString("0.3 0 0"));
SoProtoInstance190->addChild(*SoField194);

SoField* SoField195 = new SoField();
SoField195->setName(QString("textString"));
SoField195->setValue(QString("\"d=\""));
SoProtoInstance190->addChild(*SoField195);

SoField* SoField196 = new SoField();
SoField196->setName(QString("parameterName"));
SoField196->setValue(QString("d"));
SoProtoInstance190->addChild(*SoField196);

SoField* SoField197 = new SoField();
SoField197->setName(QString("parameterScale"));
SoField197->setValue(QString("20"));
SoProtoInstance190->addChild(*SoField197);

SoField* SoField198 = new SoField();
SoField198->setName(QString("shaderNode"));
SoComposedShader* SoComposedShader199 = new SoComposedShader();
SoComposedShader199->setUSE(QString("freewrlShader"));
SoField198->addChild(*SoComposedShader199);

SoProtoInstance190->addChild(*SoField198);

SoLayoutLayer96->addChild(*SoProtoInstance190);

SoProtoInstance* SoProtoInstance200 = new SoProtoInstance();
SoProtoInstance200->setName(QString("SliderProto"));
SoProtoInstance200->setDEF(QString("tdeltaPI"));
SoField* SoField201 = new SoField();
SoField201->setName(QString("sliderTranslation"));
SoField201->setValue(QString("0 -0.5 0"));
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
SoField204->setName(QString("numberTranslation"));
SoField204->setValue(QString("0.8 0 0"));
SoProtoInstance200->addChild(*SoField204);

SoField* SoField205 = new SoField();
SoField205->setName(QString("textString"));
SoField205->setValue(QString("\"tdelta=\""));
SoProtoInstance200->addChild(*SoField205);

SoField* SoField206 = new SoField();
SoField206->setName(QString("parameterName"));
SoField206->setValue(QString("tdelta"));
SoProtoInstance200->addChild(*SoField206);

SoField* SoField207 = new SoField();
SoField207->setName(QString("parameterScale"));
SoField207->setValue(QString("6.28"));
SoProtoInstance200->addChild(*SoField207);

SoField* SoField208 = new SoField();
SoField208->setName(QString("shaderNode"));
SoComposedShader* SoComposedShader209 = new SoComposedShader();
SoComposedShader209->setUSE(QString("freewrlShader"));
SoField208->addChild(*SoComposedShader209);

SoProtoInstance200->addChild(*SoField208);

SoLayoutLayer96->addChild(*SoProtoInstance200);

SoProtoInstance* SoProtoInstance210 = new SoProtoInstance();
SoProtoInstance210->setName(QString("SliderProto"));
SoProtoInstance210->setDEF(QString("pdeltaPI"));
SoField* SoField211 = new SoField();
SoField211->setName(QString("sliderTranslation"));
SoField211->setValue(QString("0 -0.8 0"));
SoProtoInstance210->addChild(*SoField211);

SoField* SoField212 = new SoField();
SoField212->setName(QString("transformTranslation"));
SoField212->setValue(QString("0 0 0.1"));
SoProtoInstance210->addChild(*SoField212);

SoField* SoField213 = new SoField();
SoField213->setName(QString("sensorTranslation"));
SoField213->setValue(QString("0 0 0"));
SoProtoInstance210->addChild(*SoField213);

SoField* SoField214 = new SoField();
SoField214->setName(QString("numberTranslation"));
SoField214->setValue(QString("0.8 0 0"));
SoProtoInstance210->addChild(*SoField214);

SoField* SoField215 = new SoField();
SoField215->setName(QString("textString"));
SoField215->setValue(QString("\"pdelta=\""));
SoProtoInstance210->addChild(*SoField215);

SoField* SoField216 = new SoField();
SoField216->setName(QString("parameterName"));
SoField216->setValue(QString("pdelta"));
SoProtoInstance210->addChild(*SoField216);

SoField* SoField217 = new SoField();
SoField217->setName(QString("parameterScale"));
SoField217->setValue(QString("6.28"));
SoProtoInstance210->addChild(*SoField217);

SoField* SoField218 = new SoField();
SoField218->setName(QString("shaderNode"));
SoComposedShader* SoComposedShader219 = new SoComposedShader();
SoComposedShader219->setUSE(QString("freewrlShader"));
SoField218->addChild(*SoComposedShader219);

SoProtoInstance210->addChild(*SoField218);

SoLayoutLayer96->addChild(*SoProtoInstance210);

SoLayout* SoLayout220 = new SoLayout();
SoLayout220->setAlign(new QString[]{QString("LEFT"), QString("BOTTOM")}, 2);
SoLayout220->setOffset(new float[]{-0.5,0.0}, 2);
SoLayoutLayer96->setLayout(*SoLayout220);

SoViewport* SoViewport221 = new SoViewport();
SoLayoutLayer96->setViewport(*SoViewport221);

SoLayerSet18->addChild(*SoLayoutLayer96);

SoNode17->addChild(*SoLayerSet18);

SoSceneManager0->setSceneGraph(*SoNode17);

return 0;
}

//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("Scripting"));
component2.setLevel(1);
head1.addChild(&component2);

component& component3 =  component();
component3.setName(CString("EnvironmentalEffects"));
component3.setLevel(3);
head1.addChild(&component3);

component& component4 =  component();
component4.setName(CString("Shaders"));
component4.setLevel(1);
head1.addChild(&component4);

component& component5 =  component();
component5.setName(CString("CubeMapTexturing"));
component5.setLevel(1);
head1.addChild(&component5);

component& component6 =  component();
component6.setName(CString("Texturing"));
component6.setLevel(1);
head1.addChild(&component6);

component& component7 =  component();
component7.setName(CString("Rendering"));
component7.setLevel(1);
head1.addChild(&component7);

component& component8 =  component();
component8.setName(CString("Grouping"));
component8.setLevel(3);
head1.addChild(&component8);

component& component9 =  component();
component9.setName(CString("Core"));
component9.setLevel(1);
head1.addChild(&component9);

component& component10 =  component();
component10.setName(CString("DIS"));
component10.setLevel(2);
head1.addChild(&component10);

//<component name='Shape' level='4'></component>
//Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces http://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L
meta& meta11 =  meta();
meta11.setName(CString("title"));
meta11.setContent(CString("bumpfreewrlsliders.x3d"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("description"));
meta12.setContent(CString("*enter description here, short-sentence summaries preferred*"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("creator"));
meta13.setContent(CString("Doug Sanden, Christoph Valentin, John Carlson"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("translator"));
meta14.setContent(CString("*if manually translating VRML-to-X3D, enter name of person translating here*"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("created"));
meta15.setContent(CString("*enter date of initial version here*"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("translated"));
meta16.setContent(CString("*enter date of translation here*"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("modified"));
meta17.setContent(CString("*enter date of latest revision here*"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("version"));
meta18.setContent(CString("*enter version here, if any*"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("reference"));
meta19.setContent(CString("*enter reference citation or relative/online url here*"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(CString("reference"));
meta20.setContent(CString("*enter additional url/bibliographic reference information here*"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(CString("requires"));
meta21.setContent(CString("*enter reference resource here if required to support function, delivery, or coherence of content*"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(CString("rights"));
meta22.setContent(CString("*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024"));
head1.addMeta(&meta22);

meta& meta23 =  meta();
meta23.setName(CString("drawing"));
meta23.setContent(CString("*enter drawing filename/url here*"));
head1.addMeta(&meta23);

meta& meta24 =  meta();
meta24.setName(CString("MovingImage"));
meta24.setContent(CString("*enter movie filename/url here*"));
head1.addMeta(&meta24);

meta& meta25 =  meta();
meta25.setName(CString("photo"));
meta25.setContent(CString("*enter photo filename/url here*"));
head1.addMeta(&meta25);

meta& meta26 =  meta();
meta26.setName(CString("subject"));
meta26.setContent(CString("*enter subject keywords here*"));
head1.addMeta(&meta26);

meta& meta27 =  meta();
meta27.setName(CString("accessRights"));
meta27.setContent(CString("*enter permission statements or url here*"));
head1.addMeta(&meta27);

meta& meta28 =  meta();
meta28.setName(CString("identifier"));
meta28.setContent(CString("*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*"));
head1.addMeta(&meta28);

meta& meta29 =  meta();
meta29.setName(CString("generator"));
meta29.setContent(CString("PSPad, http://www.pspad.com/"));
head1.addMeta(&meta29);

meta& meta30 =  meta();
meta30.setName(CString("license"));
meta30.setContent(CString("license.html"));
head1.addMeta(&meta30);

X3D0.setHead(&head1);

//\"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution, It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) open for their \"discussion about the teapot\"
Scene& Scene31 =  Scene();
//LayerSet with two layers, navigation happens in layer 1
LayerSet& LayerSet32 =  LayerSet();
LayerSet32.setActiveLayer(1);
LayerSet32.setOrder(new int32_t[2]{1,2}, 2);
//the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"
//the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)
Layer& Layer33 =  Layer();
//basic nodes, which might be present in any scene
NavigationInfo& NavigationInfo34 =  NavigationInfo();
NavigationInfo34.setType(new CString[1]{CString("EXAMINE")}, 1);
NavigationInfo34.setAvatarSize(new float[3]{0.25,1.75,0.75}, 3);
Layer33.addChild(&NavigationInfo34);

DirectionalLight& DirectionalLight35 =  DirectionalLight();
DirectionalLight35.setAmbientIntensity(0.2);
DirectionalLight35.setDirection(new float[3]{0.0,-1.0,0.0});
Layer33.addChild(&DirectionalLight35);

DirectionalLight& DirectionalLight36 =  DirectionalLight();
DirectionalLight36.setAmbientIntensity(0.2);
DirectionalLight36.setDirection(new float[3]{-1.0,-0.1,-1.0});
Layer33.addChild(&DirectionalLight36);

Viewpoint& Viewpoint37 =  Viewpoint();
Viewpoint37.setDescription(CString("My Overview"));
Viewpoint37.setFieldOfView(1.570796);
Viewpoint37.setPosition(new float[3]{0.0,1.75,60.0});
Layer33.addChild(&Viewpoint37);

//this group contains the red/green/blue 3D crosshair
Group& Group38 =  Group();
//Arrow X
Transform& Transform39 =  Transform();
Transform39.setTranslation(new float[3]{25.0,0.0,0.0});
Transform39.setRotation(new float[4]{0.0,0.0,-1.0,1.57});
Shape& Shape40 =  Shape();
Cylinder& Cylinder41 =  Cylinder();
Cylinder41.setDEF(CString("Shaft"));
Cylinder41.setRadius(0.35);
Cylinder41.setHeight(50);
Shape40.setGeometry(&Cylinder41);

Appearance& Appearance42 =  Appearance();
Material& Material43 =  Material();
Material43.setDEF(CString("RED"));
Material43.setDiffuseColor(new float[3]{1.0,0.0,0.0});
Material43.setEmissiveColor(new float[3]{1.0,0.0,0.0});
Appearance42.addChild(&Material43);

Shape40.addChild(&Appearance42);

Transform39.addChild(&Shape40);

Group38.addChild(&Transform39);

Transform& Transform44 =  Transform();
Transform44.setTranslation(new float[3]{50.0,0.0,0.0});
Transform44.setRotation(new float[4]{0.0,0.0,-1.0,1.57});
Shape& Shape45 =  Shape();
Cone& Cone46 =  Cone();
Cone46.setDEF(CString("Tip"));
Cone46.setBottomRadius(0.8);
Cone46.setHeight(3);
Shape45.setGeometry(&Cone46);

Appearance& Appearance47 =  Appearance();
Material& Material48 =  Material();
Material48.setUSE(CString("RED"));
Appearance47.addChild(&Material48);

Shape45.addChild(&Appearance47);

Transform44.addChild(&Shape45);

Group38.addChild(&Transform44);

//Arrow Y
Transform& Transform49 =  Transform();
Transform49.setTranslation(new float[3]{0.0,25.0,0.0});
Shape& Shape50 =  Shape();
Cylinder& Cylinder51 =  Cylinder();
Cylinder51.setUSE(CString("Shaft"));
Shape50.setGeometry(&Cylinder51);

Appearance& Appearance52 =  Appearance();
Material& Material53 =  Material();
Material53.setDEF(CString("GREEN"));
Material53.setDiffuseColor(new float[3]{0.0,1.0,0.0});
Material53.setEmissiveColor(new float[3]{0.0,1.0,0.0});
Appearance52.addChild(&Material53);

Shape50.addChild(&Appearance52);

Transform49.addChild(&Shape50);

Group38.addChild(&Transform49);

Transform& Transform54 =  Transform();
Transform54.setTranslation(new float[3]{0.0,50.0,0.0});
Shape& Shape55 =  Shape();
Cone& Cone56 =  Cone();
Cone56.setUSE(CString("Tip"));
Shape55.setGeometry(&Cone56);

Appearance& Appearance57 =  Appearance();
Material& Material58 =  Material();
Material58.setUSE(CString("GREEN"));
Appearance57.addChild(&Material58);

Shape55.addChild(&Appearance57);

Transform54.addChild(&Shape55);

Group38.addChild(&Transform54);

//Arrow Z
Transform& Transform59 =  Transform();
Transform59.setTranslation(new float[3]{0.0,0.0,25.0});
Transform59.setRotation(new float[4]{1.0,0.0,0.0,1.57});
Shape& Shape60 =  Shape();
Cylinder& Cylinder61 =  Cylinder();
Cylinder61.setUSE(CString("Shaft"));
Shape60.setGeometry(&Cylinder61);

Appearance& Appearance62 =  Appearance();
Material& Material63 =  Material();
Material63.setDEF(CString("BLUE"));
Material63.setDiffuseColor(new float[3]{0.0,0.0,1.0});
Material63.setEmissiveColor(new float[3]{0.0,0.0,1.0});
Appearance62.addChild(&Material63);

Shape60.addChild(&Appearance62);

Transform59.addChild(&Shape60);

Group38.addChild(&Transform59);

Transform& Transform64 =  Transform();
Transform64.setTranslation(new float[3]{0.0,0.0,50.0});
Transform64.setRotation(new float[4]{1.0,0.0,0.0,1.57});
Shape& Shape65 =  Shape();
Cone& Cone66 =  Cone();
Cone66.setUSE(CString("Tip"));
Shape65.setGeometry(&Cone66);

Appearance& Appearance67 =  Appearance();
Material& Material68 =  Material();
Material68.setUSE(CString("BLUE"));
Appearance67.addChild(&Material68);

Shape65.addChild(&Appearance67);

Transform64.addChild(&Shape65);

Group38.addChild(&Transform64);

Layer33.addChild(&Group38);

//the model that is being reviewed by the users of this scene
Transform& Transform69 =  Transform();
Transform69.setDEF(CString("FlowerTransform"));
//<Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />
//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background& Background70 =  Background();
Background70.setBackUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
Background70.setBottomUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
Background70.setFrontUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
Background70.setLeftUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
Background70.setRightUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
Background70.setTopUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
Transform69.addChild(&Background70);

Shape& Shape71 =  Shape();
Sphere& Sphere72 =  Sphere();
Sphere72.setRadius(40);
Shape71.setGeometry(&Sphere72);

Appearance& Appearance73 =  Appearance();
Material& Material74 =  Material();
Material74.setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material74.setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance73.addChild(&Material74);

ComposedCubeMapTexture& ComposedCubeMapTexture75 =  ComposedCubeMapTexture();
ComposedCubeMapTexture75.setDEF(CString("texture"));
ImageTexture& ImageTexture76 =  ImageTexture();
ImageTexture76.setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
ComposedCubeMapTexture75.setBack(ImageTexture76);

ImageTexture& ImageTexture77 =  ImageTexture();
ImageTexture77.setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
ComposedCubeMapTexture75.setBottom(ImageTexture77);

ImageTexture& ImageTexture78 =  ImageTexture();
ImageTexture78.setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
ComposedCubeMapTexture75.setFront(ImageTexture78);

ImageTexture& ImageTexture79 =  ImageTexture();
ImageTexture79.setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
ComposedCubeMapTexture75.setLeft(ImageTexture79);

ImageTexture& ImageTexture80 =  ImageTexture();
ImageTexture80.setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
ComposedCubeMapTexture75.setRight(ImageTexture80);

ImageTexture& ImageTexture81 =  ImageTexture();
ImageTexture81.setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
ComposedCubeMapTexture75.setTop(ImageTexture81);

Appearance73.addChild(&ComposedCubeMapTexture75);

ComposedShader& ComposedShader82 =  ComposedShader();
ComposedShader82.setDEF(CString("freewrlShader"));
ComposedShader82.setLanguage(CString("GLSL"));
field& field83 =  field();
field83.setName(CString("chromaticDispertion"));
field83.setAccessType(CString("inputOnly"));
field83.setType(CString("SFVec3f"));
field83.setValue(CString("0.98 1 1.033"));
ComposedShader82.addChild(&field83);

field& field84 =  field();
field84.setName(CString("fw_textureCoordGenType"));
field84.setAccessType(CString("inputOnly"));
field84.setType(CString("SFInt32"));
field84.setValue(CString("0"));
ComposedShader82.addChild(&field84);

field& field85 =  field();
field85.setName(CString("bias"));
field85.setType(CString("SFFloat"));
field85.setAccessType(CString("inputOnly"));
field85.setValue(CString("0.5"));
ComposedShader82.addChild(&field85);

field& field86 =  field();
field86.setName(CString("scale"));
field86.setType(CString("SFFloat"));
field86.setAccessType(CString("inputOnly"));
field86.setValue(CString("0.5"));
ComposedShader82.addChild(&field86);

field& field87 =  field();
field87.setName(CString("power"));
field87.setType(CString("SFFloat"));
field87.setAccessType(CString("inputOnly"));
field87.setValue(CString("2"));
ComposedShader82.addChild(&field87);

field& field88 =  field();
field88.setName(CString("a"));
field88.setType(CString("SFFloat"));
field88.setAccessType(CString("inputOutput"));
field88.setValue(CString("15"));
ComposedShader82.addChild(&field88);

field& field89 =  field();
field89.setName(CString("b"));
field89.setType(CString("SFFloat"));
field89.setAccessType(CString("inputOutput"));
field89.setValue(CString("5"));
ComposedShader82.addChild(&field89);

field& field90 =  field();
field90.setName(CString("c"));
field90.setType(CString("SFFloat"));
field90.setAccessType(CString("inputOutput"));
field90.setValue(CString("5"));
ComposedShader82.addChild(&field90);

field& field91 =  field();
field91.setName(CString("d"));
field91.setType(CString("SFFloat"));
field91.setAccessType(CString("inputOutput"));
field91.setValue(CString("5"));
ComposedShader82.addChild(&field91);

field& field92 =  field();
field92.setName(CString("tdelta"));
field92.setType(CString("SFFloat"));
field92.setAccessType(CString("inputOutput"));
field92.setValue(CString("0"));
ComposedShader82.addChild(&field92);

field& field93 =  field();
field93.setName(CString("pdelta"));
field93.setType(CString("SFFloat"));
field93.setAccessType(CString("inputOutput"));
field93.setValue(CString("0"));
ComposedShader82.addChild(&field93);

ShaderPart& ShaderPart94 =  ShaderPart();
ShaderPart94.setUrl(new CString[2]{CString("../shaders/freewrl_flowers_chromatic.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs")}, 2);
ShaderPart94.setType(CString("VERTEX"));
ComposedShader82.setParts(&ShaderPart94);

ShaderPart& ShaderPart95 =  ShaderPart();
ShaderPart95.setUrl(new CString[2]{CString("../shaders/freewrl_bubbles.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs")}, 2);
ShaderPart95.setType(CString("FRAGMENT"));
ComposedShader82.setParts(&ShaderPart95);

Appearance73.addChild(&ComposedShader82);

Shape71.addChild(&Appearance73);

Transform69.addChild(&Shape71);

Layer33.addChild(&Transform69);

//DIS multiuser facilities
DISEntityManager& DISEntityManager96 =  DISEntityManager();
DISEntityManager96.setDEF(CString("EntityManager"));
DISEntityManager96.setNetworkMode("networkReader");
DISEntityTypeMapping& DISEntityTypeMapping97 =  DISEntityTypeMapping();
DISEntityTypeMapping97.setCategory(77);
DISEntityTypeMapping97.setSpecific(1);
DISEntityTypeMapping97.setUrl(new CString[2]{CString("../data/Leif8Final.x3d"), CString("https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d")}, 2);
DISEntityManager96.setMapping(&DISEntityTypeMapping97);

DISEntityTypeMapping& DISEntityTypeMapping98 =  DISEntityTypeMapping();
DISEntityTypeMapping98.setCategory(77);
DISEntityTypeMapping98.setSpecific(2);
DISEntityTypeMapping98.setUrl(new CString[2]{CString("../data/Lily8Final.x3d"), CString("https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d")}, 2);
DISEntityManager96.setMapping(&DISEntityTypeMapping98);

Layer33.addChild(&DISEntityManager96);

Collision& Collision99 =  Collision();
Collision99.setEnabled(false);
Group& Group100 =  Group();
Group100.setDEF(CString("AvatarHolder"));
Collision99.addChildren(&Group100);

Layer33.addChild(&Collision99);

ROUTE& ROUTE101 =  ROUTE();
ROUTE101.setFromField(CString("addedEntities"));
ROUTE101.setFromNode(CString("EntityManager"));
ROUTE101.setToField(CString("addChildren"));
ROUTE101.setToNode(CString("AvatarHolder"));
Layer33.addChild(&ROUTE101);

ROUTE& ROUTE102 =  ROUTE();
ROUTE102.setFromField(CString("removedEntities"));
ROUTE102.setFromNode(CString("EntityManager"));
ROUTE102.setToField(CString("removeChildren"));
ROUTE102.setToNode(CString("AvatarHolder"));
Layer33.addChild(&ROUTE102);

LayerSet32.addChild(&Layer33);

LayoutLayer& LayoutLayer103 =  LayoutLayer();
//positioning the LayoutLayer
//clipping the LayoutLayer
//the content (children) of the LayoutLayer
//first, the slider for scaling the model
Transform& Transform104 =  Transform();
Transform104.setTranslation(new float[3]{0.0,0.0,-3.0});
Shape& Shape105 =  Shape();
Appearance& Appearance106 =  Appearance();
Material& Material107 =  Material();
Material107.setDiffuseColor(new float[3]{0.0,0.0,0.0});
Material107.setTransparency(0.7);
Appearance106.addChild(&Material107);

Shape105.addChild(&Appearance106);

Box& Box108 =  Box();
Box108.setSize(new float[3]{100.0,100.0,0.02});
Shape105.setGeometry(&Box108);

Transform104.addChild(&Shape105);

LayoutLayer103.addChild(&Transform104);

//the plane sensors
Transform& Transform109 =  Transform();
Transform109.setDEF(CString("aSlider"));
Transform109.setTranslation(new float[3]{0.0,0.7,0.0});
Transform& Transform110 =  Transform();
Transform110.setRotation(new float[4]{0.0,0.0,1.0,1.57});
Shape& Shape111 =  Shape();
Appearance& Appearance112 =  Appearance();
Material& Material113 =  Material();
Appearance112.addChild(&Material113);

Shape111.addChild(&Appearance112);

Cylinder& Cylinder114 =  Cylinder();
Cylinder114.setRadius(0.05);
Cylinder114.setHeight(2.5);
Shape111.setGeometry(&Cylinder114);

Transform110.addChild(&Shape111);

Transform109.addChild(&Transform110);

Transform& Transform115 =  Transform();
Transform115.setDEF(CString("aTransform"));
Transform115.setTranslation(new float[3]{0.0,0.0,0.1});
PlaneSensor& PlaneSensor116 =  PlaneSensor();
PlaneSensor116.setDEF(CString("aSensor"));
PlaneSensor116.setMinPosition(new float[2]{-20.0,0.0});
PlaneSensor116.setMaxPosition(new float[2]{20.0,0.0});
Transform115.addChild(&PlaneSensor116);

Transform& Transform117 =  Transform();
Transform117.setTranslation(new float[3]{0.0,0.0,0.0});
TouchSensor& TouchSensor118 =  TouchSensor();
TouchSensor118.setDEF(CString("aTS"));
Transform117.addChild(&TouchSensor118);

Shape& Shape119 =  Shape();
Sphere& Sphere120 =  Sphere();
Sphere120.setRadius(0.08);
Shape119.setGeometry(&Sphere120);

Appearance& Appearance121 =  Appearance();
Material& Material122 =  Material();
Material122.setDiffuseColor(new float[3]{1.0,0.0,0.0});
Appearance121.addChild(&Material122);

Shape119.addChild(&Appearance121);

Transform117.addChild(&Shape119);

Transform115.addChild(&Transform117);

Shape& Shape123 =  Shape();
Cylinder& Cylinder124 =  Cylinder();
Cylinder124.setRadius(0.05);
Cylinder124.setHeight(0.3);
Shape123.setGeometry(&Cylinder124);

Appearance& Appearance125 =  Appearance();
Material& Material126 =  Material();
Appearance125.addChild(&Material126);

Shape123.addChild(&Appearance125);

Transform115.addChild(&Shape123);

Transform109.addChild(&Transform115);

Transform& Transform127 =  Transform();
Transform127.setRotation(new float[4]{0.0,0.0,1.0,1.57});
Shape& Shape128 =  Shape();
Appearance& Appearance129 =  Appearance();
Material& Material130 =  Material();
Appearance129.addChild(&Material130);

Shape128.addChild(&Appearance129);

Cylinder& Cylinder131 =  Cylinder();
Cylinder131.setRadius(0.05);
Cylinder131.setHeight(2.5);
Shape128.setGeometry(&Cylinder131);

Transform127.addChild(&Shape128);

Transform109.addChild(&Transform127);

LayoutLayer103.addChild(&Transform109);

Transform& Transform132 =  Transform();
Transform132.setDEF(CString("bSlider"));
Transform132.setTranslation(new float[3]{0.0,0.4,0.0});
Transform& Transform133 =  Transform();
Transform133.setRotation(new float[4]{0.0,0.0,1.0,1.57});
Shape& Shape134 =  Shape();
Appearance& Appearance135 =  Appearance();
Material& Material136 =  Material();
Appearance135.addChild(&Material136);

Shape134.addChild(&Appearance135);

Cylinder& Cylinder137 =  Cylinder();
Cylinder137.setRadius(0.05);
Cylinder137.setHeight(2.5);
Shape134.setGeometry(&Cylinder137);

Transform133.addChild(&Shape134);

Transform132.addChild(&Transform133);

Transform& Transform138 =  Transform();
Transform138.setDEF(CString("bTransform"));
Transform138.setTranslation(new float[3]{0.0,0.0,0.1});
PlaneSensor& PlaneSensor139 =  PlaneSensor();
PlaneSensor139.setDEF(CString("bSensor"));
PlaneSensor139.setMinPosition(new float[2]{-20.0,0.0});
PlaneSensor139.setMaxPosition(new float[2]{20.0,0.0});
Transform138.addChild(&PlaneSensor139);

Transform& Transform140 =  Transform();
Transform140.setTranslation(new float[3]{0.0,0.0,0.0});
TouchSensor& TouchSensor141 =  TouchSensor();
TouchSensor141.setDEF(CString("bTS"));
Transform140.addChild(&TouchSensor141);

Shape& Shape142 =  Shape();
Sphere& Sphere143 =  Sphere();
Sphere143.setRadius(0.08);
Shape142.setGeometry(&Sphere143);

Appearance& Appearance144 =  Appearance();
Material& Material145 =  Material();
Material145.setDiffuseColor(new float[3]{1.0,0.0,0.0});
Appearance144.addChild(&Material145);

Shape142.addChild(&Appearance144);

Transform140.addChild(&Shape142);

Transform138.addChild(&Transform140);

Shape& Shape146 =  Shape();
Cylinder& Cylinder147 =  Cylinder();
Cylinder147.setRadius(0.05);
Cylinder147.setHeight(0.3);
Shape146.setGeometry(&Cylinder147);

Appearance& Appearance148 =  Appearance();
Material& Material149 =  Material();
Appearance148.addChild(&Material149);

Shape146.addChild(&Appearance148);

Transform138.addChild(&Shape146);

Transform132.addChild(&Transform138);

LayoutLayer103.addChild(&Transform132);

Transform& Transform150 =  Transform();
Transform150.setDEF(CString("cSlider"));
Transform150.setTranslation(new float[3]{0.0,0.1,0.0});
Transform& Transform151 =  Transform();
Transform151.setRotation(new float[4]{0.0,0.0,1.0,1.57});
Shape& Shape152 =  Shape();
Appearance& Appearance153 =  Appearance();
Material& Material154 =  Material();
Appearance153.addChild(&Material154);

Shape152.addChild(&Appearance153);

Cylinder& Cylinder155 =  Cylinder();
Cylinder155.setRadius(0.05);
Cylinder155.setHeight(2.5);
Shape152.setGeometry(&Cylinder155);

Transform151.addChild(&Shape152);

Transform150.addChild(&Transform151);

Transform& Transform156 =  Transform();
Transform156.setDEF(CString("cTransform"));
Transform156.setTranslation(new float[3]{0.0,0.0,0.1});
PlaneSensor& PlaneSensor157 =  PlaneSensor();
PlaneSensor157.setDEF(CString("cSensor"));
PlaneSensor157.setMinPosition(new float[2]{-20.0,0.0});
PlaneSensor157.setMaxPosition(new float[2]{20.0,0.0});
Transform156.addChild(&PlaneSensor157);

Transform& Transform158 =  Transform();
Transform158.setTranslation(new float[3]{0.0,0.0,0.0});
TouchSensor& TouchSensor159 =  TouchSensor();
TouchSensor159.setDEF(CString("cTS"));
Transform158.addChild(&TouchSensor159);

Shape& Shape160 =  Shape();
Sphere& Sphere161 =  Sphere();
Sphere161.setRadius(0.08);
Shape160.setGeometry(&Sphere161);

Appearance& Appearance162 =  Appearance();
Material& Material163 =  Material();
Material163.setDiffuseColor(new float[3]{1.0,0.0,0.0});
Appearance162.addChild(&Material163);

Shape160.addChild(&Appearance162);

Transform158.addChild(&Shape160);

Transform156.addChild(&Transform158);

Shape& Shape164 =  Shape();
Cylinder& Cylinder165 =  Cylinder();
Cylinder165.setRadius(0.05);
Cylinder165.setHeight(0.3);
Shape164.setGeometry(&Cylinder165);

Appearance& Appearance166 =  Appearance();
Material& Material167 =  Material();
Appearance166.addChild(&Material167);

Shape164.addChild(&Appearance166);

Transform156.addChild(&Shape164);

Transform150.addChild(&Transform156);

LayoutLayer103.addChild(&Transform150);

Transform& Transform168 =  Transform();
Transform168.setDEF(CString("dSlider"));
Transform168.setTranslation(new float[3]{0.0,-0.2,0.0});
Transform& Transform169 =  Transform();
Transform169.setRotation(new float[4]{0.0,0.0,1.0,1.57});
Shape& Shape170 =  Shape();
Appearance& Appearance171 =  Appearance();
Material& Material172 =  Material();
Appearance171.addChild(&Material172);

Shape170.addChild(&Appearance171);

Cylinder& Cylinder173 =  Cylinder();
Cylinder173.setRadius(0.05);
Cylinder173.setHeight(2.5);
Shape170.setGeometry(&Cylinder173);

Transform169.addChild(&Shape170);

Transform168.addChild(&Transform169);

Transform& Transform174 =  Transform();
Transform174.setDEF(CString("dTransform"));
Transform174.setTranslation(new float[3]{0.0,0.0,0.1});
PlaneSensor& PlaneSensor175 =  PlaneSensor();
PlaneSensor175.setDEF(CString("dSensor"));
PlaneSensor175.setMinPosition(new float[2]{-20.0,0.0});
PlaneSensor175.setMaxPosition(new float[2]{20.0,0.0});
Transform174.addChild(&PlaneSensor175);

Transform& Transform176 =  Transform();
Transform176.setTranslation(new float[3]{0.0,0.0,0.0});
TouchSensor& TouchSensor177 =  TouchSensor();
TouchSensor177.setDEF(CString("dTS"));
Transform176.addChild(&TouchSensor177);

Shape& Shape178 =  Shape();
Sphere& Sphere179 =  Sphere();
Sphere179.setRadius(0.08);
Shape178.setGeometry(&Sphere179);

Appearance& Appearance180 =  Appearance();
Material& Material181 =  Material();
Material181.setDiffuseColor(new float[3]{1.0,0.0,0.0});
Appearance180.addChild(&Material181);

Shape178.addChild(&Appearance180);

Transform176.addChild(&Shape178);

Transform174.addChild(&Transform176);

Shape& Shape182 =  Shape();
Cylinder& Cylinder183 =  Cylinder();
Cylinder183.setRadius(0.05);
Cylinder183.setHeight(0.3);
Shape182.setGeometry(&Cylinder183);

Appearance& Appearance184 =  Appearance();
Material& Material185 =  Material();
Appearance184.addChild(&Material185);

Shape182.addChild(&Appearance184);

Transform174.addChild(&Shape182);

Transform168.addChild(&Transform174);

LayoutLayer103.addChild(&Transform168);

Transform& Transform186 =  Transform();
Transform186.setDEF(CString("pdeltaSlider"));
Transform186.setTranslation(new float[3]{0.0,-0.5,0.0});
Transform& Transform187 =  Transform();
Transform187.setRotation(new float[4]{0.0,0.0,1.0,1.57});
Shape& Shape188 =  Shape();
Appearance& Appearance189 =  Appearance();
Material& Material190 =  Material();
Appearance189.addChild(&Material190);

Shape188.addChild(&Appearance189);

Cylinder& Cylinder191 =  Cylinder();
Cylinder191.setRadius(0.05);
Cylinder191.setHeight(2.5);
Shape188.setGeometry(&Cylinder191);

Transform187.addChild(&Shape188);

Transform186.addChild(&Transform187);

Transform& Transform192 =  Transform();
Transform192.setDEF(CString("pdeltaTransform"));
Transform192.setTranslation(new float[3]{0.0,0.0,0.1});
PlaneSensor& PlaneSensor193 =  PlaneSensor();
PlaneSensor193.setDEF(CString("pdeltaSensor"));
PlaneSensor193.setMinPosition(new float[2]{-20.0,0.0});
PlaneSensor193.setMaxPosition(new float[2]{20.0,0.0});
Transform192.addChild(&PlaneSensor193);

Transform& Transform194 =  Transform();
Transform194.setTranslation(new float[3]{0.0,0.0,0.0});
TouchSensor& TouchSensor195 =  TouchSensor();
TouchSensor195.setDEF(CString("pdeltaTS"));
Transform194.addChild(&TouchSensor195);

Shape& Shape196 =  Shape();
Sphere& Sphere197 =  Sphere();
Sphere197.setRadius(0.08);
Shape196.setGeometry(&Sphere197);

Appearance& Appearance198 =  Appearance();
Material& Material199 =  Material();
Material199.setDiffuseColor(new float[3]{1.0,0.0,0.0});
Appearance198.addChild(&Material199);

Shape196.addChild(&Appearance198);

Transform194.addChild(&Shape196);

Transform192.addChild(&Transform194);

Shape& Shape200 =  Shape();
Cylinder& Cylinder201 =  Cylinder();
Cylinder201.setRadius(0.05);
Cylinder201.setHeight(0.3);
Shape200.setGeometry(&Cylinder201);

Appearance& Appearance202 =  Appearance();
Material& Material203 =  Material();
Appearance202.addChild(&Material203);

Shape200.addChild(&Appearance202);

Transform192.addChild(&Shape200);

Transform186.addChild(&Transform192);

LayoutLayer103.addChild(&Transform186);

Transform& Transform204 =  Transform();
Transform204.setDEF(CString("tdeltaSlider"));
Transform204.setTranslation(new float[3]{0.0,-0.8,0.0});
Transform& Transform205 =  Transform();
Transform205.setRotation(new float[4]{0.0,0.0,1.0,1.57});
Shape& Shape206 =  Shape();
Appearance& Appearance207 =  Appearance();
Material& Material208 =  Material();
Appearance207.addChild(&Material208);

Shape206.addChild(&Appearance207);

Cylinder& Cylinder209 =  Cylinder();
Cylinder209.setRadius(0.05);
Cylinder209.setHeight(2.5);
Shape206.setGeometry(&Cylinder209);

Transform205.addChild(&Shape206);

Transform204.addChild(&Transform205);

Transform& Transform210 =  Transform();
Transform210.setDEF(CString("tdeltaTransform"));
Transform210.setTranslation(new float[3]{0.0,0.0,0.1});
PlaneSensor& PlaneSensor211 =  PlaneSensor();
PlaneSensor211.setDEF(CString("tdeltaSensor"));
PlaneSensor211.setMinPosition(new float[2]{-20.0,0.0});
PlaneSensor211.setMaxPosition(new float[2]{20.0,0.0});
Transform210.addChild(&PlaneSensor211);

Transform& Transform212 =  Transform();
Transform212.setTranslation(new float[3]{0.0,0.0,0.0});
TouchSensor& TouchSensor213 =  TouchSensor();
TouchSensor213.setDEF(CString("tdeltaTS"));
Transform212.addChild(&TouchSensor213);

Shape& Shape214 =  Shape();
Sphere& Sphere215 =  Sphere();
Sphere215.setRadius(0.08);
Shape214.setGeometry(&Sphere215);

Appearance& Appearance216 =  Appearance();
Material& Material217 =  Material();
Material217.setDiffuseColor(new float[3]{1.0,0.0,0.0});
Appearance216.addChild(&Material217);

Shape214.addChild(&Appearance216);

Transform212.addChild(&Shape214);

Transform210.addChild(&Transform212);

Shape& Shape218 =  Shape();
Cylinder& Cylinder219 =  Cylinder();
Cylinder219.setRadius(0.05);
Cylinder219.setHeight(0.3);
Shape218.setGeometry(&Cylinder219);

Appearance& Appearance220 =  Appearance();
Material& Material221 =  Material();
Appearance220.addChild(&Material221);

Shape218.addChild(&Appearance220);

Transform210.addChild(&Shape218);

Transform204.addChild(&Transform210);

LayoutLayer103.addChild(&Transform204);

Script& Script222 =  Script();
Script222.setDEF(CString("aValueTransformerScript"));
Script222.setDirectOutput(true);
Script222.setMustEvaluate(true);
field& field223 =  field();
field223.setName(CString("newTranslation"));
field223.setAccessType(CString("inputOnly"));
field223.setType(CString("SFVec3f"));
field223.setValue(CString("1 1 1"));
Script222.addChild(&field223);

field& field224 =  field();
field224.setName(CString("aValue"));
field224.setAccessType(CString("outputOnly"));
field224.setType(CString("SFFloat"));
field224.setValue(CString("1"));
Script222.addChild(&field224);


//Script222.setSourceCode(CString("ecmascript: function newTranslation(Value) { aValue = Value.x * 30; }"));
LayoutLayer103.addChild(&Script222);

Script& Script225 =  Script();
Script225.setDEF(CString("bValueTransformerScript"));
Script225.setDirectOutput(true);
Script225.setMustEvaluate(true);
field& field226 =  field();
field226.setName(CString("newTranslation"));
field226.setAccessType(CString("inputOnly"));
field226.setType(CString("SFVec3f"));
field226.setValue(CString("1 1 1"));
Script225.addChild(&field226);

field& field227 =  field();
field227.setName(CString("bValue"));
field227.setAccessType(CString("outputOnly"));
field227.setType(CString("SFFloat"));
field227.setValue(CString("1"));
Script225.addChild(&field227);


//Script225.setSourceCode(CString("ecmascript: function newTranslation(Value) { bValue = Value.x * 30; }"));
LayoutLayer103.addChild(&Script225);

Script& Script228 =  Script();
Script228.setDEF(CString("cValueTransformerScript"));
Script228.setDirectOutput(true);
Script228.setMustEvaluate(true);
field& field229 =  field();
field229.setName(CString("newTranslation"));
field229.setAccessType(CString("inputOnly"));
field229.setType(CString("SFVec3f"));
field229.setValue(CString("1 1 1"));
Script228.addChild(&field229);

field& field230 =  field();
field230.setName(CString("cValue"));
field230.setAccessType(CString("outputOnly"));
field230.setType(CString("SFFloat"));
field230.setValue(CString("1"));
Script228.addChild(&field230);


//Script228.setSourceCode(CString("ecmascript: function newTranslation(Value) { cValue = Value.x * 5; }"));
LayoutLayer103.addChild(&Script228);

Script& Script231 =  Script();
Script231.setDEF(CString("dValueTransformerScript"));
Script231.setDirectOutput(true);
Script231.setMustEvaluate(true);
field& field232 =  field();
field232.setName(CString("newTranslation"));
field232.setAccessType(CString("inputOnly"));
field232.setType(CString("SFVec3f"));
field232.setValue(CString("1 1 1"));
Script231.addChild(&field232);

field& field233 =  field();
field233.setName(CString("dValue"));
field233.setAccessType(CString("outputOnly"));
field233.setType(CString("SFFloat"));
field233.setValue(CString("1"));
Script231.addChild(&field233);


//Script231.setSourceCode(CString("ecmascript: function newTranslation(Value) { dValue = Value.x * 5; }"));
LayoutLayer103.addChild(&Script231);

Script& Script234 =  Script();
Script234.setDEF(CString("pdeltaValueTransformerScript"));
Script234.setDirectOutput(true);
Script234.setMustEvaluate(true);
field& field235 =  field();
field235.setName(CString("newTranslation"));
field235.setAccessType(CString("inputOnly"));
field235.setType(CString("SFVec3f"));
field235.setValue(CString("1 1 1"));
Script234.addChild(&field235);

field& field236 =  field();
field236.setName(CString("pdeltaValue"));
field236.setAccessType(CString("outputOnly"));
field236.setType(CString("SFFloat"));
field236.setValue(CString("1"));
Script234.addChild(&field236);


//Script234.setSourceCode(CString("ecmascript: function newTranslation(Value) { pdeltaValue = Value.x; }"));
LayoutLayer103.addChild(&Script234);

Script& Script237 =  Script();
Script237.setDEF(CString("tdeltaValueTransformerScript"));
Script237.setDirectOutput(true);
Script237.setMustEvaluate(true);
field& field238 =  field();
field238.setName(CString("newTranslation"));
field238.setAccessType(CString("inputOnly"));
field238.setType(CString("SFVec3f"));
field238.setValue(CString("1 1 1"));
Script237.addChild(&field238);

field& field239 =  field();
field239.setName(CString("tdeltaValue"));
field239.setAccessType(CString("outputOnly"));
field239.setType(CString("SFFloat"));
field239.setValue(CString("1"));
Script237.addChild(&field239);


//Script237.setSourceCode(CString("ecmascript: function newTranslation(Value) { tdeltaValue = Value.x; }"));
LayoutLayer103.addChild(&Script237);

ROUTE& ROUTE240 =  ROUTE();
ROUTE240.setFromField(CString("translation_changed"));
ROUTE240.setFromNode(CString("aSensor"));
ROUTE240.setToField(CString("set_translation"));
ROUTE240.setToNode(CString("aTransform"));
LayoutLayer103.addChild(&ROUTE240);

ROUTE& ROUTE241 =  ROUTE();
ROUTE241.setFromField(CString("translation_changed"));
ROUTE241.setFromNode(CString("bSensor"));
ROUTE241.setToField(CString("set_translation"));
ROUTE241.setToNode(CString("bTransform"));
LayoutLayer103.addChild(&ROUTE241);

ROUTE& ROUTE242 =  ROUTE();
ROUTE242.setFromField(CString("translation_changed"));
ROUTE242.setFromNode(CString("cSensor"));
ROUTE242.setToField(CString("set_translation"));
ROUTE242.setToNode(CString("cTransform"));
LayoutLayer103.addChild(&ROUTE242);

ROUTE& ROUTE243 =  ROUTE();
ROUTE243.setFromField(CString("translation_changed"));
ROUTE243.setFromNode(CString("dSensor"));
ROUTE243.setToField(CString("set_translation"));
ROUTE243.setToNode(CString("dTransform"));
LayoutLayer103.addChild(&ROUTE243);

ROUTE& ROUTE244 =  ROUTE();
ROUTE244.setFromField(CString("translation_changed"));
ROUTE244.setFromNode(CString("pdeltaSensor"));
ROUTE244.setToField(CString("set_translation"));
ROUTE244.setToNode(CString("pdeltaTransform"));
LayoutLayer103.addChild(&ROUTE244);

ROUTE& ROUTE245 =  ROUTE();
ROUTE245.setFromField(CString("translation_changed"));
ROUTE245.setFromNode(CString("tdeltaSensor"));
ROUTE245.setToField(CString("set_translation"));
ROUTE245.setToNode(CString("tdeltaTransform"));
LayoutLayer103.addChild(&ROUTE245);

ROUTE& ROUTE246 =  ROUTE();
ROUTE246.setFromField(CString("translation_changed"));
ROUTE246.setFromNode(CString("aSensor"));
ROUTE246.setToField(CString("newTranslation"));
ROUTE246.setToNode(CString("aValueTransformerScript"));
LayoutLayer103.addChild(&ROUTE246);

ROUTE& ROUTE247 =  ROUTE();
ROUTE247.setFromField(CString("translation_changed"));
ROUTE247.setFromNode(CString("bSensor"));
ROUTE247.setToField(CString("newTranslation"));
ROUTE247.setToNode(CString("bValueTransformerScript"));
LayoutLayer103.addChild(&ROUTE247);

ROUTE& ROUTE248 =  ROUTE();
ROUTE248.setFromField(CString("translation_changed"));
ROUTE248.setFromNode(CString("cSensor"));
ROUTE248.setToField(CString("newTranslation"));
ROUTE248.setToNode(CString("cValueTransformerScript"));
LayoutLayer103.addChild(&ROUTE248);

ROUTE& ROUTE249 =  ROUTE();
ROUTE249.setFromField(CString("translation_changed"));
ROUTE249.setFromNode(CString("dSensor"));
ROUTE249.setToField(CString("newTranslation"));
ROUTE249.setToNode(CString("dValueTransformerScript"));
LayoutLayer103.addChild(&ROUTE249);

ROUTE& ROUTE250 =  ROUTE();
ROUTE250.setFromField(CString("translation_changed"));
ROUTE250.setFromNode(CString("pdeltaSensor"));
ROUTE250.setToField(CString("newTranslation"));
ROUTE250.setToNode(CString("pdeltaValueTransformerScript"));
LayoutLayer103.addChild(&ROUTE250);

ROUTE& ROUTE251 =  ROUTE();
ROUTE251.setFromField(CString("translation_changed"));
ROUTE251.setFromNode(CString("tdeltaSensor"));
ROUTE251.setToField(CString("newTranslation"));
ROUTE251.setToNode(CString("tdeltaValueTransformerScript"));
LayoutLayer103.addChild(&ROUTE251);

ROUTE& ROUTE252 =  ROUTE();
ROUTE252.setFromField(CString("aValue"));
ROUTE252.setFromNode(CString("aValueTransformerScript"));
ROUTE252.setToField(CString("a"));
ROUTE252.setToNode(CString("freewrlShader"));
LayoutLayer103.addChild(&ROUTE252);

ROUTE& ROUTE253 =  ROUTE();
ROUTE253.setFromField(CString("bValue"));
ROUTE253.setFromNode(CString("bValueTransformerScript"));
ROUTE253.setToField(CString("b"));
ROUTE253.setToNode(CString("freewrlShader"));
LayoutLayer103.addChild(&ROUTE253);

ROUTE& ROUTE254 =  ROUTE();
ROUTE254.setFromField(CString("cValue"));
ROUTE254.setFromNode(CString("cValueTransformerScript"));
ROUTE254.setToField(CString("c"));
ROUTE254.setToNode(CString("freewrlShader"));
LayoutLayer103.addChild(&ROUTE254);

ROUTE& ROUTE255 =  ROUTE();
ROUTE255.setFromField(CString("dValue"));
ROUTE255.setFromNode(CString("dValueTransformerScript"));
ROUTE255.setToField(CString("d"));
ROUTE255.setToNode(CString("freewrlShader"));
LayoutLayer103.addChild(&ROUTE255);

ROUTE& ROUTE256 =  ROUTE();
ROUTE256.setFromField(CString("pdeltaValue"));
ROUTE256.setFromNode(CString("pdeltaValueTransformerScript"));
ROUTE256.setToField(CString("pdelta"));
ROUTE256.setToNode(CString("freewrlShader"));
LayoutLayer103.addChild(&ROUTE256);

ROUTE& ROUTE257 =  ROUTE();
ROUTE257.setFromField(CString("tdeltaValue"));
ROUTE257.setFromNode(CString("tdeltaValueTransformerScript"));
ROUTE257.setToField(CString("tdelta"));
ROUTE257.setToNode(CString("freewrlShader"));
LayoutLayer103.addChild(&ROUTE257);

Layout& Layout258 =  Layout();
Layout258.setAlign(new CString[2]{CString("RIGHT"), CString("BOTTOM")}, 2);
Layout258.setOffset(new float[2]{0.0,0.0}, 2);
Layout258.setOffsetUnits(new CString[2]{CString("WORLD"), CString("WORLD")}, 2);
Layout258.setScaleMode(new CString[2]{CString("NONE"), CString("NONE")}, 2);
Layout258.setSize(new float[2]{0.4,1.0}, 2);
Layout258.setSizeUnits(new CString[2]{CString("WORLD"), CString("WORLD")}, 2);
LayoutLayer103.setLayout(Layout258);

Viewport& Viewport259 =  Viewport();
Viewport259.setClipBoundary(new float[4]{0.0,1.0,0.0,1.0}, 4);
LayoutLayer103.setViewport(Viewport259);

LayerSet32.addChild(&LayoutLayer103);

Scene31.addChild(&LayerSet32);

X3D0.setScene(&Scene31);

//}

#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define FALSE false
#define TRUE true
#define BOOL bool
#define False false
#define True true
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
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
LayerSet32.setOrder(new int32_t[]{1,2}, 2);
//the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"
//the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)
Layer& Layer33 =  Layer();
//basic nodes, which might be present in any scene
NavigationInfo& NavigationInfo34 =  NavigationInfo();
NavigationInfo34.setType(new CString[]{CString("EXAMINE")}, 1);
NavigationInfo34.setAvatarSize(new float[]{0.25,1.75,0.75}, 3);
Layer33.addChild(&NavigationInfo34);

DirectionalLight& DirectionalLight35 =  DirectionalLight();
DirectionalLight35.setAmbientIntensity(0.2);
DirectionalLight35.setDirection(new float[]{0,-1,0});
Layer33.addChild(&DirectionalLight35);

DirectionalLight& DirectionalLight36 =  DirectionalLight();
DirectionalLight36.setAmbientIntensity(0.2);
DirectionalLight36.setDirection(new float[]{-1,-0.1,-1});
Layer33.addChild(&DirectionalLight36);

Viewpoint& Viewpoint37 =  Viewpoint();
Viewpoint37.setDescription(CString("My Overview"));
Viewpoint37.setFieldOfView(1.570796);
Viewpoint37.setPosition(new float[]{0,1.75,60});
Layer33.addChild(&Viewpoint37);

//this group contains the red/green/blue 3D crosshair
Group& Group38 =  Group();
//Arrow X
Transform& Transform39 =  Transform();
Transform39.setTranslation(new float[]{25,0,0});
Transform39.setRotation(new float[]{0,0,-1,1.57});
Shape& Shape40 =  Shape();
Cylinder& Cylinder41 =  Cylinder();
Cylinder41.setDEF(CString("Shaft"));
Cylinder41.setRadius(0.35);
Cylinder41.setHeight(50);
Shape40.setGeometry(&Cylinder41);

Appearance& Appearance42 =  Appearance();
Material& Material43 =  Material();
Material43.setDEF(CString("RED"));
Material43.setDiffuseColor(new float[]{1,0,0});
Material43.setEmissiveColor(new float[]{1,0,0});
Appearance42.addChild(&Material43);

Shape40.addChild(&Appearance42);

Transform39.addChild(&Shape40);

Group38.addChild(&Transform39);

Transform& Transform44 =  Transform();
Transform44.setTranslation(new float[]{50,0,0});
Transform44.setRotation(new float[]{0,0,-1,1.57});
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
Transform49.setTranslation(new float[]{0,25,0});
Shape& Shape50 =  Shape();
Cylinder& Cylinder51 =  Cylinder();
Cylinder51.setUSE(CString("Shaft"));
Shape50.setGeometry(&Cylinder51);

Appearance& Appearance52 =  Appearance();
Material& Material53 =  Material();
Material53.setDEF(CString("GREEN"));
Material53.setDiffuseColor(new float[]{0,1,0});
Material53.setEmissiveColor(new float[]{0,1,0});
Appearance52.addChild(&Material53);

Shape50.addChild(&Appearance52);

Transform49.addChild(&Shape50);

Group38.addChild(&Transform49);

Transform& Transform54 =  Transform();
Transform54.setTranslation(new float[]{0,50,0});
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
Transform59.setTranslation(new float[]{0,0,25});
Transform59.setRotation(new float[]{1,0,0,1.57});
Shape& Shape60 =  Shape();
Cylinder& Cylinder61 =  Cylinder();
Cylinder61.setUSE(CString("Shaft"));
Shape60.setGeometry(&Cylinder61);

Appearance& Appearance62 =  Appearance();
Material& Material63 =  Material();
Material63.setDEF(CString("BLUE"));
Material63.setDiffuseColor(new float[]{0,0,1});
Material63.setEmissiveColor(new float[]{0,0,1});
Appearance62.addChild(&Material63);

Shape60.addChild(&Appearance62);

Transform59.addChild(&Shape60);

Group38.addChild(&Transform59);

Transform& Transform64 =  Transform();
Transform64.setTranslation(new float[]{0,0,50});
Transform64.setRotation(new float[]{1,0,0,1.57});
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
Background70.setBackUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
Background70.setBottomUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
Background70.setFrontUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
Background70.setLeftUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
Background70.setRightUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
Background70.setTopUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
Transform69.addChild(&Background70);

Shape& Shape71 =  Shape();
Sphere& Sphere72 =  Sphere();
Sphere72.setRadius(40);
Shape71.setGeometry(&Sphere72);

Appearance& Appearance73 =  Appearance();
Material& Material74 =  Material();
Material74.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material74.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance73.addChild(&Material74);

ComposedCubeMapTexture& ComposedCubeMapTexture75 =  ComposedCubeMapTexture();
ComposedCubeMapTexture75.setDEF(CString("texture"));
ImageTexture& ImageTexture76 =  ImageTexture();
ImageTexture76.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
ComposedCubeMapTexture75.setBack(ImageTexture76);

ImageTexture& ImageTexture77 =  ImageTexture();
ImageTexture77.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
ComposedCubeMapTexture75.setBottom(ImageTexture77);

ImageTexture& ImageTexture78 =  ImageTexture();
ImageTexture78.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
ComposedCubeMapTexture75.setFront(ImageTexture78);

ImageTexture& ImageTexture79 =  ImageTexture();
ImageTexture79.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
ComposedCubeMapTexture75.setLeft(ImageTexture79);

ImageTexture& ImageTexture80 =  ImageTexture();
ImageTexture80.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
ComposedCubeMapTexture75.setRight(ImageTexture80);

ImageTexture& ImageTexture81 =  ImageTexture();
ImageTexture81.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
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
ShaderPart94.setUrl(new CString[]{CString("../shaders/freewrl_flowers_chromatic.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs")}, 2);
ShaderPart94.setType(CString("VERTEX"));
ComposedShader82.setParts(&ShaderPart94);

ShaderPart& ShaderPart95 =  ShaderPart();
ShaderPart95.setUrl(new CString[]{CString("../shaders/freewrl_bubbles.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs")}, 2);
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
DISEntityTypeMapping97.setUrl(new CString[]{CString("../data/Leif8Final.x3dv"), CString("https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3dv")}, 2);
DISEntityManager96.setMapping(&DISEntityTypeMapping97);

DISEntityTypeMapping& DISEntityTypeMapping98 =  DISEntityTypeMapping();
DISEntityTypeMapping98.setCategory(77);
DISEntityTypeMapping98.setSpecific(2);
DISEntityTypeMapping98.setUrl(new CString[]{CString("../data/Lily8Final.x3dv"), CString("https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3dv")}, 2);
DISEntityManager96.setMapping(&DISEntityTypeMapping98);

DISEntityTypeMapping& DISEntityTypeMapping99 =  DISEntityTypeMapping();
DISEntityTypeMapping99.setCategory(77);
DISEntityTypeMapping99.setSpecific(3);
DISEntityTypeMapping99.setUrl(new CString[]{CString("../data/Tufani8Final.x3dv"), CString("https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3dv")}, 2);
DISEntityManager96.setMapping(&DISEntityTypeMapping99);

DISEntityTypeMapping& DISEntityTypeMapping100 =  DISEntityTypeMapping();
DISEntityTypeMapping100.setCategory(77);
DISEntityTypeMapping100.setSpecific(4);
DISEntityTypeMapping100.setUrl(new CString[]{CString("../data/Gramps8Final.x3dv"), CString("https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3dv")}, 2);
DISEntityManager96.setMapping(&DISEntityTypeMapping100);

Layer33.addChild(&DISEntityManager96);

Collision& Collision101 =  Collision();
Collision101.setEnabled(False);
Group& Group102 =  Group();
Group102.setDEF(CString("AvatarHolder"));
Collision101.addChildren(&Group102);

Layer33.addChild(&Collision101);

ROUTE& ROUTE103 =  ROUTE();
ROUTE103.setFromField(CString("addedEntities"));
ROUTE103.setFromNode(CString("EntityManager"));
ROUTE103.setToField(CString("addChildren"));
ROUTE103.setToNode(CString("AvatarHolder"));
Layer33.addChild(&ROUTE103);

ROUTE& ROUTE104 =  ROUTE();
ROUTE104.setFromField(CString("removedEntities"));
ROUTE104.setFromNode(CString("EntityManager"));
ROUTE104.setToField(CString("removeChildren"));
ROUTE104.setToNode(CString("AvatarHolder"));
Layer33.addChild(&ROUTE104);

LayerSet32.addChild(&Layer33);

LayoutLayer& LayoutLayer105 =  LayoutLayer();
//positioning the LayoutLayer
//clipping the LayoutLayer
//the content (children) of the LayoutLayer
//first, the slider for scaling the model
Transform& Transform106 =  Transform();
Transform106.setTranslation(new float[]{0,0,-3});
Shape& Shape107 =  Shape();
Appearance& Appearance108 =  Appearance();
Material& Material109 =  Material();
Material109.setDiffuseColor(new float[]{0,0,0});
Material109.setTransparency(0.7);
Appearance108.addChild(&Material109);

Shape107.addChild(&Appearance108);

Box& Box110 =  Box();
Box110.setSize(new float[]{100,100,0.02});
Shape107.setGeometry(&Box110);

Transform106.addChild(&Shape107);

LayoutLayer105.addChild(&Transform106);

//the plane sensors
Transform& Transform111 =  Transform();
Transform111.setDEF(CString("aSlider"));
Transform111.setTranslation(new float[]{0,0.7,0});
Transform& Transform112 =  Transform();
Transform112.setRotation(new float[]{0,0,1,1.57});
Shape& Shape113 =  Shape();
Appearance& Appearance114 =  Appearance();
Material& Material115 =  Material();
Appearance114.addChild(&Material115);

Shape113.addChild(&Appearance114);

Cylinder& Cylinder116 =  Cylinder();
Cylinder116.setRadius(0.05);
Cylinder116.setHeight(2.5);
Shape113.setGeometry(&Cylinder116);

Transform112.addChild(&Shape113);

Transform111.addChild(&Transform112);

Transform& Transform117 =  Transform();
Transform117.setDEF(CString("aTransform"));
Transform117.setTranslation(new float[]{0,0,0.1});
PlaneSensor& PlaneSensor118 =  PlaneSensor();
PlaneSensor118.setDEF(CString("aSensor"));
PlaneSensor118.setMinPosition(new float[]{-20,0});
PlaneSensor118.setMaxPosition(new float[]{20,0});
Transform117.addChild(&PlaneSensor118);

Transform& Transform119 =  Transform();
Transform119.setTranslation(new float[]{0,0,0});
TouchSensor& TouchSensor120 =  TouchSensor();
TouchSensor120.setDEF(CString("aTS"));
Transform119.addChild(&TouchSensor120);

Shape& Shape121 =  Shape();
Sphere& Sphere122 =  Sphere();
Sphere122.setRadius(0.08);
Shape121.setGeometry(&Sphere122);

Appearance& Appearance123 =  Appearance();
Material& Material124 =  Material();
Material124.setDiffuseColor(new float[]{1,0,0});
Appearance123.addChild(&Material124);

Shape121.addChild(&Appearance123);

Transform119.addChild(&Shape121);

Transform117.addChild(&Transform119);

Shape& Shape125 =  Shape();
Cylinder& Cylinder126 =  Cylinder();
Cylinder126.setRadius(0.05);
Cylinder126.setHeight(0.3);
Shape125.setGeometry(&Cylinder126);

Appearance& Appearance127 =  Appearance();
Material& Material128 =  Material();
Appearance127.addChild(&Material128);

Shape125.addChild(&Appearance127);

Transform117.addChild(&Shape125);

Transform111.addChild(&Transform117);

Transform& Transform129 =  Transform();
Transform129.setRotation(new float[]{0,0,1,1.57});
Shape& Shape130 =  Shape();
Appearance& Appearance131 =  Appearance();
Material& Material132 =  Material();
Appearance131.addChild(&Material132);

Shape130.addChild(&Appearance131);

Cylinder& Cylinder133 =  Cylinder();
Cylinder133.setRadius(0.05);
Cylinder133.setHeight(2.5);
Shape130.setGeometry(&Cylinder133);

Transform129.addChild(&Shape130);

Transform111.addChild(&Transform129);

LayoutLayer105.addChild(&Transform111);

Transform& Transform134 =  Transform();
Transform134.setDEF(CString("bSlider"));
Transform134.setTranslation(new float[]{0,0.4,0});
Transform& Transform135 =  Transform();
Transform135.setRotation(new float[]{0,0,1,1.57});
Shape& Shape136 =  Shape();
Appearance& Appearance137 =  Appearance();
Material& Material138 =  Material();
Appearance137.addChild(&Material138);

Shape136.addChild(&Appearance137);

Cylinder& Cylinder139 =  Cylinder();
Cylinder139.setRadius(0.05);
Cylinder139.setHeight(2.5);
Shape136.setGeometry(&Cylinder139);

Transform135.addChild(&Shape136);

Transform134.addChild(&Transform135);

Transform& Transform140 =  Transform();
Transform140.setDEF(CString("bTransform"));
Transform140.setTranslation(new float[]{0,0,0.1});
PlaneSensor& PlaneSensor141 =  PlaneSensor();
PlaneSensor141.setDEF(CString("bSensor"));
PlaneSensor141.setMinPosition(new float[]{-20,0});
PlaneSensor141.setMaxPosition(new float[]{20,0});
Transform140.addChild(&PlaneSensor141);

Transform& Transform142 =  Transform();
Transform142.setTranslation(new float[]{0,0,0});
TouchSensor& TouchSensor143 =  TouchSensor();
TouchSensor143.setDEF(CString("bTS"));
Transform142.addChild(&TouchSensor143);

Shape& Shape144 =  Shape();
Sphere& Sphere145 =  Sphere();
Sphere145.setRadius(0.08);
Shape144.setGeometry(&Sphere145);

Appearance& Appearance146 =  Appearance();
Material& Material147 =  Material();
Material147.setDiffuseColor(new float[]{1,0,0});
Appearance146.addChild(&Material147);

Shape144.addChild(&Appearance146);

Transform142.addChild(&Shape144);

Transform140.addChild(&Transform142);

Shape& Shape148 =  Shape();
Cylinder& Cylinder149 =  Cylinder();
Cylinder149.setRadius(0.05);
Cylinder149.setHeight(0.3);
Shape148.setGeometry(&Cylinder149);

Appearance& Appearance150 =  Appearance();
Material& Material151 =  Material();
Appearance150.addChild(&Material151);

Shape148.addChild(&Appearance150);

Transform140.addChild(&Shape148);

Transform134.addChild(&Transform140);

LayoutLayer105.addChild(&Transform134);

Transform& Transform152 =  Transform();
Transform152.setDEF(CString("cSlider"));
Transform152.setTranslation(new float[]{0,0.1,0});
Transform& Transform153 =  Transform();
Transform153.setRotation(new float[]{0,0,1,1.57});
Shape& Shape154 =  Shape();
Appearance& Appearance155 =  Appearance();
Material& Material156 =  Material();
Appearance155.addChild(&Material156);

Shape154.addChild(&Appearance155);

Cylinder& Cylinder157 =  Cylinder();
Cylinder157.setRadius(0.05);
Cylinder157.setHeight(2.5);
Shape154.setGeometry(&Cylinder157);

Transform153.addChild(&Shape154);

Transform152.addChild(&Transform153);

Transform& Transform158 =  Transform();
Transform158.setDEF(CString("cTransform"));
Transform158.setTranslation(new float[]{0,0,0.1});
PlaneSensor& PlaneSensor159 =  PlaneSensor();
PlaneSensor159.setDEF(CString("cSensor"));
PlaneSensor159.setMinPosition(new float[]{-20,0});
PlaneSensor159.setMaxPosition(new float[]{20,0});
Transform158.addChild(&PlaneSensor159);

Transform& Transform160 =  Transform();
Transform160.setTranslation(new float[]{0,0,0});
TouchSensor& TouchSensor161 =  TouchSensor();
TouchSensor161.setDEF(CString("cTS"));
Transform160.addChild(&TouchSensor161);

Shape& Shape162 =  Shape();
Sphere& Sphere163 =  Sphere();
Sphere163.setRadius(0.08);
Shape162.setGeometry(&Sphere163);

Appearance& Appearance164 =  Appearance();
Material& Material165 =  Material();
Material165.setDiffuseColor(new float[]{1,0,0});
Appearance164.addChild(&Material165);

Shape162.addChild(&Appearance164);

Transform160.addChild(&Shape162);

Transform158.addChild(&Transform160);

Shape& Shape166 =  Shape();
Cylinder& Cylinder167 =  Cylinder();
Cylinder167.setRadius(0.05);
Cylinder167.setHeight(0.3);
Shape166.setGeometry(&Cylinder167);

Appearance& Appearance168 =  Appearance();
Material& Material169 =  Material();
Appearance168.addChild(&Material169);

Shape166.addChild(&Appearance168);

Transform158.addChild(&Shape166);

Transform152.addChild(&Transform158);

LayoutLayer105.addChild(&Transform152);

Transform& Transform170 =  Transform();
Transform170.setDEF(CString("dSlider"));
Transform170.setTranslation(new float[]{0,-0.2,0});
Transform& Transform171 =  Transform();
Transform171.setRotation(new float[]{0,0,1,1.57});
Shape& Shape172 =  Shape();
Appearance& Appearance173 =  Appearance();
Material& Material174 =  Material();
Appearance173.addChild(&Material174);

Shape172.addChild(&Appearance173);

Cylinder& Cylinder175 =  Cylinder();
Cylinder175.setRadius(0.05);
Cylinder175.setHeight(2.5);
Shape172.setGeometry(&Cylinder175);

Transform171.addChild(&Shape172);

Transform170.addChild(&Transform171);

Transform& Transform176 =  Transform();
Transform176.setDEF(CString("dTransform"));
Transform176.setTranslation(new float[]{0,0,0.1});
PlaneSensor& PlaneSensor177 =  PlaneSensor();
PlaneSensor177.setDEF(CString("dSensor"));
PlaneSensor177.setMinPosition(new float[]{-20,0});
PlaneSensor177.setMaxPosition(new float[]{20,0});
Transform176.addChild(&PlaneSensor177);

Transform& Transform178 =  Transform();
Transform178.setTranslation(new float[]{0,0,0});
TouchSensor& TouchSensor179 =  TouchSensor();
TouchSensor179.setDEF(CString("dTS"));
Transform178.addChild(&TouchSensor179);

Shape& Shape180 =  Shape();
Sphere& Sphere181 =  Sphere();
Sphere181.setRadius(0.08);
Shape180.setGeometry(&Sphere181);

Appearance& Appearance182 =  Appearance();
Material& Material183 =  Material();
Material183.setDiffuseColor(new float[]{1,0,0});
Appearance182.addChild(&Material183);

Shape180.addChild(&Appearance182);

Transform178.addChild(&Shape180);

Transform176.addChild(&Transform178);

Shape& Shape184 =  Shape();
Cylinder& Cylinder185 =  Cylinder();
Cylinder185.setRadius(0.05);
Cylinder185.setHeight(0.3);
Shape184.setGeometry(&Cylinder185);

Appearance& Appearance186 =  Appearance();
Material& Material187 =  Material();
Appearance186.addChild(&Material187);

Shape184.addChild(&Appearance186);

Transform176.addChild(&Shape184);

Transform170.addChild(&Transform176);

LayoutLayer105.addChild(&Transform170);

Transform& Transform188 =  Transform();
Transform188.setDEF(CString("pdeltaSlider"));
Transform188.setTranslation(new float[]{0,-0.5,0});
Transform& Transform189 =  Transform();
Transform189.setRotation(new float[]{0,0,1,1.57});
Shape& Shape190 =  Shape();
Appearance& Appearance191 =  Appearance();
Material& Material192 =  Material();
Appearance191.addChild(&Material192);

Shape190.addChild(&Appearance191);

Cylinder& Cylinder193 =  Cylinder();
Cylinder193.setRadius(0.05);
Cylinder193.setHeight(2.5);
Shape190.setGeometry(&Cylinder193);

Transform189.addChild(&Shape190);

Transform188.addChild(&Transform189);

Transform& Transform194 =  Transform();
Transform194.setDEF(CString("pdeltaTransform"));
Transform194.setTranslation(new float[]{0,0,0.1});
PlaneSensor& PlaneSensor195 =  PlaneSensor();
PlaneSensor195.setDEF(CString("pdeltaSensor"));
PlaneSensor195.setMinPosition(new float[]{-20,0});
PlaneSensor195.setMaxPosition(new float[]{20,0});
Transform194.addChild(&PlaneSensor195);

Transform& Transform196 =  Transform();
Transform196.setTranslation(new float[]{0,0,0});
TouchSensor& TouchSensor197 =  TouchSensor();
TouchSensor197.setDEF(CString("pdeltaTS"));
Transform196.addChild(&TouchSensor197);

Shape& Shape198 =  Shape();
Sphere& Sphere199 =  Sphere();
Sphere199.setRadius(0.08);
Shape198.setGeometry(&Sphere199);

Appearance& Appearance200 =  Appearance();
Material& Material201 =  Material();
Material201.setDiffuseColor(new float[]{1,0,0});
Appearance200.addChild(&Material201);

Shape198.addChild(&Appearance200);

Transform196.addChild(&Shape198);

Transform194.addChild(&Transform196);

Shape& Shape202 =  Shape();
Cylinder& Cylinder203 =  Cylinder();
Cylinder203.setRadius(0.05);
Cylinder203.setHeight(0.3);
Shape202.setGeometry(&Cylinder203);

Appearance& Appearance204 =  Appearance();
Material& Material205 =  Material();
Appearance204.addChild(&Material205);

Shape202.addChild(&Appearance204);

Transform194.addChild(&Shape202);

Transform188.addChild(&Transform194);

LayoutLayer105.addChild(&Transform188);

Transform& Transform206 =  Transform();
Transform206.setDEF(CString("tdeltaSlider"));
Transform206.setTranslation(new float[]{0,-0.8,0});
Transform& Transform207 =  Transform();
Transform207.setRotation(new float[]{0,0,1,1.57});
Shape& Shape208 =  Shape();
Appearance& Appearance209 =  Appearance();
Material& Material210 =  Material();
Appearance209.addChild(&Material210);

Shape208.addChild(&Appearance209);

Cylinder& Cylinder211 =  Cylinder();
Cylinder211.setRadius(0.05);
Cylinder211.setHeight(2.5);
Shape208.setGeometry(&Cylinder211);

Transform207.addChild(&Shape208);

Transform206.addChild(&Transform207);

Transform& Transform212 =  Transform();
Transform212.setDEF(CString("tdeltaTransform"));
Transform212.setTranslation(new float[]{0,0,0.1});
PlaneSensor& PlaneSensor213 =  PlaneSensor();
PlaneSensor213.setDEF(CString("tdeltaSensor"));
PlaneSensor213.setMinPosition(new float[]{-20,0});
PlaneSensor213.setMaxPosition(new float[]{20,0});
Transform212.addChild(&PlaneSensor213);

Transform& Transform214 =  Transform();
Transform214.setTranslation(new float[]{0,0,0});
TouchSensor& TouchSensor215 =  TouchSensor();
TouchSensor215.setDEF(CString("tdeltaTS"));
Transform214.addChild(&TouchSensor215);

Shape& Shape216 =  Shape();
Sphere& Sphere217 =  Sphere();
Sphere217.setRadius(0.08);
Shape216.setGeometry(&Sphere217);

Appearance& Appearance218 =  Appearance();
Material& Material219 =  Material();
Material219.setDiffuseColor(new float[]{1,0,0});
Appearance218.addChild(&Material219);

Shape216.addChild(&Appearance218);

Transform214.addChild(&Shape216);

Transform212.addChild(&Transform214);

Shape& Shape220 =  Shape();
Cylinder& Cylinder221 =  Cylinder();
Cylinder221.setRadius(0.05);
Cylinder221.setHeight(0.3);
Shape220.setGeometry(&Cylinder221);

Appearance& Appearance222 =  Appearance();
Material& Material223 =  Material();
Appearance222.addChild(&Material223);

Shape220.addChild(&Appearance222);

Transform212.addChild(&Shape220);

Transform206.addChild(&Transform212);

LayoutLayer105.addChild(&Transform206);

Script& Script224 =  Script();
Script224.setDEF(CString("aValueTransformerScript"));
Script224.setDirectOutput(True);
Script224.setMustEvaluate(True);
field& field225 =  field();
field225.setName(CString("newTranslation"));
field225.setAccessType(CString("inputOnly"));
field225.setType(CString("SFVec3f"));
field225.setValue(CString("1 1 1"));
Script224.addChild(&field225);

field& field226 =  field();
field226.setName(CString("aValue"));
field226.setAccessType(CString("outputOnly"));
field226.setType(CString("SFFloat"));
field226.setValue(CString("1"));
Script224.addChild(&field226);


Script224.setSourceCode(CString("ecmascript: function newTranslation(Value) { aValue = Value.x * 30; }"));
LayoutLayer105.addChild(&Script224);

Script& Script227 =  Script();
Script227.setDEF(CString("bValueTransformerScript"));
Script227.setDirectOutput(True);
Script227.setMustEvaluate(True);
field& field228 =  field();
field228.setName(CString("newTranslation"));
field228.setAccessType(CString("inputOnly"));
field228.setType(CString("SFVec3f"));
field228.setValue(CString("1 1 1"));
Script227.addChild(&field228);

field& field229 =  field();
field229.setName(CString("bValue"));
field229.setAccessType(CString("outputOnly"));
field229.setType(CString("SFFloat"));
field229.setValue(CString("1"));
Script227.addChild(&field229);


Script227.setSourceCode(CString("ecmascript: function newTranslation(Value) { bValue = Value.x * 30; }"));
LayoutLayer105.addChild(&Script227);

Script& Script230 =  Script();
Script230.setDEF(CString("cValueTransformerScript"));
Script230.setDirectOutput(True);
Script230.setMustEvaluate(True);
field& field231 =  field();
field231.setName(CString("newTranslation"));
field231.setAccessType(CString("inputOnly"));
field231.setType(CString("SFVec3f"));
field231.setValue(CString("1 1 1"));
Script230.addChild(&field231);

field& field232 =  field();
field232.setName(CString("cValue"));
field232.setAccessType(CString("outputOnly"));
field232.setType(CString("SFFloat"));
field232.setValue(CString("1"));
Script230.addChild(&field232);


Script230.setSourceCode(CString("ecmascript: function newTranslation(Value) { cValue = Value.x * 5; }"));
LayoutLayer105.addChild(&Script230);

Script& Script233 =  Script();
Script233.setDEF(CString("dValueTransformerScript"));
Script233.setDirectOutput(True);
Script233.setMustEvaluate(True);
field& field234 =  field();
field234.setName(CString("newTranslation"));
field234.setAccessType(CString("inputOnly"));
field234.setType(CString("SFVec3f"));
field234.setValue(CString("1 1 1"));
Script233.addChild(&field234);

field& field235 =  field();
field235.setName(CString("dValue"));
field235.setAccessType(CString("outputOnly"));
field235.setType(CString("SFFloat"));
field235.setValue(CString("1"));
Script233.addChild(&field235);


Script233.setSourceCode(CString("ecmascript: function newTranslation(Value) { dValue = Value.x * 5; }"));
LayoutLayer105.addChild(&Script233);

Script& Script236 =  Script();
Script236.setDEF(CString("pdeltaValueTransformerScript"));
Script236.setDirectOutput(True);
Script236.setMustEvaluate(True);
field& field237 =  field();
field237.setName(CString("newTranslation"));
field237.setAccessType(CString("inputOnly"));
field237.setType(CString("SFVec3f"));
field237.setValue(CString("1 1 1"));
Script236.addChild(&field237);

field& field238 =  field();
field238.setName(CString("pdeltaValue"));
field238.setAccessType(CString("outputOnly"));
field238.setType(CString("SFFloat"));
field238.setValue(CString("1"));
Script236.addChild(&field238);


Script236.setSourceCode(CString("ecmascript: function newTranslation(Value) { pdeltaValue = Value.x; }"));
LayoutLayer105.addChild(&Script236);

Script& Script239 =  Script();
Script239.setDEF(CString("tdeltaValueTransformerScript"));
Script239.setDirectOutput(True);
Script239.setMustEvaluate(True);
field& field240 =  field();
field240.setName(CString("newTranslation"));
field240.setAccessType(CString("inputOnly"));
field240.setType(CString("SFVec3f"));
field240.setValue(CString("1 1 1"));
Script239.addChild(&field240);

field& field241 =  field();
field241.setName(CString("tdeltaValue"));
field241.setAccessType(CString("outputOnly"));
field241.setType(CString("SFFloat"));
field241.setValue(CString("1"));
Script239.addChild(&field241);


Script239.setSourceCode(CString("ecmascript: function newTranslation(Value) { tdeltaValue = Value.x; }"));
LayoutLayer105.addChild(&Script239);

ROUTE& ROUTE242 =  ROUTE();
ROUTE242.setFromField(CString("translation_changed"));
ROUTE242.setFromNode(CString("aSensor"));
ROUTE242.setToField(CString("set_translation"));
ROUTE242.setToNode(CString("aTransform"));
LayoutLayer105.addChild(&ROUTE242);

ROUTE& ROUTE243 =  ROUTE();
ROUTE243.setFromField(CString("translation_changed"));
ROUTE243.setFromNode(CString("bSensor"));
ROUTE243.setToField(CString("set_translation"));
ROUTE243.setToNode(CString("bTransform"));
LayoutLayer105.addChild(&ROUTE243);

ROUTE& ROUTE244 =  ROUTE();
ROUTE244.setFromField(CString("translation_changed"));
ROUTE244.setFromNode(CString("cSensor"));
ROUTE244.setToField(CString("set_translation"));
ROUTE244.setToNode(CString("cTransform"));
LayoutLayer105.addChild(&ROUTE244);

ROUTE& ROUTE245 =  ROUTE();
ROUTE245.setFromField(CString("translation_changed"));
ROUTE245.setFromNode(CString("dSensor"));
ROUTE245.setToField(CString("set_translation"));
ROUTE245.setToNode(CString("dTransform"));
LayoutLayer105.addChild(&ROUTE245);

ROUTE& ROUTE246 =  ROUTE();
ROUTE246.setFromField(CString("translation_changed"));
ROUTE246.setFromNode(CString("pdeltaSensor"));
ROUTE246.setToField(CString("set_translation"));
ROUTE246.setToNode(CString("pdeltaTransform"));
LayoutLayer105.addChild(&ROUTE246);

ROUTE& ROUTE247 =  ROUTE();
ROUTE247.setFromField(CString("translation_changed"));
ROUTE247.setFromNode(CString("tdeltaSensor"));
ROUTE247.setToField(CString("set_translation"));
ROUTE247.setToNode(CString("tdeltaTransform"));
LayoutLayer105.addChild(&ROUTE247);

ROUTE& ROUTE248 =  ROUTE();
ROUTE248.setFromField(CString("translation_changed"));
ROUTE248.setFromNode(CString("aSensor"));
ROUTE248.setToField(CString("newTranslation"));
ROUTE248.setToNode(CString("aValueTransformerScript"));
LayoutLayer105.addChild(&ROUTE248);

ROUTE& ROUTE249 =  ROUTE();
ROUTE249.setFromField(CString("translation_changed"));
ROUTE249.setFromNode(CString("bSensor"));
ROUTE249.setToField(CString("newTranslation"));
ROUTE249.setToNode(CString("bValueTransformerScript"));
LayoutLayer105.addChild(&ROUTE249);

ROUTE& ROUTE250 =  ROUTE();
ROUTE250.setFromField(CString("translation_changed"));
ROUTE250.setFromNode(CString("cSensor"));
ROUTE250.setToField(CString("newTranslation"));
ROUTE250.setToNode(CString("cValueTransformerScript"));
LayoutLayer105.addChild(&ROUTE250);

ROUTE& ROUTE251 =  ROUTE();
ROUTE251.setFromField(CString("translation_changed"));
ROUTE251.setFromNode(CString("dSensor"));
ROUTE251.setToField(CString("newTranslation"));
ROUTE251.setToNode(CString("dValueTransformerScript"));
LayoutLayer105.addChild(&ROUTE251);

ROUTE& ROUTE252 =  ROUTE();
ROUTE252.setFromField(CString("translation_changed"));
ROUTE252.setFromNode(CString("pdeltaSensor"));
ROUTE252.setToField(CString("newTranslation"));
ROUTE252.setToNode(CString("pdeltaValueTransformerScript"));
LayoutLayer105.addChild(&ROUTE252);

ROUTE& ROUTE253 =  ROUTE();
ROUTE253.setFromField(CString("translation_changed"));
ROUTE253.setFromNode(CString("tdeltaSensor"));
ROUTE253.setToField(CString("newTranslation"));
ROUTE253.setToNode(CString("tdeltaValueTransformerScript"));
LayoutLayer105.addChild(&ROUTE253);

ROUTE& ROUTE254 =  ROUTE();
ROUTE254.setFromField(CString("aValue"));
ROUTE254.setFromNode(CString("aValueTransformerScript"));
ROUTE254.setToField(CString("a"));
ROUTE254.setToNode(CString("freewrlShader"));
LayoutLayer105.addChild(&ROUTE254);

ROUTE& ROUTE255 =  ROUTE();
ROUTE255.setFromField(CString("bValue"));
ROUTE255.setFromNode(CString("bValueTransformerScript"));
ROUTE255.setToField(CString("b"));
ROUTE255.setToNode(CString("freewrlShader"));
LayoutLayer105.addChild(&ROUTE255);

ROUTE& ROUTE256 =  ROUTE();
ROUTE256.setFromField(CString("cValue"));
ROUTE256.setFromNode(CString("cValueTransformerScript"));
ROUTE256.setToField(CString("c"));
ROUTE256.setToNode(CString("freewrlShader"));
LayoutLayer105.addChild(&ROUTE256);

ROUTE& ROUTE257 =  ROUTE();
ROUTE257.setFromField(CString("dValue"));
ROUTE257.setFromNode(CString("dValueTransformerScript"));
ROUTE257.setToField(CString("d"));
ROUTE257.setToNode(CString("freewrlShader"));
LayoutLayer105.addChild(&ROUTE257);

ROUTE& ROUTE258 =  ROUTE();
ROUTE258.setFromField(CString("pdeltaValue"));
ROUTE258.setFromNode(CString("pdeltaValueTransformerScript"));
ROUTE258.setToField(CString("pdelta"));
ROUTE258.setToNode(CString("freewrlShader"));
LayoutLayer105.addChild(&ROUTE258);

ROUTE& ROUTE259 =  ROUTE();
ROUTE259.setFromField(CString("tdeltaValue"));
ROUTE259.setFromNode(CString("tdeltaValueTransformerScript"));
ROUTE259.setToField(CString("tdelta"));
ROUTE259.setToNode(CString("freewrlShader"));
LayoutLayer105.addChild(&ROUTE259);

Layout& Layout260 =  Layout();
Layout260.setAlign(new CString[]{CString("RIGHT"), CString("BOTTOM")}, 2);
Layout260.setOffset(new float[]{0,0}, 2);
Layout260.setOffsetUnits(new CString[]{CString("WORLD"), CString("WORLD")}, 2);
Layout260.setScaleMode(new CString[]{CString("NONE"), CString("NONE")}, 2);
Layout260.setSize(new float[]{0.4,1}, 2);
Layout260.setSizeUnits(new CString[]{CString("WORLD"), CString("WORLD")}, 2);
LayoutLayer105.setLayout(Layout260);

Viewport& Viewport261 =  Viewport();
Viewport261.setClipBoundary(new float[]{0,1,0,1}, 4);
LayoutLayer105.setViewport(Viewport261);

LayerSet32.addChild(&LayoutLayer105);

Scene31.addChild(&LayerSet32);

X3D0.setScene(&Scene31);

}

#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
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
meta11.setContent(CString("bumpyfreewrljsonverse.x3d"));
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
//basic nodes, which might be present in any scene
NavigationInfo& NavigationInfo32 =  NavigationInfo();
NavigationInfo32.setType(new CString[]{CString("EXAMINE")}, 1);
NavigationInfo32.setAvatarSize(new float[]{0.25,1.75,0.75}, 3);
Scene31.addChild(&NavigationInfo32);

DirectionalLight& DirectionalLight33 =  DirectionalLight();
DirectionalLight33.setAmbientIntensity(0.2);
DirectionalLight33.setDirection(new float[]{0,-1,0});
Scene31.addChild(&DirectionalLight33);

DirectionalLight& DirectionalLight34 =  DirectionalLight();
DirectionalLight34.setAmbientIntensity(0.2);
DirectionalLight34.setDirection(new float[]{-1,-0.1,-1});
Scene31.addChild(&DirectionalLight34);

Viewpoint& Viewpoint35 =  Viewpoint();
Viewpoint35.setDescription(CString("My Overview"));
Viewpoint35.setFieldOfView(1.570796);
Viewpoint35.setPosition(new float[]{0,1.75,60});
Scene31.addChild(&Viewpoint35);

//LayerSet with two layers, navigation happens in layer 1
LayerSet& LayerSet36 =  LayerSet();
LayerSet36.setActiveLayer(1);
LayerSet36.setOrder(new int32_t[]{1,2}, 2);
//the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"
//the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)
Layer& Layer37 =  Layer();
Layer37.setPickable(True);
Layer37.setObjectType(new CString[]{CString("ALL")}, 1);
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

Layer37.addChild(&Group38);

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

Transform& Transform71 =  Transform();
Shape& Shape72 =  Shape();
//<Sphere radius='40'></Sphere>
IndexedFaceSet& IndexedFaceSet73 =  IndexedFaceSet();
IndexedFaceSet73.setConvex(False);
IndexedFaceSet73.setDEF(CString("Orbit"));
Coordinate& Coordinate74 =  Coordinate();
Coordinate74.setDEF(CString("OrbitCoordinates"));
IndexedFaceSet73.setCoord(&Coordinate74);

Shape72.setGeometry(&IndexedFaceSet73);

Appearance& Appearance75 =  Appearance();
Material& Material76 =  Material();
Material76.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material76.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance75.addChild(&Material76);

ComposedCubeMapTexture& ComposedCubeMapTexture77 =  ComposedCubeMapTexture();
ComposedCubeMapTexture77.setDEF(CString("texture"));
ImageTexture& ImageTexture78 =  ImageTexture();
ImageTexture78.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
ComposedCubeMapTexture77.setBack(ImageTexture78);

ImageTexture& ImageTexture79 =  ImageTexture();
ImageTexture79.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
ComposedCubeMapTexture77.setBottom(ImageTexture79);

ImageTexture& ImageTexture80 =  ImageTexture();
ImageTexture80.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
ComposedCubeMapTexture77.setFront(ImageTexture80);

ImageTexture& ImageTexture81 =  ImageTexture();
ImageTexture81.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
ComposedCubeMapTexture77.setLeft(ImageTexture81);

ImageTexture& ImageTexture82 =  ImageTexture();
ImageTexture82.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
ComposedCubeMapTexture77.setRight(ImageTexture82);

ImageTexture& ImageTexture83 =  ImageTexture();
ImageTexture83.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
ComposedCubeMapTexture77.setTop(ImageTexture83);

Appearance75.addChild(&ComposedCubeMapTexture77);

ComposedShader& ComposedShader84 =  ComposedShader();
ComposedShader84.setDEF(CString("freewrlShader"));
ComposedShader84.setLanguage(CString("GLSL"));
field& field85 =  field();
field85.setName(CString("chromaticDispertion"));
field85.setAccessType(CString("inputOnly"));
field85.setType(CString("SFVec3f"));
field85.setValue(CString("0.98 1 1.033"));
ComposedShader84.addChild(&field85);

field& field86 =  field();
field86.setName(CString("fw_textureCoordGenType"));
field86.setAccessType(CString("inputOnly"));
field86.setType(CString("SFInt32"));
field86.setValue(CString("0"));
ComposedShader84.addChild(&field86);

field& field87 =  field();
field87.setName(CString("bias"));
field87.setType(CString("SFFloat"));
field87.setAccessType(CString("inputOnly"));
field87.setValue(CString("0.5"));
ComposedShader84.addChild(&field87);

field& field88 =  field();
field88.setName(CString("scale"));
field88.setType(CString("SFFloat"));
field88.setAccessType(CString("inputOnly"));
field88.setValue(CString("0.5"));
ComposedShader84.addChild(&field88);

field& field89 =  field();
field89.setName(CString("power"));
field89.setType(CString("SFFloat"));
field89.setAccessType(CString("inputOnly"));
field89.setValue(CString("2"));
ComposedShader84.addChild(&field89);

field& field90 =  field();
field90.setName(CString("a"));
field90.setType(CString("SFFloat"));
field90.setAccessType(CString("inputOutput"));
field90.setValue(CString("15"));
ComposedShader84.addChild(&field90);

field& field91 =  field();
field91.setName(CString("b"));
field91.setType(CString("SFFloat"));
field91.setAccessType(CString("inputOutput"));
field91.setValue(CString("5"));
ComposedShader84.addChild(&field91);

field& field92 =  field();
field92.setName(CString("c"));
field92.setType(CString("SFFloat"));
field92.setAccessType(CString("inputOutput"));
field92.setValue(CString("5"));
ComposedShader84.addChild(&field92);

field& field93 =  field();
field93.setName(CString("d"));
field93.setType(CString("SFFloat"));
field93.setAccessType(CString("inputOutput"));
field93.setValue(CString("5"));
ComposedShader84.addChild(&field93);

field& field94 =  field();
field94.setName(CString("tdelta"));
field94.setType(CString("SFFloat"));
field94.setAccessType(CString("inputOutput"));
field94.setValue(CString("0"));
ComposedShader84.addChild(&field94);

field& field95 =  field();
field95.setName(CString("pdelta"));
field95.setType(CString("SFFloat"));
field95.setAccessType(CString("inputOutput"));
field95.setValue(CString("0"));
ComposedShader84.addChild(&field95);

ShaderPart& ShaderPart96 =  ShaderPart();
ShaderPart96.setUrl(new CString[]{CString("../shaders/freewrl_flowers_chromatic.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs")}, 2);
ShaderPart96.setType(CString("VERTEX"));
ComposedShader84.setParts(&ShaderPart96);

ShaderPart& ShaderPart97 =  ShaderPart();
ShaderPart97.setUrl(new CString[]{CString("../shaders/freewrl.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs")}, 2);
ShaderPart97.setType(CString("FRAGMENT"));
ComposedShader84.setParts(&ShaderPart97);

//TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/freewrl.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/freewrl_bubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>
Appearance75.addChild(&ComposedShader84);

Shape72.addChild(&Appearance75);

Transform71.addChild(&Shape72);

Transform69.addChild(&Transform71);

Layer37.addChild(&Transform69);

Script& Script98 =  Script();
Script98.setDEF(CString("OrbitScript"));
field& field99 =  field();
field99.setName(CString("coordinates"));
field99.setAccessType(CString("inputOutput"));
field99.setType(CString("MFVec3f"));
Script98.addChild(&field99);

field& field100 =  field();
field100.setName(CString("coordIndexes"));
field100.setAccessType(CString("outputOnly"));
field100.setType(CString("MFInt32"));
Script98.addChild(&field100);

field& field101 =  field();
field101.setName(CString("a"));
field101.setType(CString("SFFloat"));
field101.setAccessType(CString("inputOutput"));
field101.setValue(CString("10"));
Script98.addChild(&field101);

field& field102 =  field();
field102.setName(CString("b"));
field102.setType(CString("SFFloat"));
field102.setAccessType(CString("inputOutput"));
field102.setValue(CString("10"));
Script98.addChild(&field102);

field& field103 =  field();
field103.setName(CString("c"));
field103.setType(CString("SFFloat"));
field103.setAccessType(CString("inputOutput"));
field103.setValue(CString("2"));
Script98.addChild(&field103);

field& field104 =  field();
field104.setName(CString("d"));
field104.setType(CString("SFFloat"));
field104.setAccessType(CString("inputOutput"));
field104.setValue(CString("2"));
Script98.addChild(&field104);

field& field105 =  field();
field105.setName(CString("pdelta"));
field105.setType(CString("SFFloat"));
field105.setAccessType(CString("inputOutput"));
field105.setValue(CString("0"));
Script98.addChild(&field105);

field& field106 =  field();
field106.setName(CString("tdelta"));
field106.setType(CString("SFFloat"));
field106.setAccessType(CString("inputOutput"));
field106.setValue(CString("0"));
Script98.addChild(&field106);


Script98.setSourceCode(CString("ecmascript:")+
_T("function initialize() {")+
_T("     var resolution = 100;")+
_T("     var theta = 0.0;")+
_T("     var phi = 0.0;")+
_T("     var delta = (2 * 3.141592653) / (resolution-1);")+
_T("     var crds = new MFVec3f();")+
_T("     var vecCount = 0;")+
_T("     for ( i = 0; i < resolution; i++) {")+
_T("     	for ( j = 0; j < resolution; j++) {")+
_T("		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);")+
_T("		crds[vecCount] = new SFVec3f(")+
_T("			rho * Math.cos(phi) * Math.cos(theta),")+
_T("			rho * Math.cos(phi) * Math.sin(theta),")+
_T("			rho * Math.sin(phi)")+
_T("		);")+
_T("		vecCount++;")+
_T("		theta += delta;")+
_T("	}")+
_T("	phi += delta;")+
_T("     }")+
_T("     coordinates = crds;")+
_T("     // coordinates = new MFVec3f(...crds);")+
_T("     var cis = new MFInt32();")+
_T("     var intCount = 0;")+
_T("     for ( i = 0; i < resolution-1; i++) {")+
_T("     	for ( j = 0; j < resolution-1; j++) {")+
_T("	     cis[intCount++] = i*resolution+j;")+
_T("	     cis[intCount++] = i*resolution+j+1;")+
_T("	     cis[intCount++] = (i+1)*resolution+j+1;")+
_T("	     cis[intCount++] = (i+1)*resolution+j;")+
_T("	     cis[intCount++] = -1;")+
_T("	}")+
_T("    }")+
_T("    coordIndexes = cis;")+
_T("    // coordIndexes = new MFInt32(...cis);")+
_T("}"));
Layer37.addChild(&Script98);

ROUTE& ROUTE107 =  ROUTE();
ROUTE107.setFromField(CString("coordIndexes"));
ROUTE107.setFromNode(CString("OrbitScript"));
ROUTE107.setToField(CString("set_coordIndex"));
ROUTE107.setToNode(CString("Orbit"));
Layer37.addChild(&ROUTE107);

ROUTE& ROUTE108 =  ROUTE();
ROUTE108.setFromField(CString("coordinates"));
ROUTE108.setFromNode(CString("OrbitScript"));
ROUTE108.setToField(CString("set_point"));
ROUTE108.setToNode(CString("OrbitCoordinates"));
Layer37.addChild(&ROUTE108);

//DIS multiuser facilities
DISEntityManager& DISEntityManager109 =  DISEntityManager();
DISEntityManager109.setDEF(CString("EntityManager"));
DISEntityManager109.setNetworkMode("networkReader");
DISEntityTypeMapping& DISEntityTypeMapping110 =  DISEntityTypeMapping();
DISEntityTypeMapping110.setReadInterval("3");
DISEntityTypeMapping110.setCategory(77);
DISEntityTypeMapping110.setSpecific(1);
DISEntityTypeMapping110.setUrl(new CString[]{CString("../data/Gramps8Final.x3d"), CString("https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d")}, 2);
DISEntityManager109.setMapping(&DISEntityTypeMapping110);

DISEntityTypeMapping& DISEntityTypeMapping111 =  DISEntityTypeMapping();
DISEntityTypeMapping111.setReadInterval("3");
DISEntityTypeMapping111.setCategory(77);
DISEntityTypeMapping111.setSpecific(2);
DISEntityTypeMapping111.setUrl(new CString[]{CString("../data/Leif8Final.x3d"), CString("https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d")}, 2);
DISEntityManager109.setMapping(&DISEntityTypeMapping111);

DISEntityTypeMapping& DISEntityTypeMapping112 =  DISEntityTypeMapping();
DISEntityTypeMapping112.setReadInterval("3");
DISEntityTypeMapping112.setCategory(77);
DISEntityTypeMapping112.setSpecific(3);
DISEntityTypeMapping112.setUrl(new CString[]{CString("../data/Lily8Final.x3d"), CString("https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d")}, 2);
DISEntityManager109.setMapping(&DISEntityTypeMapping112);

DISEntityTypeMapping& DISEntityTypeMapping113 =  DISEntityTypeMapping();
DISEntityTypeMapping113.setReadInterval("3");
DISEntityTypeMapping113.setCategory(77);
DISEntityTypeMapping113.setSpecific(4);
DISEntityTypeMapping113.setUrl(new CString[]{CString("../data/Tufani8Final.x3d"), CString("https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d")}, 2);
DISEntityManager109.setMapping(&DISEntityTypeMapping113);

Layer37.addChild(&DISEntityManager109);

Collision& Collision114 =  Collision();
Collision114.setEnabled(False);
Group& Group115 =  Group();
Group115.setDEF(CString("AvatarHolder"));
Collision114.addChildren(&Group115);

Layer37.addChild(&Collision114);

ROUTE& ROUTE116 =  ROUTE();
ROUTE116.setFromField(CString("addedEntities"));
ROUTE116.setFromNode(CString("EntityManager"));
ROUTE116.setToField(CString("addChildren"));
ROUTE116.setToNode(CString("AvatarHolder"));
Layer37.addChild(&ROUTE116);

ROUTE& ROUTE117 =  ROUTE();
ROUTE117.setFromField(CString("removedEntities"));
ROUTE117.setFromNode(CString("EntityManager"));
ROUTE117.setToField(CString("removeChildren"));
ROUTE117.setToNode(CString("AvatarHolder"));
Layer37.addChild(&ROUTE117);

LayerSet36.addChild(&Layer37);

LayoutLayer& LayoutLayer118 =  LayoutLayer();
LayoutLayer118.setPickable(True);
LayoutLayer118.setObjectType(new CString[]{CString("ALL")}, 1);
//positioning the LayoutLayer
//clipping the LayoutLayer
//the content (children) of the LayoutLayer
//first, the slider for scaling the model
Transform& Transform119 =  Transform();
Transform119.setTranslation(new float[]{0,0,-3});
Shape& Shape120 =  Shape();
Appearance& Appearance121 =  Appearance();
Material& Material122 =  Material();
Material122.setDiffuseColor(new float[]{0,0,0});
Material122.setTransparency(0.7);
Appearance121.addChild(&Material122);

Shape120.addChild(&Appearance121);

Box& Box123 =  Box();
Box123.setSize(new float[]{100,100,0.02});
Shape120.setGeometry(&Box123);

Transform119.addChild(&Shape120);

LayoutLayer118.addChild(&Transform119);

Transform& Transform124 =  Transform();
Transform124.setDEF(CString("equationTransform"));
Transform& Transform125 =  Transform();
Transform125.setTranslation(new float[]{0,0,-20});
Shape& Shape126 =  Shape();
Text& Text127 =  Text();
Text127.setDEF(CString("equation"));
Text127.setString(new CString[]{CString("r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)")}, 1);
CFontStyle& FontStyle128 =  CFontStyle();
FontStyle128.setSize(0.09);
Text127.setFontStyle(&FontStyle128);

Shape126.setGeometry(&Text127);

Appearance& Appearance129 =  Appearance();
Material& Material130 =  Material();
Material130.setDiffuseColor(new float[]{1,1,0});
Appearance129.addChild(&Material130);

Shape126.addChild(&Appearance129);

Transform125.addChild(&Shape126);

Transform124.addChild(&Transform125);

LayoutLayer118.addChild(&Transform124);

ProtoDeclare& ProtoDeclare131 =  ProtoDeclare();
ProtoDeclare131.setName(CString("SliderProto"));
ProtoInterface& ProtoInterface132 =  ProtoInterface();
field& field133 =  field();
field133.setName(CString("sliderTranslation"));
field133.setAccessType(CString("inputOutput"));
field133.setType(CString("SFVec3f"));
field133.setValue(CString("0 0.7 0"));
ProtoInterface132.addChild(&field133);

field& field134 =  field();
field134.setName(CString("transformTranslation"));
field134.setAccessType(CString("inputOutput"));
field134.setType(CString("SFVec3f"));
field134.setValue(CString("0 0 0.1"));
ProtoInterface132.addChild(&field134);

field& field135 =  field();
field135.setName(CString("sensorTranslation"));
field135.setAccessType(CString("inputOutput"));
field135.setType(CString("SFVec3f"));
field135.setValue(CString("0 0 0"));
ProtoInterface132.addChild(&field135);

field& field136 =  field();
field136.setName(CString("textString"));
field136.setAccessType(CString("inputOutput"));
field136.setType(CString("MFString"));
field136.setValue(CString("\"a=\""));
ProtoInterface132.addChild(&field136);

field& field137 =  field();
field137.setName(CString("parameterScale"));
field137.setAccessType(CString("inputOutput"));
field137.setType(CString("SFFloat"));
field137.setValue(CString("30"));
ProtoInterface132.addChild(&field137);

field& field138 =  field();
field138.setName(CString("parameterName"));
field138.setAccessType(CString("inputOutput"));
field138.setType(CString("SFString"));
field138.setValue(CString("a"));
ProtoInterface132.addChild(&field138);

field& field139 =  field();
field139.setName(CString("shaderNode"));
field139.setAccessType(CString("inputOutput"));
field139.setType(CString("SFNode"));
ProtoInterface132.addChild(&field139);

ProtoDeclare131.addChild(&ProtoInterface132);

ProtoBody& ProtoBody140 =  ProtoBody();
Group& Group141 =  Group();
Transform& Transform142 =  Transform();
Transform142.setDEF(CString("protoSlider"));
Transform142.setTranslation(new float[]{0,0.7,0});
IS& IS143 =  IS();
Connect& connect144 =  Connect();
connect144.setNodeField(CString("translation"));
connect144.setProtoField(CString("sliderTranslation"));
IS143.addChild(&connect144);

Transform142.addChild(&IS143);

Transform& Transform145 =  Transform();
Transform145.setDEF(CString("protoTransform"));
Transform145.setTranslation(new float[]{0,0,0.1});
IS& IS146 =  IS();
Connect& connect147 =  Connect();
connect147.setNodeField(CString("translation"));
connect147.setProtoField(CString("sensorTranslation"));
IS146.addChild(&connect147);

Transform145.addChild(&IS146);

PlaneSensor& PlaneSensor148 =  PlaneSensor();
PlaneSensor148.setDEF(CString("protoSensor"));
PlaneSensor148.setMaxPosition(new float[]{1,0});
Transform145.addChild(&PlaneSensor148);

Transform& Transform149 =  Transform();
Transform149.setTranslation(new float[]{0,0,0});
TouchSensor& TouchSensor150 =  TouchSensor();
TouchSensor150.setDEF(CString("protoTS"));
Transform149.addChild(&TouchSensor150);

Transform145.addChild(&Transform149);

Transform& Transform151 =  Transform();
Shape& Shape152 =  Shape();
Text& Text153 =  Text();
Text153.setDEF(CString("protoText"));
Text153.setString(new CString[]{CString("a=")}, 1);
IS& IS154 =  IS();
Connect& connect155 =  Connect();
connect155.setNodeField(CString("string"));
connect155.setProtoField(CString("textString"));
IS154.addChild(&connect155);

Text153.addChild(&IS154);

CFontStyle& FontStyle156 =  CFontStyle();
FontStyle156.setSize(0.23);
Text153.setFontStyle(&FontStyle156);

Shape152.setGeometry(&Text153);

Appearance& Appearance157 =  Appearance();
Material& Material158 =  Material();
Appearance157.addChild(&Material158);

Shape152.addChild(&Appearance157);

Transform151.addChild(&Shape152);

Transform145.addChild(&Transform151);

Transform142.addChild(&Transform145);

Group141.addChild(&Transform142);

Script& Script159 =  Script();
Script159.setDEF(CString("protoValueTransformerScript"));
Script159.setDirectOutput(True);
Script159.setMustEvaluate(True);
field& field160 =  field();
field160.setName(CString("protoScale"));
field160.setAccessType(CString("inputOutput"));
field160.setType(CString("SFFloat"));
field160.setValue(CString("30"));
Script159.addChild(&field160);

field& field161 =  field();
field161.setName(CString("protoParameterName"));
field161.setAccessType(CString("inputOutput"));
field161.setType(CString("SFString"));
field161.setValue(CString("a"));
Script159.addChild(&field161);

field& field162 =  field();
field162.setName(CString("shader"));
field162.setAccessType(CString("inputOutput"));
field162.setType(CString("SFNode"));
Script159.addChild(&field162);

field& field163 =  field();
field163.setName(CString("newTranslation"));
field163.setAccessType(CString("inputOnly"));
field163.setType(CString("SFVec3f"));
field163.setValue(CString("1 1 1"));
Script159.addChild(&field163);

field& field164 =  field();
field164.setName(CString("protoValue_changed"));
field164.setAccessType(CString("outputOnly"));
field164.setType(CString("SFFloat"));
field164.setValue(CString("1"));
Script159.addChild(&field164);

field& field165 =  field();
field165.setName(CString("protoText_changed"));
field165.setAccessType(CString("outputOnly"));
field165.setType(CString("MFString"));
field165.setValue(CString("\"1.0\""));
Script159.addChild(&field165);

IS& IS166 =  IS();
Connect& connect167 =  Connect();
connect167.setNodeField(CString("protoScale"));
connect167.setProtoField(CString("parameterScale"));
IS166.addChild(&connect167);

Connect& connect168 =  Connect();
connect168.setNodeField(CString("protoParameterName"));
connect168.setProtoField(CString("parameterName"));
IS166.addChild(&connect168);

Connect& connect169 =  Connect();
connect169.setNodeField(CString("shader"));
connect169.setProtoField(CString("shaderNode"));
IS166.addChild(&connect169);

Script159.addChild(&IS166);


Script159.setSourceCode(CString("ecmascript:")+
_T("const newTranslation = function(Value) {")+
_T("	'use strict';")+
_T("	protoValue_changed = Value.x * protoScale;")+
_T("	protoText_changed = new MFString(protoParameterName+'='+protoValue_changed.toFixed(2));")+
_T("        var orientation = Value.x;")+
_T("        var ps = Browser.currentScene.getNamedNode(\"protoSensor\");")+
_T("        var t = Browser.currentScene.getNamedNode(\"protoTransform\");")+
_T("        var txt = Browser.currentScene.getNamedNode(\"protoText\");")+
_T("        if (shader) {")+
_T("            shader.getField(protoParameterName).setValue(orientation * protoScale);")+
_T("        }")+
_T("        if (txt) {")+
_T("            var stringField = txt.getField(\"string\");")+
_T("            var label = protoParameterName;")+
_T("            stringField.setValue(new MFString(label+\"=\"+(orientation * protoScale).toFixed(2)));")+
_T("        }")+
_T("        if (ps) {")+
_T("            ps.offset = new SFVec3f(orientation, ps.offset[1], ps.offset[2]);")+
_T("        }")+
_T("        if (t) {")+
_T("            t.translation = new SFVec3f(orientation, t.translation[1], t.translation[2]);")+
_T("        }")+
_T("}"));
Group141.addChild(&Script159);

ROUTE& ROUTE170 =  ROUTE();
ROUTE170.setFromField(CString("translation_changed"));
ROUTE170.setFromNode(CString("protoSensor"));
ROUTE170.setToField(CString("set_translation"));
ROUTE170.setToNode(CString("protoTransform"));
Group141.addChild(&ROUTE170);

ROUTE& ROUTE171 =  ROUTE();
ROUTE171.setFromField(CString("translation_changed"));
ROUTE171.setFromNode(CString("protoSensor"));
ROUTE171.setToField(CString("newTranslation"));
ROUTE171.setToNode(CString("protoValueTransformerScript"));
Group141.addChild(&ROUTE171);

ROUTE& ROUTE172 =  ROUTE();
ROUTE172.setFromField(CString("protoText_changed"));
ROUTE172.setFromNode(CString("protoValueTransformerScript"));
ROUTE172.setToField(CString("string"));
ROUTE172.setToNode(CString("protoText"));
Group141.addChild(&ROUTE172);

ProtoBody140.addChild(&Group141);

ProtoDeclare131.addChild(&ProtoBody140);

LayoutLayer118.addChild(&ProtoDeclare131);

ProtoInstance& ProtoInstance173 =  ProtoInstance();
ProtoInstance173.setName(CString("SliderProto"));
ProtoInstance173.setDEF(CString("aPI"));
fieldValue& fieldValue174 =  fieldValue();
fieldValue174.setName(CString("sliderTranslation"));
fieldValue174.setValue(CString("0 0.7 0"));
ProtoInstance173.addChild(&fieldValue174);

fieldValue& fieldValue175 =  fieldValue();
fieldValue175.setName(CString("transformTranslation"));
fieldValue175.setValue(CString("0 0 0.1"));
ProtoInstance173.addChild(&fieldValue175);

fieldValue& fieldValue176 =  fieldValue();
fieldValue176.setName(CString("sensorTranslation"));
fieldValue176.setValue(CString("0 0 0"));
ProtoInstance173.addChild(&fieldValue176);

fieldValue& fieldValue177 =  fieldValue();
fieldValue177.setName(CString("textString"));
fieldValue177.setValue(CString("\"a=\""));
ProtoInstance173.addChild(&fieldValue177);

fieldValue& fieldValue178 =  fieldValue();
fieldValue178.setName(CString("parameterScale"));
fieldValue178.setValue(CString("30"));
ProtoInstance173.addChild(&fieldValue178);

fieldValue& fieldValue179 =  fieldValue();
fieldValue179.setName(CString("parameterName"));
fieldValue179.setValue(CString("a"));
ProtoInstance173.addChild(&fieldValue179);

fieldValue& fieldValue180 =  fieldValue();
fieldValue180.setName(CString("shaderNode"));
ComposedShader& ComposedShader181 =  ComposedShader();
ComposedShader181.setUSE(CString("freewrlShader"));
fieldValue180.addChild(&ComposedShader181);

ProtoInstance173.addChild(&fieldValue180);

LayoutLayer118.addChild(&ProtoInstance173);

ProtoInstance& ProtoInstance182 =  ProtoInstance();
ProtoInstance182.setName(CString("SliderProto"));
ProtoInstance182.setDEF(CString("bPI"));
fieldValue& fieldValue183 =  fieldValue();
fieldValue183.setName(CString("sliderTranslation"));
fieldValue183.setValue(CString("0 0.4 0"));
ProtoInstance182.addChild(&fieldValue183);

fieldValue& fieldValue184 =  fieldValue();
fieldValue184.setName(CString("transformTranslation"));
fieldValue184.setValue(CString("0 0 0.1"));
ProtoInstance182.addChild(&fieldValue184);

fieldValue& fieldValue185 =  fieldValue();
fieldValue185.setName(CString("sensorTranslation"));
fieldValue185.setValue(CString("0 0 0"));
ProtoInstance182.addChild(&fieldValue185);

fieldValue& fieldValue186 =  fieldValue();
fieldValue186.setName(CString("textString"));
fieldValue186.setValue(CString("\"b=\""));
ProtoInstance182.addChild(&fieldValue186);

fieldValue& fieldValue187 =  fieldValue();
fieldValue187.setName(CString("parameterScale"));
fieldValue187.setValue(CString("30"));
ProtoInstance182.addChild(&fieldValue187);

fieldValue& fieldValue188 =  fieldValue();
fieldValue188.setName(CString("parameterName"));
fieldValue188.setValue(CString("b"));
ProtoInstance182.addChild(&fieldValue188);

fieldValue& fieldValue189 =  fieldValue();
fieldValue189.setName(CString("shaderNode"));
ComposedShader& ComposedShader190 =  ComposedShader();
ComposedShader190.setUSE(CString("freewrlShader"));
fieldValue189.addChild(&ComposedShader190);

ProtoInstance182.addChild(&fieldValue189);

LayoutLayer118.addChild(&ProtoInstance182);

ProtoInstance& ProtoInstance191 =  ProtoInstance();
ProtoInstance191.setName(CString("SliderProto"));
ProtoInstance191.setDEF(CString("cPI"));
fieldValue& fieldValue192 =  fieldValue();
fieldValue192.setName(CString("sliderTranslation"));
fieldValue192.setValue(CString("0 0.1 0"));
ProtoInstance191.addChild(&fieldValue192);

fieldValue& fieldValue193 =  fieldValue();
fieldValue193.setName(CString("transformTranslation"));
fieldValue193.setValue(CString("0 0 0.1"));
ProtoInstance191.addChild(&fieldValue193);

fieldValue& fieldValue194 =  fieldValue();
fieldValue194.setName(CString("sensorTranslation"));
fieldValue194.setValue(CString("0 0 0"));
ProtoInstance191.addChild(&fieldValue194);

fieldValue& fieldValue195 =  fieldValue();
fieldValue195.setName(CString("textString"));
fieldValue195.setValue(CString("\"c=\""));
ProtoInstance191.addChild(&fieldValue195);

fieldValue& fieldValue196 =  fieldValue();
fieldValue196.setName(CString("parameterScale"));
fieldValue196.setValue(CString("20"));
ProtoInstance191.addChild(&fieldValue196);

fieldValue& fieldValue197 =  fieldValue();
fieldValue197.setName(CString("parameterName"));
fieldValue197.setValue(CString("c"));
ProtoInstance191.addChild(&fieldValue197);

fieldValue& fieldValue198 =  fieldValue();
fieldValue198.setName(CString("shaderNode"));
ComposedShader& ComposedShader199 =  ComposedShader();
ComposedShader199.setUSE(CString("freewrlShader"));
fieldValue198.addChild(&ComposedShader199);

ProtoInstance191.addChild(&fieldValue198);

LayoutLayer118.addChild(&ProtoInstance191);

ProtoInstance& ProtoInstance200 =  ProtoInstance();
ProtoInstance200.setName(CString("SliderProto"));
ProtoInstance200.setDEF(CString("dPI"));
fieldValue& fieldValue201 =  fieldValue();
fieldValue201.setName(CString("sliderTranslation"));
fieldValue201.setValue(CString("0 -0.2 0"));
ProtoInstance200.addChild(&fieldValue201);

fieldValue& fieldValue202 =  fieldValue();
fieldValue202.setName(CString("transformTranslation"));
fieldValue202.setValue(CString("0 0 0.1"));
ProtoInstance200.addChild(&fieldValue202);

fieldValue& fieldValue203 =  fieldValue();
fieldValue203.setName(CString("sensorTranslation"));
fieldValue203.setValue(CString("0 0 0"));
ProtoInstance200.addChild(&fieldValue203);

fieldValue& fieldValue204 =  fieldValue();
fieldValue204.setName(CString("textString"));
fieldValue204.setValue(CString("\"d=\""));
ProtoInstance200.addChild(&fieldValue204);

fieldValue& fieldValue205 =  fieldValue();
fieldValue205.setName(CString("parameterScale"));
fieldValue205.setValue(CString("20"));
ProtoInstance200.addChild(&fieldValue205);

fieldValue& fieldValue206 =  fieldValue();
fieldValue206.setName(CString("parameterName"));
fieldValue206.setValue(CString("d"));
ProtoInstance200.addChild(&fieldValue206);

fieldValue& fieldValue207 =  fieldValue();
fieldValue207.setName(CString("shaderNode"));
ComposedShader& ComposedShader208 =  ComposedShader();
ComposedShader208.setUSE(CString("freewrlShader"));
fieldValue207.addChild(&ComposedShader208);

ProtoInstance200.addChild(&fieldValue207);

LayoutLayer118.addChild(&ProtoInstance200);

ProtoInstance& ProtoInstance209 =  ProtoInstance();
ProtoInstance209.setName(CString("SliderProto"));
ProtoInstance209.setDEF(CString("tdeltaPI"));
fieldValue& fieldValue210 =  fieldValue();
fieldValue210.setName(CString("sliderTranslation"));
fieldValue210.setValue(CString("0 -0.5 0"));
ProtoInstance209.addChild(&fieldValue210);

fieldValue& fieldValue211 =  fieldValue();
fieldValue211.setName(CString("transformTranslation"));
fieldValue211.setValue(CString("0 0 0.1"));
ProtoInstance209.addChild(&fieldValue211);

fieldValue& fieldValue212 =  fieldValue();
fieldValue212.setName(CString("sensorTranslation"));
fieldValue212.setValue(CString("0 0 0"));
ProtoInstance209.addChild(&fieldValue212);

fieldValue& fieldValue213 =  fieldValue();
fieldValue213.setName(CString("textString"));
fieldValue213.setValue(CString("\"tdelta=\""));
ProtoInstance209.addChild(&fieldValue213);

fieldValue& fieldValue214 =  fieldValue();
fieldValue214.setName(CString("parameterScale"));
fieldValue214.setValue(CString("6.28"));
ProtoInstance209.addChild(&fieldValue214);

fieldValue& fieldValue215 =  fieldValue();
fieldValue215.setName(CString("parameterName"));
fieldValue215.setValue(CString("tdelta"));
ProtoInstance209.addChild(&fieldValue215);

fieldValue& fieldValue216 =  fieldValue();
fieldValue216.setName(CString("shaderNode"));
ComposedShader& ComposedShader217 =  ComposedShader();
ComposedShader217.setUSE(CString("freewrlShader"));
fieldValue216.addChild(&ComposedShader217);

ProtoInstance209.addChild(&fieldValue216);

LayoutLayer118.addChild(&ProtoInstance209);

ProtoInstance& ProtoInstance218 =  ProtoInstance();
ProtoInstance218.setName(CString("SliderProto"));
ProtoInstance218.setDEF(CString("pdeltaPI"));
fieldValue& fieldValue219 =  fieldValue();
fieldValue219.setName(CString("sliderTranslation"));
fieldValue219.setValue(CString("0 -0.8 0"));
ProtoInstance218.addChild(&fieldValue219);

fieldValue& fieldValue220 =  fieldValue();
fieldValue220.setName(CString("transformTranslation"));
fieldValue220.setValue(CString("0 0 0.1"));
ProtoInstance218.addChild(&fieldValue220);

fieldValue& fieldValue221 =  fieldValue();
fieldValue221.setName(CString("sensorTranslation"));
fieldValue221.setValue(CString("0 0 0"));
ProtoInstance218.addChild(&fieldValue221);

fieldValue& fieldValue222 =  fieldValue();
fieldValue222.setName(CString("textString"));
fieldValue222.setValue(CString("\"pdelta=\""));
ProtoInstance218.addChild(&fieldValue222);

fieldValue& fieldValue223 =  fieldValue();
fieldValue223.setName(CString("parameterScale"));
fieldValue223.setValue(CString("6.28"));
ProtoInstance218.addChild(&fieldValue223);

fieldValue& fieldValue224 =  fieldValue();
fieldValue224.setName(CString("parameterName"));
fieldValue224.setValue(CString("pdelta"));
ProtoInstance218.addChild(&fieldValue224);

fieldValue& fieldValue225 =  fieldValue();
fieldValue225.setName(CString("shaderNode"));
ComposedShader& ComposedShader226 =  ComposedShader();
ComposedShader226.setUSE(CString("freewrlShader"));
fieldValue225.addChild(&ComposedShader226);

ProtoInstance218.addChild(&fieldValue225);

LayoutLayer118.addChild(&ProtoInstance218);

Layout& Layout227 =  Layout();
Layout227.setAlign(new CString[]{CString("LEFT"), CString("BOTTOM")}, 2);
Layout227.setOffset(new float[]{-0.2,0.19}, 2);
Layout227.setOffsetUnits(new CString[]{CString("WORLD"), CString("WORLD")}, 2);
Layout227.setScaleMode(new CString[]{CString("NONE"), CString("NONE")}, 2);
Layout227.setSize(new float[]{0.4,0.6}, 2);
Layout227.setSizeUnits(new CString[]{CString("WORLD"), CString("WORLD")}, 2);
LayoutLayer118.setLayout(Layout227);

Viewport& Viewport228 =  Viewport();
Viewport228.setClipBoundary(new float[]{0,1,0,1}, 4);
LayoutLayer118.setViewport(Viewport228);

LayerSet36.addChild(&LayoutLayer118);

Scene31.addChild(&LayerSet36);

X3D0.setScene(&Scene31);

}

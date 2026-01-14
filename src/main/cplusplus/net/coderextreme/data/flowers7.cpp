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
X3D0.setProfile(CString("Immersive"));
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
component8.setName(CString("Shape"));
component8.setLevel(4);
head1.addChild(&component8);

component& component9 =  component();
component9.setName(CString("Grouping"));
component9.setLevel(3);
head1.addChild(&component9);

component& component10 =  component();
component10.setName(CString("Core"));
component10.setLevel(1);
head1.addChild(&component10);

meta& meta11 =  meta();
meta11.setName(CString("title"));
meta11.setContent(CString("flowers7.x3d"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("creator"));
meta12.setContent(CString("John Carlson"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("generator"));
meta13.setContent(CString("manual"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("identifier"));
meta14.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("description"));
meta15.setContent(CString("a flower"));
head1.addMeta(&meta15);

X3D0.setHead(&head1);

Scene& Scene16 =  Scene();
NavigationInfo& NavigationInfo17 =  NavigationInfo();
Scene16.addChild(&NavigationInfo17);

//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background& Background18 =  Background();
Background18.setDEF(CString("background"));
Background18.setBackUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png")}, 2);
Background18.setBottomUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")}, 2);
Background18.setFrontUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png")}, 2);
Background18.setLeftUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png")}, 2);
Background18.setRightUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png")}, 2);
Background18.setTopUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png")}, 2);
Scene16.addChild(&Background18);

Viewpoint& Viewpoint19 =  Viewpoint();
Viewpoint19.setPosition(new float[]{0,0,40});
Viewpoint19.setDescription(CString("Transparent rose"));
Scene16.addChild(&Viewpoint19);

Transform& Transform20 =  Transform();
Shape& Shape21 =  Shape();
Appearance& Appearance22 =  Appearance();
Material& Material23 =  Material();
Material23.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material23.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance22.addChild(&Material23);

ComposedCubeMapTexture& ComposedCubeMapTexture24 =  ComposedCubeMapTexture();
ComposedCubeMapTexture24.setDEF(CString("texture"));
ImageTexture& ImageTexture25 =  ImageTexture();
ImageTexture25.setDEF(CString("backShader"));
ImageTexture25.setUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png")}, 2);
ComposedCubeMapTexture24.setBack(ImageTexture25);

ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setDEF(CString("bottomShader"));
ImageTexture26.setUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")}, 2);
ComposedCubeMapTexture24.setBottom(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setDEF(CString("frontShader"));
ImageTexture27.setUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png")}, 2);
ComposedCubeMapTexture24.setFront(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setDEF(CString("leftShader"));
ImageTexture28.setUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png")}, 2);
ComposedCubeMapTexture24.setLeft(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setDEF(CString("rightShader"));
ImageTexture29.setUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png")}, 2);
ComposedCubeMapTexture24.setRight(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setDEF(CString("topShader"));
ImageTexture30.setUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png")}, 2);
ComposedCubeMapTexture24.setTop(ImageTexture30);

Appearance22.addChild(&ComposedCubeMapTexture24);

ComposedShader& ComposedShader31 =  ComposedShader();
ComposedShader31.setDEF(CString("x3dom"));
ComposedShader31.setLanguage(CString("GLSL"));
//TODO VERIFY <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field>
field& field32 =  field();
field32.setName(CString("cube"));
field32.setType(CString("SFNode"));
field32.setAccessType(CString("inputOutput"));
ComposedCubeMapTexture& ComposedCubeMapTexture33 =  ComposedCubeMapTexture();
ComposedCubeMapTexture33.setUSE(CString("texture"));
field32.addChild(&ComposedCubeMapTexture33);

ComposedShader31.addChild(&field32);

field& field34 =  field();
field34.setName(CString("chromaticDispertion"));
field34.setAccessType(CString("initializeOnly"));
field34.setType(CString("SFVec3f"));
field34.setValue(CString("0.98 1 1.033"));
ComposedShader31.addChild(&field34);

field& field35 =  field();
field35.setName(CString("bias"));
field35.setType(CString("SFFloat"));
field35.setAccessType(CString("inputOutput"));
field35.setValue(CString("0.5"));
ComposedShader31.addChild(&field35);

field& field36 =  field();
field36.setName(CString("scale"));
field36.setType(CString("SFFloat"));
field36.setAccessType(CString("inputOutput"));
field36.setValue(CString("0.5"));
ComposedShader31.addChild(&field36);

field& field37 =  field();
field37.setName(CString("power"));
field37.setType(CString("SFFloat"));
field37.setAccessType(CString("inputOutput"));
field37.setValue(CString("2"));
ComposedShader31.addChild(&field37);

field& field38 =  field();
field38.setName(CString("a"));
field38.setType(CString("SFFloat"));
field38.setAccessType(CString("inputOutput"));
field38.setValue(CString("10"));
ComposedShader31.addChild(&field38);

field& field39 =  field();
field39.setName(CString("b"));
field39.setType(CString("SFFloat"));
field39.setAccessType(CString("inputOutput"));
field39.setValue(CString("1"));
ComposedShader31.addChild(&field39);

field& field40 =  field();
field40.setName(CString("c"));
field40.setType(CString("SFFloat"));
field40.setAccessType(CString("inputOutput"));
field40.setValue(CString("20"));
ComposedShader31.addChild(&field40);

field& field41 =  field();
field41.setName(CString("d"));
field41.setType(CString("SFFloat"));
field41.setAccessType(CString("inputOutput"));
field41.setValue(CString("20"));
ComposedShader31.addChild(&field41);

field& field42 =  field();
field42.setName(CString("tdelta"));
field42.setType(CString("SFFloat"));
field42.setAccessType(CString("inputOutput"));
field42.setValue(CString("0"));
ComposedShader31.addChild(&field42);

field& field43 =  field();
field43.setName(CString("pdelta"));
field43.setType(CString("SFFloat"));
field43.setAccessType(CString("inputOutput"));
field43.setValue(CString("0"));
ComposedShader31.addChild(&field43);

ShaderPart& ShaderPart44 =  ShaderPart();
ShaderPart44.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs")}, 2);
ShaderPart44.setType(CString("VERTEX"));
ComposedShader31.setParts(&ShaderPart44);

ShaderPart& ShaderPart45 =  ShaderPart();
ShaderPart45.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs")}, 2);
ShaderPart45.setType(CString("FRAGMENT"));
ComposedShader31.setParts(&ShaderPart45);

Appearance22.addChild(&ComposedShader31);

ComposedShader& ComposedShader46 =  ComposedShader();
ComposedShader46.setDEF(CString("x_ite"));
ComposedShader46.setLanguage(CString("GLSL"));
field& field47 =  field();
field47.setName(CString("cube"));
field47.setType(CString("SFNode"));
field47.setAccessType(CString("inputOutput"));
ComposedCubeMapTexture& ComposedCubeMapTexture48 =  ComposedCubeMapTexture();
ComposedCubeMapTexture48.setUSE(CString("texture"));
field47.addChild(&ComposedCubeMapTexture48);

ComposedShader46.addChild(&field47);

field& field49 =  field();
field49.setName(CString("chromaticDispertion"));
field49.setAccessType(CString("initializeOnly"));
field49.setType(CString("SFVec3f"));
field49.setValue(CString("0.98 1 1.033"));
ComposedShader46.addChild(&field49);

field& field50 =  field();
field50.setName(CString("bias"));
field50.setType(CString("SFFloat"));
field50.setAccessType(CString("inputOnly"));
field50.setValue(CString("0.5"));
ComposedShader46.addChild(&field50);

field& field51 =  field();
field51.setName(CString("scale"));
field51.setType(CString("SFFloat"));
field51.setAccessType(CString("inputOnly"));
field51.setValue(CString("0.5"));
ComposedShader46.addChild(&field51);

field& field52 =  field();
field52.setName(CString("power"));
field52.setType(CString("SFFloat"));
field52.setAccessType(CString("inputOnly"));
field52.setValue(CString("2"));
ComposedShader46.addChild(&field52);

field& field53 =  field();
field53.setName(CString("a"));
field53.setType(CString("SFFloat"));
field53.setAccessType(CString("inputOnly"));
field53.setValue(CString("10"));
ComposedShader46.addChild(&field53);

field& field54 =  field();
field54.setName(CString("b"));
field54.setType(CString("SFFloat"));
field54.setAccessType(CString("inputOnly"));
field54.setValue(CString("1"));
ComposedShader46.addChild(&field54);

field& field55 =  field();
field55.setName(CString("c"));
field55.setType(CString("SFFloat"));
field55.setAccessType(CString("inputOnly"));
field55.setValue(CString("20"));
ComposedShader46.addChild(&field55);

field& field56 =  field();
field56.setName(CString("d"));
field56.setType(CString("SFFloat"));
field56.setAccessType(CString("inputOnly"));
field56.setValue(CString("20"));
ComposedShader46.addChild(&field56);

field& field57 =  field();
field57.setName(CString("tdelta"));
field57.setType(CString("SFFloat"));
field57.setAccessType(CString("inputOnly"));
field57.setValue(CString("0"));
ComposedShader46.addChild(&field57);

field& field58 =  field();
field58.setName(CString("pdelta"));
field58.setType(CString("SFFloat"));
field58.setAccessType(CString("inputOnly"));
field58.setValue(CString("0"));
ComposedShader46.addChild(&field58);

ShaderPart& ShaderPart59 =  ShaderPart();
ShaderPart59.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs")}, 2);
ShaderPart59.setType(CString("VERTEX"));
ComposedShader46.setParts(&ShaderPart59);

ShaderPart& ShaderPart60 =  ShaderPart();
ShaderPart60.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")}, 2);
ShaderPart60.setType(CString("FRAGMENT"));
ComposedShader46.setParts(&ShaderPart60);

Appearance22.addChild(&ComposedShader46);

Shape21.addChild(&Appearance22);

Sphere& Sphere61 =  Sphere();
Shape21.setGeometry(&Sphere61);

Transform20.addChild(&Shape21);

Scene16.addChild(&Transform20);

Script& Script62 =  Script();
Script62.setDEF(CString("UrlSelector"));
Script62.setDirectOutput(True);
field& field63 =  field();
field63.setName(CString("frontUrls"));
field63.setType(CString("MFString"));
field63.setAccessType(CString("initializeOnly"));
field63.setValue(CString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png\""));
Script62.addChild(&field63);

field& field64 =  field();
field64.setName(CString("backUrls"));
field64.setType(CString("MFString"));
field64.setAccessType(CString("initializeOnly"));
field64.setValue(CString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png\""));
Script62.addChild(&field64);

field& field65 =  field();
field65.setName(CString("leftUrls"));
field65.setType(CString("MFString"));
field65.setAccessType(CString("initializeOnly"));
field65.setValue(CString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png\""));
Script62.addChild(&field65);

field& field66 =  field();
field66.setName(CString("rightUrls"));
field66.setType(CString("MFString"));
field66.setAccessType(CString("initializeOnly"));
field66.setValue(CString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png\""));
Script62.addChild(&field66);

field& field67 =  field();
field67.setName(CString("topUrls"));
field67.setType(CString("MFString"));
field67.setAccessType(CString("initializeOnly"));
field67.setValue(CString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png\""));
Script62.addChild(&field67);

field& field68 =  field();
field68.setName(CString("bottomUrls"));
field68.setType(CString("MFString"));
field68.setAccessType(CString("initializeOnly"));
field68.setValue(CString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png\""));
Script62.addChild(&field68);

field& field69 =  field();
field69.setName(CString("front"));
field69.setType(CString("MFString"));
field69.setAccessType(CString("inputOutput"));
Script62.addChild(&field69);

field& field70 =  field();
field70.setName(CString("back"));
field70.setType(CString("MFString"));
field70.setAccessType(CString("inputOutput"));
Script62.addChild(&field70);

field& field71 =  field();
field71.setName(CString("left"));
field71.setType(CString("MFString"));
field71.setAccessType(CString("inputOutput"));
Script62.addChild(&field71);

field& field72 =  field();
field72.setName(CString("right"));
field72.setType(CString("MFString"));
field72.setAccessType(CString("inputOutput"));
Script62.addChild(&field72);

field& field73 =  field();
field73.setName(CString("top"));
field73.setType(CString("MFString"));
field73.setAccessType(CString("inputOutput"));
Script62.addChild(&field73);

field& field74 =  field();
field74.setName(CString("bottom"));
field74.setType(CString("MFString"));
field74.setAccessType(CString("inputOutput"));
Script62.addChild(&field74);

field& field75 =  field();
field75.setName(CString("set_fraction"));
field75.setType(CString("SFFloat"));
field75.setAccessType(CString("inputOnly"));
Script62.addChild(&field75);

field& field76 =  field();
field76.setName(CString("old"));
field76.setType(CString("SFInt32"));
field76.setAccessType(CString("inputOutput"));
field76.setValue(CString("-1"));
Script62.addChild(&field76);


Script62.setSourceCode(CString("ecmascript:")+
_T("        function set_fraction( f, tm ) {")+
_T("            var side = Math.floor(f*frontUrls.length);")+
_T("            if (side > frontUrls.length-1) {")+
_T("                side = 0;")+
_T("            }")+
_T("            if (side != old) {")+
_T("                    old = side;")+
_T("                    front[0] = frontUrls[side];")+
_T("                    back[0] = backUrls[side];")+
_T("                    left[0] = leftUrls[side];")+
_T("                    right[0] = rightUrls[side];")+
_T("                    top[0] = topUrls[side];")+
_T("                    bottom[0] = bottomUrls[side];")+
_T("            }")+
_T("        }"));
Scene16.addChild(&Script62);

//<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>
Script& Script77 =  Script();
Script77.setDEF(CString("Animate"));
Script77.setDirectOutput(True);
field& field78 =  field();
field78.setName(CString("set_fraction"));
field78.setType(CString("SFFloat"));
field78.setAccessType(CString("inputOnly"));
Script77.addChild(&field78);

field& field79 =  field();
field79.setName(CString("a"));
field79.setType(CString("SFFloat"));
field79.setAccessType(CString("inputOutput"));
field79.setValue(CString("10"));
Script77.addChild(&field79);

field& field80 =  field();
field80.setName(CString("b"));
field80.setType(CString("SFFloat"));
field80.setAccessType(CString("inputOutput"));
field80.setValue(CString("1"));
Script77.addChild(&field80);

field& field81 =  field();
field81.setName(CString("c"));
field81.setType(CString("SFFloat"));
field81.setAccessType(CString("inputOutput"));
field81.setValue(CString("20"));
Script77.addChild(&field81);

field& field82 =  field();
field82.setName(CString("d"));
field82.setType(CString("SFFloat"));
field82.setAccessType(CString("inputOutput"));
field82.setValue(CString("20"));
Script77.addChild(&field82);

field& field83 =  field();
field83.setName(CString("tdelta"));
field83.setType(CString("SFFloat"));
field83.setAccessType(CString("inputOutput"));
field83.setValue(CString("0"));
Script77.addChild(&field83);

field& field84 =  field();
field84.setName(CString("pdelta"));
field84.setType(CString("SFFloat"));
field84.setAccessType(CString("inputOutput"));
field84.setValue(CString("0"));
Script77.addChild(&field84);


Script77.setSourceCode(CString("ecmascript:")+
_T("function set_fraction() {")+
_T("	var choice = Math.floor(Math.random() * 4);")+
_T("	switch (choice) {")+
_T("	case 0:")+
_T("		a = a + Math.floor(Math.random() * 2) * 2 - 1;")+
_T("		break;")+
_T("	case 1:")+
_T("		b = b + Math.floor(Math.random() * 2) * 2 - 1;")+
_T("		break;")+
_T("	case 2:")+
_T("		c = c + Math.floor(Math.random() * 2) * 2 - 1;")+
_T("		break;")+
_T("	case 3:")+
_T("		d = d + Math.floor(Math.random() * 2) * 2 - 1;")+
_T("		break;")+
_T("	}")+
_T("	tdelta = tdelta + 0.5;")+
_T("	pdelta = pdelta + 0.5;")+
_T("	if (a < 1) {")+
_T("		a = 10;")+
_T("	}")+
_T("	if (b < 1) {")+
_T("		b = 10;")+
_T("	}")+
_T("	if (c < 1) {")+
_T("		c = 4;")+
_T("	}")+
_T("	if (c > 20) {")+
_T("		c = 4;")+
_T("	}")+
_T("	if (d < 1) {")+
_T("		d = 4;")+
_T("	}")+
_T("	if (d > 20) {")+
_T("		d = 4;")+
_T("	}")+
_T("}"));
Scene16.addChild(&Script77);

TimeSensor& TimeSensor85 =  TimeSensor();
TimeSensor85.setDEF(CString("TourTime"));
TimeSensor85.setCycleInterval(5);
TimeSensor85.setLoop(True);
Scene16.addChild(&TimeSensor85);

ROUTE& ROUTE86 =  ROUTE();
ROUTE86.setFromNode(CString("TourTime"));
ROUTE86.setFromField(CString("fraction_changed"));
ROUTE86.setToNode(CString("Animate"));
ROUTE86.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE86);

ROUTE& ROUTE87 =  ROUTE();
ROUTE87.setFromNode(CString("Animate"));
ROUTE87.setFromField(CString("a"));
ROUTE87.setToNode(CString("x_ite"));
ROUTE87.setToField(CString("a"));
Scene16.addChild(&ROUTE87);

ROUTE& ROUTE88 =  ROUTE();
ROUTE88.setFromNode(CString("Animate"));
ROUTE88.setFromField(CString("b"));
ROUTE88.setToNode(CString("x_ite"));
ROUTE88.setToField(CString("b"));
Scene16.addChild(&ROUTE88);

ROUTE& ROUTE89 =  ROUTE();
ROUTE89.setFromNode(CString("Animate"));
ROUTE89.setFromField(CString("c"));
ROUTE89.setToNode(CString("x_ite"));
ROUTE89.setToField(CString("c"));
Scene16.addChild(&ROUTE89);

ROUTE& ROUTE90 =  ROUTE();
ROUTE90.setFromNode(CString("Animate"));
ROUTE90.setFromField(CString("d"));
ROUTE90.setToNode(CString("x_ite"));
ROUTE90.setToField(CString("d"));
Scene16.addChild(&ROUTE90);

ROUTE& ROUTE91 =  ROUTE();
ROUTE91.setFromNode(CString("Animate"));
ROUTE91.setFromField(CString("pdelta"));
ROUTE91.setToNode(CString("x_ite"));
ROUTE91.setToField(CString("pdelta"));
Scene16.addChild(&ROUTE91);

ROUTE& ROUTE92 =  ROUTE();
ROUTE92.setFromNode(CString("Animate"));
ROUTE92.setFromField(CString("tdelta"));
ROUTE92.setToNode(CString("x_ite"));
ROUTE92.setToField(CString("tdelta"));
Scene16.addChild(&ROUTE92);

ROUTE& ROUTE93 =  ROUTE();
ROUTE93.setFromNode(CString("Animate"));
ROUTE93.setFromField(CString("a"));
ROUTE93.setToNode(CString("x3dom"));
ROUTE93.setToField(CString("a"));
Scene16.addChild(&ROUTE93);

ROUTE& ROUTE94 =  ROUTE();
ROUTE94.setFromNode(CString("Animate"));
ROUTE94.setFromField(CString("b"));
ROUTE94.setToNode(CString("x3dom"));
ROUTE94.setToField(CString("b"));
Scene16.addChild(&ROUTE94);

ROUTE& ROUTE95 =  ROUTE();
ROUTE95.setFromNode(CString("Animate"));
ROUTE95.setFromField(CString("c"));
ROUTE95.setToNode(CString("x3dom"));
ROUTE95.setToField(CString("c"));
Scene16.addChild(&ROUTE95);

ROUTE& ROUTE96 =  ROUTE();
ROUTE96.setFromNode(CString("Animate"));
ROUTE96.setFromField(CString("d"));
ROUTE96.setToNode(CString("x3dom"));
ROUTE96.setToField(CString("d"));
Scene16.addChild(&ROUTE96);

ROUTE& ROUTE97 =  ROUTE();
ROUTE97.setFromNode(CString("Animate"));
ROUTE97.setFromField(CString("pdelta"));
ROUTE97.setToNode(CString("x3dom"));
ROUTE97.setToField(CString("pdelta"));
Scene16.addChild(&ROUTE97);

ROUTE& ROUTE98 =  ROUTE();
ROUTE98.setFromNode(CString("Animate"));
ROUTE98.setFromField(CString("tdelta"));
ROUTE98.setToNode(CString("x3dom"));
ROUTE98.setToField(CString("tdelta"));
Scene16.addChild(&ROUTE98);

X3D0.setScene(&Scene16);

}

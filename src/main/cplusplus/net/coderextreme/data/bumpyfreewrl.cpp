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

//<component name='Shape' level='4'></component>
meta& meta10 =  meta();
meta10.setName(CString("title"));
meta10.setContent(CString("bumpyfreewrl.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("creator"));
meta11.setContent(CString("John Carlson"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("description"));
meta12.setContent(CString("A flower"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("generator"));
meta13.setContent(CString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("identifier"));
meta14.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/bumpfreewrl.x3d"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
WorldInfo& WorldInfo16 =  WorldInfo();
WorldInfo16.setTitle(CString("bumpyx_ite.x3d"));
Scene15.addChild(&WorldInfo16);

NavigationInfo& NavigationInfo17 =  NavigationInfo();
Scene15.addChild(&NavigationInfo17);

Viewpoint& Viewpoint18 =  Viewpoint();
Viewpoint18.setPosition(new float[3]{0.0,0.0,40.0});
Viewpoint18.setDescription(CString("Transparent rose"));
Scene15.addChild(&Viewpoint18);

//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background& Background19 =  Background();
Background19.setBackUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
Background19.setBottomUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
Background19.setFrontUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
Background19.setLeftUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
Background19.setRightUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
Background19.setTopUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
Scene15.addChild(&Background19);

Transform& Transform20 =  Transform();
Shape& Shape21 =  Shape();
Sphere& Sphere22 =  Sphere();
Sphere22.setRadius(5);
Shape21.setGeometry(&Sphere22);

Appearance& Appearance23 =  Appearance();
Material& Material24 =  Material();
Material24.setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material24.setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance23.addChild(&Material24);

ComposedCubeMapTexture& ComposedCubeMapTexture25 =  ComposedCubeMapTexture();
ComposedCubeMapTexture25.setDEF(CString("texture"));
ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
ComposedCubeMapTexture25.setBack(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
ComposedCubeMapTexture25.setBottom(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
ComposedCubeMapTexture25.setFront(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
ComposedCubeMapTexture25.setLeft(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
ComposedCubeMapTexture25.setRight(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
ComposedCubeMapTexture25.setTop(ImageTexture31);

Appearance23.addChild(&ComposedCubeMapTexture25);

ComposedShader& ComposedShader32 =  ComposedShader();
ComposedShader32.setDEF(CString("freewrlShader"));
ComposedShader32.setLanguage(CString("GLSL"));
field& field33 =  field();
field33.setName(CString("chromaticDispertion"));
field33.setAccessType(CString("inputOnly"));
field33.setType(CString("SFVec3f"));
field33.setValue(CString("0.98 1 1.033"));
ComposedShader32.addChild(&field33);

field& field34 =  field();
field34.setName(CString("fw_textureCoordGenType"));
field34.setAccessType(CString("inputOnly"));
field34.setType(CString("SFInt32"));
field34.setValue(CString("0"));
ComposedShader32.addChild(&field34);

field& field35 =  field();
field35.setName(CString("bias"));
field35.setType(CString("SFFloat"));
field35.setAccessType(CString("inputOnly"));
field35.setValue(CString("0.5"));
ComposedShader32.addChild(&field35);

field& field36 =  field();
field36.setName(CString("scale"));
field36.setType(CString("SFFloat"));
field36.setAccessType(CString("inputOnly"));
field36.setValue(CString("0.5"));
ComposedShader32.addChild(&field36);

field& field37 =  field();
field37.setName(CString("power"));
field37.setType(CString("SFFloat"));
field37.setAccessType(CString("inputOnly"));
field37.setValue(CString("2"));
ComposedShader32.addChild(&field37);

field& field38 =  field();
field38.setName(CString("a"));
field38.setType(CString("SFFloat"));
field38.setAccessType(CString("inputOutput"));
field38.setValue(CString("10"));
ComposedShader32.addChild(&field38);

field& field39 =  field();
field39.setName(CString("b"));
field39.setType(CString("SFFloat"));
field39.setAccessType(CString("inputOutput"));
field39.setValue(CString("1"));
ComposedShader32.addChild(&field39);

field& field40 =  field();
field40.setName(CString("c"));
field40.setType(CString("SFFloat"));
field40.setAccessType(CString("inputOutput"));
field40.setValue(CString("5"));
ComposedShader32.addChild(&field40);

field& field41 =  field();
field41.setName(CString("d"));
field41.setType(CString("SFFloat"));
field41.setAccessType(CString("inputOutput"));
field41.setValue(CString("5"));
ComposedShader32.addChild(&field41);

field& field42 =  field();
field42.setName(CString("tdelta"));
field42.setType(CString("SFFloat"));
field42.setAccessType(CString("inputOutput"));
field42.setValue(CString("0"));
ComposedShader32.addChild(&field42);

field& field43 =  field();
field43.setName(CString("pdelta"));
field43.setType(CString("SFFloat"));
field43.setAccessType(CString("inputOutput"));
field43.setValue(CString("0"));
ComposedShader32.addChild(&field43);

ShaderPart& ShaderPart44 =  ShaderPart();
ShaderPart44.setUrl(new CString[2]{CString("../shaders/freewrl_flowers_chromatic.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs")}, 2);
ShaderPart44.setType(CString("VERTEX"));
ComposedShader32.setParts(&ShaderPart44);

ShaderPart& ShaderPart45 =  ShaderPart();
ShaderPart45.setUrl(new CString[2]{CString("../shaders/freewrl_bubbles.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs")}, 2);
ShaderPart45.setType(CString("FRAGMENT"));
ComposedShader32.setParts(&ShaderPart45);

Appearance23.addChild(&ComposedShader32);

Shape21.addChild(&Appearance23);

Transform20.addChild(&Shape21);

Scene15.addChild(&Transform20);

X3D0.setScene(&Scene15);

}

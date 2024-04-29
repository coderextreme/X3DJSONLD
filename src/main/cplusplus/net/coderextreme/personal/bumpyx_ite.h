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

//<component name='Shape' level='4'></component>
meta& meta10 =  meta();
meta10.setName(CString("title"));
meta10.setContent(CString("bumpyx_ite.x3d"));
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
meta14.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/personal/bumpyx_ite.x3d"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
WorldInfo& WorldInfo16 =  WorldInfo();
WorldInfo16.setTitle(CString("bumpyx_ite.x3d"));
Scene15.addChild(&WorldInfo16);

NavigationInfo& NavigationInfo17 =  NavigationInfo();
NavigationInfo17.setType(new CString[]{CString("ANY"), CString("EXAMINE"), CString("FLY"), CString("LOOKAT")}, 4);
Scene15.addChild(&NavigationInfo17);

Viewpoint& Viewpoint18 =  Viewpoint();
Viewpoint18.setPosition(new float[]{0.0,0.0,40.0});
Viewpoint18.setDescription(CString("Transparent rose"));
Scene15.addChild(&Viewpoint18);

//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background& Background19 =  Background();
Background19.setBackUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
Background19.setBottomUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
Background19.setFrontUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
Background19.setLeftUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
Background19.setRightUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
Background19.setTopUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
Scene15.addChild(&Background19);

Transform& Transform20 =  Transform();
Shape& Shape21 =  Shape();
Sphere& Sphere22 =  Sphere();
Sphere22.setRadius(40);
Shape21.setGeometry(&Sphere22);

Appearance& Appearance23 =  Appearance();
Material& Material24 =  Material();
Material24.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material24.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance23.addChild(&Material24);

ComposedCubeMapTexture& ComposedCubeMapTexture25 =  ComposedCubeMapTexture();
ComposedCubeMapTexture25.setDEF(CString("texture"));
ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
ComposedCubeMapTexture25.setBack(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
ComposedCubeMapTexture25.setBottom(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
ComposedCubeMapTexture25.setFront(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
ComposedCubeMapTexture25.setLeft(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
ComposedCubeMapTexture25.setRight(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
ComposedCubeMapTexture25.setTop(ImageTexture31);

Appearance23.addChild(&ComposedCubeMapTexture25);

ComposedShader& ComposedShader32 =  ComposedShader();
ComposedShader32.setDEF(CString("x_iteShader"));
ComposedShader32.setLanguage(CString("GLSL"));
field& field33 =  field();
field33.setName(CString("chromaticDispertion"));
field33.setAccessType(CString("inputOnly"));
field33.setType(CString("SFVec3f"));
field33.setValue(CString("0.98 1 1.033"));
ComposedShader32.addChild(&field33);

field& field34 =  field();
field34.setName(CString("cube"));
field34.setType(CString("SFNode"));
field34.setAccessType(CString("inputOnly"));
ComposedCubeMapTexture& ComposedCubeMapTexture35 =  ComposedCubeMapTexture();
ComposedCubeMapTexture35.setUSE(CString("texture"));
field34.addChild(&ComposedCubeMapTexture35);

ComposedShader32.addChild(&field34);

field& field36 =  field();
field36.setName(CString("bias"));
field36.setType(CString("SFFloat"));
field36.setAccessType(CString("inputOnly"));
field36.setValue(CString("0.5"));
ComposedShader32.addChild(&field36);

field& field37 =  field();
field37.setName(CString("scale"));
field37.setType(CString("SFFloat"));
field37.setAccessType(CString("inputOnly"));
field37.setValue(CString("0.5"));
ComposedShader32.addChild(&field37);

field& field38 =  field();
field38.setName(CString("power"));
field38.setType(CString("SFFloat"));
field38.setAccessType(CString("inputOnly"));
field38.setValue(CString("2"));
ComposedShader32.addChild(&field38);

field& field39 =  field();
field39.setName(CString("a"));
field39.setType(CString("SFFloat"));
field39.setAccessType(CString("inputOutput"));
field39.setValue(CString("15"));
ComposedShader32.addChild(&field39);

field& field40 =  field();
field40.setName(CString("b"));
field40.setType(CString("SFFloat"));
field40.setAccessType(CString("inputOutput"));
field40.setValue(CString("5"));
ComposedShader32.addChild(&field40);

field& field41 =  field();
field41.setName(CString("c"));
field41.setType(CString("SFFloat"));
field41.setAccessType(CString("inputOutput"));
field41.setValue(CString("5"));
ComposedShader32.addChild(&field41);

field& field42 =  field();
field42.setName(CString("d"));
field42.setType(CString("SFFloat"));
field42.setAccessType(CString("inputOutput"));
field42.setValue(CString("5"));
ComposedShader32.addChild(&field42);

field& field43 =  field();
field43.setName(CString("tdelta"));
field43.setType(CString("SFFloat"));
field43.setAccessType(CString("inputOutput"));
field43.setValue(CString("0"));
ComposedShader32.addChild(&field43);

field& field44 =  field();
field44.setName(CString("pdelta"));
field44.setType(CString("SFFloat"));
field44.setAccessType(CString("inputOutput"));
field44.setValue(CString("0"));
ComposedShader32.addChild(&field44);

ShaderPart& ShaderPart45 =  ShaderPart();
ShaderPart45.setUrl(new CString[]{CString("../shaders/x_ite_flowers_chromatic.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs")}, 2);
ShaderPart45.setType(CString("VERTEX"));
ComposedShader32.setParts(&ShaderPart45);

ShaderPart& ShaderPart46 =  ShaderPart();
ShaderPart46.setUrl(new CString[]{CString("../shaders/x_ite.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")}, 2);
ShaderPart46.setType(CString("FRAGMENT"));
ComposedShader32.setParts(&ShaderPart46);

//TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/x_itebubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>
Appearance23.addChild(&ComposedShader32);

Shape21.addChild(&Appearance23);

Transform20.addChild(&Shape21);

Scene15.addChild(&Transform20);

X3D0.setScene(&Scene15);

//}

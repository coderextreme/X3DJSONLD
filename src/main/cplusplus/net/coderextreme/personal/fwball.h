//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("EnvironmentalEffects"));
component2.setLevel(3);
head1.addChild(&component2);

component& component3 =  component();
component3.setName(CString("Shaders"));
component3.setLevel(1);
head1.addChild(&component3);

component& component4 =  component();
component4.setName(CString("CubeMapTexturing"));
component4.setLevel(1);
head1.addChild(&component4);

component& component5 =  component();
component5.setName(CString("Texturing"));
component5.setLevel(1);
head1.addChild(&component5);

component& component6 =  component();
component6.setName(CString("Rendering"));
component6.setLevel(1);
head1.addChild(&component6);

component& component7 =  component();
component7.setName(CString("Grouping"));
component7.setLevel(3);
head1.addChild(&component7);

component& component8 =  component();
component8.setName(CString("Core"));
component8.setLevel(1);
head1.addChild(&component8);

meta& meta9 =  meta();
meta9.setName(CString("title"));
meta9.setContent(CString("fwball.x3d"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("creator"));
meta10.setContent(CString("John Carlson"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("identifier"));
meta11.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/personal/fwball.x3d"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("description"));
meta12.setContent(CString("a prismatic sphere"));
head1.addMeta(&meta12);

X3D0.setHead(&head1);

Scene& Scene13 =  Scene();
WorldInfo& WorldInfo14 =  WorldInfo();
WorldInfo14.setTitle(CString("fwball.x3d"));
Scene13.addChild(&WorldInfo14);

NavigationInfo& NavigationInfo15 =  NavigationInfo();
NavigationInfo15.setType(new CString[]{CString("ANY"), CString("EXAMINE"), CString("FLY"), CString("LOOKAT")}, 4);
Scene13.addChild(&NavigationInfo15);

Viewpoint& Viewpoint16 =  Viewpoint();
Viewpoint16.setDescription(CString("Tour Views"));
Viewpoint16.setPosition(new float[]{0.0,0.0,12.0});
Scene13.addChild(&Viewpoint16);

Background& Background17 =  Background();
Background17.setBackUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 1);
Background17.setBottomUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 1);
Background17.setFrontUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 1);
Background17.setLeftUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 1);
Background17.setRightUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 1);
Background17.setTopUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 1);
Scene13.addChild(&Background17);

Transform& Transform18 =  Transform();
Shape& Shape19 =  Shape();
Sphere& Sphere20 =  Sphere();
Shape19.setGeometry(&Sphere20);

Appearance& Appearance21 =  Appearance();
Material& Material22 =  Material();
Material22.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material22.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance21.addChild(&Material22);

ComposedCubeMapTexture& ComposedCubeMapTexture23 =  ComposedCubeMapTexture();
ComposedCubeMapTexture23.setDEF(CString("texture"));
ImageTexture& ImageTexture24 =  ImageTexture();
ImageTexture24.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 1);
ComposedCubeMapTexture23.setBack(ImageTexture24);

ImageTexture& ImageTexture25 =  ImageTexture();
ImageTexture25.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 1);
ComposedCubeMapTexture23.setBottom(ImageTexture25);

ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 1);
ComposedCubeMapTexture23.setFront(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 1);
ComposedCubeMapTexture23.setLeft(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 1);
ComposedCubeMapTexture23.setRight(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 1);
ComposedCubeMapTexture23.setTop(ImageTexture29);

Appearance21.addChild(&ComposedCubeMapTexture23);

ComposedShader& ComposedShader30 =  ComposedShader();
ComposedShader30.setLanguage(CString("GLSL"));
field& field31 =  field();
field31.setName(CString("chromaticDispertion"));
field31.setAccessType(CString("inputOutput"));
field31.setType(CString("SFVec3f"));
field31.setValue(CString("0.98 1 1.033"));
ComposedShader30.addChild(&field31);

field& field32 =  field();
field32.setName(CString("cube"));
field32.setType(CString("SFNode"));
field32.setAccessType(CString("inputOutput"));
ComposedCubeMapTexture& ComposedCubeMapTexture33 =  ComposedCubeMapTexture();
ComposedCubeMapTexture33.setUSE(CString("texture"));
field32.addChild(&ComposedCubeMapTexture33);

ComposedShader30.addChild(&field32);

field& field34 =  field();
field34.setName(CString("bias"));
field34.setAccessType(CString("inputOutput"));
field34.setType(CString("SFFloat"));
field34.setValue(CString("0.5"));
ComposedShader30.addChild(&field34);

field& field35 =  field();
field35.setName(CString("scale"));
field35.setAccessType(CString("inputOutput"));
field35.setType(CString("SFFloat"));
field35.setValue(CString("0.5"));
ComposedShader30.addChild(&field35);

field& field36 =  field();
field36.setName(CString("power"));
field36.setAccessType(CString("inputOutput"));
field36.setType(CString("SFFloat"));
field36.setValue(CString("2"));
ComposedShader30.addChild(&field36);

ShaderPart& ShaderPart37 =  ShaderPart();
ShaderPart37.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs")}, 1);
ShaderPart37.setType(CString("VERTEX"));
ComposedShader30.setParts(&ShaderPart37);

ShaderPart& ShaderPart38 =  ShaderPart();
ShaderPart38.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs")}, 1);
ShaderPart38.setType(CString("FRAGMENT"));
ComposedShader30.setParts(&ShaderPart38);

Appearance21.addChild(&ComposedShader30);

Shape19.addChild(&Appearance21);

Transform18.addChild(&Shape19);

Scene13.addChild(&Transform18);

X3D0.setScene(&Scene13);

//}

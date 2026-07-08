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
component2.setName(CString("Shaders"));
component2.setLevel(1);
head1.addChild(&component2);

component& component3 =  component();
component3.setName(CString("EnvironmentalEffects"));
component3.setLevel(3);
head1.addChild(&component3);

component& component4 =  component();
component4.setName(CString("Rendering"));
component4.setLevel(1);
head1.addChild(&component4);

component& component5 =  component();
component5.setName(CString("Texturing"));
component5.setLevel(1);
head1.addChild(&component5);

component& component6 =  component();
component6.setName(CString("Grouping"));
component6.setLevel(3);
head1.addChild(&component6);

component& component7 =  component();
component7.setName(CString("CubeMapTexturing"));
component7.setLevel(1);
head1.addChild(&component7);

component& component8 =  component();
component8.setName(CString("Core"));
component8.setLevel(1);
head1.addChild(&component8);

meta& meta9 =  meta();
meta9.setName(CString("identifier"));
meta9.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("title"));
meta10.setContent(CString("ball.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("creator"));
meta11.setContent(CString("John Carlson"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("generator"));
meta12.setContent(CString("manual"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("description"));
meta13.setContent(CString("a prismatic sphere"));
head1.addMeta(&meta13);

X3D0.setHead(&head1);

Scene& Scene14 =  Scene();
WorldInfo& WorldInfo15 =  WorldInfo();
WorldInfo15.setTitle(CString("ball.x3d"));
Scene14.addChild(&WorldInfo15);

NavigationInfo& NavigationInfo16 =  NavigationInfo();
NavigationInfo16.setAvatarSize(new float[]{0.25,1.60000002384186,0.75}, 3);
NavigationInfo16.setType(new CString[]{CString("ANY"), CString("EXAMINE"), CString("FLY"), CString("LOOKAT")}, 4);
Scene14.addChild(&NavigationInfo16);

Viewpoint& Viewpoint17 =  Viewpoint();
Viewpoint17.setPosition(new float[]{0.0,0.0,12.0});
Viewpoint17.setDescription(CString("Tour Views"));
Scene14.addChild(&Viewpoint17);

Background& Background18 =  Background();
Background18.setTopUrl(new CString[]{CString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 1);
Background18.setBackUrl(new CString[]{CString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 1);
Background18.setLeftUrl(new CString[]{CString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 1);
Background18.setFrontUrl(new CString[]{CString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 1);
Background18.setRightUrl(new CString[]{CString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 1);
Background18.setBottomUrl(new CString[]{CString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 1);
Scene14.addChild(&Background18);

Transform& Transform19 =  Transform();
Shape& Shape20 =  Shape();
Sphere& Sphere21 =  Sphere();
Shape20.setGeometry(&Sphere21);

Appearance& Appearance22 =  Appearance();
Material& Material23 =  Material();
Material23.setDiffuseColor(new float[]{0.699999988079071,0.699999988079071,0.699999988079071});
Material23.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance22.addChild(&Material23);

ComposedShader& ComposedShader24 =  ComposedShader();
ComposedShader24.setLanguage(CString("GLSL"));
field& field25 =  field();
field25.setName(CString("chromaticDispertion"));
field25.setAccessType(CString("initializeOnly"));
field25.setType(CString("SFVec3f"));
field25.setValue(CString("0.980000019073486 1 1.03299999237061"));
ComposedShader24.addChild(&field25);

field& field26 =  field();
field26.setName(CString("cube"));
field26.setAccessType(CString("initializeOnly"));
field26.setType(CString("SFNode"));
ComposedCubeMapTexture& ComposedCubeMapTexture27 =  ComposedCubeMapTexture();
ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setUrl(new CString[]{CString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 1);
ComposedCubeMapTexture27.setBack(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl(new CString[]{CString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 1);
ComposedCubeMapTexture27.setBottom(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setUrl(new CString[]{CString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 1);
ComposedCubeMapTexture27.setFront(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setUrl(new CString[]{CString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 1);
ComposedCubeMapTexture27.setLeft(ImageTexture31);

ImageTexture& ImageTexture32 =  ImageTexture();
ImageTexture32.setUrl(new CString[]{CString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 1);
ComposedCubeMapTexture27.setRight(ImageTexture32);

ImageTexture& ImageTexture33 =  ImageTexture();
ImageTexture33.setUrl(new CString[]{CString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 1);
ComposedCubeMapTexture27.setTop(ImageTexture33);

field26.addChild(&ComposedCubeMapTexture27);

ComposedShader24.addChild(&field26);

field& field34 =  field();
field34.setName(CString("bias"));
field34.setAccessType(CString("initializeOnly"));
field34.setType(CString("SFFloat"));
field34.setValue(CString("0.5"));
ComposedShader24.addChild(&field34);

field& field35 =  field();
field35.setName(CString("scale"));
field35.setAccessType(CString("initializeOnly"));
field35.setType(CString("SFFloat"));
field35.setValue(CString("0.5"));
ComposedShader24.addChild(&field35);

field& field36 =  field();
field36.setName(CString("power"));
field36.setAccessType(CString("initializeOnly"));
field36.setType(CString("SFFloat"));
field36.setValue(CString("2"));
ComposedShader24.addChild(&field36);

ShaderPart& ShaderPart37 =  ShaderPart();
ShaderPart37.setUrl(new CString[]{CString("file:/C:/Users/jcarl/X3DJSONLD/src/main/shaders/castle.vs")}, 1);
ShaderPart37.setType(CString("VERTEX"));
ComposedShader24.setParts(&ShaderPart37);

ShaderPart& ShaderPart38 =  ShaderPart();
ShaderPart38.setDEF(CString("commonfs"));
ShaderPart38.setUrl(new CString[]{CString("file:/C:/Users/jcarl/X3DJSONLD/src/main/shaders/castle.fs")}, 1);
ShaderPart38.setType(CString("FRAGMENT"));
ComposedShader24.setParts(&ShaderPart38);

Appearance22.addChild(&ComposedShader24);

Shape20.addChild(&Appearance22);

Transform19.addChild(&Shape20);

Scene14.addChild(&Transform19);

X3D0.setScene(&Scene14);

//}

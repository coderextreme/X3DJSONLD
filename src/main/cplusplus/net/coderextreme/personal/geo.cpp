#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
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
meta10.setContent(CString("geo.x3d"));
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
meta13.setName(CString("identifier"));
meta13.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/personal/geo.x3d"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("description"));
meta14.setContent(CString("a sphere"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
NavigationInfo& NavigationInfo16 =  NavigationInfo();
NavigationInfo16.setType(new CString[]{CString("ANY"), CString("EXAMINE"), CString("FLY"), CString("LOOKAT")}, 4);
Scene15.addChild(&NavigationInfo16);

Viewpoint& Viewpoint17 =  Viewpoint();
Viewpoint17.setDEF(CString("Tour"));
Viewpoint17.setDescription(CString("Tour Views"));
Scene15.addChild(&Viewpoint17);

//Viewpoint position='0 0 4' description='sphere in road'/
Background& Background18 =  Background();
Background18.setBackUrl(new CString[]{CString("../resources/images/bBK.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png")}, 2);
Background18.setBottomUrl(new CString[]{CString("../resources/images/bBT.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png")}, 2);
Background18.setFrontUrl(new CString[]{CString("../resources/images/bFR.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png")}, 2);
Background18.setLeftUrl(new CString[]{CString("../resources/images/bLF.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png")}, 2);
Background18.setRightUrl(new CString[]{CString("../resources/images/bRT.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png")}, 2);
Background18.setTopUrl(new CString[]{CString("../resources/images/bTP.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png")}, 2);
Scene15.addChild(&Background18);

Transform& Transform19 =  Transform();
Shape& Shape20 =  Shape();
Sphere& Sphere21 =  Sphere();
Shape20.setGeometry(&Sphere21);

Appearance& Appearance22 =  Appearance();
Material& Material23 =  Material();
Material23.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material23.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance22.addChild(&Material23);

ComposedCubeMapTexture& ComposedCubeMapTexture24 =  ComposedCubeMapTexture();
ComposedCubeMapTexture24.setDEF(CString("texture"));
ImageTexture& ImageTexture25 =  ImageTexture();
ImageTexture25.setUrl(new CString[]{CString("../resources/images/bBK.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png")}, 2);
ComposedCubeMapTexture24.setBack(ImageTexture25);

ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setUrl(new CString[]{CString("../resources/images/bBT.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png")}, 2);
ComposedCubeMapTexture24.setBottom(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setUrl(new CString[]{CString("../resources/images/bFR.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png")}, 2);
ComposedCubeMapTexture24.setFront(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setUrl(new CString[]{CString("../resources/images/bLF.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png")}, 2);
ComposedCubeMapTexture24.setLeft(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl(new CString[]{CString("../resources/images/bRT.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png")}, 2);
ComposedCubeMapTexture24.setRight(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setUrl(new CString[]{CString("../resources/images/bTP.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png")}, 2);
ComposedCubeMapTexture24.setTop(ImageTexture30);

Appearance22.addChild(&ComposedCubeMapTexture24);

ComposedShader& ComposedShader31 =  ComposedShader();
ComposedShader31.setLanguage(CString("GLSL"));
field& field32 =  field();
field32.setName(CString("chromaticDispertion"));
field32.setAccessType(CString("inputOutput"));
field32.setType(CString("SFVec3f"));
field32.setValue(CString("0.98 1 1.033"));
ComposedShader31.addChild(&field32);

field& field33 =  field();
field33.setName(CString("cube"));
field33.setType(CString("SFNode"));
field33.setAccessType(CString("inputOutput"));
ComposedCubeMapTexture& ComposedCubeMapTexture34 =  ComposedCubeMapTexture();
ComposedCubeMapTexture34.setUSE(CString("texture"));
field33.addChild(&ComposedCubeMapTexture34);

ComposedShader31.addChild(&field33);

field& field35 =  field();
field35.setName(CString("bias"));
field35.setAccessType(CString("inputOutput"));
field35.setType(CString("SFFloat"));
field35.setValue(CString("0.5"));
ComposedShader31.addChild(&field35);

field& field36 =  field();
field36.setName(CString("scale"));
field36.setAccessType(CString("inputOutput"));
field36.setType(CString("SFFloat"));
field36.setValue(CString("0.5"));
ComposedShader31.addChild(&field36);

field& field37 =  field();
field37.setName(CString("power"));
field37.setAccessType(CString("inputOutput"));
field37.setType(CString("SFFloat"));
field37.setValue(CString("2"));
ComposedShader31.addChild(&field37);

ShaderPart& ShaderPart38 =  ShaderPart();
ShaderPart38.setUrl(new CString[]{CString("../shaders/x3dom.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs")}, 2);
ShaderPart38.setType(CString("VERTEX"));
ComposedShader31.setParts(&ShaderPart38);

ShaderPart& ShaderPart39 =  ShaderPart();
ShaderPart39.setDEF(CString("common"));
ShaderPart39.setUrl(new CString[]{CString("../shaders/common.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs")}, 2);
ShaderPart39.setType(CString("FRAGMENT"));
ComposedShader31.setParts(&ShaderPart39);

Appearance22.addChild(&ComposedShader31);

ComposedShader& ComposedShader40 =  ComposedShader();
ComposedShader40.setLanguage(CString("GLSL"));
field& field41 =  field();
field41.setName(CString("chromaticDispertion"));
field41.setAccessType(CString("initializeOnly"));
field41.setType(CString("SFVec3f"));
field41.setValue(CString("0.98 1 1.033"));
ComposedShader40.addChild(&field41);

field& field42 =  field();
field42.setName(CString("cube"));
field42.setType(CString("SFNode"));
field42.setAccessType(CString("initializeOnly"));
ComposedCubeMapTexture& ComposedCubeMapTexture43 =  ComposedCubeMapTexture();
ComposedCubeMapTexture43.setUSE(CString("texture"));
field42.addChild(&ComposedCubeMapTexture43);

ComposedShader40.addChild(&field42);

field& field44 =  field();
field44.setName(CString("bias"));
field44.setAccessType(CString("initializeOnly"));
field44.setType(CString("SFFloat"));
field44.setValue(CString("0.5"));
ComposedShader40.addChild(&field44);

field& field45 =  field();
field45.setName(CString("scale"));
field45.setAccessType(CString("initializeOnly"));
field45.setType(CString("SFFloat"));
field45.setValue(CString("0.5"));
ComposedShader40.addChild(&field45);

field& field46 =  field();
field46.setName(CString("power"));
field46.setAccessType(CString("initializeOnly"));
field46.setType(CString("SFFloat"));
field46.setValue(CString("2"));
ComposedShader40.addChild(&field46);

ShaderPart& ShaderPart47 =  ShaderPart();
ShaderPart47.setUrl(new CString[]{CString("../shaders/x_ite.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs")}, 2);
ShaderPart47.setType(CString("VERTEX"));
ComposedShader40.setParts(&ShaderPart47);

ShaderPart& ShaderPart48 =  ShaderPart();
ShaderPart48.setUrl(new CString[]{CString("../shaders/x_ite.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")}, 2);
ShaderPart48.setType(CString("FRAGMENT"));
ComposedShader40.setParts(&ShaderPart48);

Appearance22.addChild(&ComposedShader40);

Shape20.addChild(&Appearance22);

Transform19.addChild(&Shape20);

Scene15.addChild(&Transform19);

X3D0.setScene(&Scene15);

}

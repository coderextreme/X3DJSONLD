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
meta9.setContent(CString("ball.x3d"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("creator"));
meta10.setContent(CString("John Carlson"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("generator"));
meta11.setContent(CString("manual"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("identifier"));
meta12.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d"));
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
NavigationInfo16.setType(new CString[]{CString("ANY"), CString("EXAMINE"), CString("FLY"), CString("LOOKAT")}, 4);
Scene14.addChild(&NavigationInfo16);

Viewpoint& Viewpoint17 =  Viewpoint();
Viewpoint17.setDescription(CString("Tour Views"));
Viewpoint17.setPosition(new float[]{0,0,12});
Scene14.addChild(&Viewpoint17);

Background& Background18 =  Background();
Background18.setBackUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 1);
Background18.setBottomUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 1);
Background18.setFrontUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 1);
Background18.setLeftUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 1);
Background18.setRightUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 1);
Background18.setTopUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 1);
Scene14.addChild(&Background18);

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
ImageTexture25.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 1);
ComposedCubeMapTexture24.setBack(ImageTexture25);

ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 1);
ComposedCubeMapTexture24.setBottom(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 1);
ComposedCubeMapTexture24.setFront(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 1);
ComposedCubeMapTexture24.setLeft(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 1);
ComposedCubeMapTexture24.setRight(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 1);
ComposedCubeMapTexture24.setTop(ImageTexture30);

Appearance22.addChild(&ComposedCubeMapTexture24);

//<ProgramShader DEF='ProgramShader' containerField='shaders' language='GLSL'> <ShaderProgram url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' containerField='programs' type='VERTEX'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'/> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'/> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'/> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'/> </ShaderProgram> <ShaderProgram url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"' containerField='programs' type='FRAGMENT'/> </ProgramShader>
//<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/castle.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart DEF='commonfs' url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field> <field name='fw_Texture_unit0' type='SFNode' accessType=\"initializeOnly\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/contact.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart USE='commonfs'></ShaderPart> </ComposedShader> <ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/octaga.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart USE='commonfs'></ShaderPart> </ComposedShader> <ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' accessType='initializeOnly' type='SFInt32' value='0'></field> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart USE='commonfs'></ShaderPart> </ComposedShader> <ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart USE=\"commonfs\"></ShaderPart> </ComposedShader>
ComposedShader& ComposedShader31 =  ComposedShader();
ComposedShader31.setLanguage(CString("GLSL"));
field& field32 =  field();
field32.setName(CString("chromaticDispertion"));
field32.setAccessType(CString("initializeOnly"));
field32.setType(CString("SFVec3f"));
field32.setValue(CString("0.98 1 1.033"));
ComposedShader31.addChild(&field32);

field& field33 =  field();
field33.setName(CString("cube"));
field33.setType(CString("SFNode"));
field33.setAccessType(CString("initializeOnly"));
ComposedCubeMapTexture& ComposedCubeMapTexture34 =  ComposedCubeMapTexture();
ComposedCubeMapTexture34.setUSE(CString("texture"));
field33.addChild(&ComposedCubeMapTexture34);

ComposedShader31.addChild(&field33);

field& field35 =  field();
field35.setName(CString("bias"));
field35.setAccessType(CString("initializeOnly"));
field35.setType(CString("SFFloat"));
field35.setValue(CString("0.5"));
ComposedShader31.addChild(&field35);

field& field36 =  field();
field36.setName(CString("scale"));
field36.setAccessType(CString("initializeOnly"));
field36.setType(CString("SFFloat"));
field36.setValue(CString("0.5"));
ComposedShader31.addChild(&field36);

field& field37 =  field();
field37.setName(CString("power"));
field37.setAccessType(CString("initializeOnly"));
field37.setType(CString("SFFloat"));
field37.setValue(CString("2"));
ComposedShader31.addChild(&field37);

ShaderPart& ShaderPart38 =  ShaderPart();
ShaderPart38.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs")}, 1);
ShaderPart38.setType(CString("VERTEX"));
ComposedShader31.setParts(&ShaderPart38);

ShaderPart& ShaderPart39 =  ShaderPart();
ShaderPart39.setDEF(CString("commonfs"));
ShaderPart39.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs")}, 1);
ShaderPart39.setType(CString("FRAGMENT"));
ComposedShader31.setParts(&ShaderPart39);

//<ShaderPart USE=\"commonfs\"></ShaderPart>
Appearance22.addChild(&ComposedShader31);

Shape20.addChild(&Appearance22);

Transform19.addChild(&Shape20);

Scene14.addChild(&Transform19);

X3D0.setScene(&Scene14);

}

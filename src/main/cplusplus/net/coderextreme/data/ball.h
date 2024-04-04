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
meta13.setName(CString("identifier"));
meta13.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("description"));
meta14.setContent(CString("a prismatic sphere"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
WorldInfo& WorldInfo16 =  WorldInfo();
WorldInfo16.setTitle(CString("ball.x3d"));
Scene15.addChild(&WorldInfo16);

NavigationInfo& NavigationInfo17 =  NavigationInfo();
NavigationInfo17.setType(new CString[4]{CString("ANY"), CString("EXAMINE"), CString("FLY"), CString("LOOKAT")}, 4);
Scene15.addChild(&NavigationInfo17);

Viewpoint& Viewpoint18 =  Viewpoint();
Viewpoint18.setDescription(CString("Tour Views"));
Scene15.addChild(&Viewpoint18);

Background& Background19 =  Background();
Background19.setBackUrl(new CString[1]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 1);
Background19.setBottomUrl(new CString[1]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 1);
Background19.setFrontUrl(new CString[1]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 1);
Background19.setLeftUrl(new CString[1]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 1);
Background19.setRightUrl(new CString[1]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 1);
Background19.setTopUrl(new CString[1]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 1);
Scene15.addChild(&Background19);

Transform& Transform20 =  Transform();
Shape& Shape21 =  Shape();
Sphere& Sphere22 =  Sphere();
Shape21.setGeometry(&Sphere22);

Appearance& Appearance23 =  Appearance();
Material& Material24 =  Material();
Material24.setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material24.setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance23.addChild(&Material24);

ComposedCubeMapTexture& ComposedCubeMapTexture25 =  ComposedCubeMapTexture();
ComposedCubeMapTexture25.setDEF(CString("texture"));
ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setUrl(new CString[1]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 1);
ComposedCubeMapTexture25.setBack(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setUrl(new CString[1]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 1);
ComposedCubeMapTexture25.setBottom(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setUrl(new CString[1]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 1);
ComposedCubeMapTexture25.setFront(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl(new CString[1]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 1);
ComposedCubeMapTexture25.setLeft(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setUrl(new CString[1]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 1);
ComposedCubeMapTexture25.setRight(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setUrl(new CString[1]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 1);
ComposedCubeMapTexture25.setTop(ImageTexture31);

Appearance23.addChild(&ComposedCubeMapTexture25);

//<ProgramShader DEF='ProgramShader' containerField='shaders' language='GLSL'> <ShaderProgram url='\"../shaders/freewrl.vs\"' containerField='programs' type='VERTEX'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'/> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'/> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'/> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'/> </ShaderProgram> <ShaderProgram url='\"../shaders/freewrl.fs\"' containerField='programs' type='FRAGMENT'/> </ProgramShader>
//<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field> <field name='fw_Texture_unit0' type='SFNode' accessType=\"initializeOnly\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/contact.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/octaga.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' accessType='initializeOnly' type='SFInt32' value='0'></field> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/instant.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
//
ComposedShader& ComposedShader32 =  ComposedShader();
ComposedShader32.setLanguage(CString("GLSL"));
field& field33 =  field();
field33.setName(CString("chromaticDispertion"));
field33.setAccessType(CString("inputOutput"));
field33.setType(CString("SFVec3f"));
field33.setValue(CString("0.98 1 1.033"));
ComposedShader32.addChild(&field33);

field& field34 =  field();
field34.setName(CString("cube"));
field34.setType(CString("SFNode"));
field34.setAccessType(CString("inputOutput"));
ComposedCubeMapTexture& ComposedCubeMapTexture35 =  ComposedCubeMapTexture();
ComposedCubeMapTexture35.setUSE(CString("texture"));
field34.addChild(&ComposedCubeMapTexture35);

ComposedShader32.addChild(&field34);

field& field36 =  field();
field36.setName(CString("bias"));
field36.setAccessType(CString("inputOutput"));
field36.setType(CString("SFFloat"));
field36.setValue(CString("0.5"));
ComposedShader32.addChild(&field36);

field& field37 =  field();
field37.setName(CString("scale"));
field37.setAccessType(CString("inputOutput"));
field37.setType(CString("SFFloat"));
field37.setValue(CString("0.5"));
ComposedShader32.addChild(&field37);

field& field38 =  field();
field38.setName(CString("power"));
field38.setAccessType(CString("inputOutput"));
field38.setType(CString("SFFloat"));
field38.setValue(CString("2"));
ComposedShader32.addChild(&field38);

ShaderPart& ShaderPart39 =  ShaderPart();
ShaderPart39.setUrl(new CString[1]{CString("../shaders/x3dom.vs")}, 1);
ShaderPart39.setType(CString("VERTEX"));
ComposedShader32.setParts(&ShaderPart39);

ShaderPart& ShaderPart40 =  ShaderPart();
ShaderPart40.setDEF(CString("common"));
ShaderPart40.setUrl(new CString[1]{CString("../shaders/common.fs")}, 1);
ShaderPart40.setType(CString("FRAGMENT"));
ComposedShader32.setParts(&ShaderPart40);

Appearance23.addChild(&ComposedShader32);

ComposedShader& ComposedShader41 =  ComposedShader();
ComposedShader41.setLanguage(CString("GLSL"));
field& field42 =  field();
field42.setName(CString("chromaticDispertion"));
field42.setAccessType(CString("initializeOnly"));
field42.setType(CString("SFVec3f"));
field42.setValue(CString("0.98 1 1.033"));
ComposedShader41.addChild(&field42);

field& field43 =  field();
field43.setName(CString("cube"));
field43.setType(CString("SFNode"));
field43.setAccessType(CString("initializeOnly"));
ComposedCubeMapTexture& ComposedCubeMapTexture44 =  ComposedCubeMapTexture();
ComposedCubeMapTexture44.setUSE(CString("texture"));
field43.addChild(&ComposedCubeMapTexture44);

ComposedShader41.addChild(&field43);

field& field45 =  field();
field45.setName(CString("bias"));
field45.setAccessType(CString("initializeOnly"));
field45.setType(CString("SFFloat"));
field45.setValue(CString("0.5"));
ComposedShader41.addChild(&field45);

field& field46 =  field();
field46.setName(CString("scale"));
field46.setAccessType(CString("initializeOnly"));
field46.setType(CString("SFFloat"));
field46.setValue(CString("0.5"));
ComposedShader41.addChild(&field46);

field& field47 =  field();
field47.setName(CString("power"));
field47.setAccessType(CString("initializeOnly"));
field47.setType(CString("SFFloat"));
field47.setValue(CString("2"));
ComposedShader41.addChild(&field47);

ShaderPart& ShaderPart48 =  ShaderPart();
ShaderPart48.setUrl(new CString[1]{CString("../shaders/x_ite.vs")}, 1);
ShaderPart48.setType(CString("VERTEX"));
ComposedShader41.setParts(&ShaderPart48);

ShaderPart& ShaderPart49 =  ShaderPart();
ShaderPart49.setUrl(new CString[1]{CString("../shaders/x_itebubbles.fs")}, 1);
ShaderPart49.setType(CString("FRAGMENT"));
ComposedShader41.setParts(&ShaderPart49);

Appearance23.addChild(&ComposedShader41);

Shape21.addChild(&Appearance23);

Transform20.addChild(&Shape21);

Scene15.addChild(&Transform20);

X3D0.setScene(&Scene15);

//}

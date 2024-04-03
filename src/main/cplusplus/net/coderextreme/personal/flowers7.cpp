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
Background18.setBackUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png")}, 2);
Background18.setBottomUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")}, 2);
Background18.setFrontUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png")}, 2);
Background18.setLeftUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png")}, 2);
Background18.setRightUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png")}, 2);
Background18.setTopUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png")}, 2);
Scene16.addChild(&Background18);

Viewpoint& Viewpoint19 =  Viewpoint();
Viewpoint19.setPosition(new float[3]{0,0,40});
Viewpoint19.setDescription(CString("Transparent rose"));
Scene16.addChild(&Viewpoint19);

Transform& Transform20 =  Transform();
Shape& Shape21 =  Shape();
Appearance& Appearance22 =  Appearance();
Material& Material23 =  Material();
Material23.setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material23.setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance22.addChild(&Material23);

ComposedCubeMapTexture& ComposedCubeMapTexture24 =  ComposedCubeMapTexture();
ComposedCubeMapTexture24.setDEF(CString("texture"));
ImageTexture& ImageTexture25 =  ImageTexture();
ImageTexture25.setDEF(CString("backShader"));
ImageTexture25.setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png")}, 2);
ComposedCubeMapTexture24.setBack(ImageTexture25);

ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setDEF(CString("bottomShader"));
ImageTexture26.setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")}, 2);
ComposedCubeMapTexture24.setBottom(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setDEF(CString("frontShader"));
ImageTexture27.setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png")}, 2);
ComposedCubeMapTexture24.setFront(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setDEF(CString("leftShader"));
ImageTexture28.setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png")}, 2);
ComposedCubeMapTexture24.setLeft(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setDEF(CString("rightShader"));
ImageTexture29.setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png")}, 2);
ComposedCubeMapTexture24.setRight(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setDEF(CString("topShader"));
ImageTexture30.setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png")}, 2);
ComposedCubeMapTexture24.setTop(ImageTexture30);

Appearance22.addChild(&ComposedCubeMapTexture24);

//<ComposedShader DEF='x3dom' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field> <field name='b' type='SFFloat' accessType='inputOutput' value='1'></field> <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\"' containerField='parts' type='VERTEX'></ShaderPart> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
ComposedShader& ComposedShader31 =  ComposedShader();
ComposedShader31.setDEF(CString("x_ite"));
ComposedShader31.setLanguage(CString("GLSL"));
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
field35.setAccessType(CString("inputOnly"));
field35.setValue(CString("0.5"));
ComposedShader31.addChild(&field35);

field& field36 =  field();
field36.setName(CString("scale"));
field36.setType(CString("SFFloat"));
field36.setAccessType(CString("inputOnly"));
field36.setValue(CString("0.5"));
ComposedShader31.addChild(&field36);

field& field37 =  field();
field37.setName(CString("power"));
field37.setType(CString("SFFloat"));
field37.setAccessType(CString("inputOnly"));
field37.setValue(CString("2"));
ComposedShader31.addChild(&field37);

field& field38 =  field();
field38.setName(CString("a"));
field38.setType(CString("SFFloat"));
field38.setAccessType(CString("inputOnly"));
field38.setValue(CString("10"));
ComposedShader31.addChild(&field38);

field& field39 =  field();
field39.setName(CString("b"));
field39.setType(CString("SFFloat"));
field39.setAccessType(CString("inputOnly"));
field39.setValue(CString("1"));
ComposedShader31.addChild(&field39);

field& field40 =  field();
field40.setName(CString("c"));
field40.setType(CString("SFFloat"));
field40.setAccessType(CString("inputOnly"));
field40.setValue(CString("20"));
ComposedShader31.addChild(&field40);

field& field41 =  field();
field41.setName(CString("d"));
field41.setType(CString("SFFloat"));
field41.setAccessType(CString("inputOnly"));
field41.setValue(CString("20"));
ComposedShader31.addChild(&field41);

field& field42 =  field();
field42.setName(CString("tdelta"));
field42.setType(CString("SFFloat"));
field42.setAccessType(CString("inputOnly"));
field42.setValue(CString("0"));
ComposedShader31.addChild(&field42);

field& field43 =  field();
field43.setName(CString("pdelta"));
field43.setType(CString("SFFloat"));
field43.setAccessType(CString("inputOnly"));
field43.setValue(CString("0"));
ComposedShader31.addChild(&field43);

ShaderPart& ShaderPart44 =  ShaderPart();
ShaderPart44.setUrl(new CString[2]{CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs")}, 2);
ShaderPart44.setType(CString("VERTEX"));
ComposedShader31.setParts(&ShaderPart44);

ShaderPart& ShaderPart45 =  ShaderPart();
ShaderPart45.setUrl(new CString[2]{CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")}, 2);
ShaderPart45.setType(CString("FRAGMENT"));
ComposedShader31.setParts(&ShaderPart45);

Appearance22.addChild(&ComposedShader31);

Shape21.addChild(&Appearance22);

Sphere& Sphere46 =  Sphere();
Shape21.setGeometry(&Sphere46);

Transform20.addChild(&Shape21);

Scene16.addChild(&Transform20);

Script& Script47 =  Script();
Script47.setDEF(CString("UrlSelector"));
Script47.setDirectOutput(True);
field& field48 =  field();
field48.setName(CString("frontUrls"));
field48.setType(CString("MFString"));
field48.setAccessType(CString("initializeOnly"));
field48.setValue(CString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png\""));
Script47.addChild(&field48);

field& field49 =  field();
field49.setName(CString("backUrls"));
field49.setType(CString("MFString"));
field49.setAccessType(CString("initializeOnly"));
field49.setValue(CString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png\""));
Script47.addChild(&field49);

field& field50 =  field();
field50.setName(CString("leftUrls"));
field50.setType(CString("MFString"));
field50.setAccessType(CString("initializeOnly"));
field50.setValue(CString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png\""));
Script47.addChild(&field50);

field& field51 =  field();
field51.setName(CString("rightUrls"));
field51.setType(CString("MFString"));
field51.setAccessType(CString("initializeOnly"));
field51.setValue(CString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png\""));
Script47.addChild(&field51);

field& field52 =  field();
field52.setName(CString("topUrls"));
field52.setType(CString("MFString"));
field52.setAccessType(CString("initializeOnly"));
field52.setValue(CString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png\""));
Script47.addChild(&field52);

field& field53 =  field();
field53.setName(CString("bottomUrls"));
field53.setType(CString("MFString"));
field53.setAccessType(CString("initializeOnly"));
field53.setValue(CString("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png\""));
Script47.addChild(&field53);

field& field54 =  field();
field54.setName(CString("front"));
field54.setType(CString("MFString"));
field54.setAccessType(CString("inputOutput"));
Script47.addChild(&field54);

field& field55 =  field();
field55.setName(CString("back"));
field55.setType(CString("MFString"));
field55.setAccessType(CString("inputOutput"));
Script47.addChild(&field55);

field& field56 =  field();
field56.setName(CString("left"));
field56.setType(CString("MFString"));
field56.setAccessType(CString("inputOutput"));
Script47.addChild(&field56);

field& field57 =  field();
field57.setName(CString("right"));
field57.setType(CString("MFString"));
field57.setAccessType(CString("inputOutput"));
Script47.addChild(&field57);

field& field58 =  field();
field58.setName(CString("top"));
field58.setType(CString("MFString"));
field58.setAccessType(CString("inputOutput"));
Script47.addChild(&field58);

field& field59 =  field();
field59.setName(CString("bottom"));
field59.setType(CString("MFString"));
field59.setAccessType(CString("inputOutput"));
Script47.addChild(&field59);

field& field60 =  field();
field60.setName(CString("set_fraction"));
field60.setType(CString("SFFloat"));
field60.setAccessType(CString("inputOnly"));
Script47.addChild(&field60);

field& field61 =  field();
field61.setName(CString("old"));
field61.setType(CString("SFInt32"));
field61.setAccessType(CString("inputOutput"));
field61.setValue(CString("-1"));
Script47.addChild(&field61);


Script47.setSourceCode(CString("ecmascript:")+
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
Scene16.addChild(&Script47);

//<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>
Script& Script62 =  Script();
Script62.setDEF(CString("Animate"));
Script62.setDirectOutput(True);
field& field63 =  field();
field63.setName(CString("set_fraction"));
field63.setType(CString("SFFloat"));
field63.setAccessType(CString("inputOnly"));
Script62.addChild(&field63);

field& field64 =  field();
field64.setName(CString("a"));
field64.setType(CString("SFFloat"));
field64.setAccessType(CString("inputOutput"));
field64.setValue(CString("10"));
Script62.addChild(&field64);

field& field65 =  field();
field65.setName(CString("b"));
field65.setType(CString("SFFloat"));
field65.setAccessType(CString("inputOutput"));
field65.setValue(CString("1"));
Script62.addChild(&field65);

field& field66 =  field();
field66.setName(CString("c"));
field66.setType(CString("SFFloat"));
field66.setAccessType(CString("inputOutput"));
field66.setValue(CString("20"));
Script62.addChild(&field66);

field& field67 =  field();
field67.setName(CString("d"));
field67.setType(CString("SFFloat"));
field67.setAccessType(CString("inputOutput"));
field67.setValue(CString("20"));
Script62.addChild(&field67);

field& field68 =  field();
field68.setName(CString("tdelta"));
field68.setType(CString("SFFloat"));
field68.setAccessType(CString("inputOutput"));
field68.setValue(CString("0"));
Script62.addChild(&field68);

field& field69 =  field();
field69.setName(CString("pdelta"));
field69.setType(CString("SFFloat"));
field69.setAccessType(CString("inputOutput"));
field69.setValue(CString("0"));
Script62.addChild(&field69);


Script62.setSourceCode(CString("ecmascript:")+
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
Scene16.addChild(&Script62);

TimeSensor& TimeSensor70 =  TimeSensor();
TimeSensor70.setDEF(CString("TourTime"));
TimeSensor70.setCycleInterval(5);
TimeSensor70.setLoop(True);
Scene16.addChild(&TimeSensor70);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromNode(CString("TourTime"));
ROUTE71.setFromField(CString("fraction_changed"));
ROUTE71.setToNode(CString("Animate"));
ROUTE71.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE71);

ROUTE& ROUTE72 =  ROUTE();
ROUTE72.setFromNode(CString("Animate"));
ROUTE72.setFromField(CString("a"));
ROUTE72.setToNode(CString("x_ite"));
ROUTE72.setToField(CString("a"));
Scene16.addChild(&ROUTE72);

ROUTE& ROUTE73 =  ROUTE();
ROUTE73.setFromNode(CString("Animate"));
ROUTE73.setFromField(CString("b"));
ROUTE73.setToNode(CString("x_ite"));
ROUTE73.setToField(CString("b"));
Scene16.addChild(&ROUTE73);

ROUTE& ROUTE74 =  ROUTE();
ROUTE74.setFromNode(CString("Animate"));
ROUTE74.setFromField(CString("c"));
ROUTE74.setToNode(CString("x_ite"));
ROUTE74.setToField(CString("c"));
Scene16.addChild(&ROUTE74);

ROUTE& ROUTE75 =  ROUTE();
ROUTE75.setFromNode(CString("Animate"));
ROUTE75.setFromField(CString("d"));
ROUTE75.setToNode(CString("x_ite"));
ROUTE75.setToField(CString("d"));
Scene16.addChild(&ROUTE75);

ROUTE& ROUTE76 =  ROUTE();
ROUTE76.setFromNode(CString("Animate"));
ROUTE76.setFromField(CString("pdelta"));
ROUTE76.setToNode(CString("x_ite"));
ROUTE76.setToField(CString("pdelta"));
Scene16.addChild(&ROUTE76);

ROUTE& ROUTE77 =  ROUTE();
ROUTE77.setFromNode(CString("Animate"));
ROUTE77.setFromField(CString("tdelta"));
ROUTE77.setToNode(CString("x_ite"));
ROUTE77.setToField(CString("tdelta"));
Scene16.addChild(&ROUTE77);

ROUTE& ROUTE78 =  ROUTE();
ROUTE78.setFromNode(CString("Animate"));
ROUTE78.setFromField(CString("a"));
ROUTE78.setToNode(CString("x3dom"));
ROUTE78.setToField(CString("a"));
Scene16.addChild(&ROUTE78);

ROUTE& ROUTE79 =  ROUTE();
ROUTE79.setFromNode(CString("Animate"));
ROUTE79.setFromField(CString("b"));
ROUTE79.setToNode(CString("x3dom"));
ROUTE79.setToField(CString("b"));
Scene16.addChild(&ROUTE79);

ROUTE& ROUTE80 =  ROUTE();
ROUTE80.setFromNode(CString("Animate"));
ROUTE80.setFromField(CString("c"));
ROUTE80.setToNode(CString("x3dom"));
ROUTE80.setToField(CString("c"));
Scene16.addChild(&ROUTE80);

ROUTE& ROUTE81 =  ROUTE();
ROUTE81.setFromNode(CString("Animate"));
ROUTE81.setFromField(CString("d"));
ROUTE81.setToNode(CString("x3dom"));
ROUTE81.setToField(CString("d"));
Scene16.addChild(&ROUTE81);

ROUTE& ROUTE82 =  ROUTE();
ROUTE82.setFromNode(CString("Animate"));
ROUTE82.setFromField(CString("pdelta"));
ROUTE82.setToNode(CString("x3dom"));
ROUTE82.setToField(CString("pdelta"));
Scene16.addChild(&ROUTE82);

ROUTE& ROUTE83 =  ROUTE();
ROUTE83.setFromNode(CString("Animate"));
ROUTE83.setFromField(CString("tdelta"));
ROUTE83.setToNode(CString("x3dom"));
ROUTE83.setToField(CString("tdelta"));
Scene16.addChild(&ROUTE83);

X3D0.setScene(&Scene16);

}

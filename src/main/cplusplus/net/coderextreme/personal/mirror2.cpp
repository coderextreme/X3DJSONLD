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
meta11.setContent(CString("mirror2.x3d"));
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
meta14.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("description"));
meta15.setContent(CString("a mirrored sphere"));
head1.addMeta(&meta15);

X3D0.setHead(&head1);

Scene& Scene16 =  Scene();
Viewpoint& Viewpoint17 =  Viewpoint();
Viewpoint17.setPosition(new float[3]{0,5,100});
Viewpoint17.setDescription(CString("Switch background and images texture"));
Scene16.addChild(&Viewpoint17);

Background& Background18 =  Background();
Background18.setDEF(CString("cube"));
Background18.setLeftUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png")}, 2);
Background18.setRightUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png")}, 2);
Background18.setFrontUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png")}, 2);
Background18.setBackUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png")}, 2);
Background18.setTopUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png")}, 2);
Background18.setBottomUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")}, 2);
Scene16.addChild(&Background18);

Transform& Transform19 =  Transform();
Shape& Shape20 =  Shape();
Appearance& Appearance21 =  Appearance();
Material& Material22 =  Material();
Material22.setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material22.setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance21.addChild(&Material22);

ComposedCubeMapTexture& ComposedCubeMapTexture23 =  ComposedCubeMapTexture();
ImageTexture& ImageTexture24 =  ImageTexture();
ImageTexture24.setDEF(CString("backShader"));
ImageTexture24.setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png")}, 2);
ComposedCubeMapTexture23.setBack(ImageTexture24);

ImageTexture& ImageTexture25 =  ImageTexture();
ImageTexture25.setDEF(CString("bottomShader"));
ImageTexture25.setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")}, 2);
ComposedCubeMapTexture23.setBottom(ImageTexture25);

ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setDEF(CString("frontShader"));
ImageTexture26.setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png")}, 2);
ComposedCubeMapTexture23.setFront(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setDEF(CString("leftShader"));
ImageTexture27.setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png")}, 2);
ComposedCubeMapTexture23.setLeft(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setDEF(CString("rightShader"));
ImageTexture28.setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png")}, 2);
ComposedCubeMapTexture23.setRight(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setDEF(CString("topShader"));
ImageTexture29.setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png")}, 2);
ComposedCubeMapTexture23.setTop(ImageTexture29);

Appearance21.addChild(&ComposedCubeMapTexture23);

ComposedShader& ComposedShader30 =  ComposedShader();
ComposedShader30.setDEF(CString("x_ite"));
ComposedShader30.setLanguage(CString("GLSL"));
//http://hypertextbook.com/facts/2005/JustinChe.shtml
field& field31 =  field();
field31.setName(CString("chromaticDispertion"));
field31.setAccessType(CString("inputOutput"));
field31.setType(CString("SFVec3f"));
field31.setValue(CString("0.98 1 1.033"));
ComposedShader30.addChild(&field31);

field& field32 =  field();
field32.setName(CString("cube"));
field32.setAccessType(CString("inputOutput"));
field32.setType(CString("SFInt32"));
field32.setValue(CString("0"));
ComposedShader30.addChild(&field32);

field& field33 =  field();
field33.setName(CString("bias"));
field33.setAccessType(CString("inputOutput"));
field33.setType(CString("SFFloat"));
field33.setValue(CString("0.5"));
ComposedShader30.addChild(&field33);

field& field34 =  field();
field34.setName(CString("scale"));
field34.setAccessType(CString("inputOutput"));
field34.setType(CString("SFFloat"));
field34.setValue(CString("0.5"));
ComposedShader30.addChild(&field34);

field& field35 =  field();
field35.setName(CString("power"));
field35.setAccessType(CString("inputOutput"));
field35.setType(CString("SFFloat"));
field35.setValue(CString("2"));
ComposedShader30.addChild(&field35);

ShaderPart& ShaderPart36 =  ShaderPart();
ShaderPart36.setUrl(new CString[2]{CString("../shaders/x_ite.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs")}, 2);
ShaderPart36.setType(CString("VERTEX"));
ComposedShader30.setParts(&ShaderPart36);

ShaderPart& ShaderPart37 =  ShaderPart();
ShaderPart37.setUrl(new CString[2]{CString("../shaders/x_itemix.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs")}, 2);
ShaderPart37.setType(CString("FRAGMENT"));
ComposedShader30.setParts(&ShaderPart37);

Appearance21.addChild(&ComposedShader30);

ComposedShader& ComposedShader38 =  ComposedShader();
ComposedShader38.setDEF(CString("x3dom"));
ComposedShader38.setLanguage(CString("GLSL"));
field& field39 =  field();
field39.setName(CString("chromaticDispertion"));
field39.setAccessType(CString("inputOutput"));
field39.setType(CString("SFVec3f"));
field39.setValue(CString("0.98 1 1.033"));
ComposedShader38.addChild(&field39);

field& field40 =  field();
field40.setName(CString("cube"));
field40.setAccessType(CString("inputOutput"));
field40.setType(CString("SFInt32"));
field40.setValue(CString("0"));
ComposedShader38.addChild(&field40);

field& field41 =  field();
field41.setName(CString("bias"));
field41.setAccessType(CString("inputOutput"));
field41.setType(CString("SFFloat"));
field41.setValue(CString("0.5"));
ComposedShader38.addChild(&field41);

field& field42 =  field();
field42.setName(CString("scale"));
field42.setAccessType(CString("inputOutput"));
field42.setType(CString("SFFloat"));
field42.setValue(CString("0.5"));
ComposedShader38.addChild(&field42);

field& field43 =  field();
field43.setName(CString("power"));
field43.setAccessType(CString("inputOutput"));
field43.setType(CString("SFFloat"));
field43.setValue(CString("2"));
ComposedShader38.addChild(&field43);

ShaderPart& ShaderPart44 =  ShaderPart();
ShaderPart44.setUrl(new CString[2]{CString("../shaders/x3dom.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs")}, 2);
ShaderPart44.setType(CString("VERTEX"));
ComposedShader38.setParts(&ShaderPart44);

ShaderPart& ShaderPart45 =  ShaderPart();
ShaderPart45.setUrl(new CString[2]{CString("../shaders/mix.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs")}, 2);
ShaderPart45.setType(CString("FRAGMENT"));
ComposedShader38.setParts(&ShaderPart45);

Appearance21.addChild(&ComposedShader38);

Shape20.addChild(&Appearance21);

Sphere& Sphere46 =  Sphere();
Sphere46.setRadius(30);
Shape20.setGeometry(&Sphere46);

Transform19.addChild(&Shape20);

Script& Script47 =  Script();
Script47.setDEF(CString("UrlSelector"));
Script47.setDirectOutput(True);
field& field48 =  field();
field48.setName(CString("frontUrls"));
field48.setType(CString("MFString"));
field48.setAccessType(CString("initializeOnly"));
field48.setValue(CString("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\""));
Script47.addChild(&field48);

field& field49 =  field();
field49.setName(CString("backUrls"));
field49.setType(CString("MFString"));
field49.setAccessType(CString("initializeOnly"));
field49.setValue(CString("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\""));
Script47.addChild(&field49);

field& field50 =  field();
field50.setName(CString("leftUrls"));
field50.setType(CString("MFString"));
field50.setAccessType(CString("initializeOnly"));
field50.setValue(CString("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\""));
Script47.addChild(&field50);

field& field51 =  field();
field51.setName(CString("rightUrls"));
field51.setType(CString("MFString"));
field51.setAccessType(CString("initializeOnly"));
field51.setValue(CString("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\""));
Script47.addChild(&field51);

field& field52 =  field();
field52.setName(CString("topUrls"));
field52.setType(CString("MFString"));
field52.setAccessType(CString("initializeOnly"));
field52.setValue(CString("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\""));
Script47.addChild(&field52);

field& field53 =  field();
field53.setName(CString("bottomUrls"));
field53.setType(CString("MFString"));
field53.setAccessType(CString("initializeOnly"));
field53.setValue(CString("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\""));
Script47.addChild(&field53);

field& field54 =  field();
field54.setName(CString("front_changed"));
field54.setType(CString("MFString"));
field54.setAccessType(CString("outputOnly"));
Script47.addChild(&field54);

field& field55 =  field();
field55.setName(CString("back_changed"));
field55.setType(CString("MFString"));
field55.setAccessType(CString("outputOnly"));
Script47.addChild(&field55);

field& field56 =  field();
field56.setName(CString("left_changed"));
field56.setType(CString("MFString"));
field56.setAccessType(CString("outputOnly"));
Script47.addChild(&field56);

field& field57 =  field();
field57.setName(CString("right_changed"));
field57.setType(CString("MFString"));
field57.setAccessType(CString("outputOnly"));
Script47.addChild(&field57);

field& field58 =  field();
field58.setName(CString("top_changed"));
field58.setType(CString("MFString"));
field58.setAccessType(CString("outputOnly"));
Script47.addChild(&field58);

field& field59 =  field();
field59.setName(CString("bottom_changed"));
field59.setType(CString("MFString"));
field59.setAccessType(CString("outputOnly"));
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
_T("	    var side = Math.floor(f*frontUrls.length);")+
_T("	    if (side > frontUrls.length-1) {")+
_T("	    	side = 0;")+
_T("	    }")+
_T("	    if (side != old) {")+
_T("	    	    // Browser.print(f+\" \"+side);")+
_T("	    	    old = side;")+
_T("		    front_changed[0] = frontUrls[side];")+
_T("		    back_changed[0] = backUrls[side];")+
_T("		    left_changed[0] = leftUrls[side];")+
_T("		    right_changed[0] = rightUrls[side];")+
_T("		    top_changed[0] = topUrls[side];")+
_T("		    bottom_changed[0] = bottomUrls[side];")+
_T("            }")+
_T("        }"));
Transform19.addChild(&Script47);

TimeSensor& TimeSensor62 =  TimeSensor();
TimeSensor62.setDEF(CString("Clock"));
TimeSensor62.setCycleInterval(45);
TimeSensor62.setLoop(True);
Transform19.addChild(&TimeSensor62);

ROUTE& ROUTE63 =  ROUTE();
ROUTE63.setFromNode(CString("Clock"));
ROUTE63.setFromField(CString("fraction_changed"));
ROUTE63.setToNode(CString("UrlSelector"));
ROUTE63.setToField(CString("set_fraction"));
Transform19.addChild(&ROUTE63);

ROUTE& ROUTE64 =  ROUTE();
ROUTE64.setFromNode(CString("UrlSelector"));
ROUTE64.setFromField(CString("front_changed"));
ROUTE64.setToNode(CString("cube"));
ROUTE64.setToField(CString("frontUrl"));
Transform19.addChild(&ROUTE64);

ROUTE& ROUTE65 =  ROUTE();
ROUTE65.setFromNode(CString("UrlSelector"));
ROUTE65.setFromField(CString("back_changed"));
ROUTE65.setToNode(CString("cube"));
ROUTE65.setToField(CString("backUrl"));
Transform19.addChild(&ROUTE65);

ROUTE& ROUTE66 =  ROUTE();
ROUTE66.setFromNode(CString("UrlSelector"));
ROUTE66.setFromField(CString("left_changed"));
ROUTE66.setToNode(CString("cube"));
ROUTE66.setToField(CString("leftUrl"));
Transform19.addChild(&ROUTE66);

ROUTE& ROUTE67 =  ROUTE();
ROUTE67.setFromNode(CString("UrlSelector"));
ROUTE67.setFromField(CString("right_changed"));
ROUTE67.setToNode(CString("cube"));
ROUTE67.setToField(CString("rightUrl"));
Transform19.addChild(&ROUTE67);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromNode(CString("UrlSelector"));
ROUTE68.setFromField(CString("top_changed"));
ROUTE68.setToNode(CString("cube"));
ROUTE68.setToField(CString("topUrl"));
Transform19.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromNode(CString("UrlSelector"));
ROUTE69.setFromField(CString("bottom_changed"));
ROUTE69.setToNode(CString("cube"));
ROUTE69.setToField(CString("bottomUrl"));
Transform19.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromNode(CString("UrlSelector"));
ROUTE70.setFromField(CString("front_changed"));
ROUTE70.setToNode(CString("frontShader"));
ROUTE70.setToField(CString("url"));
Transform19.addChild(&ROUTE70);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromNode(CString("UrlSelector"));
ROUTE71.setFromField(CString("back_changed"));
ROUTE71.setToNode(CString("backShader"));
ROUTE71.setToField(CString("url"));
Transform19.addChild(&ROUTE71);

ROUTE& ROUTE72 =  ROUTE();
ROUTE72.setFromNode(CString("UrlSelector"));
ROUTE72.setFromField(CString("left_changed"));
ROUTE72.setToNode(CString("leftShader"));
ROUTE72.setToField(CString("url"));
Transform19.addChild(&ROUTE72);

ROUTE& ROUTE73 =  ROUTE();
ROUTE73.setFromNode(CString("UrlSelector"));
ROUTE73.setFromField(CString("right_changed"));
ROUTE73.setToNode(CString("rightShader"));
ROUTE73.setToField(CString("url"));
Transform19.addChild(&ROUTE73);

ROUTE& ROUTE74 =  ROUTE();
ROUTE74.setFromNode(CString("UrlSelector"));
ROUTE74.setFromField(CString("top_changed"));
ROUTE74.setToNode(CString("topShader"));
ROUTE74.setToField(CString("url"));
Transform19.addChild(&ROUTE74);

ROUTE& ROUTE75 =  ROUTE();
ROUTE75.setFromNode(CString("UrlSelector"));
ROUTE75.setFromField(CString("bottom_changed"));
ROUTE75.setToNode(CString("bottomShader"));
ROUTE75.setToField(CString("url"));
Transform19.addChild(&ROUTE75);

Scene16.addChild(&Transform19);

X3D0.setScene(&Scene16);

}

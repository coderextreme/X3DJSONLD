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
meta11.setContent(CString("mirror.x3d"));
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
meta14.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/mirror.x3d"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("description"));
meta15.setContent(CString("sphere with alternating backgrounds"));
head1.addMeta(&meta15);

X3D0.setHead(&head1);

Scene& Scene16 =  Scene();
Viewpoint& Viewpoint17 =  Viewpoint();
Viewpoint17.setPosition(new float[3]{0,5,100});
Viewpoint17.setDescription(CString("Switch background and images texture"));
Scene16.addChild(&Viewpoint17);

TextureBackground& TextureBackground18 =  TextureBackground();
ImageTexture& ImageTexture19 =  ImageTexture();
ImageTexture19.setDEF(CString("leftBackgroundTexture"));
ImageTexture19.setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_left.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png")}, 2);
TextureBackground18.setLeftTexture(ImageTexture19);

ImageTexture& ImageTexture20 =  ImageTexture();
ImageTexture20.setDEF(CString("rightBackgroundTexture"));
ImageTexture20.setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_right.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png")}, 2);
TextureBackground18.setRightTexture(ImageTexture20);

ImageTexture& ImageTexture21 =  ImageTexture();
ImageTexture21.setDEF(CString("frontBackgroundTexture"));
ImageTexture21.setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_front.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png")}, 2);
TextureBackground18.setFrontTexture(ImageTexture21);

ImageTexture& ImageTexture22 =  ImageTexture();
ImageTexture22.setDEF(CString("backBackgroundTexture"));
ImageTexture22.setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_back.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png")}, 2);
TextureBackground18.setBackTexture(ImageTexture22);

ImageTexture& ImageTexture23 =  ImageTexture();
ImageTexture23.setDEF(CString("topBackgroundTexture"));
ImageTexture23.setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_top.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png")}, 2);
TextureBackground18.setTopTexture(ImageTexture23);

ImageTexture& ImageTexture24 =  ImageTexture();
ImageTexture24.setDEF(CString("bottomBackgroundTexture"));
ImageTexture24.setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_bottom.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")}, 2);
TextureBackground18.setBottomTexture(ImageTexture24);

Scene16.addChild(&TextureBackground18);

Transform& Transform25 =  Transform();
Shape& Shape26 =  Shape();
Appearance& Appearance27 =  Appearance();
Material& Material28 =  Material();
Material28.setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material28.setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance27.addChild(&Material28);

ComposedCubeMapTexture& ComposedCubeMapTexture29 =  ComposedCubeMapTexture();
ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setDEF(CString("backShader"));
ImageTexture30.setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_back.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png")}, 2);
ComposedCubeMapTexture29.setBack(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setDEF(CString("bottomShader"));
ImageTexture31.setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_bottom.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")}, 2);
ComposedCubeMapTexture29.setBottom(ImageTexture31);

ImageTexture& ImageTexture32 =  ImageTexture();
ImageTexture32.setDEF(CString("frontShader"));
ImageTexture32.setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_front.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png")}, 2);
ComposedCubeMapTexture29.setFront(ImageTexture32);

ImageTexture& ImageTexture33 =  ImageTexture();
ImageTexture33.setDEF(CString("leftShader"));
ImageTexture33.setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_left.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png")}, 2);
ComposedCubeMapTexture29.setLeft(ImageTexture33);

ImageTexture& ImageTexture34 =  ImageTexture();
ImageTexture34.setDEF(CString("rightShader"));
ImageTexture34.setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_right.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png")}, 2);
ComposedCubeMapTexture29.setRight(ImageTexture34);

ImageTexture& ImageTexture35 =  ImageTexture();
ImageTexture35.setDEF(CString("topShader"));
ImageTexture35.setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_top.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png")}, 2);
ComposedCubeMapTexture29.setTop(ImageTexture35);

Appearance27.addChild(&ComposedCubeMapTexture29);

ComposedShader& ComposedShader36 =  ComposedShader();
ComposedShader36.setDEF(CString("x3dom"));
ComposedShader36.setLanguage(CString("GLSL"));
field& field37 =  field();
field37.setName(CString("chromaticDispertion"));
field37.setAccessType(CString("inputOutput"));
field37.setType(CString("SFVec3f"));
field37.setValue(CString("0.98 1 1.033"));
ComposedShader36.addChild(&field37);

field& field38 =  field();
field38.setName(CString("cube"));
field38.setAccessType(CString("inputOutput"));
field38.setType(CString("SFInt32"));
field38.setValue(CString("0"));
ComposedShader36.addChild(&field38);

field& field39 =  field();
field39.setName(CString("bias"));
field39.setAccessType(CString("inputOutput"));
field39.setType(CString("SFFloat"));
field39.setValue(CString("0.5"));
ComposedShader36.addChild(&field39);

field& field40 =  field();
field40.setName(CString("scale"));
field40.setAccessType(CString("inputOutput"));
field40.setType(CString("SFFloat"));
field40.setValue(CString("0.5"));
ComposedShader36.addChild(&field40);

field& field41 =  field();
field41.setName(CString("power"));
field41.setAccessType(CString("inputOutput"));
field41.setType(CString("SFFloat"));
field41.setValue(CString("2"));
ComposedShader36.addChild(&field41);

ShaderPart& ShaderPart42 =  ShaderPart();
ShaderPart42.setUrl(new CString[2]{CString("../shaders/x3dom.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs")}, 2);
ShaderPart42.setType(CString("VERTEX"));
ComposedShader36.setParts(&ShaderPart42);

ShaderPart& ShaderPart43 =  ShaderPart();
ShaderPart43.setUrl(new CString[2]{CString("../shaders/mix.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs")}, 2);
ShaderPart43.setType(CString("FRAGMENT"));
ComposedShader36.setParts(&ShaderPart43);

Appearance27.addChild(&ComposedShader36);

ComposedShader& ComposedShader44 =  ComposedShader();
ComposedShader44.setDEF(CString("x_ite"));
ComposedShader44.setLanguage(CString("GLSL"));
//http://hypertextbook.com/facts/2005/JustinChe.shtml
field& field45 =  field();
field45.setName(CString("chromaticDispertion"));
field45.setAccessType(CString("inputOutput"));
field45.setType(CString("SFVec3f"));
field45.setValue(CString("0.98 1 1.033"));
ComposedShader44.addChild(&field45);

field& field46 =  field();
field46.setName(CString("cube"));
field46.setAccessType(CString("inputOutput"));
field46.setType(CString("SFInt32"));
field46.setValue(CString("0"));
ComposedShader44.addChild(&field46);

field& field47 =  field();
field47.setName(CString("bias"));
field47.setAccessType(CString("inputOutput"));
field47.setType(CString("SFFloat"));
field47.setValue(CString("0.5"));
ComposedShader44.addChild(&field47);

field& field48 =  field();
field48.setName(CString("scale"));
field48.setAccessType(CString("inputOutput"));
field48.setType(CString("SFFloat"));
field48.setValue(CString("0.5"));
ComposedShader44.addChild(&field48);

field& field49 =  field();
field49.setName(CString("power"));
field49.setAccessType(CString("inputOutput"));
field49.setType(CString("SFFloat"));
field49.setValue(CString("2"));
ComposedShader44.addChild(&field49);

ShaderPart& ShaderPart50 =  ShaderPart();
ShaderPart50.setUrl(new CString[2]{CString("../shaders/x_ite.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs")}, 2);
ShaderPart50.setType(CString("VERTEX"));
ComposedShader44.setParts(&ShaderPart50);

ShaderPart& ShaderPart51 =  ShaderPart();
ShaderPart51.setUrl(new CString[2]{CString("../shaders/x_itemix.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs")}, 2);
ShaderPart51.setType(CString("FRAGMENT"));
ComposedShader44.setParts(&ShaderPart51);

Appearance27.addChild(&ComposedShader44);

Shape26.addChild(&Appearance27);

Sphere& Sphere52 =  Sphere();
Sphere52.setRadius(30);
Shape26.setGeometry(&Sphere52);

Transform25.addChild(&Shape26);

Script& Script53 =  Script();
Script53.setDEF(CString("UrlSelector"));
Script53.setDirectOutput(True);
field& field54 =  field();
field54.setName(CString("frontUrls"));
field54.setType(CString("MFString"));
field54.setAccessType(CString("initializeOnly"));
field54.setValue(CString("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\""));
Script53.addChild(&field54);

field& field55 =  field();
field55.setName(CString("backUrls"));
field55.setType(CString("MFString"));
field55.setAccessType(CString("initializeOnly"));
field55.setValue(CString("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\""));
Script53.addChild(&field55);

field& field56 =  field();
field56.setName(CString("leftUrls"));
field56.setType(CString("MFString"));
field56.setAccessType(CString("initializeOnly"));
field56.setValue(CString("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\""));
Script53.addChild(&field56);

field& field57 =  field();
field57.setName(CString("rightUrls"));
field57.setType(CString("MFString"));
field57.setAccessType(CString("initializeOnly"));
field57.setValue(CString("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\""));
Script53.addChild(&field57);

field& field58 =  field();
field58.setName(CString("topUrls"));
field58.setType(CString("MFString"));
field58.setAccessType(CString("initializeOnly"));
field58.setValue(CString("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\""));
Script53.addChild(&field58);

field& field59 =  field();
field59.setName(CString("bottomUrls"));
field59.setType(CString("MFString"));
field59.setAccessType(CString("initializeOnly"));
field59.setValue(CString("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\""));
Script53.addChild(&field59);

field& field60 =  field();
field60.setName(CString("front_changed"));
field60.setType(CString("MFString"));
field60.setAccessType(CString("outputOnly"));
Script53.addChild(&field60);

field& field61 =  field();
field61.setName(CString("back_changed"));
field61.setType(CString("MFString"));
field61.setAccessType(CString("outputOnly"));
Script53.addChild(&field61);

field& field62 =  field();
field62.setName(CString("left_changed"));
field62.setType(CString("MFString"));
field62.setAccessType(CString("outputOnly"));
Script53.addChild(&field62);

field& field63 =  field();
field63.setName(CString("right_changed"));
field63.setType(CString("MFString"));
field63.setAccessType(CString("outputOnly"));
Script53.addChild(&field63);

field& field64 =  field();
field64.setName(CString("top_changed"));
field64.setType(CString("MFString"));
field64.setAccessType(CString("outputOnly"));
Script53.addChild(&field64);

field& field65 =  field();
field65.setName(CString("bottom_changed"));
field65.setType(CString("MFString"));
field65.setAccessType(CString("outputOnly"));
Script53.addChild(&field65);

field& field66 =  field();
field66.setName(CString("set_fraction"));
field66.setType(CString("SFFloat"));
field66.setAccessType(CString("inputOnly"));
Script53.addChild(&field66);

field& field67 =  field();
field67.setName(CString("old"));
field67.setType(CString("SFInt32"));
field67.setAccessType(CString("inputOutput"));
field67.setValue(CString("-1"));
Script53.addChild(&field67);


Script53.setSourceCode(CString("ecmascript:")+
_T("        function set_fraction( f, tm ) {")+
_T("	    var side = Math.floor(f*frontUrls.length);")+
_T("	    if (side > frontUrls.length-1) {")+
_T("	    	side = 0;")+
_T("	    }")+
_T("	    if (side != old) {")+
_T("	    	    Browser.print(f+\" \"+side);")+
_T("	    	    old = side;")+
_T("		    front_changed[0] = frontUrls[side];")+
_T("		    back_changed[0] = backUrls[side];")+
_T("		    left_changed[0] = leftUrls[side];")+
_T("		    right_changed[0] = rightUrls[side];")+
_T("		    top_changed[0] = topUrls[side];")+
_T("		    bottom_changed[0] = bottomUrls[side];")+
_T("            }")+
_T("        }"));
Transform25.addChild(&Script53);

TimeSensor& TimeSensor68 =  TimeSensor();
TimeSensor68.setDEF(CString("Clock"));
TimeSensor68.setCycleInterval(45);
TimeSensor68.setLoop(True);
Transform25.addChild(&TimeSensor68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromNode(CString("Clock"));
ROUTE69.setFromField(CString("fraction_changed"));
ROUTE69.setToNode(CString("UrlSelector"));
ROUTE69.setToField(CString("set_fraction"));
Transform25.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromNode(CString("UrlSelector"));
ROUTE70.setFromField(CString("front_changed"));
ROUTE70.setToNode(CString("frontBackgroundTexture"));
ROUTE70.setToField(CString("url"));
Transform25.addChild(&ROUTE70);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromNode(CString("UrlSelector"));
ROUTE71.setFromField(CString("back_changed"));
ROUTE71.setToNode(CString("backBackgroundTexture"));
ROUTE71.setToField(CString("url"));
Transform25.addChild(&ROUTE71);

ROUTE& ROUTE72 =  ROUTE();
ROUTE72.setFromNode(CString("UrlSelector"));
ROUTE72.setFromField(CString("left_changed"));
ROUTE72.setToNode(CString("leftBackgroundTexture"));
ROUTE72.setToField(CString("url"));
Transform25.addChild(&ROUTE72);

ROUTE& ROUTE73 =  ROUTE();
ROUTE73.setFromNode(CString("UrlSelector"));
ROUTE73.setFromField(CString("right_changed"));
ROUTE73.setToNode(CString("rightBackgroundTexture"));
ROUTE73.setToField(CString("url"));
Transform25.addChild(&ROUTE73);

ROUTE& ROUTE74 =  ROUTE();
ROUTE74.setFromNode(CString("UrlSelector"));
ROUTE74.setFromField(CString("top_changed"));
ROUTE74.setToNode(CString("topBackgroundTexture"));
ROUTE74.setToField(CString("url"));
Transform25.addChild(&ROUTE74);

ROUTE& ROUTE75 =  ROUTE();
ROUTE75.setFromNode(CString("UrlSelector"));
ROUTE75.setFromField(CString("bottom_changed"));
ROUTE75.setToNode(CString("bottomBackgroundTexture"));
ROUTE75.setToField(CString("url"));
Transform25.addChild(&ROUTE75);

ROUTE& ROUTE76 =  ROUTE();
ROUTE76.setFromNode(CString("UrlSelector"));
ROUTE76.setFromField(CString("front_changed"));
ROUTE76.setToNode(CString("frontShader"));
ROUTE76.setToField(CString("url"));
Transform25.addChild(&ROUTE76);

ROUTE& ROUTE77 =  ROUTE();
ROUTE77.setFromNode(CString("UrlSelector"));
ROUTE77.setFromField(CString("back_changed"));
ROUTE77.setToNode(CString("backShader"));
ROUTE77.setToField(CString("url"));
Transform25.addChild(&ROUTE77);

ROUTE& ROUTE78 =  ROUTE();
ROUTE78.setFromNode(CString("UrlSelector"));
ROUTE78.setFromField(CString("left_changed"));
ROUTE78.setToNode(CString("leftShader"));
ROUTE78.setToField(CString("url"));
Transform25.addChild(&ROUTE78);

ROUTE& ROUTE79 =  ROUTE();
ROUTE79.setFromNode(CString("UrlSelector"));
ROUTE79.setFromField(CString("right_changed"));
ROUTE79.setToNode(CString("rightShader"));
ROUTE79.setToField(CString("url"));
Transform25.addChild(&ROUTE79);

ROUTE& ROUTE80 =  ROUTE();
ROUTE80.setFromNode(CString("UrlSelector"));
ROUTE80.setFromField(CString("top_changed"));
ROUTE80.setToNode(CString("topShader"));
ROUTE80.setToField(CString("url"));
Transform25.addChild(&ROUTE80);

ROUTE& ROUTE81 =  ROUTE();
ROUTE81.setFromNode(CString("UrlSelector"));
ROUTE81.setFromField(CString("bottom_changed"));
ROUTE81.setToNode(CString("bottomShader"));
ROUTE81.setToField(CString("url"));
Transform25.addChild(&ROUTE81);

Scene16.addChild(&Transform25);

X3D0.setScene(&Scene16);

}

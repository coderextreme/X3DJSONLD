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

//<component name='Shape' level='4'></component>
meta& meta10 =  meta();
meta10.setName(CString("title"));
meta10.setContent(CString("mirror2.x3d"));
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
meta13.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/personal/mirror2.x3d"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("description"));
meta14.setContent(CString("a mirrored sphere"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
Viewpoint& Viewpoint16 =  Viewpoint();
Viewpoint16.setPosition(new float[]{0.0,5.0,100.0});
Viewpoint16.setDescription(CString("Switch background and images texture"));
Scene15.addChild(&Viewpoint16);

Background& Background17 =  Background();
Background17.setDEF(CString("cube"));
Background17.setLeftUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png")}, 2);
Background17.setRightUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png")}, 2);
Background17.setFrontUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png")}, 2);
Background17.setBackUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png")}, 2);
Background17.setTopUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png")}, 2);
Background17.setBottomUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")}, 2);
Scene15.addChild(&Background17);

Transform& Transform18 =  Transform();
Shape& Shape19 =  Shape();
Appearance& Appearance20 =  Appearance();
Material& Material21 =  Material();
Material21.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material21.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance20.addChild(&Material21);

ComposedCubeMapTexture& ComposedCubeMapTexture22 =  ComposedCubeMapTexture();
ImageTexture& ImageTexture23 =  ImageTexture();
ImageTexture23.setDEF(CString("backShader"));
ImageTexture23.setUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png")}, 2);
ComposedCubeMapTexture22.setBack(ImageTexture23);

ImageTexture& ImageTexture24 =  ImageTexture();
ImageTexture24.setDEF(CString("bottomShader"));
ImageTexture24.setUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")}, 2);
ComposedCubeMapTexture22.setBottom(ImageTexture24);

ImageTexture& ImageTexture25 =  ImageTexture();
ImageTexture25.setDEF(CString("frontShader"));
ImageTexture25.setUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png")}, 2);
ComposedCubeMapTexture22.setFront(ImageTexture25);

ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setDEF(CString("leftShader"));
ImageTexture26.setUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png")}, 2);
ComposedCubeMapTexture22.setLeft(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setDEF(CString("rightShader"));
ImageTexture27.setUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png")}, 2);
ComposedCubeMapTexture22.setRight(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setDEF(CString("topShader"));
ImageTexture28.setUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png")}, 2);
ComposedCubeMapTexture22.setTop(ImageTexture28);

Appearance20.addChild(&ComposedCubeMapTexture22);

ComposedShader& ComposedShader29 =  ComposedShader();
ComposedShader29.setDEF(CString("x_ite"));
ComposedShader29.setLanguage(CString("GLSL"));
//http://hypertextbook.com/facts/2005/JustinChe.shtml
field& field30 =  field();
field30.setName(CString("chromaticDispertion"));
field30.setAccessType(CString("inputOutput"));
field30.setType(CString("SFVec3f"));
field30.setValue(CString("0.98 1 1.033"));
ComposedShader29.addChild(&field30);

field& field31 =  field();
field31.setName(CString("cube"));
field31.setAccessType(CString("inputOutput"));
field31.setType(CString("SFInt32"));
field31.setValue(CString("0"));
ComposedShader29.addChild(&field31);

field& field32 =  field();
field32.setName(CString("bias"));
field32.setAccessType(CString("inputOutput"));
field32.setType(CString("SFFloat"));
field32.setValue(CString("0.5"));
ComposedShader29.addChild(&field32);

field& field33 =  field();
field33.setName(CString("scale"));
field33.setAccessType(CString("inputOutput"));
field33.setType(CString("SFFloat"));
field33.setValue(CString("0.5"));
ComposedShader29.addChild(&field33);

field& field34 =  field();
field34.setName(CString("power"));
field34.setAccessType(CString("inputOutput"));
field34.setType(CString("SFFloat"));
field34.setValue(CString("2"));
ComposedShader29.addChild(&field34);

ShaderPart& ShaderPart35 =  ShaderPart();
ShaderPart35.setUrl(new CString[]{CString("../shaders/x_ite.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs")}, 2);
ShaderPart35.setType(CString("VERTEX"));
ComposedShader29.setParts(&ShaderPart35);

ShaderPart& ShaderPart36 =  ShaderPart();
ShaderPart36.setUrl(new CString[]{CString("../shaders/x_itemix.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs")}, 2);
ShaderPart36.setType(CString("FRAGMENT"));
ComposedShader29.setParts(&ShaderPart36);

Appearance20.addChild(&ComposedShader29);

ComposedShader& ComposedShader37 =  ComposedShader();
ComposedShader37.setDEF(CString("x3dom"));
ComposedShader37.setLanguage(CString("GLSL"));
field& field38 =  field();
field38.setName(CString("chromaticDispertion"));
field38.setAccessType(CString("inputOutput"));
field38.setType(CString("SFVec3f"));
field38.setValue(CString("0.98 1 1.033"));
ComposedShader37.addChild(&field38);

field& field39 =  field();
field39.setName(CString("cube"));
field39.setAccessType(CString("inputOutput"));
field39.setType(CString("SFInt32"));
field39.setValue(CString("0"));
ComposedShader37.addChild(&field39);

field& field40 =  field();
field40.setName(CString("bias"));
field40.setAccessType(CString("inputOutput"));
field40.setType(CString("SFFloat"));
field40.setValue(CString("0.5"));
ComposedShader37.addChild(&field40);

field& field41 =  field();
field41.setName(CString("scale"));
field41.setAccessType(CString("inputOutput"));
field41.setType(CString("SFFloat"));
field41.setValue(CString("0.5"));
ComposedShader37.addChild(&field41);

field& field42 =  field();
field42.setName(CString("power"));
field42.setAccessType(CString("inputOutput"));
field42.setType(CString("SFFloat"));
field42.setValue(CString("2"));
ComposedShader37.addChild(&field42);

ShaderPart& ShaderPart43 =  ShaderPart();
ShaderPart43.setUrl(new CString[]{CString("../shaders/x3dom.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs")}, 2);
ShaderPart43.setType(CString("VERTEX"));
ComposedShader37.setParts(&ShaderPart43);

ShaderPart& ShaderPart44 =  ShaderPart();
ShaderPart44.setUrl(new CString[]{CString("../shaders/mix.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs")}, 2);
ShaderPart44.setType(CString("FRAGMENT"));
ComposedShader37.setParts(&ShaderPart44);

Appearance20.addChild(&ComposedShader37);

Shape19.addChild(&Appearance20);

Sphere& Sphere45 =  Sphere();
Sphere45.setRadius(30);
Shape19.setGeometry(&Sphere45);

Transform18.addChild(&Shape19);

Script& Script46 =  Script();
Script46.setDEF(CString("UrlSelector"));
Script46.setDirectOutput(true);
field& field47 =  field();
field47.setName(CString("frontUrls"));
field47.setType(CString("MFString"));
field47.setAccessType(CString("initializeOnly"));
field47.setValue(CString("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\""));
Script46.addChild(&field47);

field& field48 =  field();
field48.setName(CString("backUrls"));
field48.setType(CString("MFString"));
field48.setAccessType(CString("initializeOnly"));
field48.setValue(CString("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\""));
Script46.addChild(&field48);

field& field49 =  field();
field49.setName(CString("leftUrls"));
field49.setType(CString("MFString"));
field49.setAccessType(CString("initializeOnly"));
field49.setValue(CString("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\""));
Script46.addChild(&field49);

field& field50 =  field();
field50.setName(CString("rightUrls"));
field50.setType(CString("MFString"));
field50.setAccessType(CString("initializeOnly"));
field50.setValue(CString("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\""));
Script46.addChild(&field50);

field& field51 =  field();
field51.setName(CString("topUrls"));
field51.setType(CString("MFString"));
field51.setAccessType(CString("initializeOnly"));
field51.setValue(CString("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\""));
Script46.addChild(&field51);

field& field52 =  field();
field52.setName(CString("bottomUrls"));
field52.setType(CString("MFString"));
field52.setAccessType(CString("initializeOnly"));
field52.setValue(CString("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\""));
Script46.addChild(&field52);

field& field53 =  field();
field53.setName(CString("front_changed"));
field53.setType(CString("MFString"));
field53.setAccessType(CString("outputOnly"));
Script46.addChild(&field53);

field& field54 =  field();
field54.setName(CString("back_changed"));
field54.setType(CString("MFString"));
field54.setAccessType(CString("outputOnly"));
Script46.addChild(&field54);

field& field55 =  field();
field55.setName(CString("left_changed"));
field55.setType(CString("MFString"));
field55.setAccessType(CString("outputOnly"));
Script46.addChild(&field55);

field& field56 =  field();
field56.setName(CString("right_changed"));
field56.setType(CString("MFString"));
field56.setAccessType(CString("outputOnly"));
Script46.addChild(&field56);

field& field57 =  field();
field57.setName(CString("top_changed"));
field57.setType(CString("MFString"));
field57.setAccessType(CString("outputOnly"));
Script46.addChild(&field57);

field& field58 =  field();
field58.setName(CString("bottom_changed"));
field58.setType(CString("MFString"));
field58.setAccessType(CString("outputOnly"));
Script46.addChild(&field58);

field& field59 =  field();
field59.setName(CString("set_fraction"));
field59.setType(CString("SFFloat"));
field59.setAccessType(CString("inputOnly"));
Script46.addChild(&field59);

field& field60 =  field();
field60.setName(CString("old"));
field60.setType(CString("SFInt32"));
field60.setAccessType(CString("inputOutput"));
field60.setValue(CString("-1"));
Script46.addChild(&field60);


//Script46.setSourceCode(CString("ecmascript:")+
//_T("        function set_fraction( f, tm ) {")+
//_T("	    var side = Math.floor(f*frontUrls.length);")+
//_T("	    if (side > frontUrls.length-1) {")+
//_T("	    	side = 0;")+
//_T("	    }")+
//_T("	    if (side != old) {")+
//_T("	    	    // Browser.print(f+\" \"+side);")+
//_T("	    	    old = side;")+
//_T("		    front_changed[0] = frontUrls[side];")+
//_T("		    back_changed[0] = backUrls[side];")+
//_T("		    left_changed[0] = leftUrls[side];")+
//_T("		    right_changed[0] = rightUrls[side];")+
//_T("		    top_changed[0] = topUrls[side];")+
//_T("		    bottom_changed[0] = bottomUrls[side];")+
//_T("            }")+
//_T("        }"));
Transform18.addChild(&Script46);

TimeSensor& TimeSensor61 =  TimeSensor();
TimeSensor61.setDEF(CString("Clock"));
TimeSensor61.setCycleInterval(45);
TimeSensor61.setLoop(true);
Transform18.addChild(&TimeSensor61);

ROUTE& ROUTE62 =  ROUTE();
ROUTE62.setFromNode(CString("Clock"));
ROUTE62.setFromField(CString("fraction_changed"));
ROUTE62.setToNode(CString("UrlSelector"));
ROUTE62.setToField(CString("set_fraction"));
Transform18.addChild(&ROUTE62);

ROUTE& ROUTE63 =  ROUTE();
ROUTE63.setFromNode(CString("UrlSelector"));
ROUTE63.setFromField(CString("front_changed"));
ROUTE63.setToNode(CString("cube"));
ROUTE63.setToField(CString("frontUrl"));
Transform18.addChild(&ROUTE63);

ROUTE& ROUTE64 =  ROUTE();
ROUTE64.setFromNode(CString("UrlSelector"));
ROUTE64.setFromField(CString("back_changed"));
ROUTE64.setToNode(CString("cube"));
ROUTE64.setToField(CString("backUrl"));
Transform18.addChild(&ROUTE64);

ROUTE& ROUTE65 =  ROUTE();
ROUTE65.setFromNode(CString("UrlSelector"));
ROUTE65.setFromField(CString("left_changed"));
ROUTE65.setToNode(CString("cube"));
ROUTE65.setToField(CString("leftUrl"));
Transform18.addChild(&ROUTE65);

ROUTE& ROUTE66 =  ROUTE();
ROUTE66.setFromNode(CString("UrlSelector"));
ROUTE66.setFromField(CString("right_changed"));
ROUTE66.setToNode(CString("cube"));
ROUTE66.setToField(CString("rightUrl"));
Transform18.addChild(&ROUTE66);

ROUTE& ROUTE67 =  ROUTE();
ROUTE67.setFromNode(CString("UrlSelector"));
ROUTE67.setFromField(CString("top_changed"));
ROUTE67.setToNode(CString("cube"));
ROUTE67.setToField(CString("topUrl"));
Transform18.addChild(&ROUTE67);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromNode(CString("UrlSelector"));
ROUTE68.setFromField(CString("bottom_changed"));
ROUTE68.setToNode(CString("cube"));
ROUTE68.setToField(CString("bottomUrl"));
Transform18.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromNode(CString("UrlSelector"));
ROUTE69.setFromField(CString("front_changed"));
ROUTE69.setToNode(CString("frontShader"));
ROUTE69.setToField(CString("url"));
Transform18.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromNode(CString("UrlSelector"));
ROUTE70.setFromField(CString("back_changed"));
ROUTE70.setToNode(CString("backShader"));
ROUTE70.setToField(CString("url"));
Transform18.addChild(&ROUTE70);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromNode(CString("UrlSelector"));
ROUTE71.setFromField(CString("left_changed"));
ROUTE71.setToNode(CString("leftShader"));
ROUTE71.setToField(CString("url"));
Transform18.addChild(&ROUTE71);

ROUTE& ROUTE72 =  ROUTE();
ROUTE72.setFromNode(CString("UrlSelector"));
ROUTE72.setFromField(CString("right_changed"));
ROUTE72.setToNode(CString("rightShader"));
ROUTE72.setToField(CString("url"));
Transform18.addChild(&ROUTE72);

ROUTE& ROUTE73 =  ROUTE();
ROUTE73.setFromNode(CString("UrlSelector"));
ROUTE73.setFromField(CString("top_changed"));
ROUTE73.setToNode(CString("topShader"));
ROUTE73.setToField(CString("url"));
Transform18.addChild(&ROUTE73);

ROUTE& ROUTE74 =  ROUTE();
ROUTE74.setFromNode(CString("UrlSelector"));
ROUTE74.setFromField(CString("bottom_changed"));
ROUTE74.setToNode(CString("bottomShader"));
ROUTE74.setToField(CString("url"));
Transform18.addChild(&ROUTE74);

Scene15.addChild(&Transform18);

X3D0.setScene(&Scene15);

//}

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
meta10.setContent(CString("mirror.x3d"));
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
meta13.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/mirror.x3d"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("description"));
meta14.setContent(CString("sphere with alternating backgrounds"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
Viewpoint& Viewpoint16 =  Viewpoint();
Viewpoint16.setPosition(new float[]{0.0,5.0,100.0});
Viewpoint16.setDescription(CString("Switch background and images texture"));
Scene15.addChild(&Viewpoint16);

TextureBackground& TextureBackground17 =  TextureBackground();
ImageTexture& ImageTexture18 =  ImageTexture();
ImageTexture18.setDEF(CString("leftBackgroundTexture"));
ImageTexture18.setUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_left.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png")}, 2);
TextureBackground17.setLeftTexture(ImageTexture18);

ImageTexture& ImageTexture19 =  ImageTexture();
ImageTexture19.setDEF(CString("rightBackgroundTexture"));
ImageTexture19.setUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_right.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png")}, 2);
TextureBackground17.setRightTexture(ImageTexture19);

ImageTexture& ImageTexture20 =  ImageTexture();
ImageTexture20.setDEF(CString("frontBackgroundTexture"));
ImageTexture20.setUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_front.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png")}, 2);
TextureBackground17.setFrontTexture(ImageTexture20);

ImageTexture& ImageTexture21 =  ImageTexture();
ImageTexture21.setDEF(CString("backBackgroundTexture"));
ImageTexture21.setUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_back.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png")}, 2);
TextureBackground17.setBackTexture(ImageTexture21);

ImageTexture& ImageTexture22 =  ImageTexture();
ImageTexture22.setDEF(CString("topBackgroundTexture"));
ImageTexture22.setUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_top.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png")}, 2);
TextureBackground17.setTopTexture(ImageTexture22);

ImageTexture& ImageTexture23 =  ImageTexture();
ImageTexture23.setDEF(CString("bottomBackgroundTexture"));
ImageTexture23.setUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_bottom.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")}, 2);
TextureBackground17.setBottomTexture(ImageTexture23);

Scene15.addChild(&TextureBackground17);

Transform& Transform24 =  Transform();
Shape& Shape25 =  Shape();
Appearance& Appearance26 =  Appearance();
Material& Material27 =  Material();
Material27.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material27.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance26.addChild(&Material27);

ComposedCubeMapTexture& ComposedCubeMapTexture28 =  ComposedCubeMapTexture();
ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setDEF(CString("backShader"));
ImageTexture29.setUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_back.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png")}, 2);
ComposedCubeMapTexture28.setBack(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setDEF(CString("bottomShader"));
ImageTexture30.setUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_bottom.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")}, 2);
ComposedCubeMapTexture28.setBottom(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setDEF(CString("frontShader"));
ImageTexture31.setUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_front.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png")}, 2);
ComposedCubeMapTexture28.setFront(ImageTexture31);

ImageTexture& ImageTexture32 =  ImageTexture();
ImageTexture32.setDEF(CString("leftShader"));
ImageTexture32.setUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_left.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png")}, 2);
ComposedCubeMapTexture28.setLeft(ImageTexture32);

ImageTexture& ImageTexture33 =  ImageTexture();
ImageTexture33.setDEF(CString("rightShader"));
ImageTexture33.setUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_right.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png")}, 2);
ComposedCubeMapTexture28.setRight(ImageTexture33);

ImageTexture& ImageTexture34 =  ImageTexture();
ImageTexture34.setDEF(CString("topShader"));
ImageTexture34.setUrl(new CString[]{CString("../resources/images/all_probes/beach_cross/beach_top.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png")}, 2);
ComposedCubeMapTexture28.setTop(ImageTexture34);

Appearance26.addChild(&ComposedCubeMapTexture28);

ComposedShader& ComposedShader35 =  ComposedShader();
ComposedShader35.setDEF(CString("x3dom"));
ComposedShader35.setLanguage(CString("GLSL"));
field& field36 =  field();
field36.setName(CString("chromaticDispertion"));
field36.setAccessType(CString("inputOutput"));
field36.setType(CString("SFVec3f"));
field36.setValue(CString("0.98 1 1.033"));
ComposedShader35.addChild(&field36);

field& field37 =  field();
field37.setName(CString("cube"));
field37.setAccessType(CString("inputOutput"));
field37.setType(CString("SFInt32"));
field37.setValue(CString("0"));
ComposedShader35.addChild(&field37);

field& field38 =  field();
field38.setName(CString("bias"));
field38.setAccessType(CString("inputOutput"));
field38.setType(CString("SFFloat"));
field38.setValue(CString("0.5"));
ComposedShader35.addChild(&field38);

field& field39 =  field();
field39.setName(CString("scale"));
field39.setAccessType(CString("inputOutput"));
field39.setType(CString("SFFloat"));
field39.setValue(CString("0.5"));
ComposedShader35.addChild(&field39);

field& field40 =  field();
field40.setName(CString("power"));
field40.setAccessType(CString("inputOutput"));
field40.setType(CString("SFFloat"));
field40.setValue(CString("2"));
ComposedShader35.addChild(&field40);

ShaderPart& ShaderPart41 =  ShaderPart();
ShaderPart41.setUrl(new CString[]{CString("../shaders/x3dom.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs")}, 2);
ShaderPart41.setType(CString("VERTEX"));
ComposedShader35.setParts(&ShaderPart41);

ShaderPart& ShaderPart42 =  ShaderPart();
ShaderPart42.setUrl(new CString[]{CString("../shaders/mix.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs")}, 2);
ShaderPart42.setType(CString("FRAGMENT"));
ComposedShader35.setParts(&ShaderPart42);

Appearance26.addChild(&ComposedShader35);

ComposedShader& ComposedShader43 =  ComposedShader();
ComposedShader43.setDEF(CString("x_ite"));
ComposedShader43.setLanguage(CString("GLSL"));
//http://hypertextbook.com/facts/2005/JustinChe.shtml
field& field44 =  field();
field44.setName(CString("chromaticDispertion"));
field44.setAccessType(CString("inputOutput"));
field44.setType(CString("SFVec3f"));
field44.setValue(CString("0.98 1 1.033"));
ComposedShader43.addChild(&field44);

field& field45 =  field();
field45.setName(CString("cube"));
field45.setAccessType(CString("inputOutput"));
field45.setType(CString("SFInt32"));
field45.setValue(CString("0"));
ComposedShader43.addChild(&field45);

field& field46 =  field();
field46.setName(CString("bias"));
field46.setAccessType(CString("inputOutput"));
field46.setType(CString("SFFloat"));
field46.setValue(CString("0.5"));
ComposedShader43.addChild(&field46);

field& field47 =  field();
field47.setName(CString("scale"));
field47.setAccessType(CString("inputOutput"));
field47.setType(CString("SFFloat"));
field47.setValue(CString("0.5"));
ComposedShader43.addChild(&field47);

field& field48 =  field();
field48.setName(CString("power"));
field48.setAccessType(CString("inputOutput"));
field48.setType(CString("SFFloat"));
field48.setValue(CString("2"));
ComposedShader43.addChild(&field48);

ShaderPart& ShaderPart49 =  ShaderPart();
ShaderPart49.setUrl(new CString[]{CString("../shaders/x_ite.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs")}, 2);
ShaderPart49.setType(CString("VERTEX"));
ComposedShader43.setParts(&ShaderPart49);

ShaderPart& ShaderPart50 =  ShaderPart();
ShaderPart50.setUrl(new CString[]{CString("../shaders/x_itemix.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs")}, 2);
ShaderPart50.setType(CString("FRAGMENT"));
ComposedShader43.setParts(&ShaderPart50);

Appearance26.addChild(&ComposedShader43);

Shape25.addChild(&Appearance26);

Sphere& Sphere51 =  Sphere();
Sphere51.setRadius(30);
Shape25.setGeometry(&Sphere51);

Transform24.addChild(&Shape25);

Script& Script52 =  Script();
Script52.setDEF(CString("UrlSelector"));
Script52.setDirectOutput(true);
field& field53 =  field();
field53.setName(CString("frontUrls"));
field53.setType(CString("MFString"));
field53.setAccessType(CString("initializeOnly"));
field53.setValue(CString("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\""));
Script52.addChild(&field53);

field& field54 =  field();
field54.setName(CString("backUrls"));
field54.setType(CString("MFString"));
field54.setAccessType(CString("initializeOnly"));
field54.setValue(CString("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\""));
Script52.addChild(&field54);

field& field55 =  field();
field55.setName(CString("leftUrls"));
field55.setType(CString("MFString"));
field55.setAccessType(CString("initializeOnly"));
field55.setValue(CString("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\""));
Script52.addChild(&field55);

field& field56 =  field();
field56.setName(CString("rightUrls"));
field56.setType(CString("MFString"));
field56.setAccessType(CString("initializeOnly"));
field56.setValue(CString("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\""));
Script52.addChild(&field56);

field& field57 =  field();
field57.setName(CString("topUrls"));
field57.setType(CString("MFString"));
field57.setAccessType(CString("initializeOnly"));
field57.setValue(CString("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\""));
Script52.addChild(&field57);

field& field58 =  field();
field58.setName(CString("bottomUrls"));
field58.setType(CString("MFString"));
field58.setAccessType(CString("initializeOnly"));
field58.setValue(CString("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\""));
Script52.addChild(&field58);

field& field59 =  field();
field59.setName(CString("front_changed"));
field59.setType(CString("MFString"));
field59.setAccessType(CString("outputOnly"));
Script52.addChild(&field59);

field& field60 =  field();
field60.setName(CString("back_changed"));
field60.setType(CString("MFString"));
field60.setAccessType(CString("outputOnly"));
Script52.addChild(&field60);

field& field61 =  field();
field61.setName(CString("left_changed"));
field61.setType(CString("MFString"));
field61.setAccessType(CString("outputOnly"));
Script52.addChild(&field61);

field& field62 =  field();
field62.setName(CString("right_changed"));
field62.setType(CString("MFString"));
field62.setAccessType(CString("outputOnly"));
Script52.addChild(&field62);

field& field63 =  field();
field63.setName(CString("top_changed"));
field63.setType(CString("MFString"));
field63.setAccessType(CString("outputOnly"));
Script52.addChild(&field63);

field& field64 =  field();
field64.setName(CString("bottom_changed"));
field64.setType(CString("MFString"));
field64.setAccessType(CString("outputOnly"));
Script52.addChild(&field64);

field& field65 =  field();
field65.setName(CString("set_fraction"));
field65.setType(CString("SFFloat"));
field65.setAccessType(CString("inputOnly"));
Script52.addChild(&field65);

field& field66 =  field();
field66.setName(CString("old"));
field66.setType(CString("SFInt32"));
field66.setAccessType(CString("inputOutput"));
field66.setValue(CString("-1"));
Script52.addChild(&field66);


//Script52.setSourceCode(CString("ecmascript:")+
//_T("        function set_fraction( f, tm ) {")+
//_T("	    var side = Math.floor(f*frontUrls.length);")+
//_T("	    if (side > frontUrls.length-1) {")+
//_T("	    	side = 0;")+
//_T("	    }")+
//_T("	    if (side != old) {")+
//_T("	    	    Browser.print(f+\" \"+side);")+
//_T("	    	    old = side;")+
//_T("		    front_changed[0] = frontUrls[side];")+
//_T("		    back_changed[0] = backUrls[side];")+
//_T("		    left_changed[0] = leftUrls[side];")+
//_T("		    right_changed[0] = rightUrls[side];")+
//_T("		    top_changed[0] = topUrls[side];")+
//_T("		    bottom_changed[0] = bottomUrls[side];")+
//_T("            }")+
//_T("        }"));
Transform24.addChild(&Script52);

TimeSensor& TimeSensor67 =  TimeSensor();
TimeSensor67.setDEF(CString("Clock"));
TimeSensor67.setCycleInterval(45);
TimeSensor67.setLoop(true);
Transform24.addChild(&TimeSensor67);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromNode(CString("Clock"));
ROUTE68.setFromField(CString("fraction_changed"));
ROUTE68.setToNode(CString("UrlSelector"));
ROUTE68.setToField(CString("set_fraction"));
Transform24.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromNode(CString("UrlSelector"));
ROUTE69.setFromField(CString("front_changed"));
ROUTE69.setToNode(CString("frontBackgroundTexture"));
ROUTE69.setToField(CString("url"));
Transform24.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromNode(CString("UrlSelector"));
ROUTE70.setFromField(CString("back_changed"));
ROUTE70.setToNode(CString("backBackgroundTexture"));
ROUTE70.setToField(CString("url"));
Transform24.addChild(&ROUTE70);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromNode(CString("UrlSelector"));
ROUTE71.setFromField(CString("left_changed"));
ROUTE71.setToNode(CString("leftBackgroundTexture"));
ROUTE71.setToField(CString("url"));
Transform24.addChild(&ROUTE71);

ROUTE& ROUTE72 =  ROUTE();
ROUTE72.setFromNode(CString("UrlSelector"));
ROUTE72.setFromField(CString("right_changed"));
ROUTE72.setToNode(CString("rightBackgroundTexture"));
ROUTE72.setToField(CString("url"));
Transform24.addChild(&ROUTE72);

ROUTE& ROUTE73 =  ROUTE();
ROUTE73.setFromNode(CString("UrlSelector"));
ROUTE73.setFromField(CString("top_changed"));
ROUTE73.setToNode(CString("topBackgroundTexture"));
ROUTE73.setToField(CString("url"));
Transform24.addChild(&ROUTE73);

ROUTE& ROUTE74 =  ROUTE();
ROUTE74.setFromNode(CString("UrlSelector"));
ROUTE74.setFromField(CString("bottom_changed"));
ROUTE74.setToNode(CString("bottomBackgroundTexture"));
ROUTE74.setToField(CString("url"));
Transform24.addChild(&ROUTE74);

ROUTE& ROUTE75 =  ROUTE();
ROUTE75.setFromNode(CString("UrlSelector"));
ROUTE75.setFromField(CString("front_changed"));
ROUTE75.setToNode(CString("frontShader"));
ROUTE75.setToField(CString("url"));
Transform24.addChild(&ROUTE75);

ROUTE& ROUTE76 =  ROUTE();
ROUTE76.setFromNode(CString("UrlSelector"));
ROUTE76.setFromField(CString("back_changed"));
ROUTE76.setToNode(CString("backShader"));
ROUTE76.setToField(CString("url"));
Transform24.addChild(&ROUTE76);

ROUTE& ROUTE77 =  ROUTE();
ROUTE77.setFromNode(CString("UrlSelector"));
ROUTE77.setFromField(CString("left_changed"));
ROUTE77.setToNode(CString("leftShader"));
ROUTE77.setToField(CString("url"));
Transform24.addChild(&ROUTE77);

ROUTE& ROUTE78 =  ROUTE();
ROUTE78.setFromNode(CString("UrlSelector"));
ROUTE78.setFromField(CString("right_changed"));
ROUTE78.setToNode(CString("rightShader"));
ROUTE78.setToField(CString("url"));
Transform24.addChild(&ROUTE78);

ROUTE& ROUTE79 =  ROUTE();
ROUTE79.setFromNode(CString("UrlSelector"));
ROUTE79.setFromField(CString("top_changed"));
ROUTE79.setToNode(CString("topShader"));
ROUTE79.setToField(CString("url"));
Transform24.addChild(&ROUTE79);

ROUTE& ROUTE80 =  ROUTE();
ROUTE80.setFromNode(CString("UrlSelector"));
ROUTE80.setFromField(CString("bottom_changed"));
ROUTE80.setToNode(CString("bottomShader"));
ROUTE80.setToField(CString("url"));
Transform24.addChild(&ROUTE80);

Scene15.addChild(&Transform24);

X3D0.setScene(&Scene15);

//}

//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
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
meta11.setContent(CString("flowerproto.x3d"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("creator"));
meta12.setContent(CString("John Carlson"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("description"));
meta13.setContent(CString("A flower proto with configurable shaders"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("generator"));
meta14.setContent(CString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("identifier"));
meta15.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d"));
head1.addMeta(&meta15);

X3D0.setHead(&head1);

Scene& Scene16 =  Scene();
NavigationInfo& NavigationInfo17 =  NavigationInfo();
Scene16.addChild(&NavigationInfo17);

Viewpoint& Viewpoint18 =  Viewpoint();
Viewpoint18.setDescription(CString("Tour Views"));
Viewpoint18.setPosition(new float[]{0.0,0.0,50.0});
Scene16.addChild(&Viewpoint18);

Background& Background19 =  Background();
Background19.setBackUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
Background19.setBottomUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
Background19.setFrontUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
Background19.setLeftUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
Background19.setRightUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
Background19.setTopUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
Scene16.addChild(&Background19);

ProtoDeclare& ProtoDeclare20 =  ProtoDeclare();
ProtoDeclare20.setName(CString("FlowerProto"));
ProtoInterface& ProtoInterface21 =  ProtoInterface();
field& field22 =  field();
field22.setName(CString("vertex"));
field22.setAccessType(CString("inputOnly"));
field22.setType(CString("MFString"));
field22.setValue(CString("\"../shaders/freewrl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs\""));
ProtoInterface21.addChild(&field22);

field& field23 =  field();
field23.setName(CString("fragment"));
field23.setAccessType(CString("inputOnly"));
field23.setType(CString("MFString"));
field23.setValue(CString("\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\""));
ProtoInterface21.addChild(&field23);

ProtoDeclare20.addChild(&ProtoInterface21);

ProtoBody& ProtoBody24 =  ProtoBody();
Transform& Transform25 =  Transform();
Transform25.setDEF(CString("transform"));
Shape& Shape26 =  Shape();
Appearance& Appearance27 =  Appearance();
Material& Material28 =  Material();
Material28.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material28.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance27.addChild(&Material28);

ComposedCubeMapTexture& ComposedCubeMapTexture29 =  ComposedCubeMapTexture();
ComposedCubeMapTexture29.setDEF(CString("texture"));
ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
ComposedCubeMapTexture29.setBack(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
ComposedCubeMapTexture29.setBottom(ImageTexture31);

ImageTexture& ImageTexture32 =  ImageTexture();
ImageTexture32.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
ComposedCubeMapTexture29.setFront(ImageTexture32);

ImageTexture& ImageTexture33 =  ImageTexture();
ImageTexture33.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
ComposedCubeMapTexture29.setLeft(ImageTexture33);

ImageTexture& ImageTexture34 =  ImageTexture();
ImageTexture34.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
ComposedCubeMapTexture29.setRight(ImageTexture34);

ImageTexture& ImageTexture35 =  ImageTexture();
ImageTexture35.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
ComposedCubeMapTexture29.setTop(ImageTexture35);

Appearance27.addChild(&ComposedCubeMapTexture29);

ComposedShader& ComposedShader36 =  ComposedShader();
ComposedShader36.setDEF(CString("shader"));
ComposedShader36.setLanguage(CString("GLSL"));
field& field37 =  field();
field37.setName(CString("fw_textureCoordGenType"));
field37.setAccessType(CString("inputOutput"));
field37.setType(CString("SFInt32"));
field37.setValue(CString("0"));
ComposedShader36.addChild(&field37);

field& field38 =  field();
field38.setName(CString("chromaticDispertion"));
field38.setAccessType(CString("initializeOnly"));
field38.setType(CString("SFVec3f"));
field38.setValue(CString("0.98 1 1.033"));
ComposedShader36.addChild(&field38);

field& field39 =  field();
field39.setName(CString("bias"));
field39.setType(CString("SFFloat"));
field39.setAccessType(CString("inputOutput"));
field39.setValue(CString("0.5"));
ComposedShader36.addChild(&field39);

field& field40 =  field();
field40.setName(CString("scale"));
field40.setType(CString("SFFloat"));
field40.setAccessType(CString("inputOutput"));
field40.setValue(CString("0.5"));
ComposedShader36.addChild(&field40);

field& field41 =  field();
field41.setName(CString("power"));
field41.setType(CString("SFFloat"));
field41.setAccessType(CString("inputOutput"));
field41.setValue(CString("2"));
ComposedShader36.addChild(&field41);

field& field42 =  field();
field42.setName(CString("a"));
field42.setType(CString("SFFloat"));
field42.setAccessType(CString("inputOutput"));
field42.setValue(CString("5"));
ComposedShader36.addChild(&field42);

field& field43 =  field();
field43.setName(CString("b"));
field43.setType(CString("SFFloat"));
field43.setAccessType(CString("inputOutput"));
field43.setValue(CString("5"));
ComposedShader36.addChild(&field43);

field& field44 =  field();
field44.setName(CString("c"));
field44.setType(CString("SFFloat"));
field44.setAccessType(CString("inputOutput"));
field44.setValue(CString("20"));
ComposedShader36.addChild(&field44);

field& field45 =  field();
field45.setName(CString("d"));
field45.setType(CString("SFFloat"));
field45.setAccessType(CString("inputOutput"));
field45.setValue(CString("20"));
ComposedShader36.addChild(&field45);

field& field46 =  field();
field46.setName(CString("tdelta"));
field46.setType(CString("SFFloat"));
field46.setAccessType(CString("inputOutput"));
field46.setValue(CString("0"));
ComposedShader36.addChild(&field46);

field& field47 =  field();
field47.setName(CString("pdelta"));
field47.setType(CString("SFFloat"));
field47.setAccessType(CString("inputOutput"));
field47.setValue(CString("0"));
ComposedShader36.addChild(&field47);

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
ShaderPart& ShaderPart48 =  ShaderPart();
ShaderPart48.setType(CString("VERTEX"));
IS& IS49 =  IS();
Connect& connect50 =  Connect();
connect50.setNodeField(CString("url"));
connect50.setProtoField(CString("vertex"));
IS49.addChild(&connect50);

ShaderPart48.addChild(&IS49);

ComposedShader36.setParts(&ShaderPart48);

ShaderPart& ShaderPart51 =  ShaderPart();
ShaderPart51.setType(CString("FRAGMENT"));
IS& IS52 =  IS();
Connect& connect53 =  Connect();
connect53.setNodeField(CString("url"));
connect53.setProtoField(CString("fragment"));
IS52.addChild(&connect53);

ShaderPart51.addChild(&IS52);

ComposedShader36.setParts(&ShaderPart51);

Appearance27.addChild(&ComposedShader36);

Shape26.addChild(&Appearance27);

Sphere& Sphere54 =  Sphere();
Sphere54.setRadius(5);
Shape26.setGeometry(&Sphere54);

Transform25.addChild(&Shape26);

Script& Script55 =  Script();
Script55.setDEF(CString("Animate"));
Script55.setDirectOutput(true);
field& field56 =  field();
field56.setName(CString("translation"));
field56.setAccessType(CString("inputOutput"));
field56.setType(CString("SFVec3f"));
field56.setValue(CString("0 0 0"));
Script55.addChild(&field56);

field& field57 =  field();
field57.setName(CString("velocity"));
field57.setAccessType(CString("inputOutput"));
field57.setType(CString("SFVec3f"));
field57.setValue(CString("0 0 0"));
Script55.addChild(&field57);

field& field58 =  field();
field58.setName(CString("set_fraction"));
field58.setAccessType(CString("inputOutput"));
field58.setType(CString("SFFloat"));
Script55.addChild(&field58);

field& field59 =  field();
field59.setName(CString("a"));
field59.setType(CString("SFFloat"));
field59.setAccessType(CString("inputOutput"));
field59.setValue(CString("0.5"));
Script55.addChild(&field59);

field& field60 =  field();
field60.setName(CString("b"));
field60.setType(CString("SFFloat"));
field60.setAccessType(CString("inputOutput"));
field60.setValue(CString("0.5"));
Script55.addChild(&field60);

field& field61 =  field();
field61.setName(CString("c"));
field61.setType(CString("SFFloat"));
field61.setAccessType(CString("inputOutput"));
field61.setValue(CString("3"));
Script55.addChild(&field61);

field& field62 =  field();
field62.setName(CString("d"));
field62.setType(CString("SFFloat"));
field62.setAccessType(CString("inputOutput"));
field62.setValue(CString("3"));
Script55.addChild(&field62);

field& field63 =  field();
field63.setName(CString("tdelta"));
field63.setType(CString("SFFloat"));
field63.setAccessType(CString("inputOutput"));
field63.setValue(CString("0.5"));
Script55.addChild(&field63);

field& field64 =  field();
field64.setName(CString("pdelta"));
field64.setType(CString("SFFloat"));
field64.setAccessType(CString("inputOutput"));
field64.setValue(CString("0.5"));
Script55.addChild(&field64);


//Script55.setSourceCode(CString("ecmascript:")+
//_T("			function initialize() {")+
//_T("			    translation = new SFVec3f(0, 0, 0);")+
//_T("			    velocity = new SFVec3f(")+
//_T("			    	Math.random() - 0.5,")+
//_T("				Math.random() - 0.5,")+
//_T("				Math.random() - 0.5);")+
//_T("			}")+
//_T("			function set_fraction() {")+
//_T("			    translation = new SFVec3f(")+
//_T("			    	translation.x + velocity.x,")+
//_T("				translation.y + velocity.y,")+
//_T("				translation.z + velocity.z);")+
//_T("			    for (var j = 0; j <= 2; j++) {")+
//_T("				    if (Math.abs(translation.x) > 10) {")+
//_T("					initialize();")+
//_T("				    } else if (Math.abs(translation.y) > 10) {")+
//_T("					initialize();")+
//_T("				    } else if (Math.abs(translation.z) > 10) {")+
//_T("					initialize();")+
//_T("				    } else {")+
//_T("					velocity.x += Math.random() * 0.2 - 0.1;")+
//_T("					velocity.y += Math.random() * 0.2 - 0.1;")+
//_T("					velocity.z += Math.random() * 0.2 - 0.1;")+
//_T("				    }")+
//_T("			    }")+
//_T("			    animate_flowers();")+
//_T("			}")+
//_T("			function animate_flowers(fraction, eventTime) {")+
//_T("				var choice = Math.floor(Math.random() * 4);")+
//_T("				switch (choice) {")+
//_T("				case 0:")+
//_T("					a += Math.random() * 0.2 - 0.1;")+
//_T("					break;")+
//_T("				case 1:")+
//_T("					b += Math.random() * 0.2 - 0.1;")+
//_T("					break;")+
//_T("				case 2:")+
//_T("					c += Math.random() * 2 - 1;")+
//_T("					break;")+
//_T("				case 3:")+
//_T("					d += Math.random() * 2 - 1;")+
//_T("					break;")+
//_T("				}")+
//_T("				tdelta += 0.5;")+
//_T("				pdelta += 0.5;")+
//_T("				if (a > 1) {")+
//_T("					a =  0.5;")+
//_T("				}")+
//_T("				if (b > 1) {")+
//_T("					b =  0.5;")+
//_T("				}")+
//_T("				if (c < 1) {")+
//_T("					c =  4;")+
//_T("				}")+
//_T("				if (d < 1) {")+
//_T("					d =  4;")+
//_T("				}")+
//_T("				if (c > 10) {")+
//_T("					c = 4;")+
//_T("				}")+
//_T("				if (d > 10) {")+
//_T("					d = 4;")+
//_T("				}")+
//_T("			}"));
Transform25.addChild(&Script55);

TimeSensor& TimeSensor65 =  TimeSensor();
TimeSensor65.setDEF(CString("TourTime"));
TimeSensor65.setCycleInterval(5);
TimeSensor65.setLoop(true);
Transform25.addChild(&TimeSensor65);

ROUTE& ROUTE66 =  ROUTE();
ROUTE66.setFromNode(CString("TourTime"));
ROUTE66.setFromField(CString("fraction_changed"));
ROUTE66.setToNode(CString("Animate"));
ROUTE66.setToField(CString("set_fraction"));
Transform25.addChild(&ROUTE66);

ROUTE& ROUTE67 =  ROUTE();
ROUTE67.setFromNode(CString("Animate"));
ROUTE67.setFromField(CString("translation_changed"));
ROUTE67.setToNode(CString("transform"));
ROUTE67.setToField(CString("set_translation"));
Transform25.addChild(&ROUTE67);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromNode(CString("Animate"));
ROUTE68.setFromField(CString("a"));
ROUTE68.setToNode(CString("shader"));
ROUTE68.setToField(CString("a"));
Transform25.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromNode(CString("Animate"));
ROUTE69.setFromField(CString("b"));
ROUTE69.setToNode(CString("shader"));
ROUTE69.setToField(CString("b"));
Transform25.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromNode(CString("Animate"));
ROUTE70.setFromField(CString("c"));
ROUTE70.setToNode(CString("shader"));
ROUTE70.setToField(CString("c"));
Transform25.addChild(&ROUTE70);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromNode(CString("Animate"));
ROUTE71.setFromField(CString("d"));
ROUTE71.setToNode(CString("shader"));
ROUTE71.setToField(CString("d"));
Transform25.addChild(&ROUTE71);

ROUTE& ROUTE72 =  ROUTE();
ROUTE72.setFromNode(CString("Animate"));
ROUTE72.setFromField(CString("tdelta"));
ROUTE72.setToNode(CString("shader"));
ROUTE72.setToField(CString("tdelta"));
Transform25.addChild(&ROUTE72);

ROUTE& ROUTE73 =  ROUTE();
ROUTE73.setFromNode(CString("Animate"));
ROUTE73.setFromField(CString("pdelta"));
ROUTE73.setToNode(CString("shader"));
ROUTE73.setToField(CString("pdelta"));
Transform25.addChild(&ROUTE73);

ProtoBody24.addChild(&Transform25);

ProtoDeclare20.addChild(&ProtoBody24);

Scene16.addChild(&ProtoDeclare20);

ProtoInstance& ProtoInstance74 =  ProtoInstance();
ProtoInstance74.setName(CString("FlowerProto"));
fieldValue& fieldValue75 =  fieldValue();
fieldValue75.setName(CString("vertex"));
fieldValue75.setValue(CString("\"../shaders/freewrl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs\""));
ProtoInstance74.addChild(&fieldValue75);

fieldValue& fieldValue76 =  fieldValue();
fieldValue76.setName(CString("fragment"));
fieldValue76.setValue(CString("\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\""));
ProtoInstance74.addChild(&fieldValue76);

Scene16.addChild(&ProtoInstance74);

X3D0.setScene(&Scene16);

//}

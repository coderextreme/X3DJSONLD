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
meta10.setContent(CString("flowerproto.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("creator"));
meta11.setContent(CString("John Carlson"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("description"));
meta12.setContent(CString("A flower proto with configurable shaders"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("generator"));
meta13.setContent(CString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("identifier"));
meta14.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
ProtoDeclare& ProtoDeclare16 =  ProtoDeclare();
ProtoDeclare16.setName(CString("FlowerProto"));
ProtoInterface& ProtoInterface17 =  ProtoInterface();
field& field18 =  field();
field18.setName(CString("vertex"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("MFString"));
field18.setValue(CString("\"../shaders/gl_flowers_chromatic.vs\""));
ProtoInterface17.addChild(&field18);

field& field19 =  field();
field19.setName(CString("fragment"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("MFString"));
field19.setValue(CString("\"../shaders/pc_flowers.fs\""));
ProtoInterface17.addChild(&field19);

ProtoDeclare16.addChild(&ProtoInterface17);

ProtoBody& ProtoBody20 =  ProtoBody();
Transform& Transform21 =  Transform();
Transform21.setDEF(CString("transform"));
Shape& Shape22 =  Shape();
Appearance& Appearance23 =  Appearance();
Material& Material24 =  Material();
Material24.setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material24.setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance23.addChild(&Material24);

ComposedCubeMapTexture& ComposedCubeMapTexture25 =  ComposedCubeMapTexture();
ComposedCubeMapTexture25.setDEF(CString("texture"));
ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
ComposedCubeMapTexture25.setBack(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
ComposedCubeMapTexture25.setBottom(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
ComposedCubeMapTexture25.setFront(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
ComposedCubeMapTexture25.setLeft(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
ComposedCubeMapTexture25.setRight(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
ComposedCubeMapTexture25.setTop(ImageTexture31);

Appearance23.addChild(&ComposedCubeMapTexture25);

ComposedShader& ComposedShader32 =  ComposedShader();
ComposedShader32.setDEF(CString("shader"));
ComposedShader32.setLanguage(CString("GLSL"));
field& field33 =  field();
field33.setName(CString("cube"));
field33.setType(CString("SFInt32"));
field33.setAccessType(CString("inputOutput"));
field33.setValue(CString("0"));
ComposedShader32.addChild(&field33);

field& field34 =  field();
field34.setName(CString("chromaticDispertion"));
field34.setAccessType(CString("initializeOnly"));
field34.setType(CString("SFVec3f"));
field34.setValue(CString("0.98 1 1.033"));
ComposedShader32.addChild(&field34);

field& field35 =  field();
field35.setName(CString("bias"));
field35.setType(CString("SFFloat"));
field35.setAccessType(CString("inputOutput"));
field35.setValue(CString("0.5"));
ComposedShader32.addChild(&field35);

field& field36 =  field();
field36.setName(CString("scale"));
field36.setType(CString("SFFloat"));
field36.setAccessType(CString("inputOutput"));
field36.setValue(CString("0.5"));
ComposedShader32.addChild(&field36);

field& field37 =  field();
field37.setName(CString("power"));
field37.setType(CString("SFFloat"));
field37.setAccessType(CString("inputOutput"));
field37.setValue(CString("2"));
ComposedShader32.addChild(&field37);

field& field38 =  field();
field38.setName(CString("a"));
field38.setType(CString("SFFloat"));
field38.setAccessType(CString("inputOutput"));
field38.setValue(CString("10"));
ComposedShader32.addChild(&field38);

field& field39 =  field();
field39.setName(CString("b"));
field39.setType(CString("SFFloat"));
field39.setAccessType(CString("inputOutput"));
field39.setValue(CString("1"));
ComposedShader32.addChild(&field39);

field& field40 =  field();
field40.setName(CString("c"));
field40.setType(CString("SFFloat"));
field40.setAccessType(CString("inputOutput"));
field40.setValue(CString("20"));
ComposedShader32.addChild(&field40);

field& field41 =  field();
field41.setName(CString("d"));
field41.setType(CString("SFFloat"));
field41.setAccessType(CString("inputOutput"));
field41.setValue(CString("20"));
ComposedShader32.addChild(&field41);

field& field42 =  field();
field42.setName(CString("tdelta"));
field42.setType(CString("SFFloat"));
field42.setAccessType(CString("inputOutput"));
field42.setValue(CString("0"));
ComposedShader32.addChild(&field42);

field& field43 =  field();
field43.setName(CString("pdelta"));
field43.setType(CString("SFFloat"));
field43.setAccessType(CString("inputOutput"));
field43.setValue(CString("0"));
ComposedShader32.addChild(&field43);

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
ShaderPart& ShaderPart44 =  ShaderPart();
ShaderPart44.setType(CString("VERTEX"));
IS& IS45 =  IS();
Connect& connect46 =  Connect();
connect46.setNodeField(CString("url"));
connect46.setProtoField(CString("vertex"));
IS45.addChild(&connect46);

ShaderPart44.addChild(&IS45);

ComposedShader32.setParts(&ShaderPart44);

ShaderPart& ShaderPart47 =  ShaderPart();
ShaderPart47.setType(CString("FRAGMENT"));
IS& IS48 =  IS();
Connect& connect49 =  Connect();
connect49.setNodeField(CString("url"));
connect49.setProtoField(CString("fragment"));
IS48.addChild(&connect49);

ShaderPart47.addChild(&IS48);

ComposedShader32.setParts(&ShaderPart47);

Appearance23.addChild(&ComposedShader32);

Shape22.addChild(&Appearance23);

Sphere& Sphere50 =  Sphere();
Shape22.setGeometry(&Sphere50);

Transform21.addChild(&Shape22);

Script& Script51 =  Script();
Script51.setDEF(CString("Animate"));
field& field52 =  field();
field52.setName(CString("translation"));
field52.setAccessType(CString("inputOutput"));
field52.setType(CString("SFVec3f"));
field52.setValue(CString("0 0 0"));
Script51.addChild(&field52);

field& field53 =  field();
field53.setName(CString("velocity"));
field53.setAccessType(CString("inputOutput"));
field53.setType(CString("SFVec3f"));
field53.setValue(CString("0 0 0"));
Script51.addChild(&field53);

field& field54 =  field();
field54.setName(CString("set_fraction"));
field54.setAccessType(CString("inputOnly"));
field54.setType(CString("SFFloat"));
Script51.addChild(&field54);

field& field55 =  field();
field55.setName(CString("a"));
field55.setType(CString("SFFloat"));
field55.setAccessType(CString("inputOutput"));
field55.setValue(CString("0.5"));
Script51.addChild(&field55);

field& field56 =  field();
field56.setName(CString("b"));
field56.setType(CString("SFFloat"));
field56.setAccessType(CString("inputOutput"));
field56.setValue(CString("0.5"));
Script51.addChild(&field56);

field& field57 =  field();
field57.setName(CString("c"));
field57.setType(CString("SFFloat"));
field57.setAccessType(CString("inputOutput"));
field57.setValue(CString("3"));
Script51.addChild(&field57);

field& field58 =  field();
field58.setName(CString("d"));
field58.setType(CString("SFFloat"));
field58.setAccessType(CString("inputOutput"));
field58.setValue(CString("3"));
Script51.addChild(&field58);

field& field59 =  field();
field59.setName(CString("tdelta"));
field59.setType(CString("SFFloat"));
field59.setAccessType(CString("inputOutput"));
field59.setValue(CString("0.5"));
Script51.addChild(&field59);

field& field60 =  field();
field60.setName(CString("pdelta"));
field60.setType(CString("SFFloat"));
field60.setAccessType(CString("inputOutput"));
field60.setValue(CString("0.5"));
Script51.addChild(&field60);


//Script51.setSourceCode(CString("ecmascript:")+
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
Transform21.addChild(&Script51);

TimeSensor& TimeSensor61 =  TimeSensor();
TimeSensor61.setDEF(CString("TourTime"));
TimeSensor61.setCycleInterval(5);
TimeSensor61.setLoop(true);
Transform21.addChild(&TimeSensor61);

ROUTE& ROUTE62 =  ROUTE();
ROUTE62.setFromNode(CString("TourTime"));
ROUTE62.setFromField(CString("fraction_changed"));
ROUTE62.setToNode(CString("Animate"));
ROUTE62.setToField(CString("set_fraction"));
Transform21.addChild(&ROUTE62);

ROUTE& ROUTE63 =  ROUTE();
ROUTE63.setFromNode(CString("Animate"));
ROUTE63.setFromField(CString("translation_changed"));
ROUTE63.setToNode(CString("transform"));
ROUTE63.setToField(CString("set_translation"));
Transform21.addChild(&ROUTE63);

ROUTE& ROUTE64 =  ROUTE();
ROUTE64.setFromNode(CString("Animate"));
ROUTE64.setFromField(CString("a"));
ROUTE64.setToNode(CString("shader"));
ROUTE64.setToField(CString("a"));
Transform21.addChild(&ROUTE64);

ROUTE& ROUTE65 =  ROUTE();
ROUTE65.setFromNode(CString("Animate"));
ROUTE65.setFromField(CString("b"));
ROUTE65.setToNode(CString("shader"));
ROUTE65.setToField(CString("b"));
Transform21.addChild(&ROUTE65);

ROUTE& ROUTE66 =  ROUTE();
ROUTE66.setFromNode(CString("Animate"));
ROUTE66.setFromField(CString("c"));
ROUTE66.setToNode(CString("shader"));
ROUTE66.setToField(CString("c"));
Transform21.addChild(&ROUTE66);

ROUTE& ROUTE67 =  ROUTE();
ROUTE67.setFromNode(CString("Animate"));
ROUTE67.setFromField(CString("d"));
ROUTE67.setToNode(CString("shader"));
ROUTE67.setToField(CString("d"));
Transform21.addChild(&ROUTE67);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromNode(CString("Animate"));
ROUTE68.setFromField(CString("tdelta"));
ROUTE68.setToNode(CString("shader"));
ROUTE68.setToField(CString("tdelta"));
Transform21.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromNode(CString("Animate"));
ROUTE69.setFromField(CString("pdelta"));
ROUTE69.setToNode(CString("shader"));
ROUTE69.setToField(CString("pdelta"));
Transform21.addChild(&ROUTE69);

ProtoBody20.addChild(&Transform21);

ProtoDeclare16.addChild(&ProtoBody20);

Scene15.addChild(&ProtoDeclare16);

X3D0.setScene(&Scene15);

//}

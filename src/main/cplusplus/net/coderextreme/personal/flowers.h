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
meta11.setContent(CString("flowers.x3d"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("creator"));
meta12.setContent(CString("John Carlson"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("description"));
meta13.setContent(CString("5 or more prismatic flowers"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("generator"));
meta14.setContent(CString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("identifier"));
meta15.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/personal/flowers.x3d"));
head1.addMeta(&meta15);

X3D0.setHead(&head1);

Scene& Scene16 =  Scene();
NavigationInfo& NavigationInfo17 =  NavigationInfo();
Scene16.addChild(&NavigationInfo17);

//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background& Background18 =  Background();
Background18.setBackUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
Background18.setBottomUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
Background18.setFrontUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
Background18.setLeftUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
Background18.setRightUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
Background18.setTopUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
Scene16.addChild(&Background18);

ProtoDeclare& ProtoDeclare19 =  ProtoDeclare();
ProtoDeclare19.setName(CString("flower"));
ProtoBody& ProtoBody20 =  ProtoBody();
Transform& Transform21 =  Transform();
Transform21.setDEF(CString("animate_transform"));
Shape& Shape22 =  Shape();
Appearance& Appearance23 =  Appearance();
Material& Material24 =  Material();
Material24.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material24.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance23.addChild(&Material24);

ComposedCubeMapTexture& ComposedCubeMapTexture25 =  ComposedCubeMapTexture();
ComposedCubeMapTexture25.setDEF(CString("texture"));
ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
ComposedCubeMapTexture25.setBack(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
ComposedCubeMapTexture25.setBottom(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
ComposedCubeMapTexture25.setFront(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
ComposedCubeMapTexture25.setLeft(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
ComposedCubeMapTexture25.setRight(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
ComposedCubeMapTexture25.setTop(ImageTexture31);

Appearance23.addChild(&ComposedCubeMapTexture25);

//<ComposedShader DEF='x3dom' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field> <field name='b' type='SFFloat' accessType='inputOutput' value='1'></field> <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\"' containerField='parts' type='VERTEX'></ShaderPart> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
ComposedShader& ComposedShader32 =  ComposedShader();
ComposedShader32.setDEF(CString("x_ite"));
ComposedShader32.setLanguage(CString("GLSL"));
field& field33 =  field();
field33.setName(CString("cube"));
field33.setType(CString("SFNode"));
field33.setAccessType(CString("inputOutput"));
ComposedCubeMapTexture& ComposedCubeMapTexture34 =  ComposedCubeMapTexture();
ComposedCubeMapTexture34.setUSE(CString("texture"));
field33.addChild(&ComposedCubeMapTexture34);

ComposedShader32.addChild(&field33);

field& field35 =  field();
field35.setName(CString("chromaticDispertion"));
field35.setAccessType(CString("initializeOnly"));
field35.setType(CString("SFVec3f"));
field35.setValue(CString("0.98 1 1.033"));
ComposedShader32.addChild(&field35);

field& field36 =  field();
field36.setName(CString("bias"));
field36.setType(CString("SFFloat"));
field36.setAccessType(CString("inputOnly"));
field36.setValue(CString("0.5"));
ComposedShader32.addChild(&field36);

field& field37 =  field();
field37.setName(CString("scale"));
field37.setType(CString("SFFloat"));
field37.setAccessType(CString("inputOnly"));
field37.setValue(CString("0.5"));
ComposedShader32.addChild(&field37);

field& field38 =  field();
field38.setName(CString("power"));
field38.setType(CString("SFFloat"));
field38.setAccessType(CString("inputOnly"));
field38.setValue(CString("2"));
ComposedShader32.addChild(&field38);

field& field39 =  field();
field39.setName(CString("a"));
field39.setType(CString("SFFloat"));
field39.setAccessType(CString("inputOnly"));
field39.setValue(CString("10"));
ComposedShader32.addChild(&field39);

field& field40 =  field();
field40.setName(CString("b"));
field40.setType(CString("SFFloat"));
field40.setAccessType(CString("inputOnly"));
field40.setValue(CString("1"));
ComposedShader32.addChild(&field40);

field& field41 =  field();
field41.setName(CString("c"));
field41.setType(CString("SFFloat"));
field41.setAccessType(CString("inputOnly"));
field41.setValue(CString("20"));
ComposedShader32.addChild(&field41);

field& field42 =  field();
field42.setName(CString("d"));
field42.setType(CString("SFFloat"));
field42.setAccessType(CString("inputOnly"));
field42.setValue(CString("20"));
ComposedShader32.addChild(&field42);

field& field43 =  field();
field43.setName(CString("tdelta"));
field43.setType(CString("SFFloat"));
field43.setAccessType(CString("inputOnly"));
field43.setValue(CString("0"));
ComposedShader32.addChild(&field43);

field& field44 =  field();
field44.setName(CString("pdelta"));
field44.setType(CString("SFFloat"));
field44.setAccessType(CString("inputOnly"));
field44.setValue(CString("0"));
ComposedShader32.addChild(&field44);

ShaderPart& ShaderPart45 =  ShaderPart();
ShaderPart45.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs")}, 2);
ShaderPart45.setType(CString("VERTEX"));
ComposedShader32.setParts(&ShaderPart45);

ShaderPart& ShaderPart46 =  ShaderPart();
ShaderPart46.setUrl(new CString[]{CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")}, 2);
ShaderPart46.setType(CString("FRAGMENT"));
ComposedShader32.setParts(&ShaderPart46);

Appearance23.addChild(&ComposedShader32);

Shape22.addChild(&Appearance23);

Sphere& Sphere47 =  Sphere();
Shape22.setGeometry(&Sphere47);

Transform21.addChild(&Shape22);

ProtoBody20.addChild(&Transform21);

Script& Script48 =  Script();
Script48.setDEF(CString("Animate"));
field& field49 =  field();
field49.setName(CString("translation"));
field49.setAccessType(CString("inputOutput"));
field49.setType(CString("SFVec3f"));
field49.setValue(CString("0 0 0"));
Script48.addChild(&field49);

field& field50 =  field();
field50.setName(CString("velocity"));
field50.setAccessType(CString("inputOutput"));
field50.setType(CString("SFVec3f"));
field50.setValue(CString("0 0 0"));
Script48.addChild(&field50);

field& field51 =  field();
field51.setName(CString("set_fraction"));
field51.setAccessType(CString("inputOnly"));
field51.setType(CString("SFFloat"));
Script48.addChild(&field51);

field& field52 =  field();
field52.setName(CString("a"));
field52.setType(CString("SFFloat"));
field52.setAccessType(CString("inputOutput"));
field52.setValue(CString("0.5"));
Script48.addChild(&field52);

field& field53 =  field();
field53.setName(CString("b"));
field53.setType(CString("SFFloat"));
field53.setAccessType(CString("inputOutput"));
field53.setValue(CString("0.5"));
Script48.addChild(&field53);

field& field54 =  field();
field54.setName(CString("c"));
field54.setType(CString("SFFloat"));
field54.setAccessType(CString("inputOutput"));
field54.setValue(CString("3"));
Script48.addChild(&field54);

field& field55 =  field();
field55.setName(CString("d"));
field55.setType(CString("SFFloat"));
field55.setAccessType(CString("inputOutput"));
field55.setValue(CString("3"));
Script48.addChild(&field55);

field& field56 =  field();
field56.setName(CString("tdelta"));
field56.setType(CString("SFFloat"));
field56.setAccessType(CString("inputOutput"));
field56.setValue(CString("0.5"));
Script48.addChild(&field56);

field& field57 =  field();
field57.setName(CString("pdelta"));
field57.setType(CString("SFFloat"));
field57.setAccessType(CString("inputOutput"));
field57.setValue(CString("0.5"));
Script48.addChild(&field57);


//Script48.setSourceCode(CString("ecmascript:")+
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
//_T("				tdelta = tdelta + 0.5;")+
//_T("				pdelta = pdelta + 0.5;")+
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
ProtoBody20.addChild(&Script48);

TimeSensor& TimeSensor58 =  TimeSensor();
TimeSensor58.setDEF(CString("TourTime"));
TimeSensor58.setCycleInterval(5);
TimeSensor58.setLoop(true);
ProtoBody20.addChild(&TimeSensor58);

ROUTE& ROUTE59 =  ROUTE();
ROUTE59.setFromNode(CString("TourTime"));
ROUTE59.setFromField(CString("fraction_changed"));
ROUTE59.setToNode(CString("Animate"));
ROUTE59.setToField(CString("set_fraction"));
ProtoBody20.addChild(&ROUTE59);

ROUTE& ROUTE60 =  ROUTE();
ROUTE60.setFromNode(CString("Animate"));
ROUTE60.setFromField(CString("translation_changed"));
ROUTE60.setToNode(CString("animate_transform"));
ROUTE60.setToField(CString("set_translation"));
ProtoBody20.addChild(&ROUTE60);

ROUTE& ROUTE61 =  ROUTE();
ROUTE61.setFromNode(CString("Animate"));
ROUTE61.setFromField(CString("a"));
ROUTE61.setToNode(CString("x_ite"));
ROUTE61.setToField(CString("a"));
ProtoBody20.addChild(&ROUTE61);

ROUTE& ROUTE62 =  ROUTE();
ROUTE62.setFromNode(CString("Animate"));
ROUTE62.setFromField(CString("b"));
ROUTE62.setToNode(CString("x_ite"));
ROUTE62.setToField(CString("b"));
ProtoBody20.addChild(&ROUTE62);

ROUTE& ROUTE63 =  ROUTE();
ROUTE63.setFromNode(CString("Animate"));
ROUTE63.setFromField(CString("c"));
ROUTE63.setToNode(CString("x_ite"));
ROUTE63.setToField(CString("c"));
ProtoBody20.addChild(&ROUTE63);

ROUTE& ROUTE64 =  ROUTE();
ROUTE64.setFromNode(CString("Animate"));
ROUTE64.setFromField(CString("d"));
ROUTE64.setToNode(CString("x_ite"));
ROUTE64.setToField(CString("d"));
ProtoBody20.addChild(&ROUTE64);

ROUTE& ROUTE65 =  ROUTE();
ROUTE65.setFromNode(CString("Animate"));
ROUTE65.setFromField(CString("pdelta"));
ROUTE65.setToNode(CString("x_ite"));
ROUTE65.setToField(CString("pdelta"));
ProtoBody20.addChild(&ROUTE65);

ROUTE& ROUTE66 =  ROUTE();
ROUTE66.setFromNode(CString("Animate"));
ROUTE66.setFromField(CString("tdelta"));
ROUTE66.setToNode(CString("x_ite"));
ROUTE66.setToField(CString("tdelta"));
ProtoBody20.addChild(&ROUTE66);

//<ROUTE fromNode='Animate' fromField='a' toNode='x3dom' toField='a'/> <ROUTE fromNode='Animate' fromField='b' toNode='x3dom' toField='b'/> <ROUTE fromNode='Animate' fromField='c' toNode='x3dom' toField='c'/> <ROUTE fromNode='Animate' fromField='d' toNode='x3dom' toField='d'/> <ROUTE fromNode='Animate' fromField='pdelta' toNode='x3dom' toField='pdelta'/> <ROUTE fromNode='Animate' fromField='tdelta' toNode='x3dom' toField='tdelta'/>
ProtoDeclare19.addChild(&ProtoBody20);

Scene16.addChild(&ProtoDeclare19);

ProtoInstance& ProtoInstance67 =  ProtoInstance();
ProtoInstance67.setName(CString("flower"));
Scene16.addChild(&ProtoInstance67);

ProtoInstance& ProtoInstance68 =  ProtoInstance();
ProtoInstance68.setName(CString("flower"));
Scene16.addChild(&ProtoInstance68);

ProtoInstance& ProtoInstance69 =  ProtoInstance();
ProtoInstance69.setName(CString("flower"));
Scene16.addChild(&ProtoInstance69);

X3D0.setScene(&Scene16);

//}

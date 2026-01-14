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
ProtoDeclare& ProtoDeclare17 =  ProtoDeclare();
ProtoDeclare17.setName(CString("FlowerProto"));
ProtoInterface& ProtoInterface18 =  ProtoInterface();
field& field19 =  field();
field19.setName(CString("vertex"));
field19.setAccessType(CString("inputOnly"));
field19.setType(CString("MFString"));
field19.setValue(CString("\"../shaders/gl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl_flowers_chromatic.vs\""));
ProtoInterface18.addChild(&field19);

field& field20 =  field();
field20.setName(CString("fragment"));
field20.setAccessType(CString("inputOnly"));
field20.setType(CString("MFString"));
field20.setValue(CString("\"../shaders/pc_flowers.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_flowers.fs\""));
ProtoInterface18.addChild(&field20);

ProtoDeclare17.addChild(&ProtoInterface18);

ProtoBody& ProtoBody21 =  ProtoBody();
Transform& Transform22 =  Transform();
Transform22.setDEF(CString("transform"));
Shape& Shape23 =  Shape();
Appearance& Appearance24 =  Appearance();
Material& Material25 =  Material();
Material25.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material25.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance24.addChild(&Material25);

ComposedCubeMapTexture& ComposedCubeMapTexture26 =  ComposedCubeMapTexture();
ComposedCubeMapTexture26.setDEF(CString("texture"));
ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
ComposedCubeMapTexture26.setBack(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
ComposedCubeMapTexture26.setBottom(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
ComposedCubeMapTexture26.setFront(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
ComposedCubeMapTexture26.setLeft(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
ComposedCubeMapTexture26.setRight(ImageTexture31);

ImageTexture& ImageTexture32 =  ImageTexture();
ImageTexture32.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
ComposedCubeMapTexture26.setTop(ImageTexture32);

Appearance24.addChild(&ComposedCubeMapTexture26);

ComposedShader& ComposedShader33 =  ComposedShader();
ComposedShader33.setDEF(CString("shader"));
ComposedShader33.setLanguage(CString("GLSL"));
//<field name='fw_textureCoordGenType' accessType='inputOnly' type='SFInt32' value='0'></field>
field& field34 =  field();
field34.setName(CString("cube"));
field34.setType(CString("SFNode"));
field34.setAccessType(CString("inputOnly"));
ComposedCubeMapTexture& ComposedCubeMapTexture35 =  ComposedCubeMapTexture();
ComposedCubeMapTexture35.setUSE(CString("texture"));
field34.addChild(&ComposedCubeMapTexture35);

ComposedShader33.addChild(&field34);

field& field36 =  field();
field36.setName(CString("chromaticDispertion"));
field36.setAccessType(CString("initializeOnly"));
field36.setType(CString("SFVec3f"));
field36.setValue(CString("0.98 1 1.033"));
ComposedShader33.addChild(&field36);

field& field37 =  field();
field37.setName(CString("bias"));
field37.setType(CString("SFFloat"));
field37.setAccessType(CString("inputOnly"));
field37.setValue(CString("0.5"));
ComposedShader33.addChild(&field37);

field& field38 =  field();
field38.setName(CString("scale"));
field38.setType(CString("SFFloat"));
field38.setAccessType(CString("inputOnly"));
field38.setValue(CString("0.5"));
ComposedShader33.addChild(&field38);

field& field39 =  field();
field39.setName(CString("power"));
field39.setType(CString("SFFloat"));
field39.setAccessType(CString("inputOnly"));
field39.setValue(CString("2"));
ComposedShader33.addChild(&field39);

field& field40 =  field();
field40.setName(CString("a"));
field40.setType(CString("SFFloat"));
field40.setAccessType(CString("inputOnly"));
field40.setValue(CString("10"));
ComposedShader33.addChild(&field40);

field& field41 =  field();
field41.setName(CString("b"));
field41.setType(CString("SFFloat"));
field41.setAccessType(CString("inputOnly"));
field41.setValue(CString("1"));
ComposedShader33.addChild(&field41);

field& field42 =  field();
field42.setName(CString("c"));
field42.setType(CString("SFFloat"));
field42.setAccessType(CString("inputOnly"));
field42.setValue(CString("20"));
ComposedShader33.addChild(&field42);

field& field43 =  field();
field43.setName(CString("d"));
field43.setType(CString("SFFloat"));
field43.setAccessType(CString("inputOnly"));
field43.setValue(CString("20"));
ComposedShader33.addChild(&field43);

field& field44 =  field();
field44.setName(CString("tdelta"));
field44.setType(CString("SFFloat"));
field44.setAccessType(CString("inputOnly"));
field44.setValue(CString("0"));
ComposedShader33.addChild(&field44);

field& field45 =  field();
field45.setName(CString("pdelta"));
field45.setType(CString("SFFloat"));
field45.setAccessType(CString("inputOnly"));
field45.setValue(CString("0"));
ComposedShader33.addChild(&field45);

ShaderPart& ShaderPart46 =  ShaderPart();
ShaderPart46.setType(CString("VERTEX"));
IS& IS47 =  IS();
Connect& connect48 =  Connect();
connect48.setNodeField(CString("url"));
connect48.setProtoField(CString("vertex"));
IS47.addChild(&connect48);

ShaderPart46.addChild(&IS47);

ComposedShader33.setParts(&ShaderPart46);

ShaderPart& ShaderPart49 =  ShaderPart();
ShaderPart49.setType(CString("FRAGMENT"));
IS& IS50 =  IS();
Connect& connect51 =  Connect();
connect51.setNodeField(CString("url"));
connect51.setProtoField(CString("fragment"));
IS50.addChild(&connect51);

ShaderPart49.addChild(&IS50);

ComposedShader33.setParts(&ShaderPart49);

Appearance24.addChild(&ComposedShader33);

Shape23.addChild(&Appearance24);

Sphere& Sphere52 =  Sphere();
Shape23.setGeometry(&Sphere52);

Transform22.addChild(&Shape23);

Script& Script53 =  Script();
Script53.setDEF(CString("Animate"));
Script53.setDirectOutput(true);
field& field54 =  field();
field54.setName(CString("translation"));
field54.setAccessType(CString("inputOutput"));
field54.setType(CString("SFVec3f"));
field54.setValue(CString("0 0 0"));
Script53.addChild(&field54);

field& field55 =  field();
field55.setName(CString("velocity"));
field55.setAccessType(CString("outputOnly"));
field55.setType(CString("SFVec3f"));
field55.setValue(CString("0 0 0"));
Script53.addChild(&field55);

field& field56 =  field();
field56.setName(CString("set_fraction"));
field56.setAccessType(CString("inputOnly"));
field56.setType(CString("SFFloat"));
Script53.addChild(&field56);

field& field57 =  field();
field57.setName(CString("a"));
field57.setType(CString("SFFloat"));
field57.setAccessType(CString("outputOnly"));
field57.setValue(CString("0.5"));
Script53.addChild(&field57);

field& field58 =  field();
field58.setName(CString("b"));
field58.setType(CString("SFFloat"));
field58.setAccessType(CString("outputOnly"));
field58.setValue(CString("0.5"));
Script53.addChild(&field58);

field& field59 =  field();
field59.setName(CString("c"));
field59.setType(CString("SFFloat"));
field59.setAccessType(CString("outputOnly"));
field59.setValue(CString("3"));
Script53.addChild(&field59);

field& field60 =  field();
field60.setName(CString("d"));
field60.setType(CString("SFFloat"));
field60.setAccessType(CString("outputOnly"));
field60.setValue(CString("3"));
Script53.addChild(&field60);

field& field61 =  field();
field61.setName(CString("tdelta"));
field61.setType(CString("SFFloat"));
field61.setAccessType(CString("outputOnly"));
field61.setValue(CString("0.5"));
Script53.addChild(&field61);

field& field62 =  field();
field62.setName(CString("pdelta"));
field62.setType(CString("SFFloat"));
field62.setAccessType(CString("outputOnly"));
field62.setValue(CString("0.5"));
Script53.addChild(&field62);


//Script53.setSourceCode(CString("ecmascript:")+
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
Transform22.addChild(&Script53);

TimeSensor& TimeSensor63 =  TimeSensor();
TimeSensor63.setDEF(CString("TourTime"));
TimeSensor63.setCycleInterval(5);
TimeSensor63.setLoop(true);
Transform22.addChild(&TimeSensor63);

ROUTE& ROUTE64 =  ROUTE();
ROUTE64.setFromNode(CString("TourTime"));
ROUTE64.setFromField(CString("fraction_changed"));
ROUTE64.setToNode(CString("Animate"));
ROUTE64.setToField(CString("set_fraction"));
Transform22.addChild(&ROUTE64);

ROUTE& ROUTE65 =  ROUTE();
ROUTE65.setFromNode(CString("Animate"));
ROUTE65.setFromField(CString("translation_changed"));
ROUTE65.setToNode(CString("transform"));
ROUTE65.setToField(CString("set_translation"));
Transform22.addChild(&ROUTE65);

ROUTE& ROUTE66 =  ROUTE();
ROUTE66.setFromNode(CString("Animate"));
ROUTE66.setFromField(CString("a"));
ROUTE66.setToNode(CString("shader"));
ROUTE66.setToField(CString("a"));
Transform22.addChild(&ROUTE66);

ROUTE& ROUTE67 =  ROUTE();
ROUTE67.setFromNode(CString("Animate"));
ROUTE67.setFromField(CString("b"));
ROUTE67.setToNode(CString("shader"));
ROUTE67.setToField(CString("b"));
Transform22.addChild(&ROUTE67);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromNode(CString("Animate"));
ROUTE68.setFromField(CString("c"));
ROUTE68.setToNode(CString("shader"));
ROUTE68.setToField(CString("c"));
Transform22.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromNode(CString("Animate"));
ROUTE69.setFromField(CString("d"));
ROUTE69.setToNode(CString("shader"));
ROUTE69.setToField(CString("d"));
Transform22.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromNode(CString("Animate"));
ROUTE70.setFromField(CString("tdelta"));
ROUTE70.setToNode(CString("shader"));
ROUTE70.setToField(CString("tdelta"));
Transform22.addChild(&ROUTE70);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromNode(CString("Animate"));
ROUTE71.setFromField(CString("pdelta"));
ROUTE71.setToNode(CString("shader"));
ROUTE71.setToField(CString("pdelta"));
Transform22.addChild(&ROUTE71);

ProtoBody21.addChild(&Transform22);

ProtoDeclare17.addChild(&ProtoBody21);

Scene16.addChild(&ProtoDeclare17);

X3D0.setScene(&Scene16);

//}

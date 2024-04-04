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
meta10.setContent(CString("flowers4.x3d"));
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
meta13.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("description"));
meta14.setContent(CString("an animated flower"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
NavigationInfo& NavigationInfo16 =  NavigationInfo();
Scene15.addChild(&NavigationInfo16);

Background& Background17 =  Background();
Background17.setBackUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
Background17.setBottomUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
Background17.setFrontUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
Background17.setLeftUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
Background17.setRightUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
Background17.setTopUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
Scene15.addChild(&Background17);

Transform& Transform18 =  Transform();
Transform18.setDEF(CString("transform"));
Shape& Shape19 =  Shape();
Appearance& Appearance20 =  Appearance();
Material& Material21 =  Material();
Material21.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material21.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance20.addChild(&Material21);

ComposedCubeMapTexture& ComposedCubeMapTexture22 =  ComposedCubeMapTexture();
ImageTexture& ImageTexture23 =  ImageTexture();
ImageTexture23.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
ComposedCubeMapTexture22.setBack(ImageTexture23);

ImageTexture& ImageTexture24 =  ImageTexture();
ImageTexture24.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
ComposedCubeMapTexture22.setBottom(ImageTexture24);

ImageTexture& ImageTexture25 =  ImageTexture();
ImageTexture25.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
ComposedCubeMapTexture22.setFront(ImageTexture25);

ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
ComposedCubeMapTexture22.setLeft(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
ComposedCubeMapTexture22.setRight(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
ComposedCubeMapTexture22.setTop(ImageTexture28);

Appearance20.addChild(&ComposedCubeMapTexture22);

ComposedShader& ComposedShader29 =  ComposedShader();
ComposedShader29.setDEF(CString("shader"));
ComposedShader29.setLanguage(CString("GLSL"));
field& field30 =  field();
field30.setName(CString("cube"));
field30.setType(CString("SFInt32"));
field30.setAccessType(CString("inputOutput"));
field30.setValue(CString("0"));
ComposedShader29.addChild(&field30);

field& field31 =  field();
field31.setName(CString("chromaticDispertion"));
field31.setAccessType(CString("inputOutput"));
field31.setType(CString("SFVec3f"));
field31.setValue(CString("0.98 1 1.033"));
ComposedShader29.addChild(&field31);

field& field32 =  field();
field32.setName(CString("bias"));
field32.setType(CString("SFFloat"));
field32.setAccessType(CString("inputOutput"));
field32.setValue(CString("0.5"));
ComposedShader29.addChild(&field32);

field& field33 =  field();
field33.setName(CString("scale"));
field33.setType(CString("SFFloat"));
field33.setAccessType(CString("inputOutput"));
field33.setValue(CString("0.5"));
ComposedShader29.addChild(&field33);

field& field34 =  field();
field34.setName(CString("power"));
field34.setType(CString("SFFloat"));
field34.setAccessType(CString("inputOutput"));
field34.setValue(CString("2"));
ComposedShader29.addChild(&field34);

ShaderPart& ShaderPart35 =  ShaderPart();
ShaderPart35.setUrl(new CString[]{CString("../shaders/x3dom.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs")}, 2);
ShaderPart35.setType(CString("VERTEX"));
ComposedShader29.setParts(&ShaderPart35);

ShaderPart& ShaderPart36 =  ShaderPart();
ShaderPart36.setUrl(new CString[]{CString("../shaders/pc_bubbles.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs")}, 2);
ShaderPart36.setType(CString("FRAGMENT"));
ComposedShader29.setParts(&ShaderPart36);

Appearance20.addChild(&ComposedShader29);

Shape19.addChild(&Appearance20);

//<Sphere>
IndexedFaceSet& IndexedFaceSet37 =  IndexedFaceSet();
IndexedFaceSet37.setConvex(False);
IndexedFaceSet37.setDEF(CString("Orbit"));
Coordinate& Coordinate38 =  Coordinate();
Coordinate38.setDEF(CString("OrbitCoordinates"));
IndexedFaceSet37.setCoord(&Coordinate38);

Shape19.setGeometry(&IndexedFaceSet37);

Transform18.addChild(&Shape19);

Scene15.addChild(&Transform18);

Script& Script39 =  Script();
Script39.setDEF(CString("OrbitScript"));
field& field40 =  field();
field40.setName(CString("set_fraction"));
field40.setAccessType(CString("inputOnly"));
field40.setType(CString("SFFloat"));
Script39.addChild(&field40);

field& field41 =  field();
field41.setName(CString("coordinates"));
field41.setAccessType(CString("inputOutput"));
field41.setType(CString("MFVec3f"));
Script39.addChild(&field41);

field& field42 =  field();
field42.setName(CString("coordIndexes"));
field42.setAccessType(CString("outputOnly"));
field42.setType(CString("MFInt32"));
Script39.addChild(&field42);


Script39.setSourceCode(CString("ecmascript:")+
_T("var e = 5;")+
_T("var f = 5;")+
_T("var g = 5;")+
_T("var h = 5;")+
_T("function initialize() {")+
_T("     var resolution = 100;")+
_T("     updateCoordinates(resolution);")+
_T("     var cis = [];")+
_T("     for ( i = 0; i < resolution-1; i++) {")+
_T("     	for ( j = 0; j < resolution-1; j++) {")+
_T("	     cis.push(i*resolution+j);")+
_T("	     cis.push(i*resolution+j+1);")+
_T("	     cis.push((i+1)*resolution+j+1);")+
_T("	     cis.push((i+1)*resolution+j);")+
_T("	     cis.push(-1);")+
_T("	}")+
_T("    }")+
_T("    coordIndexes = new MFInt32(cis);")+
_T("}")+
_T("function updateCoordinates(resolution) {")+
_T("     var theta = 0.0;")+
_T("     var phi = 0.0;")+
_T("     var delta = (2 * 3.141592653) / (resolution-1);")+
_T("     var crds = [];")+
_T("     for ( i = 0; i < resolution; i++) {")+
_T("     	for ( j = 0; j < resolution; j++) {")+
_T("		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);")+
_T("		crds.push(new SFVec3f(")+
_T("			rho * Math.cos(phi) * Math.cos(theta),")+
_T("			rho * Math.cos(phi) * Math.sin(theta),")+
_T("			rho * Math.sin(phi)")+
_T("		));")+
_T("		theta += delta;")+
_T("	}")+
_T("	phi += delta;")+
_T("     }")+
_T("     coordinates = new MFVec3f(crds);")+
_T("}")+
_T("function set_fraction(fraction, eventTime) {")+
_T("	var choice = Math.floor(Math.random() * 4);")+
_T("	switch (choice) {")+
_T("	case 0:")+
_T("		e += Math.floor(Math.random() * 2) * 2 - 1;")+
_T("		break;")+
_T("	case 1:")+
_T("		f += Math.floor(Math.random() * 2) * 2 - 1;")+
_T("		break;")+
_T("	case 2:")+
_T("		g += Math.floor(Math.random() * 2) * 2 - 1;")+
_T("		break;")+
_T("	case 3:")+
_T("		h += Math.floor(Math.random() * 2) * 2 - 1;")+
_T("		break;")+
_T("	}")+
_T("	if (f < 1) {")+
_T("		f = 10;")+
_T("	}")+
_T("	if (g < 1) {")+
_T("		g = 4;")+
_T("	}")+
_T("	if (h < 1) {")+
_T("		h = 4;")+
_T("	}")+
_T("	var resolution = 100;")+
_T("	updateCoordinates(resolution);")+
_T("}"));
Scene15.addChild(&Script39);

TimeSensor& TimeSensor43 =  TimeSensor();
TimeSensor43.setDEF(CString("Clock"));
TimeSensor43.setCycleInterval(16);
TimeSensor43.setLoop(True);
Scene15.addChild(&TimeSensor43);

ROUTE& ROUTE44 =  ROUTE();
ROUTE44.setFromField(CString("coordIndexes"));
ROUTE44.setFromNode(CString("OrbitScript"));
ROUTE44.setToField(CString("set_coordIndex"));
ROUTE44.setToNode(CString("Orbit"));
Scene15.addChild(&ROUTE44);

ROUTE& ROUTE45 =  ROUTE();
ROUTE45.setFromField(CString("coordinates"));
ROUTE45.setFromNode(CString("OrbitScript"));
ROUTE45.setToField(CString("set_point"));
ROUTE45.setToNode(CString("OrbitCoordinates"));
Scene15.addChild(&ROUTE45);

ROUTE& ROUTE46 =  ROUTE();
ROUTE46.setFromField(CString("fraction_changed"));
ROUTE46.setFromNode(CString("Clock"));
ROUTE46.setToField(CString("set_fraction"));
ROUTE46.setToNode(CString("OrbitScript"));
Scene15.addChild(&ROUTE46);

X3D0.setScene(&Scene15);

}

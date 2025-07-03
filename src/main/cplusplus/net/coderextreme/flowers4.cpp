#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define FALSE false
#define TRUE true
#define BOOL bool
#define False false
#define True true
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
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
meta11.setContent(CString("flowers4.x3d"));
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
meta14.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("description"));
meta15.setContent(CString("an animated flower"));
head1.addMeta(&meta15);

X3D0.setHead(&head1);

Scene& Scene16 =  Scene();
NavigationInfo& NavigationInfo17 =  NavigationInfo();
Scene16.addChild(&NavigationInfo17);

Background& Background18 =  Background();
Background18.setBackUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
Background18.setBottomUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
Background18.setFrontUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
Background18.setLeftUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
Background18.setRightUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
Background18.setTopUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
Scene16.addChild(&Background18);

Transform& Transform19 =  Transform();
Transform19.setDEF(CString("transform"));
Shape& Shape20 =  Shape();
Appearance& Appearance21 =  Appearance();
Material& Material22 =  Material();
Material22.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material22.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance21.addChild(&Material22);

ComposedCubeMapTexture& ComposedCubeMapTexture23 =  ComposedCubeMapTexture();
ImageTexture& ImageTexture24 =  ImageTexture();
ImageTexture24.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
ComposedCubeMapTexture23.setBack(ImageTexture24);

ImageTexture& ImageTexture25 =  ImageTexture();
ImageTexture25.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
ComposedCubeMapTexture23.setBottom(ImageTexture25);

ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
ComposedCubeMapTexture23.setFront(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
ComposedCubeMapTexture23.setLeft(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
ComposedCubeMapTexture23.setRight(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
ComposedCubeMapTexture23.setTop(ImageTexture29);

Appearance21.addChild(&ComposedCubeMapTexture23);

ComposedShader& ComposedShader30 =  ComposedShader();
ComposedShader30.setDEF(CString("shader"));
ComposedShader30.setLanguage(CString("GLSL"));
field& field31 =  field();
field31.setName(CString("cube"));
field31.setType(CString("SFInt32"));
field31.setAccessType(CString("inputOutput"));
field31.setValue(CString("0"));
ComposedShader30.addChild(&field31);

field& field32 =  field();
field32.setName(CString("chromaticDispertion"));
field32.setAccessType(CString("inputOutput"));
field32.setType(CString("SFVec3f"));
field32.setValue(CString("0.98 1 1.033"));
ComposedShader30.addChild(&field32);

field& field33 =  field();
field33.setName(CString("bias"));
field33.setType(CString("SFFloat"));
field33.setAccessType(CString("inputOutput"));
field33.setValue(CString("0.5"));
ComposedShader30.addChild(&field33);

field& field34 =  field();
field34.setName(CString("scale"));
field34.setType(CString("SFFloat"));
field34.setAccessType(CString("inputOutput"));
field34.setValue(CString("0.5"));
ComposedShader30.addChild(&field34);

field& field35 =  field();
field35.setName(CString("power"));
field35.setType(CString("SFFloat"));
field35.setAccessType(CString("inputOutput"));
field35.setValue(CString("2"));
ComposedShader30.addChild(&field35);

ShaderPart& ShaderPart36 =  ShaderPart();
ShaderPart36.setUrl(new CString[]{CString("../shaders/x_ite.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs")}, 3);
ShaderPart36.setType(CString("VERTEX"));
ComposedShader30.setParts(&ShaderPart36);

ShaderPart& ShaderPart37 =  ShaderPart();
ShaderPart37.setUrl(new CString[]{CString("../shaders/x_ite.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")}, 3);
ShaderPart37.setType(CString("FRAGMENT"));
ComposedShader30.setParts(&ShaderPart37);

Appearance21.addChild(&ComposedShader30);

Shape20.addChild(&Appearance21);

//<Sphere>
IndexedFaceSet& IndexedFaceSet38 =  IndexedFaceSet();
IndexedFaceSet38.setConvex(False);
IndexedFaceSet38.setDEF(CString("Orbit"));
Coordinate& Coordinate39 =  Coordinate();
Coordinate39.setDEF(CString("OrbitCoordinates"));
IndexedFaceSet38.setCoord(&Coordinate39);

Shape20.setGeometry(&IndexedFaceSet38);

Transform19.addChild(&Shape20);

Scene16.addChild(&Transform19);

Script& Script40 =  Script();
Script40.setDEF(CString("OrbitScript"));
field& field41 =  field();
field41.setName(CString("set_fraction"));
field41.setAccessType(CString("inputOnly"));
field41.setType(CString("SFFloat"));
Script40.addChild(&field41);

field& field42 =  field();
field42.setName(CString("coordinates"));
field42.setAccessType(CString("inputOutput"));
field42.setType(CString("MFVec3f"));
Script40.addChild(&field42);

field& field43 =  field();
field43.setName(CString("coordIndexes"));
field43.setAccessType(CString("outputOnly"));
field43.setType(CString("MFInt32"));
Script40.addChild(&field43);

field& field44 =  field();
field44.setName(CString("e"));
field44.setType(CString("SFFloat"));
field44.setAccessType(CString("inputOutput"));
field44.setValue(CString("5"));
Script40.addChild(&field44);

field& field45 =  field();
field45.setName(CString("f"));
field45.setType(CString("SFFloat"));
field45.setAccessType(CString("inputOutput"));
field45.setValue(CString("5"));
Script40.addChild(&field45);

field& field46 =  field();
field46.setName(CString("g"));
field46.setType(CString("SFFloat"));
field46.setAccessType(CString("inputOutput"));
field46.setValue(CString("5"));
Script40.addChild(&field46);

field& field47 =  field();
field47.setName(CString("h"));
field47.setType(CString("SFFloat"));
field47.setAccessType(CString("inputOutput"));
field47.setValue(CString("5"));
Script40.addChild(&field47);


Script40.setSourceCode(CString("ecmascript:")+
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
_T("    coordIndexes = new MFInt32(...cis);")+
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
_T("     coordinates = new MFVec3f(...crds);")+
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
_T("	if (e < 1) {")+
_T("		e = 10;")+
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
Scene16.addChild(&Script40);

TimeSensor& TimeSensor48 =  TimeSensor();
TimeSensor48.setDEF(CString("Clock"));
TimeSensor48.setCycleInterval(16);
TimeSensor48.setLoop(True);
Scene16.addChild(&TimeSensor48);

ROUTE& ROUTE49 =  ROUTE();
ROUTE49.setFromField(CString("coordIndexes"));
ROUTE49.setFromNode(CString("OrbitScript"));
ROUTE49.setToField(CString("set_coordIndex"));
ROUTE49.setToNode(CString("Orbit"));
Scene16.addChild(&ROUTE49);

ROUTE& ROUTE50 =  ROUTE();
ROUTE50.setFromField(CString("coordinates"));
ROUTE50.setFromNode(CString("OrbitScript"));
ROUTE50.setToField(CString("set_point"));
ROUTE50.setToNode(CString("OrbitCoordinates"));
Scene16.addChild(&ROUTE50);

ROUTE& ROUTE51 =  ROUTE();
ROUTE51.setFromField(CString("fraction_changed"));
ROUTE51.setFromNode(CString("Clock"));
ROUTE51.setToField(CString("set_fraction"));
ROUTE51.setToNode(CString("OrbitScript"));
Scene16.addChild(&ROUTE51);

X3D0.setScene(&Scene16);

}

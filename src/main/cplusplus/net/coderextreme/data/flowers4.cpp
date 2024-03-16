/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Abstracts.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Concretes.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile("Immersive");
X3D0->setVersion("4.0");
head* head1 = new head();
component* component2 = new component();
component2->setName("Scripting");
component2->setLevel(1);
head1->addComponent(component2);

component* component3 = new component();
component3->setName("EnvironmentalEffects");
component3->setLevel(3);
head1->addComponent(component3);

component* component4 = new component();
component4->setName("Shaders");
component4->setLevel(1);
head1->addComponent(component4);

component* component5 = new component();
component5->setName("CubeMapTexturing");
component5->setLevel(1);
head1->addComponent(component5);

component* component6 = new component();
component6->setName("Texturing");
component6->setLevel(1);
head1->addComponent(component6);

component* component7 = new component();
component7->setName("Rendering");
component7->setLevel(1);
head1->addComponent(component7);

component* component8 = new component();
component8->setName("Grouping");
component8->setLevel(3);
head1->addComponent(component8);

component* component9 = new component();
component9->setName("Core");
component9->setLevel(1);
head1->addComponent(component9);

//<component name='Shape' level='4'></component>
meta* meta10 = new meta();
meta10->setName("title");
meta10->setContent("flowers4.x3d");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("creator");
meta11->setContent("John Carlson");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("generator");
meta12->setContent("manual");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("identifier");
meta13->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("description");
meta14->setContent("an animated flower");
head1->addMeta(meta14);

X3D0->setHead(head1);

Scene* Scene15 = new Scene();
NavigationInfo* NavigationInfo16 = new NavigationInfo();
Scene15->addChild(NavigationInfo16);

Background* Background17 = new Background();
Background17->setBackUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background17->setBottomUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background17->setFrontUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background17->setLeftUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background17->setRightUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background17->setTopUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
Scene15->addChild(Background17);

Transform* Transform18 = new Transform();
Transform18->setDEF("transform");
Shape* Shape19 = new Shape();
Appearance* Appearance20 = new Appearance();
Material* Material21 = new Material();
Material21->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material21->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance20->setMaterial(Material21);

ComposedCubeMapTexture* ComposedCubeMapTexture22 = new ComposedCubeMapTexture();
ImageTexture* ImageTexture23 = new ImageTexture();
ImageTexture23->setUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
ComposedCubeMapTexture22->setBackTexture(ImageTexture23);

ImageTexture* ImageTexture24 = new ImageTexture();
ImageTexture24->setUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
ComposedCubeMapTexture22->setBottomTexture(ImageTexture24);

ImageTexture* ImageTexture25 = new ImageTexture();
ImageTexture25->setUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
ComposedCubeMapTexture22->setFrontTexture(ImageTexture25);

ImageTexture* ImageTexture26 = new ImageTexture();
ImageTexture26->setUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
ComposedCubeMapTexture22->setLeftTexture(ImageTexture26);

ImageTexture* ImageTexture27 = new ImageTexture();
ImageTexture27->setUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
ComposedCubeMapTexture22->setRightTexture(ImageTexture27);

ImageTexture* ImageTexture28 = new ImageTexture();
ImageTexture28->setUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
ComposedCubeMapTexture22->setTopTexture(ImageTexture28);

Appearance20->setTexture(ComposedCubeMapTexture22);

ComposedShader* ComposedShader29 = new ComposedShader();
ComposedShader29->setDEF("shader");
ComposedShader29->setLanguage("GLSL");
field* field30 = new field();
field30->setName("cube");
field30->setType("SFInt32");
field30->setAccessType("inputOutput");
field30->setValue("0");
ComposedShader29->addField(field30);

field* field31 = new field();
field31->setName("chromaticDispertion");
field31->setAccessType("inputOutput");
field31->setType("SFVec3f");
field31->setValue("0.98 1 1.033");
ComposedShader29->addField(field31);

field* field32 = new field();
field32->setName("bias");
field32->setType("SFFloat");
field32->setAccessType("inputOutput");
field32->setValue("0.5");
ComposedShader29->addField(field32);

field* field33 = new field();
field33->setName("scale");
field33->setType("SFFloat");
field33->setAccessType("inputOutput");
field33->setValue("0.5");
ComposedShader29->addField(field33);

field* field34 = new field();
field34->setName("power");
field34->setType("SFFloat");
field34->setAccessType("inputOutput");
field34->setValue("2");
ComposedShader29->addField(field34);

ShaderPart* ShaderPart35 = new ShaderPart();
ShaderPart35->setUrl(new String[2]{"../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ShaderPart35->setType("VERTEX");
ComposedShader29->addParts(ShaderPart35);

ShaderPart* ShaderPart36 = new ShaderPart();
ShaderPart36->setUrl(new String[2]{"../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"}, 2);
ShaderPart36->setType("FRAGMENT");
ComposedShader29->addParts(ShaderPart36);

Appearance20->addShaders(ComposedShader29);

Shape19->setAppearance(Appearance20);

//<Sphere>
IndexedFaceSet* IndexedFaceSet37 = new IndexedFaceSet();
IndexedFaceSet37->setConvex(False);
IndexedFaceSet37->setDEF("Orbit");
Coordinate* Coordinate38 = new Coordinate();
Coordinate38->setDEF("OrbitCoordinates");
IndexedFaceSet37->setCoord(Coordinate38);

Shape19->setGeometry(IndexedFaceSet37);

Transform18->addChild(Shape19);

Scene15->addChild(Transform18);

Script* Script39 = new Script();
Script39->setDEF("OrbitScript");
field* field40 = new field();
field40->setName("set_fraction");
field40->setAccessType("inputOnly");
field40->setType("SFFloat");
Script39->addField(field40);

field* field41 = new field();
field41->setName("coordinates");
field41->setAccessType("inputOutput");
field41->setType("MFVec3f");
Script39->addField(field41);

field* field42 = new field();
field42->setName("coordIndexes");
field42->setAccessType("outputOnly");
field42->setType("MFInt32");
Script39->addField(field42);


Script39.setSourceCode(`ecmascript:\n"+
"\n"+
"var e = 5;\n"+
"var f = 5;\n"+
"var g = 5;\n"+
"var h = 5;\n"+
"\n"+
"function initialize() {\n"+
"     var resolution = 100;\n"+
"     updateCoordinates(resolution);\n"+
"     var cis = [];\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     cis.push(i*resolution+j);\n"+
"	     cis.push(i*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j);\n"+
"	     cis.push(-1);\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = new MFInt32(cis);\n"+
"}\n"+
"\n"+
"function updateCoordinates(resolution) {\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var crds = [];\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		crds.push(new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		));\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = new MFVec3f(crds);\n"+
"}\n"+
"\n"+
"function set_fraction(fraction, eventTime) {\n"+
"	var choice = Math.floor(Math.random() * 4);\n"+
"	switch (choice) {\n"+
"	case 0:\n"+
"		e += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 1:\n"+
"		f += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 2:\n"+
"		g += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 3:\n"+
"		h += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	}\n"+
"	if (f < 1) {\n"+
"		f = 10;\n"+
"	}\n"+
"	if (g < 1) {\n"+
"		g = 4;\n"+
"	}\n"+
"	if (h < 1) {\n"+
"		h = 4;\n"+
"	}\n"+
"	var resolution = 100;\n"+
"	updateCoordinates(resolution);\n"+
"}`)
Scene15->addChild(Script39);

TimeSensor* TimeSensor43 = new TimeSensor();
TimeSensor43->setDEF("Clock");
TimeSensor43->setCycleInterval(16);
TimeSensor43->setLoop(True);
Scene15->addChild(TimeSensor43);

ROUTE* ROUTE44 = new ROUTE();
ROUTE44->setFromField("coordIndexes");
ROUTE44->setFromNode("OrbitScript");
ROUTE44->setToField("set_coordIndex");
ROUTE44->setToNode("Orbit");
Scene15->addChild(ROUTE44);

ROUTE* ROUTE45 = new ROUTE();
ROUTE45->setFromField("coordinates");
ROUTE45->setFromNode("OrbitScript");
ROUTE45->setToField("set_point");
ROUTE45->setToNode("OrbitCoordinates");
Scene15->addChild(ROUTE45);

ROUTE* ROUTE46 = new ROUTE();
ROUTE46->setFromField("fraction_changed");
ROUTE46->setFromNode("Clock");
ROUTE46->setToField("set_fraction");
ROUTE46->setToNode("OrbitScript");
Scene15->addChild(ROUTE46);

X3D0->setScene(Scene15);

X3D0->toXMLString();
}

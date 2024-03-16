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
meta10->setContent("flowerproto.x3d");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("creator");
meta11->setContent("John Carlson");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("description");
meta12->setContent("A flower proto with configurable shaders");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("generator");
meta13->setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("identifier");
meta14->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d");
head1->addMeta(meta14);

X3D0->setHead(head1);

Scene* Scene15 = new Scene();
ProtoDeclare* ProtoDeclare16 = new ProtoDeclare();
ProtoDeclare16->setName("FlowerProto");
ProtoInterface* ProtoInterface17 = new ProtoInterface();
field* field18 = new field();
field18->setName("vertex");
field18->setAccessType("inputOutput");
field18->setType("MFString");
field18->setValue("\"../shaders/gl_flowers_chromatic.vs\"");
ProtoInterface17->addField(field18);

field* field19 = new field();
field19->setName("fragment");
field19->setAccessType("inputOutput");
field19->setType("MFString");
field19->setValue("\"../shaders/pc_flowers.fs\"");
ProtoInterface17->addField(field19);

ProtoDeclare16->setProtoInterface(ProtoInterface17);

ProtoBody* ProtoBody20 = new ProtoBody();
Transform* Transform21 = new Transform();
Transform21->setDEF("transform");
Shape* Shape22 = new Shape();
Appearance* Appearance23 = new Appearance();
Material* Material24 = new Material();
Material24->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material24->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance23->setMaterial(Material24);

ComposedCubeMapTexture* ComposedCubeMapTexture25 = new ComposedCubeMapTexture();
ComposedCubeMapTexture25->setDEF("texture");
ImageTexture* ImageTexture26 = new ImageTexture();
ImageTexture26->setUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
ComposedCubeMapTexture25->setBackTexture(ImageTexture26);

ImageTexture* ImageTexture27 = new ImageTexture();
ImageTexture27->setUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
ComposedCubeMapTexture25->setBottomTexture(ImageTexture27);

ImageTexture* ImageTexture28 = new ImageTexture();
ImageTexture28->setUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
ComposedCubeMapTexture25->setFrontTexture(ImageTexture28);

ImageTexture* ImageTexture29 = new ImageTexture();
ImageTexture29->setUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
ComposedCubeMapTexture25->setLeftTexture(ImageTexture29);

ImageTexture* ImageTexture30 = new ImageTexture();
ImageTexture30->setUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
ComposedCubeMapTexture25->setRightTexture(ImageTexture30);

ImageTexture* ImageTexture31 = new ImageTexture();
ImageTexture31->setUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
ComposedCubeMapTexture25->setTopTexture(ImageTexture31);

Appearance23->setTexture(ComposedCubeMapTexture25);

ComposedShader* ComposedShader32 = new ComposedShader();
ComposedShader32->setDEF("shader");
ComposedShader32->setLanguage("GLSL");
field* field33 = new field();
field33->setName("cube");
field33->setType("SFInt32");
field33->setAccessType("inputOutput");
field33->setValue("0");
ComposedShader32->addField(field33);

field* field34 = new field();
field34->setName("chromaticDispertion");
field34->setAccessType("initializeOnly");
field34->setType("SFVec3f");
field34->setValue("0.98 1 1.033");
ComposedShader32->addField(field34);

field* field35 = new field();
field35->setName("bias");
field35->setType("SFFloat");
field35->setAccessType("inputOutput");
field35->setValue("0.5");
ComposedShader32->addField(field35);

field* field36 = new field();
field36->setName("scale");
field36->setType("SFFloat");
field36->setAccessType("inputOutput");
field36->setValue("0.5");
ComposedShader32->addField(field36);

field* field37 = new field();
field37->setName("power");
field37->setType("SFFloat");
field37->setAccessType("inputOutput");
field37->setValue("2");
ComposedShader32->addField(field37);

field* field38 = new field();
field38->setName("a");
field38->setType("SFFloat");
field38->setAccessType("inputOutput");
field38->setValue("10");
ComposedShader32->addField(field38);

field* field39 = new field();
field39->setName("b");
field39->setType("SFFloat");
field39->setAccessType("inputOutput");
field39->setValue("1");
ComposedShader32->addField(field39);

field* field40 = new field();
field40->setName("c");
field40->setType("SFFloat");
field40->setAccessType("inputOutput");
field40->setValue("20");
ComposedShader32->addField(field40);

field* field41 = new field();
field41->setName("d");
field41->setType("SFFloat");
field41->setAccessType("inputOutput");
field41->setValue("20");
ComposedShader32->addField(field41);

field* field42 = new field();
field42->setName("tdelta");
field42->setType("SFFloat");
field42->setAccessType("inputOutput");
field42->setValue("0");
ComposedShader32->addField(field42);

field* field43 = new field();
field43->setName("pdelta");
field43->setType("SFFloat");
field43->setAccessType("inputOutput");
field43->setValue("0");
ComposedShader32->addField(field43);

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
ShaderPart* ShaderPart44 = new ShaderPart();
ShaderPart44->setType("VERTEX");
IS* IS45 = new IS();
Connect* connect46 = new Connect();
connect46->setNodeField("url");
connect46->setProtoField("vertex");
IS45->addConnect(connect46);

ShaderPart44->setIS(IS45);

ComposedShader32->addParts(ShaderPart44);

ShaderPart* ShaderPart47 = new ShaderPart();
ShaderPart47->setType("FRAGMENT");
IS* IS48 = new IS();
Connect* connect49 = new Connect();
connect49->setNodeField("url");
connect49->setProtoField("fragment");
IS48->addConnect(connect49);

ShaderPart47->setIS(IS48);

ComposedShader32->addParts(ShaderPart47);

Appearance23->addShaders(ComposedShader32);

Shape22->setAppearance(Appearance23);

Sphere* Sphere50 = new Sphere();
Shape22->setGeometry(Sphere50);

Transform21->addChild(Shape22);

Script* Script51 = new Script();
Script51->setDEF("Animate");
field* field52 = new field();
field52->setName("translation");
field52->setAccessType("inputOutput");
field52->setType("SFVec3f");
field52->setValue("0 0 0");
Script51->addField(field52);

field* field53 = new field();
field53->setName("velocity");
field53->setAccessType("inputOutput");
field53->setType("SFVec3f");
field53->setValue("0 0 0");
Script51->addField(field53);

field* field54 = new field();
field54->setName("set_fraction");
field54->setAccessType("inputOnly");
field54->setType("SFFloat");
Script51->addField(field54);

field* field55 = new field();
field55->setName("a");
field55->setType("SFFloat");
field55->setAccessType("inputOutput");
field55->setValue("0.5");
Script51->addField(field55);

field* field56 = new field();
field56->setName("b");
field56->setType("SFFloat");
field56->setAccessType("inputOutput");
field56->setValue("0.5");
Script51->addField(field56);

field* field57 = new field();
field57->setName("c");
field57->setType("SFFloat");
field57->setAccessType("inputOutput");
field57->setValue("3");
Script51->addField(field57);

field* field58 = new field();
field58->setName("d");
field58->setType("SFFloat");
field58->setAccessType("inputOutput");
field58->setValue("3");
Script51->addField(field58);

field* field59 = new field();
field59->setName("tdelta");
field59->setType("SFFloat");
field59->setAccessType("inputOutput");
field59->setValue("0.5");
Script51->addField(field59);

field* field60 = new field();
field60->setName("pdelta");
field60->setType("SFFloat");
field60->setAccessType("inputOutput");
field60->setValue("0.5");
Script51->addField(field60);


Script51.setSourceCode(`ecmascript:\n"+
"			function initialize() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"			    for (var j = 0; j <= 2; j++) {\n"+
"				    if (Math.abs(translation.x) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.y) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.z) > 10) {\n"+
"					initialize();\n"+
"				    } else {\n"+
"					velocity.x += Math.random() * 0.2 - 0.1;\n"+
"					velocity.y += Math.random() * 0.2 - 0.1;\n"+
"					velocity.z += Math.random() * 0.2 - 0.1;\n"+
"				    }\n"+
"			    }\n"+
"			    animate_flowers();\n"+
"			}\n"+
"\n"+
"			function animate_flowers(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					a += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 1:\n"+
"					b += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 2:\n"+
"					c += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					d += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				tdelta += 0.5;\n"+
"				pdelta += 0.5;\n"+
"				if (a > 1) {\n"+
"					a =  0.5;\n"+
"				}\n"+
"				if (b > 1) {\n"+
"					b =  0.5;\n"+
"				}\n"+
"				if (c < 1) {\n"+
"					c =  4;\n"+
"				}\n"+
"				if (d < 1) {\n"+
"					d =  4;\n"+
"				}\n"+
"				if (c > 10) {\n"+
"					c = 4;\n"+
"				}\n"+
"				if (d > 10) {\n"+
"					d = 4;\n"+
"				}\n"+
"			}`)
Transform21->addChild(Script51);

TimeSensor* TimeSensor61 = new TimeSensor();
TimeSensor61->setDEF("TourTime");
TimeSensor61->setCycleInterval(5);
TimeSensor61->setLoop(True);
Transform21->addChild(TimeSensor61);

ROUTE* ROUTE62 = new ROUTE();
ROUTE62->setFromNode("TourTime");
ROUTE62->setFromField("fraction_changed");
ROUTE62->setToNode("Animate");
ROUTE62->setToField("set_fraction");
Transform21->addChild(ROUTE62);

ROUTE* ROUTE63 = new ROUTE();
ROUTE63->setFromNode("Animate");
ROUTE63->setFromField("translation_changed");
ROUTE63->setToNode("transform");
ROUTE63->setToField("set_translation");
Transform21->addChild(ROUTE63);

ROUTE* ROUTE64 = new ROUTE();
ROUTE64->setFromNode("Animate");
ROUTE64->setFromField("a");
ROUTE64->setToNode("shader");
ROUTE64->setToField("a");
Transform21->addChild(ROUTE64);

ROUTE* ROUTE65 = new ROUTE();
ROUTE65->setFromNode("Animate");
ROUTE65->setFromField("b");
ROUTE65->setToNode("shader");
ROUTE65->setToField("b");
Transform21->addChild(ROUTE65);

ROUTE* ROUTE66 = new ROUTE();
ROUTE66->setFromNode("Animate");
ROUTE66->setFromField("c");
ROUTE66->setToNode("shader");
ROUTE66->setToField("c");
Transform21->addChild(ROUTE66);

ROUTE* ROUTE67 = new ROUTE();
ROUTE67->setFromNode("Animate");
ROUTE67->setFromField("d");
ROUTE67->setToNode("shader");
ROUTE67->setToField("d");
Transform21->addChild(ROUTE67);

ROUTE* ROUTE68 = new ROUTE();
ROUTE68->setFromNode("Animate");
ROUTE68->setFromField("tdelta");
ROUTE68->setToNode("shader");
ROUTE68->setToField("tdelta");
Transform21->addChild(ROUTE68);

ROUTE* ROUTE69 = new ROUTE();
ROUTE69->setFromNode("Animate");
ROUTE69->setFromField("pdelta");
ROUTE69->setToNode("shader");
ROUTE69->setToField("pdelta");
Transform21->addChild(ROUTE69);

ProtoBody20->addChild(Transform21);

ProtoDeclare16->setProtoBody(ProtoBody20);

Scene15->addChild(ProtoDeclare16);

X3D0->setScene(Scene15);

X3D0->toXMLString();
}

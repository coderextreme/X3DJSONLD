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
meta10->setContent("flowers.x3d");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("creator");
meta11->setContent("John Carlson");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("description");
meta12->setContent("5 or more prismatic flowers");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("generator");
meta13->setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("identifier");
meta14->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d");
head1->addMeta(meta14);

X3D0->setHead(head1);

Scene* Scene15 = new Scene();
NavigationInfo* NavigationInfo16 = new NavigationInfo();
Scene15->addChild(NavigationInfo16);

//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background* Background17 = new Background();
Background17->setBackUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background17->setBottomUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background17->setFrontUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background17->setLeftUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background17->setRightUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background17->setTopUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
Scene15->addChild(Background17);

ProtoDeclare* ProtoDeclare18 = new ProtoDeclare();
ProtoDeclare18->setName("flower");
ProtoBody* ProtoBody19 = new ProtoBody();
Transform* Transform20 = new Transform();
Transform20->setDEF("animate_transform");
Shape* Shape21 = new Shape();
Appearance* Appearance22 = new Appearance();
Material* Material23 = new Material();
Material23->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material23->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance22->setMaterial(Material23);

ComposedCubeMapTexture* ComposedCubeMapTexture24 = new ComposedCubeMapTexture();
ComposedCubeMapTexture24->setDEF("texture");
ImageTexture* ImageTexture25 = new ImageTexture();
ImageTexture25->setUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
ComposedCubeMapTexture24->setBackTexture(ImageTexture25);

ImageTexture* ImageTexture26 = new ImageTexture();
ImageTexture26->setUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
ComposedCubeMapTexture24->setBottomTexture(ImageTexture26);

ImageTexture* ImageTexture27 = new ImageTexture();
ImageTexture27->setUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
ComposedCubeMapTexture24->setFrontTexture(ImageTexture27);

ImageTexture* ImageTexture28 = new ImageTexture();
ImageTexture28->setUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
ComposedCubeMapTexture24->setLeftTexture(ImageTexture28);

ImageTexture* ImageTexture29 = new ImageTexture();
ImageTexture29->setUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
ComposedCubeMapTexture24->setRightTexture(ImageTexture29);

ImageTexture* ImageTexture30 = new ImageTexture();
ImageTexture30->setUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
ComposedCubeMapTexture24->setTopTexture(ImageTexture30);

Appearance22->setTexture(ComposedCubeMapTexture24);

ComposedShader* ComposedShader31 = new ComposedShader();
ComposedShader31->setDEF("x3dom");
ComposedShader31->setLanguage("GLSL");
field* field32 = new field();
field32->setName("cube");
field32->setType("SFInt32");
field32->setAccessType("inputOutput");
field32->setValue("0");
ComposedShader31->addField(field32);

field* field33 = new field();
field33->setName("chromaticDispertion");
field33->setAccessType("initializeOnly");
field33->setType("SFVec3f");
field33->setValue("0.98 1 1.033");
ComposedShader31->addField(field33);

field* field34 = new field();
field34->setName("bias");
field34->setType("SFFloat");
field34->setAccessType("inputOutput");
field34->setValue("0.5");
ComposedShader31->addField(field34);

field* field35 = new field();
field35->setName("scale");
field35->setType("SFFloat");
field35->setAccessType("inputOutput");
field35->setValue("0.5");
ComposedShader31->addField(field35);

field* field36 = new field();
field36->setName("power");
field36->setType("SFFloat");
field36->setAccessType("inputOutput");
field36->setValue("2");
ComposedShader31->addField(field36);

field* field37 = new field();
field37->setName("a");
field37->setType("SFFloat");
field37->setAccessType("inputOutput");
field37->setValue("10");
ComposedShader31->addField(field37);

field* field38 = new field();
field38->setName("b");
field38->setType("SFFloat");
field38->setAccessType("inputOutput");
field38->setValue("1");
ComposedShader31->addField(field38);

field* field39 = new field();
field39->setName("c");
field39->setType("SFFloat");
field39->setAccessType("inputOutput");
field39->setValue("20");
ComposedShader31->addField(field39);

field* field40 = new field();
field40->setName("d");
field40->setType("SFFloat");
field40->setAccessType("inputOutput");
field40->setValue("20");
ComposedShader31->addField(field40);

field* field41 = new field();
field41->setName("tdelta");
field41->setType("SFFloat");
field41->setAccessType("inputOutput");
field41->setValue("0");
ComposedShader31->addField(field41);

field* field42 = new field();
field42->setName("pdelta");
field42->setType("SFFloat");
field42->setAccessType("inputOutput");
field42->setValue("0");
ComposedShader31->addField(field42);

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
ShaderPart* ShaderPart43 = new ShaderPart();
ShaderPart43->setUrl(new String[2]{"../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"}, 2);
ShaderPart43->setType("VERTEX");
ComposedShader31->addParts(ShaderPart43);

ShaderPart* ShaderPart44 = new ShaderPart();
ShaderPart44->setUrl(new String[2]{"../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"}, 2);
ShaderPart44->setType("FRAGMENT");
ComposedShader31->addParts(ShaderPart44);

Appearance22->addShaders(ComposedShader31);

ComposedShader* ComposedShader45 = new ComposedShader();
ComposedShader45->setDEF("x_ite");
ComposedShader45->setLanguage("GLSL");
field* field46 = new field();
field46->setName("cube");
field46->setType("SFNode");
field46->setAccessType("inputOutput");
ComposedCubeMapTexture* ComposedCubeMapTexture47 = new ComposedCubeMapTexture();
ComposedCubeMapTexture47->setUSE("texture");
field46->addChild(ComposedCubeMapTexture47);

ComposedShader45->addField(field46);

field* field48 = new field();
field48->setName("chromaticDispertion");
field48->setAccessType("initializeOnly");
field48->setType("SFVec3f");
field48->setValue("0.98 1 1.033");
ComposedShader45->addField(field48);

field* field49 = new field();
field49->setName("bias");
field49->setType("SFFloat");
field49->setAccessType("inputOnly");
field49->setValue("0.5");
ComposedShader45->addField(field49);

field* field50 = new field();
field50->setName("scale");
field50->setType("SFFloat");
field50->setAccessType("inputOnly");
field50->setValue("0.5");
ComposedShader45->addField(field50);

field* field51 = new field();
field51->setName("power");
field51->setType("SFFloat");
field51->setAccessType("inputOnly");
field51->setValue("2");
ComposedShader45->addField(field51);

field* field52 = new field();
field52->setName("a");
field52->setType("SFFloat");
field52->setAccessType("inputOnly");
field52->setValue("10");
ComposedShader45->addField(field52);

field* field53 = new field();
field53->setName("b");
field53->setType("SFFloat");
field53->setAccessType("inputOnly");
field53->setValue("1");
ComposedShader45->addField(field53);

field* field54 = new field();
field54->setName("c");
field54->setType("SFFloat");
field54->setAccessType("inputOnly");
field54->setValue("20");
ComposedShader45->addField(field54);

field* field55 = new field();
field55->setName("d");
field55->setType("SFFloat");
field55->setAccessType("inputOnly");
field55->setValue("20");
ComposedShader45->addField(field55);

field* field56 = new field();
field56->setName("tdelta");
field56->setType("SFFloat");
field56->setAccessType("inputOnly");
field56->setValue("0");
ComposedShader45->addField(field56);

field* field57 = new field();
field57->setName("pdelta");
field57->setType("SFFloat");
field57->setAccessType("inputOnly");
field57->setValue("0");
ComposedShader45->addField(field57);

ShaderPart* ShaderPart58 = new ShaderPart();
ShaderPart58->setUrl(new String[2]{"../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"}, 2);
ShaderPart58->setType("VERTEX");
ComposedShader45->addParts(ShaderPart58);

ShaderPart* ShaderPart59 = new ShaderPart();
ShaderPart59->setUrl(new String[2]{"../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"}, 2);
ShaderPart59->setType("FRAGMENT");
ComposedShader45->addParts(ShaderPart59);

Appearance22->addShaders(ComposedShader45);

Shape21->setAppearance(Appearance22);

Sphere* Sphere60 = new Sphere();
Shape21->setGeometry(Sphere60);

Transform20->addChild(Shape21);

ProtoBody19->addChild(Transform20);

Script* Script61 = new Script();
Script61->setDEF("Animate");
field* field62 = new field();
field62->setName("translation");
field62->setAccessType("inputOutput");
field62->setType("SFVec3f");
field62->setValue("0 0 0");
Script61->addField(field62);

field* field63 = new field();
field63->setName("velocity");
field63->setAccessType("inputOutput");
field63->setType("SFVec3f");
field63->setValue("0 0 0");
Script61->addField(field63);

field* field64 = new field();
field64->setName("set_fraction");
field64->setAccessType("inputOnly");
field64->setType("SFFloat");
Script61->addField(field64);

field* field65 = new field();
field65->setName("a");
field65->setType("SFFloat");
field65->setAccessType("inputOutput");
field65->setValue("0.5");
Script61->addField(field65);

field* field66 = new field();
field66->setName("b");
field66->setType("SFFloat");
field66->setAccessType("inputOutput");
field66->setValue("0.5");
Script61->addField(field66);

field* field67 = new field();
field67->setName("c");
field67->setType("SFFloat");
field67->setAccessType("inputOutput");
field67->setValue("3");
Script61->addField(field67);

field* field68 = new field();
field68->setName("d");
field68->setType("SFFloat");
field68->setAccessType("inputOutput");
field68->setValue("3");
Script61->addField(field68);

field* field69 = new field();
field69->setName("tdelta");
field69->setType("SFFloat");
field69->setAccessType("inputOutput");
field69->setValue("0.5");
Script61->addField(field69);

field* field70 = new field();
field70->setName("pdelta");
field70->setType("SFFloat");
field70->setAccessType("inputOutput");
field70->setValue("0.5");
Script61->addField(field70);


Script61.setSourceCode(`ecmascript:\n"+
"\n"+
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
"				tdelta = tdelta + 0.5;\n"+
"				pdelta = pdelta + 0.5;\n"+
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
ProtoBody19->addChild(Script61);

TimeSensor* TimeSensor71 = new TimeSensor();
TimeSensor71->setDEF("TourTime");
TimeSensor71->setCycleInterval(5);
TimeSensor71->setLoop(True);
ProtoBody19->addChild(TimeSensor71);

ROUTE* ROUTE72 = new ROUTE();
ROUTE72->setFromNode("TourTime");
ROUTE72->setFromField("fraction_changed");
ROUTE72->setToNode("Animate");
ROUTE72->setToField("set_fraction");
ProtoBody19->addChild(ROUTE72);

ROUTE* ROUTE73 = new ROUTE();
ROUTE73->setFromNode("Animate");
ROUTE73->setFromField("translation_changed");
ROUTE73->setToNode("animate_transform");
ROUTE73->setToField("set_translation");
ProtoBody19->addChild(ROUTE73);

ROUTE* ROUTE74 = new ROUTE();
ROUTE74->setFromNode("Animate");
ROUTE74->setFromField("a");
ROUTE74->setToNode("x_ite");
ROUTE74->setToField("a");
ProtoBody19->addChild(ROUTE74);

ROUTE* ROUTE75 = new ROUTE();
ROUTE75->setFromNode("Animate");
ROUTE75->setFromField("b");
ROUTE75->setToNode("x_ite");
ROUTE75->setToField("b");
ProtoBody19->addChild(ROUTE75);

ROUTE* ROUTE76 = new ROUTE();
ROUTE76->setFromNode("Animate");
ROUTE76->setFromField("c");
ROUTE76->setToNode("x_ite");
ROUTE76->setToField("c");
ProtoBody19->addChild(ROUTE76);

ROUTE* ROUTE77 = new ROUTE();
ROUTE77->setFromNode("Animate");
ROUTE77->setFromField("d");
ROUTE77->setToNode("x_ite");
ROUTE77->setToField("d");
ProtoBody19->addChild(ROUTE77);

ROUTE* ROUTE78 = new ROUTE();
ROUTE78->setFromNode("Animate");
ROUTE78->setFromField("pdelta");
ROUTE78->setToNode("x_ite");
ROUTE78->setToField("pdelta");
ProtoBody19->addChild(ROUTE78);

ROUTE* ROUTE79 = new ROUTE();
ROUTE79->setFromNode("Animate");
ROUTE79->setFromField("tdelta");
ROUTE79->setToNode("x_ite");
ROUTE79->setToField("tdelta");
ProtoBody19->addChild(ROUTE79);

ROUTE* ROUTE80 = new ROUTE();
ROUTE80->setFromNode("Animate");
ROUTE80->setFromField("a");
ROUTE80->setToNode("x3dom");
ROUTE80->setToField("a");
ProtoBody19->addChild(ROUTE80);

ROUTE* ROUTE81 = new ROUTE();
ROUTE81->setFromNode("Animate");
ROUTE81->setFromField("b");
ROUTE81->setToNode("x3dom");
ROUTE81->setToField("b");
ProtoBody19->addChild(ROUTE81);

ROUTE* ROUTE82 = new ROUTE();
ROUTE82->setFromNode("Animate");
ROUTE82->setFromField("c");
ROUTE82->setToNode("x3dom");
ROUTE82->setToField("c");
ProtoBody19->addChild(ROUTE82);

ROUTE* ROUTE83 = new ROUTE();
ROUTE83->setFromNode("Animate");
ROUTE83->setFromField("d");
ROUTE83->setToNode("x3dom");
ROUTE83->setToField("d");
ProtoBody19->addChild(ROUTE83);

ROUTE* ROUTE84 = new ROUTE();
ROUTE84->setFromNode("Animate");
ROUTE84->setFromField("pdelta");
ROUTE84->setToNode("x3dom");
ROUTE84->setToField("pdelta");
ProtoBody19->addChild(ROUTE84);

ROUTE* ROUTE85 = new ROUTE();
ROUTE85->setFromNode("Animate");
ROUTE85->setFromField("tdelta");
ROUTE85->setToNode("x3dom");
ROUTE85->setToField("tdelta");
ProtoBody19->addChild(ROUTE85);

ProtoDeclare18->setProtoBody(ProtoBody19);

Scene15->addChild(ProtoDeclare18);

ProtoInstance* ProtoInstance86 = new ProtoInstance();
ProtoInstance86->setName("flower");
Scene15->addChild(ProtoInstance86);

ProtoInstance* ProtoInstance87 = new ProtoInstance();
ProtoInstance87->setName("flower");
Scene15->addChild(ProtoInstance87);

ProtoInstance* ProtoInstance88 = new ProtoInstance();
ProtoInstance88->setName("flower");
Scene15->addChild(ProtoInstance88);

X3D0->setScene(Scene15);

X3D0->toXMLString();
}

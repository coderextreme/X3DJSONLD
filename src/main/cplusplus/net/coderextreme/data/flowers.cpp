#ifdef WIN32
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#endif
#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile(CString("Immersive"));
X3D0->setVersion(CString("4.0"));
head* head1 = new head();
component* component2 = new component();
component2->setName(CString("Scripting"));
component2->setLevel(1);
head1->addChild(component2);

component* component3 = new component();
component3->setName(CString("EnvironmentalEffects"));
component3->setLevel(3);
head1->addChild(component3);

component* component4 = new component();
component4->setName(CString("Shaders"));
component4->setLevel(1);
head1->addChild(component4);

component* component5 = new component();
component5->setName(CString("CubeMapTexturing"));
component5->setLevel(1);
head1->addChild(component5);

component* component6 = new component();
component6->setName(CString("Texturing"));
component6->setLevel(1);
head1->addChild(component6);

component* component7 = new component();
component7->setName(CString("Rendering"));
component7->setLevel(1);
head1->addChild(component7);

component* component8 = new component();
component8->setName(CString("Grouping"));
component8->setLevel(3);
head1->addChild(component8);

component* component9 = new component();
component9->setName(CString("Core"));
component9->setLevel(1);
head1->addChild(component9);

//<component name='Shape' level='4'></component>
meta* meta10 = new meta();
meta10->setName(CString("title"));
meta10->setContent(CString("flowers.x3d"));
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName(CString("creator"));
meta11->setContent(CString("John Carlson"));
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName(CString("description"));
meta12->setContent(CString("5 or more prismatic flowers"));
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName(CString("generator"));
meta13->setContent(CString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName(CString("identifier"));
meta14->setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d"));
head1->addMeta(meta14);

X3D0->setHead(head1);

Scene* Scene15 = new Scene();
NavigationInfo* NavigationInfo16 = new NavigationInfo();
Scene15->addChild(NavigationInfo16);

//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background* Background17 = new Background();
Background17->setBackUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
Background17->setBottomUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
Background17->setFrontUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
Background17->setLeftUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
Background17->setRightUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
Background17->setTopUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
Scene15->addChild(Background17);

ProtoDeclare* ProtoDeclare18 = new ProtoDeclare();
ProtoDeclare18->setName(CString("flower"));
ProtoBody* ProtoBody19 = new ProtoBody();
Transform* Transform20 = new Transform();
Transform20->setDEF(CString("animate_transform"));
Shape* Shape21 = new Shape();
Appearance* Appearance22 = new Appearance();
Material* Material23 = new Material();
Material23->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material23->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance22->addChild(Material23);

ComposedCubeMapTexture* ComposedCubeMapTexture24 = new ComposedCubeMapTexture();
ComposedCubeMapTexture24->setDEF(CString("texture"));
ImageTexture* ImageTexture25 = new ImageTexture();
ImageTexture25->setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
ComposedCubeMapTexture24->setBack(ImageTexture25);

ImageTexture* ImageTexture26 = new ImageTexture();
ImageTexture26->setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
ComposedCubeMapTexture24->setBottom(ImageTexture26);

ImageTexture* ImageTexture27 = new ImageTexture();
ImageTexture27->setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
ComposedCubeMapTexture24->setFront(ImageTexture27);

ImageTexture* ImageTexture28 = new ImageTexture();
ImageTexture28->setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
ComposedCubeMapTexture24->setLeft(ImageTexture28);

ImageTexture* ImageTexture29 = new ImageTexture();
ImageTexture29->setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
ComposedCubeMapTexture24->setRight(ImageTexture29);

ImageTexture* ImageTexture30 = new ImageTexture();
ImageTexture30->setUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
ComposedCubeMapTexture24->setTop(ImageTexture30);

Appearance22->addChild(ComposedCubeMapTexture24);

ComposedShader* ComposedShader31 = new ComposedShader();
ComposedShader31->setDEF(CString("x3dom"));
ComposedShader31->setLanguage(CString("GLSL"));
field* field32 = new field();
field32->setName(CString("cube"));
field32->setType(CString("SFInt32"));
field32->setAccessType(CString("inputOutput"));
field32->setValue(CString("0"));
ComposedShader31->addChild(field32);

field* field33 = new field();
field33->setName(CString("chromaticDispertion"));
field33->setAccessType(CString("initializeOnly"));
field33->setType(CString("SFVec3f"));
field33->setValue(CString("0.98 1 1.033"));
ComposedShader31->addChild(field33);

field* field34 = new field();
field34->setName(CString("bias"));
field34->setType(CString("SFFloat"));
field34->setAccessType(CString("inputOutput"));
field34->setValue(CString("0.5"));
ComposedShader31->addChild(field34);

field* field35 = new field();
field35->setName(CString("scale"));
field35->setType(CString("SFFloat"));
field35->setAccessType(CString("inputOutput"));
field35->setValue(CString("0.5"));
ComposedShader31->addChild(field35);

field* field36 = new field();
field36->setName(CString("power"));
field36->setType(CString("SFFloat"));
field36->setAccessType(CString("inputOutput"));
field36->setValue(CString("2"));
ComposedShader31->addChild(field36);

field* field37 = new field();
field37->setName(CString("a"));
field37->setType(CString("SFFloat"));
field37->setAccessType(CString("inputOutput"));
field37->setValue(CString("10"));
ComposedShader31->addChild(field37);

field* field38 = new field();
field38->setName(CString("b"));
field38->setType(CString("SFFloat"));
field38->setAccessType(CString("inputOutput"));
field38->setValue(CString("1"));
ComposedShader31->addChild(field38);

field* field39 = new field();
field39->setName(CString("c"));
field39->setType(CString("SFFloat"));
field39->setAccessType(CString("inputOutput"));
field39->setValue(CString("20"));
ComposedShader31->addChild(field39);

field* field40 = new field();
field40->setName(CString("d"));
field40->setType(CString("SFFloat"));
field40->setAccessType(CString("inputOutput"));
field40->setValue(CString("20"));
ComposedShader31->addChild(field40);

field* field41 = new field();
field41->setName(CString("tdelta"));
field41->setType(CString("SFFloat"));
field41->setAccessType(CString("inputOutput"));
field41->setValue(CString("0"));
ComposedShader31->addChild(field41);

field* field42 = new field();
field42->setName(CString("pdelta"));
field42->setType(CString("SFFloat"));
field42->setAccessType(CString("inputOutput"));
field42->setValue(CString("0"));
ComposedShader31->addChild(field42);

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
ShaderPart* ShaderPart43 = new ShaderPart();
ShaderPart43->setUrl(new CString[2]{CString("../shaders/x3dom_flowers_chromatic.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs")}, 2);
ShaderPart43->setType(CString("VERTEX"));
ComposedShader31->setParts(ShaderPart43);

ShaderPart* ShaderPart44 = new ShaderPart();
ShaderPart44->setUrl(new CString[2]{CString("../shaders/common.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs")}, 2);
ShaderPart44->setType(CString("FRAGMENT"));
ComposedShader31->setParts(ShaderPart44);

Appearance22->addChild(ComposedShader31);

ComposedShader* ComposedShader45 = new ComposedShader();
ComposedShader45->setDEF(CString("x_ite"));
ComposedShader45->setLanguage(CString("GLSL"));
field* field46 = new field();
field46->setName(CString("cube"));
field46->setType(CString("SFNode"));
field46->setAccessType(CString("inputOutput"));
ComposedCubeMapTexture* ComposedCubeMapTexture47 = new ComposedCubeMapTexture();
ComposedCubeMapTexture47->setUSE(CString("texture"));
field46->addChild(ComposedCubeMapTexture47);

ComposedShader45->addChild(field46);

field* field48 = new field();
field48->setName(CString("chromaticDispertion"));
field48->setAccessType(CString("initializeOnly"));
field48->setType(CString("SFVec3f"));
field48->setValue(CString("0.98 1 1.033"));
ComposedShader45->addChild(field48);

field* field49 = new field();
field49->setName(CString("bias"));
field49->setType(CString("SFFloat"));
field49->setAccessType(CString("inputOnly"));
field49->setValue(CString("0.5"));
ComposedShader45->addChild(field49);

field* field50 = new field();
field50->setName(CString("scale"));
field50->setType(CString("SFFloat"));
field50->setAccessType(CString("inputOnly"));
field50->setValue(CString("0.5"));
ComposedShader45->addChild(field50);

field* field51 = new field();
field51->setName(CString("power"));
field51->setType(CString("SFFloat"));
field51->setAccessType(CString("inputOnly"));
field51->setValue(CString("2"));
ComposedShader45->addChild(field51);

field* field52 = new field();
field52->setName(CString("a"));
field52->setType(CString("SFFloat"));
field52->setAccessType(CString("inputOnly"));
field52->setValue(CString("10"));
ComposedShader45->addChild(field52);

field* field53 = new field();
field53->setName(CString("b"));
field53->setType(CString("SFFloat"));
field53->setAccessType(CString("inputOnly"));
field53->setValue(CString("1"));
ComposedShader45->addChild(field53);

field* field54 = new field();
field54->setName(CString("c"));
field54->setType(CString("SFFloat"));
field54->setAccessType(CString("inputOnly"));
field54->setValue(CString("20"));
ComposedShader45->addChild(field54);

field* field55 = new field();
field55->setName(CString("d"));
field55->setType(CString("SFFloat"));
field55->setAccessType(CString("inputOnly"));
field55->setValue(CString("20"));
ComposedShader45->addChild(field55);

field* field56 = new field();
field56->setName(CString("tdelta"));
field56->setType(CString("SFFloat"));
field56->setAccessType(CString("inputOnly"));
field56->setValue(CString("0"));
ComposedShader45->addChild(field56);

field* field57 = new field();
field57->setName(CString("pdelta"));
field57->setType(CString("SFFloat"));
field57->setAccessType(CString("inputOnly"));
field57->setValue(CString("0"));
ComposedShader45->addChild(field57);

ShaderPart* ShaderPart58 = new ShaderPart();
ShaderPart58->setUrl(new CString[2]{CString("../shaders/x_ite_flowers_chromatic.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs")}, 2);
ShaderPart58->setType(CString("VERTEX"));
ComposedShader45->setParts(ShaderPart58);

ShaderPart* ShaderPart59 = new ShaderPart();
ShaderPart59->setUrl(new CString[2]{CString("../shaders/x_ite.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")}, 2);
ShaderPart59->setType(CString("FRAGMENT"));
ComposedShader45->setParts(ShaderPart59);

Appearance22->addChild(ComposedShader45);

Shape21->addChild(Appearance22);

Sphere* Sphere60 = new Sphere();
Shape21->setGeometry(Sphere60);

Transform20->addChild(Shape21);

ProtoBody19->addChild(Transform20);

Script* Script61 = new Script();
Script61->setDEF(CString("Animate"));
field* field62 = new field();
field62->setName(CString("translation"));
field62->setAccessType(CString("inputOutput"));
field62->setType(CString("SFVec3f"));
field62->setValue(CString("0 0 0"));
Script61->addChild(field62);

field* field63 = new field();
field63->setName(CString("velocity"));
field63->setAccessType(CString("inputOutput"));
field63->setType(CString("SFVec3f"));
field63->setValue(CString("0 0 0"));
Script61->addChild(field63);

field* field64 = new field();
field64->setName(CString("set_fraction"));
field64->setAccessType(CString("inputOnly"));
field64->setType(CString("SFFloat"));
Script61->addChild(field64);

field* field65 = new field();
field65->setName(CString("a"));
field65->setType(CString("SFFloat"));
field65->setAccessType(CString("inputOutput"));
field65->setValue(CString("0.5"));
Script61->addChild(field65);

field* field66 = new field();
field66->setName(CString("b"));
field66->setType(CString("SFFloat"));
field66->setAccessType(CString("inputOutput"));
field66->setValue(CString("0.5"));
Script61->addChild(field66);

field* field67 = new field();
field67->setName(CString("c"));
field67->setType(CString("SFFloat"));
field67->setAccessType(CString("inputOutput"));
field67->setValue(CString("3"));
Script61->addChild(field67);

field* field68 = new field();
field68->setName(CString("d"));
field68->setType(CString("SFFloat"));
field68->setAccessType(CString("inputOutput"));
field68->setValue(CString("3"));
Script61->addChild(field68);

field* field69 = new field();
field69->setName(CString("tdelta"));
field69->setType(CString("SFFloat"));
field69->setAccessType(CString("inputOutput"));
field69->setValue(CString("0.5"));
Script61->addChild(field69);

field* field70 = new field();
field70->setName(CString("pdelta"));
field70->setType(CString("SFFloat"));
field70->setAccessType(CString("inputOutput"));
field70->setValue(CString("0.5"));
Script61->addChild(field70);


Script61->setSourceCode(CString("ecmascript:")+
_T("			function initialize() {")+
_T("			    translation = new SFVec3f(0, 0, 0);")+
_T("			    velocity = new SFVec3f(")+
_T("			    	Math.random() - 0.5,")+
_T("				Math.random() - 0.5,")+
_T("				Math.random() - 0.5);")+
_T("			}")+
_T("			function set_fraction() {")+
_T("			    translation = new SFVec3f(")+
_T("			    	translation.x + velocity.x,")+
_T("				translation.y + velocity.y,")+
_T("				translation.z + velocity.z);")+
_T("			    for (var j = 0; j <= 2; j++) {")+
_T("				    if (Math.abs(translation.x) > 10) {")+
_T("					initialize();")+
_T("				    } else if (Math.abs(translation.y) > 10) {")+
_T("					initialize();")+
_T("				    } else if (Math.abs(translation.z) > 10) {")+
_T("					initialize();")+
_T("				    } else {")+
_T("					velocity.x += Math.random() * 0.2 - 0.1;")+
_T("					velocity.y += Math.random() * 0.2 - 0.1;")+
_T("					velocity.z += Math.random() * 0.2 - 0.1;")+
_T("				    }")+
_T("			    }")+
_T("			    animate_flowers();")+
_T("			}")+
_T("			function animate_flowers(fraction, eventTime) {")+
_T("				var choice = Math.floor(Math.random() * 4);")+
_T("				switch (choice) {")+
_T("				case 0:")+
_T("					a += Math.random() * 0.2 - 0.1;")+
_T("					break;")+
_T("				case 1:")+
_T("					b += Math.random() * 0.2 - 0.1;")+
_T("					break;")+
_T("				case 2:")+
_T("					c += Math.random() * 2 - 1;")+
_T("					break;")+
_T("				case 3:")+
_T("					d += Math.random() * 2 - 1;")+
_T("					break;")+
_T("				}")+
_T("				tdelta = tdelta + 0.5;")+
_T("				pdelta = pdelta + 0.5;")+
_T("				if (a > 1) {")+
_T("					a =  0.5;")+
_T("				}")+
_T("				if (b > 1) {")+
_T("					b =  0.5;")+
_T("				}")+
_T("				if (c < 1) {")+
_T("					c =  4;")+
_T("				}")+
_T("				if (d < 1) {")+
_T("					d =  4;")+
_T("				}")+
_T("				if (c > 10) {")+
_T("					c = 4;")+
_T("				}")+
_T("				if (d > 10) {")+
_T("					d = 4;")+
_T("				}")+
_T("			}"));
ProtoBody19->addChild(Script61);

TimeSensor* TimeSensor71 = new TimeSensor();
TimeSensor71->setDEF(CString("TourTime"));
TimeSensor71->setCycleInterval(5);
TimeSensor71->setLoop(True);
ProtoBody19->addChild(TimeSensor71);

ROUTE* ROUTE72 = new ROUTE();
ROUTE72->setFromNode(CString("TourTime"));
ROUTE72->setFromField(CString("fraction_changed"));
ROUTE72->setToNode(CString("Animate"));
ROUTE72->setToField(CString("set_fraction"));
ProtoBody19->addChild(ROUTE72);

ROUTE* ROUTE73 = new ROUTE();
ROUTE73->setFromNode(CString("Animate"));
ROUTE73->setFromField(CString("translation_changed"));
ROUTE73->setToNode(CString("animate_transform"));
ROUTE73->setToField(CString("set_translation"));
ProtoBody19->addChild(ROUTE73);

ROUTE* ROUTE74 = new ROUTE();
ROUTE74->setFromNode(CString("Animate"));
ROUTE74->setFromField(CString("a"));
ROUTE74->setToNode(CString("x_ite"));
ROUTE74->setToField(CString("a"));
ProtoBody19->addChild(ROUTE74);

ROUTE* ROUTE75 = new ROUTE();
ROUTE75->setFromNode(CString("Animate"));
ROUTE75->setFromField(CString("b"));
ROUTE75->setToNode(CString("x_ite"));
ROUTE75->setToField(CString("b"));
ProtoBody19->addChild(ROUTE75);

ROUTE* ROUTE76 = new ROUTE();
ROUTE76->setFromNode(CString("Animate"));
ROUTE76->setFromField(CString("c"));
ROUTE76->setToNode(CString("x_ite"));
ROUTE76->setToField(CString("c"));
ProtoBody19->addChild(ROUTE76);

ROUTE* ROUTE77 = new ROUTE();
ROUTE77->setFromNode(CString("Animate"));
ROUTE77->setFromField(CString("d"));
ROUTE77->setToNode(CString("x_ite"));
ROUTE77->setToField(CString("d"));
ProtoBody19->addChild(ROUTE77);

ROUTE* ROUTE78 = new ROUTE();
ROUTE78->setFromNode(CString("Animate"));
ROUTE78->setFromField(CString("pdelta"));
ROUTE78->setToNode(CString("x_ite"));
ROUTE78->setToField(CString("pdelta"));
ProtoBody19->addChild(ROUTE78);

ROUTE* ROUTE79 = new ROUTE();
ROUTE79->setFromNode(CString("Animate"));
ROUTE79->setFromField(CString("tdelta"));
ROUTE79->setToNode(CString("x_ite"));
ROUTE79->setToField(CString("tdelta"));
ProtoBody19->addChild(ROUTE79);

ROUTE* ROUTE80 = new ROUTE();
ROUTE80->setFromNode(CString("Animate"));
ROUTE80->setFromField(CString("a"));
ROUTE80->setToNode(CString("x3dom"));
ROUTE80->setToField(CString("a"));
ProtoBody19->addChild(ROUTE80);

ROUTE* ROUTE81 = new ROUTE();
ROUTE81->setFromNode(CString("Animate"));
ROUTE81->setFromField(CString("b"));
ROUTE81->setToNode(CString("x3dom"));
ROUTE81->setToField(CString("b"));
ProtoBody19->addChild(ROUTE81);

ROUTE* ROUTE82 = new ROUTE();
ROUTE82->setFromNode(CString("Animate"));
ROUTE82->setFromField(CString("c"));
ROUTE82->setToNode(CString("x3dom"));
ROUTE82->setToField(CString("c"));
ProtoBody19->addChild(ROUTE82);

ROUTE* ROUTE83 = new ROUTE();
ROUTE83->setFromNode(CString("Animate"));
ROUTE83->setFromField(CString("d"));
ROUTE83->setToNode(CString("x3dom"));
ROUTE83->setToField(CString("d"));
ProtoBody19->addChild(ROUTE83);

ROUTE* ROUTE84 = new ROUTE();
ROUTE84->setFromNode(CString("Animate"));
ROUTE84->setFromField(CString("pdelta"));
ROUTE84->setToNode(CString("x3dom"));
ROUTE84->setToField(CString("pdelta"));
ProtoBody19->addChild(ROUTE84);

ROUTE* ROUTE85 = new ROUTE();
ROUTE85->setFromNode(CString("Animate"));
ROUTE85->setFromField(CString("tdelta"));
ROUTE85->setToNode(CString("x3dom"));
ROUTE85->setToField(CString("tdelta"));
ProtoBody19->addChild(ROUTE85);

ProtoDeclare18->addChild(ProtoBody19);

Scene15->addChild(ProtoDeclare18);

ProtoInstance* ProtoInstance86 = new ProtoInstance();
ProtoInstance86->setName(CString("flower"));
Scene15->addChild(ProtoInstance86);

ProtoInstance* ProtoInstance87 = new ProtoInstance();
ProtoInstance87->setName(CString("flower"));
Scene15->addChild(ProtoInstance87);

ProtoInstance* ProtoInstance88 = new ProtoInstance();
ProtoInstance88->setName(CString("flower"));
Scene15->addChild(ProtoInstance88);

X3D0->setScene(Scene15);

}

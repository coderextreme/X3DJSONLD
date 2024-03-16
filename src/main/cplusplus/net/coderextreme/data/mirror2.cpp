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
meta10->setContent("mirror2.x3d");
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
meta13->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("description");
meta14->setContent("a mirrored sphere");
head1->addMeta(meta14);

X3D0->setHead(head1);

Scene* Scene15 = new Scene();
Viewpoint* Viewpoint16 = new Viewpoint();
Viewpoint16->setPosition(new float[3]{0,5,100});
Viewpoint16->setDescription("Switch background and images texture");
Scene15->addChild(Viewpoint16);

Background* Background17 = new Background();
Background17->setDEF("cube");
Background17->setLeftUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
Background17->setRightUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
Background17->setFrontUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
Background17->setBackUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
Background17->setTopUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
Background17->setBottomUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
Scene15->addChild(Background17);

Transform* Transform18 = new Transform();
Shape* Shape19 = new Shape();
Appearance* Appearance20 = new Appearance();
Material* Material21 = new Material();
Material21->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material21->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance20->setMaterial(Material21);

ComposedCubeMapTexture* ComposedCubeMapTexture22 = new ComposedCubeMapTexture();
ImageTexture* ImageTexture23 = new ImageTexture();
ImageTexture23->setDEF("backShader");
ImageTexture23->setUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
ComposedCubeMapTexture22->setBackTexture(ImageTexture23);

ImageTexture* ImageTexture24 = new ImageTexture();
ImageTexture24->setDEF("bottomShader");
ImageTexture24->setUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
ComposedCubeMapTexture22->setBottomTexture(ImageTexture24);

ImageTexture* ImageTexture25 = new ImageTexture();
ImageTexture25->setDEF("frontShader");
ImageTexture25->setUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
ComposedCubeMapTexture22->setFrontTexture(ImageTexture25);

ImageTexture* ImageTexture26 = new ImageTexture();
ImageTexture26->setDEF("leftShader");
ImageTexture26->setUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
ComposedCubeMapTexture22->setLeftTexture(ImageTexture26);

ImageTexture* ImageTexture27 = new ImageTexture();
ImageTexture27->setDEF("rightShader");
ImageTexture27->setUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
ComposedCubeMapTexture22->setRightTexture(ImageTexture27);

ImageTexture* ImageTexture28 = new ImageTexture();
ImageTexture28->setDEF("topShader");
ImageTexture28->setUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
ComposedCubeMapTexture22->setTopTexture(ImageTexture28);

Appearance20->setTexture(ComposedCubeMapTexture22);

ComposedShader* ComposedShader29 = new ComposedShader();
ComposedShader29->setDEF("x_ite");
ComposedShader29->setLanguage("GLSL");
//http://hypertextbook.com/facts/2005/JustinChe.shtml
field* field30 = new field();
field30->setName("chromaticDispertion");
field30->setAccessType("inputOutput");
field30->setType("SFVec3f");
field30->setValue("0.98 1 1.033");
ComposedShader29->addField(field30);

field* field31 = new field();
field31->setName("cube");
field31->setAccessType("inputOutput");
field31->setType("SFInt32");
field31->setValue("0");
ComposedShader29->addField(field31);

field* field32 = new field();
field32->setName("bias");
field32->setAccessType("inputOutput");
field32->setType("SFFloat");
field32->setValue("0.5");
ComposedShader29->addField(field32);

field* field33 = new field();
field33->setName("scale");
field33->setAccessType("inputOutput");
field33->setType("SFFloat");
field33->setValue("0.5");
ComposedShader29->addField(field33);

field* field34 = new field();
field34->setName("power");
field34->setAccessType("inputOutput");
field34->setType("SFFloat");
field34->setValue("2");
ComposedShader29->addField(field34);

ShaderPart* ShaderPart35 = new ShaderPart();
ShaderPart35->setUrl(new String[2]{"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 2);
ShaderPart35->setType("VERTEX");
ComposedShader29->addParts(ShaderPart35);

ShaderPart* ShaderPart36 = new ShaderPart();
ShaderPart36->setUrl(new String[2]{"../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"}, 2);
ShaderPart36->setType("FRAGMENT");
ComposedShader29->addParts(ShaderPart36);

Appearance20->addShaders(ComposedShader29);

ComposedShader* ComposedShader37 = new ComposedShader();
ComposedShader37->setDEF("x3dom");
ComposedShader37->setLanguage("GLSL");
field* field38 = new field();
field38->setName("chromaticDispertion");
field38->setAccessType("inputOutput");
field38->setType("SFVec3f");
field38->setValue("0.98 1 1.033");
ComposedShader37->addField(field38);

field* field39 = new field();
field39->setName("cube");
field39->setAccessType("inputOutput");
field39->setType("SFInt32");
field39->setValue("0");
ComposedShader37->addField(field39);

field* field40 = new field();
field40->setName("bias");
field40->setAccessType("inputOutput");
field40->setType("SFFloat");
field40->setValue("0.5");
ComposedShader37->addField(field40);

field* field41 = new field();
field41->setName("scale");
field41->setAccessType("inputOutput");
field41->setType("SFFloat");
field41->setValue("0.5");
ComposedShader37->addField(field41);

field* field42 = new field();
field42->setName("power");
field42->setAccessType("inputOutput");
field42->setType("SFFloat");
field42->setValue("2");
ComposedShader37->addField(field42);

ShaderPart* ShaderPart43 = new ShaderPart();
ShaderPart43->setUrl(new String[2]{"../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ShaderPart43->setType("VERTEX");
ComposedShader37->addParts(ShaderPart43);

ShaderPart* ShaderPart44 = new ShaderPart();
ShaderPart44->setUrl(new String[2]{"../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"}, 2);
ShaderPart44->setType("FRAGMENT");
ComposedShader37->addParts(ShaderPart44);

Appearance20->addShaders(ComposedShader37);

Shape19->setAppearance(Appearance20);

Sphere* Sphere45 = new Sphere();
Sphere45->setRadius(30);
Shape19->setGeometry(Sphere45);

Transform18->addChild(Shape19);

Script* Script46 = new Script();
Script46->setDEF("UrlSelector");
Script46->setDirectOutput(True);
field* field47 = new field();
field47->setName("frontUrls");
field47->setType("MFString");
field47->setAccessType("initializeOnly");
field47->setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"");
Script46->addField(field47);

field* field48 = new field();
field48->setName("backUrls");
field48->setType("MFString");
field48->setAccessType("initializeOnly");
field48->setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"");
Script46->addField(field48);

field* field49 = new field();
field49->setName("leftUrls");
field49->setType("MFString");
field49->setAccessType("initializeOnly");
field49->setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"");
Script46->addField(field49);

field* field50 = new field();
field50->setName("rightUrls");
field50->setType("MFString");
field50->setAccessType("initializeOnly");
field50->setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"");
Script46->addField(field50);

field* field51 = new field();
field51->setName("topUrls");
field51->setType("MFString");
field51->setAccessType("initializeOnly");
field51->setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"");
Script46->addField(field51);

field* field52 = new field();
field52->setName("bottomUrls");
field52->setType("MFString");
field52->setAccessType("initializeOnly");
field52->setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"");
Script46->addField(field52);

field* field53 = new field();
field53->setName("front_changed");
field53->setType("MFString");
field53->setAccessType("outputOnly");
Script46->addField(field53);

field* field54 = new field();
field54->setName("back_changed");
field54->setType("MFString");
field54->setAccessType("outputOnly");
Script46->addField(field54);

field* field55 = new field();
field55->setName("left_changed");
field55->setType("MFString");
field55->setAccessType("outputOnly");
Script46->addField(field55);

field* field56 = new field();
field56->setName("right_changed");
field56->setType("MFString");
field56->setAccessType("outputOnly");
Script46->addField(field56);

field* field57 = new field();
field57->setName("top_changed");
field57->setType("MFString");
field57->setAccessType("outputOnly");
Script46->addField(field57);

field* field58 = new field();
field58->setName("bottom_changed");
field58->setType("MFString");
field58->setAccessType("outputOnly");
Script46->addField(field58);

field* field59 = new field();
field59->setName("set_fraction");
field59->setType("SFFloat");
field59->setAccessType("inputOnly");
Script46->addField(field59);

field* field60 = new field();
field60->setName("old");
field60->setType("SFInt32");
field60->setAccessType("inputOutput");
field60->setValue("-1");
Script46->addField(field60);


Script46.setSourceCode(`ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"	    var side = Math.floor(f*frontUrls.length);\n"+
"	    if (side > frontUrls.length-1) {\n"+
"	    	side = 0;\n"+
"	    }\n"+
"	    if (side != old) {\n"+
"	    	    // Browser.print(f+\" \"+side);\n"+
"	    	    old = side;\n"+
"		    front_changed[0] = frontUrls[side];\n"+
"		    back_changed[0] = backUrls[side];\n"+
"		    left_changed[0] = leftUrls[side];\n"+
"		    right_changed[0] = rightUrls[side];\n"+
"		    top_changed[0] = topUrls[side];\n"+
"		    bottom_changed[0] = bottomUrls[side];\n"+
"            }\n"+
"        }`)
Transform18->addChild(Script46);

TimeSensor* TimeSensor61 = new TimeSensor();
TimeSensor61->setDEF("Clock");
TimeSensor61->setCycleInterval(45);
TimeSensor61->setLoop(True);
Transform18->addChild(TimeSensor61);

ROUTE* ROUTE62 = new ROUTE();
ROUTE62->setFromNode("Clock");
ROUTE62->setFromField("fraction_changed");
ROUTE62->setToNode("UrlSelector");
ROUTE62->setToField("set_fraction");
Transform18->addChild(ROUTE62);

ROUTE* ROUTE63 = new ROUTE();
ROUTE63->setFromNode("UrlSelector");
ROUTE63->setFromField("front_changed");
ROUTE63->setToNode("cube");
ROUTE63->setToField("frontUrl");
Transform18->addChild(ROUTE63);

ROUTE* ROUTE64 = new ROUTE();
ROUTE64->setFromNode("UrlSelector");
ROUTE64->setFromField("back_changed");
ROUTE64->setToNode("cube");
ROUTE64->setToField("backUrl");
Transform18->addChild(ROUTE64);

ROUTE* ROUTE65 = new ROUTE();
ROUTE65->setFromNode("UrlSelector");
ROUTE65->setFromField("left_changed");
ROUTE65->setToNode("cube");
ROUTE65->setToField("leftUrl");
Transform18->addChild(ROUTE65);

ROUTE* ROUTE66 = new ROUTE();
ROUTE66->setFromNode("UrlSelector");
ROUTE66->setFromField("right_changed");
ROUTE66->setToNode("cube");
ROUTE66->setToField("rightUrl");
Transform18->addChild(ROUTE66);

ROUTE* ROUTE67 = new ROUTE();
ROUTE67->setFromNode("UrlSelector");
ROUTE67->setFromField("top_changed");
ROUTE67->setToNode("cube");
ROUTE67->setToField("topUrl");
Transform18->addChild(ROUTE67);

ROUTE* ROUTE68 = new ROUTE();
ROUTE68->setFromNode("UrlSelector");
ROUTE68->setFromField("bottom_changed");
ROUTE68->setToNode("cube");
ROUTE68->setToField("bottomUrl");
Transform18->addChild(ROUTE68);

ROUTE* ROUTE69 = new ROUTE();
ROUTE69->setFromNode("UrlSelector");
ROUTE69->setFromField("front_changed");
ROUTE69->setToNode("frontShader");
ROUTE69->setToField("url");
Transform18->addChild(ROUTE69);

ROUTE* ROUTE70 = new ROUTE();
ROUTE70->setFromNode("UrlSelector");
ROUTE70->setFromField("back_changed");
ROUTE70->setToNode("backShader");
ROUTE70->setToField("url");
Transform18->addChild(ROUTE70);

ROUTE* ROUTE71 = new ROUTE();
ROUTE71->setFromNode("UrlSelector");
ROUTE71->setFromField("left_changed");
ROUTE71->setToNode("leftShader");
ROUTE71->setToField("url");
Transform18->addChild(ROUTE71);

ROUTE* ROUTE72 = new ROUTE();
ROUTE72->setFromNode("UrlSelector");
ROUTE72->setFromField("right_changed");
ROUTE72->setToNode("rightShader");
ROUTE72->setToField("url");
Transform18->addChild(ROUTE72);

ROUTE* ROUTE73 = new ROUTE();
ROUTE73->setFromNode("UrlSelector");
ROUTE73->setFromField("top_changed");
ROUTE73->setToNode("topShader");
ROUTE73->setToField("url");
Transform18->addChild(ROUTE73);

ROUTE* ROUTE74 = new ROUTE();
ROUTE74->setFromNode("UrlSelector");
ROUTE74->setFromField("bottom_changed");
ROUTE74->setToNode("bottomShader");
ROUTE74->setToField("url");
Transform18->addChild(ROUTE74);

Scene15->addChild(Transform18);

X3D0->setScene(Scene15);

X3D0->toXMLString();
}

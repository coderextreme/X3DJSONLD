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
meta10->setContent("mirror.x3d");
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
meta13->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/mirror.x3d");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("description");
meta14->setContent("sphere with alternating backgrounds");
head1->addMeta(meta14);

X3D0->setHead(head1);

Scene* Scene15 = new Scene();
Viewpoint* Viewpoint16 = new Viewpoint();
Viewpoint16->setPosition(new float[3]{0,5,100});
Viewpoint16->setDescription("Switch background and images texture");
Scene15->addChild(Viewpoint16);

TextureBackground* TextureBackground17 = new TextureBackground();
ImageTexture* ImageTexture18 = new ImageTexture();
ImageTexture18->setDEF("leftBackgroundTexture");
ImageTexture18->setUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
TextureBackground17->setLeftTexture(ImageTexture18);

ImageTexture* ImageTexture19 = new ImageTexture();
ImageTexture19->setDEF("rightBackgroundTexture");
ImageTexture19->setUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
TextureBackground17->setRightTexture(ImageTexture19);

ImageTexture* ImageTexture20 = new ImageTexture();
ImageTexture20->setDEF("frontBackgroundTexture");
ImageTexture20->setUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
TextureBackground17->setFrontTexture(ImageTexture20);

ImageTexture* ImageTexture21 = new ImageTexture();
ImageTexture21->setDEF("backBackgroundTexture");
ImageTexture21->setUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
TextureBackground17->setBackTexture(ImageTexture21);

ImageTexture* ImageTexture22 = new ImageTexture();
ImageTexture22->setDEF("topBackgroundTexture");
ImageTexture22->setUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
TextureBackground17->setTopTexture(ImageTexture22);

ImageTexture* ImageTexture23 = new ImageTexture();
ImageTexture23->setDEF("bottomBackgroundTexture");
ImageTexture23->setUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
TextureBackground17->setBottomTexture(ImageTexture23);

Scene15->addChild(TextureBackground17);

Transform* Transform24 = new Transform();
Shape* Shape25 = new Shape();
Appearance* Appearance26 = new Appearance();
Material* Material27 = new Material();
Material27->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material27->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance26->setMaterial(Material27);

ComposedCubeMapTexture* ComposedCubeMapTexture28 = new ComposedCubeMapTexture();
ImageTexture* ImageTexture29 = new ImageTexture();
ImageTexture29->setDEF("backShader");
ImageTexture29->setUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
ComposedCubeMapTexture28->setBackTexture(ImageTexture29);

ImageTexture* ImageTexture30 = new ImageTexture();
ImageTexture30->setDEF("bottomShader");
ImageTexture30->setUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
ComposedCubeMapTexture28->setBottomTexture(ImageTexture30);

ImageTexture* ImageTexture31 = new ImageTexture();
ImageTexture31->setDEF("frontShader");
ImageTexture31->setUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
ComposedCubeMapTexture28->setFrontTexture(ImageTexture31);

ImageTexture* ImageTexture32 = new ImageTexture();
ImageTexture32->setDEF("leftShader");
ImageTexture32->setUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
ComposedCubeMapTexture28->setLeftTexture(ImageTexture32);

ImageTexture* ImageTexture33 = new ImageTexture();
ImageTexture33->setDEF("rightShader");
ImageTexture33->setUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
ComposedCubeMapTexture28->setRightTexture(ImageTexture33);

ImageTexture* ImageTexture34 = new ImageTexture();
ImageTexture34->setDEF("topShader");
ImageTexture34->setUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
ComposedCubeMapTexture28->setTopTexture(ImageTexture34);

Appearance26->setTexture(ComposedCubeMapTexture28);

ComposedShader* ComposedShader35 = new ComposedShader();
ComposedShader35->setDEF("x3dom");
ComposedShader35->setLanguage("GLSL");
field* field36 = new field();
field36->setName("chromaticDispertion");
field36->setAccessType("inputOutput");
field36->setType("SFVec3f");
field36->setValue("0.98 1 1.033");
ComposedShader35->addField(field36);

field* field37 = new field();
field37->setName("cube");
field37->setAccessType("inputOutput");
field37->setType("SFInt32");
field37->setValue("0");
ComposedShader35->addField(field37);

field* field38 = new field();
field38->setName("bias");
field38->setAccessType("inputOutput");
field38->setType("SFFloat");
field38->setValue("0.5");
ComposedShader35->addField(field38);

field* field39 = new field();
field39->setName("scale");
field39->setAccessType("inputOutput");
field39->setType("SFFloat");
field39->setValue("0.5");
ComposedShader35->addField(field39);

field* field40 = new field();
field40->setName("power");
field40->setAccessType("inputOutput");
field40->setType("SFFloat");
field40->setValue("2");
ComposedShader35->addField(field40);

ShaderPart* ShaderPart41 = new ShaderPart();
ShaderPart41->setUrl(new String[2]{"../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ShaderPart41->setType("VERTEX");
ComposedShader35->addParts(ShaderPart41);

ShaderPart* ShaderPart42 = new ShaderPart();
ShaderPart42->setUrl(new String[2]{"../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"}, 2);
ShaderPart42->setType("FRAGMENT");
ComposedShader35->addParts(ShaderPart42);

Appearance26->addShaders(ComposedShader35);

ComposedShader* ComposedShader43 = new ComposedShader();
ComposedShader43->setDEF("x_ite");
ComposedShader43->setLanguage("GLSL");
//http://hypertextbook.com/facts/2005/JustinChe.shtml
field* field44 = new field();
field44->setName("chromaticDispertion");
field44->setAccessType("inputOutput");
field44->setType("SFVec3f");
field44->setValue("0.98 1 1.033");
ComposedShader43->addField(field44);

field* field45 = new field();
field45->setName("cube");
field45->setAccessType("inputOutput");
field45->setType("SFInt32");
field45->setValue("0");
ComposedShader43->addField(field45);

field* field46 = new field();
field46->setName("bias");
field46->setAccessType("inputOutput");
field46->setType("SFFloat");
field46->setValue("0.5");
ComposedShader43->addField(field46);

field* field47 = new field();
field47->setName("scale");
field47->setAccessType("inputOutput");
field47->setType("SFFloat");
field47->setValue("0.5");
ComposedShader43->addField(field47);

field* field48 = new field();
field48->setName("power");
field48->setAccessType("inputOutput");
field48->setType("SFFloat");
field48->setValue("2");
ComposedShader43->addField(field48);

ShaderPart* ShaderPart49 = new ShaderPart();
ShaderPart49->setUrl(new String[2]{"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 2);
ShaderPart49->setType("VERTEX");
ComposedShader43->addParts(ShaderPart49);

ShaderPart* ShaderPart50 = new ShaderPart();
ShaderPart50->setUrl(new String[2]{"../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"}, 2);
ShaderPart50->setType("FRAGMENT");
ComposedShader43->addParts(ShaderPart50);

Appearance26->addShaders(ComposedShader43);

Shape25->setAppearance(Appearance26);

Sphere* Sphere51 = new Sphere();
Sphere51->setRadius(30);
Shape25->setGeometry(Sphere51);

Transform24->addChild(Shape25);

Script* Script52 = new Script();
Script52->setDEF("UrlSelector");
Script52->setDirectOutput(True);
field* field53 = new field();
field53->setName("frontUrls");
field53->setType("MFString");
field53->setAccessType("initializeOnly");
field53->setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"");
Script52->addField(field53);

field* field54 = new field();
field54->setName("backUrls");
field54->setType("MFString");
field54->setAccessType("initializeOnly");
field54->setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"");
Script52->addField(field54);

field* field55 = new field();
field55->setName("leftUrls");
field55->setType("MFString");
field55->setAccessType("initializeOnly");
field55->setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"");
Script52->addField(field55);

field* field56 = new field();
field56->setName("rightUrls");
field56->setType("MFString");
field56->setAccessType("initializeOnly");
field56->setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"");
Script52->addField(field56);

field* field57 = new field();
field57->setName("topUrls");
field57->setType("MFString");
field57->setAccessType("initializeOnly");
field57->setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"");
Script52->addField(field57);

field* field58 = new field();
field58->setName("bottomUrls");
field58->setType("MFString");
field58->setAccessType("initializeOnly");
field58->setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"");
Script52->addField(field58);

field* field59 = new field();
field59->setName("front_changed");
field59->setType("MFString");
field59->setAccessType("outputOnly");
Script52->addField(field59);

field* field60 = new field();
field60->setName("back_changed");
field60->setType("MFString");
field60->setAccessType("outputOnly");
Script52->addField(field60);

field* field61 = new field();
field61->setName("left_changed");
field61->setType("MFString");
field61->setAccessType("outputOnly");
Script52->addField(field61);

field* field62 = new field();
field62->setName("right_changed");
field62->setType("MFString");
field62->setAccessType("outputOnly");
Script52->addField(field62);

field* field63 = new field();
field63->setName("top_changed");
field63->setType("MFString");
field63->setAccessType("outputOnly");
Script52->addField(field63);

field* field64 = new field();
field64->setName("bottom_changed");
field64->setType("MFString");
field64->setAccessType("outputOnly");
Script52->addField(field64);

field* field65 = new field();
field65->setName("set_fraction");
field65->setType("SFFloat");
field65->setAccessType("inputOnly");
Script52->addField(field65);

field* field66 = new field();
field66->setName("old");
field66->setType("SFInt32");
field66->setAccessType("inputOutput");
field66->setValue("-1");
Script52->addField(field66);


Script52.setSourceCode(`ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"	    var side = Math.floor(f*frontUrls.length);\n"+
"	    if (side > frontUrls.length-1) {\n"+
"	    	side = 0;\n"+
"	    }\n"+
"	    if (side != old) {\n"+
"	    	    Browser.print(f+\" \"+side);\n"+
"	    	    old = side;\n"+
"		    front_changed[0] = frontUrls[side];\n"+
"		    back_changed[0] = backUrls[side];\n"+
"		    left_changed[0] = leftUrls[side];\n"+
"		    right_changed[0] = rightUrls[side];\n"+
"		    top_changed[0] = topUrls[side];\n"+
"		    bottom_changed[0] = bottomUrls[side];\n"+
"            }\n"+
"        }`)
Transform24->addChild(Script52);

TimeSensor* TimeSensor67 = new TimeSensor();
TimeSensor67->setDEF("Clock");
TimeSensor67->setCycleInterval(45);
TimeSensor67->setLoop(True);
Transform24->addChild(TimeSensor67);

ROUTE* ROUTE68 = new ROUTE();
ROUTE68->setFromNode("Clock");
ROUTE68->setFromField("fraction_changed");
ROUTE68->setToNode("UrlSelector");
ROUTE68->setToField("set_fraction");
Transform24->addChild(ROUTE68);

ROUTE* ROUTE69 = new ROUTE();
ROUTE69->setFromNode("UrlSelector");
ROUTE69->setFromField("front_changed");
ROUTE69->setToNode("frontBackgroundTexture");
ROUTE69->setToField("url");
Transform24->addChild(ROUTE69);

ROUTE* ROUTE70 = new ROUTE();
ROUTE70->setFromNode("UrlSelector");
ROUTE70->setFromField("back_changed");
ROUTE70->setToNode("backBackgroundTexture");
ROUTE70->setToField("url");
Transform24->addChild(ROUTE70);

ROUTE* ROUTE71 = new ROUTE();
ROUTE71->setFromNode("UrlSelector");
ROUTE71->setFromField("left_changed");
ROUTE71->setToNode("leftBackgroundTexture");
ROUTE71->setToField("url");
Transform24->addChild(ROUTE71);

ROUTE* ROUTE72 = new ROUTE();
ROUTE72->setFromNode("UrlSelector");
ROUTE72->setFromField("right_changed");
ROUTE72->setToNode("rightBackgroundTexture");
ROUTE72->setToField("url");
Transform24->addChild(ROUTE72);

ROUTE* ROUTE73 = new ROUTE();
ROUTE73->setFromNode("UrlSelector");
ROUTE73->setFromField("top_changed");
ROUTE73->setToNode("topBackgroundTexture");
ROUTE73->setToField("url");
Transform24->addChild(ROUTE73);

ROUTE* ROUTE74 = new ROUTE();
ROUTE74->setFromNode("UrlSelector");
ROUTE74->setFromField("bottom_changed");
ROUTE74->setToNode("bottomBackgroundTexture");
ROUTE74->setToField("url");
Transform24->addChild(ROUTE74);

ROUTE* ROUTE75 = new ROUTE();
ROUTE75->setFromNode("UrlSelector");
ROUTE75->setFromField("front_changed");
ROUTE75->setToNode("frontShader");
ROUTE75->setToField("url");
Transform24->addChild(ROUTE75);

ROUTE* ROUTE76 = new ROUTE();
ROUTE76->setFromNode("UrlSelector");
ROUTE76->setFromField("back_changed");
ROUTE76->setToNode("backShader");
ROUTE76->setToField("url");
Transform24->addChild(ROUTE76);

ROUTE* ROUTE77 = new ROUTE();
ROUTE77->setFromNode("UrlSelector");
ROUTE77->setFromField("left_changed");
ROUTE77->setToNode("leftShader");
ROUTE77->setToField("url");
Transform24->addChild(ROUTE77);

ROUTE* ROUTE78 = new ROUTE();
ROUTE78->setFromNode("UrlSelector");
ROUTE78->setFromField("right_changed");
ROUTE78->setToNode("rightShader");
ROUTE78->setToField("url");
Transform24->addChild(ROUTE78);

ROUTE* ROUTE79 = new ROUTE();
ROUTE79->setFromNode("UrlSelector");
ROUTE79->setFromField("top_changed");
ROUTE79->setToNode("topShader");
ROUTE79->setToField("url");
Transform24->addChild(ROUTE79);

ROUTE* ROUTE80 = new ROUTE();
ROUTE80->setFromNode("UrlSelector");
ROUTE80->setFromField("bottom_changed");
ROUTE80->setToNode("bottomShader");
ROUTE80->setToField("url");
Transform24->addChild(ROUTE80);

Scene15->addChild(Transform24);

X3D0->setScene(Scene15);

X3D0->toXMLString();
}

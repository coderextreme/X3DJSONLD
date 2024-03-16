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
meta10->setContent("flowers7.x3d");
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
meta13->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("description");
meta14->setContent("a flower");
head1->addMeta(meta14);

X3D0->setHead(head1);

Scene* Scene15 = new Scene();
NavigationInfo* NavigationInfo16 = new NavigationInfo();
Scene15->addChild(NavigationInfo16);

//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background* Background17 = new Background();
Background17->setDEF("background");
Background17->setBackUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
Background17->setBottomUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
Background17->setFrontUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
Background17->setLeftUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
Background17->setRightUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
Background17->setTopUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
Scene15->addChild(Background17);

Viewpoint* Viewpoint18 = new Viewpoint();
Viewpoint18->setPosition(new float[3]{0,0,40});
Viewpoint18->setDescription("Transparent rose");
Scene15->addChild(Viewpoint18);

Transform* Transform19 = new Transform();
Shape* Shape20 = new Shape();
Appearance* Appearance21 = new Appearance();
Material* Material22 = new Material();
Material22->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material22->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance21->setMaterial(Material22);

ComposedCubeMapTexture* ComposedCubeMapTexture23 = new ComposedCubeMapTexture();
ComposedCubeMapTexture23->setDEF("texture");
ImageTexture* ImageTexture24 = new ImageTexture();
ImageTexture24->setDEF("backShader");
ImageTexture24->setUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
ComposedCubeMapTexture23->setBackTexture(ImageTexture24);

ImageTexture* ImageTexture25 = new ImageTexture();
ImageTexture25->setDEF("bottomShader");
ImageTexture25->setUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
ComposedCubeMapTexture23->setBottomTexture(ImageTexture25);

ImageTexture* ImageTexture26 = new ImageTexture();
ImageTexture26->setDEF("frontShader");
ImageTexture26->setUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
ComposedCubeMapTexture23->setFrontTexture(ImageTexture26);

ImageTexture* ImageTexture27 = new ImageTexture();
ImageTexture27->setDEF("leftShader");
ImageTexture27->setUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
ComposedCubeMapTexture23->setLeftTexture(ImageTexture27);

ImageTexture* ImageTexture28 = new ImageTexture();
ImageTexture28->setDEF("rightShader");
ImageTexture28->setUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
ComposedCubeMapTexture23->setRightTexture(ImageTexture28);

ImageTexture* ImageTexture29 = new ImageTexture();
ImageTexture29->setDEF("topShader");
ImageTexture29->setUrl(new String[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
ComposedCubeMapTexture23->setTopTexture(ImageTexture29);

Appearance21->setTexture(ComposedCubeMapTexture23);

ComposedShader* ComposedShader30 = new ComposedShader();
ComposedShader30->setDEF("x3dom");
ComposedShader30->setLanguage("GLSL");
field* field31 = new field();
field31->setName("cube");
field31->setType("SFInt32");
field31->setAccessType("inputOutput");
field31->setValue("0");
ComposedShader30->addField(field31);

field* field32 = new field();
field32->setName("chromaticDispertion");
field32->setAccessType("initializeOnly");
field32->setType("SFVec3f");
field32->setValue("0.98 1 1.033");
ComposedShader30->addField(field32);

field* field33 = new field();
field33->setName("bias");
field33->setType("SFFloat");
field33->setAccessType("inputOutput");
field33->setValue("0.5");
ComposedShader30->addField(field33);

field* field34 = new field();
field34->setName("scale");
field34->setType("SFFloat");
field34->setAccessType("inputOutput");
field34->setValue("0.5");
ComposedShader30->addField(field34);

field* field35 = new field();
field35->setName("power");
field35->setType("SFFloat");
field35->setAccessType("inputOutput");
field35->setValue("2");
ComposedShader30->addField(field35);

field* field36 = new field();
field36->setName("a");
field36->setType("SFFloat");
field36->setAccessType("inputOutput");
field36->setValue("10");
ComposedShader30->addField(field36);

field* field37 = new field();
field37->setName("b");
field37->setType("SFFloat");
field37->setAccessType("inputOutput");
field37->setValue("1");
ComposedShader30->addField(field37);

field* field38 = new field();
field38->setName("c");
field38->setType("SFFloat");
field38->setAccessType("inputOutput");
field38->setValue("20");
ComposedShader30->addField(field38);

field* field39 = new field();
field39->setName("d");
field39->setType("SFFloat");
field39->setAccessType("inputOutput");
field39->setValue("20");
ComposedShader30->addField(field39);

field* field40 = new field();
field40->setName("tdelta");
field40->setType("SFFloat");
field40->setAccessType("inputOutput");
field40->setValue("0");
ComposedShader30->addField(field40);

field* field41 = new field();
field41->setName("pdelta");
field41->setType("SFFloat");
field41->setAccessType("inputOutput");
field41->setValue("0");
ComposedShader30->addField(field41);

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
ShaderPart* ShaderPart42 = new ShaderPart();
ShaderPart42->setUrl(new String[2]{"../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"}, 2);
ShaderPart42->setType("VERTEX");
ComposedShader30->addParts(ShaderPart42);

ShaderPart* ShaderPart43 = new ShaderPart();
ShaderPart43->setUrl(new String[2]{"../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"}, 2);
ShaderPart43->setType("FRAGMENT");
ComposedShader30->addParts(ShaderPart43);

Appearance21->addShaders(ComposedShader30);

ComposedShader* ComposedShader44 = new ComposedShader();
ComposedShader44->setDEF("x_ite");
ComposedShader44->setLanguage("GLSL");
field* field45 = new field();
field45->setName("cube");
field45->setType("SFNode");
field45->setAccessType("inputOutput");
ComposedCubeMapTexture* ComposedCubeMapTexture46 = new ComposedCubeMapTexture();
ComposedCubeMapTexture46->setUSE("texture");
field45->addChild(ComposedCubeMapTexture46);

ComposedShader44->addField(field45);

field* field47 = new field();
field47->setName("chromaticDispertion");
field47->setAccessType("initializeOnly");
field47->setType("SFVec3f");
field47->setValue("0.98 1 1.033");
ComposedShader44->addField(field47);

field* field48 = new field();
field48->setName("bias");
field48->setType("SFFloat");
field48->setAccessType("inputOnly");
field48->setValue("0.5");
ComposedShader44->addField(field48);

field* field49 = new field();
field49->setName("scale");
field49->setType("SFFloat");
field49->setAccessType("inputOnly");
field49->setValue("0.5");
ComposedShader44->addField(field49);

field* field50 = new field();
field50->setName("power");
field50->setType("SFFloat");
field50->setAccessType("inputOnly");
field50->setValue("2");
ComposedShader44->addField(field50);

field* field51 = new field();
field51->setName("a");
field51->setType("SFFloat");
field51->setAccessType("inputOnly");
field51->setValue("10");
ComposedShader44->addField(field51);

field* field52 = new field();
field52->setName("b");
field52->setType("SFFloat");
field52->setAccessType("inputOnly");
field52->setValue("1");
ComposedShader44->addField(field52);

field* field53 = new field();
field53->setName("c");
field53->setType("SFFloat");
field53->setAccessType("inputOnly");
field53->setValue("20");
ComposedShader44->addField(field53);

field* field54 = new field();
field54->setName("d");
field54->setType("SFFloat");
field54->setAccessType("inputOnly");
field54->setValue("20");
ComposedShader44->addField(field54);

field* field55 = new field();
field55->setName("tdelta");
field55->setType("SFFloat");
field55->setAccessType("inputOnly");
field55->setValue("0");
ComposedShader44->addField(field55);

field* field56 = new field();
field56->setName("pdelta");
field56->setType("SFFloat");
field56->setAccessType("inputOnly");
field56->setValue("0");
ComposedShader44->addField(field56);

ShaderPart* ShaderPart57 = new ShaderPart();
ShaderPart57->setUrl(new String[2]{"../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"}, 2);
ShaderPart57->setType("VERTEX");
ComposedShader44->addParts(ShaderPart57);

ShaderPart* ShaderPart58 = new ShaderPart();
ShaderPart58->setUrl(new String[2]{"../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"}, 2);
ShaderPart58->setType("FRAGMENT");
ComposedShader44->addParts(ShaderPart58);

Appearance21->addShaders(ComposedShader44);

Shape20->setAppearance(Appearance21);

Sphere* Sphere59 = new Sphere();
Shape20->setGeometry(Sphere59);

Transform19->addChild(Shape20);

Scene15->addChild(Transform19);

Script* Script60 = new Script();
Script60->setDEF("UrlSelector");
Script60->setDirectOutput(True);
field* field61 = new field();
field61->setName("frontUrls");
field61->setType("MFString");
field61->setAccessType("initializeOnly");
field61->setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"");
Script60->addField(field61);

field* field62 = new field();
field62->setName("backUrls");
field62->setType("MFString");
field62->setAccessType("initializeOnly");
field62->setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"");
Script60->addField(field62);

field* field63 = new field();
field63->setName("leftUrls");
field63->setType("MFString");
field63->setAccessType("initializeOnly");
field63->setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"");
Script60->addField(field63);

field* field64 = new field();
field64->setName("rightUrls");
field64->setType("MFString");
field64->setAccessType("initializeOnly");
field64->setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"");
Script60->addField(field64);

field* field65 = new field();
field65->setName("topUrls");
field65->setType("MFString");
field65->setAccessType("initializeOnly");
field65->setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"");
Script60->addField(field65);

field* field66 = new field();
field66->setName("bottomUrls");
field66->setType("MFString");
field66->setAccessType("initializeOnly");
field66->setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"");
Script60->addField(field66);

field* field67 = new field();
field67->setName("front");
field67->setType("MFString");
field67->setAccessType("inputOutput");
Script60->addField(field67);

field* field68 = new field();
field68->setName("back");
field68->setType("MFString");
field68->setAccessType("inputOutput");
Script60->addField(field68);

field* field69 = new field();
field69->setName("left");
field69->setType("MFString");
field69->setAccessType("inputOutput");
Script60->addField(field69);

field* field70 = new field();
field70->setName("right");
field70->setType("MFString");
field70->setAccessType("inputOutput");
Script60->addField(field70);

field* field71 = new field();
field71->setName("top");
field71->setType("MFString");
field71->setAccessType("inputOutput");
Script60->addField(field71);

field* field72 = new field();
field72->setName("bottom");
field72->setType("MFString");
field72->setAccessType("inputOutput");
Script60->addField(field72);

field* field73 = new field();
field73->setName("set_fraction");
field73->setType("SFFloat");
field73->setAccessType("inputOnly");
Script60->addField(field73);

field* field74 = new field();
field74->setName("old");
field74->setType("SFInt32");
field74->setAccessType("inputOutput");
field74->setValue("-1");
Script60->addField(field74);


Script60.setSourceCode(`ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"            var side = Math.floor(f*frontUrls.length);\n"+
"            if (side > frontUrls.length-1) {\n"+
"                side = 0;\n"+
"            }\n"+
"            if (side != old) {\n"+
"                    old = side;\n"+
"                    front[0] = frontUrls[side];\n"+
"                    back[0] = backUrls[side];\n"+
"                    left[0] = leftUrls[side];\n"+
"                    right[0] = rightUrls[side];\n"+
"                    top[0] = topUrls[side];\n"+
"                    bottom[0] = bottomUrls[side];\n"+
"            }\n"+
"        }`)
Scene15->addChild(Script60);

//<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>
Script* Script75 = new Script();
Script75->setDEF("Animate");
Script75->setDirectOutput(True);
field* field76 = new field();
field76->setName("set_fraction");
field76->setType("SFFloat");
field76->setAccessType("inputOnly");
Script75->addField(field76);

field* field77 = new field();
field77->setName("a");
field77->setType("SFFloat");
field77->setAccessType("inputOutput");
field77->setValue("10");
Script75->addField(field77);

field* field78 = new field();
field78->setName("b");
field78->setType("SFFloat");
field78->setAccessType("inputOutput");
field78->setValue("1");
Script75->addField(field78);

field* field79 = new field();
field79->setName("c");
field79->setType("SFFloat");
field79->setAccessType("inputOutput");
field79->setValue("20");
Script75->addField(field79);

field* field80 = new field();
field80->setName("d");
field80->setType("SFFloat");
field80->setAccessType("inputOutput");
field80->setValue("20");
Script75->addField(field80);

field* field81 = new field();
field81->setName("tdelta");
field81->setType("SFFloat");
field81->setAccessType("inputOutput");
field81->setValue("0");
Script75->addField(field81);

field* field82 = new field();
field82->setName("pdelta");
field82->setType("SFFloat");
field82->setAccessType("inputOutput");
field82->setValue("0");
Script75->addField(field82);


Script75.setSourceCode(`ecmascript:\n"+
"\n"+
"function set_fraction() {\n"+
"	var choice = Math.floor(Math.random() * 4);\n"+
"	switch (choice) {\n"+
"	case 0:\n"+
"		a = a + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 1:\n"+
"		b = b + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 2:\n"+
"		c = c + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 3:\n"+
"		d = d + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	}\n"+
"	tdelta = tdelta + 0.5;\n"+
"	pdelta = pdelta + 0.5;\n"+
"	if (a < 1) {\n"+
"		a = 10;\n"+
"	}\n"+
"	if (b < 1) {\n"+
"		b = 10;\n"+
"	}\n"+
"	if (c < 1) {\n"+
"		c = 4;\n"+
"	}\n"+
"	if (c > 20) {\n"+
"		c = 4;\n"+
"	}\n"+
"	if (d < 1) {\n"+
"		d = 4;\n"+
"	}\n"+
"	if (d > 20) {\n"+
"		d = 4;\n"+
"	}\n"+
"}`)
Scene15->addChild(Script75);

TimeSensor* TimeSensor83 = new TimeSensor();
TimeSensor83->setDEF("TourTime");
TimeSensor83->setCycleInterval(5);
TimeSensor83->setLoop(True);
Scene15->addChild(TimeSensor83);

ROUTE* ROUTE84 = new ROUTE();
ROUTE84->setFromNode("TourTime");
ROUTE84->setFromField("fraction_changed");
ROUTE84->setToNode("Animate");
ROUTE84->setToField("set_fraction");
Scene15->addChild(ROUTE84);

ROUTE* ROUTE85 = new ROUTE();
ROUTE85->setFromNode("Animate");
ROUTE85->setFromField("a");
ROUTE85->setToNode("x_ite");
ROUTE85->setToField("a");
Scene15->addChild(ROUTE85);

ROUTE* ROUTE86 = new ROUTE();
ROUTE86->setFromNode("Animate");
ROUTE86->setFromField("b");
ROUTE86->setToNode("x_ite");
ROUTE86->setToField("b");
Scene15->addChild(ROUTE86);

ROUTE* ROUTE87 = new ROUTE();
ROUTE87->setFromNode("Animate");
ROUTE87->setFromField("c");
ROUTE87->setToNode("x_ite");
ROUTE87->setToField("c");
Scene15->addChild(ROUTE87);

ROUTE* ROUTE88 = new ROUTE();
ROUTE88->setFromNode("Animate");
ROUTE88->setFromField("d");
ROUTE88->setToNode("x_ite");
ROUTE88->setToField("d");
Scene15->addChild(ROUTE88);

ROUTE* ROUTE89 = new ROUTE();
ROUTE89->setFromNode("Animate");
ROUTE89->setFromField("pdelta");
ROUTE89->setToNode("x_ite");
ROUTE89->setToField("pdelta");
Scene15->addChild(ROUTE89);

ROUTE* ROUTE90 = new ROUTE();
ROUTE90->setFromNode("Animate");
ROUTE90->setFromField("tdelta");
ROUTE90->setToNode("x_ite");
ROUTE90->setToField("tdelta");
Scene15->addChild(ROUTE90);

ROUTE* ROUTE91 = new ROUTE();
ROUTE91->setFromNode("Animate");
ROUTE91->setFromField("a");
ROUTE91->setToNode("x3dom");
ROUTE91->setToField("a");
Scene15->addChild(ROUTE91);

ROUTE* ROUTE92 = new ROUTE();
ROUTE92->setFromNode("Animate");
ROUTE92->setFromField("b");
ROUTE92->setToNode("x3dom");
ROUTE92->setToField("b");
Scene15->addChild(ROUTE92);

ROUTE* ROUTE93 = new ROUTE();
ROUTE93->setFromNode("Animate");
ROUTE93->setFromField("c");
ROUTE93->setToNode("x3dom");
ROUTE93->setToField("c");
Scene15->addChild(ROUTE93);

ROUTE* ROUTE94 = new ROUTE();
ROUTE94->setFromNode("Animate");
ROUTE94->setFromField("d");
ROUTE94->setToNode("x3dom");
ROUTE94->setToField("d");
Scene15->addChild(ROUTE94);

ROUTE* ROUTE95 = new ROUTE();
ROUTE95->setFromNode("Animate");
ROUTE95->setFromField("pdelta");
ROUTE95->setToNode("x3dom");
ROUTE95->setToField("pdelta");
Scene15->addChild(ROUTE95);

ROUTE* ROUTE96 = new ROUTE();
ROUTE96->setFromNode("Animate");
ROUTE96->setFromField("tdelta");
ROUTE96->setToNode("x3dom");
ROUTE96->setToField("tdelta");
Scene15->addChild(ROUTE96);

X3D0->setScene(Scene15);

X3D0->toXMLString();
}

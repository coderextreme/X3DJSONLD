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
meta10->setContent(CString("flowers7.x3d"));
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName(CString("creator"));
meta11->setContent(CString("John Carlson"));
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName(CString("generator"));
meta12->setContent(CString("manual"));
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName(CString("identifier"));
meta13->setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d"));
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName(CString("description"));
meta14->setContent(CString("a flower"));
head1->addMeta(meta14);

X3D0->setHead(head1);

Scene* Scene15 = new Scene();
NavigationInfo* NavigationInfo16 = new NavigationInfo();
Scene15->addChild(NavigationInfo16);

//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background* Background17 = new Background();
Background17->setDEF(CString("background"));
Background17->setBackUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png")}, 2);
Background17->setBottomUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")}, 2);
Background17->setFrontUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png")}, 2);
Background17->setLeftUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png")}, 2);
Background17->setRightUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png")}, 2);
Background17->setTopUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png")}, 2);
Scene15->addChild(Background17);

Viewpoint* Viewpoint18 = new Viewpoint();
Viewpoint18->setPosition(new float[3]{0,0,40});
Viewpoint18->setDescription(CString("Transparent rose"));
Scene15->addChild(Viewpoint18);

Transform* Transform19 = new Transform();
Shape* Shape20 = new Shape();
Appearance* Appearance21 = new Appearance();
Material* Material22 = new Material();
Material22->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material22->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance21->addChild(Material22);

ComposedCubeMapTexture* ComposedCubeMapTexture23 = new ComposedCubeMapTexture();
ComposedCubeMapTexture23->setDEF(CString("texture"));
ImageTexture* ImageTexture24 = new ImageTexture();
ImageTexture24->setDEF(CString("backShader"));
ImageTexture24->setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png")}, 2);
ComposedCubeMapTexture23->setBack(ImageTexture24);

ImageTexture* ImageTexture25 = new ImageTexture();
ImageTexture25->setDEF(CString("bottomShader"));
ImageTexture25->setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png")}, 2);
ComposedCubeMapTexture23->setBottom(ImageTexture25);

ImageTexture* ImageTexture26 = new ImageTexture();
ImageTexture26->setDEF(CString("frontShader"));
ImageTexture26->setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png")}, 2);
ComposedCubeMapTexture23->setFront(ImageTexture26);

ImageTexture* ImageTexture27 = new ImageTexture();
ImageTexture27->setDEF(CString("leftShader"));
ImageTexture27->setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png")}, 2);
ComposedCubeMapTexture23->setLeft(ImageTexture27);

ImageTexture* ImageTexture28 = new ImageTexture();
ImageTexture28->setDEF(CString("rightShader"));
ImageTexture28->setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png")}, 2);
ComposedCubeMapTexture23->setRight(ImageTexture28);

ImageTexture* ImageTexture29 = new ImageTexture();
ImageTexture29->setDEF(CString("topShader"));
ImageTexture29->setUrl(new CString[2]{CString("../resources/images/all_probes/beach_cross/beach_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png")}, 2);
ComposedCubeMapTexture23->setTop(ImageTexture29);

Appearance21->addChild(ComposedCubeMapTexture23);

ComposedShader* ComposedShader30 = new ComposedShader();
ComposedShader30->setDEF(CString("x3dom"));
ComposedShader30->setLanguage(CString("GLSL"));
field* field31 = new field();
field31->setName(CString("cube"));
field31->setType(CString("SFInt32"));
field31->setAccessType(CString("inputOutput"));
field31->setValue(CString("0"));
ComposedShader30->addChild(field31);

field* field32 = new field();
field32->setName(CString("chromaticDispertion"));
field32->setAccessType(CString("initializeOnly"));
field32->setType(CString("SFVec3f"));
field32->setValue(CString("0.98 1 1.033"));
ComposedShader30->addChild(field32);

field* field33 = new field();
field33->setName(CString("bias"));
field33->setType(CString("SFFloat"));
field33->setAccessType(CString("inputOutput"));
field33->setValue(CString("0.5"));
ComposedShader30->addChild(field33);

field* field34 = new field();
field34->setName(CString("scale"));
field34->setType(CString("SFFloat"));
field34->setAccessType(CString("inputOutput"));
field34->setValue(CString("0.5"));
ComposedShader30->addChild(field34);

field* field35 = new field();
field35->setName(CString("power"));
field35->setType(CString("SFFloat"));
field35->setAccessType(CString("inputOutput"));
field35->setValue(CString("2"));
ComposedShader30->addChild(field35);

field* field36 = new field();
field36->setName(CString("a"));
field36->setType(CString("SFFloat"));
field36->setAccessType(CString("inputOutput"));
field36->setValue(CString("10"));
ComposedShader30->addChild(field36);

field* field37 = new field();
field37->setName(CString("b"));
field37->setType(CString("SFFloat"));
field37->setAccessType(CString("inputOutput"));
field37->setValue(CString("1"));
ComposedShader30->addChild(field37);

field* field38 = new field();
field38->setName(CString("c"));
field38->setType(CString("SFFloat"));
field38->setAccessType(CString("inputOutput"));
field38->setValue(CString("20"));
ComposedShader30->addChild(field38);

field* field39 = new field();
field39->setName(CString("d"));
field39->setType(CString("SFFloat"));
field39->setAccessType(CString("inputOutput"));
field39->setValue(CString("20"));
ComposedShader30->addChild(field39);

field* field40 = new field();
field40->setName(CString("tdelta"));
field40->setType(CString("SFFloat"));
field40->setAccessType(CString("inputOutput"));
field40->setValue(CString("0"));
ComposedShader30->addChild(field40);

field* field41 = new field();
field41->setName(CString("pdelta"));
field41->setType(CString("SFFloat"));
field41->setAccessType(CString("inputOutput"));
field41->setValue(CString("0"));
ComposedShader30->addChild(field41);

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
ShaderPart* ShaderPart42 = new ShaderPart();
ShaderPart42->setUrl(new CString[2]{CString("../shaders/x3dom_flowers_chromatic.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs")}, 2);
ShaderPart42->setType(CString("VERTEX"));
ComposedShader30->setParts(ShaderPart42);

ShaderPart* ShaderPart43 = new ShaderPart();
ShaderPart43->setUrl(new CString[2]{CString("../shaders/common.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs")}, 2);
ShaderPart43->setType(CString("FRAGMENT"));
ComposedShader30->setParts(ShaderPart43);

Appearance21->addChild(ComposedShader30);

ComposedShader* ComposedShader44 = new ComposedShader();
ComposedShader44->setDEF(CString("x_ite"));
ComposedShader44->setLanguage(CString("GLSL"));
field* field45 = new field();
field45->setName(CString("cube"));
field45->setType(CString("SFNode"));
field45->setAccessType(CString("inputOutput"));
ComposedCubeMapTexture* ComposedCubeMapTexture46 = new ComposedCubeMapTexture();
ComposedCubeMapTexture46->setUSE(CString("texture"));
field45->addChild(ComposedCubeMapTexture46);

ComposedShader44->addChild(field45);

field* field47 = new field();
field47->setName(CString("chromaticDispertion"));
field47->setAccessType(CString("initializeOnly"));
field47->setType(CString("SFVec3f"));
field47->setValue(CString("0.98 1 1.033"));
ComposedShader44->addChild(field47);

field* field48 = new field();
field48->setName(CString("bias"));
field48->setType(CString("SFFloat"));
field48->setAccessType(CString("inputOnly"));
field48->setValue(CString("0.5"));
ComposedShader44->addChild(field48);

field* field49 = new field();
field49->setName(CString("scale"));
field49->setType(CString("SFFloat"));
field49->setAccessType(CString("inputOnly"));
field49->setValue(CString("0.5"));
ComposedShader44->addChild(field49);

field* field50 = new field();
field50->setName(CString("power"));
field50->setType(CString("SFFloat"));
field50->setAccessType(CString("inputOnly"));
field50->setValue(CString("2"));
ComposedShader44->addChild(field50);

field* field51 = new field();
field51->setName(CString("a"));
field51->setType(CString("SFFloat"));
field51->setAccessType(CString("inputOnly"));
field51->setValue(CString("10"));
ComposedShader44->addChild(field51);

field* field52 = new field();
field52->setName(CString("b"));
field52->setType(CString("SFFloat"));
field52->setAccessType(CString("inputOnly"));
field52->setValue(CString("1"));
ComposedShader44->addChild(field52);

field* field53 = new field();
field53->setName(CString("c"));
field53->setType(CString("SFFloat"));
field53->setAccessType(CString("inputOnly"));
field53->setValue(CString("20"));
ComposedShader44->addChild(field53);

field* field54 = new field();
field54->setName(CString("d"));
field54->setType(CString("SFFloat"));
field54->setAccessType(CString("inputOnly"));
field54->setValue(CString("20"));
ComposedShader44->addChild(field54);

field* field55 = new field();
field55->setName(CString("tdelta"));
field55->setType(CString("SFFloat"));
field55->setAccessType(CString("inputOnly"));
field55->setValue(CString("0"));
ComposedShader44->addChild(field55);

field* field56 = new field();
field56->setName(CString("pdelta"));
field56->setType(CString("SFFloat"));
field56->setAccessType(CString("inputOnly"));
field56->setValue(CString("0"));
ComposedShader44->addChild(field56);

ShaderPart* ShaderPart57 = new ShaderPart();
ShaderPart57->setUrl(new CString[2]{CString("../shaders/x_ite_flowers_chromatic.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs")}, 2);
ShaderPart57->setType(CString("VERTEX"));
ComposedShader44->setParts(ShaderPart57);

ShaderPart* ShaderPart58 = new ShaderPart();
ShaderPart58->setUrl(new CString[2]{CString("../shaders/x_ite.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")}, 2);
ShaderPart58->setType(CString("FRAGMENT"));
ComposedShader44->setParts(ShaderPart58);

Appearance21->addChild(ComposedShader44);

Shape20->addChild(Appearance21);

Sphere* Sphere59 = new Sphere();
Shape20->setGeometry(Sphere59);

Transform19->addChild(Shape20);

Scene15->addChild(Transform19);

Script* Script60 = new Script();
Script60->setDEF(CString("UrlSelector"));
Script60->setDirectOutput(True);
field* field61 = new field();
field61->setName(CString("frontUrls"));
field61->setType(CString("MFString"));
field61->setAccessType(CString("initializeOnly"));
field61->setValue(CString("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\""));
Script60->addChild(field61);

field* field62 = new field();
field62->setName(CString("backUrls"));
field62->setType(CString("MFString"));
field62->setAccessType(CString("initializeOnly"));
field62->setValue(CString("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\""));
Script60->addChild(field62);

field* field63 = new field();
field63->setName(CString("leftUrls"));
field63->setType(CString("MFString"));
field63->setAccessType(CString("initializeOnly"));
field63->setValue(CString("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\""));
Script60->addChild(field63);

field* field64 = new field();
field64->setName(CString("rightUrls"));
field64->setType(CString("MFString"));
field64->setAccessType(CString("initializeOnly"));
field64->setValue(CString("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\""));
Script60->addChild(field64);

field* field65 = new field();
field65->setName(CString("topUrls"));
field65->setType(CString("MFString"));
field65->setAccessType(CString("initializeOnly"));
field65->setValue(CString("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\""));
Script60->addChild(field65);

field* field66 = new field();
field66->setName(CString("bottomUrls"));
field66->setType(CString("MFString"));
field66->setAccessType(CString("initializeOnly"));
field66->setValue(CString("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\""));
Script60->addChild(field66);

field* field67 = new field();
field67->setName(CString("front"));
field67->setType(CString("MFString"));
field67->setAccessType(CString("inputOutput"));
Script60->addChild(field67);

field* field68 = new field();
field68->setName(CString("back"));
field68->setType(CString("MFString"));
field68->setAccessType(CString("inputOutput"));
Script60->addChild(field68);

field* field69 = new field();
field69->setName(CString("left"));
field69->setType(CString("MFString"));
field69->setAccessType(CString("inputOutput"));
Script60->addChild(field69);

field* field70 = new field();
field70->setName(CString("right"));
field70->setType(CString("MFString"));
field70->setAccessType(CString("inputOutput"));
Script60->addChild(field70);

field* field71 = new field();
field71->setName(CString("top"));
field71->setType(CString("MFString"));
field71->setAccessType(CString("inputOutput"));
Script60->addChild(field71);

field* field72 = new field();
field72->setName(CString("bottom"));
field72->setType(CString("MFString"));
field72->setAccessType(CString("inputOutput"));
Script60->addChild(field72);

field* field73 = new field();
field73->setName(CString("set_fraction"));
field73->setType(CString("SFFloat"));
field73->setAccessType(CString("inputOnly"));
Script60->addChild(field73);

field* field74 = new field();
field74->setName(CString("old"));
field74->setType(CString("SFInt32"));
field74->setAccessType(CString("inputOutput"));
field74->setValue(CString("-1"));
Script60->addChild(field74);


Script60->setSourceCode(CString("ecmascript:")+
_T("        function set_fraction( f, tm ) {")+
_T("            var side = Math.floor(f*frontUrls.length);")+
_T("            if (side > frontUrls.length-1) {")+
_T("                side = 0;")+
_T("            }")+
_T("            if (side != old) {")+
_T("                    old = side;")+
_T("                    front[0] = frontUrls[side];")+
_T("                    back[0] = backUrls[side];")+
_T("                    left[0] = leftUrls[side];")+
_T("                    right[0] = rightUrls[side];")+
_T("                    top[0] = topUrls[side];")+
_T("                    bottom[0] = bottomUrls[side];")+
_T("            }")+
_T("        }"));
Scene15->addChild(Script60);

//<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>
Script* Script75 = new Script();
Script75->setDEF(CString("Animate"));
Script75->setDirectOutput(True);
field* field76 = new field();
field76->setName(CString("set_fraction"));
field76->setType(CString("SFFloat"));
field76->setAccessType(CString("inputOnly"));
Script75->addChild(field76);

field* field77 = new field();
field77->setName(CString("a"));
field77->setType(CString("SFFloat"));
field77->setAccessType(CString("inputOutput"));
field77->setValue(CString("10"));
Script75->addChild(field77);

field* field78 = new field();
field78->setName(CString("b"));
field78->setType(CString("SFFloat"));
field78->setAccessType(CString("inputOutput"));
field78->setValue(CString("1"));
Script75->addChild(field78);

field* field79 = new field();
field79->setName(CString("c"));
field79->setType(CString("SFFloat"));
field79->setAccessType(CString("inputOutput"));
field79->setValue(CString("20"));
Script75->addChild(field79);

field* field80 = new field();
field80->setName(CString("d"));
field80->setType(CString("SFFloat"));
field80->setAccessType(CString("inputOutput"));
field80->setValue(CString("20"));
Script75->addChild(field80);

field* field81 = new field();
field81->setName(CString("tdelta"));
field81->setType(CString("SFFloat"));
field81->setAccessType(CString("inputOutput"));
field81->setValue(CString("0"));
Script75->addChild(field81);

field* field82 = new field();
field82->setName(CString("pdelta"));
field82->setType(CString("SFFloat"));
field82->setAccessType(CString("inputOutput"));
field82->setValue(CString("0"));
Script75->addChild(field82);


Script75->setSourceCode(CString("ecmascript:")+
_T("function set_fraction() {")+
_T("	var choice = Math.floor(Math.random() * 4);")+
_T("	switch (choice) {")+
_T("	case 0:")+
_T("		a = a + Math.floor(Math.random() * 2) * 2 - 1;")+
_T("		break;")+
_T("	case 1:")+
_T("		b = b + Math.floor(Math.random() * 2) * 2 - 1;")+
_T("		break;")+
_T("	case 2:")+
_T("		c = c + Math.floor(Math.random() * 2) * 2 - 1;")+
_T("		break;")+
_T("	case 3:")+
_T("		d = d + Math.floor(Math.random() * 2) * 2 - 1;")+
_T("		break;")+
_T("	}")+
_T("	tdelta = tdelta + 0.5;")+
_T("	pdelta = pdelta + 0.5;")+
_T("	if (a < 1) {")+
_T("		a = 10;")+
_T("	}")+
_T("	if (b < 1) {")+
_T("		b = 10;")+
_T("	}")+
_T("	if (c < 1) {")+
_T("		c = 4;")+
_T("	}")+
_T("	if (c > 20) {")+
_T("		c = 4;")+
_T("	}")+
_T("	if (d < 1) {")+
_T("		d = 4;")+
_T("	}")+
_T("	if (d > 20) {")+
_T("		d = 4;")+
_T("	}")+
_T("}"));
Scene15->addChild(Script75);

TimeSensor* TimeSensor83 = new TimeSensor();
TimeSensor83->setDEF(CString("TourTime"));
TimeSensor83->setCycleInterval(5);
TimeSensor83->setLoop(True);
Scene15->addChild(TimeSensor83);

ROUTE* ROUTE84 = new ROUTE();
ROUTE84->setFromNode(CString("TourTime"));
ROUTE84->setFromField(CString("fraction_changed"));
ROUTE84->setToNode(CString("Animate"));
ROUTE84->setToField(CString("set_fraction"));
Scene15->addChild(ROUTE84);

ROUTE* ROUTE85 = new ROUTE();
ROUTE85->setFromNode(CString("Animate"));
ROUTE85->setFromField(CString("a"));
ROUTE85->setToNode(CString("x_ite"));
ROUTE85->setToField(CString("a"));
Scene15->addChild(ROUTE85);

ROUTE* ROUTE86 = new ROUTE();
ROUTE86->setFromNode(CString("Animate"));
ROUTE86->setFromField(CString("b"));
ROUTE86->setToNode(CString("x_ite"));
ROUTE86->setToField(CString("b"));
Scene15->addChild(ROUTE86);

ROUTE* ROUTE87 = new ROUTE();
ROUTE87->setFromNode(CString("Animate"));
ROUTE87->setFromField(CString("c"));
ROUTE87->setToNode(CString("x_ite"));
ROUTE87->setToField(CString("c"));
Scene15->addChild(ROUTE87);

ROUTE* ROUTE88 = new ROUTE();
ROUTE88->setFromNode(CString("Animate"));
ROUTE88->setFromField(CString("d"));
ROUTE88->setToNode(CString("x_ite"));
ROUTE88->setToField(CString("d"));
Scene15->addChild(ROUTE88);

ROUTE* ROUTE89 = new ROUTE();
ROUTE89->setFromNode(CString("Animate"));
ROUTE89->setFromField(CString("pdelta"));
ROUTE89->setToNode(CString("x_ite"));
ROUTE89->setToField(CString("pdelta"));
Scene15->addChild(ROUTE89);

ROUTE* ROUTE90 = new ROUTE();
ROUTE90->setFromNode(CString("Animate"));
ROUTE90->setFromField(CString("tdelta"));
ROUTE90->setToNode(CString("x_ite"));
ROUTE90->setToField(CString("tdelta"));
Scene15->addChild(ROUTE90);

ROUTE* ROUTE91 = new ROUTE();
ROUTE91->setFromNode(CString("Animate"));
ROUTE91->setFromField(CString("a"));
ROUTE91->setToNode(CString("x3dom"));
ROUTE91->setToField(CString("a"));
Scene15->addChild(ROUTE91);

ROUTE* ROUTE92 = new ROUTE();
ROUTE92->setFromNode(CString("Animate"));
ROUTE92->setFromField(CString("b"));
ROUTE92->setToNode(CString("x3dom"));
ROUTE92->setToField(CString("b"));
Scene15->addChild(ROUTE92);

ROUTE* ROUTE93 = new ROUTE();
ROUTE93->setFromNode(CString("Animate"));
ROUTE93->setFromField(CString("c"));
ROUTE93->setToNode(CString("x3dom"));
ROUTE93->setToField(CString("c"));
Scene15->addChild(ROUTE93);

ROUTE* ROUTE94 = new ROUTE();
ROUTE94->setFromNode(CString("Animate"));
ROUTE94->setFromField(CString("d"));
ROUTE94->setToNode(CString("x3dom"));
ROUTE94->setToField(CString("d"));
Scene15->addChild(ROUTE94);

ROUTE* ROUTE95 = new ROUTE();
ROUTE95->setFromNode(CString("Animate"));
ROUTE95->setFromField(CString("pdelta"));
ROUTE95->setToNode(CString("x3dom"));
ROUTE95->setToField(CString("pdelta"));
Scene15->addChild(ROUTE95);

ROUTE* ROUTE96 = new ROUTE();
ROUTE96->setFromNode(CString("Animate"));
ROUTE96->setFromField(CString("tdelta"));
ROUTE96->setToNode(CString("x3dom"));
ROUTE96->setToField(CString("tdelta"));
Scene15->addChild(ROUTE96);

X3D0->setScene(Scene15);

}

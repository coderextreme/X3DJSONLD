/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/stylesheets/cpp/concretes.h"
int main(int argc, char ** argv) {
CX3DScene m_pScene;
CBrowser browser = X3D.getBrowser();
CX3D* X3D0 = new CX3D();
CGroup* group = (CGroup*)(m_pScene.createNode("Group"));
group->addChildren(X3D0);
X3D0->setProfile("Immersive");
X3D0->setVersion("4.0");
Chead* head1 = new Chead();
Ccomponent* component2 = new Ccomponent();
component2->setName("Scripting");
component2->setLevel(1);
head1->addComponent(*component2);

Ccomponent* component3 = new Ccomponent();
component3->setName("EnvironmentalEffects");
component3->setLevel(3);
head1->addComponent(*component3);

Ccomponent* component4 = new Ccomponent();
component4->setName("Shaders");
component4->setLevel(1);
head1->addComponent(*component4);

Ccomponent* component5 = new Ccomponent();
component5->setName("CubeMapTexturing");
component5->setLevel(1);
head1->addComponent(*component5);

Ccomponent* component6 = new Ccomponent();
component6->setName("Texturing");
component6->setLevel(1);
head1->addComponent(*component6);

Ccomponent* component7 = new Ccomponent();
component7->setName("Rendering");
component7->setLevel(1);
head1->addComponent(*component7);

Ccomponent* component8 = new Ccomponent();
component8->setName("Shape");
component8->setLevel(4);
head1->addComponent(*component8);

Ccomponent* component9 = new Ccomponent();
component9->setName("Grouping");
component9->setLevel(3);
head1->addComponent(*component9);

Ccomponent* component10 = new Ccomponent();
component10->setName("Core");
component10->setLevel(1);
head1->addComponent(*component10);

Cmeta* meta11 = new Cmeta();
meta11->setName("title");
meta11->setContent("mirror2.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("creator");
meta12->setContent("John Carlson");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("generator");
meta13->setContent("manual");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("identifier");
meta14->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("description");
meta15->setContent("a mirrored sphere");
head1->addMeta(*meta15);

X3D0->setHead(*head1);

CScene* Scene16 = new CScene();
CViewpoint* Viewpoint17 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint17->setPosition(new float[3]{0,5,100});
Viewpoint17->setDescription("Switch background and images texture");
group->addChildren(*Viewpoint17);

CBackground* Background18 = (CBackground *)(m_pScene.createNode("Background"));
Background18->setDEF("cube");
Background18->setLeftUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
Background18->setRightUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
Background18->setFrontUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
Background18->setBackUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
Background18->setTopUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
Background18->setBottomUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
group->addChildren(*Background18);

CTransform* Transform19 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape20 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance21 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material22 = (CMaterial *)(m_pScene.createNode("Material"));
Material22->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material22->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance21->setMaterial(*Material22);

CComposedCubeMapTexture* ComposedCubeMapTexture23 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
CImageTexture* ImageTexture24 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture24->setDEF("backShader");
ImageTexture24->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
ComposedCubeMapTexture23->setBack(*ImageTexture24);

CImageTexture* ImageTexture25 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture25->setDEF("bottomShader");
ImageTexture25->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
ComposedCubeMapTexture23->setBottom(*ImageTexture25);

CImageTexture* ImageTexture26 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture26->setDEF("frontShader");
ImageTexture26->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
ComposedCubeMapTexture23->setFront(*ImageTexture26);

CImageTexture* ImageTexture27 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture27->setDEF("leftShader");
ImageTexture27->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
ComposedCubeMapTexture23->setLeft(*ImageTexture27);

CImageTexture* ImageTexture28 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture28->setDEF("rightShader");
ImageTexture28->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
ComposedCubeMapTexture23->setRight(*ImageTexture28);

CImageTexture* ImageTexture29 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture29->setDEF("topShader");
ImageTexture29->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
ComposedCubeMapTexture23->setTop(*ImageTexture29);

Appearance21->setTexture(*ComposedCubeMapTexture23);

CComposedShader* ComposedShader30 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader30->setDEF("x_ite");
ComposedShader30->setLanguage("GLSL");
//http://hypertextbook.com/facts/2005/JustinChe.shtml
Cfield* field31 = new Cfield();
field31->setName("chromaticDispertion");
field31->setAccessType("inputOutput");
field31->setType("SFVec3f");
field31->setValue("0.98 1 1.033");
ComposedShader30->addField(*field31);

Cfield* field32 = new Cfield();
field32->setName("cube");
field32->setAccessType("inputOutput");
field32->setType("SFInt32");
field32->setValue("0");
ComposedShader30->addField(*field32);

Cfield* field33 = new Cfield();
field33->setName("bias");
field33->setAccessType("inputOutput");
field33->setType("SFFloat");
field33->setValue("0.5");
ComposedShader30->addField(*field33);

Cfield* field34 = new Cfield();
field34->setName("scale");
field34->setAccessType("inputOutput");
field34->setType("SFFloat");
field34->setValue("0.5");
ComposedShader30->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("power");
field35->setAccessType("inputOutput");
field35->setType("SFFloat");
field35->setValue("2");
ComposedShader30->addField(*field35);

CShaderPart* ShaderPart36 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart36->setUrl(new CString[2]{"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 2);
ShaderPart36->setType("VERTEX");
ComposedShader30->addParts(*ShaderPart36);

CShaderPart* ShaderPart37 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart37->setUrl(new CString[2]{"../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"}, 2);
ShaderPart37->setType("FRAGMENT");
ComposedShader30->addParts(*ShaderPart37);

Appearance21->addShaders(*ComposedShader30);

CComposedShader* ComposedShader38 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader38->setDEF("x3dom");
ComposedShader38->setLanguage("GLSL");
Cfield* field39 = new Cfield();
field39->setName("chromaticDispertion");
field39->setAccessType("inputOutput");
field39->setType("SFVec3f");
field39->setValue("0.98 1 1.033");
ComposedShader38->addField(*field39);

Cfield* field40 = new Cfield();
field40->setName("cube");
field40->setAccessType("inputOutput");
field40->setType("SFInt32");
field40->setValue("0");
ComposedShader38->addField(*field40);

Cfield* field41 = new Cfield();
field41->setName("bias");
field41->setAccessType("inputOutput");
field41->setType("SFFloat");
field41->setValue("0.5");
ComposedShader38->addField(*field41);

Cfield* field42 = new Cfield();
field42->setName("scale");
field42->setAccessType("inputOutput");
field42->setType("SFFloat");
field42->setValue("0.5");
ComposedShader38->addField(*field42);

Cfield* field43 = new Cfield();
field43->setName("power");
field43->setAccessType("inputOutput");
field43->setType("SFFloat");
field43->setValue("2");
ComposedShader38->addField(*field43);

CShaderPart* ShaderPart44 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart44->setUrl(new CString[2]{"../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ShaderPart44->setType("VERTEX");
ComposedShader38->addParts(*ShaderPart44);

CShaderPart* ShaderPart45 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart45->setUrl(new CString[2]{"../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"}, 2);
ShaderPart45->setType("FRAGMENT");
ComposedShader38->addParts(*ShaderPart45);

Appearance21->addShaders(*ComposedShader38);

Shape20->setAppearance(*Appearance21);

CSphere* Sphere46 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere46->setRadius(30);
Shape20->setGeometry(Sphere46);

Transform19->addChild(*Shape20);

CScript* Script47 = (CScript *)(m_pScene.createNode("Script"));
Script47->setDEF("UrlSelector");
Script47->setDirectOutput(True);
Cfield* field48 = new Cfield();
field48->setName("frontUrls");
field48->setType("MFString");
field48->setAccessType("initializeOnly");
field48->setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"");
Script47->addField(*field48);

Cfield* field49 = new Cfield();
field49->setName("backUrls");
field49->setType("MFString");
field49->setAccessType("initializeOnly");
field49->setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"");
Script47->addField(*field49);

Cfield* field50 = new Cfield();
field50->setName("leftUrls");
field50->setType("MFString");
field50->setAccessType("initializeOnly");
field50->setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"");
Script47->addField(*field50);

Cfield* field51 = new Cfield();
field51->setName("rightUrls");
field51->setType("MFString");
field51->setAccessType("initializeOnly");
field51->setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"");
Script47->addField(*field51);

Cfield* field52 = new Cfield();
field52->setName("topUrls");
field52->setType("MFString");
field52->setAccessType("initializeOnly");
field52->setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"");
Script47->addField(*field52);

Cfield* field53 = new Cfield();
field53->setName("bottomUrls");
field53->setType("MFString");
field53->setAccessType("initializeOnly");
field53->setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"");
Script47->addField(*field53);

Cfield* field54 = new Cfield();
field54->setName("front_changed");
field54->setType("MFString");
field54->setAccessType("outputOnly");
Script47->addField(*field54);

Cfield* field55 = new Cfield();
field55->setName("back_changed");
field55->setType("MFString");
field55->setAccessType("outputOnly");
Script47->addField(*field55);

Cfield* field56 = new Cfield();
field56->setName("left_changed");
field56->setType("MFString");
field56->setAccessType("outputOnly");
Script47->addField(*field56);

Cfield* field57 = new Cfield();
field57->setName("right_changed");
field57->setType("MFString");
field57->setAccessType("outputOnly");
Script47->addField(*field57);

Cfield* field58 = new Cfield();
field58->setName("top_changed");
field58->setType("MFString");
field58->setAccessType("outputOnly");
Script47->addField(*field58);

Cfield* field59 = new Cfield();
field59->setName("bottom_changed");
field59->setType("MFString");
field59->setAccessType("outputOnly");
Script47->addField(*field59);

Cfield* field60 = new Cfield();
field60->setName("set_fraction");
field60->setType("SFFloat");
field60->setAccessType("inputOnly");
Script47->addField(*field60);

Cfield* field61 = new Cfield();
field61->setName("old");
field61->setType("SFInt32");
field61->setAccessType("inputOutput");
field61->setValue("-1");
Script47->addField(*field61);


Script47.setSourceCode(`ecmascript:\n"+
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
Transform19->addChildren(*Script47);

CTimeSensor* TimeSensor62 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor62->setDEF("Clock");
TimeSensor62->setCycleInterval(45);
TimeSensor62->setLoop(True);
Transform19->addChildren(*TimeSensor62);

CROUTE* ROUTE63 = new CROUTE();
ROUTE63->setFromNode("Clock");
ROUTE63->setFromField("fraction_changed");
ROUTE63->setToNode("UrlSelector");
ROUTE63->setToField("set_fraction");
Transform19->addChildren(*ROUTE63);

CROUTE* ROUTE64 = new CROUTE();
ROUTE64->setFromNode("UrlSelector");
ROUTE64->setFromField("front_changed");
ROUTE64->setToNode("cube");
ROUTE64->setToField("frontUrl");
Transform19->addChildren(*ROUTE64);

CROUTE* ROUTE65 = new CROUTE();
ROUTE65->setFromNode("UrlSelector");
ROUTE65->setFromField("back_changed");
ROUTE65->setToNode("cube");
ROUTE65->setToField("backUrl");
Transform19->addChildren(*ROUTE65);

CROUTE* ROUTE66 = new CROUTE();
ROUTE66->setFromNode("UrlSelector");
ROUTE66->setFromField("left_changed");
ROUTE66->setToNode("cube");
ROUTE66->setToField("leftUrl");
Transform19->addChildren(*ROUTE66);

CROUTE* ROUTE67 = new CROUTE();
ROUTE67->setFromNode("UrlSelector");
ROUTE67->setFromField("right_changed");
ROUTE67->setToNode("cube");
ROUTE67->setToField("rightUrl");
Transform19->addChildren(*ROUTE67);

CROUTE* ROUTE68 = new CROUTE();
ROUTE68->setFromNode("UrlSelector");
ROUTE68->setFromField("top_changed");
ROUTE68->setToNode("cube");
ROUTE68->setToField("topUrl");
Transform19->addChildren(*ROUTE68);

CROUTE* ROUTE69 = new CROUTE();
ROUTE69->setFromNode("UrlSelector");
ROUTE69->setFromField("bottom_changed");
ROUTE69->setToNode("cube");
ROUTE69->setToField("bottomUrl");
Transform19->addChildren(*ROUTE69);

CROUTE* ROUTE70 = new CROUTE();
ROUTE70->setFromNode("UrlSelector");
ROUTE70->setFromField("front_changed");
ROUTE70->setToNode("frontShader");
ROUTE70->setToField("url");
Transform19->addChildren(*ROUTE70);

CROUTE* ROUTE71 = new CROUTE();
ROUTE71->setFromNode("UrlSelector");
ROUTE71->setFromField("back_changed");
ROUTE71->setToNode("backShader");
ROUTE71->setToField("url");
Transform19->addChildren(*ROUTE71);

CROUTE* ROUTE72 = new CROUTE();
ROUTE72->setFromNode("UrlSelector");
ROUTE72->setFromField("left_changed");
ROUTE72->setToNode("leftShader");
ROUTE72->setToField("url");
Transform19->addChildren(*ROUTE72);

CROUTE* ROUTE73 = new CROUTE();
ROUTE73->setFromNode("UrlSelector");
ROUTE73->setFromField("right_changed");
ROUTE73->setToNode("rightShader");
ROUTE73->setToField("url");
Transform19->addChildren(*ROUTE73);

CROUTE* ROUTE74 = new CROUTE();
ROUTE74->setFromNode("UrlSelector");
ROUTE74->setFromField("top_changed");
ROUTE74->setToNode("topShader");
ROUTE74->setToField("url");
Transform19->addChildren(*ROUTE74);

CROUTE* ROUTE75 = new CROUTE();
ROUTE75->setFromNode("UrlSelector");
ROUTE75->setFromField("bottom_changed");
ROUTE75->setToNode("bottomShader");
ROUTE75->setToField("url");
Transform19->addChildren(*ROUTE75);

group->addChildren(*Transform19);

X3D0->setScene(*Scene16);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

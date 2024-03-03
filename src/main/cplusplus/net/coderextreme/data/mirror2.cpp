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
component8->setName("Grouping");
component8->setLevel(3);
head1->addComponent(*component8);

Ccomponent* component9 = new Ccomponent();
component9->setName("Core");
component9->setLevel(1);
head1->addComponent(*component9);

//<component name='Shape' level='4'></component>
Cmeta* meta10 = new Cmeta();
meta10->setName("title");
meta10->setContent("mirror2.x3d");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("creator");
meta11->setContent("John Carlson");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("generator");
meta12->setContent("manual");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("identifier");
meta13->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("description");
meta14->setContent("a mirrored sphere");
head1->addMeta(*meta14);

X3D0->setHead(*head1);

CScene* Scene15 = new CScene();
CViewpoint* Viewpoint16 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint16->setPosition(new float[3]{0,5,100});
Viewpoint16->setDescription("Switch background and images texture");
group->addChildren(*Viewpoint16);

CBackground* Background17 = (CBackground *)(m_pScene.createNode("Background"));
Background17->setDEF("cube");
Background17->setLeftUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
Background17->setRightUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
Background17->setFrontUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
Background17->setBackUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
Background17->setTopUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
Background17->setBottomUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
group->addChildren(*Background17);

CTransform* Transform18 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape19 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance20 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material21 = (CMaterial *)(m_pScene.createNode("Material"));
Material21->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material21->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance20->setMaterial(*Material21);

CComposedCubeMapTexture* ComposedCubeMapTexture22 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
CImageTexture* ImageTexture23 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture23->setDEF("backShader");
ImageTexture23->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
ComposedCubeMapTexture22->setBackTexture(*ImageTexture23);

CImageTexture* ImageTexture24 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture24->setDEF("bottomShader");
ImageTexture24->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
ComposedCubeMapTexture22->setBottomTexture(*ImageTexture24);

CImageTexture* ImageTexture25 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture25->setDEF("frontShader");
ImageTexture25->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
ComposedCubeMapTexture22->setFrontTexture(*ImageTexture25);

CImageTexture* ImageTexture26 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture26->setDEF("leftShader");
ImageTexture26->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
ComposedCubeMapTexture22->setLeftTexture(*ImageTexture26);

CImageTexture* ImageTexture27 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture27->setDEF("rightShader");
ImageTexture27->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
ComposedCubeMapTexture22->setRightTexture(*ImageTexture27);

CImageTexture* ImageTexture28 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture28->setDEF("topShader");
ImageTexture28->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
ComposedCubeMapTexture22->setTopTexture(*ImageTexture28);

Appearance20->setTexture(*ComposedCubeMapTexture22);

CComposedShader* ComposedShader29 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader29->setDEF("x_ite");
ComposedShader29->setLanguage("GLSL");
//http://hypertextbook.com/facts/2005/JustinChe.shtml
Cfield* field30 = new Cfield();
field30->setName("chromaticDispertion");
field30->setAccessType("inputOutput");
field30->setType("SFVec3f");
field30->setValue("0.98 1 1.033");
ComposedShader29->addField(*field30);

Cfield* field31 = new Cfield();
field31->setName("cube");
field31->setAccessType("inputOutput");
field31->setType("SFInt32");
field31->setValue("0");
ComposedShader29->addField(*field31);

Cfield* field32 = new Cfield();
field32->setName("bias");
field32->setAccessType("inputOutput");
field32->setType("SFFloat");
field32->setValue("0.5");
ComposedShader29->addField(*field32);

Cfield* field33 = new Cfield();
field33->setName("scale");
field33->setAccessType("inputOutput");
field33->setType("SFFloat");
field33->setValue("0.5");
ComposedShader29->addField(*field33);

Cfield* field34 = new Cfield();
field34->setName("power");
field34->setAccessType("inputOutput");
field34->setType("SFFloat");
field34->setValue("2");
ComposedShader29->addField(*field34);

CShaderPart* ShaderPart35 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart35->setUrl(new CString[2]{"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 2);
ShaderPart35->setType("VERTEX");
ComposedShader29->addParts(*ShaderPart35);

CShaderPart* ShaderPart36 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart36->setUrl(new CString[2]{"../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"}, 2);
ShaderPart36->setType("FRAGMENT");
ComposedShader29->addParts(*ShaderPart36);

Appearance20->addShaders(*ComposedShader29);

CComposedShader* ComposedShader37 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader37->setDEF("x3dom");
ComposedShader37->setLanguage("GLSL");
Cfield* field38 = new Cfield();
field38->setName("chromaticDispertion");
field38->setAccessType("inputOutput");
field38->setType("SFVec3f");
field38->setValue("0.98 1 1.033");
ComposedShader37->addField(*field38);

Cfield* field39 = new Cfield();
field39->setName("cube");
field39->setAccessType("inputOutput");
field39->setType("SFInt32");
field39->setValue("0");
ComposedShader37->addField(*field39);

Cfield* field40 = new Cfield();
field40->setName("bias");
field40->setAccessType("inputOutput");
field40->setType("SFFloat");
field40->setValue("0.5");
ComposedShader37->addField(*field40);

Cfield* field41 = new Cfield();
field41->setName("scale");
field41->setAccessType("inputOutput");
field41->setType("SFFloat");
field41->setValue("0.5");
ComposedShader37->addField(*field41);

Cfield* field42 = new Cfield();
field42->setName("power");
field42->setAccessType("inputOutput");
field42->setType("SFFloat");
field42->setValue("2");
ComposedShader37->addField(*field42);

CShaderPart* ShaderPart43 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart43->setUrl(new CString[2]{"../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ShaderPart43->setType("VERTEX");
ComposedShader37->addParts(*ShaderPart43);

CShaderPart* ShaderPart44 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart44->setUrl(new CString[2]{"../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"}, 2);
ShaderPart44->setType("FRAGMENT");
ComposedShader37->addParts(*ShaderPart44);

Appearance20->addShaders(*ComposedShader37);

Shape19->setAppearance(*Appearance20);

CSphere* Sphere45 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere45->setRadius(30);
Shape19->setGeometry(Sphere45);

Transform18->addChild(*Shape19);

CScript* Script46 = (CScript *)(m_pScene.createNode("Script"));
Script46->setDEF("UrlSelector");
Script46->setDirectOutput(True);
Cfield* field47 = new Cfield();
field47->setName("frontUrls");
field47->setType("MFString");
field47->setAccessType("initializeOnly");
field47->setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"");
Script46->addField(*field47);

Cfield* field48 = new Cfield();
field48->setName("backUrls");
field48->setType("MFString");
field48->setAccessType("initializeOnly");
field48->setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"");
Script46->addField(*field48);

Cfield* field49 = new Cfield();
field49->setName("leftUrls");
field49->setType("MFString");
field49->setAccessType("initializeOnly");
field49->setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"");
Script46->addField(*field49);

Cfield* field50 = new Cfield();
field50->setName("rightUrls");
field50->setType("MFString");
field50->setAccessType("initializeOnly");
field50->setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"");
Script46->addField(*field50);

Cfield* field51 = new Cfield();
field51->setName("topUrls");
field51->setType("MFString");
field51->setAccessType("initializeOnly");
field51->setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"");
Script46->addField(*field51);

Cfield* field52 = new Cfield();
field52->setName("bottomUrls");
field52->setType("MFString");
field52->setAccessType("initializeOnly");
field52->setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"");
Script46->addField(*field52);

Cfield* field53 = new Cfield();
field53->setName("front_changed");
field53->setType("MFString");
field53->setAccessType("outputOnly");
Script46->addField(*field53);

Cfield* field54 = new Cfield();
field54->setName("back_changed");
field54->setType("MFString");
field54->setAccessType("outputOnly");
Script46->addField(*field54);

Cfield* field55 = new Cfield();
field55->setName("left_changed");
field55->setType("MFString");
field55->setAccessType("outputOnly");
Script46->addField(*field55);

Cfield* field56 = new Cfield();
field56->setName("right_changed");
field56->setType("MFString");
field56->setAccessType("outputOnly");
Script46->addField(*field56);

Cfield* field57 = new Cfield();
field57->setName("top_changed");
field57->setType("MFString");
field57->setAccessType("outputOnly");
Script46->addField(*field57);

Cfield* field58 = new Cfield();
field58->setName("bottom_changed");
field58->setType("MFString");
field58->setAccessType("outputOnly");
Script46->addField(*field58);

Cfield* field59 = new Cfield();
field59->setName("set_fraction");
field59->setType("SFFloat");
field59->setAccessType("inputOnly");
Script46->addField(*field59);

Cfield* field60 = new Cfield();
field60->setName("old");
field60->setType("SFInt32");
field60->setAccessType("inputOutput");
field60->setValue("-1");
Script46->addField(*field60);


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
Transform18->addChildren(*Script46);

CTimeSensor* TimeSensor61 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor61->setDEF("Clock");
TimeSensor61->setCycleInterval(45);
TimeSensor61->setLoop(True);
Transform18->addChildren(*TimeSensor61);

CROUTE* ROUTE62 = new CROUTE();
ROUTE62->setFromNode("Clock");
ROUTE62->setFromField("fraction_changed");
ROUTE62->setToNode("UrlSelector");
ROUTE62->setToField("set_fraction");
Transform18->addChildren(*ROUTE62);

CROUTE* ROUTE63 = new CROUTE();
ROUTE63->setFromNode("UrlSelector");
ROUTE63->setFromField("front_changed");
ROUTE63->setToNode("cube");
ROUTE63->setToField("frontUrl");
Transform18->addChildren(*ROUTE63);

CROUTE* ROUTE64 = new CROUTE();
ROUTE64->setFromNode("UrlSelector");
ROUTE64->setFromField("back_changed");
ROUTE64->setToNode("cube");
ROUTE64->setToField("backUrl");
Transform18->addChildren(*ROUTE64);

CROUTE* ROUTE65 = new CROUTE();
ROUTE65->setFromNode("UrlSelector");
ROUTE65->setFromField("left_changed");
ROUTE65->setToNode("cube");
ROUTE65->setToField("leftUrl");
Transform18->addChildren(*ROUTE65);

CROUTE* ROUTE66 = new CROUTE();
ROUTE66->setFromNode("UrlSelector");
ROUTE66->setFromField("right_changed");
ROUTE66->setToNode("cube");
ROUTE66->setToField("rightUrl");
Transform18->addChildren(*ROUTE66);

CROUTE* ROUTE67 = new CROUTE();
ROUTE67->setFromNode("UrlSelector");
ROUTE67->setFromField("top_changed");
ROUTE67->setToNode("cube");
ROUTE67->setToField("topUrl");
Transform18->addChildren(*ROUTE67);

CROUTE* ROUTE68 = new CROUTE();
ROUTE68->setFromNode("UrlSelector");
ROUTE68->setFromField("bottom_changed");
ROUTE68->setToNode("cube");
ROUTE68->setToField("bottomUrl");
Transform18->addChildren(*ROUTE68);

CROUTE* ROUTE69 = new CROUTE();
ROUTE69->setFromNode("UrlSelector");
ROUTE69->setFromField("front_changed");
ROUTE69->setToNode("frontShader");
ROUTE69->setToField("url");
Transform18->addChildren(*ROUTE69);

CROUTE* ROUTE70 = new CROUTE();
ROUTE70->setFromNode("UrlSelector");
ROUTE70->setFromField("back_changed");
ROUTE70->setToNode("backShader");
ROUTE70->setToField("url");
Transform18->addChildren(*ROUTE70);

CROUTE* ROUTE71 = new CROUTE();
ROUTE71->setFromNode("UrlSelector");
ROUTE71->setFromField("left_changed");
ROUTE71->setToNode("leftShader");
ROUTE71->setToField("url");
Transform18->addChildren(*ROUTE71);

CROUTE* ROUTE72 = new CROUTE();
ROUTE72->setFromNode("UrlSelector");
ROUTE72->setFromField("right_changed");
ROUTE72->setToNode("rightShader");
ROUTE72->setToField("url");
Transform18->addChildren(*ROUTE72);

CROUTE* ROUTE73 = new CROUTE();
ROUTE73->setFromNode("UrlSelector");
ROUTE73->setFromField("top_changed");
ROUTE73->setToNode("topShader");
ROUTE73->setToField("url");
Transform18->addChildren(*ROUTE73);

CROUTE* ROUTE74 = new CROUTE();
ROUTE74->setFromNode("UrlSelector");
ROUTE74->setFromField("bottom_changed");
ROUTE74->setToNode("bottomShader");
ROUTE74->setToField("url");
Transform18->addChildren(*ROUTE74);

group->addChildren(*Transform18);

X3D0->setScene(*Scene15);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "/c/x3d-code/www.web3d.org/x3d/languages/cpp/X3DLib/X3DLib.h"
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
component2->setName("EnvironmentalEffects");
component2->setLevel(3);
head1->addComponent(*component2);

Ccomponent* component3 = new Ccomponent();
component3->setName("Shaders");
component3->setLevel(1);
head1->addComponent(*component3);

Ccomponent* component4 = new Ccomponent();
component4->setName("CubeMapTexturing");
component4->setLevel(1);
head1->addComponent(*component4);

Ccomponent* component5 = new Ccomponent();
component5->setName("Texturing");
component5->setLevel(1);
head1->addComponent(*component5);

Ccomponent* component6 = new Ccomponent();
component6->setName("Rendering");
component6->setLevel(1);
head1->addComponent(*component6);

Ccomponent* component7 = new Ccomponent();
component7->setName("Shape");
component7->setLevel(1);
head1->addComponent(*component7);

Ccomponent* component8 = new Ccomponent();
component8->setName("Grouping");
component8->setLevel(1);
head1->addComponent(*component8);

Cmeta* meta9 = new Cmeta();
meta9->setName("title");
meta9->setContent("mirror.x3d");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("creator");
meta10->setContent("John Carlson");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("generator");
meta11->setContent("manual");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("identifier");
meta12->setContent("https://coderextreme.net/X3DJSONLD/mirror.x3d");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("description");
meta13->setContent("sphere with alternating backgrounds");
head1->addMeta(*meta13);

X3D0->setHead(*head1);

CScene* Scene14 = new CScene();
CViewpoint* Viewpoint15 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint15->setPosition(new float[3]{0,5,100});
Viewpoint15->setDescription("Switch background and images texture");
group->addChildren(*Viewpoint15);

CTextureBackground* TextureBackground16 = (CTextureBackground *)(m_pScene.createNode("TextureBackground"));
CImageTexture* ImageTexture17 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture17->setDEF("leftBackTexture");
ImageTexture17->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
TextureBackground16->setLeftTexture(*ImageTexture17);

CImageTexture* ImageTexture18 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture18->setDEF("rightBackTexture");
ImageTexture18->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
TextureBackground16->setRightTexture(*ImageTexture18);

CImageTexture* ImageTexture19 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture19->setDEF("frontBackTexture");
ImageTexture19->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
TextureBackground16->setFrontTexture(*ImageTexture19);

CImageTexture* ImageTexture20 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture20->setDEF("backBackTexture");
ImageTexture20->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
TextureBackground16->setBackTexture(*ImageTexture20);

CImageTexture* ImageTexture21 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture21->setDEF("topBackTexture");
ImageTexture21->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
TextureBackground16->setTopTexture(*ImageTexture21);

CImageTexture* ImageTexture22 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture22->setDEF("bottomBackTexture");
ImageTexture22->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
TextureBackground16->setBottomTexture(*ImageTexture22);

group->addChildren(*TextureBackground16);

CTransform* Transform23 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape24 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance25 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material26 = (CMaterial *)(m_pScene.createNode("Material"));
Material26->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material26->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance25->setMaterial(*Material26);

CComposedCubeMapTexture* ComposedCubeMapTexture27 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
CImageTexture* ImageTexture28 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture28->setDEF("backShader");
ImageTexture28->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
ComposedCubeMapTexture27->setBackTexture(*ImageTexture28);

CImageTexture* ImageTexture29 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture29->setDEF("bottomShader");
ImageTexture29->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
ComposedCubeMapTexture27->setBottomTexture(*ImageTexture29);

CImageTexture* ImageTexture30 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture30->setDEF("frontShader");
ImageTexture30->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
ComposedCubeMapTexture27->setFrontTexture(*ImageTexture30);

CImageTexture* ImageTexture31 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture31->setDEF("leftShader");
ImageTexture31->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
ComposedCubeMapTexture27->setLeftTexture(*ImageTexture31);

CImageTexture* ImageTexture32 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture32->setDEF("rightShader");
ImageTexture32->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
ComposedCubeMapTexture27->setRightTexture(*ImageTexture32);

CImageTexture* ImageTexture33 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture33->setDEF("topShader");
ImageTexture33->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
ComposedCubeMapTexture27->setTopTexture(*ImageTexture33);

Appearance25->setTexture(*ComposedCubeMapTexture27);

CComposedShader* ComposedShader34 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader34->setDEF("x3dom");
ComposedShader34->setLanguage("GLSL");
Cfield* field35 = new Cfield();
field35->setName("chromaticDispertion");
field35->setAccessType("inputOutput");
field35->setType("SFVec3f");
field35->setValue("0.98 1 1.033");
ComposedShader34->addField(*field35);

Cfield* field36 = new Cfield();
field36->setName("cube");
field36->setAccessType("inputOutput");
field36->setType("SFInt32");
field36->setValue("0");
ComposedShader34->addField(*field36);

Cfield* field37 = new Cfield();
field37->setName("bias");
field37->setAccessType("inputOutput");
field37->setType("SFFloat");
field37->setValue("0.5");
ComposedShader34->addField(*field37);

Cfield* field38 = new Cfield();
field38->setName("scale");
field38->setAccessType("inputOutput");
field38->setType("SFFloat");
field38->setValue("0.5");
ComposedShader34->addField(*field38);

Cfield* field39 = new Cfield();
field39->setName("power");
field39->setAccessType("inputOutput");
field39->setType("SFFloat");
field39->setValue("2");
ComposedShader34->addField(*field39);

CShaderPart* ShaderPart40 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart40->setUrl(new CString[2]{"../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ShaderPart40->setType("VERTEX");
ComposedShader34->addParts(*ShaderPart40);

CShaderPart* ShaderPart41 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart41->setUrl(new CString[2]{"../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"}, 2);
ShaderPart41->setType("FRAGMENT");
ComposedShader34->addParts(*ShaderPart41);

Appearance25->addShaders(*ComposedShader34);

CComposedShader* ComposedShader42 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader42->setDEF("x_ite");
ComposedShader42->setLanguage("GLSL");
//http://hypertextbook.com/facts/2005/JustinChe.shtml
Cfield* field43 = new Cfield();
field43->setName("chromaticDispertion");
field43->setAccessType("inputOutput");
field43->setType("SFVec3f");
field43->setValue("0.98 1 1.033");
ComposedShader42->addField(*field43);

Cfield* field44 = new Cfield();
field44->setName("cube");
field44->setAccessType("inputOutput");
field44->setType("SFInt32");
field44->setValue("0");
ComposedShader42->addField(*field44);

Cfield* field45 = new Cfield();
field45->setName("bias");
field45->setAccessType("inputOutput");
field45->setType("SFFloat");
field45->setValue("0.5");
ComposedShader42->addField(*field45);

Cfield* field46 = new Cfield();
field46->setName("scale");
field46->setAccessType("inputOutput");
field46->setType("SFFloat");
field46->setValue("0.5");
ComposedShader42->addField(*field46);

Cfield* field47 = new Cfield();
field47->setName("power");
field47->setAccessType("inputOutput");
field47->setType("SFFloat");
field47->setValue("2");
ComposedShader42->addField(*field47);

CShaderPart* ShaderPart48 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart48->setUrl(new CString[2]{"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 2);
ShaderPart48->setType("VERTEX");
ComposedShader42->addParts(*ShaderPart48);

CShaderPart* ShaderPart49 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart49->setUrl(new CString[2]{"../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"}, 2);
ShaderPart49->setType("FRAGMENT");
ComposedShader42->addParts(*ShaderPart49);

Appearance25->addShaders(*ComposedShader42);

Shape24->setAppearance(*Appearance25);

CSphere* Sphere50 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere50->setRadius(30);
Shape24->setGeometry(Sphere50);

Transform23->addChildren(*Shape24);

CScript* Script51 = (CScript *)(m_pScene.createNode("Script"));
Script51->setDEF("UrlSelector");
Script51->setDirectOutput(True);
Cfield* field52 = new Cfield();
field52->setName("frontUrls");
field52->setType("MFString");
field52->setAccessType("initializeOnly");
field52->setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"");
Script51->addField(*field52);

Cfield* field53 = new Cfield();
field53->setName("backUrls");
field53->setType("MFString");
field53->setAccessType("initializeOnly");
field53->setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"");
Script51->addField(*field53);

Cfield* field54 = new Cfield();
field54->setName("leftUrls");
field54->setType("MFString");
field54->setAccessType("initializeOnly");
field54->setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"");
Script51->addField(*field54);

Cfield* field55 = new Cfield();
field55->setName("rightUrls");
field55->setType("MFString");
field55->setAccessType("initializeOnly");
field55->setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"");
Script51->addField(*field55);

Cfield* field56 = new Cfield();
field56->setName("topUrls");
field56->setType("MFString");
field56->setAccessType("initializeOnly");
field56->setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"");
Script51->addField(*field56);

Cfield* field57 = new Cfield();
field57->setName("bottomUrls");
field57->setType("MFString");
field57->setAccessType("initializeOnly");
field57->setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"");
Script51->addField(*field57);

Cfield* field58 = new Cfield();
field58->setName("front_changed");
field58->setType("MFString");
field58->setAccessType("outputOnly");
Script51->addField(*field58);

Cfield* field59 = new Cfield();
field59->setName("back_changed");
field59->setType("MFString");
field59->setAccessType("outputOnly");
Script51->addField(*field59);

Cfield* field60 = new Cfield();
field60->setName("left_changed");
field60->setType("MFString");
field60->setAccessType("outputOnly");
Script51->addField(*field60);

Cfield* field61 = new Cfield();
field61->setName("right_changed");
field61->setType("MFString");
field61->setAccessType("outputOnly");
Script51->addField(*field61);

Cfield* field62 = new Cfield();
field62->setName("top_changed");
field62->setType("MFString");
field62->setAccessType("outputOnly");
Script51->addField(*field62);

Cfield* field63 = new Cfield();
field63->setName("bottom_changed");
field63->setType("MFString");
field63->setAccessType("outputOnly");
Script51->addField(*field63);

Cfield* field64 = new Cfield();
field64->setName("set_fraction");
field64->setType("SFFloat");
field64->setAccessType("inputOnly");
Script51->addField(*field64);

Cfield* field65 = new Cfield();
field65->setName("old");
field65->setType("SFInt32");
field65->setAccessType("inputOutput");
field65->setValue("-1");
Script51->addField(*field65);


Script51.setSourceCode(`ecmascript:\n"+
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
Transform23->addChildren(*Script51);

CTimeSensor* TimeSensor66 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor66->setDEF("Clock");
TimeSensor66->setCycleInterval(45);
TimeSensor66->setLoop(True);
Transform23->addChildren(*TimeSensor66);

CROUTE* ROUTE67 = new CROUTE();
ROUTE67->setFromNode("Clock");
ROUTE67->setFromField("fraction_changed");
ROUTE67->setToNode("UrlSelector");
ROUTE67->setToField("set_fraction");
Transform23->addChildren(*ROUTE67);

CROUTE* ROUTE68 = new CROUTE();
ROUTE68->setFromNode("UrlSelector");
ROUTE68->setFromField("front_changed");
ROUTE68->setToNode("frontBackTexture");
ROUTE68->setToField("url");
Transform23->addChildren(*ROUTE68);

CROUTE* ROUTE69 = new CROUTE();
ROUTE69->setFromNode("UrlSelector");
ROUTE69->setFromField("back_changed");
ROUTE69->setToNode("backBackTexture");
ROUTE69->setToField("url");
Transform23->addChildren(*ROUTE69);

CROUTE* ROUTE70 = new CROUTE();
ROUTE70->setFromNode("UrlSelector");
ROUTE70->setFromField("left_changed");
ROUTE70->setToNode("leftBackTexture");
ROUTE70->setToField("url");
Transform23->addChildren(*ROUTE70);

CROUTE* ROUTE71 = new CROUTE();
ROUTE71->setFromNode("UrlSelector");
ROUTE71->setFromField("right_changed");
ROUTE71->setToNode("rightBackTexture");
ROUTE71->setToField("url");
Transform23->addChildren(*ROUTE71);

CROUTE* ROUTE72 = new CROUTE();
ROUTE72->setFromNode("UrlSelector");
ROUTE72->setFromField("top_changed");
ROUTE72->setToNode("topBackTexture");
ROUTE72->setToField("url");
Transform23->addChildren(*ROUTE72);

CROUTE* ROUTE73 = new CROUTE();
ROUTE73->setFromNode("UrlSelector");
ROUTE73->setFromField("bottom_changed");
ROUTE73->setToNode("bottomBackTexture");
ROUTE73->setToField("url");
Transform23->addChildren(*ROUTE73);

CROUTE* ROUTE74 = new CROUTE();
ROUTE74->setFromNode("UrlSelector");
ROUTE74->setFromField("front_changed");
ROUTE74->setToNode("frontShader");
ROUTE74->setToField("url");
Transform23->addChildren(*ROUTE74);

CROUTE* ROUTE75 = new CROUTE();
ROUTE75->setFromNode("UrlSelector");
ROUTE75->setFromField("back_changed");
ROUTE75->setToNode("backShader");
ROUTE75->setToField("url");
Transform23->addChildren(*ROUTE75);

CROUTE* ROUTE76 = new CROUTE();
ROUTE76->setFromNode("UrlSelector");
ROUTE76->setFromField("left_changed");
ROUTE76->setToNode("leftShader");
ROUTE76->setToField("url");
Transform23->addChildren(*ROUTE76);

CROUTE* ROUTE77 = new CROUTE();
ROUTE77->setFromNode("UrlSelector");
ROUTE77->setFromField("right_changed");
ROUTE77->setToNode("rightShader");
ROUTE77->setToField("url");
Transform23->addChildren(*ROUTE77);

CROUTE* ROUTE78 = new CROUTE();
ROUTE78->setFromNode("UrlSelector");
ROUTE78->setFromField("top_changed");
ROUTE78->setToNode("topShader");
ROUTE78->setToField("url");
Transform23->addChildren(*ROUTE78);

CROUTE* ROUTE79 = new CROUTE();
ROUTE79->setFromNode("UrlSelector");
ROUTE79->setFromField("bottom_changed");
ROUTE79->setToNode("bottomShader");
ROUTE79->setToField("url");
Transform23->addChildren(*ROUTE79);

group->addChildren(*Transform23);

X3D0->setScene(*Scene14);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

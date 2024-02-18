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
meta10->setContent("mirror.x3d");
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
meta13->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/mirror.x3d");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("description");
meta14->setContent("sphere with alternating backgrounds");
head1->addMeta(*meta14);

X3D0->setHead(*head1);

CScene* Scene15 = new CScene();
CViewpoint* Viewpoint16 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint16->setPosition(new float[3]{0,5,100});
Viewpoint16->setDescription("Switch background and images texture");
group->addChildren(*Viewpoint16);

CTextureBackground* TextureBackground17 = (CTextureBackground *)(m_pScene.createNode("TextureBackground"));
CImageTexture* ImageTexture18 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture18->setDEF("leftBackgroundTexture");
ImageTexture18->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
TextureBackground17->setLeftTexture(*ImageTexture18);

CImageTexture* ImageTexture19 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture19->setDEF("rightBackgroundTexture");
ImageTexture19->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
TextureBackground17->setRightTexture(*ImageTexture19);

CImageTexture* ImageTexture20 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture20->setDEF("frontBackgroundTexture");
ImageTexture20->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
TextureBackground17->setFrontTexture(*ImageTexture20);

CImageTexture* ImageTexture21 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture21->setDEF("backBackgroundTexture");
ImageTexture21->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
TextureBackground17->setBackTexture(*ImageTexture21);

CImageTexture* ImageTexture22 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture22->setDEF("topBackgroundTexture");
ImageTexture22->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
TextureBackground17->setTopTexture(*ImageTexture22);

CImageTexture* ImageTexture23 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture23->setDEF("bottomBackgroundTexture");
ImageTexture23->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
TextureBackground17->setBottomTexture(*ImageTexture23);

group->addChildren(*TextureBackground17);

CTransform* Transform24 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape25 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance26 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material27 = (CMaterial *)(m_pScene.createNode("Material"));
Material27->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material27->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance26->setMaterial(*Material27);

CComposedCubeMapTexture* ComposedCubeMapTexture28 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
CImageTexture* ImageTexture29 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture29->setDEF("backShader");
ImageTexture29->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
ComposedCubeMapTexture28->setBack(*ImageTexture29);

CImageTexture* ImageTexture30 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture30->setDEF("bottomShader");
ImageTexture30->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
ComposedCubeMapTexture28->setBottom(*ImageTexture30);

CImageTexture* ImageTexture31 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture31->setDEF("frontShader");
ImageTexture31->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
ComposedCubeMapTexture28->setFront(*ImageTexture31);

CImageTexture* ImageTexture32 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture32->setDEF("leftShader");
ImageTexture32->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
ComposedCubeMapTexture28->setLeft(*ImageTexture32);

CImageTexture* ImageTexture33 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture33->setDEF("rightShader");
ImageTexture33->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
ComposedCubeMapTexture28->setRight(*ImageTexture33);

CImageTexture* ImageTexture34 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture34->setDEF("topShader");
ImageTexture34->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
ComposedCubeMapTexture28->setTop(*ImageTexture34);

Appearance26->setTexture(*ComposedCubeMapTexture28);

CComposedShader* ComposedShader35 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader35->setDEF("x3dom");
ComposedShader35->setLanguage("GLSL");
Cfield* field36 = new Cfield();
field36->setName("chromaticDispertion");
field36->setAccessType("inputOutput");
field36->setType("SFVec3f");
field36->setValue("0.98 1 1.033");
ComposedShader35->addField(*field36);

Cfield* field37 = new Cfield();
field37->setName("cube");
field37->setAccessType("inputOutput");
field37->setType("SFInt32");
field37->setValue("0");
ComposedShader35->addField(*field37);

Cfield* field38 = new Cfield();
field38->setName("bias");
field38->setAccessType("inputOutput");
field38->setType("SFFloat");
field38->setValue("0.5");
ComposedShader35->addField(*field38);

Cfield* field39 = new Cfield();
field39->setName("scale");
field39->setAccessType("inputOutput");
field39->setType("SFFloat");
field39->setValue("0.5");
ComposedShader35->addField(*field39);

Cfield* field40 = new Cfield();
field40->setName("power");
field40->setAccessType("inputOutput");
field40->setType("SFFloat");
field40->setValue("2");
ComposedShader35->addField(*field40);

CShaderPart* ShaderPart41 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart41->setUrl(new CString[2]{"../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ShaderPart41->setType("VERTEX");
ComposedShader35->addParts(*ShaderPart41);

CShaderPart* ShaderPart42 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart42->setUrl(new CString[2]{"../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"}, 2);
ShaderPart42->setType("FRAGMENT");
ComposedShader35->addParts(*ShaderPart42);

Appearance26->addShaders(*ComposedShader35);

CComposedShader* ComposedShader43 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader43->setDEF("x_ite");
ComposedShader43->setLanguage("GLSL");
//http://hypertextbook.com/facts/2005/JustinChe.shtml
Cfield* field44 = new Cfield();
field44->setName("chromaticDispertion");
field44->setAccessType("inputOutput");
field44->setType("SFVec3f");
field44->setValue("0.98 1 1.033");
ComposedShader43->addField(*field44);

Cfield* field45 = new Cfield();
field45->setName("cube");
field45->setAccessType("inputOutput");
field45->setType("SFInt32");
field45->setValue("0");
ComposedShader43->addField(*field45);

Cfield* field46 = new Cfield();
field46->setName("bias");
field46->setAccessType("inputOutput");
field46->setType("SFFloat");
field46->setValue("0.5");
ComposedShader43->addField(*field46);

Cfield* field47 = new Cfield();
field47->setName("scale");
field47->setAccessType("inputOutput");
field47->setType("SFFloat");
field47->setValue("0.5");
ComposedShader43->addField(*field47);

Cfield* field48 = new Cfield();
field48->setName("power");
field48->setAccessType("inputOutput");
field48->setType("SFFloat");
field48->setValue("2");
ComposedShader43->addField(*field48);

CShaderPart* ShaderPart49 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart49->setUrl(new CString[2]{"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 2);
ShaderPart49->setType("VERTEX");
ComposedShader43->addParts(*ShaderPart49);

CShaderPart* ShaderPart50 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart50->setUrl(new CString[2]{"../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"}, 2);
ShaderPart50->setType("FRAGMENT");
ComposedShader43->addParts(*ShaderPart50);

Appearance26->addShaders(*ComposedShader43);

Shape25->setAppearance(*Appearance26);

CSphere* Sphere51 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere51->setRadius(30);
Shape25->setGeometry(Sphere51);

Transform24->addChild(*Shape25);

CScript* Script52 = (CScript *)(m_pScene.createNode("Script"));
Script52->setDEF("UrlSelector");
Script52->setDirectOutput(True);
Cfield* field53 = new Cfield();
field53->setName("frontUrls");
field53->setType("MFString");
field53->setAccessType("initializeOnly");
field53->setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"");
Script52->addField(*field53);

Cfield* field54 = new Cfield();
field54->setName("backUrls");
field54->setType("MFString");
field54->setAccessType("initializeOnly");
field54->setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"");
Script52->addField(*field54);

Cfield* field55 = new Cfield();
field55->setName("leftUrls");
field55->setType("MFString");
field55->setAccessType("initializeOnly");
field55->setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"");
Script52->addField(*field55);

Cfield* field56 = new Cfield();
field56->setName("rightUrls");
field56->setType("MFString");
field56->setAccessType("initializeOnly");
field56->setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"");
Script52->addField(*field56);

Cfield* field57 = new Cfield();
field57->setName("topUrls");
field57->setType("MFString");
field57->setAccessType("initializeOnly");
field57->setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"");
Script52->addField(*field57);

Cfield* field58 = new Cfield();
field58->setName("bottomUrls");
field58->setType("MFString");
field58->setAccessType("initializeOnly");
field58->setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"");
Script52->addField(*field58);

Cfield* field59 = new Cfield();
field59->setName("front_changed");
field59->setType("MFString");
field59->setAccessType("outputOnly");
Script52->addField(*field59);

Cfield* field60 = new Cfield();
field60->setName("back_changed");
field60->setType("MFString");
field60->setAccessType("outputOnly");
Script52->addField(*field60);

Cfield* field61 = new Cfield();
field61->setName("left_changed");
field61->setType("MFString");
field61->setAccessType("outputOnly");
Script52->addField(*field61);

Cfield* field62 = new Cfield();
field62->setName("right_changed");
field62->setType("MFString");
field62->setAccessType("outputOnly");
Script52->addField(*field62);

Cfield* field63 = new Cfield();
field63->setName("top_changed");
field63->setType("MFString");
field63->setAccessType("outputOnly");
Script52->addField(*field63);

Cfield* field64 = new Cfield();
field64->setName("bottom_changed");
field64->setType("MFString");
field64->setAccessType("outputOnly");
Script52->addField(*field64);

Cfield* field65 = new Cfield();
field65->setName("set_fraction");
field65->setType("SFFloat");
field65->setAccessType("inputOnly");
Script52->addField(*field65);

Cfield* field66 = new Cfield();
field66->setName("old");
field66->setType("SFInt32");
field66->setAccessType("inputOutput");
field66->setValue("-1");
Script52->addField(*field66);


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
Transform24->addChildren(*Script52);

CTimeSensor* TimeSensor67 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor67->setDEF("Clock");
TimeSensor67->setCycleInterval(45);
TimeSensor67->setLoop(True);
Transform24->addChildren(*TimeSensor67);

CROUTE* ROUTE68 = new CROUTE();
ROUTE68->setFromNode("Clock");
ROUTE68->setFromField("fraction_changed");
ROUTE68->setToNode("UrlSelector");
ROUTE68->setToField("set_fraction");
Transform24->addChildren(*ROUTE68);

CROUTE* ROUTE69 = new CROUTE();
ROUTE69->setFromNode("UrlSelector");
ROUTE69->setFromField("front_changed");
ROUTE69->setToNode("frontBackgroundTexture");
ROUTE69->setToField("url");
Transform24->addChildren(*ROUTE69);

CROUTE* ROUTE70 = new CROUTE();
ROUTE70->setFromNode("UrlSelector");
ROUTE70->setFromField("back_changed");
ROUTE70->setToNode("backBackgroundTexture");
ROUTE70->setToField("url");
Transform24->addChildren(*ROUTE70);

CROUTE* ROUTE71 = new CROUTE();
ROUTE71->setFromNode("UrlSelector");
ROUTE71->setFromField("left_changed");
ROUTE71->setToNode("leftBackgroundTexture");
ROUTE71->setToField("url");
Transform24->addChildren(*ROUTE71);

CROUTE* ROUTE72 = new CROUTE();
ROUTE72->setFromNode("UrlSelector");
ROUTE72->setFromField("right_changed");
ROUTE72->setToNode("rightBackgroundTexture");
ROUTE72->setToField("url");
Transform24->addChildren(*ROUTE72);

CROUTE* ROUTE73 = new CROUTE();
ROUTE73->setFromNode("UrlSelector");
ROUTE73->setFromField("top_changed");
ROUTE73->setToNode("topBackgroundTexture");
ROUTE73->setToField("url");
Transform24->addChildren(*ROUTE73);

CROUTE* ROUTE74 = new CROUTE();
ROUTE74->setFromNode("UrlSelector");
ROUTE74->setFromField("bottom_changed");
ROUTE74->setToNode("bottomBackgroundTexture");
ROUTE74->setToField("url");
Transform24->addChildren(*ROUTE74);

CROUTE* ROUTE75 = new CROUTE();
ROUTE75->setFromNode("UrlSelector");
ROUTE75->setFromField("front_changed");
ROUTE75->setToNode("frontShader");
ROUTE75->setToField("url");
Transform24->addChildren(*ROUTE75);

CROUTE* ROUTE76 = new CROUTE();
ROUTE76->setFromNode("UrlSelector");
ROUTE76->setFromField("back_changed");
ROUTE76->setToNode("backShader");
ROUTE76->setToField("url");
Transform24->addChildren(*ROUTE76);

CROUTE* ROUTE77 = new CROUTE();
ROUTE77->setFromNode("UrlSelector");
ROUTE77->setFromField("left_changed");
ROUTE77->setToNode("leftShader");
ROUTE77->setToField("url");
Transform24->addChildren(*ROUTE77);

CROUTE* ROUTE78 = new CROUTE();
ROUTE78->setFromNode("UrlSelector");
ROUTE78->setFromField("right_changed");
ROUTE78->setToNode("rightShader");
ROUTE78->setToField("url");
Transform24->addChildren(*ROUTE78);

CROUTE* ROUTE79 = new CROUTE();
ROUTE79->setFromNode("UrlSelector");
ROUTE79->setFromField("top_changed");
ROUTE79->setToNode("topShader");
ROUTE79->setToField("url");
Transform24->addChildren(*ROUTE79);

CROUTE* ROUTE80 = new CROUTE();
ROUTE80->setFromNode("UrlSelector");
ROUTE80->setFromField("bottom_changed");
ROUTE80->setToNode("bottomShader");
ROUTE80->setToField("url");
Transform24->addChildren(*ROUTE80);

group->addChildren(*Transform24);

X3D0->setScene(*Scene15);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

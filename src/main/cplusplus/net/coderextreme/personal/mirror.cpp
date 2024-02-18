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
meta11->setContent("mirror.x3d");
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
meta14->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/mirror.x3d");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("description");
meta15->setContent("sphere with alternating backgrounds");
head1->addMeta(*meta15);

X3D0->setHead(*head1);

CScene* Scene16 = new CScene();
CViewpoint* Viewpoint17 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint17->setPosition(new float[3]{0,5,100});
Viewpoint17->setDescription("Switch background and images texture");
group->addChildren(*Viewpoint17);

CTextureBackground* TextureBackground18 = (CTextureBackground *)(m_pScene.createNode("TextureBackground"));
CImageTexture* ImageTexture19 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture19->setDEF("leftBackgroundTexture");
ImageTexture19->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
TextureBackground18->setLeftTexture(*ImageTexture19);

CImageTexture* ImageTexture20 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture20->setDEF("rightBackgroundTexture");
ImageTexture20->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
TextureBackground18->setRightTexture(*ImageTexture20);

CImageTexture* ImageTexture21 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture21->setDEF("frontBackgroundTexture");
ImageTexture21->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
TextureBackground18->setFrontTexture(*ImageTexture21);

CImageTexture* ImageTexture22 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture22->setDEF("backBackgroundTexture");
ImageTexture22->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
TextureBackground18->setBackTexture(*ImageTexture22);

CImageTexture* ImageTexture23 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture23->setDEF("topBackgroundTexture");
ImageTexture23->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
TextureBackground18->setTopTexture(*ImageTexture23);

CImageTexture* ImageTexture24 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture24->setDEF("bottomBackgroundTexture");
ImageTexture24->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
TextureBackground18->setBottomTexture(*ImageTexture24);

group->addChildren(*TextureBackground18);

CTransform* Transform25 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape26 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance27 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material28 = (CMaterial *)(m_pScene.createNode("Material"));
Material28->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material28->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance27->setMaterial(*Material28);

CComposedCubeMapTexture* ComposedCubeMapTexture29 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
CImageTexture* ImageTexture30 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture30->setDEF("backShader");
ImageTexture30->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
ComposedCubeMapTexture29->setBack(*ImageTexture30);

CImageTexture* ImageTexture31 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture31->setDEF("bottomShader");
ImageTexture31->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
ComposedCubeMapTexture29->setBottom(*ImageTexture31);

CImageTexture* ImageTexture32 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture32->setDEF("frontShader");
ImageTexture32->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
ComposedCubeMapTexture29->setFront(*ImageTexture32);

CImageTexture* ImageTexture33 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture33->setDEF("leftShader");
ImageTexture33->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
ComposedCubeMapTexture29->setLeft(*ImageTexture33);

CImageTexture* ImageTexture34 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture34->setDEF("rightShader");
ImageTexture34->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
ComposedCubeMapTexture29->setRight(*ImageTexture34);

CImageTexture* ImageTexture35 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture35->setDEF("topShader");
ImageTexture35->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
ComposedCubeMapTexture29->setTop(*ImageTexture35);

Appearance27->setTexture(*ComposedCubeMapTexture29);

CComposedShader* ComposedShader36 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader36->setDEF("x3dom");
ComposedShader36->setLanguage("GLSL");
Cfield* field37 = new Cfield();
field37->setName("chromaticDispertion");
field37->setAccessType("inputOutput");
field37->setType("SFVec3f");
field37->setValue("0.98 1 1.033");
ComposedShader36->addField(*field37);

Cfield* field38 = new Cfield();
field38->setName("cube");
field38->setAccessType("inputOutput");
field38->setType("SFInt32");
field38->setValue("0");
ComposedShader36->addField(*field38);

Cfield* field39 = new Cfield();
field39->setName("bias");
field39->setAccessType("inputOutput");
field39->setType("SFFloat");
field39->setValue("0.5");
ComposedShader36->addField(*field39);

Cfield* field40 = new Cfield();
field40->setName("scale");
field40->setAccessType("inputOutput");
field40->setType("SFFloat");
field40->setValue("0.5");
ComposedShader36->addField(*field40);

Cfield* field41 = new Cfield();
field41->setName("power");
field41->setAccessType("inputOutput");
field41->setType("SFFloat");
field41->setValue("2");
ComposedShader36->addField(*field41);

CShaderPart* ShaderPart42 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart42->setUrl(new CString[2]{"../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ShaderPart42->setType("VERTEX");
ComposedShader36->addParts(*ShaderPart42);

CShaderPart* ShaderPart43 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart43->setUrl(new CString[2]{"../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"}, 2);
ShaderPart43->setType("FRAGMENT");
ComposedShader36->addParts(*ShaderPart43);

Appearance27->addShaders(*ComposedShader36);

CComposedShader* ComposedShader44 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader44->setDEF("x_ite");
ComposedShader44->setLanguage("GLSL");
//http://hypertextbook.com/facts/2005/JustinChe.shtml
Cfield* field45 = new Cfield();
field45->setName("chromaticDispertion");
field45->setAccessType("inputOutput");
field45->setType("SFVec3f");
field45->setValue("0.98 1 1.033");
ComposedShader44->addField(*field45);

Cfield* field46 = new Cfield();
field46->setName("cube");
field46->setAccessType("inputOutput");
field46->setType("SFInt32");
field46->setValue("0");
ComposedShader44->addField(*field46);

Cfield* field47 = new Cfield();
field47->setName("bias");
field47->setAccessType("inputOutput");
field47->setType("SFFloat");
field47->setValue("0.5");
ComposedShader44->addField(*field47);

Cfield* field48 = new Cfield();
field48->setName("scale");
field48->setAccessType("inputOutput");
field48->setType("SFFloat");
field48->setValue("0.5");
ComposedShader44->addField(*field48);

Cfield* field49 = new Cfield();
field49->setName("power");
field49->setAccessType("inputOutput");
field49->setType("SFFloat");
field49->setValue("2");
ComposedShader44->addField(*field49);

CShaderPart* ShaderPart50 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart50->setUrl(new CString[2]{"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 2);
ShaderPart50->setType("VERTEX");
ComposedShader44->addParts(*ShaderPart50);

CShaderPart* ShaderPart51 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart51->setUrl(new CString[2]{"../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"}, 2);
ShaderPart51->setType("FRAGMENT");
ComposedShader44->addParts(*ShaderPart51);

Appearance27->addShaders(*ComposedShader44);

Shape26->setAppearance(*Appearance27);

CSphere* Sphere52 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere52->setRadius(30);
Shape26->setGeometry(Sphere52);

Transform25->addChild(*Shape26);

CScript* Script53 = (CScript *)(m_pScene.createNode("Script"));
Script53->setDEF("UrlSelector");
Script53->setDirectOutput(True);
Cfield* field54 = new Cfield();
field54->setName("frontUrls");
field54->setType("MFString");
field54->setAccessType("initializeOnly");
field54->setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"");
Script53->addField(*field54);

Cfield* field55 = new Cfield();
field55->setName("backUrls");
field55->setType("MFString");
field55->setAccessType("initializeOnly");
field55->setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"");
Script53->addField(*field55);

Cfield* field56 = new Cfield();
field56->setName("leftUrls");
field56->setType("MFString");
field56->setAccessType("initializeOnly");
field56->setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"");
Script53->addField(*field56);

Cfield* field57 = new Cfield();
field57->setName("rightUrls");
field57->setType("MFString");
field57->setAccessType("initializeOnly");
field57->setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"");
Script53->addField(*field57);

Cfield* field58 = new Cfield();
field58->setName("topUrls");
field58->setType("MFString");
field58->setAccessType("initializeOnly");
field58->setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"");
Script53->addField(*field58);

Cfield* field59 = new Cfield();
field59->setName("bottomUrls");
field59->setType("MFString");
field59->setAccessType("initializeOnly");
field59->setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"");
Script53->addField(*field59);

Cfield* field60 = new Cfield();
field60->setName("front_changed");
field60->setType("MFString");
field60->setAccessType("outputOnly");
Script53->addField(*field60);

Cfield* field61 = new Cfield();
field61->setName("back_changed");
field61->setType("MFString");
field61->setAccessType("outputOnly");
Script53->addField(*field61);

Cfield* field62 = new Cfield();
field62->setName("left_changed");
field62->setType("MFString");
field62->setAccessType("outputOnly");
Script53->addField(*field62);

Cfield* field63 = new Cfield();
field63->setName("right_changed");
field63->setType("MFString");
field63->setAccessType("outputOnly");
Script53->addField(*field63);

Cfield* field64 = new Cfield();
field64->setName("top_changed");
field64->setType("MFString");
field64->setAccessType("outputOnly");
Script53->addField(*field64);

Cfield* field65 = new Cfield();
field65->setName("bottom_changed");
field65->setType("MFString");
field65->setAccessType("outputOnly");
Script53->addField(*field65);

Cfield* field66 = new Cfield();
field66->setName("set_fraction");
field66->setType("SFFloat");
field66->setAccessType("inputOnly");
Script53->addField(*field66);

Cfield* field67 = new Cfield();
field67->setName("old");
field67->setType("SFInt32");
field67->setAccessType("inputOutput");
field67->setValue("-1");
Script53->addField(*field67);


Script53.setSourceCode(`ecmascript:\n"+
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
Transform25->addChildren(*Script53);

CTimeSensor* TimeSensor68 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor68->setDEF("Clock");
TimeSensor68->setCycleInterval(45);
TimeSensor68->setLoop(True);
Transform25->addChildren(*TimeSensor68);

CROUTE* ROUTE69 = new CROUTE();
ROUTE69->setFromNode("Clock");
ROUTE69->setFromField("fraction_changed");
ROUTE69->setToNode("UrlSelector");
ROUTE69->setToField("set_fraction");
Transform25->addChildren(*ROUTE69);

CROUTE* ROUTE70 = new CROUTE();
ROUTE70->setFromNode("UrlSelector");
ROUTE70->setFromField("front_changed");
ROUTE70->setToNode("frontBackgroundTexture");
ROUTE70->setToField("url");
Transform25->addChildren(*ROUTE70);

CROUTE* ROUTE71 = new CROUTE();
ROUTE71->setFromNode("UrlSelector");
ROUTE71->setFromField("back_changed");
ROUTE71->setToNode("backBackgroundTexture");
ROUTE71->setToField("url");
Transform25->addChildren(*ROUTE71);

CROUTE* ROUTE72 = new CROUTE();
ROUTE72->setFromNode("UrlSelector");
ROUTE72->setFromField("left_changed");
ROUTE72->setToNode("leftBackgroundTexture");
ROUTE72->setToField("url");
Transform25->addChildren(*ROUTE72);

CROUTE* ROUTE73 = new CROUTE();
ROUTE73->setFromNode("UrlSelector");
ROUTE73->setFromField("right_changed");
ROUTE73->setToNode("rightBackgroundTexture");
ROUTE73->setToField("url");
Transform25->addChildren(*ROUTE73);

CROUTE* ROUTE74 = new CROUTE();
ROUTE74->setFromNode("UrlSelector");
ROUTE74->setFromField("top_changed");
ROUTE74->setToNode("topBackgroundTexture");
ROUTE74->setToField("url");
Transform25->addChildren(*ROUTE74);

CROUTE* ROUTE75 = new CROUTE();
ROUTE75->setFromNode("UrlSelector");
ROUTE75->setFromField("bottom_changed");
ROUTE75->setToNode("bottomBackgroundTexture");
ROUTE75->setToField("url");
Transform25->addChildren(*ROUTE75);

CROUTE* ROUTE76 = new CROUTE();
ROUTE76->setFromNode("UrlSelector");
ROUTE76->setFromField("front_changed");
ROUTE76->setToNode("frontShader");
ROUTE76->setToField("url");
Transform25->addChildren(*ROUTE76);

CROUTE* ROUTE77 = new CROUTE();
ROUTE77->setFromNode("UrlSelector");
ROUTE77->setFromField("back_changed");
ROUTE77->setToNode("backShader");
ROUTE77->setToField("url");
Transform25->addChildren(*ROUTE77);

CROUTE* ROUTE78 = new CROUTE();
ROUTE78->setFromNode("UrlSelector");
ROUTE78->setFromField("left_changed");
ROUTE78->setToNode("leftShader");
ROUTE78->setToField("url");
Transform25->addChildren(*ROUTE78);

CROUTE* ROUTE79 = new CROUTE();
ROUTE79->setFromNode("UrlSelector");
ROUTE79->setFromField("right_changed");
ROUTE79->setToNode("rightShader");
ROUTE79->setToField("url");
Transform25->addChildren(*ROUTE79);

CROUTE* ROUTE80 = new CROUTE();
ROUTE80->setFromNode("UrlSelector");
ROUTE80->setFromField("top_changed");
ROUTE80->setToNode("topShader");
ROUTE80->setToField("url");
Transform25->addChildren(*ROUTE80);

CROUTE* ROUTE81 = new CROUTE();
ROUTE81->setFromNode("UrlSelector");
ROUTE81->setFromField("bottom_changed");
ROUTE81->setToNode("bottomShader");
ROUTE81->setToField("url");
Transform25->addChildren(*ROUTE81);

group->addChildren(*Transform25);

X3D0->setScene(*Scene16);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

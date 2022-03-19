/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Concretes.h"
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
component2->setName("Shaders");
component2->setLevel(1);
head1->addComponent(*component2);

Ccomponent* component3 = new Ccomponent();
component3->setName("CubeMapTexturing");
component3->setLevel(1);
head1->addComponent(*component3);

Ccomponent* component4 = new Ccomponent();
component4->setName("Texturing");
component4->setLevel(1);
head1->addComponent(*component4);

Ccomponent* component5 = new Ccomponent();
component5->setName("Rendering");
component5->setLevel(1);
head1->addComponent(*component5);

Ccomponent* component6 = new Ccomponent();
component6->setName("Shape");
component6->setLevel(4);
head1->addComponent(*component6);

Ccomponent* component7 = new Ccomponent();
component7->setName("Grouping");
component7->setLevel(3);
head1->addComponent(*component7);

Cmeta* meta8 = new Cmeta();
meta8->setName("title");
meta8->setContent("mirror2.x3d");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("creator");
meta9->setContent("John Carlson");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("generator");
meta10->setContent("manual");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("identifier");
meta11->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("description");
meta12->setContent("a mirrored sphere");
head1->addMeta(*meta12);

X3D0->setHead(*head1);

CScene* Scene13 = new CScene();
CViewpoint* Viewpoint14 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint14->setPosition(new float[3]{0,5,100});
Viewpoint14->setDescription("Switch background and images texture");
group->addChildren(*Viewpoint14);

CBackground* Background15 = (CBackground *)(m_pScene.createNode("Background"));
Background15->setDEF("cube");
Background15->setLeftUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
Background15->setRightUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
Background15->setFrontUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
Background15->setBackUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
Background15->setTopUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
Background15->setBottomUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
group->addChildren(*Background15);

CTransform* Transform16 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape17 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance18 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material19 = (CMaterial *)(m_pScene.createNode("Material"));
Material19->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material19->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance18->setMaterial(*Material19);

CComposedCubeMapTexture* ComposedCubeMapTexture20 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
CImageTexture* ImageTexture21 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture21->setDEF("backShader");
ImageTexture21->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
ComposedCubeMapTexture20->setBack(*ImageTexture21);

CImageTexture* ImageTexture22 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture22->setDEF("bottomShader");
ImageTexture22->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
ComposedCubeMapTexture20->setBottom(*ImageTexture22);

CImageTexture* ImageTexture23 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture23->setDEF("frontShader");
ImageTexture23->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
ComposedCubeMapTexture20->setFront(*ImageTexture23);

CImageTexture* ImageTexture24 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture24->setDEF("leftShader");
ImageTexture24->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
ComposedCubeMapTexture20->setLeft(*ImageTexture24);

CImageTexture* ImageTexture25 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture25->setDEF("rightShader");
ImageTexture25->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
ComposedCubeMapTexture20->setRight(*ImageTexture25);

CImageTexture* ImageTexture26 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture26->setDEF("topShader");
ImageTexture26->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
ComposedCubeMapTexture20->setTop(*ImageTexture26);

Appearance18->setTexture(*ComposedCubeMapTexture20);

CComposedShader* ComposedShader27 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader27->setDEF("x_ite");
ComposedShader27->setLanguage("GLSL");
//http://hypertextbook.com/facts/2005/JustinChe.shtml
Cfield* field28 = new Cfield();
field28->setName("chromaticDispertion");
field28->setAccessType("inputOutput");
field28->setType("SFVec3f");
field28->setValue("0.98 1 1.033");
ComposedShader27->addField(*field28);

Cfield* field29 = new Cfield();
field29->setName("cube");
field29->setAccessType("inputOutput");
field29->setType("SFInt32");
field29->setValue("0");
ComposedShader27->addField(*field29);

Cfield* field30 = new Cfield();
field30->setName("bias");
field30->setAccessType("inputOutput");
field30->setType("SFFloat");
field30->setValue("0.5");
ComposedShader27->addField(*field30);

Cfield* field31 = new Cfield();
field31->setName("scale");
field31->setAccessType("inputOutput");
field31->setType("SFFloat");
field31->setValue("0.5");
ComposedShader27->addField(*field31);

Cfield* field32 = new Cfield();
field32->setName("power");
field32->setAccessType("inputOutput");
field32->setType("SFFloat");
field32->setValue("2");
ComposedShader27->addField(*field32);

CShaderPart* ShaderPart33 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart33->setUrl(new CString[2]{"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 2);
ShaderPart33->setType("VERTEX");
ComposedShader27->addParts(*ShaderPart33);

CShaderPart* ShaderPart34 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart34->setUrl(new CString[2]{"../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"}, 2);
ShaderPart34->setType("FRAGMENT");
ComposedShader27->addParts(*ShaderPart34);

Appearance18->addShaders(*ComposedShader27);

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

Appearance18->addShaders(*ComposedShader35);

Shape17->setAppearance(*Appearance18);

CSphere* Sphere43 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere43->setRadius(30);
Shape17->setGeometry(Sphere43);

Transform16->addChildren(*Shape17);

CScript* Script44 = (CScript *)(m_pScene.createNode("Script"));
Script44->setDEF("UrlSelector");
Script44->setDirectOutput(True);
Cfield* field45 = new Cfield();
field45->setName("frontUrls");
field45->setType("MFString");
field45->setAccessType("initializeOnly");
field45->setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"");
Script44->addField(*field45);

Cfield* field46 = new Cfield();
field46->setName("backUrls");
field46->setType("MFString");
field46->setAccessType("initializeOnly");
field46->setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"");
Script44->addField(*field46);

Cfield* field47 = new Cfield();
field47->setName("leftUrls");
field47->setType("MFString");
field47->setAccessType("initializeOnly");
field47->setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"");
Script44->addField(*field47);

Cfield* field48 = new Cfield();
field48->setName("rightUrls");
field48->setType("MFString");
field48->setAccessType("initializeOnly");
field48->setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"");
Script44->addField(*field48);

Cfield* field49 = new Cfield();
field49->setName("topUrls");
field49->setType("MFString");
field49->setAccessType("initializeOnly");
field49->setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"");
Script44->addField(*field49);

Cfield* field50 = new Cfield();
field50->setName("bottomUrls");
field50->setType("MFString");
field50->setAccessType("initializeOnly");
field50->setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"");
Script44->addField(*field50);

Cfield* field51 = new Cfield();
field51->setName("front_changed");
field51->setType("MFString");
field51->setAccessType("outputOnly");
Script44->addField(*field51);

Cfield* field52 = new Cfield();
field52->setName("back_changed");
field52->setType("MFString");
field52->setAccessType("outputOnly");
Script44->addField(*field52);

Cfield* field53 = new Cfield();
field53->setName("left_changed");
field53->setType("MFString");
field53->setAccessType("outputOnly");
Script44->addField(*field53);

Cfield* field54 = new Cfield();
field54->setName("right_changed");
field54->setType("MFString");
field54->setAccessType("outputOnly");
Script44->addField(*field54);

Cfield* field55 = new Cfield();
field55->setName("top_changed");
field55->setType("MFString");
field55->setAccessType("outputOnly");
Script44->addField(*field55);

Cfield* field56 = new Cfield();
field56->setName("bottom_changed");
field56->setType("MFString");
field56->setAccessType("outputOnly");
Script44->addField(*field56);

Cfield* field57 = new Cfield();
field57->setName("set_fraction");
field57->setType("SFFloat");
field57->setAccessType("inputOnly");
Script44->addField(*field57);

Cfield* field58 = new Cfield();
field58->setName("old");
field58->setType("SFInt32");
field58->setAccessType("inputOutput");
field58->setValue("-1");
Script44->addField(*field58);


Script44.setSourceCode(`ecmascript:\n"+
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
Transform16->addChildren(*Script44);

CTimeSensor* TimeSensor59 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor59->setDEF("Clock");
TimeSensor59->setCycleInterval(45);
TimeSensor59->setLoop(True);
Transform16->addChildren(*TimeSensor59);

CROUTE* ROUTE60 = new CROUTE();
ROUTE60->setFromNode("Clock");
ROUTE60->setFromField("fraction_changed");
ROUTE60->setToNode("UrlSelector");
ROUTE60->setToField("set_fraction");
Transform16->addChildren(*ROUTE60);

CROUTE* ROUTE61 = new CROUTE();
ROUTE61->setFromNode("UrlSelector");
ROUTE61->setFromField("front_changed");
ROUTE61->setToNode("cube");
ROUTE61->setToField("frontUrl");
Transform16->addChildren(*ROUTE61);

CROUTE* ROUTE62 = new CROUTE();
ROUTE62->setFromNode("UrlSelector");
ROUTE62->setFromField("back_changed");
ROUTE62->setToNode("cube");
ROUTE62->setToField("backUrl");
Transform16->addChildren(*ROUTE62);

CROUTE* ROUTE63 = new CROUTE();
ROUTE63->setFromNode("UrlSelector");
ROUTE63->setFromField("left_changed");
ROUTE63->setToNode("cube");
ROUTE63->setToField("leftUrl");
Transform16->addChildren(*ROUTE63);

CROUTE* ROUTE64 = new CROUTE();
ROUTE64->setFromNode("UrlSelector");
ROUTE64->setFromField("right_changed");
ROUTE64->setToNode("cube");
ROUTE64->setToField("rightUrl");
Transform16->addChildren(*ROUTE64);

CROUTE* ROUTE65 = new CROUTE();
ROUTE65->setFromNode("UrlSelector");
ROUTE65->setFromField("top_changed");
ROUTE65->setToNode("cube");
ROUTE65->setToField("topUrl");
Transform16->addChildren(*ROUTE65);

CROUTE* ROUTE66 = new CROUTE();
ROUTE66->setFromNode("UrlSelector");
ROUTE66->setFromField("bottom_changed");
ROUTE66->setToNode("cube");
ROUTE66->setToField("bottomUrl");
Transform16->addChildren(*ROUTE66);

CROUTE* ROUTE67 = new CROUTE();
ROUTE67->setFromNode("UrlSelector");
ROUTE67->setFromField("front_changed");
ROUTE67->setToNode("frontShader");
ROUTE67->setToField("url");
Transform16->addChildren(*ROUTE67);

CROUTE* ROUTE68 = new CROUTE();
ROUTE68->setFromNode("UrlSelector");
ROUTE68->setFromField("back_changed");
ROUTE68->setToNode("backShader");
ROUTE68->setToField("url");
Transform16->addChildren(*ROUTE68);

CROUTE* ROUTE69 = new CROUTE();
ROUTE69->setFromNode("UrlSelector");
ROUTE69->setFromField("left_changed");
ROUTE69->setToNode("leftShader");
ROUTE69->setToField("url");
Transform16->addChildren(*ROUTE69);

CROUTE* ROUTE70 = new CROUTE();
ROUTE70->setFromNode("UrlSelector");
ROUTE70->setFromField("right_changed");
ROUTE70->setToNode("rightShader");
ROUTE70->setToField("url");
Transform16->addChildren(*ROUTE70);

CROUTE* ROUTE71 = new CROUTE();
ROUTE71->setFromNode("UrlSelector");
ROUTE71->setFromField("top_changed");
ROUTE71->setToNode("topShader");
ROUTE71->setToField("url");
Transform16->addChildren(*ROUTE71);

CROUTE* ROUTE72 = new CROUTE();
ROUTE72->setFromNode("UrlSelector");
ROUTE72->setFromField("bottom_changed");
ROUTE72->setToNode("bottomShader");
ROUTE72->setToField("url");
Transform16->addChildren(*ROUTE72);

group->addChildren(*Transform16);

X3D0->setScene(*Scene13);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

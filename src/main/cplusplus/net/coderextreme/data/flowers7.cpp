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
meta8->setContent("flowers7.x3d");
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
meta11->setContent("https://coderextreme.net/X3DJSONLD/flowers7.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("description");
meta12->setContent("a flower");
head1->addMeta(*meta12);

X3D0->setHead(*head1);

CScene* Scene13 = new CScene();
CNavigationInfo* NavigationInfo14 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo14);

//Images courtesy of Paul Debevec's Light Probe Image Gallery
CBackground* Background15 = (CBackground *)(m_pScene.createNode("Background"));
Background15->setDEF("background");
Background15->setBackUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"}, 2);
Background15->setBottomUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"}, 2);
Background15->setFrontUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"}, 2);
Background15->setLeftUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"}, 2);
Background15->setRightUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"}, 2);
Background15->setTopUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"}, 2);
group->addChildren(*Background15);

CViewpoint* Viewpoint16 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint16->setPosition(new float[3]{0,0,40});
Viewpoint16->setDescription("Transparent rose");
group->addChildren(*Viewpoint16);

CTransform* Transform17 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape18 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance19 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material20 = (CMaterial *)(m_pScene.createNode("Material"));
Material20->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material20->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance19->setMaterial(*Material20);

CComposedCubeMapTexture* ComposedCubeMapTexture21 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture21->setDEF("texture");
CImageTexture* ImageTexture22 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture22->setDEF("backShader");
ImageTexture22->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"}, 2);
ComposedCubeMapTexture21->setBack(*ImageTexture22);

CImageTexture* ImageTexture23 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture23->setDEF("bottomShader");
ImageTexture23->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"}, 2);
ComposedCubeMapTexture21->setBottom(*ImageTexture23);

CImageTexture* ImageTexture24 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture24->setDEF("frontShader");
ImageTexture24->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"}, 2);
ComposedCubeMapTexture21->setFront(*ImageTexture24);

CImageTexture* ImageTexture25 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture25->setDEF("leftShader");
ImageTexture25->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"}, 2);
ComposedCubeMapTexture21->setLeft(*ImageTexture25);

CImageTexture* ImageTexture26 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture26->setDEF("rightShader");
ImageTexture26->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"}, 2);
ComposedCubeMapTexture21->setRight(*ImageTexture26);

CImageTexture* ImageTexture27 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture27->setDEF("topShader");
ImageTexture27->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"}, 2);
ComposedCubeMapTexture21->setTop(*ImageTexture27);

Appearance19->setTexture(*ComposedCubeMapTexture21);

CComposedShader* ComposedShader28 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader28->setDEF("x3dom");
ComposedShader28->setLanguage("GLSL");
Cfield* field29 = new Cfield();
field29->setName("cube");
field29->setType("SFInt32");
field29->setAccessType("inputOutput");
field29->setValue("0");
ComposedShader28->addField(*field29);

Cfield* field30 = new Cfield();
field30->setName("chromaticDispertion");
field30->setAccessType("initializeOnly");
field30->setType("SFVec3f");
field30->setValue("0.98 1 1.033");
ComposedShader28->addField(*field30);

Cfield* field31 = new Cfield();
field31->setName("bias");
field31->setType("SFFloat");
field31->setAccessType("inputOutput");
field31->setValue("0.5");
ComposedShader28->addField(*field31);

Cfield* field32 = new Cfield();
field32->setName("scale");
field32->setType("SFFloat");
field32->setAccessType("inputOutput");
field32->setValue("0.5");
ComposedShader28->addField(*field32);

Cfield* field33 = new Cfield();
field33->setName("power");
field33->setType("SFFloat");
field33->setAccessType("inputOutput");
field33->setValue("2");
ComposedShader28->addField(*field33);

Cfield* field34 = new Cfield();
field34->setName("a");
field34->setType("SFFloat");
field34->setAccessType("inputOutput");
field34->setValue("10");
ComposedShader28->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("b");
field35->setType("SFFloat");
field35->setAccessType("inputOutput");
field35->setValue("1");
ComposedShader28->addField(*field35);

Cfield* field36 = new Cfield();
field36->setName("c");
field36->setType("SFFloat");
field36->setAccessType("inputOutput");
field36->setValue("20");
ComposedShader28->addField(*field36);

Cfield* field37 = new Cfield();
field37->setName("d");
field37->setType("SFFloat");
field37->setAccessType("inputOutput");
field37->setValue("20");
ComposedShader28->addField(*field37);

Cfield* field38 = new Cfield();
field38->setName("tdelta");
field38->setType("SFFloat");
field38->setAccessType("inputOutput");
field38->setValue("0");
ComposedShader28->addField(*field38);

Cfield* field39 = new Cfield();
field39->setName("pdelta");
field39->setType("SFFloat");
field39->setAccessType("inputOutput");
field39->setValue("0");
ComposedShader28->addField(*field39);

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
CShaderPart* ShaderPart40 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart40->setUrl(new CString[2]{"../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"}, 2);
ShaderPart40->setType("VERTEX");
ComposedShader28->addParts(*ShaderPart40);

CShaderPart* ShaderPart41 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart41->setUrl(new CString[2]{"../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"}, 2);
ShaderPart41->setType("FRAGMENT");
ComposedShader28->addParts(*ShaderPart41);

Appearance19->addShaders(*ComposedShader28);

CComposedShader* ComposedShader42 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader42->setDEF("x_ite");
ComposedShader42->setLanguage("GLSL");
Cfield* field43 = new Cfield();
field43->setName("cube");
field43->setType("SFNode");
field43->setAccessType("inputOutput");
CComposedCubeMapTexture* ComposedCubeMapTexture44 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture44->setUSE("texture");
field43->addChildren(*ComposedCubeMapTexture44);

ComposedShader42->addField(*field43);

Cfield* field45 = new Cfield();
field45->setName("chromaticDispertion");
field45->setAccessType("initializeOnly");
field45->setType("SFVec3f");
field45->setValue("0.98 1 1.033");
ComposedShader42->addField(*field45);

Cfield* field46 = new Cfield();
field46->setName("bias");
field46->setType("SFFloat");
field46->setAccessType("inputOnly");
field46->setValue("0.5");
ComposedShader42->addField(*field46);

Cfield* field47 = new Cfield();
field47->setName("scale");
field47->setType("SFFloat");
field47->setAccessType("inputOnly");
field47->setValue("0.5");
ComposedShader42->addField(*field47);

Cfield* field48 = new Cfield();
field48->setName("power");
field48->setType("SFFloat");
field48->setAccessType("inputOnly");
field48->setValue("2");
ComposedShader42->addField(*field48);

Cfield* field49 = new Cfield();
field49->setName("a");
field49->setType("SFFloat");
field49->setAccessType("inputOnly");
field49->setValue("10");
ComposedShader42->addField(*field49);

Cfield* field50 = new Cfield();
field50->setName("b");
field50->setType("SFFloat");
field50->setAccessType("inputOnly");
field50->setValue("1");
ComposedShader42->addField(*field50);

Cfield* field51 = new Cfield();
field51->setName("c");
field51->setType("SFFloat");
field51->setAccessType("inputOnly");
field51->setValue("20");
ComposedShader42->addField(*field51);

Cfield* field52 = new Cfield();
field52->setName("d");
field52->setType("SFFloat");
field52->setAccessType("inputOnly");
field52->setValue("20");
ComposedShader42->addField(*field52);

Cfield* field53 = new Cfield();
field53->setName("tdelta");
field53->setType("SFFloat");
field53->setAccessType("inputOnly");
field53->setValue("0");
ComposedShader42->addField(*field53);

Cfield* field54 = new Cfield();
field54->setName("pdelta");
field54->setType("SFFloat");
field54->setAccessType("inputOnly");
field54->setValue("0");
ComposedShader42->addField(*field54);

CShaderPart* ShaderPart55 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart55->setUrl(new CString[2]{"../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"}, 2);
ShaderPart55->setType("VERTEX");
ComposedShader42->addParts(*ShaderPart55);

CShaderPart* ShaderPart56 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart56->setUrl(new CString[2]{"../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"}, 2);
ShaderPart56->setType("FRAGMENT");
ComposedShader42->addParts(*ShaderPart56);

Appearance19->addShaders(*ComposedShader42);

Shape18->setAppearance(*Appearance19);

CSphere* Sphere57 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape18->setGeometry(Sphere57);

Transform17->addChildren(*Shape18);

group->addChildren(*Transform17);

CScript* Script58 = (CScript *)(m_pScene.createNode("Script"));
Script58->setDEF("UrlSelector");
Script58->setDirectOutput(True);
Cfield* field59 = new Cfield();
field59->setName("frontUrls");
field59->setType("MFString");
field59->setAccessType("initializeOnly");
field59->setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"");
Script58->addField(*field59);

Cfield* field60 = new Cfield();
field60->setName("backUrls");
field60->setType("MFString");
field60->setAccessType("initializeOnly");
field60->setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"");
Script58->addField(*field60);

Cfield* field61 = new Cfield();
field61->setName("leftUrls");
field61->setType("MFString");
field61->setAccessType("initializeOnly");
field61->setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"");
Script58->addField(*field61);

Cfield* field62 = new Cfield();
field62->setName("rightUrls");
field62->setType("MFString");
field62->setAccessType("initializeOnly");
field62->setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"");
Script58->addField(*field62);

Cfield* field63 = new Cfield();
field63->setName("topUrls");
field63->setType("MFString");
field63->setAccessType("initializeOnly");
field63->setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"");
Script58->addField(*field63);

Cfield* field64 = new Cfield();
field64->setName("bottomUrls");
field64->setType("MFString");
field64->setAccessType("initializeOnly");
field64->setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"");
Script58->addField(*field64);

Cfield* field65 = new Cfield();
field65->setName("front");
field65->setType("MFString");
field65->setAccessType("inputOutput");
Script58->addField(*field65);

Cfield* field66 = new Cfield();
field66->setName("back");
field66->setType("MFString");
field66->setAccessType("inputOutput");
Script58->addField(*field66);

Cfield* field67 = new Cfield();
field67->setName("left");
field67->setType("MFString");
field67->setAccessType("inputOutput");
Script58->addField(*field67);

Cfield* field68 = new Cfield();
field68->setName("right");
field68->setType("MFString");
field68->setAccessType("inputOutput");
Script58->addField(*field68);

Cfield* field69 = new Cfield();
field69->setName("top");
field69->setType("MFString");
field69->setAccessType("inputOutput");
Script58->addField(*field69);

Cfield* field70 = new Cfield();
field70->setName("bottom");
field70->setType("MFString");
field70->setAccessType("inputOutput");
Script58->addField(*field70);

Cfield* field71 = new Cfield();
field71->setName("set_fraction");
field71->setType("SFFloat");
field71->setAccessType("inputOnly");
Script58->addField(*field71);

Cfield* field72 = new Cfield();
field72->setName("old");
field72->setType("SFInt32");
field72->setAccessType("inputOutput");
field72->setValue("-1");
Script58->addField(*field72);


Script58.setSourceCode(`ecmascript:\n"+
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
group->addChildren(*Script58);

//<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>
CScript* Script73 = (CScript *)(m_pScene.createNode("Script"));
Script73->setDEF("Animate");
Script73->setDirectOutput(True);
Cfield* field74 = new Cfield();
field74->setName("set_fraction");
field74->setType("SFFloat");
field74->setAccessType("inputOnly");
Script73->addField(*field74);

Cfield* field75 = new Cfield();
field75->setName("a");
field75->setType("SFFloat");
field75->setAccessType("inputOutput");
field75->setValue("10");
Script73->addField(*field75);

Cfield* field76 = new Cfield();
field76->setName("b");
field76->setType("SFFloat");
field76->setAccessType("inputOutput");
field76->setValue("1");
Script73->addField(*field76);

Cfield* field77 = new Cfield();
field77->setName("c");
field77->setType("SFFloat");
field77->setAccessType("inputOutput");
field77->setValue("20");
Script73->addField(*field77);

Cfield* field78 = new Cfield();
field78->setName("d");
field78->setType("SFFloat");
field78->setAccessType("inputOutput");
field78->setValue("20");
Script73->addField(*field78);

Cfield* field79 = new Cfield();
field79->setName("tdelta");
field79->setType("SFFloat");
field79->setAccessType("inputOutput");
field79->setValue("0");
Script73->addField(*field79);

Cfield* field80 = new Cfield();
field80->setName("pdelta");
field80->setType("SFFloat");
field80->setAccessType("inputOutput");
field80->setValue("0");
Script73->addField(*field80);


Script73.setSourceCode(`ecmascript:\n"+
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
group->addChildren(*Script73);

CTimeSensor* TimeSensor81 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor81->setDEF("TourTime");
TimeSensor81->setCycleInterval(5);
TimeSensor81->setLoop(True);
group->addChildren(*TimeSensor81);

CROUTE* ROUTE82 = new CROUTE();
ROUTE82->setFromNode("TourTime");
ROUTE82->setFromField("fraction_changed");
ROUTE82->setToNode("Animate");
ROUTE82->setToField("set_fraction");
group->addChildren(*ROUTE82);

CROUTE* ROUTE83 = new CROUTE();
ROUTE83->setFromNode("Animate");
ROUTE83->setFromField("a");
ROUTE83->setToNode("x_ite");
ROUTE83->setToField("a");
group->addChildren(*ROUTE83);

CROUTE* ROUTE84 = new CROUTE();
ROUTE84->setFromNode("Animate");
ROUTE84->setFromField("b");
ROUTE84->setToNode("x_ite");
ROUTE84->setToField("b");
group->addChildren(*ROUTE84);

CROUTE* ROUTE85 = new CROUTE();
ROUTE85->setFromNode("Animate");
ROUTE85->setFromField("c");
ROUTE85->setToNode("x_ite");
ROUTE85->setToField("c");
group->addChildren(*ROUTE85);

CROUTE* ROUTE86 = new CROUTE();
ROUTE86->setFromNode("Animate");
ROUTE86->setFromField("d");
ROUTE86->setToNode("x_ite");
ROUTE86->setToField("d");
group->addChildren(*ROUTE86);

CROUTE* ROUTE87 = new CROUTE();
ROUTE87->setFromNode("Animate");
ROUTE87->setFromField("pdelta");
ROUTE87->setToNode("x_ite");
ROUTE87->setToField("pdelta");
group->addChildren(*ROUTE87);

CROUTE* ROUTE88 = new CROUTE();
ROUTE88->setFromNode("Animate");
ROUTE88->setFromField("tdelta");
ROUTE88->setToNode("x_ite");
ROUTE88->setToField("tdelta");
group->addChildren(*ROUTE88);

CROUTE* ROUTE89 = new CROUTE();
ROUTE89->setFromNode("Animate");
ROUTE89->setFromField("a");
ROUTE89->setToNode("x3dom");
ROUTE89->setToField("a");
group->addChildren(*ROUTE89);

CROUTE* ROUTE90 = new CROUTE();
ROUTE90->setFromNode("Animate");
ROUTE90->setFromField("b");
ROUTE90->setToNode("x3dom");
ROUTE90->setToField("b");
group->addChildren(*ROUTE90);

CROUTE* ROUTE91 = new CROUTE();
ROUTE91->setFromNode("Animate");
ROUTE91->setFromField("c");
ROUTE91->setToNode("x3dom");
ROUTE91->setToField("c");
group->addChildren(*ROUTE91);

CROUTE* ROUTE92 = new CROUTE();
ROUTE92->setFromNode("Animate");
ROUTE92->setFromField("d");
ROUTE92->setToNode("x3dom");
ROUTE92->setToField("d");
group->addChildren(*ROUTE92);

CROUTE* ROUTE93 = new CROUTE();
ROUTE93->setFromNode("Animate");
ROUTE93->setFromField("pdelta");
ROUTE93->setToNode("x3dom");
ROUTE93->setToField("pdelta");
group->addChildren(*ROUTE93);

CROUTE* ROUTE94 = new CROUTE();
ROUTE94->setFromNode("Animate");
ROUTE94->setFromField("tdelta");
ROUTE94->setToNode("x3dom");
ROUTE94->setToField("tdelta");
group->addChildren(*ROUTE94);

X3D0->setScene(*Scene13);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

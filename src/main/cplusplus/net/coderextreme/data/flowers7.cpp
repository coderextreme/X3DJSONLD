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
meta11->setContent("flowers7.x3d");
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
meta14->setContent("https://coderextreme.net/X3DJSONLD/flowers7.x3d");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("description");
meta15->setContent("a flower");
head1->addMeta(*meta15);

X3D0->setHead(*head1);

CScene* Scene16 = new CScene();
CNavigationInfo* NavigationInfo17 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo17);

//Images courtesy of Paul Debevec's Light Probe Image Gallery
CBackground* Background18 = (CBackground *)(m_pScene.createNode("Background"));
Background18->setDEF("background");
Background18->setBackUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"}, 2);
Background18->setBottomUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"}, 2);
Background18->setFrontUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"}, 2);
Background18->setLeftUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"}, 2);
Background18->setRightUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"}, 2);
Background18->setTopUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"}, 2);
group->addChildren(*Background18);

CViewpoint* Viewpoint19 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint19->setPosition(new float[3]{0,0,40});
Viewpoint19->setDescription("Transparent rose");
group->addChildren(*Viewpoint19);

CTransform* Transform20 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape21 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance22 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material23 = (CMaterial *)(m_pScene.createNode("Material"));
Material23->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material23->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance22->setMaterial(*Material23);

CComposedCubeMapTexture* ComposedCubeMapTexture24 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture24->setDEF("texture");
CImageTexture* ImageTexture25 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture25->setDEF("backShader");
ImageTexture25->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"}, 2);
ComposedCubeMapTexture24->setBack(*ImageTexture25);

CImageTexture* ImageTexture26 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture26->setDEF("bottomShader");
ImageTexture26->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"}, 2);
ComposedCubeMapTexture24->setBottom(*ImageTexture26);

CImageTexture* ImageTexture27 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture27->setDEF("frontShader");
ImageTexture27->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"}, 2);
ComposedCubeMapTexture24->setFront(*ImageTexture27);

CImageTexture* ImageTexture28 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture28->setDEF("leftShader");
ImageTexture28->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"}, 2);
ComposedCubeMapTexture24->setLeft(*ImageTexture28);

CImageTexture* ImageTexture29 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture29->setDEF("rightShader");
ImageTexture29->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"}, 2);
ComposedCubeMapTexture24->setRight(*ImageTexture29);

CImageTexture* ImageTexture30 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture30->setDEF("topShader");
ImageTexture30->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"}, 2);
ComposedCubeMapTexture24->setTop(*ImageTexture30);

Appearance22->setTexture(*ComposedCubeMapTexture24);

CComposedShader* ComposedShader31 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader31->setDEF("x3dom");
ComposedShader31->setLanguage("GLSL");
Cfield* field32 = new Cfield();
field32->setName("cube");
field32->setType("SFInt32");
field32->setAccessType("inputOutput");
field32->setValue("0");
ComposedShader31->addField(*field32);

Cfield* field33 = new Cfield();
field33->setName("chromaticDispertion");
field33->setAccessType("initializeOnly");
field33->setType("SFVec3f");
field33->setValue("0.98 1 1.033");
ComposedShader31->addField(*field33);

Cfield* field34 = new Cfield();
field34->setName("bias");
field34->setType("SFFloat");
field34->setAccessType("inputOutput");
field34->setValue("0.5");
ComposedShader31->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("scale");
field35->setType("SFFloat");
field35->setAccessType("inputOutput");
field35->setValue("0.5");
ComposedShader31->addField(*field35);

Cfield* field36 = new Cfield();
field36->setName("power");
field36->setType("SFFloat");
field36->setAccessType("inputOutput");
field36->setValue("2");
ComposedShader31->addField(*field36);

Cfield* field37 = new Cfield();
field37->setName("a");
field37->setType("SFFloat");
field37->setAccessType("inputOutput");
field37->setValue("10");
ComposedShader31->addField(*field37);

Cfield* field38 = new Cfield();
field38->setName("b");
field38->setType("SFFloat");
field38->setAccessType("inputOutput");
field38->setValue("1");
ComposedShader31->addField(*field38);

Cfield* field39 = new Cfield();
field39->setName("c");
field39->setType("SFFloat");
field39->setAccessType("inputOutput");
field39->setValue("20");
ComposedShader31->addField(*field39);

Cfield* field40 = new Cfield();
field40->setName("d");
field40->setType("SFFloat");
field40->setAccessType("inputOutput");
field40->setValue("20");
ComposedShader31->addField(*field40);

Cfield* field41 = new Cfield();
field41->setName("tdelta");
field41->setType("SFFloat");
field41->setAccessType("inputOutput");
field41->setValue("0");
ComposedShader31->addField(*field41);

Cfield* field42 = new Cfield();
field42->setName("pdelta");
field42->setType("SFFloat");
field42->setAccessType("inputOutput");
field42->setValue("0");
ComposedShader31->addField(*field42);

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
CShaderPart* ShaderPart43 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart43->setUrl(new CString[2]{"../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"}, 2);
ShaderPart43->setType("VERTEX");
ComposedShader31->addParts(*ShaderPart43);

CShaderPart* ShaderPart44 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart44->setUrl(new CString[2]{"../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"}, 2);
ShaderPart44->setType("FRAGMENT");
ComposedShader31->addParts(*ShaderPart44);

Appearance22->addShaders(*ComposedShader31);

CComposedShader* ComposedShader45 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader45->setDEF("x_ite");
ComposedShader45->setLanguage("GLSL");
Cfield* field46 = new Cfield();
field46->setName("cube");
field46->setType("SFNode");
field46->setAccessType("inputOutput");
CComposedCubeMapTexture* ComposedCubeMapTexture47 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture47->setUSE("texture");
field46->addChildren(*ComposedCubeMapTexture47);

ComposedShader45->addField(*field46);

Cfield* field48 = new Cfield();
field48->setName("chromaticDispertion");
field48->setAccessType("initializeOnly");
field48->setType("SFVec3f");
field48->setValue("0.98 1 1.033");
ComposedShader45->addField(*field48);

Cfield* field49 = new Cfield();
field49->setName("bias");
field49->setType("SFFloat");
field49->setAccessType("inputOnly");
field49->setValue("0.5");
ComposedShader45->addField(*field49);

Cfield* field50 = new Cfield();
field50->setName("scale");
field50->setType("SFFloat");
field50->setAccessType("inputOnly");
field50->setValue("0.5");
ComposedShader45->addField(*field50);

Cfield* field51 = new Cfield();
field51->setName("power");
field51->setType("SFFloat");
field51->setAccessType("inputOnly");
field51->setValue("2");
ComposedShader45->addField(*field51);

Cfield* field52 = new Cfield();
field52->setName("a");
field52->setType("SFFloat");
field52->setAccessType("inputOnly");
field52->setValue("10");
ComposedShader45->addField(*field52);

Cfield* field53 = new Cfield();
field53->setName("b");
field53->setType("SFFloat");
field53->setAccessType("inputOnly");
field53->setValue("1");
ComposedShader45->addField(*field53);

Cfield* field54 = new Cfield();
field54->setName("c");
field54->setType("SFFloat");
field54->setAccessType("inputOnly");
field54->setValue("20");
ComposedShader45->addField(*field54);

Cfield* field55 = new Cfield();
field55->setName("d");
field55->setType("SFFloat");
field55->setAccessType("inputOnly");
field55->setValue("20");
ComposedShader45->addField(*field55);

Cfield* field56 = new Cfield();
field56->setName("tdelta");
field56->setType("SFFloat");
field56->setAccessType("inputOnly");
field56->setValue("0");
ComposedShader45->addField(*field56);

Cfield* field57 = new Cfield();
field57->setName("pdelta");
field57->setType("SFFloat");
field57->setAccessType("inputOnly");
field57->setValue("0");
ComposedShader45->addField(*field57);

CShaderPart* ShaderPart58 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart58->setUrl(new CString[2]{"../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"}, 2);
ShaderPart58->setType("VERTEX");
ComposedShader45->addParts(*ShaderPart58);

CShaderPart* ShaderPart59 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart59->setUrl(new CString[2]{"../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"}, 2);
ShaderPart59->setType("FRAGMENT");
ComposedShader45->addParts(*ShaderPart59);

Appearance22->addShaders(*ComposedShader45);

Shape21->setAppearance(*Appearance22);

CSphere* Sphere60 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape21->setGeometry(Sphere60);

Transform20->addChildren(*Shape21);

group->addChildren(*Transform20);

CScript* Script61 = (CScript *)(m_pScene.createNode("Script"));
Script61->setDEF("UrlSelector");
Script61->setDirectOutput(True);
Cfield* field62 = new Cfield();
field62->setName("frontUrls");
field62->setType("MFString");
field62->setAccessType("initializeOnly");
field62->setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"");
Script61->addField(*field62);

Cfield* field63 = new Cfield();
field63->setName("backUrls");
field63->setType("MFString");
field63->setAccessType("initializeOnly");
field63->setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"");
Script61->addField(*field63);

Cfield* field64 = new Cfield();
field64->setName("leftUrls");
field64->setType("MFString");
field64->setAccessType("initializeOnly");
field64->setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"");
Script61->addField(*field64);

Cfield* field65 = new Cfield();
field65->setName("rightUrls");
field65->setType("MFString");
field65->setAccessType("initializeOnly");
field65->setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"");
Script61->addField(*field65);

Cfield* field66 = new Cfield();
field66->setName("topUrls");
field66->setType("MFString");
field66->setAccessType("initializeOnly");
field66->setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"");
Script61->addField(*field66);

Cfield* field67 = new Cfield();
field67->setName("bottomUrls");
field67->setType("MFString");
field67->setAccessType("initializeOnly");
field67->setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"");
Script61->addField(*field67);

Cfield* field68 = new Cfield();
field68->setName("front");
field68->setType("MFString");
field68->setAccessType("inputOutput");
Script61->addField(*field68);

Cfield* field69 = new Cfield();
field69->setName("back");
field69->setType("MFString");
field69->setAccessType("inputOutput");
Script61->addField(*field69);

Cfield* field70 = new Cfield();
field70->setName("left");
field70->setType("MFString");
field70->setAccessType("inputOutput");
Script61->addField(*field70);

Cfield* field71 = new Cfield();
field71->setName("right");
field71->setType("MFString");
field71->setAccessType("inputOutput");
Script61->addField(*field71);

Cfield* field72 = new Cfield();
field72->setName("top");
field72->setType("MFString");
field72->setAccessType("inputOutput");
Script61->addField(*field72);

Cfield* field73 = new Cfield();
field73->setName("bottom");
field73->setType("MFString");
field73->setAccessType("inputOutput");
Script61->addField(*field73);

Cfield* field74 = new Cfield();
field74->setName("set_fraction");
field74->setType("SFFloat");
field74->setAccessType("inputOnly");
Script61->addField(*field74);

Cfield* field75 = new Cfield();
field75->setName("old");
field75->setType("SFInt32");
field75->setAccessType("inputOutput");
field75->setValue("-1");
Script61->addField(*field75);


Script61.setSourceCode(`ecmascript:\n"+
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
group->addChildren(*Script61);

//<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>
CScript* Script76 = (CScript *)(m_pScene.createNode("Script"));
Script76->setDEF("Animate");
Script76->setDirectOutput(True);
Cfield* field77 = new Cfield();
field77->setName("set_fraction");
field77->setType("SFFloat");
field77->setAccessType("inputOnly");
Script76->addField(*field77);

Cfield* field78 = new Cfield();
field78->setName("a");
field78->setType("SFFloat");
field78->setAccessType("inputOutput");
field78->setValue("10");
Script76->addField(*field78);

Cfield* field79 = new Cfield();
field79->setName("b");
field79->setType("SFFloat");
field79->setAccessType("inputOutput");
field79->setValue("1");
Script76->addField(*field79);

Cfield* field80 = new Cfield();
field80->setName("c");
field80->setType("SFFloat");
field80->setAccessType("inputOutput");
field80->setValue("20");
Script76->addField(*field80);

Cfield* field81 = new Cfield();
field81->setName("d");
field81->setType("SFFloat");
field81->setAccessType("inputOutput");
field81->setValue("20");
Script76->addField(*field81);

Cfield* field82 = new Cfield();
field82->setName("tdelta");
field82->setType("SFFloat");
field82->setAccessType("inputOutput");
field82->setValue("0");
Script76->addField(*field82);

Cfield* field83 = new Cfield();
field83->setName("pdelta");
field83->setType("SFFloat");
field83->setAccessType("inputOutput");
field83->setValue("0");
Script76->addField(*field83);


Script76.setSourceCode(`ecmascript:\n"+
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
group->addChildren(*Script76);

CTimeSensor* TimeSensor84 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor84->setDEF("TourTime");
TimeSensor84->setCycleInterval(5);
TimeSensor84->setLoop(True);
group->addChildren(*TimeSensor84);

CROUTE* ROUTE85 = new CROUTE();
ROUTE85->setFromNode("TourTime");
ROUTE85->setFromField("fraction_changed");
ROUTE85->setToNode("Animate");
ROUTE85->setToField("set_fraction");
group->addChildren(*ROUTE85);

CROUTE* ROUTE86 = new CROUTE();
ROUTE86->setFromNode("Animate");
ROUTE86->setFromField("a");
ROUTE86->setToNode("x_ite");
ROUTE86->setToField("a");
group->addChildren(*ROUTE86);

CROUTE* ROUTE87 = new CROUTE();
ROUTE87->setFromNode("Animate");
ROUTE87->setFromField("b");
ROUTE87->setToNode("x_ite");
ROUTE87->setToField("b");
group->addChildren(*ROUTE87);

CROUTE* ROUTE88 = new CROUTE();
ROUTE88->setFromNode("Animate");
ROUTE88->setFromField("c");
ROUTE88->setToNode("x_ite");
ROUTE88->setToField("c");
group->addChildren(*ROUTE88);

CROUTE* ROUTE89 = new CROUTE();
ROUTE89->setFromNode("Animate");
ROUTE89->setFromField("d");
ROUTE89->setToNode("x_ite");
ROUTE89->setToField("d");
group->addChildren(*ROUTE89);

CROUTE* ROUTE90 = new CROUTE();
ROUTE90->setFromNode("Animate");
ROUTE90->setFromField("pdelta");
ROUTE90->setToNode("x_ite");
ROUTE90->setToField("pdelta");
group->addChildren(*ROUTE90);

CROUTE* ROUTE91 = new CROUTE();
ROUTE91->setFromNode("Animate");
ROUTE91->setFromField("tdelta");
ROUTE91->setToNode("x_ite");
ROUTE91->setToField("tdelta");
group->addChildren(*ROUTE91);

CROUTE* ROUTE92 = new CROUTE();
ROUTE92->setFromNode("Animate");
ROUTE92->setFromField("a");
ROUTE92->setToNode("x3dom");
ROUTE92->setToField("a");
group->addChildren(*ROUTE92);

CROUTE* ROUTE93 = new CROUTE();
ROUTE93->setFromNode("Animate");
ROUTE93->setFromField("b");
ROUTE93->setToNode("x3dom");
ROUTE93->setToField("b");
group->addChildren(*ROUTE93);

CROUTE* ROUTE94 = new CROUTE();
ROUTE94->setFromNode("Animate");
ROUTE94->setFromField("c");
ROUTE94->setToNode("x3dom");
ROUTE94->setToField("c");
group->addChildren(*ROUTE94);

CROUTE* ROUTE95 = new CROUTE();
ROUTE95->setFromNode("Animate");
ROUTE95->setFromField("d");
ROUTE95->setToNode("x3dom");
ROUTE95->setToField("d");
group->addChildren(*ROUTE95);

CROUTE* ROUTE96 = new CROUTE();
ROUTE96->setFromNode("Animate");
ROUTE96->setFromField("pdelta");
ROUTE96->setToNode("x3dom");
ROUTE96->setToField("pdelta");
group->addChildren(*ROUTE96);

CROUTE* ROUTE97 = new CROUTE();
ROUTE97->setFromNode("Animate");
ROUTE97->setFromField("tdelta");
ROUTE97->setToNode("x3dom");
ROUTE97->setToField("tdelta");
group->addChildren(*ROUTE97);

X3D0->setScene(*Scene16);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

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
meta10->setContent("flowers7.x3d");
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
meta13->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("description");
meta14->setContent("a flower");
head1->addMeta(*meta14);

X3D0->setHead(*head1);

CScene* Scene15 = new CScene();
CNavigationInfo* NavigationInfo16 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo16);

//Images courtesy of Paul Debevec's Light Probe Image Gallery
CBackground* Background17 = (CBackground *)(m_pScene.createNode("Background"));
Background17->setDEF("background");
Background17->setBackUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
Background17->setBottomUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
Background17->setFrontUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
Background17->setLeftUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
Background17->setRightUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
Background17->setTopUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
group->addChildren(*Background17);

CViewpoint* Viewpoint18 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint18->setPosition(new float[3]{0,0,40});
Viewpoint18->setDescription("Transparent rose");
group->addChildren(*Viewpoint18);

CTransform* Transform19 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape20 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance21 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material22 = (CMaterial *)(m_pScene.createNode("Material"));
Material22->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material22->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance21->setMaterial(*Material22);

CComposedCubeMapTexture* ComposedCubeMapTexture23 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture23->setDEF("texture");
CImageTexture* ImageTexture24 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture24->setDEF("backShader");
ImageTexture24->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
ComposedCubeMapTexture23->setBackTexture(*ImageTexture24);

CImageTexture* ImageTexture25 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture25->setDEF("bottomShader");
ImageTexture25->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
ComposedCubeMapTexture23->setBottomTexture(*ImageTexture25);

CImageTexture* ImageTexture26 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture26->setDEF("frontShader");
ImageTexture26->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
ComposedCubeMapTexture23->setFrontTexture(*ImageTexture26);

CImageTexture* ImageTexture27 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture27->setDEF("leftShader");
ImageTexture27->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
ComposedCubeMapTexture23->setLeftTexture(*ImageTexture27);

CImageTexture* ImageTexture28 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture28->setDEF("rightShader");
ImageTexture28->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
ComposedCubeMapTexture23->setRightTexture(*ImageTexture28);

CImageTexture* ImageTexture29 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture29->setDEF("topShader");
ImageTexture29->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
ComposedCubeMapTexture23->setTopTexture(*ImageTexture29);

Appearance21->setTexture(*ComposedCubeMapTexture23);

CComposedShader* ComposedShader30 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader30->setDEF("x3dom");
ComposedShader30->setLanguage("GLSL");
Cfield* field31 = new Cfield();
field31->setName("cube");
field31->setType("SFInt32");
field31->setAccessType("inputOutput");
field31->setValue("0");
ComposedShader30->addField(*field31);

Cfield* field32 = new Cfield();
field32->setName("chromaticDispertion");
field32->setAccessType("initializeOnly");
field32->setType("SFVec3f");
field32->setValue("0.98 1 1.033");
ComposedShader30->addField(*field32);

Cfield* field33 = new Cfield();
field33->setName("bias");
field33->setType("SFFloat");
field33->setAccessType("inputOutput");
field33->setValue("0.5");
ComposedShader30->addField(*field33);

Cfield* field34 = new Cfield();
field34->setName("scale");
field34->setType("SFFloat");
field34->setAccessType("inputOutput");
field34->setValue("0.5");
ComposedShader30->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("power");
field35->setType("SFFloat");
field35->setAccessType("inputOutput");
field35->setValue("2");
ComposedShader30->addField(*field35);

Cfield* field36 = new Cfield();
field36->setName("a");
field36->setType("SFFloat");
field36->setAccessType("inputOutput");
field36->setValue("10");
ComposedShader30->addField(*field36);

Cfield* field37 = new Cfield();
field37->setName("b");
field37->setType("SFFloat");
field37->setAccessType("inputOutput");
field37->setValue("1");
ComposedShader30->addField(*field37);

Cfield* field38 = new Cfield();
field38->setName("c");
field38->setType("SFFloat");
field38->setAccessType("inputOutput");
field38->setValue("20");
ComposedShader30->addField(*field38);

Cfield* field39 = new Cfield();
field39->setName("d");
field39->setType("SFFloat");
field39->setAccessType("inputOutput");
field39->setValue("20");
ComposedShader30->addField(*field39);

Cfield* field40 = new Cfield();
field40->setName("tdelta");
field40->setType("SFFloat");
field40->setAccessType("inputOutput");
field40->setValue("0");
ComposedShader30->addField(*field40);

Cfield* field41 = new Cfield();
field41->setName("pdelta");
field41->setType("SFFloat");
field41->setAccessType("inputOutput");
field41->setValue("0");
ComposedShader30->addField(*field41);

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
CShaderPart* ShaderPart42 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart42->setUrl(new CString[2]{"../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"}, 2);
ShaderPart42->setType("VERTEX");
ComposedShader30->addParts(*ShaderPart42);

CShaderPart* ShaderPart43 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart43->setUrl(new CString[2]{"../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"}, 2);
ShaderPart43->setType("FRAGMENT");
ComposedShader30->addParts(*ShaderPart43);

Appearance21->addShaders(*ComposedShader30);

CComposedShader* ComposedShader44 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader44->setDEF("x_ite");
ComposedShader44->setLanguage("GLSL");
Cfield* field45 = new Cfield();
field45->setName("cube");
field45->setType("SFNode");
field45->setAccessType("inputOutput");
CComposedCubeMapTexture* ComposedCubeMapTexture46 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture46->setUSE("texture");
field45->addChildren(*ComposedCubeMapTexture46);

ComposedShader44->addField(*field45);

Cfield* field47 = new Cfield();
field47->setName("chromaticDispertion");
field47->setAccessType("initializeOnly");
field47->setType("SFVec3f");
field47->setValue("0.98 1 1.033");
ComposedShader44->addField(*field47);

Cfield* field48 = new Cfield();
field48->setName("bias");
field48->setType("SFFloat");
field48->setAccessType("inputOnly");
field48->setValue("0.5");
ComposedShader44->addField(*field48);

Cfield* field49 = new Cfield();
field49->setName("scale");
field49->setType("SFFloat");
field49->setAccessType("inputOnly");
field49->setValue("0.5");
ComposedShader44->addField(*field49);

Cfield* field50 = new Cfield();
field50->setName("power");
field50->setType("SFFloat");
field50->setAccessType("inputOnly");
field50->setValue("2");
ComposedShader44->addField(*field50);

Cfield* field51 = new Cfield();
field51->setName("a");
field51->setType("SFFloat");
field51->setAccessType("inputOnly");
field51->setValue("10");
ComposedShader44->addField(*field51);

Cfield* field52 = new Cfield();
field52->setName("b");
field52->setType("SFFloat");
field52->setAccessType("inputOnly");
field52->setValue("1");
ComposedShader44->addField(*field52);

Cfield* field53 = new Cfield();
field53->setName("c");
field53->setType("SFFloat");
field53->setAccessType("inputOnly");
field53->setValue("20");
ComposedShader44->addField(*field53);

Cfield* field54 = new Cfield();
field54->setName("d");
field54->setType("SFFloat");
field54->setAccessType("inputOnly");
field54->setValue("20");
ComposedShader44->addField(*field54);

Cfield* field55 = new Cfield();
field55->setName("tdelta");
field55->setType("SFFloat");
field55->setAccessType("inputOnly");
field55->setValue("0");
ComposedShader44->addField(*field55);

Cfield* field56 = new Cfield();
field56->setName("pdelta");
field56->setType("SFFloat");
field56->setAccessType("inputOnly");
field56->setValue("0");
ComposedShader44->addField(*field56);

CShaderPart* ShaderPart57 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart57->setUrl(new CString[2]{"../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"}, 2);
ShaderPart57->setType("VERTEX");
ComposedShader44->addParts(*ShaderPart57);

CShaderPart* ShaderPart58 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart58->setUrl(new CString[2]{"../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"}, 2);
ShaderPart58->setType("FRAGMENT");
ComposedShader44->addParts(*ShaderPart58);

Appearance21->addShaders(*ComposedShader44);

Shape20->setAppearance(*Appearance21);

CSphere* Sphere59 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape20->setGeometry(Sphere59);

Transform19->addChild(*Shape20);

group->addChildren(*Transform19);

CScript* Script60 = (CScript *)(m_pScene.createNode("Script"));
Script60->setDEF("UrlSelector");
Script60->setDirectOutput(True);
Cfield* field61 = new Cfield();
field61->setName("frontUrls");
field61->setType("MFString");
field61->setAccessType("initializeOnly");
field61->setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"");
Script60->addField(*field61);

Cfield* field62 = new Cfield();
field62->setName("backUrls");
field62->setType("MFString");
field62->setAccessType("initializeOnly");
field62->setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"");
Script60->addField(*field62);

Cfield* field63 = new Cfield();
field63->setName("leftUrls");
field63->setType("MFString");
field63->setAccessType("initializeOnly");
field63->setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"");
Script60->addField(*field63);

Cfield* field64 = new Cfield();
field64->setName("rightUrls");
field64->setType("MFString");
field64->setAccessType("initializeOnly");
field64->setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"");
Script60->addField(*field64);

Cfield* field65 = new Cfield();
field65->setName("topUrls");
field65->setType("MFString");
field65->setAccessType("initializeOnly");
field65->setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"");
Script60->addField(*field65);

Cfield* field66 = new Cfield();
field66->setName("bottomUrls");
field66->setType("MFString");
field66->setAccessType("initializeOnly");
field66->setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"");
Script60->addField(*field66);

Cfield* field67 = new Cfield();
field67->setName("front");
field67->setType("MFString");
field67->setAccessType("inputOutput");
Script60->addField(*field67);

Cfield* field68 = new Cfield();
field68->setName("back");
field68->setType("MFString");
field68->setAccessType("inputOutput");
Script60->addField(*field68);

Cfield* field69 = new Cfield();
field69->setName("left");
field69->setType("MFString");
field69->setAccessType("inputOutput");
Script60->addField(*field69);

Cfield* field70 = new Cfield();
field70->setName("right");
field70->setType("MFString");
field70->setAccessType("inputOutput");
Script60->addField(*field70);

Cfield* field71 = new Cfield();
field71->setName("top");
field71->setType("MFString");
field71->setAccessType("inputOutput");
Script60->addField(*field71);

Cfield* field72 = new Cfield();
field72->setName("bottom");
field72->setType("MFString");
field72->setAccessType("inputOutput");
Script60->addField(*field72);

Cfield* field73 = new Cfield();
field73->setName("set_fraction");
field73->setType("SFFloat");
field73->setAccessType("inputOnly");
Script60->addField(*field73);

Cfield* field74 = new Cfield();
field74->setName("old");
field74->setType("SFInt32");
field74->setAccessType("inputOutput");
field74->setValue("-1");
Script60->addField(*field74);


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
group->addChildren(*Script60);

//<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>
CScript* Script75 = (CScript *)(m_pScene.createNode("Script"));
Script75->setDEF("Animate");
Script75->setDirectOutput(True);
Cfield* field76 = new Cfield();
field76->setName("set_fraction");
field76->setType("SFFloat");
field76->setAccessType("inputOnly");
Script75->addField(*field76);

Cfield* field77 = new Cfield();
field77->setName("a");
field77->setType("SFFloat");
field77->setAccessType("inputOutput");
field77->setValue("10");
Script75->addField(*field77);

Cfield* field78 = new Cfield();
field78->setName("b");
field78->setType("SFFloat");
field78->setAccessType("inputOutput");
field78->setValue("1");
Script75->addField(*field78);

Cfield* field79 = new Cfield();
field79->setName("c");
field79->setType("SFFloat");
field79->setAccessType("inputOutput");
field79->setValue("20");
Script75->addField(*field79);

Cfield* field80 = new Cfield();
field80->setName("d");
field80->setType("SFFloat");
field80->setAccessType("inputOutput");
field80->setValue("20");
Script75->addField(*field80);

Cfield* field81 = new Cfield();
field81->setName("tdelta");
field81->setType("SFFloat");
field81->setAccessType("inputOutput");
field81->setValue("0");
Script75->addField(*field81);

Cfield* field82 = new Cfield();
field82->setName("pdelta");
field82->setType("SFFloat");
field82->setAccessType("inputOutput");
field82->setValue("0");
Script75->addField(*field82);


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
group->addChildren(*Script75);

CTimeSensor* TimeSensor83 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor83->setDEF("TourTime");
TimeSensor83->setCycleInterval(5);
TimeSensor83->setLoop(True);
group->addChildren(*TimeSensor83);

CROUTE* ROUTE84 = new CROUTE();
ROUTE84->setFromNode("TourTime");
ROUTE84->setFromField("fraction_changed");
ROUTE84->setToNode("Animate");
ROUTE84->setToField("set_fraction");
group->addChildren(*ROUTE84);

CROUTE* ROUTE85 = new CROUTE();
ROUTE85->setFromNode("Animate");
ROUTE85->setFromField("a");
ROUTE85->setToNode("x_ite");
ROUTE85->setToField("a");
group->addChildren(*ROUTE85);

CROUTE* ROUTE86 = new CROUTE();
ROUTE86->setFromNode("Animate");
ROUTE86->setFromField("b");
ROUTE86->setToNode("x_ite");
ROUTE86->setToField("b");
group->addChildren(*ROUTE86);

CROUTE* ROUTE87 = new CROUTE();
ROUTE87->setFromNode("Animate");
ROUTE87->setFromField("c");
ROUTE87->setToNode("x_ite");
ROUTE87->setToField("c");
group->addChildren(*ROUTE87);

CROUTE* ROUTE88 = new CROUTE();
ROUTE88->setFromNode("Animate");
ROUTE88->setFromField("d");
ROUTE88->setToNode("x_ite");
ROUTE88->setToField("d");
group->addChildren(*ROUTE88);

CROUTE* ROUTE89 = new CROUTE();
ROUTE89->setFromNode("Animate");
ROUTE89->setFromField("pdelta");
ROUTE89->setToNode("x_ite");
ROUTE89->setToField("pdelta");
group->addChildren(*ROUTE89);

CROUTE* ROUTE90 = new CROUTE();
ROUTE90->setFromNode("Animate");
ROUTE90->setFromField("tdelta");
ROUTE90->setToNode("x_ite");
ROUTE90->setToField("tdelta");
group->addChildren(*ROUTE90);

CROUTE* ROUTE91 = new CROUTE();
ROUTE91->setFromNode("Animate");
ROUTE91->setFromField("a");
ROUTE91->setToNode("x3dom");
ROUTE91->setToField("a");
group->addChildren(*ROUTE91);

CROUTE* ROUTE92 = new CROUTE();
ROUTE92->setFromNode("Animate");
ROUTE92->setFromField("b");
ROUTE92->setToNode("x3dom");
ROUTE92->setToField("b");
group->addChildren(*ROUTE92);

CROUTE* ROUTE93 = new CROUTE();
ROUTE93->setFromNode("Animate");
ROUTE93->setFromField("c");
ROUTE93->setToNode("x3dom");
ROUTE93->setToField("c");
group->addChildren(*ROUTE93);

CROUTE* ROUTE94 = new CROUTE();
ROUTE94->setFromNode("Animate");
ROUTE94->setFromField("d");
ROUTE94->setToNode("x3dom");
ROUTE94->setToField("d");
group->addChildren(*ROUTE94);

CROUTE* ROUTE95 = new CROUTE();
ROUTE95->setFromNode("Animate");
ROUTE95->setFromField("pdelta");
ROUTE95->setToNode("x3dom");
ROUTE95->setToField("pdelta");
group->addChildren(*ROUTE95);

CROUTE* ROUTE96 = new CROUTE();
ROUTE96->setFromNode("Animate");
ROUTE96->setFromField("tdelta");
ROUTE96->setToNode("x3dom");
ROUTE96->setToField("tdelta");
group->addChildren(*ROUTE96);

X3D0->setScene(*Scene15);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

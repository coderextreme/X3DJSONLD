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
meta14->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d");
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
Background18->setBackUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
Background18->setBottomUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
Background18->setFrontUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
Background18->setLeftUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
Background18->setRightUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
Background18->setTopUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
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
ImageTexture25->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
ComposedCubeMapTexture24->setBackTexture(*ImageTexture25);

CImageTexture* ImageTexture26 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture26->setDEF("bottomShader");
ImageTexture26->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
ComposedCubeMapTexture24->setBottomTexture(*ImageTexture26);

CImageTexture* ImageTexture27 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture27->setDEF("frontShader");
ImageTexture27->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
ComposedCubeMapTexture24->setFrontTexture(*ImageTexture27);

CImageTexture* ImageTexture28 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture28->setDEF("leftShader");
ImageTexture28->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
ComposedCubeMapTexture24->setLeftTexture(*ImageTexture28);

CImageTexture* ImageTexture29 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture29->setDEF("rightShader");
ImageTexture29->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
ComposedCubeMapTexture24->setRightTexture(*ImageTexture29);

CImageTexture* ImageTexture30 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture30->setDEF("topShader");
ImageTexture30->setUrl(new CString[2]{"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
ComposedCubeMapTexture24->setTopTexture(*ImageTexture30);

Appearance22->setTexture(*ComposedCubeMapTexture24);

//<ComposedShader DEF='x3dom' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field> <field name='b' type='SFFloat' accessType='inputOutput' value='1'></field> <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\"' containerField='parts' type='VERTEX'></ShaderPart> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
CComposedShader* ComposedShader31 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader31->setDEF("x_ite");
ComposedShader31->setLanguage("GLSL");
Cfield* field32 = new Cfield();
field32->setName("cube");
field32->setType("SFNode");
field32->setAccessType("inputOutput");
CComposedCubeMapTexture* ComposedCubeMapTexture33 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture33->setUSE("texture");
field32->addChildren(*ComposedCubeMapTexture33);

ComposedShader31->addField(*field32);

Cfield* field34 = new Cfield();
field34->setName("chromaticDispertion");
field34->setAccessType("initializeOnly");
field34->setType("SFVec3f");
field34->setValue("0.98 1 1.033");
ComposedShader31->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("bias");
field35->setType("SFFloat");
field35->setAccessType("inputOnly");
field35->setValue("0.5");
ComposedShader31->addField(*field35);

Cfield* field36 = new Cfield();
field36->setName("scale");
field36->setType("SFFloat");
field36->setAccessType("inputOnly");
field36->setValue("0.5");
ComposedShader31->addField(*field36);

Cfield* field37 = new Cfield();
field37->setName("power");
field37->setType("SFFloat");
field37->setAccessType("inputOnly");
field37->setValue("2");
ComposedShader31->addField(*field37);

Cfield* field38 = new Cfield();
field38->setName("a");
field38->setType("SFFloat");
field38->setAccessType("inputOnly");
field38->setValue("10");
ComposedShader31->addField(*field38);

Cfield* field39 = new Cfield();
field39->setName("b");
field39->setType("SFFloat");
field39->setAccessType("inputOnly");
field39->setValue("1");
ComposedShader31->addField(*field39);

Cfield* field40 = new Cfield();
field40->setName("c");
field40->setType("SFFloat");
field40->setAccessType("inputOnly");
field40->setValue("20");
ComposedShader31->addField(*field40);

Cfield* field41 = new Cfield();
field41->setName("d");
field41->setType("SFFloat");
field41->setAccessType("inputOnly");
field41->setValue("20");
ComposedShader31->addField(*field41);

Cfield* field42 = new Cfield();
field42->setName("tdelta");
field42->setType("SFFloat");
field42->setAccessType("inputOnly");
field42->setValue("0");
ComposedShader31->addField(*field42);

Cfield* field43 = new Cfield();
field43->setName("pdelta");
field43->setType("SFFloat");
field43->setAccessType("inputOnly");
field43->setValue("0");
ComposedShader31->addField(*field43);

CShaderPart* ShaderPart44 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart44->setUrl(new CString[2]{"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"}, 2);
ShaderPart44->setType("VERTEX");
ComposedShader31->addParts(*ShaderPart44);

CShaderPart* ShaderPart45 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart45->setUrl(new CString[2]{"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"}, 2);
ShaderPart45->setType("FRAGMENT");
ComposedShader31->addParts(*ShaderPart45);

Appearance22->addShaders(*ComposedShader31);

Shape21->setAppearance(*Appearance22);

CSphere* Sphere46 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape21->setGeometry(Sphere46);

Transform20->addChild(*Shape21);

group->addChildren(*Transform20);

CScript* Script47 = (CScript *)(m_pScene.createNode("Script"));
Script47->setDEF("UrlSelector");
Script47->setDirectOutput(True);
Cfield* field48 = new Cfield();
field48->setName("frontUrls");
field48->setType("MFString");
field48->setAccessType("initializeOnly");
field48->setValue("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png\"");
Script47->addField(*field48);

Cfield* field49 = new Cfield();
field49->setName("backUrls");
field49->setType("MFString");
field49->setAccessType("initializeOnly");
field49->setValue("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png\"");
Script47->addField(*field49);

Cfield* field50 = new Cfield();
field50->setName("leftUrls");
field50->setType("MFString");
field50->setAccessType("initializeOnly");
field50->setValue("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png\"");
Script47->addField(*field50);

Cfield* field51 = new Cfield();
field51->setName("rightUrls");
field51->setType("MFString");
field51->setAccessType("initializeOnly");
field51->setValue("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png\"");
Script47->addField(*field51);

Cfield* field52 = new Cfield();
field52->setName("topUrls");
field52->setType("MFString");
field52->setAccessType("initializeOnly");
field52->setValue("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png\"");
Script47->addField(*field52);

Cfield* field53 = new Cfield();
field53->setName("bottomUrls");
field53->setType("MFString");
field53->setAccessType("initializeOnly");
field53->setValue("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"");
Script47->addField(*field53);

Cfield* field54 = new Cfield();
field54->setName("front");
field54->setType("MFString");
field54->setAccessType("inputOutput");
Script47->addField(*field54);

Cfield* field55 = new Cfield();
field55->setName("back");
field55->setType("MFString");
field55->setAccessType("inputOutput");
Script47->addField(*field55);

Cfield* field56 = new Cfield();
field56->setName("left");
field56->setType("MFString");
field56->setAccessType("inputOutput");
Script47->addField(*field56);

Cfield* field57 = new Cfield();
field57->setName("right");
field57->setType("MFString");
field57->setAccessType("inputOutput");
Script47->addField(*field57);

Cfield* field58 = new Cfield();
field58->setName("top");
field58->setType("MFString");
field58->setAccessType("inputOutput");
Script47->addField(*field58);

Cfield* field59 = new Cfield();
field59->setName("bottom");
field59->setType("MFString");
field59->setAccessType("inputOutput");
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
group->addChildren(*Script47);

//<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>
CScript* Script62 = (CScript *)(m_pScene.createNode("Script"));
Script62->setDEF("Animate");
Script62->setDirectOutput(True);
Cfield* field63 = new Cfield();
field63->setName("set_fraction");
field63->setType("SFFloat");
field63->setAccessType("inputOnly");
Script62->addField(*field63);

Cfield* field64 = new Cfield();
field64->setName("a");
field64->setType("SFFloat");
field64->setAccessType("inputOutput");
field64->setValue("10");
Script62->addField(*field64);

Cfield* field65 = new Cfield();
field65->setName("b");
field65->setType("SFFloat");
field65->setAccessType("inputOutput");
field65->setValue("1");
Script62->addField(*field65);

Cfield* field66 = new Cfield();
field66->setName("c");
field66->setType("SFFloat");
field66->setAccessType("inputOutput");
field66->setValue("20");
Script62->addField(*field66);

Cfield* field67 = new Cfield();
field67->setName("d");
field67->setType("SFFloat");
field67->setAccessType("inputOutput");
field67->setValue("20");
Script62->addField(*field67);

Cfield* field68 = new Cfield();
field68->setName("tdelta");
field68->setType("SFFloat");
field68->setAccessType("inputOutput");
field68->setValue("0");
Script62->addField(*field68);

Cfield* field69 = new Cfield();
field69->setName("pdelta");
field69->setType("SFFloat");
field69->setAccessType("inputOutput");
field69->setValue("0");
Script62->addField(*field69);


Script62.setSourceCode(`ecmascript:\n"+
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
group->addChildren(*Script62);

CTimeSensor* TimeSensor70 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor70->setDEF("TourTime");
TimeSensor70->setCycleInterval(5);
TimeSensor70->setLoop(True);
group->addChildren(*TimeSensor70);

CROUTE* ROUTE71 = new CROUTE();
ROUTE71->setFromNode("TourTime");
ROUTE71->setFromField("fraction_changed");
ROUTE71->setToNode("Animate");
ROUTE71->setToField("set_fraction");
group->addChildren(*ROUTE71);

CROUTE* ROUTE72 = new CROUTE();
ROUTE72->setFromNode("Animate");
ROUTE72->setFromField("a");
ROUTE72->setToNode("x_ite");
ROUTE72->setToField("a");
group->addChildren(*ROUTE72);

CROUTE* ROUTE73 = new CROUTE();
ROUTE73->setFromNode("Animate");
ROUTE73->setFromField("b");
ROUTE73->setToNode("x_ite");
ROUTE73->setToField("b");
group->addChildren(*ROUTE73);

CROUTE* ROUTE74 = new CROUTE();
ROUTE74->setFromNode("Animate");
ROUTE74->setFromField("c");
ROUTE74->setToNode("x_ite");
ROUTE74->setToField("c");
group->addChildren(*ROUTE74);

CROUTE* ROUTE75 = new CROUTE();
ROUTE75->setFromNode("Animate");
ROUTE75->setFromField("d");
ROUTE75->setToNode("x_ite");
ROUTE75->setToField("d");
group->addChildren(*ROUTE75);

CROUTE* ROUTE76 = new CROUTE();
ROUTE76->setFromNode("Animate");
ROUTE76->setFromField("pdelta");
ROUTE76->setToNode("x_ite");
ROUTE76->setToField("pdelta");
group->addChildren(*ROUTE76);

CROUTE* ROUTE77 = new CROUTE();
ROUTE77->setFromNode("Animate");
ROUTE77->setFromField("tdelta");
ROUTE77->setToNode("x_ite");
ROUTE77->setToField("tdelta");
group->addChildren(*ROUTE77);

CROUTE* ROUTE78 = new CROUTE();
ROUTE78->setFromNode("Animate");
ROUTE78->setFromField("a");
ROUTE78->setToNode("x3dom");
ROUTE78->setToField("a");
group->addChildren(*ROUTE78);

CROUTE* ROUTE79 = new CROUTE();
ROUTE79->setFromNode("Animate");
ROUTE79->setFromField("b");
ROUTE79->setToNode("x3dom");
ROUTE79->setToField("b");
group->addChildren(*ROUTE79);

CROUTE* ROUTE80 = new CROUTE();
ROUTE80->setFromNode("Animate");
ROUTE80->setFromField("c");
ROUTE80->setToNode("x3dom");
ROUTE80->setToField("c");
group->addChildren(*ROUTE80);

CROUTE* ROUTE81 = new CROUTE();
ROUTE81->setFromNode("Animate");
ROUTE81->setFromField("d");
ROUTE81->setToNode("x3dom");
ROUTE81->setToField("d");
group->addChildren(*ROUTE81);

CROUTE* ROUTE82 = new CROUTE();
ROUTE82->setFromNode("Animate");
ROUTE82->setFromField("pdelta");
ROUTE82->setToNode("x3dom");
ROUTE82->setToField("pdelta");
group->addChildren(*ROUTE82);

CROUTE* ROUTE83 = new CROUTE();
ROUTE83->setFromNode("Animate");
ROUTE83->setFromField("tdelta");
ROUTE83->setToNode("x3dom");
ROUTE83->setToField("tdelta");
group->addChildren(*ROUTE83);

X3D0->setScene(*Scene16);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

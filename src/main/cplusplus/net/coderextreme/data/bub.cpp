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
meta10->setContent("bub.x3d");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("creator");
meta11->setContent("John Carlson");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("description");
meta12->setContent("3 prismatic spheres");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("generator");
meta13->setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("identifier");
meta14->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/bub.x3d");
head1->addMeta(*meta14);

X3D0->setHead(*head1);

CScene* Scene15 = new CScene();
CNavigationInfo* NavigationInfo16 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo16);

CBackground* Background17 = (CBackground *)(m_pScene.createNode("Background"));
Background17->setBackUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background17->setBottomUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background17->setFrontUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background17->setLeftUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background17->setRightUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background17->setTopUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
group->addChildren(*Background17);

CViewpoint* Viewpoint18 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint18->setPosition(new float[3]{0,0,20});
Viewpoint18->setDescription("Look at the bubbles flying");
group->addChildren(*Viewpoint18);

CProtoDeclare ProtoDeclare19 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Bubble" ><ProtoBody><Transform DEF="transform"><Shape DEF="myShape"><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0.7 0.7 0.7" specularColor="0.5 0.5 0.5"></Material>
<ComposedCubeMapTexture containerField="texture" DEF="texture"><ImageTexture containerField="backTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_back.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png&quot;"></ImageTexture>
<ImageTexture containerField="bottomTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot;"></ImageTexture>
<ImageTexture containerField="frontTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_front.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png&quot;"></ImageTexture>
<ImageTexture containerField="leftTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_left.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png&quot;"></ImageTexture>
<ImageTexture containerField="rightTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_right.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png&quot;"></ImageTexture>
<ImageTexture containerField="topTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_top.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png&quot;"></ImageTexture>
</ComposedCubeMapTexture>
<!--<ComposedShader DEF='gl' language="GLSL"> <field name='cube' type='SFInt32' accessType="inputOutput" value='0'></field> <field name='chromaticDispertion' type='SFVec3f' accessType="inputOutput" value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType="inputOutput" value='0.5'></field> <field name='scale' type='SFFloat' accessType="inputOutput" value='0.5'></field> <field name='power' type='SFFloat' accessType="inputOutput" value='2.0'></field> <ShaderPart url='"../shaders/gl.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs"' type='VERTEX'></ShaderPart> <ShaderPart url='"../shaders/pc_bubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language="GLSL"> <field name='fw_textureCoodGenType' type='SFInt32' accessType="inputOutput" value='0'></field> <field name='chromaticDispertion' type='SFVec3f' accessType="inputOutput" value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType="inputOutput" value='0.5'></field> <field name='scale' type='SFFloat' accessType="inputOutput" value='0.5'></field> <field name='power' type='SFFloat' accessType="inputOutput" value='2.0'></field> <ShaderPart url='"../shaders/freewrl.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs"' type='VERTEX'></ShaderPart> <ShaderPart url='"../shaders/pc_bubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"' type='FRAGMENT'></ShaderPart> </ComposedShader>--><!--<ComposedShader DEF='instant' language="GLSL"> <field name='cube' type='SFInt32' accessType="inputOutput" value='0'></field> <field name='chromaticDispertion' type='SFVec3f' accessType="inputOutput" value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType="inputOutput" value='0.5'></field> <field name='scale' type='SFFloat' accessType="inputOutput" value='0.5'></field> <field name='power' type='SFFloat' accessType="inputOutput" value='2.0'></field> <ShaderPart url='"../shaders/instant.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs"' type='VERTEX'></ShaderPart> <ShaderPart url='"../shaders/pc_bubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"' type='FRAGMENT'></ShaderPart> </ComposedShader>--><ComposedShader DEF="x3dom" language="GLSL"><field name="cube" type="SFInt32" accessType="inputOutput" value="0"></field>
<field name="chromaticDispertion" type="SFVec3f" accessType="inputOutput" value="0.98 1 1.033"></field>
<field name="bias" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="scale" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="power" type="SFFloat" accessType="inputOutput" value="2"></field>
<ShaderPart url="&quot;../shaders/x3dom.vs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs&quot;" type="VERTEX"></ShaderPart>
<ShaderPart url="&quot;../shaders/pc_bubbles.fs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs&quot;" type="FRAGMENT"></ShaderPart>
</ComposedShader>
<ComposedShader DEF="x_ite" language="GLSL"><field name="cube" type="SFNode" accessType="inputOutput"><ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture>
</field>
<field name="chromaticDispertion" type="SFVec3f" accessType="inputOutput" value="0.98 1 1.033"></field>
<field name="bias" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="scale" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="power" type="SFFloat" accessType="inputOutput" value="2"></field>
<ShaderPart url="&quot;../shaders/x_ite.vs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs&quot;" type="VERTEX"></ShaderPart>
<ShaderPart url="&quot;../shaders/x_itebubbles.fs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs&quot;" type="FRAGMENT"></ShaderPart>
</ComposedShader>
</Appearance>
<Sphere></Sphere>
</Shape>
</Transform>
<Script DEF="Bounce"><field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="velocity" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="set_fraction" accessType="inputOnly" type="SFTime"></field>
<![CDATA[ecmascript:
			function initialize() {
			    translation = new SFVec3f(0, 0, 0);
			    velocity = new SFVec3f(
			    	Math.random() - 0.5,
				Math.random() - 0.5,
				Math.random() - 0.5);
			}
			function set_fraction() {
			    translation = new SFVec3f(
			    	translation.x + velocity.x,
				translation.y + velocity.y,
				translation.z + velocity.z);
			    if (Math.abs(translation.x) > 10) {
				initialize();
			    } else if (Math.abs(translation.y) > 10) {
				initialize();
			    } else if (Math.abs(translation.z) > 10) {
				initialize();
			    } else {
				velocity.x += Math.random() * 0.2 - 0.1;
				velocity.y += Math.random() * 0.2 - 0.1;
				velocity.z += Math.random() * 0.2 - 0.1;
			    }
			}]]></Script>
<TimeSensor DEF="TourTime" cycleInterval="0.15" loop="true"></TimeSensor>
<ROUTE fromNode="TourTime" fromField="cycleTime" toNode="Bounce" toField="set_fraction"></ROUTE>
<ROUTE fromNode="Bounce" fromField="translation_changed" toNode="transform" toField="set_translation"></ROUTE>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare19->setName("Bubble");
CProtoBody* ProtoBody20 = new CProtoBody();
CTransform* Transform21 = (CTransform *)(m_pScene.createNode("Transform"));
Transform21->setDEF("transform");
CShape* Shape22 = (CShape *)(m_pScene.createNode("Shape"));
Shape22->setDEF("myShape");
CAppearance* Appearance23 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material24 = (CMaterial *)(m_pScene.createNode("Material"));
Material24->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material24->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance23->setMaterial(*Material24);

CComposedCubeMapTexture* ComposedCubeMapTexture25 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture25->setDEF("texture");
CImageTexture* ImageTexture26 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture26->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
ComposedCubeMapTexture25->setBackTexture(*ImageTexture26);

CImageTexture* ImageTexture27 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture27->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
ComposedCubeMapTexture25->setBottomTexture(*ImageTexture27);

CImageTexture* ImageTexture28 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture28->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
ComposedCubeMapTexture25->setFrontTexture(*ImageTexture28);

CImageTexture* ImageTexture29 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture29->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
ComposedCubeMapTexture25->setLeftTexture(*ImageTexture29);

CImageTexture* ImageTexture30 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture30->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
ComposedCubeMapTexture25->setRightTexture(*ImageTexture30);

CImageTexture* ImageTexture31 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture31->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
ComposedCubeMapTexture25->setTopTexture(*ImageTexture31);

Appearance23->setTexture(*ComposedCubeMapTexture25);

//<ComposedShader DEF='gl' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/gl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language=\"GLSL\"> <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader DEF='instant' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
CComposedShader* ComposedShader32 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader32->setDEF("x3dom");
ComposedShader32->setLanguage("GLSL");
Cfield* field33 = new Cfield();
field33->setName("cube");
field33->setAccessType("inputOutput");
field33->setValue("0");
ComposedShader32->addField(*field33);

Cfield* field34 = new Cfield();
field34->setName("chromaticDispertion");
field34->setAccessType("inputOutput");
field34->setValue("0.98 1 1.033");
ComposedShader32->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("bias");
field35->setAccessType("inputOutput");
field35->setValue("0.5");
ComposedShader32->addField(*field35);

Cfield* field36 = new Cfield();
field36->setName("scale");
field36->setAccessType("inputOutput");
field36->setValue("0.5");
ComposedShader32->addField(*field36);

Cfield* field37 = new Cfield();
field37->setName("power");
field37->setAccessType("inputOutput");
field37->setValue("2");
ComposedShader32->addField(*field37);

CShaderPart* ShaderPart38 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart38->setUrl(new CString[2]{"../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ComposedShader32->addParts(*ShaderPart38);

CShaderPart* ShaderPart39 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart39->setUrl(new CString[2]{"../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"}, 2);
ComposedShader32->addParts(*ShaderPart39);

Appearance23->addShaders(*ComposedShader32);

CComposedShader* ComposedShader40 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader40->setDEF("x_ite");
ComposedShader40->setLanguage("GLSL");
Cfield* field41 = new Cfield();
field41->setName("cube");
field41->setAccessType("inputOutput");
CComposedCubeMapTexture* ComposedCubeMapTexture42 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture42->setUSE("texture");
field41->addChildren(*ComposedCubeMapTexture42);

ComposedShader40->addField(*field41);

Cfield* field43 = new Cfield();
field43->setName("chromaticDispertion");
field43->setAccessType("inputOutput");
field43->setValue("0.98 1 1.033");
ComposedShader40->addField(*field43);

Cfield* field44 = new Cfield();
field44->setName("bias");
field44->setAccessType("inputOutput");
field44->setValue("0.5");
ComposedShader40->addField(*field44);

Cfield* field45 = new Cfield();
field45->setName("scale");
field45->setAccessType("inputOutput");
field45->setValue("0.5");
ComposedShader40->addField(*field45);

Cfield* field46 = new Cfield();
field46->setName("power");
field46->setAccessType("inputOutput");
field46->setValue("2");
ComposedShader40->addField(*field46);

CShaderPart* ShaderPart47 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart47->setUrl(new CString[2]{"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 2);
ComposedShader40->addParts(*ShaderPart47);

CShaderPart* ShaderPart48 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart48->setUrl(new CString[2]{"../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"}, 2);
ComposedShader40->addParts(*ShaderPart48);

Appearance23->addShaders(*ComposedShader40);

Shape22->setAppearance(*Appearance23);

CSphere* Sphere49 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape22->setGeometry(Sphere49);

Transform21->addChild(*Shape22);

ProtoBody20->addChildren(*Transform21);

CScript* Script50 = (CScript *)(m_pScene.createNode("Script"));
Script50->setDEF("Bounce");
Cfield* field51 = new Cfield();
field51->setName("translation");
field51->setAccessType("inputOutput");
field51->setValue("0 0 0");
Script50->addField(*field51);

Cfield* field52 = new Cfield();
field52->setName("velocity");
field52->setAccessType("inputOutput");
field52->setValue("0 0 0");
Script50->addField(*field52);

Cfield* field53 = new Cfield();
field53->setName("set_fraction");
field53->setAccessType("inputOnly");
Script50->addField(*field53);


Script50.setSourceCode(`ecmascript:\n"+
"			function initialize() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"			    if (Math.abs(translation.x) > 10) {\n"+
"				initialize();\n"+
"			    } else if (Math.abs(translation.y) > 10) {\n"+
"				initialize();\n"+
"			    } else if (Math.abs(translation.z) > 10) {\n"+
"				initialize();\n"+
"			    } else {\n"+
"				velocity.x += Math.random() * 0.2 - 0.1;\n"+
"				velocity.y += Math.random() * 0.2 - 0.1;\n"+
"				velocity.z += Math.random() * 0.2 - 0.1;\n"+
"			    }\n"+
"			}`)
ProtoBody20->addChildren(*Script50);

CTimeSensor* TimeSensor54 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor54->setDEF("TourTime");
TimeSensor54->setCycleInterval(0.15);
TimeSensor54->setLoop(True);
ProtoBody20->addChildren(*TimeSensor54);

CROUTE* ROUTE55 = new CROUTE();
ROUTE55->setFromNode("TourTime");
ROUTE55->setFromField("cycleTime");
ROUTE55->setToNode("Bounce");
ROUTE55->setToField("set_fraction");
ProtoBody20->addChildren(*ROUTE55);

CROUTE* ROUTE56 = new CROUTE();
ROUTE56->setFromNode("Bounce");
ROUTE56->setFromField("translation_changed");
ROUTE56->setToNode("transform");
ROUTE56->setToField("set_translation");
ProtoBody20->addChildren(*ROUTE56);

ProtoDeclare19->setProtoBody(*ProtoBody20);

group->addChildren(*ProtoDeclare19);

CProtoInstance* ProtoInstance57 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance57->setName("Bubble");
group->addChildren(*ProtoInstance57);

CProtoInstance* ProtoInstance58 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance58->setName("Bubble");
group->addChildren(*ProtoInstance58);

CProtoInstance* ProtoInstance59 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance59->setName("Bubble");
group->addChildren(*ProtoInstance59);

X3D0->setScene(*Scene15);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

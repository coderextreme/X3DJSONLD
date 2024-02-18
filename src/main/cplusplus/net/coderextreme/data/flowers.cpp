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
meta10->setContent("flowers.x3d");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("creator");
meta11->setContent("John Carlson");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("description");
meta12->setContent("5 or more prismatic flowers");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("generator");
meta13->setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("identifier");
meta14->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d");
head1->addMeta(*meta14);

X3D0->setHead(*head1);

CScene* Scene15 = new CScene();
CNavigationInfo* NavigationInfo16 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo16);

//Images courtesy of Paul Debevec's Light Probe Image Gallery
CBackground* Background17 = (CBackground *)(m_pScene.createNode("Background"));
Background17->setBackUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background17->setBottomUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background17->setFrontUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background17->setLeftUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background17->setRightUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background17->setTopUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
group->addChildren(*Background17);

CProtoDeclare ProtoDeclare18 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoBody><Transform DEF="animate_transform"><Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0.7 0.7 0.7" specularColor="0.5 0.5 0.5"></Material>
<ComposedCubeMapTexture containerField="texture" DEF="texture"><ImageTexture containerField="backTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_back.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png&quot;"></ImageTexture>
<ImageTexture containerField="bottomTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot;"></ImageTexture>
<ImageTexture containerField="frontTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_front.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png&quot;"></ImageTexture>
<ImageTexture containerField="leftTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_left.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png&quot;"></ImageTexture>
<ImageTexture containerField="rightTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_right.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png&quot;"></ImageTexture>
<ImageTexture containerField="topTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_top.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png&quot;"></ImageTexture>
</ComposedCubeMapTexture>
<ComposedShader DEF="x3dom" language="GLSL"><field name="cube" type="SFInt32" accessType="inputOutput" value="0"></field>
<field name="chromaticDispertion" accessType="initializeOnly" type="SFVec3f" value="0.98 1 1.033"></field>
<field name="bias" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="scale" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="power" type="SFFloat" accessType="inputOutput" value="2"></field>
<field name="a" type="SFFloat" accessType="inputOutput" value="10"></field>
<field name="b" type="SFFloat" accessType="inputOutput" value="1"></field>
<field name="c" type="SFFloat" accessType="inputOutput" value="20"></field>
<field name="d" type="SFFloat" accessType="inputOutput" value="20"></field>
<field name="tdelta" type="SFFloat" accessType="inputOutput" value="0"></field>
<field name="pdelta" type="SFFloat" accessType="inputOutput" value="0"></field>
<!--<field name='cube' type='SFNode' accessType="inputOutput"> <ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture> </field>--><ShaderPart url="&quot;../shaders/x3dom_flowers_chromatic.vs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs&quot;" type="VERTEX"></ShaderPart>
<ShaderPart url="&quot;../shaders/common.fs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs&quot;" type="FRAGMENT"></ShaderPart>
</ComposedShader>
<ComposedShader DEF="x_ite" language="GLSL"><field name="cube" type="SFNode" accessType="inputOutput"><ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture>
</field>
<field name="chromaticDispertion" accessType="initializeOnly" type="SFVec3f" value="0.98 1 1.033"></field>
<field name="bias" type="SFFloat" accessType="inputOnly" value="0.5"></field>
<field name="scale" type="SFFloat" accessType="inputOnly" value="0.5"></field>
<field name="power" type="SFFloat" accessType="inputOnly" value="2"></field>
<field name="a" type="SFFloat" accessType="inputOnly" value="10"></field>
<field name="b" type="SFFloat" accessType="inputOnly" value="1"></field>
<field name="c" type="SFFloat" accessType="inputOnly" value="20"></field>
<field name="d" type="SFFloat" accessType="inputOnly" value="20"></field>
<field name="tdelta" type="SFFloat" accessType="inputOnly" value="0"></field>
<field name="pdelta" type="SFFloat" accessType="inputOnly" value="0"></field>
<ShaderPart url="&quot;../shaders/x_ite_flowers_chromatic.vs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs&quot;" type="VERTEX"></ShaderPart>
<ShaderPart url="&quot;../shaders/x_ite.fs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs&quot;" type="FRAGMENT"></ShaderPart>
</ComposedShader>
</Appearance>
<Sphere></Sphere>
</Shape>
</Transform>
<Script DEF="Animate"><field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="velocity" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="a" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="b" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="c" type="SFFloat" accessType="inputOutput" value="3"></field>
<field name="d" type="SFFloat" accessType="inputOutput" value="3"></field>
<field name="tdelta" type="SFFloat" accessType="inputOutput" value="0.5"></field>
<field name="pdelta" type="SFFloat" accessType="inputOutput" value="0.5"></field>
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
			    for (var j = 0; j <= 2; j++) {
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
			    }
			    animate_flowers();
			}

			function animate_flowers(fraction, eventTime) {
				var choice = Math.floor(Math.random() * 4);
				switch (choice) {
				case 0:
					a += Math.random() * 0.2 - 0.1;
					break;
				case 1:
					b += Math.random() * 0.2 - 0.1;
					break;
				case 2:
					c += Math.random() * 2 - 1;
					break;
				case 3:
					d += Math.random() * 2 - 1;
					break;
				}
				tdelta = tdelta + 0.5;
				pdelta = pdelta + 0.5;
				if (a > 1) {
					a =  0.5;
				}
				if (b > 1) {
					b =  0.5;
				}
				if (c < 1) {
					c =  4;
				}
				if (d < 1) {
					d =  4;
				}
				if (c > 10) {
					c = 4;
				}
				if (d > 10) {
					d = 4;
				}
			}]]></Script>
<TimeSensor DEF="TourTime" cycleInterval="5" loop="true"></TimeSensor>
<ROUTE fromNode="TourTime" fromField="fraction_changed" toNode="Animate" toField="set_fraction"></ROUTE>
<ROUTE fromNode="Animate" fromField="translation_changed" toNode="animate_transform" toField="set_translation"></ROUTE>
<ROUTE fromNode="Animate" fromField="a" toNode="x_ite" toField="a"></ROUTE>
<ROUTE fromNode="Animate" fromField="b" toNode="x_ite" toField="b"></ROUTE>
<ROUTE fromNode="Animate" fromField="c" toNode="x_ite" toField="c"></ROUTE>
<ROUTE fromNode="Animate" fromField="d" toNode="x_ite" toField="d"></ROUTE>
<ROUTE fromNode="Animate" fromField="pdelta" toNode="x_ite" toField="pdelta"></ROUTE>
<ROUTE fromNode="Animate" fromField="tdelta" toNode="x_ite" toField="tdelta"></ROUTE>
<ROUTE fromNode="Animate" fromField="a" toNode="x3dom" toField="a"></ROUTE>
<ROUTE fromNode="Animate" fromField="b" toNode="x3dom" toField="b"></ROUTE>
<ROUTE fromNode="Animate" fromField="c" toNode="x3dom" toField="c"></ROUTE>
<ROUTE fromNode="Animate" fromField="d" toNode="x3dom" toField="d"></ROUTE>
<ROUTE fromNode="Animate" fromField="pdelta" toNode="x3dom" toField="pdelta"></ROUTE>
<ROUTE fromNode="Animate" fromField="tdelta" toNode="x3dom" toField="tdelta"></ROUTE>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare18->setName("flower");
CProtoBody* ProtoBody19 = new CProtoBody();
CTransform* Transform20 = (CTransform *)(m_pScene.createNode("Transform"));
Transform20->setDEF("animate_transform");
CShape* Shape21 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance22 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material23 = (CMaterial *)(m_pScene.createNode("Material"));
Material23->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material23->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance22->setMaterial(*Material23);

CComposedCubeMapTexture* ComposedCubeMapTexture24 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture24->setDEF("texture");
CImageTexture* ImageTexture25 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture25->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
ComposedCubeMapTexture24->setBackTexture(*ImageTexture25);

CImageTexture* ImageTexture26 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture26->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
ComposedCubeMapTexture24->setBottomTexture(*ImageTexture26);

CImageTexture* ImageTexture27 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture27->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
ComposedCubeMapTexture24->setFrontTexture(*ImageTexture27);

CImageTexture* ImageTexture28 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture28->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
ComposedCubeMapTexture24->setLeftTexture(*ImageTexture28);

CImageTexture* ImageTexture29 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture29->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
ComposedCubeMapTexture24->setRightTexture(*ImageTexture29);

CImageTexture* ImageTexture30 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture30->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
ComposedCubeMapTexture24->setTopTexture(*ImageTexture30);

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

Transform20->addChild(*Shape21);

ProtoBody19->addChildren(*Transform20);

CScript* Script61 = (CScript *)(m_pScene.createNode("Script"));
Script61->setDEF("Animate");
Cfield* field62 = new Cfield();
field62->setName("translation");
field62->setAccessType("inputOutput");
field62->setType("SFVec3f");
field62->setValue("0 0 0");
Script61->addField(*field62);

Cfield* field63 = new Cfield();
field63->setName("velocity");
field63->setAccessType("inputOutput");
field63->setType("SFVec3f");
field63->setValue("0 0 0");
Script61->addField(*field63);

Cfield* field64 = new Cfield();
field64->setName("set_fraction");
field64->setAccessType("inputOnly");
field64->setType("SFFloat");
Script61->addField(*field64);

Cfield* field65 = new Cfield();
field65->setName("a");
field65->setType("SFFloat");
field65->setAccessType("inputOutput");
field65->setValue("0.5");
Script61->addField(*field65);

Cfield* field66 = new Cfield();
field66->setName("b");
field66->setType("SFFloat");
field66->setAccessType("inputOutput");
field66->setValue("0.5");
Script61->addField(*field66);

Cfield* field67 = new Cfield();
field67->setName("c");
field67->setType("SFFloat");
field67->setAccessType("inputOutput");
field67->setValue("3");
Script61->addField(*field67);

Cfield* field68 = new Cfield();
field68->setName("d");
field68->setType("SFFloat");
field68->setAccessType("inputOutput");
field68->setValue("3");
Script61->addField(*field68);

Cfield* field69 = new Cfield();
field69->setName("tdelta");
field69->setType("SFFloat");
field69->setAccessType("inputOutput");
field69->setValue("0.5");
Script61->addField(*field69);

Cfield* field70 = new Cfield();
field70->setName("pdelta");
field70->setType("SFFloat");
field70->setAccessType("inputOutput");
field70->setValue("0.5");
Script61->addField(*field70);


Script61.setSourceCode(`ecmascript:\n"+
"\n"+
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
"			    for (var j = 0; j <= 2; j++) {\n"+
"				    if (Math.abs(translation.x) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.y) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.z) > 10) {\n"+
"					initialize();\n"+
"				    } else {\n"+
"					velocity.x += Math.random() * 0.2 - 0.1;\n"+
"					velocity.y += Math.random() * 0.2 - 0.1;\n"+
"					velocity.z += Math.random() * 0.2 - 0.1;\n"+
"				    }\n"+
"			    }\n"+
"			    animate_flowers();\n"+
"			}\n"+
"\n"+
"			function animate_flowers(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					a += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 1:\n"+
"					b += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 2:\n"+
"					c += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					d += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				tdelta = tdelta + 0.5;\n"+
"				pdelta = pdelta + 0.5;\n"+
"				if (a > 1) {\n"+
"					a =  0.5;\n"+
"				}\n"+
"				if (b > 1) {\n"+
"					b =  0.5;\n"+
"				}\n"+
"				if (c < 1) {\n"+
"					c =  4;\n"+
"				}\n"+
"				if (d < 1) {\n"+
"					d =  4;\n"+
"				}\n"+
"				if (c > 10) {\n"+
"					c = 4;\n"+
"				}\n"+
"				if (d > 10) {\n"+
"					d = 4;\n"+
"				}\n"+
"			}`)
ProtoBody19->addChildren(*Script61);

CTimeSensor* TimeSensor71 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor71->setDEF("TourTime");
TimeSensor71->setCycleInterval(5);
TimeSensor71->setLoop(True);
ProtoBody19->addChildren(*TimeSensor71);

CROUTE* ROUTE72 = new CROUTE();
ROUTE72->setFromNode("TourTime");
ROUTE72->setFromField("fraction_changed");
ROUTE72->setToNode("Animate");
ROUTE72->setToField("set_fraction");
ProtoBody19->addChildren(*ROUTE72);

CROUTE* ROUTE73 = new CROUTE();
ROUTE73->setFromNode("Animate");
ROUTE73->setFromField("translation_changed");
ROUTE73->setToNode("animate_transform");
ROUTE73->setToField("set_translation");
ProtoBody19->addChildren(*ROUTE73);

CROUTE* ROUTE74 = new CROUTE();
ROUTE74->setFromNode("Animate");
ROUTE74->setFromField("a");
ROUTE74->setToNode("x_ite");
ROUTE74->setToField("a");
ProtoBody19->addChildren(*ROUTE74);

CROUTE* ROUTE75 = new CROUTE();
ROUTE75->setFromNode("Animate");
ROUTE75->setFromField("b");
ROUTE75->setToNode("x_ite");
ROUTE75->setToField("b");
ProtoBody19->addChildren(*ROUTE75);

CROUTE* ROUTE76 = new CROUTE();
ROUTE76->setFromNode("Animate");
ROUTE76->setFromField("c");
ROUTE76->setToNode("x_ite");
ROUTE76->setToField("c");
ProtoBody19->addChildren(*ROUTE76);

CROUTE* ROUTE77 = new CROUTE();
ROUTE77->setFromNode("Animate");
ROUTE77->setFromField("d");
ROUTE77->setToNode("x_ite");
ROUTE77->setToField("d");
ProtoBody19->addChildren(*ROUTE77);

CROUTE* ROUTE78 = new CROUTE();
ROUTE78->setFromNode("Animate");
ROUTE78->setFromField("pdelta");
ROUTE78->setToNode("x_ite");
ROUTE78->setToField("pdelta");
ProtoBody19->addChildren(*ROUTE78);

CROUTE* ROUTE79 = new CROUTE();
ROUTE79->setFromNode("Animate");
ROUTE79->setFromField("tdelta");
ROUTE79->setToNode("x_ite");
ROUTE79->setToField("tdelta");
ProtoBody19->addChildren(*ROUTE79);

CROUTE* ROUTE80 = new CROUTE();
ROUTE80->setFromNode("Animate");
ROUTE80->setFromField("a");
ROUTE80->setToNode("x3dom");
ROUTE80->setToField("a");
ProtoBody19->addChildren(*ROUTE80);

CROUTE* ROUTE81 = new CROUTE();
ROUTE81->setFromNode("Animate");
ROUTE81->setFromField("b");
ROUTE81->setToNode("x3dom");
ROUTE81->setToField("b");
ProtoBody19->addChildren(*ROUTE81);

CROUTE* ROUTE82 = new CROUTE();
ROUTE82->setFromNode("Animate");
ROUTE82->setFromField("c");
ROUTE82->setToNode("x3dom");
ROUTE82->setToField("c");
ProtoBody19->addChildren(*ROUTE82);

CROUTE* ROUTE83 = new CROUTE();
ROUTE83->setFromNode("Animate");
ROUTE83->setFromField("d");
ROUTE83->setToNode("x3dom");
ROUTE83->setToField("d");
ProtoBody19->addChildren(*ROUTE83);

CROUTE* ROUTE84 = new CROUTE();
ROUTE84->setFromNode("Animate");
ROUTE84->setFromField("pdelta");
ROUTE84->setToNode("x3dom");
ROUTE84->setToField("pdelta");
ProtoBody19->addChildren(*ROUTE84);

CROUTE* ROUTE85 = new CROUTE();
ROUTE85->setFromNode("Animate");
ROUTE85->setFromField("tdelta");
ROUTE85->setToNode("x3dom");
ROUTE85->setToField("tdelta");
ProtoBody19->addChildren(*ROUTE85);

ProtoDeclare18->setProtoBody(*ProtoBody19);

group->addChildren(*ProtoDeclare18);

CProtoInstance* ProtoInstance86 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance86->setName("flower");
group->addChildren(*ProtoInstance86);

CProtoInstance* ProtoInstance87 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance87->setName("flower");
group->addChildren(*ProtoInstance87);

CProtoInstance* ProtoInstance88 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance88->setName("flower");
group->addChildren(*ProtoInstance88);

X3D0->setScene(*Scene15);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

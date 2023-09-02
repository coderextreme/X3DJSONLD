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
meta11->setContent("flowers.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("creator");
meta12->setContent("John Carlson");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("description");
meta13->setContent("5 or more prismatic flowers");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("generator");
meta14->setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("identifier");
meta15->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d");
head1->addMeta(*meta15);

X3D0->setHead(*head1);

CScene* Scene16 = new CScene();
CNavigationInfo* NavigationInfo17 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo17);

//Images courtesy of Paul Debevec's Light Probe Image Gallery
CBackground* Background18 = (CBackground *)(m_pScene.createNode("Background"));
Background18->setBackUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background18->setBottomUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background18->setFrontUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background18->setLeftUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background18->setRightUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background18->setTopUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
group->addChildren(*Background18);

CProtoDeclare ProtoDeclare19 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoBody><Transform DEF="animate_transform"><Shape><Appearance><Material diffuseColor="0.7 0.7 0.7" specularColor="0.5 0.5 0.5"></Material>
<ComposedCubeMapTexture containerField="texture" DEF="texture"><ImageTexture containerField="back" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_back.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png&quot;"></ImageTexture>
<ImageTexture containerField="bottom" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot;"></ImageTexture>
<ImageTexture containerField="front" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_front.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png&quot;"></ImageTexture>
<ImageTexture containerField="left" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_left.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png&quot;"></ImageTexture>
<ImageTexture containerField="right" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_right.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png&quot;"></ImageTexture>
<ImageTexture containerField="top" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_top.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png&quot;"></ImageTexture>
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
ProtoDeclare19->setName("flower");
CProtoBody* ProtoBody20 = new CProtoBody();
CTransform* Transform21 = (CTransform *)(m_pScene.createNode("Transform"));
Transform21->setDEF("animate_transform");
CShape* Shape22 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance23 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material24 = (CMaterial *)(m_pScene.createNode("Material"));
Material24->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material24->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance23->setMaterial(*Material24);

CComposedCubeMapTexture* ComposedCubeMapTexture25 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture25->setDEF("texture");
CImageTexture* ImageTexture26 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture26->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
ComposedCubeMapTexture25->setBack(*ImageTexture26);

CImageTexture* ImageTexture27 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture27->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
ComposedCubeMapTexture25->setBottom(*ImageTexture27);

CImageTexture* ImageTexture28 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture28->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
ComposedCubeMapTexture25->setFront(*ImageTexture28);

CImageTexture* ImageTexture29 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture29->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
ComposedCubeMapTexture25->setLeft(*ImageTexture29);

CImageTexture* ImageTexture30 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture30->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
ComposedCubeMapTexture25->setRight(*ImageTexture30);

CImageTexture* ImageTexture31 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture31->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
ComposedCubeMapTexture25->setTop(*ImageTexture31);

Appearance23->setTexture(*ComposedCubeMapTexture25);

CComposedShader* ComposedShader32 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader32->setDEF("x3dom");
ComposedShader32->setLanguage("GLSL");
Cfield* field33 = new Cfield();
field33->setName("cube");
field33->setType("SFInt32");
field33->setAccessType("inputOutput");
field33->setValue("0");
ComposedShader32->addField(*field33);

Cfield* field34 = new Cfield();
field34->setName("chromaticDispertion");
field34->setAccessType("initializeOnly");
field34->setType("SFVec3f");
field34->setValue("0.98 1 1.033");
ComposedShader32->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("bias");
field35->setType("SFFloat");
field35->setAccessType("inputOutput");
field35->setValue("0.5");
ComposedShader32->addField(*field35);

Cfield* field36 = new Cfield();
field36->setName("scale");
field36->setType("SFFloat");
field36->setAccessType("inputOutput");
field36->setValue("0.5");
ComposedShader32->addField(*field36);

Cfield* field37 = new Cfield();
field37->setName("power");
field37->setType("SFFloat");
field37->setAccessType("inputOutput");
field37->setValue("2");
ComposedShader32->addField(*field37);

Cfield* field38 = new Cfield();
field38->setName("a");
field38->setType("SFFloat");
field38->setAccessType("inputOutput");
field38->setValue("10");
ComposedShader32->addField(*field38);

Cfield* field39 = new Cfield();
field39->setName("b");
field39->setType("SFFloat");
field39->setAccessType("inputOutput");
field39->setValue("1");
ComposedShader32->addField(*field39);

Cfield* field40 = new Cfield();
field40->setName("c");
field40->setType("SFFloat");
field40->setAccessType("inputOutput");
field40->setValue("20");
ComposedShader32->addField(*field40);

Cfield* field41 = new Cfield();
field41->setName("d");
field41->setType("SFFloat");
field41->setAccessType("inputOutput");
field41->setValue("20");
ComposedShader32->addField(*field41);

Cfield* field42 = new Cfield();
field42->setName("tdelta");
field42->setType("SFFloat");
field42->setAccessType("inputOutput");
field42->setValue("0");
ComposedShader32->addField(*field42);

Cfield* field43 = new Cfield();
field43->setName("pdelta");
field43->setType("SFFloat");
field43->setAccessType("inputOutput");
field43->setValue("0");
ComposedShader32->addField(*field43);

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
CShaderPart* ShaderPart44 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart44->setUrl(new CString[2]{"../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"}, 2);
ShaderPart44->setType("VERTEX");
ComposedShader32->addParts(*ShaderPart44);

CShaderPart* ShaderPart45 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart45->setUrl(new CString[2]{"../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"}, 2);
ShaderPart45->setType("FRAGMENT");
ComposedShader32->addParts(*ShaderPart45);

Appearance23->addShaders(*ComposedShader32);

CComposedShader* ComposedShader46 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader46->setDEF("x_ite");
ComposedShader46->setLanguage("GLSL");
Cfield* field47 = new Cfield();
field47->setName("cube");
field47->setType("SFNode");
field47->setAccessType("inputOutput");
CComposedCubeMapTexture* ComposedCubeMapTexture48 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture48->setUSE("texture");
field47->addChildren(*ComposedCubeMapTexture48);

ComposedShader46->addField(*field47);

Cfield* field49 = new Cfield();
field49->setName("chromaticDispertion");
field49->setAccessType("initializeOnly");
field49->setType("SFVec3f");
field49->setValue("0.98 1 1.033");
ComposedShader46->addField(*field49);

Cfield* field50 = new Cfield();
field50->setName("bias");
field50->setType("SFFloat");
field50->setAccessType("inputOnly");
field50->setValue("0.5");
ComposedShader46->addField(*field50);

Cfield* field51 = new Cfield();
field51->setName("scale");
field51->setType("SFFloat");
field51->setAccessType("inputOnly");
field51->setValue("0.5");
ComposedShader46->addField(*field51);

Cfield* field52 = new Cfield();
field52->setName("power");
field52->setType("SFFloat");
field52->setAccessType("inputOnly");
field52->setValue("2");
ComposedShader46->addField(*field52);

Cfield* field53 = new Cfield();
field53->setName("a");
field53->setType("SFFloat");
field53->setAccessType("inputOnly");
field53->setValue("10");
ComposedShader46->addField(*field53);

Cfield* field54 = new Cfield();
field54->setName("b");
field54->setType("SFFloat");
field54->setAccessType("inputOnly");
field54->setValue("1");
ComposedShader46->addField(*field54);

Cfield* field55 = new Cfield();
field55->setName("c");
field55->setType("SFFloat");
field55->setAccessType("inputOnly");
field55->setValue("20");
ComposedShader46->addField(*field55);

Cfield* field56 = new Cfield();
field56->setName("d");
field56->setType("SFFloat");
field56->setAccessType("inputOnly");
field56->setValue("20");
ComposedShader46->addField(*field56);

Cfield* field57 = new Cfield();
field57->setName("tdelta");
field57->setType("SFFloat");
field57->setAccessType("inputOnly");
field57->setValue("0");
ComposedShader46->addField(*field57);

Cfield* field58 = new Cfield();
field58->setName("pdelta");
field58->setType("SFFloat");
field58->setAccessType("inputOnly");
field58->setValue("0");
ComposedShader46->addField(*field58);

CShaderPart* ShaderPart59 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart59->setUrl(new CString[2]{"../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"}, 2);
ShaderPart59->setType("VERTEX");
ComposedShader46->addParts(*ShaderPart59);

CShaderPart* ShaderPart60 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart60->setUrl(new CString[2]{"../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"}, 2);
ShaderPart60->setType("FRAGMENT");
ComposedShader46->addParts(*ShaderPart60);

Appearance23->addShaders(*ComposedShader46);

Shape22->setAppearance(*Appearance23);

CSphere* Sphere61 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape22->setGeometry(Sphere61);

Transform21->addChild(*Shape22);

ProtoBody20->addChildren(*Transform21);

CScript* Script62 = (CScript *)(m_pScene.createNode("Script"));
Script62->setDEF("Animate");
Cfield* field63 = new Cfield();
field63->setName("translation");
field63->setAccessType("inputOutput");
field63->setType("SFVec3f");
field63->setValue("0 0 0");
Script62->addField(*field63);

Cfield* field64 = new Cfield();
field64->setName("velocity");
field64->setAccessType("inputOutput");
field64->setType("SFVec3f");
field64->setValue("0 0 0");
Script62->addField(*field64);

Cfield* field65 = new Cfield();
field65->setName("set_fraction");
field65->setAccessType("inputOnly");
field65->setType("SFFloat");
Script62->addField(*field65);

Cfield* field66 = new Cfield();
field66->setName("a");
field66->setType("SFFloat");
field66->setAccessType("inputOutput");
field66->setValue("0.5");
Script62->addField(*field66);

Cfield* field67 = new Cfield();
field67->setName("b");
field67->setType("SFFloat");
field67->setAccessType("inputOutput");
field67->setValue("0.5");
Script62->addField(*field67);

Cfield* field68 = new Cfield();
field68->setName("c");
field68->setType("SFFloat");
field68->setAccessType("inputOutput");
field68->setValue("3");
Script62->addField(*field68);

Cfield* field69 = new Cfield();
field69->setName("d");
field69->setType("SFFloat");
field69->setAccessType("inputOutput");
field69->setValue("3");
Script62->addField(*field69);

Cfield* field70 = new Cfield();
field70->setName("tdelta");
field70->setType("SFFloat");
field70->setAccessType("inputOutput");
field70->setValue("0.5");
Script62->addField(*field70);

Cfield* field71 = new Cfield();
field71->setName("pdelta");
field71->setType("SFFloat");
field71->setAccessType("inputOutput");
field71->setValue("0.5");
Script62->addField(*field71);


Script62.setSourceCode(`ecmascript:\n"+
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
ProtoBody20->addChildren(*Script62);

CTimeSensor* TimeSensor72 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor72->setDEF("TourTime");
TimeSensor72->setCycleInterval(5);
TimeSensor72->setLoop(True);
ProtoBody20->addChildren(*TimeSensor72);

CROUTE* ROUTE73 = new CROUTE();
ROUTE73->setFromNode("TourTime");
ROUTE73->setFromField("fraction_changed");
ROUTE73->setToNode("Animate");
ROUTE73->setToField("set_fraction");
ProtoBody20->addChildren(*ROUTE73);

CROUTE* ROUTE74 = new CROUTE();
ROUTE74->setFromNode("Animate");
ROUTE74->setFromField("translation_changed");
ROUTE74->setToNode("animate_transform");
ROUTE74->setToField("set_translation");
ProtoBody20->addChildren(*ROUTE74);

CROUTE* ROUTE75 = new CROUTE();
ROUTE75->setFromNode("Animate");
ROUTE75->setFromField("a");
ROUTE75->setToNode("x_ite");
ROUTE75->setToField("a");
ProtoBody20->addChildren(*ROUTE75);

CROUTE* ROUTE76 = new CROUTE();
ROUTE76->setFromNode("Animate");
ROUTE76->setFromField("b");
ROUTE76->setToNode("x_ite");
ROUTE76->setToField("b");
ProtoBody20->addChildren(*ROUTE76);

CROUTE* ROUTE77 = new CROUTE();
ROUTE77->setFromNode("Animate");
ROUTE77->setFromField("c");
ROUTE77->setToNode("x_ite");
ROUTE77->setToField("c");
ProtoBody20->addChildren(*ROUTE77);

CROUTE* ROUTE78 = new CROUTE();
ROUTE78->setFromNode("Animate");
ROUTE78->setFromField("d");
ROUTE78->setToNode("x_ite");
ROUTE78->setToField("d");
ProtoBody20->addChildren(*ROUTE78);

CROUTE* ROUTE79 = new CROUTE();
ROUTE79->setFromNode("Animate");
ROUTE79->setFromField("pdelta");
ROUTE79->setToNode("x_ite");
ROUTE79->setToField("pdelta");
ProtoBody20->addChildren(*ROUTE79);

CROUTE* ROUTE80 = new CROUTE();
ROUTE80->setFromNode("Animate");
ROUTE80->setFromField("tdelta");
ROUTE80->setToNode("x_ite");
ROUTE80->setToField("tdelta");
ProtoBody20->addChildren(*ROUTE80);

CROUTE* ROUTE81 = new CROUTE();
ROUTE81->setFromNode("Animate");
ROUTE81->setFromField("a");
ROUTE81->setToNode("x3dom");
ROUTE81->setToField("a");
ProtoBody20->addChildren(*ROUTE81);

CROUTE* ROUTE82 = new CROUTE();
ROUTE82->setFromNode("Animate");
ROUTE82->setFromField("b");
ROUTE82->setToNode("x3dom");
ROUTE82->setToField("b");
ProtoBody20->addChildren(*ROUTE82);

CROUTE* ROUTE83 = new CROUTE();
ROUTE83->setFromNode("Animate");
ROUTE83->setFromField("c");
ROUTE83->setToNode("x3dom");
ROUTE83->setToField("c");
ProtoBody20->addChildren(*ROUTE83);

CROUTE* ROUTE84 = new CROUTE();
ROUTE84->setFromNode("Animate");
ROUTE84->setFromField("d");
ROUTE84->setToNode("x3dom");
ROUTE84->setToField("d");
ProtoBody20->addChildren(*ROUTE84);

CROUTE* ROUTE85 = new CROUTE();
ROUTE85->setFromNode("Animate");
ROUTE85->setFromField("pdelta");
ROUTE85->setToNode("x3dom");
ROUTE85->setToField("pdelta");
ProtoBody20->addChildren(*ROUTE85);

CROUTE* ROUTE86 = new CROUTE();
ROUTE86->setFromNode("Animate");
ROUTE86->setFromField("tdelta");
ROUTE86->setToNode("x3dom");
ROUTE86->setToField("tdelta");
ProtoBody20->addChildren(*ROUTE86);

ProtoDeclare19->setProtoBody(*ProtoBody20);

group->addChildren(*ProtoDeclare19);

CProtoInstance* ProtoInstance87 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance87->setName("flower");
group->addChildren(*ProtoInstance87);

CProtoInstance* ProtoInstance88 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance88->setName("flower");
group->addChildren(*ProtoInstance88);

CProtoInstance* ProtoInstance89 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance89->setName("flower");
group->addChildren(*ProtoInstance89);

X3D0->setScene(*Scene16);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

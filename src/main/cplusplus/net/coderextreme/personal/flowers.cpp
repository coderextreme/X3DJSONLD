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
<ProtoDeclare name="flower" ><ProtoBody><Transform DEF="animate_transform"><Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0.7 0.7 0.7" specularColor="0.5 0.5 0.5"></Material>
<ComposedCubeMapTexture containerField="texture" DEF="texture"><ImageTexture containerField="backTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_back.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png&quot;"></ImageTexture>
<ImageTexture containerField="bottomTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot;"></ImageTexture>
<ImageTexture containerField="frontTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_front.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png&quot;"></ImageTexture>
<ImageTexture containerField="leftTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_left.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png&quot;"></ImageTexture>
<ImageTexture containerField="rightTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_right.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png&quot;"></ImageTexture>
<ImageTexture containerField="topTexture" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_top.png&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png&quot;"></ImageTexture>
</ComposedCubeMapTexture>
<!--<ComposedShader DEF='x3dom' language="GLSL"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='cube' type='SFNode' accessType="inputOutput"> <ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture> </field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field> <field name='b' type='SFFloat' accessType='inputOutput' value='1'></field> <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"' containerField='parts' type='VERTEX'></ShaderPart> <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>--><ComposedShader DEF="x_ite" language="GLSL"><field name="cube" type="SFNode" accessType="inputOutput"><ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture>
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
<ShaderPart url="&quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs&quot;" type="VERTEX"></ShaderPart>
<ShaderPart url="&quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs&quot;" type="FRAGMENT"></ShaderPart>
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
<!--<ROUTE fromNode='Animate' fromField='a' toNode='x3dom' toField='a'></ROUTE> <ROUTE fromNode='Animate' fromField='b' toNode='x3dom' toField='b'></ROUTE> <ROUTE fromNode='Animate' fromField='c' toNode='x3dom' toField='c'></ROUTE> <ROUTE fromNode='Animate' fromField='d' toNode='x3dom' toField='d'></ROUTE> <ROUTE fromNode='Animate' fromField='pdelta' toNode='x3dom' toField='pdelta'></ROUTE> <ROUTE fromNode='Animate' fromField='tdelta' toNode='x3dom' toField='tdelta'></ROUTE>--></ProtoBody>
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

//<ComposedShader DEF='x3dom' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field> <field name='b' type='SFFloat' accessType='inputOutput' value='1'></field> <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\"' containerField='parts' type='VERTEX'></ShaderPart> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
CComposedShader* ComposedShader32 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader32->setDEF("x_ite");
ComposedShader32->setLanguage("GLSL");
Cfield* field33 = new Cfield();
field33->setName("cube");
field33->setType("SFNode");
field33->setAccessType("inputOutput");
CComposedCubeMapTexture* ComposedCubeMapTexture34 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture34->setUSE("texture");
field33->addChildren(*ComposedCubeMapTexture34);

ComposedShader32->addField(*field33);

Cfield* field35 = new Cfield();
field35->setName("chromaticDispertion");
field35->setAccessType("initializeOnly");
field35->setType("SFVec3f");
field35->setValue("0.98 1 1.033");
ComposedShader32->addField(*field35);

Cfield* field36 = new Cfield();
field36->setName("bias");
field36->setType("SFFloat");
field36->setAccessType("inputOnly");
field36->setValue("0.5");
ComposedShader32->addField(*field36);

Cfield* field37 = new Cfield();
field37->setName("scale");
field37->setType("SFFloat");
field37->setAccessType("inputOnly");
field37->setValue("0.5");
ComposedShader32->addField(*field37);

Cfield* field38 = new Cfield();
field38->setName("power");
field38->setType("SFFloat");
field38->setAccessType("inputOnly");
field38->setValue("2");
ComposedShader32->addField(*field38);

Cfield* field39 = new Cfield();
field39->setName("a");
field39->setType("SFFloat");
field39->setAccessType("inputOnly");
field39->setValue("10");
ComposedShader32->addField(*field39);

Cfield* field40 = new Cfield();
field40->setName("b");
field40->setType("SFFloat");
field40->setAccessType("inputOnly");
field40->setValue("1");
ComposedShader32->addField(*field40);

Cfield* field41 = new Cfield();
field41->setName("c");
field41->setType("SFFloat");
field41->setAccessType("inputOnly");
field41->setValue("20");
ComposedShader32->addField(*field41);

Cfield* field42 = new Cfield();
field42->setName("d");
field42->setType("SFFloat");
field42->setAccessType("inputOnly");
field42->setValue("20");
ComposedShader32->addField(*field42);

Cfield* field43 = new Cfield();
field43->setName("tdelta");
field43->setType("SFFloat");
field43->setAccessType("inputOnly");
field43->setValue("0");
ComposedShader32->addField(*field43);

Cfield* field44 = new Cfield();
field44->setName("pdelta");
field44->setType("SFFloat");
field44->setAccessType("inputOnly");
field44->setValue("0");
ComposedShader32->addField(*field44);

CShaderPart* ShaderPart45 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart45->setUrl(new CString[2]{"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"}, 2);
ShaderPart45->setType("VERTEX");
ComposedShader32->addParts(*ShaderPart45);

CShaderPart* ShaderPart46 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart46->setUrl(new CString[2]{"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"}, 2);
ShaderPart46->setType("FRAGMENT");
ComposedShader32->addParts(*ShaderPart46);

Appearance23->addShaders(*ComposedShader32);

Shape22->setAppearance(*Appearance23);

CSphere* Sphere47 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape22->setGeometry(Sphere47);

Transform21->addChild(*Shape22);

ProtoBody20->addChildren(*Transform21);

CScript* Script48 = (CScript *)(m_pScene.createNode("Script"));
Script48->setDEF("Animate");
Cfield* field49 = new Cfield();
field49->setName("translation");
field49->setAccessType("inputOutput");
field49->setType("SFVec3f");
field49->setValue("0 0 0");
Script48->addField(*field49);

Cfield* field50 = new Cfield();
field50->setName("velocity");
field50->setAccessType("inputOutput");
field50->setType("SFVec3f");
field50->setValue("0 0 0");
Script48->addField(*field50);

Cfield* field51 = new Cfield();
field51->setName("set_fraction");
field51->setAccessType("inputOnly");
field51->setType("SFFloat");
Script48->addField(*field51);

Cfield* field52 = new Cfield();
field52->setName("a");
field52->setType("SFFloat");
field52->setAccessType("inputOutput");
field52->setValue("0.5");
Script48->addField(*field52);

Cfield* field53 = new Cfield();
field53->setName("b");
field53->setType("SFFloat");
field53->setAccessType("inputOutput");
field53->setValue("0.5");
Script48->addField(*field53);

Cfield* field54 = new Cfield();
field54->setName("c");
field54->setType("SFFloat");
field54->setAccessType("inputOutput");
field54->setValue("3");
Script48->addField(*field54);

Cfield* field55 = new Cfield();
field55->setName("d");
field55->setType("SFFloat");
field55->setAccessType("inputOutput");
field55->setValue("3");
Script48->addField(*field55);

Cfield* field56 = new Cfield();
field56->setName("tdelta");
field56->setType("SFFloat");
field56->setAccessType("inputOutput");
field56->setValue("0.5");
Script48->addField(*field56);

Cfield* field57 = new Cfield();
field57->setName("pdelta");
field57->setType("SFFloat");
field57->setAccessType("inputOutput");
field57->setValue("0.5");
Script48->addField(*field57);


Script48.setSourceCode(`ecmascript:\n"+
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
ProtoBody20->addChildren(*Script48);

CTimeSensor* TimeSensor58 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor58->setDEF("TourTime");
TimeSensor58->setCycleInterval(5);
TimeSensor58->setLoop(True);
ProtoBody20->addChildren(*TimeSensor58);

CROUTE* ROUTE59 = new CROUTE();
ROUTE59->setFromNode("TourTime");
ROUTE59->setFromField("fraction_changed");
ROUTE59->setToNode("Animate");
ROUTE59->setToField("set_fraction");
ProtoBody20->addChildren(*ROUTE59);

CROUTE* ROUTE60 = new CROUTE();
ROUTE60->setFromNode("Animate");
ROUTE60->setFromField("translation_changed");
ROUTE60->setToNode("animate_transform");
ROUTE60->setToField("set_translation");
ProtoBody20->addChildren(*ROUTE60);

CROUTE* ROUTE61 = new CROUTE();
ROUTE61->setFromNode("Animate");
ROUTE61->setFromField("a");
ROUTE61->setToNode("x_ite");
ROUTE61->setToField("a");
ProtoBody20->addChildren(*ROUTE61);

CROUTE* ROUTE62 = new CROUTE();
ROUTE62->setFromNode("Animate");
ROUTE62->setFromField("b");
ROUTE62->setToNode("x_ite");
ROUTE62->setToField("b");
ProtoBody20->addChildren(*ROUTE62);

CROUTE* ROUTE63 = new CROUTE();
ROUTE63->setFromNode("Animate");
ROUTE63->setFromField("c");
ROUTE63->setToNode("x_ite");
ROUTE63->setToField("c");
ProtoBody20->addChildren(*ROUTE63);

CROUTE* ROUTE64 = new CROUTE();
ROUTE64->setFromNode("Animate");
ROUTE64->setFromField("d");
ROUTE64->setToNode("x_ite");
ROUTE64->setToField("d");
ProtoBody20->addChildren(*ROUTE64);

CROUTE* ROUTE65 = new CROUTE();
ROUTE65->setFromNode("Animate");
ROUTE65->setFromField("pdelta");
ROUTE65->setToNode("x_ite");
ROUTE65->setToField("pdelta");
ProtoBody20->addChildren(*ROUTE65);

CROUTE* ROUTE66 = new CROUTE();
ROUTE66->setFromNode("Animate");
ROUTE66->setFromField("tdelta");
ROUTE66->setToNode("x_ite");
ROUTE66->setToField("tdelta");
ProtoBody20->addChildren(*ROUTE66);

//<ROUTE fromNode='Animate' fromField='a' toNode='x3dom' toField='a'/> <ROUTE fromNode='Animate' fromField='b' toNode='x3dom' toField='b'/> <ROUTE fromNode='Animate' fromField='c' toNode='x3dom' toField='c'/> <ROUTE fromNode='Animate' fromField='d' toNode='x3dom' toField='d'/> <ROUTE fromNode='Animate' fromField='pdelta' toNode='x3dom' toField='pdelta'/> <ROUTE fromNode='Animate' fromField='tdelta' toNode='x3dom' toField='tdelta'/>
ProtoDeclare19->setProtoBody(*ProtoBody20);

group->addChildren(*ProtoDeclare19);

CProtoInstance* ProtoInstance67 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance67->setName("flower");
group->addChildren(*ProtoInstance67);

CProtoInstance* ProtoInstance68 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance68->setName("flower");
group->addChildren(*ProtoInstance68);

CProtoInstance* ProtoInstance69 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance69->setName("flower");
group->addChildren(*ProtoInstance69);

X3D0->setScene(*Scene16);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

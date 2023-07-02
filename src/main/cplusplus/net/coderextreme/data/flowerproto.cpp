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
meta11->setContent("flowerproto.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("creator");
meta12->setContent("John Carlson");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("description");
meta13->setContent("A flower proto with configurable shaders");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("generator");
meta14->setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("identifier");
meta15->setContent("https://coderextreme.net/X3DJSONLD/flowerproto.x3d");
head1->addMeta(*meta15);

X3D0->setHead(*head1);

CScene* Scene16 = new CScene();
CProtoDeclare ProtoDeclare17 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="FlowerProto" ><ProtoInterface><field name="vertex" accessType="inputOutput" type="MFString" value="&quot;../shaders/gl_flowers_chromatic.vs&quot;"></field>
<field name="fragment" accessType="inputOutput" type="MFString" value="&quot;../shaders/pc_flowers.fs&quot;"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="transform"><Shape><Appearance><Material diffuseColor="0.7 0.7 0.7" specularColor="0.5 0.5 0.5"></Material>
<ComposedCubeMapTexture containerField="texture" DEF="texture"><ImageTexture containerField="back" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_back.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png&quot;"></ImageTexture>
<ImageTexture containerField="bottom" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png&quot;"></ImageTexture>
<ImageTexture containerField="front" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_front.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png&quot;"></ImageTexture>
<ImageTexture containerField="left" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_left.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png&quot;"></ImageTexture>
<ImageTexture containerField="right" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_right.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png&quot;"></ImageTexture>
<ImageTexture containerField="top" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_top.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png&quot;"></ImageTexture>
</ComposedCubeMapTexture>
<ComposedShader DEF="shader" language="GLSL"><field name="cube" type="SFInt32" accessType="inputOutput" value="0"></field>
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
<!--<field name='cube' type='SFNode' accessType="inputOutput"> <ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture> </field>--><ShaderPart type="VERTEX"><IS><connect nodeField="url" protoField="vertex"></connect>
</IS>
</ShaderPart>
<ShaderPart type="FRAGMENT"><IS><connect nodeField="url" protoField="fragment"></connect>
</IS>
</ShaderPart>
</ComposedShader>
</Appearance>
<Sphere containerField="geometry"></Sphere>
</Shape>
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
				tdelta += 0.5;
				pdelta += 0.5;
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
<ROUTE fromNode="Animate" fromField="translation_changed" toNode="transform" toField="set_translation"></ROUTE>
<ROUTE fromNode="Animate" fromField="a" toNode="shader" toField="a"></ROUTE>
<ROUTE fromNode="Animate" fromField="b" toNode="shader" toField="b"></ROUTE>
<ROUTE fromNode="Animate" fromField="c" toNode="shader" toField="c"></ROUTE>
<ROUTE fromNode="Animate" fromField="d" toNode="shader" toField="d"></ROUTE>
<ROUTE fromNode="Animate" fromField="tdelta" toNode="shader" toField="tdelta"></ROUTE>
<ROUTE fromNode="Animate" fromField="pdelta" toNode="shader" toField="pdelta"></ROUTE>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare17->setName("FlowerProto");
CProtoInterface* ProtoInterface18 = new CProtoInterface();
Cfield* field19 = new Cfield();
field19->setName("vertex");
field19->setAccessType("inputOutput");
field19->setType("MFString");
field19->setValue("\"../shaders/gl_flowers_chromatic.vs\"");
ProtoInterface18->addField(*field19);

Cfield* field20 = new Cfield();
field20->setName("fragment");
field20->setAccessType("inputOutput");
field20->setType("MFString");
field20->setValue("\"../shaders/pc_flowers.fs\"");
ProtoInterface18->addField(*field20);

ProtoDeclare17->setProtoInterface(*ProtoInterface18);

CProtoBody* ProtoBody21 = new CProtoBody();
CTransform* Transform22 = (CTransform *)(m_pScene.createNode("Transform"));
Transform22->setDEF("transform");
CShape* Shape23 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance24 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material25 = (CMaterial *)(m_pScene.createNode("Material"));
Material25->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material25->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance24->setMaterial(*Material25);

CComposedCubeMapTexture* ComposedCubeMapTexture26 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture26->setDEF("texture");
CImageTexture* ImageTexture27 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture27->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
ComposedCubeMapTexture26->setBack(*ImageTexture27);

CImageTexture* ImageTexture28 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture28->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
ComposedCubeMapTexture26->setBottom(*ImageTexture28);

CImageTexture* ImageTexture29 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture29->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
ComposedCubeMapTexture26->setFront(*ImageTexture29);

CImageTexture* ImageTexture30 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture30->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
ComposedCubeMapTexture26->setLeft(*ImageTexture30);

CImageTexture* ImageTexture31 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture31->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
ComposedCubeMapTexture26->setRight(*ImageTexture31);

CImageTexture* ImageTexture32 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture32->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
ComposedCubeMapTexture26->setTop(*ImageTexture32);

Appearance24->setTexture(*ComposedCubeMapTexture26);

CComposedShader* ComposedShader33 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader33->setDEF("shader");
ComposedShader33->setLanguage("GLSL");
Cfield* field34 = new Cfield();
field34->setName("cube");
field34->setType("SFInt32");
field34->setAccessType("inputOutput");
field34->setValue("0");
ComposedShader33->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("chromaticDispertion");
field35->setAccessType("initializeOnly");
field35->setType("SFVec3f");
field35->setValue("0.98 1 1.033");
ComposedShader33->addField(*field35);

Cfield* field36 = new Cfield();
field36->setName("bias");
field36->setType("SFFloat");
field36->setAccessType("inputOutput");
field36->setValue("0.5");
ComposedShader33->addField(*field36);

Cfield* field37 = new Cfield();
field37->setName("scale");
field37->setType("SFFloat");
field37->setAccessType("inputOutput");
field37->setValue("0.5");
ComposedShader33->addField(*field37);

Cfield* field38 = new Cfield();
field38->setName("power");
field38->setType("SFFloat");
field38->setAccessType("inputOutput");
field38->setValue("2");
ComposedShader33->addField(*field38);

Cfield* field39 = new Cfield();
field39->setName("a");
field39->setType("SFFloat");
field39->setAccessType("inputOutput");
field39->setValue("10");
ComposedShader33->addField(*field39);

Cfield* field40 = new Cfield();
field40->setName("b");
field40->setType("SFFloat");
field40->setAccessType("inputOutput");
field40->setValue("1");
ComposedShader33->addField(*field40);

Cfield* field41 = new Cfield();
field41->setName("c");
field41->setType("SFFloat");
field41->setAccessType("inputOutput");
field41->setValue("20");
ComposedShader33->addField(*field41);

Cfield* field42 = new Cfield();
field42->setName("d");
field42->setType("SFFloat");
field42->setAccessType("inputOutput");
field42->setValue("20");
ComposedShader33->addField(*field42);

Cfield* field43 = new Cfield();
field43->setName("tdelta");
field43->setType("SFFloat");
field43->setAccessType("inputOutput");
field43->setValue("0");
ComposedShader33->addField(*field43);

Cfield* field44 = new Cfield();
field44->setName("pdelta");
field44->setType("SFFloat");
field44->setAccessType("inputOutput");
field44->setValue("0");
ComposedShader33->addField(*field44);

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
CShaderPart* ShaderPart45 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart45->setType("VERTEX");
CIS* IS46 = new CIS();
Cconnect* connect47 = new Cconnect();
connect47->setNodeField("url");
connect47->setProtoField("vertex");
IS46->addConnect(*connect47);

ShaderPart45->setIS(*IS46);

ComposedShader33->addParts(*ShaderPart45);

CShaderPart* ShaderPart48 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart48->setType("FRAGMENT");
CIS* IS49 = new CIS();
Cconnect* connect50 = new Cconnect();
connect50->setNodeField("url");
connect50->setProtoField("fragment");
IS49->addConnect(*connect50);

ShaderPart48->setIS(*IS49);

ComposedShader33->addParts(*ShaderPart48);

Appearance24->addShaders(*ComposedShader33);

Shape23->setAppearance(*Appearance24);

CSphere* Sphere51 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape23->setGeometry(Sphere51);

Transform22->addChildren(*Shape23);

CScript* Script52 = (CScript *)(m_pScene.createNode("Script"));
Script52->setDEF("Animate");
Cfield* field53 = new Cfield();
field53->setName("translation");
field53->setAccessType("inputOutput");
field53->setType("SFVec3f");
field53->setValue("0 0 0");
Script52->addField(*field53);

Cfield* field54 = new Cfield();
field54->setName("velocity");
field54->setAccessType("inputOutput");
field54->setType("SFVec3f");
field54->setValue("0 0 0");
Script52->addField(*field54);

Cfield* field55 = new Cfield();
field55->setName("set_fraction");
field55->setAccessType("inputOnly");
field55->setType("SFFloat");
Script52->addField(*field55);

Cfield* field56 = new Cfield();
field56->setName("a");
field56->setType("SFFloat");
field56->setAccessType("inputOutput");
field56->setValue("0.5");
Script52->addField(*field56);

Cfield* field57 = new Cfield();
field57->setName("b");
field57->setType("SFFloat");
field57->setAccessType("inputOutput");
field57->setValue("0.5");
Script52->addField(*field57);

Cfield* field58 = new Cfield();
field58->setName("c");
field58->setType("SFFloat");
field58->setAccessType("inputOutput");
field58->setValue("3");
Script52->addField(*field58);

Cfield* field59 = new Cfield();
field59->setName("d");
field59->setType("SFFloat");
field59->setAccessType("inputOutput");
field59->setValue("3");
Script52->addField(*field59);

Cfield* field60 = new Cfield();
field60->setName("tdelta");
field60->setType("SFFloat");
field60->setAccessType("inputOutput");
field60->setValue("0.5");
Script52->addField(*field60);

Cfield* field61 = new Cfield();
field61->setName("pdelta");
field61->setType("SFFloat");
field61->setAccessType("inputOutput");
field61->setValue("0.5");
Script52->addField(*field61);


Script52.setSourceCode(`ecmascript:\n"+
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
"				tdelta += 0.5;\n"+
"				pdelta += 0.5;\n"+
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
Transform22->addChildren(*Script52);

CTimeSensor* TimeSensor62 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor62->setDEF("TourTime");
TimeSensor62->setCycleInterval(5);
TimeSensor62->setLoop(True);
Transform22->addChildren(*TimeSensor62);

CROUTE* ROUTE63 = new CROUTE();
ROUTE63->setFromNode("TourTime");
ROUTE63->setFromField("fraction_changed");
ROUTE63->setToNode("Animate");
ROUTE63->setToField("set_fraction");
Transform22->addChildren(*ROUTE63);

CROUTE* ROUTE64 = new CROUTE();
ROUTE64->setFromNode("Animate");
ROUTE64->setFromField("translation_changed");
ROUTE64->setToNode("transform");
ROUTE64->setToField("set_translation");
Transform22->addChildren(*ROUTE64);

CROUTE* ROUTE65 = new CROUTE();
ROUTE65->setFromNode("Animate");
ROUTE65->setFromField("a");
ROUTE65->setToNode("shader");
ROUTE65->setToField("a");
Transform22->addChildren(*ROUTE65);

CROUTE* ROUTE66 = new CROUTE();
ROUTE66->setFromNode("Animate");
ROUTE66->setFromField("b");
ROUTE66->setToNode("shader");
ROUTE66->setToField("b");
Transform22->addChildren(*ROUTE66);

CROUTE* ROUTE67 = new CROUTE();
ROUTE67->setFromNode("Animate");
ROUTE67->setFromField("c");
ROUTE67->setToNode("shader");
ROUTE67->setToField("c");
Transform22->addChildren(*ROUTE67);

CROUTE* ROUTE68 = new CROUTE();
ROUTE68->setFromNode("Animate");
ROUTE68->setFromField("d");
ROUTE68->setToNode("shader");
ROUTE68->setToField("d");
Transform22->addChildren(*ROUTE68);

CROUTE* ROUTE69 = new CROUTE();
ROUTE69->setFromNode("Animate");
ROUTE69->setFromField("tdelta");
ROUTE69->setToNode("shader");
ROUTE69->setToField("tdelta");
Transform22->addChildren(*ROUTE69);

CROUTE* ROUTE70 = new CROUTE();
ROUTE70->setFromNode("Animate");
ROUTE70->setFromField("pdelta");
ROUTE70->setToNode("shader");
ROUTE70->setToField("pdelta");
Transform22->addChildren(*ROUTE70);

ProtoBody21->addChildren(*Transform22);

ProtoDeclare17->setProtoBody(*ProtoBody21);

group->addChildren(*ProtoDeclare17);

X3D0->setScene(*Scene16);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

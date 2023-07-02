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
meta11->setContent("bub.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("creator");
meta12->setContent("John Carlson");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("description");
meta13->setContent("3 prismatic spheres");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("generator");
meta14->setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("identifier");
meta15->setContent("https://coderextreme.net/X3DJSONLD/bub.x3d");
head1->addMeta(*meta15);

X3D0->setHead(*head1);

CScene* Scene16 = new CScene();
CNavigationInfo* NavigationInfo17 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo17);

CBackground* Background18 = (CBackground *)(m_pScene.createNode("Background"));
Background18->setBackUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background18->setBottomUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background18->setFrontUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background18->setLeftUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background18->setRightUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background18->setTopUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
group->addChildren(*Background18);

CViewpoint* Viewpoint19 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint19->setPosition(new float[3]{0,0,20});
Viewpoint19->setDescription("Look at the bubbles flying");
group->addChildren(*Viewpoint19);

CProtoDeclare ProtoDeclare20 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Bubble" ><ProtoBody><Transform DEF="transform"><Shape DEF="myShape"><Appearance><Material diffuseColor="0.7 0.7 0.7" specularColor="0.5 0.5 0.5"></Material>
<ComposedCubeMapTexture containerField="texture" DEF="texture"><ImageTexture containerField="back" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_back.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png&quot;"></ImageTexture>
<ImageTexture containerField="bottom" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_bottom.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png&quot;"></ImageTexture>
<ImageTexture containerField="front" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_front.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png&quot;"></ImageTexture>
<ImageTexture containerField="left" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_left.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png&quot;"></ImageTexture>
<ImageTexture containerField="right" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_right.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png&quot;"></ImageTexture>
<ImageTexture containerField="top" url="&quot;../resources/images/all_probes/stpeters_cross/stpeters_top.png&quot; &quot;https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png&quot;"></ImageTexture>
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
<Sphere containerField="geometry"></Sphere>
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
ProtoDeclare20->setName("Bubble");
CProtoBody* ProtoBody21 = new CProtoBody();
CTransform* Transform22 = (CTransform *)(m_pScene.createNode("Transform"));
Transform22->setDEF("transform");
CShape* Shape23 = (CShape *)(m_pScene.createNode("Shape"));
Shape23->setDEF("myShape");
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

//<ComposedShader DEF='gl' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/gl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language=\"GLSL\"> <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader DEF='instant' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
CComposedShader* ComposedShader33 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader33->setDEF("x3dom");
ComposedShader33->setLanguage("GLSL");
Cfield* field34 = new Cfield();
field34->setName("cube");
field34->setType("SFInt32");
field34->setAccessType("inputOutput");
field34->setValue("0");
ComposedShader33->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("chromaticDispertion");
field35->setType("SFVec3f");
field35->setAccessType("inputOutput");
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

CShaderPart* ShaderPart39 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart39->setUrl(new CString[2]{"../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ShaderPart39->setType("VERTEX");
ComposedShader33->addParts(*ShaderPart39);

CShaderPart* ShaderPart40 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart40->setUrl(new CString[2]{"../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"}, 2);
ShaderPart40->setType("FRAGMENT");
ComposedShader33->addParts(*ShaderPart40);

Appearance24->addShaders(*ComposedShader33);

CComposedShader* ComposedShader41 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader41->setDEF("x_ite");
ComposedShader41->setLanguage("GLSL");
Cfield* field42 = new Cfield();
field42->setName("cube");
field42->setType("SFNode");
field42->setAccessType("inputOutput");
CComposedCubeMapTexture* ComposedCubeMapTexture43 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture43->setUSE("texture");
field42->addChildren(*ComposedCubeMapTexture43);

ComposedShader41->addField(*field42);

Cfield* field44 = new Cfield();
field44->setName("chromaticDispertion");
field44->setType("SFVec3f");
field44->setAccessType("inputOutput");
field44->setValue("0.98 1 1.033");
ComposedShader41->addField(*field44);

Cfield* field45 = new Cfield();
field45->setName("bias");
field45->setType("SFFloat");
field45->setAccessType("inputOutput");
field45->setValue("0.5");
ComposedShader41->addField(*field45);

Cfield* field46 = new Cfield();
field46->setName("scale");
field46->setType("SFFloat");
field46->setAccessType("inputOutput");
field46->setValue("0.5");
ComposedShader41->addField(*field46);

Cfield* field47 = new Cfield();
field47->setName("power");
field47->setType("SFFloat");
field47->setAccessType("inputOutput");
field47->setValue("2");
ComposedShader41->addField(*field47);

CShaderPart* ShaderPart48 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart48->setUrl(new CString[2]{"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 2);
ShaderPart48->setType("VERTEX");
ComposedShader41->addParts(*ShaderPart48);

CShaderPart* ShaderPart49 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart49->setUrl(new CString[2]{"../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"}, 2);
ShaderPart49->setType("FRAGMENT");
ComposedShader41->addParts(*ShaderPart49);

Appearance24->addShaders(*ComposedShader41);

Shape23->setAppearance(*Appearance24);

CSphere* Sphere50 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape23->setGeometry(Sphere50);

Transform22->addChildren(*Shape23);

ProtoBody21->addChildren(*Transform22);

CScript* Script51 = (CScript *)(m_pScene.createNode("Script"));
Script51->setDEF("Bounce");
Cfield* field52 = new Cfield();
field52->setName("translation");
field52->setAccessType("inputOutput");
field52->setType("SFVec3f");
field52->setValue("0 0 0");
Script51->addField(*field52);

Cfield* field53 = new Cfield();
field53->setName("velocity");
field53->setAccessType("inputOutput");
field53->setType("SFVec3f");
field53->setValue("0 0 0");
Script51->addField(*field53);

Cfield* field54 = new Cfield();
field54->setName("set_fraction");
field54->setAccessType("inputOnly");
field54->setType("SFTime");
Script51->addField(*field54);


Script51.setSourceCode(`ecmascript:\n"+
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
ProtoBody21->addChildren(*Script51);

CTimeSensor* TimeSensor55 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor55->setDEF("TourTime");
TimeSensor55->setCycleInterval(0.15);
TimeSensor55->setLoop(True);
ProtoBody21->addChildren(*TimeSensor55);

CROUTE* ROUTE56 = new CROUTE();
ROUTE56->setFromNode("TourTime");
ROUTE56->setFromField("cycleTime");
ROUTE56->setToNode("Bounce");
ROUTE56->setToField("set_fraction");
ProtoBody21->addChildren(*ROUTE56);

CROUTE* ROUTE57 = new CROUTE();
ROUTE57->setFromNode("Bounce");
ROUTE57->setFromField("translation_changed");
ROUTE57->setToNode("transform");
ROUTE57->setToField("set_translation");
ProtoBody21->addChildren(*ROUTE57);

ProtoDeclare20->setProtoBody(*ProtoBody21);

group->addChildren(*ProtoDeclare20);

CProtoInstance* ProtoInstance58 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance58->setName("Bubble");
group->addChildren(*ProtoInstance58);

CProtoInstance* ProtoInstance59 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance59->setName("Bubble");
group->addChildren(*ProtoInstance59);

CProtoInstance* ProtoInstance60 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance60->setName("Bubble");
group->addChildren(*ProtoInstance60);

X3D0->setScene(*Scene16);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

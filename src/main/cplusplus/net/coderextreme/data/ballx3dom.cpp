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
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("ballx3dom.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("creator");
meta3->setContent("John Carlson");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("generator");
meta4->setContent("manual");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("identifier");
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d");
head1->addMeta(*meta5);

Ccomponent* component6 = new Ccomponent();
component6->setName("Scripting");
component6->setLevel(1);
head1->addComponent(*component6);

Ccomponent* component7 = new Ccomponent();
component7->setName("EnvironmentalEffects");
component7->setLevel(3);
head1->addComponent(*component7);

Ccomponent* component8 = new Ccomponent();
component8->setName("Shaders");
component8->setLevel(1);
head1->addComponent(*component8);

Ccomponent* component9 = new Ccomponent();
component9->setName("CubeMapTexturing");
component9->setLevel(1);
head1->addComponent(*component9);

Ccomponent* component10 = new Ccomponent();
component10->setName("Texturing");
component10->setLevel(1);
head1->addComponent(*component10);

Ccomponent* component11 = new Ccomponent();
component11->setName("Rendering");
component11->setLevel(1);
head1->addComponent(*component11);

Ccomponent* component12 = new Ccomponent();
component12->setName("Grouping");
component12->setLevel(3);
head1->addComponent(*component12);

Ccomponent* component13 = new Ccomponent();
component13->setName("Core");
component13->setLevel(1);
head1->addComponent(*component13);

X3D0->setHead(*head1);

CScene* Scene14 = new CScene();
CWorldInfo* WorldInfo15 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo15->setTitle("ball.x3d");
group->addChildren(*WorldInfo15);

CNavigationInfo* NavigationInfo16 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo16->setType(new CString[4]{"ANY","EXAMINE","FLY","LOOKAT"}, 4);
group->addChildren(*NavigationInfo16);

CViewpoint* Viewpoint17 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint17->setDescription("Tour Views");
group->addChildren(*Viewpoint17);

CBackground* Background18 = (CBackground *)(m_pScene.createNode("Background"));
Background18->setFrontUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background18->setBackUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background18->setLeftUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background18->setRightUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background18->setTopUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
Background18->setBottomUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
group->addChildren(*Background18);

CTransform* Transform19 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape20 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance21 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material22 = (CMaterial *)(m_pScene.createNode("Material"));
Material22->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material22->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance21->setMaterial(*Material22);

CComposedCubeMapTexture* ComposedCubeMapTexture23 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture23->setDEF("texture");
Appearance21->setTexture(*ComposedCubeMapTexture23);

CComposedShader* ComposedShader24 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader24->setLanguage("GLSL");
CShaderPart* ShaderPart25 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart25->setUrl(new CString[2]{"../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ComposedShader24->addParts(*ShaderPart25);

CShaderPart* ShaderPart26 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart26->setDEF("common");
ShaderPart26->setType("FRAGMENT");
ShaderPart26->setUrl(new CString[2]{"../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"}, 2);
ComposedShader24->addParts(*ShaderPart26);

Cfield* field27 = new Cfield();
field27->setAccessType("inputOutput");
field27->setType("SFVec3f");
field27->setName("chromaticDispertion");
field27->setValue("0.98 1 1.033");
ComposedShader24->addField(*field27);

Cfield* field28 = new Cfield();
field28->setAccessType("inputOutput");
field28->setType("SFNode");
field28->setName("cube");
CComposedCubeMapTexture* ComposedCubeMapTexture29 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture29->setUSE("texture");
field28->addChildren(*ComposedCubeMapTexture29);

ComposedShader24->addField(*field28);

Cfield* field30 = new Cfield();
field30->setAccessType("inputOutput");
field30->setType("SFFloat");
field30->setName("bias");
field30->setValue("0.5");
ComposedShader24->addField(*field30);

Cfield* field31 = new Cfield();
field31->setAccessType("inputOutput");
field31->setType("SFFloat");
field31->setName("scale");
field31->setValue("0.5");
ComposedShader24->addField(*field31);

Cfield* field32 = new Cfield();
field32->setAccessType("inputOutput");
field32->setType("SFFloat");
field32->setName("power");
field32->setValue("2");
ComposedShader24->addField(*field32);

Appearance21->addShaders(*ComposedShader24);

Shape20->setAppearance(*Appearance21);

CSphere* Sphere33 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape20->setGeometry(Sphere33);

Transform19->addChild(*Shape20);

group->addChildren(*Transform19);

X3D0->setScene(*Scene14);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

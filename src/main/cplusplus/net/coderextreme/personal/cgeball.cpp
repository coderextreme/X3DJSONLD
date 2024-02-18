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
component4->setName("Texturing");
component4->setLevel(1);
head1->addComponent(*component4);

Ccomponent* component5 = new Ccomponent();
component5->setName("Rendering");
component5->setLevel(1);
head1->addComponent(*component5);

Ccomponent* component6 = new Ccomponent();
component6->setName("Grouping");
component6->setLevel(3);
head1->addComponent(*component6);

Ccomponent* component7 = new Ccomponent();
component7->setName("Core");
component7->setLevel(1);
head1->addComponent(*component7);

//component name='Shaders' level='1'></component
//component name='CubeMapTexturing' level='1'></component
Cmeta* meta8 = new Cmeta();
meta8->setName("title");
meta8->setContent("ball.x3d");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("creator");
meta9->setContent("John Carlson");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("generator");
meta10->setContent("manual");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("identifier");
meta11->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("description");
meta12->setContent("a prismatic sphere");
head1->addMeta(*meta12);

X3D0->setHead(*head1);

CScene* Scene13 = new CScene();
CWorldInfo* WorldInfo14 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo14->setTitle("ball.x3d");
group->addChildren(*WorldInfo14);

CNavigationInfo* NavigationInfo15 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo15->setType(new CString[4]{"ANY","EXAMINE","FLY","LOOKAT"}, 4);
group->addChildren(*NavigationInfo15);

CViewpoint* Viewpoint16 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint16->setDescription("Tour Views");
Viewpoint16->setPosition(new float[3]{0,0,12});
group->addChildren(*Viewpoint16);

CBackground* Background17 = (CBackground *)(m_pScene.createNode("Background"));
Background17->setBackUrl(new CString[1]{"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 1);
Background17->setBottomUrl(new CString[1]{"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 1);
Background17->setFrontUrl(new CString[1]{"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 1);
Background17->setLeftUrl(new CString[1]{"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 1);
Background17->setRightUrl(new CString[1]{"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 1);
Background17->setTopUrl(new CString[1]{"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 1);
group->addChildren(*Background17);

CTransform* Transform18 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape19 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere20 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape19->setGeometry(Sphere20);

CAppearance* Appearance21 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material22 = (CMaterial *)(m_pScene.createNode("Material"));
Material22->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material22->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance21->setMaterial(*Material22);

CComposedCubeMapTexture* ComposedCubeMapTexture23 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture23->setDEF("texture");
CImageTexture* ImageTexture24 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture24->setUrl(new CString[1]{"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 1);
ComposedCubeMapTexture23->setBackTexture(*ImageTexture24);

CImageTexture* ImageTexture25 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture25->setUrl(new CString[1]{"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 1);
ComposedCubeMapTexture23->setBottomTexture(*ImageTexture25);

CImageTexture* ImageTexture26 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture26->setUrl(new CString[1]{"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 1);
ComposedCubeMapTexture23->setFrontTexture(*ImageTexture26);

CImageTexture* ImageTexture27 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture27->setUrl(new CString[1]{"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 1);
ComposedCubeMapTexture23->setLeftTexture(*ImageTexture27);

CImageTexture* ImageTexture28 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture28->setUrl(new CString[1]{"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 1);
ComposedCubeMapTexture23->setRightTexture(*ImageTexture28);

CImageTexture* ImageTexture29 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture29->setUrl(new CString[1]{"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 1);
ComposedCubeMapTexture23->setTopTexture(*ImageTexture29);

Appearance21->setTexture(*ComposedCubeMapTexture23);

CComposedShader* ComposedShader30 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader30->setLanguage("GLSL");
Cfield* field31 = new Cfield();
field31->setName("chromaticDispertion");
field31->setAccessType("inputOutput");
field31->setType("SFVec3f");
field31->setValue("0.98 1 1.033");
ComposedShader30->addField(*field31);

Cfield* field32 = new Cfield();
field32->setName("cube");
field32->setType("SFNode");
field32->setAccessType("inputOutput");
CComposedCubeMapTexture* ComposedCubeMapTexture33 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture33->setUSE("texture");
field32->addChildren(*ComposedCubeMapTexture33);

ComposedShader30->addField(*field32);

Cfield* field34 = new Cfield();
field34->setName("bias");
field34->setAccessType("inputOutput");
field34->setType("SFFloat");
field34->setValue("0.5");
ComposedShader30->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("scale");
field35->setAccessType("inputOutput");
field35->setType("SFFloat");
field35->setValue("0.5");
ComposedShader30->addField(*field35);

Cfield* field36 = new Cfield();
field36->setName("power");
field36->setAccessType("inputOutput");
field36->setType("SFFloat");
field36->setValue("2");
ComposedShader30->addField(*field36);

CShaderPart* ShaderPart37 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart37->setUrl(new CString[2]{"../shaders/castle.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs"}, 2);
ShaderPart37->setType("VERTEX");
ComposedShader30->addParts(*ShaderPart37);

CShaderPart* ShaderPart38 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart38->setDEF("commonfs");
ShaderPart38->setUrl(new CString[2]{"../shaders/castle.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs"}, 2);
ShaderPart38->setType("FRAGMENT");
ComposedShader30->addParts(*ShaderPart38);

Appearance21->addShaders(*ComposedShader30);

Shape19->setAppearance(*Appearance21);

Transform18->addChild(*Shape19);

group->addChildren(*Transform18);

X3D0->setScene(*Scene13);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

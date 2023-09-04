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
meta2->setContent("geo.x3d");
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
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d");
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
component12->setName("Shape");
component12->setLevel(4);
head1->addComponent(*component12);

Ccomponent* component13 = new Ccomponent();
component13->setName("Grouping");
component13->setLevel(3);
head1->addComponent(*component13);

Ccomponent* component14 = new Ccomponent();
component14->setName("Core");
component14->setLevel(1);
head1->addComponent(*component14);

X3D0->setHead(*head1);

CScene* Scene15 = new CScene();
CNavigationInfo* NavigationInfo16 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo16->setType(new CString[4]{"ANY","EXAMINE","FLY","LOOKAT"}, 4);
group->addChildren(*NavigationInfo16);

CViewpoint* Viewpoint17 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint17->setDEF("Tour");
Viewpoint17->setDescription("Tour Views");
group->addChildren(*Viewpoint17);

CBackground* Background18 = (CBackground *)(m_pScene.createNode("Background"));
Background18->setFrontUrl(new CString[2]{"../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"}, 2);
Background18->setBackUrl(new CString[2]{"../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"}, 2);
Background18->setLeftUrl(new CString[2]{"../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"}, 2);
Background18->setRightUrl(new CString[2]{"../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"}, 2);
Background18->setTopUrl(new CString[2]{"../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"}, 2);
Background18->setBottomUrl(new CString[2]{"../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"}, 2);
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

CComposedShader* ComposedShader33 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader33->setLanguage("GLSL");
CShaderPart* ShaderPart34 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart34->setUrl(new CString[2]{"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 2);
ComposedShader33->addParts(*ShaderPart34);

CShaderPart* ShaderPart35 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart35->setType("FRAGMENT");
ShaderPart35->setUrl(new CString[2]{"../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"}, 2);
ComposedShader33->addParts(*ShaderPart35);

Cfield* field36 = new Cfield();
field36->setAccessType("initializeOnly");
field36->setType("SFVec3f");
field36->setName("chromaticDispertion");
field36->setValue("0.98 1 1.033");
ComposedShader33->addField(*field36);

Cfield* field37 = new Cfield();
field37->setAccessType("initializeOnly");
field37->setType("SFNode");
field37->setName("cube");
CComposedCubeMapTexture* ComposedCubeMapTexture38 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture38->setUSE("texture");
field37->addChildren(*ComposedCubeMapTexture38);

ComposedShader33->addField(*field37);

Cfield* field39 = new Cfield();
field39->setAccessType("initializeOnly");
field39->setType("SFFloat");
field39->setName("bias");
field39->setValue("0.5");
ComposedShader33->addField(*field39);

Cfield* field40 = new Cfield();
field40->setAccessType("initializeOnly");
field40->setType("SFFloat");
field40->setName("scale");
field40->setValue("0.5");
ComposedShader33->addField(*field40);

Cfield* field41 = new Cfield();
field41->setAccessType("initializeOnly");
field41->setType("SFFloat");
field41->setName("power");
field41->setValue("2");
ComposedShader33->addField(*field41);

Appearance21->addShaders(*ComposedShader33);

Shape20->setAppearance(*Appearance21);

CSphere* Sphere42 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape20->setGeometry(Sphere42);

Transform19->addChild(*Shape20);

group->addChildren(*Transform19);

X3D0->setScene(*Scene15);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

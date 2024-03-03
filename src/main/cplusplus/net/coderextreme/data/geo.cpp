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
meta10->setContent("geo.x3d");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("creator");
meta11->setContent("John Carlson");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("generator");
meta12->setContent("manual");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("identifier");
meta13->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("description");
meta14->setContent("a sphere");
head1->addMeta(*meta14);

X3D0->setHead(*head1);

CScene* Scene15 = new CScene();
CNavigationInfo* NavigationInfo16 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo16->setType(new CString[4]{"ANY","EXAMINE","FLY","LOOKAT"}, 4);
group->addChildren(*NavigationInfo16);

CViewpoint* Viewpoint17 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint17->setDEF("Tour");
Viewpoint17->setDescription("Tour Views");
group->addChildren(*Viewpoint17);

//Viewpoint position='0 0 4' description='sphere in road'/
CBackground* Background18 = (CBackground *)(m_pScene.createNode("Background"));
Background18->setBackUrl(new CString[2]{"../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"}, 2);
Background18->setBottomUrl(new CString[2]{"../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"}, 2);
Background18->setFrontUrl(new CString[2]{"../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"}, 2);
Background18->setLeftUrl(new CString[2]{"../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"}, 2);
Background18->setRightUrl(new CString[2]{"../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"}, 2);
Background18->setTopUrl(new CString[2]{"../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"}, 2);
group->addChildren(*Background18);

CTransform* Transform19 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape20 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere21 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape20->setGeometry(Sphere21);

CAppearance* Appearance22 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material23 = (CMaterial *)(m_pScene.createNode("Material"));
Material23->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material23->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance22->setMaterial(*Material23);

CComposedCubeMapTexture* ComposedCubeMapTexture24 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture24->setDEF("texture");
CImageTexture* ImageTexture25 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture25->setUrl(new CString[2]{"../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"}, 2);
ComposedCubeMapTexture24->setBackTexture(*ImageTexture25);

CImageTexture* ImageTexture26 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture26->setUrl(new CString[2]{"../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"}, 2);
ComposedCubeMapTexture24->setBottomTexture(*ImageTexture26);

CImageTexture* ImageTexture27 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture27->setUrl(new CString[2]{"../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"}, 2);
ComposedCubeMapTexture24->setFrontTexture(*ImageTexture27);

CImageTexture* ImageTexture28 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture28->setUrl(new CString[2]{"../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"}, 2);
ComposedCubeMapTexture24->setLeftTexture(*ImageTexture28);

CImageTexture* ImageTexture29 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture29->setUrl(new CString[2]{"../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"}, 2);
ComposedCubeMapTexture24->setRightTexture(*ImageTexture29);

CImageTexture* ImageTexture30 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture30->setUrl(new CString[2]{"../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"}, 2);
ComposedCubeMapTexture24->setTopTexture(*ImageTexture30);

Appearance22->setTexture(*ComposedCubeMapTexture24);

CComposedShader* ComposedShader31 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader31->setLanguage("GLSL");
Cfield* field32 = new Cfield();
field32->setName("chromaticDispertion");
field32->setAccessType("inputOutput");
field32->setType("SFVec3f");
field32->setValue("0.98 1 1.033");
ComposedShader31->addField(*field32);

Cfield* field33 = new Cfield();
field33->setName("cube");
field33->setType("SFNode");
field33->setAccessType("inputOutput");
CComposedCubeMapTexture* ComposedCubeMapTexture34 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture34->setUSE("texture");
field33->addChildren(*ComposedCubeMapTexture34);

ComposedShader31->addField(*field33);

Cfield* field35 = new Cfield();
field35->setName("bias");
field35->setAccessType("inputOutput");
field35->setType("SFFloat");
field35->setValue("0.5");
ComposedShader31->addField(*field35);

Cfield* field36 = new Cfield();
field36->setName("scale");
field36->setAccessType("inputOutput");
field36->setType("SFFloat");
field36->setValue("0.5");
ComposedShader31->addField(*field36);

Cfield* field37 = new Cfield();
field37->setName("power");
field37->setAccessType("inputOutput");
field37->setType("SFFloat");
field37->setValue("2");
ComposedShader31->addField(*field37);

CShaderPart* ShaderPart38 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart38->setUrl(new CString[2]{"../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ShaderPart38->setType("VERTEX");
ComposedShader31->addParts(*ShaderPart38);

CShaderPart* ShaderPart39 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart39->setDEF("common");
ShaderPart39->setUrl(new CString[2]{"../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"}, 2);
ShaderPart39->setType("FRAGMENT");
ComposedShader31->addParts(*ShaderPart39);

Appearance22->addShaders(*ComposedShader31);

CComposedShader* ComposedShader40 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader40->setLanguage("GLSL");
Cfield* field41 = new Cfield();
field41->setName("chromaticDispertion");
field41->setAccessType("initializeOnly");
field41->setType("SFVec3f");
field41->setValue("0.98 1 1.033");
ComposedShader40->addField(*field41);

Cfield* field42 = new Cfield();
field42->setName("cube");
field42->setType("SFNode");
field42->setAccessType("initializeOnly");
CComposedCubeMapTexture* ComposedCubeMapTexture43 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture43->setUSE("texture");
field42->addChildren(*ComposedCubeMapTexture43);

ComposedShader40->addField(*field42);

Cfield* field44 = new Cfield();
field44->setName("bias");
field44->setAccessType("initializeOnly");
field44->setType("SFFloat");
field44->setValue("0.5");
ComposedShader40->addField(*field44);

Cfield* field45 = new Cfield();
field45->setName("scale");
field45->setAccessType("initializeOnly");
field45->setType("SFFloat");
field45->setValue("0.5");
ComposedShader40->addField(*field45);

Cfield* field46 = new Cfield();
field46->setName("power");
field46->setAccessType("initializeOnly");
field46->setType("SFFloat");
field46->setValue("2");
ComposedShader40->addField(*field46);

CShaderPart* ShaderPart47 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart47->setUrl(new CString[2]{"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 2);
ShaderPart47->setType("VERTEX");
ComposedShader40->addParts(*ShaderPart47);

CShaderPart* ShaderPart48 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart48->setUrl(new CString[2]{"../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"}, 2);
ShaderPart48->setType("FRAGMENT");
ComposedShader40->addParts(*ShaderPart48);

Appearance22->addShaders(*ComposedShader40);

Shape20->setAppearance(*Appearance22);

Transform19->addChild(*Shape20);

group->addChildren(*Transform19);

X3D0->setScene(*Scene15);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "/c/x3d-code/www.web3d.org/x3d/languages/cpp/X3DLib/X3DLib.h"
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
component2->setName("Shaders");
component2->setLevel(1);
head1->addComponent(*component2);

Ccomponent* component3 = new Ccomponent();
component3->setName("CubeMapTexturing");
component3->setLevel(1);
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
component6->setName("Shape");
component6->setLevel(4);
head1->addComponent(*component6);

Ccomponent* component7 = new Ccomponent();
component7->setName("Grouping");
component7->setLevel(3);
head1->addComponent(*component7);

Cmeta* meta8 = new Cmeta();
meta8->setName("title");
meta8->setContent("geo.x3d");
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
meta11->setContent("https://coderextreme.net/X3DJSONLD/geo.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("description");
meta12->setContent("a sphere");
head1->addMeta(*meta12);

X3D0->setHead(*head1);

CScene* Scene13 = new CScene();
CNavigationInfo* NavigationInfo14 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo14->setType(new CString[4]{"ANY","EXAMINE","FLY","LOOKAT"}, 4);
group->addChildren(*NavigationInfo14);

CViewpoint* Viewpoint15 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint15->setDEF("Tour");
Viewpoint15->setDescription("Tour Views");
group->addChildren(*Viewpoint15);

//Viewpoint position='0 0 4' description='sphere in road'/
CBackground* Background16 = (CBackground *)(m_pScene.createNode("Background"));
Background16->setBackUrl(new CString[2]{"../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"}, 2);
Background16->setBottomUrl(new CString[2]{"../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"}, 2);
Background16->setFrontUrl(new CString[2]{"../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"}, 2);
Background16->setLeftUrl(new CString[2]{"../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"}, 2);
Background16->setRightUrl(new CString[2]{"../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"}, 2);
Background16->setTopUrl(new CString[2]{"../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"}, 2);
group->addChildren(*Background16);

CTransform* Transform17 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape18 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere19 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape18->setGeometry(Sphere19);

CAppearance* Appearance20 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material21 = (CMaterial *)(m_pScene.createNode("Material"));
Material21->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material21->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance20->setMaterial(*Material21);

CComposedCubeMapTexture* ComposedCubeMapTexture22 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture22->setDEF("texture");
CImageTexture* ImageTexture23 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture23->setUrl(new CString[2]{"../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"}, 2);
ComposedCubeMapTexture22->setBack(*ImageTexture23);

CImageTexture* ImageTexture24 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture24->setUrl(new CString[2]{"../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"}, 2);
ComposedCubeMapTexture22->setBottom(*ImageTexture24);

CImageTexture* ImageTexture25 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture25->setUrl(new CString[2]{"../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"}, 2);
ComposedCubeMapTexture22->setFront(*ImageTexture25);

CImageTexture* ImageTexture26 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture26->setUrl(new CString[2]{"../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"}, 2);
ComposedCubeMapTexture22->setLeft(*ImageTexture26);

CImageTexture* ImageTexture27 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture27->setUrl(new CString[2]{"../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"}, 2);
ComposedCubeMapTexture22->setRight(*ImageTexture27);

CImageTexture* ImageTexture28 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture28->setUrl(new CString[2]{"../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"}, 2);
ComposedCubeMapTexture22->setTop(*ImageTexture28);

Appearance20->setTexture(*ComposedCubeMapTexture22);

CComposedShader* ComposedShader29 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader29->setLanguage("GLSL");
Cfield* field30 = new Cfield();
field30->setName("chromaticDispertion");
field30->setAccessType("inputOutput");
field30->setType("SFVec3f");
field30->setValue("0.98 1 1.033");
ComposedShader29->addField(*field30);

Cfield* field31 = new Cfield();
field31->setName("cube");
field31->setType("SFNode");
field31->setAccessType("inputOutput");
CComposedCubeMapTexture* ComposedCubeMapTexture32 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture32->setUSE("texture");
field31->addChildren(*ComposedCubeMapTexture32);

ComposedShader29->addField(*field31);

Cfield* field33 = new Cfield();
field33->setName("bias");
field33->setAccessType("inputOutput");
field33->setType("SFFloat");
field33->setValue("0.5");
ComposedShader29->addField(*field33);

Cfield* field34 = new Cfield();
field34->setName("scale");
field34->setAccessType("inputOutput");
field34->setType("SFFloat");
field34->setValue("0.5");
ComposedShader29->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("power");
field35->setAccessType("inputOutput");
field35->setType("SFFloat");
field35->setValue("2");
ComposedShader29->addField(*field35);

CShaderPart* ShaderPart36 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart36->setUrl(new CString[2]{"../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ShaderPart36->setType("VERTEX");
ComposedShader29->addParts(*ShaderPart36);

CShaderPart* ShaderPart37 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart37->setDEF("common");
ShaderPart37->setUrl(new CString[2]{"../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"}, 2);
ShaderPart37->setType("FRAGMENT");
ComposedShader29->addParts(*ShaderPart37);

Appearance20->addShaders(*ComposedShader29);

CComposedShader* ComposedShader38 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader38->setLanguage("GLSL");
Cfield* field39 = new Cfield();
field39->setName("chromaticDispertion");
field39->setAccessType("initializeOnly");
field39->setType("SFVec3f");
field39->setValue("0.98 1 1.033");
ComposedShader38->addField(*field39);

Cfield* field40 = new Cfield();
field40->setName("cube");
field40->setType("SFNode");
field40->setAccessType("initializeOnly");
CComposedCubeMapTexture* ComposedCubeMapTexture41 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture41->setUSE("texture");
field40->addChildren(*ComposedCubeMapTexture41);

ComposedShader38->addField(*field40);

Cfield* field42 = new Cfield();
field42->setName("bias");
field42->setAccessType("initializeOnly");
field42->setType("SFFloat");
field42->setValue("0.5");
ComposedShader38->addField(*field42);

Cfield* field43 = new Cfield();
field43->setName("scale");
field43->setAccessType("initializeOnly");
field43->setType("SFFloat");
field43->setValue("0.5");
ComposedShader38->addField(*field43);

Cfield* field44 = new Cfield();
field44->setName("power");
field44->setAccessType("initializeOnly");
field44->setType("SFFloat");
field44->setValue("2");
ComposedShader38->addField(*field44);

CShaderPart* ShaderPart45 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart45->setUrl(new CString[2]{"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 2);
ShaderPart45->setType("VERTEX");
ComposedShader38->addParts(*ShaderPart45);

CShaderPart* ShaderPart46 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart46->setUrl(new CString[2]{"../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"}, 2);
ShaderPart46->setType("FRAGMENT");
ComposedShader38->addParts(*ShaderPart46);

Appearance20->addShaders(*ComposedShader38);

Shape18->setAppearance(*Appearance20);

Transform17->addChildren(*Shape18);

group->addChildren(*Transform17);

X3D0->setScene(*Scene13);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

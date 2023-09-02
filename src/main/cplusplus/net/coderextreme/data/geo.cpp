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
meta11->setContent("geo.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("creator");
meta12->setContent("John Carlson");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("generator");
meta13->setContent("manual");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("identifier");
meta14->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("description");
meta15->setContent("a sphere");
head1->addMeta(*meta15);

X3D0->setHead(*head1);

CScene* Scene16 = new CScene();
CNavigationInfo* NavigationInfo17 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo17->setType(new CString[4]{"ANY","EXAMINE","FLY","LOOKAT"}, 4);
group->addChildren(*NavigationInfo17);

CViewpoint* Viewpoint18 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint18->setDEF("Tour");
Viewpoint18->setDescription("Tour Views");
group->addChildren(*Viewpoint18);

//Viewpoint position='0 0 4' description='sphere in road'/
CBackground* Background19 = (CBackground *)(m_pScene.createNode("Background"));
Background19->setBackUrl(new CString[2]{"../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"}, 2);
Background19->setBottomUrl(new CString[2]{"../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"}, 2);
Background19->setFrontUrl(new CString[2]{"../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"}, 2);
Background19->setLeftUrl(new CString[2]{"../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"}, 2);
Background19->setRightUrl(new CString[2]{"../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"}, 2);
Background19->setTopUrl(new CString[2]{"../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"}, 2);
group->addChildren(*Background19);

CTransform* Transform20 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape21 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere22 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape21->setGeometry(Sphere22);

CAppearance* Appearance23 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material24 = (CMaterial *)(m_pScene.createNode("Material"));
Material24->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material24->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance23->setMaterial(*Material24);

CComposedCubeMapTexture* ComposedCubeMapTexture25 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture25->setDEF("texture");
CImageTexture* ImageTexture26 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture26->setUrl(new CString[2]{"../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"}, 2);
ComposedCubeMapTexture25->setBack(*ImageTexture26);

CImageTexture* ImageTexture27 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture27->setUrl(new CString[2]{"../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"}, 2);
ComposedCubeMapTexture25->setBottom(*ImageTexture27);

CImageTexture* ImageTexture28 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture28->setUrl(new CString[2]{"../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"}, 2);
ComposedCubeMapTexture25->setFront(*ImageTexture28);

CImageTexture* ImageTexture29 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture29->setUrl(new CString[2]{"../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"}, 2);
ComposedCubeMapTexture25->setLeft(*ImageTexture29);

CImageTexture* ImageTexture30 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture30->setUrl(new CString[2]{"../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"}, 2);
ComposedCubeMapTexture25->setRight(*ImageTexture30);

CImageTexture* ImageTexture31 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture31->setUrl(new CString[2]{"../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"}, 2);
ComposedCubeMapTexture25->setTop(*ImageTexture31);

Appearance23->setTexture(*ComposedCubeMapTexture25);

CComposedShader* ComposedShader32 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader32->setLanguage("GLSL");
Cfield* field33 = new Cfield();
field33->setName("chromaticDispertion");
field33->setAccessType("inputOutput");
field33->setType("SFVec3f");
field33->setValue("0.98 1 1.033");
ComposedShader32->addField(*field33);

Cfield* field34 = new Cfield();
field34->setName("cube");
field34->setType("SFNode");
field34->setAccessType("inputOutput");
CComposedCubeMapTexture* ComposedCubeMapTexture35 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture35->setUSE("texture");
field34->addChildren(*ComposedCubeMapTexture35);

ComposedShader32->addField(*field34);

Cfield* field36 = new Cfield();
field36->setName("bias");
field36->setAccessType("inputOutput");
field36->setType("SFFloat");
field36->setValue("0.5");
ComposedShader32->addField(*field36);

Cfield* field37 = new Cfield();
field37->setName("scale");
field37->setAccessType("inputOutput");
field37->setType("SFFloat");
field37->setValue("0.5");
ComposedShader32->addField(*field37);

Cfield* field38 = new Cfield();
field38->setName("power");
field38->setAccessType("inputOutput");
field38->setType("SFFloat");
field38->setValue("2");
ComposedShader32->addField(*field38);

CShaderPart* ShaderPart39 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart39->setUrl(new CString[2]{"../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ShaderPart39->setType("VERTEX");
ComposedShader32->addParts(*ShaderPart39);

CShaderPart* ShaderPart40 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart40->setDEF("common");
ShaderPart40->setUrl(new CString[2]{"../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"}, 2);
ShaderPart40->setType("FRAGMENT");
ComposedShader32->addParts(*ShaderPart40);

Appearance23->addShaders(*ComposedShader32);

CComposedShader* ComposedShader41 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader41->setLanguage("GLSL");
Cfield* field42 = new Cfield();
field42->setName("chromaticDispertion");
field42->setAccessType("initializeOnly");
field42->setType("SFVec3f");
field42->setValue("0.98 1 1.033");
ComposedShader41->addField(*field42);

Cfield* field43 = new Cfield();
field43->setName("cube");
field43->setType("SFNode");
field43->setAccessType("initializeOnly");
CComposedCubeMapTexture* ComposedCubeMapTexture44 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture44->setUSE("texture");
field43->addChildren(*ComposedCubeMapTexture44);

ComposedShader41->addField(*field43);

Cfield* field45 = new Cfield();
field45->setName("bias");
field45->setAccessType("initializeOnly");
field45->setType("SFFloat");
field45->setValue("0.5");
ComposedShader41->addField(*field45);

Cfield* field46 = new Cfield();
field46->setName("scale");
field46->setAccessType("initializeOnly");
field46->setType("SFFloat");
field46->setValue("0.5");
ComposedShader41->addField(*field46);

Cfield* field47 = new Cfield();
field47->setName("power");
field47->setAccessType("initializeOnly");
field47->setType("SFFloat");
field47->setValue("2");
ComposedShader41->addField(*field47);

CShaderPart* ShaderPart48 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart48->setUrl(new CString[2]{"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 2);
ShaderPart48->setType("VERTEX");
ComposedShader41->addParts(*ShaderPart48);

CShaderPart* ShaderPart49 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart49->setUrl(new CString[2]{"../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"}, 2);
ShaderPart49->setType("FRAGMENT");
ComposedShader41->addParts(*ShaderPart49);

Appearance23->addShaders(*ComposedShader41);

Shape21->setAppearance(*Appearance23);

Transform20->addChild(*Shape21);

group->addChildren(*Transform20);

X3D0->setScene(*Scene16);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

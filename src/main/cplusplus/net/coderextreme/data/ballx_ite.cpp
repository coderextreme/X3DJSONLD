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
meta11->setContent("ball.x3d");
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
meta14->setContent("https://coderextreme.net/X3DJSONLD/ball.x3d");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("description");
meta15->setContent("a prismatic sphere");
head1->addMeta(*meta15);

X3D0->setHead(*head1);

CScene* Scene16 = new CScene();
CWorldInfo* WorldInfo17 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo17->setTitle("ball.x3d");
group->addChildren(*WorldInfo17);

CNavigationInfo* NavigationInfo18 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo18->setType(new CString[4]{"ANY","EXAMINE","FLY","LOOKAT"}, 4);
group->addChildren(*NavigationInfo18);

CViewpoint* Viewpoint19 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint19->setDescription("Tour Views");
group->addChildren(*Viewpoint19);

CBackground* Background20 = (CBackground *)(m_pScene.createNode("Background"));
Background20->setBackUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background20->setBottomUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background20->setFrontUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background20->setLeftUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background20->setRightUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background20->setTopUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
group->addChildren(*Background20);

CTransform* Transform21 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape22 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere23 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape22->setGeometry(Sphere23);

CAppearance* Appearance24 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material25 = (CMaterial *)(m_pScene.createNode("Material"));
Material25->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material25->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance24->setMaterial(*Material25);

CComposedCubeMapTexture* ComposedCubeMapTexture26 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture26->setDEF("texture");
CImageTexture* ImageTexture27 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture27->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
ComposedCubeMapTexture26->setBackTexture(*ImageTexture27);

CImageTexture* ImageTexture28 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture28->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
ComposedCubeMapTexture26->setBottomTexture(*ImageTexture28);

CImageTexture* ImageTexture29 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture29->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
ComposedCubeMapTexture26->setFrontTexture(*ImageTexture29);

CImageTexture* ImageTexture30 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture30->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
ComposedCubeMapTexture26->setLeftTexture(*ImageTexture30);

CImageTexture* ImageTexture31 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture31->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
ComposedCubeMapTexture26->setRightTexture(*ImageTexture31);

CImageTexture* ImageTexture32 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture32->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
ComposedCubeMapTexture26->setTopTexture(*ImageTexture32);

Appearance24->setTexture(*ComposedCubeMapTexture26);

CComposedShader* ComposedShader33 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader33->setLanguage("GLSL");
Cfield* field34 = new Cfield();
field34->setName("chromaticDispertion");
field34->setAccessType("initializeOnly");
field34->setType("SFVec3f");
field34->setValue("0.98 1 1.033");
ComposedShader33->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("cube");
field35->setType("SFNode");
field35->setAccessType("initializeOnly");
CComposedCubeMapTexture* ComposedCubeMapTexture36 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
ComposedCubeMapTexture36->setUSE("texture");
field35->addChildren(*ComposedCubeMapTexture36);

ComposedShader33->addField(*field35);

Cfield* field37 = new Cfield();
field37->setName("bias");
field37->setAccessType("initializeOnly");
field37->setType("SFFloat");
field37->setValue("0.5");
ComposedShader33->addField(*field37);

Cfield* field38 = new Cfield();
field38->setName("scale");
field38->setAccessType("initializeOnly");
field38->setType("SFFloat");
field38->setValue("0.5");
ComposedShader33->addField(*field38);

Cfield* field39 = new Cfield();
field39->setName("power");
field39->setAccessType("initializeOnly");
field39->setType("SFFloat");
field39->setValue("2");
ComposedShader33->addField(*field39);

CShaderPart* ShaderPart40 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart40->setUrl(new CString[2]{"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 2);
ShaderPart40->setType("VERTEX");
ComposedShader33->addParts(*ShaderPart40);

CShaderPart* ShaderPart41 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart41->setUrl(new CString[2]{"../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"}, 2);
ShaderPart41->setType("FRAGMENT");
ComposedShader33->addParts(*ShaderPart41);

Appearance24->addShaders(*ComposedShader33);

Shape22->setAppearance(*Appearance24);

Transform21->addChildren(*Shape22);

group->addChildren(*Transform21);

X3D0->setScene(*Scene16);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

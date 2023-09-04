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
meta2->setContent("HelloWorldCommented.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Numerous comments added to simple X3D scene example for testing JSON encoding alternatives.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("created");
meta4->setContent("19 December 2015");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("modified");
meta5->setContent("20 October 2019");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("creator");
meta6->setContent("Don Brutzman");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("info");
meta7->setContent("HelloWorldCommented.json is most current, HelloWorldCommentedOriginalEncoding.json and HelloWorldCommentedAlternativeEncoding.json were experimental.");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("HelloWorldCommented.json");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("HelloWorldCommentedOriginalEncoding.json");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("HelloWorldCommentedAlternativeEncoding.json");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("identifier");
meta11->setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldCommented.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("license");
meta12->setContent("https://www.web3d.org/x3d/content/examples/license.html");
head1->addMeta(*meta12);

X3D0->setHead(*head1);

CScene* Scene13 = new CScene();
CWorldInfo* WorldInfo14 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo14->setTitle("Hello world!");
group->addChildren(*WorldInfo14);

CGroup* Group15 = (CGroup *)(m_pScene.createNode("Group"));
CViewpoint* Viewpoint16 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint16->setDEF("ViewUpClose");
Viewpoint16->setDescription("Hello world!");
Viewpoint16->setPosition(new float[3]{0,-1,7});
Viewpoint16->setCenterOfRotation(new float[3]{0,-1,0});
Group15->addChildren(*Viewpoint16);

CTransform* Transform17 = (CTransform *)(m_pScene.createNode("Transform"));
Transform17->setRotation(new float[4]{0,1,0,3});
CShape* Shape18 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance19 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material20 = (CMaterial *)(m_pScene.createNode("Material"));
Material20->setDEF("MaterialLightBlue");
Material20->setDiffuseColor(new float[3]{0.1,0.5,1});
Appearance19->setMaterial(*Material20);

CImageTexture* ImageTexture21 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture21->setDEF("ImageCloudlessEarth");
ImageTexture21->setUrl(new CString[6]{"earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"}, 6);
Appearance19->setTexture(*ImageTexture21);

Shape18->setAppearance(*Appearance19);

CSphere* Sphere22 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape18->setGeometry(Sphere22);

Transform17->addChild(*Shape18);

Group15->addChildren(*Transform17);

CTransform* Transform23 = (CTransform *)(m_pScene.createNode("Transform"));
Transform23->setTranslation(new float[3]{0,-2,0});
CShape* Shape24 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance25 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material26 = (CMaterial *)(m_pScene.createNode("Material"));
Material26->setUSE("MaterialLightBlue");
Appearance25->setMaterial(*Material26);

Shape24->setAppearance(*Appearance25);

CText* Text27 = (CText *)(m_pScene.createNode("Text"));
Text27->setDEF("TextMessage");
Text27->setString(new CString[2]{"Hello","world!"}, 2);
CFontStyle* FontStyle28 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle28->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text27->setFontStyle(*FontStyle28);

Shape24->setGeometry(Text27);

Transform23->addChild(*Shape24);

Group15->addChildren(*Transform23);

group->addChildren(*Group15);

X3D0->setScene(*Scene13);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

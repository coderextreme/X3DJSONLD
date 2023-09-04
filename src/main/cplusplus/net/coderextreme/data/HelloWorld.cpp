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
meta2->setContent("HelloWorld.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Simple X3D model example: Hello World!");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("created");
meta4->setContent("30 October 2000");
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
meta7->setName("Image");
meta7->setContent("HelloWorld.tall.png");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("http://en.wikipedia.org/wiki/Hello_world");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("https://en.wikipedia.org/wiki/\"Hello,_World!\"_program");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("http://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("http://www.HelloWorldExample.net");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("reference");
meta13->setContent("https://www.web3d.org");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("reference");
meta14->setContent("https://www.web3d.org/realtime-3d/news/internationalization-x3d");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("reference");
meta15->setContent("https://www.web3d.org/x3d/content/examples/HelloWorld.x3d");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("reference");
meta16->setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorld.x3d");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("reference");
meta17->setContent("HelloWorld.wrl");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("reference");
meta18->setContent("HelloWorld.x3dv");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("reference");
meta19->setContent("HelloWorld.x3db");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("reference");
meta20->setContent("HelloWorld.xhtml");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("reference");
meta21->setContent("HelloWorld.json");
head1->addMeta(*meta21);

Cmeta* meta22 = new Cmeta();
meta22->setName("identifier");
meta22->setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d");
head1->addMeta(*meta22);

Cmeta* meta23 = new Cmeta();
meta23->setName("license");
meta23->setContent("https://www.web3d.org/x3d/content/examples/license.html");
head1->addMeta(*meta23);

X3D0->setHead(*head1);

CScene* Scene24 = new CScene();
CWorldInfo* WorldInfo25 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo25->setTitle("Hello World!");
WorldInfo25->setInfo(new CString[1]{"Example scene to illustrate a simple X3D model"}, 1);
group->addChildren(*WorldInfo25);

CGroup* Group26 = (CGroup *)(m_pScene.createNode("Group"));
CViewpoint* Viewpoint27 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint27->setDEF("ViewUpClose");
Viewpoint27->setDescription("Hello world!");
Viewpoint27->setPosition(new float[3]{0,-1,7});
Viewpoint27->setCenterOfRotation(new float[3]{0,-1,0});
Group26->addChildren(*Viewpoint27);

CTransform* Transform28 = (CTransform *)(m_pScene.createNode("Transform"));
Transform28->setRotation(new float[4]{0,1,0,3});
CShape* Shape29 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance30 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material31 = (CMaterial *)(m_pScene.createNode("Material"));
Material31->setDEF("MaterialLightBlue");
Material31->setDiffuseColor(new float[3]{0.1,0.5,1});
Appearance30->setMaterial(*Material31);

CImageTexture* ImageTexture32 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture32->setDEF("ImageCloudlessEarth");
ImageTexture32->setUrl(new CString[6]{"earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"}, 6);
Appearance30->setTexture(*ImageTexture32);

Shape29->setAppearance(*Appearance30);

CSphere* Sphere33 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape29->setGeometry(Sphere33);

Transform28->addChild(*Shape29);

Group26->addChildren(*Transform28);

CTransform* Transform34 = (CTransform *)(m_pScene.createNode("Transform"));
Transform34->setTranslation(new float[3]{0,-2,0});
CShape* Shape35 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance36 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material37 = (CMaterial *)(m_pScene.createNode("Material"));
Material37->setUSE("MaterialLightBlue");
Appearance36->setMaterial(*Material37);

Shape35->setAppearance(*Appearance36);

CText* Text38 = (CText *)(m_pScene.createNode("Text"));
Text38->setDEF("TextMessage");
Text38->setString(new CString[2]{"Hello","world!"}, 2);
CFontStyle* FontStyle39 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle39->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text38->setFontStyle(*FontStyle39);

Shape35->setGeometry(Text38);

Transform34->addChild(*Shape35);

Group26->addChildren(*Transform34);

group->addChildren(*Group26);

X3D0->setScene(*Scene24);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

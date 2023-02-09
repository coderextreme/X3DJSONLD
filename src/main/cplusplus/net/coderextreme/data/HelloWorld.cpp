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
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
//Alternate encodings: VRML97, X3D ClassicVRML Encoding, X3D Compressed Binary Encoding (CBE), X3DOM, JSON
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
meta17->setName("identifier");
meta17->setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("license");
meta18->setContent("https://www.web3d.org/x3d/content/examples/license.html");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("generator");
meta19->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("reference");
meta20->setContent("HelloWorld.wrl");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("reference");
meta21->setContent("HelloWorld.x3dv");
head1->addMeta(*meta21);

Cmeta* meta22 = new Cmeta();
meta22->setName("reference");
meta22->setContent("HelloWorld.x3db");
head1->addMeta(*meta22);

Cmeta* meta23 = new Cmeta();
meta23->setName("reference");
meta23->setContent("HelloWorld.xhtml");
head1->addMeta(*meta23);

Cmeta* meta24 = new Cmeta();
meta24->setName("reference");
meta24->setContent("HelloWorld.json");
head1->addMeta(*meta24);

X3D0->setHead(*head1);

CScene* Scene25 = new CScene();
//Example scene to illustrate X3D nodes and fields (XML elements and attributes)
CWorldInfo* WorldInfo26 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo26->setInfo(new CString[1]{"Example scene to illustrate a simple X3D model"}, 1);
WorldInfo26->setTitle("Hello World!");
group->addChildren(*WorldInfo26);

CGroup* Group27 = (CGroup *)(m_pScene.createNode("Group"));
CViewpoint* Viewpoint28 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint28->setDEF("ViewUpClose");
Viewpoint28->setCenterOfRotation(new float[3]{0,-1,0});
Viewpoint28->setDescription("Hello world!");
Viewpoint28->setPosition(new float[3]{0,-1,7});
Group27->addChildren(*Viewpoint28);

CTransform* Transform29 = (CTransform *)(m_pScene.createNode("Transform"));
Transform29->setRotation(new float[4]{0,1,0,3});
CShape* Shape30 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere31 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape30->setGeometry(Sphere31);

CAppearance* Appearance32 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material33 = (CMaterial *)(m_pScene.createNode("Material"));
Material33->setDEF("MaterialLightBlue");
Material33->setDiffuseColor(new float[3]{0.1,0.5,1});
Appearance32->setMaterial(*Material33);

CImageTexture* ImageTexture34 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture34->setDEF("ImageCloudlessEarth");
ImageTexture34->setUrl(new CString[6]{"earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"}, 6);
Appearance32->setTexture(*ImageTexture34);

Shape30->setAppearance(*Appearance32);

Transform29->addChildren(*Shape30);

Group27->addChildren(*Transform29);

CTransform* Transform35 = (CTransform *)(m_pScene.createNode("Transform"));
Transform35->setTranslation(new float[3]{0,-2,0});
CShape* Shape36 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text37 = (CText *)(m_pScene.createNode("Text"));
Text37->setDEF("TextMessage");
Text37->setString(new CString[2]{"Hello","world!"}, 2);
CFontStyle* FontStyle38 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle38->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text37->setFontStyle(*FontStyle38);

Shape36->setGeometry(Text37);

CAppearance* Appearance39 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material40 = (CMaterial *)(m_pScene.createNode("Material"));
Material40->setUSE("MaterialLightBlue");
Appearance39->setMaterial(*Material40);

Shape36->setAppearance(*Appearance39);

Transform35->addChildren(*Shape36);

Group27->addChildren(*Transform35);

group->addChildren(*Group27);

X3D0->setScene(*Scene25);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

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
//All head/meta tags are optional, WorldInfo is also optional
//Text node not supported by X3D Interchange profile, use Immersive profile or Text component level 1
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("HelloWorldMinimal.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Hello World minimal example scene.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Don Brutzman");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("created");
meta5->setContent("19 January 2020");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("24 January 2020");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("reference");
meta7->setContent("https://helloworldcollection.de");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("https://en.wiktionary.org/wiki/Hello_World");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("https://en.wikipedia.org/wiki/%22Hello,%20World!%22_program");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world#X3D_(Extensible_3D)");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("reference");
meta13->setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimalIndex.html");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("identifier");
meta14->setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimal.x3d");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("generator");
meta15->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("license");
meta16->setContent("../license.html");
head1->addMeta(*meta16);

X3D0->setHead(*head1);

CScene* Scene17 = new CScene();
CWorldInfo* WorldInfo18 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo18->setTitle("HelloWorldMinimal.x3d");
group->addChildren(*WorldInfo18);

CShape* Shape19 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text20 = (CText *)(m_pScene.createNode("Text"));
Text20->setString(new CString[1]{"hello, world"}, 1);
Shape19->setGeometry(Text20);

group->addChildren(*Shape19);

X3D0->setScene(*Scene17);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

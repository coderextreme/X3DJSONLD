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
X3D0->setProfile("Full");
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("comment");
meta2->setContent("World of Titania");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("created");
meta3->setContent("Wed, 26 Aug 2015 12:17:22 GMT");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Holger Seelig");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("generator");
meta5->setContent("Titania V0.7.8, http://titania.create3000.de");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("Wed, 26 Aug 2015 12:17:22 GMT");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("title");
meta7->setContent("Appartment Entry");
head1->addMeta(*meta7);

X3D0->setHead(*head1);

CScene* Scene8 = new CScene();
CScript* Script9 = (CScript *)(m_pScene.createNode("Script"));

Script9.setSourceCode(`vrmlscript:\n"+
"function initialize ()\n"+
"{\n"+
"	Browser .loadURL (new MFString ('stage/index.x3d'), new MFString ());\n"+
"}`)
group->addChildren(*Script9);

X3D0->setScene(*Scene8);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Concretes.h"
int main(int argc, char ** argv) {
CX3DScene m_pScene;
CBrowser browser = X3D.getBrowser();
CX3D* X3D0 = new CX3D();
CGroup* group = (CGroup*)(m_pScene.createNode("Group"));
group->addChildren(X3D0);
X3D0->setProfile("Immersive");
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("creator");
meta2->setContent("John W Carlson");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("created");
meta3->setContent("December 13 2015");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("title");
meta4->setContent("text.x3d");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("identifier");
meta5->setContent("https://coderextreme.net/X3DJSONLD/text.x3d");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("description");
meta6->setContent("test \\n text");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("generator");
meta7->setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta7);

X3D0->setHead(*head1);

CScene* Scene8 = new CScene();
CTransform* Transform9 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape10 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text11 = (CText *)(m_pScene.createNode("Text"));
Text11->setString(new CString[1]{"Node\"\"\""}, 1);
CFontStyle* FontStyle12 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
Text11->setFontStyle(*FontStyle12);

Shape10->setGeometry(Text11);

CAppearance* Appearance13 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material14 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance13->setMaterial(*Material14);

Shape10->setAppearance(*Appearance13);

Transform9->addChildren(*Shape10);

CShape* Shape15 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text16 = (CText *)(m_pScene.createNode("Text"));
Text16->setString(new CString[4]{"Node2","\\\\","\\\\\\\\","Node2"}, 4);
CFontStyle* FontStyle17 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
Text16->setFontStyle(*FontStyle17);

Shape15->setGeometry(Text16);

CAppearance* Appearance18 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material19 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance18->setMaterial(*Material19);

Shape15->setAppearance(*Appearance18);

Transform9->addChildren(*Shape15);

CShape* Shape20 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text21 = (CText *)(m_pScene.createNode("Text"));
Text21->setString(new CString[2]{"Node3 \\\\\\\\ \\\\ ","Node3\"\"\""}, 2);
CFontStyle* FontStyle22 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
Text21->setFontStyle(*FontStyle22);

Shape20->setGeometry(Text21);

CAppearance* Appearance23 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material24 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance23->setMaterial(*Material24);

Shape20->setAppearance(*Appearance23);

Transform9->addChildren(*Shape20);

CScript* Script25 = (CScript *)(m_pScene.createNode("Script"));
Cfield* field26 = new Cfield();
field26->setName("frontUrls");
field26->setType("MFString");
field26->setAccessType("initializeOnly");
field26->setValue("\"rnl_front.png\" \"uffizi_front.png\"");
Script25->addField(*field26);


Script25.setSourceCode(`ecmascript:\n"+
"			    var me = '\"1\" \"\"2\" \"\\n3\"';`)
Transform9->addChildren(*Script25);

group->addChildren(*Transform9);

X3D0->setScene(*Scene8);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

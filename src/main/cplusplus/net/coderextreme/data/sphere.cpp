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
X3D0->setProfile("Interchange");
X3D0->setVersion("4.0");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("sphere.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("creator");
meta3->setContent("John Carlson");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("generator");
meta4->setContent("manual");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("identifier");
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/sphere.x3d");
head1->addMeta(*meta5);

Ccomponent* component6 = new Ccomponent();
component6->setName("Scripting");
component6->setLevel(1);
head1->addComponent(*component6);

X3D0->setHead(*head1);

CScene* Scene7 = new CScene();
CGroup* Group8 = (CGroup *)(m_pScene.createNode("Group"));
CShape* Shape9 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance10 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material11 = (CMaterial *)(m_pScene.createNode("Material"));
Material11->setDiffuseColor(new float[3]{1,1,1});
Appearance10->setMaterial(*Material11);

Shape9->setAppearance(*Appearance10);

CSphere* Sphere12 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape9->setGeometry(Sphere12);

Group8->addChildren(*Shape9);

group->addChildren(*Group8);

X3D0->setScene(*Scene7);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

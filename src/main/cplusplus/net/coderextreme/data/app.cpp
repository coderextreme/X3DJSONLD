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
X3D0->setVersion("4.0");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("creator");
meta2->setContent("Carlson, I");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("creator");
meta3->setContent("Carlson, II");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Carlson, III");
head1->addMeta(*meta4);

X3D0->setHead(*head1);

CScene* Scene5 = new CScene();
CGroup* Group6 = (CGroup *)(m_pScene.createNode("Group"));
CShape* Shape7 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance8 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material9 = (CMaterial *)(m_pScene.createNode("Material"));
Material9->setDiffuseColor(new float[3]{1,0,0});
Appearance8->setMaterial(*Material9);

Shape7->setAppearance(*Appearance8);

CBox* Box10 = (CBox *)(m_pScene.createNode("Box"));
Shape7->setGeometry(Box10);

Group6->addChildren(*Shape7);

group->addChildren(*Group6);

CTransform* Transform11 = (CTransform *)(m_pScene.createNode("Transform"));
Transform11->setRotation(new float[4]{7,8,9,3.14});
Transform11->setScale(new float[3]{4,5,6});
Transform11->setTranslation(new float[3]{1,2,3});
group->addChildren(*Transform11);

X3D0->setScene(*Scene5);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

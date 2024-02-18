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
meta2->setContent("app.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("creator");
meta3->setContent("Carlson, I");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Carlson, II");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("Carlson, III");
head1->addMeta(*meta5);

X3D0->setHead(*head1);

CScene* Scene6 = new CScene();
CGroup* Group7 = (CGroup *)(m_pScene.createNode("Group"));
CShape* Shape8 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance9 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material10 = (CMaterial *)(m_pScene.createNode("Material"));
Material10->setDiffuseColor(new float[3]{1,0,0});
Appearance9->setMaterial(*Material10);

Shape8->setAppearance(*Appearance9);

CBox* Box11 = (CBox *)(m_pScene.createNode("Box"));
Shape8->setGeometry(Box11);

Group7->addChildren(*Shape8);

group->addChildren(*Group7);

CTransform* Transform12 = (CTransform *)(m_pScene.createNode("Transform"));
Transform12->setRotation(new float[4]{7,8,9,3.14});
Transform12->setScale(new float[3]{4,5,6});
Transform12->setTranslation(new float[3]{1,2,3});
group->addChildren(*Transform12);

X3D0->setScene(*Scene6);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

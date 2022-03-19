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
X3D0->setProfile("Interchange");
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("ifscube.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("identifier");
meta3->setContent("http://coderextreme.net/X3DJSONLD/src/main/data/ifscube.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("Template for an Indexed Face Set");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("John Carlson");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("4 April 2017");
head1->addMeta(*meta6);

X3D0->setHead(*head1);

CScene* Scene7 = new CScene();
CGroup* Group8 = (CGroup *)(m_pScene.createNode("Group"));
CShape* Shape9 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet10 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet10->setCreaseAngle(1.57);
IndexedFaceSet10->setDEF("IndexedFaceSet");
IndexedFaceSet10->setCoordIndex(new int[33]{0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1});
IndexedFaceSet10->setNormalIndex(new int[14]{0,-1,0,-1,1,-1,2,-1,3,-1,4,-1,5,-1});
IndexedFaceSet10->setNormalPerVertex(False);
IndexedFaceSet10->setColorIndex(new int[33]{0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1});
CCoordinate* Coordinate11 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate11->setPoint(new float[12]{0,0,1,0,1,1,1,1,1,1,0,1});
IndexedFaceSet10->setCoord(*Coordinate11);

CNormal* Normal12 = (CNormal *)(m_pScene.createNode("Normal"));
Normal12->setVector(new float[18]{1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1});
IndexedFaceSet10->setNormal(*Normal12);

CColor* Color13 = (CColor *)(m_pScene.createNode("Color"));
Color13->setColor(new float[3]{0,1,0});
IndexedFaceSet10->setColor(*Color13);

Shape9->setGeometry(IndexedFaceSet10);

Group8->addChildren(*Shape9);

group->addChildren(*Group8);

X3D0->setScene(*Scene7);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

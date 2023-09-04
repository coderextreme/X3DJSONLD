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

X3D0->setHead(*head1);

CScene* Scene6 = new CScene();
CGroup* Group7 = (CGroup *)(m_pScene.createNode("Group"));
CShape* Shape8 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet9 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet9->setDEF("IndexedFaceSet");
IndexedFaceSet9->setCreaseAngle(1.57);
IndexedFaceSet9->setNormalPerVertex(False);
IndexedFaceSet9->setColorIndex(new int[33]{0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1});
IndexedFaceSet9->setNormalIndex(new int[14]{0,-1,0,-1,1,-1,2,-1,3,-1,4,-1,5,-1});
IndexedFaceSet9->setCoordIndex(new int[33]{0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1});
CColor* Color10 = (CColor *)(m_pScene.createNode("Color"));
Color10->setColor(new float[3]{0,1,0});
IndexedFaceSet9->setColor(*Color10);

CNormal* Normal11 = (CNormal *)(m_pScene.createNode("Normal"));
Normal11->setVector(new float[18]{1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1});
IndexedFaceSet9->setNormal(*Normal11);

CCoordinate* Coordinate12 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate12->setPoint(new float[12]{0,0,1,0,1,1,1,1,1,1,0,1});
IndexedFaceSet9->setCoord(*Coordinate12);

Shape8->setGeometry(IndexedFaceSet9);

Group7->addChildren(*Shape8);

group->addChildren(*Group7);

X3D0->setScene(*Scene6);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

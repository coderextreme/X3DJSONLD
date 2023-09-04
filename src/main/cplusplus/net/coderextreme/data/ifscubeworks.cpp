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
meta2->setContent("ifscubeworks.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("identifier");
meta3->setContent("http://coderextreme.net/X3DJSONLD/src/main/data/ifscubeworks.x3d");
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

Cmeta* meta7 = new Cmeta();
meta7->setName("license");
meta7->setContent("https://www.web3d.org/x3d/content/examples/license.html");
head1->addMeta(*meta7);

X3D0->setHead(*head1);

CScene* Scene8 = new CScene();
CWorldInfo* WorldInfo9 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo9->setTitle("ifscubeworks.x3d");
group->addChildren(*WorldInfo9);

CGroup* Group10 = (CGroup *)(m_pScene.createNode("Group"));
CShape* Shape11 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet12 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet12->setDEF("IndexedFaceSet");
IndexedFaceSet12->setNormalPerVertex(False);
IndexedFaceSet12->setColorIndex(new int[33]{0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1});
IndexedFaceSet12->setNormalIndex(new int[7]{0,0,1,2,3,4,5});
IndexedFaceSet12->setCoordIndex(new int[33]{0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1});
CColor* Color13 = (CColor *)(m_pScene.createNode("Color"));
Color13->setColor(new float[3]{0,1,0});
IndexedFaceSet12->setColor(*Color13);

CNormal* Normal14 = (CNormal *)(m_pScene.createNode("Normal"));
Normal14->setVector(new float[18]{1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1});
IndexedFaceSet12->setNormal(*Normal14);

CCoordinate* Coordinate15 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate15->setPoint(new float[12]{0,0,1,0,1,1,1,1,1,1,0,1});
IndexedFaceSet12->setCoord(*Coordinate15);

Shape11->setGeometry(IndexedFaceSet12);

Group10->addChildren(*Shape11);

group->addChildren(*Group10);

X3D0->setScene(*Scene8);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

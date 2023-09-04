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
meta2->setContent("IFS.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("identifier");
meta3->setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/IFS.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("An attempt at a standard LOA-4 skeleton");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("generator");
meta5->setContent("h2.pl");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("18 Jan 2023");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("creator");
meta7->setContent("John Carlson");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("created");
meta8->setContent("9 November 2020");
head1->addMeta(*meta8);

Ccomponent* component9 = new Ccomponent();
component9->setName("HAnim");
component9->setLevel(1);
head1->addComponent(*component9);

X3D0->setHead(*head1);

CScene* Scene10 = new CScene();
CGroup* Group11 = (CGroup *)(m_pScene.createNode("Group"));
CTransform* Transform12 = (CTransform *)(m_pScene.createNode("Transform"));
Transform12->setTranslation(new float[3]{0,2.1,0});
CShape* Shape13 = (CShape *)(m_pScene.createNode("Shape"));
Shape13->setDEF("HAnimSiteShape");
CAppearance* Appearance14 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material15 = (CMaterial *)(m_pScene.createNode("Material"));
Material15->setDiffuseColor(new float[3]{1,1,0});
Material15->setTransparency(0.3);
Appearance14->setMaterial(*Material15);

Shape13->setAppearance(*Appearance14);

CIndexedFaceSet* IndexedFaceSet16 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet16->setDEF("DiamondIFS");
IndexedFaceSet16->setSolid(False);
IndexedFaceSet16->setCreaseAngle(0.5);
IndexedFaceSet16->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
CColorRGBA* ColorRGBA17 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA17->setDEF("HAnimSiteColorRGBA");
ColorRGBA17->setColor(new float[8]{1,1,0,1,1,1,0,0.1});
IndexedFaceSet16->setColor(*ColorRGBA17);

CCoordinate* Coordinate18 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate18->setPoint(new float[18]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
IndexedFaceSet16->setCoord(*Coordinate18);

Shape13->setGeometry(IndexedFaceSet16);

Transform12->addChild(*Shape13);

Group11->addChildren(*Transform12);

group->addChildren(*Group11);

CNavigationInfo* NavigationInfo19 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo19->setSpeed(1.5);
group->addChildren(*NavigationInfo19);

CViewpoint* Viewpoint20 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint20->setDescription("default");
group->addChildren(*Viewpoint20);

X3D0->setScene(*Scene10);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

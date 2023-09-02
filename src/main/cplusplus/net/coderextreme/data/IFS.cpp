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
Ccomponent* component2 = new Ccomponent();
component2->setName("HAnim");
component2->setLevel(1);
head1->addComponent(*component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("IFS.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("identifier");
meta4->setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/IFS.x3d");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("description");
meta5->setContent("An attempt at a standard LOA-4 skeleton");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("generator");
meta6->setContent("h2.pl");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("18 Jan 2023");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("creator");
meta8->setContent("John Carlson");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("created");
meta9->setContent("9 November 2020");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("license");
meta10->setContent("../license.html");
head1->addMeta(*meta10);

X3D0->setHead(*head1);

CScene* Scene11 = new CScene();
CGroup* Group12 = (CGroup *)(m_pScene.createNode("Group"));
//DEFS for markers of skeleton joints, segments, and sites
CTransform* Transform13 = (CTransform *)(m_pScene.createNode("Transform"));
Transform13->setTranslation(new float[3]{0,2.1,0});
CShape* Shape14 = (CShape *)(m_pScene.createNode("Shape"));
Shape14->setDEF("HAnimSiteShape");
CIndexedFaceSet* IndexedFaceSet15 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet15->setDEF("DiamondIFS");
IndexedFaceSet15->setCreaseAngle(0.5);
IndexedFaceSet15->setSolid(False);
IndexedFaceSet15->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
CColorRGBA* ColorRGBA16 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA16->setDEF("HAnimSiteColorRGBA");
ColorRGBA16->setColor(new float[8]{1,1,0,1,1,1,0,0.1});
IndexedFaceSet15->setColor(*ColorRGBA16);

CCoordinate* Coordinate17 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate17->setPoint(new float[18]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
IndexedFaceSet15->setCoord(*Coordinate17);

Shape14->setGeometry(IndexedFaceSet15);

CAppearance* Appearance18 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material19 = (CMaterial *)(m_pScene.createNode("Material"));
Material19->setDiffuseColor(new float[3]{1,1,0});
Material19->setTransparency(0.3);
Appearance18->setMaterial(*Material19);

Shape14->setAppearance(*Appearance18);

Transform13->addChild(*Shape14);

Group12->addChildren(*Transform13);

group->addChildren(*Group12);

CNavigationInfo* NavigationInfo20 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo20->setSpeed(1.5);
group->addChildren(*NavigationInfo20);

CViewpoint* Viewpoint21 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint21->setDescription("default");
group->addChildren(*Viewpoint21);

X3D0->setScene(*Scene11);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

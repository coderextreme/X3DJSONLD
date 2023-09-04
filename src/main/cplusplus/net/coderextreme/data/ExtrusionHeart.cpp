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
meta2->setContent("ExtrusionHeart.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Simple extrusion of a Valentine heart.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Class participants in course Introduction to VRML/X3D.");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("created");
meta5->setContent("14 February 2001");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("27 November 2015");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("identifier");
meta7->setContent("https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("generator");
meta8->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta8);

X3D0->setHead(*head1);

CScene* Scene9 = new CScene();
CViewpoint* Viewpoint10 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint10->setDescription("Extrusion Heart");
Viewpoint10->setPosition(new float[3]{0,-4,0});
Viewpoint10->setOrientation(new float[4]{1,0,0,1.57});
group->addChildren(*Viewpoint10);

CTransform* Transform11 = (CTransform *)(m_pScene.createNode("Transform"));
Transform11->setTranslation(new float[3]{0,-0.5,0});
CShape* Shape12 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance13 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material14 = (CMaterial *)(m_pScene.createNode("Material"));
Material14->setDiffuseColor(new float[3]{0.8,0.3,0.3});
Appearance13->setMaterial(*Material14);

Shape12->setAppearance(*Appearance13);

CExtrusion* Extrusion15 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion15->setSolid(False);
Extrusion15->setCreaseAngle(3.14159);
Extrusion15->setCrossSection(new float[26]{0,0.8,0.2,1,0.7,0.95,1,0.5,0.8,0,0.5,-0.3,0,-0.7,-0.5,-0.3,-0.8,0,-1,0.5,-0.7,0.95,-0.2,1,0,0.8});
Extrusion15->setScale(new float[10]{0.01,0.01,0.8,0.8,1,1,0.8,0.8,0.01,0.01});
Extrusion15->setSpine(new float[15]{0,0,0,0,0.1,0,0,0.5,0,0,0.9,0,0,1,0});
Shape12->setGeometry(Extrusion15);

Transform11->addChild(*Shape12);

group->addChildren(*Transform11);

X3D0->setScene(*Scene9);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

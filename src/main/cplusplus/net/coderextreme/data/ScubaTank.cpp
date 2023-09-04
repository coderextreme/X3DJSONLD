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
meta2->setContent("ScubaTank.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Scuba gear used by Nancy Diving example.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Etsuko Lippi");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("created");
meta5->setContent("24 January 2001");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("23 May 2020");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("identifier");
meta7->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("generator");
meta8->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta8);

X3D0->setHead(*head1);

CScene* Scene9 = new CScene();
CWorldInfo* WorldInfo10 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo10->setTitle("ScubaTank.x3d");
group->addChildren(*WorldInfo10);

CTransform* Transform11 = (CTransform *)(m_pScene.createNode("Transform"));
Transform11->setDEF("ScubaTank");
CTransform* Transform12 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape13 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance14 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material15 = (CMaterial *)(m_pScene.createNode("Material"));
Material15->setDEF("tank");
Material15->setAmbientIntensity(0.3);
Material15->setDiffuseColor(new float[3]{0.3,0.3,0.5});
Material15->setSpecularColor(new float[3]{0.7,0.7,0.8});
Material15->setShininess(0.1);
Appearance14->setMaterial(*Material15);

Shape13->setAppearance(*Appearance14);

CCylinder* Cylinder16 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder16->setHeight(0.7);
Cylinder16->setRadius(0.1);
Shape13->setGeometry(Cylinder16);

Transform12->addChild(*Shape13);

Transform11->addChildren(*Transform12);

CTransform* Transform17 = (CTransform *)(m_pScene.createNode("Transform"));
Transform17->setTranslation(new float[3]{0,0.35,0});
CShape* Shape18 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance19 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material20 = (CMaterial *)(m_pScene.createNode("Material"));
Material20->setUSE("tank");
Appearance19->setMaterial(*Material20);

Shape18->setAppearance(*Appearance19);

CSphere* Sphere21 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere21->setRadius(0.098);
Shape18->setGeometry(Sphere21);

Transform17->addChild(*Shape18);

Transform11->addChildren(*Transform17);

CTransform* Transform22 = (CTransform *)(m_pScene.createNode("Transform"));
Transform22->setTranslation(new float[3]{0,-0.35,0});
CShape* Shape23 = (CShape *)(m_pScene.createNode("Shape"));
Shape23->setDEF("tankBottom");
CAppearance* Appearance24 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material25 = (CMaterial *)(m_pScene.createNode("Material"));
Material25->setDEF("black");
Material25->setAmbientIntensity(0.3);
Material25->setDiffuseColor(new float[3]{0,0,0});
Appearance24->setMaterial(*Material25);

Shape23->setAppearance(*Appearance24);

CCylinder* Cylinder26 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder26->setHeight(0.06);
Cylinder26->setRadius(0.115);
Shape23->setGeometry(Cylinder26);

Transform22->addChild(*Shape23);

Transform11->addChildren(*Transform22);

CGroup* Group27 = (CGroup *)(m_pScene.createNode("Group"));
Group27->setDEF("tankNozzle");
CTransform* Transform28 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform29 = (CTransform *)(m_pScene.createNode("Transform"));
Transform29->setTranslation(new float[3]{0,0.45,0});
CShape* Shape30 = (CShape *)(m_pScene.createNode("Shape"));
Shape30->setDEF("pressure");
CAppearance* Appearance31 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material32 = (CMaterial *)(m_pScene.createNode("Material"));
Material32->setDEF("pressureColor");
Material32->setAmbientIntensity(0.4);
Material32->setDiffuseColor(new float[3]{0.91,0.91,0.91});
Material32->setSpecularColor(new float[3]{0.91,0.9,0.91});
Material32->setShininess(0.16);
Appearance31->setMaterial(*Material32);

Shape30->setAppearance(*Appearance31);

CCylinder* Cylinder33 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder33->setHeight(0.1);
Cylinder33->setRadius(0.015);
Shape30->setGeometry(Cylinder33);

Transform29->addChild(*Shape30);

Transform28->addChildren(*Transform29);

CTransform* Transform34 = (CTransform *)(m_pScene.createNode("Transform"));
Transform34->setTranslation(new float[3]{0,0.5,0});
CShape* Shape35 = (CShape *)(m_pScene.createNode("Shape"));
Shape35->setDEF("pressureTop");
CAppearance* Appearance36 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material37 = (CMaterial *)(m_pScene.createNode("Material"));
Material37->setUSE("black");
Appearance36->setMaterial(*Material37);

Shape35->setAppearance(*Appearance36);

CCylinder* Cylinder38 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder38->setHeight(0.02);
Cylinder38->setRadius(0.025);
Shape35->setGeometry(Cylinder38);

Transform34->addChild(*Shape35);

Transform28->addChildren(*Transform34);

CTransform* Transform39 = (CTransform *)(m_pScene.createNode("Transform"));
Transform39->setTranslation(new float[3]{-0.028,0.462,0});
Transform39->setRotation(new float[4]{0,0,1,1.57});
CTransform* Transform40 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape41 = (CShape *)(m_pScene.createNode("Shape"));
Shape41->setDEF("connectorToRegulator");
CAppearance* Appearance42 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material43 = (CMaterial *)(m_pScene.createNode("Material"));
Material43->setUSE("pressureColor");
Appearance42->setMaterial(*Material43);

Shape41->setAppearance(*Appearance42);

CCylinder* Cylinder44 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder44->setHeight(0.03);
Cylinder44->setRadius(0.01);
Shape41->setGeometry(Cylinder44);

Transform40->addChild(*Shape41);

Transform39->addChildren(*Transform40);

CTransform* Transform45 = (CTransform *)(m_pScene.createNode("Transform"));
Transform45->setTranslation(new float[3]{0,0.02,0});
CShape* Shape46 = (CShape *)(m_pScene.createNode("Shape"));
Shape46->setDEF("connectorToRegulatorTop");
CAppearance* Appearance47 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material48 = (CMaterial *)(m_pScene.createNode("Material"));
Material48->setUSE("black");
Appearance47->setMaterial(*Material48);

Shape46->setAppearance(*Appearance47);

CCylinder* Cylinder49 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder49->setHeight(0.02);
Cylinder49->setRadius(0.02);
Shape46->setGeometry(Cylinder49);

Transform45->addChild(*Shape46);

Transform39->addChildren(*Transform45);

Transform28->addChildren(*Transform39);

Group27->addChildren(*Transform28);

Transform11->addChildren(*Group27);

CTransform* Transform50 = (CTransform *)(m_pScene.createNode("Transform"));
Transform50->setTranslation(new float[3]{0,0.2,0});
CShape* Shape51 = (CShape *)(m_pScene.createNode("Shape"));
Shape51->setDEF("tankHoldBelt");
CAppearance* Appearance52 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material53 = (CMaterial *)(m_pScene.createNode("Material"));
Material53->setUSE("black");
Appearance52->setMaterial(*Material53);

Shape51->setAppearance(*Appearance52);

CCylinder* Cylinder54 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder54->setHeight(0.1);
Cylinder54->setRadius(0.115);
Shape51->setGeometry(Cylinder54);

Transform50->addChild(*Shape51);

Transform11->addChildren(*Transform50);

group->addChildren(*Transform11);

CBackground* Background55 = (CBackground *)(m_pScene.createNode("Background"));
Background55->setSkyColor(new float[3]{0.6,0.6,0.6});
group->addChildren(*Background55);

X3D0->setScene(*Scene9);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

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
X3D0->setVersion("3.3");
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

Cmeta* meta9 = new Cmeta();
meta9->setName("license");
meta9->setContent("../license.html");
head1->addMeta(*meta9);

X3D0->setHead(*head1);

CScene* Scene10 = new CScene();
CWorldInfo* WorldInfo11 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo11->setTitle("ScubaTank.x3d");
group->addChildren(*WorldInfo11);

CTransform* Transform12 = (CTransform *)(m_pScene.createNode("Transform"));
Transform12->setDEF("ScubaTank");
CTransform* Transform13 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape14 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance15 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material16 = (CMaterial *)(m_pScene.createNode("Material"));
Material16->setDEF("tank");
Material16->setAmbientIntensity(0.3);
Material16->setDiffuseColor(new float[3]{0.3,0.3,0.5});
Material16->setShininess(0.1);
Material16->setSpecularColor(new float[3]{0.7,0.7,0.8});
Appearance15->setMaterial(*Material16);

Shape14->setAppearance(*Appearance15);

CCylinder* Cylinder17 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder17->setHeight(0.7);
Cylinder17->setRadius(0.1);
Shape14->setGeometry(Cylinder17);

Transform13->addChild(*Shape14);

Transform12->addChildren(*Transform13);

CTransform* Transform18 = (CTransform *)(m_pScene.createNode("Transform"));
Transform18->setTranslation(new float[3]{0,0.35,0});
CShape* Shape19 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance20 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material21 = (CMaterial *)(m_pScene.createNode("Material"));
Material21->setUSE("tank");
Appearance20->setMaterial(*Material21);

Shape19->setAppearance(*Appearance20);

CSphere* Sphere22 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere22->setRadius(0.098);
Shape19->setGeometry(Sphere22);

Transform18->addChild(*Shape19);

Transform12->addChildren(*Transform18);

CTransform* Transform23 = (CTransform *)(m_pScene.createNode("Transform"));
Transform23->setTranslation(new float[3]{0,-0.35,0});
CShape* Shape24 = (CShape *)(m_pScene.createNode("Shape"));
Shape24->setDEF("tankBottom");
CAppearance* Appearance25 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material26 = (CMaterial *)(m_pScene.createNode("Material"));
Material26->setDEF("black");
Material26->setAmbientIntensity(0.3);
Material26->setDiffuseColor(new float[3]{0,0,0});
Appearance25->setMaterial(*Material26);

Shape24->setAppearance(*Appearance25);

CCylinder* Cylinder27 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder27->setHeight(0.06);
Cylinder27->setRadius(0.115);
Shape24->setGeometry(Cylinder27);

Transform23->addChild(*Shape24);

Transform12->addChildren(*Transform23);

CGroup* Group28 = (CGroup *)(m_pScene.createNode("Group"));
Group28->setDEF("tankNozzle");
CTransform* Transform29 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform30 = (CTransform *)(m_pScene.createNode("Transform"));
Transform30->setTranslation(new float[3]{0,0.45,0});
CShape* Shape31 = (CShape *)(m_pScene.createNode("Shape"));
Shape31->setDEF("pressure");
CAppearance* Appearance32 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material33 = (CMaterial *)(m_pScene.createNode("Material"));
Material33->setDEF("pressureColor");
Material33->setAmbientIntensity(0.4);
Material33->setDiffuseColor(new float[3]{0.91,0.91,0.91});
Material33->setShininess(0.16);
Material33->setSpecularColor(new float[3]{0.91,0.9,0.91});
Appearance32->setMaterial(*Material33);

Shape31->setAppearance(*Appearance32);

CCylinder* Cylinder34 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder34->setHeight(0.1);
Cylinder34->setRadius(0.015);
Shape31->setGeometry(Cylinder34);

Transform30->addChild(*Shape31);

Transform29->addChildren(*Transform30);

CTransform* Transform35 = (CTransform *)(m_pScene.createNode("Transform"));
Transform35->setTranslation(new float[3]{0,0.5,0});
CShape* Shape36 = (CShape *)(m_pScene.createNode("Shape"));
Shape36->setDEF("pressureTop");
CAppearance* Appearance37 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material38 = (CMaterial *)(m_pScene.createNode("Material"));
Material38->setUSE("black");
Appearance37->setMaterial(*Material38);

Shape36->setAppearance(*Appearance37);

CCylinder* Cylinder39 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder39->setHeight(0.02);
Cylinder39->setRadius(0.025);
Shape36->setGeometry(Cylinder39);

Transform35->addChild(*Shape36);

Transform29->addChildren(*Transform35);

CTransform* Transform40 = (CTransform *)(m_pScene.createNode("Transform"));
Transform40->setRotation(new float[4]{0,0,1,1.57});
Transform40->setTranslation(new float[3]{-0.028,0.462,0});
CTransform* Transform41 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape42 = (CShape *)(m_pScene.createNode("Shape"));
Shape42->setDEF("connectorToRegulator");
CAppearance* Appearance43 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material44 = (CMaterial *)(m_pScene.createNode("Material"));
Material44->setUSE("pressureColor");
Appearance43->setMaterial(*Material44);

Shape42->setAppearance(*Appearance43);

CCylinder* Cylinder45 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder45->setHeight(0.03);
Cylinder45->setRadius(0.01);
Shape42->setGeometry(Cylinder45);

Transform41->addChild(*Shape42);

Transform40->addChildren(*Transform41);

CTransform* Transform46 = (CTransform *)(m_pScene.createNode("Transform"));
Transform46->setTranslation(new float[3]{0,0.02,0});
CShape* Shape47 = (CShape *)(m_pScene.createNode("Shape"));
Shape47->setDEF("connectorToRegulatorTop");
CAppearance* Appearance48 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material49 = (CMaterial *)(m_pScene.createNode("Material"));
Material49->setUSE("black");
Appearance48->setMaterial(*Material49);

Shape47->setAppearance(*Appearance48);

CCylinder* Cylinder50 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder50->setHeight(0.02);
Cylinder50->setRadius(0.02);
Shape47->setGeometry(Cylinder50);

Transform46->addChild(*Shape47);

Transform40->addChildren(*Transform46);

Transform29->addChildren(*Transform40);

Group28->addChildren(*Transform29);

Transform12->addChildren(*Group28);

CTransform* Transform51 = (CTransform *)(m_pScene.createNode("Transform"));
Transform51->setTranslation(new float[3]{0,0.2,0});
CShape* Shape52 = (CShape *)(m_pScene.createNode("Shape"));
Shape52->setDEF("tankHoldBelt");
CAppearance* Appearance53 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material54 = (CMaterial *)(m_pScene.createNode("Material"));
Material54->setUSE("black");
Appearance53->setMaterial(*Material54);

Shape52->setAppearance(*Appearance53);

CCylinder* Cylinder55 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder55->setHeight(0.1);
Cylinder55->setRadius(0.115);
Shape52->setGeometry(Cylinder55);

Transform51->addChild(*Shape52);

Transform12->addChildren(*Transform51);

group->addChildren(*Transform12);

CBackground* Background56 = (CBackground *)(m_pScene.createNode("Background"));
Background56->setSkyColor(new float[3]{0.6,0.6,0.6});
group->addChildren(*Background56);

X3D0->setScene(*Scene10);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

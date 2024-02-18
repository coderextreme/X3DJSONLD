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
meta2->setName("converter");
meta2->setContent("x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("converted");
meta3->setContent("Mon, 31 Jul 2023 03:48:04 GMT");
head1->addMeta(*meta3);

X3D0->setHead(*head1);

CScene* Scene4 = new CScene();
CNavigationInfo* NavigationInfo5 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo5->setHeadlight(False);
group->addChildren(*NavigationInfo5);

CGroup* Group6 = (CGroup *)(m_pScene.createNode("Group"));
CGroup* Group7 = (CGroup *)(m_pScene.createNode("Group"));
Group7->setDEF("ARROW");
CShape* Shape8 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance9 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance9->setDEF("ARROW_APPEARANCE");
CMaterial* Material10 = (CMaterial *)(m_pScene.createNode("Material"));
Material10->setDiffuseColor(new float[3]{0.3,0.3,1});
Material10->setEmissiveColor(new float[3]{0.3,0.3,0.33});
Appearance9->setMaterial(*Material10);

Shape8->setAppearance(*Appearance9);

CCylinder* Cylinder11 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder11->setTop(False);
Cylinder11->setBottom(False);
Cylinder11->setRadius(0.025);
Shape8->setGeometry(Cylinder11);

Group7->addChildren(*Shape8);

CTransform* Transform12 = (CTransform *)(m_pScene.createNode("Transform"));
Transform12->setTranslation(new float[3]{0,1,0});
CShape* Shape13 = (CShape *)(m_pScene.createNode("Shape"));
Shape13->setDEF("ARROW_POINTER");
CAppearance* Appearance14 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance14->setUSE("ARROW_APPEARANCE");
Shape13->setAppearance(*Appearance14);

CCone* Cone15 = (CCone *)(m_pScene.createNode("Cone"));
Cone15->setHeight(0.1);
Cone15->setBottomRadius(0.05);
Shape13->setGeometry(Cone15);

Transform12->addChild(*Shape13);

Group7->addChildren(*Transform12);

CTransform* Transform16 = (CTransform *)(m_pScene.createNode("Transform"));
Transform16->setTranslation(new float[3]{0,-1,0});
Transform16->setRotation(new float[4]{1,0,0,3.1416});
CShape* Shape17 = (CShape *)(m_pScene.createNode("Shape"));
Shape17->setUSE("ARROW_POINTER");
Transform16->addChild(*Shape17);

Group7->addChildren(*Transform16);

Group6->addChildren(*Group7);

CTransform* Transform18 = (CTransform *)(m_pScene.createNode("Transform"));
Transform18->setTranslation(new float[3]{0,1.08,0});
CBillboard* Billboard19 = (CBillboard *)(m_pScene.createNode("Billboard"));
CShape* Shape20 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance21 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance21->setDEF("LABEL_APPEARANCE");
CMaterial* Material22 = (CMaterial *)(m_pScene.createNode("Material"));
Material22->setDiffuseColor(new float[3]{1,1,0.3});
Material22->setEmissiveColor(new float[3]{0.33,0.33,0.1});
Appearance21->setMaterial(*Material22);

Shape20->setAppearance(*Appearance21);

CText* Text23 = (CText *)(m_pScene.createNode("Text"));
Text23->setString(new CString[1]{"Y"}, 1);
CFontStyle* FontStyle24 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle24->setDEF("LABEL_FONT");
FontStyle24->setFamily(new CString[1]{"SANS"}, 1);
FontStyle24->setSize(0.2);
FontStyle24->setJustify(new CString[1]{"MIDDLE"}, 1);
Text23->setFontStyle(*FontStyle24);

Shape20->setGeometry(Text23);

Billboard19->addChildren(*Shape20);

Transform18->addChildren(*Billboard19);

Group6->addChildren(*Transform18);

group->addChildren(*Group6);

CTransform* Transform25 = (CTransform *)(m_pScene.createNode("Transform"));
Transform25->setRotation(new float[4]{0,0,1,-1.5708});
CGroup* Group26 = (CGroup *)(m_pScene.createNode("Group"));
CGroup* Group27 = (CGroup *)(m_pScene.createNode("Group"));
Group27->setUSE("ARROW");
Group26->addChildren(*Group27);

CTransform* Transform28 = (CTransform *)(m_pScene.createNode("Transform"));
Transform28->setTranslation(new float[3]{0.072,1.1,0});
Transform28->setRotation(new float[4]{0,0,1,1.5708});
CBillboard* Billboard29 = (CBillboard *)(m_pScene.createNode("Billboard"));
CShape* Shape30 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance31 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance31->setUSE("LABEL_APPEARANCE");
Shape30->setAppearance(*Appearance31);

CText* Text32 = (CText *)(m_pScene.createNode("Text"));
Text32->setString(new CString[1]{"X"}, 1);
CFontStyle* FontStyle33 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle33->setUSE("LABEL_FONT");
Text32->setFontStyle(*FontStyle33);

Shape30->setGeometry(Text32);

Billboard29->addChildren(*Shape30);

Transform28->addChildren(*Billboard29);

Group26->addChildren(*Transform28);

Transform25->addChildren(*Group26);

group->addChildren(*Transform25);

CTransform* Transform34 = (CTransform *)(m_pScene.createNode("Transform"));
Transform34->setRotation(new float[4]{1,0,0,1.5708});
CGroup* Group35 = (CGroup *)(m_pScene.createNode("Group"));
CGroup* Group36 = (CGroup *)(m_pScene.createNode("Group"));
Group36->setUSE("ARROW");
Group35->addChildren(*Group36);

CTransform* Transform37 = (CTransform *)(m_pScene.createNode("Transform"));
Transform37->setTranslation(new float[3]{0,1.1,0.072});
Transform37->setRotation(new float[4]{1,0,0,-1.5708});
CBillboard* Billboard38 = (CBillboard *)(m_pScene.createNode("Billboard"));
CShape* Shape39 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance40 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance40->setUSE("LABEL_APPEARANCE");
Shape39->setAppearance(*Appearance40);

CText* Text41 = (CText *)(m_pScene.createNode("Text"));
Text41->setString(new CString[1]{"Z"}, 1);
CFontStyle* FontStyle42 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle42->setUSE("LABEL_FONT");
Text41->setFontStyle(*FontStyle42);

Shape39->setGeometry(Text41);

Billboard38->addChildren(*Shape39);

Transform37->addChildren(*Billboard38);

Group35->addChildren(*Transform37);

Transform34->addChildren(*Group35);

group->addChildren(*Transform34);

X3D0->setScene(*Scene4);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

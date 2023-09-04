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
X3D0->setHead(*head1);

CScene* Scene2 = new CScene();
CNavigationInfo* NavigationInfo3 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo3->setHeadlight(False);
group->addChildren(*NavigationInfo3);

CGroup* Group4 = (CGroup *)(m_pScene.createNode("Group"));
CGroup* Group5 = (CGroup *)(m_pScene.createNode("Group"));
Group5->setDEF("ARROW");
CShape* Shape6 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance7 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance7->setDEF("ARROW_APPEARANCE");
CMaterial* Material8 = (CMaterial *)(m_pScene.createNode("Material"));
Material8->setDiffuseColor(new float[3]{0.3,0.3,1});
Material8->setEmissiveColor(new float[3]{0.3,0.3,0.33});
Appearance7->setMaterial(*Material8);

Shape6->setAppearance(*Appearance7);

CCylinder* Cylinder9 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder9->setTop(False);
Cylinder9->setBottom(False);
Cylinder9->setRadius(0.025);
Shape6->setGeometry(Cylinder9);

Group5->addChildren(*Shape6);

CTransform* Transform10 = (CTransform *)(m_pScene.createNode("Transform"));
Transform10->setTranslation(new float[3]{0,1,0});
CShape* Shape11 = (CShape *)(m_pScene.createNode("Shape"));
Shape11->setDEF("ARROW_POINTER");
CAppearance* Appearance12 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance12->setUSE("ARROW_APPEARANCE");
Shape11->setAppearance(*Appearance12);

CCone* Cone13 = (CCone *)(m_pScene.createNode("Cone"));
Cone13->setHeight(0.1);
Cone13->setBottomRadius(0.05);
Shape11->setGeometry(Cone13);

Transform10->addChild(*Shape11);

Group5->addChildren(*Transform10);

CTransform* Transform14 = (CTransform *)(m_pScene.createNode("Transform"));
Transform14->setTranslation(new float[3]{0,-1,0});
Transform14->setRotation(new float[4]{1,0,0,3.1416});
CShape* Shape15 = (CShape *)(m_pScene.createNode("Shape"));
Shape15->setUSE("ARROW_POINTER");
Transform14->addChild(*Shape15);

Group5->addChildren(*Transform14);

Group4->addChildren(*Group5);

CTransform* Transform16 = (CTransform *)(m_pScene.createNode("Transform"));
Transform16->setTranslation(new float[3]{0,1.08,0});
CBillboard* Billboard17 = (CBillboard *)(m_pScene.createNode("Billboard"));
CShape* Shape18 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance19 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance19->setDEF("LABEL_APPEARANCE");
CMaterial* Material20 = (CMaterial *)(m_pScene.createNode("Material"));
Material20->setDiffuseColor(new float[3]{1,1,0.3});
Material20->setEmissiveColor(new float[3]{0.33,0.33,0.1});
Appearance19->setMaterial(*Material20);

Shape18->setAppearance(*Appearance19);

CText* Text21 = (CText *)(m_pScene.createNode("Text"));
Text21->setString(new CString[1]{"Y"}, 1);
CFontStyle* FontStyle22 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle22->setDEF("LABEL_FONT");
FontStyle22->setFamily(new CString[1]{"SANS"}, 1);
FontStyle22->setSize(0.2);
FontStyle22->setJustify(new CString[1]{"MIDDLE"}, 1);
Text21->setFontStyle(*FontStyle22);

Shape18->setGeometry(Text21);

Billboard17->addChildren(*Shape18);

Transform16->addChildren(*Billboard17);

Group4->addChildren(*Transform16);

group->addChildren(*Group4);

CTransform* Transform23 = (CTransform *)(m_pScene.createNode("Transform"));
Transform23->setRotation(new float[4]{0,0,1,-1.5708});
CGroup* Group24 = (CGroup *)(m_pScene.createNode("Group"));
CGroup* Group25 = (CGroup *)(m_pScene.createNode("Group"));
Group25->setUSE("ARROW");
Group24->addChildren(*Group25);

CTransform* Transform26 = (CTransform *)(m_pScene.createNode("Transform"));
Transform26->setTranslation(new float[3]{0.072,1.1,0});
Transform26->setRotation(new float[4]{0,0,1,1.5708});
CBillboard* Billboard27 = (CBillboard *)(m_pScene.createNode("Billboard"));
CShape* Shape28 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance29 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance29->setUSE("LABEL_APPEARANCE");
Shape28->setAppearance(*Appearance29);

CText* Text30 = (CText *)(m_pScene.createNode("Text"));
Text30->setString(new CString[1]{"X"}, 1);
CFontStyle* FontStyle31 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle31->setUSE("LABEL_FONT");
Text30->setFontStyle(*FontStyle31);

Shape28->setGeometry(Text30);

Billboard27->addChildren(*Shape28);

Transform26->addChildren(*Billboard27);

Group24->addChildren(*Transform26);

Transform23->addChildren(*Group24);

group->addChildren(*Transform23);

CTransform* Transform32 = (CTransform *)(m_pScene.createNode("Transform"));
Transform32->setRotation(new float[4]{1,0,0,1.5708});
CGroup* Group33 = (CGroup *)(m_pScene.createNode("Group"));
CGroup* Group34 = (CGroup *)(m_pScene.createNode("Group"));
Group34->setUSE("ARROW");
Group33->addChildren(*Group34);

CTransform* Transform35 = (CTransform *)(m_pScene.createNode("Transform"));
Transform35->setTranslation(new float[3]{0,1.1,0.072});
Transform35->setRotation(new float[4]{1,0,0,-1.5708});
CBillboard* Billboard36 = (CBillboard *)(m_pScene.createNode("Billboard"));
CShape* Shape37 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance38 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance38->setUSE("LABEL_APPEARANCE");
Shape37->setAppearance(*Appearance38);

CText* Text39 = (CText *)(m_pScene.createNode("Text"));
Text39->setString(new CString[1]{"Z"}, 1);
CFontStyle* FontStyle40 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle40->setUSE("LABEL_FONT");
Text39->setFontStyle(*FontStyle40);

Shape37->setGeometry(Text39);

Billboard36->addChildren(*Shape37);

Transform35->addChildren(*Billboard36);

Group33->addChildren(*Transform35);

Transform32->addChildren(*Group33);

group->addChildren(*Transform32);

X3D0->setScene(*Scene2);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

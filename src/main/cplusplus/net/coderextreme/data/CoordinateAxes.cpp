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
meta2->setContent("CoordinateAxes.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("creator");
meta3->setContent("Don Brutzman, Byounghyun Yoo");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("created");
meta4->setContent("14 July 2000");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("modified");
meta5->setContent("20 October 2019");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("description");
meta6->setContent("X Y Z axis arrows and labels in X3D coordinate system. See CoordinateAxesExample for use as an Inline coordinate-system reference frame.");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("reference");
meta7->setContent("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxesNSEW.x3d");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxesNSEW.x3d");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("identifier");
meta11->setContent("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("generator");
meta12->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta12);

X3D0->setHead(*head1);

CScene* Scene13 = new CScene();
CWorldInfo* WorldInfo14 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo14->setTitle("CoordinateAxes.x3d");
group->addChildren(*WorldInfo14);

CCollision* Collision15 = (CCollision *)(m_pScene.createNode("Collision"));
Collision15->setDEF("DoNotCollideWithVisualizationWidget");
CGroup* Group16 = (CGroup *)(m_pScene.createNode("Group"));
CGroup* Group17 = (CGroup *)(m_pScene.createNode("Group"));
Group17->setDEF("ArrowGreen");
CShape* Shape18 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance19 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance19->setDEF("Green");
CMaterial* Material20 = (CMaterial *)(m_pScene.createNode("Material"));
Material20->setDiffuseColor(new float[3]{0.1,0.6,0.1});
Material20->setEmissiveColor(new float[3]{0.05,0.2,0.05});
Appearance19->setMaterial(*Material20);

Shape18->setAppearance(*Appearance19);

CCylinder* Cylinder21 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder21->setDEF("ArrowCylinder");
Cylinder21->setTop(False);
Cylinder21->setRadius(0.025);
Shape18->setGeometry(Cylinder21);

Group17->addChildren(*Shape18);

CTransform* Transform22 = (CTransform *)(m_pScene.createNode("Transform"));
Transform22->setTranslation(new float[3]{0,1,0});
CShape* Shape23 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance24 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance24->setUSE("Green");
Shape23->setAppearance(*Appearance24);

CCone* Cone25 = (CCone *)(m_pScene.createNode("Cone"));
Cone25->setDEF("ArrowCone");
Cone25->setHeight(0.1);
Cone25->setBottomRadius(0.05);
Shape23->setGeometry(Cone25);

Transform22->addChild(*Shape23);

Group17->addChildren(*Transform22);

Group16->addChildren(*Group17);

CTransform* Transform26 = (CTransform *)(m_pScene.createNode("Transform"));
Transform26->setTranslation(new float[3]{0,1.08,0});
CBillboard* Billboard27 = (CBillboard *)(m_pScene.createNode("Billboard"));
CShape* Shape28 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance29 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance29->setDEF("LABEL_APPEARANCE");
CMaterial* Material30 = (CMaterial *)(m_pScene.createNode("Material"));
Material30->setDiffuseColor(new float[3]{1,1,0.3});
Material30->setEmissiveColor(new float[3]{0.33,0.33,0.1});
Appearance29->setMaterial(*Material30);

Shape28->setAppearance(*Appearance29);

CText* Text31 = (CText *)(m_pScene.createNode("Text"));
Text31->setString(new CString[1]{"Y"}, 1);
CFontStyle* FontStyle32 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle32->setDEF("LABEL_FONT");
FontStyle32->setFamily(new CString[1]{"SANS"}, 1);
FontStyle32->setSize(0.2);
FontStyle32->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text31->setFontStyle(*FontStyle32);

Shape28->setGeometry(Text31);

Billboard27->addChildren(*Shape28);

Transform26->addChildren(*Billboard27);

Group16->addChildren(*Transform26);

Collision15->setProxy(*Group16);

CTransform* Transform33 = (CTransform *)(m_pScene.createNode("Transform"));
Transform33->setRotation(new float[4]{0,0,1,-1.57079});
CGroup* Group34 = (CGroup *)(m_pScene.createNode("Group"));
CGroup* Group35 = (CGroup *)(m_pScene.createNode("Group"));
Group35->setDEF("ArrowRed");
CShape* Shape36 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance37 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance37->setDEF("Red");
CMaterial* Material38 = (CMaterial *)(m_pScene.createNode("Material"));
Material38->setDiffuseColor(new float[3]{0.7,0.1,0.1});
Material38->setEmissiveColor(new float[3]{0.33,0,0});
Appearance37->setMaterial(*Material38);

Shape36->setAppearance(*Appearance37);

CCylinder* Cylinder39 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder39->setUSE("ArrowCylinder");
Shape36->setGeometry(Cylinder39);

Group35->addChildren(*Shape36);

CTransform* Transform40 = (CTransform *)(m_pScene.createNode("Transform"));
Transform40->setTranslation(new float[3]{0,1,0});
CShape* Shape41 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance42 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance42->setUSE("Red");
Shape41->setAppearance(*Appearance42);

CCone* Cone43 = (CCone *)(m_pScene.createNode("Cone"));
Cone43->setUSE("ArrowCone");
Shape41->setGeometry(Cone43);

Transform40->addChild(*Shape41);

Group35->addChildren(*Transform40);

Group34->addChildren(*Group35);

CTransform* Transform44 = (CTransform *)(m_pScene.createNode("Transform"));
Transform44->setTranslation(new float[3]{0.072,1.1,0});
Transform44->setRotation(new float[4]{0,0,1,1.57079});
CBillboard* Billboard45 = (CBillboard *)(m_pScene.createNode("Billboard"));
CShape* Shape46 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance47 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance47->setUSE("LABEL_APPEARANCE");
Shape46->setAppearance(*Appearance47);

CText* Text48 = (CText *)(m_pScene.createNode("Text"));
Text48->setString(new CString[1]{"X"}, 1);
CFontStyle* FontStyle49 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle49->setUSE("LABEL_FONT");
Text48->setFontStyle(*FontStyle49);

Shape46->setGeometry(Text48);

Billboard45->addChildren(*Shape46);

Transform44->addChildren(*Billboard45);

Group34->addChildren(*Transform44);

Transform33->addChildren(*Group34);

Collision15->setProxy(*Transform33);

CTransform* Transform50 = (CTransform *)(m_pScene.createNode("Transform"));
Transform50->setRotation(new float[4]{1,0,0,1.57079});
CGroup* Group51 = (CGroup *)(m_pScene.createNode("Group"));
CGroup* Group52 = (CGroup *)(m_pScene.createNode("Group"));
Group52->setDEF("ArrowBlue");
CShape* Shape53 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance54 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance54->setDEF("Blue");
CMaterial* Material55 = (CMaterial *)(m_pScene.createNode("Material"));
Material55->setDiffuseColor(new float[3]{0.3,0.3,1});
Material55->setEmissiveColor(new float[3]{0.1,0.1,0.33});
Appearance54->setMaterial(*Material55);

Shape53->setAppearance(*Appearance54);

CCylinder* Cylinder56 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder56->setUSE("ArrowCylinder");
Shape53->setGeometry(Cylinder56);

Group52->addChildren(*Shape53);

CTransform* Transform57 = (CTransform *)(m_pScene.createNode("Transform"));
Transform57->setTranslation(new float[3]{0,1,0});
CShape* Shape58 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance59 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance59->setUSE("Blue");
Shape58->setAppearance(*Appearance59);

CCone* Cone60 = (CCone *)(m_pScene.createNode("Cone"));
Cone60->setUSE("ArrowCone");
Shape58->setGeometry(Cone60);

Transform57->addChild(*Shape58);

Group52->addChildren(*Transform57);

Group51->addChildren(*Group52);

CTransform* Transform61 = (CTransform *)(m_pScene.createNode("Transform"));
Transform61->setTranslation(new float[3]{0,1.1,0.072});
Transform61->setRotation(new float[4]{1,0,0,-1.57079});
CBillboard* Billboard62 = (CBillboard *)(m_pScene.createNode("Billboard"));
CShape* Shape63 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance64 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance64->setUSE("LABEL_APPEARANCE");
Shape63->setAppearance(*Appearance64);

CText* Text65 = (CText *)(m_pScene.createNode("Text"));
Text65->setString(new CString[1]{"Z"}, 1);
CFontStyle* FontStyle66 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle66->setUSE("LABEL_FONT");
Text65->setFontStyle(*FontStyle66);

Shape63->setGeometry(Text65);

Billboard62->addChildren(*Shape63);

Transform61->addChildren(*Billboard62);

Group51->addChildren(*Transform61);

Transform50->addChildren(*Group51);

Collision15->setProxy(*Transform50);

group->addChildren(*Collision15);

X3D0->setScene(*Scene13);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

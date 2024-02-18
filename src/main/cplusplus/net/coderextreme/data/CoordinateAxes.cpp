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
X3D0->setVersion("3.3");
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

Cmeta* meta13 = new Cmeta();
meta13->setName("license");
meta13->setContent("../license.html");
head1->addMeta(*meta13);

X3D0->setHead(*head1);

CScene* Scene14 = new CScene();
CWorldInfo* WorldInfo15 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo15->setTitle("CoordinateAxes.x3d");
group->addChildren(*WorldInfo15);

CCollision* Collision16 = (CCollision *)(m_pScene.createNode("Collision"));
Collision16->setDEF("DoNotCollideWithVisualizationWidget");
//Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph.
//This NavigationInfo allows examine mode and will be overridden by any parent scene.
//Each arrow goes from +1m to -1m to allow linear scaling to fit a scene
//Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user
CGroup* Group17 = (CGroup *)(m_pScene.createNode("Group"));
//Vertical Y arrow and label
CGroup* Group18 = (CGroup *)(m_pScene.createNode("Group"));
Group18->setDEF("ArrowGreen");
CShape* Shape19 = (CShape *)(m_pScene.createNode("Shape"));
CCylinder* Cylinder20 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder20->setDEF("ArrowCylinder");
Cylinder20->setRadius(0.025);
Cylinder20->setTop(False);
Shape19->setGeometry(Cylinder20);

CAppearance* Appearance21 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance21->setDEF("Green");
CMaterial* Material22 = (CMaterial *)(m_pScene.createNode("Material"));
Material22->setDiffuseColor(new float[3]{0.1,0.6,0.1});
Material22->setEmissiveColor(new float[3]{0.05,0.2,0.05});
Appearance21->setMaterial(*Material22);

Shape19->setAppearance(*Appearance21);

Group18->addChildren(*Shape19);

CTransform* Transform23 = (CTransform *)(m_pScene.createNode("Transform"));
Transform23->setTranslation(new float[3]{0,1,0});
CShape* Shape24 = (CShape *)(m_pScene.createNode("Shape"));
CCone* Cone25 = (CCone *)(m_pScene.createNode("Cone"));
Cone25->setDEF("ArrowCone");
Cone25->setBottomRadius(0.05);
Cone25->setHeight(0.1);
Shape24->setGeometry(Cone25);

CAppearance* Appearance26 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance26->setUSE("Green");
Shape24->setAppearance(*Appearance26);

Transform23->addChild(*Shape24);

Group18->addChildren(*Transform23);

Group17->addChildren(*Group18);

CTransform* Transform27 = (CTransform *)(m_pScene.createNode("Transform"));
Transform27->setTranslation(new float[3]{0,1.08,0});
CBillboard* Billboard28 = (CBillboard *)(m_pScene.createNode("Billboard"));
CShape* Shape29 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance30 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance30->setDEF("LABEL_APPEARANCE");
CMaterial* Material31 = (CMaterial *)(m_pScene.createNode("Material"));
Material31->setDiffuseColor(new float[3]{1,1,0.3});
Material31->setEmissiveColor(new float[3]{0.33,0.33,0.1});
Appearance30->setMaterial(*Material31);

Shape29->setAppearance(*Appearance30);

CText* Text32 = (CText *)(m_pScene.createNode("Text"));
Text32->setString(new CString[1]{"Y"}, 1);
CFontStyle* FontStyle33 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle33->setDEF("LABEL_FONT");
FontStyle33->setFamily(new CString[1]{"SANS"}, 1);
FontStyle33->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle33->setSize(0.2);
Text32->setFontStyle(*FontStyle33);

Shape29->setGeometry(Text32);

Billboard28->addChildren(*Shape29);

Transform27->addChildren(*Billboard28);

Group17->addChildren(*Transform27);

Collision16->setProxy(*Group17);

CTransform* Transform34 = (CTransform *)(m_pScene.createNode("Transform"));
Transform34->setRotation(new float[4]{0,0,1,-1.57079});
//Horizontal X arrow and label
CGroup* Group35 = (CGroup *)(m_pScene.createNode("Group"));
CGroup* Group36 = (CGroup *)(m_pScene.createNode("Group"));
Group36->setDEF("ArrowRed");
CShape* Shape37 = (CShape *)(m_pScene.createNode("Shape"));
CCylinder* Cylinder38 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder38->setUSE("ArrowCylinder");
Shape37->setGeometry(Cylinder38);

CAppearance* Appearance39 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance39->setDEF("Red");
CMaterial* Material40 = (CMaterial *)(m_pScene.createNode("Material"));
Material40->setDiffuseColor(new float[3]{0.7,0.1,0.1});
Material40->setEmissiveColor(new float[3]{0.33,0,0});
Appearance39->setMaterial(*Material40);

Shape37->setAppearance(*Appearance39);

Group36->addChildren(*Shape37);

CTransform* Transform41 = (CTransform *)(m_pScene.createNode("Transform"));
Transform41->setTranslation(new float[3]{0,1,0});
CShape* Shape42 = (CShape *)(m_pScene.createNode("Shape"));
CCone* Cone43 = (CCone *)(m_pScene.createNode("Cone"));
Cone43->setUSE("ArrowCone");
Shape42->setGeometry(Cone43);

CAppearance* Appearance44 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance44->setUSE("Red");
Shape42->setAppearance(*Appearance44);

Transform41->addChild(*Shape42);

Group36->addChildren(*Transform41);

Group35->addChildren(*Group36);

CTransform* Transform45 = (CTransform *)(m_pScene.createNode("Transform"));
Transform45->setRotation(new float[4]{0,0,1,1.57079});
Transform45->setTranslation(new float[3]{0.072,1.1,0});
//note label rotated back to original coordinate frame
CBillboard* Billboard46 = (CBillboard *)(m_pScene.createNode("Billboard"));
CShape* Shape47 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance48 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance48->setUSE("LABEL_APPEARANCE");
Shape47->setAppearance(*Appearance48);

CText* Text49 = (CText *)(m_pScene.createNode("Text"));
Text49->setString(new CString[1]{"X"}, 1);
CFontStyle* FontStyle50 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle50->setUSE("LABEL_FONT");
Text49->setFontStyle(*FontStyle50);

Shape47->setGeometry(Text49);

Billboard46->addChildren(*Shape47);

Transform45->addChildren(*Billboard46);

Group35->addChildren(*Transform45);

Transform34->addChildren(*Group35);

Collision16->setProxy(*Transform34);

CTransform* Transform51 = (CTransform *)(m_pScene.createNode("Transform"));
Transform51->setRotation(new float[4]{1,0,0,1.57079});
//Perpendicular Z arrow and label, note right-hand rule
CGroup* Group52 = (CGroup *)(m_pScene.createNode("Group"));
CGroup* Group53 = (CGroup *)(m_pScene.createNode("Group"));
Group53->setDEF("ArrowBlue");
CShape* Shape54 = (CShape *)(m_pScene.createNode("Shape"));
CCylinder* Cylinder55 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder55->setUSE("ArrowCylinder");
Shape54->setGeometry(Cylinder55);

CAppearance* Appearance56 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance56->setDEF("Blue");
CMaterial* Material57 = (CMaterial *)(m_pScene.createNode("Material"));
Material57->setDiffuseColor(new float[3]{0.3,0.3,1});
Material57->setEmissiveColor(new float[3]{0.1,0.1,0.33});
Appearance56->setMaterial(*Material57);

Shape54->setAppearance(*Appearance56);

Group53->addChildren(*Shape54);

CTransform* Transform58 = (CTransform *)(m_pScene.createNode("Transform"));
Transform58->setTranslation(new float[3]{0,1,0});
CShape* Shape59 = (CShape *)(m_pScene.createNode("Shape"));
CCone* Cone60 = (CCone *)(m_pScene.createNode("Cone"));
Cone60->setUSE("ArrowCone");
Shape59->setGeometry(Cone60);

CAppearance* Appearance61 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance61->setUSE("Blue");
Shape59->setAppearance(*Appearance61);

Transform58->addChild(*Shape59);

Group53->addChildren(*Transform58);

Group52->addChildren(*Group53);

CTransform* Transform62 = (CTransform *)(m_pScene.createNode("Transform"));
Transform62->setRotation(new float[4]{1,0,0,-1.57079});
Transform62->setTranslation(new float[3]{0,1.1,0.072});
//note label rotated back to original coordinate frame
CBillboard* Billboard63 = (CBillboard *)(m_pScene.createNode("Billboard"));
CShape* Shape64 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance65 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance65->setUSE("LABEL_APPEARANCE");
Shape64->setAppearance(*Appearance65);

CText* Text66 = (CText *)(m_pScene.createNode("Text"));
Text66->setString(new CString[1]{"Z"}, 1);
CFontStyle* FontStyle67 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle67->setUSE("LABEL_FONT");
Text66->setFontStyle(*FontStyle67);

Shape64->setGeometry(Text66);

Billboard63->addChildren(*Shape64);

Transform62->addChildren(*Billboard63);

Group52->addChildren(*Transform62);

Transform51->addChildren(*Group52);

Collision16->setProxy(*Transform51);

group->addChildren(*Collision16);

X3D0->setScene(*Scene14);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

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
meta2->setContent("TextSpecialCharacters.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Text node demonstration of quotation, apostrophe, ampersand and backslash characters using X3D MFString escaping for XML character entities");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Don Brutzman");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("created");
meta5->setContent("12 July 2008");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("2 April 2017");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("reference");
meta7->setContent("Character entity references in HTML 4");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("http://www.w3.org/TR/REC-html40/sgml/entities.html");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("rights");
meta9->setContent("Copyright (c) Don Brutzman and Leonard Daly, 2008");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("identifier");
meta10->setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter02GeometryPrimitives/TextSpecialCharacters.x3d");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("generator");
meta11->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("license");
meta12->setContent("../license.html");
head1->addMeta(*meta12);

X3D0->setHead(*head1);

CScene* Scene13 = new CScene();
CBackground* Background14 = (CBackground *)(m_pScene.createNode("Background"));
Background14->setSkyColor(new float[3]{1,1,1});
group->addChildren(*Background14);

CViewpoint* Viewpoint15 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint15->setDescription("Default View");
Viewpoint15->setPosition(new float[3]{0,0,15});
group->addChildren(*Viewpoint15);

CShape* Shape16 = (CShape *)(m_pScene.createNode("Shape"));
//Empty string \"\" means to skip a line
//The ampersand escape characters are based on XML rules
//apostrophe ' is &apos; and needs to be escaped in single-quote delimiters used for string='value' attribute
//ampersand & is &amp; and needs to be escaped
//quotation \" is &quot; and isn't needed if single-quote delimiters used for string='value' attribute
//quotation \" can be used within an X3D string if escaped with backslash \\ as \\\"\"
//backslash \\ is used as escape character for \" (and itself) in X3D
//character entities are listed in HTML specification and are good for any XML
CText* Text17 = (CText *)(m_pScene.createNode("Text"));
Text17->setDEF("DefaultText");
Text17->setString(new CString[9]{"Character entity substitutions:","empty string \"\" skips a line:","","apostrophe ' is &apos;","ampersand & is &amp;","quote mark \" is &quot;","backslash \\\\ is X3D escape character","double backslash \\\\\\\\ is X3D backslash \\\\ character","Pi is pi is pi XML character entity"}, 9);
CFontStyle* FontStyle18 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle18->setDEF("CenteredFontStyle");
FontStyle18->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text17->setFontStyle(*FontStyle18);

Shape16->setGeometry(Text17);

CAppearance* Appearance19 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material20 = (CMaterial *)(m_pScene.createNode("Material"));
Material20->setDEF("DefaultMaterial");
Material20->setDiffuseColor(new float[3]{0.2,0.2,0.2});
Appearance19->setMaterial(*Material20);

Shape16->setAppearance(*Appearance19);

group->addChildren(*Shape16);

X3D0->setScene(*Scene13);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

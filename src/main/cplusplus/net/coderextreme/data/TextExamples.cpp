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
meta2->setContent("TextExamples.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Show different escape-character text examples for embedded quotation marks.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Don Brutzman");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("created");
meta5->setContent("7 April 2001");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("26 April 2016");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("warning");
meta7->setContent("Note that X3D Canonicalization (C14N) will scrub alternate XML character representations, be careful to check original encoding into version control.");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("warning");
meta8->setContent("Usually this source document needs to be inspected and edited using a plain-text editor in order to see the differences in these XML-equivalent text representations.");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("identifier");
meta9->setContent("https://www.web3d.org/x3d/content/examples/Basic/development/TextExamples.x3d");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("generator");
meta10->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta10);

X3D0->setHead(*head1);

CScene* Scene11 = new CScene();
CTransform* Transform12 = (CTransform *)(m_pScene.createNode("Transform"));
Transform12->setTranslation(new float[3]{0,2,0});
CShape* Shape13 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance14 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance14->setDEF("LightBlueAppearance");
CMaterial* Material15 = (CMaterial *)(m_pScene.createNode("Material"));
Material15->setDiffuseColor(new float[3]{0.1,0.7,0.7});
Appearance14->setMaterial(*Material15);

Shape13->setAppearance(*Appearance14);

CText* Text16 = (CText *)(m_pScene.createNode("Text"));
Text16->setString(new CString[1]{"Compare special character escaping"}, 1);
CFontStyle* FontStyle17 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle17->setDEF("testFontStyle");
FontStyle17->setSize(0.8);
FontStyle17->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text16->setFontStyle(*FontStyle17);

Shape13->setGeometry(Text16);

Transform12->addChild(*Shape13);

group->addChildren(*Transform12);

CTransform* Transform18 = (CTransform *)(m_pScene.createNode("Transform"));
Transform18->setTranslation(new float[3]{-3,0,0});
CShape* Shape19 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance20 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance20->setUSE("LightBlueAppearance");
Shape19->setAppearance(*Appearance20);

CText* Text21 = (CText *)(m_pScene.createNode("Text"));
Text21->setString(new CString[3]{"I don't think so","","he said \"Hi\""}, 3);
CFontStyle* FontStyle22 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle22->setUSE("testFontStyle");
Text21->setFontStyle(*FontStyle22);

Shape19->setGeometry(Text21);

Transform18->addChild(*Shape19);

group->addChildren(*Transform18);

CTransform* Transform23 = (CTransform *)(m_pScene.createNode("Transform"));
Transform23->setTranslation(new float[3]{3,0,0});
CShape* Shape24 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance25 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance25->setUSE("LightBlueAppearance");
Shape24->setAppearance(*Appearance25);

CText* Text26 = (CText *)(m_pScene.createNode("Text"));
Text26->setString(new CString[3]{"I don't think so","","he said \"Hi\""}, 3);
CFontStyle* FontStyle27 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle27->setUSE("testFontStyle");
Text26->setFontStyle(*FontStyle27);

Shape24->setGeometry(Text26);

Transform23->addChild(*Shape24);

group->addChildren(*Transform23);

X3D0->setScene(*Scene11);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

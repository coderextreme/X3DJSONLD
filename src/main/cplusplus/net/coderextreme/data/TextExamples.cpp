/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Concretes.h"
int main(int argc, char ** argv) {
CX3DScene m_pScene;
CBrowser browser = X3D.getBrowser();
CX3D* X3D0 = new CX3D();
CGroup* group = (CGroup*)(m_pScene.createNode("Group"));
group->addChildren(X3D0);
X3D0->setProfile("Immersive");
X3D0->setVersion("3.0");
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

Cmeta* meta11 = new Cmeta();
meta11->setName("license");
meta11->setContent("../license.html");
head1->addMeta(*meta11);

X3D0->setHead(*head1);

CScene* Scene12 = new CScene();
CTransform* Transform13 = (CTransform *)(m_pScene.createNode("Transform"));
Transform13->setTranslation(new float[3]{0,2,0});
CShape* Shape14 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text15 = (CText *)(m_pScene.createNode("Text"));
Text15->setString(new CString[1]{"Compare special character escaping"}, 1);
CFontStyle* FontStyle16 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle16->setDEF("testFontStyle");
FontStyle16->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle16->setSize(0.8);
Text15->setFontStyle(*FontStyle16);

Shape14->setGeometry(Text15);

CAppearance* Appearance17 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance17->setDEF("LightBlueAppearance");
CMaterial* Material18 = (CMaterial *)(m_pScene.createNode("Material"));
Material18->setDiffuseColor(new float[3]{0.1,0.7,0.7});
Appearance17->setMaterial(*Material18);

Shape14->setAppearance(*Appearance17);

Transform13->addChildren(*Shape14);

group->addChildren(*Transform13);

CTransform* Transform19 = (CTransform *)(m_pScene.createNode("Transform"));
Transform19->setTranslation(new float[3]{-3,0,0});
CShape* Shape20 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text21 = (CText *)(m_pScene.createNode("Text"));
Text21->setString(new CString[3]{"I don't think so","","he said \"Hi\""}, 3);
CFontStyle* FontStyle22 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle22->setUSE("testFontStyle");
Text21->setFontStyle(*FontStyle22);

Shape20->setGeometry(Text21);

CAppearance* Appearance23 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance23->setUSE("LightBlueAppearance");
Shape20->setAppearance(*Appearance23);

Transform19->addChildren(*Shape20);

group->addChildren(*Transform19);

CTransform* Transform24 = (CTransform *)(m_pScene.createNode("Transform"));
Transform24->setTranslation(new float[3]{3,0,0});
CShape* Shape25 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text26 = (CText *)(m_pScene.createNode("Text"));
Text26->setString(new CString[3]{"I don't think so","","he said \"Hi\""}, 3);
CFontStyle* FontStyle27 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle27->setUSE("testFontStyle");
Text26->setFontStyle(*FontStyle27);

Shape25->setGeometry(Text26);

CAppearance* Appearance28 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance28->setUSE("LightBlueAppearance");
Shape25->setAppearance(*Appearance28);

Transform24->addChildren(*Shape25);

group->addChildren(*Transform24);

X3D0->setScene(*Scene12);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

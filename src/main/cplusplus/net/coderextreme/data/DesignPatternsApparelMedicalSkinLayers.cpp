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
meta2->setContent("DesignPatternsApparelMedicalSkinLayers.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Design patterns for skin and apparel using HAnim2 standard in X3D4");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Don Brutzman");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("Joe D. Williams");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("creator");
meta6->setContent("Dick Puk");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("created");
meta7->setContent("23 December 2022");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("modified");
meta8->setContent("2 July 2023");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("DesignPatternsApparelVariations.txt");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("warning");
meta13->setContent("Under development. This template example does not produce renderable HAnim models.");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("identifier");
meta14->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("generator");
meta15->setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta15);

X3D0->setHead(*head1);

CScene* Scene16 = new CScene();
CWorldInfo* WorldInfo17 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo17->setTitle("HAnimHumanoid skin design patterns for apparel, medical");
group->addChildren(*WorldInfo17);

CBackground* Background18 = (CBackground *)(m_pScene.createNode("Background"));
Background18->setSkyColor(new float[3]{0,0.6,0.6});
group->addChildren(*Background18);

CGroup* Group19 = (CGroup *)(m_pScene.createNode("Group"));
Group19->setDEF("MultipleHumanoids");
CMetadataString* MetadataString20 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString20->setName("HAnimArchitecture");
MetadataString20->setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile");
MetadataString20->setValue(new CString[1]{"E.4 Multiple humanoids per file"}, 1);
Group19->setMetadata(*MetadataString20);

group->addChildren(*Group19);

CViewpoint* Viewpoint21 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint21->setDEF("ViewHelpText");
Viewpoint21->setDescription("Select text to see website");
Viewpoint21->setPosition(new float[3]{0,0,12});
group->addChildren(*Viewpoint21);

CAnchor* Anchor22 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor22->setDescription("DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches");
Anchor22->setUrl(new CString[1]{"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"}, 1);
Anchor22->setParameter(new CString[1]{"target=blank"}, 1);
CShape* Shape23 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance24 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material25 = (CMaterial *)(m_pScene.createNode("Material"));
Material25->setDiffuseColor(new float[3]{0.9,0.9,0.9});
Appearance24->setMaterial(*Material25);

Shape23->setAppearance(*Appearance24);

CText* Text26 = (CText *)(m_pScene.createNode("Text"));
Text26->setString(new CString[3]{"DesignPatternsApparelMedicalSkinLayers.x3d","","explores potential apparel approaches"}, 3);
CFontStyle* FontStyle27 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle27->setFamily(new CString[1]{"SANS"}, 1);
FontStyle27->setStyle("BOLD");
FontStyle27->setSize(0.6);
FontStyle27->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text26->setFontStyle(*FontStyle27);

Shape23->setGeometry(Text26);

Anchor22->addChildren(*Shape23);

CShape* Shape28 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance29 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material30 = (CMaterial *)(m_pScene.createNode("Material"));
Material30->setTransparency(1);
Appearance29->setMaterial(*Material30);

Shape28->setAppearance(*Appearance29);

CBox* Box31 = (CBox *)(m_pScene.createNode("Box"));
Box31->setSize(new float[3]{11,2,0.001});
Shape28->setGeometry(Box31);

Anchor22->addChildren(*Shape28);

group->addChildren(*Anchor22);

X3D0->setScene(*Scene16);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

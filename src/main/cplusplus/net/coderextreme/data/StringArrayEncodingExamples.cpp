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
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("StringArrayEncodingExamples.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Demonstrate simple X3D MFString (string array) encoding.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("created");
meta4->setContent("27 May 2017");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("modified");
meta5->setContent("27 May 2017");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("creator");
meta6->setContent("Don Brutzman");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("reference");
meta7->setContent("X3dHeaderPrototypeSyntaxExamples.x3d");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("specificationSection");
meta8->setContent("X3D encodings, ISO/IEC 19775-1, Part 1: Architecture and base components, 5 Field type reference, 5.3.14 SFString and MFString");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("specificationUrl");
meta9->setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("specificationSection");
meta10->setContent("X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 5.3.14 SFString and MFString");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("specificationUrl");
meta11->setContent("https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("specificationSection");
meta12->setContent("X3D encodings, ISO/IEC 19776-2 v3.3, Part 2: Classic VRML encoding, 5.15 SFString and MFString");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("specificationUrl");
meta13->setContent("https://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/EncodingOfFields.html#SFString");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("identifier");
meta14->setContent("https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamples.x3d");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("generator");
meta15->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("license");
meta16->setContent("../license.html");
head1->addMeta(*meta16);

X3D0->setHead(*head1);

CScene* Scene17 = new CScene();
CViewpoint* Viewpoint18 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint18->setDEF("EntryView");
Viewpoint18->setDescription("Hello MFString syntax");
group->addChildren(*Viewpoint18);

CBackground* Background19 = (CBackground *)(m_pScene.createNode("Background"));
Background19->setSkyColor(new float[3]{0.6,1,0.8});
group->addChildren(*Background19);

CShape* Shape20 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text21 = (CText *)(m_pScene.createNode("Text"));
Text21->setString(new CString[3]{"One, Two, Three","","He said, \"Immel did it!\""}, 3);
//alternative XML encoding: Text string='\"One, Two, Three\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative Java source: .setString(new String [] {\"One, Two, Three\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
CFontStyle* FontStyle22 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle22->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle22->setStyle("BOLD");
Text21->setFontStyle(*FontStyle22);

Shape20->setGeometry(Text21);

CAppearance* Appearance23 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material24 = (CMaterial *)(m_pScene.createNode("Material"));
Material24->setDiffuseColor(new float[3]{0.6,0.4,0.2});
Appearance23->setMaterial(*Material24);

Shape20->setAppearance(*Appearance23);

group->addChildren(*Shape20);

X3D0->setScene(*Scene17);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

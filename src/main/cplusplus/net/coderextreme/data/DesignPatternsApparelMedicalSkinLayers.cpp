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

Cmeta* meta16 = new Cmeta();
meta16->setName("license");
meta16->setContent("../license.html");
head1->addMeta(*meta16);

X3D0->setHead(*head1);

CScene* Scene17 = new CScene();
CWorldInfo* WorldInfo18 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo18->setTitle("HAnimHumanoid skin design patterns for apparel, medical");
group->addChildren(*WorldInfo18);

CBackground* Background19 = (CBackground *)(m_pScene.createNode("Background"));
Background19->setSkyColor(new float[3]{0,0.6,0.6});
group->addChildren(*Background19);

CGroup* Group20 = (CGroup *)(m_pScene.createNode("Group"));
Group20->setDEF("MultipleHumanoids");
CMetadataString* MetadataString21 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString21->setName("HAnimArchitecture");
MetadataString21->setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile");
MetadataString21->setValue(new CString[1]{"E.4 Multiple humanoids per file"}, 1);
Group20->setMetadata(*MetadataString21);

//==============================
CHAnimHumanoid* HAnimHumanoid22 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid22->setName("SimpleSkeleton");
HAnimHumanoid22->setDEF("a_SimpleSkeleton");
HAnimHumanoid22->setVersion("2.0");
CHAnimJoint* HAnimJoint23 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint23->setName("humanoid_root");
HAnimJoint23->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint23->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment24 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment24->setName("sacrum");
CShape* Shape25 = (CShape *)(m_pScene.createNode("Shape"));
Shape25->setDEF("JointVisualization");
HAnimSegment24->addChildren(*Shape25);

CShape* Shape26 = (CShape *)(m_pScene.createNode("Shape"));
Shape26->setDEF("SegmentVisualization");
HAnimSegment24->addChildren(*Shape26);

CHAnimSite* HAnimSite27 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite27->setName("feature01_tip");
HAnimSite27->setDEF("a_feature01_tip");
CShape* Shape28 = (CShape *)(m_pScene.createNode("Shape"));
Shape28->setDEF("SiteVisualization");
HAnimSite27->addChildren(*Shape28);

HAnimSegment24->addChildren(*HAnimSite27);

HAnimJoint23->addChildren(*HAnimSegment24);

HAnimHumanoid22->setSkeleton(*HAnimJoint23);

Group20->addChildren(*HAnimHumanoid22);

//==============================
CHAnimHumanoid* HAnimHumanoid29 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid29->setName("SimpleSkeletonMesh");
HAnimHumanoid29->setDEF("b_SimpleSkeletonMesh");
HAnimHumanoid29->setVersion("2.0");
CHAnimJoint* HAnimJoint30 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint30->setName("humanoid_root");
HAnimJoint30->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint30->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment31 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment31->setName("sacrum");
CShape* Shape32 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet33 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet33->setDEF("SegmentBoneMesh");
Shape32->setGeometry(IndexedFaceSet33);

HAnimSegment31->addChildren(*Shape32);

HAnimJoint30->addChildren(*HAnimSegment31);

HAnimHumanoid29->setSkeleton(*HAnimJoint30);

Group20->addChildren(*HAnimHumanoid29);

//==============================
CHAnimHumanoid* HAnimHumanoid34 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid34->setName("SkinIndexedGeometry");
HAnimHumanoid34->setDEF("c_SkinIndexedGeometry");
HAnimHumanoid34->setVersion("2.0");
CHAnimJoint* HAnimJoint35 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint35->setName("humanoid_root");
HAnimJoint35->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint35->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment36 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment36->setName("sacrum");
HAnimJoint35->addChildren(*HAnimSegment36);

HAnimHumanoid34->setSkeleton(*HAnimJoint35);

CIndexedFaceSet* IndexedFaceSet37 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet37->setDEF("SkinMeshIFS");
HAnimHumanoid34->setSkin(*IndexedFaceSet37);

Group20->addChildren(*HAnimHumanoid34);

//==============================
CHAnimHumanoid* HAnimHumanoid38 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid38->setName("SkinShapeIndexedGeometry");
HAnimHumanoid38->setDEF("d_SkinShapeIndexedGeometry");
HAnimHumanoid38->setVersion("2.0");
CHAnimJoint* HAnimJoint39 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint39->setName("humanoid_root");
HAnimJoint39->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint39->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment40 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment40->setName("sacrum");
HAnimJoint39->addChildren(*HAnimSegment40);

HAnimHumanoid38->setSkeleton(*HAnimJoint39);

CShape* Shape41 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet42 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet42->setUSE("SkinMeshIFS");
Shape41->setGeometry(IndexedFaceSet42);

HAnimHumanoid38->setSkin(*Shape41);

Group20->addChildren(*HAnimHumanoid38);

//==============================
CHAnimHumanoid* HAnimHumanoid43 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid43->setName("SkinSwitchShapeIndexedGeometry");
HAnimHumanoid43->setDEF("e_SkinSwitchShapeIndexedGeometry");
HAnimHumanoid43->setVersion("2.0");
CHAnimJoint* HAnimJoint44 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint44->setName("humanoid_root");
HAnimJoint44->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint44->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment45 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment45->setName("sacrum");
HAnimJoint44->addChildren(*HAnimSegment45);

HAnimHumanoid43->setSkeleton(*HAnimJoint44);

//TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'>
CShape* Shape46 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet47 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet47->setDEF("IndexedSkinMeshIFS");
CCoordinate* Coordinate48 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate48->setDEF("SkinMeshCoordinate");
IndexedFaceSet47->setCoord(*Coordinate48);

Shape46->setGeometry(IndexedFaceSet47);

HAnimHumanoid43->setSkin(*Shape46);

Group20->addChildren(*HAnimHumanoid43);

//similarly for LOD
//==============================
CHAnimHumanoid* HAnimHumanoid49 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid49->setName("SynthesizedSkinShapeIndexedTwoPartGeometry");
HAnimHumanoid49->setDEF("f_SynthesizedSkinShapeIndexedTwoPartGeometry");
HAnimHumanoid49->setVersion("2.0");
CHAnimJoint* HAnimJoint50 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint50->setName("humanoid_root");
HAnimJoint50->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint50->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment51 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment51->setName("sacrum");
HAnimJoint50->addChildren(*HAnimSegment51);

HAnimHumanoid49->setSkeleton(*HAnimJoint50);

CShape* Shape52 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet53 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet53->setDEF("TwoPartIndexedSkinMesh");
CCoordinate* Coordinate54 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate54->setDEF("TwoPartSkinMesh");
IndexedFaceSet53->setCoord(*Coordinate54);

Shape52->setGeometry(IndexedFaceSet53);

HAnimHumanoid49->setSkin(*Shape52);

Group20->addChildren(*HAnimHumanoid49);

//==============================
CHAnimHumanoid* HAnimHumanoid55 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid55->setName("ApparelSkinIndexedGeometryMultipleShapes");
HAnimHumanoid55->setDEF("g_ApparelSkinIndexedGeometryMultipleShapes");
HAnimHumanoid55->setVersion("2.0");
CHAnimJoint* HAnimJoint56 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint56->setName("humanoid_root");
HAnimJoint56->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint56->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment57 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment57->setName("sacrum");
HAnimJoint56->addChildren(*HAnimSegment57);

HAnimHumanoid55->setSkeleton(*HAnimJoint56);

CShape* Shape58 = (CShape *)(m_pScene.createNode("Shape"));
HAnimHumanoid55->setSkin(*Shape58);

//allow multiple Shape nodes with containerField='apparel', one for each layer of clothing
//TODO proposed for X3D4.1 <Shape containerField='apparel'/>
Group20->addChildren(*HAnimHumanoid55);

//==============================
CHAnimHumanoid* HAnimHumanoid59 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid59->setName("AnatomySkinIndexedGeometryMultipleShapes");
HAnimHumanoid59->setDEF("h_AnatomySkinIndexedGeometryMultipleShapes");
HAnimHumanoid59->setVersion("2.0");
CHAnimJoint* HAnimJoint60 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint60->setName("humanoid_root");
HAnimJoint60->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint60->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment61 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment61->setName("sacrum");
HAnimJoint60->addChildren(*HAnimSegment61);

HAnimHumanoid59->setSkeleton(*HAnimJoint60);

//allow multiple Shape nodes with containerField='skin', one for each layer of skin
CShape* Shape62 = (CShape *)(m_pScene.createNode("Shape"));
HAnimHumanoid59->setSkin(*Shape62);

Group20->addChildren(*HAnimHumanoid59);

//==============================
group->addChildren(*Group20);

CViewpoint* Viewpoint63 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint63->setDEF("ViewHelpText");
Viewpoint63->setDescription("Select text to see website");
Viewpoint63->setPosition(new float[3]{0,0,12});
group->addChildren(*Viewpoint63);

//Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip
CAnchor* Anchor64 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor64->setDescription("DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches");
Anchor64->setParameter(new CString[1]{"target=blank"}, 1);
Anchor64->setUrl(new CString[1]{"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"}, 1);
CShape* Shape65 = (CShape *)(m_pScene.createNode("Shape"));
//TODO adjust Text string and Box size, then set Material transparency='1'
CText* Text66 = (CText *)(m_pScene.createNode("Text"));
Text66->setString(new CString[3]{"DesignPatternsApparelMedicalSkinLayers.x3d","","explores potential apparel approaches"}, 3);
CFontStyle* FontStyle67 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle67->setFamily(new CString[1]{"SANS"}, 1);
FontStyle67->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle67->setSize(0.6);
FontStyle67->setStyle("BOLD");
Text66->setFontStyle(*FontStyle67);

Shape65->setGeometry(Text66);

CAppearance* Appearance68 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material69 = (CMaterial *)(m_pScene.createNode("Material"));
Material69->setDiffuseColor(new float[3]{0.9,0.9,0.9});
Appearance68->setMaterial(*Material69);

Shape65->setAppearance(*Appearance68);

Anchor64->addChildren(*Shape65);

CShape* Shape70 = (CShape *)(m_pScene.createNode("Shape"));
//Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible.
CBox* Box71 = (CBox *)(m_pScene.createNode("Box"));
Box71->setSize(new float[3]{11,2,0.001});
Shape70->setGeometry(Box71);

CAppearance* Appearance72 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material73 = (CMaterial *)(m_pScene.createNode("Material"));
Material73->setTransparency(1);
Appearance72->setMaterial(*Material73);

Shape70->setAppearance(*Appearance72);

Anchor64->addChildren(*Shape70);

group->addChildren(*Anchor64);

X3D0->setScene(*Scene17);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

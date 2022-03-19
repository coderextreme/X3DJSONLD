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
X3D0->setVersion("4.0");
Chead* head1 = new Chead();
Ccomponent* component2 = new Ccomponent();
component2->setName("HAnim");
component2->setLevel(1);
head1->addComponent(*component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("HAnimModelHandLeft.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("Left hand, using high-fidelity definitions for HAnim version 2.0");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("Kwan-Hee YOO, Don Brutzman and Joe Williams");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("26 January 2015");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("23 December 2021");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("TODO");
meta8->setContent("fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("Image");
meta9->setContent("HAnimModelHandRightSegmentVisualizationError.png");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("error");
meta10->setContent("not yet to scale, also relatively flat");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("warning");
meta11->setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("info");
meta12->setContent("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("reference");
meta13->setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("reference");
meta14->setContent("https://www.web3d.org/documents/specifications/19774/V2.0");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("reference");
meta15->setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("reference");
meta16->setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("reference");
meta17->setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("reference");
meta18->setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("subject");
meta19->setContent("X3D HAnim humanoid animation");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("TODO");
meta20->setContent("Integrate and confirm Segment/Joint names, Viewpoints.");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("identifier");
meta21->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d");
head1->addMeta(*meta21);

Cmeta* meta22 = new Cmeta();
meta22->setName("generator");
meta22->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta22);

Cmeta* meta23 = new Cmeta();
meta23->setName("license");
meta23->setContent("../license.html");
head1->addMeta(*meta23);

X3D0->setHead(*head1);

CScene* Scene24 = new CScene();
CWorldInfo* WorldInfo25 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo25->setTitle("HAnimModelHandLeft.x3d");
group->addChildren(*WorldInfo25);

CHAnimHumanoid* HAnimHumanoid26 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid26->setName("Hand_Left");
HAnimHumanoid26->setDEF("hanim_Hand_Left");
HAnimHumanoid26->setLoa(4);
HAnimHumanoid26->setVersion("2.0");
//original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
CMetadataSet* MetadataSet27 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet27->setName("HAnimHumanoid.info");
MetadataSet27->setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
CMetadataString* MetadataString28 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString28->setName("authorName");
MetadataString28->setValue(new CString[1]{"Kwan-Hee YOO, Don Brutzman and Joe Williams"}, 1);
MetadataSet27->setValue(*MetadataString28);

HAnimHumanoid26->setMetadata(*MetadataSet27);

CHAnimJoint* HAnimJoint29 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint29->setName("humanoid_root");
HAnimJoint29->setDEF("hanim_humanoid_root");
HAnimJoint29->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint29->setLlimit(new float[3]{0,0,0}, 3);
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model
CHAnimJoint* HAnimJoint30 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint30->setName("l_radiocarpal");
HAnimJoint30->setDEF("hanim_l_radiocarpal");
HAnimJoint30->setDescription("connection joint of hand to leg above");
HAnimJoint30->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint30->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment31 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment31->setName("l_carpal");
HAnimSegment31->setDEF("hanim_l_carpal");
CTransform* Transform32 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape33 = (CShape *)(m_pScene.createNode("Shape"));
Shape33->setDEF("HAnimJointShape");
CSphere* Sphere34 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere34->setRadius(0.025);
Shape33->setGeometry(Sphere34);

CAppearance* Appearance35 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance35->setDEF("HAnimJointAppearanceBlue");
CMaterial* Material36 = (CMaterial *)(m_pScene.createNode("Material"));
Material36->setDiffuseColor(new float[3]{0,0,1});
Appearance35->setMaterial(*Material36);

Shape33->setAppearance(*Appearance35);

Transform32->addChildren(*Shape33);

HAnimSegment31->addChildren(*Transform32);

CShape* Shape37 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance38 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material39 = (CMaterial *)(m_pScene.createNode("Material"));
Material39->setEmissiveColor(new float[3]{1,1,1});
Appearance38->setMaterial(*Material39);

Shape37->setAppearance(*Appearance38);

CIndexedLineSet* IndexedLineSet40 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet40->setDEF("RCToMC12");
IndexedLineSet40->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate41 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate41->setPoint(new float[6]{0,0,0,0.1,0.1,0});
IndexedLineSet40->setCoord(*Coordinate41);

Shape37->setGeometry(IndexedLineSet40);

HAnimSegment31->addChildren(*Shape37);

CShape* Shape42 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance43 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material44 = (CMaterial *)(m_pScene.createNode("Material"));
Material44->setEmissiveColor(new float[3]{1,1,1});
Appearance43->setMaterial(*Material44);

Shape42->setAppearance(*Appearance43);

CIndexedLineSet* IndexedLineSet45 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet45->setDEF("RCToMC3");
IndexedLineSet45->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate46 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate46->setPoint(new float[6]{0,0,0,0,0.07,0});
IndexedLineSet45->setCoord(*Coordinate46);

Shape42->setGeometry(IndexedLineSet45);

HAnimSegment31->addChildren(*Shape42);

CShape* Shape47 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance48 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material49 = (CMaterial *)(m_pScene.createNode("Material"));
Material49->setEmissiveColor(new float[3]{1,1,1});
Appearance48->setMaterial(*Material49);

Shape47->setAppearance(*Appearance48);

CIndexedLineSet* IndexedLineSet50 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet50->setDEF("RCToMC45");
IndexedLineSet50->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate51 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate51->setPoint(new float[6]{0,0,0,-0.1,0.1,0});
IndexedLineSet50->setCoord(*Coordinate51);

Shape47->setGeometry(IndexedLineSet50);

HAnimSegment31->addChildren(*Shape47);

HAnimJoint30->addChildren(*HAnimSegment31);

//MC1
CHAnimJoint* HAnimJoint52 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint52->setName("l_midcarpal_1");
HAnimJoint52->setDEF("hanim_l_midcarpal_1");
HAnimJoint52->setCenter(new float[3]{0.14,0.09,0});
HAnimJoint52->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint52->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment53 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment53->setName("l_trapezium");
HAnimSegment53->setDEF("hanim_l_trapezium");
CTransform* Transform54 = (CTransform *)(m_pScene.createNode("Transform"));
Transform54->setTranslation(new float[3]{0.14,0.09,0});
CShape* Shape55 = (CShape *)(m_pScene.createNode("Shape"));
Shape55->setDEF("HAnimNewJointShape");
CSphere* Sphere56 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere56->setRadius(0.025);
Shape55->setGeometry(Sphere56);

CAppearance* Appearance57 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance57->setDEF("HAnimJointAppearanceRed");
CMaterial* Material58 = (CMaterial *)(m_pScene.createNode("Material"));
Material58->setDiffuseColor(new float[3]{1,0,0});
Appearance57->setMaterial(*Material58);

Shape55->setAppearance(*Appearance57);

Transform54->addChildren(*Shape55);

HAnimSegment53->addChildren(*Transform54);

CShape* Shape59 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance60 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material61 = (CMaterial *)(m_pScene.createNode("Material"));
Material61->setEmissiveColor(new float[3]{1,1,1});
Appearance60->setMaterial(*Material61);

Shape59->setAppearance(*Appearance60);

CIndexedLineSet* IndexedLineSet62 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet62->setDEF("MC12toCMC1");
IndexedLineSet62->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate63 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate63->setPoint(new float[6]{0.1,0.1,0,0.2,0.15,0});
IndexedLineSet62->setCoord(*Coordinate63);

Shape59->setGeometry(IndexedLineSet62);

HAnimSegment53->addChildren(*Shape59);

CShape* Shape64 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance65 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material66 = (CMaterial *)(m_pScene.createNode("Material"));
Material66->setEmissiveColor(new float[3]{1,1,1});
Appearance65->setMaterial(*Material66);

Shape64->setAppearance(*Appearance65);

CIndexedLineSet* IndexedLineSet67 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet67->setDEF("MC1toCMC1");
IndexedLineSet67->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate68 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate68->setPoint(new float[6]{0.1,0.1,0,0.1,0.2,0});
IndexedLineSet67->setCoord(*Coordinate68);

Shape64->setGeometry(IndexedLineSet67);

HAnimSegment53->addChildren(*Shape64);

HAnimJoint52->addChildren(*HAnimSegment53);

//thumb finger
CHAnimJoint* HAnimJoint69 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint69->setName("l_carpometacarpal_1");
HAnimJoint69->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint69->setCenter(new float[3]{0.2,0.15,0});
HAnimJoint69->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint69->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment70 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment70->setName("l_metacarpal_1");
HAnimSegment70->setDEF("hanim_l_metacarpal_1");
CTransform* Transform71 = (CTransform *)(m_pScene.createNode("Transform"));
Transform71->setTranslation(new float[3]{0.2,0.15,0});
CShape* Shape72 = (CShape *)(m_pScene.createNode("Shape"));
Shape72->setUSE("HAnimJointShape");
Transform71->addChildren(*Shape72);

HAnimSegment70->addChildren(*Transform71);

CShape* Shape73 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance74 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material75 = (CMaterial *)(m_pScene.createNode("Material"));
Material75->setEmissiveColor(new float[3]{1,1,1});
Appearance74->setMaterial(*Material75);

Shape73->setAppearance(*Appearance74);

CIndexedLineSet* IndexedLineSet76 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet76->setDEF("CMC1toMCP1");
IndexedLineSet76->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate77 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate77->setPoint(new float[6]{0.2,0.15,0,0.3,0.3,0});
IndexedLineSet76->setCoord(*Coordinate77);

Shape73->setGeometry(IndexedLineSet76);

HAnimSegment70->addChildren(*Shape73);

HAnimJoint69->addChildren(*HAnimSegment70);

CHAnimJoint* HAnimJoint78 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint78->setName("l_metacarpophalangeal_1");
HAnimJoint78->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint78->setCenter(new float[3]{0.3,0.3,0});
HAnimJoint78->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint78->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment79 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment79->setName("l_carpal_proximal_phalanx_1");
HAnimSegment79->setDEF("hanim_l_carpal_proximal_phalanx_1");
CTransform* Transform80 = (CTransform *)(m_pScene.createNode("Transform"));
Transform80->setTranslation(new float[3]{0.3,0.3,0});
CShape* Shape81 = (CShape *)(m_pScene.createNode("Shape"));
Shape81->setUSE("HAnimJointShape");
Transform80->addChildren(*Shape81);

HAnimSegment79->addChildren(*Transform80);

CShape* Shape82 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance83 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material84 = (CMaterial *)(m_pScene.createNode("Material"));
Material84->setEmissiveColor(new float[3]{1,1,1});
Appearance83->setMaterial(*Material84);

Shape82->setAppearance(*Appearance83);

CIndexedLineSet* IndexedLineSet85 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet85->setDEF("MCP11toIP1");
IndexedLineSet85->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate86 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate86->setPoint(new float[6]{0.3,0.3,0,0.35,0.4,0});
IndexedLineSet85->setCoord(*Coordinate86);

Shape82->setGeometry(IndexedLineSet85);

HAnimSegment79->addChildren(*Shape82);

HAnimJoint78->addChildren(*HAnimSegment79);

CHAnimJoint* HAnimJoint87 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint87->setName("l_carpal_interphalangeal_1");
HAnimJoint87->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint87->setCenter(new float[3]{0.35,0.4,0});
HAnimJoint87->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint87->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment88 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment88->setName("l_carpal_distal_phalanx_1");
HAnimSegment88->setDEF("hanim_l_carpal_distal_phalanx_1");
CTransform* Transform89 = (CTransform *)(m_pScene.createNode("Transform"));
Transform89->setTranslation(new float[3]{0.35,0.4,0});
CShape* Shape90 = (CShape *)(m_pScene.createNode("Shape"));
Shape90->setUSE("HAnimJointShape");
Transform89->addChildren(*Shape90);

HAnimSegment88->addChildren(*Transform89);

CShape* Shape91 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance92 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material93 = (CMaterial *)(m_pScene.createNode("Material"));
Material93->setEmissiveColor(new float[3]{1,1,1});
Appearance92->setMaterial(*Material93);

Shape91->setAppearance(*Appearance92);

CIndexedLineSet* IndexedLineSet94 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet94->setDEF("fingertip_l_carpal_interphalangeal_1");
IndexedLineSet94->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate95 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate95->setPoint(new float[6]{0.35,0.4,0,0.36,0.45,0});
IndexedLineSet94->setCoord(*Coordinate95);

Shape91->setGeometry(IndexedLineSet94);

HAnimSegment88->addChildren(*Shape91);

HAnimJoint87->addChildren(*HAnimSegment88);

HAnimJoint78->addChildren(*HAnimJoint87);

HAnimJoint69->addChildren(*HAnimJoint78);

HAnimJoint52->addChildren(*HAnimJoint69);

HAnimJoint30->addChildren(*HAnimJoint52);

//MC2
CHAnimJoint* HAnimJoint96 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint96->setName("l_midcarpal_2");
HAnimJoint96->setDEF("hanim_l_midcarpal_2");
HAnimJoint96->setCenter(new float[3]{0.07,0.07,0});
HAnimJoint96->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint96->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment97 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment97->setName("l_trapezoid");
HAnimSegment97->setDEF("hanim_l_trapezoid");
CTransform* Transform98 = (CTransform *)(m_pScene.createNode("Transform"));
Transform98->setTranslation(new float[3]{0.07,0.07,0});
CShape* Shape99 = (CShape *)(m_pScene.createNode("Shape"));
Shape99->setUSE("HAnimNewJointShape");
Transform98->addChildren(*Shape99);

HAnimSegment97->addChildren(*Transform98);

CShape* Shape100 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance101 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material102 = (CMaterial *)(m_pScene.createNode("Material"));
Material102->setEmissiveColor(new float[3]{1,1,1});
Appearance101->setMaterial(*Material102);

Shape100->setAppearance(*Appearance101);

CIndexedLineSet* IndexedLineSet103 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet103->setDEF("MC2toCMC2");
IndexedLineSet103->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate104 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate104->setPoint(new float[6]{-0.1,0.1,0,-0.1,0.2,0});
IndexedLineSet103->setCoord(*Coordinate104);

Shape100->setGeometry(IndexedLineSet103);

HAnimSegment97->addChildren(*Shape100);

HAnimJoint96->addChildren(*HAnimSegment97);

//index finger
CHAnimJoint* HAnimJoint105 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint105->setName("l_carpometacarpal_2");
HAnimJoint105->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint105->setCenter(new float[3]{0.1,0.2,0});
HAnimJoint105->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint105->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment106 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment106->setName("l_metacarpal_2");
HAnimSegment106->setDEF("hanim_l_metacarpal_2");
CTransform* Transform107 = (CTransform *)(m_pScene.createNode("Transform"));
Transform107->setTranslation(new float[3]{0.1,0.2,0});
CShape* Shape108 = (CShape *)(m_pScene.createNode("Shape"));
Shape108->setUSE("HAnimJointShape");
Transform107->addChildren(*Shape108);

HAnimSegment106->addChildren(*Transform107);

CShape* Shape109 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance110 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material111 = (CMaterial *)(m_pScene.createNode("Material"));
Material111->setEmissiveColor(new float[3]{1,1,1});
Appearance110->setMaterial(*Material111);

Shape109->setAppearance(*Appearance110);

CIndexedLineSet* IndexedLineSet112 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet112->setDEF("CMC2toMCP2");
IndexedLineSet112->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate113 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate113->setPoint(new float[6]{0.1,0.2,0,0.15,0.5,0});
IndexedLineSet112->setCoord(*Coordinate113);

Shape109->setGeometry(IndexedLineSet112);

HAnimSegment106->addChildren(*Shape109);

HAnimJoint105->addChildren(*HAnimSegment106);

CHAnimJoint* HAnimJoint114 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint114->setName("l_metacarpophalangeal_2");
HAnimJoint114->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint114->setCenter(new float[3]{0.15,0.5,0});
HAnimJoint114->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint114->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment115 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment115->setName("l_carpal_proximal_phalanx_2");
HAnimSegment115->setDEF("hanim_l_carpal_proximal_phalanx_2");
CTransform* Transform116 = (CTransform *)(m_pScene.createNode("Transform"));
Transform116->setTranslation(new float[3]{0.15,0.5,0});
CShape* Shape117 = (CShape *)(m_pScene.createNode("Shape"));
Shape117->setUSE("HAnimJointShape");
Transform116->addChildren(*Shape117);

HAnimSegment115->addChildren(*Transform116);

CShape* Shape118 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance119 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material120 = (CMaterial *)(m_pScene.createNode("Material"));
Material120->setEmissiveColor(new float[3]{1,1,1});
Appearance119->setMaterial(*Material120);

Shape118->setAppearance(*Appearance119);

CIndexedLineSet* IndexedLineSet121 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet121->setDEF("MCP2toPIP2");
IndexedLineSet121->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate122 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate122->setPoint(new float[6]{0.15,0.5,0,0.2,0.7,0});
IndexedLineSet121->setCoord(*Coordinate122);

Shape118->setGeometry(IndexedLineSet121);

HAnimSegment115->addChildren(*Shape118);

HAnimJoint114->addChildren(*HAnimSegment115);

CHAnimJoint* HAnimJoint123 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint123->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint123->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint123->setCenter(new float[3]{0.2,0.7,0});
HAnimJoint123->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint123->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment124 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment124->setName("l_carpal_middle_phalanx_2");
HAnimSegment124->setDEF("hanim_l_carpal_middle_phalanx_2");
CTransform* Transform125 = (CTransform *)(m_pScene.createNode("Transform"));
Transform125->setTranslation(new float[3]{0.2,0.7,0});
CShape* Shape126 = (CShape *)(m_pScene.createNode("Shape"));
Shape126->setUSE("HAnimJointShape");
Transform125->addChildren(*Shape126);

HAnimSegment124->addChildren(*Transform125);

CShape* Shape127 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance128 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material129 = (CMaterial *)(m_pScene.createNode("Material"));
Material129->setEmissiveColor(new float[3]{1,1,1});
Appearance128->setMaterial(*Material129);

Shape127->setAppearance(*Appearance128);

CIndexedLineSet* IndexedLineSet130 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet130->setDEF("PIP2toDIP2");
IndexedLineSet130->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate131 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate131->setPoint(new float[6]{0.2,0.7,0,0.24,0.87,0});
IndexedLineSet130->setCoord(*Coordinate131);

Shape127->setGeometry(IndexedLineSet130);

HAnimSegment124->addChildren(*Shape127);

HAnimJoint123->addChildren(*HAnimSegment124);

CHAnimJoint* HAnimJoint132 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint132->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint132->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint132->setCenter(new float[3]{0.24,0.87,0});
HAnimJoint132->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint132->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment133 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment133->setName("l_carpal_distal_phalanx_2");
HAnimSegment133->setDEF("hanim_l_carpal_distal_phalanx_2");
CTransform* Transform134 = (CTransform *)(m_pScene.createNode("Transform"));
Transform134->setTranslation(new float[3]{0.24,0.87,0});
CShape* Shape135 = (CShape *)(m_pScene.createNode("Shape"));
Shape135->setUSE("HAnimJointShape");
Transform134->addChildren(*Shape135);

HAnimSegment133->addChildren(*Transform134);

CShape* Shape136 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance137 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material138 = (CMaterial *)(m_pScene.createNode("Material"));
Material138->setEmissiveColor(new float[3]{1,1,1});
Appearance137->setMaterial(*Material138);

Shape136->setAppearance(*Appearance137);

CIndexedLineSet* IndexedLineSet139 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet139->setDEF("fingertip_l_carpal_distal_interphalangeal_2");
IndexedLineSet139->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate140 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate140->setPoint(new float[6]{0.24,0.87,0,0.26,0.93,0});
IndexedLineSet139->setCoord(*Coordinate140);

Shape136->setGeometry(IndexedLineSet139);

HAnimSegment133->addChildren(*Shape136);

HAnimJoint132->addChildren(*HAnimSegment133);

HAnimJoint123->addChildren(*HAnimJoint132);

HAnimJoint114->addChildren(*HAnimJoint123);

HAnimJoint105->addChildren(*HAnimJoint114);

HAnimJoint96->addChildren(*HAnimJoint105);

HAnimJoint30->addChildren(*HAnimJoint96);

//MC3
CHAnimJoint* HAnimJoint141 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint141->setName("l_midcarpal_3");
HAnimJoint141->setDEF("hanim_l_midcarpal_3");
HAnimJoint141->setCenter(new float[3]{0,0.07,0});
HAnimJoint141->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint141->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment142 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment142->setName("l_capitate");
HAnimSegment142->setDEF("hanim_l_capitate");
CTransform* Transform143 = (CTransform *)(m_pScene.createNode("Transform"));
Transform143->setTranslation(new float[3]{0,0.07,0});
CShape* Shape144 = (CShape *)(m_pScene.createNode("Shape"));
Shape144->setUSE("HAnimNewJointShape");
Transform143->addChildren(*Shape144);

HAnimSegment142->addChildren(*Transform143);

CShape* Shape145 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance146 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material147 = (CMaterial *)(m_pScene.createNode("Material"));
Material147->setEmissiveColor(new float[3]{1,1,1});
Appearance146->setMaterial(*Material147);

Shape145->setAppearance(*Appearance146);

CIndexedLineSet* IndexedLineSet148 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet148->setDEF("MC3toCMC3");
IndexedLineSet148->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate149 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate149->setPoint(new float[6]{0,0.07,0,0,0.2,0});
IndexedLineSet148->setCoord(*Coordinate149);

Shape145->setGeometry(IndexedLineSet148);

HAnimSegment142->addChildren(*Shape145);

HAnimJoint141->addChildren(*HAnimSegment142);

//Middle fingle
CHAnimJoint* HAnimJoint150 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint150->setName("l_carpometacarpal_3");
HAnimJoint150->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint150->setCenter(new float[3]{0,0.2,0});
HAnimJoint150->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint150->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment151 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment151->setName("l_metacarpal_3");
HAnimSegment151->setDEF("hanim_l_metacarpal_3");
CTransform* Transform152 = (CTransform *)(m_pScene.createNode("Transform"));
Transform152->setTranslation(new float[3]{0,0.2,0});
CShape* Shape153 = (CShape *)(m_pScene.createNode("Shape"));
Shape153->setUSE("HAnimJointShape");
Transform152->addChildren(*Shape153);

HAnimSegment151->addChildren(*Transform152);

CShape* Shape154 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance155 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material156 = (CMaterial *)(m_pScene.createNode("Material"));
Material156->setEmissiveColor(new float[3]{1,1,1});
Appearance155->setMaterial(*Material156);

Shape154->setAppearance(*Appearance155);

CIndexedLineSet* IndexedLineSet157 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet157->setDEF("CMC3toMCP3");
IndexedLineSet157->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate158 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate158->setPoint(new float[6]{0,0.2,0,0.03,0.5,0});
IndexedLineSet157->setCoord(*Coordinate158);

Shape154->setGeometry(IndexedLineSet157);

HAnimSegment151->addChildren(*Shape154);

HAnimJoint150->addChildren(*HAnimSegment151);

CHAnimJoint* HAnimJoint159 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint159->setName("l_metacarpophalangeal_3");
HAnimJoint159->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint159->setCenter(new float[3]{0.03,0.5,0});
HAnimJoint159->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint159->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment160 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment160->setName("l_carpal_proximal_phalanx_3");
HAnimSegment160->setDEF("hanim_l_carpal_proximal_phalanx_3");
CTransform* Transform161 = (CTransform *)(m_pScene.createNode("Transform"));
Transform161->setTranslation(new float[3]{0.03,0.5,0});
CShape* Shape162 = (CShape *)(m_pScene.createNode("Shape"));
Shape162->setUSE("HAnimJointShape");
Transform161->addChildren(*Shape162);

HAnimSegment160->addChildren(*Transform161);

CShape* Shape163 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance164 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material165 = (CMaterial *)(m_pScene.createNode("Material"));
Material165->setEmissiveColor(new float[3]{1,1,1});
Appearance164->setMaterial(*Material165);

Shape163->setAppearance(*Appearance164);

CIndexedLineSet* IndexedLineSet166 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet166->setDEF("MCP3toPIP3");
IndexedLineSet166->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate167 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate167->setPoint(new float[6]{0.03,0.5,0,0.05,0.75,0});
IndexedLineSet166->setCoord(*Coordinate167);

Shape163->setGeometry(IndexedLineSet166);

HAnimSegment160->addChildren(*Shape163);

HAnimJoint159->addChildren(*HAnimSegment160);

CHAnimJoint* HAnimJoint168 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint168->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint168->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint168->setCenter(new float[3]{0.05,0.75,0});
HAnimJoint168->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint168->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment169 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment169->setName("l_carpal_middle_phalanx_3");
HAnimSegment169->setDEF("hanim_l_carpal_middle_phalanx_3");
CTransform* Transform170 = (CTransform *)(m_pScene.createNode("Transform"));
Transform170->setTranslation(new float[3]{0.05,0.75,0});
CShape* Shape171 = (CShape *)(m_pScene.createNode("Shape"));
Shape171->setUSE("HAnimJointShape");
Transform170->addChildren(*Shape171);

HAnimSegment169->addChildren(*Transform170);

CShape* Shape172 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance173 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material174 = (CMaterial *)(m_pScene.createNode("Material"));
Material174->setEmissiveColor(new float[3]{1,1,1});
Appearance173->setMaterial(*Material174);

Shape172->setAppearance(*Appearance173);

CIndexedLineSet* IndexedLineSet175 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet175->setDEF("PIP3toDIP3");
IndexedLineSet175->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate176 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate176->setPoint(new float[6]{0.05,0.75,0,0.08,0.96,0});
IndexedLineSet175->setCoord(*Coordinate176);

Shape172->setGeometry(IndexedLineSet175);

HAnimSegment169->addChildren(*Shape172);

HAnimJoint168->addChildren(*HAnimSegment169);

CHAnimJoint* HAnimJoint177 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint177->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint177->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint177->setCenter(new float[3]{0.08,0.96,0});
HAnimJoint177->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint177->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment178 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment178->setName("l_carpal_distal_phalanx_3");
HAnimSegment178->setDEF("hanim_l_carpal_distal_phalanx_3");
CTransform* Transform179 = (CTransform *)(m_pScene.createNode("Transform"));
Transform179->setTranslation(new float[3]{0.08,0.96,0});
CShape* Shape180 = (CShape *)(m_pScene.createNode("Shape"));
Shape180->setUSE("HAnimJointShape");
Transform179->addChildren(*Shape180);

HAnimSegment178->addChildren(*Transform179);

CShape* Shape181 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance182 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material183 = (CMaterial *)(m_pScene.createNode("Material"));
Material183->setEmissiveColor(new float[3]{1,1,1});
Appearance182->setMaterial(*Material183);

Shape181->setAppearance(*Appearance182);

CIndexedLineSet* IndexedLineSet184 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet184->setDEF("fingertip_l_carpal_distal_interphalangeal_3");
IndexedLineSet184->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate185 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate185->setPoint(new float[6]{0.08,0.96,0,0.09,1.05,0});
IndexedLineSet184->setCoord(*Coordinate185);

Shape181->setGeometry(IndexedLineSet184);

HAnimSegment178->addChildren(*Shape181);

HAnimJoint177->addChildren(*HAnimSegment178);

HAnimJoint168->addChildren(*HAnimJoint177);

HAnimJoint159->addChildren(*HAnimJoint168);

HAnimJoint150->addChildren(*HAnimJoint159);

HAnimJoint141->addChildren(*HAnimJoint150);

HAnimJoint30->addChildren(*HAnimJoint141);

//MC45
CHAnimJoint* HAnimJoint186 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint186->setName("l_midcarpal_4_5");
HAnimJoint186->setDEF("hanim_l_midcarpal_4_5");
HAnimJoint186->setCenter(new float[3]{-0.1,0.1,0});
HAnimJoint186->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint186->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment187 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment187->setName("l_hamate");
HAnimSegment187->setDEF("hanim_l_hamate");
CTransform* Transform188 = (CTransform *)(m_pScene.createNode("Transform"));
Transform188->setTranslation(new float[3]{-0.1,0.1,0});
CShape* Shape189 = (CShape *)(m_pScene.createNode("Shape"));
Shape189->setUSE("HAnimNewJointShape");
Transform188->addChildren(*Shape189);

HAnimSegment187->addChildren(*Transform188);

CShape* Shape190 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance191 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material192 = (CMaterial *)(m_pScene.createNode("Material"));
Material192->setEmissiveColor(new float[3]{1,1,1});
Appearance191->setMaterial(*Material192);

Shape190->setAppearance(*Appearance191);

CIndexedLineSet* IndexedLineSet193 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet193->setDEF("MC45toCMC4");
IndexedLineSet193->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate194 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate194->setPoint(new float[6]{-0.1,0.1,0,-0.1,0.2,0});
IndexedLineSet193->setCoord(*Coordinate194);

Shape190->setGeometry(IndexedLineSet193);

HAnimSegment187->addChildren(*Shape190);

CShape* Shape195 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance196 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material197 = (CMaterial *)(m_pScene.createNode("Material"));
Material197->setEmissiveColor(new float[3]{1,1,1});
Appearance196->setMaterial(*Material197);

Shape195->setAppearance(*Appearance196);

CIndexedLineSet* IndexedLineSet198 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet198->setDEF("MC45toCMC5");
IndexedLineSet198->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate199 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate199->setPoint(new float[6]{-0.1,0.1,0,-0.15,0.17,0});
IndexedLineSet198->setCoord(*Coordinate199);

Shape195->setGeometry(IndexedLineSet198);

HAnimSegment187->addChildren(*Shape195);

HAnimJoint186->addChildren(*HAnimSegment187);

//ring finger
CHAnimJoint* HAnimJoint200 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint200->setName("l_carpometacarpal_4");
HAnimJoint200->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint200->setCenter(new float[3]{-0.1,0.2,0});
HAnimJoint200->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint200->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment201 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment201->setName("l_metacarpal_4");
HAnimSegment201->setDEF("hanim_l_metacarpal_4");
CTransform* Transform202 = (CTransform *)(m_pScene.createNode("Transform"));
Transform202->setTranslation(new float[3]{-0.1,0.2,0});
CShape* Shape203 = (CShape *)(m_pScene.createNode("Shape"));
Shape203->setUSE("HAnimJointShape");
Transform202->addChildren(*Shape203);

HAnimSegment201->addChildren(*Transform202);

CShape* Shape204 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance205 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material206 = (CMaterial *)(m_pScene.createNode("Material"));
Material206->setEmissiveColor(new float[3]{1,1,1});
Appearance205->setMaterial(*Material206);

Shape204->setAppearance(*Appearance205);

CIndexedLineSet* IndexedLineSet207 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet207->setDEF("CMC4toMCP4");
IndexedLineSet207->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate208 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate208->setPoint(new float[6]{-0.1,0.2,0,-0.1,0.47,0});
IndexedLineSet207->setCoord(*Coordinate208);

Shape204->setGeometry(IndexedLineSet207);

HAnimSegment201->addChildren(*Shape204);

HAnimJoint200->addChildren(*HAnimSegment201);

CHAnimJoint* HAnimJoint209 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint209->setName("l_metacarpophalangeal_4");
HAnimJoint209->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint209->setCenter(new float[3]{-0.1,0.47,0});
HAnimJoint209->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint209->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment210 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment210->setName("l_carpal_proximal_phalanx_4");
HAnimSegment210->setDEF("hanim_l_carpal_proximal_phalanx_4");
CTransform* Transform211 = (CTransform *)(m_pScene.createNode("Transform"));
Transform211->setTranslation(new float[3]{-0.1,0.47,0});
CShape* Shape212 = (CShape *)(m_pScene.createNode("Shape"));
Shape212->setUSE("HAnimJointShape");
Transform211->addChildren(*Shape212);

HAnimSegment210->addChildren(*Transform211);

CShape* Shape213 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance214 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material215 = (CMaterial *)(m_pScene.createNode("Material"));
Material215->setEmissiveColor(new float[3]{1,1,1});
Appearance214->setMaterial(*Material215);

Shape213->setAppearance(*Appearance214);

CIndexedLineSet* IndexedLineSet216 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet216->setDEF("MCP4toPIP4");
IndexedLineSet216->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate217 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate217->setPoint(new float[6]{-0.1,0.47,0,-0.1,0.7,0});
IndexedLineSet216->setCoord(*Coordinate217);

Shape213->setGeometry(IndexedLineSet216);

HAnimSegment210->addChildren(*Shape213);

HAnimJoint209->addChildren(*HAnimSegment210);

CHAnimJoint* HAnimJoint218 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint218->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint218->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint218->setCenter(new float[3]{-0.1,0.7,0});
HAnimJoint218->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint218->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment219 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment219->setName("l_carpal_middle_phalanx_4");
HAnimSegment219->setDEF("hanim_l_carpal_middle_phalanx_4");
CTransform* Transform220 = (CTransform *)(m_pScene.createNode("Transform"));
Transform220->setTranslation(new float[3]{-0.1,0.7,0});
CShape* Shape221 = (CShape *)(m_pScene.createNode("Shape"));
Shape221->setUSE("HAnimJointShape");
Transform220->addChildren(*Shape221);

HAnimSegment219->addChildren(*Transform220);

CShape* Shape222 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance223 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material224 = (CMaterial *)(m_pScene.createNode("Material"));
Material224->setEmissiveColor(new float[3]{1,1,1});
Appearance223->setMaterial(*Material224);

Shape222->setAppearance(*Appearance223);

CIndexedLineSet* IndexedLineSet225 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet225->setDEF("PIP4toDIP4");
IndexedLineSet225->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate226 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate226->setPoint(new float[6]{-0.1,0.7,0,-0.1,0.93,0});
IndexedLineSet225->setCoord(*Coordinate226);

Shape222->setGeometry(IndexedLineSet225);

HAnimSegment219->addChildren(*Shape222);

HAnimJoint218->addChildren(*HAnimSegment219);

CHAnimJoint* HAnimJoint227 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint227->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint227->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint227->setCenter(new float[3]{-0.1,0.93,0});
HAnimJoint227->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint227->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment228 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment228->setName("l_carpal_distal_phalanx_4");
HAnimSegment228->setDEF("hanim_l_carpal_distal_phalanx_4");
CTransform* Transform229 = (CTransform *)(m_pScene.createNode("Transform"));
Transform229->setTranslation(new float[3]{-0.1,0.93,0});
CShape* Shape230 = (CShape *)(m_pScene.createNode("Shape"));
Shape230->setUSE("HAnimJointShape");
Transform229->addChildren(*Shape230);

HAnimSegment228->addChildren(*Transform229);

CShape* Shape231 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance232 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material233 = (CMaterial *)(m_pScene.createNode("Material"));
Material233->setEmissiveColor(new float[3]{1,1,1});
Appearance232->setMaterial(*Material233);

Shape231->setAppearance(*Appearance232);

CIndexedLineSet* IndexedLineSet234 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet234->setDEF("fingertip_l_carpal_distal_interphalangeal_4");
IndexedLineSet234->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate235 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate235->setPoint(new float[6]{-0.1,0.93,0,-0.1,1,0});
IndexedLineSet234->setCoord(*Coordinate235);

Shape231->setGeometry(IndexedLineSet234);

HAnimSegment228->addChildren(*Shape231);

HAnimJoint227->addChildren(*HAnimSegment228);

HAnimJoint218->addChildren(*HAnimJoint227);

HAnimJoint209->addChildren(*HAnimJoint218);

HAnimJoint200->addChildren(*HAnimJoint209);

HAnimJoint186->addChildren(*HAnimJoint200);

//pinky finger
CHAnimJoint* HAnimJoint236 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint236->setName("l_carpometacarpal_5");
HAnimJoint236->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint236->setCenter(new float[3]{-0.15,0.17,0});
HAnimJoint236->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint236->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment237 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment237->setName("l_metacarpal_5");
HAnimSegment237->setDEF("hanim_l_metacarpal_5");
CTransform* Transform238 = (CTransform *)(m_pScene.createNode("Transform"));
Transform238->setTranslation(new float[3]{-0.15,0.17,0});
CShape* Shape239 = (CShape *)(m_pScene.createNode("Shape"));
Shape239->setUSE("HAnimJointShape");
Transform238->addChildren(*Shape239);

HAnimSegment237->addChildren(*Transform238);

CShape* Shape240 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance241 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material242 = (CMaterial *)(m_pScene.createNode("Material"));
Material242->setEmissiveColor(new float[3]{1,1,1});
Appearance241->setMaterial(*Material242);

Shape240->setAppearance(*Appearance241);

CIndexedLineSet* IndexedLineSet243 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet243->setDEF("CMC5toMCP5");
IndexedLineSet243->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate244 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate244->setPoint(new float[6]{-0.15,0.17,0,-0.2,0.4,0});
IndexedLineSet243->setCoord(*Coordinate244);

Shape240->setGeometry(IndexedLineSet243);

HAnimSegment237->addChildren(*Shape240);

HAnimJoint236->addChildren(*HAnimSegment237);

CHAnimJoint* HAnimJoint245 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint245->setName("l_metacarpophalangeal_5");
HAnimJoint245->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint245->setCenter(new float[3]{-0.2,0.4,0});
HAnimJoint245->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint245->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment246 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment246->setName("l_carpal_proximal_phalanx_5");
HAnimSegment246->setDEF("hanim_l_carpal_proximal_phalanx_5");
CTransform* Transform247 = (CTransform *)(m_pScene.createNode("Transform"));
Transform247->setTranslation(new float[3]{-0.2,0.4,0});
CShape* Shape248 = (CShape *)(m_pScene.createNode("Shape"));
Shape248->setUSE("HAnimJointShape");
Transform247->addChildren(*Shape248);

HAnimSegment246->addChildren(*Transform247);

CShape* Shape249 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance250 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material251 = (CMaterial *)(m_pScene.createNode("Material"));
Material251->setEmissiveColor(new float[3]{1,1,1});
Appearance250->setMaterial(*Material251);

Shape249->setAppearance(*Appearance250);

CIndexedLineSet* IndexedLineSet252 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet252->setDEF("MCP5toPIP5");
IndexedLineSet252->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate253 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate253->setPoint(new float[6]{-0.2,0.4,0,-0.23,0.63,0});
IndexedLineSet252->setCoord(*Coordinate253);

Shape249->setGeometry(IndexedLineSet252);

HAnimSegment246->addChildren(*Shape249);

HAnimJoint245->addChildren(*HAnimSegment246);

CHAnimJoint* HAnimJoint254 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint254->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint254->setDEF("hanim_l_carpal_proximal_interphalangeal_5");
HAnimJoint254->setCenter(new float[3]{-0.23,0.63,0});
HAnimJoint254->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint254->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment255 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment255->setName("l_carpal_middle_phalanx_5");
HAnimSegment255->setDEF("hanim_l_carpal_middle_phalanx_5");
CTransform* Transform256 = (CTransform *)(m_pScene.createNode("Transform"));
Transform256->setTranslation(new float[3]{-0.23,0.63,0});
CShape* Shape257 = (CShape *)(m_pScene.createNode("Shape"));
Shape257->setUSE("HAnimJointShape");
Transform256->addChildren(*Shape257);

HAnimSegment255->addChildren(*Transform256);

CShape* Shape258 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance259 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material260 = (CMaterial *)(m_pScene.createNode("Material"));
Material260->setEmissiveColor(new float[3]{1,1,1});
Appearance259->setMaterial(*Material260);

Shape258->setAppearance(*Appearance259);

CIndexedLineSet* IndexedLineSet261 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet261->setDEF("PIP5toDIP5");
IndexedLineSet261->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate262 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate262->setPoint(new float[6]{-0.23,0.63,0,-0.25,0.79,0});
IndexedLineSet261->setCoord(*Coordinate262);

Shape258->setGeometry(IndexedLineSet261);

HAnimSegment255->addChildren(*Shape258);

HAnimJoint254->addChildren(*HAnimSegment255);

CHAnimJoint* HAnimJoint263 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint263->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint263->setDEF("hanim_l_carpal_distal_interphalangeal_5");
HAnimJoint263->setCenter(new float[3]{-0.25,0.79,0});
HAnimJoint263->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint263->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment264 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment264->setName("l_carpal_distal_phalanx_5");
HAnimSegment264->setDEF("hanim_l_carpal_distal_phalanx_5");
CTransform* Transform265 = (CTransform *)(m_pScene.createNode("Transform"));
Transform265->setTranslation(new float[3]{-0.25,0.79,0});
CShape* Shape266 = (CShape *)(m_pScene.createNode("Shape"));
Shape266->setUSE("HAnimJointShape");
Transform265->addChildren(*Shape266);

HAnimSegment264->addChildren(*Transform265);

CShape* Shape267 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance268 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material269 = (CMaterial *)(m_pScene.createNode("Material"));
Material269->setEmissiveColor(new float[3]{1,1,1});
Appearance268->setMaterial(*Material269);

Shape267->setAppearance(*Appearance268);

CIndexedLineSet* IndexedLineSet270 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet270->setDEF("fingertip_l_carpal_distal_interphalangeal_5");
IndexedLineSet270->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate271 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate271->setPoint(new float[6]{-0.25,0.79,0,-0.26,0.85,0});
IndexedLineSet270->setCoord(*Coordinate271);

Shape267->setGeometry(IndexedLineSet270);

HAnimSegment264->addChildren(*Shape267);

HAnimJoint263->addChildren(*HAnimSegment264);

HAnimJoint254->addChildren(*HAnimJoint263);

HAnimJoint245->addChildren(*HAnimJoint254);

HAnimJoint236->addChildren(*HAnimJoint245);

HAnimJoint186->addChildren(*HAnimJoint236);

HAnimJoint30->addChildren(*HAnimJoint186);

HAnimJoint29->addChildren(*HAnimJoint30);

HAnimHumanoid26->setSkeleton(*HAnimJoint29);

CHAnimJoint* HAnimJoint272 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint272->setUSE("hanim_humanoid_root");
HAnimHumanoid26->addJoints(*HAnimJoint272);

CHAnimJoint* HAnimJoint273 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint273->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid26->addJoints(*HAnimJoint273);

CHAnimJoint* HAnimJoint274 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint274->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid26->addJoints(*HAnimJoint274);

CHAnimJoint* HAnimJoint275 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint275->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid26->addJoints(*HAnimJoint275);

CHAnimJoint* HAnimJoint276 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint276->setUSE("hanim_l_carpal_distal_interphalangeal_5");
HAnimHumanoid26->addJoints(*HAnimJoint276);

CHAnimJoint* HAnimJoint277 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint277->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid26->addJoints(*HAnimJoint277);

CHAnimJoint* HAnimJoint278 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint278->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid26->addJoints(*HAnimJoint278);

CHAnimJoint* HAnimJoint279 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint279->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid26->addJoints(*HAnimJoint279);

CHAnimJoint* HAnimJoint280 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint280->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid26->addJoints(*HAnimJoint280);

CHAnimJoint* HAnimJoint281 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint281->setUSE("hanim_l_carpal_proximal_interphalangeal_5");
HAnimHumanoid26->addJoints(*HAnimJoint281);

CHAnimJoint* HAnimJoint282 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint282->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid26->addJoints(*HAnimJoint282);

CHAnimJoint* HAnimJoint283 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint283->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid26->addJoints(*HAnimJoint283);

CHAnimJoint* HAnimJoint284 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint284->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid26->addJoints(*HAnimJoint284);

CHAnimJoint* HAnimJoint285 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint285->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid26->addJoints(*HAnimJoint285);

CHAnimJoint* HAnimJoint286 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint286->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid26->addJoints(*HAnimJoint286);

CHAnimJoint* HAnimJoint287 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint287->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid26->addJoints(*HAnimJoint287);

CHAnimJoint* HAnimJoint288 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint288->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid26->addJoints(*HAnimJoint288);

CHAnimJoint* HAnimJoint289 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint289->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid26->addJoints(*HAnimJoint289);

CHAnimJoint* HAnimJoint290 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint290->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid26->addJoints(*HAnimJoint290);

CHAnimJoint* HAnimJoint291 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint291->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid26->addJoints(*HAnimJoint291);

CHAnimJoint* HAnimJoint292 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint292->setUSE("hanim_l_midcarpal_1");
HAnimHumanoid26->addJoints(*HAnimJoint292);

CHAnimJoint* HAnimJoint293 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint293->setUSE("hanim_l_midcarpal_2");
HAnimHumanoid26->addJoints(*HAnimJoint293);

CHAnimJoint* HAnimJoint294 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint294->setUSE("hanim_l_midcarpal_3");
HAnimHumanoid26->addJoints(*HAnimJoint294);

CHAnimJoint* HAnimJoint295 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint295->setUSE("hanim_l_midcarpal_4_5");
HAnimHumanoid26->addJoints(*HAnimJoint295);

CHAnimJoint* HAnimJoint296 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint296->setUSE("hanim_l_radiocarpal");
HAnimHumanoid26->addJoints(*HAnimJoint296);

CHAnimSegment* HAnimSegment297 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment297->setUSE("hanim_l_capitate");
HAnimHumanoid26->setSegments(*HAnimSegment297);

CHAnimSegment* HAnimSegment298 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment298->setUSE("hanim_l_carpal");
HAnimHumanoid26->setSegments(*HAnimSegment298);

CHAnimSegment* HAnimSegment299 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment299->setUSE("hanim_l_carpal_distal_phalanx_1");
HAnimHumanoid26->setSegments(*HAnimSegment299);

CHAnimSegment* HAnimSegment300 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment300->setUSE("hanim_l_carpal_distal_phalanx_2");
HAnimHumanoid26->setSegments(*HAnimSegment300);

CHAnimSegment* HAnimSegment301 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment301->setUSE("hanim_l_carpal_distal_phalanx_3");
HAnimHumanoid26->setSegments(*HAnimSegment301);

CHAnimSegment* HAnimSegment302 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment302->setUSE("hanim_l_carpal_distal_phalanx_4");
HAnimHumanoid26->setSegments(*HAnimSegment302);

CHAnimSegment* HAnimSegment303 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment303->setUSE("hanim_l_carpal_distal_phalanx_5");
HAnimHumanoid26->setSegments(*HAnimSegment303);

CHAnimSegment* HAnimSegment304 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment304->setUSE("hanim_l_carpal_middle_phalanx_2");
HAnimHumanoid26->setSegments(*HAnimSegment304);

CHAnimSegment* HAnimSegment305 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment305->setUSE("hanim_l_carpal_middle_phalanx_3");
HAnimHumanoid26->setSegments(*HAnimSegment305);

CHAnimSegment* HAnimSegment306 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment306->setUSE("hanim_l_carpal_middle_phalanx_4");
HAnimHumanoid26->setSegments(*HAnimSegment306);

CHAnimSegment* HAnimSegment307 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment307->setUSE("hanim_l_carpal_middle_phalanx_5");
HAnimHumanoid26->setSegments(*HAnimSegment307);

CHAnimSegment* HAnimSegment308 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment308->setUSE("hanim_l_carpal_proximal_phalanx_1");
HAnimHumanoid26->setSegments(*HAnimSegment308);

CHAnimSegment* HAnimSegment309 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment309->setUSE("hanim_l_carpal_proximal_phalanx_2");
HAnimHumanoid26->setSegments(*HAnimSegment309);

CHAnimSegment* HAnimSegment310 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment310->setUSE("hanim_l_carpal_proximal_phalanx_3");
HAnimHumanoid26->setSegments(*HAnimSegment310);

CHAnimSegment* HAnimSegment311 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment311->setUSE("hanim_l_carpal_proximal_phalanx_4");
HAnimHumanoid26->setSegments(*HAnimSegment311);

CHAnimSegment* HAnimSegment312 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment312->setUSE("hanim_l_carpal_proximal_phalanx_5");
HAnimHumanoid26->setSegments(*HAnimSegment312);

CHAnimSegment* HAnimSegment313 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment313->setUSE("hanim_l_hamate");
HAnimHumanoid26->setSegments(*HAnimSegment313);

CHAnimSegment* HAnimSegment314 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment314->setUSE("hanim_l_metacarpal_1");
HAnimHumanoid26->setSegments(*HAnimSegment314);

CHAnimSegment* HAnimSegment315 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment315->setUSE("hanim_l_metacarpal_2");
HAnimHumanoid26->setSegments(*HAnimSegment315);

CHAnimSegment* HAnimSegment316 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment316->setUSE("hanim_l_metacarpal_3");
HAnimHumanoid26->setSegments(*HAnimSegment316);

CHAnimSegment* HAnimSegment317 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment317->setUSE("hanim_l_metacarpal_4");
HAnimHumanoid26->setSegments(*HAnimSegment317);

CHAnimSegment* HAnimSegment318 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment318->setUSE("hanim_l_metacarpal_5");
HAnimHumanoid26->setSegments(*HAnimSegment318);

CHAnimSegment* HAnimSegment319 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment319->setUSE("hanim_l_trapezium");
HAnimHumanoid26->setSegments(*HAnimSegment319);

CHAnimSegment* HAnimSegment320 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment320->setUSE("hanim_l_trapezoid");
HAnimHumanoid26->setSegments(*HAnimSegment320);

group->addChildren(*HAnimHumanoid26);

X3D0->setScene(*Scene24);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

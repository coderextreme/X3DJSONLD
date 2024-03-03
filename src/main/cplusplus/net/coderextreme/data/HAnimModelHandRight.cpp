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
Ccomponent* component2 = new Ccomponent();
component2->setName("HAnim");
component2->setLevel(1);
head1->addComponent(*component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("HAnimModelHandRight.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("Right hand using high-fidelity definitions for HAnim version 2.0");
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
meta21->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d");
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
WorldInfo25->setTitle("HAnimModelHandRight.x3d");
group->addChildren(*WorldInfo25);

CHAnimHumanoid* HAnimHumanoid26 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid26->setName("Hand_Right");
HAnimHumanoid26->setDEF("hanim_Hand_Right");
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
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model
CHAnimJoint* HAnimJoint30 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint30->setName("r_radiocarpal");
HAnimJoint30->setDEF("hanim_r_radiocarpal");
HAnimJoint30->setDescription("connection joint of hand to leg above");
CHAnimSegment* HAnimSegment31 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment31->setName("r_carpal");
HAnimSegment31->setDEF("hanim_r_carpal");
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

Transform32->addChild(*Shape33);

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
Coordinate41->setPoint(new float[6]{0,0,0,-0.1,0.1,0});
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
Coordinate51->setPoint(new float[6]{0,0,0,0.1,0.1,0});
IndexedLineSet50->setCoord(*Coordinate51);

Shape47->setGeometry(IndexedLineSet50);

HAnimSegment31->addChildren(*Shape47);

HAnimJoint30->addChildren(*HAnimSegment31);

//MC1
CHAnimJoint* HAnimJoint52 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint52->setName("r_midcarpal_1");
HAnimJoint52->setDEF("hanim_r_midcarpal_1");
HAnimJoint52->setCenter(new float[3]{-0.14,0.09,0});
CHAnimSegment* HAnimSegment53 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment53->setName("r_trapezium");
HAnimSegment53->setDEF("hanim_r_trapezium");
CTransform* Transform54 = (CTransform *)(m_pScene.createNode("Transform"));
Transform54->setTranslation(new float[3]{-0.14,0.09,0});
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

Transform54->addChild(*Shape55);

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
Coordinate63->setPoint(new float[6]{-0.1,0.1,0,-0.2,0.15,0});
IndexedLineSet62->setCoord(*Coordinate63);

Shape59->setGeometry(IndexedLineSet62);

HAnimSegment53->addChildren(*Shape59);

HAnimJoint52->addChildren(*HAnimSegment53);

//thumb finger
CHAnimJoint* HAnimJoint64 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint64->setName("r_carpometacarpal_1");
HAnimJoint64->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint64->setCenter(new float[3]{-0.2,0.15,0});
CHAnimSegment* HAnimSegment65 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment65->setName("r_metacarpal_1");
HAnimSegment65->setDEF("hanim_r_metacarpal_1");
CTransform* Transform66 = (CTransform *)(m_pScene.createNode("Transform"));
Transform66->setTranslation(new float[3]{-0.2,0.15,0});
CShape* Shape67 = (CShape *)(m_pScene.createNode("Shape"));
Shape67->setUSE("HAnimJointShape");
Transform66->addChild(*Shape67);

HAnimSegment65->addChildren(*Transform66);

CShape* Shape68 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance69 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material70 = (CMaterial *)(m_pScene.createNode("Material"));
Material70->setEmissiveColor(new float[3]{1,1,1});
Appearance69->setMaterial(*Material70);

Shape68->setAppearance(*Appearance69);

CIndexedLineSet* IndexedLineSet71 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet71->setDEF("CMC1toMCP1xxx");
IndexedLineSet71->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate72 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate72->setPoint(new float[6]{-0.2,0.15,0,-0.3,0.3,0});
IndexedLineSet71->setCoord(*Coordinate72);

Shape68->setGeometry(IndexedLineSet71);

HAnimSegment65->addChildren(*Shape68);

HAnimJoint64->addChildren(*HAnimSegment65);

CHAnimJoint* HAnimJoint73 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint73->setName("r_metacarpophalangeal_1");
HAnimJoint73->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint73->setCenter(new float[3]{-0.3,0.3,0});
CHAnimSegment* HAnimSegment74 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment74->setName("r_carpal_proximal_phalanx_1");
HAnimSegment74->setDEF("hanim_r_carpal_proximal_phalanx_1");
CTransform* Transform75 = (CTransform *)(m_pScene.createNode("Transform"));
Transform75->setTranslation(new float[3]{-0.3,0.3,0});
CShape* Shape76 = (CShape *)(m_pScene.createNode("Shape"));
Shape76->setUSE("HAnimJointShape");
Transform75->addChild(*Shape76);

HAnimSegment74->addChildren(*Transform75);

CShape* Shape77 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance78 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material79 = (CMaterial *)(m_pScene.createNode("Material"));
Material79->setEmissiveColor(new float[3]{1,1,1});
Appearance78->setMaterial(*Material79);

Shape77->setAppearance(*Appearance78);

CIndexedLineSet* IndexedLineSet80 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet80->setDEF("MCP11toIP1");
IndexedLineSet80->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate81 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate81->setPoint(new float[6]{-0.3,0.3,0,-0.35,0.4,0});
IndexedLineSet80->setCoord(*Coordinate81);

Shape77->setGeometry(IndexedLineSet80);

HAnimSegment74->addChildren(*Shape77);

HAnimJoint73->addChildren(*HAnimSegment74);

CHAnimJoint* HAnimJoint82 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint82->setName("r_carpal_interphalangeal_1");
HAnimJoint82->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint82->setCenter(new float[3]{-0.35,0.4,0});
CHAnimSegment* HAnimSegment83 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment83->setName("r_carpal_distal_phalanx_1");
HAnimSegment83->setDEF("hanim_r_carpal_distal_phalanx_1");
CTransform* Transform84 = (CTransform *)(m_pScene.createNode("Transform"));
Transform84->setTranslation(new float[3]{-0.35,0.4,0});
CShape* Shape85 = (CShape *)(m_pScene.createNode("Shape"));
Shape85->setUSE("HAnimJointShape");
Transform84->addChild(*Shape85);

HAnimSegment83->addChildren(*Transform84);

CShape* Shape86 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance87 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material88 = (CMaterial *)(m_pScene.createNode("Material"));
Material88->setEmissiveColor(new float[3]{1,1,1});
Appearance87->setMaterial(*Material88);

Shape86->setAppearance(*Appearance87);

CIndexedLineSet* IndexedLineSet89 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet89->setDEF("fingertip_r_carpal_interphalangeal_1");
IndexedLineSet89->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate90 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate90->setPoint(new float[6]{-0.35,0.4,0,-0.36,0.45,0});
IndexedLineSet89->setCoord(*Coordinate90);

Shape86->setGeometry(IndexedLineSet89);

HAnimSegment83->addChildren(*Shape86);

HAnimJoint82->addChildren(*HAnimSegment83);

HAnimJoint73->addChildren(*HAnimJoint82);

HAnimJoint64->addChildren(*HAnimJoint73);

HAnimJoint52->addChildren(*HAnimJoint64);

HAnimJoint30->addChildren(*HAnimJoint52);

//MC2
CHAnimJoint* HAnimJoint91 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint91->setName("r_midcarpal_2");
HAnimJoint91->setDEF("hanim_r_midcarpal_2");
HAnimJoint91->setCenter(new float[3]{-0.07,0.07,0});
CHAnimSegment* HAnimSegment92 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment92->setName("r_trapezoid");
HAnimSegment92->setDEF("hanim_r_trapezoid");
CTransform* Transform93 = (CTransform *)(m_pScene.createNode("Transform"));
Transform93->setTranslation(new float[3]{-0.07,0.07,0});
CShape* Shape94 = (CShape *)(m_pScene.createNode("Shape"));
Shape94->setUSE("HAnimNewJointShape");
Transform93->addChild(*Shape94);

HAnimSegment92->addChildren(*Transform93);

CShape* Shape95 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance96 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material97 = (CMaterial *)(m_pScene.createNode("Material"));
Material97->setEmissiveColor(new float[3]{1,1,1});
Appearance96->setMaterial(*Material97);

Shape95->setAppearance(*Appearance96);

CIndexedLineSet* IndexedLineSet98 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet98->setDEF("MC12toCMC2");
IndexedLineSet98->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate99 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate99->setPoint(new float[6]{-0.1,0.1,0,-0.1,0.2,0});
IndexedLineSet98->setCoord(*Coordinate99);

Shape95->setGeometry(IndexedLineSet98);

HAnimSegment92->addChildren(*Shape95);

HAnimJoint91->addChildren(*HAnimSegment92);

//index finger
CHAnimJoint* HAnimJoint100 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint100->setName("r_carpometacarpal_2");
HAnimJoint100->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint100->setCenter(new float[3]{-0.1,0.2,0});
CHAnimSegment* HAnimSegment101 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment101->setName("r_metacarpal_2");
HAnimSegment101->setDEF("hanim_r_metacarpal_2");
CTransform* Transform102 = (CTransform *)(m_pScene.createNode("Transform"));
Transform102->setTranslation(new float[3]{-0.1,0.2,0});
CShape* Shape103 = (CShape *)(m_pScene.createNode("Shape"));
Shape103->setUSE("HAnimJointShape");
Transform102->addChild(*Shape103);

HAnimSegment101->addChildren(*Transform102);

CShape* Shape104 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance105 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material106 = (CMaterial *)(m_pScene.createNode("Material"));
Material106->setEmissiveColor(new float[3]{1,1,1});
Appearance105->setMaterial(*Material106);

Shape104->setAppearance(*Appearance105);

CIndexedLineSet* IndexedLineSet107 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet107->setDEF("CMC2toMCP2");
IndexedLineSet107->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate108 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate108->setPoint(new float[6]{-0.1,0.2,0,-0.15,0.5,0});
IndexedLineSet107->setCoord(*Coordinate108);

Shape104->setGeometry(IndexedLineSet107);

HAnimSegment101->addChildren(*Shape104);

HAnimJoint100->addChildren(*HAnimSegment101);

CHAnimJoint* HAnimJoint109 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint109->setName("r_metacarpophalangeal_2");
HAnimJoint109->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint109->setCenter(new float[3]{-0.15,0.5,0});
CHAnimSegment* HAnimSegment110 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment110->setName("r_carpal_proximal_phalanx_2");
HAnimSegment110->setDEF("hanim_r_carpal_proximal_phalanx_2");
CTransform* Transform111 = (CTransform *)(m_pScene.createNode("Transform"));
Transform111->setTranslation(new float[3]{-0.15,0.5,0});
CShape* Shape112 = (CShape *)(m_pScene.createNode("Shape"));
Shape112->setUSE("HAnimJointShape");
Transform111->addChild(*Shape112);

HAnimSegment110->addChildren(*Transform111);

CShape* Shape113 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance114 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material115 = (CMaterial *)(m_pScene.createNode("Material"));
Material115->setEmissiveColor(new float[3]{1,1,1});
Appearance114->setMaterial(*Material115);

Shape113->setAppearance(*Appearance114);

CIndexedLineSet* IndexedLineSet116 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet116->setDEF("MCP2toPIP2");
IndexedLineSet116->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate117 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate117->setPoint(new float[6]{-0.15,0.5,0,-0.2,0.7,0});
IndexedLineSet116->setCoord(*Coordinate117);

Shape113->setGeometry(IndexedLineSet116);

HAnimSegment110->addChildren(*Shape113);

HAnimJoint109->addChildren(*HAnimSegment110);

CHAnimJoint* HAnimJoint118 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint118->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint118->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint118->setCenter(new float[3]{-0.2,0.7,0});
CHAnimSegment* HAnimSegment119 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment119->setName("r_carpal_middle_phalanx_2");
HAnimSegment119->setDEF("hanim_r_carpal_middle_phalanx_2");
CTransform* Transform120 = (CTransform *)(m_pScene.createNode("Transform"));
Transform120->setTranslation(new float[3]{-0.2,0.7,0});
CShape* Shape121 = (CShape *)(m_pScene.createNode("Shape"));
Shape121->setUSE("HAnimJointShape");
Transform120->addChild(*Shape121);

HAnimSegment119->addChildren(*Transform120);

CShape* Shape122 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance123 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material124 = (CMaterial *)(m_pScene.createNode("Material"));
Material124->setEmissiveColor(new float[3]{1,1,1});
Appearance123->setMaterial(*Material124);

Shape122->setAppearance(*Appearance123);

CIndexedLineSet* IndexedLineSet125 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet125->setDEF("PIP2toDIP2");
IndexedLineSet125->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate126 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate126->setPoint(new float[6]{-0.2,0.7,0,-0.24,0.87,0});
IndexedLineSet125->setCoord(*Coordinate126);

Shape122->setGeometry(IndexedLineSet125);

HAnimSegment119->addChildren(*Shape122);

HAnimJoint118->addChildren(*HAnimSegment119);

CHAnimJoint* HAnimJoint127 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint127->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint127->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint127->setCenter(new float[3]{-0.24,0.87,0});
CHAnimSegment* HAnimSegment128 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment128->setName("r_carpal_distal_phalanx_2");
HAnimSegment128->setDEF("hanim_r_carpal_distal_phalanx_2");
CTransform* Transform129 = (CTransform *)(m_pScene.createNode("Transform"));
Transform129->setTranslation(new float[3]{-0.24,0.87,0});
CShape* Shape130 = (CShape *)(m_pScene.createNode("Shape"));
Shape130->setUSE("HAnimJointShape");
Transform129->addChild(*Shape130);

HAnimSegment128->addChildren(*Transform129);

CShape* Shape131 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance132 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material133 = (CMaterial *)(m_pScene.createNode("Material"));
Material133->setEmissiveColor(new float[3]{1,1,1});
Appearance132->setMaterial(*Material133);

Shape131->setAppearance(*Appearance132);

CIndexedLineSet* IndexedLineSet134 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet134->setDEF("fingertip_r_carpal_distal_interphalangeal_2");
IndexedLineSet134->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate135 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate135->setPoint(new float[6]{-0.24,0.87,0,-0.26,0.93,0});
IndexedLineSet134->setCoord(*Coordinate135);

Shape131->setGeometry(IndexedLineSet134);

HAnimSegment128->addChildren(*Shape131);

HAnimJoint127->addChildren(*HAnimSegment128);

HAnimJoint118->addChildren(*HAnimJoint127);

HAnimJoint109->addChildren(*HAnimJoint118);

HAnimJoint100->addChildren(*HAnimJoint109);

HAnimJoint91->addChildren(*HAnimJoint100);

HAnimJoint30->addChildren(*HAnimJoint91);

//MC3
CHAnimJoint* HAnimJoint136 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint136->setName("r_midcarpal_3");
HAnimJoint136->setDEF("hanim_r_midcarpal_3");
HAnimJoint136->setCenter(new float[3]{0,0.07,0});
CHAnimSegment* HAnimSegment137 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment137->setName("r_capitate");
HAnimSegment137->setDEF("hanim_r_capitate");
CTransform* Transform138 = (CTransform *)(m_pScene.createNode("Transform"));
Transform138->setTranslation(new float[3]{0,0.07,0});
CShape* Shape139 = (CShape *)(m_pScene.createNode("Shape"));
Shape139->setUSE("HAnimNewJointShape");
Transform138->addChild(*Shape139);

HAnimSegment137->addChildren(*Transform138);

CShape* Shape140 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance141 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material142 = (CMaterial *)(m_pScene.createNode("Material"));
Material142->setEmissiveColor(new float[3]{1,1,1});
Appearance141->setMaterial(*Material142);

Shape140->setAppearance(*Appearance141);

CIndexedLineSet* IndexedLineSet143 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet143->setDEF("MC3toCMC3");
IndexedLineSet143->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate144 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate144->setPoint(new float[6]{0,0.07,0,0,0.2,0});
IndexedLineSet143->setCoord(*Coordinate144);

Shape140->setGeometry(IndexedLineSet143);

HAnimSegment137->addChildren(*Shape140);

HAnimJoint136->addChildren(*HAnimSegment137);

//Middle fingle
CHAnimJoint* HAnimJoint145 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint145->setName("r_carpometacarpal_3");
HAnimJoint145->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint145->setCenter(new float[3]{0,0.2,0});
CHAnimSegment* HAnimSegment146 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment146->setName("r_metacarpal_3");
HAnimSegment146->setDEF("hanim_r_metacarpal_3");
CTransform* Transform147 = (CTransform *)(m_pScene.createNode("Transform"));
Transform147->setTranslation(new float[3]{0,0.2,0});
CShape* Shape148 = (CShape *)(m_pScene.createNode("Shape"));
Shape148->setUSE("HAnimJointShape");
Transform147->addChild(*Shape148);

HAnimSegment146->addChildren(*Transform147);

CShape* Shape149 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance150 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material151 = (CMaterial *)(m_pScene.createNode("Material"));
Material151->setEmissiveColor(new float[3]{1,1,1});
Appearance150->setMaterial(*Material151);

Shape149->setAppearance(*Appearance150);

CIndexedLineSet* IndexedLineSet152 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet152->setDEF("CMC3toMCP3");
IndexedLineSet152->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate153 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate153->setPoint(new float[6]{0,0.2,0,-0.03,0.5,0});
IndexedLineSet152->setCoord(*Coordinate153);

Shape149->setGeometry(IndexedLineSet152);

HAnimSegment146->addChildren(*Shape149);

HAnimJoint145->addChildren(*HAnimSegment146);

CHAnimJoint* HAnimJoint154 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint154->setName("r_metacarpophalangeal_3");
HAnimJoint154->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint154->setCenter(new float[3]{-0.03,0.5,0});
CHAnimSegment* HAnimSegment155 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment155->setName("r_carpal_proximal_phalanx_3");
HAnimSegment155->setDEF("hanim_r_carpal_proximal_phalanx_3");
CTransform* Transform156 = (CTransform *)(m_pScene.createNode("Transform"));
Transform156->setTranslation(new float[3]{-0.03,0.5,0});
CShape* Shape157 = (CShape *)(m_pScene.createNode("Shape"));
Shape157->setUSE("HAnimJointShape");
Transform156->addChild(*Shape157);

HAnimSegment155->addChildren(*Transform156);

CShape* Shape158 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance159 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material160 = (CMaterial *)(m_pScene.createNode("Material"));
Material160->setEmissiveColor(new float[3]{1,1,1});
Appearance159->setMaterial(*Material160);

Shape158->setAppearance(*Appearance159);

CIndexedLineSet* IndexedLineSet161 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet161->setDEF("MCP3toPIP3");
IndexedLineSet161->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate162 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate162->setPoint(new float[6]{-0.03,0.5,0,-0.05,0.75,0});
IndexedLineSet161->setCoord(*Coordinate162);

Shape158->setGeometry(IndexedLineSet161);

HAnimSegment155->addChildren(*Shape158);

HAnimJoint154->addChildren(*HAnimSegment155);

CHAnimJoint* HAnimJoint163 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint163->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint163->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint163->setCenter(new float[3]{-0.05,0.75,0});
CHAnimSegment* HAnimSegment164 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment164->setName("r_carpal_middle_phalanx_3");
HAnimSegment164->setDEF("hanim_r_carpal_middle_phalanx_3");
CTransform* Transform165 = (CTransform *)(m_pScene.createNode("Transform"));
Transform165->setTranslation(new float[3]{-0.05,0.75,0});
CShape* Shape166 = (CShape *)(m_pScene.createNode("Shape"));
Shape166->setUSE("HAnimJointShape");
Transform165->addChild(*Shape166);

HAnimSegment164->addChildren(*Transform165);

CShape* Shape167 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance168 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material169 = (CMaterial *)(m_pScene.createNode("Material"));
Material169->setEmissiveColor(new float[3]{1,1,1});
Appearance168->setMaterial(*Material169);

Shape167->setAppearance(*Appearance168);

CIndexedLineSet* IndexedLineSet170 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet170->setDEF("PIP3toDIP3");
IndexedLineSet170->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate171 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate171->setPoint(new float[6]{-0.05,0.75,0,-0.08,0.96,0});
IndexedLineSet170->setCoord(*Coordinate171);

Shape167->setGeometry(IndexedLineSet170);

HAnimSegment164->addChildren(*Shape167);

HAnimJoint163->addChildren(*HAnimSegment164);

CHAnimJoint* HAnimJoint172 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint172->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint172->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint172->setCenter(new float[3]{-0.08,0.96,0});
CHAnimSegment* HAnimSegment173 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment173->setName("r_carpal_distal_phalanx_3");
HAnimSegment173->setDEF("hanim_r_carpal_distal_phalanx_3");
CTransform* Transform174 = (CTransform *)(m_pScene.createNode("Transform"));
Transform174->setTranslation(new float[3]{-0.08,0.96,0});
CShape* Shape175 = (CShape *)(m_pScene.createNode("Shape"));
Shape175->setUSE("HAnimJointShape");
Transform174->addChild(*Shape175);

HAnimSegment173->addChildren(*Transform174);

CShape* Shape176 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance177 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material178 = (CMaterial *)(m_pScene.createNode("Material"));
Material178->setEmissiveColor(new float[3]{1,1,1});
Appearance177->setMaterial(*Material178);

Shape176->setAppearance(*Appearance177);

CIndexedLineSet* IndexedLineSet179 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet179->setDEF("fingertip_r_carpal_distal_interphalangeal_3");
IndexedLineSet179->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate180 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate180->setPoint(new float[6]{-0.08,0.96,0,-0.09,1.05,0});
IndexedLineSet179->setCoord(*Coordinate180);

Shape176->setGeometry(IndexedLineSet179);

HAnimSegment173->addChildren(*Shape176);

HAnimJoint172->addChildren(*HAnimSegment173);

HAnimJoint163->addChildren(*HAnimJoint172);

HAnimJoint154->addChildren(*HAnimJoint163);

HAnimJoint145->addChildren(*HAnimJoint154);

HAnimJoint136->addChildren(*HAnimJoint145);

HAnimJoint30->addChildren(*HAnimJoint136);

//MC4_5
CHAnimJoint* HAnimJoint181 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint181->setName("r_midcarpal_4_5");
HAnimJoint181->setDEF("hanim_r_midcarpal_4_5");
HAnimJoint181->setCenter(new float[3]{0.1,0.1,0});
CHAnimSegment* HAnimSegment182 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment182->setName("r_hamate");
HAnimSegment182->setDEF("hanim_r_hamate");
CTransform* Transform183 = (CTransform *)(m_pScene.createNode("Transform"));
Transform183->setTranslation(new float[3]{0.1,0.1,0});
CShape* Shape184 = (CShape *)(m_pScene.createNode("Shape"));
Shape184->setUSE("HAnimNewJointShape");
Transform183->addChild(*Shape184);

HAnimSegment182->addChildren(*Transform183);

CShape* Shape185 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance186 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material187 = (CMaterial *)(m_pScene.createNode("Material"));
Material187->setEmissiveColor(new float[3]{1,1,1});
Appearance186->setMaterial(*Material187);

Shape185->setAppearance(*Appearance186);

CIndexedLineSet* IndexedLineSet188 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet188->setDEF("MC45toCMC4");
IndexedLineSet188->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate189 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate189->setPoint(new float[6]{0.1,0.1,0,0.1,0.2,0});
IndexedLineSet188->setCoord(*Coordinate189);

Shape185->setGeometry(IndexedLineSet188);

HAnimSegment182->addChildren(*Shape185);

CShape* Shape190 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance191 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material192 = (CMaterial *)(m_pScene.createNode("Material"));
Material192->setEmissiveColor(new float[3]{1,1,1});
Appearance191->setMaterial(*Material192);

Shape190->setAppearance(*Appearance191);

CIndexedLineSet* IndexedLineSet193 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet193->setDEF("MC45toCMC5");
IndexedLineSet193->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate194 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate194->setPoint(new float[6]{0.1,0.1,0,0.15,0.17,0});
IndexedLineSet193->setCoord(*Coordinate194);

Shape190->setGeometry(IndexedLineSet193);

HAnimSegment182->addChildren(*Shape190);

HAnimJoint181->addChildren(*HAnimSegment182);

//ring finger
CHAnimJoint* HAnimJoint195 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint195->setName("r_carpometacarpal_4");
HAnimJoint195->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint195->setCenter(new float[3]{0.1,0.2,0});
CHAnimSegment* HAnimSegment196 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment196->setName("r_metacarpal_4");
HAnimSegment196->setDEF("hanim_r_metacarpal_4");
CTransform* Transform197 = (CTransform *)(m_pScene.createNode("Transform"));
Transform197->setTranslation(new float[3]{0.1,0.2,0});
CShape* Shape198 = (CShape *)(m_pScene.createNode("Shape"));
Shape198->setUSE("HAnimJointShape");
Transform197->addChild(*Shape198);

HAnimSegment196->addChildren(*Transform197);

CShape* Shape199 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance200 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material201 = (CMaterial *)(m_pScene.createNode("Material"));
Material201->setEmissiveColor(new float[3]{1,1,1});
Appearance200->setMaterial(*Material201);

Shape199->setAppearance(*Appearance200);

CIndexedLineSet* IndexedLineSet202 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet202->setDEF("CMC4toMCP4");
IndexedLineSet202->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate203 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate203->setPoint(new float[6]{0.1,0.2,0,0.1,0.47,0});
IndexedLineSet202->setCoord(*Coordinate203);

Shape199->setGeometry(IndexedLineSet202);

HAnimSegment196->addChildren(*Shape199);

HAnimJoint195->addChildren(*HAnimSegment196);

CHAnimJoint* HAnimJoint204 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint204->setName("r_metacarpophalangeal_4");
HAnimJoint204->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint204->setCenter(new float[3]{0.1,0.47,0});
CHAnimSegment* HAnimSegment205 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment205->setName("r_carpal_proximal_phalanx_4");
HAnimSegment205->setDEF("hanim_r_carpal_proximal_phalanx_4");
CTransform* Transform206 = (CTransform *)(m_pScene.createNode("Transform"));
Transform206->setTranslation(new float[3]{0.1,0.47,0});
CShape* Shape207 = (CShape *)(m_pScene.createNode("Shape"));
Shape207->setUSE("HAnimJointShape");
Transform206->addChild(*Shape207);

HAnimSegment205->addChildren(*Transform206);

CShape* Shape208 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance209 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material210 = (CMaterial *)(m_pScene.createNode("Material"));
Material210->setEmissiveColor(new float[3]{1,1,1});
Appearance209->setMaterial(*Material210);

Shape208->setAppearance(*Appearance209);

CIndexedLineSet* IndexedLineSet211 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet211->setDEF("MCP4toPIP4");
IndexedLineSet211->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate212 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate212->setPoint(new float[6]{0.1,0.47,0,0.1,0.7,0});
IndexedLineSet211->setCoord(*Coordinate212);

Shape208->setGeometry(IndexedLineSet211);

HAnimSegment205->addChildren(*Shape208);

HAnimJoint204->addChildren(*HAnimSegment205);

CHAnimJoint* HAnimJoint213 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint213->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint213->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint213->setCenter(new float[3]{0.1,0.7,0});
CHAnimSegment* HAnimSegment214 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment214->setName("r_carpal_middle_phalanx_4");
HAnimSegment214->setDEF("hanim_r_carpal_middle_phalanx_4");
CTransform* Transform215 = (CTransform *)(m_pScene.createNode("Transform"));
Transform215->setTranslation(new float[3]{0.1,0.7,0});
CShape* Shape216 = (CShape *)(m_pScene.createNode("Shape"));
Shape216->setUSE("HAnimJointShape");
Transform215->addChild(*Shape216);

HAnimSegment214->addChildren(*Transform215);

CShape* Shape217 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance218 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material219 = (CMaterial *)(m_pScene.createNode("Material"));
Material219->setEmissiveColor(new float[3]{1,1,1});
Appearance218->setMaterial(*Material219);

Shape217->setAppearance(*Appearance218);

CIndexedLineSet* IndexedLineSet220 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet220->setDEF("PIP4toDIP4");
IndexedLineSet220->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate221 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate221->setPoint(new float[6]{0.1,0.7,0,0.1,0.93,0});
IndexedLineSet220->setCoord(*Coordinate221);

Shape217->setGeometry(IndexedLineSet220);

HAnimSegment214->addChildren(*Shape217);

HAnimJoint213->addChildren(*HAnimSegment214);

CHAnimJoint* HAnimJoint222 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint222->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint222->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint222->setCenter(new float[3]{0.1,0.93,0});
CHAnimSegment* HAnimSegment223 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment223->setName("r_carpal_distal_phalanx_4");
HAnimSegment223->setDEF("hanim_r_carpal_distal_phalanx_4");
CTransform* Transform224 = (CTransform *)(m_pScene.createNode("Transform"));
Transform224->setTranslation(new float[3]{0.1,0.93,0});
CShape* Shape225 = (CShape *)(m_pScene.createNode("Shape"));
Shape225->setUSE("HAnimJointShape");
Transform224->addChild(*Shape225);

HAnimSegment223->addChildren(*Transform224);

CShape* Shape226 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance227 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material228 = (CMaterial *)(m_pScene.createNode("Material"));
Material228->setEmissiveColor(new float[3]{1,1,1});
Appearance227->setMaterial(*Material228);

Shape226->setAppearance(*Appearance227);

CIndexedLineSet* IndexedLineSet229 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet229->setDEF("fingertip_r_carpal_distal_interphalangeal_4");
IndexedLineSet229->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate230 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate230->setPoint(new float[6]{0.1,0.93,0,0.1,1,0});
IndexedLineSet229->setCoord(*Coordinate230);

Shape226->setGeometry(IndexedLineSet229);

HAnimSegment223->addChildren(*Shape226);

HAnimJoint222->addChildren(*HAnimSegment223);

HAnimJoint213->addChildren(*HAnimJoint222);

HAnimJoint204->addChildren(*HAnimJoint213);

HAnimJoint195->addChildren(*HAnimJoint204);

HAnimJoint181->addChildren(*HAnimJoint195);

//pinky finger
CHAnimJoint* HAnimJoint231 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint231->setName("r_carpometacarpal_5");
HAnimJoint231->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint231->setCenter(new float[3]{0.15,0.17,0});
CHAnimSegment* HAnimSegment232 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment232->setName("r_metacarpal_5");
HAnimSegment232->setDEF("hanim_r_metacarpal_5");
CTransform* Transform233 = (CTransform *)(m_pScene.createNode("Transform"));
Transform233->setTranslation(new float[3]{0.15,0.17,0});
CShape* Shape234 = (CShape *)(m_pScene.createNode("Shape"));
Shape234->setUSE("HAnimJointShape");
Transform233->addChild(*Shape234);

HAnimSegment232->addChildren(*Transform233);

CShape* Shape235 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance236 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material237 = (CMaterial *)(m_pScene.createNode("Material"));
Material237->setEmissiveColor(new float[3]{1,1,1});
Appearance236->setMaterial(*Material237);

Shape235->setAppearance(*Appearance236);

CIndexedLineSet* IndexedLineSet238 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet238->setDEF("CMC5toMCP5");
IndexedLineSet238->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate239 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate239->setPoint(new float[6]{0.15,0.17,0,0.2,0.4,0});
IndexedLineSet238->setCoord(*Coordinate239);

Shape235->setGeometry(IndexedLineSet238);

HAnimSegment232->addChildren(*Shape235);

HAnimJoint231->addChildren(*HAnimSegment232);

CHAnimJoint* HAnimJoint240 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint240->setName("r_metacarpophalangeal_5");
HAnimJoint240->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint240->setCenter(new float[3]{0.2,0.4,0});
CHAnimSegment* HAnimSegment241 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment241->setName("r_carpal_proximal_phalanx_5");
HAnimSegment241->setDEF("hanim_r_carpal_proximal_phalanx_5");
CTransform* Transform242 = (CTransform *)(m_pScene.createNode("Transform"));
Transform242->setTranslation(new float[3]{0.2,0.4,0});
CShape* Shape243 = (CShape *)(m_pScene.createNode("Shape"));
Shape243->setUSE("HAnimJointShape");
Transform242->addChild(*Shape243);

HAnimSegment241->addChildren(*Transform242);

CShape* Shape244 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance245 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material246 = (CMaterial *)(m_pScene.createNode("Material"));
Material246->setEmissiveColor(new float[3]{1,1,1});
Appearance245->setMaterial(*Material246);

Shape244->setAppearance(*Appearance245);

CIndexedLineSet* IndexedLineSet247 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet247->setDEF("MCP5toPIP5");
IndexedLineSet247->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate248 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate248->setPoint(new float[6]{0.2,0.4,0,0.23,0.63,0});
IndexedLineSet247->setCoord(*Coordinate248);

Shape244->setGeometry(IndexedLineSet247);

HAnimSegment241->addChildren(*Shape244);

HAnimJoint240->addChildren(*HAnimSegment241);

CHAnimJoint* HAnimJoint249 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint249->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint249->setDEF("hanim_r_carpal_proximal_interphalangeal_5");
HAnimJoint249->setCenter(new float[3]{0.23,0.63,0});
CHAnimSegment* HAnimSegment250 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment250->setName("r_carpal_middle_phalanx_5");
HAnimSegment250->setDEF("hanim_r_carpal_middle_phalanx_5");
CTransform* Transform251 = (CTransform *)(m_pScene.createNode("Transform"));
Transform251->setTranslation(new float[3]{0.23,0.63,0});
CShape* Shape252 = (CShape *)(m_pScene.createNode("Shape"));
Shape252->setUSE("HAnimJointShape");
Transform251->addChild(*Shape252);

HAnimSegment250->addChildren(*Transform251);

CShape* Shape253 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance254 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material255 = (CMaterial *)(m_pScene.createNode("Material"));
Material255->setEmissiveColor(new float[3]{1,1,1});
Appearance254->setMaterial(*Material255);

Shape253->setAppearance(*Appearance254);

CIndexedLineSet* IndexedLineSet256 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet256->setDEF("PIP5toDIP5");
IndexedLineSet256->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate257 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate257->setPoint(new float[6]{0.23,0.63,0,0.25,0.79,0});
IndexedLineSet256->setCoord(*Coordinate257);

Shape253->setGeometry(IndexedLineSet256);

HAnimSegment250->addChildren(*Shape253);

HAnimJoint249->addChildren(*HAnimSegment250);

CHAnimJoint* HAnimJoint258 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint258->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint258->setDEF("hanim_r_carpal_distal_interphalangeal_5");
HAnimJoint258->setCenter(new float[3]{0.25,0.79,0});
CHAnimSegment* HAnimSegment259 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment259->setName("r_carpal_distal_phalanx_5");
HAnimSegment259->setDEF("hanim_r_carpal_distal_phalanx_5");
CTransform* Transform260 = (CTransform *)(m_pScene.createNode("Transform"));
Transform260->setTranslation(new float[3]{0.25,0.79,0});
CShape* Shape261 = (CShape *)(m_pScene.createNode("Shape"));
Shape261->setUSE("HAnimJointShape");
Transform260->addChild(*Shape261);

HAnimSegment259->addChildren(*Transform260);

CShape* Shape262 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance263 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material264 = (CMaterial *)(m_pScene.createNode("Material"));
Material264->setEmissiveColor(new float[3]{1,1,1});
Appearance263->setMaterial(*Material264);

Shape262->setAppearance(*Appearance263);

CIndexedLineSet* IndexedLineSet265 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet265->setDEF("fingertip_r_carpal_distal_interphalangeal_5");
IndexedLineSet265->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate266 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate266->setPoint(new float[6]{0.25,0.79,0,0.26,0.85,0});
IndexedLineSet265->setCoord(*Coordinate266);

Shape262->setGeometry(IndexedLineSet265);

HAnimSegment259->addChildren(*Shape262);

HAnimJoint258->addChildren(*HAnimSegment259);

HAnimJoint249->addChildren(*HAnimJoint258);

HAnimJoint240->addChildren(*HAnimJoint249);

HAnimJoint231->addChildren(*HAnimJoint240);

HAnimJoint181->addChildren(*HAnimJoint231);

HAnimJoint30->addChildren(*HAnimJoint181);

HAnimJoint29->addChildren(*HAnimJoint30);

HAnimHumanoid26->setSkeleton(*HAnimJoint29);

CHAnimJoint* HAnimJoint267 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint267->setUSE("hanim_humanoid_root");
HAnimHumanoid26->addJoints(*HAnimJoint267);

CHAnimJoint* HAnimJoint268 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint268->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid26->addJoints(*HAnimJoint268);

CHAnimJoint* HAnimJoint269 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint269->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid26->addJoints(*HAnimJoint269);

CHAnimJoint* HAnimJoint270 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint270->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid26->addJoints(*HAnimJoint270);

CHAnimJoint* HAnimJoint271 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint271->setUSE("hanim_r_carpal_distal_interphalangeal_5");
HAnimHumanoid26->addJoints(*HAnimJoint271);

CHAnimJoint* HAnimJoint272 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint272->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid26->addJoints(*HAnimJoint272);

CHAnimJoint* HAnimJoint273 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint273->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid26->addJoints(*HAnimJoint273);

CHAnimJoint* HAnimJoint274 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint274->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid26->addJoints(*HAnimJoint274);

CHAnimJoint* HAnimJoint275 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint275->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid26->addJoints(*HAnimJoint275);

CHAnimJoint* HAnimJoint276 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint276->setUSE("hanim_r_carpal_proximal_interphalangeal_5");
HAnimHumanoid26->addJoints(*HAnimJoint276);

CHAnimJoint* HAnimJoint277 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint277->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid26->addJoints(*HAnimJoint277);

CHAnimJoint* HAnimJoint278 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint278->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid26->addJoints(*HAnimJoint278);

CHAnimJoint* HAnimJoint279 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint279->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid26->addJoints(*HAnimJoint279);

CHAnimJoint* HAnimJoint280 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint280->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid26->addJoints(*HAnimJoint280);

CHAnimJoint* HAnimJoint281 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint281->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid26->addJoints(*HAnimJoint281);

CHAnimJoint* HAnimJoint282 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint282->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid26->addJoints(*HAnimJoint282);

CHAnimJoint* HAnimJoint283 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint283->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid26->addJoints(*HAnimJoint283);

CHAnimJoint* HAnimJoint284 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint284->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid26->addJoints(*HAnimJoint284);

CHAnimJoint* HAnimJoint285 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint285->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid26->addJoints(*HAnimJoint285);

CHAnimJoint* HAnimJoint286 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint286->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid26->addJoints(*HAnimJoint286);

CHAnimJoint* HAnimJoint287 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint287->setUSE("hanim_r_midcarpal_1");
HAnimHumanoid26->addJoints(*HAnimJoint287);

CHAnimJoint* HAnimJoint288 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint288->setUSE("hanim_r_midcarpal_2");
HAnimHumanoid26->addJoints(*HAnimJoint288);

CHAnimJoint* HAnimJoint289 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint289->setUSE("hanim_r_midcarpal_3");
HAnimHumanoid26->addJoints(*HAnimJoint289);

CHAnimJoint* HAnimJoint290 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint290->setUSE("hanim_r_midcarpal_4_5");
HAnimHumanoid26->addJoints(*HAnimJoint290);

CHAnimJoint* HAnimJoint291 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint291->setUSE("hanim_r_radiocarpal");
HAnimHumanoid26->addJoints(*HAnimJoint291);

CHAnimSegment* HAnimSegment292 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment292->setUSE("hanim_r_capitate");
HAnimHumanoid26->setSegments(*HAnimSegment292);

CHAnimSegment* HAnimSegment293 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment293->setUSE("hanim_r_carpal");
HAnimHumanoid26->setSegments(*HAnimSegment293);

CHAnimSegment* HAnimSegment294 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment294->setUSE("hanim_r_carpal_distal_phalanx_1");
HAnimHumanoid26->setSegments(*HAnimSegment294);

CHAnimSegment* HAnimSegment295 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment295->setUSE("hanim_r_carpal_distal_phalanx_2");
HAnimHumanoid26->setSegments(*HAnimSegment295);

CHAnimSegment* HAnimSegment296 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment296->setUSE("hanim_r_carpal_distal_phalanx_3");
HAnimHumanoid26->setSegments(*HAnimSegment296);

CHAnimSegment* HAnimSegment297 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment297->setUSE("hanim_r_carpal_distal_phalanx_4");
HAnimHumanoid26->setSegments(*HAnimSegment297);

CHAnimSegment* HAnimSegment298 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment298->setUSE("hanim_r_carpal_distal_phalanx_5");
HAnimHumanoid26->setSegments(*HAnimSegment298);

CHAnimSegment* HAnimSegment299 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment299->setUSE("hanim_r_carpal_middle_phalanx_2");
HAnimHumanoid26->setSegments(*HAnimSegment299);

CHAnimSegment* HAnimSegment300 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment300->setUSE("hanim_r_carpal_middle_phalanx_3");
HAnimHumanoid26->setSegments(*HAnimSegment300);

CHAnimSegment* HAnimSegment301 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment301->setUSE("hanim_r_carpal_middle_phalanx_4");
HAnimHumanoid26->setSegments(*HAnimSegment301);

CHAnimSegment* HAnimSegment302 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment302->setUSE("hanim_r_carpal_middle_phalanx_5");
HAnimHumanoid26->setSegments(*HAnimSegment302);

CHAnimSegment* HAnimSegment303 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment303->setUSE("hanim_r_carpal_proximal_phalanx_1");
HAnimHumanoid26->setSegments(*HAnimSegment303);

CHAnimSegment* HAnimSegment304 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment304->setUSE("hanim_r_carpal_proximal_phalanx_2");
HAnimHumanoid26->setSegments(*HAnimSegment304);

CHAnimSegment* HAnimSegment305 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment305->setUSE("hanim_r_carpal_proximal_phalanx_3");
HAnimHumanoid26->setSegments(*HAnimSegment305);

CHAnimSegment* HAnimSegment306 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment306->setUSE("hanim_r_carpal_proximal_phalanx_4");
HAnimHumanoid26->setSegments(*HAnimSegment306);

CHAnimSegment* HAnimSegment307 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment307->setUSE("hanim_r_carpal_proximal_phalanx_5");
HAnimHumanoid26->setSegments(*HAnimSegment307);

CHAnimSegment* HAnimSegment308 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment308->setUSE("hanim_r_hamate");
HAnimHumanoid26->setSegments(*HAnimSegment308);

CHAnimSegment* HAnimSegment309 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment309->setUSE("hanim_r_metacarpal_1");
HAnimHumanoid26->setSegments(*HAnimSegment309);

CHAnimSegment* HAnimSegment310 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment310->setUSE("hanim_r_metacarpal_2");
HAnimHumanoid26->setSegments(*HAnimSegment310);

CHAnimSegment* HAnimSegment311 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment311->setUSE("hanim_r_metacarpal_3");
HAnimHumanoid26->setSegments(*HAnimSegment311);

CHAnimSegment* HAnimSegment312 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment312->setUSE("hanim_r_metacarpal_4");
HAnimHumanoid26->setSegments(*HAnimSegment312);

CHAnimSegment* HAnimSegment313 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment313->setUSE("hanim_r_metacarpal_5");
HAnimHumanoid26->setSegments(*HAnimSegment313);

CHAnimSegment* HAnimSegment314 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment314->setUSE("hanim_r_trapezium");
HAnimHumanoid26->setSegments(*HAnimSegment314);

CHAnimSegment* HAnimSegment315 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment315->setUSE("hanim_r_trapezoid");
HAnimHumanoid26->setSegments(*HAnimSegment315);

group->addChildren(*HAnimHumanoid26);

X3D0->setScene(*Scene24);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

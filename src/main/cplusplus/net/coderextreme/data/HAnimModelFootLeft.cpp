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
meta2->setContent("HAnimModelFootLeft.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Left foot, using high-fidelity definitions for HAnim version 2.0");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Kwan-Hee YOO, Don Brutzman and Joe Williams");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("created");
meta5->setContent("26 January 2015");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("23 December 2021");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("warning");
meta7->setContent("not yet to scale");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("warning");
meta8->setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("info");
meta9->setContent("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("https://www.web3d.org/documents/specifications/19774/V2.0");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("reference");
meta13->setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("reference");
meta14->setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("reference");
meta15->setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("subject");
meta16->setContent("X3D HAnim humanoid animation");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("TODO");
meta17->setContent("Integrate and confirm Segment/Joint names, Viewpoints.");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("identifier");
meta18->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("generator");
meta19->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta19);

Ccomponent* component20 = new Ccomponent();
component20->setName("HAnim");
component20->setLevel(1);
head1->addComponent(*component20);

X3D0->setHead(*head1);

CScene* Scene21 = new CScene();
CWorldInfo* WorldInfo22 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo22->setTitle("HAnimModelFootLeft.x3d");
group->addChildren(*WorldInfo22);

CHAnimHumanoid* HAnimHumanoid23 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid23->setDEF("hanim_Foot_Left");
HAnimHumanoid23->setVersion("2.0");
HAnimHumanoid23->setName("Foot_Left");
HAnimHumanoid23->setLoa(4);
CMetadataSet* MetadataSet24 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet24->setName("HAnimHumanoid.info");
MetadataSet24->setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
CMetadataString* MetadataString25 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString25->setName("authorName");
MetadataSet24->setMetadata(*MetadataString25);

HAnimHumanoid23->setMetadata(*MetadataSet24);

CHAnimJoint* HAnimJoint26 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint26->setDEF("hanim_humanoid_root");
HAnimJoint26->setName("humanoid_root");
CHAnimJoint* HAnimJoint27 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint27->setDEF("hanim_l_talocrural");
HAnimJoint27->setDescription("connection joint of foot to leg above");
HAnimJoint27->setName("l_talocrural");
CHAnimSegment* HAnimSegment28 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment28->setDEF("hanim_l_talus");
HAnimSegment28->setName("l_talus");
CTransform* Transform29 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape30 = (CShape *)(m_pScene.createNode("Shape"));
Shape30->setDEF("HAnimJointShape");
CAppearance* Appearance31 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance31->setDEF("HAnimJointAppearance");
CMaterial* Material32 = (CMaterial *)(m_pScene.createNode("Material"));
Material32->setDiffuseColor(new float[3]{0,0,1});
Appearance31->setMaterial(*Material32);

Shape30->setAppearance(*Appearance31);

CSphere* Sphere33 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere33->setRadius(0.025);
Shape30->setGeometry(Sphere33);

Transform29->addChild(*Shape30);

HAnimSegment28->addChildren(*Transform29);

CShape* Shape34 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance35 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material36 = (CMaterial *)(m_pScene.createNode("Material"));
Material36->setEmissiveColor(new float[3]{1,1,1});
Appearance35->setMaterial(*Material36);

Shape34->setAppearance(*Appearance35);

CIndexedLineSet* IndexedLineSet37 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet37->setDEF("TCtoTCN");
IndexedLineSet37->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate38 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate38->setPoint(new float[6]{0,0,0,0,-0.3,0});
IndexedLineSet37->setCoord(*Coordinate38);

Shape34->setGeometry(IndexedLineSet37);

HAnimSegment28->addChildren(*Shape34);

CShape* Shape39 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance40 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material41 = (CMaterial *)(m_pScene.createNode("Material"));
Material41->setEmissiveColor(new float[3]{1,1,1});
Appearance40->setMaterial(*Material41);

Shape39->setAppearance(*Appearance40);

CIndexedLineSet* IndexedLineSet42 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet42->setDEF("TCtoCC");
IndexedLineSet42->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate43 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate43->setPoint(new float[6]{0,0,0,0.2,0.3,0});
IndexedLineSet42->setCoord(*Coordinate43);

Shape39->setGeometry(IndexedLineSet42);

HAnimSegment28->addChildren(*Shape39);

HAnimJoint27->addChildren(*HAnimSegment28);

CHAnimJoint* HAnimJoint44 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint44->setDEF("hanim_l_talocalcaneonavicular");
HAnimJoint44->setName("l_talocalcaneonavicular");
HAnimJoint44->setCenter(new float[3]{0,-0.3,0});
CHAnimSegment* HAnimSegment45 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment45->setDEF("hanim_l_navicular");
HAnimSegment45->setName("l_navicular");
CTransform* Transform46 = (CTransform *)(m_pScene.createNode("Transform"));
Transform46->setTranslation(new float[3]{0,-0.3,0});
CShape* Shape47 = (CShape *)(m_pScene.createNode("Shape"));
Shape47->setUSE("HAnimJointShape");
Transform46->addChild(*Shape47);

HAnimSegment45->addChildren(*Transform46);

CShape* Shape48 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance49 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material50 = (CMaterial *)(m_pScene.createNode("Material"));
Material50->setEmissiveColor(new float[3]{1,1,1});
Appearance49->setMaterial(*Material50);

Shape48->setAppearance(*Appearance49);

CIndexedLineSet* IndexedLineSet51 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet51->setDEF("TCNtoCN1");
IndexedLineSet51->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate52 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate52->setPoint(new float[6]{0,-0.3,0,-0.1,-0.45,0});
IndexedLineSet51->setCoord(*Coordinate52);

Shape48->setGeometry(IndexedLineSet51);

HAnimSegment45->addChildren(*Shape48);

CShape* Shape53 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance54 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material55 = (CMaterial *)(m_pScene.createNode("Material"));
Material55->setEmissiveColor(new float[3]{1,1,1});
Appearance54->setMaterial(*Material55);

Shape53->setAppearance(*Appearance54);

CIndexedLineSet* IndexedLineSet56 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet56->setDEF("TCNtoCN2");
IndexedLineSet56->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate57 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate57->setPoint(new float[6]{0,-0.3,0,0,-0.45,0});
IndexedLineSet56->setCoord(*Coordinate57);

Shape53->setGeometry(IndexedLineSet56);

HAnimSegment45->addChildren(*Shape53);

CShape* Shape58 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance59 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material60 = (CMaterial *)(m_pScene.createNode("Material"));
Material60->setEmissiveColor(new float[3]{1,1,1});
Appearance59->setMaterial(*Material60);

Shape58->setAppearance(*Appearance59);

CIndexedLineSet* IndexedLineSet61 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet61->setDEF("TCNtoCN3");
IndexedLineSet61->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate62 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate62->setPoint(new float[6]{0,-0.3,0,0.1,-0.4,0});
IndexedLineSet61->setCoord(*Coordinate62);

Shape58->setGeometry(IndexedLineSet61);

HAnimSegment45->addChildren(*Shape58);

HAnimJoint44->addChildren(*HAnimSegment45);

CHAnimJoint* HAnimJoint63 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint63->setDEF("hanim_l_cuneonavicular_1");
HAnimJoint63->setName("l_cuneonavicular_1");
HAnimJoint63->setCenter(new float[3]{-0.1,-0.45,0});
CHAnimSegment* HAnimSegment64 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment64->setDEF("hanim_l_cuneiform_1");
HAnimSegment64->setName("l_cuneiform_1");
CTransform* Transform65 = (CTransform *)(m_pScene.createNode("Transform"));
Transform65->setTranslation(new float[3]{-0.1,-0.45,0});
CShape* Shape66 = (CShape *)(m_pScene.createNode("Shape"));
Shape66->setUSE("HAnimJointShape");
Transform65->addChild(*Shape66);

HAnimSegment64->addChildren(*Transform65);

CShape* Shape67 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance68 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material69 = (CMaterial *)(m_pScene.createNode("Material"));
Material69->setEmissiveColor(new float[3]{1,1,1});
Appearance68->setMaterial(*Material69);

Shape67->setAppearance(*Appearance68);

CIndexedLineSet* IndexedLineSet70 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet70->setDEF("CN1toTMT1");
IndexedLineSet70->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate71 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate71->setPoint(new float[6]{-0.1,-0.45,0,-0.1,-0.6,0});
IndexedLineSet70->setCoord(*Coordinate71);

Shape67->setGeometry(IndexedLineSet70);

HAnimSegment64->addChildren(*Shape67);

HAnimJoint63->addChildren(*HAnimSegment64);

CHAnimJoint* HAnimJoint72 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint72->setDEF("hanim_l_tarsometatarsal_1");
HAnimJoint72->setName("l_tarsometatarsal_1");
HAnimJoint72->setCenter(new float[3]{-0.1,-0.6,0});
CHAnimSegment* HAnimSegment73 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment73->setDEF("hanim_l_metatarsal_1");
HAnimSegment73->setName("l_metatarsal_1");
CTransform* Transform74 = (CTransform *)(m_pScene.createNode("Transform"));
Transform74->setTranslation(new float[3]{-0.1,-0.6,0});
CShape* Shape75 = (CShape *)(m_pScene.createNode("Shape"));
Shape75->setUSE("HAnimJointShape");
Transform74->addChild(*Shape75);

HAnimSegment73->addChildren(*Transform74);

CShape* Shape76 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance77 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material78 = (CMaterial *)(m_pScene.createNode("Material"));
Material78->setEmissiveColor(new float[3]{1,1,1});
Appearance77->setMaterial(*Material78);

Shape76->setAppearance(*Appearance77);

CIndexedLineSet* IndexedLineSet79 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet79->setDEF("TMT1toMTP1");
IndexedLineSet79->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate80 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate80->setPoint(new float[6]{-0.1,-0.6,0,-0.1,-0.9,0});
IndexedLineSet79->setCoord(*Coordinate80);

Shape76->setGeometry(IndexedLineSet79);

HAnimSegment73->addChildren(*Shape76);

HAnimJoint72->addChildren(*HAnimSegment73);

CHAnimJoint* HAnimJoint81 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint81->setDEF("hanim_l_metatarsophalangeal_1");
HAnimJoint81->setName("l_metatarsophalangeal_1");
HAnimJoint81->setCenter(new float[3]{-0.1,-0.9,0});
CHAnimSegment* HAnimSegment82 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment82->setDEF("hanim_l_tarsal_proximal_phalanx_1");
HAnimSegment82->setName("l_tarsal_proximal_phalanx_1");
CTransform* Transform83 = (CTransform *)(m_pScene.createNode("Transform"));
Transform83->setTranslation(new float[3]{-0.1,-0.9,0});
CShape* Shape84 = (CShape *)(m_pScene.createNode("Shape"));
Shape84->setUSE("HAnimJointShape");
Transform83->addChild(*Shape84);

HAnimSegment82->addChildren(*Transform83);

CShape* Shape85 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance86 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material87 = (CMaterial *)(m_pScene.createNode("Material"));
Material87->setEmissiveColor(new float[3]{1,1,1});
Appearance86->setMaterial(*Material87);

Shape85->setAppearance(*Appearance86);

CIndexedLineSet* IndexedLineSet88 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet88->setDEF("MTP1toIP1");
IndexedLineSet88->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate89 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate89->setPoint(new float[6]{-0.1,-0.9,0,-0.1,-1.05,0});
IndexedLineSet88->setCoord(*Coordinate89);

Shape85->setGeometry(IndexedLineSet88);

HAnimSegment82->addChildren(*Shape85);

HAnimJoint81->addChildren(*HAnimSegment82);

CHAnimJoint* HAnimJoint90 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint90->setDEF("hanim_l_tarsal_interphalangeal_1");
HAnimJoint90->setName("l_tarsal_interphalangeal_1");
HAnimJoint90->setCenter(new float[3]{-0.1,-1.05,0});
CHAnimSegment* HAnimSegment91 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment91->setDEF("hanim_l_tarsal_distal_phalanx_1");
HAnimSegment91->setName("l_tarsal_distal_phalanx_1");
CTransform* Transform92 = (CTransform *)(m_pScene.createNode("Transform"));
Transform92->setTranslation(new float[3]{-0.1,-1.05,0});
CShape* Shape93 = (CShape *)(m_pScene.createNode("Shape"));
Shape93->setUSE("HAnimJointShape");
Transform92->addChild(*Shape93);

HAnimSegment91->addChildren(*Transform92);

CShape* Shape94 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance95 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material96 = (CMaterial *)(m_pScene.createNode("Material"));
Material96->setEmissiveColor(new float[3]{1,1,1});
Appearance95->setMaterial(*Material96);

Shape94->setAppearance(*Appearance95);

CIndexedLineSet* IndexedLineSet97 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet97->setDEF("tiptoe_l_tarsal_distal_interphalangeal_1");
IndexedLineSet97->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate98 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate98->setPoint(new float[6]{-0.1,-1.05,0,-0.1,-1.1,0});
IndexedLineSet97->setCoord(*Coordinate98);

Shape94->setGeometry(IndexedLineSet97);

HAnimSegment91->addChildren(*Shape94);

HAnimJoint90->addChildren(*HAnimSegment91);

HAnimJoint81->addChildren(*HAnimJoint90);

HAnimJoint72->addChildren(*HAnimJoint81);

HAnimJoint63->addChildren(*HAnimJoint72);

HAnimJoint44->addChildren(*HAnimJoint63);

CHAnimJoint* HAnimJoint99 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint99->setDEF("hanim_l_cuneonavicular_2");
HAnimJoint99->setName("l_cuneonavicular_2");
HAnimJoint99->setCenter(new float[3]{0,-0.45,0});
CHAnimSegment* HAnimSegment100 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment100->setDEF("hanim_l_cuneiform_2");
HAnimSegment100->setName("l_cuneiform_2");
CTransform* Transform101 = (CTransform *)(m_pScene.createNode("Transform"));
Transform101->setTranslation(new float[3]{0,-0.45,0});
CShape* Shape102 = (CShape *)(m_pScene.createNode("Shape"));
Shape102->setUSE("HAnimJointShape");
Transform101->addChild(*Shape102);

HAnimSegment100->addChildren(*Transform101);

CShape* Shape103 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance104 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material105 = (CMaterial *)(m_pScene.createNode("Material"));
Material105->setEmissiveColor(new float[3]{1,1,1});
Appearance104->setMaterial(*Material105);

Shape103->setAppearance(*Appearance104);

CIndexedLineSet* IndexedLineSet106 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet106->setDEF("CN2toTMT2");
IndexedLineSet106->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate107 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate107->setPoint(new float[6]{0,-0.45,0,0.05,-0.6,0});
IndexedLineSet106->setCoord(*Coordinate107);

Shape103->setGeometry(IndexedLineSet106);

HAnimSegment100->addChildren(*Shape103);

HAnimJoint99->addChildren(*HAnimSegment100);

CHAnimJoint* HAnimJoint108 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint108->setDEF("hanim_l_tarsometatarsal_2");
HAnimJoint108->setName("l_tarsometatarsal_2");
HAnimJoint108->setCenter(new float[3]{0.05,-0.6,0});
CHAnimSegment* HAnimSegment109 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment109->setDEF("hanim_l_metatarsal_2");
HAnimSegment109->setName("l_metatarsal_2");
CTransform* Transform110 = (CTransform *)(m_pScene.createNode("Transform"));
Transform110->setTranslation(new float[3]{0.05,-0.6,0});
CShape* Shape111 = (CShape *)(m_pScene.createNode("Shape"));
Shape111->setUSE("HAnimJointShape");
Transform110->addChild(*Shape111);

HAnimSegment109->addChildren(*Transform110);

CShape* Shape112 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance113 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material114 = (CMaterial *)(m_pScene.createNode("Material"));
Material114->setEmissiveColor(new float[3]{1,1,1});
Appearance113->setMaterial(*Material114);

Shape112->setAppearance(*Appearance113);

CIndexedLineSet* IndexedLineSet115 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet115->setDEF("TMT2toMTP2");
IndexedLineSet115->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate116 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate116->setPoint(new float[6]{0.05,-0.6,0,0.05,-0.9,0});
IndexedLineSet115->setCoord(*Coordinate116);

Shape112->setGeometry(IndexedLineSet115);

HAnimSegment109->addChildren(*Shape112);

HAnimJoint108->addChildren(*HAnimSegment109);

CHAnimJoint* HAnimJoint117 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint117->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint117->setName("l_metatarsophalangeal_2");
HAnimJoint117->setCenter(new float[3]{0.05,-0.9,0});
CHAnimSegment* HAnimSegment118 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment118->setDEF("hanim_l_tarsal_proximal_phalanx_2");
HAnimSegment118->setName("l_tarsal_proximal_phalanx_2");
CTransform* Transform119 = (CTransform *)(m_pScene.createNode("Transform"));
Transform119->setTranslation(new float[3]{0.05,-0.9,0});
CShape* Shape120 = (CShape *)(m_pScene.createNode("Shape"));
Shape120->setUSE("HAnimJointShape");
Transform119->addChild(*Shape120);

HAnimSegment118->addChildren(*Transform119);

CShape* Shape121 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance122 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material123 = (CMaterial *)(m_pScene.createNode("Material"));
Material123->setEmissiveColor(new float[3]{1,1,1});
Appearance122->setMaterial(*Material123);

Shape121->setAppearance(*Appearance122);

CIndexedLineSet* IndexedLineSet124 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet124->setDEF("MTP2toPIP2");
IndexedLineSet124->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate125 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate125->setPoint(new float[6]{0.05,-0.9,0,0.05,-1.05,0});
IndexedLineSet124->setCoord(*Coordinate125);

Shape121->setGeometry(IndexedLineSet124);

HAnimSegment118->addChildren(*Shape121);

HAnimJoint117->addChildren(*HAnimSegment118);

CHAnimJoint* HAnimJoint126 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint126->setDEF("hanim_l_tarsal_proximal_interphalangeal_1");
HAnimJoint126->setName("l_tarsal_proximal_interphalangeal_2");
HAnimJoint126->setCenter(new float[3]{0.05,-1.05,0});
CHAnimSegment* HAnimSegment127 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment127->setDEF("hanim_l_tarsal_middle_phalanx_1");
HAnimSegment127->setName("l_tarsal_middle_phalanx_2");
CTransform* Transform128 = (CTransform *)(m_pScene.createNode("Transform"));
Transform128->setTranslation(new float[3]{0.05,-1.05,0});
CShape* Shape129 = (CShape *)(m_pScene.createNode("Shape"));
Shape129->setUSE("HAnimJointShape");
Transform128->addChild(*Shape129);

HAnimSegment127->addChildren(*Transform128);

CShape* Shape130 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance131 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material132 = (CMaterial *)(m_pScene.createNode("Material"));
Material132->setEmissiveColor(new float[3]{1,1,1});
Appearance131->setMaterial(*Material132);

Shape130->setAppearance(*Appearance131);

CIndexedLineSet* IndexedLineSet133 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet133->setDEF("PIP2toDIP2");
IndexedLineSet133->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate134 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate134->setPoint(new float[6]{0.05,-1.05,0,0.05,-1.12,0});
IndexedLineSet133->setCoord(*Coordinate134);

Shape130->setGeometry(IndexedLineSet133);

HAnimSegment127->addChildren(*Shape130);

HAnimJoint126->addChildren(*HAnimSegment127);

CHAnimJoint* HAnimJoint135 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint135->setDEF("hanim_l_tarsal_distal_interphalangeal_1");
HAnimJoint135->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint135->setCenter(new float[3]{0.05,-1.12,0});
CHAnimSegment* HAnimSegment136 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment136->setDEF("hanim_l_tarsal_distal_phalanx_2");
HAnimSegment136->setName("l_tarsal_distal_phalanx_2");
CTransform* Transform137 = (CTransform *)(m_pScene.createNode("Transform"));
Transform137->setTranslation(new float[3]{0.05,-1.12,0});
CShape* Shape138 = (CShape *)(m_pScene.createNode("Shape"));
Shape138->setUSE("HAnimJointShape");
Transform137->addChild(*Shape138);

HAnimSegment136->addChildren(*Transform137);

CShape* Shape139 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance140 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material141 = (CMaterial *)(m_pScene.createNode("Material"));
Material141->setEmissiveColor(new float[3]{1,1,1});
Appearance140->setMaterial(*Material141);

Shape139->setAppearance(*Appearance140);

CIndexedLineSet* IndexedLineSet142 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet142->setDEF("tiptoe_l_tarsal_distal_phalanx_1");
IndexedLineSet142->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate143 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate143->setPoint(new float[6]{0.05,-1.12,0,0.05,-1.16,0});
IndexedLineSet142->setCoord(*Coordinate143);

Shape139->setGeometry(IndexedLineSet142);

HAnimSegment136->addChildren(*Shape139);

HAnimJoint135->addChildren(*HAnimSegment136);

HAnimJoint126->addChildren(*HAnimJoint135);

HAnimJoint117->addChildren(*HAnimJoint126);

HAnimJoint108->addChildren(*HAnimJoint117);

HAnimJoint99->addChildren(*HAnimJoint108);

HAnimJoint44->addChildren(*HAnimJoint99);

CHAnimJoint* HAnimJoint144 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint144->setDEF("hanim_l_cuneonavicular_3");
HAnimJoint144->setName("l_cuneonavicular_3");
HAnimJoint144->setCenter(new float[3]{0.1,-0.4,0});
CHAnimSegment* HAnimSegment145 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment145->setDEF("hanim_l_cuneiform_3");
HAnimSegment145->setName("l_cuneiform_3");
CTransform* Transform146 = (CTransform *)(m_pScene.createNode("Transform"));
Transform146->setTranslation(new float[3]{0.1,-0.4,0});
CShape* Shape147 = (CShape *)(m_pScene.createNode("Shape"));
Shape147->setUSE("HAnimJointShape");
Transform146->addChild(*Shape147);

HAnimSegment145->addChildren(*Transform146);

CShape* Shape148 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance149 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material150 = (CMaterial *)(m_pScene.createNode("Material"));
Material150->setEmissiveColor(new float[3]{1,1,1});
Appearance149->setMaterial(*Material150);

Shape148->setAppearance(*Appearance149);

CIndexedLineSet* IndexedLineSet151 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet151->setDEF("CN3toTMT3");
IndexedLineSet151->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate152 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate152->setPoint(new float[6]{0.1,-0.4,0,0.15,-0.6,0});
IndexedLineSet151->setCoord(*Coordinate152);

Shape148->setGeometry(IndexedLineSet151);

HAnimSegment145->addChildren(*Shape148);

HAnimJoint144->addChildren(*HAnimSegment145);

CHAnimJoint* HAnimJoint153 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint153->setDEF("hanim_l_tarsometatarsal_3");
HAnimJoint153->setName("l_tarsometatarsal_3");
HAnimJoint153->setCenter(new float[3]{0.15,-0.6,0});
CHAnimSegment* HAnimSegment154 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment154->setDEF("hanim_l_metatarsal_3");
HAnimSegment154->setName("l_metatarsal_3");
CTransform* Transform155 = (CTransform *)(m_pScene.createNode("Transform"));
Transform155->setTranslation(new float[3]{0.15,-0.6,0});
CShape* Shape156 = (CShape *)(m_pScene.createNode("Shape"));
Shape156->setUSE("HAnimJointShape");
Transform155->addChild(*Shape156);

HAnimSegment154->addChildren(*Transform155);

CShape* Shape157 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance158 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material159 = (CMaterial *)(m_pScene.createNode("Material"));
Material159->setEmissiveColor(new float[3]{1,1,1});
Appearance158->setMaterial(*Material159);

Shape157->setAppearance(*Appearance158);

CIndexedLineSet* IndexedLineSet160 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet160->setDEF("TMT3toMTP3");
IndexedLineSet160->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate161 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate161->setPoint(new float[6]{0.15,-0.6,0,0.15,-0.9,0});
IndexedLineSet160->setCoord(*Coordinate161);

Shape157->setGeometry(IndexedLineSet160);

HAnimSegment154->addChildren(*Shape157);

HAnimJoint153->addChildren(*HAnimSegment154);

CHAnimJoint* HAnimJoint162 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint162->setDEF("hanim_l_metatarsophalangeal_3");
HAnimJoint162->setName("l_metatarsophalangeal_3");
HAnimJoint162->setCenter(new float[3]{0.15,-0.9,0});
CHAnimSegment* HAnimSegment163 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment163->setDEF("hanim_l_tarsal_proximal_phalanx_3");
HAnimSegment163->setName("l_tarsal_proximal_phalanx_3");
CTransform* Transform164 = (CTransform *)(m_pScene.createNode("Transform"));
Transform164->setTranslation(new float[3]{0.15,-0.9,0});
CShape* Shape165 = (CShape *)(m_pScene.createNode("Shape"));
Shape165->setUSE("HAnimJointShape");
Transform164->addChild(*Shape165);

HAnimSegment163->addChildren(*Transform164);

CShape* Shape166 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance167 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material168 = (CMaterial *)(m_pScene.createNode("Material"));
Material168->setEmissiveColor(new float[3]{1,1,1});
Appearance167->setMaterial(*Material168);

Shape166->setAppearance(*Appearance167);

CIndexedLineSet* IndexedLineSet169 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet169->setDEF("MTP3toPIP3");
IndexedLineSet169->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate170 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate170->setPoint(new float[6]{0.15,-0.9,0,0.15,-1.05,0});
IndexedLineSet169->setCoord(*Coordinate170);

Shape166->setGeometry(IndexedLineSet169);

HAnimSegment163->addChildren(*Shape166);

HAnimJoint162->addChildren(*HAnimSegment163);

CHAnimJoint* HAnimJoint171 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint171->setDEF("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimJoint171->setName("l_tarsal_proximal_interphalangeal_3");
HAnimJoint171->setCenter(new float[3]{0.15,-1.05,0});
CHAnimSegment* HAnimSegment172 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment172->setDEF("hanim_l_tarsal_middle_phalanx_2");
HAnimSegment172->setName("l_tarsal_middle_phalanx_3");
CTransform* Transform173 = (CTransform *)(m_pScene.createNode("Transform"));
Transform173->setTranslation(new float[3]{0.15,-1.05,0});
CShape* Shape174 = (CShape *)(m_pScene.createNode("Shape"));
Shape174->setUSE("HAnimJointShape");
Transform173->addChild(*Shape174);

HAnimSegment172->addChildren(*Transform173);

CShape* Shape175 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance176 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material177 = (CMaterial *)(m_pScene.createNode("Material"));
Material177->setEmissiveColor(new float[3]{1,1,1});
Appearance176->setMaterial(*Material177);

Shape175->setAppearance(*Appearance176);

CIndexedLineSet* IndexedLineSet178 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet178->setDEF("PIP3toDIP3");
IndexedLineSet178->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate179 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate179->setPoint(new float[6]{0.15,-1.05,0,0.15,-1.13,0});
IndexedLineSet178->setCoord(*Coordinate179);

Shape175->setGeometry(IndexedLineSet178);

HAnimSegment172->addChildren(*Shape175);

HAnimJoint171->addChildren(*HAnimSegment172);

CHAnimJoint* HAnimJoint180 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint180->setDEF("hanim_l_tarsal_distal_interphalangeal_2");
HAnimJoint180->setName("l_tarsal_distal_interphalangeal_3");
HAnimJoint180->setCenter(new float[3]{0.15,-1.13,0});
CHAnimSegment* HAnimSegment181 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment181->setDEF("hanim_l_tarsal_distal_phalanx_3");
HAnimSegment181->setName("l_tarsal_distal_phalanx_3");
CTransform* Transform182 = (CTransform *)(m_pScene.createNode("Transform"));
Transform182->setTranslation(new float[3]{0.15,-1.13,0});
CShape* Shape183 = (CShape *)(m_pScene.createNode("Shape"));
Shape183->setUSE("HAnimJointShape");
Transform182->addChild(*Shape183);

HAnimSegment181->addChildren(*Transform182);

CShape* Shape184 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance185 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material186 = (CMaterial *)(m_pScene.createNode("Material"));
Material186->setEmissiveColor(new float[3]{1,1,1});
Appearance185->setMaterial(*Material186);

Shape184->setAppearance(*Appearance185);

CIndexedLineSet* IndexedLineSet187 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet187->setDEF("tiptoe_l_tarsal_distal_interphalangeal_2");
IndexedLineSet187->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate188 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate188->setPoint(new float[6]{0.15,-1.13,0,0.15,-1.16,0});
IndexedLineSet187->setCoord(*Coordinate188);

Shape184->setGeometry(IndexedLineSet187);

HAnimSegment181->addChildren(*Shape184);

HAnimJoint180->addChildren(*HAnimSegment181);

HAnimJoint171->addChildren(*HAnimJoint180);

HAnimJoint162->addChildren(*HAnimJoint171);

HAnimJoint153->addChildren(*HAnimJoint162);

HAnimJoint144->addChildren(*HAnimJoint153);

HAnimJoint44->addChildren(*HAnimJoint144);

HAnimJoint27->addChildren(*HAnimJoint44);

CHAnimJoint* HAnimJoint189 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint189->setDEF("hanim_l_calcaneocuboid");
HAnimJoint189->setName("l_calcaneocuboid");
HAnimJoint189->setCenter(new float[3]{0.2,0.3,0});
CHAnimSegment* HAnimSegment190 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment190->setDEF("hanim_l_calcaneus");
HAnimSegment190->setName("l_calcaneus");
CTransform* Transform191 = (CTransform *)(m_pScene.createNode("Transform"));
Transform191->setTranslation(new float[3]{0.2,0.3,0});
CShape* Shape192 = (CShape *)(m_pScene.createNode("Shape"));
Shape192->setUSE("HAnimJointShape");
Transform191->addChild(*Shape192);

HAnimSegment190->addChildren(*Transform191);

CShape* Shape193 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance194 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material195 = (CMaterial *)(m_pScene.createNode("Material"));
Material195->setEmissiveColor(new float[3]{1,1,1});
Appearance194->setMaterial(*Material195);

Shape193->setAppearance(*Appearance194);

CIndexedLineSet* IndexedLineSet196 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet196->setDEF("CCtoTT");
IndexedLineSet196->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate197 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate197->setPoint(new float[6]{0.2,0.3,0,0.21,-0.3,0});
IndexedLineSet196->setCoord(*Coordinate197);

Shape193->setGeometry(IndexedLineSet196);

HAnimSegment190->addChildren(*Shape193);

HAnimJoint189->addChildren(*HAnimSegment190);

CHAnimJoint* HAnimJoint198 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint198->setDEF("hanim_l_transversetarsal");
HAnimJoint198->setName("l_transversetarsal");
HAnimJoint198->setCenter(new float[3]{0.21,-0.3,0});
CHAnimSegment* HAnimSegment199 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment199->setDEF("hanim_l_cuboid");
HAnimSegment199->setName("l_cuboid");
CTransform* Transform200 = (CTransform *)(m_pScene.createNode("Transform"));
Transform200->setTranslation(new float[3]{0.21,-0.3,0});
CShape* Shape201 = (CShape *)(m_pScene.createNode("Shape"));
Shape201->setUSE("HAnimJointShape");
Transform200->addChild(*Shape201);

HAnimSegment199->addChildren(*Transform200);

CShape* Shape202 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance203 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material204 = (CMaterial *)(m_pScene.createNode("Material"));
Material204->setEmissiveColor(new float[3]{1,1,1});
Appearance203->setMaterial(*Material204);

Shape202->setAppearance(*Appearance203);

CIndexedLineSet* IndexedLineSet205 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet205->setDEF("TTtoTMT4");
IndexedLineSet205->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate206 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate206->setPoint(new float[6]{0.21,-0.3,0,0.25,-0.58,0});
IndexedLineSet205->setCoord(*Coordinate206);

Shape202->setGeometry(IndexedLineSet205);

HAnimSegment199->addChildren(*Shape202);

CShape* Shape207 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance208 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material209 = (CMaterial *)(m_pScene.createNode("Material"));
Material209->setEmissiveColor(new float[3]{1,1,1});
Appearance208->setMaterial(*Material209);

Shape207->setAppearance(*Appearance208);

CIndexedLineSet* IndexedLineSet210 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet210->setDEF("TTtoTMT5");
IndexedLineSet210->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate211 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate211->setPoint(new float[6]{0.21,-0.3,0,0.33,-0.52,0});
IndexedLineSet210->setCoord(*Coordinate211);

Shape207->setGeometry(IndexedLineSet210);

HAnimSegment199->addChildren(*Shape207);

HAnimJoint198->addChildren(*HAnimSegment199);

CHAnimJoint* HAnimJoint212 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint212->setDEF("hanim_l_tarsometatarsal_4");
HAnimJoint212->setName("l_tarsometatarsal_4");
HAnimJoint212->setCenter(new float[3]{0.25,-0.58,0});
CHAnimSegment* HAnimSegment213 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment213->setDEF("hanim_l_metatarsal_4");
HAnimSegment213->setName("l_metatarsal_4");
CTransform* Transform214 = (CTransform *)(m_pScene.createNode("Transform"));
Transform214->setTranslation(new float[3]{0.25,-0.58,0});
CShape* Shape215 = (CShape *)(m_pScene.createNode("Shape"));
Shape215->setUSE("HAnimJointShape");
Transform214->addChild(*Shape215);

HAnimSegment213->addChildren(*Transform214);

CShape* Shape216 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance217 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material218 = (CMaterial *)(m_pScene.createNode("Material"));
Material218->setEmissiveColor(new float[3]{1,1,1});
Appearance217->setMaterial(*Material218);

Shape216->setAppearance(*Appearance217);

CIndexedLineSet* IndexedLineSet219 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet219->setDEF("TMT4toMTP4");
IndexedLineSet219->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate220 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate220->setPoint(new float[6]{0.25,-0.58,0,0.25,-0.87,0});
IndexedLineSet219->setCoord(*Coordinate220);

Shape216->setGeometry(IndexedLineSet219);

HAnimSegment213->addChildren(*Shape216);

HAnimJoint212->addChildren(*HAnimSegment213);

CHAnimJoint* HAnimJoint221 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint221->setDEF("hanim_l_metatarsophalangeal_4");
HAnimJoint221->setName("l_metatarsophalangeal_4");
HAnimJoint221->setCenter(new float[3]{0.25,-0.87,0});
CHAnimSegment* HAnimSegment222 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment222->setDEF("hanim_l_tarsal_proximal_phalanx_4");
HAnimSegment222->setName("l_tarsal_proximal_phalanx_4");
CTransform* Transform223 = (CTransform *)(m_pScene.createNode("Transform"));
Transform223->setTranslation(new float[3]{0.25,-0.87,0});
CShape* Shape224 = (CShape *)(m_pScene.createNode("Shape"));
Shape224->setUSE("HAnimJointShape");
Transform223->addChild(*Shape224);

HAnimSegment222->addChildren(*Transform223);

CShape* Shape225 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance226 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material227 = (CMaterial *)(m_pScene.createNode("Material"));
Material227->setEmissiveColor(new float[3]{1,1,1});
Appearance226->setMaterial(*Material227);

Shape225->setAppearance(*Appearance226);

CIndexedLineSet* IndexedLineSet228 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet228->setDEF("MTP4toPIP4");
IndexedLineSet228->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate229 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate229->setPoint(new float[6]{0.25,-0.87,0,0.25,-1,0});
IndexedLineSet228->setCoord(*Coordinate229);

Shape225->setGeometry(IndexedLineSet228);

HAnimSegment222->addChildren(*Shape225);

HAnimJoint221->addChildren(*HAnimSegment222);

CHAnimJoint* HAnimJoint230 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint230->setDEF("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimJoint230->setName("l_tarsal_proximal_interphalangeal_4");
HAnimJoint230->setCenter(new float[3]{0.25,-1,0});
CHAnimSegment* HAnimSegment231 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment231->setDEF("hanim_l_tarsal_middle_phalanx_3");
HAnimSegment231->setName("l_tarsal_middle_phalanx_4");
CTransform* Transform232 = (CTransform *)(m_pScene.createNode("Transform"));
Transform232->setTranslation(new float[3]{0.25,-1,0});
CShape* Shape233 = (CShape *)(m_pScene.createNode("Shape"));
Shape233->setUSE("HAnimJointShape");
Transform232->addChild(*Shape233);

HAnimSegment231->addChildren(*Transform232);

CShape* Shape234 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance235 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material236 = (CMaterial *)(m_pScene.createNode("Material"));
Material236->setEmissiveColor(new float[3]{1,1,1});
Appearance235->setMaterial(*Material236);

Shape234->setAppearance(*Appearance235);

CIndexedLineSet* IndexedLineSet237 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet237->setDEF("PIP4toDIP4");
IndexedLineSet237->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate238 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate238->setPoint(new float[6]{0.25,-1,0,0.25,-1.1,0});
IndexedLineSet237->setCoord(*Coordinate238);

Shape234->setGeometry(IndexedLineSet237);

HAnimSegment231->addChildren(*Shape234);

HAnimJoint230->addChildren(*HAnimSegment231);

CHAnimJoint* HAnimJoint239 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint239->setDEF("hanim_l_tarsal_distal_interphalangeal_3");
HAnimJoint239->setName("l_tarsal_distal_interphalangeal_4");
HAnimJoint239->setCenter(new float[3]{0.25,-1.1,0});
CHAnimSegment* HAnimSegment240 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment240->setDEF("hanim_l_tarsal_distal_phalanx_4");
HAnimSegment240->setName("l_tarsal_distal_phalanx_4");
CTransform* Transform241 = (CTransform *)(m_pScene.createNode("Transform"));
Transform241->setTranslation(new float[3]{0.25,-1.1,0});
CShape* Shape242 = (CShape *)(m_pScene.createNode("Shape"));
Shape242->setUSE("HAnimJointShape");
Transform241->addChild(*Shape242);

HAnimSegment240->addChildren(*Transform241);

CShape* Shape243 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance244 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material245 = (CMaterial *)(m_pScene.createNode("Material"));
Material245->setEmissiveColor(new float[3]{1,1,1});
Appearance244->setMaterial(*Material245);

Shape243->setAppearance(*Appearance244);

CIndexedLineSet* IndexedLineSet246 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet246->setDEF("tiptoe_l_tarsal_distal_interphalangeal_3");
IndexedLineSet246->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate247 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate247->setPoint(new float[6]{0.25,-1.1,0,0.25,-1.15,0});
IndexedLineSet246->setCoord(*Coordinate247);

Shape243->setGeometry(IndexedLineSet246);

HAnimSegment240->addChildren(*Shape243);

HAnimJoint239->addChildren(*HAnimSegment240);

HAnimJoint230->addChildren(*HAnimJoint239);

HAnimJoint221->addChildren(*HAnimJoint230);

HAnimJoint212->addChildren(*HAnimJoint221);

HAnimJoint198->addChildren(*HAnimJoint212);

CHAnimJoint* HAnimJoint248 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint248->setDEF("hanim_l_tarsometatarsal_5");
HAnimJoint248->setName("l_tarsometatarsal_5");
HAnimJoint248->setCenter(new float[3]{0.33,-0.52,0});
CHAnimSegment* HAnimSegment249 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment249->setDEF("hanim_l_metatarsal_5");
HAnimSegment249->setName("l_metatarsal_5");
CTransform* Transform250 = (CTransform *)(m_pScene.createNode("Transform"));
Transform250->setTranslation(new float[3]{0.33,-0.52,0});
CShape* Shape251 = (CShape *)(m_pScene.createNode("Shape"));
Shape251->setUSE("HAnimJointShape");
Transform250->addChild(*Shape251);

HAnimSegment249->addChildren(*Transform250);

CShape* Shape252 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance253 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material254 = (CMaterial *)(m_pScene.createNode("Material"));
Material254->setEmissiveColor(new float[3]{1,1,1});
Appearance253->setMaterial(*Material254);

Shape252->setAppearance(*Appearance253);

CIndexedLineSet* IndexedLineSet255 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet255->setDEF("TMT5toMTP5");
IndexedLineSet255->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate256 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate256->setPoint(new float[6]{0.33,-0.52,0,0.34,-0.8,0});
IndexedLineSet255->setCoord(*Coordinate256);

Shape252->setGeometry(IndexedLineSet255);

HAnimSegment249->addChildren(*Shape252);

HAnimJoint248->addChildren(*HAnimSegment249);

CHAnimJoint* HAnimJoint257 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint257->setDEF("hanim_l_metatarsophalangeal_5");
HAnimJoint257->setName("l_metatarsophalangeal_5");
HAnimJoint257->setCenter(new float[3]{0.34,-0.8,0});
CHAnimSegment* HAnimSegment258 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment258->setDEF("hanim_l_tarsal_proximal_phalanx_5");
HAnimSegment258->setName("l_tarsal_proximal_phalanx_5");
CTransform* Transform259 = (CTransform *)(m_pScene.createNode("Transform"));
Transform259->setTranslation(new float[3]{0.34,-0.8,0});
CShape* Shape260 = (CShape *)(m_pScene.createNode("Shape"));
Shape260->setUSE("HAnimJointShape");
Transform259->addChild(*Shape260);

HAnimSegment258->addChildren(*Transform259);

CShape* Shape261 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance262 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material263 = (CMaterial *)(m_pScene.createNode("Material"));
Material263->setEmissiveColor(new float[3]{1,1,1});
Appearance262->setMaterial(*Material263);

Shape261->setAppearance(*Appearance262);

CIndexedLineSet* IndexedLineSet264 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet264->setDEF("MTP5toPIP5");
IndexedLineSet264->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate265 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate265->setPoint(new float[6]{0.34,-0.8,0,0.34,-0.95,0});
IndexedLineSet264->setCoord(*Coordinate265);

Shape261->setGeometry(IndexedLineSet264);

HAnimSegment258->addChildren(*Shape261);

HAnimJoint257->addChildren(*HAnimSegment258);

CHAnimJoint* HAnimJoint266 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint266->setDEF("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimJoint266->setName("l_tarsal_proximal_interphalangeal_5");
HAnimJoint266->setCenter(new float[3]{0.34,-0.95,0});
CHAnimSegment* HAnimSegment267 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment267->setDEF("hanim_l_tarsal_middle_phalanx_4");
HAnimSegment267->setName("l_tarsal_middle_phalanx_5");
CTransform* Transform268 = (CTransform *)(m_pScene.createNode("Transform"));
Transform268->setTranslation(new float[3]{0.34,-0.95,0});
CShape* Shape269 = (CShape *)(m_pScene.createNode("Shape"));
Shape269->setUSE("HAnimJointShape");
Transform268->addChild(*Shape269);

HAnimSegment267->addChildren(*Transform268);

CShape* Shape270 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance271 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material272 = (CMaterial *)(m_pScene.createNode("Material"));
Material272->setEmissiveColor(new float[3]{1,1,1});
Appearance271->setMaterial(*Material272);

Shape270->setAppearance(*Appearance271);

CIndexedLineSet* IndexedLineSet273 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet273->setDEF("PIP5toDIP5");
IndexedLineSet273->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate274 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate274->setPoint(new float[6]{0.34,-0.95,0,0.34,-1.05,0});
IndexedLineSet273->setCoord(*Coordinate274);

Shape270->setGeometry(IndexedLineSet273);

HAnimSegment267->addChildren(*Shape270);

HAnimJoint266->addChildren(*HAnimSegment267);

CHAnimJoint* HAnimJoint275 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint275->setDEF("hanim_l_tarsal_distal_interphalangeal_4");
HAnimJoint275->setName("l_tarsal_distal_interphalangeal_5");
HAnimJoint275->setCenter(new float[3]{0.34,-1.05,0});
CHAnimSegment* HAnimSegment276 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment276->setDEF("hanim_l_tarsal_distal_phalanx_5");
HAnimSegment276->setName("l_tarsal_distal_phalanx_5");
CTransform* Transform277 = (CTransform *)(m_pScene.createNode("Transform"));
Transform277->setTranslation(new float[3]{0.34,-1.05,0});
CShape* Shape278 = (CShape *)(m_pScene.createNode("Shape"));
Shape278->setUSE("HAnimJointShape");
Transform277->addChild(*Shape278);

HAnimSegment276->addChildren(*Transform277);

CShape* Shape279 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance280 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material281 = (CMaterial *)(m_pScene.createNode("Material"));
Material281->setEmissiveColor(new float[3]{1,1,1});
Appearance280->setMaterial(*Material281);

Shape279->setAppearance(*Appearance280);

CIndexedLineSet* IndexedLineSet282 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet282->setDEF("tiptoe_l_tarsal_distal_interphalangeal_4");
IndexedLineSet282->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate283 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate283->setPoint(new float[6]{0.34,-1.05,0,0.34,-1.08,0});
IndexedLineSet282->setCoord(*Coordinate283);

Shape279->setGeometry(IndexedLineSet282);

HAnimSegment276->addChildren(*Shape279);

HAnimJoint275->addChildren(*HAnimSegment276);

HAnimJoint266->addChildren(*HAnimJoint275);

HAnimJoint257->addChildren(*HAnimJoint266);

HAnimJoint248->addChildren(*HAnimJoint257);

HAnimJoint198->addChildren(*HAnimJoint248);

HAnimJoint189->addChildren(*HAnimJoint198);

HAnimJoint27->addChildren(*HAnimJoint189);

HAnimJoint26->addChildren(*HAnimJoint27);

HAnimHumanoid23->setSkeleton(*HAnimJoint26);

CHAnimSegment* HAnimSegment284 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment284->setUSE("hanim_l_calcaneus");
HAnimHumanoid23->setSegments(*HAnimSegment284);

CHAnimSegment* HAnimSegment285 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment285->setUSE("hanim_l_cuboid");
HAnimHumanoid23->setSegments(*HAnimSegment285);

CHAnimSegment* HAnimSegment286 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment286->setUSE("hanim_l_cuneiform_1");
HAnimHumanoid23->setSegments(*HAnimSegment286);

CHAnimSegment* HAnimSegment287 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment287->setUSE("hanim_l_cuneiform_2");
HAnimHumanoid23->setSegments(*HAnimSegment287);

CHAnimSegment* HAnimSegment288 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment288->setUSE("hanim_l_cuneiform_3");
HAnimHumanoid23->setSegments(*HAnimSegment288);

CHAnimSegment* HAnimSegment289 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment289->setUSE("hanim_l_metatarsal_1");
HAnimHumanoid23->setSegments(*HAnimSegment289);

CHAnimSegment* HAnimSegment290 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment290->setUSE("hanim_l_metatarsal_2");
HAnimHumanoid23->setSegments(*HAnimSegment290);

CHAnimSegment* HAnimSegment291 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment291->setUSE("hanim_l_metatarsal_3");
HAnimHumanoid23->setSegments(*HAnimSegment291);

CHAnimSegment* HAnimSegment292 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment292->setUSE("hanim_l_metatarsal_4");
HAnimHumanoid23->setSegments(*HAnimSegment292);

CHAnimSegment* HAnimSegment293 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment293->setUSE("hanim_l_metatarsal_5");
HAnimHumanoid23->setSegments(*HAnimSegment293);

CHAnimSegment* HAnimSegment294 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment294->setUSE("hanim_l_navicular");
HAnimHumanoid23->setSegments(*HAnimSegment294);

CHAnimSegment* HAnimSegment295 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment295->setUSE("hanim_l_talus");
HAnimHumanoid23->setSegments(*HAnimSegment295);

CHAnimSegment* HAnimSegment296 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment296->setUSE("hanim_l_tarsal_distal_phalanx_1");
HAnimHumanoid23->setSegments(*HAnimSegment296);

CHAnimSegment* HAnimSegment297 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment297->setUSE("hanim_l_tarsal_distal_phalanx_2");
HAnimHumanoid23->setSegments(*HAnimSegment297);

CHAnimSegment* HAnimSegment298 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment298->setUSE("hanim_l_tarsal_distal_phalanx_3");
HAnimHumanoid23->setSegments(*HAnimSegment298);

CHAnimSegment* HAnimSegment299 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment299->setUSE("hanim_l_tarsal_distal_phalanx_4");
HAnimHumanoid23->setSegments(*HAnimSegment299);

CHAnimSegment* HAnimSegment300 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment300->setUSE("hanim_l_tarsal_distal_phalanx_5");
HAnimHumanoid23->setSegments(*HAnimSegment300);

CHAnimSegment* HAnimSegment301 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment301->setUSE("hanim_l_tarsal_middle_phalanx_1");
HAnimHumanoid23->setSegments(*HAnimSegment301);

CHAnimSegment* HAnimSegment302 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment302->setUSE("hanim_l_tarsal_middle_phalanx_2");
HAnimHumanoid23->setSegments(*HAnimSegment302);

CHAnimSegment* HAnimSegment303 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment303->setUSE("hanim_l_tarsal_middle_phalanx_3");
HAnimHumanoid23->setSegments(*HAnimSegment303);

CHAnimSegment* HAnimSegment304 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment304->setUSE("hanim_l_tarsal_middle_phalanx_4");
HAnimHumanoid23->setSegments(*HAnimSegment304);

CHAnimSegment* HAnimSegment305 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment305->setUSE("hanim_l_tarsal_proximal_phalanx_1");
HAnimHumanoid23->setSegments(*HAnimSegment305);

CHAnimSegment* HAnimSegment306 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment306->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid23->setSegments(*HAnimSegment306);

CHAnimSegment* HAnimSegment307 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment307->setUSE("hanim_l_tarsal_proximal_phalanx_3");
HAnimHumanoid23->setSegments(*HAnimSegment307);

CHAnimSegment* HAnimSegment308 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment308->setUSE("hanim_l_tarsal_proximal_phalanx_4");
HAnimHumanoid23->setSegments(*HAnimSegment308);

CHAnimSegment* HAnimSegment309 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment309->setUSE("hanim_l_tarsal_proximal_phalanx_5");
HAnimHumanoid23->setSegments(*HAnimSegment309);

CHAnimJoint* HAnimJoint310 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint310->setUSE("hanim_humanoid_root");
HAnimHumanoid23->addJoints(*HAnimJoint310);

CHAnimJoint* HAnimJoint311 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint311->setUSE("hanim_l_calcaneocuboid");
HAnimHumanoid23->addJoints(*HAnimJoint311);

CHAnimJoint* HAnimJoint312 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint312->setUSE("hanim_l_cuneonavicular_1");
HAnimHumanoid23->addJoints(*HAnimJoint312);

CHAnimJoint* HAnimJoint313 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint313->setUSE("hanim_l_cuneonavicular_2");
HAnimHumanoid23->addJoints(*HAnimJoint313);

CHAnimJoint* HAnimJoint314 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint314->setUSE("hanim_l_cuneonavicular_3");
HAnimHumanoid23->addJoints(*HAnimJoint314);

CHAnimJoint* HAnimJoint315 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint315->setUSE("hanim_l_metatarsophalangeal_1");
HAnimHumanoid23->addJoints(*HAnimJoint315);

CHAnimJoint* HAnimJoint316 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint316->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid23->addJoints(*HAnimJoint316);

CHAnimJoint* HAnimJoint317 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint317->setUSE("hanim_l_metatarsophalangeal_3");
HAnimHumanoid23->addJoints(*HAnimJoint317);

CHAnimJoint* HAnimJoint318 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint318->setUSE("hanim_l_metatarsophalangeal_4");
HAnimHumanoid23->addJoints(*HAnimJoint318);

CHAnimJoint* HAnimJoint319 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint319->setUSE("hanim_l_metatarsophalangeal_5");
HAnimHumanoid23->addJoints(*HAnimJoint319);

CHAnimJoint* HAnimJoint320 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint320->setUSE("hanim_l_talocalcaneonavicular");
HAnimHumanoid23->addJoints(*HAnimJoint320);

CHAnimJoint* HAnimJoint321 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint321->setUSE("hanim_l_talocrural");
HAnimHumanoid23->addJoints(*HAnimJoint321);

CHAnimJoint* HAnimJoint322 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint322->setUSE("hanim_l_tarsal_distal_interphalangeal_1");
HAnimHumanoid23->addJoints(*HAnimJoint322);

CHAnimJoint* HAnimJoint323 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint323->setUSE("hanim_l_tarsal_distal_interphalangeal_2");
HAnimHumanoid23->addJoints(*HAnimJoint323);

CHAnimJoint* HAnimJoint324 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint324->setUSE("hanim_l_tarsal_distal_interphalangeal_3");
HAnimHumanoid23->addJoints(*HAnimJoint324);

CHAnimJoint* HAnimJoint325 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint325->setUSE("hanim_l_tarsal_distal_interphalangeal_4");
HAnimHumanoid23->addJoints(*HAnimJoint325);

CHAnimJoint* HAnimJoint326 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint326->setUSE("hanim_l_tarsal_interphalangeal_1");
HAnimHumanoid23->addJoints(*HAnimJoint326);

CHAnimJoint* HAnimJoint327 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint327->setUSE("hanim_l_tarsal_proximal_interphalangeal_1");
HAnimHumanoid23->addJoints(*HAnimJoint327);

CHAnimJoint* HAnimJoint328 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint328->setUSE("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimHumanoid23->addJoints(*HAnimJoint328);

CHAnimJoint* HAnimJoint329 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint329->setUSE("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimHumanoid23->addJoints(*HAnimJoint329);

CHAnimJoint* HAnimJoint330 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint330->setUSE("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimHumanoid23->addJoints(*HAnimJoint330);

CHAnimJoint* HAnimJoint331 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint331->setUSE("hanim_l_tarsometatarsal_1");
HAnimHumanoid23->addJoints(*HAnimJoint331);

CHAnimJoint* HAnimJoint332 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint332->setUSE("hanim_l_tarsometatarsal_2");
HAnimHumanoid23->addJoints(*HAnimJoint332);

CHAnimJoint* HAnimJoint333 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint333->setUSE("hanim_l_tarsometatarsal_3");
HAnimHumanoid23->addJoints(*HAnimJoint333);

CHAnimJoint* HAnimJoint334 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint334->setUSE("hanim_l_tarsometatarsal_4");
HAnimHumanoid23->addJoints(*HAnimJoint334);

CHAnimJoint* HAnimJoint335 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint335->setUSE("hanim_l_tarsometatarsal_5");
HAnimHumanoid23->addJoints(*HAnimJoint335);

CHAnimJoint* HAnimJoint336 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint336->setUSE("hanim_l_transversetarsal");
HAnimHumanoid23->addJoints(*HAnimJoint336);

group->addChildren(*HAnimHumanoid23);

X3D0->setScene(*Scene21);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

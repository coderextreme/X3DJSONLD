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
meta2->setContent("HAnimModelHandRight.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Right hand using high-fidelity definitions for HAnim version 2.0");
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
meta7->setName("TODO");
meta7->setContent("fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("TODO");
meta8->setContent("Integrate and confirm Segment/Joint names, Viewpoints.");
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
meta20->setName("identifier");
meta20->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("generator");
meta21->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta21);

Ccomponent* component22 = new Ccomponent();
component22->setName("HAnim");
component22->setLevel(1);
head1->addComponent(*component22);

X3D0->setHead(*head1);

CScene* Scene23 = new CScene();
CWorldInfo* WorldInfo24 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo24->setTitle("HAnimModelHandRight.x3d");
group->addChildren(*WorldInfo24);

CHAnimHumanoid* HAnimHumanoid25 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid25->setDEF("hanim_Hand_Right");
HAnimHumanoid25->setVersion("2.0");
HAnimHumanoid25->setName("Hand_Right");
HAnimHumanoid25->setLoa(4);
CMetadataSet* MetadataSet26 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet26->setName("HAnimHumanoid.info");
MetadataSet26->setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
CMetadataString* MetadataString27 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString27->setName("authorName");
MetadataSet26->setMetadata(*MetadataString27);

HAnimHumanoid25->setMetadata(*MetadataSet26);

CHAnimJoint* HAnimJoint28 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint28->setDEF("hanim_humanoid_root");
HAnimJoint28->setName("humanoid_root");
CHAnimJoint* HAnimJoint29 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint29->setDEF("hanim_r_radiocarpal");
HAnimJoint29->setDescription("connection joint of hand to leg above");
HAnimJoint29->setName("r_radiocarpal");
CHAnimSegment* HAnimSegment30 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment30->setDEF("hanim_r_carpal");
HAnimSegment30->setName("r_carpal");
CTransform* Transform31 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape32 = (CShape *)(m_pScene.createNode("Shape"));
Shape32->setDEF("HAnimJointShape");
CAppearance* Appearance33 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance33->setDEF("HAnimJointAppearanceBlue");
CMaterial* Material34 = (CMaterial *)(m_pScene.createNode("Material"));
Material34->setDiffuseColor(new float[3]{0,0,1});
Appearance33->setMaterial(*Material34);

Shape32->setAppearance(*Appearance33);

CSphere* Sphere35 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere35->setRadius(0.025);
Shape32->setGeometry(Sphere35);

Transform31->addChild(*Shape32);

HAnimSegment30->addChildren(*Transform31);

CShape* Shape36 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance37 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material38 = (CMaterial *)(m_pScene.createNode("Material"));
Material38->setEmissiveColor(new float[3]{1,1,1});
Appearance37->setMaterial(*Material38);

Shape36->setAppearance(*Appearance37);

CIndexedLineSet* IndexedLineSet39 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet39->setDEF("RCToMC12");
IndexedLineSet39->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate40 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate40->setPoint(new float[6]{0,0,0,-0.1,0.1,0});
IndexedLineSet39->setCoord(*Coordinate40);

Shape36->setGeometry(IndexedLineSet39);

HAnimSegment30->addChildren(*Shape36);

CShape* Shape41 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance42 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material43 = (CMaterial *)(m_pScene.createNode("Material"));
Material43->setEmissiveColor(new float[3]{1,1,1});
Appearance42->setMaterial(*Material43);

Shape41->setAppearance(*Appearance42);

CIndexedLineSet* IndexedLineSet44 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet44->setDEF("RCToMC3");
IndexedLineSet44->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate45 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate45->setPoint(new float[6]{0,0,0,0,0.07,0});
IndexedLineSet44->setCoord(*Coordinate45);

Shape41->setGeometry(IndexedLineSet44);

HAnimSegment30->addChildren(*Shape41);

CShape* Shape46 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance47 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material48 = (CMaterial *)(m_pScene.createNode("Material"));
Material48->setEmissiveColor(new float[3]{1,1,1});
Appearance47->setMaterial(*Material48);

Shape46->setAppearance(*Appearance47);

CIndexedLineSet* IndexedLineSet49 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet49->setDEF("RCToMC45");
IndexedLineSet49->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate50 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate50->setPoint(new float[6]{0,0,0,0.1,0.1,0});
IndexedLineSet49->setCoord(*Coordinate50);

Shape46->setGeometry(IndexedLineSet49);

HAnimSegment30->addChildren(*Shape46);

HAnimJoint29->addChildren(*HAnimSegment30);

CHAnimJoint* HAnimJoint51 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint51->setDEF("hanim_r_midcarpal_1");
HAnimJoint51->setName("r_midcarpal_1");
HAnimJoint51->setCenter(new float[3]{-0.14,0.09,0});
CHAnimSegment* HAnimSegment52 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment52->setDEF("hanim_r_trapezium");
HAnimSegment52->setName("r_trapezium");
CTransform* Transform53 = (CTransform *)(m_pScene.createNode("Transform"));
Transform53->setTranslation(new float[3]{-0.14,0.09,0});
CShape* Shape54 = (CShape *)(m_pScene.createNode("Shape"));
Shape54->setDEF("HAnimNewJointShape");
CAppearance* Appearance55 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance55->setDEF("HAnimJointAppearanceRed");
CMaterial* Material56 = (CMaterial *)(m_pScene.createNode("Material"));
Material56->setDiffuseColor(new float[3]{1,0,0});
Appearance55->setMaterial(*Material56);

Shape54->setAppearance(*Appearance55);

CSphere* Sphere57 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere57->setRadius(0.025);
Shape54->setGeometry(Sphere57);

Transform53->addChild(*Shape54);

HAnimSegment52->addChildren(*Transform53);

CShape* Shape58 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance59 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material60 = (CMaterial *)(m_pScene.createNode("Material"));
Material60->setEmissiveColor(new float[3]{1,1,1});
Appearance59->setMaterial(*Material60);

Shape58->setAppearance(*Appearance59);

CIndexedLineSet* IndexedLineSet61 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet61->setDEF("MC12toCMC1");
IndexedLineSet61->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate62 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate62->setPoint(new float[6]{-0.1,0.1,0,-0.2,0.15,0});
IndexedLineSet61->setCoord(*Coordinate62);

Shape58->setGeometry(IndexedLineSet61);

HAnimSegment52->addChildren(*Shape58);

HAnimJoint51->addChildren(*HAnimSegment52);

CHAnimJoint* HAnimJoint63 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint63->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint63->setName("r_carpometacarpal_1");
HAnimJoint63->setCenter(new float[3]{-0.2,0.15,0});
CHAnimSegment* HAnimSegment64 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment64->setDEF("hanim_r_metacarpal_1");
HAnimSegment64->setName("r_metacarpal_1");
CTransform* Transform65 = (CTransform *)(m_pScene.createNode("Transform"));
Transform65->setTranslation(new float[3]{-0.2,0.15,0});
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
IndexedLineSet70->setDEF("CMC1toMCP1xxx");
IndexedLineSet70->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate71 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate71->setPoint(new float[6]{-0.2,0.15,0,-0.3,0.3,0});
IndexedLineSet70->setCoord(*Coordinate71);

Shape67->setGeometry(IndexedLineSet70);

HAnimSegment64->addChildren(*Shape67);

HAnimJoint63->addChildren(*HAnimSegment64);

CHAnimJoint* HAnimJoint72 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint72->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint72->setName("r_metacarpophalangeal_1");
HAnimJoint72->setCenter(new float[3]{-0.3,0.3,0});
CHAnimSegment* HAnimSegment73 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment73->setDEF("hanim_r_carpal_proximal_phalanx_1");
HAnimSegment73->setName("r_carpal_proximal_phalanx_1");
CTransform* Transform74 = (CTransform *)(m_pScene.createNode("Transform"));
Transform74->setTranslation(new float[3]{-0.3,0.3,0});
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
IndexedLineSet79->setDEF("MCP11toIP1");
IndexedLineSet79->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate80 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate80->setPoint(new float[6]{-0.3,0.3,0,-0.35,0.4,0});
IndexedLineSet79->setCoord(*Coordinate80);

Shape76->setGeometry(IndexedLineSet79);

HAnimSegment73->addChildren(*Shape76);

HAnimJoint72->addChildren(*HAnimSegment73);

CHAnimJoint* HAnimJoint81 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint81->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint81->setName("r_carpal_interphalangeal_1");
HAnimJoint81->setCenter(new float[3]{-0.35,0.4,0});
CHAnimSegment* HAnimSegment82 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment82->setDEF("hanim_r_carpal_distal_phalanx_1");
HAnimSegment82->setName("r_carpal_distal_phalanx_1");
CTransform* Transform83 = (CTransform *)(m_pScene.createNode("Transform"));
Transform83->setTranslation(new float[3]{-0.35,0.4,0});
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
IndexedLineSet88->setDEF("fingertip_r_carpal_interphalangeal_1");
IndexedLineSet88->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate89 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate89->setPoint(new float[6]{-0.35,0.4,0,-0.36,0.45,0});
IndexedLineSet88->setCoord(*Coordinate89);

Shape85->setGeometry(IndexedLineSet88);

HAnimSegment82->addChildren(*Shape85);

HAnimJoint81->addChildren(*HAnimSegment82);

HAnimJoint72->addChildren(*HAnimJoint81);

HAnimJoint63->addChildren(*HAnimJoint72);

HAnimJoint51->addChildren(*HAnimJoint63);

HAnimJoint29->addChildren(*HAnimJoint51);

CHAnimJoint* HAnimJoint90 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint90->setDEF("hanim_r_midcarpal_2");
HAnimJoint90->setName("r_midcarpal_2");
HAnimJoint90->setCenter(new float[3]{-0.07,0.07,0});
CHAnimSegment* HAnimSegment91 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment91->setDEF("hanim_r_trapezoid");
HAnimSegment91->setName("r_trapezoid");
CTransform* Transform92 = (CTransform *)(m_pScene.createNode("Transform"));
Transform92->setTranslation(new float[3]{-0.07,0.07,0});
CShape* Shape93 = (CShape *)(m_pScene.createNode("Shape"));
Shape93->setUSE("HAnimNewJointShape");
Transform92->addChild(*Shape93);

HAnimSegment91->addChildren(*Transform92);

CShape* Shape94 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance95 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material96 = (CMaterial *)(m_pScene.createNode("Material"));
Material96->setEmissiveColor(new float[3]{1,1,1});
Appearance95->setMaterial(*Material96);

Shape94->setAppearance(*Appearance95);

CIndexedLineSet* IndexedLineSet97 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet97->setDEF("MC12toCMC2");
IndexedLineSet97->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate98 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate98->setPoint(new float[6]{-0.1,0.1,0,-0.1,0.2,0});
IndexedLineSet97->setCoord(*Coordinate98);

Shape94->setGeometry(IndexedLineSet97);

HAnimSegment91->addChildren(*Shape94);

HAnimJoint90->addChildren(*HAnimSegment91);

CHAnimJoint* HAnimJoint99 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint99->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint99->setName("r_carpometacarpal_2");
HAnimJoint99->setCenter(new float[3]{-0.1,0.2,0});
CHAnimSegment* HAnimSegment100 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment100->setDEF("hanim_r_metacarpal_2");
HAnimSegment100->setName("r_metacarpal_2");
CTransform* Transform101 = (CTransform *)(m_pScene.createNode("Transform"));
Transform101->setTranslation(new float[3]{-0.1,0.2,0});
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
IndexedLineSet106->setDEF("CMC2toMCP2");
IndexedLineSet106->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate107 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate107->setPoint(new float[6]{-0.1,0.2,0,-0.15,0.5,0});
IndexedLineSet106->setCoord(*Coordinate107);

Shape103->setGeometry(IndexedLineSet106);

HAnimSegment100->addChildren(*Shape103);

HAnimJoint99->addChildren(*HAnimSegment100);

CHAnimJoint* HAnimJoint108 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint108->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint108->setName("r_metacarpophalangeal_2");
HAnimJoint108->setCenter(new float[3]{-0.15,0.5,0});
CHAnimSegment* HAnimSegment109 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment109->setDEF("hanim_r_carpal_proximal_phalanx_2");
HAnimSegment109->setName("r_carpal_proximal_phalanx_2");
CTransform* Transform110 = (CTransform *)(m_pScene.createNode("Transform"));
Transform110->setTranslation(new float[3]{-0.15,0.5,0});
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
IndexedLineSet115->setDEF("MCP2toPIP2");
IndexedLineSet115->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate116 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate116->setPoint(new float[6]{-0.15,0.5,0,-0.2,0.7,0});
IndexedLineSet115->setCoord(*Coordinate116);

Shape112->setGeometry(IndexedLineSet115);

HAnimSegment109->addChildren(*Shape112);

HAnimJoint108->addChildren(*HAnimSegment109);

CHAnimJoint* HAnimJoint117 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint117->setDEF("hanim_r_carpal_proximal_interphalangeal_1");
HAnimJoint117->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint117->setCenter(new float[3]{-0.2,0.7,0});
CHAnimSegment* HAnimSegment118 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment118->setDEF("hanim_r_carpal_middle_phalanx_1");
HAnimSegment118->setName("r_carpal_middle_phalanx_2");
CTransform* Transform119 = (CTransform *)(m_pScene.createNode("Transform"));
Transform119->setTranslation(new float[3]{-0.2,0.7,0});
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
IndexedLineSet124->setDEF("PIP2toDIP2");
IndexedLineSet124->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate125 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate125->setPoint(new float[6]{-0.2,0.7,0,-0.24,0.87,0});
IndexedLineSet124->setCoord(*Coordinate125);

Shape121->setGeometry(IndexedLineSet124);

HAnimSegment118->addChildren(*Shape121);

HAnimJoint117->addChildren(*HAnimSegment118);

CHAnimJoint* HAnimJoint126 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint126->setDEF("hanim_r_carpal_distal_interphalangeal_1");
HAnimJoint126->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint126->setCenter(new float[3]{-0.24,0.87,0});
CHAnimSegment* HAnimSegment127 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment127->setDEF("hanim_r_carpal_distal_phalanx_2");
HAnimSegment127->setName("r_carpal_distal_phalanx_2");
CTransform* Transform128 = (CTransform *)(m_pScene.createNode("Transform"));
Transform128->setTranslation(new float[3]{-0.24,0.87,0});
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
IndexedLineSet133->setDEF("fingertip_r_carpal_distal_interphalangeal_1");
IndexedLineSet133->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate134 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate134->setPoint(new float[6]{-0.24,0.87,0,-0.26,0.93,0});
IndexedLineSet133->setCoord(*Coordinate134);

Shape130->setGeometry(IndexedLineSet133);

HAnimSegment127->addChildren(*Shape130);

HAnimJoint126->addChildren(*HAnimSegment127);

HAnimJoint117->addChildren(*HAnimJoint126);

HAnimJoint108->addChildren(*HAnimJoint117);

HAnimJoint99->addChildren(*HAnimJoint108);

HAnimJoint90->addChildren(*HAnimJoint99);

HAnimJoint29->addChildren(*HAnimJoint90);

CHAnimJoint* HAnimJoint135 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint135->setDEF("hanim_r_midcarpal_3");
HAnimJoint135->setName("r_midcarpal_3");
HAnimJoint135->setCenter(new float[3]{0,0.07,0});
CHAnimSegment* HAnimSegment136 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment136->setDEF("hanim_r_capitate");
HAnimSegment136->setName("r_capitate");
CTransform* Transform137 = (CTransform *)(m_pScene.createNode("Transform"));
Transform137->setTranslation(new float[3]{0,0.07,0});
CShape* Shape138 = (CShape *)(m_pScene.createNode("Shape"));
Shape138->setUSE("HAnimNewJointShape");
Transform137->addChild(*Shape138);

HAnimSegment136->addChildren(*Transform137);

CShape* Shape139 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance140 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material141 = (CMaterial *)(m_pScene.createNode("Material"));
Material141->setEmissiveColor(new float[3]{1,1,1});
Appearance140->setMaterial(*Material141);

Shape139->setAppearance(*Appearance140);

CIndexedLineSet* IndexedLineSet142 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet142->setDEF("MC3toCMC3");
IndexedLineSet142->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate143 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate143->setPoint(new float[6]{0,0.07,0,0,0.2,0});
IndexedLineSet142->setCoord(*Coordinate143);

Shape139->setGeometry(IndexedLineSet142);

HAnimSegment136->addChildren(*Shape139);

HAnimJoint135->addChildren(*HAnimSegment136);

CHAnimJoint* HAnimJoint144 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint144->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint144->setName("r_carpometacarpal_3");
HAnimJoint144->setCenter(new float[3]{0,0.2,0});
CHAnimSegment* HAnimSegment145 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment145->setDEF("hanim_r_metacarpal_3");
HAnimSegment145->setName("r_metacarpal_3");
CTransform* Transform146 = (CTransform *)(m_pScene.createNode("Transform"));
Transform146->setTranslation(new float[3]{0,0.2,0});
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
IndexedLineSet151->setDEF("CMC3toMCP3");
IndexedLineSet151->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate152 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate152->setPoint(new float[6]{0,0.2,0,-0.03,0.5,0});
IndexedLineSet151->setCoord(*Coordinate152);

Shape148->setGeometry(IndexedLineSet151);

HAnimSegment145->addChildren(*Shape148);

HAnimJoint144->addChildren(*HAnimSegment145);

CHAnimJoint* HAnimJoint153 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint153->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint153->setName("r_metacarpophalangeal_3");
HAnimJoint153->setCenter(new float[3]{-0.03,0.5,0});
CHAnimSegment* HAnimSegment154 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment154->setDEF("hanim_r_carpal_proximal_phalanx_3");
HAnimSegment154->setName("r_carpal_proximal_phalanx_3");
CTransform* Transform155 = (CTransform *)(m_pScene.createNode("Transform"));
Transform155->setTranslation(new float[3]{-0.03,0.5,0});
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
IndexedLineSet160->setDEF("MCP3toPIP3");
IndexedLineSet160->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate161 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate161->setPoint(new float[6]{-0.03,0.5,0,-0.05,0.75,0});
IndexedLineSet160->setCoord(*Coordinate161);

Shape157->setGeometry(IndexedLineSet160);

HAnimSegment154->addChildren(*Shape157);

HAnimJoint153->addChildren(*HAnimSegment154);

CHAnimJoint* HAnimJoint162 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint162->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint162->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint162->setCenter(new float[3]{-0.05,0.75,0});
CHAnimSegment* HAnimSegment163 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment163->setDEF("hanim_r_carpal_middle_phalanx_2");
HAnimSegment163->setName("r_carpal_middle_phalanx_3");
CTransform* Transform164 = (CTransform *)(m_pScene.createNode("Transform"));
Transform164->setTranslation(new float[3]{-0.05,0.75,0});
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
IndexedLineSet169->setDEF("PIP3toDIP3");
IndexedLineSet169->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate170 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate170->setPoint(new float[6]{-0.05,0.75,0,-0.08,0.96,0});
IndexedLineSet169->setCoord(*Coordinate170);

Shape166->setGeometry(IndexedLineSet169);

HAnimSegment163->addChildren(*Shape166);

HAnimJoint162->addChildren(*HAnimSegment163);

CHAnimJoint* HAnimJoint171 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint171->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint171->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint171->setCenter(new float[3]{-0.08,0.96,0});
CHAnimSegment* HAnimSegment172 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment172->setDEF("hanim_r_carpal_distal_phalanx_3");
HAnimSegment172->setName("r_carpal_distal_phalanx_3");
CTransform* Transform173 = (CTransform *)(m_pScene.createNode("Transform"));
Transform173->setTranslation(new float[3]{-0.08,0.96,0});
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
IndexedLineSet178->setDEF("fingertip_r_carpal_distal_interphalangeal_2");
IndexedLineSet178->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate179 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate179->setPoint(new float[6]{-0.08,0.96,0,-0.09,1.05,0});
IndexedLineSet178->setCoord(*Coordinate179);

Shape175->setGeometry(IndexedLineSet178);

HAnimSegment172->addChildren(*Shape175);

HAnimJoint171->addChildren(*HAnimSegment172);

HAnimJoint162->addChildren(*HAnimJoint171);

HAnimJoint153->addChildren(*HAnimJoint162);

HAnimJoint144->addChildren(*HAnimJoint153);

HAnimJoint135->addChildren(*HAnimJoint144);

HAnimJoint29->addChildren(*HAnimJoint135);

CHAnimJoint* HAnimJoint180 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint180->setDEF("hanim_r_midcarpal_4_1");
HAnimJoint180->setName("r_midcarpal_4_5");
HAnimJoint180->setCenter(new float[3]{0.1,0.1,0});
CHAnimSegment* HAnimSegment181 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment181->setDEF("hanim_r_hamate");
HAnimSegment181->setName("r_hamate");
CTransform* Transform182 = (CTransform *)(m_pScene.createNode("Transform"));
Transform182->setTranslation(new float[3]{0.1,0.1,0});
CShape* Shape183 = (CShape *)(m_pScene.createNode("Shape"));
Shape183->setUSE("HAnimNewJointShape");
Transform182->addChild(*Shape183);

HAnimSegment181->addChildren(*Transform182);

CShape* Shape184 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance185 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material186 = (CMaterial *)(m_pScene.createNode("Material"));
Material186->setEmissiveColor(new float[3]{1,1,1});
Appearance185->setMaterial(*Material186);

Shape184->setAppearance(*Appearance185);

CIndexedLineSet* IndexedLineSet187 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet187->setDEF("MC45toCMC4");
IndexedLineSet187->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate188 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate188->setPoint(new float[6]{0.1,0.1,0,0.1,0.2,0});
IndexedLineSet187->setCoord(*Coordinate188);

Shape184->setGeometry(IndexedLineSet187);

HAnimSegment181->addChildren(*Shape184);

CShape* Shape189 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance190 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material191 = (CMaterial *)(m_pScene.createNode("Material"));
Material191->setEmissiveColor(new float[3]{1,1,1});
Appearance190->setMaterial(*Material191);

Shape189->setAppearance(*Appearance190);

CIndexedLineSet* IndexedLineSet192 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet192->setDEF("MC45toCMC5");
IndexedLineSet192->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate193 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate193->setPoint(new float[6]{0.1,0.1,0,0.15,0.17,0});
IndexedLineSet192->setCoord(*Coordinate193);

Shape189->setGeometry(IndexedLineSet192);

HAnimSegment181->addChildren(*Shape189);

HAnimJoint180->addChildren(*HAnimSegment181);

CHAnimJoint* HAnimJoint194 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint194->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint194->setName("r_carpometacarpal_4");
HAnimJoint194->setCenter(new float[3]{0.1,0.2,0});
CHAnimSegment* HAnimSegment195 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment195->setDEF("hanim_r_metacarpal_4");
HAnimSegment195->setName("r_metacarpal_4");
CTransform* Transform196 = (CTransform *)(m_pScene.createNode("Transform"));
Transform196->setTranslation(new float[3]{0.1,0.2,0});
CShape* Shape197 = (CShape *)(m_pScene.createNode("Shape"));
Shape197->setUSE("HAnimJointShape");
Transform196->addChild(*Shape197);

HAnimSegment195->addChildren(*Transform196);

CShape* Shape198 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance199 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material200 = (CMaterial *)(m_pScene.createNode("Material"));
Material200->setEmissiveColor(new float[3]{1,1,1});
Appearance199->setMaterial(*Material200);

Shape198->setAppearance(*Appearance199);

CIndexedLineSet* IndexedLineSet201 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet201->setDEF("CMC4toMCP4");
IndexedLineSet201->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate202 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate202->setPoint(new float[6]{0.1,0.2,0,0.1,0.47,0});
IndexedLineSet201->setCoord(*Coordinate202);

Shape198->setGeometry(IndexedLineSet201);

HAnimSegment195->addChildren(*Shape198);

HAnimJoint194->addChildren(*HAnimSegment195);

CHAnimJoint* HAnimJoint203 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint203->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint203->setName("r_metacarpophalangeal_4");
HAnimJoint203->setCenter(new float[3]{0.1,0.47,0});
CHAnimSegment* HAnimSegment204 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment204->setDEF("hanim_r_carpal_proximal_phalanx_4");
HAnimSegment204->setName("r_carpal_proximal_phalanx_4");
CTransform* Transform205 = (CTransform *)(m_pScene.createNode("Transform"));
Transform205->setTranslation(new float[3]{0.1,0.47,0});
CShape* Shape206 = (CShape *)(m_pScene.createNode("Shape"));
Shape206->setUSE("HAnimJointShape");
Transform205->addChild(*Shape206);

HAnimSegment204->addChildren(*Transform205);

CShape* Shape207 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance208 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material209 = (CMaterial *)(m_pScene.createNode("Material"));
Material209->setEmissiveColor(new float[3]{1,1,1});
Appearance208->setMaterial(*Material209);

Shape207->setAppearance(*Appearance208);

CIndexedLineSet* IndexedLineSet210 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet210->setDEF("MCP4toPIP4");
IndexedLineSet210->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate211 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate211->setPoint(new float[6]{0.1,0.47,0,0.1,0.7,0});
IndexedLineSet210->setCoord(*Coordinate211);

Shape207->setGeometry(IndexedLineSet210);

HAnimSegment204->addChildren(*Shape207);

HAnimJoint203->addChildren(*HAnimSegment204);

CHAnimJoint* HAnimJoint212 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint212->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint212->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint212->setCenter(new float[3]{0.1,0.7,0});
CHAnimSegment* HAnimSegment213 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment213->setDEF("hanim_r_carpal_middle_phalanx_3");
HAnimSegment213->setName("r_carpal_middle_phalanx_4");
CTransform* Transform214 = (CTransform *)(m_pScene.createNode("Transform"));
Transform214->setTranslation(new float[3]{0.1,0.7,0});
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
IndexedLineSet219->setDEF("PIP4toDIP4");
IndexedLineSet219->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate220 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate220->setPoint(new float[6]{0.1,0.7,0,0.1,0.93,0});
IndexedLineSet219->setCoord(*Coordinate220);

Shape216->setGeometry(IndexedLineSet219);

HAnimSegment213->addChildren(*Shape216);

HAnimJoint212->addChildren(*HAnimSegment213);

CHAnimJoint* HAnimJoint221 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint221->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint221->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint221->setCenter(new float[3]{0.1,0.93,0});
CHAnimSegment* HAnimSegment222 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment222->setDEF("hanim_r_carpal_distal_phalanx_4");
HAnimSegment222->setName("r_carpal_distal_phalanx_4");
CTransform* Transform223 = (CTransform *)(m_pScene.createNode("Transform"));
Transform223->setTranslation(new float[3]{0.1,0.93,0});
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
IndexedLineSet228->setDEF("fingertip_r_carpal_distal_interphalangeal_3");
IndexedLineSet228->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate229 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate229->setPoint(new float[6]{0.1,0.93,0,0.1,1,0});
IndexedLineSet228->setCoord(*Coordinate229);

Shape225->setGeometry(IndexedLineSet228);

HAnimSegment222->addChildren(*Shape225);

HAnimJoint221->addChildren(*HAnimSegment222);

HAnimJoint212->addChildren(*HAnimJoint221);

HAnimJoint203->addChildren(*HAnimJoint212);

HAnimJoint194->addChildren(*HAnimJoint203);

HAnimJoint180->addChildren(*HAnimJoint194);

CHAnimJoint* HAnimJoint230 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint230->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint230->setName("r_carpometacarpal_5");
HAnimJoint230->setCenter(new float[3]{0.15,0.17,0});
CHAnimSegment* HAnimSegment231 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment231->setDEF("hanim_r_metacarpal_5");
HAnimSegment231->setName("r_metacarpal_5");
CTransform* Transform232 = (CTransform *)(m_pScene.createNode("Transform"));
Transform232->setTranslation(new float[3]{0.15,0.17,0});
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
IndexedLineSet237->setDEF("CMC5toMCP5");
IndexedLineSet237->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate238 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate238->setPoint(new float[6]{0.15,0.17,0,0.2,0.4,0});
IndexedLineSet237->setCoord(*Coordinate238);

Shape234->setGeometry(IndexedLineSet237);

HAnimSegment231->addChildren(*Shape234);

HAnimJoint230->addChildren(*HAnimSegment231);

CHAnimJoint* HAnimJoint239 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint239->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint239->setName("r_metacarpophalangeal_5");
HAnimJoint239->setCenter(new float[3]{0.2,0.4,0});
CHAnimSegment* HAnimSegment240 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment240->setDEF("hanim_r_carpal_proximal_phalanx_5");
HAnimSegment240->setName("r_carpal_proximal_phalanx_5");
CTransform* Transform241 = (CTransform *)(m_pScene.createNode("Transform"));
Transform241->setTranslation(new float[3]{0.2,0.4,0});
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
IndexedLineSet246->setDEF("MCP5toPIP5");
IndexedLineSet246->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate247 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate247->setPoint(new float[6]{0.2,0.4,0,0.23,0.63,0});
IndexedLineSet246->setCoord(*Coordinate247);

Shape243->setGeometry(IndexedLineSet246);

HAnimSegment240->addChildren(*Shape243);

HAnimJoint239->addChildren(*HAnimSegment240);

CHAnimJoint* HAnimJoint248 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint248->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint248->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint248->setCenter(new float[3]{0.23,0.63,0});
CHAnimSegment* HAnimSegment249 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment249->setDEF("hanim_r_carpal_middle_phalanx_4");
HAnimSegment249->setName("r_carpal_middle_phalanx_5");
CTransform* Transform250 = (CTransform *)(m_pScene.createNode("Transform"));
Transform250->setTranslation(new float[3]{0.23,0.63,0});
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
IndexedLineSet255->setDEF("PIP5toDIP5");
IndexedLineSet255->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate256 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate256->setPoint(new float[6]{0.23,0.63,0,0.25,0.79,0});
IndexedLineSet255->setCoord(*Coordinate256);

Shape252->setGeometry(IndexedLineSet255);

HAnimSegment249->addChildren(*Shape252);

HAnimJoint248->addChildren(*HAnimSegment249);

CHAnimJoint* HAnimJoint257 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint257->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint257->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint257->setCenter(new float[3]{0.25,0.79,0});
CHAnimSegment* HAnimSegment258 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment258->setDEF("hanim_r_carpal_distal_phalanx_5");
HAnimSegment258->setName("r_carpal_distal_phalanx_5");
CTransform* Transform259 = (CTransform *)(m_pScene.createNode("Transform"));
Transform259->setTranslation(new float[3]{0.25,0.79,0});
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
IndexedLineSet264->setDEF("fingertip_r_carpal_distal_interphalangeal_4");
IndexedLineSet264->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate265 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate265->setPoint(new float[6]{0.25,0.79,0,0.26,0.85,0});
IndexedLineSet264->setCoord(*Coordinate265);

Shape261->setGeometry(IndexedLineSet264);

HAnimSegment258->addChildren(*Shape261);

HAnimJoint257->addChildren(*HAnimSegment258);

HAnimJoint248->addChildren(*HAnimJoint257);

HAnimJoint239->addChildren(*HAnimJoint248);

HAnimJoint230->addChildren(*HAnimJoint239);

HAnimJoint180->addChildren(*HAnimJoint230);

HAnimJoint29->addChildren(*HAnimJoint180);

HAnimJoint28->addChildren(*HAnimJoint29);

HAnimHumanoid25->setSkeleton(*HAnimJoint28);

CHAnimSegment* HAnimSegment266 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment266->setUSE("hanim_r_capitate");
HAnimHumanoid25->setSegments(*HAnimSegment266);

CHAnimSegment* HAnimSegment267 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment267->setUSE("hanim_r_carpal");
HAnimHumanoid25->setSegments(*HAnimSegment267);

CHAnimSegment* HAnimSegment268 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment268->setUSE("hanim_r_carpal_distal_phalanx_1");
HAnimHumanoid25->setSegments(*HAnimSegment268);

CHAnimSegment* HAnimSegment269 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment269->setUSE("hanim_r_carpal_distal_phalanx_2");
HAnimHumanoid25->setSegments(*HAnimSegment269);

CHAnimSegment* HAnimSegment270 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment270->setUSE("hanim_r_carpal_distal_phalanx_3");
HAnimHumanoid25->setSegments(*HAnimSegment270);

CHAnimSegment* HAnimSegment271 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment271->setUSE("hanim_r_carpal_distal_phalanx_4");
HAnimHumanoid25->setSegments(*HAnimSegment271);

CHAnimSegment* HAnimSegment272 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment272->setUSE("hanim_r_carpal_distal_phalanx_5");
HAnimHumanoid25->setSegments(*HAnimSegment272);

CHAnimSegment* HAnimSegment273 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment273->setUSE("hanim_r_carpal_middle_phalanx_1");
HAnimHumanoid25->setSegments(*HAnimSegment273);

CHAnimSegment* HAnimSegment274 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment274->setUSE("hanim_r_carpal_middle_phalanx_2");
HAnimHumanoid25->setSegments(*HAnimSegment274);

CHAnimSegment* HAnimSegment275 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment275->setUSE("hanim_r_carpal_middle_phalanx_3");
HAnimHumanoid25->setSegments(*HAnimSegment275);

CHAnimSegment* HAnimSegment276 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment276->setUSE("hanim_r_carpal_middle_phalanx_4");
HAnimHumanoid25->setSegments(*HAnimSegment276);

CHAnimSegment* HAnimSegment277 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment277->setUSE("hanim_r_carpal_proximal_phalanx_1");
HAnimHumanoid25->setSegments(*HAnimSegment277);

CHAnimSegment* HAnimSegment278 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment278->setUSE("hanim_r_carpal_proximal_phalanx_2");
HAnimHumanoid25->setSegments(*HAnimSegment278);

CHAnimSegment* HAnimSegment279 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment279->setUSE("hanim_r_carpal_proximal_phalanx_3");
HAnimHumanoid25->setSegments(*HAnimSegment279);

CHAnimSegment* HAnimSegment280 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment280->setUSE("hanim_r_carpal_proximal_phalanx_4");
HAnimHumanoid25->setSegments(*HAnimSegment280);

CHAnimSegment* HAnimSegment281 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment281->setUSE("hanim_r_carpal_proximal_phalanx_5");
HAnimHumanoid25->setSegments(*HAnimSegment281);

CHAnimSegment* HAnimSegment282 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment282->setUSE("hanim_r_hamate");
HAnimHumanoid25->setSegments(*HAnimSegment282);

CHAnimSegment* HAnimSegment283 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment283->setUSE("hanim_r_metacarpal_1");
HAnimHumanoid25->setSegments(*HAnimSegment283);

CHAnimSegment* HAnimSegment284 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment284->setUSE("hanim_r_metacarpal_2");
HAnimHumanoid25->setSegments(*HAnimSegment284);

CHAnimSegment* HAnimSegment285 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment285->setUSE("hanim_r_metacarpal_3");
HAnimHumanoid25->setSegments(*HAnimSegment285);

CHAnimSegment* HAnimSegment286 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment286->setUSE("hanim_r_metacarpal_4");
HAnimHumanoid25->setSegments(*HAnimSegment286);

CHAnimSegment* HAnimSegment287 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment287->setUSE("hanim_r_metacarpal_5");
HAnimHumanoid25->setSegments(*HAnimSegment287);

CHAnimSegment* HAnimSegment288 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment288->setUSE("hanim_r_trapezium");
HAnimHumanoid25->setSegments(*HAnimSegment288);

CHAnimSegment* HAnimSegment289 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment289->setUSE("hanim_r_trapezoid");
HAnimHumanoid25->setSegments(*HAnimSegment289);

CHAnimJoint* HAnimJoint290 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint290->setUSE("hanim_humanoid_root");
HAnimHumanoid25->addJoints(*HAnimJoint290);

CHAnimJoint* HAnimJoint291 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint291->setUSE("hanim_r_carpal_distal_interphalangeal_1");
HAnimHumanoid25->addJoints(*HAnimJoint291);

CHAnimJoint* HAnimJoint292 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint292->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid25->addJoints(*HAnimJoint292);

CHAnimJoint* HAnimJoint293 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint293->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid25->addJoints(*HAnimJoint293);

CHAnimJoint* HAnimJoint294 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint294->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid25->addJoints(*HAnimJoint294);

CHAnimJoint* HAnimJoint295 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint295->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid25->addJoints(*HAnimJoint295);

CHAnimJoint* HAnimJoint296 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint296->setUSE("hanim_r_carpal_proximal_interphalangeal_1");
HAnimHumanoid25->addJoints(*HAnimJoint296);

CHAnimJoint* HAnimJoint297 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint297->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid25->addJoints(*HAnimJoint297);

CHAnimJoint* HAnimJoint298 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint298->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid25->addJoints(*HAnimJoint298);

CHAnimJoint* HAnimJoint299 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint299->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid25->addJoints(*HAnimJoint299);

CHAnimJoint* HAnimJoint300 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint300->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid25->addJoints(*HAnimJoint300);

CHAnimJoint* HAnimJoint301 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint301->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid25->addJoints(*HAnimJoint301);

CHAnimJoint* HAnimJoint302 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint302->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid25->addJoints(*HAnimJoint302);

CHAnimJoint* HAnimJoint303 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint303->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid25->addJoints(*HAnimJoint303);

CHAnimJoint* HAnimJoint304 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint304->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid25->addJoints(*HAnimJoint304);

CHAnimJoint* HAnimJoint305 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint305->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid25->addJoints(*HAnimJoint305);

CHAnimJoint* HAnimJoint306 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint306->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid25->addJoints(*HAnimJoint306);

CHAnimJoint* HAnimJoint307 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint307->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid25->addJoints(*HAnimJoint307);

CHAnimJoint* HAnimJoint308 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint308->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid25->addJoints(*HAnimJoint308);

CHAnimJoint* HAnimJoint309 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint309->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid25->addJoints(*HAnimJoint309);

CHAnimJoint* HAnimJoint310 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint310->setUSE("hanim_r_midcarpal_1");
HAnimHumanoid25->addJoints(*HAnimJoint310);

CHAnimJoint* HAnimJoint311 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint311->setUSE("hanim_r_midcarpal_2");
HAnimHumanoid25->addJoints(*HAnimJoint311);

CHAnimJoint* HAnimJoint312 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint312->setUSE("hanim_r_midcarpal_3");
HAnimHumanoid25->addJoints(*HAnimJoint312);

CHAnimJoint* HAnimJoint313 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint313->setUSE("hanim_r_midcarpal_4_1");
HAnimHumanoid25->addJoints(*HAnimJoint313);

CHAnimJoint* HAnimJoint314 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint314->setUSE("hanim_r_radiocarpal");
HAnimHumanoid25->addJoints(*HAnimJoint314);

group->addChildren(*HAnimHumanoid25);

X3D0->setScene(*Scene23);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

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
meta2->setContent("HAnimModelHandLeft.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Left hand, using high-fidelity definitions for HAnim version 2.0");
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
meta20->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d");
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
WorldInfo24->setTitle("HAnimModelHandLeft.x3d");
group->addChildren(*WorldInfo24);

CHAnimHumanoid* HAnimHumanoid25 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid25->setDEF("hanim_Hand_Left");
HAnimHumanoid25->setVersion("2.0");
HAnimHumanoid25->setName("Hand_Left");
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
HAnimJoint29->setDEF("hanim_l_radiocarpal");
HAnimJoint29->setDescription("connection joint of hand to leg above");
HAnimJoint29->setName("l_radiocarpal");
CHAnimSegment* HAnimSegment30 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment30->setDEF("hanim_l_carpal");
HAnimSegment30->setName("l_carpal");
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
Coordinate40->setPoint(new float[6]{0,0,0,0.1,0.1,0});
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
Coordinate50->setPoint(new float[6]{0,0,0,-0.1,0.1,0});
IndexedLineSet49->setCoord(*Coordinate50);

Shape46->setGeometry(IndexedLineSet49);

HAnimSegment30->addChildren(*Shape46);

HAnimJoint29->addChildren(*HAnimSegment30);

CHAnimJoint* HAnimJoint51 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint51->setDEF("hanim_l_midcarpal_1");
HAnimJoint51->setName("l_midcarpal_1");
HAnimJoint51->setCenter(new float[3]{0.14,0.09,0});
CHAnimSegment* HAnimSegment52 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment52->setDEF("hanim_l_trapezium");
HAnimSegment52->setName("l_trapezium");
CTransform* Transform53 = (CTransform *)(m_pScene.createNode("Transform"));
Transform53->setTranslation(new float[3]{0.14,0.09,0});
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
Coordinate62->setPoint(new float[6]{0.1,0.1,0,0.2,0.15,0});
IndexedLineSet61->setCoord(*Coordinate62);

Shape58->setGeometry(IndexedLineSet61);

HAnimSegment52->addChildren(*Shape58);

CShape* Shape63 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance64 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material65 = (CMaterial *)(m_pScene.createNode("Material"));
Material65->setEmissiveColor(new float[3]{1,1,1});
Appearance64->setMaterial(*Material65);

Shape63->setAppearance(*Appearance64);

CIndexedLineSet* IndexedLineSet66 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet66->setDEF("MC1toCMC1");
IndexedLineSet66->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate67 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate67->setPoint(new float[6]{0.1,0.1,0,0.1,0.2,0});
IndexedLineSet66->setCoord(*Coordinate67);

Shape63->setGeometry(IndexedLineSet66);

HAnimSegment52->addChildren(*Shape63);

HAnimJoint51->addChildren(*HAnimSegment52);

CHAnimJoint* HAnimJoint68 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint68->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint68->setName("l_carpometacarpal_1");
HAnimJoint68->setCenter(new float[3]{0.2,0.15,0});
CHAnimSegment* HAnimSegment69 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment69->setDEF("hanim_l_metacarpal_1");
HAnimSegment69->setName("l_metacarpal_1");
CTransform* Transform70 = (CTransform *)(m_pScene.createNode("Transform"));
Transform70->setTranslation(new float[3]{0.2,0.15,0});
CShape* Shape71 = (CShape *)(m_pScene.createNode("Shape"));
Shape71->setUSE("HAnimJointShape");
Transform70->addChild(*Shape71);

HAnimSegment69->addChildren(*Transform70);

CShape* Shape72 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance73 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material74 = (CMaterial *)(m_pScene.createNode("Material"));
Material74->setEmissiveColor(new float[3]{1,1,1});
Appearance73->setMaterial(*Material74);

Shape72->setAppearance(*Appearance73);

CIndexedLineSet* IndexedLineSet75 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet75->setDEF("CMC1toMCP1");
IndexedLineSet75->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate76 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate76->setPoint(new float[6]{0.2,0.15,0,0.3,0.3,0});
IndexedLineSet75->setCoord(*Coordinate76);

Shape72->setGeometry(IndexedLineSet75);

HAnimSegment69->addChildren(*Shape72);

HAnimJoint68->addChildren(*HAnimSegment69);

CHAnimJoint* HAnimJoint77 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint77->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint77->setName("l_metacarpophalangeal_1");
HAnimJoint77->setCenter(new float[3]{0.3,0.3,0});
CHAnimSegment* HAnimSegment78 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment78->setDEF("hanim_l_carpal_proximal_phalanx_1");
HAnimSegment78->setName("l_carpal_proximal_phalanx_1");
CTransform* Transform79 = (CTransform *)(m_pScene.createNode("Transform"));
Transform79->setTranslation(new float[3]{0.3,0.3,0});
CShape* Shape80 = (CShape *)(m_pScene.createNode("Shape"));
Shape80->setUSE("HAnimJointShape");
Transform79->addChild(*Shape80);

HAnimSegment78->addChildren(*Transform79);

CShape* Shape81 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance82 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material83 = (CMaterial *)(m_pScene.createNode("Material"));
Material83->setEmissiveColor(new float[3]{1,1,1});
Appearance82->setMaterial(*Material83);

Shape81->setAppearance(*Appearance82);

CIndexedLineSet* IndexedLineSet84 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet84->setDEF("MCP11toIP1");
IndexedLineSet84->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate85 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate85->setPoint(new float[6]{0.3,0.3,0,0.35,0.4,0});
IndexedLineSet84->setCoord(*Coordinate85);

Shape81->setGeometry(IndexedLineSet84);

HAnimSegment78->addChildren(*Shape81);

HAnimJoint77->addChildren(*HAnimSegment78);

CHAnimJoint* HAnimJoint86 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint86->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint86->setName("l_carpal_interphalangeal_1");
HAnimJoint86->setCenter(new float[3]{0.35,0.4,0});
CHAnimSegment* HAnimSegment87 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment87->setDEF("hanim_l_carpal_distal_phalanx_1");
HAnimSegment87->setName("l_carpal_distal_phalanx_1");
CTransform* Transform88 = (CTransform *)(m_pScene.createNode("Transform"));
Transform88->setTranslation(new float[3]{0.35,0.4,0});
CShape* Shape89 = (CShape *)(m_pScene.createNode("Shape"));
Shape89->setUSE("HAnimJointShape");
Transform88->addChild(*Shape89);

HAnimSegment87->addChildren(*Transform88);

CShape* Shape90 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance91 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material92 = (CMaterial *)(m_pScene.createNode("Material"));
Material92->setEmissiveColor(new float[3]{1,1,1});
Appearance91->setMaterial(*Material92);

Shape90->setAppearance(*Appearance91);

CIndexedLineSet* IndexedLineSet93 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet93->setDEF("fingertip_l_carpal_interphalangeal_1");
IndexedLineSet93->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate94 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate94->setPoint(new float[6]{0.35,0.4,0,0.36,0.45,0});
IndexedLineSet93->setCoord(*Coordinate94);

Shape90->setGeometry(IndexedLineSet93);

HAnimSegment87->addChildren(*Shape90);

HAnimJoint86->addChildren(*HAnimSegment87);

HAnimJoint77->addChildren(*HAnimJoint86);

HAnimJoint68->addChildren(*HAnimJoint77);

HAnimJoint51->addChildren(*HAnimJoint68);

HAnimJoint29->addChildren(*HAnimJoint51);

CHAnimJoint* HAnimJoint95 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint95->setDEF("hanim_l_midcarpal_2");
HAnimJoint95->setName("l_midcarpal_2");
HAnimJoint95->setCenter(new float[3]{0.07,0.07,0});
CHAnimSegment* HAnimSegment96 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment96->setDEF("hanim_l_trapezoid");
HAnimSegment96->setName("l_trapezoid");
CTransform* Transform97 = (CTransform *)(m_pScene.createNode("Transform"));
Transform97->setTranslation(new float[3]{0.07,0.07,0});
CShape* Shape98 = (CShape *)(m_pScene.createNode("Shape"));
Shape98->setUSE("HAnimNewJointShape");
Transform97->addChild(*Shape98);

HAnimSegment96->addChildren(*Transform97);

CShape* Shape99 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance100 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material101 = (CMaterial *)(m_pScene.createNode("Material"));
Material101->setEmissiveColor(new float[3]{1,1,1});
Appearance100->setMaterial(*Material101);

Shape99->setAppearance(*Appearance100);

CIndexedLineSet* IndexedLineSet102 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet102->setDEF("MC2toCMC2");
IndexedLineSet102->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate103 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate103->setPoint(new float[6]{-0.1,0.1,0,-0.1,0.2,0});
IndexedLineSet102->setCoord(*Coordinate103);

Shape99->setGeometry(IndexedLineSet102);

HAnimSegment96->addChildren(*Shape99);

HAnimJoint95->addChildren(*HAnimSegment96);

CHAnimJoint* HAnimJoint104 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint104->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint104->setName("l_carpometacarpal_2");
HAnimJoint104->setCenter(new float[3]{0.1,0.2,0});
CHAnimSegment* HAnimSegment105 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment105->setDEF("hanim_l_metacarpal_2");
HAnimSegment105->setName("l_metacarpal_2");
CTransform* Transform106 = (CTransform *)(m_pScene.createNode("Transform"));
Transform106->setTranslation(new float[3]{0.1,0.2,0});
CShape* Shape107 = (CShape *)(m_pScene.createNode("Shape"));
Shape107->setUSE("HAnimJointShape");
Transform106->addChild(*Shape107);

HAnimSegment105->addChildren(*Transform106);

CShape* Shape108 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance109 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material110 = (CMaterial *)(m_pScene.createNode("Material"));
Material110->setEmissiveColor(new float[3]{1,1,1});
Appearance109->setMaterial(*Material110);

Shape108->setAppearance(*Appearance109);

CIndexedLineSet* IndexedLineSet111 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet111->setDEF("CMC2toMCP2");
IndexedLineSet111->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate112 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate112->setPoint(new float[6]{0.1,0.2,0,0.15,0.5,0});
IndexedLineSet111->setCoord(*Coordinate112);

Shape108->setGeometry(IndexedLineSet111);

HAnimSegment105->addChildren(*Shape108);

HAnimJoint104->addChildren(*HAnimSegment105);

CHAnimJoint* HAnimJoint113 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint113->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint113->setName("l_metacarpophalangeal_2");
HAnimJoint113->setCenter(new float[3]{0.15,0.5,0});
CHAnimSegment* HAnimSegment114 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment114->setDEF("hanim_l_carpal_proximal_phalanx_2");
HAnimSegment114->setName("l_carpal_proximal_phalanx_2");
CTransform* Transform115 = (CTransform *)(m_pScene.createNode("Transform"));
Transform115->setTranslation(new float[3]{0.15,0.5,0});
CShape* Shape116 = (CShape *)(m_pScene.createNode("Shape"));
Shape116->setUSE("HAnimJointShape");
Transform115->addChild(*Shape116);

HAnimSegment114->addChildren(*Transform115);

CShape* Shape117 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance118 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material119 = (CMaterial *)(m_pScene.createNode("Material"));
Material119->setEmissiveColor(new float[3]{1,1,1});
Appearance118->setMaterial(*Material119);

Shape117->setAppearance(*Appearance118);

CIndexedLineSet* IndexedLineSet120 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet120->setDEF("MCP2toPIP2");
IndexedLineSet120->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate121 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate121->setPoint(new float[6]{0.15,0.5,0,0.2,0.7,0});
IndexedLineSet120->setCoord(*Coordinate121);

Shape117->setGeometry(IndexedLineSet120);

HAnimSegment114->addChildren(*Shape117);

HAnimJoint113->addChildren(*HAnimSegment114);

CHAnimJoint* HAnimJoint122 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint122->setDEF("hanim_l_carpal_proximal_interphalangeal_1");
HAnimJoint122->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint122->setCenter(new float[3]{0.2,0.7,0});
CHAnimSegment* HAnimSegment123 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment123->setDEF("hanim_l_carpal_middle_phalanx_1");
HAnimSegment123->setName("l_carpal_middle_phalanx_2");
CTransform* Transform124 = (CTransform *)(m_pScene.createNode("Transform"));
Transform124->setTranslation(new float[3]{0.2,0.7,0});
CShape* Shape125 = (CShape *)(m_pScene.createNode("Shape"));
Shape125->setUSE("HAnimJointShape");
Transform124->addChild(*Shape125);

HAnimSegment123->addChildren(*Transform124);

CShape* Shape126 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance127 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material128 = (CMaterial *)(m_pScene.createNode("Material"));
Material128->setEmissiveColor(new float[3]{1,1,1});
Appearance127->setMaterial(*Material128);

Shape126->setAppearance(*Appearance127);

CIndexedLineSet* IndexedLineSet129 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet129->setDEF("PIP2toDIP2");
IndexedLineSet129->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate130 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate130->setPoint(new float[6]{0.2,0.7,0,0.24,0.87,0});
IndexedLineSet129->setCoord(*Coordinate130);

Shape126->setGeometry(IndexedLineSet129);

HAnimSegment123->addChildren(*Shape126);

HAnimJoint122->addChildren(*HAnimSegment123);

CHAnimJoint* HAnimJoint131 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint131->setDEF("hanim_l_carpal_distal_interphalangeal_1");
HAnimJoint131->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint131->setCenter(new float[3]{0.24,0.87,0});
CHAnimSegment* HAnimSegment132 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment132->setDEF("hanim_l_carpal_distal_phalanx_2");
HAnimSegment132->setName("l_carpal_distal_phalanx_2");
CTransform* Transform133 = (CTransform *)(m_pScene.createNode("Transform"));
Transform133->setTranslation(new float[3]{0.24,0.87,0});
CShape* Shape134 = (CShape *)(m_pScene.createNode("Shape"));
Shape134->setUSE("HAnimJointShape");
Transform133->addChild(*Shape134);

HAnimSegment132->addChildren(*Transform133);

CShape* Shape135 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance136 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material137 = (CMaterial *)(m_pScene.createNode("Material"));
Material137->setEmissiveColor(new float[3]{1,1,1});
Appearance136->setMaterial(*Material137);

Shape135->setAppearance(*Appearance136);

CIndexedLineSet* IndexedLineSet138 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet138->setDEF("fingertip_l_carpal_distal_interphalangeal_1");
IndexedLineSet138->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate139 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate139->setPoint(new float[6]{0.24,0.87,0,0.26,0.93,0});
IndexedLineSet138->setCoord(*Coordinate139);

Shape135->setGeometry(IndexedLineSet138);

HAnimSegment132->addChildren(*Shape135);

HAnimJoint131->addChildren(*HAnimSegment132);

HAnimJoint122->addChildren(*HAnimJoint131);

HAnimJoint113->addChildren(*HAnimJoint122);

HAnimJoint104->addChildren(*HAnimJoint113);

HAnimJoint95->addChildren(*HAnimJoint104);

HAnimJoint29->addChildren(*HAnimJoint95);

CHAnimJoint* HAnimJoint140 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint140->setDEF("hanim_l_midcarpal_3");
HAnimJoint140->setName("l_midcarpal_3");
HAnimJoint140->setCenter(new float[3]{0,0.07,0});
CHAnimSegment* HAnimSegment141 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment141->setDEF("hanim_l_capitate");
HAnimSegment141->setName("l_capitate");
CTransform* Transform142 = (CTransform *)(m_pScene.createNode("Transform"));
Transform142->setTranslation(new float[3]{0,0.07,0});
CShape* Shape143 = (CShape *)(m_pScene.createNode("Shape"));
Shape143->setUSE("HAnimNewJointShape");
Transform142->addChild(*Shape143);

HAnimSegment141->addChildren(*Transform142);

CShape* Shape144 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance145 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material146 = (CMaterial *)(m_pScene.createNode("Material"));
Material146->setEmissiveColor(new float[3]{1,1,1});
Appearance145->setMaterial(*Material146);

Shape144->setAppearance(*Appearance145);

CIndexedLineSet* IndexedLineSet147 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet147->setDEF("MC3toCMC3");
IndexedLineSet147->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate148 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate148->setPoint(new float[6]{0,0.07,0,0,0.2,0});
IndexedLineSet147->setCoord(*Coordinate148);

Shape144->setGeometry(IndexedLineSet147);

HAnimSegment141->addChildren(*Shape144);

HAnimJoint140->addChildren(*HAnimSegment141);

CHAnimJoint* HAnimJoint149 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint149->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint149->setName("l_carpometacarpal_3");
HAnimJoint149->setCenter(new float[3]{0,0.2,0});
CHAnimSegment* HAnimSegment150 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment150->setDEF("hanim_l_metacarpal_3");
HAnimSegment150->setName("l_metacarpal_3");
CTransform* Transform151 = (CTransform *)(m_pScene.createNode("Transform"));
Transform151->setTranslation(new float[3]{0,0.2,0});
CShape* Shape152 = (CShape *)(m_pScene.createNode("Shape"));
Shape152->setUSE("HAnimJointShape");
Transform151->addChild(*Shape152);

HAnimSegment150->addChildren(*Transform151);

CShape* Shape153 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance154 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material155 = (CMaterial *)(m_pScene.createNode("Material"));
Material155->setEmissiveColor(new float[3]{1,1,1});
Appearance154->setMaterial(*Material155);

Shape153->setAppearance(*Appearance154);

CIndexedLineSet* IndexedLineSet156 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet156->setDEF("CMC3toMCP3");
IndexedLineSet156->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate157 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate157->setPoint(new float[6]{0,0.2,0,0.03,0.5,0});
IndexedLineSet156->setCoord(*Coordinate157);

Shape153->setGeometry(IndexedLineSet156);

HAnimSegment150->addChildren(*Shape153);

HAnimJoint149->addChildren(*HAnimSegment150);

CHAnimJoint* HAnimJoint158 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint158->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint158->setName("l_metacarpophalangeal_3");
HAnimJoint158->setCenter(new float[3]{0.03,0.5,0});
CHAnimSegment* HAnimSegment159 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment159->setDEF("hanim_l_carpal_proximal_phalanx_3");
HAnimSegment159->setName("l_carpal_proximal_phalanx_3");
CTransform* Transform160 = (CTransform *)(m_pScene.createNode("Transform"));
Transform160->setTranslation(new float[3]{0.03,0.5,0});
CShape* Shape161 = (CShape *)(m_pScene.createNode("Shape"));
Shape161->setUSE("HAnimJointShape");
Transform160->addChild(*Shape161);

HAnimSegment159->addChildren(*Transform160);

CShape* Shape162 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance163 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material164 = (CMaterial *)(m_pScene.createNode("Material"));
Material164->setEmissiveColor(new float[3]{1,1,1});
Appearance163->setMaterial(*Material164);

Shape162->setAppearance(*Appearance163);

CIndexedLineSet* IndexedLineSet165 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet165->setDEF("MCP3toPIP3");
IndexedLineSet165->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate166 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate166->setPoint(new float[6]{0.03,0.5,0,0.05,0.75,0});
IndexedLineSet165->setCoord(*Coordinate166);

Shape162->setGeometry(IndexedLineSet165);

HAnimSegment159->addChildren(*Shape162);

HAnimJoint158->addChildren(*HAnimSegment159);

CHAnimJoint* HAnimJoint167 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint167->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint167->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint167->setCenter(new float[3]{0.05,0.75,0});
CHAnimSegment* HAnimSegment168 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment168->setDEF("hanim_l_carpal_middle_phalanx_2");
HAnimSegment168->setName("l_carpal_middle_phalanx_3");
CTransform* Transform169 = (CTransform *)(m_pScene.createNode("Transform"));
Transform169->setTranslation(new float[3]{0.05,0.75,0});
CShape* Shape170 = (CShape *)(m_pScene.createNode("Shape"));
Shape170->setUSE("HAnimJointShape");
Transform169->addChild(*Shape170);

HAnimSegment168->addChildren(*Transform169);

CShape* Shape171 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance172 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material173 = (CMaterial *)(m_pScene.createNode("Material"));
Material173->setEmissiveColor(new float[3]{1,1,1});
Appearance172->setMaterial(*Material173);

Shape171->setAppearance(*Appearance172);

CIndexedLineSet* IndexedLineSet174 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet174->setDEF("PIP3toDIP3");
IndexedLineSet174->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate175 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate175->setPoint(new float[6]{0.05,0.75,0,0.08,0.96,0});
IndexedLineSet174->setCoord(*Coordinate175);

Shape171->setGeometry(IndexedLineSet174);

HAnimSegment168->addChildren(*Shape171);

HAnimJoint167->addChildren(*HAnimSegment168);

CHAnimJoint* HAnimJoint176 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint176->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint176->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint176->setCenter(new float[3]{0.08,0.96,0});
CHAnimSegment* HAnimSegment177 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment177->setDEF("hanim_l_carpal_distal_phalanx_3");
HAnimSegment177->setName("l_carpal_distal_phalanx_3");
CTransform* Transform178 = (CTransform *)(m_pScene.createNode("Transform"));
Transform178->setTranslation(new float[3]{0.08,0.96,0});
CShape* Shape179 = (CShape *)(m_pScene.createNode("Shape"));
Shape179->setUSE("HAnimJointShape");
Transform178->addChild(*Shape179);

HAnimSegment177->addChildren(*Transform178);

CShape* Shape180 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance181 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material182 = (CMaterial *)(m_pScene.createNode("Material"));
Material182->setEmissiveColor(new float[3]{1,1,1});
Appearance181->setMaterial(*Material182);

Shape180->setAppearance(*Appearance181);

CIndexedLineSet* IndexedLineSet183 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet183->setDEF("fingertip_l_carpal_distal_interphalangeal_2");
IndexedLineSet183->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate184 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate184->setPoint(new float[6]{0.08,0.96,0,0.09,1.05,0});
IndexedLineSet183->setCoord(*Coordinate184);

Shape180->setGeometry(IndexedLineSet183);

HAnimSegment177->addChildren(*Shape180);

HAnimJoint176->addChildren(*HAnimSegment177);

HAnimJoint167->addChildren(*HAnimJoint176);

HAnimJoint158->addChildren(*HAnimJoint167);

HAnimJoint149->addChildren(*HAnimJoint158);

HAnimJoint140->addChildren(*HAnimJoint149);

HAnimJoint29->addChildren(*HAnimJoint140);

CHAnimJoint* HAnimJoint185 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint185->setDEF("hanim_l_midcarpal_4_1");
HAnimJoint185->setName("l_midcarpal_4_5");
HAnimJoint185->setCenter(new float[3]{-0.1,0.1,0});
CHAnimSegment* HAnimSegment186 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment186->setDEF("hanim_l_hamate");
HAnimSegment186->setName("l_hamate");
CTransform* Transform187 = (CTransform *)(m_pScene.createNode("Transform"));
Transform187->setTranslation(new float[3]{-0.1,0.1,0});
CShape* Shape188 = (CShape *)(m_pScene.createNode("Shape"));
Shape188->setUSE("HAnimNewJointShape");
Transform187->addChild(*Shape188);

HAnimSegment186->addChildren(*Transform187);

CShape* Shape189 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance190 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material191 = (CMaterial *)(m_pScene.createNode("Material"));
Material191->setEmissiveColor(new float[3]{1,1,1});
Appearance190->setMaterial(*Material191);

Shape189->setAppearance(*Appearance190);

CIndexedLineSet* IndexedLineSet192 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet192->setDEF("MC45toCMC4");
IndexedLineSet192->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate193 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate193->setPoint(new float[6]{-0.1,0.1,0,-0.1,0.2,0});
IndexedLineSet192->setCoord(*Coordinate193);

Shape189->setGeometry(IndexedLineSet192);

HAnimSegment186->addChildren(*Shape189);

CShape* Shape194 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance195 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material196 = (CMaterial *)(m_pScene.createNode("Material"));
Material196->setEmissiveColor(new float[3]{1,1,1});
Appearance195->setMaterial(*Material196);

Shape194->setAppearance(*Appearance195);

CIndexedLineSet* IndexedLineSet197 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet197->setDEF("MC45toCMC5");
IndexedLineSet197->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate198 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate198->setPoint(new float[6]{-0.1,0.1,0,-0.15,0.17,0});
IndexedLineSet197->setCoord(*Coordinate198);

Shape194->setGeometry(IndexedLineSet197);

HAnimSegment186->addChildren(*Shape194);

HAnimJoint185->addChildren(*HAnimSegment186);

CHAnimJoint* HAnimJoint199 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint199->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint199->setName("l_carpometacarpal_4");
HAnimJoint199->setCenter(new float[3]{-0.1,0.2,0});
CHAnimSegment* HAnimSegment200 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment200->setDEF("hanim_l_metacarpal_4");
HAnimSegment200->setName("l_metacarpal_4");
CTransform* Transform201 = (CTransform *)(m_pScene.createNode("Transform"));
Transform201->setTranslation(new float[3]{-0.1,0.2,0});
CShape* Shape202 = (CShape *)(m_pScene.createNode("Shape"));
Shape202->setUSE("HAnimJointShape");
Transform201->addChild(*Shape202);

HAnimSegment200->addChildren(*Transform201);

CShape* Shape203 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance204 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material205 = (CMaterial *)(m_pScene.createNode("Material"));
Material205->setEmissiveColor(new float[3]{1,1,1});
Appearance204->setMaterial(*Material205);

Shape203->setAppearance(*Appearance204);

CIndexedLineSet* IndexedLineSet206 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet206->setDEF("CMC4toMCP4");
IndexedLineSet206->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate207 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate207->setPoint(new float[6]{-0.1,0.2,0,-0.1,0.47,0});
IndexedLineSet206->setCoord(*Coordinate207);

Shape203->setGeometry(IndexedLineSet206);

HAnimSegment200->addChildren(*Shape203);

HAnimJoint199->addChildren(*HAnimSegment200);

CHAnimJoint* HAnimJoint208 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint208->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint208->setName("l_metacarpophalangeal_4");
HAnimJoint208->setCenter(new float[3]{-0.1,0.47,0});
CHAnimSegment* HAnimSegment209 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment209->setDEF("hanim_l_carpal_proximal_phalanx_4");
HAnimSegment209->setName("l_carpal_proximal_phalanx_4");
CTransform* Transform210 = (CTransform *)(m_pScene.createNode("Transform"));
Transform210->setTranslation(new float[3]{-0.1,0.47,0});
CShape* Shape211 = (CShape *)(m_pScene.createNode("Shape"));
Shape211->setUSE("HAnimJointShape");
Transform210->addChild(*Shape211);

HAnimSegment209->addChildren(*Transform210);

CShape* Shape212 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance213 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material214 = (CMaterial *)(m_pScene.createNode("Material"));
Material214->setEmissiveColor(new float[3]{1,1,1});
Appearance213->setMaterial(*Material214);

Shape212->setAppearance(*Appearance213);

CIndexedLineSet* IndexedLineSet215 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet215->setDEF("MCP4toPIP4");
IndexedLineSet215->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate216 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate216->setPoint(new float[6]{-0.1,0.47,0,-0.1,0.7,0});
IndexedLineSet215->setCoord(*Coordinate216);

Shape212->setGeometry(IndexedLineSet215);

HAnimSegment209->addChildren(*Shape212);

HAnimJoint208->addChildren(*HAnimSegment209);

CHAnimJoint* HAnimJoint217 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint217->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint217->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint217->setCenter(new float[3]{-0.1,0.7,0});
CHAnimSegment* HAnimSegment218 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment218->setDEF("hanim_l_carpal_middle_phalanx_3");
HAnimSegment218->setName("l_carpal_middle_phalanx_4");
CTransform* Transform219 = (CTransform *)(m_pScene.createNode("Transform"));
Transform219->setTranslation(new float[3]{-0.1,0.7,0});
CShape* Shape220 = (CShape *)(m_pScene.createNode("Shape"));
Shape220->setUSE("HAnimJointShape");
Transform219->addChild(*Shape220);

HAnimSegment218->addChildren(*Transform219);

CShape* Shape221 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance222 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material223 = (CMaterial *)(m_pScene.createNode("Material"));
Material223->setEmissiveColor(new float[3]{1,1,1});
Appearance222->setMaterial(*Material223);

Shape221->setAppearance(*Appearance222);

CIndexedLineSet* IndexedLineSet224 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet224->setDEF("PIP4toDIP4");
IndexedLineSet224->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate225 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate225->setPoint(new float[6]{-0.1,0.7,0,-0.1,0.93,0});
IndexedLineSet224->setCoord(*Coordinate225);

Shape221->setGeometry(IndexedLineSet224);

HAnimSegment218->addChildren(*Shape221);

HAnimJoint217->addChildren(*HAnimSegment218);

CHAnimJoint* HAnimJoint226 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint226->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint226->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint226->setCenter(new float[3]{-0.1,0.93,0});
CHAnimSegment* HAnimSegment227 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment227->setDEF("hanim_l_carpal_distal_phalanx_4");
HAnimSegment227->setName("l_carpal_distal_phalanx_4");
CTransform* Transform228 = (CTransform *)(m_pScene.createNode("Transform"));
Transform228->setTranslation(new float[3]{-0.1,0.93,0});
CShape* Shape229 = (CShape *)(m_pScene.createNode("Shape"));
Shape229->setUSE("HAnimJointShape");
Transform228->addChild(*Shape229);

HAnimSegment227->addChildren(*Transform228);

CShape* Shape230 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance231 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material232 = (CMaterial *)(m_pScene.createNode("Material"));
Material232->setEmissiveColor(new float[3]{1,1,1});
Appearance231->setMaterial(*Material232);

Shape230->setAppearance(*Appearance231);

CIndexedLineSet* IndexedLineSet233 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet233->setDEF("fingertip_l_carpal_distal_interphalangeal_3");
IndexedLineSet233->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate234 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate234->setPoint(new float[6]{-0.1,0.93,0,-0.1,1,0});
IndexedLineSet233->setCoord(*Coordinate234);

Shape230->setGeometry(IndexedLineSet233);

HAnimSegment227->addChildren(*Shape230);

HAnimJoint226->addChildren(*HAnimSegment227);

HAnimJoint217->addChildren(*HAnimJoint226);

HAnimJoint208->addChildren(*HAnimJoint217);

HAnimJoint199->addChildren(*HAnimJoint208);

HAnimJoint185->addChildren(*HAnimJoint199);

CHAnimJoint* HAnimJoint235 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint235->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint235->setName("l_carpometacarpal_5");
HAnimJoint235->setCenter(new float[3]{-0.15,0.17,0});
CHAnimSegment* HAnimSegment236 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment236->setDEF("hanim_l_metacarpal_5");
HAnimSegment236->setName("l_metacarpal_5");
CTransform* Transform237 = (CTransform *)(m_pScene.createNode("Transform"));
Transform237->setTranslation(new float[3]{-0.15,0.17,0});
CShape* Shape238 = (CShape *)(m_pScene.createNode("Shape"));
Shape238->setUSE("HAnimJointShape");
Transform237->addChild(*Shape238);

HAnimSegment236->addChildren(*Transform237);

CShape* Shape239 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance240 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material241 = (CMaterial *)(m_pScene.createNode("Material"));
Material241->setEmissiveColor(new float[3]{1,1,1});
Appearance240->setMaterial(*Material241);

Shape239->setAppearance(*Appearance240);

CIndexedLineSet* IndexedLineSet242 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet242->setDEF("CMC5toMCP5");
IndexedLineSet242->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate243 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate243->setPoint(new float[6]{-0.15,0.17,0,-0.2,0.4,0});
IndexedLineSet242->setCoord(*Coordinate243);

Shape239->setGeometry(IndexedLineSet242);

HAnimSegment236->addChildren(*Shape239);

HAnimJoint235->addChildren(*HAnimSegment236);

CHAnimJoint* HAnimJoint244 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint244->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint244->setName("l_metacarpophalangeal_5");
HAnimJoint244->setCenter(new float[3]{-0.2,0.4,0});
CHAnimSegment* HAnimSegment245 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment245->setDEF("hanim_l_carpal_proximal_phalanx_5");
HAnimSegment245->setName("l_carpal_proximal_phalanx_5");
CTransform* Transform246 = (CTransform *)(m_pScene.createNode("Transform"));
Transform246->setTranslation(new float[3]{-0.2,0.4,0});
CShape* Shape247 = (CShape *)(m_pScene.createNode("Shape"));
Shape247->setUSE("HAnimJointShape");
Transform246->addChild(*Shape247);

HAnimSegment245->addChildren(*Transform246);

CShape* Shape248 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance249 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material250 = (CMaterial *)(m_pScene.createNode("Material"));
Material250->setEmissiveColor(new float[3]{1,1,1});
Appearance249->setMaterial(*Material250);

Shape248->setAppearance(*Appearance249);

CIndexedLineSet* IndexedLineSet251 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet251->setDEF("MCP5toPIP5");
IndexedLineSet251->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate252 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate252->setPoint(new float[6]{-0.2,0.4,0,-0.23,0.63,0});
IndexedLineSet251->setCoord(*Coordinate252);

Shape248->setGeometry(IndexedLineSet251);

HAnimSegment245->addChildren(*Shape248);

HAnimJoint244->addChildren(*HAnimSegment245);

CHAnimJoint* HAnimJoint253 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint253->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint253->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint253->setCenter(new float[3]{-0.23,0.63,0});
CHAnimSegment* HAnimSegment254 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment254->setDEF("hanim_l_carpal_middle_phalanx_4");
HAnimSegment254->setName("l_carpal_middle_phalanx_5");
CTransform* Transform255 = (CTransform *)(m_pScene.createNode("Transform"));
Transform255->setTranslation(new float[3]{-0.23,0.63,0});
CShape* Shape256 = (CShape *)(m_pScene.createNode("Shape"));
Shape256->setUSE("HAnimJointShape");
Transform255->addChild(*Shape256);

HAnimSegment254->addChildren(*Transform255);

CShape* Shape257 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance258 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material259 = (CMaterial *)(m_pScene.createNode("Material"));
Material259->setEmissiveColor(new float[3]{1,1,1});
Appearance258->setMaterial(*Material259);

Shape257->setAppearance(*Appearance258);

CIndexedLineSet* IndexedLineSet260 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet260->setDEF("PIP5toDIP5");
IndexedLineSet260->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate261 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate261->setPoint(new float[6]{-0.23,0.63,0,-0.25,0.79,0});
IndexedLineSet260->setCoord(*Coordinate261);

Shape257->setGeometry(IndexedLineSet260);

HAnimSegment254->addChildren(*Shape257);

HAnimJoint253->addChildren(*HAnimSegment254);

CHAnimJoint* HAnimJoint262 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint262->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint262->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint262->setCenter(new float[3]{-0.25,0.79,0});
CHAnimSegment* HAnimSegment263 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment263->setDEF("hanim_l_carpal_distal_phalanx_5");
HAnimSegment263->setName("l_carpal_distal_phalanx_5");
CTransform* Transform264 = (CTransform *)(m_pScene.createNode("Transform"));
Transform264->setTranslation(new float[3]{-0.25,0.79,0});
CShape* Shape265 = (CShape *)(m_pScene.createNode("Shape"));
Shape265->setUSE("HAnimJointShape");
Transform264->addChild(*Shape265);

HAnimSegment263->addChildren(*Transform264);

CShape* Shape266 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance267 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material268 = (CMaterial *)(m_pScene.createNode("Material"));
Material268->setEmissiveColor(new float[3]{1,1,1});
Appearance267->setMaterial(*Material268);

Shape266->setAppearance(*Appearance267);

CIndexedLineSet* IndexedLineSet269 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet269->setDEF("fingertip_l_carpal_distal_interphalangeal_4");
IndexedLineSet269->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate270 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate270->setPoint(new float[6]{-0.25,0.79,0,-0.26,0.85,0});
IndexedLineSet269->setCoord(*Coordinate270);

Shape266->setGeometry(IndexedLineSet269);

HAnimSegment263->addChildren(*Shape266);

HAnimJoint262->addChildren(*HAnimSegment263);

HAnimJoint253->addChildren(*HAnimJoint262);

HAnimJoint244->addChildren(*HAnimJoint253);

HAnimJoint235->addChildren(*HAnimJoint244);

HAnimJoint185->addChildren(*HAnimJoint235);

HAnimJoint29->addChildren(*HAnimJoint185);

HAnimJoint28->addChildren(*HAnimJoint29);

HAnimHumanoid25->setSkeleton(*HAnimJoint28);

CHAnimSegment* HAnimSegment271 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment271->setUSE("hanim_l_capitate");
HAnimHumanoid25->setSegments(*HAnimSegment271);

CHAnimSegment* HAnimSegment272 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment272->setUSE("hanim_l_carpal");
HAnimHumanoid25->setSegments(*HAnimSegment272);

CHAnimSegment* HAnimSegment273 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment273->setUSE("hanim_l_carpal_distal_phalanx_1");
HAnimHumanoid25->setSegments(*HAnimSegment273);

CHAnimSegment* HAnimSegment274 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment274->setUSE("hanim_l_carpal_distal_phalanx_2");
HAnimHumanoid25->setSegments(*HAnimSegment274);

CHAnimSegment* HAnimSegment275 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment275->setUSE("hanim_l_carpal_distal_phalanx_3");
HAnimHumanoid25->setSegments(*HAnimSegment275);

CHAnimSegment* HAnimSegment276 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment276->setUSE("hanim_l_carpal_distal_phalanx_4");
HAnimHumanoid25->setSegments(*HAnimSegment276);

CHAnimSegment* HAnimSegment277 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment277->setUSE("hanim_l_carpal_distal_phalanx_5");
HAnimHumanoid25->setSegments(*HAnimSegment277);

CHAnimSegment* HAnimSegment278 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment278->setUSE("hanim_l_carpal_middle_phalanx_1");
HAnimHumanoid25->setSegments(*HAnimSegment278);

CHAnimSegment* HAnimSegment279 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment279->setUSE("hanim_l_carpal_middle_phalanx_2");
HAnimHumanoid25->setSegments(*HAnimSegment279);

CHAnimSegment* HAnimSegment280 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment280->setUSE("hanim_l_carpal_middle_phalanx_3");
HAnimHumanoid25->setSegments(*HAnimSegment280);

CHAnimSegment* HAnimSegment281 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment281->setUSE("hanim_l_carpal_middle_phalanx_4");
HAnimHumanoid25->setSegments(*HAnimSegment281);

CHAnimSegment* HAnimSegment282 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment282->setUSE("hanim_l_carpal_proximal_phalanx_1");
HAnimHumanoid25->setSegments(*HAnimSegment282);

CHAnimSegment* HAnimSegment283 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment283->setUSE("hanim_l_carpal_proximal_phalanx_2");
HAnimHumanoid25->setSegments(*HAnimSegment283);

CHAnimSegment* HAnimSegment284 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment284->setUSE("hanim_l_carpal_proximal_phalanx_3");
HAnimHumanoid25->setSegments(*HAnimSegment284);

CHAnimSegment* HAnimSegment285 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment285->setUSE("hanim_l_carpal_proximal_phalanx_4");
HAnimHumanoid25->setSegments(*HAnimSegment285);

CHAnimSegment* HAnimSegment286 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment286->setUSE("hanim_l_carpal_proximal_phalanx_5");
HAnimHumanoid25->setSegments(*HAnimSegment286);

CHAnimSegment* HAnimSegment287 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment287->setUSE("hanim_l_hamate");
HAnimHumanoid25->setSegments(*HAnimSegment287);

CHAnimSegment* HAnimSegment288 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment288->setUSE("hanim_l_metacarpal_1");
HAnimHumanoid25->setSegments(*HAnimSegment288);

CHAnimSegment* HAnimSegment289 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment289->setUSE("hanim_l_metacarpal_2");
HAnimHumanoid25->setSegments(*HAnimSegment289);

CHAnimSegment* HAnimSegment290 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment290->setUSE("hanim_l_metacarpal_3");
HAnimHumanoid25->setSegments(*HAnimSegment290);

CHAnimSegment* HAnimSegment291 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment291->setUSE("hanim_l_metacarpal_4");
HAnimHumanoid25->setSegments(*HAnimSegment291);

CHAnimSegment* HAnimSegment292 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment292->setUSE("hanim_l_metacarpal_5");
HAnimHumanoid25->setSegments(*HAnimSegment292);

CHAnimSegment* HAnimSegment293 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment293->setUSE("hanim_l_trapezium");
HAnimHumanoid25->setSegments(*HAnimSegment293);

CHAnimSegment* HAnimSegment294 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment294->setUSE("hanim_l_trapezoid");
HAnimHumanoid25->setSegments(*HAnimSegment294);

CHAnimJoint* HAnimJoint295 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint295->setUSE("hanim_humanoid_root");
HAnimHumanoid25->addJoints(*HAnimJoint295);

CHAnimJoint* HAnimJoint296 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint296->setUSE("hanim_l_carpal_distal_interphalangeal_1");
HAnimHumanoid25->addJoints(*HAnimJoint296);

CHAnimJoint* HAnimJoint297 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint297->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid25->addJoints(*HAnimJoint297);

CHAnimJoint* HAnimJoint298 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint298->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid25->addJoints(*HAnimJoint298);

CHAnimJoint* HAnimJoint299 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint299->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid25->addJoints(*HAnimJoint299);

CHAnimJoint* HAnimJoint300 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint300->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid25->addJoints(*HAnimJoint300);

CHAnimJoint* HAnimJoint301 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint301->setUSE("hanim_l_carpal_proximal_interphalangeal_1");
HAnimHumanoid25->addJoints(*HAnimJoint301);

CHAnimJoint* HAnimJoint302 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint302->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid25->addJoints(*HAnimJoint302);

CHAnimJoint* HAnimJoint303 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint303->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid25->addJoints(*HAnimJoint303);

CHAnimJoint* HAnimJoint304 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint304->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid25->addJoints(*HAnimJoint304);

CHAnimJoint* HAnimJoint305 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint305->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid25->addJoints(*HAnimJoint305);

CHAnimJoint* HAnimJoint306 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint306->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid25->addJoints(*HAnimJoint306);

CHAnimJoint* HAnimJoint307 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint307->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid25->addJoints(*HAnimJoint307);

CHAnimJoint* HAnimJoint308 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint308->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid25->addJoints(*HAnimJoint308);

CHAnimJoint* HAnimJoint309 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint309->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid25->addJoints(*HAnimJoint309);

CHAnimJoint* HAnimJoint310 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint310->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid25->addJoints(*HAnimJoint310);

CHAnimJoint* HAnimJoint311 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint311->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid25->addJoints(*HAnimJoint311);

CHAnimJoint* HAnimJoint312 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint312->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid25->addJoints(*HAnimJoint312);

CHAnimJoint* HAnimJoint313 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint313->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid25->addJoints(*HAnimJoint313);

CHAnimJoint* HAnimJoint314 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint314->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid25->addJoints(*HAnimJoint314);

CHAnimJoint* HAnimJoint315 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint315->setUSE("hanim_l_midcarpal_1");
HAnimHumanoid25->addJoints(*HAnimJoint315);

CHAnimJoint* HAnimJoint316 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint316->setUSE("hanim_l_midcarpal_2");
HAnimHumanoid25->addJoints(*HAnimJoint316);

CHAnimJoint* HAnimJoint317 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint317->setUSE("hanim_l_midcarpal_3");
HAnimHumanoid25->addJoints(*HAnimJoint317);

CHAnimJoint* HAnimJoint318 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint318->setUSE("hanim_l_midcarpal_4_1");
HAnimHumanoid25->addJoints(*HAnimJoint318);

CHAnimJoint* HAnimJoint319 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint319->setUSE("hanim_l_radiocarpal");
HAnimHumanoid25->addJoints(*HAnimJoint319);

group->addChildren(*HAnimHumanoid25);

X3D0->setScene(*Scene23);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

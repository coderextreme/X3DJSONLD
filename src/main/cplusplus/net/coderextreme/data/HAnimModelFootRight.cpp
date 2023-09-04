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
meta2->setContent("HAnimModelFootRight.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Right foot, using high-fidelity definitions for HAnim version 2.0");
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
meta9->setName("TODO");
meta9->setContent("Update all values to match HAnim2 A.7 Level of articulation four LOA-4");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("TODO");
meta10->setContent("Add links to figures");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("TODO");
meta11->setContent("Add Viewpoints to enable inspection");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("TODO");
meta12->setContent("Integrate and confirm Segment/Joint names, Viewpoints.");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("info");
meta13->setContent("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("reference");
meta14->setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("reference");
meta15->setContent("https://www.web3d.org/documents/specifications/19774/V2.0");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("reference");
meta16->setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("reference");
meta17->setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("reference");
meta18->setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("reference");
meta19->setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("subject");
meta20->setContent("X3D HAnim humanoid animation");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("identifier");
meta21->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d");
head1->addMeta(*meta21);

Cmeta* meta22 = new Cmeta();
meta22->setName("generator");
meta22->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta22);

Ccomponent* component23 = new Ccomponent();
component23->setName("HAnim");
component23->setLevel(1);
head1->addComponent(*component23);

X3D0->setHead(*head1);

CScene* Scene24 = new CScene();
CWorldInfo* WorldInfo25 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo25->setTitle("HAnimModelFootRight.x3d");
group->addChildren(*WorldInfo25);

CHAnimHumanoid* HAnimHumanoid26 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid26->setDEF("hanim_Foot_Right");
HAnimHumanoid26->setVersion("2.0");
HAnimHumanoid26->setName("Foot_Right");
HAnimHumanoid26->setLoa(4);
CMetadataSet* MetadataSet27 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet27->setName("HAnimHumanoid.info");
MetadataSet27->setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
CMetadataString* MetadataString28 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString28->setName("authorName");
MetadataSet27->setMetadata(*MetadataString28);

HAnimHumanoid26->setMetadata(*MetadataSet27);

CHAnimJoint* HAnimJoint29 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint29->setDEF("hanim_humanoid_root");
HAnimJoint29->setName("humanoid_root");
CHAnimJoint* HAnimJoint30 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint30->setDEF("hanim_r_talocrural");
HAnimJoint30->setDescription("connection joint of foot to leg above");
HAnimJoint30->setName("r_talocrural");
CHAnimSegment* HAnimSegment31 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment31->setDEF("hanim_r_talus");
HAnimSegment31->setName("r_talus");
CTransform* Transform32 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape33 = (CShape *)(m_pScene.createNode("Shape"));
Shape33->setDEF("HAnimJointShape");
CAppearance* Appearance34 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance34->setDEF("HAnimJointAppearance");
CMaterial* Material35 = (CMaterial *)(m_pScene.createNode("Material"));
Material35->setDiffuseColor(new float[3]{0,0,1});
Appearance34->setMaterial(*Material35);

Shape33->setAppearance(*Appearance34);

CSphere* Sphere36 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere36->setRadius(0.025);
Shape33->setGeometry(Sphere36);

Transform32->addChild(*Shape33);

HAnimSegment31->addChildren(*Transform32);

CShape* Shape37 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance38 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material39 = (CMaterial *)(m_pScene.createNode("Material"));
Material39->setEmissiveColor(new float[3]{1,1,1});
Appearance38->setMaterial(*Material39);

Shape37->setAppearance(*Appearance38);

CIndexedLineSet* IndexedLineSet40 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet40->setDEF("TCtoTCN");
IndexedLineSet40->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate41 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate41->setPoint(new float[6]{0,0,0,0,-0.3,0});
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
IndexedLineSet45->setDEF("TCtoCC");
IndexedLineSet45->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate46 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate46->setPoint(new float[6]{0,0,0,-0.2,0.3,0});
IndexedLineSet45->setCoord(*Coordinate46);

Shape42->setGeometry(IndexedLineSet45);

HAnimSegment31->addChildren(*Shape42);

HAnimJoint30->addChildren(*HAnimSegment31);

CHAnimJoint* HAnimJoint47 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint47->setDEF("hanim_r_talocalcaneonavicular");
HAnimJoint47->setName("r_talocalcaneonavicular");
HAnimJoint47->setCenter(new float[3]{0,-0.3,0});
CHAnimSegment* HAnimSegment48 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment48->setDEF("hanim_r_navicular");
HAnimSegment48->setName("r_navicular");
CTransform* Transform49 = (CTransform *)(m_pScene.createNode("Transform"));
Transform49->setTranslation(new float[3]{0,-0.3,0});
CShape* Shape50 = (CShape *)(m_pScene.createNode("Shape"));
Shape50->setUSE("HAnimJointShape");
Transform49->addChild(*Shape50);

HAnimSegment48->addChildren(*Transform49);

CShape* Shape51 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance52 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material53 = (CMaterial *)(m_pScene.createNode("Material"));
Material53->setEmissiveColor(new float[3]{1,1,1});
Appearance52->setMaterial(*Material53);

Shape51->setAppearance(*Appearance52);

CIndexedLineSet* IndexedLineSet54 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet54->setDEF("TCNtoCN1");
IndexedLineSet54->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate55 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate55->setPoint(new float[6]{0,-0.3,0,0.1,-0.45,0});
IndexedLineSet54->setCoord(*Coordinate55);

Shape51->setGeometry(IndexedLineSet54);

HAnimSegment48->addChildren(*Shape51);

CShape* Shape56 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance57 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material58 = (CMaterial *)(m_pScene.createNode("Material"));
Material58->setEmissiveColor(new float[3]{1,1,1});
Appearance57->setMaterial(*Material58);

Shape56->setAppearance(*Appearance57);

CIndexedLineSet* IndexedLineSet59 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet59->setDEF("TCNtoCN2");
IndexedLineSet59->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate60 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate60->setPoint(new float[6]{0,-0.3,0,0,-0.45,0});
IndexedLineSet59->setCoord(*Coordinate60);

Shape56->setGeometry(IndexedLineSet59);

HAnimSegment48->addChildren(*Shape56);

CShape* Shape61 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance62 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material63 = (CMaterial *)(m_pScene.createNode("Material"));
Material63->setEmissiveColor(new float[3]{1,1,1});
Appearance62->setMaterial(*Material63);

Shape61->setAppearance(*Appearance62);

CIndexedLineSet* IndexedLineSet64 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet64->setDEF("TCNtoCN3");
IndexedLineSet64->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate65 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate65->setPoint(new float[6]{0,-0.3,0,-0.1,-0.4,0});
IndexedLineSet64->setCoord(*Coordinate65);

Shape61->setGeometry(IndexedLineSet64);

HAnimSegment48->addChildren(*Shape61);

HAnimJoint47->addChildren(*HAnimSegment48);

CHAnimJoint* HAnimJoint66 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint66->setDEF("hanim_r_cuneonavicular_1");
HAnimJoint66->setName("r_cuneonavicular_1");
HAnimJoint66->setCenter(new float[3]{0.1,-0.45,0});
CHAnimSegment* HAnimSegment67 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment67->setDEF("hanim_r_cuneiform_1");
HAnimSegment67->setName("r_cuneiform_1");
CTransform* Transform68 = (CTransform *)(m_pScene.createNode("Transform"));
Transform68->setTranslation(new float[3]{0.1,-0.45,0});
CShape* Shape69 = (CShape *)(m_pScene.createNode("Shape"));
Shape69->setUSE("HAnimJointShape");
Transform68->addChild(*Shape69);

HAnimSegment67->addChildren(*Transform68);

CShape* Shape70 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance71 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material72 = (CMaterial *)(m_pScene.createNode("Material"));
Material72->setEmissiveColor(new float[3]{1,1,1});
Appearance71->setMaterial(*Material72);

Shape70->setAppearance(*Appearance71);

CIndexedLineSet* IndexedLineSet73 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet73->setDEF("CN1toTMT1");
IndexedLineSet73->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate74 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate74->setPoint(new float[6]{0.1,-0.45,0,0.1,-0.6,0});
IndexedLineSet73->setCoord(*Coordinate74);

Shape70->setGeometry(IndexedLineSet73);

HAnimSegment67->addChildren(*Shape70);

HAnimJoint66->addChildren(*HAnimSegment67);

CHAnimJoint* HAnimJoint75 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint75->setDEF("hanim_r_tarsometatarsal_1");
HAnimJoint75->setName("r_tarsometatarsal_1");
HAnimJoint75->setCenter(new float[3]{0.1,-0.6,0});
CHAnimSegment* HAnimSegment76 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment76->setDEF("hanim_r_metatarsal_1");
HAnimSegment76->setName("r_metatarsal_1");
CTransform* Transform77 = (CTransform *)(m_pScene.createNode("Transform"));
Transform77->setTranslation(new float[3]{0.1,-0.6,0});
CShape* Shape78 = (CShape *)(m_pScene.createNode("Shape"));
Shape78->setUSE("HAnimJointShape");
Transform77->addChild(*Shape78);

HAnimSegment76->addChildren(*Transform77);

CShape* Shape79 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance80 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material81 = (CMaterial *)(m_pScene.createNode("Material"));
Material81->setEmissiveColor(new float[3]{1,1,1});
Appearance80->setMaterial(*Material81);

Shape79->setAppearance(*Appearance80);

CIndexedLineSet* IndexedLineSet82 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet82->setDEF("TMT1toMTP1");
IndexedLineSet82->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate83 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate83->setPoint(new float[6]{0.1,-0.6,0,0.1,-0.9,0});
IndexedLineSet82->setCoord(*Coordinate83);

Shape79->setGeometry(IndexedLineSet82);

HAnimSegment76->addChildren(*Shape79);

HAnimJoint75->addChildren(*HAnimSegment76);

CHAnimJoint* HAnimJoint84 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint84->setDEF("hanim_r_metatarsophalangeal_1");
HAnimJoint84->setName("r_metatarsophalangeal_1");
HAnimJoint84->setCenter(new float[3]{0.1,-0.9,0});
CHAnimSegment* HAnimSegment85 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment85->setDEF("hanim_r_tarsal_proximal_phalanx_1");
HAnimSegment85->setName("r_tarsal_proximal_phalanx_1");
CTransform* Transform86 = (CTransform *)(m_pScene.createNode("Transform"));
Transform86->setTranslation(new float[3]{0.1,-0.9,0});
CShape* Shape87 = (CShape *)(m_pScene.createNode("Shape"));
Shape87->setUSE("HAnimJointShape");
Transform86->addChild(*Shape87);

HAnimSegment85->addChildren(*Transform86);

CShape* Shape88 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance89 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material90 = (CMaterial *)(m_pScene.createNode("Material"));
Material90->setEmissiveColor(new float[3]{1,1,1});
Appearance89->setMaterial(*Material90);

Shape88->setAppearance(*Appearance89);

CIndexedLineSet* IndexedLineSet91 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet91->setDEF("MTP1toIP1");
IndexedLineSet91->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate92 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate92->setPoint(new float[6]{0.1,-0.9,0,0.1,-1.05,0});
IndexedLineSet91->setCoord(*Coordinate92);

Shape88->setGeometry(IndexedLineSet91);

HAnimSegment85->addChildren(*Shape88);

HAnimJoint84->addChildren(*HAnimSegment85);

CHAnimJoint* HAnimJoint93 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint93->setDEF("hanim_r_tarsal_interphalangeal_1");
HAnimJoint93->setName("r_tarsal_interphalangeal_1");
HAnimJoint93->setCenter(new float[3]{0.1,-1.05,0});
CHAnimSegment* HAnimSegment94 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment94->setDEF("hanim_r_tarsal_distal_phalanx_1");
HAnimSegment94->setName("r_tarsal_distal_phalanx_1");
CTransform* Transform95 = (CTransform *)(m_pScene.createNode("Transform"));
Transform95->setTranslation(new float[3]{0.1,-1.05,0});
CShape* Shape96 = (CShape *)(m_pScene.createNode("Shape"));
Shape96->setUSE("HAnimJointShape");
Transform95->addChild(*Shape96);

HAnimSegment94->addChildren(*Transform95);

CShape* Shape97 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance98 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material99 = (CMaterial *)(m_pScene.createNode("Material"));
Material99->setEmissiveColor(new float[3]{1,1,1});
Appearance98->setMaterial(*Material99);

Shape97->setAppearance(*Appearance98);

CIndexedLineSet* IndexedLineSet100 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet100->setDEF("tiptoe_r_interphalangeal_");
IndexedLineSet100->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate101 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate101->setPoint(new float[6]{0.1,-1.05,0,0.1,-1.1,0});
IndexedLineSet100->setCoord(*Coordinate101);

Shape97->setGeometry(IndexedLineSet100);

HAnimSegment94->addChildren(*Shape97);

HAnimJoint93->addChildren(*HAnimSegment94);

HAnimJoint84->addChildren(*HAnimJoint93);

HAnimJoint75->addChildren(*HAnimJoint84);

HAnimJoint66->addChildren(*HAnimJoint75);

HAnimJoint47->addChildren(*HAnimJoint66);

CHAnimJoint* HAnimJoint102 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint102->setDEF("hanim_r_cuneonavicular_2");
HAnimJoint102->setName("r_cuneonavicular_2");
HAnimJoint102->setCenter(new float[3]{0,-0.45,0});
CHAnimSegment* HAnimSegment103 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment103->setDEF("hanim_r_cuneiform_2");
HAnimSegment103->setName("r_cuneiform_2");
CTransform* Transform104 = (CTransform *)(m_pScene.createNode("Transform"));
Transform104->setTranslation(new float[3]{0,-0.45,0});
CShape* Shape105 = (CShape *)(m_pScene.createNode("Shape"));
Shape105->setUSE("HAnimJointShape");
Transform104->addChild(*Shape105);

HAnimSegment103->addChildren(*Transform104);

CShape* Shape106 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance107 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material108 = (CMaterial *)(m_pScene.createNode("Material"));
Material108->setEmissiveColor(new float[3]{1,1,1});
Appearance107->setMaterial(*Material108);

Shape106->setAppearance(*Appearance107);

CIndexedLineSet* IndexedLineSet109 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet109->setDEF("CN2toTMT2");
IndexedLineSet109->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate110 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate110->setPoint(new float[6]{0,-0.45,0,-0.05,-0.6,0});
IndexedLineSet109->setCoord(*Coordinate110);

Shape106->setGeometry(IndexedLineSet109);

HAnimSegment103->addChildren(*Shape106);

HAnimJoint102->addChildren(*HAnimSegment103);

CHAnimJoint* HAnimJoint111 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint111->setDEF("hanim_r_tarsometatarsal_2");
HAnimJoint111->setName("r_tarsometatarsal_2");
HAnimJoint111->setCenter(new float[3]{-0.05,-0.6,0});
CHAnimSegment* HAnimSegment112 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment112->setDEF("hanim_r_metatarsal_2");
HAnimSegment112->setName("r_metatarsal_2");
CTransform* Transform113 = (CTransform *)(m_pScene.createNode("Transform"));
Transform113->setTranslation(new float[3]{-0.05,-0.6,0});
CShape* Shape114 = (CShape *)(m_pScene.createNode("Shape"));
Shape114->setUSE("HAnimJointShape");
Transform113->addChild(*Shape114);

HAnimSegment112->addChildren(*Transform113);

CShape* Shape115 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance116 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material117 = (CMaterial *)(m_pScene.createNode("Material"));
Material117->setEmissiveColor(new float[3]{1,1,1});
Appearance116->setMaterial(*Material117);

Shape115->setAppearance(*Appearance116);

CIndexedLineSet* IndexedLineSet118 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet118->setDEF("TMT2toMTP2");
IndexedLineSet118->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate119 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate119->setPoint(new float[6]{-0.05,-0.6,0,-0.05,-0.9,0});
IndexedLineSet118->setCoord(*Coordinate119);

Shape115->setGeometry(IndexedLineSet118);

HAnimSegment112->addChildren(*Shape115);

HAnimJoint111->addChildren(*HAnimSegment112);

CHAnimJoint* HAnimJoint120 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint120->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint120->setName("r_metatarsophalangeal_2");
HAnimJoint120->setCenter(new float[3]{-0.05,-0.9,0});
CHAnimSegment* HAnimSegment121 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment121->setDEF("hanim_r_tarsal_proximal_phalanx_2");
HAnimSegment121->setName("r_tarsal_proximal_phalanx_2");
CTransform* Transform122 = (CTransform *)(m_pScene.createNode("Transform"));
Transform122->setTranslation(new float[3]{-0.05,-0.9,0});
CShape* Shape123 = (CShape *)(m_pScene.createNode("Shape"));
Shape123->setUSE("HAnimJointShape");
Transform122->addChild(*Shape123);

HAnimSegment121->addChildren(*Transform122);

CShape* Shape124 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance125 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material126 = (CMaterial *)(m_pScene.createNode("Material"));
Material126->setEmissiveColor(new float[3]{1,1,1});
Appearance125->setMaterial(*Material126);

Shape124->setAppearance(*Appearance125);

CIndexedLineSet* IndexedLineSet127 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet127->setDEF("MTP2toPIP2");
IndexedLineSet127->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate128 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate128->setPoint(new float[6]{-0.05,-0.9,0,-0.05,-1.05,0});
IndexedLineSet127->setCoord(*Coordinate128);

Shape124->setGeometry(IndexedLineSet127);

HAnimSegment121->addChildren(*Shape124);

HAnimJoint120->addChildren(*HAnimSegment121);

CHAnimJoint* HAnimJoint129 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint129->setDEF("hanim_r_tarsal_proximal_interphalangeal_1");
HAnimJoint129->setName("r_tarsal_proximal_interphalangeal_2");
HAnimJoint129->setCenter(new float[3]{-0.05,-1.05,0});
CHAnimSegment* HAnimSegment130 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment130->setDEF("hanim_r_tarsal_middle_phalanx_1");
HAnimSegment130->setName("r_tarsal_middle_phalanx_2");
CTransform* Transform131 = (CTransform *)(m_pScene.createNode("Transform"));
Transform131->setTranslation(new float[3]{-0.05,-1.05,0});
CShape* Shape132 = (CShape *)(m_pScene.createNode("Shape"));
Shape132->setUSE("HAnimJointShape");
Transform131->addChild(*Shape132);

HAnimSegment130->addChildren(*Transform131);

CShape* Shape133 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance134 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material135 = (CMaterial *)(m_pScene.createNode("Material"));
Material135->setEmissiveColor(new float[3]{1,1,1});
Appearance134->setMaterial(*Material135);

Shape133->setAppearance(*Appearance134);

CIndexedLineSet* IndexedLineSet136 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet136->setDEF("PIP2toDIP2");
IndexedLineSet136->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate137 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate137->setPoint(new float[6]{-0.05,-1.05,0,-0.05,-1.12,0});
IndexedLineSet136->setCoord(*Coordinate137);

Shape133->setGeometry(IndexedLineSet136);

HAnimSegment130->addChildren(*Shape133);

HAnimJoint129->addChildren(*HAnimSegment130);

CHAnimJoint* HAnimJoint138 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint138->setDEF("hanim_r_tarsal_distal_interphalangeal_1");
HAnimJoint138->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint138->setCenter(new float[3]{-0.05,-1.12,0});
CHAnimSegment* HAnimSegment139 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment139->setDEF("hanim_r_tarsal_distal_phalanx_2");
HAnimSegment139->setName("r_tarsal_distal_phalanx_2");
CTransform* Transform140 = (CTransform *)(m_pScene.createNode("Transform"));
Transform140->setTranslation(new float[3]{-0.05,-1.12,0});
CShape* Shape141 = (CShape *)(m_pScene.createNode("Shape"));
Shape141->setUSE("HAnimJointShape");
Transform140->addChild(*Shape141);

HAnimSegment139->addChildren(*Transform140);

CShape* Shape142 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance143 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material144 = (CMaterial *)(m_pScene.createNode("Material"));
Material144->setEmissiveColor(new float[3]{1,1,1});
Appearance143->setMaterial(*Material144);

Shape142->setAppearance(*Appearance143);

CIndexedLineSet* IndexedLineSet145 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet145->setDEF("tiptoe_r_tarsal_distal_interphalangeal_1");
IndexedLineSet145->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate146 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate146->setPoint(new float[6]{-0.05,-1.12,0,-0.05,-1.16,0});
IndexedLineSet145->setCoord(*Coordinate146);

Shape142->setGeometry(IndexedLineSet145);

HAnimSegment139->addChildren(*Shape142);

HAnimJoint138->addChildren(*HAnimSegment139);

HAnimJoint129->addChildren(*HAnimJoint138);

HAnimJoint120->addChildren(*HAnimJoint129);

HAnimJoint111->addChildren(*HAnimJoint120);

HAnimJoint102->addChildren(*HAnimJoint111);

HAnimJoint47->addChildren(*HAnimJoint102);

CHAnimJoint* HAnimJoint147 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint147->setDEF("hanim_r_cuneonavicular_3");
HAnimJoint147->setName("r_cuneonavicular_3");
HAnimJoint147->setCenter(new float[3]{-0.1,-0.4,0});
CHAnimSegment* HAnimSegment148 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment148->setDEF("hanim_r_cuneiform_3");
HAnimSegment148->setName("r_cuneiform_3");
CTransform* Transform149 = (CTransform *)(m_pScene.createNode("Transform"));
Transform149->setTranslation(new float[3]{-0.1,-0.4,0});
CShape* Shape150 = (CShape *)(m_pScene.createNode("Shape"));
Shape150->setUSE("HAnimJointShape");
Transform149->addChild(*Shape150);

HAnimSegment148->addChildren(*Transform149);

CShape* Shape151 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance152 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material153 = (CMaterial *)(m_pScene.createNode("Material"));
Material153->setEmissiveColor(new float[3]{1,1,1});
Appearance152->setMaterial(*Material153);

Shape151->setAppearance(*Appearance152);

CIndexedLineSet* IndexedLineSet154 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet154->setDEF("CN3toTMT3");
IndexedLineSet154->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate155 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate155->setPoint(new float[6]{-0.1,-0.4,0,-0.15,-0.6,0});
IndexedLineSet154->setCoord(*Coordinate155);

Shape151->setGeometry(IndexedLineSet154);

HAnimSegment148->addChildren(*Shape151);

HAnimJoint147->addChildren(*HAnimSegment148);

CHAnimJoint* HAnimJoint156 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint156->setDEF("hanim_r_tarsometatarsal_3");
HAnimJoint156->setName("r_tarsometatarsal_3");
HAnimJoint156->setCenter(new float[3]{-0.15,-0.6,0});
CHAnimSegment* HAnimSegment157 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment157->setDEF("hanim_r_metatarsal_3");
HAnimSegment157->setName("r_metatarsal_3");
CTransform* Transform158 = (CTransform *)(m_pScene.createNode("Transform"));
Transform158->setTranslation(new float[3]{-0.15,-0.6,0});
CShape* Shape159 = (CShape *)(m_pScene.createNode("Shape"));
Shape159->setUSE("HAnimJointShape");
Transform158->addChild(*Shape159);

HAnimSegment157->addChildren(*Transform158);

CShape* Shape160 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance161 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material162 = (CMaterial *)(m_pScene.createNode("Material"));
Material162->setEmissiveColor(new float[3]{1,1,1});
Appearance161->setMaterial(*Material162);

Shape160->setAppearance(*Appearance161);

CIndexedLineSet* IndexedLineSet163 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet163->setDEF("TMT3toMTP3");
IndexedLineSet163->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate164 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate164->setPoint(new float[6]{-0.15,-0.6,0,-0.15,-0.9,0});
IndexedLineSet163->setCoord(*Coordinate164);

Shape160->setGeometry(IndexedLineSet163);

HAnimSegment157->addChildren(*Shape160);

HAnimJoint156->addChildren(*HAnimSegment157);

CHAnimJoint* HAnimJoint165 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint165->setDEF("hanim_r_metatarsophalangeal_3");
HAnimJoint165->setName("r_metatarsophalangeal_3");
HAnimJoint165->setCenter(new float[3]{-0.15,-0.9,0});
CHAnimSegment* HAnimSegment166 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment166->setDEF("hanim_r_tarsal_proximal_phalanx_3");
HAnimSegment166->setName("r_tarsal_proximal_phalanx_3");
CTransform* Transform167 = (CTransform *)(m_pScene.createNode("Transform"));
Transform167->setTranslation(new float[3]{-0.15,-0.9,0});
CShape* Shape168 = (CShape *)(m_pScene.createNode("Shape"));
Shape168->setUSE("HAnimJointShape");
Transform167->addChild(*Shape168);

HAnimSegment166->addChildren(*Transform167);

CShape* Shape169 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance170 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material171 = (CMaterial *)(m_pScene.createNode("Material"));
Material171->setEmissiveColor(new float[3]{1,1,1});
Appearance170->setMaterial(*Material171);

Shape169->setAppearance(*Appearance170);

CIndexedLineSet* IndexedLineSet172 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet172->setDEF("MTP3toPIP3");
IndexedLineSet172->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate173 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate173->setPoint(new float[6]{-0.15,-0.9,0,-0.15,-1.05,0});
IndexedLineSet172->setCoord(*Coordinate173);

Shape169->setGeometry(IndexedLineSet172);

HAnimSegment166->addChildren(*Shape169);

HAnimJoint165->addChildren(*HAnimSegment166);

CHAnimJoint* HAnimJoint174 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint174->setDEF("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimJoint174->setName("r_tarsal_proximal_interphalangeal_3");
HAnimJoint174->setCenter(new float[3]{-0.15,-1.05,0});
CHAnimSegment* HAnimSegment175 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment175->setDEF("hanim_r_tarsal_middle_phalanx_2");
HAnimSegment175->setName("r_tarsal_middle_phalanx_3");
CTransform* Transform176 = (CTransform *)(m_pScene.createNode("Transform"));
Transform176->setTranslation(new float[3]{-0.15,-1.05,0});
CShape* Shape177 = (CShape *)(m_pScene.createNode("Shape"));
Shape177->setUSE("HAnimJointShape");
Transform176->addChild(*Shape177);

HAnimSegment175->addChildren(*Transform176);

CShape* Shape178 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance179 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material180 = (CMaterial *)(m_pScene.createNode("Material"));
Material180->setEmissiveColor(new float[3]{1,1,1});
Appearance179->setMaterial(*Material180);

Shape178->setAppearance(*Appearance179);

CIndexedLineSet* IndexedLineSet181 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet181->setDEF("PIP3toDIP3");
IndexedLineSet181->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate182 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate182->setPoint(new float[6]{-0.15,-1.05,0,-0.15,-1.13,0});
IndexedLineSet181->setCoord(*Coordinate182);

Shape178->setGeometry(IndexedLineSet181);

HAnimSegment175->addChildren(*Shape178);

HAnimJoint174->addChildren(*HAnimSegment175);

CHAnimJoint* HAnimJoint183 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint183->setDEF("hanim_r_tarsal_distal_interphalangeal_2");
HAnimJoint183->setName("r_tarsal_distal_interphalangeal_3");
HAnimJoint183->setCenter(new float[3]{-0.15,-1.13,0});
CHAnimSegment* HAnimSegment184 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment184->setDEF("hanim_r_tarsal_distal_phalanx_3");
HAnimSegment184->setName("r_tarsal_distal_phalanx_3");
CTransform* Transform185 = (CTransform *)(m_pScene.createNode("Transform"));
Transform185->setTranslation(new float[3]{-0.15,-1.13,0});
CShape* Shape186 = (CShape *)(m_pScene.createNode("Shape"));
Shape186->setUSE("HAnimJointShape");
Transform185->addChild(*Shape186);

HAnimSegment184->addChildren(*Transform185);

CShape* Shape187 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance188 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material189 = (CMaterial *)(m_pScene.createNode("Material"));
Material189->setEmissiveColor(new float[3]{1,1,1});
Appearance188->setMaterial(*Material189);

Shape187->setAppearance(*Appearance188);

CIndexedLineSet* IndexedLineSet190 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet190->setDEF("tiptoe_r_tarsal_distal_interphalangeal_2");
IndexedLineSet190->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate191 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate191->setPoint(new float[6]{-0.15,-1.13,0,-0.15,-1.16,0});
IndexedLineSet190->setCoord(*Coordinate191);

Shape187->setGeometry(IndexedLineSet190);

HAnimSegment184->addChildren(*Shape187);

HAnimJoint183->addChildren(*HAnimSegment184);

HAnimJoint174->addChildren(*HAnimJoint183);

HAnimJoint165->addChildren(*HAnimJoint174);

HAnimJoint156->addChildren(*HAnimJoint165);

HAnimJoint147->addChildren(*HAnimJoint156);

HAnimJoint47->addChildren(*HAnimJoint147);

HAnimJoint30->addChildren(*HAnimJoint47);

CHAnimJoint* HAnimJoint192 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint192->setDEF("hanim_r_calcaneocuboid");
HAnimJoint192->setName("r_calcaneocuboid");
HAnimJoint192->setCenter(new float[3]{-0.2,0.3,0});
CHAnimSegment* HAnimSegment193 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment193->setDEF("hanim_r_calcaneus");
HAnimSegment193->setName("r_calcaneus");
CTransform* Transform194 = (CTransform *)(m_pScene.createNode("Transform"));
Transform194->setTranslation(new float[3]{-0.2,0.3,0});
CShape* Shape195 = (CShape *)(m_pScene.createNode("Shape"));
Shape195->setUSE("HAnimJointShape");
Transform194->addChild(*Shape195);

HAnimSegment193->addChildren(*Transform194);

CShape* Shape196 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance197 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material198 = (CMaterial *)(m_pScene.createNode("Material"));
Material198->setEmissiveColor(new float[3]{1,1,1});
Appearance197->setMaterial(*Material198);

Shape196->setAppearance(*Appearance197);

CIndexedLineSet* IndexedLineSet199 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet199->setDEF("CCtoTT");
IndexedLineSet199->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate200 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate200->setPoint(new float[6]{-0.2,0.3,0,-0.21,-0.3,0});
IndexedLineSet199->setCoord(*Coordinate200);

Shape196->setGeometry(IndexedLineSet199);

HAnimSegment193->addChildren(*Shape196);

HAnimJoint192->addChildren(*HAnimSegment193);

CHAnimJoint* HAnimJoint201 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint201->setDEF("hanim_r_transversetarsal");
HAnimJoint201->setName("r_transversetarsal");
HAnimJoint201->setCenter(new float[3]{-0.21,-0.3,0});
CHAnimSegment* HAnimSegment202 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment202->setDEF("hanim_r_cuboid");
HAnimSegment202->setName("r_cuboid");
CTransform* Transform203 = (CTransform *)(m_pScene.createNode("Transform"));
Transform203->setTranslation(new float[3]{-0.21,-0.3,0});
CShape* Shape204 = (CShape *)(m_pScene.createNode("Shape"));
Shape204->setUSE("HAnimJointShape");
Transform203->addChild(*Shape204);

HAnimSegment202->addChildren(*Transform203);

CShape* Shape205 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance206 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material207 = (CMaterial *)(m_pScene.createNode("Material"));
Material207->setEmissiveColor(new float[3]{1,1,1});
Appearance206->setMaterial(*Material207);

Shape205->setAppearance(*Appearance206);

CIndexedLineSet* IndexedLineSet208 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet208->setDEF("TTtoTMT4");
IndexedLineSet208->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate209 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate209->setPoint(new float[6]{-0.21,-0.3,0,-0.25,-0.58,0});
IndexedLineSet208->setCoord(*Coordinate209);

Shape205->setGeometry(IndexedLineSet208);

HAnimSegment202->addChildren(*Shape205);

CShape* Shape210 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance211 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material212 = (CMaterial *)(m_pScene.createNode("Material"));
Material212->setEmissiveColor(new float[3]{1,1,1});
Appearance211->setMaterial(*Material212);

Shape210->setAppearance(*Appearance211);

CIndexedLineSet* IndexedLineSet213 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet213->setDEF("TTtoTMT5");
IndexedLineSet213->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate214 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate214->setPoint(new float[6]{-0.21,-0.3,0,-0.33,-0.52,0});
IndexedLineSet213->setCoord(*Coordinate214);

Shape210->setGeometry(IndexedLineSet213);

HAnimSegment202->addChildren(*Shape210);

HAnimJoint201->addChildren(*HAnimSegment202);

CHAnimJoint* HAnimJoint215 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint215->setDEF("hanim_r_tarsometatarsal_4");
HAnimJoint215->setName("r_tarsometatarsal_4");
HAnimJoint215->setCenter(new float[3]{-0.25,-0.58,0});
CHAnimSegment* HAnimSegment216 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment216->setDEF("hanim_r_metatarsal_4");
HAnimSegment216->setName("r_metatarsal_4");
CTransform* Transform217 = (CTransform *)(m_pScene.createNode("Transform"));
Transform217->setTranslation(new float[3]{-0.25,-0.58,0});
CShape* Shape218 = (CShape *)(m_pScene.createNode("Shape"));
Shape218->setUSE("HAnimJointShape");
Transform217->addChild(*Shape218);

HAnimSegment216->addChildren(*Transform217);

CShape* Shape219 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance220 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material221 = (CMaterial *)(m_pScene.createNode("Material"));
Material221->setEmissiveColor(new float[3]{1,1,1});
Appearance220->setMaterial(*Material221);

Shape219->setAppearance(*Appearance220);

CIndexedLineSet* IndexedLineSet222 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet222->setDEF("TMT4toMTP4");
IndexedLineSet222->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate223 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate223->setPoint(new float[6]{-0.25,-0.58,0,-0.25,-0.87,0});
IndexedLineSet222->setCoord(*Coordinate223);

Shape219->setGeometry(IndexedLineSet222);

HAnimSegment216->addChildren(*Shape219);

HAnimJoint215->addChildren(*HAnimSegment216);

CHAnimJoint* HAnimJoint224 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint224->setDEF("hanim_r_metatarsophalangeal_4");
HAnimJoint224->setName("r_metatarsophalangeal_4");
HAnimJoint224->setCenter(new float[3]{-0.25,-0.87,0});
CHAnimSegment* HAnimSegment225 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment225->setDEF("hanim_r_tarsal_proximal_phalanx_4");
HAnimSegment225->setName("r_tarsal_proximal_phalanx_4");
CTransform* Transform226 = (CTransform *)(m_pScene.createNode("Transform"));
Transform226->setTranslation(new float[3]{-0.25,-0.87,0});
CShape* Shape227 = (CShape *)(m_pScene.createNode("Shape"));
Shape227->setUSE("HAnimJointShape");
Transform226->addChild(*Shape227);

HAnimSegment225->addChildren(*Transform226);

CShape* Shape228 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance229 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material230 = (CMaterial *)(m_pScene.createNode("Material"));
Material230->setEmissiveColor(new float[3]{1,1,1});
Appearance229->setMaterial(*Material230);

Shape228->setAppearance(*Appearance229);

CIndexedLineSet* IndexedLineSet231 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet231->setDEF("MTP4toPIP4");
IndexedLineSet231->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate232 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate232->setPoint(new float[6]{-0.25,-0.87,0,-0.25,-1,0});
IndexedLineSet231->setCoord(*Coordinate232);

Shape228->setGeometry(IndexedLineSet231);

HAnimSegment225->addChildren(*Shape228);

HAnimJoint224->addChildren(*HAnimSegment225);

CHAnimJoint* HAnimJoint233 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint233->setDEF("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimJoint233->setName("r_tarsal_proximal_interphalangeal_4");
HAnimJoint233->setCenter(new float[3]{-0.25,-1,0});
CHAnimSegment* HAnimSegment234 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment234->setDEF("hanim_r_tarsal_middle_phalanx_3");
HAnimSegment234->setName("r_tarsal_middle_phalanx_4");
CTransform* Transform235 = (CTransform *)(m_pScene.createNode("Transform"));
Transform235->setTranslation(new float[3]{-0.25,-1,0});
CShape* Shape236 = (CShape *)(m_pScene.createNode("Shape"));
Shape236->setUSE("HAnimJointShape");
Transform235->addChild(*Shape236);

HAnimSegment234->addChildren(*Transform235);

CShape* Shape237 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance238 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material239 = (CMaterial *)(m_pScene.createNode("Material"));
Material239->setEmissiveColor(new float[3]{1,1,1});
Appearance238->setMaterial(*Material239);

Shape237->setAppearance(*Appearance238);

CIndexedLineSet* IndexedLineSet240 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet240->setDEF("PIP4toDIP4");
IndexedLineSet240->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate241 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate241->setPoint(new float[6]{-0.25,-1,0,-0.25,-1.1,0});
IndexedLineSet240->setCoord(*Coordinate241);

Shape237->setGeometry(IndexedLineSet240);

HAnimSegment234->addChildren(*Shape237);

HAnimJoint233->addChildren(*HAnimSegment234);

CHAnimJoint* HAnimJoint242 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint242->setDEF("hanim_r_tarsal_distal_interphalangeal_3");
HAnimJoint242->setName("r_tarsal_distal_interphalangeal_4");
HAnimJoint242->setCenter(new float[3]{-0.25,-1.1,0});
CHAnimSegment* HAnimSegment243 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment243->setDEF("hanim_r_tarsal_distal_phalanx_4");
HAnimSegment243->setName("r_tarsal_distal_phalanx_4");
CTransform* Transform244 = (CTransform *)(m_pScene.createNode("Transform"));
Transform244->setTranslation(new float[3]{-0.25,-1.1,0});
CShape* Shape245 = (CShape *)(m_pScene.createNode("Shape"));
Shape245->setUSE("HAnimJointShape");
Transform244->addChild(*Shape245);

HAnimSegment243->addChildren(*Transform244);

CShape* Shape246 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance247 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material248 = (CMaterial *)(m_pScene.createNode("Material"));
Material248->setEmissiveColor(new float[3]{1,1,1});
Appearance247->setMaterial(*Material248);

Shape246->setAppearance(*Appearance247);

CIndexedLineSet* IndexedLineSet249 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet249->setDEF("tiptoe_r_tarsal_distal_interphalangeal_3");
IndexedLineSet249->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate250 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate250->setPoint(new float[6]{-0.25,-1.1,0,-0.25,-1.15,0});
IndexedLineSet249->setCoord(*Coordinate250);

Shape246->setGeometry(IndexedLineSet249);

HAnimSegment243->addChildren(*Shape246);

HAnimJoint242->addChildren(*HAnimSegment243);

HAnimJoint233->addChildren(*HAnimJoint242);

HAnimJoint224->addChildren(*HAnimJoint233);

HAnimJoint215->addChildren(*HAnimJoint224);

HAnimJoint201->addChildren(*HAnimJoint215);

CHAnimJoint* HAnimJoint251 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint251->setDEF("hanim_r_tarsometatarsal_5");
HAnimJoint251->setName("r_tarsometatarsal_5");
HAnimJoint251->setCenter(new float[3]{-0.33,-0.52,0});
CHAnimSegment* HAnimSegment252 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment252->setDEF("hanim_r_metatarsal_5");
HAnimSegment252->setName("r_metatarsal_5");
CTransform* Transform253 = (CTransform *)(m_pScene.createNode("Transform"));
Transform253->setTranslation(new float[3]{-0.33,-0.52,0});
CShape* Shape254 = (CShape *)(m_pScene.createNode("Shape"));
Shape254->setUSE("HAnimJointShape");
Transform253->addChild(*Shape254);

HAnimSegment252->addChildren(*Transform253);

CShape* Shape255 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance256 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material257 = (CMaterial *)(m_pScene.createNode("Material"));
Material257->setEmissiveColor(new float[3]{1,1,1});
Appearance256->setMaterial(*Material257);

Shape255->setAppearance(*Appearance256);

CIndexedLineSet* IndexedLineSet258 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet258->setDEF("TMT5toMTP5");
IndexedLineSet258->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate259 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate259->setPoint(new float[6]{-0.33,-0.52,0,-0.34,-0.8,0});
IndexedLineSet258->setCoord(*Coordinate259);

Shape255->setGeometry(IndexedLineSet258);

HAnimSegment252->addChildren(*Shape255);

HAnimJoint251->addChildren(*HAnimSegment252);

CHAnimJoint* HAnimJoint260 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint260->setDEF("hanim_r_metatarsophalangeal_5");
HAnimJoint260->setName("r_metatarsophalangeal_5");
HAnimJoint260->setCenter(new float[3]{-0.34,-0.8,0});
CHAnimSegment* HAnimSegment261 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment261->setDEF("hanim_r_tarsal_proximal_phalanx_5");
HAnimSegment261->setName("r_tarsal_proximal_phalanx_5");
CTransform* Transform262 = (CTransform *)(m_pScene.createNode("Transform"));
Transform262->setTranslation(new float[3]{-0.34,-0.8,0});
CShape* Shape263 = (CShape *)(m_pScene.createNode("Shape"));
Shape263->setUSE("HAnimJointShape");
Transform262->addChild(*Shape263);

HAnimSegment261->addChildren(*Transform262);

CShape* Shape264 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance265 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material266 = (CMaterial *)(m_pScene.createNode("Material"));
Material266->setEmissiveColor(new float[3]{1,1,1});
Appearance265->setMaterial(*Material266);

Shape264->setAppearance(*Appearance265);

CIndexedLineSet* IndexedLineSet267 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet267->setDEF("MTP5toPIP5");
IndexedLineSet267->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate268 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate268->setPoint(new float[6]{-0.34,-0.8,0,-0.34,-0.95,0});
IndexedLineSet267->setCoord(*Coordinate268);

Shape264->setGeometry(IndexedLineSet267);

HAnimSegment261->addChildren(*Shape264);

HAnimJoint260->addChildren(*HAnimSegment261);

CHAnimJoint* HAnimJoint269 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint269->setDEF("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimJoint269->setName("r_tarsal_proximal_interphalangeal_5");
HAnimJoint269->setCenter(new float[3]{-0.34,-0.95,0});
CHAnimSegment* HAnimSegment270 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment270->setDEF("hanim_r_tarsal_middle_phalanx_4");
HAnimSegment270->setName("r_tarsal_middle_phalanx_5");
CTransform* Transform271 = (CTransform *)(m_pScene.createNode("Transform"));
Transform271->setTranslation(new float[3]{-0.34,-0.95,0});
CShape* Shape272 = (CShape *)(m_pScene.createNode("Shape"));
Shape272->setUSE("HAnimJointShape");
Transform271->addChild(*Shape272);

HAnimSegment270->addChildren(*Transform271);

CShape* Shape273 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance274 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material275 = (CMaterial *)(m_pScene.createNode("Material"));
Material275->setEmissiveColor(new float[3]{1,1,1});
Appearance274->setMaterial(*Material275);

Shape273->setAppearance(*Appearance274);

CIndexedLineSet* IndexedLineSet276 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet276->setDEF("PIP5toDIP5");
IndexedLineSet276->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate277 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate277->setPoint(new float[6]{-0.34,-0.95,0,-0.34,-1.05,0});
IndexedLineSet276->setCoord(*Coordinate277);

Shape273->setGeometry(IndexedLineSet276);

HAnimSegment270->addChildren(*Shape273);

HAnimJoint269->addChildren(*HAnimSegment270);

CHAnimJoint* HAnimJoint278 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint278->setDEF("hanim_r_tarsal_distal_interphalangeal_4");
HAnimJoint278->setName("r_tarsal_distal_interphalangeal_5");
HAnimJoint278->setCenter(new float[3]{-0.34,-1.05,0});
CHAnimSegment* HAnimSegment279 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment279->setDEF("hanim_r_tarsal_distal_phalanx_5");
HAnimSegment279->setName("r_tarsal_distal_phalanx_5");
CTransform* Transform280 = (CTransform *)(m_pScene.createNode("Transform"));
Transform280->setTranslation(new float[3]{-0.34,-1.05,0});
CShape* Shape281 = (CShape *)(m_pScene.createNode("Shape"));
Shape281->setUSE("HAnimJointShape");
Transform280->addChild(*Shape281);

HAnimSegment279->addChildren(*Transform280);

CShape* Shape282 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance283 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material284 = (CMaterial *)(m_pScene.createNode("Material"));
Material284->setEmissiveColor(new float[3]{1,1,1});
Appearance283->setMaterial(*Material284);

Shape282->setAppearance(*Appearance283);

CIndexedLineSet* IndexedLineSet285 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet285->setDEF("tiptoe_r_tarsal_distal_interphalangeal_4");
IndexedLineSet285->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate286 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate286->setPoint(new float[6]{-0.34,-1.05,0,-0.34,-1.08,0});
IndexedLineSet285->setCoord(*Coordinate286);

Shape282->setGeometry(IndexedLineSet285);

HAnimSegment279->addChildren(*Shape282);

HAnimJoint278->addChildren(*HAnimSegment279);

HAnimJoint269->addChildren(*HAnimJoint278);

HAnimJoint260->addChildren(*HAnimJoint269);

HAnimJoint251->addChildren(*HAnimJoint260);

HAnimJoint201->addChildren(*HAnimJoint251);

HAnimJoint192->addChildren(*HAnimJoint201);

HAnimJoint30->addChildren(*HAnimJoint192);

HAnimJoint29->addChildren(*HAnimJoint30);

HAnimHumanoid26->setSkeleton(*HAnimJoint29);

CHAnimSegment* HAnimSegment287 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment287->setUSE("hanim_r_calcaneus");
HAnimHumanoid26->setSegments(*HAnimSegment287);

CHAnimSegment* HAnimSegment288 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment288->setUSE("hanim_r_cuboid");
HAnimHumanoid26->setSegments(*HAnimSegment288);

CHAnimSegment* HAnimSegment289 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment289->setUSE("hanim_r_cuneiform_1");
HAnimHumanoid26->setSegments(*HAnimSegment289);

CHAnimSegment* HAnimSegment290 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment290->setUSE("hanim_r_cuneiform_2");
HAnimHumanoid26->setSegments(*HAnimSegment290);

CHAnimSegment* HAnimSegment291 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment291->setUSE("hanim_r_cuneiform_3");
HAnimHumanoid26->setSegments(*HAnimSegment291);

CHAnimSegment* HAnimSegment292 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment292->setUSE("hanim_r_metatarsal_1");
HAnimHumanoid26->setSegments(*HAnimSegment292);

CHAnimSegment* HAnimSegment293 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment293->setUSE("hanim_r_metatarsal_2");
HAnimHumanoid26->setSegments(*HAnimSegment293);

CHAnimSegment* HAnimSegment294 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment294->setUSE("hanim_r_metatarsal_3");
HAnimHumanoid26->setSegments(*HAnimSegment294);

CHAnimSegment* HAnimSegment295 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment295->setUSE("hanim_r_metatarsal_4");
HAnimHumanoid26->setSegments(*HAnimSegment295);

CHAnimSegment* HAnimSegment296 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment296->setUSE("hanim_r_metatarsal_5");
HAnimHumanoid26->setSegments(*HAnimSegment296);

CHAnimSegment* HAnimSegment297 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment297->setUSE("hanim_r_navicular");
HAnimHumanoid26->setSegments(*HAnimSegment297);

CHAnimSegment* HAnimSegment298 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment298->setUSE("hanim_r_talus");
HAnimHumanoid26->setSegments(*HAnimSegment298);

CHAnimSegment* HAnimSegment299 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment299->setUSE("hanim_r_tarsal_distal_phalanx_1");
HAnimHumanoid26->setSegments(*HAnimSegment299);

CHAnimSegment* HAnimSegment300 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment300->setUSE("hanim_r_tarsal_distal_phalanx_2");
HAnimHumanoid26->setSegments(*HAnimSegment300);

CHAnimSegment* HAnimSegment301 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment301->setUSE("hanim_r_tarsal_distal_phalanx_3");
HAnimHumanoid26->setSegments(*HAnimSegment301);

CHAnimSegment* HAnimSegment302 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment302->setUSE("hanim_r_tarsal_distal_phalanx_4");
HAnimHumanoid26->setSegments(*HAnimSegment302);

CHAnimSegment* HAnimSegment303 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment303->setUSE("hanim_r_tarsal_distal_phalanx_5");
HAnimHumanoid26->setSegments(*HAnimSegment303);

CHAnimSegment* HAnimSegment304 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment304->setUSE("hanim_r_tarsal_middle_phalanx_1");
HAnimHumanoid26->setSegments(*HAnimSegment304);

CHAnimSegment* HAnimSegment305 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment305->setUSE("hanim_r_tarsal_middle_phalanx_2");
HAnimHumanoid26->setSegments(*HAnimSegment305);

CHAnimSegment* HAnimSegment306 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment306->setUSE("hanim_r_tarsal_middle_phalanx_3");
HAnimHumanoid26->setSegments(*HAnimSegment306);

CHAnimSegment* HAnimSegment307 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment307->setUSE("hanim_r_tarsal_middle_phalanx_4");
HAnimHumanoid26->setSegments(*HAnimSegment307);

CHAnimSegment* HAnimSegment308 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment308->setUSE("hanim_r_tarsal_proximal_phalanx_1");
HAnimHumanoid26->setSegments(*HAnimSegment308);

CHAnimSegment* HAnimSegment309 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment309->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid26->setSegments(*HAnimSegment309);

CHAnimSegment* HAnimSegment310 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment310->setUSE("hanim_r_tarsal_proximal_phalanx_3");
HAnimHumanoid26->setSegments(*HAnimSegment310);

CHAnimSegment* HAnimSegment311 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment311->setUSE("hanim_r_tarsal_proximal_phalanx_4");
HAnimHumanoid26->setSegments(*HAnimSegment311);

CHAnimSegment* HAnimSegment312 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment312->setUSE("hanim_r_tarsal_proximal_phalanx_5");
HAnimHumanoid26->setSegments(*HAnimSegment312);

CHAnimJoint* HAnimJoint313 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint313->setUSE("hanim_humanoid_root");
HAnimHumanoid26->addJoints(*HAnimJoint313);

CHAnimJoint* HAnimJoint314 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint314->setUSE("hanim_r_calcaneocuboid");
HAnimHumanoid26->addJoints(*HAnimJoint314);

CHAnimJoint* HAnimJoint315 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint315->setUSE("hanim_r_cuneonavicular_1");
HAnimHumanoid26->addJoints(*HAnimJoint315);

CHAnimJoint* HAnimJoint316 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint316->setUSE("hanim_r_cuneonavicular_2");
HAnimHumanoid26->addJoints(*HAnimJoint316);

CHAnimJoint* HAnimJoint317 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint317->setUSE("hanim_r_cuneonavicular_3");
HAnimHumanoid26->addJoints(*HAnimJoint317);

CHAnimJoint* HAnimJoint318 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint318->setUSE("hanim_r_metatarsophalangeal_1");
HAnimHumanoid26->addJoints(*HAnimJoint318);

CHAnimJoint* HAnimJoint319 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint319->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid26->addJoints(*HAnimJoint319);

CHAnimJoint* HAnimJoint320 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint320->setUSE("hanim_r_metatarsophalangeal_3");
HAnimHumanoid26->addJoints(*HAnimJoint320);

CHAnimJoint* HAnimJoint321 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint321->setUSE("hanim_r_metatarsophalangeal_4");
HAnimHumanoid26->addJoints(*HAnimJoint321);

CHAnimJoint* HAnimJoint322 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint322->setUSE("hanim_r_metatarsophalangeal_5");
HAnimHumanoid26->addJoints(*HAnimJoint322);

CHAnimJoint* HAnimJoint323 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint323->setUSE("hanim_r_talocalcaneonavicular");
HAnimHumanoid26->addJoints(*HAnimJoint323);

CHAnimJoint* HAnimJoint324 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint324->setUSE("hanim_r_talocrural");
HAnimHumanoid26->addJoints(*HAnimJoint324);

CHAnimJoint* HAnimJoint325 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint325->setUSE("hanim_r_tarsal_distal_interphalangeal_1");
HAnimHumanoid26->addJoints(*HAnimJoint325);

CHAnimJoint* HAnimJoint326 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint326->setUSE("hanim_r_tarsal_distal_interphalangeal_2");
HAnimHumanoid26->addJoints(*HAnimJoint326);

CHAnimJoint* HAnimJoint327 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint327->setUSE("hanim_r_tarsal_distal_interphalangeal_3");
HAnimHumanoid26->addJoints(*HAnimJoint327);

CHAnimJoint* HAnimJoint328 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint328->setUSE("hanim_r_tarsal_distal_interphalangeal_4");
HAnimHumanoid26->addJoints(*HAnimJoint328);

CHAnimJoint* HAnimJoint329 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint329->setUSE("hanim_r_tarsal_interphalangeal_1");
HAnimHumanoid26->addJoints(*HAnimJoint329);

CHAnimJoint* HAnimJoint330 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint330->setUSE("hanim_r_tarsal_proximal_interphalangeal_1");
HAnimHumanoid26->addJoints(*HAnimJoint330);

CHAnimJoint* HAnimJoint331 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint331->setUSE("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimHumanoid26->addJoints(*HAnimJoint331);

CHAnimJoint* HAnimJoint332 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint332->setUSE("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimHumanoid26->addJoints(*HAnimJoint332);

CHAnimJoint* HAnimJoint333 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint333->setUSE("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimHumanoid26->addJoints(*HAnimJoint333);

CHAnimJoint* HAnimJoint334 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint334->setUSE("hanim_r_tarsometatarsal_1");
HAnimHumanoid26->addJoints(*HAnimJoint334);

CHAnimJoint* HAnimJoint335 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint335->setUSE("hanim_r_tarsometatarsal_2");
HAnimHumanoid26->addJoints(*HAnimJoint335);

CHAnimJoint* HAnimJoint336 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint336->setUSE("hanim_r_tarsometatarsal_3");
HAnimHumanoid26->addJoints(*HAnimJoint336);

CHAnimJoint* HAnimJoint337 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint337->setUSE("hanim_r_tarsometatarsal_4");
HAnimHumanoid26->addJoints(*HAnimJoint337);

CHAnimJoint* HAnimJoint338 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint338->setUSE("hanim_r_tarsometatarsal_5");
HAnimHumanoid26->addJoints(*HAnimJoint338);

CHAnimJoint* HAnimJoint339 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint339->setUSE("hanim_r_transversetarsal");
HAnimHumanoid26->addJoints(*HAnimJoint339);

group->addChildren(*HAnimHumanoid26);

X3D0->setScene(*Scene24);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

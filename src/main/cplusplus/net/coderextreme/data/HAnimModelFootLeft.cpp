/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "/c/x3d-code/www.web3d.org/x3d/languages/cpp/X3DLib/X3DLib.h"
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
meta3->setContent("HAnimModelFootLeft.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("Left foot, using high-fidelity definitions for HAnim version 2.0");
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
meta7->setContent("8 March 2021");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("warning");
meta8->setContent("not yet to scale");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("warning");
meta9->setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("info");
meta10->setContent("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("https://www.web3d.org/documents/specifications/19774/V2.0");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("reference");
meta13->setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("reference");
meta14->setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("reference");
meta15->setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("reference");
meta16->setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("subject");
meta17->setContent("X3D HAnim humanoid animation");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("TODO");
meta18->setContent("Integrate and confirm Segment/Joint names, Viewpoints.");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("identifier");
meta19->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("generator");
meta20->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("license");
meta21->setContent("../license.html");
head1->addMeta(*meta21);

X3D0->setHead(*head1);

CScene* Scene22 = new CScene();
CWorldInfo* WorldInfo23 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo23->setTitle("HAnimModelFootLeft.x3d");
group->addChildren(*WorldInfo23);

CHAnimHumanoid* HAnimHumanoid24 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid24->setName("Foot_Left");
HAnimHumanoid24->setDEF("hanim_Foot_Left");
HAnimHumanoid24->setLoa(4);
HAnimHumanoid24->setVersion("2.0");
//HAnimHumanoid original info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
CMetadataSet* MetadataSet25 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet25->setName("HAnimHumanoid.info");
MetadataSet25->setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
CMetadataString* MetadataString26 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString26->setName("authorName");
MetadataString26->setValue(new CString[1]{"Kwan-Hee YOO, Don Brutzman and Joe Williams"}, 1);
MetadataSet25->setValue(*MetadataString26);

HAnimHumanoid24->setValue(*MetadataSet25);

CHAnimJoint* HAnimJoint27 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint27->setName("humanoid_root");
HAnimJoint27->setDEF("hanim_humanoid_root");
HAnimJoint27->setUlimit(new float[3]{0,0,0});
HAnimJoint27->setLlimit(new float[3]{0,0,0});
HAnimJoint27->setStiffness(new float[3]{0,0,0});
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model
CHAnimJoint* HAnimJoint28 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint28->setName("l_talocrural");
HAnimJoint28->setDEF("hanim_l_talocrural");
HAnimJoint28->setDescription("connection joint of foot to leg above");
HAnimJoint28->setUlimit(new float[3]{0,0,0});
HAnimJoint28->setLlimit(new float[3]{0,0,0});
HAnimJoint28->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment29 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment29->setName("l_talus");
HAnimSegment29->setDEF("hanim_l_talus");
CTransform* Transform30 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape31 = (CShape *)(m_pScene.createNode("Shape"));
Shape31->setDEF("HAnimJointShape");
CSphere* Sphere32 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere32->setRadius(0.025);
Shape31->setGeometry(Sphere32);

CAppearance* Appearance33 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance33->setDEF("HAnimJointAppearance");
CMaterial* Material34 = (CMaterial *)(m_pScene.createNode("Material"));
Material34->setDiffuseColor(new float[3]{0,0,1});
Appearance33->setMaterial(*Material34);

Shape31->setAppearance(*Appearance33);

Transform30->addChildren(*Shape31);

HAnimSegment29->addChildren(*Transform30);

CShape* Shape35 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance36 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material37 = (CMaterial *)(m_pScene.createNode("Material"));
Material37->setEmissiveColor(new float[3]{1,1,1});
Appearance36->setMaterial(*Material37);

Shape35->setAppearance(*Appearance36);

CIndexedLineSet* IndexedLineSet38 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet38->setDEF("TCtoTCN");
IndexedLineSet38->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate39 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate39->setPoint(new float[6]{0,0,0,0,-0.3,0});
IndexedLineSet38->setCoord(*Coordinate39);

Shape35->setGeometry(IndexedLineSet38);

HAnimSegment29->addChildren(*Shape35);

CShape* Shape40 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance41 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material42 = (CMaterial *)(m_pScene.createNode("Material"));
Material42->setEmissiveColor(new float[3]{1,1,1});
Appearance41->setMaterial(*Material42);

Shape40->setAppearance(*Appearance41);

CIndexedLineSet* IndexedLineSet43 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet43->setDEF("TCtoCC");
IndexedLineSet43->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate44 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate44->setPoint(new float[6]{0,0,0,0.2,0.3,0});
IndexedLineSet43->setCoord(*Coordinate44);

Shape40->setGeometry(IndexedLineSet43);

HAnimSegment29->addChildren(*Shape40);

HAnimJoint28->addChildren(*HAnimSegment29);

//TCN
CHAnimJoint* HAnimJoint45 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint45->setName("l_talocalcaneonavicular");
HAnimJoint45->setDEF("hanim_l_talocalcaneonavicular");
HAnimJoint45->setCenter(new float[3]{0,-0.3,0});
HAnimJoint45->setUlimit(new float[3]{0,0,0});
HAnimJoint45->setLlimit(new float[3]{0,0,0});
HAnimJoint45->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment46 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment46->setName("l_navicular");
HAnimSegment46->setDEF("hanim_l_navicular");
CTransform* Transform47 = (CTransform *)(m_pScene.createNode("Transform"));
Transform47->setTranslation(new float[3]{0,-0.3,0});
CShape* Shape48 = (CShape *)(m_pScene.createNode("Shape"));
Shape48->setUSE("HAnimJointShape");
Transform47->addChildren(*Shape48);

HAnimSegment46->addChildren(*Transform47);

CShape* Shape49 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance50 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material51 = (CMaterial *)(m_pScene.createNode("Material"));
Material51->setEmissiveColor(new float[3]{1,1,1});
Appearance50->setMaterial(*Material51);

Shape49->setAppearance(*Appearance50);

CIndexedLineSet* IndexedLineSet52 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet52->setDEF("TCNtoCN1");
IndexedLineSet52->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate53 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate53->setPoint(new float[6]{0,-0.3,0,-0.1,-0.45,0});
IndexedLineSet52->setCoord(*Coordinate53);

Shape49->setGeometry(IndexedLineSet52);

HAnimSegment46->addChildren(*Shape49);

CShape* Shape54 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance55 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material56 = (CMaterial *)(m_pScene.createNode("Material"));
Material56->setEmissiveColor(new float[3]{1,1,1});
Appearance55->setMaterial(*Material56);

Shape54->setAppearance(*Appearance55);

CIndexedLineSet* IndexedLineSet57 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet57->setDEF("TCNtoCN2");
IndexedLineSet57->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate58 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate58->setPoint(new float[6]{0,-0.3,0,0,-0.45,0});
IndexedLineSet57->setCoord(*Coordinate58);

Shape54->setGeometry(IndexedLineSet57);

HAnimSegment46->addChildren(*Shape54);

CShape* Shape59 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance60 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material61 = (CMaterial *)(m_pScene.createNode("Material"));
Material61->setEmissiveColor(new float[3]{1,1,1});
Appearance60->setMaterial(*Material61);

Shape59->setAppearance(*Appearance60);

CIndexedLineSet* IndexedLineSet62 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet62->setDEF("TCNtoCN3");
IndexedLineSet62->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate63 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate63->setPoint(new float[6]{0,-0.3,0,0.1,-0.4,0});
IndexedLineSet62->setCoord(*Coordinate63);

Shape59->setGeometry(IndexedLineSet62);

HAnimSegment46->addChildren(*Shape59);

HAnimJoint45->addChildren(*HAnimSegment46);

//CN1
CHAnimJoint* HAnimJoint64 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint64->setName("l_cuneonavicular_1");
HAnimJoint64->setDEF("hanim_l_cuneonavicular_1");
HAnimJoint64->setCenter(new float[3]{-0.1,-0.45,0});
HAnimJoint64->setUlimit(new float[3]{0,0,0});
HAnimJoint64->setLlimit(new float[3]{0,0,0});
HAnimJoint64->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment65 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment65->setName("l_cuneiform_1");
HAnimSegment65->setDEF("hanim_l_cuneiform_1");
CTransform* Transform66 = (CTransform *)(m_pScene.createNode("Transform"));
Transform66->setTranslation(new float[3]{-0.1,-0.45,0});
CShape* Shape67 = (CShape *)(m_pScene.createNode("Shape"));
Shape67->setUSE("HAnimJointShape");
Transform66->addChildren(*Shape67);

HAnimSegment65->addChildren(*Transform66);

CShape* Shape68 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance69 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material70 = (CMaterial *)(m_pScene.createNode("Material"));
Material70->setEmissiveColor(new float[3]{1,1,1});
Appearance69->setMaterial(*Material70);

Shape68->setAppearance(*Appearance69);

CIndexedLineSet* IndexedLineSet71 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet71->setDEF("CN1toTMT1");
IndexedLineSet71->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate72 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate72->setPoint(new float[6]{-0.1,-0.45,0,-0.1,-0.6,0});
IndexedLineSet71->setCoord(*Coordinate72);

Shape68->setGeometry(IndexedLineSet71);

HAnimSegment65->addChildren(*Shape68);

HAnimJoint64->addChildren(*HAnimSegment65);

CHAnimJoint* HAnimJoint73 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint73->setName("l_tarsometatarsal_1");
HAnimJoint73->setDEF("hanim_l_tarsometatarsal_1");
HAnimJoint73->setCenter(new float[3]{-0.1,-0.6,0});
HAnimJoint73->setUlimit(new float[3]{0,0,0});
HAnimJoint73->setLlimit(new float[3]{0,0,0});
HAnimJoint73->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment74 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment74->setName("l_metatarsal_1");
HAnimSegment74->setDEF("hanim_l_metatarsal_1");
CTransform* Transform75 = (CTransform *)(m_pScene.createNode("Transform"));
Transform75->setTranslation(new float[3]{-0.1,-0.6,0});
CShape* Shape76 = (CShape *)(m_pScene.createNode("Shape"));
Shape76->setUSE("HAnimJointShape");
Transform75->addChildren(*Shape76);

HAnimSegment74->addChildren(*Transform75);

CShape* Shape77 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance78 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material79 = (CMaterial *)(m_pScene.createNode("Material"));
Material79->setEmissiveColor(new float[3]{1,1,1});
Appearance78->setMaterial(*Material79);

Shape77->setAppearance(*Appearance78);

CIndexedLineSet* IndexedLineSet80 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet80->setDEF("TMT1toMTP1");
IndexedLineSet80->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate81 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate81->setPoint(new float[6]{-0.1,-0.6,0,-0.1,-0.9,0});
IndexedLineSet80->setCoord(*Coordinate81);

Shape77->setGeometry(IndexedLineSet80);

HAnimSegment74->addChildren(*Shape77);

HAnimJoint73->addChildren(*HAnimSegment74);

CHAnimJoint* HAnimJoint82 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint82->setName("l_metatarsophalangeal_1");
HAnimJoint82->setDEF("hanim_l_metatarsophalangeal_1");
HAnimJoint82->setCenter(new float[3]{-0.1,-0.9,0});
HAnimJoint82->setUlimit(new float[3]{0,0,0});
HAnimJoint82->setLlimit(new float[3]{0,0,0});
HAnimJoint82->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment83 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment83->setName("l_tarsal_proximal_phalanx_1");
HAnimSegment83->setDEF("hanim_l_tarsal_proximal_phalanx_1");
CTransform* Transform84 = (CTransform *)(m_pScene.createNode("Transform"));
Transform84->setTranslation(new float[3]{-0.1,-0.9,0});
CShape* Shape85 = (CShape *)(m_pScene.createNode("Shape"));
Shape85->setUSE("HAnimJointShape");
Transform84->addChildren(*Shape85);

HAnimSegment83->addChildren(*Transform84);

CShape* Shape86 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance87 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material88 = (CMaterial *)(m_pScene.createNode("Material"));
Material88->setEmissiveColor(new float[3]{1,1,1});
Appearance87->setMaterial(*Material88);

Shape86->setAppearance(*Appearance87);

CIndexedLineSet* IndexedLineSet89 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet89->setDEF("MTP1toIP1");
IndexedLineSet89->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate90 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate90->setPoint(new float[6]{-0.1,-0.9,0,-0.1,-1.05,0});
IndexedLineSet89->setCoord(*Coordinate90);

Shape86->setGeometry(IndexedLineSet89);

HAnimSegment83->addChildren(*Shape86);

HAnimJoint82->addChildren(*HAnimSegment83);

CHAnimJoint* HAnimJoint91 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint91->setName("l_tarsal_interphalangeal_1");
HAnimJoint91->setDEF("hanim_l_tarsal_interphalangeal_1");
HAnimJoint91->setCenter(new float[3]{-0.1,-1.05,0});
HAnimJoint91->setUlimit(new float[3]{0,0,0});
HAnimJoint91->setLlimit(new float[3]{0,0,0});
HAnimJoint91->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment92 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment92->setName("l_tarsal_distal_phalanx_1");
HAnimSegment92->setDEF("hanim_l_tarsal_distal_phalanx_1");
CTransform* Transform93 = (CTransform *)(m_pScene.createNode("Transform"));
Transform93->setTranslation(new float[3]{-0.1,-1.05,0});
CShape* Shape94 = (CShape *)(m_pScene.createNode("Shape"));
Shape94->setUSE("HAnimJointShape");
Transform93->addChildren(*Shape94);

HAnimSegment92->addChildren(*Transform93);

CShape* Shape95 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance96 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material97 = (CMaterial *)(m_pScene.createNode("Material"));
Material97->setEmissiveColor(new float[3]{1,1,1});
Appearance96->setMaterial(*Material97);

Shape95->setAppearance(*Appearance96);

CIndexedLineSet* IndexedLineSet98 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet98->setDEF("tiptoe_l_tarsal_distal_interphalangeal_1");
IndexedLineSet98->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate99 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate99->setPoint(new float[6]{-0.1,-1.05,0,-0.1,-1.1,0});
IndexedLineSet98->setCoord(*Coordinate99);

Shape95->setGeometry(IndexedLineSet98);

HAnimSegment92->addChildren(*Shape95);

HAnimJoint91->addChildren(*HAnimSegment92);

HAnimJoint82->addChildren(*HAnimJoint91);

HAnimJoint73->addChildren(*HAnimJoint82);

HAnimJoint64->addChildren(*HAnimJoint73);

HAnimJoint45->addChildren(*HAnimJoint64);

//CN2
CHAnimJoint* HAnimJoint100 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint100->setName("l_cuneonavicular_2");
HAnimJoint100->setDEF("hanim_l_cuneonavicular_2");
HAnimJoint100->setCenter(new float[3]{0,-0.45,0});
HAnimJoint100->setUlimit(new float[3]{0,0,0});
HAnimJoint100->setLlimit(new float[3]{0,0,0});
HAnimJoint100->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment101 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment101->setName("l_cuneiform_2");
HAnimSegment101->setDEF("hanim_l_cuneiform_2");
CTransform* Transform102 = (CTransform *)(m_pScene.createNode("Transform"));
Transform102->setTranslation(new float[3]{0,-0.45,0});
CShape* Shape103 = (CShape *)(m_pScene.createNode("Shape"));
Shape103->setUSE("HAnimJointShape");
Transform102->addChildren(*Shape103);

HAnimSegment101->addChildren(*Transform102);

CShape* Shape104 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance105 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material106 = (CMaterial *)(m_pScene.createNode("Material"));
Material106->setEmissiveColor(new float[3]{1,1,1});
Appearance105->setMaterial(*Material106);

Shape104->setAppearance(*Appearance105);

CIndexedLineSet* IndexedLineSet107 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet107->setDEF("CN2toTMT2");
IndexedLineSet107->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate108 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate108->setPoint(new float[6]{0,-0.45,0,0.05,-0.6,0});
IndexedLineSet107->setCoord(*Coordinate108);

Shape104->setGeometry(IndexedLineSet107);

HAnimSegment101->addChildren(*Shape104);

HAnimJoint100->addChildren(*HAnimSegment101);

CHAnimJoint* HAnimJoint109 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint109->setName("l_tarsometatarsal_2");
HAnimJoint109->setDEF("hanim_l_tarsometatarsal_2");
HAnimJoint109->setCenter(new float[3]{0.05,-0.6,0});
HAnimJoint109->setUlimit(new float[3]{0,0,0});
HAnimJoint109->setLlimit(new float[3]{0,0,0});
HAnimJoint109->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment110 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment110->setName("l_metatarsal_2");
HAnimSegment110->setDEF("hanim_l_metatarsal_2");
CTransform* Transform111 = (CTransform *)(m_pScene.createNode("Transform"));
Transform111->setTranslation(new float[3]{0.05,-0.6,0});
CShape* Shape112 = (CShape *)(m_pScene.createNode("Shape"));
Shape112->setUSE("HAnimJointShape");
Transform111->addChildren(*Shape112);

HAnimSegment110->addChildren(*Transform111);

CShape* Shape113 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance114 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material115 = (CMaterial *)(m_pScene.createNode("Material"));
Material115->setEmissiveColor(new float[3]{1,1,1});
Appearance114->setMaterial(*Material115);

Shape113->setAppearance(*Appearance114);

CIndexedLineSet* IndexedLineSet116 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet116->setDEF("TMT2toMTP2");
IndexedLineSet116->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate117 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate117->setPoint(new float[6]{0.05,-0.6,0,0.05,-0.9,0});
IndexedLineSet116->setCoord(*Coordinate117);

Shape113->setGeometry(IndexedLineSet116);

HAnimSegment110->addChildren(*Shape113);

HAnimJoint109->addChildren(*HAnimSegment110);

CHAnimJoint* HAnimJoint118 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint118->setName("l_metatarsophalangeal_2");
HAnimJoint118->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint118->setCenter(new float[3]{0.05,-0.9,0});
HAnimJoint118->setUlimit(new float[3]{0,0,0});
HAnimJoint118->setLlimit(new float[3]{0,0,0});
HAnimJoint118->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment119 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment119->setName("l_tarsal_proximal_phalanx_2");
HAnimSegment119->setDEF("hanim_l_tarsal_proximal_phalanx_2");
CTransform* Transform120 = (CTransform *)(m_pScene.createNode("Transform"));
Transform120->setTranslation(new float[3]{0.05,-0.9,0});
CShape* Shape121 = (CShape *)(m_pScene.createNode("Shape"));
Shape121->setUSE("HAnimJointShape");
Transform120->addChildren(*Shape121);

HAnimSegment119->addChildren(*Transform120);

CShape* Shape122 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance123 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material124 = (CMaterial *)(m_pScene.createNode("Material"));
Material124->setEmissiveColor(new float[3]{1,1,1});
Appearance123->setMaterial(*Material124);

Shape122->setAppearance(*Appearance123);

CIndexedLineSet* IndexedLineSet125 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet125->setDEF("MTP2toPIP2");
IndexedLineSet125->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate126 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate126->setPoint(new float[6]{0.05,-0.9,0,0.05,-1.05,0});
IndexedLineSet125->setCoord(*Coordinate126);

Shape122->setGeometry(IndexedLineSet125);

HAnimSegment119->addChildren(*Shape122);

HAnimJoint118->addChildren(*HAnimSegment119);

CHAnimJoint* HAnimJoint127 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint127->setName("l_tarsal_proximal_interphalangeal_2");
HAnimJoint127->setDEF("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimJoint127->setCenter(new float[3]{0.05,-1.05,0});
HAnimJoint127->setUlimit(new float[3]{0,0,0});
HAnimJoint127->setLlimit(new float[3]{0,0,0});
HAnimJoint127->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment128 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment128->setName("l_tarsal_middle_phalanx_2");
HAnimSegment128->setDEF("hanim_l_tarsal_middle_phalanx_2");
CTransform* Transform129 = (CTransform *)(m_pScene.createNode("Transform"));
Transform129->setTranslation(new float[3]{0.05,-1.05,0});
CShape* Shape130 = (CShape *)(m_pScene.createNode("Shape"));
Shape130->setUSE("HAnimJointShape");
Transform129->addChildren(*Shape130);

HAnimSegment128->addChildren(*Transform129);

CShape* Shape131 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance132 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material133 = (CMaterial *)(m_pScene.createNode("Material"));
Material133->setEmissiveColor(new float[3]{1,1,1});
Appearance132->setMaterial(*Material133);

Shape131->setAppearance(*Appearance132);

CIndexedLineSet* IndexedLineSet134 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet134->setDEF("PIP2toDIP2");
IndexedLineSet134->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate135 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate135->setPoint(new float[6]{0.05,-1.05,0,0.05,-1.12,0});
IndexedLineSet134->setCoord(*Coordinate135);

Shape131->setGeometry(IndexedLineSet134);

HAnimSegment128->addChildren(*Shape131);

HAnimJoint127->addChildren(*HAnimSegment128);

CHAnimJoint* HAnimJoint136 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint136->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint136->setDEF("hanim_l_tarsal_distal_interphalangeal_2");
HAnimJoint136->setCenter(new float[3]{0.05,-1.12,0});
HAnimJoint136->setUlimit(new float[3]{0,0,0});
HAnimJoint136->setLlimit(new float[3]{0,0,0});
HAnimJoint136->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment137 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment137->setName("l_tarsal_distal_phalanx_2");
HAnimSegment137->setDEF("hanim_l_tarsal_distal_phalanx_2");
CTransform* Transform138 = (CTransform *)(m_pScene.createNode("Transform"));
Transform138->setTranslation(new float[3]{0.05,-1.12,0});
CShape* Shape139 = (CShape *)(m_pScene.createNode("Shape"));
Shape139->setUSE("HAnimJointShape");
Transform138->addChildren(*Shape139);

HAnimSegment137->addChildren(*Transform138);

CShape* Shape140 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance141 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material142 = (CMaterial *)(m_pScene.createNode("Material"));
Material142->setEmissiveColor(new float[3]{1,1,1});
Appearance141->setMaterial(*Material142);

Shape140->setAppearance(*Appearance141);

CIndexedLineSet* IndexedLineSet143 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet143->setDEF("tiptoe_l_tarsal_distal_phalanx_2");
IndexedLineSet143->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate144 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate144->setPoint(new float[6]{0.05,-1.12,0,0.05,-1.16,0});
IndexedLineSet143->setCoord(*Coordinate144);

Shape140->setGeometry(IndexedLineSet143);

HAnimSegment137->addChildren(*Shape140);

HAnimJoint136->addChildren(*HAnimSegment137);

HAnimJoint127->addChildren(*HAnimJoint136);

HAnimJoint118->addChildren(*HAnimJoint127);

HAnimJoint109->addChildren(*HAnimJoint118);

HAnimJoint100->addChildren(*HAnimJoint109);

HAnimJoint45->addChildren(*HAnimJoint100);

//CN3
CHAnimJoint* HAnimJoint145 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint145->setName("l_cuneonavicular_3");
HAnimJoint145->setDEF("hanim_l_cuneonavicular_3");
HAnimJoint145->setCenter(new float[3]{0.1,-0.4,0});
HAnimJoint145->setUlimit(new float[3]{0,0,0});
HAnimJoint145->setLlimit(new float[3]{0,0,0});
HAnimJoint145->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment146 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment146->setName("l_cuneiform_3");
HAnimSegment146->setDEF("hanim_l_cuneiform_3");
CTransform* Transform147 = (CTransform *)(m_pScene.createNode("Transform"));
Transform147->setTranslation(new float[3]{0.1,-0.4,0});
CShape* Shape148 = (CShape *)(m_pScene.createNode("Shape"));
Shape148->setUSE("HAnimJointShape");
Transform147->addChildren(*Shape148);

HAnimSegment146->addChildren(*Transform147);

CShape* Shape149 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance150 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material151 = (CMaterial *)(m_pScene.createNode("Material"));
Material151->setEmissiveColor(new float[3]{1,1,1});
Appearance150->setMaterial(*Material151);

Shape149->setAppearance(*Appearance150);

CIndexedLineSet* IndexedLineSet152 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet152->setDEF("CN3toTMT3");
IndexedLineSet152->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate153 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate153->setPoint(new float[6]{0.1,-0.4,0,0.15,-0.6,0});
IndexedLineSet152->setCoord(*Coordinate153);

Shape149->setGeometry(IndexedLineSet152);

HAnimSegment146->addChildren(*Shape149);

HAnimJoint145->addChildren(*HAnimSegment146);

CHAnimJoint* HAnimJoint154 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint154->setName("l_tarsometatarsal_3");
HAnimJoint154->setDEF("hanim_l_tarsometatarsal_3");
HAnimJoint154->setCenter(new float[3]{0.15,-0.6,0});
HAnimJoint154->setUlimit(new float[3]{0,0,0});
HAnimJoint154->setLlimit(new float[3]{0,0,0});
HAnimJoint154->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment155 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment155->setName("l_metatarsal_3");
HAnimSegment155->setDEF("hanim_l_metatarsal_3");
CTransform* Transform156 = (CTransform *)(m_pScene.createNode("Transform"));
Transform156->setTranslation(new float[3]{0.15,-0.6,0});
CShape* Shape157 = (CShape *)(m_pScene.createNode("Shape"));
Shape157->setUSE("HAnimJointShape");
Transform156->addChildren(*Shape157);

HAnimSegment155->addChildren(*Transform156);

CShape* Shape158 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance159 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material160 = (CMaterial *)(m_pScene.createNode("Material"));
Material160->setEmissiveColor(new float[3]{1,1,1});
Appearance159->setMaterial(*Material160);

Shape158->setAppearance(*Appearance159);

CIndexedLineSet* IndexedLineSet161 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet161->setDEF("TMT3toMTP3");
IndexedLineSet161->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate162 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate162->setPoint(new float[6]{0.15,-0.6,0,0.15,-0.9,0});
IndexedLineSet161->setCoord(*Coordinate162);

Shape158->setGeometry(IndexedLineSet161);

HAnimSegment155->addChildren(*Shape158);

HAnimJoint154->addChildren(*HAnimSegment155);

CHAnimJoint* HAnimJoint163 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint163->setName("l_metatarsophalangeal_3");
HAnimJoint163->setDEF("hanim_l_metatarsophalangeal_3");
HAnimJoint163->setCenter(new float[3]{0.15,-0.9,0});
HAnimJoint163->setUlimit(new float[3]{0,0,0});
HAnimJoint163->setLlimit(new float[3]{0,0,0});
HAnimJoint163->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment164 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment164->setName("l_tarsal_proximal_phalanx_3");
HAnimSegment164->setDEF("hanim_l_tarsal_proximal_phalanx_3");
CTransform* Transform165 = (CTransform *)(m_pScene.createNode("Transform"));
Transform165->setTranslation(new float[3]{0.15,-0.9,0});
CShape* Shape166 = (CShape *)(m_pScene.createNode("Shape"));
Shape166->setUSE("HAnimJointShape");
Transform165->addChildren(*Shape166);

HAnimSegment164->addChildren(*Transform165);

CShape* Shape167 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance168 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material169 = (CMaterial *)(m_pScene.createNode("Material"));
Material169->setEmissiveColor(new float[3]{1,1,1});
Appearance168->setMaterial(*Material169);

Shape167->setAppearance(*Appearance168);

CIndexedLineSet* IndexedLineSet170 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet170->setDEF("MTP3toPIP3");
IndexedLineSet170->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate171 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate171->setPoint(new float[6]{0.15,-0.9,0,0.15,-1.05,0});
IndexedLineSet170->setCoord(*Coordinate171);

Shape167->setGeometry(IndexedLineSet170);

HAnimSegment164->addChildren(*Shape167);

HAnimJoint163->addChildren(*HAnimSegment164);

CHAnimJoint* HAnimJoint172 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint172->setName("l_tarsal_proximal_interphalangeal_3");
HAnimJoint172->setDEF("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimJoint172->setCenter(new float[3]{0.15,-1.05,0});
HAnimJoint172->setUlimit(new float[3]{0,0,0});
HAnimJoint172->setLlimit(new float[3]{0,0,0});
HAnimJoint172->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment173 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment173->setName("l_tarsal_middle_phalanx_3");
HAnimSegment173->setDEF("hanim_l_tarsal_middle_phalanx_3");
CTransform* Transform174 = (CTransform *)(m_pScene.createNode("Transform"));
Transform174->setTranslation(new float[3]{0.15,-1.05,0});
CShape* Shape175 = (CShape *)(m_pScene.createNode("Shape"));
Shape175->setUSE("HAnimJointShape");
Transform174->addChildren(*Shape175);

HAnimSegment173->addChildren(*Transform174);

CShape* Shape176 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance177 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material178 = (CMaterial *)(m_pScene.createNode("Material"));
Material178->setEmissiveColor(new float[3]{1,1,1});
Appearance177->setMaterial(*Material178);

Shape176->setAppearance(*Appearance177);

CIndexedLineSet* IndexedLineSet179 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet179->setDEF("PIP3toDIP3");
IndexedLineSet179->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate180 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate180->setPoint(new float[6]{0.15,-1.05,0,0.15,-1.13,0});
IndexedLineSet179->setCoord(*Coordinate180);

Shape176->setGeometry(IndexedLineSet179);

HAnimSegment173->addChildren(*Shape176);

HAnimJoint172->addChildren(*HAnimSegment173);

CHAnimJoint* HAnimJoint181 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint181->setName("l_tarsal_distal_interphalangeal_3");
HAnimJoint181->setDEF("hanim_l_tarsal_distal_interphalangeal_3");
HAnimJoint181->setCenter(new float[3]{0.15,-1.13,0});
HAnimJoint181->setUlimit(new float[3]{0,0,0});
HAnimJoint181->setLlimit(new float[3]{0,0,0});
HAnimJoint181->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment182 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment182->setName("l_tarsal_distal_phalanx_3");
HAnimSegment182->setDEF("hanim_l_tarsal_distal_phalanx_3");
CTransform* Transform183 = (CTransform *)(m_pScene.createNode("Transform"));
Transform183->setTranslation(new float[3]{0.15,-1.13,0});
CShape* Shape184 = (CShape *)(m_pScene.createNode("Shape"));
Shape184->setUSE("HAnimJointShape");
Transform183->addChildren(*Shape184);

HAnimSegment182->addChildren(*Transform183);

CShape* Shape185 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance186 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material187 = (CMaterial *)(m_pScene.createNode("Material"));
Material187->setEmissiveColor(new float[3]{1,1,1});
Appearance186->setMaterial(*Material187);

Shape185->setAppearance(*Appearance186);

CIndexedLineSet* IndexedLineSet188 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet188->setDEF("tiptoe_l_tarsal_distal_interphalangeal_3");
IndexedLineSet188->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate189 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate189->setPoint(new float[6]{0.15,-1.13,0,0.15,-1.16,0});
IndexedLineSet188->setCoord(*Coordinate189);

Shape185->setGeometry(IndexedLineSet188);

HAnimSegment182->addChildren(*Shape185);

HAnimJoint181->addChildren(*HAnimSegment182);

HAnimJoint172->addChildren(*HAnimJoint181);

HAnimJoint163->addChildren(*HAnimJoint172);

HAnimJoint154->addChildren(*HAnimJoint163);

HAnimJoint145->addChildren(*HAnimJoint154);

HAnimJoint45->addChildren(*HAnimJoint145);

HAnimJoint28->addChildren(*HAnimJoint45);

//CC
CHAnimJoint* HAnimJoint190 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint190->setName("l_calcaneocuboid");
HAnimJoint190->setDEF("hanim_l_calcaneocuboid");
HAnimJoint190->setCenter(new float[3]{0.2,0.3,0});
HAnimJoint190->setUlimit(new float[3]{0,0,0});
HAnimJoint190->setLlimit(new float[3]{0,0,0});
HAnimJoint190->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment191 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment191->setName("l_calcaneus");
HAnimSegment191->setDEF("hanim_l_calcaneus");
CTransform* Transform192 = (CTransform *)(m_pScene.createNode("Transform"));
Transform192->setTranslation(new float[3]{0.2,0.3,0});
CShape* Shape193 = (CShape *)(m_pScene.createNode("Shape"));
Shape193->setUSE("HAnimJointShape");
Transform192->addChildren(*Shape193);

HAnimSegment191->addChildren(*Transform192);

CShape* Shape194 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance195 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material196 = (CMaterial *)(m_pScene.createNode("Material"));
Material196->setEmissiveColor(new float[3]{1,1,1});
Appearance195->setMaterial(*Material196);

Shape194->setAppearance(*Appearance195);

CIndexedLineSet* IndexedLineSet197 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet197->setDEF("CCtoTT");
IndexedLineSet197->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate198 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate198->setPoint(new float[6]{0.2,0.3,0,0.21,-0.3,0});
IndexedLineSet197->setCoord(*Coordinate198);

Shape194->setGeometry(IndexedLineSet197);

HAnimSegment191->addChildren(*Shape194);

HAnimJoint190->addChildren(*HAnimSegment191);

//TT
CHAnimJoint* HAnimJoint199 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint199->setName("l_transversetarsal");
HAnimJoint199->setDEF("hanim_l_transversetarsal");
HAnimJoint199->setCenter(new float[3]{0.21,-0.3,0});
HAnimJoint199->setUlimit(new float[3]{0,0,0});
HAnimJoint199->setLlimit(new float[3]{0,0,0});
HAnimJoint199->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment200 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment200->setName("l_cuboid");
HAnimSegment200->setDEF("hanim_l_cuboid");
CTransform* Transform201 = (CTransform *)(m_pScene.createNode("Transform"));
Transform201->setTranslation(new float[3]{0.21,-0.3,0});
CShape* Shape202 = (CShape *)(m_pScene.createNode("Shape"));
Shape202->setUSE("HAnimJointShape");
Transform201->addChildren(*Shape202);

HAnimSegment200->addChildren(*Transform201);

CShape* Shape203 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance204 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material205 = (CMaterial *)(m_pScene.createNode("Material"));
Material205->setEmissiveColor(new float[3]{1,1,1});
Appearance204->setMaterial(*Material205);

Shape203->setAppearance(*Appearance204);

CIndexedLineSet* IndexedLineSet206 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet206->setDEF("TTtoTMT4");
IndexedLineSet206->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate207 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate207->setPoint(new float[6]{0.21,-0.3,0,0.25,-0.58,0});
IndexedLineSet206->setCoord(*Coordinate207);

Shape203->setGeometry(IndexedLineSet206);

HAnimSegment200->addChildren(*Shape203);

CShape* Shape208 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance209 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material210 = (CMaterial *)(m_pScene.createNode("Material"));
Material210->setEmissiveColor(new float[3]{1,1,1});
Appearance209->setMaterial(*Material210);

Shape208->setAppearance(*Appearance209);

CIndexedLineSet* IndexedLineSet211 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet211->setDEF("TTtoTMT5");
IndexedLineSet211->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate212 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate212->setPoint(new float[6]{0.21,-0.3,0,0.33,-0.52,0});
IndexedLineSet211->setCoord(*Coordinate212);

Shape208->setGeometry(IndexedLineSet211);

HAnimSegment200->addChildren(*Shape208);

HAnimJoint199->addChildren(*HAnimSegment200);

//TMT4
CHAnimJoint* HAnimJoint213 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint213->setName("l_tarsometatarsal_4");
HAnimJoint213->setDEF("hanim_l_tarsometatarsal_4");
HAnimJoint213->setCenter(new float[3]{0.25,-0.58,0});
HAnimJoint213->setUlimit(new float[3]{0,0,0});
HAnimJoint213->setLlimit(new float[3]{0,0,0});
HAnimJoint213->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment214 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment214->setName("l_metatarsal_4");
HAnimSegment214->setDEF("hanim_l_metatarsal_4");
CTransform* Transform215 = (CTransform *)(m_pScene.createNode("Transform"));
Transform215->setTranslation(new float[3]{0.25,-0.58,0});
CShape* Shape216 = (CShape *)(m_pScene.createNode("Shape"));
Shape216->setUSE("HAnimJointShape");
Transform215->addChildren(*Shape216);

HAnimSegment214->addChildren(*Transform215);

CShape* Shape217 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance218 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material219 = (CMaterial *)(m_pScene.createNode("Material"));
Material219->setEmissiveColor(new float[3]{1,1,1});
Appearance218->setMaterial(*Material219);

Shape217->setAppearance(*Appearance218);

CIndexedLineSet* IndexedLineSet220 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet220->setDEF("TMT4toMTP4");
IndexedLineSet220->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate221 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate221->setPoint(new float[6]{0.25,-0.58,0,0.25,-0.87,0});
IndexedLineSet220->setCoord(*Coordinate221);

Shape217->setGeometry(IndexedLineSet220);

HAnimSegment214->addChildren(*Shape217);

HAnimJoint213->addChildren(*HAnimSegment214);

CHAnimJoint* HAnimJoint222 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint222->setName("l_metatarsophalangeal_4");
HAnimJoint222->setDEF("hanim_l_metatarsophalangeal_4");
HAnimJoint222->setCenter(new float[3]{0.25,-0.87,0});
HAnimJoint222->setUlimit(new float[3]{0,0,0});
HAnimJoint222->setLlimit(new float[3]{0,0,0});
HAnimJoint222->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment223 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment223->setName("l_tarsal_proximal_phalanx_4");
HAnimSegment223->setDEF("hanim_l_tarsal_proximal_phalanx_4");
CTransform* Transform224 = (CTransform *)(m_pScene.createNode("Transform"));
Transform224->setTranslation(new float[3]{0.25,-0.87,0});
CShape* Shape225 = (CShape *)(m_pScene.createNode("Shape"));
Shape225->setUSE("HAnimJointShape");
Transform224->addChildren(*Shape225);

HAnimSegment223->addChildren(*Transform224);

CShape* Shape226 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance227 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material228 = (CMaterial *)(m_pScene.createNode("Material"));
Material228->setEmissiveColor(new float[3]{1,1,1});
Appearance227->setMaterial(*Material228);

Shape226->setAppearance(*Appearance227);

CIndexedLineSet* IndexedLineSet229 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet229->setDEF("MTP4toPIP4");
IndexedLineSet229->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate230 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate230->setPoint(new float[6]{0.25,-0.87,0,0.25,-1,0});
IndexedLineSet229->setCoord(*Coordinate230);

Shape226->setGeometry(IndexedLineSet229);

HAnimSegment223->addChildren(*Shape226);

HAnimJoint222->addChildren(*HAnimSegment223);

CHAnimJoint* HAnimJoint231 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint231->setName("l_tarsal_proximal_interphalangeal_4");
HAnimJoint231->setDEF("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimJoint231->setCenter(new float[3]{0.25,-1,0});
HAnimJoint231->setUlimit(new float[3]{0,0,0});
HAnimJoint231->setLlimit(new float[3]{0,0,0});
HAnimJoint231->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment232 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment232->setName("l_tarsal_middle_phalanx_4");
HAnimSegment232->setDEF("hanim_l_tarsal_middle_phalanx_4");
CTransform* Transform233 = (CTransform *)(m_pScene.createNode("Transform"));
Transform233->setTranslation(new float[3]{0.25,-1,0});
CShape* Shape234 = (CShape *)(m_pScene.createNode("Shape"));
Shape234->setUSE("HAnimJointShape");
Transform233->addChildren(*Shape234);

HAnimSegment232->addChildren(*Transform233);

CShape* Shape235 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance236 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material237 = (CMaterial *)(m_pScene.createNode("Material"));
Material237->setEmissiveColor(new float[3]{1,1,1});
Appearance236->setMaterial(*Material237);

Shape235->setAppearance(*Appearance236);

CIndexedLineSet* IndexedLineSet238 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet238->setDEF("PIP4toDIP4");
IndexedLineSet238->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate239 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate239->setPoint(new float[6]{0.25,-1,0,0.25,-1.1,0});
IndexedLineSet238->setCoord(*Coordinate239);

Shape235->setGeometry(IndexedLineSet238);

HAnimSegment232->addChildren(*Shape235);

HAnimJoint231->addChildren(*HAnimSegment232);

CHAnimJoint* HAnimJoint240 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint240->setName("l_tarsal_distal_interphalangeal_4");
HAnimJoint240->setDEF("hanim_l_tarsal_distal_interphalangeal_4");
HAnimJoint240->setCenter(new float[3]{0.25,-1.1,0});
HAnimJoint240->setUlimit(new float[3]{0,0,0});
HAnimJoint240->setLlimit(new float[3]{0,0,0});
HAnimJoint240->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment241 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment241->setName("l_tarsal_distal_phalanx_4");
HAnimSegment241->setDEF("hanim_l_tarsal_distal_phalanx_4");
CTransform* Transform242 = (CTransform *)(m_pScene.createNode("Transform"));
Transform242->setTranslation(new float[3]{0.25,-1.1,0});
CShape* Shape243 = (CShape *)(m_pScene.createNode("Shape"));
Shape243->setUSE("HAnimJointShape");
Transform242->addChildren(*Shape243);

HAnimSegment241->addChildren(*Transform242);

CShape* Shape244 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance245 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material246 = (CMaterial *)(m_pScene.createNode("Material"));
Material246->setEmissiveColor(new float[3]{1,1,1});
Appearance245->setMaterial(*Material246);

Shape244->setAppearance(*Appearance245);

CIndexedLineSet* IndexedLineSet247 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet247->setDEF("tiptoe_l_tarsal_distal_interphalangeal_4");
IndexedLineSet247->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate248 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate248->setPoint(new float[6]{0.25,-1.1,0,0.25,-1.15,0});
IndexedLineSet247->setCoord(*Coordinate248);

Shape244->setGeometry(IndexedLineSet247);

HAnimSegment241->addChildren(*Shape244);

HAnimJoint240->addChildren(*HAnimSegment241);

HAnimJoint231->addChildren(*HAnimJoint240);

HAnimJoint222->addChildren(*HAnimJoint231);

HAnimJoint213->addChildren(*HAnimJoint222);

HAnimJoint199->addChildren(*HAnimJoint213);

//TMT5
CHAnimJoint* HAnimJoint249 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint249->setName("l_tarsometatarsal_5");
HAnimJoint249->setDEF("hanim_l_tarsometatarsal_5");
HAnimJoint249->setCenter(new float[3]{0.33,-0.52,0});
HAnimJoint249->setUlimit(new float[3]{0,0,0});
HAnimJoint249->setLlimit(new float[3]{0,0,0});
HAnimJoint249->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment250 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment250->setName("l_metatarsal_5");
HAnimSegment250->setDEF("hanim_l_metatarsal_5");
CTransform* Transform251 = (CTransform *)(m_pScene.createNode("Transform"));
Transform251->setTranslation(new float[3]{0.33,-0.52,0});
CShape* Shape252 = (CShape *)(m_pScene.createNode("Shape"));
Shape252->setUSE("HAnimJointShape");
Transform251->addChildren(*Shape252);

HAnimSegment250->addChildren(*Transform251);

CShape* Shape253 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance254 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material255 = (CMaterial *)(m_pScene.createNode("Material"));
Material255->setEmissiveColor(new float[3]{1,1,1});
Appearance254->setMaterial(*Material255);

Shape253->setAppearance(*Appearance254);

CIndexedLineSet* IndexedLineSet256 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet256->setDEF("TMT5toMTP5");
IndexedLineSet256->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate257 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate257->setPoint(new float[6]{0.33,-0.52,0,0.34,-0.8,0});
IndexedLineSet256->setCoord(*Coordinate257);

Shape253->setGeometry(IndexedLineSet256);

HAnimSegment250->addChildren(*Shape253);

HAnimJoint249->addChildren(*HAnimSegment250);

CHAnimJoint* HAnimJoint258 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint258->setName("l_metatarsophalangeal_5");
HAnimJoint258->setDEF("hanim_l_metatarsophalangeal_5");
HAnimJoint258->setCenter(new float[3]{0.34,-0.8,0});
HAnimJoint258->setUlimit(new float[3]{0,0,0});
HAnimJoint258->setLlimit(new float[3]{0,0,0});
HAnimJoint258->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment259 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment259->setName("l_tarsal_proximal_phalanx_5");
HAnimSegment259->setDEF("hanim_l_tarsal_proximal_phalanx_5");
CTransform* Transform260 = (CTransform *)(m_pScene.createNode("Transform"));
Transform260->setTranslation(new float[3]{0.34,-0.8,0});
CShape* Shape261 = (CShape *)(m_pScene.createNode("Shape"));
Shape261->setUSE("HAnimJointShape");
Transform260->addChildren(*Shape261);

HAnimSegment259->addChildren(*Transform260);

CShape* Shape262 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance263 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material264 = (CMaterial *)(m_pScene.createNode("Material"));
Material264->setEmissiveColor(new float[3]{1,1,1});
Appearance263->setMaterial(*Material264);

Shape262->setAppearance(*Appearance263);

CIndexedLineSet* IndexedLineSet265 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet265->setDEF("MTP5toPIP5");
IndexedLineSet265->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate266 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate266->setPoint(new float[6]{0.34,-0.8,0,0.34,-0.95,0});
IndexedLineSet265->setCoord(*Coordinate266);

Shape262->setGeometry(IndexedLineSet265);

HAnimSegment259->addChildren(*Shape262);

HAnimJoint258->addChildren(*HAnimSegment259);

CHAnimJoint* HAnimJoint267 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint267->setName("l_tarsal_proximal_interphalangeal_5");
HAnimJoint267->setDEF("hanim_l_tarsal_proximal_interphalangeal_5");
HAnimJoint267->setCenter(new float[3]{0.34,-0.95,0});
HAnimJoint267->setUlimit(new float[3]{0,0,0});
HAnimJoint267->setLlimit(new float[3]{0,0,0});
HAnimJoint267->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment268 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment268->setName("l_tarsal_middle_phalanx_5");
HAnimSegment268->setDEF("hanim_l_tarsal_middle_phalanx_5");
CTransform* Transform269 = (CTransform *)(m_pScene.createNode("Transform"));
Transform269->setTranslation(new float[3]{0.34,-0.95,0});
CShape* Shape270 = (CShape *)(m_pScene.createNode("Shape"));
Shape270->setUSE("HAnimJointShape");
Transform269->addChildren(*Shape270);

HAnimSegment268->addChildren(*Transform269);

CShape* Shape271 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance272 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material273 = (CMaterial *)(m_pScene.createNode("Material"));
Material273->setEmissiveColor(new float[3]{1,1,1});
Appearance272->setMaterial(*Material273);

Shape271->setAppearance(*Appearance272);

CIndexedLineSet* IndexedLineSet274 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet274->setDEF("PIP5toDIP5");
IndexedLineSet274->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate275 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate275->setPoint(new float[6]{0.34,-0.95,0,0.34,-1.05,0});
IndexedLineSet274->setCoord(*Coordinate275);

Shape271->setGeometry(IndexedLineSet274);

HAnimSegment268->addChildren(*Shape271);

HAnimJoint267->addChildren(*HAnimSegment268);

CHAnimJoint* HAnimJoint276 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint276->setName("l_tarsal_distal_interphalangeal_5");
HAnimJoint276->setDEF("hanim_l_tarsal_distal_interphalangeal_5");
HAnimJoint276->setCenter(new float[3]{0.34,-1.05,0});
HAnimJoint276->setUlimit(new float[3]{0,0,0});
HAnimJoint276->setLlimit(new float[3]{0,0,0});
HAnimJoint276->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment277 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment277->setName("l_tarsal_distal_phalanx_5");
HAnimSegment277->setDEF("hanim_l_tarsal_distal_phalanx_5");
CTransform* Transform278 = (CTransform *)(m_pScene.createNode("Transform"));
Transform278->setTranslation(new float[3]{0.34,-1.05,0});
CShape* Shape279 = (CShape *)(m_pScene.createNode("Shape"));
Shape279->setUSE("HAnimJointShape");
Transform278->addChildren(*Shape279);

HAnimSegment277->addChildren(*Transform278);

CShape* Shape280 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance281 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material282 = (CMaterial *)(m_pScene.createNode("Material"));
Material282->setEmissiveColor(new float[3]{1,1,1});
Appearance281->setMaterial(*Material282);

Shape280->setAppearance(*Appearance281);

CIndexedLineSet* IndexedLineSet283 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet283->setDEF("tiptoe_l_tarsal_distal_interphalangeal_5");
IndexedLineSet283->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate284 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate284->setPoint(new float[6]{0.34,-1.05,0,0.34,-1.08,0});
IndexedLineSet283->setCoord(*Coordinate284);

Shape280->setGeometry(IndexedLineSet283);

HAnimSegment277->addChildren(*Shape280);

HAnimJoint276->addChildren(*HAnimSegment277);

HAnimJoint267->addChildren(*HAnimJoint276);

HAnimJoint258->addChildren(*HAnimJoint267);

HAnimJoint249->addChildren(*HAnimJoint258);

HAnimJoint199->addChildren(*HAnimJoint249);

HAnimJoint190->addChildren(*HAnimJoint199);

HAnimJoint28->addChildren(*HAnimJoint190);

HAnimJoint27->addChildren(*HAnimJoint28);

HAnimHumanoid24->setSkeleton(*HAnimJoint27);

CHAnimJoint* HAnimJoint285 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint285->setUSE("hanim_humanoid_root");
HAnimHumanoid24->addJoints(*HAnimJoint285);

CHAnimJoint* HAnimJoint286 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint286->setUSE("hanim_l_calcaneocuboid");
HAnimHumanoid24->addJoints(*HAnimJoint286);

CHAnimJoint* HAnimJoint287 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint287->setUSE("hanim_l_cuneonavicular_1");
HAnimHumanoid24->addJoints(*HAnimJoint287);

CHAnimJoint* HAnimJoint288 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint288->setUSE("hanim_l_cuneonavicular_2");
HAnimHumanoid24->addJoints(*HAnimJoint288);

CHAnimJoint* HAnimJoint289 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint289->setUSE("hanim_l_cuneonavicular_3");
HAnimHumanoid24->addJoints(*HAnimJoint289);

CHAnimJoint* HAnimJoint290 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint290->setUSE("hanim_l_metatarsophalangeal_1");
HAnimHumanoid24->addJoints(*HAnimJoint290);

CHAnimJoint* HAnimJoint291 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint291->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid24->addJoints(*HAnimJoint291);

CHAnimJoint* HAnimJoint292 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint292->setUSE("hanim_l_metatarsophalangeal_3");
HAnimHumanoid24->addJoints(*HAnimJoint292);

CHAnimJoint* HAnimJoint293 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint293->setUSE("hanim_l_metatarsophalangeal_4");
HAnimHumanoid24->addJoints(*HAnimJoint293);

CHAnimJoint* HAnimJoint294 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint294->setUSE("hanim_l_metatarsophalangeal_5");
HAnimHumanoid24->addJoints(*HAnimJoint294);

CHAnimJoint* HAnimJoint295 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint295->setUSE("hanim_l_talocalcaneonavicular");
HAnimHumanoid24->addJoints(*HAnimJoint295);

CHAnimJoint* HAnimJoint296 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint296->setUSE("hanim_l_talocrural");
HAnimHumanoid24->addJoints(*HAnimJoint296);

CHAnimJoint* HAnimJoint297 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint297->setUSE("hanim_l_tarsal_distal_interphalangeal_2");
HAnimHumanoid24->addJoints(*HAnimJoint297);

CHAnimJoint* HAnimJoint298 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint298->setUSE("hanim_l_tarsal_distal_interphalangeal_3");
HAnimHumanoid24->addJoints(*HAnimJoint298);

CHAnimJoint* HAnimJoint299 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint299->setUSE("hanim_l_tarsal_distal_interphalangeal_4");
HAnimHumanoid24->addJoints(*HAnimJoint299);

CHAnimJoint* HAnimJoint300 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint300->setUSE("hanim_l_tarsal_distal_interphalangeal_5");
HAnimHumanoid24->addJoints(*HAnimJoint300);

CHAnimJoint* HAnimJoint301 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint301->setUSE("hanim_l_tarsal_interphalangeal_1");
HAnimHumanoid24->addJoints(*HAnimJoint301);

CHAnimJoint* HAnimJoint302 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint302->setUSE("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimHumanoid24->addJoints(*HAnimJoint302);

CHAnimJoint* HAnimJoint303 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint303->setUSE("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimHumanoid24->addJoints(*HAnimJoint303);

CHAnimJoint* HAnimJoint304 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint304->setUSE("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimHumanoid24->addJoints(*HAnimJoint304);

CHAnimJoint* HAnimJoint305 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint305->setUSE("hanim_l_tarsal_proximal_interphalangeal_5");
HAnimHumanoid24->addJoints(*HAnimJoint305);

CHAnimJoint* HAnimJoint306 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint306->setUSE("hanim_l_tarsometatarsal_1");
HAnimHumanoid24->addJoints(*HAnimJoint306);

CHAnimJoint* HAnimJoint307 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint307->setUSE("hanim_l_tarsometatarsal_2");
HAnimHumanoid24->addJoints(*HAnimJoint307);

CHAnimJoint* HAnimJoint308 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint308->setUSE("hanim_l_tarsometatarsal_3");
HAnimHumanoid24->addJoints(*HAnimJoint308);

CHAnimJoint* HAnimJoint309 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint309->setUSE("hanim_l_tarsometatarsal_4");
HAnimHumanoid24->addJoints(*HAnimJoint309);

CHAnimJoint* HAnimJoint310 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint310->setUSE("hanim_l_tarsometatarsal_5");
HAnimHumanoid24->addJoints(*HAnimJoint310);

CHAnimJoint* HAnimJoint311 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint311->setUSE("hanim_l_transversetarsal");
HAnimHumanoid24->addJoints(*HAnimJoint311);

CHAnimSegment* HAnimSegment312 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment312->setUSE("hanim_l_calcaneus");
HAnimHumanoid24->setSegments(*HAnimSegment312);

CHAnimSegment* HAnimSegment313 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment313->setUSE("hanim_l_cuboid");
HAnimHumanoid24->setSegments(*HAnimSegment313);

CHAnimSegment* HAnimSegment314 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment314->setUSE("hanim_l_cuneiform_1");
HAnimHumanoid24->setSegments(*HAnimSegment314);

CHAnimSegment* HAnimSegment315 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment315->setUSE("hanim_l_cuneiform_2");
HAnimHumanoid24->setSegments(*HAnimSegment315);

CHAnimSegment* HAnimSegment316 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment316->setUSE("hanim_l_cuneiform_3");
HAnimHumanoid24->setSegments(*HAnimSegment316);

CHAnimSegment* HAnimSegment317 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment317->setUSE("hanim_l_metatarsal_1");
HAnimHumanoid24->setSegments(*HAnimSegment317);

CHAnimSegment* HAnimSegment318 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment318->setUSE("hanim_l_metatarsal_2");
HAnimHumanoid24->setSegments(*HAnimSegment318);

CHAnimSegment* HAnimSegment319 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment319->setUSE("hanim_l_metatarsal_3");
HAnimHumanoid24->setSegments(*HAnimSegment319);

CHAnimSegment* HAnimSegment320 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment320->setUSE("hanim_l_metatarsal_4");
HAnimHumanoid24->setSegments(*HAnimSegment320);

CHAnimSegment* HAnimSegment321 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment321->setUSE("hanim_l_metatarsal_5");
HAnimHumanoid24->setSegments(*HAnimSegment321);

CHAnimSegment* HAnimSegment322 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment322->setUSE("hanim_l_navicular");
HAnimHumanoid24->setSegments(*HAnimSegment322);

CHAnimSegment* HAnimSegment323 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment323->setUSE("hanim_l_talus");
HAnimHumanoid24->setSegments(*HAnimSegment323);

CHAnimSegment* HAnimSegment324 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment324->setUSE("hanim_l_tarsal_distal_phalanx_1");
HAnimHumanoid24->setSegments(*HAnimSegment324);

CHAnimSegment* HAnimSegment325 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment325->setUSE("hanim_l_tarsal_distal_phalanx_2");
HAnimHumanoid24->setSegments(*HAnimSegment325);

CHAnimSegment* HAnimSegment326 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment326->setUSE("hanim_l_tarsal_distal_phalanx_3");
HAnimHumanoid24->setSegments(*HAnimSegment326);

CHAnimSegment* HAnimSegment327 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment327->setUSE("hanim_l_tarsal_distal_phalanx_4");
HAnimHumanoid24->setSegments(*HAnimSegment327);

CHAnimSegment* HAnimSegment328 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment328->setUSE("hanim_l_tarsal_distal_phalanx_5");
HAnimHumanoid24->setSegments(*HAnimSegment328);

CHAnimSegment* HAnimSegment329 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment329->setUSE("hanim_l_tarsal_middle_phalanx_2");
HAnimHumanoid24->setSegments(*HAnimSegment329);

CHAnimSegment* HAnimSegment330 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment330->setUSE("hanim_l_tarsal_middle_phalanx_3");
HAnimHumanoid24->setSegments(*HAnimSegment330);

CHAnimSegment* HAnimSegment331 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment331->setUSE("hanim_l_tarsal_middle_phalanx_4");
HAnimHumanoid24->setSegments(*HAnimSegment331);

CHAnimSegment* HAnimSegment332 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment332->setUSE("hanim_l_tarsal_middle_phalanx_5");
HAnimHumanoid24->setSegments(*HAnimSegment332);

CHAnimSegment* HAnimSegment333 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment333->setUSE("hanim_l_tarsal_proximal_phalanx_1");
HAnimHumanoid24->setSegments(*HAnimSegment333);

CHAnimSegment* HAnimSegment334 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment334->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid24->setSegments(*HAnimSegment334);

CHAnimSegment* HAnimSegment335 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment335->setUSE("hanim_l_tarsal_proximal_phalanx_3");
HAnimHumanoid24->setSegments(*HAnimSegment335);

CHAnimSegment* HAnimSegment336 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment336->setUSE("hanim_l_tarsal_proximal_phalanx_4");
HAnimHumanoid24->setSegments(*HAnimSegment336);

CHAnimSegment* HAnimSegment337 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment337->setUSE("hanim_l_tarsal_proximal_phalanx_5");
HAnimHumanoid24->setSegments(*HAnimSegment337);

group->addChildren(*HAnimHumanoid24);

X3D0->setScene(*Scene22);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

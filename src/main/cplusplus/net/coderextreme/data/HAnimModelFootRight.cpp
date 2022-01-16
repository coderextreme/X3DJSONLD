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
meta3->setContent("HAnimModelFootRight.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("Right foot, using high-fidelity definitions for HAnim version 2.0");
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
meta8->setName("warning");
meta8->setContent("not yet to scale");
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
meta12->setName("info");
meta12->setContent("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("warning");
meta13->setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?");
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
meta21->setName("TODO");
meta21->setContent("Integrate and confirm Segment/Joint names, Viewpoints.");
head1->addMeta(*meta21);

Cmeta* meta22 = new Cmeta();
meta22->setName("identifier");
meta22->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d");
head1->addMeta(*meta22);

Cmeta* meta23 = new Cmeta();
meta23->setName("generator");
meta23->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta23);

Cmeta* meta24 = new Cmeta();
meta24->setName("license");
meta24->setContent("../license.html");
head1->addMeta(*meta24);

X3D0->setHead(*head1);

CScene* Scene25 = new CScene();
CWorldInfo* WorldInfo26 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo26->setTitle("HAnimModelFootRight.x3d");
group->addChildren(*WorldInfo26);

CHAnimHumanoid* HAnimHumanoid27 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid27->setName("Foot_Right");
HAnimHumanoid27->setDEF("hanim_Foot_Right");
HAnimHumanoid27->setLoa(4);
HAnimHumanoid27->setVersion("2.0");
//original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
CMetadataSet* MetadataSet28 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet28->setName("HAnimHumanoid.info");
MetadataSet28->setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
CMetadataString* MetadataString29 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString29->setName("authorName");
MetadataString29->setValue(new CString[1]{"Kwan-Hee YOO, Don Brutzman and Joe Williams"}, 1);
MetadataSet28->setValue(*MetadataString29);

HAnimHumanoid27->setMetadata(*MetadataSet28);

CHAnimJoint* HAnimJoint30 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint30->setName("humanoid_root");
HAnimJoint30->setDEF("hanim_humanoid_root");
HAnimJoint30->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint30->setLlimit(new float[3]{0,0,0}, 3);
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model
CHAnimJoint* HAnimJoint31 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint31->setName("r_talocrural");
HAnimJoint31->setDEF("hanim_r_talocrural");
HAnimJoint31->setDescription("connection joint of foot to leg above");
HAnimJoint31->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint31->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment32 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment32->setName("r_talus");
HAnimSegment32->setDEF("hanim_r_talus");
CTransform* Transform33 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape34 = (CShape *)(m_pScene.createNode("Shape"));
Shape34->setDEF("HAnimJointShape");
CSphere* Sphere35 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere35->setRadius(0.025);
Shape34->setGeometry(Sphere35);

CAppearance* Appearance36 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance36->setDEF("HAnimJointAppearance");
CMaterial* Material37 = (CMaterial *)(m_pScene.createNode("Material"));
Material37->setDiffuseColor(new float[3]{0,0,1});
Appearance36->setMaterial(*Material37);

Shape34->setAppearance(*Appearance36);

Transform33->addChildren(*Shape34);

HAnimSegment32->addChildren(*Transform33);

CShape* Shape38 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance39 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material40 = (CMaterial *)(m_pScene.createNode("Material"));
Material40->setEmissiveColor(new float[3]{1,1,1});
Appearance39->setMaterial(*Material40);

Shape38->setAppearance(*Appearance39);

CIndexedLineSet* IndexedLineSet41 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet41->setDEF("TCtoTCN");
IndexedLineSet41->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate42 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate42->setPoint(new float[6]{0,0,0,0,-0.3,0});
IndexedLineSet41->setCoord(*Coordinate42);

Shape38->setGeometry(IndexedLineSet41);

HAnimSegment32->addChildren(*Shape38);

CShape* Shape43 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance44 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material45 = (CMaterial *)(m_pScene.createNode("Material"));
Material45->setEmissiveColor(new float[3]{1,1,1});
Appearance44->setMaterial(*Material45);

Shape43->setAppearance(*Appearance44);

CIndexedLineSet* IndexedLineSet46 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet46->setDEF("TCtoCC");
IndexedLineSet46->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate47 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate47->setPoint(new float[6]{0,0,0,-0.2,0.3,0});
IndexedLineSet46->setCoord(*Coordinate47);

Shape43->setGeometry(IndexedLineSet46);

HAnimSegment32->addChildren(*Shape43);

HAnimJoint31->addChildren(*HAnimSegment32);

//TCN
CHAnimJoint* HAnimJoint48 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint48->setName("r_talocalcaneonavicular");
HAnimJoint48->setDEF("hanim_r_talocalcaneonavicular");
HAnimJoint48->setCenter(new float[3]{0,-0.3,0});
HAnimJoint48->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint48->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment49 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment49->setName("r_navicular");
HAnimSegment49->setDEF("hanim_r_navicular");
CTransform* Transform50 = (CTransform *)(m_pScene.createNode("Transform"));
Transform50->setTranslation(new float[3]{0,-0.3,0});
CShape* Shape51 = (CShape *)(m_pScene.createNode("Shape"));
Shape51->setUSE("HAnimJointShape");
Transform50->addChildren(*Shape51);

HAnimSegment49->addChildren(*Transform50);

CShape* Shape52 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance53 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material54 = (CMaterial *)(m_pScene.createNode("Material"));
Material54->setEmissiveColor(new float[3]{1,1,1});
Appearance53->setMaterial(*Material54);

Shape52->setAppearance(*Appearance53);

CIndexedLineSet* IndexedLineSet55 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet55->setDEF("TCNtoCN1");
IndexedLineSet55->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate56 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate56->setPoint(new float[6]{0,-0.3,0,0.1,-0.45,0});
IndexedLineSet55->setCoord(*Coordinate56);

Shape52->setGeometry(IndexedLineSet55);

HAnimSegment49->addChildren(*Shape52);

CShape* Shape57 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance58 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material59 = (CMaterial *)(m_pScene.createNode("Material"));
Material59->setEmissiveColor(new float[3]{1,1,1});
Appearance58->setMaterial(*Material59);

Shape57->setAppearance(*Appearance58);

CIndexedLineSet* IndexedLineSet60 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet60->setDEF("TCNtoCN2");
IndexedLineSet60->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate61 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate61->setPoint(new float[6]{0,-0.3,0,0,-0.45,0});
IndexedLineSet60->setCoord(*Coordinate61);

Shape57->setGeometry(IndexedLineSet60);

HAnimSegment49->addChildren(*Shape57);

CShape* Shape62 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance63 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material64 = (CMaterial *)(m_pScene.createNode("Material"));
Material64->setEmissiveColor(new float[3]{1,1,1});
Appearance63->setMaterial(*Material64);

Shape62->setAppearance(*Appearance63);

CIndexedLineSet* IndexedLineSet65 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet65->setDEF("TCNtoCN3");
IndexedLineSet65->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate66 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate66->setPoint(new float[6]{0,-0.3,0,-0.1,-0.4,0});
IndexedLineSet65->setCoord(*Coordinate66);

Shape62->setGeometry(IndexedLineSet65);

HAnimSegment49->addChildren(*Shape62);

HAnimJoint48->addChildren(*HAnimSegment49);

//CN1
CHAnimJoint* HAnimJoint67 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint67->setName("r_cuneonavicular_1");
HAnimJoint67->setDEF("hanim_r_cuneonavicular_1");
HAnimJoint67->setCenter(new float[3]{0.1,-0.45,0});
HAnimJoint67->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint67->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment68 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment68->setName("r_cuneiform_1");
HAnimSegment68->setDEF("hanim_r_cuneiform_1");
CTransform* Transform69 = (CTransform *)(m_pScene.createNode("Transform"));
Transform69->setTranslation(new float[3]{0.1,-0.45,0});
CShape* Shape70 = (CShape *)(m_pScene.createNode("Shape"));
Shape70->setUSE("HAnimJointShape");
Transform69->addChildren(*Shape70);

HAnimSegment68->addChildren(*Transform69);

CShape* Shape71 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance72 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material73 = (CMaterial *)(m_pScene.createNode("Material"));
Material73->setEmissiveColor(new float[3]{1,1,1});
Appearance72->setMaterial(*Material73);

Shape71->setAppearance(*Appearance72);

CIndexedLineSet* IndexedLineSet74 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet74->setDEF("CN1toTMT1");
IndexedLineSet74->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate75 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate75->setPoint(new float[6]{0.1,-0.45,0,0.1,-0.6,0});
IndexedLineSet74->setCoord(*Coordinate75);

Shape71->setGeometry(IndexedLineSet74);

HAnimSegment68->addChildren(*Shape71);

HAnimJoint67->addChildren(*HAnimSegment68);

CHAnimJoint* HAnimJoint76 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint76->setName("r_tarsometatarsal_1");
HAnimJoint76->setDEF("hanim_r_tarsometatarsal_1");
HAnimJoint76->setCenter(new float[3]{0.1,-0.6,0});
HAnimJoint76->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint76->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment77 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment77->setName("r_metatarsal_1");
HAnimSegment77->setDEF("hanim_r_metatarsal_1");
CTransform* Transform78 = (CTransform *)(m_pScene.createNode("Transform"));
Transform78->setTranslation(new float[3]{0.1,-0.6,0});
CShape* Shape79 = (CShape *)(m_pScene.createNode("Shape"));
Shape79->setUSE("HAnimJointShape");
Transform78->addChildren(*Shape79);

HAnimSegment77->addChildren(*Transform78);

CShape* Shape80 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance81 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material82 = (CMaterial *)(m_pScene.createNode("Material"));
Material82->setEmissiveColor(new float[3]{1,1,1});
Appearance81->setMaterial(*Material82);

Shape80->setAppearance(*Appearance81);

CIndexedLineSet* IndexedLineSet83 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet83->setDEF("TMT1toMTP1");
IndexedLineSet83->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate84 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate84->setPoint(new float[6]{0.1,-0.6,0,0.1,-0.9,0});
IndexedLineSet83->setCoord(*Coordinate84);

Shape80->setGeometry(IndexedLineSet83);

HAnimSegment77->addChildren(*Shape80);

HAnimJoint76->addChildren(*HAnimSegment77);

CHAnimJoint* HAnimJoint85 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint85->setName("r_metatarsophalangeal_1");
HAnimJoint85->setDEF("hanim_r_metatarsophalangeal_1");
HAnimJoint85->setCenter(new float[3]{0.1,-0.9,0});
HAnimJoint85->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint85->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment86 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment86->setName("r_tarsal_proximal_phalanx_1");
HAnimSegment86->setDEF("hanim_r_tarsal_proximal_phalanx_1");
CTransform* Transform87 = (CTransform *)(m_pScene.createNode("Transform"));
Transform87->setTranslation(new float[3]{0.1,-0.9,0});
CShape* Shape88 = (CShape *)(m_pScene.createNode("Shape"));
Shape88->setUSE("HAnimJointShape");
Transform87->addChildren(*Shape88);

HAnimSegment86->addChildren(*Transform87);

CShape* Shape89 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance90 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material91 = (CMaterial *)(m_pScene.createNode("Material"));
Material91->setEmissiveColor(new float[3]{1,1,1});
Appearance90->setMaterial(*Material91);

Shape89->setAppearance(*Appearance90);

CIndexedLineSet* IndexedLineSet92 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet92->setDEF("MTP1toIP1");
IndexedLineSet92->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate93 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate93->setPoint(new float[6]{0.1,-0.9,0,0.1,-1.05,0});
IndexedLineSet92->setCoord(*Coordinate93);

Shape89->setGeometry(IndexedLineSet92);

HAnimSegment86->addChildren(*Shape89);

HAnimJoint85->addChildren(*HAnimSegment86);

CHAnimJoint* HAnimJoint94 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint94->setName("r_tarsal_interphalangeal_1");
HAnimJoint94->setDEF("hanim_r_tarsal_interphalangeal_1");
HAnimJoint94->setCenter(new float[3]{0.1,-1.05,0});
HAnimJoint94->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint94->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment95 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment95->setName("r_tarsal_distal_phalanx_1");
HAnimSegment95->setDEF("hanim_r_tarsal_distal_phalanx_1");
CTransform* Transform96 = (CTransform *)(m_pScene.createNode("Transform"));
Transform96->setTranslation(new float[3]{0.1,-1.05,0});
CShape* Shape97 = (CShape *)(m_pScene.createNode("Shape"));
Shape97->setUSE("HAnimJointShape");
Transform96->addChildren(*Shape97);

HAnimSegment95->addChildren(*Transform96);

CShape* Shape98 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance99 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material100 = (CMaterial *)(m_pScene.createNode("Material"));
Material100->setEmissiveColor(new float[3]{1,1,1});
Appearance99->setMaterial(*Material100);

Shape98->setAppearance(*Appearance99);

CIndexedLineSet* IndexedLineSet101 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet101->setDEF("tiptoe_r_interphalangeal_");
IndexedLineSet101->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate102 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate102->setPoint(new float[6]{0.1,-1.05,0,0.1,-1.1,0});
IndexedLineSet101->setCoord(*Coordinate102);

Shape98->setGeometry(IndexedLineSet101);

HAnimSegment95->addChildren(*Shape98);

HAnimJoint94->addChildren(*HAnimSegment95);

HAnimJoint85->addChildren(*HAnimJoint94);

HAnimJoint76->addChildren(*HAnimJoint85);

HAnimJoint67->addChildren(*HAnimJoint76);

HAnimJoint48->addChildren(*HAnimJoint67);

//CN2
CHAnimJoint* HAnimJoint103 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint103->setName("r_cuneonavicular_2");
HAnimJoint103->setDEF("hanim_r_cuneonavicular_2");
HAnimJoint103->setCenter(new float[3]{0,-0.45,0});
HAnimJoint103->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint103->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment104 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment104->setName("r_cuneiform_2");
HAnimSegment104->setDEF("hanim_r_cuneiform_2");
CTransform* Transform105 = (CTransform *)(m_pScene.createNode("Transform"));
Transform105->setTranslation(new float[3]{0,-0.45,0});
CShape* Shape106 = (CShape *)(m_pScene.createNode("Shape"));
Shape106->setUSE("HAnimJointShape");
Transform105->addChildren(*Shape106);

HAnimSegment104->addChildren(*Transform105);

CShape* Shape107 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance108 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material109 = (CMaterial *)(m_pScene.createNode("Material"));
Material109->setEmissiveColor(new float[3]{1,1,1});
Appearance108->setMaterial(*Material109);

Shape107->setAppearance(*Appearance108);

CIndexedLineSet* IndexedLineSet110 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet110->setDEF("CN2toTMT2");
IndexedLineSet110->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate111 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate111->setPoint(new float[6]{0,-0.45,0,-0.05,-0.6,0});
IndexedLineSet110->setCoord(*Coordinate111);

Shape107->setGeometry(IndexedLineSet110);

HAnimSegment104->addChildren(*Shape107);

HAnimJoint103->addChildren(*HAnimSegment104);

CHAnimJoint* HAnimJoint112 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint112->setName("r_tarsometatarsal_2");
HAnimJoint112->setDEF("hanim_r_tarsometatarsal_2");
HAnimJoint112->setCenter(new float[3]{-0.05,-0.6,0});
HAnimJoint112->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint112->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment113 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment113->setName("r_metatarsal_2");
HAnimSegment113->setDEF("hanim_r_metatarsal_2");
CTransform* Transform114 = (CTransform *)(m_pScene.createNode("Transform"));
Transform114->setTranslation(new float[3]{-0.05,-0.6,0});
CShape* Shape115 = (CShape *)(m_pScene.createNode("Shape"));
Shape115->setUSE("HAnimJointShape");
Transform114->addChildren(*Shape115);

HAnimSegment113->addChildren(*Transform114);

CShape* Shape116 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance117 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material118 = (CMaterial *)(m_pScene.createNode("Material"));
Material118->setEmissiveColor(new float[3]{1,1,1});
Appearance117->setMaterial(*Material118);

Shape116->setAppearance(*Appearance117);

CIndexedLineSet* IndexedLineSet119 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet119->setDEF("TMT2toMTP2");
IndexedLineSet119->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate120 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate120->setPoint(new float[6]{-0.05,-0.6,0,-0.05,-0.9,0});
IndexedLineSet119->setCoord(*Coordinate120);

Shape116->setGeometry(IndexedLineSet119);

HAnimSegment113->addChildren(*Shape116);

HAnimJoint112->addChildren(*HAnimSegment113);

CHAnimJoint* HAnimJoint121 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint121->setName("r_metatarsophalangeal_2");
HAnimJoint121->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint121->setCenter(new float[3]{-0.05,-0.9,0});
HAnimJoint121->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint121->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment122 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment122->setName("r_tarsal_proximal_phalanx_2");
HAnimSegment122->setDEF("hanim_r_tarsal_proximal_phalanx_2");
CTransform* Transform123 = (CTransform *)(m_pScene.createNode("Transform"));
Transform123->setTranslation(new float[3]{-0.05,-0.9,0});
CShape* Shape124 = (CShape *)(m_pScene.createNode("Shape"));
Shape124->setUSE("HAnimJointShape");
Transform123->addChildren(*Shape124);

HAnimSegment122->addChildren(*Transform123);

CShape* Shape125 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance126 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material127 = (CMaterial *)(m_pScene.createNode("Material"));
Material127->setEmissiveColor(new float[3]{1,1,1});
Appearance126->setMaterial(*Material127);

Shape125->setAppearance(*Appearance126);

CIndexedLineSet* IndexedLineSet128 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet128->setDEF("MTP2toPIP2");
IndexedLineSet128->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate129 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate129->setPoint(new float[6]{-0.05,-0.9,0,-0.05,-1.05,0});
IndexedLineSet128->setCoord(*Coordinate129);

Shape125->setGeometry(IndexedLineSet128);

HAnimSegment122->addChildren(*Shape125);

HAnimJoint121->addChildren(*HAnimSegment122);

CHAnimJoint* HAnimJoint130 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint130->setName("r_tarsal_proximal_interphalangeal_2");
HAnimJoint130->setDEF("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimJoint130->setCenter(new float[3]{-0.05,-1.05,0});
HAnimJoint130->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint130->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment131 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment131->setName("r_tarsal_middle_phalanx_2");
HAnimSegment131->setDEF("hanim_r_tarsal_middle_phalanx_2");
CTransform* Transform132 = (CTransform *)(m_pScene.createNode("Transform"));
Transform132->setTranslation(new float[3]{-0.05,-1.05,0});
CShape* Shape133 = (CShape *)(m_pScene.createNode("Shape"));
Shape133->setUSE("HAnimJointShape");
Transform132->addChildren(*Shape133);

HAnimSegment131->addChildren(*Transform132);

CShape* Shape134 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance135 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material136 = (CMaterial *)(m_pScene.createNode("Material"));
Material136->setEmissiveColor(new float[3]{1,1,1});
Appearance135->setMaterial(*Material136);

Shape134->setAppearance(*Appearance135);

CIndexedLineSet* IndexedLineSet137 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet137->setDEF("PIP2toDIP2");
IndexedLineSet137->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate138 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate138->setPoint(new float[6]{-0.05,-1.05,0,-0.05,-1.12,0});
IndexedLineSet137->setCoord(*Coordinate138);

Shape134->setGeometry(IndexedLineSet137);

HAnimSegment131->addChildren(*Shape134);

HAnimJoint130->addChildren(*HAnimSegment131);

CHAnimJoint* HAnimJoint139 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint139->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint139->setDEF("hanim_r_tarsal_distal_interphalangeal_2");
HAnimJoint139->setCenter(new float[3]{-0.05,-1.12,0});
HAnimJoint139->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint139->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment140 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment140->setName("r_tarsal_distal_phalanx_2");
HAnimSegment140->setDEF("hanim_r_tarsal_distal_phalanx_2");
CTransform* Transform141 = (CTransform *)(m_pScene.createNode("Transform"));
Transform141->setTranslation(new float[3]{-0.05,-1.12,0});
CShape* Shape142 = (CShape *)(m_pScene.createNode("Shape"));
Shape142->setUSE("HAnimJointShape");
Transform141->addChildren(*Shape142);

HAnimSegment140->addChildren(*Transform141);

CShape* Shape143 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance144 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material145 = (CMaterial *)(m_pScene.createNode("Material"));
Material145->setEmissiveColor(new float[3]{1,1,1});
Appearance144->setMaterial(*Material145);

Shape143->setAppearance(*Appearance144);

CIndexedLineSet* IndexedLineSet146 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet146->setDEF("tiptoe_r_tarsal_distal_interphalangeal_2");
IndexedLineSet146->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate147 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate147->setPoint(new float[6]{-0.05,-1.12,0,-0.05,-1.16,0});
IndexedLineSet146->setCoord(*Coordinate147);

Shape143->setGeometry(IndexedLineSet146);

HAnimSegment140->addChildren(*Shape143);

HAnimJoint139->addChildren(*HAnimSegment140);

HAnimJoint130->addChildren(*HAnimJoint139);

HAnimJoint121->addChildren(*HAnimJoint130);

HAnimJoint112->addChildren(*HAnimJoint121);

HAnimJoint103->addChildren(*HAnimJoint112);

HAnimJoint48->addChildren(*HAnimJoint103);

//CN3
CHAnimJoint* HAnimJoint148 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint148->setName("r_cuneonavicular_3");
HAnimJoint148->setDEF("hanim_r_cuneonavicular_3");
HAnimJoint148->setCenter(new float[3]{-0.1,-0.4,0});
HAnimJoint148->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint148->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment149 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment149->setName("r_cuneiform_3");
HAnimSegment149->setDEF("hanim_r_cuneiform_3");
CTransform* Transform150 = (CTransform *)(m_pScene.createNode("Transform"));
Transform150->setTranslation(new float[3]{-0.1,-0.4,0});
CShape* Shape151 = (CShape *)(m_pScene.createNode("Shape"));
Shape151->setUSE("HAnimJointShape");
Transform150->addChildren(*Shape151);

HAnimSegment149->addChildren(*Transform150);

CShape* Shape152 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance153 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material154 = (CMaterial *)(m_pScene.createNode("Material"));
Material154->setEmissiveColor(new float[3]{1,1,1});
Appearance153->setMaterial(*Material154);

Shape152->setAppearance(*Appearance153);

CIndexedLineSet* IndexedLineSet155 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet155->setDEF("CN3toTMT3");
IndexedLineSet155->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate156 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate156->setPoint(new float[6]{-0.1,-0.4,0,-0.15,-0.6,0});
IndexedLineSet155->setCoord(*Coordinate156);

Shape152->setGeometry(IndexedLineSet155);

HAnimSegment149->addChildren(*Shape152);

HAnimJoint148->addChildren(*HAnimSegment149);

CHAnimJoint* HAnimJoint157 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint157->setName("r_tarsometatarsal_3");
HAnimJoint157->setDEF("hanim_r_tarsometatarsal_3");
HAnimJoint157->setCenter(new float[3]{-0.15,-0.6,0});
HAnimJoint157->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint157->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment158 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment158->setName("r_metatarsal_3");
HAnimSegment158->setDEF("hanim_r_metatarsal_3");
CTransform* Transform159 = (CTransform *)(m_pScene.createNode("Transform"));
Transform159->setTranslation(new float[3]{-0.15,-0.6,0});
CShape* Shape160 = (CShape *)(m_pScene.createNode("Shape"));
Shape160->setUSE("HAnimJointShape");
Transform159->addChildren(*Shape160);

HAnimSegment158->addChildren(*Transform159);

CShape* Shape161 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance162 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material163 = (CMaterial *)(m_pScene.createNode("Material"));
Material163->setEmissiveColor(new float[3]{1,1,1});
Appearance162->setMaterial(*Material163);

Shape161->setAppearance(*Appearance162);

CIndexedLineSet* IndexedLineSet164 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet164->setDEF("TMT3toMTP3");
IndexedLineSet164->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate165 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate165->setPoint(new float[6]{-0.15,-0.6,0,-0.15,-0.9,0});
IndexedLineSet164->setCoord(*Coordinate165);

Shape161->setGeometry(IndexedLineSet164);

HAnimSegment158->addChildren(*Shape161);

HAnimJoint157->addChildren(*HAnimSegment158);

CHAnimJoint* HAnimJoint166 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint166->setName("r_metatarsophalangeal_3");
HAnimJoint166->setDEF("hanim_r_metatarsophalangeal_3");
HAnimJoint166->setCenter(new float[3]{-0.15,-0.9,0});
HAnimJoint166->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint166->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment167 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment167->setName("r_tarsal_proximal_phalanx_3");
HAnimSegment167->setDEF("hanim_r_tarsal_proximal_phalanx_3");
CTransform* Transform168 = (CTransform *)(m_pScene.createNode("Transform"));
Transform168->setTranslation(new float[3]{-0.15,-0.9,0});
CShape* Shape169 = (CShape *)(m_pScene.createNode("Shape"));
Shape169->setUSE("HAnimJointShape");
Transform168->addChildren(*Shape169);

HAnimSegment167->addChildren(*Transform168);

CShape* Shape170 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance171 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material172 = (CMaterial *)(m_pScene.createNode("Material"));
Material172->setEmissiveColor(new float[3]{1,1,1});
Appearance171->setMaterial(*Material172);

Shape170->setAppearance(*Appearance171);

CIndexedLineSet* IndexedLineSet173 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet173->setDEF("MTP3toPIP3");
IndexedLineSet173->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate174 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate174->setPoint(new float[6]{-0.15,-0.9,0,-0.15,-1.05,0});
IndexedLineSet173->setCoord(*Coordinate174);

Shape170->setGeometry(IndexedLineSet173);

HAnimSegment167->addChildren(*Shape170);

HAnimJoint166->addChildren(*HAnimSegment167);

CHAnimJoint* HAnimJoint175 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint175->setName("r_tarsal_proximal_interphalangeal_3");
HAnimJoint175->setDEF("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimJoint175->setCenter(new float[3]{-0.15,-1.05,0});
HAnimJoint175->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint175->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment176 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment176->setName("r_tarsal_middle_phalanx_3");
HAnimSegment176->setDEF("hanim_r_tarsal_middle_phalanx_3");
CTransform* Transform177 = (CTransform *)(m_pScene.createNode("Transform"));
Transform177->setTranslation(new float[3]{-0.15,-1.05,0});
CShape* Shape178 = (CShape *)(m_pScene.createNode("Shape"));
Shape178->setUSE("HAnimJointShape");
Transform177->addChildren(*Shape178);

HAnimSegment176->addChildren(*Transform177);

CShape* Shape179 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance180 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material181 = (CMaterial *)(m_pScene.createNode("Material"));
Material181->setEmissiveColor(new float[3]{1,1,1});
Appearance180->setMaterial(*Material181);

Shape179->setAppearance(*Appearance180);

CIndexedLineSet* IndexedLineSet182 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet182->setDEF("PIP3toDIP3");
IndexedLineSet182->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate183 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate183->setPoint(new float[6]{-0.15,-1.05,0,-0.15,-1.13,0});
IndexedLineSet182->setCoord(*Coordinate183);

Shape179->setGeometry(IndexedLineSet182);

HAnimSegment176->addChildren(*Shape179);

HAnimJoint175->addChildren(*HAnimSegment176);

CHAnimJoint* HAnimJoint184 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint184->setName("r_tarsal_distal_interphalangeal_3");
HAnimJoint184->setDEF("hanim_r_tarsal_distal_interphalangeal_3");
HAnimJoint184->setCenter(new float[3]{-0.15,-1.13,0});
HAnimJoint184->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint184->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment185 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment185->setName("r_tarsal_distal_phalanx_3");
HAnimSegment185->setDEF("hanim_r_tarsal_distal_phalanx_3");
CTransform* Transform186 = (CTransform *)(m_pScene.createNode("Transform"));
Transform186->setTranslation(new float[3]{-0.15,-1.13,0});
CShape* Shape187 = (CShape *)(m_pScene.createNode("Shape"));
Shape187->setUSE("HAnimJointShape");
Transform186->addChildren(*Shape187);

HAnimSegment185->addChildren(*Transform186);

CShape* Shape188 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance189 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material190 = (CMaterial *)(m_pScene.createNode("Material"));
Material190->setEmissiveColor(new float[3]{1,1,1});
Appearance189->setMaterial(*Material190);

Shape188->setAppearance(*Appearance189);

CIndexedLineSet* IndexedLineSet191 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet191->setDEF("tiptoe_r_tarsal_distal_interphalangeal_3");
IndexedLineSet191->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate192 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate192->setPoint(new float[6]{-0.15,-1.13,0,-0.15,-1.16,0});
IndexedLineSet191->setCoord(*Coordinate192);

Shape188->setGeometry(IndexedLineSet191);

HAnimSegment185->addChildren(*Shape188);

HAnimJoint184->addChildren(*HAnimSegment185);

HAnimJoint175->addChildren(*HAnimJoint184);

HAnimJoint166->addChildren(*HAnimJoint175);

HAnimJoint157->addChildren(*HAnimJoint166);

HAnimJoint148->addChildren(*HAnimJoint157);

HAnimJoint48->addChildren(*HAnimJoint148);

HAnimJoint31->addChildren(*HAnimJoint48);

//CC
CHAnimJoint* HAnimJoint193 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint193->setName("r_calcaneocuboid");
HAnimJoint193->setDEF("hanim_r_calcaneocuboid");
HAnimJoint193->setCenter(new float[3]{-0.2,0.3,0});
HAnimJoint193->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint193->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment194 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment194->setName("r_calcaneus");
HAnimSegment194->setDEF("hanim_r_calcaneus");
CTransform* Transform195 = (CTransform *)(m_pScene.createNode("Transform"));
Transform195->setTranslation(new float[3]{-0.2,0.3,0});
CShape* Shape196 = (CShape *)(m_pScene.createNode("Shape"));
Shape196->setUSE("HAnimJointShape");
Transform195->addChildren(*Shape196);

HAnimSegment194->addChildren(*Transform195);

CShape* Shape197 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance198 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material199 = (CMaterial *)(m_pScene.createNode("Material"));
Material199->setEmissiveColor(new float[3]{1,1,1});
Appearance198->setMaterial(*Material199);

Shape197->setAppearance(*Appearance198);

CIndexedLineSet* IndexedLineSet200 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet200->setDEF("CCtoTT");
IndexedLineSet200->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate201 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate201->setPoint(new float[6]{-0.2,0.3,0,-0.21,-0.3,0});
IndexedLineSet200->setCoord(*Coordinate201);

Shape197->setGeometry(IndexedLineSet200);

HAnimSegment194->addChildren(*Shape197);

HAnimJoint193->addChildren(*HAnimSegment194);

//TT
CHAnimJoint* HAnimJoint202 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint202->setName("r_transversetarsal");
HAnimJoint202->setDEF("hanim_r_transversetarsal");
HAnimJoint202->setCenter(new float[3]{-0.21,-0.3,0});
HAnimJoint202->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint202->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment203 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment203->setName("r_cuboid");
HAnimSegment203->setDEF("hanim_r_cuboid");
CTransform* Transform204 = (CTransform *)(m_pScene.createNode("Transform"));
Transform204->setTranslation(new float[3]{-0.21,-0.3,0});
CShape* Shape205 = (CShape *)(m_pScene.createNode("Shape"));
Shape205->setUSE("HAnimJointShape");
Transform204->addChildren(*Shape205);

HAnimSegment203->addChildren(*Transform204);

CShape* Shape206 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance207 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material208 = (CMaterial *)(m_pScene.createNode("Material"));
Material208->setEmissiveColor(new float[3]{1,1,1});
Appearance207->setMaterial(*Material208);

Shape206->setAppearance(*Appearance207);

CIndexedLineSet* IndexedLineSet209 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet209->setDEF("TTtoTMT4");
IndexedLineSet209->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate210 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate210->setPoint(new float[6]{-0.21,-0.3,0,-0.25,-0.58,0});
IndexedLineSet209->setCoord(*Coordinate210);

Shape206->setGeometry(IndexedLineSet209);

HAnimSegment203->addChildren(*Shape206);

CShape* Shape211 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance212 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material213 = (CMaterial *)(m_pScene.createNode("Material"));
Material213->setEmissiveColor(new float[3]{1,1,1});
Appearance212->setMaterial(*Material213);

Shape211->setAppearance(*Appearance212);

CIndexedLineSet* IndexedLineSet214 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet214->setDEF("TTtoTMT5");
IndexedLineSet214->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate215 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate215->setPoint(new float[6]{-0.21,-0.3,0,-0.33,-0.52,0});
IndexedLineSet214->setCoord(*Coordinate215);

Shape211->setGeometry(IndexedLineSet214);

HAnimSegment203->addChildren(*Shape211);

HAnimJoint202->addChildren(*HAnimSegment203);

//TMT4
CHAnimJoint* HAnimJoint216 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint216->setName("r_tarsometatarsal_4");
HAnimJoint216->setDEF("hanim_r_tarsometatarsal_4");
HAnimJoint216->setCenter(new float[3]{-0.25,-0.58,0});
HAnimJoint216->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint216->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment217 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment217->setName("r_metatarsal_4");
HAnimSegment217->setDEF("hanim_r_metatarsal_4");
CTransform* Transform218 = (CTransform *)(m_pScene.createNode("Transform"));
Transform218->setTranslation(new float[3]{-0.25,-0.58,0});
CShape* Shape219 = (CShape *)(m_pScene.createNode("Shape"));
Shape219->setUSE("HAnimJointShape");
Transform218->addChildren(*Shape219);

HAnimSegment217->addChildren(*Transform218);

CShape* Shape220 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance221 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material222 = (CMaterial *)(m_pScene.createNode("Material"));
Material222->setEmissiveColor(new float[3]{1,1,1});
Appearance221->setMaterial(*Material222);

Shape220->setAppearance(*Appearance221);

CIndexedLineSet* IndexedLineSet223 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet223->setDEF("TMT4toMTP4");
IndexedLineSet223->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate224 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate224->setPoint(new float[6]{-0.25,-0.58,0,-0.25,-0.87,0});
IndexedLineSet223->setCoord(*Coordinate224);

Shape220->setGeometry(IndexedLineSet223);

HAnimSegment217->addChildren(*Shape220);

HAnimJoint216->addChildren(*HAnimSegment217);

CHAnimJoint* HAnimJoint225 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint225->setName("r_metatarsophalangeal_4");
HAnimJoint225->setDEF("hanim_r_metatarsophalangeal_4");
HAnimJoint225->setCenter(new float[3]{-0.25,-0.87,0});
HAnimJoint225->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint225->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment226 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment226->setName("r_tarsal_proximal_phalanx_4");
HAnimSegment226->setDEF("hanim_r_tarsal_proximal_phalanx_4");
CTransform* Transform227 = (CTransform *)(m_pScene.createNode("Transform"));
Transform227->setTranslation(new float[3]{-0.25,-0.87,0});
CShape* Shape228 = (CShape *)(m_pScene.createNode("Shape"));
Shape228->setUSE("HAnimJointShape");
Transform227->addChildren(*Shape228);

HAnimSegment226->addChildren(*Transform227);

CShape* Shape229 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance230 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material231 = (CMaterial *)(m_pScene.createNode("Material"));
Material231->setEmissiveColor(new float[3]{1,1,1});
Appearance230->setMaterial(*Material231);

Shape229->setAppearance(*Appearance230);

CIndexedLineSet* IndexedLineSet232 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet232->setDEF("MTP4toPIP4");
IndexedLineSet232->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate233 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate233->setPoint(new float[6]{-0.25,-0.87,0,-0.25,-1,0});
IndexedLineSet232->setCoord(*Coordinate233);

Shape229->setGeometry(IndexedLineSet232);

HAnimSegment226->addChildren(*Shape229);

HAnimJoint225->addChildren(*HAnimSegment226);

CHAnimJoint* HAnimJoint234 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint234->setName("r_tarsal_proximal_interphalangeal_4");
HAnimJoint234->setDEF("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimJoint234->setCenter(new float[3]{-0.25,-1,0});
HAnimJoint234->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint234->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment235 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment235->setName("r_tarsal_middle_phalanx_4");
HAnimSegment235->setDEF("hanim_r_tarsal_middle_phalanx_4");
CTransform* Transform236 = (CTransform *)(m_pScene.createNode("Transform"));
Transform236->setTranslation(new float[3]{-0.25,-1,0});
CShape* Shape237 = (CShape *)(m_pScene.createNode("Shape"));
Shape237->setUSE("HAnimJointShape");
Transform236->addChildren(*Shape237);

HAnimSegment235->addChildren(*Transform236);

CShape* Shape238 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance239 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material240 = (CMaterial *)(m_pScene.createNode("Material"));
Material240->setEmissiveColor(new float[3]{1,1,1});
Appearance239->setMaterial(*Material240);

Shape238->setAppearance(*Appearance239);

CIndexedLineSet* IndexedLineSet241 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet241->setDEF("PIP4toDIP4");
IndexedLineSet241->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate242 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate242->setPoint(new float[6]{-0.25,-1,0,-0.25,-1.1,0});
IndexedLineSet241->setCoord(*Coordinate242);

Shape238->setGeometry(IndexedLineSet241);

HAnimSegment235->addChildren(*Shape238);

HAnimJoint234->addChildren(*HAnimSegment235);

CHAnimJoint* HAnimJoint243 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint243->setName("r_tarsal_distal_interphalangeal_4");
HAnimJoint243->setDEF("hanim_r_tarsal_distal_interphalangeal_4");
HAnimJoint243->setCenter(new float[3]{-0.25,-1.1,0});
HAnimJoint243->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint243->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment244 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment244->setName("r_tarsal_distal_phalanx_4");
HAnimSegment244->setDEF("hanim_r_tarsal_distal_phalanx_4");
CTransform* Transform245 = (CTransform *)(m_pScene.createNode("Transform"));
Transform245->setTranslation(new float[3]{-0.25,-1.1,0});
CShape* Shape246 = (CShape *)(m_pScene.createNode("Shape"));
Shape246->setUSE("HAnimJointShape");
Transform245->addChildren(*Shape246);

HAnimSegment244->addChildren(*Transform245);

CShape* Shape247 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance248 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material249 = (CMaterial *)(m_pScene.createNode("Material"));
Material249->setEmissiveColor(new float[3]{1,1,1});
Appearance248->setMaterial(*Material249);

Shape247->setAppearance(*Appearance248);

CIndexedLineSet* IndexedLineSet250 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet250->setDEF("tiptoe_r_tarsal_distal_interphalangeal_4");
IndexedLineSet250->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate251 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate251->setPoint(new float[6]{-0.25,-1.1,0,-0.25,-1.15,0});
IndexedLineSet250->setCoord(*Coordinate251);

Shape247->setGeometry(IndexedLineSet250);

HAnimSegment244->addChildren(*Shape247);

HAnimJoint243->addChildren(*HAnimSegment244);

HAnimJoint234->addChildren(*HAnimJoint243);

HAnimJoint225->addChildren(*HAnimJoint234);

HAnimJoint216->addChildren(*HAnimJoint225);

HAnimJoint202->addChildren(*HAnimJoint216);

//TMT5
CHAnimJoint* HAnimJoint252 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint252->setName("r_tarsometatarsal_5");
HAnimJoint252->setDEF("hanim_r_tarsometatarsal_5");
HAnimJoint252->setCenter(new float[3]{-0.33,-0.52,0});
HAnimJoint252->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint252->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment253 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment253->setName("r_metatarsal_5");
HAnimSegment253->setDEF("hanim_r_metatarsal_5");
CTransform* Transform254 = (CTransform *)(m_pScene.createNode("Transform"));
Transform254->setTranslation(new float[3]{-0.33,-0.52,0});
CShape* Shape255 = (CShape *)(m_pScene.createNode("Shape"));
Shape255->setUSE("HAnimJointShape");
Transform254->addChildren(*Shape255);

HAnimSegment253->addChildren(*Transform254);

CShape* Shape256 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance257 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material258 = (CMaterial *)(m_pScene.createNode("Material"));
Material258->setEmissiveColor(new float[3]{1,1,1});
Appearance257->setMaterial(*Material258);

Shape256->setAppearance(*Appearance257);

CIndexedLineSet* IndexedLineSet259 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet259->setDEF("TMT5toMTP5");
IndexedLineSet259->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate260 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate260->setPoint(new float[6]{-0.33,-0.52,0,-0.34,-0.8,0});
IndexedLineSet259->setCoord(*Coordinate260);

Shape256->setGeometry(IndexedLineSet259);

HAnimSegment253->addChildren(*Shape256);

HAnimJoint252->addChildren(*HAnimSegment253);

CHAnimJoint* HAnimJoint261 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint261->setName("r_metatarsophalangeal_5");
HAnimJoint261->setDEF("hanim_r_metatarsophalangeal_5");
HAnimJoint261->setCenter(new float[3]{-0.34,-0.8,0});
HAnimJoint261->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint261->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment262 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment262->setName("r_tarsal_proximal_phalanx_5");
HAnimSegment262->setDEF("hanim_r_tarsal_proximal_phalanx_5");
CTransform* Transform263 = (CTransform *)(m_pScene.createNode("Transform"));
Transform263->setTranslation(new float[3]{-0.34,-0.8,0});
CShape* Shape264 = (CShape *)(m_pScene.createNode("Shape"));
Shape264->setUSE("HAnimJointShape");
Transform263->addChildren(*Shape264);

HAnimSegment262->addChildren(*Transform263);

CShape* Shape265 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance266 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material267 = (CMaterial *)(m_pScene.createNode("Material"));
Material267->setEmissiveColor(new float[3]{1,1,1});
Appearance266->setMaterial(*Material267);

Shape265->setAppearance(*Appearance266);

CIndexedLineSet* IndexedLineSet268 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet268->setDEF("MTP5toPIP5");
IndexedLineSet268->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate269 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate269->setPoint(new float[6]{-0.34,-0.8,0,-0.34,-0.95,0});
IndexedLineSet268->setCoord(*Coordinate269);

Shape265->setGeometry(IndexedLineSet268);

HAnimSegment262->addChildren(*Shape265);

HAnimJoint261->addChildren(*HAnimSegment262);

CHAnimJoint* HAnimJoint270 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint270->setName("r_tarsal_proximal_interphalangeal_5");
HAnimJoint270->setDEF("hanim_r_tarsal_proximal_interphalangeal_5");
HAnimJoint270->setCenter(new float[3]{-0.34,-0.95,0});
HAnimJoint270->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint270->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment271 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment271->setName("r_tarsal_middle_phalanx_5");
HAnimSegment271->setDEF("hanim_r_tarsal_middle_phalanx_5");
CTransform* Transform272 = (CTransform *)(m_pScene.createNode("Transform"));
Transform272->setTranslation(new float[3]{-0.34,-0.95,0});
CShape* Shape273 = (CShape *)(m_pScene.createNode("Shape"));
Shape273->setUSE("HAnimJointShape");
Transform272->addChildren(*Shape273);

HAnimSegment271->addChildren(*Transform272);

CShape* Shape274 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance275 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material276 = (CMaterial *)(m_pScene.createNode("Material"));
Material276->setEmissiveColor(new float[3]{1,1,1});
Appearance275->setMaterial(*Material276);

Shape274->setAppearance(*Appearance275);

CIndexedLineSet* IndexedLineSet277 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet277->setDEF("PIP5toDIP5");
IndexedLineSet277->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate278 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate278->setPoint(new float[6]{-0.34,-0.95,0,-0.34,-1.05,0});
IndexedLineSet277->setCoord(*Coordinate278);

Shape274->setGeometry(IndexedLineSet277);

HAnimSegment271->addChildren(*Shape274);

HAnimJoint270->addChildren(*HAnimSegment271);

CHAnimJoint* HAnimJoint279 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint279->setName("r_tarsal_distal_interphalangeal_5");
HAnimJoint279->setDEF("hanim_r_tarsal_distal_interphalangeal_5");
HAnimJoint279->setCenter(new float[3]{-0.34,-1.05,0});
HAnimJoint279->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint279->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment280 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment280->setName("r_tarsal_distal_phalanx_5");
HAnimSegment280->setDEF("hanim_r_tarsal_distal_phalanx_5");
CTransform* Transform281 = (CTransform *)(m_pScene.createNode("Transform"));
Transform281->setTranslation(new float[3]{-0.34,-1.05,0});
CShape* Shape282 = (CShape *)(m_pScene.createNode("Shape"));
Shape282->setUSE("HAnimJointShape");
Transform281->addChildren(*Shape282);

HAnimSegment280->addChildren(*Transform281);

CShape* Shape283 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance284 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material285 = (CMaterial *)(m_pScene.createNode("Material"));
Material285->setEmissiveColor(new float[3]{1,1,1});
Appearance284->setMaterial(*Material285);

Shape283->setAppearance(*Appearance284);

CIndexedLineSet* IndexedLineSet286 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet286->setDEF("tiptoe_r_tarsal_distal_interphalangeal_5");
IndexedLineSet286->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate287 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate287->setPoint(new float[6]{-0.34,-1.05,0,-0.34,-1.08,0});
IndexedLineSet286->setCoord(*Coordinate287);

Shape283->setGeometry(IndexedLineSet286);

HAnimSegment280->addChildren(*Shape283);

HAnimJoint279->addChildren(*HAnimSegment280);

HAnimJoint270->addChildren(*HAnimJoint279);

HAnimJoint261->addChildren(*HAnimJoint270);

HAnimJoint252->addChildren(*HAnimJoint261);

HAnimJoint202->addChildren(*HAnimJoint252);

HAnimJoint193->addChildren(*HAnimJoint202);

HAnimJoint31->addChildren(*HAnimJoint193);

HAnimJoint30->addChildren(*HAnimJoint31);

HAnimHumanoid27->setSkeleton(*HAnimJoint30);

CHAnimJoint* HAnimJoint288 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint288->setUSE("hanim_humanoid_root");
HAnimHumanoid27->addJoints(*HAnimJoint288);

CHAnimJoint* HAnimJoint289 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint289->setUSE("hanim_r_calcaneocuboid");
HAnimHumanoid27->addJoints(*HAnimJoint289);

CHAnimJoint* HAnimJoint290 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint290->setUSE("hanim_r_cuneonavicular_1");
HAnimHumanoid27->addJoints(*HAnimJoint290);

CHAnimJoint* HAnimJoint291 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint291->setUSE("hanim_r_cuneonavicular_2");
HAnimHumanoid27->addJoints(*HAnimJoint291);

CHAnimJoint* HAnimJoint292 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint292->setUSE("hanim_r_cuneonavicular_3");
HAnimHumanoid27->addJoints(*HAnimJoint292);

CHAnimJoint* HAnimJoint293 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint293->setUSE("hanim_r_metatarsophalangeal_1");
HAnimHumanoid27->addJoints(*HAnimJoint293);

CHAnimJoint* HAnimJoint294 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint294->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid27->addJoints(*HAnimJoint294);

CHAnimJoint* HAnimJoint295 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint295->setUSE("hanim_r_metatarsophalangeal_3");
HAnimHumanoid27->addJoints(*HAnimJoint295);

CHAnimJoint* HAnimJoint296 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint296->setUSE("hanim_r_metatarsophalangeal_4");
HAnimHumanoid27->addJoints(*HAnimJoint296);

CHAnimJoint* HAnimJoint297 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint297->setUSE("hanim_r_metatarsophalangeal_5");
HAnimHumanoid27->addJoints(*HAnimJoint297);

CHAnimJoint* HAnimJoint298 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint298->setUSE("hanim_r_talocalcaneonavicular");
HAnimHumanoid27->addJoints(*HAnimJoint298);

CHAnimJoint* HAnimJoint299 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint299->setUSE("hanim_r_talocrural");
HAnimHumanoid27->addJoints(*HAnimJoint299);

CHAnimJoint* HAnimJoint300 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint300->setUSE("hanim_r_tarsal_distal_interphalangeal_2");
HAnimHumanoid27->addJoints(*HAnimJoint300);

CHAnimJoint* HAnimJoint301 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint301->setUSE("hanim_r_tarsal_distal_interphalangeal_3");
HAnimHumanoid27->addJoints(*HAnimJoint301);

CHAnimJoint* HAnimJoint302 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint302->setUSE("hanim_r_tarsal_distal_interphalangeal_4");
HAnimHumanoid27->addJoints(*HAnimJoint302);

CHAnimJoint* HAnimJoint303 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint303->setUSE("hanim_r_tarsal_distal_interphalangeal_5");
HAnimHumanoid27->addJoints(*HAnimJoint303);

CHAnimJoint* HAnimJoint304 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint304->setUSE("hanim_r_tarsal_interphalangeal_1");
HAnimHumanoid27->addJoints(*HAnimJoint304);

CHAnimJoint* HAnimJoint305 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint305->setUSE("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimHumanoid27->addJoints(*HAnimJoint305);

CHAnimJoint* HAnimJoint306 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint306->setUSE("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimHumanoid27->addJoints(*HAnimJoint306);

CHAnimJoint* HAnimJoint307 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint307->setUSE("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimHumanoid27->addJoints(*HAnimJoint307);

CHAnimJoint* HAnimJoint308 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint308->setUSE("hanim_r_tarsal_proximal_interphalangeal_5");
HAnimHumanoid27->addJoints(*HAnimJoint308);

CHAnimJoint* HAnimJoint309 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint309->setUSE("hanim_r_tarsometatarsal_1");
HAnimHumanoid27->addJoints(*HAnimJoint309);

CHAnimJoint* HAnimJoint310 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint310->setUSE("hanim_r_tarsometatarsal_2");
HAnimHumanoid27->addJoints(*HAnimJoint310);

CHAnimJoint* HAnimJoint311 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint311->setUSE("hanim_r_tarsometatarsal_3");
HAnimHumanoid27->addJoints(*HAnimJoint311);

CHAnimJoint* HAnimJoint312 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint312->setUSE("hanim_r_tarsometatarsal_4");
HAnimHumanoid27->addJoints(*HAnimJoint312);

CHAnimJoint* HAnimJoint313 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint313->setUSE("hanim_r_tarsometatarsal_5");
HAnimHumanoid27->addJoints(*HAnimJoint313);

CHAnimJoint* HAnimJoint314 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint314->setUSE("hanim_r_transversetarsal");
HAnimHumanoid27->addJoints(*HAnimJoint314);

CHAnimSegment* HAnimSegment315 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment315->setUSE("hanim_r_calcaneus");
HAnimHumanoid27->setSegments(*HAnimSegment315);

CHAnimSegment* HAnimSegment316 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment316->setUSE("hanim_r_cuboid");
HAnimHumanoid27->setSegments(*HAnimSegment316);

CHAnimSegment* HAnimSegment317 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment317->setUSE("hanim_r_cuneiform_1");
HAnimHumanoid27->setSegments(*HAnimSegment317);

CHAnimSegment* HAnimSegment318 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment318->setUSE("hanim_r_cuneiform_2");
HAnimHumanoid27->setSegments(*HAnimSegment318);

CHAnimSegment* HAnimSegment319 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment319->setUSE("hanim_r_cuneiform_3");
HAnimHumanoid27->setSegments(*HAnimSegment319);

CHAnimSegment* HAnimSegment320 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment320->setUSE("hanim_r_metatarsal_1");
HAnimHumanoid27->setSegments(*HAnimSegment320);

CHAnimSegment* HAnimSegment321 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment321->setUSE("hanim_r_metatarsal_2");
HAnimHumanoid27->setSegments(*HAnimSegment321);

CHAnimSegment* HAnimSegment322 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment322->setUSE("hanim_r_metatarsal_3");
HAnimHumanoid27->setSegments(*HAnimSegment322);

CHAnimSegment* HAnimSegment323 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment323->setUSE("hanim_r_metatarsal_4");
HAnimHumanoid27->setSegments(*HAnimSegment323);

CHAnimSegment* HAnimSegment324 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment324->setUSE("hanim_r_metatarsal_5");
HAnimHumanoid27->setSegments(*HAnimSegment324);

CHAnimSegment* HAnimSegment325 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment325->setUSE("hanim_r_navicular");
HAnimHumanoid27->setSegments(*HAnimSegment325);

CHAnimSegment* HAnimSegment326 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment326->setUSE("hanim_r_talus");
HAnimHumanoid27->setSegments(*HAnimSegment326);

CHAnimSegment* HAnimSegment327 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment327->setUSE("hanim_r_tarsal_distal_phalanx_1");
HAnimHumanoid27->setSegments(*HAnimSegment327);

CHAnimSegment* HAnimSegment328 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment328->setUSE("hanim_r_tarsal_distal_phalanx_2");
HAnimHumanoid27->setSegments(*HAnimSegment328);

CHAnimSegment* HAnimSegment329 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment329->setUSE("hanim_r_tarsal_distal_phalanx_3");
HAnimHumanoid27->setSegments(*HAnimSegment329);

CHAnimSegment* HAnimSegment330 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment330->setUSE("hanim_r_tarsal_distal_phalanx_4");
HAnimHumanoid27->setSegments(*HAnimSegment330);

CHAnimSegment* HAnimSegment331 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment331->setUSE("hanim_r_tarsal_distal_phalanx_5");
HAnimHumanoid27->setSegments(*HAnimSegment331);

CHAnimSegment* HAnimSegment332 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment332->setUSE("hanim_r_tarsal_middle_phalanx_2");
HAnimHumanoid27->setSegments(*HAnimSegment332);

CHAnimSegment* HAnimSegment333 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment333->setUSE("hanim_r_tarsal_middle_phalanx_3");
HAnimHumanoid27->setSegments(*HAnimSegment333);

CHAnimSegment* HAnimSegment334 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment334->setUSE("hanim_r_tarsal_middle_phalanx_4");
HAnimHumanoid27->setSegments(*HAnimSegment334);

CHAnimSegment* HAnimSegment335 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment335->setUSE("hanim_r_tarsal_middle_phalanx_5");
HAnimHumanoid27->setSegments(*HAnimSegment335);

CHAnimSegment* HAnimSegment336 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment336->setUSE("hanim_r_tarsal_proximal_phalanx_1");
HAnimHumanoid27->setSegments(*HAnimSegment336);

CHAnimSegment* HAnimSegment337 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment337->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid27->setSegments(*HAnimSegment337);

CHAnimSegment* HAnimSegment338 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment338->setUSE("hanim_r_tarsal_proximal_phalanx_3");
HAnimHumanoid27->setSegments(*HAnimSegment338);

CHAnimSegment* HAnimSegment339 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment339->setUSE("hanim_r_tarsal_proximal_phalanx_4");
HAnimHumanoid27->setSegments(*HAnimSegment339);

CHAnimSegment* HAnimSegment340 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment340->setUSE("hanim_r_tarsal_proximal_phalanx_5");
HAnimHumanoid27->setSegments(*HAnimSegment340);

group->addChildren(*HAnimHumanoid27);

X3D0->setScene(*Scene25);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

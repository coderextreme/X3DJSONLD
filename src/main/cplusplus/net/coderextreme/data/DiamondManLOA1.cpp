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
meta3->setContent("DiamondManLOA1.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers. LOA-1 is typical low-end real-time 3D hierarchy.");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("Matthew T. Beitler");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("translator");
meta6->setContent("Joel S. Pawloski");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("created");
meta7->setContent("12 November 2001");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("modified");
meta8->setContent("23 December 2021");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("Image");
meta9->setContent("images/BonesAllSkeletonFrontViewLOA1.png");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("motto");
meta10->setContent("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("warning");
meta11->setContent("Still needs comments on CAESAR feature points inserted");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("reference");
meta13->setContent("http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("reference");
meta14->setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("reference");
meta15->setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("reference");
meta16->setContent("http://ece.uwaterloo.ca/~HAnim");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("reference");
meta17->setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.pdf");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("reference");
meta18->setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("reference");
meta19->setContent("http://www.cis.upenn.edu/~beitler");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("Image");
meta20->setContent("humanoid_landmark_locations.gif");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("Image");
meta21->setContent("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif");
head1->addMeta(*meta21);

Cmeta* meta22 = new Cmeta();
meta22->setName("identifier");
meta22->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA1.x3d");
head1->addMeta(*meta22);

Cmeta* meta23 = new Cmeta();
meta23->setName("generator");
meta23->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta23);

Cmeta* meta24 = new Cmeta();
meta24->setName("generator");
meta24->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta24);

Cmeta* meta25 = new Cmeta();
meta25->setName("license");
meta25->setContent("../license.html");
head1->addMeta(*meta25);

X3D0->setHead(*head1);

CScene* Scene26 = new CScene();
CWorldInfo* WorldInfo27 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo27->setInfo(new CString[1]{"HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"}, 1);
WorldInfo27->setTitle("HANIM 1.1 Default Joint Centers, LOA1");
group->addChildren(*WorldInfo27);

CNavigationInfo* NavigationInfo28 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo28->setSpeed(1.5);
group->addChildren(*NavigationInfo28);

CViewpoint* Viewpoint29 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint29->setCenterOfRotation(new float[3]{0,1,0});
Viewpoint29->setDescription("Diamond Man, LOA 1");
Viewpoint29->setPosition(new float[3]{0,1,3});
group->addChildren(*Viewpoint29);

CHAnimHumanoid* HAnimHumanoid30 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid30->setName("humanoid");
HAnimHumanoid30->setDEF("hanim_humanoid");
HAnimHumanoid30->setLoa(1);
HAnimHumanoid30->setVersion("2.0");
//original HAnimHumanoid info='\"authorEmail=beitler@graphics.cis.upenn.edu beitler@acm.org\" \"authorName=Matthew T. Beitler\" \"copyright=Copyright 1999 Matthew T. Beitler\" \"humanoidVersion=JointCenters 1.1 LOA1\" \"usageRestrictions=PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose.\"'
CMetadataSet* MetadataSet31 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet31->setName("HAnimHumanoid.info");
MetadataSet31->setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
CMetadataString* MetadataString32 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString32->setName("authorEmail");
MetadataString32->setValue(new CString[1]{"beitler@graphics.cis.upenn.edu beitler@acm.org"}, 1);
MetadataSet31->setValue(*MetadataString32);

CMetadataString* MetadataString33 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString33->setName("authorName");
MetadataString33->setValue(new CString[1]{"Matthew T. Beitler"}, 1);
MetadataSet31->addValue(*MetadataString33);

CMetadataString* MetadataString34 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString34->setName("copyright");
MetadataString34->setValue(new CString[1]{"Copyright 1999 Matthew T. Beitler"}, 1);
MetadataSet31->addValue(*MetadataString34);

CMetadataString* MetadataString35 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString35->setName("humanoidVersion");
MetadataString35->setValue(new CString[1]{"JointCenters 1.1 LOA1"}, 1);
MetadataSet31->addValue(*MetadataString35);

CMetadataString* MetadataString36 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString36->setName("usageRestrictions");
MetadataString36->setValue(new CString[1]{"PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose."}, 1);
MetadataSet31->addValue(*MetadataString36);

HAnimHumanoid30->setMetadata(*MetadataSet31);

CHAnimJoint* HAnimJoint37 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint37->setName("humanoid_root");
HAnimJoint37->setDEF("hanim_humanoid_root");
HAnimJoint37->setCenter(new float[3]{0,0.824,0.0277});
HAnimJoint37->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint37->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint38 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint38->setName("sacroiliac");
HAnimJoint38->setDEF("hanim_sacroiliac");
HAnimJoint38->setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint38->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint38->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment39 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment39->setName("pelvis");
HAnimSegment39->setDEF("hanim_pelvis");
CTransform* Transform40 = (CTransform *)(m_pScene.createNode("Transform"));
Transform40->setTranslation(new float[3]{0,0.9149,0.0016});
CShape* Shape41 = (CShape *)(m_pScene.createNode("Shape"));
Shape41->setDEF("DiamondShape");
CIndexedFaceSet* IndexedFaceSet42 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet42->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet42->setCreaseAngle(0.5);
CCoordinate* Coordinate43 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate43->setDEF("points");
Coordinate43->setPoint(new float[18]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
IndexedFaceSet42->setCoord(*Coordinate43);

Shape41->setGeometry(IndexedFaceSet42);

CAppearance* Appearance44 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material45 = (CMaterial *)(m_pScene.createNode("Material"));
Material45->setDiffuseColor(new float[3]{1,1,0});
Appearance44->setMaterial(*Material45);

Shape41->setAppearance(*Appearance44);

Transform40->addChildren(*Shape41);

HAnimSegment39->addChildren(*Transform40);

HAnimJoint38->addChildren(*HAnimSegment39);

CHAnimJoint* HAnimJoint46 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint46->setName("l_hip");
HAnimJoint46->setDEF("hanim_l_hip");
HAnimJoint46->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint46->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint46->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment47 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment47->setName("l_thigh");
HAnimSegment47->setDEF("hanim_l_thigh");
CTransform* Transform48 = (CTransform *)(m_pScene.createNode("Transform"));
Transform48->setTranslation(new float[3]{0.0961,0.9124,-0.0001});
CShape* Shape49 = (CShape *)(m_pScene.createNode("Shape"));
Shape49->setUSE("DiamondShape");
Transform48->addChildren(*Shape49);

HAnimSegment47->addChildren(*Transform48);

CHAnimSite* HAnimSite50 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite50->setName("l_knee_crease_pt");
HAnimSite50->setDEF("hanim_l_knee_crease_pt");
HAnimSite50->setTranslation(new float[3]{0.0993,0.4881,-0.0309});
HAnimSegment47->addChildren(*HAnimSite50);

CHAnimSite* HAnimSite51 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite51->setName("l_femoral_lateral_epicondyle_pt");
HAnimSite51->setDEF("hanim_l_femoral_lateral_epicondyle_pt");
HAnimSite51->setTranslation(new float[3]{0.1598,0.4967,0.0297});
HAnimSegment47->addChildren(*HAnimSite51);

CHAnimSite* HAnimSite52 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite52->setName("l_femoral_medial_epicondyle_pt");
HAnimSite52->setDEF("hanim_l_femoral_medial_epicondyle_pt");
HAnimSite52->setTranslation(new float[3]{0.0398,0.4946,0.0303});
HAnimSegment47->addChildren(*HAnimSite52);

HAnimJoint46->addChildren(*HAnimSegment47);

CHAnimJoint* HAnimJoint53 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint53->setName("l_knee");
HAnimJoint53->setDEF("hanim_l_knee");
HAnimJoint53->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint53->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint53->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment54 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment54->setName("l_calf");
HAnimSegment54->setDEF("hanim_l_calf");
CTransform* Transform55 = (CTransform *)(m_pScene.createNode("Transform"));
Transform55->setTranslation(new float[3]{0.104,0.4867,0.0308});
CShape* Shape56 = (CShape *)(m_pScene.createNode("Shape"));
Shape56->setUSE("DiamondShape");
Transform55->addChildren(*Shape56);

HAnimSegment54->addChildren(*Transform55);

HAnimJoint53->addChildren(*HAnimSegment54);

CHAnimJoint* HAnimJoint57 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint57->setName("l_talocrural");
HAnimJoint57->setDEF("hanim_l_talocrural");
HAnimJoint57->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint57->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint57->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment58 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment58->setName("l_talus");
HAnimSegment58->setDEF("hanim_l_talus");
CTransform* Transform59 = (CTransform *)(m_pScene.createNode("Transform"));
Transform59->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CShape* Shape60 = (CShape *)(m_pScene.createNode("Shape"));
Shape60->setUSE("DiamondShape");
Transform59->addChildren(*Shape60);

HAnimSegment58->addChildren(*Transform59);

CHAnimSite* HAnimSite61 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite61->setName("l_lateral_malleolus_pt");
HAnimSite61->setDEF("hanim_l_lateral_malleolus_pt");
HAnimSite61->setTranslation(new float[3]{0.1308,0.0597,-0.1032});
HAnimSegment58->addChildren(*HAnimSite61);

CHAnimSite* HAnimSite62 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite62->setName("l_medial_malleolus_pt");
HAnimSite62->setDEF("hanim_l_medial_malleolus_pt");
HAnimSite62->setTranslation(new float[3]{0.089,0.0716,-0.0881});
HAnimSegment58->addChildren(*HAnimSite62);

CHAnimSite* HAnimSite63 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite63->setName("l_sphyrion_pt");
HAnimSite63->setDEF("hanim_l_sphyrion_pt");
HAnimSite63->setTranslation(new float[3]{0.089,0.0575,-0.0943});
HAnimSegment58->addChildren(*HAnimSite63);

CHAnimSite* HAnimSite64 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite64->setName("l_calcaneus_posterior_pt");
HAnimSite64->setDEF("hanim_l_calcaneus_posterior_pt");
HAnimSite64->setTranslation(new float[3]{0.0974,0.0259,-0.1171});
HAnimSegment58->addChildren(*HAnimSite64);

HAnimJoint57->addChildren(*HAnimSegment58);

CHAnimJoint* HAnimJoint65 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint65->setName("l_metatarsophalangeal_2");
HAnimJoint65->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint65->setCenter(new float[3]{0.1086,0.0001,0.0368});
HAnimJoint65->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint65->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment66 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment66->setName("l_tarsal_proximal_phalanx_2");
HAnimSegment66->setDEF("hanim_l_tarsal_proximal_phalanx_2");
CHAnimSite* HAnimSite67 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite67->setName("l_middistal_tip");
HAnimSite67->setDEF("hanim_l_middistal_tip");
HAnimSite67->setTranslation(new float[3]{0.1354,0.0016,0.1476});
HAnimSegment66->addChildren(*HAnimSite67);

CHAnimSite* HAnimSite68 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite68->setName("l_metatarsal_phalanx_5_pt");
HAnimSite68->setDEF("hanim_l_metatarsal_phalanx_5_pt");
HAnimSite68->setTranslation(new float[3]{0.1825,0.007,0.0928});
HAnimSegment66->addChildren(*HAnimSite68);

CHAnimSite* HAnimSite69 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite69->setName("l_metatarsal_phalanx_1_pt");
HAnimSite69->setDEF("hanim_l_metatarsal_phalanx_1_pt");
HAnimSite69->setTranslation(new float[3]{0.0816,0.0232,0.0106});
HAnimSegment66->addChildren(*HAnimSite69);

CHAnimSite* HAnimSite70 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite70->setName("l_tarsal_distal_phalanx_2_pt");
HAnimSite70->setDEF("hanim_l_tarsal_distal_phalanx_2_pt");
HAnimSite70->setTranslation(new float[3]{0.1195,0.0079,0.1433});
HAnimSegment66->addChildren(*HAnimSite70);

HAnimJoint65->addChildren(*HAnimSegment66);

HAnimJoint57->addChildren(*HAnimJoint65);

HAnimJoint53->addChildren(*HAnimJoint57);

HAnimJoint46->addChildren(*HAnimJoint53);

HAnimJoint38->addChildren(*HAnimJoint46);

CHAnimJoint* HAnimJoint71 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint71->setName("r_hip");
HAnimJoint71->setDEF("hanim_r_hip");
HAnimJoint71->setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimJoint71->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint71->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment72 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment72->setName("r_thigh");
HAnimSegment72->setDEF("hanim_r_thigh");
CTransform* Transform73 = (CTransform *)(m_pScene.createNode("Transform"));
Transform73->setTranslation(new float[3]{-0.095,0.9171,0.0029});
CShape* Shape74 = (CShape *)(m_pScene.createNode("Shape"));
Shape74->setUSE("DiamondShape");
Transform73->addChildren(*Shape74);

HAnimSegment72->addChildren(*Transform73);

CHAnimSite* HAnimSite75 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite75->setName("r_knee_crease_pt");
HAnimSite75->setDEF("hanim_r_knee_crease_pt");
HAnimSite75->setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
HAnimSegment72->addChildren(*HAnimSite75);

CHAnimSite* HAnimSite76 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite76->setName("r_femoral_lateral_epicondyle_pt");
HAnimSite76->setDEF("hanim_r_femoral_lateral_epicondyle_pt");
HAnimSite76->setTranslation(new float[3]{-0.1421,0.4992,0.031});
HAnimSegment72->addChildren(*HAnimSite76);

CHAnimSite* HAnimSite77 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite77->setName("r_femoral_medial_epicondyle_pt");
HAnimSite77->setDEF("hanim_r_femoral_medial_epicondyle_pt");
HAnimSite77->setTranslation(new float[3]{-0.0221,0.5014,0.0289});
HAnimSegment72->addChildren(*HAnimSite77);

HAnimJoint71->addChildren(*HAnimSegment72);

CHAnimJoint* HAnimJoint78 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint78->setName("r_knee");
HAnimJoint78->setDEF("hanim_r_knee");
HAnimJoint78->setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimJoint78->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint78->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment79 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment79->setName("r_calf");
HAnimSegment79->setDEF("hanim_r_calf");
CTransform* Transform80 = (CTransform *)(m_pScene.createNode("Transform"));
Transform80->setTranslation(new float[3]{-0.0867,0.4913,0.0318});
CShape* Shape81 = (CShape *)(m_pScene.createNode("Shape"));
Shape81->setUSE("DiamondShape");
Transform80->addChildren(*Shape81);

HAnimSegment79->addChildren(*Transform80);

HAnimJoint78->addChildren(*HAnimSegment79);

CHAnimJoint* HAnimJoint82 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint82->setName("r_talocrural");
HAnimJoint82->setDEF("hanim_r_talocrural");
HAnimJoint82->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimJoint82->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint82->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment83 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment83->setName("r_talus");
HAnimSegment83->setDEF("hanim_r_talus");
CTransform* Transform84 = (CTransform *)(m_pScene.createNode("Transform"));
Transform84->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
CShape* Shape85 = (CShape *)(m_pScene.createNode("Shape"));
Shape85->setUSE("DiamondShape");
Transform84->addChildren(*Shape85);

HAnimSegment83->addChildren(*Transform84);

CHAnimSite* HAnimSite86 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite86->setName("r_lateral_malleolus_pt");
HAnimSite86->setDEF("hanim_r_lateral_malleolus_pt");
HAnimSite86->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
HAnimSegment83->addChildren(*HAnimSite86);

CHAnimSite* HAnimSite87 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite87->setName("r_medial_malleolus_pt");
HAnimSite87->setDEF("hanim_r_medial_malleolus_pt");
HAnimSite87->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
HAnimSegment83->addChildren(*HAnimSite87);

CHAnimSite* HAnimSite88 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite88->setName("r_sphyrion_pt");
HAnimSite88->setDEF("hanim_r_sphyrion_pt");
HAnimSite88->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
HAnimSegment83->addChildren(*HAnimSite88);

CHAnimSite* HAnimSite89 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite89->setName("r_calcaneus_posterior_pt");
HAnimSite89->setDEF("hanim_r_calcaneus_posterior_pt");
HAnimSite89->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
HAnimSegment83->addChildren(*HAnimSite89);

HAnimJoint82->addChildren(*HAnimSegment83);

CHAnimJoint* HAnimJoint90 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint90->setName("r_metatarsophalangeal_2");
HAnimJoint90->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint90->setCenter(new float[3]{-0.0801,0,0.0368});
HAnimJoint90->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint90->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment91 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment91->setName("r_tarsal_proximal_phalanx_2");
HAnimSegment91->setDEF("hanim_r_tarsal_proximal_phalanx_2");
CHAnimSite* HAnimSite92 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite92->setName("r_middistal_tip");
HAnimSite92->setDEF("hanim_r_middistal_tip");
HAnimSite92->setTranslation(new float[3]{-0.1043,-0.0227,0.145});
HAnimSegment91->addChildren(*HAnimSite92);

CHAnimSite* HAnimSite93 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite93->setName("r_metatarsal_phalanx_5_pt");
HAnimSite93->setDEF("hanim_r_metatarsal_phalanx_5_pt");
HAnimSite93->setTranslation(new float[3]{-0.1523,0.0166,0.0895});
HAnimSegment91->addChildren(*HAnimSite93);

CHAnimSite* HAnimSite94 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite94->setName("r_metatarsal_phalanx_1_pt");
HAnimSite94->setDEF("hanim_r_metatarsal_phalanx_1_pt");
HAnimSite94->setTranslation(new float[3]{-0.0521,0.026,0.0127});
HAnimSegment91->addChildren(*HAnimSite94);

CHAnimSite* HAnimSite95 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite95->setName("r_tarsal_distal_phalanx_2_pt");
HAnimSite95->setDEF("hanim_r_tarsal_distal_phalanx_2_pt");
HAnimSite95->setTranslation(new float[3]{-0.0883,0.0134,0.1383});
HAnimSegment91->addChildren(*HAnimSite95);

HAnimJoint90->addChildren(*HAnimSegment91);

HAnimJoint82->addChildren(*HAnimJoint90);

HAnimJoint78->addChildren(*HAnimJoint82);

HAnimJoint71->addChildren(*HAnimJoint78);

HAnimJoint38->addChildren(*HAnimJoint71);

HAnimJoint37->addChildren(*HAnimJoint38);

CHAnimJoint* HAnimJoint96 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint96->setName("vl1");
HAnimJoint96->setDEF("hanim_vl1");
HAnimJoint96->setCenter(new float[3]{-0.00405,1.07,-0.0275});
HAnimJoint96->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint96->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment97 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment97->setName("l1");
HAnimSegment97->setDEF("hanim_l1");
HAnimJoint96->addChildren(*HAnimSegment97);

CHAnimJoint* HAnimJoint98 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint98->setName("l_shoulder");
HAnimJoint98->setDEF("hanim_l_shoulder");
HAnimJoint98->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint98->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint98->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment99 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment99->setName("l_upperarm");
HAnimSegment99->setDEF("hanim_l_upperarm");
CTransform* Transform100 = (CTransform *)(m_pScene.createNode("Transform"));
Transform100->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
CShape* Shape101 = (CShape *)(m_pScene.createNode("Shape"));
Shape101->setUSE("DiamondShape");
Transform100->addChildren(*Shape101);

HAnimSegment99->addChildren(*Transform100);

CTransform* Transform102 = (CTransform *)(m_pScene.createNode("Transform"));
Transform102->setDEF("l_upperarm_adjust");
Transform102->setCenter(new float[3]{0.182,1.22,-0.047});
Transform102->setRotation(new float[4]{1,0,0,0.119});
Transform102->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
HAnimSegment99->addChildren(*Transform102);

CHAnimSite* HAnimSite103 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite103->setName("l_humeral_lateral_epicondyle_pt");
HAnimSite103->setDEF("hanim_l_humeral_lateral_epicondyle_pt");
HAnimSite103->setTranslation(new float[3]{0.228,1.1482,-0.11});
HAnimSegment99->addChildren(*HAnimSite103);

HAnimJoint98->addChildren(*HAnimSegment99);

CHAnimJoint* HAnimJoint104 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint104->setName("l_elbow");
HAnimJoint104->setDEF("hanim_l_elbow");
HAnimJoint104->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint104->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint104->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment105 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment105->setName("l_forearm");
HAnimSegment105->setDEF("hanim_l_forearm");
CTransform* Transform106 = (CTransform *)(m_pScene.createNode("Transform"));
Transform106->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
CShape* Shape107 = (CShape *)(m_pScene.createNode("Shape"));
Shape107->setUSE("DiamondShape");
Transform106->addChildren(*Shape107);

HAnimSegment105->addChildren(*Transform106);

CTransform* Transform108 = (CTransform *)(m_pScene.createNode("Transform"));
Transform108->setDEF("l_forearm_adjust");
Transform108->setCenter(new float[3]{0.198,0.961,-0.0405});
Transform108->setRotation(new float[4]{-1,0,0,0.1});
Transform108->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
HAnimSegment105->addChildren(*Transform108);

CHAnimSite* HAnimSite109 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite109->setName("l_radial_styloid_pt");
HAnimSite109->setDEF("hanim_l_radial_styloid_pt");
HAnimSite109->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
HAnimSegment105->addChildren(*HAnimSite109);

CHAnimSite* HAnimSite110 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite110->setName("l_olecranon_pt");
HAnimSite110->setDEF("hanim_l_olecranon_pt");
HAnimSite110->setTranslation(new float[3]{-0.1962,1.1375,-0.1123});
HAnimSegment105->addChildren(*HAnimSite110);

CHAnimSite* HAnimSite111 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite111->setName("l_humeral_medial_epicondyle_pt");
HAnimSite111->setDEF("hanim_l_humeral_medial_epicondyle_pt");
HAnimSite111->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
HAnimSegment105->addChildren(*HAnimSite111);

CHAnimSite* HAnimSite112 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite112->setName("l_radiale_pt");
HAnimSite112->setDEF("hanim_l_radiale_pt");
HAnimSite112->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
HAnimSegment105->addChildren(*HAnimSite112);

HAnimJoint104->addChildren(*HAnimSegment105);

CHAnimJoint* HAnimJoint113 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint113->setName("l_radiocarpal");
HAnimJoint113->setDEF("hanim_l_radiocarpal");
HAnimJoint113->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint113->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint113->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment114 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment114->setName("l_carpal");
HAnimSegment114->setDEF("hanim_l_carpal");
CTransform* Transform115 = (CTransform *)(m_pScene.createNode("Transform"));
Transform115->setTranslation(new float[3]{0.1984,0.8663,-0.0583});
CShape* Shape116 = (CShape *)(m_pScene.createNode("Shape"));
Shape116->setUSE("DiamondShape");
Transform115->addChildren(*Shape116);

HAnimSegment114->addChildren(*Transform115);

CTransform* Transform117 = (CTransform *)(m_pScene.createNode("Transform"));
Transform117->setDEF("l_hand_adjust");
Transform117->setCenter(new float[3]{0.213,0.811,-0.0338});
Transform117->setRotation(new float[4]{-0.06361,-0.9967,0.04988,1.333});
Transform117->setTranslation(new float[3]{0.1984,0.8663,-0.0583});
HAnimSegment114->addChildren(*Transform117);

CHAnimSite* HAnimSite118 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite118->setName("l_hand_tip");
HAnimSite118->setDEF("hanim_l_hand_tip");
HAnimSite118->setTranslation(new float[3]{0.208,0.6731,-0.0491});
HAnimSegment114->addChildren(*HAnimSite118);

CHAnimSite* HAnimSite119 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite119->setName("l_metacarpal_phalanx_2_pt");
HAnimSite119->setDEF("hanim_l_metacarpal_phalanx_2_pt");
HAnimSite119->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
HAnimSegment114->addChildren(*HAnimSite119);

CHAnimSite* HAnimSite120 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite120->setName("l_dactylion_pt");
HAnimSite120->setDEF("hanim_l_dactylion_pt");
HAnimSite120->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
HAnimSegment114->addChildren(*HAnimSite120);

CHAnimSite* HAnimSite121 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite121->setName("l_ulnar_styloid_pt");
HAnimSite121->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite121->setTranslation(new float[3]{-0.2142,0.8529,-0.0648});
HAnimSegment114->addChildren(*HAnimSite121);

CHAnimSite* HAnimSite122 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite122->setName("l_metacarpal_phalanx_5_pt");
HAnimSite122->setDEF("hanim_l_metacarpal_phalanx_5_pt");
HAnimSite122->setTranslation(new float[3]{0.1929,0.786,-0.1122});
HAnimSegment114->addChildren(*HAnimSite122);

HAnimJoint113->addChildren(*HAnimSegment114);

HAnimJoint104->addChildren(*HAnimJoint113);

HAnimJoint98->addChildren(*HAnimJoint104);

HAnimJoint96->addChildren(*HAnimJoint98);

CHAnimJoint* HAnimJoint123 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint123->setName("r_shoulder");
HAnimJoint123->setDEF("hanim_r_shoulder");
HAnimJoint123->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimJoint123->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint123->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment124 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment124->setName("r_upperarm");
HAnimSegment124->setDEF("hanim_r_upperarm");
CTransform* Transform125 = (CTransform *)(m_pScene.createNode("Transform"));
Transform125->setTranslation(new float[3]{-0.1907,1.4407,-0.0325});
CShape* Shape126 = (CShape *)(m_pScene.createNode("Shape"));
Shape126->setUSE("DiamondShape");
Transform125->addChildren(*Shape126);

HAnimSegment124->addChildren(*Transform125);

CTransform* Transform127 = (CTransform *)(m_pScene.createNode("Transform"));
Transform127->setDEF("r_upperarm_adjust");
Transform127->setCenter(new float[3]{-0.182,1.22,-0.047});
Transform127->setRotation(new float[4]{1,0,0,0.0836});
Transform127->setTranslation(new float[3]{-0.1907,1.4407,-0.0325});
HAnimSegment124->addChildren(*Transform127);

CHAnimSite* HAnimSite128 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite128->setName("r_humeral_lateral_epicondyle_pt");
HAnimSite128->setDEF("hanim_r_humeral_lateral_epicondyle_pt");
HAnimSite128->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
HAnimSegment124->addChildren(*HAnimSite128);

HAnimJoint123->addChildren(*HAnimSegment124);

CHAnimJoint* HAnimJoint129 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint129->setName("r_elbow");
HAnimJoint129->setDEF("hanim_r_elbow");
HAnimJoint129->setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimJoint129->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint129->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment130 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment130->setName("r_forearm");
HAnimSegment130->setDEF("hanim_r_forearm");
CTransform* Transform131 = (CTransform *)(m_pScene.createNode("Transform"));
Transform131->setTranslation(new float[3]{-0.1949,1.1388,-0.062});
CShape* Shape132 = (CShape *)(m_pScene.createNode("Shape"));
Shape132->setUSE("DiamondShape");
Transform131->addChildren(*Shape132);

HAnimSegment130->addChildren(*Transform131);

CTransform* Transform133 = (CTransform *)(m_pScene.createNode("Transform"));
Transform133->setDEF("r_forearm_adjust");
Transform133->setCenter(new float[3]{-0.198,0.961,-0.0397});
Transform133->setRotation(new float[4]{-1,0,0,0.1254});
Transform133->setTranslation(new float[3]{-0.1949,1.1388,-0.062});
HAnimSegment130->addChildren(*Transform133);

CHAnimSite* HAnimSite134 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite134->setName("r_radial_styloid_pt");
HAnimSite134->setDEF("hanim_r_radial_styloid_pt");
HAnimSite134->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
HAnimSegment130->addChildren(*HAnimSite134);

CHAnimSite* HAnimSite135 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite135->setName("r_olecranon_pt");
HAnimSite135->setDEF("hanim_r_olecranon_pt");
HAnimSite135->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
HAnimSegment130->addChildren(*HAnimSite135);

CHAnimSite* HAnimSite136 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite136->setName("r_humeral_medial_epicondyle_pt");
HAnimSite136->setDEF("hanim_r_humeral_medial_epicondyle_pt");
HAnimSite136->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
HAnimSegment130->addChildren(*HAnimSite136);

CHAnimSite* HAnimSite137 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite137->setName("r_radiale_pt");
HAnimSite137->setDEF("hanim_r_radiale_pt");
HAnimSite137->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
HAnimSegment130->addChildren(*HAnimSite137);

HAnimJoint129->addChildren(*HAnimSegment130);

CHAnimJoint* HAnimJoint138 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint138->setName("r_radiocarpal");
HAnimJoint138->setDEF("hanim_r_radiocarpal");
HAnimJoint138->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimJoint138->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint138->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment139 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment139->setName("r_carpal");
HAnimSegment139->setDEF("hanim_r_carpal");
CTransform* Transform140 = (CTransform *)(m_pScene.createNode("Transform"));
Transform140->setTranslation(new float[3]{-0.1959,0.8694,-0.0521});
CShape* Shape141 = (CShape *)(m_pScene.createNode("Shape"));
Shape141->setUSE("DiamondShape");
Transform140->addChildren(*Shape141);

HAnimSegment139->addChildren(*Transform140);

CTransform* Transform142 = (CTransform *)(m_pScene.createNode("Transform"));
Transform142->setDEF("r_hand_adjust");
Transform142->setCenter(new float[3]{-0.217,0.811,-0.0338});
Transform142->setRotation(new float[4]{-0.09024,0.994,-0.0624,1.216});
HAnimSegment139->addChildren(*Transform142);

CHAnimSite* HAnimSite143 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite143->setName("r_hand_tip");
HAnimSite143->setDEF("hanim_r_hand_tip");
HAnimSite143->setTranslation(new float[3]{-0.1969,0.6758,-0.0427});
HAnimSegment139->addChildren(*HAnimSite143);

CHAnimSite* HAnimSite144 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite144->setName("r_metacarpal_phalanx_2_pt");
HAnimSite144->setDEF("hanim_r_metacarpal_phalanx_2_pt");
HAnimSite144->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
HAnimSegment139->addChildren(*HAnimSite144);

CHAnimSite* HAnimSite145 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite145->setName("r_dactylion_pt");
HAnimSite145->setDEF("hanim_r_dactylion_pt");
HAnimSite145->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
HAnimSegment139->addChildren(*HAnimSite145);

CHAnimSite* HAnimSite146 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite146->setName("r_ulnar_styloid_pt");
HAnimSite146->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite146->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
HAnimSegment139->addChildren(*HAnimSite146);

CHAnimSite* HAnimSite147 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite147->setName("r_metacarpal_phalanx_5_pt");
HAnimSite147->setDEF("hanim_r_metacarpal_phalanx_5_pt");
HAnimSite147->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
HAnimSegment139->addChildren(*HAnimSite147);

HAnimJoint138->addChildren(*HAnimSegment139);

HAnimJoint129->addChildren(*HAnimJoint138);

HAnimJoint123->addChildren(*HAnimJoint129);

HAnimJoint96->addChildren(*HAnimJoint123);

CHAnimJoint* HAnimJoint148 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint148->setName("vc4");
HAnimJoint148->setDEF("hanim_vc4");
HAnimJoint148->setCenter(new float[3]{0,1.43,-0.0458});
HAnimJoint148->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint148->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment149 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment149->setName("c4");
HAnimSegment149->setDEF("hanim_c4");
HAnimJoint148->addChildren(*HAnimSegment149);

HAnimJoint96->addChildren(*HAnimJoint148);

HAnimJoint37->addChildren(*HAnimJoint96);

CHAnimJoint* HAnimJoint150 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint150->setName("vl5");
HAnimJoint150->setDEF("hanim_vl5");
HAnimJoint150->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint150->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint150->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint151 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint151->setName("skullbase");
HAnimJoint151->setDEF("hanim_skullbase");
HAnimJoint151->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint151->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint151->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment152 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment152->setName("skull");
HAnimSegment152->setDEF("hanim_skull");
CTransform* Transform153 = (CTransform *)(m_pScene.createNode("Transform"));
Transform153->setTranslation(new float[3]{0.0044,1.6209,0.0236});
CShape* Shape154 = (CShape *)(m_pScene.createNode("Shape"));
Shape154->setUSE("DiamondShape");
Transform153->addChildren(*Shape154);

HAnimSegment152->addChildren(*Transform153);

CHAnimSite* HAnimSite155 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite155->setName("skull_vertex_tip");
HAnimSite155->setDEF("hanim_skull_vertex_tip");
HAnimSite155->setTranslation(new float[3]{0.005,1.7504,0.0055});
HAnimSegment152->addChildren(*HAnimSite155);

CHAnimSite* HAnimSite156 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite156->setName("sellion_pt");
HAnimSite156->setDEF("hanim_sellion_pt");
HAnimSite156->setTranslation(new float[3]{0.0058,1.6316,0.0852});
HAnimSegment152->addChildren(*HAnimSite156);

CHAnimSite* HAnimSite157 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite157->setName("r_infraorbitale_pt");
HAnimSite157->setDEF("hanim_r_infraorbitale_pt");
HAnimSite157->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
HAnimSegment152->addChildren(*HAnimSite157);

CHAnimSite* HAnimSite158 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite158->setName("l_infraorbitale_pt");
HAnimSite158->setDEF("hanim_l_infraorbitale_pt");
HAnimSite158->setTranslation(new float[3]{0.0341,1.6171,0.0752});
HAnimSegment152->addChildren(*HAnimSite158);

CHAnimSite* HAnimSite159 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite159->setName("supramenton_pt");
HAnimSite159->setDEF("hanim_supramenton_pt");
HAnimSite159->setTranslation(new float[3]{0.0061,1.541,0.0805});
HAnimSegment152->addChildren(*HAnimSite159);

CHAnimSite* HAnimSite160 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite160->setName("r_tragion_pt");
HAnimSite160->setDEF("hanim_r_tragion_pt");
HAnimSite160->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
HAnimSegment152->addChildren(*HAnimSite160);

CHAnimSite* HAnimSite161 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite161->setName("r_gonion_pt");
HAnimSite161->setDEF("hanim_r_gonion_pt");
HAnimSite161->setTranslation(new float[3]{-0.052,1.5529,0.0347});
HAnimSegment152->addChildren(*HAnimSite161);

CHAnimSite* HAnimSite162 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite162->setName("l_tragion_pt");
HAnimSite162->setDEF("hanim_l_tragion_pt");
HAnimSite162->setTranslation(new float[3]{0.0739,1.6348,0.0282});
HAnimSegment152->addChildren(*HAnimSite162);

CHAnimSite* HAnimSite163 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite163->setName("l_gonion_pt");
HAnimSite163->setDEF("hanim_l_gonion_pt");
HAnimSite163->setTranslation(new float[3]{0.0631,1.553,0.033});
HAnimSegment152->addChildren(*HAnimSite163);

CHAnimSite* HAnimSite164 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite164->setName("nuchale_pt");
HAnimSite164->setDEF("hanim_nuchale_pt");
HAnimSite164->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
HAnimSegment152->addChildren(*HAnimSite164);

HAnimJoint151->addChildren(*HAnimSegment152);

HAnimJoint150->addChildren(*HAnimJoint151);

HAnimJoint37->addChildren(*HAnimJoint150);

HAnimHumanoid30->setSkeleton(*HAnimJoint37);

CHAnimSite* HAnimSite165 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite165->setName("DiamondManLOA1_view");
HAnimSite165->setDEF("hanim_DiamondManLOA1_view");
CViewpoint* Viewpoint166 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint166->setDEF("InclinedView");
Viewpoint166->setDescription("Inclined View");
Viewpoint166->setOrientation(new float[4]{-0.113,0.993,0.0347,0.671});
Viewpoint166->setPosition(new float[3]{1.62,1.05,2.06});
HAnimSite165->addChildren(*Viewpoint166);

CViewpoint* Viewpoint167 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint167->setDEF("FrontView");
Viewpoint167->setDescription("Front View");
Viewpoint167->setPosition(new float[3]{0,0.854,2.57665});
HAnimSite165->addChildren(*Viewpoint167);

CViewpoint* Viewpoint168 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint168->setDEF("SideView");
Viewpoint168->setDescription("Side View");
Viewpoint168->setOrientation(new float[4]{0,1,0,1.57079});
Viewpoint168->setPosition(new float[3]{2.5929,0.854,0});
HAnimSite165->addChildren(*Viewpoint168);

CViewpoint* Viewpoint169 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint169->setDEF("TopView");
Viewpoint169->setDescription("Top View");
Viewpoint169->setOrientation(new float[4]{1,0,0,-1.57079});
Viewpoint169->setPosition(new float[3]{0,3.4495,0});
HAnimSite165->addChildren(*Viewpoint169);

HAnimHumanoid30->addViewpoints(*HAnimSite165);

CHAnimJoint* HAnimJoint170 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint170->setUSE("hanim_humanoid_root");
HAnimHumanoid30->addJoints(*HAnimJoint170);

CHAnimJoint* HAnimJoint171 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint171->setUSE("hanim_sacroiliac");
HAnimHumanoid30->addJoints(*HAnimJoint171);

CHAnimJoint* HAnimJoint172 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint172->setUSE("hanim_vl1");
HAnimHumanoid30->addJoints(*HAnimJoint172);

CHAnimJoint* HAnimJoint173 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint173->setUSE("hanim_vc4");
HAnimHumanoid30->addJoints(*HAnimJoint173);

CHAnimJoint* HAnimJoint174 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint174->setUSE("hanim_skullbase");
HAnimHumanoid30->addJoints(*HAnimJoint174);

CHAnimJoint* HAnimJoint175 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint175->setUSE("hanim_vl5");
HAnimHumanoid30->addJoints(*HAnimJoint175);

CHAnimJoint* HAnimJoint176 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint176->setUSE("hanim_l_elbow");
HAnimHumanoid30->addJoints(*HAnimJoint176);

CHAnimJoint* HAnimJoint177 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint177->setUSE("hanim_r_elbow");
HAnimHumanoid30->addJoints(*HAnimJoint177);

CHAnimJoint* HAnimJoint178 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint178->setUSE("hanim_l_hip");
HAnimHumanoid30->addJoints(*HAnimJoint178);

CHAnimJoint* HAnimJoint179 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint179->setUSE("hanim_r_hip");
HAnimHumanoid30->addJoints(*HAnimJoint179);

CHAnimJoint* HAnimJoint180 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint180->setUSE("hanim_l_knee");
HAnimHumanoid30->addJoints(*HAnimJoint180);

CHAnimJoint* HAnimJoint181 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint181->setUSE("hanim_r_knee");
HAnimHumanoid30->addJoints(*HAnimJoint181);

CHAnimJoint* HAnimJoint182 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint182->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid30->addJoints(*HAnimJoint182);

CHAnimJoint* HAnimJoint183 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint183->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid30->addJoints(*HAnimJoint183);

CHAnimJoint* HAnimJoint184 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint184->setUSE("hanim_l_radiocarpal");
HAnimHumanoid30->addJoints(*HAnimJoint184);

CHAnimJoint* HAnimJoint185 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint185->setUSE("hanim_r_radiocarpal");
HAnimHumanoid30->addJoints(*HAnimJoint185);

CHAnimJoint* HAnimJoint186 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint186->setUSE("hanim_l_shoulder");
HAnimHumanoid30->addJoints(*HAnimJoint186);

CHAnimJoint* HAnimJoint187 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint187->setUSE("hanim_r_shoulder");
HAnimHumanoid30->addJoints(*HAnimJoint187);

CHAnimJoint* HAnimJoint188 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint188->setUSE("hanim_l_talocrural");
HAnimHumanoid30->addJoints(*HAnimJoint188);

CHAnimJoint* HAnimJoint189 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint189->setUSE("hanim_r_talocrural");
HAnimHumanoid30->addJoints(*HAnimJoint189);

CHAnimSegment* HAnimSegment190 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment190->setUSE("hanim_pelvis");
HAnimHumanoid30->setSegments(*HAnimSegment190);

CHAnimSegment* HAnimSegment191 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment191->setUSE("hanim_l1");
HAnimHumanoid30->setSegments(*HAnimSegment191);

CHAnimSegment* HAnimSegment192 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment192->setUSE("hanim_c4");
HAnimHumanoid30->setSegments(*HAnimSegment192);

CHAnimSegment* HAnimSegment193 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment193->setUSE("hanim_skull");
HAnimHumanoid30->setSegments(*HAnimSegment193);

CHAnimSegment* HAnimSegment194 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment194->setUSE("hanim_l_calf");
HAnimHumanoid30->setSegments(*HAnimSegment194);

CHAnimSegment* HAnimSegment195 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment195->setUSE("hanim_r_calf");
HAnimHumanoid30->setSegments(*HAnimSegment195);

CHAnimSegment* HAnimSegment196 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment196->setUSE("hanim_l_carpal");
HAnimHumanoid30->setSegments(*HAnimSegment196);

CHAnimSegment* HAnimSegment197 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment197->setUSE("hanim_r_carpal");
HAnimHumanoid30->setSegments(*HAnimSegment197);

CHAnimSegment* HAnimSegment198 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment198->setUSE("hanim_l_forearm");
HAnimHumanoid30->setSegments(*HAnimSegment198);

CHAnimSegment* HAnimSegment199 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment199->setUSE("hanim_r_forearm");
HAnimHumanoid30->setSegments(*HAnimSegment199);

CHAnimSegment* HAnimSegment200 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment200->setUSE("hanim_l_talus");
HAnimHumanoid30->setSegments(*HAnimSegment200);

CHAnimSegment* HAnimSegment201 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment201->setUSE("hanim_r_talus");
HAnimHumanoid30->setSegments(*HAnimSegment201);

CHAnimSegment* HAnimSegment202 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment202->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid30->setSegments(*HAnimSegment202);

CHAnimSegment* HAnimSegment203 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment203->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid30->setSegments(*HAnimSegment203);

CHAnimSegment* HAnimSegment204 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment204->setUSE("hanim_l_thigh");
HAnimHumanoid30->setSegments(*HAnimSegment204);

CHAnimSegment* HAnimSegment205 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment205->setUSE("hanim_r_thigh");
HAnimHumanoid30->setSegments(*HAnimSegment205);

CHAnimSegment* HAnimSegment206 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment206->setUSE("hanim_l_upperarm");
HAnimHumanoid30->setSegments(*HAnimSegment206);

CHAnimSegment* HAnimSegment207 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment207->setUSE("hanim_r_upperarm");
HAnimHumanoid30->setSegments(*HAnimSegment207);

CHAnimSite* HAnimSite208 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite208->setUSE("hanim_skull_vertex_tip");
HAnimHumanoid30->setSites(*HAnimSite208);

CHAnimSite* HAnimSite209 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite209->setUSE("hanim_sellion_pt");
HAnimHumanoid30->setSites(*HAnimSite209);

CHAnimSite* HAnimSite210 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite210->setUSE("hanim_supramenton_pt");
HAnimHumanoid30->setSites(*HAnimSite210);

CHAnimSite* HAnimSite211 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite211->setUSE("hanim_nuchale_pt");
HAnimHumanoid30->setSites(*HAnimSite211);

CHAnimSite* HAnimSite212 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite212->setUSE("hanim_l_calcaneus_posterior_pt");
HAnimHumanoid30->setSites(*HAnimSite212);

CHAnimSite* HAnimSite213 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite213->setUSE("hanim_r_calcaneus_posterior_pt");
HAnimHumanoid30->setSites(*HAnimSite213);

CHAnimSite* HAnimSite214 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite214->setUSE("hanim_l_dactylion_pt");
HAnimHumanoid30->setSites(*HAnimSite214);

CHAnimSite* HAnimSite215 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite215->setUSE("hanim_r_dactylion_pt");
HAnimHumanoid30->setSites(*HAnimSite215);

CHAnimSite* HAnimSite216 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite216->setUSE("hanim_l_femoral_lateral_epicondyle_pt");
HAnimHumanoid30->setSites(*HAnimSite216);

CHAnimSite* HAnimSite217 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite217->setUSE("hanim_r_femoral_lateral_epicondyle_pt");
HAnimHumanoid30->setSites(*HAnimSite217);

CHAnimSite* HAnimSite218 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite218->setUSE("hanim_l_femoral_medial_epicondyle_pt");
HAnimHumanoid30->setSites(*HAnimSite218);

CHAnimSite* HAnimSite219 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite219->setUSE("hanim_r_femoral_medial_epicondyle_pt");
HAnimHumanoid30->setSites(*HAnimSite219);

CHAnimSite* HAnimSite220 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite220->setUSE("hanim_r_gonion_pt");
HAnimHumanoid30->setSites(*HAnimSite220);

CHAnimSite* HAnimSite221 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite221->setUSE("hanim_l_gonion_pt");
HAnimHumanoid30->setSites(*HAnimSite221);

CHAnimSite* HAnimSite222 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite222->setUSE("hanim_l_hand_tip");
HAnimHumanoid30->setSites(*HAnimSite222);

CHAnimSite* HAnimSite223 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite223->setUSE("hanim_r_hand_tip");
HAnimHumanoid30->setSites(*HAnimSite223);

CHAnimSite* HAnimSite224 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite224->setUSE("hanim_l_humeral_lateral_epicondyle_pt");
HAnimHumanoid30->setSites(*HAnimSite224);

CHAnimSite* HAnimSite225 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite225->setUSE("hanim_r_humeral_lateral_epicondyle_pt");
HAnimHumanoid30->setSites(*HAnimSite225);

CHAnimSite* HAnimSite226 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite226->setUSE("hanim_l_humeral_medial_epicondyle_pt");
HAnimHumanoid30->setSites(*HAnimSite226);

CHAnimSite* HAnimSite227 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite227->setUSE("hanim_r_humeral_medial_epicondyle_pt");
HAnimHumanoid30->setSites(*HAnimSite227);

CHAnimSite* HAnimSite228 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite228->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid30->setSites(*HAnimSite228);

CHAnimSite* HAnimSite229 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite229->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid30->setSites(*HAnimSite229);

CHAnimSite* HAnimSite230 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite230->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid30->setSites(*HAnimSite230);

CHAnimSite* HAnimSite231 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite231->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid30->setSites(*HAnimSite231);

CHAnimSite* HAnimSite232 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite232->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid30->setSites(*HAnimSite232);

CHAnimSite* HAnimSite233 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite233->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid30->setSites(*HAnimSite233);

CHAnimSite* HAnimSite234 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite234->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid30->setSites(*HAnimSite234);

CHAnimSite* HAnimSite235 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite235->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid30->setSites(*HAnimSite235);

CHAnimSite* HAnimSite236 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite236->setUSE("hanim_l_metacarpal_phalanx_2_pt");
HAnimHumanoid30->setSites(*HAnimSite236);

CHAnimSite* HAnimSite237 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite237->setUSE("hanim_r_metacarpal_phalanx_2_pt");
HAnimHumanoid30->setSites(*HAnimSite237);

CHAnimSite* HAnimSite238 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite238->setUSE("hanim_l_metacarpal_phalanx_5_pt");
HAnimHumanoid30->setSites(*HAnimSite238);

CHAnimSite* HAnimSite239 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite239->setUSE("hanim_r_metacarpal_phalanx_5_pt");
HAnimHumanoid30->setSites(*HAnimSite239);

CHAnimSite* HAnimSite240 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite240->setUSE("hanim_l_metatarsal_phalanx_1_pt");
HAnimHumanoid30->setSites(*HAnimSite240);

CHAnimSite* HAnimSite241 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite241->setUSE("hanim_r_metatarsal_phalanx_1_pt");
HAnimHumanoid30->setSites(*HAnimSite241);

CHAnimSite* HAnimSite242 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite242->setUSE("hanim_l_metatarsal_phalanx_5_pt");
HAnimHumanoid30->setSites(*HAnimSite242);

CHAnimSite* HAnimSite243 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite243->setUSE("hanim_r_metatarsal_phalanx_5_pt");
HAnimHumanoid30->setSites(*HAnimSite243);

CHAnimSite* HAnimSite244 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite244->setUSE("hanim_l_middistal_tip");
HAnimHumanoid30->setSites(*HAnimSite244);

CHAnimSite* HAnimSite245 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite245->setUSE("hanim_r_middistal_tip");
HAnimHumanoid30->setSites(*HAnimSite245);

CHAnimSite* HAnimSite246 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite246->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid30->setSites(*HAnimSite246);

CHAnimSite* HAnimSite247 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite247->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid30->setSites(*HAnimSite247);

CHAnimSite* HAnimSite248 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite248->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid30->setSites(*HAnimSite248);

CHAnimSite* HAnimSite249 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite249->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid30->setSites(*HAnimSite249);

CHAnimSite* HAnimSite250 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite250->setUSE("hanim_l_radiale_pt");
HAnimHumanoid30->setSites(*HAnimSite250);

CHAnimSite* HAnimSite251 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite251->setUSE("hanim_r_radiale_pt");
HAnimHumanoid30->setSites(*HAnimSite251);

CHAnimSite* HAnimSite252 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite252->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid30->setSites(*HAnimSite252);

CHAnimSite* HAnimSite253 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite253->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid30->setSites(*HAnimSite253);

CHAnimSite* HAnimSite254 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite254->setUSE("hanim_l_tarsal_distal_phalanx_2_pt");
HAnimHumanoid30->setSites(*HAnimSite254);

CHAnimSite* HAnimSite255 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite255->setUSE("hanim_r_tarsal_distal_phalanx_2_pt");
HAnimHumanoid30->setSites(*HAnimSite255);

CHAnimSite* HAnimSite256 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite256->setUSE("hanim_r_tragion_pt");
HAnimHumanoid30->setSites(*HAnimSite256);

CHAnimSite* HAnimSite257 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite257->setUSE("hanim_l_tragion_pt");
HAnimHumanoid30->setSites(*HAnimSite257);

CHAnimSite* HAnimSite258 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite258->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid30->setSites(*HAnimSite258);

CHAnimSite* HAnimSite259 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite259->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid30->setSites(*HAnimSite259);

group->addChildren(*HAnimHumanoid30);

X3D0->setScene(*Scene26);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

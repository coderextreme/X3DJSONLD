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
meta3->setContent("HAnim2SpecificationLOA3Invisible.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template.");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("reference");
meta5->setContent("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("24 April 2013");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("23 December 2021");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("creator");
meta8->setContent("Matthew T. Beitler, Joe D. Williams, Don Brutzman");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("HAnim2SpecificationLOA3Illustrated.x3d");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("HAnim2SpecificationLOA3Animation.x3d");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("HAnimSpecificationExampleChangeLog.txt");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("Image");
meta12->setContent("images/BonesAllSkeletonFrontViewLOA1.png");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("Image");
meta13->setContent("images/BonesAllSkeletonFrontViewLOA2.png");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("Image");
meta14->setContent("images/BonesAllSkeletonFrontViewLOA3.png");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("TODO");
meta15->setContent("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("TODO");
meta16->setContent("insert MetadataInteger nodes indicating LOA for each Joint and Segment");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("reference");
meta17->setContent("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("reference");
meta18->setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("reference");
meta19->setContent("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("translator");
meta20->setContent("Don Brutzman and Joe Williams");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("generator");
meta21->setContent("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo");
head1->addMeta(*meta21);

Cmeta* meta22 = new Cmeta();
meta22->setName("reference");
meta22->setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl");
head1->addMeta(*meta22);

Cmeta* meta23 = new Cmeta();
meta23->setName("reference");
meta23->setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d");
head1->addMeta(*meta23);

Cmeta* meta24 = new Cmeta();
meta24->setName("reference");
meta24->setContent("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d");
head1->addMeta(*meta24);

Cmeta* meta25 = new Cmeta();
meta25->setName("reference");
meta25->setContent("HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames");
head1->addMeta(*meta25);

Cmeta* meta26 = new Cmeta();
meta26->setName("generator");
meta26->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta26);

Cmeta* meta27 = new Cmeta();
meta27->setName("identifier");
meta27->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnim2SpecificationLOA3Invisible.x3d");
head1->addMeta(*meta27);

Cmeta* meta28 = new Cmeta();
meta28->setName("license");
meta28->setContent("../license.html");
head1->addMeta(*meta28);

X3D0->setHead(*head1);

CScene* Scene29 = new CScene();
CBackground* Background30 = (CBackground *)(m_pScene.createNode("Background"));
Background30->setSkyColor(new float[3]{0.3,0.3,0.3});
group->addChildren(*Background30);

CNavigationInfo* NavigationInfo31 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo31);

CGroup* Group32 = (CGroup *)(m_pScene.createNode("Group"));
Group32->setDEF("Original_WorldInfo");
CWorldInfo* WorldInfo33 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo33->setInfo(new CString[1]{" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "}, 1);
WorldInfo33->setTitle("HANIM 200x Default Joint Centers, LOA3");
Group32->addChildren(*WorldInfo33);

group->addChildren(*Group32);

//TODO move viewpoints to be internal to HAnimHumanoid
//Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
CViewpoint* Viewpoint34 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint34->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint34->setDescription("Humanoid LOA 3 Front");
Viewpoint34->setPosition(new float[3]{0,0.4,4});
group->addChildren(*Viewpoint34);

CViewpoint* Viewpoint35 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint35->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint35->setDescription("Humanoid LOA 3 Front Close");
Viewpoint35->setPosition(new float[3]{0,0.8,2});
group->addChildren(*Viewpoint35);

CViewpoint* Viewpoint36 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint36->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint36->setDescription("Humanoid LOA 3 Front Closer");
Viewpoint36->setPosition(new float[3]{0,1.2,1});
group->addChildren(*Viewpoint36);

CViewpoint* Viewpoint37 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint37->setCenterOfRotation(new float[3]{0,1.5,0.0016});
Viewpoint37->setDescription("Humanoid LOA 3 Front Face");
Viewpoint37->setPosition(new float[3]{0,1.63,1});
group->addChildren(*Viewpoint37);

CViewpoint* Viewpoint38 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint38->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint38->setDescription("Humanoid LOA 3 Right Side");
Viewpoint38->setOrientation(new float[4]{0,1,0,1.5708});
Viewpoint38->setPosition(new float[3]{2.6,0.8,0});
group->addChildren(*Viewpoint38);

CViewpoint* Viewpoint39 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint39->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint39->setDescription("Humanoid LOA 3 Right Side Close");
Viewpoint39->setOrientation(new float[4]{0,1,0,1.2});
Viewpoint39->setPosition(new float[3]{1,0.8,0.5});
group->addChildren(*Viewpoint39);

CViewpoint* Viewpoint40 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint40->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint40->setDescription("Humanoid LOA 3 Left Side Close");
Viewpoint40->setOrientation(new float[4]{0,1,0,-1.2});
Viewpoint40->setPosition(new float[3]{-1,0.8,0.5});
group->addChildren(*Viewpoint40);

CViewpoint* Viewpoint41 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint41->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint41->setDescription("Humanoid LOA 3 Left Side");
Viewpoint41->setOrientation(new float[4]{0,1,0,-1.5708});
Viewpoint41->setPosition(new float[3]{-2.6,0.8,0});
group->addChildren(*Viewpoint41);

CViewpoint* Viewpoint42 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint42->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint42->setDescription("Humanoid LOA 3 Top");
Viewpoint42->setOrientation(new float[4]{1,0,0,-1.5708});
Viewpoint42->setPosition(new float[3]{0,3.5,0});
group->addChildren(*Viewpoint42);

CHAnimHumanoid* HAnimHumanoid43 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid43->setName("humanoid");
HAnimHumanoid43->setDEF("hanim_humanoid");
HAnimHumanoid43->setLoa(3);
HAnimHumanoid43->setVersion("2.0");
//original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is allowed
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//right between the eyes, stationary position not animating except with body itself
CMetadataSet* MetadataSet44 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet44->setName("HAnimHumanoid.info");
MetadataSet44->setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
CMetadataString* MetadataString45 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString45->setName("authorName");
MetadataString45->setValue(new CString[1]{"Matthew T. Beitler Joe D. Williams Don Brutzman"}, 1);
MetadataSet44->setValue(*MetadataString45);

CMetadataString* MetadataString46 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString46->setName("authorEmail");
MetadataString46->setValue(new CString[1]{"HAnim@web3D.org"}, 1);
MetadataSet44->addValue(*MetadataString46);

CMetadataString* MetadataString47 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString47->setName("copyright");
MetadataString47->setValue(new CString[1]{"none"}, 1);
MetadataSet44->addValue(*MetadataString47);

CMetadataString* MetadataString48 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString48->setName("creationDate");
MetadataString48->setValue(new CString[1]{"12 May 1999"}, 1);
MetadataSet44->addValue(*MetadataString48);

CMetadataFloat* MetadataFloat49 = (CMetadataFloat *)(m_pScene.createNode("MetadataFloat"));
MetadataFloat49->setName("height");
MetadataFloat49->setValue(new float[1]{1.7504}, 1);
MetadataSet44->addValue(*MetadataFloat49);

CMetadataString* MetadataString50 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString50->setName("humanoidVersion");
MetadataString50->setValue(new CString[1]{"2.0"}, 1);
MetadataSet44->addValue(*MetadataString50);

CMetadataString* MetadataString51 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString51->setName("usageRestrictions");
MetadataString51->setValue(new CString[1]{"none"}, 1);
MetadataSet44->addValue(*MetadataString51);

HAnimHumanoid43->setMetadata(*MetadataSet44);

CHAnimJoint* HAnimJoint52 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint52->setName("humanoid_root");
HAnimJoint52->setDEF("hanim_humanoid_root");
HAnimJoint52->setCenter(new float[3]{0,0.824,0.0277});
HAnimJoint52->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint52->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment53 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment53->setName("sacrum");
HAnimSegment53->setDEF("hanim_sacrum");
HAnimJoint52->addChildren(*HAnimSegment53);

CHAnimJoint* HAnimJoint54 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint54->setName("sacroiliac");
HAnimJoint54->setDEF("hanim_sacroiliac");
HAnimJoint54->setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint54->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint54->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment55 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment55->setName("pelvis");
HAnimSegment55->setDEF("hanim_pelvis");
CHAnimSite* HAnimSite56 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite56->setName("r_iliocristale_pt");
HAnimSite56->setDEF("hanim_r_iliocristale_pt");
HAnimSite56->setTranslation(new float[3]{-0.1525,1.0628,0.0035});
HAnimSegment55->addChildren(*HAnimSite56);

CHAnimSite* HAnimSite57 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite57->setName("r_trochanterion_pt");
HAnimSite57->setDEF("hanim_r_trochanterion_pt");
HAnimSite57->setTranslation(new float[3]{-0.1689,0.8419,0.0352});
HAnimSegment55->addChildren(*HAnimSite57);

CHAnimSite* HAnimSite58 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite58->setName("l_iliocristale_pt");
HAnimSite58->setDEF("hanim_l_iliocristale_pt");
HAnimSite58->setTranslation(new float[3]{0.1612,1.0537,0.0008});
HAnimSegment55->addChildren(*HAnimSite58);

CHAnimSite* HAnimSite59 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite59->setName("l_trochanterion_pt");
HAnimSite59->setDEF("hanim_l_trochanterion_pt");
HAnimSite59->setTranslation(new float[3]{0.1677,0.8336,0.0303});
HAnimSegment55->addChildren(*HAnimSite59);

CHAnimSite* HAnimSite60 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite60->setName("r_asis_pt");
HAnimSite60->setDEF("hanim_r_asis_pt");
HAnimSite60->setTranslation(new float[3]{-0.0887,1.0021,0.1112});
HAnimSegment55->addChildren(*HAnimSite60);

CHAnimSite* HAnimSite61 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite61->setName("l_asis_pt");
HAnimSite61->setDEF("hanim_l_asis_pt");
HAnimSite61->setTranslation(new float[3]{0.0925,0.9983,0.1052});
HAnimSegment55->addChildren(*HAnimSite61);

CHAnimSite* HAnimSite62 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite62->setName("r_psis_pt");
HAnimSite62->setDEF("hanim_r_psis_pt");
HAnimSite62->setTranslation(new float[3]{-0.0716,1.019,-0.1138});
HAnimSegment55->addChildren(*HAnimSite62);

CHAnimSite* HAnimSite63 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite63->setName("l_psis_pt");
HAnimSite63->setDEF("hanim_l_psis_pt");
HAnimSite63->setTranslation(new float[3]{0.0774,1.019,-0.1151});
HAnimSegment55->addChildren(*HAnimSite63);

CHAnimSite* HAnimSite64 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite64->setName("crotch_pt");
HAnimSite64->setDEF("hanim_crotch_pt");
HAnimSite64->setTranslation(new float[3]{0.0034,0.8266,0.0257});
HAnimSegment55->addChildren(*HAnimSite64);

HAnimJoint54->addChildren(*HAnimSegment55);

CHAnimJoint* HAnimJoint65 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint65->setName("l_hip");
HAnimJoint65->setDEF("hanim_l_hip");
HAnimJoint65->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint65->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint65->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment66 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment66->setName("l_thigh");
HAnimSegment66->setDEF("hanim_l_thigh");
CHAnimSite* HAnimSite67 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite67->setName("l_knee_crease_pt");
HAnimSite67->setDEF("hanim_l_knee_crease_pt");
HAnimSite67->setTranslation(new float[3]{0.0993,0.4881,-0.0309});
HAnimSegment66->addChildren(*HAnimSite67);

CHAnimSite* HAnimSite68 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite68->setName("l_femoral_lateral_epicondyle_pt");
HAnimSite68->setDEF("hanim_l_femoral_lateral_epicondyle_pt");
HAnimSite68->setTranslation(new float[3]{0.1598,0.4967,0.0297});
HAnimSegment66->addChildren(*HAnimSite68);

CHAnimSite* HAnimSite69 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite69->setName("l_femoral_medial_epicondyle_pt");
HAnimSite69->setDEF("hanim_l_femoral_medial_epicondyle_pt");
HAnimSite69->setTranslation(new float[3]{0.0398,0.4946,0.0303});
HAnimSegment66->addChildren(*HAnimSite69);

HAnimJoint65->addChildren(*HAnimSegment66);

CHAnimJoint* HAnimJoint70 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint70->setName("l_knee");
HAnimJoint70->setDEF("hanim_l_knee");
HAnimJoint70->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint70->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint70->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment71 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment71->setName("l_calf");
HAnimSegment71->setDEF("hanim_l_calf");
HAnimJoint70->addChildren(*HAnimSegment71);

CHAnimJoint* HAnimJoint72 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint72->setName("l_talocrural");
HAnimJoint72->setDEF("hanim_l_talocrural");
HAnimJoint72->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint72->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint72->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment73 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment73->setName("l_talus");
HAnimSegment73->setDEF("hanim_l_talus");
CHAnimSite* HAnimSite74 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite74->setName("l_lateral_malleolus_pt");
HAnimSite74->setDEF("hanim_l_lateral_malleolus_pt");
HAnimSite74->setTranslation(new float[3]{0.1308,0.0597,-0.1032});
HAnimSegment73->addChildren(*HAnimSite74);

CHAnimSite* HAnimSite75 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite75->setName("l_medial_malleolus_pt");
HAnimSite75->setDEF("hanim_l_medial_malleolus_pt");
HAnimSite75->setTranslation(new float[3]{0.089,0.0716,-0.0881});
HAnimSegment73->addChildren(*HAnimSite75);

CHAnimSite* HAnimSite76 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite76->setName("l_sphyrion_pt");
HAnimSite76->setDEF("hanim_l_sphyrion_pt");
HAnimSite76->setTranslation(new float[3]{0.089,0.0575,-0.0943});
HAnimSegment73->addChildren(*HAnimSite76);

CHAnimSite* HAnimSite77 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite77->setName("l_calcaneus_posterior_pt");
HAnimSite77->setDEF("hanim_l_calcaneus_posterior_pt");
HAnimSite77->setTranslation(new float[3]{0.0974,0.0259,-0.1171});
HAnimSegment73->addChildren(*HAnimSite77);

HAnimJoint72->addChildren(*HAnimSegment73);

CHAnimJoint* HAnimJoint78 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint78->setName("l_tarsometatarsal_2");
HAnimJoint78->setDEF("hanim_l_tarsometatarsal_2");
HAnimJoint78->setCenter(new float[3]{0.1086,0.0001,-0.0368});
HAnimJoint78->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint78->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment79 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment79->setName("l_metatarsal_2");
HAnimSegment79->setDEF("hanim_l_metatarsal_2");
HAnimJoint78->addChildren(*HAnimSegment79);

CHAnimJoint* HAnimJoint80 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint80->setName("l_metatarsophalangeal_2");
HAnimJoint80->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint80->setCenter(new float[3]{0.1086,0.0001,0.0368});
HAnimJoint80->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint80->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment81 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment81->setName("l_tarsal_proximal_phalanx_2");
HAnimSegment81->setDEF("hanim_l_tarsal_proximal_phalanx_2");
CHAnimSite* HAnimSite82 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite82->setName("l_metatarsal_phalanx_1_pt");
HAnimSite82->setDEF("hanim_l_metatarsal_phalanx_1_pt");
HAnimSite82->setTranslation(new float[3]{0.0816,0.0232,0.0106});
HAnimSegment81->addChildren(*HAnimSite82);

HAnimJoint80->addChildren(*HAnimSegment81);

CHAnimJoint* HAnimJoint83 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint83->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint83->setDEF("hanim_l_tarsal_distal_interphalangeal_2");
HAnimJoint83->setCenter(new float[3]{0.1086,0,0.0762});
HAnimJoint83->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint83->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment84 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment84->setName("l_tarsal_distal_phalanx_2");
HAnimSegment84->setDEF("hanim_l_tarsal_distal_phalanx_2");
CHAnimSite* HAnimSite85 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite85->setName("l_forefoot_tip");
HAnimSite85->setDEF("hanim_l_forefoot_tip");
HAnimSite85->setTranslation(new float[3]{0.1354,0.0016,0.1476});
HAnimSegment84->addChildren(*HAnimSite85);

CHAnimSite* HAnimSite86 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite86->setName("l_metatarsal_phalanx_5_pt");
HAnimSite86->setDEF("hanim_l_metatarsal_phalanx_5_pt");
HAnimSite86->setTranslation(new float[3]{0.1825,0.007,0.0928});
HAnimSegment84->addChildren(*HAnimSite86);

CHAnimSite* HAnimSite87 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite87->setName("l_tarsal_distal_phalanx_2_pt");
HAnimSite87->setDEF("hanim_l_tarsal_distal_phalanx_2_pt");
HAnimSite87->setTranslation(new float[3]{0.1195,0.0079,0.1433});
HAnimSegment84->addChildren(*HAnimSite87);

HAnimJoint83->addChildren(*HAnimSegment84);

HAnimJoint80->addChildren(*HAnimJoint83);

HAnimJoint78->addChildren(*HAnimJoint80);

HAnimJoint72->addChildren(*HAnimJoint78);

HAnimJoint70->addChildren(*HAnimJoint72);

HAnimJoint65->addChildren(*HAnimJoint70);

HAnimJoint54->addChildren(*HAnimJoint65);

CHAnimJoint* HAnimJoint88 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint88->setName("r_hip");
HAnimJoint88->setDEF("hanim_r_hip");
HAnimJoint88->setCenter(new float[3]{-0.0961,0.9124,-0.0001});
HAnimJoint88->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint88->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment89 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment89->setName("r_thigh");
HAnimSegment89->setDEF("hanim_r_thigh");
CHAnimSite* HAnimSite90 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite90->setName("r_knee_crease_pt");
HAnimSite90->setDEF("hanim_r_knee_crease_pt");
HAnimSite90->setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
HAnimSegment89->addChildren(*HAnimSite90);

CHAnimSite* HAnimSite91 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite91->setName("r_femoral_lateral_epicondyle_pt");
HAnimSite91->setDEF("hanim_r_femoral_lateral_epicondyle_pt");
HAnimSite91->setTranslation(new float[3]{-0.1421,0.4992,0.031});
HAnimSegment89->addChildren(*HAnimSite91);

CHAnimSite* HAnimSite92 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite92->setName("r_femoral_medial_epicondyle_pt");
HAnimSite92->setDEF("hanim_r_femoral_medial_epicondyle_pt");
HAnimSite92->setTranslation(new float[3]{-0.0221,0.5014,0.0289});
HAnimSegment89->addChildren(*HAnimSite92);

HAnimJoint88->addChildren(*HAnimSegment89);

CHAnimJoint* HAnimJoint93 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint93->setName("r_knee");
HAnimJoint93->setDEF("hanim_r_knee");
HAnimJoint93->setCenter(new float[3]{-0.104,0.4867,0.0308});
HAnimJoint93->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint93->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment94 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment94->setName("r_calf");
HAnimSegment94->setDEF("hanim_r_calf");
HAnimJoint93->addChildren(*HAnimSegment94);

CHAnimJoint* HAnimJoint95 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint95->setName("r_talocrural");
HAnimJoint95->setDEF("hanim_r_talocrural");
HAnimJoint95->setCenter(new float[3]{-0.1101,0.0656,-0.0736});
HAnimJoint95->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint95->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment96 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment96->setName("r_talus");
HAnimSegment96->setDEF("hanim_r_talus");
CHAnimSite* HAnimSite97 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite97->setName("r_lateral_malleolus_pt");
HAnimSite97->setDEF("hanim_r_lateral_malleolus_pt");
HAnimSite97->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
HAnimSegment96->addChildren(*HAnimSite97);

CHAnimSite* HAnimSite98 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite98->setName("r_medial_malleolus_pt");
HAnimSite98->setDEF("hanim_r_medial_malleolus_pt");
HAnimSite98->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
HAnimSegment96->addChildren(*HAnimSite98);

CHAnimSite* HAnimSite99 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite99->setName("r_sphyrion_pt");
HAnimSite99->setDEF("hanim_r_sphyrion_pt");
HAnimSite99->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
HAnimSegment96->addChildren(*HAnimSite99);

CHAnimSite* HAnimSite100 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite100->setName("r_calcaneus_posterior_pt");
HAnimSite100->setDEF("hanim_r_calcaneus_posterior_pt");
HAnimSite100->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
HAnimSegment96->addChildren(*HAnimSite100);

HAnimJoint95->addChildren(*HAnimSegment96);

CHAnimJoint* HAnimJoint101 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint101->setName("r_tarsometatarsal_2");
HAnimJoint101->setDEF("hanim_r_tarsometatarsal_2");
HAnimJoint101->setCenter(new float[3]{-0.1086,0.0001,-0.0368});
HAnimJoint101->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint101->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment102 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment102->setName("r_metatarsal_2");
HAnimSegment102->setDEF("hanim_r_metatarsal_2");
HAnimJoint101->addChildren(*HAnimSegment102);

CHAnimJoint* HAnimJoint103 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint103->setName("r_metatarsophalangeal_2");
HAnimJoint103->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint103->setCenter(new float[3]{-0.1086,0.0001,0.0368});
HAnimJoint103->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint103->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment104 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment104->setName("r_tarsal_proximal_phalanx_2");
HAnimSegment104->setDEF("hanim_r_tarsal_proximal_phalanx_2");
CHAnimSite* HAnimSite105 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite105->setName("r_metatarsal_phalanx_1_pt");
HAnimSite105->setDEF("hanim_r_metatarsal_phalanx_1_pt");
HAnimSite105->setTranslation(new float[3]{-0.0521,0.026,0.0127});
HAnimSegment104->addChildren(*HAnimSite105);

HAnimJoint103->addChildren(*HAnimSegment104);

CHAnimJoint* HAnimJoint106 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint106->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint106->setDEF("hanim_r_tarsal_distal_interphalangeal_2");
HAnimJoint106->setCenter(new float[3]{-0.1086,0,0.0762});
HAnimJoint106->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint106->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment107 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment107->setName("r_tarsal_distal_phalanx_2");
HAnimSegment107->setDEF("hanim_r_tarsal_distal_phalanx_2");
CHAnimSite* HAnimSite108 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite108->setName("r_forefoot_tip");
HAnimSite108->setDEF("hanim_r_forefoot_tip");
HAnimSite108->setTranslation(new float[3]{-0.1043,0.0227,0.145});
HAnimSegment107->addChildren(*HAnimSite108);

CHAnimSite* HAnimSite109 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite109->setName("r_metatarsal_phalanx_5_pt");
HAnimSite109->setDEF("hanim_r_metatarsal_phalanx_5_pt");
HAnimSite109->setTranslation(new float[3]{-0.1523,0.0166,0.0895});
HAnimSegment107->addChildren(*HAnimSite109);

CHAnimSite* HAnimSite110 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite110->setName("r_tarsal_distal_phalanx_2_pt");
HAnimSite110->setDEF("hanim_r_tarsal_distal_phalanx_2_pt");
HAnimSite110->setTranslation(new float[3]{-0.0883,0.0134,0.1383});
HAnimSegment107->addChildren(*HAnimSite110);

HAnimJoint106->addChildren(*HAnimSegment107);

HAnimJoint103->addChildren(*HAnimJoint106);

HAnimJoint101->addChildren(*HAnimJoint103);

HAnimJoint95->addChildren(*HAnimJoint101);

HAnimJoint93->addChildren(*HAnimJoint95);

HAnimJoint88->addChildren(*HAnimJoint93);

HAnimJoint54->addChildren(*HAnimJoint88);

HAnimJoint52->addChildren(*HAnimJoint54);

CHAnimJoint* HAnimJoint111 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint111->setName("vl5");
HAnimJoint111->setDEF("hanim_vl5");
HAnimJoint111->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint111->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint111->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment112 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment112->setName("l5");
HAnimSegment112->setDEF("hanim_l5");
CHAnimSite* HAnimSite113 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite113->setName("waist_preferred_posterior_pt");
HAnimSite113->setDEF("hanim_waist_preferred_posterior_pt");
HAnimSite113->setTranslation(new float[3]{0,1.0915,-0.1091});
HAnimSegment112->addChildren(*HAnimSite113);

CHAnimSite* HAnimSite114 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite114->setName("navel_pt");
HAnimSite114->setDEF("hanim_navel_pt");
HAnimSite114->setTranslation(new float[3]{0.0069,1.0966,0.1017});
HAnimSegment112->addChildren(*HAnimSite114);

HAnimJoint111->addChildren(*HAnimSegment112);

CHAnimJoint* HAnimJoint115 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint115->setName("vl4");
HAnimJoint115->setDEF("hanim_vl4");
HAnimJoint115->setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimJoint115->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint115->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment116 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment116->setName("l4");
HAnimSegment116->setDEF("hanim_l4");
HAnimJoint115->addChildren(*HAnimSegment116);

CHAnimJoint* HAnimJoint117 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint117->setName("vl3");
HAnimJoint117->setDEF("hanim_vl3");
HAnimJoint117->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint117->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint117->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment118 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment118->setName("l3");
HAnimSegment118->setDEF("hanim_l3");
HAnimJoint117->addChildren(*HAnimSegment118);

CHAnimJoint* HAnimJoint119 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint119->setName("vl2");
HAnimJoint119->setDEF("hanim_vl2");
HAnimJoint119->setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimJoint119->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint119->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment120 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment120->setName("l2");
HAnimSegment120->setDEF("hanim_l2");
CHAnimSite* HAnimSite121 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite121->setName("r_rib10_pt");
HAnimSite121->setDEF("hanim_r_rib10_pt");
HAnimSite121->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
HAnimSegment120->addChildren(*HAnimSite121);

CHAnimSite* HAnimSite122 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite122->setName("l_rib10_pt");
HAnimSite122->setDEF("hanim_l_rib10_pt");
HAnimSite122->setTranslation(new float[3]{0.0871,1.1925,0.0992});
HAnimSegment120->addChildren(*HAnimSite122);

CHAnimSite* HAnimSite123 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite123->setName("rib10_midspine_pt");
HAnimSite123->setDEF("hanim_rib10_midspine_pt");
HAnimSite123->setTranslation(new float[3]{0.0049,1.1908,-0.1113});
HAnimSegment120->addChildren(*HAnimSite123);

HAnimJoint119->addChildren(*HAnimSegment120);

CHAnimJoint* HAnimJoint124 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint124->setName("vl1");
HAnimJoint124->setDEF("hanim_vl1");
HAnimJoint124->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint124->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint124->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment125 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment125->setName("l1");
HAnimSegment125->setDEF("hanim_l1");
HAnimJoint124->addChildren(*HAnimSegment125);

CHAnimJoint* HAnimJoint126 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint126->setName("vt12");
HAnimJoint126->setDEF("hanim_vt12");
HAnimJoint126->setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimJoint126->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint126->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment127 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment127->setName("t12");
HAnimSegment127->setDEF("hanim_t12");
HAnimJoint126->addChildren(*HAnimSegment127);

CHAnimJoint* HAnimJoint128 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint128->setName("vt11");
HAnimJoint128->setDEF("hanim_vt11");
HAnimJoint128->setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimJoint128->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint128->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment129 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment129->setName("t11");
HAnimSegment129->setDEF("hanim_t11");
HAnimJoint128->addChildren(*HAnimSegment129);

CHAnimJoint* HAnimJoint130 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint130->setName("vt10");
HAnimJoint130->setDEF("hanim_vt10");
HAnimJoint130->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint130->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint130->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment131 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment131->setName("t10");
HAnimSegment131->setDEF("hanim_t10");
CHAnimSite* HAnimSite132 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite132->setName("substernale_pt");
HAnimSite132->setDEF("hanim_substernale_pt");
HAnimSite132->setTranslation(new float[3]{0.0085,1.2995,0.1147});
HAnimSegment131->addChildren(*HAnimSite132);

HAnimJoint130->addChildren(*HAnimSegment131);

CHAnimJoint* HAnimJoint133 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint133->setName("vt9");
HAnimJoint133->setDEF("hanim_vt9");
HAnimJoint133->setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimJoint133->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint133->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment134 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment134->setName("t9");
HAnimSegment134->setDEF("hanim_t9");
CHAnimSite* HAnimSite135 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite135->setName("r_thelion_pt");
HAnimSite135->setDEF("hanim_r_thelion_pt");
HAnimSite135->setTranslation(new float[3]{-0.0736,1.3385,0.1217});
HAnimSegment134->addChildren(*HAnimSite135);

CHAnimSite* HAnimSite136 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite136->setName("l_thelion_pt");
HAnimSite136->setDEF("hanim_l_thelion_pt");
HAnimSite136->setTranslation(new float[3]{0.0918,1.3382,0.1192});
HAnimSegment134->addChildren(*HAnimSite136);

HAnimJoint133->addChildren(*HAnimSegment134);

CHAnimJoint* HAnimJoint137 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint137->setName("vt8");
HAnimJoint137->setDEF("hanim_vt8");
HAnimJoint137->setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimJoint137->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint137->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment138 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment138->setName("t8");
HAnimSegment138->setDEF("hanim_t8");
HAnimJoint137->addChildren(*HAnimSegment138);

CHAnimJoint* HAnimJoint139 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint139->setName("vt7");
HAnimJoint139->setDEF("hanim_vt7");
HAnimJoint139->setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimJoint139->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint139->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment140 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment140->setName("t7");
HAnimSegment140->setDEF("hanim_t7");
HAnimJoint139->addChildren(*HAnimSegment140);

CHAnimJoint* HAnimJoint141 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint141->setName("vt6");
HAnimJoint141->setDEF("hanim_vt6");
HAnimJoint141->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint141->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint141->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment142 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment142->setName("t6");
HAnimSegment142->setDEF("hanim_t6");
HAnimJoint141->addChildren(*HAnimSegment142);

CHAnimJoint* HAnimJoint143 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint143->setName("vt5");
HAnimJoint143->setDEF("hanim_vt5");
HAnimJoint143->setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimJoint143->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint143->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment144 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment144->setName("t5");
HAnimSegment144->setDEF("hanim_t5");
HAnimJoint143->addChildren(*HAnimSegment144);

CHAnimJoint* HAnimJoint145 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint145->setName("vt4");
HAnimJoint145->setDEF("hanim_vt4");
HAnimJoint145->setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimJoint145->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint145->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment146 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment146->setName("t4");
HAnimSegment146->setDEF("hanim_t4");
HAnimJoint145->addChildren(*HAnimSegment146);

CHAnimJoint* HAnimJoint147 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint147->setName("vt3");
HAnimJoint147->setDEF("hanim_vt3");
HAnimJoint147->setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimJoint147->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint147->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment148 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment148->setName("t3");
HAnimSegment148->setDEF("hanim_t3");
HAnimJoint147->addChildren(*HAnimSegment148);

CHAnimJoint* HAnimJoint149 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint149->setName("vt2");
HAnimJoint149->setDEF("hanim_vt2");
HAnimJoint149->setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimJoint149->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint149->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment150 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment150->setName("t2");
HAnimSegment150->setDEF("hanim_t2");
HAnimJoint149->addChildren(*HAnimSegment150);

CHAnimJoint* HAnimJoint151 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint151->setName("vt1");
HAnimJoint151->setDEF("hanim_vt1");
HAnimJoint151->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint151->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint151->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment152 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment152->setName("t1");
HAnimSegment152->setDEF("hanim_t1");
CHAnimSite* HAnimSite153 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite153->setName("suprasternale_pt");
HAnimSite153->setDEF("hanim_suprasternale_pt");
HAnimSite153->setTranslation(new float[3]{0.0084,1.4714,0.0551});
HAnimSegment152->addChildren(*HAnimSite153);

CHAnimSite* HAnimSite154 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite154->setName("cervicale_pt");
HAnimSite154->setDEF("hanim_cervicale_pt");
HAnimSite154->setTranslation(new float[3]{0.0064,1.52,-0.0815});
HAnimSegment152->addChildren(*HAnimSite154);

HAnimJoint151->addChildren(*HAnimSegment152);

CHAnimJoint* HAnimJoint155 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint155->setName("vc7");
HAnimJoint155->setDEF("hanim_vc7");
HAnimJoint155->setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimJoint155->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint155->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment156 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment156->setName("c7");
HAnimSegment156->setDEF("hanim_c7");
CHAnimSite* HAnimSite157 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite157->setName("r_neck_base_pt");
HAnimSite157->setDEF("hanim_r_neck_base_pt");
HAnimSite157->setTranslation(new float[3]{-0.0419,1.5149,-0.022});
HAnimSegment156->addChildren(*HAnimSite157);

CHAnimSite* HAnimSite158 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite158->setName("l_neck_base_pt");
HAnimSite158->setDEF("hanim_l_neck_base_pt");
HAnimSite158->setTranslation(new float[3]{0.0646,1.5141,-0.038});
HAnimSegment156->addChildren(*HAnimSite158);

HAnimJoint155->addChildren(*HAnimSegment156);

CHAnimJoint* HAnimJoint159 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint159->setName("vc6");
HAnimJoint159->setDEF("hanim_vc6");
HAnimJoint159->setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimJoint159->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint159->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment160 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment160->setName("c6");
HAnimSegment160->setDEF("hanim_c6");
HAnimJoint159->addChildren(*HAnimSegment160);

CHAnimJoint* HAnimJoint161 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint161->setName("vc5");
HAnimJoint161->setDEF("hanim_vc5");
HAnimJoint161->setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimJoint161->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint161->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment162 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment162->setName("c5");
HAnimSegment162->setDEF("hanim_c5");
HAnimJoint161->addChildren(*HAnimSegment162);

CHAnimJoint* HAnimJoint163 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint163->setName("vc4");
HAnimJoint163->setDEF("hanim_vc4");
HAnimJoint163->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint163->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint163->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment164 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment164->setName("c4");
HAnimSegment164->setDEF("hanim_c4");
HAnimJoint163->addChildren(*HAnimSegment164);

CHAnimJoint* HAnimJoint165 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint165->setName("vc3");
HAnimJoint165->setDEF("hanim_vc3");
HAnimJoint165->setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimJoint165->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint165->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment166 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment166->setName("c3");
HAnimSegment166->setDEF("hanim_c3");
HAnimJoint165->addChildren(*HAnimSegment166);

CHAnimJoint* HAnimJoint167 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint167->setName("vc2");
HAnimJoint167->setDEF("hanim_vc2");
HAnimJoint167->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint167->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint167->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment168 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment168->setName("c2");
HAnimSegment168->setDEF("hanim_c2");
HAnimJoint167->addChildren(*HAnimSegment168);

CHAnimJoint* HAnimJoint169 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint169->setName("vc1");
HAnimJoint169->setDEF("hanim_vc1");
HAnimJoint169->setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimJoint169->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint169->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment170 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment170->setName("c1");
HAnimSegment170->setDEF("hanim_c1");
HAnimJoint169->addChildren(*HAnimSegment170);

CHAnimJoint* HAnimJoint171 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint171->setName("skullbase");
HAnimJoint171->setDEF("hanim_skullbase");
HAnimJoint171->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint171->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint171->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment172 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment172->setName("skull");
HAnimSegment172->setDEF("hanim_skull");
CHAnimSite* HAnimSite173 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite173->setName("skull_vertex_tip");
HAnimSite173->setDEF("hanim_skull_vertex_tip");
HAnimSite173->setTranslation(new float[3]{0.005,1.7504,0.0055});
//TODO move skull_tip x to zero, check others for symmetry
HAnimSegment172->addChildren(*HAnimSite173);

CHAnimSite* HAnimSite174 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite174->setName("sellion_pt");
HAnimSite174->setDEF("hanim_sellion_pt");
HAnimSite174->setTranslation(new float[3]{0.0058,1.6316,0.0852});
HAnimSegment172->addChildren(*HAnimSite174);

CHAnimSite* HAnimSite175 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite175->setName("r_infraorbitale_pt");
HAnimSite175->setDEF("hanim_r_infraorbitale_pt");
HAnimSite175->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
HAnimSegment172->addChildren(*HAnimSite175);

CHAnimSite* HAnimSite176 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite176->setName("l_infraorbitale_pt");
HAnimSite176->setDEF("hanim_l_infraorbitale_pt");
HAnimSite176->setTranslation(new float[3]{0.0341,1.6171,0.0752});
HAnimSegment172->addChildren(*HAnimSite176);

CHAnimSite* HAnimSite177 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite177->setName("supramenton_pt");
HAnimSite177->setDEF("hanim_supramenton_pt");
HAnimSite177->setTranslation(new float[3]{0.0061,1.541,0.0805});
HAnimSegment172->addChildren(*HAnimSite177);

CHAnimSite* HAnimSite178 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite178->setName("r_tragion_pt");
HAnimSite178->setDEF("hanim_r_tragion_pt");
HAnimSite178->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
HAnimSegment172->addChildren(*HAnimSite178);

CHAnimSite* HAnimSite179 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite179->setName("r_gonion_pt");
HAnimSite179->setDEF("hanim_r_gonion_pt");
HAnimSite179->setTranslation(new float[3]{-0.052,1.5529,0.0347});
HAnimSegment172->addChildren(*HAnimSite179);

CHAnimSite* HAnimSite180 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite180->setName("l_tragion_pt");
HAnimSite180->setDEF("hanim_l_tragion_pt");
HAnimSite180->setTranslation(new float[3]{0.0739,1.6348,0.0282});
HAnimSegment172->addChildren(*HAnimSite180);

CHAnimSite* HAnimSite181 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite181->setName("l_gonion_pt");
HAnimSite181->setDEF("hanim_l_gonion_pt");
HAnimSite181->setTranslation(new float[3]{0.0631,1.553,0.033});
HAnimSegment172->addChildren(*HAnimSite181);

CHAnimSite* HAnimSite182 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite182->setName("nuchale_pt");
HAnimSite182->setDEF("hanim_nuchale_pt");
HAnimSite182->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
HAnimSegment172->addChildren(*HAnimSite182);

HAnimJoint171->addChildren(*HAnimSegment172);

CHAnimJoint* HAnimJoint183 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint183->setName("l_eyeball_joint");
HAnimJoint183->setDEF("hanim_l_eyeball_joint");
HAnimJoint183->setCenter(new float[3]{0.0336,1.6332,0.0502});
HAnimJoint183->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint183->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment184 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment184->setName("l_eyeball");
HAnimSegment184->setDEF("hanim_l_eyeball");
CHAnimSite* HAnimSite185 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite185->setName("l_eyeball_site_view");
HAnimSite185->setDEF("hanim_l_eyeball_site_view");
HAnimSite185->setTranslation(new float[3]{0.034,1.64,0.05});
CViewpoint* Viewpoint186 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint186->setDEF("hanim_l_eyeball_site_viewpoint");
Viewpoint186->setDescription("l_eyeball_site_viewpoint looking forward");
Viewpoint186->setOrientation(new float[4]{0,1,0,3.141593});
Viewpoint186->setPosition(new float[3]{0,0,0});
HAnimSite185->addChildren(*Viewpoint186);

HAnimSegment184->addChildren(*HAnimSite185);

HAnimJoint183->addChildren(*HAnimSegment184);

HAnimJoint171->addChildren(*HAnimJoint183);

CHAnimJoint* HAnimJoint187 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint187->setName("l_eyelid_joint");
HAnimJoint187->setDEF("hanim_l_eyelid_joint");
HAnimJoint187->setCenter(new float[3]{0.0336,1.6332,0.0502});
HAnimJoint187->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint187->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment188 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment188->setName("l_eyelid");
HAnimSegment188->setDEF("hanim_l_eyelid");
HAnimJoint187->addChildren(*HAnimSegment188);

HAnimJoint171->addChildren(*HAnimJoint187);

CHAnimJoint* HAnimJoint189 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint189->setName("l_eyebrow_joint");
HAnimJoint189->setDEF("hanim_l_eyebrow_joint");
HAnimJoint189->setCenter(new float[3]{0.0336,1.635,0.0506});
HAnimJoint189->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint189->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment190 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment190->setName("l_eyebrow");
HAnimSegment190->setDEF("hanim_l_eyebrow");
HAnimJoint189->addChildren(*HAnimSegment190);

HAnimJoint171->addChildren(*HAnimJoint189);

CHAnimJoint* HAnimJoint191 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint191->setName("r_eyeball_joint");
HAnimJoint191->setDEF("hanim_r_eyeball_joint");
HAnimJoint191->setCenter(new float[3]{-0.0336,1.6332,0.0502});
HAnimJoint191->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint191->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment192 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment192->setName("r_eyeball");
HAnimSegment192->setDEF("hanim_r_eyeball");
CHAnimSite* HAnimSite193 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite193->setName("r_eyeball_site_view");
HAnimSite193->setDEF("hanim_r_eyeball_site_view");
HAnimSite193->setTranslation(new float[3]{-0.034,1.64,0.05});
CViewpoint* Viewpoint194 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint194->setDEF("hanim_r_eyeball_site_viewpoint");
Viewpoint194->setDescription("r_eyeball_site_viewpoint looking forward");
Viewpoint194->setOrientation(new float[4]{0,1,0,3.141593});
Viewpoint194->setPosition(new float[3]{0,0,0});
HAnimSite193->addChildren(*Viewpoint194);

HAnimSegment192->addChildren(*HAnimSite193);

HAnimJoint191->addChildren(*HAnimSegment192);

HAnimJoint171->addChildren(*HAnimJoint191);

CHAnimJoint* HAnimJoint195 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint195->setName("r_eyelid_joint");
HAnimJoint195->setDEF("hanim_r_eyelid_joint");
HAnimJoint195->setCenter(new float[3]{-0.0336,1.6332,0.0502});
HAnimJoint195->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint195->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment196 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment196->setName("r_eyelid");
HAnimSegment196->setDEF("hanim_r_eyelid");
HAnimJoint195->addChildren(*HAnimSegment196);

HAnimJoint171->addChildren(*HAnimJoint195);

CHAnimJoint* HAnimJoint197 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint197->setName("r_eyebrow_joint");
HAnimJoint197->setDEF("hanim_r_eyebrow_joint");
HAnimJoint197->setCenter(new float[3]{-0.0336,1.635,0.0506});
HAnimJoint197->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint197->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment198 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment198->setName("r_eyebrow");
HAnimSegment198->setDEF("hanim_r_eyebrow");
HAnimJoint197->addChildren(*HAnimSegment198);

HAnimJoint171->addChildren(*HAnimJoint197);

CHAnimJoint* HAnimJoint199 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint199->setName("temporomandibular");
HAnimJoint199->setDEF("hanim_temporomandibular");
HAnimJoint199->setCenter(new float[3]{0,1.63,0.015});
HAnimJoint199->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint199->setLlimit(new float[3]{0,0,0}, 3);
//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
CHAnimSegment* HAnimSegment200 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment200->setName("jaw");
HAnimSegment200->setDEF("hanim_jaw");
CHAnimSite* HAnimSite201 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite201->setName("temporomandibular_l_site_pt");
HAnimSite201->setDEF("hanim_temporomandibular_l_site_pt");
HAnimSite201->setTranslation(new float[3]{0.045,1.63,0});
HAnimSegment200->addChildren(*HAnimSite201);

CHAnimSite* HAnimSite202 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite202->setName("temporomandibular_r_site_pt");
HAnimSite202->setDEF("hanim_temporomandibular_r_site_pt");
HAnimSite202->setTranslation(new float[3]{-0.045,1.63,0});
HAnimSegment200->addChildren(*HAnimSite202);

HAnimJoint199->addChildren(*HAnimSegment200);

HAnimJoint171->addChildren(*HAnimJoint199);

HAnimJoint169->addChildren(*HAnimJoint171);

HAnimJoint167->addChildren(*HAnimJoint169);

HAnimJoint165->addChildren(*HAnimJoint167);

HAnimJoint163->addChildren(*HAnimJoint165);

HAnimJoint161->addChildren(*HAnimJoint163);

HAnimJoint159->addChildren(*HAnimJoint161);

HAnimJoint155->addChildren(*HAnimJoint159);

HAnimJoint151->addChildren(*HAnimJoint155);

CHAnimJoint* HAnimJoint203 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint203->setName("l_sternoclavicular");
HAnimJoint203->setDEF("hanim_l_sternoclavicular");
HAnimJoint203->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint203->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint203->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment204 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment204->setName("l_clavicle");
HAnimSegment204->setDEF("hanim_l_clavicle");
CHAnimSite* HAnimSite205 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite205->setName("l_clavicle_pt");
HAnimSite205->setDEF("hanim_l_clavicle_pt");
HAnimSite205->setTranslation(new float[3]{0.0271,1.4943,0.0394});
HAnimSegment204->addChildren(*HAnimSite205);

CHAnimSite* HAnimSite206 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite206->setName("l_acromion_pt");
HAnimSite206->setDEF("hanim_l_acromion_pt");
HAnimSite206->setTranslation(new float[3]{0.2032,1.476,-0.049});
HAnimSegment204->addChildren(*HAnimSite206);

CHAnimSite* HAnimSite207 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite207->setName("l_axilla_proximal_pt");
HAnimSite207->setDEF("hanim_l_axilla_proximal_pt");
HAnimSite207->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
HAnimSegment204->addChildren(*HAnimSite207);

CHAnimSite* HAnimSite208 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite208->setName("l_axilla_distal_pt");
HAnimSite208->setDEF("hanim_l_axilla_distal_pt");
HAnimSite208->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
HAnimSegment204->addChildren(*HAnimSite208);

HAnimJoint203->addChildren(*HAnimSegment204);

CHAnimJoint* HAnimJoint209 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint209->setName("l_acromioclavicular");
HAnimJoint209->setDEF("hanim_l_acromioclavicular");
HAnimJoint209->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint209->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint209->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment210 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment210->setName("l_scapula");
HAnimSegment210->setDEF("hanim_l_scapula");
HAnimJoint209->addChildren(*HAnimSegment210);

CHAnimJoint* HAnimJoint211 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint211->setName("l_shoulder");
HAnimJoint211->setDEF("hanim_l_shoulder");
HAnimJoint211->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint211->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint211->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment212 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment212->setName("l_upperarm");
HAnimSegment212->setDEF("hanim_l_upperarm");
CHAnimSite* HAnimSite213 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite213->setName("l_humeral_lateral_epicondyle_pt");
HAnimSite213->setDEF("hanim_l_humeral_lateral_epicondyle_pt");
HAnimSite213->setTranslation(new float[3]{0.228,1.1482,-0.11});
HAnimSegment212->addChildren(*HAnimSite213);

HAnimJoint211->addChildren(*HAnimSegment212);

CHAnimJoint* HAnimJoint214 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint214->setName("l_elbow");
HAnimJoint214->setDEF("hanim_l_elbow");
HAnimJoint214->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint214->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint214->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment215 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment215->setName("l_forearm");
HAnimSegment215->setDEF("hanim_l_forearm");
CHAnimSite* HAnimSite216 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite216->setName("l_radial_styloid_pt");
HAnimSite216->setDEF("hanim_l_radial_styloid_pt");
HAnimSite216->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
HAnimSegment215->addChildren(*HAnimSite216);

CHAnimSite* HAnimSite217 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite217->setName("l_olecranon_pt");
HAnimSite217->setDEF("hanim_l_olecranon_pt");
HAnimSite217->setTranslation(new float[3]{0.1962,1.1375,-0.1123});
HAnimSegment215->addChildren(*HAnimSite217);

CHAnimSite* HAnimSite218 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite218->setName("l_humeral_medial_epicondyle_pt");
HAnimSite218->setDEF("hanim_l_humeral_medial_epicondyle_pt");
HAnimSite218->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
HAnimSegment215->addChildren(*HAnimSite218);

CHAnimSite* HAnimSite219 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite219->setName("l_radiale_pt");
HAnimSite219->setDEF("hanim_l_radiale_pt");
HAnimSite219->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
HAnimSegment215->addChildren(*HAnimSite219);

HAnimJoint214->addChildren(*HAnimSegment215);

CHAnimJoint* HAnimJoint220 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint220->setName("l_radiocarpal");
HAnimJoint220->setDEF("hanim_l_radiocarpal");
HAnimJoint220->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint220->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint220->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment221 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment221->setName("l_carpal");
HAnimSegment221->setDEF("hanim_l_carpal");
CHAnimSite* HAnimSite222 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite222->setName("l_metacarpal_phalanx_2_pt");
HAnimSite222->setDEF("hanim_l_metacarpal_phalanx_2_pt");
HAnimSite222->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
HAnimSegment221->addChildren(*HAnimSite222);

CHAnimSite* HAnimSite223 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite223->setName("l_ulnar_styloid_pt");
HAnimSite223->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite223->setTranslation(new float[3]{0.2142,0.8529,-0.0648});
HAnimSegment221->addChildren(*HAnimSite223);

CHAnimSite* HAnimSite224 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite224->setName("l_metacarpal_phalanx_5_pt");
HAnimSite224->setDEF("hanim_l_metacarpal_phalanx_5_pt");
HAnimSite224->setTranslation(new float[3]{0.1929,0.786,-0.1122});
HAnimSegment221->addChildren(*HAnimSite224);

CHAnimSite* HAnimSite225 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite225->setName("l_hand_front_view");
HAnimSite225->setDEF("hanim_l_hand_front_view");
HAnimSite225->setTranslation(new float[3]{0.3,0.75,0.45});
CViewpoint* Viewpoint226 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint226->setDEF("hanim_l_hand_front_viewpoint");
Viewpoint226->setCenterOfRotation(new float[3]{0,0.7,0});
Viewpoint226->setDescription("left hand front");
Viewpoint226->setPosition(new float[3]{0,0,0});
HAnimSite225->addChildren(*Viewpoint226);

HAnimSegment221->addChildren(*HAnimSite225);

HAnimJoint220->addChildren(*HAnimSegment221);

CHAnimJoint* HAnimJoint227 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint227->setName("l_carpometacarpal_1");
HAnimJoint227->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint227->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint227->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint227->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment228 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment228->setName("l_metacarpal_1");
HAnimSegment228->setDEF("hanim_l_metacarpal_1");
HAnimJoint227->addChildren(*HAnimSegment228);

CHAnimJoint* HAnimJoint229 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint229->setName("l_metacarpophalangeal_1");
HAnimJoint229->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint229->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint229->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint229->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment230 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment230->setName("l_carpal_proximal_phalanx_1");
HAnimSegment230->setDEF("hanim_l_carpal_proximal_phalanx_1");
HAnimJoint229->addChildren(*HAnimSegment230);

CHAnimJoint* HAnimJoint231 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint231->setName("l_carpal_interphalangeal_1");
HAnimJoint231->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint231->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint231->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint231->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment232 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment232->setName("l_carpal_distal_phalanx_1");
HAnimSegment232->setDEF("hanim_l_carpal_distal_phalanx_1");
CHAnimSite* HAnimSite233 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite233->setName("l_carpal_distal_phalanx_1_tip");
HAnimSite233->setDEF("hanim_l_carpal_distal_phalanx_1_tip");
HAnimSite233->setTranslation(new float[3]{0.1982,0.8061,0.0759});
HAnimSegment232->addChildren(*HAnimSite233);

HAnimJoint231->addChildren(*HAnimSegment232);

HAnimJoint229->addChildren(*HAnimJoint231);

HAnimJoint227->addChildren(*HAnimJoint229);

HAnimJoint220->addChildren(*HAnimJoint227);

CHAnimJoint* HAnimJoint234 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint234->setName("l_carpometacarpal_2");
HAnimJoint234->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint234->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint234->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint234->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment235 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment235->setName("l_metacarpal_2");
HAnimSegment235->setDEF("hanim_l_metacarpal_2");
HAnimJoint234->addChildren(*HAnimSegment235);

CHAnimJoint* HAnimJoint236 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint236->setName("l_metacarpophalangeal_2");
HAnimJoint236->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint236->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint236->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint236->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment237 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment237->setName("l_carpal_proximal_phalanx_2");
HAnimSegment237->setDEF("hanim_l_carpal_proximal_phalanx_2");
HAnimJoint236->addChildren(*HAnimSegment237);

CHAnimJoint* HAnimJoint238 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint238->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint238->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint238->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint238->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint238->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment239 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment239->setName("l_carpal_middle_phalanx_2");
HAnimSegment239->setDEF("hanim_l_carpal_middle_phalanx_2");
HAnimJoint238->addChildren(*HAnimSegment239);

CHAnimJoint* HAnimJoint240 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint240->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint240->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint240->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint240->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint240->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment241 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment241->setName("l_carpal_distal_phalanx_2");
HAnimSegment241->setDEF("hanim_l_carpal_distal_phalanx_2");
CHAnimSite* HAnimSite242 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite242->setName("l_carpal_distal_phalanx_2_tip");
HAnimSite242->setDEF("hanim_l_carpal_distal_phalanx_2_tip");
HAnimSite242->setTranslation(new float[3]{0.2089,0.6858,-0.0245});
HAnimSegment241->addChildren(*HAnimSite242);

CHAnimSite* HAnimSite243 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite243->setName("l_dactylion_pt");
HAnimSite243->setDEF("hanim_l_dactylion_pt");
HAnimSite243->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
HAnimSegment241->addChildren(*HAnimSite243);

HAnimJoint240->addChildren(*HAnimSegment241);

HAnimJoint238->addChildren(*HAnimJoint240);

HAnimJoint236->addChildren(*HAnimJoint238);

HAnimJoint234->addChildren(*HAnimJoint236);

HAnimJoint220->addChildren(*HAnimJoint234);

CHAnimJoint* HAnimJoint244 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint244->setName("l_carpometacarpal_3");
HAnimJoint244->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint244->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint244->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint244->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment245 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment245->setName("l_metacarpal_3");
HAnimSegment245->setDEF("hanim_l_metacarpal_3");
HAnimJoint244->addChildren(*HAnimSegment245);

CHAnimJoint* HAnimJoint246 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint246->setName("l_metacarpophalangeal_3");
HAnimJoint246->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint246->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint246->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint246->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment247 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment247->setName("l_carpal_proximal_phalanx_3");
HAnimSegment247->setDEF("hanim_l_carpal_proximal_phalanx_3");
HAnimJoint246->addChildren(*HAnimSegment247);

CHAnimJoint* HAnimJoint248 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint248->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint248->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint248->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint248->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint248->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment249 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment249->setName("l_carpal_middle_phalanx_3");
HAnimSegment249->setDEF("hanim_l_carpal_middle_phalanx_3");
HAnimJoint248->addChildren(*HAnimSegment249);

CHAnimJoint* HAnimJoint250 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint250->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint250->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint250->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint250->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint250->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment251 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment251->setName("l_carpal_distal_phalanx_3");
HAnimSegment251->setDEF("hanim_l_carpal_distal_phalanx_3");
CHAnimSite* HAnimSite252 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite252->setName("l_carpal_distal_phalanx_3_tip");
HAnimSite252->setDEF("hanim_l_carpal_distal_phalanx_3_tip");
HAnimSite252->setTranslation(new float[3]{0.208,0.6731,-0.0491});
HAnimSegment251->addChildren(*HAnimSite252);

HAnimJoint250->addChildren(*HAnimSegment251);

HAnimJoint248->addChildren(*HAnimJoint250);

HAnimJoint246->addChildren(*HAnimJoint248);

HAnimJoint244->addChildren(*HAnimJoint246);

HAnimJoint220->addChildren(*HAnimJoint244);

CHAnimJoint* HAnimJoint253 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint253->setName("l_carpometacarpal_4");
HAnimJoint253->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint253->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint253->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint253->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment254 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment254->setName("l_metacarpal_4");
HAnimSegment254->setDEF("hanim_l_metacarpal_4");
HAnimJoint253->addChildren(*HAnimSegment254);

CHAnimJoint* HAnimJoint255 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint255->setName("l_metacarpophalangeal_4");
HAnimJoint255->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint255->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint255->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint255->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment256 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment256->setName("l_carpal_proximal_phalanx_4");
HAnimSegment256->setDEF("hanim_l_carpal_proximal_phalanx_4");
HAnimJoint255->addChildren(*HAnimSegment256);

CHAnimJoint* HAnimJoint257 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint257->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint257->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint257->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint257->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint257->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment258 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment258->setName("l_carpal_middle_phalanx_4");
HAnimSegment258->setDEF("hanim_l_carpal_middle_phalanx_4");
HAnimJoint257->addChildren(*HAnimSegment258);

CHAnimJoint* HAnimJoint259 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint259->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint259->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint259->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint259->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint259->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment260 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment260->setName("l_carpal_distal_phalanx_4");
HAnimSegment260->setDEF("hanim_l_carpal_distal_phalanx_4");
CHAnimSite* HAnimSite261 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite261->setName("l_carpal_distal_phalanx_4_tip");
HAnimSite261->setDEF("hanim_l_carpal_distal_phalanx_4_tip");
HAnimSite261->setTranslation(new float[3]{0.2035,0.675,-0.0756});
HAnimSegment260->addChildren(*HAnimSite261);

HAnimJoint259->addChildren(*HAnimSegment260);

HAnimJoint257->addChildren(*HAnimJoint259);

HAnimJoint255->addChildren(*HAnimJoint257);

HAnimJoint253->addChildren(*HAnimJoint255);

HAnimJoint220->addChildren(*HAnimJoint253);

CHAnimJoint* HAnimJoint262 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint262->setName("l_carpometacarpal_5");
HAnimJoint262->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint262->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint262->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint262->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment263 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment263->setName("l_metacarpal_5");
HAnimSegment263->setDEF("hanim_l_metacarpal_5");
HAnimJoint262->addChildren(*HAnimSegment263);

CHAnimJoint* HAnimJoint264 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint264->setName("l_metacarpophalangeal_5");
HAnimJoint264->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint264->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint264->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint264->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment265 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment265->setName("l_carpal_proximal_phalanx_5");
HAnimSegment265->setDEF("hanim_l_carpal_proximal_phalanx_5");
HAnimJoint264->addChildren(*HAnimSegment265);

CHAnimJoint* HAnimJoint266 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint266->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint266->setDEF("hanim_l_carpal_proximal_interphalangeal_5");
HAnimJoint266->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint266->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint266->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment267 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment267->setName("l_carpal_middle_phalanx_5");
HAnimSegment267->setDEF("hanim_l_carpal_middle_phalanx_5");
HAnimJoint266->addChildren(*HAnimSegment267);

CHAnimJoint* HAnimJoint268 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint268->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint268->setDEF("hanim_l_carpal_distal_interphalangeal_5");
HAnimJoint268->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint268->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint268->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment269 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment269->setName("l_carpal_distal_phalanx_5");
HAnimSegment269->setDEF("hanim_l_carpal_distal_phalanx_5");
CHAnimSite* HAnimSite270 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite270->setName("l_carpal_distal_phalanx_5_tip");
HAnimSite270->setDEF("hanim_l_carpal_distal_phalanx_5_tip");
HAnimSite270->setTranslation(new float[3]{0.2014,0.7009,-0.1012});
HAnimSegment269->addChildren(*HAnimSite270);

HAnimJoint268->addChildren(*HAnimSegment269);

HAnimJoint266->addChildren(*HAnimJoint268);

HAnimJoint264->addChildren(*HAnimJoint266);

HAnimJoint262->addChildren(*HAnimJoint264);

HAnimJoint220->addChildren(*HAnimJoint262);

HAnimJoint214->addChildren(*HAnimJoint220);

HAnimJoint211->addChildren(*HAnimJoint214);

HAnimJoint209->addChildren(*HAnimJoint211);

HAnimJoint203->addChildren(*HAnimJoint209);

HAnimJoint151->addChildren(*HAnimJoint203);

CHAnimJoint* HAnimJoint271 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint271->setName("r_sternoclavicular");
HAnimJoint271->setDEF("hanim_r_sternoclavicular");
HAnimJoint271->setCenter(new float[3]{-0.082,1.4488,-0.0353});
HAnimJoint271->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint271->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment272 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment272->setName("r_clavicle");
HAnimSegment272->setDEF("hanim_r_clavicle");
CHAnimSite* HAnimSite273 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite273->setName("r_clavicle_pt");
HAnimSite273->setDEF("hanim_r_clavicle_pt");
HAnimSite273->setTranslation(new float[3]{-0.0115,1.4943,0.04});
HAnimSegment272->addChildren(*HAnimSite273);

CHAnimSite* HAnimSite274 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite274->setName("r_acromion_pt");
HAnimSite274->setDEF("hanim_r_acromion_pt");
HAnimSite274->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
HAnimSegment272->addChildren(*HAnimSite274);

CHAnimSite* HAnimSite275 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite275->setName("r_axilla_proximal_pt");
HAnimSite275->setDEF("hanim_r_axilla_proximal_pt");
HAnimSite275->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
HAnimSegment272->addChildren(*HAnimSite275);

CHAnimSite* HAnimSite276 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite276->setName("r_axilla_distal_pt");
HAnimSite276->setDEF("hanim_r_axilla_distal_pt");
HAnimSite276->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
HAnimSegment272->addChildren(*HAnimSite276);

HAnimJoint271->addChildren(*HAnimSegment272);

CHAnimJoint* HAnimJoint277 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint277->setName("r_acromioclavicular");
HAnimJoint277->setDEF("hanim_r_acromioclavicular");
HAnimJoint277->setCenter(new float[3]{-0.0962,1.4269,-0.0424});
HAnimJoint277->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint277->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment278 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment278->setName("r_scapula");
HAnimSegment278->setDEF("hanim_r_scapula");
HAnimJoint277->addChildren(*HAnimSegment278);

CHAnimJoint* HAnimJoint279 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint279->setName("r_shoulder");
HAnimJoint279->setDEF("hanim_r_shoulder");
HAnimJoint279->setCenter(new float[3]{-0.2029,1.4376,-0.0387});
HAnimJoint279->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint279->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment280 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment280->setName("r_upperarm");
HAnimSegment280->setDEF("hanim_r_upperarm");
CHAnimSite* HAnimSite281 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite281->setName("r_humeral_lateral_epicondyle_pt");
HAnimSite281->setDEF("hanim_r_humeral_lateral_epicondyle_pt");
HAnimSite281->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
HAnimSegment280->addChildren(*HAnimSite281);

HAnimJoint279->addChildren(*HAnimSegment280);

CHAnimJoint* HAnimJoint282 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint282->setName("r_elbow");
HAnimJoint282->setDEF("hanim_r_elbow");
HAnimJoint282->setCenter(new float[3]{-0.2014,1.1357,-0.0682});
HAnimJoint282->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint282->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment283 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment283->setName("r_forearm");
HAnimSegment283->setDEF("hanim_r_forearm");
CHAnimSite* HAnimSite284 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite284->setName("r_radial_styloid_pt");
HAnimSite284->setDEF("hanim_r_radial_styloid_pt");
HAnimSite284->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
HAnimSegment283->addChildren(*HAnimSite284);

CHAnimSite* HAnimSite285 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite285->setName("r_olecranon_pt");
HAnimSite285->setDEF("hanim_r_olecranon_pt");
HAnimSite285->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
HAnimSegment283->addChildren(*HAnimSite285);

CHAnimSite* HAnimSite286 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite286->setName("r_humeral_medial_epicondyle_pt");
HAnimSite286->setDEF("hanim_r_humeral_medial_epicondyle_pt");
HAnimSite286->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
HAnimSegment283->addChildren(*HAnimSite286);

CHAnimSite* HAnimSite287 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite287->setName("r_radiale_pt");
HAnimSite287->setDEF("hanim_r_radiale_pt");
HAnimSite287->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
HAnimSegment283->addChildren(*HAnimSite287);

HAnimJoint282->addChildren(*HAnimSegment283);

CHAnimJoint* HAnimJoint288 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint288->setName("r_radiocarpal");
HAnimJoint288->setDEF("hanim_r_radiocarpal");
HAnimJoint288->setCenter(new float[3]{-0.1984,0.8663,-0.0583});
HAnimJoint288->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint288->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment289 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment289->setName("r_carpal");
HAnimSegment289->setDEF("hanim_r_carpal");
CHAnimSite* HAnimSite290 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite290->setName("r_metacarpal_phalanx_2_pt");
HAnimSite290->setDEF("hanim_r_metacarpal_phalanx_2_pt");
HAnimSite290->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
HAnimSegment289->addChildren(*HAnimSite290);

CHAnimSite* HAnimSite291 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite291->setName("r_ulnar_styloid_pt");
HAnimSite291->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite291->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
HAnimSegment289->addChildren(*HAnimSite291);

CHAnimSite* HAnimSite292 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite292->setName("r_metacarpal_phalanx_5_pt");
HAnimSite292->setDEF("hanim_r_metacarpal_phalanx_5_pt");
HAnimSite292->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
HAnimSegment289->addChildren(*HAnimSite292);

CHAnimSite* HAnimSite293 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite293->setName("r_hand_front_view");
HAnimSite293->setDEF("hanim_r_hand_front_view");
HAnimSite293->setTranslation(new float[3]{-0.3,0.75,0.45});
CViewpoint* Viewpoint294 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint294->setDEF("hanim_r_hand_front_viewpoint");
Viewpoint294->setCenterOfRotation(new float[3]{0,0.7,0});
Viewpoint294->setDescription("right hand front");
Viewpoint294->setPosition(new float[3]{0,0,0});
HAnimSite293->addChildren(*Viewpoint294);

HAnimSegment289->addChildren(*HAnimSite293);

HAnimJoint288->addChildren(*HAnimSegment289);

CHAnimJoint* HAnimJoint295 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint295->setName("r_carpometacarpal_1");
HAnimJoint295->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint295->setCenter(new float[3]{-0.1924,0.8472,-0.0534});
HAnimJoint295->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint295->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment296 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment296->setName("r_metacarpal_1");
HAnimSegment296->setDEF("hanim_r_metacarpal_1");
HAnimJoint295->addChildren(*HAnimSegment296);

CHAnimJoint* HAnimJoint297 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint297->setName("r_metacarpophalangeal_1");
HAnimJoint297->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint297->setCenter(new float[3]{-0.1951,0.8226,0.0246});
HAnimJoint297->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint297->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment298 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment298->setName("r_carpal_proximal_phalanx_1");
HAnimSegment298->setDEF("hanim_r_carpal_proximal_phalanx_1");
HAnimJoint297->addChildren(*HAnimSegment298);

CHAnimJoint* HAnimJoint299 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint299->setName("r_carpal_interphalangeal_1");
HAnimJoint299->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint299->setCenter(new float[3]{-0.1955,0.8159,0.0464});
HAnimJoint299->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint299->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment300 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment300->setName("r_carpal_distal_phalanx_1");
HAnimSegment300->setDEF("hanim_r_carpal_distal_phalanx_1");
CHAnimSite* HAnimSite301 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite301->setName("r_carpal_distal_phalanx_1_tip");
HAnimSite301->setDEF("hanim_r_carpal_distal_phalanx_1_tip");
HAnimSite301->setTranslation(new float[3]{-0.1869,0.809,0.082});
HAnimSegment300->addChildren(*HAnimSite301);

HAnimJoint299->addChildren(*HAnimSegment300);

HAnimJoint297->addChildren(*HAnimJoint299);

HAnimJoint295->addChildren(*HAnimJoint297);

HAnimJoint288->addChildren(*HAnimJoint295);

CHAnimJoint* HAnimJoint302 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint302->setName("r_carpometacarpal_2");
HAnimJoint302->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint302->setCenter(new float[3]{-0.1983,0.8024,-0.028});
HAnimJoint302->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint302->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment303 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment303->setName("r_metacarpal_2");
HAnimSegment303->setDEF("hanim_r_metacarpal_2");
HAnimJoint302->addChildren(*HAnimSegment303);

CHAnimJoint* HAnimJoint304 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint304->setName("r_metacarpophalangeal_2");
HAnimJoint304->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint304->setCenter(new float[3]{-0.1983,0.7815,-0.028});
HAnimJoint304->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint304->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment305 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment305->setName("r_carpal_proximal_phalanx_2");
HAnimSegment305->setDEF("hanim_r_carpal_proximal_phalanx_2");
HAnimJoint304->addChildren(*HAnimSegment305);

CHAnimJoint* HAnimJoint306 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint306->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint306->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint306->setCenter(new float[3]{-0.2017,0.7363,-0.0248});
HAnimJoint306->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint306->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment307 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment307->setName("r_carpal_middle_phalanx_2");
HAnimSegment307->setDEF("hanim_r_carpal_middle_phalanx_2");
HAnimJoint306->addChildren(*HAnimSegment307);

CHAnimJoint* HAnimJoint308 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint308->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint308->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint308->setCenter(new float[3]{-0.2028,0.7139,-0.0236});
HAnimJoint308->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint308->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment309 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment309->setName("r_carpal_distal_phalanx_2");
HAnimSegment309->setDEF("hanim_r_carpal_distal_phalanx_2");
CHAnimSite* HAnimSite310 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite310->setName("r_carpal_distal_phalanx_2_tip");
HAnimSite310->setDEF("hanim_r_carpal_distal_phalanx_2_tip");
HAnimSite310->setTranslation(new float[3]{-0.198,0.6883,-0.018});
HAnimSegment309->addChildren(*HAnimSite310);

CHAnimSite* HAnimSite311 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite311->setName("r_dactylion_pt");
HAnimSite311->setDEF("hanim_r_dactylion_pt");
HAnimSite311->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
HAnimSegment309->addChildren(*HAnimSite311);

HAnimJoint308->addChildren(*HAnimSegment309);

HAnimJoint306->addChildren(*HAnimJoint308);

HAnimJoint304->addChildren(*HAnimJoint306);

HAnimJoint302->addChildren(*HAnimJoint304);

HAnimJoint288->addChildren(*HAnimJoint302);

CHAnimJoint* HAnimJoint312 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint312->setName("r_carpometacarpal_3");
HAnimJoint312->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint312->setCenter(new float[3]{-0.1987,0.8029,-0.053});
HAnimJoint312->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint312->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment313 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment313->setName("r_metacarpal_3");
HAnimSegment313->setDEF("hanim_r_metacarpal_3");
HAnimJoint312->addChildren(*HAnimSegment313);

CHAnimJoint* HAnimJoint314 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint314->setName("r_metacarpophalangeal_3");
HAnimJoint314->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint314->setCenter(new float[3]{-0.1987,0.7818,-0.053});
HAnimJoint314->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint314->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment315 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment315->setName("r_carpal_proximal_phalanx_3");
HAnimSegment315->setDEF("hanim_r_carpal_proximal_phalanx_3");
HAnimJoint314->addChildren(*HAnimSegment315);

CHAnimJoint* HAnimJoint316 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint316->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint316->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint316->setCenter(new float[3]{-0.2013,0.7273,-0.0503});
HAnimJoint316->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint316->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment317 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment317->setName("r_carpal_middle_phalanx_3");
HAnimSegment317->setDEF("hanim_r_carpal_middle_phalanx_3");
HAnimJoint316->addChildren(*HAnimSegment317);

CHAnimJoint* HAnimJoint318 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint318->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint318->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint318->setCenter(new float[3]{-0.2026,0.7011,-0.0494});
HAnimJoint318->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint318->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment319 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment319->setName("r_carpal_distal_phalanx_3");
HAnimSegment319->setDEF("hanim_r_carpal_distal_phalanx_3");
CHAnimSite* HAnimSite320 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite320->setName("r_carpal_distal_phalanx_3_tip");
HAnimSite320->setDEF("hanim_r_carpal_distal_phalanx_3_tip");
HAnimSite320->setTranslation(new float[3]{-0.1969,0.6758,-0.0427});
HAnimSegment319->addChildren(*HAnimSite320);

HAnimJoint318->addChildren(*HAnimSegment319);

HAnimJoint316->addChildren(*HAnimJoint318);

HAnimJoint314->addChildren(*HAnimJoint316);

HAnimJoint312->addChildren(*HAnimJoint314);

HAnimJoint288->addChildren(*HAnimJoint312);

CHAnimJoint* HAnimJoint321 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint321->setName("r_carpometacarpal_4");
HAnimJoint321->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint321->setCenter(new float[3]{-0.1956,0.8019,-0.0794});
HAnimJoint321->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint321->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment322 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment322->setName("r_metacarpal_4");
HAnimSegment322->setDEF("hanim_r_metacarpal_4");
HAnimJoint321->addChildren(*HAnimSegment322);

CHAnimJoint* HAnimJoint323 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint323->setName("r_metacarpophalangeal_4");
HAnimJoint323->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint323->setCenter(new float[3]{-0.1956,0.7815,-0.0794});
HAnimJoint323->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint323->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment324 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment324->setName("r_carpal_proximal_phalanx_4");
HAnimSegment324->setDEF("hanim_r_carpal_proximal_phalanx_4");
HAnimJoint323->addChildren(*HAnimSegment324);

CHAnimJoint* HAnimJoint325 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint325->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint325->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint325->setCenter(new float[3]{-0.1973,0.7287,-0.0777});
HAnimJoint325->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint325->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment326 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment326->setName("r_carpal_middle_phalanx_4");
HAnimSegment326->setDEF("hanim_r_carpal_middle_phalanx_4");
HAnimJoint325->addChildren(*HAnimSegment326);

CHAnimJoint* HAnimJoint327 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint327->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint327->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint327->setCenter(new float[3]{-0.1983,0.7045,-0.0767});
HAnimJoint327->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint327->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment328 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment328->setName("r_carpal_distal_phalanx_4");
HAnimSegment328->setDEF("hanim_r_carpal_distal_phalanx_4");
CHAnimSite* HAnimSite329 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite329->setName("r_carpal_distal_phalanx_4_tip");
HAnimSite329->setDEF("hanim_r_carpal_distal_phalanx_4_tip");
HAnimSite329->setTranslation(new float[3]{-0.1934,0.6778,-0.0693});
HAnimSegment328->addChildren(*HAnimSite329);

HAnimJoint327->addChildren(*HAnimSegment328);

HAnimJoint325->addChildren(*HAnimJoint327);

HAnimJoint323->addChildren(*HAnimJoint325);

HAnimJoint321->addChildren(*HAnimJoint323);

HAnimJoint288->addChildren(*HAnimJoint321);

CHAnimJoint* HAnimJoint330 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint330->setName("r_carpometacarpal_5");
HAnimJoint330->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint330->setCenter(new float[3]{-0.1925,0.8066,-0.1036});
HAnimJoint330->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint330->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment331 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment331->setName("r_metacarpal_5");
HAnimSegment331->setDEF("hanim_r_metacarpal_5");
HAnimJoint330->addChildren(*HAnimSegment331);

CHAnimJoint* HAnimJoint332 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint332->setName("r_metacarpophalangeal_5");
HAnimJoint332->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint332->setCenter(new float[3]{-0.1925,0.7866,-0.1036});
HAnimJoint332->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint332->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment333 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment333->setName("r_carpal_proximal_phalanx_5");
HAnimSegment333->setDEF("hanim_r_carpal_proximal_phalanx_5");
HAnimJoint332->addChildren(*HAnimSegment333);

CHAnimJoint* HAnimJoint334 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint334->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint334->setDEF("hanim_r_carpal_proximal_interphalangeal_5");
HAnimJoint334->setCenter(new float[3]{-0.1938,0.7452,-0.1024});
HAnimJoint334->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint334->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment335 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment335->setName("r_carpal_middle_phalanx_5");
HAnimSegment335->setDEF("hanim_r_carpal_middle_phalanx_5");
HAnimJoint334->addChildren(*HAnimSegment335);

CHAnimJoint* HAnimJoint336 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint336->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint336->setDEF("hanim_r_carpal_distal_interphalangeal_5");
HAnimJoint336->setCenter(new float[3]{-0.1948,0.7277,-0.1017});
HAnimJoint336->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint336->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment337 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment337->setName("r_carpal_distal_phalanx_5");
HAnimSegment337->setDEF("hanim_r_carpal_distal_phalanx_5");
CHAnimSite* HAnimSite338 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite338->setName("r_carpal_distal_phalanx_5_tip");
HAnimSite338->setDEF("hanim_r_carpal_distal_phalanx_5_tip");
HAnimSite338->setTranslation(new float[3]{-0.1938,0.7035,-0.0949});
HAnimSegment337->addChildren(*HAnimSite338);

HAnimJoint336->addChildren(*HAnimSegment337);

HAnimJoint334->addChildren(*HAnimJoint336);

HAnimJoint332->addChildren(*HAnimJoint334);

HAnimJoint330->addChildren(*HAnimJoint332);

HAnimJoint288->addChildren(*HAnimJoint330);

HAnimJoint282->addChildren(*HAnimJoint288);

HAnimJoint279->addChildren(*HAnimJoint282);

HAnimJoint277->addChildren(*HAnimJoint279);

HAnimJoint271->addChildren(*HAnimJoint277);

HAnimJoint151->addChildren(*HAnimJoint271);

HAnimJoint149->addChildren(*HAnimJoint151);

HAnimJoint147->addChildren(*HAnimJoint149);

HAnimJoint145->addChildren(*HAnimJoint147);

HAnimJoint143->addChildren(*HAnimJoint145);

HAnimJoint141->addChildren(*HAnimJoint143);

HAnimJoint139->addChildren(*HAnimJoint141);

HAnimJoint137->addChildren(*HAnimJoint139);

HAnimJoint133->addChildren(*HAnimJoint137);

HAnimJoint130->addChildren(*HAnimJoint133);

HAnimJoint128->addChildren(*HAnimJoint130);

HAnimJoint126->addChildren(*HAnimJoint128);

HAnimJoint124->addChildren(*HAnimJoint126);

HAnimJoint119->addChildren(*HAnimJoint124);

HAnimJoint117->addChildren(*HAnimJoint119);

HAnimJoint115->addChildren(*HAnimJoint117);

HAnimJoint111->addChildren(*HAnimJoint115);

HAnimJoint52->addChildren(*HAnimJoint111);

HAnimHumanoid43->setSkeleton(*HAnimJoint52);

CHAnimSite* HAnimSite339 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite339->setName("l_inclined_view");
HAnimSite339->setDEF("hanim_l_inclined_view");
HAnimSite339->setRotation(new float[4]{-0.113,0.993,0.0347,0.671});
HAnimSite339->setTranslation(new float[3]{1.62,1.05,2.06});
CViewpoint* Viewpoint340 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint340->setDEF("hanim_l_inclined_viewpoint");
Viewpoint340->setDescription("left inclined");
Viewpoint340->setPosition(new float[3]{0,0,0});
HAnimSite339->addChildren(*Viewpoint340);

HAnimHumanoid43->addViewpoints(*HAnimSite339);

CHAnimSite* HAnimSite341 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite341->setName("r_inclined_view");
HAnimSite341->setDEF("hanim_r_inclined_view");
HAnimSite341->setRotation(new float[4]{-0.113,-0.993,0.0347,0.671});
HAnimSite341->setTranslation(new float[3]{-1.62,1.05,2.06});
CViewpoint* Viewpoint342 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint342->setDEF("hanim_r_inclined_viewpoint");
Viewpoint342->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint342->setDescription("right inclined");
Viewpoint342->setPosition(new float[3]{0,0,0});
HAnimSite341->addChildren(*Viewpoint342);

HAnimHumanoid43->addViewpoints(*HAnimSite341);

CHAnimSite* HAnimSite343 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite343->setName("front_view");
HAnimSite343->setDEF("hanim_front_view");
HAnimSite343->setTranslation(new float[3]{0,0.85,2.58});
CViewpoint* Viewpoint344 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint344->setDEF("hanim_front_viewpoint");
Viewpoint344->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint344->setDescription("front");
Viewpoint344->setPosition(new float[3]{0,0,0});
HAnimSite343->addChildren(*Viewpoint344);

HAnimHumanoid43->addViewpoints(*HAnimSite343);

CHAnimSite* HAnimSite345 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite345->setName("back_view");
HAnimSite345->setDEF("hanim_back_view");
HAnimSite345->setRotation(new float[4]{0,1,0,3.14});
HAnimSite345->setTranslation(new float[3]{0,0.85,-2.58});
CViewpoint* Viewpoint346 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint346->setDEF("hanim_back_viewpoint");
Viewpoint346->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint346->setDescription("back");
Viewpoint346->setPosition(new float[3]{0,0,0});
HAnimSite345->addChildren(*Viewpoint346);

HAnimHumanoid43->addViewpoints(*HAnimSite345);

CHAnimSite* HAnimSite347 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite347->setName("l_side_view");
HAnimSite347->setDEF("hanim_l_side_view");
HAnimSite347->setRotation(new float[4]{0,1,0,1.5708});
HAnimSite347->setTranslation(new float[3]{2.6,0.854,0});
CViewpoint* Viewpoint348 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint348->setDEF("hanim_l_side_viewpoint");
Viewpoint348->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint348->setDescription("left side");
Viewpoint348->setPosition(new float[3]{0,0,0});
HAnimSite347->addChildren(*Viewpoint348);

HAnimHumanoid43->addViewpoints(*HAnimSite347);

CHAnimSite* HAnimSite349 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite349->setName("Top_view");
HAnimSite349->setDEF("hanim_Top_view");
HAnimSite349->setRotation(new float[4]{1,0,0,-1.57});
HAnimSite349->setTranslation(new float[3]{0,3.5,0});
CViewpoint* Viewpoint350 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint350->setDEF("hanim_Top_viewpoint");
Viewpoint350->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint350->setDescription("Top");
Viewpoint350->setPosition(new float[3]{0,0,0});
HAnimSite349->addChildren(*Viewpoint350);

HAnimHumanoid43->addViewpoints(*HAnimSite349);

CHAnimSite* HAnimSite351 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite351->setName("front_close_view");
HAnimSite351->setDEF("hanim_front_close_view");
HAnimSite351->setTranslation(new float[3]{0,0.854,1.575});
CViewpoint* Viewpoint352 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint352->setDEF("hanim_front_close_viewpoint");
Viewpoint352->setCenterOfRotation(new float[3]{0,0,1.575});
Viewpoint352->setDescription("front close");
Viewpoint352->setPosition(new float[3]{0,0,0});
HAnimSite351->addChildren(*Viewpoint352);

HAnimHumanoid43->addViewpoints(*HAnimSite351);

CHAnimSite* HAnimSite353 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite353->setName("side_close_view");
HAnimSite353->setDEF("hanim_side_close_view");
HAnimSite353->setRotation(new float[4]{0,1,0,1.5708});
HAnimSite353->setTranslation(new float[3]{1.56,0.854,0});
CViewpoint* Viewpoint354 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint354->setDEF("hanim_side_close_viewpoint");
Viewpoint354->setCenterOfRotation(new float[3]{1.6,0,0});
Viewpoint354->setDescription("side close");
Viewpoint354->setPosition(new float[3]{0,0,0});
HAnimSite353->addChildren(*Viewpoint354);

HAnimHumanoid43->addViewpoints(*HAnimSite353);

CHAnimSite* HAnimSite355 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite355->setName("head_front_close_view");
HAnimSite355->setDEF("hanim_head_front_close_view");
HAnimSite355->setTranslation(new float[3]{0,1.5,1});
CViewpoint* Viewpoint356 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint356->setDEF("hanim_head_front_close_viewpoint");
Viewpoint356->setCenterOfRotation(new float[3]{0,0,1});
Viewpoint356->setDescription("head front close");
Viewpoint356->setPosition(new float[3]{0,0,0});
HAnimSite355->addChildren(*Viewpoint356);

HAnimHumanoid43->addViewpoints(*HAnimSite355);

CHAnimSite* HAnimSite357 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite357->setName("chest_front_close_view");
HAnimSite357->setDEF("hanim_chest_front_close_view");
HAnimSite357->setTranslation(new float[3]{0,1.2,1});
CViewpoint* Viewpoint358 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint358->setDEF("hanim_chest_front_close_viewpoint");
Viewpoint358->setCenterOfRotation(new float[3]{0,0,1});
Viewpoint358->setDescription("chest front close");
Viewpoint358->setPosition(new float[3]{0,0,0});
HAnimSite357->addChildren(*Viewpoint358);

HAnimHumanoid43->addViewpoints(*HAnimSite357);

CHAnimSite* HAnimSite359 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite359->setName("pelvis_front_close_view");
HAnimSite359->setDEF("hanim_pelvis_front_close_view");
HAnimSite359->setTranslation(new float[3]{0,0.8,1});
CViewpoint* Viewpoint360 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint360->setDEF("hanim_pelvis_front_close_viewpoint");
Viewpoint360->setCenterOfRotation(new float[3]{0,0,1});
Viewpoint360->setDescription("pelvis front close");
Viewpoint360->setPosition(new float[3]{0,0,0});
HAnimSite359->addChildren(*Viewpoint360);

HAnimHumanoid43->addViewpoints(*HAnimSite359);

CHAnimSite* HAnimSite361 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite361->setName("knees_front_close_view");
HAnimSite361->setDEF("hanim_knees_front_close_view");
HAnimSite361->setTranslation(new float[3]{0,0.4,1});
CViewpoint* Viewpoint362 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint362->setDEF("hanim_knees_front_close_viewpoint");
Viewpoint362->setCenterOfRotation(new float[3]{0,0.4,0});
Viewpoint362->setDescription("knees front close");
Viewpoint362->setPosition(new float[3]{0,0,0});
HAnimSite361->addChildren(*Viewpoint362);

HAnimHumanoid43->addViewpoints(*HAnimSite361);

CHAnimSite* HAnimSite363 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite363->setName("feet_front_close_view");
HAnimSite363->setDEF("hanim_feet_front_close_view");
HAnimSite363->setTranslation(new float[3]{0,0,1});
CViewpoint* Viewpoint364 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint364->setDEF("hanim_feet_front_close_viewpoint");
Viewpoint364->setDescription("feet front close");
Viewpoint364->setPosition(new float[3]{0,0,0});
HAnimSite363->addChildren(*Viewpoint364);

HAnimHumanoid43->addViewpoints(*HAnimSite363);

CHAnimSite* HAnimSite365 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite365->setName("eye_level_view");
HAnimSite365->setDEF("hanim_eye_level_view");
HAnimSite365->setTranslation(new float[3]{0,1.6332,0.0502});
CViewpoint* Viewpoint366 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint366->setDEF("hanim_eye_level_viewpoint");
Viewpoint366->setDescription("eye level looking forward");
Viewpoint366->setOrientation(new float[4]{0,1,0,3.141593});
Viewpoint366->setPosition(new float[3]{0,0,0});
HAnimSite365->addChildren(*Viewpoint366);

HAnimHumanoid43->addViewpoints(*HAnimSite365);

CHAnimSite* HAnimSite367 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite367->setUSE("hanim_l_eyeball_site_view");
HAnimHumanoid43->setSites(*HAnimSite367);

CHAnimSite* HAnimSite368 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite368->setUSE("hanim_r_eyeball_site_view");
HAnimHumanoid43->setSites(*HAnimSite368);

CHAnimSite* HAnimSite369 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite369->setUSE("hanim_l_hand_front_view");
HAnimHumanoid43->setSites(*HAnimSite369);

CHAnimSite* HAnimSite370 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite370->setUSE("hanim_r_hand_front_view");
HAnimHumanoid43->setSites(*HAnimSite370);

CHAnimJoint* HAnimJoint371 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint371->setUSE("hanim_humanoid_root");
HAnimHumanoid43->addJoints(*HAnimJoint371);

CHAnimJoint* HAnimJoint372 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint372->setUSE("hanim_sacroiliac");
HAnimHumanoid43->addJoints(*HAnimJoint372);

CHAnimJoint* HAnimJoint373 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint373->setUSE("hanim_vl5");
HAnimHumanoid43->addJoints(*HAnimJoint373);

CHAnimJoint* HAnimJoint374 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint374->setUSE("hanim_vl4");
HAnimHumanoid43->addJoints(*HAnimJoint374);

CHAnimJoint* HAnimJoint375 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint375->setUSE("hanim_vl3");
HAnimHumanoid43->addJoints(*HAnimJoint375);

CHAnimJoint* HAnimJoint376 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint376->setUSE("hanim_vl2");
HAnimHumanoid43->addJoints(*HAnimJoint376);

CHAnimJoint* HAnimJoint377 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint377->setUSE("hanim_vl1");
HAnimHumanoid43->addJoints(*HAnimJoint377);

CHAnimJoint* HAnimJoint378 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint378->setUSE("hanim_vt12");
HAnimHumanoid43->addJoints(*HAnimJoint378);

CHAnimJoint* HAnimJoint379 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint379->setUSE("hanim_vt11");
HAnimHumanoid43->addJoints(*HAnimJoint379);

CHAnimJoint* HAnimJoint380 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint380->setUSE("hanim_vt10");
HAnimHumanoid43->addJoints(*HAnimJoint380);

CHAnimJoint* HAnimJoint381 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint381->setUSE("hanim_vt9");
HAnimHumanoid43->addJoints(*HAnimJoint381);

CHAnimJoint* HAnimJoint382 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint382->setUSE("hanim_vt8");
HAnimHumanoid43->addJoints(*HAnimJoint382);

CHAnimJoint* HAnimJoint383 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint383->setUSE("hanim_vt7");
HAnimHumanoid43->addJoints(*HAnimJoint383);

CHAnimJoint* HAnimJoint384 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint384->setUSE("hanim_vt6");
HAnimHumanoid43->addJoints(*HAnimJoint384);

CHAnimJoint* HAnimJoint385 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint385->setUSE("hanim_vt5");
HAnimHumanoid43->addJoints(*HAnimJoint385);

CHAnimJoint* HAnimJoint386 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint386->setUSE("hanim_vt4");
HAnimHumanoid43->addJoints(*HAnimJoint386);

CHAnimJoint* HAnimJoint387 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint387->setUSE("hanim_vt3");
HAnimHumanoid43->addJoints(*HAnimJoint387);

CHAnimJoint* HAnimJoint388 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint388->setUSE("hanim_vt2");
HAnimHumanoid43->addJoints(*HAnimJoint388);

CHAnimJoint* HAnimJoint389 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint389->setUSE("hanim_vt1");
HAnimHumanoid43->addJoints(*HAnimJoint389);

CHAnimJoint* HAnimJoint390 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint390->setUSE("hanim_vc7");
HAnimHumanoid43->addJoints(*HAnimJoint390);

CHAnimJoint* HAnimJoint391 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint391->setUSE("hanim_vc6");
HAnimHumanoid43->addJoints(*HAnimJoint391);

CHAnimJoint* HAnimJoint392 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint392->setUSE("hanim_vc5");
HAnimHumanoid43->addJoints(*HAnimJoint392);

CHAnimJoint* HAnimJoint393 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint393->setUSE("hanim_vc4");
HAnimHumanoid43->addJoints(*HAnimJoint393);

CHAnimJoint* HAnimJoint394 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint394->setUSE("hanim_vc3");
HAnimHumanoid43->addJoints(*HAnimJoint394);

CHAnimJoint* HAnimJoint395 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint395->setUSE("hanim_vc2");
HAnimHumanoid43->addJoints(*HAnimJoint395);

CHAnimJoint* HAnimJoint396 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint396->setUSE("hanim_vc1");
HAnimHumanoid43->addJoints(*HAnimJoint396);

CHAnimJoint* HAnimJoint397 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint397->setUSE("hanim_skullbase");
HAnimHumanoid43->addJoints(*HAnimJoint397);

CHAnimJoint* HAnimJoint398 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint398->setUSE("hanim_temporomandibular");
HAnimHumanoid43->addJoints(*HAnimJoint398);

CHAnimJoint* HAnimJoint399 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint399->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint399);

CHAnimJoint* HAnimJoint400 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint400->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint400);

CHAnimJoint* HAnimJoint401 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint401->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint401);

CHAnimJoint* HAnimJoint402 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint402->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint402);

CHAnimJoint* HAnimJoint403 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint403->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint403);

CHAnimJoint* HAnimJoint404 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint404->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint404);

CHAnimJoint* HAnimJoint405 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint405->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint405);

CHAnimJoint* HAnimJoint406 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint406->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint406);

CHAnimJoint* HAnimJoint407 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint407->setUSE("hanim_l_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint407);

CHAnimJoint* HAnimJoint408 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint408->setUSE("hanim_r_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint408);

CHAnimJoint* HAnimJoint409 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint409->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint409);

CHAnimJoint* HAnimJoint410 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint410->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint410);

CHAnimJoint* HAnimJoint411 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint411->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint411);

CHAnimJoint* HAnimJoint412 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint412->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint412);

CHAnimJoint* HAnimJoint413 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint413->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint413);

CHAnimJoint* HAnimJoint414 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint414->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint414);

CHAnimJoint* HAnimJoint415 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint415->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint415);

CHAnimJoint* HAnimJoint416 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint416->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint416);

CHAnimJoint* HAnimJoint417 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint417->setUSE("hanim_l_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint417);

CHAnimJoint* HAnimJoint418 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint418->setUSE("hanim_r_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint418);

CHAnimJoint* HAnimJoint419 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint419->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint419);

CHAnimJoint* HAnimJoint420 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint420->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint420);

CHAnimJoint* HAnimJoint421 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint421->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint421);

CHAnimJoint* HAnimJoint422 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint422->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint422);

CHAnimJoint* HAnimJoint423 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint423->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint423);

CHAnimJoint* HAnimJoint424 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint424->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint424);

CHAnimJoint* HAnimJoint425 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint425->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid43->addJoints(*HAnimJoint425);

CHAnimJoint* HAnimJoint426 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint426->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid43->addJoints(*HAnimJoint426);

CHAnimJoint* HAnimJoint427 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint427->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid43->addJoints(*HAnimJoint427);

CHAnimJoint* HAnimJoint428 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint428->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid43->addJoints(*HAnimJoint428);

CHAnimJoint* HAnimJoint429 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint429->setUSE("hanim_l_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint429);

CHAnimJoint* HAnimJoint430 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint430->setUSE("hanim_r_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint430);

CHAnimJoint* HAnimJoint431 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint431->setUSE("hanim_l_eyeball_joint");
HAnimHumanoid43->addJoints(*HAnimJoint431);

CHAnimJoint* HAnimJoint432 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint432->setUSE("hanim_r_eyeball_joint");
HAnimHumanoid43->addJoints(*HAnimJoint432);

CHAnimJoint* HAnimJoint433 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint433->setUSE("hanim_l_eyebrow_joint");
HAnimHumanoid43->addJoints(*HAnimJoint433);

CHAnimJoint* HAnimJoint434 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint434->setUSE("hanim_r_eyebrow_joint");
HAnimHumanoid43->addJoints(*HAnimJoint434);

CHAnimJoint* HAnimJoint435 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint435->setUSE("hanim_l_eyelid_joint");
HAnimHumanoid43->addJoints(*HAnimJoint435);

CHAnimJoint* HAnimJoint436 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint436->setUSE("hanim_r_eyelid_joint");
HAnimHumanoid43->addJoints(*HAnimJoint436);

CHAnimJoint* HAnimJoint437 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint437->setUSE("hanim_l_hip");
HAnimHumanoid43->addJoints(*HAnimJoint437);

CHAnimJoint* HAnimJoint438 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint438->setUSE("hanim_r_hip");
HAnimHumanoid43->addJoints(*HAnimJoint438);

CHAnimJoint* HAnimJoint439 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint439->setUSE("hanim_l_knee");
HAnimHumanoid43->addJoints(*HAnimJoint439);

CHAnimJoint* HAnimJoint440 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint440->setUSE("hanim_r_knee");
HAnimHumanoid43->addJoints(*HAnimJoint440);

CHAnimJoint* HAnimJoint441 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint441->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint441);

CHAnimJoint* HAnimJoint442 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint442->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint442);

CHAnimJoint* HAnimJoint443 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint443->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint443);

CHAnimJoint* HAnimJoint444 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint444->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint444);

CHAnimJoint* HAnimJoint445 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint445->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint445);

CHAnimJoint* HAnimJoint446 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint446->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint446);

CHAnimJoint* HAnimJoint447 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint447->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint447);

CHAnimJoint* HAnimJoint448 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint448->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint448);

CHAnimJoint* HAnimJoint449 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint449->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint449);

CHAnimJoint* HAnimJoint450 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint450->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint450);

CHAnimJoint* HAnimJoint451 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint451->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint451);

CHAnimJoint* HAnimJoint452 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint452->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint452);

CHAnimJoint* HAnimJoint453 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint453->setUSE("hanim_l_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint453);

CHAnimJoint* HAnimJoint454 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint454->setUSE("hanim_r_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint454);

CHAnimJoint* HAnimJoint455 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint455->setUSE("hanim_l_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint455);

CHAnimJoint* HAnimJoint456 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint456->setUSE("hanim_r_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint456);

CHAnimJoint* HAnimJoint457 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint457->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint457);

CHAnimJoint* HAnimJoint458 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint458->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint458);

CHAnimJoint* HAnimJoint459 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint459->setUSE("hanim_l_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint459);

CHAnimJoint* HAnimJoint460 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint460->setUSE("hanim_r_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint460);

CHAnimJoint* HAnimJoint461 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint461->setUSE("hanim_l_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint461);

CHAnimJoint* HAnimJoint462 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint462->setUSE("hanim_r_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint462);

CHAnimJoint* HAnimJoint463 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint463->setUSE("hanim_l_tarsometatarsal_2");
HAnimHumanoid43->addJoints(*HAnimJoint463);

CHAnimJoint* HAnimJoint464 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint464->setUSE("hanim_r_tarsometatarsal_2");
HAnimHumanoid43->addJoints(*HAnimJoint464);

CHAnimSegment* HAnimSegment465 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment465->setUSE("hanim_pelvis");
HAnimHumanoid43->setSegments(*HAnimSegment465);

CHAnimSegment* HAnimSegment466 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment466->setUSE("hanim_skull");
HAnimHumanoid43->setSegments(*HAnimSegment466);

CHAnimSegment* HAnimSegment467 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment467->setUSE("hanim_jaw");
HAnimHumanoid43->setSegments(*HAnimSegment467);

CHAnimSegment* HAnimSegment468 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment468->setUSE("hanim_c1");
HAnimHumanoid43->setSegments(*HAnimSegment468);

CHAnimSegment* HAnimSegment469 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment469->setUSE("hanim_c2");
HAnimHumanoid43->setSegments(*HAnimSegment469);

CHAnimSegment* HAnimSegment470 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment470->setUSE("hanim_c3");
HAnimHumanoid43->setSegments(*HAnimSegment470);

CHAnimSegment* HAnimSegment471 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment471->setUSE("hanim_c4");
HAnimHumanoid43->setSegments(*HAnimSegment471);

CHAnimSegment* HAnimSegment472 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment472->setUSE("hanim_c5");
HAnimHumanoid43->setSegments(*HAnimSegment472);

CHAnimSegment* HAnimSegment473 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment473->setUSE("hanim_c6");
HAnimHumanoid43->setSegments(*HAnimSegment473);

CHAnimSegment* HAnimSegment474 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment474->setUSE("hanim_c7");
HAnimHumanoid43->setSegments(*HAnimSegment474);

CHAnimSegment* HAnimSegment475 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment475->setUSE("hanim_t1");
HAnimHumanoid43->setSegments(*HAnimSegment475);

CHAnimSegment* HAnimSegment476 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment476->setUSE("hanim_t2");
HAnimHumanoid43->setSegments(*HAnimSegment476);

CHAnimSegment* HAnimSegment477 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment477->setUSE("hanim_t3");
HAnimHumanoid43->setSegments(*HAnimSegment477);

CHAnimSegment* HAnimSegment478 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment478->setUSE("hanim_t4");
HAnimHumanoid43->setSegments(*HAnimSegment478);

CHAnimSegment* HAnimSegment479 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment479->setUSE("hanim_t5");
HAnimHumanoid43->setSegments(*HAnimSegment479);

CHAnimSegment* HAnimSegment480 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment480->setUSE("hanim_t6");
HAnimHumanoid43->setSegments(*HAnimSegment480);

CHAnimSegment* HAnimSegment481 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment481->setUSE("hanim_t7");
HAnimHumanoid43->setSegments(*HAnimSegment481);

CHAnimSegment* HAnimSegment482 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment482->setUSE("hanim_t8");
HAnimHumanoid43->setSegments(*HAnimSegment482);

CHAnimSegment* HAnimSegment483 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment483->setUSE("hanim_t9");
HAnimHumanoid43->setSegments(*HAnimSegment483);

CHAnimSegment* HAnimSegment484 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment484->setUSE("hanim_t10");
HAnimHumanoid43->setSegments(*HAnimSegment484);

CHAnimSegment* HAnimSegment485 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment485->setUSE("hanim_t11");
HAnimHumanoid43->setSegments(*HAnimSegment485);

CHAnimSegment* HAnimSegment486 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment486->setUSE("hanim_t12");
HAnimHumanoid43->setSegments(*HAnimSegment486);

CHAnimSegment* HAnimSegment487 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment487->setUSE("hanim_l1");
HAnimHumanoid43->setSegments(*HAnimSegment487);

CHAnimSegment* HAnimSegment488 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment488->setUSE("hanim_l2");
HAnimHumanoid43->setSegments(*HAnimSegment488);

CHAnimSegment* HAnimSegment489 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment489->setUSE("hanim_l3");
HAnimHumanoid43->setSegments(*HAnimSegment489);

CHAnimSegment* HAnimSegment490 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment490->setUSE("hanim_l4");
HAnimHumanoid43->setSegments(*HAnimSegment490);

CHAnimSegment* HAnimSegment491 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment491->setUSE("hanim_l5");
HAnimHumanoid43->setSegments(*HAnimSegment491);

CHAnimSegment* HAnimSegment492 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment492->setUSE("hanim_sacrum");
HAnimHumanoid43->setSegments(*HAnimSegment492);

CHAnimSegment* HAnimSegment493 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment493->setUSE("hanim_l_calf");
HAnimHumanoid43->setSegments(*HAnimSegment493);

CHAnimSegment* HAnimSegment494 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment494->setUSE("hanim_r_calf");
HAnimHumanoid43->setSegments(*HAnimSegment494);

CHAnimSegment* HAnimSegment495 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment495->setUSE("hanim_l_carpal");
HAnimHumanoid43->setSegments(*HAnimSegment495);

CHAnimSegment* HAnimSegment496 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment496->setUSE("hanim_r_carpal");
HAnimHumanoid43->setSegments(*HAnimSegment496);

CHAnimSegment* HAnimSegment497 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment497->setUSE("hanim_l_carpal_distal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment497);

CHAnimSegment* HAnimSegment498 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment498->setUSE("hanim_r_carpal_distal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment498);

CHAnimSegment* HAnimSegment499 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment499->setUSE("hanim_l_carpal_distal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment499);

CHAnimSegment* HAnimSegment500 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment500->setUSE("hanim_r_carpal_distal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment500);

CHAnimSegment* HAnimSegment501 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment501->setUSE("hanim_l_carpal_distal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment501);

CHAnimSegment* HAnimSegment502 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment502->setUSE("hanim_r_carpal_distal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment502);

CHAnimSegment* HAnimSegment503 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment503->setUSE("hanim_l_carpal_distal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment503);

CHAnimSegment* HAnimSegment504 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment504->setUSE("hanim_r_carpal_distal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment504);

CHAnimSegment* HAnimSegment505 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment505->setUSE("hanim_l_carpal_distal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment505);

CHAnimSegment* HAnimSegment506 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment506->setUSE("hanim_r_carpal_distal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment506);

CHAnimSegment* HAnimSegment507 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment507->setUSE("hanim_l_carpal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment507);

CHAnimSegment* HAnimSegment508 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment508->setUSE("hanim_r_carpal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment508);

CHAnimSegment* HAnimSegment509 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment509->setUSE("hanim_l_carpal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment509);

CHAnimSegment* HAnimSegment510 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment510->setUSE("hanim_r_carpal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment510);

CHAnimSegment* HAnimSegment511 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment511->setUSE("hanim_l_carpal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment511);

CHAnimSegment* HAnimSegment512 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment512->setUSE("hanim_r_carpal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment512);

CHAnimSegment* HAnimSegment513 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment513->setUSE("hanim_l_carpal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment513);

CHAnimSegment* HAnimSegment514 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment514->setUSE("hanim_r_carpal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment514);

CHAnimSegment* HAnimSegment515 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment515->setUSE("hanim_l_carpal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment515);

CHAnimSegment* HAnimSegment516 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment516->setUSE("hanim_r_carpal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment516);

CHAnimSegment* HAnimSegment517 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment517->setUSE("hanim_l_carpal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment517);

CHAnimSegment* HAnimSegment518 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment518->setUSE("hanim_r_carpal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment518);

CHAnimSegment* HAnimSegment519 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment519->setUSE("hanim_l_carpal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment519);

CHAnimSegment* HAnimSegment520 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment520->setUSE("hanim_r_carpal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment520);

CHAnimSegment* HAnimSegment521 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment521->setUSE("hanim_l_carpal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment521);

CHAnimSegment* HAnimSegment522 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment522->setUSE("hanim_r_carpal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment522);

CHAnimSegment* HAnimSegment523 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment523->setUSE("hanim_l_carpal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment523);

CHAnimSegment* HAnimSegment524 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment524->setUSE("hanim_r_carpal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment524);

CHAnimSegment* HAnimSegment525 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment525->setUSE("hanim_l_clavicle");
HAnimHumanoid43->setSegments(*HAnimSegment525);

CHAnimSegment* HAnimSegment526 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment526->setUSE("hanim_r_clavicle");
HAnimHumanoid43->setSegments(*HAnimSegment526);

CHAnimSegment* HAnimSegment527 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment527->setUSE("hanim_l_eyeball");
HAnimHumanoid43->setSegments(*HAnimSegment527);

CHAnimSegment* HAnimSegment528 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment528->setUSE("hanim_r_eyeball");
HAnimHumanoid43->setSegments(*HAnimSegment528);

CHAnimSegment* HAnimSegment529 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment529->setUSE("hanim_l_eyebrow");
HAnimHumanoid43->setSegments(*HAnimSegment529);

CHAnimSegment* HAnimSegment530 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment530->setUSE("hanim_r_eyebrow");
HAnimHumanoid43->setSegments(*HAnimSegment530);

CHAnimSegment* HAnimSegment531 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment531->setUSE("hanim_l_eyelid");
HAnimHumanoid43->setSegments(*HAnimSegment531);

CHAnimSegment* HAnimSegment532 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment532->setUSE("hanim_r_eyelid");
HAnimHumanoid43->setSegments(*HAnimSegment532);

CHAnimSegment* HAnimSegment533 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment533->setUSE("hanim_l_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment533);

CHAnimSegment* HAnimSegment534 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment534->setUSE("hanim_r_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment534);

CHAnimSegment* HAnimSegment535 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment535->setUSE("hanim_l_metacarpal_1");
HAnimHumanoid43->setSegments(*HAnimSegment535);

CHAnimSegment* HAnimSegment536 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment536->setUSE("hanim_r_metacarpal_1");
HAnimHumanoid43->setSegments(*HAnimSegment536);

CHAnimSegment* HAnimSegment537 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment537->setUSE("hanim_l_metacarpal_2");
HAnimHumanoid43->setSegments(*HAnimSegment537);

CHAnimSegment* HAnimSegment538 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment538->setUSE("hanim_r_metacarpal_2");
HAnimHumanoid43->setSegments(*HAnimSegment538);

CHAnimSegment* HAnimSegment539 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment539->setUSE("hanim_l_metacarpal_3");
HAnimHumanoid43->setSegments(*HAnimSegment539);

CHAnimSegment* HAnimSegment540 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment540->setUSE("hanim_r_metacarpal_3");
HAnimHumanoid43->setSegments(*HAnimSegment540);

CHAnimSegment* HAnimSegment541 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment541->setUSE("hanim_l_metacarpal_4");
HAnimHumanoid43->setSegments(*HAnimSegment541);

CHAnimSegment* HAnimSegment542 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment542->setUSE("hanim_r_metacarpal_4");
HAnimHumanoid43->setSegments(*HAnimSegment542);

CHAnimSegment* HAnimSegment543 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment543->setUSE("hanim_l_metacarpal_5");
HAnimHumanoid43->setSegments(*HAnimSegment543);

CHAnimSegment* HAnimSegment544 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment544->setUSE("hanim_r_metacarpal_5");
HAnimHumanoid43->setSegments(*HAnimSegment544);

CHAnimSegment* HAnimSegment545 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment545->setUSE("hanim_l_metatarsal_2");
HAnimHumanoid43->setSegments(*HAnimSegment545);

CHAnimSegment* HAnimSegment546 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment546->setUSE("hanim_r_metatarsal_2");
HAnimHumanoid43->setSegments(*HAnimSegment546);

CHAnimSegment* HAnimSegment547 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment547->setUSE("hanim_l_scapula");
HAnimHumanoid43->setSegments(*HAnimSegment547);

CHAnimSegment* HAnimSegment548 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment548->setUSE("hanim_r_scapula");
HAnimHumanoid43->setSegments(*HAnimSegment548);

CHAnimSegment* HAnimSegment549 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment549->setUSE("hanim_l_talus");
HAnimHumanoid43->setSegments(*HAnimSegment549);

CHAnimSegment* HAnimSegment550 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment550->setUSE("hanim_r_talus");
HAnimHumanoid43->setSegments(*HAnimSegment550);

CHAnimSegment* HAnimSegment551 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment551->setUSE("hanim_l_tarsal_distal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment551);

CHAnimSegment* HAnimSegment552 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment552->setUSE("hanim_r_tarsal_distal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment552);

CHAnimSegment* HAnimSegment553 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment553->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment553);

CHAnimSegment* HAnimSegment554 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment554->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment554);

CHAnimSegment* HAnimSegment555 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment555->setUSE("hanim_l_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment555);

CHAnimSegment* HAnimSegment556 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment556->setUSE("hanim_r_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment556);

CHAnimSegment* HAnimSegment557 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment557->setUSE("hanim_l_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment557);

CHAnimSegment* HAnimSegment558 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment558->setUSE("hanim_r_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment558);

CHAnimSite* HAnimSite559 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite559->setUSE("hanim_crotch_pt");
HAnimHumanoid43->setSites(*HAnimSite559);

CHAnimSite* HAnimSite560 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite560->setUSE("hanim_skull_vertex_tip");
HAnimHumanoid43->setSites(*HAnimSite560);

CHAnimSite* HAnimSite561 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite561->setUSE("hanim_sellion_pt");
HAnimHumanoid43->setSites(*HAnimSite561);

CHAnimSite* HAnimSite562 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite562->setUSE("hanim_supramenton_pt");
HAnimHumanoid43->setSites(*HAnimSite562);

CHAnimSite* HAnimSite563 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite563->setUSE("hanim_nuchale_pt");
HAnimHumanoid43->setSites(*HAnimSite563);

CHAnimSite* HAnimSite564 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite564->setUSE("hanim_suprasternale_pt");
HAnimHumanoid43->setSites(*HAnimSite564);

CHAnimSite* HAnimSite565 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite565->setUSE("hanim_cervicale_pt");
HAnimHumanoid43->setSites(*HAnimSite565);

CHAnimSite* HAnimSite566 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite566->setUSE("hanim_substernale_pt");
HAnimHumanoid43->setSites(*HAnimSite566);

CHAnimSite* HAnimSite567 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite567->setUSE("hanim_rib10_midspine_pt");
HAnimHumanoid43->setSites(*HAnimSite567);

CHAnimSite* HAnimSite568 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite568->setUSE("hanim_waist_preferred_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite568);

CHAnimSite* HAnimSite569 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite569->setUSE("hanim_navel_pt");
HAnimHumanoid43->setSites(*HAnimSite569);

CHAnimSite* HAnimSite570 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite570->setUSE("hanim_l_acromion_pt");
HAnimHumanoid43->setSites(*HAnimSite570);

CHAnimSite* HAnimSite571 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite571->setUSE("hanim_r_acromion_pt");
HAnimHumanoid43->setSites(*HAnimSite571);

CHAnimSite* HAnimSite572 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite572->setUSE("hanim_r_asis_pt");
HAnimHumanoid43->setSites(*HAnimSite572);

CHAnimSite* HAnimSite573 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite573->setUSE("hanim_l_asis_pt");
HAnimHumanoid43->setSites(*HAnimSite573);

CHAnimSite* HAnimSite574 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite574->setUSE("hanim_l_axilla_distal_pt");
HAnimHumanoid43->setSites(*HAnimSite574);

CHAnimSite* HAnimSite575 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite575->setUSE("hanim_r_axilla_distal_pt");
HAnimHumanoid43->setSites(*HAnimSite575);

CHAnimSite* HAnimSite576 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite576->setUSE("hanim_l_axilla_proximal_pt");
HAnimHumanoid43->setSites(*HAnimSite576);

CHAnimSite* HAnimSite577 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite577->setUSE("hanim_r_axilla_proximal_pt");
HAnimHumanoid43->setSites(*HAnimSite577);

CHAnimSite* HAnimSite578 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite578->setUSE("hanim_l_calcaneus_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite578);

CHAnimSite* HAnimSite579 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite579->setUSE("hanim_r_calcaneus_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite579);

CHAnimSite* HAnimSite580 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite580->setUSE("hanim_l_carpal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite580);

CHAnimSite* HAnimSite581 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite581->setUSE("hanim_r_carpal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite581);

CHAnimSite* HAnimSite582 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite582->setUSE("hanim_l_carpal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite582);

CHAnimSite* HAnimSite583 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite583->setUSE("hanim_r_carpal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite583);

CHAnimSite* HAnimSite584 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite584->setUSE("hanim_l_carpal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite584);

CHAnimSite* HAnimSite585 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite585->setUSE("hanim_r_carpal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite585);

CHAnimSite* HAnimSite586 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite586->setUSE("hanim_l_carpal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite586);

CHAnimSite* HAnimSite587 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite587->setUSE("hanim_r_carpal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite587);

CHAnimSite* HAnimSite588 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite588->setUSE("hanim_l_carpal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite588);

CHAnimSite* HAnimSite589 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite589->setUSE("hanim_r_carpal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite589);

CHAnimSite* HAnimSite590 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite590->setUSE("hanim_l_clavicle_pt");
HAnimHumanoid43->setSites(*HAnimSite590);

CHAnimSite* HAnimSite591 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite591->setUSE("hanim_r_clavicle_pt");
HAnimHumanoid43->setSites(*HAnimSite591);

CHAnimSite* HAnimSite592 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite592->setUSE("hanim_l_dactylion_pt");
HAnimHumanoid43->setSites(*HAnimSite592);

CHAnimSite* HAnimSite593 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite593->setUSE("hanim_r_dactylion_pt");
HAnimHumanoid43->setSites(*HAnimSite593);

CHAnimSite* HAnimSite594 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite594->setUSE("hanim_l_femoral_lateral_epicondyle_pt");
HAnimHumanoid43->setSites(*HAnimSite594);

CHAnimSite* HAnimSite595 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite595->setUSE("hanim_r_femoral_lateral_epicondyle_pt");
HAnimHumanoid43->setSites(*HAnimSite595);

CHAnimSite* HAnimSite596 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite596->setUSE("hanim_l_femoral_medial_epicondyle_pt");
HAnimHumanoid43->setSites(*HAnimSite596);

CHAnimSite* HAnimSite597 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite597->setUSE("hanim_r_femoral_medial_epicondyle_pt");
HAnimHumanoid43->setSites(*HAnimSite597);

CHAnimSite* HAnimSite598 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite598->setUSE("hanim_l_forefoot_tip");
HAnimHumanoid43->setSites(*HAnimSite598);

CHAnimSite* HAnimSite599 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite599->setUSE("hanim_r_forefoot_tip");
HAnimHumanoid43->setSites(*HAnimSite599);

CHAnimSite* HAnimSite600 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite600->setUSE("hanim_r_gonion_pt");
HAnimHumanoid43->setSites(*HAnimSite600);

CHAnimSite* HAnimSite601 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite601->setUSE("hanim_l_gonion_pt");
HAnimHumanoid43->setSites(*HAnimSite601);

CHAnimSite* HAnimSite602 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite602->setUSE("hanim_l_humeral_lateral_epicondyle_pt");
HAnimHumanoid43->setSites(*HAnimSite602);

CHAnimSite* HAnimSite603 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite603->setUSE("hanim_r_humeral_lateral_epicondyle_pt");
HAnimHumanoid43->setSites(*HAnimSite603);

CHAnimSite* HAnimSite604 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite604->setUSE("hanim_l_humeral_medial_epicondyle_pt");
HAnimHumanoid43->setSites(*HAnimSite604);

CHAnimSite* HAnimSite605 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite605->setUSE("hanim_r_humeral_medial_epicondyle_pt");
HAnimHumanoid43->setSites(*HAnimSite605);

CHAnimSite* HAnimSite606 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite606->setUSE("hanim_r_iliocristale_pt");
HAnimHumanoid43->setSites(*HAnimSite606);

CHAnimSite* HAnimSite607 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite607->setUSE("hanim_l_iliocristale_pt");
HAnimHumanoid43->setSites(*HAnimSite607);

CHAnimSite* HAnimSite608 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite608->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid43->setSites(*HAnimSite608);

CHAnimSite* HAnimSite609 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite609->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid43->setSites(*HAnimSite609);

CHAnimSite* HAnimSite610 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite610->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid43->setSites(*HAnimSite610);

CHAnimSite* HAnimSite611 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite611->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid43->setSites(*HAnimSite611);

CHAnimSite* HAnimSite612 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite612->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite612);

CHAnimSite* HAnimSite613 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite613->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite613);

CHAnimSite* HAnimSite614 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite614->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite614);

CHAnimSite* HAnimSite615 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite615->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite615);

CHAnimSite* HAnimSite616 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite616->setUSE("hanim_l_metacarpal_phalanx_2_pt");
HAnimHumanoid43->setSites(*HAnimSite616);

CHAnimSite* HAnimSite617 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite617->setUSE("hanim_r_metacarpal_phalanx_2_pt");
HAnimHumanoid43->setSites(*HAnimSite617);

CHAnimSite* HAnimSite618 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite618->setUSE("hanim_l_metacarpal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite618);

CHAnimSite* HAnimSite619 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite619->setUSE("hanim_r_metacarpal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite619);

CHAnimSite* HAnimSite620 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite620->setUSE("hanim_l_metatarsal_phalanx_1_pt");
HAnimHumanoid43->setSites(*HAnimSite620);

CHAnimSite* HAnimSite621 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite621->setUSE("hanim_r_metatarsal_phalanx_1_pt");
HAnimHumanoid43->setSites(*HAnimSite621);

CHAnimSite* HAnimSite622 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite622->setUSE("hanim_l_metatarsal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite622);

CHAnimSite* HAnimSite623 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite623->setUSE("hanim_r_metatarsal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite623);

CHAnimSite* HAnimSite624 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite624->setUSE("hanim_r_neck_base_pt");
HAnimHumanoid43->setSites(*HAnimSite624);

CHAnimSite* HAnimSite625 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite625->setUSE("hanim_l_neck_base_pt");
HAnimHumanoid43->setSites(*HAnimSite625);

CHAnimSite* HAnimSite626 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite626->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid43->setSites(*HAnimSite626);

CHAnimSite* HAnimSite627 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite627->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid43->setSites(*HAnimSite627);

CHAnimSite* HAnimSite628 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite628->setUSE("hanim_r_psis_pt");
HAnimHumanoid43->setSites(*HAnimSite628);

CHAnimSite* HAnimSite629 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite629->setUSE("hanim_l_psis_pt");
HAnimHumanoid43->setSites(*HAnimSite629);

CHAnimSite* HAnimSite630 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite630->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite630);

CHAnimSite* HAnimSite631 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite631->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite631);

CHAnimSite* HAnimSite632 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite632->setUSE("hanim_l_radiale_pt");
HAnimHumanoid43->setSites(*HAnimSite632);

CHAnimSite* HAnimSite633 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite633->setUSE("hanim_r_radiale_pt");
HAnimHumanoid43->setSites(*HAnimSite633);

CHAnimSite* HAnimSite634 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite634->setUSE("hanim_r_rib10_pt");
HAnimHumanoid43->setSites(*HAnimSite634);

CHAnimSite* HAnimSite635 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite635->setUSE("hanim_l_rib10_pt");
HAnimHumanoid43->setSites(*HAnimSite635);

CHAnimSite* HAnimSite636 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite636->setUSE("hanim_temporomandibular_l_site_pt");
HAnimHumanoid43->setSites(*HAnimSite636);

CHAnimSite* HAnimSite637 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite637->setUSE("hanim_temporomandibular_r_site_pt");
HAnimHumanoid43->setSites(*HAnimSite637);

CHAnimSite* HAnimSite638 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite638->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid43->setSites(*HAnimSite638);

CHAnimSite* HAnimSite639 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite639->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid43->setSites(*HAnimSite639);

CHAnimSite* HAnimSite640 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite640->setUSE("hanim_l_tarsal_distal_phalanx_2_pt");
HAnimHumanoid43->setSites(*HAnimSite640);

CHAnimSite* HAnimSite641 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite641->setUSE("hanim_r_tarsal_distal_phalanx_2_pt");
HAnimHumanoid43->setSites(*HAnimSite641);

CHAnimSite* HAnimSite642 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite642->setUSE("hanim_r_thelion_pt");
HAnimHumanoid43->setSites(*HAnimSite642);

CHAnimSite* HAnimSite643 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite643->setUSE("hanim_l_thelion_pt");
HAnimHumanoid43->setSites(*HAnimSite643);

CHAnimSite* HAnimSite644 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite644->setUSE("hanim_r_tragion_pt");
HAnimHumanoid43->setSites(*HAnimSite644);

CHAnimSite* HAnimSite645 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite645->setUSE("hanim_l_tragion_pt");
HAnimHumanoid43->setSites(*HAnimSite645);

CHAnimSite* HAnimSite646 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite646->setUSE("hanim_r_trochanterion_pt");
HAnimHumanoid43->setSites(*HAnimSite646);

CHAnimSite* HAnimSite647 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite647->setUSE("hanim_l_trochanterion_pt");
HAnimHumanoid43->setSites(*HAnimSite647);

CHAnimSite* HAnimSite648 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite648->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite648);

CHAnimSite* HAnimSite649 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite649->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite649);

group->addChildren(*HAnimHumanoid43);

X3D0->setScene(*Scene29);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

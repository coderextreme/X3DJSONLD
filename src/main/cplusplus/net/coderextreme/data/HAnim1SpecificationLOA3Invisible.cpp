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
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
Ccomponent* component2 = new Ccomponent();
component2->setName("H-Anim");
component2->setLevel(1);
head1->addComponent(*component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("HAnim1SpecificationLOA3Invisible.x3d");
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
meta7->setContent("19 February 2021");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("creator");
meta8->setContent("Matthew T. Beitler, Joe D. Williams, Don Brutzman");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("HAnim1SpecificationLOA3Illustrated.x3d");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("HAnim1SpecificationLOA3Animation.x3d");
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
meta27->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/HAnim1SpecificationLOA3Invisible.x3d");
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
HAnimHumanoid43->setInfo(new CString[7]{"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=1.0","height=1.7504"}, 7);
HAnimHumanoid43->setVersion("1.0");
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//right between the eyes, stationary position not animating except with body itself
CHAnimJoint* HAnimJoint44 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint44->setName("humanoid_root");
HAnimJoint44->setDEF("hanim_humanoid_root");
HAnimJoint44->setCenter(new float[3]{0,0.824,0.0277});
HAnimJoint44->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint44->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment45 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment45->setName("sacrum");
HAnimSegment45->setDEF("hanim_sacrum");
HAnimJoint44->addChildren(*HAnimSegment45);

CHAnimJoint* HAnimJoint46 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint46->setName("sacroiliac");
HAnimJoint46->setDEF("hanim_sacroiliac");
HAnimJoint46->setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint46->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint46->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment47 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment47->setName("pelvis");
HAnimSegment47->setDEF("hanim_pelvis");
CHAnimSite* HAnimSite48 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite48->setName("r_iliocristale_pt");
HAnimSite48->setDEF("hanim_r_iliocristale_pt");
HAnimSite48->setTranslation(new float[3]{-0.1525,1.0628,0.0035});
HAnimSegment47->addChildren(*HAnimSite48);

CHAnimSite* HAnimSite49 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite49->setName("r_trochanterion_pt");
HAnimSite49->setDEF("hanim_r_trochanterion_pt");
HAnimSite49->setTranslation(new float[3]{-0.1689,0.8419,0.0352});
HAnimSegment47->addChildren(*HAnimSite49);

CHAnimSite* HAnimSite50 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite50->setName("l_iliocristale_pt");
HAnimSite50->setDEF("hanim_l_iliocristale_pt");
HAnimSite50->setTranslation(new float[3]{0.1612,1.0537,0.0008});
HAnimSegment47->addChildren(*HAnimSite50);

CHAnimSite* HAnimSite51 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite51->setName("l_trochanterion_pt");
HAnimSite51->setDEF("hanim_l_trochanterion_pt");
HAnimSite51->setTranslation(new float[3]{0.1677,0.8336,0.0303});
HAnimSegment47->addChildren(*HAnimSite51);

CHAnimSite* HAnimSite52 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite52->setName("r_asis_pt");
HAnimSite52->setDEF("hanim_r_asis_pt");
HAnimSite52->setTranslation(new float[3]{-0.0887,1.0021,0.1112});
HAnimSegment47->addChildren(*HAnimSite52);

CHAnimSite* HAnimSite53 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite53->setName("l_asis_pt");
HAnimSite53->setDEF("hanim_l_asis_pt");
HAnimSite53->setTranslation(new float[3]{0.0925,0.9983,0.1052});
HAnimSegment47->addChildren(*HAnimSite53);

CHAnimSite* HAnimSite54 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite54->setName("r_psis_pt");
HAnimSite54->setDEF("hanim_r_psis_pt");
HAnimSite54->setTranslation(new float[3]{-0.0716,1.019,-0.1138});
HAnimSegment47->addChildren(*HAnimSite54);

CHAnimSite* HAnimSite55 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite55->setName("l_psis_pt");
HAnimSite55->setDEF("hanim_l_psis_pt");
HAnimSite55->setTranslation(new float[3]{0.0774,1.019,-0.1151});
HAnimSegment47->addChildren(*HAnimSite55);

CHAnimSite* HAnimSite56 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite56->setName("crotch_pt");
HAnimSite56->setDEF("hanim_crotch_pt");
HAnimSite56->setTranslation(new float[3]{0.0034,0.8266,0.0257});
HAnimSegment47->addChildren(*HAnimSite56);

HAnimJoint46->addChildren(*HAnimSegment47);

CHAnimJoint* HAnimJoint57 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint57->setName("l_hip");
HAnimJoint57->setDEF("hanim_l_hip");
HAnimJoint57->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint57->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint57->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment58 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment58->setName("l_thigh");
HAnimSegment58->setDEF("hanim_l_thigh");
CHAnimSite* HAnimSite59 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite59->setName("l_knee_crease_pt");
HAnimSite59->setDEF("hanim_l_knee_crease_pt");
HAnimSite59->setTranslation(new float[3]{0.0993,0.4881,-0.0309});
HAnimSegment58->addChildren(*HAnimSite59);

CHAnimSite* HAnimSite60 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite60->setName("l_femoral_lateral_epicn_pt");
HAnimSite60->setDEF("hanim_l_femoral_lateral_epicn_pt");
HAnimSite60->setTranslation(new float[3]{0.1598,0.4967,0.0297});
HAnimSegment58->addChildren(*HAnimSite60);

CHAnimSite* HAnimSite61 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite61->setName("l_femoral_medial_epicn_pt");
HAnimSite61->setDEF("hanim_l_femoral_medial_epicn_pt");
HAnimSite61->setTranslation(new float[3]{0.0398,0.4946,0.0303});
HAnimSegment58->addChildren(*HAnimSite61);

HAnimJoint57->addChildren(*HAnimSegment58);

CHAnimJoint* HAnimJoint62 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint62->setName("l_knee");
HAnimJoint62->setDEF("hanim_l_knee");
HAnimJoint62->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint62->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint62->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment63 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment63->setName("l_calf");
HAnimSegment63->setDEF("hanim_l_calf");
HAnimJoint62->addChildren(*HAnimSegment63);

CHAnimJoint* HAnimJoint64 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint64->setName("l_ankle");
HAnimJoint64->setDEF("hanim_l_ankle");
HAnimJoint64->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint64->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint64->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment65 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment65->setName("l_hindfoot");
HAnimSegment65->setDEF("hanim_l_hindfoot");
CHAnimSite* HAnimSite66 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite66->setName("l_lateral_malleolus_pt");
HAnimSite66->setDEF("hanim_l_lateral_malleolus_pt");
HAnimSite66->setTranslation(new float[3]{0.1308,0.0597,-0.1032});
HAnimSegment65->addChildren(*HAnimSite66);

CHAnimSite* HAnimSite67 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite67->setName("l_medial_malleolus_pt");
HAnimSite67->setDEF("hanim_l_medial_malleolus_pt");
HAnimSite67->setTranslation(new float[3]{0.089,0.0716,-0.0881});
HAnimSegment65->addChildren(*HAnimSite67);

CHAnimSite* HAnimSite68 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite68->setName("l_sphyrion_pt");
HAnimSite68->setDEF("hanim_l_sphyrion_pt");
HAnimSite68->setTranslation(new float[3]{0.089,0.0575,-0.0943});
HAnimSegment65->addChildren(*HAnimSite68);

CHAnimSite* HAnimSite69 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite69->setName("l_calcaneous_post_pt");
HAnimSite69->setDEF("hanim_l_calcaneous_post_pt");
HAnimSite69->setTranslation(new float[3]{0.0974,0.0259,-0.1171});
HAnimSegment65->addChildren(*HAnimSite69);

HAnimJoint64->addChildren(*HAnimSegment65);

CHAnimJoint* HAnimJoint70 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint70->setName("l_subtalar");
HAnimJoint70->setDEF("hanim_l_subtalar");
HAnimJoint70->setCenter(new float[3]{0.1086,0.0001,-0.0368});
HAnimJoint70->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint70->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment71 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment71->setName("l_midproximal");
HAnimSegment71->setDEF("hanim_l_midproximal");
HAnimJoint70->addChildren(*HAnimSegment71);

CHAnimJoint* HAnimJoint72 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint72->setName("l_midtarsal");
HAnimJoint72->setDEF("hanim_l_midtarsal");
HAnimJoint72->setCenter(new float[3]{0.1086,0.0001,0.0368});
HAnimJoint72->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint72->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment73 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment73->setName("l_middistal");
HAnimSegment73->setDEF("hanim_l_middistal");
CHAnimSite* HAnimSite74 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite74->setName("l_metatarsal_pha1_pt");
HAnimSite74->setDEF("hanim_l_metatarsal_pha1_pt");
HAnimSite74->setTranslation(new float[3]{0.0816,0.0232,0.0106});
HAnimSegment73->addChildren(*HAnimSite74);

HAnimJoint72->addChildren(*HAnimSegment73);

CHAnimJoint* HAnimJoint75 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint75->setName("l_metatarsal");
HAnimJoint75->setDEF("hanim_l_metatarsal");
HAnimJoint75->setCenter(new float[3]{0.1086,0,0.0762});
HAnimJoint75->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint75->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment76 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment76->setName("l_forefoot");
HAnimSegment76->setDEF("hanim_l_forefoot");
CHAnimSite* HAnimSite77 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite77->setName("l_forefoot_tip");
HAnimSite77->setDEF("hanim_l_forefoot_tip");
HAnimSite77->setTranslation(new float[3]{0.1354,0.0016,0.1476});
HAnimSegment76->addChildren(*HAnimSite77);

CHAnimSite* HAnimSite78 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite78->setName("l_metatarsal_pha5_pt");
HAnimSite78->setDEF("hanim_l_metatarsal_pha5_pt");
HAnimSite78->setTranslation(new float[3]{0.1825,0.007,0.0928});
HAnimSegment76->addChildren(*HAnimSite78);

CHAnimSite* HAnimSite79 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite79->setName("l_digit2_pt");
HAnimSite79->setDEF("hanim_l_digit2_pt");
HAnimSite79->setTranslation(new float[3]{0.1195,0.0079,0.1433});
HAnimSegment76->addChildren(*HAnimSite79);

HAnimJoint75->addChildren(*HAnimSegment76);

HAnimJoint72->addChildren(*HAnimJoint75);

HAnimJoint70->addChildren(*HAnimJoint72);

HAnimJoint64->addChildren(*HAnimJoint70);

HAnimJoint62->addChildren(*HAnimJoint64);

HAnimJoint57->addChildren(*HAnimJoint62);

HAnimJoint46->addChildren(*HAnimJoint57);

CHAnimJoint* HAnimJoint80 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint80->setName("r_hip");
HAnimJoint80->setDEF("hanim_r_hip");
HAnimJoint80->setCenter(new float[3]{-0.0961,0.9124,-0.0001});
HAnimJoint80->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint80->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment81 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment81->setName("r_thigh");
HAnimSegment81->setDEF("hanim_r_thigh");
CHAnimSite* HAnimSite82 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite82->setName("r_knee_crease_pt");
HAnimSite82->setDEF("hanim_r_knee_crease_pt");
HAnimSite82->setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
HAnimSegment81->addChildren(*HAnimSite82);

CHAnimSite* HAnimSite83 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite83->setName("r_femoral_lateral_epicn_pt");
HAnimSite83->setDEF("hanim_r_femoral_lateral_epicn_pt");
HAnimSite83->setTranslation(new float[3]{-0.1421,0.4992,0.031});
HAnimSegment81->addChildren(*HAnimSite83);

CHAnimSite* HAnimSite84 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite84->setName("r_femoral_medial_epicn_pt");
HAnimSite84->setDEF("hanim_r_femoral_medial_epicn_pt");
HAnimSite84->setTranslation(new float[3]{-0.0221,0.5014,0.0289});
HAnimSegment81->addChildren(*HAnimSite84);

HAnimJoint80->addChildren(*HAnimSegment81);

CHAnimJoint* HAnimJoint85 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint85->setName("r_knee");
HAnimJoint85->setDEF("hanim_r_knee");
HAnimJoint85->setCenter(new float[3]{-0.104,0.4867,0.0308});
HAnimJoint85->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint85->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment86 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment86->setName("r_calf");
HAnimSegment86->setDEF("hanim_r_calf");
HAnimJoint85->addChildren(*HAnimSegment86);

CHAnimJoint* HAnimJoint87 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint87->setName("r_ankle");
HAnimJoint87->setDEF("hanim_r_ankle");
HAnimJoint87->setCenter(new float[3]{-0.1101,0.0656,-0.0736});
HAnimJoint87->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint87->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment88 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment88->setName("r_hindfoot");
HAnimSegment88->setDEF("hanim_r_hindfoot");
CHAnimSite* HAnimSite89 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite89->setName("r_lateral_malleolus_pt");
HAnimSite89->setDEF("hanim_r_lateral_malleolus_pt");
HAnimSite89->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
HAnimSegment88->addChildren(*HAnimSite89);

CHAnimSite* HAnimSite90 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite90->setName("r_medial_malleolus_pt");
HAnimSite90->setDEF("hanim_r_medial_malleolus_pt");
HAnimSite90->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
HAnimSegment88->addChildren(*HAnimSite90);

CHAnimSite* HAnimSite91 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite91->setName("r_sphyrion_pt");
HAnimSite91->setDEF("hanim_r_sphyrion_pt");
HAnimSite91->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
HAnimSegment88->addChildren(*HAnimSite91);

CHAnimSite* HAnimSite92 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite92->setName("r_calcaneous_post_pt");
HAnimSite92->setDEF("hanim_r_calcaneous_post_pt");
HAnimSite92->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
HAnimSegment88->addChildren(*HAnimSite92);

HAnimJoint87->addChildren(*HAnimSegment88);

CHAnimJoint* HAnimJoint93 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint93->setName("r_subtalar");
HAnimJoint93->setDEF("hanim_r_subtalar");
HAnimJoint93->setCenter(new float[3]{-0.1086,0.0001,-0.0368});
HAnimJoint93->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint93->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment94 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment94->setName("r_midproximal");
HAnimSegment94->setDEF("hanim_r_midproximal");
HAnimJoint93->addChildren(*HAnimSegment94);

CHAnimJoint* HAnimJoint95 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint95->setName("r_midtarsal");
HAnimJoint95->setDEF("hanim_r_midtarsal");
HAnimJoint95->setCenter(new float[3]{-0.1086,0.0001,0.0368});
HAnimJoint95->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint95->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment96 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment96->setName("r_middistal");
HAnimSegment96->setDEF("hanim_r_middistal");
CHAnimSite* HAnimSite97 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite97->setName("r_metatarsal_pha1_pt");
HAnimSite97->setDEF("hanim_r_metatarsal_pha1_pt");
HAnimSite97->setTranslation(new float[3]{-0.0521,0.026,0.0127});
HAnimSegment96->addChildren(*HAnimSite97);

HAnimJoint95->addChildren(*HAnimSegment96);

CHAnimJoint* HAnimJoint98 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint98->setName("r_metatarsal");
HAnimJoint98->setDEF("hanim_r_metatarsal");
HAnimJoint98->setCenter(new float[3]{-0.1086,0,0.0762});
HAnimJoint98->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint98->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment99 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment99->setName("r_forefoot");
HAnimSegment99->setDEF("hanim_r_forefoot");
CHAnimSite* HAnimSite100 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite100->setName("r_forefoot_tip");
HAnimSite100->setDEF("hanim_r_forefoot_tip");
HAnimSite100->setTranslation(new float[3]{-0.1043,0.0227,0.145});
HAnimSegment99->addChildren(*HAnimSite100);

CHAnimSite* HAnimSite101 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite101->setName("r_metatarsal_pha5_pt");
HAnimSite101->setDEF("hanim_r_metatarsal_pha5_pt");
HAnimSite101->setTranslation(new float[3]{-0.1523,0.0166,0.0895});
HAnimSegment99->addChildren(*HAnimSite101);

CHAnimSite* HAnimSite102 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite102->setName("r_digit2_pt");
HAnimSite102->setDEF("hanim_r_digit2_pt");
HAnimSite102->setTranslation(new float[3]{-0.0883,0.0134,0.1383});
HAnimSegment99->addChildren(*HAnimSite102);

HAnimJoint98->addChildren(*HAnimSegment99);

HAnimJoint95->addChildren(*HAnimJoint98);

HAnimJoint93->addChildren(*HAnimJoint95);

HAnimJoint87->addChildren(*HAnimJoint93);

HAnimJoint85->addChildren(*HAnimJoint87);

HAnimJoint80->addChildren(*HAnimJoint85);

HAnimJoint46->addChildren(*HAnimJoint80);

HAnimJoint44->addChildren(*HAnimJoint46);

CHAnimJoint* HAnimJoint103 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint103->setName("vl5");
HAnimJoint103->setDEF("hanim_vl5");
HAnimJoint103->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint103->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint103->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment104 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment104->setName("l5");
HAnimSegment104->setDEF("hanim_l5");
CHAnimSite* HAnimSite105 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite105->setName("waist_preferred_post_pt");
HAnimSite105->setDEF("hanim_waist_preferred_post_pt");
HAnimSite105->setTranslation(new float[3]{0,1.0915,-0.1091});
HAnimSegment104->addChildren(*HAnimSite105);

CHAnimSite* HAnimSite106 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite106->setName("navel_pt");
HAnimSite106->setDEF("hanim_navel_pt");
HAnimSite106->setTranslation(new float[3]{0.0069,1.0966,0.1017});
HAnimSegment104->addChildren(*HAnimSite106);

HAnimJoint103->addChildren(*HAnimSegment104);

CHAnimJoint* HAnimJoint107 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint107->setName("vl4");
HAnimJoint107->setDEF("hanim_vl4");
HAnimJoint107->setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimJoint107->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint107->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment108 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment108->setName("l4");
HAnimSegment108->setDEF("hanim_l4");
HAnimJoint107->addChildren(*HAnimSegment108);

CHAnimJoint* HAnimJoint109 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint109->setName("vl3");
HAnimJoint109->setDEF("hanim_vl3");
HAnimJoint109->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint109->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint109->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment110 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment110->setName("l3");
HAnimSegment110->setDEF("hanim_l3");
HAnimJoint109->addChildren(*HAnimSegment110);

CHAnimJoint* HAnimJoint111 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint111->setName("vl2");
HAnimJoint111->setDEF("hanim_vl2");
HAnimJoint111->setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimJoint111->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint111->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment112 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment112->setName("l2");
HAnimSegment112->setDEF("hanim_l2");
CHAnimSite* HAnimSite113 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite113->setName("r_rib10_pt");
HAnimSite113->setDEF("hanim_r_rib10_pt");
HAnimSite113->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
HAnimSegment112->addChildren(*HAnimSite113);

CHAnimSite* HAnimSite114 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite114->setName("l_rib10_pt");
HAnimSite114->setDEF("hanim_l_rib10_pt");
HAnimSite114->setTranslation(new float[3]{0.0871,1.1925,0.0992});
HAnimSegment112->addChildren(*HAnimSite114);

CHAnimSite* HAnimSite115 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite115->setName("rib10_midspine_pt");
HAnimSite115->setDEF("hanim_rib10_midspine_pt");
HAnimSite115->setTranslation(new float[3]{0.0049,1.1908,-0.1113});
HAnimSegment112->addChildren(*HAnimSite115);

HAnimJoint111->addChildren(*HAnimSegment112);

CHAnimJoint* HAnimJoint116 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint116->setName("vl1");
HAnimJoint116->setDEF("hanim_vl1");
HAnimJoint116->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint116->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint116->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment117 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment117->setName("l1");
HAnimSegment117->setDEF("hanim_l1");
HAnimJoint116->addChildren(*HAnimSegment117);

CHAnimJoint* HAnimJoint118 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint118->setName("vt12");
HAnimJoint118->setDEF("hanim_vt12");
HAnimJoint118->setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimJoint118->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint118->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment119 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment119->setName("t12");
HAnimSegment119->setDEF("hanim_t12");
HAnimJoint118->addChildren(*HAnimSegment119);

CHAnimJoint* HAnimJoint120 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint120->setName("vt11");
HAnimJoint120->setDEF("hanim_vt11");
HAnimJoint120->setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimJoint120->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint120->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment121 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment121->setName("t11");
HAnimSegment121->setDEF("hanim_t11");
HAnimJoint120->addChildren(*HAnimSegment121);

CHAnimJoint* HAnimJoint122 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint122->setName("vt10");
HAnimJoint122->setDEF("hanim_vt10");
HAnimJoint122->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint122->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint122->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment123 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment123->setName("t10");
HAnimSegment123->setDEF("hanim_t10");
CHAnimSite* HAnimSite124 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite124->setName("substernale_pt");
HAnimSite124->setDEF("hanim_substernale_pt");
HAnimSite124->setTranslation(new float[3]{0.0085,1.2995,0.1147});
HAnimSegment123->addChildren(*HAnimSite124);

HAnimJoint122->addChildren(*HAnimSegment123);

CHAnimJoint* HAnimJoint125 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint125->setName("vt9");
HAnimJoint125->setDEF("hanim_vt9");
HAnimJoint125->setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimJoint125->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint125->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment126 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment126->setName("t9");
HAnimSegment126->setDEF("hanim_t9");
CHAnimSite* HAnimSite127 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite127->setName("r_thelion_pt");
HAnimSite127->setDEF("hanim_r_thelion_pt");
HAnimSite127->setTranslation(new float[3]{-0.0736,1.3385,0.1217});
HAnimSegment126->addChildren(*HAnimSite127);

CHAnimSite* HAnimSite128 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite128->setName("l_thelion_pt");
HAnimSite128->setDEF("hanim_l_thelion_pt");
HAnimSite128->setTranslation(new float[3]{0.0918,1.3382,0.1192});
HAnimSegment126->addChildren(*HAnimSite128);

HAnimJoint125->addChildren(*HAnimSegment126);

CHAnimJoint* HAnimJoint129 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint129->setName("vt8");
HAnimJoint129->setDEF("hanim_vt8");
HAnimJoint129->setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimJoint129->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint129->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment130 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment130->setName("t8");
HAnimSegment130->setDEF("hanim_t8");
HAnimJoint129->addChildren(*HAnimSegment130);

CHAnimJoint* HAnimJoint131 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint131->setName("vt7");
HAnimJoint131->setDEF("hanim_vt7");
HAnimJoint131->setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimJoint131->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint131->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment132 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment132->setName("t7");
HAnimSegment132->setDEF("hanim_t7");
HAnimJoint131->addChildren(*HAnimSegment132);

CHAnimJoint* HAnimJoint133 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint133->setName("vt6");
HAnimJoint133->setDEF("hanim_vt6");
HAnimJoint133->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint133->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint133->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment134 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment134->setName("t6");
HAnimSegment134->setDEF("hanim_t6");
HAnimJoint133->addChildren(*HAnimSegment134);

CHAnimJoint* HAnimJoint135 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint135->setName("vt5");
HAnimJoint135->setDEF("hanim_vt5");
HAnimJoint135->setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimJoint135->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint135->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment136 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment136->setName("t5");
HAnimSegment136->setDEF("hanim_t5");
HAnimJoint135->addChildren(*HAnimSegment136);

CHAnimJoint* HAnimJoint137 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint137->setName("vt4");
HAnimJoint137->setDEF("hanim_vt4");
HAnimJoint137->setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimJoint137->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint137->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment138 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment138->setName("t4");
HAnimSegment138->setDEF("hanim_t4");
HAnimJoint137->addChildren(*HAnimSegment138);

CHAnimJoint* HAnimJoint139 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint139->setName("vt3");
HAnimJoint139->setDEF("hanim_vt3");
HAnimJoint139->setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimJoint139->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint139->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment140 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment140->setName("t3");
HAnimSegment140->setDEF("hanim_t3");
HAnimJoint139->addChildren(*HAnimSegment140);

CHAnimJoint* HAnimJoint141 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint141->setName("vt2");
HAnimJoint141->setDEF("hanim_vt2");
HAnimJoint141->setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimJoint141->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint141->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment142 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment142->setName("t2");
HAnimSegment142->setDEF("hanim_t2");
HAnimJoint141->addChildren(*HAnimSegment142);

CHAnimJoint* HAnimJoint143 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint143->setName("vt1");
HAnimJoint143->setDEF("hanim_vt1");
HAnimJoint143->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint143->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint143->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment144 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment144->setName("t1");
HAnimSegment144->setDEF("hanim_t1");
CHAnimSite* HAnimSite145 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite145->setName("suprasternale_pt");
HAnimSite145->setDEF("hanim_suprasternale_pt");
HAnimSite145->setTranslation(new float[3]{0.0084,1.4714,0.0551});
HAnimSegment144->addChildren(*HAnimSite145);

CHAnimSite* HAnimSite146 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite146->setName("cervicale_pt");
HAnimSite146->setDEF("hanim_cervicale_pt");
HAnimSite146->setTranslation(new float[3]{0.0064,1.52,-0.0815});
HAnimSegment144->addChildren(*HAnimSite146);

HAnimJoint143->addChildren(*HAnimSegment144);

CHAnimJoint* HAnimJoint147 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint147->setName("vc7");
HAnimJoint147->setDEF("hanim_vc7");
HAnimJoint147->setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimJoint147->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint147->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment148 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment148->setName("c7");
HAnimSegment148->setDEF("hanim_c7");
CHAnimSite* HAnimSite149 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite149->setName("r_neck_base_pt");
HAnimSite149->setDEF("hanim_r_neck_base_pt");
HAnimSite149->setTranslation(new float[3]{-0.0419,1.5149,-0.022});
HAnimSegment148->addChildren(*HAnimSite149);

CHAnimSite* HAnimSite150 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite150->setName("l_neck_base_pt");
HAnimSite150->setDEF("hanim_l_neck_base_pt");
HAnimSite150->setTranslation(new float[3]{0.0646,1.5141,-0.038});
HAnimSegment148->addChildren(*HAnimSite150);

HAnimJoint147->addChildren(*HAnimSegment148);

CHAnimJoint* HAnimJoint151 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint151->setName("vc6");
HAnimJoint151->setDEF("hanim_vc6");
HAnimJoint151->setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimJoint151->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint151->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment152 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment152->setName("c6");
HAnimSegment152->setDEF("hanim_c6");
HAnimJoint151->addChildren(*HAnimSegment152);

CHAnimJoint* HAnimJoint153 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint153->setName("vc5");
HAnimJoint153->setDEF("hanim_vc5");
HAnimJoint153->setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimJoint153->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint153->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment154 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment154->setName("c5");
HAnimSegment154->setDEF("hanim_c5");
HAnimJoint153->addChildren(*HAnimSegment154);

CHAnimJoint* HAnimJoint155 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint155->setName("vc4");
HAnimJoint155->setDEF("hanim_vc4");
HAnimJoint155->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint155->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint155->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment156 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment156->setName("c4");
HAnimSegment156->setDEF("hanim_c4");
HAnimJoint155->addChildren(*HAnimSegment156);

CHAnimJoint* HAnimJoint157 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint157->setName("vc3");
HAnimJoint157->setDEF("hanim_vc3");
HAnimJoint157->setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimJoint157->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint157->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment158 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment158->setName("c3");
HAnimSegment158->setDEF("hanim_c3");
HAnimJoint157->addChildren(*HAnimSegment158);

CHAnimJoint* HAnimJoint159 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint159->setName("vc2");
HAnimJoint159->setDEF("hanim_vc2");
HAnimJoint159->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint159->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint159->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment160 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment160->setName("c2");
HAnimSegment160->setDEF("hanim_c2");
HAnimJoint159->addChildren(*HAnimSegment160);

CHAnimJoint* HAnimJoint161 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint161->setName("vc1");
HAnimJoint161->setDEF("hanim_vc1");
HAnimJoint161->setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimJoint161->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint161->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment162 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment162->setName("c1");
HAnimSegment162->setDEF("hanim_c1");
HAnimJoint161->addChildren(*HAnimSegment162);

CHAnimJoint* HAnimJoint163 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint163->setName("skullbase");
HAnimJoint163->setDEF("hanim_skullbase");
HAnimJoint163->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint163->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint163->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment164 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment164->setName("skull");
HAnimSegment164->setDEF("hanim_skull");
CHAnimSite* HAnimSite165 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite165->setName("skull_tip");
HAnimSite165->setDEF("hanim_skull_tip");
HAnimSite165->setTranslation(new float[3]{0.005,1.7504,0.0055});
//TODO move skull_tip x to zero, check others for symmetry
HAnimSegment164->addChildren(*HAnimSite165);

CHAnimSite* HAnimSite166 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite166->setName("sellion_pt");
HAnimSite166->setDEF("hanim_sellion_pt");
HAnimSite166->setTranslation(new float[3]{0.0058,1.6316,0.0852});
HAnimSegment164->addChildren(*HAnimSite166);

CHAnimSite* HAnimSite167 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite167->setName("r_infraorbitale_pt");
HAnimSite167->setDEF("hanim_r_infraorbitale_pt");
HAnimSite167->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
HAnimSegment164->addChildren(*HAnimSite167);

CHAnimSite* HAnimSite168 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite168->setName("l_infraorbitale_pt");
HAnimSite168->setDEF("hanim_l_infraorbitale_pt");
HAnimSite168->setTranslation(new float[3]{0.0341,1.6171,0.0752});
HAnimSegment164->addChildren(*HAnimSite168);

CHAnimSite* HAnimSite169 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite169->setName("supramenton_pt");
HAnimSite169->setDEF("hanim_supramenton_pt");
HAnimSite169->setTranslation(new float[3]{0.0061,1.541,0.0805});
HAnimSegment164->addChildren(*HAnimSite169);

CHAnimSite* HAnimSite170 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite170->setName("r_tragion_pt");
HAnimSite170->setDEF("hanim_r_tragion_pt");
HAnimSite170->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
HAnimSegment164->addChildren(*HAnimSite170);

CHAnimSite* HAnimSite171 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite171->setName("r_gonion_pt");
HAnimSite171->setDEF("hanim_r_gonion_pt");
HAnimSite171->setTranslation(new float[3]{-0.052,1.5529,0.0347});
HAnimSegment164->addChildren(*HAnimSite171);

CHAnimSite* HAnimSite172 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite172->setName("l_tragion_pt");
HAnimSite172->setDEF("hanim_l_tragion_pt");
HAnimSite172->setTranslation(new float[3]{0.0739,1.6348,0.0282});
HAnimSegment164->addChildren(*HAnimSite172);

CHAnimSite* HAnimSite173 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite173->setName("l_gonion_pt");
HAnimSite173->setDEF("hanim_l_gonion_pt");
HAnimSite173->setTranslation(new float[3]{0.0631,1.553,0.033});
HAnimSegment164->addChildren(*HAnimSite173);

CHAnimSite* HAnimSite174 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite174->setName("nuchale_pt");
HAnimSite174->setDEF("hanim_nuchale_pt");
HAnimSite174->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
HAnimSegment164->addChildren(*HAnimSite174);

HAnimJoint163->addChildren(*HAnimSegment164);

CHAnimJoint* HAnimJoint175 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint175->setName("l_eyeball_joint");
HAnimJoint175->setDEF("hanim_l_eyeball_joint");
HAnimJoint175->setCenter(new float[3]{0.0336,1.6332,0.0502});
HAnimJoint175->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint175->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment176 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment176->setName("l_eyeball");
HAnimSegment176->setDEF("hanim_l_eyeball");
CHAnimSite* HAnimSite177 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite177->setName("l_eyeball_site_view");
HAnimSite177->setDEF("hanim_l_eyeball_site_view");
HAnimSite177->setTranslation(new float[3]{0.034,1.64,0.05});
CViewpoint* Viewpoint178 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint178->setDEF("hanim_l_eyeball_site_viewpoint");
Viewpoint178->setDescription("l_eyeball_site_viewpoint looking forward");
Viewpoint178->setOrientation(new float[4]{0,1,0,3.141593});
Viewpoint178->setPosition(new float[3]{0,0,0});
HAnimSite177->addChildren(*Viewpoint178);

HAnimSegment176->addChildren(*HAnimSite177);

HAnimJoint175->addChildren(*HAnimSegment176);

HAnimJoint163->addChildren(*HAnimJoint175);

CHAnimJoint* HAnimJoint179 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint179->setName("l_eyelid_joint");
HAnimJoint179->setDEF("hanim_l_eyelid_joint");
HAnimJoint179->setCenter(new float[3]{0.0336,1.6332,0.0502});
HAnimJoint179->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint179->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment180 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment180->setName("l_eyelid");
HAnimSegment180->setDEF("hanim_l_eyelid");
HAnimJoint179->addChildren(*HAnimSegment180);

HAnimJoint163->addChildren(*HAnimJoint179);

CHAnimJoint* HAnimJoint181 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint181->setName("l_eyebrow_joint");
HAnimJoint181->setDEF("hanim_l_eyebrow_joint");
HAnimJoint181->setCenter(new float[3]{0.0336,1.635,0.0506});
HAnimJoint181->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint181->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment182 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment182->setName("l_eyebrow");
HAnimSegment182->setDEF("hanim_l_eyebrow");
HAnimJoint181->addChildren(*HAnimSegment182);

HAnimJoint163->addChildren(*HAnimJoint181);

CHAnimJoint* HAnimJoint183 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint183->setName("r_eyeball_joint");
HAnimJoint183->setDEF("hanim_r_eyeball_joint");
HAnimJoint183->setCenter(new float[3]{-0.0336,1.6332,0.0502});
HAnimJoint183->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint183->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment184 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment184->setName("r_eyeball");
HAnimSegment184->setDEF("hanim_r_eyeball");
CHAnimSite* HAnimSite185 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite185->setName("r_eyeball_site_view");
HAnimSite185->setDEF("hanim_r_eyeball_site_view");
HAnimSite185->setTranslation(new float[3]{-0.034,1.64,0.05});
CViewpoint* Viewpoint186 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint186->setDEF("hanim_r_eyeball_site_viewpoint");
Viewpoint186->setDescription("r_eyeball_site_viewpoint looking forward");
Viewpoint186->setOrientation(new float[4]{0,1,0,3.141593});
Viewpoint186->setPosition(new float[3]{0,0,0});
HAnimSite185->addChildren(*Viewpoint186);

HAnimSegment184->addChildren(*HAnimSite185);

HAnimJoint183->addChildren(*HAnimSegment184);

HAnimJoint163->addChildren(*HAnimJoint183);

CHAnimJoint* HAnimJoint187 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint187->setName("r_eyelid_joint");
HAnimJoint187->setDEF("hanim_r_eyelid_joint");
HAnimJoint187->setCenter(new float[3]{-0.0336,1.6332,0.0502});
HAnimJoint187->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint187->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment188 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment188->setName("r_eyelid");
HAnimSegment188->setDEF("hanim_r_eyelid");
HAnimJoint187->addChildren(*HAnimSegment188);

HAnimJoint163->addChildren(*HAnimJoint187);

CHAnimJoint* HAnimJoint189 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint189->setName("r_eyebrow_joint");
HAnimJoint189->setDEF("hanim_r_eyebrow_joint");
HAnimJoint189->setCenter(new float[3]{-0.0336,1.635,0.0506});
HAnimJoint189->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint189->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment190 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment190->setName("r_eyebrow");
HAnimSegment190->setDEF("hanim_r_eyebrow");
HAnimJoint189->addChildren(*HAnimSegment190);

HAnimJoint163->addChildren(*HAnimJoint189);

CHAnimJoint* HAnimJoint191 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint191->setName("temporomandibular");
HAnimJoint191->setDEF("hanim_temporomandibular");
HAnimJoint191->setCenter(new float[3]{0,1.63,0.015});
HAnimJoint191->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint191->setLlimit(new float[3]{0,0,0}, 3);
//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
CHAnimSegment* HAnimSegment192 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment192->setName("jaw");
HAnimSegment192->setDEF("hanim_jaw");
CHAnimSite* HAnimSite193 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite193->setName("temporomandibular_l_site_pt");
HAnimSite193->setDEF("hanim_temporomandibular_l_site_pt");
HAnimSite193->setTranslation(new float[3]{0.045,1.63,0});
HAnimSegment192->addChildren(*HAnimSite193);

CHAnimSite* HAnimSite194 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite194->setName("temporomandibular_r_site_pt");
HAnimSite194->setDEF("hanim_temporomandibular_r_site_pt");
HAnimSite194->setTranslation(new float[3]{-0.045,1.63,0});
HAnimSegment192->addChildren(*HAnimSite194);

HAnimJoint191->addChildren(*HAnimSegment192);

HAnimJoint163->addChildren(*HAnimJoint191);

HAnimJoint161->addChildren(*HAnimJoint163);

HAnimJoint159->addChildren(*HAnimJoint161);

HAnimJoint157->addChildren(*HAnimJoint159);

HAnimJoint155->addChildren(*HAnimJoint157);

HAnimJoint153->addChildren(*HAnimJoint155);

HAnimJoint151->addChildren(*HAnimJoint153);

HAnimJoint147->addChildren(*HAnimJoint151);

HAnimJoint143->addChildren(*HAnimJoint147);

CHAnimJoint* HAnimJoint195 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint195->setName("l_sternoclavicular");
HAnimJoint195->setDEF("hanim_l_sternoclavicular");
HAnimJoint195->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint195->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint195->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment196 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment196->setName("l_clavicle");
HAnimSegment196->setDEF("hanim_l_clavicle");
CHAnimSite* HAnimSite197 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite197->setName("l_clavicale_pt");
HAnimSite197->setDEF("hanim_l_clavicale_pt");
HAnimSite197->setTranslation(new float[3]{0.0271,1.4943,0.0394});
HAnimSegment196->addChildren(*HAnimSite197);

CHAnimSite* HAnimSite198 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite198->setName("l_acromion_pt");
HAnimSite198->setDEF("hanim_l_acromion_pt");
HAnimSite198->setTranslation(new float[3]{0.2032,1.476,-0.049});
HAnimSegment196->addChildren(*HAnimSite198);

CHAnimSite* HAnimSite199 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite199->setName("l_axilla_ant_pt");
HAnimSite199->setDEF("hanim_l_axilla_ant_pt");
HAnimSite199->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
HAnimSegment196->addChildren(*HAnimSite199);

CHAnimSite* HAnimSite200 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite200->setName("l_axilla_post_pt");
HAnimSite200->setDEF("hanim_l_axilla_post_pt");
HAnimSite200->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
HAnimSegment196->addChildren(*HAnimSite200);

HAnimJoint195->addChildren(*HAnimSegment196);

CHAnimJoint* HAnimJoint201 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint201->setName("l_acromioclavicular");
HAnimJoint201->setDEF("hanim_l_acromioclavicular");
HAnimJoint201->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint201->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint201->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment202 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment202->setName("l_scapula");
HAnimSegment202->setDEF("hanim_l_scapula");
HAnimJoint201->addChildren(*HAnimSegment202);

CHAnimJoint* HAnimJoint203 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint203->setName("l_shoulder");
HAnimJoint203->setDEF("hanim_l_shoulder");
HAnimJoint203->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint203->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint203->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment204 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment204->setName("l_upperarm");
HAnimSegment204->setDEF("hanim_l_upperarm");
CHAnimSite* HAnimSite205 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite205->setName("l_humeral_lateral_epicn_pt");
HAnimSite205->setDEF("hanim_l_humeral_lateral_epicn_pt");
HAnimSite205->setTranslation(new float[3]{0.228,1.1482,-0.11});
HAnimSegment204->addChildren(*HAnimSite205);

HAnimJoint203->addChildren(*HAnimSegment204);

CHAnimJoint* HAnimJoint206 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint206->setName("l_elbow");
HAnimJoint206->setDEF("hanim_l_elbow");
HAnimJoint206->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint206->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint206->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment207 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment207->setName("l_forearm");
HAnimSegment207->setDEF("hanim_l_forearm");
CHAnimSite* HAnimSite208 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite208->setName("l_radial_styloid_pt");
HAnimSite208->setDEF("hanim_l_radial_styloid_pt");
HAnimSite208->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
HAnimSegment207->addChildren(*HAnimSite208);

CHAnimSite* HAnimSite209 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite209->setName("l_olecranon_pt");
HAnimSite209->setDEF("hanim_l_olecranon_pt");
HAnimSite209->setTranslation(new float[3]{0.1962,1.1375,-0.1123});
HAnimSegment207->addChildren(*HAnimSite209);

CHAnimSite* HAnimSite210 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite210->setName("l_humeral_medial_epicn_pt");
HAnimSite210->setDEF("hanim_l_humeral_medial_epicn_pt");
HAnimSite210->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
HAnimSegment207->addChildren(*HAnimSite210);

CHAnimSite* HAnimSite211 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite211->setName("l_radiale_pt");
HAnimSite211->setDEF("hanim_l_radiale_pt");
HAnimSite211->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
HAnimSegment207->addChildren(*HAnimSite211);

HAnimJoint206->addChildren(*HAnimSegment207);

CHAnimJoint* HAnimJoint212 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint212->setName("l_wrist");
HAnimJoint212->setDEF("hanim_l_wrist");
HAnimJoint212->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint212->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint212->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment213 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment213->setName("l_hand");
HAnimSegment213->setDEF("hanim_l_hand");
CHAnimSite* HAnimSite214 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite214->setName("l_metacarpal_pha2_pt");
HAnimSite214->setDEF("hanim_l_metacarpal_pha2_pt");
HAnimSite214->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
HAnimSegment213->addChildren(*HAnimSite214);

CHAnimSite* HAnimSite215 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite215->setName("l_ulnar_styloid_pt");
HAnimSite215->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite215->setTranslation(new float[3]{0.2142,0.8529,-0.0648});
HAnimSegment213->addChildren(*HAnimSite215);

CHAnimSite* HAnimSite216 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite216->setName("l_metacarpal_pha5_pt");
HAnimSite216->setDEF("hanim_l_metacarpal_pha5_pt");
HAnimSite216->setTranslation(new float[3]{0.1929,0.786,-0.1122});
HAnimSegment213->addChildren(*HAnimSite216);

CHAnimSite* HAnimSite217 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite217->setName("l_hand_front_view");
HAnimSite217->setDEF("hanim_l_hand_front_view");
HAnimSite217->setTranslation(new float[3]{0.3,0.75,0.45});
CViewpoint* Viewpoint218 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint218->setDEF("hanim_l_hand_front_viewpoint");
Viewpoint218->setCenterOfRotation(new float[3]{0,0.7,0});
Viewpoint218->setDescription("left hand front");
Viewpoint218->setPosition(new float[3]{0,0,0});
HAnimSite217->addChildren(*Viewpoint218);

HAnimSegment213->addChildren(*HAnimSite217);

HAnimJoint212->addChildren(*HAnimSegment213);

CHAnimJoint* HAnimJoint219 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint219->setName("l_thumb1");
HAnimJoint219->setDEF("hanim_l_thumb1");
HAnimJoint219->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint219->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint219->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment220 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment220->setName("l_thumb_metacarpal");
HAnimSegment220->setDEF("hanim_l_thumb_metacarpal");
HAnimJoint219->addChildren(*HAnimSegment220);

CHAnimJoint* HAnimJoint221 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint221->setName("l_thumb2");
HAnimJoint221->setDEF("hanim_l_thumb2");
HAnimJoint221->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint221->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint221->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment222 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment222->setName("l_thumb_proximal");
HAnimSegment222->setDEF("hanim_l_thumb_proximal");
HAnimJoint221->addChildren(*HAnimSegment222);

CHAnimJoint* HAnimJoint223 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint223->setName("l_thumb3");
HAnimJoint223->setDEF("hanim_l_thumb3");
HAnimJoint223->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint223->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint223->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment224 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment224->setName("l_thumb_distal");
HAnimSegment224->setDEF("hanim_l_thumb_distal");
CHAnimSite* HAnimSite225 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite225->setName("l_thumb_distal_tip");
HAnimSite225->setDEF("hanim_l_thumb_distal_tip");
HAnimSite225->setTranslation(new float[3]{0.1982,0.8061,0.0759});
HAnimSegment224->addChildren(*HAnimSite225);

HAnimJoint223->addChildren(*HAnimSegment224);

HAnimJoint221->addChildren(*HAnimJoint223);

HAnimJoint219->addChildren(*HAnimJoint221);

HAnimJoint212->addChildren(*HAnimJoint219);

CHAnimJoint* HAnimJoint226 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint226->setName("l_index0");
HAnimJoint226->setDEF("hanim_l_index0");
HAnimJoint226->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint226->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint226->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment227 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment227->setName("l_index_metacarpal");
HAnimSegment227->setDEF("hanim_l_index_metacarpal");
HAnimJoint226->addChildren(*HAnimSegment227);

CHAnimJoint* HAnimJoint228 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint228->setName("l_index1");
HAnimJoint228->setDEF("hanim_l_index1");
HAnimJoint228->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint228->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint228->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment229 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment229->setName("l_index_proximal");
HAnimSegment229->setDEF("hanim_l_index_proximal");
HAnimJoint228->addChildren(*HAnimSegment229);

CHAnimJoint* HAnimJoint230 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint230->setName("l_index2");
HAnimJoint230->setDEF("hanim_l_index2");
HAnimJoint230->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint230->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint230->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment231 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment231->setName("l_index_middle");
HAnimSegment231->setDEF("hanim_l_index_middle");
HAnimJoint230->addChildren(*HAnimSegment231);

CHAnimJoint* HAnimJoint232 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint232->setName("l_index3");
HAnimJoint232->setDEF("hanim_l_index3");
HAnimJoint232->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint232->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint232->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment233 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment233->setName("l_index_distal");
HAnimSegment233->setDEF("hanim_l_index_distal");
CHAnimSite* HAnimSite234 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite234->setName("l_index_distal_tip");
HAnimSite234->setDEF("hanim_l_index_distal_tip");
HAnimSite234->setTranslation(new float[3]{0.2089,0.6858,-0.0245});
HAnimSegment233->addChildren(*HAnimSite234);

CHAnimSite* HAnimSite235 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite235->setName("l_dactylion_pt");
HAnimSite235->setDEF("hanim_l_dactylion_pt");
HAnimSite235->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
HAnimSegment233->addChildren(*HAnimSite235);

HAnimJoint232->addChildren(*HAnimSegment233);

HAnimJoint230->addChildren(*HAnimJoint232);

HAnimJoint228->addChildren(*HAnimJoint230);

HAnimJoint226->addChildren(*HAnimJoint228);

HAnimJoint212->addChildren(*HAnimJoint226);

CHAnimJoint* HAnimJoint236 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint236->setName("l_middle0");
HAnimJoint236->setDEF("hanim_l_middle0");
HAnimJoint236->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint236->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint236->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment237 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment237->setName("l_middle_metacarpal");
HAnimSegment237->setDEF("hanim_l_middle_metacarpal");
HAnimJoint236->addChildren(*HAnimSegment237);

CHAnimJoint* HAnimJoint238 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint238->setName("l_middle1");
HAnimJoint238->setDEF("hanim_l_middle1");
HAnimJoint238->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint238->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint238->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment239 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment239->setName("l_middle_proximal");
HAnimSegment239->setDEF("hanim_l_middle_proximal");
HAnimJoint238->addChildren(*HAnimSegment239);

CHAnimJoint* HAnimJoint240 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint240->setName("l_middle2");
HAnimJoint240->setDEF("hanim_l_middle2");
HAnimJoint240->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint240->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint240->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment241 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment241->setName("l_middle_middle");
HAnimSegment241->setDEF("hanim_l_middle_middle");
HAnimJoint240->addChildren(*HAnimSegment241);

CHAnimJoint* HAnimJoint242 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint242->setName("l_middle3");
HAnimJoint242->setDEF("hanim_l_middle3");
HAnimJoint242->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint242->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint242->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment243 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment243->setName("l_middle_distal");
HAnimSegment243->setDEF("hanim_l_middle_distal");
CHAnimSite* HAnimSite244 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite244->setName("l_middle_distal_tip");
HAnimSite244->setDEF("hanim_l_middle_distal_tip");
HAnimSite244->setTranslation(new float[3]{0.208,0.6731,-0.0491});
HAnimSegment243->addChildren(*HAnimSite244);

HAnimJoint242->addChildren(*HAnimSegment243);

HAnimJoint240->addChildren(*HAnimJoint242);

HAnimJoint238->addChildren(*HAnimJoint240);

HAnimJoint236->addChildren(*HAnimJoint238);

HAnimJoint212->addChildren(*HAnimJoint236);

CHAnimJoint* HAnimJoint245 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint245->setName("l_ring0");
HAnimJoint245->setDEF("hanim_l_ring0");
HAnimJoint245->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint245->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint245->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment246 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment246->setName("l_ring_metacarpal");
HAnimSegment246->setDEF("hanim_l_ring_metacarpal");
HAnimJoint245->addChildren(*HAnimSegment246);

CHAnimJoint* HAnimJoint247 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint247->setName("l_ring1");
HAnimJoint247->setDEF("hanim_l_ring1");
HAnimJoint247->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint247->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint247->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment248 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment248->setName("l_ring_proximal");
HAnimSegment248->setDEF("hanim_l_ring_proximal");
HAnimJoint247->addChildren(*HAnimSegment248);

CHAnimJoint* HAnimJoint249 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint249->setName("l_ring2");
HAnimJoint249->setDEF("hanim_l_ring2");
HAnimJoint249->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint249->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint249->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment250 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment250->setName("l_ring_middle");
HAnimSegment250->setDEF("hanim_l_ring_middle");
HAnimJoint249->addChildren(*HAnimSegment250);

CHAnimJoint* HAnimJoint251 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint251->setName("l_ring3");
HAnimJoint251->setDEF("hanim_l_ring3");
HAnimJoint251->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint251->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint251->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment252 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment252->setName("l_ring_distal");
HAnimSegment252->setDEF("hanim_l_ring_distal");
CHAnimSite* HAnimSite253 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite253->setName("l_ring_distal_tip");
HAnimSite253->setDEF("hanim_l_ring_distal_tip");
HAnimSite253->setTranslation(new float[3]{0.2035,0.675,-0.0756});
HAnimSegment252->addChildren(*HAnimSite253);

HAnimJoint251->addChildren(*HAnimSegment252);

HAnimJoint249->addChildren(*HAnimJoint251);

HAnimJoint247->addChildren(*HAnimJoint249);

HAnimJoint245->addChildren(*HAnimJoint247);

HAnimJoint212->addChildren(*HAnimJoint245);

CHAnimJoint* HAnimJoint254 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint254->setName("l_pinky0");
HAnimJoint254->setDEF("hanim_l_pinky0");
HAnimJoint254->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint254->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint254->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment255 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment255->setName("l_pinky_metacarpal");
HAnimSegment255->setDEF("hanim_l_pinky_metacarpal");
HAnimJoint254->addChildren(*HAnimSegment255);

CHAnimJoint* HAnimJoint256 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint256->setName("l_pinky1");
HAnimJoint256->setDEF("hanim_l_pinky1");
HAnimJoint256->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint256->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint256->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment257 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment257->setName("l_pinky_proximal");
HAnimSegment257->setDEF("hanim_l_pinky_proximal");
HAnimJoint256->addChildren(*HAnimSegment257);

CHAnimJoint* HAnimJoint258 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint258->setName("l_pinky2");
HAnimJoint258->setDEF("hanim_l_pinky2");
HAnimJoint258->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint258->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint258->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment259 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment259->setName("l_pinky_middle");
HAnimSegment259->setDEF("hanim_l_pinky_middle");
HAnimJoint258->addChildren(*HAnimSegment259);

CHAnimJoint* HAnimJoint260 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint260->setName("l_pinky3");
HAnimJoint260->setDEF("hanim_l_pinky3");
HAnimJoint260->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint260->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint260->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment261 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment261->setName("l_pinky_distal");
HAnimSegment261->setDEF("hanim_l_pinky_distal");
CHAnimSite* HAnimSite262 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite262->setName("l_pinky_distal_tip");
HAnimSite262->setDEF("hanim_l_pinky_distal_tip");
HAnimSite262->setTranslation(new float[3]{0.2014,0.7009,-0.1012});
HAnimSegment261->addChildren(*HAnimSite262);

HAnimJoint260->addChildren(*HAnimSegment261);

HAnimJoint258->addChildren(*HAnimJoint260);

HAnimJoint256->addChildren(*HAnimJoint258);

HAnimJoint254->addChildren(*HAnimJoint256);

HAnimJoint212->addChildren(*HAnimJoint254);

HAnimJoint206->addChildren(*HAnimJoint212);

HAnimJoint203->addChildren(*HAnimJoint206);

HAnimJoint201->addChildren(*HAnimJoint203);

HAnimJoint195->addChildren(*HAnimJoint201);

HAnimJoint143->addChildren(*HAnimJoint195);

CHAnimJoint* HAnimJoint263 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint263->setName("r_sternoclavicular");
HAnimJoint263->setDEF("hanim_r_sternoclavicular");
HAnimJoint263->setCenter(new float[3]{-0.082,1.4488,-0.0353});
HAnimJoint263->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint263->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment264 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment264->setName("r_clavicle");
HAnimSegment264->setDEF("hanim_r_clavicle");
CHAnimSite* HAnimSite265 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite265->setName("r_clavicale_pt");
HAnimSite265->setDEF("hanim_r_clavicale_pt");
HAnimSite265->setTranslation(new float[3]{-0.0115,1.4943,0.04});
HAnimSegment264->addChildren(*HAnimSite265);

CHAnimSite* HAnimSite266 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite266->setName("r_acromion_pt");
HAnimSite266->setDEF("hanim_r_acromion_pt");
HAnimSite266->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
HAnimSegment264->addChildren(*HAnimSite266);

CHAnimSite* HAnimSite267 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite267->setName("r_axilla_ant_pt");
HAnimSite267->setDEF("hanim_r_axilla_ant_pt");
HAnimSite267->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
HAnimSegment264->addChildren(*HAnimSite267);

CHAnimSite* HAnimSite268 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite268->setName("r_axilla_post_pt");
HAnimSite268->setDEF("hanim_r_axilla_post_pt");
HAnimSite268->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
HAnimSegment264->addChildren(*HAnimSite268);

HAnimJoint263->addChildren(*HAnimSegment264);

CHAnimJoint* HAnimJoint269 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint269->setName("r_acromioclavicular");
HAnimJoint269->setDEF("hanim_r_acromioclavicular");
HAnimJoint269->setCenter(new float[3]{-0.0962,1.4269,-0.0424});
HAnimJoint269->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint269->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment270 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment270->setName("r_scapula");
HAnimSegment270->setDEF("hanim_r_scapula");
HAnimJoint269->addChildren(*HAnimSegment270);

CHAnimJoint* HAnimJoint271 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint271->setName("r_shoulder");
HAnimJoint271->setDEF("hanim_r_shoulder");
HAnimJoint271->setCenter(new float[3]{-0.2029,1.4376,-0.0387});
HAnimJoint271->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint271->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment272 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment272->setName("r_upperarm");
HAnimSegment272->setDEF("hanim_r_upperarm");
CHAnimSite* HAnimSite273 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite273->setName("r_humeral_lateral_epicn_pt");
HAnimSite273->setDEF("hanim_r_humeral_lateral_epicn_pt");
HAnimSite273->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
HAnimSegment272->addChildren(*HAnimSite273);

HAnimJoint271->addChildren(*HAnimSegment272);

CHAnimJoint* HAnimJoint274 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint274->setName("r_elbow");
HAnimJoint274->setDEF("hanim_r_elbow");
HAnimJoint274->setCenter(new float[3]{-0.2014,1.1357,-0.0682});
HAnimJoint274->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint274->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment275 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment275->setName("r_forearm");
HAnimSegment275->setDEF("hanim_r_forearm");
CHAnimSite* HAnimSite276 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite276->setName("r_radial_styloid_pt");
HAnimSite276->setDEF("hanim_r_radial_styloid_pt");
HAnimSite276->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
HAnimSegment275->addChildren(*HAnimSite276);

CHAnimSite* HAnimSite277 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite277->setName("r_olecranon_pt");
HAnimSite277->setDEF("hanim_r_olecranon_pt");
HAnimSite277->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
HAnimSegment275->addChildren(*HAnimSite277);

CHAnimSite* HAnimSite278 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite278->setName("r_humeral_medial_epicn_pt");
HAnimSite278->setDEF("hanim_r_humeral_medial_epicn_pt");
HAnimSite278->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
HAnimSegment275->addChildren(*HAnimSite278);

CHAnimSite* HAnimSite279 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite279->setName("r_radiale_pt");
HAnimSite279->setDEF("hanim_r_radiale_pt");
HAnimSite279->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
HAnimSegment275->addChildren(*HAnimSite279);

HAnimJoint274->addChildren(*HAnimSegment275);

CHAnimJoint* HAnimJoint280 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint280->setName("r_wrist");
HAnimJoint280->setDEF("hanim_r_wrist");
HAnimJoint280->setCenter(new float[3]{-0.1984,0.8663,-0.0583});
HAnimJoint280->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint280->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment281 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment281->setName("r_hand");
HAnimSegment281->setDEF("hanim_r_hand");
CHAnimSite* HAnimSite282 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite282->setName("r_metacarpal_pha2_pt");
HAnimSite282->setDEF("hanim_r_metacarpal_pha2_pt");
HAnimSite282->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
HAnimSegment281->addChildren(*HAnimSite282);

CHAnimSite* HAnimSite283 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite283->setName("r_ulnar_styloid_pt");
HAnimSite283->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite283->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
HAnimSegment281->addChildren(*HAnimSite283);

CHAnimSite* HAnimSite284 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite284->setName("r_metacarpal_pha5_pt");
HAnimSite284->setDEF("hanim_r_metacarpal_pha5_pt");
HAnimSite284->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
HAnimSegment281->addChildren(*HAnimSite284);

CHAnimSite* HAnimSite285 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite285->setName("r_hand_front_view");
HAnimSite285->setDEF("hanim_r_hand_front_view");
HAnimSite285->setTranslation(new float[3]{-0.3,0.75,0.45});
CViewpoint* Viewpoint286 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint286->setDEF("hanim_r_hand_front_viewpoint");
Viewpoint286->setCenterOfRotation(new float[3]{0,0.7,0});
Viewpoint286->setDescription("right hand front");
Viewpoint286->setPosition(new float[3]{0,0,0});
HAnimSite285->addChildren(*Viewpoint286);

HAnimSegment281->addChildren(*HAnimSite285);

HAnimJoint280->addChildren(*HAnimSegment281);

CHAnimJoint* HAnimJoint287 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint287->setName("r_thumb1");
HAnimJoint287->setDEF("hanim_r_thumb1");
HAnimJoint287->setCenter(new float[3]{-0.1924,0.8472,-0.0534});
HAnimJoint287->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint287->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment288 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment288->setName("r_thumb_metacarpal");
HAnimSegment288->setDEF("hanim_r_thumb_metacarpal");
HAnimJoint287->addChildren(*HAnimSegment288);

CHAnimJoint* HAnimJoint289 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint289->setName("r_thumb2");
HAnimJoint289->setDEF("hanim_r_thumb2");
HAnimJoint289->setCenter(new float[3]{-0.1951,0.8226,0.0246});
HAnimJoint289->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint289->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment290 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment290->setName("r_thumb_proximal");
HAnimSegment290->setDEF("hanim_r_thumb_proximal");
HAnimJoint289->addChildren(*HAnimSegment290);

CHAnimJoint* HAnimJoint291 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint291->setName("r_thumb3");
HAnimJoint291->setDEF("hanim_r_thumb3");
HAnimJoint291->setCenter(new float[3]{-0.1955,0.8159,0.0464});
HAnimJoint291->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint291->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment292 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment292->setName("r_thumb_distal");
HAnimSegment292->setDEF("hanim_r_thumb_distal");
CHAnimSite* HAnimSite293 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite293->setName("r_thumb_distal_tip");
HAnimSite293->setDEF("hanim_r_thumb_distal_tip");
HAnimSite293->setTranslation(new float[3]{-0.1869,0.809,0.082});
HAnimSegment292->addChildren(*HAnimSite293);

HAnimJoint291->addChildren(*HAnimSegment292);

HAnimJoint289->addChildren(*HAnimJoint291);

HAnimJoint287->addChildren(*HAnimJoint289);

HAnimJoint280->addChildren(*HAnimJoint287);

CHAnimJoint* HAnimJoint294 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint294->setName("r_index0");
HAnimJoint294->setDEF("hanim_r_index0");
HAnimJoint294->setCenter(new float[3]{-0.1983,0.8024,-0.028});
HAnimJoint294->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint294->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment295 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment295->setName("r_index_metacarpal");
HAnimSegment295->setDEF("hanim_r_index_metacarpal");
HAnimJoint294->addChildren(*HAnimSegment295);

CHAnimJoint* HAnimJoint296 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint296->setName("r_index1");
HAnimJoint296->setDEF("hanim_r_index1");
HAnimJoint296->setCenter(new float[3]{-0.1983,0.7815,-0.028});
HAnimJoint296->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint296->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment297 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment297->setName("r_index_proximal");
HAnimSegment297->setDEF("hanim_r_index_proximal");
HAnimJoint296->addChildren(*HAnimSegment297);

CHAnimJoint* HAnimJoint298 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint298->setName("r_index2");
HAnimJoint298->setDEF("hanim_r_index2");
HAnimJoint298->setCenter(new float[3]{-0.2017,0.7363,-0.0248});
HAnimJoint298->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint298->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment299 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment299->setName("r_index_middle");
HAnimSegment299->setDEF("hanim_r_index_middle");
HAnimJoint298->addChildren(*HAnimSegment299);

CHAnimJoint* HAnimJoint300 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint300->setName("r_index3");
HAnimJoint300->setDEF("hanim_r_index3");
HAnimJoint300->setCenter(new float[3]{-0.2028,0.7139,-0.0236});
HAnimJoint300->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint300->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment301 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment301->setName("r_index_distal");
HAnimSegment301->setDEF("hanim_r_index_distal");
CHAnimSite* HAnimSite302 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite302->setName("r_index_distal_tip");
HAnimSite302->setDEF("hanim_r_index_distal_tip");
HAnimSite302->setTranslation(new float[3]{-0.198,0.6883,-0.018});
HAnimSegment301->addChildren(*HAnimSite302);

CHAnimSite* HAnimSite303 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite303->setName("r_dactylion_pt");
HAnimSite303->setDEF("hanim_r_dactylion_pt");
HAnimSite303->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
HAnimSegment301->addChildren(*HAnimSite303);

HAnimJoint300->addChildren(*HAnimSegment301);

HAnimJoint298->addChildren(*HAnimJoint300);

HAnimJoint296->addChildren(*HAnimJoint298);

HAnimJoint294->addChildren(*HAnimJoint296);

HAnimJoint280->addChildren(*HAnimJoint294);

CHAnimJoint* HAnimJoint304 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint304->setName("r_middle0");
HAnimJoint304->setDEF("hanim_r_middle0");
HAnimJoint304->setCenter(new float[3]{-0.1987,0.8029,-0.053});
HAnimJoint304->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint304->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment305 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment305->setName("r_middle_metacarpal");
HAnimSegment305->setDEF("hanim_r_middle_metacarpal");
HAnimJoint304->addChildren(*HAnimSegment305);

CHAnimJoint* HAnimJoint306 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint306->setName("r_middle1");
HAnimJoint306->setDEF("hanim_r_middle1");
HAnimJoint306->setCenter(new float[3]{-0.1987,0.7818,-0.053});
HAnimJoint306->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint306->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment307 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment307->setName("r_middle_proximal");
HAnimSegment307->setDEF("hanim_r_middle_proximal");
HAnimJoint306->addChildren(*HAnimSegment307);

CHAnimJoint* HAnimJoint308 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint308->setName("r_middle2");
HAnimJoint308->setDEF("hanim_r_middle2");
HAnimJoint308->setCenter(new float[3]{-0.2013,0.7273,-0.0503});
HAnimJoint308->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint308->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment309 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment309->setName("r_middle_middle");
HAnimSegment309->setDEF("hanim_r_middle_middle");
HAnimJoint308->addChildren(*HAnimSegment309);

CHAnimJoint* HAnimJoint310 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint310->setName("r_middle3");
HAnimJoint310->setDEF("hanim_r_middle3");
HAnimJoint310->setCenter(new float[3]{-0.2026,0.7011,-0.0494});
HAnimJoint310->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint310->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment311 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment311->setName("r_middle_distal");
HAnimSegment311->setDEF("hanim_r_middle_distal");
CHAnimSite* HAnimSite312 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite312->setName("r_middle_distal_tip");
HAnimSite312->setDEF("hanim_r_middle_distal_tip");
HAnimSite312->setTranslation(new float[3]{-0.1969,0.6758,-0.0427});
HAnimSegment311->addChildren(*HAnimSite312);

HAnimJoint310->addChildren(*HAnimSegment311);

HAnimJoint308->addChildren(*HAnimJoint310);

HAnimJoint306->addChildren(*HAnimJoint308);

HAnimJoint304->addChildren(*HAnimJoint306);

HAnimJoint280->addChildren(*HAnimJoint304);

CHAnimJoint* HAnimJoint313 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint313->setName("r_ring0");
HAnimJoint313->setDEF("hanim_r_ring0");
HAnimJoint313->setCenter(new float[3]{-0.1956,0.8019,-0.0794});
HAnimJoint313->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint313->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment314 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment314->setName("r_ring_metacarpal");
HAnimSegment314->setDEF("hanim_r_ring_metacarpal");
HAnimJoint313->addChildren(*HAnimSegment314);

CHAnimJoint* HAnimJoint315 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint315->setName("r_ring1");
HAnimJoint315->setDEF("hanim_r_ring1");
HAnimJoint315->setCenter(new float[3]{-0.1956,0.7815,-0.0794});
HAnimJoint315->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint315->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment316 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment316->setName("r_ring_proximal");
HAnimSegment316->setDEF("hanim_r_ring_proximal");
HAnimJoint315->addChildren(*HAnimSegment316);

CHAnimJoint* HAnimJoint317 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint317->setName("r_ring2");
HAnimJoint317->setDEF("hanim_r_ring2");
HAnimJoint317->setCenter(new float[3]{-0.1973,0.7287,-0.0777});
HAnimJoint317->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint317->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment318 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment318->setName("r_ring_middle");
HAnimSegment318->setDEF("hanim_r_ring_middle");
HAnimJoint317->addChildren(*HAnimSegment318);

CHAnimJoint* HAnimJoint319 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint319->setName("r_ring3");
HAnimJoint319->setDEF("hanim_r_ring3");
HAnimJoint319->setCenter(new float[3]{-0.1983,0.7045,-0.0767});
HAnimJoint319->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint319->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment320 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment320->setName("r_ring_distal");
HAnimSegment320->setDEF("hanim_r_ring_distal");
CHAnimSite* HAnimSite321 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite321->setName("r_ring_distal_tip");
HAnimSite321->setDEF("hanim_r_ring_distal_tip");
HAnimSite321->setTranslation(new float[3]{-0.1934,0.6778,-0.0693});
HAnimSegment320->addChildren(*HAnimSite321);

HAnimJoint319->addChildren(*HAnimSegment320);

HAnimJoint317->addChildren(*HAnimJoint319);

HAnimJoint315->addChildren(*HAnimJoint317);

HAnimJoint313->addChildren(*HAnimJoint315);

HAnimJoint280->addChildren(*HAnimJoint313);

CHAnimJoint* HAnimJoint322 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint322->setName("r_pinky0");
HAnimJoint322->setDEF("hanim_r_pinky0");
HAnimJoint322->setCenter(new float[3]{-0.1925,0.8066,-0.1036});
HAnimJoint322->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint322->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment323 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment323->setName("r_pinky_metacarpal");
HAnimSegment323->setDEF("hanim_r_pinky_metacarpal");
HAnimJoint322->addChildren(*HAnimSegment323);

CHAnimJoint* HAnimJoint324 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint324->setName("r_pinky1");
HAnimJoint324->setDEF("hanim_r_pinky1");
HAnimJoint324->setCenter(new float[3]{-0.1925,0.7866,-0.1036});
HAnimJoint324->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint324->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment325 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment325->setName("r_pinky_proximal");
HAnimSegment325->setDEF("hanim_r_pinky_proximal");
HAnimJoint324->addChildren(*HAnimSegment325);

CHAnimJoint* HAnimJoint326 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint326->setName("r_pinky2");
HAnimJoint326->setDEF("hanim_r_pinky2");
HAnimJoint326->setCenter(new float[3]{-0.1938,0.7452,-0.1024});
HAnimJoint326->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint326->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment327 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment327->setName("r_pinky_middle");
HAnimSegment327->setDEF("hanim_r_pinky_middle");
HAnimJoint326->addChildren(*HAnimSegment327);

CHAnimJoint* HAnimJoint328 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint328->setName("r_pinky3");
HAnimJoint328->setDEF("hanim_r_pinky3");
HAnimJoint328->setCenter(new float[3]{-0.1948,0.7277,-0.1017});
HAnimJoint328->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint328->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment329 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment329->setName("r_pinky_distal");
HAnimSegment329->setDEF("hanim_r_pinky_distal");
CHAnimSite* HAnimSite330 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite330->setName("r_pinky_distal_tip");
HAnimSite330->setDEF("hanim_r_pinky_distal_tip");
HAnimSite330->setTranslation(new float[3]{-0.1938,0.7035,-0.0949});
HAnimSegment329->addChildren(*HAnimSite330);

HAnimJoint328->addChildren(*HAnimSegment329);

HAnimJoint326->addChildren(*HAnimJoint328);

HAnimJoint324->addChildren(*HAnimJoint326);

HAnimJoint322->addChildren(*HAnimJoint324);

HAnimJoint280->addChildren(*HAnimJoint322);

HAnimJoint274->addChildren(*HAnimJoint280);

HAnimJoint271->addChildren(*HAnimJoint274);

HAnimJoint269->addChildren(*HAnimJoint271);

HAnimJoint263->addChildren(*HAnimJoint269);

HAnimJoint143->addChildren(*HAnimJoint263);

HAnimJoint141->addChildren(*HAnimJoint143);

HAnimJoint139->addChildren(*HAnimJoint141);

HAnimJoint137->addChildren(*HAnimJoint139);

HAnimJoint135->addChildren(*HAnimJoint137);

HAnimJoint133->addChildren(*HAnimJoint135);

HAnimJoint131->addChildren(*HAnimJoint133);

HAnimJoint129->addChildren(*HAnimJoint131);

HAnimJoint125->addChildren(*HAnimJoint129);

HAnimJoint122->addChildren(*HAnimJoint125);

HAnimJoint120->addChildren(*HAnimJoint122);

HAnimJoint118->addChildren(*HAnimJoint120);

HAnimJoint116->addChildren(*HAnimJoint118);

HAnimJoint111->addChildren(*HAnimJoint116);

HAnimJoint109->addChildren(*HAnimJoint111);

HAnimJoint107->addChildren(*HAnimJoint109);

HAnimJoint103->addChildren(*HAnimJoint107);

HAnimJoint44->addChildren(*HAnimJoint103);

HAnimHumanoid43->setSkeleton(*HAnimJoint44);

CHAnimSite* HAnimSite331 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite331->setName("l_inclined_view");
HAnimSite331->setDEF("hanim_l_inclined_view");
HAnimSite331->setRotation(new float[4]{-0.113,0.993,0.0347,0.671});
HAnimSite331->setTranslation(new float[3]{1.62,1.05,2.06});
CViewpoint* Viewpoint332 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint332->setDEF("hanim_l_inclined_viewpoint");
Viewpoint332->setDescription("left inclined");
Viewpoint332->setPosition(new float[3]{0,0,0});
HAnimSite331->addChildren(*Viewpoint332);

HAnimHumanoid43->addViewpoints(*HAnimSite331);

CHAnimSite* HAnimSite333 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite333->setName("r_inclined_view");
HAnimSite333->setDEF("hanim_r_inclined_view");
HAnimSite333->setRotation(new float[4]{-0.113,-0.993,0.0347,0.671});
HAnimSite333->setTranslation(new float[3]{-1.62,1.05,2.06});
CViewpoint* Viewpoint334 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint334->setDEF("hanim_r_inclined_viewpoint");
Viewpoint334->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint334->setDescription("right inclined");
Viewpoint334->setPosition(new float[3]{0,0,0});
HAnimSite333->addChildren(*Viewpoint334);

HAnimHumanoid43->addViewpoints(*HAnimSite333);

CHAnimSite* HAnimSite335 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite335->setName("front_view");
HAnimSite335->setDEF("hanim_front_view");
HAnimSite335->setTranslation(new float[3]{0,0.85,2.58});
CViewpoint* Viewpoint336 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint336->setDEF("hanim_front_viewpoint");
Viewpoint336->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint336->setDescription("front");
Viewpoint336->setPosition(new float[3]{0,0,0});
HAnimSite335->addChildren(*Viewpoint336);

HAnimHumanoid43->addViewpoints(*HAnimSite335);

CHAnimSite* HAnimSite337 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite337->setName("back_view");
HAnimSite337->setDEF("hanim_back_view");
HAnimSite337->setRotation(new float[4]{0,1,0,3.14});
HAnimSite337->setTranslation(new float[3]{0,0.85,-2.58});
CViewpoint* Viewpoint338 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint338->setDEF("hanim_back_viewpoint");
Viewpoint338->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint338->setDescription("back");
Viewpoint338->setPosition(new float[3]{0,0,0});
HAnimSite337->addChildren(*Viewpoint338);

HAnimHumanoid43->addViewpoints(*HAnimSite337);

CHAnimSite* HAnimSite339 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite339->setName("l_side_view");
HAnimSite339->setDEF("hanim_l_side_view");
HAnimSite339->setRotation(new float[4]{0,1,0,1.5708});
HAnimSite339->setTranslation(new float[3]{2.6,0.854,0});
CViewpoint* Viewpoint340 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint340->setDEF("hanim_l_side_viewpoint");
Viewpoint340->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint340->setDescription("left side");
Viewpoint340->setPosition(new float[3]{0,0,0});
HAnimSite339->addChildren(*Viewpoint340);

HAnimHumanoid43->addViewpoints(*HAnimSite339);

CHAnimSite* HAnimSite341 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite341->setName("Top_view");
HAnimSite341->setDEF("hanim_Top_view");
HAnimSite341->setRotation(new float[4]{1,0,0,-1.57});
HAnimSite341->setTranslation(new float[3]{0,3.5,0});
CViewpoint* Viewpoint342 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint342->setDEF("hanim_Top_viewpoint");
Viewpoint342->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint342->setDescription("Top");
Viewpoint342->setPosition(new float[3]{0,0,0});
HAnimSite341->addChildren(*Viewpoint342);

HAnimHumanoid43->addViewpoints(*HAnimSite341);

CHAnimSite* HAnimSite343 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite343->setName("front_close_view");
HAnimSite343->setDEF("hanim_front_close_view");
HAnimSite343->setTranslation(new float[3]{0,0.854,1.575});
CViewpoint* Viewpoint344 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint344->setDEF("hanim_front_close_viewpoint");
Viewpoint344->setCenterOfRotation(new float[3]{0,0,1.575});
Viewpoint344->setDescription("front close");
Viewpoint344->setPosition(new float[3]{0,0,0});
HAnimSite343->addChildren(*Viewpoint344);

HAnimHumanoid43->addViewpoints(*HAnimSite343);

CHAnimSite* HAnimSite345 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite345->setName("side_close_view");
HAnimSite345->setDEF("hanim_side_close_view");
HAnimSite345->setRotation(new float[4]{0,1,0,1.5708});
HAnimSite345->setTranslation(new float[3]{1.56,0.854,0});
CViewpoint* Viewpoint346 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint346->setDEF("hanim_side_close_viewpoint");
Viewpoint346->setCenterOfRotation(new float[3]{1.6,0,0});
Viewpoint346->setDescription("side close");
Viewpoint346->setPosition(new float[3]{0,0,0});
HAnimSite345->addChildren(*Viewpoint346);

HAnimHumanoid43->addViewpoints(*HAnimSite345);

CHAnimSite* HAnimSite347 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite347->setName("head_front_close_view");
HAnimSite347->setDEF("hanim_head_front_close_view");
HAnimSite347->setTranslation(new float[3]{0,1.5,1});
CViewpoint* Viewpoint348 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint348->setDEF("hanim_head_front_close_viewpoint");
Viewpoint348->setCenterOfRotation(new float[3]{0,0,1});
Viewpoint348->setDescription("head front close");
Viewpoint348->setPosition(new float[3]{0,0,0});
HAnimSite347->addChildren(*Viewpoint348);

HAnimHumanoid43->addViewpoints(*HAnimSite347);

CHAnimSite* HAnimSite349 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite349->setName("chest_front_close_view");
HAnimSite349->setDEF("hanim_chest_front_close_view");
HAnimSite349->setTranslation(new float[3]{0,1.2,1});
CViewpoint* Viewpoint350 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint350->setDEF("hanim_chest_front_close_viewpoint");
Viewpoint350->setCenterOfRotation(new float[3]{0,0,1});
Viewpoint350->setDescription("chest front close");
Viewpoint350->setPosition(new float[3]{0,0,0});
HAnimSite349->addChildren(*Viewpoint350);

HAnimHumanoid43->addViewpoints(*HAnimSite349);

CHAnimSite* HAnimSite351 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite351->setName("pelvis_front_close_view");
HAnimSite351->setDEF("hanim_pelvis_front_close_view");
HAnimSite351->setTranslation(new float[3]{0,0.8,1});
CViewpoint* Viewpoint352 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint352->setDEF("hanim_pelvis_front_close_viewpoint");
Viewpoint352->setCenterOfRotation(new float[3]{0,0,1});
Viewpoint352->setDescription("pelvis front close");
Viewpoint352->setPosition(new float[3]{0,0,0});
HAnimSite351->addChildren(*Viewpoint352);

HAnimHumanoid43->addViewpoints(*HAnimSite351);

CHAnimSite* HAnimSite353 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite353->setName("knees_front_close_view");
HAnimSite353->setDEF("hanim_knees_front_close_view");
HAnimSite353->setTranslation(new float[3]{0,0.4,1});
CViewpoint* Viewpoint354 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint354->setDEF("hanim_knees_front_close_viewpoint");
Viewpoint354->setCenterOfRotation(new float[3]{0,0.4,0});
Viewpoint354->setDescription("knees front close");
Viewpoint354->setPosition(new float[3]{0,0,0});
HAnimSite353->addChildren(*Viewpoint354);

HAnimHumanoid43->addViewpoints(*HAnimSite353);

CHAnimSite* HAnimSite355 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite355->setName("feet_front_close_view");
HAnimSite355->setDEF("hanim_feet_front_close_view");
HAnimSite355->setTranslation(new float[3]{0,0,1});
CViewpoint* Viewpoint356 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint356->setDEF("hanim_feet_front_close_viewpoint");
Viewpoint356->setDescription("feet front close");
Viewpoint356->setPosition(new float[3]{0,0,0});
HAnimSite355->addChildren(*Viewpoint356);

HAnimHumanoid43->addViewpoints(*HAnimSite355);

CHAnimSite* HAnimSite357 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite357->setName("eye_level_view");
HAnimSite357->setDEF("hanim_eye_level_view");
HAnimSite357->setTranslation(new float[3]{0,1.6332,0.0502});
CViewpoint* Viewpoint358 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint358->setDEF("hanim_eye_level_viewpoint");
Viewpoint358->setDescription("eye level looking forward");
Viewpoint358->setOrientation(new float[4]{0,1,0,3.141593});
Viewpoint358->setPosition(new float[3]{0,0,0});
HAnimSite357->addChildren(*Viewpoint358);

HAnimHumanoid43->addViewpoints(*HAnimSite357);

CHAnimSite* HAnimSite359 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite359->setUSE("hanim_l_eyeball_site_view");
HAnimHumanoid43->setSites(*HAnimSite359);

CHAnimSite* HAnimSite360 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite360->setUSE("hanim_r_eyeball_site_view");
HAnimHumanoid43->setSites(*HAnimSite360);

CHAnimSite* HAnimSite361 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite361->setUSE("hanim_l_hand_front_view");
HAnimHumanoid43->setSites(*HAnimSite361);

CHAnimSite* HAnimSite362 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite362->setUSE("hanim_r_hand_front_view");
HAnimHumanoid43->setSites(*HAnimSite362);

CHAnimJoint* HAnimJoint363 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint363->setUSE("hanim_humanoid_root");
HAnimHumanoid43->addJoints(*HAnimJoint363);

CHAnimJoint* HAnimJoint364 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint364->setUSE("hanim_sacroiliac");
HAnimHumanoid43->addJoints(*HAnimJoint364);

CHAnimJoint* HAnimJoint365 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint365->setUSE("hanim_vl5");
HAnimHumanoid43->addJoints(*HAnimJoint365);

CHAnimJoint* HAnimJoint366 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint366->setUSE("hanim_vl4");
HAnimHumanoid43->addJoints(*HAnimJoint366);

CHAnimJoint* HAnimJoint367 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint367->setUSE("hanim_vl3");
HAnimHumanoid43->addJoints(*HAnimJoint367);

CHAnimJoint* HAnimJoint368 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint368->setUSE("hanim_vl2");
HAnimHumanoid43->addJoints(*HAnimJoint368);

CHAnimJoint* HAnimJoint369 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint369->setUSE("hanim_vl1");
HAnimHumanoid43->addJoints(*HAnimJoint369);

CHAnimJoint* HAnimJoint370 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint370->setUSE("hanim_vt12");
HAnimHumanoid43->addJoints(*HAnimJoint370);

CHAnimJoint* HAnimJoint371 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint371->setUSE("hanim_vt11");
HAnimHumanoid43->addJoints(*HAnimJoint371);

CHAnimJoint* HAnimJoint372 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint372->setUSE("hanim_vt10");
HAnimHumanoid43->addJoints(*HAnimJoint372);

CHAnimJoint* HAnimJoint373 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint373->setUSE("hanim_vt9");
HAnimHumanoid43->addJoints(*HAnimJoint373);

CHAnimJoint* HAnimJoint374 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint374->setUSE("hanim_vt8");
HAnimHumanoid43->addJoints(*HAnimJoint374);

CHAnimJoint* HAnimJoint375 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint375->setUSE("hanim_vt7");
HAnimHumanoid43->addJoints(*HAnimJoint375);

CHAnimJoint* HAnimJoint376 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint376->setUSE("hanim_vt6");
HAnimHumanoid43->addJoints(*HAnimJoint376);

CHAnimJoint* HAnimJoint377 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint377->setUSE("hanim_vt5");
HAnimHumanoid43->addJoints(*HAnimJoint377);

CHAnimJoint* HAnimJoint378 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint378->setUSE("hanim_vt4");
HAnimHumanoid43->addJoints(*HAnimJoint378);

CHAnimJoint* HAnimJoint379 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint379->setUSE("hanim_vt3");
HAnimHumanoid43->addJoints(*HAnimJoint379);

CHAnimJoint* HAnimJoint380 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint380->setUSE("hanim_vt2");
HAnimHumanoid43->addJoints(*HAnimJoint380);

CHAnimJoint* HAnimJoint381 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint381->setUSE("hanim_vt1");
HAnimHumanoid43->addJoints(*HAnimJoint381);

CHAnimJoint* HAnimJoint382 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint382->setUSE("hanim_vc7");
HAnimHumanoid43->addJoints(*HAnimJoint382);

CHAnimJoint* HAnimJoint383 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint383->setUSE("hanim_vc6");
HAnimHumanoid43->addJoints(*HAnimJoint383);

CHAnimJoint* HAnimJoint384 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint384->setUSE("hanim_vc5");
HAnimHumanoid43->addJoints(*HAnimJoint384);

CHAnimJoint* HAnimJoint385 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint385->setUSE("hanim_vc4");
HAnimHumanoid43->addJoints(*HAnimJoint385);

CHAnimJoint* HAnimJoint386 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint386->setUSE("hanim_vc3");
HAnimHumanoid43->addJoints(*HAnimJoint386);

CHAnimJoint* HAnimJoint387 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint387->setUSE("hanim_vc2");
HAnimHumanoid43->addJoints(*HAnimJoint387);

CHAnimJoint* HAnimJoint388 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint388->setUSE("hanim_vc1");
HAnimHumanoid43->addJoints(*HAnimJoint388);

CHAnimJoint* HAnimJoint389 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint389->setUSE("hanim_skullbase");
HAnimHumanoid43->addJoints(*HAnimJoint389);

CHAnimJoint* HAnimJoint390 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint390->setUSE("hanim_temporomandibular");
HAnimHumanoid43->addJoints(*HAnimJoint390);

CHAnimJoint* HAnimJoint391 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint391->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint391);

CHAnimJoint* HAnimJoint392 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint392->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint392);

CHAnimJoint* HAnimJoint393 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint393->setUSE("hanim_l_ankle");
HAnimHumanoid43->addJoints(*HAnimJoint393);

CHAnimJoint* HAnimJoint394 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint394->setUSE("hanim_r_ankle");
HAnimHumanoid43->addJoints(*HAnimJoint394);

CHAnimJoint* HAnimJoint395 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint395->setUSE("hanim_l_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint395);

CHAnimJoint* HAnimJoint396 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint396->setUSE("hanim_r_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint396);

CHAnimJoint* HAnimJoint397 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint397->setUSE("hanim_l_eyeball_joint");
HAnimHumanoid43->addJoints(*HAnimJoint397);

CHAnimJoint* HAnimJoint398 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint398->setUSE("hanim_r_eyeball_joint");
HAnimHumanoid43->addJoints(*HAnimJoint398);

CHAnimJoint* HAnimJoint399 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint399->setUSE("hanim_l_eyebrow_joint");
HAnimHumanoid43->addJoints(*HAnimJoint399);

CHAnimJoint* HAnimJoint400 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint400->setUSE("hanim_r_eyebrow_joint");
HAnimHumanoid43->addJoints(*HAnimJoint400);

CHAnimJoint* HAnimJoint401 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint401->setUSE("hanim_l_eyelid_joint");
HAnimHumanoid43->addJoints(*HAnimJoint401);

CHAnimJoint* HAnimJoint402 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint402->setUSE("hanim_r_eyelid_joint");
HAnimHumanoid43->addJoints(*HAnimJoint402);

CHAnimJoint* HAnimJoint403 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint403->setUSE("hanim_l_hip");
HAnimHumanoid43->addJoints(*HAnimJoint403);

CHAnimJoint* HAnimJoint404 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint404->setUSE("hanim_r_hip");
HAnimHumanoid43->addJoints(*HAnimJoint404);

CHAnimJoint* HAnimJoint405 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint405->setUSE("hanim_l_index0");
HAnimHumanoid43->addJoints(*HAnimJoint405);

CHAnimJoint* HAnimJoint406 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint406->setUSE("hanim_r_index0");
HAnimHumanoid43->addJoints(*HAnimJoint406);

CHAnimJoint* HAnimJoint407 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint407->setUSE("hanim_l_index1");
HAnimHumanoid43->addJoints(*HAnimJoint407);

CHAnimJoint* HAnimJoint408 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint408->setUSE("hanim_r_index1");
HAnimHumanoid43->addJoints(*HAnimJoint408);

CHAnimJoint* HAnimJoint409 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint409->setUSE("hanim_l_index2");
HAnimHumanoid43->addJoints(*HAnimJoint409);

CHAnimJoint* HAnimJoint410 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint410->setUSE("hanim_r_index2");
HAnimHumanoid43->addJoints(*HAnimJoint410);

CHAnimJoint* HAnimJoint411 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint411->setUSE("hanim_l_index3");
HAnimHumanoid43->addJoints(*HAnimJoint411);

CHAnimJoint* HAnimJoint412 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint412->setUSE("hanim_r_index3");
HAnimHumanoid43->addJoints(*HAnimJoint412);

CHAnimJoint* HAnimJoint413 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint413->setUSE("hanim_l_knee");
HAnimHumanoid43->addJoints(*HAnimJoint413);

CHAnimJoint* HAnimJoint414 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint414->setUSE("hanim_r_knee");
HAnimHumanoid43->addJoints(*HAnimJoint414);

CHAnimJoint* HAnimJoint415 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint415->setUSE("hanim_l_metatarsal");
HAnimHumanoid43->addJoints(*HAnimJoint415);

CHAnimJoint* HAnimJoint416 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint416->setUSE("hanim_r_metatarsal");
HAnimHumanoid43->addJoints(*HAnimJoint416);

CHAnimJoint* HAnimJoint417 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint417->setUSE("hanim_l_middle0");
HAnimHumanoid43->addJoints(*HAnimJoint417);

CHAnimJoint* HAnimJoint418 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint418->setUSE("hanim_r_middle0");
HAnimHumanoid43->addJoints(*HAnimJoint418);

CHAnimJoint* HAnimJoint419 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint419->setUSE("hanim_l_middle1");
HAnimHumanoid43->addJoints(*HAnimJoint419);

CHAnimJoint* HAnimJoint420 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint420->setUSE("hanim_r_middle1");
HAnimHumanoid43->addJoints(*HAnimJoint420);

CHAnimJoint* HAnimJoint421 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint421->setUSE("hanim_l_middle2");
HAnimHumanoid43->addJoints(*HAnimJoint421);

CHAnimJoint* HAnimJoint422 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint422->setUSE("hanim_r_middle2");
HAnimHumanoid43->addJoints(*HAnimJoint422);

CHAnimJoint* HAnimJoint423 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint423->setUSE("hanim_l_middle3");
HAnimHumanoid43->addJoints(*HAnimJoint423);

CHAnimJoint* HAnimJoint424 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint424->setUSE("hanim_r_middle3");
HAnimHumanoid43->addJoints(*HAnimJoint424);

CHAnimJoint* HAnimJoint425 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint425->setUSE("hanim_l_midtarsal");
HAnimHumanoid43->addJoints(*HAnimJoint425);

CHAnimJoint* HAnimJoint426 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint426->setUSE("hanim_r_midtarsal");
HAnimHumanoid43->addJoints(*HAnimJoint426);

CHAnimJoint* HAnimJoint427 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint427->setUSE("hanim_l_pinky0");
HAnimHumanoid43->addJoints(*HAnimJoint427);

CHAnimJoint* HAnimJoint428 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint428->setUSE("hanim_r_pinky0");
HAnimHumanoid43->addJoints(*HAnimJoint428);

CHAnimJoint* HAnimJoint429 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint429->setUSE("hanim_l_pinky1");
HAnimHumanoid43->addJoints(*HAnimJoint429);

CHAnimJoint* HAnimJoint430 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint430->setUSE("hanim_r_pinky1");
HAnimHumanoid43->addJoints(*HAnimJoint430);

CHAnimJoint* HAnimJoint431 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint431->setUSE("hanim_l_pinky2");
HAnimHumanoid43->addJoints(*HAnimJoint431);

CHAnimJoint* HAnimJoint432 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint432->setUSE("hanim_r_pinky2");
HAnimHumanoid43->addJoints(*HAnimJoint432);

CHAnimJoint* HAnimJoint433 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint433->setUSE("hanim_l_pinky3");
HAnimHumanoid43->addJoints(*HAnimJoint433);

CHAnimJoint* HAnimJoint434 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint434->setUSE("hanim_r_pinky3");
HAnimHumanoid43->addJoints(*HAnimJoint434);

CHAnimJoint* HAnimJoint435 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint435->setUSE("hanim_l_ring0");
HAnimHumanoid43->addJoints(*HAnimJoint435);

CHAnimJoint* HAnimJoint436 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint436->setUSE("hanim_r_ring0");
HAnimHumanoid43->addJoints(*HAnimJoint436);

CHAnimJoint* HAnimJoint437 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint437->setUSE("hanim_l_ring1");
HAnimHumanoid43->addJoints(*HAnimJoint437);

CHAnimJoint* HAnimJoint438 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint438->setUSE("hanim_r_ring1");
HAnimHumanoid43->addJoints(*HAnimJoint438);

CHAnimJoint* HAnimJoint439 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint439->setUSE("hanim_l_ring2");
HAnimHumanoid43->addJoints(*HAnimJoint439);

CHAnimJoint* HAnimJoint440 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint440->setUSE("hanim_r_ring2");
HAnimHumanoid43->addJoints(*HAnimJoint440);

CHAnimJoint* HAnimJoint441 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint441->setUSE("hanim_l_ring3");
HAnimHumanoid43->addJoints(*HAnimJoint441);

CHAnimJoint* HAnimJoint442 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint442->setUSE("hanim_r_ring3");
HAnimHumanoid43->addJoints(*HAnimJoint442);

CHAnimJoint* HAnimJoint443 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint443->setUSE("hanim_l_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint443);

CHAnimJoint* HAnimJoint444 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint444->setUSE("hanim_r_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint444);

CHAnimJoint* HAnimJoint445 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint445->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint445);

CHAnimJoint* HAnimJoint446 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint446->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint446);

CHAnimJoint* HAnimJoint447 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint447->setUSE("hanim_l_subtalar");
HAnimHumanoid43->addJoints(*HAnimJoint447);

CHAnimJoint* HAnimJoint448 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint448->setUSE("hanim_r_subtalar");
HAnimHumanoid43->addJoints(*HAnimJoint448);

CHAnimJoint* HAnimJoint449 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint449->setUSE("hanim_l_thumb1");
HAnimHumanoid43->addJoints(*HAnimJoint449);

CHAnimJoint* HAnimJoint450 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint450->setUSE("hanim_r_thumb1");
HAnimHumanoid43->addJoints(*HAnimJoint450);

CHAnimJoint* HAnimJoint451 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint451->setUSE("hanim_l_thumb2");
HAnimHumanoid43->addJoints(*HAnimJoint451);

CHAnimJoint* HAnimJoint452 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint452->setUSE("hanim_r_thumb2");
HAnimHumanoid43->addJoints(*HAnimJoint452);

CHAnimJoint* HAnimJoint453 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint453->setUSE("hanim_l_thumb3");
HAnimHumanoid43->addJoints(*HAnimJoint453);

CHAnimJoint* HAnimJoint454 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint454->setUSE("hanim_r_thumb3");
HAnimHumanoid43->addJoints(*HAnimJoint454);

CHAnimJoint* HAnimJoint455 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint455->setUSE("hanim_l_wrist");
HAnimHumanoid43->addJoints(*HAnimJoint455);

CHAnimJoint* HAnimJoint456 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint456->setUSE("hanim_r_wrist");
HAnimHumanoid43->addJoints(*HAnimJoint456);

CHAnimSegment* HAnimSegment457 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment457->setUSE("hanim_pelvis");
HAnimHumanoid43->setSegments(*HAnimSegment457);

CHAnimSegment* HAnimSegment458 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment458->setUSE("hanim_skull");
HAnimHumanoid43->setSegments(*HAnimSegment458);

CHAnimSegment* HAnimSegment459 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment459->setUSE("hanim_jaw");
HAnimHumanoid43->setSegments(*HAnimSegment459);

CHAnimSegment* HAnimSegment460 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment460->setUSE("hanim_c1");
HAnimHumanoid43->setSegments(*HAnimSegment460);

CHAnimSegment* HAnimSegment461 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment461->setUSE("hanim_c2");
HAnimHumanoid43->setSegments(*HAnimSegment461);

CHAnimSegment* HAnimSegment462 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment462->setUSE("hanim_c3");
HAnimHumanoid43->setSegments(*HAnimSegment462);

CHAnimSegment* HAnimSegment463 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment463->setUSE("hanim_c4");
HAnimHumanoid43->setSegments(*HAnimSegment463);

CHAnimSegment* HAnimSegment464 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment464->setUSE("hanim_c5");
HAnimHumanoid43->setSegments(*HAnimSegment464);

CHAnimSegment* HAnimSegment465 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment465->setUSE("hanim_c6");
HAnimHumanoid43->setSegments(*HAnimSegment465);

CHAnimSegment* HAnimSegment466 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment466->setUSE("hanim_c7");
HAnimHumanoid43->setSegments(*HAnimSegment466);

CHAnimSegment* HAnimSegment467 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment467->setUSE("hanim_t1");
HAnimHumanoid43->setSegments(*HAnimSegment467);

CHAnimSegment* HAnimSegment468 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment468->setUSE("hanim_t2");
HAnimHumanoid43->setSegments(*HAnimSegment468);

CHAnimSegment* HAnimSegment469 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment469->setUSE("hanim_t3");
HAnimHumanoid43->setSegments(*HAnimSegment469);

CHAnimSegment* HAnimSegment470 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment470->setUSE("hanim_t4");
HAnimHumanoid43->setSegments(*HAnimSegment470);

CHAnimSegment* HAnimSegment471 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment471->setUSE("hanim_t5");
HAnimHumanoid43->setSegments(*HAnimSegment471);

CHAnimSegment* HAnimSegment472 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment472->setUSE("hanim_t6");
HAnimHumanoid43->setSegments(*HAnimSegment472);

CHAnimSegment* HAnimSegment473 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment473->setUSE("hanim_t7");
HAnimHumanoid43->setSegments(*HAnimSegment473);

CHAnimSegment* HAnimSegment474 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment474->setUSE("hanim_t8");
HAnimHumanoid43->setSegments(*HAnimSegment474);

CHAnimSegment* HAnimSegment475 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment475->setUSE("hanim_t9");
HAnimHumanoid43->setSegments(*HAnimSegment475);

CHAnimSegment* HAnimSegment476 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment476->setUSE("hanim_t10");
HAnimHumanoid43->setSegments(*HAnimSegment476);

CHAnimSegment* HAnimSegment477 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment477->setUSE("hanim_t11");
HAnimHumanoid43->setSegments(*HAnimSegment477);

CHAnimSegment* HAnimSegment478 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment478->setUSE("hanim_t12");
HAnimHumanoid43->setSegments(*HAnimSegment478);

CHAnimSegment* HAnimSegment479 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment479->setUSE("hanim_l1");
HAnimHumanoid43->setSegments(*HAnimSegment479);

CHAnimSegment* HAnimSegment480 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment480->setUSE("hanim_l2");
HAnimHumanoid43->setSegments(*HAnimSegment480);

CHAnimSegment* HAnimSegment481 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment481->setUSE("hanim_l3");
HAnimHumanoid43->setSegments(*HAnimSegment481);

CHAnimSegment* HAnimSegment482 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment482->setUSE("hanim_l4");
HAnimHumanoid43->setSegments(*HAnimSegment482);

CHAnimSegment* HAnimSegment483 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment483->setUSE("hanim_l5");
HAnimHumanoid43->setSegments(*HAnimSegment483);

CHAnimSegment* HAnimSegment484 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment484->setUSE("hanim_sacrum");
HAnimHumanoid43->setSegments(*HAnimSegment484);

CHAnimSegment* HAnimSegment485 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment485->setUSE("hanim_l_calf");
HAnimHumanoid43->setSegments(*HAnimSegment485);

CHAnimSegment* HAnimSegment486 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment486->setUSE("hanim_r_calf");
HAnimHumanoid43->setSegments(*HAnimSegment486);

CHAnimSegment* HAnimSegment487 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment487->setUSE("hanim_l_clavicle");
HAnimHumanoid43->setSegments(*HAnimSegment487);

CHAnimSegment* HAnimSegment488 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment488->setUSE("hanim_r_clavicle");
HAnimHumanoid43->setSegments(*HAnimSegment488);

CHAnimSegment* HAnimSegment489 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment489->setUSE("hanim_l_eyeball");
HAnimHumanoid43->setSegments(*HAnimSegment489);

CHAnimSegment* HAnimSegment490 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment490->setUSE("hanim_r_eyeball");
HAnimHumanoid43->setSegments(*HAnimSegment490);

CHAnimSegment* HAnimSegment491 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment491->setUSE("hanim_l_eyebrow");
HAnimHumanoid43->setSegments(*HAnimSegment491);

CHAnimSegment* HAnimSegment492 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment492->setUSE("hanim_r_eyebrow");
HAnimHumanoid43->setSegments(*HAnimSegment492);

CHAnimSegment* HAnimSegment493 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment493->setUSE("hanim_l_eyelid");
HAnimHumanoid43->setSegments(*HAnimSegment493);

CHAnimSegment* HAnimSegment494 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment494->setUSE("hanim_r_eyelid");
HAnimHumanoid43->setSegments(*HAnimSegment494);

CHAnimSegment* HAnimSegment495 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment495->setUSE("hanim_l_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment495);

CHAnimSegment* HAnimSegment496 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment496->setUSE("hanim_r_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment496);

CHAnimSegment* HAnimSegment497 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment497->setUSE("hanim_l_forefoot");
HAnimHumanoid43->setSegments(*HAnimSegment497);

CHAnimSegment* HAnimSegment498 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment498->setUSE("hanim_r_forefoot");
HAnimHumanoid43->setSegments(*HAnimSegment498);

CHAnimSegment* HAnimSegment499 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment499->setUSE("hanim_l_hand");
HAnimHumanoid43->setSegments(*HAnimSegment499);

CHAnimSegment* HAnimSegment500 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment500->setUSE("hanim_r_hand");
HAnimHumanoid43->setSegments(*HAnimSegment500);

CHAnimSegment* HAnimSegment501 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment501->setUSE("hanim_l_hindfoot");
HAnimHumanoid43->setSegments(*HAnimSegment501);

CHAnimSegment* HAnimSegment502 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment502->setUSE("hanim_r_hindfoot");
HAnimHumanoid43->setSegments(*HAnimSegment502);

CHAnimSegment* HAnimSegment503 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment503->setUSE("hanim_l_index_distal");
HAnimHumanoid43->setSegments(*HAnimSegment503);

CHAnimSegment* HAnimSegment504 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment504->setUSE("hanim_r_index_distal");
HAnimHumanoid43->setSegments(*HAnimSegment504);

CHAnimSegment* HAnimSegment505 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment505->setUSE("hanim_l_index_metacarpal");
HAnimHumanoid43->setSegments(*HAnimSegment505);

CHAnimSegment* HAnimSegment506 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment506->setUSE("hanim_r_index_metacarpal");
HAnimHumanoid43->setSegments(*HAnimSegment506);

CHAnimSegment* HAnimSegment507 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment507->setUSE("hanim_l_index_middle");
HAnimHumanoid43->setSegments(*HAnimSegment507);

CHAnimSegment* HAnimSegment508 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment508->setUSE("hanim_r_index_middle");
HAnimHumanoid43->setSegments(*HAnimSegment508);

CHAnimSegment* HAnimSegment509 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment509->setUSE("hanim_l_index_proximal");
HAnimHumanoid43->setSegments(*HAnimSegment509);

CHAnimSegment* HAnimSegment510 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment510->setUSE("hanim_r_index_proximal");
HAnimHumanoid43->setSegments(*HAnimSegment510);

CHAnimSegment* HAnimSegment511 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment511->setUSE("hanim_l_middistal");
HAnimHumanoid43->setSegments(*HAnimSegment511);

CHAnimSegment* HAnimSegment512 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment512->setUSE("hanim_r_middistal");
HAnimHumanoid43->setSegments(*HAnimSegment512);

CHAnimSegment* HAnimSegment513 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment513->setUSE("hanim_l_middle_distal");
HAnimHumanoid43->setSegments(*HAnimSegment513);

CHAnimSegment* HAnimSegment514 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment514->setUSE("hanim_r_middle_distal");
HAnimHumanoid43->setSegments(*HAnimSegment514);

CHAnimSegment* HAnimSegment515 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment515->setUSE("hanim_l_middle_metacarpal");
HAnimHumanoid43->setSegments(*HAnimSegment515);

CHAnimSegment* HAnimSegment516 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment516->setUSE("hanim_r_middle_metacarpal");
HAnimHumanoid43->setSegments(*HAnimSegment516);

CHAnimSegment* HAnimSegment517 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment517->setUSE("hanim_l_middle_middle");
HAnimHumanoid43->setSegments(*HAnimSegment517);

CHAnimSegment* HAnimSegment518 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment518->setUSE("hanim_r_middle_middle");
HAnimHumanoid43->setSegments(*HAnimSegment518);

CHAnimSegment* HAnimSegment519 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment519->setUSE("hanim_l_middle_proximal");
HAnimHumanoid43->setSegments(*HAnimSegment519);

CHAnimSegment* HAnimSegment520 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment520->setUSE("hanim_r_middle_proximal");
HAnimHumanoid43->setSegments(*HAnimSegment520);

CHAnimSegment* HAnimSegment521 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment521->setUSE("hanim_l_midproximal");
HAnimHumanoid43->setSegments(*HAnimSegment521);

CHAnimSegment* HAnimSegment522 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment522->setUSE("hanim_r_midproximal");
HAnimHumanoid43->setSegments(*HAnimSegment522);

CHAnimSegment* HAnimSegment523 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment523->setUSE("hanim_l_pinky_distal");
HAnimHumanoid43->setSegments(*HAnimSegment523);

CHAnimSegment* HAnimSegment524 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment524->setUSE("hanim_r_pinky_distal");
HAnimHumanoid43->setSegments(*HAnimSegment524);

CHAnimSegment* HAnimSegment525 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment525->setUSE("hanim_l_pinky_metacarpal");
HAnimHumanoid43->setSegments(*HAnimSegment525);

CHAnimSegment* HAnimSegment526 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment526->setUSE("hanim_r_pinky_metacarpal");
HAnimHumanoid43->setSegments(*HAnimSegment526);

CHAnimSegment* HAnimSegment527 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment527->setUSE("hanim_l_pinky_middle");
HAnimHumanoid43->setSegments(*HAnimSegment527);

CHAnimSegment* HAnimSegment528 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment528->setUSE("hanim_r_pinky_middle");
HAnimHumanoid43->setSegments(*HAnimSegment528);

CHAnimSegment* HAnimSegment529 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment529->setUSE("hanim_l_pinky_proximal");
HAnimHumanoid43->setSegments(*HAnimSegment529);

CHAnimSegment* HAnimSegment530 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment530->setUSE("hanim_r_pinky_proximal");
HAnimHumanoid43->setSegments(*HAnimSegment530);

CHAnimSegment* HAnimSegment531 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment531->setUSE("hanim_l_ring_distal");
HAnimHumanoid43->setSegments(*HAnimSegment531);

CHAnimSegment* HAnimSegment532 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment532->setUSE("hanim_r_ring_distal");
HAnimHumanoid43->setSegments(*HAnimSegment532);

CHAnimSegment* HAnimSegment533 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment533->setUSE("hanim_l_ring_metacarpal");
HAnimHumanoid43->setSegments(*HAnimSegment533);

CHAnimSegment* HAnimSegment534 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment534->setUSE("hanim_r_ring_metacarpal");
HAnimHumanoid43->setSegments(*HAnimSegment534);

CHAnimSegment* HAnimSegment535 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment535->setUSE("hanim_l_ring_middle");
HAnimHumanoid43->setSegments(*HAnimSegment535);

CHAnimSegment* HAnimSegment536 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment536->setUSE("hanim_r_ring_middle");
HAnimHumanoid43->setSegments(*HAnimSegment536);

CHAnimSegment* HAnimSegment537 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment537->setUSE("hanim_l_ring_proximal");
HAnimHumanoid43->setSegments(*HAnimSegment537);

CHAnimSegment* HAnimSegment538 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment538->setUSE("hanim_r_ring_proximal");
HAnimHumanoid43->setSegments(*HAnimSegment538);

CHAnimSegment* HAnimSegment539 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment539->setUSE("hanim_l_scapula");
HAnimHumanoid43->setSegments(*HAnimSegment539);

CHAnimSegment* HAnimSegment540 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment540->setUSE("hanim_r_scapula");
HAnimHumanoid43->setSegments(*HAnimSegment540);

CHAnimSegment* HAnimSegment541 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment541->setUSE("hanim_l_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment541);

CHAnimSegment* HAnimSegment542 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment542->setUSE("hanim_r_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment542);

CHAnimSegment* HAnimSegment543 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment543->setUSE("hanim_l_thumb_distal");
HAnimHumanoid43->setSegments(*HAnimSegment543);

CHAnimSegment* HAnimSegment544 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment544->setUSE("hanim_r_thumb_distal");
HAnimHumanoid43->setSegments(*HAnimSegment544);

CHAnimSegment* HAnimSegment545 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment545->setUSE("hanim_l_thumb_metacarpal");
HAnimHumanoid43->setSegments(*HAnimSegment545);

CHAnimSegment* HAnimSegment546 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment546->setUSE("hanim_r_thumb_metacarpal");
HAnimHumanoid43->setSegments(*HAnimSegment546);

CHAnimSegment* HAnimSegment547 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment547->setUSE("hanim_l_thumb_proximal");
HAnimHumanoid43->setSegments(*HAnimSegment547);

CHAnimSegment* HAnimSegment548 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment548->setUSE("hanim_r_thumb_proximal");
HAnimHumanoid43->setSegments(*HAnimSegment548);

CHAnimSegment* HAnimSegment549 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment549->setUSE("hanim_l_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment549);

CHAnimSegment* HAnimSegment550 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment550->setUSE("hanim_r_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment550);

CHAnimSite* HAnimSite551 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite551->setUSE("hanim_crotch_pt");
HAnimHumanoid43->setSites(*HAnimSite551);

CHAnimSite* HAnimSite552 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite552->setUSE("hanim_skull_tip");
HAnimHumanoid43->setSites(*HAnimSite552);

CHAnimSite* HAnimSite553 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite553->setUSE("hanim_sellion_pt");
HAnimHumanoid43->setSites(*HAnimSite553);

CHAnimSite* HAnimSite554 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite554->setUSE("hanim_supramenton_pt");
HAnimHumanoid43->setSites(*HAnimSite554);

CHAnimSite* HAnimSite555 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite555->setUSE("hanim_nuchale_pt");
HAnimHumanoid43->setSites(*HAnimSite555);

CHAnimSite* HAnimSite556 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite556->setUSE("hanim_suprasternale_pt");
HAnimHumanoid43->setSites(*HAnimSite556);

CHAnimSite* HAnimSite557 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite557->setUSE("hanim_cervicale_pt");
HAnimHumanoid43->setSites(*HAnimSite557);

CHAnimSite* HAnimSite558 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite558->setUSE("hanim_substernale_pt");
HAnimHumanoid43->setSites(*HAnimSite558);

CHAnimSite* HAnimSite559 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite559->setUSE("hanim_rib10_midspine_pt");
HAnimHumanoid43->setSites(*HAnimSite559);

CHAnimSite* HAnimSite560 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite560->setUSE("hanim_waist_preferred_post_pt");
HAnimHumanoid43->setSites(*HAnimSite560);

CHAnimSite* HAnimSite561 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite561->setUSE("hanim_navel_pt");
HAnimHumanoid43->setSites(*HAnimSite561);

CHAnimSite* HAnimSite562 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite562->setUSE("hanim_l_acromion_pt");
HAnimHumanoid43->setSites(*HAnimSite562);

CHAnimSite* HAnimSite563 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite563->setUSE("hanim_r_acromion_pt");
HAnimHumanoid43->setSites(*HAnimSite563);

CHAnimSite* HAnimSite564 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite564->setUSE("hanim_r_asis_pt");
HAnimHumanoid43->setSites(*HAnimSite564);

CHAnimSite* HAnimSite565 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite565->setUSE("hanim_l_asis_pt");
HAnimHumanoid43->setSites(*HAnimSite565);

CHAnimSite* HAnimSite566 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite566->setUSE("hanim_l_axilla_ant_pt");
HAnimHumanoid43->setSites(*HAnimSite566);

CHAnimSite* HAnimSite567 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite567->setUSE("hanim_r_axilla_ant_pt");
HAnimHumanoid43->setSites(*HAnimSite567);

CHAnimSite* HAnimSite568 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite568->setUSE("hanim_l_axilla_post_pt");
HAnimHumanoid43->setSites(*HAnimSite568);

CHAnimSite* HAnimSite569 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite569->setUSE("hanim_r_axilla_post_pt");
HAnimHumanoid43->setSites(*HAnimSite569);

CHAnimSite* HAnimSite570 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite570->setUSE("hanim_l_calcaneous_post_pt");
HAnimHumanoid43->setSites(*HAnimSite570);

CHAnimSite* HAnimSite571 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite571->setUSE("hanim_r_calcaneous_post_pt");
HAnimHumanoid43->setSites(*HAnimSite571);

CHAnimSite* HAnimSite572 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite572->setUSE("hanim_l_clavicale_pt");
HAnimHumanoid43->setSites(*HAnimSite572);

CHAnimSite* HAnimSite573 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite573->setUSE("hanim_r_clavicale_pt");
HAnimHumanoid43->setSites(*HAnimSite573);

CHAnimSite* HAnimSite574 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite574->setUSE("hanim_l_dactylion_pt");
HAnimHumanoid43->setSites(*HAnimSite574);

CHAnimSite* HAnimSite575 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite575->setUSE("hanim_r_dactylion_pt");
HAnimHumanoid43->setSites(*HAnimSite575);

CHAnimSite* HAnimSite576 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite576->setUSE("hanim_l_digit2_pt");
HAnimHumanoid43->setSites(*HAnimSite576);

CHAnimSite* HAnimSite577 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite577->setUSE("hanim_r_digit2_pt");
HAnimHumanoid43->setSites(*HAnimSite577);

CHAnimSite* HAnimSite578 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite578->setUSE("hanim_l_femoral_lateral_epicn_pt");
HAnimHumanoid43->setSites(*HAnimSite578);

CHAnimSite* HAnimSite579 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite579->setUSE("hanim_r_femoral_lateral_epicn_pt");
HAnimHumanoid43->setSites(*HAnimSite579);

CHAnimSite* HAnimSite580 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite580->setUSE("hanim_l_femoral_medial_epicn_pt");
HAnimHumanoid43->setSites(*HAnimSite580);

CHAnimSite* HAnimSite581 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite581->setUSE("hanim_r_femoral_medial_epicn_pt");
HAnimHumanoid43->setSites(*HAnimSite581);

CHAnimSite* HAnimSite582 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite582->setUSE("hanim_l_forefoot_tip");
HAnimHumanoid43->setSites(*HAnimSite582);

CHAnimSite* HAnimSite583 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite583->setUSE("hanim_r_forefoot_tip");
HAnimHumanoid43->setSites(*HAnimSite583);

CHAnimSite* HAnimSite584 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite584->setUSE("hanim_r_gonion_pt");
HAnimHumanoid43->setSites(*HAnimSite584);

CHAnimSite* HAnimSite585 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite585->setUSE("hanim_l_gonion_pt");
HAnimHumanoid43->setSites(*HAnimSite585);

CHAnimSite* HAnimSite586 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite586->setUSE("hanim_l_humeral_lateral_epicn_pt");
HAnimHumanoid43->setSites(*HAnimSite586);

CHAnimSite* HAnimSite587 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite587->setUSE("hanim_r_humeral_lateral_epicn_pt");
HAnimHumanoid43->setSites(*HAnimSite587);

CHAnimSite* HAnimSite588 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite588->setUSE("hanim_l_humeral_medial_epicn_pt");
HAnimHumanoid43->setSites(*HAnimSite588);

CHAnimSite* HAnimSite589 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite589->setUSE("hanim_r_humeral_medial_epicn_pt");
HAnimHumanoid43->setSites(*HAnimSite589);

CHAnimSite* HAnimSite590 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite590->setUSE("hanim_r_iliocristale_pt");
HAnimHumanoid43->setSites(*HAnimSite590);

CHAnimSite* HAnimSite591 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite591->setUSE("hanim_l_iliocristale_pt");
HAnimHumanoid43->setSites(*HAnimSite591);

CHAnimSite* HAnimSite592 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite592->setUSE("hanim_l_index_distal_tip");
HAnimHumanoid43->setSites(*HAnimSite592);

CHAnimSite* HAnimSite593 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite593->setUSE("hanim_r_index_distal_tip");
HAnimHumanoid43->setSites(*HAnimSite593);

CHAnimSite* HAnimSite594 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite594->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid43->setSites(*HAnimSite594);

CHAnimSite* HAnimSite595 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite595->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid43->setSites(*HAnimSite595);

CHAnimSite* HAnimSite596 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite596->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid43->setSites(*HAnimSite596);

CHAnimSite* HAnimSite597 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite597->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid43->setSites(*HAnimSite597);

CHAnimSite* HAnimSite598 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite598->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite598);

CHAnimSite* HAnimSite599 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite599->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite599);

CHAnimSite* HAnimSite600 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite600->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite600);

CHAnimSite* HAnimSite601 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite601->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite601);

CHAnimSite* HAnimSite602 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite602->setUSE("hanim_l_metacarpal_pha2_pt");
HAnimHumanoid43->setSites(*HAnimSite602);

CHAnimSite* HAnimSite603 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite603->setUSE("hanim_r_metacarpal_pha2_pt");
HAnimHumanoid43->setSites(*HAnimSite603);

CHAnimSite* HAnimSite604 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite604->setUSE("hanim_l_metacarpal_pha5_pt");
HAnimHumanoid43->setSites(*HAnimSite604);

CHAnimSite* HAnimSite605 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite605->setUSE("hanim_r_metacarpal_pha5_pt");
HAnimHumanoid43->setSites(*HAnimSite605);

CHAnimSite* HAnimSite606 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite606->setUSE("hanim_l_metatarsal_pha1_pt");
HAnimHumanoid43->setSites(*HAnimSite606);

CHAnimSite* HAnimSite607 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite607->setUSE("hanim_r_metatarsal_pha1_pt");
HAnimHumanoid43->setSites(*HAnimSite607);

CHAnimSite* HAnimSite608 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite608->setUSE("hanim_l_metatarsal_pha5_pt");
HAnimHumanoid43->setSites(*HAnimSite608);

CHAnimSite* HAnimSite609 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite609->setUSE("hanim_r_metatarsal_pha5_pt");
HAnimHumanoid43->setSites(*HAnimSite609);

CHAnimSite* HAnimSite610 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite610->setUSE("hanim_l_middle_distal_tip");
HAnimHumanoid43->setSites(*HAnimSite610);

CHAnimSite* HAnimSite611 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite611->setUSE("hanim_r_middle_distal_tip");
HAnimHumanoid43->setSites(*HAnimSite611);

CHAnimSite* HAnimSite612 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite612->setUSE("hanim_r_neck_base_pt");
HAnimHumanoid43->setSites(*HAnimSite612);

CHAnimSite* HAnimSite613 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite613->setUSE("hanim_l_neck_base_pt");
HAnimHumanoid43->setSites(*HAnimSite613);

CHAnimSite* HAnimSite614 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite614->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid43->setSites(*HAnimSite614);

CHAnimSite* HAnimSite615 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite615->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid43->setSites(*HAnimSite615);

CHAnimSite* HAnimSite616 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite616->setUSE("hanim_l_pinky_distal_tip");
HAnimHumanoid43->setSites(*HAnimSite616);

CHAnimSite* HAnimSite617 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite617->setUSE("hanim_r_pinky_distal_tip");
HAnimHumanoid43->setSites(*HAnimSite617);

CHAnimSite* HAnimSite618 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite618->setUSE("hanim_r_psis_pt");
HAnimHumanoid43->setSites(*HAnimSite618);

CHAnimSite* HAnimSite619 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite619->setUSE("hanim_l_psis_pt");
HAnimHumanoid43->setSites(*HAnimSite619);

CHAnimSite* HAnimSite620 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite620->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite620);

CHAnimSite* HAnimSite621 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite621->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite621);

CHAnimSite* HAnimSite622 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite622->setUSE("hanim_l_radiale_pt");
HAnimHumanoid43->setSites(*HAnimSite622);

CHAnimSite* HAnimSite623 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite623->setUSE("hanim_r_radiale_pt");
HAnimHumanoid43->setSites(*HAnimSite623);

CHAnimSite* HAnimSite624 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite624->setUSE("hanim_r_rib10_pt");
HAnimHumanoid43->setSites(*HAnimSite624);

CHAnimSite* HAnimSite625 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite625->setUSE("hanim_l_rib10_pt");
HAnimHumanoid43->setSites(*HAnimSite625);

CHAnimSite* HAnimSite626 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite626->setUSE("hanim_l_ring_distal_tip");
HAnimHumanoid43->setSites(*HAnimSite626);

CHAnimSite* HAnimSite627 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite627->setUSE("hanim_r_ring_distal_tip");
HAnimHumanoid43->setSites(*HAnimSite627);

CHAnimSite* HAnimSite628 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite628->setUSE("hanim_temporomandibular_l_site_pt");
HAnimHumanoid43->setSites(*HAnimSite628);

CHAnimSite* HAnimSite629 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite629->setUSE("hanim_temporomandibular_r_site_pt");
HAnimHumanoid43->setSites(*HAnimSite629);

CHAnimSite* HAnimSite630 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite630->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid43->setSites(*HAnimSite630);

CHAnimSite* HAnimSite631 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite631->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid43->setSites(*HAnimSite631);

CHAnimSite* HAnimSite632 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite632->setUSE("hanim_r_thelion_pt");
HAnimHumanoid43->setSites(*HAnimSite632);

CHAnimSite* HAnimSite633 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite633->setUSE("hanim_l_thelion_pt");
HAnimHumanoid43->setSites(*HAnimSite633);

CHAnimSite* HAnimSite634 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite634->setUSE("hanim_l_thumb_distal_tip");
HAnimHumanoid43->setSites(*HAnimSite634);

CHAnimSite* HAnimSite635 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite635->setUSE("hanim_r_thumb_distal_tip");
HAnimHumanoid43->setSites(*HAnimSite635);

CHAnimSite* HAnimSite636 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite636->setUSE("hanim_r_tragion_pt");
HAnimHumanoid43->setSites(*HAnimSite636);

CHAnimSite* HAnimSite637 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite637->setUSE("hanim_l_tragion_pt");
HAnimHumanoid43->setSites(*HAnimSite637);

CHAnimSite* HAnimSite638 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite638->setUSE("hanim_r_trochanterion_pt");
HAnimHumanoid43->setSites(*HAnimSite638);

CHAnimSite* HAnimSite639 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite639->setUSE("hanim_l_trochanterion_pt");
HAnimHumanoid43->setSites(*HAnimSite639);

CHAnimSite* HAnimSite640 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite640->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite640);

CHAnimSite* HAnimSite641 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite641->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite641);

group->addChildren(*HAnimHumanoid43);

X3D0->setScene(*Scene29);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

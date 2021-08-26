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
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
Ccomponent* component2 = new Ccomponent();
component2->setName("H-Anim");
component2->setLevel(1);
head1->addComponent(*component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("HAnimSpecificationLOA3Invisible.x3d");
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
meta7->setContent("4 July 2020");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("TODO");
meta8->setContent("Convert to X3D4 HAnim2");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("creator");
meta9->setContent("Matthew T. Beitler, Joe D. Williams, Don Brutzman");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("HAnimSpecificationLOA3Illustrated.x3d");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("HAnimSpecificationLOA3Animation.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("HAnimSpecificationExampleChangeLog.txt");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("Image");
meta13->setContent("images/BonesAllSkeletonFrontViewLOA1.png");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("Image");
meta14->setContent("images/BonesAllSkeletonFrontViewLOA2.png");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("Image");
meta15->setContent("images/BonesAllSkeletonFrontViewLOA3.png");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("TODO");
meta16->setContent("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("TODO");
meta17->setContent("insert MetadataInteger nodes indicating LOA for each Joint and Segment");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("reference");
meta18->setContent("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("reference");
meta19->setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("reference");
meta20->setContent("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("translator");
meta21->setContent("Don Brutzman and Joe Williams");
head1->addMeta(*meta21);

Cmeta* meta22 = new Cmeta();
meta22->setName("generator");
meta22->setContent("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo");
head1->addMeta(*meta22);

Cmeta* meta23 = new Cmeta();
meta23->setName("reference");
meta23->setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl");
head1->addMeta(*meta23);

Cmeta* meta24 = new Cmeta();
meta24->setName("reference");
meta24->setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d");
head1->addMeta(*meta24);

Cmeta* meta25 = new Cmeta();
meta25->setName("reference");
meta25->setContent("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d");
head1->addMeta(*meta25);

Cmeta* meta26 = new Cmeta();
meta26->setName("reference");
meta26->setContent("HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames");
head1->addMeta(*meta26);

Cmeta* meta27 = new Cmeta();
meta27->setName("generator");
meta27->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta27);

Cmeta* meta28 = new Cmeta();
meta28->setName("identifier");
meta28->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnimSpecificationLOA3Invisible.x3d");
head1->addMeta(*meta28);

Cmeta* meta29 = new Cmeta();
meta29->setName("license");
meta29->setContent("../license.html");
head1->addMeta(*meta29);

X3D0->setHead(*head1);

CScene* Scene30 = new CScene();
CBackground* Background31 = (CBackground *)(m_pScene.createNode("Background"));
Background31->setSkyColor(new float[3]{0.3,0.3,0.3});
group->addChildren(*Background31);

CNavigationInfo* NavigationInfo32 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo32);

CGroup* Group33 = (CGroup *)(m_pScene.createNode("Group"));
Group33->setDEF("Original_WorldInfo");
CWorldInfo* WorldInfo34 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo34->setInfo(new CString[1]{" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "}, 1);
WorldInfo34->setTitle("HANIM 200x Default Joint Centers, LOA3");
Group33->addChildren(*WorldInfo34);

group->addChildren(*Group33);

//TODO move viewpoints to be internal to HAnimHumanoid
//Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
CViewpoint* Viewpoint35 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint35->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint35->setDescription("Humanoid LOA 3 Front");
Viewpoint35->setPosition(new float[3]{0,0.4,4});
group->addChildren(*Viewpoint35);

CViewpoint* Viewpoint36 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint36->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint36->setDescription("Humanoid LOA 3 Front Close");
Viewpoint36->setPosition(new float[3]{0,0.8,2});
group->addChildren(*Viewpoint36);

CViewpoint* Viewpoint37 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint37->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint37->setDescription("Humanoid LOA 3 Front Closer");
Viewpoint37->setPosition(new float[3]{0,1.2,1});
group->addChildren(*Viewpoint37);

CViewpoint* Viewpoint38 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint38->setCenterOfRotation(new float[3]{0,1.5,0.0016});
Viewpoint38->setDescription("Humanoid LOA 3 Front Face");
Viewpoint38->setPosition(new float[3]{0,1.63,1});
group->addChildren(*Viewpoint38);

CViewpoint* Viewpoint39 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint39->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint39->setDescription("Humanoid LOA 3 Right Side");
Viewpoint39->setOrientation(new float[4]{0,1,0,1.5708});
Viewpoint39->setPosition(new float[3]{2.6,0.8,0});
group->addChildren(*Viewpoint39);

CViewpoint* Viewpoint40 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint40->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint40->setDescription("Humanoid LOA 3 Right Side Close");
Viewpoint40->setOrientation(new float[4]{0,1,0,1.2});
Viewpoint40->setPosition(new float[3]{1,0.8,0.5});
group->addChildren(*Viewpoint40);

CViewpoint* Viewpoint41 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint41->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint41->setDescription("Humanoid LOA 3 Left Side Close");
Viewpoint41->setOrientation(new float[4]{0,1,0,-1.2});
Viewpoint41->setPosition(new float[3]{-1,0.8,0.5});
group->addChildren(*Viewpoint41);

CViewpoint* Viewpoint42 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint42->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint42->setDescription("Humanoid LOA 3 Left Side");
Viewpoint42->setOrientation(new float[4]{0,1,0,-1.5708});
Viewpoint42->setPosition(new float[3]{-2.6,0.8,0});
group->addChildren(*Viewpoint42);

CViewpoint* Viewpoint43 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint43->setCenterOfRotation(new float[3]{0,0.9149,0.0016});
Viewpoint43->setDescription("Humanoid LOA 3 Top");
Viewpoint43->setOrientation(new float[4]{1,0,0,-1.5708});
Viewpoint43->setPosition(new float[3]{0,3.5,0});
group->addChildren(*Viewpoint43);

CHAnimHumanoid* HAnimHumanoid44 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid44->setName("humanoid");
HAnimHumanoid44->setDEF("hanim_humanoid");
HAnimHumanoid44->setInfo(new CString[7]{"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"}, 7);
HAnimHumanoid44->setVersion("1.0");
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//right between the eyes, stationary position not animating except with body itself
CHAnimJoint* HAnimJoint45 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint45->setName("humanoid_root");
HAnimJoint45->setDEF("hanim_humanoid_root");
HAnimJoint45->setCenter(new float[3]{0,0.824,0.0277});
HAnimJoint45->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment46 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment46->setName("sacrum");
HAnimSegment46->setDEF("hanim_sacrum");
HAnimJoint45->addChildren(*HAnimSegment46);

CHAnimJoint* HAnimJoint47 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint47->setName("sacroiliac");
HAnimJoint47->setDEF("hanim_sacroiliac");
HAnimJoint47->setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint47->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment48 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment48->setName("pelvis");
HAnimSegment48->setDEF("hanim_pelvis");
CHAnimSite* HAnimSite49 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite49->setName("r_iliocristale_pt");
HAnimSite49->setDEF("hanim_r_iliocristale_pt");
HAnimSite49->setTranslation(new float[3]{-0.1525,1.0628,0.0035});
HAnimSegment48->addChildren(*HAnimSite49);

CHAnimSite* HAnimSite50 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite50->setName("r_trochanterion_pt");
HAnimSite50->setDEF("hanim_r_trochanterion_pt");
HAnimSite50->setTranslation(new float[3]{-0.1689,0.8419,0.0352});
HAnimSegment48->addChildren(*HAnimSite50);

CHAnimSite* HAnimSite51 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite51->setName("l_iliocristale_pt");
HAnimSite51->setDEF("hanim_l_iliocristale_pt");
HAnimSite51->setTranslation(new float[3]{0.1612,1.0537,0.0008});
HAnimSegment48->addChildren(*HAnimSite51);

CHAnimSite* HAnimSite52 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite52->setName("l_trochanterion_pt");
HAnimSite52->setDEF("hanim_l_trochanterion_pt");
HAnimSite52->setTranslation(new float[3]{0.1677,0.8336,0.0303});
HAnimSegment48->addChildren(*HAnimSite52);

CHAnimSite* HAnimSite53 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite53->setName("r_asis_pt");
HAnimSite53->setDEF("hanim_r_asis_pt");
HAnimSite53->setTranslation(new float[3]{-0.0887,1.0021,0.1112});
HAnimSegment48->addChildren(*HAnimSite53);

CHAnimSite* HAnimSite54 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite54->setName("l_asis_pt");
HAnimSite54->setDEF("hanim_l_asis_pt");
HAnimSite54->setTranslation(new float[3]{0.0925,0.9983,0.1052});
HAnimSegment48->addChildren(*HAnimSite54);

CHAnimSite* HAnimSite55 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite55->setName("r_psis_pt");
HAnimSite55->setDEF("hanim_r_psis_pt");
HAnimSite55->setTranslation(new float[3]{-0.0716,1.019,-0.1138});
HAnimSegment48->addChildren(*HAnimSite55);

CHAnimSite* HAnimSite56 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite56->setName("l_psis_pt");
HAnimSite56->setDEF("hanim_l_psis_pt");
HAnimSite56->setTranslation(new float[3]{0.0774,1.019,-0.1151});
HAnimSegment48->addChildren(*HAnimSite56);

CHAnimSite* HAnimSite57 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite57->setName("crotch_pt");
HAnimSite57->setDEF("hanim_crotch_pt");
HAnimSite57->setTranslation(new float[3]{0.0034,0.8266,0.0257});
HAnimSegment48->addChildren(*HAnimSite57);

HAnimJoint47->addChildren(*HAnimSegment48);

CHAnimJoint* HAnimJoint58 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint58->setName("l_hip");
HAnimJoint58->setDEF("hanim_l_hip");
HAnimJoint58->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint58->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment59 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment59->setName("l_thigh");
HAnimSegment59->setDEF("hanim_l_thigh");
CHAnimSite* HAnimSite60 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite60->setName("l_knee_crease_pt");
HAnimSite60->setDEF("hanim_l_knee_crease_pt");
HAnimSite60->setTranslation(new float[3]{0.0993,0.4881,-0.0309});
HAnimSegment59->addChildren(*HAnimSite60);

CHAnimSite* HAnimSite61 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite61->setName("l_femoral_lateral_epicn_pt");
HAnimSite61->setDEF("hanim_l_femoral_lateral_epicn_pt");
HAnimSite61->setTranslation(new float[3]{0.1598,0.4967,0.0297});
HAnimSegment59->addChildren(*HAnimSite61);

CHAnimSite* HAnimSite62 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite62->setName("l_femoral_medial_epicn_pt");
HAnimSite62->setDEF("hanim_l_femoral_medial_epicn_pt");
HAnimSite62->setTranslation(new float[3]{0.0398,0.4946,0.0303});
HAnimSegment59->addChildren(*HAnimSite62);

HAnimJoint58->addChildren(*HAnimSegment59);

CHAnimJoint* HAnimJoint63 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint63->setName("l_knee");
HAnimJoint63->setDEF("hanim_l_knee");
HAnimJoint63->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint63->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment64 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment64->setName("l_calf");
HAnimSegment64->setDEF("hanim_l_calf");
HAnimJoint63->addChildren(*HAnimSegment64);

CHAnimJoint* HAnimJoint65 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint65->setName("l_ankle");
HAnimJoint65->setDEF("hanim_l_ankle");
HAnimJoint65->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint65->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment66 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment66->setName("l_hindfoot");
HAnimSegment66->setDEF("hanim_l_hindfoot");
CHAnimSite* HAnimSite67 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite67->setName("l_lateral_malleolus_pt");
HAnimSite67->setDEF("hanim_l_lateral_malleolus_pt");
HAnimSite67->setTranslation(new float[3]{0.1308,0.0597,-0.1032});
HAnimSegment66->addChildren(*HAnimSite67);

CHAnimSite* HAnimSite68 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite68->setName("l_medial_malleolus_pt");
HAnimSite68->setDEF("hanim_l_medial_malleolus_pt");
HAnimSite68->setTranslation(new float[3]{0.089,0.0716,-0.0881});
HAnimSegment66->addChildren(*HAnimSite68);

CHAnimSite* HAnimSite69 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite69->setName("l_sphyrion_pt");
HAnimSite69->setDEF("hanim_l_sphyrion_pt");
HAnimSite69->setTranslation(new float[3]{0.089,0.0575,-0.0943});
HAnimSegment66->addChildren(*HAnimSite69);

CHAnimSite* HAnimSite70 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite70->setName("l_calcaneous_post_pt");
HAnimSite70->setDEF("hanim_l_calcaneous_post_pt");
HAnimSite70->setTranslation(new float[3]{0.0974,0.0259,-0.1171});
HAnimSegment66->addChildren(*HAnimSite70);

HAnimJoint65->addChildren(*HAnimSegment66);

CHAnimJoint* HAnimJoint71 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint71->setName("l_subtalar");
HAnimJoint71->setDEF("hanim_l_subtalar");
HAnimJoint71->setCenter(new float[3]{0.1086,0.0001,-0.0368});
HAnimJoint71->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment72 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment72->setName("l_midproximal");
HAnimSegment72->setDEF("hanim_l_midproximal");
HAnimJoint71->addChildren(*HAnimSegment72);

CHAnimJoint* HAnimJoint73 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint73->setName("l_midtarsal");
HAnimJoint73->setDEF("hanim_l_midtarsal");
HAnimJoint73->setCenter(new float[3]{0.1086,0.0001,0.0368});
HAnimJoint73->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment74 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment74->setName("l_middistal");
HAnimSegment74->setDEF("hanim_l_middistal");
CHAnimSite* HAnimSite75 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite75->setName("l_metatarsal_pha1_pt");
HAnimSite75->setDEF("hanim_l_metatarsal_pha1_pt");
HAnimSite75->setTranslation(new float[3]{0.0816,0.0232,0.0106});
HAnimSegment74->addChildren(*HAnimSite75);

HAnimJoint73->addChildren(*HAnimSegment74);

CHAnimJoint* HAnimJoint76 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint76->setName("l_metatarsal");
HAnimJoint76->setDEF("hanim_l_metatarsal");
HAnimJoint76->setCenter(new float[3]{0.1086,0,0.0762});
HAnimJoint76->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment77 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment77->setName("l_forefoot");
HAnimSegment77->setDEF("hanim_l_forefoot");
CHAnimSite* HAnimSite78 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite78->setName("l_forefoot_tip");
HAnimSite78->setDEF("hanim_l_forefoot_tip");
HAnimSite78->setTranslation(new float[3]{0.1354,0.0016,0.1476});
HAnimSegment77->addChildren(*HAnimSite78);

CHAnimSite* HAnimSite79 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite79->setName("l_metatarsal_pha5_pt");
HAnimSite79->setDEF("hanim_l_metatarsal_pha5_pt");
HAnimSite79->setTranslation(new float[3]{0.1825,0.007,0.0928});
HAnimSegment77->addChildren(*HAnimSite79);

CHAnimSite* HAnimSite80 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite80->setName("l_digit2_pt");
HAnimSite80->setDEF("hanim_l_digit2_pt");
HAnimSite80->setTranslation(new float[3]{0.1195,0.0079,0.1433});
HAnimSegment77->addChildren(*HAnimSite80);

HAnimJoint76->addChildren(*HAnimSegment77);

HAnimJoint73->addChildren(*HAnimJoint76);

HAnimJoint71->addChildren(*HAnimJoint73);

HAnimJoint65->addChildren(*HAnimJoint71);

HAnimJoint63->addChildren(*HAnimJoint65);

HAnimJoint58->addChildren(*HAnimJoint63);

HAnimJoint47->addChildren(*HAnimJoint58);

CHAnimJoint* HAnimJoint81 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint81->setName("r_hip");
HAnimJoint81->setDEF("hanim_r_hip");
HAnimJoint81->setCenter(new float[3]{-0.0961,0.9124,-0.0001});
HAnimJoint81->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment82 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment82->setName("r_thigh");
HAnimSegment82->setDEF("hanim_r_thigh");
CHAnimSite* HAnimSite83 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite83->setName("r_knee_crease_pt");
HAnimSite83->setDEF("hanim_r_knee_crease_pt");
HAnimSite83->setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
HAnimSegment82->addChildren(*HAnimSite83);

CHAnimSite* HAnimSite84 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite84->setName("r_femoral_lateral_epicn_pt");
HAnimSite84->setDEF("hanim_r_femoral_lateral_epicn_pt");
HAnimSite84->setTranslation(new float[3]{-0.1421,0.4992,0.031});
HAnimSegment82->addChildren(*HAnimSite84);

CHAnimSite* HAnimSite85 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite85->setName("r_femoral_medial_epicn_pt");
HAnimSite85->setDEF("hanim_r_femoral_medial_epicn_pt");
HAnimSite85->setTranslation(new float[3]{-0.0221,0.5014,0.0289});
HAnimSegment82->addChildren(*HAnimSite85);

HAnimJoint81->addChildren(*HAnimSegment82);

CHAnimJoint* HAnimJoint86 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint86->setName("r_knee");
HAnimJoint86->setDEF("hanim_r_knee");
HAnimJoint86->setCenter(new float[3]{-0.104,0.4867,0.0308});
HAnimJoint86->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment87 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment87->setName("r_calf");
HAnimSegment87->setDEF("hanim_r_calf");
HAnimJoint86->addChildren(*HAnimSegment87);

CHAnimJoint* HAnimJoint88 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint88->setName("r_ankle");
HAnimJoint88->setDEF("hanim_r_ankle");
HAnimJoint88->setCenter(new float[3]{-0.1101,0.0656,-0.0736});
HAnimJoint88->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment89 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment89->setName("r_hindfoot");
HAnimSegment89->setDEF("hanim_r_hindfoot");
CHAnimSite* HAnimSite90 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite90->setName("r_lateral_malleolus_pt");
HAnimSite90->setDEF("hanim_r_lateral_malleolus_pt");
HAnimSite90->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
HAnimSegment89->addChildren(*HAnimSite90);

CHAnimSite* HAnimSite91 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite91->setName("r_medial_malleolus_pt");
HAnimSite91->setDEF("hanim_r_medial_malleolus_pt");
HAnimSite91->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
HAnimSegment89->addChildren(*HAnimSite91);

CHAnimSite* HAnimSite92 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite92->setName("r_sphyrion_pt");
HAnimSite92->setDEF("hanim_r_sphyrion_pt");
HAnimSite92->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
HAnimSegment89->addChildren(*HAnimSite92);

CHAnimSite* HAnimSite93 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite93->setName("r_calcaneous_post_pt");
HAnimSite93->setDEF("hanim_r_calcaneous_post_pt");
HAnimSite93->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
HAnimSegment89->addChildren(*HAnimSite93);

HAnimJoint88->addChildren(*HAnimSegment89);

CHAnimJoint* HAnimJoint94 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint94->setName("r_subtalar");
HAnimJoint94->setDEF("hanim_r_subtalar");
HAnimJoint94->setCenter(new float[3]{-0.1086,0.0001,-0.0368});
HAnimJoint94->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment95 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment95->setName("r_midproximal");
HAnimSegment95->setDEF("hanim_r_midproximal");
HAnimJoint94->addChildren(*HAnimSegment95);

CHAnimJoint* HAnimJoint96 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint96->setName("r_midtarsal");
HAnimJoint96->setDEF("hanim_r_midtarsal");
HAnimJoint96->setCenter(new float[3]{-0.1086,0.0001,0.0368});
HAnimJoint96->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment97 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment97->setName("r_middistal");
HAnimSegment97->setDEF("hanim_r_middistal");
CHAnimSite* HAnimSite98 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite98->setName("r_metatarsal_pha1_pt");
HAnimSite98->setDEF("hanim_r_metatarsal_pha1_pt");
HAnimSite98->setTranslation(new float[3]{-0.0521,0.026,0.0127});
HAnimSegment97->addChildren(*HAnimSite98);

HAnimJoint96->addChildren(*HAnimSegment97);

CHAnimJoint* HAnimJoint99 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint99->setName("r_metatarsal");
HAnimJoint99->setDEF("hanim_r_metatarsal");
HAnimJoint99->setCenter(new float[3]{-0.1086,0,0.0762});
HAnimJoint99->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment100 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment100->setName("r_forefoot");
HAnimSegment100->setDEF("hanim_r_forefoot");
CHAnimSite* HAnimSite101 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite101->setName("r_forefoot_tip");
HAnimSite101->setDEF("hanim_r_forefoot_tip");
HAnimSite101->setTranslation(new float[3]{-0.1043,0.0227,0.145});
HAnimSegment100->addChildren(*HAnimSite101);

CHAnimSite* HAnimSite102 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite102->setName("r_metatarsal_pha5_pt");
HAnimSite102->setDEF("hanim_r_metatarsal_pha5_pt");
HAnimSite102->setTranslation(new float[3]{-0.1523,0.0166,0.0895});
HAnimSegment100->addChildren(*HAnimSite102);

CHAnimSite* HAnimSite103 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite103->setName("r_digit2_pt");
HAnimSite103->setDEF("hanim_r_digit2_pt");
HAnimSite103->setTranslation(new float[3]{-0.0883,0.0134,0.1383});
HAnimSegment100->addChildren(*HAnimSite103);

HAnimJoint99->addChildren(*HAnimSegment100);

HAnimJoint96->addChildren(*HAnimJoint99);

HAnimJoint94->addChildren(*HAnimJoint96);

HAnimJoint88->addChildren(*HAnimJoint94);

HAnimJoint86->addChildren(*HAnimJoint88);

HAnimJoint81->addChildren(*HAnimJoint86);

HAnimJoint47->addChildren(*HAnimJoint81);

HAnimJoint45->addChildren(*HAnimJoint47);

CHAnimJoint* HAnimJoint104 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint104->setName("vl5");
HAnimJoint104->setDEF("hanim_vl5");
HAnimJoint104->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint104->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment105 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment105->setName("l5");
HAnimSegment105->setDEF("hanim_l5");
CHAnimSite* HAnimSite106 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite106->setName("waist_preferred_post_pt");
HAnimSite106->setDEF("hanim_waist_preferred_post_pt");
HAnimSite106->setTranslation(new float[3]{0,1.0915,-0.1091});
HAnimSegment105->addChildren(*HAnimSite106);

CHAnimSite* HAnimSite107 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite107->setName("navel_pt");
HAnimSite107->setDEF("hanim_navel_pt");
HAnimSite107->setTranslation(new float[3]{0.0069,1.0966,0.1017});
HAnimSegment105->addChildren(*HAnimSite107);

HAnimJoint104->addChildren(*HAnimSegment105);

CHAnimJoint* HAnimJoint108 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint108->setName("vl4");
HAnimJoint108->setDEF("hanim_vl4");
HAnimJoint108->setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimJoint108->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment109 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment109->setName("l4");
HAnimSegment109->setDEF("hanim_l4");
HAnimJoint108->addChildren(*HAnimSegment109);

CHAnimJoint* HAnimJoint110 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint110->setName("vl3");
HAnimJoint110->setDEF("hanim_vl3");
HAnimJoint110->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint110->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment111 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment111->setName("l3");
HAnimSegment111->setDEF("hanim_l3");
HAnimJoint110->addChildren(*HAnimSegment111);

CHAnimJoint* HAnimJoint112 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint112->setName("vl2");
HAnimJoint112->setDEF("hanim_vl2");
HAnimJoint112->setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimJoint112->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment113 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment113->setName("l2");
HAnimSegment113->setDEF("hanim_l2");
CHAnimSite* HAnimSite114 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite114->setName("r_rib10_pt");
HAnimSite114->setDEF("hanim_r_rib10_pt");
HAnimSite114->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
HAnimSegment113->addChildren(*HAnimSite114);

CHAnimSite* HAnimSite115 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite115->setName("l_rib10_pt");
HAnimSite115->setDEF("hanim_l_rib10_pt");
HAnimSite115->setTranslation(new float[3]{0.0871,1.1925,0.0992});
HAnimSegment113->addChildren(*HAnimSite115);

CHAnimSite* HAnimSite116 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite116->setName("rib10_midspine_pt");
HAnimSite116->setDEF("hanim_rib10_midspine_pt");
HAnimSite116->setTranslation(new float[3]{0.0049,1.1908,-0.1113});
HAnimSegment113->addChildren(*HAnimSite116);

HAnimJoint112->addChildren(*HAnimSegment113);

CHAnimJoint* HAnimJoint117 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint117->setName("vl1");
HAnimJoint117->setDEF("hanim_vl1");
HAnimJoint117->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint117->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment118 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment118->setName("l1");
HAnimSegment118->setDEF("hanim_l1");
HAnimJoint117->addChildren(*HAnimSegment118);

CHAnimJoint* HAnimJoint119 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint119->setName("vt12");
HAnimJoint119->setDEF("hanim_vt12");
HAnimJoint119->setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimJoint119->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment120 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment120->setName("t12");
HAnimSegment120->setDEF("hanim_t12");
HAnimJoint119->addChildren(*HAnimSegment120);

CHAnimJoint* HAnimJoint121 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint121->setName("vt11");
HAnimJoint121->setDEF("hanim_vt11");
HAnimJoint121->setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimJoint121->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment122 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment122->setName("t11");
HAnimSegment122->setDEF("hanim_t11");
HAnimJoint121->addChildren(*HAnimSegment122);

CHAnimJoint* HAnimJoint123 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint123->setName("vt10");
HAnimJoint123->setDEF("hanim_vt10");
HAnimJoint123->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint123->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment124 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment124->setName("t10");
HAnimSegment124->setDEF("hanim_t10");
CHAnimSite* HAnimSite125 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite125->setName("substernale_pt");
HAnimSite125->setDEF("hanim_substernale_pt");
HAnimSite125->setTranslation(new float[3]{0.0085,1.2995,0.1147});
HAnimSegment124->addChildren(*HAnimSite125);

HAnimJoint123->addChildren(*HAnimSegment124);

CHAnimJoint* HAnimJoint126 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint126->setName("vt9");
HAnimJoint126->setDEF("hanim_vt9");
HAnimJoint126->setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimJoint126->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment127 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment127->setName("t9");
HAnimSegment127->setDEF("hanim_t9");
CHAnimSite* HAnimSite128 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite128->setName("r_thelion_pt");
HAnimSite128->setDEF("hanim_r_thelion_pt");
HAnimSite128->setTranslation(new float[3]{-0.0736,1.3385,0.1217});
HAnimSegment127->addChildren(*HAnimSite128);

CHAnimSite* HAnimSite129 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite129->setName("l_thelion_pt");
HAnimSite129->setDEF("hanim_l_thelion_pt");
HAnimSite129->setTranslation(new float[3]{0.0918,1.3382,0.1192});
HAnimSegment127->addChildren(*HAnimSite129);

HAnimJoint126->addChildren(*HAnimSegment127);

CHAnimJoint* HAnimJoint130 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint130->setName("vt8");
HAnimJoint130->setDEF("hanim_vt8");
HAnimJoint130->setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimJoint130->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment131 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment131->setName("t8");
HAnimSegment131->setDEF("hanim_t8");
HAnimJoint130->addChildren(*HAnimSegment131);

CHAnimJoint* HAnimJoint132 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint132->setName("vt7");
HAnimJoint132->setDEF("hanim_vt7");
HAnimJoint132->setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimJoint132->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment133 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment133->setName("t7");
HAnimSegment133->setDEF("hanim_t7");
HAnimJoint132->addChildren(*HAnimSegment133);

CHAnimJoint* HAnimJoint134 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint134->setName("vt6");
HAnimJoint134->setDEF("hanim_vt6");
HAnimJoint134->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint134->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment135 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment135->setName("t6");
HAnimSegment135->setDEF("hanim_t6");
HAnimJoint134->addChildren(*HAnimSegment135);

CHAnimJoint* HAnimJoint136 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint136->setName("vt5");
HAnimJoint136->setDEF("hanim_vt5");
HAnimJoint136->setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimJoint136->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment137 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment137->setName("t5");
HAnimSegment137->setDEF("hanim_t5");
HAnimJoint136->addChildren(*HAnimSegment137);

CHAnimJoint* HAnimJoint138 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint138->setName("vt4");
HAnimJoint138->setDEF("hanim_vt4");
HAnimJoint138->setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimJoint138->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment139 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment139->setName("t4");
HAnimSegment139->setDEF("hanim_t4");
HAnimJoint138->addChildren(*HAnimSegment139);

CHAnimJoint* HAnimJoint140 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint140->setName("vt3");
HAnimJoint140->setDEF("hanim_vt3");
HAnimJoint140->setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimJoint140->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment141 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment141->setName("t3");
HAnimSegment141->setDEF("hanim_t3");
HAnimJoint140->addChildren(*HAnimSegment141);

CHAnimJoint* HAnimJoint142 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint142->setName("vt2");
HAnimJoint142->setDEF("hanim_vt2");
HAnimJoint142->setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimJoint142->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment143 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment143->setName("t2");
HAnimSegment143->setDEF("hanim_t2");
HAnimJoint142->addChildren(*HAnimSegment143);

CHAnimJoint* HAnimJoint144 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint144->setName("vt1");
HAnimJoint144->setDEF("hanim_vt1");
HAnimJoint144->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint144->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment145 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment145->setName("t1");
HAnimSegment145->setDEF("hanim_t1");
CHAnimSite* HAnimSite146 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite146->setName("suprasternale_pt");
HAnimSite146->setDEF("hanim_suprasternale_pt");
HAnimSite146->setTranslation(new float[3]{0.0084,1.4714,0.0551});
HAnimSegment145->addChildren(*HAnimSite146);

CHAnimSite* HAnimSite147 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite147->setName("cervicale_pt");
HAnimSite147->setDEF("hanim_cervicale_pt");
HAnimSite147->setTranslation(new float[3]{0.0064,1.52,-0.0815});
HAnimSegment145->addChildren(*HAnimSite147);

HAnimJoint144->addChildren(*HAnimSegment145);

CHAnimJoint* HAnimJoint148 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint148->setName("vc7");
HAnimJoint148->setDEF("hanim_vc7");
HAnimJoint148->setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimJoint148->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment149 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment149->setName("c7");
HAnimSegment149->setDEF("hanim_c7");
CHAnimSite* HAnimSite150 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite150->setName("r_neck_base_pt");
HAnimSite150->setDEF("hanim_r_neck_base_pt");
HAnimSite150->setTranslation(new float[3]{-0.0419,1.5149,-0.022});
HAnimSegment149->addChildren(*HAnimSite150);

CHAnimSite* HAnimSite151 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite151->setName("l_neck_base_pt");
HAnimSite151->setDEF("hanim_l_neck_base_pt");
HAnimSite151->setTranslation(new float[3]{0.0646,1.5141,-0.038});
HAnimSegment149->addChildren(*HAnimSite151);

HAnimJoint148->addChildren(*HAnimSegment149);

CHAnimJoint* HAnimJoint152 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint152->setName("vc6");
HAnimJoint152->setDEF("hanim_vc6");
HAnimJoint152->setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimJoint152->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment153 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment153->setName("c6");
HAnimSegment153->setDEF("hanim_c6");
HAnimJoint152->addChildren(*HAnimSegment153);

CHAnimJoint* HAnimJoint154 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint154->setName("vc5");
HAnimJoint154->setDEF("hanim_vc5");
HAnimJoint154->setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimJoint154->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment155 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment155->setName("c5");
HAnimSegment155->setDEF("hanim_c5");
HAnimJoint154->addChildren(*HAnimSegment155);

CHAnimJoint* HAnimJoint156 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint156->setName("vc4");
HAnimJoint156->setDEF("hanim_vc4");
HAnimJoint156->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint156->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment157 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment157->setName("c4");
HAnimSegment157->setDEF("hanim_c4");
HAnimJoint156->addChildren(*HAnimSegment157);

CHAnimJoint* HAnimJoint158 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint158->setName("vc3");
HAnimJoint158->setDEF("hanim_vc3");
HAnimJoint158->setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimJoint158->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment159 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment159->setName("c3");
HAnimSegment159->setDEF("hanim_c3");
HAnimJoint158->addChildren(*HAnimSegment159);

CHAnimJoint* HAnimJoint160 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint160->setName("vc2");
HAnimJoint160->setDEF("hanim_vc2");
HAnimJoint160->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint160->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment161 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment161->setName("c2");
HAnimSegment161->setDEF("hanim_c2");
HAnimJoint160->addChildren(*HAnimSegment161);

CHAnimJoint* HAnimJoint162 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint162->setName("vc1");
HAnimJoint162->setDEF("hanim_vc1");
HAnimJoint162->setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimJoint162->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment163 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment163->setName("c1");
HAnimSegment163->setDEF("hanim_c1");
HAnimJoint162->addChildren(*HAnimSegment163);

CHAnimJoint* HAnimJoint164 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint164->setName("skullbase");
HAnimJoint164->setDEF("hanim_skullbase");
HAnimJoint164->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint164->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment165 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment165->setName("skull");
HAnimSegment165->setDEF("hanim_skull");
CHAnimSite* HAnimSite166 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite166->setName("skull_tip");
HAnimSite166->setDEF("hanim_skull_tip");
HAnimSite166->setTranslation(new float[3]{0.005,1.7504,0.0055});
//TODO move skull_tip x to zero, check others for symmetry
HAnimSegment165->addChildren(*HAnimSite166);

CHAnimSite* HAnimSite167 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite167->setName("sellion_pt");
HAnimSite167->setDEF("hanim_sellion_pt");
HAnimSite167->setTranslation(new float[3]{0.0058,1.6316,0.0852});
HAnimSegment165->addChildren(*HAnimSite167);

CHAnimSite* HAnimSite168 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite168->setName("r_infraorbitale_pt");
HAnimSite168->setDEF("hanim_r_infraorbitale_pt");
HAnimSite168->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
HAnimSegment165->addChildren(*HAnimSite168);

CHAnimSite* HAnimSite169 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite169->setName("l_infraorbitale_pt");
HAnimSite169->setDEF("hanim_l_infraorbitale_pt");
HAnimSite169->setTranslation(new float[3]{0.0341,1.6171,0.0752});
HAnimSegment165->addChildren(*HAnimSite169);

CHAnimSite* HAnimSite170 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite170->setName("supramenton_pt");
HAnimSite170->setDEF("hanim_supramenton_pt");
HAnimSite170->setTranslation(new float[3]{0.0061,1.541,0.0805});
HAnimSegment165->addChildren(*HAnimSite170);

CHAnimSite* HAnimSite171 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite171->setName("r_tragion_pt");
HAnimSite171->setDEF("hanim_r_tragion_pt");
HAnimSite171->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
HAnimSegment165->addChildren(*HAnimSite171);

CHAnimSite* HAnimSite172 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite172->setName("r_gonion_pt");
HAnimSite172->setDEF("hanim_r_gonion_pt");
HAnimSite172->setTranslation(new float[3]{-0.052,1.5529,0.0347});
HAnimSegment165->addChildren(*HAnimSite172);

CHAnimSite* HAnimSite173 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite173->setName("l_tragion_pt");
HAnimSite173->setDEF("hanim_l_tragion_pt");
HAnimSite173->setTranslation(new float[3]{0.0739,1.6348,0.0282});
HAnimSegment165->addChildren(*HAnimSite173);

CHAnimSite* HAnimSite174 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite174->setName("l_gonion_pt");
HAnimSite174->setDEF("hanim_l_gonion_pt");
HAnimSite174->setTranslation(new float[3]{0.0631,1.553,0.033});
HAnimSegment165->addChildren(*HAnimSite174);

CHAnimSite* HAnimSite175 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite175->setName("nuchale_pt");
HAnimSite175->setDEF("hanim_nuchale_pt");
HAnimSite175->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
HAnimSegment165->addChildren(*HAnimSite175);

HAnimJoint164->addChildren(*HAnimSegment165);

CHAnimJoint* HAnimJoint176 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint176->setName("l_eyeball_joint");
HAnimJoint176->setDEF("hanim_l_eyeball_joint");
HAnimJoint176->setCenter(new float[3]{0.0336,1.6332,0.0502});
HAnimJoint176->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment177 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment177->setName("l_eyeball");
HAnimSegment177->setDEF("hanim_l_eyeball");
CHAnimSite* HAnimSite178 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite178->setName("l_eyeball_site_view");
HAnimSite178->setDEF("hanim_l_eyeball_site_view");
HAnimSite178->setTranslation(new float[3]{0.034,1.64,0.05});
CViewpoint* Viewpoint179 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint179->setDEF("hanim_l_eyeball_site_viewpoint");
Viewpoint179->setDescription("l_eyeball_site_viewpoint looking forward");
Viewpoint179->setOrientation(new float[4]{0,1,0,3.141593});
Viewpoint179->setPosition(new float[3]{0,0,0});
HAnimSite178->addChildren(*Viewpoint179);

HAnimSegment177->addChildren(*HAnimSite178);

HAnimJoint176->addChildren(*HAnimSegment177);

HAnimJoint164->addChildren(*HAnimJoint176);

CHAnimJoint* HAnimJoint180 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint180->setName("l_eyelid_joint");
HAnimJoint180->setDEF("hanim_l_eyelid_joint");
HAnimJoint180->setCenter(new float[3]{0.0336,1.6332,0.0502});
HAnimJoint180->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment181 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment181->setName("l_eyelid");
HAnimSegment181->setDEF("hanim_l_eyelid");
HAnimJoint180->addChildren(*HAnimSegment181);

HAnimJoint164->addChildren(*HAnimJoint180);

CHAnimJoint* HAnimJoint182 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint182->setName("l_eyebrow_joint");
HAnimJoint182->setDEF("hanim_l_eyebrow_joint");
HAnimJoint182->setCenter(new float[3]{0.0336,1.635,0.0506});
HAnimJoint182->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment183 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment183->setName("l_eyebrow");
HAnimSegment183->setDEF("hanim_l_eyebrow");
HAnimJoint182->addChildren(*HAnimSegment183);

HAnimJoint164->addChildren(*HAnimJoint182);

CHAnimJoint* HAnimJoint184 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint184->setName("r_eyeball_joint");
HAnimJoint184->setDEF("hanim_r_eyeball_joint");
HAnimJoint184->setCenter(new float[3]{-0.0336,1.6332,0.0502});
HAnimJoint184->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment185 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment185->setName("r_eyeball");
HAnimSegment185->setDEF("hanim_r_eyeball");
CHAnimSite* HAnimSite186 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite186->setName("r_eyeball_site_view");
HAnimSite186->setDEF("hanim_r_eyeball_site_view");
HAnimSite186->setTranslation(new float[3]{-0.034,1.64,0.05});
CViewpoint* Viewpoint187 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint187->setDEF("hanim_r_eyeball_site_viewpoint");
Viewpoint187->setDescription("r_eyeball_site_viewpoint looking forward");
Viewpoint187->setOrientation(new float[4]{0,1,0,3.141593});
Viewpoint187->setPosition(new float[3]{0,0,0});
HAnimSite186->addChildren(*Viewpoint187);

HAnimSegment185->addChildren(*HAnimSite186);

HAnimJoint184->addChildren(*HAnimSegment185);

HAnimJoint164->addChildren(*HAnimJoint184);

CHAnimJoint* HAnimJoint188 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint188->setName("r_eyelid_joint");
HAnimJoint188->setDEF("hanim_r_eyelid_joint");
HAnimJoint188->setCenter(new float[3]{-0.0336,1.6332,0.0502});
HAnimJoint188->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment189 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment189->setName("r_eyelid");
HAnimSegment189->setDEF("hanim_r_eyelid");
HAnimJoint188->addChildren(*HAnimSegment189);

HAnimJoint164->addChildren(*HAnimJoint188);

CHAnimJoint* HAnimJoint190 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint190->setName("r_eyebrow_joint");
HAnimJoint190->setDEF("hanim_r_eyebrow_joint");
HAnimJoint190->setCenter(new float[3]{-0.0336,1.635,0.0506});
HAnimJoint190->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment191 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment191->setName("r_eyebrow");
HAnimSegment191->setDEF("hanim_r_eyebrow");
HAnimJoint190->addChildren(*HAnimSegment191);

HAnimJoint164->addChildren(*HAnimJoint190);

CHAnimJoint* HAnimJoint192 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint192->setName("temporomandibular");
HAnimJoint192->setDEF("hanim_temporomandibular");
HAnimJoint192->setCenter(new float[3]{0,1.63,0.015});
HAnimJoint192->setStiffness(new float[3]{0,0,0});
//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
CHAnimSegment* HAnimSegment193 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment193->setName("jaw");
HAnimSegment193->setDEF("hanim_jaw");
CHAnimSite* HAnimSite194 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite194->setName("temporomandibular_l_site_pt");
HAnimSite194->setDEF("hanim_temporomandibular_l_site_pt");
HAnimSite194->setTranslation(new float[3]{0.045,1.63,0});
HAnimSegment193->addChildren(*HAnimSite194);

CHAnimSite* HAnimSite195 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite195->setName("temporomandibular_r_site_pt");
HAnimSite195->setDEF("hanim_temporomandibular_r_site_pt");
HAnimSite195->setTranslation(new float[3]{-0.045,1.63,0});
HAnimSegment193->addChildren(*HAnimSite195);

HAnimJoint192->addChildren(*HAnimSegment193);

HAnimJoint164->addChildren(*HAnimJoint192);

HAnimJoint162->addChildren(*HAnimJoint164);

HAnimJoint160->addChildren(*HAnimJoint162);

HAnimJoint158->addChildren(*HAnimJoint160);

HAnimJoint156->addChildren(*HAnimJoint158);

HAnimJoint154->addChildren(*HAnimJoint156);

HAnimJoint152->addChildren(*HAnimJoint154);

HAnimJoint148->addChildren(*HAnimJoint152);

HAnimJoint144->addChildren(*HAnimJoint148);

CHAnimJoint* HAnimJoint196 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint196->setName("l_sternoclavicular");
HAnimJoint196->setDEF("hanim_l_sternoclavicular");
HAnimJoint196->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint196->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment197 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment197->setName("l_clavicle");
HAnimSegment197->setDEF("hanim_l_clavicle");
CHAnimSite* HAnimSite198 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite198->setName("l_clavicale_pt");
HAnimSite198->setDEF("hanim_l_clavicale_pt");
HAnimSite198->setTranslation(new float[3]{0.0271,1.4943,0.0394});
HAnimSegment197->addChildren(*HAnimSite198);

CHAnimSite* HAnimSite199 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite199->setName("l_acromion_pt");
HAnimSite199->setDEF("hanim_l_acromion_pt");
HAnimSite199->setTranslation(new float[3]{0.2032,1.476,-0.049});
HAnimSegment197->addChildren(*HAnimSite199);

CHAnimSite* HAnimSite200 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite200->setName("l_axilla_ant_pt");
HAnimSite200->setDEF("hanim_l_axilla_ant_pt");
HAnimSite200->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
HAnimSegment197->addChildren(*HAnimSite200);

CHAnimSite* HAnimSite201 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite201->setName("l_axilla_post_pt");
HAnimSite201->setDEF("hanim_l_axilla_post_pt");
HAnimSite201->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
HAnimSegment197->addChildren(*HAnimSite201);

HAnimJoint196->addChildren(*HAnimSegment197);

CHAnimJoint* HAnimJoint202 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint202->setName("l_acromioclavicular");
HAnimJoint202->setDEF("hanim_l_acromioclavicular");
HAnimJoint202->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint202->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment203 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment203->setName("l_scapula");
HAnimSegment203->setDEF("hanim_l_scapula");
HAnimJoint202->addChildren(*HAnimSegment203);

CHAnimJoint* HAnimJoint204 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint204->setName("l_shoulder");
HAnimJoint204->setDEF("hanim_l_shoulder");
HAnimJoint204->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint204->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment205 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment205->setName("l_upperarm");
HAnimSegment205->setDEF("hanim_l_upperarm");
CHAnimSite* HAnimSite206 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite206->setName("l_humeral_lateral_epicn_pt");
HAnimSite206->setDEF("hanim_l_humeral_lateral_epicn_pt");
HAnimSite206->setTranslation(new float[3]{0.228,1.1482,-0.11});
HAnimSegment205->addChildren(*HAnimSite206);

HAnimJoint204->addChildren(*HAnimSegment205);

CHAnimJoint* HAnimJoint207 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint207->setName("l_elbow");
HAnimJoint207->setDEF("hanim_l_elbow");
HAnimJoint207->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint207->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment208 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment208->setName("l_forearm");
HAnimSegment208->setDEF("hanim_l_forearm");
CHAnimSite* HAnimSite209 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite209->setName("l_radial_styloid_pt");
HAnimSite209->setDEF("hanim_l_radial_styloid_pt");
HAnimSite209->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
HAnimSegment208->addChildren(*HAnimSite209);

CHAnimSite* HAnimSite210 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite210->setName("l_olecranon_pt");
HAnimSite210->setDEF("hanim_l_olecranon_pt");
HAnimSite210->setTranslation(new float[3]{0.1962,1.1375,-0.1123});
HAnimSegment208->addChildren(*HAnimSite210);

CHAnimSite* HAnimSite211 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite211->setName("l_humeral_medial_epicn_pt");
HAnimSite211->setDEF("hanim_l_humeral_medial_epicn_pt");
HAnimSite211->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
HAnimSegment208->addChildren(*HAnimSite211);

CHAnimSite* HAnimSite212 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite212->setName("l_radiale_pt");
HAnimSite212->setDEF("hanim_l_radiale_pt");
HAnimSite212->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
HAnimSegment208->addChildren(*HAnimSite212);

HAnimJoint207->addChildren(*HAnimSegment208);

CHAnimJoint* HAnimJoint213 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint213->setName("l_wrist");
HAnimJoint213->setDEF("hanim_l_wrist");
HAnimJoint213->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint213->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment214 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment214->setName("l_hand");
HAnimSegment214->setDEF("hanim_l_hand");
CHAnimSite* HAnimSite215 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite215->setName("l_metacarpal_pha2_pt");
HAnimSite215->setDEF("hanim_l_metacarpal_pha2_pt");
HAnimSite215->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
HAnimSegment214->addChildren(*HAnimSite215);

CHAnimSite* HAnimSite216 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite216->setName("l_ulnar_styloid_pt");
HAnimSite216->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite216->setTranslation(new float[3]{0.2142,0.8529,-0.0648});
HAnimSegment214->addChildren(*HAnimSite216);

CHAnimSite* HAnimSite217 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite217->setName("l_metacarpal_pha5_pt");
HAnimSite217->setDEF("hanim_l_metacarpal_pha5_pt");
HAnimSite217->setTranslation(new float[3]{0.1929,0.786,-0.1122});
HAnimSegment214->addChildren(*HAnimSite217);

CHAnimSite* HAnimSite218 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite218->setName("l_hand_front_view");
HAnimSite218->setDEF("hanim_l_hand_front_view");
HAnimSite218->setTranslation(new float[3]{0.3,0.75,0.45});
CViewpoint* Viewpoint219 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint219->setDEF("hanim_l_hand_front_viewpoint");
Viewpoint219->setCenterOfRotation(new float[3]{0,0.7,0});
Viewpoint219->setDescription("left hand front");
Viewpoint219->setPosition(new float[3]{0,0,0});
HAnimSite218->addChildren(*Viewpoint219);

HAnimSegment214->addChildren(*HAnimSite218);

HAnimJoint213->addChildren(*HAnimSegment214);

CHAnimJoint* HAnimJoint220 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint220->setName("l_thumb1");
HAnimJoint220->setDEF("hanim_l_thumb1");
HAnimJoint220->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint220->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment221 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment221->setName("l_thumb_metacarpal");
HAnimSegment221->setDEF("hanim_l_thumb_metacarpal");
HAnimJoint220->addChildren(*HAnimSegment221);

CHAnimJoint* HAnimJoint222 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint222->setName("l_thumb2");
HAnimJoint222->setDEF("hanim_l_thumb2");
HAnimJoint222->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint222->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment223 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment223->setName("l_thumb_proximal");
HAnimSegment223->setDEF("hanim_l_thumb_proximal");
HAnimJoint222->addChildren(*HAnimSegment223);

CHAnimJoint* HAnimJoint224 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint224->setName("l_thumb3");
HAnimJoint224->setDEF("hanim_l_thumb3");
HAnimJoint224->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint224->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment225 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment225->setName("l_thumb_distal");
HAnimSegment225->setDEF("hanim_l_thumb_distal");
CHAnimSite* HAnimSite226 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite226->setName("l_thumb_distal_tip");
HAnimSite226->setDEF("hanim_l_thumb_distal_tip");
HAnimSite226->setTranslation(new float[3]{0.1982,0.8061,0.0759});
HAnimSegment225->addChildren(*HAnimSite226);

HAnimJoint224->addChildren(*HAnimSegment225);

HAnimJoint222->addChildren(*HAnimJoint224);

HAnimJoint220->addChildren(*HAnimJoint222);

HAnimJoint213->addChildren(*HAnimJoint220);

CHAnimJoint* HAnimJoint227 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint227->setName("l_index0");
HAnimJoint227->setDEF("hanim_l_index0");
HAnimJoint227->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint227->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment228 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment228->setName("l_index_metacarpal");
HAnimSegment228->setDEF("hanim_l_index_metacarpal");
HAnimJoint227->addChildren(*HAnimSegment228);

CHAnimJoint* HAnimJoint229 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint229->setName("l_index1");
HAnimJoint229->setDEF("hanim_l_index1");
HAnimJoint229->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint229->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment230 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment230->setName("l_index_proximal");
HAnimSegment230->setDEF("hanim_l_index_proximal");
HAnimJoint229->addChildren(*HAnimSegment230);

CHAnimJoint* HAnimJoint231 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint231->setName("l_index2");
HAnimJoint231->setDEF("hanim_l_index2");
HAnimJoint231->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint231->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment232 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment232->setName("l_index_middle");
HAnimSegment232->setDEF("hanim_l_index_middle");
HAnimJoint231->addChildren(*HAnimSegment232);

CHAnimJoint* HAnimJoint233 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint233->setName("l_index3");
HAnimJoint233->setDEF("hanim_l_index3");
HAnimJoint233->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint233->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment234 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment234->setName("l_index_distal");
HAnimSegment234->setDEF("hanim_l_index_distal");
CHAnimSite* HAnimSite235 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite235->setName("l_index_distal_tip");
HAnimSite235->setDEF("hanim_l_index_distal_tip");
HAnimSite235->setTranslation(new float[3]{0.2089,0.6858,-0.0245});
HAnimSegment234->addChildren(*HAnimSite235);

CHAnimSite* HAnimSite236 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite236->setName("l_dactylion_pt");
HAnimSite236->setDEF("hanim_l_dactylion_pt");
HAnimSite236->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
HAnimSegment234->addChildren(*HAnimSite236);

HAnimJoint233->addChildren(*HAnimSegment234);

HAnimJoint231->addChildren(*HAnimJoint233);

HAnimJoint229->addChildren(*HAnimJoint231);

HAnimJoint227->addChildren(*HAnimJoint229);

HAnimJoint213->addChildren(*HAnimJoint227);

CHAnimJoint* HAnimJoint237 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint237->setName("l_middle0");
HAnimJoint237->setDEF("hanim_l_middle0");
HAnimJoint237->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint237->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment238 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment238->setName("l_middle_metacarpal");
HAnimSegment238->setDEF("hanim_l_middle_metacarpal");
HAnimJoint237->addChildren(*HAnimSegment238);

CHAnimJoint* HAnimJoint239 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint239->setName("l_middle1");
HAnimJoint239->setDEF("hanim_l_middle1");
HAnimJoint239->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint239->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment240 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment240->setName("l_middle_proximal");
HAnimSegment240->setDEF("hanim_l_middle_proximal");
HAnimJoint239->addChildren(*HAnimSegment240);

CHAnimJoint* HAnimJoint241 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint241->setName("l_middle2");
HAnimJoint241->setDEF("hanim_l_middle2");
HAnimJoint241->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint241->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment242 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment242->setName("l_middle_middle");
HAnimSegment242->setDEF("hanim_l_middle_middle");
HAnimJoint241->addChildren(*HAnimSegment242);

CHAnimJoint* HAnimJoint243 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint243->setName("l_middle3");
HAnimJoint243->setDEF("hanim_l_middle3");
HAnimJoint243->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint243->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment244 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment244->setName("l_middle_distal");
HAnimSegment244->setDEF("hanim_l_middle_distal");
CHAnimSite* HAnimSite245 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite245->setName("l_middle_distal_tip");
HAnimSite245->setDEF("hanim_l_middle_distal_tip");
HAnimSite245->setTranslation(new float[3]{0.208,0.6731,-0.0491});
HAnimSegment244->addChildren(*HAnimSite245);

HAnimJoint243->addChildren(*HAnimSegment244);

HAnimJoint241->addChildren(*HAnimJoint243);

HAnimJoint239->addChildren(*HAnimJoint241);

HAnimJoint237->addChildren(*HAnimJoint239);

HAnimJoint213->addChildren(*HAnimJoint237);

CHAnimJoint* HAnimJoint246 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint246->setName("l_ring0");
HAnimJoint246->setDEF("hanim_l_ring0");
HAnimJoint246->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint246->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment247 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment247->setName("l_ring_metacarpal");
HAnimSegment247->setDEF("hanim_l_ring_metacarpal");
HAnimJoint246->addChildren(*HAnimSegment247);

CHAnimJoint* HAnimJoint248 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint248->setName("l_ring1");
HAnimJoint248->setDEF("hanim_l_ring1");
HAnimJoint248->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint248->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment249 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment249->setName("l_ring_proximal");
HAnimSegment249->setDEF("hanim_l_ring_proximal");
HAnimJoint248->addChildren(*HAnimSegment249);

CHAnimJoint* HAnimJoint250 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint250->setName("l_ring2");
HAnimJoint250->setDEF("hanim_l_ring2");
HAnimJoint250->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint250->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment251 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment251->setName("l_ring_middle");
HAnimSegment251->setDEF("hanim_l_ring_middle");
HAnimJoint250->addChildren(*HAnimSegment251);

CHAnimJoint* HAnimJoint252 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint252->setName("l_ring3");
HAnimJoint252->setDEF("hanim_l_ring3");
HAnimJoint252->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint252->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment253 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment253->setName("l_ring_distal");
HAnimSegment253->setDEF("hanim_l_ring_distal");
CHAnimSite* HAnimSite254 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite254->setName("l_ring_distal_tip");
HAnimSite254->setDEF("hanim_l_ring_distal_tip");
HAnimSite254->setTranslation(new float[3]{0.2035,0.675,-0.0756});
HAnimSegment253->addChildren(*HAnimSite254);

HAnimJoint252->addChildren(*HAnimSegment253);

HAnimJoint250->addChildren(*HAnimJoint252);

HAnimJoint248->addChildren(*HAnimJoint250);

HAnimJoint246->addChildren(*HAnimJoint248);

HAnimJoint213->addChildren(*HAnimJoint246);

CHAnimJoint* HAnimJoint255 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint255->setName("l_pinky0");
HAnimJoint255->setDEF("hanim_l_pinky0");
HAnimJoint255->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint255->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment256 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment256->setName("l_pinky_metacarpal");
HAnimSegment256->setDEF("hanim_l_pinky_metacarpal");
HAnimJoint255->addChildren(*HAnimSegment256);

CHAnimJoint* HAnimJoint257 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint257->setName("l_pinky1");
HAnimJoint257->setDEF("hanim_l_pinky1");
HAnimJoint257->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint257->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment258 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment258->setName("l_pinky_proximal");
HAnimSegment258->setDEF("hanim_l_pinky_proximal");
HAnimJoint257->addChildren(*HAnimSegment258);

CHAnimJoint* HAnimJoint259 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint259->setName("l_pinky2");
HAnimJoint259->setDEF("hanim_l_pinky2");
HAnimJoint259->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint259->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment260 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment260->setName("l_pinky_middle");
HAnimSegment260->setDEF("hanim_l_pinky_middle");
HAnimJoint259->addChildren(*HAnimSegment260);

CHAnimJoint* HAnimJoint261 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint261->setName("l_pinky3");
HAnimJoint261->setDEF("hanim_l_pinky3");
HAnimJoint261->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint261->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment262 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment262->setName("l_pinky_distal");
HAnimSegment262->setDEF("hanim_l_pinky_distal");
CHAnimSite* HAnimSite263 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite263->setName("l_pinky_distal_tip");
HAnimSite263->setDEF("hanim_l_pinky_distal_tip");
HAnimSite263->setTranslation(new float[3]{0.2014,0.7009,-0.1012});
HAnimSegment262->addChildren(*HAnimSite263);

HAnimJoint261->addChildren(*HAnimSegment262);

HAnimJoint259->addChildren(*HAnimJoint261);

HAnimJoint257->addChildren(*HAnimJoint259);

HAnimJoint255->addChildren(*HAnimJoint257);

HAnimJoint213->addChildren(*HAnimJoint255);

HAnimJoint207->addChildren(*HAnimJoint213);

HAnimJoint204->addChildren(*HAnimJoint207);

HAnimJoint202->addChildren(*HAnimJoint204);

HAnimJoint196->addChildren(*HAnimJoint202);

HAnimJoint144->addChildren(*HAnimJoint196);

CHAnimJoint* HAnimJoint264 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint264->setName("r_sternoclavicular");
HAnimJoint264->setDEF("hanim_r_sternoclavicular");
HAnimJoint264->setCenter(new float[3]{-0.082,1.4488,-0.0353});
HAnimJoint264->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment265 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment265->setName("r_clavicle");
HAnimSegment265->setDEF("hanim_r_clavicle");
CHAnimSite* HAnimSite266 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite266->setName("r_clavicale_pt");
HAnimSite266->setDEF("hanim_r_clavicale_pt");
HAnimSite266->setTranslation(new float[3]{-0.0115,1.4943,0.04});
HAnimSegment265->addChildren(*HAnimSite266);

CHAnimSite* HAnimSite267 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite267->setName("r_acromion_pt");
HAnimSite267->setDEF("hanim_r_acromion_pt");
HAnimSite267->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
HAnimSegment265->addChildren(*HAnimSite267);

CHAnimSite* HAnimSite268 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite268->setName("r_axilla_ant_pt");
HAnimSite268->setDEF("hanim_r_axilla_ant_pt");
HAnimSite268->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
HAnimSegment265->addChildren(*HAnimSite268);

CHAnimSite* HAnimSite269 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite269->setName("r_axilla_post_pt");
HAnimSite269->setDEF("hanim_r_axilla_post_pt");
HAnimSite269->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
HAnimSegment265->addChildren(*HAnimSite269);

HAnimJoint264->addChildren(*HAnimSegment265);

CHAnimJoint* HAnimJoint270 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint270->setName("r_acromioclavicular");
HAnimJoint270->setDEF("hanim_r_acromioclavicular");
HAnimJoint270->setCenter(new float[3]{-0.0962,1.4269,-0.0424});
HAnimJoint270->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment271 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment271->setName("r_scapula");
HAnimSegment271->setDEF("hanim_r_scapula");
HAnimJoint270->addChildren(*HAnimSegment271);

CHAnimJoint* HAnimJoint272 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint272->setName("r_shoulder");
HAnimJoint272->setDEF("hanim_r_shoulder");
HAnimJoint272->setCenter(new float[3]{-0.2029,1.4376,-0.0387});
HAnimJoint272->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment273 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment273->setName("r_upperarm");
HAnimSegment273->setDEF("hanim_r_upperarm");
CHAnimSite* HAnimSite274 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite274->setName("r_humeral_lateral_epicn_pt");
HAnimSite274->setDEF("hanim_r_humeral_lateral_epicn_pt");
HAnimSite274->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
HAnimSegment273->addChildren(*HAnimSite274);

HAnimJoint272->addChildren(*HAnimSegment273);

CHAnimJoint* HAnimJoint275 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint275->setName("r_elbow");
HAnimJoint275->setDEF("hanim_r_elbow");
HAnimJoint275->setCenter(new float[3]{-0.2014,1.1357,-0.0682});
HAnimJoint275->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment276 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment276->setName("r_forearm");
HAnimSegment276->setDEF("hanim_r_forearm");
CHAnimSite* HAnimSite277 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite277->setName("r_radial_styloid_pt");
HAnimSite277->setDEF("hanim_r_radial_styloid_pt");
HAnimSite277->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
HAnimSegment276->addChildren(*HAnimSite277);

CHAnimSite* HAnimSite278 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite278->setName("r_olecranon_pt");
HAnimSite278->setDEF("hanim_r_olecranon_pt");
HAnimSite278->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
HAnimSegment276->addChildren(*HAnimSite278);

CHAnimSite* HAnimSite279 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite279->setName("r_humeral_medial_epicn_pt");
HAnimSite279->setDEF("hanim_r_humeral_medial_epicn_pt");
HAnimSite279->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
HAnimSegment276->addChildren(*HAnimSite279);

CHAnimSite* HAnimSite280 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite280->setName("r_radiale_pt");
HAnimSite280->setDEF("hanim_r_radiale_pt");
HAnimSite280->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
HAnimSegment276->addChildren(*HAnimSite280);

HAnimJoint275->addChildren(*HAnimSegment276);

CHAnimJoint* HAnimJoint281 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint281->setName("r_wrist");
HAnimJoint281->setDEF("hanim_r_wrist");
HAnimJoint281->setCenter(new float[3]{-0.1984,0.8663,-0.0583});
HAnimJoint281->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment282 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment282->setName("r_hand");
HAnimSegment282->setDEF("hanim_r_hand");
CHAnimSite* HAnimSite283 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite283->setName("r_metacarpal_pha2_pt");
HAnimSite283->setDEF("hanim_r_metacarpal_pha2_pt");
HAnimSite283->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
HAnimSegment282->addChildren(*HAnimSite283);

CHAnimSite* HAnimSite284 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite284->setName("r_ulnar_styloid_pt");
HAnimSite284->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite284->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
HAnimSegment282->addChildren(*HAnimSite284);

CHAnimSite* HAnimSite285 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite285->setName("r_metacarpal_pha5_pt");
HAnimSite285->setDEF("hanim_r_metacarpal_pha5_pt");
HAnimSite285->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
HAnimSegment282->addChildren(*HAnimSite285);

CHAnimSite* HAnimSite286 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite286->setName("r_hand_front_view");
HAnimSite286->setDEF("hanim_r_hand_front_view");
HAnimSite286->setTranslation(new float[3]{-0.3,0.75,0.45});
CViewpoint* Viewpoint287 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint287->setDEF("hanim_r_hand_front_viewpoint");
Viewpoint287->setCenterOfRotation(new float[3]{0,0.7,0});
Viewpoint287->setDescription("right hand front");
Viewpoint287->setPosition(new float[3]{0,0,0});
HAnimSite286->addChildren(*Viewpoint287);

HAnimSegment282->addChildren(*HAnimSite286);

HAnimJoint281->addChildren(*HAnimSegment282);

CHAnimJoint* HAnimJoint288 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint288->setName("r_thumb1");
HAnimJoint288->setDEF("hanim_r_thumb1");
HAnimJoint288->setCenter(new float[3]{-0.1924,0.8472,-0.0534});
HAnimJoint288->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment289 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment289->setName("r_thumb_metacarpal");
HAnimSegment289->setDEF("hanim_r_thumb_metacarpal");
HAnimJoint288->addChildren(*HAnimSegment289);

CHAnimJoint* HAnimJoint290 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint290->setName("r_thumb2");
HAnimJoint290->setDEF("hanim_r_thumb2");
HAnimJoint290->setCenter(new float[3]{-0.1951,0.8226,0.0246});
HAnimJoint290->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment291 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment291->setName("r_thumb_proximal");
HAnimSegment291->setDEF("hanim_r_thumb_proximal");
HAnimJoint290->addChildren(*HAnimSegment291);

CHAnimJoint* HAnimJoint292 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint292->setName("r_thumb3");
HAnimJoint292->setDEF("hanim_r_thumb3");
HAnimJoint292->setCenter(new float[3]{-0.1955,0.8159,0.0464});
HAnimJoint292->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment293 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment293->setName("r_thumb_distal");
HAnimSegment293->setDEF("hanim_r_thumb_distal");
CHAnimSite* HAnimSite294 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite294->setName("r_thumb_distal_tip");
HAnimSite294->setDEF("hanim_r_thumb_distal_tip");
HAnimSite294->setTranslation(new float[3]{-0.1869,0.809,0.082});
HAnimSegment293->addChildren(*HAnimSite294);

HAnimJoint292->addChildren(*HAnimSegment293);

HAnimJoint290->addChildren(*HAnimJoint292);

HAnimJoint288->addChildren(*HAnimJoint290);

HAnimJoint281->addChildren(*HAnimJoint288);

CHAnimJoint* HAnimJoint295 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint295->setName("r_index0");
HAnimJoint295->setDEF("hanim_r_index0");
HAnimJoint295->setCenter(new float[3]{-0.1983,0.8024,-0.028});
HAnimJoint295->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment296 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment296->setName("r_index_metacarpal");
HAnimSegment296->setDEF("hanim_r_index_metacarpal");
HAnimJoint295->addChildren(*HAnimSegment296);

CHAnimJoint* HAnimJoint297 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint297->setName("r_index1");
HAnimJoint297->setDEF("hanim_r_index1");
HAnimJoint297->setCenter(new float[3]{-0.1983,0.7815,-0.028});
HAnimJoint297->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment298 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment298->setName("r_index_proximal");
HAnimSegment298->setDEF("hanim_r_index_proximal");
HAnimJoint297->addChildren(*HAnimSegment298);

CHAnimJoint* HAnimJoint299 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint299->setName("r_index2");
HAnimJoint299->setDEF("hanim_r_index2");
HAnimJoint299->setCenter(new float[3]{-0.2017,0.7363,-0.0248});
HAnimJoint299->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment300 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment300->setName("r_index_middle");
HAnimSegment300->setDEF("hanim_r_index_middle");
HAnimJoint299->addChildren(*HAnimSegment300);

CHAnimJoint* HAnimJoint301 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint301->setName("r_index3");
HAnimJoint301->setDEF("hanim_r_index3");
HAnimJoint301->setCenter(new float[3]{-0.2028,0.7139,-0.0236});
HAnimJoint301->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment302 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment302->setName("r_index_distal");
HAnimSegment302->setDEF("hanim_r_index_distal");
CHAnimSite* HAnimSite303 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite303->setName("r_index_distal_tip");
HAnimSite303->setDEF("hanim_r_index_distal_tip");
HAnimSite303->setTranslation(new float[3]{-0.198,0.6883,-0.018});
HAnimSegment302->addChildren(*HAnimSite303);

CHAnimSite* HAnimSite304 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite304->setName("r_dactylion_pt");
HAnimSite304->setDEF("hanim_r_dactylion_pt");
HAnimSite304->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
HAnimSegment302->addChildren(*HAnimSite304);

HAnimJoint301->addChildren(*HAnimSegment302);

HAnimJoint299->addChildren(*HAnimJoint301);

HAnimJoint297->addChildren(*HAnimJoint299);

HAnimJoint295->addChildren(*HAnimJoint297);

HAnimJoint281->addChildren(*HAnimJoint295);

CHAnimJoint* HAnimJoint305 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint305->setName("r_middle0");
HAnimJoint305->setDEF("hanim_r_middle0");
HAnimJoint305->setCenter(new float[3]{-0.1987,0.8029,-0.053});
HAnimJoint305->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment306 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment306->setName("r_middle_metacarpal");
HAnimSegment306->setDEF("hanim_r_middle_metacarpal");
HAnimJoint305->addChildren(*HAnimSegment306);

CHAnimJoint* HAnimJoint307 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint307->setName("r_middle1");
HAnimJoint307->setDEF("hanim_r_middle1");
HAnimJoint307->setCenter(new float[3]{-0.1987,0.7818,-0.053});
HAnimJoint307->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment308 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment308->setName("r_middle_proximal");
HAnimSegment308->setDEF("hanim_r_middle_proximal");
HAnimJoint307->addChildren(*HAnimSegment308);

CHAnimJoint* HAnimJoint309 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint309->setName("r_middle2");
HAnimJoint309->setDEF("hanim_r_middle2");
HAnimJoint309->setCenter(new float[3]{-0.2013,0.7273,-0.0503});
HAnimJoint309->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment310 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment310->setName("r_middle_middle");
HAnimSegment310->setDEF("hanim_r_middle_middle");
HAnimJoint309->addChildren(*HAnimSegment310);

CHAnimJoint* HAnimJoint311 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint311->setName("r_middle3");
HAnimJoint311->setDEF("hanim_r_middle3");
HAnimJoint311->setCenter(new float[3]{-0.2026,0.7011,-0.0494});
HAnimJoint311->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment312 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment312->setName("r_middle_distal");
HAnimSegment312->setDEF("hanim_r_middle_distal");
CHAnimSite* HAnimSite313 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite313->setName("r_middle_distal_tip");
HAnimSite313->setDEF("hanim_r_middle_distal_tip");
HAnimSite313->setTranslation(new float[3]{-0.1969,0.6758,-0.0427});
HAnimSegment312->addChildren(*HAnimSite313);

HAnimJoint311->addChildren(*HAnimSegment312);

HAnimJoint309->addChildren(*HAnimJoint311);

HAnimJoint307->addChildren(*HAnimJoint309);

HAnimJoint305->addChildren(*HAnimJoint307);

HAnimJoint281->addChildren(*HAnimJoint305);

CHAnimJoint* HAnimJoint314 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint314->setName("r_ring0");
HAnimJoint314->setDEF("hanim_r_ring0");
HAnimJoint314->setCenter(new float[3]{-0.1956,0.8019,-0.0794});
HAnimJoint314->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment315 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment315->setName("r_ring_metacarpal");
HAnimSegment315->setDEF("hanim_r_ring_metacarpal");
HAnimJoint314->addChildren(*HAnimSegment315);

CHAnimJoint* HAnimJoint316 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint316->setName("r_ring1");
HAnimJoint316->setDEF("hanim_r_ring1");
HAnimJoint316->setCenter(new float[3]{-0.1956,0.7815,-0.0794});
HAnimJoint316->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment317 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment317->setName("r_ring_proximal");
HAnimSegment317->setDEF("hanim_r_ring_proximal");
HAnimJoint316->addChildren(*HAnimSegment317);

CHAnimJoint* HAnimJoint318 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint318->setName("r_ring2");
HAnimJoint318->setDEF("hanim_r_ring2");
HAnimJoint318->setCenter(new float[3]{-0.1973,0.7287,-0.0777});
HAnimJoint318->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment319 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment319->setName("r_ring_middle");
HAnimSegment319->setDEF("hanim_r_ring_middle");
HAnimJoint318->addChildren(*HAnimSegment319);

CHAnimJoint* HAnimJoint320 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint320->setName("r_ring3");
HAnimJoint320->setDEF("hanim_r_ring3");
HAnimJoint320->setCenter(new float[3]{-0.1983,0.7045,-0.0767});
HAnimJoint320->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment321 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment321->setName("r_ring_distal");
HAnimSegment321->setDEF("hanim_r_ring_distal");
CHAnimSite* HAnimSite322 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite322->setName("r_ring_distal_tip");
HAnimSite322->setDEF("hanim_r_ring_distal_tip");
HAnimSite322->setTranslation(new float[3]{-0.1934,0.6778,-0.0693});
HAnimSegment321->addChildren(*HAnimSite322);

HAnimJoint320->addChildren(*HAnimSegment321);

HAnimJoint318->addChildren(*HAnimJoint320);

HAnimJoint316->addChildren(*HAnimJoint318);

HAnimJoint314->addChildren(*HAnimJoint316);

HAnimJoint281->addChildren(*HAnimJoint314);

CHAnimJoint* HAnimJoint323 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint323->setName("r_pinky0");
HAnimJoint323->setDEF("hanim_r_pinky0");
HAnimJoint323->setCenter(new float[3]{-0.1925,0.8066,-0.1036});
HAnimJoint323->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment324 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment324->setName("r_pinky_metacarpal");
HAnimSegment324->setDEF("hanim_r_pinky_metacarpal");
HAnimJoint323->addChildren(*HAnimSegment324);

CHAnimJoint* HAnimJoint325 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint325->setName("r_pinky1");
HAnimJoint325->setDEF("hanim_r_pinky1");
HAnimJoint325->setCenter(new float[3]{-0.1925,0.7866,-0.1036});
HAnimJoint325->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment326 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment326->setName("r_pinky_proximal");
HAnimSegment326->setDEF("hanim_r_pinky_proximal");
HAnimJoint325->addChildren(*HAnimSegment326);

CHAnimJoint* HAnimJoint327 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint327->setName("r_pinky2");
HAnimJoint327->setDEF("hanim_r_pinky2");
HAnimJoint327->setCenter(new float[3]{-0.1938,0.7452,-0.1024});
HAnimJoint327->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment328 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment328->setName("r_pinky_middle");
HAnimSegment328->setDEF("hanim_r_pinky_middle");
HAnimJoint327->addChildren(*HAnimSegment328);

CHAnimJoint* HAnimJoint329 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint329->setName("r_pinky3");
HAnimJoint329->setDEF("hanim_r_pinky3");
HAnimJoint329->setCenter(new float[3]{-0.1948,0.7277,-0.1017});
HAnimJoint329->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment330 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment330->setName("r_pinky_distal");
HAnimSegment330->setDEF("hanim_r_pinky_distal");
CHAnimSite* HAnimSite331 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite331->setName("r_pinky_distal_tip");
HAnimSite331->setDEF("hanim_r_pinky_distal_tip");
HAnimSite331->setTranslation(new float[3]{-0.1938,0.7035,-0.0949});
HAnimSegment330->addChildren(*HAnimSite331);

HAnimJoint329->addChildren(*HAnimSegment330);

HAnimJoint327->addChildren(*HAnimJoint329);

HAnimJoint325->addChildren(*HAnimJoint327);

HAnimJoint323->addChildren(*HAnimJoint325);

HAnimJoint281->addChildren(*HAnimJoint323);

HAnimJoint275->addChildren(*HAnimJoint281);

HAnimJoint272->addChildren(*HAnimJoint275);

HAnimJoint270->addChildren(*HAnimJoint272);

HAnimJoint264->addChildren(*HAnimJoint270);

HAnimJoint144->addChildren(*HAnimJoint264);

HAnimJoint142->addChildren(*HAnimJoint144);

HAnimJoint140->addChildren(*HAnimJoint142);

HAnimJoint138->addChildren(*HAnimJoint140);

HAnimJoint136->addChildren(*HAnimJoint138);

HAnimJoint134->addChildren(*HAnimJoint136);

HAnimJoint132->addChildren(*HAnimJoint134);

HAnimJoint130->addChildren(*HAnimJoint132);

HAnimJoint126->addChildren(*HAnimJoint130);

HAnimJoint123->addChildren(*HAnimJoint126);

HAnimJoint121->addChildren(*HAnimJoint123);

HAnimJoint119->addChildren(*HAnimJoint121);

HAnimJoint117->addChildren(*HAnimJoint119);

HAnimJoint112->addChildren(*HAnimJoint117);

HAnimJoint110->addChildren(*HAnimJoint112);

HAnimJoint108->addChildren(*HAnimJoint110);

HAnimJoint104->addChildren(*HAnimJoint108);

HAnimJoint45->addChildren(*HAnimJoint104);

HAnimHumanoid44->setSkeleton(*HAnimJoint45);

CHAnimSite* HAnimSite332 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite332->setName("l_inclined_view");
HAnimSite332->setDEF("hanim_l_inclined_view");
HAnimSite332->setRotation(new float[4]{-0.113,0.993,0.0347,0.671});
HAnimSite332->setTranslation(new float[3]{1.62,1.05,2.06});
CViewpoint* Viewpoint333 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint333->setDEF("hanim_l_inclined_viewpoint");
Viewpoint333->setDescription("left inclined");
Viewpoint333->setPosition(new float[3]{0,0,0});
HAnimSite332->addChildren(*Viewpoint333);

HAnimHumanoid44->addViewpoints(*HAnimSite332);

CHAnimSite* HAnimSite334 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite334->setName("r_inclined_view");
HAnimSite334->setDEF("hanim_r_inclined_view");
HAnimSite334->setRotation(new float[4]{-0.113,-0.993,0.0347,0.671});
HAnimSite334->setTranslation(new float[3]{-1.62,1.05,2.06});
CViewpoint* Viewpoint335 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint335->setDEF("hanim_r_inclined_viewpoint");
Viewpoint335->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint335->setDescription("right inclined");
Viewpoint335->setPosition(new float[3]{0,0,0});
HAnimSite334->addChildren(*Viewpoint335);

HAnimHumanoid44->addViewpoints(*HAnimSite334);

CHAnimSite* HAnimSite336 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite336->setName("front_view");
HAnimSite336->setDEF("hanim_front_view");
HAnimSite336->setTranslation(new float[3]{0,0.85,2.58});
CViewpoint* Viewpoint337 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint337->setDEF("hanim_front_viewpoint");
Viewpoint337->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint337->setDescription("front");
Viewpoint337->setPosition(new float[3]{0,0,0});
HAnimSite336->addChildren(*Viewpoint337);

HAnimHumanoid44->addViewpoints(*HAnimSite336);

CHAnimSite* HAnimSite338 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite338->setName("back_view");
HAnimSite338->setDEF("hanim_back_view");
HAnimSite338->setRotation(new float[4]{0,1,0,3.14});
HAnimSite338->setTranslation(new float[3]{0,0.85,-2.58});
CViewpoint* Viewpoint339 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint339->setDEF("hanim_back_viewpoint");
Viewpoint339->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint339->setDescription("back");
Viewpoint339->setPosition(new float[3]{0,0,0});
HAnimSite338->addChildren(*Viewpoint339);

HAnimHumanoid44->addViewpoints(*HAnimSite338);

CHAnimSite* HAnimSite340 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite340->setName("l_side_view");
HAnimSite340->setDEF("hanim_l_side_view");
HAnimSite340->setRotation(new float[4]{0,1,0,1.5708});
HAnimSite340->setTranslation(new float[3]{2.6,0.854,0});
CViewpoint* Viewpoint341 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint341->setDEF("hanim_l_side_viewpoint");
Viewpoint341->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint341->setDescription("left side");
Viewpoint341->setPosition(new float[3]{0,0,0});
HAnimSite340->addChildren(*Viewpoint341);

HAnimHumanoid44->addViewpoints(*HAnimSite340);

CHAnimSite* HAnimSite342 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite342->setName("Top_view");
HAnimSite342->setDEF("hanim_Top_view");
HAnimSite342->setRotation(new float[4]{1,0,0,-1.57});
HAnimSite342->setTranslation(new float[3]{0,3.5,0});
CViewpoint* Viewpoint343 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint343->setDEF("hanim_Top_viewpoint");
Viewpoint343->setCenterOfRotation(new float[3]{0,0.9,0});
Viewpoint343->setDescription("Top");
Viewpoint343->setPosition(new float[3]{0,0,0});
HAnimSite342->addChildren(*Viewpoint343);

HAnimHumanoid44->addViewpoints(*HAnimSite342);

CHAnimSite* HAnimSite344 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite344->setName("front_close_view");
HAnimSite344->setDEF("hanim_front_close_view");
HAnimSite344->setTranslation(new float[3]{0,0.854,1.575});
CViewpoint* Viewpoint345 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint345->setDEF("hanim_front_close_viewpoint");
Viewpoint345->setCenterOfRotation(new float[3]{0,0,1.575});
Viewpoint345->setDescription("front close");
Viewpoint345->setPosition(new float[3]{0,0,0});
HAnimSite344->addChildren(*Viewpoint345);

HAnimHumanoid44->addViewpoints(*HAnimSite344);

CHAnimSite* HAnimSite346 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite346->setName("side_close_view");
HAnimSite346->setDEF("hanim_side_close_view");
HAnimSite346->setRotation(new float[4]{0,1,0,1.5708});
HAnimSite346->setTranslation(new float[3]{1.56,0.854,0});
CViewpoint* Viewpoint347 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint347->setDEF("hanim_side_close_viewpoint");
Viewpoint347->setCenterOfRotation(new float[3]{1.6,0,0});
Viewpoint347->setDescription("side close");
Viewpoint347->setPosition(new float[3]{0,0,0});
HAnimSite346->addChildren(*Viewpoint347);

HAnimHumanoid44->addViewpoints(*HAnimSite346);

CHAnimSite* HAnimSite348 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite348->setName("head_front_close_view");
HAnimSite348->setDEF("hanim_head_front_close_view");
HAnimSite348->setTranslation(new float[3]{0,1.5,1});
CViewpoint* Viewpoint349 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint349->setDEF("hanim_head_front_close_viewpoint");
Viewpoint349->setCenterOfRotation(new float[3]{0,0,1});
Viewpoint349->setDescription("head front close");
Viewpoint349->setPosition(new float[3]{0,0,0});
HAnimSite348->addChildren(*Viewpoint349);

HAnimHumanoid44->addViewpoints(*HAnimSite348);

CHAnimSite* HAnimSite350 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite350->setName("chest_front_close_view");
HAnimSite350->setDEF("hanim_chest_front_close_view");
HAnimSite350->setTranslation(new float[3]{0,1.2,1});
CViewpoint* Viewpoint351 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint351->setDEF("hanim_chest_front_close_viewpoint");
Viewpoint351->setCenterOfRotation(new float[3]{0,0,1});
Viewpoint351->setDescription("chest front close");
Viewpoint351->setPosition(new float[3]{0,0,0});
HAnimSite350->addChildren(*Viewpoint351);

HAnimHumanoid44->addViewpoints(*HAnimSite350);

CHAnimSite* HAnimSite352 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite352->setName("pelvis_front_close_view");
HAnimSite352->setDEF("hanim_pelvis_front_close_view");
HAnimSite352->setTranslation(new float[3]{0,0.8,1});
CViewpoint* Viewpoint353 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint353->setDEF("hanim_pelvis_front_close_viewpoint");
Viewpoint353->setCenterOfRotation(new float[3]{0,0,1});
Viewpoint353->setDescription("pelvis front close");
Viewpoint353->setPosition(new float[3]{0,0,0});
HAnimSite352->addChildren(*Viewpoint353);

HAnimHumanoid44->addViewpoints(*HAnimSite352);

CHAnimSite* HAnimSite354 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite354->setName("knees_front_close_view");
HAnimSite354->setDEF("hanim_knees_front_close_view");
HAnimSite354->setTranslation(new float[3]{0,0.4,1});
CViewpoint* Viewpoint355 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint355->setDEF("hanim_knees_front_close_viewpoint");
Viewpoint355->setCenterOfRotation(new float[3]{0,0.4,0});
Viewpoint355->setDescription("knees front close");
Viewpoint355->setPosition(new float[3]{0,0,0});
HAnimSite354->addChildren(*Viewpoint355);

HAnimHumanoid44->addViewpoints(*HAnimSite354);

CHAnimSite* HAnimSite356 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite356->setName("feet_front_close_view");
HAnimSite356->setDEF("hanim_feet_front_close_view");
HAnimSite356->setTranslation(new float[3]{0,0,1});
CViewpoint* Viewpoint357 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint357->setDEF("hanim_feet_front_close_viewpoint");
Viewpoint357->setDescription("feet front close");
Viewpoint357->setPosition(new float[3]{0,0,0});
HAnimSite356->addChildren(*Viewpoint357);

HAnimHumanoid44->addViewpoints(*HAnimSite356);

CHAnimSite* HAnimSite358 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite358->setName("eye_level_view");
HAnimSite358->setDEF("hanim_eye_level_view");
HAnimSite358->setTranslation(new float[3]{0,1.6332,0.0502});
CViewpoint* Viewpoint359 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint359->setDEF("hanim_eye_level_viewpoint");
Viewpoint359->setDescription("eye level looking forward");
Viewpoint359->setOrientation(new float[4]{0,1,0,3.141593});
Viewpoint359->setPosition(new float[3]{0,0,0});
HAnimSite358->addChildren(*Viewpoint359);

HAnimHumanoid44->addViewpoints(*HAnimSite358);

CHAnimSite* HAnimSite360 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite360->setUSE("hanim_l_eyeball_site_view");
HAnimHumanoid44->setSites(*HAnimSite360);

CHAnimSite* HAnimSite361 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite361->setUSE("hanim_r_eyeball_site_view");
HAnimHumanoid44->setSites(*HAnimSite361);

CHAnimSite* HAnimSite362 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite362->setUSE("hanim_l_hand_front_view");
HAnimHumanoid44->setSites(*HAnimSite362);

CHAnimSite* HAnimSite363 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite363->setUSE("hanim_r_hand_front_view");
HAnimHumanoid44->setSites(*HAnimSite363);

CHAnimJoint* HAnimJoint364 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint364->setUSE("hanim_humanoid_root");
HAnimHumanoid44->addJoints(*HAnimJoint364);

CHAnimJoint* HAnimJoint365 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint365->setUSE("hanim_sacroiliac");
HAnimHumanoid44->addJoints(*HAnimJoint365);

CHAnimJoint* HAnimJoint366 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint366->setUSE("hanim_vl5");
HAnimHumanoid44->addJoints(*HAnimJoint366);

CHAnimJoint* HAnimJoint367 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint367->setUSE("hanim_vl4");
HAnimHumanoid44->addJoints(*HAnimJoint367);

CHAnimJoint* HAnimJoint368 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint368->setUSE("hanim_vl3");
HAnimHumanoid44->addJoints(*HAnimJoint368);

CHAnimJoint* HAnimJoint369 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint369->setUSE("hanim_vl2");
HAnimHumanoid44->addJoints(*HAnimJoint369);

CHAnimJoint* HAnimJoint370 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint370->setUSE("hanim_vl1");
HAnimHumanoid44->addJoints(*HAnimJoint370);

CHAnimJoint* HAnimJoint371 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint371->setUSE("hanim_vt12");
HAnimHumanoid44->addJoints(*HAnimJoint371);

CHAnimJoint* HAnimJoint372 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint372->setUSE("hanim_vt11");
HAnimHumanoid44->addJoints(*HAnimJoint372);

CHAnimJoint* HAnimJoint373 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint373->setUSE("hanim_vt10");
HAnimHumanoid44->addJoints(*HAnimJoint373);

CHAnimJoint* HAnimJoint374 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint374->setUSE("hanim_vt9");
HAnimHumanoid44->addJoints(*HAnimJoint374);

CHAnimJoint* HAnimJoint375 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint375->setUSE("hanim_vt8");
HAnimHumanoid44->addJoints(*HAnimJoint375);

CHAnimJoint* HAnimJoint376 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint376->setUSE("hanim_vt7");
HAnimHumanoid44->addJoints(*HAnimJoint376);

CHAnimJoint* HAnimJoint377 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint377->setUSE("hanim_vt6");
HAnimHumanoid44->addJoints(*HAnimJoint377);

CHAnimJoint* HAnimJoint378 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint378->setUSE("hanim_vt5");
HAnimHumanoid44->addJoints(*HAnimJoint378);

CHAnimJoint* HAnimJoint379 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint379->setUSE("hanim_vt4");
HAnimHumanoid44->addJoints(*HAnimJoint379);

CHAnimJoint* HAnimJoint380 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint380->setUSE("hanim_vt3");
HAnimHumanoid44->addJoints(*HAnimJoint380);

CHAnimJoint* HAnimJoint381 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint381->setUSE("hanim_vt2");
HAnimHumanoid44->addJoints(*HAnimJoint381);

CHAnimJoint* HAnimJoint382 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint382->setUSE("hanim_vt1");
HAnimHumanoid44->addJoints(*HAnimJoint382);

CHAnimJoint* HAnimJoint383 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint383->setUSE("hanim_vc7");
HAnimHumanoid44->addJoints(*HAnimJoint383);

CHAnimJoint* HAnimJoint384 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint384->setUSE("hanim_vc6");
HAnimHumanoid44->addJoints(*HAnimJoint384);

CHAnimJoint* HAnimJoint385 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint385->setUSE("hanim_vc5");
HAnimHumanoid44->addJoints(*HAnimJoint385);

CHAnimJoint* HAnimJoint386 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint386->setUSE("hanim_vc4");
HAnimHumanoid44->addJoints(*HAnimJoint386);

CHAnimJoint* HAnimJoint387 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint387->setUSE("hanim_vc3");
HAnimHumanoid44->addJoints(*HAnimJoint387);

CHAnimJoint* HAnimJoint388 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint388->setUSE("hanim_vc2");
HAnimHumanoid44->addJoints(*HAnimJoint388);

CHAnimJoint* HAnimJoint389 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint389->setUSE("hanim_vc1");
HAnimHumanoid44->addJoints(*HAnimJoint389);

CHAnimJoint* HAnimJoint390 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint390->setUSE("hanim_skullbase");
HAnimHumanoid44->addJoints(*HAnimJoint390);

CHAnimJoint* HAnimJoint391 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint391->setUSE("hanim_temporomandibular");
HAnimHumanoid44->addJoints(*HAnimJoint391);

CHAnimJoint* HAnimJoint392 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint392->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid44->addJoints(*HAnimJoint392);

CHAnimJoint* HAnimJoint393 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint393->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid44->addJoints(*HAnimJoint393);

CHAnimJoint* HAnimJoint394 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint394->setUSE("hanim_l_ankle");
HAnimHumanoid44->addJoints(*HAnimJoint394);

CHAnimJoint* HAnimJoint395 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint395->setUSE("hanim_r_ankle");
HAnimHumanoid44->addJoints(*HAnimJoint395);

CHAnimJoint* HAnimJoint396 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint396->setUSE("hanim_l_elbow");
HAnimHumanoid44->addJoints(*HAnimJoint396);

CHAnimJoint* HAnimJoint397 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint397->setUSE("hanim_r_elbow");
HAnimHumanoid44->addJoints(*HAnimJoint397);

CHAnimJoint* HAnimJoint398 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint398->setUSE("hanim_l_eyeball_joint");
HAnimHumanoid44->addJoints(*HAnimJoint398);

CHAnimJoint* HAnimJoint399 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint399->setUSE("hanim_r_eyeball_joint");
HAnimHumanoid44->addJoints(*HAnimJoint399);

CHAnimJoint* HAnimJoint400 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint400->setUSE("hanim_l_eyebrow_joint");
HAnimHumanoid44->addJoints(*HAnimJoint400);

CHAnimJoint* HAnimJoint401 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint401->setUSE("hanim_r_eyebrow_joint");
HAnimHumanoid44->addJoints(*HAnimJoint401);

CHAnimJoint* HAnimJoint402 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint402->setUSE("hanim_l_eyelid_joint");
HAnimHumanoid44->addJoints(*HAnimJoint402);

CHAnimJoint* HAnimJoint403 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint403->setUSE("hanim_r_eyelid_joint");
HAnimHumanoid44->addJoints(*HAnimJoint403);

CHAnimJoint* HAnimJoint404 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint404->setUSE("hanim_l_hip");
HAnimHumanoid44->addJoints(*HAnimJoint404);

CHAnimJoint* HAnimJoint405 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint405->setUSE("hanim_r_hip");
HAnimHumanoid44->addJoints(*HAnimJoint405);

CHAnimJoint* HAnimJoint406 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint406->setUSE("hanim_l_index0");
HAnimHumanoid44->addJoints(*HAnimJoint406);

CHAnimJoint* HAnimJoint407 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint407->setUSE("hanim_r_index0");
HAnimHumanoid44->addJoints(*HAnimJoint407);

CHAnimJoint* HAnimJoint408 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint408->setUSE("hanim_l_index1");
HAnimHumanoid44->addJoints(*HAnimJoint408);

CHAnimJoint* HAnimJoint409 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint409->setUSE("hanim_r_index1");
HAnimHumanoid44->addJoints(*HAnimJoint409);

CHAnimJoint* HAnimJoint410 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint410->setUSE("hanim_l_index2");
HAnimHumanoid44->addJoints(*HAnimJoint410);

CHAnimJoint* HAnimJoint411 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint411->setUSE("hanim_r_index2");
HAnimHumanoid44->addJoints(*HAnimJoint411);

CHAnimJoint* HAnimJoint412 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint412->setUSE("hanim_l_index3");
HAnimHumanoid44->addJoints(*HAnimJoint412);

CHAnimJoint* HAnimJoint413 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint413->setUSE("hanim_r_index3");
HAnimHumanoid44->addJoints(*HAnimJoint413);

CHAnimJoint* HAnimJoint414 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint414->setUSE("hanim_l_knee");
HAnimHumanoid44->addJoints(*HAnimJoint414);

CHAnimJoint* HAnimJoint415 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint415->setUSE("hanim_r_knee");
HAnimHumanoid44->addJoints(*HAnimJoint415);

CHAnimJoint* HAnimJoint416 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint416->setUSE("hanim_l_metatarsal");
HAnimHumanoid44->addJoints(*HAnimJoint416);

CHAnimJoint* HAnimJoint417 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint417->setUSE("hanim_r_metatarsal");
HAnimHumanoid44->addJoints(*HAnimJoint417);

CHAnimJoint* HAnimJoint418 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint418->setUSE("hanim_l_middle0");
HAnimHumanoid44->addJoints(*HAnimJoint418);

CHAnimJoint* HAnimJoint419 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint419->setUSE("hanim_r_middle0");
HAnimHumanoid44->addJoints(*HAnimJoint419);

CHAnimJoint* HAnimJoint420 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint420->setUSE("hanim_l_middle1");
HAnimHumanoid44->addJoints(*HAnimJoint420);

CHAnimJoint* HAnimJoint421 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint421->setUSE("hanim_r_middle1");
HAnimHumanoid44->addJoints(*HAnimJoint421);

CHAnimJoint* HAnimJoint422 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint422->setUSE("hanim_l_middle2");
HAnimHumanoid44->addJoints(*HAnimJoint422);

CHAnimJoint* HAnimJoint423 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint423->setUSE("hanim_r_middle2");
HAnimHumanoid44->addJoints(*HAnimJoint423);

CHAnimJoint* HAnimJoint424 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint424->setUSE("hanim_l_middle3");
HAnimHumanoid44->addJoints(*HAnimJoint424);

CHAnimJoint* HAnimJoint425 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint425->setUSE("hanim_r_middle3");
HAnimHumanoid44->addJoints(*HAnimJoint425);

CHAnimJoint* HAnimJoint426 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint426->setUSE("hanim_l_midtarsal");
HAnimHumanoid44->addJoints(*HAnimJoint426);

CHAnimJoint* HAnimJoint427 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint427->setUSE("hanim_r_midtarsal");
HAnimHumanoid44->addJoints(*HAnimJoint427);

CHAnimJoint* HAnimJoint428 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint428->setUSE("hanim_l_pinky0");
HAnimHumanoid44->addJoints(*HAnimJoint428);

CHAnimJoint* HAnimJoint429 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint429->setUSE("hanim_r_pinky0");
HAnimHumanoid44->addJoints(*HAnimJoint429);

CHAnimJoint* HAnimJoint430 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint430->setUSE("hanim_l_pinky1");
HAnimHumanoid44->addJoints(*HAnimJoint430);

CHAnimJoint* HAnimJoint431 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint431->setUSE("hanim_r_pinky1");
HAnimHumanoid44->addJoints(*HAnimJoint431);

CHAnimJoint* HAnimJoint432 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint432->setUSE("hanim_l_pinky2");
HAnimHumanoid44->addJoints(*HAnimJoint432);

CHAnimJoint* HAnimJoint433 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint433->setUSE("hanim_r_pinky2");
HAnimHumanoid44->addJoints(*HAnimJoint433);

CHAnimJoint* HAnimJoint434 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint434->setUSE("hanim_l_pinky3");
HAnimHumanoid44->addJoints(*HAnimJoint434);

CHAnimJoint* HAnimJoint435 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint435->setUSE("hanim_r_pinky3");
HAnimHumanoid44->addJoints(*HAnimJoint435);

CHAnimJoint* HAnimJoint436 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint436->setUSE("hanim_l_ring0");
HAnimHumanoid44->addJoints(*HAnimJoint436);

CHAnimJoint* HAnimJoint437 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint437->setUSE("hanim_r_ring0");
HAnimHumanoid44->addJoints(*HAnimJoint437);

CHAnimJoint* HAnimJoint438 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint438->setUSE("hanim_l_ring1");
HAnimHumanoid44->addJoints(*HAnimJoint438);

CHAnimJoint* HAnimJoint439 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint439->setUSE("hanim_r_ring1");
HAnimHumanoid44->addJoints(*HAnimJoint439);

CHAnimJoint* HAnimJoint440 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint440->setUSE("hanim_l_ring2");
HAnimHumanoid44->addJoints(*HAnimJoint440);

CHAnimJoint* HAnimJoint441 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint441->setUSE("hanim_r_ring2");
HAnimHumanoid44->addJoints(*HAnimJoint441);

CHAnimJoint* HAnimJoint442 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint442->setUSE("hanim_l_ring3");
HAnimHumanoid44->addJoints(*HAnimJoint442);

CHAnimJoint* HAnimJoint443 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint443->setUSE("hanim_r_ring3");
HAnimHumanoid44->addJoints(*HAnimJoint443);

CHAnimJoint* HAnimJoint444 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint444->setUSE("hanim_l_shoulder");
HAnimHumanoid44->addJoints(*HAnimJoint444);

CHAnimJoint* HAnimJoint445 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint445->setUSE("hanim_r_shoulder");
HAnimHumanoid44->addJoints(*HAnimJoint445);

CHAnimJoint* HAnimJoint446 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint446->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid44->addJoints(*HAnimJoint446);

CHAnimJoint* HAnimJoint447 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint447->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid44->addJoints(*HAnimJoint447);

CHAnimJoint* HAnimJoint448 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint448->setUSE("hanim_l_subtalar");
HAnimHumanoid44->addJoints(*HAnimJoint448);

CHAnimJoint* HAnimJoint449 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint449->setUSE("hanim_r_subtalar");
HAnimHumanoid44->addJoints(*HAnimJoint449);

CHAnimJoint* HAnimJoint450 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint450->setUSE("hanim_l_thumb1");
HAnimHumanoid44->addJoints(*HAnimJoint450);

CHAnimJoint* HAnimJoint451 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint451->setUSE("hanim_r_thumb1");
HAnimHumanoid44->addJoints(*HAnimJoint451);

CHAnimJoint* HAnimJoint452 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint452->setUSE("hanim_l_thumb2");
HAnimHumanoid44->addJoints(*HAnimJoint452);

CHAnimJoint* HAnimJoint453 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint453->setUSE("hanim_r_thumb2");
HAnimHumanoid44->addJoints(*HAnimJoint453);

CHAnimJoint* HAnimJoint454 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint454->setUSE("hanim_l_thumb3");
HAnimHumanoid44->addJoints(*HAnimJoint454);

CHAnimJoint* HAnimJoint455 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint455->setUSE("hanim_r_thumb3");
HAnimHumanoid44->addJoints(*HAnimJoint455);

CHAnimJoint* HAnimJoint456 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint456->setUSE("hanim_l_wrist");
HAnimHumanoid44->addJoints(*HAnimJoint456);

CHAnimJoint* HAnimJoint457 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint457->setUSE("hanim_r_wrist");
HAnimHumanoid44->addJoints(*HAnimJoint457);

CHAnimSegment* HAnimSegment458 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment458->setUSE("hanim_pelvis");
HAnimHumanoid44->setSegments(*HAnimSegment458);

CHAnimSegment* HAnimSegment459 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment459->setUSE("hanim_skull");
HAnimHumanoid44->setSegments(*HAnimSegment459);

CHAnimSegment* HAnimSegment460 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment460->setUSE("hanim_jaw");
HAnimHumanoid44->setSegments(*HAnimSegment460);

CHAnimSegment* HAnimSegment461 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment461->setUSE("hanim_c1");
HAnimHumanoid44->setSegments(*HAnimSegment461);

CHAnimSegment* HAnimSegment462 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment462->setUSE("hanim_c2");
HAnimHumanoid44->setSegments(*HAnimSegment462);

CHAnimSegment* HAnimSegment463 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment463->setUSE("hanim_c3");
HAnimHumanoid44->setSegments(*HAnimSegment463);

CHAnimSegment* HAnimSegment464 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment464->setUSE("hanim_c4");
HAnimHumanoid44->setSegments(*HAnimSegment464);

CHAnimSegment* HAnimSegment465 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment465->setUSE("hanim_c5");
HAnimHumanoid44->setSegments(*HAnimSegment465);

CHAnimSegment* HAnimSegment466 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment466->setUSE("hanim_c6");
HAnimHumanoid44->setSegments(*HAnimSegment466);

CHAnimSegment* HAnimSegment467 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment467->setUSE("hanim_c7");
HAnimHumanoid44->setSegments(*HAnimSegment467);

CHAnimSegment* HAnimSegment468 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment468->setUSE("hanim_t1");
HAnimHumanoid44->setSegments(*HAnimSegment468);

CHAnimSegment* HAnimSegment469 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment469->setUSE("hanim_t2");
HAnimHumanoid44->setSegments(*HAnimSegment469);

CHAnimSegment* HAnimSegment470 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment470->setUSE("hanim_t3");
HAnimHumanoid44->setSegments(*HAnimSegment470);

CHAnimSegment* HAnimSegment471 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment471->setUSE("hanim_t4");
HAnimHumanoid44->setSegments(*HAnimSegment471);

CHAnimSegment* HAnimSegment472 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment472->setUSE("hanim_t5");
HAnimHumanoid44->setSegments(*HAnimSegment472);

CHAnimSegment* HAnimSegment473 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment473->setUSE("hanim_t6");
HAnimHumanoid44->setSegments(*HAnimSegment473);

CHAnimSegment* HAnimSegment474 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment474->setUSE("hanim_t7");
HAnimHumanoid44->setSegments(*HAnimSegment474);

CHAnimSegment* HAnimSegment475 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment475->setUSE("hanim_t8");
HAnimHumanoid44->setSegments(*HAnimSegment475);

CHAnimSegment* HAnimSegment476 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment476->setUSE("hanim_t9");
HAnimHumanoid44->setSegments(*HAnimSegment476);

CHAnimSegment* HAnimSegment477 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment477->setUSE("hanim_t10");
HAnimHumanoid44->setSegments(*HAnimSegment477);

CHAnimSegment* HAnimSegment478 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment478->setUSE("hanim_t11");
HAnimHumanoid44->setSegments(*HAnimSegment478);

CHAnimSegment* HAnimSegment479 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment479->setUSE("hanim_t12");
HAnimHumanoid44->setSegments(*HAnimSegment479);

CHAnimSegment* HAnimSegment480 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment480->setUSE("hanim_l1");
HAnimHumanoid44->setSegments(*HAnimSegment480);

CHAnimSegment* HAnimSegment481 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment481->setUSE("hanim_l2");
HAnimHumanoid44->setSegments(*HAnimSegment481);

CHAnimSegment* HAnimSegment482 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment482->setUSE("hanim_l3");
HAnimHumanoid44->setSegments(*HAnimSegment482);

CHAnimSegment* HAnimSegment483 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment483->setUSE("hanim_l4");
HAnimHumanoid44->setSegments(*HAnimSegment483);

CHAnimSegment* HAnimSegment484 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment484->setUSE("hanim_l5");
HAnimHumanoid44->setSegments(*HAnimSegment484);

CHAnimSegment* HAnimSegment485 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment485->setUSE("hanim_sacrum");
HAnimHumanoid44->setSegments(*HAnimSegment485);

CHAnimSegment* HAnimSegment486 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment486->setUSE("hanim_l_calf");
HAnimHumanoid44->setSegments(*HAnimSegment486);

CHAnimSegment* HAnimSegment487 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment487->setUSE("hanim_r_calf");
HAnimHumanoid44->setSegments(*HAnimSegment487);

CHAnimSegment* HAnimSegment488 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment488->setUSE("hanim_l_clavicle");
HAnimHumanoid44->setSegments(*HAnimSegment488);

CHAnimSegment* HAnimSegment489 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment489->setUSE("hanim_r_clavicle");
HAnimHumanoid44->setSegments(*HAnimSegment489);

CHAnimSegment* HAnimSegment490 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment490->setUSE("hanim_l_eyeball");
HAnimHumanoid44->setSegments(*HAnimSegment490);

CHAnimSegment* HAnimSegment491 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment491->setUSE("hanim_r_eyeball");
HAnimHumanoid44->setSegments(*HAnimSegment491);

CHAnimSegment* HAnimSegment492 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment492->setUSE("hanim_l_eyebrow");
HAnimHumanoid44->setSegments(*HAnimSegment492);

CHAnimSegment* HAnimSegment493 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment493->setUSE("hanim_r_eyebrow");
HAnimHumanoid44->setSegments(*HAnimSegment493);

CHAnimSegment* HAnimSegment494 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment494->setUSE("hanim_l_eyelid");
HAnimHumanoid44->setSegments(*HAnimSegment494);

CHAnimSegment* HAnimSegment495 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment495->setUSE("hanim_r_eyelid");
HAnimHumanoid44->setSegments(*HAnimSegment495);

CHAnimSegment* HAnimSegment496 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment496->setUSE("hanim_l_forearm");
HAnimHumanoid44->setSegments(*HAnimSegment496);

CHAnimSegment* HAnimSegment497 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment497->setUSE("hanim_r_forearm");
HAnimHumanoid44->setSegments(*HAnimSegment497);

CHAnimSegment* HAnimSegment498 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment498->setUSE("hanim_l_forefoot");
HAnimHumanoid44->setSegments(*HAnimSegment498);

CHAnimSegment* HAnimSegment499 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment499->setUSE("hanim_r_forefoot");
HAnimHumanoid44->setSegments(*HAnimSegment499);

CHAnimSegment* HAnimSegment500 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment500->setUSE("hanim_l_hand");
HAnimHumanoid44->setSegments(*HAnimSegment500);

CHAnimSegment* HAnimSegment501 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment501->setUSE("hanim_r_hand");
HAnimHumanoid44->setSegments(*HAnimSegment501);

CHAnimSegment* HAnimSegment502 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment502->setUSE("hanim_l_hindfoot");
HAnimHumanoid44->setSegments(*HAnimSegment502);

CHAnimSegment* HAnimSegment503 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment503->setUSE("hanim_r_hindfoot");
HAnimHumanoid44->setSegments(*HAnimSegment503);

CHAnimSegment* HAnimSegment504 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment504->setUSE("hanim_l_index_distal");
HAnimHumanoid44->setSegments(*HAnimSegment504);

CHAnimSegment* HAnimSegment505 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment505->setUSE("hanim_r_index_distal");
HAnimHumanoid44->setSegments(*HAnimSegment505);

CHAnimSegment* HAnimSegment506 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment506->setUSE("hanim_l_index_metacarpal");
HAnimHumanoid44->setSegments(*HAnimSegment506);

CHAnimSegment* HAnimSegment507 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment507->setUSE("hanim_r_index_metacarpal");
HAnimHumanoid44->setSegments(*HAnimSegment507);

CHAnimSegment* HAnimSegment508 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment508->setUSE("hanim_l_index_middle");
HAnimHumanoid44->setSegments(*HAnimSegment508);

CHAnimSegment* HAnimSegment509 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment509->setUSE("hanim_r_index_middle");
HAnimHumanoid44->setSegments(*HAnimSegment509);

CHAnimSegment* HAnimSegment510 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment510->setUSE("hanim_l_index_proximal");
HAnimHumanoid44->setSegments(*HAnimSegment510);

CHAnimSegment* HAnimSegment511 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment511->setUSE("hanim_r_index_proximal");
HAnimHumanoid44->setSegments(*HAnimSegment511);

CHAnimSegment* HAnimSegment512 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment512->setUSE("hanim_l_middistal");
HAnimHumanoid44->setSegments(*HAnimSegment512);

CHAnimSegment* HAnimSegment513 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment513->setUSE("hanim_r_middistal");
HAnimHumanoid44->setSegments(*HAnimSegment513);

CHAnimSegment* HAnimSegment514 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment514->setUSE("hanim_l_middle_distal");
HAnimHumanoid44->setSegments(*HAnimSegment514);

CHAnimSegment* HAnimSegment515 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment515->setUSE("hanim_r_middle_distal");
HAnimHumanoid44->setSegments(*HAnimSegment515);

CHAnimSegment* HAnimSegment516 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment516->setUSE("hanim_l_middle_metacarpal");
HAnimHumanoid44->setSegments(*HAnimSegment516);

CHAnimSegment* HAnimSegment517 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment517->setUSE("hanim_r_middle_metacarpal");
HAnimHumanoid44->setSegments(*HAnimSegment517);

CHAnimSegment* HAnimSegment518 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment518->setUSE("hanim_l_middle_middle");
HAnimHumanoid44->setSegments(*HAnimSegment518);

CHAnimSegment* HAnimSegment519 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment519->setUSE("hanim_r_middle_middle");
HAnimHumanoid44->setSegments(*HAnimSegment519);

CHAnimSegment* HAnimSegment520 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment520->setUSE("hanim_l_middle_proximal");
HAnimHumanoid44->setSegments(*HAnimSegment520);

CHAnimSegment* HAnimSegment521 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment521->setUSE("hanim_r_middle_proximal");
HAnimHumanoid44->setSegments(*HAnimSegment521);

CHAnimSegment* HAnimSegment522 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment522->setUSE("hanim_l_midproximal");
HAnimHumanoid44->setSegments(*HAnimSegment522);

CHAnimSegment* HAnimSegment523 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment523->setUSE("hanim_r_midproximal");
HAnimHumanoid44->setSegments(*HAnimSegment523);

CHAnimSegment* HAnimSegment524 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment524->setUSE("hanim_l_pinky_distal");
HAnimHumanoid44->setSegments(*HAnimSegment524);

CHAnimSegment* HAnimSegment525 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment525->setUSE("hanim_r_pinky_distal");
HAnimHumanoid44->setSegments(*HAnimSegment525);

CHAnimSegment* HAnimSegment526 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment526->setUSE("hanim_l_pinky_metacarpal");
HAnimHumanoid44->setSegments(*HAnimSegment526);

CHAnimSegment* HAnimSegment527 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment527->setUSE("hanim_r_pinky_metacarpal");
HAnimHumanoid44->setSegments(*HAnimSegment527);

CHAnimSegment* HAnimSegment528 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment528->setUSE("hanim_l_pinky_middle");
HAnimHumanoid44->setSegments(*HAnimSegment528);

CHAnimSegment* HAnimSegment529 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment529->setUSE("hanim_r_pinky_middle");
HAnimHumanoid44->setSegments(*HAnimSegment529);

CHAnimSegment* HAnimSegment530 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment530->setUSE("hanim_l_pinky_proximal");
HAnimHumanoid44->setSegments(*HAnimSegment530);

CHAnimSegment* HAnimSegment531 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment531->setUSE("hanim_r_pinky_proximal");
HAnimHumanoid44->setSegments(*HAnimSegment531);

CHAnimSegment* HAnimSegment532 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment532->setUSE("hanim_l_ring_distal");
HAnimHumanoid44->setSegments(*HAnimSegment532);

CHAnimSegment* HAnimSegment533 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment533->setUSE("hanim_r_ring_distal");
HAnimHumanoid44->setSegments(*HAnimSegment533);

CHAnimSegment* HAnimSegment534 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment534->setUSE("hanim_l_ring_metacarpal");
HAnimHumanoid44->setSegments(*HAnimSegment534);

CHAnimSegment* HAnimSegment535 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment535->setUSE("hanim_r_ring_metacarpal");
HAnimHumanoid44->setSegments(*HAnimSegment535);

CHAnimSegment* HAnimSegment536 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment536->setUSE("hanim_l_ring_middle");
HAnimHumanoid44->setSegments(*HAnimSegment536);

CHAnimSegment* HAnimSegment537 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment537->setUSE("hanim_r_ring_middle");
HAnimHumanoid44->setSegments(*HAnimSegment537);

CHAnimSegment* HAnimSegment538 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment538->setUSE("hanim_l_ring_proximal");
HAnimHumanoid44->setSegments(*HAnimSegment538);

CHAnimSegment* HAnimSegment539 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment539->setUSE("hanim_r_ring_proximal");
HAnimHumanoid44->setSegments(*HAnimSegment539);

CHAnimSegment* HAnimSegment540 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment540->setUSE("hanim_l_scapula");
HAnimHumanoid44->setSegments(*HAnimSegment540);

CHAnimSegment* HAnimSegment541 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment541->setUSE("hanim_r_scapula");
HAnimHumanoid44->setSegments(*HAnimSegment541);

CHAnimSegment* HAnimSegment542 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment542->setUSE("hanim_l_thigh");
HAnimHumanoid44->setSegments(*HAnimSegment542);

CHAnimSegment* HAnimSegment543 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment543->setUSE("hanim_r_thigh");
HAnimHumanoid44->setSegments(*HAnimSegment543);

CHAnimSegment* HAnimSegment544 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment544->setUSE("hanim_l_thumb_distal");
HAnimHumanoid44->setSegments(*HAnimSegment544);

CHAnimSegment* HAnimSegment545 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment545->setUSE("hanim_r_thumb_distal");
HAnimHumanoid44->setSegments(*HAnimSegment545);

CHAnimSegment* HAnimSegment546 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment546->setUSE("hanim_l_thumb_metacarpal");
HAnimHumanoid44->setSegments(*HAnimSegment546);

CHAnimSegment* HAnimSegment547 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment547->setUSE("hanim_r_thumb_metacarpal");
HAnimHumanoid44->setSegments(*HAnimSegment547);

CHAnimSegment* HAnimSegment548 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment548->setUSE("hanim_l_thumb_proximal");
HAnimHumanoid44->setSegments(*HAnimSegment548);

CHAnimSegment* HAnimSegment549 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment549->setUSE("hanim_r_thumb_proximal");
HAnimHumanoid44->setSegments(*HAnimSegment549);

CHAnimSegment* HAnimSegment550 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment550->setUSE("hanim_l_upperarm");
HAnimHumanoid44->setSegments(*HAnimSegment550);

CHAnimSegment* HAnimSegment551 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment551->setUSE("hanim_r_upperarm");
HAnimHumanoid44->setSegments(*HAnimSegment551);

CHAnimSite* HAnimSite552 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite552->setUSE("hanim_crotch_pt");
HAnimHumanoid44->setSites(*HAnimSite552);

CHAnimSite* HAnimSite553 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite553->setUSE("hanim_skull_tip");
HAnimHumanoid44->setSites(*HAnimSite553);

CHAnimSite* HAnimSite554 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite554->setUSE("hanim_sellion_pt");
HAnimHumanoid44->setSites(*HAnimSite554);

CHAnimSite* HAnimSite555 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite555->setUSE("hanim_supramenton_pt");
HAnimHumanoid44->setSites(*HAnimSite555);

CHAnimSite* HAnimSite556 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite556->setUSE("hanim_nuchale_pt");
HAnimHumanoid44->setSites(*HAnimSite556);

CHAnimSite* HAnimSite557 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite557->setUSE("hanim_suprasternale_pt");
HAnimHumanoid44->setSites(*HAnimSite557);

CHAnimSite* HAnimSite558 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite558->setUSE("hanim_cervicale_pt");
HAnimHumanoid44->setSites(*HAnimSite558);

CHAnimSite* HAnimSite559 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite559->setUSE("hanim_substernale_pt");
HAnimHumanoid44->setSites(*HAnimSite559);

CHAnimSite* HAnimSite560 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite560->setUSE("hanim_rib10_midspine_pt");
HAnimHumanoid44->setSites(*HAnimSite560);

CHAnimSite* HAnimSite561 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite561->setUSE("hanim_waist_preferred_post_pt");
HAnimHumanoid44->setSites(*HAnimSite561);

CHAnimSite* HAnimSite562 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite562->setUSE("hanim_navel_pt");
HAnimHumanoid44->setSites(*HAnimSite562);

CHAnimSite* HAnimSite563 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite563->setUSE("hanim_l_acromion_pt");
HAnimHumanoid44->setSites(*HAnimSite563);

CHAnimSite* HAnimSite564 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite564->setUSE("hanim_r_acromion_pt");
HAnimHumanoid44->setSites(*HAnimSite564);

CHAnimSite* HAnimSite565 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite565->setUSE("hanim_r_asis_pt");
HAnimHumanoid44->setSites(*HAnimSite565);

CHAnimSite* HAnimSite566 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite566->setUSE("hanim_l_asis_pt");
HAnimHumanoid44->setSites(*HAnimSite566);

CHAnimSite* HAnimSite567 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite567->setUSE("hanim_l_axilla_ant_pt");
HAnimHumanoid44->setSites(*HAnimSite567);

CHAnimSite* HAnimSite568 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite568->setUSE("hanim_r_axilla_ant_pt");
HAnimHumanoid44->setSites(*HAnimSite568);

CHAnimSite* HAnimSite569 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite569->setUSE("hanim_l_axilla_post_pt");
HAnimHumanoid44->setSites(*HAnimSite569);

CHAnimSite* HAnimSite570 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite570->setUSE("hanim_r_axilla_post_pt");
HAnimHumanoid44->setSites(*HAnimSite570);

CHAnimSite* HAnimSite571 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite571->setUSE("hanim_l_calcaneous_post_pt");
HAnimHumanoid44->setSites(*HAnimSite571);

CHAnimSite* HAnimSite572 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite572->setUSE("hanim_r_calcaneous_post_pt");
HAnimHumanoid44->setSites(*HAnimSite572);

CHAnimSite* HAnimSite573 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite573->setUSE("hanim_l_clavicale_pt");
HAnimHumanoid44->setSites(*HAnimSite573);

CHAnimSite* HAnimSite574 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite574->setUSE("hanim_r_clavicale_pt");
HAnimHumanoid44->setSites(*HAnimSite574);

CHAnimSite* HAnimSite575 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite575->setUSE("hanim_l_dactylion_pt");
HAnimHumanoid44->setSites(*HAnimSite575);

CHAnimSite* HAnimSite576 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite576->setUSE("hanim_r_dactylion_pt");
HAnimHumanoid44->setSites(*HAnimSite576);

CHAnimSite* HAnimSite577 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite577->setUSE("hanim_l_digit2_pt");
HAnimHumanoid44->setSites(*HAnimSite577);

CHAnimSite* HAnimSite578 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite578->setUSE("hanim_r_digit2_pt");
HAnimHumanoid44->setSites(*HAnimSite578);

CHAnimSite* HAnimSite579 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite579->setUSE("hanim_l_femoral_lateral_epicn_pt");
HAnimHumanoid44->setSites(*HAnimSite579);

CHAnimSite* HAnimSite580 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite580->setUSE("hanim_r_femoral_lateral_epicn_pt");
HAnimHumanoid44->setSites(*HAnimSite580);

CHAnimSite* HAnimSite581 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite581->setUSE("hanim_l_femoral_medial_epicn_pt");
HAnimHumanoid44->setSites(*HAnimSite581);

CHAnimSite* HAnimSite582 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite582->setUSE("hanim_r_femoral_medial_epicn_pt");
HAnimHumanoid44->setSites(*HAnimSite582);

CHAnimSite* HAnimSite583 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite583->setUSE("hanim_l_forefoot_tip");
HAnimHumanoid44->setSites(*HAnimSite583);

CHAnimSite* HAnimSite584 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite584->setUSE("hanim_r_forefoot_tip");
HAnimHumanoid44->setSites(*HAnimSite584);

CHAnimSite* HAnimSite585 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite585->setUSE("hanim_r_gonion_pt");
HAnimHumanoid44->setSites(*HAnimSite585);

CHAnimSite* HAnimSite586 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite586->setUSE("hanim_l_gonion_pt");
HAnimHumanoid44->setSites(*HAnimSite586);

CHAnimSite* HAnimSite587 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite587->setUSE("hanim_l_humeral_lateral_epicn_pt");
HAnimHumanoid44->setSites(*HAnimSite587);

CHAnimSite* HAnimSite588 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite588->setUSE("hanim_r_humeral_lateral_epicn_pt");
HAnimHumanoid44->setSites(*HAnimSite588);

CHAnimSite* HAnimSite589 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite589->setUSE("hanim_l_humeral_medial_epicn_pt");
HAnimHumanoid44->setSites(*HAnimSite589);

CHAnimSite* HAnimSite590 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite590->setUSE("hanim_r_humeral_medial_epicn_pt");
HAnimHumanoid44->setSites(*HAnimSite590);

CHAnimSite* HAnimSite591 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite591->setUSE("hanim_r_iliocristale_pt");
HAnimHumanoid44->setSites(*HAnimSite591);

CHAnimSite* HAnimSite592 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite592->setUSE("hanim_l_iliocristale_pt");
HAnimHumanoid44->setSites(*HAnimSite592);

CHAnimSite* HAnimSite593 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite593->setUSE("hanim_l_index_distal_tip");
HAnimHumanoid44->setSites(*HAnimSite593);

CHAnimSite* HAnimSite594 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite594->setUSE("hanim_r_index_distal_tip");
HAnimHumanoid44->setSites(*HAnimSite594);

CHAnimSite* HAnimSite595 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite595->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid44->setSites(*HAnimSite595);

CHAnimSite* HAnimSite596 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite596->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid44->setSites(*HAnimSite596);

CHAnimSite* HAnimSite597 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite597->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid44->setSites(*HAnimSite597);

CHAnimSite* HAnimSite598 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite598->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid44->setSites(*HAnimSite598);

CHAnimSite* HAnimSite599 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite599->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid44->setSites(*HAnimSite599);

CHAnimSite* HAnimSite600 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite600->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid44->setSites(*HAnimSite600);

CHAnimSite* HAnimSite601 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite601->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid44->setSites(*HAnimSite601);

CHAnimSite* HAnimSite602 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite602->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid44->setSites(*HAnimSite602);

CHAnimSite* HAnimSite603 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite603->setUSE("hanim_l_metacarpal_pha2_pt");
HAnimHumanoid44->setSites(*HAnimSite603);

CHAnimSite* HAnimSite604 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite604->setUSE("hanim_r_metacarpal_pha2_pt");
HAnimHumanoid44->setSites(*HAnimSite604);

CHAnimSite* HAnimSite605 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite605->setUSE("hanim_l_metacarpal_pha5_pt");
HAnimHumanoid44->setSites(*HAnimSite605);

CHAnimSite* HAnimSite606 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite606->setUSE("hanim_r_metacarpal_pha5_pt");
HAnimHumanoid44->setSites(*HAnimSite606);

CHAnimSite* HAnimSite607 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite607->setUSE("hanim_l_metatarsal_pha1_pt");
HAnimHumanoid44->setSites(*HAnimSite607);

CHAnimSite* HAnimSite608 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite608->setUSE("hanim_r_metatarsal_pha1_pt");
HAnimHumanoid44->setSites(*HAnimSite608);

CHAnimSite* HAnimSite609 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite609->setUSE("hanim_l_metatarsal_pha5_pt");
HAnimHumanoid44->setSites(*HAnimSite609);

CHAnimSite* HAnimSite610 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite610->setUSE("hanim_r_metatarsal_pha5_pt");
HAnimHumanoid44->setSites(*HAnimSite610);

CHAnimSite* HAnimSite611 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite611->setUSE("hanim_l_middle_distal_tip");
HAnimHumanoid44->setSites(*HAnimSite611);

CHAnimSite* HAnimSite612 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite612->setUSE("hanim_r_middle_distal_tip");
HAnimHumanoid44->setSites(*HAnimSite612);

CHAnimSite* HAnimSite613 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite613->setUSE("hanim_r_neck_base_pt");
HAnimHumanoid44->setSites(*HAnimSite613);

CHAnimSite* HAnimSite614 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite614->setUSE("hanim_l_neck_base_pt");
HAnimHumanoid44->setSites(*HAnimSite614);

CHAnimSite* HAnimSite615 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite615->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid44->setSites(*HAnimSite615);

CHAnimSite* HAnimSite616 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite616->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid44->setSites(*HAnimSite616);

CHAnimSite* HAnimSite617 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite617->setUSE("hanim_l_pinky_distal_tip");
HAnimHumanoid44->setSites(*HAnimSite617);

CHAnimSite* HAnimSite618 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite618->setUSE("hanim_r_pinky_distal_tip");
HAnimHumanoid44->setSites(*HAnimSite618);

CHAnimSite* HAnimSite619 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite619->setUSE("hanim_r_psis_pt");
HAnimHumanoid44->setSites(*HAnimSite619);

CHAnimSite* HAnimSite620 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite620->setUSE("hanim_l_psis_pt");
HAnimHumanoid44->setSites(*HAnimSite620);

CHAnimSite* HAnimSite621 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite621->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid44->setSites(*HAnimSite621);

CHAnimSite* HAnimSite622 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite622->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid44->setSites(*HAnimSite622);

CHAnimSite* HAnimSite623 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite623->setUSE("hanim_l_radiale_pt");
HAnimHumanoid44->setSites(*HAnimSite623);

CHAnimSite* HAnimSite624 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite624->setUSE("hanim_r_radiale_pt");
HAnimHumanoid44->setSites(*HAnimSite624);

CHAnimSite* HAnimSite625 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite625->setUSE("hanim_r_rib10_pt");
HAnimHumanoid44->setSites(*HAnimSite625);

CHAnimSite* HAnimSite626 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite626->setUSE("hanim_l_rib10_pt");
HAnimHumanoid44->setSites(*HAnimSite626);

CHAnimSite* HAnimSite627 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite627->setUSE("hanim_l_ring_distal_tip");
HAnimHumanoid44->setSites(*HAnimSite627);

CHAnimSite* HAnimSite628 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite628->setUSE("hanim_r_ring_distal_tip");
HAnimHumanoid44->setSites(*HAnimSite628);

CHAnimSite* HAnimSite629 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite629->setUSE("hanim_temporomandibular_l_site_pt");
HAnimHumanoid44->setSites(*HAnimSite629);

CHAnimSite* HAnimSite630 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite630->setUSE("hanim_temporomandibular_r_site_pt");
HAnimHumanoid44->setSites(*HAnimSite630);

CHAnimSite* HAnimSite631 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite631->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid44->setSites(*HAnimSite631);

CHAnimSite* HAnimSite632 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite632->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid44->setSites(*HAnimSite632);

CHAnimSite* HAnimSite633 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite633->setUSE("hanim_r_thelion_pt");
HAnimHumanoid44->setSites(*HAnimSite633);

CHAnimSite* HAnimSite634 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite634->setUSE("hanim_l_thelion_pt");
HAnimHumanoid44->setSites(*HAnimSite634);

CHAnimSite* HAnimSite635 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite635->setUSE("hanim_l_thumb_distal_tip");
HAnimHumanoid44->setSites(*HAnimSite635);

CHAnimSite* HAnimSite636 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite636->setUSE("hanim_r_thumb_distal_tip");
HAnimHumanoid44->setSites(*HAnimSite636);

CHAnimSite* HAnimSite637 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite637->setUSE("hanim_r_tragion_pt");
HAnimHumanoid44->setSites(*HAnimSite637);

CHAnimSite* HAnimSite638 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite638->setUSE("hanim_l_tragion_pt");
HAnimHumanoid44->setSites(*HAnimSite638);

CHAnimSite* HAnimSite639 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite639->setUSE("hanim_r_trochanterion_pt");
HAnimHumanoid44->setSites(*HAnimSite639);

CHAnimSite* HAnimSite640 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite640->setUSE("hanim_l_trochanterion_pt");
HAnimHumanoid44->setSites(*HAnimSite640);

CHAnimSite* HAnimSite641 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite641->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid44->setSites(*HAnimSite641);

CHAnimSite* HAnimSite642 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite642->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid44->setSites(*HAnimSite642);

group->addChildren(*HAnimHumanoid44);

X3D0->setScene(*Scene30);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

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
component2->setLevel(3);
head1->addComponent(*component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("blenderSkeleton.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("copyright");
meta4->setContent("2023");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("reference");
meta5->setContent("http://www.web3D.org");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("generator");
meta6->setContent("Blender 4.0.1");
head1->addMeta(*meta6);

X3D0->setHead(*head1);

CScene* Scene7 = new CScene();
CNavigationInfo* NavigationInfo8 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo8);

CBackground* Background9 = (CBackground *)(m_pScene.createNode("Background"));
Background9->setDEF("WO_World");
Background9->setGroundColor(new float[3]{0.05087608844041824,0.05087608844041824,0.05087608844041824});
Background9->setSkyColor(new float[3]{0.05087608844041824,0.05087608844041824,0.05087608844041824});
group->addChildren(*Background9);

CTransform* Transform10 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape11 = (CShape *)(m_pScene.createNode("Shape"));
Shape11->setDEF("SiteShape");
CBox* Box12 = (CBox *)(m_pScene.createNode("Box"));
Box12->setSize(new float[3]{0.05,0.05,0.05});
Shape11->setGeometry(Box12);

CAppearance* Appearance13 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material14 = (CMaterial *)(m_pScene.createNode("Material"));
Material14->setDiffuseColor(new float[3]{0,0,1});
Appearance13->setMaterial(*Material14);

Shape11->setAppearance(*Appearance13);

Transform10->addChild(*Shape11);

group->addChildren(*Transform10);

CTransform* Transform15 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape16 = (CShape *)(m_pScene.createNode("Shape"));
Shape16->setDEF("JointShape");
CSphere* Sphere17 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere17->setRadius(0.06);
Shape16->setGeometry(Sphere17);

CAppearance* Appearance18 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance18->setDEF("JointAppearance");
CMaterial* Material19 = (CMaterial *)(m_pScene.createNode("Material"));
Material19->setDiffuseColor(new float[3]{1,0.5,0});
Material19->setTransparency(0.5);
Appearance18->setMaterial(*Material19);

Shape16->setAppearance(*Appearance18);

Transform15->addChild(*Shape16);

group->addChildren(*Transform15);

CTransform* Transform20 = (CTransform *)(m_pScene.createNode("Transform"));
Transform20->setDEF("Light_TRANSFORM");
Transform20->setRotation(new float[4]{0.20594,0.33152,0.9207,1.92627});
Transform20->setTranslation(new float[3]{4.07625,1.00545,5.90386});
CPointLight* PointLight21 = (CPointLight *)(m_pScene.createNode("PointLight"));
PointLight21->setDEF("LA_Light");
PointLight21->setLocation(new float[3]{-8.940696716308594e-8,-3.5762786865234375e-7,4.6193599700927734e-7});
PointLight21->setRadius(40);
Transform20->addChildren(*PointLight21);

group->addChildren(*Transform20);

CTransform* Transform22 = (CTransform *)(m_pScene.createNode("Transform"));
Transform22->setDEF("Camera_TRANSFORM");
Transform22->setRotation(new float[4]{0.77344,0.33383,0.53884,1.35072});
Transform22->setTranslation(new float[3]{7.35889,-6.92579,4.95831});
CViewpoint* Viewpoint23 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint23->setDEF("CA_Camera");
Viewpoint23->setFieldOfView(0.6911112070083618);
Viewpoint23->setOrientation(new float[4]{-3.627339850709177e-8,-0.4730778932571411,-0.8810206651687622,0});
Viewpoint23->setPosition(new float[3]{-3.927080456378462e-7,-2.123415470123291e-7,2.384185791015625e-7});
Transform22->addChildren(*Viewpoint23);

group->addChildren(*Transform22);

CTransform* Transform24 = (CTransform *)(m_pScene.createNode("Transform"));
Transform24->setDEF("Armature_TRANSFORM");
CHAnimHumanoid* HAnimHumanoid25 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid25->setName("humanoid");
HAnimHumanoid25->setDEF("hanim_humanoid");
HAnimHumanoid25->setVersion("2.0");
CHAnimJoint* HAnimJoint26 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint26->setName("Armature");
HAnimJoint26->setDEF("hanim_Armature");
CHAnimSegment* HAnimSegment27 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment27->setName("SEGMENT_FOR_Armature");
HAnimSegment27->setDEF("hanim_SEGMENT_FOR_Armature");
CTouchSensor* TouchSensor28 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor28->setDescription("joint Armature segment SEGMENT_FOR_Armature");
HAnimSegment27->addChildren(*TouchSensor28);

CTransform* Transform29 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape30 = (CShape *)(m_pScene.createNode("Shape"));
Shape30->setUSE("JointShape");
Transform29->addChild(*Shape30);

HAnimSegment27->addChildren(*Transform29);

CHAnimSite* HAnimSite31 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite31->setName("SEGMENT_FOR_Armature_tip");
HAnimSite31->setDEF("hanim_SEGMENT_FOR_Armature_tip");
CTransform* Transform32 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape33 = (CShape *)(m_pScene.createNode("Shape"));
Shape33->setUSE("SiteShape");
Transform32->addChild(*Shape33);

HAnimSite31->addChildren(*Transform32);

HAnimSegment27->addChildren(*HAnimSite31);

HAnimJoint26->addChildren(*HAnimSegment27);

CHAnimJoint* HAnimJoint34 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint34->setName("sacrum");
HAnimJoint34->setDEF("hanim_sacrum");
HAnimJoint34->setCenter(new float[3]{-0.0002,-0.1178,0.8174});
CHAnimSegment* HAnimSegment35 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment35->setName("SEGMENT_FOR_sacrum");
HAnimSegment35->setDEF("hanim_SEGMENT_FOR_sacrum");
CTouchSensor* TouchSensor36 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor36->setDescription("joint sacrum segment SEGMENT_FOR_sacrum");
HAnimSegment35->addChildren(*TouchSensor36);

CTransform* Transform37 = (CTransform *)(m_pScene.createNode("Transform"));
Transform37->setTranslation(new float[3]{-0.0002,-0.1178,0.8174});
CShape* Shape38 = (CShape *)(m_pScene.createNode("Shape"));
Shape38->setUSE("JointShape");
Transform37->addChild(*Shape38);

HAnimSegment35->addChildren(*Transform37);

CHAnimSite* HAnimSite39 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite39->setName("SEGMENT_FOR_sacrum_tip");
HAnimSite39->setDEF("hanim_SEGMENT_FOR_sacrum_tip");
CTransform* Transform40 = (CTransform *)(m_pScene.createNode("Transform"));
Transform40->setTranslation(new float[3]{-0.0002,-0.1178,0.8174});
CShape* Shape41 = (CShape *)(m_pScene.createNode("Shape"));
Shape41->setUSE("SiteShape");
Transform40->addChild(*Shape41);

HAnimSite39->addChildren(*Transform40);

HAnimSegment35->addChildren(*HAnimSite39);

HAnimJoint34->addChildren(*HAnimSegment35);

CHAnimJoint* HAnimJoint42 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint42->setName("pelvis");
HAnimJoint42->setDEF("hanim_pelvis");
HAnimJoint42->setCenter(new float[3]{-0.0002,-0.1178,0.6986});
CHAnimSegment* HAnimSegment43 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment43->setName("SEGMENT_FOR_pelvis");
HAnimSegment43->setDEF("hanim_SEGMENT_FOR_pelvis");
CTouchSensor* TouchSensor44 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor44->setDescription("joint pelvis segment SEGMENT_FOR_pelvis");
HAnimSegment43->addChildren(*TouchSensor44);

CTransform* Transform45 = (CTransform *)(m_pScene.createNode("Transform"));
Transform45->setTranslation(new float[3]{-0.0002,-0.1178,0.6986});
CShape* Shape46 = (CShape *)(m_pScene.createNode("Shape"));
Shape46->setUSE("JointShape");
Transform45->addChild(*Shape46);

HAnimSegment43->addChildren(*Transform45);

CHAnimSite* HAnimSite47 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite47->setName("SEGMENT_FOR_pelvis_tip");
HAnimSite47->setDEF("hanim_SEGMENT_FOR_pelvis_tip");
CTransform* Transform48 = (CTransform *)(m_pScene.createNode("Transform"));
Transform48->setTranslation(new float[3]{-0.0002,-0.1178,0.6986});
CShape* Shape49 = (CShape *)(m_pScene.createNode("Shape"));
Shape49->setUSE("SiteShape");
Transform48->addChild(*Shape49);

HAnimSite47->addChildren(*Transform48);

HAnimSegment43->addChildren(*HAnimSite47);

HAnimJoint42->addChildren(*HAnimSegment43);

CHAnimJoint* HAnimJoint50 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint50->setName("l_thigh");
HAnimJoint50->setDEF("hanim_l_thigh");
HAnimJoint50->setCenter(new float[3]{0.0945,-0.1202,0.8181});
CHAnimSegment* HAnimSegment51 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment51->setName("SEGMENT_FOR_l_thigh");
HAnimSegment51->setDEF("hanim_SEGMENT_FOR_l_thigh");
CTouchSensor* TouchSensor52 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor52->setDescription("joint l_thigh segment SEGMENT_FOR_l_thigh");
HAnimSegment51->addChildren(*TouchSensor52);

CTransform* Transform53 = (CTransform *)(m_pScene.createNode("Transform"));
Transform53->setTranslation(new float[3]{0.0945,-0.1202,0.8181});
CShape* Shape54 = (CShape *)(m_pScene.createNode("Shape"));
Shape54->setUSE("JointShape");
Transform53->addChild(*Shape54);

HAnimSegment51->addChildren(*Transform53);

CHAnimSite* HAnimSite55 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite55->setName("SEGMENT_FOR_l_thigh_tip");
HAnimSite55->setDEF("hanim_SEGMENT_FOR_l_thigh_tip");
CTransform* Transform56 = (CTransform *)(m_pScene.createNode("Transform"));
Transform56->setTranslation(new float[3]{0.0945,-0.1202,0.8181});
CShape* Shape57 = (CShape *)(m_pScene.createNode("Shape"));
Shape57->setUSE("SiteShape");
Transform56->addChild(*Shape57);

HAnimSite55->addChildren(*Transform56);

HAnimSegment51->addChildren(*HAnimSite55);

HAnimJoint50->addChildren(*HAnimSegment51);

CHAnimJoint* HAnimJoint58 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint58->setName("l_calf");
HAnimJoint58->setDEF("hanim_l_calf");
HAnimJoint58->setCenter(new float[3]{0.0924,-0.1213,0.4003});
CHAnimSegment* HAnimSegment59 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment59->setName("SEGMENT_FOR_l_calf");
HAnimSegment59->setDEF("hanim_SEGMENT_FOR_l_calf");
CTouchSensor* TouchSensor60 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor60->setDescription("joint l_calf segment SEGMENT_FOR_l_calf");
HAnimSegment59->addChildren(*TouchSensor60);

CTransform* Transform61 = (CTransform *)(m_pScene.createNode("Transform"));
Transform61->setTranslation(new float[3]{0.0924,-0.1213,0.4003});
CShape* Shape62 = (CShape *)(m_pScene.createNode("Shape"));
Shape62->setUSE("JointShape");
Transform61->addChild(*Shape62);

HAnimSegment59->addChildren(*Transform61);

CHAnimSite* HAnimSite63 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite63->setName("SEGMENT_FOR_l_calf_tip");
HAnimSite63->setDEF("hanim_SEGMENT_FOR_l_calf_tip");
CTransform* Transform64 = (CTransform *)(m_pScene.createNode("Transform"));
Transform64->setTranslation(new float[3]{0.0924,-0.1213,0.4003});
CShape* Shape65 = (CShape *)(m_pScene.createNode("Shape"));
Shape65->setUSE("SiteShape");
Transform64->addChild(*Shape65);

HAnimSite63->addChildren(*Transform64);

HAnimSegment59->addChildren(*HAnimSite63);

HAnimJoint58->addChildren(*HAnimSegment59);

CHAnimJoint* HAnimJoint66 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint66->setName("l_talus");
HAnimJoint66->setDEF("hanim_l_talus");
HAnimJoint66->setCenter(new float[3]{0.0886,-0.1123,0.0869});
CHAnimSegment* HAnimSegment67 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment67->setName("SEGMENT_FOR_l_talus");
HAnimSegment67->setDEF("hanim_SEGMENT_FOR_l_talus");
CTouchSensor* TouchSensor68 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor68->setDescription("joint l_talus segment SEGMENT_FOR_l_talus");
HAnimSegment67->addChildren(*TouchSensor68);

CTransform* Transform69 = (CTransform *)(m_pScene.createNode("Transform"));
Transform69->setTranslation(new float[3]{0.0886,-0.1123,0.0869});
CShape* Shape70 = (CShape *)(m_pScene.createNode("Shape"));
Shape70->setUSE("JointShape");
Transform69->addChild(*Shape70);

HAnimSegment67->addChildren(*Transform69);

CHAnimSite* HAnimSite71 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite71->setName("SEGMENT_FOR_l_talus_tip");
HAnimSite71->setDEF("hanim_SEGMENT_FOR_l_talus_tip");
CTransform* Transform72 = (CTransform *)(m_pScene.createNode("Transform"));
Transform72->setTranslation(new float[3]{0.0886,-0.1123,0.0869});
CShape* Shape73 = (CShape *)(m_pScene.createNode("Shape"));
Shape73->setUSE("SiteShape");
Transform72->addChild(*Shape73);

HAnimSite71->addChildren(*Transform72);

HAnimSegment67->addChildren(*HAnimSite71);

HAnimJoint66->addChildren(*HAnimSegment67);

CHAnimJoint* HAnimJoint74 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint74->setName("l_navicular");
HAnimJoint74->setDEF("hanim_l_navicular");
HAnimJoint74->setCenter(new float[3]{0.0781,-0.097,0.0283});
CHAnimSegment* HAnimSegment75 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment75->setName("SEGMENT_FOR_l_navicular");
HAnimSegment75->setDEF("hanim_SEGMENT_FOR_l_navicular");
CTouchSensor* TouchSensor76 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor76->setDescription("joint l_navicular segment SEGMENT_FOR_l_navicular");
HAnimSegment75->addChildren(*TouchSensor76);

CTransform* Transform77 = (CTransform *)(m_pScene.createNode("Transform"));
Transform77->setTranslation(new float[3]{0.0781,-0.097,0.0283});
CShape* Shape78 = (CShape *)(m_pScene.createNode("Shape"));
Shape78->setUSE("JointShape");
Transform77->addChild(*Shape78);

HAnimSegment75->addChildren(*Transform77);

CHAnimSite* HAnimSite79 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite79->setName("SEGMENT_FOR_l_navicular_tip");
HAnimSite79->setDEF("hanim_SEGMENT_FOR_l_navicular_tip");
CTransform* Transform80 = (CTransform *)(m_pScene.createNode("Transform"));
Transform80->setTranslation(new float[3]{0.0781,-0.097,0.0283});
CShape* Shape81 = (CShape *)(m_pScene.createNode("Shape"));
Shape81->setUSE("SiteShape");
Transform80->addChild(*Shape81);

HAnimSite79->addChildren(*Transform80);

HAnimSegment75->addChildren(*HAnimSite79);

HAnimJoint74->addChildren(*HAnimSegment75);

CHAnimJoint* HAnimJoint82 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint82->setName("l_cuneiform_1");
HAnimJoint82->setDEF("hanim_l_cuneiform_1");
HAnimJoint82->setCenter(new float[3]{0.0672,-0.0835,0.0235});
CHAnimSegment* HAnimSegment83 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment83->setName("SEGMENT_FOR_l_cuneiform_1");
HAnimSegment83->setDEF("hanim_SEGMENT_FOR_l_cuneiform_1");
CTouchSensor* TouchSensor84 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor84->setDescription("joint l_cuneiform_1 segment SEGMENT_FOR_l_cuneiform_1");
HAnimSegment83->addChildren(*TouchSensor84);

CTransform* Transform85 = (CTransform *)(m_pScene.createNode("Transform"));
Transform85->setTranslation(new float[3]{0.0672,-0.0835,0.0235});
CShape* Shape86 = (CShape *)(m_pScene.createNode("Shape"));
Shape86->setUSE("JointShape");
Transform85->addChild(*Shape86);

HAnimSegment83->addChildren(*Transform85);

CHAnimSite* HAnimSite87 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite87->setName("SEGMENT_FOR_l_cuneiform_1_tip");
HAnimSite87->setDEF("hanim_SEGMENT_FOR_l_cuneiform_1_tip");
CTransform* Transform88 = (CTransform *)(m_pScene.createNode("Transform"));
Transform88->setTranslation(new float[3]{0.0672,-0.0835,0.0235});
CShape* Shape89 = (CShape *)(m_pScene.createNode("Shape"));
Shape89->setUSE("SiteShape");
Transform88->addChild(*Shape89);

HAnimSite87->addChildren(*Transform88);

HAnimSegment83->addChildren(*HAnimSite87);

HAnimJoint82->addChildren(*HAnimSegment83);

CHAnimJoint* HAnimJoint90 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint90->setName("l_metatarsal_1");
HAnimJoint90->setDEF("hanim_l_metatarsal_1");
HAnimJoint90->setCenter(new float[3]{0.0644,-0.0577,0.0147});
CHAnimSegment* HAnimSegment91 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment91->setName("SEGMENT_FOR_l_metatarsal_1");
HAnimSegment91->setDEF("hanim_SEGMENT_FOR_l_metatarsal_1");
CTouchSensor* TouchSensor92 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor92->setDescription("joint l_metatarsal_1 segment SEGMENT_FOR_l_metatarsal_1");
HAnimSegment91->addChildren(*TouchSensor92);

CTransform* Transform93 = (CTransform *)(m_pScene.createNode("Transform"));
Transform93->setTranslation(new float[3]{0.0644,-0.0577,0.0147});
CShape* Shape94 = (CShape *)(m_pScene.createNode("Shape"));
Shape94->setUSE("JointShape");
Transform93->addChild(*Shape94);

HAnimSegment91->addChildren(*Transform93);

CHAnimSite* HAnimSite95 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite95->setName("SEGMENT_FOR_l_metatarsal_1_tip");
HAnimSite95->setDEF("hanim_SEGMENT_FOR_l_metatarsal_1_tip");
CTransform* Transform96 = (CTransform *)(m_pScene.createNode("Transform"));
Transform96->setTranslation(new float[3]{0.0644,-0.0577,0.0147});
CShape* Shape97 = (CShape *)(m_pScene.createNode("Shape"));
Shape97->setUSE("SiteShape");
Transform96->addChild(*Shape97);

HAnimSite95->addChildren(*Transform96);

HAnimSegment91->addChildren(*HAnimSite95);

HAnimJoint90->addChildren(*HAnimSegment91);

CHAnimJoint* HAnimJoint98 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint98->setName("l_tarsal_proximal_phalanx_1");
HAnimJoint98->setDEF("hanim_l_tarsal_proximal_phalanx_1");
HAnimJoint98->setCenter(new float[3]{0.0619,-0.0083,0.0059});
CHAnimSegment* HAnimSegment99 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment99->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_1");
HAnimSegment99->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1");
CTouchSensor* TouchSensor100 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor100->setDescription("joint l_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_1");
HAnimSegment99->addChildren(*TouchSensor100);

CTransform* Transform101 = (CTransform *)(m_pScene.createNode("Transform"));
Transform101->setTranslation(new float[3]{0.0619,-0.0083,0.0059});
CShape* Shape102 = (CShape *)(m_pScene.createNode("Shape"));
Shape102->setUSE("JointShape");
Transform101->addChild(*Shape102);

HAnimSegment99->addChildren(*Transform101);

CHAnimSite* HAnimSite103 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite103->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip");
HAnimSite103->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip");
CTransform* Transform104 = (CTransform *)(m_pScene.createNode("Transform"));
Transform104->setTranslation(new float[3]{0.0619,-0.0083,0.0059});
CShape* Shape105 = (CShape *)(m_pScene.createNode("Shape"));
Shape105->setUSE("SiteShape");
Transform104->addChild(*Shape105);

HAnimSite103->addChildren(*Transform104);

HAnimSegment99->addChildren(*HAnimSite103);

HAnimJoint98->addChildren(*HAnimSegment99);

CHAnimJoint* HAnimJoint106 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint106->setName("l_tarsal_distal_phalanx_1");
HAnimJoint106->setDEF("hanim_l_tarsal_distal_phalanx_1");
CHAnimSegment* HAnimSegment107 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment107->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_1");
HAnimSegment107->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1");
CTouchSensor* TouchSensor108 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor108->setDescription("joint l_tarsal_distal_phalanx_1 segment SEGMENT_FOR_l_tarsal_distal_phalanx_1");
HAnimSegment107->addChildren(*TouchSensor108);

CTransform* Transform109 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape110 = (CShape *)(m_pScene.createNode("Shape"));
Shape110->setUSE("JointShape");
Transform109->addChild(*Shape110);

HAnimSegment107->addChildren(*Transform109);

CHAnimSite* HAnimSite111 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite111->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip");
HAnimSite111->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip");
CTransform* Transform112 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape113 = (CShape *)(m_pScene.createNode("Shape"));
Shape113->setUSE("SiteShape");
Transform112->addChild(*Shape113);

HAnimSite111->addChildren(*Transform112);

HAnimSegment107->addChildren(*HAnimSite111);

HAnimJoint106->addChildren(*HAnimSegment107);

HAnimJoint98->addChildren(*HAnimJoint106);

HAnimJoint90->addChildren(*HAnimJoint98);

HAnimJoint82->addChildren(*HAnimJoint90);

HAnimJoint74->addChildren(*HAnimJoint82);

CHAnimJoint* HAnimJoint114 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint114->setName("l_cuneiform_2");
HAnimJoint114->setDEF("hanim_l_cuneiform_2");
HAnimJoint114->setCenter(new float[3]{0.0812,-0.0805,0.025});
CHAnimSegment* HAnimSegment115 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment115->setName("SEGMENT_FOR_l_cuneiform_2");
HAnimSegment115->setDEF("hanim_SEGMENT_FOR_l_cuneiform_2");
CTouchSensor* TouchSensor116 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor116->setDescription("joint l_cuneiform_2 segment SEGMENT_FOR_l_cuneiform_2");
HAnimSegment115->addChildren(*TouchSensor116);

CTransform* Transform117 = (CTransform *)(m_pScene.createNode("Transform"));
Transform117->setTranslation(new float[3]{0.0812,-0.0805,0.025});
CShape* Shape118 = (CShape *)(m_pScene.createNode("Shape"));
Shape118->setUSE("JointShape");
Transform117->addChild(*Shape118);

HAnimSegment115->addChildren(*Transform117);

CHAnimSite* HAnimSite119 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite119->setName("SEGMENT_FOR_l_cuneiform_2_tip");
HAnimSite119->setDEF("hanim_SEGMENT_FOR_l_cuneiform_2_tip");
CTransform* Transform120 = (CTransform *)(m_pScene.createNode("Transform"));
Transform120->setTranslation(new float[3]{0.0812,-0.0805,0.025});
CShape* Shape121 = (CShape *)(m_pScene.createNode("Shape"));
Shape121->setUSE("SiteShape");
Transform120->addChild(*Shape121);

HAnimSite119->addChildren(*Transform120);

HAnimSegment115->addChildren(*HAnimSite119);

HAnimJoint114->addChildren(*HAnimSegment115);

CHAnimJoint* HAnimJoint122 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint122->setName("l_metatarsal_2");
HAnimJoint122->setDEF("hanim_l_metatarsal_2");
HAnimJoint122->setCenter(new float[3]{0.08,-0.0608,0.0175});
CHAnimSegment* HAnimSegment123 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment123->setName("SEGMENT_FOR_l_metatarsal_2");
HAnimSegment123->setDEF("hanim_SEGMENT_FOR_l_metatarsal_2");
CTouchSensor* TouchSensor124 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor124->setDescription("joint l_metatarsal_2 segment SEGMENT_FOR_l_metatarsal_2");
HAnimSegment123->addChildren(*TouchSensor124);

CTransform* Transform125 = (CTransform *)(m_pScene.createNode("Transform"));
Transform125->setTranslation(new float[3]{0.08,-0.0608,0.0175});
CShape* Shape126 = (CShape *)(m_pScene.createNode("Shape"));
Shape126->setUSE("JointShape");
Transform125->addChild(*Shape126);

HAnimSegment123->addChildren(*Transform125);

CHAnimSite* HAnimSite127 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite127->setName("SEGMENT_FOR_l_metatarsal_2_tip");
HAnimSite127->setDEF("hanim_SEGMENT_FOR_l_metatarsal_2_tip");
CTransform* Transform128 = (CTransform *)(m_pScene.createNode("Transform"));
Transform128->setTranslation(new float[3]{0.08,-0.0608,0.0175});
CShape* Shape129 = (CShape *)(m_pScene.createNode("Shape"));
Shape129->setUSE("SiteShape");
Transform128->addChild(*Shape129);

HAnimSite127->addChildren(*Transform128);

HAnimSegment123->addChildren(*HAnimSite127);

HAnimJoint122->addChildren(*HAnimSegment123);

CHAnimJoint* HAnimJoint130 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint130->setName("l_tarsal_proximal_phalanx_2");
HAnimJoint130->setDEF("hanim_l_tarsal_proximal_phalanx_2");
HAnimJoint130->setCenter(new float[3]{0.0824,-0.004,0.0064});
CHAnimSegment* HAnimSegment131 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment131->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_2");
HAnimSegment131->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2");
CTouchSensor* TouchSensor132 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor132->setDescription("joint l_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_2");
HAnimSegment131->addChildren(*TouchSensor132);

CTransform* Transform133 = (CTransform *)(m_pScene.createNode("Transform"));
Transform133->setTranslation(new float[3]{0.0824,-0.004,0.0064});
CShape* Shape134 = (CShape *)(m_pScene.createNode("Shape"));
Shape134->setUSE("JointShape");
Transform133->addChild(*Shape134);

HAnimSegment131->addChildren(*Transform133);

CHAnimSite* HAnimSite135 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite135->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip");
HAnimSite135->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip");
CTransform* Transform136 = (CTransform *)(m_pScene.createNode("Transform"));
Transform136->setTranslation(new float[3]{0.0824,-0.004,0.0064});
CShape* Shape137 = (CShape *)(m_pScene.createNode("Shape"));
Shape137->setUSE("SiteShape");
Transform136->addChild(*Shape137);

HAnimSite135->addChildren(*Transform136);

HAnimSegment131->addChildren(*HAnimSite135);

HAnimJoint130->addChildren(*HAnimSegment131);

CHAnimJoint* HAnimJoint138 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint138->setName("l_tarsal_middle_phalanx_2");
HAnimJoint138->setDEF("hanim_l_tarsal_middle_phalanx_2");
HAnimJoint138->setCenter(new float[3]{0.0841,0.0121,0.0041});
CHAnimSegment* HAnimSegment139 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment139->setName("SEGMENT_FOR_l_tarsal_middle_phalanx_2");
HAnimSegment139->setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2");
CTouchSensor* TouchSensor140 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor140->setDescription("joint l_tarsal_middle_phalanx_2 segment SEGMENT_FOR_l_tarsal_middle_phalanx_2");
HAnimSegment139->addChildren(*TouchSensor140);

CTransform* Transform141 = (CTransform *)(m_pScene.createNode("Transform"));
Transform141->setTranslation(new float[3]{0.0841,0.0121,0.0041});
CShape* Shape142 = (CShape *)(m_pScene.createNode("Shape"));
Shape142->setUSE("JointShape");
Transform141->addChild(*Shape142);

HAnimSegment139->addChildren(*Transform141);

CHAnimSite* HAnimSite143 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite143->setName("SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip");
HAnimSite143->setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip");
CTransform* Transform144 = (CTransform *)(m_pScene.createNode("Transform"));
Transform144->setTranslation(new float[3]{0.0841,0.0121,0.0041});
CShape* Shape145 = (CShape *)(m_pScene.createNode("Shape"));
Shape145->setUSE("SiteShape");
Transform144->addChild(*Shape145);

HAnimSite143->addChildren(*Transform144);

HAnimSegment139->addChildren(*HAnimSite143);

HAnimJoint138->addChildren(*HAnimSegment139);

CHAnimJoint* HAnimJoint146 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint146->setName("l_tarsal_distal_phalanx_2");
HAnimJoint146->setDEF("hanim_l_tarsal_distal_phalanx_2");
HAnimJoint146->setCenter(new float[3]{0.0841,0.0216,0.0013});
CHAnimSegment* HAnimSegment147 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment147->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_2");
HAnimSegment147->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2");
CTouchSensor* TouchSensor148 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor148->setDescription("joint l_tarsal_distal_phalanx_2 segment SEGMENT_FOR_l_tarsal_distal_phalanx_2");
HAnimSegment147->addChildren(*TouchSensor148);

CTransform* Transform149 = (CTransform *)(m_pScene.createNode("Transform"));
Transform149->setTranslation(new float[3]{0.0841,0.0216,0.0013});
CShape* Shape150 = (CShape *)(m_pScene.createNode("Shape"));
Shape150->setUSE("JointShape");
Transform149->addChild(*Shape150);

HAnimSegment147->addChildren(*Transform149);

CHAnimSite* HAnimSite151 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite151->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip");
HAnimSite151->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip");
CTransform* Transform152 = (CTransform *)(m_pScene.createNode("Transform"));
Transform152->setTranslation(new float[3]{0.0841,0.0216,0.0013});
CShape* Shape153 = (CShape *)(m_pScene.createNode("Shape"));
Shape153->setUSE("SiteShape");
Transform152->addChild(*Shape153);

HAnimSite151->addChildren(*Transform152);

HAnimSegment147->addChildren(*HAnimSite151);

HAnimJoint146->addChildren(*HAnimSegment147);

HAnimJoint138->addChildren(*HAnimJoint146);

HAnimJoint130->addChildren(*HAnimJoint138);

HAnimJoint122->addChildren(*HAnimJoint130);

HAnimJoint114->addChildren(*HAnimJoint122);

HAnimJoint74->addChildren(*HAnimJoint114);

CHAnimJoint* HAnimJoint154 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint154->setName("l_cuneiform_3");
HAnimJoint154->setDEF("hanim_l_cuneiform_3");
HAnimJoint154->setCenter(new float[3]{0.0928,-0.0821,0.0248});
CHAnimSegment* HAnimSegment155 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment155->setName("SEGMENT_FOR_l_cuneiform_3");
HAnimSegment155->setDEF("hanim_SEGMENT_FOR_l_cuneiform_3");
CTouchSensor* TouchSensor156 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor156->setDescription("joint l_cuneiform_3 segment SEGMENT_FOR_l_cuneiform_3");
HAnimSegment155->addChildren(*TouchSensor156);

CTransform* Transform157 = (CTransform *)(m_pScene.createNode("Transform"));
Transform157->setTranslation(new float[3]{0.0928,-0.0821,0.0248});
CShape* Shape158 = (CShape *)(m_pScene.createNode("Shape"));
Shape158->setUSE("JointShape");
Transform157->addChild(*Shape158);

HAnimSegment155->addChildren(*Transform157);

CHAnimSite* HAnimSite159 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite159->setName("SEGMENT_FOR_l_cuneiform_3_tip");
HAnimSite159->setDEF("hanim_SEGMENT_FOR_l_cuneiform_3_tip");
CTransform* Transform160 = (CTransform *)(m_pScene.createNode("Transform"));
Transform160->setTranslation(new float[3]{0.0928,-0.0821,0.0248});
CShape* Shape161 = (CShape *)(m_pScene.createNode("Shape"));
Shape161->setUSE("SiteShape");
Transform160->addChild(*Shape161);

HAnimSite159->addChildren(*Transform160);

HAnimSegment155->addChildren(*HAnimSite159);

HAnimJoint154->addChildren(*HAnimSegment155);

CHAnimJoint* HAnimJoint162 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint162->setName("l_metatarsal_3");
HAnimJoint162->setDEF("hanim_l_metatarsal_3");
HAnimJoint162->setCenter(new float[3]{0.0944,-0.0625,0.0175});
CHAnimSegment* HAnimSegment163 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment163->setName("SEGMENT_FOR_l_metatarsal_3");
HAnimSegment163->setDEF("hanim_SEGMENT_FOR_l_metatarsal_3");
CTouchSensor* TouchSensor164 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor164->setDescription("joint l_metatarsal_3 segment SEGMENT_FOR_l_metatarsal_3");
HAnimSegment163->addChildren(*TouchSensor164);

CTransform* Transform165 = (CTransform *)(m_pScene.createNode("Transform"));
Transform165->setTranslation(new float[3]{0.0944,-0.0625,0.0175});
CShape* Shape166 = (CShape *)(m_pScene.createNode("Shape"));
Shape166->setUSE("JointShape");
Transform165->addChild(*Shape166);

HAnimSegment163->addChildren(*Transform165);

CHAnimSite* HAnimSite167 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite167->setName("SEGMENT_FOR_l_metatarsal_3_tip");
HAnimSite167->setDEF("hanim_SEGMENT_FOR_l_metatarsal_3_tip");
CTransform* Transform168 = (CTransform *)(m_pScene.createNode("Transform"));
Transform168->setTranslation(new float[3]{0.0944,-0.0625,0.0175});
CShape* Shape169 = (CShape *)(m_pScene.createNode("Shape"));
Shape169->setUSE("SiteShape");
Transform168->addChild(*Shape169);

HAnimSite167->addChildren(*Transform168);

HAnimSegment163->addChildren(*HAnimSite167);

HAnimJoint162->addChildren(*HAnimSegment163);

CHAnimJoint* HAnimJoint170 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint170->setName("l_tarsal_proximal_phalanx_3");
HAnimJoint170->setDEF("hanim_l_tarsal_proximal_phalanx_3");
HAnimJoint170->setCenter(new float[3]{0.0963,-0.0065,0.0065});
CHAnimSegment* HAnimSegment171 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment171->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_3");
HAnimSegment171->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3");
CTouchSensor* TouchSensor172 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor172->setDescription("joint l_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_3");
HAnimSegment171->addChildren(*TouchSensor172);

CTransform* Transform173 = (CTransform *)(m_pScene.createNode("Transform"));
Transform173->setTranslation(new float[3]{0.0963,-0.0065,0.0065});
CShape* Shape174 = (CShape *)(m_pScene.createNode("Shape"));
Shape174->setUSE("JointShape");
Transform173->addChild(*Shape174);

HAnimSegment171->addChildren(*Transform173);

CHAnimSite* HAnimSite175 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite175->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip");
HAnimSite175->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip");
CTransform* Transform176 = (CTransform *)(m_pScene.createNode("Transform"));
Transform176->setTranslation(new float[3]{0.0963,-0.0065,0.0065});
CShape* Shape177 = (CShape *)(m_pScene.createNode("Shape"));
Shape177->setUSE("SiteShape");
Transform176->addChild(*Shape177);

HAnimSite175->addChildren(*Transform176);

HAnimSegment171->addChildren(*HAnimSite175);

HAnimJoint170->addChildren(*HAnimSegment171);

CHAnimJoint* HAnimJoint178 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint178->setName("l_tarsal_middle_phalanx_3");
HAnimJoint178->setDEF("hanim_l_tarsal_middle_phalanx_3");
HAnimJoint178->setCenter(new float[3]{0.0987,0.0086,0.0034});
CHAnimSegment* HAnimSegment179 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment179->setName("SEGMENT_FOR_l_tarsal_middle_phalanx_3");
HAnimSegment179->setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3");
CTouchSensor* TouchSensor180 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor180->setDescription("joint l_tarsal_middle_phalanx_3 segment SEGMENT_FOR_l_tarsal_middle_phalanx_3");
HAnimSegment179->addChildren(*TouchSensor180);

CTransform* Transform181 = (CTransform *)(m_pScene.createNode("Transform"));
Transform181->setTranslation(new float[3]{0.0987,0.0086,0.0034});
CShape* Shape182 = (CShape *)(m_pScene.createNode("Shape"));
Shape182->setUSE("JointShape");
Transform181->addChild(*Shape182);

HAnimSegment179->addChildren(*Transform181);

CHAnimSite* HAnimSite183 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite183->setName("SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip");
HAnimSite183->setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip");
CTransform* Transform184 = (CTransform *)(m_pScene.createNode("Transform"));
Transform184->setTranslation(new float[3]{0.0987,0.0086,0.0034});
CShape* Shape185 = (CShape *)(m_pScene.createNode("Shape"));
Shape185->setUSE("SiteShape");
Transform184->addChild(*Shape185);

HAnimSite183->addChildren(*Transform184);

HAnimSegment179->addChildren(*HAnimSite183);

HAnimJoint178->addChildren(*HAnimSegment179);

CHAnimJoint* HAnimJoint186 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint186->setName("l_tarsal_distal_phalanx_3");
HAnimJoint186->setDEF("hanim_l_tarsal_distal_phalanx_3");
HAnimJoint186->setCenter(new float[3]{0.1002,0.0178,0.0013});
CHAnimSegment* HAnimSegment187 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment187->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_3");
HAnimSegment187->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3");
CTouchSensor* TouchSensor188 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor188->setDescription("joint l_tarsal_distal_phalanx_3 segment SEGMENT_FOR_l_tarsal_distal_phalanx_3");
HAnimSegment187->addChildren(*TouchSensor188);

CTransform* Transform189 = (CTransform *)(m_pScene.createNode("Transform"));
Transform189->setTranslation(new float[3]{0.1002,0.0178,0.0013});
CShape* Shape190 = (CShape *)(m_pScene.createNode("Shape"));
Shape190->setUSE("JointShape");
Transform189->addChild(*Shape190);

HAnimSegment187->addChildren(*Transform189);

CHAnimSite* HAnimSite191 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite191->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip");
HAnimSite191->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip");
CTransform* Transform192 = (CTransform *)(m_pScene.createNode("Transform"));
Transform192->setTranslation(new float[3]{0.1002,0.0178,0.0013});
CShape* Shape193 = (CShape *)(m_pScene.createNode("Shape"));
Shape193->setUSE("SiteShape");
Transform192->addChild(*Shape193);

HAnimSite191->addChildren(*Transform192);

HAnimSegment187->addChildren(*HAnimSite191);

HAnimJoint186->addChildren(*HAnimSegment187);

HAnimJoint178->addChildren(*HAnimJoint186);

HAnimJoint170->addChildren(*HAnimJoint178);

HAnimJoint162->addChildren(*HAnimJoint170);

HAnimJoint154->addChildren(*HAnimJoint162);

HAnimJoint74->addChildren(*HAnimJoint154);

HAnimJoint66->addChildren(*HAnimJoint74);

CHAnimJoint* HAnimJoint194 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint194->setName("l_calcaneus");
HAnimJoint194->setDEF("hanim_l_calcaneus");
HAnimJoint194->setCenter(new float[3]{0.0889,-0.1278,0.0494});
CHAnimSegment* HAnimSegment195 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment195->setName("SEGMENT_FOR_l_calcaneus");
HAnimSegment195->setDEF("hanim_SEGMENT_FOR_l_calcaneus");
CTouchSensor* TouchSensor196 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor196->setDescription("joint l_calcaneus segment SEGMENT_FOR_l_calcaneus");
HAnimSegment195->addChildren(*TouchSensor196);

CTransform* Transform197 = (CTransform *)(m_pScene.createNode("Transform"));
Transform197->setTranslation(new float[3]{0.0889,-0.1278,0.0494});
CShape* Shape198 = (CShape *)(m_pScene.createNode("Shape"));
Shape198->setUSE("JointShape");
Transform197->addChild(*Shape198);

HAnimSegment195->addChildren(*Transform197);

CHAnimSite* HAnimSite199 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite199->setName("SEGMENT_FOR_l_calcaneus_tip");
HAnimSite199->setDEF("hanim_SEGMENT_FOR_l_calcaneus_tip");
CTransform* Transform200 = (CTransform *)(m_pScene.createNode("Transform"));
Transform200->setTranslation(new float[3]{0.0889,-0.1278,0.0494});
CShape* Shape201 = (CShape *)(m_pScene.createNode("Shape"));
Shape201->setUSE("SiteShape");
Transform200->addChild(*Shape201);

HAnimSite199->addChildren(*Transform200);

HAnimSegment195->addChildren(*HAnimSite199);

HAnimJoint194->addChildren(*HAnimSegment195);

CHAnimJoint* HAnimJoint202 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint202->setName("l_cuboid");
HAnimJoint202->setDEF("hanim_l_cuboid");
HAnimJoint202->setCenter(new float[3]{0.1105,-0.0998,0.0267});
CHAnimSegment* HAnimSegment203 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment203->setName("SEGMENT_FOR_l_cuboid");
HAnimSegment203->setDEF("hanim_SEGMENT_FOR_l_cuboid");
CTouchSensor* TouchSensor204 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor204->setDescription("joint l_cuboid segment SEGMENT_FOR_l_cuboid");
HAnimSegment203->addChildren(*TouchSensor204);

CTransform* Transform205 = (CTransform *)(m_pScene.createNode("Transform"));
Transform205->setTranslation(new float[3]{0.1105,-0.0998,0.0267});
CShape* Shape206 = (CShape *)(m_pScene.createNode("Shape"));
Shape206->setUSE("JointShape");
Transform205->addChild(*Shape206);

HAnimSegment203->addChildren(*Transform205);

CHAnimSite* HAnimSite207 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite207->setName("SEGMENT_FOR_l_cuboid_tip");
HAnimSite207->setDEF("hanim_SEGMENT_FOR_l_cuboid_tip");
CTransform* Transform208 = (CTransform *)(m_pScene.createNode("Transform"));
Transform208->setTranslation(new float[3]{0.1105,-0.0998,0.0267});
CShape* Shape209 = (CShape *)(m_pScene.createNode("Shape"));
Shape209->setUSE("SiteShape");
Transform208->addChild(*Shape209);

HAnimSite207->addChildren(*Transform208);

HAnimSegment203->addChildren(*HAnimSite207);

HAnimJoint202->addChildren(*HAnimSegment203);

CHAnimJoint* HAnimJoint210 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint210->setName("l_metatarsal_4");
HAnimJoint210->setDEF("hanim_l_metatarsal_4");
HAnimJoint210->setCenter(new float[3]{0.1063,-0.0634,0.016});
CHAnimSegment* HAnimSegment211 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment211->setName("SEGMENT_FOR_l_metatarsal_4");
HAnimSegment211->setDEF("hanim_SEGMENT_FOR_l_metatarsal_4");
CTouchSensor* TouchSensor212 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor212->setDescription("joint l_metatarsal_4 segment SEGMENT_FOR_l_metatarsal_4");
HAnimSegment211->addChildren(*TouchSensor212);

CTransform* Transform213 = (CTransform *)(m_pScene.createNode("Transform"));
Transform213->setTranslation(new float[3]{0.1063,-0.0634,0.016});
CShape* Shape214 = (CShape *)(m_pScene.createNode("Shape"));
Shape214->setUSE("JointShape");
Transform213->addChild(*Shape214);

HAnimSegment211->addChildren(*Transform213);

CHAnimSite* HAnimSite215 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite215->setName("SEGMENT_FOR_l_metatarsal_4_tip");
HAnimSite215->setDEF("hanim_SEGMENT_FOR_l_metatarsal_4_tip");
CTransform* Transform216 = (CTransform *)(m_pScene.createNode("Transform"));
Transform216->setTranslation(new float[3]{0.1063,-0.0634,0.016});
CShape* Shape217 = (CShape *)(m_pScene.createNode("Shape"));
Shape217->setUSE("SiteShape");
Transform216->addChild(*Shape217);

HAnimSite215->addChildren(*Transform216);

HAnimSegment211->addChildren(*HAnimSite215);

HAnimJoint210->addChildren(*HAnimSegment211);

CHAnimJoint* HAnimJoint218 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint218->setName("l_tarsal_proximal_phalanx_4");
HAnimJoint218->setDEF("hanim_l_tarsal_proximal_phalanx_4");
HAnimJoint218->setCenter(new float[3]{0.1097,-0.0107,0.0058});
CHAnimSegment* HAnimSegment219 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment219->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_4");
HAnimSegment219->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4");
CTouchSensor* TouchSensor220 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor220->setDescription("joint l_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_4");
HAnimSegment219->addChildren(*TouchSensor220);

CTransform* Transform221 = (CTransform *)(m_pScene.createNode("Transform"));
Transform221->setTranslation(new float[3]{0.1097,-0.0107,0.0058});
CShape* Shape222 = (CShape *)(m_pScene.createNode("Shape"));
Shape222->setUSE("JointShape");
Transform221->addChild(*Shape222);

HAnimSegment219->addChildren(*Transform221);

CHAnimSite* HAnimSite223 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite223->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip");
HAnimSite223->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip");
CTransform* Transform224 = (CTransform *)(m_pScene.createNode("Transform"));
Transform224->setTranslation(new float[3]{0.1097,-0.0107,0.0058});
CShape* Shape225 = (CShape *)(m_pScene.createNode("Shape"));
Shape225->setUSE("SiteShape");
Transform224->addChild(*Shape225);

HAnimSite223->addChildren(*Transform224);

HAnimSegment219->addChildren(*HAnimSite223);

HAnimJoint218->addChildren(*HAnimSegment219);

CHAnimJoint* HAnimJoint226 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint226->setName("l_tarsal_middle_phalanx_4");
HAnimJoint226->setDEF("hanim_l_tarsal_middle_phalanx_4");
HAnimJoint226->setCenter(new float[3]{0.114,0.0044,0.0037});
CHAnimSegment* HAnimSegment227 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment227->setName("SEGMENT_FOR_l_tarsal_middle_phalanx_4");
HAnimSegment227->setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4");
CTouchSensor* TouchSensor228 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor228->setDescription("joint l_tarsal_middle_phalanx_4 segment SEGMENT_FOR_l_tarsal_middle_phalanx_4");
HAnimSegment227->addChildren(*TouchSensor228);

CTransform* Transform229 = (CTransform *)(m_pScene.createNode("Transform"));
Transform229->setTranslation(new float[3]{0.114,0.0044,0.0037});
CShape* Shape230 = (CShape *)(m_pScene.createNode("Shape"));
Shape230->setUSE("JointShape");
Transform229->addChild(*Shape230);

HAnimSegment227->addChildren(*Transform229);

CHAnimSite* HAnimSite231 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite231->setName("SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip");
HAnimSite231->setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip");
CTransform* Transform232 = (CTransform *)(m_pScene.createNode("Transform"));
Transform232->setTranslation(new float[3]{0.114,0.0044,0.0037});
CShape* Shape233 = (CShape *)(m_pScene.createNode("Shape"));
Shape233->setUSE("SiteShape");
Transform232->addChild(*Shape233);

HAnimSite231->addChildren(*Transform232);

HAnimSegment227->addChildren(*HAnimSite231);

HAnimJoint226->addChildren(*HAnimSegment227);

CHAnimJoint* HAnimJoint234 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint234->setName("l_tarsal_distal_phalanx_4");
HAnimJoint234->setDEF("hanim_l_tarsal_distal_phalanx_4");
HAnimJoint234->setCenter(new float[3]{0.1155,0.0118,0.0008});
CHAnimSegment* HAnimSegment235 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment235->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_4");
HAnimSegment235->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4");
CTouchSensor* TouchSensor236 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor236->setDescription("joint l_tarsal_distal_phalanx_4 segment SEGMENT_FOR_l_tarsal_distal_phalanx_4");
HAnimSegment235->addChildren(*TouchSensor236);

CTransform* Transform237 = (CTransform *)(m_pScene.createNode("Transform"));
Transform237->setTranslation(new float[3]{0.1155,0.0118,0.0008});
CShape* Shape238 = (CShape *)(m_pScene.createNode("Shape"));
Shape238->setUSE("JointShape");
Transform237->addChild(*Shape238);

HAnimSegment235->addChildren(*Transform237);

CHAnimSite* HAnimSite239 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite239->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip");
HAnimSite239->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip");
CTransform* Transform240 = (CTransform *)(m_pScene.createNode("Transform"));
Transform240->setTranslation(new float[3]{0.1155,0.0118,0.0008});
CShape* Shape241 = (CShape *)(m_pScene.createNode("Shape"));
Shape241->setUSE("SiteShape");
Transform240->addChild(*Shape241);

HAnimSite239->addChildren(*Transform240);

HAnimSegment235->addChildren(*HAnimSite239);

HAnimJoint234->addChildren(*HAnimSegment235);

HAnimJoint226->addChildren(*HAnimJoint234);

HAnimJoint218->addChildren(*HAnimJoint226);

HAnimJoint210->addChildren(*HAnimJoint218);

HAnimJoint202->addChildren(*HAnimJoint210);

CHAnimJoint* HAnimJoint242 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint242->setName("l_metatarsal_5");
HAnimJoint242->setDEF("hanim_l_metatarsal_5");
HAnimJoint242->setCenter(new float[3]{0.1206,-0.0671,0.0124});
CHAnimSegment* HAnimSegment243 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment243->setName("SEGMENT_FOR_l_metatarsal_5");
HAnimSegment243->setDEF("hanim_SEGMENT_FOR_l_metatarsal_5");
CTouchSensor* TouchSensor244 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor244->setDescription("joint l_metatarsal_5 segment SEGMENT_FOR_l_metatarsal_5");
HAnimSegment243->addChildren(*TouchSensor244);

CTransform* Transform245 = (CTransform *)(m_pScene.createNode("Transform"));
Transform245->setTranslation(new float[3]{0.1206,-0.0671,0.0124});
CShape* Shape246 = (CShape *)(m_pScene.createNode("Shape"));
Shape246->setUSE("JointShape");
Transform245->addChild(*Shape246);

HAnimSegment243->addChildren(*Transform245);

CHAnimSite* HAnimSite247 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite247->setName("SEGMENT_FOR_l_metatarsal_5_tip");
HAnimSite247->setDEF("hanim_SEGMENT_FOR_l_metatarsal_5_tip");
CTransform* Transform248 = (CTransform *)(m_pScene.createNode("Transform"));
Transform248->setTranslation(new float[3]{0.1206,-0.0671,0.0124});
CShape* Shape249 = (CShape *)(m_pScene.createNode("Shape"));
Shape249->setUSE("SiteShape");
Transform248->addChild(*Shape249);

HAnimSite247->addChildren(*Transform248);

HAnimSegment243->addChildren(*HAnimSite247);

HAnimJoint242->addChildren(*HAnimSegment243);

CHAnimJoint* HAnimJoint250 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint250->setName("l_tarsal_proximal_phalanx_5");
HAnimJoint250->setDEF("hanim_l_tarsal_proximal_phalanx_5");
HAnimJoint250->setCenter(new float[3]{0.1239,-0.0153,0.0051});
CHAnimSegment* HAnimSegment251 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment251->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_5");
HAnimSegment251->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5");
CTouchSensor* TouchSensor252 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor252->setDescription("joint l_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_5");
HAnimSegment251->addChildren(*TouchSensor252);

CTransform* Transform253 = (CTransform *)(m_pScene.createNode("Transform"));
Transform253->setTranslation(new float[3]{0.1239,-0.0153,0.0051});
CShape* Shape254 = (CShape *)(m_pScene.createNode("Shape"));
Shape254->setUSE("JointShape");
Transform253->addChild(*Shape254);

HAnimSegment251->addChildren(*Transform253);

CHAnimSite* HAnimSite255 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite255->setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip");
HAnimSite255->setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip");
CTransform* Transform256 = (CTransform *)(m_pScene.createNode("Transform"));
Transform256->setTranslation(new float[3]{0.1239,-0.0153,0.0051});
CShape* Shape257 = (CShape *)(m_pScene.createNode("Shape"));
Shape257->setUSE("SiteShape");
Transform256->addChild(*Shape257);

HAnimSite255->addChildren(*Transform256);

HAnimSegment251->addChildren(*HAnimSite255);

HAnimJoint250->addChildren(*HAnimSegment251);

CHAnimJoint* HAnimJoint258 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint258->setName("l_tarsal_middle_phalanx_5");
HAnimJoint258->setDEF("hanim_l_tarsal_middle_phalanx_5");
HAnimJoint258->setCenter(new float[3]{0.1262,-0.0077,0.0023});
CHAnimSegment* HAnimSegment259 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment259->setName("SEGMENT_FOR_l_tarsal_middle_phalanx_5");
HAnimSegment259->setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5");
CTouchSensor* TouchSensor260 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor260->setDescription("joint l_tarsal_middle_phalanx_5 segment SEGMENT_FOR_l_tarsal_middle_phalanx_5");
HAnimSegment259->addChildren(*TouchSensor260);

CTransform* Transform261 = (CTransform *)(m_pScene.createNode("Transform"));
Transform261->setTranslation(new float[3]{0.1262,-0.0077,0.0023});
CShape* Shape262 = (CShape *)(m_pScene.createNode("Shape"));
Shape262->setUSE("JointShape");
Transform261->addChild(*Shape262);

HAnimSegment259->addChildren(*Transform261);

CHAnimSite* HAnimSite263 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite263->setName("SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip");
HAnimSite263->setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip");
CTransform* Transform264 = (CTransform *)(m_pScene.createNode("Transform"));
Transform264->setTranslation(new float[3]{0.1262,-0.0077,0.0023});
CShape* Shape265 = (CShape *)(m_pScene.createNode("Shape"));
Shape265->setUSE("SiteShape");
Transform264->addChild(*Shape265);

HAnimSite263->addChildren(*Transform264);

HAnimSegment259->addChildren(*HAnimSite263);

HAnimJoint258->addChildren(*HAnimSegment259);

CHAnimJoint* HAnimJoint266 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint266->setName("l_tarsal_distal_phalanx_5");
HAnimJoint266->setDEF("hanim_l_tarsal_distal_phalanx_5");
HAnimJoint266->setCenter(new float[3]{0.1271,0,0});
CHAnimSegment* HAnimSegment267 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment267->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_5");
HAnimSegment267->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5");
CTouchSensor* TouchSensor268 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor268->setDescription("joint l_tarsal_distal_phalanx_5 segment SEGMENT_FOR_l_tarsal_distal_phalanx_5");
HAnimSegment267->addChildren(*TouchSensor268);

CTransform* Transform269 = (CTransform *)(m_pScene.createNode("Transform"));
Transform269->setTranslation(new float[3]{0.1271,0,0});
CShape* Shape270 = (CShape *)(m_pScene.createNode("Shape"));
Shape270->setUSE("JointShape");
Transform269->addChild(*Shape270);

HAnimSegment267->addChildren(*Transform269);

CHAnimSite* HAnimSite271 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite271->setName("SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip");
HAnimSite271->setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip");
CTransform* Transform272 = (CTransform *)(m_pScene.createNode("Transform"));
Transform272->setTranslation(new float[3]{0.1271,0,0});
CShape* Shape273 = (CShape *)(m_pScene.createNode("Shape"));
Shape273->setUSE("SiteShape");
Transform272->addChild(*Shape273);

HAnimSite271->addChildren(*Transform272);

HAnimSegment267->addChildren(*HAnimSite271);

HAnimJoint266->addChildren(*HAnimSegment267);

HAnimJoint258->addChildren(*HAnimJoint266);

HAnimJoint250->addChildren(*HAnimJoint258);

HAnimJoint242->addChildren(*HAnimJoint250);

HAnimJoint202->addChildren(*HAnimJoint242);

HAnimJoint194->addChildren(*HAnimJoint202);

HAnimJoint66->addChildren(*HAnimJoint194);

HAnimJoint58->addChildren(*HAnimJoint66);

HAnimJoint50->addChildren(*HAnimJoint58);

HAnimJoint42->addChildren(*HAnimJoint50);

CHAnimJoint* HAnimJoint274 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint274->setName("r_thigh");
HAnimJoint274->setDEF("hanim_r_thigh");
HAnimJoint274->setCenter(new float[3]{-0.0948,-0.1202,0.8181});
CHAnimSegment* HAnimSegment275 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment275->setName("SEGMENT_FOR_r_thigh");
HAnimSegment275->setDEF("hanim_SEGMENT_FOR_r_thigh");
CTouchSensor* TouchSensor276 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor276->setDescription("joint r_thigh segment SEGMENT_FOR_r_thigh");
HAnimSegment275->addChildren(*TouchSensor276);

CTransform* Transform277 = (CTransform *)(m_pScene.createNode("Transform"));
Transform277->setTranslation(new float[3]{-0.0948,-0.1202,0.8181});
CShape* Shape278 = (CShape *)(m_pScene.createNode("Shape"));
Shape278->setUSE("JointShape");
Transform277->addChild(*Shape278);

HAnimSegment275->addChildren(*Transform277);

CHAnimSite* HAnimSite279 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite279->setName("SEGMENT_FOR_r_thigh_tip");
HAnimSite279->setDEF("hanim_SEGMENT_FOR_r_thigh_tip");
CTransform* Transform280 = (CTransform *)(m_pScene.createNode("Transform"));
Transform280->setTranslation(new float[3]{-0.0948,-0.1202,0.8181});
CShape* Shape281 = (CShape *)(m_pScene.createNode("Shape"));
Shape281->setUSE("SiteShape");
Transform280->addChild(*Shape281);

HAnimSite279->addChildren(*Transform280);

HAnimSegment275->addChildren(*HAnimSite279);

HAnimJoint274->addChildren(*HAnimSegment275);

CHAnimJoint* HAnimJoint282 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint282->setName("r_calf");
HAnimJoint282->setDEF("hanim_r_calf");
HAnimJoint282->setCenter(new float[3]{-0.0928,-0.1213,0.4003});
CHAnimSegment* HAnimSegment283 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment283->setName("SEGMENT_FOR_r_calf");
HAnimSegment283->setDEF("hanim_SEGMENT_FOR_r_calf");
CTouchSensor* TouchSensor284 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor284->setDescription("joint r_calf segment SEGMENT_FOR_r_calf");
HAnimSegment283->addChildren(*TouchSensor284);

CTransform* Transform285 = (CTransform *)(m_pScene.createNode("Transform"));
Transform285->setTranslation(new float[3]{-0.0928,-0.1213,0.4003});
CShape* Shape286 = (CShape *)(m_pScene.createNode("Shape"));
Shape286->setUSE("JointShape");
Transform285->addChild(*Shape286);

HAnimSegment283->addChildren(*Transform285);

CHAnimSite* HAnimSite287 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite287->setName("SEGMENT_FOR_r_calf_tip");
HAnimSite287->setDEF("hanim_SEGMENT_FOR_r_calf_tip");
CTransform* Transform288 = (CTransform *)(m_pScene.createNode("Transform"));
Transform288->setTranslation(new float[3]{-0.0928,-0.1213,0.4003});
CShape* Shape289 = (CShape *)(m_pScene.createNode("Shape"));
Shape289->setUSE("SiteShape");
Transform288->addChild(*Shape289);

HAnimSite287->addChildren(*Transform288);

HAnimSegment283->addChildren(*HAnimSite287);

HAnimJoint282->addChildren(*HAnimSegment283);

CHAnimJoint* HAnimJoint290 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint290->setName("r_talus");
HAnimJoint290->setDEF("hanim_r_talus");
HAnimJoint290->setCenter(new float[3]{-0.0886,-0.1123,0.0869});
CHAnimSegment* HAnimSegment291 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment291->setName("SEGMENT_FOR_r_talus");
HAnimSegment291->setDEF("hanim_SEGMENT_FOR_r_talus");
CTouchSensor* TouchSensor292 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor292->setDescription("joint r_talus segment SEGMENT_FOR_r_talus");
HAnimSegment291->addChildren(*TouchSensor292);

CTransform* Transform293 = (CTransform *)(m_pScene.createNode("Transform"));
Transform293->setTranslation(new float[3]{-0.0886,-0.1123,0.0869});
CShape* Shape294 = (CShape *)(m_pScene.createNode("Shape"));
Shape294->setUSE("JointShape");
Transform293->addChild(*Shape294);

HAnimSegment291->addChildren(*Transform293);

CHAnimSite* HAnimSite295 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite295->setName("SEGMENT_FOR_r_talus_tip");
HAnimSite295->setDEF("hanim_SEGMENT_FOR_r_talus_tip");
CTransform* Transform296 = (CTransform *)(m_pScene.createNode("Transform"));
Transform296->setTranslation(new float[3]{-0.0886,-0.1123,0.0869});
CShape* Shape297 = (CShape *)(m_pScene.createNode("Shape"));
Shape297->setUSE("SiteShape");
Transform296->addChild(*Shape297);

HAnimSite295->addChildren(*Transform296);

HAnimSegment291->addChildren(*HAnimSite295);

HAnimJoint290->addChildren(*HAnimSegment291);

CHAnimJoint* HAnimJoint298 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint298->setName("r_navicular");
HAnimJoint298->setDEF("hanim_r_navicular");
HAnimJoint298->setCenter(new float[3]{-0.0781,-0.097,0.0283});
CHAnimSegment* HAnimSegment299 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment299->setName("SEGMENT_FOR_r_navicular");
HAnimSegment299->setDEF("hanim_SEGMENT_FOR_r_navicular");
CTouchSensor* TouchSensor300 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor300->setDescription("joint r_navicular segment SEGMENT_FOR_r_navicular");
HAnimSegment299->addChildren(*TouchSensor300);

CTransform* Transform301 = (CTransform *)(m_pScene.createNode("Transform"));
Transform301->setTranslation(new float[3]{-0.0781,-0.097,0.0283});
CShape* Shape302 = (CShape *)(m_pScene.createNode("Shape"));
Shape302->setUSE("JointShape");
Transform301->addChild(*Shape302);

HAnimSegment299->addChildren(*Transform301);

CHAnimSite* HAnimSite303 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite303->setName("SEGMENT_FOR_r_navicular_tip");
HAnimSite303->setDEF("hanim_SEGMENT_FOR_r_navicular_tip");
CTransform* Transform304 = (CTransform *)(m_pScene.createNode("Transform"));
Transform304->setTranslation(new float[3]{-0.0781,-0.097,0.0283});
CShape* Shape305 = (CShape *)(m_pScene.createNode("Shape"));
Shape305->setUSE("SiteShape");
Transform304->addChild(*Shape305);

HAnimSite303->addChildren(*Transform304);

HAnimSegment299->addChildren(*HAnimSite303);

HAnimJoint298->addChildren(*HAnimSegment299);

CHAnimJoint* HAnimJoint306 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint306->setName("r_cuneiform_1");
HAnimJoint306->setDEF("hanim_r_cuneiform_1");
HAnimJoint306->setCenter(new float[3]{-0.0672,-0.0835,0.0235});
CHAnimSegment* HAnimSegment307 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment307->setName("SEGMENT_FOR_r_cuneiform_1");
HAnimSegment307->setDEF("hanim_SEGMENT_FOR_r_cuneiform_1");
CTouchSensor* TouchSensor308 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor308->setDescription("joint r_cuneiform_1 segment SEGMENT_FOR_r_cuneiform_1");
HAnimSegment307->addChildren(*TouchSensor308);

CTransform* Transform309 = (CTransform *)(m_pScene.createNode("Transform"));
Transform309->setTranslation(new float[3]{-0.0672,-0.0835,0.0235});
CShape* Shape310 = (CShape *)(m_pScene.createNode("Shape"));
Shape310->setUSE("JointShape");
Transform309->addChild(*Shape310);

HAnimSegment307->addChildren(*Transform309);

CHAnimSite* HAnimSite311 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite311->setName("SEGMENT_FOR_r_cuneiform_1_tip");
HAnimSite311->setDEF("hanim_SEGMENT_FOR_r_cuneiform_1_tip");
CTransform* Transform312 = (CTransform *)(m_pScene.createNode("Transform"));
Transform312->setTranslation(new float[3]{-0.0672,-0.0835,0.0235});
CShape* Shape313 = (CShape *)(m_pScene.createNode("Shape"));
Shape313->setUSE("SiteShape");
Transform312->addChild(*Shape313);

HAnimSite311->addChildren(*Transform312);

HAnimSegment307->addChildren(*HAnimSite311);

HAnimJoint306->addChildren(*HAnimSegment307);

CHAnimJoint* HAnimJoint314 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint314->setName("r_metatarsal_1");
HAnimJoint314->setDEF("hanim_r_metatarsal_1");
HAnimJoint314->setCenter(new float[3]{-0.0644,-0.0577,0.0147});
CHAnimSegment* HAnimSegment315 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment315->setName("SEGMENT_FOR_r_metatarsal_1");
HAnimSegment315->setDEF("hanim_SEGMENT_FOR_r_metatarsal_1");
CTouchSensor* TouchSensor316 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor316->setDescription("joint r_metatarsal_1 segment SEGMENT_FOR_r_metatarsal_1");
HAnimSegment315->addChildren(*TouchSensor316);

CTransform* Transform317 = (CTransform *)(m_pScene.createNode("Transform"));
Transform317->setTranslation(new float[3]{-0.0644,-0.0577,0.0147});
CShape* Shape318 = (CShape *)(m_pScene.createNode("Shape"));
Shape318->setUSE("JointShape");
Transform317->addChild(*Shape318);

HAnimSegment315->addChildren(*Transform317);

CHAnimSite* HAnimSite319 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite319->setName("SEGMENT_FOR_r_metatarsal_1_tip");
HAnimSite319->setDEF("hanim_SEGMENT_FOR_r_metatarsal_1_tip");
CTransform* Transform320 = (CTransform *)(m_pScene.createNode("Transform"));
Transform320->setTranslation(new float[3]{-0.0644,-0.0577,0.0147});
CShape* Shape321 = (CShape *)(m_pScene.createNode("Shape"));
Shape321->setUSE("SiteShape");
Transform320->addChild(*Shape321);

HAnimSite319->addChildren(*Transform320);

HAnimSegment315->addChildren(*HAnimSite319);

HAnimJoint314->addChildren(*HAnimSegment315);

CHAnimJoint* HAnimJoint322 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint322->setName("r_tarsal_proximal_phalanx_1");
HAnimJoint322->setDEF("hanim_r_tarsal_proximal_phalanx_1");
HAnimJoint322->setCenter(new float[3]{-0.0619,-0.0083,0.0059});
CHAnimSegment* HAnimSegment323 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment323->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_1");
HAnimSegment323->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1");
CTouchSensor* TouchSensor324 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor324->setDescription("joint r_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_1");
HAnimSegment323->addChildren(*TouchSensor324);

CTransform* Transform325 = (CTransform *)(m_pScene.createNode("Transform"));
Transform325->setTranslation(new float[3]{-0.0619,-0.0083,0.0059});
CShape* Shape326 = (CShape *)(m_pScene.createNode("Shape"));
Shape326->setUSE("JointShape");
Transform325->addChild(*Shape326);

HAnimSegment323->addChildren(*Transform325);

CHAnimSite* HAnimSite327 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite327->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip");
HAnimSite327->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip");
CTransform* Transform328 = (CTransform *)(m_pScene.createNode("Transform"));
Transform328->setTranslation(new float[3]{-0.0619,-0.0083,0.0059});
CShape* Shape329 = (CShape *)(m_pScene.createNode("Shape"));
Shape329->setUSE("SiteShape");
Transform328->addChild(*Shape329);

HAnimSite327->addChildren(*Transform328);

HAnimSegment323->addChildren(*HAnimSite327);

HAnimJoint322->addChildren(*HAnimSegment323);

CHAnimJoint* HAnimJoint330 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint330->setName("r_tarsal_distal_phalanx_1");
HAnimJoint330->setDEF("hanim_r_tarsal_distal_phalanx_1");
CHAnimSegment* HAnimSegment331 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment331->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_1");
HAnimSegment331->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1");
CTouchSensor* TouchSensor332 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor332->setDescription("joint r_tarsal_distal_phalanx_1 segment SEGMENT_FOR_r_tarsal_distal_phalanx_1");
HAnimSegment331->addChildren(*TouchSensor332);

CTransform* Transform333 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape334 = (CShape *)(m_pScene.createNode("Shape"));
Shape334->setUSE("JointShape");
Transform333->addChild(*Shape334);

HAnimSegment331->addChildren(*Transform333);

CHAnimSite* HAnimSite335 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite335->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip");
HAnimSite335->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip");
CTransform* Transform336 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape337 = (CShape *)(m_pScene.createNode("Shape"));
Shape337->setUSE("SiteShape");
Transform336->addChild(*Shape337);

HAnimSite335->addChildren(*Transform336);

HAnimSegment331->addChildren(*HAnimSite335);

HAnimJoint330->addChildren(*HAnimSegment331);

HAnimJoint322->addChildren(*HAnimJoint330);

HAnimJoint314->addChildren(*HAnimJoint322);

HAnimJoint306->addChildren(*HAnimJoint314);

HAnimJoint298->addChildren(*HAnimJoint306);

CHAnimJoint* HAnimJoint338 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint338->setName("r_cuneiform_2");
HAnimJoint338->setDEF("hanim_r_cuneiform_2");
HAnimJoint338->setCenter(new float[3]{-0.0812,-0.0805,0.025});
CHAnimSegment* HAnimSegment339 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment339->setName("SEGMENT_FOR_r_cuneiform_2");
HAnimSegment339->setDEF("hanim_SEGMENT_FOR_r_cuneiform_2");
CTouchSensor* TouchSensor340 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor340->setDescription("joint r_cuneiform_2 segment SEGMENT_FOR_r_cuneiform_2");
HAnimSegment339->addChildren(*TouchSensor340);

CTransform* Transform341 = (CTransform *)(m_pScene.createNode("Transform"));
Transform341->setTranslation(new float[3]{-0.0812,-0.0805,0.025});
CShape* Shape342 = (CShape *)(m_pScene.createNode("Shape"));
Shape342->setUSE("JointShape");
Transform341->addChild(*Shape342);

HAnimSegment339->addChildren(*Transform341);

CHAnimSite* HAnimSite343 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite343->setName("SEGMENT_FOR_r_cuneiform_2_tip");
HAnimSite343->setDEF("hanim_SEGMENT_FOR_r_cuneiform_2_tip");
CTransform* Transform344 = (CTransform *)(m_pScene.createNode("Transform"));
Transform344->setTranslation(new float[3]{-0.0812,-0.0805,0.025});
CShape* Shape345 = (CShape *)(m_pScene.createNode("Shape"));
Shape345->setUSE("SiteShape");
Transform344->addChild(*Shape345);

HAnimSite343->addChildren(*Transform344);

HAnimSegment339->addChildren(*HAnimSite343);

HAnimJoint338->addChildren(*HAnimSegment339);

CHAnimJoint* HAnimJoint346 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint346->setName("r_metatarsal_2");
HAnimJoint346->setDEF("hanim_r_metatarsal_2");
HAnimJoint346->setCenter(new float[3]{-0.08,-0.0608,0.0175});
CHAnimSegment* HAnimSegment347 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment347->setName("SEGMENT_FOR_r_metatarsal_2");
HAnimSegment347->setDEF("hanim_SEGMENT_FOR_r_metatarsal_2");
CTouchSensor* TouchSensor348 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor348->setDescription("joint r_metatarsal_2 segment SEGMENT_FOR_r_metatarsal_2");
HAnimSegment347->addChildren(*TouchSensor348);

CTransform* Transform349 = (CTransform *)(m_pScene.createNode("Transform"));
Transform349->setTranslation(new float[3]{-0.08,-0.0608,0.0175});
CShape* Shape350 = (CShape *)(m_pScene.createNode("Shape"));
Shape350->setUSE("JointShape");
Transform349->addChild(*Shape350);

HAnimSegment347->addChildren(*Transform349);

CHAnimSite* HAnimSite351 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite351->setName("SEGMENT_FOR_r_metatarsal_2_tip");
HAnimSite351->setDEF("hanim_SEGMENT_FOR_r_metatarsal_2_tip");
CTransform* Transform352 = (CTransform *)(m_pScene.createNode("Transform"));
Transform352->setTranslation(new float[3]{-0.08,-0.0608,0.0175});
CShape* Shape353 = (CShape *)(m_pScene.createNode("Shape"));
Shape353->setUSE("SiteShape");
Transform352->addChild(*Shape353);

HAnimSite351->addChildren(*Transform352);

HAnimSegment347->addChildren(*HAnimSite351);

HAnimJoint346->addChildren(*HAnimSegment347);

CHAnimJoint* HAnimJoint354 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint354->setName("r_tarsal_proximal_phalanx_2");
HAnimJoint354->setDEF("hanim_r_tarsal_proximal_phalanx_2");
HAnimJoint354->setCenter(new float[3]{-0.0823,-0.004,0.0064});
CHAnimSegment* HAnimSegment355 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment355->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_2");
HAnimSegment355->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2");
CTouchSensor* TouchSensor356 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor356->setDescription("joint r_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_2");
HAnimSegment355->addChildren(*TouchSensor356);

CTransform* Transform357 = (CTransform *)(m_pScene.createNode("Transform"));
Transform357->setTranslation(new float[3]{-0.0823,-0.004,0.0064});
CShape* Shape358 = (CShape *)(m_pScene.createNode("Shape"));
Shape358->setUSE("JointShape");
Transform357->addChild(*Shape358);

HAnimSegment355->addChildren(*Transform357);

CHAnimSite* HAnimSite359 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite359->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip");
HAnimSite359->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip");
CTransform* Transform360 = (CTransform *)(m_pScene.createNode("Transform"));
Transform360->setTranslation(new float[3]{-0.0823,-0.004,0.0064});
CShape* Shape361 = (CShape *)(m_pScene.createNode("Shape"));
Shape361->setUSE("SiteShape");
Transform360->addChild(*Shape361);

HAnimSite359->addChildren(*Transform360);

HAnimSegment355->addChildren(*HAnimSite359);

HAnimJoint354->addChildren(*HAnimSegment355);

CHAnimJoint* HAnimJoint362 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint362->setName("r_tarsal_middle_phalanx_2");
HAnimJoint362->setDEF("hanim_r_tarsal_middle_phalanx_2");
HAnimJoint362->setCenter(new float[3]{-0.0841,0.0121,0.0041});
CHAnimSegment* HAnimSegment363 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment363->setName("SEGMENT_FOR_r_tarsal_middle_phalanx_2");
HAnimSegment363->setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2");
CTouchSensor* TouchSensor364 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor364->setDescription("joint r_tarsal_middle_phalanx_2 segment SEGMENT_FOR_r_tarsal_middle_phalanx_2");
HAnimSegment363->addChildren(*TouchSensor364);

CTransform* Transform365 = (CTransform *)(m_pScene.createNode("Transform"));
Transform365->setTranslation(new float[3]{-0.0841,0.0121,0.0041});
CShape* Shape366 = (CShape *)(m_pScene.createNode("Shape"));
Shape366->setUSE("JointShape");
Transform365->addChild(*Shape366);

HAnimSegment363->addChildren(*Transform365);

CHAnimSite* HAnimSite367 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite367->setName("SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip");
HAnimSite367->setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip");
CTransform* Transform368 = (CTransform *)(m_pScene.createNode("Transform"));
Transform368->setTranslation(new float[3]{-0.0841,0.0121,0.0041});
CShape* Shape369 = (CShape *)(m_pScene.createNode("Shape"));
Shape369->setUSE("SiteShape");
Transform368->addChild(*Shape369);

HAnimSite367->addChildren(*Transform368);

HAnimSegment363->addChildren(*HAnimSite367);

HAnimJoint362->addChildren(*HAnimSegment363);

CHAnimJoint* HAnimJoint370 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint370->setName("r_tarsal_distal_phalanx_2");
HAnimJoint370->setDEF("hanim_r_tarsal_distal_phalanx_2");
HAnimJoint370->setCenter(new float[3]{-0.0841,0.0216,0.0013});
CHAnimSegment* HAnimSegment371 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment371->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_2");
HAnimSegment371->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2");
CTouchSensor* TouchSensor372 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor372->setDescription("joint r_tarsal_distal_phalanx_2 segment SEGMENT_FOR_r_tarsal_distal_phalanx_2");
HAnimSegment371->addChildren(*TouchSensor372);

CTransform* Transform373 = (CTransform *)(m_pScene.createNode("Transform"));
Transform373->setTranslation(new float[3]{-0.0841,0.0216,0.0013});
CShape* Shape374 = (CShape *)(m_pScene.createNode("Shape"));
Shape374->setUSE("JointShape");
Transform373->addChild(*Shape374);

HAnimSegment371->addChildren(*Transform373);

CHAnimSite* HAnimSite375 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite375->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip");
HAnimSite375->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip");
CTransform* Transform376 = (CTransform *)(m_pScene.createNode("Transform"));
Transform376->setTranslation(new float[3]{-0.0841,0.0216,0.0013});
CShape* Shape377 = (CShape *)(m_pScene.createNode("Shape"));
Shape377->setUSE("SiteShape");
Transform376->addChild(*Shape377);

HAnimSite375->addChildren(*Transform376);

HAnimSegment371->addChildren(*HAnimSite375);

HAnimJoint370->addChildren(*HAnimSegment371);

HAnimJoint362->addChildren(*HAnimJoint370);

HAnimJoint354->addChildren(*HAnimJoint362);

HAnimJoint346->addChildren(*HAnimJoint354);

HAnimJoint338->addChildren(*HAnimJoint346);

HAnimJoint298->addChildren(*HAnimJoint338);

CHAnimJoint* HAnimJoint378 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint378->setName("r_cuneiform_3");
HAnimJoint378->setDEF("hanim_r_cuneiform_3");
HAnimJoint378->setCenter(new float[3]{-0.0928,-0.0821,0.0248});
CHAnimSegment* HAnimSegment379 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment379->setName("SEGMENT_FOR_r_cuneiform_3");
HAnimSegment379->setDEF("hanim_SEGMENT_FOR_r_cuneiform_3");
CTouchSensor* TouchSensor380 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor380->setDescription("joint r_cuneiform_3 segment SEGMENT_FOR_r_cuneiform_3");
HAnimSegment379->addChildren(*TouchSensor380);

CTransform* Transform381 = (CTransform *)(m_pScene.createNode("Transform"));
Transform381->setTranslation(new float[3]{-0.0928,-0.0821,0.0248});
CShape* Shape382 = (CShape *)(m_pScene.createNode("Shape"));
Shape382->setUSE("JointShape");
Transform381->addChild(*Shape382);

HAnimSegment379->addChildren(*Transform381);

CHAnimSite* HAnimSite383 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite383->setName("SEGMENT_FOR_r_cuneiform_3_tip");
HAnimSite383->setDEF("hanim_SEGMENT_FOR_r_cuneiform_3_tip");
CTransform* Transform384 = (CTransform *)(m_pScene.createNode("Transform"));
Transform384->setTranslation(new float[3]{-0.0928,-0.0821,0.0248});
CShape* Shape385 = (CShape *)(m_pScene.createNode("Shape"));
Shape385->setUSE("SiteShape");
Transform384->addChild(*Shape385);

HAnimSite383->addChildren(*Transform384);

HAnimSegment379->addChildren(*HAnimSite383);

HAnimJoint378->addChildren(*HAnimSegment379);

CHAnimJoint* HAnimJoint386 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint386->setName("r_metatarsal_3");
HAnimJoint386->setDEF("hanim_r_metatarsal_3");
HAnimJoint386->setCenter(new float[3]{-0.0944,-0.0625,0.0175});
CHAnimSegment* HAnimSegment387 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment387->setName("SEGMENT_FOR_r_metatarsal_3");
HAnimSegment387->setDEF("hanim_SEGMENT_FOR_r_metatarsal_3");
CTouchSensor* TouchSensor388 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor388->setDescription("joint r_metatarsal_3 segment SEGMENT_FOR_r_metatarsal_3");
HAnimSegment387->addChildren(*TouchSensor388);

CTransform* Transform389 = (CTransform *)(m_pScene.createNode("Transform"));
Transform389->setTranslation(new float[3]{-0.0944,-0.0625,0.0175});
CShape* Shape390 = (CShape *)(m_pScene.createNode("Shape"));
Shape390->setUSE("JointShape");
Transform389->addChild(*Shape390);

HAnimSegment387->addChildren(*Transform389);

CHAnimSite* HAnimSite391 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite391->setName("SEGMENT_FOR_r_metatarsal_3_tip");
HAnimSite391->setDEF("hanim_SEGMENT_FOR_r_metatarsal_3_tip");
CTransform* Transform392 = (CTransform *)(m_pScene.createNode("Transform"));
Transform392->setTranslation(new float[3]{-0.0944,-0.0625,0.0175});
CShape* Shape393 = (CShape *)(m_pScene.createNode("Shape"));
Shape393->setUSE("SiteShape");
Transform392->addChild(*Shape393);

HAnimSite391->addChildren(*Transform392);

HAnimSegment387->addChildren(*HAnimSite391);

HAnimJoint386->addChildren(*HAnimSegment387);

CHAnimJoint* HAnimJoint394 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint394->setName("r_tarsal_proximal_phalanx_3");
HAnimJoint394->setDEF("hanim_r_tarsal_proximal_phalanx_3");
HAnimJoint394->setCenter(new float[3]{-0.0963,-0.0065,0.0065});
CHAnimSegment* HAnimSegment395 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment395->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_3");
HAnimSegment395->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3");
CTouchSensor* TouchSensor396 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor396->setDescription("joint r_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_3");
HAnimSegment395->addChildren(*TouchSensor396);

CTransform* Transform397 = (CTransform *)(m_pScene.createNode("Transform"));
Transform397->setTranslation(new float[3]{-0.0963,-0.0065,0.0065});
CShape* Shape398 = (CShape *)(m_pScene.createNode("Shape"));
Shape398->setUSE("JointShape");
Transform397->addChild(*Shape398);

HAnimSegment395->addChildren(*Transform397);

CHAnimSite* HAnimSite399 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite399->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip");
HAnimSite399->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip");
CTransform* Transform400 = (CTransform *)(m_pScene.createNode("Transform"));
Transform400->setTranslation(new float[3]{-0.0963,-0.0065,0.0065});
CShape* Shape401 = (CShape *)(m_pScene.createNode("Shape"));
Shape401->setUSE("SiteShape");
Transform400->addChild(*Shape401);

HAnimSite399->addChildren(*Transform400);

HAnimSegment395->addChildren(*HAnimSite399);

HAnimJoint394->addChildren(*HAnimSegment395);

CHAnimJoint* HAnimJoint402 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint402->setName("r_tarsal_middle_phalanx_3");
HAnimJoint402->setDEF("hanim_r_tarsal_middle_phalanx_3");
HAnimJoint402->setCenter(new float[3]{-0.0987,0.0086,0.0034});
CHAnimSegment* HAnimSegment403 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment403->setName("SEGMENT_FOR_r_tarsal_middle_phalanx_3");
HAnimSegment403->setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3");
CTouchSensor* TouchSensor404 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor404->setDescription("joint r_tarsal_middle_phalanx_3 segment SEGMENT_FOR_r_tarsal_middle_phalanx_3");
HAnimSegment403->addChildren(*TouchSensor404);

CTransform* Transform405 = (CTransform *)(m_pScene.createNode("Transform"));
Transform405->setTranslation(new float[3]{-0.0987,0.0086,0.0034});
CShape* Shape406 = (CShape *)(m_pScene.createNode("Shape"));
Shape406->setUSE("JointShape");
Transform405->addChild(*Shape406);

HAnimSegment403->addChildren(*Transform405);

CHAnimSite* HAnimSite407 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite407->setName("SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip");
HAnimSite407->setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip");
CTransform* Transform408 = (CTransform *)(m_pScene.createNode("Transform"));
Transform408->setTranslation(new float[3]{-0.0987,0.0086,0.0034});
CShape* Shape409 = (CShape *)(m_pScene.createNode("Shape"));
Shape409->setUSE("SiteShape");
Transform408->addChild(*Shape409);

HAnimSite407->addChildren(*Transform408);

HAnimSegment403->addChildren(*HAnimSite407);

HAnimJoint402->addChildren(*HAnimSegment403);

CHAnimJoint* HAnimJoint410 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint410->setName("r_tarsal_distal_phalanx_3");
HAnimJoint410->setDEF("hanim_r_tarsal_distal_phalanx_3");
HAnimJoint410->setCenter(new float[3]{-0.1002,0.0178,0.0013});
CHAnimSegment* HAnimSegment411 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment411->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_3");
HAnimSegment411->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3");
CTouchSensor* TouchSensor412 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor412->setDescription("joint r_tarsal_distal_phalanx_3 segment SEGMENT_FOR_r_tarsal_distal_phalanx_3");
HAnimSegment411->addChildren(*TouchSensor412);

CTransform* Transform413 = (CTransform *)(m_pScene.createNode("Transform"));
Transform413->setTranslation(new float[3]{-0.1002,0.0178,0.0013});
CShape* Shape414 = (CShape *)(m_pScene.createNode("Shape"));
Shape414->setUSE("JointShape");
Transform413->addChild(*Shape414);

HAnimSegment411->addChildren(*Transform413);

CHAnimSite* HAnimSite415 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite415->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip");
HAnimSite415->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip");
CTransform* Transform416 = (CTransform *)(m_pScene.createNode("Transform"));
Transform416->setTranslation(new float[3]{-0.1002,0.0178,0.0013});
CShape* Shape417 = (CShape *)(m_pScene.createNode("Shape"));
Shape417->setUSE("SiteShape");
Transform416->addChild(*Shape417);

HAnimSite415->addChildren(*Transform416);

HAnimSegment411->addChildren(*HAnimSite415);

HAnimJoint410->addChildren(*HAnimSegment411);

HAnimJoint402->addChildren(*HAnimJoint410);

HAnimJoint394->addChildren(*HAnimJoint402);

HAnimJoint386->addChildren(*HAnimJoint394);

HAnimJoint378->addChildren(*HAnimJoint386);

HAnimJoint298->addChildren(*HAnimJoint378);

HAnimJoint290->addChildren(*HAnimJoint298);

CHAnimJoint* HAnimJoint418 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint418->setName("r_calcaneus");
HAnimJoint418->setDEF("hanim_r_calcaneus");
HAnimJoint418->setCenter(new float[3]{-0.0889,-0.1278,0.0494});
CHAnimSegment* HAnimSegment419 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment419->setName("SEGMENT_FOR_r_calcaneus");
HAnimSegment419->setDEF("hanim_SEGMENT_FOR_r_calcaneus");
CTouchSensor* TouchSensor420 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor420->setDescription("joint r_calcaneus segment SEGMENT_FOR_r_calcaneus");
HAnimSegment419->addChildren(*TouchSensor420);

CTransform* Transform421 = (CTransform *)(m_pScene.createNode("Transform"));
Transform421->setTranslation(new float[3]{-0.0889,-0.1278,0.0494});
CShape* Shape422 = (CShape *)(m_pScene.createNode("Shape"));
Shape422->setUSE("JointShape");
Transform421->addChild(*Shape422);

HAnimSegment419->addChildren(*Transform421);

CHAnimSite* HAnimSite423 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite423->setName("SEGMENT_FOR_r_calcaneus_tip");
HAnimSite423->setDEF("hanim_SEGMENT_FOR_r_calcaneus_tip");
CTransform* Transform424 = (CTransform *)(m_pScene.createNode("Transform"));
Transform424->setTranslation(new float[3]{-0.0889,-0.1278,0.0494});
CShape* Shape425 = (CShape *)(m_pScene.createNode("Shape"));
Shape425->setUSE("SiteShape");
Transform424->addChild(*Shape425);

HAnimSite423->addChildren(*Transform424);

HAnimSegment419->addChildren(*HAnimSite423);

HAnimJoint418->addChildren(*HAnimSegment419);

CHAnimJoint* HAnimJoint426 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint426->setName("r_cuboid");
HAnimJoint426->setDEF("hanim_r_cuboid");
HAnimJoint426->setCenter(new float[3]{-0.1105,-0.0998,0.0267});
CHAnimSegment* HAnimSegment427 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment427->setName("SEGMENT_FOR_r_cuboid");
HAnimSegment427->setDEF("hanim_SEGMENT_FOR_r_cuboid");
CTouchSensor* TouchSensor428 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor428->setDescription("joint r_cuboid segment SEGMENT_FOR_r_cuboid");
HAnimSegment427->addChildren(*TouchSensor428);

CTransform* Transform429 = (CTransform *)(m_pScene.createNode("Transform"));
Transform429->setTranslation(new float[3]{-0.1105,-0.0998,0.0267});
CShape* Shape430 = (CShape *)(m_pScene.createNode("Shape"));
Shape430->setUSE("JointShape");
Transform429->addChild(*Shape430);

HAnimSegment427->addChildren(*Transform429);

CHAnimSite* HAnimSite431 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite431->setName("SEGMENT_FOR_r_cuboid_tip");
HAnimSite431->setDEF("hanim_SEGMENT_FOR_r_cuboid_tip");
CTransform* Transform432 = (CTransform *)(m_pScene.createNode("Transform"));
Transform432->setTranslation(new float[3]{-0.1105,-0.0998,0.0267});
CShape* Shape433 = (CShape *)(m_pScene.createNode("Shape"));
Shape433->setUSE("SiteShape");
Transform432->addChild(*Shape433);

HAnimSite431->addChildren(*Transform432);

HAnimSegment427->addChildren(*HAnimSite431);

HAnimJoint426->addChildren(*HAnimSegment427);

CHAnimJoint* HAnimJoint434 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint434->setName("r_metatarsal_4");
HAnimJoint434->setDEF("hanim_r_metatarsal_4");
HAnimJoint434->setCenter(new float[3]{-0.1063,-0.0634,0.016});
CHAnimSegment* HAnimSegment435 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment435->setName("SEGMENT_FOR_r_metatarsal_4");
HAnimSegment435->setDEF("hanim_SEGMENT_FOR_r_metatarsal_4");
CTouchSensor* TouchSensor436 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor436->setDescription("joint r_metatarsal_4 segment SEGMENT_FOR_r_metatarsal_4");
HAnimSegment435->addChildren(*TouchSensor436);

CTransform* Transform437 = (CTransform *)(m_pScene.createNode("Transform"));
Transform437->setTranslation(new float[3]{-0.1063,-0.0634,0.016});
CShape* Shape438 = (CShape *)(m_pScene.createNode("Shape"));
Shape438->setUSE("JointShape");
Transform437->addChild(*Shape438);

HAnimSegment435->addChildren(*Transform437);

CHAnimSite* HAnimSite439 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite439->setName("SEGMENT_FOR_r_metatarsal_4_tip");
HAnimSite439->setDEF("hanim_SEGMENT_FOR_r_metatarsal_4_tip");
CTransform* Transform440 = (CTransform *)(m_pScene.createNode("Transform"));
Transform440->setTranslation(new float[3]{-0.1063,-0.0634,0.016});
CShape* Shape441 = (CShape *)(m_pScene.createNode("Shape"));
Shape441->setUSE("SiteShape");
Transform440->addChild(*Shape441);

HAnimSite439->addChildren(*Transform440);

HAnimSegment435->addChildren(*HAnimSite439);

HAnimJoint434->addChildren(*HAnimSegment435);

CHAnimJoint* HAnimJoint442 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint442->setName("r_tarsal_proximal_phalanx_4");
HAnimJoint442->setDEF("hanim_r_tarsal_proximal_phalanx_4");
HAnimJoint442->setCenter(new float[3]{-0.1097,-0.0107,0.0058});
CHAnimSegment* HAnimSegment443 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment443->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_4");
HAnimSegment443->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4");
CTouchSensor* TouchSensor444 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor444->setDescription("joint r_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_4");
HAnimSegment443->addChildren(*TouchSensor444);

CTransform* Transform445 = (CTransform *)(m_pScene.createNode("Transform"));
Transform445->setTranslation(new float[3]{-0.1097,-0.0107,0.0058});
CShape* Shape446 = (CShape *)(m_pScene.createNode("Shape"));
Shape446->setUSE("JointShape");
Transform445->addChild(*Shape446);

HAnimSegment443->addChildren(*Transform445);

CHAnimSite* HAnimSite447 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite447->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip");
HAnimSite447->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip");
CTransform* Transform448 = (CTransform *)(m_pScene.createNode("Transform"));
Transform448->setTranslation(new float[3]{-0.1097,-0.0107,0.0058});
CShape* Shape449 = (CShape *)(m_pScene.createNode("Shape"));
Shape449->setUSE("SiteShape");
Transform448->addChild(*Shape449);

HAnimSite447->addChildren(*Transform448);

HAnimSegment443->addChildren(*HAnimSite447);

HAnimJoint442->addChildren(*HAnimSegment443);

CHAnimJoint* HAnimJoint450 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint450->setName("r_tarsal_middle_phalanx_4");
HAnimJoint450->setDEF("hanim_r_tarsal_middle_phalanx_4");
HAnimJoint450->setCenter(new float[3]{-0.114,0.0044,0.0037});
CHAnimSegment* HAnimSegment451 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment451->setName("SEGMENT_FOR_r_tarsal_middle_phalanx_4");
HAnimSegment451->setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4");
CTouchSensor* TouchSensor452 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor452->setDescription("joint r_tarsal_middle_phalanx_4 segment SEGMENT_FOR_r_tarsal_middle_phalanx_4");
HAnimSegment451->addChildren(*TouchSensor452);

CTransform* Transform453 = (CTransform *)(m_pScene.createNode("Transform"));
Transform453->setTranslation(new float[3]{-0.114,0.0044,0.0037});
CShape* Shape454 = (CShape *)(m_pScene.createNode("Shape"));
Shape454->setUSE("JointShape");
Transform453->addChild(*Shape454);

HAnimSegment451->addChildren(*Transform453);

CHAnimSite* HAnimSite455 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite455->setName("SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip");
HAnimSite455->setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip");
CTransform* Transform456 = (CTransform *)(m_pScene.createNode("Transform"));
Transform456->setTranslation(new float[3]{-0.114,0.0044,0.0037});
CShape* Shape457 = (CShape *)(m_pScene.createNode("Shape"));
Shape457->setUSE("SiteShape");
Transform456->addChild(*Shape457);

HAnimSite455->addChildren(*Transform456);

HAnimSegment451->addChildren(*HAnimSite455);

HAnimJoint450->addChildren(*HAnimSegment451);

CHAnimJoint* HAnimJoint458 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint458->setName("r_tarsal_distal_phalanx_4");
HAnimJoint458->setDEF("hanim_r_tarsal_distal_phalanx_4");
HAnimJoint458->setCenter(new float[3]{-0.1155,0.0118,0.0008});
CHAnimSegment* HAnimSegment459 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment459->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_4");
HAnimSegment459->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4");
CTouchSensor* TouchSensor460 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor460->setDescription("joint r_tarsal_distal_phalanx_4 segment SEGMENT_FOR_r_tarsal_distal_phalanx_4");
HAnimSegment459->addChildren(*TouchSensor460);

CTransform* Transform461 = (CTransform *)(m_pScene.createNode("Transform"));
Transform461->setTranslation(new float[3]{-0.1155,0.0118,0.0008});
CShape* Shape462 = (CShape *)(m_pScene.createNode("Shape"));
Shape462->setUSE("JointShape");
Transform461->addChild(*Shape462);

HAnimSegment459->addChildren(*Transform461);

CHAnimSite* HAnimSite463 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite463->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip");
HAnimSite463->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip");
CTransform* Transform464 = (CTransform *)(m_pScene.createNode("Transform"));
Transform464->setTranslation(new float[3]{-0.1155,0.0118,0.0008});
CShape* Shape465 = (CShape *)(m_pScene.createNode("Shape"));
Shape465->setUSE("SiteShape");
Transform464->addChild(*Shape465);

HAnimSite463->addChildren(*Transform464);

HAnimSegment459->addChildren(*HAnimSite463);

HAnimJoint458->addChildren(*HAnimSegment459);

HAnimJoint450->addChildren(*HAnimJoint458);

HAnimJoint442->addChildren(*HAnimJoint450);

HAnimJoint434->addChildren(*HAnimJoint442);

HAnimJoint426->addChildren(*HAnimJoint434);

CHAnimJoint* HAnimJoint466 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint466->setName("r_metatarsal_5");
HAnimJoint466->setDEF("hanim_r_metatarsal_5");
HAnimJoint466->setCenter(new float[3]{-0.1206,-0.0671,0.0124});
CHAnimSegment* HAnimSegment467 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment467->setName("SEGMENT_FOR_r_metatarsal_5");
HAnimSegment467->setDEF("hanim_SEGMENT_FOR_r_metatarsal_5");
CTouchSensor* TouchSensor468 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor468->setDescription("joint r_metatarsal_5 segment SEGMENT_FOR_r_metatarsal_5");
HAnimSegment467->addChildren(*TouchSensor468);

CTransform* Transform469 = (CTransform *)(m_pScene.createNode("Transform"));
Transform469->setTranslation(new float[3]{-0.1206,-0.0671,0.0124});
CShape* Shape470 = (CShape *)(m_pScene.createNode("Shape"));
Shape470->setUSE("JointShape");
Transform469->addChild(*Shape470);

HAnimSegment467->addChildren(*Transform469);

CHAnimSite* HAnimSite471 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite471->setName("SEGMENT_FOR_r_metatarsal_5_tip");
HAnimSite471->setDEF("hanim_SEGMENT_FOR_r_metatarsal_5_tip");
CTransform* Transform472 = (CTransform *)(m_pScene.createNode("Transform"));
Transform472->setTranslation(new float[3]{-0.1206,-0.0671,0.0124});
CShape* Shape473 = (CShape *)(m_pScene.createNode("Shape"));
Shape473->setUSE("SiteShape");
Transform472->addChild(*Shape473);

HAnimSite471->addChildren(*Transform472);

HAnimSegment467->addChildren(*HAnimSite471);

HAnimJoint466->addChildren(*HAnimSegment467);

CHAnimJoint* HAnimJoint474 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint474->setName("r_tarsal_proximal_phalanx_5");
HAnimJoint474->setDEF("hanim_r_tarsal_proximal_phalanx_5");
HAnimJoint474->setCenter(new float[3]{-0.1239,-0.0153,0.0051});
CHAnimSegment* HAnimSegment475 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment475->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_5");
HAnimSegment475->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5");
CTouchSensor* TouchSensor476 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor476->setDescription("joint r_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_5");
HAnimSegment475->addChildren(*TouchSensor476);

CTransform* Transform477 = (CTransform *)(m_pScene.createNode("Transform"));
Transform477->setTranslation(new float[3]{-0.1239,-0.0153,0.0051});
CShape* Shape478 = (CShape *)(m_pScene.createNode("Shape"));
Shape478->setUSE("JointShape");
Transform477->addChild(*Shape478);

HAnimSegment475->addChildren(*Transform477);

CHAnimSite* HAnimSite479 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite479->setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip");
HAnimSite479->setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip");
CTransform* Transform480 = (CTransform *)(m_pScene.createNode("Transform"));
Transform480->setTranslation(new float[3]{-0.1239,-0.0153,0.0051});
CShape* Shape481 = (CShape *)(m_pScene.createNode("Shape"));
Shape481->setUSE("SiteShape");
Transform480->addChild(*Shape481);

HAnimSite479->addChildren(*Transform480);

HAnimSegment475->addChildren(*HAnimSite479);

HAnimJoint474->addChildren(*HAnimSegment475);

CHAnimJoint* HAnimJoint482 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint482->setName("r_tarsal_middle_phalanx_5");
HAnimJoint482->setDEF("hanim_r_tarsal_middle_phalanx_5");
HAnimJoint482->setCenter(new float[3]{-0.1262,-0.0077,0.0023});
CHAnimSegment* HAnimSegment483 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment483->setName("SEGMENT_FOR_r_tarsal_middle_phalanx_5");
HAnimSegment483->setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5");
CTouchSensor* TouchSensor484 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor484->setDescription("joint r_tarsal_middle_phalanx_5 segment SEGMENT_FOR_r_tarsal_middle_phalanx_5");
HAnimSegment483->addChildren(*TouchSensor484);

CTransform* Transform485 = (CTransform *)(m_pScene.createNode("Transform"));
Transform485->setTranslation(new float[3]{-0.1262,-0.0077,0.0023});
CShape* Shape486 = (CShape *)(m_pScene.createNode("Shape"));
Shape486->setUSE("JointShape");
Transform485->addChild(*Shape486);

HAnimSegment483->addChildren(*Transform485);

CHAnimSite* HAnimSite487 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite487->setName("SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip");
HAnimSite487->setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip");
CTransform* Transform488 = (CTransform *)(m_pScene.createNode("Transform"));
Transform488->setTranslation(new float[3]{-0.1262,-0.0077,0.0023});
CShape* Shape489 = (CShape *)(m_pScene.createNode("Shape"));
Shape489->setUSE("SiteShape");
Transform488->addChild(*Shape489);

HAnimSite487->addChildren(*Transform488);

HAnimSegment483->addChildren(*HAnimSite487);

HAnimJoint482->addChildren(*HAnimSegment483);

CHAnimJoint* HAnimJoint490 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint490->setName("r_tarsal_distal_phalanx_5");
HAnimJoint490->setDEF("hanim_r_tarsal_distal_phalanx_5");
HAnimJoint490->setCenter(new float[3]{-0.1271,0,0});
CHAnimSegment* HAnimSegment491 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment491->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_5");
HAnimSegment491->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5");
CTouchSensor* TouchSensor492 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor492->setDescription("joint r_tarsal_distal_phalanx_5 segment SEGMENT_FOR_r_tarsal_distal_phalanx_5");
HAnimSegment491->addChildren(*TouchSensor492);

CTransform* Transform493 = (CTransform *)(m_pScene.createNode("Transform"));
Transform493->setTranslation(new float[3]{-0.1271,0,0});
CShape* Shape494 = (CShape *)(m_pScene.createNode("Shape"));
Shape494->setUSE("JointShape");
Transform493->addChild(*Shape494);

HAnimSegment491->addChildren(*Transform493);

CHAnimSite* HAnimSite495 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite495->setName("SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip");
HAnimSite495->setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip");
CTransform* Transform496 = (CTransform *)(m_pScene.createNode("Transform"));
Transform496->setTranslation(new float[3]{-0.1271,0,0});
CShape* Shape497 = (CShape *)(m_pScene.createNode("Shape"));
Shape497->setUSE("SiteShape");
Transform496->addChild(*Shape497);

HAnimSite495->addChildren(*Transform496);

HAnimSegment491->addChildren(*HAnimSite495);

HAnimJoint490->addChildren(*HAnimSegment491);

HAnimJoint482->addChildren(*HAnimJoint490);

HAnimJoint474->addChildren(*HAnimJoint482);

HAnimJoint466->addChildren(*HAnimJoint474);

HAnimJoint426->addChildren(*HAnimJoint466);

HAnimJoint418->addChildren(*HAnimJoint426);

HAnimJoint290->addChildren(*HAnimJoint418);

HAnimJoint282->addChildren(*HAnimJoint290);

HAnimJoint274->addChildren(*HAnimJoint282);

HAnimJoint42->addChildren(*HAnimJoint274);

HAnimJoint34->addChildren(*HAnimJoint42);

CHAnimJoint* HAnimJoint498 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint498->setName("l5");
HAnimJoint498->setDEF("hanim_l5");
HAnimJoint498->setCenter(new float[3]{-0.0002,-0.1156,0.9169});
CHAnimSegment* HAnimSegment499 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment499->setName("SEGMENT_FOR_l5");
HAnimSegment499->setDEF("hanim_SEGMENT_FOR_l5");
CTouchSensor* TouchSensor500 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor500->setDescription("joint l5 segment SEGMENT_FOR_l5");
HAnimSegment499->addChildren(*TouchSensor500);

CTransform* Transform501 = (CTransform *)(m_pScene.createNode("Transform"));
Transform501->setTranslation(new float[3]{-0.0002,-0.1156,0.9169});
CShape* Shape502 = (CShape *)(m_pScene.createNode("Shape"));
Shape502->setUSE("JointShape");
Transform501->addChild(*Shape502);

HAnimSegment499->addChildren(*Transform501);

CHAnimSite* HAnimSite503 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite503->setName("SEGMENT_FOR_l5_tip");
HAnimSite503->setDEF("hanim_SEGMENT_FOR_l5_tip");
CTransform* Transform504 = (CTransform *)(m_pScene.createNode("Transform"));
Transform504->setTranslation(new float[3]{-0.0002,-0.1156,0.9169});
CShape* Shape505 = (CShape *)(m_pScene.createNode("Shape"));
Shape505->setUSE("SiteShape");
Transform504->addChild(*Shape505);

HAnimSite503->addChildren(*Transform504);

HAnimSegment499->addChildren(*HAnimSite503);

HAnimJoint498->addChildren(*HAnimSegment499);

CHAnimJoint* HAnimJoint506 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint506->setName("l4");
HAnimJoint506->setDEF("hanim_l4");
HAnimJoint506->setCenter(new float[3]{-0.0002,-0.1156,0.9412});
CHAnimSegment* HAnimSegment507 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment507->setName("SEGMENT_FOR_l4");
HAnimSegment507->setDEF("hanim_SEGMENT_FOR_l4");
CTouchSensor* TouchSensor508 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor508->setDescription("joint l4 segment SEGMENT_FOR_l4");
HAnimSegment507->addChildren(*TouchSensor508);

CTransform* Transform509 = (CTransform *)(m_pScene.createNode("Transform"));
Transform509->setTranslation(new float[3]{-0.0002,-0.1156,0.9412});
CShape* Shape510 = (CShape *)(m_pScene.createNode("Shape"));
Shape510->setUSE("JointShape");
Transform509->addChild(*Shape510);

HAnimSegment507->addChildren(*Transform509);

CHAnimSite* HAnimSite511 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite511->setName("SEGMENT_FOR_l4_tip");
HAnimSite511->setDEF("hanim_SEGMENT_FOR_l4_tip");
CTransform* Transform512 = (CTransform *)(m_pScene.createNode("Transform"));
Transform512->setTranslation(new float[3]{-0.0002,-0.1156,0.9412});
CShape* Shape513 = (CShape *)(m_pScene.createNode("Shape"));
Shape513->setUSE("SiteShape");
Transform512->addChild(*Shape513);

HAnimSite511->addChildren(*Transform512);

HAnimSegment507->addChildren(*HAnimSite511);

HAnimJoint506->addChildren(*HAnimSegment507);

CHAnimJoint* HAnimJoint514 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint514->setName("l3");
HAnimJoint514->setDEF("hanim_l3");
HAnimJoint514->setCenter(new float[3]{-0.0002,-0.1156,0.9574});
CHAnimSegment* HAnimSegment515 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment515->setName("SEGMENT_FOR_l3");
HAnimSegment515->setDEF("hanim_SEGMENT_FOR_l3");
CTouchSensor* TouchSensor516 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor516->setDescription("joint l3 segment SEGMENT_FOR_l3");
HAnimSegment515->addChildren(*TouchSensor516);

CTransform* Transform517 = (CTransform *)(m_pScene.createNode("Transform"));
Transform517->setTranslation(new float[3]{-0.0002,-0.1156,0.9574});
CShape* Shape518 = (CShape *)(m_pScene.createNode("Shape"));
Shape518->setUSE("JointShape");
Transform517->addChild(*Shape518);

HAnimSegment515->addChildren(*Transform517);

CHAnimSite* HAnimSite519 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite519->setName("SEGMENT_FOR_l3_tip");
HAnimSite519->setDEF("hanim_SEGMENT_FOR_l3_tip");
CTransform* Transform520 = (CTransform *)(m_pScene.createNode("Transform"));
Transform520->setTranslation(new float[3]{-0.0002,-0.1156,0.9574});
CShape* Shape521 = (CShape *)(m_pScene.createNode("Shape"));
Shape521->setUSE("SiteShape");
Transform520->addChild(*Shape521);

HAnimSite519->addChildren(*Transform520);

HAnimSegment515->addChildren(*HAnimSite519);

HAnimJoint514->addChildren(*HAnimSegment515);

CHAnimJoint* HAnimJoint522 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint522->setName("l2");
HAnimJoint522->setDEF("hanim_l2");
HAnimJoint522->setCenter(new float[3]{-0.0002,-0.1156,0.9738});
CHAnimSegment* HAnimSegment523 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment523->setName("SEGMENT_FOR_l2");
HAnimSegment523->setDEF("hanim_SEGMENT_FOR_l2");
CTouchSensor* TouchSensor524 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor524->setDescription("joint l2 segment SEGMENT_FOR_l2");
HAnimSegment523->addChildren(*TouchSensor524);

CTransform* Transform525 = (CTransform *)(m_pScene.createNode("Transform"));
Transform525->setTranslation(new float[3]{-0.0002,-0.1156,0.9738});
CShape* Shape526 = (CShape *)(m_pScene.createNode("Shape"));
Shape526->setUSE("JointShape");
Transform525->addChild(*Shape526);

HAnimSegment523->addChildren(*Transform525);

CHAnimSite* HAnimSite527 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite527->setName("SEGMENT_FOR_l2_tip");
HAnimSite527->setDEF("hanim_SEGMENT_FOR_l2_tip");
CTransform* Transform528 = (CTransform *)(m_pScene.createNode("Transform"));
Transform528->setTranslation(new float[3]{-0.0002,-0.1156,0.9738});
CShape* Shape529 = (CShape *)(m_pScene.createNode("Shape"));
Shape529->setUSE("SiteShape");
Transform528->addChild(*Shape529);

HAnimSite527->addChildren(*Transform528);

HAnimSegment523->addChildren(*HAnimSite527);

HAnimJoint522->addChildren(*HAnimSegment523);

CHAnimJoint* HAnimJoint530 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint530->setName("l1");
HAnimJoint530->setDEF("hanim_l1");
HAnimJoint530->setCenter(new float[3]{-0.0002,-0.1156,0.9911});
CHAnimSegment* HAnimSegment531 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment531->setName("SEGMENT_FOR_l1");
HAnimSegment531->setDEF("hanim_SEGMENT_FOR_l1");
CTouchSensor* TouchSensor532 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor532->setDescription("joint l1 segment SEGMENT_FOR_l1");
HAnimSegment531->addChildren(*TouchSensor532);

CTransform* Transform533 = (CTransform *)(m_pScene.createNode("Transform"));
Transform533->setTranslation(new float[3]{-0.0002,-0.1156,0.9911});
CShape* Shape534 = (CShape *)(m_pScene.createNode("Shape"));
Shape534->setUSE("JointShape");
Transform533->addChild(*Shape534);

HAnimSegment531->addChildren(*Transform533);

CHAnimSite* HAnimSite535 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite535->setName("SEGMENT_FOR_l1_tip");
HAnimSite535->setDEF("hanim_SEGMENT_FOR_l1_tip");
CTransform* Transform536 = (CTransform *)(m_pScene.createNode("Transform"));
Transform536->setTranslation(new float[3]{-0.0002,-0.1156,0.9911});
CShape* Shape537 = (CShape *)(m_pScene.createNode("Shape"));
Shape537->setUSE("SiteShape");
Transform536->addChild(*Shape537);

HAnimSite535->addChildren(*Transform536);

HAnimSegment531->addChildren(*HAnimSite535);

HAnimJoint530->addChildren(*HAnimSegment531);

CHAnimJoint* HAnimJoint538 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint538->setName("t12");
HAnimJoint538->setDEF("hanim_t12");
HAnimJoint538->setCenter(new float[3]{-0.0002,-0.1156,1.0145});
CHAnimSegment* HAnimSegment539 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment539->setName("SEGMENT_FOR_t12");
HAnimSegment539->setDEF("hanim_SEGMENT_FOR_t12");
CTouchSensor* TouchSensor540 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor540->setDescription("joint t12 segment SEGMENT_FOR_t12");
HAnimSegment539->addChildren(*TouchSensor540);

CTransform* Transform541 = (CTransform *)(m_pScene.createNode("Transform"));
Transform541->setTranslation(new float[3]{-0.0002,-0.1156,1.0145});
CShape* Shape542 = (CShape *)(m_pScene.createNode("Shape"));
Shape542->setUSE("JointShape");
Transform541->addChild(*Shape542);

HAnimSegment539->addChildren(*Transform541);

CHAnimSite* HAnimSite543 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite543->setName("SEGMENT_FOR_t12_tip");
HAnimSite543->setDEF("hanim_SEGMENT_FOR_t12_tip");
CTransform* Transform544 = (CTransform *)(m_pScene.createNode("Transform"));
Transform544->setTranslation(new float[3]{-0.0002,-0.1156,1.0145});
CShape* Shape545 = (CShape *)(m_pScene.createNode("Shape"));
Shape545->setUSE("SiteShape");
Transform544->addChild(*Shape545);

HAnimSite543->addChildren(*Transform544);

HAnimSegment539->addChildren(*HAnimSite543);

HAnimJoint538->addChildren(*HAnimSegment539);

CHAnimJoint* HAnimJoint546 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint546->setName("t11");
HAnimJoint546->setDEF("hanim_t11");
HAnimJoint546->setCenter(new float[3]{-0.0002,-0.1156,1.0381});
CHAnimSegment* HAnimSegment547 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment547->setName("SEGMENT_FOR_t11");
HAnimSegment547->setDEF("hanim_SEGMENT_FOR_t11");
CTouchSensor* TouchSensor548 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor548->setDescription("joint t11 segment SEGMENT_FOR_t11");
HAnimSegment547->addChildren(*TouchSensor548);

CTransform* Transform549 = (CTransform *)(m_pScene.createNode("Transform"));
Transform549->setTranslation(new float[3]{-0.0002,-0.1156,1.0381});
CShape* Shape550 = (CShape *)(m_pScene.createNode("Shape"));
Shape550->setUSE("JointShape");
Transform549->addChild(*Shape550);

HAnimSegment547->addChildren(*Transform549);

CHAnimSite* HAnimSite551 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite551->setName("SEGMENT_FOR_t11_tip");
HAnimSite551->setDEF("hanim_SEGMENT_FOR_t11_tip");
CTransform* Transform552 = (CTransform *)(m_pScene.createNode("Transform"));
Transform552->setTranslation(new float[3]{-0.0002,-0.1156,1.0381});
CShape* Shape553 = (CShape *)(m_pScene.createNode("Shape"));
Shape553->setUSE("SiteShape");
Transform552->addChild(*Shape553);

HAnimSite551->addChildren(*Transform552);

HAnimSegment547->addChildren(*HAnimSite551);

HAnimJoint546->addChildren(*HAnimSegment547);

CHAnimJoint* HAnimJoint554 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint554->setName("t10");
HAnimJoint554->setDEF("hanim_t10");
HAnimJoint554->setCenter(new float[3]{-0.0002,-0.1157,1.0552});
CHAnimSegment* HAnimSegment555 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment555->setName("SEGMENT_FOR_t10");
HAnimSegment555->setDEF("hanim_SEGMENT_FOR_t10");
CTouchSensor* TouchSensor556 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor556->setDescription("joint t10 segment SEGMENT_FOR_t10");
HAnimSegment555->addChildren(*TouchSensor556);

CTransform* Transform557 = (CTransform *)(m_pScene.createNode("Transform"));
Transform557->setTranslation(new float[3]{-0.0002,-0.1157,1.0552});
CShape* Shape558 = (CShape *)(m_pScene.createNode("Shape"));
Shape558->setUSE("JointShape");
Transform557->addChild(*Shape558);

HAnimSegment555->addChildren(*Transform557);

CHAnimSite* HAnimSite559 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite559->setName("SEGMENT_FOR_t10_tip");
HAnimSite559->setDEF("hanim_SEGMENT_FOR_t10_tip");
CTransform* Transform560 = (CTransform *)(m_pScene.createNode("Transform"));
Transform560->setTranslation(new float[3]{-0.0002,-0.1157,1.0552});
CShape* Shape561 = (CShape *)(m_pScene.createNode("Shape"));
Shape561->setUSE("SiteShape");
Transform560->addChild(*Shape561);

HAnimSite559->addChildren(*Transform560);

HAnimSegment555->addChildren(*HAnimSite559);

HAnimJoint554->addChildren(*HAnimSegment555);

CHAnimJoint* HAnimJoint562 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint562->setName("t9");
HAnimJoint562->setDEF("hanim_t9");
HAnimJoint562->setCenter(new float[3]{-0.0002,-0.1156,1.0699});
CHAnimSegment* HAnimSegment563 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment563->setName("SEGMENT_FOR_t9");
HAnimSegment563->setDEF("hanim_SEGMENT_FOR_t9");
CTouchSensor* TouchSensor564 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor564->setDescription("joint t9 segment SEGMENT_FOR_t9");
HAnimSegment563->addChildren(*TouchSensor564);

CTransform* Transform565 = (CTransform *)(m_pScene.createNode("Transform"));
Transform565->setTranslation(new float[3]{-0.0002,-0.1156,1.0699});
CShape* Shape566 = (CShape *)(m_pScene.createNode("Shape"));
Shape566->setUSE("JointShape");
Transform565->addChild(*Shape566);

HAnimSegment563->addChildren(*Transform565);

CHAnimSite* HAnimSite567 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite567->setName("SEGMENT_FOR_t9_tip");
HAnimSite567->setDEF("hanim_SEGMENT_FOR_t9_tip");
CTransform* Transform568 = (CTransform *)(m_pScene.createNode("Transform"));
Transform568->setTranslation(new float[3]{-0.0002,-0.1156,1.0699});
CShape* Shape569 = (CShape *)(m_pScene.createNode("Shape"));
Shape569->setUSE("SiteShape");
Transform568->addChild(*Shape569);

HAnimSite567->addChildren(*Transform568);

HAnimSegment563->addChildren(*HAnimSite567);

HAnimJoint562->addChildren(*HAnimSegment563);

CHAnimJoint* HAnimJoint570 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint570->setName("t8");
HAnimJoint570->setDEF("hanim_t8");
HAnimJoint570->setCenter(new float[3]{-0.0002,-0.1156,1.0845});
CHAnimSegment* HAnimSegment571 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment571->setName("SEGMENT_FOR_t8");
HAnimSegment571->setDEF("hanim_SEGMENT_FOR_t8");
CTouchSensor* TouchSensor572 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor572->setDescription("joint t8 segment SEGMENT_FOR_t8");
HAnimSegment571->addChildren(*TouchSensor572);

CTransform* Transform573 = (CTransform *)(m_pScene.createNode("Transform"));
Transform573->setTranslation(new float[3]{-0.0002,-0.1156,1.0845});
CShape* Shape574 = (CShape *)(m_pScene.createNode("Shape"));
Shape574->setUSE("JointShape");
Transform573->addChild(*Shape574);

HAnimSegment571->addChildren(*Transform573);

CHAnimSite* HAnimSite575 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite575->setName("SEGMENT_FOR_t8_tip");
HAnimSite575->setDEF("hanim_SEGMENT_FOR_t8_tip");
CTransform* Transform576 = (CTransform *)(m_pScene.createNode("Transform"));
Transform576->setTranslation(new float[3]{-0.0002,-0.1156,1.0845});
CShape* Shape577 = (CShape *)(m_pScene.createNode("Shape"));
Shape577->setUSE("SiteShape");
Transform576->addChild(*Shape577);

HAnimSite575->addChildren(*Transform576);

HAnimSegment571->addChildren(*HAnimSite575);

HAnimJoint570->addChildren(*HAnimSegment571);

CHAnimJoint* HAnimJoint578 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint578->setName("t7");
HAnimJoint578->setDEF("hanim_t7");
HAnimJoint578->setCenter(new float[3]{-0.0002,-0.1156,1.1002});
CHAnimSegment* HAnimSegment579 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment579->setName("SEGMENT_FOR_t7");
HAnimSegment579->setDEF("hanim_SEGMENT_FOR_t7");
CTouchSensor* TouchSensor580 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor580->setDescription("joint t7 segment SEGMENT_FOR_t7");
HAnimSegment579->addChildren(*TouchSensor580);

CTransform* Transform581 = (CTransform *)(m_pScene.createNode("Transform"));
Transform581->setTranslation(new float[3]{-0.0002,-0.1156,1.1002});
CShape* Shape582 = (CShape *)(m_pScene.createNode("Shape"));
Shape582->setUSE("JointShape");
Transform581->addChild(*Shape582);

HAnimSegment579->addChildren(*Transform581);

CHAnimSite* HAnimSite583 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite583->setName("SEGMENT_FOR_t7_tip");
HAnimSite583->setDEF("hanim_SEGMENT_FOR_t7_tip");
CTransform* Transform584 = (CTransform *)(m_pScene.createNode("Transform"));
Transform584->setTranslation(new float[3]{-0.0002,-0.1156,1.1002});
CShape* Shape585 = (CShape *)(m_pScene.createNode("Shape"));
Shape585->setUSE("SiteShape");
Transform584->addChild(*Shape585);

HAnimSite583->addChildren(*Transform584);

HAnimSegment579->addChildren(*HAnimSite583);

HAnimJoint578->addChildren(*HAnimSegment579);

CHAnimJoint* HAnimJoint586 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint586->setName("t6");
HAnimJoint586->setDEF("hanim_t6");
HAnimJoint586->setCenter(new float[3]{-0.0002,-0.1156,1.1131});
CHAnimSegment* HAnimSegment587 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment587->setName("SEGMENT_FOR_t6");
HAnimSegment587->setDEF("hanim_SEGMENT_FOR_t6");
CTouchSensor* TouchSensor588 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor588->setDescription("joint t6 segment SEGMENT_FOR_t6");
HAnimSegment587->addChildren(*TouchSensor588);

CTransform* Transform589 = (CTransform *)(m_pScene.createNode("Transform"));
Transform589->setTranslation(new float[3]{-0.0002,-0.1156,1.1131});
CShape* Shape590 = (CShape *)(m_pScene.createNode("Shape"));
Shape590->setUSE("JointShape");
Transform589->addChild(*Shape590);

HAnimSegment587->addChildren(*Transform589);

CHAnimSite* HAnimSite591 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite591->setName("SEGMENT_FOR_t6_tip");
HAnimSite591->setDEF("hanim_SEGMENT_FOR_t6_tip");
CTransform* Transform592 = (CTransform *)(m_pScene.createNode("Transform"));
Transform592->setTranslation(new float[3]{-0.0002,-0.1156,1.1131});
CShape* Shape593 = (CShape *)(m_pScene.createNode("Shape"));
Shape593->setUSE("SiteShape");
Transform592->addChild(*Shape593);

HAnimSite591->addChildren(*Transform592);

HAnimSegment587->addChildren(*HAnimSite591);

HAnimJoint586->addChildren(*HAnimSegment587);

CHAnimJoint* HAnimJoint594 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint594->setName("t5");
HAnimJoint594->setDEF("hanim_t5");
HAnimJoint594->setCenter(new float[3]{-0.0002,-0.1156,1.1286});
CHAnimSegment* HAnimSegment595 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment595->setName("SEGMENT_FOR_t5");
HAnimSegment595->setDEF("hanim_SEGMENT_FOR_t5");
CTouchSensor* TouchSensor596 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor596->setDescription("joint t5 segment SEGMENT_FOR_t5");
HAnimSegment595->addChildren(*TouchSensor596);

CTransform* Transform597 = (CTransform *)(m_pScene.createNode("Transform"));
Transform597->setTranslation(new float[3]{-0.0002,-0.1156,1.1286});
CShape* Shape598 = (CShape *)(m_pScene.createNode("Shape"));
Shape598->setUSE("JointShape");
Transform597->addChild(*Shape598);

HAnimSegment595->addChildren(*Transform597);

CHAnimSite* HAnimSite599 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite599->setName("SEGMENT_FOR_t5_tip");
HAnimSite599->setDEF("hanim_SEGMENT_FOR_t5_tip");
CTransform* Transform600 = (CTransform *)(m_pScene.createNode("Transform"));
Transform600->setTranslation(new float[3]{-0.0002,-0.1156,1.1286});
CShape* Shape601 = (CShape *)(m_pScene.createNode("Shape"));
Shape601->setUSE("SiteShape");
Transform600->addChild(*Shape601);

HAnimSite599->addChildren(*Transform600);

HAnimSegment595->addChildren(*HAnimSite599);

HAnimJoint594->addChildren(*HAnimSegment595);

CHAnimJoint* HAnimJoint602 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint602->setName("t4");
HAnimJoint602->setDEF("hanim_t4");
HAnimJoint602->setCenter(new float[3]{-0.0002,-0.1156,1.1439});
CHAnimSegment* HAnimSegment603 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment603->setName("SEGMENT_FOR_t4");
HAnimSegment603->setDEF("hanim_SEGMENT_FOR_t4");
CTouchSensor* TouchSensor604 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor604->setDescription("joint t4 segment SEGMENT_FOR_t4");
HAnimSegment603->addChildren(*TouchSensor604);

CTransform* Transform605 = (CTransform *)(m_pScene.createNode("Transform"));
Transform605->setTranslation(new float[3]{-0.0002,-0.1156,1.1439});
CShape* Shape606 = (CShape *)(m_pScene.createNode("Shape"));
Shape606->setUSE("JointShape");
Transform605->addChild(*Shape606);

HAnimSegment603->addChildren(*Transform605);

CHAnimSite* HAnimSite607 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite607->setName("SEGMENT_FOR_t4_tip");
HAnimSite607->setDEF("hanim_SEGMENT_FOR_t4_tip");
CTransform* Transform608 = (CTransform *)(m_pScene.createNode("Transform"));
Transform608->setTranslation(new float[3]{-0.0002,-0.1156,1.1439});
CShape* Shape609 = (CShape *)(m_pScene.createNode("Shape"));
Shape609->setUSE("SiteShape");
Transform608->addChild(*Shape609);

HAnimSite607->addChildren(*Transform608);

HAnimSegment603->addChildren(*HAnimSite607);

HAnimJoint602->addChildren(*HAnimSegment603);

CHAnimJoint* HAnimJoint610 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint610->setName("t3");
HAnimJoint610->setDEF("hanim_t3");
HAnimJoint610->setCenter(new float[3]{-0.0002,-0.1156,1.1623});
CHAnimSegment* HAnimSegment611 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment611->setName("SEGMENT_FOR_t3");
HAnimSegment611->setDEF("hanim_SEGMENT_FOR_t3");
CTouchSensor* TouchSensor612 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor612->setDescription("joint t3 segment SEGMENT_FOR_t3");
HAnimSegment611->addChildren(*TouchSensor612);

CTransform* Transform613 = (CTransform *)(m_pScene.createNode("Transform"));
Transform613->setTranslation(new float[3]{-0.0002,-0.1156,1.1623});
CShape* Shape614 = (CShape *)(m_pScene.createNode("Shape"));
Shape614->setUSE("JointShape");
Transform613->addChild(*Shape614);

HAnimSegment611->addChildren(*Transform613);

CHAnimSite* HAnimSite615 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite615->setName("SEGMENT_FOR_t3_tip");
HAnimSite615->setDEF("hanim_SEGMENT_FOR_t3_tip");
CTransform* Transform616 = (CTransform *)(m_pScene.createNode("Transform"));
Transform616->setTranslation(new float[3]{-0.0002,-0.1156,1.1623});
CShape* Shape617 = (CShape *)(m_pScene.createNode("Shape"));
Shape617->setUSE("SiteShape");
Transform616->addChild(*Shape617);

HAnimSite615->addChildren(*Transform616);

HAnimSegment611->addChildren(*HAnimSite615);

HAnimJoint610->addChildren(*HAnimSegment611);

CHAnimJoint* HAnimJoint618 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint618->setName("t2");
HAnimJoint618->setDEF("hanim_t2");
HAnimJoint618->setCenter(new float[3]{-0.0002,-0.1157,1.1871});
CHAnimSegment* HAnimSegment619 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment619->setName("SEGMENT_FOR_t2");
HAnimSegment619->setDEF("hanim_SEGMENT_FOR_t2");
CTouchSensor* TouchSensor620 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor620->setDescription("joint t2 segment SEGMENT_FOR_t2");
HAnimSegment619->addChildren(*TouchSensor620);

CTransform* Transform621 = (CTransform *)(m_pScene.createNode("Transform"));
Transform621->setTranslation(new float[3]{-0.0002,-0.1157,1.1871});
CShape* Shape622 = (CShape *)(m_pScene.createNode("Shape"));
Shape622->setUSE("JointShape");
Transform621->addChild(*Shape622);

HAnimSegment619->addChildren(*Transform621);

CHAnimSite* HAnimSite623 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite623->setName("SEGMENT_FOR_t2_tip");
HAnimSite623->setDEF("hanim_SEGMENT_FOR_t2_tip");
CTransform* Transform624 = (CTransform *)(m_pScene.createNode("Transform"));
Transform624->setTranslation(new float[3]{-0.0002,-0.1157,1.1871});
CShape* Shape625 = (CShape *)(m_pScene.createNode("Shape"));
Shape625->setUSE("SiteShape");
Transform624->addChild(*Shape625);

HAnimSite623->addChildren(*Transform624);

HAnimSegment619->addChildren(*HAnimSite623);

HAnimJoint618->addChildren(*HAnimSegment619);

CHAnimJoint* HAnimJoint626 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint626->setName("t1");
HAnimJoint626->setDEF("hanim_t1");
HAnimJoint626->setCenter(new float[3]{-0.0002,-0.1156,1.2109});
CHAnimSegment* HAnimSegment627 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment627->setName("SEGMENT_FOR_t1");
HAnimSegment627->setDEF("hanim_SEGMENT_FOR_t1");
CTouchSensor* TouchSensor628 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor628->setDescription("joint t1 segment SEGMENT_FOR_t1");
HAnimSegment627->addChildren(*TouchSensor628);

CTransform* Transform629 = (CTransform *)(m_pScene.createNode("Transform"));
Transform629->setTranslation(new float[3]{-0.0002,-0.1156,1.2109});
CShape* Shape630 = (CShape *)(m_pScene.createNode("Shape"));
Shape630->setUSE("JointShape");
Transform629->addChild(*Shape630);

HAnimSegment627->addChildren(*Transform629);

CHAnimSite* HAnimSite631 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite631->setName("SEGMENT_FOR_t1_tip");
HAnimSite631->setDEF("hanim_SEGMENT_FOR_t1_tip");
CTransform* Transform632 = (CTransform *)(m_pScene.createNode("Transform"));
Transform632->setTranslation(new float[3]{-0.0002,-0.1156,1.2109});
CShape* Shape633 = (CShape *)(m_pScene.createNode("Shape"));
Shape633->setUSE("SiteShape");
Transform632->addChild(*Shape633);

HAnimSite631->addChildren(*Transform632);

HAnimSegment627->addChildren(*HAnimSite631);

HAnimJoint626->addChildren(*HAnimSegment627);

CHAnimJoint* HAnimJoint634 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint634->setName("c7");
HAnimJoint634->setDEF("hanim_c7");
HAnimJoint634->setCenter(new float[3]{-0.0002,-0.1169,1.2368});
CHAnimSegment* HAnimSegment635 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment635->setName("SEGMENT_FOR_c7");
HAnimSegment635->setDEF("hanim_SEGMENT_FOR_c7");
CTouchSensor* TouchSensor636 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor636->setDescription("joint c7 segment SEGMENT_FOR_c7");
HAnimSegment635->addChildren(*TouchSensor636);

CTransform* Transform637 = (CTransform *)(m_pScene.createNode("Transform"));
Transform637->setTranslation(new float[3]{-0.0002,-0.1169,1.2368});
CShape* Shape638 = (CShape *)(m_pScene.createNode("Shape"));
Shape638->setUSE("JointShape");
Transform637->addChild(*Shape638);

HAnimSegment635->addChildren(*Transform637);

CHAnimSite* HAnimSite639 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite639->setName("SEGMENT_FOR_c7_tip");
HAnimSite639->setDEF("hanim_SEGMENT_FOR_c7_tip");
CTransform* Transform640 = (CTransform *)(m_pScene.createNode("Transform"));
Transform640->setTranslation(new float[3]{-0.0002,-0.1169,1.2368});
CShape* Shape641 = (CShape *)(m_pScene.createNode("Shape"));
Shape641->setUSE("SiteShape");
Transform640->addChild(*Shape641);

HAnimSite639->addChildren(*Transform640);

HAnimSegment635->addChildren(*HAnimSite639);

HAnimJoint634->addChildren(*HAnimSegment635);

CHAnimJoint* HAnimJoint642 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint642->setName("c6");
HAnimJoint642->setDEF("hanim_c6");
HAnimJoint642->setCenter(new float[3]{-0.0002,-0.1169,1.249});
CHAnimSegment* HAnimSegment643 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment643->setName("SEGMENT_FOR_c6");
HAnimSegment643->setDEF("hanim_SEGMENT_FOR_c6");
CTouchSensor* TouchSensor644 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor644->setDescription("joint c6 segment SEGMENT_FOR_c6");
HAnimSegment643->addChildren(*TouchSensor644);

CTransform* Transform645 = (CTransform *)(m_pScene.createNode("Transform"));
Transform645->setTranslation(new float[3]{-0.0002,-0.1169,1.249});
CShape* Shape646 = (CShape *)(m_pScene.createNode("Shape"));
Shape646->setUSE("JointShape");
Transform645->addChild(*Shape646);

HAnimSegment643->addChildren(*Transform645);

CHAnimSite* HAnimSite647 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite647->setName("SEGMENT_FOR_c6_tip");
HAnimSite647->setDEF("hanim_SEGMENT_FOR_c6_tip");
CTransform* Transform648 = (CTransform *)(m_pScene.createNode("Transform"));
Transform648->setTranslation(new float[3]{-0.0002,-0.1169,1.249});
CShape* Shape649 = (CShape *)(m_pScene.createNode("Shape"));
Shape649->setUSE("SiteShape");
Transform648->addChild(*Shape649);

HAnimSite647->addChildren(*Transform648);

HAnimSegment643->addChildren(*HAnimSite647);

HAnimJoint642->addChildren(*HAnimSegment643);

CHAnimJoint* HAnimJoint650 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint650->setName("c5");
HAnimJoint650->setDEF("hanim_c5");
HAnimJoint650->setCenter(new float[3]{-0.0002,-0.1169,1.2613});
CHAnimSegment* HAnimSegment651 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment651->setName("SEGMENT_FOR_c5");
HAnimSegment651->setDEF("hanim_SEGMENT_FOR_c5");
CTouchSensor* TouchSensor652 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor652->setDescription("joint c5 segment SEGMENT_FOR_c5");
HAnimSegment651->addChildren(*TouchSensor652);

CTransform* Transform653 = (CTransform *)(m_pScene.createNode("Transform"));
Transform653->setTranslation(new float[3]{-0.0002,-0.1169,1.2613});
CShape* Shape654 = (CShape *)(m_pScene.createNode("Shape"));
Shape654->setUSE("JointShape");
Transform653->addChild(*Shape654);

HAnimSegment651->addChildren(*Transform653);

CHAnimSite* HAnimSite655 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite655->setName("SEGMENT_FOR_c5_tip");
HAnimSite655->setDEF("hanim_SEGMENT_FOR_c5_tip");
CTransform* Transform656 = (CTransform *)(m_pScene.createNode("Transform"));
Transform656->setTranslation(new float[3]{-0.0002,-0.1169,1.2613});
CShape* Shape657 = (CShape *)(m_pScene.createNode("Shape"));
Shape657->setUSE("SiteShape");
Transform656->addChild(*Shape657);

HAnimSite655->addChildren(*Transform656);

HAnimSegment651->addChildren(*HAnimSite655);

HAnimJoint650->addChildren(*HAnimSegment651);

CHAnimJoint* HAnimJoint658 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint658->setName("c4");
HAnimJoint658->setDEF("hanim_c4");
HAnimJoint658->setCenter(new float[3]{-0.0002,-0.1169,1.2737});
CHAnimSegment* HAnimSegment659 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment659->setName("SEGMENT_FOR_c4");
HAnimSegment659->setDEF("hanim_SEGMENT_FOR_c4");
CTouchSensor* TouchSensor660 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor660->setDescription("joint c4 segment SEGMENT_FOR_c4");
HAnimSegment659->addChildren(*TouchSensor660);

CTransform* Transform661 = (CTransform *)(m_pScene.createNode("Transform"));
Transform661->setTranslation(new float[3]{-0.0002,-0.1169,1.2737});
CShape* Shape662 = (CShape *)(m_pScene.createNode("Shape"));
Shape662->setUSE("JointShape");
Transform661->addChild(*Shape662);

HAnimSegment659->addChildren(*Transform661);

CHAnimSite* HAnimSite663 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite663->setName("SEGMENT_FOR_c4_tip");
HAnimSite663->setDEF("hanim_SEGMENT_FOR_c4_tip");
CTransform* Transform664 = (CTransform *)(m_pScene.createNode("Transform"));
Transform664->setTranslation(new float[3]{-0.0002,-0.1169,1.2737});
CShape* Shape665 = (CShape *)(m_pScene.createNode("Shape"));
Shape665->setUSE("SiteShape");
Transform664->addChild(*Shape665);

HAnimSite663->addChildren(*Transform664);

HAnimSegment659->addChildren(*HAnimSite663);

HAnimJoint658->addChildren(*HAnimSegment659);

CHAnimJoint* HAnimJoint666 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint666->setName("c3");
HAnimJoint666->setDEF("hanim_c3");
HAnimJoint666->setCenter(new float[3]{-0.0002,-0.1169,1.2865});
CHAnimSegment* HAnimSegment667 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment667->setName("SEGMENT_FOR_c3");
HAnimSegment667->setDEF("hanim_SEGMENT_FOR_c3");
CTouchSensor* TouchSensor668 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor668->setDescription("joint c3 segment SEGMENT_FOR_c3");
HAnimSegment667->addChildren(*TouchSensor668);

CTransform* Transform669 = (CTransform *)(m_pScene.createNode("Transform"));
Transform669->setTranslation(new float[3]{-0.0002,-0.1169,1.2865});
CShape* Shape670 = (CShape *)(m_pScene.createNode("Shape"));
Shape670->setUSE("JointShape");
Transform669->addChild(*Shape670);

HAnimSegment667->addChildren(*Transform669);

CHAnimSite* HAnimSite671 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite671->setName("SEGMENT_FOR_c3_tip");
HAnimSite671->setDEF("hanim_SEGMENT_FOR_c3_tip");
CTransform* Transform672 = (CTransform *)(m_pScene.createNode("Transform"));
Transform672->setTranslation(new float[3]{-0.0002,-0.1169,1.2865});
CShape* Shape673 = (CShape *)(m_pScene.createNode("Shape"));
Shape673->setUSE("SiteShape");
Transform672->addChild(*Shape673);

HAnimSite671->addChildren(*Transform672);

HAnimSegment667->addChildren(*HAnimSite671);

HAnimJoint666->addChildren(*HAnimSegment667);

CHAnimJoint* HAnimJoint674 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint674->setName("c2");
HAnimJoint674->setDEF("hanim_c2");
HAnimJoint674->setCenter(new float[3]{-0.0002,-0.1169,1.2982});
CHAnimSegment* HAnimSegment675 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment675->setName("SEGMENT_FOR_c2");
HAnimSegment675->setDEF("hanim_SEGMENT_FOR_c2");
CTouchSensor* TouchSensor676 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor676->setDescription("joint c2 segment SEGMENT_FOR_c2");
HAnimSegment675->addChildren(*TouchSensor676);

CTransform* Transform677 = (CTransform *)(m_pScene.createNode("Transform"));
Transform677->setTranslation(new float[3]{-0.0002,-0.1169,1.2982});
CShape* Shape678 = (CShape *)(m_pScene.createNode("Shape"));
Shape678->setUSE("JointShape");
Transform677->addChild(*Shape678);

HAnimSegment675->addChildren(*Transform677);

CHAnimSite* HAnimSite679 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite679->setName("SEGMENT_FOR_c2_tip");
HAnimSite679->setDEF("hanim_SEGMENT_FOR_c2_tip");
CTransform* Transform680 = (CTransform *)(m_pScene.createNode("Transform"));
Transform680->setTranslation(new float[3]{-0.0002,-0.1169,1.2982});
CShape* Shape681 = (CShape *)(m_pScene.createNode("Shape"));
Shape681->setUSE("SiteShape");
Transform680->addChild(*Shape681);

HAnimSite679->addChildren(*Transform680);

HAnimSegment675->addChildren(*HAnimSite679);

HAnimJoint674->addChildren(*HAnimSegment675);

CHAnimJoint* HAnimJoint682 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint682->setName("c1");
HAnimJoint682->setDEF("hanim_c1");
HAnimJoint682->setCenter(new float[3]{-0.0002,-0.1169,1.3099});
CHAnimSegment* HAnimSegment683 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment683->setName("SEGMENT_FOR_c1");
HAnimSegment683->setDEF("hanim_SEGMENT_FOR_c1");
CTouchSensor* TouchSensor684 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor684->setDescription("joint c1 segment SEGMENT_FOR_c1");
HAnimSegment683->addChildren(*TouchSensor684);

CTransform* Transform685 = (CTransform *)(m_pScene.createNode("Transform"));
Transform685->setTranslation(new float[3]{-0.0002,-0.1169,1.3099});
CShape* Shape686 = (CShape *)(m_pScene.createNode("Shape"));
Shape686->setUSE("JointShape");
Transform685->addChild(*Shape686);

HAnimSegment683->addChildren(*Transform685);

CHAnimSite* HAnimSite687 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite687->setName("SEGMENT_FOR_c1_tip");
HAnimSite687->setDEF("hanim_SEGMENT_FOR_c1_tip");
CTransform* Transform688 = (CTransform *)(m_pScene.createNode("Transform"));
Transform688->setTranslation(new float[3]{-0.0002,-0.1169,1.3099});
CShape* Shape689 = (CShape *)(m_pScene.createNode("Shape"));
Shape689->setUSE("SiteShape");
Transform688->addChild(*Shape689);

HAnimSite687->addChildren(*Transform688);

HAnimSegment683->addChildren(*HAnimSite687);

HAnimJoint682->addChildren(*HAnimSegment683);

CHAnimJoint* HAnimJoint690 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint690->setName("skull");
HAnimJoint690->setDEF("hanim_skull");
HAnimJoint690->setCenter(new float[3]{-0.0002,-0.1173,1.3041});
CHAnimSegment* HAnimSegment691 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment691->setName("SEGMENT_FOR_skull");
HAnimSegment691->setDEF("hanim_SEGMENT_FOR_skull");
CTouchSensor* TouchSensor692 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor692->setDescription("joint skull segment SEGMENT_FOR_skull");
HAnimSegment691->addChildren(*TouchSensor692);

CTransform* Transform693 = (CTransform *)(m_pScene.createNode("Transform"));
Transform693->setTranslation(new float[3]{-0.0002,-0.1173,1.3041});
CShape* Shape694 = (CShape *)(m_pScene.createNode("Shape"));
Shape694->setUSE("JointShape");
Transform693->addChild(*Shape694);

HAnimSegment691->addChildren(*Transform693);

CHAnimSite* HAnimSite695 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite695->setName("SEGMENT_FOR_skull_tip");
HAnimSite695->setDEF("hanim_SEGMENT_FOR_skull_tip");
CTransform* Transform696 = (CTransform *)(m_pScene.createNode("Transform"));
Transform696->setTranslation(new float[3]{-0.0002,-0.1173,1.3041});
CShape* Shape697 = (CShape *)(m_pScene.createNode("Shape"));
Shape697->setUSE("SiteShape");
Transform696->addChild(*Shape697);

HAnimSite695->addChildren(*Transform696);

HAnimSegment691->addChildren(*HAnimSite695);

HAnimJoint690->addChildren(*HAnimSegment691);

CHAnimJoint* HAnimJoint698 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint698->setName("l_eyelid");
HAnimJoint698->setDEF("hanim_l_eyelid");
HAnimJoint698->setCenter(new float[3]{0.0503,-0.0689,1.4157});
CHAnimSegment* HAnimSegment699 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment699->setName("SEGMENT_FOR_l_eyelid");
HAnimSegment699->setDEF("hanim_SEGMENT_FOR_l_eyelid");
CTouchSensor* TouchSensor700 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor700->setDescription("joint l_eyelid segment SEGMENT_FOR_l_eyelid");
HAnimSegment699->addChildren(*TouchSensor700);

CTransform* Transform701 = (CTransform *)(m_pScene.createNode("Transform"));
Transform701->setTranslation(new float[3]{0.0503,-0.0689,1.4157});
CShape* Shape702 = (CShape *)(m_pScene.createNode("Shape"));
Shape702->setUSE("JointShape");
Transform701->addChild(*Shape702);

HAnimSegment699->addChildren(*Transform701);

CHAnimSite* HAnimSite703 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite703->setName("SEGMENT_FOR_l_eyelid_tip");
HAnimSite703->setDEF("hanim_SEGMENT_FOR_l_eyelid_tip");
CTransform* Transform704 = (CTransform *)(m_pScene.createNode("Transform"));
Transform704->setTranslation(new float[3]{0.0503,-0.0689,1.4157});
CShape* Shape705 = (CShape *)(m_pScene.createNode("Shape"));
Shape705->setUSE("SiteShape");
Transform704->addChild(*Shape705);

HAnimSite703->addChildren(*Transform704);

HAnimSegment699->addChildren(*HAnimSite703);

HAnimJoint698->addChildren(*HAnimSegment699);

HAnimJoint690->addChildren(*HAnimJoint698);

CHAnimJoint* HAnimJoint706 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint706->setName("r_eyelid");
HAnimJoint706->setDEF("hanim_r_eyelid");
HAnimJoint706->setCenter(new float[3]{-0.0507,-0.0689,1.4157});
CHAnimSegment* HAnimSegment707 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment707->setName("SEGMENT_FOR_r_eyelid");
HAnimSegment707->setDEF("hanim_SEGMENT_FOR_r_eyelid");
CTouchSensor* TouchSensor708 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor708->setDescription("joint r_eyelid segment SEGMENT_FOR_r_eyelid");
HAnimSegment707->addChildren(*TouchSensor708);

CTransform* Transform709 = (CTransform *)(m_pScene.createNode("Transform"));
Transform709->setTranslation(new float[3]{-0.0507,-0.0689,1.4157});
CShape* Shape710 = (CShape *)(m_pScene.createNode("Shape"));
Shape710->setUSE("JointShape");
Transform709->addChild(*Shape710);

HAnimSegment707->addChildren(*Transform709);

CHAnimSite* HAnimSite711 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite711->setName("SEGMENT_FOR_r_eyelid_tip");
HAnimSite711->setDEF("hanim_SEGMENT_FOR_r_eyelid_tip");
CTransform* Transform712 = (CTransform *)(m_pScene.createNode("Transform"));
Transform712->setTranslation(new float[3]{-0.0507,-0.0689,1.4157});
CShape* Shape713 = (CShape *)(m_pScene.createNode("Shape"));
Shape713->setUSE("SiteShape");
Transform712->addChild(*Shape713);

HAnimSite711->addChildren(*Transform712);

HAnimSegment707->addChildren(*HAnimSite711);

HAnimJoint706->addChildren(*HAnimSegment707);

HAnimJoint690->addChildren(*HAnimJoint706);

CHAnimJoint* HAnimJoint714 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint714->setName("l_eyeball");
HAnimJoint714->setDEF("hanim_l_eyeball");
HAnimJoint714->setCenter(new float[3]{0.0479,-0.0188,1.3963});
CHAnimSegment* HAnimSegment715 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment715->setName("SEGMENT_FOR_l_eyeball");
HAnimSegment715->setDEF("hanim_SEGMENT_FOR_l_eyeball");
CTouchSensor* TouchSensor716 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor716->setDescription("joint l_eyeball segment SEGMENT_FOR_l_eyeball");
HAnimSegment715->addChildren(*TouchSensor716);

CTransform* Transform717 = (CTransform *)(m_pScene.createNode("Transform"));
Transform717->setTranslation(new float[3]{0.0479,-0.0188,1.3963});
CShape* Shape718 = (CShape *)(m_pScene.createNode("Shape"));
Shape718->setUSE("JointShape");
Transform717->addChild(*Shape718);

HAnimSegment715->addChildren(*Transform717);

CHAnimSite* HAnimSite719 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite719->setName("SEGMENT_FOR_l_eyeball_tip");
HAnimSite719->setDEF("hanim_SEGMENT_FOR_l_eyeball_tip");
CTransform* Transform720 = (CTransform *)(m_pScene.createNode("Transform"));
Transform720->setTranslation(new float[3]{0.0479,-0.0188,1.3963});
CShape* Shape721 = (CShape *)(m_pScene.createNode("Shape"));
Shape721->setUSE("SiteShape");
Transform720->addChild(*Shape721);

HAnimSite719->addChildren(*Transform720);

HAnimSegment715->addChildren(*HAnimSite719);

HAnimJoint714->addChildren(*HAnimSegment715);

HAnimJoint690->addChildren(*HAnimJoint714);

CHAnimJoint* HAnimJoint722 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint722->setName("r_eyeball");
HAnimJoint722->setDEF("hanim_r_eyeball");
HAnimJoint722->setCenter(new float[3]{-0.0483,-0.0188,1.3963});
CHAnimSegment* HAnimSegment723 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment723->setName("SEGMENT_FOR_r_eyeball");
HAnimSegment723->setDEF("hanim_SEGMENT_FOR_r_eyeball");
CTouchSensor* TouchSensor724 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor724->setDescription("joint r_eyeball segment SEGMENT_FOR_r_eyeball");
HAnimSegment723->addChildren(*TouchSensor724);

CTransform* Transform725 = (CTransform *)(m_pScene.createNode("Transform"));
Transform725->setTranslation(new float[3]{-0.0483,-0.0188,1.3963});
CShape* Shape726 = (CShape *)(m_pScene.createNode("Shape"));
Shape726->setUSE("JointShape");
Transform725->addChild(*Shape726);

HAnimSegment723->addChildren(*Transform725);

CHAnimSite* HAnimSite727 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite727->setName("SEGMENT_FOR_r_eyeball_tip");
HAnimSite727->setDEF("hanim_SEGMENT_FOR_r_eyeball_tip");
CTransform* Transform728 = (CTransform *)(m_pScene.createNode("Transform"));
Transform728->setTranslation(new float[3]{-0.0483,-0.0188,1.3963});
CShape* Shape729 = (CShape *)(m_pScene.createNode("Shape"));
Shape729->setUSE("SiteShape");
Transform728->addChild(*Shape729);

HAnimSite727->addChildren(*Transform728);

HAnimSegment723->addChildren(*HAnimSite727);

HAnimJoint722->addChildren(*HAnimSegment723);

HAnimJoint690->addChildren(*HAnimJoint722);

CHAnimJoint* HAnimJoint730 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint730->setName("l_eyebrow");
HAnimJoint730->setDEF("hanim_l_eyebrow");
HAnimJoint730->setCenter(new float[3]{0.0216,0.0051,1.4053});
CHAnimSegment* HAnimSegment731 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment731->setName("SEGMENT_FOR_l_eyebrow");
HAnimSegment731->setDEF("hanim_SEGMENT_FOR_l_eyebrow");
CTouchSensor* TouchSensor732 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor732->setDescription("joint l_eyebrow segment SEGMENT_FOR_l_eyebrow");
HAnimSegment731->addChildren(*TouchSensor732);

CTransform* Transform733 = (CTransform *)(m_pScene.createNode("Transform"));
Transform733->setTranslation(new float[3]{0.0216,0.0051,1.4053});
CShape* Shape734 = (CShape *)(m_pScene.createNode("Shape"));
Shape734->setUSE("JointShape");
Transform733->addChild(*Shape734);

HAnimSegment731->addChildren(*Transform733);

CHAnimSite* HAnimSite735 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite735->setName("SEGMENT_FOR_l_eyebrow_tip");
HAnimSite735->setDEF("hanim_SEGMENT_FOR_l_eyebrow_tip");
CTransform* Transform736 = (CTransform *)(m_pScene.createNode("Transform"));
Transform736->setTranslation(new float[3]{0.0216,0.0051,1.4053});
CShape* Shape737 = (CShape *)(m_pScene.createNode("Shape"));
Shape737->setUSE("SiteShape");
Transform736->addChild(*Shape737);

HAnimSite735->addChildren(*Transform736);

HAnimSegment731->addChildren(*HAnimSite735);

HAnimJoint730->addChildren(*HAnimSegment731);

HAnimJoint690->addChildren(*HAnimJoint730);

CHAnimJoint* HAnimJoint738 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint738->setName("r_eyebrow");
HAnimJoint738->setDEF("hanim_r_eyebrow");
HAnimJoint738->setCenter(new float[3]{-0.0219,0.0051,1.4053});
CHAnimSegment* HAnimSegment739 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment739->setName("SEGMENT_FOR_r_eyebrow");
HAnimSegment739->setDEF("hanim_SEGMENT_FOR_r_eyebrow");
CTouchSensor* TouchSensor740 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor740->setDescription("joint r_eyebrow segment SEGMENT_FOR_r_eyebrow");
HAnimSegment739->addChildren(*TouchSensor740);

CTransform* Transform741 = (CTransform *)(m_pScene.createNode("Transform"));
Transform741->setTranslation(new float[3]{-0.0219,0.0051,1.4053});
CShape* Shape742 = (CShape *)(m_pScene.createNode("Shape"));
Shape742->setUSE("JointShape");
Transform741->addChild(*Shape742);

HAnimSegment739->addChildren(*Transform741);

CHAnimSite* HAnimSite743 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite743->setName("SEGMENT_FOR_r_eyebrow_tip");
HAnimSite743->setDEF("hanim_SEGMENT_FOR_r_eyebrow_tip");
CTransform* Transform744 = (CTransform *)(m_pScene.createNode("Transform"));
Transform744->setTranslation(new float[3]{-0.0219,0.0051,1.4053});
CShape* Shape745 = (CShape *)(m_pScene.createNode("Shape"));
Shape745->setUSE("SiteShape");
Transform744->addChild(*Shape745);

HAnimSite743->addChildren(*Transform744);

HAnimSegment739->addChildren(*HAnimSite743);

HAnimJoint738->addChildren(*HAnimSegment739);

HAnimJoint690->addChildren(*HAnimJoint738);

CHAnimJoint* HAnimJoint746 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint746->setName("jaw");
HAnimJoint746->setDEF("hanim_jaw");
HAnimJoint746->setCenter(new float[3]{-0.0002,-0.0865,1.3043});
CHAnimSegment* HAnimSegment747 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment747->setName("SEGMENT_FOR_jaw");
HAnimSegment747->setDEF("hanim_SEGMENT_FOR_jaw");
CTouchSensor* TouchSensor748 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor748->setDescription("joint jaw segment SEGMENT_FOR_jaw");
HAnimSegment747->addChildren(*TouchSensor748);

CTransform* Transform749 = (CTransform *)(m_pScene.createNode("Transform"));
Transform749->setTranslation(new float[3]{-0.0002,-0.0865,1.3043});
CShape* Shape750 = (CShape *)(m_pScene.createNode("Shape"));
Shape750->setUSE("JointShape");
Transform749->addChild(*Shape750);

HAnimSegment747->addChildren(*Transform749);

CHAnimSite* HAnimSite751 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite751->setName("SEGMENT_FOR_jaw_tip");
HAnimSite751->setDEF("hanim_SEGMENT_FOR_jaw_tip");
CTransform* Transform752 = (CTransform *)(m_pScene.createNode("Transform"));
Transform752->setTranslation(new float[3]{-0.0002,-0.0865,1.3043});
CShape* Shape753 = (CShape *)(m_pScene.createNode("Shape"));
Shape753->setUSE("SiteShape");
Transform752->addChild(*Shape753);

HAnimSite751->addChildren(*Transform752);

HAnimSegment747->addChildren(*HAnimSite751);

HAnimJoint746->addChildren(*HAnimSegment747);

HAnimJoint690->addChildren(*HAnimJoint746);

HAnimJoint682->addChildren(*HAnimJoint690);

HAnimJoint674->addChildren(*HAnimJoint682);

HAnimJoint666->addChildren(*HAnimJoint674);

HAnimJoint658->addChildren(*HAnimJoint666);

HAnimJoint650->addChildren(*HAnimJoint658);

HAnimJoint642->addChildren(*HAnimJoint650);

HAnimJoint634->addChildren(*HAnimJoint642);

HAnimJoint626->addChildren(*HAnimJoint634);

CHAnimJoint* HAnimJoint754 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint754->setName("l_clavicle");
HAnimJoint754->setDEF("hanim_l_clavicle");
HAnimJoint754->setCenter(new float[3]{0.1228,-0.1148,1.1833});
CHAnimSegment* HAnimSegment755 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment755->setName("SEGMENT_FOR_l_clavicle");
HAnimSegment755->setDEF("hanim_SEGMENT_FOR_l_clavicle");
CTouchSensor* TouchSensor756 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor756->setDescription("joint l_clavicle segment SEGMENT_FOR_l_clavicle");
HAnimSegment755->addChildren(*TouchSensor756);

CTransform* Transform757 = (CTransform *)(m_pScene.createNode("Transform"));
Transform757->setTranslation(new float[3]{0.1228,-0.1148,1.1833});
CShape* Shape758 = (CShape *)(m_pScene.createNode("Shape"));
Shape758->setUSE("JointShape");
Transform757->addChild(*Shape758);

HAnimSegment755->addChildren(*Transform757);

CHAnimSite* HAnimSite759 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite759->setName("SEGMENT_FOR_l_clavicle_tip");
HAnimSite759->setDEF("hanim_SEGMENT_FOR_l_clavicle_tip");
CTransform* Transform760 = (CTransform *)(m_pScene.createNode("Transform"));
Transform760->setTranslation(new float[3]{0.1228,-0.1148,1.1833});
CShape* Shape761 = (CShape *)(m_pScene.createNode("Shape"));
Shape761->setUSE("SiteShape");
Transform760->addChild(*Shape761);

HAnimSite759->addChildren(*Transform760);

HAnimSegment755->addChildren(*HAnimSite759);

HAnimJoint754->addChildren(*HAnimSegment755);

CHAnimJoint* HAnimJoint762 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint762->setName("l_scapula");
HAnimJoint762->setDEF("hanim_l_scapula");
HAnimJoint762->setCenter(new float[3]{0.0383,-0.1157,1.2001});
CHAnimSegment* HAnimSegment763 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment763->setName("SEGMENT_FOR_l_scapula");
HAnimSegment763->setDEF("hanim_SEGMENT_FOR_l_scapula");
CTouchSensor* TouchSensor764 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor764->setDescription("joint l_scapula segment SEGMENT_FOR_l_scapula");
HAnimSegment763->addChildren(*TouchSensor764);

CTransform* Transform765 = (CTransform *)(m_pScene.createNode("Transform"));
Transform765->setTranslation(new float[3]{0.0383,-0.1157,1.2001});
CShape* Shape766 = (CShape *)(m_pScene.createNode("Shape"));
Shape766->setUSE("JointShape");
Transform765->addChild(*Shape766);

HAnimSegment763->addChildren(*Transform765);

CHAnimSite* HAnimSite767 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite767->setName("SEGMENT_FOR_l_scapula_tip");
HAnimSite767->setDEF("hanim_SEGMENT_FOR_l_scapula_tip");
CTransform* Transform768 = (CTransform *)(m_pScene.createNode("Transform"));
Transform768->setTranslation(new float[3]{0.0383,-0.1157,1.2001});
CShape* Shape769 = (CShape *)(m_pScene.createNode("Shape"));
Shape769->setUSE("SiteShape");
Transform768->addChild(*Shape769);

HAnimSite767->addChildren(*Transform768);

HAnimSegment763->addChildren(*HAnimSite767);

HAnimJoint762->addChildren(*HAnimSegment763);

CHAnimJoint* HAnimJoint770 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint770->setName("l_upperarm");
HAnimJoint770->setDEF("hanim_l_upperarm");
HAnimJoint770->setCenter(new float[3]{0.1649,-0.1051,1.17});
CHAnimSegment* HAnimSegment771 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment771->setName("SEGMENT_FOR_l_upperarm");
HAnimSegment771->setDEF("hanim_SEGMENT_FOR_l_upperarm");
CTouchSensor* TouchSensor772 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor772->setDescription("joint l_upperarm segment SEGMENT_FOR_l_upperarm");
HAnimSegment771->addChildren(*TouchSensor772);

CTransform* Transform773 = (CTransform *)(m_pScene.createNode("Transform"));
Transform773->setTranslation(new float[3]{0.1649,-0.1051,1.17});
CShape* Shape774 = (CShape *)(m_pScene.createNode("Shape"));
Shape774->setUSE("JointShape");
Transform773->addChild(*Shape774);

HAnimSegment771->addChildren(*Transform773);

CHAnimSite* HAnimSite775 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite775->setName("SEGMENT_FOR_l_upperarm_tip");
HAnimSite775->setDEF("hanim_SEGMENT_FOR_l_upperarm_tip");
CTransform* Transform776 = (CTransform *)(m_pScene.createNode("Transform"));
Transform776->setTranslation(new float[3]{0.1649,-0.1051,1.17});
CShape* Shape777 = (CShape *)(m_pScene.createNode("Shape"));
Shape777->setUSE("SiteShape");
Transform776->addChild(*Shape777);

HAnimSite775->addChildren(*Transform776);

HAnimSegment771->addChildren(*HAnimSite775);

HAnimJoint770->addChildren(*HAnimSegment771);

CHAnimJoint* HAnimJoint778 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint778->setName("l_forearm");
HAnimJoint778->setDEF("hanim_l_forearm");
HAnimJoint778->setCenter(new float[3]{0.1819,-0.1075,0.9202});
CHAnimSegment* HAnimSegment779 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment779->setName("SEGMENT_FOR_l_forearm");
HAnimSegment779->setDEF("hanim_SEGMENT_FOR_l_forearm");
CTouchSensor* TouchSensor780 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor780->setDescription("joint l_forearm segment SEGMENT_FOR_l_forearm");
HAnimSegment779->addChildren(*TouchSensor780);

CTransform* Transform781 = (CTransform *)(m_pScene.createNode("Transform"));
Transform781->setTranslation(new float[3]{0.1819,-0.1075,0.9202});
CShape* Shape782 = (CShape *)(m_pScene.createNode("Shape"));
Shape782->setUSE("JointShape");
Transform781->addChild(*Shape782);

HAnimSegment779->addChildren(*Transform781);

CHAnimSite* HAnimSite783 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite783->setName("SEGMENT_FOR_l_forearm_tip");
HAnimSite783->setDEF("hanim_SEGMENT_FOR_l_forearm_tip");
CTransform* Transform784 = (CTransform *)(m_pScene.createNode("Transform"));
Transform784->setTranslation(new float[3]{0.1819,-0.1075,0.9202});
CShape* Shape785 = (CShape *)(m_pScene.createNode("Shape"));
Shape785->setUSE("SiteShape");
Transform784->addChild(*Shape785);

HAnimSite783->addChildren(*Transform784);

HAnimSegment779->addChildren(*HAnimSite783);

HAnimJoint778->addChildren(*HAnimSegment779);

CHAnimJoint* HAnimJoint786 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint786->setName("l_carpal");
HAnimJoint786->setDEF("hanim_l_carpal");
HAnimJoint786->setCenter(new float[3]{0.1818,-0.1069,0.7157});
CHAnimSegment* HAnimSegment787 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment787->setName("SEGMENT_FOR_l_carpal");
HAnimSegment787->setDEF("hanim_SEGMENT_FOR_l_carpal");
CTouchSensor* TouchSensor788 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor788->setDescription("joint l_carpal segment SEGMENT_FOR_l_carpal");
HAnimSegment787->addChildren(*TouchSensor788);

CTransform* Transform789 = (CTransform *)(m_pScene.createNode("Transform"));
Transform789->setTranslation(new float[3]{0.1818,-0.1069,0.7157});
CShape* Shape790 = (CShape *)(m_pScene.createNode("Shape"));
Shape790->setUSE("JointShape");
Transform789->addChild(*Shape790);

HAnimSegment787->addChildren(*Transform789);

CHAnimSite* HAnimSite791 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite791->setName("SEGMENT_FOR_l_carpal_tip");
HAnimSite791->setDEF("hanim_SEGMENT_FOR_l_carpal_tip");
CTransform* Transform792 = (CTransform *)(m_pScene.createNode("Transform"));
Transform792->setTranslation(new float[3]{0.1818,-0.1069,0.7157});
CShape* Shape793 = (CShape *)(m_pScene.createNode("Shape"));
Shape793->setUSE("SiteShape");
Transform792->addChild(*Shape793);

HAnimSite791->addChildren(*Transform792);

HAnimSegment787->addChildren(*HAnimSite791);

HAnimJoint786->addChildren(*HAnimSegment787);

CHAnimJoint* HAnimJoint794 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint794->setName("l_trapezium");
HAnimJoint794->setDEF("hanim_l_trapezium");
HAnimJoint794->setCenter(new float[3]{0.1811,-0.0826,0.6975});
CHAnimSegment* HAnimSegment795 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment795->setName("SEGMENT_FOR_l_trapezium");
HAnimSegment795->setDEF("hanim_SEGMENT_FOR_l_trapezium");
CTouchSensor* TouchSensor796 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor796->setDescription("joint l_trapezium segment SEGMENT_FOR_l_trapezium");
HAnimSegment795->addChildren(*TouchSensor796);

CTransform* Transform797 = (CTransform *)(m_pScene.createNode("Transform"));
Transform797->setTranslation(new float[3]{0.1811,-0.0826,0.6975});
CShape* Shape798 = (CShape *)(m_pScene.createNode("Shape"));
Shape798->setUSE("JointShape");
Transform797->addChild(*Shape798);

HAnimSegment795->addChildren(*Transform797);

CHAnimSite* HAnimSite799 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite799->setName("SEGMENT_FOR_l_trapezium_tip");
HAnimSite799->setDEF("hanim_SEGMENT_FOR_l_trapezium_tip");
CTransform* Transform800 = (CTransform *)(m_pScene.createNode("Transform"));
Transform800->setTranslation(new float[3]{0.1811,-0.0826,0.6975});
CShape* Shape801 = (CShape *)(m_pScene.createNode("Shape"));
Shape801->setUSE("SiteShape");
Transform800->addChild(*Shape801);

HAnimSite799->addChildren(*Transform800);

HAnimSegment795->addChildren(*HAnimSite799);

HAnimJoint794->addChildren(*HAnimSegment795);

CHAnimJoint* HAnimJoint802 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint802->setName("l_metacarpal_1");
HAnimJoint802->setDEF("hanim_l_metacarpal_1");
HAnimJoint802->setCenter(new float[3]{0.1803,-0.0759,0.684});
CHAnimSegment* HAnimSegment803 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment803->setName("SEGMENT_FOR_l_metacarpal_1");
HAnimSegment803->setDEF("hanim_SEGMENT_FOR_l_metacarpal_1");
CTouchSensor* TouchSensor804 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor804->setDescription("joint l_metacarpal_1 segment SEGMENT_FOR_l_metacarpal_1");
HAnimSegment803->addChildren(*TouchSensor804);

CTransform* Transform805 = (CTransform *)(m_pScene.createNode("Transform"));
Transform805->setTranslation(new float[3]{0.1803,-0.0759,0.684});
CShape* Shape806 = (CShape *)(m_pScene.createNode("Shape"));
Shape806->setUSE("JointShape");
Transform805->addChild(*Shape806);

HAnimSegment803->addChildren(*Transform805);

CHAnimSite* HAnimSite807 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite807->setName("SEGMENT_FOR_l_metacarpal_1_tip");
HAnimSite807->setDEF("hanim_SEGMENT_FOR_l_metacarpal_1_tip");
CTransform* Transform808 = (CTransform *)(m_pScene.createNode("Transform"));
Transform808->setTranslation(new float[3]{0.1803,-0.0759,0.684});
CShape* Shape809 = (CShape *)(m_pScene.createNode("Shape"));
Shape809->setUSE("SiteShape");
Transform808->addChild(*Shape809);

HAnimSite807->addChildren(*Transform808);

HAnimSegment803->addChildren(*HAnimSite807);

HAnimJoint802->addChildren(*HAnimSegment803);

CHAnimJoint* HAnimJoint810 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint810->setName("l_carpal_proximal_phalanx_1");
HAnimJoint810->setDEF("hanim_l_carpal_proximal_phalanx_1");
HAnimJoint810->setCenter(new float[3]{0.1809,-0.0661,0.6642});
CHAnimSegment* HAnimSegment811 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment811->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_1");
HAnimSegment811->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1");
CTouchSensor* TouchSensor812 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor812->setDescription("joint l_carpal_proximal_phalanx_1 segment SEGMENT_FOR_l_carpal_proximal_phalanx_1");
HAnimSegment811->addChildren(*TouchSensor812);

CTransform* Transform813 = (CTransform *)(m_pScene.createNode("Transform"));
Transform813->setTranslation(new float[3]{0.1809,-0.0661,0.6642});
CShape* Shape814 = (CShape *)(m_pScene.createNode("Shape"));
Shape814->setUSE("JointShape");
Transform813->addChild(*Shape814);

HAnimSegment811->addChildren(*Transform813);

CHAnimSite* HAnimSite815 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite815->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip");
HAnimSite815->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip");
CTransform* Transform816 = (CTransform *)(m_pScene.createNode("Transform"));
Transform816->setTranslation(new float[3]{0.1809,-0.0661,0.6642});
CShape* Shape817 = (CShape *)(m_pScene.createNode("Shape"));
Shape817->setUSE("SiteShape");
Transform816->addChild(*Shape817);

HAnimSite815->addChildren(*Transform816);

HAnimSegment811->addChildren(*HAnimSite815);

HAnimJoint810->addChildren(*HAnimSegment811);

CHAnimJoint* HAnimJoint818 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint818->setName("l_carpal_distal_phalanx_1");
HAnimJoint818->setDEF("hanim_l_carpal_distal_phalanx_1");
HAnimJoint818->setCenter(new float[3]{0.1825,-0.0522,0.6455});
CHAnimSegment* HAnimSegment819 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment819->setName("SEGMENT_FOR_l_carpal_distal_phalanx_1");
HAnimSegment819->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1");
CTouchSensor* TouchSensor820 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor820->setDescription("joint l_carpal_distal_phalanx_1 segment SEGMENT_FOR_l_carpal_distal_phalanx_1");
HAnimSegment819->addChildren(*TouchSensor820);

CTransform* Transform821 = (CTransform *)(m_pScene.createNode("Transform"));
Transform821->setTranslation(new float[3]{0.1825,-0.0522,0.6455});
CShape* Shape822 = (CShape *)(m_pScene.createNode("Shape"));
Shape822->setUSE("JointShape");
Transform821->addChild(*Shape822);

HAnimSegment819->addChildren(*Transform821);

CHAnimSite* HAnimSite823 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite823->setName("SEGMENT_FOR_l_carpal_distal_phalanx_1_tip");
HAnimSite823->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1_tip");
CTransform* Transform824 = (CTransform *)(m_pScene.createNode("Transform"));
Transform824->setTranslation(new float[3]{0.1825,-0.0522,0.6455});
CShape* Shape825 = (CShape *)(m_pScene.createNode("Shape"));
Shape825->setUSE("SiteShape");
Transform824->addChild(*Shape825);

HAnimSite823->addChildren(*Transform824);

HAnimSegment819->addChildren(*HAnimSite823);

HAnimJoint818->addChildren(*HAnimSegment819);

HAnimJoint810->addChildren(*HAnimJoint818);

HAnimJoint802->addChildren(*HAnimJoint810);

HAnimJoint794->addChildren(*HAnimJoint802);

HAnimJoint786->addChildren(*HAnimJoint794);

CHAnimJoint* HAnimJoint826 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint826->setName("l_trapezoid");
HAnimJoint826->setDEF("hanim_l_trapezoid");
HAnimJoint826->setCenter(new float[3]{0.1811,-0.0935,0.6984});
CHAnimSegment* HAnimSegment827 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment827->setName("SEGMENT_FOR_l_trapezoid");
HAnimSegment827->setDEF("hanim_SEGMENT_FOR_l_trapezoid");
CTouchSensor* TouchSensor828 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor828->setDescription("joint l_trapezoid segment SEGMENT_FOR_l_trapezoid");
HAnimSegment827->addChildren(*TouchSensor828);

CTransform* Transform829 = (CTransform *)(m_pScene.createNode("Transform"));
Transform829->setTranslation(new float[3]{0.1811,-0.0935,0.6984});
CShape* Shape830 = (CShape *)(m_pScene.createNode("Shape"));
Shape830->setUSE("JointShape");
Transform829->addChild(*Shape830);

HAnimSegment827->addChildren(*Transform829);

CHAnimSite* HAnimSite831 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite831->setName("SEGMENT_FOR_l_trapezoid_tip");
HAnimSite831->setDEF("hanim_SEGMENT_FOR_l_trapezoid_tip");
CTransform* Transform832 = (CTransform *)(m_pScene.createNode("Transform"));
Transform832->setTranslation(new float[3]{0.1811,-0.0935,0.6984});
CShape* Shape833 = (CShape *)(m_pScene.createNode("Shape"));
Shape833->setUSE("SiteShape");
Transform832->addChild(*Shape833);

HAnimSite831->addChildren(*Transform832);

HAnimSegment827->addChildren(*HAnimSite831);

HAnimJoint826->addChildren(*HAnimSegment827);

CHAnimJoint* HAnimJoint834 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint834->setName("l_metacarpal_2");
HAnimJoint834->setDEF("hanim_l_metacarpal_2");
HAnimJoint834->setCenter(new float[3]{0.1811,-0.0922,0.679});
CHAnimSegment* HAnimSegment835 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment835->setName("SEGMENT_FOR_l_metacarpal_2");
HAnimSegment835->setDEF("hanim_SEGMENT_FOR_l_metacarpal_2");
CTouchSensor* TouchSensor836 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor836->setDescription("joint l_metacarpal_2 segment SEGMENT_FOR_l_metacarpal_2");
HAnimSegment835->addChildren(*TouchSensor836);

CTransform* Transform837 = (CTransform *)(m_pScene.createNode("Transform"));
Transform837->setTranslation(new float[3]{0.1811,-0.0922,0.679});
CShape* Shape838 = (CShape *)(m_pScene.createNode("Shape"));
Shape838->setUSE("JointShape");
Transform837->addChild(*Shape838);

HAnimSegment835->addChildren(*Transform837);

CHAnimSite* HAnimSite839 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite839->setName("SEGMENT_FOR_l_metacarpal_2_tip");
HAnimSite839->setDEF("hanim_SEGMENT_FOR_l_metacarpal_2_tip");
CTransform* Transform840 = (CTransform *)(m_pScene.createNode("Transform"));
Transform840->setTranslation(new float[3]{0.1811,-0.0922,0.679});
CShape* Shape841 = (CShape *)(m_pScene.createNode("Shape"));
Shape841->setUSE("SiteShape");
Transform840->addChild(*Shape841);

HAnimSite839->addChildren(*Transform840);

HAnimSegment835->addChildren(*HAnimSite839);

HAnimJoint834->addChildren(*HAnimSegment835);

CHAnimJoint* HAnimJoint842 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint842->setName("l_carpal_proximal_phalanx_2");
HAnimJoint842->setDEF("hanim_l_carpal_proximal_phalanx_2");
HAnimJoint842->setCenter(new float[3]{0.1836,-0.0868,0.6286});
CHAnimSegment* HAnimSegment843 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment843->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_2");
HAnimSegment843->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2");
CTouchSensor* TouchSensor844 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor844->setDescription("joint l_carpal_proximal_phalanx_2 segment SEGMENT_FOR_l_carpal_proximal_phalanx_2");
HAnimSegment843->addChildren(*TouchSensor844);

CTransform* Transform845 = (CTransform *)(m_pScene.createNode("Transform"));
Transform845->setTranslation(new float[3]{0.1836,-0.0868,0.6286});
CShape* Shape846 = (CShape *)(m_pScene.createNode("Shape"));
Shape846->setUSE("JointShape");
Transform845->addChild(*Shape846);

HAnimSegment843->addChildren(*Transform845);

CHAnimSite* HAnimSite847 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite847->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip");
HAnimSite847->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip");
CTransform* Transform848 = (CTransform *)(m_pScene.createNode("Transform"));
Transform848->setTranslation(new float[3]{0.1836,-0.0868,0.6286});
CShape* Shape849 = (CShape *)(m_pScene.createNode("Shape"));
Shape849->setUSE("SiteShape");
Transform848->addChild(*Shape849);

HAnimSite847->addChildren(*Transform848);

HAnimSegment843->addChildren(*HAnimSite847);

HAnimJoint842->addChildren(*HAnimSegment843);

CHAnimJoint* HAnimJoint850 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint850->setName("l_carpal_middle_phalanx_2");
HAnimJoint850->setDEF("hanim_l_carpal_middle_phalanx_2");
HAnimJoint850->setCenter(new float[3]{0.1815,-0.0877,0.5983});
CHAnimSegment* HAnimSegment851 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment851->setName("SEGMENT_FOR_l_carpal_middle_phalanx_2");
HAnimSegment851->setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2");
CTouchSensor* TouchSensor852 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor852->setDescription("joint l_carpal_middle_phalanx_2 segment SEGMENT_FOR_l_carpal_middle_phalanx_2");
HAnimSegment851->addChildren(*TouchSensor852);

CTransform* Transform853 = (CTransform *)(m_pScene.createNode("Transform"));
Transform853->setTranslation(new float[3]{0.1815,-0.0877,0.5983});
CShape* Shape854 = (CShape *)(m_pScene.createNode("Shape"));
Shape854->setUSE("JointShape");
Transform853->addChild(*Shape854);

HAnimSegment851->addChildren(*Transform853);

CHAnimSite* HAnimSite855 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite855->setName("SEGMENT_FOR_l_carpal_middle_phalanx_2_tip");
HAnimSite855->setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2_tip");
CTransform* Transform856 = (CTransform *)(m_pScene.createNode("Transform"));
Transform856->setTranslation(new float[3]{0.1815,-0.0877,0.5983});
CShape* Shape857 = (CShape *)(m_pScene.createNode("Shape"));
Shape857->setUSE("SiteShape");
Transform856->addChild(*Shape857);

HAnimSite855->addChildren(*Transform856);

HAnimSegment851->addChildren(*HAnimSite855);

HAnimJoint850->addChildren(*HAnimSegment851);

CHAnimJoint* HAnimJoint858 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint858->setName("l_carpal_distal_phalanx_2");
HAnimJoint858->setDEF("hanim_l_carpal_distal_phalanx_2");
HAnimJoint858->setCenter(new float[3]{0.1805,-0.0885,0.5731});
CHAnimSegment* HAnimSegment859 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment859->setName("SEGMENT_FOR_l_carpal_distal_phalanx_2");
HAnimSegment859->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2");
CTouchSensor* TouchSensor860 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor860->setDescription("joint l_carpal_distal_phalanx_2 segment SEGMENT_FOR_l_carpal_distal_phalanx_2");
HAnimSegment859->addChildren(*TouchSensor860);

CTransform* Transform861 = (CTransform *)(m_pScene.createNode("Transform"));
Transform861->setTranslation(new float[3]{0.1805,-0.0885,0.5731});
CShape* Shape862 = (CShape *)(m_pScene.createNode("Shape"));
Shape862->setUSE("JointShape");
Transform861->addChild(*Shape862);

HAnimSegment859->addChildren(*Transform861);

CHAnimSite* HAnimSite863 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite863->setName("SEGMENT_FOR_l_carpal_distal_phalanx_2_tip");
HAnimSite863->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2_tip");
CTransform* Transform864 = (CTransform *)(m_pScene.createNode("Transform"));
Transform864->setTranslation(new float[3]{0.1805,-0.0885,0.5731});
CShape* Shape865 = (CShape *)(m_pScene.createNode("Shape"));
Shape865->setUSE("SiteShape");
Transform864->addChild(*Shape865);

HAnimSite863->addChildren(*Transform864);

HAnimSegment859->addChildren(*HAnimSite863);

HAnimJoint858->addChildren(*HAnimSegment859);

HAnimJoint850->addChildren(*HAnimJoint858);

HAnimJoint842->addChildren(*HAnimJoint850);

HAnimJoint834->addChildren(*HAnimJoint842);

HAnimJoint826->addChildren(*HAnimJoint834);

HAnimJoint786->addChildren(*HAnimJoint826);

CHAnimJoint* HAnimJoint866 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint866->setName("l_capitate");
HAnimJoint866->setDEF("hanim_l_capitate");
HAnimJoint866->setCenter(new float[3]{0.1809,-0.1067,0.7});
CHAnimSegment* HAnimSegment867 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment867->setName("SEGMENT_FOR_l_capitate");
HAnimSegment867->setDEF("hanim_SEGMENT_FOR_l_capitate");
CTouchSensor* TouchSensor868 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor868->setDescription("joint l_capitate segment SEGMENT_FOR_l_capitate");
HAnimSegment867->addChildren(*TouchSensor868);

CTransform* Transform869 = (CTransform *)(m_pScene.createNode("Transform"));
Transform869->setTranslation(new float[3]{0.1809,-0.1067,0.7});
CShape* Shape870 = (CShape *)(m_pScene.createNode("Shape"));
Shape870->setUSE("JointShape");
Transform869->addChild(*Shape870);

HAnimSegment867->addChildren(*Transform869);

CHAnimSite* HAnimSite871 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite871->setName("SEGMENT_FOR_l_capitate_tip");
HAnimSite871->setDEF("hanim_SEGMENT_FOR_l_capitate_tip");
CTransform* Transform872 = (CTransform *)(m_pScene.createNode("Transform"));
Transform872->setTranslation(new float[3]{0.1809,-0.1067,0.7});
CShape* Shape873 = (CShape *)(m_pScene.createNode("Shape"));
Shape873->setUSE("SiteShape");
Transform872->addChild(*Shape873);

HAnimSite871->addChildren(*Transform872);

HAnimSegment867->addChildren(*HAnimSite871);

HAnimJoint866->addChildren(*HAnimSegment867);

CHAnimJoint* HAnimJoint874 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint874->setName("l_metacarpal_3");
HAnimJoint874->setDEF("hanim_l_metacarpal_3");
HAnimJoint874->setCenter(new float[3]{0.1809,-0.1081,0.6772});
CHAnimSegment* HAnimSegment875 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment875->setName("SEGMENT_FOR_l_metacarpal_3");
HAnimSegment875->setDEF("hanim_SEGMENT_FOR_l_metacarpal_3");
CTouchSensor* TouchSensor876 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor876->setDescription("joint l_metacarpal_3 segment SEGMENT_FOR_l_metacarpal_3");
HAnimSegment875->addChildren(*TouchSensor876);

CTransform* Transform877 = (CTransform *)(m_pScene.createNode("Transform"));
Transform877->setTranslation(new float[3]{0.1809,-0.1081,0.6772});
CShape* Shape878 = (CShape *)(m_pScene.createNode("Shape"));
Shape878->setUSE("JointShape");
Transform877->addChild(*Shape878);

HAnimSegment875->addChildren(*Transform877);

CHAnimSite* HAnimSite879 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite879->setName("SEGMENT_FOR_l_metacarpal_3_tip");
HAnimSite879->setDEF("hanim_SEGMENT_FOR_l_metacarpal_3_tip");
CTransform* Transform880 = (CTransform *)(m_pScene.createNode("Transform"));
Transform880->setTranslation(new float[3]{0.1809,-0.1081,0.6772});
CShape* Shape881 = (CShape *)(m_pScene.createNode("Shape"));
Shape881->setUSE("SiteShape");
Transform880->addChild(*Shape881);

HAnimSite879->addChildren(*Transform880);

HAnimSegment875->addChildren(*HAnimSite879);

HAnimJoint874->addChildren(*HAnimSegment875);

CHAnimJoint* HAnimJoint882 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint882->setName("l_carpal_proximal_phalanx_3");
HAnimJoint882->setDEF("hanim_l_carpal_proximal_phalanx_3");
HAnimJoint882->setCenter(new float[3]{0.1835,-0.1058,0.6264});
CHAnimSegment* HAnimSegment883 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment883->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_3");
HAnimSegment883->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3");
CTouchSensor* TouchSensor884 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor884->setDescription("joint l_carpal_proximal_phalanx_3 segment SEGMENT_FOR_l_carpal_proximal_phalanx_3");
HAnimSegment883->addChildren(*TouchSensor884);

CTransform* Transform885 = (CTransform *)(m_pScene.createNode("Transform"));
Transform885->setTranslation(new float[3]{0.1835,-0.1058,0.6264});
CShape* Shape886 = (CShape *)(m_pScene.createNode("Shape"));
Shape886->setUSE("JointShape");
Transform885->addChild(*Shape886);

HAnimSegment883->addChildren(*Transform885);

CHAnimSite* HAnimSite887 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite887->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip");
HAnimSite887->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip");
CTransform* Transform888 = (CTransform *)(m_pScene.createNode("Transform"));
Transform888->setTranslation(new float[3]{0.1835,-0.1058,0.6264});
CShape* Shape889 = (CShape *)(m_pScene.createNode("Shape"));
Shape889->setUSE("SiteShape");
Transform888->addChild(*Shape889);

HAnimSite887->addChildren(*Transform888);

HAnimSegment883->addChildren(*HAnimSite887);

HAnimJoint882->addChildren(*HAnimSegment883);

CHAnimJoint* HAnimJoint890 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint890->setName("l_carpal_middle_phalanx_3");
HAnimJoint890->setDEF("hanim_l_carpal_middle_phalanx_3");
HAnimJoint890->setCenter(new float[3]{0.1815,-0.1054,0.5947});
CHAnimSegment* HAnimSegment891 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment891->setName("SEGMENT_FOR_l_carpal_middle_phalanx_3");
HAnimSegment891->setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3");
CTouchSensor* TouchSensor892 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor892->setDescription("joint l_carpal_middle_phalanx_3 segment SEGMENT_FOR_l_carpal_middle_phalanx_3");
HAnimSegment891->addChildren(*TouchSensor892);

CTransform* Transform893 = (CTransform *)(m_pScene.createNode("Transform"));
Transform893->setTranslation(new float[3]{0.1815,-0.1054,0.5947});
CShape* Shape894 = (CShape *)(m_pScene.createNode("Shape"));
Shape894->setUSE("JointShape");
Transform893->addChild(*Shape894);

HAnimSegment891->addChildren(*Transform893);

CHAnimSite* HAnimSite895 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite895->setName("SEGMENT_FOR_l_carpal_middle_phalanx_3_tip");
HAnimSite895->setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3_tip");
CTransform* Transform896 = (CTransform *)(m_pScene.createNode("Transform"));
Transform896->setTranslation(new float[3]{0.1815,-0.1054,0.5947});
CShape* Shape897 = (CShape *)(m_pScene.createNode("Shape"));
Shape897->setUSE("SiteShape");
Transform896->addChild(*Shape897);

HAnimSite895->addChildren(*Transform896);

HAnimSegment891->addChildren(*HAnimSite895);

HAnimJoint890->addChildren(*HAnimSegment891);

CHAnimJoint* HAnimJoint898 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint898->setName("l_carpal_distal_phalanx_3");
HAnimJoint898->setDEF("hanim_l_carpal_distal_phalanx_3");
HAnimJoint898->setCenter(new float[3]{0.1805,-0.1056,0.5668});
CHAnimSegment* HAnimSegment899 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment899->setName("SEGMENT_FOR_l_carpal_distal_phalanx_3");
HAnimSegment899->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3");
CTouchSensor* TouchSensor900 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor900->setDescription("joint l_carpal_distal_phalanx_3 segment SEGMENT_FOR_l_carpal_distal_phalanx_3");
HAnimSegment899->addChildren(*TouchSensor900);

CTransform* Transform901 = (CTransform *)(m_pScene.createNode("Transform"));
Transform901->setTranslation(new float[3]{0.1805,-0.1056,0.5668});
CShape* Shape902 = (CShape *)(m_pScene.createNode("Shape"));
Shape902->setUSE("JointShape");
Transform901->addChild(*Shape902);

HAnimSegment899->addChildren(*Transform901);

CHAnimSite* HAnimSite903 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite903->setName("SEGMENT_FOR_l_carpal_distal_phalanx_3_tip");
HAnimSite903->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3_tip");
CTransform* Transform904 = (CTransform *)(m_pScene.createNode("Transform"));
Transform904->setTranslation(new float[3]{0.1805,-0.1056,0.5668});
CShape* Shape905 = (CShape *)(m_pScene.createNode("Shape"));
Shape905->setUSE("SiteShape");
Transform904->addChild(*Shape905);

HAnimSite903->addChildren(*Transform904);

HAnimSegment899->addChildren(*HAnimSite903);

HAnimJoint898->addChildren(*HAnimSegment899);

HAnimJoint890->addChildren(*HAnimJoint898);

HAnimJoint882->addChildren(*HAnimJoint890);

HAnimJoint874->addChildren(*HAnimJoint882);

HAnimJoint866->addChildren(*HAnimJoint874);

HAnimJoint786->addChildren(*HAnimJoint866);

CHAnimJoint* HAnimJoint906 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint906->setName("l_hamate");
HAnimJoint906->setDEF("hanim_l_hamate");
HAnimJoint906->setCenter(new float[3]{0.1809,-0.1276,0.6973});
CHAnimSegment* HAnimSegment907 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment907->setName("SEGMENT_FOR_l_hamate");
HAnimSegment907->setDEF("hanim_SEGMENT_FOR_l_hamate");
CTouchSensor* TouchSensor908 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor908->setDescription("joint l_hamate segment SEGMENT_FOR_l_hamate");
HAnimSegment907->addChildren(*TouchSensor908);

CTransform* Transform909 = (CTransform *)(m_pScene.createNode("Transform"));
Transform909->setTranslation(new float[3]{0.1809,-0.1276,0.6973});
CShape* Shape910 = (CShape *)(m_pScene.createNode("Shape"));
Shape910->setUSE("JointShape");
Transform909->addChild(*Shape910);

HAnimSegment907->addChildren(*Transform909);

CHAnimSite* HAnimSite911 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite911->setName("SEGMENT_FOR_l_hamate_tip");
HAnimSite911->setDEF("hanim_SEGMENT_FOR_l_hamate_tip");
CTransform* Transform912 = (CTransform *)(m_pScene.createNode("Transform"));
Transform912->setTranslation(new float[3]{0.1809,-0.1276,0.6973});
CShape* Shape913 = (CShape *)(m_pScene.createNode("Shape"));
Shape913->setUSE("SiteShape");
Transform912->addChild(*Shape913);

HAnimSite911->addChildren(*Transform912);

HAnimSegment907->addChildren(*HAnimSite911);

HAnimJoint906->addChildren(*HAnimSegment907);

CHAnimJoint* HAnimJoint914 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint914->setName("l_metacarpal_4");
HAnimJoint914->setDEF("hanim_l_metacarpal_4");
HAnimJoint914->setCenter(new float[3]{0.1809,-0.1218,0.6777});
CHAnimSegment* HAnimSegment915 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment915->setName("SEGMENT_FOR_l_metacarpal_4");
HAnimSegment915->setDEF("hanim_SEGMENT_FOR_l_metacarpal_4");
CTouchSensor* TouchSensor916 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor916->setDescription("joint l_metacarpal_4 segment SEGMENT_FOR_l_metacarpal_4");
HAnimSegment915->addChildren(*TouchSensor916);

CTransform* Transform917 = (CTransform *)(m_pScene.createNode("Transform"));
Transform917->setTranslation(new float[3]{0.1809,-0.1218,0.6777});
CShape* Shape918 = (CShape *)(m_pScene.createNode("Shape"));
Shape918->setUSE("JointShape");
Transform917->addChild(*Shape918);

HAnimSegment915->addChildren(*Transform917);

CHAnimSite* HAnimSite919 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite919->setName("SEGMENT_FOR_l_metacarpal_4_tip");
HAnimSite919->setDEF("hanim_SEGMENT_FOR_l_metacarpal_4_tip");
CTransform* Transform920 = (CTransform *)(m_pScene.createNode("Transform"));
Transform920->setTranslation(new float[3]{0.1809,-0.1218,0.6777});
CShape* Shape921 = (CShape *)(m_pScene.createNode("Shape"));
Shape921->setUSE("SiteShape");
Transform920->addChild(*Shape921);

HAnimSite919->addChildren(*Transform920);

HAnimSegment915->addChildren(*HAnimSite919);

HAnimJoint914->addChildren(*HAnimSegment915);

CHAnimJoint* HAnimJoint922 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint922->setName("l_carpal_proximal_phalanx_4");
HAnimJoint922->setDEF("hanim_l_carpal_proximal_phalanx_4");
HAnimJoint922->setCenter(new float[3]{0.1835,-0.1233,0.6255});
CHAnimSegment* HAnimSegment923 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment923->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_4");
HAnimSegment923->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4");
CTouchSensor* TouchSensor924 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor924->setDescription("joint l_carpal_proximal_phalanx_4 segment SEGMENT_FOR_l_carpal_proximal_phalanx_4");
HAnimSegment923->addChildren(*TouchSensor924);

CTransform* Transform925 = (CTransform *)(m_pScene.createNode("Transform"));
Transform925->setTranslation(new float[3]{0.1835,-0.1233,0.6255});
CShape* Shape926 = (CShape *)(m_pScene.createNode("Shape"));
Shape926->setUSE("JointShape");
Transform925->addChild(*Shape926);

HAnimSegment923->addChildren(*Transform925);

CHAnimSite* HAnimSite927 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite927->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip");
HAnimSite927->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip");
CTransform* Transform928 = (CTransform *)(m_pScene.createNode("Transform"));
Transform928->setTranslation(new float[3]{0.1835,-0.1233,0.6255});
CShape* Shape929 = (CShape *)(m_pScene.createNode("Shape"));
Shape929->setUSE("SiteShape");
Transform928->addChild(*Shape929);

HAnimSite927->addChildren(*Transform928);

HAnimSegment923->addChildren(*HAnimSite927);

HAnimJoint922->addChildren(*HAnimSegment923);

CHAnimJoint* HAnimJoint930 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint930->setName("l_carpal_middle_phalanx_4");
HAnimJoint930->setDEF("hanim_l_carpal_middle_phalanx_4");
HAnimJoint930->setCenter(new float[3]{0.1815,-0.1225,0.598});
CHAnimSegment* HAnimSegment931 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment931->setName("SEGMENT_FOR_l_carpal_middle_phalanx_4");
HAnimSegment931->setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4");
CTouchSensor* TouchSensor932 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor932->setDescription("joint l_carpal_middle_phalanx_4 segment SEGMENT_FOR_l_carpal_middle_phalanx_4");
HAnimSegment931->addChildren(*TouchSensor932);

CTransform* Transform933 = (CTransform *)(m_pScene.createNode("Transform"));
Transform933->setTranslation(new float[3]{0.1815,-0.1225,0.598});
CShape* Shape934 = (CShape *)(m_pScene.createNode("Shape"));
Shape934->setUSE("JointShape");
Transform933->addChild(*Shape934);

HAnimSegment931->addChildren(*Transform933);

CHAnimSite* HAnimSite935 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite935->setName("SEGMENT_FOR_l_carpal_middle_phalanx_4_tip");
HAnimSite935->setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4_tip");
CTransform* Transform936 = (CTransform *)(m_pScene.createNode("Transform"));
Transform936->setTranslation(new float[3]{0.1815,-0.1225,0.598});
CShape* Shape937 = (CShape *)(m_pScene.createNode("Shape"));
Shape937->setUSE("SiteShape");
Transform936->addChild(*Shape937);

HAnimSite935->addChildren(*Transform936);

HAnimSegment931->addChildren(*HAnimSite935);

HAnimJoint930->addChildren(*HAnimSegment931);

CHAnimJoint* HAnimJoint938 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint938->setName("l_carpal_distal_phalanx_4");
HAnimJoint938->setDEF("hanim_l_carpal_distal_phalanx_4");
HAnimJoint938->setCenter(new float[3]{0.1805,-0.1217,0.5722});
CHAnimSegment* HAnimSegment939 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment939->setName("SEGMENT_FOR_l_carpal_distal_phalanx_4");
HAnimSegment939->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4");
CTouchSensor* TouchSensor940 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor940->setDescription("joint l_carpal_distal_phalanx_4 segment SEGMENT_FOR_l_carpal_distal_phalanx_4");
HAnimSegment939->addChildren(*TouchSensor940);

CTransform* Transform941 = (CTransform *)(m_pScene.createNode("Transform"));
Transform941->setTranslation(new float[3]{0.1805,-0.1217,0.5722});
CShape* Shape942 = (CShape *)(m_pScene.createNode("Shape"));
Shape942->setUSE("JointShape");
Transform941->addChild(*Shape942);

HAnimSegment939->addChildren(*Transform941);

CHAnimSite* HAnimSite943 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite943->setName("SEGMENT_FOR_l_carpal_distal_phalanx_4_tip");
HAnimSite943->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4_tip");
CTransform* Transform944 = (CTransform *)(m_pScene.createNode("Transform"));
Transform944->setTranslation(new float[3]{0.1805,-0.1217,0.5722});
CShape* Shape945 = (CShape *)(m_pScene.createNode("Shape"));
Shape945->setUSE("SiteShape");
Transform944->addChild(*Shape945);

HAnimSite943->addChildren(*Transform944);

HAnimSegment939->addChildren(*HAnimSite943);

HAnimJoint938->addChildren(*HAnimSegment939);

HAnimJoint930->addChildren(*HAnimJoint938);

HAnimJoint922->addChildren(*HAnimJoint930);

HAnimJoint914->addChildren(*HAnimJoint922);

HAnimJoint906->addChildren(*HAnimJoint914);

CHAnimJoint* HAnimJoint946 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint946->setName("l_metacarpal_5");
HAnimJoint946->setDEF("hanim_l_metacarpal_5");
HAnimJoint946->setCenter(new float[3]{0.1815,-0.1347,0.6797});
CHAnimSegment* HAnimSegment947 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment947->setName("SEGMENT_FOR_l_metacarpal_5");
HAnimSegment947->setDEF("hanim_SEGMENT_FOR_l_metacarpal_5");
CTouchSensor* TouchSensor948 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor948->setDescription("joint l_metacarpal_5 segment SEGMENT_FOR_l_metacarpal_5");
HAnimSegment947->addChildren(*TouchSensor948);

CTransform* Transform949 = (CTransform *)(m_pScene.createNode("Transform"));
Transform949->setTranslation(new float[3]{0.1815,-0.1347,0.6797});
CShape* Shape950 = (CShape *)(m_pScene.createNode("Shape"));
Shape950->setUSE("JointShape");
Transform949->addChild(*Shape950);

HAnimSegment947->addChildren(*Transform949);

CHAnimSite* HAnimSite951 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite951->setName("SEGMENT_FOR_l_metacarpal_5_tip");
HAnimSite951->setDEF("hanim_SEGMENT_FOR_l_metacarpal_5_tip");
CTransform* Transform952 = (CTransform *)(m_pScene.createNode("Transform"));
Transform952->setTranslation(new float[3]{0.1815,-0.1347,0.6797});
CShape* Shape953 = (CShape *)(m_pScene.createNode("Shape"));
Shape953->setUSE("SiteShape");
Transform952->addChild(*Shape953);

HAnimSite951->addChildren(*Transform952);

HAnimSegment947->addChildren(*HAnimSite951);

HAnimJoint946->addChildren(*HAnimSegment947);

CHAnimJoint* HAnimJoint954 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint954->setName("l_carpal_proximal_phalanx_5");
HAnimJoint954->setDEF("hanim_l_carpal_proximal_phalanx_5");
HAnimJoint954->setCenter(new float[3]{0.1832,-0.1389,0.6295});
CHAnimSegment* HAnimSegment955 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment955->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_5");
HAnimSegment955->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5");
CTouchSensor* TouchSensor956 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor956->setDescription("joint l_carpal_proximal_phalanx_5 segment SEGMENT_FOR_l_carpal_proximal_phalanx_5");
HAnimSegment955->addChildren(*TouchSensor956);

CTransform* Transform957 = (CTransform *)(m_pScene.createNode("Transform"));
Transform957->setTranslation(new float[3]{0.1832,-0.1389,0.6295});
CShape* Shape958 = (CShape *)(m_pScene.createNode("Shape"));
Shape958->setUSE("JointShape");
Transform957->addChild(*Shape958);

HAnimSegment955->addChildren(*Transform957);

CHAnimSite* HAnimSite959 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite959->setName("SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip");
HAnimSite959->setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip");
CTransform* Transform960 = (CTransform *)(m_pScene.createNode("Transform"));
Transform960->setTranslation(new float[3]{0.1832,-0.1389,0.6295});
CShape* Shape961 = (CShape *)(m_pScene.createNode("Shape"));
Shape961->setUSE("SiteShape");
Transform960->addChild(*Shape961);

HAnimSite959->addChildren(*Transform960);

HAnimSegment955->addChildren(*HAnimSite959);

HAnimJoint954->addChildren(*HAnimSegment955);

CHAnimJoint* HAnimJoint962 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint962->setName("l_carpal_middle_phalanx_5");
HAnimJoint962->setDEF("hanim_l_carpal_middle_phalanx_5");
HAnimJoint962->setCenter(new float[3]{0.1815,-0.139,0.6124});
CHAnimSegment* HAnimSegment963 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment963->setName("SEGMENT_FOR_l_carpal_middle_phalanx_5");
HAnimSegment963->setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5");
CTouchSensor* TouchSensor964 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor964->setDescription("joint l_carpal_middle_phalanx_5 segment SEGMENT_FOR_l_carpal_middle_phalanx_5");
HAnimSegment963->addChildren(*TouchSensor964);

CTransform* Transform965 = (CTransform *)(m_pScene.createNode("Transform"));
Transform965->setTranslation(new float[3]{0.1815,-0.139,0.6124});
CShape* Shape966 = (CShape *)(m_pScene.createNode("Shape"));
Shape966->setUSE("JointShape");
Transform965->addChild(*Shape966);

HAnimSegment963->addChildren(*Transform965);

CHAnimSite* HAnimSite967 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite967->setName("SEGMENT_FOR_l_carpal_middle_phalanx_5_tip");
HAnimSite967->setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5_tip");
CTransform* Transform968 = (CTransform *)(m_pScene.createNode("Transform"));
Transform968->setTranslation(new float[3]{0.1815,-0.139,0.6124});
CShape* Shape969 = (CShape *)(m_pScene.createNode("Shape"));
Shape969->setUSE("SiteShape");
Transform968->addChild(*Shape969);

HAnimSite967->addChildren(*Transform968);

HAnimSegment963->addChildren(*HAnimSite967);

HAnimJoint962->addChildren(*HAnimSegment963);

CHAnimJoint* HAnimJoint970 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint970->setName("l_carpal_distal_phalanx_5");
HAnimJoint970->setDEF("hanim_l_carpal_distal_phalanx_5");
HAnimJoint970->setCenter(new float[3]{0.1806,-0.1388,0.5938});
CHAnimSegment* HAnimSegment971 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment971->setName("SEGMENT_FOR_l_carpal_distal_phalanx_5");
HAnimSegment971->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5");
CTouchSensor* TouchSensor972 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor972->setDescription("joint l_carpal_distal_phalanx_5 segment SEGMENT_FOR_l_carpal_distal_phalanx_5");
HAnimSegment971->addChildren(*TouchSensor972);

CTransform* Transform973 = (CTransform *)(m_pScene.createNode("Transform"));
Transform973->setTranslation(new float[3]{0.1806,-0.1388,0.5938});
CShape* Shape974 = (CShape *)(m_pScene.createNode("Shape"));
Shape974->setUSE("JointShape");
Transform973->addChild(*Shape974);

HAnimSegment971->addChildren(*Transform973);

CHAnimSite* HAnimSite975 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite975->setName("SEGMENT_FOR_l_carpal_distal_phalanx_5_tip");
HAnimSite975->setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5_tip");
CTransform* Transform976 = (CTransform *)(m_pScene.createNode("Transform"));
Transform976->setTranslation(new float[3]{0.1806,-0.1388,0.5938});
CShape* Shape977 = (CShape *)(m_pScene.createNode("Shape"));
Shape977->setUSE("SiteShape");
Transform976->addChild(*Shape977);

HAnimSite975->addChildren(*Transform976);

HAnimSegment971->addChildren(*HAnimSite975);

HAnimJoint970->addChildren(*HAnimSegment971);

HAnimJoint962->addChildren(*HAnimJoint970);

HAnimJoint954->addChildren(*HAnimJoint962);

HAnimJoint946->addChildren(*HAnimJoint954);

HAnimJoint906->addChildren(*HAnimJoint946);

HAnimJoint786->addChildren(*HAnimJoint906);

HAnimJoint778->addChildren(*HAnimJoint786);

HAnimJoint770->addChildren(*HAnimJoint778);

HAnimJoint762->addChildren(*HAnimJoint770);

HAnimJoint754->addChildren(*HAnimJoint762);

HAnimJoint626->addChildren(*HAnimJoint754);

CHAnimJoint* HAnimJoint978 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint978->setName("r_clavicle");
HAnimJoint978->setDEF("hanim_r_clavicle");
HAnimJoint978->setCenter(new float[3]{-0.1231,-0.1148,1.1833});
CHAnimSegment* HAnimSegment979 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment979->setName("SEGMENT_FOR_r_clavicle");
HAnimSegment979->setDEF("hanim_SEGMENT_FOR_r_clavicle");
CTouchSensor* TouchSensor980 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor980->setDescription("joint r_clavicle segment SEGMENT_FOR_r_clavicle");
HAnimSegment979->addChildren(*TouchSensor980);

CTransform* Transform981 = (CTransform *)(m_pScene.createNode("Transform"));
Transform981->setTranslation(new float[3]{-0.1231,-0.1148,1.1833});
CShape* Shape982 = (CShape *)(m_pScene.createNode("Shape"));
Shape982->setUSE("JointShape");
Transform981->addChild(*Shape982);

HAnimSegment979->addChildren(*Transform981);

CHAnimSite* HAnimSite983 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite983->setName("SEGMENT_FOR_r_clavicle_tip");
HAnimSite983->setDEF("hanim_SEGMENT_FOR_r_clavicle_tip");
CTransform* Transform984 = (CTransform *)(m_pScene.createNode("Transform"));
Transform984->setTranslation(new float[3]{-0.1231,-0.1148,1.1833});
CShape* Shape985 = (CShape *)(m_pScene.createNode("Shape"));
Shape985->setUSE("SiteShape");
Transform984->addChild(*Shape985);

HAnimSite983->addChildren(*Transform984);

HAnimSegment979->addChildren(*HAnimSite983);

HAnimJoint978->addChildren(*HAnimSegment979);

CHAnimJoint* HAnimJoint986 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint986->setName("r_scapula");
HAnimJoint986->setDEF("hanim_r_scapula");
HAnimJoint986->setCenter(new float[3]{-0.0387,-0.1157,1.2001});
CHAnimSegment* HAnimSegment987 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment987->setName("SEGMENT_FOR_r_scapula");
HAnimSegment987->setDEF("hanim_SEGMENT_FOR_r_scapula");
CTouchSensor* TouchSensor988 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor988->setDescription("joint r_scapula segment SEGMENT_FOR_r_scapula");
HAnimSegment987->addChildren(*TouchSensor988);

CTransform* Transform989 = (CTransform *)(m_pScene.createNode("Transform"));
Transform989->setTranslation(new float[3]{-0.0387,-0.1157,1.2001});
CShape* Shape990 = (CShape *)(m_pScene.createNode("Shape"));
Shape990->setUSE("JointShape");
Transform989->addChild(*Shape990);

HAnimSegment987->addChildren(*Transform989);

CHAnimSite* HAnimSite991 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite991->setName("SEGMENT_FOR_r_scapula_tip");
HAnimSite991->setDEF("hanim_SEGMENT_FOR_r_scapula_tip");
CTransform* Transform992 = (CTransform *)(m_pScene.createNode("Transform"));
Transform992->setTranslation(new float[3]{-0.0387,-0.1157,1.2001});
CShape* Shape993 = (CShape *)(m_pScene.createNode("Shape"));
Shape993->setUSE("SiteShape");
Transform992->addChild(*Shape993);

HAnimSite991->addChildren(*Transform992);

HAnimSegment987->addChildren(*HAnimSite991);

HAnimJoint986->addChildren(*HAnimSegment987);

CHAnimJoint* HAnimJoint994 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint994->setName("r_upperarm");
HAnimJoint994->setDEF("hanim_r_upperarm");
HAnimJoint994->setCenter(new float[3]{-0.1649,-0.1051,1.17});
CHAnimSegment* HAnimSegment995 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment995->setName("SEGMENT_FOR_r_upperarm");
HAnimSegment995->setDEF("hanim_SEGMENT_FOR_r_upperarm");
CTouchSensor* TouchSensor996 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor996->setDescription("joint r_upperarm segment SEGMENT_FOR_r_upperarm");
HAnimSegment995->addChildren(*TouchSensor996);

CTransform* Transform997 = (CTransform *)(m_pScene.createNode("Transform"));
Transform997->setTranslation(new float[3]{-0.1649,-0.1051,1.17});
CShape* Shape998 = (CShape *)(m_pScene.createNode("Shape"));
Shape998->setUSE("JointShape");
Transform997->addChild(*Shape998);

HAnimSegment995->addChildren(*Transform997);

CHAnimSite* HAnimSite999 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite999->setName("SEGMENT_FOR_r_upperarm_tip");
HAnimSite999->setDEF("hanim_SEGMENT_FOR_r_upperarm_tip");
CTransform* Transform1000 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1000->setTranslation(new float[3]{-0.1649,-0.1051,1.17});
CShape* Shape1001 = (CShape *)(m_pScene.createNode("Shape"));
Shape1001->setUSE("SiteShape");
Transform1000->addChild(*Shape1001);

HAnimSite999->addChildren(*Transform1000);

HAnimSegment995->addChildren(*HAnimSite999);

HAnimJoint994->addChildren(*HAnimSegment995);

CHAnimJoint* HAnimJoint1002 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1002->setName("r_forearm");
HAnimJoint1002->setDEF("hanim_r_forearm");
HAnimJoint1002->setCenter(new float[3]{-0.1819,-0.1075,0.9202});
CHAnimSegment* HAnimSegment1003 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1003->setName("SEGMENT_FOR_r_forearm");
HAnimSegment1003->setDEF("hanim_SEGMENT_FOR_r_forearm");
CTouchSensor* TouchSensor1004 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1004->setDescription("joint r_forearm segment SEGMENT_FOR_r_forearm");
HAnimSegment1003->addChildren(*TouchSensor1004);

CTransform* Transform1005 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1005->setTranslation(new float[3]{-0.1819,-0.1075,0.9202});
CShape* Shape1006 = (CShape *)(m_pScene.createNode("Shape"));
Shape1006->setUSE("JointShape");
Transform1005->addChild(*Shape1006);

HAnimSegment1003->addChildren(*Transform1005);

CHAnimSite* HAnimSite1007 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1007->setName("SEGMENT_FOR_r_forearm_tip");
HAnimSite1007->setDEF("hanim_SEGMENT_FOR_r_forearm_tip");
CTransform* Transform1008 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1008->setTranslation(new float[3]{-0.1819,-0.1075,0.9202});
CShape* Shape1009 = (CShape *)(m_pScene.createNode("Shape"));
Shape1009->setUSE("SiteShape");
Transform1008->addChild(*Shape1009);

HAnimSite1007->addChildren(*Transform1008);

HAnimSegment1003->addChildren(*HAnimSite1007);

HAnimJoint1002->addChildren(*HAnimSegment1003);

CHAnimJoint* HAnimJoint1010 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1010->setName("r_carpal");
HAnimJoint1010->setDEF("hanim_r_carpal");
HAnimJoint1010->setCenter(new float[3]{-0.1818,-0.1069,0.7157});
CHAnimSegment* HAnimSegment1011 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1011->setName("SEGMENT_FOR_r_carpal");
HAnimSegment1011->setDEF("hanim_SEGMENT_FOR_r_carpal");
CTouchSensor* TouchSensor1012 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1012->setDescription("joint r_carpal segment SEGMENT_FOR_r_carpal");
HAnimSegment1011->addChildren(*TouchSensor1012);

CTransform* Transform1013 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1013->setTranslation(new float[3]{-0.1818,-0.1069,0.7157});
CShape* Shape1014 = (CShape *)(m_pScene.createNode("Shape"));
Shape1014->setUSE("JointShape");
Transform1013->addChild(*Shape1014);

HAnimSegment1011->addChildren(*Transform1013);

CHAnimSite* HAnimSite1015 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1015->setName("SEGMENT_FOR_r_carpal_tip");
HAnimSite1015->setDEF("hanim_SEGMENT_FOR_r_carpal_tip");
CTransform* Transform1016 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1016->setTranslation(new float[3]{-0.1818,-0.1069,0.7157});
CShape* Shape1017 = (CShape *)(m_pScene.createNode("Shape"));
Shape1017->setUSE("SiteShape");
Transform1016->addChild(*Shape1017);

HAnimSite1015->addChildren(*Transform1016);

HAnimSegment1011->addChildren(*HAnimSite1015);

HAnimJoint1010->addChildren(*HAnimSegment1011);

CHAnimJoint* HAnimJoint1018 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1018->setName("r_trapezium");
HAnimJoint1018->setDEF("hanim_r_trapezium");
HAnimJoint1018->setCenter(new float[3]{-0.1811,-0.0826,0.6975});
CHAnimSegment* HAnimSegment1019 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1019->setName("SEGMENT_FOR_r_trapezium");
HAnimSegment1019->setDEF("hanim_SEGMENT_FOR_r_trapezium");
CTouchSensor* TouchSensor1020 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1020->setDescription("joint r_trapezium segment SEGMENT_FOR_r_trapezium");
HAnimSegment1019->addChildren(*TouchSensor1020);

CTransform* Transform1021 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1021->setTranslation(new float[3]{-0.1811,-0.0826,0.6975});
CShape* Shape1022 = (CShape *)(m_pScene.createNode("Shape"));
Shape1022->setUSE("JointShape");
Transform1021->addChild(*Shape1022);

HAnimSegment1019->addChildren(*Transform1021);

CHAnimSite* HAnimSite1023 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1023->setName("SEGMENT_FOR_r_trapezium_tip");
HAnimSite1023->setDEF("hanim_SEGMENT_FOR_r_trapezium_tip");
CTransform* Transform1024 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1024->setTranslation(new float[3]{-0.1811,-0.0826,0.6975});
CShape* Shape1025 = (CShape *)(m_pScene.createNode("Shape"));
Shape1025->setUSE("SiteShape");
Transform1024->addChild(*Shape1025);

HAnimSite1023->addChildren(*Transform1024);

HAnimSegment1019->addChildren(*HAnimSite1023);

HAnimJoint1018->addChildren(*HAnimSegment1019);

CHAnimJoint* HAnimJoint1026 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1026->setName("r_metacarpal_1");
HAnimJoint1026->setDEF("hanim_r_metacarpal_1");
HAnimJoint1026->setCenter(new float[3]{-0.1803,-0.0759,0.684});
CHAnimSegment* HAnimSegment1027 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1027->setName("SEGMENT_FOR_r_metacarpal_1");
HAnimSegment1027->setDEF("hanim_SEGMENT_FOR_r_metacarpal_1");
CTouchSensor* TouchSensor1028 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1028->setDescription("joint r_metacarpal_1 segment SEGMENT_FOR_r_metacarpal_1");
HAnimSegment1027->addChildren(*TouchSensor1028);

CTransform* Transform1029 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1029->setTranslation(new float[3]{-0.1803,-0.0759,0.684});
CShape* Shape1030 = (CShape *)(m_pScene.createNode("Shape"));
Shape1030->setUSE("JointShape");
Transform1029->addChild(*Shape1030);

HAnimSegment1027->addChildren(*Transform1029);

CHAnimSite* HAnimSite1031 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1031->setName("SEGMENT_FOR_r_metacarpal_1_tip");
HAnimSite1031->setDEF("hanim_SEGMENT_FOR_r_metacarpal_1_tip");
CTransform* Transform1032 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1032->setTranslation(new float[3]{-0.1803,-0.0759,0.684});
CShape* Shape1033 = (CShape *)(m_pScene.createNode("Shape"));
Shape1033->setUSE("SiteShape");
Transform1032->addChild(*Shape1033);

HAnimSite1031->addChildren(*Transform1032);

HAnimSegment1027->addChildren(*HAnimSite1031);

HAnimJoint1026->addChildren(*HAnimSegment1027);

CHAnimJoint* HAnimJoint1034 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1034->setName("r_carpal_proximal_phalanx_1");
HAnimJoint1034->setDEF("hanim_r_carpal_proximal_phalanx_1");
HAnimJoint1034->setCenter(new float[3]{-0.1808,-0.0661,0.6642});
CHAnimSegment* HAnimSegment1035 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1035->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_1");
HAnimSegment1035->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1");
CTouchSensor* TouchSensor1036 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1036->setDescription("joint r_carpal_proximal_phalanx_1 segment SEGMENT_FOR_r_carpal_proximal_phalanx_1");
HAnimSegment1035->addChildren(*TouchSensor1036);

CTransform* Transform1037 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1037->setTranslation(new float[3]{-0.1808,-0.0661,0.6642});
CShape* Shape1038 = (CShape *)(m_pScene.createNode("Shape"));
Shape1038->setUSE("JointShape");
Transform1037->addChild(*Shape1038);

HAnimSegment1035->addChildren(*Transform1037);

CHAnimSite* HAnimSite1039 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1039->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip");
HAnimSite1039->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip");
CTransform* Transform1040 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1040->setTranslation(new float[3]{-0.1808,-0.0661,0.6642});
CShape* Shape1041 = (CShape *)(m_pScene.createNode("Shape"));
Shape1041->setUSE("SiteShape");
Transform1040->addChild(*Shape1041);

HAnimSite1039->addChildren(*Transform1040);

HAnimSegment1035->addChildren(*HAnimSite1039);

HAnimJoint1034->addChildren(*HAnimSegment1035);

CHAnimJoint* HAnimJoint1042 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1042->setName("r_carpal_distal_phalanx_1");
HAnimJoint1042->setDEF("hanim_r_carpal_distal_phalanx_1");
HAnimJoint1042->setCenter(new float[3]{-0.1825,-0.0522,0.6455});
CHAnimSegment* HAnimSegment1043 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1043->setName("SEGMENT_FOR_r_carpal_distal_phalanx_1");
HAnimSegment1043->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1");
CTouchSensor* TouchSensor1044 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1044->setDescription("joint r_carpal_distal_phalanx_1 segment SEGMENT_FOR_r_carpal_distal_phalanx_1");
HAnimSegment1043->addChildren(*TouchSensor1044);

CTransform* Transform1045 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1045->setTranslation(new float[3]{-0.1825,-0.0522,0.6455});
CShape* Shape1046 = (CShape *)(m_pScene.createNode("Shape"));
Shape1046->setUSE("JointShape");
Transform1045->addChild(*Shape1046);

HAnimSegment1043->addChildren(*Transform1045);

CHAnimSite* HAnimSite1047 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1047->setName("SEGMENT_FOR_r_carpal_distal_phalanx_1_tip");
HAnimSite1047->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1_tip");
CTransform* Transform1048 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1048->setTranslation(new float[3]{-0.1825,-0.0522,0.6455});
CShape* Shape1049 = (CShape *)(m_pScene.createNode("Shape"));
Shape1049->setUSE("SiteShape");
Transform1048->addChild(*Shape1049);

HAnimSite1047->addChildren(*Transform1048);

HAnimSegment1043->addChildren(*HAnimSite1047);

HAnimJoint1042->addChildren(*HAnimSegment1043);

HAnimJoint1034->addChildren(*HAnimJoint1042);

HAnimJoint1026->addChildren(*HAnimJoint1034);

HAnimJoint1018->addChildren(*HAnimJoint1026);

HAnimJoint1010->addChildren(*HAnimJoint1018);

CHAnimJoint* HAnimJoint1050 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1050->setName("r_trapezoid");
HAnimJoint1050->setDEF("hanim_r_trapezoid");
HAnimJoint1050->setCenter(new float[3]{-0.1811,-0.0935,0.6984});
CHAnimSegment* HAnimSegment1051 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1051->setName("SEGMENT_FOR_r_trapezoid");
HAnimSegment1051->setDEF("hanim_SEGMENT_FOR_r_trapezoid");
CTouchSensor* TouchSensor1052 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1052->setDescription("joint r_trapezoid segment SEGMENT_FOR_r_trapezoid");
HAnimSegment1051->addChildren(*TouchSensor1052);

CTransform* Transform1053 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1053->setTranslation(new float[3]{-0.1811,-0.0935,0.6984});
CShape* Shape1054 = (CShape *)(m_pScene.createNode("Shape"));
Shape1054->setUSE("JointShape");
Transform1053->addChild(*Shape1054);

HAnimSegment1051->addChildren(*Transform1053);

CHAnimSite* HAnimSite1055 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1055->setName("SEGMENT_FOR_r_trapezoid_tip");
HAnimSite1055->setDEF("hanim_SEGMENT_FOR_r_trapezoid_tip");
CTransform* Transform1056 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1056->setTranslation(new float[3]{-0.1811,-0.0935,0.6984});
CShape* Shape1057 = (CShape *)(m_pScene.createNode("Shape"));
Shape1057->setUSE("SiteShape");
Transform1056->addChild(*Shape1057);

HAnimSite1055->addChildren(*Transform1056);

HAnimSegment1051->addChildren(*HAnimSite1055);

HAnimJoint1050->addChildren(*HAnimSegment1051);

CHAnimJoint* HAnimJoint1058 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1058->setName("r_metacarpal_2");
HAnimJoint1058->setDEF("hanim_r_metacarpal_2");
HAnimJoint1058->setCenter(new float[3]{-0.1811,-0.0922,0.679});
CHAnimSegment* HAnimSegment1059 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1059->setName("SEGMENT_FOR_r_metacarpal_2");
HAnimSegment1059->setDEF("hanim_SEGMENT_FOR_r_metacarpal_2");
CTouchSensor* TouchSensor1060 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1060->setDescription("joint r_metacarpal_2 segment SEGMENT_FOR_r_metacarpal_2");
HAnimSegment1059->addChildren(*TouchSensor1060);

CTransform* Transform1061 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1061->setTranslation(new float[3]{-0.1811,-0.0922,0.679});
CShape* Shape1062 = (CShape *)(m_pScene.createNode("Shape"));
Shape1062->setUSE("JointShape");
Transform1061->addChild(*Shape1062);

HAnimSegment1059->addChildren(*Transform1061);

CHAnimSite* HAnimSite1063 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1063->setName("SEGMENT_FOR_r_metacarpal_2_tip");
HAnimSite1063->setDEF("hanim_SEGMENT_FOR_r_metacarpal_2_tip");
CTransform* Transform1064 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1064->setTranslation(new float[3]{-0.1811,-0.0922,0.679});
CShape* Shape1065 = (CShape *)(m_pScene.createNode("Shape"));
Shape1065->setUSE("SiteShape");
Transform1064->addChild(*Shape1065);

HAnimSite1063->addChildren(*Transform1064);

HAnimSegment1059->addChildren(*HAnimSite1063);

HAnimJoint1058->addChildren(*HAnimSegment1059);

CHAnimJoint* HAnimJoint1066 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1066->setName("r_carpal_proximal_phalanx_2");
HAnimJoint1066->setDEF("hanim_r_carpal_proximal_phalanx_2");
HAnimJoint1066->setCenter(new float[3]{-0.1835,-0.0868,0.6286});
CHAnimSegment* HAnimSegment1067 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1067->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_2");
HAnimSegment1067->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2");
CTouchSensor* TouchSensor1068 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1068->setDescription("joint r_carpal_proximal_phalanx_2 segment SEGMENT_FOR_r_carpal_proximal_phalanx_2");
HAnimSegment1067->addChildren(*TouchSensor1068);

CTransform* Transform1069 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1069->setTranslation(new float[3]{-0.1835,-0.0868,0.6286});
CShape* Shape1070 = (CShape *)(m_pScene.createNode("Shape"));
Shape1070->setUSE("JointShape");
Transform1069->addChild(*Shape1070);

HAnimSegment1067->addChildren(*Transform1069);

CHAnimSite* HAnimSite1071 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1071->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip");
HAnimSite1071->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip");
CTransform* Transform1072 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1072->setTranslation(new float[3]{-0.1835,-0.0868,0.6286});
CShape* Shape1073 = (CShape *)(m_pScene.createNode("Shape"));
Shape1073->setUSE("SiteShape");
Transform1072->addChild(*Shape1073);

HAnimSite1071->addChildren(*Transform1072);

HAnimSegment1067->addChildren(*HAnimSite1071);

HAnimJoint1066->addChildren(*HAnimSegment1067);

CHAnimJoint* HAnimJoint1074 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1074->setName("r_carpal_middle_phalanx_2");
HAnimJoint1074->setDEF("hanim_r_carpal_middle_phalanx_2");
HAnimJoint1074->setCenter(new float[3]{-0.1815,-0.0877,0.5983});
CHAnimSegment* HAnimSegment1075 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1075->setName("SEGMENT_FOR_r_carpal_middle_phalanx_2");
HAnimSegment1075->setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2");
CTouchSensor* TouchSensor1076 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1076->setDescription("joint r_carpal_middle_phalanx_2 segment SEGMENT_FOR_r_carpal_middle_phalanx_2");
HAnimSegment1075->addChildren(*TouchSensor1076);

CTransform* Transform1077 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1077->setTranslation(new float[3]{-0.1815,-0.0877,0.5983});
CShape* Shape1078 = (CShape *)(m_pScene.createNode("Shape"));
Shape1078->setUSE("JointShape");
Transform1077->addChild(*Shape1078);

HAnimSegment1075->addChildren(*Transform1077);

CHAnimSite* HAnimSite1079 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1079->setName("SEGMENT_FOR_r_carpal_middle_phalanx_2_tip");
HAnimSite1079->setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2_tip");
CTransform* Transform1080 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1080->setTranslation(new float[3]{-0.1815,-0.0877,0.5983});
CShape* Shape1081 = (CShape *)(m_pScene.createNode("Shape"));
Shape1081->setUSE("SiteShape");
Transform1080->addChild(*Shape1081);

HAnimSite1079->addChildren(*Transform1080);

HAnimSegment1075->addChildren(*HAnimSite1079);

HAnimJoint1074->addChildren(*HAnimSegment1075);

CHAnimJoint* HAnimJoint1082 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1082->setName("r_carpal_distal_phalanx_2");
HAnimJoint1082->setDEF("hanim_r_carpal_distal_phalanx_2");
HAnimJoint1082->setCenter(new float[3]{-0.1805,-0.0885,0.5731});
CHAnimSegment* HAnimSegment1083 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1083->setName("SEGMENT_FOR_r_carpal_distal_phalanx_2");
HAnimSegment1083->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2");
CTouchSensor* TouchSensor1084 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1084->setDescription("joint r_carpal_distal_phalanx_2 segment SEGMENT_FOR_r_carpal_distal_phalanx_2");
HAnimSegment1083->addChildren(*TouchSensor1084);

CTransform* Transform1085 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1085->setTranslation(new float[3]{-0.1805,-0.0885,0.5731});
CShape* Shape1086 = (CShape *)(m_pScene.createNode("Shape"));
Shape1086->setUSE("JointShape");
Transform1085->addChild(*Shape1086);

HAnimSegment1083->addChildren(*Transform1085);

CHAnimSite* HAnimSite1087 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1087->setName("SEGMENT_FOR_r_carpal_distal_phalanx_2_tip");
HAnimSite1087->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2_tip");
CTransform* Transform1088 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1088->setTranslation(new float[3]{-0.1805,-0.0885,0.5731});
CShape* Shape1089 = (CShape *)(m_pScene.createNode("Shape"));
Shape1089->setUSE("SiteShape");
Transform1088->addChild(*Shape1089);

HAnimSite1087->addChildren(*Transform1088);

HAnimSegment1083->addChildren(*HAnimSite1087);

HAnimJoint1082->addChildren(*HAnimSegment1083);

HAnimJoint1074->addChildren(*HAnimJoint1082);

HAnimJoint1066->addChildren(*HAnimJoint1074);

HAnimJoint1058->addChildren(*HAnimJoint1066);

HAnimJoint1050->addChildren(*HAnimJoint1058);

HAnimJoint1010->addChildren(*HAnimJoint1050);

CHAnimJoint* HAnimJoint1090 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1090->setName("r_capitate");
HAnimJoint1090->setDEF("hanim_r_capitate");
HAnimJoint1090->setCenter(new float[3]{-0.1809,-0.1067,0.7});
CHAnimSegment* HAnimSegment1091 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1091->setName("SEGMENT_FOR_r_capitate");
HAnimSegment1091->setDEF("hanim_SEGMENT_FOR_r_capitate");
CTouchSensor* TouchSensor1092 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1092->setDescription("joint r_capitate segment SEGMENT_FOR_r_capitate");
HAnimSegment1091->addChildren(*TouchSensor1092);

CTransform* Transform1093 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1093->setTranslation(new float[3]{-0.1809,-0.1067,0.7});
CShape* Shape1094 = (CShape *)(m_pScene.createNode("Shape"));
Shape1094->setUSE("JointShape");
Transform1093->addChild(*Shape1094);

HAnimSegment1091->addChildren(*Transform1093);

CHAnimSite* HAnimSite1095 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1095->setName("SEGMENT_FOR_r_capitate_tip");
HAnimSite1095->setDEF("hanim_SEGMENT_FOR_r_capitate_tip");
CTransform* Transform1096 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1096->setTranslation(new float[3]{-0.1809,-0.1067,0.7});
CShape* Shape1097 = (CShape *)(m_pScene.createNode("Shape"));
Shape1097->setUSE("SiteShape");
Transform1096->addChild(*Shape1097);

HAnimSite1095->addChildren(*Transform1096);

HAnimSegment1091->addChildren(*HAnimSite1095);

HAnimJoint1090->addChildren(*HAnimSegment1091);

CHAnimJoint* HAnimJoint1098 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1098->setName("r_metacarpal_3");
HAnimJoint1098->setDEF("hanim_r_metacarpal_3");
HAnimJoint1098->setCenter(new float[3]{-0.1809,-0.1081,0.6772});
CHAnimSegment* HAnimSegment1099 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1099->setName("SEGMENT_FOR_r_metacarpal_3");
HAnimSegment1099->setDEF("hanim_SEGMENT_FOR_r_metacarpal_3");
CTouchSensor* TouchSensor1100 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1100->setDescription("joint r_metacarpal_3 segment SEGMENT_FOR_r_metacarpal_3");
HAnimSegment1099->addChildren(*TouchSensor1100);

CTransform* Transform1101 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1101->setTranslation(new float[3]{-0.1809,-0.1081,0.6772});
CShape* Shape1102 = (CShape *)(m_pScene.createNode("Shape"));
Shape1102->setUSE("JointShape");
Transform1101->addChild(*Shape1102);

HAnimSegment1099->addChildren(*Transform1101);

CHAnimSite* HAnimSite1103 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1103->setName("SEGMENT_FOR_r_metacarpal_3_tip");
HAnimSite1103->setDEF("hanim_SEGMENT_FOR_r_metacarpal_3_tip");
CTransform* Transform1104 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1104->setTranslation(new float[3]{-0.1809,-0.1081,0.6772});
CShape* Shape1105 = (CShape *)(m_pScene.createNode("Shape"));
Shape1105->setUSE("SiteShape");
Transform1104->addChild(*Shape1105);

HAnimSite1103->addChildren(*Transform1104);

HAnimSegment1099->addChildren(*HAnimSite1103);

HAnimJoint1098->addChildren(*HAnimSegment1099);

CHAnimJoint* HAnimJoint1106 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1106->setName("r_carpal_proximal_phalanx_3");
HAnimJoint1106->setDEF("hanim_r_carpal_proximal_phalanx_3");
HAnimJoint1106->setCenter(new float[3]{-0.1835,-0.1058,0.6264});
CHAnimSegment* HAnimSegment1107 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1107->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_3");
HAnimSegment1107->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3");
CTouchSensor* TouchSensor1108 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1108->setDescription("joint r_carpal_proximal_phalanx_3 segment SEGMENT_FOR_r_carpal_proximal_phalanx_3");
HAnimSegment1107->addChildren(*TouchSensor1108);

CTransform* Transform1109 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1109->setTranslation(new float[3]{-0.1835,-0.1058,0.6264});
CShape* Shape1110 = (CShape *)(m_pScene.createNode("Shape"));
Shape1110->setUSE("JointShape");
Transform1109->addChild(*Shape1110);

HAnimSegment1107->addChildren(*Transform1109);

CHAnimSite* HAnimSite1111 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1111->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip");
HAnimSite1111->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip");
CTransform* Transform1112 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1112->setTranslation(new float[3]{-0.1835,-0.1058,0.6264});
CShape* Shape1113 = (CShape *)(m_pScene.createNode("Shape"));
Shape1113->setUSE("SiteShape");
Transform1112->addChild(*Shape1113);

HAnimSite1111->addChildren(*Transform1112);

HAnimSegment1107->addChildren(*HAnimSite1111);

HAnimJoint1106->addChildren(*HAnimSegment1107);

CHAnimJoint* HAnimJoint1114 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1114->setName("r_carpal_middle_phalanx_3");
HAnimJoint1114->setDEF("hanim_r_carpal_middle_phalanx_3");
HAnimJoint1114->setCenter(new float[3]{-0.1815,-0.1054,0.5947});
CHAnimSegment* HAnimSegment1115 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1115->setName("SEGMENT_FOR_r_carpal_middle_phalanx_3");
HAnimSegment1115->setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3");
CTouchSensor* TouchSensor1116 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1116->setDescription("joint r_carpal_middle_phalanx_3 segment SEGMENT_FOR_r_carpal_middle_phalanx_3");
HAnimSegment1115->addChildren(*TouchSensor1116);

CTransform* Transform1117 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1117->setTranslation(new float[3]{-0.1815,-0.1054,0.5947});
CShape* Shape1118 = (CShape *)(m_pScene.createNode("Shape"));
Shape1118->setUSE("JointShape");
Transform1117->addChild(*Shape1118);

HAnimSegment1115->addChildren(*Transform1117);

CHAnimSite* HAnimSite1119 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1119->setName("SEGMENT_FOR_r_carpal_middle_phalanx_3_tip");
HAnimSite1119->setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3_tip");
CTransform* Transform1120 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1120->setTranslation(new float[3]{-0.1815,-0.1054,0.5947});
CShape* Shape1121 = (CShape *)(m_pScene.createNode("Shape"));
Shape1121->setUSE("SiteShape");
Transform1120->addChild(*Shape1121);

HAnimSite1119->addChildren(*Transform1120);

HAnimSegment1115->addChildren(*HAnimSite1119);

HAnimJoint1114->addChildren(*HAnimSegment1115);

CHAnimJoint* HAnimJoint1122 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1122->setName("r_carpal_distal_phalanx_3");
HAnimJoint1122->setDEF("hanim_r_carpal_distal_phalanx_3");
HAnimJoint1122->setCenter(new float[3]{-0.1805,-0.1056,0.5668});
CHAnimSegment* HAnimSegment1123 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1123->setName("SEGMENT_FOR_r_carpal_distal_phalanx_3");
HAnimSegment1123->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3");
CTouchSensor* TouchSensor1124 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1124->setDescription("joint r_carpal_distal_phalanx_3 segment SEGMENT_FOR_r_carpal_distal_phalanx_3");
HAnimSegment1123->addChildren(*TouchSensor1124);

CTransform* Transform1125 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1125->setTranslation(new float[3]{-0.1805,-0.1056,0.5668});
CShape* Shape1126 = (CShape *)(m_pScene.createNode("Shape"));
Shape1126->setUSE("JointShape");
Transform1125->addChild(*Shape1126);

HAnimSegment1123->addChildren(*Transform1125);

CHAnimSite* HAnimSite1127 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1127->setName("SEGMENT_FOR_r_carpal_distal_phalanx_3_tip");
HAnimSite1127->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3_tip");
CTransform* Transform1128 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1128->setTranslation(new float[3]{-0.1805,-0.1056,0.5668});
CShape* Shape1129 = (CShape *)(m_pScene.createNode("Shape"));
Shape1129->setUSE("SiteShape");
Transform1128->addChild(*Shape1129);

HAnimSite1127->addChildren(*Transform1128);

HAnimSegment1123->addChildren(*HAnimSite1127);

HAnimJoint1122->addChildren(*HAnimSegment1123);

HAnimJoint1114->addChildren(*HAnimJoint1122);

HAnimJoint1106->addChildren(*HAnimJoint1114);

HAnimJoint1098->addChildren(*HAnimJoint1106);

HAnimJoint1090->addChildren(*HAnimJoint1098);

HAnimJoint1010->addChildren(*HAnimJoint1090);

CHAnimJoint* HAnimJoint1130 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1130->setName("r_hamate");
HAnimJoint1130->setDEF("hanim_r_hamate");
HAnimJoint1130->setCenter(new float[3]{-0.1809,-0.1276,0.6973});
CHAnimSegment* HAnimSegment1131 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1131->setName("SEGMENT_FOR_r_hamate");
HAnimSegment1131->setDEF("hanim_SEGMENT_FOR_r_hamate");
CTouchSensor* TouchSensor1132 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1132->setDescription("joint r_hamate segment SEGMENT_FOR_r_hamate");
HAnimSegment1131->addChildren(*TouchSensor1132);

CTransform* Transform1133 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1133->setTranslation(new float[3]{-0.1809,-0.1276,0.6973});
CShape* Shape1134 = (CShape *)(m_pScene.createNode("Shape"));
Shape1134->setUSE("JointShape");
Transform1133->addChild(*Shape1134);

HAnimSegment1131->addChildren(*Transform1133);

CHAnimSite* HAnimSite1135 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1135->setName("SEGMENT_FOR_r_hamate_tip");
HAnimSite1135->setDEF("hanim_SEGMENT_FOR_r_hamate_tip");
CTransform* Transform1136 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1136->setTranslation(new float[3]{-0.1809,-0.1276,0.6973});
CShape* Shape1137 = (CShape *)(m_pScene.createNode("Shape"));
Shape1137->setUSE("SiteShape");
Transform1136->addChild(*Shape1137);

HAnimSite1135->addChildren(*Transform1136);

HAnimSegment1131->addChildren(*HAnimSite1135);

HAnimJoint1130->addChildren(*HAnimSegment1131);

CHAnimJoint* HAnimJoint1138 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1138->setName("r_metacarpal_4");
HAnimJoint1138->setDEF("hanim_r_metacarpal_4");
HAnimJoint1138->setCenter(new float[3]{-0.1809,-0.1218,0.6777});
CHAnimSegment* HAnimSegment1139 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1139->setName("SEGMENT_FOR_r_metacarpal_4");
HAnimSegment1139->setDEF("hanim_SEGMENT_FOR_r_metacarpal_4");
CTouchSensor* TouchSensor1140 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1140->setDescription("joint r_metacarpal_4 segment SEGMENT_FOR_r_metacarpal_4");
HAnimSegment1139->addChildren(*TouchSensor1140);

CTransform* Transform1141 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1141->setTranslation(new float[3]{-0.1809,-0.1218,0.6777});
CShape* Shape1142 = (CShape *)(m_pScene.createNode("Shape"));
Shape1142->setUSE("JointShape");
Transform1141->addChild(*Shape1142);

HAnimSegment1139->addChildren(*Transform1141);

CHAnimSite* HAnimSite1143 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1143->setName("SEGMENT_FOR_r_metacarpal_4_tip");
HAnimSite1143->setDEF("hanim_SEGMENT_FOR_r_metacarpal_4_tip");
CTransform* Transform1144 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1144->setTranslation(new float[3]{-0.1809,-0.1218,0.6777});
CShape* Shape1145 = (CShape *)(m_pScene.createNode("Shape"));
Shape1145->setUSE("SiteShape");
Transform1144->addChild(*Shape1145);

HAnimSite1143->addChildren(*Transform1144);

HAnimSegment1139->addChildren(*HAnimSite1143);

HAnimJoint1138->addChildren(*HAnimSegment1139);

CHAnimJoint* HAnimJoint1146 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1146->setName("r_carpal_proximal_phalanx_4");
HAnimJoint1146->setDEF("hanim_r_carpal_proximal_phalanx_4");
HAnimJoint1146->setCenter(new float[3]{-0.1835,-0.1233,0.6255});
CHAnimSegment* HAnimSegment1147 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1147->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_4");
HAnimSegment1147->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4");
CTouchSensor* TouchSensor1148 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1148->setDescription("joint r_carpal_proximal_phalanx_4 segment SEGMENT_FOR_r_carpal_proximal_phalanx_4");
HAnimSegment1147->addChildren(*TouchSensor1148);

CTransform* Transform1149 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1149->setTranslation(new float[3]{-0.1835,-0.1233,0.6255});
CShape* Shape1150 = (CShape *)(m_pScene.createNode("Shape"));
Shape1150->setUSE("JointShape");
Transform1149->addChild(*Shape1150);

HAnimSegment1147->addChildren(*Transform1149);

CHAnimSite* HAnimSite1151 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1151->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip");
HAnimSite1151->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip");
CTransform* Transform1152 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1152->setTranslation(new float[3]{-0.1835,-0.1233,0.6255});
CShape* Shape1153 = (CShape *)(m_pScene.createNode("Shape"));
Shape1153->setUSE("SiteShape");
Transform1152->addChild(*Shape1153);

HAnimSite1151->addChildren(*Transform1152);

HAnimSegment1147->addChildren(*HAnimSite1151);

HAnimJoint1146->addChildren(*HAnimSegment1147);

CHAnimJoint* HAnimJoint1154 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1154->setName("r_carpal_middle_phalanx_4");
HAnimJoint1154->setDEF("hanim_r_carpal_middle_phalanx_4");
HAnimJoint1154->setCenter(new float[3]{-0.1815,-0.1225,0.598});
CHAnimSegment* HAnimSegment1155 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1155->setName("SEGMENT_FOR_r_carpal_middle_phalanx_4");
HAnimSegment1155->setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4");
CTouchSensor* TouchSensor1156 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1156->setDescription("joint r_carpal_middle_phalanx_4 segment SEGMENT_FOR_r_carpal_middle_phalanx_4");
HAnimSegment1155->addChildren(*TouchSensor1156);

CTransform* Transform1157 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1157->setTranslation(new float[3]{-0.1815,-0.1225,0.598});
CShape* Shape1158 = (CShape *)(m_pScene.createNode("Shape"));
Shape1158->setUSE("JointShape");
Transform1157->addChild(*Shape1158);

HAnimSegment1155->addChildren(*Transform1157);

CHAnimSite* HAnimSite1159 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1159->setName("SEGMENT_FOR_r_carpal_middle_phalanx_4_tip");
HAnimSite1159->setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4_tip");
CTransform* Transform1160 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1160->setTranslation(new float[3]{-0.1815,-0.1225,0.598});
CShape* Shape1161 = (CShape *)(m_pScene.createNode("Shape"));
Shape1161->setUSE("SiteShape");
Transform1160->addChild(*Shape1161);

HAnimSite1159->addChildren(*Transform1160);

HAnimSegment1155->addChildren(*HAnimSite1159);

HAnimJoint1154->addChildren(*HAnimSegment1155);

CHAnimJoint* HAnimJoint1162 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1162->setName("r_carpal_distal_phalanx_4");
HAnimJoint1162->setDEF("hanim_r_carpal_distal_phalanx_4");
HAnimJoint1162->setCenter(new float[3]{-0.1805,-0.1217,0.5722});
CHAnimSegment* HAnimSegment1163 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1163->setName("SEGMENT_FOR_r_carpal_distal_phalanx_4");
HAnimSegment1163->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4");
CTouchSensor* TouchSensor1164 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1164->setDescription("joint r_carpal_distal_phalanx_4 segment SEGMENT_FOR_r_carpal_distal_phalanx_4");
HAnimSegment1163->addChildren(*TouchSensor1164);

CTransform* Transform1165 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1165->setTranslation(new float[3]{-0.1805,-0.1217,0.5722});
CShape* Shape1166 = (CShape *)(m_pScene.createNode("Shape"));
Shape1166->setUSE("JointShape");
Transform1165->addChild(*Shape1166);

HAnimSegment1163->addChildren(*Transform1165);

CHAnimSite* HAnimSite1167 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1167->setName("SEGMENT_FOR_r_carpal_distal_phalanx_4_tip");
HAnimSite1167->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4_tip");
CTransform* Transform1168 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1168->setTranslation(new float[3]{-0.1805,-0.1217,0.5722});
CShape* Shape1169 = (CShape *)(m_pScene.createNode("Shape"));
Shape1169->setUSE("SiteShape");
Transform1168->addChild(*Shape1169);

HAnimSite1167->addChildren(*Transform1168);

HAnimSegment1163->addChildren(*HAnimSite1167);

HAnimJoint1162->addChildren(*HAnimSegment1163);

HAnimJoint1154->addChildren(*HAnimJoint1162);

HAnimJoint1146->addChildren(*HAnimJoint1154);

HAnimJoint1138->addChildren(*HAnimJoint1146);

HAnimJoint1130->addChildren(*HAnimJoint1138);

CHAnimJoint* HAnimJoint1170 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1170->setName("r_metacarpal_5");
HAnimJoint1170->setDEF("hanim_r_metacarpal_5");
HAnimJoint1170->setCenter(new float[3]{-0.1814,-0.1347,0.6797});
CHAnimSegment* HAnimSegment1171 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1171->setName("SEGMENT_FOR_r_metacarpal_5");
HAnimSegment1171->setDEF("hanim_SEGMENT_FOR_r_metacarpal_5");
CTouchSensor* TouchSensor1172 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1172->setDescription("joint r_metacarpal_5 segment SEGMENT_FOR_r_metacarpal_5");
HAnimSegment1171->addChildren(*TouchSensor1172);

CTransform* Transform1173 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1173->setTranslation(new float[3]{-0.1814,-0.1347,0.6797});
CShape* Shape1174 = (CShape *)(m_pScene.createNode("Shape"));
Shape1174->setUSE("JointShape");
Transform1173->addChild(*Shape1174);

HAnimSegment1171->addChildren(*Transform1173);

CHAnimSite* HAnimSite1175 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1175->setName("SEGMENT_FOR_r_metacarpal_5_tip");
HAnimSite1175->setDEF("hanim_SEGMENT_FOR_r_metacarpal_5_tip");
CTransform* Transform1176 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1176->setTranslation(new float[3]{-0.1814,-0.1347,0.6797});
CShape* Shape1177 = (CShape *)(m_pScene.createNode("Shape"));
Shape1177->setUSE("SiteShape");
Transform1176->addChild(*Shape1177);

HAnimSite1175->addChildren(*Transform1176);

HAnimSegment1171->addChildren(*HAnimSite1175);

HAnimJoint1170->addChildren(*HAnimSegment1171);

CHAnimJoint* HAnimJoint1178 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1178->setName("r_carpal_proximal_phalanx_5");
HAnimJoint1178->setDEF("hanim_r_carpal_proximal_phalanx_5");
HAnimJoint1178->setCenter(new float[3]{-0.1832,-0.1389,0.6295});
CHAnimSegment* HAnimSegment1179 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1179->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_5");
HAnimSegment1179->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5");
CTouchSensor* TouchSensor1180 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1180->setDescription("joint r_carpal_proximal_phalanx_5 segment SEGMENT_FOR_r_carpal_proximal_phalanx_5");
HAnimSegment1179->addChildren(*TouchSensor1180);

CTransform* Transform1181 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1181->setTranslation(new float[3]{-0.1832,-0.1389,0.6295});
CShape* Shape1182 = (CShape *)(m_pScene.createNode("Shape"));
Shape1182->setUSE("JointShape");
Transform1181->addChild(*Shape1182);

HAnimSegment1179->addChildren(*Transform1181);

CHAnimSite* HAnimSite1183 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1183->setName("SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip");
HAnimSite1183->setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip");
CTransform* Transform1184 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1184->setTranslation(new float[3]{-0.1832,-0.1389,0.6295});
CShape* Shape1185 = (CShape *)(m_pScene.createNode("Shape"));
Shape1185->setUSE("SiteShape");
Transform1184->addChild(*Shape1185);

HAnimSite1183->addChildren(*Transform1184);

HAnimSegment1179->addChildren(*HAnimSite1183);

HAnimJoint1178->addChildren(*HAnimSegment1179);

CHAnimJoint* HAnimJoint1186 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1186->setName("r_carpal_middle_phalanx_5");
HAnimJoint1186->setDEF("hanim_r_carpal_middle_phalanx_5");
HAnimJoint1186->setCenter(new float[3]{-0.1815,-0.139,0.6124});
CHAnimSegment* HAnimSegment1187 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1187->setName("SEGMENT_FOR_r_carpal_middle_phalanx_5");
HAnimSegment1187->setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5");
CTouchSensor* TouchSensor1188 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1188->setDescription("joint r_carpal_middle_phalanx_5 segment SEGMENT_FOR_r_carpal_middle_phalanx_5");
HAnimSegment1187->addChildren(*TouchSensor1188);

CTransform* Transform1189 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1189->setTranslation(new float[3]{-0.1815,-0.139,0.6124});
CShape* Shape1190 = (CShape *)(m_pScene.createNode("Shape"));
Shape1190->setUSE("JointShape");
Transform1189->addChild(*Shape1190);

HAnimSegment1187->addChildren(*Transform1189);

CHAnimSite* HAnimSite1191 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1191->setName("SEGMENT_FOR_r_carpal_middle_phalanx_5_tip");
HAnimSite1191->setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5_tip");
CTransform* Transform1192 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1192->setTranslation(new float[3]{-0.1815,-0.139,0.6124});
CShape* Shape1193 = (CShape *)(m_pScene.createNode("Shape"));
Shape1193->setUSE("SiteShape");
Transform1192->addChild(*Shape1193);

HAnimSite1191->addChildren(*Transform1192);

HAnimSegment1187->addChildren(*HAnimSite1191);

HAnimJoint1186->addChildren(*HAnimSegment1187);

CHAnimJoint* HAnimJoint1194 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1194->setName("r_carpal_distal_phalanx_5");
HAnimJoint1194->setDEF("hanim_r_carpal_distal_phalanx_5");
HAnimJoint1194->setCenter(new float[3]{-0.1806,-0.1388,0.5938});
CHAnimSegment* HAnimSegment1195 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1195->setName("SEGMENT_FOR_r_carpal_distal_phalanx_5");
HAnimSegment1195->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5");
CTouchSensor* TouchSensor1196 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1196->setDescription("joint r_carpal_distal_phalanx_5 segment SEGMENT_FOR_r_carpal_distal_phalanx_5");
HAnimSegment1195->addChildren(*TouchSensor1196);

CTransform* Transform1197 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1197->setTranslation(new float[3]{-0.1806,-0.1388,0.5938});
CShape* Shape1198 = (CShape *)(m_pScene.createNode("Shape"));
Shape1198->setUSE("JointShape");
Transform1197->addChild(*Shape1198);

HAnimSegment1195->addChildren(*Transform1197);

CHAnimSite* HAnimSite1199 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1199->setName("SEGMENT_FOR_r_carpal_distal_phalanx_5_tip");
HAnimSite1199->setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5_tip");
CTransform* Transform1200 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1200->setTranslation(new float[3]{-0.1806,-0.1388,0.5938});
CShape* Shape1201 = (CShape *)(m_pScene.createNode("Shape"));
Shape1201->setUSE("SiteShape");
Transform1200->addChild(*Shape1201);

HAnimSite1199->addChildren(*Transform1200);

HAnimSegment1195->addChildren(*HAnimSite1199);

HAnimJoint1194->addChildren(*HAnimSegment1195);

HAnimJoint1186->addChildren(*HAnimJoint1194);

HAnimJoint1178->addChildren(*HAnimJoint1186);

HAnimJoint1170->addChildren(*HAnimJoint1178);

HAnimJoint1130->addChildren(*HAnimJoint1170);

HAnimJoint1010->addChildren(*HAnimJoint1130);

HAnimJoint1002->addChildren(*HAnimJoint1010);

HAnimJoint994->addChildren(*HAnimJoint1002);

HAnimJoint986->addChildren(*HAnimJoint994);

HAnimJoint978->addChildren(*HAnimJoint986);

HAnimJoint626->addChildren(*HAnimJoint978);

HAnimJoint618->addChildren(*HAnimJoint626);

HAnimJoint610->addChildren(*HAnimJoint618);

HAnimJoint602->addChildren(*HAnimJoint610);

HAnimJoint594->addChildren(*HAnimJoint602);

HAnimJoint586->addChildren(*HAnimJoint594);

HAnimJoint578->addChildren(*HAnimJoint586);

HAnimJoint570->addChildren(*HAnimJoint578);

HAnimJoint562->addChildren(*HAnimJoint570);

HAnimJoint554->addChildren(*HAnimJoint562);

HAnimJoint546->addChildren(*HAnimJoint554);

HAnimJoint538->addChildren(*HAnimJoint546);

HAnimJoint530->addChildren(*HAnimJoint538);

HAnimJoint522->addChildren(*HAnimJoint530);

HAnimJoint514->addChildren(*HAnimJoint522);

HAnimJoint506->addChildren(*HAnimJoint514);

HAnimJoint498->addChildren(*HAnimJoint506);

HAnimJoint34->addChildren(*HAnimJoint498);

HAnimJoint26->addChildren(*HAnimJoint34);

HAnimHumanoid25->setSkeleton(*HAnimJoint26);

CHAnimJoint* HAnimJoint1202 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1202->setUSE("hanim_sacrum");
HAnimHumanoid25->addJoints(*HAnimJoint1202);

CHAnimJoint* HAnimJoint1203 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1203->setUSE("hanim_pelvis");
HAnimHumanoid25->addJoints(*HAnimJoint1203);

CHAnimJoint* HAnimJoint1204 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1204->setUSE("hanim_l_thigh");
HAnimHumanoid25->addJoints(*HAnimJoint1204);

CHAnimJoint* HAnimJoint1205 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1205->setUSE("hanim_l_calf");
HAnimHumanoid25->addJoints(*HAnimJoint1205);

CHAnimJoint* HAnimJoint1206 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1206->setUSE("hanim_l_talus");
HAnimHumanoid25->addJoints(*HAnimJoint1206);

CHAnimJoint* HAnimJoint1207 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1207->setUSE("hanim_l_navicular");
HAnimHumanoid25->addJoints(*HAnimJoint1207);

CHAnimJoint* HAnimJoint1208 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1208->setUSE("hanim_l_cuneiform_1");
HAnimHumanoid25->addJoints(*HAnimJoint1208);

CHAnimJoint* HAnimJoint1209 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1209->setUSE("hanim_l_metatarsal_1");
HAnimHumanoid25->addJoints(*HAnimJoint1209);

CHAnimJoint* HAnimJoint1210 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1210->setUSE("hanim_l_tarsal_proximal_phalanx_1");
HAnimHumanoid25->addJoints(*HAnimJoint1210);

CHAnimJoint* HAnimJoint1211 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1211->setUSE("hanim_l_tarsal_distal_phalanx_1");
HAnimHumanoid25->addJoints(*HAnimJoint1211);

CHAnimJoint* HAnimJoint1212 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1212->setUSE("hanim_l_cuneiform_2");
HAnimHumanoid25->addJoints(*HAnimJoint1212);

CHAnimJoint* HAnimJoint1213 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1213->setUSE("hanim_l_metatarsal_2");
HAnimHumanoid25->addJoints(*HAnimJoint1213);

CHAnimJoint* HAnimJoint1214 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1214->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid25->addJoints(*HAnimJoint1214);

CHAnimJoint* HAnimJoint1215 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1215->setUSE("hanim_l_tarsal_middle_phalanx_2");
HAnimHumanoid25->addJoints(*HAnimJoint1215);

CHAnimJoint* HAnimJoint1216 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1216->setUSE("hanim_l_tarsal_distal_phalanx_2");
HAnimHumanoid25->addJoints(*HAnimJoint1216);

CHAnimJoint* HAnimJoint1217 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1217->setUSE("hanim_l_cuneiform_3");
HAnimHumanoid25->addJoints(*HAnimJoint1217);

CHAnimJoint* HAnimJoint1218 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1218->setUSE("hanim_l_metatarsal_3");
HAnimHumanoid25->addJoints(*HAnimJoint1218);

CHAnimJoint* HAnimJoint1219 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1219->setUSE("hanim_l_tarsal_proximal_phalanx_3");
HAnimHumanoid25->addJoints(*HAnimJoint1219);

CHAnimJoint* HAnimJoint1220 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1220->setUSE("hanim_l_tarsal_middle_phalanx_3");
HAnimHumanoid25->addJoints(*HAnimJoint1220);

CHAnimJoint* HAnimJoint1221 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1221->setUSE("hanim_l_tarsal_distal_phalanx_3");
HAnimHumanoid25->addJoints(*HAnimJoint1221);

CHAnimJoint* HAnimJoint1222 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1222->setUSE("hanim_l_calcaneus");
HAnimHumanoid25->addJoints(*HAnimJoint1222);

CHAnimJoint* HAnimJoint1223 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1223->setUSE("hanim_l_cuboid");
HAnimHumanoid25->addJoints(*HAnimJoint1223);

CHAnimJoint* HAnimJoint1224 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1224->setUSE("hanim_l_metatarsal_4");
HAnimHumanoid25->addJoints(*HAnimJoint1224);

CHAnimJoint* HAnimJoint1225 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1225->setUSE("hanim_l_tarsal_proximal_phalanx_4");
HAnimHumanoid25->addJoints(*HAnimJoint1225);

CHAnimJoint* HAnimJoint1226 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1226->setUSE("hanim_l_tarsal_middle_phalanx_4");
HAnimHumanoid25->addJoints(*HAnimJoint1226);

CHAnimJoint* HAnimJoint1227 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1227->setUSE("hanim_l_tarsal_distal_phalanx_4");
HAnimHumanoid25->addJoints(*HAnimJoint1227);

CHAnimJoint* HAnimJoint1228 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1228->setUSE("hanim_l_metatarsal_5");
HAnimHumanoid25->addJoints(*HAnimJoint1228);

CHAnimJoint* HAnimJoint1229 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1229->setUSE("hanim_l_tarsal_proximal_phalanx_5");
HAnimHumanoid25->addJoints(*HAnimJoint1229);

CHAnimJoint* HAnimJoint1230 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1230->setUSE("hanim_l_tarsal_middle_phalanx_5");
HAnimHumanoid25->addJoints(*HAnimJoint1230);

CHAnimJoint* HAnimJoint1231 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1231->setUSE("hanim_l_tarsal_distal_phalanx_5");
HAnimHumanoid25->addJoints(*HAnimJoint1231);

CHAnimJoint* HAnimJoint1232 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1232->setUSE("hanim_r_thigh");
HAnimHumanoid25->addJoints(*HAnimJoint1232);

CHAnimJoint* HAnimJoint1233 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1233->setUSE("hanim_r_calf");
HAnimHumanoid25->addJoints(*HAnimJoint1233);

CHAnimJoint* HAnimJoint1234 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1234->setUSE("hanim_r_talus");
HAnimHumanoid25->addJoints(*HAnimJoint1234);

CHAnimJoint* HAnimJoint1235 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1235->setUSE("hanim_r_navicular");
HAnimHumanoid25->addJoints(*HAnimJoint1235);

CHAnimJoint* HAnimJoint1236 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1236->setUSE("hanim_r_cuneiform_1");
HAnimHumanoid25->addJoints(*HAnimJoint1236);

CHAnimJoint* HAnimJoint1237 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1237->setUSE("hanim_r_metatarsal_1");
HAnimHumanoid25->addJoints(*HAnimJoint1237);

CHAnimJoint* HAnimJoint1238 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1238->setUSE("hanim_r_tarsal_proximal_phalanx_1");
HAnimHumanoid25->addJoints(*HAnimJoint1238);

CHAnimJoint* HAnimJoint1239 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1239->setUSE("hanim_r_tarsal_distal_phalanx_1");
HAnimHumanoid25->addJoints(*HAnimJoint1239);

CHAnimJoint* HAnimJoint1240 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1240->setUSE("hanim_r_cuneiform_2");
HAnimHumanoid25->addJoints(*HAnimJoint1240);

CHAnimJoint* HAnimJoint1241 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1241->setUSE("hanim_r_metatarsal_2");
HAnimHumanoid25->addJoints(*HAnimJoint1241);

CHAnimJoint* HAnimJoint1242 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1242->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid25->addJoints(*HAnimJoint1242);

CHAnimJoint* HAnimJoint1243 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1243->setUSE("hanim_r_tarsal_middle_phalanx_2");
HAnimHumanoid25->addJoints(*HAnimJoint1243);

CHAnimJoint* HAnimJoint1244 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1244->setUSE("hanim_r_tarsal_distal_phalanx_2");
HAnimHumanoid25->addJoints(*HAnimJoint1244);

CHAnimJoint* HAnimJoint1245 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1245->setUSE("hanim_r_cuneiform_3");
HAnimHumanoid25->addJoints(*HAnimJoint1245);

CHAnimJoint* HAnimJoint1246 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1246->setUSE("hanim_r_metatarsal_3");
HAnimHumanoid25->addJoints(*HAnimJoint1246);

CHAnimJoint* HAnimJoint1247 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1247->setUSE("hanim_r_tarsal_proximal_phalanx_3");
HAnimHumanoid25->addJoints(*HAnimJoint1247);

CHAnimJoint* HAnimJoint1248 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1248->setUSE("hanim_r_tarsal_middle_phalanx_3");
HAnimHumanoid25->addJoints(*HAnimJoint1248);

CHAnimJoint* HAnimJoint1249 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1249->setUSE("hanim_r_tarsal_distal_phalanx_3");
HAnimHumanoid25->addJoints(*HAnimJoint1249);

CHAnimJoint* HAnimJoint1250 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1250->setUSE("hanim_r_calcaneus");
HAnimHumanoid25->addJoints(*HAnimJoint1250);

CHAnimJoint* HAnimJoint1251 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1251->setUSE("hanim_r_cuboid");
HAnimHumanoid25->addJoints(*HAnimJoint1251);

CHAnimJoint* HAnimJoint1252 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1252->setUSE("hanim_r_metatarsal_4");
HAnimHumanoid25->addJoints(*HAnimJoint1252);

CHAnimJoint* HAnimJoint1253 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1253->setUSE("hanim_r_tarsal_proximal_phalanx_4");
HAnimHumanoid25->addJoints(*HAnimJoint1253);

CHAnimJoint* HAnimJoint1254 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1254->setUSE("hanim_r_tarsal_middle_phalanx_4");
HAnimHumanoid25->addJoints(*HAnimJoint1254);

CHAnimJoint* HAnimJoint1255 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1255->setUSE("hanim_r_tarsal_distal_phalanx_4");
HAnimHumanoid25->addJoints(*HAnimJoint1255);

CHAnimJoint* HAnimJoint1256 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1256->setUSE("hanim_r_metatarsal_5");
HAnimHumanoid25->addJoints(*HAnimJoint1256);

CHAnimJoint* HAnimJoint1257 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1257->setUSE("hanim_r_tarsal_proximal_phalanx_5");
HAnimHumanoid25->addJoints(*HAnimJoint1257);

CHAnimJoint* HAnimJoint1258 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1258->setUSE("hanim_r_tarsal_middle_phalanx_5");
HAnimHumanoid25->addJoints(*HAnimJoint1258);

CHAnimJoint* HAnimJoint1259 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1259->setUSE("hanim_r_tarsal_distal_phalanx_5");
HAnimHumanoid25->addJoints(*HAnimJoint1259);

CHAnimJoint* HAnimJoint1260 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1260->setUSE("hanim_l5");
HAnimHumanoid25->addJoints(*HAnimJoint1260);

CHAnimJoint* HAnimJoint1261 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1261->setUSE("hanim_l4");
HAnimHumanoid25->addJoints(*HAnimJoint1261);

CHAnimJoint* HAnimJoint1262 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1262->setUSE("hanim_l3");
HAnimHumanoid25->addJoints(*HAnimJoint1262);

CHAnimJoint* HAnimJoint1263 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1263->setUSE("hanim_l2");
HAnimHumanoid25->addJoints(*HAnimJoint1263);

CHAnimJoint* HAnimJoint1264 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1264->setUSE("hanim_l1");
HAnimHumanoid25->addJoints(*HAnimJoint1264);

CHAnimJoint* HAnimJoint1265 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1265->setUSE("hanim_t12");
HAnimHumanoid25->addJoints(*HAnimJoint1265);

CHAnimJoint* HAnimJoint1266 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1266->setUSE("hanim_t11");
HAnimHumanoid25->addJoints(*HAnimJoint1266);

CHAnimJoint* HAnimJoint1267 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1267->setUSE("hanim_t10");
HAnimHumanoid25->addJoints(*HAnimJoint1267);

CHAnimJoint* HAnimJoint1268 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1268->setUSE("hanim_t9");
HAnimHumanoid25->addJoints(*HAnimJoint1268);

CHAnimJoint* HAnimJoint1269 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1269->setUSE("hanim_t8");
HAnimHumanoid25->addJoints(*HAnimJoint1269);

CHAnimJoint* HAnimJoint1270 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1270->setUSE("hanim_t7");
HAnimHumanoid25->addJoints(*HAnimJoint1270);

CHAnimJoint* HAnimJoint1271 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1271->setUSE("hanim_t6");
HAnimHumanoid25->addJoints(*HAnimJoint1271);

CHAnimJoint* HAnimJoint1272 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1272->setUSE("hanim_t5");
HAnimHumanoid25->addJoints(*HAnimJoint1272);

CHAnimJoint* HAnimJoint1273 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1273->setUSE("hanim_t4");
HAnimHumanoid25->addJoints(*HAnimJoint1273);

CHAnimJoint* HAnimJoint1274 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1274->setUSE("hanim_t3");
HAnimHumanoid25->addJoints(*HAnimJoint1274);

CHAnimJoint* HAnimJoint1275 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1275->setUSE("hanim_t2");
HAnimHumanoid25->addJoints(*HAnimJoint1275);

CHAnimJoint* HAnimJoint1276 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1276->setUSE("hanim_t1");
HAnimHumanoid25->addJoints(*HAnimJoint1276);

CHAnimJoint* HAnimJoint1277 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1277->setUSE("hanim_c7");
HAnimHumanoid25->addJoints(*HAnimJoint1277);

CHAnimJoint* HAnimJoint1278 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1278->setUSE("hanim_c6");
HAnimHumanoid25->addJoints(*HAnimJoint1278);

CHAnimJoint* HAnimJoint1279 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1279->setUSE("hanim_c5");
HAnimHumanoid25->addJoints(*HAnimJoint1279);

CHAnimJoint* HAnimJoint1280 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1280->setUSE("hanim_c4");
HAnimHumanoid25->addJoints(*HAnimJoint1280);

CHAnimJoint* HAnimJoint1281 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1281->setUSE("hanim_c3");
HAnimHumanoid25->addJoints(*HAnimJoint1281);

CHAnimJoint* HAnimJoint1282 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1282->setUSE("hanim_c2");
HAnimHumanoid25->addJoints(*HAnimJoint1282);

CHAnimJoint* HAnimJoint1283 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1283->setUSE("hanim_c1");
HAnimHumanoid25->addJoints(*HAnimJoint1283);

CHAnimJoint* HAnimJoint1284 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1284->setUSE("hanim_skull");
HAnimHumanoid25->addJoints(*HAnimJoint1284);

CHAnimJoint* HAnimJoint1285 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1285->setUSE("hanim_l_eyelid");
HAnimHumanoid25->addJoints(*HAnimJoint1285);

CHAnimJoint* HAnimJoint1286 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1286->setUSE("hanim_r_eyelid");
HAnimHumanoid25->addJoints(*HAnimJoint1286);

CHAnimJoint* HAnimJoint1287 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1287->setUSE("hanim_l_eyeball");
HAnimHumanoid25->addJoints(*HAnimJoint1287);

CHAnimJoint* HAnimJoint1288 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1288->setUSE("hanim_r_eyeball");
HAnimHumanoid25->addJoints(*HAnimJoint1288);

CHAnimJoint* HAnimJoint1289 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1289->setUSE("hanim_l_eyebrow");
HAnimHumanoid25->addJoints(*HAnimJoint1289);

CHAnimJoint* HAnimJoint1290 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1290->setUSE("hanim_r_eyebrow");
HAnimHumanoid25->addJoints(*HAnimJoint1290);

CHAnimJoint* HAnimJoint1291 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1291->setUSE("hanim_jaw");
HAnimHumanoid25->addJoints(*HAnimJoint1291);

CHAnimJoint* HAnimJoint1292 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1292->setUSE("hanim_l_clavicle");
HAnimHumanoid25->addJoints(*HAnimJoint1292);

CHAnimJoint* HAnimJoint1293 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1293->setUSE("hanim_l_scapula");
HAnimHumanoid25->addJoints(*HAnimJoint1293);

CHAnimJoint* HAnimJoint1294 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1294->setUSE("hanim_l_upperarm");
HAnimHumanoid25->addJoints(*HAnimJoint1294);

CHAnimJoint* HAnimJoint1295 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1295->setUSE("hanim_l_forearm");
HAnimHumanoid25->addJoints(*HAnimJoint1295);

CHAnimJoint* HAnimJoint1296 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1296->setUSE("hanim_l_carpal");
HAnimHumanoid25->addJoints(*HAnimJoint1296);

CHAnimJoint* HAnimJoint1297 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1297->setUSE("hanim_l_trapezium");
HAnimHumanoid25->addJoints(*HAnimJoint1297);

CHAnimJoint* HAnimJoint1298 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1298->setUSE("hanim_l_metacarpal_1");
HAnimHumanoid25->addJoints(*HAnimJoint1298);

CHAnimJoint* HAnimJoint1299 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1299->setUSE("hanim_l_carpal_proximal_phalanx_1");
HAnimHumanoid25->addJoints(*HAnimJoint1299);

CHAnimJoint* HAnimJoint1300 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1300->setUSE("hanim_l_carpal_distal_phalanx_1");
HAnimHumanoid25->addJoints(*HAnimJoint1300);

CHAnimJoint* HAnimJoint1301 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1301->setUSE("hanim_l_trapezoid");
HAnimHumanoid25->addJoints(*HAnimJoint1301);

CHAnimJoint* HAnimJoint1302 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1302->setUSE("hanim_l_metacarpal_2");
HAnimHumanoid25->addJoints(*HAnimJoint1302);

CHAnimJoint* HAnimJoint1303 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1303->setUSE("hanim_l_carpal_proximal_phalanx_2");
HAnimHumanoid25->addJoints(*HAnimJoint1303);

CHAnimJoint* HAnimJoint1304 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1304->setUSE("hanim_l_carpal_middle_phalanx_2");
HAnimHumanoid25->addJoints(*HAnimJoint1304);

CHAnimJoint* HAnimJoint1305 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1305->setUSE("hanim_l_carpal_distal_phalanx_2");
HAnimHumanoid25->addJoints(*HAnimJoint1305);

CHAnimJoint* HAnimJoint1306 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1306->setUSE("hanim_l_capitate");
HAnimHumanoid25->addJoints(*HAnimJoint1306);

CHAnimJoint* HAnimJoint1307 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1307->setUSE("hanim_l_metacarpal_3");
HAnimHumanoid25->addJoints(*HAnimJoint1307);

CHAnimJoint* HAnimJoint1308 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1308->setUSE("hanim_l_carpal_proximal_phalanx_3");
HAnimHumanoid25->addJoints(*HAnimJoint1308);

CHAnimJoint* HAnimJoint1309 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1309->setUSE("hanim_l_carpal_middle_phalanx_3");
HAnimHumanoid25->addJoints(*HAnimJoint1309);

CHAnimJoint* HAnimJoint1310 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1310->setUSE("hanim_l_carpal_distal_phalanx_3");
HAnimHumanoid25->addJoints(*HAnimJoint1310);

CHAnimJoint* HAnimJoint1311 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1311->setUSE("hanim_l_hamate");
HAnimHumanoid25->addJoints(*HAnimJoint1311);

CHAnimJoint* HAnimJoint1312 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1312->setUSE("hanim_l_metacarpal_4");
HAnimHumanoid25->addJoints(*HAnimJoint1312);

CHAnimJoint* HAnimJoint1313 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1313->setUSE("hanim_l_carpal_proximal_phalanx_4");
HAnimHumanoid25->addJoints(*HAnimJoint1313);

CHAnimJoint* HAnimJoint1314 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1314->setUSE("hanim_l_carpal_middle_phalanx_4");
HAnimHumanoid25->addJoints(*HAnimJoint1314);

CHAnimJoint* HAnimJoint1315 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1315->setUSE("hanim_l_carpal_distal_phalanx_4");
HAnimHumanoid25->addJoints(*HAnimJoint1315);

CHAnimJoint* HAnimJoint1316 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1316->setUSE("hanim_l_metacarpal_5");
HAnimHumanoid25->addJoints(*HAnimJoint1316);

CHAnimJoint* HAnimJoint1317 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1317->setUSE("hanim_l_carpal_proximal_phalanx_5");
HAnimHumanoid25->addJoints(*HAnimJoint1317);

CHAnimJoint* HAnimJoint1318 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1318->setUSE("hanim_l_carpal_middle_phalanx_5");
HAnimHumanoid25->addJoints(*HAnimJoint1318);

CHAnimJoint* HAnimJoint1319 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1319->setUSE("hanim_l_carpal_distal_phalanx_5");
HAnimHumanoid25->addJoints(*HAnimJoint1319);

CHAnimJoint* HAnimJoint1320 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1320->setUSE("hanim_r_clavicle");
HAnimHumanoid25->addJoints(*HAnimJoint1320);

CHAnimJoint* HAnimJoint1321 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1321->setUSE("hanim_r_scapula");
HAnimHumanoid25->addJoints(*HAnimJoint1321);

CHAnimJoint* HAnimJoint1322 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1322->setUSE("hanim_r_upperarm");
HAnimHumanoid25->addJoints(*HAnimJoint1322);

CHAnimJoint* HAnimJoint1323 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1323->setUSE("hanim_r_forearm");
HAnimHumanoid25->addJoints(*HAnimJoint1323);

CHAnimJoint* HAnimJoint1324 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1324->setUSE("hanim_r_carpal");
HAnimHumanoid25->addJoints(*HAnimJoint1324);

CHAnimJoint* HAnimJoint1325 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1325->setUSE("hanim_r_trapezium");
HAnimHumanoid25->addJoints(*HAnimJoint1325);

CHAnimJoint* HAnimJoint1326 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1326->setUSE("hanim_r_metacarpal_1");
HAnimHumanoid25->addJoints(*HAnimJoint1326);

CHAnimJoint* HAnimJoint1327 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1327->setUSE("hanim_r_carpal_proximal_phalanx_1");
HAnimHumanoid25->addJoints(*HAnimJoint1327);

CHAnimJoint* HAnimJoint1328 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1328->setUSE("hanim_r_carpal_distal_phalanx_1");
HAnimHumanoid25->addJoints(*HAnimJoint1328);

CHAnimJoint* HAnimJoint1329 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1329->setUSE("hanim_r_trapezoid");
HAnimHumanoid25->addJoints(*HAnimJoint1329);

CHAnimJoint* HAnimJoint1330 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1330->setUSE("hanim_r_metacarpal_2");
HAnimHumanoid25->addJoints(*HAnimJoint1330);

CHAnimJoint* HAnimJoint1331 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1331->setUSE("hanim_r_carpal_proximal_phalanx_2");
HAnimHumanoid25->addJoints(*HAnimJoint1331);

CHAnimJoint* HAnimJoint1332 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1332->setUSE("hanim_r_carpal_middle_phalanx_2");
HAnimHumanoid25->addJoints(*HAnimJoint1332);

CHAnimJoint* HAnimJoint1333 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1333->setUSE("hanim_r_carpal_distal_phalanx_2");
HAnimHumanoid25->addJoints(*HAnimJoint1333);

CHAnimJoint* HAnimJoint1334 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1334->setUSE("hanim_r_capitate");
HAnimHumanoid25->addJoints(*HAnimJoint1334);

CHAnimJoint* HAnimJoint1335 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1335->setUSE("hanim_r_metacarpal_3");
HAnimHumanoid25->addJoints(*HAnimJoint1335);

CHAnimJoint* HAnimJoint1336 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1336->setUSE("hanim_r_carpal_proximal_phalanx_3");
HAnimHumanoid25->addJoints(*HAnimJoint1336);

CHAnimJoint* HAnimJoint1337 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1337->setUSE("hanim_r_carpal_middle_phalanx_3");
HAnimHumanoid25->addJoints(*HAnimJoint1337);

CHAnimJoint* HAnimJoint1338 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1338->setUSE("hanim_r_carpal_distal_phalanx_3");
HAnimHumanoid25->addJoints(*HAnimJoint1338);

CHAnimJoint* HAnimJoint1339 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1339->setUSE("hanim_r_hamate");
HAnimHumanoid25->addJoints(*HAnimJoint1339);

CHAnimJoint* HAnimJoint1340 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1340->setUSE("hanim_r_metacarpal_4");
HAnimHumanoid25->addJoints(*HAnimJoint1340);

CHAnimJoint* HAnimJoint1341 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1341->setUSE("hanim_r_carpal_proximal_phalanx_4");
HAnimHumanoid25->addJoints(*HAnimJoint1341);

CHAnimJoint* HAnimJoint1342 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1342->setUSE("hanim_r_carpal_middle_phalanx_4");
HAnimHumanoid25->addJoints(*HAnimJoint1342);

CHAnimJoint* HAnimJoint1343 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1343->setUSE("hanim_r_carpal_distal_phalanx_4");
HAnimHumanoid25->addJoints(*HAnimJoint1343);

CHAnimJoint* HAnimJoint1344 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1344->setUSE("hanim_r_metacarpal_5");
HAnimHumanoid25->addJoints(*HAnimJoint1344);

CHAnimJoint* HAnimJoint1345 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1345->setUSE("hanim_r_carpal_proximal_phalanx_5");
HAnimHumanoid25->addJoints(*HAnimJoint1345);

CHAnimJoint* HAnimJoint1346 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1346->setUSE("hanim_r_carpal_middle_phalanx_5");
HAnimHumanoid25->addJoints(*HAnimJoint1346);

CHAnimJoint* HAnimJoint1347 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1347->setUSE("hanim_r_carpal_distal_phalanx_5");
HAnimHumanoid25->addJoints(*HAnimJoint1347);

Transform24->addChildren(*HAnimHumanoid25);

group->addChildren(*Transform24);

CTimeSensor* TimeSensor1348 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor1348->setDEF("Armature_Clock");
TimeSensor1348->setCycleInterval(10.416666666666666);
TimeSensor1348->setLoop(True);
group->addChildren(*TimeSensor1348);

CProximitySensor* ProximitySensor1349 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1349->setDEF("Armature_Close");
ProximitySensor1349->setSize(new float[3]{1000000,1000000,1000000});
group->addChildren(*ProximitySensor1349);

CROUTE* ROUTE1350 = new CROUTE();
ROUTE1350->setFromField("enterTime");
ROUTE1350->setFromNode("Armature_Close");
ROUTE1350->setToField("startTime");
ROUTE1350->setToNode("Armature_Clock");
group->addChildren(*ROUTE1350);

COrientationInterpolator* OrientationInterpolator1351 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1351->setDEF("Armature_OI_sacrum");
OrientationInterpolator1351->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1351->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1351);

COrientationInterpolator* OrientationInterpolator1352 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1352->setDEF("Armature_OI_pelvis");
OrientationInterpolator1352->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1352->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1352);

COrientationInterpolator* OrientationInterpolator1353 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1353->setDEF("Armature_OI_l_thigh");
OrientationInterpolator1353->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1353->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1353);

COrientationInterpolator* OrientationInterpolator1354 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1354->setDEF("Armature_OI_l_calf");
OrientationInterpolator1354->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1354->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1354);

COrientationInterpolator* OrientationInterpolator1355 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1355->setDEF("Armature_OI_l_talus");
OrientationInterpolator1355->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1355->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1355);

COrientationInterpolator* OrientationInterpolator1356 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1356->setDEF("Armature_OI_l_navicular");
OrientationInterpolator1356->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1356->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1356);

COrientationInterpolator* OrientationInterpolator1357 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1357->setDEF("Armature_OI_l_cuneiform_1");
OrientationInterpolator1357->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1357->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1357);

COrientationInterpolator* OrientationInterpolator1358 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1358->setDEF("Armature_OI_l_metatarsal_1");
OrientationInterpolator1358->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1358->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1358);

COrientationInterpolator* OrientationInterpolator1359 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1359->setDEF("Armature_OI_l_tarsal_proximal_phalanx_1");
OrientationInterpolator1359->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1359->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1359);

COrientationInterpolator* OrientationInterpolator1360 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1360->setDEF("Armature_OI_l_tarsal_distal_phalanx_1");
OrientationInterpolator1360->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1360->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1360);

COrientationInterpolator* OrientationInterpolator1361 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1361->setDEF("Armature_OI_l_cuneiform_2");
OrientationInterpolator1361->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1361->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1361);

COrientationInterpolator* OrientationInterpolator1362 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1362->setDEF("Armature_OI_l_metatarsal_2");
OrientationInterpolator1362->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1362->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1362);

COrientationInterpolator* OrientationInterpolator1363 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1363->setDEF("Armature_OI_l_tarsal_proximal_phalanx_2");
OrientationInterpolator1363->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1363->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1363);

COrientationInterpolator* OrientationInterpolator1364 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1364->setDEF("Armature_OI_l_tarsal_middle_phalanx_2");
OrientationInterpolator1364->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1364->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1364);

COrientationInterpolator* OrientationInterpolator1365 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1365->setDEF("Armature_OI_l_tarsal_distal_phalanx_2");
OrientationInterpolator1365->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1365->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1365);

COrientationInterpolator* OrientationInterpolator1366 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1366->setDEF("Armature_OI_l_cuneiform_3");
OrientationInterpolator1366->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1366->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1366);

COrientationInterpolator* OrientationInterpolator1367 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1367->setDEF("Armature_OI_l_metatarsal_3");
OrientationInterpolator1367->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1367->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1367);

COrientationInterpolator* OrientationInterpolator1368 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1368->setDEF("Armature_OI_l_tarsal_proximal_phalanx_3");
OrientationInterpolator1368->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1368->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1368);

COrientationInterpolator* OrientationInterpolator1369 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1369->setDEF("Armature_OI_l_tarsal_middle_phalanx_3");
OrientationInterpolator1369->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1369->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1369);

COrientationInterpolator* OrientationInterpolator1370 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1370->setDEF("Armature_OI_l_tarsal_distal_phalanx_3");
OrientationInterpolator1370->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1370->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1370);

COrientationInterpolator* OrientationInterpolator1371 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1371->setDEF("Armature_OI_l_calcaneus");
OrientationInterpolator1371->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1371->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1371);

COrientationInterpolator* OrientationInterpolator1372 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1372->setDEF("Armature_OI_l_cuboid");
OrientationInterpolator1372->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1372->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1372);

COrientationInterpolator* OrientationInterpolator1373 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1373->setDEF("Armature_OI_l_metatarsal_4");
OrientationInterpolator1373->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1373->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1373);

COrientationInterpolator* OrientationInterpolator1374 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1374->setDEF("Armature_OI_l_tarsal_proximal_phalanx_4");
OrientationInterpolator1374->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1374->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1374);

COrientationInterpolator* OrientationInterpolator1375 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1375->setDEF("Armature_OI_l_tarsal_middle_phalanx_4");
OrientationInterpolator1375->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1375->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1375);

COrientationInterpolator* OrientationInterpolator1376 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1376->setDEF("Armature_OI_l_tarsal_distal_phalanx_4");
OrientationInterpolator1376->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1376->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1376);

COrientationInterpolator* OrientationInterpolator1377 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1377->setDEF("Armature_OI_l_metatarsal_5");
OrientationInterpolator1377->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1377->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1377);

COrientationInterpolator* OrientationInterpolator1378 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1378->setDEF("Armature_OI_l_tarsal_proximal_phalanx_5");
OrientationInterpolator1378->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1378->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1378);

COrientationInterpolator* OrientationInterpolator1379 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1379->setDEF("Armature_OI_l_tarsal_middle_phalanx_5");
OrientationInterpolator1379->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1379->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1379);

COrientationInterpolator* OrientationInterpolator1380 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1380->setDEF("Armature_OI_l_tarsal_distal_phalanx_5");
OrientationInterpolator1380->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1380->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1380);

COrientationInterpolator* OrientationInterpolator1381 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1381->setDEF("Armature_OI_r_thigh");
OrientationInterpolator1381->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1381->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1381);

COrientationInterpolator* OrientationInterpolator1382 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1382->setDEF("Armature_OI_r_calf");
OrientationInterpolator1382->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1382->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1382);

COrientationInterpolator* OrientationInterpolator1383 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1383->setDEF("Armature_OI_r_talus");
OrientationInterpolator1383->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1383->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1383);

COrientationInterpolator* OrientationInterpolator1384 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1384->setDEF("Armature_OI_r_navicular");
OrientationInterpolator1384->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1384->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1384);

COrientationInterpolator* OrientationInterpolator1385 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1385->setDEF("Armature_OI_r_cuneiform_1");
OrientationInterpolator1385->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1385->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1385);

COrientationInterpolator* OrientationInterpolator1386 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1386->setDEF("Armature_OI_r_metatarsal_1");
OrientationInterpolator1386->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1386->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1386);

COrientationInterpolator* OrientationInterpolator1387 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1387->setDEF("Armature_OI_r_tarsal_proximal_phalanx_1");
OrientationInterpolator1387->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1387->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1387);

COrientationInterpolator* OrientationInterpolator1388 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1388->setDEF("Armature_OI_r_tarsal_distal_phalanx_1");
OrientationInterpolator1388->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1388->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1388);

COrientationInterpolator* OrientationInterpolator1389 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1389->setDEF("Armature_OI_r_cuneiform_2");
OrientationInterpolator1389->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1389->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1389);

COrientationInterpolator* OrientationInterpolator1390 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1390->setDEF("Armature_OI_r_metatarsal_2");
OrientationInterpolator1390->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1390->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1390);

COrientationInterpolator* OrientationInterpolator1391 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1391->setDEF("Armature_OI_r_tarsal_proximal_phalanx_2");
OrientationInterpolator1391->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1391->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1391);

COrientationInterpolator* OrientationInterpolator1392 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1392->setDEF("Armature_OI_r_tarsal_middle_phalanx_2");
OrientationInterpolator1392->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1392->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1392);

COrientationInterpolator* OrientationInterpolator1393 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1393->setDEF("Armature_OI_r_tarsal_distal_phalanx_2");
OrientationInterpolator1393->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1393->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1393);

COrientationInterpolator* OrientationInterpolator1394 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1394->setDEF("Armature_OI_r_cuneiform_3");
OrientationInterpolator1394->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1394->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1394);

COrientationInterpolator* OrientationInterpolator1395 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1395->setDEF("Armature_OI_r_metatarsal_3");
OrientationInterpolator1395->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1395->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1395);

COrientationInterpolator* OrientationInterpolator1396 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1396->setDEF("Armature_OI_r_tarsal_proximal_phalanx_3");
OrientationInterpolator1396->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1396->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1396);

COrientationInterpolator* OrientationInterpolator1397 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1397->setDEF("Armature_OI_r_tarsal_middle_phalanx_3");
OrientationInterpolator1397->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1397->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1397);

COrientationInterpolator* OrientationInterpolator1398 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1398->setDEF("Armature_OI_r_tarsal_distal_phalanx_3");
OrientationInterpolator1398->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1398->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1398);

COrientationInterpolator* OrientationInterpolator1399 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1399->setDEF("Armature_OI_r_calcaneus");
OrientationInterpolator1399->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1399->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1399);

COrientationInterpolator* OrientationInterpolator1400 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1400->setDEF("Armature_OI_r_cuboid");
OrientationInterpolator1400->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1400->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1400);

COrientationInterpolator* OrientationInterpolator1401 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1401->setDEF("Armature_OI_r_metatarsal_4");
OrientationInterpolator1401->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1401->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1401);

COrientationInterpolator* OrientationInterpolator1402 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1402->setDEF("Armature_OI_r_tarsal_proximal_phalanx_4");
OrientationInterpolator1402->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1402->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1402);

COrientationInterpolator* OrientationInterpolator1403 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1403->setDEF("Armature_OI_r_tarsal_middle_phalanx_4");
OrientationInterpolator1403->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1403->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1403);

COrientationInterpolator* OrientationInterpolator1404 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1404->setDEF("Armature_OI_r_tarsal_distal_phalanx_4");
OrientationInterpolator1404->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1404->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1404);

COrientationInterpolator* OrientationInterpolator1405 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1405->setDEF("Armature_OI_r_metatarsal_5");
OrientationInterpolator1405->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1405->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1405);

COrientationInterpolator* OrientationInterpolator1406 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1406->setDEF("Armature_OI_r_tarsal_proximal_phalanx_5");
OrientationInterpolator1406->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1406->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1406);

COrientationInterpolator* OrientationInterpolator1407 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1407->setDEF("Armature_OI_r_tarsal_middle_phalanx_5");
OrientationInterpolator1407->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1407->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1407);

COrientationInterpolator* OrientationInterpolator1408 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1408->setDEF("Armature_OI_r_tarsal_distal_phalanx_5");
OrientationInterpolator1408->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1408->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1408);

COrientationInterpolator* OrientationInterpolator1409 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1409->setDEF("Armature_OI_l5");
OrientationInterpolator1409->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1409->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1409);

COrientationInterpolator* OrientationInterpolator1410 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1410->setDEF("Armature_OI_l4");
OrientationInterpolator1410->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1410->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1410);

COrientationInterpolator* OrientationInterpolator1411 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1411->setDEF("Armature_OI_l3");
OrientationInterpolator1411->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1411->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1411);

COrientationInterpolator* OrientationInterpolator1412 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1412->setDEF("Armature_OI_l2");
OrientationInterpolator1412->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1412->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1412);

COrientationInterpolator* OrientationInterpolator1413 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1413->setDEF("Armature_OI_l1");
OrientationInterpolator1413->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1413->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1413);

COrientationInterpolator* OrientationInterpolator1414 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1414->setDEF("Armature_OI_t12");
OrientationInterpolator1414->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1414->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1414);

COrientationInterpolator* OrientationInterpolator1415 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1415->setDEF("Armature_OI_t11");
OrientationInterpolator1415->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1415->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1415);

COrientationInterpolator* OrientationInterpolator1416 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1416->setDEF("Armature_OI_t10");
OrientationInterpolator1416->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1416->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1416);

COrientationInterpolator* OrientationInterpolator1417 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1417->setDEF("Armature_OI_t9");
OrientationInterpolator1417->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1417->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1417);

COrientationInterpolator* OrientationInterpolator1418 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1418->setDEF("Armature_OI_t8");
OrientationInterpolator1418->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1418->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1418);

COrientationInterpolator* OrientationInterpolator1419 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1419->setDEF("Armature_OI_t7");
OrientationInterpolator1419->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1419->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1419);

COrientationInterpolator* OrientationInterpolator1420 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1420->setDEF("Armature_OI_t6");
OrientationInterpolator1420->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1420->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1420);

COrientationInterpolator* OrientationInterpolator1421 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1421->setDEF("Armature_OI_t5");
OrientationInterpolator1421->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1421->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1421);

COrientationInterpolator* OrientationInterpolator1422 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1422->setDEF("Armature_OI_t4");
OrientationInterpolator1422->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1422->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1422);

COrientationInterpolator* OrientationInterpolator1423 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1423->setDEF("Armature_OI_t3");
OrientationInterpolator1423->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1423->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1423);

COrientationInterpolator* OrientationInterpolator1424 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1424->setDEF("Armature_OI_t2");
OrientationInterpolator1424->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1424->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1424);

COrientationInterpolator* OrientationInterpolator1425 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1425->setDEF("Armature_OI_t1");
OrientationInterpolator1425->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1425->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1425);

COrientationInterpolator* OrientationInterpolator1426 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1426->setDEF("Armature_OI_c7");
OrientationInterpolator1426->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1426->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1426);

COrientationInterpolator* OrientationInterpolator1427 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1427->setDEF("Armature_OI_c6");
OrientationInterpolator1427->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1427->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1427);

COrientationInterpolator* OrientationInterpolator1428 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1428->setDEF("Armature_OI_c5");
OrientationInterpolator1428->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1428->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1428);

COrientationInterpolator* OrientationInterpolator1429 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1429->setDEF("Armature_OI_c4");
OrientationInterpolator1429->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1429->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1429);

COrientationInterpolator* OrientationInterpolator1430 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1430->setDEF("Armature_OI_c3");
OrientationInterpolator1430->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1430->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1430);

COrientationInterpolator* OrientationInterpolator1431 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1431->setDEF("Armature_OI_c2");
OrientationInterpolator1431->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1431->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1431);

COrientationInterpolator* OrientationInterpolator1432 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1432->setDEF("Armature_OI_c1");
OrientationInterpolator1432->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1432->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1432);

COrientationInterpolator* OrientationInterpolator1433 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1433->setDEF("Armature_OI_skull");
OrientationInterpolator1433->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1433->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1433);

COrientationInterpolator* OrientationInterpolator1434 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1434->setDEF("Armature_OI_l_eyelid");
OrientationInterpolator1434->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1434->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1434);

COrientationInterpolator* OrientationInterpolator1435 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1435->setDEF("Armature_OI_r_eyelid");
OrientationInterpolator1435->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1435->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1435);

COrientationInterpolator* OrientationInterpolator1436 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1436->setDEF("Armature_OI_l_eyeball");
OrientationInterpolator1436->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1436->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1436);

COrientationInterpolator* OrientationInterpolator1437 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1437->setDEF("Armature_OI_r_eyeball");
OrientationInterpolator1437->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1437->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1437);

COrientationInterpolator* OrientationInterpolator1438 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1438->setDEF("Armature_OI_l_eyebrow");
OrientationInterpolator1438->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1438->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1438);

COrientationInterpolator* OrientationInterpolator1439 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1439->setDEF("Armature_OI_r_eyebrow");
OrientationInterpolator1439->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1439->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1439);

COrientationInterpolator* OrientationInterpolator1440 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1440->setDEF("Armature_OI_jaw");
OrientationInterpolator1440->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1440->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1440);

COrientationInterpolator* OrientationInterpolator1441 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1441->setDEF("Armature_OI_l_clavicle");
OrientationInterpolator1441->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1441->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1441);

COrientationInterpolator* OrientationInterpolator1442 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1442->setDEF("Armature_OI_l_scapula");
OrientationInterpolator1442->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1442->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1442);

COrientationInterpolator* OrientationInterpolator1443 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1443->setDEF("Armature_OI_l_upperarm");
OrientationInterpolator1443->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1443->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1443);

COrientationInterpolator* OrientationInterpolator1444 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1444->setDEF("Armature_OI_l_forearm");
OrientationInterpolator1444->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1444->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1444);

COrientationInterpolator* OrientationInterpolator1445 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1445->setDEF("Armature_OI_l_carpal");
OrientationInterpolator1445->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1445->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1445);

COrientationInterpolator* OrientationInterpolator1446 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1446->setDEF("Armature_OI_l_trapezium");
OrientationInterpolator1446->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1446->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1446);

COrientationInterpolator* OrientationInterpolator1447 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1447->setDEF("Armature_OI_l_metacarpal_1");
OrientationInterpolator1447->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1447->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1447);

COrientationInterpolator* OrientationInterpolator1448 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1448->setDEF("Armature_OI_l_carpal_proximal_phalanx_1");
OrientationInterpolator1448->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1448->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1448);

COrientationInterpolator* OrientationInterpolator1449 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1449->setDEF("Armature_OI_l_carpal_distal_phalanx_1");
OrientationInterpolator1449->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1449->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1449);

COrientationInterpolator* OrientationInterpolator1450 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1450->setDEF("Armature_OI_l_trapezoid");
OrientationInterpolator1450->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1450->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1450);

COrientationInterpolator* OrientationInterpolator1451 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1451->setDEF("Armature_OI_l_metacarpal_2");
OrientationInterpolator1451->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1451->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1451);

COrientationInterpolator* OrientationInterpolator1452 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1452->setDEF("Armature_OI_l_carpal_proximal_phalanx_2");
OrientationInterpolator1452->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1452->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1452);

COrientationInterpolator* OrientationInterpolator1453 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1453->setDEF("Armature_OI_l_carpal_middle_phalanx_2");
OrientationInterpolator1453->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1453->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1453);

COrientationInterpolator* OrientationInterpolator1454 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1454->setDEF("Armature_OI_l_carpal_distal_phalanx_2");
OrientationInterpolator1454->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1454->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1454);

COrientationInterpolator* OrientationInterpolator1455 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1455->setDEF("Armature_OI_l_capitate");
OrientationInterpolator1455->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1455->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1455);

COrientationInterpolator* OrientationInterpolator1456 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1456->setDEF("Armature_OI_l_metacarpal_3");
OrientationInterpolator1456->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1456->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1456);

COrientationInterpolator* OrientationInterpolator1457 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1457->setDEF("Armature_OI_l_carpal_proximal_phalanx_3");
OrientationInterpolator1457->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1457->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1457);

COrientationInterpolator* OrientationInterpolator1458 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1458->setDEF("Armature_OI_l_carpal_middle_phalanx_3");
OrientationInterpolator1458->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1458->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1458);

COrientationInterpolator* OrientationInterpolator1459 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1459->setDEF("Armature_OI_l_carpal_distal_phalanx_3");
OrientationInterpolator1459->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1459->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1459);

COrientationInterpolator* OrientationInterpolator1460 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1460->setDEF("Armature_OI_l_hamate");
OrientationInterpolator1460->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1460->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1460);

COrientationInterpolator* OrientationInterpolator1461 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1461->setDEF("Armature_OI_l_metacarpal_4");
OrientationInterpolator1461->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1461->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1461);

COrientationInterpolator* OrientationInterpolator1462 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1462->setDEF("Armature_OI_l_carpal_proximal_phalanx_4");
OrientationInterpolator1462->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1462->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1462);

COrientationInterpolator* OrientationInterpolator1463 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1463->setDEF("Armature_OI_l_carpal_middle_phalanx_4");
OrientationInterpolator1463->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1463->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1463);

COrientationInterpolator* OrientationInterpolator1464 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1464->setDEF("Armature_OI_l_carpal_distal_phalanx_4");
OrientationInterpolator1464->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1464->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1464);

COrientationInterpolator* OrientationInterpolator1465 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1465->setDEF("Armature_OI_l_metacarpal_5");
OrientationInterpolator1465->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1465->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1465);

COrientationInterpolator* OrientationInterpolator1466 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1466->setDEF("Armature_OI_l_carpal_proximal_phalanx_5");
OrientationInterpolator1466->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1466->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1466);

COrientationInterpolator* OrientationInterpolator1467 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1467->setDEF("Armature_OI_l_carpal_middle_phalanx_5");
OrientationInterpolator1467->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1467->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1467);

COrientationInterpolator* OrientationInterpolator1468 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1468->setDEF("Armature_OI_l_carpal_distal_phalanx_5");
OrientationInterpolator1468->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1468->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1468);

COrientationInterpolator* OrientationInterpolator1469 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1469->setDEF("Armature_OI_r_clavicle");
OrientationInterpolator1469->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1469->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1469);

COrientationInterpolator* OrientationInterpolator1470 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1470->setDEF("Armature_OI_r_scapula");
OrientationInterpolator1470->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1470->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1470);

COrientationInterpolator* OrientationInterpolator1471 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1471->setDEF("Armature_OI_r_upperarm");
OrientationInterpolator1471->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1471->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1471);

COrientationInterpolator* OrientationInterpolator1472 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1472->setDEF("Armature_OI_r_forearm");
OrientationInterpolator1472->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1472->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1472);

COrientationInterpolator* OrientationInterpolator1473 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1473->setDEF("Armature_OI_r_carpal");
OrientationInterpolator1473->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1473->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1473);

COrientationInterpolator* OrientationInterpolator1474 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1474->setDEF("Armature_OI_r_trapezium");
OrientationInterpolator1474->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1474->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1474);

COrientationInterpolator* OrientationInterpolator1475 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1475->setDEF("Armature_OI_r_metacarpal_1");
OrientationInterpolator1475->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1475->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1475);

COrientationInterpolator* OrientationInterpolator1476 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1476->setDEF("Armature_OI_r_carpal_proximal_phalanx_1");
OrientationInterpolator1476->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1476->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1476);

COrientationInterpolator* OrientationInterpolator1477 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1477->setDEF("Armature_OI_r_carpal_distal_phalanx_1");
OrientationInterpolator1477->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1477->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1477);

COrientationInterpolator* OrientationInterpolator1478 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1478->setDEF("Armature_OI_r_trapezoid");
OrientationInterpolator1478->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1478->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1478);

COrientationInterpolator* OrientationInterpolator1479 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1479->setDEF("Armature_OI_r_metacarpal_2");
OrientationInterpolator1479->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1479->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1479);

COrientationInterpolator* OrientationInterpolator1480 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1480->setDEF("Armature_OI_r_carpal_proximal_phalanx_2");
OrientationInterpolator1480->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1480->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1480);

COrientationInterpolator* OrientationInterpolator1481 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1481->setDEF("Armature_OI_r_carpal_middle_phalanx_2");
OrientationInterpolator1481->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1481->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1481);

COrientationInterpolator* OrientationInterpolator1482 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1482->setDEF("Armature_OI_r_carpal_distal_phalanx_2");
OrientationInterpolator1482->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1482->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1482);

COrientationInterpolator* OrientationInterpolator1483 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1483->setDEF("Armature_OI_r_capitate");
OrientationInterpolator1483->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1483->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1483);

COrientationInterpolator* OrientationInterpolator1484 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1484->setDEF("Armature_OI_r_metacarpal_3");
OrientationInterpolator1484->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1484->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1484);

COrientationInterpolator* OrientationInterpolator1485 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1485->setDEF("Armature_OI_r_carpal_proximal_phalanx_3");
OrientationInterpolator1485->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1485->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1485);

COrientationInterpolator* OrientationInterpolator1486 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1486->setDEF("Armature_OI_r_carpal_middle_phalanx_3");
OrientationInterpolator1486->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1486->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1486);

COrientationInterpolator* OrientationInterpolator1487 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1487->setDEF("Armature_OI_r_carpal_distal_phalanx_3");
OrientationInterpolator1487->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1487->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1487);

COrientationInterpolator* OrientationInterpolator1488 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1488->setDEF("Armature_OI_r_hamate");
OrientationInterpolator1488->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1488->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1488);

COrientationInterpolator* OrientationInterpolator1489 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1489->setDEF("Armature_OI_r_metacarpal_4");
OrientationInterpolator1489->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1489->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1489);

COrientationInterpolator* OrientationInterpolator1490 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1490->setDEF("Armature_OI_r_carpal_proximal_phalanx_4");
OrientationInterpolator1490->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1490->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1490);

COrientationInterpolator* OrientationInterpolator1491 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1491->setDEF("Armature_OI_r_carpal_middle_phalanx_4");
OrientationInterpolator1491->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1491->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1491);

COrientationInterpolator* OrientationInterpolator1492 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1492->setDEF("Armature_OI_r_carpal_distal_phalanx_4");
OrientationInterpolator1492->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1492->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1492);

COrientationInterpolator* OrientationInterpolator1493 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1493->setDEF("Armature_OI_r_metacarpal_5");
OrientationInterpolator1493->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1493->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1493);

COrientationInterpolator* OrientationInterpolator1494 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1494->setDEF("Armature_OI_r_carpal_proximal_phalanx_5");
OrientationInterpolator1494->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1494->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1494);

COrientationInterpolator* OrientationInterpolator1495 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1495->setDEF("Armature_OI_r_carpal_middle_phalanx_5");
OrientationInterpolator1495->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1495->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1495);

COrientationInterpolator* OrientationInterpolator1496 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1496->setDEF("Armature_OI_r_carpal_distal_phalanx_5");
OrientationInterpolator1496->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1496->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
group->addChildren(*OrientationInterpolator1496);

CROUTE* ROUTE1497 = new CROUTE();
ROUTE1497->setFromField("fraction_changed");
ROUTE1497->setFromNode("Armature_Clock");
ROUTE1497->setToField("set_fraction");
ROUTE1497->setToNode("Armature_OI_sacrum");
group->addChildren(*ROUTE1497);

CROUTE* ROUTE1498 = new CROUTE();
ROUTE1498->setFromField("value_changed");
ROUTE1498->setFromNode("Armature_OI_sacrum");
ROUTE1498->setToField("rotation");
ROUTE1498->setToNode("hanim_sacrum");
group->addChildren(*ROUTE1498);

CROUTE* ROUTE1499 = new CROUTE();
ROUTE1499->setFromField("fraction_changed");
ROUTE1499->setFromNode("Armature_Clock");
ROUTE1499->setToField("set_fraction");
ROUTE1499->setToNode("Armature_OI_pelvis");
group->addChildren(*ROUTE1499);

CROUTE* ROUTE1500 = new CROUTE();
ROUTE1500->setFromField("value_changed");
ROUTE1500->setFromNode("Armature_OI_pelvis");
ROUTE1500->setToField("rotation");
ROUTE1500->setToNode("hanim_pelvis");
group->addChildren(*ROUTE1500);

CROUTE* ROUTE1501 = new CROUTE();
ROUTE1501->setFromField("fraction_changed");
ROUTE1501->setFromNode("Armature_Clock");
ROUTE1501->setToField("set_fraction");
ROUTE1501->setToNode("Armature_OI_l_thigh");
group->addChildren(*ROUTE1501);

CROUTE* ROUTE1502 = new CROUTE();
ROUTE1502->setFromField("value_changed");
ROUTE1502->setFromNode("Armature_OI_l_thigh");
ROUTE1502->setToField("rotation");
ROUTE1502->setToNode("hanim_l_thigh");
group->addChildren(*ROUTE1502);

CROUTE* ROUTE1503 = new CROUTE();
ROUTE1503->setFromField("fraction_changed");
ROUTE1503->setFromNode("Armature_Clock");
ROUTE1503->setToField("set_fraction");
ROUTE1503->setToNode("Armature_OI_l_calf");
group->addChildren(*ROUTE1503);

CROUTE* ROUTE1504 = new CROUTE();
ROUTE1504->setFromField("value_changed");
ROUTE1504->setFromNode("Armature_OI_l_calf");
ROUTE1504->setToField("rotation");
ROUTE1504->setToNode("hanim_l_calf");
group->addChildren(*ROUTE1504);

CROUTE* ROUTE1505 = new CROUTE();
ROUTE1505->setFromField("fraction_changed");
ROUTE1505->setFromNode("Armature_Clock");
ROUTE1505->setToField("set_fraction");
ROUTE1505->setToNode("Armature_OI_l_talus");
group->addChildren(*ROUTE1505);

CROUTE* ROUTE1506 = new CROUTE();
ROUTE1506->setFromField("value_changed");
ROUTE1506->setFromNode("Armature_OI_l_talus");
ROUTE1506->setToField("rotation");
ROUTE1506->setToNode("hanim_l_talus");
group->addChildren(*ROUTE1506);

CROUTE* ROUTE1507 = new CROUTE();
ROUTE1507->setFromField("fraction_changed");
ROUTE1507->setFromNode("Armature_Clock");
ROUTE1507->setToField("set_fraction");
ROUTE1507->setToNode("Armature_OI_l_navicular");
group->addChildren(*ROUTE1507);

CROUTE* ROUTE1508 = new CROUTE();
ROUTE1508->setFromField("value_changed");
ROUTE1508->setFromNode("Armature_OI_l_navicular");
ROUTE1508->setToField("rotation");
ROUTE1508->setToNode("hanim_l_navicular");
group->addChildren(*ROUTE1508);

CROUTE* ROUTE1509 = new CROUTE();
ROUTE1509->setFromField("fraction_changed");
ROUTE1509->setFromNode("Armature_Clock");
ROUTE1509->setToField("set_fraction");
ROUTE1509->setToNode("Armature_OI_l_cuneiform_1");
group->addChildren(*ROUTE1509);

CROUTE* ROUTE1510 = new CROUTE();
ROUTE1510->setFromField("value_changed");
ROUTE1510->setFromNode("Armature_OI_l_cuneiform_1");
ROUTE1510->setToField("rotation");
ROUTE1510->setToNode("hanim_l_cuneiform_1");
group->addChildren(*ROUTE1510);

CROUTE* ROUTE1511 = new CROUTE();
ROUTE1511->setFromField("fraction_changed");
ROUTE1511->setFromNode("Armature_Clock");
ROUTE1511->setToField("set_fraction");
ROUTE1511->setToNode("Armature_OI_l_metatarsal_1");
group->addChildren(*ROUTE1511);

CROUTE* ROUTE1512 = new CROUTE();
ROUTE1512->setFromField("value_changed");
ROUTE1512->setFromNode("Armature_OI_l_metatarsal_1");
ROUTE1512->setToField("rotation");
ROUTE1512->setToNode("hanim_l_metatarsal_1");
group->addChildren(*ROUTE1512);

CROUTE* ROUTE1513 = new CROUTE();
ROUTE1513->setFromField("fraction_changed");
ROUTE1513->setFromNode("Armature_Clock");
ROUTE1513->setToField("set_fraction");
ROUTE1513->setToNode("Armature_OI_l_tarsal_proximal_phalanx_1");
group->addChildren(*ROUTE1513);

CROUTE* ROUTE1514 = new CROUTE();
ROUTE1514->setFromField("value_changed");
ROUTE1514->setFromNode("Armature_OI_l_tarsal_proximal_phalanx_1");
ROUTE1514->setToField("rotation");
ROUTE1514->setToNode("hanim_l_tarsal_proximal_phalanx_1");
group->addChildren(*ROUTE1514);

CROUTE* ROUTE1515 = new CROUTE();
ROUTE1515->setFromField("fraction_changed");
ROUTE1515->setFromNode("Armature_Clock");
ROUTE1515->setToField("set_fraction");
ROUTE1515->setToNode("Armature_OI_l_tarsal_distal_phalanx_1");
group->addChildren(*ROUTE1515);

CROUTE* ROUTE1516 = new CROUTE();
ROUTE1516->setFromField("value_changed");
ROUTE1516->setFromNode("Armature_OI_l_tarsal_distal_phalanx_1");
ROUTE1516->setToField("rotation");
ROUTE1516->setToNode("hanim_l_tarsal_distal_phalanx_1");
group->addChildren(*ROUTE1516);

CROUTE* ROUTE1517 = new CROUTE();
ROUTE1517->setFromField("fraction_changed");
ROUTE1517->setFromNode("Armature_Clock");
ROUTE1517->setToField("set_fraction");
ROUTE1517->setToNode("Armature_OI_l_cuneiform_2");
group->addChildren(*ROUTE1517);

CROUTE* ROUTE1518 = new CROUTE();
ROUTE1518->setFromField("value_changed");
ROUTE1518->setFromNode("Armature_OI_l_cuneiform_2");
ROUTE1518->setToField("rotation");
ROUTE1518->setToNode("hanim_l_cuneiform_2");
group->addChildren(*ROUTE1518);

CROUTE* ROUTE1519 = new CROUTE();
ROUTE1519->setFromField("fraction_changed");
ROUTE1519->setFromNode("Armature_Clock");
ROUTE1519->setToField("set_fraction");
ROUTE1519->setToNode("Armature_OI_l_metatarsal_2");
group->addChildren(*ROUTE1519);

CROUTE* ROUTE1520 = new CROUTE();
ROUTE1520->setFromField("value_changed");
ROUTE1520->setFromNode("Armature_OI_l_metatarsal_2");
ROUTE1520->setToField("rotation");
ROUTE1520->setToNode("hanim_l_metatarsal_2");
group->addChildren(*ROUTE1520);

CROUTE* ROUTE1521 = new CROUTE();
ROUTE1521->setFromField("fraction_changed");
ROUTE1521->setFromNode("Armature_Clock");
ROUTE1521->setToField("set_fraction");
ROUTE1521->setToNode("Armature_OI_l_tarsal_proximal_phalanx_2");
group->addChildren(*ROUTE1521);

CROUTE* ROUTE1522 = new CROUTE();
ROUTE1522->setFromField("value_changed");
ROUTE1522->setFromNode("Armature_OI_l_tarsal_proximal_phalanx_2");
ROUTE1522->setToField("rotation");
ROUTE1522->setToNode("hanim_l_tarsal_proximal_phalanx_2");
group->addChildren(*ROUTE1522);

CROUTE* ROUTE1523 = new CROUTE();
ROUTE1523->setFromField("fraction_changed");
ROUTE1523->setFromNode("Armature_Clock");
ROUTE1523->setToField("set_fraction");
ROUTE1523->setToNode("Armature_OI_l_tarsal_middle_phalanx_2");
group->addChildren(*ROUTE1523);

CROUTE* ROUTE1524 = new CROUTE();
ROUTE1524->setFromField("value_changed");
ROUTE1524->setFromNode("Armature_OI_l_tarsal_middle_phalanx_2");
ROUTE1524->setToField("rotation");
ROUTE1524->setToNode("hanim_l_tarsal_middle_phalanx_2");
group->addChildren(*ROUTE1524);

CROUTE* ROUTE1525 = new CROUTE();
ROUTE1525->setFromField("fraction_changed");
ROUTE1525->setFromNode("Armature_Clock");
ROUTE1525->setToField("set_fraction");
ROUTE1525->setToNode("Armature_OI_l_tarsal_distal_phalanx_2");
group->addChildren(*ROUTE1525);

CROUTE* ROUTE1526 = new CROUTE();
ROUTE1526->setFromField("value_changed");
ROUTE1526->setFromNode("Armature_OI_l_tarsal_distal_phalanx_2");
ROUTE1526->setToField("rotation");
ROUTE1526->setToNode("hanim_l_tarsal_distal_phalanx_2");
group->addChildren(*ROUTE1526);

CROUTE* ROUTE1527 = new CROUTE();
ROUTE1527->setFromField("fraction_changed");
ROUTE1527->setFromNode("Armature_Clock");
ROUTE1527->setToField("set_fraction");
ROUTE1527->setToNode("Armature_OI_l_cuneiform_3");
group->addChildren(*ROUTE1527);

CROUTE* ROUTE1528 = new CROUTE();
ROUTE1528->setFromField("value_changed");
ROUTE1528->setFromNode("Armature_OI_l_cuneiform_3");
ROUTE1528->setToField("rotation");
ROUTE1528->setToNode("hanim_l_cuneiform_3");
group->addChildren(*ROUTE1528);

CROUTE* ROUTE1529 = new CROUTE();
ROUTE1529->setFromField("fraction_changed");
ROUTE1529->setFromNode("Armature_Clock");
ROUTE1529->setToField("set_fraction");
ROUTE1529->setToNode("Armature_OI_l_metatarsal_3");
group->addChildren(*ROUTE1529);

CROUTE* ROUTE1530 = new CROUTE();
ROUTE1530->setFromField("value_changed");
ROUTE1530->setFromNode("Armature_OI_l_metatarsal_3");
ROUTE1530->setToField("rotation");
ROUTE1530->setToNode("hanim_l_metatarsal_3");
group->addChildren(*ROUTE1530);

CROUTE* ROUTE1531 = new CROUTE();
ROUTE1531->setFromField("fraction_changed");
ROUTE1531->setFromNode("Armature_Clock");
ROUTE1531->setToField("set_fraction");
ROUTE1531->setToNode("Armature_OI_l_tarsal_proximal_phalanx_3");
group->addChildren(*ROUTE1531);

CROUTE* ROUTE1532 = new CROUTE();
ROUTE1532->setFromField("value_changed");
ROUTE1532->setFromNode("Armature_OI_l_tarsal_proximal_phalanx_3");
ROUTE1532->setToField("rotation");
ROUTE1532->setToNode("hanim_l_tarsal_proximal_phalanx_3");
group->addChildren(*ROUTE1532);

CROUTE* ROUTE1533 = new CROUTE();
ROUTE1533->setFromField("fraction_changed");
ROUTE1533->setFromNode("Armature_Clock");
ROUTE1533->setToField("set_fraction");
ROUTE1533->setToNode("Armature_OI_l_tarsal_middle_phalanx_3");
group->addChildren(*ROUTE1533);

CROUTE* ROUTE1534 = new CROUTE();
ROUTE1534->setFromField("value_changed");
ROUTE1534->setFromNode("Armature_OI_l_tarsal_middle_phalanx_3");
ROUTE1534->setToField("rotation");
ROUTE1534->setToNode("hanim_l_tarsal_middle_phalanx_3");
group->addChildren(*ROUTE1534);

CROUTE* ROUTE1535 = new CROUTE();
ROUTE1535->setFromField("fraction_changed");
ROUTE1535->setFromNode("Armature_Clock");
ROUTE1535->setToField("set_fraction");
ROUTE1535->setToNode("Armature_OI_l_tarsal_distal_phalanx_3");
group->addChildren(*ROUTE1535);

CROUTE* ROUTE1536 = new CROUTE();
ROUTE1536->setFromField("value_changed");
ROUTE1536->setFromNode("Armature_OI_l_tarsal_distal_phalanx_3");
ROUTE1536->setToField("rotation");
ROUTE1536->setToNode("hanim_l_tarsal_distal_phalanx_3");
group->addChildren(*ROUTE1536);

CROUTE* ROUTE1537 = new CROUTE();
ROUTE1537->setFromField("fraction_changed");
ROUTE1537->setFromNode("Armature_Clock");
ROUTE1537->setToField("set_fraction");
ROUTE1537->setToNode("Armature_OI_l_calcaneus");
group->addChildren(*ROUTE1537);

CROUTE* ROUTE1538 = new CROUTE();
ROUTE1538->setFromField("value_changed");
ROUTE1538->setFromNode("Armature_OI_l_calcaneus");
ROUTE1538->setToField("rotation");
ROUTE1538->setToNode("hanim_l_calcaneus");
group->addChildren(*ROUTE1538);

CROUTE* ROUTE1539 = new CROUTE();
ROUTE1539->setFromField("fraction_changed");
ROUTE1539->setFromNode("Armature_Clock");
ROUTE1539->setToField("set_fraction");
ROUTE1539->setToNode("Armature_OI_l_cuboid");
group->addChildren(*ROUTE1539);

CROUTE* ROUTE1540 = new CROUTE();
ROUTE1540->setFromField("value_changed");
ROUTE1540->setFromNode("Armature_OI_l_cuboid");
ROUTE1540->setToField("rotation");
ROUTE1540->setToNode("hanim_l_cuboid");
group->addChildren(*ROUTE1540);

CROUTE* ROUTE1541 = new CROUTE();
ROUTE1541->setFromField("fraction_changed");
ROUTE1541->setFromNode("Armature_Clock");
ROUTE1541->setToField("set_fraction");
ROUTE1541->setToNode("Armature_OI_l_metatarsal_4");
group->addChildren(*ROUTE1541);

CROUTE* ROUTE1542 = new CROUTE();
ROUTE1542->setFromField("value_changed");
ROUTE1542->setFromNode("Armature_OI_l_metatarsal_4");
ROUTE1542->setToField("rotation");
ROUTE1542->setToNode("hanim_l_metatarsal_4");
group->addChildren(*ROUTE1542);

CROUTE* ROUTE1543 = new CROUTE();
ROUTE1543->setFromField("fraction_changed");
ROUTE1543->setFromNode("Armature_Clock");
ROUTE1543->setToField("set_fraction");
ROUTE1543->setToNode("Armature_OI_l_tarsal_proximal_phalanx_4");
group->addChildren(*ROUTE1543);

CROUTE* ROUTE1544 = new CROUTE();
ROUTE1544->setFromField("value_changed");
ROUTE1544->setFromNode("Armature_OI_l_tarsal_proximal_phalanx_4");
ROUTE1544->setToField("rotation");
ROUTE1544->setToNode("hanim_l_tarsal_proximal_phalanx_4");
group->addChildren(*ROUTE1544);

CROUTE* ROUTE1545 = new CROUTE();
ROUTE1545->setFromField("fraction_changed");
ROUTE1545->setFromNode("Armature_Clock");
ROUTE1545->setToField("set_fraction");
ROUTE1545->setToNode("Armature_OI_l_tarsal_middle_phalanx_4");
group->addChildren(*ROUTE1545);

CROUTE* ROUTE1546 = new CROUTE();
ROUTE1546->setFromField("value_changed");
ROUTE1546->setFromNode("Armature_OI_l_tarsal_middle_phalanx_4");
ROUTE1546->setToField("rotation");
ROUTE1546->setToNode("hanim_l_tarsal_middle_phalanx_4");
group->addChildren(*ROUTE1546);

CROUTE* ROUTE1547 = new CROUTE();
ROUTE1547->setFromField("fraction_changed");
ROUTE1547->setFromNode("Armature_Clock");
ROUTE1547->setToField("set_fraction");
ROUTE1547->setToNode("Armature_OI_l_tarsal_distal_phalanx_4");
group->addChildren(*ROUTE1547);

CROUTE* ROUTE1548 = new CROUTE();
ROUTE1548->setFromField("value_changed");
ROUTE1548->setFromNode("Armature_OI_l_tarsal_distal_phalanx_4");
ROUTE1548->setToField("rotation");
ROUTE1548->setToNode("hanim_l_tarsal_distal_phalanx_4");
group->addChildren(*ROUTE1548);

CROUTE* ROUTE1549 = new CROUTE();
ROUTE1549->setFromField("fraction_changed");
ROUTE1549->setFromNode("Armature_Clock");
ROUTE1549->setToField("set_fraction");
ROUTE1549->setToNode("Armature_OI_l_metatarsal_5");
group->addChildren(*ROUTE1549);

CROUTE* ROUTE1550 = new CROUTE();
ROUTE1550->setFromField("value_changed");
ROUTE1550->setFromNode("Armature_OI_l_metatarsal_5");
ROUTE1550->setToField("rotation");
ROUTE1550->setToNode("hanim_l_metatarsal_5");
group->addChildren(*ROUTE1550);

CROUTE* ROUTE1551 = new CROUTE();
ROUTE1551->setFromField("fraction_changed");
ROUTE1551->setFromNode("Armature_Clock");
ROUTE1551->setToField("set_fraction");
ROUTE1551->setToNode("Armature_OI_l_tarsal_proximal_phalanx_5");
group->addChildren(*ROUTE1551);

CROUTE* ROUTE1552 = new CROUTE();
ROUTE1552->setFromField("value_changed");
ROUTE1552->setFromNode("Armature_OI_l_tarsal_proximal_phalanx_5");
ROUTE1552->setToField("rotation");
ROUTE1552->setToNode("hanim_l_tarsal_proximal_phalanx_5");
group->addChildren(*ROUTE1552);

CROUTE* ROUTE1553 = new CROUTE();
ROUTE1553->setFromField("fraction_changed");
ROUTE1553->setFromNode("Armature_Clock");
ROUTE1553->setToField("set_fraction");
ROUTE1553->setToNode("Armature_OI_l_tarsal_middle_phalanx_5");
group->addChildren(*ROUTE1553);

CROUTE* ROUTE1554 = new CROUTE();
ROUTE1554->setFromField("value_changed");
ROUTE1554->setFromNode("Armature_OI_l_tarsal_middle_phalanx_5");
ROUTE1554->setToField("rotation");
ROUTE1554->setToNode("hanim_l_tarsal_middle_phalanx_5");
group->addChildren(*ROUTE1554);

CROUTE* ROUTE1555 = new CROUTE();
ROUTE1555->setFromField("fraction_changed");
ROUTE1555->setFromNode("Armature_Clock");
ROUTE1555->setToField("set_fraction");
ROUTE1555->setToNode("Armature_OI_l_tarsal_distal_phalanx_5");
group->addChildren(*ROUTE1555);

CROUTE* ROUTE1556 = new CROUTE();
ROUTE1556->setFromField("value_changed");
ROUTE1556->setFromNode("Armature_OI_l_tarsal_distal_phalanx_5");
ROUTE1556->setToField("rotation");
ROUTE1556->setToNode("hanim_l_tarsal_distal_phalanx_5");
group->addChildren(*ROUTE1556);

CROUTE* ROUTE1557 = new CROUTE();
ROUTE1557->setFromField("fraction_changed");
ROUTE1557->setFromNode("Armature_Clock");
ROUTE1557->setToField("set_fraction");
ROUTE1557->setToNode("Armature_OI_r_thigh");
group->addChildren(*ROUTE1557);

CROUTE* ROUTE1558 = new CROUTE();
ROUTE1558->setFromField("value_changed");
ROUTE1558->setFromNode("Armature_OI_r_thigh");
ROUTE1558->setToField("rotation");
ROUTE1558->setToNode("hanim_r_thigh");
group->addChildren(*ROUTE1558);

CROUTE* ROUTE1559 = new CROUTE();
ROUTE1559->setFromField("fraction_changed");
ROUTE1559->setFromNode("Armature_Clock");
ROUTE1559->setToField("set_fraction");
ROUTE1559->setToNode("Armature_OI_r_calf");
group->addChildren(*ROUTE1559);

CROUTE* ROUTE1560 = new CROUTE();
ROUTE1560->setFromField("value_changed");
ROUTE1560->setFromNode("Armature_OI_r_calf");
ROUTE1560->setToField("rotation");
ROUTE1560->setToNode("hanim_r_calf");
group->addChildren(*ROUTE1560);

CROUTE* ROUTE1561 = new CROUTE();
ROUTE1561->setFromField("fraction_changed");
ROUTE1561->setFromNode("Armature_Clock");
ROUTE1561->setToField("set_fraction");
ROUTE1561->setToNode("Armature_OI_r_talus");
group->addChildren(*ROUTE1561);

CROUTE* ROUTE1562 = new CROUTE();
ROUTE1562->setFromField("value_changed");
ROUTE1562->setFromNode("Armature_OI_r_talus");
ROUTE1562->setToField("rotation");
ROUTE1562->setToNode("hanim_r_talus");
group->addChildren(*ROUTE1562);

CROUTE* ROUTE1563 = new CROUTE();
ROUTE1563->setFromField("fraction_changed");
ROUTE1563->setFromNode("Armature_Clock");
ROUTE1563->setToField("set_fraction");
ROUTE1563->setToNode("Armature_OI_r_navicular");
group->addChildren(*ROUTE1563);

CROUTE* ROUTE1564 = new CROUTE();
ROUTE1564->setFromField("value_changed");
ROUTE1564->setFromNode("Armature_OI_r_navicular");
ROUTE1564->setToField("rotation");
ROUTE1564->setToNode("hanim_r_navicular");
group->addChildren(*ROUTE1564);

CROUTE* ROUTE1565 = new CROUTE();
ROUTE1565->setFromField("fraction_changed");
ROUTE1565->setFromNode("Armature_Clock");
ROUTE1565->setToField("set_fraction");
ROUTE1565->setToNode("Armature_OI_r_cuneiform_1");
group->addChildren(*ROUTE1565);

CROUTE* ROUTE1566 = new CROUTE();
ROUTE1566->setFromField("value_changed");
ROUTE1566->setFromNode("Armature_OI_r_cuneiform_1");
ROUTE1566->setToField("rotation");
ROUTE1566->setToNode("hanim_r_cuneiform_1");
group->addChildren(*ROUTE1566);

CROUTE* ROUTE1567 = new CROUTE();
ROUTE1567->setFromField("fraction_changed");
ROUTE1567->setFromNode("Armature_Clock");
ROUTE1567->setToField("set_fraction");
ROUTE1567->setToNode("Armature_OI_r_metatarsal_1");
group->addChildren(*ROUTE1567);

CROUTE* ROUTE1568 = new CROUTE();
ROUTE1568->setFromField("value_changed");
ROUTE1568->setFromNode("Armature_OI_r_metatarsal_1");
ROUTE1568->setToField("rotation");
ROUTE1568->setToNode("hanim_r_metatarsal_1");
group->addChildren(*ROUTE1568);

CROUTE* ROUTE1569 = new CROUTE();
ROUTE1569->setFromField("fraction_changed");
ROUTE1569->setFromNode("Armature_Clock");
ROUTE1569->setToField("set_fraction");
ROUTE1569->setToNode("Armature_OI_r_tarsal_proximal_phalanx_1");
group->addChildren(*ROUTE1569);

CROUTE* ROUTE1570 = new CROUTE();
ROUTE1570->setFromField("value_changed");
ROUTE1570->setFromNode("Armature_OI_r_tarsal_proximal_phalanx_1");
ROUTE1570->setToField("rotation");
ROUTE1570->setToNode("hanim_r_tarsal_proximal_phalanx_1");
group->addChildren(*ROUTE1570);

CROUTE* ROUTE1571 = new CROUTE();
ROUTE1571->setFromField("fraction_changed");
ROUTE1571->setFromNode("Armature_Clock");
ROUTE1571->setToField("set_fraction");
ROUTE1571->setToNode("Armature_OI_r_tarsal_distal_phalanx_1");
group->addChildren(*ROUTE1571);

CROUTE* ROUTE1572 = new CROUTE();
ROUTE1572->setFromField("value_changed");
ROUTE1572->setFromNode("Armature_OI_r_tarsal_distal_phalanx_1");
ROUTE1572->setToField("rotation");
ROUTE1572->setToNode("hanim_r_tarsal_distal_phalanx_1");
group->addChildren(*ROUTE1572);

CROUTE* ROUTE1573 = new CROUTE();
ROUTE1573->setFromField("fraction_changed");
ROUTE1573->setFromNode("Armature_Clock");
ROUTE1573->setToField("set_fraction");
ROUTE1573->setToNode("Armature_OI_r_cuneiform_2");
group->addChildren(*ROUTE1573);

CROUTE* ROUTE1574 = new CROUTE();
ROUTE1574->setFromField("value_changed");
ROUTE1574->setFromNode("Armature_OI_r_cuneiform_2");
ROUTE1574->setToField("rotation");
ROUTE1574->setToNode("hanim_r_cuneiform_2");
group->addChildren(*ROUTE1574);

CROUTE* ROUTE1575 = new CROUTE();
ROUTE1575->setFromField("fraction_changed");
ROUTE1575->setFromNode("Armature_Clock");
ROUTE1575->setToField("set_fraction");
ROUTE1575->setToNode("Armature_OI_r_metatarsal_2");
group->addChildren(*ROUTE1575);

CROUTE* ROUTE1576 = new CROUTE();
ROUTE1576->setFromField("value_changed");
ROUTE1576->setFromNode("Armature_OI_r_metatarsal_2");
ROUTE1576->setToField("rotation");
ROUTE1576->setToNode("hanim_r_metatarsal_2");
group->addChildren(*ROUTE1576);

CROUTE* ROUTE1577 = new CROUTE();
ROUTE1577->setFromField("fraction_changed");
ROUTE1577->setFromNode("Armature_Clock");
ROUTE1577->setToField("set_fraction");
ROUTE1577->setToNode("Armature_OI_r_tarsal_proximal_phalanx_2");
group->addChildren(*ROUTE1577);

CROUTE* ROUTE1578 = new CROUTE();
ROUTE1578->setFromField("value_changed");
ROUTE1578->setFromNode("Armature_OI_r_tarsal_proximal_phalanx_2");
ROUTE1578->setToField("rotation");
ROUTE1578->setToNode("hanim_r_tarsal_proximal_phalanx_2");
group->addChildren(*ROUTE1578);

CROUTE* ROUTE1579 = new CROUTE();
ROUTE1579->setFromField("fraction_changed");
ROUTE1579->setFromNode("Armature_Clock");
ROUTE1579->setToField("set_fraction");
ROUTE1579->setToNode("Armature_OI_r_tarsal_middle_phalanx_2");
group->addChildren(*ROUTE1579);

CROUTE* ROUTE1580 = new CROUTE();
ROUTE1580->setFromField("value_changed");
ROUTE1580->setFromNode("Armature_OI_r_tarsal_middle_phalanx_2");
ROUTE1580->setToField("rotation");
ROUTE1580->setToNode("hanim_r_tarsal_middle_phalanx_2");
group->addChildren(*ROUTE1580);

CROUTE* ROUTE1581 = new CROUTE();
ROUTE1581->setFromField("fraction_changed");
ROUTE1581->setFromNode("Armature_Clock");
ROUTE1581->setToField("set_fraction");
ROUTE1581->setToNode("Armature_OI_r_tarsal_distal_phalanx_2");
group->addChildren(*ROUTE1581);

CROUTE* ROUTE1582 = new CROUTE();
ROUTE1582->setFromField("value_changed");
ROUTE1582->setFromNode("Armature_OI_r_tarsal_distal_phalanx_2");
ROUTE1582->setToField("rotation");
ROUTE1582->setToNode("hanim_r_tarsal_distal_phalanx_2");
group->addChildren(*ROUTE1582);

CROUTE* ROUTE1583 = new CROUTE();
ROUTE1583->setFromField("fraction_changed");
ROUTE1583->setFromNode("Armature_Clock");
ROUTE1583->setToField("set_fraction");
ROUTE1583->setToNode("Armature_OI_r_cuneiform_3");
group->addChildren(*ROUTE1583);

CROUTE* ROUTE1584 = new CROUTE();
ROUTE1584->setFromField("value_changed");
ROUTE1584->setFromNode("Armature_OI_r_cuneiform_3");
ROUTE1584->setToField("rotation");
ROUTE1584->setToNode("hanim_r_cuneiform_3");
group->addChildren(*ROUTE1584);

CROUTE* ROUTE1585 = new CROUTE();
ROUTE1585->setFromField("fraction_changed");
ROUTE1585->setFromNode("Armature_Clock");
ROUTE1585->setToField("set_fraction");
ROUTE1585->setToNode("Armature_OI_r_metatarsal_3");
group->addChildren(*ROUTE1585);

CROUTE* ROUTE1586 = new CROUTE();
ROUTE1586->setFromField("value_changed");
ROUTE1586->setFromNode("Armature_OI_r_metatarsal_3");
ROUTE1586->setToField("rotation");
ROUTE1586->setToNode("hanim_r_metatarsal_3");
group->addChildren(*ROUTE1586);

CROUTE* ROUTE1587 = new CROUTE();
ROUTE1587->setFromField("fraction_changed");
ROUTE1587->setFromNode("Armature_Clock");
ROUTE1587->setToField("set_fraction");
ROUTE1587->setToNode("Armature_OI_r_tarsal_proximal_phalanx_3");
group->addChildren(*ROUTE1587);

CROUTE* ROUTE1588 = new CROUTE();
ROUTE1588->setFromField("value_changed");
ROUTE1588->setFromNode("Armature_OI_r_tarsal_proximal_phalanx_3");
ROUTE1588->setToField("rotation");
ROUTE1588->setToNode("hanim_r_tarsal_proximal_phalanx_3");
group->addChildren(*ROUTE1588);

CROUTE* ROUTE1589 = new CROUTE();
ROUTE1589->setFromField("fraction_changed");
ROUTE1589->setFromNode("Armature_Clock");
ROUTE1589->setToField("set_fraction");
ROUTE1589->setToNode("Armature_OI_r_tarsal_middle_phalanx_3");
group->addChildren(*ROUTE1589);

CROUTE* ROUTE1590 = new CROUTE();
ROUTE1590->setFromField("value_changed");
ROUTE1590->setFromNode("Armature_OI_r_tarsal_middle_phalanx_3");
ROUTE1590->setToField("rotation");
ROUTE1590->setToNode("hanim_r_tarsal_middle_phalanx_3");
group->addChildren(*ROUTE1590);

CROUTE* ROUTE1591 = new CROUTE();
ROUTE1591->setFromField("fraction_changed");
ROUTE1591->setFromNode("Armature_Clock");
ROUTE1591->setToField("set_fraction");
ROUTE1591->setToNode("Armature_OI_r_tarsal_distal_phalanx_3");
group->addChildren(*ROUTE1591);

CROUTE* ROUTE1592 = new CROUTE();
ROUTE1592->setFromField("value_changed");
ROUTE1592->setFromNode("Armature_OI_r_tarsal_distal_phalanx_3");
ROUTE1592->setToField("rotation");
ROUTE1592->setToNode("hanim_r_tarsal_distal_phalanx_3");
group->addChildren(*ROUTE1592);

CROUTE* ROUTE1593 = new CROUTE();
ROUTE1593->setFromField("fraction_changed");
ROUTE1593->setFromNode("Armature_Clock");
ROUTE1593->setToField("set_fraction");
ROUTE1593->setToNode("Armature_OI_r_calcaneus");
group->addChildren(*ROUTE1593);

CROUTE* ROUTE1594 = new CROUTE();
ROUTE1594->setFromField("value_changed");
ROUTE1594->setFromNode("Armature_OI_r_calcaneus");
ROUTE1594->setToField("rotation");
ROUTE1594->setToNode("hanim_r_calcaneus");
group->addChildren(*ROUTE1594);

CROUTE* ROUTE1595 = new CROUTE();
ROUTE1595->setFromField("fraction_changed");
ROUTE1595->setFromNode("Armature_Clock");
ROUTE1595->setToField("set_fraction");
ROUTE1595->setToNode("Armature_OI_r_cuboid");
group->addChildren(*ROUTE1595);

CROUTE* ROUTE1596 = new CROUTE();
ROUTE1596->setFromField("value_changed");
ROUTE1596->setFromNode("Armature_OI_r_cuboid");
ROUTE1596->setToField("rotation");
ROUTE1596->setToNode("hanim_r_cuboid");
group->addChildren(*ROUTE1596);

CROUTE* ROUTE1597 = new CROUTE();
ROUTE1597->setFromField("fraction_changed");
ROUTE1597->setFromNode("Armature_Clock");
ROUTE1597->setToField("set_fraction");
ROUTE1597->setToNode("Armature_OI_r_metatarsal_4");
group->addChildren(*ROUTE1597);

CROUTE* ROUTE1598 = new CROUTE();
ROUTE1598->setFromField("value_changed");
ROUTE1598->setFromNode("Armature_OI_r_metatarsal_4");
ROUTE1598->setToField("rotation");
ROUTE1598->setToNode("hanim_r_metatarsal_4");
group->addChildren(*ROUTE1598);

CROUTE* ROUTE1599 = new CROUTE();
ROUTE1599->setFromField("fraction_changed");
ROUTE1599->setFromNode("Armature_Clock");
ROUTE1599->setToField("set_fraction");
ROUTE1599->setToNode("Armature_OI_r_tarsal_proximal_phalanx_4");
group->addChildren(*ROUTE1599);

CROUTE* ROUTE1600 = new CROUTE();
ROUTE1600->setFromField("value_changed");
ROUTE1600->setFromNode("Armature_OI_r_tarsal_proximal_phalanx_4");
ROUTE1600->setToField("rotation");
ROUTE1600->setToNode("hanim_r_tarsal_proximal_phalanx_4");
group->addChildren(*ROUTE1600);

CROUTE* ROUTE1601 = new CROUTE();
ROUTE1601->setFromField("fraction_changed");
ROUTE1601->setFromNode("Armature_Clock");
ROUTE1601->setToField("set_fraction");
ROUTE1601->setToNode("Armature_OI_r_tarsal_middle_phalanx_4");
group->addChildren(*ROUTE1601);

CROUTE* ROUTE1602 = new CROUTE();
ROUTE1602->setFromField("value_changed");
ROUTE1602->setFromNode("Armature_OI_r_tarsal_middle_phalanx_4");
ROUTE1602->setToField("rotation");
ROUTE1602->setToNode("hanim_r_tarsal_middle_phalanx_4");
group->addChildren(*ROUTE1602);

CROUTE* ROUTE1603 = new CROUTE();
ROUTE1603->setFromField("fraction_changed");
ROUTE1603->setFromNode("Armature_Clock");
ROUTE1603->setToField("set_fraction");
ROUTE1603->setToNode("Armature_OI_r_tarsal_distal_phalanx_4");
group->addChildren(*ROUTE1603);

CROUTE* ROUTE1604 = new CROUTE();
ROUTE1604->setFromField("value_changed");
ROUTE1604->setFromNode("Armature_OI_r_tarsal_distal_phalanx_4");
ROUTE1604->setToField("rotation");
ROUTE1604->setToNode("hanim_r_tarsal_distal_phalanx_4");
group->addChildren(*ROUTE1604);

CROUTE* ROUTE1605 = new CROUTE();
ROUTE1605->setFromField("fraction_changed");
ROUTE1605->setFromNode("Armature_Clock");
ROUTE1605->setToField("set_fraction");
ROUTE1605->setToNode("Armature_OI_r_metatarsal_5");
group->addChildren(*ROUTE1605);

CROUTE* ROUTE1606 = new CROUTE();
ROUTE1606->setFromField("value_changed");
ROUTE1606->setFromNode("Armature_OI_r_metatarsal_5");
ROUTE1606->setToField("rotation");
ROUTE1606->setToNode("hanim_r_metatarsal_5");
group->addChildren(*ROUTE1606);

CROUTE* ROUTE1607 = new CROUTE();
ROUTE1607->setFromField("fraction_changed");
ROUTE1607->setFromNode("Armature_Clock");
ROUTE1607->setToField("set_fraction");
ROUTE1607->setToNode("Armature_OI_r_tarsal_proximal_phalanx_5");
group->addChildren(*ROUTE1607);

CROUTE* ROUTE1608 = new CROUTE();
ROUTE1608->setFromField("value_changed");
ROUTE1608->setFromNode("Armature_OI_r_tarsal_proximal_phalanx_5");
ROUTE1608->setToField("rotation");
ROUTE1608->setToNode("hanim_r_tarsal_proximal_phalanx_5");
group->addChildren(*ROUTE1608);

CROUTE* ROUTE1609 = new CROUTE();
ROUTE1609->setFromField("fraction_changed");
ROUTE1609->setFromNode("Armature_Clock");
ROUTE1609->setToField("set_fraction");
ROUTE1609->setToNode("Armature_OI_r_tarsal_middle_phalanx_5");
group->addChildren(*ROUTE1609);

CROUTE* ROUTE1610 = new CROUTE();
ROUTE1610->setFromField("value_changed");
ROUTE1610->setFromNode("Armature_OI_r_tarsal_middle_phalanx_5");
ROUTE1610->setToField("rotation");
ROUTE1610->setToNode("hanim_r_tarsal_middle_phalanx_5");
group->addChildren(*ROUTE1610);

CROUTE* ROUTE1611 = new CROUTE();
ROUTE1611->setFromField("fraction_changed");
ROUTE1611->setFromNode("Armature_Clock");
ROUTE1611->setToField("set_fraction");
ROUTE1611->setToNode("Armature_OI_r_tarsal_distal_phalanx_5");
group->addChildren(*ROUTE1611);

CROUTE* ROUTE1612 = new CROUTE();
ROUTE1612->setFromField("value_changed");
ROUTE1612->setFromNode("Armature_OI_r_tarsal_distal_phalanx_5");
ROUTE1612->setToField("rotation");
ROUTE1612->setToNode("hanim_r_tarsal_distal_phalanx_5");
group->addChildren(*ROUTE1612);

CROUTE* ROUTE1613 = new CROUTE();
ROUTE1613->setFromField("fraction_changed");
ROUTE1613->setFromNode("Armature_Clock");
ROUTE1613->setToField("set_fraction");
ROUTE1613->setToNode("Armature_OI_l5");
group->addChildren(*ROUTE1613);

CROUTE* ROUTE1614 = new CROUTE();
ROUTE1614->setFromField("value_changed");
ROUTE1614->setFromNode("Armature_OI_l5");
ROUTE1614->setToField("rotation");
ROUTE1614->setToNode("hanim_l5");
group->addChildren(*ROUTE1614);

CROUTE* ROUTE1615 = new CROUTE();
ROUTE1615->setFromField("fraction_changed");
ROUTE1615->setFromNode("Armature_Clock");
ROUTE1615->setToField("set_fraction");
ROUTE1615->setToNode("Armature_OI_l4");
group->addChildren(*ROUTE1615);

CROUTE* ROUTE1616 = new CROUTE();
ROUTE1616->setFromField("value_changed");
ROUTE1616->setFromNode("Armature_OI_l4");
ROUTE1616->setToField("rotation");
ROUTE1616->setToNode("hanim_l4");
group->addChildren(*ROUTE1616);

CROUTE* ROUTE1617 = new CROUTE();
ROUTE1617->setFromField("fraction_changed");
ROUTE1617->setFromNode("Armature_Clock");
ROUTE1617->setToField("set_fraction");
ROUTE1617->setToNode("Armature_OI_l3");
group->addChildren(*ROUTE1617);

CROUTE* ROUTE1618 = new CROUTE();
ROUTE1618->setFromField("value_changed");
ROUTE1618->setFromNode("Armature_OI_l3");
ROUTE1618->setToField("rotation");
ROUTE1618->setToNode("hanim_l3");
group->addChildren(*ROUTE1618);

CROUTE* ROUTE1619 = new CROUTE();
ROUTE1619->setFromField("fraction_changed");
ROUTE1619->setFromNode("Armature_Clock");
ROUTE1619->setToField("set_fraction");
ROUTE1619->setToNode("Armature_OI_l2");
group->addChildren(*ROUTE1619);

CROUTE* ROUTE1620 = new CROUTE();
ROUTE1620->setFromField("value_changed");
ROUTE1620->setFromNode("Armature_OI_l2");
ROUTE1620->setToField("rotation");
ROUTE1620->setToNode("hanim_l2");
group->addChildren(*ROUTE1620);

CROUTE* ROUTE1621 = new CROUTE();
ROUTE1621->setFromField("fraction_changed");
ROUTE1621->setFromNode("Armature_Clock");
ROUTE1621->setToField("set_fraction");
ROUTE1621->setToNode("Armature_OI_l1");
group->addChildren(*ROUTE1621);

CROUTE* ROUTE1622 = new CROUTE();
ROUTE1622->setFromField("value_changed");
ROUTE1622->setFromNode("Armature_OI_l1");
ROUTE1622->setToField("rotation");
ROUTE1622->setToNode("hanim_l1");
group->addChildren(*ROUTE1622);

CROUTE* ROUTE1623 = new CROUTE();
ROUTE1623->setFromField("fraction_changed");
ROUTE1623->setFromNode("Armature_Clock");
ROUTE1623->setToField("set_fraction");
ROUTE1623->setToNode("Armature_OI_t12");
group->addChildren(*ROUTE1623);

CROUTE* ROUTE1624 = new CROUTE();
ROUTE1624->setFromField("value_changed");
ROUTE1624->setFromNode("Armature_OI_t12");
ROUTE1624->setToField("rotation");
ROUTE1624->setToNode("hanim_t12");
group->addChildren(*ROUTE1624);

CROUTE* ROUTE1625 = new CROUTE();
ROUTE1625->setFromField("fraction_changed");
ROUTE1625->setFromNode("Armature_Clock");
ROUTE1625->setToField("set_fraction");
ROUTE1625->setToNode("Armature_OI_t11");
group->addChildren(*ROUTE1625);

CROUTE* ROUTE1626 = new CROUTE();
ROUTE1626->setFromField("value_changed");
ROUTE1626->setFromNode("Armature_OI_t11");
ROUTE1626->setToField("rotation");
ROUTE1626->setToNode("hanim_t11");
group->addChildren(*ROUTE1626);

CROUTE* ROUTE1627 = new CROUTE();
ROUTE1627->setFromField("fraction_changed");
ROUTE1627->setFromNode("Armature_Clock");
ROUTE1627->setToField("set_fraction");
ROUTE1627->setToNode("Armature_OI_t10");
group->addChildren(*ROUTE1627);

CROUTE* ROUTE1628 = new CROUTE();
ROUTE1628->setFromField("value_changed");
ROUTE1628->setFromNode("Armature_OI_t10");
ROUTE1628->setToField("rotation");
ROUTE1628->setToNode("hanim_t10");
group->addChildren(*ROUTE1628);

CROUTE* ROUTE1629 = new CROUTE();
ROUTE1629->setFromField("fraction_changed");
ROUTE1629->setFromNode("Armature_Clock");
ROUTE1629->setToField("set_fraction");
ROUTE1629->setToNode("Armature_OI_t9");
group->addChildren(*ROUTE1629);

CROUTE* ROUTE1630 = new CROUTE();
ROUTE1630->setFromField("value_changed");
ROUTE1630->setFromNode("Armature_OI_t9");
ROUTE1630->setToField("rotation");
ROUTE1630->setToNode("hanim_t9");
group->addChildren(*ROUTE1630);

CROUTE* ROUTE1631 = new CROUTE();
ROUTE1631->setFromField("fraction_changed");
ROUTE1631->setFromNode("Armature_Clock");
ROUTE1631->setToField("set_fraction");
ROUTE1631->setToNode("Armature_OI_t8");
group->addChildren(*ROUTE1631);

CROUTE* ROUTE1632 = new CROUTE();
ROUTE1632->setFromField("value_changed");
ROUTE1632->setFromNode("Armature_OI_t8");
ROUTE1632->setToField("rotation");
ROUTE1632->setToNode("hanim_t8");
group->addChildren(*ROUTE1632);

CROUTE* ROUTE1633 = new CROUTE();
ROUTE1633->setFromField("fraction_changed");
ROUTE1633->setFromNode("Armature_Clock");
ROUTE1633->setToField("set_fraction");
ROUTE1633->setToNode("Armature_OI_t7");
group->addChildren(*ROUTE1633);

CROUTE* ROUTE1634 = new CROUTE();
ROUTE1634->setFromField("value_changed");
ROUTE1634->setFromNode("Armature_OI_t7");
ROUTE1634->setToField("rotation");
ROUTE1634->setToNode("hanim_t7");
group->addChildren(*ROUTE1634);

CROUTE* ROUTE1635 = new CROUTE();
ROUTE1635->setFromField("fraction_changed");
ROUTE1635->setFromNode("Armature_Clock");
ROUTE1635->setToField("set_fraction");
ROUTE1635->setToNode("Armature_OI_t6");
group->addChildren(*ROUTE1635);

CROUTE* ROUTE1636 = new CROUTE();
ROUTE1636->setFromField("value_changed");
ROUTE1636->setFromNode("Armature_OI_t6");
ROUTE1636->setToField("rotation");
ROUTE1636->setToNode("hanim_t6");
group->addChildren(*ROUTE1636);

CROUTE* ROUTE1637 = new CROUTE();
ROUTE1637->setFromField("fraction_changed");
ROUTE1637->setFromNode("Armature_Clock");
ROUTE1637->setToField("set_fraction");
ROUTE1637->setToNode("Armature_OI_t5");
group->addChildren(*ROUTE1637);

CROUTE* ROUTE1638 = new CROUTE();
ROUTE1638->setFromField("value_changed");
ROUTE1638->setFromNode("Armature_OI_t5");
ROUTE1638->setToField("rotation");
ROUTE1638->setToNode("hanim_t5");
group->addChildren(*ROUTE1638);

CROUTE* ROUTE1639 = new CROUTE();
ROUTE1639->setFromField("fraction_changed");
ROUTE1639->setFromNode("Armature_Clock");
ROUTE1639->setToField("set_fraction");
ROUTE1639->setToNode("Armature_OI_t4");
group->addChildren(*ROUTE1639);

CROUTE* ROUTE1640 = new CROUTE();
ROUTE1640->setFromField("value_changed");
ROUTE1640->setFromNode("Armature_OI_t4");
ROUTE1640->setToField("rotation");
ROUTE1640->setToNode("hanim_t4");
group->addChildren(*ROUTE1640);

CROUTE* ROUTE1641 = new CROUTE();
ROUTE1641->setFromField("fraction_changed");
ROUTE1641->setFromNode("Armature_Clock");
ROUTE1641->setToField("set_fraction");
ROUTE1641->setToNode("Armature_OI_t3");
group->addChildren(*ROUTE1641);

CROUTE* ROUTE1642 = new CROUTE();
ROUTE1642->setFromField("value_changed");
ROUTE1642->setFromNode("Armature_OI_t3");
ROUTE1642->setToField("rotation");
ROUTE1642->setToNode("hanim_t3");
group->addChildren(*ROUTE1642);

CROUTE* ROUTE1643 = new CROUTE();
ROUTE1643->setFromField("fraction_changed");
ROUTE1643->setFromNode("Armature_Clock");
ROUTE1643->setToField("set_fraction");
ROUTE1643->setToNode("Armature_OI_t2");
group->addChildren(*ROUTE1643);

CROUTE* ROUTE1644 = new CROUTE();
ROUTE1644->setFromField("value_changed");
ROUTE1644->setFromNode("Armature_OI_t2");
ROUTE1644->setToField("rotation");
ROUTE1644->setToNode("hanim_t2");
group->addChildren(*ROUTE1644);

CROUTE* ROUTE1645 = new CROUTE();
ROUTE1645->setFromField("fraction_changed");
ROUTE1645->setFromNode("Armature_Clock");
ROUTE1645->setToField("set_fraction");
ROUTE1645->setToNode("Armature_OI_t1");
group->addChildren(*ROUTE1645);

CROUTE* ROUTE1646 = new CROUTE();
ROUTE1646->setFromField("value_changed");
ROUTE1646->setFromNode("Armature_OI_t1");
ROUTE1646->setToField("rotation");
ROUTE1646->setToNode("hanim_t1");
group->addChildren(*ROUTE1646);

CROUTE* ROUTE1647 = new CROUTE();
ROUTE1647->setFromField("fraction_changed");
ROUTE1647->setFromNode("Armature_Clock");
ROUTE1647->setToField("set_fraction");
ROUTE1647->setToNode("Armature_OI_c7");
group->addChildren(*ROUTE1647);

CROUTE* ROUTE1648 = new CROUTE();
ROUTE1648->setFromField("value_changed");
ROUTE1648->setFromNode("Armature_OI_c7");
ROUTE1648->setToField("rotation");
ROUTE1648->setToNode("hanim_c7");
group->addChildren(*ROUTE1648);

CROUTE* ROUTE1649 = new CROUTE();
ROUTE1649->setFromField("fraction_changed");
ROUTE1649->setFromNode("Armature_Clock");
ROUTE1649->setToField("set_fraction");
ROUTE1649->setToNode("Armature_OI_c6");
group->addChildren(*ROUTE1649);

CROUTE* ROUTE1650 = new CROUTE();
ROUTE1650->setFromField("value_changed");
ROUTE1650->setFromNode("Armature_OI_c6");
ROUTE1650->setToField("rotation");
ROUTE1650->setToNode("hanim_c6");
group->addChildren(*ROUTE1650);

CROUTE* ROUTE1651 = new CROUTE();
ROUTE1651->setFromField("fraction_changed");
ROUTE1651->setFromNode("Armature_Clock");
ROUTE1651->setToField("set_fraction");
ROUTE1651->setToNode("Armature_OI_c5");
group->addChildren(*ROUTE1651);

CROUTE* ROUTE1652 = new CROUTE();
ROUTE1652->setFromField("value_changed");
ROUTE1652->setFromNode("Armature_OI_c5");
ROUTE1652->setToField("rotation");
ROUTE1652->setToNode("hanim_c5");
group->addChildren(*ROUTE1652);

CROUTE* ROUTE1653 = new CROUTE();
ROUTE1653->setFromField("fraction_changed");
ROUTE1653->setFromNode("Armature_Clock");
ROUTE1653->setToField("set_fraction");
ROUTE1653->setToNode("Armature_OI_c4");
group->addChildren(*ROUTE1653);

CROUTE* ROUTE1654 = new CROUTE();
ROUTE1654->setFromField("value_changed");
ROUTE1654->setFromNode("Armature_OI_c4");
ROUTE1654->setToField("rotation");
ROUTE1654->setToNode("hanim_c4");
group->addChildren(*ROUTE1654);

CROUTE* ROUTE1655 = new CROUTE();
ROUTE1655->setFromField("fraction_changed");
ROUTE1655->setFromNode("Armature_Clock");
ROUTE1655->setToField("set_fraction");
ROUTE1655->setToNode("Armature_OI_c3");
group->addChildren(*ROUTE1655);

CROUTE* ROUTE1656 = new CROUTE();
ROUTE1656->setFromField("value_changed");
ROUTE1656->setFromNode("Armature_OI_c3");
ROUTE1656->setToField("rotation");
ROUTE1656->setToNode("hanim_c3");
group->addChildren(*ROUTE1656);

CROUTE* ROUTE1657 = new CROUTE();
ROUTE1657->setFromField("fraction_changed");
ROUTE1657->setFromNode("Armature_Clock");
ROUTE1657->setToField("set_fraction");
ROUTE1657->setToNode("Armature_OI_c2");
group->addChildren(*ROUTE1657);

CROUTE* ROUTE1658 = new CROUTE();
ROUTE1658->setFromField("value_changed");
ROUTE1658->setFromNode("Armature_OI_c2");
ROUTE1658->setToField("rotation");
ROUTE1658->setToNode("hanim_c2");
group->addChildren(*ROUTE1658);

CROUTE* ROUTE1659 = new CROUTE();
ROUTE1659->setFromField("fraction_changed");
ROUTE1659->setFromNode("Armature_Clock");
ROUTE1659->setToField("set_fraction");
ROUTE1659->setToNode("Armature_OI_c1");
group->addChildren(*ROUTE1659);

CROUTE* ROUTE1660 = new CROUTE();
ROUTE1660->setFromField("value_changed");
ROUTE1660->setFromNode("Armature_OI_c1");
ROUTE1660->setToField("rotation");
ROUTE1660->setToNode("hanim_c1");
group->addChildren(*ROUTE1660);

CROUTE* ROUTE1661 = new CROUTE();
ROUTE1661->setFromField("fraction_changed");
ROUTE1661->setFromNode("Armature_Clock");
ROUTE1661->setToField("set_fraction");
ROUTE1661->setToNode("Armature_OI_skull");
group->addChildren(*ROUTE1661);

CROUTE* ROUTE1662 = new CROUTE();
ROUTE1662->setFromField("value_changed");
ROUTE1662->setFromNode("Armature_OI_skull");
ROUTE1662->setToField("rotation");
ROUTE1662->setToNode("hanim_skull");
group->addChildren(*ROUTE1662);

CROUTE* ROUTE1663 = new CROUTE();
ROUTE1663->setFromField("fraction_changed");
ROUTE1663->setFromNode("Armature_Clock");
ROUTE1663->setToField("set_fraction");
ROUTE1663->setToNode("Armature_OI_l_eyelid");
group->addChildren(*ROUTE1663);

CROUTE* ROUTE1664 = new CROUTE();
ROUTE1664->setFromField("value_changed");
ROUTE1664->setFromNode("Armature_OI_l_eyelid");
ROUTE1664->setToField("rotation");
ROUTE1664->setToNode("hanim_l_eyelid");
group->addChildren(*ROUTE1664);

CROUTE* ROUTE1665 = new CROUTE();
ROUTE1665->setFromField("fraction_changed");
ROUTE1665->setFromNode("Armature_Clock");
ROUTE1665->setToField("set_fraction");
ROUTE1665->setToNode("Armature_OI_r_eyelid");
group->addChildren(*ROUTE1665);

CROUTE* ROUTE1666 = new CROUTE();
ROUTE1666->setFromField("value_changed");
ROUTE1666->setFromNode("Armature_OI_r_eyelid");
ROUTE1666->setToField("rotation");
ROUTE1666->setToNode("hanim_r_eyelid");
group->addChildren(*ROUTE1666);

CROUTE* ROUTE1667 = new CROUTE();
ROUTE1667->setFromField("fraction_changed");
ROUTE1667->setFromNode("Armature_Clock");
ROUTE1667->setToField("set_fraction");
ROUTE1667->setToNode("Armature_OI_l_eyeball");
group->addChildren(*ROUTE1667);

CROUTE* ROUTE1668 = new CROUTE();
ROUTE1668->setFromField("value_changed");
ROUTE1668->setFromNode("Armature_OI_l_eyeball");
ROUTE1668->setToField("rotation");
ROUTE1668->setToNode("hanim_l_eyeball");
group->addChildren(*ROUTE1668);

CROUTE* ROUTE1669 = new CROUTE();
ROUTE1669->setFromField("fraction_changed");
ROUTE1669->setFromNode("Armature_Clock");
ROUTE1669->setToField("set_fraction");
ROUTE1669->setToNode("Armature_OI_r_eyeball");
group->addChildren(*ROUTE1669);

CROUTE* ROUTE1670 = new CROUTE();
ROUTE1670->setFromField("value_changed");
ROUTE1670->setFromNode("Armature_OI_r_eyeball");
ROUTE1670->setToField("rotation");
ROUTE1670->setToNode("hanim_r_eyeball");
group->addChildren(*ROUTE1670);

CROUTE* ROUTE1671 = new CROUTE();
ROUTE1671->setFromField("fraction_changed");
ROUTE1671->setFromNode("Armature_Clock");
ROUTE1671->setToField("set_fraction");
ROUTE1671->setToNode("Armature_OI_l_eyebrow");
group->addChildren(*ROUTE1671);

CROUTE* ROUTE1672 = new CROUTE();
ROUTE1672->setFromField("value_changed");
ROUTE1672->setFromNode("Armature_OI_l_eyebrow");
ROUTE1672->setToField("rotation");
ROUTE1672->setToNode("hanim_l_eyebrow");
group->addChildren(*ROUTE1672);

CROUTE* ROUTE1673 = new CROUTE();
ROUTE1673->setFromField("fraction_changed");
ROUTE1673->setFromNode("Armature_Clock");
ROUTE1673->setToField("set_fraction");
ROUTE1673->setToNode("Armature_OI_r_eyebrow");
group->addChildren(*ROUTE1673);

CROUTE* ROUTE1674 = new CROUTE();
ROUTE1674->setFromField("value_changed");
ROUTE1674->setFromNode("Armature_OI_r_eyebrow");
ROUTE1674->setToField("rotation");
ROUTE1674->setToNode("hanim_r_eyebrow");
group->addChildren(*ROUTE1674);

CROUTE* ROUTE1675 = new CROUTE();
ROUTE1675->setFromField("fraction_changed");
ROUTE1675->setFromNode("Armature_Clock");
ROUTE1675->setToField("set_fraction");
ROUTE1675->setToNode("Armature_OI_jaw");
group->addChildren(*ROUTE1675);

CROUTE* ROUTE1676 = new CROUTE();
ROUTE1676->setFromField("value_changed");
ROUTE1676->setFromNode("Armature_OI_jaw");
ROUTE1676->setToField("rotation");
ROUTE1676->setToNode("hanim_jaw");
group->addChildren(*ROUTE1676);

CROUTE* ROUTE1677 = new CROUTE();
ROUTE1677->setFromField("fraction_changed");
ROUTE1677->setFromNode("Armature_Clock");
ROUTE1677->setToField("set_fraction");
ROUTE1677->setToNode("Armature_OI_l_clavicle");
group->addChildren(*ROUTE1677);

CROUTE* ROUTE1678 = new CROUTE();
ROUTE1678->setFromField("value_changed");
ROUTE1678->setFromNode("Armature_OI_l_clavicle");
ROUTE1678->setToField("rotation");
ROUTE1678->setToNode("hanim_l_clavicle");
group->addChildren(*ROUTE1678);

CROUTE* ROUTE1679 = new CROUTE();
ROUTE1679->setFromField("fraction_changed");
ROUTE1679->setFromNode("Armature_Clock");
ROUTE1679->setToField("set_fraction");
ROUTE1679->setToNode("Armature_OI_l_scapula");
group->addChildren(*ROUTE1679);

CROUTE* ROUTE1680 = new CROUTE();
ROUTE1680->setFromField("value_changed");
ROUTE1680->setFromNode("Armature_OI_l_scapula");
ROUTE1680->setToField("rotation");
ROUTE1680->setToNode("hanim_l_scapula");
group->addChildren(*ROUTE1680);

CROUTE* ROUTE1681 = new CROUTE();
ROUTE1681->setFromField("fraction_changed");
ROUTE1681->setFromNode("Armature_Clock");
ROUTE1681->setToField("set_fraction");
ROUTE1681->setToNode("Armature_OI_l_upperarm");
group->addChildren(*ROUTE1681);

CROUTE* ROUTE1682 = new CROUTE();
ROUTE1682->setFromField("value_changed");
ROUTE1682->setFromNode("Armature_OI_l_upperarm");
ROUTE1682->setToField("rotation");
ROUTE1682->setToNode("hanim_l_upperarm");
group->addChildren(*ROUTE1682);

CROUTE* ROUTE1683 = new CROUTE();
ROUTE1683->setFromField("fraction_changed");
ROUTE1683->setFromNode("Armature_Clock");
ROUTE1683->setToField("set_fraction");
ROUTE1683->setToNode("Armature_OI_l_forearm");
group->addChildren(*ROUTE1683);

CROUTE* ROUTE1684 = new CROUTE();
ROUTE1684->setFromField("value_changed");
ROUTE1684->setFromNode("Armature_OI_l_forearm");
ROUTE1684->setToField("rotation");
ROUTE1684->setToNode("hanim_l_forearm");
group->addChildren(*ROUTE1684);

CROUTE* ROUTE1685 = new CROUTE();
ROUTE1685->setFromField("fraction_changed");
ROUTE1685->setFromNode("Armature_Clock");
ROUTE1685->setToField("set_fraction");
ROUTE1685->setToNode("Armature_OI_l_carpal");
group->addChildren(*ROUTE1685);

CROUTE* ROUTE1686 = new CROUTE();
ROUTE1686->setFromField("value_changed");
ROUTE1686->setFromNode("Armature_OI_l_carpal");
ROUTE1686->setToField("rotation");
ROUTE1686->setToNode("hanim_l_carpal");
group->addChildren(*ROUTE1686);

CROUTE* ROUTE1687 = new CROUTE();
ROUTE1687->setFromField("fraction_changed");
ROUTE1687->setFromNode("Armature_Clock");
ROUTE1687->setToField("set_fraction");
ROUTE1687->setToNode("Armature_OI_l_trapezium");
group->addChildren(*ROUTE1687);

CROUTE* ROUTE1688 = new CROUTE();
ROUTE1688->setFromField("value_changed");
ROUTE1688->setFromNode("Armature_OI_l_trapezium");
ROUTE1688->setToField("rotation");
ROUTE1688->setToNode("hanim_l_trapezium");
group->addChildren(*ROUTE1688);

CROUTE* ROUTE1689 = new CROUTE();
ROUTE1689->setFromField("fraction_changed");
ROUTE1689->setFromNode("Armature_Clock");
ROUTE1689->setToField("set_fraction");
ROUTE1689->setToNode("Armature_OI_l_metacarpal_1");
group->addChildren(*ROUTE1689);

CROUTE* ROUTE1690 = new CROUTE();
ROUTE1690->setFromField("value_changed");
ROUTE1690->setFromNode("Armature_OI_l_metacarpal_1");
ROUTE1690->setToField("rotation");
ROUTE1690->setToNode("hanim_l_metacarpal_1");
group->addChildren(*ROUTE1690);

CROUTE* ROUTE1691 = new CROUTE();
ROUTE1691->setFromField("fraction_changed");
ROUTE1691->setFromNode("Armature_Clock");
ROUTE1691->setToField("set_fraction");
ROUTE1691->setToNode("Armature_OI_l_carpal_proximal_phalanx_1");
group->addChildren(*ROUTE1691);

CROUTE* ROUTE1692 = new CROUTE();
ROUTE1692->setFromField("value_changed");
ROUTE1692->setFromNode("Armature_OI_l_carpal_proximal_phalanx_1");
ROUTE1692->setToField("rotation");
ROUTE1692->setToNode("hanim_l_carpal_proximal_phalanx_1");
group->addChildren(*ROUTE1692);

CROUTE* ROUTE1693 = new CROUTE();
ROUTE1693->setFromField("fraction_changed");
ROUTE1693->setFromNode("Armature_Clock");
ROUTE1693->setToField("set_fraction");
ROUTE1693->setToNode("Armature_OI_l_carpal_distal_phalanx_1");
group->addChildren(*ROUTE1693);

CROUTE* ROUTE1694 = new CROUTE();
ROUTE1694->setFromField("value_changed");
ROUTE1694->setFromNode("Armature_OI_l_carpal_distal_phalanx_1");
ROUTE1694->setToField("rotation");
ROUTE1694->setToNode("hanim_l_carpal_distal_phalanx_1");
group->addChildren(*ROUTE1694);

CROUTE* ROUTE1695 = new CROUTE();
ROUTE1695->setFromField("fraction_changed");
ROUTE1695->setFromNode("Armature_Clock");
ROUTE1695->setToField("set_fraction");
ROUTE1695->setToNode("Armature_OI_l_trapezoid");
group->addChildren(*ROUTE1695);

CROUTE* ROUTE1696 = new CROUTE();
ROUTE1696->setFromField("value_changed");
ROUTE1696->setFromNode("Armature_OI_l_trapezoid");
ROUTE1696->setToField("rotation");
ROUTE1696->setToNode("hanim_l_trapezoid");
group->addChildren(*ROUTE1696);

CROUTE* ROUTE1697 = new CROUTE();
ROUTE1697->setFromField("fraction_changed");
ROUTE1697->setFromNode("Armature_Clock");
ROUTE1697->setToField("set_fraction");
ROUTE1697->setToNode("Armature_OI_l_metacarpal_2");
group->addChildren(*ROUTE1697);

CROUTE* ROUTE1698 = new CROUTE();
ROUTE1698->setFromField("value_changed");
ROUTE1698->setFromNode("Armature_OI_l_metacarpal_2");
ROUTE1698->setToField("rotation");
ROUTE1698->setToNode("hanim_l_metacarpal_2");
group->addChildren(*ROUTE1698);

CROUTE* ROUTE1699 = new CROUTE();
ROUTE1699->setFromField("fraction_changed");
ROUTE1699->setFromNode("Armature_Clock");
ROUTE1699->setToField("set_fraction");
ROUTE1699->setToNode("Armature_OI_l_carpal_proximal_phalanx_2");
group->addChildren(*ROUTE1699);

CROUTE* ROUTE1700 = new CROUTE();
ROUTE1700->setFromField("value_changed");
ROUTE1700->setFromNode("Armature_OI_l_carpal_proximal_phalanx_2");
ROUTE1700->setToField("rotation");
ROUTE1700->setToNode("hanim_l_carpal_proximal_phalanx_2");
group->addChildren(*ROUTE1700);

CROUTE* ROUTE1701 = new CROUTE();
ROUTE1701->setFromField("fraction_changed");
ROUTE1701->setFromNode("Armature_Clock");
ROUTE1701->setToField("set_fraction");
ROUTE1701->setToNode("Armature_OI_l_carpal_middle_phalanx_2");
group->addChildren(*ROUTE1701);

CROUTE* ROUTE1702 = new CROUTE();
ROUTE1702->setFromField("value_changed");
ROUTE1702->setFromNode("Armature_OI_l_carpal_middle_phalanx_2");
ROUTE1702->setToField("rotation");
ROUTE1702->setToNode("hanim_l_carpal_middle_phalanx_2");
group->addChildren(*ROUTE1702);

CROUTE* ROUTE1703 = new CROUTE();
ROUTE1703->setFromField("fraction_changed");
ROUTE1703->setFromNode("Armature_Clock");
ROUTE1703->setToField("set_fraction");
ROUTE1703->setToNode("Armature_OI_l_carpal_distal_phalanx_2");
group->addChildren(*ROUTE1703);

CROUTE* ROUTE1704 = new CROUTE();
ROUTE1704->setFromField("value_changed");
ROUTE1704->setFromNode("Armature_OI_l_carpal_distal_phalanx_2");
ROUTE1704->setToField("rotation");
ROUTE1704->setToNode("hanim_l_carpal_distal_phalanx_2");
group->addChildren(*ROUTE1704);

CROUTE* ROUTE1705 = new CROUTE();
ROUTE1705->setFromField("fraction_changed");
ROUTE1705->setFromNode("Armature_Clock");
ROUTE1705->setToField("set_fraction");
ROUTE1705->setToNode("Armature_OI_l_capitate");
group->addChildren(*ROUTE1705);

CROUTE* ROUTE1706 = new CROUTE();
ROUTE1706->setFromField("value_changed");
ROUTE1706->setFromNode("Armature_OI_l_capitate");
ROUTE1706->setToField("rotation");
ROUTE1706->setToNode("hanim_l_capitate");
group->addChildren(*ROUTE1706);

CROUTE* ROUTE1707 = new CROUTE();
ROUTE1707->setFromField("fraction_changed");
ROUTE1707->setFromNode("Armature_Clock");
ROUTE1707->setToField("set_fraction");
ROUTE1707->setToNode("Armature_OI_l_metacarpal_3");
group->addChildren(*ROUTE1707);

CROUTE* ROUTE1708 = new CROUTE();
ROUTE1708->setFromField("value_changed");
ROUTE1708->setFromNode("Armature_OI_l_metacarpal_3");
ROUTE1708->setToField("rotation");
ROUTE1708->setToNode("hanim_l_metacarpal_3");
group->addChildren(*ROUTE1708);

CROUTE* ROUTE1709 = new CROUTE();
ROUTE1709->setFromField("fraction_changed");
ROUTE1709->setFromNode("Armature_Clock");
ROUTE1709->setToField("set_fraction");
ROUTE1709->setToNode("Armature_OI_l_carpal_proximal_phalanx_3");
group->addChildren(*ROUTE1709);

CROUTE* ROUTE1710 = new CROUTE();
ROUTE1710->setFromField("value_changed");
ROUTE1710->setFromNode("Armature_OI_l_carpal_proximal_phalanx_3");
ROUTE1710->setToField("rotation");
ROUTE1710->setToNode("hanim_l_carpal_proximal_phalanx_3");
group->addChildren(*ROUTE1710);

CROUTE* ROUTE1711 = new CROUTE();
ROUTE1711->setFromField("fraction_changed");
ROUTE1711->setFromNode("Armature_Clock");
ROUTE1711->setToField("set_fraction");
ROUTE1711->setToNode("Armature_OI_l_carpal_middle_phalanx_3");
group->addChildren(*ROUTE1711);

CROUTE* ROUTE1712 = new CROUTE();
ROUTE1712->setFromField("value_changed");
ROUTE1712->setFromNode("Armature_OI_l_carpal_middle_phalanx_3");
ROUTE1712->setToField("rotation");
ROUTE1712->setToNode("hanim_l_carpal_middle_phalanx_3");
group->addChildren(*ROUTE1712);

CROUTE* ROUTE1713 = new CROUTE();
ROUTE1713->setFromField("fraction_changed");
ROUTE1713->setFromNode("Armature_Clock");
ROUTE1713->setToField("set_fraction");
ROUTE1713->setToNode("Armature_OI_l_carpal_distal_phalanx_3");
group->addChildren(*ROUTE1713);

CROUTE* ROUTE1714 = new CROUTE();
ROUTE1714->setFromField("value_changed");
ROUTE1714->setFromNode("Armature_OI_l_carpal_distal_phalanx_3");
ROUTE1714->setToField("rotation");
ROUTE1714->setToNode("hanim_l_carpal_distal_phalanx_3");
group->addChildren(*ROUTE1714);

CROUTE* ROUTE1715 = new CROUTE();
ROUTE1715->setFromField("fraction_changed");
ROUTE1715->setFromNode("Armature_Clock");
ROUTE1715->setToField("set_fraction");
ROUTE1715->setToNode("Armature_OI_l_hamate");
group->addChildren(*ROUTE1715);

CROUTE* ROUTE1716 = new CROUTE();
ROUTE1716->setFromField("value_changed");
ROUTE1716->setFromNode("Armature_OI_l_hamate");
ROUTE1716->setToField("rotation");
ROUTE1716->setToNode("hanim_l_hamate");
group->addChildren(*ROUTE1716);

CROUTE* ROUTE1717 = new CROUTE();
ROUTE1717->setFromField("fraction_changed");
ROUTE1717->setFromNode("Armature_Clock");
ROUTE1717->setToField("set_fraction");
ROUTE1717->setToNode("Armature_OI_l_metacarpal_4");
group->addChildren(*ROUTE1717);

CROUTE* ROUTE1718 = new CROUTE();
ROUTE1718->setFromField("value_changed");
ROUTE1718->setFromNode("Armature_OI_l_metacarpal_4");
ROUTE1718->setToField("rotation");
ROUTE1718->setToNode("hanim_l_metacarpal_4");
group->addChildren(*ROUTE1718);

CROUTE* ROUTE1719 = new CROUTE();
ROUTE1719->setFromField("fraction_changed");
ROUTE1719->setFromNode("Armature_Clock");
ROUTE1719->setToField("set_fraction");
ROUTE1719->setToNode("Armature_OI_l_carpal_proximal_phalanx_4");
group->addChildren(*ROUTE1719);

CROUTE* ROUTE1720 = new CROUTE();
ROUTE1720->setFromField("value_changed");
ROUTE1720->setFromNode("Armature_OI_l_carpal_proximal_phalanx_4");
ROUTE1720->setToField("rotation");
ROUTE1720->setToNode("hanim_l_carpal_proximal_phalanx_4");
group->addChildren(*ROUTE1720);

CROUTE* ROUTE1721 = new CROUTE();
ROUTE1721->setFromField("fraction_changed");
ROUTE1721->setFromNode("Armature_Clock");
ROUTE1721->setToField("set_fraction");
ROUTE1721->setToNode("Armature_OI_l_carpal_middle_phalanx_4");
group->addChildren(*ROUTE1721);

CROUTE* ROUTE1722 = new CROUTE();
ROUTE1722->setFromField("value_changed");
ROUTE1722->setFromNode("Armature_OI_l_carpal_middle_phalanx_4");
ROUTE1722->setToField("rotation");
ROUTE1722->setToNode("hanim_l_carpal_middle_phalanx_4");
group->addChildren(*ROUTE1722);

CROUTE* ROUTE1723 = new CROUTE();
ROUTE1723->setFromField("fraction_changed");
ROUTE1723->setFromNode("Armature_Clock");
ROUTE1723->setToField("set_fraction");
ROUTE1723->setToNode("Armature_OI_l_carpal_distal_phalanx_4");
group->addChildren(*ROUTE1723);

CROUTE* ROUTE1724 = new CROUTE();
ROUTE1724->setFromField("value_changed");
ROUTE1724->setFromNode("Armature_OI_l_carpal_distal_phalanx_4");
ROUTE1724->setToField("rotation");
ROUTE1724->setToNode("hanim_l_carpal_distal_phalanx_4");
group->addChildren(*ROUTE1724);

CROUTE* ROUTE1725 = new CROUTE();
ROUTE1725->setFromField("fraction_changed");
ROUTE1725->setFromNode("Armature_Clock");
ROUTE1725->setToField("set_fraction");
ROUTE1725->setToNode("Armature_OI_l_metacarpal_5");
group->addChildren(*ROUTE1725);

CROUTE* ROUTE1726 = new CROUTE();
ROUTE1726->setFromField("value_changed");
ROUTE1726->setFromNode("Armature_OI_l_metacarpal_5");
ROUTE1726->setToField("rotation");
ROUTE1726->setToNode("hanim_l_metacarpal_5");
group->addChildren(*ROUTE1726);

CROUTE* ROUTE1727 = new CROUTE();
ROUTE1727->setFromField("fraction_changed");
ROUTE1727->setFromNode("Armature_Clock");
ROUTE1727->setToField("set_fraction");
ROUTE1727->setToNode("Armature_OI_l_carpal_proximal_phalanx_5");
group->addChildren(*ROUTE1727);

CROUTE* ROUTE1728 = new CROUTE();
ROUTE1728->setFromField("value_changed");
ROUTE1728->setFromNode("Armature_OI_l_carpal_proximal_phalanx_5");
ROUTE1728->setToField("rotation");
ROUTE1728->setToNode("hanim_l_carpal_proximal_phalanx_5");
group->addChildren(*ROUTE1728);

CROUTE* ROUTE1729 = new CROUTE();
ROUTE1729->setFromField("fraction_changed");
ROUTE1729->setFromNode("Armature_Clock");
ROUTE1729->setToField("set_fraction");
ROUTE1729->setToNode("Armature_OI_l_carpal_middle_phalanx_5");
group->addChildren(*ROUTE1729);

CROUTE* ROUTE1730 = new CROUTE();
ROUTE1730->setFromField("value_changed");
ROUTE1730->setFromNode("Armature_OI_l_carpal_middle_phalanx_5");
ROUTE1730->setToField("rotation");
ROUTE1730->setToNode("hanim_l_carpal_middle_phalanx_5");
group->addChildren(*ROUTE1730);

CROUTE* ROUTE1731 = new CROUTE();
ROUTE1731->setFromField("fraction_changed");
ROUTE1731->setFromNode("Armature_Clock");
ROUTE1731->setToField("set_fraction");
ROUTE1731->setToNode("Armature_OI_l_carpal_distal_phalanx_5");
group->addChildren(*ROUTE1731);

CROUTE* ROUTE1732 = new CROUTE();
ROUTE1732->setFromField("value_changed");
ROUTE1732->setFromNode("Armature_OI_l_carpal_distal_phalanx_5");
ROUTE1732->setToField("rotation");
ROUTE1732->setToNode("hanim_l_carpal_distal_phalanx_5");
group->addChildren(*ROUTE1732);

CROUTE* ROUTE1733 = new CROUTE();
ROUTE1733->setFromField("fraction_changed");
ROUTE1733->setFromNode("Armature_Clock");
ROUTE1733->setToField("set_fraction");
ROUTE1733->setToNode("Armature_OI_r_clavicle");
group->addChildren(*ROUTE1733);

CROUTE* ROUTE1734 = new CROUTE();
ROUTE1734->setFromField("value_changed");
ROUTE1734->setFromNode("Armature_OI_r_clavicle");
ROUTE1734->setToField("rotation");
ROUTE1734->setToNode("hanim_r_clavicle");
group->addChildren(*ROUTE1734);

CROUTE* ROUTE1735 = new CROUTE();
ROUTE1735->setFromField("fraction_changed");
ROUTE1735->setFromNode("Armature_Clock");
ROUTE1735->setToField("set_fraction");
ROUTE1735->setToNode("Armature_OI_r_scapula");
group->addChildren(*ROUTE1735);

CROUTE* ROUTE1736 = new CROUTE();
ROUTE1736->setFromField("value_changed");
ROUTE1736->setFromNode("Armature_OI_r_scapula");
ROUTE1736->setToField("rotation");
ROUTE1736->setToNode("hanim_r_scapula");
group->addChildren(*ROUTE1736);

CROUTE* ROUTE1737 = new CROUTE();
ROUTE1737->setFromField("fraction_changed");
ROUTE1737->setFromNode("Armature_Clock");
ROUTE1737->setToField("set_fraction");
ROUTE1737->setToNode("Armature_OI_r_upperarm");
group->addChildren(*ROUTE1737);

CROUTE* ROUTE1738 = new CROUTE();
ROUTE1738->setFromField("value_changed");
ROUTE1738->setFromNode("Armature_OI_r_upperarm");
ROUTE1738->setToField("rotation");
ROUTE1738->setToNode("hanim_r_upperarm");
group->addChildren(*ROUTE1738);

CROUTE* ROUTE1739 = new CROUTE();
ROUTE1739->setFromField("fraction_changed");
ROUTE1739->setFromNode("Armature_Clock");
ROUTE1739->setToField("set_fraction");
ROUTE1739->setToNode("Armature_OI_r_forearm");
group->addChildren(*ROUTE1739);

CROUTE* ROUTE1740 = new CROUTE();
ROUTE1740->setFromField("value_changed");
ROUTE1740->setFromNode("Armature_OI_r_forearm");
ROUTE1740->setToField("rotation");
ROUTE1740->setToNode("hanim_r_forearm");
group->addChildren(*ROUTE1740);

CROUTE* ROUTE1741 = new CROUTE();
ROUTE1741->setFromField("fraction_changed");
ROUTE1741->setFromNode("Armature_Clock");
ROUTE1741->setToField("set_fraction");
ROUTE1741->setToNode("Armature_OI_r_carpal");
group->addChildren(*ROUTE1741);

CROUTE* ROUTE1742 = new CROUTE();
ROUTE1742->setFromField("value_changed");
ROUTE1742->setFromNode("Armature_OI_r_carpal");
ROUTE1742->setToField("rotation");
ROUTE1742->setToNode("hanim_r_carpal");
group->addChildren(*ROUTE1742);

CROUTE* ROUTE1743 = new CROUTE();
ROUTE1743->setFromField("fraction_changed");
ROUTE1743->setFromNode("Armature_Clock");
ROUTE1743->setToField("set_fraction");
ROUTE1743->setToNode("Armature_OI_r_trapezium");
group->addChildren(*ROUTE1743);

CROUTE* ROUTE1744 = new CROUTE();
ROUTE1744->setFromField("value_changed");
ROUTE1744->setFromNode("Armature_OI_r_trapezium");
ROUTE1744->setToField("rotation");
ROUTE1744->setToNode("hanim_r_trapezium");
group->addChildren(*ROUTE1744);

CROUTE* ROUTE1745 = new CROUTE();
ROUTE1745->setFromField("fraction_changed");
ROUTE1745->setFromNode("Armature_Clock");
ROUTE1745->setToField("set_fraction");
ROUTE1745->setToNode("Armature_OI_r_metacarpal_1");
group->addChildren(*ROUTE1745);

CROUTE* ROUTE1746 = new CROUTE();
ROUTE1746->setFromField("value_changed");
ROUTE1746->setFromNode("Armature_OI_r_metacarpal_1");
ROUTE1746->setToField("rotation");
ROUTE1746->setToNode("hanim_r_metacarpal_1");
group->addChildren(*ROUTE1746);

CROUTE* ROUTE1747 = new CROUTE();
ROUTE1747->setFromField("fraction_changed");
ROUTE1747->setFromNode("Armature_Clock");
ROUTE1747->setToField("set_fraction");
ROUTE1747->setToNode("Armature_OI_r_carpal_proximal_phalanx_1");
group->addChildren(*ROUTE1747);

CROUTE* ROUTE1748 = new CROUTE();
ROUTE1748->setFromField("value_changed");
ROUTE1748->setFromNode("Armature_OI_r_carpal_proximal_phalanx_1");
ROUTE1748->setToField("rotation");
ROUTE1748->setToNode("hanim_r_carpal_proximal_phalanx_1");
group->addChildren(*ROUTE1748);

CROUTE* ROUTE1749 = new CROUTE();
ROUTE1749->setFromField("fraction_changed");
ROUTE1749->setFromNode("Armature_Clock");
ROUTE1749->setToField("set_fraction");
ROUTE1749->setToNode("Armature_OI_r_carpal_distal_phalanx_1");
group->addChildren(*ROUTE1749);

CROUTE* ROUTE1750 = new CROUTE();
ROUTE1750->setFromField("value_changed");
ROUTE1750->setFromNode("Armature_OI_r_carpal_distal_phalanx_1");
ROUTE1750->setToField("rotation");
ROUTE1750->setToNode("hanim_r_carpal_distal_phalanx_1");
group->addChildren(*ROUTE1750);

CROUTE* ROUTE1751 = new CROUTE();
ROUTE1751->setFromField("fraction_changed");
ROUTE1751->setFromNode("Armature_Clock");
ROUTE1751->setToField("set_fraction");
ROUTE1751->setToNode("Armature_OI_r_trapezoid");
group->addChildren(*ROUTE1751);

CROUTE* ROUTE1752 = new CROUTE();
ROUTE1752->setFromField("value_changed");
ROUTE1752->setFromNode("Armature_OI_r_trapezoid");
ROUTE1752->setToField("rotation");
ROUTE1752->setToNode("hanim_r_trapezoid");
group->addChildren(*ROUTE1752);

CROUTE* ROUTE1753 = new CROUTE();
ROUTE1753->setFromField("fraction_changed");
ROUTE1753->setFromNode("Armature_Clock");
ROUTE1753->setToField("set_fraction");
ROUTE1753->setToNode("Armature_OI_r_metacarpal_2");
group->addChildren(*ROUTE1753);

CROUTE* ROUTE1754 = new CROUTE();
ROUTE1754->setFromField("value_changed");
ROUTE1754->setFromNode("Armature_OI_r_metacarpal_2");
ROUTE1754->setToField("rotation");
ROUTE1754->setToNode("hanim_r_metacarpal_2");
group->addChildren(*ROUTE1754);

CROUTE* ROUTE1755 = new CROUTE();
ROUTE1755->setFromField("fraction_changed");
ROUTE1755->setFromNode("Armature_Clock");
ROUTE1755->setToField("set_fraction");
ROUTE1755->setToNode("Armature_OI_r_carpal_proximal_phalanx_2");
group->addChildren(*ROUTE1755);

CROUTE* ROUTE1756 = new CROUTE();
ROUTE1756->setFromField("value_changed");
ROUTE1756->setFromNode("Armature_OI_r_carpal_proximal_phalanx_2");
ROUTE1756->setToField("rotation");
ROUTE1756->setToNode("hanim_r_carpal_proximal_phalanx_2");
group->addChildren(*ROUTE1756);

CROUTE* ROUTE1757 = new CROUTE();
ROUTE1757->setFromField("fraction_changed");
ROUTE1757->setFromNode("Armature_Clock");
ROUTE1757->setToField("set_fraction");
ROUTE1757->setToNode("Armature_OI_r_carpal_middle_phalanx_2");
group->addChildren(*ROUTE1757);

CROUTE* ROUTE1758 = new CROUTE();
ROUTE1758->setFromField("value_changed");
ROUTE1758->setFromNode("Armature_OI_r_carpal_middle_phalanx_2");
ROUTE1758->setToField("rotation");
ROUTE1758->setToNode("hanim_r_carpal_middle_phalanx_2");
group->addChildren(*ROUTE1758);

CROUTE* ROUTE1759 = new CROUTE();
ROUTE1759->setFromField("fraction_changed");
ROUTE1759->setFromNode("Armature_Clock");
ROUTE1759->setToField("set_fraction");
ROUTE1759->setToNode("Armature_OI_r_carpal_distal_phalanx_2");
group->addChildren(*ROUTE1759);

CROUTE* ROUTE1760 = new CROUTE();
ROUTE1760->setFromField("value_changed");
ROUTE1760->setFromNode("Armature_OI_r_carpal_distal_phalanx_2");
ROUTE1760->setToField("rotation");
ROUTE1760->setToNode("hanim_r_carpal_distal_phalanx_2");
group->addChildren(*ROUTE1760);

CROUTE* ROUTE1761 = new CROUTE();
ROUTE1761->setFromField("fraction_changed");
ROUTE1761->setFromNode("Armature_Clock");
ROUTE1761->setToField("set_fraction");
ROUTE1761->setToNode("Armature_OI_r_capitate");
group->addChildren(*ROUTE1761);

CROUTE* ROUTE1762 = new CROUTE();
ROUTE1762->setFromField("value_changed");
ROUTE1762->setFromNode("Armature_OI_r_capitate");
ROUTE1762->setToField("rotation");
ROUTE1762->setToNode("hanim_r_capitate");
group->addChildren(*ROUTE1762);

CROUTE* ROUTE1763 = new CROUTE();
ROUTE1763->setFromField("fraction_changed");
ROUTE1763->setFromNode("Armature_Clock");
ROUTE1763->setToField("set_fraction");
ROUTE1763->setToNode("Armature_OI_r_metacarpal_3");
group->addChildren(*ROUTE1763);

CROUTE* ROUTE1764 = new CROUTE();
ROUTE1764->setFromField("value_changed");
ROUTE1764->setFromNode("Armature_OI_r_metacarpal_3");
ROUTE1764->setToField("rotation");
ROUTE1764->setToNode("hanim_r_metacarpal_3");
group->addChildren(*ROUTE1764);

CROUTE* ROUTE1765 = new CROUTE();
ROUTE1765->setFromField("fraction_changed");
ROUTE1765->setFromNode("Armature_Clock");
ROUTE1765->setToField("set_fraction");
ROUTE1765->setToNode("Armature_OI_r_carpal_proximal_phalanx_3");
group->addChildren(*ROUTE1765);

CROUTE* ROUTE1766 = new CROUTE();
ROUTE1766->setFromField("value_changed");
ROUTE1766->setFromNode("Armature_OI_r_carpal_proximal_phalanx_3");
ROUTE1766->setToField("rotation");
ROUTE1766->setToNode("hanim_r_carpal_proximal_phalanx_3");
group->addChildren(*ROUTE1766);

CROUTE* ROUTE1767 = new CROUTE();
ROUTE1767->setFromField("fraction_changed");
ROUTE1767->setFromNode("Armature_Clock");
ROUTE1767->setToField("set_fraction");
ROUTE1767->setToNode("Armature_OI_r_carpal_middle_phalanx_3");
group->addChildren(*ROUTE1767);

CROUTE* ROUTE1768 = new CROUTE();
ROUTE1768->setFromField("value_changed");
ROUTE1768->setFromNode("Armature_OI_r_carpal_middle_phalanx_3");
ROUTE1768->setToField("rotation");
ROUTE1768->setToNode("hanim_r_carpal_middle_phalanx_3");
group->addChildren(*ROUTE1768);

CROUTE* ROUTE1769 = new CROUTE();
ROUTE1769->setFromField("fraction_changed");
ROUTE1769->setFromNode("Armature_Clock");
ROUTE1769->setToField("set_fraction");
ROUTE1769->setToNode("Armature_OI_r_carpal_distal_phalanx_3");
group->addChildren(*ROUTE1769);

CROUTE* ROUTE1770 = new CROUTE();
ROUTE1770->setFromField("value_changed");
ROUTE1770->setFromNode("Armature_OI_r_carpal_distal_phalanx_3");
ROUTE1770->setToField("rotation");
ROUTE1770->setToNode("hanim_r_carpal_distal_phalanx_3");
group->addChildren(*ROUTE1770);

CROUTE* ROUTE1771 = new CROUTE();
ROUTE1771->setFromField("fraction_changed");
ROUTE1771->setFromNode("Armature_Clock");
ROUTE1771->setToField("set_fraction");
ROUTE1771->setToNode("Armature_OI_r_hamate");
group->addChildren(*ROUTE1771);

CROUTE* ROUTE1772 = new CROUTE();
ROUTE1772->setFromField("value_changed");
ROUTE1772->setFromNode("Armature_OI_r_hamate");
ROUTE1772->setToField("rotation");
ROUTE1772->setToNode("hanim_r_hamate");
group->addChildren(*ROUTE1772);

CROUTE* ROUTE1773 = new CROUTE();
ROUTE1773->setFromField("fraction_changed");
ROUTE1773->setFromNode("Armature_Clock");
ROUTE1773->setToField("set_fraction");
ROUTE1773->setToNode("Armature_OI_r_metacarpal_4");
group->addChildren(*ROUTE1773);

CROUTE* ROUTE1774 = new CROUTE();
ROUTE1774->setFromField("value_changed");
ROUTE1774->setFromNode("Armature_OI_r_metacarpal_4");
ROUTE1774->setToField("rotation");
ROUTE1774->setToNode("hanim_r_metacarpal_4");
group->addChildren(*ROUTE1774);

CROUTE* ROUTE1775 = new CROUTE();
ROUTE1775->setFromField("fraction_changed");
ROUTE1775->setFromNode("Armature_Clock");
ROUTE1775->setToField("set_fraction");
ROUTE1775->setToNode("Armature_OI_r_carpal_proximal_phalanx_4");
group->addChildren(*ROUTE1775);

CROUTE* ROUTE1776 = new CROUTE();
ROUTE1776->setFromField("value_changed");
ROUTE1776->setFromNode("Armature_OI_r_carpal_proximal_phalanx_4");
ROUTE1776->setToField("rotation");
ROUTE1776->setToNode("hanim_r_carpal_proximal_phalanx_4");
group->addChildren(*ROUTE1776);

CROUTE* ROUTE1777 = new CROUTE();
ROUTE1777->setFromField("fraction_changed");
ROUTE1777->setFromNode("Armature_Clock");
ROUTE1777->setToField("set_fraction");
ROUTE1777->setToNode("Armature_OI_r_carpal_middle_phalanx_4");
group->addChildren(*ROUTE1777);

CROUTE* ROUTE1778 = new CROUTE();
ROUTE1778->setFromField("value_changed");
ROUTE1778->setFromNode("Armature_OI_r_carpal_middle_phalanx_4");
ROUTE1778->setToField("rotation");
ROUTE1778->setToNode("hanim_r_carpal_middle_phalanx_4");
group->addChildren(*ROUTE1778);

CROUTE* ROUTE1779 = new CROUTE();
ROUTE1779->setFromField("fraction_changed");
ROUTE1779->setFromNode("Armature_Clock");
ROUTE1779->setToField("set_fraction");
ROUTE1779->setToNode("Armature_OI_r_carpal_distal_phalanx_4");
group->addChildren(*ROUTE1779);

CROUTE* ROUTE1780 = new CROUTE();
ROUTE1780->setFromField("value_changed");
ROUTE1780->setFromNode("Armature_OI_r_carpal_distal_phalanx_4");
ROUTE1780->setToField("rotation");
ROUTE1780->setToNode("hanim_r_carpal_distal_phalanx_4");
group->addChildren(*ROUTE1780);

CROUTE* ROUTE1781 = new CROUTE();
ROUTE1781->setFromField("fraction_changed");
ROUTE1781->setFromNode("Armature_Clock");
ROUTE1781->setToField("set_fraction");
ROUTE1781->setToNode("Armature_OI_r_metacarpal_5");
group->addChildren(*ROUTE1781);

CROUTE* ROUTE1782 = new CROUTE();
ROUTE1782->setFromField("value_changed");
ROUTE1782->setFromNode("Armature_OI_r_metacarpal_5");
ROUTE1782->setToField("rotation");
ROUTE1782->setToNode("hanim_r_metacarpal_5");
group->addChildren(*ROUTE1782);

CROUTE* ROUTE1783 = new CROUTE();
ROUTE1783->setFromField("fraction_changed");
ROUTE1783->setFromNode("Armature_Clock");
ROUTE1783->setToField("set_fraction");
ROUTE1783->setToNode("Armature_OI_r_carpal_proximal_phalanx_5");
group->addChildren(*ROUTE1783);

CROUTE* ROUTE1784 = new CROUTE();
ROUTE1784->setFromField("value_changed");
ROUTE1784->setFromNode("Armature_OI_r_carpal_proximal_phalanx_5");
ROUTE1784->setToField("rotation");
ROUTE1784->setToNode("hanim_r_carpal_proximal_phalanx_5");
group->addChildren(*ROUTE1784);

CROUTE* ROUTE1785 = new CROUTE();
ROUTE1785->setFromField("fraction_changed");
ROUTE1785->setFromNode("Armature_Clock");
ROUTE1785->setToField("set_fraction");
ROUTE1785->setToNode("Armature_OI_r_carpal_middle_phalanx_5");
group->addChildren(*ROUTE1785);

CROUTE* ROUTE1786 = new CROUTE();
ROUTE1786->setFromField("value_changed");
ROUTE1786->setFromNode("Armature_OI_r_carpal_middle_phalanx_5");
ROUTE1786->setToField("rotation");
ROUTE1786->setToNode("hanim_r_carpal_middle_phalanx_5");
group->addChildren(*ROUTE1786);

CROUTE* ROUTE1787 = new CROUTE();
ROUTE1787->setFromField("fraction_changed");
ROUTE1787->setFromNode("Armature_Clock");
ROUTE1787->setToField("set_fraction");
ROUTE1787->setToNode("Armature_OI_r_carpal_distal_phalanx_5");
group->addChildren(*ROUTE1787);

CROUTE* ROUTE1788 = new CROUTE();
ROUTE1788->setFromField("value_changed");
ROUTE1788->setFromNode("Armature_OI_r_carpal_distal_phalanx_5");
ROUTE1788->setToField("rotation");
ROUTE1788->setToNode("hanim_r_carpal_distal_phalanx_5");
group->addChildren(*ROUTE1788);

X3D0->setScene(*Scene7);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

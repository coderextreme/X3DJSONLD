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
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
Ccomponent* component2 = new Ccomponent();
component2->setName("H-Anim");
component2->setLevel(1);
head1->addComponent(*component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("BoxMan4AnimationPanel.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation panel shows multiple behaviors.");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("Joe Williams and James Smith - james@vapourtech.com");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("translator");
meta6->setContent("Joe Williams and Don Brutzman");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("generator");
meta7->setContent(".x3d to .x3d translation used BS Contact Geo 8.203");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("created");
meta8->setContent("1 March 2001");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("revision");
meta9->setContent("12 January 2017");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("translated");
meta10->setContent("14 January 2017");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("modified");
meta11->setContent("8 January 2023");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("Image");
meta12->setContent("BoxManAnimationPanelInclined.png");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("MovingImage");
meta13->setContent("BoxManAnimationPanel.mp4");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("MovingImage");
meta14->setContent("https://www.youtube.com/watch?v=8tI83Rtg_DU");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("reference");
meta15->setContent("https://twitter.com/Web3DConsortium/status/820638047523913728");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("reference");
meta16->setContent("https://twitter.com/Web3DConsortium/status/820642726009978881");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("reference");
meta17->setContent("http://HAnim.org");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("reference");
meta18->setContent("../Legacy/originals/boxman.wrl");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("TODO");
meta19->setContent("InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("reference");
meta20->setContent("BoxMan4.x3d");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("reference");
meta21->setContent("http://HAnim.org/Models/HAnim2001/boxman");
head1->addMeta(*meta21);

Cmeta* meta22 = new Cmeta();
meta22->setName("reference");
meta22->setContent("http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl");
head1->addMeta(*meta22);

Cmeta* meta23 = new Cmeta();
meta23->setName("reference");
meta23->setContent("http://www.vapourtech.com/team/james/boxman.wrl");
head1->addMeta(*meta23);

Cmeta* meta24 = new Cmeta();
meta24->setName("reference");
meta24->setContent("http://HAnim.org/Specifications/HAnim2001");
head1->addMeta(*meta24);

Cmeta* meta25 = new Cmeta();
meta25->setName("reference");
meta25->setContent("http://HAnim.org/Models");
head1->addMeta(*meta25);

Cmeta* meta26 = new Cmeta();
meta26->setName("reference");
meta26->setContent("http://HAnim.org/Nodes");
head1->addMeta(*meta26);

Cmeta* meta27 = new Cmeta();
meta27->setName("reference");
meta27->setContent("https://www.web3d.org/x3d/content/X3dToVrml97.xslt");
head1->addMeta(*meta27);

Cmeta* meta28 = new Cmeta();
meta28->setName("rights");
meta28->setContent("(C) 2000 James Smith - james@vapourtech.com");
head1->addMeta(*meta28);

Cmeta* meta29 = new Cmeta();
meta29->setName("reference");
meta29->setContent("http://www.vapourtech.com");
head1->addMeta(*meta29);

Cmeta* meta30 = new Cmeta();
meta30->setName("subject");
meta30->setContent("BoxMan HAnim 2.0");
head1->addMeta(*meta30);

Cmeta* meta31 = new Cmeta();
meta31->setName("identifier");
meta31->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan4AnimationPanel.x3d");
head1->addMeta(*meta31);

Cmeta* meta32 = new Cmeta();
meta32->setName("generator");
meta32->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta32);

Cmeta* meta33 = new Cmeta();
meta33->setName("license");
meta33->setContent("../license.html");
head1->addMeta(*meta33);

X3D0->setHead(*head1);

CScene* Scene34 = new CScene();
CWorldInfo* WorldInfo35 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo35->setInfo(new CString[3]{"(C) 2000 James Smith - james@vapourtech.com","http://www.vapourtech.com/team/james/boxman.wrl","Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com"}, 3);
WorldInfo35->setTitle("BoxMan - A Seamless VRML Human");
group->addChildren(*WorldInfo35);

CBackground* Background36 = (CBackground *)(m_pScene.createNode("Background"));
Background36->setGroundColor(new float[3]{0.6,0.6,0.6});
Background36->setSkyColor(new float[3]{0.75,0.75,0.75});
group->addChildren(*Background36);

CHAnimHumanoid* HAnimHumanoid37 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid37->setName("Humanoid");
HAnimHumanoid37->setDEF("boxman_Humanoid");
HAnimHumanoid37->setInfo(new CString[4]{"authorName=James Smith","authorEmail=james@vapourtech.com","copyright=(C) 2000 James Smith - james@vapourtech.com","humanoidVersion=2.0"}, 4);
HAnimHumanoid37->setVersion("2.0");
CHAnimJoint* HAnimJoint38 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint38->setName("humanoid_root");
HAnimJoint38->setDEF("boxman_humanoid_root");
HAnimJoint38->setCenter(new float[3]{0,0.9723,-0.0728});
HAnimJoint38->setSkinCoordIndex(new int[12]{0,1,2,3,4,5,6,7,8,9,10,11});
HAnimJoint38->setSkinCoordWeight(new float[12]{1,1,1,1,1,1,1,1,1,1,1,1}, 12);
HAnimJoint38->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint38->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment39 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment39->setName("sacrum");
HAnimSegment39->setDEF("boxman_sacrum");
CTransform* Transform40 = (CTransform *)(m_pScene.createNode("Transform"));
Transform40->setTranslation(new float[3]{0,0.9723,-0.0728});
CShape* Shape41 = (CShape *)(m_pScene.createNode("Shape"));
Shape41->setDEF("SphereYellow");
CAppearance* Appearance42 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material43 = (CMaterial *)(m_pScene.createNode("Material"));
Material43->setDiffuseColor(new float[3]{1,1,0});
Appearance42->setMaterial(*Material43);

Shape41->setAppearance(*Appearance42);

CSphere* Sphere44 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere44->setRadius(0.02);
Shape41->setGeometry(Sphere44);

Transform40->addChildren(*Shape41);

HAnimSegment39->addChildren(*Transform40);

HAnimJoint38->addChildren(*HAnimSegment39);

CHAnimJoint* HAnimJoint45 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint45->setName("l_hip");
HAnimJoint45->setDEF("boxman_l_hip");
HAnimJoint45->setCenter(new float[3]{0.0956,0.9364,0});
HAnimJoint45->setSkinCoordIndex(new int[32]{12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43});
HAnimJoint45->setSkinCoordWeight(new float[32]{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5}, 32);
HAnimJoint45->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint45->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment46 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment46->setName("l_thigh");
HAnimSegment46->setDEF("boxman_l_thigh");
CTransform* Transform47 = (CTransform *)(m_pScene.createNode("Transform"));
Transform47->setTranslation(new float[3]{0.0956,0.9364,0});
CShape* Shape48 = (CShape *)(m_pScene.createNode("Shape"));
Shape48->setUSE("SphereYellow");
Transform47->addChildren(*Shape48);

HAnimSegment46->addChildren(*Transform47);

HAnimJoint45->addChildren(*HAnimSegment46);

CHAnimJoint* HAnimJoint49 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint49->setName("l_knee");
HAnimJoint49->setDEF("boxman_l_knee");
HAnimJoint49->setCenter(new float[3]{0.0956,0.5095,-0.0036});
HAnimJoint49->setSkinCoordIndex(new int[28]{36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63});
HAnimJoint49->setSkinCoordWeight(new float[28]{0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, 28);
HAnimJoint49->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint49->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment50 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment50->setName("l_calf");
HAnimSegment50->setDEF("boxman_l_calf");
CTransform* Transform51 = (CTransform *)(m_pScene.createNode("Transform"));
Transform51->setTranslation(new float[3]{0.0956,0.5095,-0.0036});
CShape* Shape52 = (CShape *)(m_pScene.createNode("Shape"));
Shape52->setUSE("SphereYellow");
Transform51->addChildren(*Shape52);

HAnimSegment50->addChildren(*Transform51);

HAnimJoint49->addChildren(*HAnimSegment50);

CHAnimJoint* HAnimJoint53 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint53->setName("l_ankle");
HAnimJoint53->setDEF("boxman_l_ankle");
HAnimJoint53->setCenter(new float[3]{0.0946,0.0762,-0.0261});
HAnimJoint53->setSkinCoordIndex(new int[8]{64,65,66,67,68,69,70,71});
HAnimJoint53->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint53->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint53->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment54 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment54->setName("l_hindfoot");
HAnimSegment54->setDEF("boxman_l_hindfoot");
CTransform* Transform55 = (CTransform *)(m_pScene.createNode("Transform"));
Transform55->setTranslation(new float[3]{0.0946,0.0762,-0.0261});
CShape* Shape56 = (CShape *)(m_pScene.createNode("Shape"));
Shape56->setUSE("SphereYellow");
Transform55->addChildren(*Shape56);

HAnimSegment54->addChildren(*Transform55);

HAnimJoint53->addChildren(*HAnimSegment54);

CHAnimJoint* HAnimJoint57 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint57->setName("l_midtarsal");
HAnimJoint57->setDEF("boxman_l_midtarsal");
HAnimJoint57->setCenter(new float[3]{0.1079,0.0317,0.067});
HAnimJoint57->setSkinCoordIndex(new int[8]{72,73,74,75,76,77,78,79});
HAnimJoint57->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint57->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint57->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment58 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment58->setName("l_middistal");
HAnimSegment58->setDEF("boxman_l_middistal");
CTransform* Transform59 = (CTransform *)(m_pScene.createNode("Transform"));
Transform59->setTranslation(new float[3]{0.1079,0.0317,0.067});
CShape* Shape60 = (CShape *)(m_pScene.createNode("Shape"));
Shape60->setUSE("SphereYellow");
Transform59->addChildren(*Shape60);

HAnimSegment58->addChildren(*Transform59);

CHAnimSite* HAnimSite61 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite61->setName("l_middistal_tip");
HAnimSite61->setDEF("boxman_l_middistal_tip");
HAnimSite61->setTranslation(new float[3]{0.095,0.0005,0.1924});
CShape* Shape62 = (CShape *)(m_pScene.createNode("Shape"));
Shape62->setDEF("SphereRed");
CAppearance* Appearance63 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material64 = (CMaterial *)(m_pScene.createNode("Material"));
Material64->setDiffuseColor(new float[3]{1,0,0});
Appearance63->setMaterial(*Material64);

Shape62->setAppearance(*Appearance63);

CSphere* Sphere65 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere65->setRadius(0.02);
Shape62->setGeometry(Sphere65);

HAnimSite61->addChildren(*Shape62);

HAnimSegment58->addChildren(*HAnimSite61);

HAnimJoint57->addChildren(*HAnimSegment58);

HAnimJoint53->addChildren(*HAnimJoint57);

HAnimJoint49->addChildren(*HAnimJoint53);

HAnimJoint45->addChildren(*HAnimJoint49);

HAnimJoint38->addChildren(*HAnimJoint45);

CHAnimJoint* HAnimJoint66 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint66->setName("r_hip");
HAnimJoint66->setDEF("boxman_r_hip");
HAnimJoint66->setCenter(new float[3]{-0.0956,0.9364,0});
HAnimJoint66->setSkinCoordIndex(new int[32]{80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111});
HAnimJoint66->setSkinCoordWeight(new float[32]{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5}, 32);
HAnimJoint66->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint66->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment67 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment67->setName("r_thigh");
HAnimSegment67->setDEF("boxman_r_thigh");
CTransform* Transform68 = (CTransform *)(m_pScene.createNode("Transform"));
Transform68->setTranslation(new float[3]{-0.0956,0.9364,0});
CShape* Shape69 = (CShape *)(m_pScene.createNode("Shape"));
Shape69->setUSE("SphereYellow");
Transform68->addChildren(*Shape69);

HAnimSegment67->addChildren(*Transform68);

HAnimJoint66->addChildren(*HAnimSegment67);

CHAnimJoint* HAnimJoint70 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint70->setName("r_knee");
HAnimJoint70->setDEF("boxman_r_knee");
HAnimJoint70->setCenter(new float[3]{-0.0956,0.5095,-0.0036});
HAnimJoint70->setSkinCoordIndex(new int[28]{104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131});
HAnimJoint70->setSkinCoordWeight(new float[28]{0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, 28);
HAnimJoint70->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint70->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment71 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment71->setName("r_calf");
HAnimSegment71->setDEF("boxman_r_calf");
CTransform* Transform72 = (CTransform *)(m_pScene.createNode("Transform"));
Transform72->setTranslation(new float[3]{-0.0956,0.5095,-0.0036});
CShape* Shape73 = (CShape *)(m_pScene.createNode("Shape"));
Shape73->setUSE("SphereYellow");
Transform72->addChildren(*Shape73);

HAnimSegment71->addChildren(*Transform72);

HAnimJoint70->addChildren(*HAnimSegment71);

CHAnimJoint* HAnimJoint74 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint74->setName("r_ankle");
HAnimJoint74->setDEF("boxman_r_ankle");
HAnimJoint74->setCenter(new float[3]{-0.0946,0.0762,-0.0261});
HAnimJoint74->setSkinCoordIndex(new int[8]{132,133,134,135,136,137,138,139});
HAnimJoint74->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint74->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint74->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment75 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment75->setName("r_hindfoot");
HAnimSegment75->setDEF("boxman_r_hindfoot");
CTransform* Transform76 = (CTransform *)(m_pScene.createNode("Transform"));
Transform76->setTranslation(new float[3]{-0.0946,0.0762,-0.0261});
CShape* Shape77 = (CShape *)(m_pScene.createNode("Shape"));
Shape77->setUSE("SphereYellow");
Transform76->addChildren(*Shape77);

HAnimSegment75->addChildren(*Transform76);

HAnimJoint74->addChildren(*HAnimSegment75);

CHAnimJoint* HAnimJoint78 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint78->setName("r_midtarsal");
HAnimJoint78->setDEF("boxman_r_midtarsal");
HAnimJoint78->setCenter(new float[3]{-0.1079,0.0317,0.067});
HAnimJoint78->setSkinCoordIndex(new int[8]{140,141,142,143,144,145,146,147});
HAnimJoint78->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint78->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint78->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment79 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment79->setName("r_middistal");
HAnimSegment79->setDEF("boxman_r_middistal");
CTransform* Transform80 = (CTransform *)(m_pScene.createNode("Transform"));
Transform80->setTranslation(new float[3]{-0.1079,0.0317,0.067});
CShape* Shape81 = (CShape *)(m_pScene.createNode("Shape"));
Shape81->setUSE("SphereYellow");
Transform80->addChildren(*Shape81);

HAnimSegment79->addChildren(*Transform80);

CHAnimSite* HAnimSite82 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite82->setName("r_middistal_tip");
HAnimSite82->setDEF("boxman_r_middistal_tip");
HAnimSite82->setTranslation(new float[3]{-0.095,0.0005,0.1924});
CShape* Shape83 = (CShape *)(m_pScene.createNode("Shape"));
Shape83->setUSE("SphereRed");
HAnimSite82->addChildren(*Shape83);

HAnimSegment79->addChildren(*HAnimSite82);

HAnimJoint78->addChildren(*HAnimSegment79);

HAnimJoint74->addChildren(*HAnimJoint78);

HAnimJoint70->addChildren(*HAnimJoint74);

HAnimJoint66->addChildren(*HAnimJoint70);

HAnimJoint38->addChildren(*HAnimJoint66);

CHAnimJoint* HAnimJoint84 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint84->setName("vl5");
HAnimJoint84->setDEF("boxman_vl5");
HAnimJoint84->setCenter(new float[3]{0,1.0817,-0.0728});
HAnimJoint84->setSkinCoordIndex(new int[20]{148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167});
HAnimJoint84->setSkinCoordWeight(new float[20]{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, 20);
HAnimJoint84->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint84->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment85 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment85->setName("l5");
HAnimSegment85->setDEF("boxman_l5");
CTransform* Transform86 = (CTransform *)(m_pScene.createNode("Transform"));
Transform86->setTranslation(new float[3]{0,1.0817,-0.0728});
CShape* Shape87 = (CShape *)(m_pScene.createNode("Shape"));
Shape87->setUSE("SphereYellow");
Transform86->addChildren(*Shape87);

HAnimSegment85->addChildren(*Transform86);

HAnimJoint84->addChildren(*HAnimSegment85);

CHAnimJoint* HAnimJoint88 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint88->setName("skullbase");
HAnimJoint88->setDEF("boxman_skullbase");
HAnimJoint88->setCenter(new float[3]{0,1.644,0.036});
HAnimJoint88->setSkinCoordIndex(new int[8]{168,169,170,171,172,173,174,175});
HAnimJoint88->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint88->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint88->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment89 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment89->setName("skull");
HAnimSegment89->setDEF("boxman_skull");
CTransform* Transform90 = (CTransform *)(m_pScene.createNode("Transform"));
Transform90->setTranslation(new float[3]{0,1.644,0.036});
CShape* Shape91 = (CShape *)(m_pScene.createNode("Shape"));
Shape91->setUSE("SphereYellow");
Transform90->addChildren(*Shape91);

HAnimSegment89->addChildren(*Transform90);

CHAnimSite* HAnimSite92 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite92->setName("skull_tip");
HAnimSite92->setDEF("boxman_skull_tip");
HAnimSite92->setTranslation(new float[3]{-0.0029,1.7771,0.0274});
CShape* Shape93 = (CShape *)(m_pScene.createNode("Shape"));
Shape93->setUSE("SphereYellow");
HAnimSite92->addChildren(*Shape93);

HAnimSegment89->addChildren(*HAnimSite92);

HAnimJoint88->addChildren(*HAnimSegment89);

HAnimJoint84->addChildren(*HAnimJoint88);

CHAnimJoint* HAnimJoint94 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint94->setName("l_shoulder");
HAnimJoint94->setDEF("boxman_l_shoulder");
HAnimJoint94->setCenter(new float[3]{0.1968,1.4642,-0.0265});
HAnimJoint94->setSkinCoordIndex(new int[8]{176,177,178,179,180,181,182,183});
HAnimJoint94->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint94->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint94->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment95 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment95->setName("l_upperarm");
HAnimSegment95->setDEF("boxman_l_upperarm");
CTransform* Transform96 = (CTransform *)(m_pScene.createNode("Transform"));
Transform96->setTranslation(new float[3]{0.1968,1.4642,-0.0265});
CShape* Shape97 = (CShape *)(m_pScene.createNode("Shape"));
Shape97->setUSE("SphereYellow");
Transform96->addChildren(*Shape97);

HAnimSegment95->addChildren(*Transform96);

HAnimJoint94->addChildren(*HAnimSegment95);

CHAnimJoint* HAnimJoint98 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint98->setName("l_elbow");
HAnimJoint98->setDEF("boxman_l_elbow");
HAnimJoint98->setCenter(new float[3]{0.1982,1.1622,-0.0557});
HAnimJoint98->setSkinCoordIndex(new int[8]{184,185,186,187,188,189,190,191});
HAnimJoint98->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint98->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint98->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment99 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment99->setName("l_forearm");
HAnimSegment99->setDEF("boxman_l_forearm");
CTransform* Transform100 = (CTransform *)(m_pScene.createNode("Transform"));
Transform100->setTranslation(new float[3]{0.1982,1.1622,-0.0557});
CShape* Shape101 = (CShape *)(m_pScene.createNode("Shape"));
Shape101->setUSE("SphereYellow");
Transform100->addChildren(*Shape101);

HAnimSegment99->addChildren(*Transform100);

HAnimJoint98->addChildren(*HAnimSegment99);

CHAnimJoint* HAnimJoint102 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint102->setName("l_wrist");
HAnimJoint102->setDEF("boxman_l_wrist");
HAnimJoint102->setCenter(new float[3]{0.1972,0.8929,-0.069});
HAnimJoint102->setSkinCoordIndex(new int[8]{192,193,194,195,196,197,198,199});
HAnimJoint102->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint102->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint102->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment103 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment103->setName("l_hand");
HAnimSegment103->setDEF("boxman_l_hand");
CTransform* Transform104 = (CTransform *)(m_pScene.createNode("Transform"));
Transform104->setTranslation(new float[3]{0.1972,0.8929,-0.069});
CShape* Shape105 = (CShape *)(m_pScene.createNode("Shape"));
Shape105->setUSE("SphereYellow");
Transform104->addChildren(*Shape105);

HAnimSegment103->addChildren(*Transform104);

CHAnimSite* HAnimSite106 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite106->setName("l_hand_tip");
HAnimSite106->setDEF("boxman_l_hand_tip");
HAnimSite106->setTranslation(new float[3]{0.1912,0.6976,-0.071});
CShape* Shape107 = (CShape *)(m_pScene.createNode("Shape"));
Shape107->setUSE("SphereRed");
HAnimSite106->addChildren(*Shape107);

HAnimSegment103->addChildren(*HAnimSite106);

HAnimJoint102->addChildren(*HAnimSegment103);

HAnimJoint98->addChildren(*HAnimJoint102);

HAnimJoint94->addChildren(*HAnimJoint98);

HAnimJoint84->addChildren(*HAnimJoint94);

CHAnimJoint* HAnimJoint108 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint108->setName("r_shoulder");
HAnimJoint108->setDEF("boxman_r_shoulder");
HAnimJoint108->setCenter(new float[3]{-0.1968,1.4642,-0.0265});
HAnimJoint108->setSkinCoordIndex(new int[8]{200,201,202,203,204,205,206,207});
HAnimJoint108->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint108->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint108->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment109 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment109->setName("r_upperarm");
HAnimSegment109->setDEF("boxman_r_upperarm");
CTransform* Transform110 = (CTransform *)(m_pScene.createNode("Transform"));
Transform110->setTranslation(new float[3]{-0.1968,1.4642,-0.0265});
CShape* Shape111 = (CShape *)(m_pScene.createNode("Shape"));
Shape111->setUSE("SphereYellow");
Transform110->addChildren(*Shape111);

HAnimSegment109->addChildren(*Transform110);

HAnimJoint108->addChildren(*HAnimSegment109);

CHAnimJoint* HAnimJoint112 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint112->setName("r_elbow");
HAnimJoint112->setDEF("boxman_r_elbow");
HAnimJoint112->setCenter(new float[3]{-0.1982,1.1622,-0.0557});
HAnimJoint112->setSkinCoordIndex(new int[8]{208,209,210,211,212,213,214,215});
HAnimJoint112->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint112->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint112->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment113 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment113->setName("r_forearm");
HAnimSegment113->setDEF("boxman_r_forearm");
CTransform* Transform114 = (CTransform *)(m_pScene.createNode("Transform"));
Transform114->setTranslation(new float[3]{-0.1982,1.1622,-0.0557});
CShape* Shape115 = (CShape *)(m_pScene.createNode("Shape"));
Shape115->setUSE("SphereYellow");
Transform114->addChildren(*Shape115);

HAnimSegment113->addChildren(*Transform114);

HAnimJoint112->addChildren(*HAnimSegment113);

CHAnimJoint* HAnimJoint116 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint116->setName("r_wrist");
HAnimJoint116->setDEF("boxman_r_wrist");
HAnimJoint116->setCenter(new float[3]{-0.1972,0.8929,-0.069});
HAnimJoint116->setSkinCoordIndex(new int[8]{216,217,218,219,220,221,222,223});
HAnimJoint116->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint116->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint116->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment117 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment117->setName("r_hand");
HAnimSegment117->setDEF("boxman_r_hand");
CTransform* Transform118 = (CTransform *)(m_pScene.createNode("Transform"));
Transform118->setTranslation(new float[3]{-0.1972,0.8929,-0.069});
CShape* Shape119 = (CShape *)(m_pScene.createNode("Shape"));
Shape119->setUSE("SphereYellow");
Transform118->addChildren(*Shape119);

HAnimSegment117->addChildren(*Transform118);

CHAnimSite* HAnimSite120 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite120->setName("r_hand_tip");
HAnimSite120->setDEF("boxman_r_hand_tip");
HAnimSite120->setTranslation(new float[3]{-0.1912,0.6976,-0.071});
CShape* Shape121 = (CShape *)(m_pScene.createNode("Shape"));
Shape121->setUSE("SphereRed");
HAnimSite120->addChildren(*Shape121);

HAnimSegment117->addChildren(*HAnimSite120);

HAnimJoint116->addChildren(*HAnimSegment117);

HAnimJoint112->addChildren(*HAnimJoint116);

HAnimJoint108->addChildren(*HAnimJoint112);

HAnimJoint84->addChildren(*HAnimJoint108);

HAnimJoint38->addChildren(*HAnimJoint84);

HAnimHumanoid37->setSkeleton(*HAnimJoint38);

//# sacrum (12) # l_thigh (28) # l_calf (24) # l_hindfoot (8) # l_middistal (8) # r_thigh (28) # r_calf (24) # r_hindfoot (8) # r_middistal (8) # l5 (20) # skull (8) # l_upperarm (8) # l_forearm (8) # l_hand (8) # r_upperarm (8) # r_forearm (8) # r_hand (8)
//Coordinate DEF='SKINCOORD2' containerField='skinCoord' point='-0.05 1 0.05 0.05 1 0.05 0.03 0.97 -0.1 -0.03 0.97 -0.1 0.03 0.94 -0.075 -0.03 0.94 -0.075 0 0.92 0 0 0.94 0.03 -0.12 1.06 0.05 0.12 1.06 0.05 0.12 1.06 -0.1 -0.12 1.06 -0.1 0.0456 0.9364 0.05 0.1456 0.9364 0.05 0.1456 0.9364 -0.05 0.0456 0.9364 -0.05 0.0456 0.9 0.05 0.1456 0.9 0.05 0.1456 0.9 -0.05 0.0456 0.9 -0.05 0.0456 0.8 0.05 0.1456 0.8 0.05 0.1456 0.8 -0.05 0.0456 0.8 -0.05 0.0456 0.7 0.05 0.1456 0.7 0.05 0.1456 0.7 -0.05 0.0456 0.7 -0.05 0.0456 0.6 0.05 0.1456 0.6 0.05 0.1456 0.6 -0.05 0.0456 0.6 -0.05 0.0456 0.55 0.05 0.1456 0.55 0.05 0.1456 0.55 -0.05 0.0456 0.55 -0.05 0.0456 0.52 0.05 0.1456 0.52 0.05 0.1456 0.52 -0.05 0.0456 0.52 -0.05 0.0456 0.5 0.05 0.1456 0.5 0.05 0.1456 0.5 -0.05 0.0456 0.5 -0.05 0.0454 0.43 0.045 0.1454 0.43 0.045 0.1454 0.43 -0.055 0.0454 0.43 -0.055 0.0452 0.36 0.04 0.1452 0.36 0.04 0.1452 0.36 -0.06 0.0452 0.36 -0.06 0.045 0.29 0.035 0.145 0.29 0.035 0.145 0.29 -0.065 0.045 0.29 -0.065 0.0448 0.21 0.03 0.1448 0.21 0.03 0.1448 0.21 -0.07 0.0448 0.21 -0.07 0.0446 0.1262 0.025 0.1446 0.1262 0.025 0.1446 0.1262 -0.075 0.0446 0.1262 -0.075 0.0446 0.0702038 0.02464698 0.1446 0.0702038 0.02464698 0.1446 0.006264479 -0.08360368 0.0446 0.006264479 -0.08360368 0.0446 0.046587 0.05407905 0.1446 0.046587 0.05407905 0.1446 -0.009224742 0.0474844 0.0446 -0.009224742 0.0474844 0.0446 0.04306673 0.0838718 0.1446 0.04306673 0.0838718 0.1446 -0.01274502 0.07727715 0.0446 -0.01274502 0.07727715 0.0446 0.03069882 0.1885436 0.1446 0.03069882 0.1885436 0.1446 -0.02511293 0.181949 0.0446 -0.02511293 0.181949 -0.0456 0.9861611 0.004881433 -0.1456 0.9861611 0.004881433 -0.1456 0.8866388 -0.004881474 -0.0456 0.8866388 -0.004881474 -0.0456 0.9826074 0.04110757 -0.1456 0.9826074 0.04110757 -0.1456 0.8830851 0.03134466 -0.0456 0.8830851 0.03134466 -0.0456 0.9728445 0.1406298 -0.1456 0.9728445 0.1406298 -0.1456 0.8733222 0.1308669 -0.0456 0.8733222 0.1308669 -0.0456 0.9630816 0.2401521 -0.1456 0.9630816 0.2401521 -0.1456 0.8635593 0.2303892 -0.0456 0.8635593 0.2303892 -0.0456 0.9533187 0.3396744 -0.1456 0.9533187 0.3396744 -0.1456 0.8537964 0.3299115 -0.0456 0.8537964 0.3299115 -0.0456 0.9484373 0.3894355 -0.1456 0.9484373 0.3894355 -0.1456 0.848915 0.3796726 -0.0456 0.848915 0.3796726 -0.0456 0.94468 0.4147483 -0.1456 0.94468 0.4147483 -0.1456 0.8450468 0.4134411 -0.0456 0.8450468 0.4134411 -0.0456 0.9444185 0.4346749 -0.1456 0.9444185 0.4346749 -0.1456 0.8447853 0.4333678 -0.0456 0.8447853 0.4333678 -0.0454 0.9452982 0.5003315 -0.1454 0.9452982 0.5003315 -0.1454 0.8455541 0.5074801 -0.0454 0.8455541 0.5074801 -0.0452 0.945315 0.5705098 -0.1452 0.945315 0.5705098 -0.1452 0.8455709 0.5776584 -0.0452 0.8455709 0.5776584 -0.045 0.9453319 0.6406881 -0.145 0.9453319 0.6406881 -0.145 0.8455877 0.6478368 -0.045 0.8455877 0.6478368 -0.0448 0.9460636 0.7208409 -0.1448 0.9460636 0.7208409 -0.1448 0.8463194 0.7279896 -0.0448 0.8463194 0.7279896 -0.0446 0.947067 0.8047839 -0.1446 0.947067 0.8047839 -0.1446 0.8473228 0.8119326 -0.0446 0.8473228 0.8119326 -0.0446 0.9507178 0.8606621 -0.1446 0.9507178 0.8606621 -0.1446 0.847315 0.9321763 -0.0446 0.847315 0.9321763 -0.0446 0.9817629 0.8821145 -0.1446 0.9817629 0.8821145 -0.1446 0.9791749 0.9382548 -0.0446 0.9791749 0.9382548 -0.0446 1.011731 0.883496 -0.1446 1.011731 0.883496 -0.1446 1.009143 0.9396363 -0.0446 1.009143 0.9396363 -0.0446 1.117019 0.8883496 -0.1446 1.117019 0.8883496 -0.1446 1.114431 0.94449 -0.0446 1.114431 0.94449 -0.12 1.1 0.05 0.12 1.1 0.05 0.12 1.1 -0.1 -0.12 1.1 -0.1 -0.14 1.42 0.045 0.14 1.42 0.045 0.14 1.42 -0.09 -0.14 1.42 -0.09 -0.24 1.52 0.035 0.24 1.52 0.035 0.24 1.52 -0.09 -0.24 1.52 -0.09 -0.05 1.56 0.03 0.05 1.56 0.03 0.05 1.56 -0.06 -0.05 1.56 -0.06 -0.05 1.6 0.06 0.05 1.6 0.06 0.05 1.62 -0.03 -0.05 1.62 -0.03 -0.07 1.781247 0.1236818 0.07 1.781247 0.1236818 0.07 1.77377 -0.03614335 -0.07 1.77377 -0.03614335 -0.07 1.604441 0.1319535 0.07 1.604441 0.1319535 0.07 1.656898 -0.03067561 -0.07 1.656898 -0.03067561 0.2016854 1.406894 0.015 0.2023709 1.520029 0.015 0.2023709 1.520029 -0.075 0.2016854 1.406894 -0.075 0.3774735 1.243191 -0.025 0.4201562 1.28536 -0.025 0.4201562 1.28536 -0.085 0.3774735 1.243191 -0.085 0.4055858 1.214736 -0.025 0.4482685 1.256904 -0.025 0.4482685 1.256904 -0.085 0.4055858 1.214736 -0.085 0.5743457 1.058147 -0.05 0.6028008 1.086259 -0.05 0.6028008 1.086259 -0.09 0.5743457 1.058147 -0.09 0.6024581 1.029692 -0.02 0.6309132 1.057804 -0.02 0.6309132 1.057804 -0.1 0.6024581 1.029692 -0.1 0.7236224 0.9070502 -0.02 0.7520775 0.9351625 -0.02 0.7520775 0.9351625 -0.1 0.7236224 0.9070502 -0.1 -0.2016854 1.406894 0.015 -0.2023709 1.520029 0.015 -0.2023709 1.520029 -0.075 -0.2016854 1.406894 -0.075 -0.3774735 1.243191 -0.025 -0.4201562 1.28536 -0.025 -0.4201562 1.28536 -0.085 -0.3774735 1.243191 -0.085 -0.4055858 1.214736 -0.025 -0.4482685 1.256904 -0.025 -0.4482685 1.256904 -0.085 -0.4055858 1.214736 -0.085 -0.5743457 1.058147 -0.05 -0.6028008 1.086259 -0.05 -0.6028008 1.086259 -0.09 -0.5743457 1.058147 -0.09 -0.6024581 1.029692 -0.02 -0.6309132 1.057804 -0.02 -0.6309132 1.057804 -0.1 -0.6024581 1.029692 -0.1 -0.7236224 0.9070502 -0.02 -0.7520775 0.9351625 -0.02 -0.7520775 0.9351625 -0.1 -0.7236224 0.9070502 -0.1'/
//top-level joint references
//top-level segment references
//top-level site references
CCoordinate* Coordinate122 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate122->setDEF("SKINCOORD");
Coordinate122->setPoint(new float[672]{-0.05,1,0.05,0.05,1,0.05,0.03,0.97,-0.1,-0.03,0.97,-0.1,0.03,0.94,-0.075,-0.03,0.94,-0.075,0,0.92,0,0,0.94,0.03,-0.12,1.06,0.05,0.12,1.06,0.05,0.12,1.06,-0.1,-0.12,1.06,-0.1,0.0456,0.9364,0.05,0.1456,0.9364,0.05,0.1456,0.9364,-0.05,0.0456,0.9364,-0.05,0.0456,0.9,0.05,0.1456,0.9,0.05,0.1456,0.9,-0.05,0.0456,0.9,-0.05,0.0456,0.8,0.05,0.1456,0.8,0.05,0.1456,0.8,-0.05,0.0456,0.8,-0.05,0.0456,0.7,0.05,0.1456,0.7,0.05,0.1456,0.7,-0.05,0.0456,0.7,-0.05,0.0456,0.6,0.05,0.1456,0.6,0.05,0.1456,0.6,-0.05,0.0456,0.6,-0.05,0.0456,0.55,0.05,0.1456,0.55,0.05,0.1456,0.55,-0.05,0.0456,0.55,-0.05,0.0456,0.52,0.05,0.1456,0.52,0.05,0.1456,0.52,-0.05,0.0456,0.52,-0.05,0.0456,0.5,0.05,0.1456,0.5,0.05,0.1456,0.5,-0.05,0.0456,0.5,-0.05,0.0454,0.43,0.045,0.1454,0.43,0.045,0.1454,0.43,-0.055,0.0454,0.43,-0.055,0.0452,0.36,0.04,0.1452,0.36,0.04,0.1452,0.36,-0.06,0.0452,0.36,-0.06,0.045,0.29,0.035,0.145,0.29,0.035,0.145,0.29,-0.065,0.045,0.29,-0.065,0.0448,0.21,0.03,0.1448,0.21,0.03,0.1448,0.21,-0.07,0.0448,0.21,-0.07,0.0446,0.1262,0.025,0.1446,0.1262,0.025,0.1446,0.1262,-0.075,0.0446,0.1262,-0.075,0.0446,0.0762,0.025,0.1446,0.0762,0.025,0.1446,0,-0.075,0.0446,0,-0.075,0.0446,0.0562,0.057,0.1446,0.0562,0.057,0.1446,0,0.057,0.0446,0,0.057,0.0446,0.0562,0.087,0.1446,0.0562,0.087,0.1446,0,0.087,0.0446,0,0.087,0.0446,0.0562,0.1924,0.1446,0.0562,0.1924,0.1446,0,0.1924,0.0446,0,0.1924,-0.0456,0.9364,0.05,-0.1456,0.9364,0.05,-0.1456,0.9364,-0.05,-0.0456,0.9364,-0.05,-0.0456,0.9,0.05,-0.1456,0.9,0.05,-0.1456,0.9,-0.05,-0.0456,0.9,-0.05,-0.0456,0.8,0.05,-0.1456,0.8,0.05,-0.1456,0.8,-0.05,-0.0456,0.8,-0.05,-0.0456,0.7,0.05,-0.1456,0.7,0.05,-0.1456,0.7,-0.05,-0.0456,0.7,-0.05,-0.0456,0.6,0.05,-0.1456,0.6,0.05,-0.1456,0.6,-0.05,-0.0456,0.6,-0.05,-0.0456,0.55,0.05,-0.1456,0.55,0.05,-0.1456,0.55,-0.05,-0.0456,0.55,-0.05,-0.0456,0.52,0.05,-0.1456,0.52,0.05,-0.1456,0.52,-0.05,-0.0456,0.52,-0.05,-0.0456,0.5,0.05,-0.1456,0.5,0.05,-0.1456,0.5,-0.05,-0.0456,0.5,-0.05,-0.0454,0.43,0.045,-0.1454,0.43,0.045,-0.1454,0.43,-0.055,-0.0454,0.43,-0.055,-0.0452,0.36,0.04,-0.1452,0.36,0.04,-0.1452,0.36,-0.06,-0.0452,0.36,-0.06,-0.045,0.29,0.035,-0.145,0.29,0.035,-0.145,0.29,-0.065,-0.045,0.29,-0.065,-0.0448,0.21,0.03,-0.1448,0.21,0.03,-0.1448,0.21,-0.07,-0.0448,0.21,-0.07,-0.0446,0.1262,0.025,-0.1446,0.1262,0.025,-0.1446,0.1262,-0.075,-0.0446,0.1262,-0.075,-0.0446,0.0762,0.025,-0.1446,0.0762,0.025,-0.1446,0,-0.075,-0.0446,0,-0.075,-0.0446,0.0562,0.057,-0.1446,0.0562,0.057,-0.1446,0,0.057,-0.0446,0,0.057,-0.0446,0.0562,0.087,-0.1446,0.0562,0.087,-0.1446,0,0.087,-0.0446,0,0.087,-0.0446,0.0562,0.1924,-0.1446,0.0562,0.1924,-0.1446,0,0.1924,-0.0446,0,0.1924,-0.12,1.1,0.05,0.12,1.1,0.05,0.12,1.1,-0.1,-0.12,1.1,-0.1,-0.14,1.42,0.045,0.14,1.42,0.045,0.14,1.42,-0.09,-0.14,1.42,-0.09,-0.24,1.52,0.035,0.24,1.52,0.035,0.24,1.52,-0.09,-0.24,1.52,-0.09,-0.05,1.56,0.03,0.05,1.56,0.03,0.05,1.56,-0.06,-0.05,1.56,-0.06,-0.05,1.6,0.06,0.05,1.6,0.06,0.05,1.62,-0.03,-0.05,1.62,-0.03,-0.07,1.777,0.13,0.07,1.777,0.13,0.07,1.777,-0.03,-0.07,1.777,-0.03,-0.07,1.6,0.13,0.07,1.6,0.13,0.07,1.66,-0.03,-0.07,1.66,-0.03,0.16,1.42,0.015,0.24,1.5,0.015,0.24,1.5,-0.075,0.16,1.42,-0.075,0.17,1.18,-0.025,0.23,1.18,-0.025,0.23,1.18,-0.085,0.17,1.18,-0.085,0.17,1.14,-0.025,0.23,1.14,-0.025,0.23,1.14,-0.085,0.17,1.14,-0.085,0.18,0.91,-0.05,0.22,0.91,-0.05,0.22,0.91,-0.09,0.18,0.91,-0.09,0.18,0.87,-0.02,0.22,0.87,-0.02,0.22,0.87,-0.1,0.18,0.87,-0.1,0.18,0.6976,-0.02,0.22,0.6976,-0.02,0.22,0.6976,-0.1,0.18,0.6976,-0.1,-0.16,1.42,0.015,-0.24,1.5,0.015,-0.24,1.5,-0.075,-0.16,1.42,-0.075,-0.17,1.18,-0.025,-0.23,1.18,-0.025,-0.23,1.18,-0.085,-0.17,1.18,-0.085,-0.17,1.14,-0.025,-0.23,1.14,-0.025,-0.23,1.14,-0.085,-0.17,1.14,-0.085,-0.18,0.91,-0.05,-0.22,0.91,-0.05,-0.22,0.91,-0.09,-0.18,0.91,-0.09,-0.18,0.87,-0.02,-0.22,0.87,-0.02,-0.22,0.87,-0.1,-0.18,0.87,-0.1,-0.18,0.6976,-0.02,-0.22,0.6976,-0.02,-0.22,0.6976,-0.1,-0.18,0.6976,-0.1});
HAnimHumanoid37->setSkinCoord(*Coordinate122);

CGroup* Group123 = (CGroup *)(m_pScene.createNode("Group"));
CShape* Shape124 = (CShape *)(m_pScene.createNode("Shape"));
Shape124->setDEF("TrouserSkin");
CAppearance* Appearance125 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material126 = (CMaterial *)(m_pScene.createNode("Material"));
Material126->setDiffuseColor(new float[3]{0,0,1});
Material126->setTransparency(0.5);
Appearance125->setMaterial(*Material126);

Shape124->setAppearance(*Appearance125);

//# 0: sacrum (8) # 1: l_hip joint (8) # 2: r_hip joint (8) # 3: l_thigh (48) # 4: l_knee joint (8) # 5: l_calf (40) # 10: r_thigh (48) # 11: r_knee joint (8) # 12: r_calf (40)
CIndexedFaceSet* IndexedFaceSet127 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet127->setCoordIndex(new int[888]{0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1});
CCoordinate* Coordinate128 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate128->setUSE("SKINCOORD");
IndexedFaceSet127->setCoord(*Coordinate128);

Shape124->setGeometry(IndexedFaceSet127);

Group123->addChildren(*Shape124);

CShape* Shape129 = (CShape *)(m_pScene.createNode("Shape"));
Shape129->setDEF("ShoeSkin");
CAppearance* Appearance130 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material131 = (CMaterial *)(m_pScene.createNode("Material"));
Material131->setDiffuseColor(new float[3]{0,0,0});
Material131->setTransparency(0.5);
Appearance130->setMaterial(*Material131);

Shape129->setAppearance(*Appearance130);

//# 6: l_ankle joint (8) # 7: l_hindfoot (8) # 8: l_midtarsal joint (8) # 9: l_middistal (10) # 13: r_ankle joint (8) # 14: r_hindfoot (8) # 15: r_midtarsal joint (8) # 16: r_middistal (10)
CIndexedFaceSet* IndexedFaceSet132 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet132->setCoordIndex(new int[272]{60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1});
CCoordinate* Coordinate133 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate133->setUSE("SKINCOORD");
IndexedFaceSet132->setCoord(*Coordinate133);

Shape129->setGeometry(IndexedFaceSet132);

Group123->addChildren(*Shape129);

CShape* Shape134 = (CShape *)(m_pScene.createNode("Shape"));
Shape134->setDEF("ShirtSkin");
CAppearance* Appearance135 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material136 = (CMaterial *)(m_pScene.createNode("Material"));
Material136->setDiffuseColor(new float[3]{1,1,0});
Material136->setTransparency(0.5);
Appearance135->setMaterial(*Material136);

Shape134->setAppearance(*Appearance135);

//# 17: vl5_joint (8) # 18: l5 (28) # 21: l_shoulder joint (8) # 22: l_upperarm (8) # 23: l_elbow joint (8) # 24: l_forearm (8) # 27: r_shoulder joint (8) # 28: r_upperarm (8) # 29: r_elbow joint (8) # 30: r_forearm (8)
CIndexedFaceSet* IndexedFaceSet137 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet137->setCoordIndex(new int[400]{148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1});
CCoordinate* Coordinate138 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate138->setUSE("SKINCOORD");
IndexedFaceSet137->setCoord(*Coordinate138);

Shape134->setGeometry(IndexedFaceSet137);

Group123->addChildren(*Shape134);

CShape* Shape139 = (CShape *)(m_pScene.createNode("Shape"));
Shape139->setDEF("HeadHandsFleshToneSkin");
CAppearance* Appearance140 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material141 = (CMaterial *)(m_pScene.createNode("Material"));
Material141->setDiffuseColor(new float[3]{1,0.75,0.75});
Material141->setTransparency(0.5);
Appearance140->setMaterial(*Material141);

Shape139->setAppearance(*Appearance140);

//# 19: skullbase joint (8) # 20: skull (10) # 25: l_wrist joint (8) # 26: l_hand (10) # 31: r_wrist joint (8) # 32: r_hand (10)
CIndexedFaceSet* IndexedFaceSet142 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet142->setCoordIndex(new int[216]{172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1});
CCoordinate* Coordinate143 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate143->setUSE("SKINCOORD");
IndexedFaceSet142->setCoord(*Coordinate143);

Shape139->setGeometry(IndexedFaceSet142);

Group123->addChildren(*Shape139);

CShape* Shape144 = (CShape *)(m_pScene.createNode("Shape"));
Shape144->setDEF("SkinLines");
CAppearance* Appearance145 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material146 = (CMaterial *)(m_pScene.createNode("Material"));
Material146->setDiffuseColor(new float[3]{0,0,0});
Appearance145->setMaterial(*Material146);

Shape144->setAppearance(*Appearance145);

//Combined set of prior IFS coordIndex values
CIndexedLineSet* IndexedLineSet147 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet147->setCoordIndex(new int[1776]{0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1});
CCoordinate* Coordinate148 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate148->setUSE("SKINCOORD");
IndexedLineSet147->setCoord(*Coordinate148);

Shape144->setGeometry(IndexedLineSet147);

Group123->addChildren(*Shape144);

HAnimHumanoid37->setSkin(*Group123);

CHAnimSite* HAnimSite149 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite149->setName("BoxMan_view");
HAnimSite149->setDEF("boxman_BoxMan_view");
CViewpoint* Viewpoint150 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint150->setDEF("Inclined_View");
Viewpoint150->setDescription("Inclined View");
Viewpoint150->setOrientation(new float[4]{0,1,0,0.78});
Viewpoint150->setPosition(new float[3]{2,0.9,2});
HAnimSite149->addChildren(*Viewpoint150);

CViewpoint* Viewpoint151 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint151->setDEF("Front_View");
Viewpoint151->setDescription("Front View");
Viewpoint151->setPosition(new float[3]{0,1,3});
HAnimSite149->addChildren(*Viewpoint151);

CViewpoint* Viewpoint152 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint152->setDEF("Best_View");
Viewpoint152->setDescription("Right-side View");
Viewpoint152->setOrientation(new float[4]{0,1,0,-1.57});
Viewpoint152->setPosition(new float[3]{-3,1,0});
HAnimSite149->addChildren(*Viewpoint152);

CViewpoint* Viewpoint153 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint153->setDEF("Side_View");
Viewpoint153->setDescription("Left-side View");
Viewpoint153->setOrientation(new float[4]{0,1,0,1.57});
Viewpoint153->setPosition(new float[3]{3,1,0});
HAnimSite149->addChildren(*Viewpoint153);

CViewpoint* Viewpoint154 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint154->setDEF("Top_View");
Viewpoint154->setDescription("Top View");
Viewpoint154->setOrientation(new float[4]{1,0,0,-1.57});
Viewpoint154->setPosition(new float[3]{0,3,0});
HAnimSite149->addChildren(*Viewpoint154);

HAnimHumanoid37->addViewpoints(*HAnimSite149);

CHAnimJoint* HAnimJoint155 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint155->setUSE("boxman_humanoid_root");
HAnimHumanoid37->addJoints(*HAnimJoint155);

CHAnimJoint* HAnimJoint156 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint156->setUSE("boxman_skullbase");
HAnimHumanoid37->addJoints(*HAnimJoint156);

CHAnimJoint* HAnimJoint157 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint157->setUSE("boxman_vl5");
HAnimHumanoid37->addJoints(*HAnimJoint157);

CHAnimJoint* HAnimJoint158 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint158->setUSE("boxman_r_ankle");
HAnimHumanoid37->addJoints(*HAnimJoint158);

CHAnimJoint* HAnimJoint159 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint159->setUSE("boxman_l_ankle");
HAnimHumanoid37->addJoints(*HAnimJoint159);

CHAnimJoint* HAnimJoint160 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint160->setUSE("boxman_r_elbow");
HAnimHumanoid37->addJoints(*HAnimJoint160);

CHAnimJoint* HAnimJoint161 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint161->setUSE("boxman_l_elbow");
HAnimHumanoid37->addJoints(*HAnimJoint161);

CHAnimJoint* HAnimJoint162 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint162->setUSE("boxman_r_hip");
HAnimHumanoid37->addJoints(*HAnimJoint162);

CHAnimJoint* HAnimJoint163 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint163->setUSE("boxman_l_hip");
HAnimHumanoid37->addJoints(*HAnimJoint163);

CHAnimJoint* HAnimJoint164 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint164->setUSE("boxman_r_knee");
HAnimHumanoid37->addJoints(*HAnimJoint164);

CHAnimJoint* HAnimJoint165 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint165->setUSE("boxman_l_knee");
HAnimHumanoid37->addJoints(*HAnimJoint165);

CHAnimJoint* HAnimJoint166 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint166->setUSE("boxman_r_midtarsal");
HAnimHumanoid37->addJoints(*HAnimJoint166);

CHAnimJoint* HAnimJoint167 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint167->setUSE("boxman_l_midtarsal");
HAnimHumanoid37->addJoints(*HAnimJoint167);

CHAnimJoint* HAnimJoint168 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint168->setUSE("boxman_r_shoulder");
HAnimHumanoid37->addJoints(*HAnimJoint168);

CHAnimJoint* HAnimJoint169 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint169->setUSE("boxman_l_shoulder");
HAnimHumanoid37->addJoints(*HAnimJoint169);

CHAnimJoint* HAnimJoint170 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint170->setUSE("boxman_r_wrist");
HAnimHumanoid37->addJoints(*HAnimJoint170);

CHAnimJoint* HAnimJoint171 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint171->setUSE("boxman_l_wrist");
HAnimHumanoid37->addJoints(*HAnimJoint171);

CHAnimSegment* HAnimSegment172 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment172->setUSE("boxman_sacrum");
HAnimHumanoid37->setSegments(*HAnimSegment172);

CHAnimSegment* HAnimSegment173 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment173->setUSE("boxman_l5");
HAnimHumanoid37->setSegments(*HAnimSegment173);

CHAnimSegment* HAnimSegment174 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment174->setUSE("boxman_skull");
HAnimHumanoid37->setSegments(*HAnimSegment174);

CHAnimSegment* HAnimSegment175 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment175->setUSE("boxman_l_calf");
HAnimHumanoid37->setSegments(*HAnimSegment175);

CHAnimSegment* HAnimSegment176 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment176->setUSE("boxman_r_calf");
HAnimHumanoid37->setSegments(*HAnimSegment176);

CHAnimSegment* HAnimSegment177 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment177->setUSE("boxman_l_forearm");
HAnimHumanoid37->setSegments(*HAnimSegment177);

CHAnimSegment* HAnimSegment178 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment178->setUSE("boxman_r_forearm");
HAnimHumanoid37->setSegments(*HAnimSegment178);

CHAnimSegment* HAnimSegment179 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment179->setUSE("boxman_l_hand");
HAnimHumanoid37->setSegments(*HAnimSegment179);

CHAnimSegment* HAnimSegment180 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment180->setUSE("boxman_r_hand");
HAnimHumanoid37->setSegments(*HAnimSegment180);

CHAnimSegment* HAnimSegment181 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment181->setUSE("boxman_l_hindfoot");
HAnimHumanoid37->setSegments(*HAnimSegment181);

CHAnimSegment* HAnimSegment182 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment182->setUSE("boxman_r_hindfoot");
HAnimHumanoid37->setSegments(*HAnimSegment182);

CHAnimSegment* HAnimSegment183 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment183->setUSE("boxman_l_middistal");
HAnimHumanoid37->setSegments(*HAnimSegment183);

CHAnimSegment* HAnimSegment184 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment184->setUSE("boxman_r_middistal");
HAnimHumanoid37->setSegments(*HAnimSegment184);

CHAnimSegment* HAnimSegment185 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment185->setUSE("boxman_l_thigh");
HAnimHumanoid37->setSegments(*HAnimSegment185);

CHAnimSegment* HAnimSegment186 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment186->setUSE("boxman_r_thigh");
HAnimHumanoid37->setSegments(*HAnimSegment186);

CHAnimSegment* HAnimSegment187 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment187->setUSE("boxman_l_upperarm");
HAnimHumanoid37->setSegments(*HAnimSegment187);

CHAnimSegment* HAnimSegment188 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment188->setUSE("boxman_r_upperarm");
HAnimHumanoid37->setSegments(*HAnimSegment188);

CHAnimSite* HAnimSite189 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite189->setUSE("boxman_skull_tip");
HAnimHumanoid37->setSites(*HAnimSite189);

CHAnimSite* HAnimSite190 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite190->setUSE("boxman_l_hand_tip");
HAnimHumanoid37->setSites(*HAnimSite190);

CHAnimSite* HAnimSite191 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite191->setUSE("boxman_r_hand_tip");
HAnimHumanoid37->setSites(*HAnimSite191);

CHAnimSite* HAnimSite192 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite192->setUSE("boxman_l_middistal_tip");
HAnimHumanoid37->setSites(*HAnimSite192);

CHAnimSite* HAnimSite193 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite193->setUSE("boxman_r_middistal_tip");
HAnimHumanoid37->setSites(*HAnimSite193);

group->addChildren(*HAnimHumanoid37);

CGroup* Group194 = (CGroup *)(m_pScene.createNode("Group"));
Group194->setDEF("StopAnimation");
CTimeSensor* TimeSensor195 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor195->setDEF("StopTimer");
TimeSensor195->setCycleInterval(5.73);
TimeSensor195->setLoop(True);
Group194->addChildren(*TimeSensor195);

CPositionInterpolator* PositionInterpolator196 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator196->setDEF("Stop_humanoid_root_TranslationInterpolator");
PositionInterpolator196->setKey(new float[3]{0,0.5,1}, 3);
PositionInterpolator196->setKeyValue(new float[9]{0,0,0,0,0,0,0,0,0});
Group194->addChildren(*PositionInterpolator196);

COrientationInterpolator* OrientationInterpolator197 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator197->setDEF("Stop_humanoid_root_RotationInterpolator");
OrientationInterpolator197->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator197->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator197);

COrientationInterpolator* OrientationInterpolator198 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator198->setDEF("Stop_sacroiliac_RotationInterpolator");
OrientationInterpolator198->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator198->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator198);

COrientationInterpolator* OrientationInterpolator199 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator199->setDEF("Stop_l_hip_RotationInterpolator");
OrientationInterpolator199->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator199->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator199);

COrientationInterpolator* OrientationInterpolator200 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator200->setDEF("Stop_l_knee_RotationInterpolator");
OrientationInterpolator200->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator200->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator200);

COrientationInterpolator* OrientationInterpolator201 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator201->setDEF("Stop_l_ankle_RotationInterpolator");
OrientationInterpolator201->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator201->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator201);

COrientationInterpolator* OrientationInterpolator202 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator202->setDEF("Stop_l_subtalar_RotationInterpolator");
OrientationInterpolator202->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator202->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator202);

COrientationInterpolator* OrientationInterpolator203 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator203->setDEF("Stop_l_midtarsal_RotationInterpolator");
OrientationInterpolator203->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator203->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator203);

COrientationInterpolator* OrientationInterpolator204 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator204->setDEF("Stop_l_metatarsal_RotationInterpolator");
OrientationInterpolator204->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator204->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator204);

COrientationInterpolator* OrientationInterpolator205 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator205->setDEF("Stop_r_hip_RotationInterpolator");
OrientationInterpolator205->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator205->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator205);

COrientationInterpolator* OrientationInterpolator206 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator206->setDEF("Stop_r_knee_RotationInterpolator");
OrientationInterpolator206->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator206->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator206);

COrientationInterpolator* OrientationInterpolator207 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator207->setDEF("Stop_r_ankle_RotationInterpolator");
OrientationInterpolator207->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator207->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator207);

COrientationInterpolator* OrientationInterpolator208 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator208->setDEF("Stop_r_subtalar_RotationInterpolator");
OrientationInterpolator208->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator208->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator208);

COrientationInterpolator* OrientationInterpolator209 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator209->setDEF("Stop_r_midtarsal_RotationInterpolator");
OrientationInterpolator209->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator209->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator209);

COrientationInterpolator* OrientationInterpolator210 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator210->setDEF("Stop_r_metatarsal_RotationInterpolator");
OrientationInterpolator210->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator210->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator210);

COrientationInterpolator* OrientationInterpolator211 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator211->setDEF("Stop_vl5_RotationInterpolator");
OrientationInterpolator211->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator211->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator211);

COrientationInterpolator* OrientationInterpolator212 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator212->setDEF("Stop_vl4_RotationInterpolator");
OrientationInterpolator212->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator212->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator212);

COrientationInterpolator* OrientationInterpolator213 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator213->setDEF("Stop_vl3_RotationInterpolator");
OrientationInterpolator213->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator213->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator213);

COrientationInterpolator* OrientationInterpolator214 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator214->setDEF("Stop_vl2_RotationInterpolator");
OrientationInterpolator214->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator214->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator214);

COrientationInterpolator* OrientationInterpolator215 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator215->setDEF("Stop_vl1_RotationInterpolator");
OrientationInterpolator215->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator215->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator215);

COrientationInterpolator* OrientationInterpolator216 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator216->setDEF("Stop_vt12_RotationInterpolator");
OrientationInterpolator216->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator216->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator216);

COrientationInterpolator* OrientationInterpolator217 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator217->setDEF("Stop_vt11_RotationInterpolator");
OrientationInterpolator217->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator217->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator217);

COrientationInterpolator* OrientationInterpolator218 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator218->setDEF("Stop_vt10_RotationInterpolator");
OrientationInterpolator218->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator218->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator218);

COrientationInterpolator* OrientationInterpolator219 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator219->setDEF("Stop_vt9_RotationInterpolator");
OrientationInterpolator219->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator219->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator219);

COrientationInterpolator* OrientationInterpolator220 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator220->setDEF("Stop_vt8_RotationInterpolator");
OrientationInterpolator220->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator220->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator220);

COrientationInterpolator* OrientationInterpolator221 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator221->setDEF("Stop_vt7_RotationInterpolator");
OrientationInterpolator221->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator221->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator221);

COrientationInterpolator* OrientationInterpolator222 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator222->setDEF("Stop_vt6_RotationInterpolator");
OrientationInterpolator222->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator222->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator222);

COrientationInterpolator* OrientationInterpolator223 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator223->setDEF("Stop_vt5_RotationInterpolator");
OrientationInterpolator223->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator223->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator223);

COrientationInterpolator* OrientationInterpolator224 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator224->setDEF("Stop_vt4_RotationInterpolator");
OrientationInterpolator224->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator224->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator224);

COrientationInterpolator* OrientationInterpolator225 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator225->setDEF("Stop_vt3_RotationInterpolator");
OrientationInterpolator225->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator225->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator225);

COrientationInterpolator* OrientationInterpolator226 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator226->setDEF("Stop_vt2_RotationInterpolator");
OrientationInterpolator226->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator226->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator226);

COrientationInterpolator* OrientationInterpolator227 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator227->setDEF("Stop_vt1_RotationInterpolator");
OrientationInterpolator227->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator227->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator227);

COrientationInterpolator* OrientationInterpolator228 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator228->setDEF("Stop_vc7_RotationInterpolator");
OrientationInterpolator228->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator228->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator228);

COrientationInterpolator* OrientationInterpolator229 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator229->setDEF("Stop_vc6_RotationInterpolator");
OrientationInterpolator229->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator229->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator229);

COrientationInterpolator* OrientationInterpolator230 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator230->setDEF("Stop_vc5_RotationInterpolator");
OrientationInterpolator230->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator230->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator230);

COrientationInterpolator* OrientationInterpolator231 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator231->setDEF("Stop_vc4_RotationInterpolator");
OrientationInterpolator231->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator231->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator231);

COrientationInterpolator* OrientationInterpolator232 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator232->setDEF("Stop_vc3_RotationInterpolator");
OrientationInterpolator232->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator232->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator232);

COrientationInterpolator* OrientationInterpolator233 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator233->setDEF("Stop_vc2_RotationInterpolator");
OrientationInterpolator233->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator233->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator233);

COrientationInterpolator* OrientationInterpolator234 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator234->setDEF("Stop_vc1_RotationInterpolator");
OrientationInterpolator234->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator234->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator234);

COrientationInterpolator* OrientationInterpolator235 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator235->setDEF("Stop_skullbase_RotationInterpolator");
OrientationInterpolator235->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator235->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator235);

COrientationInterpolator* OrientationInterpolator236 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator236->setDEF("Stop_l_eyeball_joint_RotationInterpolator");
OrientationInterpolator236->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator236->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator236);

COrientationInterpolator* OrientationInterpolator237 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator237->setDEF("Stop_r_eyeball_joint_RotationInterpolator");
OrientationInterpolator237->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator237->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator237);

COrientationInterpolator* OrientationInterpolator238 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator238->setDEF("Stop_l_sternoclavicular_RotationInterpolator");
OrientationInterpolator238->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator238->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator238);

COrientationInterpolator* OrientationInterpolator239 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator239->setDEF("Stop_l_acromioclavicular_RotationInterpolator");
OrientationInterpolator239->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator239->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator239);

COrientationInterpolator* OrientationInterpolator240 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator240->setDEF("Stop_l_shoulder_RotationInterpolator");
OrientationInterpolator240->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator240->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator240);

COrientationInterpolator* OrientationInterpolator241 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator241->setDEF("Stop_l_elbow_RotationInterpolator");
OrientationInterpolator241->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator241->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator241);

COrientationInterpolator* OrientationInterpolator242 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator242->setDEF("Stop_l_wrist_RotationInterpolator");
OrientationInterpolator242->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator242->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator242);

COrientationInterpolator* OrientationInterpolator243 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator243->setDEF("Stop_l_thumb1_RotationInterpolator");
OrientationInterpolator243->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator243->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator243);

COrientationInterpolator* OrientationInterpolator244 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator244->setDEF("Stop_l_thumb2_RotationInterpolator");
OrientationInterpolator244->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator244->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator244);

COrientationInterpolator* OrientationInterpolator245 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator245->setDEF("Stop_l_thumb3_RotationInterpolator");
OrientationInterpolator245->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator245->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator245);

COrientationInterpolator* OrientationInterpolator246 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator246->setDEF("Stop_l_index0_RotationInterpolator");
OrientationInterpolator246->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator246->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator246);

COrientationInterpolator* OrientationInterpolator247 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator247->setDEF("Stop_l_index1_RotationInterpolator");
OrientationInterpolator247->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator247->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator247);

COrientationInterpolator* OrientationInterpolator248 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator248->setDEF("Stop_l_index2_RotationInterpolator");
OrientationInterpolator248->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator248->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator248);

COrientationInterpolator* OrientationInterpolator249 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator249->setDEF("Stop_l_index3_RotationInterpolator");
OrientationInterpolator249->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator249->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator249);

COrientationInterpolator* OrientationInterpolator250 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator250->setDEF("Stop_l_middle0_RotationInterpolator");
OrientationInterpolator250->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator250->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator250);

COrientationInterpolator* OrientationInterpolator251 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator251->setDEF("Stop_l_middle1_RotationInterpolator");
OrientationInterpolator251->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator251->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator251);

COrientationInterpolator* OrientationInterpolator252 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator252->setDEF("Stop_l_middle2_RotationInterpolator");
OrientationInterpolator252->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator252->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator252);

COrientationInterpolator* OrientationInterpolator253 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator253->setDEF("Stop_l_middle3_RotationInterpolator");
OrientationInterpolator253->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator253->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator253);

COrientationInterpolator* OrientationInterpolator254 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator254->setDEF("Stop_l_ring0_RotationInterpolator");
OrientationInterpolator254->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator254->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator254);

COrientationInterpolator* OrientationInterpolator255 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator255->setDEF("Stop_l_ring1_RotationInterpolator");
OrientationInterpolator255->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator255->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator255);

COrientationInterpolator* OrientationInterpolator256 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator256->setDEF("Stop_l_ring2_RotationInterpolator");
OrientationInterpolator256->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator256->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator256);

COrientationInterpolator* OrientationInterpolator257 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator257->setDEF("Stop_l_ring3_RotationInterpolator");
OrientationInterpolator257->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator257->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator257);

COrientationInterpolator* OrientationInterpolator258 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator258->setDEF("Stop_l_pinky0_RotationInterpolator");
OrientationInterpolator258->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator258->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator258);

COrientationInterpolator* OrientationInterpolator259 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator259->setDEF("Stop_l_pinky1_RotationInterpolator");
OrientationInterpolator259->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator259->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator259);

COrientationInterpolator* OrientationInterpolator260 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator260->setDEF("Stop_l_pinky2_RotationInterpolator");
OrientationInterpolator260->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator260->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator260);

COrientationInterpolator* OrientationInterpolator261 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator261->setDEF("Stop_l_pinky3_RotationInterpolator");
OrientationInterpolator261->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator261->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator261);

COrientationInterpolator* OrientationInterpolator262 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator262->setDEF("Stop_r_sternoclavicular_RotationInterpolator");
OrientationInterpolator262->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator262->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator262);

COrientationInterpolator* OrientationInterpolator263 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator263->setDEF("Stop_r_acromioclavicular_RotationInterpolator");
OrientationInterpolator263->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator263->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator263);

COrientationInterpolator* OrientationInterpolator264 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator264->setDEF("Stop_r_shoulder_RotationInterpolator");
OrientationInterpolator264->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator264->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator264);

COrientationInterpolator* OrientationInterpolator265 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator265->setDEF("Stop_r_elbow_RotationInterpolator");
OrientationInterpolator265->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator265->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator265);

COrientationInterpolator* OrientationInterpolator266 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator266->setDEF("Stop_r_wrist_RotationInterpolator");
OrientationInterpolator266->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator266->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator266);

COrientationInterpolator* OrientationInterpolator267 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator267->setDEF("Stop_r_thumb1_RotationInterpolator");
OrientationInterpolator267->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator267->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator267);

COrientationInterpolator* OrientationInterpolator268 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator268->setDEF("Stop_r_thumb2_RotationInterpolator");
OrientationInterpolator268->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator268->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator268);

COrientationInterpolator* OrientationInterpolator269 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator269->setDEF("Stop_r_thumb3_RotationInterpolator");
OrientationInterpolator269->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator269->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator269);

COrientationInterpolator* OrientationInterpolator270 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator270->setDEF("Stop_r_index0_RotationInterpolator");
OrientationInterpolator270->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator270->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator270);

COrientationInterpolator* OrientationInterpolator271 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator271->setDEF("Stop_r_index1_RotationInterpolator");
OrientationInterpolator271->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator271->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator271);

COrientationInterpolator* OrientationInterpolator272 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator272->setDEF("Stop_r_index2_RotationInterpolator");
OrientationInterpolator272->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator272->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator272);

COrientationInterpolator* OrientationInterpolator273 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator273->setDEF("Stop_r_index3_RotationInterpolator");
OrientationInterpolator273->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator273->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator273);

COrientationInterpolator* OrientationInterpolator274 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator274->setDEF("Stop_r_middle0_RotationInterpolator");
OrientationInterpolator274->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator274->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator274);

COrientationInterpolator* OrientationInterpolator275 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator275->setDEF("Stop_r_middle1_RotationInterpolator");
OrientationInterpolator275->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator275->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator275);

COrientationInterpolator* OrientationInterpolator276 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator276->setDEF("Stop_r_middle2_RotationInterpolator");
OrientationInterpolator276->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator276->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator276);

COrientationInterpolator* OrientationInterpolator277 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator277->setDEF("Stop_r_middle3_RotationInterpolator");
OrientationInterpolator277->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator277->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator277);

COrientationInterpolator* OrientationInterpolator278 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator278->setDEF("Stop_r_ring0_RotationInterpolator");
OrientationInterpolator278->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator278->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator278);

COrientationInterpolator* OrientationInterpolator279 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator279->setDEF("Stop_r_ring1_RotationInterpolator");
OrientationInterpolator279->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator279->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator279);

COrientationInterpolator* OrientationInterpolator280 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator280->setDEF("Stop_r_ring2_RotationInterpolator");
OrientationInterpolator280->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator280->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator280);

COrientationInterpolator* OrientationInterpolator281 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator281->setDEF("Stop_r_ring3_RotationInterpolator");
OrientationInterpolator281->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator281->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator281);

COrientationInterpolator* OrientationInterpolator282 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator282->setDEF("Stop_r_pinky0_RotationInterpolator");
OrientationInterpolator282->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator282->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator282);

COrientationInterpolator* OrientationInterpolator283 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator283->setDEF("Stop_r_pinky1_RotationInterpolator");
OrientationInterpolator283->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator283->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator283);

COrientationInterpolator* OrientationInterpolator284 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator284->setDEF("Stop_r_pinky2_RotationInterpolator");
OrientationInterpolator284->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator284->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator284);

COrientationInterpolator* OrientationInterpolator285 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator285->setDEF("Stop_r_pinky3_RotationInterpolator");
OrientationInterpolator285->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator285->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group194->addChildren(*OrientationInterpolator285);

group->addChildren(*Group194);

CGroup* Group286 = (CGroup *)(m_pScene.createNode("Group"));
Group286->setDEF("StandAnimation");
CTimeSensor* TimeSensor287 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor287->setDEF("StandTimer");
TimeSensor287->setCycleInterval(5.73);
TimeSensor287->setLoop(True);
Group286->addChildren(*TimeSensor287);

COrientationInterpolator* OrientationInterpolator288 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator288->setDEF("Stand_r_metatarsal_PitchInterpolator");
OrientationInterpolator288->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator288->setKeyValue(new float[24]{1,0,0,0,-1,0,0,0.015,1,0,0,0.17,-1,0,0,0.025,1,0,0,0.01,1,0,0,0});
Group286->addChildren(*OrientationInterpolator288);

COrientationInterpolator* OrientationInterpolator289 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator289->setDEF("Stand_r_ankle_RotationInterpolator");
OrientationInterpolator289->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator289->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group286->addChildren(*OrientationInterpolator289);

COrientationInterpolator* OrientationInterpolator290 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator290->setDEF("Stand_r_knee_RotationInterpolator");
OrientationInterpolator290->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator290->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group286->addChildren(*OrientationInterpolator290);

COrientationInterpolator* OrientationInterpolator291 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator291->setDEF("Stand_r_hip_RotationInterpolator");
OrientationInterpolator291->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator291->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group286->addChildren(*OrientationInterpolator291);

COrientationInterpolator* OrientationInterpolator292 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator292->setDEF("Stand_l_ankle_RotationInterpolator");
OrientationInterpolator292->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator292->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group286->addChildren(*OrientationInterpolator292);

COrientationInterpolator* OrientationInterpolator293 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator293->setDEF("Stand_l_knee_RotationInterpolator");
OrientationInterpolator293->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator293->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group286->addChildren(*OrientationInterpolator293);

COrientationInterpolator* OrientationInterpolator294 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator294->setDEF("Stand_l_hip_RotationInterpolator");
OrientationInterpolator294->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator294->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group286->addChildren(*OrientationInterpolator294);

COrientationInterpolator* OrientationInterpolator295 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator295->setDEF("Stand_r_wrist_RotationInterpolator");
OrientationInterpolator295->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator295->setKeyValue(new float[12]{0,0,1,0,0,0,-1,0.25,0,0,1,0});
Group286->addChildren(*OrientationInterpolator295);

COrientationInterpolator* OrientationInterpolator296 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator296->setDEF("Stand_r_elbow_RotationInterpolator");
OrientationInterpolator296->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator296->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group286->addChildren(*OrientationInterpolator296);

COrientationInterpolator* OrientationInterpolator297 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator297->setDEF("Stand_r_shoulder_RotationInterpolator");
OrientationInterpolator297->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator297->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group286->addChildren(*OrientationInterpolator297);

COrientationInterpolator* OrientationInterpolator298 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator298->setDEF("Stand_l_wrist_RotationInterpolator");
OrientationInterpolator298->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator298->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group286->addChildren(*OrientationInterpolator298);

COrientationInterpolator* OrientationInterpolator299 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator299->setDEF("Stand_l_elbow_RotationInterpolator");
OrientationInterpolator299->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator299->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group286->addChildren(*OrientationInterpolator299);

COrientationInterpolator* OrientationInterpolator300 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator300->setDEF("Stand_l_shoulder_RotationInterpolator");
OrientationInterpolator300->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator300->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group286->addChildren(*OrientationInterpolator300);

COrientationInterpolator* OrientationInterpolator301 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator301->setDEF("Stand_head_RotationInterpolator");
OrientationInterpolator301->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator301->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group286->addChildren(*OrientationInterpolator301);

COrientationInterpolator* OrientationInterpolator302 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator302->setDEF("Stand_neck_RotationInterpolator");
OrientationInterpolator302->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator302->setKeyValue(new float[12]{0,0,1,0,-1,0,0,0.5,0,0,1,0});
Group286->addChildren(*OrientationInterpolator302);

COrientationInterpolator* OrientationInterpolator303 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator303->setDEF("Stand_l_eyeball_RotationInterpolator");
OrientationInterpolator303->setKey(new float[4]{0,0.4,0.7,1}, 4);
OrientationInterpolator303->setKeyValue(new float[16]{0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0});
Group286->addChildren(*OrientationInterpolator303);

COrientationInterpolator* OrientationInterpolator304 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator304->setDEF("Stand_r_eyeball_RotationInterpolator");
OrientationInterpolator304->setKey(new float[4]{0,0.4,0.7,1}, 4);
OrientationInterpolator304->setKeyValue(new float[16]{0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0});
Group286->addChildren(*OrientationInterpolator304);

COrientationInterpolator* OrientationInterpolator305 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator305->setDEF("Stand_lower_body_RotationInterpolator");
OrientationInterpolator305->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator305->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group286->addChildren(*OrientationInterpolator305);

COrientationInterpolator* OrientationInterpolator306 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator306->setDEF("Stand_upper_body_RotationInterpolator");
OrientationInterpolator306->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator306->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group286->addChildren(*OrientationInterpolator306);

COrientationInterpolator* OrientationInterpolator307 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator307->setDEF("Stand_whole_body_RotationInterpolator");
OrientationInterpolator307->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator307->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group286->addChildren(*OrientationInterpolator307);

CPositionInterpolator* PositionInterpolator308 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator308->setDEF("Stand_whole_body_TranslationInterpolator");
PositionInterpolator308->setKey(new float[3]{0,0.5,1}, 3);
PositionInterpolator308->setKeyValue(new float[9]{0,0,0,0,0,0,0,0,0});
Group286->addChildren(*PositionInterpolator308);

COrientationInterpolator* OrientationInterpolator309 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator309->setDEF("Stand_l_sternoclavicular_RollInterpolator");
OrientationInterpolator309->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator309->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group286->addChildren(*OrientationInterpolator309);

COrientationInterpolator* OrientationInterpolator310 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator310->setDEF("Stand_l_acromioclavicular_RollInterpolator");
OrientationInterpolator310->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator310->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group286->addChildren(*OrientationInterpolator310);

COrientationInterpolator* OrientationInterpolator311 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator311->setDEF("Stand_r_sternoclavicular_RollInterpolator");
OrientationInterpolator311->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator311->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group286->addChildren(*OrientationInterpolator311);

COrientationInterpolator* OrientationInterpolator312 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator312->setDEF("Stand_r_acromioclavicular_RollInterpolator");
OrientationInterpolator312->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator312->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group286->addChildren(*OrientationInterpolator312);

COrientationInterpolator* OrientationInterpolator313 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator313->setDEF("Stand_sacroiliac_YawInterpolator");
OrientationInterpolator313->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator313->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group286->addChildren(*OrientationInterpolator313);

COrientationInterpolator* OrientationInterpolator314 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator314->setDEF("Stand_vl5_YawInterpolator");
OrientationInterpolator314->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator314->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group286->addChildren(*OrientationInterpolator314);

COrientationInterpolator* OrientationInterpolator315 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator315->setDEF("Stand_vc6_YawInterpolator");
OrientationInterpolator315->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator315->setKeyValue(new float[28]{0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,0,0});
Group286->addChildren(*OrientationInterpolator315);

COrientationInterpolator* OrientationInterpolator316 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator316->setDEF("Stand_l_thumb1_PitchInterpolator");
OrientationInterpolator316->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator316->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group286->addChildren(*OrientationInterpolator316);

COrientationInterpolator* OrientationInterpolator317 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator317->setDEF("Stand_r_thumb1_PitchInterpolator");
OrientationInterpolator317->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator317->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.5,1,0,0,0.1,1,0,0,0.27,1,0,0,0.2,1,0,0,0});
Group286->addChildren(*OrientationInterpolator317);

COrientationInterpolator* OrientationInterpolator318 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator318->setDEF("Stand_r_index1_RollInterpolator");
OrientationInterpolator318->setKey(new float[6]{0,0.2,0.4,0.5,0.8,1}, 6);
OrientationInterpolator318->setKeyValue(new float[24]{0,0,1,0,0,0,1,0.1,0,0,1,0.2,0,0,1,0.3,0,0,1,0,0,0,1,0});
Group286->addChildren(*OrientationInterpolator318);

COrientationInterpolator* OrientationInterpolator319 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator319->setDEF("Stand_r_index2_RollInterpolator");
OrientationInterpolator319->setKey(new float[6]{0,0.2,0.4,0.5,0.8,1}, 6);
OrientationInterpolator319->setKeyValue(new float[24]{0,0,1,0,0,0,1,0.4,0,0,1,0.32,0,0,1,0.25,0,0,1,0.2,0,0,1,0});
Group286->addChildren(*OrientationInterpolator319);

COrientationInterpolator* OrientationInterpolator320 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator320->setDEF("Stand_r_index3_RollInterpolator");
OrientationInterpolator320->setKey(new float[6]{0,0.2,0.4,0.5,0.8,1}, 6);
OrientationInterpolator320->setKeyValue(new float[24]{0,0,1,0,0,0,1,0.2,0,0,1,0.3,0,0,1,0.35,0,0,1,0.2,0,0,1,0});
Group286->addChildren(*OrientationInterpolator320);

group->addChildren(*Group286);

CGroup* Group321 = (CGroup *)(m_pScene.createNode("Group"));
Group321->setDEF("PitchesAnimation");
CTimeSensor* TimeSensor322 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor322->setDEF("PitchTimer");
TimeSensor322->setCycleInterval(5.73);
TimeSensor322->setLoop(True);
Group321->addChildren(*TimeSensor322);

COrientationInterpolator* OrientationInterpolator323 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator323->setDEF("Pitch_r_metatarsal_PitchInterpolator");
OrientationInterpolator323->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator323->setKeyValue(new float[24]{1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0});
Group321->addChildren(*OrientationInterpolator323);

COrientationInterpolator* OrientationInterpolator324 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator324->setDEF("Pitches_r_ankle_RotationInterpolator");
OrientationInterpolator324->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator324->setKeyValue(new float[20]{0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0});
Group321->addChildren(*OrientationInterpolator324);

COrientationInterpolator* OrientationInterpolator325 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator325->setDEF("Pitches_r_knee_RotationInterpolator");
OrientationInterpolator325->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator325->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group321->addChildren(*OrientationInterpolator325);

COrientationInterpolator* OrientationInterpolator326 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator326->setDEF("Pitches_r_hip_RotationInterpolator");
OrientationInterpolator326->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator326->setKeyValue(new float[20]{0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0});
Group321->addChildren(*OrientationInterpolator326);

COrientationInterpolator* OrientationInterpolator327 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator327->setDEF("Pitches_l_ankle_RotationInterpolator");
OrientationInterpolator327->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator327->setKeyValue(new float[20]{0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0});
Group321->addChildren(*OrientationInterpolator327);

COrientationInterpolator* OrientationInterpolator328 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator328->setDEF("Pitches_l_knee_RotationInterpolator");
OrientationInterpolator328->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator328->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group321->addChildren(*OrientationInterpolator328);

COrientationInterpolator* OrientationInterpolator329 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator329->setDEF("Pitches_l_hip_RotationInterpolator");
OrientationInterpolator329->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator329->setKeyValue(new float[20]{0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0});
Group321->addChildren(*OrientationInterpolator329);

COrientationInterpolator* OrientationInterpolator330 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator330->setDEF("Pitches_r_wrist_RotationInterpolator");
OrientationInterpolator330->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator330->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group321->addChildren(*OrientationInterpolator330);

COrientationInterpolator* OrientationInterpolator331 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator331->setDEF("Pitches_r_elbow_RotationInterpolator");
OrientationInterpolator331->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator331->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group321->addChildren(*OrientationInterpolator331);

COrientationInterpolator* OrientationInterpolator332 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator332->setDEF("Pitches_r_shoulder_RotationInterpolator");
OrientationInterpolator332->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator332->setKeyValue(new float[20]{0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0});
Group321->addChildren(*OrientationInterpolator332);

COrientationInterpolator* OrientationInterpolator333 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator333->setDEF("Pitches_l_wrist_RotationInterpolator");
OrientationInterpolator333->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator333->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group321->addChildren(*OrientationInterpolator333);

COrientationInterpolator* OrientationInterpolator334 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator334->setDEF("Pitches_l_elbow_RotationInterpolator");
OrientationInterpolator334->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator334->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group321->addChildren(*OrientationInterpolator334);

COrientationInterpolator* OrientationInterpolator335 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator335->setDEF("Pitches_l_shoulder_RotationInterpolator");
OrientationInterpolator335->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator335->setKeyValue(new float[20]{0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0});
Group321->addChildren(*OrientationInterpolator335);

COrientationInterpolator* OrientationInterpolator336 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator336->setDEF("Pitches_head_RotationInterpolator");
OrientationInterpolator336->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator336->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group321->addChildren(*OrientationInterpolator336);

COrientationInterpolator* OrientationInterpolator337 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator337->setDEF("Pitches_neck_RotationInterpolator");
OrientationInterpolator337->setKey(new float[4]{0,0.25,0.55,1}, 4);
OrientationInterpolator337->setKeyValue(new float[16]{0,0,1,0,1,0,0,0.55,-1,0,0,1.05,0,0,1,0});
Group321->addChildren(*OrientationInterpolator337);

COrientationInterpolator* OrientationInterpolator338 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator338->setDEF("Pitches_lower_body_RotationInterpolator");
OrientationInterpolator338->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator338->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group321->addChildren(*OrientationInterpolator338);

COrientationInterpolator* OrientationInterpolator339 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator339->setDEF("Pitches_upper_body_RotationInterpolator");
OrientationInterpolator339->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator339->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group321->addChildren(*OrientationInterpolator339);

COrientationInterpolator* OrientationInterpolator340 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator340->setDEF("Pitches_whole_body_RotationInterpolator");
OrientationInterpolator340->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator340->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group321->addChildren(*OrientationInterpolator340);

CPositionInterpolator* PositionInterpolator341 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator341->setDEF("Pitches_whole_body_TranslationInterpolator");
PositionInterpolator341->setKey(new float[9]{0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1}, 9);
PositionInterpolator341->setKeyValue(new float[27]{0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0});
Group321->addChildren(*PositionInterpolator341);

COrientationInterpolator* OrientationInterpolator342 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator342->setDEF("Pitch_l_sternoclavicular_RollInterpolator");
OrientationInterpolator342->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator342->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group321->addChildren(*OrientationInterpolator342);

COrientationInterpolator* OrientationInterpolator343 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator343->setDEF("Pitch_l_acromioclavicular_RollInterpolator");
OrientationInterpolator343->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator343->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group321->addChildren(*OrientationInterpolator343);

COrientationInterpolator* OrientationInterpolator344 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator344->setDEF("Pitch_r_sternoclavicular_RollInterpolator");
OrientationInterpolator344->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator344->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group321->addChildren(*OrientationInterpolator344);

COrientationInterpolator* OrientationInterpolator345 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator345->setDEF("Pitch_r_acromioclavicular_RollInterpolator");
OrientationInterpolator345->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator345->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group321->addChildren(*OrientationInterpolator345);

COrientationInterpolator* OrientationInterpolator346 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator346->setDEF("Pitch_sacroiliac_YawInterpolator");
OrientationInterpolator346->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator346->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group321->addChildren(*OrientationInterpolator346);

COrientationInterpolator* OrientationInterpolator347 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator347->setDEF("Pitch_vl5_YawInterpolator");
OrientationInterpolator347->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator347->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group321->addChildren(*OrientationInterpolator347);

COrientationInterpolator* OrientationInterpolator348 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator348->setDEF("Pitch_vc6_YawInterpolator");
OrientationInterpolator348->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator348->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group321->addChildren(*OrientationInterpolator348);

COrientationInterpolator* OrientationInterpolator349 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator349->setDEF("Pitch_l_thumb1_PitchInterpolator");
OrientationInterpolator349->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator349->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0});
Group321->addChildren(*OrientationInterpolator349);

COrientationInterpolator* OrientationInterpolator350 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator350->setDEF("Pitch_r_thumb1_PitchInterpolator");
OrientationInterpolator350->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator350->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0});
Group321->addChildren(*OrientationInterpolator350);

group->addChildren(*Group321);

CGroup* Group351 = (CGroup *)(m_pScene.createNode("Group"));
Group351->setDEF("YawsAnimation");
CTimeSensor* TimeSensor352 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor352->setDEF("YawTimer");
TimeSensor352->setCycleInterval(5.73);
TimeSensor352->setLoop(True);
Group351->addChildren(*TimeSensor352);

COrientationInterpolator* OrientationInterpolator353 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator353->setDEF("Yaw_r_metatarsal_PitchInterpolator");
OrientationInterpolator353->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator353->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group351->addChildren(*OrientationInterpolator353);

COrientationInterpolator* OrientationInterpolator354 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator354->setDEF("Yaws_r_ankle_RotationInterpolator");
OrientationInterpolator354->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator354->setKeyValue(new float[20]{0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0});
Group351->addChildren(*OrientationInterpolator354);

COrientationInterpolator* OrientationInterpolator355 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator355->setDEF("Yaws_r_knee_RotationInterpolator");
OrientationInterpolator355->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator355->setKeyValue(new float[20]{0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0});
Group351->addChildren(*OrientationInterpolator355);

COrientationInterpolator* OrientationInterpolator356 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator356->setDEF("Yaws_r_hip_RotationInterpolator");
OrientationInterpolator356->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator356->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group351->addChildren(*OrientationInterpolator356);

COrientationInterpolator* OrientationInterpolator357 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator357->setDEF("Yaws_l_ankle_RotationInterpolator");
OrientationInterpolator357->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator357->setKeyValue(new float[20]{0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0});
Group351->addChildren(*OrientationInterpolator357);

COrientationInterpolator* OrientationInterpolator358 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator358->setDEF("Yaws_l_knee_RotationInterpolator");
OrientationInterpolator358->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator358->setKeyValue(new float[20]{0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0});
Group351->addChildren(*OrientationInterpolator358);

COrientationInterpolator* OrientationInterpolator359 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator359->setDEF("Yaws_l_hip_RotationInterpolator");
OrientationInterpolator359->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator359->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group351->addChildren(*OrientationInterpolator359);

COrientationInterpolator* OrientationInterpolator360 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator360->setDEF("Yaws_r_wrist_RotationInterpolator");
OrientationInterpolator360->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator360->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group351->addChildren(*OrientationInterpolator360);

COrientationInterpolator* OrientationInterpolator361 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator361->setDEF("Yaws_r_elbow_RotationInterpolator");
OrientationInterpolator361->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator361->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group351->addChildren(*OrientationInterpolator361);

COrientationInterpolator* OrientationInterpolator362 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator362->setDEF("Yaws_r_shoulder_RotationInterpolator");
OrientationInterpolator362->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator362->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group351->addChildren(*OrientationInterpolator362);

COrientationInterpolator* OrientationInterpolator363 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator363->setDEF("Yaws_l_wrist_RotationInterpolator");
OrientationInterpolator363->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator363->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group351->addChildren(*OrientationInterpolator363);

COrientationInterpolator* OrientationInterpolator364 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator364->setDEF("Yaws_l_elbow_RotationInterpolator");
OrientationInterpolator364->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator364->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group351->addChildren(*OrientationInterpolator364);

COrientationInterpolator* OrientationInterpolator365 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator365->setDEF("Yaws_l_shoulder_RotationInterpolator");
OrientationInterpolator365->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator365->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group351->addChildren(*OrientationInterpolator365);

COrientationInterpolator* OrientationInterpolator366 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator366->setDEF("Yaws_head_RotationInterpolator");
OrientationInterpolator366->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator366->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group351->addChildren(*OrientationInterpolator366);

COrientationInterpolator* OrientationInterpolator367 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator367->setDEF("Yaws_neck_RotationInterpolator");
OrientationInterpolator367->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator367->setKeyValue(new float[20]{0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0});
Group351->addChildren(*OrientationInterpolator367);

COrientationInterpolator* OrientationInterpolator368 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator368->setDEF("Yaws_upper_body_RotationInterpolator");
OrientationInterpolator368->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator368->setKeyValue(new float[20]{0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0});
Group351->addChildren(*OrientationInterpolator368);

COrientationInterpolator* OrientationInterpolator369 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator369->setDEF("Yaws_lower_body_RotationInterpolator");
OrientationInterpolator369->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator369->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group351->addChildren(*OrientationInterpolator369);

COrientationInterpolator* OrientationInterpolator370 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator370->setDEF("Yaws_whole_body_RotationInterpolator");
OrientationInterpolator370->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator370->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group351->addChildren(*OrientationInterpolator370);

CPositionInterpolator* PositionInterpolator371 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator371->setDEF("Yaws_whole_body_TranslationInterpolator");
PositionInterpolator371->setKey(new float[3]{0,0.5,1}, 3);
PositionInterpolator371->setKeyValue(new float[9]{0,0,0,0,0,0,0,0,0});
Group351->addChildren(*PositionInterpolator371);

COrientationInterpolator* OrientationInterpolator372 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator372->setDEF("Yaw_l_sternoclavicular_RollInterpolator");
OrientationInterpolator372->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator372->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group351->addChildren(*OrientationInterpolator372);

COrientationInterpolator* OrientationInterpolator373 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator373->setDEF("Yaw_l_acromioclavicular_RollInterpolator");
OrientationInterpolator373->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator373->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group351->addChildren(*OrientationInterpolator373);

COrientationInterpolator* OrientationInterpolator374 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator374->setDEF("Yaw_r_sternoclavicular_RollInterpolator");
OrientationInterpolator374->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator374->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group351->addChildren(*OrientationInterpolator374);

COrientationInterpolator* OrientationInterpolator375 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator375->setDEF("Yaw_r_acromioclavicular_RollInterpolator");
OrientationInterpolator375->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator375->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group351->addChildren(*OrientationInterpolator375);

COrientationInterpolator* OrientationInterpolator376 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator376->setDEF("Yaw_sacroiliac_YawInterpolator");
OrientationInterpolator376->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator376->setKeyValue(new float[24]{0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,0,0.24,0,-1,0,0.4,0,1,0,0});
Group351->addChildren(*OrientationInterpolator376);

COrientationInterpolator* OrientationInterpolator377 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator377->setDEF("Yaw_vl5_YawInterpolator");
OrientationInterpolator377->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator377->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group351->addChildren(*OrientationInterpolator377);

COrientationInterpolator* OrientationInterpolator378 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator378->setDEF("Yaw_vc6_YawInterpolator");
OrientationInterpolator378->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator378->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group351->addChildren(*OrientationInterpolator378);

COrientationInterpolator* OrientationInterpolator379 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator379->setDEF("Yaw_l_thumb1_PitchInterpolator");
OrientationInterpolator379->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator379->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group351->addChildren(*OrientationInterpolator379);

COrientationInterpolator* OrientationInterpolator380 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator380->setDEF("Yaw_r_thumb1_PitchInterpolator");
OrientationInterpolator380->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator380->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group351->addChildren(*OrientationInterpolator380);

group->addChildren(*Group351);

CGroup* Group381 = (CGroup *)(m_pScene.createNode("Group"));
Group381->setDEF("RollsAnimation");
CTimeSensor* TimeSensor382 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor382->setDEF("RollTimer");
TimeSensor382->setCycleInterval(5.73);
TimeSensor382->setLoop(True);
Group381->addChildren(*TimeSensor382);

COrientationInterpolator* OrientationInterpolator383 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator383->setDEF("Roll_r_metatarsal_PitchInterpolator");
OrientationInterpolator383->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator383->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group381->addChildren(*OrientationInterpolator383);

COrientationInterpolator* OrientationInterpolator384 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator384->setDEF("Rolls_r_ankle_RotationInterpolator");
OrientationInterpolator384->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator384->setKeyValue(new float[20]{0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group381->addChildren(*OrientationInterpolator384);

COrientationInterpolator* OrientationInterpolator385 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator385->setDEF("Rolls_r_knee_RotationInterpolator");
OrientationInterpolator385->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator385->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group381->addChildren(*OrientationInterpolator385);

COrientationInterpolator* OrientationInterpolator386 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator386->setDEF("Rolls_r_hip_RotationInterpolator");
OrientationInterpolator386->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator386->setKeyValue(new float[20]{0,0,-1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0});
Group381->addChildren(*OrientationInterpolator386);

COrientationInterpolator* OrientationInterpolator387 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator387->setDEF("Rolls_l_ankle_RotationInterpolator");
OrientationInterpolator387->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator387->setKeyValue(new float[20]{0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0});
Group381->addChildren(*OrientationInterpolator387);

COrientationInterpolator* OrientationInterpolator388 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator388->setDEF("Rolls_l_knee_RotationInterpolator");
OrientationInterpolator388->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator388->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group381->addChildren(*OrientationInterpolator388);

COrientationInterpolator* OrientationInterpolator389 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator389->setDEF("Rolls_l_hip_RotationInterpolator");
OrientationInterpolator389->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator389->setKeyValue(new float[20]{0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group381->addChildren(*OrientationInterpolator389);

COrientationInterpolator* OrientationInterpolator390 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator390->setDEF("Rolls_r_wrist_RotationInterpolator");
OrientationInterpolator390->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator390->setKeyValue(new float[20]{0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group381->addChildren(*OrientationInterpolator390);

COrientationInterpolator* OrientationInterpolator391 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator391->setDEF("Rolls_r_elbow_RotationInterpolator");
OrientationInterpolator391->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator391->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group381->addChildren(*OrientationInterpolator391);

COrientationInterpolator* OrientationInterpolator392 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator392->setDEF("Rolls_r_shoulder_RotationInterpolator");
OrientationInterpolator392->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator392->setKeyValue(new float[20]{0,0,1,0,0,0,-1,1.5,0,0,-1,3,0,0,-1,1.5,0,0,1,0});
Group381->addChildren(*OrientationInterpolator392);

COrientationInterpolator* OrientationInterpolator393 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator393->setDEF("Rolls_l_wrist_RotationInterpolator");
OrientationInterpolator393->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator393->setKeyValue(new float[20]{0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0});
Group381->addChildren(*OrientationInterpolator393);

COrientationInterpolator* OrientationInterpolator394 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator394->setDEF("Rolls_l_elbow_RotationInterpolator");
OrientationInterpolator394->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator394->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group381->addChildren(*OrientationInterpolator394);

COrientationInterpolator* OrientationInterpolator395 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator395->setDEF("Rolls_l_shoulder_RotationInterpolator");
OrientationInterpolator395->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator395->setKeyValue(new float[20]{0,0,1,0,0,0,1,1.5,0,0,1,3,0,0,1,1.5,0,0,1,0});
Group381->addChildren(*OrientationInterpolator395);

COrientationInterpolator* OrientationInterpolator396 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator396->setDEF("Rolls_head_RotationInterpolator");
OrientationInterpolator396->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator396->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group381->addChildren(*OrientationInterpolator396);

COrientationInterpolator* OrientationInterpolator397 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator397->setDEF("Rolls_neck_RotationInterpolator");
OrientationInterpolator397->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator397->setKeyValue(new float[20]{0,0,1,0,0,0,1,1.25,0,0,1,0,0,0,-1,1.25,0,0,1,0});
Group381->addChildren(*OrientationInterpolator397);

COrientationInterpolator* OrientationInterpolator398 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator398->setDEF("Rolls_lower_body_RotationInterpolator");
OrientationInterpolator398->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator398->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group381->addChildren(*OrientationInterpolator398);

COrientationInterpolator* OrientationInterpolator399 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator399->setDEF("Rolls_upper_body_RotationInterpolator");
OrientationInterpolator399->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator399->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group381->addChildren(*OrientationInterpolator399);

COrientationInterpolator* OrientationInterpolator400 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator400->setDEF("Rolls_whole_body_RotationInterpolator");
OrientationInterpolator400->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator400->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group381->addChildren(*OrientationInterpolator400);

CPositionInterpolator* PositionInterpolator401 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator401->setDEF("Rolls_whole_body_TranslationInterpolator");
PositionInterpolator401->setKey(new float[9]{0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1}, 9);
PositionInterpolator401->setKeyValue(new float[27]{0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0});
Group381->addChildren(*PositionInterpolator401);

COrientationInterpolator* OrientationInterpolator402 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator402->setDEF("Roll_l_sternoclavicular_RollInterpolator");
OrientationInterpolator402->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator402->setKeyValue(new float[24]{0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0});
Group381->addChildren(*OrientationInterpolator402);

COrientationInterpolator* OrientationInterpolator403 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator403->setDEF("Roll_l_acromioclavicular_RollInterpolator");
OrientationInterpolator403->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator403->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0});
Group381->addChildren(*OrientationInterpolator403);

COrientationInterpolator* OrientationInterpolator404 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator404->setDEF("Roll_r_sternoclavicular_RollInterpolator");
OrientationInterpolator404->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator404->setKeyValue(new float[24]{0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0});
Group381->addChildren(*OrientationInterpolator404);

COrientationInterpolator* OrientationInterpolator405 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator405->setDEF("Roll_r_acromioclavicular_RollInterpolator");
OrientationInterpolator405->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator405->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0});
Group381->addChildren(*OrientationInterpolator405);

COrientationInterpolator* OrientationInterpolator406 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator406->setDEF("Roll_sacroiliac_YawInterpolator");
OrientationInterpolator406->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator406->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group381->addChildren(*OrientationInterpolator406);

COrientationInterpolator* OrientationInterpolator407 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator407->setDEF("Roll_vl5_YawInterpolator");
OrientationInterpolator407->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator407->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group381->addChildren(*OrientationInterpolator407);

COrientationInterpolator* OrientationInterpolator408 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator408->setDEF("Roll_vc6_YawInterpolator");
OrientationInterpolator408->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator408->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group381->addChildren(*OrientationInterpolator408);

COrientationInterpolator* OrientationInterpolator409 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator409->setDEF("Roll_l_thumb1_PitchInterpolator");
OrientationInterpolator409->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator409->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group381->addChildren(*OrientationInterpolator409);

COrientationInterpolator* OrientationInterpolator410 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator410->setDEF("Roll_r_thumb1_PitchInterpolator");
OrientationInterpolator410->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator410->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group381->addChildren(*OrientationInterpolator410);

group->addChildren(*Group381);

CGroup* Group411 = (CGroup *)(m_pScene.createNode("Group"));
Group411->setDEF("WalkAnimation");
CTimeSensor* TimeSensor412 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor412->setDEF("WalkTimer");
TimeSensor412->setCycleInterval(1.73);
TimeSensor412->setLoop(True);
Group411->addChildren(*TimeSensor412);

COrientationInterpolator* OrientationInterpolator413 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator413->setDEF("Walk_r_metatarsal_PitchInterpolator");
OrientationInterpolator413->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator413->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group411->addChildren(*OrientationInterpolator413);

COrientationInterpolator* OrientationInterpolator414 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator414->setDEF("Walk_r_ankle_RotationInterpolator");
OrientationInterpolator414->setKey(new float[11]{0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1}, 11);
OrientationInterpolator414->setKeyValue(new float[44]{0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0});
Group411->addChildren(*OrientationInterpolator414);

COrientationInterpolator* OrientationInterpolator415 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator415->setDEF("Walk_r_knee_RotationInterpolator");
OrientationInterpolator415->setKey(new float[10]{0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1}, 10);
OrientationInterpolator415->setKeyValue(new float[40]{1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573});
Group411->addChildren(*OrientationInterpolator415);

COrientationInterpolator* OrientationInterpolator416 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator416->setDEF("Walk_r_hip_RotationInterpolator");
OrientationInterpolator416->setKey(new float[10]{0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1}, 10);
OrientationInterpolator416->setKeyValue(new float[40]{-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481});
Group411->addChildren(*OrientationInterpolator416);

COrientationInterpolator* OrientationInterpolator417 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator417->setDEF("Walk_l_ankle_RotationInterpolator");
OrientationInterpolator417->setKey(new float[7]{0,0.125,0.2083,0.375,0.6667,0.9167,1}, 7);
OrientationInterpolator417->setKeyValue(new float[28]{-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714});
Group411->addChildren(*OrientationInterpolator417);

COrientationInterpolator* OrientationInterpolator418 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator418->setDEF("Walk_l_knee_RotationInterpolator");
OrientationInterpolator418->setKey(new float[8]{0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1}, 8);
OrientationInterpolator418->setKeyValue(new float[32]{1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226});
Group411->addChildren(*OrientationInterpolator418);

COrientationInterpolator* OrientationInterpolator419 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator419->setDEF("Walk_l_hip_RotationInterpolator");
OrientationInterpolator419->setKey(new float[8]{0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1}, 8);
OrientationInterpolator419->setKeyValue(new float[32]{-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865});
Group411->addChildren(*OrientationInterpolator419);

COrientationInterpolator* OrientationInterpolator420 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator420->setDEF("Walk_lower_body_RotationInterpolator");
OrientationInterpolator420->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator420->setKeyValue(new float[12]{0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056});
Group411->addChildren(*OrientationInterpolator420);

COrientationInterpolator* OrientationInterpolator421 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator421->setDEF("Walk_r_wrist_RotationInterpolator");
OrientationInterpolator421->setKey(new float[4]{0,0.375,0.9167,1}, 4);
OrientationInterpolator421->setKeyValue(new float[16]{-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346});
Group411->addChildren(*OrientationInterpolator421);

COrientationInterpolator* OrientationInterpolator422 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator422->setDEF("Walk_r_elbow_RotationInterpolator");
OrientationInterpolator422->setKey(new float[4]{0,0.375,0.9167,1}, 4);
OrientationInterpolator422->setKeyValue(new float[16]{-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508});
Group411->addChildren(*OrientationInterpolator422);

COrientationInterpolator* OrientationInterpolator423 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator423->setDEF("Walk_r_shoulder_RotationInterpolator");
OrientationInterpolator423->setKey(new float[4]{0,0.375,0.9167,1}, 4);
OrientationInterpolator423->setKeyValue(new float[16]{-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346});
Group411->addChildren(*OrientationInterpolator423);

COrientationInterpolator* OrientationInterpolator424 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator424->setDEF("Walk_l_wrist_RotationInterpolator");
OrientationInterpolator424->setKey(new float[4]{0,0.375,0.9167,1}, 4);
OrientationInterpolator424->setKeyValue(new float[16]{0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076});
Group411->addChildren(*OrientationInterpolator424);

COrientationInterpolator* OrientationInterpolator425 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator425->setDEF("Walk_l_elbow_RotationInterpolator");
OrientationInterpolator425->setKey(new float[4]{0,0.375,0.9167,1}, 4);
OrientationInterpolator425->setKeyValue(new float[16]{-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878});
Group411->addChildren(*OrientationInterpolator425);

COrientationInterpolator* OrientationInterpolator426 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator426->setDEF("Walk_l_shoulder_RotationInterpolator");
OrientationInterpolator426->setKey(new float[4]{0,0.375,0.9167,1}, 4);
OrientationInterpolator426->setKeyValue(new float[16]{1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189});
Group411->addChildren(*OrientationInterpolator426);

COrientationInterpolator* OrientationInterpolator427 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator427->setDEF("Walk_head_RotationInterpolator");
OrientationInterpolator427->setKey(new float[10]{0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1}, 10);
OrientationInterpolator427->setKeyValue(new float[40]{0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642});
Group411->addChildren(*OrientationInterpolator427);

COrientationInterpolator* OrientationInterpolator428 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator428->setDEF("Walk_neck_RotationInterpolator");
OrientationInterpolator428->setKey(new float[2]{0,1}, 2);
OrientationInterpolator428->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group411->addChildren(*OrientationInterpolator428);

COrientationInterpolator* OrientationInterpolator429 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator429->setDEF("Walk_upper_body_RotationInterpolator");
OrientationInterpolator429->setKey(new float[6]{0,0.2083,0.375,0.75,0.8333,1}, 6);
OrientationInterpolator429->setKeyValue(new float[24]{0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826});
Group411->addChildren(*OrientationInterpolator429);

COrientationInterpolator* OrientationInterpolator430 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator430->setDEF("Walk_whole_body_RotationInterpolator");
OrientationInterpolator430->setKey(new float[2]{0,1}, 2);
OrientationInterpolator430->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group411->addChildren(*OrientationInterpolator430);

CPositionInterpolator* PositionInterpolator431 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator431->setDEF("Walk_whole_body_TranslationInterpolator");
PositionInterpolator431->setKey(new float[19]{0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1}, 19);
PositionInterpolator431->setKeyValue(new float[57]{0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0});
Group411->addChildren(*PositionInterpolator431);

COrientationInterpolator* OrientationInterpolator432 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator432->setDEF("Walk_l_sternoclavicular_RollInterpolator");
OrientationInterpolator432->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator432->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group411->addChildren(*OrientationInterpolator432);

COrientationInterpolator* OrientationInterpolator433 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator433->setDEF("Walk_l_acromioclavicular_RollInterpolator");
OrientationInterpolator433->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator433->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group411->addChildren(*OrientationInterpolator433);

COrientationInterpolator* OrientationInterpolator434 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator434->setDEF("Walk_r_sternoclavicular_RollInterpolator");
OrientationInterpolator434->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator434->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group411->addChildren(*OrientationInterpolator434);

COrientationInterpolator* OrientationInterpolator435 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator435->setDEF("Walk_r_acromioclavicular_RollInterpolator");
OrientationInterpolator435->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator435->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group411->addChildren(*OrientationInterpolator435);

COrientationInterpolator* OrientationInterpolator436 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator436->setDEF("Walk_sacroiliac_YawInterpolator");
OrientationInterpolator436->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator436->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group411->addChildren(*OrientationInterpolator436);

COrientationInterpolator* OrientationInterpolator437 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator437->setDEF("Walk_vl5_YawInterpolator");
OrientationInterpolator437->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator437->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group411->addChildren(*OrientationInterpolator437);

COrientationInterpolator* OrientationInterpolator438 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator438->setDEF("Walk_vc6_YawInterpolator");
OrientationInterpolator438->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator438->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group411->addChildren(*OrientationInterpolator438);

COrientationInterpolator* OrientationInterpolator439 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator439->setDEF("Walk_l_thumb1_PitchInterpolator");
OrientationInterpolator439->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator439->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0});
Group411->addChildren(*OrientationInterpolator439);

COrientationInterpolator* OrientationInterpolator440 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator440->setDEF("Walk_r_thumb1_PitchInterpolator");
OrientationInterpolator440->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator440->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0});
Group411->addChildren(*OrientationInterpolator440);

group->addChildren(*Group411);

CGroup* Group441 = (CGroup *)(m_pScene.createNode("Group"));
Group441->setDEF("RunAnimation");
CTimeSensor* TimeSensor442 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor442->setDEF("RunTimer");
TimeSensor442->setCycleInterval(0.9);
TimeSensor442->setLoop(True);
Group441->addChildren(*TimeSensor442);

COrientationInterpolator* OrientationInterpolator443 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator443->setDEF("Run_r_metatarsal_PitchInterpolator");
OrientationInterpolator443->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator443->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group441->addChildren(*OrientationInterpolator443);

COrientationInterpolator* OrientationInterpolator444 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator444->setDEF("Run_l_hip_RotationInterpolator_Run");
OrientationInterpolator444->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator444->setKeyValue(new float[20]{-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42});
Group441->addChildren(*OrientationInterpolator444);

COrientationInterpolator* OrientationInterpolator445 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator445->setDEF("Run_l_knee_RotationInterpolator_Run");
OrientationInterpolator445->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator445->setKeyValue(new float[20]{1,0,0,1.01,1,0,0,0.426,1,0,0,0.705,1,0,0,2.179,1,0,0,1.01});
Group441->addChildren(*OrientationInterpolator445);

COrientationInterpolator* OrientationInterpolator446 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator446->setDEF("Run_l_ankle_RotationInterpolator_Run");
OrientationInterpolator446->setKey(new float[5]{0,0.22,0.3,0.4,1}, 5);
OrientationInterpolator446->setKeyValue(new float[20]{1,0,0,0.0374,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03574});
Group441->addChildren(*OrientationInterpolator446);

COrientationInterpolator* OrientationInterpolator447 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator447->setDEF("Run_r_hip_RotationInterpolator_Run");
OrientationInterpolator447->setKey(new float[5]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator447->setKeyValue(new float[20]{0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9});
Group441->addChildren(*OrientationInterpolator447);

COrientationInterpolator* OrientationInterpolator448 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator448->setDEF("Run_r_knee_RotationInterpolator_Run");
OrientationInterpolator448->setKey(new float[5]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator448->setKeyValue(new float[20]{1,0,0,0.705,1,0,0,2.179,1,0,0,1.01,1,0,0,0.426,1,0,0,0.705});
Group441->addChildren(*OrientationInterpolator448);

COrientationInterpolator* OrientationInterpolator449 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator449->setDEF("Run_r_ankle_RotationInterpolator_Run");
OrientationInterpolator449->setKey(new float[6]{0,0.4,0.71,0.8,0.82,1}, 6);
OrientationInterpolator449->setKeyValue(new float[24]{1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.32,-1,0,0,0.374,-1,0,0,0.3478,1,0,0,0.2323});
Group441->addChildren(*OrientationInterpolator449);

COrientationInterpolator* OrientationInterpolator450 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator450->setDEF("Run_l_shoulder_RotationInterpolator_Run");
OrientationInterpolator450->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator450->setKeyValue(new float[20]{0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5});
Group441->addChildren(*OrientationInterpolator450);

COrientationInterpolator* OrientationInterpolator451 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator451->setDEF("Run_l_elbow_RotationInterpolator_Run");
OrientationInterpolator451->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator451->setKeyValue(new float[20]{-1,0,0,1.85,-0.99,-0.19,0.18,1.35,-1,0,0,0.975,-0.99,-0.09,-0.02,1.55,-1,0,0,1.85});
Group441->addChildren(*OrientationInterpolator451);

COrientationInterpolator* OrientationInterpolator452 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator452->setDEF("Run_l_wrist_RotationInterpolator_Run");
OrientationInterpolator452->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator452->setKeyValue(new float[20]{-0.25,-1,0.08,0.14,0.25,1,0.08,0.14,0,0,1,0,-0.25,1,0.08,-0.14,-0.25,1,0.08,0.14});
Group441->addChildren(*OrientationInterpolator452);

COrientationInterpolator* OrientationInterpolator453 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator453->setDEF("Run_r_shoulder_RotationInterpolator_Run");
OrientationInterpolator453->setKey(new float[5]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator453->setKeyValue(new float[20]{-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85});
Group441->addChildren(*OrientationInterpolator453);

COrientationInterpolator* OrientationInterpolator454 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator454->setDEF("Run_r_elbow_RotationInterpolator_Run");
OrientationInterpolator454->setKey(new float[5]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator454->setKeyValue(new float[20]{-1,0,0,0.975,-0.99,0.09,0.02,1.55,-1,0,0,1.85,-0.99,0.19,-0.18,1.35,-1,0,0,0.975});
Group441->addChildren(*OrientationInterpolator454);

COrientationInterpolator* OrientationInterpolator455 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator455->setDEF("Run_r_wrist_RotationInterpolator_Run");
OrientationInterpolator455->setKey(new float[2]{0,1}, 2);
OrientationInterpolator455->setKeyValue(new float[8]{-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273});
Group441->addChildren(*OrientationInterpolator455);

COrientationInterpolator* OrientationInterpolator456 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator456->setDEF("Run_lower_body_RotationInterpolator_Run");
OrientationInterpolator456->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator456->setKeyValue(new float[20]{0,-1,0,0.125,0,0,1,0,0,1,0,0.125,0,0,1,0,0,-1,0,0.125});
Group441->addChildren(*OrientationInterpolator456);

COrientationInterpolator* OrientationInterpolator457 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator457->setDEF("Run_head_RotationInterpolator_Run");
OrientationInterpolator457->setKey(new float[5]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator457->setKeyValue(new float[20]{1,0,0,0.08,1,0,0,0.12,1,0,0,0.3,1,0,0,0.3,1,0,0,0.08});
Group441->addChildren(*OrientationInterpolator457);

COrientationInterpolator* OrientationInterpolator458 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator458->setDEF("Run_neck_RotationInterpolator_Run");
OrientationInterpolator458->setKey(new float[5]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator458->setKeyValue(new float[20]{0.7,0,0,0.4,-0.7,-0.7,0,0.4,0,0,0,0.4,-0.7,0.7,0,0.4,0.7,0,0,0.4});
Group441->addChildren(*OrientationInterpolator458);

COrientationInterpolator* OrientationInterpolator459 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator459->setDEF("Run_upper_body_RotationInterpolator_Run");
OrientationInterpolator459->setKey(new float[5]{0,0.2545,0.4909,0.7636,1}, 5);
OrientationInterpolator459->setKeyValue(new float[20]{0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5});
Group441->addChildren(*OrientationInterpolator459);

COrientationInterpolator* OrientationInterpolator460 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator460->setDEF("Run_whole_body_RotationInterpolator_Run");
OrientationInterpolator460->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator460->setKeyValue(new float[20]{1,0,0,0.06,1,0,0,0.167,1,0,0,0.06,1,0,0,0.168,1,0,0,0.06});
Group441->addChildren(*OrientationInterpolator460);

CPositionInterpolator* PositionInterpolator461 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator461->setDEF("Run_whole_body_TranslationInterpolator_Run");
PositionInterpolator461->setKey(new float[9]{0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1}, 9);
PositionInterpolator461->setKeyValue(new float[27]{0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0});
Group441->addChildren(*PositionInterpolator461);

COrientationInterpolator* OrientationInterpolator462 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator462->setDEF("Run_l_sternoclavicular_RollInterpolator");
OrientationInterpolator462->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator462->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group441->addChildren(*OrientationInterpolator462);

COrientationInterpolator* OrientationInterpolator463 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator463->setDEF("Run_l_acromioclavicular_RollInterpolator");
OrientationInterpolator463->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator463->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group441->addChildren(*OrientationInterpolator463);

COrientationInterpolator* OrientationInterpolator464 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator464->setDEF("Run_r_sternoclavicular_RollInterpolator");
OrientationInterpolator464->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator464->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group441->addChildren(*OrientationInterpolator464);

COrientationInterpolator* OrientationInterpolator465 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator465->setDEF("Run_r_acromioclavicular_RollInterpolator");
OrientationInterpolator465->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator465->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group441->addChildren(*OrientationInterpolator465);

COrientationInterpolator* OrientationInterpolator466 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator466->setDEF("Run_sacroiliac_YawInterpolator");
OrientationInterpolator466->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator466->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group441->addChildren(*OrientationInterpolator466);

COrientationInterpolator* OrientationInterpolator467 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator467->setDEF("Run_vl5_YawInterpolator");
OrientationInterpolator467->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator467->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group441->addChildren(*OrientationInterpolator467);

COrientationInterpolator* OrientationInterpolator468 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator468->setDEF("Run_vc6_YawInterpolator");
OrientationInterpolator468->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator468->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group441->addChildren(*OrientationInterpolator468);

COrientationInterpolator* OrientationInterpolator469 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator469->setDEF("Run_l_thumb1_PitchInterpolator");
OrientationInterpolator469->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator469->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0});
Group441->addChildren(*OrientationInterpolator469);

COrientationInterpolator* OrientationInterpolator470 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator470->setDEF("Run_r_thumb1_PitchInterpolator");
OrientationInterpolator470->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator470->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0});
Group441->addChildren(*OrientationInterpolator470);

group->addChildren(*Group441);

CGroup* Group471 = (CGroup *)(m_pScene.createNode("Group"));
Group471->setDEF("JumpAnimation");
CTimeSensor* TimeSensor472 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor472->setDEF("JumpTimer");
TimeSensor472->setCycleInterval(3.73);
TimeSensor472->setLoop(True);
Group471->addChildren(*TimeSensor472);

COrientationInterpolator* OrientationInterpolator473 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator473->setDEF("Jump_r_metatarsal_PitchInterpolator");
OrientationInterpolator473->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator473->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group471->addChildren(*OrientationInterpolator473);

COrientationInterpolator* OrientationInterpolator474 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator474->setDEF("Jump_r_ankle_RotationInterpolator");
OrientationInterpolator474->setKey(new float[14]{0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1}, 14);
OrientationInterpolator474->setKeyValue(new float[56]{0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,1.3,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0});
Group471->addChildren(*OrientationInterpolator474);

COrientationInterpolator* OrientationInterpolator475 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator475->setDEF("Jump_r_knee_RotationInterpolator");
OrientationInterpolator475->setKey(new float[8]{0,0.2,0.25,0.3,0.64,0.76,0.88,1}, 8);
OrientationInterpolator475->setKeyValue(new float[32]{0,0,1,0,1,0,0,2.5,1,0,0,1.7,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0});
Group471->addChildren(*OrientationInterpolator475);

COrientationInterpolator* OrientationInterpolator476 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator476->setDEF("Jump_r_hip_RotationInterpolator");
OrientationInterpolator476->setKey(new float[11]{0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1}, 11);
OrientationInterpolator476->setKeyValue(new float[44]{0,0,1,0,-1,0,0,1.63,-1,0,0,1.7,-1,0,0,1.55,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0});
Group471->addChildren(*OrientationInterpolator476);

COrientationInterpolator* OrientationInterpolator477 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator477->setDEF("Jump_l_ankle_RotationInterpolator");
OrientationInterpolator477->setKey(new float[14]{0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1}, 14);
OrientationInterpolator477->setKeyValue(new float[56]{0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0});
Group471->addChildren(*OrientationInterpolator477);

COrientationInterpolator* OrientationInterpolator478 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator478->setDEF("Jump_l_knee_RotationInterpolator");
OrientationInterpolator478->setKey(new float[8]{0,0.28,0.32,0.48,0.64,0.76,0.88,1}, 8);
OrientationInterpolator478->setKeyValue(new float[32]{0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0});
Group471->addChildren(*OrientationInterpolator478);

COrientationInterpolator* OrientationInterpolator479 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator479->setDEF("Jump_l_hip_RotationInterpolator");
OrientationInterpolator479->setKey(new float[11]{0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1}, 11);
OrientationInterpolator479->setKeyValue(new float[44]{0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0});
Group471->addChildren(*OrientationInterpolator479);

COrientationInterpolator* OrientationInterpolator480 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator480->setDEF("Jump_lower_body_RotationInterpolator");
OrientationInterpolator480->setKey(new float[6]{0,0.28,0.32,0.48,0.76,1}, 6);
OrientationInterpolator480->setKeyValue(new float[24]{0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0});
Group471->addChildren(*OrientationInterpolator480);

COrientationInterpolator* OrientationInterpolator481 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator481->setDEF("Jump_r_wrist_RotationInterpolator");
OrientationInterpolator481->setKey(new float[6]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator481->setKeyValue(new float[24]{0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0});
Group471->addChildren(*OrientationInterpolator481);

COrientationInterpolator* OrientationInterpolator482 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator482->setDEF("Jump_r_elbow_RotationInterpolator");
OrientationInterpolator482->setKey(new float[6]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator482->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0});
Group471->addChildren(*OrientationInterpolator482);

COrientationInterpolator* OrientationInterpolator483 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator483->setDEF("Jump_r_shoulder_RotationInterpolator");
OrientationInterpolator483->setKey(new float[7]{0,0.28,0.32,0.64,0.76,0.88,1}, 7);
OrientationInterpolator483->setKeyValue(new float[28]{0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0});
Group471->addChildren(*OrientationInterpolator483);

COrientationInterpolator* OrientationInterpolator484 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator484->setDEF("Jump_l_wrist_RotationInterpolator");
OrientationInterpolator484->setKey(new float[7]{0,0.48,0.52,0.64,0.76,0.88,1}, 7);
OrientationInterpolator484->setKeyValue(new float[28]{0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0});
Group471->addChildren(*OrientationInterpolator484);

COrientationInterpolator* OrientationInterpolator485 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator485->setDEF("Jump_l_elbow_RotationInterpolator");
OrientationInterpolator485->setKey(new float[6]{0,0.28,0.32,0.58,0.72,1}, 6);
OrientationInterpolator485->setKeyValue(new float[24]{0,0,1,0,-1,0,0,1.13,-1,0,0,1.7,-1,0,0,1.7,-1,0,0,0.4,0,0,1,0});
Group471->addChildren(*OrientationInterpolator485);

COrientationInterpolator* OrientationInterpolator486 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator486->setDEF("Jump_l_shoulder_RotationInterpolator");
OrientationInterpolator486->setKey(new float[7]{0,0.28,0.32,0.64,0.76,0.88,1}, 7);
OrientationInterpolator486->setKeyValue(new float[28]{0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0});
Group471->addChildren(*OrientationInterpolator486);

COrientationInterpolator* OrientationInterpolator487 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator487->setDEF("Jump_head_RotationInterpolator");
OrientationInterpolator487->setKey(new float[6]{0,0.28,0.32,0.48,0.76,1}, 6);
OrientationInterpolator487->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0});
Group471->addChildren(*OrientationInterpolator487);

COrientationInterpolator* OrientationInterpolator488 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator488->setDEF("Jump_neck_RotationInterpolator");
OrientationInterpolator488->setKey(new float[6]{0,0.28,0.32,0.48,0.76,1}, 6);
OrientationInterpolator488->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0});
Group471->addChildren(*OrientationInterpolator488);

COrientationInterpolator* OrientationInterpolator489 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator489->setDEF("Jump_upper_body_RotationInterpolator");
OrientationInterpolator489->setKey(new float[7]{0,0.22,0.28,0.34,0.71,0.88,1}, 7);
OrientationInterpolator489->setKeyValue(new float[28]{0,0,1,0,1,0,0,1.05,1,0,0,1.051,-1,0,0,0.257,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0});
Group471->addChildren(*OrientationInterpolator489);

COrientationInterpolator* OrientationInterpolator490 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator490->setDEF("Jump_whole_body_RotationInterpolator");
OrientationInterpolator490->setKey(new float[7]{0,0.28,0.32,0.48,0.64,0.76,1}, 7);
OrientationInterpolator490->setKeyValue(new float[28]{0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group471->addChildren(*OrientationInterpolator490);

CPositionInterpolator* PositionInterpolator491 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator491->setDEF("Jump_whole_body_TranslationInterpolator");
PositionInterpolator491->setKey(new float[22]{0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1}, 22);
PositionInterpolator491->setKeyValue(new float[66]{0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0,0.35,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0});
Group471->addChildren(*PositionInterpolator491);

COrientationInterpolator* OrientationInterpolator492 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator492->setDEF("Jump_l_sternoclavicular_RollInterpolator");
OrientationInterpolator492->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator492->setKeyValue(new float[24]{0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0});
Group471->addChildren(*OrientationInterpolator492);

COrientationInterpolator* OrientationInterpolator493 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator493->setDEF("Jump_l_acromioclavicular_RollInterpolator");
OrientationInterpolator493->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator493->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0});
Group471->addChildren(*OrientationInterpolator493);

COrientationInterpolator* OrientationInterpolator494 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator494->setDEF("Jump_r_sternoclavicular_RollInterpolator");
OrientationInterpolator494->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator494->setKeyValue(new float[24]{0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0});
Group471->addChildren(*OrientationInterpolator494);

COrientationInterpolator* OrientationInterpolator495 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator495->setDEF("Jump_r_acromioclavicular_RollInterpolator");
OrientationInterpolator495->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator495->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0});
Group471->addChildren(*OrientationInterpolator495);

COrientationInterpolator* OrientationInterpolator496 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator496->setDEF("Jump_sacroiliac_YawInterpolator");
OrientationInterpolator496->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator496->setKeyValue(new float[24]{0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0});
Group471->addChildren(*OrientationInterpolator496);

COrientationInterpolator* OrientationInterpolator497 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator497->setDEF("Jump_vl5_YawInterpolator");
OrientationInterpolator497->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator497->setKeyValue(new float[28]{0,1,0,0,0,1,0,-0.1,0,1,0,0,0,1,0,0,1,0,0,0.6,0,1,0,0.1,0,1,0,0});
Group471->addChildren(*OrientationInterpolator497);

COrientationInterpolator* OrientationInterpolator498 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator498->setDEF("Jump_vc6_YawInterpolator");
OrientationInterpolator498->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator498->setKeyValue(new float[28]{0,1,0,0,0,1,0,0.8,0,1,0,0,0,1,0,0,-1,0,0,0.6,0,-1,0,0.8,0,1,0,0});
Group471->addChildren(*OrientationInterpolator498);

COrientationInterpolator* OrientationInterpolator499 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator499->setDEF("Jump_l_thumb1_PitchInterpolator");
OrientationInterpolator499->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator499->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0});
Group471->addChildren(*OrientationInterpolator499);

COrientationInterpolator* OrientationInterpolator500 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator500->setDEF("Jump_r_thumb1_PitchInterpolator");
OrientationInterpolator500->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator500->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0});
Group471->addChildren(*OrientationInterpolator500);

group->addChildren(*Group471);

CGroup* Group501 = (CGroup *)(m_pScene.createNode("Group"));
Group501->setDEF("KickAnimation");
CTimeSensor* TimeSensor502 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor502->setDEF("KickTimer");
TimeSensor502->setCycleInterval(3.73);
TimeSensor502->setLoop(True);
Group501->addChildren(*TimeSensor502);

COrientationInterpolator* OrientationInterpolator503 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator503->setDEF("Kick_l_sternoclavicular_RollInterpolator");
OrientationInterpolator503->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator503->setKeyValue(new float[24]{0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0});
Group501->addChildren(*OrientationInterpolator503);

COrientationInterpolator* OrientationInterpolator504 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator504->setDEF("Kick_l_acromioclavicular_RollInterpolator");
OrientationInterpolator504->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator504->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0});
Group501->addChildren(*OrientationInterpolator504);

COrientationInterpolator* OrientationInterpolator505 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator505->setDEF("Kick_l_shoulder_RollInterpolator");
OrientationInterpolator505->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator505->setKeyValue(new float[24]{0,0,1,0,0,0,1,1.76,-0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0,0,1,0});
Group501->addChildren(*OrientationInterpolator505);

COrientationInterpolator* OrientationInterpolator506 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator506->setDEF("Kick_l_ForeArm_PitchInterpolator");
OrientationInterpolator506->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator506->setKeyValue(new float[24]{1,0,0,0,1,0,0,-0.55,-1,0.25,0,2.55,1,0,0,0,1,0,0,0,1,0,0,0});
Group501->addChildren(*OrientationInterpolator506);

COrientationInterpolator* OrientationInterpolator507 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator507->setDEF("Kick_l_wrist_RollInterpolator");
OrientationInterpolator507->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator507->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,1,0,0.55,0,0,1,0,0,0,1,0,0,0,1,0});
Group501->addChildren(*OrientationInterpolator507);

COrientationInterpolator* OrientationInterpolator508 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator508->setDEF("Kick_l_thumb1_PitchInterpolator");
OrientationInterpolator508->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator508->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0});
Group501->addChildren(*OrientationInterpolator508);

COrientationInterpolator* OrientationInterpolator509 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator509->setDEF("Kick_r_sternoclavicular_RollInterpolator");
OrientationInterpolator509->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator509->setKeyValue(new float[24]{0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0});
Group501->addChildren(*OrientationInterpolator509);

COrientationInterpolator* OrientationInterpolator510 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator510->setDEF("Kick_r_acromioclavicular_RollInterpolator");
OrientationInterpolator510->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator510->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0});
Group501->addChildren(*OrientationInterpolator510);

COrientationInterpolator* OrientationInterpolator511 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator511->setDEF("Kick_r_shoulder_RollInterpolator");
OrientationInterpolator511->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator511->setKeyValue(new float[24]{0,0,1,0,0,0,1,-1.76,0.25,0,1,-1.76,0,0,1,-1.256,0,0,1,-0.05,0,0,1,0});
Group501->addChildren(*OrientationInterpolator511);

COrientationInterpolator* OrientationInterpolator512 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator512->setDEF("Kick_r_ForeArm_PitchInterpolator");
OrientationInterpolator512->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator512->setKeyValue(new float[24]{1,0,0,0,1,0,0,-0.55,1,0.25,0,-2.55,1,0,0,0,1,0,0,0,1,0,0,0});
Group501->addChildren(*OrientationInterpolator512);

COrientationInterpolator* OrientationInterpolator513 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator513->setDEF("Kick_r_wrist_RollInterpolator");
OrientationInterpolator513->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator513->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,0,1,0,0,0,1,0});
Group501->addChildren(*OrientationInterpolator513);

COrientationInterpolator* OrientationInterpolator514 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator514->setDEF("Kick_r_thumb1_PitchInterpolator");
OrientationInterpolator514->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator514->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0});
Group501->addChildren(*OrientationInterpolator514);

COrientationInterpolator* OrientationInterpolator515 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator515->setDEF("Kick_r_hip_PitchInterpolator");
OrientationInterpolator515->setKey(new float[7]{0,0.2,0.3,0.5,0.6,0.9,1}, 7);
OrientationInterpolator515->setKeyValue(new float[28]{1,0,0,0,1,0,0,0.9,-1,0,0,1.75,-1,0,0,2.25,-1,0,0,2,1,0,0,0,1,0,0,0});
Group501->addChildren(*OrientationInterpolator515);

COrientationInterpolator* OrientationInterpolator516 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator516->setDEF("Kick_r_knee_PitchInterpolator");
OrientationInterpolator516->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator516->setKeyValue(new float[24]{0,0,1,0,1,0,0,1.95,1,0,0,1.75,-1,0,0,0.28,1,0,0,0,1,0,0,0});
Group501->addChildren(*OrientationInterpolator516);

COrientationInterpolator* OrientationInterpolator517 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator517->setDEF("Kick_l_hip_PitchInterpolator");
OrientationInterpolator517->setKey(new float[7]{0,0.2,0.3,0.5,0.6,0.9,1}, 7);
OrientationInterpolator517->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group501->addChildren(*OrientationInterpolator517);

COrientationInterpolator* OrientationInterpolator518 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator518->setDEF("Kick_l_knee_PitchInterpolator");
OrientationInterpolator518->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator518->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group501->addChildren(*OrientationInterpolator518);

COrientationInterpolator* OrientationInterpolator519 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator519->setDEF("Kick_r_ankle_PitchInterpolator");
OrientationInterpolator519->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator519->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.9,-1,0,0,0.95,1,0,0,0.75,-1,0,0,0.05,1,0,0,0});
Group501->addChildren(*OrientationInterpolator519);

COrientationInterpolator* OrientationInterpolator520 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator520->setDEF("Kick_r_metatarsal_PitchInterpolator");
OrientationInterpolator520->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator520->setKeyValue(new float[24]{1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0});
Group501->addChildren(*OrientationInterpolator520);

COrientationInterpolator* OrientationInterpolator521 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator521->setDEF("Kick_sacroiliac_YawInterpolator");
OrientationInterpolator521->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator521->setKeyValue(new float[24]{0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0});
Group501->addChildren(*OrientationInterpolator521);

COrientationInterpolator* OrientationInterpolator522 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator522->setDEF("Kick_vl5_YawInterpolator");
OrientationInterpolator522->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator522->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group501->addChildren(*OrientationInterpolator522);

COrientationInterpolator* OrientationInterpolator523 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator523->setDEF("Kick_vc6_YawInterpolator");
OrientationInterpolator523->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator523->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group501->addChildren(*OrientationInterpolator523);

COrientationInterpolator* OrientationInterpolator524 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator524->setDEF("Kick_lower_body_RotationInterpolator");
OrientationInterpolator524->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator524->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group501->addChildren(*OrientationInterpolator524);

COrientationInterpolator* OrientationInterpolator525 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator525->setDEF("Kick_upper_body_RotationInterpolator");
OrientationInterpolator525->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator525->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group501->addChildren(*OrientationInterpolator525);

COrientationInterpolator* OrientationInterpolator526 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator526->setDEF("Kick_whole_body_RotationInterpolator");
OrientationInterpolator526->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator526->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group501->addChildren(*OrientationInterpolator526);

CPositionInterpolator* PositionInterpolator527 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator527->setDEF("Kick_whole_body_TranslationInterpolator");
PositionInterpolator527->setKey(new float[3]{0,0.5,1}, 3);
PositionInterpolator527->setKeyValue(new float[9]{0,0,0,0,0,0,0,0,0});
Group501->addChildren(*PositionInterpolator527);

COrientationInterpolator* OrientationInterpolator528 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator528->setDEF("Kick_neck_RotationInterpolator");
OrientationInterpolator528->setKey(new float[4]{0,0.25,0.55,1}, 4);
OrientationInterpolator528->setKeyValue(new float[16]{0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0});
Group501->addChildren(*OrientationInterpolator528);

group->addChildren(*Group501);

CGroup* Group529 = (CGroup *)(m_pScene.createNode("Group"));
Group529->setDEF("Interface");
CTransform* Transform530 = (CTransform *)(m_pScene.createNode("Transform"));
Transform530->setDEF("CoordinateSystemFloor");
Transform530->setScale(new float[3]{0.1,0.1,0.1});
CShape* Shape531 = (CShape *)(m_pScene.createNode("Shape"));
Shape531->setDEF("AxisLinesShape");
//RGB lines showing XYZ axes
CIndexedLineSet* IndexedLineSet532 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet532->setColorIndex(new int[3]{0,1,2});
IndexedLineSet532->setColorPerVertex(False);
IndexedLineSet532->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
CCoordinate* Coordinate533 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate533->setPoint(new float[12]{0,0,0,1,0,0,0,1,0,0,0,1});
IndexedLineSet532->setCoord(*Coordinate533);

CColor* Color534 = (CColor *)(m_pScene.createNode("Color"));
Color534->setColor(new float[9]{1,0,0,0,0.6,0,0,0,1});
IndexedLineSet532->setColor(*Color534);

Shape531->setGeometry(IndexedLineSet532);

Transform530->addChildren(*Shape531);

Group529->addChildren(*Transform530);

CProximitySensor* ProximitySensor535 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor535->setDEF("HudProx");
ProximitySensor535->setSize(new float[3]{50,50,50});
Group529->addChildren(*ProximitySensor535);

CTransform* Transform536 = (CTransform *)(m_pScene.createNode("Transform"));
Transform536->setDEF("HudXform");
Transform536->setRotation(new float[4]{0,1,0,0.78});
Transform536->setTranslation(new float[3]{2,1,2});
CTransform* Transform537 = (CTransform *)(m_pScene.createNode("Transform"));
Transform537->setScale(new float[3]{0.02,0.02,0.02});
Transform537->setTranslation(new float[3]{-0.4,-0.01,-0.75});
CTransform* Transform538 = (CTransform *)(m_pScene.createNode("Transform"));
Transform538->setDEF("Stand_Text");
Transform538->setTranslation(new float[3]{0,-0.9,0});
CTouchSensor* TouchSensor539 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor539->setDEF("Stand_Touch");
Transform538->addChildren(*TouchSensor539);

CShape* Shape540 = (CShape *)(m_pScene.createNode("Shape"));
Shape540->setDEF("StandText");
CAppearance* Appearance541 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material542 = (CMaterial *)(m_pScene.createNode("Material"));
Material542->setDEF("text_color");
Material542->setAmbientIntensity(1);
Material542->setDiffuseColor(new float[3]{0.819,0.521,0.169});
Material542->setEmissiveColor(new float[3]{0.819,0.521,0.169});
Material542->setSpecularColor(new float[3]{0.819,0.521,0.169});
Appearance541->setMaterial(*Material542);

Shape540->setAppearance(*Appearance541);

CText* Text543 = (CText *)(m_pScene.createNode("Text"));
Text543->setString(new CString[1]{"Stand"}, 1);
CFontStyle* FontStyle544 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle544->setFamily(new CString[1]{"SANS"}, 1);
Text543->setFontStyle(*FontStyle544);

Shape540->setGeometry(Text543);

Transform538->addChildren(*Shape540);

CShape* Shape545 = (CShape *)(m_pScene.createNode("Shape"));
Shape545->setDEF("Stand_Back");
CAppearance* Appearance546 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material547 = (CMaterial *)(m_pScene.createNode("Material"));
Material547->setDEF("Clear");
Material547->setAmbientIntensity(1);
Material547->setDiffuseColor(new float[3]{0,0.5,0});
Material547->setEmissiveColor(new float[3]{0,0.5,0});
Material547->setTransparency(0.8);
Appearance546->setMaterial(*Material547);

Shape545->setAppearance(*Appearance546);

CIndexedFaceSet* IndexedFaceSet548 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet548->setDEF("Backing");
IndexedFaceSet548->setCoordIndex(new int[5]{0,1,2,3,-1});
CCoordinate* Coordinate549 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate549->setPoint(new float[12]{-0.2,-0.25,-0.01,3,-0.25,-0.01,3,1,-0.01,-0.2,1,-0.01});
IndexedFaceSet548->setCoord(*Coordinate549);

Shape545->setGeometry(IndexedFaceSet548);

Transform538->addChildren(*Shape545);

Transform537->addChildren(*Transform538);

CTransform* Transform550 = (CTransform *)(m_pScene.createNode("Transform"));
Transform550->setDEF("Pitch_Text");
Transform550->setTranslation(new float[3]{0,-2.4,0});
CTouchSensor* TouchSensor551 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor551->setDEF("Pitch_Touch");
Transform550->addChildren(*TouchSensor551);

CShape* Shape552 = (CShape *)(m_pScene.createNode("Shape"));
Shape552->setDEF("PitchText");
CAppearance* Appearance553 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material554 = (CMaterial *)(m_pScene.createNode("Material"));
Material554->setUSE("text_color");
Appearance553->setMaterial(*Material554);

Shape552->setAppearance(*Appearance553);

CText* Text555 = (CText *)(m_pScene.createNode("Text"));
Text555->setString(new CString[1]{"Pitch"}, 1);
CFontStyle* FontStyle556 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle556->setFamily(new CString[1]{"SANS"}, 1);
Text555->setFontStyle(*FontStyle556);

Shape552->setGeometry(Text555);

Transform550->addChildren(*Shape552);

CShape* Shape557 = (CShape *)(m_pScene.createNode("Shape"));
Shape557->setDEF("Pitch_Back");
CAppearance* Appearance558 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material559 = (CMaterial *)(m_pScene.createNode("Material"));
Material559->setUSE("Clear");
Appearance558->setMaterial(*Material559);

Shape557->setAppearance(*Appearance558);

CIndexedFaceSet* IndexedFaceSet560 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet560->setUSE("Backing");
Shape557->setGeometry(IndexedFaceSet560);

Transform550->addChildren(*Shape557);

Transform537->addChildren(*Transform550);

CTransform* Transform561 = (CTransform *)(m_pScene.createNode("Transform"));
Transform561->setDEF("Yaw_Text");
Transform561->setTranslation(new float[3]{0,-3.8,0});
CTouchSensor* TouchSensor562 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor562->setDEF("Yaw_Touch");
Transform561->addChildren(*TouchSensor562);

CShape* Shape563 = (CShape *)(m_pScene.createNode("Shape"));
Shape563->setDEF("YawText");
CAppearance* Appearance564 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material565 = (CMaterial *)(m_pScene.createNode("Material"));
Material565->setUSE("text_color");
Appearance564->setMaterial(*Material565);

Shape563->setAppearance(*Appearance564);

CText* Text566 = (CText *)(m_pScene.createNode("Text"));
Text566->setString(new CString[1]{"Yaw"}, 1);
CFontStyle* FontStyle567 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle567->setFamily(new CString[1]{"SANS"}, 1);
Text566->setFontStyle(*FontStyle567);

Shape563->setGeometry(Text566);

Transform561->addChildren(*Shape563);

CShape* Shape568 = (CShape *)(m_pScene.createNode("Shape"));
Shape568->setDEF("Yaw_Back");
CAppearance* Appearance569 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material570 = (CMaterial *)(m_pScene.createNode("Material"));
Material570->setUSE("Clear");
Appearance569->setMaterial(*Material570);

Shape568->setAppearance(*Appearance569);

CIndexedFaceSet* IndexedFaceSet571 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet571->setUSE("Backing");
Shape568->setGeometry(IndexedFaceSet571);

Transform561->addChildren(*Shape568);

Transform537->addChildren(*Transform561);

CTransform* Transform572 = (CTransform *)(m_pScene.createNode("Transform"));
Transform572->setDEF("Roll_Text");
Transform572->setTranslation(new float[3]{0,-5.2,0});
CTouchSensor* TouchSensor573 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor573->setDEF("Roll_Touch");
Transform572->addChildren(*TouchSensor573);

CShape* Shape574 = (CShape *)(m_pScene.createNode("Shape"));
Shape574->setDEF("RollText");
CAppearance* Appearance575 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material576 = (CMaterial *)(m_pScene.createNode("Material"));
Material576->setUSE("text_color");
Appearance575->setMaterial(*Material576);

Shape574->setAppearance(*Appearance575);

CText* Text577 = (CText *)(m_pScene.createNode("Text"));
Text577->setString(new CString[1]{"Roll"}, 1);
CFontStyle* FontStyle578 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle578->setFamily(new CString[1]{"SANS"}, 1);
Text577->setFontStyle(*FontStyle578);

Shape574->setGeometry(Text577);

Transform572->addChildren(*Shape574);

CShape* Shape579 = (CShape *)(m_pScene.createNode("Shape"));
Shape579->setDEF("Roll_Back");
CAppearance* Appearance580 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material581 = (CMaterial *)(m_pScene.createNode("Material"));
Material581->setUSE("Clear");
Appearance580->setMaterial(*Material581);

Shape579->setAppearance(*Appearance580);

CIndexedFaceSet* IndexedFaceSet582 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet582->setUSE("Backing");
Shape579->setGeometry(IndexedFaceSet582);

Transform572->addChildren(*Shape579);

Transform537->addChildren(*Transform572);

CTransform* Transform583 = (CTransform *)(m_pScene.createNode("Transform"));
Transform583->setDEF("Walk_Text");
Transform583->setTranslation(new float[3]{0,-6.6,0});
CTouchSensor* TouchSensor584 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor584->setDEF("Walk_Touch");
Transform583->addChildren(*TouchSensor584);

CShape* Shape585 = (CShape *)(m_pScene.createNode("Shape"));
Shape585->setDEF("WalkText");
CAppearance* Appearance586 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material587 = (CMaterial *)(m_pScene.createNode("Material"));
Material587->setUSE("text_color");
Appearance586->setMaterial(*Material587);

Shape585->setAppearance(*Appearance586);

CText* Text588 = (CText *)(m_pScene.createNode("Text"));
Text588->setString(new CString[1]{"Walk"}, 1);
CFontStyle* FontStyle589 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle589->setFamily(new CString[1]{"SANS"}, 1);
Text588->setFontStyle(*FontStyle589);

Shape585->setGeometry(Text588);

Transform583->addChildren(*Shape585);

CShape* Shape590 = (CShape *)(m_pScene.createNode("Shape"));
Shape590->setDEF("Walk_Back");
CAppearance* Appearance591 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material592 = (CMaterial *)(m_pScene.createNode("Material"));
Material592->setUSE("Clear");
Appearance591->setMaterial(*Material592);

Shape590->setAppearance(*Appearance591);

CIndexedFaceSet* IndexedFaceSet593 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet593->setUSE("Backing");
Shape590->setGeometry(IndexedFaceSet593);

Transform583->addChildren(*Shape590);

Transform537->addChildren(*Transform583);

CTransform* Transform594 = (CTransform *)(m_pScene.createNode("Transform"));
Transform594->setDEF("Run_Text");
Transform594->setTranslation(new float[3]{0,-8,0});
CTouchSensor* TouchSensor595 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor595->setDEF("Run_Touch");
Transform594->addChildren(*TouchSensor595);

CShape* Shape596 = (CShape *)(m_pScene.createNode("Shape"));
Shape596->setDEF("RunText");
CAppearance* Appearance597 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material598 = (CMaterial *)(m_pScene.createNode("Material"));
Material598->setUSE("text_color");
Appearance597->setMaterial(*Material598);

Shape596->setAppearance(*Appearance597);

CText* Text599 = (CText *)(m_pScene.createNode("Text"));
Text599->setString(new CString[1]{"Run"}, 1);
CFontStyle* FontStyle600 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle600->setFamily(new CString[1]{"SANS"}, 1);
Text599->setFontStyle(*FontStyle600);

Shape596->setGeometry(Text599);

Transform594->addChildren(*Shape596);

CShape* Shape601 = (CShape *)(m_pScene.createNode("Shape"));
Shape601->setDEF("Run_Back");
CAppearance* Appearance602 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material603 = (CMaterial *)(m_pScene.createNode("Material"));
Material603->setUSE("Clear");
Appearance602->setMaterial(*Material603);

Shape601->setAppearance(*Appearance602);

CIndexedFaceSet* IndexedFaceSet604 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet604->setUSE("Backing");
Shape601->setGeometry(IndexedFaceSet604);

Transform594->addChildren(*Shape601);

Transform537->addChildren(*Transform594);

CTransform* Transform605 = (CTransform *)(m_pScene.createNode("Transform"));
Transform605->setDEF("Jump_Text");
Transform605->setTranslation(new float[3]{0,-9.4,0});
CTouchSensor* TouchSensor606 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor606->setDEF("Jump_Touch");
Transform605->addChildren(*TouchSensor606);

CShape* Shape607 = (CShape *)(m_pScene.createNode("Shape"));
Shape607->setDEF("JumpText");
CAppearance* Appearance608 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material609 = (CMaterial *)(m_pScene.createNode("Material"));
Material609->setUSE("text_color");
Appearance608->setMaterial(*Material609);

Shape607->setAppearance(*Appearance608);

CText* Text610 = (CText *)(m_pScene.createNode("Text"));
Text610->setString(new CString[1]{"Jump"}, 1);
CFontStyle* FontStyle611 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle611->setFamily(new CString[1]{"SANS"}, 1);
Text610->setFontStyle(*FontStyle611);

Shape607->setGeometry(Text610);

Transform605->addChildren(*Shape607);

CShape* Shape612 = (CShape *)(m_pScene.createNode("Shape"));
Shape612->setDEF("Jump_Back");
CAppearance* Appearance613 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material614 = (CMaterial *)(m_pScene.createNode("Material"));
Material614->setUSE("Clear");
Appearance613->setMaterial(*Material614);

Shape612->setAppearance(*Appearance613);

CIndexedFaceSet* IndexedFaceSet615 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet615->setUSE("Backing");
Shape612->setGeometry(IndexedFaceSet615);

Transform605->addChildren(*Shape612);

Transform537->addChildren(*Transform605);

CTransform* Transform616 = (CTransform *)(m_pScene.createNode("Transform"));
Transform616->setDEF("Kick_Text");
Transform616->setTranslation(new float[3]{0,-10.8,0});
CTouchSensor* TouchSensor617 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor617->setDEF("Kick_Touch");
Transform616->addChildren(*TouchSensor617);

CShape* Shape618 = (CShape *)(m_pScene.createNode("Shape"));
Shape618->setDEF("KickText");
CAppearance* Appearance619 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material620 = (CMaterial *)(m_pScene.createNode("Material"));
Material620->setUSE("text_color");
Appearance619->setMaterial(*Material620);

Shape618->setAppearance(*Appearance619);

CText* Text621 = (CText *)(m_pScene.createNode("Text"));
Text621->setString(new CString[1]{"Kick"}, 1);
CFontStyle* FontStyle622 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle622->setFamily(new CString[1]{"SANS"}, 1);
Text621->setFontStyle(*FontStyle622);

Shape618->setGeometry(Text621);

Transform616->addChildren(*Shape618);

CShape* Shape623 = (CShape *)(m_pScene.createNode("Shape"));
Shape623->setDEF("Kick_Back");
CAppearance* Appearance624 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material625 = (CMaterial *)(m_pScene.createNode("Material"));
Material625->setUSE("Clear");
Appearance624->setMaterial(*Material625);

Shape623->setAppearance(*Appearance624);

CIndexedFaceSet* IndexedFaceSet626 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet626->setUSE("Backing");
Shape623->setGeometry(IndexedFaceSet626);

Transform616->addChildren(*Shape623);

Transform537->addChildren(*Transform616);

CTransform* Transform627 = (CTransform *)(m_pScene.createNode("Transform"));
Transform627->setDEF("Stop_Text");
Transform627->setTranslation(new float[3]{0,0.4,0});
CTouchSensor* TouchSensor628 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor628->setDEF("Stop_Touch");
Transform627->addChildren(*TouchSensor628);

CShape* Shape629 = (CShape *)(m_pScene.createNode("Shape"));
Shape629->setDEF("StopText");
CAppearance* Appearance630 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material631 = (CMaterial *)(m_pScene.createNode("Material"));
Material631->setUSE("text_color");
Appearance630->setMaterial(*Material631);

Shape629->setAppearance(*Appearance630);

CText* Text632 = (CText *)(m_pScene.createNode("Text"));
Text632->setString(new CString[1]{"Default"}, 1);
CFontStyle* FontStyle633 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle633->setFamily(new CString[1]{"SANS"}, 1);
Text632->setFontStyle(*FontStyle633);

Shape629->setGeometry(Text632);

Transform627->addChildren(*Shape629);

CShape* Shape634 = (CShape *)(m_pScene.createNode("Shape"));
Shape634->setDEF("Stop_Back");
CAppearance* Appearance635 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material636 = (CMaterial *)(m_pScene.createNode("Material"));
Material636->setUSE("Clear");
Appearance635->setMaterial(*Material636);

Shape634->setAppearance(*Appearance635);

CIndexedFaceSet* IndexedFaceSet637 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet637->setUSE("Backing");
Shape634->setGeometry(IndexedFaceSet637);

Transform627->addChildren(*Shape634);

Transform537->addChildren(*Transform627);

CTransform* Transform638 = (CTransform *)(m_pScene.createNode("Transform"));
Transform638->setDEF("SceneLabel");
Transform638->setTranslation(new float[3]{1.3,3,0});
CShape* Shape639 = (CShape *)(m_pScene.createNode("Shape"));
Shape639->setDEF("SceneLabelText");
CAppearance* Appearance640 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material641 = (CMaterial *)(m_pScene.createNode("Material"));
Material641->setUSE("text_color");
Appearance640->setMaterial(*Material641);

Shape639->setAppearance(*Appearance640);

CText* Text642 = (CText *)(m_pScene.createNode("Text"));
Text642->setString(new CString[2]{"BoxMan4","Animation"}, 2);
CFontStyle* FontStyle643 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle643->setFamily(new CString[1]{"SANS"}, 1);
FontStyle643->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text642->setFontStyle(*FontStyle643);

Shape639->setGeometry(Text642);

Transform638->addChildren(*Shape639);

Transform537->addChildren(*Transform638);

Transform536->addChildren(*Transform537);

Group529->addChildren(*Transform536);

group->addChildren(*Group529);

CROUTE* ROUTE644 = new CROUTE();
ROUTE644->setFromField("fraction_changed");
ROUTE644->setFromNode("StopTimer");
ROUTE644->setToField("set_fraction");
ROUTE644->setToNode("Stop_humanoid_root_TranslationInterpolator");
group->addChildren(*ROUTE644);

CROUTE* ROUTE645 = new CROUTE();
ROUTE645->setFromField("fraction_changed");
ROUTE645->setFromNode("StopTimer");
ROUTE645->setToField("set_fraction");
ROUTE645->setToNode("Stop_humanoid_root_RotationInterpolator");
group->addChildren(*ROUTE645);

CROUTE* ROUTE646 = new CROUTE();
ROUTE646->setFromField("fraction_changed");
ROUTE646->setFromNode("StopTimer");
ROUTE646->setToField("set_fraction");
ROUTE646->setToNode("Stop_sacroiliac_RotationInterpolator");
group->addChildren(*ROUTE646);

CROUTE* ROUTE647 = new CROUTE();
ROUTE647->setFromField("fraction_changed");
ROUTE647->setFromNode("StopTimer");
ROUTE647->setToField("set_fraction");
ROUTE647->setToNode("Stop_l_hip_RotationInterpolator");
group->addChildren(*ROUTE647);

CROUTE* ROUTE648 = new CROUTE();
ROUTE648->setFromField("fraction_changed");
ROUTE648->setFromNode("StopTimer");
ROUTE648->setToField("set_fraction");
ROUTE648->setToNode("Stop_l_knee_RotationInterpolator");
group->addChildren(*ROUTE648);

CROUTE* ROUTE649 = new CROUTE();
ROUTE649->setFromField("fraction_changed");
ROUTE649->setFromNode("StopTimer");
ROUTE649->setToField("set_fraction");
ROUTE649->setToNode("Stop_l_ankle_RotationInterpolator");
group->addChildren(*ROUTE649);

CROUTE* ROUTE650 = new CROUTE();
ROUTE650->setFromField("fraction_changed");
ROUTE650->setFromNode("StopTimer");
ROUTE650->setToField("set_fraction");
ROUTE650->setToNode("Stop_l_subtalar_RotationInterpolator");
group->addChildren(*ROUTE650);

CROUTE* ROUTE651 = new CROUTE();
ROUTE651->setFromField("fraction_changed");
ROUTE651->setFromNode("StopTimer");
ROUTE651->setToField("set_fraction");
ROUTE651->setToNode("Stop_l_midtarsal_RotationInterpolator");
group->addChildren(*ROUTE651);

CROUTE* ROUTE652 = new CROUTE();
ROUTE652->setFromField("fraction_changed");
ROUTE652->setFromNode("StopTimer");
ROUTE652->setToField("set_fraction");
ROUTE652->setToNode("Stop_l_metatarsal_RotationInterpolator");
group->addChildren(*ROUTE652);

CROUTE* ROUTE653 = new CROUTE();
ROUTE653->setFromField("fraction_changed");
ROUTE653->setFromNode("StopTimer");
ROUTE653->setToField("set_fraction");
ROUTE653->setToNode("Stop_r_hip_RotationInterpolator");
group->addChildren(*ROUTE653);

CROUTE* ROUTE654 = new CROUTE();
ROUTE654->setFromField("fraction_changed");
ROUTE654->setFromNode("StopTimer");
ROUTE654->setToField("set_fraction");
ROUTE654->setToNode("Stop_r_knee_RotationInterpolator");
group->addChildren(*ROUTE654);

CROUTE* ROUTE655 = new CROUTE();
ROUTE655->setFromField("fraction_changed");
ROUTE655->setFromNode("StopTimer");
ROUTE655->setToField("set_fraction");
ROUTE655->setToNode("Stop_r_ankle_RotationInterpolator");
group->addChildren(*ROUTE655);

CROUTE* ROUTE656 = new CROUTE();
ROUTE656->setFromField("fraction_changed");
ROUTE656->setFromNode("StopTimer");
ROUTE656->setToField("set_fraction");
ROUTE656->setToNode("Stop_r_subtalar_RotationInterpolator");
group->addChildren(*ROUTE656);

CROUTE* ROUTE657 = new CROUTE();
ROUTE657->setFromField("fraction_changed");
ROUTE657->setFromNode("StopTimer");
ROUTE657->setToField("set_fraction");
ROUTE657->setToNode("Stop_r_midtarsal_RotationInterpolator");
group->addChildren(*ROUTE657);

CROUTE* ROUTE658 = new CROUTE();
ROUTE658->setFromField("fraction_changed");
ROUTE658->setFromNode("StopTimer");
ROUTE658->setToField("set_fraction");
ROUTE658->setToNode("Stop_r_metatarsal_RotationInterpolator");
group->addChildren(*ROUTE658);

CROUTE* ROUTE659 = new CROUTE();
ROUTE659->setFromField("fraction_changed");
ROUTE659->setFromNode("StopTimer");
ROUTE659->setToField("set_fraction");
ROUTE659->setToNode("Stop_vl5_RotationInterpolator");
group->addChildren(*ROUTE659);

CROUTE* ROUTE660 = new CROUTE();
ROUTE660->setFromField("fraction_changed");
ROUTE660->setFromNode("StopTimer");
ROUTE660->setToField("set_fraction");
ROUTE660->setToNode("Stop_vl4_RotationInterpolator");
group->addChildren(*ROUTE660);

CROUTE* ROUTE661 = new CROUTE();
ROUTE661->setFromField("fraction_changed");
ROUTE661->setFromNode("StopTimer");
ROUTE661->setToField("set_fraction");
ROUTE661->setToNode("Stop_vl3_RotationInterpolator");
group->addChildren(*ROUTE661);

CROUTE* ROUTE662 = new CROUTE();
ROUTE662->setFromField("fraction_changed");
ROUTE662->setFromNode("StopTimer");
ROUTE662->setToField("set_fraction");
ROUTE662->setToNode("Stop_vl2_RotationInterpolator");
group->addChildren(*ROUTE662);

CROUTE* ROUTE663 = new CROUTE();
ROUTE663->setFromField("fraction_changed");
ROUTE663->setFromNode("StopTimer");
ROUTE663->setToField("set_fraction");
ROUTE663->setToNode("Stop_vl1_RotationInterpolator");
group->addChildren(*ROUTE663);

CROUTE* ROUTE664 = new CROUTE();
ROUTE664->setFromField("fraction_changed");
ROUTE664->setFromNode("StopTimer");
ROUTE664->setToField("set_fraction");
ROUTE664->setToNode("Stop_vt12_RotationInterpolator");
group->addChildren(*ROUTE664);

CROUTE* ROUTE665 = new CROUTE();
ROUTE665->setFromField("fraction_changed");
ROUTE665->setFromNode("StopTimer");
ROUTE665->setToField("set_fraction");
ROUTE665->setToNode("Stop_vt11_RotationInterpolator");
group->addChildren(*ROUTE665);

CROUTE* ROUTE666 = new CROUTE();
ROUTE666->setFromField("fraction_changed");
ROUTE666->setFromNode("StopTimer");
ROUTE666->setToField("set_fraction");
ROUTE666->setToNode("Stop_vt10_RotationInterpolator");
group->addChildren(*ROUTE666);

CROUTE* ROUTE667 = new CROUTE();
ROUTE667->setFromField("fraction_changed");
ROUTE667->setFromNode("StopTimer");
ROUTE667->setToField("set_fraction");
ROUTE667->setToNode("Stop_vt9_RotationInterpolator");
group->addChildren(*ROUTE667);

CROUTE* ROUTE668 = new CROUTE();
ROUTE668->setFromField("fraction_changed");
ROUTE668->setFromNode("StopTimer");
ROUTE668->setToField("set_fraction");
ROUTE668->setToNode("Stop_vt8_RotationInterpolator");
group->addChildren(*ROUTE668);

CROUTE* ROUTE669 = new CROUTE();
ROUTE669->setFromField("fraction_changed");
ROUTE669->setFromNode("StopTimer");
ROUTE669->setToField("set_fraction");
ROUTE669->setToNode("Stop_vt7_RotationInterpolator");
group->addChildren(*ROUTE669);

CROUTE* ROUTE670 = new CROUTE();
ROUTE670->setFromField("fraction_changed");
ROUTE670->setFromNode("StopTimer");
ROUTE670->setToField("set_fraction");
ROUTE670->setToNode("Stop_vt6_RotationInterpolator");
group->addChildren(*ROUTE670);

CROUTE* ROUTE671 = new CROUTE();
ROUTE671->setFromField("fraction_changed");
ROUTE671->setFromNode("StopTimer");
ROUTE671->setToField("set_fraction");
ROUTE671->setToNode("Stop_vt5_RotationInterpolator");
group->addChildren(*ROUTE671);

CROUTE* ROUTE672 = new CROUTE();
ROUTE672->setFromField("fraction_changed");
ROUTE672->setFromNode("StopTimer");
ROUTE672->setToField("set_fraction");
ROUTE672->setToNode("Stop_vt4_RotationInterpolator");
group->addChildren(*ROUTE672);

CROUTE* ROUTE673 = new CROUTE();
ROUTE673->setFromField("fraction_changed");
ROUTE673->setFromNode("StopTimer");
ROUTE673->setToField("set_fraction");
ROUTE673->setToNode("Stop_vt3_RotationInterpolator");
group->addChildren(*ROUTE673);

CROUTE* ROUTE674 = new CROUTE();
ROUTE674->setFromField("fraction_changed");
ROUTE674->setFromNode("StopTimer");
ROUTE674->setToField("set_fraction");
ROUTE674->setToNode("Stop_vt2_RotationInterpolator");
group->addChildren(*ROUTE674);

CROUTE* ROUTE675 = new CROUTE();
ROUTE675->setFromField("fraction_changed");
ROUTE675->setFromNode("StopTimer");
ROUTE675->setToField("set_fraction");
ROUTE675->setToNode("Stop_vt1_RotationInterpolator");
group->addChildren(*ROUTE675);

CROUTE* ROUTE676 = new CROUTE();
ROUTE676->setFromField("fraction_changed");
ROUTE676->setFromNode("StopTimer");
ROUTE676->setToField("set_fraction");
ROUTE676->setToNode("Stop_vc7_RotationInterpolator");
group->addChildren(*ROUTE676);

CROUTE* ROUTE677 = new CROUTE();
ROUTE677->setFromField("fraction_changed");
ROUTE677->setFromNode("StopTimer");
ROUTE677->setToField("set_fraction");
ROUTE677->setToNode("Stop_vc6_RotationInterpolator");
group->addChildren(*ROUTE677);

CROUTE* ROUTE678 = new CROUTE();
ROUTE678->setFromField("fraction_changed");
ROUTE678->setFromNode("StopTimer");
ROUTE678->setToField("set_fraction");
ROUTE678->setToNode("Stop_vc5_RotationInterpolator");
group->addChildren(*ROUTE678);

CROUTE* ROUTE679 = new CROUTE();
ROUTE679->setFromField("fraction_changed");
ROUTE679->setFromNode("StopTimer");
ROUTE679->setToField("set_fraction");
ROUTE679->setToNode("Stop_vc4_RotationInterpolator");
group->addChildren(*ROUTE679);

CROUTE* ROUTE680 = new CROUTE();
ROUTE680->setFromField("fraction_changed");
ROUTE680->setFromNode("StopTimer");
ROUTE680->setToField("set_fraction");
ROUTE680->setToNode("Stop_vc3_RotationInterpolator");
group->addChildren(*ROUTE680);

CROUTE* ROUTE681 = new CROUTE();
ROUTE681->setFromField("fraction_changed");
ROUTE681->setFromNode("StopTimer");
ROUTE681->setToField("set_fraction");
ROUTE681->setToNode("Stop_vc2_RotationInterpolator");
group->addChildren(*ROUTE681);

CROUTE* ROUTE682 = new CROUTE();
ROUTE682->setFromField("fraction_changed");
ROUTE682->setFromNode("StopTimer");
ROUTE682->setToField("set_fraction");
ROUTE682->setToNode("Stop_vc1_RotationInterpolator");
group->addChildren(*ROUTE682);

CROUTE* ROUTE683 = new CROUTE();
ROUTE683->setFromField("fraction_changed");
ROUTE683->setFromNode("StopTimer");
ROUTE683->setToField("set_fraction");
ROUTE683->setToNode("Stop_skullbase_RotationInterpolator");
group->addChildren(*ROUTE683);

CROUTE* ROUTE684 = new CROUTE();
ROUTE684->setFromField("fraction_changed");
ROUTE684->setFromNode("StopTimer");
ROUTE684->setToField("set_fraction");
ROUTE684->setToNode("Stop_l_eyeball_joint_RotationInterpolator");
group->addChildren(*ROUTE684);

CROUTE* ROUTE685 = new CROUTE();
ROUTE685->setFromField("fraction_changed");
ROUTE685->setFromNode("StopTimer");
ROUTE685->setToField("set_fraction");
ROUTE685->setToNode("Stop_r_eyeball_joint_RotationInterpolator");
group->addChildren(*ROUTE685);

CROUTE* ROUTE686 = new CROUTE();
ROUTE686->setFromField("fraction_changed");
ROUTE686->setFromNode("StopTimer");
ROUTE686->setToField("set_fraction");
ROUTE686->setToNode("Stop_l_sternoclavicular_RotationInterpolator");
group->addChildren(*ROUTE686);

CROUTE* ROUTE687 = new CROUTE();
ROUTE687->setFromField("fraction_changed");
ROUTE687->setFromNode("StopTimer");
ROUTE687->setToField("set_fraction");
ROUTE687->setToNode("Stop_l_acromioclavicular_RotationInterpolator");
group->addChildren(*ROUTE687);

CROUTE* ROUTE688 = new CROUTE();
ROUTE688->setFromField("fraction_changed");
ROUTE688->setFromNode("StopTimer");
ROUTE688->setToField("set_fraction");
ROUTE688->setToNode("Stop_l_shoulder_RotationInterpolator");
group->addChildren(*ROUTE688);

CROUTE* ROUTE689 = new CROUTE();
ROUTE689->setFromField("fraction_changed");
ROUTE689->setFromNode("StopTimer");
ROUTE689->setToField("set_fraction");
ROUTE689->setToNode("Stop_l_elbow_RotationInterpolator");
group->addChildren(*ROUTE689);

CROUTE* ROUTE690 = new CROUTE();
ROUTE690->setFromField("fraction_changed");
ROUTE690->setFromNode("StopTimer");
ROUTE690->setToField("set_fraction");
ROUTE690->setToNode("Stop_l_wrist_RotationInterpolator");
group->addChildren(*ROUTE690);

CROUTE* ROUTE691 = new CROUTE();
ROUTE691->setFromField("fraction_changed");
ROUTE691->setFromNode("StopTimer");
ROUTE691->setToField("set_fraction");
ROUTE691->setToNode("Stop_l_thumb1_RotationInterpolator");
group->addChildren(*ROUTE691);

CROUTE* ROUTE692 = new CROUTE();
ROUTE692->setFromField("fraction_changed");
ROUTE692->setFromNode("StopTimer");
ROUTE692->setToField("set_fraction");
ROUTE692->setToNode("Stop_l_thumb2_RotationInterpolator");
group->addChildren(*ROUTE692);

CROUTE* ROUTE693 = new CROUTE();
ROUTE693->setFromField("fraction_changed");
ROUTE693->setFromNode("StopTimer");
ROUTE693->setToField("set_fraction");
ROUTE693->setToNode("Stop_l_thumb3_RotationInterpolator");
group->addChildren(*ROUTE693);

CROUTE* ROUTE694 = new CROUTE();
ROUTE694->setFromField("fraction_changed");
ROUTE694->setFromNode("StopTimer");
ROUTE694->setToField("set_fraction");
ROUTE694->setToNode("Stop_l_index0_RotationInterpolator");
group->addChildren(*ROUTE694);

CROUTE* ROUTE695 = new CROUTE();
ROUTE695->setFromField("fraction_changed");
ROUTE695->setFromNode("StopTimer");
ROUTE695->setToField("set_fraction");
ROUTE695->setToNode("Stop_l_index1_RotationInterpolator");
group->addChildren(*ROUTE695);

CROUTE* ROUTE696 = new CROUTE();
ROUTE696->setFromField("fraction_changed");
ROUTE696->setFromNode("StopTimer");
ROUTE696->setToField("set_fraction");
ROUTE696->setToNode("Stop_l_index2_RotationInterpolator");
group->addChildren(*ROUTE696);

CROUTE* ROUTE697 = new CROUTE();
ROUTE697->setFromField("fraction_changed");
ROUTE697->setFromNode("StopTimer");
ROUTE697->setToField("set_fraction");
ROUTE697->setToNode("Stop_l_index3_RotationInterpolator");
group->addChildren(*ROUTE697);

CROUTE* ROUTE698 = new CROUTE();
ROUTE698->setFromField("fraction_changed");
ROUTE698->setFromNode("StopTimer");
ROUTE698->setToField("set_fraction");
ROUTE698->setToNode("Stop_l_middle0_RotationInterpolator");
group->addChildren(*ROUTE698);

CROUTE* ROUTE699 = new CROUTE();
ROUTE699->setFromField("fraction_changed");
ROUTE699->setFromNode("StopTimer");
ROUTE699->setToField("set_fraction");
ROUTE699->setToNode("Stop_l_middle1_RotationInterpolator");
group->addChildren(*ROUTE699);

CROUTE* ROUTE700 = new CROUTE();
ROUTE700->setFromField("fraction_changed");
ROUTE700->setFromNode("StopTimer");
ROUTE700->setToField("set_fraction");
ROUTE700->setToNode("Stop_l_middle2_RotationInterpolator");
group->addChildren(*ROUTE700);

CROUTE* ROUTE701 = new CROUTE();
ROUTE701->setFromField("fraction_changed");
ROUTE701->setFromNode("StopTimer");
ROUTE701->setToField("set_fraction");
ROUTE701->setToNode("Stop_l_middle3_RotationInterpolator");
group->addChildren(*ROUTE701);

CROUTE* ROUTE702 = new CROUTE();
ROUTE702->setFromField("fraction_changed");
ROUTE702->setFromNode("StopTimer");
ROUTE702->setToField("set_fraction");
ROUTE702->setToNode("Stop_l_ring0_RotationInterpolator");
group->addChildren(*ROUTE702);

CROUTE* ROUTE703 = new CROUTE();
ROUTE703->setFromField("fraction_changed");
ROUTE703->setFromNode("StopTimer");
ROUTE703->setToField("set_fraction");
ROUTE703->setToNode("Stop_l_ring1_RotationInterpolator");
group->addChildren(*ROUTE703);

CROUTE* ROUTE704 = new CROUTE();
ROUTE704->setFromField("fraction_changed");
ROUTE704->setFromNode("StopTimer");
ROUTE704->setToField("set_fraction");
ROUTE704->setToNode("Stop_l_ring2_RotationInterpolator");
group->addChildren(*ROUTE704);

CROUTE* ROUTE705 = new CROUTE();
ROUTE705->setFromField("fraction_changed");
ROUTE705->setFromNode("StopTimer");
ROUTE705->setToField("set_fraction");
ROUTE705->setToNode("Stop_l_ring3_RotationInterpolator");
group->addChildren(*ROUTE705);

CROUTE* ROUTE706 = new CROUTE();
ROUTE706->setFromField("fraction_changed");
ROUTE706->setFromNode("StopTimer");
ROUTE706->setToField("set_fraction");
ROUTE706->setToNode("Stop_l_pinky0_RotationInterpolator");
group->addChildren(*ROUTE706);

CROUTE* ROUTE707 = new CROUTE();
ROUTE707->setFromField("fraction_changed");
ROUTE707->setFromNode("StopTimer");
ROUTE707->setToField("set_fraction");
ROUTE707->setToNode("Stop_l_pinky1_RotationInterpolator");
group->addChildren(*ROUTE707);

CROUTE* ROUTE708 = new CROUTE();
ROUTE708->setFromField("fraction_changed");
ROUTE708->setFromNode("StopTimer");
ROUTE708->setToField("set_fraction");
ROUTE708->setToNode("Stop_l_pinky2_RotationInterpolator");
group->addChildren(*ROUTE708);

CROUTE* ROUTE709 = new CROUTE();
ROUTE709->setFromField("fraction_changed");
ROUTE709->setFromNode("StopTimer");
ROUTE709->setToField("set_fraction");
ROUTE709->setToNode("Stop_l_pinky3_RotationInterpolator");
group->addChildren(*ROUTE709);

CROUTE* ROUTE710 = new CROUTE();
ROUTE710->setFromField("fraction_changed");
ROUTE710->setFromNode("StopTimer");
ROUTE710->setToField("set_fraction");
ROUTE710->setToNode("Stop_r_sternoclavicular_RotationInterpolator");
group->addChildren(*ROUTE710);

CROUTE* ROUTE711 = new CROUTE();
ROUTE711->setFromField("fraction_changed");
ROUTE711->setFromNode("StopTimer");
ROUTE711->setToField("set_fraction");
ROUTE711->setToNode("Stop_r_acromioclavicular_RotationInterpolator");
group->addChildren(*ROUTE711);

CROUTE* ROUTE712 = new CROUTE();
ROUTE712->setFromField("fraction_changed");
ROUTE712->setFromNode("StopTimer");
ROUTE712->setToField("set_fraction");
ROUTE712->setToNode("Stop_r_shoulder_RotationInterpolator");
group->addChildren(*ROUTE712);

CROUTE* ROUTE713 = new CROUTE();
ROUTE713->setFromField("fraction_changed");
ROUTE713->setFromNode("StopTimer");
ROUTE713->setToField("set_fraction");
ROUTE713->setToNode("Stop_r_elbow_RotationInterpolator");
group->addChildren(*ROUTE713);

CROUTE* ROUTE714 = new CROUTE();
ROUTE714->setFromField("fraction_changed");
ROUTE714->setFromNode("StopTimer");
ROUTE714->setToField("set_fraction");
ROUTE714->setToNode("Stop_r_wrist_RotationInterpolator");
group->addChildren(*ROUTE714);

CROUTE* ROUTE715 = new CROUTE();
ROUTE715->setFromField("fraction_changed");
ROUTE715->setFromNode("StopTimer");
ROUTE715->setToField("set_fraction");
ROUTE715->setToNode("Stop_r_thumb1_RotationInterpolator");
group->addChildren(*ROUTE715);

CROUTE* ROUTE716 = new CROUTE();
ROUTE716->setFromField("fraction_changed");
ROUTE716->setFromNode("StopTimer");
ROUTE716->setToField("set_fraction");
ROUTE716->setToNode("Stop_r_thumb2_RotationInterpolator");
group->addChildren(*ROUTE716);

CROUTE* ROUTE717 = new CROUTE();
ROUTE717->setFromField("fraction_changed");
ROUTE717->setFromNode("StopTimer");
ROUTE717->setToField("set_fraction");
ROUTE717->setToNode("Stop_r_thumb3_RotationInterpolator");
group->addChildren(*ROUTE717);

CROUTE* ROUTE718 = new CROUTE();
ROUTE718->setFromField("fraction_changed");
ROUTE718->setFromNode("StopTimer");
ROUTE718->setToField("set_fraction");
ROUTE718->setToNode("Stop_r_index0_RotationInterpolator");
group->addChildren(*ROUTE718);

CROUTE* ROUTE719 = new CROUTE();
ROUTE719->setFromField("fraction_changed");
ROUTE719->setFromNode("StopTimer");
ROUTE719->setToField("set_fraction");
ROUTE719->setToNode("Stop_r_index1_RotationInterpolator");
group->addChildren(*ROUTE719);

CROUTE* ROUTE720 = new CROUTE();
ROUTE720->setFromField("fraction_changed");
ROUTE720->setFromNode("StopTimer");
ROUTE720->setToField("set_fraction");
ROUTE720->setToNode("Stop_r_index2_RotationInterpolator");
group->addChildren(*ROUTE720);

CROUTE* ROUTE721 = new CROUTE();
ROUTE721->setFromField("fraction_changed");
ROUTE721->setFromNode("StopTimer");
ROUTE721->setToField("set_fraction");
ROUTE721->setToNode("Stop_r_index3_RotationInterpolator");
group->addChildren(*ROUTE721);

CROUTE* ROUTE722 = new CROUTE();
ROUTE722->setFromField("fraction_changed");
ROUTE722->setFromNode("StopTimer");
ROUTE722->setToField("set_fraction");
ROUTE722->setToNode("Stop_r_middle0_RotationInterpolator");
group->addChildren(*ROUTE722);

CROUTE* ROUTE723 = new CROUTE();
ROUTE723->setFromField("fraction_changed");
ROUTE723->setFromNode("StopTimer");
ROUTE723->setToField("set_fraction");
ROUTE723->setToNode("Stop_r_middle1_RotationInterpolator");
group->addChildren(*ROUTE723);

CROUTE* ROUTE724 = new CROUTE();
ROUTE724->setFromField("fraction_changed");
ROUTE724->setFromNode("StopTimer");
ROUTE724->setToField("set_fraction");
ROUTE724->setToNode("Stop_r_middle2_RotationInterpolator");
group->addChildren(*ROUTE724);

CROUTE* ROUTE725 = new CROUTE();
ROUTE725->setFromField("fraction_changed");
ROUTE725->setFromNode("StopTimer");
ROUTE725->setToField("set_fraction");
ROUTE725->setToNode("Stop_r_middle3_RotationInterpolator");
group->addChildren(*ROUTE725);

CROUTE* ROUTE726 = new CROUTE();
ROUTE726->setFromField("fraction_changed");
ROUTE726->setFromNode("StopTimer");
ROUTE726->setToField("set_fraction");
ROUTE726->setToNode("Stop_r_ring0_RotationInterpolator");
group->addChildren(*ROUTE726);

CROUTE* ROUTE727 = new CROUTE();
ROUTE727->setFromField("fraction_changed");
ROUTE727->setFromNode("StopTimer");
ROUTE727->setToField("set_fraction");
ROUTE727->setToNode("Stop_r_ring1_RotationInterpolator");
group->addChildren(*ROUTE727);

CROUTE* ROUTE728 = new CROUTE();
ROUTE728->setFromField("fraction_changed");
ROUTE728->setFromNode("StopTimer");
ROUTE728->setToField("set_fraction");
ROUTE728->setToNode("Stop_r_ring2_RotationInterpolator");
group->addChildren(*ROUTE728);

CROUTE* ROUTE729 = new CROUTE();
ROUTE729->setFromField("fraction_changed");
ROUTE729->setFromNode("StopTimer");
ROUTE729->setToField("set_fraction");
ROUTE729->setToNode("Stop_r_ring3_RotationInterpolator");
group->addChildren(*ROUTE729);

CROUTE* ROUTE730 = new CROUTE();
ROUTE730->setFromField("fraction_changed");
ROUTE730->setFromNode("StopTimer");
ROUTE730->setToField("set_fraction");
ROUTE730->setToNode("Stop_r_pinky0_RotationInterpolator");
group->addChildren(*ROUTE730);

CROUTE* ROUTE731 = new CROUTE();
ROUTE731->setFromField("fraction_changed");
ROUTE731->setFromNode("StopTimer");
ROUTE731->setToField("set_fraction");
ROUTE731->setToNode("Stop_r_pinky1_RotationInterpolator");
group->addChildren(*ROUTE731);

CROUTE* ROUTE732 = new CROUTE();
ROUTE732->setFromField("fraction_changed");
ROUTE732->setFromNode("StopTimer");
ROUTE732->setToField("set_fraction");
ROUTE732->setToNode("Stop_r_pinky2_RotationInterpolator");
group->addChildren(*ROUTE732);

CROUTE* ROUTE733 = new CROUTE();
ROUTE733->setFromField("fraction_changed");
ROUTE733->setFromNode("StopTimer");
ROUTE733->setToField("set_fraction");
ROUTE733->setToNode("Stop_r_pinky3_RotationInterpolator");
group->addChildren(*ROUTE733);

CROUTE* ROUTE734 = new CROUTE();
ROUTE734->setFromField("value_changed");
ROUTE734->setFromNode("Stop_humanoid_root_TranslationInterpolator");
ROUTE734->setToField("set_translation");
ROUTE734->setToNode("boxman_humanoid_root");
group->addChildren(*ROUTE734);

CROUTE* ROUTE735 = new CROUTE();
ROUTE735->setFromField("value_changed");
ROUTE735->setFromNode("Stop_humanoid_root_RotationInterpolator");
ROUTE735->setToField("set_rotation");
ROUTE735->setToNode("boxman_humanoid_root");
group->addChildren(*ROUTE735);

CROUTE* ROUTE736 = new CROUTE();
ROUTE736->setFromField("value_changed");
ROUTE736->setFromNode("Stop_l_hip_RotationInterpolator");
ROUTE736->setToField("set_rotation");
ROUTE736->setToNode("boxman_l_hip");
group->addChildren(*ROUTE736);

CROUTE* ROUTE737 = new CROUTE();
ROUTE737->setFromField("value_changed");
ROUTE737->setFromNode("Stop_l_knee_RotationInterpolator");
ROUTE737->setToField("set_rotation");
ROUTE737->setToNode("boxman_l_knee");
group->addChildren(*ROUTE737);

CROUTE* ROUTE738 = new CROUTE();
ROUTE738->setFromField("value_changed");
ROUTE738->setFromNode("Stop_l_ankle_RotationInterpolator");
ROUTE738->setToField("set_rotation");
ROUTE738->setToNode("boxman_l_ankle");
group->addChildren(*ROUTE738);

CROUTE* ROUTE739 = new CROUTE();
ROUTE739->setFromField("value_changed");
ROUTE739->setFromNode("Stop_l_midtarsal_RotationInterpolator");
ROUTE739->setToField("set_rotation");
ROUTE739->setToNode("boxman_l_midtarsal");
group->addChildren(*ROUTE739);

CROUTE* ROUTE740 = new CROUTE();
ROUTE740->setFromField("value_changed");
ROUTE740->setFromNode("Stop_r_hip_RotationInterpolator");
ROUTE740->setToField("set_rotation");
ROUTE740->setToNode("boxman_r_hip");
group->addChildren(*ROUTE740);

CROUTE* ROUTE741 = new CROUTE();
ROUTE741->setFromField("value_changed");
ROUTE741->setFromNode("Stop_r_knee_RotationInterpolator");
ROUTE741->setToField("set_rotation");
ROUTE741->setToNode("boxman_r_knee");
group->addChildren(*ROUTE741);

CROUTE* ROUTE742 = new CROUTE();
ROUTE742->setFromField("value_changed");
ROUTE742->setFromNode("Stop_r_ankle_RotationInterpolator");
ROUTE742->setToField("set_rotation");
ROUTE742->setToNode("boxman_r_ankle");
group->addChildren(*ROUTE742);

CROUTE* ROUTE743 = new CROUTE();
ROUTE743->setFromField("value_changed");
ROUTE743->setFromNode("Stop_r_midtarsal_RotationInterpolator");
ROUTE743->setToField("set_rotation");
ROUTE743->setToNode("boxman_r_midtarsal");
group->addChildren(*ROUTE743);

CROUTE* ROUTE744 = new CROUTE();
ROUTE744->setFromField("value_changed");
ROUTE744->setFromNode("Stop_vl5_RotationInterpolator");
ROUTE744->setToField("set_rotation");
ROUTE744->setToNode("boxman_vl5");
group->addChildren(*ROUTE744);

CROUTE* ROUTE745 = new CROUTE();
ROUTE745->setFromField("value_changed");
ROUTE745->setFromNode("Stop_skullbase_RotationInterpolator");
ROUTE745->setToField("set_rotation");
ROUTE745->setToNode("boxman_skullbase");
group->addChildren(*ROUTE745);

CROUTE* ROUTE746 = new CROUTE();
ROUTE746->setFromField("value_changed");
ROUTE746->setFromNode("Stop_l_shoulder_RotationInterpolator");
ROUTE746->setToField("set_rotation");
ROUTE746->setToNode("boxman_l_shoulder");
group->addChildren(*ROUTE746);

CROUTE* ROUTE747 = new CROUTE();
ROUTE747->setFromField("value_changed");
ROUTE747->setFromNode("Stop_l_elbow_RotationInterpolator");
ROUTE747->setToField("set_rotation");
ROUTE747->setToNode("boxman_l_elbow");
group->addChildren(*ROUTE747);

CROUTE* ROUTE748 = new CROUTE();
ROUTE748->setFromField("value_changed");
ROUTE748->setFromNode("Stop_l_wrist_RotationInterpolator");
ROUTE748->setToField("set_rotation");
ROUTE748->setToNode("boxman_l_wrist");
group->addChildren(*ROUTE748);

CROUTE* ROUTE749 = new CROUTE();
ROUTE749->setFromField("value_changed");
ROUTE749->setFromNode("Stop_r_shoulder_RotationInterpolator");
ROUTE749->setToField("set_rotation");
ROUTE749->setToNode("boxman_r_shoulder");
group->addChildren(*ROUTE749);

CROUTE* ROUTE750 = new CROUTE();
ROUTE750->setFromField("value_changed");
ROUTE750->setFromNode("Stop_r_elbow_RotationInterpolator");
ROUTE750->setToField("set_rotation");
ROUTE750->setToNode("boxman_r_elbow");
group->addChildren(*ROUTE750);

CROUTE* ROUTE751 = new CROUTE();
ROUTE751->setFromField("value_changed");
ROUTE751->setFromNode("Stop_r_wrist_RotationInterpolator");
ROUTE751->setToField("set_rotation");
ROUTE751->setToNode("boxman_r_wrist");
group->addChildren(*ROUTE751);

CROUTE* ROUTE752 = new CROUTE();
ROUTE752->setFromField("fraction_changed");
ROUTE752->setFromNode("StandTimer");
ROUTE752->setToField("set_fraction");
ROUTE752->setToNode("Stand_r_ankle_RotationInterpolator");
group->addChildren(*ROUTE752);

CROUTE* ROUTE753 = new CROUTE();
ROUTE753->setFromField("fraction_changed");
ROUTE753->setFromNode("StandTimer");
ROUTE753->setToField("set_fraction");
ROUTE753->setToNode("Stand_r_knee_RotationInterpolator");
group->addChildren(*ROUTE753);

CROUTE* ROUTE754 = new CROUTE();
ROUTE754->setFromField("fraction_changed");
ROUTE754->setFromNode("StandTimer");
ROUTE754->setToField("set_fraction");
ROUTE754->setToNode("Stand_r_hip_RotationInterpolator");
group->addChildren(*ROUTE754);

CROUTE* ROUTE755 = new CROUTE();
ROUTE755->setFromField("fraction_changed");
ROUTE755->setFromNode("StandTimer");
ROUTE755->setToField("set_fraction");
ROUTE755->setToNode("Stand_l_ankle_RotationInterpolator");
group->addChildren(*ROUTE755);

CROUTE* ROUTE756 = new CROUTE();
ROUTE756->setFromField("fraction_changed");
ROUTE756->setFromNode("StandTimer");
ROUTE756->setToField("set_fraction");
ROUTE756->setToNode("Stand_l_knee_RotationInterpolator");
group->addChildren(*ROUTE756);

CROUTE* ROUTE757 = new CROUTE();
ROUTE757->setFromField("fraction_changed");
ROUTE757->setFromNode("StandTimer");
ROUTE757->setToField("set_fraction");
ROUTE757->setToNode("Stand_l_hip_RotationInterpolator");
group->addChildren(*ROUTE757);

CROUTE* ROUTE758 = new CROUTE();
ROUTE758->setFromField("fraction_changed");
ROUTE758->setFromNode("StandTimer");
ROUTE758->setToField("set_fraction");
ROUTE758->setToNode("Stand_lower_body_RotationInterpolator");
group->addChildren(*ROUTE758);

CROUTE* ROUTE759 = new CROUTE();
ROUTE759->setFromField("fraction_changed");
ROUTE759->setFromNode("StandTimer");
ROUTE759->setToField("set_fraction");
ROUTE759->setToNode("Stand_r_wrist_RotationInterpolator");
group->addChildren(*ROUTE759);

CROUTE* ROUTE760 = new CROUTE();
ROUTE760->setFromField("fraction_changed");
ROUTE760->setFromNode("StandTimer");
ROUTE760->setToField("set_fraction");
ROUTE760->setToNode("Stand_r_elbow_RotationInterpolator");
group->addChildren(*ROUTE760);

CROUTE* ROUTE761 = new CROUTE();
ROUTE761->setFromField("fraction_changed");
ROUTE761->setFromNode("StandTimer");
ROUTE761->setToField("set_fraction");
ROUTE761->setToNode("Stand_r_shoulder_RotationInterpolator");
group->addChildren(*ROUTE761);

CROUTE* ROUTE762 = new CROUTE();
ROUTE762->setFromField("fraction_changed");
ROUTE762->setFromNode("StandTimer");
ROUTE762->setToField("set_fraction");
ROUTE762->setToNode("Stand_l_wrist_RotationInterpolator");
group->addChildren(*ROUTE762);

CROUTE* ROUTE763 = new CROUTE();
ROUTE763->setFromField("fraction_changed");
ROUTE763->setFromNode("StandTimer");
ROUTE763->setToField("set_fraction");
ROUTE763->setToNode("Stand_l_elbow_RotationInterpolator");
group->addChildren(*ROUTE763);

CROUTE* ROUTE764 = new CROUTE();
ROUTE764->setFromField("fraction_changed");
ROUTE764->setFromNode("StandTimer");
ROUTE764->setToField("set_fraction");
ROUTE764->setToNode("Stand_l_shoulder_RotationInterpolator");
group->addChildren(*ROUTE764);

CROUTE* ROUTE765 = new CROUTE();
ROUTE765->setFromField("fraction_changed");
ROUTE765->setFromNode("StandTimer");
ROUTE765->setToField("set_fraction");
ROUTE765->setToNode("Stand_head_RotationInterpolator");
group->addChildren(*ROUTE765);

CROUTE* ROUTE766 = new CROUTE();
ROUTE766->setFromField("fraction_changed");
ROUTE766->setFromNode("StandTimer");
ROUTE766->setToField("set_fraction");
ROUTE766->setToNode("Stand_neck_RotationInterpolator");
group->addChildren(*ROUTE766);

CROUTE* ROUTE767 = new CROUTE();
ROUTE767->setFromField("fraction_changed");
ROUTE767->setFromNode("StandTimer");
ROUTE767->setToField("set_fraction");
ROUTE767->setToNode("Stand_l_eyeball_RotationInterpolator");
group->addChildren(*ROUTE767);

CROUTE* ROUTE768 = new CROUTE();
ROUTE768->setFromField("fraction_changed");
ROUTE768->setFromNode("StandTimer");
ROUTE768->setToField("set_fraction");
ROUTE768->setToNode("Stand_r_eyeball_RotationInterpolator");
group->addChildren(*ROUTE768);

CROUTE* ROUTE769 = new CROUTE();
ROUTE769->setFromField("fraction_changed");
ROUTE769->setFromNode("StandTimer");
ROUTE769->setToField("set_fraction");
ROUTE769->setToNode("Stand_upper_body_RotationInterpolator");
group->addChildren(*ROUTE769);

CROUTE* ROUTE770 = new CROUTE();
ROUTE770->setFromField("fraction_changed");
ROUTE770->setFromNode("StandTimer");
ROUTE770->setToField("set_fraction");
ROUTE770->setToNode("Stand_whole_body_RotationInterpolator");
group->addChildren(*ROUTE770);

CROUTE* ROUTE771 = new CROUTE();
ROUTE771->setFromField("fraction_changed");
ROUTE771->setFromNode("StandTimer");
ROUTE771->setToField("set_fraction");
ROUTE771->setToNode("Stand_whole_body_TranslationInterpolator");
group->addChildren(*ROUTE771);

CROUTE* ROUTE772 = new CROUTE();
ROUTE772->setFromField("fraction_changed");
ROUTE772->setFromNode("StandTimer");
ROUTE772->setToField("set_fraction");
ROUTE772->setToNode("Stand_l_sternoclavicular_RollInterpolator");
group->addChildren(*ROUTE772);

CROUTE* ROUTE773 = new CROUTE();
ROUTE773->setFromField("fraction_changed");
ROUTE773->setFromNode("StandTimer");
ROUTE773->setToField("set_fraction");
ROUTE773->setToNode("Stand_l_acromioclavicular_RollInterpolator");
group->addChildren(*ROUTE773);

CROUTE* ROUTE774 = new CROUTE();
ROUTE774->setFromField("fraction_changed");
ROUTE774->setFromNode("StandTimer");
ROUTE774->setToField("set_fraction");
ROUTE774->setToNode("Stand_r_sternoclavicular_RollInterpolator");
group->addChildren(*ROUTE774);

CROUTE* ROUTE775 = new CROUTE();
ROUTE775->setFromField("fraction_changed");
ROUTE775->setFromNode("StandTimer");
ROUTE775->setToField("set_fraction");
ROUTE775->setToNode("Stand_r_acromioclavicular_RollInterpolator");
group->addChildren(*ROUTE775);

CROUTE* ROUTE776 = new CROUTE();
ROUTE776->setFromField("fraction_changed");
ROUTE776->setFromNode("StandTimer");
ROUTE776->setToField("set_fraction");
ROUTE776->setToNode("Stand_r_metatarsal_PitchInterpolator");
group->addChildren(*ROUTE776);

CROUTE* ROUTE777 = new CROUTE();
ROUTE777->setFromField("fraction_changed");
ROUTE777->setFromNode("StandTimer");
ROUTE777->setToField("set_fraction");
ROUTE777->setToNode("Stand_sacroiliac_YawInterpolator");
group->addChildren(*ROUTE777);

CROUTE* ROUTE778 = new CROUTE();
ROUTE778->setFromField("fraction_changed");
ROUTE778->setFromNode("StandTimer");
ROUTE778->setToField("set_fraction");
ROUTE778->setToNode("Stand_vl5_YawInterpolator");
group->addChildren(*ROUTE778);

CROUTE* ROUTE779 = new CROUTE();
ROUTE779->setFromField("fraction_changed");
ROUTE779->setFromNode("StandTimer");
ROUTE779->setToField("set_fraction");
ROUTE779->setToNode("Stand_vc6_YawInterpolator");
group->addChildren(*ROUTE779);

CROUTE* ROUTE780 = new CROUTE();
ROUTE780->setFromField("fraction_changed");
ROUTE780->setFromNode("StandTimer");
ROUTE780->setToField("set_fraction");
ROUTE780->setToNode("Stand_l_thumb1_PitchInterpolator");
group->addChildren(*ROUTE780);

CROUTE* ROUTE781 = new CROUTE();
ROUTE781->setFromField("fraction_changed");
ROUTE781->setFromNode("StandTimer");
ROUTE781->setToField("set_fraction");
ROUTE781->setToNode("Stand_r_thumb1_PitchInterpolator");
group->addChildren(*ROUTE781);

CROUTE* ROUTE782 = new CROUTE();
ROUTE782->setFromField("fraction_changed");
ROUTE782->setFromNode("StandTimer");
ROUTE782->setToField("set_fraction");
ROUTE782->setToNode("Stand_r_index1_RollInterpolator");
group->addChildren(*ROUTE782);

CROUTE* ROUTE783 = new CROUTE();
ROUTE783->setFromField("fraction_changed");
ROUTE783->setFromNode("StandTimer");
ROUTE783->setToField("set_fraction");
ROUTE783->setToNode("Stand_r_index2_RollInterpolator");
group->addChildren(*ROUTE783);

CROUTE* ROUTE784 = new CROUTE();
ROUTE784->setFromField("fraction_changed");
ROUTE784->setFromNode("StandTimer");
ROUTE784->setToField("set_fraction");
ROUTE784->setToNode("Stand_r_index3_RollInterpolator");
group->addChildren(*ROUTE784);

CROUTE* ROUTE785 = new CROUTE();
ROUTE785->setFromField("value_changed");
ROUTE785->setFromNode("Stand_r_ankle_RotationInterpolator");
ROUTE785->setToField("set_rotation");
ROUTE785->setToNode("boxman_r_ankle");
group->addChildren(*ROUTE785);

CROUTE* ROUTE786 = new CROUTE();
ROUTE786->setFromField("value_changed");
ROUTE786->setFromNode("Stand_r_knee_RotationInterpolator");
ROUTE786->setToField("set_rotation");
ROUTE786->setToNode("boxman_r_knee");
group->addChildren(*ROUTE786);

CROUTE* ROUTE787 = new CROUTE();
ROUTE787->setFromField("value_changed");
ROUTE787->setFromNode("Stand_r_hip_RotationInterpolator");
ROUTE787->setToField("set_rotation");
ROUTE787->setToNode("boxman_r_hip");
group->addChildren(*ROUTE787);

CROUTE* ROUTE788 = new CROUTE();
ROUTE788->setFromField("value_changed");
ROUTE788->setFromNode("Stand_l_ankle_RotationInterpolator");
ROUTE788->setToField("set_rotation");
ROUTE788->setToNode("boxman_l_ankle");
group->addChildren(*ROUTE788);

CROUTE* ROUTE789 = new CROUTE();
ROUTE789->setFromField("value_changed");
ROUTE789->setFromNode("Stand_l_knee_RotationInterpolator");
ROUTE789->setToField("set_rotation");
ROUTE789->setToNode("boxman_l_knee");
group->addChildren(*ROUTE789);

CROUTE* ROUTE790 = new CROUTE();
ROUTE790->setFromField("value_changed");
ROUTE790->setFromNode("Stand_l_hip_RotationInterpolator");
ROUTE790->setToField("set_rotation");
ROUTE790->setToNode("boxman_l_hip");
group->addChildren(*ROUTE790);

CROUTE* ROUTE791 = new CROUTE();
ROUTE791->setFromField("value_changed");
ROUTE791->setFromNode("Stand_r_wrist_RotationInterpolator");
ROUTE791->setToField("set_rotation");
ROUTE791->setToNode("boxman_r_wrist");
group->addChildren(*ROUTE791);

CROUTE* ROUTE792 = new CROUTE();
ROUTE792->setFromField("value_changed");
ROUTE792->setFromNode("Stand_r_elbow_RotationInterpolator");
ROUTE792->setToField("set_rotation");
ROUTE792->setToNode("boxman_r_elbow");
group->addChildren(*ROUTE792);

CROUTE* ROUTE793 = new CROUTE();
ROUTE793->setFromField("value_changed");
ROUTE793->setFromNode("Stand_r_shoulder_RotationInterpolator");
ROUTE793->setToField("set_rotation");
ROUTE793->setToNode("boxman_r_shoulder");
group->addChildren(*ROUTE793);

CROUTE* ROUTE794 = new CROUTE();
ROUTE794->setFromField("value_changed");
ROUTE794->setFromNode("Stand_l_wrist_RotationInterpolator");
ROUTE794->setToField("set_rotation");
ROUTE794->setToNode("boxman_l_wrist");
group->addChildren(*ROUTE794);

CROUTE* ROUTE795 = new CROUTE();
ROUTE795->setFromField("value_changed");
ROUTE795->setFromNode("Stand_l_elbow_RotationInterpolator");
ROUTE795->setToField("set_rotation");
ROUTE795->setToNode("boxman_l_elbow");
group->addChildren(*ROUTE795);

CROUTE* ROUTE796 = new CROUTE();
ROUTE796->setFromField("value_changed");
ROUTE796->setFromNode("Stand_l_shoulder_RotationInterpolator");
ROUTE796->setToField("set_rotation");
ROUTE796->setToNode("boxman_l_shoulder");
group->addChildren(*ROUTE796);

CROUTE* ROUTE797 = new CROUTE();
ROUTE797->setFromField("value_changed");
ROUTE797->setFromNode("Stand_head_RotationInterpolator");
ROUTE797->setToField("set_rotation");
ROUTE797->setToNode("boxman_skullbase");
group->addChildren(*ROUTE797);

CROUTE* ROUTE798 = new CROUTE();
ROUTE798->setFromField("value_changed");
ROUTE798->setFromNode("Stand_whole_body_RotationInterpolator");
ROUTE798->setToField("set_rotation");
ROUTE798->setToNode("boxman_humanoid_root");
group->addChildren(*ROUTE798);

CROUTE* ROUTE799 = new CROUTE();
ROUTE799->setFromField("value_changed");
ROUTE799->setFromNode("Stand_whole_body_TranslationInterpolator");
ROUTE799->setToField("set_translation");
ROUTE799->setToNode("boxman_humanoid_root");
group->addChildren(*ROUTE799);

CROUTE* ROUTE800 = new CROUTE();
ROUTE800->setFromField("value_changed");
ROUTE800->setFromNode("Stand_vl5_YawInterpolator");
ROUTE800->setToField("set_rotation");
ROUTE800->setToNode("boxman_vl5");
group->addChildren(*ROUTE800);

CROUTE* ROUTE801 = new CROUTE();
ROUTE801->setFromField("fraction_changed");
ROUTE801->setFromNode("PitchTimer");
ROUTE801->setToField("set_fraction");
ROUTE801->setToNode("Pitches_r_ankle_RotationInterpolator");
group->addChildren(*ROUTE801);

CROUTE* ROUTE802 = new CROUTE();
ROUTE802->setFromField("fraction_changed");
ROUTE802->setFromNode("PitchTimer");
ROUTE802->setToField("set_fraction");
ROUTE802->setToNode("Pitches_r_knee_RotationInterpolator");
group->addChildren(*ROUTE802);

CROUTE* ROUTE803 = new CROUTE();
ROUTE803->setFromField("fraction_changed");
ROUTE803->setFromNode("PitchTimer");
ROUTE803->setToField("set_fraction");
ROUTE803->setToNode("Pitches_r_hip_RotationInterpolator");
group->addChildren(*ROUTE803);

CROUTE* ROUTE804 = new CROUTE();
ROUTE804->setFromField("fraction_changed");
ROUTE804->setFromNode("PitchTimer");
ROUTE804->setToField("set_fraction");
ROUTE804->setToNode("Pitches_l_ankle_RotationInterpolator");
group->addChildren(*ROUTE804);

CROUTE* ROUTE805 = new CROUTE();
ROUTE805->setFromField("fraction_changed");
ROUTE805->setFromNode("PitchTimer");
ROUTE805->setToField("set_fraction");
ROUTE805->setToNode("Pitches_l_knee_RotationInterpolator");
group->addChildren(*ROUTE805);

CROUTE* ROUTE806 = new CROUTE();
ROUTE806->setFromField("fraction_changed");
ROUTE806->setFromNode("PitchTimer");
ROUTE806->setToField("set_fraction");
ROUTE806->setToNode("Pitches_l_hip_RotationInterpolator");
group->addChildren(*ROUTE806);

CROUTE* ROUTE807 = new CROUTE();
ROUTE807->setFromField("fraction_changed");
ROUTE807->setFromNode("PitchTimer");
ROUTE807->setToField("set_fraction");
ROUTE807->setToNode("Pitches_lower_body_RotationInterpolator");
group->addChildren(*ROUTE807);

CROUTE* ROUTE808 = new CROUTE();
ROUTE808->setFromField("fraction_changed");
ROUTE808->setFromNode("PitchTimer");
ROUTE808->setToField("set_fraction");
ROUTE808->setToNode("Pitches_r_wrist_RotationInterpolator");
group->addChildren(*ROUTE808);

CROUTE* ROUTE809 = new CROUTE();
ROUTE809->setFromField("fraction_changed");
ROUTE809->setFromNode("PitchTimer");
ROUTE809->setToField("set_fraction");
ROUTE809->setToNode("Pitches_r_elbow_RotationInterpolator");
group->addChildren(*ROUTE809);

CROUTE* ROUTE810 = new CROUTE();
ROUTE810->setFromField("fraction_changed");
ROUTE810->setFromNode("PitchTimer");
ROUTE810->setToField("set_fraction");
ROUTE810->setToNode("Pitches_r_shoulder_RotationInterpolator");
group->addChildren(*ROUTE810);

CROUTE* ROUTE811 = new CROUTE();
ROUTE811->setFromField("fraction_changed");
ROUTE811->setFromNode("PitchTimer");
ROUTE811->setToField("set_fraction");
ROUTE811->setToNode("Pitches_l_wrist_RotationInterpolator");
group->addChildren(*ROUTE811);

CROUTE* ROUTE812 = new CROUTE();
ROUTE812->setFromField("fraction_changed");
ROUTE812->setFromNode("PitchTimer");
ROUTE812->setToField("set_fraction");
ROUTE812->setToNode("Pitches_l_elbow_RotationInterpolator");
group->addChildren(*ROUTE812);

CROUTE* ROUTE813 = new CROUTE();
ROUTE813->setFromField("fraction_changed");
ROUTE813->setFromNode("PitchTimer");
ROUTE813->setToField("set_fraction");
ROUTE813->setToNode("Pitches_l_shoulder_RotationInterpolator");
group->addChildren(*ROUTE813);

CROUTE* ROUTE814 = new CROUTE();
ROUTE814->setFromField("fraction_changed");
ROUTE814->setFromNode("PitchTimer");
ROUTE814->setToField("set_fraction");
ROUTE814->setToNode("Pitches_head_RotationInterpolator");
group->addChildren(*ROUTE814);

CROUTE* ROUTE815 = new CROUTE();
ROUTE815->setFromField("fraction_changed");
ROUTE815->setFromNode("PitchTimer");
ROUTE815->setToField("set_fraction");
ROUTE815->setToNode("Pitches_neck_RotationInterpolator");
group->addChildren(*ROUTE815);

CROUTE* ROUTE816 = new CROUTE();
ROUTE816->setFromField("fraction_changed");
ROUTE816->setFromNode("PitchTimer");
ROUTE816->setToField("set_fraction");
ROUTE816->setToNode("Pitches_upper_body_RotationInterpolator");
group->addChildren(*ROUTE816);

CROUTE* ROUTE817 = new CROUTE();
ROUTE817->setFromField("fraction_changed");
ROUTE817->setFromNode("PitchTimer");
ROUTE817->setToField("set_fraction");
ROUTE817->setToNode("Pitches_whole_body_RotationInterpolator");
group->addChildren(*ROUTE817);

CROUTE* ROUTE818 = new CROUTE();
ROUTE818->setFromField("fraction_changed");
ROUTE818->setFromNode("PitchTimer");
ROUTE818->setToField("set_fraction");
ROUTE818->setToNode("Pitches_whole_body_TranslationInterpolator");
group->addChildren(*ROUTE818);

CROUTE* ROUTE819 = new CROUTE();
ROUTE819->setFromField("fraction_changed");
ROUTE819->setFromNode("PitchTimer");
ROUTE819->setToField("set_fraction");
ROUTE819->setToNode("Pitch_l_sternoclavicular_RollInterpolator");
group->addChildren(*ROUTE819);

CROUTE* ROUTE820 = new CROUTE();
ROUTE820->setFromField("fraction_changed");
ROUTE820->setFromNode("PitchTimer");
ROUTE820->setToField("set_fraction");
ROUTE820->setToNode("Pitch_l_acromioclavicular_RollInterpolator");
group->addChildren(*ROUTE820);

CROUTE* ROUTE821 = new CROUTE();
ROUTE821->setFromField("fraction_changed");
ROUTE821->setFromNode("PitchTimer");
ROUTE821->setToField("set_fraction");
ROUTE821->setToNode("Pitch_r_sternoclavicular_RollInterpolator");
group->addChildren(*ROUTE821);

CROUTE* ROUTE822 = new CROUTE();
ROUTE822->setFromField("fraction_changed");
ROUTE822->setFromNode("PitchTimer");
ROUTE822->setToField("set_fraction");
ROUTE822->setToNode("Pitch_r_acromioclavicular_RollInterpolator");
group->addChildren(*ROUTE822);

CROUTE* ROUTE823 = new CROUTE();
ROUTE823->setFromField("fraction_changed");
ROUTE823->setFromNode("PitchTimer");
ROUTE823->setToField("set_fraction");
ROUTE823->setToNode("Pitch_r_metatarsal_PitchInterpolator");
group->addChildren(*ROUTE823);

CROUTE* ROUTE824 = new CROUTE();
ROUTE824->setFromField("fraction_changed");
ROUTE824->setFromNode("PitchTimer");
ROUTE824->setToField("set_fraction");
ROUTE824->setToNode("Pitch_sacroiliac_YawInterpolator");
group->addChildren(*ROUTE824);

CROUTE* ROUTE825 = new CROUTE();
ROUTE825->setFromField("fraction_changed");
ROUTE825->setFromNode("PitchTimer");
ROUTE825->setToField("set_fraction");
ROUTE825->setToNode("Pitch_vl5_YawInterpolator");
group->addChildren(*ROUTE825);

CROUTE* ROUTE826 = new CROUTE();
ROUTE826->setFromField("fraction_changed");
ROUTE826->setFromNode("PitchTimer");
ROUTE826->setToField("set_fraction");
ROUTE826->setToNode("Pitch_vc6_YawInterpolator");
group->addChildren(*ROUTE826);

CROUTE* ROUTE827 = new CROUTE();
ROUTE827->setFromField("fraction_changed");
ROUTE827->setFromNode("PitchTimer");
ROUTE827->setToField("set_fraction");
ROUTE827->setToNode("Pitch_l_thumb1_PitchInterpolator");
group->addChildren(*ROUTE827);

CROUTE* ROUTE828 = new CROUTE();
ROUTE828->setFromField("fraction_changed");
ROUTE828->setFromNode("PitchTimer");
ROUTE828->setToField("set_fraction");
ROUTE828->setToNode("Pitch_r_thumb1_PitchInterpolator");
group->addChildren(*ROUTE828);

CROUTE* ROUTE829 = new CROUTE();
ROUTE829->setFromField("value_changed");
ROUTE829->setFromNode("Pitches_r_ankle_RotationInterpolator");
ROUTE829->setToField("set_rotation");
ROUTE829->setToNode("boxman_r_ankle");
group->addChildren(*ROUTE829);

CROUTE* ROUTE830 = new CROUTE();
ROUTE830->setFromField("value_changed");
ROUTE830->setFromNode("Pitches_r_knee_RotationInterpolator");
ROUTE830->setToField("set_rotation");
ROUTE830->setToNode("boxman_r_knee");
group->addChildren(*ROUTE830);

CROUTE* ROUTE831 = new CROUTE();
ROUTE831->setFromField("value_changed");
ROUTE831->setFromNode("Pitches_r_hip_RotationInterpolator");
ROUTE831->setToField("set_rotation");
ROUTE831->setToNode("boxman_r_hip");
group->addChildren(*ROUTE831);

CROUTE* ROUTE832 = new CROUTE();
ROUTE832->setFromField("value_changed");
ROUTE832->setFromNode("Pitches_l_ankle_RotationInterpolator");
ROUTE832->setToField("set_rotation");
ROUTE832->setToNode("boxman_l_ankle");
group->addChildren(*ROUTE832);

CROUTE* ROUTE833 = new CROUTE();
ROUTE833->setFromField("value_changed");
ROUTE833->setFromNode("Pitches_l_knee_RotationInterpolator");
ROUTE833->setToField("set_rotation");
ROUTE833->setToNode("boxman_l_knee");
group->addChildren(*ROUTE833);

CROUTE* ROUTE834 = new CROUTE();
ROUTE834->setFromField("value_changed");
ROUTE834->setFromNode("Pitches_l_hip_RotationInterpolator");
ROUTE834->setToField("set_rotation");
ROUTE834->setToNode("boxman_l_hip");
group->addChildren(*ROUTE834);

CROUTE* ROUTE835 = new CROUTE();
ROUTE835->setFromField("value_changed");
ROUTE835->setFromNode("Pitches_r_wrist_RotationInterpolator");
ROUTE835->setToField("set_rotation");
ROUTE835->setToNode("boxman_r_wrist");
group->addChildren(*ROUTE835);

CROUTE* ROUTE836 = new CROUTE();
ROUTE836->setFromField("value_changed");
ROUTE836->setFromNode("Pitches_r_elbow_RotationInterpolator");
ROUTE836->setToField("set_rotation");
ROUTE836->setToNode("boxman_r_elbow");
group->addChildren(*ROUTE836);

CROUTE* ROUTE837 = new CROUTE();
ROUTE837->setFromField("value_changed");
ROUTE837->setFromNode("Pitches_r_shoulder_RotationInterpolator");
ROUTE837->setToField("set_rotation");
ROUTE837->setToNode("boxman_r_shoulder");
group->addChildren(*ROUTE837);

CROUTE* ROUTE838 = new CROUTE();
ROUTE838->setFromField("value_changed");
ROUTE838->setFromNode("Pitches_l_wrist_RotationInterpolator");
ROUTE838->setToField("set_rotation");
ROUTE838->setToNode("boxman_l_wrist");
group->addChildren(*ROUTE838);

CROUTE* ROUTE839 = new CROUTE();
ROUTE839->setFromField("value_changed");
ROUTE839->setFromNode("Pitches_l_elbow_RotationInterpolator");
ROUTE839->setToField("set_rotation");
ROUTE839->setToNode("boxman_l_elbow");
group->addChildren(*ROUTE839);

CROUTE* ROUTE840 = new CROUTE();
ROUTE840->setFromField("value_changed");
ROUTE840->setFromNode("Pitches_l_shoulder_RotationInterpolator");
ROUTE840->setToField("set_rotation");
ROUTE840->setToNode("boxman_l_shoulder");
group->addChildren(*ROUTE840);

CROUTE* ROUTE841 = new CROUTE();
ROUTE841->setFromField("value_changed");
ROUTE841->setFromNode("Pitches_head_RotationInterpolator");
ROUTE841->setToField("set_rotation");
ROUTE841->setToNode("boxman_skullbase");
group->addChildren(*ROUTE841);

CROUTE* ROUTE842 = new CROUTE();
ROUTE842->setFromField("value_changed");
ROUTE842->setFromNode("Pitches_whole_body_RotationInterpolator");
ROUTE842->setToField("set_rotation");
ROUTE842->setToNode("boxman_humanoid_root");
group->addChildren(*ROUTE842);

CROUTE* ROUTE843 = new CROUTE();
ROUTE843->setFromField("value_changed");
ROUTE843->setFromNode("Pitches_whole_body_TranslationInterpolator");
ROUTE843->setToField("set_translation");
ROUTE843->setToNode("boxman_humanoid_root");
group->addChildren(*ROUTE843);

CROUTE* ROUTE844 = new CROUTE();
ROUTE844->setFromField("value_changed");
ROUTE844->setFromNode("Pitch_vl5_YawInterpolator");
ROUTE844->setToField("set_rotation");
ROUTE844->setToNode("boxman_vl5");
group->addChildren(*ROUTE844);

CROUTE* ROUTE845 = new CROUTE();
ROUTE845->setFromField("fraction_changed");
ROUTE845->setFromNode("YawTimer");
ROUTE845->setToField("set_fraction");
ROUTE845->setToNode("Yaws_r_ankle_RotationInterpolator");
group->addChildren(*ROUTE845);

CROUTE* ROUTE846 = new CROUTE();
ROUTE846->setFromField("fraction_changed");
ROUTE846->setFromNode("YawTimer");
ROUTE846->setToField("set_fraction");
ROUTE846->setToNode("Yaws_r_knee_RotationInterpolator");
group->addChildren(*ROUTE846);

CROUTE* ROUTE847 = new CROUTE();
ROUTE847->setFromField("fraction_changed");
ROUTE847->setFromNode("YawTimer");
ROUTE847->setToField("set_fraction");
ROUTE847->setToNode("Yaws_r_hip_RotationInterpolator");
group->addChildren(*ROUTE847);

CROUTE* ROUTE848 = new CROUTE();
ROUTE848->setFromField("fraction_changed");
ROUTE848->setFromNode("YawTimer");
ROUTE848->setToField("set_fraction");
ROUTE848->setToNode("Yaws_l_ankle_RotationInterpolator");
group->addChildren(*ROUTE848);

CROUTE* ROUTE849 = new CROUTE();
ROUTE849->setFromField("fraction_changed");
ROUTE849->setFromNode("YawTimer");
ROUTE849->setToField("set_fraction");
ROUTE849->setToNode("Yaws_l_knee_RotationInterpolator");
group->addChildren(*ROUTE849);

CROUTE* ROUTE850 = new CROUTE();
ROUTE850->setFromField("fraction_changed");
ROUTE850->setFromNode("YawTimer");
ROUTE850->setToField("set_fraction");
ROUTE850->setToNode("Yaws_l_hip_RotationInterpolator");
group->addChildren(*ROUTE850);

CROUTE* ROUTE851 = new CROUTE();
ROUTE851->setFromField("fraction_changed");
ROUTE851->setFromNode("YawTimer");
ROUTE851->setToField("set_fraction");
ROUTE851->setToNode("Yaws_lower_body_RotationInterpolator");
group->addChildren(*ROUTE851);

CROUTE* ROUTE852 = new CROUTE();
ROUTE852->setFromField("fraction_changed");
ROUTE852->setFromNode("YawTimer");
ROUTE852->setToField("set_fraction");
ROUTE852->setToNode("Yaws_r_wrist_RotationInterpolator");
group->addChildren(*ROUTE852);

CROUTE* ROUTE853 = new CROUTE();
ROUTE853->setFromField("fraction_changed");
ROUTE853->setFromNode("YawTimer");
ROUTE853->setToField("set_fraction");
ROUTE853->setToNode("Yaws_r_elbow_RotationInterpolator");
group->addChildren(*ROUTE853);

CROUTE* ROUTE854 = new CROUTE();
ROUTE854->setFromField("fraction_changed");
ROUTE854->setFromNode("YawTimer");
ROUTE854->setToField("set_fraction");
ROUTE854->setToNode("Yaws_r_shoulder_RotationInterpolator");
group->addChildren(*ROUTE854);

CROUTE* ROUTE855 = new CROUTE();
ROUTE855->setFromField("fraction_changed");
ROUTE855->setFromNode("YawTimer");
ROUTE855->setToField("set_fraction");
ROUTE855->setToNode("Yaws_l_wrist_RotationInterpolator");
group->addChildren(*ROUTE855);

CROUTE* ROUTE856 = new CROUTE();
ROUTE856->setFromField("fraction_changed");
ROUTE856->setFromNode("YawTimer");
ROUTE856->setToField("set_fraction");
ROUTE856->setToNode("Yaws_l_elbow_RotationInterpolator");
group->addChildren(*ROUTE856);

CROUTE* ROUTE857 = new CROUTE();
ROUTE857->setFromField("fraction_changed");
ROUTE857->setFromNode("YawTimer");
ROUTE857->setToField("set_fraction");
ROUTE857->setToNode("Yaws_l_shoulder_RotationInterpolator");
group->addChildren(*ROUTE857);

CROUTE* ROUTE858 = new CROUTE();
ROUTE858->setFromField("fraction_changed");
ROUTE858->setFromNode("YawTimer");
ROUTE858->setToField("set_fraction");
ROUTE858->setToNode("Yaws_head_RotationInterpolator");
group->addChildren(*ROUTE858);

CROUTE* ROUTE859 = new CROUTE();
ROUTE859->setFromField("fraction_changed");
ROUTE859->setFromNode("YawTimer");
ROUTE859->setToField("set_fraction");
ROUTE859->setToNode("Yaws_neck_RotationInterpolator");
group->addChildren(*ROUTE859);

CROUTE* ROUTE860 = new CROUTE();
ROUTE860->setFromField("fraction_changed");
ROUTE860->setFromNode("YawTimer");
ROUTE860->setToField("set_fraction");
ROUTE860->setToNode("Yaws_upper_body_RotationInterpolator");
group->addChildren(*ROUTE860);

CROUTE* ROUTE861 = new CROUTE();
ROUTE861->setFromField("fraction_changed");
ROUTE861->setFromNode("YawTimer");
ROUTE861->setToField("set_fraction");
ROUTE861->setToNode("Yaws_whole_body_RotationInterpolator");
group->addChildren(*ROUTE861);

CROUTE* ROUTE862 = new CROUTE();
ROUTE862->setFromField("fraction_changed");
ROUTE862->setFromNode("YawTimer");
ROUTE862->setToField("set_fraction");
ROUTE862->setToNode("Yaws_whole_body_TranslationInterpolator");
group->addChildren(*ROUTE862);

CROUTE* ROUTE863 = new CROUTE();
ROUTE863->setFromField("fraction_changed");
ROUTE863->setFromNode("YawTimer");
ROUTE863->setToField("set_fraction");
ROUTE863->setToNode("Yaw_l_sternoclavicular_RollInterpolator");
group->addChildren(*ROUTE863);

CROUTE* ROUTE864 = new CROUTE();
ROUTE864->setFromField("fraction_changed");
ROUTE864->setFromNode("YawTimer");
ROUTE864->setToField("set_fraction");
ROUTE864->setToNode("Yaw_l_acromioclavicular_RollInterpolator");
group->addChildren(*ROUTE864);

CROUTE* ROUTE865 = new CROUTE();
ROUTE865->setFromField("fraction_changed");
ROUTE865->setFromNode("YawTimer");
ROUTE865->setToField("set_fraction");
ROUTE865->setToNode("Yaw_r_sternoclavicular_RollInterpolator");
group->addChildren(*ROUTE865);

CROUTE* ROUTE866 = new CROUTE();
ROUTE866->setFromField("fraction_changed");
ROUTE866->setFromNode("YawTimer");
ROUTE866->setToField("set_fraction");
ROUTE866->setToNode("Yaw_r_acromioclavicular_RollInterpolator");
group->addChildren(*ROUTE866);

CROUTE* ROUTE867 = new CROUTE();
ROUTE867->setFromField("fraction_changed");
ROUTE867->setFromNode("YawTimer");
ROUTE867->setToField("set_fraction");
ROUTE867->setToNode("Yaw_r_metatarsal_PitchInterpolator");
group->addChildren(*ROUTE867);

CROUTE* ROUTE868 = new CROUTE();
ROUTE868->setFromField("fraction_changed");
ROUTE868->setFromNode("YawTimer");
ROUTE868->setToField("set_fraction");
ROUTE868->setToNode("Yaw_sacroiliac_YawInterpolator");
group->addChildren(*ROUTE868);

CROUTE* ROUTE869 = new CROUTE();
ROUTE869->setFromField("fraction_changed");
ROUTE869->setFromNode("YawTimer");
ROUTE869->setToField("set_fraction");
ROUTE869->setToNode("Yaw_vl5_YawInterpolator");
group->addChildren(*ROUTE869);

CROUTE* ROUTE870 = new CROUTE();
ROUTE870->setFromField("fraction_changed");
ROUTE870->setFromNode("YawTimer");
ROUTE870->setToField("set_fraction");
ROUTE870->setToNode("Yaw_vc6_YawInterpolator");
group->addChildren(*ROUTE870);

CROUTE* ROUTE871 = new CROUTE();
ROUTE871->setFromField("fraction_changed");
ROUTE871->setFromNode("YawTimer");
ROUTE871->setToField("set_fraction");
ROUTE871->setToNode("Yaw_l_thumb1_PitchInterpolator");
group->addChildren(*ROUTE871);

CROUTE* ROUTE872 = new CROUTE();
ROUTE872->setFromField("fraction_changed");
ROUTE872->setFromNode("YawTimer");
ROUTE872->setToField("set_fraction");
ROUTE872->setToNode("Yaw_r_thumb1_PitchInterpolator");
group->addChildren(*ROUTE872);

CROUTE* ROUTE873 = new CROUTE();
ROUTE873->setFromField("value_changed");
ROUTE873->setFromNode("Yaws_r_ankle_RotationInterpolator");
ROUTE873->setToField("set_rotation");
ROUTE873->setToNode("boxman_r_ankle");
group->addChildren(*ROUTE873);

CROUTE* ROUTE874 = new CROUTE();
ROUTE874->setFromField("value_changed");
ROUTE874->setFromNode("Yaws_r_knee_RotationInterpolator");
ROUTE874->setToField("set_rotation");
ROUTE874->setToNode("boxman_r_knee");
group->addChildren(*ROUTE874);

CROUTE* ROUTE875 = new CROUTE();
ROUTE875->setFromField("value_changed");
ROUTE875->setFromNode("Yaws_r_hip_RotationInterpolator");
ROUTE875->setToField("set_rotation");
ROUTE875->setToNode("boxman_r_hip");
group->addChildren(*ROUTE875);

CROUTE* ROUTE876 = new CROUTE();
ROUTE876->setFromField("value_changed");
ROUTE876->setFromNode("Yaws_l_ankle_RotationInterpolator");
ROUTE876->setToField("set_rotation");
ROUTE876->setToNode("boxman_l_ankle");
group->addChildren(*ROUTE876);

CROUTE* ROUTE877 = new CROUTE();
ROUTE877->setFromField("value_changed");
ROUTE877->setFromNode("Yaws_l_knee_RotationInterpolator");
ROUTE877->setToField("set_rotation");
ROUTE877->setToNode("boxman_l_knee");
group->addChildren(*ROUTE877);

CROUTE* ROUTE878 = new CROUTE();
ROUTE878->setFromField("value_changed");
ROUTE878->setFromNode("Yaws_l_hip_RotationInterpolator");
ROUTE878->setToField("set_rotation");
ROUTE878->setToNode("boxman_l_hip");
group->addChildren(*ROUTE878);

CROUTE* ROUTE879 = new CROUTE();
ROUTE879->setFromField("value_changed");
ROUTE879->setFromNode("Yaws_r_wrist_RotationInterpolator");
ROUTE879->setToField("set_rotation");
ROUTE879->setToNode("boxman_r_wrist");
group->addChildren(*ROUTE879);

CROUTE* ROUTE880 = new CROUTE();
ROUTE880->setFromField("value_changed");
ROUTE880->setFromNode("Yaws_r_elbow_RotationInterpolator");
ROUTE880->setToField("set_rotation");
ROUTE880->setToNode("boxman_r_elbow");
group->addChildren(*ROUTE880);

CROUTE* ROUTE881 = new CROUTE();
ROUTE881->setFromField("value_changed");
ROUTE881->setFromNode("Yaws_r_shoulder_RotationInterpolator");
ROUTE881->setToField("set_rotation");
ROUTE881->setToNode("boxman_r_shoulder");
group->addChildren(*ROUTE881);

CROUTE* ROUTE882 = new CROUTE();
ROUTE882->setFromField("value_changed");
ROUTE882->setFromNode("Yaws_l_wrist_RotationInterpolator");
ROUTE882->setToField("set_rotation");
ROUTE882->setToNode("boxman_l_wrist");
group->addChildren(*ROUTE882);

CROUTE* ROUTE883 = new CROUTE();
ROUTE883->setFromField("value_changed");
ROUTE883->setFromNode("Yaws_l_elbow_RotationInterpolator");
ROUTE883->setToField("set_rotation");
ROUTE883->setToNode("boxman_l_elbow");
group->addChildren(*ROUTE883);

CROUTE* ROUTE884 = new CROUTE();
ROUTE884->setFromField("value_changed");
ROUTE884->setFromNode("Yaws_l_shoulder_RotationInterpolator");
ROUTE884->setToField("set_rotation");
ROUTE884->setToNode("boxman_l_shoulder");
group->addChildren(*ROUTE884);

CROUTE* ROUTE885 = new CROUTE();
ROUTE885->setFromField("value_changed");
ROUTE885->setFromNode("Yaws_head_RotationInterpolator");
ROUTE885->setToField("set_rotation");
ROUTE885->setToNode("boxman_skullbase");
group->addChildren(*ROUTE885);

CROUTE* ROUTE886 = new CROUTE();
ROUTE886->setFromField("value_changed");
ROUTE886->setFromNode("Yaws_whole_body_RotationInterpolator");
ROUTE886->setToField("set_rotation");
ROUTE886->setToNode("boxman_humanoid_root");
group->addChildren(*ROUTE886);

CROUTE* ROUTE887 = new CROUTE();
ROUTE887->setFromField("value_changed");
ROUTE887->setFromNode("Yaws_whole_body_TranslationInterpolator");
ROUTE887->setToField("set_translation");
ROUTE887->setToNode("boxman_humanoid_root");
group->addChildren(*ROUTE887);

CROUTE* ROUTE888 = new CROUTE();
ROUTE888->setFromField("value_changed");
ROUTE888->setFromNode("Yaw_vl5_YawInterpolator");
ROUTE888->setToField("set_rotation");
ROUTE888->setToNode("boxman_vl5");
group->addChildren(*ROUTE888);

CROUTE* ROUTE889 = new CROUTE();
ROUTE889->setFromField("fraction_changed");
ROUTE889->setFromNode("RollTimer");
ROUTE889->setToField("set_fraction");
ROUTE889->setToNode("Rolls_r_ankle_RotationInterpolator");
group->addChildren(*ROUTE889);

CROUTE* ROUTE890 = new CROUTE();
ROUTE890->setFromField("fraction_changed");
ROUTE890->setFromNode("RollTimer");
ROUTE890->setToField("set_fraction");
ROUTE890->setToNode("Rolls_r_knee_RotationInterpolator");
group->addChildren(*ROUTE890);

CROUTE* ROUTE891 = new CROUTE();
ROUTE891->setFromField("fraction_changed");
ROUTE891->setFromNode("RollTimer");
ROUTE891->setToField("set_fraction");
ROUTE891->setToNode("Rolls_r_hip_RotationInterpolator");
group->addChildren(*ROUTE891);

CROUTE* ROUTE892 = new CROUTE();
ROUTE892->setFromField("fraction_changed");
ROUTE892->setFromNode("RollTimer");
ROUTE892->setToField("set_fraction");
ROUTE892->setToNode("Rolls_l_ankle_RotationInterpolator");
group->addChildren(*ROUTE892);

CROUTE* ROUTE893 = new CROUTE();
ROUTE893->setFromField("fraction_changed");
ROUTE893->setFromNode("RollTimer");
ROUTE893->setToField("set_fraction");
ROUTE893->setToNode("Rolls_l_knee_RotationInterpolator");
group->addChildren(*ROUTE893);

CROUTE* ROUTE894 = new CROUTE();
ROUTE894->setFromField("fraction_changed");
ROUTE894->setFromNode("RollTimer");
ROUTE894->setToField("set_fraction");
ROUTE894->setToNode("Rolls_l_hip_RotationInterpolator");
group->addChildren(*ROUTE894);

CROUTE* ROUTE895 = new CROUTE();
ROUTE895->setFromField("fraction_changed");
ROUTE895->setFromNode("RollTimer");
ROUTE895->setToField("set_fraction");
ROUTE895->setToNode("Rolls_lower_body_RotationInterpolator");
group->addChildren(*ROUTE895);

CROUTE* ROUTE896 = new CROUTE();
ROUTE896->setFromField("fraction_changed");
ROUTE896->setFromNode("RollTimer");
ROUTE896->setToField("set_fraction");
ROUTE896->setToNode("Rolls_r_wrist_RotationInterpolator");
group->addChildren(*ROUTE896);

CROUTE* ROUTE897 = new CROUTE();
ROUTE897->setFromField("fraction_changed");
ROUTE897->setFromNode("RollTimer");
ROUTE897->setToField("set_fraction");
ROUTE897->setToNode("Rolls_r_elbow_RotationInterpolator");
group->addChildren(*ROUTE897);

CROUTE* ROUTE898 = new CROUTE();
ROUTE898->setFromField("fraction_changed");
ROUTE898->setFromNode("RollTimer");
ROUTE898->setToField("set_fraction");
ROUTE898->setToNode("Rolls_r_shoulder_RotationInterpolator");
group->addChildren(*ROUTE898);

CROUTE* ROUTE899 = new CROUTE();
ROUTE899->setFromField("fraction_changed");
ROUTE899->setFromNode("RollTimer");
ROUTE899->setToField("set_fraction");
ROUTE899->setToNode("Rolls_l_wrist_RotationInterpolator");
group->addChildren(*ROUTE899);

CROUTE* ROUTE900 = new CROUTE();
ROUTE900->setFromField("fraction_changed");
ROUTE900->setFromNode("RollTimer");
ROUTE900->setToField("set_fraction");
ROUTE900->setToNode("Rolls_l_elbow_RotationInterpolator");
group->addChildren(*ROUTE900);

CROUTE* ROUTE901 = new CROUTE();
ROUTE901->setFromField("fraction_changed");
ROUTE901->setFromNode("RollTimer");
ROUTE901->setToField("set_fraction");
ROUTE901->setToNode("Rolls_l_shoulder_RotationInterpolator");
group->addChildren(*ROUTE901);

CROUTE* ROUTE902 = new CROUTE();
ROUTE902->setFromField("fraction_changed");
ROUTE902->setFromNode("RollTimer");
ROUTE902->setToField("set_fraction");
ROUTE902->setToNode("Rolls_head_RotationInterpolator");
group->addChildren(*ROUTE902);

CROUTE* ROUTE903 = new CROUTE();
ROUTE903->setFromField("fraction_changed");
ROUTE903->setFromNode("RollTimer");
ROUTE903->setToField("set_fraction");
ROUTE903->setToNode("Rolls_neck_RotationInterpolator");
group->addChildren(*ROUTE903);

CROUTE* ROUTE904 = new CROUTE();
ROUTE904->setFromField("fraction_changed");
ROUTE904->setFromNode("RollTimer");
ROUTE904->setToField("set_fraction");
ROUTE904->setToNode("Rolls_upper_body_RotationInterpolator");
group->addChildren(*ROUTE904);

CROUTE* ROUTE905 = new CROUTE();
ROUTE905->setFromField("fraction_changed");
ROUTE905->setFromNode("RollTimer");
ROUTE905->setToField("set_fraction");
ROUTE905->setToNode("Rolls_whole_body_RotationInterpolator");
group->addChildren(*ROUTE905);

CROUTE* ROUTE906 = new CROUTE();
ROUTE906->setFromField("fraction_changed");
ROUTE906->setFromNode("RollTimer");
ROUTE906->setToField("set_fraction");
ROUTE906->setToNode("Rolls_whole_body_TranslationInterpolator");
group->addChildren(*ROUTE906);

CROUTE* ROUTE907 = new CROUTE();
ROUTE907->setFromField("fraction_changed");
ROUTE907->setFromNode("RollTimer");
ROUTE907->setToField("set_fraction");
ROUTE907->setToNode("Roll_l_sternoclavicular_RollInterpolator");
group->addChildren(*ROUTE907);

CROUTE* ROUTE908 = new CROUTE();
ROUTE908->setFromField("fraction_changed");
ROUTE908->setFromNode("RollTimer");
ROUTE908->setToField("set_fraction");
ROUTE908->setToNode("Roll_l_acromioclavicular_RollInterpolator");
group->addChildren(*ROUTE908);

CROUTE* ROUTE909 = new CROUTE();
ROUTE909->setFromField("fraction_changed");
ROUTE909->setFromNode("RollTimer");
ROUTE909->setToField("set_fraction");
ROUTE909->setToNode("Roll_r_sternoclavicular_RollInterpolator");
group->addChildren(*ROUTE909);

CROUTE* ROUTE910 = new CROUTE();
ROUTE910->setFromField("fraction_changed");
ROUTE910->setFromNode("RollTimer");
ROUTE910->setToField("set_fraction");
ROUTE910->setToNode("Roll_r_acromioclavicular_RollInterpolator");
group->addChildren(*ROUTE910);

CROUTE* ROUTE911 = new CROUTE();
ROUTE911->setFromField("fraction_changed");
ROUTE911->setFromNode("RollTimer");
ROUTE911->setToField("set_fraction");
ROUTE911->setToNode("Roll_r_metatarsal_PitchInterpolator");
group->addChildren(*ROUTE911);

CROUTE* ROUTE912 = new CROUTE();
ROUTE912->setFromField("fraction_changed");
ROUTE912->setFromNode("RollTimer");
ROUTE912->setToField("set_fraction");
ROUTE912->setToNode("Roll_sacroiliac_YawInterpolator");
group->addChildren(*ROUTE912);

CROUTE* ROUTE913 = new CROUTE();
ROUTE913->setFromField("fraction_changed");
ROUTE913->setFromNode("RollTimer");
ROUTE913->setToField("set_fraction");
ROUTE913->setToNode("Roll_vl5_YawInterpolator");
group->addChildren(*ROUTE913);

CROUTE* ROUTE914 = new CROUTE();
ROUTE914->setFromField("fraction_changed");
ROUTE914->setFromNode("RollTimer");
ROUTE914->setToField("set_fraction");
ROUTE914->setToNode("Roll_vc6_YawInterpolator");
group->addChildren(*ROUTE914);

CROUTE* ROUTE915 = new CROUTE();
ROUTE915->setFromField("fraction_changed");
ROUTE915->setFromNode("RollTimer");
ROUTE915->setToField("set_fraction");
ROUTE915->setToNode("Roll_l_thumb1_PitchInterpolator");
group->addChildren(*ROUTE915);

CROUTE* ROUTE916 = new CROUTE();
ROUTE916->setFromField("fraction_changed");
ROUTE916->setFromNode("RollTimer");
ROUTE916->setToField("set_fraction");
ROUTE916->setToNode("Roll_r_thumb1_PitchInterpolator");
group->addChildren(*ROUTE916);

CROUTE* ROUTE917 = new CROUTE();
ROUTE917->setFromField("value_changed");
ROUTE917->setFromNode("Rolls_r_ankle_RotationInterpolator");
ROUTE917->setToField("set_rotation");
ROUTE917->setToNode("boxman_r_ankle");
group->addChildren(*ROUTE917);

CROUTE* ROUTE918 = new CROUTE();
ROUTE918->setFromField("value_changed");
ROUTE918->setFromNode("Rolls_r_knee_RotationInterpolator");
ROUTE918->setToField("set_rotation");
ROUTE918->setToNode("boxman_r_knee");
group->addChildren(*ROUTE918);

CROUTE* ROUTE919 = new CROUTE();
ROUTE919->setFromField("value_changed");
ROUTE919->setFromNode("Rolls_r_hip_RotationInterpolator");
ROUTE919->setToField("set_rotation");
ROUTE919->setToNode("boxman_r_hip");
group->addChildren(*ROUTE919);

CROUTE* ROUTE920 = new CROUTE();
ROUTE920->setFromField("value_changed");
ROUTE920->setFromNode("Rolls_l_ankle_RotationInterpolator");
ROUTE920->setToField("set_rotation");
ROUTE920->setToNode("boxman_l_ankle");
group->addChildren(*ROUTE920);

CROUTE* ROUTE921 = new CROUTE();
ROUTE921->setFromField("value_changed");
ROUTE921->setFromNode("Rolls_l_knee_RotationInterpolator");
ROUTE921->setToField("set_rotation");
ROUTE921->setToNode("boxman_l_knee");
group->addChildren(*ROUTE921);

CROUTE* ROUTE922 = new CROUTE();
ROUTE922->setFromField("value_changed");
ROUTE922->setFromNode("Rolls_l_hip_RotationInterpolator");
ROUTE922->setToField("set_rotation");
ROUTE922->setToNode("boxman_l_hip");
group->addChildren(*ROUTE922);

CROUTE* ROUTE923 = new CROUTE();
ROUTE923->setFromField("value_changed");
ROUTE923->setFromNode("Rolls_r_wrist_RotationInterpolator");
ROUTE923->setToField("set_rotation");
ROUTE923->setToNode("boxman_r_wrist");
group->addChildren(*ROUTE923);

CROUTE* ROUTE924 = new CROUTE();
ROUTE924->setFromField("value_changed");
ROUTE924->setFromNode("Rolls_r_elbow_RotationInterpolator");
ROUTE924->setToField("set_rotation");
ROUTE924->setToNode("boxman_r_elbow");
group->addChildren(*ROUTE924);

CROUTE* ROUTE925 = new CROUTE();
ROUTE925->setFromField("value_changed");
ROUTE925->setFromNode("Rolls_r_shoulder_RotationInterpolator");
ROUTE925->setToField("set_rotation");
ROUTE925->setToNode("boxman_r_shoulder");
group->addChildren(*ROUTE925);

CROUTE* ROUTE926 = new CROUTE();
ROUTE926->setFromField("value_changed");
ROUTE926->setFromNode("Rolls_l_wrist_RotationInterpolator");
ROUTE926->setToField("set_rotation");
ROUTE926->setToNode("boxman_l_wrist");
group->addChildren(*ROUTE926);

CROUTE* ROUTE927 = new CROUTE();
ROUTE927->setFromField("value_changed");
ROUTE927->setFromNode("Rolls_l_elbow_RotationInterpolator");
ROUTE927->setToField("set_rotation");
ROUTE927->setToNode("boxman_l_elbow");
group->addChildren(*ROUTE927);

CROUTE* ROUTE928 = new CROUTE();
ROUTE928->setFromField("value_changed");
ROUTE928->setFromNode("Rolls_l_shoulder_RotationInterpolator");
ROUTE928->setToField("set_rotation");
ROUTE928->setToNode("boxman_l_shoulder");
group->addChildren(*ROUTE928);

CROUTE* ROUTE929 = new CROUTE();
ROUTE929->setFromField("value_changed");
ROUTE929->setFromNode("Rolls_head_RotationInterpolator");
ROUTE929->setToField("set_rotation");
ROUTE929->setToNode("boxman_skullbase");
group->addChildren(*ROUTE929);

CROUTE* ROUTE930 = new CROUTE();
ROUTE930->setFromField("value_changed");
ROUTE930->setFromNode("Rolls_whole_body_RotationInterpolator");
ROUTE930->setToField("set_rotation");
ROUTE930->setToNode("boxman_humanoid_root");
group->addChildren(*ROUTE930);

CROUTE* ROUTE931 = new CROUTE();
ROUTE931->setFromField("value_changed");
ROUTE931->setFromNode("Rolls_whole_body_TranslationInterpolator");
ROUTE931->setToField("set_translation");
ROUTE931->setToNode("boxman_humanoid_root");
group->addChildren(*ROUTE931);

CROUTE* ROUTE932 = new CROUTE();
ROUTE932->setFromField("value_changed");
ROUTE932->setFromNode("Roll_vl5_YawInterpolator");
ROUTE932->setToField("set_rotation");
ROUTE932->setToNode("boxman_vl5");
group->addChildren(*ROUTE932);

CROUTE* ROUTE933 = new CROUTE();
ROUTE933->setFromField("fraction_changed");
ROUTE933->setFromNode("WalkTimer");
ROUTE933->setToField("set_fraction");
ROUTE933->setToNode("Walk_r_ankle_RotationInterpolator");
group->addChildren(*ROUTE933);

CROUTE* ROUTE934 = new CROUTE();
ROUTE934->setFromField("fraction_changed");
ROUTE934->setFromNode("WalkTimer");
ROUTE934->setToField("set_fraction");
ROUTE934->setToNode("Walk_r_knee_RotationInterpolator");
group->addChildren(*ROUTE934);

CROUTE* ROUTE935 = new CROUTE();
ROUTE935->setFromField("fraction_changed");
ROUTE935->setFromNode("WalkTimer");
ROUTE935->setToField("set_fraction");
ROUTE935->setToNode("Walk_r_hip_RotationInterpolator");
group->addChildren(*ROUTE935);

CROUTE* ROUTE936 = new CROUTE();
ROUTE936->setFromField("fraction_changed");
ROUTE936->setFromNode("WalkTimer");
ROUTE936->setToField("set_fraction");
ROUTE936->setToNode("Walk_l_ankle_RotationInterpolator");
group->addChildren(*ROUTE936);

CROUTE* ROUTE937 = new CROUTE();
ROUTE937->setFromField("fraction_changed");
ROUTE937->setFromNode("WalkTimer");
ROUTE937->setToField("set_fraction");
ROUTE937->setToNode("Walk_l_knee_RotationInterpolator");
group->addChildren(*ROUTE937);

CROUTE* ROUTE938 = new CROUTE();
ROUTE938->setFromField("fraction_changed");
ROUTE938->setFromNode("WalkTimer");
ROUTE938->setToField("set_fraction");
ROUTE938->setToNode("Walk_l_hip_RotationInterpolator");
group->addChildren(*ROUTE938);

CROUTE* ROUTE939 = new CROUTE();
ROUTE939->setFromField("fraction_changed");
ROUTE939->setFromNode("WalkTimer");
ROUTE939->setToField("set_fraction");
ROUTE939->setToNode("Walk_lower_body_RotationInterpolator");
group->addChildren(*ROUTE939);

CROUTE* ROUTE940 = new CROUTE();
ROUTE940->setFromField("fraction_changed");
ROUTE940->setFromNode("WalkTimer");
ROUTE940->setToField("set_fraction");
ROUTE940->setToNode("Walk_r_wrist_RotationInterpolator");
group->addChildren(*ROUTE940);

CROUTE* ROUTE941 = new CROUTE();
ROUTE941->setFromField("fraction_changed");
ROUTE941->setFromNode("WalkTimer");
ROUTE941->setToField("set_fraction");
ROUTE941->setToNode("Walk_r_elbow_RotationInterpolator");
group->addChildren(*ROUTE941);

CROUTE* ROUTE942 = new CROUTE();
ROUTE942->setFromField("fraction_changed");
ROUTE942->setFromNode("WalkTimer");
ROUTE942->setToField("set_fraction");
ROUTE942->setToNode("Walk_r_shoulder_RotationInterpolator");
group->addChildren(*ROUTE942);

CROUTE* ROUTE943 = new CROUTE();
ROUTE943->setFromField("fraction_changed");
ROUTE943->setFromNode("WalkTimer");
ROUTE943->setToField("set_fraction");
ROUTE943->setToNode("Walk_l_wrist_RotationInterpolator");
group->addChildren(*ROUTE943);

CROUTE* ROUTE944 = new CROUTE();
ROUTE944->setFromField("fraction_changed");
ROUTE944->setFromNode("WalkTimer");
ROUTE944->setToField("set_fraction");
ROUTE944->setToNode("Walk_l_elbow_RotationInterpolator");
group->addChildren(*ROUTE944);

CROUTE* ROUTE945 = new CROUTE();
ROUTE945->setFromField("fraction_changed");
ROUTE945->setFromNode("WalkTimer");
ROUTE945->setToField("set_fraction");
ROUTE945->setToNode("Walk_l_shoulder_RotationInterpolator");
group->addChildren(*ROUTE945);

CROUTE* ROUTE946 = new CROUTE();
ROUTE946->setFromField("fraction_changed");
ROUTE946->setFromNode("WalkTimer");
ROUTE946->setToField("set_fraction");
ROUTE946->setToNode("Walk_head_RotationInterpolator");
group->addChildren(*ROUTE946);

CROUTE* ROUTE947 = new CROUTE();
ROUTE947->setFromField("fraction_changed");
ROUTE947->setFromNode("WalkTimer");
ROUTE947->setToField("set_fraction");
ROUTE947->setToNode("Walk_neck_RotationInterpolator");
group->addChildren(*ROUTE947);

CROUTE* ROUTE948 = new CROUTE();
ROUTE948->setFromField("fraction_changed");
ROUTE948->setFromNode("WalkTimer");
ROUTE948->setToField("set_fraction");
ROUTE948->setToNode("Walk_upper_body_RotationInterpolator");
group->addChildren(*ROUTE948);

CROUTE* ROUTE949 = new CROUTE();
ROUTE949->setFromField("fraction_changed");
ROUTE949->setFromNode("WalkTimer");
ROUTE949->setToField("set_fraction");
ROUTE949->setToNode("Walk_whole_body_RotationInterpolator");
group->addChildren(*ROUTE949);

CROUTE* ROUTE950 = new CROUTE();
ROUTE950->setFromField("fraction_changed");
ROUTE950->setFromNode("WalkTimer");
ROUTE950->setToField("set_fraction");
ROUTE950->setToNode("Walk_whole_body_TranslationInterpolator");
group->addChildren(*ROUTE950);

CROUTE* ROUTE951 = new CROUTE();
ROUTE951->setFromField("fraction_changed");
ROUTE951->setFromNode("WalkTimer");
ROUTE951->setToField("set_fraction");
ROUTE951->setToNode("Walk_l_sternoclavicular_RollInterpolator");
group->addChildren(*ROUTE951);

CROUTE* ROUTE952 = new CROUTE();
ROUTE952->setFromField("fraction_changed");
ROUTE952->setFromNode("WalkTimer");
ROUTE952->setToField("set_fraction");
ROUTE952->setToNode("Walk_l_acromioclavicular_RollInterpolator");
group->addChildren(*ROUTE952);

CROUTE* ROUTE953 = new CROUTE();
ROUTE953->setFromField("fraction_changed");
ROUTE953->setFromNode("WalkTimer");
ROUTE953->setToField("set_fraction");
ROUTE953->setToNode("Walk_r_sternoclavicular_RollInterpolator");
group->addChildren(*ROUTE953);

CROUTE* ROUTE954 = new CROUTE();
ROUTE954->setFromField("fraction_changed");
ROUTE954->setFromNode("WalkTimer");
ROUTE954->setToField("set_fraction");
ROUTE954->setToNode("Walk_r_acromioclavicular_RollInterpolator");
group->addChildren(*ROUTE954);

CROUTE* ROUTE955 = new CROUTE();
ROUTE955->setFromField("fraction_changed");
ROUTE955->setFromNode("WalkTimer");
ROUTE955->setToField("set_fraction");
ROUTE955->setToNode("Walk_r_metatarsal_PitchInterpolator");
group->addChildren(*ROUTE955);

CROUTE* ROUTE956 = new CROUTE();
ROUTE956->setFromField("fraction_changed");
ROUTE956->setFromNode("WalkTimer");
ROUTE956->setToField("set_fraction");
ROUTE956->setToNode("Walk_sacroiliac_YawInterpolator");
group->addChildren(*ROUTE956);

CROUTE* ROUTE957 = new CROUTE();
ROUTE957->setFromField("fraction_changed");
ROUTE957->setFromNode("WalkTimer");
ROUTE957->setToField("set_fraction");
ROUTE957->setToNode("Walk_vl5_YawInterpolator");
group->addChildren(*ROUTE957);

CROUTE* ROUTE958 = new CROUTE();
ROUTE958->setFromField("fraction_changed");
ROUTE958->setFromNode("WalkTimer");
ROUTE958->setToField("set_fraction");
ROUTE958->setToNode("Walk_vc6_YawInterpolator");
group->addChildren(*ROUTE958);

CROUTE* ROUTE959 = new CROUTE();
ROUTE959->setFromField("fraction_changed");
ROUTE959->setFromNode("WalkTimer");
ROUTE959->setToField("set_fraction");
ROUTE959->setToNode("Walk_l_thumb1_PitchInterpolator");
group->addChildren(*ROUTE959);

CROUTE* ROUTE960 = new CROUTE();
ROUTE960->setFromField("fraction_changed");
ROUTE960->setFromNode("WalkTimer");
ROUTE960->setToField("set_fraction");
ROUTE960->setToNode("Walk_r_thumb1_PitchInterpolator");
group->addChildren(*ROUTE960);

CROUTE* ROUTE961 = new CROUTE();
ROUTE961->setFromField("value_changed");
ROUTE961->setFromNode("Walk_r_ankle_RotationInterpolator");
ROUTE961->setToField("set_rotation");
ROUTE961->setToNode("boxman_r_ankle");
group->addChildren(*ROUTE961);

CROUTE* ROUTE962 = new CROUTE();
ROUTE962->setFromField("value_changed");
ROUTE962->setFromNode("Walk_r_knee_RotationInterpolator");
ROUTE962->setToField("set_rotation");
ROUTE962->setToNode("boxman_r_knee");
group->addChildren(*ROUTE962);

CROUTE* ROUTE963 = new CROUTE();
ROUTE963->setFromField("value_changed");
ROUTE963->setFromNode("Walk_r_hip_RotationInterpolator");
ROUTE963->setToField("set_rotation");
ROUTE963->setToNode("boxman_r_hip");
group->addChildren(*ROUTE963);

CROUTE* ROUTE964 = new CROUTE();
ROUTE964->setFromField("value_changed");
ROUTE964->setFromNode("Walk_l_ankle_RotationInterpolator");
ROUTE964->setToField("set_rotation");
ROUTE964->setToNode("boxman_l_ankle");
group->addChildren(*ROUTE964);

CROUTE* ROUTE965 = new CROUTE();
ROUTE965->setFromField("value_changed");
ROUTE965->setFromNode("Walk_l_knee_RotationInterpolator");
ROUTE965->setToField("set_rotation");
ROUTE965->setToNode("boxman_l_knee");
group->addChildren(*ROUTE965);

CROUTE* ROUTE966 = new CROUTE();
ROUTE966->setFromField("value_changed");
ROUTE966->setFromNode("Walk_l_hip_RotationInterpolator");
ROUTE966->setToField("set_rotation");
ROUTE966->setToNode("boxman_l_hip");
group->addChildren(*ROUTE966);

CROUTE* ROUTE967 = new CROUTE();
ROUTE967->setFromField("value_changed");
ROUTE967->setFromNode("Walk_r_wrist_RotationInterpolator");
ROUTE967->setToField("set_rotation");
ROUTE967->setToNode("boxman_r_wrist");
group->addChildren(*ROUTE967);

CROUTE* ROUTE968 = new CROUTE();
ROUTE968->setFromField("value_changed");
ROUTE968->setFromNode("Walk_r_elbow_RotationInterpolator");
ROUTE968->setToField("set_rotation");
ROUTE968->setToNode("boxman_r_elbow");
group->addChildren(*ROUTE968);

CROUTE* ROUTE969 = new CROUTE();
ROUTE969->setFromField("value_changed");
ROUTE969->setFromNode("Walk_r_shoulder_RotationInterpolator");
ROUTE969->setToField("set_rotation");
ROUTE969->setToNode("boxman_r_shoulder");
group->addChildren(*ROUTE969);

CROUTE* ROUTE970 = new CROUTE();
ROUTE970->setFromField("value_changed");
ROUTE970->setFromNode("Walk_l_wrist_RotationInterpolator");
ROUTE970->setToField("set_rotation");
ROUTE970->setToNode("boxman_l_wrist");
group->addChildren(*ROUTE970);

CROUTE* ROUTE971 = new CROUTE();
ROUTE971->setFromField("value_changed");
ROUTE971->setFromNode("Walk_l_elbow_RotationInterpolator");
ROUTE971->setToField("set_rotation");
ROUTE971->setToNode("boxman_l_elbow");
group->addChildren(*ROUTE971);

CROUTE* ROUTE972 = new CROUTE();
ROUTE972->setFromField("value_changed");
ROUTE972->setFromNode("Walk_l_shoulder_RotationInterpolator");
ROUTE972->setToField("set_rotation");
ROUTE972->setToNode("boxman_l_shoulder");
group->addChildren(*ROUTE972);

CROUTE* ROUTE973 = new CROUTE();
ROUTE973->setFromField("value_changed");
ROUTE973->setFromNode("Walk_head_RotationInterpolator");
ROUTE973->setToField("set_rotation");
ROUTE973->setToNode("boxman_skullbase");
group->addChildren(*ROUTE973);

CROUTE* ROUTE974 = new CROUTE();
ROUTE974->setFromField("value_changed");
ROUTE974->setFromNode("Walk_whole_body_RotationInterpolator");
ROUTE974->setToField("set_rotation");
ROUTE974->setToNode("boxman_humanoid_root");
group->addChildren(*ROUTE974);

CROUTE* ROUTE975 = new CROUTE();
ROUTE975->setFromField("value_changed");
ROUTE975->setFromNode("Walk_whole_body_TranslationInterpolator");
ROUTE975->setToField("set_translation");
ROUTE975->setToNode("boxman_humanoid_root");
group->addChildren(*ROUTE975);

CROUTE* ROUTE976 = new CROUTE();
ROUTE976->setFromField("value_changed");
ROUTE976->setFromNode("Walk_vl5_YawInterpolator");
ROUTE976->setToField("set_rotation");
ROUTE976->setToNode("boxman_vl5");
group->addChildren(*ROUTE976);

CROUTE* ROUTE977 = new CROUTE();
ROUTE977->setFromField("fraction_changed");
ROUTE977->setFromNode("RunTimer");
ROUTE977->setToField("set_fraction");
ROUTE977->setToNode("Run_r_ankle_RotationInterpolator_Run");
group->addChildren(*ROUTE977);

CROUTE* ROUTE978 = new CROUTE();
ROUTE978->setFromField("fraction_changed");
ROUTE978->setFromNode("RunTimer");
ROUTE978->setToField("set_fraction");
ROUTE978->setToNode("Run_r_knee_RotationInterpolator_Run");
group->addChildren(*ROUTE978);

CROUTE* ROUTE979 = new CROUTE();
ROUTE979->setFromField("fraction_changed");
ROUTE979->setFromNode("RunTimer");
ROUTE979->setToField("set_fraction");
ROUTE979->setToNode("Run_r_hip_RotationInterpolator_Run");
group->addChildren(*ROUTE979);

CROUTE* ROUTE980 = new CROUTE();
ROUTE980->setFromField("fraction_changed");
ROUTE980->setFromNode("RunTimer");
ROUTE980->setToField("set_fraction");
ROUTE980->setToNode("Run_l_ankle_RotationInterpolator_Run");
group->addChildren(*ROUTE980);

CROUTE* ROUTE981 = new CROUTE();
ROUTE981->setFromField("fraction_changed");
ROUTE981->setFromNode("RunTimer");
ROUTE981->setToField("set_fraction");
ROUTE981->setToNode("Run_l_knee_RotationInterpolator_Run");
group->addChildren(*ROUTE981);

CROUTE* ROUTE982 = new CROUTE();
ROUTE982->setFromField("fraction_changed");
ROUTE982->setFromNode("RunTimer");
ROUTE982->setToField("set_fraction");
ROUTE982->setToNode("Run_l_hip_RotationInterpolator_Run");
group->addChildren(*ROUTE982);

CROUTE* ROUTE983 = new CROUTE();
ROUTE983->setFromField("fraction_changed");
ROUTE983->setFromNode("RunTimer");
ROUTE983->setToField("set_fraction");
ROUTE983->setToNode("Run_lower_body_RotationInterpolator_Run");
group->addChildren(*ROUTE983);

CROUTE* ROUTE984 = new CROUTE();
ROUTE984->setFromField("fraction_changed");
ROUTE984->setFromNode("RunTimer");
ROUTE984->setToField("set_fraction");
ROUTE984->setToNode("Run_r_wrist_RotationInterpolator_Run");
group->addChildren(*ROUTE984);

CROUTE* ROUTE985 = new CROUTE();
ROUTE985->setFromField("fraction_changed");
ROUTE985->setFromNode("RunTimer");
ROUTE985->setToField("set_fraction");
ROUTE985->setToNode("Run_r_elbow_RotationInterpolator_Run");
group->addChildren(*ROUTE985);

CROUTE* ROUTE986 = new CROUTE();
ROUTE986->setFromField("fraction_changed");
ROUTE986->setFromNode("RunTimer");
ROUTE986->setToField("set_fraction");
ROUTE986->setToNode("Run_r_shoulder_RotationInterpolator_Run");
group->addChildren(*ROUTE986);

CROUTE* ROUTE987 = new CROUTE();
ROUTE987->setFromField("fraction_changed");
ROUTE987->setFromNode("RunTimer");
ROUTE987->setToField("set_fraction");
ROUTE987->setToNode("Run_l_wrist_RotationInterpolator_Run");
group->addChildren(*ROUTE987);

CROUTE* ROUTE988 = new CROUTE();
ROUTE988->setFromField("fraction_changed");
ROUTE988->setFromNode("RunTimer");
ROUTE988->setToField("set_fraction");
ROUTE988->setToNode("Run_l_elbow_RotationInterpolator_Run");
group->addChildren(*ROUTE988);

CROUTE* ROUTE989 = new CROUTE();
ROUTE989->setFromField("fraction_changed");
ROUTE989->setFromNode("RunTimer");
ROUTE989->setToField("set_fraction");
ROUTE989->setToNode("Run_l_shoulder_RotationInterpolator_Run");
group->addChildren(*ROUTE989);

CROUTE* ROUTE990 = new CROUTE();
ROUTE990->setFromField("fraction_changed");
ROUTE990->setFromNode("RunTimer");
ROUTE990->setToField("set_fraction");
ROUTE990->setToNode("Run_head_RotationInterpolator_Run");
group->addChildren(*ROUTE990);

CROUTE* ROUTE991 = new CROUTE();
ROUTE991->setFromField("fraction_changed");
ROUTE991->setFromNode("RunTimer");
ROUTE991->setToField("set_fraction");
ROUTE991->setToNode("Run_neck_RotationInterpolator_Run");
group->addChildren(*ROUTE991);

CROUTE* ROUTE992 = new CROUTE();
ROUTE992->setFromField("fraction_changed");
ROUTE992->setFromNode("RunTimer");
ROUTE992->setToField("set_fraction");
ROUTE992->setToNode("Run_upper_body_RotationInterpolator_Run");
group->addChildren(*ROUTE992);

CROUTE* ROUTE993 = new CROUTE();
ROUTE993->setFromField("fraction_changed");
ROUTE993->setFromNode("RunTimer");
ROUTE993->setToField("set_fraction");
ROUTE993->setToNode("Run_whole_body_RotationInterpolator_Run");
group->addChildren(*ROUTE993);

CROUTE* ROUTE994 = new CROUTE();
ROUTE994->setFromField("fraction_changed");
ROUTE994->setFromNode("RunTimer");
ROUTE994->setToField("set_fraction");
ROUTE994->setToNode("Run_whole_body_TranslationInterpolator_Run");
group->addChildren(*ROUTE994);

CROUTE* ROUTE995 = new CROUTE();
ROUTE995->setFromField("fraction_changed");
ROUTE995->setFromNode("RunTimer");
ROUTE995->setToField("set_fraction");
ROUTE995->setToNode("Run_l_sternoclavicular_RollInterpolator");
group->addChildren(*ROUTE995);

CROUTE* ROUTE996 = new CROUTE();
ROUTE996->setFromField("fraction_changed");
ROUTE996->setFromNode("RunTimer");
ROUTE996->setToField("set_fraction");
ROUTE996->setToNode("Run_l_acromioclavicular_RollInterpolator");
group->addChildren(*ROUTE996);

CROUTE* ROUTE997 = new CROUTE();
ROUTE997->setFromField("fraction_changed");
ROUTE997->setFromNode("RunTimer");
ROUTE997->setToField("set_fraction");
ROUTE997->setToNode("Run_r_sternoclavicular_RollInterpolator");
group->addChildren(*ROUTE997);

CROUTE* ROUTE998 = new CROUTE();
ROUTE998->setFromField("fraction_changed");
ROUTE998->setFromNode("RunTimer");
ROUTE998->setToField("set_fraction");
ROUTE998->setToNode("Run_r_acromioclavicular_RollInterpolator");
group->addChildren(*ROUTE998);

CROUTE* ROUTE999 = new CROUTE();
ROUTE999->setFromField("fraction_changed");
ROUTE999->setFromNode("RunTimer");
ROUTE999->setToField("set_fraction");
ROUTE999->setToNode("Run_r_metatarsal_PitchInterpolator");
group->addChildren(*ROUTE999);

CROUTE* ROUTE1000 = new CROUTE();
ROUTE1000->setFromField("fraction_changed");
ROUTE1000->setFromNode("RunTimer");
ROUTE1000->setToField("set_fraction");
ROUTE1000->setToNode("Run_sacroiliac_YawInterpolator");
group->addChildren(*ROUTE1000);

CROUTE* ROUTE1001 = new CROUTE();
ROUTE1001->setFromField("fraction_changed");
ROUTE1001->setFromNode("RunTimer");
ROUTE1001->setToField("set_fraction");
ROUTE1001->setToNode("Run_vl5_YawInterpolator");
group->addChildren(*ROUTE1001);

CROUTE* ROUTE1002 = new CROUTE();
ROUTE1002->setFromField("fraction_changed");
ROUTE1002->setFromNode("RunTimer");
ROUTE1002->setToField("set_fraction");
ROUTE1002->setToNode("Run_vc6_YawInterpolator");
group->addChildren(*ROUTE1002);

CROUTE* ROUTE1003 = new CROUTE();
ROUTE1003->setFromField("fraction_changed");
ROUTE1003->setFromNode("RunTimer");
ROUTE1003->setToField("set_fraction");
ROUTE1003->setToNode("Run_l_thumb1_PitchInterpolator");
group->addChildren(*ROUTE1003);

CROUTE* ROUTE1004 = new CROUTE();
ROUTE1004->setFromField("fraction_changed");
ROUTE1004->setFromNode("RunTimer");
ROUTE1004->setToField("set_fraction");
ROUTE1004->setToNode("Run_r_thumb1_PitchInterpolator");
group->addChildren(*ROUTE1004);

CROUTE* ROUTE1005 = new CROUTE();
ROUTE1005->setFromField("value_changed");
ROUTE1005->setFromNode("Run_r_ankle_RotationInterpolator_Run");
ROUTE1005->setToField("set_rotation");
ROUTE1005->setToNode("boxman_r_ankle");
group->addChildren(*ROUTE1005);

CROUTE* ROUTE1006 = new CROUTE();
ROUTE1006->setFromField("value_changed");
ROUTE1006->setFromNode("Run_r_knee_RotationInterpolator_Run");
ROUTE1006->setToField("set_rotation");
ROUTE1006->setToNode("boxman_r_knee");
group->addChildren(*ROUTE1006);

CROUTE* ROUTE1007 = new CROUTE();
ROUTE1007->setFromField("value_changed");
ROUTE1007->setFromNode("Run_r_hip_RotationInterpolator_Run");
ROUTE1007->setToField("set_rotation");
ROUTE1007->setToNode("boxman_r_hip");
group->addChildren(*ROUTE1007);

CROUTE* ROUTE1008 = new CROUTE();
ROUTE1008->setFromField("value_changed");
ROUTE1008->setFromNode("Run_l_ankle_RotationInterpolator_Run");
ROUTE1008->setToField("set_rotation");
ROUTE1008->setToNode("boxman_l_ankle");
group->addChildren(*ROUTE1008);

CROUTE* ROUTE1009 = new CROUTE();
ROUTE1009->setFromField("value_changed");
ROUTE1009->setFromNode("Run_l_knee_RotationInterpolator_Run");
ROUTE1009->setToField("set_rotation");
ROUTE1009->setToNode("boxman_l_knee");
group->addChildren(*ROUTE1009);

CROUTE* ROUTE1010 = new CROUTE();
ROUTE1010->setFromField("value_changed");
ROUTE1010->setFromNode("Run_l_hip_RotationInterpolator_Run");
ROUTE1010->setToField("set_rotation");
ROUTE1010->setToNode("boxman_l_hip");
group->addChildren(*ROUTE1010);

CROUTE* ROUTE1011 = new CROUTE();
ROUTE1011->setFromField("value_changed");
ROUTE1011->setFromNode("Run_r_wrist_RotationInterpolator_Run");
ROUTE1011->setToField("set_rotation");
ROUTE1011->setToNode("boxman_r_wrist");
group->addChildren(*ROUTE1011);

CROUTE* ROUTE1012 = new CROUTE();
ROUTE1012->setFromField("value_changed");
ROUTE1012->setFromNode("Run_r_elbow_RotationInterpolator_Run");
ROUTE1012->setToField("set_rotation");
ROUTE1012->setToNode("boxman_r_elbow");
group->addChildren(*ROUTE1012);

CROUTE* ROUTE1013 = new CROUTE();
ROUTE1013->setFromField("value_changed");
ROUTE1013->setFromNode("Run_r_shoulder_RotationInterpolator_Run");
ROUTE1013->setToField("set_rotation");
ROUTE1013->setToNode("boxman_r_shoulder");
group->addChildren(*ROUTE1013);

CROUTE* ROUTE1014 = new CROUTE();
ROUTE1014->setFromField("value_changed");
ROUTE1014->setFromNode("Run_l_wrist_RotationInterpolator_Run");
ROUTE1014->setToField("set_rotation");
ROUTE1014->setToNode("boxman_l_wrist");
group->addChildren(*ROUTE1014);

CROUTE* ROUTE1015 = new CROUTE();
ROUTE1015->setFromField("value_changed");
ROUTE1015->setFromNode("Run_l_elbow_RotationInterpolator_Run");
ROUTE1015->setToField("set_rotation");
ROUTE1015->setToNode("boxman_l_elbow");
group->addChildren(*ROUTE1015);

CROUTE* ROUTE1016 = new CROUTE();
ROUTE1016->setFromField("value_changed");
ROUTE1016->setFromNode("Run_l_shoulder_RotationInterpolator_Run");
ROUTE1016->setToField("set_rotation");
ROUTE1016->setToNode("boxman_l_shoulder");
group->addChildren(*ROUTE1016);

CROUTE* ROUTE1017 = new CROUTE();
ROUTE1017->setFromField("value_changed");
ROUTE1017->setFromNode("Run_head_RotationInterpolator_Run");
ROUTE1017->setToField("set_rotation");
ROUTE1017->setToNode("boxman_skullbase");
group->addChildren(*ROUTE1017);

CROUTE* ROUTE1018 = new CROUTE();
ROUTE1018->setFromField("value_changed");
ROUTE1018->setFromNode("Run_whole_body_RotationInterpolator_Run");
ROUTE1018->setToField("set_rotation");
ROUTE1018->setToNode("boxman_humanoid_root");
group->addChildren(*ROUTE1018);

CROUTE* ROUTE1019 = new CROUTE();
ROUTE1019->setFromField("value_changed");
ROUTE1019->setFromNode("Run_whole_body_TranslationInterpolator_Run");
ROUTE1019->setToField("set_translation");
ROUTE1019->setToNode("boxman_humanoid_root");
group->addChildren(*ROUTE1019);

CROUTE* ROUTE1020 = new CROUTE();
ROUTE1020->setFromField("value_changed");
ROUTE1020->setFromNode("Run_vl5_YawInterpolator");
ROUTE1020->setToField("set_rotation");
ROUTE1020->setToNode("boxman_vl5");
group->addChildren(*ROUTE1020);

CROUTE* ROUTE1021 = new CROUTE();
ROUTE1021->setFromField("fraction_changed");
ROUTE1021->setFromNode("JumpTimer");
ROUTE1021->setToField("set_fraction");
ROUTE1021->setToNode("Jump_r_ankle_RotationInterpolator");
group->addChildren(*ROUTE1021);

CROUTE* ROUTE1022 = new CROUTE();
ROUTE1022->setFromField("fraction_changed");
ROUTE1022->setFromNode("JumpTimer");
ROUTE1022->setToField("set_fraction");
ROUTE1022->setToNode("Jump_r_knee_RotationInterpolator");
group->addChildren(*ROUTE1022);

CROUTE* ROUTE1023 = new CROUTE();
ROUTE1023->setFromField("fraction_changed");
ROUTE1023->setFromNode("JumpTimer");
ROUTE1023->setToField("set_fraction");
ROUTE1023->setToNode("Jump_r_hip_RotationInterpolator");
group->addChildren(*ROUTE1023);

CROUTE* ROUTE1024 = new CROUTE();
ROUTE1024->setFromField("fraction_changed");
ROUTE1024->setFromNode("JumpTimer");
ROUTE1024->setToField("set_fraction");
ROUTE1024->setToNode("Jump_l_ankle_RotationInterpolator");
group->addChildren(*ROUTE1024);

CROUTE* ROUTE1025 = new CROUTE();
ROUTE1025->setFromField("fraction_changed");
ROUTE1025->setFromNode("JumpTimer");
ROUTE1025->setToField("set_fraction");
ROUTE1025->setToNode("Jump_l_knee_RotationInterpolator");
group->addChildren(*ROUTE1025);

CROUTE* ROUTE1026 = new CROUTE();
ROUTE1026->setFromField("fraction_changed");
ROUTE1026->setFromNode("JumpTimer");
ROUTE1026->setToField("set_fraction");
ROUTE1026->setToNode("Jump_l_hip_RotationInterpolator");
group->addChildren(*ROUTE1026);

CROUTE* ROUTE1027 = new CROUTE();
ROUTE1027->setFromField("fraction_changed");
ROUTE1027->setFromNode("JumpTimer");
ROUTE1027->setToField("set_fraction");
ROUTE1027->setToNode("Jump_lower_body_RotationInterpolator");
group->addChildren(*ROUTE1027);

CROUTE* ROUTE1028 = new CROUTE();
ROUTE1028->setFromField("fraction_changed");
ROUTE1028->setFromNode("JumpTimer");
ROUTE1028->setToField("set_fraction");
ROUTE1028->setToNode("Jump_r_wrist_RotationInterpolator");
group->addChildren(*ROUTE1028);

CROUTE* ROUTE1029 = new CROUTE();
ROUTE1029->setFromField("fraction_changed");
ROUTE1029->setFromNode("JumpTimer");
ROUTE1029->setToField("set_fraction");
ROUTE1029->setToNode("Jump_r_elbow_RotationInterpolator");
group->addChildren(*ROUTE1029);

CROUTE* ROUTE1030 = new CROUTE();
ROUTE1030->setFromField("fraction_changed");
ROUTE1030->setFromNode("JumpTimer");
ROUTE1030->setToField("set_fraction");
ROUTE1030->setToNode("Jump_r_shoulder_RotationInterpolator");
group->addChildren(*ROUTE1030);

CROUTE* ROUTE1031 = new CROUTE();
ROUTE1031->setFromField("fraction_changed");
ROUTE1031->setFromNode("JumpTimer");
ROUTE1031->setToField("set_fraction");
ROUTE1031->setToNode("Jump_l_wrist_RotationInterpolator");
group->addChildren(*ROUTE1031);

CROUTE* ROUTE1032 = new CROUTE();
ROUTE1032->setFromField("fraction_changed");
ROUTE1032->setFromNode("JumpTimer");
ROUTE1032->setToField("set_fraction");
ROUTE1032->setToNode("Jump_l_elbow_RotationInterpolator");
group->addChildren(*ROUTE1032);

CROUTE* ROUTE1033 = new CROUTE();
ROUTE1033->setFromField("fraction_changed");
ROUTE1033->setFromNode("JumpTimer");
ROUTE1033->setToField("set_fraction");
ROUTE1033->setToNode("Jump_l_shoulder_RotationInterpolator");
group->addChildren(*ROUTE1033);

CROUTE* ROUTE1034 = new CROUTE();
ROUTE1034->setFromField("fraction_changed");
ROUTE1034->setFromNode("JumpTimer");
ROUTE1034->setToField("set_fraction");
ROUTE1034->setToNode("Jump_head_RotationInterpolator");
group->addChildren(*ROUTE1034);

CROUTE* ROUTE1035 = new CROUTE();
ROUTE1035->setFromField("fraction_changed");
ROUTE1035->setFromNode("JumpTimer");
ROUTE1035->setToField("set_fraction");
ROUTE1035->setToNode("Jump_neck_RotationInterpolator");
group->addChildren(*ROUTE1035);

CROUTE* ROUTE1036 = new CROUTE();
ROUTE1036->setFromField("fraction_changed");
ROUTE1036->setFromNode("JumpTimer");
ROUTE1036->setToField("set_fraction");
ROUTE1036->setToNode("Jump_upper_body_RotationInterpolator");
group->addChildren(*ROUTE1036);

CROUTE* ROUTE1037 = new CROUTE();
ROUTE1037->setFromField("fraction_changed");
ROUTE1037->setFromNode("JumpTimer");
ROUTE1037->setToField("set_fraction");
ROUTE1037->setToNode("Jump_whole_body_RotationInterpolator");
group->addChildren(*ROUTE1037);

CROUTE* ROUTE1038 = new CROUTE();
ROUTE1038->setFromField("fraction_changed");
ROUTE1038->setFromNode("JumpTimer");
ROUTE1038->setToField("set_fraction");
ROUTE1038->setToNode("Jump_whole_body_TranslationInterpolator");
group->addChildren(*ROUTE1038);

CROUTE* ROUTE1039 = new CROUTE();
ROUTE1039->setFromField("fraction_changed");
ROUTE1039->setFromNode("JumpTimer");
ROUTE1039->setToField("set_fraction");
ROUTE1039->setToNode("Jump_l_sternoclavicular_RollInterpolator");
group->addChildren(*ROUTE1039);

CROUTE* ROUTE1040 = new CROUTE();
ROUTE1040->setFromField("fraction_changed");
ROUTE1040->setFromNode("JumpTimer");
ROUTE1040->setToField("set_fraction");
ROUTE1040->setToNode("Jump_l_acromioclavicular_RollInterpolator");
group->addChildren(*ROUTE1040);

CROUTE* ROUTE1041 = new CROUTE();
ROUTE1041->setFromField("fraction_changed");
ROUTE1041->setFromNode("JumpTimer");
ROUTE1041->setToField("set_fraction");
ROUTE1041->setToNode("Jump_r_sternoclavicular_RollInterpolator");
group->addChildren(*ROUTE1041);

CROUTE* ROUTE1042 = new CROUTE();
ROUTE1042->setFromField("fraction_changed");
ROUTE1042->setFromNode("JumpTimer");
ROUTE1042->setToField("set_fraction");
ROUTE1042->setToNode("Jump_r_acromioclavicular_RollInterpolator");
group->addChildren(*ROUTE1042);

CROUTE* ROUTE1043 = new CROUTE();
ROUTE1043->setFromField("fraction_changed");
ROUTE1043->setFromNode("JumpTimer");
ROUTE1043->setToField("set_fraction");
ROUTE1043->setToNode("Jump_r_metatarsal_PitchInterpolator");
group->addChildren(*ROUTE1043);

CROUTE* ROUTE1044 = new CROUTE();
ROUTE1044->setFromField("fraction_changed");
ROUTE1044->setFromNode("JumpTimer");
ROUTE1044->setToField("set_fraction");
ROUTE1044->setToNode("Jump_sacroiliac_YawInterpolator");
group->addChildren(*ROUTE1044);

CROUTE* ROUTE1045 = new CROUTE();
ROUTE1045->setFromField("fraction_changed");
ROUTE1045->setFromNode("JumpTimer");
ROUTE1045->setToField("set_fraction");
ROUTE1045->setToNode("Jump_vl5_YawInterpolator");
group->addChildren(*ROUTE1045);

CROUTE* ROUTE1046 = new CROUTE();
ROUTE1046->setFromField("fraction_changed");
ROUTE1046->setFromNode("JumpTimer");
ROUTE1046->setToField("set_fraction");
ROUTE1046->setToNode("Jump_vc6_YawInterpolator");
group->addChildren(*ROUTE1046);

CROUTE* ROUTE1047 = new CROUTE();
ROUTE1047->setFromField("fraction_changed");
ROUTE1047->setFromNode("JumpTimer");
ROUTE1047->setToField("set_fraction");
ROUTE1047->setToNode("Jump_l_thumb1_PitchInterpolator");
group->addChildren(*ROUTE1047);

CROUTE* ROUTE1048 = new CROUTE();
ROUTE1048->setFromField("fraction_changed");
ROUTE1048->setFromNode("JumpTimer");
ROUTE1048->setToField("set_fraction");
ROUTE1048->setToNode("Jump_r_thumb1_PitchInterpolator");
group->addChildren(*ROUTE1048);

CROUTE* ROUTE1049 = new CROUTE();
ROUTE1049->setFromField("value_changed");
ROUTE1049->setFromNode("Jump_r_ankle_RotationInterpolator");
ROUTE1049->setToField("set_rotation");
ROUTE1049->setToNode("boxman_r_ankle");
group->addChildren(*ROUTE1049);

CROUTE* ROUTE1050 = new CROUTE();
ROUTE1050->setFromField("value_changed");
ROUTE1050->setFromNode("Jump_r_knee_RotationInterpolator");
ROUTE1050->setToField("set_rotation");
ROUTE1050->setToNode("boxman_r_knee");
group->addChildren(*ROUTE1050);

CROUTE* ROUTE1051 = new CROUTE();
ROUTE1051->setFromField("value_changed");
ROUTE1051->setFromNode("Jump_r_hip_RotationInterpolator");
ROUTE1051->setToField("set_rotation");
ROUTE1051->setToNode("boxman_r_hip");
group->addChildren(*ROUTE1051);

CROUTE* ROUTE1052 = new CROUTE();
ROUTE1052->setFromField("value_changed");
ROUTE1052->setFromNode("Jump_l_ankle_RotationInterpolator");
ROUTE1052->setToField("set_rotation");
ROUTE1052->setToNode("boxman_l_ankle");
group->addChildren(*ROUTE1052);

CROUTE* ROUTE1053 = new CROUTE();
ROUTE1053->setFromField("value_changed");
ROUTE1053->setFromNode("Jump_l_knee_RotationInterpolator");
ROUTE1053->setToField("set_rotation");
ROUTE1053->setToNode("boxman_l_knee");
group->addChildren(*ROUTE1053);

CROUTE* ROUTE1054 = new CROUTE();
ROUTE1054->setFromField("value_changed");
ROUTE1054->setFromNode("Jump_l_hip_RotationInterpolator");
ROUTE1054->setToField("set_rotation");
ROUTE1054->setToNode("boxman_l_hip");
group->addChildren(*ROUTE1054);

CROUTE* ROUTE1055 = new CROUTE();
ROUTE1055->setFromField("value_changed");
ROUTE1055->setFromNode("Jump_r_wrist_RotationInterpolator");
ROUTE1055->setToField("set_rotation");
ROUTE1055->setToNode("boxman_r_wrist");
group->addChildren(*ROUTE1055);

CROUTE* ROUTE1056 = new CROUTE();
ROUTE1056->setFromField("value_changed");
ROUTE1056->setFromNode("Jump_r_elbow_RotationInterpolator");
ROUTE1056->setToField("set_rotation");
ROUTE1056->setToNode("boxman_r_elbow");
group->addChildren(*ROUTE1056);

CROUTE* ROUTE1057 = new CROUTE();
ROUTE1057->setFromField("value_changed");
ROUTE1057->setFromNode("Jump_r_shoulder_RotationInterpolator");
ROUTE1057->setToField("set_rotation");
ROUTE1057->setToNode("boxman_r_shoulder");
group->addChildren(*ROUTE1057);

CROUTE* ROUTE1058 = new CROUTE();
ROUTE1058->setFromField("value_changed");
ROUTE1058->setFromNode("Jump_l_wrist_RotationInterpolator");
ROUTE1058->setToField("set_rotation");
ROUTE1058->setToNode("boxman_l_wrist");
group->addChildren(*ROUTE1058);

CROUTE* ROUTE1059 = new CROUTE();
ROUTE1059->setFromField("value_changed");
ROUTE1059->setFromNode("Jump_l_elbow_RotationInterpolator");
ROUTE1059->setToField("set_rotation");
ROUTE1059->setToNode("boxman_l_elbow");
group->addChildren(*ROUTE1059);

CROUTE* ROUTE1060 = new CROUTE();
ROUTE1060->setFromField("value_changed");
ROUTE1060->setFromNode("Jump_l_shoulder_RotationInterpolator");
ROUTE1060->setToField("set_rotation");
ROUTE1060->setToNode("boxman_l_shoulder");
group->addChildren(*ROUTE1060);

CROUTE* ROUTE1061 = new CROUTE();
ROUTE1061->setFromField("value_changed");
ROUTE1061->setFromNode("Jump_head_RotationInterpolator");
ROUTE1061->setToField("set_rotation");
ROUTE1061->setToNode("boxman_skullbase");
group->addChildren(*ROUTE1061);

CROUTE* ROUTE1062 = new CROUTE();
ROUTE1062->setFromField("value_changed");
ROUTE1062->setFromNode("Jump_whole_body_RotationInterpolator");
ROUTE1062->setToField("set_rotation");
ROUTE1062->setToNode("boxman_humanoid_root");
group->addChildren(*ROUTE1062);

CROUTE* ROUTE1063 = new CROUTE();
ROUTE1063->setFromField("value_changed");
ROUTE1063->setFromNode("Jump_whole_body_TranslationInterpolator");
ROUTE1063->setToField("set_translation");
ROUTE1063->setToNode("boxman_humanoid_root");
group->addChildren(*ROUTE1063);

CROUTE* ROUTE1064 = new CROUTE();
ROUTE1064->setFromField("value_changed");
ROUTE1064->setFromNode("Jump_vl5_YawInterpolator");
ROUTE1064->setToField("set_rotation");
ROUTE1064->setToNode("boxman_vl5");
group->addChildren(*ROUTE1064);

CROUTE* ROUTE1065 = new CROUTE();
ROUTE1065->setFromField("fraction_changed");
ROUTE1065->setFromNode("KickTimer");
ROUTE1065->setToField("set_fraction");
ROUTE1065->setToNode("Kick_l_sternoclavicular_RollInterpolator");
group->addChildren(*ROUTE1065);

CROUTE* ROUTE1066 = new CROUTE();
ROUTE1066->setFromField("fraction_changed");
ROUTE1066->setFromNode("KickTimer");
ROUTE1066->setToField("set_fraction");
ROUTE1066->setToNode("Kick_l_acromioclavicular_RollInterpolator");
group->addChildren(*ROUTE1066);

CROUTE* ROUTE1067 = new CROUTE();
ROUTE1067->setFromField("fraction_changed");
ROUTE1067->setFromNode("KickTimer");
ROUTE1067->setToField("set_fraction");
ROUTE1067->setToNode("Kick_l_shoulder_RollInterpolator");
group->addChildren(*ROUTE1067);

CROUTE* ROUTE1068 = new CROUTE();
ROUTE1068->setFromField("fraction_changed");
ROUTE1068->setFromNode("KickTimer");
ROUTE1068->setToField("set_fraction");
ROUTE1068->setToNode("Kick_l_ForeArm_PitchInterpolator");
group->addChildren(*ROUTE1068);

CROUTE* ROUTE1069 = new CROUTE();
ROUTE1069->setFromField("fraction_changed");
ROUTE1069->setFromNode("KickTimer");
ROUTE1069->setToField("set_fraction");
ROUTE1069->setToNode("Kick_l_wrist_RollInterpolator");
group->addChildren(*ROUTE1069);

CROUTE* ROUTE1070 = new CROUTE();
ROUTE1070->setFromField("fraction_changed");
ROUTE1070->setFromNode("KickTimer");
ROUTE1070->setToField("set_fraction");
ROUTE1070->setToNode("Kick_l_thumb1_PitchInterpolator");
group->addChildren(*ROUTE1070);

CROUTE* ROUTE1071 = new CROUTE();
ROUTE1071->setFromField("fraction_changed");
ROUTE1071->setFromNode("KickTimer");
ROUTE1071->setToField("set_fraction");
ROUTE1071->setToNode("Kick_r_sternoclavicular_RollInterpolator");
group->addChildren(*ROUTE1071);

CROUTE* ROUTE1072 = new CROUTE();
ROUTE1072->setFromField("fraction_changed");
ROUTE1072->setFromNode("KickTimer");
ROUTE1072->setToField("set_fraction");
ROUTE1072->setToNode("Kick_r_acromioclavicular_RollInterpolator");
group->addChildren(*ROUTE1072);

CROUTE* ROUTE1073 = new CROUTE();
ROUTE1073->setFromField("fraction_changed");
ROUTE1073->setFromNode("KickTimer");
ROUTE1073->setToField("set_fraction");
ROUTE1073->setToNode("Kick_r_shoulder_RollInterpolator");
group->addChildren(*ROUTE1073);

CROUTE* ROUTE1074 = new CROUTE();
ROUTE1074->setFromField("fraction_changed");
ROUTE1074->setFromNode("KickTimer");
ROUTE1074->setToField("set_fraction");
ROUTE1074->setToNode("Kick_r_ForeArm_PitchInterpolator");
group->addChildren(*ROUTE1074);

CROUTE* ROUTE1075 = new CROUTE();
ROUTE1075->setFromField("fraction_changed");
ROUTE1075->setFromNode("KickTimer");
ROUTE1075->setToField("set_fraction");
ROUTE1075->setToNode("Kick_r_wrist_RollInterpolator");
group->addChildren(*ROUTE1075);

CROUTE* ROUTE1076 = new CROUTE();
ROUTE1076->setFromField("fraction_changed");
ROUTE1076->setFromNode("KickTimer");
ROUTE1076->setToField("set_fraction");
ROUTE1076->setToNode("Kick_r_thumb1_PitchInterpolator");
group->addChildren(*ROUTE1076);

CROUTE* ROUTE1077 = new CROUTE();
ROUTE1077->setFromField("fraction_changed");
ROUTE1077->setFromNode("KickTimer");
ROUTE1077->setToField("set_fraction");
ROUTE1077->setToNode("Kick_r_hip_PitchInterpolator");
group->addChildren(*ROUTE1077);

CROUTE* ROUTE1078 = new CROUTE();
ROUTE1078->setFromField("fraction_changed");
ROUTE1078->setFromNode("KickTimer");
ROUTE1078->setToField("set_fraction");
ROUTE1078->setToNode("Kick_r_knee_PitchInterpolator");
group->addChildren(*ROUTE1078);

CROUTE* ROUTE1079 = new CROUTE();
ROUTE1079->setFromField("fraction_changed");
ROUTE1079->setFromNode("KickTimer");
ROUTE1079->setToField("set_fraction");
ROUTE1079->setToNode("Kick_l_hip_PitchInterpolator");
group->addChildren(*ROUTE1079);

CROUTE* ROUTE1080 = new CROUTE();
ROUTE1080->setFromField("fraction_changed");
ROUTE1080->setFromNode("KickTimer");
ROUTE1080->setToField("set_fraction");
ROUTE1080->setToNode("Kick_l_knee_PitchInterpolator");
group->addChildren(*ROUTE1080);

CROUTE* ROUTE1081 = new CROUTE();
ROUTE1081->setFromField("fraction_changed");
ROUTE1081->setFromNode("KickTimer");
ROUTE1081->setToField("set_fraction");
ROUTE1081->setToNode("Kick_r_ankle_PitchInterpolator");
group->addChildren(*ROUTE1081);

CROUTE* ROUTE1082 = new CROUTE();
ROUTE1082->setFromField("fraction_changed");
ROUTE1082->setFromNode("KickTimer");
ROUTE1082->setToField("set_fraction");
ROUTE1082->setToNode("Kick_r_metatarsal_PitchInterpolator");
group->addChildren(*ROUTE1082);

CROUTE* ROUTE1083 = new CROUTE();
ROUTE1083->setFromField("fraction_changed");
ROUTE1083->setFromNode("KickTimer");
ROUTE1083->setToField("set_fraction");
ROUTE1083->setToNode("Kick_sacroiliac_YawInterpolator");
group->addChildren(*ROUTE1083);

CROUTE* ROUTE1084 = new CROUTE();
ROUTE1084->setFromField("fraction_changed");
ROUTE1084->setFromNode("KickTimer");
ROUTE1084->setToField("set_fraction");
ROUTE1084->setToNode("Kick_vl5_YawInterpolator");
group->addChildren(*ROUTE1084);

CROUTE* ROUTE1085 = new CROUTE();
ROUTE1085->setFromField("fraction_changed");
ROUTE1085->setFromNode("KickTimer");
ROUTE1085->setToField("set_fraction");
ROUTE1085->setToNode("Kick_vc6_YawInterpolator");
group->addChildren(*ROUTE1085);

CROUTE* ROUTE1086 = new CROUTE();
ROUTE1086->setFromField("fraction_changed");
ROUTE1086->setFromNode("KickTimer");
ROUTE1086->setToField("set_fraction");
ROUTE1086->setToNode("Kick_lower_body_RotationInterpolator");
group->addChildren(*ROUTE1086);

CROUTE* ROUTE1087 = new CROUTE();
ROUTE1087->setFromField("fraction_changed");
ROUTE1087->setFromNode("KickTimer");
ROUTE1087->setToField("set_fraction");
ROUTE1087->setToNode("Kick_upper_body_RotationInterpolator");
group->addChildren(*ROUTE1087);

CROUTE* ROUTE1088 = new CROUTE();
ROUTE1088->setFromField("fraction_changed");
ROUTE1088->setFromNode("KickTimer");
ROUTE1088->setToField("set_fraction");
ROUTE1088->setToNode("Kick_whole_body_RotationInterpolator");
group->addChildren(*ROUTE1088);

CROUTE* ROUTE1089 = new CROUTE();
ROUTE1089->setFromField("fraction_changed");
ROUTE1089->setFromNode("KickTimer");
ROUTE1089->setToField("set_fraction");
ROUTE1089->setToNode("Kick_whole_body_TranslationInterpolator");
group->addChildren(*ROUTE1089);

CROUTE* ROUTE1090 = new CROUTE();
ROUTE1090->setFromField("fraction_changed");
ROUTE1090->setFromNode("KickTimer");
ROUTE1090->setToField("set_fraction");
ROUTE1090->setToNode("Kick_neck_RotationInterpolator");
group->addChildren(*ROUTE1090);

CROUTE* ROUTE1091 = new CROUTE();
ROUTE1091->setFromField("value_changed");
ROUTE1091->setFromNode("Kick_l_shoulder_RollInterpolator");
ROUTE1091->setToField("set_rotation");
ROUTE1091->setToNode("boxman_l_shoulder");
group->addChildren(*ROUTE1091);

CROUTE* ROUTE1092 = new CROUTE();
ROUTE1092->setFromField("value_changed");
ROUTE1092->setFromNode("Kick_l_ForeArm_PitchInterpolator");
ROUTE1092->setToField("set_rotation");
ROUTE1092->setToNode("boxman_l_elbow");
group->addChildren(*ROUTE1092);

CROUTE* ROUTE1093 = new CROUTE();
ROUTE1093->setFromField("value_changed");
ROUTE1093->setFromNode("Kick_l_wrist_RollInterpolator");
ROUTE1093->setToField("set_rotation");
ROUTE1093->setToNode("boxman_l_wrist");
group->addChildren(*ROUTE1093);

CROUTE* ROUTE1094 = new CROUTE();
ROUTE1094->setFromField("value_changed");
ROUTE1094->setFromNode("Kick_r_shoulder_RollInterpolator");
ROUTE1094->setToField("set_rotation");
ROUTE1094->setToNode("boxman_r_shoulder");
group->addChildren(*ROUTE1094);

CROUTE* ROUTE1095 = new CROUTE();
ROUTE1095->setFromField("value_changed");
ROUTE1095->setFromNode("Kick_r_ForeArm_PitchInterpolator");
ROUTE1095->setToField("set_rotation");
ROUTE1095->setToNode("boxman_r_elbow");
group->addChildren(*ROUTE1095);

CROUTE* ROUTE1096 = new CROUTE();
ROUTE1096->setFromField("value_changed");
ROUTE1096->setFromNode("Kick_r_wrist_RollInterpolator");
ROUTE1096->setToField("set_rotation");
ROUTE1096->setToNode("boxman_r_wrist");
group->addChildren(*ROUTE1096);

CROUTE* ROUTE1097 = new CROUTE();
ROUTE1097->setFromField("value_changed");
ROUTE1097->setFromNode("Kick_r_hip_PitchInterpolator");
ROUTE1097->setToField("set_rotation");
ROUTE1097->setToNode("boxman_r_hip");
group->addChildren(*ROUTE1097);

CROUTE* ROUTE1098 = new CROUTE();
ROUTE1098->setFromField("value_changed");
ROUTE1098->setFromNode("Kick_r_knee_PitchInterpolator");
ROUTE1098->setToField("set_rotation");
ROUTE1098->setToNode("boxman_r_knee");
group->addChildren(*ROUTE1098);

CROUTE* ROUTE1099 = new CROUTE();
ROUTE1099->setFromField("value_changed");
ROUTE1099->setFromNode("Kick_r_ankle_PitchInterpolator");
ROUTE1099->setToField("set_rotation");
ROUTE1099->setToNode("boxman_r_ankle");
group->addChildren(*ROUTE1099);

CROUTE* ROUTE1100 = new CROUTE();
ROUTE1100->setFromField("value_changed");
ROUTE1100->setFromNode("Kick_l_hip_PitchInterpolator");
ROUTE1100->setToField("set_rotation");
ROUTE1100->setToNode("boxman_l_hip");
group->addChildren(*ROUTE1100);

CROUTE* ROUTE1101 = new CROUTE();
ROUTE1101->setFromField("value_changed");
ROUTE1101->setFromNode("Kick_l_knee_PitchInterpolator");
ROUTE1101->setToField("set_rotation");
ROUTE1101->setToNode("boxman_l_knee");
group->addChildren(*ROUTE1101);

CROUTE* ROUTE1102 = new CROUTE();
ROUTE1102->setFromField("value_changed");
ROUTE1102->setFromNode("Kick_r_ankle_PitchInterpolator");
ROUTE1102->setToField("set_rotation");
ROUTE1102->setToNode("boxman_l_ankle");
group->addChildren(*ROUTE1102);

CROUTE* ROUTE1103 = new CROUTE();
ROUTE1103->setFromField("value_changed");
ROUTE1103->setFromNode("Kick_vl5_YawInterpolator");
ROUTE1103->setToField("set_rotation");
ROUTE1103->setToNode("boxman_vl5");
group->addChildren(*ROUTE1103);

CROUTE* ROUTE1104 = new CROUTE();
ROUTE1104->setFromField("value_changed");
ROUTE1104->setFromNode("Kick_whole_body_RotationInterpolator");
ROUTE1104->setToField("set_rotation");
ROUTE1104->setToNode("boxman_humanoid_root");
group->addChildren(*ROUTE1104);

CROUTE* ROUTE1105 = new CROUTE();
ROUTE1105->setFromField("value_changed");
ROUTE1105->setFromNode("Kick_whole_body_TranslationInterpolator");
ROUTE1105->setToField("set_translation");
ROUTE1105->setToNode("boxman_humanoid_root");
group->addChildren(*ROUTE1105);

CROUTE* ROUTE1106 = new CROUTE();
ROUTE1106->setFromField("position_changed");
ROUTE1106->setFromNode("HudProx");
ROUTE1106->setToField("set_translation");
ROUTE1106->setToNode("HudXform");
group->addChildren(*ROUTE1106);

CROUTE* ROUTE1107 = new CROUTE();
ROUTE1107->setFromField("orientation_changed");
ROUTE1107->setFromNode("HudProx");
ROUTE1107->setToField("set_rotation");
ROUTE1107->setToNode("HudXform");
group->addChildren(*ROUTE1107);

CROUTE* ROUTE1108 = new CROUTE();
ROUTE1108->setFromField("touchTime");
ROUTE1108->setFromNode("Stand_Touch");
ROUTE1108->setToField("set_stopTime");
ROUTE1108->setToNode("PitchTimer");
group->addChildren(*ROUTE1108);

CROUTE* ROUTE1109 = new CROUTE();
ROUTE1109->setFromField("touchTime");
ROUTE1109->setFromNode("Stand_Touch");
ROUTE1109->setToField("set_stopTime");
ROUTE1109->setToNode("YawTimer");
group->addChildren(*ROUTE1109);

CROUTE* ROUTE1110 = new CROUTE();
ROUTE1110->setFromField("touchTime");
ROUTE1110->setFromNode("Stand_Touch");
ROUTE1110->setToField("set_stopTime");
ROUTE1110->setToNode("RollTimer");
group->addChildren(*ROUTE1110);

CROUTE* ROUTE1111 = new CROUTE();
ROUTE1111->setFromField("touchTime");
ROUTE1111->setFromNode("Stand_Touch");
ROUTE1111->setToField("set_stopTime");
ROUTE1111->setToNode("WalkTimer");
group->addChildren(*ROUTE1111);

CROUTE* ROUTE1112 = new CROUTE();
ROUTE1112->setFromField("touchTime");
ROUTE1112->setFromNode("Stand_Touch");
ROUTE1112->setToField("set_stopTime");
ROUTE1112->setToNode("RunTimer");
group->addChildren(*ROUTE1112);

CROUTE* ROUTE1113 = new CROUTE();
ROUTE1113->setFromField("touchTime");
ROUTE1113->setFromNode("Stand_Touch");
ROUTE1113->setToField("set_stopTime");
ROUTE1113->setToNode("JumpTimer");
group->addChildren(*ROUTE1113);

CROUTE* ROUTE1114 = new CROUTE();
ROUTE1114->setFromField("touchTime");
ROUTE1114->setFromNode("Stand_Touch");
ROUTE1114->setToField("set_stopTime");
ROUTE1114->setToNode("KickTimer");
group->addChildren(*ROUTE1114);

CROUTE* ROUTE1115 = new CROUTE();
ROUTE1115->setFromField("touchTime");
ROUTE1115->setFromNode("Stand_Touch");
ROUTE1115->setToField("set_stopTime");
ROUTE1115->setToNode("StopTimer");
group->addChildren(*ROUTE1115);

CROUTE* ROUTE1116 = new CROUTE();
ROUTE1116->setFromField("touchTime");
ROUTE1116->setFromNode("Stand_Touch");
ROUTE1116->setToField("set_startTime");
ROUTE1116->setToNode("StandTimer");
group->addChildren(*ROUTE1116);

CROUTE* ROUTE1117 = new CROUTE();
ROUTE1117->setFromField("touchTime");
ROUTE1117->setFromNode("Pitch_Touch");
ROUTE1117->setToField("set_stopTime");
ROUTE1117->setToNode("StandTimer");
group->addChildren(*ROUTE1117);

CROUTE* ROUTE1118 = new CROUTE();
ROUTE1118->setFromField("touchTime");
ROUTE1118->setFromNode("Pitch_Touch");
ROUTE1118->setToField("set_stopTime");
ROUTE1118->setToNode("YawTimer");
group->addChildren(*ROUTE1118);

CROUTE* ROUTE1119 = new CROUTE();
ROUTE1119->setFromField("touchTime");
ROUTE1119->setFromNode("Pitch_Touch");
ROUTE1119->setToField("set_stopTime");
ROUTE1119->setToNode("RollTimer");
group->addChildren(*ROUTE1119);

CROUTE* ROUTE1120 = new CROUTE();
ROUTE1120->setFromField("touchTime");
ROUTE1120->setFromNode("Pitch_Touch");
ROUTE1120->setToField("set_stopTime");
ROUTE1120->setToNode("WalkTimer");
group->addChildren(*ROUTE1120);

CROUTE* ROUTE1121 = new CROUTE();
ROUTE1121->setFromField("touchTime");
ROUTE1121->setFromNode("Pitch_Touch");
ROUTE1121->setToField("set_stopTime");
ROUTE1121->setToNode("RunTimer");
group->addChildren(*ROUTE1121);

CROUTE* ROUTE1122 = new CROUTE();
ROUTE1122->setFromField("touchTime");
ROUTE1122->setFromNode("Pitch_Touch");
ROUTE1122->setToField("set_stopTime");
ROUTE1122->setToNode("JumpTimer");
group->addChildren(*ROUTE1122);

CROUTE* ROUTE1123 = new CROUTE();
ROUTE1123->setFromField("touchTime");
ROUTE1123->setFromNode("Pitch_Touch");
ROUTE1123->setToField("set_stopTime");
ROUTE1123->setToNode("KickTimer");
group->addChildren(*ROUTE1123);

CROUTE* ROUTE1124 = new CROUTE();
ROUTE1124->setFromField("touchTime");
ROUTE1124->setFromNode("Pitch_Touch");
ROUTE1124->setToField("set_stopTime");
ROUTE1124->setToNode("StopTimer");
group->addChildren(*ROUTE1124);

CROUTE* ROUTE1125 = new CROUTE();
ROUTE1125->setFromField("touchTime");
ROUTE1125->setFromNode("Pitch_Touch");
ROUTE1125->setToField("set_startTime");
ROUTE1125->setToNode("PitchTimer");
group->addChildren(*ROUTE1125);

CROUTE* ROUTE1126 = new CROUTE();
ROUTE1126->setFromField("touchTime");
ROUTE1126->setFromNode("Yaw_Touch");
ROUTE1126->setToField("set_stopTime");
ROUTE1126->setToNode("StandTimer");
group->addChildren(*ROUTE1126);

CROUTE* ROUTE1127 = new CROUTE();
ROUTE1127->setFromField("touchTime");
ROUTE1127->setFromNode("Yaw_Touch");
ROUTE1127->setToField("set_stopTime");
ROUTE1127->setToNode("PitchTimer");
group->addChildren(*ROUTE1127);

CROUTE* ROUTE1128 = new CROUTE();
ROUTE1128->setFromField("touchTime");
ROUTE1128->setFromNode("Yaw_Touch");
ROUTE1128->setToField("set_stopTime");
ROUTE1128->setToNode("RollTimer");
group->addChildren(*ROUTE1128);

CROUTE* ROUTE1129 = new CROUTE();
ROUTE1129->setFromField("touchTime");
ROUTE1129->setFromNode("Yaw_Touch");
ROUTE1129->setToField("set_stopTime");
ROUTE1129->setToNode("WalkTimer");
group->addChildren(*ROUTE1129);

CROUTE* ROUTE1130 = new CROUTE();
ROUTE1130->setFromField("touchTime");
ROUTE1130->setFromNode("Yaw_Touch");
ROUTE1130->setToField("set_stopTime");
ROUTE1130->setToNode("RunTimer");
group->addChildren(*ROUTE1130);

CROUTE* ROUTE1131 = new CROUTE();
ROUTE1131->setFromField("touchTime");
ROUTE1131->setFromNode("Yaw_Touch");
ROUTE1131->setToField("set_stopTime");
ROUTE1131->setToNode("JumpTimer");
group->addChildren(*ROUTE1131);

CROUTE* ROUTE1132 = new CROUTE();
ROUTE1132->setFromField("touchTime");
ROUTE1132->setFromNode("Yaw_Touch");
ROUTE1132->setToField("set_stopTime");
ROUTE1132->setToNode("KickTimer");
group->addChildren(*ROUTE1132);

CROUTE* ROUTE1133 = new CROUTE();
ROUTE1133->setFromField("touchTime");
ROUTE1133->setFromNode("Yaw_Touch");
ROUTE1133->setToField("set_stopTime");
ROUTE1133->setToNode("StopTimer");
group->addChildren(*ROUTE1133);

CROUTE* ROUTE1134 = new CROUTE();
ROUTE1134->setFromField("touchTime");
ROUTE1134->setFromNode("Yaw_Touch");
ROUTE1134->setToField("set_startTime");
ROUTE1134->setToNode("YawTimer");
group->addChildren(*ROUTE1134);

CROUTE* ROUTE1135 = new CROUTE();
ROUTE1135->setFromField("touchTime");
ROUTE1135->setFromNode("Walk_Touch");
ROUTE1135->setToField("set_stopTime");
ROUTE1135->setToNode("StandTimer");
group->addChildren(*ROUTE1135);

CROUTE* ROUTE1136 = new CROUTE();
ROUTE1136->setFromField("touchTime");
ROUTE1136->setFromNode("Walk_Touch");
ROUTE1136->setToField("set_stopTime");
ROUTE1136->setToNode("PitchTimer");
group->addChildren(*ROUTE1136);

CROUTE* ROUTE1137 = new CROUTE();
ROUTE1137->setFromField("touchTime");
ROUTE1137->setFromNode("Walk_Touch");
ROUTE1137->setToField("set_stopTime");
ROUTE1137->setToNode("YawTimer");
group->addChildren(*ROUTE1137);

CROUTE* ROUTE1138 = new CROUTE();
ROUTE1138->setFromField("touchTime");
ROUTE1138->setFromNode("Walk_Touch");
ROUTE1138->setToField("set_stopTime");
ROUTE1138->setToNode("RollTimer");
group->addChildren(*ROUTE1138);

CROUTE* ROUTE1139 = new CROUTE();
ROUTE1139->setFromField("touchTime");
ROUTE1139->setFromNode("Walk_Touch");
ROUTE1139->setToField("set_stopTime");
ROUTE1139->setToNode("RunTimer");
group->addChildren(*ROUTE1139);

CROUTE* ROUTE1140 = new CROUTE();
ROUTE1140->setFromField("touchTime");
ROUTE1140->setFromNode("Walk_Touch");
ROUTE1140->setToField("set_stopTime");
ROUTE1140->setToNode("JumpTimer");
group->addChildren(*ROUTE1140);

CROUTE* ROUTE1141 = new CROUTE();
ROUTE1141->setFromField("touchTime");
ROUTE1141->setFromNode("Walk_Touch");
ROUTE1141->setToField("set_stopTime");
ROUTE1141->setToNode("KickTimer");
group->addChildren(*ROUTE1141);

CROUTE* ROUTE1142 = new CROUTE();
ROUTE1142->setFromField("touchTime");
ROUTE1142->setFromNode("Walk_Touch");
ROUTE1142->setToField("set_stopTime");
ROUTE1142->setToNode("StopTimer");
group->addChildren(*ROUTE1142);

CROUTE* ROUTE1143 = new CROUTE();
ROUTE1143->setFromField("touchTime");
ROUTE1143->setFromNode("Walk_Touch");
ROUTE1143->setToField("set_startTime");
ROUTE1143->setToNode("WalkTimer");
group->addChildren(*ROUTE1143);

CROUTE* ROUTE1144 = new CROUTE();
ROUTE1144->setFromField("touchTime");
ROUTE1144->setFromNode("Roll_Touch");
ROUTE1144->setToField("set_stopTime");
ROUTE1144->setToNode("StandTimer");
group->addChildren(*ROUTE1144);

CROUTE* ROUTE1145 = new CROUTE();
ROUTE1145->setFromField("touchTime");
ROUTE1145->setFromNode("Roll_Touch");
ROUTE1145->setToField("set_stopTime");
ROUTE1145->setToNode("PitchTimer");
group->addChildren(*ROUTE1145);

CROUTE* ROUTE1146 = new CROUTE();
ROUTE1146->setFromField("touchTime");
ROUTE1146->setFromNode("Roll_Touch");
ROUTE1146->setToField("set_stopTime");
ROUTE1146->setToNode("YawTimer");
group->addChildren(*ROUTE1146);

CROUTE* ROUTE1147 = new CROUTE();
ROUTE1147->setFromField("touchTime");
ROUTE1147->setFromNode("Roll_Touch");
ROUTE1147->setToField("set_stopTime");
ROUTE1147->setToNode("WalkTimer");
group->addChildren(*ROUTE1147);

CROUTE* ROUTE1148 = new CROUTE();
ROUTE1148->setFromField("touchTime");
ROUTE1148->setFromNode("Roll_Touch");
ROUTE1148->setToField("set_stopTime");
ROUTE1148->setToNode("RunTimer");
group->addChildren(*ROUTE1148);

CROUTE* ROUTE1149 = new CROUTE();
ROUTE1149->setFromField("touchTime");
ROUTE1149->setFromNode("Roll_Touch");
ROUTE1149->setToField("set_stopTime");
ROUTE1149->setToNode("JumpTimer");
group->addChildren(*ROUTE1149);

CROUTE* ROUTE1150 = new CROUTE();
ROUTE1150->setFromField("touchTime");
ROUTE1150->setFromNode("Roll_Touch");
ROUTE1150->setToField("set_stopTime");
ROUTE1150->setToNode("KickTimer");
group->addChildren(*ROUTE1150);

CROUTE* ROUTE1151 = new CROUTE();
ROUTE1151->setFromField("touchTime");
ROUTE1151->setFromNode("Roll_Touch");
ROUTE1151->setToField("set_stopTime");
ROUTE1151->setToNode("StopTimer");
group->addChildren(*ROUTE1151);

CROUTE* ROUTE1152 = new CROUTE();
ROUTE1152->setFromField("touchTime");
ROUTE1152->setFromNode("Roll_Touch");
ROUTE1152->setToField("set_startTime");
ROUTE1152->setToNode("RollTimer");
group->addChildren(*ROUTE1152);

CROUTE* ROUTE1153 = new CROUTE();
ROUTE1153->setFromField("touchTime");
ROUTE1153->setFromNode("Run_Touch");
ROUTE1153->setToField("set_stopTime");
ROUTE1153->setToNode("StandTimer");
group->addChildren(*ROUTE1153);

CROUTE* ROUTE1154 = new CROUTE();
ROUTE1154->setFromField("touchTime");
ROUTE1154->setFromNode("Run_Touch");
ROUTE1154->setToField("set_stopTime");
ROUTE1154->setToNode("PitchTimer");
group->addChildren(*ROUTE1154);

CROUTE* ROUTE1155 = new CROUTE();
ROUTE1155->setFromField("touchTime");
ROUTE1155->setFromNode("Run_Touch");
ROUTE1155->setToField("set_stopTime");
ROUTE1155->setToNode("YawTimer");
group->addChildren(*ROUTE1155);

CROUTE* ROUTE1156 = new CROUTE();
ROUTE1156->setFromField("touchTime");
ROUTE1156->setFromNode("Run_Touch");
ROUTE1156->setToField("set_stopTime");
ROUTE1156->setToNode("RollTimer");
group->addChildren(*ROUTE1156);

CROUTE* ROUTE1157 = new CROUTE();
ROUTE1157->setFromField("touchTime");
ROUTE1157->setFromNode("Run_Touch");
ROUTE1157->setToField("set_stopTime");
ROUTE1157->setToNode("WalkTimer");
group->addChildren(*ROUTE1157);

CROUTE* ROUTE1158 = new CROUTE();
ROUTE1158->setFromField("touchTime");
ROUTE1158->setFromNode("Run_Touch");
ROUTE1158->setToField("set_stopTime");
ROUTE1158->setToNode("JumpTimer");
group->addChildren(*ROUTE1158);

CROUTE* ROUTE1159 = new CROUTE();
ROUTE1159->setFromField("touchTime");
ROUTE1159->setFromNode("Run_Touch");
ROUTE1159->setToField("set_stopTime");
ROUTE1159->setToNode("KickTimer");
group->addChildren(*ROUTE1159);

CROUTE* ROUTE1160 = new CROUTE();
ROUTE1160->setFromField("touchTime");
ROUTE1160->setFromNode("Run_Touch");
ROUTE1160->setToField("set_stopTime");
ROUTE1160->setToNode("StopTimer");
group->addChildren(*ROUTE1160);

CROUTE* ROUTE1161 = new CROUTE();
ROUTE1161->setFromField("touchTime");
ROUTE1161->setFromNode("Run_Touch");
ROUTE1161->setToField("set_startTime");
ROUTE1161->setToNode("RunTimer");
group->addChildren(*ROUTE1161);

CROUTE* ROUTE1162 = new CROUTE();
ROUTE1162->setFromField("touchTime");
ROUTE1162->setFromNode("Jump_Touch");
ROUTE1162->setToField("set_stopTime");
ROUTE1162->setToNode("StandTimer");
group->addChildren(*ROUTE1162);

CROUTE* ROUTE1163 = new CROUTE();
ROUTE1163->setFromField("touchTime");
ROUTE1163->setFromNode("Jump_Touch");
ROUTE1163->setToField("set_stopTime");
ROUTE1163->setToNode("PitchTimer");
group->addChildren(*ROUTE1163);

CROUTE* ROUTE1164 = new CROUTE();
ROUTE1164->setFromField("touchTime");
ROUTE1164->setFromNode("Jump_Touch");
ROUTE1164->setToField("set_stopTime");
ROUTE1164->setToNode("YawTimer");
group->addChildren(*ROUTE1164);

CROUTE* ROUTE1165 = new CROUTE();
ROUTE1165->setFromField("touchTime");
ROUTE1165->setFromNode("Jump_Touch");
ROUTE1165->setToField("set_stopTime");
ROUTE1165->setToNode("RollTimer");
group->addChildren(*ROUTE1165);

CROUTE* ROUTE1166 = new CROUTE();
ROUTE1166->setFromField("touchTime");
ROUTE1166->setFromNode("Jump_Touch");
ROUTE1166->setToField("set_stopTime");
ROUTE1166->setToNode("WalkTimer");
group->addChildren(*ROUTE1166);

CROUTE* ROUTE1167 = new CROUTE();
ROUTE1167->setFromField("touchTime");
ROUTE1167->setFromNode("Jump_Touch");
ROUTE1167->setToField("set_stopTime");
ROUTE1167->setToNode("RunTimer");
group->addChildren(*ROUTE1167);

CROUTE* ROUTE1168 = new CROUTE();
ROUTE1168->setFromField("touchTime");
ROUTE1168->setFromNode("Jump_Touch");
ROUTE1168->setToField("set_stopTime");
ROUTE1168->setToNode("KickTimer");
group->addChildren(*ROUTE1168);

CROUTE* ROUTE1169 = new CROUTE();
ROUTE1169->setFromField("touchTime");
ROUTE1169->setFromNode("Jump_Touch");
ROUTE1169->setToField("set_stopTime");
ROUTE1169->setToNode("StopTimer");
group->addChildren(*ROUTE1169);

CROUTE* ROUTE1170 = new CROUTE();
ROUTE1170->setFromField("touchTime");
ROUTE1170->setFromNode("Jump_Touch");
ROUTE1170->setToField("set_startTime");
ROUTE1170->setToNode("JumpTimer");
group->addChildren(*ROUTE1170);

CROUTE* ROUTE1171 = new CROUTE();
ROUTE1171->setFromField("touchTime");
ROUTE1171->setFromNode("Kick_Touch");
ROUTE1171->setToField("set_stopTime");
ROUTE1171->setToNode("StandTimer");
group->addChildren(*ROUTE1171);

CROUTE* ROUTE1172 = new CROUTE();
ROUTE1172->setFromField("touchTime");
ROUTE1172->setFromNode("Kick_Touch");
ROUTE1172->setToField("set_stopTime");
ROUTE1172->setToNode("PitchTimer");
group->addChildren(*ROUTE1172);

CROUTE* ROUTE1173 = new CROUTE();
ROUTE1173->setFromField("touchTime");
ROUTE1173->setFromNode("Kick_Touch");
ROUTE1173->setToField("set_stopTime");
ROUTE1173->setToNode("YawTimer");
group->addChildren(*ROUTE1173);

CROUTE* ROUTE1174 = new CROUTE();
ROUTE1174->setFromField("touchTime");
ROUTE1174->setFromNode("Kick_Touch");
ROUTE1174->setToField("set_stopTime");
ROUTE1174->setToNode("RollTimer");
group->addChildren(*ROUTE1174);

CROUTE* ROUTE1175 = new CROUTE();
ROUTE1175->setFromField("touchTime");
ROUTE1175->setFromNode("Kick_Touch");
ROUTE1175->setToField("set_stopTime");
ROUTE1175->setToNode("WalkTimer");
group->addChildren(*ROUTE1175);

CROUTE* ROUTE1176 = new CROUTE();
ROUTE1176->setFromField("touchTime");
ROUTE1176->setFromNode("Kick_Touch");
ROUTE1176->setToField("set_stopTime");
ROUTE1176->setToNode("RunTimer");
group->addChildren(*ROUTE1176);

CROUTE* ROUTE1177 = new CROUTE();
ROUTE1177->setFromField("touchTime");
ROUTE1177->setFromNode("Kick_Touch");
ROUTE1177->setToField("set_stopTime");
ROUTE1177->setToNode("JumpTimer");
group->addChildren(*ROUTE1177);

CROUTE* ROUTE1178 = new CROUTE();
ROUTE1178->setFromField("touchTime");
ROUTE1178->setFromNode("Kick_Touch");
ROUTE1178->setToField("set_stopTime");
ROUTE1178->setToNode("StopTimer");
group->addChildren(*ROUTE1178);

CROUTE* ROUTE1179 = new CROUTE();
ROUTE1179->setFromField("touchTime");
ROUTE1179->setFromNode("Kick_Touch");
ROUTE1179->setToField("set_startTime");
ROUTE1179->setToNode("KickTimer");
group->addChildren(*ROUTE1179);

CROUTE* ROUTE1180 = new CROUTE();
ROUTE1180->setFromField("touchTime");
ROUTE1180->setFromNode("Stop_Touch");
ROUTE1180->setToField("set_stopTime");
ROUTE1180->setToNode("StandTimer");
group->addChildren(*ROUTE1180);

CROUTE* ROUTE1181 = new CROUTE();
ROUTE1181->setFromField("touchTime");
ROUTE1181->setFromNode("Stop_Touch");
ROUTE1181->setToField("set_stopTime");
ROUTE1181->setToNode("PitchTimer");
group->addChildren(*ROUTE1181);

CROUTE* ROUTE1182 = new CROUTE();
ROUTE1182->setFromField("touchTime");
ROUTE1182->setFromNode("Stop_Touch");
ROUTE1182->setToField("set_stopTime");
ROUTE1182->setToNode("YawTimer");
group->addChildren(*ROUTE1182);

CROUTE* ROUTE1183 = new CROUTE();
ROUTE1183->setFromField("touchTime");
ROUTE1183->setFromNode("Stop_Touch");
ROUTE1183->setToField("set_stopTime");
ROUTE1183->setToNode("RollTimer");
group->addChildren(*ROUTE1183);

CROUTE* ROUTE1184 = new CROUTE();
ROUTE1184->setFromField("touchTime");
ROUTE1184->setFromNode("Stop_Touch");
ROUTE1184->setToField("set_stopTime");
ROUTE1184->setToNode("WalkTimer");
group->addChildren(*ROUTE1184);

CROUTE* ROUTE1185 = new CROUTE();
ROUTE1185->setFromField("touchTime");
ROUTE1185->setFromNode("Stop_Touch");
ROUTE1185->setToField("set_stopTime");
ROUTE1185->setToNode("RunTimer");
group->addChildren(*ROUTE1185);

CROUTE* ROUTE1186 = new CROUTE();
ROUTE1186->setFromField("touchTime");
ROUTE1186->setFromNode("Stop_Touch");
ROUTE1186->setToField("set_stopTime");
ROUTE1186->setToNode("JumpTimer");
group->addChildren(*ROUTE1186);

CROUTE* ROUTE1187 = new CROUTE();
ROUTE1187->setFromField("touchTime");
ROUTE1187->setFromNode("Stop_Touch");
ROUTE1187->setToField("set_stopTime");
ROUTE1187->setToNode("KickTimer");
group->addChildren(*ROUTE1187);

CROUTE* ROUTE1188 = new CROUTE();
ROUTE1188->setFromField("touchTime");
ROUTE1188->setFromNode("Stop_Touch");
ROUTE1188->setToField("set_startTime");
ROUTE1188->setToNode("StopTimer");
group->addChildren(*ROUTE1188);

X3D0->setScene(*Scene34);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

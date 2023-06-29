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
meta3->setContent("BoxMan.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation scripting via an external prototype (ExternProtoDeclare).");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("James Smith - james@vapourtech.com");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("translator");
meta6->setContent("Don Brutzman and Matt Beitler");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("created");
meta7->setContent("1 March 2001");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("translated");
meta8->setContent("19 October 2001");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("modified");
meta9->setContent("8 January 2023");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("http://HAnim.org");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("../Legacy/originals/boxman.wrl");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("BoxMan.js");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("warning");
meta13->setContent("Skin mesh is split across multiple shapes within a Group, should that be allowed?");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("TODO");
meta14->setContent("What does the original animation script accomplish? It is not hooked up, script source contains errors...");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("TODO");
meta15->setContent("InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("Image");
meta16->setContent("BoxManViewInclined.png");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("Image");
meta17->setContent("BoxManViewFront.png");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("Image");
meta18->setContent("BoxManViewRight.png");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("Image");
meta19->setContent("BoxManViewLeft.png");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("Image");
meta20->setContent("BoxManViewTop.png");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("reference");
meta21->setContent("BoxManAnimationPanel.x3d");
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
meta31->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan.x3d");
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

//When converting to VRML97 (which didn't include HAnim), HAnim node prototypes are provided automatically by the X3dToVrml97.xslt translation stylesheet
CHAnimHumanoid* HAnimHumanoid37 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid37->setName("Humanoid");
HAnimHumanoid37->setDEF("boxman_Humanoid");
HAnimHumanoid37->setInfo(new CString[4]{"authorName=James Smith","authorEmail=james@vapourtech.com","copyright=(C) 2000 James Smith - james@vapourtech.com","humanoidVersion=2.0"}, 4);
HAnimHumanoid37->setVersion("1.0");
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
Viewpoint152->setDEF("Right_View");
Viewpoint152->setDescription("Right-side View");
Viewpoint152->setOrientation(new float[4]{0,1,0,-1.57});
Viewpoint152->setPosition(new float[3]{-3,1,0});
HAnimSite149->addChildren(*Viewpoint152);

CViewpoint* Viewpoint153 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint153->setDEF("Left_View");
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
HAnimJoint158->setUSE("boxman_l_ankle");
HAnimHumanoid37->addJoints(*HAnimJoint158);

CHAnimJoint* HAnimJoint159 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint159->setUSE("boxman_r_ankle");
HAnimHumanoid37->addJoints(*HAnimJoint159);

CHAnimJoint* HAnimJoint160 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint160->setUSE("boxman_l_elbow");
HAnimHumanoid37->addJoints(*HAnimJoint160);

CHAnimJoint* HAnimJoint161 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint161->setUSE("boxman_r_elbow");
HAnimHumanoid37->addJoints(*HAnimJoint161);

CHAnimJoint* HAnimJoint162 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint162->setUSE("boxman_l_hip");
HAnimHumanoid37->addJoints(*HAnimJoint162);

CHAnimJoint* HAnimJoint163 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint163->setUSE("boxman_r_hip");
HAnimHumanoid37->addJoints(*HAnimJoint163);

CHAnimJoint* HAnimJoint164 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint164->setUSE("boxman_l_knee");
HAnimHumanoid37->addJoints(*HAnimJoint164);

CHAnimJoint* HAnimJoint165 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint165->setUSE("boxman_r_knee");
HAnimHumanoid37->addJoints(*HAnimJoint165);

CHAnimJoint* HAnimJoint166 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint166->setUSE("boxman_l_midtarsal");
HAnimHumanoid37->addJoints(*HAnimJoint166);

CHAnimJoint* HAnimJoint167 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint167->setUSE("boxman_r_midtarsal");
HAnimHumanoid37->addJoints(*HAnimJoint167);

CHAnimJoint* HAnimJoint168 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint168->setUSE("boxman_l_shoulder");
HAnimHumanoid37->addJoints(*HAnimJoint168);

CHAnimJoint* HAnimJoint169 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint169->setUSE("boxman_r_shoulder");
HAnimHumanoid37->addJoints(*HAnimJoint169);

CHAnimJoint* HAnimJoint170 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint170->setUSE("boxman_l_wrist");
HAnimHumanoid37->addJoints(*HAnimJoint170);

CHAnimJoint* HAnimJoint171 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint171->setUSE("boxman_r_wrist");
HAnimHumanoid37->addJoints(*HAnimJoint171);

CHAnimSegment* HAnimSegment172 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment172->setUSE("boxman_l5");
HAnimHumanoid37->setSegments(*HAnimSegment172);

CHAnimSegment* HAnimSegment173 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment173->setUSE("boxman_sacrum");
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

CExternProtoDeclare* ExternProtoDeclare194 = new CExternProtoDeclare();
ExternProtoDeclare194->setName("LOA1_WalkAnimation");
ExternProtoDeclare194->setUrl(new CString[6]{"LOA1_WalkAnimation.wrl#LOA1_WalkAnimation","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation","http://HAnim.org/Models/HAnim2001/boxman/protos/LOA1WalkAnimation.wrl#LOA1WalkAnimation","LOA1_WalkAnimation.x3d#LOA1_WalkAnimation","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation","http://HAnim.org/Models/HAnim2001/boxman/protos/LOA1WalkAnimation.x3d#LOA1WalkAnimation"}, 6);
Cfield* field195 = new Cfield();
field195->setName("cycleInterval");
field195->setAccessType("inputOutput");
field195->setType("SFTime");
ExternProtoDeclare194->addField(*field195);

Cfield* field196 = new Cfield();
field196->setName("enabled");
field196->setAccessType("inputOutput");
field196->setType("SFBool");
ExternProtoDeclare194->addField(*field196);

Cfield* field197 = new Cfield();
field197->setName("loop");
field197->setAccessType("inputOutput");
field197->setType("SFBool");
ExternProtoDeclare194->addField(*field197);

Cfield* field198 = new Cfield();
field198->setName("startTime");
field198->setAccessType("inputOutput");
field198->setType("SFTime");
ExternProtoDeclare194->addField(*field198);

Cfield* field199 = new Cfield();
field199->setName("stopTime");
field199->setAccessType("inputOutput");
field199->setType("SFTime");
ExternProtoDeclare194->addField(*field199);

Cfield* field200 = new Cfield();
field200->setName("fraction_changed");
field200->setAccessType("outputOnly");
field200->setType("SFFloat");
ExternProtoDeclare194->addField(*field200);

Cfield* field201 = new Cfield();
field201->setName("HumanoidRoot_translation_changed");
field201->setAccessType("outputOnly");
field201->setType("SFVec3f");
ExternProtoDeclare194->addField(*field201);

Cfield* field202 = new Cfield();
field202->setName("HumanoidRoot_rotation_changed");
field202->setAccessType("outputOnly");
field202->setType("SFRotation");
ExternProtoDeclare194->addField(*field202);

Cfield* field203 = new Cfield();
field203->setName("l_hip_rotation_changed");
field203->setAccessType("outputOnly");
field203->setType("SFRotation");
ExternProtoDeclare194->addField(*field203);

Cfield* field204 = new Cfield();
field204->setName("l_knee_rotation_changed");
field204->setAccessType("outputOnly");
field204->setType("SFRotation");
ExternProtoDeclare194->addField(*field204);

Cfield* field205 = new Cfield();
field205->setName("l_ankle_rotation_changed");
field205->setAccessType("outputOnly");
field205->setType("SFRotation");
ExternProtoDeclare194->addField(*field205);

Cfield* field206 = new Cfield();
field206->setName("l_midtarsal_rotation_changed");
field206->setAccessType("outputOnly");
field206->setType("SFRotation");
ExternProtoDeclare194->addField(*field206);

Cfield* field207 = new Cfield();
field207->setName("r_hip_rotation_changed");
field207->setAccessType("outputOnly");
field207->setType("SFRotation");
ExternProtoDeclare194->addField(*field207);

Cfield* field208 = new Cfield();
field208->setName("r_knee_rotation_changed");
field208->setAccessType("outputOnly");
field208->setType("SFRotation");
ExternProtoDeclare194->addField(*field208);

Cfield* field209 = new Cfield();
field209->setName("r_ankle_rotation_changed");
field209->setAccessType("outputOnly");
field209->setType("SFRotation");
ExternProtoDeclare194->addField(*field209);

Cfield* field210 = new Cfield();
field210->setName("r_midtarsal_rotation_changed");
field210->setAccessType("outputOnly");
field210->setType("SFRotation");
ExternProtoDeclare194->addField(*field210);

Cfield* field211 = new Cfield();
field211->setName("vl5_rotation_changed");
field211->setAccessType("outputOnly");
field211->setType("SFRotation");
ExternProtoDeclare194->addField(*field211);

Cfield* field212 = new Cfield();
field212->setName("skullbase_rotation_changed");
field212->setAccessType("outputOnly");
field212->setType("SFRotation");
ExternProtoDeclare194->addField(*field212);

Cfield* field213 = new Cfield();
field213->setName("l_shoulder_rotation_changed");
field213->setAccessType("outputOnly");
field213->setType("SFRotation");
ExternProtoDeclare194->addField(*field213);

Cfield* field214 = new Cfield();
field214->setName("l_elbow_rotation_changed");
field214->setAccessType("outputOnly");
field214->setType("SFRotation");
ExternProtoDeclare194->addField(*field214);

Cfield* field215 = new Cfield();
field215->setName("l_wrist_rotation_changed");
field215->setAccessType("outputOnly");
field215->setType("SFRotation");
ExternProtoDeclare194->addField(*field215);

Cfield* field216 = new Cfield();
field216->setName("r_shoulder_rotation_changed");
field216->setAccessType("outputOnly");
field216->setType("SFRotation");
ExternProtoDeclare194->addField(*field216);

Cfield* field217 = new Cfield();
field217->setName("r_elbow_rotation_changed");
field217->setAccessType("outputOnly");
field217->setType("SFRotation");
ExternProtoDeclare194->addField(*field217);

Cfield* field218 = new Cfield();
field218->setName("r_wrist_rotation_changed");
field218->setAccessType("outputOnly");
field218->setType("SFRotation");
ExternProtoDeclare194->addField(*field218);

Cfield* field219 = new Cfield();
field219->setName("isActive");
field219->setAccessType("outputOnly");
field219->setType("SFBool");
ExternProtoDeclare194->addField(*field219);

group->addChildren(*ExternProtoDeclare194);

CProtoInstance* ProtoInstance220 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance220->setName("LOA1_WalkAnimation");
ProtoInstance220->setDEF("ANIMATOR");
group->addChildren(*ProtoInstance220);

//Animation ROUTEs
CROUTE* ROUTE221 = new CROUTE();
ROUTE221->setFromField("HumanoidRoot_translation_changed");
ROUTE221->setFromNode("ANIMATOR");
ROUTE221->setToField("set_translation");
ROUTE221->setToNode("boxman_humanoid_root");
group->addChildren(*ROUTE221);

CROUTE* ROUTE222 = new CROUTE();
ROUTE222->setFromField("HumanoidRoot_rotation_changed");
ROUTE222->setFromNode("ANIMATOR");
ROUTE222->setToField("set_rotation");
ROUTE222->setToNode("boxman_humanoid_root");
group->addChildren(*ROUTE222);

CROUTE* ROUTE223 = new CROUTE();
ROUTE223->setFromField("l_hip_rotation_changed");
ROUTE223->setFromNode("ANIMATOR");
ROUTE223->setToField("set_rotation");
ROUTE223->setToNode("boxman_l_hip");
group->addChildren(*ROUTE223);

CROUTE* ROUTE224 = new CROUTE();
ROUTE224->setFromField("l_knee_rotation_changed");
ROUTE224->setFromNode("ANIMATOR");
ROUTE224->setToField("set_rotation");
ROUTE224->setToNode("boxman_l_knee");
group->addChildren(*ROUTE224);

CROUTE* ROUTE225 = new CROUTE();
ROUTE225->setFromField("l_ankle_rotation_changed");
ROUTE225->setFromNode("ANIMATOR");
ROUTE225->setToField("set_rotation");
ROUTE225->setToNode("boxman_l_ankle");
group->addChildren(*ROUTE225);

CROUTE* ROUTE226 = new CROUTE();
ROUTE226->setFromField("l_midtarsal_rotation_changed");
ROUTE226->setFromNode("ANIMATOR");
ROUTE226->setToField("set_rotation");
ROUTE226->setToNode("boxman_l_midtarsal");
group->addChildren(*ROUTE226);

CROUTE* ROUTE227 = new CROUTE();
ROUTE227->setFromField("r_hip_rotation_changed");
ROUTE227->setFromNode("ANIMATOR");
ROUTE227->setToField("set_rotation");
ROUTE227->setToNode("boxman_r_hip");
group->addChildren(*ROUTE227);

CROUTE* ROUTE228 = new CROUTE();
ROUTE228->setFromField("r_knee_rotation_changed");
ROUTE228->setFromNode("ANIMATOR");
ROUTE228->setToField("set_rotation");
ROUTE228->setToNode("boxman_r_knee");
group->addChildren(*ROUTE228);

CROUTE* ROUTE229 = new CROUTE();
ROUTE229->setFromField("r_ankle_rotation_changed");
ROUTE229->setFromNode("ANIMATOR");
ROUTE229->setToField("set_rotation");
ROUTE229->setToNode("boxman_r_ankle");
group->addChildren(*ROUTE229);

CROUTE* ROUTE230 = new CROUTE();
ROUTE230->setFromField("r_midtarsal_rotation_changed");
ROUTE230->setFromNode("ANIMATOR");
ROUTE230->setToField("set_rotation");
ROUTE230->setToNode("boxman_r_midtarsal");
group->addChildren(*ROUTE230);

CROUTE* ROUTE231 = new CROUTE();
ROUTE231->setFromField("vl5_rotation_changed");
ROUTE231->setFromNode("ANIMATOR");
ROUTE231->setToField("set_rotation");
ROUTE231->setToNode("boxman_vl5");
group->addChildren(*ROUTE231);

CROUTE* ROUTE232 = new CROUTE();
ROUTE232->setFromField("skullbase_rotation_changed");
ROUTE232->setFromNode("ANIMATOR");
ROUTE232->setToField("set_rotation");
ROUTE232->setToNode("boxman_skullbase");
group->addChildren(*ROUTE232);

CROUTE* ROUTE233 = new CROUTE();
ROUTE233->setFromField("l_shoulder_rotation_changed");
ROUTE233->setFromNode("ANIMATOR");
ROUTE233->setToField("set_rotation");
ROUTE233->setToNode("boxman_l_shoulder");
group->addChildren(*ROUTE233);

CROUTE* ROUTE234 = new CROUTE();
ROUTE234->setFromField("l_elbow_rotation_changed");
ROUTE234->setFromNode("ANIMATOR");
ROUTE234->setToField("set_rotation");
ROUTE234->setToNode("boxman_l_elbow");
group->addChildren(*ROUTE234);

CROUTE* ROUTE235 = new CROUTE();
ROUTE235->setFromField("l_wrist_rotation_changed");
ROUTE235->setFromNode("ANIMATOR");
ROUTE235->setToField("set_rotation");
ROUTE235->setToNode("boxman_l_wrist");
group->addChildren(*ROUTE235);

CROUTE* ROUTE236 = new CROUTE();
ROUTE236->setFromField("r_shoulder_rotation_changed");
ROUTE236->setFromNode("ANIMATOR");
ROUTE236->setToField("set_rotation");
ROUTE236->setToNode("boxman_r_shoulder");
group->addChildren(*ROUTE236);

CROUTE* ROUTE237 = new CROUTE();
ROUTE237->setFromField("r_elbow_rotation_changed");
ROUTE237->setFromNode("ANIMATOR");
ROUTE237->setToField("set_rotation");
ROUTE237->setToNode("boxman_r_elbow");
group->addChildren(*ROUTE237);

CROUTE* ROUTE238 = new CROUTE();
ROUTE238->setFromField("r_wrist_rotation_changed");
ROUTE238->setFromNode("ANIMATOR");
ROUTE238->setToField("set_rotation");
ROUTE238->setToNode("boxman_r_wrist");
group->addChildren(*ROUTE238);

CScript* Script239 = (CScript *)(m_pScene.createNode("Script"));
Script239->setDEF("ENGINE");
Script239->setDirectOutput(True);
Script239->setUrl(new CString[2]{"BoxMan.js","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan.js"}, 2);
Cfield* field240 = new Cfield();
field240->setName("update");
field240->setAccessType("inputOnly");
field240->setType("SFRotation");
Script239->addField(*field240);

Cfield* field241 = new Cfield();
field241->setName("humanoid");
field241->setAccessType("initializeOnly");
field241->setType("SFNode");
CHAnimHumanoid* HAnimHumanoid242 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid242->setUSE("boxman_Humanoid");
field241->addChildren(*HAnimHumanoid242);

Script239->addField(*field241);

Cfield* field243 = new Cfield();
field243->setName("coordList");
field243->setAccessType("initializeOnly");
field243->setType("MFVec3f");
Script239->addField(*field243);

Cfield* field244 = new Cfield();
field244->setName("joint");
field244->setAccessType("initializeOnly");
field244->setType("SFNode");
//initialization node (if any) goes here
Script239->addField(*field244);

Cfield* field245 = new Cfield();
field245->setName("translation");
field245->setAccessType("initializeOnly");
field245->setType("SFVec3f");
field245->setValue("0 0 0");
Script239->addField(*field245);

Cfield* field246 = new Cfield();
field246->setName("rotation");
field246->setAccessType("initializeOnly");
field246->setType("SFRotation");
field246->setValue("1 0 0 0");
Script239->addField(*field246);

Cfield* field247 = new Cfield();
field247->setName("scale");
field247->setAccessType("initializeOnly");
field247->setType("SFVec3f");
field247->setValue("1 1 1");
Script239->addField(*field247);

group->addChildren(*Script239);

//Trigger calculation after each animation change
//<ROUTE fromField='rotation_changed' fromNode='boxman_r_wrist' toField='update' toNode='ENGINE'/>
X3D0->setScene(*Scene34);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

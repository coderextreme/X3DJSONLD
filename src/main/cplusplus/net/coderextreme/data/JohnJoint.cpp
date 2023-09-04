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
meta2->setContent("JohnJoint.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("identifier");
meta3->setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("An attempt at a standard LOA-4 skeleton");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("generator");
meta5->setContent("h6.pl");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("creator");
meta6->setContent("John Carlson");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("created");
meta7->setContent("12 January 2023");
head1->addMeta(*meta7);

Ccomponent* component8 = new Ccomponent();
component8->setName("HAnim");
component8->setLevel(1);
head1->addComponent(*component8);

X3D0->setHead(*head1);

CScene* Scene9 = new CScene();
CTransform* Transform10 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape11 = (CShape *)(m_pScene.createNode("Shape"));
Shape11->setDEF("AxisLinesShape");
CIndexedLineSet* IndexedLineSet12 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet12->setColorPerVertex(False);
IndexedLineSet12->setColorIndex(new int[3]{0,1,2});
IndexedLineSet12->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
CColor* Color13 = (CColor *)(m_pScene.createNode("Color"));
Color13->setColor(new float[9]{1,0,0,0,0.6,0,0,0,1});
IndexedLineSet12->setColor(*Color13);

CCoordinate* Coordinate14 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate14->setPoint(new float[12]{0,0,0,0.1,0,0,0,0.1,0,0,0,0.1});
IndexedLineSet12->setCoord(*Coordinate14);

Shape11->setGeometry(IndexedLineSet12);

Transform10->addChild(*Shape11);

group->addChildren(*Transform10);

CGroup* Group15 = (CGroup *)(m_pScene.createNode("Group"));
CTransform* Transform16 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform17 = (CTransform *)(m_pScene.createNode("Transform"));
Transform17->setTranslation(new float[3]{0,2.1,0});
CShape* Shape18 = (CShape *)(m_pScene.createNode("Shape"));
Shape18->setDEF("HAnimJointShape");
CAppearance* Appearance19 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material20 = (CMaterial *)(m_pScene.createNode("Material"));
Material20->setDEF("HAnimJointMaterial");
Material20->setDiffuseColor(new float[3]{0,0,0.8});
Material20->setTransparency(0.3);
Appearance19->setMaterial(*Material20);

Shape18->setAppearance(*Appearance19);

CSphere* Sphere21 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere21->setRadius(0.02);
Shape18->setGeometry(Sphere21);

Transform17->addChild(*Shape18);

Transform16->addChildren(*Transform17);

CTransform* Transform22 = (CTransform *)(m_pScene.createNode("Transform"));
Transform22->setTranslation(new float[3]{0,2.05,0});
CShape* Shape23 = (CShape *)(m_pScene.createNode("Shape"));
Shape23->setDEF("HAnimSegmentLine");
CLineSet* LineSet24 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet24->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA25 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA25->setDEF("HAnimSegmentLineColorRGBA");
ColorRGBA25->setColor(new float[8]{1,1,0,1,1,1,0,0.1});
LineSet24->setColor(*ColorRGBA25);

CCoordinate* Coordinate26 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate26->setPoint(new float[6]{-0.05,0,0,0.05,0,0});
LineSet24->setCoord(*Coordinate26);

Shape23->setGeometry(LineSet24);

Transform22->addChild(*Shape23);

Transform16->addChildren(*Transform22);

Group15->addChildren(*Transform16);

group->addChildren(*Group15);

CNavigationInfo* NavigationInfo27 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo27->setSpeed(1.5);
group->addChildren(*NavigationInfo27);

CViewpoint* Viewpoint28 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint28->setDescription("default");
group->addChildren(*Viewpoint28);

CHAnimHumanoid* HAnimHumanoid29 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid29->setDEF("hanim_HAnim");
HAnimHumanoid29->setVersion("2.0");
HAnimHumanoid29->setName("HAnim");
HAnimHumanoid29->setInfo(new CString[1]{"humanoidVersion=2.0"}, 1);
CHAnimJoint* HAnimJoint30 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint30->setDEF("hanim_humanoid_root");
HAnimJoint30->setName("humanoid_root");
HAnimJoint30->setCenter(new float[3]{0,0.824,0.0277});
CHAnimJoint* HAnimJoint31 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint31->setDEF("hanim_sacroiliac");
HAnimJoint31->setName("sacroiliac");
HAnimJoint31->setCenter(new float[3]{0,0.9149,0.0016});
CHAnimJoint* HAnimJoint32 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint32->setDEF("hanim_l_hip");
HAnimJoint32->setName("l_hip");
HAnimJoint32->setCenter(new float[3]{0.0961,0.9124,-0.0001});
CHAnimJoint* HAnimJoint33 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint33->setDEF("hanim_l_knee");
HAnimJoint33->setName("l_knee");
HAnimJoint33->setCenter(new float[3]{0.104,0.4867,0.0308});
CHAnimJoint* HAnimJoint34 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint34->setDEF("hanim_l_talocrural");
HAnimJoint34->setName("l_talocrural");
HAnimJoint34->setCenter(new float[3]{0.1101,0.0656,-0.0736});
CHAnimJoint* HAnimJoint35 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint35->setDEF("hanim_l_talocalcaneonavicular");
HAnimJoint35->setName("l_talocalcaneonavicular");
HAnimJoint35->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint36 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint36->setDEF("hanim_l_cuneonavicular_1");
HAnimJoint36->setName("l_cuneonavicular_1");
HAnimJoint36->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint37 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint37->setDEF("hanim_l_tarsometatarsal_1");
HAnimJoint37->setName("l_tarsometatarsal_1");
HAnimJoint37->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint38 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint38->setDEF("hanim_l_metatarsophalangeal_1");
HAnimJoint38->setName("l_metatarsophalangeal_1");
HAnimJoint38->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint39 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint39->setDEF("hanim_l_tarsal_interphalangeal_1");
HAnimJoint39->setName("l_tarsal_interphalangeal_1");
HAnimJoint39->setCenter(new float[3]{0,1,0});
HAnimJoint38->addChildren(*HAnimJoint39);

HAnimJoint37->addChildren(*HAnimJoint38);

HAnimJoint36->addChildren(*HAnimJoint37);

HAnimJoint35->addChildren(*HAnimJoint36);

CHAnimJoint* HAnimJoint40 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint40->setDEF("hanim_l_cuneonavicular_2");
HAnimJoint40->setName("l_cuneonavicular_2");
HAnimJoint40->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint41 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint41->setDEF("hanim_l_tarsometatarsal_2");
HAnimJoint41->setName("l_tarsometatarsal_2");
HAnimJoint41->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint42 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint42->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint42->setName("l_metatarsophalangeal_2");
HAnimJoint42->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint43 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint43->setDEF("hanim_l_tarsal_proximal_interphalangeal_1");
HAnimJoint43->setName("l_tarsal_proximal_interphalangeal_2");
HAnimJoint43->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint44 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint44->setDEF("hanim_l_tarsal_distal_interphalangeal_1");
HAnimJoint44->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint44->setCenter(new float[3]{0,1,0});
HAnimJoint43->addChildren(*HAnimJoint44);

HAnimJoint42->addChildren(*HAnimJoint43);

HAnimJoint41->addChildren(*HAnimJoint42);

HAnimJoint40->addChildren(*HAnimJoint41);

HAnimJoint35->addChildren(*HAnimJoint40);

CHAnimJoint* HAnimJoint45 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint45->setDEF("hanim_l_cuneonavicular_3");
HAnimJoint45->setName("l_cuneonavicular_3");
HAnimJoint45->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint46 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint46->setDEF("hanim_l_tarsometatarsal_3");
HAnimJoint46->setName("l_tarsometatarsal_3");
HAnimJoint46->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint47 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint47->setDEF("hanim_l_metatarsophalangeal_3");
HAnimJoint47->setName("l_metatarsophalangeal_3");
HAnimJoint47->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint48 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint48->setDEF("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimJoint48->setName("l_tarsal_proximal_interphalangeal_3");
HAnimJoint48->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint49 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint49->setDEF("hanim_l_tarsal_distal_interphalangeal_2");
HAnimJoint49->setName("l_tarsal_distal_interphalangeal_3");
HAnimJoint49->setCenter(new float[3]{0,1,0});
HAnimJoint48->addChildren(*HAnimJoint49);

HAnimJoint47->addChildren(*HAnimJoint48);

HAnimJoint46->addChildren(*HAnimJoint47);

HAnimJoint45->addChildren(*HAnimJoint46);

HAnimJoint35->addChildren(*HAnimJoint45);

HAnimJoint34->addChildren(*HAnimJoint35);

CHAnimJoint* HAnimJoint50 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint50->setDEF("hanim_l_calcaneocuboid");
HAnimJoint50->setName("l_calcaneocuboid");
HAnimJoint50->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint51 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint51->setDEF("hanim_l_transversetarsal");
HAnimJoint51->setName("l_transversetarsal");
HAnimJoint51->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint52 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint52->setDEF("hanim_l_tarsometatarsal_4");
HAnimJoint52->setName("l_tarsometatarsal_4");
HAnimJoint52->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint53 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint53->setDEF("hanim_l_metatarsophalangeal_4");
HAnimJoint53->setName("l_metatarsophalangeal_4");
HAnimJoint53->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint54 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint54->setDEF("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimJoint54->setName("l_tarsal_proximal_interphalangeal_4");
HAnimJoint54->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint55 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint55->setDEF("hanim_l_tarsal_distal_interphalangeal_3");
HAnimJoint55->setName("l_tarsal_distal_interphalangeal_4");
HAnimJoint55->setCenter(new float[3]{0,1,0});
HAnimJoint54->addChildren(*HAnimJoint55);

HAnimJoint53->addChildren(*HAnimJoint54);

HAnimJoint52->addChildren(*HAnimJoint53);

HAnimJoint51->addChildren(*HAnimJoint52);

CHAnimJoint* HAnimJoint56 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint56->setDEF("hanim_l_tarsometatarsal_5");
HAnimJoint56->setName("l_tarsometatarsal_5");
HAnimJoint56->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint57 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint57->setDEF("hanim_l_metatarsophalangeal_5");
HAnimJoint57->setName("l_metatarsophalangeal_5");
HAnimJoint57->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint58 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint58->setDEF("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimJoint58->setName("l_tarsal_proximal_interphalangeal_5");
HAnimJoint58->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint59 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint59->setDEF("hanim_l_tarsal_distal_interphalangeal_4");
HAnimJoint59->setName("l_tarsal_distal_interphalangeal_5");
HAnimJoint59->setCenter(new float[3]{0,1,0});
HAnimJoint58->addChildren(*HAnimJoint59);

HAnimJoint57->addChildren(*HAnimJoint58);

HAnimJoint56->addChildren(*HAnimJoint57);

HAnimJoint51->addChildren(*HAnimJoint56);

HAnimJoint50->addChildren(*HAnimJoint51);

HAnimJoint34->addChildren(*HAnimJoint50);

HAnimJoint33->addChildren(*HAnimJoint34);

HAnimJoint32->addChildren(*HAnimJoint33);

HAnimJoint31->addChildren(*HAnimJoint32);

CHAnimJoint* HAnimJoint60 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint60->setDEF("hanim_r_hip");
HAnimJoint60->setName("r_hip");
HAnimJoint60->setCenter(new float[3]{-0.095,0.9171,0.0029});
CHAnimJoint* HAnimJoint61 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint61->setDEF("hanim_r_knee");
HAnimJoint61->setName("r_knee");
HAnimJoint61->setCenter(new float[3]{-0.0867,0.4913,0.0318});
CHAnimJoint* HAnimJoint62 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint62->setDEF("hanim_r_talocrural");
HAnimJoint62->setName("r_talocrural");
HAnimJoint62->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
CHAnimJoint* HAnimJoint63 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint63->setDEF("hanim_r_talocalcaneonavicular");
HAnimJoint63->setName("r_talocalcaneonavicular");
HAnimJoint63->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint64 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint64->setDEF("hanim_r_cuneonavicular_1");
HAnimJoint64->setName("r_cuneonavicular_1");
HAnimJoint64->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint65 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint65->setDEF("hanim_r_tarsometatarsal_1");
HAnimJoint65->setName("r_tarsometatarsal_1");
HAnimJoint65->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint66 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint66->setDEF("hanim_r_metatarsophalangeal_1");
HAnimJoint66->setName("r_metatarsophalangeal_1");
HAnimJoint66->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint67 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint67->setDEF("hanim_r_tarsal_interphalangeal_1");
HAnimJoint67->setName("r_tarsal_interphalangeal_1");
HAnimJoint67->setCenter(new float[3]{0,1,0});
HAnimJoint66->addChildren(*HAnimJoint67);

HAnimJoint65->addChildren(*HAnimJoint66);

HAnimJoint64->addChildren(*HAnimJoint65);

HAnimJoint63->addChildren(*HAnimJoint64);

CHAnimJoint* HAnimJoint68 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint68->setDEF("hanim_r_cuneonavicular_2");
HAnimJoint68->setName("r_cuneonavicular_2");
HAnimJoint68->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint69 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint69->setDEF("hanim_r_tarsometatarsal_2");
HAnimJoint69->setName("r_tarsometatarsal_2");
HAnimJoint69->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint70 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint70->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint70->setName("r_metatarsophalangeal_2");
HAnimJoint70->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint71 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint71->setDEF("hanim_r_tarsal_proximal_interphalangeal_1");
HAnimJoint71->setName("r_tarsal_proximal_interphalangeal_2");
HAnimJoint71->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint72 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint72->setDEF("hanim_r_tarsal_distal_interphalangeal_1");
HAnimJoint72->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint72->setCenter(new float[3]{0,1,0});
HAnimJoint71->addChildren(*HAnimJoint72);

HAnimJoint70->addChildren(*HAnimJoint71);

HAnimJoint69->addChildren(*HAnimJoint70);

HAnimJoint68->addChildren(*HAnimJoint69);

HAnimJoint63->addChildren(*HAnimJoint68);

CHAnimJoint* HAnimJoint73 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint73->setDEF("hanim_r_cuneonavicular_3");
HAnimJoint73->setName("r_cuneonavicular_3");
HAnimJoint73->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint74 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint74->setDEF("hanim_r_tarsometatarsal_3");
HAnimJoint74->setName("r_tarsometatarsal_3");
HAnimJoint74->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint75 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint75->setDEF("hanim_r_metatarsophalangeal_3");
HAnimJoint75->setName("r_metatarsophalangeal_3");
HAnimJoint75->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint76 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint76->setDEF("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimJoint76->setName("r_tarsal_proximal_interphalangeal_3");
HAnimJoint76->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint77 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint77->setDEF("hanim_r_tarsal_distal_interphalangeal_2");
HAnimJoint77->setName("r_tarsal_distal_interphalangeal_3");
HAnimJoint77->setCenter(new float[3]{0,1,0});
HAnimJoint76->addChildren(*HAnimJoint77);

HAnimJoint75->addChildren(*HAnimJoint76);

HAnimJoint74->addChildren(*HAnimJoint75);

HAnimJoint73->addChildren(*HAnimJoint74);

HAnimJoint63->addChildren(*HAnimJoint73);

HAnimJoint62->addChildren(*HAnimJoint63);

CHAnimJoint* HAnimJoint78 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint78->setDEF("hanim_r_calcaneocuboid");
HAnimJoint78->setName("r_calcaneocuboid");
HAnimJoint78->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint79 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint79->setDEF("hanim_r_transversetarsal");
HAnimJoint79->setName("r_transversetarsal");
HAnimJoint79->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint80 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint80->setDEF("hanim_r_tarsometatarsal_4");
HAnimJoint80->setName("r_tarsometatarsal_4");
HAnimJoint80->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint81 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint81->setDEF("hanim_r_metatarsophalangeal_4");
HAnimJoint81->setName("r_metatarsophalangeal_4");
HAnimJoint81->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint82 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint82->setDEF("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimJoint82->setName("r_tarsal_proximal_interphalangeal_4");
HAnimJoint82->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint83 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint83->setDEF("hanim_r_tarsal_distal_interphalangeal_3");
HAnimJoint83->setName("r_tarsal_distal_interphalangeal_4");
HAnimJoint83->setCenter(new float[3]{0,1,0});
HAnimJoint82->addChildren(*HAnimJoint83);

HAnimJoint81->addChildren(*HAnimJoint82);

HAnimJoint80->addChildren(*HAnimJoint81);

HAnimJoint79->addChildren(*HAnimJoint80);

CHAnimJoint* HAnimJoint84 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint84->setDEF("hanim_r_tarsometatarsal_5");
HAnimJoint84->setName("r_tarsometatarsal_5");
HAnimJoint84->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint85 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint85->setDEF("hanim_r_metatarsophalangeal_5");
HAnimJoint85->setName("r_metatarsophalangeal_5");
HAnimJoint85->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint86 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint86->setDEF("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimJoint86->setName("r_tarsal_proximal_interphalangeal_5");
HAnimJoint86->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint87 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint87->setDEF("hanim_r_tarsal_distal_interphalangeal_4");
HAnimJoint87->setName("r_tarsal_distal_interphalangeal_5");
HAnimJoint87->setCenter(new float[3]{0,1,0});
HAnimJoint86->addChildren(*HAnimJoint87);

HAnimJoint85->addChildren(*HAnimJoint86);

HAnimJoint84->addChildren(*HAnimJoint85);

HAnimJoint79->addChildren(*HAnimJoint84);

HAnimJoint78->addChildren(*HAnimJoint79);

HAnimJoint62->addChildren(*HAnimJoint78);

HAnimJoint61->addChildren(*HAnimJoint62);

HAnimJoint60->addChildren(*HAnimJoint61);

HAnimJoint31->addChildren(*HAnimJoint60);

HAnimJoint30->addChildren(*HAnimJoint31);

CHAnimJoint* HAnimJoint88 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint88->setDEF("hanim_vl5");
HAnimJoint88->setName("vl5");
HAnimJoint88->setCenter(new float[3]{0.0028,1.0568,-0.0776});
CHAnimJoint* HAnimJoint89 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint89->setDEF("hanim_vl4");
HAnimJoint89->setName("vl4");
HAnimJoint89->setCenter(new float[3]{0.0035,1.0925,-0.0787});
CHAnimJoint* HAnimJoint90 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint90->setDEF("hanim_vl3");
HAnimJoint90->setName("vl3");
HAnimJoint90->setCenter(new float[3]{0.0041,1.1276,-0.0796});
CHAnimJoint* HAnimJoint91 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint91->setDEF("hanim_vl2");
HAnimJoint91->setName("vl2");
HAnimJoint91->setCenter(new float[3]{0.0045,1.1546,-0.08});
CHAnimJoint* HAnimJoint92 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint92->setDEF("hanim_vl1");
HAnimJoint92->setName("vl1");
HAnimJoint92->setCenter(new float[3]{0.0048,1.1912,-0.0805});
CHAnimJoint* HAnimJoint93 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint93->setDEF("hanim_vt12");
HAnimJoint93->setName("vt12");
HAnimJoint93->setCenter(new float[3]{0.0051,1.2278,-0.0808});
CHAnimJoint* HAnimJoint94 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint94->setDEF("hanim_vt11");
HAnimJoint94->setName("vt11");
HAnimJoint94->setCenter(new float[3]{0.0053,1.2679,-0.081});
CHAnimJoint* HAnimJoint95 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint95->setDEF("hanim_vt10");
HAnimJoint95->setName("vt10");
HAnimJoint95->setCenter(new float[3]{0.0056,1.2848,-0.0822});
CHAnimJoint* HAnimJoint96 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint96->setDEF("hanim_vt9");
HAnimJoint96->setName("vt9");
HAnimJoint96->setCenter(new float[3]{0.0057,1.3126,-0.0838});
CHAnimJoint* HAnimJoint97 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint97->setDEF("hanim_vt8");
HAnimJoint97->setName("vt8");
HAnimJoint97->setCenter(new float[3]{0.0057,1.3382,-0.0845});
CHAnimJoint* HAnimJoint98 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint98->setDEF("hanim_vt7");
HAnimJoint98->setName("vt7");
HAnimJoint98->setCenter(new float[3]{0.0058,1.3625,-0.0833});
CHAnimJoint* HAnimJoint99 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint99->setDEF("hanim_vt6");
HAnimJoint99->setName("vt6");
HAnimJoint99->setCenter(new float[3]{0.0059,1.3866,-0.08});
CHAnimJoint* HAnimJoint100 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint100->setDEF("hanim_vt5");
HAnimJoint100->setName("vt5");
HAnimJoint100->setCenter(new float[3]{0.006,1.4102,-0.0745});
CHAnimJoint* HAnimJoint101 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint101->setDEF("hanim_vt4");
HAnimJoint101->setName("vt4");
HAnimJoint101->setCenter(new float[3]{0.0061,1.432,-0.0675});
CHAnimJoint* HAnimJoint102 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint102->setDEF("hanim_vt3");
HAnimJoint102->setName("vt3");
HAnimJoint102->setCenter(new float[3]{0.0062,1.4583,-0.057});
CHAnimJoint* HAnimJoint103 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint103->setDEF("hanim_vt2");
HAnimJoint103->setName("vt2");
HAnimJoint103->setCenter(new float[3]{0.0063,1.4761,-0.0484});
CHAnimJoint* HAnimJoint104 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint104->setDEF("hanim_vt1");
HAnimJoint104->setName("vt1");
HAnimJoint104->setCenter(new float[3]{0.0065,1.4951,-0.0387});
CHAnimJoint* HAnimJoint105 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint105->setDEF("hanim_vc7");
HAnimJoint105->setName("vc7");
HAnimJoint105->setCenter(new float[3]{0.0066,1.5132,-0.0301});
CHAnimJoint* HAnimJoint106 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint106->setDEF("hanim_vc6");
HAnimJoint106->setName("vc6");
HAnimJoint106->setCenter(new float[3]{0.0066,1.5357,-0.0143});
CHAnimJoint* HAnimJoint107 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint107->setDEF("hanim_vc5");
HAnimJoint107->setName("vc5");
HAnimJoint107->setCenter(new float[3]{0.0066,1.552,-0.0082});
CHAnimJoint* HAnimJoint108 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint108->setDEF("hanim_vc4");
HAnimJoint108->setName("vc4");
HAnimJoint108->setCenter(new float[3]{0.0066,1.5662,-0.0084});
CHAnimJoint* HAnimJoint109 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint109->setDEF("hanim_vc3");
HAnimJoint109->setName("vc3");
HAnimJoint109->setCenter(new float[3]{0.0066,1.58,-0.0103});
CHAnimJoint* HAnimJoint110 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint110->setDEF("hanim_vc2");
HAnimJoint110->setName("vc2");
HAnimJoint110->setCenter(new float[3]{0.0066,1.5928,-0.0103});
CHAnimJoint* HAnimJoint111 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint111->setDEF("hanim_vc1");
HAnimJoint111->setName("vc1");
HAnimJoint111->setCenter(new float[3]{0.0066,1.6144,-0.0034});
CHAnimJoint* HAnimJoint112 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint112->setDEF("hanim_skullbase");
HAnimJoint112->setName("skullbase");
HAnimJoint112->setCenter(new float[3]{0.0044,1.6209,0.0236});
CHAnimJoint* HAnimJoint113 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint113->setDEF("hanim_l_eyelid_joint");
HAnimJoint113->setName("l_eyelid_joint");
HAnimJoint113->setCenter(new float[3]{0,1,0});
HAnimJoint112->addChildren(*HAnimJoint113);

CHAnimJoint* HAnimJoint114 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint114->setDEF("hanim_r_eyelid_joint");
HAnimJoint114->setName("r_eyelid_joint");
HAnimJoint114->setCenter(new float[3]{0,1,0});
HAnimJoint112->addChildren(*HAnimJoint114);

CHAnimJoint* HAnimJoint115 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint115->setDEF("hanim_l_eyeball_joint");
HAnimJoint115->setName("l_eyeball_joint");
HAnimJoint115->setCenter(new float[3]{0,1,0});
HAnimJoint112->addChildren(*HAnimJoint115);

CHAnimJoint* HAnimJoint116 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint116->setDEF("hanim_r_eyeball_joint");
HAnimJoint116->setName("r_eyeball_joint");
HAnimJoint116->setCenter(new float[3]{0,1,0});
HAnimJoint112->addChildren(*HAnimJoint116);

CHAnimJoint* HAnimJoint117 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint117->setDEF("hanim_l_eyebrow_joint");
HAnimJoint117->setName("l_eyebrow_joint");
HAnimJoint117->setCenter(new float[3]{0,1,0});
HAnimJoint112->addChildren(*HAnimJoint117);

CHAnimJoint* HAnimJoint118 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint118->setDEF("hanim_r_eyebrow_joint");
HAnimJoint118->setName("r_eyebrow_joint");
HAnimJoint118->setCenter(new float[3]{0,1,0});
HAnimJoint112->addChildren(*HAnimJoint118);

CHAnimJoint* HAnimJoint119 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint119->setDEF("hanim_temporomandibular");
HAnimJoint119->setName("temporomandibular");
HAnimJoint119->setCenter(new float[3]{0,1,0});
HAnimJoint112->addChildren(*HAnimJoint119);

HAnimJoint111->addChildren(*HAnimJoint112);

HAnimJoint110->addChildren(*HAnimJoint111);

HAnimJoint109->addChildren(*HAnimJoint110);

HAnimJoint108->addChildren(*HAnimJoint109);

HAnimJoint107->addChildren(*HAnimJoint108);

HAnimJoint106->addChildren(*HAnimJoint107);

HAnimJoint105->addChildren(*HAnimJoint106);

HAnimJoint104->addChildren(*HAnimJoint105);

CHAnimJoint* HAnimJoint120 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint120->setDEF("hanim_l_sternoclavicular");
HAnimJoint120->setName("l_sternoclavicular");
HAnimJoint120->setCenter(new float[3]{0.082,1.4488,-0.0353});
CHAnimJoint* HAnimJoint121 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint121->setDEF("hanim_l_acromioclavicular");
HAnimJoint121->setName("l_acromioclavicular");
HAnimJoint121->setCenter(new float[3]{0.0962,1.4269,-0.0424});
CHAnimJoint* HAnimJoint122 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint122->setDEF("hanim_l_shoulder");
HAnimJoint122->setName("l_shoulder");
HAnimJoint122->setCenter(new float[3]{0.2029,1.4376,-0.0387});
CHAnimJoint* HAnimJoint123 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint123->setDEF("hanim_l_elbow");
HAnimJoint123->setName("l_elbow");
HAnimJoint123->setCenter(new float[3]{0.2014,1.1357,-0.0682});
CHAnimJoint* HAnimJoint124 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint124->setDEF("hanim_l_radiocarpal");
HAnimJoint124->setName("l_radiocarpal");
HAnimJoint124->setCenter(new float[3]{0.1984,0.8663,-0.0583});
CHAnimJoint* HAnimJoint125 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint125->setDEF("hanim_l_midcarpal_1");
HAnimJoint125->setName("l_midcarpal_1");
HAnimJoint125->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint126 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint126->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint126->setName("l_carpometacarpal_1");
HAnimJoint126->setCenter(new float[3]{0.1924,0.8472,-0.0534});
CHAnimJoint* HAnimJoint127 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint127->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint127->setName("l_metacarpophalangeal_1");
HAnimJoint127->setCenter(new float[3]{0.1951,0.8226,0.0246});
CHAnimJoint* HAnimJoint128 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint128->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint128->setName("l_carpal_interphalangeal_1");
HAnimJoint128->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint127->addChildren(*HAnimJoint128);

HAnimJoint126->addChildren(*HAnimJoint127);

HAnimJoint125->addChildren(*HAnimJoint126);

HAnimJoint124->addChildren(*HAnimJoint125);

CHAnimJoint* HAnimJoint129 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint129->setDEF("hanim_l_midcarpal_2");
HAnimJoint129->setName("l_midcarpal_2");
HAnimJoint129->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint130 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint130->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint130->setName("l_carpometacarpal_2");
HAnimJoint130->setCenter(new float[3]{0.1983,0.8024,-0.028});
CHAnimJoint* HAnimJoint131 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint131->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint131->setName("l_metacarpophalangeal_2");
HAnimJoint131->setCenter(new float[3]{0.1983,0.7815,-0.028});
CHAnimJoint* HAnimJoint132 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint132->setDEF("hanim_l_carpal_proximal_interphalangeal_1");
HAnimJoint132->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint132->setCenter(new float[3]{0.2017,0.7363,-0.0248});
CHAnimJoint* HAnimJoint133 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint133->setDEF("hanim_l_carpal_distal_interphalangeal_1");
HAnimJoint133->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint133->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint132->addChildren(*HAnimJoint133);

HAnimJoint131->addChildren(*HAnimJoint132);

HAnimJoint130->addChildren(*HAnimJoint131);

HAnimJoint129->addChildren(*HAnimJoint130);

HAnimJoint124->addChildren(*HAnimJoint129);

CHAnimJoint* HAnimJoint134 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint134->setDEF("hanim_l_midcarpal_3");
HAnimJoint134->setName("l_midcarpal_3");
HAnimJoint134->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint135 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint135->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint135->setName("l_carpometacarpal_3");
HAnimJoint135->setCenter(new float[3]{0.1987,0.8029,-0.053});
CHAnimJoint* HAnimJoint136 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint136->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint136->setName("l_metacarpophalangeal_3");
HAnimJoint136->setCenter(new float[3]{0.1987,0.7818,-0.053});
CHAnimJoint* HAnimJoint137 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint137->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint137->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint137->setCenter(new float[3]{0.2013,0.7273,-0.0503});
CHAnimJoint* HAnimJoint138 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint138->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint138->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint138->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint137->addChildren(*HAnimJoint138);

HAnimJoint136->addChildren(*HAnimJoint137);

HAnimJoint135->addChildren(*HAnimJoint136);

HAnimJoint134->addChildren(*HAnimJoint135);

HAnimJoint124->addChildren(*HAnimJoint134);

CHAnimJoint* HAnimJoint139 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint139->setDEF("hanim_l_midcarpal_4_1");
HAnimJoint139->setName("l_midcarpal_4_5");
HAnimJoint139->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint140 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint140->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint140->setName("l_carpometacarpal_4");
HAnimJoint140->setCenter(new float[3]{0.1956,0.8019,-0.0794});
CHAnimJoint* HAnimJoint141 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint141->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint141->setName("l_metacarpophalangeal_4");
HAnimJoint141->setCenter(new float[3]{0.1956,0.7815,-0.0794});
CHAnimJoint* HAnimJoint142 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint142->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint142->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint142->setCenter(new float[3]{0.1973,0.7287,-0.0777});
CHAnimJoint* HAnimJoint143 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint143->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint143->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint143->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint142->addChildren(*HAnimJoint143);

HAnimJoint141->addChildren(*HAnimJoint142);

HAnimJoint140->addChildren(*HAnimJoint141);

HAnimJoint139->addChildren(*HAnimJoint140);

CHAnimJoint* HAnimJoint144 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint144->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint144->setName("l_carpometacarpal_5");
HAnimJoint144->setCenter(new float[3]{0.1925,0.8066,-0.1036});
CHAnimJoint* HAnimJoint145 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint145->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint145->setName("l_metacarpophalangeal_5");
HAnimJoint145->setCenter(new float[3]{0.1925,0.7866,-0.1036});
CHAnimJoint* HAnimJoint146 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint146->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint146->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint146->setCenter(new float[3]{0.1938,0.7452,-0.1024});
CHAnimJoint* HAnimJoint147 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint147->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint147->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint147->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint146->addChildren(*HAnimJoint147);

HAnimJoint145->addChildren(*HAnimJoint146);

HAnimJoint144->addChildren(*HAnimJoint145);

HAnimJoint139->addChildren(*HAnimJoint144);

HAnimJoint124->addChildren(*HAnimJoint139);

HAnimJoint123->addChildren(*HAnimJoint124);

HAnimJoint122->addChildren(*HAnimJoint123);

HAnimJoint121->addChildren(*HAnimJoint122);

HAnimJoint120->addChildren(*HAnimJoint121);

HAnimJoint104->addChildren(*HAnimJoint120);

CHAnimJoint* HAnimJoint148 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint148->setDEF("hanim_r_sternoclavicular");
HAnimJoint148->setName("r_sternoclavicular");
HAnimJoint148->setCenter(new float[3]{-0.0694,1.46,-0.033});
CHAnimJoint* HAnimJoint149 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint149->setDEF("hanim_r_acromioclavicular");
HAnimJoint149->setName("r_acromioclavicular");
HAnimJoint149->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
CHAnimJoint* HAnimJoint150 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint150->setDEF("hanim_r_shoulder");
HAnimJoint150->setName("r_shoulder");
HAnimJoint150->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
CHAnimJoint* HAnimJoint151 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint151->setDEF("hanim_r_elbow");
HAnimJoint151->setName("r_elbow");
HAnimJoint151->setCenter(new float[3]{-0.1949,1.1388,-0.062});
CHAnimJoint* HAnimJoint152 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint152->setDEF("hanim_r_radiocarpal");
HAnimJoint152->setName("r_radiocarpal");
HAnimJoint152->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
CHAnimJoint* HAnimJoint153 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint153->setDEF("hanim_r_midcarpal_1");
HAnimJoint153->setName("r_midcarpal_1");
HAnimJoint153->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint154 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint154->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint154->setName("r_carpometacarpal_1");
HAnimJoint154->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
CHAnimJoint* HAnimJoint155 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint155->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint155->setName("r_metacarpophalangeal_1");
HAnimJoint155->setCenter(new float[3]{-0.1874,0.8256,0.0306});
CHAnimJoint* HAnimJoint156 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint156->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint156->setName("r_carpal_interphalangeal_1");
HAnimJoint156->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint155->addChildren(*HAnimJoint156);

HAnimJoint154->addChildren(*HAnimJoint155);

HAnimJoint153->addChildren(*HAnimJoint154);

HAnimJoint152->addChildren(*HAnimJoint153);

CHAnimJoint* HAnimJoint157 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint157->setDEF("hanim_r_midcarpal_2");
HAnimJoint157->setName("r_midcarpal_2");
HAnimJoint157->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint158 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint158->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint158->setName("r_carpometacarpal_2");
HAnimJoint158->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
CHAnimJoint* HAnimJoint159 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint159->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint159->setName("r_metacarpophalangeal_2");
HAnimJoint159->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
CHAnimJoint* HAnimJoint160 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint160->setDEF("hanim_r_carpal_proximal_interphalangeal_1");
HAnimJoint160->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint160->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
CHAnimJoint* HAnimJoint161 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint161->setDEF("hanim_r_carpal_distal_interphalangeal_1");
HAnimJoint161->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint161->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint160->addChildren(*HAnimJoint161);

HAnimJoint159->addChildren(*HAnimJoint160);

HAnimJoint158->addChildren(*HAnimJoint159);

HAnimJoint157->addChildren(*HAnimJoint158);

HAnimJoint152->addChildren(*HAnimJoint157);

CHAnimJoint* HAnimJoint162 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint162->setDEF("hanim_r_midcarpal_3");
HAnimJoint162->setName("r_midcarpal_3");
HAnimJoint162->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint163 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint163->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint163->setName("r_carpometacarpal_3");
HAnimJoint163->setCenter(new float[3]{-0.1972,0.806,-0.0468});
CHAnimJoint* HAnimJoint164 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint164->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint164->setName("r_metacarpophalangeal_3");
HAnimJoint164->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
CHAnimJoint* HAnimJoint165 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint165->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint165->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint165->setCenter(new float[3]{-0.195,0.7304,-0.0441});
CHAnimJoint* HAnimJoint166 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint166->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint166->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint166->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint165->addChildren(*HAnimJoint166);

HAnimJoint164->addChildren(*HAnimJoint165);

HAnimJoint163->addChildren(*HAnimJoint164);

HAnimJoint162->addChildren(*HAnimJoint163);

HAnimJoint152->addChildren(*HAnimJoint162);

CHAnimJoint* HAnimJoint167 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint167->setDEF("hanim_r_midcarpal_4_1");
HAnimJoint167->setName("r_midcarpal_4_5");
HAnimJoint167->setCenter(new float[3]{0,1,0});
CHAnimJoint* HAnimJoint168 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint168->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint168->setName("r_carpometacarpal_4");
HAnimJoint168->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
CHAnimJoint* HAnimJoint169 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint169->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint169->setName("r_metacarpophalangeal_4");
HAnimJoint169->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
CHAnimJoint* HAnimJoint170 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint170->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint170->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint170->setCenter(new float[3]{-0.192,0.7318,-0.0716});
CHAnimJoint* HAnimJoint171 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint171->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint171->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint171->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint170->addChildren(*HAnimJoint171);

HAnimJoint169->addChildren(*HAnimJoint170);

HAnimJoint168->addChildren(*HAnimJoint169);

HAnimJoint167->addChildren(*HAnimJoint168);

CHAnimJoint* HAnimJoint172 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint172->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint172->setName("r_carpometacarpal_5");
HAnimJoint172->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
CHAnimJoint* HAnimJoint173 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint173->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint173->setName("r_metacarpophalangeal_5");
HAnimJoint173->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
CHAnimJoint* HAnimJoint174 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint174->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint174->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint174->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
CHAnimJoint* HAnimJoint175 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint175->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint175->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint175->setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint174->addChildren(*HAnimJoint175);

HAnimJoint173->addChildren(*HAnimJoint174);

HAnimJoint172->addChildren(*HAnimJoint173);

HAnimJoint167->addChildren(*HAnimJoint172);

HAnimJoint152->addChildren(*HAnimJoint167);

HAnimJoint151->addChildren(*HAnimJoint152);

HAnimJoint150->addChildren(*HAnimJoint151);

HAnimJoint149->addChildren(*HAnimJoint150);

HAnimJoint148->addChildren(*HAnimJoint149);

HAnimJoint104->addChildren(*HAnimJoint148);

HAnimJoint103->addChildren(*HAnimJoint104);

HAnimJoint102->addChildren(*HAnimJoint103);

HAnimJoint101->addChildren(*HAnimJoint102);

HAnimJoint100->addChildren(*HAnimJoint101);

HAnimJoint99->addChildren(*HAnimJoint100);

HAnimJoint98->addChildren(*HAnimJoint99);

HAnimJoint97->addChildren(*HAnimJoint98);

HAnimJoint96->addChildren(*HAnimJoint97);

HAnimJoint95->addChildren(*HAnimJoint96);

HAnimJoint94->addChildren(*HAnimJoint95);

HAnimJoint93->addChildren(*HAnimJoint94);

HAnimJoint92->addChildren(*HAnimJoint93);

HAnimJoint91->addChildren(*HAnimJoint92);

HAnimJoint90->addChildren(*HAnimJoint91);

HAnimJoint89->addChildren(*HAnimJoint90);

HAnimJoint88->addChildren(*HAnimJoint89);

HAnimJoint30->addChildren(*HAnimJoint88);

HAnimHumanoid29->setSkeleton(*HAnimJoint30);

CHAnimJoint* HAnimJoint176 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint176->setUSE("hanim_humanoid_root");
HAnimHumanoid29->addJoints(*HAnimJoint176);

CHAnimJoint* HAnimJoint177 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint177->setUSE("hanim_sacroiliac");
HAnimHumanoid29->addJoints(*HAnimJoint177);

CHAnimJoint* HAnimJoint178 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint178->setUSE("hanim_l_hip");
HAnimHumanoid29->addJoints(*HAnimJoint178);

CHAnimJoint* HAnimJoint179 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint179->setUSE("hanim_l_knee");
HAnimHumanoid29->addJoints(*HAnimJoint179);

CHAnimJoint* HAnimJoint180 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint180->setUSE("hanim_l_talocrural");
HAnimHumanoid29->addJoints(*HAnimJoint180);

CHAnimJoint* HAnimJoint181 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint181->setUSE("hanim_l_talocalcaneonavicular");
HAnimHumanoid29->addJoints(*HAnimJoint181);

CHAnimJoint* HAnimJoint182 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint182->setUSE("hanim_l_cuneonavicular_1");
HAnimHumanoid29->addJoints(*HAnimJoint182);

CHAnimJoint* HAnimJoint183 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint183->setUSE("hanim_l_tarsometatarsal_1");
HAnimHumanoid29->addJoints(*HAnimJoint183);

CHAnimJoint* HAnimJoint184 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint184->setUSE("hanim_l_metatarsophalangeal_1");
HAnimHumanoid29->addJoints(*HAnimJoint184);

CHAnimJoint* HAnimJoint185 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint185->setUSE("hanim_l_tarsal_interphalangeal_1");
HAnimHumanoid29->addJoints(*HAnimJoint185);

CHAnimJoint* HAnimJoint186 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint186->setUSE("hanim_l_cuneonavicular_2");
HAnimHumanoid29->addJoints(*HAnimJoint186);

CHAnimJoint* HAnimJoint187 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint187->setUSE("hanim_l_tarsometatarsal_2");
HAnimHumanoid29->addJoints(*HAnimJoint187);

CHAnimJoint* HAnimJoint188 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint188->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid29->addJoints(*HAnimJoint188);

CHAnimJoint* HAnimJoint189 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint189->setUSE("hanim_l_tarsal_proximal_interphalangeal_1");
HAnimHumanoid29->addJoints(*HAnimJoint189);

CHAnimJoint* HAnimJoint190 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint190->setUSE("hanim_l_tarsal_distal_interphalangeal_1");
HAnimHumanoid29->addJoints(*HAnimJoint190);

CHAnimJoint* HAnimJoint191 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint191->setUSE("hanim_l_cuneonavicular_3");
HAnimHumanoid29->addJoints(*HAnimJoint191);

CHAnimJoint* HAnimJoint192 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint192->setUSE("hanim_l_tarsometatarsal_3");
HAnimHumanoid29->addJoints(*HAnimJoint192);

CHAnimJoint* HAnimJoint193 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint193->setUSE("hanim_l_metatarsophalangeal_3");
HAnimHumanoid29->addJoints(*HAnimJoint193);

CHAnimJoint* HAnimJoint194 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint194->setUSE("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimHumanoid29->addJoints(*HAnimJoint194);

CHAnimJoint* HAnimJoint195 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint195->setUSE("hanim_l_tarsal_distal_interphalangeal_2");
HAnimHumanoid29->addJoints(*HAnimJoint195);

CHAnimJoint* HAnimJoint196 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint196->setUSE("hanim_l_calcaneocuboid");
HAnimHumanoid29->addJoints(*HAnimJoint196);

CHAnimJoint* HAnimJoint197 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint197->setUSE("hanim_l_transversetarsal");
HAnimHumanoid29->addJoints(*HAnimJoint197);

CHAnimJoint* HAnimJoint198 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint198->setUSE("hanim_l_tarsometatarsal_4");
HAnimHumanoid29->addJoints(*HAnimJoint198);

CHAnimJoint* HAnimJoint199 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint199->setUSE("hanim_l_metatarsophalangeal_4");
HAnimHumanoid29->addJoints(*HAnimJoint199);

CHAnimJoint* HAnimJoint200 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint200->setUSE("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimHumanoid29->addJoints(*HAnimJoint200);

CHAnimJoint* HAnimJoint201 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint201->setUSE("hanim_l_tarsal_distal_interphalangeal_3");
HAnimHumanoid29->addJoints(*HAnimJoint201);

CHAnimJoint* HAnimJoint202 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint202->setUSE("hanim_l_tarsometatarsal_5");
HAnimHumanoid29->addJoints(*HAnimJoint202);

CHAnimJoint* HAnimJoint203 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint203->setUSE("hanim_l_metatarsophalangeal_5");
HAnimHumanoid29->addJoints(*HAnimJoint203);

CHAnimJoint* HAnimJoint204 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint204->setUSE("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimHumanoid29->addJoints(*HAnimJoint204);

CHAnimJoint* HAnimJoint205 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint205->setUSE("hanim_l_tarsal_distal_interphalangeal_4");
HAnimHumanoid29->addJoints(*HAnimJoint205);

CHAnimJoint* HAnimJoint206 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint206->setUSE("hanim_r_hip");
HAnimHumanoid29->addJoints(*HAnimJoint206);

CHAnimJoint* HAnimJoint207 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint207->setUSE("hanim_r_knee");
HAnimHumanoid29->addJoints(*HAnimJoint207);

CHAnimJoint* HAnimJoint208 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint208->setUSE("hanim_r_talocrural");
HAnimHumanoid29->addJoints(*HAnimJoint208);

CHAnimJoint* HAnimJoint209 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint209->setUSE("hanim_r_talocalcaneonavicular");
HAnimHumanoid29->addJoints(*HAnimJoint209);

CHAnimJoint* HAnimJoint210 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint210->setUSE("hanim_r_cuneonavicular_1");
HAnimHumanoid29->addJoints(*HAnimJoint210);

CHAnimJoint* HAnimJoint211 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint211->setUSE("hanim_r_tarsometatarsal_1");
HAnimHumanoid29->addJoints(*HAnimJoint211);

CHAnimJoint* HAnimJoint212 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint212->setUSE("hanim_r_metatarsophalangeal_1");
HAnimHumanoid29->addJoints(*HAnimJoint212);

CHAnimJoint* HAnimJoint213 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint213->setUSE("hanim_r_tarsal_interphalangeal_1");
HAnimHumanoid29->addJoints(*HAnimJoint213);

CHAnimJoint* HAnimJoint214 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint214->setUSE("hanim_r_cuneonavicular_2");
HAnimHumanoid29->addJoints(*HAnimJoint214);

CHAnimJoint* HAnimJoint215 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint215->setUSE("hanim_r_tarsometatarsal_2");
HAnimHumanoid29->addJoints(*HAnimJoint215);

CHAnimJoint* HAnimJoint216 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint216->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid29->addJoints(*HAnimJoint216);

CHAnimJoint* HAnimJoint217 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint217->setUSE("hanim_r_tarsal_proximal_interphalangeal_1");
HAnimHumanoid29->addJoints(*HAnimJoint217);

CHAnimJoint* HAnimJoint218 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint218->setUSE("hanim_r_tarsal_distal_interphalangeal_1");
HAnimHumanoid29->addJoints(*HAnimJoint218);

CHAnimJoint* HAnimJoint219 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint219->setUSE("hanim_r_cuneonavicular_3");
HAnimHumanoid29->addJoints(*HAnimJoint219);

CHAnimJoint* HAnimJoint220 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint220->setUSE("hanim_r_tarsometatarsal_3");
HAnimHumanoid29->addJoints(*HAnimJoint220);

CHAnimJoint* HAnimJoint221 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint221->setUSE("hanim_r_metatarsophalangeal_3");
HAnimHumanoid29->addJoints(*HAnimJoint221);

CHAnimJoint* HAnimJoint222 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint222->setUSE("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimHumanoid29->addJoints(*HAnimJoint222);

CHAnimJoint* HAnimJoint223 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint223->setUSE("hanim_r_tarsal_distal_interphalangeal_2");
HAnimHumanoid29->addJoints(*HAnimJoint223);

CHAnimJoint* HAnimJoint224 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint224->setUSE("hanim_r_calcaneocuboid");
HAnimHumanoid29->addJoints(*HAnimJoint224);

CHAnimJoint* HAnimJoint225 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint225->setUSE("hanim_r_transversetarsal");
HAnimHumanoid29->addJoints(*HAnimJoint225);

CHAnimJoint* HAnimJoint226 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint226->setUSE("hanim_r_tarsometatarsal_4");
HAnimHumanoid29->addJoints(*HAnimJoint226);

CHAnimJoint* HAnimJoint227 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint227->setUSE("hanim_r_metatarsophalangeal_4");
HAnimHumanoid29->addJoints(*HAnimJoint227);

CHAnimJoint* HAnimJoint228 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint228->setUSE("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimHumanoid29->addJoints(*HAnimJoint228);

CHAnimJoint* HAnimJoint229 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint229->setUSE("hanim_r_tarsal_distal_interphalangeal_3");
HAnimHumanoid29->addJoints(*HAnimJoint229);

CHAnimJoint* HAnimJoint230 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint230->setUSE("hanim_r_tarsometatarsal_5");
HAnimHumanoid29->addJoints(*HAnimJoint230);

CHAnimJoint* HAnimJoint231 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint231->setUSE("hanim_r_metatarsophalangeal_5");
HAnimHumanoid29->addJoints(*HAnimJoint231);

CHAnimJoint* HAnimJoint232 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint232->setUSE("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimHumanoid29->addJoints(*HAnimJoint232);

CHAnimJoint* HAnimJoint233 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint233->setUSE("hanim_r_tarsal_distal_interphalangeal_4");
HAnimHumanoid29->addJoints(*HAnimJoint233);

CHAnimJoint* HAnimJoint234 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint234->setUSE("hanim_vl5");
HAnimHumanoid29->addJoints(*HAnimJoint234);

CHAnimJoint* HAnimJoint235 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint235->setUSE("hanim_vl4");
HAnimHumanoid29->addJoints(*HAnimJoint235);

CHAnimJoint* HAnimJoint236 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint236->setUSE("hanim_vl3");
HAnimHumanoid29->addJoints(*HAnimJoint236);

CHAnimJoint* HAnimJoint237 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint237->setUSE("hanim_vl2");
HAnimHumanoid29->addJoints(*HAnimJoint237);

CHAnimJoint* HAnimJoint238 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint238->setUSE("hanim_vl1");
HAnimHumanoid29->addJoints(*HAnimJoint238);

CHAnimJoint* HAnimJoint239 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint239->setUSE("hanim_vt12");
HAnimHumanoid29->addJoints(*HAnimJoint239);

CHAnimJoint* HAnimJoint240 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint240->setUSE("hanim_vt11");
HAnimHumanoid29->addJoints(*HAnimJoint240);

CHAnimJoint* HAnimJoint241 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint241->setUSE("hanim_vt10");
HAnimHumanoid29->addJoints(*HAnimJoint241);

CHAnimJoint* HAnimJoint242 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint242->setUSE("hanim_vt9");
HAnimHumanoid29->addJoints(*HAnimJoint242);

CHAnimJoint* HAnimJoint243 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint243->setUSE("hanim_vt8");
HAnimHumanoid29->addJoints(*HAnimJoint243);

CHAnimJoint* HAnimJoint244 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint244->setUSE("hanim_vt7");
HAnimHumanoid29->addJoints(*HAnimJoint244);

CHAnimJoint* HAnimJoint245 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint245->setUSE("hanim_vt6");
HAnimHumanoid29->addJoints(*HAnimJoint245);

CHAnimJoint* HAnimJoint246 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint246->setUSE("hanim_vt5");
HAnimHumanoid29->addJoints(*HAnimJoint246);

CHAnimJoint* HAnimJoint247 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint247->setUSE("hanim_vt4");
HAnimHumanoid29->addJoints(*HAnimJoint247);

CHAnimJoint* HAnimJoint248 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint248->setUSE("hanim_vt3");
HAnimHumanoid29->addJoints(*HAnimJoint248);

CHAnimJoint* HAnimJoint249 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint249->setUSE("hanim_vt2");
HAnimHumanoid29->addJoints(*HAnimJoint249);

CHAnimJoint* HAnimJoint250 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint250->setUSE("hanim_vt1");
HAnimHumanoid29->addJoints(*HAnimJoint250);

CHAnimJoint* HAnimJoint251 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint251->setUSE("hanim_vc7");
HAnimHumanoid29->addJoints(*HAnimJoint251);

CHAnimJoint* HAnimJoint252 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint252->setUSE("hanim_vc6");
HAnimHumanoid29->addJoints(*HAnimJoint252);

CHAnimJoint* HAnimJoint253 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint253->setUSE("hanim_vc5");
HAnimHumanoid29->addJoints(*HAnimJoint253);

CHAnimJoint* HAnimJoint254 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint254->setUSE("hanim_vc4");
HAnimHumanoid29->addJoints(*HAnimJoint254);

CHAnimJoint* HAnimJoint255 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint255->setUSE("hanim_vc3");
HAnimHumanoid29->addJoints(*HAnimJoint255);

CHAnimJoint* HAnimJoint256 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint256->setUSE("hanim_vc2");
HAnimHumanoid29->addJoints(*HAnimJoint256);

CHAnimJoint* HAnimJoint257 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint257->setUSE("hanim_vc1");
HAnimHumanoid29->addJoints(*HAnimJoint257);

CHAnimJoint* HAnimJoint258 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint258->setUSE("hanim_skullbase");
HAnimHumanoid29->addJoints(*HAnimJoint258);

CHAnimJoint* HAnimJoint259 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint259->setUSE("hanim_l_eyelid_joint");
HAnimHumanoid29->addJoints(*HAnimJoint259);

CHAnimJoint* HAnimJoint260 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint260->setUSE("hanim_r_eyelid_joint");
HAnimHumanoid29->addJoints(*HAnimJoint260);

CHAnimJoint* HAnimJoint261 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint261->setUSE("hanim_l_eyeball_joint");
HAnimHumanoid29->addJoints(*HAnimJoint261);

CHAnimJoint* HAnimJoint262 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint262->setUSE("hanim_r_eyeball_joint");
HAnimHumanoid29->addJoints(*HAnimJoint262);

CHAnimJoint* HAnimJoint263 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint263->setUSE("hanim_l_eyebrow_joint");
HAnimHumanoid29->addJoints(*HAnimJoint263);

CHAnimJoint* HAnimJoint264 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint264->setUSE("hanim_r_eyebrow_joint");
HAnimHumanoid29->addJoints(*HAnimJoint264);

CHAnimJoint* HAnimJoint265 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint265->setUSE("hanim_temporomandibular");
HAnimHumanoid29->addJoints(*HAnimJoint265);

CHAnimJoint* HAnimJoint266 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint266->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid29->addJoints(*HAnimJoint266);

CHAnimJoint* HAnimJoint267 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint267->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid29->addJoints(*HAnimJoint267);

CHAnimJoint* HAnimJoint268 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint268->setUSE("hanim_l_shoulder");
HAnimHumanoid29->addJoints(*HAnimJoint268);

CHAnimJoint* HAnimJoint269 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint269->setUSE("hanim_l_elbow");
HAnimHumanoid29->addJoints(*HAnimJoint269);

CHAnimJoint* HAnimJoint270 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint270->setUSE("hanim_l_radiocarpal");
HAnimHumanoid29->addJoints(*HAnimJoint270);

CHAnimJoint* HAnimJoint271 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint271->setUSE("hanim_l_midcarpal_1");
HAnimHumanoid29->addJoints(*HAnimJoint271);

CHAnimJoint* HAnimJoint272 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint272->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid29->addJoints(*HAnimJoint272);

CHAnimJoint* HAnimJoint273 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint273->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid29->addJoints(*HAnimJoint273);

CHAnimJoint* HAnimJoint274 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint274->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid29->addJoints(*HAnimJoint274);

CHAnimJoint* HAnimJoint275 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint275->setUSE("hanim_l_midcarpal_2");
HAnimHumanoid29->addJoints(*HAnimJoint275);

CHAnimJoint* HAnimJoint276 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint276->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid29->addJoints(*HAnimJoint276);

CHAnimJoint* HAnimJoint277 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint277->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid29->addJoints(*HAnimJoint277);

CHAnimJoint* HAnimJoint278 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint278->setUSE("hanim_l_carpal_proximal_interphalangeal_1");
HAnimHumanoid29->addJoints(*HAnimJoint278);

CHAnimJoint* HAnimJoint279 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint279->setUSE("hanim_l_carpal_distal_interphalangeal_1");
HAnimHumanoid29->addJoints(*HAnimJoint279);

CHAnimJoint* HAnimJoint280 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint280->setUSE("hanim_l_midcarpal_3");
HAnimHumanoid29->addJoints(*HAnimJoint280);

CHAnimJoint* HAnimJoint281 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint281->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid29->addJoints(*HAnimJoint281);

CHAnimJoint* HAnimJoint282 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint282->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid29->addJoints(*HAnimJoint282);

CHAnimJoint* HAnimJoint283 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint283->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid29->addJoints(*HAnimJoint283);

CHAnimJoint* HAnimJoint284 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint284->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid29->addJoints(*HAnimJoint284);

CHAnimJoint* HAnimJoint285 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint285->setUSE("hanim_l_midcarpal_4_1");
HAnimHumanoid29->addJoints(*HAnimJoint285);

CHAnimJoint* HAnimJoint286 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint286->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid29->addJoints(*HAnimJoint286);

CHAnimJoint* HAnimJoint287 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint287->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid29->addJoints(*HAnimJoint287);

CHAnimJoint* HAnimJoint288 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint288->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid29->addJoints(*HAnimJoint288);

CHAnimJoint* HAnimJoint289 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint289->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid29->addJoints(*HAnimJoint289);

CHAnimJoint* HAnimJoint290 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint290->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid29->addJoints(*HAnimJoint290);

CHAnimJoint* HAnimJoint291 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint291->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid29->addJoints(*HAnimJoint291);

CHAnimJoint* HAnimJoint292 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint292->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid29->addJoints(*HAnimJoint292);

CHAnimJoint* HAnimJoint293 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint293->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid29->addJoints(*HAnimJoint293);

CHAnimJoint* HAnimJoint294 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint294->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid29->addJoints(*HAnimJoint294);

CHAnimJoint* HAnimJoint295 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint295->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid29->addJoints(*HAnimJoint295);

CHAnimJoint* HAnimJoint296 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint296->setUSE("hanim_r_shoulder");
HAnimHumanoid29->addJoints(*HAnimJoint296);

CHAnimJoint* HAnimJoint297 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint297->setUSE("hanim_r_elbow");
HAnimHumanoid29->addJoints(*HAnimJoint297);

CHAnimJoint* HAnimJoint298 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint298->setUSE("hanim_r_radiocarpal");
HAnimHumanoid29->addJoints(*HAnimJoint298);

CHAnimJoint* HAnimJoint299 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint299->setUSE("hanim_r_midcarpal_1");
HAnimHumanoid29->addJoints(*HAnimJoint299);

CHAnimJoint* HAnimJoint300 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint300->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid29->addJoints(*HAnimJoint300);

CHAnimJoint* HAnimJoint301 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint301->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid29->addJoints(*HAnimJoint301);

CHAnimJoint* HAnimJoint302 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint302->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid29->addJoints(*HAnimJoint302);

CHAnimJoint* HAnimJoint303 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint303->setUSE("hanim_r_midcarpal_2");
HAnimHumanoid29->addJoints(*HAnimJoint303);

CHAnimJoint* HAnimJoint304 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint304->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid29->addJoints(*HAnimJoint304);

CHAnimJoint* HAnimJoint305 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint305->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid29->addJoints(*HAnimJoint305);

CHAnimJoint* HAnimJoint306 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint306->setUSE("hanim_r_carpal_proximal_interphalangeal_1");
HAnimHumanoid29->addJoints(*HAnimJoint306);

CHAnimJoint* HAnimJoint307 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint307->setUSE("hanim_r_carpal_distal_interphalangeal_1");
HAnimHumanoid29->addJoints(*HAnimJoint307);

CHAnimJoint* HAnimJoint308 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint308->setUSE("hanim_r_midcarpal_3");
HAnimHumanoid29->addJoints(*HAnimJoint308);

CHAnimJoint* HAnimJoint309 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint309->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid29->addJoints(*HAnimJoint309);

CHAnimJoint* HAnimJoint310 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint310->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid29->addJoints(*HAnimJoint310);

CHAnimJoint* HAnimJoint311 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint311->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid29->addJoints(*HAnimJoint311);

CHAnimJoint* HAnimJoint312 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint312->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid29->addJoints(*HAnimJoint312);

CHAnimJoint* HAnimJoint313 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint313->setUSE("hanim_r_midcarpal_4_1");
HAnimHumanoid29->addJoints(*HAnimJoint313);

CHAnimJoint* HAnimJoint314 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint314->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid29->addJoints(*HAnimJoint314);

CHAnimJoint* HAnimJoint315 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint315->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid29->addJoints(*HAnimJoint315);

CHAnimJoint* HAnimJoint316 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint316->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid29->addJoints(*HAnimJoint316);

CHAnimJoint* HAnimJoint317 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint317->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid29->addJoints(*HAnimJoint317);

CHAnimJoint* HAnimJoint318 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint318->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid29->addJoints(*HAnimJoint318);

CHAnimJoint* HAnimJoint319 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint319->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid29->addJoints(*HAnimJoint319);

CHAnimJoint* HAnimJoint320 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint320->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid29->addJoints(*HAnimJoint320);

CHAnimJoint* HAnimJoint321 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint321->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid29->addJoints(*HAnimJoint321);

group->addChildren(*HAnimHumanoid29);

X3D0->setScene(*Scene9);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

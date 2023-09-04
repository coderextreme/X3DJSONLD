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
meta2->setContent("JoeKick.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("This Joe model is a HAnim version 2 LOA-3 Humanoid with textured skin based on the original HAnim Specification and data from CAESAR models.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Joe D. Williams");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("created");
meta5->setContent("9 January 2004");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("translated");
meta6->setContent("12 January 2017");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("29 January 2023");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("TODO");
meta8->setContent("Record information about skin coordinates (found in comment at end of scene) as a structured MetadataSet containing MetadataString nodes");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("translators");
meta9->setContent("Roy Walmsley, Don Brutzman, John Carlson");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("../Characters/JoeSkinTexcoordDisplacerKick.x3d");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("identifier");
meta11->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeKick.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("generator");
meta12->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("generator");
meta13->setContent("BS studio translation from .x3dv by Joe using BS Contact");
head1->addMeta(*meta13);

Ccomponent* component14 = new Ccomponent();
component14->setName("HAnim");
component14->setLevel(1);
head1->addComponent(*component14);

X3D0->setHead(*head1);

CScene* Scene15 = new CScene();
CWorldInfo* WorldInfo16 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo16->setTitle("X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe");
WorldInfo16->setInfo(new CString[3]{"X3D Humanoid LOA3 skeleton","skin from hanim sites, surface features, and some added points","390 points"}, 3);
group->addChildren(*WorldInfo16);

CNavigationInfo* NavigationInfo17 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo17->setDEF("Start_NavigationInfo");
NavigationInfo17->setSpeed(2.5);
NavigationInfo17->setHeadlight(False);
group->addChildren(*NavigationInfo17);

CBackground* Background18 = (CBackground *)(m_pScene.createNode("Background"));
Background18->setDEF("blue_Background");
group->addChildren(*Background18);

CSpotLight* SpotLight19 = (CSpotLight *)(m_pScene.createNode("SpotLight"));
SpotLight19->setDEF("light1");
SpotLight19->setColor(new float[3]{0.8,0.8,1});
SpotLight19->setAmbientIntensity(0.7);
SpotLight19->setLocation(new float[3]{0,3,3});
SpotLight19->setDirection(new float[3]{0,0,0});
SpotLight19->setRadius(10);
SpotLight19->setBeamWidth(1.5);
SpotLight19->setCutOffAngle(0.6);
group->addChildren(*SpotLight19);

CPointLight* PointLight20 = (CPointLight *)(m_pScene.createNode("PointLight"));
PointLight20->setDEF("light2");
PointLight20->setColor(new float[3]{0.8,0.8,1});
PointLight20->setAmbientIntensity(0.7);
PointLight20->setLocation(new float[3]{0,10,-7});
group->addChildren(*PointLight20);

CViewpoint* Viewpoint21 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint21->setDEF("Scene_InclinedView");
Viewpoint21->setDescription("Scene_Inclined View");
Viewpoint21->setPosition(new float[3]{1.62,1.05,3.06});
Viewpoint21->setOrientation(new float[4]{-0.113,0.993,0.0347,0.671});
Viewpoint21->setCenterOfRotation(new float[3]{0,0.85,0});
group->addChildren(*Viewpoint21);

CViewpoint* Viewpoint22 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint22->setDEF("Scene_IFrontView");
Viewpoint22->setDescription("Scene_Front View");
Viewpoint22->setPosition(new float[3]{0,0.8,2.58});
Viewpoint22->setCenterOfRotation(new float[3]{0,0.8,0});
group->addChildren(*Viewpoint22);

CViewpoint* Viewpoint23 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint23->setDEF("Scene_ISideView");
Viewpoint23->setDescription("Scene_Side View");
Viewpoint23->setPosition(new float[3]{2.6,0.8,0});
Viewpoint23->setOrientation(new float[4]{0,1,0,1.5708});
Viewpoint23->setCenterOfRotation(new float[3]{0,0.8,0});
group->addChildren(*Viewpoint23);

CViewpoint* Viewpoint24 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint24->setDEF("Scene_BackView");
Viewpoint24->setDescription("Scene_Back View");
Viewpoint24->setPosition(new float[3]{0,1.5,-3});
Viewpoint24->setOrientation(new float[4]{0,1,0,3.14});
Viewpoint24->setCenterOfRotation(new float[3]{0,1.5,0});
group->addChildren(*Viewpoint24);

CViewpoint* Viewpoint25 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint25->setDEF("Scene_TopView");
Viewpoint25->setDescription("Scene_Top View");
Viewpoint25->setPosition(new float[3]{0,3.5,0});
Viewpoint25->setOrientation(new float[4]{1,0,0,-1.5708});
Viewpoint25->setCenterOfRotation(new float[3]{0,1.5,0});
group->addChildren(*Viewpoint25);

CGroup* Group26 = (CGroup *)(m_pScene.createNode("Group"));
Group26->setDEF("Joe_Humanoid");
CHAnimHumanoid* HAnimHumanoid27 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid27->setDEF("Joe_Kick");
HAnimHumanoid27->setVersion("2.0");
HAnimHumanoid27->setName("Kick");
HAnimHumanoid27->setLoa(3);
CMetadataSet* MetadataSet28 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet28->setName("warnings");
MetadataSet28->setReference("HAnim");
CMetadataString* MetadataString29 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString29->setName("SymmetricalLeftRight");
MetadataString29->setReference("correction options: ignore, warn, average, left, right, largest, smallest");
MetadataString29->setValue(new CString[1]{"ignore"}, 1);
MetadataSet28->setMetadata(*MetadataString29);

HAnimHumanoid27->setMetadata(*MetadataSet28);

CHAnimJoint* HAnimJoint30 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint30->setDEF("Joe_humanoid_root");
HAnimJoint30->setName("humanoid_root");
HAnimJoint30->setCenter(new float[3]{0,0.875,0});
CHAnimSegment* HAnimSegment31 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment31->setDEF("Joe_sacrum");
HAnimSegment31->setName("sacrum");
CHAnimSite* HAnimSite32 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite32->setDEF("Joe_RootFront_view");
HAnimSite32->setName("RootFront_view");
CTransform* Transform33 = (CTransform *)(m_pScene.createNode("Transform"));
Transform33->setDEF("hanimcordsys");
Transform33->setScale(new float[3]{0.175,0.175,0.175});
CViewpoint* Viewpoint34 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint34->setDEF("ViewBodyRootAxes");
Viewpoint34->setDescription("Joe_HAnim Root HAnimSite Coordinate Axes View");
Transform33->addChildren(*Viewpoint34);

CShape* Shape35 = (CShape *)(m_pScene.createNode("Shape"));
Shape35->setDEF("AxisLinesShape");
CIndexedLineSet* IndexedLineSet36 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet36->setColorPerVertex(False);
IndexedLineSet36->setColorIndex(new int[3]{0,1,2});
IndexedLineSet36->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
CColor* Color37 = (CColor *)(m_pScene.createNode("Color"));
Color37->setColor(new float[9]{1,0,0,0,0.6,0,0,0,1});
IndexedLineSet36->setColor(*Color37);

CCoordinate* Coordinate38 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate38->setPoint(new float[12]{0,0,0,1,0,0,0,1,0,0,0,1});
IndexedLineSet36->setCoord(*Coordinate38);

Shape35->setGeometry(IndexedLineSet36);

Transform33->addChild(*Shape35);

HAnimSite32->addChildren(*Transform33);

HAnimSegment31->addChildren(*HAnimSite32);

HAnimJoint30->addChildren(*HAnimSegment31);

CHAnimJoint* HAnimJoint39 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint39->setDEF("Joe_sacroiliac");
HAnimJoint39->setName("sacroiliac");
HAnimJoint39->setCenter(new float[3]{0,0.92,0});
HAnimJoint39->setSkinCoordIndex(new int[13]{17,19,20,21,22,23,26,27,73,82,89,91,93});
HAnimJoint39->setSkinCoordWeight(new float[13]{1,1,1,1,1,1,1,1,1,1,0.35,0.35,1}, 13);
CHAnimJoint* HAnimJoint40 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint40->setDEF("Joe_l_hip");
HAnimJoint40->setName("l_hip");
HAnimJoint40->setCenter(new float[3]{0.1,0.92,0});
HAnimJoint40->setSkinCoordIndex(new int[6]{89,90,94,95,96,97});
HAnimJoint40->setSkinCoordWeight(new float[6]{0.65,1,1,1,1,1}, 6);
CHAnimJoint* HAnimJoint41 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint41->setDEF("Joe_l_knee");
HAnimJoint41->setName("l_knee");
HAnimJoint41->setCenter(new float[3]{0.115,0.466,0});
HAnimJoint41->setSkinCoordIndex(new int[8]{334,335,336,337,338,339,340,341});
HAnimJoint41->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
CHAnimJoint* HAnimJoint42 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint42->setDEF("Joe_l_talocrural");
HAnimJoint42->setName("l_talocrural");
HAnimJoint42->setCenter(new float[3]{0.115,0.069,0});
HAnimJoint42->setSkinCoordIndex(new int[4]{342,343,344,345});
HAnimJoint42->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
CHAnimJoint* HAnimJoint43 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint43->setDEF("Joe_l_tarsometatarsal_1");
HAnimJoint43->setName("l_tarsometatarsal_2");
HAnimJoint43->setCenter(new float[3]{0.115,0.031,0.03});
HAnimJoint43->setSkinCoordIndex(new int[4]{346,347,348,71});
HAnimJoint43->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
CHAnimJoint* HAnimJoint44 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint44->setDEF("Joe_l_metatarsophalangeal_1");
HAnimJoint44->setName("l_metatarsophalangeal_2");
HAnimJoint44->setCenter(new float[3]{0.115,0.037,0.09});
HAnimJoint44->setSkinCoordIndex(new int[4]{349,350,351,352});
HAnimJoint44->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
CHAnimJoint* HAnimJoint45 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint45->setDEF("Joe_l_tarsal_distal_interphalangeal_1");
HAnimJoint45->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint45->setCenter(new float[3]{0.115,0.02,0.122});
HAnimJoint45->setSkinCoordIndex(new int[9]{353,354,355,356,357,358,359,360,361});
HAnimJoint45->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint44->addChildren(*HAnimJoint45);

HAnimJoint43->addChildren(*HAnimJoint44);

HAnimJoint42->addChildren(*HAnimJoint43);

HAnimJoint41->addChildren(*HAnimJoint42);

HAnimJoint40->addChildren(*HAnimJoint41);

HAnimJoint39->addChildren(*HAnimJoint40);

CHAnimJoint* HAnimJoint46 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint46->setDEF("Joe_r_hip");
HAnimJoint46->setName("r_hip");
HAnimJoint46->setCenter(new float[3]{-0.1,0.92,0});
HAnimJoint46->setSkinCoordIndex(new int[8]{91,92,98,99,100,101,362,363});
HAnimJoint46->setSkinCoordWeight(new float[8]{0.65,1,0.8,1,1,1,0.4,0.8}, 8);
CHAnimJoint* HAnimJoint47 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint47->setDEF("Joe_r_knee");
HAnimJoint47->setName("r_knee");
HAnimJoint47->setCenter(new float[3]{-0.05,0.466,0});
HAnimJoint47->setSkinCoordIndex(new int[9]{362,363,364,365,366,367,368,369,98});
HAnimJoint47->setSkinCoordWeight(new float[9]{0.6,0.2,1,1,1,1,1,1,0.2}, 9);
CHAnimJoint* HAnimJoint48 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint48->setDEF("Joe_r_talocrural");
HAnimJoint48->setName("r_talocrural");
HAnimJoint48->setCenter(new float[3]{-0.115,0.069,0});
HAnimJoint48->setSkinCoordIndex(new int[4]{370,371,372,373});
HAnimJoint48->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
CHAnimJoint* HAnimJoint49 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint49->setDEF("Joe_r_tarsometatarsal_1");
HAnimJoint49->setName("r_tarsometatarsal_2");
HAnimJoint49->setCenter(new float[3]{-0.1,0.015,-0.01});
HAnimJoint49->setSkinCoordIndex(new int[3]{374,375,376});
HAnimJoint49->setSkinCoordWeight(new float[3]{1,1,1}, 3);
CHAnimJoint* HAnimJoint50 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint50->setDEF("Joe_r_metatarsophalangeal_1");
HAnimJoint50->setName("r_metatarsophalangeal_2");
HAnimJoint50->setCenter(new float[3]{-0.115,0.037,0.09});
HAnimJoint50->setSkinCoordIndex(new int[4]{377,378,379,380});
HAnimJoint50->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
CHAnimJoint* HAnimJoint51 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint51->setDEF("Joe_r_tarsal_distal_interphalangeal_1");
HAnimJoint51->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint51->setCenter(new float[3]{-0.1,0.01,0.14});
HAnimJoint51->setSkinCoordIndex(new int[9]{381,382,383,384,385,386,387,388,389});
HAnimJoint51->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint50->addChildren(*HAnimJoint51);

HAnimJoint49->addChildren(*HAnimJoint50);

HAnimJoint48->addChildren(*HAnimJoint49);

HAnimJoint47->addChildren(*HAnimJoint48);

HAnimJoint46->addChildren(*HAnimJoint47);

HAnimJoint39->addChildren(*HAnimJoint46);

HAnimJoint30->addChildren(*HAnimJoint39);

CHAnimJoint* HAnimJoint52 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint52->setDEF("Joe_vl5");
HAnimJoint52->setName("vl5");
HAnimJoint52->setCenter(new float[3]{0,1.045,-0.095});
HAnimJoint52->setSkinCoordIndex(new int[2]{28,76});
HAnimJoint52->setSkinCoordWeight(new float[2]{1,1}, 2);
CHAnimJoint* HAnimJoint53 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint53->setDEF("Joe_vl4");
HAnimJoint53->setName("vl4");
HAnimJoint53->setCenter(new float[3]{0,1.068,-0.085});
CHAnimJoint* HAnimJoint54 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint54->setDEF("Joe_vl3");
HAnimJoint54->setName("vl3");
HAnimJoint54->setCenter(new float[3]{0,1.092,-0.0725});
CHAnimJoint* HAnimJoint55 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint55->setDEF("Joe_vl2");
HAnimJoint55->setName("vl2");
HAnimJoint55->setCenter(new float[3]{0,1.12,-0.065});
HAnimJoint55->setSkinCoordIndex(new int[9]{16,18,25,83,84,85,86,87,88});
HAnimJoint55->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,0.7,1,0.8}, 9);
CHAnimJoint* HAnimJoint56 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint56->setDEF("Joe_vl1");
HAnimJoint56->setName("vl1");
HAnimJoint56->setCenter(new float[3]{0,1.1459,-0.0625});
CHAnimJoint* HAnimJoint57 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint57->setDEF("Joe_vt12");
HAnimJoint57->setName("vt12");
HAnimJoint57->setCenter(new float[3]{0,1.179,-0.068});
CHAnimJoint* HAnimJoint58 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint58->setDEF("Joe_vt11");
HAnimJoint58->setName("vt11");
HAnimJoint58->setCenter(new float[3]{0,1.2679,-0.081});
CHAnimJoint* HAnimJoint59 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint59->setDEF("Joe_vt10");
HAnimJoint59->setName("vt10");
HAnimJoint59->setCenter(new float[3]{0,1.242,-0.09});
HAnimJoint59->setSkinCoordIndex(new int[1]{15});
HAnimJoint59->setSkinCoordWeight(new float[1]{1}, 1);
CHAnimJoint* HAnimJoint60 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint60->setDEF("Joe_vt9");
HAnimJoint60->setName("vt9");
HAnimJoint60->setCenter(new float[3]{0,1.268,-0.1});
HAnimJoint60->setSkinCoordIndex(new int[2]{13,14});
HAnimJoint60->setSkinCoordWeight(new float[2]{1,1}, 2);
CHAnimJoint* HAnimJoint61 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint61->setDEF("Joe_vt8");
HAnimJoint61->setName("vt8");
HAnimJoint61->setCenter(new float[3]{0,1.294,-0.11});
CHAnimJoint* HAnimJoint62 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint62->setDEF("Joe_vt7");
HAnimJoint62->setName("vt7");
HAnimJoint62->setCenter(new float[3]{0,1.323,-0.1155});
CHAnimJoint* HAnimJoint63 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint63->setDEF("Joe_vt6");
HAnimJoint63->setName("vt6");
HAnimJoint63->setCenter(new float[3]{0,1.352,-0.12});
CHAnimJoint* HAnimJoint64 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint64->setDEF("Joe_vt5");
HAnimJoint64->setName("vt5");
HAnimJoint64->setCenter(new float[3]{0,1.381,-0.1235});
CHAnimJoint* HAnimJoint65 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint65->setDEF("Joe_vt4");
HAnimJoint65->setName("vt4");
HAnimJoint65->setCenter(new float[3]{0,1.41,-0.1235});
HAnimJoint65->setSkinCoordIndex(new int[1]{81});
HAnimJoint65->setSkinCoordWeight(new float[1]{1}, 1);
CHAnimJoint* HAnimJoint66 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint66->setDEF("Joe_vt3");
HAnimJoint66->setName("vt3");
HAnimJoint66->setCenter(new float[3]{0,1.438,-0.12});
CHAnimJoint* HAnimJoint67 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint67->setDEF("Joe_vt2");
HAnimJoint67->setName("vt2");
HAnimJoint67->setCenter(new float[3]{0,1.468,-0.105});
CHAnimJoint* HAnimJoint68 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint68->setDEF("Joe_vt1");
HAnimJoint68->setName("vt1");
HAnimJoint68->setCenter(new float[3]{0,1.497,-0.09});
HAnimJoint68->setSkinCoordIndex(new int[2]{11,24});
HAnimJoint68->setSkinCoordWeight(new float[2]{1,1}, 2);
CHAnimJoint* HAnimJoint69 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint69->setDEF("Joe_vc7");
HAnimJoint69->setName("vc7");
HAnimJoint69->setCenter(new float[3]{0,1.525,-0.072});
HAnimJoint69->setSkinCoordIndex(new int[2]{74,75});
HAnimJoint69->setSkinCoordWeight(new float[2]{1,1}, 2);
CHAnimJoint* HAnimJoint70 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint70->setDEF("Joe_vc6");
HAnimJoint70->setName("vc6");
HAnimJoint70->setCenter(new float[3]{0,1.54,-0.05});
CHAnimJoint* HAnimJoint71 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint71->setDEF("Joe_vc5");
HAnimJoint71->setName("vc5");
HAnimJoint71->setCenter(new float[3]{0,1.552,-0.035});
CHAnimJoint* HAnimJoint72 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint72->setDEF("Joe_vc4");
HAnimJoint72->setName("vc4");
HAnimJoint72->setCenter(new float[3]{0,1.5675,-0.0256});
CHAnimJoint* HAnimJoint73 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint73->setDEF("Joe_vc3");
HAnimJoint73->setName("vc3");
HAnimJoint73->setCenter(new float[3]{0,1.58225,-0.0185});
CHAnimJoint* HAnimJoint74 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint74->setDEF("Joe_vc2");
HAnimJoint74->setName("vc2");
HAnimJoint74->setCenter(new float[3]{0,1.595,-0.0175});
CHAnimJoint* HAnimJoint75 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint75->setDEF("Joe_vc1");
HAnimJoint75->setName("vc1");
HAnimJoint75->setCenter(new float[3]{0,1.61,-0.015});
CHAnimJoint* HAnimJoint76 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint76->setDEF("Joe_skullbase");
HAnimJoint76->setName("skullbase");
HAnimJoint76->setCenter(new float[3]{0,1.63,-0.01});
HAnimJoint76->setSkinCoordIndex(new int[10]{0,1,2,3,4,5,6,7,8,9});
HAnimJoint76->setSkinCoordWeight(new float[10]{1,1,1,1,1,1,1,1,1,1}, 10);
CHAnimDisplacer* HAnimDisplacer77 = (CHAnimDisplacer *)(m_pScene.createNode("HAnimDisplacer"));
HAnimDisplacer77->setDEF("Joe_skull_tip_raiser_action");
HAnimDisplacer77->setName("skull_tip_raiser_action");
HAnimDisplacer77->setCoordIndex(new int[10]{0,1,2,3,4,5,6,7,8,9});
HAnimDisplacer77->setDisplacements(new float[30]{0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15});
HAnimJoint76->addDisplacers(*HAnimDisplacer77);

CHAnimJoint* HAnimJoint78 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint78->setDEF("Joe_l_eyelid_joint");
HAnimJoint78->setName("l_eyelid_joint");
HAnimJoint78->setCenter(new float[3]{0.034,1.659,0.06});
HAnimJoint76->addChildren(*HAnimJoint78);

CHAnimJoint* HAnimJoint79 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint79->setDEF("Joe_l_eyeball_joint");
HAnimJoint79->setName("l_eyeball_joint");
HAnimJoint79->setCenter(new float[3]{0.034,1.659,0.06});
HAnimJoint76->addChildren(*HAnimJoint79);

CHAnimJoint* HAnimJoint80 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint80->setDEF("Joe_l_eyebrow_joint");
HAnimJoint80->setName("l_eyebrow_joint");
HAnimJoint80->setCenter(new float[3]{0.034,1.659,0.06});
HAnimJoint76->addChildren(*HAnimJoint80);

CHAnimJoint* HAnimJoint81 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint81->setDEF("Joe_r_eyelid_joint");
HAnimJoint81->setName("r_eyelid_joint");
HAnimJoint81->setCenter(new float[3]{-0.034,1.659,0.06});
HAnimJoint76->addChildren(*HAnimJoint81);

CHAnimJoint* HAnimJoint82 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint82->setDEF("Joe_r_eyeball_joint");
HAnimJoint82->setName("r_eyeball_joint");
HAnimJoint82->setCenter(new float[3]{-0.034,1.659,0.06});
HAnimJoint76->addChildren(*HAnimJoint82);

CHAnimJoint* HAnimJoint83 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint83->setDEF("Joe_r_eyebrow_joint");
HAnimJoint83->setName("r_eyebrow_joint");
HAnimJoint83->setCenter(new float[3]{-0.034,1.659,0.06});
HAnimJoint76->addChildren(*HAnimJoint83);

CHAnimJoint* HAnimJoint84 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint84->setDEF("Joe_temporomandibular");
HAnimJoint84->setName("temporomandibular");
HAnimJoint84->setCenter(new float[3]{0.034,1.659,0.06});
HAnimJoint76->addChildren(*HAnimJoint84);

HAnimJoint75->addChildren(*HAnimJoint76);

HAnimJoint74->addChildren(*HAnimJoint75);

HAnimJoint73->addChildren(*HAnimJoint74);

HAnimJoint72->addChildren(*HAnimJoint73);

HAnimJoint71->addChildren(*HAnimJoint72);

HAnimJoint70->addChildren(*HAnimJoint71);

HAnimJoint69->addChildren(*HAnimJoint70);

HAnimJoint68->addChildren(*HAnimJoint69);

CHAnimJoint* HAnimJoint85 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint85->setDEF("Joe_l_acromioclavicular");
HAnimJoint85->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint85->setSkinCoordIndex(new int[1]{12});
HAnimJoint85->setSkinCoordWeight(new float[1]{1}, 1);
CHAnimJoint* HAnimJoint86 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint86->setDEF("Joe_l_sternoclavicular");
HAnimJoint86->setName("l_acromioclavicular");
HAnimJoint86->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint86->setSkinCoordIndex(new int[1]{79});
HAnimJoint86->setSkinCoordWeight(new float[1]{1}, 1);
CHAnimJoint* HAnimJoint87 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint87->setDEF("Joe_l_shoulder");
HAnimJoint87->setName("l_shoulder");
HAnimJoint87->setCenter(new float[3]{0.2,1.44,-0.04});
HAnimJoint87->setSkinCoordIndex(new int[8]{41,42,44,80,102,103,104,105});
HAnimJoint87->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
CHAnimJoint* HAnimJoint88 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint88->setDEF("Joe_l_elbow");
HAnimJoint88->setName("l_elbow");
HAnimJoint88->setCenter(new float[3]{0.2,1.1388,-0.04});
HAnimJoint88->setSkinCoordIndex(new int[12]{45,46,47,109,110,111,112,113,115,116,117,118});
HAnimJoint88->setSkinCoordWeight(new float[15]{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, 15);
CHAnimJoint* HAnimJoint89 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint89->setDEF("Joe_l_radiocarpal");
HAnimJoint89->setName("l_radiocarpal");
HAnimJoint89->setCenter(new float[3]{0.2,0.87,-0.04});
HAnimJoint89->setSkinCoordIndex(new int[8]{119,120,121,122,123,124,125,126});
HAnimJoint89->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
CHAnimJoint* HAnimJoint90 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint90->setDEF("Joe_l_carpometacarpal_1");
HAnimJoint90->setName("l_carpometacarpal_1");
HAnimJoint90->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint90->setSkinCoordIndex(new int[2]{127,128});
HAnimJoint90->setSkinCoordWeight(new float[2]{1,1}, 2);
CHAnimJoint* HAnimJoint91 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint91->setDEF("Joe_l_metacarpophalangeal_1");
HAnimJoint91->setName("l_metacarpophalangeal_1");
HAnimJoint91->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint91->setSkinCoordIndex(new int[6]{138,139,140,141,142,143});
HAnimJoint91->setSkinCoordWeight(new float[6]{0.5,0.5,0.5,1,1,1}, 6);
CHAnimJoint* HAnimJoint92 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint92->setDEF("Joe_l_carpal_interphalangeal_1");
HAnimJoint92->setName("l_carpal_interphalangeal_1");
HAnimJoint92->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint92->setSkinCoordIndex(new int[9]{144,145,146,147,148,149,150,151,152});
HAnimJoint92->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint91->addChildren(*HAnimJoint92);

HAnimJoint90->addChildren(*HAnimJoint91);

HAnimJoint89->addChildren(*HAnimJoint90);

CHAnimJoint* HAnimJoint93 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint93->setDEF("Joe_l_carpometacarpal_2");
HAnimJoint93->setName("l_carpometacarpal_2");
HAnimJoint93->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint93->setSkinCoordIndex(new int[2]{129,130});
HAnimJoint93->setSkinCoordWeight(new float[2]{1,1}, 2);
CHAnimJoint* HAnimJoint94 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint94->setDEF("Joe_l_metacarpophalangeal_2");
HAnimJoint94->setName("l_metacarpophalangeal_2");
HAnimJoint94->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint94->setSkinCoordIndex(new int[7]{138,139,140,153,154,155,163});
HAnimJoint94->setSkinCoordWeight(new float[7]{0.5,0.5,0.5,1,1,1,0.5}, 7);
CHAnimJoint* HAnimJoint95 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint95->setDEF("Joe_l_carpal_proximal_interphalangeal_1");
HAnimJoint95->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint95->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint95->setSkinCoordIndex(new int[4]{166,167,168,169});
HAnimJoint95->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
CHAnimJoint* HAnimJoint96 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint96->setDEF("Joe_l_carpal_distal_interphalangeal_1");
HAnimJoint96->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint96->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint96->setSkinCoordIndex(new int[9]{170,171,172,173,174,175,176,177,178});
HAnimJoint96->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint95->addChildren(*HAnimJoint96);

HAnimJoint94->addChildren(*HAnimJoint95);

HAnimJoint93->addChildren(*HAnimJoint94);

HAnimJoint89->addChildren(*HAnimJoint93);

CHAnimJoint* HAnimJoint97 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint97->setDEF("Joe_l_carpometacarpal_3");
HAnimJoint97->setName("l_carpometacarpal_3");
HAnimJoint97->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint97->setSkinCoordIndex(new int[2]{131,132});
HAnimJoint97->setSkinCoordWeight(new float[2]{1,1}, 2);
CHAnimJoint* HAnimJoint98 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint98->setDEF("Joe_l_metacarpophalangeal_3");
HAnimJoint98->setName("l_metacarpophalangeal_3");
HAnimJoint98->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint98->setSkinCoordIndex(new int[4]{156,157,163,164});
HAnimJoint98->setSkinCoordWeight(new float[4]{1,1,0.5,0.5}, 4);
CHAnimJoint* HAnimJoint99 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint99->setDEF("Joe_l_carpal_proximal_interphalangeal_2");
HAnimJoint99->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint99->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint99->setSkinCoordIndex(new int[4]{179,180,181,182});
HAnimJoint99->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
CHAnimJoint* HAnimJoint100 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint100->setDEF("Joe_l_carpal_distal_interphalangeal_2");
HAnimJoint100->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint100->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint100->setSkinCoordIndex(new int[9]{183,184,185,186,187,188,189,190,191});
HAnimJoint100->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint99->addChildren(*HAnimJoint100);

HAnimJoint98->addChildren(*HAnimJoint99);

HAnimJoint97->addChildren(*HAnimJoint98);

HAnimJoint89->addChildren(*HAnimJoint97);

CHAnimJoint* HAnimJoint101 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint101->setDEF("Joe_l_carpometacarpal_4");
HAnimJoint101->setName("l_carpometacarpal_4");
HAnimJoint101->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint101->setSkinCoordIndex(new int[2]{133,134});
HAnimJoint101->setSkinCoordWeight(new float[2]{1,1}, 2);
CHAnimJoint* HAnimJoint102 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint102->setDEF("Joe_l_metacarpophalangeal_4");
HAnimJoint102->setName("l_metacarpophalangeal_4");
HAnimJoint102->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint102->setSkinCoordIndex(new int[4]{158,159,164,165});
HAnimJoint102->setSkinCoordWeight(new float[4]{1,1,0.5,0.5}, 4);
CHAnimJoint* HAnimJoint103 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint103->setDEF("Joe_l_carpal_proximal_interphalangeal_3");
HAnimJoint103->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint103->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint103->setSkinCoordIndex(new int[4]{192,193,194,195});
HAnimJoint103->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
CHAnimJoint* HAnimJoint104 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint104->setDEF("Joe_l_carpal_distal_interphalangeal_3");
HAnimJoint104->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint104->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint104->setSkinCoordIndex(new int[9]{196,197,198,199,200,201,202,203,204});
HAnimJoint104->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint103->addChildren(*HAnimJoint104);

HAnimJoint102->addChildren(*HAnimJoint103);

HAnimJoint101->addChildren(*HAnimJoint102);

HAnimJoint89->addChildren(*HAnimJoint101);

CHAnimJoint* HAnimJoint105 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint105->setDEF("Joe_l_carpometacarpal_5");
HAnimJoint105->setName("l_carpometacarpal_5");
HAnimJoint105->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint105->setSkinCoordIndex(new int[4]{135,136,137,165});
HAnimJoint105->setSkinCoordWeight(new float[4]{1,1,1,0.5}, 4);
CHAnimJoint* HAnimJoint106 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint106->setDEF("Joe_l_metacarpophalangeal_5");
HAnimJoint106->setName("l_metacarpophalangeal_5");
HAnimJoint106->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint106->setSkinCoordIndex(new int[3]{160,161,162});
HAnimJoint106->setSkinCoordWeight(new float[3]{1,1,1}, 3);
CHAnimJoint* HAnimJoint107 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint107->setDEF("Joe_l_carpal_proximal_interphalangeal_4");
HAnimJoint107->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint107->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint107->setSkinCoordIndex(new int[4]{205,206,207,208});
HAnimJoint107->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
CHAnimJoint* HAnimJoint108 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint108->setDEF("Joe_l_carpal_distal_interphalangeal_4");
HAnimJoint108->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint108->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint108->setSkinCoordIndex(new int[9]{209,210,211,212,213,214,215,216,217});
HAnimJoint108->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint107->addChildren(*HAnimJoint108);

HAnimJoint106->addChildren(*HAnimJoint107);

HAnimJoint105->addChildren(*HAnimJoint106);

HAnimJoint89->addChildren(*HAnimJoint105);

HAnimJoint88->addChildren(*HAnimJoint89);

HAnimJoint87->addChildren(*HAnimJoint88);

HAnimJoint86->addChildren(*HAnimJoint87);

HAnimJoint85->addChildren(*HAnimJoint86);

HAnimJoint68->addChildren(*HAnimJoint85);

CHAnimJoint* HAnimJoint109 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint109->setDEF("Joe_r_sternoclavicular");
HAnimJoint109->setName("r_sternoclavicular");
HAnimJoint109->setCenter(new float[3]{-0.03,1.46,0});
HAnimJoint109->setSkinCoordIndex(new int[1]{10});
HAnimJoint109->setSkinCoordWeight(new float[1]{1}, 1);
CHAnimJoint* HAnimJoint110 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint110->setDEF("Joe_r_acromioclavicular");
HAnimJoint110->setName("r_acromioclavicular");
HAnimJoint110->setCenter(new float[3]{-0.09,1.41,-0.11});
HAnimJoint110->setSkinCoordIndex(new int[2]{77,29});
HAnimJoint110->setSkinCoordWeight(new float[2]{1,0.9}, 2);
CHAnimJoint* HAnimJoint111 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint111->setDEF("Joe_r_shoulder");
HAnimJoint111->setName("r_shoulder");
HAnimJoint111->setCenter(new float[3]{-0.2,1.44,-0.04});
HAnimJoint111->setSkinCoordIndex(new int[10]{29,30,32,78,218,219,220,221,86,88});
HAnimJoint111->setSkinCoordWeight(new float[10]{0.1,1,1,1,1,1,1,1,0.3,0.2}, 10);
CHAnimJoint* HAnimJoint112 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint112->setDEF("Joe_r_elbow");
HAnimJoint112->setName("r_elbow");
HAnimJoint112->setCenter(new float[3]{-0.2,1.1388,-0.04});
HAnimJoint112->setSkinCoordIndex(new int[12]{33,34,35,225,226,227,228,229,231,232,233,234});
HAnimJoint112->setSkinCoordWeight(new float[12]{1,1,1,1,1,1,1,1,1,1,1,1}, 12);
CHAnimJoint* HAnimJoint113 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint113->setDEF("Joe_r_radiocarpal");
HAnimJoint113->setName("r_radiocarpal");
HAnimJoint113->setCenter(new float[3]{-0.2,0.89,-0.04});
HAnimJoint113->setSkinCoordIndex(new int[8]{235,236,237,238,239,240,241,242});
HAnimJoint113->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
CHAnimJoint* HAnimJoint114 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint114->setDEF("Joe_r_carpometacarpal_1");
HAnimJoint114->setName("r_carpometacarpal_1");
HAnimJoint114->setCenter(new float[3]{-0.2,0.85,0});
HAnimJoint114->setSkinCoordIndex(new int[2]{243,244});
HAnimJoint114->setSkinCoordWeight(new float[2]{1,1}, 2);
CHAnimJoint* HAnimJoint115 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint115->setDEF("Joe_r_metacarpophalangeal_1");
HAnimJoint115->setName("r_metacarpophalangeal_1");
HAnimJoint115->setCenter(new float[3]{-0.2,0.82,0.03});
HAnimJoint115->setSkinCoordIndex(new int[6]{254,255,256,257,258,259});
HAnimJoint115->setSkinCoordWeight(new float[6]{0.5,0.5,0.5,1,1,1}, 6);
CHAnimJoint* HAnimJoint116 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint116->setDEF("Joe_r_carpal_interphalangeal_1");
HAnimJoint116->setName("r_carpal_interphalangeal_1");
HAnimJoint116->setCenter(new float[3]{-0.2,0.8,0.05});
HAnimJoint116->setSkinCoordIndex(new int[9]{260,261,262,263,264,265,266,267,268});
HAnimJoint116->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint115->addChildren(*HAnimJoint116);

HAnimJoint114->addChildren(*HAnimJoint115);

HAnimJoint113->addChildren(*HAnimJoint114);

CHAnimJoint* HAnimJoint117 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint117->setDEF("Joe_r_carpometacarpal_2");
HAnimJoint117->setName("r_carpometacarpal_2");
HAnimJoint117->setCenter(new float[3]{-0.2,0.84,-0.015});
HAnimJoint117->setSkinCoordIndex(new int[2]{245,246});
HAnimJoint117->setSkinCoordWeight(new float[2]{1,1}, 2);
CHAnimJoint* HAnimJoint118 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint118->setDEF("Joe_r_metacarpophalangeal_2");
HAnimJoint118->setName("r_metacarpophalangeal_2");
HAnimJoint118->setCenter(new float[3]{-0.2,0.793,-0.015});
HAnimJoint118->setSkinCoordIndex(new int[7]{254,255,256,269,270,271,279});
HAnimJoint118->setSkinCoordWeight(new float[7]{0.5,0.5,0.5,1,1,1,0.5}, 7);
CHAnimJoint* HAnimJoint119 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint119->setDEF("Joe_r_carpal_proximal_interphalangeal_1");
HAnimJoint119->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint119->setCenter(new float[3]{-0.2,0.745,-0.015});
HAnimJoint119->setSkinCoordIndex(new int[4]{282,283,284,285});
HAnimJoint119->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
CHAnimJoint* HAnimJoint120 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint120->setDEF("Joe_r_carpal_distal_interphalangeal_1");
HAnimJoint120->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint120->setCenter(new float[3]{-0.2,0.72,-0.015});
HAnimJoint120->setSkinCoordIndex(new int[9]{286,287,288,289,290,291,292,293,294});
HAnimJoint120->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint119->addChildren(*HAnimJoint120);

HAnimJoint118->addChildren(*HAnimJoint119);

HAnimJoint117->addChildren(*HAnimJoint118);

HAnimJoint113->addChildren(*HAnimJoint117);

CHAnimJoint* HAnimJoint121 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint121->setDEF("Joe_r_carpometacarpal_3");
HAnimJoint121->setName("r_carpometacarpal_3");
HAnimJoint121->setCenter(new float[3]{-0.2,0.835,-0.04});
HAnimJoint121->setSkinCoordIndex(new int[2]{247,248});
HAnimJoint121->setSkinCoordWeight(new float[2]{1,1}, 2);
CHAnimJoint* HAnimJoint122 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint122->setDEF("Joe_r_metacarpophalangeal_3");
HAnimJoint122->setName("r_metacarpophalangeal_3");
HAnimJoint122->setCenter(new float[3]{-0.2,0.788,-0.04});
HAnimJoint122->setSkinCoordIndex(new int[4]{272,273,279,280});
HAnimJoint122->setSkinCoordWeight(new float[4]{1,1,0.5,0.5}, 4);
CHAnimJoint* HAnimJoint123 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint123->setDEF("Joe_r_carpal_proximal_interphalangeal_2");
HAnimJoint123->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint123->setCenter(new float[3]{-0.2,0.74,-0.04});
HAnimJoint123->setSkinCoordIndex(new int[4]{295,296,297,298});
HAnimJoint123->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
CHAnimJoint* HAnimJoint124 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint124->setDEF("Joe_r_carpal_distal_interphalangeal_2");
HAnimJoint124->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint124->setCenter(new float[3]{-0.2,0.7142,-0.04});
HAnimJoint124->setSkinCoordIndex(new int[9]{299,300,301,302,303,304,305,306,307});
HAnimJoint124->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint123->addChildren(*HAnimJoint124);

HAnimJoint122->addChildren(*HAnimJoint123);

HAnimJoint121->addChildren(*HAnimJoint122);

HAnimJoint113->addChildren(*HAnimJoint121);

CHAnimJoint* HAnimJoint125 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint125->setDEF("Joe_r_carpometacarpal_4");
HAnimJoint125->setName("r_carpometacarpal_4");
HAnimJoint125->setCenter(new float[3]{-0.2,0.835,-0.065});
HAnimJoint125->setSkinCoordIndex(new int[2]{249,250});
HAnimJoint125->setSkinCoordWeight(new float[2]{1,1}, 2);
CHAnimJoint* HAnimJoint126 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint126->setDEF("Joe_r_metacarpophalangeal_4");
HAnimJoint126->setName("r_metacarpophalangeal_4");
HAnimJoint126->setCenter(new float[3]{-0.2,0.793,-0.065});
HAnimJoint126->setSkinCoordIndex(new int[4]{274,275,280,281});
HAnimJoint126->setSkinCoordWeight(new float[4]{1,1,0.5,0.5}, 4);
CHAnimJoint* HAnimJoint127 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint127->setDEF("Joe_r_carpal_proximal_interphalangeal_3");
HAnimJoint127->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint127->setCenter(new float[3]{-0.2,0.74,-0.065});
HAnimJoint127->setSkinCoordIndex(new int[4]{308,309,310,311});
HAnimJoint127->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
CHAnimJoint* HAnimJoint128 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint128->setDEF("Joe_r_carpal_distal_interphalangeal_3");
HAnimJoint128->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint128->setCenter(new float[3]{-0.2,0.7177,-0.065});
HAnimJoint128->setSkinCoordIndex(new int[9]{312,313,314,315,316,317,318,319,320});
HAnimJoint128->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint127->addChildren(*HAnimJoint128);

HAnimJoint126->addChildren(*HAnimJoint127);

HAnimJoint125->addChildren(*HAnimJoint126);

HAnimJoint113->addChildren(*HAnimJoint125);

CHAnimJoint* HAnimJoint129 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint129->setDEF("Joe_r_carpometacarpal_5");
HAnimJoint129->setName("r_carpometacarpal_5");
HAnimJoint129->setCenter(new float[3]{-0.2,0.84,-0.085});
HAnimJoint129->setSkinCoordIndex(new int[4]{251,252,253,281});
HAnimJoint129->setSkinCoordWeight(new float[4]{1,1,1,0.5}, 4);
CHAnimJoint* HAnimJoint130 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint130->setDEF("Joe_r_metacarpophalangeal_5");
HAnimJoint130->setName("r_metacarpophalangeal_5");
HAnimJoint130->setCenter(new float[3]{-0.2,0.79,-0.085});
HAnimJoint130->setSkinCoordIndex(new int[3]{276,277,278});
HAnimJoint130->setSkinCoordWeight(new float[3]{1,1,1}, 3);
CHAnimJoint* HAnimJoint131 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint131->setDEF("Joe_r_carpal_proximal_interphalangeal_4");
HAnimJoint131->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint131->setCenter(new float[3]{-0.2,0.755,-0.085});
HAnimJoint131->setSkinCoordIndex(new int[4]{321,322,323,324});
HAnimJoint131->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
CHAnimJoint* HAnimJoint132 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint132->setDEF("Joe_r_carpal_distal_interphalangeal_4");
HAnimJoint132->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint132->setCenter(new float[3]{-0.2,0.735,-0.09});
HAnimJoint132->setSkinCoordIndex(new int[9]{325,326,327,328,329,330,331,332,333});
HAnimJoint132->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint131->addChildren(*HAnimJoint132);

HAnimJoint130->addChildren(*HAnimJoint131);

HAnimJoint129->addChildren(*HAnimJoint130);

HAnimJoint113->addChildren(*HAnimJoint129);

HAnimJoint112->addChildren(*HAnimJoint113);

HAnimJoint111->addChildren(*HAnimJoint112);

HAnimJoint110->addChildren(*HAnimJoint111);

HAnimJoint109->addChildren(*HAnimJoint110);

HAnimJoint68->addChildren(*HAnimJoint109);

HAnimJoint67->addChildren(*HAnimJoint68);

HAnimJoint66->addChildren(*HAnimJoint67);

HAnimJoint65->addChildren(*HAnimJoint66);

HAnimJoint64->addChildren(*HAnimJoint65);

HAnimJoint63->addChildren(*HAnimJoint64);

HAnimJoint62->addChildren(*HAnimJoint63);

HAnimJoint61->addChildren(*HAnimJoint62);

HAnimJoint60->addChildren(*HAnimJoint61);

HAnimJoint59->addChildren(*HAnimJoint60);

HAnimJoint58->addChildren(*HAnimJoint59);

HAnimJoint57->addChildren(*HAnimJoint58);

HAnimJoint56->addChildren(*HAnimJoint57);

HAnimJoint55->addChildren(*HAnimJoint56);

HAnimJoint54->addChildren(*HAnimJoint55);

HAnimJoint53->addChildren(*HAnimJoint54);

HAnimJoint52->addChildren(*HAnimJoint53);

HAnimJoint30->addChildren(*HAnimJoint52);

HAnimHumanoid27->setSkeleton(*HAnimJoint30);

CHAnimSite* HAnimSite133 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite133->setUSE("Joe_RootFront_view");
HAnimHumanoid27->setSites(*HAnimSite133);

CHAnimSegment* HAnimSegment134 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment134->setUSE("Joe_sacrum");
HAnimHumanoid27->setSegments(*HAnimSegment134);

CHAnimJoint* HAnimJoint135 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint135->setUSE("Joe_humanoid_root");
HAnimHumanoid27->addJoints(*HAnimJoint135);

CHAnimJoint* HAnimJoint136 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint136->setUSE("Joe_sacroiliac");
HAnimHumanoid27->addJoints(*HAnimJoint136);

CHAnimJoint* HAnimJoint137 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint137->setUSE("Joe_skullbase");
HAnimHumanoid27->addJoints(*HAnimJoint137);

CHAnimJoint* HAnimJoint138 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint138->setUSE("Joe_temporomandibular");
HAnimHumanoid27->addJoints(*HAnimJoint138);

CHAnimJoint* HAnimJoint139 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint139->setUSE("Joe_vc1");
HAnimHumanoid27->addJoints(*HAnimJoint139);

CHAnimJoint* HAnimJoint140 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint140->setUSE("Joe_vc2");
HAnimHumanoid27->addJoints(*HAnimJoint140);

CHAnimJoint* HAnimJoint141 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint141->setUSE("Joe_vc3");
HAnimHumanoid27->addJoints(*HAnimJoint141);

CHAnimJoint* HAnimJoint142 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint142->setUSE("Joe_vc4");
HAnimHumanoid27->addJoints(*HAnimJoint142);

CHAnimJoint* HAnimJoint143 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint143->setUSE("Joe_vc5");
HAnimHumanoid27->addJoints(*HAnimJoint143);

CHAnimJoint* HAnimJoint144 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint144->setUSE("Joe_vc6");
HAnimHumanoid27->addJoints(*HAnimJoint144);

CHAnimJoint* HAnimJoint145 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint145->setUSE("Joe_vc7");
HAnimHumanoid27->addJoints(*HAnimJoint145);

CHAnimJoint* HAnimJoint146 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint146->setUSE("Joe_vl1");
HAnimHumanoid27->addJoints(*HAnimJoint146);

CHAnimJoint* HAnimJoint147 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint147->setUSE("Joe_vl2");
HAnimHumanoid27->addJoints(*HAnimJoint147);

CHAnimJoint* HAnimJoint148 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint148->setUSE("Joe_vl3");
HAnimHumanoid27->addJoints(*HAnimJoint148);

CHAnimJoint* HAnimJoint149 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint149->setUSE("Joe_vl4");
HAnimHumanoid27->addJoints(*HAnimJoint149);

CHAnimJoint* HAnimJoint150 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint150->setUSE("Joe_vl5");
HAnimHumanoid27->addJoints(*HAnimJoint150);

CHAnimJoint* HAnimJoint151 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint151->setUSE("Joe_vt1");
HAnimHumanoid27->addJoints(*HAnimJoint151);

CHAnimJoint* HAnimJoint152 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint152->setUSE("Joe_vt10");
HAnimHumanoid27->addJoints(*HAnimJoint152);

CHAnimJoint* HAnimJoint153 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint153->setUSE("Joe_vt11");
HAnimHumanoid27->addJoints(*HAnimJoint153);

CHAnimJoint* HAnimJoint154 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint154->setUSE("Joe_vt12");
HAnimHumanoid27->addJoints(*HAnimJoint154);

CHAnimJoint* HAnimJoint155 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint155->setUSE("Joe_vt2");
HAnimHumanoid27->addJoints(*HAnimJoint155);

CHAnimJoint* HAnimJoint156 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint156->setUSE("Joe_vt3");
HAnimHumanoid27->addJoints(*HAnimJoint156);

CHAnimJoint* HAnimJoint157 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint157->setUSE("Joe_vt4");
HAnimHumanoid27->addJoints(*HAnimJoint157);

CHAnimJoint* HAnimJoint158 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint158->setUSE("Joe_vt5");
HAnimHumanoid27->addJoints(*HAnimJoint158);

CHAnimJoint* HAnimJoint159 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint159->setUSE("Joe_vt6");
HAnimHumanoid27->addJoints(*HAnimJoint159);

CHAnimJoint* HAnimJoint160 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint160->setUSE("Joe_vt7");
HAnimHumanoid27->addJoints(*HAnimJoint160);

CHAnimJoint* HAnimJoint161 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint161->setUSE("Joe_vt8");
HAnimHumanoid27->addJoints(*HAnimJoint161);

CHAnimJoint* HAnimJoint162 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint162->setUSE("Joe_vt9");
HAnimHumanoid27->addJoints(*HAnimJoint162);

CHAnimJoint* HAnimJoint163 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint163->setUSE("Joe_l_acromioclavicular");
HAnimHumanoid27->addJoints(*HAnimJoint163);

CHAnimJoint* HAnimJoint164 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint164->setUSE("Joe_r_acromioclavicular");
HAnimHumanoid27->addJoints(*HAnimJoint164);

CHAnimJoint* HAnimJoint165 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint165->setUSE("Joe_l_carpal_distal_interphalangeal_1");
HAnimHumanoid27->addJoints(*HAnimJoint165);

CHAnimJoint* HAnimJoint166 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint166->setUSE("Joe_r_carpal_distal_interphalangeal_1");
HAnimHumanoid27->addJoints(*HAnimJoint166);

CHAnimJoint* HAnimJoint167 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint167->setUSE("Joe_l_carpal_distal_interphalangeal_2");
HAnimHumanoid27->addJoints(*HAnimJoint167);

CHAnimJoint* HAnimJoint168 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint168->setUSE("Joe_r_carpal_distal_interphalangeal_2");
HAnimHumanoid27->addJoints(*HAnimJoint168);

CHAnimJoint* HAnimJoint169 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint169->setUSE("Joe_l_carpal_distal_interphalangeal_3");
HAnimHumanoid27->addJoints(*HAnimJoint169);

CHAnimJoint* HAnimJoint170 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint170->setUSE("Joe_r_carpal_distal_interphalangeal_3");
HAnimHumanoid27->addJoints(*HAnimJoint170);

CHAnimJoint* HAnimJoint171 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint171->setUSE("Joe_l_carpal_distal_interphalangeal_4");
HAnimHumanoid27->addJoints(*HAnimJoint171);

CHAnimJoint* HAnimJoint172 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint172->setUSE("Joe_r_carpal_distal_interphalangeal_4");
HAnimHumanoid27->addJoints(*HAnimJoint172);

CHAnimJoint* HAnimJoint173 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint173->setUSE("Joe_l_carpal_interphalangeal_1");
HAnimHumanoid27->addJoints(*HAnimJoint173);

CHAnimJoint* HAnimJoint174 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint174->setUSE("Joe_r_carpal_interphalangeal_1");
HAnimHumanoid27->addJoints(*HAnimJoint174);

CHAnimJoint* HAnimJoint175 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint175->setUSE("Joe_l_carpal_proximal_interphalangeal_1");
HAnimHumanoid27->addJoints(*HAnimJoint175);

CHAnimJoint* HAnimJoint176 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint176->setUSE("Joe_r_carpal_proximal_interphalangeal_1");
HAnimHumanoid27->addJoints(*HAnimJoint176);

CHAnimJoint* HAnimJoint177 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint177->setUSE("Joe_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid27->addJoints(*HAnimJoint177);

CHAnimJoint* HAnimJoint178 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint178->setUSE("Joe_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid27->addJoints(*HAnimJoint178);

CHAnimJoint* HAnimJoint179 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint179->setUSE("Joe_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid27->addJoints(*HAnimJoint179);

CHAnimJoint* HAnimJoint180 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint180->setUSE("Joe_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid27->addJoints(*HAnimJoint180);

CHAnimJoint* HAnimJoint181 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint181->setUSE("Joe_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid27->addJoints(*HAnimJoint181);

CHAnimJoint* HAnimJoint182 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint182->setUSE("Joe_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid27->addJoints(*HAnimJoint182);

CHAnimJoint* HAnimJoint183 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint183->setUSE("Joe_l_carpometacarpal_1");
HAnimHumanoid27->addJoints(*HAnimJoint183);

CHAnimJoint* HAnimJoint184 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint184->setUSE("Joe_r_carpometacarpal_1");
HAnimHumanoid27->addJoints(*HAnimJoint184);

CHAnimJoint* HAnimJoint185 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint185->setUSE("Joe_l_carpometacarpal_2");
HAnimHumanoid27->addJoints(*HAnimJoint185);

CHAnimJoint* HAnimJoint186 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint186->setUSE("Joe_r_carpometacarpal_2");
HAnimHumanoid27->addJoints(*HAnimJoint186);

CHAnimJoint* HAnimJoint187 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint187->setUSE("Joe_l_carpometacarpal_3");
HAnimHumanoid27->addJoints(*HAnimJoint187);

CHAnimJoint* HAnimJoint188 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint188->setUSE("Joe_r_carpometacarpal_3");
HAnimHumanoid27->addJoints(*HAnimJoint188);

CHAnimJoint* HAnimJoint189 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint189->setUSE("Joe_l_carpometacarpal_4");
HAnimHumanoid27->addJoints(*HAnimJoint189);

CHAnimJoint* HAnimJoint190 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint190->setUSE("Joe_r_carpometacarpal_4");
HAnimHumanoid27->addJoints(*HAnimJoint190);

CHAnimJoint* HAnimJoint191 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint191->setUSE("Joe_l_carpometacarpal_5");
HAnimHumanoid27->addJoints(*HAnimJoint191);

CHAnimJoint* HAnimJoint192 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint192->setUSE("Joe_r_carpometacarpal_5");
HAnimHumanoid27->addJoints(*HAnimJoint192);

CHAnimJoint* HAnimJoint193 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint193->setUSE("Joe_l_elbow");
HAnimHumanoid27->addJoints(*HAnimJoint193);

CHAnimJoint* HAnimJoint194 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint194->setUSE("Joe_r_elbow");
HAnimHumanoid27->addJoints(*HAnimJoint194);

CHAnimJoint* HAnimJoint195 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint195->setUSE("Joe_l_eyeball_joint");
HAnimHumanoid27->addJoints(*HAnimJoint195);

CHAnimJoint* HAnimJoint196 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint196->setUSE("Joe_r_eyeball_joint");
HAnimHumanoid27->addJoints(*HAnimJoint196);

CHAnimJoint* HAnimJoint197 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint197->setUSE("Joe_l_eyebrow_joint");
HAnimHumanoid27->addJoints(*HAnimJoint197);

CHAnimJoint* HAnimJoint198 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint198->setUSE("Joe_r_eyebrow_joint");
HAnimHumanoid27->addJoints(*HAnimJoint198);

CHAnimJoint* HAnimJoint199 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint199->setUSE("Joe_l_eyelid_joint");
HAnimHumanoid27->addJoints(*HAnimJoint199);

CHAnimJoint* HAnimJoint200 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint200->setUSE("Joe_r_eyelid_joint");
HAnimHumanoid27->addJoints(*HAnimJoint200);

CHAnimJoint* HAnimJoint201 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint201->setUSE("Joe_l_hip");
HAnimHumanoid27->addJoints(*HAnimJoint201);

CHAnimJoint* HAnimJoint202 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint202->setUSE("Joe_r_hip");
HAnimHumanoid27->addJoints(*HAnimJoint202);

CHAnimJoint* HAnimJoint203 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint203->setUSE("Joe_l_knee");
HAnimHumanoid27->addJoints(*HAnimJoint203);

CHAnimJoint* HAnimJoint204 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint204->setUSE("Joe_r_knee");
HAnimHumanoid27->addJoints(*HAnimJoint204);

CHAnimJoint* HAnimJoint205 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint205->setUSE("Joe_l_metacarpophalangeal_1");
HAnimHumanoid27->addJoints(*HAnimJoint205);

CHAnimJoint* HAnimJoint206 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint206->setUSE("Joe_r_metacarpophalangeal_1");
HAnimHumanoid27->addJoints(*HAnimJoint206);

CHAnimJoint* HAnimJoint207 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint207->setUSE("Joe_l_metacarpophalangeal_2");
HAnimHumanoid27->addJoints(*HAnimJoint207);

CHAnimJoint* HAnimJoint208 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint208->setUSE("Joe_r_metacarpophalangeal_2");
HAnimHumanoid27->addJoints(*HAnimJoint208);

CHAnimJoint* HAnimJoint209 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint209->setUSE("Joe_l_metacarpophalangeal_3");
HAnimHumanoid27->addJoints(*HAnimJoint209);

CHAnimJoint* HAnimJoint210 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint210->setUSE("Joe_r_metacarpophalangeal_3");
HAnimHumanoid27->addJoints(*HAnimJoint210);

CHAnimJoint* HAnimJoint211 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint211->setUSE("Joe_l_metacarpophalangeal_4");
HAnimHumanoid27->addJoints(*HAnimJoint211);

CHAnimJoint* HAnimJoint212 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint212->setUSE("Joe_r_metacarpophalangeal_4");
HAnimHumanoid27->addJoints(*HAnimJoint212);

CHAnimJoint* HAnimJoint213 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint213->setUSE("Joe_l_metacarpophalangeal_5");
HAnimHumanoid27->addJoints(*HAnimJoint213);

CHAnimJoint* HAnimJoint214 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint214->setUSE("Joe_r_metacarpophalangeal_5");
HAnimHumanoid27->addJoints(*HAnimJoint214);

CHAnimJoint* HAnimJoint215 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint215->setUSE("Joe_l_metatarsophalangeal_1");
HAnimHumanoid27->addJoints(*HAnimJoint215);

CHAnimJoint* HAnimJoint216 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint216->setUSE("Joe_r_metatarsophalangeal_1");
HAnimHumanoid27->addJoints(*HAnimJoint216);

CHAnimJoint* HAnimJoint217 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint217->setUSE("Joe_l_radiocarpal");
HAnimHumanoid27->addJoints(*HAnimJoint217);

CHAnimJoint* HAnimJoint218 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint218->setUSE("Joe_r_radiocarpal");
HAnimHumanoid27->addJoints(*HAnimJoint218);

CHAnimJoint* HAnimJoint219 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint219->setUSE("Joe_l_shoulder");
HAnimHumanoid27->addJoints(*HAnimJoint219);

CHAnimJoint* HAnimJoint220 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint220->setUSE("Joe_r_shoulder");
HAnimHumanoid27->addJoints(*HAnimJoint220);

CHAnimJoint* HAnimJoint221 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint221->setUSE("Joe_l_sternoclavicular");
HAnimHumanoid27->addJoints(*HAnimJoint221);

CHAnimJoint* HAnimJoint222 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint222->setUSE("Joe_r_sternoclavicular");
HAnimHumanoid27->addJoints(*HAnimJoint222);

CHAnimJoint* HAnimJoint223 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint223->setUSE("Joe_l_talocrural");
HAnimHumanoid27->addJoints(*HAnimJoint223);

CHAnimJoint* HAnimJoint224 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint224->setUSE("Joe_r_talocrural");
HAnimHumanoid27->addJoints(*HAnimJoint224);

CHAnimJoint* HAnimJoint225 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint225->setUSE("Joe_l_tarsal_distal_interphalangeal_1");
HAnimHumanoid27->addJoints(*HAnimJoint225);

CHAnimJoint* HAnimJoint226 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint226->setUSE("Joe_r_tarsal_distal_interphalangeal_1");
HAnimHumanoid27->addJoints(*HAnimJoint226);

CHAnimJoint* HAnimJoint227 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint227->setUSE("Joe_l_tarsometatarsal_1");
HAnimHumanoid27->addJoints(*HAnimJoint227);

CHAnimJoint* HAnimJoint228 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint228->setUSE("Joe_r_tarsometatarsal_1");
HAnimHumanoid27->addJoints(*HAnimJoint228);

CCoordinate* Coordinate229 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate229->setDEF("Joe_SkinCoord");
Coordinate229->setPoint(new float[1170]{0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168});
HAnimHumanoid27->setSkinCoord(*Coordinate229);

CShape* Shape230 = (CShape *)(m_pScene.createNode("Shape"));
Shape230->setDEF("Joe_Shape");
CAppearance* Appearance231 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance231->setDEF("Joe_skin_Appearance");
CMaterial* Material232 = (CMaterial *)(m_pScene.createNode("Material"));
Material232->setDEF("Joe_skin_Material");
Material232->setDiffuseColor(new float[3]{0.3,0.3,0.6});
Material232->setEmissiveColor(new float[3]{0.3,0.3,0.6});
Appearance231->setMaterial(*Material232);

CImageTexture* ImageTexture233 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture233->setDEF("JoeSkinImageTexture");
ImageTexture233->setUrl(new CString[2]{"JoeBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png"}, 2);
Appearance231->setTexture(*ImageTexture233);

CTextureTransform* TextureTransform234 = (CTextureTransform *)(m_pScene.createNode("TextureTransform"));
TextureTransform234->setDEF("KickTextureTransform");
Appearance231->setTextureTransform(*TextureTransform234);

Shape230->setAppearance(*Appearance231);

CIndexedFaceSet* IndexedFaceSet235 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet235->setDEF("Joe_skin_IndexedFaceSet");
IndexedFaceSet235->setCreaseAngle(3.14);
IndexedFaceSet235->setCoordIndex(new int[2780]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
CTextureCoordinate* TextureCoordinate236 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate236->setPoint(new float[8]{0,0,0.5,0.5,0.5,0,0,0.5});
IndexedFaceSet235->setTexCoord(*TextureCoordinate236);

CCoordinate* Coordinate237 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate237->setUSE("Joe_SkinCoord");
IndexedFaceSet235->setCoord(*Coordinate237);

Shape230->setGeometry(IndexedFaceSet235);

HAnimHumanoid27->setSkin(*Shape230);

Group26->addChildren(*HAnimHumanoid27);

group->addChildren(*Group26);

CGroup* Group238 = (CGroup *)(m_pScene.createNode("Group"));
CTimeSensor* TimeSensor239 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor239->setDEF("KickTimer");
TimeSensor239->setCycleInterval(3.73);
TimeSensor239->setLoop(True);
Group238->addChildren(*TimeSensor239);

COrientationInterpolator* OrientationInterpolator240 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator240->setDEF("HumanoidRoot_RotationInterpolator");
OrientationInterpolator240->setKey(new float[5]{0,0.1,0.4,0.6,1}, 5);
OrientationInterpolator240->setKeyValue(new float[20]{1,0,0,0.5,1,0,0,0.5,-1,0,0,0.1,-1,0,0,0.5,-1,0,0,0.5});
Group238->addChildren(*OrientationInterpolator240);

CPositionInterpolator* PositionInterpolator241 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator241->setDEF("HumanoidRoot_TranslationInterpolator");
PositionInterpolator241->setKey(new float[4]{0,0.2,0.6,1}, 4);
PositionInterpolator241->setKeyValue(new float[12]{1,0.3,-1,0.4,-0.04,-0.4,-0.18,0.1,0,-0.2,0.15,0.15});
Group238->addChildren(*PositionInterpolator241);

COrientationInterpolator* OrientationInterpolator242 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator242->setDEF("sacroiliac_RotationInterpolator");
OrientationInterpolator242->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator242->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator242);

COrientationInterpolator* OrientationInterpolator243 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator243->setDEF("l_hip_RotationInterpolator");
OrientationInterpolator243->setKey(new float[5]{0,0.1,0.3,0.45,1}, 5);
OrientationInterpolator243->setKeyValue(new float[20]{-1,0,0,1.5,-1,0,0,1,0,0,1,0,1,0,0,0.5,1,0,0,1});
Group238->addChildren(*OrientationInterpolator243);

COrientationInterpolator* OrientationInterpolator244 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator244->setDEF("l_knee_RotationInterpolator");
OrientationInterpolator244->setKey(new float[5]{0,0.2,0.35,0.5,1}, 5);
OrientationInterpolator244->setKeyValue(new float[20]{1,0,0,1,0,0,1,0,0,0,1,0.2,1,0,1,0.5,1,0,0,1.4});
Group238->addChildren(*OrientationInterpolator244);

COrientationInterpolator* OrientationInterpolator245 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator245->setDEF("l_ankle_RotationInterpolator");
OrientationInterpolator245->setKey(new float[3]{0,0.25,1}, 3);
OrientationInterpolator245->setKeyValue(new float[12]{-1,0,0,1,0,0,1,0,1,0,0,1});
Group238->addChildren(*OrientationInterpolator245);

COrientationInterpolator* OrientationInterpolator246 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator246->setDEF("l_subtalar_RotationInterpolator");
OrientationInterpolator246->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator246->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator246);

COrientationInterpolator* OrientationInterpolator247 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator247->setDEF("l_midtarsal_RotationInterpolator");
OrientationInterpolator247->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator247->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator247);

COrientationInterpolator* OrientationInterpolator248 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator248->setDEF("l_metatarsal_RotationInterpolator");
OrientationInterpolator248->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator248->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator248);

COrientationInterpolator* OrientationInterpolator249 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator249->setDEF("r_hip_RotationInterpolator");
OrientationInterpolator249->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator249->setKeyValue(new float[20]{1,0,0,1,1,0,0,1,-1,0,0,1,-1,0,0,1,-1,0,0,1});
Group238->addChildren(*OrientationInterpolator249);

COrientationInterpolator* OrientationInterpolator250 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator250->setDEF("r_knee_RotationInterpolator");
OrientationInterpolator250->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator250->setKeyValue(new float[20]{1,0,0,0.1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,1.5});
Group238->addChildren(*OrientationInterpolator250);

COrientationInterpolator* OrientationInterpolator251 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator251->setDEF("r_ankle_RotationInterpolator");
OrientationInterpolator251->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator251->setKeyValue(new float[20]{-1,0,0,1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,0.5});
Group238->addChildren(*OrientationInterpolator251);

COrientationInterpolator* OrientationInterpolator252 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator252->setDEF("r_subtalar_RotationInterpolator");
OrientationInterpolator252->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator252->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator252);

COrientationInterpolator* OrientationInterpolator253 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator253->setDEF("r_midtarsal_RotationInterpolator");
OrientationInterpolator253->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator253->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator253);

COrientationInterpolator* OrientationInterpolator254 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator254->setDEF("r_metatarsal_RotationInterpolator");
OrientationInterpolator254->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator254->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator254);

COrientationInterpolator* OrientationInterpolator255 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator255->setDEF("vl5_RotationInterpolator");
OrientationInterpolator255->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator255->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator255);

COrientationInterpolator* OrientationInterpolator256 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator256->setDEF("vl4_RotationInterpolator");
OrientationInterpolator256->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator256->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator256);

COrientationInterpolator* OrientationInterpolator257 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator257->setDEF("vl3_RotationInterpolator");
OrientationInterpolator257->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator257->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator257);

COrientationInterpolator* OrientationInterpolator258 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator258->setDEF("vl2_RotationInterpolator");
OrientationInterpolator258->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator258->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator258);

COrientationInterpolator* OrientationInterpolator259 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator259->setDEF("vl1_RotationInterpolator");
OrientationInterpolator259->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator259->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator259);

COrientationInterpolator* OrientationInterpolator260 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator260->setDEF("vt12_RotationInterpolator");
OrientationInterpolator260->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator260->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator260);

COrientationInterpolator* OrientationInterpolator261 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator261->setDEF("vt11_RotationInterpolator");
OrientationInterpolator261->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator261->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator261);

COrientationInterpolator* OrientationInterpolator262 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator262->setDEF("vt10_RotationInterpolator");
OrientationInterpolator262->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator262->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator262);

COrientationInterpolator* OrientationInterpolator263 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator263->setDEF("vt9_RotationInterpolator");
OrientationInterpolator263->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator263->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator263);

COrientationInterpolator* OrientationInterpolator264 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator264->setDEF("vt8_RotationInterpolator");
OrientationInterpolator264->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator264->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator264);

COrientationInterpolator* OrientationInterpolator265 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator265->setDEF("vt7_RotationInterpolator");
OrientationInterpolator265->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator265->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator265);

COrientationInterpolator* OrientationInterpolator266 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator266->setDEF("vt6_RotationInterpolator");
OrientationInterpolator266->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator266->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator266);

COrientationInterpolator* OrientationInterpolator267 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator267->setDEF("vt5_RotationInterpolator");
OrientationInterpolator267->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator267->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator267);

COrientationInterpolator* OrientationInterpolator268 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator268->setDEF("vt4_RotationInterpolator");
OrientationInterpolator268->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator268->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator268);

COrientationInterpolator* OrientationInterpolator269 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator269->setDEF("vt3_RotationInterpolator");
OrientationInterpolator269->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator269->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator269);

COrientationInterpolator* OrientationInterpolator270 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator270->setDEF("vt2_RotationInterpolator");
OrientationInterpolator270->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator270->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator270);

COrientationInterpolator* OrientationInterpolator271 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator271->setDEF("vt1_RotationInterpolator");
OrientationInterpolator271->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator271->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator271);

COrientationInterpolator* OrientationInterpolator272 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator272->setDEF("vc7_RotationInterpolator");
OrientationInterpolator272->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator272->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator272);

COrientationInterpolator* OrientationInterpolator273 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator273->setDEF("vc6_RotationInterpolator");
OrientationInterpolator273->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator273->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator273);

COrientationInterpolator* OrientationInterpolator274 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator274->setDEF("vc5_RotationInterpolator");
OrientationInterpolator274->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator274->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator274);

COrientationInterpolator* OrientationInterpolator275 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator275->setDEF("vc4_RotationInterpolator");
OrientationInterpolator275->setKey(new float[4]{0,0.3,0.4,1}, 4);
OrientationInterpolator275->setKeyValue(new float[16]{1,0,1,0.25,-1,0,-1,0.35,1,0,0,0.75,1,0,1,0.5});
Group238->addChildren(*OrientationInterpolator275);

COrientationInterpolator* OrientationInterpolator276 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator276->setDEF("vc3_RotationInterpolator");
OrientationInterpolator276->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator276->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator276);

COrientationInterpolator* OrientationInterpolator277 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator277->setDEF("vc2_RotationInterpolator");
OrientationInterpolator277->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator277->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator277);

COrientationInterpolator* OrientationInterpolator278 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator278->setDEF("vc1_RotationInterpolator");
OrientationInterpolator278->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator278->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator278);

COrientationInterpolator* OrientationInterpolator279 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator279->setDEF("skullbase_RotationInterpolator");
OrientationInterpolator279->setKey(new float[4]{0,0.2,0.75,1}, 4);
OrientationInterpolator279->setKeyValue(new float[16]{0,-1,0,0.5,0,0,1,0,0,0,1,0,0,1,0,0.35});
Group238->addChildren(*OrientationInterpolator279);

COrientationInterpolator* OrientationInterpolator280 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator280->setDEF("l_eyelid_joint_RotationInterpolator");
OrientationInterpolator280->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator280->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator280);

COrientationInterpolator* OrientationInterpolator281 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator281->setDEF("l_eyeball_joint_RotationInterpolator");
OrientationInterpolator281->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator281->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator281);

COrientationInterpolator* OrientationInterpolator282 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator282->setDEF("l_eyebrow_joint_RotationInterpolator");
OrientationInterpolator282->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator282->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator282);

COrientationInterpolator* OrientationInterpolator283 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator283->setDEF("r_eyelid_joint_RotationInterpolator");
OrientationInterpolator283->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator283->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator283);

COrientationInterpolator* OrientationInterpolator284 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator284->setDEF("r_eyeball_joint_RotationInterpolator");
OrientationInterpolator284->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator284->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator284);

COrientationInterpolator* OrientationInterpolator285 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator285->setDEF("r_eyebrow_joint_RotationInterpolator");
OrientationInterpolator285->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator285->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator285);

COrientationInterpolator* OrientationInterpolator286 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator286->setDEF("temporomandibular_RotationInterpolator");
OrientationInterpolator286->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator286->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator286);

COrientationInterpolator* OrientationInterpolator287 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator287->setDEF("l_sternoclavicular_RotationInterpolator");
OrientationInterpolator287->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator287->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator287);

COrientationInterpolator* OrientationInterpolator288 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator288->setDEF("l_acromioclavicular_RotationInterpolator");
OrientationInterpolator288->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator288->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator288);

COrientationInterpolator* OrientationInterpolator289 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator289->setDEF("l_shoulder_RotationInterpolator");
OrientationInterpolator289->setKey(new float[3]{0,0.4,1}, 3);
OrientationInterpolator289->setKeyValue(new float[12]{0,0,1,0,0,0,1,1.5,-1,0,1,1.75});
Group238->addChildren(*OrientationInterpolator289);

COrientationInterpolator* OrientationInterpolator290 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator290->setDEF("l_elbow_RotationInterpolator");
OrientationInterpolator290->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator290->setKeyValue(new float[12]{-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5});
Group238->addChildren(*OrientationInterpolator290);

COrientationInterpolator* OrientationInterpolator291 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator291->setDEF("l_wrist_RotationInterpolator");
OrientationInterpolator291->setKey(new float[4]{0,0.4,0.8,1}, 4);
OrientationInterpolator291->setKeyValue(new float[16]{0,0,1,0,0,1,0,1.3,0,-0.5,1,1.3,0,0,1,0});
Group238->addChildren(*OrientationInterpolator291);

COrientationInterpolator* OrientationInterpolator292 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator292->setDEF("l_thumb1_RotationInterpolator");
OrientationInterpolator292->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator292->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator292);

COrientationInterpolator* OrientationInterpolator293 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator293->setDEF("l_thumb2_RotationInterpolator");
OrientationInterpolator293->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator293->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator293);

COrientationInterpolator* OrientationInterpolator294 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator294->setDEF("l_thumb3_RotationInterpolator");
OrientationInterpolator294->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator294->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator294);

COrientationInterpolator* OrientationInterpolator295 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator295->setDEF("l_index0_RotationInterpolator");
OrientationInterpolator295->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator295->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator295);

COrientationInterpolator* OrientationInterpolator296 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator296->setDEF("l_index1_RotationInterpolator");
OrientationInterpolator296->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator296->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator296);

COrientationInterpolator* OrientationInterpolator297 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator297->setDEF("l_index2_RotationInterpolator");
OrientationInterpolator297->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator297->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator297);

COrientationInterpolator* OrientationInterpolator298 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator298->setDEF("l_index3_RotationInterpolator");
OrientationInterpolator298->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator298->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator298);

COrientationInterpolator* OrientationInterpolator299 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator299->setDEF("l_middle0_RotationInterpolator");
OrientationInterpolator299->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator299->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator299);

COrientationInterpolator* OrientationInterpolator300 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator300->setDEF("l_middle1_RotationInterpolator");
OrientationInterpolator300->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator300->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator300);

COrientationInterpolator* OrientationInterpolator301 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator301->setDEF("l_middle2_RotationInterpolator");
OrientationInterpolator301->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator301->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator301);

COrientationInterpolator* OrientationInterpolator302 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator302->setDEF("l_middle3_RotationInterpolator");
OrientationInterpolator302->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator302->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator302);

COrientationInterpolator* OrientationInterpolator303 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator303->setDEF("l_ring0_RotationInterpolator");
OrientationInterpolator303->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator303->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator303);

COrientationInterpolator* OrientationInterpolator304 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator304->setDEF("l_ring1_RotationInterpolator");
OrientationInterpolator304->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator304->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator304);

COrientationInterpolator* OrientationInterpolator305 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator305->setDEF("l_ring2_RotationInterpolator");
OrientationInterpolator305->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator305->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator305);

COrientationInterpolator* OrientationInterpolator306 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator306->setDEF("l_ring3_RotationInterpolator");
OrientationInterpolator306->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator306->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator306);

COrientationInterpolator* OrientationInterpolator307 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator307->setDEF("l_pinky0_RotationInterpolator");
OrientationInterpolator307->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator307->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator307);

COrientationInterpolator* OrientationInterpolator308 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator308->setDEF("l_pinky1_RotationInterpolator");
OrientationInterpolator308->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator308->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator308);

COrientationInterpolator* OrientationInterpolator309 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator309->setDEF("l_pinky2_RotationInterpolator");
OrientationInterpolator309->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator309->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator309);

COrientationInterpolator* OrientationInterpolator310 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator310->setDEF("l_pinky3_RotationInterpolator");
OrientationInterpolator310->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator310->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator310);

COrientationInterpolator* OrientationInterpolator311 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator311->setDEF("r_sternoclavicular_RotationInterpolator");
OrientationInterpolator311->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator311->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator311);

COrientationInterpolator* OrientationInterpolator312 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator312->setDEF("r_acromioclavicular_RotationInterpolator");
OrientationInterpolator312->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator312->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator312);

COrientationInterpolator* OrientationInterpolator313 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator313->setDEF("r_shoulder_RotationInterpolator");
OrientationInterpolator313->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator313->setKeyValue(new float[12]{0,0,-1,2.5,0,0,-1,1.5,0,0,-1,1.75});
Group238->addChildren(*OrientationInterpolator313);

COrientationInterpolator* OrientationInterpolator314 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator314->setDEF("r_elbow_RotationInterpolator");
OrientationInterpolator314->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator314->setKeyValue(new float[12]{-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5});
Group238->addChildren(*OrientationInterpolator314);

COrientationInterpolator* OrientationInterpolator315 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator315->setDEF("r_wrist_RotationInterpolator");
OrientationInterpolator315->setKey(new float[4]{0,0.5,0.7,1}, 4);
OrientationInterpolator315->setKeyValue(new float[16]{0,1,0,0.3,0,0,1,0,0,0,-1,1,0,-1,0,0.3});
Group238->addChildren(*OrientationInterpolator315);

COrientationInterpolator* OrientationInterpolator316 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator316->setDEF("r_thumb1_RotationInterpolator");
OrientationInterpolator316->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator316->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator316);

COrientationInterpolator* OrientationInterpolator317 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator317->setDEF("r_thumb2_RotationInterpolator");
OrientationInterpolator317->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator317->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator317);

COrientationInterpolator* OrientationInterpolator318 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator318->setDEF("r_thumb3_RotationInterpolator");
OrientationInterpolator318->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator318->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group238->addChildren(*OrientationInterpolator318);

COrientationInterpolator* OrientationInterpolator319 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator319->setDEF("r_index0_RotationInterpolator");
OrientationInterpolator319->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator319->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0});
Group238->addChildren(*OrientationInterpolator319);

COrientationInterpolator* OrientationInterpolator320 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator320->setDEF("r_index1_RotationInterpolator");
OrientationInterpolator320->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator320->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group238->addChildren(*OrientationInterpolator320);

COrientationInterpolator* OrientationInterpolator321 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator321->setDEF("r_index2_RotationInterpolator");
OrientationInterpolator321->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator321->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group238->addChildren(*OrientationInterpolator321);

COrientationInterpolator* OrientationInterpolator322 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator322->setDEF("r_index3_RotationInterpolator");
OrientationInterpolator322->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator322->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group238->addChildren(*OrientationInterpolator322);

COrientationInterpolator* OrientationInterpolator323 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator323->setDEF("r_middle0_RotationInterpolator");
OrientationInterpolator323->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator323->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0});
Group238->addChildren(*OrientationInterpolator323);

COrientationInterpolator* OrientationInterpolator324 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator324->setDEF("r_middle1_RotationInterpolator");
OrientationInterpolator324->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator324->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group238->addChildren(*OrientationInterpolator324);

COrientationInterpolator* OrientationInterpolator325 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator325->setDEF("r_middle2_RotationInterpolator");
OrientationInterpolator325->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator325->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group238->addChildren(*OrientationInterpolator325);

COrientationInterpolator* OrientationInterpolator326 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator326->setDEF("r_middle3_RotationInterpolator");
OrientationInterpolator326->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator326->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group238->addChildren(*OrientationInterpolator326);

COrientationInterpolator* OrientationInterpolator327 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator327->setDEF("r_ring0_RotationInterpolator");
OrientationInterpolator327->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator327->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0});
Group238->addChildren(*OrientationInterpolator327);

COrientationInterpolator* OrientationInterpolator328 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator328->setDEF("r_ring1_RotationInterpolator");
OrientationInterpolator328->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator328->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group238->addChildren(*OrientationInterpolator328);

COrientationInterpolator* OrientationInterpolator329 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator329->setDEF("r_ring2_RotationInterpolator");
OrientationInterpolator329->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator329->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group238->addChildren(*OrientationInterpolator329);

COrientationInterpolator* OrientationInterpolator330 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator330->setDEF("r_ring3_RotationInterpolator");
OrientationInterpolator330->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator330->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group238->addChildren(*OrientationInterpolator330);

COrientationInterpolator* OrientationInterpolator331 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator331->setDEF("r_pinky0_RotationInterpolator");
OrientationInterpolator331->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator331->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0});
Group238->addChildren(*OrientationInterpolator331);

COrientationInterpolator* OrientationInterpolator332 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator332->setDEF("r_pinky1_RotationInterpolator");
OrientationInterpolator332->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator332->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group238->addChildren(*OrientationInterpolator332);

COrientationInterpolator* OrientationInterpolator333 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator333->setDEF("r_pinky2_RotationInterpolator");
OrientationInterpolator333->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator333->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group238->addChildren(*OrientationInterpolator333);

COrientationInterpolator* OrientationInterpolator334 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator334->setDEF("r_pinky3_RotationInterpolator");
OrientationInterpolator334->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator334->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group238->addChildren(*OrientationInterpolator334);

group->addChildren(*Group238);

CGroup* Group335 = (CGroup *)(m_pScene.createNode("Group"));
Group335->setDEF("DisplacersAnimationGroup");
CScalarInterpolator* ScalarInterpolator336 = (CScalarInterpolator *)(m_pScene.createNode("ScalarInterpolator"));
ScalarInterpolator336->setDEF("skull_tipInterpolator");
ScalarInterpolator336->setKey(new float[11]{0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1}, 11);
ScalarInterpolator336->setKeyValue(new float[11]{0,0,0,0,0.2,0.4,1,0,1,0.4,0}, 11);
Group335->addChildren(*ScalarInterpolator336);

group->addChildren(*Group335);

CGroup* Group337 = (CGroup *)(m_pScene.createNode("Group"));
Group337->setDEF("SkinTextureTransformAnimationGroup");
CScalarInterpolator* ScalarInterpolator338 = (CScalarInterpolator *)(m_pScene.createNode("ScalarInterpolator"));
ScalarInterpolator338->setDEF("SkinInterpolator");
ScalarInterpolator338->setKey(new float[8]{0,0.2,0.4,0.5,0.6,0.7,0.8,1}, 8);
ScalarInterpolator338->setKeyValue(new float[8]{0,0,0,0,0,1,2,0}, 8);
Group337->addChildren(*ScalarInterpolator338);

group->addChildren(*Group337);

CGroup* Group339 = (CGroup *)(m_pScene.createNode("Group"));
CTransform* Transform340 = (CTransform *)(m_pScene.createNode("Transform"));
Transform340->setDEF("SBall");
Transform340->setTranslation(new float[3]{-0.916,0.37,-0.92});
Transform340->setRotation(new float[4]{0.7,0,0.7,0.1});
Transform340->setScale(new float[3]{0.23,0.23,0.23});
CShape* Shape341 = (CShape *)(m_pScene.createNode("Shape"));
Shape341->setDEF("ball_Shape");
CAppearance* Appearance342 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance342->setDEF("ball_Appearance");
CMaterial* Material343 = (CMaterial *)(m_pScene.createNode("Material"));
Material343->setDEF("ball_Material");
Material343->setDiffuseColor(new float[3]{0.3,0.3,1});
Material343->setEmissiveColor(new float[3]{0.3,0.3,0.33});
Appearance342->setMaterial(*Material343);

CImageTexture* ImageTexture344 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture344->setUSE("JoeSkinImageTexture");
Appearance342->setTexture(*ImageTexture344);

Shape341->setAppearance(*Appearance342);

CIndexedFaceSet* IndexedFaceSet345 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet345->setDEF("ball_IndexedFaceSet");
IndexedFaceSet345->setCoordIndex(new int[480]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
CCoordinate* Coordinate346 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate346->setDEF("Ball_Coordinates");
Coordinate346->setPoint(new float[186]{0,0.4675,0,0,0.4049,-0.2338,-0.1169,0.4049,-0.2024,-0.2024,0.4049,-0.1169,-0.2338,0.4049,0,-0.2024,0.4049,0.1169,-0.1169,0.4049,0.2024,0,0.4049,0.2338,0.1169,0.4049,0.2024,0.2024,0.4049,0.1169,0.2338,0.4049,0,0.2024,0.4049,-0.1169,0.1169,0.4049,-0.2024,0,0.2338,-0.4049,-0.2024,0.2338,-0.3506,-0.3506,0.2338,-0.2024,-0.4049,0.2338,0,-0.3506,0.2338,0.2024,-0.2024,0.2338,0.3506,0,0.2338,0.4049,0.2024,0.2338,0.3506,0.3506,0.2338,0.2024,0.4049,0.2338,0,0.3506,0.2338,-0.2024,0.2024,0.2338,-0.3506,0,0,-0.4675,-0.2338,0,-0.4049,-0.4049,0,-0.2338,-0.4675,0,0,-0.4049,0,0.2338,-0.2338,0,0.4049,0,0,0.4675,0.2338,0,0.4049,0.4049,0,0.2338,0.4675,0,0,0.4049,0,-0.2338,0.2338,0,-0.4049,0,-0.2338,-0.4049,-0.2024,-0.2338,-0.3506,-0.3506,-0.2338,-0.2024,-0.4049,-0.2338,0,-0.3506,-0.2338,0.2024,-0.2024,-0.2338,0.3506,0,-0.2338,0.4049,0.2024,-0.2338,0.3506,0.3506,-0.2338,0.2024,0.4049,-0.2338,0,0.3506,-0.2338,-0.2024,0.2024,-0.2338,-0.3506,0,-0.4049,-0.2338,-0.1169,-0.4049,-0.2024,-0.2024,-0.4049,-0.1169,-0.2338,-0.4049,0,-0.2024,-0.4049,0.1169,-0.1169,-0.4049,0.2024,0,-0.4049,0.2338,0.1169,-0.4049,0.2024,0.2024,-0.4049,0.1169,0.2338,-0.4049,0,0.2024,-0.4049,-0.1169,0.1169,-0.4049,-0.2024,0,-0.4675,0});
IndexedFaceSet345->setCoord(*Coordinate346);

Shape341->setGeometry(IndexedFaceSet345);

Transform340->addChild(*Shape341);

CViewpoint* Viewpoint347 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint347->setDEF("ballView_1");
Viewpoint347->setDescription("Ball View");
Transform340->addChildren(*Viewpoint347);

Group339->addChildren(*Transform340);

CPositionInterpolator* PositionInterpolator348 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator348->setDEF("ball_TranslationInterpolator");
PositionInterpolator348->setKey(new float[4]{0,0.4,0.409,1}, 4);
PositionInterpolator348->setKeyValue(new float[12]{-1,0.4,-1,0,0.07,0,0.05,0.06,0.05,2,4,10});
Group339->addChildren(*PositionInterpolator348);

COrientationInterpolator* OrientationInterpolator349 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator349->setDEF("ball_RotationInterpolator");
OrientationInterpolator349->setKey(new float[5]{0,0.4,0.41,0.71,1}, 5);
OrientationInterpolator349->setKeyValue(new float[20]{1,0,1,0.25,-1,0,-1,1.35,-1,1,-1,3.35,-1,0.2,-1,3,-1,0.2,-1,3});
Group339->addChildren(*OrientationInterpolator349);

group->addChildren(*Group339);

CGroup* Group350 = (CGroup *)(m_pScene.createNode("Group"));
CTransform* Transform351 = (CTransform *)(m_pScene.createNode("Transform"));
Transform351->setScale(new float[3]{0.2,0.2,0.2});
CShape* Shape352 = (CShape *)(m_pScene.createNode("Shape"));
Shape352->setUSE("AxisLinesShape");
Transform351->addChild(*Shape352);

Group350->addChildren(*Transform351);

CTransform* Transform353 = (CTransform *)(m_pScene.createNode("Transform"));
Transform353->setDEF("Circle0");
Transform353->setScale(new float[3]{1.175,1,1.175});
CShape* Shape354 = (CShape *)(m_pScene.createNode("Shape"));
Shape354->setDEF("circle_Shape");
CAppearance* Appearance355 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance355->setDEF("circle0_Appearance");
CMaterial* Material356 = (CMaterial *)(m_pScene.createNode("Material"));
Material356->setDEF("circle0_Material");
Material356->setAmbientIntensity(0.9);
Material356->setDiffuseColor(new float[3]{0.9,0,0.7});
Material356->setEmissiveColor(new float[3]{0.425,0.486,1});
Appearance355->setMaterial(*Material356);

Shape354->setAppearance(*Appearance355);

CIndexedLineSet* IndexedLineSet357 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet357->setDEF("Orbit1");
IndexedLineSet357->setCoordIndex(new int[62]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1});
CCoordinate* Coordinate358 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate358->setDEF("circle_Coordinates");
Coordinate358->setPoint(new float[183]{1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0});
IndexedLineSet357->setCoord(*Coordinate358);

Shape354->setGeometry(IndexedLineSet357);

Transform353->addChild(*Shape354);

Group350->addChildren(*Transform353);

CTransform* Transform359 = (CTransform *)(m_pScene.createNode("Transform"));
Transform359->setDEF("Circle1");
Transform359->setScale(new float[3]{0.5,1,0.5});
CShape* Shape360 = (CShape *)(m_pScene.createNode("Shape"));
Shape360->setDEF("circle1_Shape");
CAppearance* Appearance361 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance361->setDEF("circle1_Appearance");
CMaterial* Material362 = (CMaterial *)(m_pScene.createNode("Material"));
Material362->setDEF("circle1_Material");
Material362->setDiffuseColor(new float[3]{0.9,0,0.7});
Material362->setEmissiveColor(new float[3]{0.424956,0.483976,1});
Appearance361->setMaterial(*Material362);

Shape360->setAppearance(*Appearance361);

CIndexedLineSet* IndexedLineSet363 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet363->setUSE("Orbit1");
Shape360->setGeometry(IndexedLineSet363);

Transform359->addChild(*Shape360);

Group350->addChildren(*Transform359);

CTransform* Transform364 = (CTransform *)(m_pScene.createNode("Transform"));
Transform364->setDEF("Circle2");
Transform364->setScale(new float[3]{0.25,1,0.25});
CShape* Shape365 = (CShape *)(m_pScene.createNode("Shape"));
Shape365->setDEF("circle2_Shape");
CAppearance* Appearance366 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance366->setDEF("circle2_Appearance");
CMaterial* Material367 = (CMaterial *)(m_pScene.createNode("Material"));
Material367->setDEF("circle2_Material");
Material367->setDiffuseColor(new float[3]{0.9,0,0.7});
Material367->setEmissiveColor(new float[3]{0.424956,0.483976,1});
Appearance366->setMaterial(*Material367);

Shape365->setAppearance(*Appearance366);

CIndexedLineSet* IndexedLineSet368 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet368->setUSE("Orbit1");
Shape365->setGeometry(IndexedLineSet368);

Transform364->addChild(*Shape365);

Group350->addChildren(*Transform364);

group->addChildren(*Group350);

CROUTE* ROUTE369 = new CROUTE();
ROUTE369->setFromNode("KickTimer");
ROUTE369->setFromField("fraction_changed");
ROUTE369->setToNode("HumanoidRoot_RotationInterpolator");
ROUTE369->setToField("set_fraction");
group->addChildren(*ROUTE369);

CROUTE* ROUTE370 = new CROUTE();
ROUTE370->setFromNode("KickTimer");
ROUTE370->setFromField("fraction_changed");
ROUTE370->setToNode("HumanoidRoot_TranslationInterpolator");
ROUTE370->setToField("set_fraction");
group->addChildren(*ROUTE370);

CROUTE* ROUTE371 = new CROUTE();
ROUTE371->setFromNode("KickTimer");
ROUTE371->setFromField("fraction_changed");
ROUTE371->setToNode("sacroiliac_RotationInterpolator");
ROUTE371->setToField("set_fraction");
group->addChildren(*ROUTE371);

CROUTE* ROUTE372 = new CROUTE();
ROUTE372->setFromNode("KickTimer");
ROUTE372->setFromField("fraction_changed");
ROUTE372->setToNode("l_hip_RotationInterpolator");
ROUTE372->setToField("set_fraction");
group->addChildren(*ROUTE372);

CROUTE* ROUTE373 = new CROUTE();
ROUTE373->setFromNode("KickTimer");
ROUTE373->setFromField("fraction_changed");
ROUTE373->setToNode("l_knee_RotationInterpolator");
ROUTE373->setToField("set_fraction");
group->addChildren(*ROUTE373);

CROUTE* ROUTE374 = new CROUTE();
ROUTE374->setFromNode("KickTimer");
ROUTE374->setFromField("fraction_changed");
ROUTE374->setToNode("l_ankle_RotationInterpolator");
ROUTE374->setToField("set_fraction");
group->addChildren(*ROUTE374);

CROUTE* ROUTE375 = new CROUTE();
ROUTE375->setFromNode("KickTimer");
ROUTE375->setFromField("fraction_changed");
ROUTE375->setToNode("l_subtalar_RotationInterpolator");
ROUTE375->setToField("set_fraction");
group->addChildren(*ROUTE375);

CROUTE* ROUTE376 = new CROUTE();
ROUTE376->setFromNode("KickTimer");
ROUTE376->setFromField("fraction_changed");
ROUTE376->setToNode("l_midtarsal_RotationInterpolator");
ROUTE376->setToField("set_fraction");
group->addChildren(*ROUTE376);

CROUTE* ROUTE377 = new CROUTE();
ROUTE377->setFromNode("KickTimer");
ROUTE377->setFromField("fraction_changed");
ROUTE377->setToNode("l_metatarsal_RotationInterpolator");
ROUTE377->setToField("set_fraction");
group->addChildren(*ROUTE377);

CROUTE* ROUTE378 = new CROUTE();
ROUTE378->setFromNode("KickTimer");
ROUTE378->setFromField("fraction_changed");
ROUTE378->setToNode("r_hip_RotationInterpolator");
ROUTE378->setToField("set_fraction");
group->addChildren(*ROUTE378);

CROUTE* ROUTE379 = new CROUTE();
ROUTE379->setFromNode("KickTimer");
ROUTE379->setFromField("fraction_changed");
ROUTE379->setToNode("r_knee_RotationInterpolator");
ROUTE379->setToField("set_fraction");
group->addChildren(*ROUTE379);

CROUTE* ROUTE380 = new CROUTE();
ROUTE380->setFromNode("KickTimer");
ROUTE380->setFromField("fraction_changed");
ROUTE380->setToNode("r_ankle_RotationInterpolator");
ROUTE380->setToField("set_fraction");
group->addChildren(*ROUTE380);

CROUTE* ROUTE381 = new CROUTE();
ROUTE381->setFromNode("KickTimer");
ROUTE381->setFromField("fraction_changed");
ROUTE381->setToNode("r_subtalar_RotationInterpolator");
ROUTE381->setToField("set_fraction");
group->addChildren(*ROUTE381);

CROUTE* ROUTE382 = new CROUTE();
ROUTE382->setFromNode("KickTimer");
ROUTE382->setFromField("fraction_changed");
ROUTE382->setToNode("r_midtarsal_RotationInterpolator");
ROUTE382->setToField("set_fraction");
group->addChildren(*ROUTE382);

CROUTE* ROUTE383 = new CROUTE();
ROUTE383->setFromNode("KickTimer");
ROUTE383->setFromField("fraction_changed");
ROUTE383->setToNode("r_metatarsal_RotationInterpolator");
ROUTE383->setToField("set_fraction");
group->addChildren(*ROUTE383);

CROUTE* ROUTE384 = new CROUTE();
ROUTE384->setFromNode("KickTimer");
ROUTE384->setFromField("fraction_changed");
ROUTE384->setToNode("vl5_RotationInterpolator");
ROUTE384->setToField("set_fraction");
group->addChildren(*ROUTE384);

CROUTE* ROUTE385 = new CROUTE();
ROUTE385->setFromNode("KickTimer");
ROUTE385->setFromField("fraction_changed");
ROUTE385->setToNode("vl4_RotationInterpolator");
ROUTE385->setToField("set_fraction");
group->addChildren(*ROUTE385);

CROUTE* ROUTE386 = new CROUTE();
ROUTE386->setFromNode("KickTimer");
ROUTE386->setFromField("fraction_changed");
ROUTE386->setToNode("vl3_RotationInterpolator");
ROUTE386->setToField("set_fraction");
group->addChildren(*ROUTE386);

CROUTE* ROUTE387 = new CROUTE();
ROUTE387->setFromNode("KickTimer");
ROUTE387->setFromField("fraction_changed");
ROUTE387->setToNode("vl2_RotationInterpolator");
ROUTE387->setToField("set_fraction");
group->addChildren(*ROUTE387);

CROUTE* ROUTE388 = new CROUTE();
ROUTE388->setFromNode("KickTimer");
ROUTE388->setFromField("fraction_changed");
ROUTE388->setToNode("vl1_RotationInterpolator");
ROUTE388->setToField("set_fraction");
group->addChildren(*ROUTE388);

CROUTE* ROUTE389 = new CROUTE();
ROUTE389->setFromNode("KickTimer");
ROUTE389->setFromField("fraction_changed");
ROUTE389->setToNode("vt12_RotationInterpolator");
ROUTE389->setToField("set_fraction");
group->addChildren(*ROUTE389);

CROUTE* ROUTE390 = new CROUTE();
ROUTE390->setFromNode("KickTimer");
ROUTE390->setFromField("fraction_changed");
ROUTE390->setToNode("vt11_RotationInterpolator");
ROUTE390->setToField("set_fraction");
group->addChildren(*ROUTE390);

CROUTE* ROUTE391 = new CROUTE();
ROUTE391->setFromNode("KickTimer");
ROUTE391->setFromField("fraction_changed");
ROUTE391->setToNode("vt10_RotationInterpolator");
ROUTE391->setToField("set_fraction");
group->addChildren(*ROUTE391);

CROUTE* ROUTE392 = new CROUTE();
ROUTE392->setFromNode("KickTimer");
ROUTE392->setFromField("fraction_changed");
ROUTE392->setToNode("vt9_RotationInterpolator");
ROUTE392->setToField("set_fraction");
group->addChildren(*ROUTE392);

CROUTE* ROUTE393 = new CROUTE();
ROUTE393->setFromNode("KickTimer");
ROUTE393->setFromField("fraction_changed");
ROUTE393->setToNode("vt8_RotationInterpolator");
ROUTE393->setToField("set_fraction");
group->addChildren(*ROUTE393);

CROUTE* ROUTE394 = new CROUTE();
ROUTE394->setFromNode("KickTimer");
ROUTE394->setFromField("fraction_changed");
ROUTE394->setToNode("vt7_RotationInterpolator");
ROUTE394->setToField("set_fraction");
group->addChildren(*ROUTE394);

CROUTE* ROUTE395 = new CROUTE();
ROUTE395->setFromNode("KickTimer");
ROUTE395->setFromField("fraction_changed");
ROUTE395->setToNode("vt6_RotationInterpolator");
ROUTE395->setToField("set_fraction");
group->addChildren(*ROUTE395);

CROUTE* ROUTE396 = new CROUTE();
ROUTE396->setFromNode("KickTimer");
ROUTE396->setFromField("fraction_changed");
ROUTE396->setToNode("vt5_RotationInterpolator");
ROUTE396->setToField("set_fraction");
group->addChildren(*ROUTE396);

CROUTE* ROUTE397 = new CROUTE();
ROUTE397->setFromNode("KickTimer");
ROUTE397->setFromField("fraction_changed");
ROUTE397->setToNode("vt4_RotationInterpolator");
ROUTE397->setToField("set_fraction");
group->addChildren(*ROUTE397);

CROUTE* ROUTE398 = new CROUTE();
ROUTE398->setFromNode("KickTimer");
ROUTE398->setFromField("fraction_changed");
ROUTE398->setToNode("vt3_RotationInterpolator");
ROUTE398->setToField("set_fraction");
group->addChildren(*ROUTE398);

CROUTE* ROUTE399 = new CROUTE();
ROUTE399->setFromNode("KickTimer");
ROUTE399->setFromField("fraction_changed");
ROUTE399->setToNode("vt2_RotationInterpolator");
ROUTE399->setToField("set_fraction");
group->addChildren(*ROUTE399);

CROUTE* ROUTE400 = new CROUTE();
ROUTE400->setFromNode("KickTimer");
ROUTE400->setFromField("fraction_changed");
ROUTE400->setToNode("vt1_RotationInterpolator");
ROUTE400->setToField("set_fraction");
group->addChildren(*ROUTE400);

CROUTE* ROUTE401 = new CROUTE();
ROUTE401->setFromNode("KickTimer");
ROUTE401->setFromField("fraction_changed");
ROUTE401->setToNode("vc7_RotationInterpolator");
ROUTE401->setToField("set_fraction");
group->addChildren(*ROUTE401);

CROUTE* ROUTE402 = new CROUTE();
ROUTE402->setFromNode("KickTimer");
ROUTE402->setFromField("fraction_changed");
ROUTE402->setToNode("vc6_RotationInterpolator");
ROUTE402->setToField("set_fraction");
group->addChildren(*ROUTE402);

CROUTE* ROUTE403 = new CROUTE();
ROUTE403->setFromNode("KickTimer");
ROUTE403->setFromField("fraction_changed");
ROUTE403->setToNode("vc5_RotationInterpolator");
ROUTE403->setToField("set_fraction");
group->addChildren(*ROUTE403);

CROUTE* ROUTE404 = new CROUTE();
ROUTE404->setFromNode("KickTimer");
ROUTE404->setFromField("fraction_changed");
ROUTE404->setToNode("vc4_RotationInterpolator");
ROUTE404->setToField("set_fraction");
group->addChildren(*ROUTE404);

CROUTE* ROUTE405 = new CROUTE();
ROUTE405->setFromNode("KickTimer");
ROUTE405->setFromField("fraction_changed");
ROUTE405->setToNode("vc3_RotationInterpolator");
ROUTE405->setToField("set_fraction");
group->addChildren(*ROUTE405);

CROUTE* ROUTE406 = new CROUTE();
ROUTE406->setFromNode("KickTimer");
ROUTE406->setFromField("fraction_changed");
ROUTE406->setToNode("vc2_RotationInterpolator");
ROUTE406->setToField("set_fraction");
group->addChildren(*ROUTE406);

CROUTE* ROUTE407 = new CROUTE();
ROUTE407->setFromNode("KickTimer");
ROUTE407->setFromField("fraction_changed");
ROUTE407->setToNode("vc1_RotationInterpolator");
ROUTE407->setToField("set_fraction");
group->addChildren(*ROUTE407);

CROUTE* ROUTE408 = new CROUTE();
ROUTE408->setFromNode("KickTimer");
ROUTE408->setFromField("fraction_changed");
ROUTE408->setToNode("skullbase_RotationInterpolator");
ROUTE408->setToField("set_fraction");
group->addChildren(*ROUTE408);

CROUTE* ROUTE409 = new CROUTE();
ROUTE409->setFromNode("KickTimer");
ROUTE409->setFromField("fraction_changed");
ROUTE409->setToNode("l_eyelid_joint_RotationInterpolator");
ROUTE409->setToField("set_fraction");
group->addChildren(*ROUTE409);

CROUTE* ROUTE410 = new CROUTE();
ROUTE410->setFromNode("KickTimer");
ROUTE410->setFromField("fraction_changed");
ROUTE410->setToNode("l_eyeball_joint_RotationInterpolator");
ROUTE410->setToField("set_fraction");
group->addChildren(*ROUTE410);

CROUTE* ROUTE411 = new CROUTE();
ROUTE411->setFromNode("KickTimer");
ROUTE411->setFromField("fraction_changed");
ROUTE411->setToNode("l_eyebrow_joint_RotationInterpolator");
ROUTE411->setToField("set_fraction");
group->addChildren(*ROUTE411);

CROUTE* ROUTE412 = new CROUTE();
ROUTE412->setFromNode("KickTimer");
ROUTE412->setFromField("fraction_changed");
ROUTE412->setToNode("r_eyelid_joint_RotationInterpolator");
ROUTE412->setToField("set_fraction");
group->addChildren(*ROUTE412);

CROUTE* ROUTE413 = new CROUTE();
ROUTE413->setFromNode("KickTimer");
ROUTE413->setFromField("fraction_changed");
ROUTE413->setToNode("r_eyeball_joint_RotationInterpolator");
ROUTE413->setToField("set_fraction");
group->addChildren(*ROUTE413);

CROUTE* ROUTE414 = new CROUTE();
ROUTE414->setFromNode("KickTimer");
ROUTE414->setFromField("fraction_changed");
ROUTE414->setToNode("r_eyebrow_joint_RotationInterpolator");
ROUTE414->setToField("set_fraction");
group->addChildren(*ROUTE414);

CROUTE* ROUTE415 = new CROUTE();
ROUTE415->setFromNode("KickTimer");
ROUTE415->setFromField("fraction_changed");
ROUTE415->setToNode("temporomandibular_RotationInterpolator");
ROUTE415->setToField("set_fraction");
group->addChildren(*ROUTE415);

CROUTE* ROUTE416 = new CROUTE();
ROUTE416->setFromNode("KickTimer");
ROUTE416->setFromField("fraction_changed");
ROUTE416->setToNode("l_sternoclavicular_RotationInterpolator");
ROUTE416->setToField("set_fraction");
group->addChildren(*ROUTE416);

CROUTE* ROUTE417 = new CROUTE();
ROUTE417->setFromNode("KickTimer");
ROUTE417->setFromField("fraction_changed");
ROUTE417->setToNode("l_acromioclavicular_RotationInterpolator");
ROUTE417->setToField("set_fraction");
group->addChildren(*ROUTE417);

CROUTE* ROUTE418 = new CROUTE();
ROUTE418->setFromNode("KickTimer");
ROUTE418->setFromField("fraction_changed");
ROUTE418->setToNode("l_shoulder_RotationInterpolator");
ROUTE418->setToField("set_fraction");
group->addChildren(*ROUTE418);

CROUTE* ROUTE419 = new CROUTE();
ROUTE419->setFromNode("KickTimer");
ROUTE419->setFromField("fraction_changed");
ROUTE419->setToNode("l_elbow_RotationInterpolator");
ROUTE419->setToField("set_fraction");
group->addChildren(*ROUTE419);

CROUTE* ROUTE420 = new CROUTE();
ROUTE420->setFromNode("KickTimer");
ROUTE420->setFromField("fraction_changed");
ROUTE420->setToNode("l_wrist_RotationInterpolator");
ROUTE420->setToField("set_fraction");
group->addChildren(*ROUTE420);

CROUTE* ROUTE421 = new CROUTE();
ROUTE421->setFromNode("KickTimer");
ROUTE421->setFromField("fraction_changed");
ROUTE421->setToNode("l_thumb1_RotationInterpolator");
ROUTE421->setToField("set_fraction");
group->addChildren(*ROUTE421);

CROUTE* ROUTE422 = new CROUTE();
ROUTE422->setFromNode("KickTimer");
ROUTE422->setFromField("fraction_changed");
ROUTE422->setToNode("l_thumb2_RotationInterpolator");
ROUTE422->setToField("set_fraction");
group->addChildren(*ROUTE422);

CROUTE* ROUTE423 = new CROUTE();
ROUTE423->setFromNode("KickTimer");
ROUTE423->setFromField("fraction_changed");
ROUTE423->setToNode("l_thumb3_RotationInterpolator");
ROUTE423->setToField("set_fraction");
group->addChildren(*ROUTE423);

CROUTE* ROUTE424 = new CROUTE();
ROUTE424->setFromNode("KickTimer");
ROUTE424->setFromField("fraction_changed");
ROUTE424->setToNode("l_index0_RotationInterpolator");
ROUTE424->setToField("set_fraction");
group->addChildren(*ROUTE424);

CROUTE* ROUTE425 = new CROUTE();
ROUTE425->setFromNode("KickTimer");
ROUTE425->setFromField("fraction_changed");
ROUTE425->setToNode("l_index1_RotationInterpolator");
ROUTE425->setToField("set_fraction");
group->addChildren(*ROUTE425);

CROUTE* ROUTE426 = new CROUTE();
ROUTE426->setFromNode("KickTimer");
ROUTE426->setFromField("fraction_changed");
ROUTE426->setToNode("l_index2_RotationInterpolator");
ROUTE426->setToField("set_fraction");
group->addChildren(*ROUTE426);

CROUTE* ROUTE427 = new CROUTE();
ROUTE427->setFromNode("KickTimer");
ROUTE427->setFromField("fraction_changed");
ROUTE427->setToNode("l_index3_RotationInterpolator");
ROUTE427->setToField("set_fraction");
group->addChildren(*ROUTE427);

CROUTE* ROUTE428 = new CROUTE();
ROUTE428->setFromNode("KickTimer");
ROUTE428->setFromField("fraction_changed");
ROUTE428->setToNode("l_middle0_RotationInterpolator");
ROUTE428->setToField("set_fraction");
group->addChildren(*ROUTE428);

CROUTE* ROUTE429 = new CROUTE();
ROUTE429->setFromNode("KickTimer");
ROUTE429->setFromField("fraction_changed");
ROUTE429->setToNode("l_middle1_RotationInterpolator");
ROUTE429->setToField("set_fraction");
group->addChildren(*ROUTE429);

CROUTE* ROUTE430 = new CROUTE();
ROUTE430->setFromNode("KickTimer");
ROUTE430->setFromField("fraction_changed");
ROUTE430->setToNode("l_middle2_RotationInterpolator");
ROUTE430->setToField("set_fraction");
group->addChildren(*ROUTE430);

CROUTE* ROUTE431 = new CROUTE();
ROUTE431->setFromNode("KickTimer");
ROUTE431->setFromField("fraction_changed");
ROUTE431->setToNode("l_middle3_RotationInterpolator");
ROUTE431->setToField("set_fraction");
group->addChildren(*ROUTE431);

CROUTE* ROUTE432 = new CROUTE();
ROUTE432->setFromNode("KickTimer");
ROUTE432->setFromField("fraction_changed");
ROUTE432->setToNode("l_ring0_RotationInterpolator");
ROUTE432->setToField("set_fraction");
group->addChildren(*ROUTE432);

CROUTE* ROUTE433 = new CROUTE();
ROUTE433->setFromNode("KickTimer");
ROUTE433->setFromField("fraction_changed");
ROUTE433->setToNode("l_ring1_RotationInterpolator");
ROUTE433->setToField("set_fraction");
group->addChildren(*ROUTE433);

CROUTE* ROUTE434 = new CROUTE();
ROUTE434->setFromNode("KickTimer");
ROUTE434->setFromField("fraction_changed");
ROUTE434->setToNode("l_ring2_RotationInterpolator");
ROUTE434->setToField("set_fraction");
group->addChildren(*ROUTE434);

CROUTE* ROUTE435 = new CROUTE();
ROUTE435->setFromNode("KickTimer");
ROUTE435->setFromField("fraction_changed");
ROUTE435->setToNode("l_ring3_RotationInterpolator");
ROUTE435->setToField("set_fraction");
group->addChildren(*ROUTE435);

CROUTE* ROUTE436 = new CROUTE();
ROUTE436->setFromNode("KickTimer");
ROUTE436->setFromField("fraction_changed");
ROUTE436->setToNode("l_pinky0_RotationInterpolator");
ROUTE436->setToField("set_fraction");
group->addChildren(*ROUTE436);

CROUTE* ROUTE437 = new CROUTE();
ROUTE437->setFromNode("KickTimer");
ROUTE437->setFromField("fraction_changed");
ROUTE437->setToNode("l_pinky1_RotationInterpolator");
ROUTE437->setToField("set_fraction");
group->addChildren(*ROUTE437);

CROUTE* ROUTE438 = new CROUTE();
ROUTE438->setFromNode("KickTimer");
ROUTE438->setFromField("fraction_changed");
ROUTE438->setToNode("l_pinky2_RotationInterpolator");
ROUTE438->setToField("set_fraction");
group->addChildren(*ROUTE438);

CROUTE* ROUTE439 = new CROUTE();
ROUTE439->setFromNode("KickTimer");
ROUTE439->setFromField("fraction_changed");
ROUTE439->setToNode("l_pinky3_RotationInterpolator");
ROUTE439->setToField("set_fraction");
group->addChildren(*ROUTE439);

CROUTE* ROUTE440 = new CROUTE();
ROUTE440->setFromNode("KickTimer");
ROUTE440->setFromField("fraction_changed");
ROUTE440->setToNode("r_sternoclavicular_RotationInterpolator");
ROUTE440->setToField("set_fraction");
group->addChildren(*ROUTE440);

CROUTE* ROUTE441 = new CROUTE();
ROUTE441->setFromNode("KickTimer");
ROUTE441->setFromField("fraction_changed");
ROUTE441->setToNode("r_acromioclavicular_RotationInterpolator");
ROUTE441->setToField("set_fraction");
group->addChildren(*ROUTE441);

CROUTE* ROUTE442 = new CROUTE();
ROUTE442->setFromNode("KickTimer");
ROUTE442->setFromField("fraction_changed");
ROUTE442->setToNode("r_shoulder_RotationInterpolator");
ROUTE442->setToField("set_fraction");
group->addChildren(*ROUTE442);

CROUTE* ROUTE443 = new CROUTE();
ROUTE443->setFromNode("KickTimer");
ROUTE443->setFromField("fraction_changed");
ROUTE443->setToNode("r_elbow_RotationInterpolator");
ROUTE443->setToField("set_fraction");
group->addChildren(*ROUTE443);

CROUTE* ROUTE444 = new CROUTE();
ROUTE444->setFromNode("KickTimer");
ROUTE444->setFromField("fraction_changed");
ROUTE444->setToNode("r_wrist_RotationInterpolator");
ROUTE444->setToField("set_fraction");
group->addChildren(*ROUTE444);

CROUTE* ROUTE445 = new CROUTE();
ROUTE445->setFromNode("KickTimer");
ROUTE445->setFromField("fraction_changed");
ROUTE445->setToNode("r_thumb1_RotationInterpolator");
ROUTE445->setToField("set_fraction");
group->addChildren(*ROUTE445);

CROUTE* ROUTE446 = new CROUTE();
ROUTE446->setFromNode("KickTimer");
ROUTE446->setFromField("fraction_changed");
ROUTE446->setToNode("r_thumb2_RotationInterpolator");
ROUTE446->setToField("set_fraction");
group->addChildren(*ROUTE446);

CROUTE* ROUTE447 = new CROUTE();
ROUTE447->setFromNode("KickTimer");
ROUTE447->setFromField("fraction_changed");
ROUTE447->setToNode("r_thumb3_RotationInterpolator");
ROUTE447->setToField("set_fraction");
group->addChildren(*ROUTE447);

CROUTE* ROUTE448 = new CROUTE();
ROUTE448->setFromNode("KickTimer");
ROUTE448->setFromField("fraction_changed");
ROUTE448->setToNode("r_index0_RotationInterpolator");
ROUTE448->setToField("set_fraction");
group->addChildren(*ROUTE448);

CROUTE* ROUTE449 = new CROUTE();
ROUTE449->setFromNode("KickTimer");
ROUTE449->setFromField("fraction_changed");
ROUTE449->setToNode("r_index1_RotationInterpolator");
ROUTE449->setToField("set_fraction");
group->addChildren(*ROUTE449);

CROUTE* ROUTE450 = new CROUTE();
ROUTE450->setFromNode("KickTimer");
ROUTE450->setFromField("fraction_changed");
ROUTE450->setToNode("r_index2_RotationInterpolator");
ROUTE450->setToField("set_fraction");
group->addChildren(*ROUTE450);

CROUTE* ROUTE451 = new CROUTE();
ROUTE451->setFromNode("KickTimer");
ROUTE451->setFromField("fraction_changed");
ROUTE451->setToNode("r_index3_RotationInterpolator");
ROUTE451->setToField("set_fraction");
group->addChildren(*ROUTE451);

CROUTE* ROUTE452 = new CROUTE();
ROUTE452->setFromNode("KickTimer");
ROUTE452->setFromField("fraction_changed");
ROUTE452->setToNode("r_middle0_RotationInterpolator");
ROUTE452->setToField("set_fraction");
group->addChildren(*ROUTE452);

CROUTE* ROUTE453 = new CROUTE();
ROUTE453->setFromNode("KickTimer");
ROUTE453->setFromField("fraction_changed");
ROUTE453->setToNode("r_middle1_RotationInterpolator");
ROUTE453->setToField("set_fraction");
group->addChildren(*ROUTE453);

CROUTE* ROUTE454 = new CROUTE();
ROUTE454->setFromNode("KickTimer");
ROUTE454->setFromField("fraction_changed");
ROUTE454->setToNode("r_middle2_RotationInterpolator");
ROUTE454->setToField("set_fraction");
group->addChildren(*ROUTE454);

CROUTE* ROUTE455 = new CROUTE();
ROUTE455->setFromNode("KickTimer");
ROUTE455->setFromField("fraction_changed");
ROUTE455->setToNode("r_middle3_RotationInterpolator");
ROUTE455->setToField("set_fraction");
group->addChildren(*ROUTE455);

CROUTE* ROUTE456 = new CROUTE();
ROUTE456->setFromNode("KickTimer");
ROUTE456->setFromField("fraction_changed");
ROUTE456->setToNode("r_ring0_RotationInterpolator");
ROUTE456->setToField("set_fraction");
group->addChildren(*ROUTE456);

CROUTE* ROUTE457 = new CROUTE();
ROUTE457->setFromNode("KickTimer");
ROUTE457->setFromField("fraction_changed");
ROUTE457->setToNode("r_ring1_RotationInterpolator");
ROUTE457->setToField("set_fraction");
group->addChildren(*ROUTE457);

CROUTE* ROUTE458 = new CROUTE();
ROUTE458->setFromNode("KickTimer");
ROUTE458->setFromField("fraction_changed");
ROUTE458->setToNode("r_ring2_RotationInterpolator");
ROUTE458->setToField("set_fraction");
group->addChildren(*ROUTE458);

CROUTE* ROUTE459 = new CROUTE();
ROUTE459->setFromNode("KickTimer");
ROUTE459->setFromField("fraction_changed");
ROUTE459->setToNode("r_ring3_RotationInterpolator");
ROUTE459->setToField("set_fraction");
group->addChildren(*ROUTE459);

CROUTE* ROUTE460 = new CROUTE();
ROUTE460->setFromNode("KickTimer");
ROUTE460->setFromField("fraction_changed");
ROUTE460->setToNode("r_pinky0_RotationInterpolator");
ROUTE460->setToField("set_fraction");
group->addChildren(*ROUTE460);

CROUTE* ROUTE461 = new CROUTE();
ROUTE461->setFromNode("KickTimer");
ROUTE461->setFromField("fraction_changed");
ROUTE461->setToNode("r_pinky1_RotationInterpolator");
ROUTE461->setToField("set_fraction");
group->addChildren(*ROUTE461);

CROUTE* ROUTE462 = new CROUTE();
ROUTE462->setFromNode("KickTimer");
ROUTE462->setFromField("fraction_changed");
ROUTE462->setToNode("r_pinky2_RotationInterpolator");
ROUTE462->setToField("set_fraction");
group->addChildren(*ROUTE462);

CROUTE* ROUTE463 = new CROUTE();
ROUTE463->setFromNode("KickTimer");
ROUTE463->setFromField("fraction_changed");
ROUTE463->setToNode("r_pinky3_RotationInterpolator");
ROUTE463->setToField("set_fraction");
group->addChildren(*ROUTE463);

CROUTE* ROUTE464 = new CROUTE();
ROUTE464->setFromNode("HumanoidRoot_RotationInterpolator");
ROUTE464->setFromField("value_changed");
ROUTE464->setToNode("Joe_humanoid_root");
ROUTE464->setToField("rotation");
group->addChildren(*ROUTE464);

CROUTE* ROUTE465 = new CROUTE();
ROUTE465->setFromNode("HumanoidRoot_TranslationInterpolator");
ROUTE465->setFromField("value_changed");
ROUTE465->setToNode("Joe_humanoid_root");
ROUTE465->setToField("translation");
group->addChildren(*ROUTE465);

CROUTE* ROUTE466 = new CROUTE();
ROUTE466->setFromNode("sacroiliac_RotationInterpolator");
ROUTE466->setFromField("value_changed");
ROUTE466->setToNode("Joe_sacroiliac");
ROUTE466->setToField("rotation");
group->addChildren(*ROUTE466);

CROUTE* ROUTE467 = new CROUTE();
ROUTE467->setFromNode("l_hip_RotationInterpolator");
ROUTE467->setFromField("value_changed");
ROUTE467->setToNode("Joe_l_hip");
ROUTE467->setToField("rotation");
group->addChildren(*ROUTE467);

CROUTE* ROUTE468 = new CROUTE();
ROUTE468->setFromNode("l_knee_RotationInterpolator");
ROUTE468->setFromField("value_changed");
ROUTE468->setToNode("Joe_l_knee");
ROUTE468->setToField("rotation");
group->addChildren(*ROUTE468);

CROUTE* ROUTE469 = new CROUTE();
ROUTE469->setFromNode("l_ankle_RotationInterpolator");
ROUTE469->setFromField("value_changed");
ROUTE469->setToNode("Joe_l_talocrural");
ROUTE469->setToField("rotation");
group->addChildren(*ROUTE469);

CROUTE* ROUTE470 = new CROUTE();
ROUTE470->setFromNode("l_subtalar_RotationInterpolator");
ROUTE470->setFromField("value_changed");
ROUTE470->setToNode("Joe_l_tarsometatarsal_1");
ROUTE470->setToField("rotation");
group->addChildren(*ROUTE470);

CROUTE* ROUTE471 = new CROUTE();
ROUTE471->setFromNode("l_midtarsal_RotationInterpolator");
ROUTE471->setFromField("value_changed");
ROUTE471->setToNode("Joe_l_metatarsophalangeal_1");
ROUTE471->setToField("rotation");
group->addChildren(*ROUTE471);

CROUTE* ROUTE472 = new CROUTE();
ROUTE472->setFromNode("l_metatarsal_RotationInterpolator");
ROUTE472->setFromField("value_changed");
ROUTE472->setToNode("Joe_l_tarsal_distal_interphalangeal_1");
ROUTE472->setToField("rotation");
group->addChildren(*ROUTE472);

CROUTE* ROUTE473 = new CROUTE();
ROUTE473->setFromNode("r_hip_RotationInterpolator");
ROUTE473->setFromField("value_changed");
ROUTE473->setToNode("Joe_r_hip");
ROUTE473->setToField("rotation");
group->addChildren(*ROUTE473);

CROUTE* ROUTE474 = new CROUTE();
ROUTE474->setFromNode("r_knee_RotationInterpolator");
ROUTE474->setFromField("value_changed");
ROUTE474->setToNode("Joe_r_knee");
ROUTE474->setToField("rotation");
group->addChildren(*ROUTE474);

CROUTE* ROUTE475 = new CROUTE();
ROUTE475->setFromNode("r_ankle_RotationInterpolator");
ROUTE475->setFromField("value_changed");
ROUTE475->setToNode("Joe_r_talocrural");
ROUTE475->setToField("rotation");
group->addChildren(*ROUTE475);

CROUTE* ROUTE476 = new CROUTE();
ROUTE476->setFromNode("r_subtalar_RotationInterpolator");
ROUTE476->setFromField("value_changed");
ROUTE476->setToNode("Joe_r_tarsometatarsal_1");
ROUTE476->setToField("rotation");
group->addChildren(*ROUTE476);

CROUTE* ROUTE477 = new CROUTE();
ROUTE477->setFromNode("r_midtarsal_RotationInterpolator");
ROUTE477->setFromField("value_changed");
ROUTE477->setToNode("Joe_r_metatarsophalangeal_1");
ROUTE477->setToField("rotation");
group->addChildren(*ROUTE477);

CROUTE* ROUTE478 = new CROUTE();
ROUTE478->setFromNode("r_metatarsal_RotationInterpolator");
ROUTE478->setFromField("value_changed");
ROUTE478->setToNode("Joe_r_tarsal_distal_interphalangeal_1");
ROUTE478->setToField("rotation");
group->addChildren(*ROUTE478);

CROUTE* ROUTE479 = new CROUTE();
ROUTE479->setFromNode("vl5_RotationInterpolator");
ROUTE479->setFromField("value_changed");
ROUTE479->setToNode("Joe_vl5");
ROUTE479->setToField("rotation");
group->addChildren(*ROUTE479);

CROUTE* ROUTE480 = new CROUTE();
ROUTE480->setFromNode("vl4_RotationInterpolator");
ROUTE480->setFromField("value_changed");
ROUTE480->setToNode("Joe_vl4");
ROUTE480->setToField("rotation");
group->addChildren(*ROUTE480);

CROUTE* ROUTE481 = new CROUTE();
ROUTE481->setFromNode("vl3_RotationInterpolator");
ROUTE481->setFromField("value_changed");
ROUTE481->setToNode("Joe_vl3");
ROUTE481->setToField("rotation");
group->addChildren(*ROUTE481);

CROUTE* ROUTE482 = new CROUTE();
ROUTE482->setFromNode("vl2_RotationInterpolator");
ROUTE482->setFromField("value_changed");
ROUTE482->setToNode("Joe_vl2");
ROUTE482->setToField("rotation");
group->addChildren(*ROUTE482);

CROUTE* ROUTE483 = new CROUTE();
ROUTE483->setFromNode("vl1_RotationInterpolator");
ROUTE483->setFromField("value_changed");
ROUTE483->setToNode("Joe_vl1");
ROUTE483->setToField("rotation");
group->addChildren(*ROUTE483);

CROUTE* ROUTE484 = new CROUTE();
ROUTE484->setFromNode("vt12_RotationInterpolator");
ROUTE484->setFromField("value_changed");
ROUTE484->setToNode("Joe_vt12");
ROUTE484->setToField("rotation");
group->addChildren(*ROUTE484);

CROUTE* ROUTE485 = new CROUTE();
ROUTE485->setFromNode("vt11_RotationInterpolator");
ROUTE485->setFromField("value_changed");
ROUTE485->setToNode("Joe_vt11");
ROUTE485->setToField("rotation");
group->addChildren(*ROUTE485);

CROUTE* ROUTE486 = new CROUTE();
ROUTE486->setFromNode("vt10_RotationInterpolator");
ROUTE486->setFromField("value_changed");
ROUTE486->setToNode("Joe_vt10");
ROUTE486->setToField("rotation");
group->addChildren(*ROUTE486);

CROUTE* ROUTE487 = new CROUTE();
ROUTE487->setFromNode("vt9_RotationInterpolator");
ROUTE487->setFromField("value_changed");
ROUTE487->setToNode("Joe_vt9");
ROUTE487->setToField("rotation");
group->addChildren(*ROUTE487);

CROUTE* ROUTE488 = new CROUTE();
ROUTE488->setFromNode("vt8_RotationInterpolator");
ROUTE488->setFromField("value_changed");
ROUTE488->setToNode("Joe_vt8");
ROUTE488->setToField("rotation");
group->addChildren(*ROUTE488);

CROUTE* ROUTE489 = new CROUTE();
ROUTE489->setFromNode("vt7_RotationInterpolator");
ROUTE489->setFromField("value_changed");
ROUTE489->setToNode("Joe_vt7");
ROUTE489->setToField("rotation");
group->addChildren(*ROUTE489);

CROUTE* ROUTE490 = new CROUTE();
ROUTE490->setFromNode("vt6_RotationInterpolator");
ROUTE490->setFromField("value_changed");
ROUTE490->setToNode("Joe_vt6");
ROUTE490->setToField("rotation");
group->addChildren(*ROUTE490);

CROUTE* ROUTE491 = new CROUTE();
ROUTE491->setFromNode("vt5_RotationInterpolator");
ROUTE491->setFromField("value_changed");
ROUTE491->setToNode("Joe_vt5");
ROUTE491->setToField("rotation");
group->addChildren(*ROUTE491);

CROUTE* ROUTE492 = new CROUTE();
ROUTE492->setFromNode("vt4_RotationInterpolator");
ROUTE492->setFromField("value_changed");
ROUTE492->setToNode("Joe_vt4");
ROUTE492->setToField("rotation");
group->addChildren(*ROUTE492);

CROUTE* ROUTE493 = new CROUTE();
ROUTE493->setFromNode("vt3_RotationInterpolator");
ROUTE493->setFromField("value_changed");
ROUTE493->setToNode("Joe_vt3");
ROUTE493->setToField("rotation");
group->addChildren(*ROUTE493);

CROUTE* ROUTE494 = new CROUTE();
ROUTE494->setFromNode("vt2_RotationInterpolator");
ROUTE494->setFromField("value_changed");
ROUTE494->setToNode("Joe_vt2");
ROUTE494->setToField("rotation");
group->addChildren(*ROUTE494);

CROUTE* ROUTE495 = new CROUTE();
ROUTE495->setFromNode("vt1_RotationInterpolator");
ROUTE495->setFromField("value_changed");
ROUTE495->setToNode("Joe_vt1");
ROUTE495->setToField("rotation");
group->addChildren(*ROUTE495);

CROUTE* ROUTE496 = new CROUTE();
ROUTE496->setFromNode("vc7_RotationInterpolator");
ROUTE496->setFromField("value_changed");
ROUTE496->setToNode("Joe_vc7");
ROUTE496->setToField("rotation");
group->addChildren(*ROUTE496);

CROUTE* ROUTE497 = new CROUTE();
ROUTE497->setFromNode("vc6_RotationInterpolator");
ROUTE497->setFromField("value_changed");
ROUTE497->setToNode("Joe_vc6");
ROUTE497->setToField("rotation");
group->addChildren(*ROUTE497);

CROUTE* ROUTE498 = new CROUTE();
ROUTE498->setFromNode("vc5_RotationInterpolator");
ROUTE498->setFromField("value_changed");
ROUTE498->setToNode("Joe_vc5");
ROUTE498->setToField("rotation");
group->addChildren(*ROUTE498);

CROUTE* ROUTE499 = new CROUTE();
ROUTE499->setFromNode("vc4_RotationInterpolator");
ROUTE499->setFromField("value_changed");
ROUTE499->setToNode("Joe_vc4");
ROUTE499->setToField("rotation");
group->addChildren(*ROUTE499);

CROUTE* ROUTE500 = new CROUTE();
ROUTE500->setFromNode("vc3_RotationInterpolator");
ROUTE500->setFromField("value_changed");
ROUTE500->setToNode("Joe_vc3");
ROUTE500->setToField("rotation");
group->addChildren(*ROUTE500);

CROUTE* ROUTE501 = new CROUTE();
ROUTE501->setFromNode("vc2_RotationInterpolator");
ROUTE501->setFromField("value_changed");
ROUTE501->setToNode("Joe_vc2");
ROUTE501->setToField("rotation");
group->addChildren(*ROUTE501);

CROUTE* ROUTE502 = new CROUTE();
ROUTE502->setFromNode("vc1_RotationInterpolator");
ROUTE502->setFromField("value_changed");
ROUTE502->setToNode("Joe_vc1");
ROUTE502->setToField("rotation");
group->addChildren(*ROUTE502);

CROUTE* ROUTE503 = new CROUTE();
ROUTE503->setFromNode("skullbase_RotationInterpolator");
ROUTE503->setFromField("value_changed");
ROUTE503->setToNode("Joe_skullbase");
ROUTE503->setToField("rotation");
group->addChildren(*ROUTE503);

CROUTE* ROUTE504 = new CROUTE();
ROUTE504->setFromNode("l_eyelid_joint_RotationInterpolator");
ROUTE504->setFromField("value_changed");
ROUTE504->setToNode("Joe_l_eyelid_joint");
ROUTE504->setToField("rotation");
group->addChildren(*ROUTE504);

CROUTE* ROUTE505 = new CROUTE();
ROUTE505->setFromNode("l_eyeball_joint_RotationInterpolator");
ROUTE505->setFromField("value_changed");
ROUTE505->setToNode("Joe_l_eyeball_joint");
ROUTE505->setToField("rotation");
group->addChildren(*ROUTE505);

CROUTE* ROUTE506 = new CROUTE();
ROUTE506->setFromNode("l_eyebrow_joint_RotationInterpolator");
ROUTE506->setFromField("value_changed");
ROUTE506->setToNode("Joe_l_eyebrow_joint");
ROUTE506->setToField("rotation");
group->addChildren(*ROUTE506);

CROUTE* ROUTE507 = new CROUTE();
ROUTE507->setFromNode("r_eyelid_joint_RotationInterpolator");
ROUTE507->setFromField("value_changed");
ROUTE507->setToNode("Joe_r_eyelid_joint");
ROUTE507->setToField("rotation");
group->addChildren(*ROUTE507);

CROUTE* ROUTE508 = new CROUTE();
ROUTE508->setFromNode("r_eyeball_joint_RotationInterpolator");
ROUTE508->setFromField("value_changed");
ROUTE508->setToNode("Joe_r_eyeball_joint");
ROUTE508->setToField("rotation");
group->addChildren(*ROUTE508);

CROUTE* ROUTE509 = new CROUTE();
ROUTE509->setFromNode("r_eyebrow_joint_RotationInterpolator");
ROUTE509->setFromField("value_changed");
ROUTE509->setToNode("Joe_r_eyebrow_joint");
ROUTE509->setToField("rotation");
group->addChildren(*ROUTE509);

CROUTE* ROUTE510 = new CROUTE();
ROUTE510->setFromNode("temporomandibular_RotationInterpolator");
ROUTE510->setFromField("value_changed");
ROUTE510->setToNode("Joe_temporomandibular");
ROUTE510->setToField("rotation");
group->addChildren(*ROUTE510);

CROUTE* ROUTE511 = new CROUTE();
ROUTE511->setFromNode("l_sternoclavicular_RotationInterpolator");
ROUTE511->setFromField("value_changed");
ROUTE511->setToNode("Joe_l_sternoclavicular");
ROUTE511->setToField("rotation");
group->addChildren(*ROUTE511);

CROUTE* ROUTE512 = new CROUTE();
ROUTE512->setFromNode("l_acromioclavicular_RotationInterpolator");
ROUTE512->setFromField("value_changed");
ROUTE512->setToNode("Joe_l_acromioclavicular");
ROUTE512->setToField("rotation");
group->addChildren(*ROUTE512);

CROUTE* ROUTE513 = new CROUTE();
ROUTE513->setFromNode("l_shoulder_RotationInterpolator");
ROUTE513->setFromField("value_changed");
ROUTE513->setToNode("Joe_l_shoulder");
ROUTE513->setToField("rotation");
group->addChildren(*ROUTE513);

CROUTE* ROUTE514 = new CROUTE();
ROUTE514->setFromNode("l_elbow_RotationInterpolator");
ROUTE514->setFromField("value_changed");
ROUTE514->setToNode("Joe_l_elbow");
ROUTE514->setToField("rotation");
group->addChildren(*ROUTE514);

CROUTE* ROUTE515 = new CROUTE();
ROUTE515->setFromNode("l_wrist_RotationInterpolator");
ROUTE515->setFromField("value_changed");
ROUTE515->setToNode("Joe_l_radiocarpal");
ROUTE515->setToField("rotation");
group->addChildren(*ROUTE515);

CROUTE* ROUTE516 = new CROUTE();
ROUTE516->setFromNode("l_thumb1_RotationInterpolator");
ROUTE516->setFromField("value_changed");
ROUTE516->setToNode("Joe_l_carpometacarpal_1");
ROUTE516->setToField("rotation");
group->addChildren(*ROUTE516);

CROUTE* ROUTE517 = new CROUTE();
ROUTE517->setFromNode("l_thumb2_RotationInterpolator");
ROUTE517->setFromField("value_changed");
ROUTE517->setToNode("Joe_l_metacarpophalangeal_1");
ROUTE517->setToField("rotation");
group->addChildren(*ROUTE517);

CROUTE* ROUTE518 = new CROUTE();
ROUTE518->setFromNode("l_thumb3_RotationInterpolator");
ROUTE518->setFromField("value_changed");
ROUTE518->setToNode("Joe_l_carpal_interphalangeal_1");
ROUTE518->setToField("rotation");
group->addChildren(*ROUTE518);

CROUTE* ROUTE519 = new CROUTE();
ROUTE519->setFromNode("l_index0_RotationInterpolator");
ROUTE519->setFromField("value_changed");
ROUTE519->setToNode("Joe_l_carpometacarpal_2");
ROUTE519->setToField("rotation");
group->addChildren(*ROUTE519);

CROUTE* ROUTE520 = new CROUTE();
ROUTE520->setFromNode("l_index1_RotationInterpolator");
ROUTE520->setFromField("value_changed");
ROUTE520->setToNode("Joe_l_metacarpophalangeal_2");
ROUTE520->setToField("rotation");
group->addChildren(*ROUTE520);

CROUTE* ROUTE521 = new CROUTE();
ROUTE521->setFromNode("l_index2_RotationInterpolator");
ROUTE521->setFromField("value_changed");
ROUTE521->setToNode("Joe_l_carpal_proximal_interphalangeal_1");
ROUTE521->setToField("rotation");
group->addChildren(*ROUTE521);

CROUTE* ROUTE522 = new CROUTE();
ROUTE522->setFromNode("l_index3_RotationInterpolator");
ROUTE522->setFromField("value_changed");
ROUTE522->setToNode("Joe_l_carpal_distal_interphalangeal_1");
ROUTE522->setToField("rotation");
group->addChildren(*ROUTE522);

CROUTE* ROUTE523 = new CROUTE();
ROUTE523->setFromNode("l_middle0_RotationInterpolator");
ROUTE523->setFromField("value_changed");
ROUTE523->setToNode("Joe_l_carpometacarpal_3");
ROUTE523->setToField("rotation");
group->addChildren(*ROUTE523);

CROUTE* ROUTE524 = new CROUTE();
ROUTE524->setFromNode("l_middle1_RotationInterpolator");
ROUTE524->setFromField("value_changed");
ROUTE524->setToNode("Joe_l_metacarpophalangeal_3");
ROUTE524->setToField("rotation");
group->addChildren(*ROUTE524);

CROUTE* ROUTE525 = new CROUTE();
ROUTE525->setFromNode("l_middle2_RotationInterpolator");
ROUTE525->setFromField("value_changed");
ROUTE525->setToNode("Joe_l_carpal_proximal_interphalangeal_2");
ROUTE525->setToField("rotation");
group->addChildren(*ROUTE525);

CROUTE* ROUTE526 = new CROUTE();
ROUTE526->setFromNode("l_middle3_RotationInterpolator");
ROUTE526->setFromField("value_changed");
ROUTE526->setToNode("Joe_l_carpal_distal_interphalangeal_2");
ROUTE526->setToField("rotation");
group->addChildren(*ROUTE526);

CROUTE* ROUTE527 = new CROUTE();
ROUTE527->setFromNode("l_ring0_RotationInterpolator");
ROUTE527->setFromField("value_changed");
ROUTE527->setToNode("Joe_l_carpometacarpal_4");
ROUTE527->setToField("rotation");
group->addChildren(*ROUTE527);

CROUTE* ROUTE528 = new CROUTE();
ROUTE528->setFromNode("l_ring1_RotationInterpolator");
ROUTE528->setFromField("value_changed");
ROUTE528->setToNode("Joe_l_metacarpophalangeal_4");
ROUTE528->setToField("rotation");
group->addChildren(*ROUTE528);

CROUTE* ROUTE529 = new CROUTE();
ROUTE529->setFromNode("l_ring2_RotationInterpolator");
ROUTE529->setFromField("value_changed");
ROUTE529->setToNode("Joe_l_carpal_proximal_interphalangeal_3");
ROUTE529->setToField("rotation");
group->addChildren(*ROUTE529);

CROUTE* ROUTE530 = new CROUTE();
ROUTE530->setFromNode("l_ring3_RotationInterpolator");
ROUTE530->setFromField("value_changed");
ROUTE530->setToNode("Joe_l_carpal_distal_interphalangeal_3");
ROUTE530->setToField("rotation");
group->addChildren(*ROUTE530);

CROUTE* ROUTE531 = new CROUTE();
ROUTE531->setFromNode("l_pinky0_RotationInterpolator");
ROUTE531->setFromField("value_changed");
ROUTE531->setToNode("Joe_l_carpometacarpal_5");
ROUTE531->setToField("rotation");
group->addChildren(*ROUTE531);

CROUTE* ROUTE532 = new CROUTE();
ROUTE532->setFromNode("l_pinky1_RotationInterpolator");
ROUTE532->setFromField("value_changed");
ROUTE532->setToNode("Joe_l_metacarpophalangeal_5");
ROUTE532->setToField("rotation");
group->addChildren(*ROUTE532);

CROUTE* ROUTE533 = new CROUTE();
ROUTE533->setFromNode("l_pinky2_RotationInterpolator");
ROUTE533->setFromField("value_changed");
ROUTE533->setToNode("Joe_l_carpal_proximal_interphalangeal_4");
ROUTE533->setToField("rotation");
group->addChildren(*ROUTE533);

CROUTE* ROUTE534 = new CROUTE();
ROUTE534->setFromNode("l_pinky3_RotationInterpolator");
ROUTE534->setFromField("value_changed");
ROUTE534->setToNode("Joe_l_carpal_distal_interphalangeal_4");
ROUTE534->setToField("rotation");
group->addChildren(*ROUTE534);

CROUTE* ROUTE535 = new CROUTE();
ROUTE535->setFromNode("r_sternoclavicular_RotationInterpolator");
ROUTE535->setFromField("value_changed");
ROUTE535->setToNode("Joe_r_sternoclavicular");
ROUTE535->setToField("rotation");
group->addChildren(*ROUTE535);

CROUTE* ROUTE536 = new CROUTE();
ROUTE536->setFromNode("r_acromioclavicular_RotationInterpolator");
ROUTE536->setFromField("value_changed");
ROUTE536->setToNode("Joe_r_acromioclavicular");
ROUTE536->setToField("rotation");
group->addChildren(*ROUTE536);

CROUTE* ROUTE537 = new CROUTE();
ROUTE537->setFromNode("r_shoulder_RotationInterpolator");
ROUTE537->setFromField("value_changed");
ROUTE537->setToNode("Joe_r_shoulder");
ROUTE537->setToField("rotation");
group->addChildren(*ROUTE537);

CROUTE* ROUTE538 = new CROUTE();
ROUTE538->setFromNode("r_elbow_RotationInterpolator");
ROUTE538->setFromField("value_changed");
ROUTE538->setToNode("Joe_r_elbow");
ROUTE538->setToField("rotation");
group->addChildren(*ROUTE538);

CROUTE* ROUTE539 = new CROUTE();
ROUTE539->setFromNode("r_wrist_RotationInterpolator");
ROUTE539->setFromField("value_changed");
ROUTE539->setToNode("Joe_r_radiocarpal");
ROUTE539->setToField("rotation");
group->addChildren(*ROUTE539);

CROUTE* ROUTE540 = new CROUTE();
ROUTE540->setFromNode("r_thumb1_RotationInterpolator");
ROUTE540->setFromField("value_changed");
ROUTE540->setToNode("Joe_r_carpometacarpal_1");
ROUTE540->setToField("rotation");
group->addChildren(*ROUTE540);

CROUTE* ROUTE541 = new CROUTE();
ROUTE541->setFromNode("r_thumb2_RotationInterpolator");
ROUTE541->setFromField("value_changed");
ROUTE541->setToNode("Joe_r_metacarpophalangeal_1");
ROUTE541->setToField("rotation");
group->addChildren(*ROUTE541);

CROUTE* ROUTE542 = new CROUTE();
ROUTE542->setFromNode("r_thumb3_RotationInterpolator");
ROUTE542->setFromField("value_changed");
ROUTE542->setToNode("Joe_r_carpal_interphalangeal_1");
ROUTE542->setToField("rotation");
group->addChildren(*ROUTE542);

CROUTE* ROUTE543 = new CROUTE();
ROUTE543->setFromNode("r_index0_RotationInterpolator");
ROUTE543->setFromField("value_changed");
ROUTE543->setToNode("Joe_r_carpometacarpal_2");
ROUTE543->setToField("rotation");
group->addChildren(*ROUTE543);

CROUTE* ROUTE544 = new CROUTE();
ROUTE544->setFromNode("r_index1_RotationInterpolator");
ROUTE544->setFromField("value_changed");
ROUTE544->setToNode("Joe_r_metacarpophalangeal_2");
ROUTE544->setToField("rotation");
group->addChildren(*ROUTE544);

CROUTE* ROUTE545 = new CROUTE();
ROUTE545->setFromNode("r_index2_RotationInterpolator");
ROUTE545->setFromField("value_changed");
ROUTE545->setToNode("Joe_r_carpal_proximal_interphalangeal_1");
ROUTE545->setToField("rotation");
group->addChildren(*ROUTE545);

CROUTE* ROUTE546 = new CROUTE();
ROUTE546->setFromNode("r_index3_RotationInterpolator");
ROUTE546->setFromField("value_changed");
ROUTE546->setToNode("Joe_r_carpal_distal_interphalangeal_1");
ROUTE546->setToField("rotation");
group->addChildren(*ROUTE546);

CROUTE* ROUTE547 = new CROUTE();
ROUTE547->setFromNode("r_middle0_RotationInterpolator");
ROUTE547->setFromField("value_changed");
ROUTE547->setToNode("Joe_r_carpometacarpal_3");
ROUTE547->setToField("rotation");
group->addChildren(*ROUTE547);

CROUTE* ROUTE548 = new CROUTE();
ROUTE548->setFromNode("r_middle1_RotationInterpolator");
ROUTE548->setFromField("value_changed");
ROUTE548->setToNode("Joe_r_metacarpophalangeal_3");
ROUTE548->setToField("rotation");
group->addChildren(*ROUTE548);

CROUTE* ROUTE549 = new CROUTE();
ROUTE549->setFromNode("r_middle2_RotationInterpolator");
ROUTE549->setFromField("value_changed");
ROUTE549->setToNode("Joe_r_carpal_proximal_interphalangeal_2");
ROUTE549->setToField("rotation");
group->addChildren(*ROUTE549);

CROUTE* ROUTE550 = new CROUTE();
ROUTE550->setFromNode("r_middle3_RotationInterpolator");
ROUTE550->setFromField("value_changed");
ROUTE550->setToNode("Joe_r_carpal_distal_interphalangeal_2");
ROUTE550->setToField("rotation");
group->addChildren(*ROUTE550);

CROUTE* ROUTE551 = new CROUTE();
ROUTE551->setFromNode("r_ring0_RotationInterpolator");
ROUTE551->setFromField("value_changed");
ROUTE551->setToNode("Joe_r_carpometacarpal_4");
ROUTE551->setToField("rotation");
group->addChildren(*ROUTE551);

CROUTE* ROUTE552 = new CROUTE();
ROUTE552->setFromNode("r_ring1_RotationInterpolator");
ROUTE552->setFromField("value_changed");
ROUTE552->setToNode("Joe_r_metacarpophalangeal_4");
ROUTE552->setToField("rotation");
group->addChildren(*ROUTE552);

CROUTE* ROUTE553 = new CROUTE();
ROUTE553->setFromNode("r_ring2_RotationInterpolator");
ROUTE553->setFromField("value_changed");
ROUTE553->setToNode("Joe_r_carpal_proximal_interphalangeal_3");
ROUTE553->setToField("rotation");
group->addChildren(*ROUTE553);

CROUTE* ROUTE554 = new CROUTE();
ROUTE554->setFromNode("r_ring3_RotationInterpolator");
ROUTE554->setFromField("value_changed");
ROUTE554->setToNode("Joe_r_carpal_distal_interphalangeal_3");
ROUTE554->setToField("rotation");
group->addChildren(*ROUTE554);

CROUTE* ROUTE555 = new CROUTE();
ROUTE555->setFromNode("r_pinky0_RotationInterpolator");
ROUTE555->setFromField("value_changed");
ROUTE555->setToNode("Joe_r_carpometacarpal_5");
ROUTE555->setToField("rotation");
group->addChildren(*ROUTE555);

CROUTE* ROUTE556 = new CROUTE();
ROUTE556->setFromNode("r_pinky1_RotationInterpolator");
ROUTE556->setFromField("value_changed");
ROUTE556->setToNode("Joe_r_metacarpophalangeal_5");
ROUTE556->setToField("rotation");
group->addChildren(*ROUTE556);

CROUTE* ROUTE557 = new CROUTE();
ROUTE557->setFromNode("r_pinky2_RotationInterpolator");
ROUTE557->setFromField("value_changed");
ROUTE557->setToNode("Joe_r_carpal_proximal_interphalangeal_4");
ROUTE557->setToField("rotation");
group->addChildren(*ROUTE557);

CROUTE* ROUTE558 = new CROUTE();
ROUTE558->setFromNode("r_pinky3_RotationInterpolator");
ROUTE558->setFromField("value_changed");
ROUTE558->setToNode("Joe_r_carpal_distal_interphalangeal_4");
ROUTE558->setToField("rotation");
group->addChildren(*ROUTE558);

CROUTE* ROUTE559 = new CROUTE();
ROUTE559->setFromNode("KickTimer");
ROUTE559->setFromField("fraction_changed");
ROUTE559->setToNode("skull_tipInterpolator");
ROUTE559->setToField("set_fraction");
group->addChildren(*ROUTE559);

CROUTE* ROUTE560 = new CROUTE();
ROUTE560->setFromNode("skull_tipInterpolator");
ROUTE560->setFromField("value_changed");
ROUTE560->setToNode("Joe_skull_tip_raiser_action");
ROUTE560->setToField("weight");
group->addChildren(*ROUTE560);

CROUTE* ROUTE561 = new CROUTE();
ROUTE561->setFromNode("KickTimer");
ROUTE561->setFromField("fraction_changed");
ROUTE561->setToNode("SkinInterpolator");
ROUTE561->setToField("set_fraction");
group->addChildren(*ROUTE561);

CROUTE* ROUTE562 = new CROUTE();
ROUTE562->setFromNode("SkinInterpolator");
ROUTE562->setFromField("value_changed");
ROUTE562->setToNode("KickTextureTransform");
ROUTE562->setToField("rotation");
group->addChildren(*ROUTE562);

CROUTE* ROUTE563 = new CROUTE();
ROUTE563->setFromNode("KickTimer");
ROUTE563->setFromField("fraction_changed");
ROUTE563->setToNode("ball_TranslationInterpolator");
ROUTE563->setToField("set_fraction");
group->addChildren(*ROUTE563);

CROUTE* ROUTE564 = new CROUTE();
ROUTE564->setFromNode("ball_TranslationInterpolator");
ROUTE564->setFromField("value_changed");
ROUTE564->setToNode("SBall");
ROUTE564->setToField("translation");
group->addChildren(*ROUTE564);

CROUTE* ROUTE565 = new CROUTE();
ROUTE565->setFromNode("KickTimer");
ROUTE565->setFromField("fraction_changed");
ROUTE565->setToNode("ball_RotationInterpolator");
ROUTE565->setToField("set_fraction");
group->addChildren(*ROUTE565);

CROUTE* ROUTE566 = new CROUTE();
ROUTE566->setFromNode("ball_RotationInterpolator");
ROUTE566->setFromField("value_changed");
ROUTE566->setToNode("SBall");
ROUTE566->setToField("rotation");
group->addChildren(*ROUTE566);

X3D0->setScene(*Scene15);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

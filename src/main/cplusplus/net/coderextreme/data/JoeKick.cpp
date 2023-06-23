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
meta3->setContent("JoeKick.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("This Joe model is a HAnim version 2 LOA-3 Humanoid with textured skin based on the original HAnim Specification and data from CAESAR models.");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("Joe D. Williams");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("9 January 2004");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("translated");
meta7->setContent("12 January 2017");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("modified");
meta8->setContent("29 January 2023");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("TODO");
meta9->setContent("Record information about skin coordinates (found in comment at end of scene) as a structured MetadataSet containing MetadataString nodes");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("translators");
meta10->setContent("Roy Walmsley, Don Brutzman, John Carlson");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("../Characters/JoeSkinTexcoordDisplacerKick.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("identifier");
meta12->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeKick.x3d");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("generator");
meta13->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("generator");
meta14->setContent("BS studio translation from .x3dv by Joe using BS Contact");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("license");
meta15->setContent("../license.html");
head1->addMeta(*meta15);

X3D0->setHead(*head1);

CScene* Scene16 = new CScene();
CWorldInfo* WorldInfo17 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo17->setInfo(new CString[3]{"X3D Humanoid LOA3 skeleton","skin from hanim sites, surface features, and some added points","390 points"}, 3);
WorldInfo17->setTitle("X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe");
group->addChildren(*WorldInfo17);

CNavigationInfo* NavigationInfo18 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo18->setDEF("Start_NavigationInfo");
NavigationInfo18->setHeadlight(False);
NavigationInfo18->setSpeed(2.5);
group->addChildren(*NavigationInfo18);

CBackground* Background19 = (CBackground *)(m_pScene.createNode("Background"));
Background19->setDEF("blue_Background");
group->addChildren(*Background19);

CSpotLight* SpotLight20 = (CSpotLight *)(m_pScene.createNode("SpotLight"));
SpotLight20->setDEF("light1");
SpotLight20->setAmbientIntensity(0.7);
SpotLight20->setBeamWidth(1.5);
SpotLight20->setColor(new float[3]{0.8,0.8,1});
SpotLight20->setCutOffAngle(0.6);
SpotLight20->setDirection(new float[3]{0,0,0});
SpotLight20->setLocation(new float[3]{0,3,3});
SpotLight20->setRadius(10);
group->addChildren(*SpotLight20);

CPointLight* PointLight21 = (CPointLight *)(m_pScene.createNode("PointLight"));
PointLight21->setDEF("light2");
PointLight21->setAmbientIntensity(0.7);
PointLight21->setColor(new float[3]{0.8,0.8,1});
PointLight21->setLocation(new float[3]{0,10,-7});
group->addChildren(*PointLight21);

//External from the Humanoid viewpoints
CViewpoint* Viewpoint22 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint22->setDEF("Scene_InclinedView");
Viewpoint22->setCenterOfRotation(new float[3]{0,0.85,0});
Viewpoint22->setDescription("Scene_Inclined View");
Viewpoint22->setOrientation(new float[4]{-0.113,0.993,0.0347,0.671});
Viewpoint22->setPosition(new float[3]{1.62,1.05,3.06});
group->addChildren(*Viewpoint22);

CViewpoint* Viewpoint23 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint23->setDEF("Scene_IFrontView");
Viewpoint23->setCenterOfRotation(new float[3]{0,0.8,0});
Viewpoint23->setDescription("Scene_Front View");
Viewpoint23->setPosition(new float[3]{0,0.8,2.58});
group->addChildren(*Viewpoint23);

CViewpoint* Viewpoint24 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint24->setDEF("Scene_ISideView");
Viewpoint24->setCenterOfRotation(new float[3]{0,0.8,0});
Viewpoint24->setDescription("Scene_Side View");
Viewpoint24->setOrientation(new float[4]{0,1,0,1.5708});
Viewpoint24->setPosition(new float[3]{2.6,0.8,0});
group->addChildren(*Viewpoint24);

CViewpoint* Viewpoint25 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint25->setDEF("Scene_BackView");
Viewpoint25->setCenterOfRotation(new float[3]{0,1.5,0});
Viewpoint25->setDescription("Scene_Back View");
Viewpoint25->setOrientation(new float[4]{0,1,0,3.14});
Viewpoint25->setPosition(new float[3]{0,1.5,-3});
group->addChildren(*Viewpoint25);

CViewpoint* Viewpoint26 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint26->setDEF("Scene_TopView");
Viewpoint26->setCenterOfRotation(new float[3]{0,1.5,0});
Viewpoint26->setDescription("Scene_Top View");
Viewpoint26->setOrientation(new float[4]{1,0,0,-1.5708});
Viewpoint26->setPosition(new float[3]{0,3.5,0});
group->addChildren(*Viewpoint26);

CGroup* Group27 = (CGroup *)(m_pScene.createNode("Group"));
Group27->setDEF("Joe_Humanoid");
CHAnimHumanoid* HAnimHumanoid28 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid28->setName("Kick");
HAnimHumanoid28->setDEF("Joe_Kick");
HAnimHumanoid28->setLoa(3);
HAnimHumanoid28->setVersion("2.0");
CMetadataSet* MetadataSet29 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet29->setName("warnings");
MetadataSet29->setReference("HAnim");
CMetadataString* MetadataString30 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString30->setName("SymmetricalLeftRight");
MetadataString30->setReference("correction options: ignore, warn, average, left, right, largest, smallest");
MetadataString30->setValue(new CString[1]{"ignore"}, 1);
MetadataSet29->setValue(*MetadataString30);

HAnimHumanoid28->setMetadata(*MetadataSet29);

CHAnimJoint* HAnimJoint31 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint31->setName("humanoid_root");
HAnimJoint31->setDEF("Joe_humanoid_root");
HAnimJoint31->setCenter(new float[3]{0,0.875,0});
HAnimJoint31->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint31->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment32 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment32->setName("sacrum");
HAnimSegment32->setDEF("Joe_sacrum");
CHAnimSite* HAnimSite33 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite33->setName("RootFront_view");
HAnimSite33->setDEF("Joe_RootFront_view");
CTransform* Transform34 = (CTransform *)(m_pScene.createNode("Transform"));
Transform34->setDEF("hanimcordsys");
Transform34->setScale(new float[3]{0.175,0.175,0.175});
CViewpoint* Viewpoint35 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint35->setDEF("ViewBodyRootAxes");
Viewpoint35->setDescription("Joe_HAnim Root HAnimSite Coordinate Axes View");
Transform34->addChildren(*Viewpoint35);

CShape* Shape36 = (CShape *)(m_pScene.createNode("Shape"));
Shape36->setDEF("AxisLinesShape");
//RGB lines showing XYZ axes
CIndexedLineSet* IndexedLineSet37 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet37->setColorIndex(new int[3]{0,1,2});
IndexedLineSet37->setColorPerVertex(False);
IndexedLineSet37->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
CCoordinate* Coordinate38 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate38->setPoint(new float[12]{0,0,0,1,0,0,0,1,0,0,0,1});
IndexedLineSet37->setCoord(*Coordinate38);

CColor* Color39 = (CColor *)(m_pScene.createNode("Color"));
Color39->setColor(new float[9]{1,0,0,0,0.6,0,0,0,1});
IndexedLineSet37->setColor(*Color39);

Shape36->setGeometry(IndexedLineSet37);

Transform34->addChildren(*Shape36);

HAnimSite33->addChildren(*Transform34);

HAnimSegment32->addChildren(*HAnimSite33);

HAnimJoint31->addChildren(*HAnimSegment32);

CHAnimJoint* HAnimJoint40 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint40->setName("sacroiliac");
HAnimJoint40->setDEF("Joe_sacroiliac");
HAnimJoint40->setCenter(new float[3]{0,0.92,0});
HAnimJoint40->setSkinCoordIndex(new int[13]{17,19,20,21,22,23,26,27,73,82,89,91,93});
HAnimJoint40->setSkinCoordWeight(new float[13]{1,1,1,1,1,1,1,1,1,1,0.35,0.35,1}, 13);
HAnimJoint40->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint40->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint41 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint41->setName("l_hip");
HAnimJoint41->setDEF("Joe_l_hip");
HAnimJoint41->setCenter(new float[3]{0.1,0.92,0});
HAnimJoint41->setSkinCoordIndex(new int[6]{89,90,94,95,96,97});
HAnimJoint41->setSkinCoordWeight(new float[6]{0.65,1,1,1,1,1}, 6);
HAnimJoint41->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint41->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint42 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint42->setName("l_knee");
HAnimJoint42->setDEF("Joe_l_knee");
HAnimJoint42->setCenter(new float[3]{0.115,0.466,0});
HAnimJoint42->setSkinCoordIndex(new int[8]{334,335,336,337,338,339,340,341});
HAnimJoint42->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint42->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint42->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint43 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint43->setName("l_talocrural");
HAnimJoint43->setDEF("Joe_l_talocrural");
HAnimJoint43->setCenter(new float[3]{0.115,0.069,0});
HAnimJoint43->setSkinCoordIndex(new int[4]{342,343,344,345});
HAnimJoint43->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint43->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint43->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint44 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint44->setName("l_tarsometatarsal_2");
HAnimJoint44->setDEF("Joe_l_tarsometatarsal_2");
HAnimJoint44->setCenter(new float[3]{0.115,0.031,0.03});
HAnimJoint44->setSkinCoordIndex(new int[4]{346,347,348,71});
HAnimJoint44->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint44->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint44->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint45 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint45->setName("l_metatarsophalangeal_2");
HAnimJoint45->setDEF("Joe_l_metatarsophalangeal_2");
HAnimJoint45->setCenter(new float[3]{0.115,0.037,0.09});
HAnimJoint45->setSkinCoordIndex(new int[4]{349,350,351,352});
HAnimJoint45->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint45->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint45->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint46 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint46->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint46->setDEF("Joe_l_tarsal_distal_interphalangeal_2");
HAnimJoint46->setCenter(new float[3]{0.115,0.02,0.122});
HAnimJoint46->setSkinCoordIndex(new int[9]{353,354,355,356,357,358,359,360,361});
HAnimJoint46->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint46->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint46->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint45->addChildren(*HAnimJoint46);

HAnimJoint44->addChildren(*HAnimJoint45);

HAnimJoint43->addChildren(*HAnimJoint44);

HAnimJoint42->addChildren(*HAnimJoint43);

HAnimJoint41->addChildren(*HAnimJoint42);

HAnimJoint40->addChildren(*HAnimJoint41);

CHAnimJoint* HAnimJoint47 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint47->setName("r_hip");
HAnimJoint47->setDEF("Joe_r_hip");
HAnimJoint47->setCenter(new float[3]{-0.1,0.92,0});
HAnimJoint47->setSkinCoordIndex(new int[8]{91,92,98,99,100,101,362,363});
HAnimJoint47->setSkinCoordWeight(new float[8]{0.65,1,0.8,1,1,1,0.4,0.8}, 8);
HAnimJoint47->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint47->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint48 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint48->setName("r_knee");
HAnimJoint48->setDEF("Joe_r_knee");
HAnimJoint48->setCenter(new float[3]{-0.05,0.466,0});
HAnimJoint48->setSkinCoordIndex(new int[9]{362,363,364,365,366,367,368,369,98});
HAnimJoint48->setSkinCoordWeight(new float[9]{0.6,0.2,1,1,1,1,1,1,0.2}, 9);
HAnimJoint48->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint48->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint49 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint49->setName("r_talocrural");
HAnimJoint49->setDEF("Joe_r_talocrural");
HAnimJoint49->setCenter(new float[3]{-0.115,0.069,0});
HAnimJoint49->setSkinCoordIndex(new int[4]{370,371,372,373});
HAnimJoint49->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint49->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint49->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint50 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint50->setName("r_tarsometatarsal_2");
HAnimJoint50->setDEF("Joe_r_tarsometatarsal_2");
HAnimJoint50->setCenter(new float[3]{-0.1,0.015,-0.01});
HAnimJoint50->setSkinCoordIndex(new int[3]{374,375,376});
HAnimJoint50->setSkinCoordWeight(new float[3]{1,1,1}, 3);
HAnimJoint50->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint50->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint51 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint51->setName("r_metatarsophalangeal_2");
HAnimJoint51->setDEF("Joe_r_metatarsophalangeal_2");
HAnimJoint51->setCenter(new float[3]{-0.115,0.037,0.09});
HAnimJoint51->setSkinCoordIndex(new int[4]{377,378,379,380});
HAnimJoint51->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint51->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint51->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint52 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint52->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint52->setDEF("Joe_r_tarsal_distal_interphalangeal_2");
HAnimJoint52->setCenter(new float[3]{-0.1,0.01,0.14});
HAnimJoint52->setSkinCoordIndex(new int[9]{381,382,383,384,385,386,387,388,389});
HAnimJoint52->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint52->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint52->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint51->addChildren(*HAnimJoint52);

HAnimJoint50->addChildren(*HAnimJoint51);

HAnimJoint49->addChildren(*HAnimJoint50);

HAnimJoint48->addChildren(*HAnimJoint49);

HAnimJoint47->addChildren(*HAnimJoint48);

HAnimJoint40->addChildren(*HAnimJoint47);

HAnimJoint31->addChildren(*HAnimJoint40);

CHAnimJoint* HAnimJoint53 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint53->setName("vl5");
HAnimJoint53->setDEF("Joe_vl5");
HAnimJoint53->setCenter(new float[3]{0,1.045,-0.095});
HAnimJoint53->setSkinCoordIndex(new int[2]{28,76});
HAnimJoint53->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint53->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint53->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint54 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint54->setName("vl4");
HAnimJoint54->setDEF("Joe_vl4");
HAnimJoint54->setCenter(new float[3]{0,1.068,-0.085});
HAnimJoint54->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint54->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint55 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint55->setName("vl3");
HAnimJoint55->setDEF("Joe_vl3");
HAnimJoint55->setCenter(new float[3]{0,1.092,-0.0725});
HAnimJoint55->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint55->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint56 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint56->setName("vl2");
HAnimJoint56->setDEF("Joe_vl2");
HAnimJoint56->setCenter(new float[3]{0,1.12,-0.065});
HAnimJoint56->setSkinCoordIndex(new int[9]{16,18,25,83,84,85,86,87,88});
HAnimJoint56->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,0.7,1,0.8}, 9);
HAnimJoint56->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint56->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint57 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint57->setName("vl1");
HAnimJoint57->setDEF("Joe_vl1");
HAnimJoint57->setCenter(new float[3]{0,1.1459,-0.0625});
HAnimJoint57->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint57->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint58 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint58->setName("vt12");
HAnimJoint58->setDEF("Joe_vt12");
HAnimJoint58->setCenter(new float[3]{0,1.179,-0.068});
HAnimJoint58->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint58->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint59 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint59->setName("vt11");
HAnimJoint59->setDEF("Joe_vt11");
HAnimJoint59->setCenter(new float[3]{0,1.2679,-0.081});
HAnimJoint59->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint59->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint60 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint60->setName("vt10");
HAnimJoint60->setDEF("Joe_vt10");
HAnimJoint60->setCenter(new float[3]{0,1.242,-0.09});
HAnimJoint60->setSkinCoordIndex(new int[1]{15});
HAnimJoint60->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint60->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint60->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint61 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint61->setName("vt9");
HAnimJoint61->setDEF("Joe_vt9");
HAnimJoint61->setCenter(new float[3]{0,1.268,-0.1});
HAnimJoint61->setSkinCoordIndex(new int[2]{13,14});
HAnimJoint61->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint61->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint61->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint62 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint62->setName("vt8");
HAnimJoint62->setDEF("Joe_vt8");
HAnimJoint62->setCenter(new float[3]{0,1.294,-0.11});
HAnimJoint62->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint62->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint63 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint63->setName("vt7");
HAnimJoint63->setDEF("Joe_vt7");
HAnimJoint63->setCenter(new float[3]{0,1.323,-0.1155});
HAnimJoint63->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint63->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint64 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint64->setName("vt6");
HAnimJoint64->setDEF("Joe_vt6");
HAnimJoint64->setCenter(new float[3]{0,1.352,-0.12});
HAnimJoint64->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint64->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint65 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint65->setName("vt5");
HAnimJoint65->setDEF("Joe_vt5");
HAnimJoint65->setCenter(new float[3]{0,1.381,-0.1235});
HAnimJoint65->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint65->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint66 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint66->setName("vt4");
HAnimJoint66->setDEF("Joe_vt4");
HAnimJoint66->setCenter(new float[3]{0,1.41,-0.1235});
HAnimJoint66->setSkinCoordIndex(new int[1]{81});
HAnimJoint66->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint66->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint66->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint67 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint67->setName("vt3");
HAnimJoint67->setDEF("Joe_vt3");
HAnimJoint67->setCenter(new float[3]{0,1.438,-0.12});
HAnimJoint67->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint67->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint68 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint68->setName("vt2");
HAnimJoint68->setDEF("Joe_vt2");
HAnimJoint68->setCenter(new float[3]{0,1.468,-0.105});
HAnimJoint68->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint68->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint69 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint69->setName("vt1");
HAnimJoint69->setDEF("Joe_vt1");
HAnimJoint69->setCenter(new float[3]{0,1.497,-0.09});
HAnimJoint69->setSkinCoordIndex(new int[2]{11,24});
HAnimJoint69->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint69->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint69->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint70 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint70->setName("vc7");
HAnimJoint70->setDEF("Joe_vc7");
HAnimJoint70->setCenter(new float[3]{0,1.525,-0.072});
HAnimJoint70->setSkinCoordIndex(new int[2]{74,75});
HAnimJoint70->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint70->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint70->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint71 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint71->setName("vc6");
HAnimJoint71->setDEF("Joe_vc6");
HAnimJoint71->setCenter(new float[3]{0,1.54,-0.05});
HAnimJoint71->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint71->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint72 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint72->setName("vc5");
HAnimJoint72->setDEF("Joe_vc5");
HAnimJoint72->setCenter(new float[3]{0,1.552,-0.035});
HAnimJoint72->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint72->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint73 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint73->setName("vc4");
HAnimJoint73->setDEF("Joe_vc4");
HAnimJoint73->setCenter(new float[3]{0,1.5675,-0.0256});
HAnimJoint73->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint73->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint74 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint74->setName("vc3");
HAnimJoint74->setDEF("Joe_vc3");
HAnimJoint74->setCenter(new float[3]{0,1.58225,-0.0185});
HAnimJoint74->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint74->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint75 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint75->setName("vc2");
HAnimJoint75->setDEF("Joe_vc2");
HAnimJoint75->setCenter(new float[3]{0,1.595,-0.0175});
HAnimJoint75->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint75->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint76 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint76->setName("vc1");
HAnimJoint76->setDEF("Joe_vc1");
HAnimJoint76->setCenter(new float[3]{0,1.61,-0.015});
HAnimJoint76->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint76->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint77 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint77->setName("skullbase");
HAnimJoint77->setDEF("Joe_skullbase");
HAnimJoint77->setCenter(new float[3]{0,1.63,-0.01});
HAnimJoint77->setSkinCoordIndex(new int[10]{0,1,2,3,4,5,6,7,8,9});
HAnimJoint77->setSkinCoordWeight(new float[10]{1,1,1,1,1,1,1,1,1,1}, 10);
HAnimJoint77->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint77->setLlimit(new float[3]{0,0,0}, 3);
CHAnimDisplacer* HAnimDisplacer78 = (CHAnimDisplacer *)(m_pScene.createNode("HAnimDisplacer"));
HAnimDisplacer78->setName("skull_tip_raiser_action");
HAnimDisplacer78->setDEF("Joe_skull_tip_raiser_action");
HAnimDisplacer78->setCoordIndex(new int[10]{0,1,2,3,4,5,6,7,8,9});
HAnimDisplacer78->setDisplacements(new float[30]{0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15});
HAnimJoint77->addDisplacers(*HAnimDisplacer78);

CHAnimJoint* HAnimJoint79 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint79->setName("l_eyelid_joint");
HAnimJoint79->setDEF("Joe_l_eyelid_joint");
HAnimJoint79->setCenter(new float[3]{0.034,1.659,0.06});
HAnimJoint79->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint79->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint77->addChildren(*HAnimJoint79);

CHAnimJoint* HAnimJoint80 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint80->setName("l_eyeball_joint");
HAnimJoint80->setDEF("Joe_l_eyeball_joint");
HAnimJoint80->setCenter(new float[3]{0.034,1.659,0.06});
HAnimJoint80->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint80->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint77->addChildren(*HAnimJoint80);

CHAnimJoint* HAnimJoint81 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint81->setName("l_eyebrow_joint");
HAnimJoint81->setDEF("Joe_l_eyebrow_joint");
HAnimJoint81->setCenter(new float[3]{0.034,1.659,0.06});
HAnimJoint81->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint81->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint77->addChildren(*HAnimJoint81);

CHAnimJoint* HAnimJoint82 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint82->setName("r_eyelid_joint");
HAnimJoint82->setDEF("Joe_r_eyelid_joint");
HAnimJoint82->setCenter(new float[3]{-0.034,1.659,0.06});
HAnimJoint82->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint82->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint77->addChildren(*HAnimJoint82);

CHAnimJoint* HAnimJoint83 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint83->setName("r_eyeball_joint");
HAnimJoint83->setDEF("Joe_r_eyeball_joint");
HAnimJoint83->setCenter(new float[3]{-0.034,1.659,0.06});
HAnimJoint83->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint83->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint77->addChildren(*HAnimJoint83);

CHAnimJoint* HAnimJoint84 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint84->setName("r_eyebrow_joint");
HAnimJoint84->setDEF("Joe_r_eyebrow_joint");
HAnimJoint84->setCenter(new float[3]{-0.034,1.659,0.06});
HAnimJoint84->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint84->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint77->addChildren(*HAnimJoint84);

CHAnimJoint* HAnimJoint85 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint85->setName("temporomandibular");
HAnimJoint85->setDEF("Joe_temporomandibular");
HAnimJoint85->setCenter(new float[3]{0.034,1.659,0.06});
HAnimJoint85->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint85->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint77->addChildren(*HAnimJoint85);

HAnimJoint76->addChildren(*HAnimJoint77);

HAnimJoint75->addChildren(*HAnimJoint76);

HAnimJoint74->addChildren(*HAnimJoint75);

HAnimJoint73->addChildren(*HAnimJoint74);

HAnimJoint72->addChildren(*HAnimJoint73);

HAnimJoint71->addChildren(*HAnimJoint72);

HAnimJoint70->addChildren(*HAnimJoint71);

HAnimJoint69->addChildren(*HAnimJoint70);

CHAnimJoint* HAnimJoint86 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint86->setDEF("Joe_l_acromioclavicular");
HAnimJoint86->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint86->setSkinCoordIndex(new int[1]{12});
HAnimJoint86->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint86->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint86->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint87 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint87->setName("l_acromioclavicular");
HAnimJoint87->setDEF("Joe_l_sternoclavicular");
HAnimJoint87->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint87->setSkinCoordIndex(new int[1]{79});
HAnimJoint87->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint87->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint87->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint88 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint88->setName("l_shoulder");
HAnimJoint88->setDEF("Joe_l_shoulder");
HAnimJoint88->setCenter(new float[3]{0.2,1.44,-0.04});
HAnimJoint88->setSkinCoordIndex(new int[8]{41,42,44,80,102,103,104,105});
HAnimJoint88->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint88->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint88->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint89 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint89->setName("l_elbow");
HAnimJoint89->setDEF("Joe_l_elbow");
HAnimJoint89->setCenter(new float[3]{0.2,1.1388,-0.04});
HAnimJoint89->setSkinCoordIndex(new int[12]{45,46,47,109,110,111,112,113,115,116,117,118});
HAnimJoint89->setSkinCoordWeight(new float[15]{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, 15);
HAnimJoint89->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint89->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint90 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint90->setName("l_radiocarpal");
HAnimJoint90->setDEF("Joe_l_radiocarpal");
HAnimJoint90->setCenter(new float[3]{0.2,0.87,-0.04});
HAnimJoint90->setSkinCoordIndex(new int[8]{119,120,121,122,123,124,125,126});
HAnimJoint90->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint90->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint90->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint91 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint91->setName("l_carpometacarpal_1");
HAnimJoint91->setDEF("Joe_l_carpometacarpal_1");
HAnimJoint91->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint91->setSkinCoordIndex(new int[2]{127,128});
HAnimJoint91->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint91->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint91->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint92 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint92->setName("l_metacarpophalangeal_1");
HAnimJoint92->setDEF("Joe_l_metacarpophalangeal_1");
HAnimJoint92->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint92->setSkinCoordIndex(new int[6]{138,139,140,141,142,143});
HAnimJoint92->setSkinCoordWeight(new float[6]{0.5,0.5,0.5,1,1,1}, 6);
HAnimJoint92->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint92->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint93 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint93->setName("l_carpal_interphalangeal_1");
HAnimJoint93->setDEF("Joe_l_carpal_interphalangeal_1");
HAnimJoint93->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint93->setSkinCoordIndex(new int[9]{144,145,146,147,148,149,150,151,152});
HAnimJoint93->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint93->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint93->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint92->addChildren(*HAnimJoint93);

HAnimJoint91->addChildren(*HAnimJoint92);

HAnimJoint90->addChildren(*HAnimJoint91);

CHAnimJoint* HAnimJoint94 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint94->setName("l_carpometacarpal_2");
HAnimJoint94->setDEF("Joe_l_carpometacarpal_2");
HAnimJoint94->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint94->setSkinCoordIndex(new int[2]{129,130});
HAnimJoint94->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint94->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint94->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint95 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint95->setName("l_metacarpophalangeal_2");
HAnimJoint95->setDEF("Joe_l_metacarpophalangeal_2");
HAnimJoint95->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint95->setSkinCoordIndex(new int[7]{138,139,140,153,154,155,163});
HAnimJoint95->setSkinCoordWeight(new float[7]{0.5,0.5,0.5,1,1,1,0.5}, 7);
HAnimJoint95->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint95->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint96 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint96->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint96->setDEF("Joe_l_carpal_proximal_interphalangeal_2");
HAnimJoint96->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint96->setSkinCoordIndex(new int[4]{166,167,168,169});
HAnimJoint96->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint96->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint96->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint97 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint97->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint97->setDEF("Joe_l_carpal_distal_interphalangeal_2");
HAnimJoint97->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint97->setSkinCoordIndex(new int[9]{170,171,172,173,174,175,176,177,178});
HAnimJoint97->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint97->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint97->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint96->addChildren(*HAnimJoint97);

HAnimJoint95->addChildren(*HAnimJoint96);

HAnimJoint94->addChildren(*HAnimJoint95);

HAnimJoint90->addChildren(*HAnimJoint94);

CHAnimJoint* HAnimJoint98 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint98->setName("l_carpometacarpal_3");
HAnimJoint98->setDEF("Joe_l_carpometacarpal_3");
HAnimJoint98->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint98->setSkinCoordIndex(new int[2]{131,132});
HAnimJoint98->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint98->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint98->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint99 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint99->setName("l_metacarpophalangeal_3");
HAnimJoint99->setDEF("Joe_l_metacarpophalangeal_3");
HAnimJoint99->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint99->setSkinCoordIndex(new int[4]{156,157,163,164});
HAnimJoint99->setSkinCoordWeight(new float[4]{1,1,0.5,0.5}, 4);
HAnimJoint99->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint99->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint100 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint100->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint100->setDEF("Joe_l_carpal_proximal_interphalangeal_3");
HAnimJoint100->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint100->setSkinCoordIndex(new int[4]{179,180,181,182});
HAnimJoint100->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint100->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint100->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint101 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint101->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint101->setDEF("Joe_l_carpal_distal_interphalangeal_3");
HAnimJoint101->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint101->setSkinCoordIndex(new int[9]{183,184,185,186,187,188,189,190,191});
HAnimJoint101->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint101->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint101->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint100->addChildren(*HAnimJoint101);

HAnimJoint99->addChildren(*HAnimJoint100);

HAnimJoint98->addChildren(*HAnimJoint99);

HAnimJoint90->addChildren(*HAnimJoint98);

CHAnimJoint* HAnimJoint102 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint102->setName("l_carpometacarpal_4");
HAnimJoint102->setDEF("Joe_l_carpometacarpal_4");
HAnimJoint102->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint102->setSkinCoordIndex(new int[2]{133,134});
HAnimJoint102->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint102->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint102->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint103 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint103->setName("l_metacarpophalangeal_4");
HAnimJoint103->setDEF("Joe_l_metacarpophalangeal_4");
HAnimJoint103->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint103->setSkinCoordIndex(new int[4]{158,159,164,165});
HAnimJoint103->setSkinCoordWeight(new float[4]{1,1,0.5,0.5}, 4);
HAnimJoint103->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint103->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint104 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint104->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint104->setDEF("Joe_l_carpal_proximal_interphalangeal_4");
HAnimJoint104->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint104->setSkinCoordIndex(new int[4]{192,193,194,195});
HAnimJoint104->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint104->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint104->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint105 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint105->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint105->setDEF("Joe_l_carpal_distal_interphalangeal_4");
HAnimJoint105->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint105->setSkinCoordIndex(new int[9]{196,197,198,199,200,201,202,203,204});
HAnimJoint105->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint105->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint105->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint104->addChildren(*HAnimJoint105);

HAnimJoint103->addChildren(*HAnimJoint104);

HAnimJoint102->addChildren(*HAnimJoint103);

HAnimJoint90->addChildren(*HAnimJoint102);

CHAnimJoint* HAnimJoint106 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint106->setName("l_carpometacarpal_5");
HAnimJoint106->setDEF("Joe_l_carpometacarpal_5");
HAnimJoint106->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint106->setSkinCoordIndex(new int[4]{135,136,137,165});
HAnimJoint106->setSkinCoordWeight(new float[4]{1,1,1,0.5}, 4);
HAnimJoint106->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint106->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint107 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint107->setName("l_metacarpophalangeal_5");
HAnimJoint107->setDEF("Joe_l_metacarpophalangeal_5");
HAnimJoint107->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint107->setSkinCoordIndex(new int[3]{160,161,162});
HAnimJoint107->setSkinCoordWeight(new float[3]{1,1,1}, 3);
HAnimJoint107->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint107->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint108 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint108->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint108->setDEF("Joe_l_carpal_proximal_interphalangeal_5");
HAnimJoint108->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint108->setSkinCoordIndex(new int[4]{205,206,207,208});
HAnimJoint108->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint108->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint108->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint109 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint109->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint109->setDEF("Joe_l_carpal_distal_interphalangeal_5");
HAnimJoint109->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint109->setSkinCoordIndex(new int[9]{209,210,211,212,213,214,215,216,217});
HAnimJoint109->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint109->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint109->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint108->addChildren(*HAnimJoint109);

HAnimJoint107->addChildren(*HAnimJoint108);

HAnimJoint106->addChildren(*HAnimJoint107);

HAnimJoint90->addChildren(*HAnimJoint106);

HAnimJoint89->addChildren(*HAnimJoint90);

HAnimJoint88->addChildren(*HAnimJoint89);

HAnimJoint87->addChildren(*HAnimJoint88);

HAnimJoint86->addChildren(*HAnimJoint87);

HAnimJoint69->addChildren(*HAnimJoint86);

CHAnimJoint* HAnimJoint110 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint110->setName("r_sternoclavicular");
HAnimJoint110->setDEF("Joe_r_sternoclavicular");
HAnimJoint110->setCenter(new float[3]{-0.03,1.46,0});
HAnimJoint110->setSkinCoordIndex(new int[1]{10});
HAnimJoint110->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint110->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint110->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint111 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint111->setName("r_acromioclavicular");
HAnimJoint111->setDEF("Joe_r_acromioclavicular");
HAnimJoint111->setCenter(new float[3]{-0.09,1.41,-0.11});
HAnimJoint111->setSkinCoordIndex(new int[2]{77,29});
HAnimJoint111->setSkinCoordWeight(new float[2]{1,0.9}, 2);
HAnimJoint111->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint111->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint112 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint112->setName("r_shoulder");
HAnimJoint112->setDEF("Joe_r_shoulder");
HAnimJoint112->setCenter(new float[3]{-0.2,1.44,-0.04});
HAnimJoint112->setSkinCoordIndex(new int[10]{29,30,32,78,218,219,220,221,86,88});
HAnimJoint112->setSkinCoordWeight(new float[10]{0.1,1,1,1,1,1,1,1,0.3,0.2}, 10);
HAnimJoint112->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint112->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint113 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint113->setName("r_elbow");
HAnimJoint113->setDEF("Joe_r_elbow");
HAnimJoint113->setCenter(new float[3]{-0.2,1.1388,-0.04});
HAnimJoint113->setSkinCoordIndex(new int[12]{33,34,35,225,226,227,228,229,231,232,233,234});
HAnimJoint113->setSkinCoordWeight(new float[12]{1,1,1,1,1,1,1,1,1,1,1,1}, 12);
HAnimJoint113->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint113->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint114 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint114->setName("r_radiocarpal");
HAnimJoint114->setDEF("Joe_r_radiocarpal");
HAnimJoint114->setCenter(new float[3]{-0.2,0.89,-0.04});
HAnimJoint114->setSkinCoordIndex(new int[8]{235,236,237,238,239,240,241,242});
HAnimJoint114->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint114->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint114->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint115 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint115->setName("r_carpometacarpal_1");
HAnimJoint115->setDEF("Joe_r_carpometacarpal_1");
HAnimJoint115->setCenter(new float[3]{-0.2,0.85,0});
HAnimJoint115->setSkinCoordIndex(new int[2]{243,244});
HAnimJoint115->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint115->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint115->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint116 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint116->setName("r_metacarpophalangeal_1");
HAnimJoint116->setDEF("Joe_r_metacarpophalangeal_1");
HAnimJoint116->setCenter(new float[3]{-0.2,0.82,0.03});
HAnimJoint116->setSkinCoordIndex(new int[6]{254,255,256,257,258,259});
HAnimJoint116->setSkinCoordWeight(new float[6]{0.5,0.5,0.5,1,1,1}, 6);
HAnimJoint116->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint116->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint117 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint117->setName("r_carpal_interphalangeal_1");
HAnimJoint117->setDEF("Joe_r_carpal_interphalangeal_1");
HAnimJoint117->setCenter(new float[3]{-0.2,0.8,0.05});
HAnimJoint117->setSkinCoordIndex(new int[9]{260,261,262,263,264,265,266,267,268});
HAnimJoint117->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint117->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint117->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint116->addChildren(*HAnimJoint117);

HAnimJoint115->addChildren(*HAnimJoint116);

HAnimJoint114->addChildren(*HAnimJoint115);

CHAnimJoint* HAnimJoint118 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint118->setName("r_carpometacarpal_2");
HAnimJoint118->setDEF("Joe_r_carpometacarpal_2");
HAnimJoint118->setCenter(new float[3]{-0.2,0.84,-0.015});
HAnimJoint118->setSkinCoordIndex(new int[2]{245,246});
HAnimJoint118->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint118->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint118->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint119 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint119->setName("r_metacarpophalangeal_2");
HAnimJoint119->setDEF("Joe_r_metacarpophalangeal_2");
HAnimJoint119->setCenter(new float[3]{-0.2,0.793,-0.015});
HAnimJoint119->setSkinCoordIndex(new int[7]{254,255,256,269,270,271,279});
HAnimJoint119->setSkinCoordWeight(new float[7]{0.5,0.5,0.5,1,1,1,0.5}, 7);
HAnimJoint119->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint119->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint120 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint120->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint120->setDEF("Joe_r_carpal_proximal_interphalangeal_2");
HAnimJoint120->setCenter(new float[3]{-0.2,0.745,-0.015});
HAnimJoint120->setSkinCoordIndex(new int[4]{282,283,284,285});
HAnimJoint120->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint120->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint120->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint121 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint121->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint121->setDEF("Joe_r_carpal_distal_interphalangeal_2");
HAnimJoint121->setCenter(new float[3]{-0.2,0.72,-0.015});
HAnimJoint121->setSkinCoordIndex(new int[9]{286,287,288,289,290,291,292,293,294});
HAnimJoint121->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint121->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint121->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint120->addChildren(*HAnimJoint121);

HAnimJoint119->addChildren(*HAnimJoint120);

HAnimJoint118->addChildren(*HAnimJoint119);

HAnimJoint114->addChildren(*HAnimJoint118);

CHAnimJoint* HAnimJoint122 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint122->setName("r_carpometacarpal_3");
HAnimJoint122->setDEF("Joe_r_carpometacarpal_3");
HAnimJoint122->setCenter(new float[3]{-0.2,0.835,-0.04});
HAnimJoint122->setSkinCoordIndex(new int[2]{247,248});
HAnimJoint122->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint122->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint122->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint123 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint123->setName("r_metacarpophalangeal_3");
HAnimJoint123->setDEF("Joe_r_metacarpophalangeal_3");
HAnimJoint123->setCenter(new float[3]{-0.2,0.788,-0.04});
HAnimJoint123->setSkinCoordIndex(new int[4]{272,273,279,280});
HAnimJoint123->setSkinCoordWeight(new float[4]{1,1,0.5,0.5}, 4);
HAnimJoint123->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint123->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint124 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint124->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint124->setDEF("Joe_r_carpal_proximal_interphalangeal_3");
HAnimJoint124->setCenter(new float[3]{-0.2,0.74,-0.04});
HAnimJoint124->setSkinCoordIndex(new int[4]{295,296,297,298});
HAnimJoint124->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint124->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint124->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint125 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint125->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint125->setDEF("Joe_r_carpal_distal_interphalangeal_3");
HAnimJoint125->setCenter(new float[3]{-0.2,0.7142,-0.04});
HAnimJoint125->setSkinCoordIndex(new int[9]{299,300,301,302,303,304,305,306,307});
HAnimJoint125->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint125->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint125->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint124->addChildren(*HAnimJoint125);

HAnimJoint123->addChildren(*HAnimJoint124);

HAnimJoint122->addChildren(*HAnimJoint123);

HAnimJoint114->addChildren(*HAnimJoint122);

CHAnimJoint* HAnimJoint126 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint126->setName("r_carpometacarpal_4");
HAnimJoint126->setDEF("Joe_r_carpometacarpal_4");
HAnimJoint126->setCenter(new float[3]{-0.2,0.835,-0.065});
HAnimJoint126->setSkinCoordIndex(new int[2]{249,250});
HAnimJoint126->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint126->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint126->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint127 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint127->setName("r_metacarpophalangeal_4");
HAnimJoint127->setDEF("Joe_r_metacarpophalangeal_4");
HAnimJoint127->setCenter(new float[3]{-0.2,0.793,-0.065});
HAnimJoint127->setSkinCoordIndex(new int[4]{274,275,280,281});
HAnimJoint127->setSkinCoordWeight(new float[4]{1,1,0.5,0.5}, 4);
HAnimJoint127->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint127->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint128 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint128->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint128->setDEF("Joe_r_carpal_proximal_interphalangeal_4");
HAnimJoint128->setCenter(new float[3]{-0.2,0.74,-0.065});
HAnimJoint128->setSkinCoordIndex(new int[4]{308,309,310,311});
HAnimJoint128->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint128->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint128->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint129 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint129->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint129->setDEF("Joe_r_carpal_distal_interphalangeal_4");
HAnimJoint129->setCenter(new float[3]{-0.2,0.7177,-0.065});
HAnimJoint129->setSkinCoordIndex(new int[9]{312,313,314,315,316,317,318,319,320});
HAnimJoint129->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint129->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint129->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint128->addChildren(*HAnimJoint129);

HAnimJoint127->addChildren(*HAnimJoint128);

HAnimJoint126->addChildren(*HAnimJoint127);

HAnimJoint114->addChildren(*HAnimJoint126);

CHAnimJoint* HAnimJoint130 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint130->setName("r_carpometacarpal_5");
HAnimJoint130->setDEF("Joe_r_carpometacarpal_5");
HAnimJoint130->setCenter(new float[3]{-0.2,0.84,-0.085});
HAnimJoint130->setSkinCoordIndex(new int[4]{251,252,253,281});
HAnimJoint130->setSkinCoordWeight(new float[4]{1,1,1,0.5}, 4);
HAnimJoint130->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint130->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint131 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint131->setName("r_metacarpophalangeal_5");
HAnimJoint131->setDEF("Joe_r_metacarpophalangeal_5");
HAnimJoint131->setCenter(new float[3]{-0.2,0.79,-0.085});
HAnimJoint131->setSkinCoordIndex(new int[3]{276,277,278});
HAnimJoint131->setSkinCoordWeight(new float[3]{1,1,1}, 3);
HAnimJoint131->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint131->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint132 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint132->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint132->setDEF("Joe_r_carpal_proximal_interphalangeal_5");
HAnimJoint132->setCenter(new float[3]{-0.2,0.755,-0.085});
HAnimJoint132->setSkinCoordIndex(new int[4]{321,322,323,324});
HAnimJoint132->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint132->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint132->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint133 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint133->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint133->setDEF("Joe_r_carpal_distal_interphalangeal_5");
HAnimJoint133->setCenter(new float[3]{-0.2,0.735,-0.09});
HAnimJoint133->setSkinCoordIndex(new int[9]{325,326,327,328,329,330,331,332,333});
HAnimJoint133->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint133->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint133->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint132->addChildren(*HAnimJoint133);

HAnimJoint131->addChildren(*HAnimJoint132);

HAnimJoint130->addChildren(*HAnimJoint131);

HAnimJoint114->addChildren(*HAnimJoint130);

HAnimJoint113->addChildren(*HAnimJoint114);

HAnimJoint112->addChildren(*HAnimJoint113);

HAnimJoint111->addChildren(*HAnimJoint112);

HAnimJoint110->addChildren(*HAnimJoint111);

HAnimJoint69->addChildren(*HAnimJoint110);

HAnimJoint68->addChildren(*HAnimJoint69);

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

HAnimJoint31->addChildren(*HAnimJoint53);

HAnimHumanoid28->setSkeleton(*HAnimJoint31);

CShape* Shape134 = (CShape *)(m_pScene.createNode("Shape"));
Shape134->setDEF("Joe_Shape");
CAppearance* Appearance135 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance135->setDEF("Joe_skin_Appearance");
CMaterial* Material136 = (CMaterial *)(m_pScene.createNode("Material"));
Material136->setDEF("Joe_skin_Material");
Material136->setDiffuseColor(new float[3]{0.3,0.3,0.6});
Material136->setEmissiveColor(new float[3]{0.3,0.3,0.6});
Appearance135->setMaterial(*Material136);

CImageTexture* ImageTexture137 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture137->setDEF("JoeSkinImageTexture");
ImageTexture137->setUrl(new CString[2]{"JoeBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png"}, 2);
Appearance135->setTexture(*ImageTexture137);

CTextureTransform* TextureTransform138 = (CTextureTransform *)(m_pScene.createNode("TextureTransform"));
TextureTransform138->setDEF("KickTextureTransform");
Appearance135->setTextureTransform(*TextureTransform138);

Shape134->setAppearance(*Appearance135);

CIndexedFaceSet* IndexedFaceSet139 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet139->setDEF("Joe_skin_IndexedFaceSet");
IndexedFaceSet139->setCoordIndex(new int[2780]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
IndexedFaceSet139->setCreaseAngle(3.14);
CCoordinate* Coordinate140 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate140->setDEF("Joe_SkinCoord");
Coordinate140->setPoint(new float[1170]{0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168});
IndexedFaceSet139->setCoord(*Coordinate140);

CTextureCoordinate* TextureCoordinate141 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate141->setPoint(new float[8]{0,0,0.5,0.5,0.5,0,0,0.5});
IndexedFaceSet139->setTexCoord(*TextureCoordinate141);

Shape134->setGeometry(IndexedFaceSet139);

HAnimHumanoid28->setSkin(*Shape134);

CCoordinate* Coordinate142 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate142->setUSE("Joe_SkinCoord");
HAnimHumanoid28->setSkinCoord(*Coordinate142);

CHAnimJoint* HAnimJoint143 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint143->setUSE("Joe_humanoid_root");
HAnimHumanoid28->addJoints(*HAnimJoint143);

CHAnimJoint* HAnimJoint144 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint144->setUSE("Joe_sacroiliac");
HAnimHumanoid28->addJoints(*HAnimJoint144);

CHAnimJoint* HAnimJoint145 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint145->setUSE("Joe_skullbase");
HAnimHumanoid28->addJoints(*HAnimJoint145);

CHAnimJoint* HAnimJoint146 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint146->setUSE("Joe_temporomandibular");
HAnimHumanoid28->addJoints(*HAnimJoint146);

CHAnimJoint* HAnimJoint147 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint147->setUSE("Joe_vc1");
HAnimHumanoid28->addJoints(*HAnimJoint147);

CHAnimJoint* HAnimJoint148 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint148->setUSE("Joe_vc2");
HAnimHumanoid28->addJoints(*HAnimJoint148);

CHAnimJoint* HAnimJoint149 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint149->setUSE("Joe_vc3");
HAnimHumanoid28->addJoints(*HAnimJoint149);

CHAnimJoint* HAnimJoint150 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint150->setUSE("Joe_vc4");
HAnimHumanoid28->addJoints(*HAnimJoint150);

CHAnimJoint* HAnimJoint151 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint151->setUSE("Joe_vc5");
HAnimHumanoid28->addJoints(*HAnimJoint151);

CHAnimJoint* HAnimJoint152 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint152->setUSE("Joe_vc6");
HAnimHumanoid28->addJoints(*HAnimJoint152);

CHAnimJoint* HAnimJoint153 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint153->setUSE("Joe_vc7");
HAnimHumanoid28->addJoints(*HAnimJoint153);

CHAnimJoint* HAnimJoint154 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint154->setUSE("Joe_vl1");
HAnimHumanoid28->addJoints(*HAnimJoint154);

CHAnimJoint* HAnimJoint155 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint155->setUSE("Joe_vl2");
HAnimHumanoid28->addJoints(*HAnimJoint155);

CHAnimJoint* HAnimJoint156 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint156->setUSE("Joe_vl3");
HAnimHumanoid28->addJoints(*HAnimJoint156);

CHAnimJoint* HAnimJoint157 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint157->setUSE("Joe_vl4");
HAnimHumanoid28->addJoints(*HAnimJoint157);

CHAnimJoint* HAnimJoint158 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint158->setUSE("Joe_vl5");
HAnimHumanoid28->addJoints(*HAnimJoint158);

CHAnimJoint* HAnimJoint159 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint159->setUSE("Joe_vt1");
HAnimHumanoid28->addJoints(*HAnimJoint159);

CHAnimJoint* HAnimJoint160 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint160->setUSE("Joe_vt10");
HAnimHumanoid28->addJoints(*HAnimJoint160);

CHAnimJoint* HAnimJoint161 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint161->setUSE("Joe_vt11");
HAnimHumanoid28->addJoints(*HAnimJoint161);

CHAnimJoint* HAnimJoint162 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint162->setUSE("Joe_vt12");
HAnimHumanoid28->addJoints(*HAnimJoint162);

CHAnimJoint* HAnimJoint163 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint163->setUSE("Joe_vt2");
HAnimHumanoid28->addJoints(*HAnimJoint163);

CHAnimJoint* HAnimJoint164 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint164->setUSE("Joe_vt3");
HAnimHumanoid28->addJoints(*HAnimJoint164);

CHAnimJoint* HAnimJoint165 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint165->setUSE("Joe_vt4");
HAnimHumanoid28->addJoints(*HAnimJoint165);

CHAnimJoint* HAnimJoint166 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint166->setUSE("Joe_vt5");
HAnimHumanoid28->addJoints(*HAnimJoint166);

CHAnimJoint* HAnimJoint167 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint167->setUSE("Joe_vt6");
HAnimHumanoid28->addJoints(*HAnimJoint167);

CHAnimJoint* HAnimJoint168 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint168->setUSE("Joe_vt7");
HAnimHumanoid28->addJoints(*HAnimJoint168);

CHAnimJoint* HAnimJoint169 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint169->setUSE("Joe_vt8");
HAnimHumanoid28->addJoints(*HAnimJoint169);

CHAnimJoint* HAnimJoint170 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint170->setUSE("Joe_vt9");
HAnimHumanoid28->addJoints(*HAnimJoint170);

CHAnimJoint* HAnimJoint171 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint171->setUSE("Joe_l_acromioclavicular");
HAnimHumanoid28->addJoints(*HAnimJoint171);

CHAnimJoint* HAnimJoint172 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint172->setUSE("Joe_r_acromioclavicular");
HAnimHumanoid28->addJoints(*HAnimJoint172);

CHAnimJoint* HAnimJoint173 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint173->setUSE("Joe_l_carpal_distal_interphalangeal_2");
HAnimHumanoid28->addJoints(*HAnimJoint173);

CHAnimJoint* HAnimJoint174 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint174->setUSE("Joe_r_carpal_distal_interphalangeal_2");
HAnimHumanoid28->addJoints(*HAnimJoint174);

CHAnimJoint* HAnimJoint175 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint175->setUSE("Joe_l_carpal_distal_interphalangeal_3");
HAnimHumanoid28->addJoints(*HAnimJoint175);

CHAnimJoint* HAnimJoint176 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint176->setUSE("Joe_r_carpal_distal_interphalangeal_3");
HAnimHumanoid28->addJoints(*HAnimJoint176);

CHAnimJoint* HAnimJoint177 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint177->setUSE("Joe_l_carpal_distal_interphalangeal_4");
HAnimHumanoid28->addJoints(*HAnimJoint177);

CHAnimJoint* HAnimJoint178 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint178->setUSE("Joe_r_carpal_distal_interphalangeal_4");
HAnimHumanoid28->addJoints(*HAnimJoint178);

CHAnimJoint* HAnimJoint179 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint179->setUSE("Joe_l_carpal_distal_interphalangeal_5");
HAnimHumanoid28->addJoints(*HAnimJoint179);

CHAnimJoint* HAnimJoint180 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint180->setUSE("Joe_r_carpal_distal_interphalangeal_5");
HAnimHumanoid28->addJoints(*HAnimJoint180);

CHAnimJoint* HAnimJoint181 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint181->setUSE("Joe_l_carpal_interphalangeal_1");
HAnimHumanoid28->addJoints(*HAnimJoint181);

CHAnimJoint* HAnimJoint182 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint182->setUSE("Joe_r_carpal_interphalangeal_1");
HAnimHumanoid28->addJoints(*HAnimJoint182);

CHAnimJoint* HAnimJoint183 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint183->setUSE("Joe_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid28->addJoints(*HAnimJoint183);

CHAnimJoint* HAnimJoint184 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint184->setUSE("Joe_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid28->addJoints(*HAnimJoint184);

CHAnimJoint* HAnimJoint185 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint185->setUSE("Joe_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid28->addJoints(*HAnimJoint185);

CHAnimJoint* HAnimJoint186 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint186->setUSE("Joe_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid28->addJoints(*HAnimJoint186);

CHAnimJoint* HAnimJoint187 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint187->setUSE("Joe_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid28->addJoints(*HAnimJoint187);

CHAnimJoint* HAnimJoint188 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint188->setUSE("Joe_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid28->addJoints(*HAnimJoint188);

CHAnimJoint* HAnimJoint189 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint189->setUSE("Joe_l_carpal_proximal_interphalangeal_5");
HAnimHumanoid28->addJoints(*HAnimJoint189);

CHAnimJoint* HAnimJoint190 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint190->setUSE("Joe_r_carpal_proximal_interphalangeal_5");
HAnimHumanoid28->addJoints(*HAnimJoint190);

CHAnimJoint* HAnimJoint191 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint191->setUSE("Joe_l_carpometacarpal_1");
HAnimHumanoid28->addJoints(*HAnimJoint191);

CHAnimJoint* HAnimJoint192 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint192->setUSE("Joe_r_carpometacarpal_1");
HAnimHumanoid28->addJoints(*HAnimJoint192);

CHAnimJoint* HAnimJoint193 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint193->setUSE("Joe_l_carpometacarpal_2");
HAnimHumanoid28->addJoints(*HAnimJoint193);

CHAnimJoint* HAnimJoint194 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint194->setUSE("Joe_r_carpometacarpal_2");
HAnimHumanoid28->addJoints(*HAnimJoint194);

CHAnimJoint* HAnimJoint195 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint195->setUSE("Joe_l_carpometacarpal_3");
HAnimHumanoid28->addJoints(*HAnimJoint195);

CHAnimJoint* HAnimJoint196 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint196->setUSE("Joe_r_carpometacarpal_3");
HAnimHumanoid28->addJoints(*HAnimJoint196);

CHAnimJoint* HAnimJoint197 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint197->setUSE("Joe_l_carpometacarpal_4");
HAnimHumanoid28->addJoints(*HAnimJoint197);

CHAnimJoint* HAnimJoint198 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint198->setUSE("Joe_r_carpometacarpal_4");
HAnimHumanoid28->addJoints(*HAnimJoint198);

CHAnimJoint* HAnimJoint199 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint199->setUSE("Joe_l_carpometacarpal_5");
HAnimHumanoid28->addJoints(*HAnimJoint199);

CHAnimJoint* HAnimJoint200 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint200->setUSE("Joe_r_carpometacarpal_5");
HAnimHumanoid28->addJoints(*HAnimJoint200);

CHAnimJoint* HAnimJoint201 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint201->setUSE("Joe_l_elbow");
HAnimHumanoid28->addJoints(*HAnimJoint201);

CHAnimJoint* HAnimJoint202 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint202->setUSE("Joe_r_elbow");
HAnimHumanoid28->addJoints(*HAnimJoint202);

CHAnimJoint* HAnimJoint203 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint203->setUSE("Joe_l_eyeball_joint");
HAnimHumanoid28->addJoints(*HAnimJoint203);

CHAnimJoint* HAnimJoint204 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint204->setUSE("Joe_r_eyeball_joint");
HAnimHumanoid28->addJoints(*HAnimJoint204);

CHAnimJoint* HAnimJoint205 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint205->setUSE("Joe_l_eyebrow_joint");
HAnimHumanoid28->addJoints(*HAnimJoint205);

CHAnimJoint* HAnimJoint206 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint206->setUSE("Joe_r_eyebrow_joint");
HAnimHumanoid28->addJoints(*HAnimJoint206);

CHAnimJoint* HAnimJoint207 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint207->setUSE("Joe_l_eyelid_joint");
HAnimHumanoid28->addJoints(*HAnimJoint207);

CHAnimJoint* HAnimJoint208 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint208->setUSE("Joe_r_eyelid_joint");
HAnimHumanoid28->addJoints(*HAnimJoint208);

CHAnimJoint* HAnimJoint209 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint209->setUSE("Joe_l_hip");
HAnimHumanoid28->addJoints(*HAnimJoint209);

CHAnimJoint* HAnimJoint210 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint210->setUSE("Joe_r_hip");
HAnimHumanoid28->addJoints(*HAnimJoint210);

CHAnimJoint* HAnimJoint211 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint211->setUSE("Joe_l_knee");
HAnimHumanoid28->addJoints(*HAnimJoint211);

CHAnimJoint* HAnimJoint212 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint212->setUSE("Joe_r_knee");
HAnimHumanoid28->addJoints(*HAnimJoint212);

CHAnimJoint* HAnimJoint213 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint213->setUSE("Joe_l_metacarpophalangeal_1");
HAnimHumanoid28->addJoints(*HAnimJoint213);

CHAnimJoint* HAnimJoint214 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint214->setUSE("Joe_r_metacarpophalangeal_1");
HAnimHumanoid28->addJoints(*HAnimJoint214);

CHAnimJoint* HAnimJoint215 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint215->setUSE("Joe_l_metacarpophalangeal_2");
HAnimHumanoid28->addJoints(*HAnimJoint215);

CHAnimJoint* HAnimJoint216 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint216->setUSE("Joe_r_metacarpophalangeal_2");
HAnimHumanoid28->addJoints(*HAnimJoint216);

CHAnimJoint* HAnimJoint217 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint217->setUSE("Joe_l_metacarpophalangeal_3");
HAnimHumanoid28->addJoints(*HAnimJoint217);

CHAnimJoint* HAnimJoint218 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint218->setUSE("Joe_r_metacarpophalangeal_3");
HAnimHumanoid28->addJoints(*HAnimJoint218);

CHAnimJoint* HAnimJoint219 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint219->setUSE("Joe_l_metacarpophalangeal_4");
HAnimHumanoid28->addJoints(*HAnimJoint219);

CHAnimJoint* HAnimJoint220 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint220->setUSE("Joe_r_metacarpophalangeal_4");
HAnimHumanoid28->addJoints(*HAnimJoint220);

CHAnimJoint* HAnimJoint221 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint221->setUSE("Joe_l_metacarpophalangeal_5");
HAnimHumanoid28->addJoints(*HAnimJoint221);

CHAnimJoint* HAnimJoint222 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint222->setUSE("Joe_r_metacarpophalangeal_5");
HAnimHumanoid28->addJoints(*HAnimJoint222);

CHAnimJoint* HAnimJoint223 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint223->setUSE("Joe_l_metatarsophalangeal_2");
HAnimHumanoid28->addJoints(*HAnimJoint223);

CHAnimJoint* HAnimJoint224 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint224->setUSE("Joe_r_metatarsophalangeal_2");
HAnimHumanoid28->addJoints(*HAnimJoint224);

CHAnimJoint* HAnimJoint225 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint225->setUSE("Joe_l_radiocarpal");
HAnimHumanoid28->addJoints(*HAnimJoint225);

CHAnimJoint* HAnimJoint226 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint226->setUSE("Joe_r_radiocarpal");
HAnimHumanoid28->addJoints(*HAnimJoint226);

CHAnimJoint* HAnimJoint227 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint227->setUSE("Joe_l_shoulder");
HAnimHumanoid28->addJoints(*HAnimJoint227);

CHAnimJoint* HAnimJoint228 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint228->setUSE("Joe_r_shoulder");
HAnimHumanoid28->addJoints(*HAnimJoint228);

CHAnimJoint* HAnimJoint229 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint229->setUSE("Joe_l_sternoclavicular");
HAnimHumanoid28->addJoints(*HAnimJoint229);

CHAnimJoint* HAnimJoint230 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint230->setUSE("Joe_r_sternoclavicular");
HAnimHumanoid28->addJoints(*HAnimJoint230);

CHAnimJoint* HAnimJoint231 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint231->setUSE("Joe_l_talocrural");
HAnimHumanoid28->addJoints(*HAnimJoint231);

CHAnimJoint* HAnimJoint232 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint232->setUSE("Joe_r_talocrural");
HAnimHumanoid28->addJoints(*HAnimJoint232);

CHAnimJoint* HAnimJoint233 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint233->setUSE("Joe_l_tarsal_distal_interphalangeal_2");
HAnimHumanoid28->addJoints(*HAnimJoint233);

CHAnimJoint* HAnimJoint234 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint234->setUSE("Joe_r_tarsal_distal_interphalangeal_2");
HAnimHumanoid28->addJoints(*HAnimJoint234);

CHAnimJoint* HAnimJoint235 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint235->setUSE("Joe_l_tarsometatarsal_2");
HAnimHumanoid28->addJoints(*HAnimJoint235);

CHAnimJoint* HAnimJoint236 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint236->setUSE("Joe_r_tarsometatarsal_2");
HAnimHumanoid28->addJoints(*HAnimJoint236);

CHAnimSegment* HAnimSegment237 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment237->setUSE("Joe_sacrum");
HAnimHumanoid28->setSegments(*HAnimSegment237);

CHAnimSite* HAnimSite238 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite238->setUSE("Joe_RootFront_view");
HAnimHumanoid28->setSites(*HAnimSite238);

Group27->addChildren(*HAnimHumanoid28);

group->addChildren(*Group27);

CGroup* Group239 = (CGroup *)(m_pScene.createNode("Group"));
CTimeSensor* TimeSensor240 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor240->setDEF("KickTimer");
TimeSensor240->setCycleInterval(3.73);
TimeSensor240->setLoop(True);
Group239->addChildren(*TimeSensor240);

//Interpolators
COrientationInterpolator* OrientationInterpolator241 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator241->setDEF("HumanoidRoot_RotationInterpolator");
OrientationInterpolator241->setKey(new float[5]{0,0.1,0.4,0.6,1}, 5);
OrientationInterpolator241->setKeyValue(new float[20]{1,0,0,0.5,1,0,0,0.5,-1,0,0,0.1,-1,0,0,0.5,-1,0,0,0.5});
Group239->addChildren(*OrientationInterpolator241);

CPositionInterpolator* PositionInterpolator242 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator242->setDEF("HumanoidRoot_TranslationInterpolator");
PositionInterpolator242->setKey(new float[4]{0,0.2,0.6,1}, 4);
PositionInterpolator242->setKeyValue(new float[12]{1,0.3,-1,0.4,-0.04,-0.4,-0.18,0.1,0,-0.2,0.15,0.15});
Group239->addChildren(*PositionInterpolator242);

COrientationInterpolator* OrientationInterpolator243 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator243->setDEF("sacroiliac_RotationInterpolator");
OrientationInterpolator243->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator243->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator243);

COrientationInterpolator* OrientationInterpolator244 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator244->setDEF("l_hip_RotationInterpolator");
OrientationInterpolator244->setKey(new float[5]{0,0.1,0.3,0.45,1}, 5);
OrientationInterpolator244->setKeyValue(new float[20]{-1,0,0,1.5,-1,0,0,1,0,0,1,0,1,0,0,0.5,1,0,0,1});
Group239->addChildren(*OrientationInterpolator244);

COrientationInterpolator* OrientationInterpolator245 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator245->setDEF("l_knee_RotationInterpolator");
OrientationInterpolator245->setKey(new float[5]{0,0.2,0.35,0.5,1}, 5);
OrientationInterpolator245->setKeyValue(new float[20]{1,0,0,1,0,0,1,0,0,0,1,0.2,1,0,1,0.5,1,0,0,1.4});
Group239->addChildren(*OrientationInterpolator245);

COrientationInterpolator* OrientationInterpolator246 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator246->setDEF("l_ankle_RotationInterpolator");
OrientationInterpolator246->setKey(new float[3]{0,0.25,1}, 3);
OrientationInterpolator246->setKeyValue(new float[12]{-1,0,0,1,0,0,1,0,1,0,0,1});
Group239->addChildren(*OrientationInterpolator246);

COrientationInterpolator* OrientationInterpolator247 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator247->setDEF("l_subtalar_RotationInterpolator");
OrientationInterpolator247->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator247->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator247);

COrientationInterpolator* OrientationInterpolator248 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator248->setDEF("l_midtarsal_RotationInterpolator");
OrientationInterpolator248->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator248->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator248);

COrientationInterpolator* OrientationInterpolator249 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator249->setDEF("l_metatarsal_RotationInterpolator");
OrientationInterpolator249->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator249->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator249);

COrientationInterpolator* OrientationInterpolator250 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator250->setDEF("r_hip_RotationInterpolator");
OrientationInterpolator250->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator250->setKeyValue(new float[20]{1,0,0,1,1,0,0,1,-1,0,0,1,-1,0,0,1,-1,0,0,1});
Group239->addChildren(*OrientationInterpolator250);

COrientationInterpolator* OrientationInterpolator251 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator251->setDEF("r_knee_RotationInterpolator");
OrientationInterpolator251->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator251->setKeyValue(new float[20]{1,0,0,0.1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,1.5});
Group239->addChildren(*OrientationInterpolator251);

COrientationInterpolator* OrientationInterpolator252 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator252->setDEF("r_ankle_RotationInterpolator");
OrientationInterpolator252->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator252->setKeyValue(new float[20]{-1,0,0,1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,0.5});
Group239->addChildren(*OrientationInterpolator252);

COrientationInterpolator* OrientationInterpolator253 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator253->setDEF("r_subtalar_RotationInterpolator");
OrientationInterpolator253->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator253->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator253);

COrientationInterpolator* OrientationInterpolator254 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator254->setDEF("r_midtarsal_RotationInterpolator");
OrientationInterpolator254->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator254->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator254);

COrientationInterpolator* OrientationInterpolator255 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator255->setDEF("r_metatarsal_RotationInterpolator");
OrientationInterpolator255->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator255->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator255);

COrientationInterpolator* OrientationInterpolator256 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator256->setDEF("vl5_RotationInterpolator");
OrientationInterpolator256->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator256->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator256);

COrientationInterpolator* OrientationInterpolator257 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator257->setDEF("vl4_RotationInterpolator");
OrientationInterpolator257->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator257->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator257);

COrientationInterpolator* OrientationInterpolator258 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator258->setDEF("vl3_RotationInterpolator");
OrientationInterpolator258->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator258->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator258);

COrientationInterpolator* OrientationInterpolator259 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator259->setDEF("vl2_RotationInterpolator");
OrientationInterpolator259->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator259->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator259);

COrientationInterpolator* OrientationInterpolator260 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator260->setDEF("vl1_RotationInterpolator");
OrientationInterpolator260->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator260->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator260);

COrientationInterpolator* OrientationInterpolator261 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator261->setDEF("vt12_RotationInterpolator");
OrientationInterpolator261->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator261->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator261);

COrientationInterpolator* OrientationInterpolator262 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator262->setDEF("vt11_RotationInterpolator");
OrientationInterpolator262->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator262->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator262);

COrientationInterpolator* OrientationInterpolator263 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator263->setDEF("vt10_RotationInterpolator");
OrientationInterpolator263->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator263->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator263);

COrientationInterpolator* OrientationInterpolator264 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator264->setDEF("vt9_RotationInterpolator");
OrientationInterpolator264->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator264->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator264);

COrientationInterpolator* OrientationInterpolator265 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator265->setDEF("vt8_RotationInterpolator");
OrientationInterpolator265->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator265->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator265);

COrientationInterpolator* OrientationInterpolator266 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator266->setDEF("vt7_RotationInterpolator");
OrientationInterpolator266->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator266->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator266);

COrientationInterpolator* OrientationInterpolator267 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator267->setDEF("vt6_RotationInterpolator");
OrientationInterpolator267->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator267->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator267);

COrientationInterpolator* OrientationInterpolator268 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator268->setDEF("vt5_RotationInterpolator");
OrientationInterpolator268->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator268->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator268);

COrientationInterpolator* OrientationInterpolator269 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator269->setDEF("vt4_RotationInterpolator");
OrientationInterpolator269->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator269->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator269);

COrientationInterpolator* OrientationInterpolator270 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator270->setDEF("vt3_RotationInterpolator");
OrientationInterpolator270->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator270->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator270);

COrientationInterpolator* OrientationInterpolator271 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator271->setDEF("vt2_RotationInterpolator");
OrientationInterpolator271->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator271->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator271);

COrientationInterpolator* OrientationInterpolator272 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator272->setDEF("vt1_RotationInterpolator");
OrientationInterpolator272->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator272->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator272);

COrientationInterpolator* OrientationInterpolator273 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator273->setDEF("vc7_RotationInterpolator");
OrientationInterpolator273->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator273->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator273);

COrientationInterpolator* OrientationInterpolator274 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator274->setDEF("vc6_RotationInterpolator");
OrientationInterpolator274->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator274->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator274);

COrientationInterpolator* OrientationInterpolator275 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator275->setDEF("vc5_RotationInterpolator");
OrientationInterpolator275->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator275->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator275);

COrientationInterpolator* OrientationInterpolator276 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator276->setDEF("vc4_RotationInterpolator");
OrientationInterpolator276->setKey(new float[4]{0,0.3,0.4,1}, 4);
OrientationInterpolator276->setKeyValue(new float[16]{1,0,1,0.25,-1,0,-1,0.35,1,0,0,0.75,1,0,1,0.5});
Group239->addChildren(*OrientationInterpolator276);

COrientationInterpolator* OrientationInterpolator277 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator277->setDEF("vc3_RotationInterpolator");
OrientationInterpolator277->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator277->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator277);

COrientationInterpolator* OrientationInterpolator278 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator278->setDEF("vc2_RotationInterpolator");
OrientationInterpolator278->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator278->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator278);

COrientationInterpolator* OrientationInterpolator279 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator279->setDEF("vc1_RotationInterpolator");
OrientationInterpolator279->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator279->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator279);

COrientationInterpolator* OrientationInterpolator280 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator280->setDEF("skullbase_RotationInterpolator");
OrientationInterpolator280->setKey(new float[4]{0,0.2,0.75,1}, 4);
OrientationInterpolator280->setKeyValue(new float[16]{0,-1,0,0.5,0,0,1,0,0,0,1,0,0,1,0,0.35});
Group239->addChildren(*OrientationInterpolator280);

COrientationInterpolator* OrientationInterpolator281 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator281->setDEF("l_eyelid_joint_RotationInterpolator");
OrientationInterpolator281->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator281->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator281);

COrientationInterpolator* OrientationInterpolator282 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator282->setDEF("l_eyeball_joint_RotationInterpolator");
OrientationInterpolator282->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator282->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator282);

COrientationInterpolator* OrientationInterpolator283 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator283->setDEF("l_eyebrow_joint_RotationInterpolator");
OrientationInterpolator283->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator283->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator283);

COrientationInterpolator* OrientationInterpolator284 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator284->setDEF("r_eyelid_joint_RotationInterpolator");
OrientationInterpolator284->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator284->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator284);

COrientationInterpolator* OrientationInterpolator285 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator285->setDEF("r_eyeball_joint_RotationInterpolator");
OrientationInterpolator285->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator285->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator285);

COrientationInterpolator* OrientationInterpolator286 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator286->setDEF("r_eyebrow_joint_RotationInterpolator");
OrientationInterpolator286->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator286->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator286);

COrientationInterpolator* OrientationInterpolator287 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator287->setDEF("temporomandibular_RotationInterpolator");
OrientationInterpolator287->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator287->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator287);

COrientationInterpolator* OrientationInterpolator288 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator288->setDEF("l_sternoclavicular_RotationInterpolator");
OrientationInterpolator288->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator288->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator288);

COrientationInterpolator* OrientationInterpolator289 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator289->setDEF("l_acromioclavicular_RotationInterpolator");
OrientationInterpolator289->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator289->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator289);

COrientationInterpolator* OrientationInterpolator290 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator290->setDEF("l_shoulder_RotationInterpolator");
OrientationInterpolator290->setKey(new float[3]{0,0.4,1}, 3);
OrientationInterpolator290->setKeyValue(new float[12]{0,0,1,0,0,0,1,1.5,-1,0,1,1.75});
Group239->addChildren(*OrientationInterpolator290);

COrientationInterpolator* OrientationInterpolator291 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator291->setDEF("l_elbow_RotationInterpolator");
OrientationInterpolator291->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator291->setKeyValue(new float[12]{-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5});
Group239->addChildren(*OrientationInterpolator291);

COrientationInterpolator* OrientationInterpolator292 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator292->setDEF("l_wrist_RotationInterpolator");
OrientationInterpolator292->setKey(new float[4]{0,0.4,0.8,1}, 4);
OrientationInterpolator292->setKeyValue(new float[16]{0,0,1,0,0,1,0,1.3,0,-0.5,1,1.3,0,0,1,0});
Group239->addChildren(*OrientationInterpolator292);

COrientationInterpolator* OrientationInterpolator293 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator293->setDEF("l_thumb1_RotationInterpolator");
OrientationInterpolator293->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator293->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator293);

COrientationInterpolator* OrientationInterpolator294 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator294->setDEF("l_thumb2_RotationInterpolator");
OrientationInterpolator294->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator294->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator294);

COrientationInterpolator* OrientationInterpolator295 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator295->setDEF("l_thumb3_RotationInterpolator");
OrientationInterpolator295->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator295->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator295);

COrientationInterpolator* OrientationInterpolator296 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator296->setDEF("l_index0_RotationInterpolator");
OrientationInterpolator296->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator296->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator296);

COrientationInterpolator* OrientationInterpolator297 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator297->setDEF("l_index1_RotationInterpolator");
OrientationInterpolator297->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator297->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator297);

COrientationInterpolator* OrientationInterpolator298 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator298->setDEF("l_index2_RotationInterpolator");
OrientationInterpolator298->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator298->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator298);

COrientationInterpolator* OrientationInterpolator299 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator299->setDEF("l_index3_RotationInterpolator");
OrientationInterpolator299->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator299->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator299);

COrientationInterpolator* OrientationInterpolator300 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator300->setDEF("l_middle0_RotationInterpolator");
OrientationInterpolator300->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator300->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator300);

COrientationInterpolator* OrientationInterpolator301 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator301->setDEF("l_middle1_RotationInterpolator");
OrientationInterpolator301->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator301->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator301);

COrientationInterpolator* OrientationInterpolator302 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator302->setDEF("l_middle2_RotationInterpolator");
OrientationInterpolator302->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator302->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator302);

COrientationInterpolator* OrientationInterpolator303 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator303->setDEF("l_middle3_RotationInterpolator");
OrientationInterpolator303->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator303->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator303);

COrientationInterpolator* OrientationInterpolator304 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator304->setDEF("l_ring0_RotationInterpolator");
OrientationInterpolator304->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator304->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator304);

COrientationInterpolator* OrientationInterpolator305 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator305->setDEF("l_ring1_RotationInterpolator");
OrientationInterpolator305->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator305->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator305);

COrientationInterpolator* OrientationInterpolator306 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator306->setDEF("l_ring2_RotationInterpolator");
OrientationInterpolator306->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator306->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator306);

COrientationInterpolator* OrientationInterpolator307 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator307->setDEF("l_ring3_RotationInterpolator");
OrientationInterpolator307->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator307->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator307);

COrientationInterpolator* OrientationInterpolator308 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator308->setDEF("l_pinky0_RotationInterpolator");
OrientationInterpolator308->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator308->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator308);

COrientationInterpolator* OrientationInterpolator309 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator309->setDEF("l_pinky1_RotationInterpolator");
OrientationInterpolator309->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator309->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator309);

COrientationInterpolator* OrientationInterpolator310 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator310->setDEF("l_pinky2_RotationInterpolator");
OrientationInterpolator310->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator310->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator310);

COrientationInterpolator* OrientationInterpolator311 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator311->setDEF("l_pinky3_RotationInterpolator");
OrientationInterpolator311->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator311->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator311);

COrientationInterpolator* OrientationInterpolator312 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator312->setDEF("r_sternoclavicular_RotationInterpolator");
OrientationInterpolator312->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator312->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator312);

COrientationInterpolator* OrientationInterpolator313 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator313->setDEF("r_acromioclavicular_RotationInterpolator");
OrientationInterpolator313->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator313->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator313);

COrientationInterpolator* OrientationInterpolator314 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator314->setDEF("r_shoulder_RotationInterpolator");
OrientationInterpolator314->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator314->setKeyValue(new float[12]{0,0,-1,2.5,0,0,-1,1.5,0,0,-1,1.75});
Group239->addChildren(*OrientationInterpolator314);

COrientationInterpolator* OrientationInterpolator315 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator315->setDEF("r_elbow_RotationInterpolator");
OrientationInterpolator315->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator315->setKeyValue(new float[12]{-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5});
Group239->addChildren(*OrientationInterpolator315);

COrientationInterpolator* OrientationInterpolator316 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator316->setDEF("r_wrist_RotationInterpolator");
OrientationInterpolator316->setKey(new float[4]{0,0.5,0.7,1}, 4);
OrientationInterpolator316->setKeyValue(new float[16]{0,1,0,0.3,0,0,1,0,0,0,-1,1,0,-1,0,0.3});
Group239->addChildren(*OrientationInterpolator316);

COrientationInterpolator* OrientationInterpolator317 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator317->setDEF("r_thumb1_RotationInterpolator");
OrientationInterpolator317->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator317->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator317);

COrientationInterpolator* OrientationInterpolator318 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator318->setDEF("r_thumb2_RotationInterpolator");
OrientationInterpolator318->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator318->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator318);

COrientationInterpolator* OrientationInterpolator319 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator319->setDEF("r_thumb3_RotationInterpolator");
OrientationInterpolator319->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator319->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group239->addChildren(*OrientationInterpolator319);

COrientationInterpolator* OrientationInterpolator320 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator320->setDEF("r_index0_RotationInterpolator");
OrientationInterpolator320->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator320->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0});
Group239->addChildren(*OrientationInterpolator320);

COrientationInterpolator* OrientationInterpolator321 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator321->setDEF("r_index1_RotationInterpolator");
OrientationInterpolator321->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator321->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group239->addChildren(*OrientationInterpolator321);

COrientationInterpolator* OrientationInterpolator322 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator322->setDEF("r_index2_RotationInterpolator");
OrientationInterpolator322->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator322->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group239->addChildren(*OrientationInterpolator322);

COrientationInterpolator* OrientationInterpolator323 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator323->setDEF("r_index3_RotationInterpolator");
OrientationInterpolator323->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator323->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group239->addChildren(*OrientationInterpolator323);

COrientationInterpolator* OrientationInterpolator324 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator324->setDEF("r_middle0_RotationInterpolator");
OrientationInterpolator324->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator324->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0});
Group239->addChildren(*OrientationInterpolator324);

COrientationInterpolator* OrientationInterpolator325 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator325->setDEF("r_middle1_RotationInterpolator");
OrientationInterpolator325->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator325->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group239->addChildren(*OrientationInterpolator325);

COrientationInterpolator* OrientationInterpolator326 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator326->setDEF("r_middle2_RotationInterpolator");
OrientationInterpolator326->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator326->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group239->addChildren(*OrientationInterpolator326);

COrientationInterpolator* OrientationInterpolator327 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator327->setDEF("r_middle3_RotationInterpolator");
OrientationInterpolator327->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator327->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group239->addChildren(*OrientationInterpolator327);

COrientationInterpolator* OrientationInterpolator328 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator328->setDEF("r_ring0_RotationInterpolator");
OrientationInterpolator328->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator328->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0});
Group239->addChildren(*OrientationInterpolator328);

COrientationInterpolator* OrientationInterpolator329 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator329->setDEF("r_ring1_RotationInterpolator");
OrientationInterpolator329->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator329->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group239->addChildren(*OrientationInterpolator329);

COrientationInterpolator* OrientationInterpolator330 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator330->setDEF("r_ring2_RotationInterpolator");
OrientationInterpolator330->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator330->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group239->addChildren(*OrientationInterpolator330);

COrientationInterpolator* OrientationInterpolator331 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator331->setDEF("r_ring3_RotationInterpolator");
OrientationInterpolator331->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator331->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group239->addChildren(*OrientationInterpolator331);

COrientationInterpolator* OrientationInterpolator332 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator332->setDEF("r_pinky0_RotationInterpolator");
OrientationInterpolator332->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator332->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0});
Group239->addChildren(*OrientationInterpolator332);

COrientationInterpolator* OrientationInterpolator333 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator333->setDEF("r_pinky1_RotationInterpolator");
OrientationInterpolator333->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator333->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group239->addChildren(*OrientationInterpolator333);

COrientationInterpolator* OrientationInterpolator334 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator334->setDEF("r_pinky2_RotationInterpolator");
OrientationInterpolator334->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator334->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group239->addChildren(*OrientationInterpolator334);

COrientationInterpolator* OrientationInterpolator335 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator335->setDEF("r_pinky3_RotationInterpolator");
OrientationInterpolator335->setKey(new float[4]{0,0.5,0.75,1}, 4);
OrientationInterpolator335->setKeyValue(new float[16]{0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group239->addChildren(*OrientationInterpolator335);

group->addChildren(*Group239);

//TimeSensor to Interpolators
CROUTE* ROUTE336 = new CROUTE();
ROUTE336->setFromField("fraction_changed");
ROUTE336->setFromNode("KickTimer");
ROUTE336->setToField("set_fraction");
ROUTE336->setToNode("HumanoidRoot_RotationInterpolator");
group->addChildren(*ROUTE336);

CROUTE* ROUTE337 = new CROUTE();
ROUTE337->setFromField("fraction_changed");
ROUTE337->setFromNode("KickTimer");
ROUTE337->setToField("set_fraction");
ROUTE337->setToNode("HumanoidRoot_TranslationInterpolator");
group->addChildren(*ROUTE337);

CROUTE* ROUTE338 = new CROUTE();
ROUTE338->setFromField("fraction_changed");
ROUTE338->setFromNode("KickTimer");
ROUTE338->setToField("set_fraction");
ROUTE338->setToNode("sacroiliac_RotationInterpolator");
group->addChildren(*ROUTE338);

CROUTE* ROUTE339 = new CROUTE();
ROUTE339->setFromField("fraction_changed");
ROUTE339->setFromNode("KickTimer");
ROUTE339->setToField("set_fraction");
ROUTE339->setToNode("l_hip_RotationInterpolator");
group->addChildren(*ROUTE339);

CROUTE* ROUTE340 = new CROUTE();
ROUTE340->setFromField("fraction_changed");
ROUTE340->setFromNode("KickTimer");
ROUTE340->setToField("set_fraction");
ROUTE340->setToNode("l_knee_RotationInterpolator");
group->addChildren(*ROUTE340);

CROUTE* ROUTE341 = new CROUTE();
ROUTE341->setFromField("fraction_changed");
ROUTE341->setFromNode("KickTimer");
ROUTE341->setToField("set_fraction");
ROUTE341->setToNode("l_ankle_RotationInterpolator");
group->addChildren(*ROUTE341);

CROUTE* ROUTE342 = new CROUTE();
ROUTE342->setFromField("fraction_changed");
ROUTE342->setFromNode("KickTimer");
ROUTE342->setToField("set_fraction");
ROUTE342->setToNode("l_subtalar_RotationInterpolator");
group->addChildren(*ROUTE342);

CROUTE* ROUTE343 = new CROUTE();
ROUTE343->setFromField("fraction_changed");
ROUTE343->setFromNode("KickTimer");
ROUTE343->setToField("set_fraction");
ROUTE343->setToNode("l_midtarsal_RotationInterpolator");
group->addChildren(*ROUTE343);

CROUTE* ROUTE344 = new CROUTE();
ROUTE344->setFromField("fraction_changed");
ROUTE344->setFromNode("KickTimer");
ROUTE344->setToField("set_fraction");
ROUTE344->setToNode("l_metatarsal_RotationInterpolator");
group->addChildren(*ROUTE344);

CROUTE* ROUTE345 = new CROUTE();
ROUTE345->setFromField("fraction_changed");
ROUTE345->setFromNode("KickTimer");
ROUTE345->setToField("set_fraction");
ROUTE345->setToNode("r_hip_RotationInterpolator");
group->addChildren(*ROUTE345);

CROUTE* ROUTE346 = new CROUTE();
ROUTE346->setFromField("fraction_changed");
ROUTE346->setFromNode("KickTimer");
ROUTE346->setToField("set_fraction");
ROUTE346->setToNode("r_knee_RotationInterpolator");
group->addChildren(*ROUTE346);

CROUTE* ROUTE347 = new CROUTE();
ROUTE347->setFromField("fraction_changed");
ROUTE347->setFromNode("KickTimer");
ROUTE347->setToField("set_fraction");
ROUTE347->setToNode("r_ankle_RotationInterpolator");
group->addChildren(*ROUTE347);

CROUTE* ROUTE348 = new CROUTE();
ROUTE348->setFromField("fraction_changed");
ROUTE348->setFromNode("KickTimer");
ROUTE348->setToField("set_fraction");
ROUTE348->setToNode("r_subtalar_RotationInterpolator");
group->addChildren(*ROUTE348);

CROUTE* ROUTE349 = new CROUTE();
ROUTE349->setFromField("fraction_changed");
ROUTE349->setFromNode("KickTimer");
ROUTE349->setToField("set_fraction");
ROUTE349->setToNode("r_midtarsal_RotationInterpolator");
group->addChildren(*ROUTE349);

CROUTE* ROUTE350 = new CROUTE();
ROUTE350->setFromField("fraction_changed");
ROUTE350->setFromNode("KickTimer");
ROUTE350->setToField("set_fraction");
ROUTE350->setToNode("r_metatarsal_RotationInterpolator");
group->addChildren(*ROUTE350);

CROUTE* ROUTE351 = new CROUTE();
ROUTE351->setFromField("fraction_changed");
ROUTE351->setFromNode("KickTimer");
ROUTE351->setToField("set_fraction");
ROUTE351->setToNode("vl5_RotationInterpolator");
group->addChildren(*ROUTE351);

CROUTE* ROUTE352 = new CROUTE();
ROUTE352->setFromField("fraction_changed");
ROUTE352->setFromNode("KickTimer");
ROUTE352->setToField("set_fraction");
ROUTE352->setToNode("vl4_RotationInterpolator");
group->addChildren(*ROUTE352);

CROUTE* ROUTE353 = new CROUTE();
ROUTE353->setFromField("fraction_changed");
ROUTE353->setFromNode("KickTimer");
ROUTE353->setToField("set_fraction");
ROUTE353->setToNode("vl3_RotationInterpolator");
group->addChildren(*ROUTE353);

CROUTE* ROUTE354 = new CROUTE();
ROUTE354->setFromField("fraction_changed");
ROUTE354->setFromNode("KickTimer");
ROUTE354->setToField("set_fraction");
ROUTE354->setToNode("vl2_RotationInterpolator");
group->addChildren(*ROUTE354);

CROUTE* ROUTE355 = new CROUTE();
ROUTE355->setFromField("fraction_changed");
ROUTE355->setFromNode("KickTimer");
ROUTE355->setToField("set_fraction");
ROUTE355->setToNode("vl1_RotationInterpolator");
group->addChildren(*ROUTE355);

CROUTE* ROUTE356 = new CROUTE();
ROUTE356->setFromField("fraction_changed");
ROUTE356->setFromNode("KickTimer");
ROUTE356->setToField("set_fraction");
ROUTE356->setToNode("vt12_RotationInterpolator");
group->addChildren(*ROUTE356);

CROUTE* ROUTE357 = new CROUTE();
ROUTE357->setFromField("fraction_changed");
ROUTE357->setFromNode("KickTimer");
ROUTE357->setToField("set_fraction");
ROUTE357->setToNode("vt11_RotationInterpolator");
group->addChildren(*ROUTE357);

CROUTE* ROUTE358 = new CROUTE();
ROUTE358->setFromField("fraction_changed");
ROUTE358->setFromNode("KickTimer");
ROUTE358->setToField("set_fraction");
ROUTE358->setToNode("vt10_RotationInterpolator");
group->addChildren(*ROUTE358);

CROUTE* ROUTE359 = new CROUTE();
ROUTE359->setFromField("fraction_changed");
ROUTE359->setFromNode("KickTimer");
ROUTE359->setToField("set_fraction");
ROUTE359->setToNode("vt9_RotationInterpolator");
group->addChildren(*ROUTE359);

CROUTE* ROUTE360 = new CROUTE();
ROUTE360->setFromField("fraction_changed");
ROUTE360->setFromNode("KickTimer");
ROUTE360->setToField("set_fraction");
ROUTE360->setToNode("vt8_RotationInterpolator");
group->addChildren(*ROUTE360);

CROUTE* ROUTE361 = new CROUTE();
ROUTE361->setFromField("fraction_changed");
ROUTE361->setFromNode("KickTimer");
ROUTE361->setToField("set_fraction");
ROUTE361->setToNode("vt7_RotationInterpolator");
group->addChildren(*ROUTE361);

CROUTE* ROUTE362 = new CROUTE();
ROUTE362->setFromField("fraction_changed");
ROUTE362->setFromNode("KickTimer");
ROUTE362->setToField("set_fraction");
ROUTE362->setToNode("vt6_RotationInterpolator");
group->addChildren(*ROUTE362);

CROUTE* ROUTE363 = new CROUTE();
ROUTE363->setFromField("fraction_changed");
ROUTE363->setFromNode("KickTimer");
ROUTE363->setToField("set_fraction");
ROUTE363->setToNode("vt5_RotationInterpolator");
group->addChildren(*ROUTE363);

CROUTE* ROUTE364 = new CROUTE();
ROUTE364->setFromField("fraction_changed");
ROUTE364->setFromNode("KickTimer");
ROUTE364->setToField("set_fraction");
ROUTE364->setToNode("vt4_RotationInterpolator");
group->addChildren(*ROUTE364);

CROUTE* ROUTE365 = new CROUTE();
ROUTE365->setFromField("fraction_changed");
ROUTE365->setFromNode("KickTimer");
ROUTE365->setToField("set_fraction");
ROUTE365->setToNode("vt3_RotationInterpolator");
group->addChildren(*ROUTE365);

CROUTE* ROUTE366 = new CROUTE();
ROUTE366->setFromField("fraction_changed");
ROUTE366->setFromNode("KickTimer");
ROUTE366->setToField("set_fraction");
ROUTE366->setToNode("vt2_RotationInterpolator");
group->addChildren(*ROUTE366);

CROUTE* ROUTE367 = new CROUTE();
ROUTE367->setFromField("fraction_changed");
ROUTE367->setFromNode("KickTimer");
ROUTE367->setToField("set_fraction");
ROUTE367->setToNode("vt1_RotationInterpolator");
group->addChildren(*ROUTE367);

CROUTE* ROUTE368 = new CROUTE();
ROUTE368->setFromField("fraction_changed");
ROUTE368->setFromNode("KickTimer");
ROUTE368->setToField("set_fraction");
ROUTE368->setToNode("vc7_RotationInterpolator");
group->addChildren(*ROUTE368);

CROUTE* ROUTE369 = new CROUTE();
ROUTE369->setFromField("fraction_changed");
ROUTE369->setFromNode("KickTimer");
ROUTE369->setToField("set_fraction");
ROUTE369->setToNode("vc6_RotationInterpolator");
group->addChildren(*ROUTE369);

CROUTE* ROUTE370 = new CROUTE();
ROUTE370->setFromField("fraction_changed");
ROUTE370->setFromNode("KickTimer");
ROUTE370->setToField("set_fraction");
ROUTE370->setToNode("vc5_RotationInterpolator");
group->addChildren(*ROUTE370);

CROUTE* ROUTE371 = new CROUTE();
ROUTE371->setFromField("fraction_changed");
ROUTE371->setFromNode("KickTimer");
ROUTE371->setToField("set_fraction");
ROUTE371->setToNode("vc4_RotationInterpolator");
group->addChildren(*ROUTE371);

CROUTE* ROUTE372 = new CROUTE();
ROUTE372->setFromField("fraction_changed");
ROUTE372->setFromNode("KickTimer");
ROUTE372->setToField("set_fraction");
ROUTE372->setToNode("vc3_RotationInterpolator");
group->addChildren(*ROUTE372);

CROUTE* ROUTE373 = new CROUTE();
ROUTE373->setFromField("fraction_changed");
ROUTE373->setFromNode("KickTimer");
ROUTE373->setToField("set_fraction");
ROUTE373->setToNode("vc2_RotationInterpolator");
group->addChildren(*ROUTE373);

CROUTE* ROUTE374 = new CROUTE();
ROUTE374->setFromField("fraction_changed");
ROUTE374->setFromNode("KickTimer");
ROUTE374->setToField("set_fraction");
ROUTE374->setToNode("vc1_RotationInterpolator");
group->addChildren(*ROUTE374);

CROUTE* ROUTE375 = new CROUTE();
ROUTE375->setFromField("fraction_changed");
ROUTE375->setFromNode("KickTimer");
ROUTE375->setToField("set_fraction");
ROUTE375->setToNode("skullbase_RotationInterpolator");
group->addChildren(*ROUTE375);

CROUTE* ROUTE376 = new CROUTE();
ROUTE376->setFromField("fraction_changed");
ROUTE376->setFromNode("KickTimer");
ROUTE376->setToField("set_fraction");
ROUTE376->setToNode("l_eyelid_joint_RotationInterpolator");
group->addChildren(*ROUTE376);

CROUTE* ROUTE377 = new CROUTE();
ROUTE377->setFromField("fraction_changed");
ROUTE377->setFromNode("KickTimer");
ROUTE377->setToField("set_fraction");
ROUTE377->setToNode("l_eyeball_joint_RotationInterpolator");
group->addChildren(*ROUTE377);

CROUTE* ROUTE378 = new CROUTE();
ROUTE378->setFromField("fraction_changed");
ROUTE378->setFromNode("KickTimer");
ROUTE378->setToField("set_fraction");
ROUTE378->setToNode("l_eyebrow_joint_RotationInterpolator");
group->addChildren(*ROUTE378);

CROUTE* ROUTE379 = new CROUTE();
ROUTE379->setFromField("fraction_changed");
ROUTE379->setFromNode("KickTimer");
ROUTE379->setToField("set_fraction");
ROUTE379->setToNode("r_eyelid_joint_RotationInterpolator");
group->addChildren(*ROUTE379);

CROUTE* ROUTE380 = new CROUTE();
ROUTE380->setFromField("fraction_changed");
ROUTE380->setFromNode("KickTimer");
ROUTE380->setToField("set_fraction");
ROUTE380->setToNode("r_eyeball_joint_RotationInterpolator");
group->addChildren(*ROUTE380);

CROUTE* ROUTE381 = new CROUTE();
ROUTE381->setFromField("fraction_changed");
ROUTE381->setFromNode("KickTimer");
ROUTE381->setToField("set_fraction");
ROUTE381->setToNode("r_eyebrow_joint_RotationInterpolator");
group->addChildren(*ROUTE381);

CROUTE* ROUTE382 = new CROUTE();
ROUTE382->setFromField("fraction_changed");
ROUTE382->setFromNode("KickTimer");
ROUTE382->setToField("set_fraction");
ROUTE382->setToNode("temporomandibular_RotationInterpolator");
group->addChildren(*ROUTE382);

CROUTE* ROUTE383 = new CROUTE();
ROUTE383->setFromField("fraction_changed");
ROUTE383->setFromNode("KickTimer");
ROUTE383->setToField("set_fraction");
ROUTE383->setToNode("l_sternoclavicular_RotationInterpolator");
group->addChildren(*ROUTE383);

CROUTE* ROUTE384 = new CROUTE();
ROUTE384->setFromField("fraction_changed");
ROUTE384->setFromNode("KickTimer");
ROUTE384->setToField("set_fraction");
ROUTE384->setToNode("l_acromioclavicular_RotationInterpolator");
group->addChildren(*ROUTE384);

CROUTE* ROUTE385 = new CROUTE();
ROUTE385->setFromField("fraction_changed");
ROUTE385->setFromNode("KickTimer");
ROUTE385->setToField("set_fraction");
ROUTE385->setToNode("l_shoulder_RotationInterpolator");
group->addChildren(*ROUTE385);

CROUTE* ROUTE386 = new CROUTE();
ROUTE386->setFromField("fraction_changed");
ROUTE386->setFromNode("KickTimer");
ROUTE386->setToField("set_fraction");
ROUTE386->setToNode("l_elbow_RotationInterpolator");
group->addChildren(*ROUTE386);

CROUTE* ROUTE387 = new CROUTE();
ROUTE387->setFromField("fraction_changed");
ROUTE387->setFromNode("KickTimer");
ROUTE387->setToField("set_fraction");
ROUTE387->setToNode("l_wrist_RotationInterpolator");
group->addChildren(*ROUTE387);

CROUTE* ROUTE388 = new CROUTE();
ROUTE388->setFromField("fraction_changed");
ROUTE388->setFromNode("KickTimer");
ROUTE388->setToField("set_fraction");
ROUTE388->setToNode("l_thumb1_RotationInterpolator");
group->addChildren(*ROUTE388);

CROUTE* ROUTE389 = new CROUTE();
ROUTE389->setFromField("fraction_changed");
ROUTE389->setFromNode("KickTimer");
ROUTE389->setToField("set_fraction");
ROUTE389->setToNode("l_thumb2_RotationInterpolator");
group->addChildren(*ROUTE389);

CROUTE* ROUTE390 = new CROUTE();
ROUTE390->setFromField("fraction_changed");
ROUTE390->setFromNode("KickTimer");
ROUTE390->setToField("set_fraction");
ROUTE390->setToNode("l_thumb3_RotationInterpolator");
group->addChildren(*ROUTE390);

CROUTE* ROUTE391 = new CROUTE();
ROUTE391->setFromField("fraction_changed");
ROUTE391->setFromNode("KickTimer");
ROUTE391->setToField("set_fraction");
ROUTE391->setToNode("l_index0_RotationInterpolator");
group->addChildren(*ROUTE391);

CROUTE* ROUTE392 = new CROUTE();
ROUTE392->setFromField("fraction_changed");
ROUTE392->setFromNode("KickTimer");
ROUTE392->setToField("set_fraction");
ROUTE392->setToNode("l_index1_RotationInterpolator");
group->addChildren(*ROUTE392);

CROUTE* ROUTE393 = new CROUTE();
ROUTE393->setFromField("fraction_changed");
ROUTE393->setFromNode("KickTimer");
ROUTE393->setToField("set_fraction");
ROUTE393->setToNode("l_index2_RotationInterpolator");
group->addChildren(*ROUTE393);

CROUTE* ROUTE394 = new CROUTE();
ROUTE394->setFromField("fraction_changed");
ROUTE394->setFromNode("KickTimer");
ROUTE394->setToField("set_fraction");
ROUTE394->setToNode("l_index3_RotationInterpolator");
group->addChildren(*ROUTE394);

CROUTE* ROUTE395 = new CROUTE();
ROUTE395->setFromField("fraction_changed");
ROUTE395->setFromNode("KickTimer");
ROUTE395->setToField("set_fraction");
ROUTE395->setToNode("l_middle0_RotationInterpolator");
group->addChildren(*ROUTE395);

CROUTE* ROUTE396 = new CROUTE();
ROUTE396->setFromField("fraction_changed");
ROUTE396->setFromNode("KickTimer");
ROUTE396->setToField("set_fraction");
ROUTE396->setToNode("l_middle1_RotationInterpolator");
group->addChildren(*ROUTE396);

CROUTE* ROUTE397 = new CROUTE();
ROUTE397->setFromField("fraction_changed");
ROUTE397->setFromNode("KickTimer");
ROUTE397->setToField("set_fraction");
ROUTE397->setToNode("l_middle2_RotationInterpolator");
group->addChildren(*ROUTE397);

CROUTE* ROUTE398 = new CROUTE();
ROUTE398->setFromField("fraction_changed");
ROUTE398->setFromNode("KickTimer");
ROUTE398->setToField("set_fraction");
ROUTE398->setToNode("l_middle3_RotationInterpolator");
group->addChildren(*ROUTE398);

CROUTE* ROUTE399 = new CROUTE();
ROUTE399->setFromField("fraction_changed");
ROUTE399->setFromNode("KickTimer");
ROUTE399->setToField("set_fraction");
ROUTE399->setToNode("l_ring0_RotationInterpolator");
group->addChildren(*ROUTE399);

CROUTE* ROUTE400 = new CROUTE();
ROUTE400->setFromField("fraction_changed");
ROUTE400->setFromNode("KickTimer");
ROUTE400->setToField("set_fraction");
ROUTE400->setToNode("l_ring1_RotationInterpolator");
group->addChildren(*ROUTE400);

CROUTE* ROUTE401 = new CROUTE();
ROUTE401->setFromField("fraction_changed");
ROUTE401->setFromNode("KickTimer");
ROUTE401->setToField("set_fraction");
ROUTE401->setToNode("l_ring2_RotationInterpolator");
group->addChildren(*ROUTE401);

CROUTE* ROUTE402 = new CROUTE();
ROUTE402->setFromField("fraction_changed");
ROUTE402->setFromNode("KickTimer");
ROUTE402->setToField("set_fraction");
ROUTE402->setToNode("l_ring3_RotationInterpolator");
group->addChildren(*ROUTE402);

CROUTE* ROUTE403 = new CROUTE();
ROUTE403->setFromField("fraction_changed");
ROUTE403->setFromNode("KickTimer");
ROUTE403->setToField("set_fraction");
ROUTE403->setToNode("l_pinky0_RotationInterpolator");
group->addChildren(*ROUTE403);

CROUTE* ROUTE404 = new CROUTE();
ROUTE404->setFromField("fraction_changed");
ROUTE404->setFromNode("KickTimer");
ROUTE404->setToField("set_fraction");
ROUTE404->setToNode("l_pinky1_RotationInterpolator");
group->addChildren(*ROUTE404);

CROUTE* ROUTE405 = new CROUTE();
ROUTE405->setFromField("fraction_changed");
ROUTE405->setFromNode("KickTimer");
ROUTE405->setToField("set_fraction");
ROUTE405->setToNode("l_pinky2_RotationInterpolator");
group->addChildren(*ROUTE405);

CROUTE* ROUTE406 = new CROUTE();
ROUTE406->setFromField("fraction_changed");
ROUTE406->setFromNode("KickTimer");
ROUTE406->setToField("set_fraction");
ROUTE406->setToNode("l_pinky3_RotationInterpolator");
group->addChildren(*ROUTE406);

CROUTE* ROUTE407 = new CROUTE();
ROUTE407->setFromField("fraction_changed");
ROUTE407->setFromNode("KickTimer");
ROUTE407->setToField("set_fraction");
ROUTE407->setToNode("r_sternoclavicular_RotationInterpolator");
group->addChildren(*ROUTE407);

CROUTE* ROUTE408 = new CROUTE();
ROUTE408->setFromField("fraction_changed");
ROUTE408->setFromNode("KickTimer");
ROUTE408->setToField("set_fraction");
ROUTE408->setToNode("r_acromioclavicular_RotationInterpolator");
group->addChildren(*ROUTE408);

CROUTE* ROUTE409 = new CROUTE();
ROUTE409->setFromField("fraction_changed");
ROUTE409->setFromNode("KickTimer");
ROUTE409->setToField("set_fraction");
ROUTE409->setToNode("r_shoulder_RotationInterpolator");
group->addChildren(*ROUTE409);

CROUTE* ROUTE410 = new CROUTE();
ROUTE410->setFromField("fraction_changed");
ROUTE410->setFromNode("KickTimer");
ROUTE410->setToField("set_fraction");
ROUTE410->setToNode("r_elbow_RotationInterpolator");
group->addChildren(*ROUTE410);

CROUTE* ROUTE411 = new CROUTE();
ROUTE411->setFromField("fraction_changed");
ROUTE411->setFromNode("KickTimer");
ROUTE411->setToField("set_fraction");
ROUTE411->setToNode("r_wrist_RotationInterpolator");
group->addChildren(*ROUTE411);

CROUTE* ROUTE412 = new CROUTE();
ROUTE412->setFromField("fraction_changed");
ROUTE412->setFromNode("KickTimer");
ROUTE412->setToField("set_fraction");
ROUTE412->setToNode("r_thumb1_RotationInterpolator");
group->addChildren(*ROUTE412);

CROUTE* ROUTE413 = new CROUTE();
ROUTE413->setFromField("fraction_changed");
ROUTE413->setFromNode("KickTimer");
ROUTE413->setToField("set_fraction");
ROUTE413->setToNode("r_thumb2_RotationInterpolator");
group->addChildren(*ROUTE413);

CROUTE* ROUTE414 = new CROUTE();
ROUTE414->setFromField("fraction_changed");
ROUTE414->setFromNode("KickTimer");
ROUTE414->setToField("set_fraction");
ROUTE414->setToNode("r_thumb3_RotationInterpolator");
group->addChildren(*ROUTE414);

CROUTE* ROUTE415 = new CROUTE();
ROUTE415->setFromField("fraction_changed");
ROUTE415->setFromNode("KickTimer");
ROUTE415->setToField("set_fraction");
ROUTE415->setToNode("r_index0_RotationInterpolator");
group->addChildren(*ROUTE415);

CROUTE* ROUTE416 = new CROUTE();
ROUTE416->setFromField("fraction_changed");
ROUTE416->setFromNode("KickTimer");
ROUTE416->setToField("set_fraction");
ROUTE416->setToNode("r_index1_RotationInterpolator");
group->addChildren(*ROUTE416);

CROUTE* ROUTE417 = new CROUTE();
ROUTE417->setFromField("fraction_changed");
ROUTE417->setFromNode("KickTimer");
ROUTE417->setToField("set_fraction");
ROUTE417->setToNode("r_index2_RotationInterpolator");
group->addChildren(*ROUTE417);

CROUTE* ROUTE418 = new CROUTE();
ROUTE418->setFromField("fraction_changed");
ROUTE418->setFromNode("KickTimer");
ROUTE418->setToField("set_fraction");
ROUTE418->setToNode("r_index3_RotationInterpolator");
group->addChildren(*ROUTE418);

CROUTE* ROUTE419 = new CROUTE();
ROUTE419->setFromField("fraction_changed");
ROUTE419->setFromNode("KickTimer");
ROUTE419->setToField("set_fraction");
ROUTE419->setToNode("r_middle0_RotationInterpolator");
group->addChildren(*ROUTE419);

CROUTE* ROUTE420 = new CROUTE();
ROUTE420->setFromField("fraction_changed");
ROUTE420->setFromNode("KickTimer");
ROUTE420->setToField("set_fraction");
ROUTE420->setToNode("r_middle1_RotationInterpolator");
group->addChildren(*ROUTE420);

CROUTE* ROUTE421 = new CROUTE();
ROUTE421->setFromField("fraction_changed");
ROUTE421->setFromNode("KickTimer");
ROUTE421->setToField("set_fraction");
ROUTE421->setToNode("r_middle2_RotationInterpolator");
group->addChildren(*ROUTE421);

CROUTE* ROUTE422 = new CROUTE();
ROUTE422->setFromField("fraction_changed");
ROUTE422->setFromNode("KickTimer");
ROUTE422->setToField("set_fraction");
ROUTE422->setToNode("r_middle3_RotationInterpolator");
group->addChildren(*ROUTE422);

CROUTE* ROUTE423 = new CROUTE();
ROUTE423->setFromField("fraction_changed");
ROUTE423->setFromNode("KickTimer");
ROUTE423->setToField("set_fraction");
ROUTE423->setToNode("r_ring0_RotationInterpolator");
group->addChildren(*ROUTE423);

CROUTE* ROUTE424 = new CROUTE();
ROUTE424->setFromField("fraction_changed");
ROUTE424->setFromNode("KickTimer");
ROUTE424->setToField("set_fraction");
ROUTE424->setToNode("r_ring1_RotationInterpolator");
group->addChildren(*ROUTE424);

CROUTE* ROUTE425 = new CROUTE();
ROUTE425->setFromField("fraction_changed");
ROUTE425->setFromNode("KickTimer");
ROUTE425->setToField("set_fraction");
ROUTE425->setToNode("r_ring2_RotationInterpolator");
group->addChildren(*ROUTE425);

CROUTE* ROUTE426 = new CROUTE();
ROUTE426->setFromField("fraction_changed");
ROUTE426->setFromNode("KickTimer");
ROUTE426->setToField("set_fraction");
ROUTE426->setToNode("r_ring3_RotationInterpolator");
group->addChildren(*ROUTE426);

CROUTE* ROUTE427 = new CROUTE();
ROUTE427->setFromField("fraction_changed");
ROUTE427->setFromNode("KickTimer");
ROUTE427->setToField("set_fraction");
ROUTE427->setToNode("r_pinky0_RotationInterpolator");
group->addChildren(*ROUTE427);

CROUTE* ROUTE428 = new CROUTE();
ROUTE428->setFromField("fraction_changed");
ROUTE428->setFromNode("KickTimer");
ROUTE428->setToField("set_fraction");
ROUTE428->setToNode("r_pinky1_RotationInterpolator");
group->addChildren(*ROUTE428);

CROUTE* ROUTE429 = new CROUTE();
ROUTE429->setFromField("fraction_changed");
ROUTE429->setFromNode("KickTimer");
ROUTE429->setToField("set_fraction");
ROUTE429->setToNode("r_pinky2_RotationInterpolator");
group->addChildren(*ROUTE429);

CROUTE* ROUTE430 = new CROUTE();
ROUTE430->setFromField("fraction_changed");
ROUTE430->setFromNode("KickTimer");
ROUTE430->setToField("set_fraction");
ROUTE430->setToNode("r_pinky3_RotationInterpolator");
group->addChildren(*ROUTE430);

//Routes from Interpolators to Joe_ model Joints
CROUTE* ROUTE431 = new CROUTE();
ROUTE431->setFromField("value_changed");
ROUTE431->setFromNode("HumanoidRoot_RotationInterpolator");
ROUTE431->setToField("set_rotation");
ROUTE431->setToNode("Joe_humanoid_root");
group->addChildren(*ROUTE431);

CROUTE* ROUTE432 = new CROUTE();
ROUTE432->setFromField("value_changed");
ROUTE432->setFromNode("HumanoidRoot_TranslationInterpolator");
ROUTE432->setToField("set_translation");
ROUTE432->setToNode("Joe_humanoid_root");
group->addChildren(*ROUTE432);

CROUTE* ROUTE433 = new CROUTE();
ROUTE433->setFromField("value_changed");
ROUTE433->setFromNode("sacroiliac_RotationInterpolator");
ROUTE433->setToField("set_rotation");
ROUTE433->setToNode("Joe_sacroiliac");
group->addChildren(*ROUTE433);

CROUTE* ROUTE434 = new CROUTE();
ROUTE434->setFromField("value_changed");
ROUTE434->setFromNode("l_hip_RotationInterpolator");
ROUTE434->setToField("set_rotation");
ROUTE434->setToNode("Joe_l_hip");
group->addChildren(*ROUTE434);

CROUTE* ROUTE435 = new CROUTE();
ROUTE435->setFromField("value_changed");
ROUTE435->setFromNode("l_knee_RotationInterpolator");
ROUTE435->setToField("set_rotation");
ROUTE435->setToNode("Joe_l_knee");
group->addChildren(*ROUTE435);

CROUTE* ROUTE436 = new CROUTE();
ROUTE436->setFromField("value_changed");
ROUTE436->setFromNode("l_ankle_RotationInterpolator");
ROUTE436->setToField("set_rotation");
ROUTE436->setToNode("Joe_l_talocrural");
group->addChildren(*ROUTE436);

CROUTE* ROUTE437 = new CROUTE();
ROUTE437->setFromField("value_changed");
ROUTE437->setFromNode("l_subtalar_RotationInterpolator");
ROUTE437->setToField("set_rotation");
ROUTE437->setToNode("Joe_l_tarsometatarsal_2");
group->addChildren(*ROUTE437);

CROUTE* ROUTE438 = new CROUTE();
ROUTE438->setFromField("value_changed");
ROUTE438->setFromNode("l_midtarsal_RotationInterpolator");
ROUTE438->setToField("set_rotation");
ROUTE438->setToNode("Joe_l_metatarsophalangeal_2");
group->addChildren(*ROUTE438);

CROUTE* ROUTE439 = new CROUTE();
ROUTE439->setFromField("value_changed");
ROUTE439->setFromNode("l_metatarsal_RotationInterpolator");
ROUTE439->setToField("set_rotation");
ROUTE439->setToNode("Joe_l_tarsal_distal_interphalangeal_2");
group->addChildren(*ROUTE439);

CROUTE* ROUTE440 = new CROUTE();
ROUTE440->setFromField("value_changed");
ROUTE440->setFromNode("r_hip_RotationInterpolator");
ROUTE440->setToField("set_rotation");
ROUTE440->setToNode("Joe_r_hip");
group->addChildren(*ROUTE440);

CROUTE* ROUTE441 = new CROUTE();
ROUTE441->setFromField("value_changed");
ROUTE441->setFromNode("r_knee_RotationInterpolator");
ROUTE441->setToField("set_rotation");
ROUTE441->setToNode("Joe_r_knee");
group->addChildren(*ROUTE441);

CROUTE* ROUTE442 = new CROUTE();
ROUTE442->setFromField("value_changed");
ROUTE442->setFromNode("r_ankle_RotationInterpolator");
ROUTE442->setToField("set_rotation");
ROUTE442->setToNode("Joe_r_talocrural");
group->addChildren(*ROUTE442);

CROUTE* ROUTE443 = new CROUTE();
ROUTE443->setFromField("value_changed");
ROUTE443->setFromNode("r_subtalar_RotationInterpolator");
ROUTE443->setToField("set_rotation");
ROUTE443->setToNode("Joe_r_tarsometatarsal_2");
group->addChildren(*ROUTE443);

CROUTE* ROUTE444 = new CROUTE();
ROUTE444->setFromField("value_changed");
ROUTE444->setFromNode("r_midtarsal_RotationInterpolator");
ROUTE444->setToField("set_rotation");
ROUTE444->setToNode("Joe_r_metatarsophalangeal_2");
group->addChildren(*ROUTE444);

CROUTE* ROUTE445 = new CROUTE();
ROUTE445->setFromField("value_changed");
ROUTE445->setFromNode("r_metatarsal_RotationInterpolator");
ROUTE445->setToField("set_rotation");
ROUTE445->setToNode("Joe_r_tarsal_distal_interphalangeal_2");
group->addChildren(*ROUTE445);

CROUTE* ROUTE446 = new CROUTE();
ROUTE446->setFromField("value_changed");
ROUTE446->setFromNode("vl5_RotationInterpolator");
ROUTE446->setToField("set_rotation");
ROUTE446->setToNode("Joe_vl5");
group->addChildren(*ROUTE446);

CROUTE* ROUTE447 = new CROUTE();
ROUTE447->setFromField("value_changed");
ROUTE447->setFromNode("vl4_RotationInterpolator");
ROUTE447->setToField("set_rotation");
ROUTE447->setToNode("Joe_vl4");
group->addChildren(*ROUTE447);

CROUTE* ROUTE448 = new CROUTE();
ROUTE448->setFromField("value_changed");
ROUTE448->setFromNode("vl3_RotationInterpolator");
ROUTE448->setToField("set_rotation");
ROUTE448->setToNode("Joe_vl3");
group->addChildren(*ROUTE448);

CROUTE* ROUTE449 = new CROUTE();
ROUTE449->setFromField("value_changed");
ROUTE449->setFromNode("vl2_RotationInterpolator");
ROUTE449->setToField("set_rotation");
ROUTE449->setToNode("Joe_vl2");
group->addChildren(*ROUTE449);

CROUTE* ROUTE450 = new CROUTE();
ROUTE450->setFromField("value_changed");
ROUTE450->setFromNode("vl1_RotationInterpolator");
ROUTE450->setToField("set_rotation");
ROUTE450->setToNode("Joe_vl1");
group->addChildren(*ROUTE450);

CROUTE* ROUTE451 = new CROUTE();
ROUTE451->setFromField("value_changed");
ROUTE451->setFromNode("vt12_RotationInterpolator");
ROUTE451->setToField("set_rotation");
ROUTE451->setToNode("Joe_vt12");
group->addChildren(*ROUTE451);

CROUTE* ROUTE452 = new CROUTE();
ROUTE452->setFromField("value_changed");
ROUTE452->setFromNode("vt11_RotationInterpolator");
ROUTE452->setToField("set_rotation");
ROUTE452->setToNode("Joe_vt11");
group->addChildren(*ROUTE452);

CROUTE* ROUTE453 = new CROUTE();
ROUTE453->setFromField("value_changed");
ROUTE453->setFromNode("vt10_RotationInterpolator");
ROUTE453->setToField("set_rotation");
ROUTE453->setToNode("Joe_vt10");
group->addChildren(*ROUTE453);

CROUTE* ROUTE454 = new CROUTE();
ROUTE454->setFromField("value_changed");
ROUTE454->setFromNode("vt9_RotationInterpolator");
ROUTE454->setToField("set_rotation");
ROUTE454->setToNode("Joe_vt9");
group->addChildren(*ROUTE454);

CROUTE* ROUTE455 = new CROUTE();
ROUTE455->setFromField("value_changed");
ROUTE455->setFromNode("vt8_RotationInterpolator");
ROUTE455->setToField("set_rotation");
ROUTE455->setToNode("Joe_vt8");
group->addChildren(*ROUTE455);

CROUTE* ROUTE456 = new CROUTE();
ROUTE456->setFromField("value_changed");
ROUTE456->setFromNode("vt7_RotationInterpolator");
ROUTE456->setToField("set_rotation");
ROUTE456->setToNode("Joe_vt7");
group->addChildren(*ROUTE456);

CROUTE* ROUTE457 = new CROUTE();
ROUTE457->setFromField("value_changed");
ROUTE457->setFromNode("vt6_RotationInterpolator");
ROUTE457->setToField("set_rotation");
ROUTE457->setToNode("Joe_vt6");
group->addChildren(*ROUTE457);

CROUTE* ROUTE458 = new CROUTE();
ROUTE458->setFromField("value_changed");
ROUTE458->setFromNode("vt5_RotationInterpolator");
ROUTE458->setToField("set_rotation");
ROUTE458->setToNode("Joe_vt5");
group->addChildren(*ROUTE458);

CROUTE* ROUTE459 = new CROUTE();
ROUTE459->setFromField("value_changed");
ROUTE459->setFromNode("vt4_RotationInterpolator");
ROUTE459->setToField("set_rotation");
ROUTE459->setToNode("Joe_vt4");
group->addChildren(*ROUTE459);

CROUTE* ROUTE460 = new CROUTE();
ROUTE460->setFromField("value_changed");
ROUTE460->setFromNode("vt3_RotationInterpolator");
ROUTE460->setToField("set_rotation");
ROUTE460->setToNode("Joe_vt3");
group->addChildren(*ROUTE460);

CROUTE* ROUTE461 = new CROUTE();
ROUTE461->setFromField("value_changed");
ROUTE461->setFromNode("vt2_RotationInterpolator");
ROUTE461->setToField("set_rotation");
ROUTE461->setToNode("Joe_vt2");
group->addChildren(*ROUTE461);

CROUTE* ROUTE462 = new CROUTE();
ROUTE462->setFromField("value_changed");
ROUTE462->setFromNode("vt1_RotationInterpolator");
ROUTE462->setToField("set_rotation");
ROUTE462->setToNode("Joe_vt1");
group->addChildren(*ROUTE462);

CROUTE* ROUTE463 = new CROUTE();
ROUTE463->setFromField("value_changed");
ROUTE463->setFromNode("vc7_RotationInterpolator");
ROUTE463->setToField("set_rotation");
ROUTE463->setToNode("Joe_vc7");
group->addChildren(*ROUTE463);

CROUTE* ROUTE464 = new CROUTE();
ROUTE464->setFromField("value_changed");
ROUTE464->setFromNode("vc6_RotationInterpolator");
ROUTE464->setToField("set_rotation");
ROUTE464->setToNode("Joe_vc6");
group->addChildren(*ROUTE464);

CROUTE* ROUTE465 = new CROUTE();
ROUTE465->setFromField("value_changed");
ROUTE465->setFromNode("vc5_RotationInterpolator");
ROUTE465->setToField("set_rotation");
ROUTE465->setToNode("Joe_vc5");
group->addChildren(*ROUTE465);

CROUTE* ROUTE466 = new CROUTE();
ROUTE466->setFromField("value_changed");
ROUTE466->setFromNode("vc4_RotationInterpolator");
ROUTE466->setToField("set_rotation");
ROUTE466->setToNode("Joe_vc4");
group->addChildren(*ROUTE466);

CROUTE* ROUTE467 = new CROUTE();
ROUTE467->setFromField("value_changed");
ROUTE467->setFromNode("vc3_RotationInterpolator");
ROUTE467->setToField("set_rotation");
ROUTE467->setToNode("Joe_vc3");
group->addChildren(*ROUTE467);

CROUTE* ROUTE468 = new CROUTE();
ROUTE468->setFromField("value_changed");
ROUTE468->setFromNode("vc2_RotationInterpolator");
ROUTE468->setToField("set_rotation");
ROUTE468->setToNode("Joe_vc2");
group->addChildren(*ROUTE468);

CROUTE* ROUTE469 = new CROUTE();
ROUTE469->setFromField("value_changed");
ROUTE469->setFromNode("vc1_RotationInterpolator");
ROUTE469->setToField("set_rotation");
ROUTE469->setToNode("Joe_vc1");
group->addChildren(*ROUTE469);

CROUTE* ROUTE470 = new CROUTE();
ROUTE470->setFromField("value_changed");
ROUTE470->setFromNode("skullbase_RotationInterpolator");
ROUTE470->setToField("set_rotation");
ROUTE470->setToNode("Joe_skullbase");
group->addChildren(*ROUTE470);

CROUTE* ROUTE471 = new CROUTE();
ROUTE471->setFromField("value_changed");
ROUTE471->setFromNode("l_eyelid_joint_RotationInterpolator");
ROUTE471->setToField("set_rotation");
ROUTE471->setToNode("Joe_l_eyelid_joint");
group->addChildren(*ROUTE471);

CROUTE* ROUTE472 = new CROUTE();
ROUTE472->setFromField("value_changed");
ROUTE472->setFromNode("l_eyeball_joint_RotationInterpolator");
ROUTE472->setToField("set_rotation");
ROUTE472->setToNode("Joe_l_eyeball_joint");
group->addChildren(*ROUTE472);

CROUTE* ROUTE473 = new CROUTE();
ROUTE473->setFromField("value_changed");
ROUTE473->setFromNode("l_eyebrow_joint_RotationInterpolator");
ROUTE473->setToField("set_rotation");
ROUTE473->setToNode("Joe_l_eyebrow_joint");
group->addChildren(*ROUTE473);

CROUTE* ROUTE474 = new CROUTE();
ROUTE474->setFromField("value_changed");
ROUTE474->setFromNode("r_eyelid_joint_RotationInterpolator");
ROUTE474->setToField("set_rotation");
ROUTE474->setToNode("Joe_r_eyelid_joint");
group->addChildren(*ROUTE474);

CROUTE* ROUTE475 = new CROUTE();
ROUTE475->setFromField("value_changed");
ROUTE475->setFromNode("r_eyeball_joint_RotationInterpolator");
ROUTE475->setToField("set_rotation");
ROUTE475->setToNode("Joe_r_eyeball_joint");
group->addChildren(*ROUTE475);

CROUTE* ROUTE476 = new CROUTE();
ROUTE476->setFromField("value_changed");
ROUTE476->setFromNode("r_eyebrow_joint_RotationInterpolator");
ROUTE476->setToField("set_rotation");
ROUTE476->setToNode("Joe_r_eyebrow_joint");
group->addChildren(*ROUTE476);

CROUTE* ROUTE477 = new CROUTE();
ROUTE477->setFromField("value_changed");
ROUTE477->setFromNode("temporomandibular_RotationInterpolator");
ROUTE477->setToField("set_rotation");
ROUTE477->setToNode("Joe_temporomandibular");
group->addChildren(*ROUTE477);

CROUTE* ROUTE478 = new CROUTE();
ROUTE478->setFromField("value_changed");
ROUTE478->setFromNode("l_sternoclavicular_RotationInterpolator");
ROUTE478->setToField("set_rotation");
ROUTE478->setToNode("Joe_l_sternoclavicular");
group->addChildren(*ROUTE478);

CROUTE* ROUTE479 = new CROUTE();
ROUTE479->setFromField("value_changed");
ROUTE479->setFromNode("l_acromioclavicular_RotationInterpolator");
ROUTE479->setToField("set_rotation");
ROUTE479->setToNode("Joe_l_acromioclavicular");
group->addChildren(*ROUTE479);

CROUTE* ROUTE480 = new CROUTE();
ROUTE480->setFromField("value_changed");
ROUTE480->setFromNode("l_shoulder_RotationInterpolator");
ROUTE480->setToField("set_rotation");
ROUTE480->setToNode("Joe_l_shoulder");
group->addChildren(*ROUTE480);

CROUTE* ROUTE481 = new CROUTE();
ROUTE481->setFromField("value_changed");
ROUTE481->setFromNode("l_elbow_RotationInterpolator");
ROUTE481->setToField("set_rotation");
ROUTE481->setToNode("Joe_l_elbow");
group->addChildren(*ROUTE481);

CROUTE* ROUTE482 = new CROUTE();
ROUTE482->setFromField("value_changed");
ROUTE482->setFromNode("l_wrist_RotationInterpolator");
ROUTE482->setToField("set_rotation");
ROUTE482->setToNode("Joe_l_radiocarpal");
group->addChildren(*ROUTE482);

CROUTE* ROUTE483 = new CROUTE();
ROUTE483->setFromField("value_changed");
ROUTE483->setFromNode("l_thumb1_RotationInterpolator");
ROUTE483->setToField("set_rotation");
ROUTE483->setToNode("Joe_l_carpometacarpal_1");
group->addChildren(*ROUTE483);

CROUTE* ROUTE484 = new CROUTE();
ROUTE484->setFromField("value_changed");
ROUTE484->setFromNode("l_thumb2_RotationInterpolator");
ROUTE484->setToField("set_rotation");
ROUTE484->setToNode("Joe_l_metacarpophalangeal_1");
group->addChildren(*ROUTE484);

CROUTE* ROUTE485 = new CROUTE();
ROUTE485->setFromField("value_changed");
ROUTE485->setFromNode("l_thumb3_RotationInterpolator");
ROUTE485->setToField("set_rotation");
ROUTE485->setToNode("Joe_l_carpal_interphalangeal_1");
group->addChildren(*ROUTE485);

CROUTE* ROUTE486 = new CROUTE();
ROUTE486->setFromField("value_changed");
ROUTE486->setFromNode("l_index0_RotationInterpolator");
ROUTE486->setToField("set_rotation");
ROUTE486->setToNode("Joe_l_carpometacarpal_2");
group->addChildren(*ROUTE486);

CROUTE* ROUTE487 = new CROUTE();
ROUTE487->setFromField("value_changed");
ROUTE487->setFromNode("l_index1_RotationInterpolator");
ROUTE487->setToField("set_rotation");
ROUTE487->setToNode("Joe_l_metacarpophalangeal_2");
group->addChildren(*ROUTE487);

CROUTE* ROUTE488 = new CROUTE();
ROUTE488->setFromField("value_changed");
ROUTE488->setFromNode("l_index2_RotationInterpolator");
ROUTE488->setToField("set_rotation");
ROUTE488->setToNode("Joe_l_carpal_proximal_interphalangeal_2");
group->addChildren(*ROUTE488);

CROUTE* ROUTE489 = new CROUTE();
ROUTE489->setFromField("value_changed");
ROUTE489->setFromNode("l_index3_RotationInterpolator");
ROUTE489->setToField("set_rotation");
ROUTE489->setToNode("Joe_l_carpal_distal_interphalangeal_2");
group->addChildren(*ROUTE489);

CROUTE* ROUTE490 = new CROUTE();
ROUTE490->setFromField("value_changed");
ROUTE490->setFromNode("l_middle0_RotationInterpolator");
ROUTE490->setToField("set_rotation");
ROUTE490->setToNode("Joe_l_carpometacarpal_3");
group->addChildren(*ROUTE490);

CROUTE* ROUTE491 = new CROUTE();
ROUTE491->setFromField("value_changed");
ROUTE491->setFromNode("l_middle1_RotationInterpolator");
ROUTE491->setToField("set_rotation");
ROUTE491->setToNode("Joe_l_metacarpophalangeal_3");
group->addChildren(*ROUTE491);

CROUTE* ROUTE492 = new CROUTE();
ROUTE492->setFromField("value_changed");
ROUTE492->setFromNode("l_middle2_RotationInterpolator");
ROUTE492->setToField("set_rotation");
ROUTE492->setToNode("Joe_l_carpal_proximal_interphalangeal_3");
group->addChildren(*ROUTE492);

CROUTE* ROUTE493 = new CROUTE();
ROUTE493->setFromField("value_changed");
ROUTE493->setFromNode("l_middle3_RotationInterpolator");
ROUTE493->setToField("set_rotation");
ROUTE493->setToNode("Joe_l_carpal_distal_interphalangeal_3");
group->addChildren(*ROUTE493);

CROUTE* ROUTE494 = new CROUTE();
ROUTE494->setFromField("value_changed");
ROUTE494->setFromNode("l_ring0_RotationInterpolator");
ROUTE494->setToField("set_rotation");
ROUTE494->setToNode("Joe_l_carpometacarpal_4");
group->addChildren(*ROUTE494);

CROUTE* ROUTE495 = new CROUTE();
ROUTE495->setFromField("value_changed");
ROUTE495->setFromNode("l_ring1_RotationInterpolator");
ROUTE495->setToField("set_rotation");
ROUTE495->setToNode("Joe_l_metacarpophalangeal_4");
group->addChildren(*ROUTE495);

CROUTE* ROUTE496 = new CROUTE();
ROUTE496->setFromField("value_changed");
ROUTE496->setFromNode("l_ring2_RotationInterpolator");
ROUTE496->setToField("set_rotation");
ROUTE496->setToNode("Joe_l_carpal_proximal_interphalangeal_4");
group->addChildren(*ROUTE496);

CROUTE* ROUTE497 = new CROUTE();
ROUTE497->setFromField("value_changed");
ROUTE497->setFromNode("l_ring3_RotationInterpolator");
ROUTE497->setToField("set_rotation");
ROUTE497->setToNode("Joe_l_carpal_distal_interphalangeal_4");
group->addChildren(*ROUTE497);

CROUTE* ROUTE498 = new CROUTE();
ROUTE498->setFromField("value_changed");
ROUTE498->setFromNode("l_pinky0_RotationInterpolator");
ROUTE498->setToField("set_rotation");
ROUTE498->setToNode("Joe_l_carpometacarpal_5");
group->addChildren(*ROUTE498);

CROUTE* ROUTE499 = new CROUTE();
ROUTE499->setFromField("value_changed");
ROUTE499->setFromNode("l_pinky1_RotationInterpolator");
ROUTE499->setToField("set_rotation");
ROUTE499->setToNode("Joe_l_metacarpophalangeal_5");
group->addChildren(*ROUTE499);

CROUTE* ROUTE500 = new CROUTE();
ROUTE500->setFromField("value_changed");
ROUTE500->setFromNode("l_pinky2_RotationInterpolator");
ROUTE500->setToField("set_rotation");
ROUTE500->setToNode("Joe_l_carpal_proximal_interphalangeal_5");
group->addChildren(*ROUTE500);

CROUTE* ROUTE501 = new CROUTE();
ROUTE501->setFromField("value_changed");
ROUTE501->setFromNode("l_pinky3_RotationInterpolator");
ROUTE501->setToField("set_rotation");
ROUTE501->setToNode("Joe_l_carpal_distal_interphalangeal_5");
group->addChildren(*ROUTE501);

CROUTE* ROUTE502 = new CROUTE();
ROUTE502->setFromField("value_changed");
ROUTE502->setFromNode("r_sternoclavicular_RotationInterpolator");
ROUTE502->setToField("set_rotation");
ROUTE502->setToNode("Joe_r_sternoclavicular");
group->addChildren(*ROUTE502);

CROUTE* ROUTE503 = new CROUTE();
ROUTE503->setFromField("value_changed");
ROUTE503->setFromNode("r_acromioclavicular_RotationInterpolator");
ROUTE503->setToField("set_rotation");
ROUTE503->setToNode("Joe_r_acromioclavicular");
group->addChildren(*ROUTE503);

CROUTE* ROUTE504 = new CROUTE();
ROUTE504->setFromField("value_changed");
ROUTE504->setFromNode("r_shoulder_RotationInterpolator");
ROUTE504->setToField("set_rotation");
ROUTE504->setToNode("Joe_r_shoulder");
group->addChildren(*ROUTE504);

CROUTE* ROUTE505 = new CROUTE();
ROUTE505->setFromField("value_changed");
ROUTE505->setFromNode("r_elbow_RotationInterpolator");
ROUTE505->setToField("set_rotation");
ROUTE505->setToNode("Joe_r_elbow");
group->addChildren(*ROUTE505);

CROUTE* ROUTE506 = new CROUTE();
ROUTE506->setFromField("value_changed");
ROUTE506->setFromNode("r_wrist_RotationInterpolator");
ROUTE506->setToField("set_rotation");
ROUTE506->setToNode("Joe_r_radiocarpal");
group->addChildren(*ROUTE506);

CROUTE* ROUTE507 = new CROUTE();
ROUTE507->setFromField("value_changed");
ROUTE507->setFromNode("r_thumb1_RotationInterpolator");
ROUTE507->setToField("set_rotation");
ROUTE507->setToNode("Joe_r_carpometacarpal_1");
group->addChildren(*ROUTE507);

CROUTE* ROUTE508 = new CROUTE();
ROUTE508->setFromField("value_changed");
ROUTE508->setFromNode("r_thumb2_RotationInterpolator");
ROUTE508->setToField("set_rotation");
ROUTE508->setToNode("Joe_r_metacarpophalangeal_1");
group->addChildren(*ROUTE508);

CROUTE* ROUTE509 = new CROUTE();
ROUTE509->setFromField("value_changed");
ROUTE509->setFromNode("r_thumb3_RotationInterpolator");
ROUTE509->setToField("set_rotation");
ROUTE509->setToNode("Joe_r_carpal_interphalangeal_1");
group->addChildren(*ROUTE509);

CROUTE* ROUTE510 = new CROUTE();
ROUTE510->setFromField("value_changed");
ROUTE510->setFromNode("r_index0_RotationInterpolator");
ROUTE510->setToField("set_rotation");
ROUTE510->setToNode("Joe_r_carpometacarpal_2");
group->addChildren(*ROUTE510);

CROUTE* ROUTE511 = new CROUTE();
ROUTE511->setFromField("value_changed");
ROUTE511->setFromNode("r_index1_RotationInterpolator");
ROUTE511->setToField("set_rotation");
ROUTE511->setToNode("Joe_r_metacarpophalangeal_2");
group->addChildren(*ROUTE511);

CROUTE* ROUTE512 = new CROUTE();
ROUTE512->setFromField("value_changed");
ROUTE512->setFromNode("r_index2_RotationInterpolator");
ROUTE512->setToField("set_rotation");
ROUTE512->setToNode("Joe_r_carpal_proximal_interphalangeal_2");
group->addChildren(*ROUTE512);

CROUTE* ROUTE513 = new CROUTE();
ROUTE513->setFromField("value_changed");
ROUTE513->setFromNode("r_index3_RotationInterpolator");
ROUTE513->setToField("set_rotation");
ROUTE513->setToNode("Joe_r_carpal_distal_interphalangeal_2");
group->addChildren(*ROUTE513);

CROUTE* ROUTE514 = new CROUTE();
ROUTE514->setFromField("value_changed");
ROUTE514->setFromNode("r_middle0_RotationInterpolator");
ROUTE514->setToField("set_rotation");
ROUTE514->setToNode("Joe_r_carpometacarpal_3");
group->addChildren(*ROUTE514);

CROUTE* ROUTE515 = new CROUTE();
ROUTE515->setFromField("value_changed");
ROUTE515->setFromNode("r_middle1_RotationInterpolator");
ROUTE515->setToField("set_rotation");
ROUTE515->setToNode("Joe_r_metacarpophalangeal_3");
group->addChildren(*ROUTE515);

CROUTE* ROUTE516 = new CROUTE();
ROUTE516->setFromField("value_changed");
ROUTE516->setFromNode("r_middle2_RotationInterpolator");
ROUTE516->setToField("set_rotation");
ROUTE516->setToNode("Joe_r_carpal_proximal_interphalangeal_3");
group->addChildren(*ROUTE516);

CROUTE* ROUTE517 = new CROUTE();
ROUTE517->setFromField("value_changed");
ROUTE517->setFromNode("r_middle3_RotationInterpolator");
ROUTE517->setToField("set_rotation");
ROUTE517->setToNode("Joe_r_carpal_distal_interphalangeal_3");
group->addChildren(*ROUTE517);

CROUTE* ROUTE518 = new CROUTE();
ROUTE518->setFromField("value_changed");
ROUTE518->setFromNode("r_ring0_RotationInterpolator");
ROUTE518->setToField("set_rotation");
ROUTE518->setToNode("Joe_r_carpometacarpal_4");
group->addChildren(*ROUTE518);

CROUTE* ROUTE519 = new CROUTE();
ROUTE519->setFromField("value_changed");
ROUTE519->setFromNode("r_ring1_RotationInterpolator");
ROUTE519->setToField("set_rotation");
ROUTE519->setToNode("Joe_r_metacarpophalangeal_4");
group->addChildren(*ROUTE519);

CROUTE* ROUTE520 = new CROUTE();
ROUTE520->setFromField("value_changed");
ROUTE520->setFromNode("r_ring2_RotationInterpolator");
ROUTE520->setToField("set_rotation");
ROUTE520->setToNode("Joe_r_carpal_proximal_interphalangeal_4");
group->addChildren(*ROUTE520);

CROUTE* ROUTE521 = new CROUTE();
ROUTE521->setFromField("value_changed");
ROUTE521->setFromNode("r_ring3_RotationInterpolator");
ROUTE521->setToField("set_rotation");
ROUTE521->setToNode("Joe_r_carpal_distal_interphalangeal_4");
group->addChildren(*ROUTE521);

CROUTE* ROUTE522 = new CROUTE();
ROUTE522->setFromField("value_changed");
ROUTE522->setFromNode("r_pinky0_RotationInterpolator");
ROUTE522->setToField("set_rotation");
ROUTE522->setToNode("Joe_r_carpometacarpal_5");
group->addChildren(*ROUTE522);

CROUTE* ROUTE523 = new CROUTE();
ROUTE523->setFromField("value_changed");
ROUTE523->setFromNode("r_pinky1_RotationInterpolator");
ROUTE523->setToField("set_rotation");
ROUTE523->setToNode("Joe_r_metacarpophalangeal_5");
group->addChildren(*ROUTE523);

CROUTE* ROUTE524 = new CROUTE();
ROUTE524->setFromField("value_changed");
ROUTE524->setFromNode("r_pinky2_RotationInterpolator");
ROUTE524->setToField("set_rotation");
ROUTE524->setToNode("Joe_r_carpal_proximal_interphalangeal_5");
group->addChildren(*ROUTE524);

CROUTE* ROUTE525 = new CROUTE();
ROUTE525->setFromField("value_changed");
ROUTE525->setFromNode("r_pinky3_RotationInterpolator");
ROUTE525->setToField("set_rotation");
ROUTE525->setToNode("Joe_r_carpal_distal_interphalangeal_5");
group->addChildren(*ROUTE525);

CGroup* Group526 = (CGroup *)(m_pScene.createNode("Group"));
Group526->setDEF("DisplacersAnimationGroup");
CScalarInterpolator* ScalarInterpolator527 = (CScalarInterpolator *)(m_pScene.createNode("ScalarInterpolator"));
ScalarInterpolator527->setDEF("skull_tipInterpolator");
ScalarInterpolator527->setKey(new float[11]{0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1}, 11);
ScalarInterpolator527->setKeyValue(new float[11]{0,0,0,0,0.2,0.4,1,0,1,0.4,0}, 11);
Group526->addChildren(*ScalarInterpolator527);

CROUTE* ROUTE528 = new CROUTE();
ROUTE528->setFromField("fraction_changed");
ROUTE528->setFromNode("KickTimer");
ROUTE528->setToField("set_fraction");
ROUTE528->setToNode("skull_tipInterpolator");
Group526->addChildren(*ROUTE528);

CROUTE* ROUTE529 = new CROUTE();
ROUTE529->setFromField("value_changed");
ROUTE529->setFromNode("skull_tipInterpolator");
ROUTE529->setToField("weight");
ROUTE529->setToNode("Joe_skull_tip_raiser_action");
Group526->addChildren(*ROUTE529);

group->addChildren(*Group526);

CGroup* Group530 = (CGroup *)(m_pScene.createNode("Group"));
Group530->setDEF("SkinTextureTransformAnimationGroup");
CScalarInterpolator* ScalarInterpolator531 = (CScalarInterpolator *)(m_pScene.createNode("ScalarInterpolator"));
ScalarInterpolator531->setDEF("SkinInterpolator");
ScalarInterpolator531->setKey(new float[8]{0,0.2,0.4,0.5,0.6,0.7,0.8,1}, 8);
ScalarInterpolator531->setKeyValue(new float[8]{0,0,0,0,0,1,2,0}, 8);
Group530->addChildren(*ScalarInterpolator531);

CROUTE* ROUTE532 = new CROUTE();
ROUTE532->setFromField("fraction_changed");
ROUTE532->setFromNode("KickTimer");
ROUTE532->setToField("set_fraction");
ROUTE532->setToNode("SkinInterpolator");
Group530->addChildren(*ROUTE532);

CROUTE* ROUTE533 = new CROUTE();
ROUTE533->setFromField("value_changed");
ROUTE533->setFromNode("SkinInterpolator");
ROUTE533->setToField("rotation");
ROUTE533->setToNode("KickTextureTransform");
Group530->addChildren(*ROUTE533);

group->addChildren(*Group530);

CGroup* Group534 = (CGroup *)(m_pScene.createNode("Group"));
CTransform* Transform535 = (CTransform *)(m_pScene.createNode("Transform"));
Transform535->setDEF("SBall");
Transform535->setRotation(new float[4]{0.7,0,0.7,0.1});
Transform535->setScale(new float[3]{0.23,0.23,0.23});
Transform535->setTranslation(new float[3]{-0.916,0.37,-0.92});
CShape* Shape536 = (CShape *)(m_pScene.createNode("Shape"));
Shape536->setDEF("ball_Shape");
CAppearance* Appearance537 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance537->setDEF("ball_Appearance");
CMaterial* Material538 = (CMaterial *)(m_pScene.createNode("Material"));
Material538->setDEF("ball_Material");
Material538->setDiffuseColor(new float[3]{0.3,0.3,1});
Material538->setEmissiveColor(new float[3]{0.3,0.3,0.33});
Appearance537->setMaterial(*Material538);

CImageTexture* ImageTexture539 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture539->setUSE("JoeSkinImageTexture");
Appearance537->setTexture(*ImageTexture539);

Shape536->setAppearance(*Appearance537);

CIndexedFaceSet* IndexedFaceSet540 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet540->setDEF("ball_IndexedFaceSet");
IndexedFaceSet540->setCoordIndex(new int[480]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
CCoordinate* Coordinate541 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate541->setDEF("Ball_Coordinates");
Coordinate541->setPoint(new float[186]{0,0.4675,0,0,0.4049,-0.2338,-0.1169,0.4049,-0.2024,-0.2024,0.4049,-0.1169,-0.2338,0.4049,0,-0.2024,0.4049,0.1169,-0.1169,0.4049,0.2024,0,0.4049,0.2338,0.1169,0.4049,0.2024,0.2024,0.4049,0.1169,0.2338,0.4049,0,0.2024,0.4049,-0.1169,0.1169,0.4049,-0.2024,0,0.2338,-0.4049,-0.2024,0.2338,-0.3506,-0.3506,0.2338,-0.2024,-0.4049,0.2338,0,-0.3506,0.2338,0.2024,-0.2024,0.2338,0.3506,0,0.2338,0.4049,0.2024,0.2338,0.3506,0.3506,0.2338,0.2024,0.4049,0.2338,0,0.3506,0.2338,-0.2024,0.2024,0.2338,-0.3506,0,0,-0.4675,-0.2338,0,-0.4049,-0.4049,0,-0.2338,-0.4675,0,0,-0.4049,0,0.2338,-0.2338,0,0.4049,0,0,0.4675,0.2338,0,0.4049,0.4049,0,0.2338,0.4675,0,0,0.4049,0,-0.2338,0.2338,0,-0.4049,0,-0.2338,-0.4049,-0.2024,-0.2338,-0.3506,-0.3506,-0.2338,-0.2024,-0.4049,-0.2338,0,-0.3506,-0.2338,0.2024,-0.2024,-0.2338,0.3506,0,-0.2338,0.4049,0.2024,-0.2338,0.3506,0.3506,-0.2338,0.2024,0.4049,-0.2338,0,0.3506,-0.2338,-0.2024,0.2024,-0.2338,-0.3506,0,-0.4049,-0.2338,-0.1169,-0.4049,-0.2024,-0.2024,-0.4049,-0.1169,-0.2338,-0.4049,0,-0.2024,-0.4049,0.1169,-0.1169,-0.4049,0.2024,0,-0.4049,0.2338,0.1169,-0.4049,0.2024,0.2024,-0.4049,0.1169,0.2338,-0.4049,0,0.2024,-0.4049,-0.1169,0.1169,-0.4049,-0.2024,0,-0.4675,0});
IndexedFaceSet540->setCoord(*Coordinate541);

Shape536->setGeometry(IndexedFaceSet540);

Transform535->addChildren(*Shape536);

CViewpoint* Viewpoint542 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint542->setDEF("ballView_1");
Viewpoint542->setDescription("Ball View");
Transform535->addChildren(*Viewpoint542);

Group534->addChildren(*Transform535);

//Ball Animation interpolators
CPositionInterpolator* PositionInterpolator543 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator543->setDEF("ball_TranslationInterpolator");
PositionInterpolator543->setKey(new float[4]{0,0.4,0.409,1}, 4);
PositionInterpolator543->setKeyValue(new float[12]{-1,0.4,-1,0,0.07,0,0.05,0.06,0.05,2,4,10});
Group534->addChildren(*PositionInterpolator543);

COrientationInterpolator* OrientationInterpolator544 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator544->setDEF("ball_RotationInterpolator");
OrientationInterpolator544->setKey(new float[5]{0,0.4,0.41,0.71,1}, 5);
OrientationInterpolator544->setKeyValue(new float[20]{1,0,1,0.25,-1,0,-1,1.35,-1,1,-1,3.35,-1,0.2,-1,3,-1,0.2,-1,3});
Group534->addChildren(*OrientationInterpolator544);

//Ball Animation Routes
CROUTE* ROUTE545 = new CROUTE();
ROUTE545->setFromField("fraction_changed");
ROUTE545->setFromNode("KickTimer");
ROUTE545->setToField("set_fraction");
ROUTE545->setToNode("ball_TranslationInterpolator");
Group534->addChildren(*ROUTE545);

CROUTE* ROUTE546 = new CROUTE();
ROUTE546->setFromField("value_changed");
ROUTE546->setFromNode("ball_TranslationInterpolator");
ROUTE546->setToField("set_translation");
ROUTE546->setToNode("SBall");
Group534->addChildren(*ROUTE546);

CROUTE* ROUTE547 = new CROUTE();
ROUTE547->setFromField("fraction_changed");
ROUTE547->setFromNode("KickTimer");
ROUTE547->setToField("set_fraction");
ROUTE547->setToNode("ball_RotationInterpolator");
Group534->addChildren(*ROUTE547);

CROUTE* ROUTE548 = new CROUTE();
ROUTE548->setFromField("value_changed");
ROUTE548->setFromNode("ball_RotationInterpolator");
ROUTE548->setToField("set_rotation");
ROUTE548->setToNode("SBall");
Group534->addChildren(*ROUTE548);

group->addChildren(*Group534);

CGroup* Group549 = (CGroup *)(m_pScene.createNode("Group"));
CTransform* Transform550 = (CTransform *)(m_pScene.createNode("Transform"));
Transform550->setScale(new float[3]{0.2,0.2,0.2});
CShape* Shape551 = (CShape *)(m_pScene.createNode("Shape"));
Shape551->setUSE("AxisLinesShape");
Transform550->addChildren(*Shape551);

Group549->addChildren(*Transform550);

CTransform* Transform552 = (CTransform *)(m_pScene.createNode("Transform"));
Transform552->setDEF("Circle0");
Transform552->setScale(new float[3]{1.175,1,1.175});
CShape* Shape553 = (CShape *)(m_pScene.createNode("Shape"));
Shape553->setDEF("circle_Shape");
CAppearance* Appearance554 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance554->setDEF("circle0_Appearance");
CMaterial* Material555 = (CMaterial *)(m_pScene.createNode("Material"));
Material555->setDEF("circle0_Material");
Material555->setAmbientIntensity(0.9);
Material555->setDiffuseColor(new float[3]{0.9,0,0.7});
Material555->setEmissiveColor(new float[3]{0.425,0.486,1});
Appearance554->setMaterial(*Material555);

Shape553->setAppearance(*Appearance554);

CIndexedLineSet* IndexedLineSet556 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet556->setDEF("Orbit1");
IndexedLineSet556->setCoordIndex(new int[62]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1});
CCoordinate* Coordinate557 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate557->setDEF("circle_Coordinates");
Coordinate557->setPoint(new float[183]{1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0});
IndexedLineSet556->setCoord(*Coordinate557);

Shape553->setGeometry(IndexedLineSet556);

Transform552->addChildren(*Shape553);

Group549->addChildren(*Transform552);

CTransform* Transform558 = (CTransform *)(m_pScene.createNode("Transform"));
Transform558->setDEF("Circle1");
Transform558->setScale(new float[3]{0.5,1,0.5});
CShape* Shape559 = (CShape *)(m_pScene.createNode("Shape"));
Shape559->setDEF("circle1_Shape");
CAppearance* Appearance560 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance560->setDEF("circle1_Appearance");
CMaterial* Material561 = (CMaterial *)(m_pScene.createNode("Material"));
Material561->setDEF("circle1_Material");
Material561->setDiffuseColor(new float[3]{0.9,0,0.7});
Material561->setEmissiveColor(new float[3]{0.424956,0.483976,1});
Appearance560->setMaterial(*Material561);

Shape559->setAppearance(*Appearance560);

CIndexedLineSet* IndexedLineSet562 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet562->setUSE("Orbit1");
Shape559->setGeometry(IndexedLineSet562);

Transform558->addChildren(*Shape559);

Group549->addChildren(*Transform558);

CTransform* Transform563 = (CTransform *)(m_pScene.createNode("Transform"));
Transform563->setDEF("Circle2");
Transform563->setScale(new float[3]{0.25,1,0.25});
CShape* Shape564 = (CShape *)(m_pScene.createNode("Shape"));
Shape564->setDEF("circle2_Shape");
CAppearance* Appearance565 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance565->setDEF("circle2_Appearance");
CMaterial* Material566 = (CMaterial *)(m_pScene.createNode("Material"));
Material566->setDEF("circle2_Material");
Material566->setDiffuseColor(new float[3]{0.9,0,0.7});
Material566->setEmissiveColor(new float[3]{0.424956,0.483976,1});
Appearance565->setMaterial(*Material566);

Shape564->setAppearance(*Appearance565);

CIndexedLineSet* IndexedLineSet567 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet567->setUSE("Orbit1");
Shape564->setGeometry(IndexedLineSet567);

Transform563->addChildren(*Shape564);

Group549->addChildren(*Transform563);

group->addChildren(*Group549);

X3D0->setScene(*Scene16);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

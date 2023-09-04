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
meta2->setContent("JohnJoint20.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("identifier");
meta3->setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint20.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("An attempt at a standard LOA-4 skeleton");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("generator");
meta5->setContent("h2.pl");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("20 Jan 2023");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("creator");
meta7->setContent("John Carlson");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("created");
meta8->setContent("9 November 2020");
head1->addMeta(*meta8);

Ccomponent* component9 = new Ccomponent();
component9->setName("HAnim");
component9->setLevel(1);
head1->addComponent(*component9);

X3D0->setHead(*head1);

CScene* Scene10 = new CScene();
CTransform* Transform11 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape12 = (CShape *)(m_pScene.createNode("Shape"));
Shape12->setDEF("AxisLinesShape");
CIndexedLineSet* IndexedLineSet13 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet13->setColorPerVertex(False);
IndexedLineSet13->setColorIndex(new int[3]{0,1,2});
IndexedLineSet13->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
CColor* Color14 = (CColor *)(m_pScene.createNode("Color"));
Color14->setColor(new float[9]{1,0,0,0,0.6,0,0,0,1});
IndexedLineSet13->setColor(*Color14);

CCoordinate* Coordinate15 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate15->setPoint(new float[12]{0,0,0,0.1,0,0,0,0.1,0,0,0,0.1});
IndexedLineSet13->setCoord(*Coordinate15);

Shape12->setGeometry(IndexedLineSet13);

Transform11->addChild(*Shape12);

group->addChildren(*Transform11);

CGroup* Group16 = (CGroup *)(m_pScene.createNode("Group"));
CTransform* Transform17 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform18 = (CTransform *)(m_pScene.createNode("Transform"));
Transform18->setTranslation(new float[3]{0,2,0});
CShape* Shape19 = (CShape *)(m_pScene.createNode("Shape"));
Shape19->setDEF("HAnimRootShape");
CAppearance* Appearance20 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material21 = (CMaterial *)(m_pScene.createNode("Material"));
Material21->setDEF("HAnimRootMaterial");
Material21->setDiffuseColor(new float[3]{0.8,0,0});
Material21->setTransparency(0.3);
Appearance20->setMaterial(*Material21);

Shape19->setAppearance(*Appearance20);

CSphere* Sphere22 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere22->setRadius(0.02);
Shape19->setGeometry(Sphere22);

Transform18->addChild(*Shape19);

Transform17->addChildren(*Transform18);

CTransform* Transform23 = (CTransform *)(m_pScene.createNode("Transform"));
Transform23->setTranslation(new float[3]{0,2.1,0});
CShape* Shape24 = (CShape *)(m_pScene.createNode("Shape"));
Shape24->setDEF("HAnimJointShape");
CAppearance* Appearance25 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material26 = (CMaterial *)(m_pScene.createNode("Material"));
Material26->setDEF("HAnimJointMaterial");
Material26->setDiffuseColor(new float[3]{0,0,0.8});
Material26->setTransparency(0.3);
Appearance25->setMaterial(*Material26);

Shape24->setAppearance(*Appearance25);

CSphere* Sphere27 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere27->setRadius(0.02);
Shape24->setGeometry(Sphere27);

Transform23->addChild(*Shape24);

Transform17->addChildren(*Transform23);

CTransform* Transform28 = (CTransform *)(m_pScene.createNode("Transform"));
Transform28->setTranslation(new float[3]{0,2.05,0});
CShape* Shape29 = (CShape *)(m_pScene.createNode("Shape"));
Shape29->setDEF("HAnimSegmentLine");
CLineSet* LineSet30 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet30->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA31 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA31->setDEF("HAnimSegmentLineColorRGBA");
ColorRGBA31->setColor(new float[8]{1,1,0,1,1,1,0,0.1});
LineSet30->setColor(*ColorRGBA31);

CCoordinate* Coordinate32 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate32->setPoint(new float[6]{-0.05,0,0,0.05,0,0});
LineSet30->setCoord(*Coordinate32);

Shape29->setGeometry(LineSet30);

Transform28->addChild(*Shape29);

Transform17->addChildren(*Transform28);

CTransform* Transform33 = (CTransform *)(m_pScene.createNode("Transform"));
Transform33->setTranslation(new float[3]{0,2.1,0});
CShape* Shape34 = (CShape *)(m_pScene.createNode("Shape"));
Shape34->setDEF("HAnimSiteShape");
CAppearance* Appearance35 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material36 = (CMaterial *)(m_pScene.createNode("Material"));
Material36->setDiffuseColor(new float[3]{1,1,0});
Material36->setTransparency(0.3);
Appearance35->setMaterial(*Material36);

Shape34->setAppearance(*Appearance35);

CIndexedFaceSet* IndexedFaceSet37 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet37->setDEF("DiamondIFS");
IndexedFaceSet37->setSolid(False);
IndexedFaceSet37->setCreaseAngle(0.5);
IndexedFaceSet37->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
CColorRGBA* ColorRGBA38 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA38->setDEF("HAnimSiteColorRGBA");
ColorRGBA38->setColor(new float[24]{1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
IndexedFaceSet37->setColor(*ColorRGBA38);

CCoordinate* Coordinate39 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate39->setPoint(new float[18]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
IndexedFaceSet37->setCoord(*Coordinate39);

Shape34->setGeometry(IndexedFaceSet37);

Transform33->addChild(*Shape34);

Transform17->addChildren(*Transform33);

Group16->addChildren(*Transform17);

group->addChildren(*Group16);

CNavigationInfo* NavigationInfo40 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo40->setSpeed(1.5);
group->addChildren(*NavigationInfo40);

CViewpoint* Viewpoint41 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint41->setDescription("default");
group->addChildren(*Viewpoint41);

CHAnimHumanoid* HAnimHumanoid42 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid42->setDEF("hanim_HAnim");
HAnimHumanoid42->setVersion("2.0");
HAnimHumanoid42->setName("HAnim");
HAnimHumanoid42->setInfo(new CString[1]{"humanoidVersion=2.0"}, 1);
CHAnimJoint* HAnimJoint43 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint43->setDEF("hanim_humanoid_root");
HAnimJoint43->setName("humanoid_root");
HAnimJoint43->setCenter(new float[3]{0,0.824,0.0277});
CHAnimSegment* HAnimSegment44 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment44->setDEF("hanim_sacrum");
HAnimSegment44->setName("sacrum");
CHAnimDisplacer* HAnimDisplacer45 = (CHAnimDisplacer *)(m_pScene.createNode("HAnimDisplacer"));
HAnimDisplacer45->setName("sacrum_feature");
HAnimDisplacer45->setCoordIndex(new int[1]{0});
HAnimDisplacer45->setDisplacements(new float[3]{0,0,0});
HAnimSegment44->addDisplacers(*HAnimDisplacer45);

CHAnimDisplacer* HAnimDisplacer46 = (CHAnimDisplacer *)(m_pScene.createNode("HAnimDisplacer"));
HAnimDisplacer46->setName("sacrum_config");
HAnimDisplacer46->setCoordIndex(new int[1]{0});
HAnimDisplacer46->setDisplacements(new float[3]{0,0,0});
HAnimSegment44->addDisplacers(*HAnimDisplacer46);

CTransform* Transform47 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform48 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape49 = (CShape *)(m_pScene.createNode("Shape"));
Shape49->setUSE("HAnimJointShape");
Transform48->addChild(*Shape49);

Transform47->addChildren(*Transform48);

HAnimSegment44->addChildren(*Transform47);

CShape* Shape50 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet51 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet51->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA52 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA52->setUSE("HAnimSegmentLineColorRGBA");
LineSet51->setColor(*ColorRGBA52);

CCoordinate* Coordinate53 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate53->setPoint(new float[6]{0,0.824,0.0277,0,0.9149,0.0016});
LineSet51->setCoord(*Coordinate53);

Shape50->setGeometry(LineSet51);

HAnimSegment44->addChildren(*Shape50);

CHAnimSite* HAnimSite54 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite54->setDEF("hanim_buttocks_standing_wall_contact_point_pt");
HAnimSite54->setName("buttocks_standing_wall_contact_point_pt");
HAnimSite54->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor55 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor55->setDescription("HAnimSite buttocks_standing_wall_contact_point_pt");
HAnimSite54->addChildren(*TouchSensor55);

CShape* Shape56 = (CShape *)(m_pScene.createNode("Shape"));
Shape56->setUSE("HAnimSiteShape");
HAnimSite54->addChildren(*Shape56);

HAnimSegment44->addChildren(*HAnimSite54);

CHAnimSite* HAnimSite57 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite57->setDEF("hanim_crotch_pt");
HAnimSite57->setName("crotch_pt");
HAnimSite57->setTranslation(new float[3]{0.0034,0.8266,0.0257});
CTouchSensor* TouchSensor58 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor58->setDescription("HAnimSite crotch_pt");
HAnimSite57->addChildren(*TouchSensor58);

CShape* Shape59 = (CShape *)(m_pScene.createNode("Shape"));
Shape59->setUSE("HAnimSiteShape");
HAnimSite57->addChildren(*Shape59);

HAnimSegment44->addChildren(*HAnimSite57);

CHAnimSite* HAnimSite60 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite60->setDEF("hanim_l_asis_pt");
HAnimSite60->setName("l_asis_pt");
HAnimSite60->setTranslation(new float[3]{0.0925,0.9983,0.1052});
CTouchSensor* TouchSensor61 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor61->setDescription("HAnimSite l_asis_pt");
HAnimSite60->addChildren(*TouchSensor61);

CShape* Shape62 = (CShape *)(m_pScene.createNode("Shape"));
Shape62->setUSE("HAnimSiteShape");
HAnimSite60->addChildren(*Shape62);

HAnimSegment44->addChildren(*HAnimSite60);

CHAnimSite* HAnimSite63 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite63->setDEF("hanim_l_iliocristale_pt");
HAnimSite63->setName("l_iliocristale_pt");
HAnimSite63->setTranslation(new float[3]{0.1612,1.0537,0.0008});
CTouchSensor* TouchSensor64 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor64->setDescription("HAnimSite l_iliocristale_pt");
HAnimSite63->addChildren(*TouchSensor64);

CShape* Shape65 = (CShape *)(m_pScene.createNode("Shape"));
Shape65->setUSE("HAnimSiteShape");
HAnimSite63->addChildren(*Shape65);

HAnimSegment44->addChildren(*HAnimSite63);

CHAnimSite* HAnimSite66 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite66->setDEF("hanim_l_psis_pt");
HAnimSite66->setName("l_psis_pt");
HAnimSite66->setTranslation(new float[3]{0.0774,1.019,-0.1151});
CTouchSensor* TouchSensor67 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor67->setDescription("HAnimSite l_psis_pt");
HAnimSite66->addChildren(*TouchSensor67);

CShape* Shape68 = (CShape *)(m_pScene.createNode("Shape"));
Shape68->setUSE("HAnimSiteShape");
HAnimSite66->addChildren(*Shape68);

HAnimSegment44->addChildren(*HAnimSite66);

CHAnimSite* HAnimSite69 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite69->setDEF("hanim_l_trochanterion_pt");
HAnimSite69->setName("l_trochanterion_pt");
HAnimSite69->setTranslation(new float[3]{0.1677,0.8336,0.0303});
CTouchSensor* TouchSensor70 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor70->setDescription("HAnimSite l_trochanterion_pt");
HAnimSite69->addChildren(*TouchSensor70);

CShape* Shape71 = (CShape *)(m_pScene.createNode("Shape"));
Shape71->setUSE("HAnimSiteShape");
HAnimSite69->addChildren(*Shape71);

HAnimSegment44->addChildren(*HAnimSite69);

CHAnimSite* HAnimSite72 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite72->setDEF("hanim_r_asis_pt");
HAnimSite72->setName("r_asis_pt");
HAnimSite72->setTranslation(new float[3]{-0.0887,1.0021,0.1112});
CTouchSensor* TouchSensor73 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor73->setDescription("HAnimSite r_asis_pt");
HAnimSite72->addChildren(*TouchSensor73);

CShape* Shape74 = (CShape *)(m_pScene.createNode("Shape"));
Shape74->setUSE("HAnimSiteShape");
HAnimSite72->addChildren(*Shape74);

HAnimSegment44->addChildren(*HAnimSite72);

CHAnimSite* HAnimSite75 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite75->setDEF("hanim_r_iliocristale_pt");
HAnimSite75->setName("r_iliocristale_pt");
HAnimSite75->setTranslation(new float[3]{-0.1525,1.0628,0.0035});
CTouchSensor* TouchSensor76 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor76->setDescription("HAnimSite r_iliocristale_pt");
HAnimSite75->addChildren(*TouchSensor76);

CShape* Shape77 = (CShape *)(m_pScene.createNode("Shape"));
Shape77->setUSE("HAnimSiteShape");
HAnimSite75->addChildren(*Shape77);

HAnimSegment44->addChildren(*HAnimSite75);

CHAnimSite* HAnimSite78 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite78->setDEF("hanim_r_psis_pt");
HAnimSite78->setName("r_psis_pt");
HAnimSite78->setTranslation(new float[3]{-0.0716,1.019,-0.1138});
CTouchSensor* TouchSensor79 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor79->setDescription("HAnimSite r_psis_pt");
HAnimSite78->addChildren(*TouchSensor79);

CShape* Shape80 = (CShape *)(m_pScene.createNode("Shape"));
Shape80->setUSE("HAnimSiteShape");
HAnimSite78->addChildren(*Shape80);

HAnimSegment44->addChildren(*HAnimSite78);

CHAnimSite* HAnimSite81 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite81->setDEF("hanim_r_trochanterion_pt");
HAnimSite81->setName("r_trochanterion_pt");
HAnimSite81->setTranslation(new float[3]{-0.1689,0.8419,0.0352});
CTouchSensor* TouchSensor82 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor82->setDescription("HAnimSite r_trochanterion_pt");
HAnimSite81->addChildren(*TouchSensor82);

CShape* Shape83 = (CShape *)(m_pScene.createNode("Shape"));
Shape83->setUSE("HAnimSiteShape");
HAnimSite81->addChildren(*Shape83);

HAnimSegment44->addChildren(*HAnimSite81);

CShape* Shape84 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet85 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet85->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA86 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA86->setUSE("HAnimSegmentLineColorRGBA");
LineSet85->setColor(*ColorRGBA86);

CCoordinate* Coordinate87 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate87->setPoint(new float[6]{0,0.824,0.0277,0.0028,1.0568,-0.0776});
LineSet85->setCoord(*Coordinate87);

Shape84->setGeometry(LineSet85);

HAnimSegment44->addChildren(*Shape84);

CHAnimSite* HAnimSite88 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite88->setDEF("hanim_navel_pt");
HAnimSite88->setName("navel_pt");
HAnimSite88->setTranslation(new float[3]{0.0069,1.0966,0.1017});
CTouchSensor* TouchSensor89 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor89->setDescription("HAnimSite navel_pt");
HAnimSite88->addChildren(*TouchSensor89);

CShape* Shape90 = (CShape *)(m_pScene.createNode("Shape"));
Shape90->setUSE("HAnimSiteShape");
HAnimSite88->addChildren(*Shape90);

HAnimSegment44->addChildren(*HAnimSite88);

CHAnimSite* HAnimSite91 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite91->setDEF("hanim_waist_preferred_anterior_pt");
HAnimSite91->setName("waist_preferred_anterior_pt");
HAnimSite91->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor92 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor92->setDescription("HAnimSite waist_preferred_anterior_pt");
HAnimSite91->addChildren(*TouchSensor92);

CShape* Shape93 = (CShape *)(m_pScene.createNode("Shape"));
Shape93->setUSE("HAnimSiteShape");
HAnimSite91->addChildren(*Shape93);

HAnimSegment44->addChildren(*HAnimSite91);

CHAnimSite* HAnimSite94 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite94->setDEF("hanim_waist_preferred_posterior_pt");
HAnimSite94->setName("waist_preferred_posterior_pt");
HAnimSite94->setTranslation(new float[3]{0.29,1.0915,-0.1091});
CTouchSensor* TouchSensor95 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor95->setDescription("HAnimSite waist_preferred_posterior_pt");
HAnimSite94->addChildren(*TouchSensor95);

CShape* Shape96 = (CShape *)(m_pScene.createNode("Shape"));
Shape96->setUSE("HAnimSiteShape");
HAnimSite94->addChildren(*Shape96);

HAnimSegment44->addChildren(*HAnimSite94);

HAnimJoint43->addChildren(*HAnimSegment44);

CHAnimJoint* HAnimJoint97 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint97->setDEF("hanim_sacroiliac");
HAnimJoint97->setName("sacroiliac");
HAnimJoint97->setCenter(new float[3]{0,0.9149,0.0016});
CHAnimSegment* HAnimSegment98 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment98->setDEF("hanim_pelvis");
HAnimSegment98->setName("pelvis");
CTransform* Transform99 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform100 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape101 = (CShape *)(m_pScene.createNode("Shape"));
Shape101->setUSE("HAnimJointShape");
Transform100->addChild(*Shape101);

Transform99->addChildren(*Transform100);

HAnimSegment98->addChildren(*Transform99);

CShape* Shape102 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet103 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet103->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA104 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA104->setUSE("HAnimSegmentLineColorRGBA");
LineSet103->setColor(*ColorRGBA104);

CCoordinate* Coordinate105 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate105->setPoint(new float[6]{0,0.9149,0.0016,0.0961,0.9124,-0.0001});
LineSet103->setCoord(*Coordinate105);

Shape102->setGeometry(LineSet103);

HAnimSegment98->addChildren(*Shape102);

CHAnimSite* HAnimSite106 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite106->setDEF("hanim_l_femoral_lateral_epicondyles_pt");
HAnimSite106->setName("l_femoral_lateral_epicondyles_pt");
HAnimSite106->setTranslation(new float[3]{0.1598,0.4967,0.0297});
CTouchSensor* TouchSensor107 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor107->setDescription("HAnimSite l_femoral_lateral_epicondyles_pt");
HAnimSite106->addChildren(*TouchSensor107);

CShape* Shape108 = (CShape *)(m_pScene.createNode("Shape"));
Shape108->setUSE("HAnimSiteShape");
HAnimSite106->addChildren(*Shape108);

HAnimSegment98->addChildren(*HAnimSite106);

CHAnimSite* HAnimSite109 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite109->setDEF("hanim_l_femoral_medial_epicondyles_pt");
HAnimSite109->setName("l_femoral_medial_epicondyles_pt");
HAnimSite109->setTranslation(new float[3]{0.0398,0.4946,0.0303});
CTouchSensor* TouchSensor110 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor110->setDescription("HAnimSite l_femoral_medial_epicondyles_pt");
HAnimSite109->addChildren(*TouchSensor110);

CShape* Shape111 = (CShape *)(m_pScene.createNode("Shape"));
Shape111->setUSE("HAnimSiteShape");
HAnimSite109->addChildren(*Shape111);

HAnimSegment98->addChildren(*HAnimSite109);

CHAnimSite* HAnimSite112 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite112->setDEF("hanim_l_knee_crease_pt");
HAnimSite112->setName("l_knee_crease_pt");
HAnimSite112->setTranslation(new float[3]{0.0993,0.4881,-0.0309});
CTouchSensor* TouchSensor113 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor113->setDescription("HAnimSite l_knee_crease_pt");
HAnimSite112->addChildren(*TouchSensor113);

CShape* Shape114 = (CShape *)(m_pScene.createNode("Shape"));
Shape114->setUSE("HAnimSiteShape");
HAnimSite112->addChildren(*Shape114);

HAnimSegment98->addChildren(*HAnimSite112);

CHAnimSite* HAnimSite115 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite115->setDEF("hanim_l_suprapatella_pt");
HAnimSite115->setName("l_suprapatella_pt");
HAnimSite115->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor116 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor116->setDescription("HAnimSite l_suprapatella_pt");
HAnimSite115->addChildren(*TouchSensor116);

CShape* Shape117 = (CShape *)(m_pScene.createNode("Shape"));
Shape117->setUSE("HAnimSiteShape");
HAnimSite115->addChildren(*Shape117);

HAnimSegment98->addChildren(*HAnimSite115);

CShape* Shape118 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet119 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet119->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA120 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA120->setUSE("HAnimSegmentLineColorRGBA");
LineSet119->setColor(*ColorRGBA120);

CCoordinate* Coordinate121 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate121->setPoint(new float[6]{0,0.9149,0.0016,-0.095,0.9171,0.0029});
LineSet119->setCoord(*Coordinate121);

Shape118->setGeometry(LineSet119);

HAnimSegment98->addChildren(*Shape118);

CHAnimSite* HAnimSite122 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite122->setDEF("hanim_r_femoral_lateral_epicondyles_pt");
HAnimSite122->setName("r_femoral_lateral_epicondyles_pt");
HAnimSite122->setTranslation(new float[3]{-0.1421,0.4992,0.031});
CTouchSensor* TouchSensor123 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor123->setDescription("HAnimSite r_femoral_lateral_epicondyles_pt");
HAnimSite122->addChildren(*TouchSensor123);

CShape* Shape124 = (CShape *)(m_pScene.createNode("Shape"));
Shape124->setUSE("HAnimSiteShape");
HAnimSite122->addChildren(*Shape124);

HAnimSegment98->addChildren(*HAnimSite122);

CHAnimSite* HAnimSite125 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite125->setDEF("hanim_r_femoral_medial_epicondyles_pt");
HAnimSite125->setName("r_femoral_medial_epicondyles_pt");
HAnimSite125->setTranslation(new float[3]{-0.0221,0.5014,0.0289});
CTouchSensor* TouchSensor126 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor126->setDescription("HAnimSite r_femoral_medial_epicondyles_pt");
HAnimSite125->addChildren(*TouchSensor126);

CShape* Shape127 = (CShape *)(m_pScene.createNode("Shape"));
Shape127->setUSE("HAnimSiteShape");
HAnimSite125->addChildren(*Shape127);

HAnimSegment98->addChildren(*HAnimSite125);

CHAnimSite* HAnimSite128 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite128->setDEF("hanim_r_knee_crease_pt");
HAnimSite128->setName("r_knee_crease_pt");
HAnimSite128->setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
CTouchSensor* TouchSensor129 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor129->setDescription("HAnimSite r_knee_crease_pt");
HAnimSite128->addChildren(*TouchSensor129);

CShape* Shape130 = (CShape *)(m_pScene.createNode("Shape"));
Shape130->setUSE("HAnimSiteShape");
HAnimSite128->addChildren(*Shape130);

HAnimSegment98->addChildren(*HAnimSite128);

CHAnimSite* HAnimSite131 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite131->setDEF("hanim_r_suprapatella_pt");
HAnimSite131->setName("r_suprapatella_pt");
HAnimSite131->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor132 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor132->setDescription("HAnimSite r_suprapatella_pt");
HAnimSite131->addChildren(*TouchSensor132);

CShape* Shape133 = (CShape *)(m_pScene.createNode("Shape"));
Shape133->setUSE("HAnimSiteShape");
HAnimSite131->addChildren(*Shape133);

HAnimSegment98->addChildren(*HAnimSite131);

HAnimJoint97->addChildren(*HAnimSegment98);

CHAnimJoint* HAnimJoint134 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint134->setDEF("hanim_l_hip");
HAnimJoint134->setName("l_hip");
HAnimJoint134->setCenter(new float[3]{0.0961,0.9124,-0.0001});
CHAnimSegment* HAnimSegment135 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment135->setDEF("hanim_l_thigh");
HAnimSegment135->setName("l_thigh");
CTransform* Transform136 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform137 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape138 = (CShape *)(m_pScene.createNode("Shape"));
Shape138->setUSE("HAnimJointShape");
Transform137->addChild(*Shape138);

Transform136->addChildren(*Transform137);

HAnimSegment135->addChildren(*Transform136);

CShape* Shape139 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet140 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet140->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA141 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA141->setUSE("HAnimSegmentLineColorRGBA");
LineSet140->setColor(*ColorRGBA141);

CCoordinate* Coordinate142 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate142->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308});
LineSet140->setCoord(*Coordinate142);

Shape139->setGeometry(LineSet140);

HAnimSegment135->addChildren(*Shape139);

CHAnimSite* HAnimSite143 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite143->setDEF("hanim_l_lateral_malleolus_pt");
HAnimSite143->setName("l_lateral_malleolus_pt");
HAnimSite143->setTranslation(new float[3]{0.1308,0.0597,-0.1032});
CTouchSensor* TouchSensor144 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor144->setDescription("HAnimSite l_lateral_malleolus_pt");
HAnimSite143->addChildren(*TouchSensor144);

CShape* Shape145 = (CShape *)(m_pScene.createNode("Shape"));
Shape145->setUSE("HAnimSiteShape");
HAnimSite143->addChildren(*Shape145);

HAnimSegment135->addChildren(*HAnimSite143);

CHAnimSite* HAnimSite146 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite146->setDEF("hanim_l_medial_malleolus_pt");
HAnimSite146->setName("l_medial_malleolus_pt");
HAnimSite146->setTranslation(new float[3]{0.089,0.0716,-0.0881});
CTouchSensor* TouchSensor147 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor147->setDescription("HAnimSite l_medial_malleolus_pt");
HAnimSite146->addChildren(*TouchSensor147);

CShape* Shape148 = (CShape *)(m_pScene.createNode("Shape"));
Shape148->setUSE("HAnimSiteShape");
HAnimSite146->addChildren(*Shape148);

HAnimSegment135->addChildren(*HAnimSite146);

CHAnimSite* HAnimSite149 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite149->setDEF("hanim_l_tibiale_pt");
HAnimSite149->setName("l_tibiale_pt");
HAnimSite149->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor150 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor150->setDescription("HAnimSite l_tibiale_pt");
HAnimSite149->addChildren(*TouchSensor150);

CShape* Shape151 = (CShape *)(m_pScene.createNode("Shape"));
Shape151->setUSE("HAnimSiteShape");
HAnimSite149->addChildren(*Shape151);

HAnimSegment135->addChildren(*HAnimSite149);

HAnimJoint134->addChildren(*HAnimSegment135);

CHAnimJoint* HAnimJoint152 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint152->setDEF("hanim_l_knee");
HAnimJoint152->setName("l_knee");
HAnimJoint152->setCenter(new float[3]{0.104,0.4867,0.0308});
CHAnimSegment* HAnimSegment153 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment153->setDEF("hanim_l_calf");
HAnimSegment153->setName("l_calf");
CTransform* Transform154 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform155 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape156 = (CShape *)(m_pScene.createNode("Shape"));
Shape156->setUSE("HAnimJointShape");
Transform155->addChild(*Shape156);

Transform154->addChildren(*Transform155);

HAnimSegment153->addChildren(*Transform154);

CShape* Shape157 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet158 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet158->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA159 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA159->setUSE("HAnimSegmentLineColorRGBA");
LineSet158->setColor(*ColorRGBA159);

CCoordinate* Coordinate160 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate160->setPoint(new float[6]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736});
LineSet158->setCoord(*Coordinate160);

Shape157->setGeometry(LineSet158);

HAnimSegment153->addChildren(*Shape157);

CHAnimSite* HAnimSite161 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite161->setDEF("hanim_l_calcaneus_posterior_pt");
HAnimSite161->setName("l_calcaneus_posterior_pt");
HAnimSite161->setTranslation(new float[3]{0.0974,0.0259,-0.1171});
CTouchSensor* TouchSensor162 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor162->setDescription("HAnimSite l_calcaneus_posterior_pt");
HAnimSite161->addChildren(*TouchSensor162);

CShape* Shape163 = (CShape *)(m_pScene.createNode("Shape"));
Shape163->setUSE("HAnimSiteShape");
HAnimSite161->addChildren(*Shape163);

HAnimSegment153->addChildren(*HAnimSite161);

CHAnimSite* HAnimSite164 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite164->setDEF("hanim_l_sphyrion_pt");
HAnimSite164->setName("l_sphyrion_pt");
HAnimSite164->setTranslation(new float[3]{0.089,0.0575,-0.0943});
CTouchSensor* TouchSensor165 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor165->setDescription("HAnimSite l_sphyrion_pt");
HAnimSite164->addChildren(*TouchSensor165);

CShape* Shape166 = (CShape *)(m_pScene.createNode("Shape"));
Shape166->setUSE("HAnimSiteShape");
HAnimSite164->addChildren(*Shape166);

HAnimSegment153->addChildren(*HAnimSite164);

HAnimJoint152->addChildren(*HAnimSegment153);

CHAnimJoint* HAnimJoint167 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint167->setDEF("hanim_l_talocrural");
HAnimJoint167->setName("l_talocrural");
HAnimJoint167->setCenter(new float[3]{0.1101,0.0656,-0.0736});
CHAnimSegment* HAnimSegment168 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment168->setDEF("hanim_l_talus");
HAnimSegment168->setName("l_talus");
CTransform* Transform169 = (CTransform *)(m_pScene.createNode("Transform"));
Transform169->setTranslation(new float[3]{0.08,0.06,-0.025});
Transform169->setRotation(new float[4]{1,0,0,-1.57});
Transform169->setScale(new float[3]{0.15,0.15,0.15});
CTransform* Transform170 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape171 = (CShape *)(m_pScene.createNode("Shape"));
Shape171->setUSE("HAnimJointShape");
Transform170->addChild(*Shape171);

Transform169->addChildren(*Transform170);

HAnimSegment168->addChildren(*Transform169);

CShape* Shape172 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet173 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet173->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA174 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA174->setUSE("HAnimSegmentLineColorRGBA");
LineSet173->setColor(*ColorRGBA174);

CCoordinate* Coordinate175 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate175->setPoint(new float[6]{0.1101,0.0656,-0.0736,0,1,0});
LineSet173->setCoord(*Coordinate175);

Shape172->setGeometry(LineSet173);

HAnimSegment168->addChildren(*Shape172);

CShape* Shape176 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet177 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet177->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA178 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA178->setUSE("HAnimSegmentLineColorRGBA");
LineSet177->setColor(*ColorRGBA178);

CCoordinate* Coordinate179 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate179->setPoint(new float[6]{0.1101,0.0656,-0.0736,0,1,0});
LineSet177->setCoord(*Coordinate179);

Shape176->setGeometry(LineSet177);

HAnimSegment168->addChildren(*Shape176);

HAnimJoint167->addChildren(*HAnimSegment168);

CHAnimJoint* HAnimJoint180 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint180->setDEF("hanim_l_talocalcaneonavicular");
HAnimJoint180->setName("l_talocalcaneonavicular");
HAnimJoint180->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment181 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment181->setDEF("hanim_l_navicular");
HAnimSegment181->setName("l_navicular");
CTransform* Transform182 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform183 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape184 = (CShape *)(m_pScene.createNode("Shape"));
Shape184->setUSE("HAnimJointShape");
Transform183->addChild(*Shape184);

Transform182->addChildren(*Transform183);

HAnimSegment181->addChildren(*Transform182);

CShape* Shape185 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet186 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet186->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA187 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA187->setUSE("HAnimSegmentLineColorRGBA");
LineSet186->setColor(*ColorRGBA187);

CCoordinate* Coordinate188 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate188->setPoint(new float[6]{0,1,0,0,1,0});
LineSet186->setCoord(*Coordinate188);

Shape185->setGeometry(LineSet186);

HAnimSegment181->addChildren(*Shape185);

CShape* Shape189 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet190 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet190->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA191 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA191->setUSE("HAnimSegmentLineColorRGBA");
LineSet190->setColor(*ColorRGBA191);

CCoordinate* Coordinate192 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate192->setPoint(new float[6]{0,1,0,0,1,0});
LineSet190->setCoord(*Coordinate192);

Shape189->setGeometry(LineSet190);

HAnimSegment181->addChildren(*Shape189);

CShape* Shape193 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet194 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet194->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA195 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA195->setUSE("HAnimSegmentLineColorRGBA");
LineSet194->setColor(*ColorRGBA195);

CCoordinate* Coordinate196 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate196->setPoint(new float[6]{0,1,0,0,1,0});
LineSet194->setCoord(*Coordinate196);

Shape193->setGeometry(LineSet194);

HAnimSegment181->addChildren(*Shape193);

HAnimJoint180->addChildren(*HAnimSegment181);

CHAnimJoint* HAnimJoint197 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint197->setDEF("hanim_l_cuneonavicular_1");
HAnimJoint197->setName("l_cuneonavicular_1");
HAnimJoint197->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment198 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment198->setDEF("hanim_l_cuneiform_1");
HAnimSegment198->setName("l_cuneiform_1");
CTransform* Transform199 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform200 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape201 = (CShape *)(m_pScene.createNode("Shape"));
Shape201->setUSE("HAnimJointShape");
Transform200->addChild(*Shape201);

Transform199->addChildren(*Transform200);

HAnimSegment198->addChildren(*Transform199);

CShape* Shape202 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet203 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet203->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA204 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA204->setUSE("HAnimSegmentLineColorRGBA");
LineSet203->setColor(*ColorRGBA204);

CCoordinate* Coordinate205 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate205->setPoint(new float[6]{0,1,0,0,1,0});
LineSet203->setCoord(*Coordinate205);

Shape202->setGeometry(LineSet203);

HAnimSegment198->addChildren(*Shape202);

HAnimJoint197->addChildren(*HAnimSegment198);

CHAnimJoint* HAnimJoint206 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint206->setDEF("hanim_l_tarsometatarsal_1");
HAnimJoint206->setName("l_tarsometatarsal_1");
HAnimJoint206->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment207 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment207->setDEF("hanim_l_metatarsal_1");
HAnimSegment207->setName("l_metatarsal_1");
CTransform* Transform208 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform209 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape210 = (CShape *)(m_pScene.createNode("Shape"));
Shape210->setUSE("HAnimJointShape");
Transform209->addChild(*Shape210);

Transform208->addChildren(*Transform209);

HAnimSegment207->addChildren(*Transform208);

CShape* Shape211 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet212 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet212->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA213 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA213->setUSE("HAnimSegmentLineColorRGBA");
LineSet212->setColor(*ColorRGBA213);

CCoordinate* Coordinate214 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate214->setPoint(new float[6]{0,1,0,0,1,0});
LineSet212->setCoord(*Coordinate214);

Shape211->setGeometry(LineSet212);

HAnimSegment207->addChildren(*Shape211);

CHAnimSite* HAnimSite215 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite215->setDEF("hanim_l_metatarsal_phalanx_1_pt");
HAnimSite215->setName("l_metatarsal_phalanx_1_pt");
HAnimSite215->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor216 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor216->setDescription("HAnimSite l_metatarsal_phalanx_1_pt");
HAnimSite215->addChildren(*TouchSensor216);

CShape* Shape217 = (CShape *)(m_pScene.createNode("Shape"));
Shape217->setUSE("HAnimSiteShape");
HAnimSite215->addChildren(*Shape217);

HAnimSegment207->addChildren(*HAnimSite215);

HAnimJoint206->addChildren(*HAnimSegment207);

CHAnimJoint* HAnimJoint218 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint218->setDEF("hanim_l_metatarsophalangeal_1");
HAnimJoint218->setName("l_metatarsophalangeal_1");
HAnimJoint218->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment219 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment219->setDEF("hanim_l_tarsal_proximal_phalanx_1");
HAnimSegment219->setName("l_tarsal_proximal_phalanx_1");
CTransform* Transform220 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform221 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape222 = (CShape *)(m_pScene.createNode("Shape"));
Shape222->setUSE("HAnimJointShape");
Transform221->addChild(*Shape222);

Transform220->addChildren(*Transform221);

HAnimSegment219->addChildren(*Transform220);

CShape* Shape223 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet224 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet224->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA225 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA225->setUSE("HAnimSegmentLineColorRGBA");
LineSet224->setColor(*ColorRGBA225);

CCoordinate* Coordinate226 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate226->setPoint(new float[6]{0,1,0,0,1,0});
LineSet224->setCoord(*Coordinate226);

Shape223->setGeometry(LineSet224);

HAnimSegment219->addChildren(*Shape223);

CHAnimSite* HAnimSite227 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite227->setDEF("hanim_l_tarsal_distal_phalanx_1_tip");
HAnimSite227->setName("l_tarsal_distal_phalanx_1_tip");
HAnimSite227->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor228 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor228->setDescription("HAnimSite l_tarsal_distal_phalanx_1_tip");
HAnimSite227->addChildren(*TouchSensor228);

CShape* Shape229 = (CShape *)(m_pScene.createNode("Shape"));
Shape229->setUSE("HAnimSiteShape");
HAnimSite227->addChildren(*Shape229);

HAnimSegment219->addChildren(*HAnimSite227);

HAnimJoint218->addChildren(*HAnimSegment219);

CHAnimJoint* HAnimJoint230 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint230->setDEF("hanim_l_tarsal_interphalangeal_1");
HAnimJoint230->setName("l_tarsal_interphalangeal_1");
HAnimJoint230->setCenter(new float[3]{0,1,0});
HAnimJoint218->addChildren(*HAnimJoint230);

HAnimJoint206->addChildren(*HAnimJoint218);

HAnimJoint197->addChildren(*HAnimJoint206);

HAnimJoint180->addChildren(*HAnimJoint197);

CHAnimJoint* HAnimJoint231 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint231->setDEF("hanim_l_cuneonavicular_2");
HAnimJoint231->setName("l_cuneonavicular_2");
HAnimJoint231->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment232 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment232->setDEF("hanim_l_cuneiform_2");
HAnimSegment232->setName("l_cuneiform_2");
CTransform* Transform233 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform234 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape235 = (CShape *)(m_pScene.createNode("Shape"));
Shape235->setUSE("HAnimJointShape");
Transform234->addChild(*Shape235);

Transform233->addChildren(*Transform234);

HAnimSegment232->addChildren(*Transform233);

CShape* Shape236 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet237 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet237->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA238 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA238->setUSE("HAnimSegmentLineColorRGBA");
LineSet237->setColor(*ColorRGBA238);

CCoordinate* Coordinate239 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate239->setPoint(new float[6]{0,1,0,0,1,0});
LineSet237->setCoord(*Coordinate239);

Shape236->setGeometry(LineSet237);

HAnimSegment232->addChildren(*Shape236);

HAnimJoint231->addChildren(*HAnimSegment232);

CHAnimJoint* HAnimJoint240 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint240->setDEF("hanim_l_tarsometatarsal_2");
HAnimJoint240->setName("l_tarsometatarsal_2");
HAnimJoint240->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment241 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment241->setDEF("hanim_l_metatarsal_2");
HAnimSegment241->setName("l_metatarsal_2");
CTransform* Transform242 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform243 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape244 = (CShape *)(m_pScene.createNode("Shape"));
Shape244->setUSE("HAnimJointShape");
Transform243->addChild(*Shape244);

Transform242->addChildren(*Transform243);

HAnimSegment241->addChildren(*Transform242);

CShape* Shape245 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet246 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet246->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA247 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA247->setUSE("HAnimSegmentLineColorRGBA");
LineSet246->setColor(*ColorRGBA247);

CCoordinate* Coordinate248 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate248->setPoint(new float[6]{0,1,0,0,1,0});
LineSet246->setCoord(*Coordinate248);

Shape245->setGeometry(LineSet246);

HAnimSegment241->addChildren(*Shape245);

HAnimJoint240->addChildren(*HAnimSegment241);

CHAnimJoint* HAnimJoint249 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint249->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint249->setName("l_metatarsophalangeal_2");
HAnimJoint249->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment250 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment250->setDEF("hanim_l_tarsal_proximal_phalanx_2");
HAnimSegment250->setName("l_tarsal_proximal_phalanx_2");
CTransform* Transform251 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform252 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape253 = (CShape *)(m_pScene.createNode("Shape"));
Shape253->setUSE("HAnimJointShape");
Transform252->addChild(*Shape253);

Transform251->addChildren(*Transform252);

HAnimSegment250->addChildren(*Transform251);

CShape* Shape254 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet255 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet255->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA256 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA256->setUSE("HAnimSegmentLineColorRGBA");
LineSet255->setColor(*ColorRGBA256);

CCoordinate* Coordinate257 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate257->setPoint(new float[6]{0,1,0,0,1,0});
LineSet255->setCoord(*Coordinate257);

Shape254->setGeometry(LineSet255);

HAnimSegment250->addChildren(*Shape254);

HAnimJoint249->addChildren(*HAnimSegment250);

CHAnimJoint* HAnimJoint258 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint258->setDEF("hanim_l_tarsal_proximal_interphalangeal_1");
HAnimJoint258->setName("l_tarsal_proximal_interphalangeal_2");
HAnimJoint258->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment259 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment259->setDEF("hanim_l_tarsal_middle_phalanx_1");
HAnimSegment259->setName("l_tarsal_middle_phalanx_2");
CTransform* Transform260 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform261 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape262 = (CShape *)(m_pScene.createNode("Shape"));
Shape262->setUSE("HAnimJointShape");
Transform261->addChild(*Shape262);

Transform260->addChildren(*Transform261);

HAnimSegment259->addChildren(*Transform260);

CShape* Shape263 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet264 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet264->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA265 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA265->setUSE("HAnimSegmentLineColorRGBA");
LineSet264->setColor(*ColorRGBA265);

CCoordinate* Coordinate266 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate266->setPoint(new float[6]{0,1,0,0,1,0});
LineSet264->setCoord(*Coordinate266);

Shape263->setGeometry(LineSet264);

HAnimSegment259->addChildren(*Shape263);

CHAnimSite* HAnimSite267 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite267->setDEF("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimSite267->setName("l_tarsal_distal_phalanx_2_tip");
HAnimSite267->setTranslation(new float[3]{0.1195,0.0079,0.1433});
CTouchSensor* TouchSensor268 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor268->setDescription("HAnimSite l_tarsal_distal_phalanx_2_tip");
HAnimSite267->addChildren(*TouchSensor268);

CShape* Shape269 = (CShape *)(m_pScene.createNode("Shape"));
Shape269->setUSE("HAnimSiteShape");
HAnimSite267->addChildren(*Shape269);

HAnimSegment259->addChildren(*HAnimSite267);

HAnimJoint258->addChildren(*HAnimSegment259);

CHAnimJoint* HAnimJoint270 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint270->setDEF("hanim_l_tarsal_distal_interphalangeal_1");
HAnimJoint270->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint270->setCenter(new float[3]{0,1,0});
HAnimJoint258->addChildren(*HAnimJoint270);

HAnimJoint249->addChildren(*HAnimJoint258);

HAnimJoint240->addChildren(*HAnimJoint249);

HAnimJoint231->addChildren(*HAnimJoint240);

HAnimJoint180->addChildren(*HAnimJoint231);

CHAnimJoint* HAnimJoint271 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint271->setDEF("hanim_l_cuneonavicular_3");
HAnimJoint271->setName("l_cuneonavicular_3");
HAnimJoint271->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment272 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment272->setDEF("hanim_l_cuneiform_3");
HAnimSegment272->setName("l_cuneiform_3");
CTransform* Transform273 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform274 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape275 = (CShape *)(m_pScene.createNode("Shape"));
Shape275->setUSE("HAnimJointShape");
Transform274->addChild(*Shape275);

Transform273->addChildren(*Transform274);

HAnimSegment272->addChildren(*Transform273);

CShape* Shape276 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet277 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet277->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA278 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA278->setUSE("HAnimSegmentLineColorRGBA");
LineSet277->setColor(*ColorRGBA278);

CCoordinate* Coordinate279 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate279->setPoint(new float[6]{0,1,0,0,1,0});
LineSet277->setCoord(*Coordinate279);

Shape276->setGeometry(LineSet277);

HAnimSegment272->addChildren(*Shape276);

HAnimJoint271->addChildren(*HAnimSegment272);

CHAnimJoint* HAnimJoint280 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint280->setDEF("hanim_l_tarsometatarsal_3");
HAnimJoint280->setName("l_tarsometatarsal_3");
HAnimJoint280->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment281 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment281->setDEF("hanim_l_metatarsal_3");
HAnimSegment281->setName("l_metatarsal_3");
CTransform* Transform282 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform283 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape284 = (CShape *)(m_pScene.createNode("Shape"));
Shape284->setUSE("HAnimJointShape");
Transform283->addChild(*Shape284);

Transform282->addChildren(*Transform283);

HAnimSegment281->addChildren(*Transform282);

CShape* Shape285 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet286 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet286->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA287 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA287->setUSE("HAnimSegmentLineColorRGBA");
LineSet286->setColor(*ColorRGBA287);

CCoordinate* Coordinate288 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate288->setPoint(new float[6]{0,1,0,0,1,0});
LineSet286->setCoord(*Coordinate288);

Shape285->setGeometry(LineSet286);

HAnimSegment281->addChildren(*Shape285);

HAnimJoint280->addChildren(*HAnimSegment281);

CHAnimJoint* HAnimJoint289 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint289->setDEF("hanim_l_metatarsophalangeal_3");
HAnimJoint289->setName("l_metatarsophalangeal_3");
HAnimJoint289->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment290 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment290->setDEF("hanim_l_tarsal_proximal_phalanx_3");
HAnimSegment290->setName("l_tarsal_proximal_phalanx_3");
CTransform* Transform291 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform292 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape293 = (CShape *)(m_pScene.createNode("Shape"));
Shape293->setUSE("HAnimJointShape");
Transform292->addChild(*Shape293);

Transform291->addChildren(*Transform292);

HAnimSegment290->addChildren(*Transform291);

CShape* Shape294 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet295 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet295->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA296 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA296->setUSE("HAnimSegmentLineColorRGBA");
LineSet295->setColor(*ColorRGBA296);

CCoordinate* Coordinate297 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate297->setPoint(new float[6]{0,1,0,0,1,0});
LineSet295->setCoord(*Coordinate297);

Shape294->setGeometry(LineSet295);

HAnimSegment290->addChildren(*Shape294);

HAnimJoint289->addChildren(*HAnimSegment290);

CHAnimJoint* HAnimJoint298 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint298->setDEF("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimJoint298->setName("l_tarsal_proximal_interphalangeal_3");
HAnimJoint298->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment299 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment299->setDEF("hanim_l_tarsal_middle_phalanx_2");
HAnimSegment299->setName("l_tarsal_middle_phalanx_3");
CTransform* Transform300 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform301 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape302 = (CShape *)(m_pScene.createNode("Shape"));
Shape302->setUSE("HAnimJointShape");
Transform301->addChild(*Shape302);

Transform300->addChildren(*Transform301);

HAnimSegment299->addChildren(*Transform300);

CShape* Shape303 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet304 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet304->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA305 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA305->setUSE("HAnimSegmentLineColorRGBA");
LineSet304->setColor(*ColorRGBA305);

CCoordinate* Coordinate306 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate306->setPoint(new float[6]{0,1,0,0,1,0});
LineSet304->setCoord(*Coordinate306);

Shape303->setGeometry(LineSet304);

HAnimSegment299->addChildren(*Shape303);

CHAnimSite* HAnimSite307 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite307->setDEF("hanim_l_tarsal_distal_phalanx_3_tip");
HAnimSite307->setName("l_tarsal_distal_phalanx_3_tip");
HAnimSite307->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor308 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor308->setDescription("HAnimSite l_tarsal_distal_phalanx_3_tip");
HAnimSite307->addChildren(*TouchSensor308);

CShape* Shape309 = (CShape *)(m_pScene.createNode("Shape"));
Shape309->setUSE("HAnimSiteShape");
HAnimSite307->addChildren(*Shape309);

HAnimSegment299->addChildren(*HAnimSite307);

HAnimJoint298->addChildren(*HAnimSegment299);

CHAnimJoint* HAnimJoint310 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint310->setDEF("hanim_l_tarsal_distal_interphalangeal_2");
HAnimJoint310->setName("l_tarsal_distal_interphalangeal_3");
HAnimJoint310->setCenter(new float[3]{0,1,0});
HAnimJoint298->addChildren(*HAnimJoint310);

HAnimJoint289->addChildren(*HAnimJoint298);

HAnimJoint280->addChildren(*HAnimJoint289);

HAnimJoint271->addChildren(*HAnimJoint280);

HAnimJoint180->addChildren(*HAnimJoint271);

HAnimJoint167->addChildren(*HAnimJoint180);

CHAnimJoint* HAnimJoint311 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint311->setDEF("hanim_l_calcaneocuboid");
HAnimJoint311->setName("l_calcaneocuboid");
HAnimJoint311->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment312 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment312->setDEF("hanim_l_calcaneus");
HAnimSegment312->setName("l_calcaneus");
CTransform* Transform313 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform314 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape315 = (CShape *)(m_pScene.createNode("Shape"));
Shape315->setUSE("HAnimJointShape");
Transform314->addChild(*Shape315);

Transform313->addChildren(*Transform314);

HAnimSegment312->addChildren(*Transform313);

CShape* Shape316 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet317 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet317->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA318 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA318->setUSE("HAnimSegmentLineColorRGBA");
LineSet317->setColor(*ColorRGBA318);

CCoordinate* Coordinate319 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate319->setPoint(new float[6]{0,1,0,0,1,0});
LineSet317->setCoord(*Coordinate319);

Shape316->setGeometry(LineSet317);

HAnimSegment312->addChildren(*Shape316);

HAnimJoint311->addChildren(*HAnimSegment312);

CHAnimJoint* HAnimJoint320 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint320->setDEF("hanim_l_transversetarsal");
HAnimJoint320->setName("l_transversetarsal");
HAnimJoint320->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment321 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment321->setDEF("hanim_l_cuboid");
HAnimSegment321->setName("l_cuboid");
CTransform* Transform322 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform323 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape324 = (CShape *)(m_pScene.createNode("Shape"));
Shape324->setUSE("HAnimJointShape");
Transform323->addChild(*Shape324);

Transform322->addChildren(*Transform323);

HAnimSegment321->addChildren(*Transform322);

CShape* Shape325 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet326 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet326->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA327 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA327->setUSE("HAnimSegmentLineColorRGBA");
LineSet326->setColor(*ColorRGBA327);

CCoordinate* Coordinate328 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate328->setPoint(new float[6]{0,1,0,0,1,0});
LineSet326->setCoord(*Coordinate328);

Shape325->setGeometry(LineSet326);

HAnimSegment321->addChildren(*Shape325);

CShape* Shape329 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet330 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet330->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA331 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA331->setUSE("HAnimSegmentLineColorRGBA");
LineSet330->setColor(*ColorRGBA331);

CCoordinate* Coordinate332 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate332->setPoint(new float[6]{0,1,0,0,1,0});
LineSet330->setCoord(*Coordinate332);

Shape329->setGeometry(LineSet330);

HAnimSegment321->addChildren(*Shape329);

HAnimJoint320->addChildren(*HAnimSegment321);

CHAnimJoint* HAnimJoint333 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint333->setDEF("hanim_l_tarsometatarsal_4");
HAnimJoint333->setName("l_tarsometatarsal_4");
HAnimJoint333->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment334 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment334->setDEF("hanim_l_metatarsal_4");
HAnimSegment334->setName("l_metatarsal_4");
CTransform* Transform335 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform336 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape337 = (CShape *)(m_pScene.createNode("Shape"));
Shape337->setUSE("HAnimJointShape");
Transform336->addChild(*Shape337);

Transform335->addChildren(*Transform336);

HAnimSegment334->addChildren(*Transform335);

CShape* Shape338 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet339 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet339->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA340 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA340->setUSE("HAnimSegmentLineColorRGBA");
LineSet339->setColor(*ColorRGBA340);

CCoordinate* Coordinate341 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate341->setPoint(new float[6]{0,1,0,0,1,0});
LineSet339->setCoord(*Coordinate341);

Shape338->setGeometry(LineSet339);

HAnimSegment334->addChildren(*Shape338);

HAnimJoint333->addChildren(*HAnimSegment334);

CHAnimJoint* HAnimJoint342 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint342->setDEF("hanim_l_metatarsophalangeal_4");
HAnimJoint342->setName("l_metatarsophalangeal_4");
HAnimJoint342->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment343 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment343->setDEF("hanim_l_tarsal_proximal_phalanx_4");
HAnimSegment343->setName("l_tarsal_proximal_phalanx_4");
CTransform* Transform344 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform345 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape346 = (CShape *)(m_pScene.createNode("Shape"));
Shape346->setUSE("HAnimJointShape");
Transform345->addChild(*Shape346);

Transform344->addChildren(*Transform345);

HAnimSegment343->addChildren(*Transform344);

CShape* Shape347 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet348 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet348->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA349 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA349->setUSE("HAnimSegmentLineColorRGBA");
LineSet348->setColor(*ColorRGBA349);

CCoordinate* Coordinate350 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate350->setPoint(new float[6]{0,1,0,0,1,0});
LineSet348->setCoord(*Coordinate350);

Shape347->setGeometry(LineSet348);

HAnimSegment343->addChildren(*Shape347);

HAnimJoint342->addChildren(*HAnimSegment343);

CHAnimJoint* HAnimJoint351 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint351->setDEF("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimJoint351->setName("l_tarsal_proximal_interphalangeal_4");
HAnimJoint351->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment352 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment352->setDEF("hanim_l_tarsal_middle_phalanx_3");
HAnimSegment352->setName("l_tarsal_middle_phalanx_4");
CTransform* Transform353 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform354 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape355 = (CShape *)(m_pScene.createNode("Shape"));
Shape355->setUSE("HAnimJointShape");
Transform354->addChild(*Shape355);

Transform353->addChildren(*Transform354);

HAnimSegment352->addChildren(*Transform353);

CShape* Shape356 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet357 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet357->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA358 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA358->setUSE("HAnimSegmentLineColorRGBA");
LineSet357->setColor(*ColorRGBA358);

CCoordinate* Coordinate359 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate359->setPoint(new float[6]{0,1,0,0,1,0});
LineSet357->setCoord(*Coordinate359);

Shape356->setGeometry(LineSet357);

HAnimSegment352->addChildren(*Shape356);

CHAnimSite* HAnimSite360 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite360->setDEF("hanim_l_tarsal_distal_phalanx_4_tip");
HAnimSite360->setName("l_tarsal_distal_phalanx_4_tip");
HAnimSite360->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor361 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor361->setDescription("HAnimSite l_tarsal_distal_phalanx_4_tip");
HAnimSite360->addChildren(*TouchSensor361);

CShape* Shape362 = (CShape *)(m_pScene.createNode("Shape"));
Shape362->setUSE("HAnimSiteShape");
HAnimSite360->addChildren(*Shape362);

HAnimSegment352->addChildren(*HAnimSite360);

HAnimJoint351->addChildren(*HAnimSegment352);

CHAnimJoint* HAnimJoint363 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint363->setDEF("hanim_l_tarsal_distal_interphalangeal_3");
HAnimJoint363->setName("l_tarsal_distal_interphalangeal_4");
HAnimJoint363->setCenter(new float[3]{0,1,0});
HAnimJoint351->addChildren(*HAnimJoint363);

HAnimJoint342->addChildren(*HAnimJoint351);

HAnimJoint333->addChildren(*HAnimJoint342);

HAnimJoint320->addChildren(*HAnimJoint333);

CHAnimJoint* HAnimJoint364 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint364->setDEF("hanim_l_tarsometatarsal_5");
HAnimJoint364->setName("l_tarsometatarsal_5");
HAnimJoint364->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment365 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment365->setDEF("hanim_l_metatarsal_5");
HAnimSegment365->setName("l_metatarsal_5");
CTransform* Transform366 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform367 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape368 = (CShape *)(m_pScene.createNode("Shape"));
Shape368->setUSE("HAnimJointShape");
Transform367->addChild(*Shape368);

Transform366->addChildren(*Transform367);

HAnimSegment365->addChildren(*Transform366);

CShape* Shape369 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet370 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet370->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA371 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA371->setUSE("HAnimSegmentLineColorRGBA");
LineSet370->setColor(*ColorRGBA371);

CCoordinate* Coordinate372 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate372->setPoint(new float[6]{0,1,0,0,1,0});
LineSet370->setCoord(*Coordinate372);

Shape369->setGeometry(LineSet370);

HAnimSegment365->addChildren(*Shape369);

CHAnimSite* HAnimSite373 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite373->setDEF("hanim_l_metatarsal_phalanx_5_pt");
HAnimSite373->setName("l_metatarsal_phalanx_5_pt");
HAnimSite373->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor374 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor374->setDescription("HAnimSite l_metatarsal_phalanx_5_pt");
HAnimSite373->addChildren(*TouchSensor374);

CShape* Shape375 = (CShape *)(m_pScene.createNode("Shape"));
Shape375->setUSE("HAnimSiteShape");
HAnimSite373->addChildren(*Shape375);

HAnimSegment365->addChildren(*HAnimSite373);

HAnimJoint364->addChildren(*HAnimSegment365);

CHAnimJoint* HAnimJoint376 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint376->setDEF("hanim_l_metatarsophalangeal_5");
HAnimJoint376->setName("l_metatarsophalangeal_5");
HAnimJoint376->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment377 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment377->setDEF("hanim_l_tarsal_proximal_phalanx_5");
HAnimSegment377->setName("l_tarsal_proximal_phalanx_5");
CTransform* Transform378 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform379 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape380 = (CShape *)(m_pScene.createNode("Shape"));
Shape380->setUSE("HAnimJointShape");
Transform379->addChild(*Shape380);

Transform378->addChildren(*Transform379);

HAnimSegment377->addChildren(*Transform378);

CShape* Shape381 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet382 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet382->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA383 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA383->setUSE("HAnimSegmentLineColorRGBA");
LineSet382->setColor(*ColorRGBA383);

CCoordinate* Coordinate384 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate384->setPoint(new float[6]{0,1,0,0,1,0});
LineSet382->setCoord(*Coordinate384);

Shape381->setGeometry(LineSet382);

HAnimSegment377->addChildren(*Shape381);

HAnimJoint376->addChildren(*HAnimSegment377);

CHAnimJoint* HAnimJoint385 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint385->setDEF("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimJoint385->setName("l_tarsal_proximal_interphalangeal_5");
HAnimJoint385->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment386 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment386->setDEF("hanim_l_tarsal_middle_phalanx_4");
HAnimSegment386->setName("l_tarsal_middle_phalanx_5");
CTransform* Transform387 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform388 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape389 = (CShape *)(m_pScene.createNode("Shape"));
Shape389->setUSE("HAnimJointShape");
Transform388->addChild(*Shape389);

Transform387->addChildren(*Transform388);

HAnimSegment386->addChildren(*Transform387);

CShape* Shape390 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet391 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet391->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA392 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA392->setUSE("HAnimSegmentLineColorRGBA");
LineSet391->setColor(*ColorRGBA392);

CCoordinate* Coordinate393 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate393->setPoint(new float[6]{0,1,0,0,1,0});
LineSet391->setCoord(*Coordinate393);

Shape390->setGeometry(LineSet391);

HAnimSegment386->addChildren(*Shape390);

CHAnimSite* HAnimSite394 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite394->setDEF("hanim_l_tarsal_distal_phalanx_5_tip");
HAnimSite394->setName("l_tarsal_distal_phalanx_5_tip");
HAnimSite394->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor395 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor395->setDescription("HAnimSite l_tarsal_distal_phalanx_5_tip");
HAnimSite394->addChildren(*TouchSensor395);

CShape* Shape396 = (CShape *)(m_pScene.createNode("Shape"));
Shape396->setUSE("HAnimSiteShape");
HAnimSite394->addChildren(*Shape396);

HAnimSegment386->addChildren(*HAnimSite394);

HAnimJoint385->addChildren(*HAnimSegment386);

CHAnimJoint* HAnimJoint397 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint397->setDEF("hanim_l_tarsal_distal_interphalangeal_4");
HAnimJoint397->setName("l_tarsal_distal_interphalangeal_5");
HAnimJoint397->setCenter(new float[3]{0,1,0});
HAnimJoint385->addChildren(*HAnimJoint397);

HAnimJoint376->addChildren(*HAnimJoint385);

HAnimJoint364->addChildren(*HAnimJoint376);

HAnimJoint320->addChildren(*HAnimJoint364);

HAnimJoint311->addChildren(*HAnimJoint320);

HAnimJoint167->addChildren(*HAnimJoint311);

HAnimJoint152->addChildren(*HAnimJoint167);

HAnimJoint134->addChildren(*HAnimJoint152);

HAnimJoint97->addChildren(*HAnimJoint134);

CHAnimJoint* HAnimJoint398 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint398->setDEF("hanim_r_hip");
HAnimJoint398->setName("r_hip");
HAnimJoint398->setCenter(new float[3]{-0.095,0.9171,0.0029});
CHAnimSegment* HAnimSegment399 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment399->setDEF("hanim_r_thigh");
HAnimSegment399->setName("r_thigh");
CTransform* Transform400 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform401 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape402 = (CShape *)(m_pScene.createNode("Shape"));
Shape402->setUSE("HAnimJointShape");
Transform401->addChild(*Shape402);

Transform400->addChildren(*Transform401);

HAnimSegment399->addChildren(*Transform400);

CShape* Shape403 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet404 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet404->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA405 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA405->setUSE("HAnimSegmentLineColorRGBA");
LineSet404->setColor(*ColorRGBA405);

CCoordinate* Coordinate406 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate406->setPoint(new float[6]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318});
LineSet404->setCoord(*Coordinate406);

Shape403->setGeometry(LineSet404);

HAnimSegment399->addChildren(*Shape403);

CHAnimSite* HAnimSite407 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite407->setDEF("hanim_r_lateral_malleolus_pt");
HAnimSite407->setName("r_lateral_malleolus_pt");
HAnimSite407->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
CTouchSensor* TouchSensor408 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor408->setDescription("HAnimSite r_lateral_malleolus_pt");
HAnimSite407->addChildren(*TouchSensor408);

CShape* Shape409 = (CShape *)(m_pScene.createNode("Shape"));
Shape409->setUSE("HAnimSiteShape");
HAnimSite407->addChildren(*Shape409);

HAnimSegment399->addChildren(*HAnimSite407);

CHAnimSite* HAnimSite410 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite410->setDEF("hanim_r_medial_malleolus_pt");
HAnimSite410->setName("r_medial_malleolus_pt");
HAnimSite410->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
CTouchSensor* TouchSensor411 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor411->setDescription("HAnimSite r_medial_malleolus_pt");
HAnimSite410->addChildren(*TouchSensor411);

CShape* Shape412 = (CShape *)(m_pScene.createNode("Shape"));
Shape412->setUSE("HAnimSiteShape");
HAnimSite410->addChildren(*Shape412);

HAnimSegment399->addChildren(*HAnimSite410);

CHAnimSite* HAnimSite413 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite413->setDEF("hanim_r_tibiale_pt");
HAnimSite413->setName("r_tibiale_pt");
HAnimSite413->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor414 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor414->setDescription("HAnimSite r_tibiale_pt");
HAnimSite413->addChildren(*TouchSensor414);

CShape* Shape415 = (CShape *)(m_pScene.createNode("Shape"));
Shape415->setUSE("HAnimSiteShape");
HAnimSite413->addChildren(*Shape415);

HAnimSegment399->addChildren(*HAnimSite413);

HAnimJoint398->addChildren(*HAnimSegment399);

CHAnimJoint* HAnimJoint416 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint416->setDEF("hanim_r_knee");
HAnimJoint416->setName("r_knee");
HAnimJoint416->setCenter(new float[3]{-0.0867,0.4913,0.0318});
CHAnimSegment* HAnimSegment417 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment417->setDEF("hanim_r_calf");
HAnimSegment417->setName("r_calf");
CTransform* Transform418 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform419 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape420 = (CShape *)(m_pScene.createNode("Shape"));
Shape420->setUSE("HAnimJointShape");
Transform419->addChild(*Shape420);

Transform418->addChildren(*Transform419);

HAnimSegment417->addChildren(*Transform418);

CShape* Shape421 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet422 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet422->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA423 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA423->setUSE("HAnimSegmentLineColorRGBA");
LineSet422->setColor(*ColorRGBA423);

CCoordinate* Coordinate424 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate424->setPoint(new float[6]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766});
LineSet422->setCoord(*Coordinate424);

Shape421->setGeometry(LineSet422);

HAnimSegment417->addChildren(*Shape421);

CHAnimSite* HAnimSite425 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite425->setDEF("hanim_r_calcaneus_posterior_pt");
HAnimSite425->setName("r_calcaneus_posterior_pt");
HAnimSite425->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
CTouchSensor* TouchSensor426 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor426->setDescription("HAnimSite r_calcaneus_posterior_pt");
HAnimSite425->addChildren(*TouchSensor426);

CShape* Shape427 = (CShape *)(m_pScene.createNode("Shape"));
Shape427->setUSE("HAnimSiteShape");
HAnimSite425->addChildren(*Shape427);

HAnimSegment417->addChildren(*HAnimSite425);

CHAnimSite* HAnimSite428 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite428->setDEF("hanim_r_sphyrion_pt");
HAnimSite428->setName("r_sphyrion_pt");
HAnimSite428->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
CTouchSensor* TouchSensor429 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor429->setDescription("HAnimSite r_sphyrion_pt");
HAnimSite428->addChildren(*TouchSensor429);

CShape* Shape430 = (CShape *)(m_pScene.createNode("Shape"));
Shape430->setUSE("HAnimSiteShape");
HAnimSite428->addChildren(*Shape430);

HAnimSegment417->addChildren(*HAnimSite428);

HAnimJoint416->addChildren(*HAnimSegment417);

CHAnimJoint* HAnimJoint431 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint431->setDEF("hanim_r_talocrural");
HAnimJoint431->setName("r_talocrural");
HAnimJoint431->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
CHAnimSegment* HAnimSegment432 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment432->setDEF("hanim_r_talus");
HAnimSegment432->setName("r_talus");
CTransform* Transform433 = (CTransform *)(m_pScene.createNode("Transform"));
Transform433->setTranslation(new float[3]{-0.05,0.06,-0.025});
Transform433->setRotation(new float[4]{1,0,0,-1.57});
Transform433->setScale(new float[3]{0.15,0.15,0.15});
CTransform* Transform434 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape435 = (CShape *)(m_pScene.createNode("Shape"));
Shape435->setUSE("HAnimJointShape");
Transform434->addChild(*Shape435);

Transform433->addChildren(*Transform434);

HAnimSegment432->addChildren(*Transform433);

CShape* Shape436 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet437 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet437->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA438 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA438->setUSE("HAnimSegmentLineColorRGBA");
LineSet437->setColor(*ColorRGBA438);

CCoordinate* Coordinate439 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate439->setPoint(new float[6]{-0.0801,0.0712,-0.0766,0,1,0});
LineSet437->setCoord(*Coordinate439);

Shape436->setGeometry(LineSet437);

HAnimSegment432->addChildren(*Shape436);

CShape* Shape440 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet441 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet441->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA442 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA442->setUSE("HAnimSegmentLineColorRGBA");
LineSet441->setColor(*ColorRGBA442);

CCoordinate* Coordinate443 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate443->setPoint(new float[6]{-0.0801,0.0712,-0.0766,0,1,0});
LineSet441->setCoord(*Coordinate443);

Shape440->setGeometry(LineSet441);

HAnimSegment432->addChildren(*Shape440);

HAnimJoint431->addChildren(*HAnimSegment432);

CHAnimJoint* HAnimJoint444 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint444->setDEF("hanim_r_talocalcaneonavicular");
HAnimJoint444->setName("r_talocalcaneonavicular");
HAnimJoint444->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment445 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment445->setDEF("hanim_r_navicular");
HAnimSegment445->setName("r_navicular");
CTransform* Transform446 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform447 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape448 = (CShape *)(m_pScene.createNode("Shape"));
Shape448->setUSE("HAnimJointShape");
Transform447->addChild(*Shape448);

Transform446->addChildren(*Transform447);

HAnimSegment445->addChildren(*Transform446);

CShape* Shape449 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet450 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet450->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA451 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA451->setUSE("HAnimSegmentLineColorRGBA");
LineSet450->setColor(*ColorRGBA451);

CCoordinate* Coordinate452 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate452->setPoint(new float[6]{0,1,0,0,1,0});
LineSet450->setCoord(*Coordinate452);

Shape449->setGeometry(LineSet450);

HAnimSegment445->addChildren(*Shape449);

CShape* Shape453 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet454 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet454->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA455 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA455->setUSE("HAnimSegmentLineColorRGBA");
LineSet454->setColor(*ColorRGBA455);

CCoordinate* Coordinate456 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate456->setPoint(new float[6]{0,1,0,0,1,0});
LineSet454->setCoord(*Coordinate456);

Shape453->setGeometry(LineSet454);

HAnimSegment445->addChildren(*Shape453);

CShape* Shape457 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet458 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet458->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA459 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA459->setUSE("HAnimSegmentLineColorRGBA");
LineSet458->setColor(*ColorRGBA459);

CCoordinate* Coordinate460 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate460->setPoint(new float[6]{0,1,0,0,1,0});
LineSet458->setCoord(*Coordinate460);

Shape457->setGeometry(LineSet458);

HAnimSegment445->addChildren(*Shape457);

HAnimJoint444->addChildren(*HAnimSegment445);

CHAnimJoint* HAnimJoint461 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint461->setDEF("hanim_r_cuneonavicular_1");
HAnimJoint461->setName("r_cuneonavicular_1");
HAnimJoint461->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment462 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment462->setDEF("hanim_r_cuneiform_1");
HAnimSegment462->setName("r_cuneiform_1");
CTransform* Transform463 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform464 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape465 = (CShape *)(m_pScene.createNode("Shape"));
Shape465->setUSE("HAnimJointShape");
Transform464->addChild(*Shape465);

Transform463->addChildren(*Transform464);

HAnimSegment462->addChildren(*Transform463);

CShape* Shape466 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet467 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet467->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA468 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA468->setUSE("HAnimSegmentLineColorRGBA");
LineSet467->setColor(*ColorRGBA468);

CCoordinate* Coordinate469 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate469->setPoint(new float[6]{0,1,0,0,1,0});
LineSet467->setCoord(*Coordinate469);

Shape466->setGeometry(LineSet467);

HAnimSegment462->addChildren(*Shape466);

HAnimJoint461->addChildren(*HAnimSegment462);

CHAnimJoint* HAnimJoint470 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint470->setDEF("hanim_r_tarsometatarsal_1");
HAnimJoint470->setName("r_tarsometatarsal_1");
HAnimJoint470->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment471 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment471->setDEF("hanim_r_metatarsal_1");
HAnimSegment471->setName("r_metatarsal_1");
CTransform* Transform472 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform473 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape474 = (CShape *)(m_pScene.createNode("Shape"));
Shape474->setUSE("HAnimJointShape");
Transform473->addChild(*Shape474);

Transform472->addChildren(*Transform473);

HAnimSegment471->addChildren(*Transform472);

CShape* Shape475 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet476 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet476->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA477 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA477->setUSE("HAnimSegmentLineColorRGBA");
LineSet476->setColor(*ColorRGBA477);

CCoordinate* Coordinate478 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate478->setPoint(new float[6]{0,1,0,0,1,0});
LineSet476->setCoord(*Coordinate478);

Shape475->setGeometry(LineSet476);

HAnimSegment471->addChildren(*Shape475);

CHAnimSite* HAnimSite479 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite479->setDEF("hanim_r_metatarsal_phalanx_1_pt");
HAnimSite479->setName("r_metatarsal_phalanx_1_pt");
HAnimSite479->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor480 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor480->setDescription("HAnimSite r_metatarsal_phalanx_1_pt");
HAnimSite479->addChildren(*TouchSensor480);

CShape* Shape481 = (CShape *)(m_pScene.createNode("Shape"));
Shape481->setUSE("HAnimSiteShape");
HAnimSite479->addChildren(*Shape481);

HAnimSegment471->addChildren(*HAnimSite479);

HAnimJoint470->addChildren(*HAnimSegment471);

CHAnimJoint* HAnimJoint482 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint482->setDEF("hanim_r_metatarsophalangeal_1");
HAnimJoint482->setName("r_metatarsophalangeal_1");
HAnimJoint482->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment483 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment483->setDEF("hanim_r_tarsal_proximal_phalanx_1");
HAnimSegment483->setName("r_tarsal_proximal_phalanx_1");
CTransform* Transform484 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform485 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape486 = (CShape *)(m_pScene.createNode("Shape"));
Shape486->setUSE("HAnimJointShape");
Transform485->addChild(*Shape486);

Transform484->addChildren(*Transform485);

HAnimSegment483->addChildren(*Transform484);

CShape* Shape487 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet488 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet488->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA489 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA489->setUSE("HAnimSegmentLineColorRGBA");
LineSet488->setColor(*ColorRGBA489);

CCoordinate* Coordinate490 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate490->setPoint(new float[6]{0,1,0,0,1,0});
LineSet488->setCoord(*Coordinate490);

Shape487->setGeometry(LineSet488);

HAnimSegment483->addChildren(*Shape487);

CHAnimSite* HAnimSite491 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite491->setDEF("hanim_r_tarsal_distal_phalanx_1_tip");
HAnimSite491->setName("r_tarsal_distal_phalanx_1_tip");
HAnimSite491->setTranslation(new float[3]{0.1,-1.05,0});
CTouchSensor* TouchSensor492 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor492->setDescription("HAnimSite r_tarsal_distal_phalanx_1_tip");
HAnimSite491->addChildren(*TouchSensor492);

CShape* Shape493 = (CShape *)(m_pScene.createNode("Shape"));
Shape493->setUSE("HAnimSiteShape");
HAnimSite491->addChildren(*Shape493);

HAnimSegment483->addChildren(*HAnimSite491);

HAnimJoint482->addChildren(*HAnimSegment483);

CHAnimJoint* HAnimJoint494 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint494->setDEF("hanim_r_tarsal_interphalangeal_1");
HAnimJoint494->setName("r_tarsal_interphalangeal_1");
HAnimJoint494->setCenter(new float[3]{0,1,0});
HAnimJoint482->addChildren(*HAnimJoint494);

HAnimJoint470->addChildren(*HAnimJoint482);

HAnimJoint461->addChildren(*HAnimJoint470);

HAnimJoint444->addChildren(*HAnimJoint461);

CHAnimJoint* HAnimJoint495 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint495->setDEF("hanim_r_cuneonavicular_2");
HAnimJoint495->setName("r_cuneonavicular_2");
HAnimJoint495->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment496 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment496->setDEF("hanim_r_cuneiform_2");
HAnimSegment496->setName("r_cuneiform_2");
CTransform* Transform497 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform498 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape499 = (CShape *)(m_pScene.createNode("Shape"));
Shape499->setUSE("HAnimJointShape");
Transform498->addChild(*Shape499);

Transform497->addChildren(*Transform498);

HAnimSegment496->addChildren(*Transform497);

CShape* Shape500 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet501 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet501->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA502 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA502->setUSE("HAnimSegmentLineColorRGBA");
LineSet501->setColor(*ColorRGBA502);

CCoordinate* Coordinate503 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate503->setPoint(new float[6]{0,1,0,0,1,0});
LineSet501->setCoord(*Coordinate503);

Shape500->setGeometry(LineSet501);

HAnimSegment496->addChildren(*Shape500);

HAnimJoint495->addChildren(*HAnimSegment496);

CHAnimJoint* HAnimJoint504 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint504->setDEF("hanim_r_tarsometatarsal_2");
HAnimJoint504->setName("r_tarsometatarsal_2");
HAnimJoint504->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment505 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment505->setDEF("hanim_r_metatarsal_2");
HAnimSegment505->setName("r_metatarsal_2");
CTransform* Transform506 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform507 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape508 = (CShape *)(m_pScene.createNode("Shape"));
Shape508->setUSE("HAnimJointShape");
Transform507->addChild(*Shape508);

Transform506->addChildren(*Transform507);

HAnimSegment505->addChildren(*Transform506);

CShape* Shape509 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet510 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet510->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA511 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA511->setUSE("HAnimSegmentLineColorRGBA");
LineSet510->setColor(*ColorRGBA511);

CCoordinate* Coordinate512 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate512->setPoint(new float[6]{0,1,0,0,1,0});
LineSet510->setCoord(*Coordinate512);

Shape509->setGeometry(LineSet510);

HAnimSegment505->addChildren(*Shape509);

HAnimJoint504->addChildren(*HAnimSegment505);

CHAnimJoint* HAnimJoint513 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint513->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint513->setName("r_metatarsophalangeal_2");
HAnimJoint513->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment514 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment514->setDEF("hanim_r_tarsal_proximal_phalanx_2");
HAnimSegment514->setName("r_tarsal_proximal_phalanx_2");
CTransform* Transform515 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform516 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape517 = (CShape *)(m_pScene.createNode("Shape"));
Shape517->setUSE("HAnimJointShape");
Transform516->addChild(*Shape517);

Transform515->addChildren(*Transform516);

HAnimSegment514->addChildren(*Transform515);

CShape* Shape518 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet519 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet519->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA520 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA520->setUSE("HAnimSegmentLineColorRGBA");
LineSet519->setColor(*ColorRGBA520);

CCoordinate* Coordinate521 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate521->setPoint(new float[6]{0,1,0,0,1,0});
LineSet519->setCoord(*Coordinate521);

Shape518->setGeometry(LineSet519);

HAnimSegment514->addChildren(*Shape518);

HAnimJoint513->addChildren(*HAnimSegment514);

CHAnimJoint* HAnimJoint522 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint522->setDEF("hanim_r_tarsal_proximal_interphalangeal_1");
HAnimJoint522->setName("r_tarsal_proximal_interphalangeal_2");
HAnimJoint522->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment523 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment523->setDEF("hanim_r_tarsal_middle_phalanx_1");
HAnimSegment523->setName("r_tarsal_middle_phalanx_2");
CTransform* Transform524 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform525 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape526 = (CShape *)(m_pScene.createNode("Shape"));
Shape526->setUSE("HAnimJointShape");
Transform525->addChild(*Shape526);

Transform524->addChildren(*Transform525);

HAnimSegment523->addChildren(*Transform524);

CShape* Shape527 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet528 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet528->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA529 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA529->setUSE("HAnimSegmentLineColorRGBA");
LineSet528->setColor(*ColorRGBA529);

CCoordinate* Coordinate530 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate530->setPoint(new float[6]{0,1,0,0,1,0});
LineSet528->setCoord(*Coordinate530);

Shape527->setGeometry(LineSet528);

HAnimSegment523->addChildren(*Shape527);

CHAnimSite* HAnimSite531 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite531->setDEF("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimSite531->setName("r_tarsal_distal_phalanx_2_tip");
HAnimSite531->setTranslation(new float[3]{-0.05,-1.12,0});
CTouchSensor* TouchSensor532 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor532->setDescription("HAnimSite r_tarsal_distal_phalanx_2_tip");
HAnimSite531->addChildren(*TouchSensor532);

CShape* Shape533 = (CShape *)(m_pScene.createNode("Shape"));
Shape533->setUSE("HAnimSiteShape");
HAnimSite531->addChildren(*Shape533);

HAnimSegment523->addChildren(*HAnimSite531);

HAnimJoint522->addChildren(*HAnimSegment523);

CHAnimJoint* HAnimJoint534 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint534->setDEF("hanim_r_tarsal_distal_interphalangeal_1");
HAnimJoint534->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint534->setCenter(new float[3]{0,1,0});
HAnimJoint522->addChildren(*HAnimJoint534);

HAnimJoint513->addChildren(*HAnimJoint522);

HAnimJoint504->addChildren(*HAnimJoint513);

HAnimJoint495->addChildren(*HAnimJoint504);

HAnimJoint444->addChildren(*HAnimJoint495);

CHAnimJoint* HAnimJoint535 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint535->setDEF("hanim_r_cuneonavicular_3");
HAnimJoint535->setName("r_cuneonavicular_3");
HAnimJoint535->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment536 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment536->setDEF("hanim_r_cuneiform_3");
HAnimSegment536->setName("r_cuneiform_3");
CTransform* Transform537 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform538 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape539 = (CShape *)(m_pScene.createNode("Shape"));
Shape539->setUSE("HAnimJointShape");
Transform538->addChild(*Shape539);

Transform537->addChildren(*Transform538);

HAnimSegment536->addChildren(*Transform537);

CShape* Shape540 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet541 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet541->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA542 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA542->setUSE("HAnimSegmentLineColorRGBA");
LineSet541->setColor(*ColorRGBA542);

CCoordinate* Coordinate543 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate543->setPoint(new float[6]{0,1,0,0,1,0});
LineSet541->setCoord(*Coordinate543);

Shape540->setGeometry(LineSet541);

HAnimSegment536->addChildren(*Shape540);

HAnimJoint535->addChildren(*HAnimSegment536);

CHAnimJoint* HAnimJoint544 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint544->setDEF("hanim_r_tarsometatarsal_3");
HAnimJoint544->setName("r_tarsometatarsal_3");
HAnimJoint544->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment545 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment545->setDEF("hanim_r_metatarsal_3");
HAnimSegment545->setName("r_metatarsal_3");
CTransform* Transform546 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform547 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape548 = (CShape *)(m_pScene.createNode("Shape"));
Shape548->setUSE("HAnimJointShape");
Transform547->addChild(*Shape548);

Transform546->addChildren(*Transform547);

HAnimSegment545->addChildren(*Transform546);

CShape* Shape549 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet550 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet550->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA551 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA551->setUSE("HAnimSegmentLineColorRGBA");
LineSet550->setColor(*ColorRGBA551);

CCoordinate* Coordinate552 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate552->setPoint(new float[6]{0,1,0,0,1,0});
LineSet550->setCoord(*Coordinate552);

Shape549->setGeometry(LineSet550);

HAnimSegment545->addChildren(*Shape549);

HAnimJoint544->addChildren(*HAnimSegment545);

CHAnimJoint* HAnimJoint553 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint553->setDEF("hanim_r_metatarsophalangeal_3");
HAnimJoint553->setName("r_metatarsophalangeal_3");
HAnimJoint553->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment554 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment554->setDEF("hanim_r_tarsal_proximal_phalanx_3");
HAnimSegment554->setName("r_tarsal_proximal_phalanx_3");
CTransform* Transform555 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform556 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape557 = (CShape *)(m_pScene.createNode("Shape"));
Shape557->setUSE("HAnimJointShape");
Transform556->addChild(*Shape557);

Transform555->addChildren(*Transform556);

HAnimSegment554->addChildren(*Transform555);

CShape* Shape558 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet559 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet559->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA560 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA560->setUSE("HAnimSegmentLineColorRGBA");
LineSet559->setColor(*ColorRGBA560);

CCoordinate* Coordinate561 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate561->setPoint(new float[6]{0,1,0,0,1,0});
LineSet559->setCoord(*Coordinate561);

Shape558->setGeometry(LineSet559);

HAnimSegment554->addChildren(*Shape558);

HAnimJoint553->addChildren(*HAnimSegment554);

CHAnimJoint* HAnimJoint562 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint562->setDEF("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimJoint562->setName("r_tarsal_proximal_interphalangeal_3");
HAnimJoint562->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment563 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment563->setDEF("hanim_r_tarsal_middle_phalanx_2");
HAnimSegment563->setName("r_tarsal_middle_phalanx_3");
CTransform* Transform564 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform565 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape566 = (CShape *)(m_pScene.createNode("Shape"));
Shape566->setUSE("HAnimJointShape");
Transform565->addChild(*Shape566);

Transform564->addChildren(*Transform565);

HAnimSegment563->addChildren(*Transform564);

CShape* Shape567 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet568 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet568->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA569 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA569->setUSE("HAnimSegmentLineColorRGBA");
LineSet568->setColor(*ColorRGBA569);

CCoordinate* Coordinate570 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate570->setPoint(new float[6]{0,1,0,0,1,0});
LineSet568->setCoord(*Coordinate570);

Shape567->setGeometry(LineSet568);

HAnimSegment563->addChildren(*Shape567);

CHAnimSite* HAnimSite571 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite571->setDEF("hanim_r_tarsal_distal_phalanx_3_tip");
HAnimSite571->setName("r_tarsal_distal_phalanx_3_tip");
HAnimSite571->setTranslation(new float[3]{-0.15,-1.13,0});
CTouchSensor* TouchSensor572 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor572->setDescription("HAnimSite r_tarsal_distal_phalanx_3_tip");
HAnimSite571->addChildren(*TouchSensor572);

CShape* Shape573 = (CShape *)(m_pScene.createNode("Shape"));
Shape573->setUSE("HAnimSiteShape");
HAnimSite571->addChildren(*Shape573);

HAnimSegment563->addChildren(*HAnimSite571);

HAnimJoint562->addChildren(*HAnimSegment563);

CHAnimJoint* HAnimJoint574 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint574->setDEF("hanim_r_tarsal_distal_interphalangeal_2");
HAnimJoint574->setName("r_tarsal_distal_interphalangeal_3");
HAnimJoint574->setCenter(new float[3]{0,1,0});
HAnimJoint562->addChildren(*HAnimJoint574);

HAnimJoint553->addChildren(*HAnimJoint562);

HAnimJoint544->addChildren(*HAnimJoint553);

HAnimJoint535->addChildren(*HAnimJoint544);

HAnimJoint444->addChildren(*HAnimJoint535);

HAnimJoint431->addChildren(*HAnimJoint444);

CHAnimJoint* HAnimJoint575 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint575->setDEF("hanim_r_calcaneocuboid");
HAnimJoint575->setName("r_calcaneocuboid");
HAnimJoint575->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment576 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment576->setDEF("hanim_r_calcaneus");
HAnimSegment576->setName("r_calcaneus");
CTransform* Transform577 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform578 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape579 = (CShape *)(m_pScene.createNode("Shape"));
Shape579->setUSE("HAnimJointShape");
Transform578->addChild(*Shape579);

Transform577->addChildren(*Transform578);

HAnimSegment576->addChildren(*Transform577);

CShape* Shape580 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet581 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet581->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA582 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA582->setUSE("HAnimSegmentLineColorRGBA");
LineSet581->setColor(*ColorRGBA582);

CCoordinate* Coordinate583 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate583->setPoint(new float[6]{0,1,0,0,1,0});
LineSet581->setCoord(*Coordinate583);

Shape580->setGeometry(LineSet581);

HAnimSegment576->addChildren(*Shape580);

HAnimJoint575->addChildren(*HAnimSegment576);

CHAnimJoint* HAnimJoint584 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint584->setDEF("hanim_r_transversetarsal");
HAnimJoint584->setName("r_transversetarsal");
HAnimJoint584->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment585 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment585->setDEF("hanim_r_cuboid");
HAnimSegment585->setName("r_cuboid");
CTransform* Transform586 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform587 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape588 = (CShape *)(m_pScene.createNode("Shape"));
Shape588->setUSE("HAnimJointShape");
Transform587->addChild(*Shape588);

Transform586->addChildren(*Transform587);

HAnimSegment585->addChildren(*Transform586);

CShape* Shape589 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet590 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet590->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA591 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA591->setUSE("HAnimSegmentLineColorRGBA");
LineSet590->setColor(*ColorRGBA591);

CCoordinate* Coordinate592 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate592->setPoint(new float[6]{0,1,0,0,1,0});
LineSet590->setCoord(*Coordinate592);

Shape589->setGeometry(LineSet590);

HAnimSegment585->addChildren(*Shape589);

CShape* Shape593 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet594 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet594->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA595 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA595->setUSE("HAnimSegmentLineColorRGBA");
LineSet594->setColor(*ColorRGBA595);

CCoordinate* Coordinate596 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate596->setPoint(new float[6]{0,1,0,0,1,0});
LineSet594->setCoord(*Coordinate596);

Shape593->setGeometry(LineSet594);

HAnimSegment585->addChildren(*Shape593);

HAnimJoint584->addChildren(*HAnimSegment585);

CHAnimJoint* HAnimJoint597 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint597->setDEF("hanim_r_tarsometatarsal_4");
HAnimJoint597->setName("r_tarsometatarsal_4");
HAnimJoint597->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment598 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment598->setDEF("hanim_r_metatarsal_4");
HAnimSegment598->setName("r_metatarsal_4");
CTransform* Transform599 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform600 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape601 = (CShape *)(m_pScene.createNode("Shape"));
Shape601->setUSE("HAnimJointShape");
Transform600->addChild(*Shape601);

Transform599->addChildren(*Transform600);

HAnimSegment598->addChildren(*Transform599);

CShape* Shape602 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet603 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet603->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA604 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA604->setUSE("HAnimSegmentLineColorRGBA");
LineSet603->setColor(*ColorRGBA604);

CCoordinate* Coordinate605 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate605->setPoint(new float[6]{0,1,0,0,1,0});
LineSet603->setCoord(*Coordinate605);

Shape602->setGeometry(LineSet603);

HAnimSegment598->addChildren(*Shape602);

HAnimJoint597->addChildren(*HAnimSegment598);

CHAnimJoint* HAnimJoint606 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint606->setDEF("hanim_r_metatarsophalangeal_4");
HAnimJoint606->setName("r_metatarsophalangeal_4");
HAnimJoint606->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment607 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment607->setDEF("hanim_r_tarsal_proximal_phalanx_4");
HAnimSegment607->setName("r_tarsal_proximal_phalanx_4");
CTransform* Transform608 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform609 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape610 = (CShape *)(m_pScene.createNode("Shape"));
Shape610->setUSE("HAnimJointShape");
Transform609->addChild(*Shape610);

Transform608->addChildren(*Transform609);

HAnimSegment607->addChildren(*Transform608);

CShape* Shape611 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet612 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet612->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA613 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA613->setUSE("HAnimSegmentLineColorRGBA");
LineSet612->setColor(*ColorRGBA613);

CCoordinate* Coordinate614 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate614->setPoint(new float[6]{0,1,0,0,1,0});
LineSet612->setCoord(*Coordinate614);

Shape611->setGeometry(LineSet612);

HAnimSegment607->addChildren(*Shape611);

HAnimJoint606->addChildren(*HAnimSegment607);

CHAnimJoint* HAnimJoint615 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint615->setDEF("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimJoint615->setName("r_tarsal_proximal_interphalangeal_4");
HAnimJoint615->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment616 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment616->setDEF("hanim_r_tarsal_middle_phalanx_3");
HAnimSegment616->setName("r_tarsal_middle_phalanx_4");
CTransform* Transform617 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform618 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape619 = (CShape *)(m_pScene.createNode("Shape"));
Shape619->setUSE("HAnimJointShape");
Transform618->addChild(*Shape619);

Transform617->addChildren(*Transform618);

HAnimSegment616->addChildren(*Transform617);

CShape* Shape620 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet621 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet621->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA622 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA622->setUSE("HAnimSegmentLineColorRGBA");
LineSet621->setColor(*ColorRGBA622);

CCoordinate* Coordinate623 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate623->setPoint(new float[6]{0,1,0,0,1,0});
LineSet621->setCoord(*Coordinate623);

Shape620->setGeometry(LineSet621);

HAnimSegment616->addChildren(*Shape620);

CHAnimSite* HAnimSite624 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite624->setDEF("hanim_r_tarsal_distal_phalanx_4_tip");
HAnimSite624->setName("r_tarsal_distal_phalanx_4_tip");
HAnimSite624->setTranslation(new float[3]{-0.25,-1.1,0});
CTouchSensor* TouchSensor625 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor625->setDescription("HAnimSite r_tarsal_distal_phalanx_4_tip");
HAnimSite624->addChildren(*TouchSensor625);

CShape* Shape626 = (CShape *)(m_pScene.createNode("Shape"));
Shape626->setUSE("HAnimSiteShape");
HAnimSite624->addChildren(*Shape626);

HAnimSegment616->addChildren(*HAnimSite624);

HAnimJoint615->addChildren(*HAnimSegment616);

CHAnimJoint* HAnimJoint627 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint627->setDEF("hanim_r_tarsal_distal_interphalangeal_3");
HAnimJoint627->setName("r_tarsal_distal_interphalangeal_4");
HAnimJoint627->setCenter(new float[3]{0,1,0});
HAnimJoint615->addChildren(*HAnimJoint627);

HAnimJoint606->addChildren(*HAnimJoint615);

HAnimJoint597->addChildren(*HAnimJoint606);

HAnimJoint584->addChildren(*HAnimJoint597);

CHAnimJoint* HAnimJoint628 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint628->setDEF("hanim_r_tarsometatarsal_5");
HAnimJoint628->setName("r_tarsometatarsal_5");
HAnimJoint628->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment629 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment629->setDEF("hanim_r_metatarsal_5");
HAnimSegment629->setName("r_metatarsal_5");
CTransform* Transform630 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform631 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape632 = (CShape *)(m_pScene.createNode("Shape"));
Shape632->setUSE("HAnimJointShape");
Transform631->addChild(*Shape632);

Transform630->addChildren(*Transform631);

HAnimSegment629->addChildren(*Transform630);

CShape* Shape633 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet634 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet634->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA635 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA635->setUSE("HAnimSegmentLineColorRGBA");
LineSet634->setColor(*ColorRGBA635);

CCoordinate* Coordinate636 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate636->setPoint(new float[6]{0,1,0,0,1,0});
LineSet634->setCoord(*Coordinate636);

Shape633->setGeometry(LineSet634);

HAnimSegment629->addChildren(*Shape633);

CHAnimSite* HAnimSite637 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite637->setDEF("hanim_r_metatarsal_phalanx_5_pt");
HAnimSite637->setName("r_metatarsal_phalanx_5_pt");
HAnimSite637->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor638 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor638->setDescription("HAnimSite r_metatarsal_phalanx_5_pt");
HAnimSite637->addChildren(*TouchSensor638);

CShape* Shape639 = (CShape *)(m_pScene.createNode("Shape"));
Shape639->setUSE("HAnimSiteShape");
HAnimSite637->addChildren(*Shape639);

HAnimSegment629->addChildren(*HAnimSite637);

HAnimJoint628->addChildren(*HAnimSegment629);

CHAnimJoint* HAnimJoint640 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint640->setDEF("hanim_r_metatarsophalangeal_5");
HAnimJoint640->setName("r_metatarsophalangeal_5");
HAnimJoint640->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment641 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment641->setDEF("hanim_r_tarsal_proximal_phalanx_5");
HAnimSegment641->setName("r_tarsal_proximal_phalanx_5");
CTransform* Transform642 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform643 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape644 = (CShape *)(m_pScene.createNode("Shape"));
Shape644->setUSE("HAnimJointShape");
Transform643->addChild(*Shape644);

Transform642->addChildren(*Transform643);

HAnimSegment641->addChildren(*Transform642);

CShape* Shape645 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet646 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet646->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA647 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA647->setUSE("HAnimSegmentLineColorRGBA");
LineSet646->setColor(*ColorRGBA647);

CCoordinate* Coordinate648 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate648->setPoint(new float[6]{0,1,0,0,1,0});
LineSet646->setCoord(*Coordinate648);

Shape645->setGeometry(LineSet646);

HAnimSegment641->addChildren(*Shape645);

HAnimJoint640->addChildren(*HAnimSegment641);

CHAnimJoint* HAnimJoint649 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint649->setDEF("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimJoint649->setName("r_tarsal_proximal_interphalangeal_5");
HAnimJoint649->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment650 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment650->setDEF("hanim_r_tarsal_middle_phalanx_4");
HAnimSegment650->setName("r_tarsal_middle_phalanx_5");
CTransform* Transform651 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform652 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape653 = (CShape *)(m_pScene.createNode("Shape"));
Shape653->setUSE("HAnimJointShape");
Transform652->addChild(*Shape653);

Transform651->addChildren(*Transform652);

HAnimSegment650->addChildren(*Transform651);

CShape* Shape654 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet655 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet655->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA656 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA656->setUSE("HAnimSegmentLineColorRGBA");
LineSet655->setColor(*ColorRGBA656);

CCoordinate* Coordinate657 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate657->setPoint(new float[6]{0,1,0,0,1,0});
LineSet655->setCoord(*Coordinate657);

Shape654->setGeometry(LineSet655);

HAnimSegment650->addChildren(*Shape654);

CHAnimSite* HAnimSite658 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite658->setDEF("hanim_r_tarsal_distal_phalanx_5_tip");
HAnimSite658->setName("r_tarsal_distal_phalanx_5_tip");
HAnimSite658->setTranslation(new float[3]{-0.34,-1.05,0});
CTouchSensor* TouchSensor659 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor659->setDescription("HAnimSite r_tarsal_distal_phalanx_5_tip");
HAnimSite658->addChildren(*TouchSensor659);

CShape* Shape660 = (CShape *)(m_pScene.createNode("Shape"));
Shape660->setUSE("HAnimSiteShape");
HAnimSite658->addChildren(*Shape660);

HAnimSegment650->addChildren(*HAnimSite658);

HAnimJoint649->addChildren(*HAnimSegment650);

CHAnimJoint* HAnimJoint661 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint661->setDEF("hanim_r_tarsal_distal_interphalangeal_4");
HAnimJoint661->setName("r_tarsal_distal_interphalangeal_5");
HAnimJoint661->setCenter(new float[3]{0,1,0});
HAnimJoint649->addChildren(*HAnimJoint661);

HAnimJoint640->addChildren(*HAnimJoint649);

HAnimJoint628->addChildren(*HAnimJoint640);

HAnimJoint584->addChildren(*HAnimJoint628);

HAnimJoint575->addChildren(*HAnimJoint584);

HAnimJoint431->addChildren(*HAnimJoint575);

HAnimJoint416->addChildren(*HAnimJoint431);

HAnimJoint398->addChildren(*HAnimJoint416);

HAnimJoint97->addChildren(*HAnimJoint398);

HAnimJoint43->addChildren(*HAnimJoint97);

CHAnimJoint* HAnimJoint662 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint662->setDEF("hanim_vl5");
HAnimJoint662->setName("vl5");
HAnimJoint662->setCenter(new float[3]{0.0028,1.0568,-0.0776});
CHAnimSegment* HAnimSegment663 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment663->setDEF("hanim_l5");
HAnimSegment663->setName("l5");
CTransform* Transform664 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform665 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape666 = (CShape *)(m_pScene.createNode("Shape"));
Shape666->setUSE("HAnimJointShape");
Transform665->addChild(*Shape666);

Transform664->addChildren(*Transform665);

HAnimSegment663->addChildren(*Transform664);

CShape* Shape667 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet668 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet668->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA669 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA669->setUSE("HAnimSegmentLineColorRGBA");
LineSet668->setColor(*ColorRGBA669);

CCoordinate* Coordinate670 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate670->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787});
LineSet668->setCoord(*Coordinate670);

Shape667->setGeometry(LineSet668);

HAnimSegment663->addChildren(*Shape667);

HAnimJoint662->addChildren(*HAnimSegment663);

CHAnimJoint* HAnimJoint671 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint671->setDEF("hanim_vl4");
HAnimJoint671->setName("vl4");
HAnimJoint671->setCenter(new float[3]{0.0035,1.0925,-0.0787});
CHAnimSegment* HAnimSegment672 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment672->setDEF("hanim_l4");
HAnimSegment672->setName("l4");
CTransform* Transform673 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform674 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape675 = (CShape *)(m_pScene.createNode("Shape"));
Shape675->setUSE("HAnimJointShape");
Transform674->addChild(*Shape675);

Transform673->addChildren(*Transform674);

HAnimSegment672->addChildren(*Transform673);

CShape* Shape676 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet677 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet677->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA678 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA678->setUSE("HAnimSegmentLineColorRGBA");
LineSet677->setColor(*ColorRGBA678);

CCoordinate* Coordinate679 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate679->setPoint(new float[6]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796});
LineSet677->setCoord(*Coordinate679);

Shape676->setGeometry(LineSet677);

HAnimSegment672->addChildren(*Shape676);

HAnimJoint671->addChildren(*HAnimSegment672);

CHAnimJoint* HAnimJoint680 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint680->setDEF("hanim_vl3");
HAnimJoint680->setName("vl3");
HAnimJoint680->setCenter(new float[3]{0.0041,1.1276,-0.0796});
CHAnimSegment* HAnimSegment681 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment681->setDEF("hanim_l3");
HAnimSegment681->setName("l3");
CTransform* Transform682 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform683 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape684 = (CShape *)(m_pScene.createNode("Shape"));
Shape684->setUSE("HAnimJointShape");
Transform683->addChild(*Shape684);

Transform682->addChildren(*Transform683);

HAnimSegment681->addChildren(*Transform682);

CShape* Shape685 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet686 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet686->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA687 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA687->setUSE("HAnimSegmentLineColorRGBA");
LineSet686->setColor(*ColorRGBA687);

CCoordinate* Coordinate688 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate688->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08});
LineSet686->setCoord(*Coordinate688);

Shape685->setGeometry(LineSet686);

HAnimSegment681->addChildren(*Shape685);

CHAnimSite* HAnimSite689 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite689->setDEF("hanim_l_rib10_pt");
HAnimSite689->setName("l_rib10_pt");
HAnimSite689->setTranslation(new float[3]{0.0871,1.1925,0.0992});
CTouchSensor* TouchSensor690 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor690->setDescription("HAnimSite l_rib10_pt");
HAnimSite689->addChildren(*TouchSensor690);

CShape* Shape691 = (CShape *)(m_pScene.createNode("Shape"));
Shape691->setUSE("HAnimSiteShape");
HAnimSite689->addChildren(*Shape691);

HAnimSegment681->addChildren(*HAnimSite689);

CHAnimSite* HAnimSite692 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite692->setDEF("hanim_r_rib10_pt");
HAnimSite692->setName("r_rib10_pt");
HAnimSite692->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
CTouchSensor* TouchSensor693 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor693->setDescription("HAnimSite r_rib10_pt");
HAnimSite692->addChildren(*TouchSensor693);

CShape* Shape694 = (CShape *)(m_pScene.createNode("Shape"));
Shape694->setUSE("HAnimSiteShape");
HAnimSite692->addChildren(*Shape694);

HAnimSegment681->addChildren(*HAnimSite692);

CHAnimSite* HAnimSite695 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite695->setDEF("hanim_spine_2_middle_back_pt");
HAnimSite695->setName("spine_2_middle_back_pt");
HAnimSite695->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor696 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor696->setDescription("HAnimSite spine_2_middle_back_pt");
HAnimSite695->addChildren(*TouchSensor696);

CShape* Shape697 = (CShape *)(m_pScene.createNode("Shape"));
Shape697->setUSE("HAnimSiteShape");
HAnimSite695->addChildren(*Shape697);

HAnimSegment681->addChildren(*HAnimSite695);

HAnimJoint680->addChildren(*HAnimSegment681);

CHAnimJoint* HAnimJoint698 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint698->setDEF("hanim_vl2");
HAnimJoint698->setName("vl2");
HAnimJoint698->setCenter(new float[3]{0.0045,1.1546,-0.08});
CHAnimSegment* HAnimSegment699 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment699->setDEF("hanim_l2");
HAnimSegment699->setName("l2");
CTransform* Transform700 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform701 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape702 = (CShape *)(m_pScene.createNode("Shape"));
Shape702->setUSE("HAnimJointShape");
Transform701->addChild(*Shape702);

Transform700->addChildren(*Transform701);

HAnimSegment699->addChildren(*Transform700);

CShape* Shape703 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet704 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet704->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA705 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA705->setUSE("HAnimSegmentLineColorRGBA");
LineSet704->setColor(*ColorRGBA705);

CCoordinate* Coordinate706 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate706->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805});
LineSet704->setCoord(*Coordinate706);

Shape703->setGeometry(LineSet704);

HAnimSegment699->addChildren(*Shape703);

HAnimJoint698->addChildren(*HAnimSegment699);

CHAnimJoint* HAnimJoint707 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint707->setDEF("hanim_vl1");
HAnimJoint707->setName("vl1");
HAnimJoint707->setCenter(new float[3]{0.0048,1.1912,-0.0805});
CHAnimSegment* HAnimSegment708 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment708->setDEF("hanim_l1");
HAnimSegment708->setName("l1");
CTransform* Transform709 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform710 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape711 = (CShape *)(m_pScene.createNode("Shape"));
Shape711->setUSE("HAnimJointShape");
Transform710->addChild(*Shape711);

Transform709->addChildren(*Transform710);

HAnimSegment708->addChildren(*Transform709);

CShape* Shape712 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet713 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet713->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA714 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA714->setUSE("HAnimSegmentLineColorRGBA");
LineSet713->setColor(*ColorRGBA714);

CCoordinate* Coordinate715 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate715->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808});
LineSet713->setCoord(*Coordinate715);

Shape712->setGeometry(LineSet713);

HAnimSegment708->addChildren(*Shape712);

HAnimJoint707->addChildren(*HAnimSegment708);

CHAnimJoint* HAnimJoint716 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint716->setDEF("hanim_vt12");
HAnimJoint716->setName("vt12");
HAnimJoint716->setCenter(new float[3]{0.0051,1.2278,-0.0808});
CHAnimSegment* HAnimSegment717 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment717->setDEF("hanim_t12");
HAnimSegment717->setName("t12");
CTransform* Transform718 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform719 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape720 = (CShape *)(m_pScene.createNode("Shape"));
Shape720->setUSE("HAnimJointShape");
Transform719->addChild(*Shape720);

Transform718->addChildren(*Transform719);

HAnimSegment717->addChildren(*Transform718);

CShape* Shape721 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet722 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet722->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA723 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA723->setUSE("HAnimSegmentLineColorRGBA");
LineSet722->setColor(*ColorRGBA723);

CCoordinate* Coordinate724 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate724->setPoint(new float[6]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081});
LineSet722->setCoord(*Coordinate724);

Shape721->setGeometry(LineSet722);

HAnimSegment717->addChildren(*Shape721);

HAnimJoint716->addChildren(*HAnimSegment717);

CHAnimJoint* HAnimJoint725 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint725->setDEF("hanim_vt11");
HAnimJoint725->setName("vt11");
HAnimJoint725->setCenter(new float[3]{0.0053,1.2679,-0.081});
CHAnimSegment* HAnimSegment726 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment726->setDEF("hanim_t11");
HAnimSegment726->setName("t11");
CTransform* Transform727 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform728 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape729 = (CShape *)(m_pScene.createNode("Shape"));
Shape729->setUSE("HAnimJointShape");
Transform728->addChild(*Shape729);

Transform727->addChildren(*Transform728);

HAnimSegment726->addChildren(*Transform727);

CShape* Shape730 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet731 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet731->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA732 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA732->setUSE("HAnimSegmentLineColorRGBA");
LineSet731->setColor(*ColorRGBA732);

CCoordinate* Coordinate733 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate733->setPoint(new float[6]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822});
LineSet731->setCoord(*Coordinate733);

Shape730->setGeometry(LineSet731);

HAnimSegment726->addChildren(*Shape730);

CHAnimSite* HAnimSite734 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite734->setDEF("hanim_substernale_pt");
HAnimSite734->setName("substernale_pt");
HAnimSite734->setTranslation(new float[3]{0.0085,1.2995,0.1147});
CTouchSensor* TouchSensor735 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor735->setDescription("HAnimSite substernale_pt");
HAnimSite734->addChildren(*TouchSensor735);

CShape* Shape736 = (CShape *)(m_pScene.createNode("Shape"));
Shape736->setUSE("HAnimSiteShape");
HAnimSite734->addChildren(*Shape736);

HAnimSegment726->addChildren(*HAnimSite734);

HAnimJoint725->addChildren(*HAnimSegment726);

CHAnimJoint* HAnimJoint737 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint737->setDEF("hanim_vt10");
HAnimJoint737->setName("vt10");
HAnimJoint737->setCenter(new float[3]{0.0056,1.2848,-0.0822});
CHAnimSegment* HAnimSegment738 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment738->setDEF("hanim_t10");
HAnimSegment738->setName("t10");
CTransform* Transform739 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform740 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape741 = (CShape *)(m_pScene.createNode("Shape"));
Shape741->setUSE("HAnimJointShape");
Transform740->addChild(*Shape741);

Transform739->addChildren(*Transform740);

HAnimSegment738->addChildren(*Transform739);

CShape* Shape742 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet743 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet743->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA744 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA744->setUSE("HAnimSegmentLineColorRGBA");
LineSet743->setColor(*ColorRGBA744);

CCoordinate* Coordinate745 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate745->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838});
LineSet743->setCoord(*Coordinate745);

Shape742->setGeometry(LineSet743);

HAnimSegment738->addChildren(*Shape742);

CHAnimSite* HAnimSite746 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite746->setDEF("hanim_l_thelion_pt");
HAnimSite746->setName("l_thelion_pt");
HAnimSite746->setTranslation(new float[3]{0.0918,1.3382,0.1192});
CTouchSensor* TouchSensor747 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor747->setDescription("HAnimSite l_thelion_pt");
HAnimSite746->addChildren(*TouchSensor747);

CShape* Shape748 = (CShape *)(m_pScene.createNode("Shape"));
Shape748->setUSE("HAnimSiteShape");
HAnimSite746->addChildren(*Shape748);

HAnimSegment738->addChildren(*HAnimSite746);

CHAnimSite* HAnimSite749 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite749->setDEF("hanim_r_thelion_pt");
HAnimSite749->setName("r_thelion_pt");
HAnimSite749->setTranslation(new float[3]{-0.0736,1.3385,0.1217});
CTouchSensor* TouchSensor750 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor750->setDescription("HAnimSite r_thelion_pt");
HAnimSite749->addChildren(*TouchSensor750);

CShape* Shape751 = (CShape *)(m_pScene.createNode("Shape"));
Shape751->setUSE("HAnimSiteShape");
HAnimSite749->addChildren(*Shape751);

HAnimSegment738->addChildren(*HAnimSite749);

HAnimJoint737->addChildren(*HAnimSegment738);

CHAnimJoint* HAnimJoint752 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint752->setDEF("hanim_vt9");
HAnimJoint752->setName("vt9");
HAnimJoint752->setCenter(new float[3]{0.0057,1.3126,-0.0838});
CHAnimSegment* HAnimSegment753 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment753->setDEF("hanim_t9");
HAnimSegment753->setName("t9");
CTransform* Transform754 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform755 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape756 = (CShape *)(m_pScene.createNode("Shape"));
Shape756->setUSE("HAnimJointShape");
Transform755->addChild(*Shape756);

Transform754->addChildren(*Transform755);

HAnimSegment753->addChildren(*Transform754);

CShape* Shape757 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet758 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet758->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA759 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA759->setUSE("HAnimSegmentLineColorRGBA");
LineSet758->setColor(*ColorRGBA759);

CCoordinate* Coordinate760 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate760->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845});
LineSet758->setCoord(*Coordinate760);

Shape757->setGeometry(LineSet758);

HAnimSegment753->addChildren(*Shape757);

HAnimJoint752->addChildren(*HAnimSegment753);

CHAnimJoint* HAnimJoint761 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint761->setDEF("hanim_vt8");
HAnimJoint761->setName("vt8");
HAnimJoint761->setCenter(new float[3]{0.0057,1.3382,-0.0845});
CHAnimSegment* HAnimSegment762 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment762->setDEF("hanim_t8");
HAnimSegment762->setName("t8");
CTransform* Transform763 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform764 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape765 = (CShape *)(m_pScene.createNode("Shape"));
Shape765->setUSE("HAnimJointShape");
Transform764->addChild(*Shape765);

Transform763->addChildren(*Transform764);

HAnimSegment762->addChildren(*Transform763);

CShape* Shape766 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet767 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet767->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA768 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA768->setUSE("HAnimSegmentLineColorRGBA");
LineSet767->setColor(*ColorRGBA768);

CCoordinate* Coordinate769 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate769->setPoint(new float[6]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833});
LineSet767->setCoord(*Coordinate769);

Shape766->setGeometry(LineSet767);

HAnimSegment762->addChildren(*Shape766);

HAnimJoint761->addChildren(*HAnimSegment762);

CHAnimJoint* HAnimJoint770 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint770->setDEF("hanim_vt7");
HAnimJoint770->setName("vt7");
HAnimJoint770->setCenter(new float[3]{0.0058,1.3625,-0.0833});
CHAnimSegment* HAnimSegment771 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment771->setDEF("hanim_t7");
HAnimSegment771->setName("t7");
CTransform* Transform772 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform773 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape774 = (CShape *)(m_pScene.createNode("Shape"));
Shape774->setUSE("HAnimJointShape");
Transform773->addChild(*Shape774);

Transform772->addChildren(*Transform773);

HAnimSegment771->addChildren(*Transform772);

CShape* Shape775 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet776 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet776->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA777 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA777->setUSE("HAnimSegmentLineColorRGBA");
LineSet776->setColor(*ColorRGBA777);

CCoordinate* Coordinate778 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate778->setPoint(new float[6]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08});
LineSet776->setCoord(*Coordinate778);

Shape775->setGeometry(LineSet776);

HAnimSegment771->addChildren(*Shape775);

CHAnimSite* HAnimSite779 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite779->setDEF("hanim_l_chest_midsagittal_plane_pt");
HAnimSite779->setName("l_chest_midsagittal_plane_pt");
HAnimSite779->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor780 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor780->setDescription("HAnimSite l_chest_midsagittal_plane_pt");
HAnimSite779->addChildren(*TouchSensor780);

CShape* Shape781 = (CShape *)(m_pScene.createNode("Shape"));
Shape781->setUSE("HAnimSiteShape");
HAnimSite779->addChildren(*Shape781);

HAnimSegment771->addChildren(*HAnimSite779);

CHAnimSite* HAnimSite782 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite782->setDEF("hanim_mesosternale_pt");
HAnimSite782->setName("mesosternale_pt");
HAnimSite782->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor783 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor783->setDescription("HAnimSite mesosternale_pt");
HAnimSite782->addChildren(*TouchSensor783);

CShape* Shape784 = (CShape *)(m_pScene.createNode("Shape"));
Shape784->setUSE("HAnimSiteShape");
HAnimSite782->addChildren(*Shape784);

HAnimSegment771->addChildren(*HAnimSite782);

CHAnimSite* HAnimSite785 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite785->setDEF("hanim_r_chest_midsagittal_plane_pt");
HAnimSite785->setName("r_chest_midsagittal_plane_pt");
HAnimSite785->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor786 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor786->setDescription("HAnimSite r_chest_midsagittal_plane_pt");
HAnimSite785->addChildren(*TouchSensor786);

CShape* Shape787 = (CShape *)(m_pScene.createNode("Shape"));
Shape787->setUSE("HAnimSiteShape");
HAnimSite785->addChildren(*Shape787);

HAnimSegment771->addChildren(*HAnimSite785);

CHAnimSite* HAnimSite788 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite788->setDEF("hanim_rear_center_midsagittal_plane_pt");
HAnimSite788->setName("rear_center_midsagittal_plane_pt");
HAnimSite788->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor789 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor789->setDescription("HAnimSite rear_center_midsagittal_plane_pt");
HAnimSite788->addChildren(*TouchSensor789);

CShape* Shape790 = (CShape *)(m_pScene.createNode("Shape"));
Shape790->setUSE("HAnimSiteShape");
HAnimSite788->addChildren(*Shape790);

HAnimSegment771->addChildren(*HAnimSite788);

HAnimJoint770->addChildren(*HAnimSegment771);

CHAnimJoint* HAnimJoint791 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint791->setDEF("hanim_vt6");
HAnimJoint791->setName("vt6");
HAnimJoint791->setCenter(new float[3]{0.0059,1.3866,-0.08});
CHAnimSegment* HAnimSegment792 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment792->setDEF("hanim_t6");
HAnimSegment792->setName("t6");
CTransform* Transform793 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform794 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape795 = (CShape *)(m_pScene.createNode("Shape"));
Shape795->setUSE("HAnimJointShape");
Transform794->addChild(*Shape795);

Transform793->addChildren(*Transform794);

HAnimSegment792->addChildren(*Transform793);

CShape* Shape796 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet797 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet797->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA798 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA798->setUSE("HAnimSegmentLineColorRGBA");
LineSet797->setColor(*ColorRGBA798);

CCoordinate* Coordinate799 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate799->setPoint(new float[6]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745});
LineSet797->setCoord(*Coordinate799);

Shape796->setGeometry(LineSet797);

HAnimSegment792->addChildren(*Shape796);

CHAnimSite* HAnimSite800 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite800->setDEF("hanim_spine_1_middle_back_pt");
HAnimSite800->setName("spine_1_middle_back_pt");
HAnimSite800->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor801 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor801->setDescription("HAnimSite spine_1_middle_back_pt");
HAnimSite800->addChildren(*TouchSensor801);

CShape* Shape802 = (CShape *)(m_pScene.createNode("Shape"));
Shape802->setUSE("HAnimSiteShape");
HAnimSite800->addChildren(*Shape802);

HAnimSegment792->addChildren(*HAnimSite800);

HAnimJoint791->addChildren(*HAnimSegment792);

CHAnimJoint* HAnimJoint803 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint803->setDEF("hanim_vt5");
HAnimJoint803->setName("vt5");
HAnimJoint803->setCenter(new float[3]{0.006,1.4102,-0.0745});
CHAnimSegment* HAnimSegment804 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment804->setDEF("hanim_t5");
HAnimSegment804->setName("t5");
CTransform* Transform805 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform806 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape807 = (CShape *)(m_pScene.createNode("Shape"));
Shape807->setUSE("HAnimJointShape");
Transform806->addChild(*Shape807);

Transform805->addChildren(*Transform806);

HAnimSegment804->addChildren(*Transform805);

CShape* Shape808 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet809 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet809->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA810 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA810->setUSE("HAnimSegmentLineColorRGBA");
LineSet809->setColor(*ColorRGBA810);

CCoordinate* Coordinate811 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate811->setPoint(new float[6]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675});
LineSet809->setCoord(*Coordinate811);

Shape808->setGeometry(LineSet809);

HAnimSegment804->addChildren(*Shape808);

HAnimJoint803->addChildren(*HAnimSegment804);

CHAnimJoint* HAnimJoint812 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint812->setDEF("hanim_vt4");
HAnimJoint812->setName("vt4");
HAnimJoint812->setCenter(new float[3]{0.0061,1.432,-0.0675});
CHAnimSegment* HAnimSegment813 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment813->setDEF("hanim_t4");
HAnimSegment813->setName("t4");
CTransform* Transform814 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform815 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape816 = (CShape *)(m_pScene.createNode("Shape"));
Shape816->setUSE("HAnimJointShape");
Transform815->addChild(*Shape816);

Transform814->addChildren(*Transform815);

HAnimSegment813->addChildren(*Transform814);

CShape* Shape817 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet818 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet818->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA819 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA819->setUSE("HAnimSegmentLineColorRGBA");
LineSet818->setColor(*ColorRGBA819);

CCoordinate* Coordinate820 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate820->setPoint(new float[6]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057});
LineSet818->setCoord(*Coordinate820);

Shape817->setGeometry(LineSet818);

HAnimSegment813->addChildren(*Shape817);

HAnimJoint812->addChildren(*HAnimSegment813);

CHAnimJoint* HAnimJoint821 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint821->setDEF("hanim_vt3");
HAnimJoint821->setName("vt3");
HAnimJoint821->setCenter(new float[3]{0.0062,1.4583,-0.057});
CHAnimSegment* HAnimSegment822 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment822->setDEF("hanim_t3");
HAnimSegment822->setName("t3");
CTransform* Transform823 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform824 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape825 = (CShape *)(m_pScene.createNode("Shape"));
Shape825->setUSE("HAnimJointShape");
Transform824->addChild(*Shape825);

Transform823->addChildren(*Transform824);

HAnimSegment822->addChildren(*Transform823);

CShape* Shape826 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet827 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet827->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA828 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA828->setUSE("HAnimSegmentLineColorRGBA");
LineSet827->setColor(*ColorRGBA828);

CCoordinate* Coordinate829 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate829->setPoint(new float[6]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484});
LineSet827->setCoord(*Coordinate829);

Shape826->setGeometry(LineSet827);

HAnimSegment822->addChildren(*Shape826);

HAnimJoint821->addChildren(*HAnimSegment822);

CHAnimJoint* HAnimJoint830 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint830->setDEF("hanim_vt2");
HAnimJoint830->setName("vt2");
HAnimJoint830->setCenter(new float[3]{0.0063,1.4761,-0.0484});
CHAnimSegment* HAnimSegment831 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment831->setDEF("hanim_t2");
HAnimSegment831->setName("t2");
CTransform* Transform832 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform833 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape834 = (CShape *)(m_pScene.createNode("Shape"));
Shape834->setUSE("HAnimJointShape");
Transform833->addChild(*Shape834);

Transform832->addChildren(*Transform833);

HAnimSegment831->addChildren(*Transform832);

CShape* Shape835 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet836 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet836->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA837 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA837->setUSE("HAnimSegmentLineColorRGBA");
LineSet836->setColor(*ColorRGBA837);

CCoordinate* Coordinate838 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate838->setPoint(new float[6]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387});
LineSet836->setCoord(*Coordinate838);

Shape835->setGeometry(LineSet836);

HAnimSegment831->addChildren(*Shape835);

CHAnimSite* HAnimSite839 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite839->setDEF("hanim_cervicale_pt");
HAnimSite839->setName("cervicale_pt");
HAnimSite839->setTranslation(new float[3]{0.0064,1.52,-0.0815});
CTouchSensor* TouchSensor840 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor840->setDescription("HAnimSite cervicale_pt");
HAnimSite839->addChildren(*TouchSensor840);

CShape* Shape841 = (CShape *)(m_pScene.createNode("Shape"));
Shape841->setUSE("HAnimSiteShape");
HAnimSite839->addChildren(*Shape841);

HAnimSegment831->addChildren(*HAnimSite839);

CHAnimSite* HAnimSite842 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite842->setDEF("hanim_suprasternale_pt");
HAnimSite842->setName("suprasternale_pt");
HAnimSite842->setTranslation(new float[3]{0.0084,1.4714,0.0551});
CTouchSensor* TouchSensor843 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor843->setDescription("HAnimSite suprasternale_pt");
HAnimSite842->addChildren(*TouchSensor843);

CShape* Shape844 = (CShape *)(m_pScene.createNode("Shape"));
Shape844->setUSE("HAnimSiteShape");
HAnimSite842->addChildren(*Shape844);

HAnimSegment831->addChildren(*HAnimSite842);

HAnimJoint830->addChildren(*HAnimSegment831);

CHAnimJoint* HAnimJoint845 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint845->setDEF("hanim_vt1");
HAnimJoint845->setName("vt1");
HAnimJoint845->setCenter(new float[3]{0.0065,1.4951,-0.0387});
CHAnimSegment* HAnimSegment846 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment846->setDEF("hanim_t1");
HAnimSegment846->setName("t1");
CTransform* Transform847 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform848 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape849 = (CShape *)(m_pScene.createNode("Shape"));
Shape849->setUSE("HAnimJointShape");
Transform848->addChild(*Shape849);

Transform847->addChildren(*Transform848);

HAnimSegment846->addChildren(*Transform847);

CShape* Shape850 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet851 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet851->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA852 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA852->setUSE("HAnimSegmentLineColorRGBA");
LineSet851->setColor(*ColorRGBA852);

CCoordinate* Coordinate853 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate853->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301});
LineSet851->setCoord(*Coordinate853);

Shape850->setGeometry(LineSet851);

HAnimSegment846->addChildren(*Shape850);

CHAnimSite* HAnimSite854 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite854->setDEF("hanim_l_neck_base_pt");
HAnimSite854->setName("l_neck_base_pt");
HAnimSite854->setTranslation(new float[3]{0.0646,1.5141,-0.038});
CTouchSensor* TouchSensor855 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor855->setDescription("HAnimSite l_neck_base_pt");
HAnimSite854->addChildren(*TouchSensor855);

CShape* Shape856 = (CShape *)(m_pScene.createNode("Shape"));
Shape856->setUSE("HAnimSiteShape");
HAnimSite854->addChildren(*Shape856);

HAnimSegment846->addChildren(*HAnimSite854);

CHAnimSite* HAnimSite857 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite857->setDEF("hanim_r_neck_base_pt");
HAnimSite857->setName("r_neck_base_pt");
HAnimSite857->setTranslation(new float[3]{-0.0419,1.5149,-0.022});
CTouchSensor* TouchSensor858 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor858->setDescription("HAnimSite r_neck_base_pt");
HAnimSite857->addChildren(*TouchSensor858);

CShape* Shape859 = (CShape *)(m_pScene.createNode("Shape"));
Shape859->setUSE("HAnimSiteShape");
HAnimSite857->addChildren(*Shape859);

HAnimSegment846->addChildren(*HAnimSite857);

CShape* Shape860 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet861 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet861->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA862 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA862->setUSE("HAnimSegmentLineColorRGBA");
LineSet861->setColor(*ColorRGBA862);

CCoordinate* Coordinate863 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate863->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353});
LineSet861->setCoord(*Coordinate863);

Shape860->setGeometry(LineSet861);

HAnimSegment846->addChildren(*Shape860);

CHAnimSite* HAnimSite864 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite864->setDEF("hanim_l_acromion_pt");
HAnimSite864->setName("l_acromion_pt");
HAnimSite864->setTranslation(new float[3]{0.2032,1.476,-0.049});
CTouchSensor* TouchSensor865 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor865->setDescription("HAnimSite l_acromion_pt");
HAnimSite864->addChildren(*TouchSensor865);

CShape* Shape866 = (CShape *)(m_pScene.createNode("Shape"));
Shape866->setUSE("HAnimSiteShape");
HAnimSite864->addChildren(*Shape866);

HAnimSegment846->addChildren(*HAnimSite864);

CHAnimSite* HAnimSite867 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite867->setDEF("hanim_l_axilla_distal_pt");
HAnimSite867->setName("l_axilla_distal_pt");
HAnimSite867->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
CTouchSensor* TouchSensor868 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor868->setDescription("HAnimSite l_axilla_distal_pt");
HAnimSite867->addChildren(*TouchSensor868);

CShape* Shape869 = (CShape *)(m_pScene.createNode("Shape"));
Shape869->setUSE("HAnimSiteShape");
HAnimSite867->addChildren(*Shape869);

HAnimSegment846->addChildren(*HAnimSite867);

CHAnimSite* HAnimSite870 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite870->setDEF("hanim_l_axilla_posterior_folds_pt");
HAnimSite870->setName("l_axilla_posterior_folds_pt");
HAnimSite870->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor871 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor871->setDescription("HAnimSite l_axilla_posterior_folds_pt");
HAnimSite870->addChildren(*TouchSensor871);

CShape* Shape872 = (CShape *)(m_pScene.createNode("Shape"));
Shape872->setUSE("HAnimSiteShape");
HAnimSite870->addChildren(*Shape872);

HAnimSegment846->addChildren(*HAnimSite870);

CHAnimSite* HAnimSite873 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite873->setDEF("hanim_l_axilla_proximal_pt");
HAnimSite873->setName("l_axilla_proximal_pt");
HAnimSite873->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
CTouchSensor* TouchSensor874 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor874->setDescription("HAnimSite l_axilla_proximal_pt");
HAnimSite873->addChildren(*TouchSensor874);

CShape* Shape875 = (CShape *)(m_pScene.createNode("Shape"));
Shape875->setUSE("HAnimSiteShape");
HAnimSite873->addChildren(*Shape875);

HAnimSegment846->addChildren(*HAnimSite873);

CHAnimSite* HAnimSite876 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite876->setDEF("hanim_l_clavicale_pt");
HAnimSite876->setName("l_clavicale_pt");
HAnimSite876->setTranslation(new float[3]{0.0271,1.4943,0.0394});
CTouchSensor* TouchSensor877 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor877->setDescription("HAnimSite l_clavicale_pt");
HAnimSite876->addChildren(*TouchSensor877);

CShape* Shape878 = (CShape *)(m_pScene.createNode("Shape"));
Shape878->setUSE("HAnimSiteShape");
HAnimSite876->addChildren(*Shape878);

HAnimSegment846->addChildren(*HAnimSite876);

CShape* Shape879 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet880 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet880->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA881 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA881->setUSE("HAnimSegmentLineColorRGBA");
LineSet880->setColor(*ColorRGBA881);

CCoordinate* Coordinate882 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate882->setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033});
LineSet880->setCoord(*Coordinate882);

Shape879->setGeometry(LineSet880);

HAnimSegment846->addChildren(*Shape879);

CHAnimSite* HAnimSite883 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite883->setDEF("hanim_r_acromion_pt");
HAnimSite883->setName("r_acromion_pt");
HAnimSite883->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
CTouchSensor* TouchSensor884 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor884->setDescription("HAnimSite r_acromion_pt");
HAnimSite883->addChildren(*TouchSensor884);

CShape* Shape885 = (CShape *)(m_pScene.createNode("Shape"));
Shape885->setUSE("HAnimSiteShape");
HAnimSite883->addChildren(*Shape885);

HAnimSegment846->addChildren(*HAnimSite883);

CHAnimSite* HAnimSite886 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite886->setDEF("hanim_r_axilla_distal_pt");
HAnimSite886->setName("r_axilla_distal_pt");
HAnimSite886->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
CTouchSensor* TouchSensor887 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor887->setDescription("HAnimSite r_axilla_distal_pt");
HAnimSite886->addChildren(*TouchSensor887);

CShape* Shape888 = (CShape *)(m_pScene.createNode("Shape"));
Shape888->setUSE("HAnimSiteShape");
HAnimSite886->addChildren(*Shape888);

HAnimSegment846->addChildren(*HAnimSite886);

CHAnimSite* HAnimSite889 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite889->setDEF("hanim_r_axilla_posterior_folds_pt");
HAnimSite889->setName("r_axilla_posterior_folds_pt");
HAnimSite889->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor890 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor890->setDescription("HAnimSite r_axilla_posterior_folds_pt");
HAnimSite889->addChildren(*TouchSensor890);

CShape* Shape891 = (CShape *)(m_pScene.createNode("Shape"));
Shape891->setUSE("HAnimSiteShape");
HAnimSite889->addChildren(*Shape891);

HAnimSegment846->addChildren(*HAnimSite889);

CHAnimSite* HAnimSite892 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite892->setDEF("hanim_r_axilla_proximal_pt");
HAnimSite892->setName("r_axilla_proximal_pt");
HAnimSite892->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
CTouchSensor* TouchSensor893 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor893->setDescription("HAnimSite r_axilla_proximal_pt");
HAnimSite892->addChildren(*TouchSensor893);

CShape* Shape894 = (CShape *)(m_pScene.createNode("Shape"));
Shape894->setUSE("HAnimSiteShape");
HAnimSite892->addChildren(*Shape894);

HAnimSegment846->addChildren(*HAnimSite892);

CHAnimSite* HAnimSite895 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite895->setDEF("hanim_r_clavicale_pt");
HAnimSite895->setName("r_clavicale_pt");
HAnimSite895->setTranslation(new float[3]{-0.0115,1.4943,0.04});
CTouchSensor* TouchSensor896 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor896->setDescription("HAnimSite r_clavicale_pt");
HAnimSite895->addChildren(*TouchSensor896);

CShape* Shape897 = (CShape *)(m_pScene.createNode("Shape"));
Shape897->setUSE("HAnimSiteShape");
HAnimSite895->addChildren(*Shape897);

HAnimSegment846->addChildren(*HAnimSite895);

HAnimJoint845->addChildren(*HAnimSegment846);

CHAnimJoint* HAnimJoint898 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint898->setDEF("hanim_vc7");
HAnimJoint898->setName("vc7");
HAnimJoint898->setCenter(new float[3]{0.0066,1.5132,-0.0301});
CHAnimSegment* HAnimSegment899 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment899->setDEF("hanim_c7");
HAnimSegment899->setName("c7");
CTransform* Transform900 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform901 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape902 = (CShape *)(m_pScene.createNode("Shape"));
Shape902->setUSE("HAnimJointShape");
Transform901->addChild(*Shape902);

Transform900->addChildren(*Transform901);

HAnimSegment899->addChildren(*Transform900);

CShape* Shape903 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet904 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet904->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA905 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA905->setUSE("HAnimSegmentLineColorRGBA");
LineSet904->setColor(*ColorRGBA905);

CCoordinate* Coordinate906 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate906->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143});
LineSet904->setCoord(*Coordinate906);

Shape903->setGeometry(LineSet904);

HAnimSegment899->addChildren(*Shape903);

HAnimJoint898->addChildren(*HAnimSegment899);

CHAnimJoint* HAnimJoint907 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint907->setDEF("hanim_vc6");
HAnimJoint907->setName("vc6");
HAnimJoint907->setCenter(new float[3]{0.0066,1.5357,-0.0143});
CHAnimSegment* HAnimSegment908 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment908->setDEF("hanim_c6");
HAnimSegment908->setName("c6");
CTransform* Transform909 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform910 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape911 = (CShape *)(m_pScene.createNode("Shape"));
Shape911->setUSE("HAnimJointShape");
Transform910->addChild(*Shape911);

Transform909->addChildren(*Transform910);

HAnimSegment908->addChildren(*Transform909);

CShape* Shape912 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet913 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet913->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA914 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA914->setUSE("HAnimSegmentLineColorRGBA");
LineSet913->setColor(*ColorRGBA914);

CCoordinate* Coordinate915 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate915->setPoint(new float[6]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082});
LineSet913->setCoord(*Coordinate915);

Shape912->setGeometry(LineSet913);

HAnimSegment908->addChildren(*Shape912);

HAnimJoint907->addChildren(*HAnimSegment908);

CHAnimJoint* HAnimJoint916 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint916->setDEF("hanim_vc5");
HAnimJoint916->setName("vc5");
HAnimJoint916->setCenter(new float[3]{0.0066,1.552,-0.0082});
CHAnimSegment* HAnimSegment917 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment917->setDEF("hanim_c5");
HAnimSegment917->setName("c5");
CTransform* Transform918 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform919 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape920 = (CShape *)(m_pScene.createNode("Shape"));
Shape920->setUSE("HAnimJointShape");
Transform919->addChild(*Shape920);

Transform918->addChildren(*Transform919);

HAnimSegment917->addChildren(*Transform918);

CShape* Shape921 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet922 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet922->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA923 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA923->setUSE("HAnimSegmentLineColorRGBA");
LineSet922->setColor(*ColorRGBA923);

CCoordinate* Coordinate924 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate924->setPoint(new float[6]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084});
LineSet922->setCoord(*Coordinate924);

Shape921->setGeometry(LineSet922);

HAnimSegment917->addChildren(*Shape921);

HAnimJoint916->addChildren(*HAnimSegment917);

CHAnimJoint* HAnimJoint925 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint925->setDEF("hanim_vc4");
HAnimJoint925->setName("vc4");
HAnimJoint925->setCenter(new float[3]{0.0066,1.5662,-0.0084});
CHAnimSegment* HAnimSegment926 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment926->setDEF("hanim_c4");
HAnimSegment926->setName("c4");
CTransform* Transform927 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform928 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape929 = (CShape *)(m_pScene.createNode("Shape"));
Shape929->setUSE("HAnimJointShape");
Transform928->addChild(*Shape929);

Transform927->addChildren(*Transform928);

HAnimSegment926->addChildren(*Transform927);

CShape* Shape930 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet931 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet931->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA932 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA932->setUSE("HAnimSegmentLineColorRGBA");
LineSet931->setColor(*ColorRGBA932);

CCoordinate* Coordinate933 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate933->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103});
LineSet931->setCoord(*Coordinate933);

Shape930->setGeometry(LineSet931);

HAnimSegment926->addChildren(*Shape930);

HAnimJoint925->addChildren(*HAnimSegment926);

CHAnimJoint* HAnimJoint934 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint934->setDEF("hanim_vc3");
HAnimJoint934->setName("vc3");
HAnimJoint934->setCenter(new float[3]{0.0066,1.58,-0.0103});
CHAnimSegment* HAnimSegment935 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment935->setDEF("hanim_c3");
HAnimSegment935->setName("c3");
CTransform* Transform936 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform937 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape938 = (CShape *)(m_pScene.createNode("Shape"));
Shape938->setUSE("HAnimJointShape");
Transform937->addChild(*Shape938);

Transform936->addChildren(*Transform937);

HAnimSegment935->addChildren(*Transform936);

CShape* Shape939 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet940 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet940->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA941 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA941->setUSE("HAnimSegmentLineColorRGBA");
LineSet940->setColor(*ColorRGBA941);

CCoordinate* Coordinate942 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate942->setPoint(new float[6]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103});
LineSet940->setCoord(*Coordinate942);

Shape939->setGeometry(LineSet940);

HAnimSegment935->addChildren(*Shape939);

CHAnimSite* HAnimSite943 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite943->setDEF("hanim_adams_apple_pt");
HAnimSite943->setName("adams_apple_pt");
HAnimSite943->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor944 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor944->setDescription("HAnimSite adams_apple_pt");
HAnimSite943->addChildren(*TouchSensor944);

CShape* Shape945 = (CShape *)(m_pScene.createNode("Shape"));
Shape945->setUSE("HAnimSiteShape");
HAnimSite943->addChildren(*Shape945);

HAnimSegment935->addChildren(*HAnimSite943);

HAnimJoint934->addChildren(*HAnimSegment935);

CHAnimJoint* HAnimJoint946 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint946->setDEF("hanim_vc2");
HAnimJoint946->setName("vc2");
HAnimJoint946->setCenter(new float[3]{0.0066,1.5928,-0.0103});
CHAnimSegment* HAnimSegment947 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment947->setDEF("hanim_c2");
HAnimSegment947->setName("c2");
CTransform* Transform948 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform949 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape950 = (CShape *)(m_pScene.createNode("Shape"));
Shape950->setUSE("HAnimJointShape");
Transform949->addChild(*Shape950);

Transform948->addChildren(*Transform949);

HAnimSegment947->addChildren(*Transform948);

CShape* Shape951 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet952 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet952->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA953 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA953->setUSE("HAnimSegmentLineColorRGBA");
LineSet952->setColor(*ColorRGBA953);

CCoordinate* Coordinate954 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate954->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034});
LineSet952->setCoord(*Coordinate954);

Shape951->setGeometry(LineSet952);

HAnimSegment947->addChildren(*Shape951);

HAnimJoint946->addChildren(*HAnimSegment947);

CHAnimJoint* HAnimJoint955 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint955->setDEF("hanim_vc1");
HAnimJoint955->setName("vc1");
HAnimJoint955->setCenter(new float[3]{0.0066,1.6144,-0.0034});
CHAnimSegment* HAnimSegment956 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment956->setDEF("hanim_c1");
HAnimSegment956->setName("c1");
CTransform* Transform957 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform958 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape959 = (CShape *)(m_pScene.createNode("Shape"));
Shape959->setUSE("HAnimJointShape");
Transform958->addChild(*Shape959);

Transform957->addChildren(*Transform958);

HAnimSegment956->addChildren(*Transform957);

CShape* Shape960 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet961 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet961->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA962 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA962->setUSE("HAnimSegmentLineColorRGBA");
LineSet961->setColor(*ColorRGBA962);

CCoordinate* Coordinate963 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate963->setPoint(new float[6]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236});
LineSet961->setCoord(*Coordinate963);

Shape960->setGeometry(LineSet961);

HAnimSegment956->addChildren(*Shape960);

CHAnimSite* HAnimSite964 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite964->setDEF("hanim_glabella_pt");
HAnimSite964->setName("glabella_pt");
HAnimSite964->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor965 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor965->setDescription("HAnimSite glabella_pt");
HAnimSite964->addChildren(*TouchSensor965);

CShape* Shape966 = (CShape *)(m_pScene.createNode("Shape"));
Shape966->setUSE("HAnimSiteShape");
HAnimSite964->addChildren(*Shape966);

HAnimSegment956->addChildren(*HAnimSite964);

CHAnimSite* HAnimSite967 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite967->setDEF("hanim_l_ectocanthus_pt");
HAnimSite967->setName("l_ectocanthus_pt");
HAnimSite967->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor968 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor968->setDescription("HAnimSite l_ectocanthus_pt");
HAnimSite967->addChildren(*TouchSensor968);

CShape* Shape969 = (CShape *)(m_pScene.createNode("Shape"));
Shape969->setUSE("HAnimSiteShape");
HAnimSite967->addChildren(*Shape969);

HAnimSegment956->addChildren(*HAnimSite967);

CHAnimSite* HAnimSite970 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite970->setDEF("hanim_l_infraorbitale_pt");
HAnimSite970->setName("l_infraorbitale_pt");
HAnimSite970->setTranslation(new float[3]{0.0341,1.6171,0.0752});
CTouchSensor* TouchSensor971 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor971->setDescription("HAnimSite l_infraorbitale_pt");
HAnimSite970->addChildren(*TouchSensor971);

CShape* Shape972 = (CShape *)(m_pScene.createNode("Shape"));
Shape972->setUSE("HAnimSiteShape");
HAnimSite970->addChildren(*Shape972);

HAnimSegment956->addChildren(*HAnimSite970);

CHAnimSite* HAnimSite973 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite973->setDEF("hanim_l_tragion_pt");
HAnimSite973->setName("l_tragion_pt");
HAnimSite973->setTranslation(new float[3]{0.0739,1.6348,0.0282});
CTouchSensor* TouchSensor974 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor974->setDescription("HAnimSite l_tragion_pt");
HAnimSite973->addChildren(*TouchSensor974);

CShape* Shape975 = (CShape *)(m_pScene.createNode("Shape"));
Shape975->setUSE("HAnimSiteShape");
HAnimSite973->addChildren(*Shape975);

HAnimSegment956->addChildren(*HAnimSite973);

CHAnimSite* HAnimSite976 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite976->setDEF("hanim_nuchale_pt");
HAnimSite976->setName("nuchale_pt");
HAnimSite976->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
CTouchSensor* TouchSensor977 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor977->setDescription("HAnimSite nuchale_pt");
HAnimSite976->addChildren(*TouchSensor977);

CShape* Shape978 = (CShape *)(m_pScene.createNode("Shape"));
Shape978->setUSE("HAnimSiteShape");
HAnimSite976->addChildren(*Shape978);

HAnimSegment956->addChildren(*HAnimSite976);

CHAnimSite* HAnimSite979 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite979->setDEF("hanim_opisthocranion_pt");
HAnimSite979->setName("opisthocranion_pt");
HAnimSite979->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor980 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor980->setDescription("HAnimSite opisthocranion_pt");
HAnimSite979->addChildren(*TouchSensor980);

CShape* Shape981 = (CShape *)(m_pScene.createNode("Shape"));
Shape981->setUSE("HAnimSiteShape");
HAnimSite979->addChildren(*Shape981);

HAnimSegment956->addChildren(*HAnimSite979);

CHAnimSite* HAnimSite982 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite982->setDEF("hanim_r_ectocanthus_pt");
HAnimSite982->setName("r_ectocanthus_pt");
HAnimSite982->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor983 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor983->setDescription("HAnimSite r_ectocanthus_pt");
HAnimSite982->addChildren(*TouchSensor983);

CShape* Shape984 = (CShape *)(m_pScene.createNode("Shape"));
Shape984->setUSE("HAnimSiteShape");
HAnimSite982->addChildren(*Shape984);

HAnimSegment956->addChildren(*HAnimSite982);

CHAnimSite* HAnimSite985 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite985->setDEF("hanim_r_infraorbitale_pt");
HAnimSite985->setName("r_infraorbitale_pt");
HAnimSite985->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
CTouchSensor* TouchSensor986 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor986->setDescription("HAnimSite r_infraorbitale_pt");
HAnimSite985->addChildren(*TouchSensor986);

CShape* Shape987 = (CShape *)(m_pScene.createNode("Shape"));
Shape987->setUSE("HAnimSiteShape");
HAnimSite985->addChildren(*Shape987);

HAnimSegment956->addChildren(*HAnimSite985);

CHAnimSite* HAnimSite988 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite988->setDEF("hanim_r_tragion_pt");
HAnimSite988->setName("r_tragion_pt");
HAnimSite988->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
CTouchSensor* TouchSensor989 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor989->setDescription("HAnimSite r_tragion_pt");
HAnimSite988->addChildren(*TouchSensor989);

CShape* Shape990 = (CShape *)(m_pScene.createNode("Shape"));
Shape990->setUSE("HAnimSiteShape");
HAnimSite988->addChildren(*Shape990);

HAnimSegment956->addChildren(*HAnimSite988);

CHAnimSite* HAnimSite991 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite991->setDEF("hanim_sellion_pt");
HAnimSite991->setName("sellion_pt");
HAnimSite991->setTranslation(new float[3]{0.0058,1.6316,0.0852});
CTouchSensor* TouchSensor992 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor992->setDescription("HAnimSite sellion_pt");
HAnimSite991->addChildren(*TouchSensor992);

CShape* Shape993 = (CShape *)(m_pScene.createNode("Shape"));
Shape993->setUSE("HAnimSiteShape");
HAnimSite991->addChildren(*Shape993);

HAnimSegment956->addChildren(*HAnimSite991);

CHAnimSite* HAnimSite994 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite994->setDEF("hanim_skull_vertex_pt");
HAnimSite994->setName("skull_vertex_pt");
HAnimSite994->setTranslation(new float[3]{0.005,1.7504,0.0055});
CTouchSensor* TouchSensor995 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor995->setDescription("HAnimSite skull_vertex_pt");
HAnimSite994->addChildren(*TouchSensor995);

CShape* Shape996 = (CShape *)(m_pScene.createNode("Shape"));
Shape996->setUSE("HAnimSiteShape");
HAnimSite994->addChildren(*Shape996);

HAnimSegment956->addChildren(*HAnimSite994);

HAnimJoint955->addChildren(*HAnimSegment956);

CHAnimJoint* HAnimJoint997 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint997->setDEF("hanim_skullbase");
HAnimJoint997->setName("skullbase");
HAnimJoint997->setCenter(new float[3]{0.0044,1.6209,0.0236});
CHAnimDisplacer* HAnimDisplacer998 = (CHAnimDisplacer *)(m_pScene.createNode("HAnimDisplacer"));
HAnimDisplacer998->setDEF("Joe_skull_tip_raiser_action");
HAnimDisplacer998->setName("skull_tip_raiser_action");
HAnimDisplacer998->setCoordIndex(new int[10]{0,1,2,3,4,5,6,7,8,9});
HAnimDisplacer998->setDisplacements(new float[30]{0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15});
HAnimJoint997->addDisplacers(*HAnimDisplacer998);

CHAnimSegment* HAnimSegment999 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment999->setDEF("hanim_skull");
HAnimSegment999->setName("skull");
CTransform* Transform1000 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1001 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1002 = (CShape *)(m_pScene.createNode("Shape"));
Shape1002->setUSE("HAnimJointShape");
Transform1001->addChild(*Shape1002);

Transform1000->addChildren(*Transform1001);

HAnimSegment999->addChildren(*Transform1000);

CShape* Shape1003 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1004 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1004->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1005 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1005->setUSE("HAnimSegmentLineColorRGBA");
LineSet1004->setColor(*ColorRGBA1005);

CCoordinate* Coordinate1006 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1006->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet1004->setCoord(*Coordinate1006);

Shape1003->setGeometry(LineSet1004);

HAnimSegment999->addChildren(*Shape1003);

CShape* Shape1007 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1008 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1008->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1009 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1009->setUSE("HAnimSegmentLineColorRGBA");
LineSet1008->setColor(*ColorRGBA1009);

CCoordinate* Coordinate1010 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1010->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet1008->setCoord(*Coordinate1010);

Shape1007->setGeometry(LineSet1008);

HAnimSegment999->addChildren(*Shape1007);

CShape* Shape1011 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1012 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1012->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1013 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1013->setUSE("HAnimSegmentLineColorRGBA");
LineSet1012->setColor(*ColorRGBA1013);

CCoordinate* Coordinate1014 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1014->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet1012->setCoord(*Coordinate1014);

Shape1011->setGeometry(LineSet1012);

HAnimSegment999->addChildren(*Shape1011);

CShape* Shape1015 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1016 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1016->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1017 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1017->setUSE("HAnimSegmentLineColorRGBA");
LineSet1016->setColor(*ColorRGBA1017);

CCoordinate* Coordinate1018 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1018->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet1016->setCoord(*Coordinate1018);

Shape1015->setGeometry(LineSet1016);

HAnimSegment999->addChildren(*Shape1015);

CShape* Shape1019 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1020 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1020->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1021 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1021->setUSE("HAnimSegmentLineColorRGBA");
LineSet1020->setColor(*ColorRGBA1021);

CCoordinate* Coordinate1022 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1022->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet1020->setCoord(*Coordinate1022);

Shape1019->setGeometry(LineSet1020);

HAnimSegment999->addChildren(*Shape1019);

CShape* Shape1023 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1024 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1024->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1025 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1025->setUSE("HAnimSegmentLineColorRGBA");
LineSet1024->setColor(*ColorRGBA1025);

CCoordinate* Coordinate1026 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1026->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet1024->setCoord(*Coordinate1026);

Shape1023->setGeometry(LineSet1024);

HAnimSegment999->addChildren(*Shape1023);

CShape* Shape1027 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1028 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1028->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1029 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1029->setUSE("HAnimSegmentLineColorRGBA");
LineSet1028->setColor(*ColorRGBA1029);

CCoordinate* Coordinate1030 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1030->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet1028->setCoord(*Coordinate1030);

Shape1027->setGeometry(LineSet1028);

HAnimSegment999->addChildren(*Shape1027);

CHAnimSite* HAnimSite1031 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1031->setDEF("hanim_l_gonion_pt");
HAnimSite1031->setName("l_gonion_pt");
HAnimSite1031->setTranslation(new float[3]{0.0631,1.553,0.033});
CTouchSensor* TouchSensor1032 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1032->setDescription("HAnimSite l_gonion_pt");
HAnimSite1031->addChildren(*TouchSensor1032);

CShape* Shape1033 = (CShape *)(m_pScene.createNode("Shape"));
Shape1033->setUSE("HAnimSiteShape");
HAnimSite1031->addChildren(*Shape1033);

HAnimSegment999->addChildren(*HAnimSite1031);

CHAnimSite* HAnimSite1034 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1034->setDEF("hanim_menton_pt");
HAnimSite1034->setName("menton_pt");
HAnimSite1034->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1035 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1035->setDescription("HAnimSite menton_pt");
HAnimSite1034->addChildren(*TouchSensor1035);

CShape* Shape1036 = (CShape *)(m_pScene.createNode("Shape"));
Shape1036->setUSE("HAnimSiteShape");
HAnimSite1034->addChildren(*Shape1036);

HAnimSegment999->addChildren(*HAnimSite1034);

CHAnimSite* HAnimSite1037 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1037->setDEF("hanim_r_gonion_pt");
HAnimSite1037->setName("r_gonion_pt");
HAnimSite1037->setTranslation(new float[3]{-0.052,1.5529,0.0347});
CTouchSensor* TouchSensor1038 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1038->setDescription("HAnimSite r_gonion_pt");
HAnimSite1037->addChildren(*TouchSensor1038);

CShape* Shape1039 = (CShape *)(m_pScene.createNode("Shape"));
Shape1039->setUSE("HAnimSiteShape");
HAnimSite1037->addChildren(*Shape1039);

HAnimSegment999->addChildren(*HAnimSite1037);

CHAnimSite* HAnimSite1040 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1040->setDEF("hanim_supramenton_pt");
HAnimSite1040->setName("supramenton_pt");
HAnimSite1040->setTranslation(new float[3]{0.0061,1.541,0.0805});
CTouchSensor* TouchSensor1041 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1041->setDescription("HAnimSite supramenton_pt");
HAnimSite1040->addChildren(*TouchSensor1041);

CShape* Shape1042 = (CShape *)(m_pScene.createNode("Shape"));
Shape1042->setUSE("HAnimSiteShape");
HAnimSite1040->addChildren(*Shape1042);

HAnimSegment999->addChildren(*HAnimSite1040);

HAnimJoint997->addChildren(*HAnimSegment999);

CHAnimJoint* HAnimJoint1043 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1043->setDEF("hanim_l_eyelid_joint");
HAnimJoint1043->setName("l_eyelid_joint");
HAnimJoint1043->setCenter(new float[3]{0,1,0});
HAnimJoint997->addChildren(*HAnimJoint1043);

CHAnimJoint* HAnimJoint1044 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1044->setDEF("hanim_r_eyelid_joint");
HAnimJoint1044->setName("r_eyelid_joint");
HAnimJoint1044->setCenter(new float[3]{0,1,0});
HAnimJoint997->addChildren(*HAnimJoint1044);

CHAnimJoint* HAnimJoint1045 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1045->setDEF("hanim_l_eyeball_joint");
HAnimJoint1045->setName("l_eyeball_joint");
HAnimJoint1045->setCenter(new float[3]{0,1,0});
HAnimJoint997->addChildren(*HAnimJoint1045);

CHAnimJoint* HAnimJoint1046 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1046->setDEF("hanim_r_eyeball_joint");
HAnimJoint1046->setName("r_eyeball_joint");
HAnimJoint1046->setCenter(new float[3]{0,1,0});
HAnimJoint997->addChildren(*HAnimJoint1046);

CHAnimJoint* HAnimJoint1047 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1047->setDEF("hanim_l_eyebrow_joint");
HAnimJoint1047->setName("l_eyebrow_joint");
HAnimJoint1047->setCenter(new float[3]{0,1,0});
HAnimJoint997->addChildren(*HAnimJoint1047);

CHAnimJoint* HAnimJoint1048 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1048->setDEF("hanim_r_eyebrow_joint");
HAnimJoint1048->setName("r_eyebrow_joint");
HAnimJoint1048->setCenter(new float[3]{0,1,0});
HAnimJoint997->addChildren(*HAnimJoint1048);

CHAnimJoint* HAnimJoint1049 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1049->setDEF("hanim_temporomandibular");
HAnimJoint1049->setName("temporomandibular");
HAnimJoint1049->setCenter(new float[3]{0,1,0});
HAnimJoint997->addChildren(*HAnimJoint1049);

HAnimJoint955->addChildren(*HAnimJoint997);

HAnimJoint946->addChildren(*HAnimJoint955);

HAnimJoint934->addChildren(*HAnimJoint946);

HAnimJoint925->addChildren(*HAnimJoint934);

HAnimJoint916->addChildren(*HAnimJoint925);

HAnimJoint907->addChildren(*HAnimJoint916);

HAnimJoint898->addChildren(*HAnimJoint907);

HAnimJoint845->addChildren(*HAnimJoint898);

CHAnimJoint* HAnimJoint1050 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1050->setDEF("hanim_l_sternoclavicular");
HAnimJoint1050->setName("l_sternoclavicular");
HAnimJoint1050->setCenter(new float[3]{0.082,1.4488,-0.0353});
CHAnimSegment* HAnimSegment1051 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1051->setDEF("hanim_l_clavicle");
HAnimSegment1051->setName("l_clavicle");
CTransform* Transform1052 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1053 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1054 = (CShape *)(m_pScene.createNode("Shape"));
Shape1054->setUSE("HAnimJointShape");
Transform1053->addChild(*Shape1054);

Transform1052->addChildren(*Transform1053);

HAnimSegment1051->addChildren(*Transform1052);

CShape* Shape1055 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1056 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1056->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1057 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1057->setUSE("HAnimSegmentLineColorRGBA");
LineSet1056->setColor(*ColorRGBA1057);

CCoordinate* Coordinate1058 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1058->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424});
LineSet1056->setCoord(*Coordinate1058);

Shape1055->setGeometry(LineSet1056);

HAnimSegment1051->addChildren(*Shape1055);

HAnimJoint1050->addChildren(*HAnimSegment1051);

CHAnimJoint* HAnimJoint1059 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1059->setDEF("hanim_l_acromioclavicular");
HAnimJoint1059->setName("l_acromioclavicular");
HAnimJoint1059->setCenter(new float[3]{0.0962,1.4269,-0.0424});
CHAnimSegment* HAnimSegment1060 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1060->setDEF("hanim_l_scapula");
HAnimSegment1060->setName("l_scapula");
CTransform* Transform1061 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1062 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1063 = (CShape *)(m_pScene.createNode("Shape"));
Shape1063->setUSE("HAnimJointShape");
Transform1062->addChild(*Shape1063);

Transform1061->addChildren(*Transform1062);

HAnimSegment1060->addChildren(*Transform1061);

CShape* Shape1064 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1065 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1065->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1066 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1066->setUSE("HAnimSegmentLineColorRGBA");
LineSet1065->setColor(*ColorRGBA1066);

CCoordinate* Coordinate1067 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1067->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387});
LineSet1065->setCoord(*Coordinate1067);

Shape1064->setGeometry(LineSet1065);

HAnimSegment1060->addChildren(*Shape1064);

CHAnimSite* HAnimSite1068 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1068->setDEF("hanim_l_bideltoid_pt");
HAnimSite1068->setName("l_bideltoid_pt");
HAnimSite1068->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1069 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1069->setDescription("HAnimSite l_bideltoid_pt");
HAnimSite1068->addChildren(*TouchSensor1069);

CShape* Shape1070 = (CShape *)(m_pScene.createNode("Shape"));
Shape1070->setUSE("HAnimSiteShape");
HAnimSite1068->addChildren(*Shape1070);

HAnimSegment1060->addChildren(*HAnimSite1068);

CHAnimSite* HAnimSite1071 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1071->setDEF("hanim_l_humeral_lateral_epicondyles_pt");
HAnimSite1071->setName("l_humeral_lateral_epicondyles_pt");
HAnimSite1071->setTranslation(new float[3]{0.228,1.1482,-0.11});
CTouchSensor* TouchSensor1072 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1072->setDescription("HAnimSite l_humeral_lateral_epicondyles_pt");
HAnimSite1071->addChildren(*TouchSensor1072);

CShape* Shape1073 = (CShape *)(m_pScene.createNode("Shape"));
Shape1073->setUSE("HAnimSiteShape");
HAnimSite1071->addChildren(*Shape1073);

HAnimSegment1060->addChildren(*HAnimSite1071);

HAnimJoint1059->addChildren(*HAnimSegment1060);

CHAnimJoint* HAnimJoint1074 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1074->setDEF("hanim_l_shoulder");
HAnimJoint1074->setName("l_shoulder");
HAnimJoint1074->setCenter(new float[3]{0.2029,1.4376,-0.0387});
CHAnimSegment* HAnimSegment1075 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1075->setDEF("hanim_l_upperarm");
HAnimSegment1075->setName("l_upperarm");
CTransform* Transform1076 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1077 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1078 = (CShape *)(m_pScene.createNode("Shape"));
Shape1078->setUSE("HAnimJointShape");
Transform1077->addChild(*Shape1078);

Transform1076->addChildren(*Transform1077);

HAnimSegment1075->addChildren(*Transform1076);

CShape* Shape1079 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1080 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1080->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1081 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1081->setUSE("HAnimSegmentLineColorRGBA");
LineSet1080->setColor(*ColorRGBA1081);

CCoordinate* Coordinate1082 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1082->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
LineSet1080->setCoord(*Coordinate1082);

Shape1079->setGeometry(LineSet1080);

HAnimSegment1075->addChildren(*Shape1079);

CHAnimSite* HAnimSite1083 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1083->setDEF("hanim_l_humeral_medial_epicondyles_pt");
HAnimSite1083->setName("l_humeral_medial_epicondyles_pt");
HAnimSite1083->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
CTouchSensor* TouchSensor1084 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1084->setDescription("HAnimSite l_humeral_medial_epicondyles_pt");
HAnimSite1083->addChildren(*TouchSensor1084);

CShape* Shape1085 = (CShape *)(m_pScene.createNode("Shape"));
Shape1085->setUSE("HAnimSiteShape");
HAnimSite1083->addChildren(*Shape1085);

HAnimSegment1075->addChildren(*HAnimSite1083);

CHAnimSite* HAnimSite1086 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1086->setDEF("hanim_l_olecranon_pt");
HAnimSite1086->setName("l_olecranon_pt");
HAnimSite1086->setTranslation(new float[3]{-0.1962,1.1375,-0.1123});
CTouchSensor* TouchSensor1087 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1087->setDescription("HAnimSite l_olecranon_pt");
HAnimSite1086->addChildren(*TouchSensor1087);

CShape* Shape1088 = (CShape *)(m_pScene.createNode("Shape"));
Shape1088->setUSE("HAnimSiteShape");
HAnimSite1086->addChildren(*Shape1088);

HAnimSegment1075->addChildren(*HAnimSite1086);

CHAnimSite* HAnimSite1089 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1089->setDEF("hanim_l_radial_styloid_pt");
HAnimSite1089->setName("l_radial_styloid_pt");
HAnimSite1089->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
CTouchSensor* TouchSensor1090 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1090->setDescription("HAnimSite l_radial_styloid_pt");
HAnimSite1089->addChildren(*TouchSensor1090);

CShape* Shape1091 = (CShape *)(m_pScene.createNode("Shape"));
Shape1091->setUSE("HAnimSiteShape");
HAnimSite1089->addChildren(*Shape1091);

HAnimSegment1075->addChildren(*HAnimSite1089);

CHAnimSite* HAnimSite1092 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1092->setDEF("hanim_l_radiale_pt");
HAnimSite1092->setName("l_radiale_pt");
HAnimSite1092->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
CTouchSensor* TouchSensor1093 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1093->setDescription("HAnimSite l_radiale_pt");
HAnimSite1092->addChildren(*TouchSensor1093);

CShape* Shape1094 = (CShape *)(m_pScene.createNode("Shape"));
Shape1094->setUSE("HAnimSiteShape");
HAnimSite1092->addChildren(*Shape1094);

HAnimSegment1075->addChildren(*HAnimSite1092);

HAnimJoint1074->addChildren(*HAnimSegment1075);

CHAnimJoint* HAnimJoint1095 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1095->setDEF("hanim_l_elbow");
HAnimJoint1095->setName("l_elbow");
HAnimJoint1095->setCenter(new float[3]{0.2014,1.1357,-0.0682});
CHAnimSegment* HAnimSegment1096 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1096->setDEF("hanim_l_forearm");
HAnimSegment1096->setName("l_forearm");
CTransform* Transform1097 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1098 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1099 = (CShape *)(m_pScene.createNode("Shape"));
Shape1099->setUSE("HAnimJointShape");
Transform1098->addChild(*Shape1099);

Transform1097->addChildren(*Transform1098);

HAnimSegment1096->addChildren(*Transform1097);

CShape* Shape1100 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1101 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1101->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1102 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1102->setUSE("HAnimSegmentLineColorRGBA");
LineSet1101->setColor(*ColorRGBA1102);

CCoordinate* Coordinate1103 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1103->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
LineSet1101->setCoord(*Coordinate1103);

Shape1100->setGeometry(LineSet1101);

HAnimSegment1096->addChildren(*Shape1100);

CHAnimSite* HAnimSite1104 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1104->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite1104->setName("l_ulnar_styloid_pt");
HAnimSite1104->setTranslation(new float[3]{-0.2142,0.8529,-0.0648});
CTouchSensor* TouchSensor1105 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1105->setDescription("HAnimSite l_ulnar_styloid_pt");
HAnimSite1104->addChildren(*TouchSensor1105);

CShape* Shape1106 = (CShape *)(m_pScene.createNode("Shape"));
Shape1106->setUSE("HAnimSiteShape");
HAnimSite1104->addChildren(*Shape1106);

HAnimSegment1096->addChildren(*HAnimSite1104);

HAnimJoint1095->addChildren(*HAnimSegment1096);

CHAnimJoint* HAnimJoint1107 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1107->setDEF("hanim_l_radiocarpal");
HAnimJoint1107->setName("l_radiocarpal");
HAnimJoint1107->setCenter(new float[3]{0.1984,0.8663,-0.0583});
CHAnimSegment* HAnimSegment1108 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1108->setDEF("hanim_l_carpal");
HAnimSegment1108->setName("l_carpal");
CTransform* Transform1109 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1109->setTranslation(new float[3]{0.2,0.85,-0.05});
Transform1109->setRotation(new float[4]{0,0,1,-3.14});
Transform1109->setScale(new float[3]{0.2,0.2,0.2});
CTransform* Transform1110 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1110->setRotation(new float[4]{0,1,0,-1.57});
CShape* Shape1111 = (CShape *)(m_pScene.createNode("Shape"));
Shape1111->setUSE("HAnimJointShape");
Transform1110->addChild(*Shape1111);

Transform1109->addChildren(*Transform1110);

HAnimSegment1108->addChildren(*Transform1109);

CShape* Shape1112 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1113 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1113->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1114 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1114->setUSE("HAnimSegmentLineColorRGBA");
LineSet1113->setColor(*ColorRGBA1114);

CCoordinate* Coordinate1115 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1115->setPoint(new float[6]{0.1984,0.8663,-0.0583,0,1,0});
LineSet1113->setCoord(*Coordinate1115);

Shape1112->setGeometry(LineSet1113);

HAnimSegment1108->addChildren(*Shape1112);

CShape* Shape1116 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1117 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1117->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1118 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1118->setUSE("HAnimSegmentLineColorRGBA");
LineSet1117->setColor(*ColorRGBA1118);

CCoordinate* Coordinate1119 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1119->setPoint(new float[6]{0.1984,0.8663,-0.0583,0,1,0});
LineSet1117->setCoord(*Coordinate1119);

Shape1116->setGeometry(LineSet1117);

HAnimSegment1108->addChildren(*Shape1116);

CShape* Shape1120 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1121 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1121->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1122 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1122->setUSE("HAnimSegmentLineColorRGBA");
LineSet1121->setColor(*ColorRGBA1122);

CCoordinate* Coordinate1123 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1123->setPoint(new float[6]{0.1984,0.8663,-0.0583,0,1,0});
LineSet1121->setCoord(*Coordinate1123);

Shape1120->setGeometry(LineSet1121);

HAnimSegment1108->addChildren(*Shape1120);

CShape* Shape1124 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1125 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1125->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1126 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1126->setUSE("HAnimSegmentLineColorRGBA");
LineSet1125->setColor(*ColorRGBA1126);

CCoordinate* Coordinate1127 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1127->setPoint(new float[6]{0.1984,0.8663,-0.0583,0,1,0});
LineSet1125->setCoord(*Coordinate1127);

Shape1124->setGeometry(LineSet1125);

HAnimSegment1108->addChildren(*Shape1124);

HAnimJoint1107->addChildren(*HAnimSegment1108);

CHAnimJoint* HAnimJoint1128 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1128->setDEF("hanim_l_midcarpal_1");
HAnimJoint1128->setName("l_midcarpal_1");
HAnimJoint1128->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment1129 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1129->setDEF("hanim_l_trapezium");
HAnimSegment1129->setName("l_trapezium");
CTransform* Transform1130 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1131 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1132 = (CShape *)(m_pScene.createNode("Shape"));
Shape1132->setUSE("HAnimJointShape");
Transform1131->addChild(*Shape1132);

Transform1130->addChildren(*Transform1131);

HAnimSegment1129->addChildren(*Transform1130);

CShape* Shape1133 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1134 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1134->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1135 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1135->setUSE("HAnimSegmentLineColorRGBA");
LineSet1134->setColor(*ColorRGBA1135);

CCoordinate* Coordinate1136 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1136->setPoint(new float[6]{0,1,0,0.1924,0.8472,-0.0534});
LineSet1134->setCoord(*Coordinate1136);

Shape1133->setGeometry(LineSet1134);

HAnimSegment1129->addChildren(*Shape1133);

HAnimJoint1128->addChildren(*HAnimSegment1129);

CHAnimJoint* HAnimJoint1137 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1137->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint1137->setName("l_carpometacarpal_1");
HAnimJoint1137->setCenter(new float[3]{0.1924,0.8472,-0.0534});
CHAnimSegment* HAnimSegment1138 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1138->setDEF("hanim_l_metacarpal_1");
HAnimSegment1138->setName("l_metacarpal_1");
CTransform* Transform1139 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1140 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1141 = (CShape *)(m_pScene.createNode("Shape"));
Shape1141->setUSE("HAnimJointShape");
Transform1140->addChild(*Shape1141);

Transform1139->addChildren(*Transform1140);

HAnimSegment1138->addChildren(*Transform1139);

CShape* Shape1142 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1143 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1143->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1144 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1144->setUSE("HAnimSegmentLineColorRGBA");
LineSet1143->setColor(*ColorRGBA1144);

CCoordinate* Coordinate1145 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1145->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246});
LineSet1143->setCoord(*Coordinate1145);

Shape1142->setGeometry(LineSet1143);

HAnimSegment1138->addChildren(*Shape1142);

HAnimJoint1137->addChildren(*HAnimSegment1138);

CHAnimJoint* HAnimJoint1146 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1146->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint1146->setName("l_metacarpophalangeal_1");
HAnimJoint1146->setCenter(new float[3]{0.1951,0.8226,0.0246});
CHAnimSegment* HAnimSegment1147 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1147->setDEF("hanim_l_carpal_proximal_phalanx_1");
HAnimSegment1147->setName("l_carpal_proximal_phalanx_1");
CTransform* Transform1148 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1149 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1150 = (CShape *)(m_pScene.createNode("Shape"));
Shape1150->setUSE("HAnimJointShape");
Transform1149->addChild(*Shape1150);

Transform1148->addChildren(*Transform1149);

HAnimSegment1147->addChildren(*Transform1148);

CShape* Shape1151 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1152 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1152->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1153 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1153->setUSE("HAnimSegmentLineColorRGBA");
LineSet1152->setColor(*ColorRGBA1153);

CCoordinate* Coordinate1154 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1154->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464});
LineSet1152->setCoord(*Coordinate1154);

Shape1151->setGeometry(LineSet1152);

HAnimSegment1147->addChildren(*Shape1151);

CHAnimSite* HAnimSite1155 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1155->setDEF("hanim_l_carpal_distal_phalanx_1_tip");
HAnimSite1155->setName("l_carpal_distal_phalanx_1_tip");
HAnimSite1155->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1156 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1156->setDescription("HAnimSite l_carpal_distal_phalanx_1_tip");
HAnimSite1155->addChildren(*TouchSensor1156);

CShape* Shape1157 = (CShape *)(m_pScene.createNode("Shape"));
Shape1157->setUSE("HAnimSiteShape");
HAnimSite1155->addChildren(*Shape1157);

HAnimSegment1147->addChildren(*HAnimSite1155);

HAnimJoint1146->addChildren(*HAnimSegment1147);

CHAnimJoint* HAnimJoint1158 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1158->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint1158->setName("l_carpal_interphalangeal_1");
HAnimJoint1158->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint1146->addChildren(*HAnimJoint1158);

HAnimJoint1137->addChildren(*HAnimJoint1146);

HAnimJoint1128->addChildren(*HAnimJoint1137);

HAnimJoint1107->addChildren(*HAnimJoint1128);

CHAnimJoint* HAnimJoint1159 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1159->setDEF("hanim_l_midcarpal_2");
HAnimJoint1159->setName("l_midcarpal_2");
HAnimJoint1159->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment1160 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1160->setDEF("hanim_l_trapezoid");
HAnimSegment1160->setName("l_trapezoid");
CTransform* Transform1161 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1162 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1163 = (CShape *)(m_pScene.createNode("Shape"));
Shape1163->setUSE("HAnimJointShape");
Transform1162->addChild(*Shape1163);

Transform1161->addChildren(*Transform1162);

HAnimSegment1160->addChildren(*Transform1161);

CShape* Shape1164 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1165 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1165->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1166 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1166->setUSE("HAnimSegmentLineColorRGBA");
LineSet1165->setColor(*ColorRGBA1166);

CCoordinate* Coordinate1167 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1167->setPoint(new float[6]{0,1,0,0.1983,0.8024,-0.028});
LineSet1165->setCoord(*Coordinate1167);

Shape1164->setGeometry(LineSet1165);

HAnimSegment1160->addChildren(*Shape1164);

CHAnimSite* HAnimSite1168 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1168->setDEF("hanim_l_metacarpal_phalanx_2_pt");
HAnimSite1168->setName("l_metacarpal_phalanx_2_pt");
HAnimSite1168->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
CTouchSensor* TouchSensor1169 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1169->setDescription("HAnimSite l_metacarpal_phalanx_2_pt");
HAnimSite1168->addChildren(*TouchSensor1169);

CShape* Shape1170 = (CShape *)(m_pScene.createNode("Shape"));
Shape1170->setUSE("HAnimSiteShape");
HAnimSite1168->addChildren(*Shape1170);

HAnimSegment1160->addChildren(*HAnimSite1168);

HAnimJoint1159->addChildren(*HAnimSegment1160);

CHAnimJoint* HAnimJoint1171 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1171->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint1171->setName("l_carpometacarpal_2");
HAnimJoint1171->setCenter(new float[3]{0.1983,0.8024,-0.028});
CHAnimSegment* HAnimSegment1172 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1172->setDEF("hanim_l_metacarpal_2");
HAnimSegment1172->setName("l_metacarpal_2");
CTransform* Transform1173 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1174 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1175 = (CShape *)(m_pScene.createNode("Shape"));
Shape1175->setUSE("HAnimJointShape");
Transform1174->addChild(*Shape1175);

Transform1173->addChildren(*Transform1174);

HAnimSegment1172->addChildren(*Transform1173);

CShape* Shape1176 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1177 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1177->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1178 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1178->setUSE("HAnimSegmentLineColorRGBA");
LineSet1177->setColor(*ColorRGBA1178);

CCoordinate* Coordinate1179 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1179->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028});
LineSet1177->setCoord(*Coordinate1179);

Shape1176->setGeometry(LineSet1177);

HAnimSegment1172->addChildren(*Shape1176);

HAnimJoint1171->addChildren(*HAnimSegment1172);

CHAnimJoint* HAnimJoint1180 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1180->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint1180->setName("l_metacarpophalangeal_2");
HAnimJoint1180->setCenter(new float[3]{0.1983,0.7815,-0.028});
CHAnimSegment* HAnimSegment1181 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1181->setDEF("hanim_l_carpal_proximal_phalanx_2");
HAnimSegment1181->setName("l_carpal_proximal_phalanx_2");
CTransform* Transform1182 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1183 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1184 = (CShape *)(m_pScene.createNode("Shape"));
Shape1184->setUSE("HAnimJointShape");
Transform1183->addChild(*Shape1184);

Transform1182->addChildren(*Transform1183);

HAnimSegment1181->addChildren(*Transform1182);

CShape* Shape1185 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1186 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1186->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1187 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1187->setUSE("HAnimSegmentLineColorRGBA");
LineSet1186->setColor(*ColorRGBA1187);

CCoordinate* Coordinate1188 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1188->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248});
LineSet1186->setCoord(*Coordinate1188);

Shape1185->setGeometry(LineSet1186);

HAnimSegment1181->addChildren(*Shape1185);

HAnimJoint1180->addChildren(*HAnimSegment1181);

CHAnimJoint* HAnimJoint1189 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1189->setDEF("hanim_l_carpal_proximal_interphalangeal_1");
HAnimJoint1189->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint1189->setCenter(new float[3]{0.2017,0.7363,-0.0248});
CHAnimSegment* HAnimSegment1190 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1190->setDEF("hanim_l_carpal_middle_phalanx_1");
HAnimSegment1190->setName("l_carpal_middle_phalanx_2");
CTransform* Transform1191 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1192 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1193 = (CShape *)(m_pScene.createNode("Shape"));
Shape1193->setUSE("HAnimJointShape");
Transform1192->addChild(*Shape1193);

Transform1191->addChildren(*Transform1192);

HAnimSegment1190->addChildren(*Transform1191);

CShape* Shape1194 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1195 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1195->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1196 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1196->setUSE("HAnimSegmentLineColorRGBA");
LineSet1195->setColor(*ColorRGBA1196);

CCoordinate* Coordinate1197 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1197->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236});
LineSet1195->setCoord(*Coordinate1197);

Shape1194->setGeometry(LineSet1195);

HAnimSegment1190->addChildren(*Shape1194);

CHAnimSite* HAnimSite1198 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1198->setDEF("hanim_l_carpal_distal_phalanx_2_tip");
HAnimSite1198->setName("l_carpal_distal_phalanx_2_tip");
HAnimSite1198->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1199 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1199->setDescription("HAnimSite l_carpal_distal_phalanx_2_tip");
HAnimSite1198->addChildren(*TouchSensor1199);

CShape* Shape1200 = (CShape *)(m_pScene.createNode("Shape"));
Shape1200->setUSE("HAnimSiteShape");
HAnimSite1198->addChildren(*Shape1200);

HAnimSegment1190->addChildren(*HAnimSite1198);

CHAnimSite* HAnimSite1201 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1201->setDEF("hanim_l_dactylion_pt");
HAnimSite1201->setName("l_dactylion_pt");
HAnimSite1201->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
CTouchSensor* TouchSensor1202 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1202->setDescription("HAnimSite l_dactylion_pt");
HAnimSite1201->addChildren(*TouchSensor1202);

CShape* Shape1203 = (CShape *)(m_pScene.createNode("Shape"));
Shape1203->setUSE("HAnimSiteShape");
HAnimSite1201->addChildren(*Shape1203);

HAnimSegment1190->addChildren(*HAnimSite1201);

HAnimJoint1189->addChildren(*HAnimSegment1190);

CHAnimJoint* HAnimJoint1204 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1204->setDEF("hanim_l_carpal_distal_interphalangeal_1");
HAnimJoint1204->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint1204->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint1189->addChildren(*HAnimJoint1204);

HAnimJoint1180->addChildren(*HAnimJoint1189);

HAnimJoint1171->addChildren(*HAnimJoint1180);

HAnimJoint1159->addChildren(*HAnimJoint1171);

HAnimJoint1107->addChildren(*HAnimJoint1159);

CHAnimJoint* HAnimJoint1205 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1205->setDEF("hanim_l_midcarpal_3");
HAnimJoint1205->setName("l_midcarpal_3");
HAnimJoint1205->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment1206 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1206->setDEF("hanim_l_capitate");
HAnimSegment1206->setName("l_capitate");
CTransform* Transform1207 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1208 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1209 = (CShape *)(m_pScene.createNode("Shape"));
Shape1209->setUSE("HAnimJointShape");
Transform1208->addChild(*Shape1209);

Transform1207->addChildren(*Transform1208);

HAnimSegment1206->addChildren(*Transform1207);

CShape* Shape1210 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1211 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1211->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1212 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1212->setUSE("HAnimSegmentLineColorRGBA");
LineSet1211->setColor(*ColorRGBA1212);

CCoordinate* Coordinate1213 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1213->setPoint(new float[6]{0,1,0,0.1987,0.8029,-0.053});
LineSet1211->setCoord(*Coordinate1213);

Shape1210->setGeometry(LineSet1211);

HAnimSegment1206->addChildren(*Shape1210);

CHAnimSite* HAnimSite1214 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1214->setDEF("hanim_l_metacarpal_phalanx_3_pt");
HAnimSite1214->setName("l_metacarpal_phalanx_3_pt");
HAnimSite1214->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1215 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1215->setDescription("HAnimSite l_metacarpal_phalanx_3_pt");
HAnimSite1214->addChildren(*TouchSensor1215);

CShape* Shape1216 = (CShape *)(m_pScene.createNode("Shape"));
Shape1216->setUSE("HAnimSiteShape");
HAnimSite1214->addChildren(*Shape1216);

HAnimSegment1206->addChildren(*HAnimSite1214);

HAnimJoint1205->addChildren(*HAnimSegment1206);

CHAnimJoint* HAnimJoint1217 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1217->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint1217->setName("l_carpometacarpal_3");
HAnimJoint1217->setCenter(new float[3]{0.1987,0.8029,-0.053});
CHAnimSegment* HAnimSegment1218 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1218->setDEF("hanim_l_metacarpal_3");
HAnimSegment1218->setName("l_metacarpal_3");
CTransform* Transform1219 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1220 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1221 = (CShape *)(m_pScene.createNode("Shape"));
Shape1221->setUSE("HAnimJointShape");
Transform1220->addChild(*Shape1221);

Transform1219->addChildren(*Transform1220);

HAnimSegment1218->addChildren(*Transform1219);

CShape* Shape1222 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1223 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1223->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1224 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1224->setUSE("HAnimSegmentLineColorRGBA");
LineSet1223->setColor(*ColorRGBA1224);

CCoordinate* Coordinate1225 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1225->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053});
LineSet1223->setCoord(*Coordinate1225);

Shape1222->setGeometry(LineSet1223);

HAnimSegment1218->addChildren(*Shape1222);

HAnimJoint1217->addChildren(*HAnimSegment1218);

CHAnimJoint* HAnimJoint1226 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1226->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint1226->setName("l_metacarpophalangeal_3");
HAnimJoint1226->setCenter(new float[3]{0.1987,0.7818,-0.053});
CHAnimSegment* HAnimSegment1227 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1227->setDEF("hanim_l_carpal_proximal_phalanx_3");
HAnimSegment1227->setName("l_carpal_proximal_phalanx_3");
CTransform* Transform1228 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1229 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1230 = (CShape *)(m_pScene.createNode("Shape"));
Shape1230->setUSE("HAnimJointShape");
Transform1229->addChild(*Shape1230);

Transform1228->addChildren(*Transform1229);

HAnimSegment1227->addChildren(*Transform1228);

CShape* Shape1231 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1232 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1232->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1233 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1233->setUSE("HAnimSegmentLineColorRGBA");
LineSet1232->setColor(*ColorRGBA1233);

CCoordinate* Coordinate1234 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1234->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503});
LineSet1232->setCoord(*Coordinate1234);

Shape1231->setGeometry(LineSet1232);

HAnimSegment1227->addChildren(*Shape1231);

HAnimJoint1226->addChildren(*HAnimSegment1227);

CHAnimJoint* HAnimJoint1235 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1235->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint1235->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint1235->setCenter(new float[3]{0.2013,0.7273,-0.0503});
CHAnimSegment* HAnimSegment1236 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1236->setDEF("hanim_l_carpal_middle_phalanx_2");
HAnimSegment1236->setName("l_carpal_middle_phalanx_3");
CTransform* Transform1237 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1238 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1239 = (CShape *)(m_pScene.createNode("Shape"));
Shape1239->setUSE("HAnimJointShape");
Transform1238->addChild(*Shape1239);

Transform1237->addChildren(*Transform1238);

HAnimSegment1236->addChildren(*Transform1237);

CShape* Shape1240 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1241 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1241->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1242 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1242->setUSE("HAnimSegmentLineColorRGBA");
LineSet1241->setColor(*ColorRGBA1242);

CCoordinate* Coordinate1243 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1243->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494});
LineSet1241->setCoord(*Coordinate1243);

Shape1240->setGeometry(LineSet1241);

HAnimSegment1236->addChildren(*Shape1240);

CHAnimSite* HAnimSite1244 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1244->setDEF("hanim_l_carpal_distal_phalanx_3_tip");
HAnimSite1244->setName("l_carpal_distal_phalanx_3_tip");
HAnimSite1244->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1245 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1245->setDescription("HAnimSite l_carpal_distal_phalanx_3_tip");
HAnimSite1244->addChildren(*TouchSensor1245);

CShape* Shape1246 = (CShape *)(m_pScene.createNode("Shape"));
Shape1246->setUSE("HAnimSiteShape");
HAnimSite1244->addChildren(*Shape1246);

HAnimSegment1236->addChildren(*HAnimSite1244);

HAnimJoint1235->addChildren(*HAnimSegment1236);

CHAnimJoint* HAnimJoint1247 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1247->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint1247->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint1247->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint1235->addChildren(*HAnimJoint1247);

HAnimJoint1226->addChildren(*HAnimJoint1235);

HAnimJoint1217->addChildren(*HAnimJoint1226);

HAnimJoint1205->addChildren(*HAnimJoint1217);

HAnimJoint1107->addChildren(*HAnimJoint1205);

CHAnimJoint* HAnimJoint1248 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1248->setDEF("hanim_l_midcarpal_4_1");
HAnimJoint1248->setName("l_midcarpal_4_5");
HAnimJoint1248->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment1249 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1249->setDEF("hanim_l_hamate");
HAnimSegment1249->setName("l_hamate");
CTransform* Transform1250 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1251 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1252 = (CShape *)(m_pScene.createNode("Shape"));
Shape1252->setUSE("HAnimJointShape");
Transform1251->addChild(*Shape1252);

Transform1250->addChildren(*Transform1251);

HAnimSegment1249->addChildren(*Transform1250);

CShape* Shape1253 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1254 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1254->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1255 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1255->setUSE("HAnimSegmentLineColorRGBA");
LineSet1254->setColor(*ColorRGBA1255);

CCoordinate* Coordinate1256 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1256->setPoint(new float[6]{0,1,0,0.1956,0.8019,-0.0794});
LineSet1254->setCoord(*Coordinate1256);

Shape1253->setGeometry(LineSet1254);

HAnimSegment1249->addChildren(*Shape1253);

CShape* Shape1257 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1258 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1258->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1259 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1259->setUSE("HAnimSegmentLineColorRGBA");
LineSet1258->setColor(*ColorRGBA1259);

CCoordinate* Coordinate1260 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1260->setPoint(new float[6]{0,1,0,0.1925,0.8066,-0.1036});
LineSet1258->setCoord(*Coordinate1260);

Shape1257->setGeometry(LineSet1258);

HAnimSegment1249->addChildren(*Shape1257);

CHAnimSite* HAnimSite1261 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1261->setDEF("hanim_l_metacarpal_phalanx_5_pt");
HAnimSite1261->setName("l_metacarpal_phalanx_5_pt");
HAnimSite1261->setTranslation(new float[3]{0.1929,0.786,-0.1122});
CTouchSensor* TouchSensor1262 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1262->setDescription("HAnimSite l_metacarpal_phalanx_5_pt");
HAnimSite1261->addChildren(*TouchSensor1262);

CShape* Shape1263 = (CShape *)(m_pScene.createNode("Shape"));
Shape1263->setUSE("HAnimSiteShape");
HAnimSite1261->addChildren(*Shape1263);

HAnimSegment1249->addChildren(*HAnimSite1261);

HAnimJoint1248->addChildren(*HAnimSegment1249);

CHAnimJoint* HAnimJoint1264 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1264->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint1264->setName("l_carpometacarpal_4");
HAnimJoint1264->setCenter(new float[3]{0.1956,0.8019,-0.0794});
CHAnimSegment* HAnimSegment1265 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1265->setDEF("hanim_l_metacarpal_4");
HAnimSegment1265->setName("l_metacarpal_4");
CTransform* Transform1266 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1267 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1268 = (CShape *)(m_pScene.createNode("Shape"));
Shape1268->setUSE("HAnimJointShape");
Transform1267->addChild(*Shape1268);

Transform1266->addChildren(*Transform1267);

HAnimSegment1265->addChildren(*Transform1266);

CShape* Shape1269 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1270 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1270->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1271 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1271->setUSE("HAnimSegmentLineColorRGBA");
LineSet1270->setColor(*ColorRGBA1271);

CCoordinate* Coordinate1272 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1272->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794});
LineSet1270->setCoord(*Coordinate1272);

Shape1269->setGeometry(LineSet1270);

HAnimSegment1265->addChildren(*Shape1269);

HAnimJoint1264->addChildren(*HAnimSegment1265);

CHAnimJoint* HAnimJoint1273 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1273->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint1273->setName("l_metacarpophalangeal_4");
HAnimJoint1273->setCenter(new float[3]{0.1956,0.7815,-0.0794});
CHAnimSegment* HAnimSegment1274 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1274->setDEF("hanim_l_carpal_proximal_phalanx_4");
HAnimSegment1274->setName("l_carpal_proximal_phalanx_4");
CTransform* Transform1275 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1276 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1277 = (CShape *)(m_pScene.createNode("Shape"));
Shape1277->setUSE("HAnimJointShape");
Transform1276->addChild(*Shape1277);

Transform1275->addChildren(*Transform1276);

HAnimSegment1274->addChildren(*Transform1275);

CShape* Shape1278 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1279 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1279->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1280 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1280->setUSE("HAnimSegmentLineColorRGBA");
LineSet1279->setColor(*ColorRGBA1280);

CCoordinate* Coordinate1281 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1281->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777});
LineSet1279->setCoord(*Coordinate1281);

Shape1278->setGeometry(LineSet1279);

HAnimSegment1274->addChildren(*Shape1278);

HAnimJoint1273->addChildren(*HAnimSegment1274);

CHAnimJoint* HAnimJoint1282 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1282->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint1282->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint1282->setCenter(new float[3]{0.1973,0.7287,-0.0777});
CHAnimSegment* HAnimSegment1283 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1283->setDEF("hanim_l_carpal_middle_phalanx_3");
HAnimSegment1283->setName("l_carpal_middle_phalanx_4");
CTransform* Transform1284 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1285 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1286 = (CShape *)(m_pScene.createNode("Shape"));
Shape1286->setUSE("HAnimJointShape");
Transform1285->addChild(*Shape1286);

Transform1284->addChildren(*Transform1285);

HAnimSegment1283->addChildren(*Transform1284);

CShape* Shape1287 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1288 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1288->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1289 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1289->setUSE("HAnimSegmentLineColorRGBA");
LineSet1288->setColor(*ColorRGBA1289);

CCoordinate* Coordinate1290 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1290->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767});
LineSet1288->setCoord(*Coordinate1290);

Shape1287->setGeometry(LineSet1288);

HAnimSegment1283->addChildren(*Shape1287);

CHAnimSite* HAnimSite1291 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1291->setDEF("hanim_l_carpal_distal_phalanx_4_tip");
HAnimSite1291->setName("l_carpal_distal_phalanx_4_tip");
HAnimSite1291->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1292 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1292->setDescription("HAnimSite l_carpal_distal_phalanx_4_tip");
HAnimSite1291->addChildren(*TouchSensor1292);

CShape* Shape1293 = (CShape *)(m_pScene.createNode("Shape"));
Shape1293->setUSE("HAnimSiteShape");
HAnimSite1291->addChildren(*Shape1293);

HAnimSegment1283->addChildren(*HAnimSite1291);

HAnimJoint1282->addChildren(*HAnimSegment1283);

CHAnimJoint* HAnimJoint1294 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1294->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint1294->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint1294->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint1282->addChildren(*HAnimJoint1294);

HAnimJoint1273->addChildren(*HAnimJoint1282);

HAnimJoint1264->addChildren(*HAnimJoint1273);

HAnimJoint1248->addChildren(*HAnimJoint1264);

CHAnimJoint* HAnimJoint1295 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1295->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint1295->setName("l_carpometacarpal_5");
HAnimJoint1295->setCenter(new float[3]{0.1925,0.8066,-0.1036});
CHAnimSegment* HAnimSegment1296 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1296->setDEF("hanim_l_metacarpal_5");
HAnimSegment1296->setName("l_metacarpal_5");
CTransform* Transform1297 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1298 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1299 = (CShape *)(m_pScene.createNode("Shape"));
Shape1299->setUSE("HAnimJointShape");
Transform1298->addChild(*Shape1299);

Transform1297->addChildren(*Transform1298);

HAnimSegment1296->addChildren(*Transform1297);

CShape* Shape1300 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1301 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1301->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1302 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1302->setUSE("HAnimSegmentLineColorRGBA");
LineSet1301->setColor(*ColorRGBA1302);

CCoordinate* Coordinate1303 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1303->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036});
LineSet1301->setCoord(*Coordinate1303);

Shape1300->setGeometry(LineSet1301);

HAnimSegment1296->addChildren(*Shape1300);

HAnimJoint1295->addChildren(*HAnimSegment1296);

CHAnimJoint* HAnimJoint1304 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1304->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint1304->setName("l_metacarpophalangeal_5");
HAnimJoint1304->setCenter(new float[3]{0.1925,0.7866,-0.1036});
CHAnimSegment* HAnimSegment1305 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1305->setDEF("hanim_l_carpal_proximal_phalanx_5");
HAnimSegment1305->setName("l_carpal_proximal_phalanx_5");
CTransform* Transform1306 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1307 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1308 = (CShape *)(m_pScene.createNode("Shape"));
Shape1308->setUSE("HAnimJointShape");
Transform1307->addChild(*Shape1308);

Transform1306->addChildren(*Transform1307);

HAnimSegment1305->addChildren(*Transform1306);

CShape* Shape1309 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1310 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1310->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1311 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1311->setUSE("HAnimSegmentLineColorRGBA");
LineSet1310->setColor(*ColorRGBA1311);

CCoordinate* Coordinate1312 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1312->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024});
LineSet1310->setCoord(*Coordinate1312);

Shape1309->setGeometry(LineSet1310);

HAnimSegment1305->addChildren(*Shape1309);

HAnimJoint1304->addChildren(*HAnimSegment1305);

CHAnimJoint* HAnimJoint1313 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1313->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint1313->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint1313->setCenter(new float[3]{0.1938,0.7452,-0.1024});
CHAnimSegment* HAnimSegment1314 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1314->setDEF("hanim_l_carpal_middle_phalanx_4");
HAnimSegment1314->setName("l_carpal_middle_phalanx_5");
CTransform* Transform1315 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1316 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1317 = (CShape *)(m_pScene.createNode("Shape"));
Shape1317->setUSE("HAnimJointShape");
Transform1316->addChild(*Shape1317);

Transform1315->addChildren(*Transform1316);

HAnimSegment1314->addChildren(*Transform1315);

CShape* Shape1318 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1319 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1319->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1320 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1320->setUSE("HAnimSegmentLineColorRGBA");
LineSet1319->setColor(*ColorRGBA1320);

CCoordinate* Coordinate1321 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1321->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017});
LineSet1319->setCoord(*Coordinate1321);

Shape1318->setGeometry(LineSet1319);

HAnimSegment1314->addChildren(*Shape1318);

CHAnimSite* HAnimSite1322 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1322->setDEF("hanim_l_carpal_distal_phalanx_5_tip");
HAnimSite1322->setName("l_carpal_distal_phalanx_5_tip");
HAnimSite1322->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1323 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1323->setDescription("HAnimSite l_carpal_distal_phalanx_5_tip");
HAnimSite1322->addChildren(*TouchSensor1323);

CShape* Shape1324 = (CShape *)(m_pScene.createNode("Shape"));
Shape1324->setUSE("HAnimSiteShape");
HAnimSite1322->addChildren(*Shape1324);

HAnimSegment1314->addChildren(*HAnimSite1322);

HAnimJoint1313->addChildren(*HAnimSegment1314);

CHAnimJoint* HAnimJoint1325 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1325->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint1325->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint1325->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint1313->addChildren(*HAnimJoint1325);

HAnimJoint1304->addChildren(*HAnimJoint1313);

HAnimJoint1295->addChildren(*HAnimJoint1304);

HAnimJoint1248->addChildren(*HAnimJoint1295);

HAnimJoint1107->addChildren(*HAnimJoint1248);

HAnimJoint1095->addChildren(*HAnimJoint1107);

HAnimJoint1074->addChildren(*HAnimJoint1095);

HAnimJoint1059->addChildren(*HAnimJoint1074);

HAnimJoint1050->addChildren(*HAnimJoint1059);

HAnimJoint845->addChildren(*HAnimJoint1050);

CHAnimJoint* HAnimJoint1326 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1326->setDEF("hanim_r_sternoclavicular");
HAnimJoint1326->setName("r_sternoclavicular");
HAnimJoint1326->setCenter(new float[3]{-0.0694,1.46,-0.033});
CHAnimSegment* HAnimSegment1327 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1327->setDEF("hanim_r_clavicle");
HAnimSegment1327->setName("r_clavicle");
CTransform* Transform1328 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1329 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1330 = (CShape *)(m_pScene.createNode("Shape"));
Shape1330->setUSE("HAnimJointShape");
Transform1329->addChild(*Shape1330);

Transform1328->addChildren(*Transform1329);

HAnimSegment1327->addChildren(*Transform1328);

CShape* Shape1331 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1332 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1332->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1333 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1333->setUSE("HAnimSegmentLineColorRGBA");
LineSet1332->setColor(*ColorRGBA1333);

CCoordinate* Coordinate1334 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1334->setPoint(new float[6]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401});
LineSet1332->setCoord(*Coordinate1334);

Shape1331->setGeometry(LineSet1332);

HAnimSegment1327->addChildren(*Shape1331);

HAnimJoint1326->addChildren(*HAnimSegment1327);

CHAnimJoint* HAnimJoint1335 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1335->setDEF("hanim_r_acromioclavicular");
HAnimJoint1335->setName("r_acromioclavicular");
HAnimJoint1335->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
CHAnimSegment* HAnimSegment1336 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1336->setDEF("hanim_r_scapula");
HAnimSegment1336->setName("r_scapula");
CTransform* Transform1337 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1338 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1339 = (CShape *)(m_pScene.createNode("Shape"));
Shape1339->setUSE("HAnimJointShape");
Transform1338->addChild(*Shape1339);

Transform1337->addChildren(*Transform1338);

HAnimSegment1336->addChildren(*Transform1337);

CShape* Shape1340 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1341 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1341->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1342 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1342->setUSE("HAnimSegmentLineColorRGBA");
LineSet1341->setColor(*ColorRGBA1342);

CCoordinate* Coordinate1343 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1343->setPoint(new float[6]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325});
LineSet1341->setCoord(*Coordinate1343);

Shape1340->setGeometry(LineSet1341);

HAnimSegment1336->addChildren(*Shape1340);

CHAnimSite* HAnimSite1344 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1344->setDEF("hanim_r_bideltoid_pt");
HAnimSite1344->setName("r_bideltoid_pt");
HAnimSite1344->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1345 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1345->setDescription("HAnimSite r_bideltoid_pt");
HAnimSite1344->addChildren(*TouchSensor1345);

CShape* Shape1346 = (CShape *)(m_pScene.createNode("Shape"));
Shape1346->setUSE("HAnimSiteShape");
HAnimSite1344->addChildren(*Shape1346);

HAnimSegment1336->addChildren(*HAnimSite1344);

CHAnimSite* HAnimSite1347 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1347->setDEF("hanim_r_humeral_lateral_epicondyles_pt");
HAnimSite1347->setName("r_humeral_lateral_epicondyles_pt");
HAnimSite1347->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
CTouchSensor* TouchSensor1348 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1348->setDescription("HAnimSite r_humeral_lateral_epicondyles_pt");
HAnimSite1347->addChildren(*TouchSensor1348);

CShape* Shape1349 = (CShape *)(m_pScene.createNode("Shape"));
Shape1349->setUSE("HAnimSiteShape");
HAnimSite1347->addChildren(*Shape1349);

HAnimSegment1336->addChildren(*HAnimSite1347);

HAnimJoint1335->addChildren(*HAnimSegment1336);

CHAnimJoint* HAnimJoint1350 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1350->setDEF("hanim_r_shoulder");
HAnimJoint1350->setName("r_shoulder");
HAnimJoint1350->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
CHAnimSegment* HAnimSegment1351 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1351->setDEF("hanim_r_upperarm");
HAnimSegment1351->setName("r_upperarm");
CTransform* Transform1352 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1353 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1354 = (CShape *)(m_pScene.createNode("Shape"));
Shape1354->setUSE("HAnimJointShape");
Transform1353->addChild(*Shape1354);

Transform1352->addChildren(*Transform1353);

HAnimSegment1351->addChildren(*Transform1352);

CShape* Shape1355 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1356 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1356->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1357 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1357->setUSE("HAnimSegmentLineColorRGBA");
LineSet1356->setColor(*ColorRGBA1357);

CCoordinate* Coordinate1358 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1358->setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062});
LineSet1356->setCoord(*Coordinate1358);

Shape1355->setGeometry(LineSet1356);

HAnimSegment1351->addChildren(*Shape1355);

CHAnimSite* HAnimSite1359 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1359->setDEF("hanim_r_humeral_medial_epicondyles_pt");
HAnimSite1359->setName("r_humeral_medial_epicondyles_pt");
HAnimSite1359->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
CTouchSensor* TouchSensor1360 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1360->setDescription("HAnimSite r_humeral_medial_epicondyles_pt");
HAnimSite1359->addChildren(*TouchSensor1360);

CShape* Shape1361 = (CShape *)(m_pScene.createNode("Shape"));
Shape1361->setUSE("HAnimSiteShape");
HAnimSite1359->addChildren(*Shape1361);

HAnimSegment1351->addChildren(*HAnimSite1359);

CHAnimSite* HAnimSite1362 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1362->setDEF("hanim_r_olecranon_pt");
HAnimSite1362->setName("r_olecranon_pt");
HAnimSite1362->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
CTouchSensor* TouchSensor1363 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1363->setDescription("HAnimSite r_olecranon_pt");
HAnimSite1362->addChildren(*TouchSensor1363);

CShape* Shape1364 = (CShape *)(m_pScene.createNode("Shape"));
Shape1364->setUSE("HAnimSiteShape");
HAnimSite1362->addChildren(*Shape1364);

HAnimSegment1351->addChildren(*HAnimSite1362);

CHAnimSite* HAnimSite1365 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1365->setDEF("hanim_r_radial_styloid_pt");
HAnimSite1365->setName("r_radial_styloid_pt");
HAnimSite1365->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
CTouchSensor* TouchSensor1366 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1366->setDescription("HAnimSite r_radial_styloid_pt");
HAnimSite1365->addChildren(*TouchSensor1366);

CShape* Shape1367 = (CShape *)(m_pScene.createNode("Shape"));
Shape1367->setUSE("HAnimSiteShape");
HAnimSite1365->addChildren(*Shape1367);

HAnimSegment1351->addChildren(*HAnimSite1365);

CHAnimSite* HAnimSite1368 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1368->setDEF("hanim_r_radiale_pt");
HAnimSite1368->setName("r_radiale_pt");
HAnimSite1368->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
CTouchSensor* TouchSensor1369 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1369->setDescription("HAnimSite r_radiale_pt");
HAnimSite1368->addChildren(*TouchSensor1369);

CShape* Shape1370 = (CShape *)(m_pScene.createNode("Shape"));
Shape1370->setUSE("HAnimSiteShape");
HAnimSite1368->addChildren(*Shape1370);

HAnimSegment1351->addChildren(*HAnimSite1368);

HAnimJoint1350->addChildren(*HAnimSegment1351);

CHAnimJoint* HAnimJoint1371 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1371->setDEF("hanim_r_elbow");
HAnimJoint1371->setName("r_elbow");
HAnimJoint1371->setCenter(new float[3]{-0.1949,1.1388,-0.062});
CHAnimSegment* HAnimSegment1372 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1372->setDEF("hanim_r_forearm");
HAnimSegment1372->setName("r_forearm");
CTransform* Transform1373 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1374 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1375 = (CShape *)(m_pScene.createNode("Shape"));
Shape1375->setUSE("HAnimJointShape");
Transform1374->addChild(*Shape1375);

Transform1373->addChildren(*Transform1374);

HAnimSegment1372->addChildren(*Transform1373);

CShape* Shape1376 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1377 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1377->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1378 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1378->setUSE("HAnimSegmentLineColorRGBA");
LineSet1377->setColor(*ColorRGBA1378);

CCoordinate* Coordinate1379 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1379->setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521});
LineSet1377->setCoord(*Coordinate1379);

Shape1376->setGeometry(LineSet1377);

HAnimSegment1372->addChildren(*Shape1376);

CHAnimSite* HAnimSite1380 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1380->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite1380->setName("r_ulnar_styloid_pt");
HAnimSite1380->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
CTouchSensor* TouchSensor1381 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1381->setDescription("HAnimSite r_ulnar_styloid_pt");
HAnimSite1380->addChildren(*TouchSensor1381);

CShape* Shape1382 = (CShape *)(m_pScene.createNode("Shape"));
Shape1382->setUSE("HAnimSiteShape");
HAnimSite1380->addChildren(*Shape1382);

HAnimSegment1372->addChildren(*HAnimSite1380);

HAnimJoint1371->addChildren(*HAnimSegment1372);

CHAnimJoint* HAnimJoint1383 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1383->setDEF("hanim_r_radiocarpal");
HAnimJoint1383->setName("r_radiocarpal");
HAnimJoint1383->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
CHAnimSegment* HAnimSegment1384 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1384->setDEF("hanim_r_carpal");
HAnimSegment1384->setName("r_carpal");
CTransform* Transform1385 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1385->setTranslation(new float[3]{-0.2,0.85,-0.05});
Transform1385->setRotation(new float[4]{0,0,1,-3.14});
Transform1385->setScale(new float[3]{0.2,0.2,0.2});
CTransform* Transform1386 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1386->setRotation(new float[4]{0,1,0,1.57});
CShape* Shape1387 = (CShape *)(m_pScene.createNode("Shape"));
Shape1387->setUSE("HAnimJointShape");
Transform1386->addChild(*Shape1387);

Transform1385->addChildren(*Transform1386);

HAnimSegment1384->addChildren(*Transform1385);

CShape* Shape1388 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1389 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1389->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1390 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1390->setUSE("HAnimSegmentLineColorRGBA");
LineSet1389->setColor(*ColorRGBA1390);

CCoordinate* Coordinate1391 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1391->setPoint(new float[6]{-0.1959,0.8694,-0.0521,0,1,0});
LineSet1389->setCoord(*Coordinate1391);

Shape1388->setGeometry(LineSet1389);

HAnimSegment1384->addChildren(*Shape1388);

CShape* Shape1392 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1393 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1393->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1394 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1394->setUSE("HAnimSegmentLineColorRGBA");
LineSet1393->setColor(*ColorRGBA1394);

CCoordinate* Coordinate1395 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1395->setPoint(new float[6]{-0.1959,0.8694,-0.0521,0,1,0});
LineSet1393->setCoord(*Coordinate1395);

Shape1392->setGeometry(LineSet1393);

HAnimSegment1384->addChildren(*Shape1392);

CShape* Shape1396 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1397 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1397->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1398 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1398->setUSE("HAnimSegmentLineColorRGBA");
LineSet1397->setColor(*ColorRGBA1398);

CCoordinate* Coordinate1399 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1399->setPoint(new float[6]{-0.1959,0.8694,-0.0521,0,1,0});
LineSet1397->setCoord(*Coordinate1399);

Shape1396->setGeometry(LineSet1397);

HAnimSegment1384->addChildren(*Shape1396);

CShape* Shape1400 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1401 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1401->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1402 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1402->setUSE("HAnimSegmentLineColorRGBA");
LineSet1401->setColor(*ColorRGBA1402);

CCoordinate* Coordinate1403 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1403->setPoint(new float[6]{-0.1959,0.8694,-0.0521,0,1,0});
LineSet1401->setCoord(*Coordinate1403);

Shape1400->setGeometry(LineSet1401);

HAnimSegment1384->addChildren(*Shape1400);

HAnimJoint1383->addChildren(*HAnimSegment1384);

CHAnimJoint* HAnimJoint1404 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1404->setDEF("hanim_r_midcarpal_1");
HAnimJoint1404->setName("r_midcarpal_1");
HAnimJoint1404->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment1405 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1405->setDEF("hanim_r_trapezium");
HAnimSegment1405->setName("r_trapezium");
CTransform* Transform1406 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1407 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1408 = (CShape *)(m_pScene.createNode("Shape"));
Shape1408->setUSE("HAnimJointShape");
Transform1407->addChild(*Shape1408);

Transform1406->addChildren(*Transform1407);

HAnimSegment1405->addChildren(*Transform1406);

CShape* Shape1409 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1410 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1410->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1411 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1411->setUSE("HAnimSegmentLineColorRGBA");
LineSet1410->setColor(*ColorRGBA1411);

CCoordinate* Coordinate1412 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1412->setPoint(new float[6]{0,1,0,-0.1899,0.8502,-0.0473});
LineSet1410->setCoord(*Coordinate1412);

Shape1409->setGeometry(LineSet1410);

HAnimSegment1405->addChildren(*Shape1409);

HAnimJoint1404->addChildren(*HAnimSegment1405);

CHAnimJoint* HAnimJoint1413 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1413->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint1413->setName("r_carpometacarpal_1");
HAnimJoint1413->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
CHAnimSegment* HAnimSegment1414 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1414->setDEF("hanim_r_metacarpal_1");
HAnimSegment1414->setName("r_metacarpal_1");
CTransform* Transform1415 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1416 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1417 = (CShape *)(m_pScene.createNode("Shape"));
Shape1417->setUSE("HAnimJointShape");
Transform1416->addChild(*Shape1417);

Transform1415->addChildren(*Transform1416);

HAnimSegment1414->addChildren(*Transform1415);

CShape* Shape1418 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1419 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1419->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1420 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1420->setUSE("HAnimSegmentLineColorRGBA");
LineSet1419->setColor(*ColorRGBA1420);

CCoordinate* Coordinate1421 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1421->setPoint(new float[6]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306});
LineSet1419->setCoord(*Coordinate1421);

Shape1418->setGeometry(LineSet1419);

HAnimSegment1414->addChildren(*Shape1418);

HAnimJoint1413->addChildren(*HAnimSegment1414);

CHAnimJoint* HAnimJoint1422 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1422->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint1422->setName("r_metacarpophalangeal_1");
HAnimJoint1422->setCenter(new float[3]{-0.1874,0.8256,0.0306});
CHAnimSegment* HAnimSegment1423 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1423->setDEF("hanim_r_carpal_proximal_phalanx_1");
HAnimSegment1423->setName("r_carpal_proximal_phalanx_1");
CTransform* Transform1424 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1425 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1426 = (CShape *)(m_pScene.createNode("Shape"));
Shape1426->setUSE("HAnimJointShape");
Transform1425->addChild(*Shape1426);

Transform1424->addChildren(*Transform1425);

HAnimSegment1423->addChildren(*Transform1424);

CShape* Shape1427 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1428 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1428->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1429 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1429->setUSE("HAnimSegmentLineColorRGBA");
LineSet1428->setColor(*ColorRGBA1429);

CCoordinate* Coordinate1430 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1430->setPoint(new float[6]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506});
LineSet1428->setCoord(*Coordinate1430);

Shape1427->setGeometry(LineSet1428);

HAnimSegment1423->addChildren(*Shape1427);

CHAnimSite* HAnimSite1431 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1431->setDEF("hanim_r_carpal_distal_phalanx_1_tip");
HAnimSite1431->setName("r_carpal_distal_phalanx_1_tip");
HAnimSite1431->setTranslation(new float[3]{-0.35,0.4,0});
CTouchSensor* TouchSensor1432 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1432->setDescription("HAnimSite r_carpal_distal_phalanx_1_tip");
HAnimSite1431->addChildren(*TouchSensor1432);

CShape* Shape1433 = (CShape *)(m_pScene.createNode("Shape"));
Shape1433->setUSE("HAnimSiteShape");
HAnimSite1431->addChildren(*Shape1433);

HAnimSegment1423->addChildren(*HAnimSite1431);

HAnimJoint1422->addChildren(*HAnimSegment1423);

CHAnimJoint* HAnimJoint1434 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1434->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint1434->setName("r_carpal_interphalangeal_1");
HAnimJoint1434->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint1422->addChildren(*HAnimJoint1434);

HAnimJoint1413->addChildren(*HAnimJoint1422);

HAnimJoint1404->addChildren(*HAnimJoint1413);

HAnimJoint1383->addChildren(*HAnimJoint1404);

CHAnimJoint* HAnimJoint1435 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1435->setDEF("hanim_r_midcarpal_2");
HAnimJoint1435->setName("r_midcarpal_2");
HAnimJoint1435->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment1436 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1436->setDEF("hanim_r_trapezoid");
HAnimSegment1436->setName("r_trapezoid");
CTransform* Transform1437 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1438 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1439 = (CShape *)(m_pScene.createNode("Shape"));
Shape1439->setUSE("HAnimJointShape");
Transform1438->addChild(*Shape1439);

Transform1437->addChildren(*Transform1438);

HAnimSegment1436->addChildren(*Transform1437);

CShape* Shape1440 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1441 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1441->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1442 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1442->setUSE("HAnimSegmentLineColorRGBA");
LineSet1441->setColor(*ColorRGBA1442);

CCoordinate* Coordinate1443 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1443->setPoint(new float[6]{0,1,0,-0.1961,0.8055,-0.0218});
LineSet1441->setCoord(*Coordinate1443);

Shape1440->setGeometry(LineSet1441);

HAnimSegment1436->addChildren(*Shape1440);

CHAnimSite* HAnimSite1444 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1444->setDEF("hanim_r_metacarpal_phalanx_2_pt");
HAnimSite1444->setName("r_metacarpal_phalanx_2_pt");
HAnimSite1444->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
CTouchSensor* TouchSensor1445 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1445->setDescription("HAnimSite r_metacarpal_phalanx_2_pt");
HAnimSite1444->addChildren(*TouchSensor1445);

CShape* Shape1446 = (CShape *)(m_pScene.createNode("Shape"));
Shape1446->setUSE("HAnimSiteShape");
HAnimSite1444->addChildren(*Shape1446);

HAnimSegment1436->addChildren(*HAnimSite1444);

HAnimJoint1435->addChildren(*HAnimSegment1436);

CHAnimJoint* HAnimJoint1447 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1447->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint1447->setName("r_carpometacarpal_2");
HAnimJoint1447->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
CHAnimSegment* HAnimSegment1448 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1448->setDEF("hanim_r_metacarpal_2");
HAnimSegment1448->setName("r_metacarpal_2");
CTransform* Transform1449 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1450 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1451 = (CShape *)(m_pScene.createNode("Shape"));
Shape1451->setUSE("HAnimJointShape");
Transform1450->addChild(*Shape1451);

Transform1449->addChildren(*Transform1450);

HAnimSegment1448->addChildren(*Transform1449);

CShape* Shape1452 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1453 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1453->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1454 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1454->setUSE("HAnimSegmentLineColorRGBA");
LineSet1453->setColor(*ColorRGBA1454);

CCoordinate* Coordinate1455 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1455->setPoint(new float[6]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218});
LineSet1453->setCoord(*Coordinate1455);

Shape1452->setGeometry(LineSet1453);

HAnimSegment1448->addChildren(*Shape1452);

HAnimJoint1447->addChildren(*HAnimSegment1448);

CHAnimJoint* HAnimJoint1456 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1456->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint1456->setName("r_metacarpophalangeal_2");
HAnimJoint1456->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
CHAnimSegment* HAnimSegment1457 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1457->setDEF("hanim_r_carpal_proximal_phalanx_2");
HAnimSegment1457->setName("r_carpal_proximal_phalanx_2");
CTransform* Transform1458 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1459 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1460 = (CShape *)(m_pScene.createNode("Shape"));
Shape1460->setUSE("HAnimJointShape");
Transform1459->addChild(*Shape1460);

Transform1458->addChildren(*Transform1459);

HAnimSegment1457->addChildren(*Transform1458);

CShape* Shape1461 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1462 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1462->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1463 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1463->setUSE("HAnimSegmentLineColorRGBA");
LineSet1462->setColor(*ColorRGBA1463);

CCoordinate* Coordinate1464 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1464->setPoint(new float[6]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185});
LineSet1462->setCoord(*Coordinate1464);

Shape1461->setGeometry(LineSet1462);

HAnimSegment1457->addChildren(*Shape1461);

HAnimJoint1456->addChildren(*HAnimSegment1457);

CHAnimJoint* HAnimJoint1465 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1465->setDEF("hanim_r_carpal_proximal_interphalangeal_1");
HAnimJoint1465->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint1465->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
CHAnimSegment* HAnimSegment1466 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1466->setDEF("hanim_r_carpal_middle_phalanx_1");
HAnimSegment1466->setName("r_carpal_middle_phalanx_2");
CTransform* Transform1467 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1468 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1469 = (CShape *)(m_pScene.createNode("Shape"));
Shape1469->setUSE("HAnimJointShape");
Transform1468->addChild(*Shape1469);

Transform1467->addChildren(*Transform1468);

HAnimSegment1466->addChildren(*Transform1467);

CShape* Shape1470 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1471 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1471->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1472 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1472->setUSE("HAnimSegmentLineColorRGBA");
LineSet1471->setColor(*ColorRGBA1472);

CCoordinate* Coordinate1473 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1473->setPoint(new float[6]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173});
LineSet1471->setCoord(*Coordinate1473);

Shape1470->setGeometry(LineSet1471);

HAnimSegment1466->addChildren(*Shape1470);

CHAnimSite* HAnimSite1474 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1474->setDEF("hanim_r_carpal_distal_phalanx_2_tip");
HAnimSite1474->setName("r_carpal_distal_phalanx_2_tip");
HAnimSite1474->setTranslation(new float[3]{-0.24,0.87,0});
CTouchSensor* TouchSensor1475 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1475->setDescription("HAnimSite r_carpal_distal_phalanx_2_tip");
HAnimSite1474->addChildren(*TouchSensor1475);

CShape* Shape1476 = (CShape *)(m_pScene.createNode("Shape"));
Shape1476->setUSE("HAnimSiteShape");
HAnimSite1474->addChildren(*Shape1476);

HAnimSegment1466->addChildren(*HAnimSite1474);

CHAnimSite* HAnimSite1477 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1477->setDEF("hanim_r_dactylion_pt");
HAnimSite1477->setName("r_dactylion_pt");
HAnimSite1477->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
CTouchSensor* TouchSensor1478 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1478->setDescription("HAnimSite r_dactylion_pt");
HAnimSite1477->addChildren(*TouchSensor1478);

CShape* Shape1479 = (CShape *)(m_pScene.createNode("Shape"));
Shape1479->setUSE("HAnimSiteShape");
HAnimSite1477->addChildren(*Shape1479);

HAnimSegment1466->addChildren(*HAnimSite1477);

HAnimJoint1465->addChildren(*HAnimSegment1466);

CHAnimJoint* HAnimJoint1480 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1480->setDEF("hanim_r_carpal_distal_interphalangeal_1");
HAnimJoint1480->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint1480->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint1465->addChildren(*HAnimJoint1480);

HAnimJoint1456->addChildren(*HAnimJoint1465);

HAnimJoint1447->addChildren(*HAnimJoint1456);

HAnimJoint1435->addChildren(*HAnimJoint1447);

HAnimJoint1383->addChildren(*HAnimJoint1435);

CHAnimJoint* HAnimJoint1481 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1481->setDEF("hanim_r_midcarpal_3");
HAnimJoint1481->setName("r_midcarpal_3");
HAnimJoint1481->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment1482 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1482->setDEF("hanim_r_capitate");
HAnimSegment1482->setName("r_capitate");
CTransform* Transform1483 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1484 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1485 = (CShape *)(m_pScene.createNode("Shape"));
Shape1485->setUSE("HAnimJointShape");
Transform1484->addChild(*Shape1485);

Transform1483->addChildren(*Transform1484);

HAnimSegment1482->addChildren(*Transform1483);

CShape* Shape1486 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1487 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1487->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1488 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1488->setUSE("HAnimSegmentLineColorRGBA");
LineSet1487->setColor(*ColorRGBA1488);

CCoordinate* Coordinate1489 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1489->setPoint(new float[6]{0,1,0,-0.1972,0.806,-0.0468});
LineSet1487->setCoord(*Coordinate1489);

Shape1486->setGeometry(LineSet1487);

HAnimSegment1482->addChildren(*Shape1486);

CHAnimSite* HAnimSite1490 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1490->setDEF("hanim_r_metacarpal_phalanx_3_pt");
HAnimSite1490->setName("r_metacarpal_phalanx_3_pt");
HAnimSite1490->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor1491 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1491->setDescription("HAnimSite r_metacarpal_phalanx_3_pt");
HAnimSite1490->addChildren(*TouchSensor1491);

CShape* Shape1492 = (CShape *)(m_pScene.createNode("Shape"));
Shape1492->setUSE("HAnimSiteShape");
HAnimSite1490->addChildren(*Shape1492);

HAnimSegment1482->addChildren(*HAnimSite1490);

HAnimJoint1481->addChildren(*HAnimSegment1482);

CHAnimJoint* HAnimJoint1493 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1493->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint1493->setName("r_carpometacarpal_3");
HAnimJoint1493->setCenter(new float[3]{-0.1972,0.806,-0.0468});
CHAnimSegment* HAnimSegment1494 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1494->setDEF("hanim_r_metacarpal_3");
HAnimSegment1494->setName("r_metacarpal_3");
CTransform* Transform1495 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1496 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1497 = (CShape *)(m_pScene.createNode("Shape"));
Shape1497->setUSE("HAnimJointShape");
Transform1496->addChild(*Shape1497);

Transform1495->addChildren(*Transform1496);

HAnimSegment1494->addChildren(*Transform1495);

CShape* Shape1498 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1499 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1499->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1500 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1500->setUSE("HAnimSegmentLineColorRGBA");
LineSet1499->setColor(*ColorRGBA1500);

CCoordinate* Coordinate1501 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1501->setPoint(new float[6]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468});
LineSet1499->setCoord(*Coordinate1501);

Shape1498->setGeometry(LineSet1499);

HAnimSegment1494->addChildren(*Shape1498);

HAnimJoint1493->addChildren(*HAnimSegment1494);

CHAnimJoint* HAnimJoint1502 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1502->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint1502->setName("r_metacarpophalangeal_3");
HAnimJoint1502->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
CHAnimSegment* HAnimSegment1503 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1503->setDEF("hanim_r_carpal_proximal_phalanx_3");
HAnimSegment1503->setName("r_carpal_proximal_phalanx_3");
CTransform* Transform1504 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1505 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1506 = (CShape *)(m_pScene.createNode("Shape"));
Shape1506->setUSE("HAnimJointShape");
Transform1505->addChild(*Shape1506);

Transform1504->addChildren(*Transform1505);

HAnimSegment1503->addChildren(*Transform1504);

CShape* Shape1507 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1508 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1508->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1509 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1509->setUSE("HAnimSegmentLineColorRGBA");
LineSet1508->setColor(*ColorRGBA1509);

CCoordinate* Coordinate1510 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1510->setPoint(new float[6]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441});
LineSet1508->setCoord(*Coordinate1510);

Shape1507->setGeometry(LineSet1508);

HAnimSegment1503->addChildren(*Shape1507);

HAnimJoint1502->addChildren(*HAnimSegment1503);

CHAnimJoint* HAnimJoint1511 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1511->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint1511->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint1511->setCenter(new float[3]{-0.195,0.7304,-0.0441});
CHAnimSegment* HAnimSegment1512 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1512->setDEF("hanim_r_carpal_middle_phalanx_2");
HAnimSegment1512->setName("r_carpal_middle_phalanx_3");
CTransform* Transform1513 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1514 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1515 = (CShape *)(m_pScene.createNode("Shape"));
Shape1515->setUSE("HAnimJointShape");
Transform1514->addChild(*Shape1515);

Transform1513->addChildren(*Transform1514);

HAnimSegment1512->addChildren(*Transform1513);

CShape* Shape1516 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1517 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1517->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1518 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1518->setUSE("HAnimSegmentLineColorRGBA");
LineSet1517->setColor(*ColorRGBA1518);

CCoordinate* Coordinate1519 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1519->setPoint(new float[6]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432});
LineSet1517->setCoord(*Coordinate1519);

Shape1516->setGeometry(LineSet1517);

HAnimSegment1512->addChildren(*Shape1516);

CHAnimSite* HAnimSite1520 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1520->setDEF("hanim_r_carpal_distal_phalanx_3_tip");
HAnimSite1520->setName("r_carpal_distal_phalanx_3_tip");
HAnimSite1520->setTranslation(new float[3]{-0.08,0.96,0});
CTouchSensor* TouchSensor1521 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1521->setDescription("HAnimSite r_carpal_distal_phalanx_3_tip");
HAnimSite1520->addChildren(*TouchSensor1521);

CShape* Shape1522 = (CShape *)(m_pScene.createNode("Shape"));
Shape1522->setUSE("HAnimSiteShape");
HAnimSite1520->addChildren(*Shape1522);

HAnimSegment1512->addChildren(*HAnimSite1520);

HAnimJoint1511->addChildren(*HAnimSegment1512);

CHAnimJoint* HAnimJoint1523 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1523->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint1523->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint1523->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint1511->addChildren(*HAnimJoint1523);

HAnimJoint1502->addChildren(*HAnimJoint1511);

HAnimJoint1493->addChildren(*HAnimJoint1502);

HAnimJoint1481->addChildren(*HAnimJoint1493);

HAnimJoint1383->addChildren(*HAnimJoint1481);

CHAnimJoint* HAnimJoint1524 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1524->setDEF("hanim_r_midcarpal_4_1");
HAnimJoint1524->setName("r_midcarpal_4_5");
HAnimJoint1524->setCenter(new float[3]{0,1,0});
CHAnimSegment* HAnimSegment1525 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1525->setDEF("hanim_r_hamate");
HAnimSegment1525->setName("r_hamate");
CTransform* Transform1526 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1527 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1528 = (CShape *)(m_pScene.createNode("Shape"));
Shape1528->setUSE("HAnimJointShape");
Transform1527->addChild(*Shape1528);

Transform1526->addChildren(*Transform1527);

HAnimSegment1525->addChildren(*Transform1526);

CShape* Shape1529 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1530 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1530->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1531 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1531->setUSE("HAnimSegmentLineColorRGBA");
LineSet1530->setColor(*ColorRGBA1531);

CCoordinate* Coordinate1532 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1532->setPoint(new float[6]{0,1,0,-0.1951,0.8049,-0.0732});
LineSet1530->setCoord(*Coordinate1532);

Shape1529->setGeometry(LineSet1530);

HAnimSegment1525->addChildren(*Shape1529);

CShape* Shape1533 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1534 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1534->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1535 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1535->setUSE("HAnimSegmentLineColorRGBA");
LineSet1534->setColor(*ColorRGBA1535);

CCoordinate* Coordinate1536 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1536->setPoint(new float[6]{0,1,0,-0.1926,0.8096,-0.0975});
LineSet1534->setCoord(*Coordinate1536);

Shape1533->setGeometry(LineSet1534);

HAnimSegment1525->addChildren(*Shape1533);

CHAnimSite* HAnimSite1537 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1537->setDEF("hanim_r_metacarpal_phalanx_5_pt");
HAnimSite1537->setName("r_metacarpal_phalanx_5_pt");
HAnimSite1537->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
CTouchSensor* TouchSensor1538 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1538->setDescription("HAnimSite r_metacarpal_phalanx_5_pt");
HAnimSite1537->addChildren(*TouchSensor1538);

CShape* Shape1539 = (CShape *)(m_pScene.createNode("Shape"));
Shape1539->setUSE("HAnimSiteShape");
HAnimSite1537->addChildren(*Shape1539);

HAnimSegment1525->addChildren(*HAnimSite1537);

HAnimJoint1524->addChildren(*HAnimSegment1525);

CHAnimJoint* HAnimJoint1540 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1540->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint1540->setName("r_carpometacarpal_4");
HAnimJoint1540->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
CHAnimSegment* HAnimSegment1541 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1541->setDEF("hanim_r_metacarpal_4");
HAnimSegment1541->setName("r_metacarpal_4");
CTransform* Transform1542 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1543 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1544 = (CShape *)(m_pScene.createNode("Shape"));
Shape1544->setUSE("HAnimJointShape");
Transform1543->addChild(*Shape1544);

Transform1542->addChildren(*Transform1543);

HAnimSegment1541->addChildren(*Transform1542);

CShape* Shape1545 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1546 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1546->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1547 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1547->setUSE("HAnimSegmentLineColorRGBA");
LineSet1546->setColor(*ColorRGBA1547);

CCoordinate* Coordinate1548 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1548->setPoint(new float[6]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732});
LineSet1546->setCoord(*Coordinate1548);

Shape1545->setGeometry(LineSet1546);

HAnimSegment1541->addChildren(*Shape1545);

HAnimJoint1540->addChildren(*HAnimSegment1541);

CHAnimJoint* HAnimJoint1549 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1549->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint1549->setName("r_metacarpophalangeal_4");
HAnimJoint1549->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
CHAnimSegment* HAnimSegment1550 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1550->setDEF("hanim_r_carpal_proximal_phalanx_4");
HAnimSegment1550->setName("r_carpal_proximal_phalanx_4");
CTransform* Transform1551 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1552 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1553 = (CShape *)(m_pScene.createNode("Shape"));
Shape1553->setUSE("HAnimJointShape");
Transform1552->addChild(*Shape1553);

Transform1551->addChildren(*Transform1552);

HAnimSegment1550->addChildren(*Transform1551);

CShape* Shape1554 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1555 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1555->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1556 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1556->setUSE("HAnimSegmentLineColorRGBA");
LineSet1555->setColor(*ColorRGBA1556);

CCoordinate* Coordinate1557 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1557->setPoint(new float[6]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716});
LineSet1555->setCoord(*Coordinate1557);

Shape1554->setGeometry(LineSet1555);

HAnimSegment1550->addChildren(*Shape1554);

HAnimJoint1549->addChildren(*HAnimSegment1550);

CHAnimJoint* HAnimJoint1558 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1558->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint1558->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint1558->setCenter(new float[3]{-0.192,0.7318,-0.0716});
CHAnimSegment* HAnimSegment1559 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1559->setDEF("hanim_r_carpal_middle_phalanx_3");
HAnimSegment1559->setName("r_carpal_middle_phalanx_4");
CTransform* Transform1560 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1561 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1562 = (CShape *)(m_pScene.createNode("Shape"));
Shape1562->setUSE("HAnimJointShape");
Transform1561->addChild(*Shape1562);

Transform1560->addChildren(*Transform1561);

HAnimSegment1559->addChildren(*Transform1560);

CShape* Shape1563 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1564 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1564->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1565 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1565->setUSE("HAnimSegmentLineColorRGBA");
LineSet1564->setColor(*ColorRGBA1565);

CCoordinate* Coordinate1566 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1566->setPoint(new float[6]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706});
LineSet1564->setCoord(*Coordinate1566);

Shape1563->setGeometry(LineSet1564);

HAnimSegment1559->addChildren(*Shape1563);

CHAnimSite* HAnimSite1567 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1567->setDEF("hanim_r_carpal_distal_phalanx_4_tip");
HAnimSite1567->setName("r_carpal_distal_phalanx_4_tip");
HAnimSite1567->setTranslation(new float[3]{0.1,0.93,0});
CTouchSensor* TouchSensor1568 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1568->setDescription("HAnimSite r_carpal_distal_phalanx_4_tip");
HAnimSite1567->addChildren(*TouchSensor1568);

CShape* Shape1569 = (CShape *)(m_pScene.createNode("Shape"));
Shape1569->setUSE("HAnimSiteShape");
HAnimSite1567->addChildren(*Shape1569);

HAnimSegment1559->addChildren(*HAnimSite1567);

HAnimJoint1558->addChildren(*HAnimSegment1559);

CHAnimJoint* HAnimJoint1570 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1570->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint1570->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint1570->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint1558->addChildren(*HAnimJoint1570);

HAnimJoint1549->addChildren(*HAnimJoint1558);

HAnimJoint1540->addChildren(*HAnimJoint1549);

HAnimJoint1524->addChildren(*HAnimJoint1540);

CHAnimJoint* HAnimJoint1571 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1571->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint1571->setName("r_carpometacarpal_5");
HAnimJoint1571->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
CHAnimSegment* HAnimSegment1572 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1572->setDEF("hanim_r_metacarpal_5");
HAnimSegment1572->setName("r_metacarpal_5");
CTransform* Transform1573 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1574 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1575 = (CShape *)(m_pScene.createNode("Shape"));
Shape1575->setUSE("HAnimJointShape");
Transform1574->addChild(*Shape1575);

Transform1573->addChildren(*Transform1574);

HAnimSegment1572->addChildren(*Transform1573);

CShape* Shape1576 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1577 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1577->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1578 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1578->setUSE("HAnimSegmentLineColorRGBA");
LineSet1577->setColor(*ColorRGBA1578);

CCoordinate* Coordinate1579 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1579->setPoint(new float[6]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975});
LineSet1577->setCoord(*Coordinate1579);

Shape1576->setGeometry(LineSet1577);

HAnimSegment1572->addChildren(*Shape1576);

HAnimJoint1571->addChildren(*HAnimSegment1572);

CHAnimJoint* HAnimJoint1580 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1580->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint1580->setName("r_metacarpophalangeal_5");
HAnimJoint1580->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
CHAnimSegment* HAnimSegment1581 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1581->setDEF("hanim_r_carpal_proximal_phalanx_5");
HAnimSegment1581->setName("r_carpal_proximal_phalanx_5");
CTransform* Transform1582 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1583 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1584 = (CShape *)(m_pScene.createNode("Shape"));
Shape1584->setUSE("HAnimJointShape");
Transform1583->addChild(*Shape1584);

Transform1582->addChildren(*Transform1583);

HAnimSegment1581->addChildren(*Transform1582);

CShape* Shape1585 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1586 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1586->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1587 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1587->setUSE("HAnimSegmentLineColorRGBA");
LineSet1586->setColor(*ColorRGBA1587);

CCoordinate* Coordinate1588 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1588->setPoint(new float[6]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963});
LineSet1586->setCoord(*Coordinate1588);

Shape1585->setGeometry(LineSet1586);

HAnimSegment1581->addChildren(*Shape1585);

HAnimJoint1580->addChildren(*HAnimSegment1581);

CHAnimJoint* HAnimJoint1589 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1589->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint1589->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint1589->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
CHAnimSegment* HAnimSegment1590 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1590->setDEF("hanim_r_carpal_middle_phalanx_4");
HAnimSegment1590->setName("r_carpal_middle_phalanx_5");
CTransform* Transform1591 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform1592 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1593 = (CShape *)(m_pScene.createNode("Shape"));
Shape1593->setUSE("HAnimJointShape");
Transform1592->addChild(*Shape1593);

Transform1591->addChildren(*Transform1592);

HAnimSegment1590->addChildren(*Transform1591);

CShape* Shape1594 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1595 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1595->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1596 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1596->setUSE("HAnimSegmentLineColorRGBA");
LineSet1595->setColor(*ColorRGBA1596);

CCoordinate* Coordinate1597 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1597->setPoint(new float[6]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096});
LineSet1595->setCoord(*Coordinate1597);

Shape1594->setGeometry(LineSet1595);

HAnimSegment1590->addChildren(*Shape1594);

CHAnimSite* HAnimSite1598 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1598->setDEF("hanim_r_carpal_distal_phalanx_5_tip");
HAnimSite1598->setName("r_carpal_distal_phalanx_5_tip");
HAnimSite1598->setTranslation(new float[3]{0.25,0.79,0});
CTouchSensor* TouchSensor1599 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1599->setDescription("HAnimSite r_carpal_distal_phalanx_5_tip");
HAnimSite1598->addChildren(*TouchSensor1599);

CShape* Shape1600 = (CShape *)(m_pScene.createNode("Shape"));
Shape1600->setUSE("HAnimSiteShape");
HAnimSite1598->addChildren(*Shape1600);

HAnimSegment1590->addChildren(*HAnimSite1598);

HAnimJoint1589->addChildren(*HAnimSegment1590);

CHAnimJoint* HAnimJoint1601 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1601->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint1601->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint1601->setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint1589->addChildren(*HAnimJoint1601);

HAnimJoint1580->addChildren(*HAnimJoint1589);

HAnimJoint1571->addChildren(*HAnimJoint1580);

HAnimJoint1524->addChildren(*HAnimJoint1571);

HAnimJoint1383->addChildren(*HAnimJoint1524);

HAnimJoint1371->addChildren(*HAnimJoint1383);

HAnimJoint1350->addChildren(*HAnimJoint1371);

HAnimJoint1335->addChildren(*HAnimJoint1350);

HAnimJoint1326->addChildren(*HAnimJoint1335);

HAnimJoint845->addChildren(*HAnimJoint1326);

HAnimJoint830->addChildren(*HAnimJoint845);

HAnimJoint821->addChildren(*HAnimJoint830);

HAnimJoint812->addChildren(*HAnimJoint821);

HAnimJoint803->addChildren(*HAnimJoint812);

HAnimJoint791->addChildren(*HAnimJoint803);

HAnimJoint770->addChildren(*HAnimJoint791);

HAnimJoint761->addChildren(*HAnimJoint770);

HAnimJoint752->addChildren(*HAnimJoint761);

HAnimJoint737->addChildren(*HAnimJoint752);

HAnimJoint725->addChildren(*HAnimJoint737);

HAnimJoint716->addChildren(*HAnimJoint725);

HAnimJoint707->addChildren(*HAnimJoint716);

HAnimJoint698->addChildren(*HAnimJoint707);

HAnimJoint680->addChildren(*HAnimJoint698);

HAnimJoint671->addChildren(*HAnimJoint680);

HAnimJoint662->addChildren(*HAnimJoint671);

HAnimJoint43->addChildren(*HAnimJoint662);

HAnimHumanoid42->setSkeleton(*HAnimJoint43);

CHAnimSite* HAnimSite1602 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1602->setUSE("hanim_buttocks_standing_wall_contact_point_pt");
HAnimHumanoid42->setSites(*HAnimSite1602);

CHAnimSite* HAnimSite1603 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1603->setUSE("hanim_crotch_pt");
HAnimHumanoid42->setSites(*HAnimSite1603);

CHAnimSite* HAnimSite1604 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1604->setUSE("hanim_l_asis_pt");
HAnimHumanoid42->setSites(*HAnimSite1604);

CHAnimSite* HAnimSite1605 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1605->setUSE("hanim_l_iliocristale_pt");
HAnimHumanoid42->setSites(*HAnimSite1605);

CHAnimSite* HAnimSite1606 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1606->setUSE("hanim_l_psis_pt");
HAnimHumanoid42->setSites(*HAnimSite1606);

CHAnimSite* HAnimSite1607 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1607->setUSE("hanim_l_trochanterion_pt");
HAnimHumanoid42->setSites(*HAnimSite1607);

CHAnimSite* HAnimSite1608 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1608->setUSE("hanim_r_asis_pt");
HAnimHumanoid42->setSites(*HAnimSite1608);

CHAnimSite* HAnimSite1609 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1609->setUSE("hanim_r_iliocristale_pt");
HAnimHumanoid42->setSites(*HAnimSite1609);

CHAnimSite* HAnimSite1610 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1610->setUSE("hanim_r_psis_pt");
HAnimHumanoid42->setSites(*HAnimSite1610);

CHAnimSite* HAnimSite1611 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1611->setUSE("hanim_r_trochanterion_pt");
HAnimHumanoid42->setSites(*HAnimSite1611);

CHAnimSite* HAnimSite1612 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1612->setUSE("hanim_navel_pt");
HAnimHumanoid42->setSites(*HAnimSite1612);

CHAnimSite* HAnimSite1613 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1613->setUSE("hanim_waist_preferred_anterior_pt");
HAnimHumanoid42->setSites(*HAnimSite1613);

CHAnimSite* HAnimSite1614 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1614->setUSE("hanim_waist_preferred_posterior_pt");
HAnimHumanoid42->setSites(*HAnimSite1614);

CHAnimSite* HAnimSite1615 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1615->setUSE("hanim_l_femoral_lateral_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite1615);

CHAnimSite* HAnimSite1616 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1616->setUSE("hanim_l_femoral_medial_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite1616);

CHAnimSite* HAnimSite1617 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1617->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid42->setSites(*HAnimSite1617);

CHAnimSite* HAnimSite1618 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1618->setUSE("hanim_l_suprapatella_pt");
HAnimHumanoid42->setSites(*HAnimSite1618);

CHAnimSite* HAnimSite1619 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1619->setUSE("hanim_r_femoral_lateral_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite1619);

CHAnimSite* HAnimSite1620 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1620->setUSE("hanim_r_femoral_medial_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite1620);

CHAnimSite* HAnimSite1621 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1621->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid42->setSites(*HAnimSite1621);

CHAnimSite* HAnimSite1622 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1622->setUSE("hanim_r_suprapatella_pt");
HAnimHumanoid42->setSites(*HAnimSite1622);

CHAnimSite* HAnimSite1623 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1623->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid42->setSites(*HAnimSite1623);

CHAnimSite* HAnimSite1624 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1624->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid42->setSites(*HAnimSite1624);

CHAnimSite* HAnimSite1625 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1625->setUSE("hanim_l_tibiale_pt");
HAnimHumanoid42->setSites(*HAnimSite1625);

CHAnimSite* HAnimSite1626 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1626->setUSE("hanim_l_calcaneus_posterior_pt");
HAnimHumanoid42->setSites(*HAnimSite1626);

CHAnimSite* HAnimSite1627 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1627->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid42->setSites(*HAnimSite1627);

CHAnimSite* HAnimSite1628 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1628->setUSE("hanim_l_metatarsal_phalanx_1_pt");
HAnimHumanoid42->setSites(*HAnimSite1628);

CHAnimSite* HAnimSite1629 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1629->setUSE("hanim_l_tarsal_distal_phalanx_1_tip");
HAnimHumanoid42->setSites(*HAnimSite1629);

CHAnimSite* HAnimSite1630 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1630->setUSE("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimHumanoid42->setSites(*HAnimSite1630);

CHAnimSite* HAnimSite1631 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1631->setUSE("hanim_l_tarsal_distal_phalanx_3_tip");
HAnimHumanoid42->setSites(*HAnimSite1631);

CHAnimSite* HAnimSite1632 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1632->setUSE("hanim_l_tarsal_distal_phalanx_4_tip");
HAnimHumanoid42->setSites(*HAnimSite1632);

CHAnimSite* HAnimSite1633 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1633->setUSE("hanim_l_metatarsal_phalanx_5_pt");
HAnimHumanoid42->setSites(*HAnimSite1633);

CHAnimSite* HAnimSite1634 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1634->setUSE("hanim_l_tarsal_distal_phalanx_5_tip");
HAnimHumanoid42->setSites(*HAnimSite1634);

CHAnimSite* HAnimSite1635 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1635->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid42->setSites(*HAnimSite1635);

CHAnimSite* HAnimSite1636 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1636->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid42->setSites(*HAnimSite1636);

CHAnimSite* HAnimSite1637 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1637->setUSE("hanim_r_tibiale_pt");
HAnimHumanoid42->setSites(*HAnimSite1637);

CHAnimSite* HAnimSite1638 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1638->setUSE("hanim_r_calcaneus_posterior_pt");
HAnimHumanoid42->setSites(*HAnimSite1638);

CHAnimSite* HAnimSite1639 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1639->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid42->setSites(*HAnimSite1639);

CHAnimSite* HAnimSite1640 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1640->setUSE("hanim_r_metatarsal_phalanx_1_pt");
HAnimHumanoid42->setSites(*HAnimSite1640);

CHAnimSite* HAnimSite1641 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1641->setUSE("hanim_r_tarsal_distal_phalanx_1_tip");
HAnimHumanoid42->setSites(*HAnimSite1641);

CHAnimSite* HAnimSite1642 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1642->setUSE("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimHumanoid42->setSites(*HAnimSite1642);

CHAnimSite* HAnimSite1643 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1643->setUSE("hanim_r_tarsal_distal_phalanx_3_tip");
HAnimHumanoid42->setSites(*HAnimSite1643);

CHAnimSite* HAnimSite1644 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1644->setUSE("hanim_r_tarsal_distal_phalanx_4_tip");
HAnimHumanoid42->setSites(*HAnimSite1644);

CHAnimSite* HAnimSite1645 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1645->setUSE("hanim_r_metatarsal_phalanx_5_pt");
HAnimHumanoid42->setSites(*HAnimSite1645);

CHAnimSite* HAnimSite1646 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1646->setUSE("hanim_r_tarsal_distal_phalanx_5_tip");
HAnimHumanoid42->setSites(*HAnimSite1646);

CHAnimSite* HAnimSite1647 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1647->setUSE("hanim_l_rib10_pt");
HAnimHumanoid42->setSites(*HAnimSite1647);

CHAnimSite* HAnimSite1648 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1648->setUSE("hanim_r_rib10_pt");
HAnimHumanoid42->setSites(*HAnimSite1648);

CHAnimSite* HAnimSite1649 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1649->setUSE("hanim_spine_2_middle_back_pt");
HAnimHumanoid42->setSites(*HAnimSite1649);

CHAnimSite* HAnimSite1650 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1650->setUSE("hanim_substernale_pt");
HAnimHumanoid42->setSites(*HAnimSite1650);

CHAnimSite* HAnimSite1651 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1651->setUSE("hanim_l_thelion_pt");
HAnimHumanoid42->setSites(*HAnimSite1651);

CHAnimSite* HAnimSite1652 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1652->setUSE("hanim_r_thelion_pt");
HAnimHumanoid42->setSites(*HAnimSite1652);

CHAnimSite* HAnimSite1653 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1653->setUSE("hanim_l_chest_midsagittal_plane_pt");
HAnimHumanoid42->setSites(*HAnimSite1653);

CHAnimSite* HAnimSite1654 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1654->setUSE("hanim_mesosternale_pt");
HAnimHumanoid42->setSites(*HAnimSite1654);

CHAnimSite* HAnimSite1655 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1655->setUSE("hanim_r_chest_midsagittal_plane_pt");
HAnimHumanoid42->setSites(*HAnimSite1655);

CHAnimSite* HAnimSite1656 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1656->setUSE("hanim_rear_center_midsagittal_plane_pt");
HAnimHumanoid42->setSites(*HAnimSite1656);

CHAnimSite* HAnimSite1657 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1657->setUSE("hanim_spine_1_middle_back_pt");
HAnimHumanoid42->setSites(*HAnimSite1657);

CHAnimSite* HAnimSite1658 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1658->setUSE("hanim_cervicale_pt");
HAnimHumanoid42->setSites(*HAnimSite1658);

CHAnimSite* HAnimSite1659 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1659->setUSE("hanim_suprasternale_pt");
HAnimHumanoid42->setSites(*HAnimSite1659);

CHAnimSite* HAnimSite1660 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1660->setUSE("hanim_l_neck_base_pt");
HAnimHumanoid42->setSites(*HAnimSite1660);

CHAnimSite* HAnimSite1661 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1661->setUSE("hanim_r_neck_base_pt");
HAnimHumanoid42->setSites(*HAnimSite1661);

CHAnimSite* HAnimSite1662 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1662->setUSE("hanim_l_acromion_pt");
HAnimHumanoid42->setSites(*HAnimSite1662);

CHAnimSite* HAnimSite1663 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1663->setUSE("hanim_l_axilla_distal_pt");
HAnimHumanoid42->setSites(*HAnimSite1663);

CHAnimSite* HAnimSite1664 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1664->setUSE("hanim_l_axilla_posterior_folds_pt");
HAnimHumanoid42->setSites(*HAnimSite1664);

CHAnimSite* HAnimSite1665 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1665->setUSE("hanim_l_axilla_proximal_pt");
HAnimHumanoid42->setSites(*HAnimSite1665);

CHAnimSite* HAnimSite1666 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1666->setUSE("hanim_l_clavicale_pt");
HAnimHumanoid42->setSites(*HAnimSite1666);

CHAnimSite* HAnimSite1667 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1667->setUSE("hanim_r_acromion_pt");
HAnimHumanoid42->setSites(*HAnimSite1667);

CHAnimSite* HAnimSite1668 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1668->setUSE("hanim_r_axilla_distal_pt");
HAnimHumanoid42->setSites(*HAnimSite1668);

CHAnimSite* HAnimSite1669 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1669->setUSE("hanim_r_axilla_posterior_folds_pt");
HAnimHumanoid42->setSites(*HAnimSite1669);

CHAnimSite* HAnimSite1670 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1670->setUSE("hanim_r_axilla_proximal_pt");
HAnimHumanoid42->setSites(*HAnimSite1670);

CHAnimSite* HAnimSite1671 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1671->setUSE("hanim_r_clavicale_pt");
HAnimHumanoid42->setSites(*HAnimSite1671);

CHAnimSite* HAnimSite1672 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1672->setUSE("hanim_adams_apple_pt");
HAnimHumanoid42->setSites(*HAnimSite1672);

CHAnimSite* HAnimSite1673 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1673->setUSE("hanim_glabella_pt");
HAnimHumanoid42->setSites(*HAnimSite1673);

CHAnimSite* HAnimSite1674 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1674->setUSE("hanim_l_ectocanthus_pt");
HAnimHumanoid42->setSites(*HAnimSite1674);

CHAnimSite* HAnimSite1675 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1675->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid42->setSites(*HAnimSite1675);

CHAnimSite* HAnimSite1676 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1676->setUSE("hanim_l_tragion_pt");
HAnimHumanoid42->setSites(*HAnimSite1676);

CHAnimSite* HAnimSite1677 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1677->setUSE("hanim_nuchale_pt");
HAnimHumanoid42->setSites(*HAnimSite1677);

CHAnimSite* HAnimSite1678 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1678->setUSE("hanim_opisthocranion_pt");
HAnimHumanoid42->setSites(*HAnimSite1678);

CHAnimSite* HAnimSite1679 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1679->setUSE("hanim_r_ectocanthus_pt");
HAnimHumanoid42->setSites(*HAnimSite1679);

CHAnimSite* HAnimSite1680 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1680->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid42->setSites(*HAnimSite1680);

CHAnimSite* HAnimSite1681 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1681->setUSE("hanim_r_tragion_pt");
HAnimHumanoid42->setSites(*HAnimSite1681);

CHAnimSite* HAnimSite1682 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1682->setUSE("hanim_sellion_pt");
HAnimHumanoid42->setSites(*HAnimSite1682);

CHAnimSite* HAnimSite1683 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1683->setUSE("hanim_skull_vertex_pt");
HAnimHumanoid42->setSites(*HAnimSite1683);

CHAnimSite* HAnimSite1684 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1684->setUSE("hanim_l_gonion_pt");
HAnimHumanoid42->setSites(*HAnimSite1684);

CHAnimSite* HAnimSite1685 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1685->setUSE("hanim_menton_pt");
HAnimHumanoid42->setSites(*HAnimSite1685);

CHAnimSite* HAnimSite1686 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1686->setUSE("hanim_r_gonion_pt");
HAnimHumanoid42->setSites(*HAnimSite1686);

CHAnimSite* HAnimSite1687 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1687->setUSE("hanim_supramenton_pt");
HAnimHumanoid42->setSites(*HAnimSite1687);

CHAnimSite* HAnimSite1688 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1688->setUSE("hanim_l_bideltoid_pt");
HAnimHumanoid42->setSites(*HAnimSite1688);

CHAnimSite* HAnimSite1689 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1689->setUSE("hanim_l_humeral_lateral_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite1689);

CHAnimSite* HAnimSite1690 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1690->setUSE("hanim_l_humeral_medial_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite1690);

CHAnimSite* HAnimSite1691 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1691->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid42->setSites(*HAnimSite1691);

CHAnimSite* HAnimSite1692 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1692->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid42->setSites(*HAnimSite1692);

CHAnimSite* HAnimSite1693 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1693->setUSE("hanim_l_radiale_pt");
HAnimHumanoid42->setSites(*HAnimSite1693);

CHAnimSite* HAnimSite1694 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1694->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid42->setSites(*HAnimSite1694);

CHAnimSite* HAnimSite1695 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1695->setUSE("hanim_l_carpal_distal_phalanx_1_tip");
HAnimHumanoid42->setSites(*HAnimSite1695);

CHAnimSite* HAnimSite1696 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1696->setUSE("hanim_l_metacarpal_phalanx_2_pt");
HAnimHumanoid42->setSites(*HAnimSite1696);

CHAnimSite* HAnimSite1697 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1697->setUSE("hanim_l_carpal_distal_phalanx_2_tip");
HAnimHumanoid42->setSites(*HAnimSite1697);

CHAnimSite* HAnimSite1698 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1698->setUSE("hanim_l_dactylion_pt");
HAnimHumanoid42->setSites(*HAnimSite1698);

CHAnimSite* HAnimSite1699 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1699->setUSE("hanim_l_metacarpal_phalanx_3_pt");
HAnimHumanoid42->setSites(*HAnimSite1699);

CHAnimSite* HAnimSite1700 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1700->setUSE("hanim_l_carpal_distal_phalanx_3_tip");
HAnimHumanoid42->setSites(*HAnimSite1700);

CHAnimSite* HAnimSite1701 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1701->setUSE("hanim_l_metacarpal_phalanx_5_pt");
HAnimHumanoid42->setSites(*HAnimSite1701);

CHAnimSite* HAnimSite1702 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1702->setUSE("hanim_l_carpal_distal_phalanx_4_tip");
HAnimHumanoid42->setSites(*HAnimSite1702);

CHAnimSite* HAnimSite1703 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1703->setUSE("hanim_l_carpal_distal_phalanx_5_tip");
HAnimHumanoid42->setSites(*HAnimSite1703);

CHAnimSite* HAnimSite1704 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1704->setUSE("hanim_r_bideltoid_pt");
HAnimHumanoid42->setSites(*HAnimSite1704);

CHAnimSite* HAnimSite1705 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1705->setUSE("hanim_r_humeral_lateral_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite1705);

CHAnimSite* HAnimSite1706 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1706->setUSE("hanim_r_humeral_medial_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite1706);

CHAnimSite* HAnimSite1707 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1707->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid42->setSites(*HAnimSite1707);

CHAnimSite* HAnimSite1708 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1708->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid42->setSites(*HAnimSite1708);

CHAnimSite* HAnimSite1709 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1709->setUSE("hanim_r_radiale_pt");
HAnimHumanoid42->setSites(*HAnimSite1709);

CHAnimSite* HAnimSite1710 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1710->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid42->setSites(*HAnimSite1710);

CHAnimSite* HAnimSite1711 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1711->setUSE("hanim_r_carpal_distal_phalanx_1_tip");
HAnimHumanoid42->setSites(*HAnimSite1711);

CHAnimSite* HAnimSite1712 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1712->setUSE("hanim_r_metacarpal_phalanx_2_pt");
HAnimHumanoid42->setSites(*HAnimSite1712);

CHAnimSite* HAnimSite1713 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1713->setUSE("hanim_r_carpal_distal_phalanx_2_tip");
HAnimHumanoid42->setSites(*HAnimSite1713);

CHAnimSite* HAnimSite1714 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1714->setUSE("hanim_r_dactylion_pt");
HAnimHumanoid42->setSites(*HAnimSite1714);

CHAnimSite* HAnimSite1715 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1715->setUSE("hanim_r_metacarpal_phalanx_3_pt");
HAnimHumanoid42->setSites(*HAnimSite1715);

CHAnimSite* HAnimSite1716 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1716->setUSE("hanim_r_carpal_distal_phalanx_3_tip");
HAnimHumanoid42->setSites(*HAnimSite1716);

CHAnimSite* HAnimSite1717 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1717->setUSE("hanim_r_metacarpal_phalanx_5_pt");
HAnimHumanoid42->setSites(*HAnimSite1717);

CHAnimSite* HAnimSite1718 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1718->setUSE("hanim_r_carpal_distal_phalanx_4_tip");
HAnimHumanoid42->setSites(*HAnimSite1718);

CHAnimSite* HAnimSite1719 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1719->setUSE("hanim_r_carpal_distal_phalanx_5_tip");
HAnimHumanoid42->setSites(*HAnimSite1719);

CHAnimSegment* HAnimSegment1720 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1720->setUSE("hanim_sacrum");
HAnimHumanoid42->setSegments(*HAnimSegment1720);

CHAnimSegment* HAnimSegment1721 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1721->setUSE("hanim_pelvis");
HAnimHumanoid42->setSegments(*HAnimSegment1721);

CHAnimSegment* HAnimSegment1722 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1722->setUSE("hanim_l_thigh");
HAnimHumanoid42->setSegments(*HAnimSegment1722);

CHAnimSegment* HAnimSegment1723 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1723->setUSE("hanim_l_calf");
HAnimHumanoid42->setSegments(*HAnimSegment1723);

CHAnimSegment* HAnimSegment1724 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1724->setUSE("hanim_l_talus");
HAnimHumanoid42->setSegments(*HAnimSegment1724);

CHAnimSegment* HAnimSegment1725 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1725->setUSE("hanim_l_navicular");
HAnimHumanoid42->setSegments(*HAnimSegment1725);

CHAnimSegment* HAnimSegment1726 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1726->setUSE("hanim_l_cuneiform_1");
HAnimHumanoid42->setSegments(*HAnimSegment1726);

CHAnimSegment* HAnimSegment1727 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1727->setUSE("hanim_l_metatarsal_1");
HAnimHumanoid42->setSegments(*HAnimSegment1727);

CHAnimSegment* HAnimSegment1728 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1728->setUSE("hanim_l_tarsal_proximal_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1728);

CHAnimSegment* HAnimSegment1729 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1729->setUSE("hanim_l_cuneiform_2");
HAnimHumanoid42->setSegments(*HAnimSegment1729);

CHAnimSegment* HAnimSegment1730 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1730->setUSE("hanim_l_metatarsal_2");
HAnimHumanoid42->setSegments(*HAnimSegment1730);

CHAnimSegment* HAnimSegment1731 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1731->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid42->setSegments(*HAnimSegment1731);

CHAnimSegment* HAnimSegment1732 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1732->setUSE("hanim_l_tarsal_middle_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1732);

CHAnimSegment* HAnimSegment1733 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1733->setUSE("hanim_l_cuneiform_3");
HAnimHumanoid42->setSegments(*HAnimSegment1733);

CHAnimSegment* HAnimSegment1734 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1734->setUSE("hanim_l_metatarsal_3");
HAnimHumanoid42->setSegments(*HAnimSegment1734);

CHAnimSegment* HAnimSegment1735 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1735->setUSE("hanim_l_tarsal_proximal_phalanx_3");
HAnimHumanoid42->setSegments(*HAnimSegment1735);

CHAnimSegment* HAnimSegment1736 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1736->setUSE("hanim_l_tarsal_middle_phalanx_2");
HAnimHumanoid42->setSegments(*HAnimSegment1736);

CHAnimSegment* HAnimSegment1737 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1737->setUSE("hanim_l_calcaneus");
HAnimHumanoid42->setSegments(*HAnimSegment1737);

CHAnimSegment* HAnimSegment1738 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1738->setUSE("hanim_l_cuboid");
HAnimHumanoid42->setSegments(*HAnimSegment1738);

CHAnimSegment* HAnimSegment1739 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1739->setUSE("hanim_l_metatarsal_4");
HAnimHumanoid42->setSegments(*HAnimSegment1739);

CHAnimSegment* HAnimSegment1740 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1740->setUSE("hanim_l_tarsal_proximal_phalanx_4");
HAnimHumanoid42->setSegments(*HAnimSegment1740);

CHAnimSegment* HAnimSegment1741 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1741->setUSE("hanim_l_tarsal_middle_phalanx_3");
HAnimHumanoid42->setSegments(*HAnimSegment1741);

CHAnimSegment* HAnimSegment1742 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1742->setUSE("hanim_l_metatarsal_5");
HAnimHumanoid42->setSegments(*HAnimSegment1742);

CHAnimSegment* HAnimSegment1743 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1743->setUSE("hanim_l_tarsal_proximal_phalanx_5");
HAnimHumanoid42->setSegments(*HAnimSegment1743);

CHAnimSegment* HAnimSegment1744 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1744->setUSE("hanim_l_tarsal_middle_phalanx_4");
HAnimHumanoid42->setSegments(*HAnimSegment1744);

CHAnimSegment* HAnimSegment1745 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1745->setUSE("hanim_r_thigh");
HAnimHumanoid42->setSegments(*HAnimSegment1745);

CHAnimSegment* HAnimSegment1746 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1746->setUSE("hanim_r_calf");
HAnimHumanoid42->setSegments(*HAnimSegment1746);

CHAnimSegment* HAnimSegment1747 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1747->setUSE("hanim_r_talus");
HAnimHumanoid42->setSegments(*HAnimSegment1747);

CHAnimSegment* HAnimSegment1748 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1748->setUSE("hanim_r_navicular");
HAnimHumanoid42->setSegments(*HAnimSegment1748);

CHAnimSegment* HAnimSegment1749 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1749->setUSE("hanim_r_cuneiform_1");
HAnimHumanoid42->setSegments(*HAnimSegment1749);

CHAnimSegment* HAnimSegment1750 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1750->setUSE("hanim_r_metatarsal_1");
HAnimHumanoid42->setSegments(*HAnimSegment1750);

CHAnimSegment* HAnimSegment1751 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1751->setUSE("hanim_r_tarsal_proximal_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1751);

CHAnimSegment* HAnimSegment1752 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1752->setUSE("hanim_r_cuneiform_2");
HAnimHumanoid42->setSegments(*HAnimSegment1752);

CHAnimSegment* HAnimSegment1753 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1753->setUSE("hanim_r_metatarsal_2");
HAnimHumanoid42->setSegments(*HAnimSegment1753);

CHAnimSegment* HAnimSegment1754 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1754->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid42->setSegments(*HAnimSegment1754);

CHAnimSegment* HAnimSegment1755 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1755->setUSE("hanim_r_tarsal_middle_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1755);

CHAnimSegment* HAnimSegment1756 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1756->setUSE("hanim_r_cuneiform_3");
HAnimHumanoid42->setSegments(*HAnimSegment1756);

CHAnimSegment* HAnimSegment1757 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1757->setUSE("hanim_r_metatarsal_3");
HAnimHumanoid42->setSegments(*HAnimSegment1757);

CHAnimSegment* HAnimSegment1758 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1758->setUSE("hanim_r_tarsal_proximal_phalanx_3");
HAnimHumanoid42->setSegments(*HAnimSegment1758);

CHAnimSegment* HAnimSegment1759 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1759->setUSE("hanim_r_tarsal_middle_phalanx_2");
HAnimHumanoid42->setSegments(*HAnimSegment1759);

CHAnimSegment* HAnimSegment1760 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1760->setUSE("hanim_r_calcaneus");
HAnimHumanoid42->setSegments(*HAnimSegment1760);

CHAnimSegment* HAnimSegment1761 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1761->setUSE("hanim_r_cuboid");
HAnimHumanoid42->setSegments(*HAnimSegment1761);

CHAnimSegment* HAnimSegment1762 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1762->setUSE("hanim_r_metatarsal_4");
HAnimHumanoid42->setSegments(*HAnimSegment1762);

CHAnimSegment* HAnimSegment1763 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1763->setUSE("hanim_r_tarsal_proximal_phalanx_4");
HAnimHumanoid42->setSegments(*HAnimSegment1763);

CHAnimSegment* HAnimSegment1764 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1764->setUSE("hanim_r_tarsal_middle_phalanx_3");
HAnimHumanoid42->setSegments(*HAnimSegment1764);

CHAnimSegment* HAnimSegment1765 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1765->setUSE("hanim_r_metatarsal_5");
HAnimHumanoid42->setSegments(*HAnimSegment1765);

CHAnimSegment* HAnimSegment1766 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1766->setUSE("hanim_r_tarsal_proximal_phalanx_5");
HAnimHumanoid42->setSegments(*HAnimSegment1766);

CHAnimSegment* HAnimSegment1767 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1767->setUSE("hanim_r_tarsal_middle_phalanx_4");
HAnimHumanoid42->setSegments(*HAnimSegment1767);

CHAnimSegment* HAnimSegment1768 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1768->setUSE("hanim_l5");
HAnimHumanoid42->setSegments(*HAnimSegment1768);

CHAnimSegment* HAnimSegment1769 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1769->setUSE("hanim_l4");
HAnimHumanoid42->setSegments(*HAnimSegment1769);

CHAnimSegment* HAnimSegment1770 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1770->setUSE("hanim_l3");
HAnimHumanoid42->setSegments(*HAnimSegment1770);

CHAnimSegment* HAnimSegment1771 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1771->setUSE("hanim_l2");
HAnimHumanoid42->setSegments(*HAnimSegment1771);

CHAnimSegment* HAnimSegment1772 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1772->setUSE("hanim_l1");
HAnimHumanoid42->setSegments(*HAnimSegment1772);

CHAnimSegment* HAnimSegment1773 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1773->setUSE("hanim_t12");
HAnimHumanoid42->setSegments(*HAnimSegment1773);

CHAnimSegment* HAnimSegment1774 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1774->setUSE("hanim_t11");
HAnimHumanoid42->setSegments(*HAnimSegment1774);

CHAnimSegment* HAnimSegment1775 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1775->setUSE("hanim_t10");
HAnimHumanoid42->setSegments(*HAnimSegment1775);

CHAnimSegment* HAnimSegment1776 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1776->setUSE("hanim_t9");
HAnimHumanoid42->setSegments(*HAnimSegment1776);

CHAnimSegment* HAnimSegment1777 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1777->setUSE("hanim_t8");
HAnimHumanoid42->setSegments(*HAnimSegment1777);

CHAnimSegment* HAnimSegment1778 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1778->setUSE("hanim_t7");
HAnimHumanoid42->setSegments(*HAnimSegment1778);

CHAnimSegment* HAnimSegment1779 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1779->setUSE("hanim_t6");
HAnimHumanoid42->setSegments(*HAnimSegment1779);

CHAnimSegment* HAnimSegment1780 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1780->setUSE("hanim_t5");
HAnimHumanoid42->setSegments(*HAnimSegment1780);

CHAnimSegment* HAnimSegment1781 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1781->setUSE("hanim_t4");
HAnimHumanoid42->setSegments(*HAnimSegment1781);

CHAnimSegment* HAnimSegment1782 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1782->setUSE("hanim_t3");
HAnimHumanoid42->setSegments(*HAnimSegment1782);

CHAnimSegment* HAnimSegment1783 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1783->setUSE("hanim_t2");
HAnimHumanoid42->setSegments(*HAnimSegment1783);

CHAnimSegment* HAnimSegment1784 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1784->setUSE("hanim_t1");
HAnimHumanoid42->setSegments(*HAnimSegment1784);

CHAnimSegment* HAnimSegment1785 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1785->setUSE("hanim_c7");
HAnimHumanoid42->setSegments(*HAnimSegment1785);

CHAnimSegment* HAnimSegment1786 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1786->setUSE("hanim_c6");
HAnimHumanoid42->setSegments(*HAnimSegment1786);

CHAnimSegment* HAnimSegment1787 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1787->setUSE("hanim_c5");
HAnimHumanoid42->setSegments(*HAnimSegment1787);

CHAnimSegment* HAnimSegment1788 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1788->setUSE("hanim_c4");
HAnimHumanoid42->setSegments(*HAnimSegment1788);

CHAnimSegment* HAnimSegment1789 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1789->setUSE("hanim_c3");
HAnimHumanoid42->setSegments(*HAnimSegment1789);

CHAnimSegment* HAnimSegment1790 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1790->setUSE("hanim_c2");
HAnimHumanoid42->setSegments(*HAnimSegment1790);

CHAnimSegment* HAnimSegment1791 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1791->setUSE("hanim_c1");
HAnimHumanoid42->setSegments(*HAnimSegment1791);

CHAnimSegment* HAnimSegment1792 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1792->setUSE("hanim_skull");
HAnimHumanoid42->setSegments(*HAnimSegment1792);

CHAnimSegment* HAnimSegment1793 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1793->setUSE("hanim_l_clavicle");
HAnimHumanoid42->setSegments(*HAnimSegment1793);

CHAnimSegment* HAnimSegment1794 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1794->setUSE("hanim_l_scapula");
HAnimHumanoid42->setSegments(*HAnimSegment1794);

CHAnimSegment* HAnimSegment1795 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1795->setUSE("hanim_l_upperarm");
HAnimHumanoid42->setSegments(*HAnimSegment1795);

CHAnimSegment* HAnimSegment1796 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1796->setUSE("hanim_l_forearm");
HAnimHumanoid42->setSegments(*HAnimSegment1796);

CHAnimSegment* HAnimSegment1797 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1797->setUSE("hanim_l_carpal");
HAnimHumanoid42->setSegments(*HAnimSegment1797);

CHAnimSegment* HAnimSegment1798 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1798->setUSE("hanim_l_trapezium");
HAnimHumanoid42->setSegments(*HAnimSegment1798);

CHAnimSegment* HAnimSegment1799 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1799->setUSE("hanim_l_metacarpal_1");
HAnimHumanoid42->setSegments(*HAnimSegment1799);

CHAnimSegment* HAnimSegment1800 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1800->setUSE("hanim_l_carpal_proximal_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1800);

CHAnimSegment* HAnimSegment1801 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1801->setUSE("hanim_l_trapezoid");
HAnimHumanoid42->setSegments(*HAnimSegment1801);

CHAnimSegment* HAnimSegment1802 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1802->setUSE("hanim_l_metacarpal_2");
HAnimHumanoid42->setSegments(*HAnimSegment1802);

CHAnimSegment* HAnimSegment1803 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1803->setUSE("hanim_l_carpal_proximal_phalanx_2");
HAnimHumanoid42->setSegments(*HAnimSegment1803);

CHAnimSegment* HAnimSegment1804 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1804->setUSE("hanim_l_carpal_middle_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1804);

CHAnimSegment* HAnimSegment1805 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1805->setUSE("hanim_l_capitate");
HAnimHumanoid42->setSegments(*HAnimSegment1805);

CHAnimSegment* HAnimSegment1806 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1806->setUSE("hanim_l_metacarpal_3");
HAnimHumanoid42->setSegments(*HAnimSegment1806);

CHAnimSegment* HAnimSegment1807 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1807->setUSE("hanim_l_carpal_proximal_phalanx_3");
HAnimHumanoid42->setSegments(*HAnimSegment1807);

CHAnimSegment* HAnimSegment1808 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1808->setUSE("hanim_l_carpal_middle_phalanx_2");
HAnimHumanoid42->setSegments(*HAnimSegment1808);

CHAnimSegment* HAnimSegment1809 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1809->setUSE("hanim_l_hamate");
HAnimHumanoid42->setSegments(*HAnimSegment1809);

CHAnimSegment* HAnimSegment1810 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1810->setUSE("hanim_l_metacarpal_4");
HAnimHumanoid42->setSegments(*HAnimSegment1810);

CHAnimSegment* HAnimSegment1811 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1811->setUSE("hanim_l_carpal_proximal_phalanx_4");
HAnimHumanoid42->setSegments(*HAnimSegment1811);

CHAnimSegment* HAnimSegment1812 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1812->setUSE("hanim_l_carpal_middle_phalanx_3");
HAnimHumanoid42->setSegments(*HAnimSegment1812);

CHAnimSegment* HAnimSegment1813 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1813->setUSE("hanim_l_metacarpal_5");
HAnimHumanoid42->setSegments(*HAnimSegment1813);

CHAnimSegment* HAnimSegment1814 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1814->setUSE("hanim_l_carpal_proximal_phalanx_5");
HAnimHumanoid42->setSegments(*HAnimSegment1814);

CHAnimSegment* HAnimSegment1815 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1815->setUSE("hanim_l_carpal_middle_phalanx_4");
HAnimHumanoid42->setSegments(*HAnimSegment1815);

CHAnimSegment* HAnimSegment1816 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1816->setUSE("hanim_r_clavicle");
HAnimHumanoid42->setSegments(*HAnimSegment1816);

CHAnimSegment* HAnimSegment1817 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1817->setUSE("hanim_r_scapula");
HAnimHumanoid42->setSegments(*HAnimSegment1817);

CHAnimSegment* HAnimSegment1818 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1818->setUSE("hanim_r_upperarm");
HAnimHumanoid42->setSegments(*HAnimSegment1818);

CHAnimSegment* HAnimSegment1819 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1819->setUSE("hanim_r_forearm");
HAnimHumanoid42->setSegments(*HAnimSegment1819);

CHAnimSegment* HAnimSegment1820 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1820->setUSE("hanim_r_carpal");
HAnimHumanoid42->setSegments(*HAnimSegment1820);

CHAnimSegment* HAnimSegment1821 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1821->setUSE("hanim_r_trapezium");
HAnimHumanoid42->setSegments(*HAnimSegment1821);

CHAnimSegment* HAnimSegment1822 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1822->setUSE("hanim_r_metacarpal_1");
HAnimHumanoid42->setSegments(*HAnimSegment1822);

CHAnimSegment* HAnimSegment1823 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1823->setUSE("hanim_r_carpal_proximal_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1823);

CHAnimSegment* HAnimSegment1824 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1824->setUSE("hanim_r_trapezoid");
HAnimHumanoid42->setSegments(*HAnimSegment1824);

CHAnimSegment* HAnimSegment1825 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1825->setUSE("hanim_r_metacarpal_2");
HAnimHumanoid42->setSegments(*HAnimSegment1825);

CHAnimSegment* HAnimSegment1826 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1826->setUSE("hanim_r_carpal_proximal_phalanx_2");
HAnimHumanoid42->setSegments(*HAnimSegment1826);

CHAnimSegment* HAnimSegment1827 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1827->setUSE("hanim_r_carpal_middle_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1827);

CHAnimSegment* HAnimSegment1828 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1828->setUSE("hanim_r_capitate");
HAnimHumanoid42->setSegments(*HAnimSegment1828);

CHAnimSegment* HAnimSegment1829 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1829->setUSE("hanim_r_metacarpal_3");
HAnimHumanoid42->setSegments(*HAnimSegment1829);

CHAnimSegment* HAnimSegment1830 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1830->setUSE("hanim_r_carpal_proximal_phalanx_3");
HAnimHumanoid42->setSegments(*HAnimSegment1830);

CHAnimSegment* HAnimSegment1831 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1831->setUSE("hanim_r_carpal_middle_phalanx_2");
HAnimHumanoid42->setSegments(*HAnimSegment1831);

CHAnimSegment* HAnimSegment1832 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1832->setUSE("hanim_r_hamate");
HAnimHumanoid42->setSegments(*HAnimSegment1832);

CHAnimSegment* HAnimSegment1833 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1833->setUSE("hanim_r_metacarpal_4");
HAnimHumanoid42->setSegments(*HAnimSegment1833);

CHAnimSegment* HAnimSegment1834 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1834->setUSE("hanim_r_carpal_proximal_phalanx_4");
HAnimHumanoid42->setSegments(*HAnimSegment1834);

CHAnimSegment* HAnimSegment1835 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1835->setUSE("hanim_r_carpal_middle_phalanx_3");
HAnimHumanoid42->setSegments(*HAnimSegment1835);

CHAnimSegment* HAnimSegment1836 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1836->setUSE("hanim_r_metacarpal_5");
HAnimHumanoid42->setSegments(*HAnimSegment1836);

CHAnimSegment* HAnimSegment1837 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1837->setUSE("hanim_r_carpal_proximal_phalanx_5");
HAnimHumanoid42->setSegments(*HAnimSegment1837);

CHAnimSegment* HAnimSegment1838 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1838->setUSE("hanim_r_carpal_middle_phalanx_4");
HAnimHumanoid42->setSegments(*HAnimSegment1838);

CHAnimJoint* HAnimJoint1839 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1839->setUSE("hanim_humanoid_root");
HAnimHumanoid42->addJoints(*HAnimJoint1839);

CHAnimJoint* HAnimJoint1840 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1840->setUSE("hanim_sacroiliac");
HAnimHumanoid42->addJoints(*HAnimJoint1840);

CHAnimJoint* HAnimJoint1841 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1841->setUSE("hanim_l_hip");
HAnimHumanoid42->addJoints(*HAnimJoint1841);

CHAnimJoint* HAnimJoint1842 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1842->setUSE("hanim_l_knee");
HAnimHumanoid42->addJoints(*HAnimJoint1842);

CHAnimJoint* HAnimJoint1843 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1843->setUSE("hanim_l_talocrural");
HAnimHumanoid42->addJoints(*HAnimJoint1843);

CHAnimJoint* HAnimJoint1844 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1844->setUSE("hanim_l_talocalcaneonavicular");
HAnimHumanoid42->addJoints(*HAnimJoint1844);

CHAnimJoint* HAnimJoint1845 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1845->setUSE("hanim_l_cuneonavicular_1");
HAnimHumanoid42->addJoints(*HAnimJoint1845);

CHAnimJoint* HAnimJoint1846 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1846->setUSE("hanim_l_tarsometatarsal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1846);

CHAnimJoint* HAnimJoint1847 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1847->setUSE("hanim_l_metatarsophalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1847);

CHAnimJoint* HAnimJoint1848 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1848->setUSE("hanim_l_tarsal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1848);

CHAnimJoint* HAnimJoint1849 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1849->setUSE("hanim_l_cuneonavicular_2");
HAnimHumanoid42->addJoints(*HAnimJoint1849);

CHAnimJoint* HAnimJoint1850 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1850->setUSE("hanim_l_tarsometatarsal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1850);

CHAnimJoint* HAnimJoint1851 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1851->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1851);

CHAnimJoint* HAnimJoint1852 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1852->setUSE("hanim_l_tarsal_proximal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1852);

CHAnimJoint* HAnimJoint1853 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1853->setUSE("hanim_l_tarsal_distal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1853);

CHAnimJoint* HAnimJoint1854 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1854->setUSE("hanim_l_cuneonavicular_3");
HAnimHumanoid42->addJoints(*HAnimJoint1854);

CHAnimJoint* HAnimJoint1855 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1855->setUSE("hanim_l_tarsometatarsal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1855);

CHAnimJoint* HAnimJoint1856 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1856->setUSE("hanim_l_metatarsophalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1856);

CHAnimJoint* HAnimJoint1857 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1857->setUSE("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1857);

CHAnimJoint* HAnimJoint1858 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1858->setUSE("hanim_l_tarsal_distal_interphalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1858);

CHAnimJoint* HAnimJoint1859 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1859->setUSE("hanim_l_calcaneocuboid");
HAnimHumanoid42->addJoints(*HAnimJoint1859);

CHAnimJoint* HAnimJoint1860 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1860->setUSE("hanim_l_transversetarsal");
HAnimHumanoid42->addJoints(*HAnimJoint1860);

CHAnimJoint* HAnimJoint1861 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1861->setUSE("hanim_l_tarsometatarsal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1861);

CHAnimJoint* HAnimJoint1862 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1862->setUSE("hanim_l_metatarsophalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1862);

CHAnimJoint* HAnimJoint1863 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1863->setUSE("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1863);

CHAnimJoint* HAnimJoint1864 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1864->setUSE("hanim_l_tarsal_distal_interphalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1864);

CHAnimJoint* HAnimJoint1865 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1865->setUSE("hanim_l_tarsometatarsal_5");
HAnimHumanoid42->addJoints(*HAnimJoint1865);

CHAnimJoint* HAnimJoint1866 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1866->setUSE("hanim_l_metatarsophalangeal_5");
HAnimHumanoid42->addJoints(*HAnimJoint1866);

CHAnimJoint* HAnimJoint1867 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1867->setUSE("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1867);

CHAnimJoint* HAnimJoint1868 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1868->setUSE("hanim_l_tarsal_distal_interphalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1868);

CHAnimJoint* HAnimJoint1869 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1869->setUSE("hanim_r_hip");
HAnimHumanoid42->addJoints(*HAnimJoint1869);

CHAnimJoint* HAnimJoint1870 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1870->setUSE("hanim_r_knee");
HAnimHumanoid42->addJoints(*HAnimJoint1870);

CHAnimJoint* HAnimJoint1871 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1871->setUSE("hanim_r_talocrural");
HAnimHumanoid42->addJoints(*HAnimJoint1871);

CHAnimJoint* HAnimJoint1872 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1872->setUSE("hanim_r_talocalcaneonavicular");
HAnimHumanoid42->addJoints(*HAnimJoint1872);

CHAnimJoint* HAnimJoint1873 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1873->setUSE("hanim_r_cuneonavicular_1");
HAnimHumanoid42->addJoints(*HAnimJoint1873);

CHAnimJoint* HAnimJoint1874 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1874->setUSE("hanim_r_tarsometatarsal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1874);

CHAnimJoint* HAnimJoint1875 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1875->setUSE("hanim_r_metatarsophalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1875);

CHAnimJoint* HAnimJoint1876 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1876->setUSE("hanim_r_tarsal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1876);

CHAnimJoint* HAnimJoint1877 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1877->setUSE("hanim_r_cuneonavicular_2");
HAnimHumanoid42->addJoints(*HAnimJoint1877);

CHAnimJoint* HAnimJoint1878 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1878->setUSE("hanim_r_tarsometatarsal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1878);

CHAnimJoint* HAnimJoint1879 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1879->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1879);

CHAnimJoint* HAnimJoint1880 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1880->setUSE("hanim_r_tarsal_proximal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1880);

CHAnimJoint* HAnimJoint1881 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1881->setUSE("hanim_r_tarsal_distal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1881);

CHAnimJoint* HAnimJoint1882 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1882->setUSE("hanim_r_cuneonavicular_3");
HAnimHumanoid42->addJoints(*HAnimJoint1882);

CHAnimJoint* HAnimJoint1883 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1883->setUSE("hanim_r_tarsometatarsal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1883);

CHAnimJoint* HAnimJoint1884 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1884->setUSE("hanim_r_metatarsophalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1884);

CHAnimJoint* HAnimJoint1885 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1885->setUSE("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1885);

CHAnimJoint* HAnimJoint1886 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1886->setUSE("hanim_r_tarsal_distal_interphalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1886);

CHAnimJoint* HAnimJoint1887 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1887->setUSE("hanim_r_calcaneocuboid");
HAnimHumanoid42->addJoints(*HAnimJoint1887);

CHAnimJoint* HAnimJoint1888 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1888->setUSE("hanim_r_transversetarsal");
HAnimHumanoid42->addJoints(*HAnimJoint1888);

CHAnimJoint* HAnimJoint1889 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1889->setUSE("hanim_r_tarsometatarsal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1889);

CHAnimJoint* HAnimJoint1890 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1890->setUSE("hanim_r_metatarsophalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1890);

CHAnimJoint* HAnimJoint1891 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1891->setUSE("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1891);

CHAnimJoint* HAnimJoint1892 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1892->setUSE("hanim_r_tarsal_distal_interphalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1892);

CHAnimJoint* HAnimJoint1893 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1893->setUSE("hanim_r_tarsometatarsal_5");
HAnimHumanoid42->addJoints(*HAnimJoint1893);

CHAnimJoint* HAnimJoint1894 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1894->setUSE("hanim_r_metatarsophalangeal_5");
HAnimHumanoid42->addJoints(*HAnimJoint1894);

CHAnimJoint* HAnimJoint1895 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1895->setUSE("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1895);

CHAnimJoint* HAnimJoint1896 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1896->setUSE("hanim_r_tarsal_distal_interphalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1896);

CHAnimJoint* HAnimJoint1897 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1897->setUSE("hanim_vl5");
HAnimHumanoid42->addJoints(*HAnimJoint1897);

CHAnimJoint* HAnimJoint1898 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1898->setUSE("hanim_vl4");
HAnimHumanoid42->addJoints(*HAnimJoint1898);

CHAnimJoint* HAnimJoint1899 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1899->setUSE("hanim_vl3");
HAnimHumanoid42->addJoints(*HAnimJoint1899);

CHAnimJoint* HAnimJoint1900 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1900->setUSE("hanim_vl2");
HAnimHumanoid42->addJoints(*HAnimJoint1900);

CHAnimJoint* HAnimJoint1901 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1901->setUSE("hanim_vl1");
HAnimHumanoid42->addJoints(*HAnimJoint1901);

CHAnimJoint* HAnimJoint1902 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1902->setUSE("hanim_vt12");
HAnimHumanoid42->addJoints(*HAnimJoint1902);

CHAnimJoint* HAnimJoint1903 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1903->setUSE("hanim_vt11");
HAnimHumanoid42->addJoints(*HAnimJoint1903);

CHAnimJoint* HAnimJoint1904 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1904->setUSE("hanim_vt10");
HAnimHumanoid42->addJoints(*HAnimJoint1904);

CHAnimJoint* HAnimJoint1905 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1905->setUSE("hanim_vt9");
HAnimHumanoid42->addJoints(*HAnimJoint1905);

CHAnimJoint* HAnimJoint1906 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1906->setUSE("hanim_vt8");
HAnimHumanoid42->addJoints(*HAnimJoint1906);

CHAnimJoint* HAnimJoint1907 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1907->setUSE("hanim_vt7");
HAnimHumanoid42->addJoints(*HAnimJoint1907);

CHAnimJoint* HAnimJoint1908 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1908->setUSE("hanim_vt6");
HAnimHumanoid42->addJoints(*HAnimJoint1908);

CHAnimJoint* HAnimJoint1909 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1909->setUSE("hanim_vt5");
HAnimHumanoid42->addJoints(*HAnimJoint1909);

CHAnimJoint* HAnimJoint1910 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1910->setUSE("hanim_vt4");
HAnimHumanoid42->addJoints(*HAnimJoint1910);

CHAnimJoint* HAnimJoint1911 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1911->setUSE("hanim_vt3");
HAnimHumanoid42->addJoints(*HAnimJoint1911);

CHAnimJoint* HAnimJoint1912 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1912->setUSE("hanim_vt2");
HAnimHumanoid42->addJoints(*HAnimJoint1912);

CHAnimJoint* HAnimJoint1913 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1913->setUSE("hanim_vt1");
HAnimHumanoid42->addJoints(*HAnimJoint1913);

CHAnimJoint* HAnimJoint1914 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1914->setUSE("hanim_vc7");
HAnimHumanoid42->addJoints(*HAnimJoint1914);

CHAnimJoint* HAnimJoint1915 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1915->setUSE("hanim_vc6");
HAnimHumanoid42->addJoints(*HAnimJoint1915);

CHAnimJoint* HAnimJoint1916 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1916->setUSE("hanim_vc5");
HAnimHumanoid42->addJoints(*HAnimJoint1916);

CHAnimJoint* HAnimJoint1917 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1917->setUSE("hanim_vc4");
HAnimHumanoid42->addJoints(*HAnimJoint1917);

CHAnimJoint* HAnimJoint1918 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1918->setUSE("hanim_vc3");
HAnimHumanoid42->addJoints(*HAnimJoint1918);

CHAnimJoint* HAnimJoint1919 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1919->setUSE("hanim_vc2");
HAnimHumanoid42->addJoints(*HAnimJoint1919);

CHAnimJoint* HAnimJoint1920 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1920->setUSE("hanim_vc1");
HAnimHumanoid42->addJoints(*HAnimJoint1920);

CHAnimJoint* HAnimJoint1921 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1921->setUSE("hanim_skullbase");
HAnimHumanoid42->addJoints(*HAnimJoint1921);

CHAnimJoint* HAnimJoint1922 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1922->setUSE("hanim_l_eyelid_joint");
HAnimHumanoid42->addJoints(*HAnimJoint1922);

CHAnimJoint* HAnimJoint1923 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1923->setUSE("hanim_r_eyelid_joint");
HAnimHumanoid42->addJoints(*HAnimJoint1923);

CHAnimJoint* HAnimJoint1924 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1924->setUSE("hanim_l_eyeball_joint");
HAnimHumanoid42->addJoints(*HAnimJoint1924);

CHAnimJoint* HAnimJoint1925 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1925->setUSE("hanim_r_eyeball_joint");
HAnimHumanoid42->addJoints(*HAnimJoint1925);

CHAnimJoint* HAnimJoint1926 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1926->setUSE("hanim_l_eyebrow_joint");
HAnimHumanoid42->addJoints(*HAnimJoint1926);

CHAnimJoint* HAnimJoint1927 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1927->setUSE("hanim_r_eyebrow_joint");
HAnimHumanoid42->addJoints(*HAnimJoint1927);

CHAnimJoint* HAnimJoint1928 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1928->setUSE("hanim_temporomandibular");
HAnimHumanoid42->addJoints(*HAnimJoint1928);

CHAnimJoint* HAnimJoint1929 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1929->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid42->addJoints(*HAnimJoint1929);

CHAnimJoint* HAnimJoint1930 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1930->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid42->addJoints(*HAnimJoint1930);

CHAnimJoint* HAnimJoint1931 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1931->setUSE("hanim_l_shoulder");
HAnimHumanoid42->addJoints(*HAnimJoint1931);

CHAnimJoint* HAnimJoint1932 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1932->setUSE("hanim_l_elbow");
HAnimHumanoid42->addJoints(*HAnimJoint1932);

CHAnimJoint* HAnimJoint1933 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1933->setUSE("hanim_l_radiocarpal");
HAnimHumanoid42->addJoints(*HAnimJoint1933);

CHAnimJoint* HAnimJoint1934 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1934->setUSE("hanim_l_midcarpal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1934);

CHAnimJoint* HAnimJoint1935 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1935->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1935);

CHAnimJoint* HAnimJoint1936 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1936->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1936);

CHAnimJoint* HAnimJoint1937 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1937->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1937);

CHAnimJoint* HAnimJoint1938 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1938->setUSE("hanim_l_midcarpal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1938);

CHAnimJoint* HAnimJoint1939 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1939->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1939);

CHAnimJoint* HAnimJoint1940 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1940->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1940);

CHAnimJoint* HAnimJoint1941 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1941->setUSE("hanim_l_carpal_proximal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1941);

CHAnimJoint* HAnimJoint1942 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1942->setUSE("hanim_l_carpal_distal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1942);

CHAnimJoint* HAnimJoint1943 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1943->setUSE("hanim_l_midcarpal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1943);

CHAnimJoint* HAnimJoint1944 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1944->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1944);

CHAnimJoint* HAnimJoint1945 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1945->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1945);

CHAnimJoint* HAnimJoint1946 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1946->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1946);

CHAnimJoint* HAnimJoint1947 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1947->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1947);

CHAnimJoint* HAnimJoint1948 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1948->setUSE("hanim_l_midcarpal_4_1");
HAnimHumanoid42->addJoints(*HAnimJoint1948);

CHAnimJoint* HAnimJoint1949 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1949->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1949);

CHAnimJoint* HAnimJoint1950 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1950->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1950);

CHAnimJoint* HAnimJoint1951 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1951->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1951);

CHAnimJoint* HAnimJoint1952 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1952->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1952);

CHAnimJoint* HAnimJoint1953 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1953->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid42->addJoints(*HAnimJoint1953);

CHAnimJoint* HAnimJoint1954 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1954->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid42->addJoints(*HAnimJoint1954);

CHAnimJoint* HAnimJoint1955 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1955->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1955);

CHAnimJoint* HAnimJoint1956 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1956->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1956);

CHAnimJoint* HAnimJoint1957 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1957->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid42->addJoints(*HAnimJoint1957);

CHAnimJoint* HAnimJoint1958 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1958->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid42->addJoints(*HAnimJoint1958);

CHAnimJoint* HAnimJoint1959 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1959->setUSE("hanim_r_shoulder");
HAnimHumanoid42->addJoints(*HAnimJoint1959);

CHAnimJoint* HAnimJoint1960 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1960->setUSE("hanim_r_elbow");
HAnimHumanoid42->addJoints(*HAnimJoint1960);

CHAnimJoint* HAnimJoint1961 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1961->setUSE("hanim_r_radiocarpal");
HAnimHumanoid42->addJoints(*HAnimJoint1961);

CHAnimJoint* HAnimJoint1962 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1962->setUSE("hanim_r_midcarpal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1962);

CHAnimJoint* HAnimJoint1963 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1963->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1963);

CHAnimJoint* HAnimJoint1964 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1964->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1964);

CHAnimJoint* HAnimJoint1965 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1965->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1965);

CHAnimJoint* HAnimJoint1966 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1966->setUSE("hanim_r_midcarpal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1966);

CHAnimJoint* HAnimJoint1967 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1967->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1967);

CHAnimJoint* HAnimJoint1968 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1968->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1968);

CHAnimJoint* HAnimJoint1969 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1969->setUSE("hanim_r_carpal_proximal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1969);

CHAnimJoint* HAnimJoint1970 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1970->setUSE("hanim_r_carpal_distal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1970);

CHAnimJoint* HAnimJoint1971 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1971->setUSE("hanim_r_midcarpal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1971);

CHAnimJoint* HAnimJoint1972 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1972->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1972);

CHAnimJoint* HAnimJoint1973 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1973->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1973);

CHAnimJoint* HAnimJoint1974 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1974->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1974);

CHAnimJoint* HAnimJoint1975 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1975->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1975);

CHAnimJoint* HAnimJoint1976 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1976->setUSE("hanim_r_midcarpal_4_1");
HAnimHumanoid42->addJoints(*HAnimJoint1976);

CHAnimJoint* HAnimJoint1977 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1977->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1977);

CHAnimJoint* HAnimJoint1978 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1978->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1978);

CHAnimJoint* HAnimJoint1979 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1979->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1979);

CHAnimJoint* HAnimJoint1980 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1980->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1980);

CHAnimJoint* HAnimJoint1981 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1981->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid42->addJoints(*HAnimJoint1981);

CHAnimJoint* HAnimJoint1982 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1982->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid42->addJoints(*HAnimJoint1982);

CHAnimJoint* HAnimJoint1983 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1983->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1983);

CHAnimJoint* HAnimJoint1984 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1984->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1984);

CCoordinate* Coordinate1985 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1985->setDEF("TheSkinCoord");
Coordinate1985->setPoint(new float[1170]{0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168});
HAnimHumanoid42->setSkinCoord(*Coordinate1985);

CShape* Shape1986 = (CShape *)(m_pScene.createNode("Shape"));
Shape1986->setDEF("SkinShape");
CAppearance* Appearance1987 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1987->setDEF("SkinAppearance");
CMaterial* Material1988 = (CMaterial *)(m_pScene.createNode("Material"));
Material1988->setDEF("SkinMaterial");
Material1988->setAmbientIntensity(0.6);
Material1988->setDiffuseColor(new float[3]{1,1,1});
Material1988->setShininess(0.6);
Material1988->setTransparency(0.2);
Appearance1987->setMaterial(*Material1988);

CImageTexture* ImageTexture1989 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture1989->setDEF("zBlueSpiralBkg2");
ImageTexture1989->setUrl(new CString[4]{"../resources/images/zBlueSpiralBkg2.gif","../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"}, 4);
Appearance1987->setTexture(*ImageTexture1989);

Shape1986->setAppearance(*Appearance1987);

CIndexedFaceSet* IndexedFaceSet1990 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1990->setCreaseAngle(3.1);
IndexedFaceSet1990->setCoordIndex(new int[2780]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
CColor* Color1991 = (CColor *)(m_pScene.createNode("Color"));
Color1991->setColor(new float[2079]{1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1});
IndexedFaceSet1990->setColor(*Color1991);

CCoordinate* Coordinate1992 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1992->setUSE("TheSkinCoord");
IndexedFaceSet1990->setCoord(*Coordinate1992);

Shape1986->setGeometry(IndexedFaceSet1990);

HAnimHumanoid42->setSkin(*Shape1986);

group->addChildren(*HAnimHumanoid42);

X3D0->setScene(*Scene10);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

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
meta2->setContent("Humanoid1.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("identifier");
meta3->setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid1.x3d");
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
meta6->setContent("14 Jan 2023");
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
CTransform* Transform45 = (CTransform *)(m_pScene.createNode("Transform"));
Transform45->setTranslation(new float[3]{0,0.824,0.0277});
CTransform* Transform46 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape47 = (CShape *)(m_pScene.createNode("Shape"));
Shape47->setUSE("HAnimJointShape");
Transform46->addChild(*Shape47);

Transform45->addChildren(*Transform46);

HAnimSegment44->addChildren(*Transform45);

CShape* Shape48 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet49 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet49->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA50 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA50->setUSE("HAnimSegmentLineColorRGBA");
LineSet49->setColor(*ColorRGBA50);

CCoordinate* Coordinate51 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate51->setPoint(new float[6]{0,0.824,0.0277,0,0.9149,0.0016});
LineSet49->setCoord(*Coordinate51);

Shape48->setGeometry(LineSet49);

HAnimSegment44->addChildren(*Shape48);

CHAnimSite* HAnimSite52 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite52->setDEF("hanim_buttocks_standing_wall_contact_point_pt");
HAnimSite52->setName("buttocks_standing_wall_contact_point_pt");
CTouchSensor* TouchSensor53 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor53->setDescription("HAnimSite buttocks_standing_wall_contact_point_pt");
HAnimSite52->addChildren(*TouchSensor53);

CShape* Shape54 = (CShape *)(m_pScene.createNode("Shape"));
Shape54->setUSE("HAnimSiteShape");
HAnimSite52->addChildren(*Shape54);

HAnimSegment44->addChildren(*HAnimSite52);

CHAnimSite* HAnimSite55 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite55->setDEF("hanim_crotch_pt");
HAnimSite55->setName("crotch_pt");
HAnimSite55->setTranslation(new float[3]{0.0034,0.8266,0.0257});
CTouchSensor* TouchSensor56 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor56->setDescription("HAnimSite crotch_pt");
HAnimSite55->addChildren(*TouchSensor56);

CShape* Shape57 = (CShape *)(m_pScene.createNode("Shape"));
Shape57->setUSE("HAnimSiteShape");
HAnimSite55->addChildren(*Shape57);

HAnimSegment44->addChildren(*HAnimSite55);

CHAnimSite* HAnimSite58 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite58->setDEF("hanim_l_asis_pt");
HAnimSite58->setName("l_asis_pt");
HAnimSite58->setTranslation(new float[3]{0.0925,0.9983,0.1052});
CTouchSensor* TouchSensor59 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor59->setDescription("HAnimSite l_asis_pt");
HAnimSite58->addChildren(*TouchSensor59);

CShape* Shape60 = (CShape *)(m_pScene.createNode("Shape"));
Shape60->setUSE("HAnimSiteShape");
HAnimSite58->addChildren(*Shape60);

HAnimSegment44->addChildren(*HAnimSite58);

CHAnimSite* HAnimSite61 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite61->setDEF("hanim_l_iliocristale_pt");
HAnimSite61->setName("l_iliocristale_pt");
HAnimSite61->setTranslation(new float[3]{0.1612,1.0537,0.0008});
CTouchSensor* TouchSensor62 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor62->setDescription("HAnimSite l_iliocristale_pt");
HAnimSite61->addChildren(*TouchSensor62);

CShape* Shape63 = (CShape *)(m_pScene.createNode("Shape"));
Shape63->setUSE("HAnimSiteShape");
HAnimSite61->addChildren(*Shape63);

HAnimSegment44->addChildren(*HAnimSite61);

CHAnimSite* HAnimSite64 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite64->setDEF("hanim_l_psis_pt");
HAnimSite64->setName("l_psis_pt");
HAnimSite64->setTranslation(new float[3]{0.0774,1.019,-0.1151});
CTouchSensor* TouchSensor65 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor65->setDescription("HAnimSite l_psis_pt");
HAnimSite64->addChildren(*TouchSensor65);

CShape* Shape66 = (CShape *)(m_pScene.createNode("Shape"));
Shape66->setUSE("HAnimSiteShape");
HAnimSite64->addChildren(*Shape66);

HAnimSegment44->addChildren(*HAnimSite64);

CHAnimSite* HAnimSite67 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite67->setDEF("hanim_l_trochanterion_pt");
HAnimSite67->setName("l_trochanterion_pt");
HAnimSite67->setTranslation(new float[3]{0.1677,0.8336,0.0303});
CTouchSensor* TouchSensor68 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor68->setDescription("HAnimSite l_trochanterion_pt");
HAnimSite67->addChildren(*TouchSensor68);

CShape* Shape69 = (CShape *)(m_pScene.createNode("Shape"));
Shape69->setUSE("HAnimSiteShape");
HAnimSite67->addChildren(*Shape69);

HAnimSegment44->addChildren(*HAnimSite67);

CHAnimSite* HAnimSite70 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite70->setDEF("hanim_r_asis_pt");
HAnimSite70->setName("r_asis_pt");
HAnimSite70->setTranslation(new float[3]{-0.0887,1.0021,0.1112});
CTouchSensor* TouchSensor71 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor71->setDescription("HAnimSite r_asis_pt");
HAnimSite70->addChildren(*TouchSensor71);

CShape* Shape72 = (CShape *)(m_pScene.createNode("Shape"));
Shape72->setUSE("HAnimSiteShape");
HAnimSite70->addChildren(*Shape72);

HAnimSegment44->addChildren(*HAnimSite70);

CHAnimSite* HAnimSite73 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite73->setDEF("hanim_r_iliocristale_pt");
HAnimSite73->setName("r_iliocristale_pt");
HAnimSite73->setTranslation(new float[3]{-0.1525,1.0628,0.0035});
CTouchSensor* TouchSensor74 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor74->setDescription("HAnimSite r_iliocristale_pt");
HAnimSite73->addChildren(*TouchSensor74);

CShape* Shape75 = (CShape *)(m_pScene.createNode("Shape"));
Shape75->setUSE("HAnimSiteShape");
HAnimSite73->addChildren(*Shape75);

HAnimSegment44->addChildren(*HAnimSite73);

CHAnimSite* HAnimSite76 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite76->setDEF("hanim_r_psis_pt");
HAnimSite76->setName("r_psis_pt");
HAnimSite76->setTranslation(new float[3]{-0.0716,1.019,-0.1138});
CTouchSensor* TouchSensor77 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor77->setDescription("HAnimSite r_psis_pt");
HAnimSite76->addChildren(*TouchSensor77);

CShape* Shape78 = (CShape *)(m_pScene.createNode("Shape"));
Shape78->setUSE("HAnimSiteShape");
HAnimSite76->addChildren(*Shape78);

HAnimSegment44->addChildren(*HAnimSite76);

CHAnimSite* HAnimSite79 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite79->setDEF("hanim_r_trochanterion_pt");
HAnimSite79->setName("r_trochanterion_pt");
HAnimSite79->setTranslation(new float[3]{-0.1689,0.8419,0.0352});
CTouchSensor* TouchSensor80 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor80->setDescription("HAnimSite r_trochanterion_pt");
HAnimSite79->addChildren(*TouchSensor80);

CShape* Shape81 = (CShape *)(m_pScene.createNode("Shape"));
Shape81->setUSE("HAnimSiteShape");
HAnimSite79->addChildren(*Shape81);

HAnimSegment44->addChildren(*HAnimSite79);

CShape* Shape82 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet83 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet83->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA84 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA84->setUSE("HAnimSegmentLineColorRGBA");
LineSet83->setColor(*ColorRGBA84);

CCoordinate* Coordinate85 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate85->setPoint(new float[6]{0,0.824,0.0277,0.0028,1.0568,-0.0776});
LineSet83->setCoord(*Coordinate85);

Shape82->setGeometry(LineSet83);

HAnimSegment44->addChildren(*Shape82);

CHAnimSite* HAnimSite86 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite86->setDEF("hanim_navel_pt");
HAnimSite86->setName("navel_pt");
HAnimSite86->setTranslation(new float[3]{0.0069,1.0966,0.1017});
CTouchSensor* TouchSensor87 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor87->setDescription("HAnimSite navel_pt");
HAnimSite86->addChildren(*TouchSensor87);

CShape* Shape88 = (CShape *)(m_pScene.createNode("Shape"));
Shape88->setUSE("HAnimSiteShape");
HAnimSite86->addChildren(*Shape88);

HAnimSegment44->addChildren(*HAnimSite86);

CHAnimSite* HAnimSite89 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite89->setDEF("hanim_waist_preferred_anterior_pt");
HAnimSite89->setName("waist_preferred_anterior_pt");
CTouchSensor* TouchSensor90 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor90->setDescription("HAnimSite waist_preferred_anterior_pt");
HAnimSite89->addChildren(*TouchSensor90);

CShape* Shape91 = (CShape *)(m_pScene.createNode("Shape"));
Shape91->setUSE("HAnimSiteShape");
HAnimSite89->addChildren(*Shape91);

HAnimSegment44->addChildren(*HAnimSite89);

CHAnimSite* HAnimSite92 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite92->setDEF("hanim_waist_preferred_posterior_pt");
HAnimSite92->setName("waist_preferred_posterior_pt");
HAnimSite92->setTranslation(new float[3]{0.29,1.0915,-0.1091});
CTouchSensor* TouchSensor93 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor93->setDescription("HAnimSite waist_preferred_posterior_pt");
HAnimSite92->addChildren(*TouchSensor93);

CShape* Shape94 = (CShape *)(m_pScene.createNode("Shape"));
Shape94->setUSE("HAnimSiteShape");
HAnimSite92->addChildren(*Shape94);

HAnimSegment44->addChildren(*HAnimSite92);

HAnimJoint43->addChildren(*HAnimSegment44);

CHAnimJoint* HAnimJoint95 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint95->setDEF("hanim_sacroiliac");
HAnimJoint95->setName("sacroiliac");
HAnimJoint95->setCenter(new float[3]{0,0.9149,0.0016});
CHAnimSegment* HAnimSegment96 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment96->setDEF("hanim_pelvis");
HAnimSegment96->setName("pelvis");
CTransform* Transform97 = (CTransform *)(m_pScene.createNode("Transform"));
Transform97->setTranslation(new float[3]{0,0.9149,0.0016});
CTransform* Transform98 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape99 = (CShape *)(m_pScene.createNode("Shape"));
Shape99->setUSE("HAnimJointShape");
Transform98->addChild(*Shape99);

Transform97->addChildren(*Transform98);

HAnimSegment96->addChildren(*Transform97);

CShape* Shape100 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet101 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet101->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA102 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA102->setUSE("HAnimSegmentLineColorRGBA");
LineSet101->setColor(*ColorRGBA102);

CCoordinate* Coordinate103 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate103->setPoint(new float[6]{0,0.9149,0.0016,0.0961,0.9124,-0.0001});
LineSet101->setCoord(*Coordinate103);

Shape100->setGeometry(LineSet101);

HAnimSegment96->addChildren(*Shape100);

CHAnimSite* HAnimSite104 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite104->setDEF("hanim_l_femoral_lateral_epicondyles_pt");
HAnimSite104->setName("l_femoral_lateral_epicondyles_pt");
HAnimSite104->setTranslation(new float[3]{0.1598,0.4967,0.0297});
CTouchSensor* TouchSensor105 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor105->setDescription("HAnimSite l_femoral_lateral_epicondyles_pt");
HAnimSite104->addChildren(*TouchSensor105);

CShape* Shape106 = (CShape *)(m_pScene.createNode("Shape"));
Shape106->setUSE("HAnimSiteShape");
HAnimSite104->addChildren(*Shape106);

HAnimSegment96->addChildren(*HAnimSite104);

CHAnimSite* HAnimSite107 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite107->setDEF("hanim_l_femoral_medial_epicondyles_pt");
HAnimSite107->setName("l_femoral_medial_epicondyles_pt");
HAnimSite107->setTranslation(new float[3]{0.0398,0.4946,0.0303});
CTouchSensor* TouchSensor108 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor108->setDescription("HAnimSite l_femoral_medial_epicondyles_pt");
HAnimSite107->addChildren(*TouchSensor108);

CShape* Shape109 = (CShape *)(m_pScene.createNode("Shape"));
Shape109->setUSE("HAnimSiteShape");
HAnimSite107->addChildren(*Shape109);

HAnimSegment96->addChildren(*HAnimSite107);

CHAnimSite* HAnimSite110 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite110->setDEF("hanim_l_knee_crease_pt");
HAnimSite110->setName("l_knee_crease_pt");
HAnimSite110->setTranslation(new float[3]{0.0993,0.4881,-0.0309});
CTouchSensor* TouchSensor111 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor111->setDescription("HAnimSite l_knee_crease_pt");
HAnimSite110->addChildren(*TouchSensor111);

CShape* Shape112 = (CShape *)(m_pScene.createNode("Shape"));
Shape112->setUSE("HAnimSiteShape");
HAnimSite110->addChildren(*Shape112);

HAnimSegment96->addChildren(*HAnimSite110);

CHAnimSite* HAnimSite113 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite113->setDEF("hanim_l_suprapatella_pt");
HAnimSite113->setName("l_suprapatella_pt");
CTouchSensor* TouchSensor114 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor114->setDescription("HAnimSite l_suprapatella_pt");
HAnimSite113->addChildren(*TouchSensor114);

CShape* Shape115 = (CShape *)(m_pScene.createNode("Shape"));
Shape115->setUSE("HAnimSiteShape");
HAnimSite113->addChildren(*Shape115);

HAnimSegment96->addChildren(*HAnimSite113);

CShape* Shape116 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet117 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet117->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA118 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA118->setUSE("HAnimSegmentLineColorRGBA");
LineSet117->setColor(*ColorRGBA118);

CCoordinate* Coordinate119 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate119->setPoint(new float[6]{0,0.9149,0.0016,-0.095,0.9171,0.0029});
LineSet117->setCoord(*Coordinate119);

Shape116->setGeometry(LineSet117);

HAnimSegment96->addChildren(*Shape116);

CHAnimSite* HAnimSite120 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite120->setDEF("hanim_r_femoral_lateral_epicondyles_pt");
HAnimSite120->setName("r_femoral_lateral_epicondyles_pt");
HAnimSite120->setTranslation(new float[3]{-0.1421,0.4992,0.031});
CTouchSensor* TouchSensor121 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor121->setDescription("HAnimSite r_femoral_lateral_epicondyles_pt");
HAnimSite120->addChildren(*TouchSensor121);

CShape* Shape122 = (CShape *)(m_pScene.createNode("Shape"));
Shape122->setUSE("HAnimSiteShape");
HAnimSite120->addChildren(*Shape122);

HAnimSegment96->addChildren(*HAnimSite120);

CHAnimSite* HAnimSite123 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite123->setDEF("hanim_r_femoral_medial_epicondyles_pt");
HAnimSite123->setName("r_femoral_medial_epicondyles_pt");
HAnimSite123->setTranslation(new float[3]{-0.0221,0.5014,0.0289});
CTouchSensor* TouchSensor124 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor124->setDescription("HAnimSite r_femoral_medial_epicondyles_pt");
HAnimSite123->addChildren(*TouchSensor124);

CShape* Shape125 = (CShape *)(m_pScene.createNode("Shape"));
Shape125->setUSE("HAnimSiteShape");
HAnimSite123->addChildren(*Shape125);

HAnimSegment96->addChildren(*HAnimSite123);

CHAnimSite* HAnimSite126 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite126->setDEF("hanim_r_knee_crease_pt");
HAnimSite126->setName("r_knee_crease_pt");
HAnimSite126->setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
CTouchSensor* TouchSensor127 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor127->setDescription("HAnimSite r_knee_crease_pt");
HAnimSite126->addChildren(*TouchSensor127);

CShape* Shape128 = (CShape *)(m_pScene.createNode("Shape"));
Shape128->setUSE("HAnimSiteShape");
HAnimSite126->addChildren(*Shape128);

HAnimSegment96->addChildren(*HAnimSite126);

CHAnimSite* HAnimSite129 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite129->setDEF("hanim_r_suprapatella_pt");
HAnimSite129->setName("r_suprapatella_pt");
CTouchSensor* TouchSensor130 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor130->setDescription("HAnimSite r_suprapatella_pt");
HAnimSite129->addChildren(*TouchSensor130);

CShape* Shape131 = (CShape *)(m_pScene.createNode("Shape"));
Shape131->setUSE("HAnimSiteShape");
HAnimSite129->addChildren(*Shape131);

HAnimSegment96->addChildren(*HAnimSite129);

HAnimJoint95->addChildren(*HAnimSegment96);

CHAnimJoint* HAnimJoint132 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint132->setDEF("hanim_l_hip");
HAnimJoint132->setName("l_hip");
HAnimJoint132->setCenter(new float[3]{0.0961,0.9124,-0.0001});
CHAnimSegment* HAnimSegment133 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment133->setDEF("hanim_l_thigh");
HAnimSegment133->setName("l_thigh");
CTransform* Transform134 = (CTransform *)(m_pScene.createNode("Transform"));
Transform134->setTranslation(new float[3]{0.0961,0.9124,-0.0001});
CTransform* Transform135 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape136 = (CShape *)(m_pScene.createNode("Shape"));
Shape136->setUSE("HAnimJointShape");
Transform135->addChild(*Shape136);

Transform134->addChildren(*Transform135);

HAnimSegment133->addChildren(*Transform134);

CShape* Shape137 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet138 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet138->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA139 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA139->setUSE("HAnimSegmentLineColorRGBA");
LineSet138->setColor(*ColorRGBA139);

CCoordinate* Coordinate140 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate140->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308});
LineSet138->setCoord(*Coordinate140);

Shape137->setGeometry(LineSet138);

HAnimSegment133->addChildren(*Shape137);

CHAnimSite* HAnimSite141 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite141->setDEF("hanim_l_lateral_malleolus_pt");
HAnimSite141->setName("l_lateral_malleolus_pt");
HAnimSite141->setTranslation(new float[3]{0.1308,0.0597,-0.1032});
CTouchSensor* TouchSensor142 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor142->setDescription("HAnimSite l_lateral_malleolus_pt");
HAnimSite141->addChildren(*TouchSensor142);

CShape* Shape143 = (CShape *)(m_pScene.createNode("Shape"));
Shape143->setUSE("HAnimSiteShape");
HAnimSite141->addChildren(*Shape143);

HAnimSegment133->addChildren(*HAnimSite141);

CHAnimSite* HAnimSite144 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite144->setDEF("hanim_l_medial_malleolus_pt");
HAnimSite144->setName("l_medial_malleolus_pt");
HAnimSite144->setTranslation(new float[3]{0.089,0.0716,-0.0881});
CTouchSensor* TouchSensor145 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor145->setDescription("HAnimSite l_medial_malleolus_pt");
HAnimSite144->addChildren(*TouchSensor145);

CShape* Shape146 = (CShape *)(m_pScene.createNode("Shape"));
Shape146->setUSE("HAnimSiteShape");
HAnimSite144->addChildren(*Shape146);

HAnimSegment133->addChildren(*HAnimSite144);

CHAnimSite* HAnimSite147 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite147->setDEF("hanim_l_tibiale_pt");
HAnimSite147->setName("l_tibiale_pt");
CTouchSensor* TouchSensor148 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor148->setDescription("HAnimSite l_tibiale_pt");
HAnimSite147->addChildren(*TouchSensor148);

CShape* Shape149 = (CShape *)(m_pScene.createNode("Shape"));
Shape149->setUSE("HAnimSiteShape");
HAnimSite147->addChildren(*Shape149);

HAnimSegment133->addChildren(*HAnimSite147);

HAnimJoint132->addChildren(*HAnimSegment133);

CHAnimJoint* HAnimJoint150 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint150->setDEF("hanim_l_knee");
HAnimJoint150->setName("l_knee");
HAnimJoint150->setCenter(new float[3]{0.104,0.4867,0.0308});
CHAnimSegment* HAnimSegment151 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment151->setDEF("hanim_l_calf");
HAnimSegment151->setName("l_calf");
CTransform* Transform152 = (CTransform *)(m_pScene.createNode("Transform"));
Transform152->setTranslation(new float[3]{0.104,0.4867,0.0308});
CTransform* Transform153 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape154 = (CShape *)(m_pScene.createNode("Shape"));
Shape154->setUSE("HAnimJointShape");
Transform153->addChild(*Shape154);

Transform152->addChildren(*Transform153);

HAnimSegment151->addChildren(*Transform152);

CShape* Shape155 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet156 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet156->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA157 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA157->setUSE("HAnimSegmentLineColorRGBA");
LineSet156->setColor(*ColorRGBA157);

CCoordinate* Coordinate158 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate158->setPoint(new float[6]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736});
LineSet156->setCoord(*Coordinate158);

Shape155->setGeometry(LineSet156);

HAnimSegment151->addChildren(*Shape155);

CHAnimSite* HAnimSite159 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite159->setDEF("hanim_l_calcaneus_posterior_pt");
HAnimSite159->setName("l_calcaneus_posterior_pt");
HAnimSite159->setTranslation(new float[3]{0.0974,0.0259,-0.1171});
CTouchSensor* TouchSensor160 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor160->setDescription("HAnimSite l_calcaneus_posterior_pt");
HAnimSite159->addChildren(*TouchSensor160);

CShape* Shape161 = (CShape *)(m_pScene.createNode("Shape"));
Shape161->setUSE("HAnimSiteShape");
HAnimSite159->addChildren(*Shape161);

HAnimSegment151->addChildren(*HAnimSite159);

CHAnimSite* HAnimSite162 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite162->setDEF("hanim_l_sphyrion_pt");
HAnimSite162->setName("l_sphyrion_pt");
HAnimSite162->setTranslation(new float[3]{0.089,0.0575,-0.0943});
CTouchSensor* TouchSensor163 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor163->setDescription("HAnimSite l_sphyrion_pt");
HAnimSite162->addChildren(*TouchSensor163);

CShape* Shape164 = (CShape *)(m_pScene.createNode("Shape"));
Shape164->setUSE("HAnimSiteShape");
HAnimSite162->addChildren(*Shape164);

HAnimSegment151->addChildren(*HAnimSite162);

HAnimJoint150->addChildren(*HAnimSegment151);

CHAnimJoint* HAnimJoint165 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint165->setDEF("hanim_l_talocrural");
HAnimJoint165->setName("l_talocrural");
HAnimJoint165->setCenter(new float[3]{0.1101,0.0656,-0.0736});
CHAnimSegment* HAnimSegment166 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment166->setDEF("hanim_l_talus");
HAnimSegment166->setName("l_talus");
CTransform* Transform167 = (CTransform *)(m_pScene.createNode("Transform"));
Transform167->setTranslation(new float[3]{0.08,0.06,-0.025});
Transform167->setRotation(new float[4]{1,0,0,-1.57});
Transform167->setScale(new float[3]{0.15,0.15,0.15});
CTransform* Transform168 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape169 = (CShape *)(m_pScene.createNode("Shape"));
Shape169->setUSE("HAnimJointShape");
Transform168->addChild(*Shape169);

Transform167->addChildren(*Transform168);

HAnimSegment166->addChildren(*Transform167);

CShape* Shape170 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet171 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet171->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA172 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA172->setUSE("HAnimSegmentLineColorRGBA");
LineSet171->setColor(*ColorRGBA172);

CCoordinate* Coordinate173 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate173->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.0824,0.0064,-0.004});
LineSet171->setCoord(*Coordinate173);

Shape170->setGeometry(LineSet171);

HAnimSegment166->addChildren(*Shape170);

HAnimJoint165->addChildren(*HAnimSegment166);

CHAnimJoint* HAnimJoint174 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint174->setDEF("hanim_l_metatarsophalangeal_1");
HAnimJoint174->setName("l_metatarsophalangeal_2");
HAnimJoint174->setCenter(new float[3]{0.0824,0.0064,-0.004});
HAnimJoint165->addChildren(*HAnimJoint174);

HAnimJoint150->addChildren(*HAnimJoint165);

HAnimJoint132->addChildren(*HAnimJoint150);

HAnimJoint95->addChildren(*HAnimJoint132);

CHAnimJoint* HAnimJoint175 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint175->setDEF("hanim_r_hip");
HAnimJoint175->setName("r_hip");
HAnimJoint175->setCenter(new float[3]{-0.095,0.9171,0.0029});
CHAnimSegment* HAnimSegment176 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment176->setDEF("hanim_r_thigh");
HAnimSegment176->setName("r_thigh");
CTransform* Transform177 = (CTransform *)(m_pScene.createNode("Transform"));
Transform177->setTranslation(new float[3]{-0.095,0.9171,0.0029});
CTransform* Transform178 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape179 = (CShape *)(m_pScene.createNode("Shape"));
Shape179->setUSE("HAnimJointShape");
Transform178->addChild(*Shape179);

Transform177->addChildren(*Transform178);

HAnimSegment176->addChildren(*Transform177);

CShape* Shape180 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet181 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet181->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA182 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA182->setUSE("HAnimSegmentLineColorRGBA");
LineSet181->setColor(*ColorRGBA182);

CCoordinate* Coordinate183 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate183->setPoint(new float[6]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318});
LineSet181->setCoord(*Coordinate183);

Shape180->setGeometry(LineSet181);

HAnimSegment176->addChildren(*Shape180);

CHAnimSite* HAnimSite184 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite184->setDEF("hanim_r_lateral_malleolus_pt");
HAnimSite184->setName("r_lateral_malleolus_pt");
HAnimSite184->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
CTouchSensor* TouchSensor185 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor185->setDescription("HAnimSite r_lateral_malleolus_pt");
HAnimSite184->addChildren(*TouchSensor185);

CShape* Shape186 = (CShape *)(m_pScene.createNode("Shape"));
Shape186->setUSE("HAnimSiteShape");
HAnimSite184->addChildren(*Shape186);

HAnimSegment176->addChildren(*HAnimSite184);

CHAnimSite* HAnimSite187 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite187->setDEF("hanim_r_medial_malleolus_pt");
HAnimSite187->setName("r_medial_malleolus_pt");
HAnimSite187->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
CTouchSensor* TouchSensor188 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor188->setDescription("HAnimSite r_medial_malleolus_pt");
HAnimSite187->addChildren(*TouchSensor188);

CShape* Shape189 = (CShape *)(m_pScene.createNode("Shape"));
Shape189->setUSE("HAnimSiteShape");
HAnimSite187->addChildren(*Shape189);

HAnimSegment176->addChildren(*HAnimSite187);

CHAnimSite* HAnimSite190 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite190->setDEF("hanim_r_tibiale_pt");
HAnimSite190->setName("r_tibiale_pt");
CTouchSensor* TouchSensor191 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor191->setDescription("HAnimSite r_tibiale_pt");
HAnimSite190->addChildren(*TouchSensor191);

CShape* Shape192 = (CShape *)(m_pScene.createNode("Shape"));
Shape192->setUSE("HAnimSiteShape");
HAnimSite190->addChildren(*Shape192);

HAnimSegment176->addChildren(*HAnimSite190);

HAnimJoint175->addChildren(*HAnimSegment176);

CHAnimJoint* HAnimJoint193 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint193->setDEF("hanim_r_knee");
HAnimJoint193->setName("r_knee");
HAnimJoint193->setCenter(new float[3]{-0.0867,0.4913,0.0318});
CHAnimSegment* HAnimSegment194 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment194->setDEF("hanim_r_calf");
HAnimSegment194->setName("r_calf");
CTransform* Transform195 = (CTransform *)(m_pScene.createNode("Transform"));
Transform195->setTranslation(new float[3]{-0.0867,0.4913,0.0318});
CTransform* Transform196 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape197 = (CShape *)(m_pScene.createNode("Shape"));
Shape197->setUSE("HAnimJointShape");
Transform196->addChild(*Shape197);

Transform195->addChildren(*Transform196);

HAnimSegment194->addChildren(*Transform195);

CShape* Shape198 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet199 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet199->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA200 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA200->setUSE("HAnimSegmentLineColorRGBA");
LineSet199->setColor(*ColorRGBA200);

CCoordinate* Coordinate201 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate201->setPoint(new float[6]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766});
LineSet199->setCoord(*Coordinate201);

Shape198->setGeometry(LineSet199);

HAnimSegment194->addChildren(*Shape198);

CHAnimSite* HAnimSite202 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite202->setDEF("hanim_r_calcaneus_posterior_pt");
HAnimSite202->setName("r_calcaneus_posterior_pt");
HAnimSite202->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
CTouchSensor* TouchSensor203 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor203->setDescription("HAnimSite r_calcaneus_posterior_pt");
HAnimSite202->addChildren(*TouchSensor203);

CShape* Shape204 = (CShape *)(m_pScene.createNode("Shape"));
Shape204->setUSE("HAnimSiteShape");
HAnimSite202->addChildren(*Shape204);

HAnimSegment194->addChildren(*HAnimSite202);

CHAnimSite* HAnimSite205 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite205->setDEF("hanim_r_sphyrion_pt");
HAnimSite205->setName("r_sphyrion_pt");
HAnimSite205->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
CTouchSensor* TouchSensor206 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor206->setDescription("HAnimSite r_sphyrion_pt");
HAnimSite205->addChildren(*TouchSensor206);

CShape* Shape207 = (CShape *)(m_pScene.createNode("Shape"));
Shape207->setUSE("HAnimSiteShape");
HAnimSite205->addChildren(*Shape207);

HAnimSegment194->addChildren(*HAnimSite205);

HAnimJoint193->addChildren(*HAnimSegment194);

CHAnimJoint* HAnimJoint208 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint208->setDEF("hanim_r_talocrural");
HAnimJoint208->setName("r_talocrural");
HAnimJoint208->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
CHAnimSegment* HAnimSegment209 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment209->setDEF("hanim_r_talus");
HAnimSegment209->setName("r_talus");
CTransform* Transform210 = (CTransform *)(m_pScene.createNode("Transform"));
Transform210->setTranslation(new float[3]{-0.05,0.06,-0.025});
Transform210->setRotation(new float[4]{1,0,0,-1.57});
Transform210->setScale(new float[3]{0.15,0.15,0.15});
CTransform* Transform211 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape212 = (CShape *)(m_pScene.createNode("Shape"));
Shape212->setUSE("HAnimJointShape");
Transform211->addChild(*Shape212);

Transform210->addChildren(*Transform211);

HAnimSegment209->addChildren(*Transform210);

CShape* Shape213 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet214 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet214->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA215 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA215->setUSE("HAnimSegmentLineColorRGBA");
LineSet214->setColor(*ColorRGBA215);

CCoordinate* Coordinate216 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate216->setPoint(new float[6]{-0.0801,0.0712,-0.0766,-0.0823,0.0064,-0.004});
LineSet214->setCoord(*Coordinate216);

Shape213->setGeometry(LineSet214);

HAnimSegment209->addChildren(*Shape213);

HAnimJoint208->addChildren(*HAnimSegment209);

CHAnimJoint* HAnimJoint217 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint217->setDEF("hanim_r_metatarsophalangeal_1");
HAnimJoint217->setName("r_metatarsophalangeal_2");
HAnimJoint217->setCenter(new float[3]{-0.0823,0.0064,-0.004});
HAnimJoint208->addChildren(*HAnimJoint217);

HAnimJoint193->addChildren(*HAnimJoint208);

HAnimJoint175->addChildren(*HAnimJoint193);

HAnimJoint95->addChildren(*HAnimJoint175);

HAnimJoint43->addChildren(*HAnimJoint95);

CHAnimJoint* HAnimJoint218 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint218->setDEF("hanim_vl5");
HAnimJoint218->setName("vl5");
HAnimJoint218->setCenter(new float[3]{0.0028,1.0568,-0.0776});
CHAnimSegment* HAnimSegment219 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment219->setDEF("hanim_l5");
HAnimSegment219->setName("l5");
CTransform* Transform220 = (CTransform *)(m_pScene.createNode("Transform"));
Transform220->setTranslation(new float[3]{0.0028,1.0568,-0.0776});
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
Coordinate226->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0044,1.6209,0.0236});
LineSet224->setCoord(*Coordinate226);

Shape223->setGeometry(LineSet224);

HAnimSegment219->addChildren(*Shape223);

CHAnimSite* HAnimSite227 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite227->setDEF("hanim_glabella_pt");
HAnimSite227->setName("glabella_pt");
CTouchSensor* TouchSensor228 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor228->setDescription("HAnimSite glabella_pt");
HAnimSite227->addChildren(*TouchSensor228);

CShape* Shape229 = (CShape *)(m_pScene.createNode("Shape"));
Shape229->setUSE("HAnimSiteShape");
HAnimSite227->addChildren(*Shape229);

HAnimSegment219->addChildren(*HAnimSite227);

CHAnimSite* HAnimSite230 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite230->setDEF("hanim_l_ectocanthus_pt");
HAnimSite230->setName("l_ectocanthus_pt");
CTouchSensor* TouchSensor231 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor231->setDescription("HAnimSite l_ectocanthus_pt");
HAnimSite230->addChildren(*TouchSensor231);

CShape* Shape232 = (CShape *)(m_pScene.createNode("Shape"));
Shape232->setUSE("HAnimSiteShape");
HAnimSite230->addChildren(*Shape232);

HAnimSegment219->addChildren(*HAnimSite230);

CHAnimSite* HAnimSite233 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite233->setDEF("hanim_l_infraorbitale_pt");
HAnimSite233->setName("l_infraorbitale_pt");
HAnimSite233->setTranslation(new float[3]{0.0341,1.6171,0.0752});
CTouchSensor* TouchSensor234 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor234->setDescription("HAnimSite l_infraorbitale_pt");
HAnimSite233->addChildren(*TouchSensor234);

CShape* Shape235 = (CShape *)(m_pScene.createNode("Shape"));
Shape235->setUSE("HAnimSiteShape");
HAnimSite233->addChildren(*Shape235);

HAnimSegment219->addChildren(*HAnimSite233);

CHAnimSite* HAnimSite236 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite236->setDEF("hanim_l_tragion_pt");
HAnimSite236->setName("l_tragion_pt");
HAnimSite236->setTranslation(new float[3]{0.0739,1.6348,0.0282});
CTouchSensor* TouchSensor237 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor237->setDescription("HAnimSite l_tragion_pt");
HAnimSite236->addChildren(*TouchSensor237);

CShape* Shape238 = (CShape *)(m_pScene.createNode("Shape"));
Shape238->setUSE("HAnimSiteShape");
HAnimSite236->addChildren(*Shape238);

HAnimSegment219->addChildren(*HAnimSite236);

CHAnimSite* HAnimSite239 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite239->setDEF("hanim_nuchale_pt");
HAnimSite239->setName("nuchale_pt");
HAnimSite239->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
CTouchSensor* TouchSensor240 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor240->setDescription("HAnimSite nuchale_pt");
HAnimSite239->addChildren(*TouchSensor240);

CShape* Shape241 = (CShape *)(m_pScene.createNode("Shape"));
Shape241->setUSE("HAnimSiteShape");
HAnimSite239->addChildren(*Shape241);

HAnimSegment219->addChildren(*HAnimSite239);

CHAnimSite* HAnimSite242 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite242->setDEF("hanim_opisthocranion_pt");
HAnimSite242->setName("opisthocranion_pt");
CTouchSensor* TouchSensor243 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor243->setDescription("HAnimSite opisthocranion_pt");
HAnimSite242->addChildren(*TouchSensor243);

CShape* Shape244 = (CShape *)(m_pScene.createNode("Shape"));
Shape244->setUSE("HAnimSiteShape");
HAnimSite242->addChildren(*Shape244);

HAnimSegment219->addChildren(*HAnimSite242);

CHAnimSite* HAnimSite245 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite245->setDEF("hanim_r_ectocanthus_pt");
HAnimSite245->setName("r_ectocanthus_pt");
CTouchSensor* TouchSensor246 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor246->setDescription("HAnimSite r_ectocanthus_pt");
HAnimSite245->addChildren(*TouchSensor246);

CShape* Shape247 = (CShape *)(m_pScene.createNode("Shape"));
Shape247->setUSE("HAnimSiteShape");
HAnimSite245->addChildren(*Shape247);

HAnimSegment219->addChildren(*HAnimSite245);

CHAnimSite* HAnimSite248 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite248->setDEF("hanim_r_infraorbitale_pt");
HAnimSite248->setName("r_infraorbitale_pt");
HAnimSite248->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
CTouchSensor* TouchSensor249 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor249->setDescription("HAnimSite r_infraorbitale_pt");
HAnimSite248->addChildren(*TouchSensor249);

CShape* Shape250 = (CShape *)(m_pScene.createNode("Shape"));
Shape250->setUSE("HAnimSiteShape");
HAnimSite248->addChildren(*Shape250);

HAnimSegment219->addChildren(*HAnimSite248);

CHAnimSite* HAnimSite251 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite251->setDEF("hanim_r_tragion_pt");
HAnimSite251->setName("r_tragion_pt");
HAnimSite251->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
CTouchSensor* TouchSensor252 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor252->setDescription("HAnimSite r_tragion_pt");
HAnimSite251->addChildren(*TouchSensor252);

CShape* Shape253 = (CShape *)(m_pScene.createNode("Shape"));
Shape253->setUSE("HAnimSiteShape");
HAnimSite251->addChildren(*Shape253);

HAnimSegment219->addChildren(*HAnimSite251);

CHAnimSite* HAnimSite254 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite254->setDEF("hanim_sellion_pt");
HAnimSite254->setName("sellion_pt");
HAnimSite254->setTranslation(new float[3]{0.0058,1.6316,0.0852});
CTouchSensor* TouchSensor255 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor255->setDescription("HAnimSite sellion_pt");
HAnimSite254->addChildren(*TouchSensor255);

CShape* Shape256 = (CShape *)(m_pScene.createNode("Shape"));
Shape256->setUSE("HAnimSiteShape");
HAnimSite254->addChildren(*Shape256);

HAnimSegment219->addChildren(*HAnimSite254);

CHAnimSite* HAnimSite257 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite257->setDEF("hanim_skull_vertex_pt");
HAnimSite257->setName("skull_vertex_pt");
HAnimSite257->setTranslation(new float[3]{0.005,1.7504,0.0055});
CTouchSensor* TouchSensor258 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor258->setDescription("HAnimSite skull_vertex_pt");
HAnimSite257->addChildren(*TouchSensor258);

CShape* Shape259 = (CShape *)(m_pScene.createNode("Shape"));
Shape259->setUSE("HAnimSiteShape");
HAnimSite257->addChildren(*Shape259);

HAnimSegment219->addChildren(*HAnimSite257);

CShape* Shape260 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet261 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet261->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA262 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA262->setUSE("HAnimSegmentLineColorRGBA");
LineSet261->setColor(*ColorRGBA262);

CCoordinate* Coordinate263 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate263->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.2029,1.4376,-0.0387});
LineSet261->setCoord(*Coordinate263);

Shape260->setGeometry(LineSet261);

HAnimSegment219->addChildren(*Shape260);

CHAnimSite* HAnimSite264 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite264->setDEF("hanim_l_bideltoid_pt");
HAnimSite264->setName("l_bideltoid_pt");
CTouchSensor* TouchSensor265 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor265->setDescription("HAnimSite l_bideltoid_pt");
HAnimSite264->addChildren(*TouchSensor265);

CShape* Shape266 = (CShape *)(m_pScene.createNode("Shape"));
Shape266->setUSE("HAnimSiteShape");
HAnimSite264->addChildren(*Shape266);

HAnimSegment219->addChildren(*HAnimSite264);

CHAnimSite* HAnimSite267 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite267->setDEF("hanim_l_humeral_lateral_epicondyles_pt");
HAnimSite267->setName("l_humeral_lateral_epicondyles_pt");
HAnimSite267->setTranslation(new float[3]{0.228,1.1482,-0.11});
CTouchSensor* TouchSensor268 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor268->setDescription("HAnimSite l_humeral_lateral_epicondyles_pt");
HAnimSite267->addChildren(*TouchSensor268);

CShape* Shape269 = (CShape *)(m_pScene.createNode("Shape"));
Shape269->setUSE("HAnimSiteShape");
HAnimSite267->addChildren(*Shape269);

HAnimSegment219->addChildren(*HAnimSite267);

CShape* Shape270 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet271 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet271->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA272 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA272->setUSE("HAnimSegmentLineColorRGBA");
LineSet271->setColor(*ColorRGBA272);

CCoordinate* Coordinate273 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate273->setPoint(new float[6]{0.0028,1.0568,-0.0776,-0.1907,1.4407,-0.0325});
LineSet271->setCoord(*Coordinate273);

Shape270->setGeometry(LineSet271);

HAnimSegment219->addChildren(*Shape270);

CHAnimSite* HAnimSite274 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite274->setDEF("hanim_r_bideltoid_pt");
HAnimSite274->setName("r_bideltoid_pt");
CTouchSensor* TouchSensor275 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor275->setDescription("HAnimSite r_bideltoid_pt");
HAnimSite274->addChildren(*TouchSensor275);

CShape* Shape276 = (CShape *)(m_pScene.createNode("Shape"));
Shape276->setUSE("HAnimSiteShape");
HAnimSite274->addChildren(*Shape276);

HAnimSegment219->addChildren(*HAnimSite274);

CHAnimSite* HAnimSite277 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite277->setDEF("hanim_r_humeral_lateral_epicondyles_pt");
HAnimSite277->setName("r_humeral_lateral_epicondyles_pt");
HAnimSite277->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
CTouchSensor* TouchSensor278 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor278->setDescription("HAnimSite r_humeral_lateral_epicondyles_pt");
HAnimSite277->addChildren(*TouchSensor278);

CShape* Shape279 = (CShape *)(m_pScene.createNode("Shape"));
Shape279->setUSE("HAnimSiteShape");
HAnimSite277->addChildren(*Shape279);

HAnimSegment219->addChildren(*HAnimSite277);

HAnimJoint218->addChildren(*HAnimSegment219);

CHAnimJoint* HAnimJoint280 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint280->setDEF("hanim_skullbase");
HAnimJoint280->setName("skullbase");
HAnimJoint280->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint218->addChildren(*HAnimJoint280);

CHAnimJoint* HAnimJoint281 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint281->setDEF("hanim_l_shoulder");
HAnimJoint281->setName("l_shoulder");
HAnimJoint281->setCenter(new float[3]{0.2029,1.4376,-0.0387});
CHAnimSegment* HAnimSegment282 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment282->setDEF("hanim_l_upperarm");
HAnimSegment282->setName("l_upperarm");
CTransform* Transform283 = (CTransform *)(m_pScene.createNode("Transform"));
Transform283->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
CTransform* Transform284 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape285 = (CShape *)(m_pScene.createNode("Shape"));
Shape285->setUSE("HAnimJointShape");
Transform284->addChild(*Shape285);

Transform283->addChildren(*Transform284);

HAnimSegment282->addChildren(*Transform283);

CShape* Shape286 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet287 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet287->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA288 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA288->setUSE("HAnimSegmentLineColorRGBA");
LineSet287->setColor(*ColorRGBA288);

CCoordinate* Coordinate289 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate289->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
LineSet287->setCoord(*Coordinate289);

Shape286->setGeometry(LineSet287);

HAnimSegment282->addChildren(*Shape286);

CHAnimSite* HAnimSite290 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite290->setDEF("hanim_l_humeral_medial_epicondyles_pt");
HAnimSite290->setName("l_humeral_medial_epicondyles_pt");
HAnimSite290->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
CTouchSensor* TouchSensor291 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor291->setDescription("HAnimSite l_humeral_medial_epicondyles_pt");
HAnimSite290->addChildren(*TouchSensor291);

CShape* Shape292 = (CShape *)(m_pScene.createNode("Shape"));
Shape292->setUSE("HAnimSiteShape");
HAnimSite290->addChildren(*Shape292);

HAnimSegment282->addChildren(*HAnimSite290);

CHAnimSite* HAnimSite293 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite293->setDEF("hanim_l_olecranon_pt");
HAnimSite293->setName("l_olecranon_pt");
HAnimSite293->setTranslation(new float[3]{-0.1962,1.1375,-0.1123});
CTouchSensor* TouchSensor294 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor294->setDescription("HAnimSite l_olecranon_pt");
HAnimSite293->addChildren(*TouchSensor294);

CShape* Shape295 = (CShape *)(m_pScene.createNode("Shape"));
Shape295->setUSE("HAnimSiteShape");
HAnimSite293->addChildren(*Shape295);

HAnimSegment282->addChildren(*HAnimSite293);

CHAnimSite* HAnimSite296 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite296->setDEF("hanim_l_radial_styloid_pt");
HAnimSite296->setName("l_radial_styloid_pt");
HAnimSite296->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
CTouchSensor* TouchSensor297 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor297->setDescription("HAnimSite l_radial_styloid_pt");
HAnimSite296->addChildren(*TouchSensor297);

CShape* Shape298 = (CShape *)(m_pScene.createNode("Shape"));
Shape298->setUSE("HAnimSiteShape");
HAnimSite296->addChildren(*Shape298);

HAnimSegment282->addChildren(*HAnimSite296);

CHAnimSite* HAnimSite299 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite299->setDEF("hanim_l_radiale_pt");
HAnimSite299->setName("l_radiale_pt");
HAnimSite299->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
CTouchSensor* TouchSensor300 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor300->setDescription("HAnimSite l_radiale_pt");
HAnimSite299->addChildren(*TouchSensor300);

CShape* Shape301 = (CShape *)(m_pScene.createNode("Shape"));
Shape301->setUSE("HAnimSiteShape");
HAnimSite299->addChildren(*Shape301);

HAnimSegment282->addChildren(*HAnimSite299);

HAnimJoint281->addChildren(*HAnimSegment282);

CHAnimJoint* HAnimJoint302 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint302->setDEF("hanim_l_elbow");
HAnimJoint302->setName("l_elbow");
HAnimJoint302->setCenter(new float[3]{0.2014,1.1357,-0.0682});
CHAnimSegment* HAnimSegment303 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment303->setDEF("hanim_l_forearm");
HAnimSegment303->setName("l_forearm");
CTransform* Transform304 = (CTransform *)(m_pScene.createNode("Transform"));
Transform304->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
CTransform* Transform305 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape306 = (CShape *)(m_pScene.createNode("Shape"));
Shape306->setUSE("HAnimJointShape");
Transform305->addChild(*Shape306);

Transform304->addChildren(*Transform305);

HAnimSegment303->addChildren(*Transform304);

CShape* Shape307 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet308 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet308->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA309 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA309->setUSE("HAnimSegmentLineColorRGBA");
LineSet308->setColor(*ColorRGBA309);

CCoordinate* Coordinate310 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate310->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
LineSet308->setCoord(*Coordinate310);

Shape307->setGeometry(LineSet308);

HAnimSegment303->addChildren(*Shape307);

CHAnimSite* HAnimSite311 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite311->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite311->setName("l_ulnar_styloid_pt");
HAnimSite311->setTranslation(new float[3]{-0.2142,0.8529,-0.0648});
CTouchSensor* TouchSensor312 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor312->setDescription("HAnimSite l_ulnar_styloid_pt");
HAnimSite311->addChildren(*TouchSensor312);

CShape* Shape313 = (CShape *)(m_pScene.createNode("Shape"));
Shape313->setUSE("HAnimSiteShape");
HAnimSite311->addChildren(*Shape313);

HAnimSegment303->addChildren(*HAnimSite311);

HAnimJoint302->addChildren(*HAnimSegment303);

CHAnimJoint* HAnimJoint314 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint314->setDEF("hanim_l_radiocarpal");
HAnimJoint314->setName("l_radiocarpal");
HAnimJoint314->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint302->addChildren(*HAnimJoint314);

HAnimJoint281->addChildren(*HAnimJoint302);

HAnimJoint218->addChildren(*HAnimJoint281);

CHAnimJoint* HAnimJoint315 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint315->setDEF("hanim_r_shoulder");
HAnimJoint315->setName("r_shoulder");
HAnimJoint315->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
CHAnimSegment* HAnimSegment316 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment316->setDEF("hanim_r_upperarm");
HAnimSegment316->setName("r_upperarm");
CTransform* Transform317 = (CTransform *)(m_pScene.createNode("Transform"));
Transform317->setTranslation(new float[3]{-0.1907,1.4407,-0.0325});
CTransform* Transform318 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape319 = (CShape *)(m_pScene.createNode("Shape"));
Shape319->setUSE("HAnimJointShape");
Transform318->addChild(*Shape319);

Transform317->addChildren(*Transform318);

HAnimSegment316->addChildren(*Transform317);

CShape* Shape320 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet321 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet321->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA322 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA322->setUSE("HAnimSegmentLineColorRGBA");
LineSet321->setColor(*ColorRGBA322);

CCoordinate* Coordinate323 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate323->setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062});
LineSet321->setCoord(*Coordinate323);

Shape320->setGeometry(LineSet321);

HAnimSegment316->addChildren(*Shape320);

CHAnimSite* HAnimSite324 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite324->setDEF("hanim_r_humeral_medial_epicondyles_pt");
HAnimSite324->setName("r_humeral_medial_epicondyles_pt");
HAnimSite324->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
CTouchSensor* TouchSensor325 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor325->setDescription("HAnimSite r_humeral_medial_epicondyles_pt");
HAnimSite324->addChildren(*TouchSensor325);

CShape* Shape326 = (CShape *)(m_pScene.createNode("Shape"));
Shape326->setUSE("HAnimSiteShape");
HAnimSite324->addChildren(*Shape326);

HAnimSegment316->addChildren(*HAnimSite324);

CHAnimSite* HAnimSite327 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite327->setDEF("hanim_r_olecranon_pt");
HAnimSite327->setName("r_olecranon_pt");
HAnimSite327->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
CTouchSensor* TouchSensor328 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor328->setDescription("HAnimSite r_olecranon_pt");
HAnimSite327->addChildren(*TouchSensor328);

CShape* Shape329 = (CShape *)(m_pScene.createNode("Shape"));
Shape329->setUSE("HAnimSiteShape");
HAnimSite327->addChildren(*Shape329);

HAnimSegment316->addChildren(*HAnimSite327);

CHAnimSite* HAnimSite330 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite330->setDEF("hanim_r_radial_styloid_pt");
HAnimSite330->setName("r_radial_styloid_pt");
HAnimSite330->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
CTouchSensor* TouchSensor331 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor331->setDescription("HAnimSite r_radial_styloid_pt");
HAnimSite330->addChildren(*TouchSensor331);

CShape* Shape332 = (CShape *)(m_pScene.createNode("Shape"));
Shape332->setUSE("HAnimSiteShape");
HAnimSite330->addChildren(*Shape332);

HAnimSegment316->addChildren(*HAnimSite330);

CHAnimSite* HAnimSite333 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite333->setDEF("hanim_r_radiale_pt");
HAnimSite333->setName("r_radiale_pt");
HAnimSite333->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
CTouchSensor* TouchSensor334 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor334->setDescription("HAnimSite r_radiale_pt");
HAnimSite333->addChildren(*TouchSensor334);

CShape* Shape335 = (CShape *)(m_pScene.createNode("Shape"));
Shape335->setUSE("HAnimSiteShape");
HAnimSite333->addChildren(*Shape335);

HAnimSegment316->addChildren(*HAnimSite333);

HAnimJoint315->addChildren(*HAnimSegment316);

CHAnimJoint* HAnimJoint336 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint336->setDEF("hanim_r_elbow");
HAnimJoint336->setName("r_elbow");
HAnimJoint336->setCenter(new float[3]{-0.1949,1.1388,-0.062});
CHAnimSegment* HAnimSegment337 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment337->setDEF("hanim_r_forearm");
HAnimSegment337->setName("r_forearm");
CTransform* Transform338 = (CTransform *)(m_pScene.createNode("Transform"));
Transform338->setTranslation(new float[3]{-0.1949,1.1388,-0.062});
CTransform* Transform339 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape340 = (CShape *)(m_pScene.createNode("Shape"));
Shape340->setUSE("HAnimJointShape");
Transform339->addChild(*Shape340);

Transform338->addChildren(*Transform339);

HAnimSegment337->addChildren(*Transform338);

CShape* Shape341 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet342 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet342->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA343 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA343->setUSE("HAnimSegmentLineColorRGBA");
LineSet342->setColor(*ColorRGBA343);

CCoordinate* Coordinate344 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate344->setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521});
LineSet342->setCoord(*Coordinate344);

Shape341->setGeometry(LineSet342);

HAnimSegment337->addChildren(*Shape341);

CHAnimSite* HAnimSite345 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite345->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite345->setName("r_ulnar_styloid_pt");
HAnimSite345->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
CTouchSensor* TouchSensor346 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor346->setDescription("HAnimSite r_ulnar_styloid_pt");
HAnimSite345->addChildren(*TouchSensor346);

CShape* Shape347 = (CShape *)(m_pScene.createNode("Shape"));
Shape347->setUSE("HAnimSiteShape");
HAnimSite345->addChildren(*Shape347);

HAnimSegment337->addChildren(*HAnimSite345);

HAnimJoint336->addChildren(*HAnimSegment337);

CHAnimJoint* HAnimJoint348 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint348->setDEF("hanim_r_radiocarpal");
HAnimJoint348->setName("r_radiocarpal");
HAnimJoint348->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimJoint336->addChildren(*HAnimJoint348);

HAnimJoint315->addChildren(*HAnimJoint336);

HAnimJoint218->addChildren(*HAnimJoint315);

HAnimJoint43->addChildren(*HAnimJoint218);

HAnimHumanoid42->setSkeleton(*HAnimJoint43);

CHAnimSite* HAnimSite349 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite349->setUSE("hanim_buttocks_standing_wall_contact_point_pt");
HAnimHumanoid42->setSites(*HAnimSite349);

CHAnimSite* HAnimSite350 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite350->setUSE("hanim_crotch_pt");
HAnimHumanoid42->setSites(*HAnimSite350);

CHAnimSite* HAnimSite351 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite351->setUSE("hanim_l_asis_pt");
HAnimHumanoid42->setSites(*HAnimSite351);

CHAnimSite* HAnimSite352 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite352->setUSE("hanim_l_iliocristale_pt");
HAnimHumanoid42->setSites(*HAnimSite352);

CHAnimSite* HAnimSite353 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite353->setUSE("hanim_l_psis_pt");
HAnimHumanoid42->setSites(*HAnimSite353);

CHAnimSite* HAnimSite354 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite354->setUSE("hanim_l_trochanterion_pt");
HAnimHumanoid42->setSites(*HAnimSite354);

CHAnimSite* HAnimSite355 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite355->setUSE("hanim_r_asis_pt");
HAnimHumanoid42->setSites(*HAnimSite355);

CHAnimSite* HAnimSite356 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite356->setUSE("hanim_r_iliocristale_pt");
HAnimHumanoid42->setSites(*HAnimSite356);

CHAnimSite* HAnimSite357 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite357->setUSE("hanim_r_psis_pt");
HAnimHumanoid42->setSites(*HAnimSite357);

CHAnimSite* HAnimSite358 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite358->setUSE("hanim_r_trochanterion_pt");
HAnimHumanoid42->setSites(*HAnimSite358);

CHAnimSite* HAnimSite359 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite359->setUSE("hanim_navel_pt");
HAnimHumanoid42->setSites(*HAnimSite359);

CHAnimSite* HAnimSite360 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite360->setUSE("hanim_waist_preferred_anterior_pt");
HAnimHumanoid42->setSites(*HAnimSite360);

CHAnimSite* HAnimSite361 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite361->setUSE("hanim_waist_preferred_posterior_pt");
HAnimHumanoid42->setSites(*HAnimSite361);

CHAnimSite* HAnimSite362 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite362->setUSE("hanim_l_femoral_lateral_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite362);

CHAnimSite* HAnimSite363 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite363->setUSE("hanim_l_femoral_medial_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite363);

CHAnimSite* HAnimSite364 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite364->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid42->setSites(*HAnimSite364);

CHAnimSite* HAnimSite365 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite365->setUSE("hanim_l_suprapatella_pt");
HAnimHumanoid42->setSites(*HAnimSite365);

CHAnimSite* HAnimSite366 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite366->setUSE("hanim_r_femoral_lateral_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite366);

CHAnimSite* HAnimSite367 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite367->setUSE("hanim_r_femoral_medial_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite367);

CHAnimSite* HAnimSite368 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite368->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid42->setSites(*HAnimSite368);

CHAnimSite* HAnimSite369 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite369->setUSE("hanim_r_suprapatella_pt");
HAnimHumanoid42->setSites(*HAnimSite369);

CHAnimSite* HAnimSite370 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite370->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid42->setSites(*HAnimSite370);

CHAnimSite* HAnimSite371 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite371->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid42->setSites(*HAnimSite371);

CHAnimSite* HAnimSite372 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite372->setUSE("hanim_l_tibiale_pt");
HAnimHumanoid42->setSites(*HAnimSite372);

CHAnimSite* HAnimSite373 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite373->setUSE("hanim_l_calcaneus_posterior_pt");
HAnimHumanoid42->setSites(*HAnimSite373);

CHAnimSite* HAnimSite374 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite374->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid42->setSites(*HAnimSite374);

CHAnimSite* HAnimSite375 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite375->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid42->setSites(*HAnimSite375);

CHAnimSite* HAnimSite376 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite376->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid42->setSites(*HAnimSite376);

CHAnimSite* HAnimSite377 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite377->setUSE("hanim_r_tibiale_pt");
HAnimHumanoid42->setSites(*HAnimSite377);

CHAnimSite* HAnimSite378 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite378->setUSE("hanim_r_calcaneus_posterior_pt");
HAnimHumanoid42->setSites(*HAnimSite378);

CHAnimSite* HAnimSite379 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite379->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid42->setSites(*HAnimSite379);

CHAnimSite* HAnimSite380 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite380->setUSE("hanim_glabella_pt");
HAnimHumanoid42->setSites(*HAnimSite380);

CHAnimSite* HAnimSite381 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite381->setUSE("hanim_l_ectocanthus_pt");
HAnimHumanoid42->setSites(*HAnimSite381);

CHAnimSite* HAnimSite382 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite382->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid42->setSites(*HAnimSite382);

CHAnimSite* HAnimSite383 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite383->setUSE("hanim_l_tragion_pt");
HAnimHumanoid42->setSites(*HAnimSite383);

CHAnimSite* HAnimSite384 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite384->setUSE("hanim_nuchale_pt");
HAnimHumanoid42->setSites(*HAnimSite384);

CHAnimSite* HAnimSite385 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite385->setUSE("hanim_opisthocranion_pt");
HAnimHumanoid42->setSites(*HAnimSite385);

CHAnimSite* HAnimSite386 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite386->setUSE("hanim_r_ectocanthus_pt");
HAnimHumanoid42->setSites(*HAnimSite386);

CHAnimSite* HAnimSite387 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite387->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid42->setSites(*HAnimSite387);

CHAnimSite* HAnimSite388 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite388->setUSE("hanim_r_tragion_pt");
HAnimHumanoid42->setSites(*HAnimSite388);

CHAnimSite* HAnimSite389 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite389->setUSE("hanim_sellion_pt");
HAnimHumanoid42->setSites(*HAnimSite389);

CHAnimSite* HAnimSite390 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite390->setUSE("hanim_skull_vertex_pt");
HAnimHumanoid42->setSites(*HAnimSite390);

CHAnimSite* HAnimSite391 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite391->setUSE("hanim_l_bideltoid_pt");
HAnimHumanoid42->setSites(*HAnimSite391);

CHAnimSite* HAnimSite392 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite392->setUSE("hanim_l_humeral_lateral_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite392);

CHAnimSite* HAnimSite393 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite393->setUSE("hanim_r_bideltoid_pt");
HAnimHumanoid42->setSites(*HAnimSite393);

CHAnimSite* HAnimSite394 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite394->setUSE("hanim_r_humeral_lateral_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite394);

CHAnimSite* HAnimSite395 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite395->setUSE("hanim_l_humeral_medial_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite395);

CHAnimSite* HAnimSite396 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite396->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid42->setSites(*HAnimSite396);

CHAnimSite* HAnimSite397 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite397->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid42->setSites(*HAnimSite397);

CHAnimSite* HAnimSite398 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite398->setUSE("hanim_l_radiale_pt");
HAnimHumanoid42->setSites(*HAnimSite398);

CHAnimSite* HAnimSite399 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite399->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid42->setSites(*HAnimSite399);

CHAnimSite* HAnimSite400 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite400->setUSE("hanim_r_humeral_medial_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite400);

CHAnimSite* HAnimSite401 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite401->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid42->setSites(*HAnimSite401);

CHAnimSite* HAnimSite402 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite402->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid42->setSites(*HAnimSite402);

CHAnimSite* HAnimSite403 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite403->setUSE("hanim_r_radiale_pt");
HAnimHumanoid42->setSites(*HAnimSite403);

CHAnimSite* HAnimSite404 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite404->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid42->setSites(*HAnimSite404);

CHAnimSegment* HAnimSegment405 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment405->setUSE("hanim_sacrum");
HAnimHumanoid42->setSegments(*HAnimSegment405);

CHAnimSegment* HAnimSegment406 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment406->setUSE("hanim_pelvis");
HAnimHumanoid42->setSegments(*HAnimSegment406);

CHAnimSegment* HAnimSegment407 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment407->setUSE("hanim_l_thigh");
HAnimHumanoid42->setSegments(*HAnimSegment407);

CHAnimSegment* HAnimSegment408 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment408->setUSE("hanim_l_calf");
HAnimHumanoid42->setSegments(*HAnimSegment408);

CHAnimSegment* HAnimSegment409 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment409->setUSE("hanim_l_talus");
HAnimHumanoid42->setSegments(*HAnimSegment409);

CHAnimSegment* HAnimSegment410 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment410->setUSE("hanim_r_thigh");
HAnimHumanoid42->setSegments(*HAnimSegment410);

CHAnimSegment* HAnimSegment411 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment411->setUSE("hanim_r_calf");
HAnimHumanoid42->setSegments(*HAnimSegment411);

CHAnimSegment* HAnimSegment412 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment412->setUSE("hanim_r_talus");
HAnimHumanoid42->setSegments(*HAnimSegment412);

CHAnimSegment* HAnimSegment413 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment413->setUSE("hanim_l5");
HAnimHumanoid42->setSegments(*HAnimSegment413);

CHAnimSegment* HAnimSegment414 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment414->setUSE("hanim_l_upperarm");
HAnimHumanoid42->setSegments(*HAnimSegment414);

CHAnimSegment* HAnimSegment415 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment415->setUSE("hanim_l_forearm");
HAnimHumanoid42->setSegments(*HAnimSegment415);

CHAnimSegment* HAnimSegment416 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment416->setUSE("hanim_r_upperarm");
HAnimHumanoid42->setSegments(*HAnimSegment416);

CHAnimSegment* HAnimSegment417 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment417->setUSE("hanim_r_forearm");
HAnimHumanoid42->setSegments(*HAnimSegment417);

CHAnimJoint* HAnimJoint418 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint418->setUSE("hanim_humanoid_root");
HAnimHumanoid42->addJoints(*HAnimJoint418);

CHAnimJoint* HAnimJoint419 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint419->setUSE("hanim_sacroiliac");
HAnimHumanoid42->addJoints(*HAnimJoint419);

CHAnimJoint* HAnimJoint420 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint420->setUSE("hanim_l_hip");
HAnimHumanoid42->addJoints(*HAnimJoint420);

CHAnimJoint* HAnimJoint421 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint421->setUSE("hanim_l_knee");
HAnimHumanoid42->addJoints(*HAnimJoint421);

CHAnimJoint* HAnimJoint422 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint422->setUSE("hanim_l_talocrural");
HAnimHumanoid42->addJoints(*HAnimJoint422);

CHAnimJoint* HAnimJoint423 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint423->setUSE("hanim_l_metatarsophalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint423);

CHAnimJoint* HAnimJoint424 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint424->setUSE("hanim_r_hip");
HAnimHumanoid42->addJoints(*HAnimJoint424);

CHAnimJoint* HAnimJoint425 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint425->setUSE("hanim_r_knee");
HAnimHumanoid42->addJoints(*HAnimJoint425);

CHAnimJoint* HAnimJoint426 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint426->setUSE("hanim_r_talocrural");
HAnimHumanoid42->addJoints(*HAnimJoint426);

CHAnimJoint* HAnimJoint427 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint427->setUSE("hanim_r_metatarsophalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint427);

CHAnimJoint* HAnimJoint428 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint428->setUSE("hanim_vl5");
HAnimHumanoid42->addJoints(*HAnimJoint428);

CHAnimJoint* HAnimJoint429 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint429->setUSE("hanim_skullbase");
HAnimHumanoid42->addJoints(*HAnimJoint429);

CHAnimJoint* HAnimJoint430 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint430->setUSE("hanim_l_shoulder");
HAnimHumanoid42->addJoints(*HAnimJoint430);

CHAnimJoint* HAnimJoint431 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint431->setUSE("hanim_l_elbow");
HAnimHumanoid42->addJoints(*HAnimJoint431);

CHAnimJoint* HAnimJoint432 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint432->setUSE("hanim_l_radiocarpal");
HAnimHumanoid42->addJoints(*HAnimJoint432);

CHAnimJoint* HAnimJoint433 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint433->setUSE("hanim_r_shoulder");
HAnimHumanoid42->addJoints(*HAnimJoint433);

CHAnimJoint* HAnimJoint434 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint434->setUSE("hanim_r_elbow");
HAnimHumanoid42->addJoints(*HAnimJoint434);

CHAnimJoint* HAnimJoint435 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint435->setUSE("hanim_r_radiocarpal");
HAnimHumanoid42->addJoints(*HAnimJoint435);

CCoordinate* Coordinate436 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate436->setDEF("TheSkinCoord");
Coordinate436->setPoint(new float[1170]{0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168});
HAnimHumanoid42->setSkinCoord(*Coordinate436);

CShape* Shape437 = (CShape *)(m_pScene.createNode("Shape"));
Shape437->setDEF("SkinShape");
CAppearance* Appearance438 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance438->setDEF("SkinAppearance");
CMaterial* Material439 = (CMaterial *)(m_pScene.createNode("Material"));
Material439->setDEF("SkinMaterial");
Material439->setAmbientIntensity(0.6);
Material439->setDiffuseColor(new float[3]{1,1,1});
Material439->setShininess(0.6);
Material439->setTransparency(0.2);
Appearance438->setMaterial(*Material439);

CImageTexture* ImageTexture440 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture440->setDEF("zBlueSpiralBkg2");
ImageTexture440->setDescription("Blue Spiral Pattern");
ImageTexture440->setUrl(new CString[3]{"./data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"}, 3);
Appearance438->setTexture(*ImageTexture440);

Shape437->setAppearance(*Appearance438);

CIndexedFaceSet* IndexedFaceSet441 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet441->setCreaseAngle(3.1);
IndexedFaceSet441->setCoordIndex(new int[2780]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
CColor* Color442 = (CColor *)(m_pScene.createNode("Color"));
Color442->setColor(new float[2079]{1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1});
IndexedFaceSet441->setColor(*Color442);

CCoordinate* Coordinate443 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate443->setUSE("TheSkinCoord");
IndexedFaceSet441->setCoord(*Coordinate443);

Shape437->setGeometry(IndexedFaceSet441);

HAnimHumanoid42->setSkin(*Shape437);

group->addChildren(*HAnimHumanoid42);

X3D0->setScene(*Scene10);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}

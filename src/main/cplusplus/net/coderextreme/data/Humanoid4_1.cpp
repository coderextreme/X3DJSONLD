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
meta2->setContent("Humanoid4_1.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("identifier");
meta3->setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid4_1.x3d");
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
Coordinate173->setPoint(new float[6]{0.1101,0.0656,-0.0736,3.4715,0.0374,0.6807});
LineSet171->setCoord(*Coordinate173);

Shape170->setGeometry(LineSet171);

HAnimSegment166->addChildren(*Shape170);

CShape* Shape174 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet175 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet175->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA176 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA176->setUSE("HAnimSegmentLineColorRGBA");
LineSet175->setColor(*ColorRGBA176);

CCoordinate* Coordinate177 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate177->setPoint(new float[6]{0.1101,0.0656,-0.0736,3.9515,0.0653,-0.6895});
LineSet175->setCoord(*Coordinate177);

Shape174->setGeometry(LineSet175);

HAnimSegment166->addChildren(*Shape174);

HAnimJoint165->addChildren(*HAnimSegment166);

CHAnimJoint* HAnimJoint178 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint178->setDEF("hanim_l_talocalcaneonavicular");
HAnimJoint178->setName("l_talocalcaneonavicular");
HAnimJoint178->setCenter(new float[3]{3.4715,0.0374,0.6807});
CHAnimSegment* HAnimSegment179 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment179->setDEF("hanim_l_navicular");
HAnimSegment179->setName("l_navicular");
CTransform* Transform180 = (CTransform *)(m_pScene.createNode("Transform"));
Transform180->setTranslation(new float[3]{3.4715,0.0374,0.6807});
CTransform* Transform181 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape182 = (CShape *)(m_pScene.createNode("Shape"));
Shape182->setUSE("HAnimJointShape");
Transform181->addChild(*Shape182);

Transform180->addChildren(*Transform181);

HAnimSegment179->addChildren(*Transform180);

CShape* Shape183 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet184 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet184->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA185 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA185->setUSE("HAnimSegmentLineColorRGBA");
LineSet184->setColor(*ColorRGBA185);

CCoordinate* Coordinate186 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate186->setPoint(new float[6]{3.4715,0.0374,0.6807,2.9855,0.0311,1.2819});
LineSet184->setCoord(*Coordinate186);

Shape183->setGeometry(LineSet184);

HAnimSegment179->addChildren(*Shape183);

CShape* Shape187 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet188 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet188->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA189 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA189->setUSE("HAnimSegmentLineColorRGBA");
LineSet188->setColor(*ColorRGBA189);

CCoordinate* Coordinate190 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate190->setPoint(new float[6]{3.4715,0.0374,0.6807,3.6105,0.033,1.4168});
LineSet188->setCoord(*Coordinate190);

Shape187->setGeometry(LineSet188);

HAnimSegment179->addChildren(*Shape187);

CShape* Shape191 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet192 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet192->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA193 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA193->setUSE("HAnimSegmentLineColorRGBA");
LineSet192->setColor(*ColorRGBA193);

CCoordinate* Coordinate194 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate194->setPoint(new float[6]{3.4715,0.0374,0.6807,4.1235,0.0328,1.3453});
LineSet192->setCoord(*Coordinate194);

Shape191->setGeometry(LineSet192);

HAnimSegment179->addChildren(*Shape191);

HAnimJoint178->addChildren(*HAnimSegment179);

CHAnimJoint* HAnimJoint195 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint195->setDEF("hanim_l_cuneonavicular_1");
HAnimJoint195->setName("l_cuneonavicular_1");
HAnimJoint195->setCenter(new float[3]{2.9855,0.0311,1.2819});
CHAnimSegment* HAnimSegment196 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment196->setDEF("hanim_l_cuneiform_1");
HAnimSegment196->setName("l_cuneiform_1");
CTransform* Transform197 = (CTransform *)(m_pScene.createNode("Transform"));
Transform197->setTranslation(new float[3]{2.9855,0.0311,1.2819});
CTransform* Transform198 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape199 = (CShape *)(m_pScene.createNode("Shape"));
Shape199->setUSE("HAnimJointShape");
Transform198->addChild(*Shape199);

Transform197->addChildren(*Transform198);

HAnimSegment196->addChildren(*Transform197);

CShape* Shape200 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet201 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet201->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA202 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA202->setUSE("HAnimSegmentLineColorRGBA");
LineSet201->setColor(*ColorRGBA202);

CCoordinate* Coordinate203 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate203->setPoint(new float[6]{2.9855,0.0311,1.2819,2.8635,0.0194,2.4285});
LineSet201->setCoord(*Coordinate203);

Shape200->setGeometry(LineSet201);

HAnimSegment196->addChildren(*Shape200);

HAnimJoint195->addChildren(*HAnimSegment196);

CHAnimJoint* HAnimJoint204 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint204->setDEF("hanim_l_tarsometatarsal_1");
HAnimJoint204->setName("l_tarsometatarsal_1");
HAnimJoint204->setCenter(new float[3]{2.8635,0.0194,2.4285});
CHAnimSegment* HAnimSegment205 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment205->setDEF("hanim_l_metatarsal_1");
HAnimSegment205->setName("l_metatarsal_1");
CTransform* Transform206 = (CTransform *)(m_pScene.createNode("Transform"));
Transform206->setTranslation(new float[3]{2.8635,0.0194,2.4285});
CTransform* Transform207 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape208 = (CShape *)(m_pScene.createNode("Shape"));
Shape208->setUSE("HAnimJointShape");
Transform207->addChild(*Shape208);

Transform206->addChildren(*Transform207);

HAnimSegment205->addChildren(*Transform206);

CShape* Shape209 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet210 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet210->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA211 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA211->setUSE("HAnimSegmentLineColorRGBA");
LineSet210->setColor(*ColorRGBA211);

CCoordinate* Coordinate212 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate212->setPoint(new float[6]{2.8635,0.0194,2.4285,2.7525,0.0077,4.6255});
LineSet210->setCoord(*Coordinate212);

Shape209->setGeometry(LineSet210);

HAnimSegment205->addChildren(*Shape209);

CHAnimSite* HAnimSite213 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite213->setDEF("hanim_l_metatarsal_phalanx_1_pt");
HAnimSite213->setName("l_metatarsal_phalanx_1_pt");
CTouchSensor* TouchSensor214 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor214->setDescription("HAnimSite l_metatarsal_phalanx_1_pt");
HAnimSite213->addChildren(*TouchSensor214);

CShape* Shape215 = (CShape *)(m_pScene.createNode("Shape"));
Shape215->setUSE("HAnimSiteShape");
HAnimSite213->addChildren(*Shape215);

HAnimSegment205->addChildren(*HAnimSite213);

HAnimJoint204->addChildren(*HAnimSegment205);

CHAnimJoint* HAnimJoint216 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint216->setDEF("hanim_l_metatarsophalangeal_1");
HAnimJoint216->setName("l_metatarsophalangeal_1");
HAnimJoint216->setCenter(new float[3]{2.7525,0.0077,4.6255});
CHAnimSegment* HAnimSegment217 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment217->setDEF("hanim_l_tarsal_proximal_phalanx_1");
HAnimSegment217->setName("l_tarsal_proximal_phalanx_1");
CTransform* Transform218 = (CTransform *)(m_pScene.createNode("Transform"));
Transform218->setTranslation(new float[3]{2.7525,0.0077,4.6255});
CTransform* Transform219 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape220 = (CShape *)(m_pScene.createNode("Shape"));
Shape220->setUSE("HAnimJointShape");
Transform219->addChild(*Shape220);

Transform218->addChildren(*Transform219);

HAnimSegment217->addChildren(*Transform218);

CShape* Shape221 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet222 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet222->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA223 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA223->setUSE("HAnimSegmentLineColorRGBA");
LineSet222->setColor(*ColorRGBA223);

CCoordinate* Coordinate224 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate224->setPoint(new float[6]{2.7525,0.0077,4.6255,2.7525,0.0077,4.6255});
LineSet222->setCoord(*Coordinate224);

Shape221->setGeometry(LineSet222);

HAnimSegment217->addChildren(*Shape221);

CHAnimSite* HAnimSite225 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite225->setDEF("hanim_l_tarsal_distal_phalanx_1_tip");
HAnimSite225->setName("l_tarsal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor226 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor226->setDescription("HAnimSite l_tarsal_distal_phalanx_1_tip");
HAnimSite225->addChildren(*TouchSensor226);

CShape* Shape227 = (CShape *)(m_pScene.createNode("Shape"));
Shape227->setUSE("HAnimSiteShape");
HAnimSite225->addChildren(*Shape227);

HAnimSegment217->addChildren(*HAnimSite225);

HAnimJoint216->addChildren(*HAnimSegment217);

CHAnimJoint* HAnimJoint228 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint228->setDEF("hanim_l_tarsal_interphalangeal_1");
HAnimJoint228->setName("l_tarsal_interphalangeal_1");
HAnimJoint216->addChildren(*HAnimJoint228);

HAnimJoint204->addChildren(*HAnimJoint216);

HAnimJoint195->addChildren(*HAnimJoint204);

HAnimJoint178->addChildren(*HAnimJoint195);

CHAnimJoint* HAnimJoint229 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint229->setDEF("hanim_l_cuneonavicular_2");
HAnimJoint229->setName("l_cuneonavicular_2");
HAnimJoint229->setCenter(new float[3]{3.6105,0.033,1.4168});
CHAnimSegment* HAnimSegment230 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment230->setDEF("hanim_l_cuneiform_2");
HAnimSegment230->setName("l_cuneiform_2");
CTransform* Transform231 = (CTransform *)(m_pScene.createNode("Transform"));
Transform231->setTranslation(new float[3]{3.6105,0.033,1.4168});
CTransform* Transform232 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape233 = (CShape *)(m_pScene.createNode("Shape"));
Shape233->setUSE("HAnimJointShape");
Transform232->addChild(*Shape233);

Transform231->addChildren(*Transform232);

HAnimSegment230->addChildren(*Transform231);

CShape* Shape234 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet235 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet235->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA236 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA236->setUSE("HAnimSegmentLineColorRGBA");
LineSet235->setColor(*ColorRGBA236);

CCoordinate* Coordinate237 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate237->setPoint(new float[6]{3.6105,0.033,1.4168,3.5555,0.0232,2.2895});
LineSet235->setCoord(*Coordinate237);

Shape234->setGeometry(LineSet235);

HAnimSegment230->addChildren(*Shape234);

HAnimJoint229->addChildren(*HAnimSegment230);

CHAnimJoint* HAnimJoint238 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint238->setDEF("hanim_l_tarsometatarsal_2");
HAnimJoint238->setName("l_tarsometatarsal_2");
HAnimJoint238->setCenter(new float[3]{3.5555,0.0232,2.2895});
CHAnimSegment* HAnimSegment239 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment239->setDEF("hanim_l_metatarsal_2");
HAnimSegment239->setName("l_metatarsal_2");
CTransform* Transform240 = (CTransform *)(m_pScene.createNode("Transform"));
Transform240->setTranslation(new float[3]{3.5555,0.0232,2.2895});
CTransform* Transform241 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape242 = (CShape *)(m_pScene.createNode("Shape"));
Shape242->setUSE("HAnimJointShape");
Transform241->addChild(*Shape242);

Transform240->addChildren(*Transform241);

HAnimSegment239->addChildren(*Transform240);

CShape* Shape243 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet244 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet244->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA245 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA245->setUSE("HAnimSegmentLineColorRGBA");
LineSet244->setColor(*ColorRGBA245);

CCoordinate* Coordinate246 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate246->setPoint(new float[6]{3.5555,0.0232,2.2895,3.6595,0.0085,4.8125});
LineSet244->setCoord(*Coordinate246);

Shape243->setGeometry(LineSet244);

HAnimSegment239->addChildren(*Shape243);

HAnimJoint238->addChildren(*HAnimSegment239);

CHAnimJoint* HAnimJoint247 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint247->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint247->setName("l_metatarsophalangeal_2");
HAnimJoint247->setCenter(new float[3]{3.6595,0.0085,4.8125});
CHAnimSegment* HAnimSegment248 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment248->setDEF("hanim_l_tarsal_proximal_phalanx_2");
HAnimSegment248->setName("l_tarsal_proximal_phalanx_2");
CTransform* Transform249 = (CTransform *)(m_pScene.createNode("Transform"));
Transform249->setTranslation(new float[3]{3.6595,0.0085,4.8125});
CTransform* Transform250 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape251 = (CShape *)(m_pScene.createNode("Shape"));
Shape251->setUSE("HAnimJointShape");
Transform250->addChild(*Shape251);

Transform249->addChildren(*Transform250);

HAnimSegment248->addChildren(*Transform249);

CShape* Shape252 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet253 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet253->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA254 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA254->setUSE("HAnimSegmentLineColorRGBA");
LineSet253->setColor(*ColorRGBA254);

CCoordinate* Coordinate255 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate255->setPoint(new float[6]{3.6595,0.0085,4.8125,3.7385,0.0054,5.5315});
LineSet253->setCoord(*Coordinate255);

Shape252->setGeometry(LineSet253);

HAnimSegment248->addChildren(*Shape252);

HAnimJoint247->addChildren(*HAnimSegment248);

CHAnimJoint* HAnimJoint256 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint256->setDEF("hanim_l_tarsal_proximal_interphalangeal_1");
HAnimJoint256->setName("l_tarsal_proximal_interphalangeal_2");
HAnimJoint256->setCenter(new float[3]{3.7385,0.0054,5.5315});
CHAnimSegment* HAnimSegment257 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment257->setDEF("hanim_l_tarsal_middle_phalanx_1");
HAnimSegment257->setName("l_tarsal_middle_phalanx_2");
CTransform* Transform258 = (CTransform *)(m_pScene.createNode("Transform"));
Transform258->setTranslation(new float[3]{3.7385,0.0054,5.5315});
CTransform* Transform259 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape260 = (CShape *)(m_pScene.createNode("Shape"));
Shape260->setUSE("HAnimJointShape");
Transform259->addChild(*Shape260);

Transform258->addChildren(*Transform259);

HAnimSegment257->addChildren(*Transform258);

CShape* Shape261 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet262 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet262->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA263 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA263->setUSE("HAnimSegmentLineColorRGBA");
LineSet262->setColor(*ColorRGBA263);

CCoordinate* Coordinate264 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate264->setPoint(new float[6]{3.7385,0.0054,5.5315,3.7385,0.0017,5.9505});
LineSet262->setCoord(*Coordinate264);

Shape261->setGeometry(LineSet262);

HAnimSegment257->addChildren(*Shape261);

CHAnimSite* HAnimSite265 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite265->setDEF("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimSite265->setName("l_tarsal_distal_phalanx_2_tip");
HAnimSite265->setTranslation(new float[3]{0.1195,0.0079,0.1433});
CTouchSensor* TouchSensor266 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor266->setDescription("HAnimSite l_tarsal_distal_phalanx_2_tip");
HAnimSite265->addChildren(*TouchSensor266);

CShape* Shape267 = (CShape *)(m_pScene.createNode("Shape"));
Shape267->setUSE("HAnimSiteShape");
HAnimSite265->addChildren(*Shape267);

HAnimSegment257->addChildren(*HAnimSite265);

HAnimJoint256->addChildren(*HAnimSegment257);

CHAnimJoint* HAnimJoint268 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint268->setDEF("hanim_l_tarsal_distal_interphalangeal_1");
HAnimJoint268->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint268->setCenter(new float[3]{3.7385,0.0017,5.9505});
HAnimJoint256->addChildren(*HAnimJoint268);

HAnimJoint247->addChildren(*HAnimJoint256);

HAnimJoint238->addChildren(*HAnimJoint247);

HAnimJoint229->addChildren(*HAnimJoint238);

HAnimJoint178->addChildren(*HAnimJoint229);

CHAnimJoint* HAnimJoint269 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint269->setDEF("hanim_l_cuneonavicular_3");
HAnimJoint269->setName("l_cuneonavicular_3");
HAnimJoint269->setCenter(new float[3]{4.1235,0.0328,1.3453});
CHAnimSegment* HAnimSegment270 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment270->setDEF("hanim_l_cuneiform_3");
HAnimSegment270->setName("l_cuneiform_3");
CTransform* Transform271 = (CTransform *)(m_pScene.createNode("Transform"));
Transform271->setTranslation(new float[3]{4.1235,0.0328,1.3453});
CTransform* Transform272 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape273 = (CShape *)(m_pScene.createNode("Shape"));
Shape273->setUSE("HAnimJointShape");
Transform272->addChild(*Shape273);

Transform271->addChildren(*Transform272);

HAnimSegment270->addChildren(*Transform271);

CShape* Shape274 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet275 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet275->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA276 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA276->setUSE("HAnimSegmentLineColorRGBA");
LineSet275->setColor(*ColorRGBA276);

CCoordinate* Coordinate277 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate277->setPoint(new float[6]{4.1235,0.0328,1.3453,3.7385,0.0017,5.9505});
LineSet275->setCoord(*Coordinate277);

Shape274->setGeometry(LineSet275);

HAnimSegment270->addChildren(*Shape274);

HAnimJoint269->addChildren(*HAnimSegment270);

CHAnimJoint* HAnimJoint278 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint278->setDEF("hanim_l_tarsometatarsal_3 ");
HAnimJoint278->setName("l_tarsometatarsal_3 ");
CHAnimSegment* HAnimSegment279 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment279->setDEF("hanim_l_metatarsal_3");
HAnimSegment279->setName("l_metatarsal_3");
CTransform* Transform280 = (CTransform *)(m_pScene.createNode("Transform"));
Transform280->setTranslation(new float[3]{4.1235,0.0328,1.3453});
CTransform* Transform281 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape282 = (CShape *)(m_pScene.createNode("Shape"));
Shape282->setUSE("HAnimJointShape");
Transform281->addChild(*Shape282);

Transform280->addChildren(*Transform281);

HAnimSegment279->addChildren(*Transform280);

CShape* Shape283 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet284 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet284->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA285 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA285->setUSE("HAnimSegmentLineColorRGBA");
LineSet284->setColor(*ColorRGBA285);

CCoordinate* Coordinate286 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate286->setPoint(new float[3]{4.2795,0.0086,4.7055});
LineSet284->setCoord(*Coordinate286);

Shape283->setGeometry(LineSet284);

HAnimSegment279->addChildren(*Shape283);

HAnimJoint278->addChildren(*HAnimSegment279);

CHAnimJoint* HAnimJoint287 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint287->setDEF("hanim_l_metatarsophalangeal_3");
HAnimJoint287->setName("l_metatarsophalangeal_3");
HAnimJoint287->setCenter(new float[3]{4.2795,0.0086,4.7055});
CHAnimSegment* HAnimSegment288 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment288->setDEF("hanim_l_tarsal_proximal_phalanx_3");
HAnimSegment288->setName("l_tarsal_proximal_phalanx_3");
CTransform* Transform289 = (CTransform *)(m_pScene.createNode("Transform"));
Transform289->setTranslation(new float[3]{4.2795,0.0086,4.7055});
CTransform* Transform290 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape291 = (CShape *)(m_pScene.createNode("Shape"));
Shape291->setUSE("HAnimJointShape");
Transform290->addChild(*Shape291);

Transform289->addChildren(*Transform290);

HAnimSegment288->addChildren(*Transform289);

CShape* Shape292 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet293 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet293->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA294 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA294->setUSE("HAnimSegmentLineColorRGBA");
LineSet293->setColor(*ColorRGBA294);

CCoordinate* Coordinate295 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate295->setPoint(new float[6]{4.2795,0.0086,4.7055,4.3855,0.0044,5.3745});
LineSet293->setCoord(*Coordinate295);

Shape292->setGeometry(LineSet293);

HAnimSegment288->addChildren(*Shape292);

HAnimJoint287->addChildren(*HAnimSegment288);

CHAnimJoint* HAnimJoint296 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint296->setDEF("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimJoint296->setName("l_tarsal_proximal_interphalangeal_3");
HAnimJoint296->setCenter(new float[3]{4.3855,0.0044,5.3745});
CHAnimSegment* HAnimSegment297 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment297->setDEF("hanim_l_tarsal_middle_phalanx_2");
HAnimSegment297->setName("l_tarsal_middle_phalanx_3");
CTransform* Transform298 = (CTransform *)(m_pScene.createNode("Transform"));
Transform298->setTranslation(new float[3]{4.3855,0.0044,5.3745});
CTransform* Transform299 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape300 = (CShape *)(m_pScene.createNode("Shape"));
Shape300->setUSE("HAnimJointShape");
Transform299->addChild(*Shape300);

Transform298->addChildren(*Transform299);

HAnimSegment297->addChildren(*Transform298);

CShape* Shape301 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet302 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet302->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA303 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA303->setUSE("HAnimSegmentLineColorRGBA");
LineSet302->setColor(*ColorRGBA303);

CCoordinate* Coordinate304 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate304->setPoint(new float[6]{4.3855,0.0044,5.3745,4.4545,0.0017,5.7845});
LineSet302->setCoord(*Coordinate304);

Shape301->setGeometry(LineSet302);

HAnimSegment297->addChildren(*Shape301);

CHAnimSite* HAnimSite305 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite305->setDEF("hanim_l_tarsal_distal_phalanx_3_tip");
HAnimSite305->setName("l_tarsal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor306 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor306->setDescription("HAnimSite l_tarsal_distal_phalanx_3_tip");
HAnimSite305->addChildren(*TouchSensor306);

CShape* Shape307 = (CShape *)(m_pScene.createNode("Shape"));
Shape307->setUSE("HAnimSiteShape");
HAnimSite305->addChildren(*Shape307);

HAnimSegment297->addChildren(*HAnimSite305);

HAnimJoint296->addChildren(*HAnimSegment297);

CHAnimJoint* HAnimJoint308 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint308->setDEF("hanim_l_tarsal_distal_interphalangeal_2");
HAnimJoint308->setName("l_tarsal_distal_interphalangeal_3");
HAnimJoint308->setCenter(new float[3]{4.4545,0.0017,5.7845});
HAnimJoint296->addChildren(*HAnimJoint308);

HAnimJoint287->addChildren(*HAnimJoint296);

HAnimJoint278->addChildren(*HAnimJoint287);

HAnimJoint269->addChildren(*HAnimJoint278);

HAnimJoint178->addChildren(*HAnimJoint269);

HAnimJoint165->addChildren(*HAnimJoint178);

CHAnimJoint* HAnimJoint309 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint309->setDEF("hanim_l_calcaneocuboid");
HAnimJoint309->setName("l_calcaneocuboid");
HAnimJoint309->setCenter(new float[3]{3.9515,0.0653,-0.6895});
CHAnimSegment* HAnimSegment310 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment310->setDEF("hanim_l_calcaneus");
HAnimSegment310->setName("l_calcaneus");
CTransform* Transform311 = (CTransform *)(m_pScene.createNode("Transform"));
Transform311->setTranslation(new float[3]{3.9515,0.0653,-0.6895});
CTransform* Transform312 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape313 = (CShape *)(m_pScene.createNode("Shape"));
Shape313->setUSE("HAnimJointShape");
Transform312->addChild(*Shape313);

Transform311->addChildren(*Transform312);

HAnimSegment310->addChildren(*Transform311);

CShape* Shape314 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet315 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet315->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA316 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA316->setUSE("HAnimSegmentLineColorRGBA");
LineSet315->setColor(*ColorRGBA316);

CCoordinate* Coordinate317 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate317->setPoint(new float[6]{3.9515,0.0653,-0.6895,4.9085,0.0353,0.5574});
LineSet315->setCoord(*Coordinate317);

Shape314->setGeometry(LineSet315);

HAnimSegment310->addChildren(*Shape314);

HAnimJoint309->addChildren(*HAnimSegment310);

CHAnimJoint* HAnimJoint318 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint318->setDEF("hanim_l_transversetarsal");
HAnimJoint318->setName("l_transversetarsal");
HAnimJoint318->setCenter(new float[3]{4.9085,0.0353,0.5574});
CHAnimSegment* HAnimSegment319 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment319->setDEF("hanim_l_cuboid");
HAnimSegment319->setName("l_cuboid");
CTransform* Transform320 = (CTransform *)(m_pScene.createNode("Transform"));
Transform320->setTranslation(new float[3]{4.9085,0.0353,0.5574});
CTransform* Transform321 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape322 = (CShape *)(m_pScene.createNode("Shape"));
Shape322->setUSE("HAnimJointShape");
Transform321->addChild(*Shape322);

Transform320->addChildren(*Transform321);

HAnimSegment319->addChildren(*Transform320);

CShape* Shape323 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet324 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet324->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA325 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA325->setUSE("HAnimSegmentLineColorRGBA");
LineSet324->setColor(*ColorRGBA325);

CCoordinate* Coordinate326 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate326->setPoint(new float[6]{4.9085,0.0353,0.5574,4.7245,0.0211,2.1725});
LineSet324->setCoord(*Coordinate326);

Shape323->setGeometry(LineSet324);

HAnimSegment319->addChildren(*Shape323);

CShape* Shape327 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet328 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet328->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA329 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA329->setUSE("HAnimSegmentLineColorRGBA");
LineSet328->setColor(*ColorRGBA329);

CCoordinate* Coordinate330 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate330->setPoint(new float[6]{4.9085,0.0353,0.5574,5.3615,0.0164,2.0085});
LineSet328->setCoord(*Coordinate330);

Shape327->setGeometry(LineSet328);

HAnimSegment319->addChildren(*Shape327);

HAnimJoint318->addChildren(*HAnimSegment319);

CHAnimJoint* HAnimJoint331 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint331->setDEF("hanim_l_tarsometatarsal_3");
HAnimJoint331->setName("l_tarsometatarsal_4");
HAnimJoint331->setCenter(new float[3]{4.7245,0.0211,2.1725});
CHAnimSegment* HAnimSegment332 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment332->setDEF("hanim_l_metatarsal_4");
HAnimSegment332->setName("l_metatarsal_4");
CTransform* Transform333 = (CTransform *)(m_pScene.createNode("Transform"));
Transform333->setTranslation(new float[3]{4.7245,0.0211,2.1725});
CTransform* Transform334 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape335 = (CShape *)(m_pScene.createNode("Shape"));
Shape335->setUSE("HAnimJointShape");
Transform334->addChild(*Shape335);

Transform333->addChildren(*Transform334);

HAnimSegment332->addChildren(*Transform333);

CShape* Shape336 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet337 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet337->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA338 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA338->setUSE("HAnimSegmentLineColorRGBA");
LineSet337->setColor(*ColorRGBA338);

CCoordinate* Coordinate339 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate339->setPoint(new float[6]{4.7245,0.0211,2.1725,4.8745,0.0076,4.5165});
LineSet337->setCoord(*Coordinate339);

Shape336->setGeometry(LineSet337);

HAnimSegment332->addChildren(*Shape336);

HAnimJoint331->addChildren(*HAnimSegment332);

CHAnimJoint* HAnimJoint340 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint340->setDEF("hanim_l_metatarsophalangeal_4");
HAnimJoint340->setName("l_metatarsophalangeal_4");
HAnimJoint340->setCenter(new float[3]{4.8745,0.0076,4.5165});
CHAnimSegment* HAnimSegment341 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment341->setDEF("hanim_l_tarsal_proximal_phalanx_4");
HAnimSegment341->setName("l_tarsal_proximal_phalanx_4");
CTransform* Transform342 = (CTransform *)(m_pScene.createNode("Transform"));
Transform342->setTranslation(new float[3]{4.8745,0.0076,4.5165});
CTransform* Transform343 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape344 = (CShape *)(m_pScene.createNode("Shape"));
Shape344->setUSE("HAnimJointShape");
Transform343->addChild(*Shape344);

Transform342->addChildren(*Transform343);

HAnimSegment341->addChildren(*Transform342);

CShape* Shape345 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet346 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet346->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA347 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA347->setUSE("HAnimSegmentLineColorRGBA");
LineSet346->setColor(*ColorRGBA347);

CCoordinate* Coordinate348 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate348->setPoint(new float[6]{4.8745,0.0076,4.5165,5.0655,0.0049,5.1895});
LineSet346->setCoord(*Coordinate348);

Shape345->setGeometry(LineSet346);

HAnimSegment341->addChildren(*Shape345);

HAnimJoint340->addChildren(*HAnimSegment341);

CHAnimJoint* HAnimJoint349 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint349->setDEF("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimJoint349->setName("l_tarsal_proximal_interphalangeal_4");
HAnimJoint349->setCenter(new float[3]{5.0655,0.0049,5.1895});
CHAnimSegment* HAnimSegment350 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment350->setDEF("hanim_l_tarsal_middle_phalanx_3");
HAnimSegment350->setName("l_tarsal_middle_phalanx_4");
CTransform* Transform351 = (CTransform *)(m_pScene.createNode("Transform"));
Transform351->setTranslation(new float[3]{5.0655,0.0049,5.1895});
CTransform* Transform352 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape353 = (CShape *)(m_pScene.createNode("Shape"));
Shape353->setUSE("HAnimJointShape");
Transform352->addChild(*Shape353);

Transform351->addChildren(*Transform352);

HAnimSegment350->addChildren(*Transform351);

CShape* Shape354 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet355 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet355->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA356 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA356->setUSE("HAnimSegmentLineColorRGBA");
LineSet355->setColor(*ColorRGBA356);

CCoordinate* Coordinate357 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate357->setPoint(new float[6]{5.0655,0.0049,5.1895,5.1325,0.0011,5.5175});
LineSet355->setCoord(*Coordinate357);

Shape354->setGeometry(LineSet355);

HAnimSegment350->addChildren(*Shape354);

CHAnimSite* HAnimSite358 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite358->setDEF("hanim_l_tarsal_distal_phalanx_4_tip");
HAnimSite358->setName("l_tarsal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor359 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor359->setDescription("HAnimSite l_tarsal_distal_phalanx_4_tip");
HAnimSite358->addChildren(*TouchSensor359);

CShape* Shape360 = (CShape *)(m_pScene.createNode("Shape"));
Shape360->setUSE("HAnimSiteShape");
HAnimSite358->addChildren(*Shape360);

HAnimSegment350->addChildren(*HAnimSite358);

HAnimJoint349->addChildren(*HAnimSegment350);

CHAnimJoint* HAnimJoint361 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint361->setDEF("hanim_l_tarsal_distal_interphalangeal_3");
HAnimJoint361->setName("l_tarsal_distal_interphalangeal_4");
HAnimJoint361->setCenter(new float[3]{5.1325,0.0011,5.5175});
HAnimJoint349->addChildren(*HAnimJoint361);

HAnimJoint340->addChildren(*HAnimJoint349);

HAnimJoint331->addChildren(*HAnimJoint340);

HAnimJoint318->addChildren(*HAnimJoint331);

CHAnimJoint* HAnimJoint362 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint362->setDEF("hanim_l_tarsometatarsal_4");
HAnimJoint362->setName("l_tarsometatarsal_5");
HAnimJoint362->setCenter(new float[3]{5.3615,0.0164,2.0085});
CHAnimSegment* HAnimSegment363 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment363->setDEF("hanim_l_metatarsal_5");
HAnimSegment363->setName("l_metatarsal_5");
CTransform* Transform364 = (CTransform *)(m_pScene.createNode("Transform"));
Transform364->setTranslation(new float[3]{5.3615,0.0164,2.0085});
CTransform* Transform365 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape366 = (CShape *)(m_pScene.createNode("Shape"));
Shape366->setUSE("HAnimJointShape");
Transform365->addChild(*Shape366);

Transform364->addChildren(*Transform365);

HAnimSegment363->addChildren(*Transform364);

CShape* Shape367 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet368 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet368->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA369 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA369->setUSE("HAnimSegmentLineColorRGBA");
LineSet368->setColor(*ColorRGBA369);

CCoordinate* Coordinate370 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate370->setPoint(new float[6]{5.3615,0.0164,2.0085,5.5055,0.0067,4.3115});
LineSet368->setCoord(*Coordinate370);

Shape367->setGeometry(LineSet368);

HAnimSegment363->addChildren(*Shape367);

CHAnimSite* HAnimSite371 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite371->setDEF("hanim_l_metatarsal_phalanx_5_pt");
HAnimSite371->setName("l_metatarsal_phalanx_5_pt");
CTouchSensor* TouchSensor372 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor372->setDescription("HAnimSite l_metatarsal_phalanx_5_pt");
HAnimSite371->addChildren(*TouchSensor372);

CShape* Shape373 = (CShape *)(m_pScene.createNode("Shape"));
Shape373->setUSE("HAnimSiteShape");
HAnimSite371->addChildren(*Shape373);

HAnimSegment363->addChildren(*HAnimSite371);

HAnimJoint362->addChildren(*HAnimSegment363);

CHAnimJoint* HAnimJoint374 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint374->setDEF("hanim_l_metatarsophalangeal_5");
HAnimJoint374->setName("l_metatarsophalangeal_5");
HAnimJoint374->setCenter(new float[3]{5.5055,0.0067,4.3115});
CHAnimSegment* HAnimSegment375 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment375->setDEF("hanim_l_tarsal_proximal_phalanx_5");
HAnimSegment375->setName("l_tarsal_proximal_phalanx_5");
CTransform* Transform376 = (CTransform *)(m_pScene.createNode("Transform"));
Transform376->setTranslation(new float[3]{5.5055,0.0067,4.3115});
CTransform* Transform377 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape378 = (CShape *)(m_pScene.createNode("Shape"));
Shape378->setUSE("HAnimJointShape");
Transform377->addChild(*Shape378);

Transform376->addChildren(*Transform377);

HAnimSegment375->addChildren(*Transform376);

CShape* Shape379 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet380 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet380->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA381 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA381->setUSE("HAnimSegmentLineColorRGBA");
LineSet380->setColor(*ColorRGBA381);

CCoordinate* Coordinate382 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate382->setPoint(new float[6]{5.5055,0.0067,4.3115,5.6085,0.003,4.6485});
LineSet380->setCoord(*Coordinate382);

Shape379->setGeometry(LineSet380);

HAnimSegment375->addChildren(*Shape379);

HAnimJoint374->addChildren(*HAnimSegment375);

CHAnimJoint* HAnimJoint383 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint383->setDEF("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimJoint383->setName("l_tarsal_proximal_interphalangeal_5");
HAnimJoint383->setCenter(new float[3]{5.6085,0.003,4.6485});
CHAnimSegment* HAnimSegment384 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment384->setDEF("hanim_l_tarsal_middle_phalanx_4");
HAnimSegment384->setName("l_tarsal_middle_phalanx_5");
CTransform* Transform385 = (CTransform *)(m_pScene.createNode("Transform"));
Transform385->setTranslation(new float[3]{5.6085,0.003,4.6485});
CTransform* Transform386 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape387 = (CShape *)(m_pScene.createNode("Shape"));
Shape387->setUSE("HAnimJointShape");
Transform386->addChild(*Shape387);

Transform385->addChildren(*Transform386);

HAnimSegment384->addChildren(*Transform385);

CShape* Shape388 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet389 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet389->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA390 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA390->setUSE("HAnimSegmentLineColorRGBA");
LineSet389->setColor(*ColorRGBA390);

CCoordinate* Coordinate391 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate391->setPoint(new float[6]{5.6085,0.003,4.6485,5.6485,0,4.9925});
LineSet389->setCoord(*Coordinate391);

Shape388->setGeometry(LineSet389);

HAnimSegment384->addChildren(*Shape388);

CHAnimSite* HAnimSite392 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite392->setDEF("hanim_l_tarsal_distal_phalanx_5_tip");
HAnimSite392->setName("l_tarsal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor393 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor393->setDescription("HAnimSite l_tarsal_distal_phalanx_5_tip");
HAnimSite392->addChildren(*TouchSensor393);

CShape* Shape394 = (CShape *)(m_pScene.createNode("Shape"));
Shape394->setUSE("HAnimSiteShape");
HAnimSite392->addChildren(*Shape394);

HAnimSegment384->addChildren(*HAnimSite392);

HAnimJoint383->addChildren(*HAnimSegment384);

CHAnimJoint* HAnimJoint395 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint395->setDEF("hanim_l_tarsal_distal_interphalangeal_4");
HAnimJoint395->setName("l_tarsal_distal_interphalangeal_5");
HAnimJoint395->setCenter(new float[3]{5.6485,0,4.9925});
HAnimJoint383->addChildren(*HAnimJoint395);

HAnimJoint374->addChildren(*HAnimJoint383);

HAnimJoint362->addChildren(*HAnimJoint374);

HAnimJoint318->addChildren(*HAnimJoint362);

HAnimJoint309->addChildren(*HAnimJoint318);

HAnimJoint165->addChildren(*HAnimJoint309);

HAnimJoint150->addChildren(*HAnimJoint165);

HAnimJoint132->addChildren(*HAnimJoint150);

HAnimJoint95->addChildren(*HAnimJoint132);

CHAnimJoint* HAnimJoint396 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint396->setDEF("hanim_r_hip");
HAnimJoint396->setName("r_hip");
HAnimJoint396->setCenter(new float[3]{-0.095,0.9171,0.0029});
CHAnimSegment* HAnimSegment397 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment397->setDEF("hanim_r_thigh");
HAnimSegment397->setName("r_thigh");
CTransform* Transform398 = (CTransform *)(m_pScene.createNode("Transform"));
Transform398->setTranslation(new float[3]{-0.095,0.9171,0.0029});
CTransform* Transform399 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape400 = (CShape *)(m_pScene.createNode("Shape"));
Shape400->setUSE("HAnimJointShape");
Transform399->addChild(*Shape400);

Transform398->addChildren(*Transform399);

HAnimSegment397->addChildren(*Transform398);

CShape* Shape401 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet402 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet402->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA403 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA403->setUSE("HAnimSegmentLineColorRGBA");
LineSet402->setColor(*ColorRGBA403);

CCoordinate* Coordinate404 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate404->setPoint(new float[6]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318});
LineSet402->setCoord(*Coordinate404);

Shape401->setGeometry(LineSet402);

HAnimSegment397->addChildren(*Shape401);

CHAnimSite* HAnimSite405 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite405->setDEF("hanim_r_lateral_malleolus_pt");
HAnimSite405->setName("r_lateral_malleolus_pt");
HAnimSite405->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
CTouchSensor* TouchSensor406 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor406->setDescription("HAnimSite r_lateral_malleolus_pt");
HAnimSite405->addChildren(*TouchSensor406);

CShape* Shape407 = (CShape *)(m_pScene.createNode("Shape"));
Shape407->setUSE("HAnimSiteShape");
HAnimSite405->addChildren(*Shape407);

HAnimSegment397->addChildren(*HAnimSite405);

CHAnimSite* HAnimSite408 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite408->setDEF("hanim_r_medial_malleolus_pt");
HAnimSite408->setName("r_medial_malleolus_pt");
HAnimSite408->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
CTouchSensor* TouchSensor409 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor409->setDescription("HAnimSite r_medial_malleolus_pt");
HAnimSite408->addChildren(*TouchSensor409);

CShape* Shape410 = (CShape *)(m_pScene.createNode("Shape"));
Shape410->setUSE("HAnimSiteShape");
HAnimSite408->addChildren(*Shape410);

HAnimSegment397->addChildren(*HAnimSite408);

CHAnimSite* HAnimSite411 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite411->setDEF("hanim_r_tibiale_pt");
HAnimSite411->setName("r_tibiale_pt");
CTouchSensor* TouchSensor412 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor412->setDescription("HAnimSite r_tibiale_pt");
HAnimSite411->addChildren(*TouchSensor412);

CShape* Shape413 = (CShape *)(m_pScene.createNode("Shape"));
Shape413->setUSE("HAnimSiteShape");
HAnimSite411->addChildren(*Shape413);

HAnimSegment397->addChildren(*HAnimSite411);

HAnimJoint396->addChildren(*HAnimSegment397);

CHAnimJoint* HAnimJoint414 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint414->setDEF("hanim_r_knee");
HAnimJoint414->setName("r_knee");
HAnimJoint414->setCenter(new float[3]{-0.0867,0.4913,0.0318});
CHAnimSegment* HAnimSegment415 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment415->setDEF("hanim_r_calf");
HAnimSegment415->setName("r_calf");
CTransform* Transform416 = (CTransform *)(m_pScene.createNode("Transform"));
Transform416->setTranslation(new float[3]{-0.0867,0.4913,0.0318});
CTransform* Transform417 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape418 = (CShape *)(m_pScene.createNode("Shape"));
Shape418->setUSE("HAnimJointShape");
Transform417->addChild(*Shape418);

Transform416->addChildren(*Transform417);

HAnimSegment415->addChildren(*Transform416);

CShape* Shape419 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet420 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet420->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA421 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA421->setUSE("HAnimSegmentLineColorRGBA");
LineSet420->setColor(*ColorRGBA421);

CCoordinate* Coordinate422 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate422->setPoint(new float[6]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766});
LineSet420->setCoord(*Coordinate422);

Shape419->setGeometry(LineSet420);

HAnimSegment415->addChildren(*Shape419);

CHAnimSite* HAnimSite423 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite423->setDEF("hanim_r_calcaneus_posterior_pt");
HAnimSite423->setName("r_calcaneus_posterior_pt");
HAnimSite423->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
CTouchSensor* TouchSensor424 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor424->setDescription("HAnimSite r_calcaneus_posterior_pt");
HAnimSite423->addChildren(*TouchSensor424);

CShape* Shape425 = (CShape *)(m_pScene.createNode("Shape"));
Shape425->setUSE("HAnimSiteShape");
HAnimSite423->addChildren(*Shape425);

HAnimSegment415->addChildren(*HAnimSite423);

CHAnimSite* HAnimSite426 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite426->setDEF("hanim_r_sphyrion_pt");
HAnimSite426->setName("r_sphyrion_pt");
HAnimSite426->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
CTouchSensor* TouchSensor427 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor427->setDescription("HAnimSite r_sphyrion_pt");
HAnimSite426->addChildren(*TouchSensor427);

CShape* Shape428 = (CShape *)(m_pScene.createNode("Shape"));
Shape428->setUSE("HAnimSiteShape");
HAnimSite426->addChildren(*Shape428);

HAnimSegment415->addChildren(*HAnimSite426);

HAnimJoint414->addChildren(*HAnimSegment415);

CHAnimJoint* HAnimJoint429 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint429->setDEF("hanim_r_talocrural");
HAnimJoint429->setName("r_talocrural");
HAnimJoint429->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
CHAnimSegment* HAnimSegment430 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment430->setDEF("hanim_r_talus");
HAnimSegment430->setName("r_talus");
CTransform* Transform431 = (CTransform *)(m_pScene.createNode("Transform"));
Transform431->setTranslation(new float[3]{-0.05,0.06,-0.025});
Transform431->setRotation(new float[4]{1,0,0,-1.57});
Transform431->setScale(new float[3]{0.15,0.15,0.15});
CTransform* Transform432 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape433 = (CShape *)(m_pScene.createNode("Shape"));
Shape433->setUSE("HAnimJointShape");
Transform432->addChild(*Shape433);

Transform431->addChildren(*Transform432);

HAnimSegment430->addChildren(*Transform431);

CShape* Shape434 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet435 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet435->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA436 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA436->setUSE("HAnimSegmentLineColorRGBA");
LineSet435->setColor(*ColorRGBA436);

CCoordinate* Coordinate437 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate437->setPoint(new float[6]{-0.0801,0.0712,-0.0766,-3.4725,0.0374,0.6807});
LineSet435->setCoord(*Coordinate437);

Shape434->setGeometry(LineSet435);

HAnimSegment430->addChildren(*Shape434);

CShape* Shape438 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet439 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet439->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA440 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA440->setUSE("HAnimSegmentLineColorRGBA");
LineSet439->setColor(*ColorRGBA440);

CCoordinate* Coordinate441 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate441->setPoint(new float[6]{-0.0801,0.0712,-0.0766,-3.9515,0.0653,-0.6895});
LineSet439->setCoord(*Coordinate441);

Shape438->setGeometry(LineSet439);

HAnimSegment430->addChildren(*Shape438);

HAnimJoint429->addChildren(*HAnimSegment430);

CHAnimJoint* HAnimJoint442 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint442->setDEF("hanim_r_talocalcaneonavicular");
HAnimJoint442->setName("r_talocalcaneonavicular");
HAnimJoint442->setCenter(new float[3]{-3.4725,0.0374,0.6807});
CHAnimSegment* HAnimSegment443 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment443->setDEF("hanim_r_navicular");
HAnimSegment443->setName("r_navicular");
CTransform* Transform444 = (CTransform *)(m_pScene.createNode("Transform"));
Transform444->setTranslation(new float[3]{-3.4725,0.0374,0.6807});
CTransform* Transform445 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape446 = (CShape *)(m_pScene.createNode("Shape"));
Shape446->setUSE("HAnimJointShape");
Transform445->addChild(*Shape446);

Transform444->addChildren(*Transform445);

HAnimSegment443->addChildren(*Transform444);

CShape* Shape447 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet448 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet448->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA449 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA449->setUSE("HAnimSegmentLineColorRGBA");
LineSet448->setColor(*ColorRGBA449);

CCoordinate* Coordinate450 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate450->setPoint(new float[6]{-3.4725,0.0374,0.6807,-2.9855,0.0311,1.2819});
LineSet448->setCoord(*Coordinate450);

Shape447->setGeometry(LineSet448);

HAnimSegment443->addChildren(*Shape447);

CShape* Shape451 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet452 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet452->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA453 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA453->setUSE("HAnimSegmentLineColorRGBA");
LineSet452->setColor(*ColorRGBA453);

CCoordinate* Coordinate454 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate454->setPoint(new float[6]{-3.4725,0.0374,0.6807,-3.6105,0.033,1.4168});
LineSet452->setCoord(*Coordinate454);

Shape451->setGeometry(LineSet452);

HAnimSegment443->addChildren(*Shape451);

CShape* Shape455 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet456 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet456->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA457 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA457->setUSE("HAnimSegmentLineColorRGBA");
LineSet456->setColor(*ColorRGBA457);

CCoordinate* Coordinate458 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate458->setPoint(new float[6]{-3.4725,0.0374,0.6807,-4.1245,0.0328,1.3453});
LineSet456->setCoord(*Coordinate458);

Shape455->setGeometry(LineSet456);

HAnimSegment443->addChildren(*Shape455);

HAnimJoint442->addChildren(*HAnimSegment443);

CHAnimJoint* HAnimJoint459 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint459->setDEF("hanim_r_cuneonavicular_1");
HAnimJoint459->setName("r_cuneonavicular_1");
HAnimJoint459->setCenter(new float[3]{-2.9855,0.0311,1.2819});
CHAnimSegment* HAnimSegment460 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment460->setDEF("hanim_r_cuneiform_1");
HAnimSegment460->setName("r_cuneiform_1");
CTransform* Transform461 = (CTransform *)(m_pScene.createNode("Transform"));
Transform461->setTranslation(new float[3]{-2.9855,0.0311,1.2819});
CTransform* Transform462 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape463 = (CShape *)(m_pScene.createNode("Shape"));
Shape463->setUSE("HAnimJointShape");
Transform462->addChild(*Shape463);

Transform461->addChildren(*Transform462);

HAnimSegment460->addChildren(*Transform461);

CShape* Shape464 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet465 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet465->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA466 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA466->setUSE("HAnimSegmentLineColorRGBA");
LineSet465->setColor(*ColorRGBA466);

CCoordinate* Coordinate467 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate467->setPoint(new float[6]{-2.9855,0.0311,1.2819,-2.8645,0.0194,2.4285});
LineSet465->setCoord(*Coordinate467);

Shape464->setGeometry(LineSet465);

HAnimSegment460->addChildren(*Shape464);

HAnimJoint459->addChildren(*HAnimSegment460);

CHAnimJoint* HAnimJoint468 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint468->setDEF("hanim_r_tarsometatarsal_1");
HAnimJoint468->setName("r_tarsometatarsal_1");
HAnimJoint468->setCenter(new float[3]{-2.8645,0.0194,2.4285});
CHAnimSegment* HAnimSegment469 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment469->setDEF("hanim_r_metatarsal_1");
HAnimSegment469->setName("r_metatarsal_1");
CTransform* Transform470 = (CTransform *)(m_pScene.createNode("Transform"));
Transform470->setTranslation(new float[3]{-2.8645,0.0194,2.4285});
CTransform* Transform471 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape472 = (CShape *)(m_pScene.createNode("Shape"));
Shape472->setUSE("HAnimJointShape");
Transform471->addChild(*Shape472);

Transform470->addChildren(*Transform471);

HAnimSegment469->addChildren(*Transform470);

CShape* Shape473 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet474 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet474->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA475 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA475->setUSE("HAnimSegmentLineColorRGBA");
LineSet474->setColor(*ColorRGBA475);

CCoordinate* Coordinate476 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate476->setPoint(new float[6]{-2.8645,0.0194,2.4285,-2.7535,0.0077,4.6255});
LineSet474->setCoord(*Coordinate476);

Shape473->setGeometry(LineSet474);

HAnimSegment469->addChildren(*Shape473);

CHAnimSite* HAnimSite477 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite477->setDEF("hanim_r_metatarsal_phalanx_1_pt");
HAnimSite477->setName("r_metatarsal_phalanx_1_pt");
CTouchSensor* TouchSensor478 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor478->setDescription("HAnimSite r_metatarsal_phalanx_1_pt");
HAnimSite477->addChildren(*TouchSensor478);

CShape* Shape479 = (CShape *)(m_pScene.createNode("Shape"));
Shape479->setUSE("HAnimSiteShape");
HAnimSite477->addChildren(*Shape479);

HAnimSegment469->addChildren(*HAnimSite477);

HAnimJoint468->addChildren(*HAnimSegment469);

CHAnimJoint* HAnimJoint480 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint480->setDEF("hanim_r_metatarsophalangeal_1");
HAnimJoint480->setName("r_metatarsophalangeal_1");
HAnimJoint480->setCenter(new float[3]{-2.7535,0.0077,4.6255});
CHAnimSegment* HAnimSegment481 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment481->setDEF("hanim_r_tarsal_proximal_phalanx_1");
HAnimSegment481->setName("r_tarsal_proximal_phalanx_1");
CTransform* Transform482 = (CTransform *)(m_pScene.createNode("Transform"));
Transform482->setTranslation(new float[3]{-2.7535,0.0077,4.6255});
CTransform* Transform483 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape484 = (CShape *)(m_pScene.createNode("Shape"));
Shape484->setUSE("HAnimJointShape");
Transform483->addChild(*Shape484);

Transform482->addChildren(*Transform483);

HAnimSegment481->addChildren(*Transform482);

CShape* Shape485 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet486 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet486->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA487 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA487->setUSE("HAnimSegmentLineColorRGBA");
LineSet486->setColor(*ColorRGBA487);

CCoordinate* Coordinate488 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate488->setPoint(new float[6]{-2.7535,0.0077,4.6255,-2.7535,0.0077,4.6255});
LineSet486->setCoord(*Coordinate488);

Shape485->setGeometry(LineSet486);

HAnimSegment481->addChildren(*Shape485);

CHAnimSite* HAnimSite489 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite489->setDEF("hanim_r_tarsal_distal_phalanx_1_tip");
HAnimSite489->setName("r_tarsal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor490 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor490->setDescription("HAnimSite r_tarsal_distal_phalanx_1_tip");
HAnimSite489->addChildren(*TouchSensor490);

CShape* Shape491 = (CShape *)(m_pScene.createNode("Shape"));
Shape491->setUSE("HAnimSiteShape");
HAnimSite489->addChildren(*Shape491);

HAnimSegment481->addChildren(*HAnimSite489);

HAnimJoint480->addChildren(*HAnimSegment481);

CHAnimJoint* HAnimJoint492 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint492->setDEF("hanim_r_tarsal_interphalangeal_1");
HAnimJoint492->setName("r_tarsal_interphalangeal_1");
HAnimJoint480->addChildren(*HAnimJoint492);

HAnimJoint468->addChildren(*HAnimJoint480);

HAnimJoint459->addChildren(*HAnimJoint468);

HAnimJoint442->addChildren(*HAnimJoint459);

CHAnimJoint* HAnimJoint493 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint493->setDEF("hanim_r_cuneonavicular_2");
HAnimJoint493->setName("r_cuneonavicular_2");
HAnimJoint493->setCenter(new float[3]{-3.6105,0.033,1.4168});
CHAnimSegment* HAnimSegment494 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment494->setDEF("hanim_r_cuneiform_2");
HAnimSegment494->setName("r_cuneiform_2");
CTransform* Transform495 = (CTransform *)(m_pScene.createNode("Transform"));
Transform495->setTranslation(new float[3]{-3.6105,0.033,1.4168});
CTransform* Transform496 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape497 = (CShape *)(m_pScene.createNode("Shape"));
Shape497->setUSE("HAnimJointShape");
Transform496->addChild(*Shape497);

Transform495->addChildren(*Transform496);

HAnimSegment494->addChildren(*Transform495);

CShape* Shape498 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet499 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet499->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA500 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA500->setUSE("HAnimSegmentLineColorRGBA");
LineSet499->setColor(*ColorRGBA500);

CCoordinate* Coordinate501 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate501->setPoint(new float[6]{-3.6105,0.033,1.4168,-3.5565,0.0232,2.2895});
LineSet499->setCoord(*Coordinate501);

Shape498->setGeometry(LineSet499);

HAnimSegment494->addChildren(*Shape498);

HAnimJoint493->addChildren(*HAnimSegment494);

CHAnimJoint* HAnimJoint502 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint502->setDEF("hanim_r_tarsometatarsal_2");
HAnimJoint502->setName("r_tarsometatarsal_2");
HAnimJoint502->setCenter(new float[3]{-3.5565,0.0232,2.2895});
CHAnimSegment* HAnimSegment503 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment503->setDEF("hanim_r_metatarsal_2");
HAnimSegment503->setName("r_metatarsal_2");
CTransform* Transform504 = (CTransform *)(m_pScene.createNode("Transform"));
Transform504->setTranslation(new float[3]{-3.5565,0.0232,2.2895});
CTransform* Transform505 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape506 = (CShape *)(m_pScene.createNode("Shape"));
Shape506->setUSE("HAnimJointShape");
Transform505->addChild(*Shape506);

Transform504->addChildren(*Transform505);

HAnimSegment503->addChildren(*Transform504);

CShape* Shape507 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet508 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet508->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA509 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA509->setUSE("HAnimSegmentLineColorRGBA");
LineSet508->setColor(*ColorRGBA509);

CCoordinate* Coordinate510 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate510->setPoint(new float[6]{-3.5565,0.0232,2.2895,-3.6595,0.0085,4.8125});
LineSet508->setCoord(*Coordinate510);

Shape507->setGeometry(LineSet508);

HAnimSegment503->addChildren(*Shape507);

HAnimJoint502->addChildren(*HAnimSegment503);

CHAnimJoint* HAnimJoint511 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint511->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint511->setName("r_metatarsophalangeal_2");
HAnimJoint511->setCenter(new float[3]{-3.6595,0.0085,4.8125});
CHAnimSegment* HAnimSegment512 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment512->setDEF("hanim_r_tarsal_proximal_phalanx_2");
HAnimSegment512->setName("r_tarsal_proximal_phalanx_2");
CTransform* Transform513 = (CTransform *)(m_pScene.createNode("Transform"));
Transform513->setTranslation(new float[3]{-3.6595,0.0085,4.8125});
CTransform* Transform514 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape515 = (CShape *)(m_pScene.createNode("Shape"));
Shape515->setUSE("HAnimJointShape");
Transform514->addChild(*Shape515);

Transform513->addChildren(*Transform514);

HAnimSegment512->addChildren(*Transform513);

CShape* Shape516 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet517 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet517->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA518 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA518->setUSE("HAnimSegmentLineColorRGBA");
LineSet517->setColor(*ColorRGBA518);

CCoordinate* Coordinate519 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate519->setPoint(new float[6]{-3.6595,0.0085,4.8125,-3.7385,0.0054,5.5315});
LineSet517->setCoord(*Coordinate519);

Shape516->setGeometry(LineSet517);

HAnimSegment512->addChildren(*Shape516);

HAnimJoint511->addChildren(*HAnimSegment512);

CHAnimJoint* HAnimJoint520 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint520->setDEF("hanim_r_tarsal_proximal_interphalangeal_1");
HAnimJoint520->setName("r_tarsal_proximal_interphalangeal_2");
HAnimJoint520->setCenter(new float[3]{-3.7385,0.0054,5.5315});
CHAnimSegment* HAnimSegment521 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment521->setDEF("hanim_r_tarsal_middle_phalanx_1");
HAnimSegment521->setName("r_tarsal_middle_phalanx_2");
CTransform* Transform522 = (CTransform *)(m_pScene.createNode("Transform"));
Transform522->setTranslation(new float[3]{-3.7385,0.0054,5.5315});
CTransform* Transform523 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape524 = (CShape *)(m_pScene.createNode("Shape"));
Shape524->setUSE("HAnimJointShape");
Transform523->addChild(*Shape524);

Transform522->addChildren(*Transform523);

HAnimSegment521->addChildren(*Transform522);

CShape* Shape525 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet526 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet526->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA527 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA527->setUSE("HAnimSegmentLineColorRGBA");
LineSet526->setColor(*ColorRGBA527);

CCoordinate* Coordinate528 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate528->setPoint(new float[6]{-3.7385,0.0054,5.5315,-3.7385,0.0017,5.9505});
LineSet526->setCoord(*Coordinate528);

Shape525->setGeometry(LineSet526);

HAnimSegment521->addChildren(*Shape525);

CHAnimSite* HAnimSite529 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite529->setDEF("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimSite529->setName("r_tarsal_distal_phalanx_2_tip");
HAnimSite529->setTranslation(new float[3]{-0.0883,0.0134,0.1383});
CTouchSensor* TouchSensor530 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor530->setDescription("HAnimSite r_tarsal_distal_phalanx_2_tip");
HAnimSite529->addChildren(*TouchSensor530);

CShape* Shape531 = (CShape *)(m_pScene.createNode("Shape"));
Shape531->setUSE("HAnimSiteShape");
HAnimSite529->addChildren(*Shape531);

HAnimSegment521->addChildren(*HAnimSite529);

HAnimJoint520->addChildren(*HAnimSegment521);

CHAnimJoint* HAnimJoint532 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint532->setDEF("hanim_r_tarsal_distal_interphalangeal_1");
HAnimJoint532->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint532->setCenter(new float[3]{-3.7385,0.0017,5.9505});
HAnimJoint520->addChildren(*HAnimJoint532);

HAnimJoint511->addChildren(*HAnimJoint520);

HAnimJoint502->addChildren(*HAnimJoint511);

HAnimJoint493->addChildren(*HAnimJoint502);

HAnimJoint442->addChildren(*HAnimJoint493);

CHAnimJoint* HAnimJoint533 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint533->setDEF("hanim_r_cuneonavicular_3");
HAnimJoint533->setName("r_cuneonavicular_3");
HAnimJoint533->setCenter(new float[3]{-4.1245,0.0328,1.3453});
CHAnimSegment* HAnimSegment534 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment534->setDEF("hanim_r_cuneiform_3");
HAnimSegment534->setName("r_cuneiform_3");
CTransform* Transform535 = (CTransform *)(m_pScene.createNode("Transform"));
Transform535->setTranslation(new float[3]{-4.1245,0.0328,1.3453});
CTransform* Transform536 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape537 = (CShape *)(m_pScene.createNode("Shape"));
Shape537->setUSE("HAnimJointShape");
Transform536->addChild(*Shape537);

Transform535->addChildren(*Transform536);

HAnimSegment534->addChildren(*Transform535);

CShape* Shape538 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet539 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet539->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA540 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA540->setUSE("HAnimSegmentLineColorRGBA");
LineSet539->setColor(*ColorRGBA540);

CCoordinate* Coordinate541 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate541->setPoint(new float[6]{-4.1245,0.0328,1.3453,-3.7385,0.0017,5.9505});
LineSet539->setCoord(*Coordinate541);

Shape538->setGeometry(LineSet539);

HAnimSegment534->addChildren(*Shape538);

HAnimJoint533->addChildren(*HAnimSegment534);

CHAnimJoint* HAnimJoint542 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint542->setDEF("hanim_r_tarsometatarsal_3 ");
HAnimJoint542->setName("r_tarsometatarsal_3 ");
CHAnimSegment* HAnimSegment543 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment543->setDEF("hanim_r_metatarsal_3");
HAnimSegment543->setName("r_metatarsal_3");
CTransform* Transform544 = (CTransform *)(m_pScene.createNode("Transform"));
Transform544->setTranslation(new float[3]{-4.1245,0.0328,1.3453});
CTransform* Transform545 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape546 = (CShape *)(m_pScene.createNode("Shape"));
Shape546->setUSE("HAnimJointShape");
Transform545->addChild(*Shape546);

Transform544->addChildren(*Transform545);

HAnimSegment543->addChildren(*Transform544);

CShape* Shape547 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet548 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet548->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA549 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA549->setUSE("HAnimSegmentLineColorRGBA");
LineSet548->setColor(*ColorRGBA549);

CCoordinate* Coordinate550 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate550->setPoint(new float[3]{-4.2795,0.0086,4.7055});
LineSet548->setCoord(*Coordinate550);

Shape547->setGeometry(LineSet548);

HAnimSegment543->addChildren(*Shape547);

HAnimJoint542->addChildren(*HAnimSegment543);

CHAnimJoint* HAnimJoint551 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint551->setDEF("hanim_r_metatarsophalangeal_3");
HAnimJoint551->setName("r_metatarsophalangeal_3");
HAnimJoint551->setCenter(new float[3]{-4.2795,0.0086,4.7055});
CHAnimSegment* HAnimSegment552 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment552->setDEF("hanim_r_tarsal_proximal_phalanx_3");
HAnimSegment552->setName("r_tarsal_proximal_phalanx_3");
CTransform* Transform553 = (CTransform *)(m_pScene.createNode("Transform"));
Transform553->setTranslation(new float[3]{-4.2795,0.0086,4.7055});
CTransform* Transform554 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape555 = (CShape *)(m_pScene.createNode("Shape"));
Shape555->setUSE("HAnimJointShape");
Transform554->addChild(*Shape555);

Transform553->addChildren(*Transform554);

HAnimSegment552->addChildren(*Transform553);

CShape* Shape556 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet557 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet557->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA558 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA558->setUSE("HAnimSegmentLineColorRGBA");
LineSet557->setColor(*ColorRGBA558);

CCoordinate* Coordinate559 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate559->setPoint(new float[6]{-4.2795,0.0086,4.7055,-4.3865,0.0044,5.3745});
LineSet557->setCoord(*Coordinate559);

Shape556->setGeometry(LineSet557);

HAnimSegment552->addChildren(*Shape556);

HAnimJoint551->addChildren(*HAnimSegment552);

CHAnimJoint* HAnimJoint560 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint560->setDEF("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimJoint560->setName("r_tarsal_proximal_interphalangeal_3");
HAnimJoint560->setCenter(new float[3]{-4.3865,0.0044,5.3745});
CHAnimSegment* HAnimSegment561 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment561->setDEF("hanim_r_tarsal_middle_phalanx_2");
HAnimSegment561->setName("r_tarsal_middle_phalanx_3");
CTransform* Transform562 = (CTransform *)(m_pScene.createNode("Transform"));
Transform562->setTranslation(new float[3]{-4.3865,0.0044,5.3745});
CTransform* Transform563 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape564 = (CShape *)(m_pScene.createNode("Shape"));
Shape564->setUSE("HAnimJointShape");
Transform563->addChild(*Shape564);

Transform562->addChildren(*Transform563);

HAnimSegment561->addChildren(*Transform562);

CShape* Shape565 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet566 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet566->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA567 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA567->setUSE("HAnimSegmentLineColorRGBA");
LineSet566->setColor(*ColorRGBA567);

CCoordinate* Coordinate568 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate568->setPoint(new float[6]{-4.3865,0.0044,5.3745,-4.4545,0.0017,5.7845});
LineSet566->setCoord(*Coordinate568);

Shape565->setGeometry(LineSet566);

HAnimSegment561->addChildren(*Shape565);

CHAnimSite* HAnimSite569 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite569->setDEF("hanim_r_tarsal_distal_phalanx_3_tip");
HAnimSite569->setName("r_tarsal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor570 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor570->setDescription("HAnimSite r_tarsal_distal_phalanx_3_tip");
HAnimSite569->addChildren(*TouchSensor570);

CShape* Shape571 = (CShape *)(m_pScene.createNode("Shape"));
Shape571->setUSE("HAnimSiteShape");
HAnimSite569->addChildren(*Shape571);

HAnimSegment561->addChildren(*HAnimSite569);

HAnimJoint560->addChildren(*HAnimSegment561);

CHAnimJoint* HAnimJoint572 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint572->setDEF("hanim_r_tarsal_distal_interphalangeal_2");
HAnimJoint572->setName("r_tarsal_distal_interphalangeal_3");
HAnimJoint572->setCenter(new float[3]{-4.4545,0.0017,5.7845});
HAnimJoint560->addChildren(*HAnimJoint572);

HAnimJoint551->addChildren(*HAnimJoint560);

HAnimJoint542->addChildren(*HAnimJoint551);

HAnimJoint533->addChildren(*HAnimJoint542);

HAnimJoint442->addChildren(*HAnimJoint533);

HAnimJoint429->addChildren(*HAnimJoint442);

CHAnimJoint* HAnimJoint573 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint573->setDEF("hanim_r_calcaneocuboid");
HAnimJoint573->setName("r_calcaneocuboid");
HAnimJoint573->setCenter(new float[3]{-3.9515,0.0653,-0.6895});
CHAnimSegment* HAnimSegment574 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment574->setDEF("hanim_r_calcaneus");
HAnimSegment574->setName("r_calcaneus");
CTransform* Transform575 = (CTransform *)(m_pScene.createNode("Transform"));
Transform575->setTranslation(new float[3]{-3.9515,0.0653,-0.6895});
CTransform* Transform576 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape577 = (CShape *)(m_pScene.createNode("Shape"));
Shape577->setUSE("HAnimJointShape");
Transform576->addChild(*Shape577);

Transform575->addChildren(*Transform576);

HAnimSegment574->addChildren(*Transform575);

CShape* Shape578 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet579 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet579->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA580 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA580->setUSE("HAnimSegmentLineColorRGBA");
LineSet579->setColor(*ColorRGBA580);

CCoordinate* Coordinate581 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate581->setPoint(new float[6]{-3.9515,0.0653,-0.6895,-4.9095,0.0353,0.5574});
LineSet579->setCoord(*Coordinate581);

Shape578->setGeometry(LineSet579);

HAnimSegment574->addChildren(*Shape578);

HAnimJoint573->addChildren(*HAnimSegment574);

CHAnimJoint* HAnimJoint582 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint582->setDEF("hanim_r_transversetarsal");
HAnimJoint582->setName("r_transversetarsal");
HAnimJoint582->setCenter(new float[3]{-4.9095,0.0353,0.5574});
CHAnimSegment* HAnimSegment583 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment583->setDEF("hanim_r_cuboid");
HAnimSegment583->setName("r_cuboid");
CTransform* Transform584 = (CTransform *)(m_pScene.createNode("Transform"));
Transform584->setTranslation(new float[3]{-4.9095,0.0353,0.5574});
CTransform* Transform585 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape586 = (CShape *)(m_pScene.createNode("Shape"));
Shape586->setUSE("HAnimJointShape");
Transform585->addChild(*Shape586);

Transform584->addChildren(*Transform585);

HAnimSegment583->addChildren(*Transform584);

CShape* Shape587 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet588 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet588->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA589 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA589->setUSE("HAnimSegmentLineColorRGBA");
LineSet588->setColor(*ColorRGBA589);

CCoordinate* Coordinate590 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate590->setPoint(new float[6]{-4.9095,0.0353,0.5574,-4.7255,0.0211,2.1725});
LineSet588->setCoord(*Coordinate590);

Shape587->setGeometry(LineSet588);

HAnimSegment583->addChildren(*Shape587);

CShape* Shape591 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet592 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet592->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA593 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA593->setUSE("HAnimSegmentLineColorRGBA");
LineSet592->setColor(*ColorRGBA593);

CCoordinate* Coordinate594 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate594->setPoint(new float[6]{-4.9095,0.0353,0.5574,-5.3615,0.0164,2.0085});
LineSet592->setCoord(*Coordinate594);

Shape591->setGeometry(LineSet592);

HAnimSegment583->addChildren(*Shape591);

HAnimJoint582->addChildren(*HAnimSegment583);

CHAnimJoint* HAnimJoint595 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint595->setDEF("hanim_r_tarsometatarsal_3");
HAnimJoint595->setName("r_tarsometatarsal_4");
HAnimJoint595->setCenter(new float[3]{-4.7255,0.0211,2.1725});
CHAnimSegment* HAnimSegment596 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment596->setDEF("hanim_r_metatarsal_4");
HAnimSegment596->setName("r_metatarsal_4");
CTransform* Transform597 = (CTransform *)(m_pScene.createNode("Transform"));
Transform597->setTranslation(new float[3]{-4.7255,0.0211,2.1725});
CTransform* Transform598 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape599 = (CShape *)(m_pScene.createNode("Shape"));
Shape599->setUSE("HAnimJointShape");
Transform598->addChild(*Shape599);

Transform597->addChildren(*Transform598);

HAnimSegment596->addChildren(*Transform597);

CShape* Shape600 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet601 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet601->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA602 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA602->setUSE("HAnimSegmentLineColorRGBA");
LineSet601->setColor(*ColorRGBA602);

CCoordinate* Coordinate603 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate603->setPoint(new float[6]{-4.7255,0.0211,2.1725,-4.8755,0.0076,4.5165});
LineSet601->setCoord(*Coordinate603);

Shape600->setGeometry(LineSet601);

HAnimSegment596->addChildren(*Shape600);

HAnimJoint595->addChildren(*HAnimSegment596);

CHAnimJoint* HAnimJoint604 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint604->setDEF("hanim_r_metatarsophalangeal_4");
HAnimJoint604->setName("r_metatarsophalangeal_4");
HAnimJoint604->setCenter(new float[3]{-4.8755,0.0076,4.5165});
CHAnimSegment* HAnimSegment605 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment605->setDEF("hanim_r_tarsal_proximal_phalanx_4");
HAnimSegment605->setName("r_tarsal_proximal_phalanx_4");
CTransform* Transform606 = (CTransform *)(m_pScene.createNode("Transform"));
Transform606->setTranslation(new float[3]{-4.8755,0.0076,4.5165});
CTransform* Transform607 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape608 = (CShape *)(m_pScene.createNode("Shape"));
Shape608->setUSE("HAnimJointShape");
Transform607->addChild(*Shape608);

Transform606->addChildren(*Transform607);

HAnimSegment605->addChildren(*Transform606);

CShape* Shape609 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet610 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet610->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA611 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA611->setUSE("HAnimSegmentLineColorRGBA");
LineSet610->setColor(*ColorRGBA611);

CCoordinate* Coordinate612 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate612->setPoint(new float[6]{-4.8755,0.0076,4.5165,-5.0655,0.0049,5.1895});
LineSet610->setCoord(*Coordinate612);

Shape609->setGeometry(LineSet610);

HAnimSegment605->addChildren(*Shape609);

HAnimJoint604->addChildren(*HAnimSegment605);

CHAnimJoint* HAnimJoint613 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint613->setDEF("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimJoint613->setName("r_tarsal_proximal_interphalangeal_4");
HAnimJoint613->setCenter(new float[3]{-5.0655,0.0049,5.1895});
CHAnimSegment* HAnimSegment614 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment614->setDEF("hanim_r_tarsal_middle_phalanx_3");
HAnimSegment614->setName("r_tarsal_middle_phalanx_4");
CTransform* Transform615 = (CTransform *)(m_pScene.createNode("Transform"));
Transform615->setTranslation(new float[3]{-5.0655,0.0049,5.1895});
CTransform* Transform616 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape617 = (CShape *)(m_pScene.createNode("Shape"));
Shape617->setUSE("HAnimJointShape");
Transform616->addChild(*Shape617);

Transform615->addChildren(*Transform616);

HAnimSegment614->addChildren(*Transform615);

CShape* Shape618 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet619 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet619->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA620 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA620->setUSE("HAnimSegmentLineColorRGBA");
LineSet619->setColor(*ColorRGBA620);

CCoordinate* Coordinate621 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate621->setPoint(new float[6]{-5.0655,0.0049,5.1895,-5.1335,0.0011,5.5175});
LineSet619->setCoord(*Coordinate621);

Shape618->setGeometry(LineSet619);

HAnimSegment614->addChildren(*Shape618);

CHAnimSite* HAnimSite622 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite622->setDEF("hanim_r_tarsal_distal_phalanx_4_tip");
HAnimSite622->setName("r_tarsal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor623 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor623->setDescription("HAnimSite r_tarsal_distal_phalanx_4_tip");
HAnimSite622->addChildren(*TouchSensor623);

CShape* Shape624 = (CShape *)(m_pScene.createNode("Shape"));
Shape624->setUSE("HAnimSiteShape");
HAnimSite622->addChildren(*Shape624);

HAnimSegment614->addChildren(*HAnimSite622);

HAnimJoint613->addChildren(*HAnimSegment614);

CHAnimJoint* HAnimJoint625 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint625->setDEF("hanim_r_tarsal_distal_interphalangeal_3");
HAnimJoint625->setName("r_tarsal_distal_interphalangeal_4");
HAnimJoint625->setCenter(new float[3]{-5.1335,0.0011,5.5175});
HAnimJoint613->addChildren(*HAnimJoint625);

HAnimJoint604->addChildren(*HAnimJoint613);

HAnimJoint595->addChildren(*HAnimJoint604);

HAnimJoint582->addChildren(*HAnimJoint595);

CHAnimJoint* HAnimJoint626 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint626->setDEF("hanim_r_tarsometatarsal_4");
HAnimJoint626->setName("r_tarsometatarsal_5");
HAnimJoint626->setCenter(new float[3]{-5.3615,0.0164,2.0085});
CHAnimSegment* HAnimSegment627 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment627->setDEF("hanim_r_metatarsal_5");
HAnimSegment627->setName("r_metatarsal_5");
CTransform* Transform628 = (CTransform *)(m_pScene.createNode("Transform"));
Transform628->setTranslation(new float[3]{-5.3615,0.0164,2.0085});
CTransform* Transform629 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape630 = (CShape *)(m_pScene.createNode("Shape"));
Shape630->setUSE("HAnimJointShape");
Transform629->addChild(*Shape630);

Transform628->addChildren(*Transform629);

HAnimSegment627->addChildren(*Transform628);

CShape* Shape631 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet632 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet632->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA633 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA633->setUSE("HAnimSegmentLineColorRGBA");
LineSet632->setColor(*ColorRGBA633);

CCoordinate* Coordinate634 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate634->setPoint(new float[6]{-5.3615,0.0164,2.0085,-5.5055,0.0067,4.3115});
LineSet632->setCoord(*Coordinate634);

Shape631->setGeometry(LineSet632);

HAnimSegment627->addChildren(*Shape631);

CHAnimSite* HAnimSite635 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite635->setDEF("hanim_r_metatarsal_phalanx_5_pt");
HAnimSite635->setName("r_metatarsal_phalanx_5_pt");
CTouchSensor* TouchSensor636 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor636->setDescription("HAnimSite r_metatarsal_phalanx_5_pt");
HAnimSite635->addChildren(*TouchSensor636);

CShape* Shape637 = (CShape *)(m_pScene.createNode("Shape"));
Shape637->setUSE("HAnimSiteShape");
HAnimSite635->addChildren(*Shape637);

HAnimSegment627->addChildren(*HAnimSite635);

HAnimJoint626->addChildren(*HAnimSegment627);

CHAnimJoint* HAnimJoint638 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint638->setDEF("hanim_r_metatarsophalangeal_5");
HAnimJoint638->setName("r_metatarsophalangeal_5");
HAnimJoint638->setCenter(new float[3]{-5.5055,0.0067,4.3115});
CHAnimSegment* HAnimSegment639 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment639->setDEF("hanim_r_tarsal_proximal_phalanx_5");
HAnimSegment639->setName("r_tarsal_proximal_phalanx_5");
CTransform* Transform640 = (CTransform *)(m_pScene.createNode("Transform"));
Transform640->setTranslation(new float[3]{-5.5055,0.0067,4.3115});
CTransform* Transform641 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape642 = (CShape *)(m_pScene.createNode("Shape"));
Shape642->setUSE("HAnimJointShape");
Transform641->addChild(*Shape642);

Transform640->addChildren(*Transform641);

HAnimSegment639->addChildren(*Transform640);

CShape* Shape643 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet644 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet644->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA645 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA645->setUSE("HAnimSegmentLineColorRGBA");
LineSet644->setColor(*ColorRGBA645);

CCoordinate* Coordinate646 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate646->setPoint(new float[6]{-5.5055,0.0067,4.3115,-5.6085,0.003,4.6485});
LineSet644->setCoord(*Coordinate646);

Shape643->setGeometry(LineSet644);

HAnimSegment639->addChildren(*Shape643);

HAnimJoint638->addChildren(*HAnimSegment639);

CHAnimJoint* HAnimJoint647 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint647->setDEF("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimJoint647->setName("r_tarsal_proximal_interphalangeal_5");
HAnimJoint647->setCenter(new float[3]{-5.6085,0.003,4.6485});
CHAnimSegment* HAnimSegment648 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment648->setDEF("hanim_r_tarsal_middle_phalanx_4");
HAnimSegment648->setName("r_tarsal_middle_phalanx_5");
CTransform* Transform649 = (CTransform *)(m_pScene.createNode("Transform"));
Transform649->setTranslation(new float[3]{-5.6085,0.003,4.6485});
CTransform* Transform650 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape651 = (CShape *)(m_pScene.createNode("Shape"));
Shape651->setUSE("HAnimJointShape");
Transform650->addChild(*Shape651);

Transform649->addChildren(*Transform650);

HAnimSegment648->addChildren(*Transform649);

CShape* Shape652 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet653 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet653->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA654 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA654->setUSE("HAnimSegmentLineColorRGBA");
LineSet653->setColor(*ColorRGBA654);

CCoordinate* Coordinate655 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate655->setPoint(new float[6]{-5.6085,0.003,4.6485,-5.6495,0,4.9925});
LineSet653->setCoord(*Coordinate655);

Shape652->setGeometry(LineSet653);

HAnimSegment648->addChildren(*Shape652);

CHAnimSite* HAnimSite656 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite656->setDEF("hanim_r_tarsal_distal_phalanx_5_tip");
HAnimSite656->setName("r_tarsal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor657 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor657->setDescription("HAnimSite r_tarsal_distal_phalanx_5_tip");
HAnimSite656->addChildren(*TouchSensor657);

CShape* Shape658 = (CShape *)(m_pScene.createNode("Shape"));
Shape658->setUSE("HAnimSiteShape");
HAnimSite656->addChildren(*Shape658);

HAnimSegment648->addChildren(*HAnimSite656);

HAnimJoint647->addChildren(*HAnimSegment648);

CHAnimJoint* HAnimJoint659 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint659->setDEF("hanim_r_tarsal_distal_interphalangeal_4");
HAnimJoint659->setName("r_tarsal_distal_interphalangeal_5");
HAnimJoint659->setCenter(new float[3]{-5.6495,0,4.9925});
HAnimJoint647->addChildren(*HAnimJoint659);

HAnimJoint638->addChildren(*HAnimJoint647);

HAnimJoint626->addChildren(*HAnimJoint638);

HAnimJoint582->addChildren(*HAnimJoint626);

HAnimJoint573->addChildren(*HAnimJoint582);

HAnimJoint429->addChildren(*HAnimJoint573);

HAnimJoint414->addChildren(*HAnimJoint429);

HAnimJoint396->addChildren(*HAnimJoint414);

HAnimJoint95->addChildren(*HAnimJoint396);

HAnimJoint43->addChildren(*HAnimJoint95);

CHAnimJoint* HAnimJoint660 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint660->setDEF("hanim_vl5");
HAnimJoint660->setName("vl5");
HAnimJoint660->setCenter(new float[3]{0.0028,1.0568,-0.0776});
CHAnimSegment* HAnimSegment661 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment661->setDEF("hanim_l5");
HAnimSegment661->setName("l5");
CTransform* Transform662 = (CTransform *)(m_pScene.createNode("Transform"));
Transform662->setTranslation(new float[3]{0.0028,1.0568,-0.0776});
CTransform* Transform663 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape664 = (CShape *)(m_pScene.createNode("Shape"));
Shape664->setUSE("HAnimJointShape");
Transform663->addChild(*Shape664);

Transform662->addChildren(*Transform663);

HAnimSegment661->addChildren(*Transform662);

CShape* Shape665 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet666 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet666->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA667 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA667->setUSE("HAnimSegmentLineColorRGBA");
LineSet666->setColor(*ColorRGBA667);

CCoordinate* Coordinate668 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate668->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787});
LineSet666->setCoord(*Coordinate668);

Shape665->setGeometry(LineSet666);

HAnimSegment661->addChildren(*Shape665);

HAnimJoint660->addChildren(*HAnimSegment661);

CHAnimJoint* HAnimJoint669 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint669->setDEF("hanim_vl4");
HAnimJoint669->setName("vl4");
HAnimJoint669->setCenter(new float[3]{0.0035,1.0925,-0.0787});
CHAnimSegment* HAnimSegment670 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment670->setDEF("hanim_l4");
HAnimSegment670->setName("l4");
CTransform* Transform671 = (CTransform *)(m_pScene.createNode("Transform"));
Transform671->setTranslation(new float[3]{0.0035,1.0925,-0.0787});
CTransform* Transform672 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape673 = (CShape *)(m_pScene.createNode("Shape"));
Shape673->setUSE("HAnimJointShape");
Transform672->addChild(*Shape673);

Transform671->addChildren(*Transform672);

HAnimSegment670->addChildren(*Transform671);

CShape* Shape674 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet675 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet675->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA676 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA676->setUSE("HAnimSegmentLineColorRGBA");
LineSet675->setColor(*ColorRGBA676);

CCoordinate* Coordinate677 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate677->setPoint(new float[6]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796});
LineSet675->setCoord(*Coordinate677);

Shape674->setGeometry(LineSet675);

HAnimSegment670->addChildren(*Shape674);

HAnimJoint669->addChildren(*HAnimSegment670);

CHAnimJoint* HAnimJoint678 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint678->setDEF("hanim_vl3");
HAnimJoint678->setName("vl3");
HAnimJoint678->setCenter(new float[3]{0.0041,1.1276,-0.0796});
CHAnimSegment* HAnimSegment679 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment679->setDEF("hanim_l3");
HAnimSegment679->setName("l3");
CTransform* Transform680 = (CTransform *)(m_pScene.createNode("Transform"));
Transform680->setTranslation(new float[3]{0.0041,1.1276,-0.0796});
CTransform* Transform681 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape682 = (CShape *)(m_pScene.createNode("Shape"));
Shape682->setUSE("HAnimJointShape");
Transform681->addChild(*Shape682);

Transform680->addChildren(*Transform681);

HAnimSegment679->addChildren(*Transform680);

CShape* Shape683 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet684 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet684->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA685 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA685->setUSE("HAnimSegmentLineColorRGBA");
LineSet684->setColor(*ColorRGBA685);

CCoordinate* Coordinate686 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate686->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08});
LineSet684->setCoord(*Coordinate686);

Shape683->setGeometry(LineSet684);

HAnimSegment679->addChildren(*Shape683);

CHAnimSite* HAnimSite687 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite687->setDEF("hanim_l_rib10_pt");
HAnimSite687->setName("l_rib10_pt");
HAnimSite687->setTranslation(new float[3]{0.0871,1.1925,0.0992});
CTouchSensor* TouchSensor688 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor688->setDescription("HAnimSite l_rib10_pt");
HAnimSite687->addChildren(*TouchSensor688);

CShape* Shape689 = (CShape *)(m_pScene.createNode("Shape"));
Shape689->setUSE("HAnimSiteShape");
HAnimSite687->addChildren(*Shape689);

HAnimSegment679->addChildren(*HAnimSite687);

CHAnimSite* HAnimSite690 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite690->setDEF("hanim_r_rib10_pt");
HAnimSite690->setName("r_rib10_pt");
HAnimSite690->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
CTouchSensor* TouchSensor691 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor691->setDescription("HAnimSite r_rib10_pt");
HAnimSite690->addChildren(*TouchSensor691);

CShape* Shape692 = (CShape *)(m_pScene.createNode("Shape"));
Shape692->setUSE("HAnimSiteShape");
HAnimSite690->addChildren(*Shape692);

HAnimSegment679->addChildren(*HAnimSite690);

CHAnimSite* HAnimSite693 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite693->setDEF("hanim_spine_2_middle_back_pt");
HAnimSite693->setName("spine_2_middle_back_pt");
CTouchSensor* TouchSensor694 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor694->setDescription("HAnimSite spine_2_middle_back_pt");
HAnimSite693->addChildren(*TouchSensor694);

CShape* Shape695 = (CShape *)(m_pScene.createNode("Shape"));
Shape695->setUSE("HAnimSiteShape");
HAnimSite693->addChildren(*Shape695);

HAnimSegment679->addChildren(*HAnimSite693);

HAnimJoint678->addChildren(*HAnimSegment679);

CHAnimJoint* HAnimJoint696 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint696->setDEF("hanim_vl2");
HAnimJoint696->setName("vl2");
HAnimJoint696->setCenter(new float[3]{0.0045,1.1546,-0.08});
CHAnimSegment* HAnimSegment697 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment697->setDEF("hanim_l2");
HAnimSegment697->setName("l2");
CTransform* Transform698 = (CTransform *)(m_pScene.createNode("Transform"));
Transform698->setTranslation(new float[3]{0.0045,1.1546,-0.08});
CTransform* Transform699 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape700 = (CShape *)(m_pScene.createNode("Shape"));
Shape700->setUSE("HAnimJointShape");
Transform699->addChild(*Shape700);

Transform698->addChildren(*Transform699);

HAnimSegment697->addChildren(*Transform698);

CShape* Shape701 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet702 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet702->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA703 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA703->setUSE("HAnimSegmentLineColorRGBA");
LineSet702->setColor(*ColorRGBA703);

CCoordinate* Coordinate704 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate704->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805});
LineSet702->setCoord(*Coordinate704);

Shape701->setGeometry(LineSet702);

HAnimSegment697->addChildren(*Shape701);

HAnimJoint696->addChildren(*HAnimSegment697);

CHAnimJoint* HAnimJoint705 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint705->setDEF("hanim_vl1");
HAnimJoint705->setName("vl1");
HAnimJoint705->setCenter(new float[3]{0.0048,1.1912,-0.0805});
CHAnimSegment* HAnimSegment706 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment706->setDEF("hanim_l1");
HAnimSegment706->setName("l1");
CTransform* Transform707 = (CTransform *)(m_pScene.createNode("Transform"));
Transform707->setTranslation(new float[3]{0.0048,1.1912,-0.0805});
CTransform* Transform708 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape709 = (CShape *)(m_pScene.createNode("Shape"));
Shape709->setUSE("HAnimJointShape");
Transform708->addChild(*Shape709);

Transform707->addChildren(*Transform708);

HAnimSegment706->addChildren(*Transform707);

CShape* Shape710 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet711 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet711->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA712 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA712->setUSE("HAnimSegmentLineColorRGBA");
LineSet711->setColor(*ColorRGBA712);

CCoordinate* Coordinate713 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate713->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808});
LineSet711->setCoord(*Coordinate713);

Shape710->setGeometry(LineSet711);

HAnimSegment706->addChildren(*Shape710);

HAnimJoint705->addChildren(*HAnimSegment706);

CHAnimJoint* HAnimJoint714 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint714->setDEF("hanim_vt12");
HAnimJoint714->setName("vt12");
HAnimJoint714->setCenter(new float[3]{0.0051,1.2278,-0.0808});
CHAnimSegment* HAnimSegment715 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment715->setDEF("hanim_t12");
HAnimSegment715->setName("t12");
CTransform* Transform716 = (CTransform *)(m_pScene.createNode("Transform"));
Transform716->setTranslation(new float[3]{0.0051,1.2278,-0.0808});
CTransform* Transform717 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape718 = (CShape *)(m_pScene.createNode("Shape"));
Shape718->setUSE("HAnimJointShape");
Transform717->addChild(*Shape718);

Transform716->addChildren(*Transform717);

HAnimSegment715->addChildren(*Transform716);

CShape* Shape719 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet720 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet720->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA721 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA721->setUSE("HAnimSegmentLineColorRGBA");
LineSet720->setColor(*ColorRGBA721);

CCoordinate* Coordinate722 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate722->setPoint(new float[6]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081});
LineSet720->setCoord(*Coordinate722);

Shape719->setGeometry(LineSet720);

HAnimSegment715->addChildren(*Shape719);

HAnimJoint714->addChildren(*HAnimSegment715);

CHAnimJoint* HAnimJoint723 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint723->setDEF("hanim_vt11");
HAnimJoint723->setName("vt11");
HAnimJoint723->setCenter(new float[3]{0.0053,1.2679,-0.081});
CHAnimSegment* HAnimSegment724 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment724->setDEF("hanim_t11");
HAnimSegment724->setName("t11");
CTransform* Transform725 = (CTransform *)(m_pScene.createNode("Transform"));
Transform725->setTranslation(new float[3]{0.0053,1.2679,-0.081});
CTransform* Transform726 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape727 = (CShape *)(m_pScene.createNode("Shape"));
Shape727->setUSE("HAnimJointShape");
Transform726->addChild(*Shape727);

Transform725->addChildren(*Transform726);

HAnimSegment724->addChildren(*Transform725);

CShape* Shape728 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet729 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet729->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA730 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA730->setUSE("HAnimSegmentLineColorRGBA");
LineSet729->setColor(*ColorRGBA730);

CCoordinate* Coordinate731 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate731->setPoint(new float[6]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822});
LineSet729->setCoord(*Coordinate731);

Shape728->setGeometry(LineSet729);

HAnimSegment724->addChildren(*Shape728);

CHAnimSite* HAnimSite732 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite732->setDEF("hanim_substernale_pt");
HAnimSite732->setName("substernale_pt");
HAnimSite732->setTranslation(new float[3]{0.0085,1.2995,0.1147});
CTouchSensor* TouchSensor733 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor733->setDescription("HAnimSite substernale_pt");
HAnimSite732->addChildren(*TouchSensor733);

CShape* Shape734 = (CShape *)(m_pScene.createNode("Shape"));
Shape734->setUSE("HAnimSiteShape");
HAnimSite732->addChildren(*Shape734);

HAnimSegment724->addChildren(*HAnimSite732);

HAnimJoint723->addChildren(*HAnimSegment724);

CHAnimJoint* HAnimJoint735 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint735->setDEF("hanim_vt10");
HAnimJoint735->setName("vt10");
HAnimJoint735->setCenter(new float[3]{0.0056,1.2848,-0.0822});
CHAnimSegment* HAnimSegment736 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment736->setDEF("hanim_t10");
HAnimSegment736->setName("t10");
CTransform* Transform737 = (CTransform *)(m_pScene.createNode("Transform"));
Transform737->setTranslation(new float[3]{0.0056,1.2848,-0.0822});
CTransform* Transform738 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape739 = (CShape *)(m_pScene.createNode("Shape"));
Shape739->setUSE("HAnimJointShape");
Transform738->addChild(*Shape739);

Transform737->addChildren(*Transform738);

HAnimSegment736->addChildren(*Transform737);

CShape* Shape740 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet741 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet741->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA742 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA742->setUSE("HAnimSegmentLineColorRGBA");
LineSet741->setColor(*ColorRGBA742);

CCoordinate* Coordinate743 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate743->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838});
LineSet741->setCoord(*Coordinate743);

Shape740->setGeometry(LineSet741);

HAnimSegment736->addChildren(*Shape740);

CHAnimSite* HAnimSite744 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite744->setDEF("hanim_l_thelion_pt");
HAnimSite744->setName("l_thelion_pt");
HAnimSite744->setTranslation(new float[3]{0.0918,1.3382,0.1192});
CTouchSensor* TouchSensor745 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor745->setDescription("HAnimSite l_thelion_pt");
HAnimSite744->addChildren(*TouchSensor745);

CShape* Shape746 = (CShape *)(m_pScene.createNode("Shape"));
Shape746->setUSE("HAnimSiteShape");
HAnimSite744->addChildren(*Shape746);

HAnimSegment736->addChildren(*HAnimSite744);

CHAnimSite* HAnimSite747 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite747->setDEF("hanim_r_thelion_pt");
HAnimSite747->setName("r_thelion_pt");
HAnimSite747->setTranslation(new float[3]{-0.0736,1.3385,0.1217});
CTouchSensor* TouchSensor748 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor748->setDescription("HAnimSite r_thelion_pt");
HAnimSite747->addChildren(*TouchSensor748);

CShape* Shape749 = (CShape *)(m_pScene.createNode("Shape"));
Shape749->setUSE("HAnimSiteShape");
HAnimSite747->addChildren(*Shape749);

HAnimSegment736->addChildren(*HAnimSite747);

HAnimJoint735->addChildren(*HAnimSegment736);

CHAnimJoint* HAnimJoint750 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint750->setDEF("hanim_vt9");
HAnimJoint750->setName("vt9");
HAnimJoint750->setCenter(new float[3]{0.0057,1.3126,-0.0838});
CHAnimSegment* HAnimSegment751 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment751->setDEF("hanim_t9");
HAnimSegment751->setName("t9");
CTransform* Transform752 = (CTransform *)(m_pScene.createNode("Transform"));
Transform752->setTranslation(new float[3]{0.0057,1.3126,-0.0838});
CTransform* Transform753 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape754 = (CShape *)(m_pScene.createNode("Shape"));
Shape754->setUSE("HAnimJointShape");
Transform753->addChild(*Shape754);

Transform752->addChildren(*Transform753);

HAnimSegment751->addChildren(*Transform752);

CShape* Shape755 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet756 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet756->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA757 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA757->setUSE("HAnimSegmentLineColorRGBA");
LineSet756->setColor(*ColorRGBA757);

CCoordinate* Coordinate758 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate758->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845});
LineSet756->setCoord(*Coordinate758);

Shape755->setGeometry(LineSet756);

HAnimSegment751->addChildren(*Shape755);

HAnimJoint750->addChildren(*HAnimSegment751);

CHAnimJoint* HAnimJoint759 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint759->setDEF("hanim_vt8");
HAnimJoint759->setName("vt8");
HAnimJoint759->setCenter(new float[3]{0.0057,1.3382,-0.0845});
CHAnimSegment* HAnimSegment760 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment760->setDEF("hanim_t8");
HAnimSegment760->setName("t8");
CTransform* Transform761 = (CTransform *)(m_pScene.createNode("Transform"));
Transform761->setTranslation(new float[3]{0.0057,1.3382,-0.0845});
CTransform* Transform762 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape763 = (CShape *)(m_pScene.createNode("Shape"));
Shape763->setUSE("HAnimJointShape");
Transform762->addChild(*Shape763);

Transform761->addChildren(*Transform762);

HAnimSegment760->addChildren(*Transform761);

CShape* Shape764 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet765 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet765->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA766 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA766->setUSE("HAnimSegmentLineColorRGBA");
LineSet765->setColor(*ColorRGBA766);

CCoordinate* Coordinate767 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate767->setPoint(new float[6]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833});
LineSet765->setCoord(*Coordinate767);

Shape764->setGeometry(LineSet765);

HAnimSegment760->addChildren(*Shape764);

HAnimJoint759->addChildren(*HAnimSegment760);

CHAnimJoint* HAnimJoint768 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint768->setDEF("hanim_vt7");
HAnimJoint768->setName("vt7");
HAnimJoint768->setCenter(new float[3]{0.0058,1.3625,-0.0833});
CHAnimSegment* HAnimSegment769 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment769->setDEF("hanim_t7");
HAnimSegment769->setName("t7");
CTransform* Transform770 = (CTransform *)(m_pScene.createNode("Transform"));
Transform770->setTranslation(new float[3]{0.0058,1.3625,-0.0833});
CTransform* Transform771 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape772 = (CShape *)(m_pScene.createNode("Shape"));
Shape772->setUSE("HAnimJointShape");
Transform771->addChild(*Shape772);

Transform770->addChildren(*Transform771);

HAnimSegment769->addChildren(*Transform770);

CShape* Shape773 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet774 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet774->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA775 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA775->setUSE("HAnimSegmentLineColorRGBA");
LineSet774->setColor(*ColorRGBA775);

CCoordinate* Coordinate776 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate776->setPoint(new float[6]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08});
LineSet774->setCoord(*Coordinate776);

Shape773->setGeometry(LineSet774);

HAnimSegment769->addChildren(*Shape773);

CHAnimSite* HAnimSite777 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite777->setDEF("hanim_l_chest_midsagittal_plane_pt");
HAnimSite777->setName("l_chest_midsagittal_plane_pt");
CTouchSensor* TouchSensor778 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor778->setDescription("HAnimSite l_chest_midsagittal_plane_pt");
HAnimSite777->addChildren(*TouchSensor778);

CShape* Shape779 = (CShape *)(m_pScene.createNode("Shape"));
Shape779->setUSE("HAnimSiteShape");
HAnimSite777->addChildren(*Shape779);

HAnimSegment769->addChildren(*HAnimSite777);

CHAnimSite* HAnimSite780 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite780->setDEF("hanim_mesosternale_pt");
HAnimSite780->setName("mesosternale_pt");
CTouchSensor* TouchSensor781 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor781->setDescription("HAnimSite mesosternale_pt");
HAnimSite780->addChildren(*TouchSensor781);

CShape* Shape782 = (CShape *)(m_pScene.createNode("Shape"));
Shape782->setUSE("HAnimSiteShape");
HAnimSite780->addChildren(*Shape782);

HAnimSegment769->addChildren(*HAnimSite780);

CHAnimSite* HAnimSite783 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite783->setDEF("hanim_r_chest_midsagittal_plane_pt");
HAnimSite783->setName("r_chest_midsagittal_plane_pt");
CTouchSensor* TouchSensor784 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor784->setDescription("HAnimSite r_chest_midsagittal_plane_pt");
HAnimSite783->addChildren(*TouchSensor784);

CShape* Shape785 = (CShape *)(m_pScene.createNode("Shape"));
Shape785->setUSE("HAnimSiteShape");
HAnimSite783->addChildren(*Shape785);

HAnimSegment769->addChildren(*HAnimSite783);

CHAnimSite* HAnimSite786 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite786->setDEF("hanim_rear_center_midsagittal_plane_pt");
HAnimSite786->setName("rear_center_midsagittal_plane_pt");
CTouchSensor* TouchSensor787 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor787->setDescription("HAnimSite rear_center_midsagittal_plane_pt");
HAnimSite786->addChildren(*TouchSensor787);

CShape* Shape788 = (CShape *)(m_pScene.createNode("Shape"));
Shape788->setUSE("HAnimSiteShape");
HAnimSite786->addChildren(*Shape788);

HAnimSegment769->addChildren(*HAnimSite786);

HAnimJoint768->addChildren(*HAnimSegment769);

CHAnimJoint* HAnimJoint789 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint789->setDEF("hanim_vt6");
HAnimJoint789->setName("vt6");
HAnimJoint789->setCenter(new float[3]{0.0059,1.3866,-0.08});
CHAnimSegment* HAnimSegment790 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment790->setDEF("hanim_t6");
HAnimSegment790->setName("t6");
CTransform* Transform791 = (CTransform *)(m_pScene.createNode("Transform"));
Transform791->setTranslation(new float[3]{0.0059,1.3866,-0.08});
CTransform* Transform792 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape793 = (CShape *)(m_pScene.createNode("Shape"));
Shape793->setUSE("HAnimJointShape");
Transform792->addChild(*Shape793);

Transform791->addChildren(*Transform792);

HAnimSegment790->addChildren(*Transform791);

CShape* Shape794 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet795 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet795->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA796 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA796->setUSE("HAnimSegmentLineColorRGBA");
LineSet795->setColor(*ColorRGBA796);

CCoordinate* Coordinate797 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate797->setPoint(new float[6]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745});
LineSet795->setCoord(*Coordinate797);

Shape794->setGeometry(LineSet795);

HAnimSegment790->addChildren(*Shape794);

CHAnimSite* HAnimSite798 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite798->setDEF("hanim_spine_1_middle_back_pt");
HAnimSite798->setName("spine_1_middle_back_pt");
CTouchSensor* TouchSensor799 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor799->setDescription("HAnimSite spine_1_middle_back_pt");
HAnimSite798->addChildren(*TouchSensor799);

CShape* Shape800 = (CShape *)(m_pScene.createNode("Shape"));
Shape800->setUSE("HAnimSiteShape");
HAnimSite798->addChildren(*Shape800);

HAnimSegment790->addChildren(*HAnimSite798);

HAnimJoint789->addChildren(*HAnimSegment790);

CHAnimJoint* HAnimJoint801 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint801->setDEF("hanim_vt5");
HAnimJoint801->setName("vt5");
HAnimJoint801->setCenter(new float[3]{0.006,1.4102,-0.0745});
CHAnimSegment* HAnimSegment802 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment802->setDEF("hanim_t5");
HAnimSegment802->setName("t5");
CTransform* Transform803 = (CTransform *)(m_pScene.createNode("Transform"));
Transform803->setTranslation(new float[3]{0.006,1.4102,-0.0745});
CTransform* Transform804 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape805 = (CShape *)(m_pScene.createNode("Shape"));
Shape805->setUSE("HAnimJointShape");
Transform804->addChild(*Shape805);

Transform803->addChildren(*Transform804);

HAnimSegment802->addChildren(*Transform803);

CShape* Shape806 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet807 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet807->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA808 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA808->setUSE("HAnimSegmentLineColorRGBA");
LineSet807->setColor(*ColorRGBA808);

CCoordinate* Coordinate809 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate809->setPoint(new float[6]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675});
LineSet807->setCoord(*Coordinate809);

Shape806->setGeometry(LineSet807);

HAnimSegment802->addChildren(*Shape806);

HAnimJoint801->addChildren(*HAnimSegment802);

CHAnimJoint* HAnimJoint810 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint810->setDEF("hanim_vt4");
HAnimJoint810->setName("vt4");
HAnimJoint810->setCenter(new float[3]{0.0061,1.432,-0.0675});
CHAnimSegment* HAnimSegment811 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment811->setDEF("hanim_t4");
HAnimSegment811->setName("t4");
CTransform* Transform812 = (CTransform *)(m_pScene.createNode("Transform"));
Transform812->setTranslation(new float[3]{0.0061,1.432,-0.0675});
CTransform* Transform813 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape814 = (CShape *)(m_pScene.createNode("Shape"));
Shape814->setUSE("HAnimJointShape");
Transform813->addChild(*Shape814);

Transform812->addChildren(*Transform813);

HAnimSegment811->addChildren(*Transform812);

CShape* Shape815 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet816 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet816->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA817 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA817->setUSE("HAnimSegmentLineColorRGBA");
LineSet816->setColor(*ColorRGBA817);

CCoordinate* Coordinate818 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate818->setPoint(new float[6]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057});
LineSet816->setCoord(*Coordinate818);

Shape815->setGeometry(LineSet816);

HAnimSegment811->addChildren(*Shape815);

HAnimJoint810->addChildren(*HAnimSegment811);

CHAnimJoint* HAnimJoint819 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint819->setDEF("hanim_vt3");
HAnimJoint819->setName("vt3");
HAnimJoint819->setCenter(new float[3]{0.0062,1.4583,-0.057});
CHAnimSegment* HAnimSegment820 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment820->setDEF("hanim_t3");
HAnimSegment820->setName("t3");
CTransform* Transform821 = (CTransform *)(m_pScene.createNode("Transform"));
Transform821->setTranslation(new float[3]{0.0062,1.4583,-0.057});
CTransform* Transform822 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape823 = (CShape *)(m_pScene.createNode("Shape"));
Shape823->setUSE("HAnimJointShape");
Transform822->addChild(*Shape823);

Transform821->addChildren(*Transform822);

HAnimSegment820->addChildren(*Transform821);

CShape* Shape824 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet825 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet825->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA826 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA826->setUSE("HAnimSegmentLineColorRGBA");
LineSet825->setColor(*ColorRGBA826);

CCoordinate* Coordinate827 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate827->setPoint(new float[6]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484});
LineSet825->setCoord(*Coordinate827);

Shape824->setGeometry(LineSet825);

HAnimSegment820->addChildren(*Shape824);

HAnimJoint819->addChildren(*HAnimSegment820);

CHAnimJoint* HAnimJoint828 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint828->setDEF("hanim_vt2");
HAnimJoint828->setName("vt2");
HAnimJoint828->setCenter(new float[3]{0.0063,1.4761,-0.0484});
CHAnimSegment* HAnimSegment829 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment829->setDEF("hanim_t2");
HAnimSegment829->setName("t2");
CTransform* Transform830 = (CTransform *)(m_pScene.createNode("Transform"));
Transform830->setTranslation(new float[3]{0.0063,1.4761,-0.0484});
CTransform* Transform831 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape832 = (CShape *)(m_pScene.createNode("Shape"));
Shape832->setUSE("HAnimJointShape");
Transform831->addChild(*Shape832);

Transform830->addChildren(*Transform831);

HAnimSegment829->addChildren(*Transform830);

CShape* Shape833 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet834 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet834->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA835 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA835->setUSE("HAnimSegmentLineColorRGBA");
LineSet834->setColor(*ColorRGBA835);

CCoordinate* Coordinate836 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate836->setPoint(new float[6]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387});
LineSet834->setCoord(*Coordinate836);

Shape833->setGeometry(LineSet834);

HAnimSegment829->addChildren(*Shape833);

CHAnimSite* HAnimSite837 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite837->setDEF("hanim_cervicale_pt");
HAnimSite837->setName("cervicale_pt");
HAnimSite837->setTranslation(new float[3]{0.0064,1.52,-0.0815});
CTouchSensor* TouchSensor838 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor838->setDescription("HAnimSite cervicale_pt");
HAnimSite837->addChildren(*TouchSensor838);

CShape* Shape839 = (CShape *)(m_pScene.createNode("Shape"));
Shape839->setUSE("HAnimSiteShape");
HAnimSite837->addChildren(*Shape839);

HAnimSegment829->addChildren(*HAnimSite837);

CHAnimSite* HAnimSite840 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite840->setDEF("hanim_suprasternale_pt");
HAnimSite840->setName("suprasternale_pt");
HAnimSite840->setTranslation(new float[3]{0.0084,1.4714,0.0551});
CTouchSensor* TouchSensor841 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor841->setDescription("HAnimSite suprasternale_pt");
HAnimSite840->addChildren(*TouchSensor841);

CShape* Shape842 = (CShape *)(m_pScene.createNode("Shape"));
Shape842->setUSE("HAnimSiteShape");
HAnimSite840->addChildren(*Shape842);

HAnimSegment829->addChildren(*HAnimSite840);

HAnimJoint828->addChildren(*HAnimSegment829);

CHAnimJoint* HAnimJoint843 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint843->setDEF("hanim_vt1");
HAnimJoint843->setName("vt1");
HAnimJoint843->setCenter(new float[3]{0.0065,1.4951,-0.0387});
CHAnimSegment* HAnimSegment844 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment844->setDEF("hanim_t1");
HAnimSegment844->setName("t1");
CTransform* Transform845 = (CTransform *)(m_pScene.createNode("Transform"));
Transform845->setTranslation(new float[3]{0.0065,1.4951,-0.0387});
CTransform* Transform846 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape847 = (CShape *)(m_pScene.createNode("Shape"));
Shape847->setUSE("HAnimJointShape");
Transform846->addChild(*Shape847);

Transform845->addChildren(*Transform846);

HAnimSegment844->addChildren(*Transform845);

CShape* Shape848 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet849 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet849->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA850 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA850->setUSE("HAnimSegmentLineColorRGBA");
LineSet849->setColor(*ColorRGBA850);

CCoordinate* Coordinate851 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate851->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301});
LineSet849->setCoord(*Coordinate851);

Shape848->setGeometry(LineSet849);

HAnimSegment844->addChildren(*Shape848);

CHAnimSite* HAnimSite852 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite852->setDEF("hanim_l_neck_base_pt");
HAnimSite852->setName("l_neck_base_pt");
HAnimSite852->setTranslation(new float[3]{0.0646,1.5141,-0.038});
CTouchSensor* TouchSensor853 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor853->setDescription("HAnimSite l_neck_base_pt");
HAnimSite852->addChildren(*TouchSensor853);

CShape* Shape854 = (CShape *)(m_pScene.createNode("Shape"));
Shape854->setUSE("HAnimSiteShape");
HAnimSite852->addChildren(*Shape854);

HAnimSegment844->addChildren(*HAnimSite852);

CHAnimSite* HAnimSite855 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite855->setDEF("hanim_r_neck_base_pt");
HAnimSite855->setName("r_neck_base_pt");
HAnimSite855->setTranslation(new float[3]{-0.0419,1.5149,-0.022});
CTouchSensor* TouchSensor856 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor856->setDescription("HAnimSite r_neck_base_pt");
HAnimSite855->addChildren(*TouchSensor856);

CShape* Shape857 = (CShape *)(m_pScene.createNode("Shape"));
Shape857->setUSE("HAnimSiteShape");
HAnimSite855->addChildren(*Shape857);

HAnimSegment844->addChildren(*HAnimSite855);

CShape* Shape858 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet859 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet859->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA860 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA860->setUSE("HAnimSegmentLineColorRGBA");
LineSet859->setColor(*ColorRGBA860);

CCoordinate* Coordinate861 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate861->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353});
LineSet859->setCoord(*Coordinate861);

Shape858->setGeometry(LineSet859);

HAnimSegment844->addChildren(*Shape858);

CHAnimSite* HAnimSite862 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite862->setDEF("hanim_l_acromion_pt");
HAnimSite862->setName("l_acromion_pt");
HAnimSite862->setTranslation(new float[3]{0.2032,1.476,-0.049});
CTouchSensor* TouchSensor863 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor863->setDescription("HAnimSite l_acromion_pt");
HAnimSite862->addChildren(*TouchSensor863);

CShape* Shape864 = (CShape *)(m_pScene.createNode("Shape"));
Shape864->setUSE("HAnimSiteShape");
HAnimSite862->addChildren(*Shape864);

HAnimSegment844->addChildren(*HAnimSite862);

CHAnimSite* HAnimSite865 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite865->setDEF("hanim_l_axilla_distal_pt");
HAnimSite865->setName("l_axilla_distal_pt");
HAnimSite865->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
CTouchSensor* TouchSensor866 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor866->setDescription("HAnimSite l_axilla_distal_pt");
HAnimSite865->addChildren(*TouchSensor866);

CShape* Shape867 = (CShape *)(m_pScene.createNode("Shape"));
Shape867->setUSE("HAnimSiteShape");
HAnimSite865->addChildren(*Shape867);

HAnimSegment844->addChildren(*HAnimSite865);

CHAnimSite* HAnimSite868 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite868->setDEF("hanim_l_axilla_posterior_folds_pt");
HAnimSite868->setName("l_axilla_posterior_folds_pt");
CTouchSensor* TouchSensor869 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor869->setDescription("HAnimSite l_axilla_posterior_folds_pt");
HAnimSite868->addChildren(*TouchSensor869);

CShape* Shape870 = (CShape *)(m_pScene.createNode("Shape"));
Shape870->setUSE("HAnimSiteShape");
HAnimSite868->addChildren(*Shape870);

HAnimSegment844->addChildren(*HAnimSite868);

CHAnimSite* HAnimSite871 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite871->setDEF("hanim_l_axilla_proximal_pt");
HAnimSite871->setName("l_axilla_proximal_pt");
HAnimSite871->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
CTouchSensor* TouchSensor872 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor872->setDescription("HAnimSite l_axilla_proximal_pt");
HAnimSite871->addChildren(*TouchSensor872);

CShape* Shape873 = (CShape *)(m_pScene.createNode("Shape"));
Shape873->setUSE("HAnimSiteShape");
HAnimSite871->addChildren(*Shape873);

HAnimSegment844->addChildren(*HAnimSite871);

CHAnimSite* HAnimSite874 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite874->setDEF("hanim_l_clavicale_pt");
HAnimSite874->setName("l_clavicale_pt");
HAnimSite874->setTranslation(new float[3]{0.0271,1.4943,0.0394});
CTouchSensor* TouchSensor875 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor875->setDescription("HAnimSite l_clavicale_pt");
HAnimSite874->addChildren(*TouchSensor875);

CShape* Shape876 = (CShape *)(m_pScene.createNode("Shape"));
Shape876->setUSE("HAnimSiteShape");
HAnimSite874->addChildren(*Shape876);

HAnimSegment844->addChildren(*HAnimSite874);

CShape* Shape877 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet878 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet878->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA879 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA879->setUSE("HAnimSegmentLineColorRGBA");
LineSet878->setColor(*ColorRGBA879);

CCoordinate* Coordinate880 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate880->setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033});
LineSet878->setCoord(*Coordinate880);

Shape877->setGeometry(LineSet878);

HAnimSegment844->addChildren(*Shape877);

CHAnimSite* HAnimSite881 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite881->setDEF("hanim_r_acromion_pt");
HAnimSite881->setName("r_acromion_pt");
HAnimSite881->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
CTouchSensor* TouchSensor882 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor882->setDescription("HAnimSite r_acromion_pt");
HAnimSite881->addChildren(*TouchSensor882);

CShape* Shape883 = (CShape *)(m_pScene.createNode("Shape"));
Shape883->setUSE("HAnimSiteShape");
HAnimSite881->addChildren(*Shape883);

HAnimSegment844->addChildren(*HAnimSite881);

CHAnimSite* HAnimSite884 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite884->setDEF("hanim_r_axilla_distal_pt");
HAnimSite884->setName("r_axilla_distal_pt");
HAnimSite884->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
CTouchSensor* TouchSensor885 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor885->setDescription("HAnimSite r_axilla_distal_pt");
HAnimSite884->addChildren(*TouchSensor885);

CShape* Shape886 = (CShape *)(m_pScene.createNode("Shape"));
Shape886->setUSE("HAnimSiteShape");
HAnimSite884->addChildren(*Shape886);

HAnimSegment844->addChildren(*HAnimSite884);

CHAnimSite* HAnimSite887 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite887->setDEF("hanim_r_axilla_posterior_folds_pt");
HAnimSite887->setName("r_axilla_posterior_folds_pt");
CTouchSensor* TouchSensor888 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor888->setDescription("HAnimSite r_axilla_posterior_folds_pt");
HAnimSite887->addChildren(*TouchSensor888);

CShape* Shape889 = (CShape *)(m_pScene.createNode("Shape"));
Shape889->setUSE("HAnimSiteShape");
HAnimSite887->addChildren(*Shape889);

HAnimSegment844->addChildren(*HAnimSite887);

CHAnimSite* HAnimSite890 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite890->setDEF("hanim_r_axilla_proximal_pt");
HAnimSite890->setName("r_axilla_proximal_pt");
HAnimSite890->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
CTouchSensor* TouchSensor891 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor891->setDescription("HAnimSite r_axilla_proximal_pt");
HAnimSite890->addChildren(*TouchSensor891);

CShape* Shape892 = (CShape *)(m_pScene.createNode("Shape"));
Shape892->setUSE("HAnimSiteShape");
HAnimSite890->addChildren(*Shape892);

HAnimSegment844->addChildren(*HAnimSite890);

CHAnimSite* HAnimSite893 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite893->setDEF("hanim_r_clavicale_pt");
HAnimSite893->setName("r_clavicale_pt");
HAnimSite893->setTranslation(new float[3]{-0.0115,1.4943,0.04});
CTouchSensor* TouchSensor894 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor894->setDescription("HAnimSite r_clavicale_pt");
HAnimSite893->addChildren(*TouchSensor894);

CShape* Shape895 = (CShape *)(m_pScene.createNode("Shape"));
Shape895->setUSE("HAnimSiteShape");
HAnimSite893->addChildren(*Shape895);

HAnimSegment844->addChildren(*HAnimSite893);

HAnimJoint843->addChildren(*HAnimSegment844);

CHAnimJoint* HAnimJoint896 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint896->setDEF("hanim_vc7");
HAnimJoint896->setName("vc7");
HAnimJoint896->setCenter(new float[3]{0.0066,1.5132,-0.0301});
CHAnimSegment* HAnimSegment897 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment897->setDEF("hanim_c7");
HAnimSegment897->setName("c7");
CTransform* Transform898 = (CTransform *)(m_pScene.createNode("Transform"));
Transform898->setTranslation(new float[3]{0.0066,1.5132,-0.0301});
CTransform* Transform899 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape900 = (CShape *)(m_pScene.createNode("Shape"));
Shape900->setUSE("HAnimJointShape");
Transform899->addChild(*Shape900);

Transform898->addChildren(*Transform899);

HAnimSegment897->addChildren(*Transform898);

CShape* Shape901 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet902 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet902->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA903 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA903->setUSE("HAnimSegmentLineColorRGBA");
LineSet902->setColor(*ColorRGBA903);

CCoordinate* Coordinate904 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate904->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143});
LineSet902->setCoord(*Coordinate904);

Shape901->setGeometry(LineSet902);

HAnimSegment897->addChildren(*Shape901);

HAnimJoint896->addChildren(*HAnimSegment897);

CHAnimJoint* HAnimJoint905 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint905->setDEF("hanim_vc6");
HAnimJoint905->setName("vc6");
HAnimJoint905->setCenter(new float[3]{0.0066,1.5357,-0.0143});
CHAnimSegment* HAnimSegment906 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment906->setDEF("hanim_c6");
HAnimSegment906->setName("c6");
CTransform* Transform907 = (CTransform *)(m_pScene.createNode("Transform"));
Transform907->setTranslation(new float[3]{0.0066,1.5357,-0.0143});
CTransform* Transform908 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape909 = (CShape *)(m_pScene.createNode("Shape"));
Shape909->setUSE("HAnimJointShape");
Transform908->addChild(*Shape909);

Transform907->addChildren(*Transform908);

HAnimSegment906->addChildren(*Transform907);

CShape* Shape910 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet911 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet911->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA912 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA912->setUSE("HAnimSegmentLineColorRGBA");
LineSet911->setColor(*ColorRGBA912);

CCoordinate* Coordinate913 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate913->setPoint(new float[6]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082});
LineSet911->setCoord(*Coordinate913);

Shape910->setGeometry(LineSet911);

HAnimSegment906->addChildren(*Shape910);

HAnimJoint905->addChildren(*HAnimSegment906);

CHAnimJoint* HAnimJoint914 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint914->setDEF("hanim_vc5");
HAnimJoint914->setName("vc5");
HAnimJoint914->setCenter(new float[3]{0.0066,1.552,-0.0082});
CHAnimSegment* HAnimSegment915 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment915->setDEF("hanim_c5");
HAnimSegment915->setName("c5");
CTransform* Transform916 = (CTransform *)(m_pScene.createNode("Transform"));
Transform916->setTranslation(new float[3]{0.0066,1.552,-0.0082});
CTransform* Transform917 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape918 = (CShape *)(m_pScene.createNode("Shape"));
Shape918->setUSE("HAnimJointShape");
Transform917->addChild(*Shape918);

Transform916->addChildren(*Transform917);

HAnimSegment915->addChildren(*Transform916);

CShape* Shape919 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet920 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet920->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA921 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA921->setUSE("HAnimSegmentLineColorRGBA");
LineSet920->setColor(*ColorRGBA921);

CCoordinate* Coordinate922 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate922->setPoint(new float[6]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084});
LineSet920->setCoord(*Coordinate922);

Shape919->setGeometry(LineSet920);

HAnimSegment915->addChildren(*Shape919);

HAnimJoint914->addChildren(*HAnimSegment915);

CHAnimJoint* HAnimJoint923 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint923->setDEF("hanim_vc4");
HAnimJoint923->setName("vc4");
HAnimJoint923->setCenter(new float[3]{0.0066,1.5662,-0.0084});
CHAnimSegment* HAnimSegment924 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment924->setDEF("hanim_c4");
HAnimSegment924->setName("c4");
CTransform* Transform925 = (CTransform *)(m_pScene.createNode("Transform"));
Transform925->setTranslation(new float[3]{0.0066,1.5662,-0.0084});
CTransform* Transform926 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape927 = (CShape *)(m_pScene.createNode("Shape"));
Shape927->setUSE("HAnimJointShape");
Transform926->addChild(*Shape927);

Transform925->addChildren(*Transform926);

HAnimSegment924->addChildren(*Transform925);

CShape* Shape928 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet929 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet929->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA930 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA930->setUSE("HAnimSegmentLineColorRGBA");
LineSet929->setColor(*ColorRGBA930);

CCoordinate* Coordinate931 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate931->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103});
LineSet929->setCoord(*Coordinate931);

Shape928->setGeometry(LineSet929);

HAnimSegment924->addChildren(*Shape928);

HAnimJoint923->addChildren(*HAnimSegment924);

CHAnimJoint* HAnimJoint932 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint932->setDEF("hanim_vc3");
HAnimJoint932->setName("vc3");
HAnimJoint932->setCenter(new float[3]{0.0066,1.58,-0.0103});
CHAnimSegment* HAnimSegment933 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment933->setDEF("hanim_c3");
HAnimSegment933->setName("c3");
CTransform* Transform934 = (CTransform *)(m_pScene.createNode("Transform"));
Transform934->setTranslation(new float[3]{0.0066,1.58,-0.0103});
CTransform* Transform935 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape936 = (CShape *)(m_pScene.createNode("Shape"));
Shape936->setUSE("HAnimJointShape");
Transform935->addChild(*Shape936);

Transform934->addChildren(*Transform935);

HAnimSegment933->addChildren(*Transform934);

CShape* Shape937 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet938 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet938->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA939 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA939->setUSE("HAnimSegmentLineColorRGBA");
LineSet938->setColor(*ColorRGBA939);

CCoordinate* Coordinate940 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate940->setPoint(new float[6]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103});
LineSet938->setCoord(*Coordinate940);

Shape937->setGeometry(LineSet938);

HAnimSegment933->addChildren(*Shape937);

CHAnimSite* HAnimSite941 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite941->setDEF("hanim_adams_apple_pt");
HAnimSite941->setName("adams_apple_pt");
CTouchSensor* TouchSensor942 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor942->setDescription("HAnimSite adams_apple_pt");
HAnimSite941->addChildren(*TouchSensor942);

CShape* Shape943 = (CShape *)(m_pScene.createNode("Shape"));
Shape943->setUSE("HAnimSiteShape");
HAnimSite941->addChildren(*Shape943);

HAnimSegment933->addChildren(*HAnimSite941);

HAnimJoint932->addChildren(*HAnimSegment933);

CHAnimJoint* HAnimJoint944 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint944->setDEF("hanim_vc2");
HAnimJoint944->setName("vc2");
HAnimJoint944->setCenter(new float[3]{0.0066,1.5928,-0.0103});
CHAnimSegment* HAnimSegment945 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment945->setDEF("hanim_c2");
HAnimSegment945->setName("c2");
CTransform* Transform946 = (CTransform *)(m_pScene.createNode("Transform"));
Transform946->setTranslation(new float[3]{0.0066,1.5928,-0.0103});
CTransform* Transform947 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape948 = (CShape *)(m_pScene.createNode("Shape"));
Shape948->setUSE("HAnimJointShape");
Transform947->addChild(*Shape948);

Transform946->addChildren(*Transform947);

HAnimSegment945->addChildren(*Transform946);

CShape* Shape949 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet950 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet950->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA951 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA951->setUSE("HAnimSegmentLineColorRGBA");
LineSet950->setColor(*ColorRGBA951);

CCoordinate* Coordinate952 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate952->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034});
LineSet950->setCoord(*Coordinate952);

Shape949->setGeometry(LineSet950);

HAnimSegment945->addChildren(*Shape949);

HAnimJoint944->addChildren(*HAnimSegment945);

CHAnimJoint* HAnimJoint953 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint953->setDEF("hanim_vc1");
HAnimJoint953->setName("vc1");
HAnimJoint953->setCenter(new float[3]{0.0066,1.6144,-0.0034});
CHAnimSegment* HAnimSegment954 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment954->setDEF("hanim_c1");
HAnimSegment954->setName("c1");
CTransform* Transform955 = (CTransform *)(m_pScene.createNode("Transform"));
Transform955->setTranslation(new float[3]{0.0066,1.6144,-0.0034});
CTransform* Transform956 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape957 = (CShape *)(m_pScene.createNode("Shape"));
Shape957->setUSE("HAnimJointShape");
Transform956->addChild(*Shape957);

Transform955->addChildren(*Transform956);

HAnimSegment954->addChildren(*Transform955);

CShape* Shape958 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet959 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet959->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA960 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA960->setUSE("HAnimSegmentLineColorRGBA");
LineSet959->setColor(*ColorRGBA960);

CCoordinate* Coordinate961 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate961->setPoint(new float[6]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236});
LineSet959->setCoord(*Coordinate961);

Shape958->setGeometry(LineSet959);

HAnimSegment954->addChildren(*Shape958);

CHAnimSite* HAnimSite962 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite962->setDEF("hanim_glabella_pt");
HAnimSite962->setName("glabella_pt");
CTouchSensor* TouchSensor963 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor963->setDescription("HAnimSite glabella_pt");
HAnimSite962->addChildren(*TouchSensor963);

CShape* Shape964 = (CShape *)(m_pScene.createNode("Shape"));
Shape964->setUSE("HAnimSiteShape");
HAnimSite962->addChildren(*Shape964);

HAnimSegment954->addChildren(*HAnimSite962);

CHAnimSite* HAnimSite965 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite965->setDEF("hanim_l_ectocanthus_pt");
HAnimSite965->setName("l_ectocanthus_pt");
CTouchSensor* TouchSensor966 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor966->setDescription("HAnimSite l_ectocanthus_pt");
HAnimSite965->addChildren(*TouchSensor966);

CShape* Shape967 = (CShape *)(m_pScene.createNode("Shape"));
Shape967->setUSE("HAnimSiteShape");
HAnimSite965->addChildren(*Shape967);

HAnimSegment954->addChildren(*HAnimSite965);

CHAnimSite* HAnimSite968 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite968->setDEF("hanim_l_infraorbitale_pt");
HAnimSite968->setName("l_infraorbitale_pt");
HAnimSite968->setTranslation(new float[3]{0.0341,1.6171,0.0752});
CTouchSensor* TouchSensor969 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor969->setDescription("HAnimSite l_infraorbitale_pt");
HAnimSite968->addChildren(*TouchSensor969);

CShape* Shape970 = (CShape *)(m_pScene.createNode("Shape"));
Shape970->setUSE("HAnimSiteShape");
HAnimSite968->addChildren(*Shape970);

HAnimSegment954->addChildren(*HAnimSite968);

CHAnimSite* HAnimSite971 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite971->setDEF("hanim_l_tragion_pt");
HAnimSite971->setName("l_tragion_pt");
HAnimSite971->setTranslation(new float[3]{0.0739,1.6348,0.0282});
CTouchSensor* TouchSensor972 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor972->setDescription("HAnimSite l_tragion_pt");
HAnimSite971->addChildren(*TouchSensor972);

CShape* Shape973 = (CShape *)(m_pScene.createNode("Shape"));
Shape973->setUSE("HAnimSiteShape");
HAnimSite971->addChildren(*Shape973);

HAnimSegment954->addChildren(*HAnimSite971);

CHAnimSite* HAnimSite974 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite974->setDEF("hanim_nuchale_pt");
HAnimSite974->setName("nuchale_pt");
HAnimSite974->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
CTouchSensor* TouchSensor975 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor975->setDescription("HAnimSite nuchale_pt");
HAnimSite974->addChildren(*TouchSensor975);

CShape* Shape976 = (CShape *)(m_pScene.createNode("Shape"));
Shape976->setUSE("HAnimSiteShape");
HAnimSite974->addChildren(*Shape976);

HAnimSegment954->addChildren(*HAnimSite974);

CHAnimSite* HAnimSite977 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite977->setDEF("hanim_opisthocranion_pt");
HAnimSite977->setName("opisthocranion_pt");
CTouchSensor* TouchSensor978 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor978->setDescription("HAnimSite opisthocranion_pt");
HAnimSite977->addChildren(*TouchSensor978);

CShape* Shape979 = (CShape *)(m_pScene.createNode("Shape"));
Shape979->setUSE("HAnimSiteShape");
HAnimSite977->addChildren(*Shape979);

HAnimSegment954->addChildren(*HAnimSite977);

CHAnimSite* HAnimSite980 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite980->setDEF("hanim_r_ectocanthus_pt");
HAnimSite980->setName("r_ectocanthus_pt");
CTouchSensor* TouchSensor981 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor981->setDescription("HAnimSite r_ectocanthus_pt");
HAnimSite980->addChildren(*TouchSensor981);

CShape* Shape982 = (CShape *)(m_pScene.createNode("Shape"));
Shape982->setUSE("HAnimSiteShape");
HAnimSite980->addChildren(*Shape982);

HAnimSegment954->addChildren(*HAnimSite980);

CHAnimSite* HAnimSite983 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite983->setDEF("hanim_r_infraorbitale_pt");
HAnimSite983->setName("r_infraorbitale_pt");
HAnimSite983->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
CTouchSensor* TouchSensor984 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor984->setDescription("HAnimSite r_infraorbitale_pt");
HAnimSite983->addChildren(*TouchSensor984);

CShape* Shape985 = (CShape *)(m_pScene.createNode("Shape"));
Shape985->setUSE("HAnimSiteShape");
HAnimSite983->addChildren(*Shape985);

HAnimSegment954->addChildren(*HAnimSite983);

CHAnimSite* HAnimSite986 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite986->setDEF("hanim_r_tragion_pt");
HAnimSite986->setName("r_tragion_pt");
HAnimSite986->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
CTouchSensor* TouchSensor987 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor987->setDescription("HAnimSite r_tragion_pt");
HAnimSite986->addChildren(*TouchSensor987);

CShape* Shape988 = (CShape *)(m_pScene.createNode("Shape"));
Shape988->setUSE("HAnimSiteShape");
HAnimSite986->addChildren(*Shape988);

HAnimSegment954->addChildren(*HAnimSite986);

CHAnimSite* HAnimSite989 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite989->setDEF("hanim_sellion_pt");
HAnimSite989->setName("sellion_pt");
HAnimSite989->setTranslation(new float[3]{0.0058,1.6316,0.0852});
CTouchSensor* TouchSensor990 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor990->setDescription("HAnimSite sellion_pt");
HAnimSite989->addChildren(*TouchSensor990);

CShape* Shape991 = (CShape *)(m_pScene.createNode("Shape"));
Shape991->setUSE("HAnimSiteShape");
HAnimSite989->addChildren(*Shape991);

HAnimSegment954->addChildren(*HAnimSite989);

CHAnimSite* HAnimSite992 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite992->setDEF("hanim_skull_vertex_pt");
HAnimSite992->setName("skull_vertex_pt");
HAnimSite992->setTranslation(new float[3]{0.005,1.7504,0.0055});
CTouchSensor* TouchSensor993 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor993->setDescription("HAnimSite skull_vertex_pt");
HAnimSite992->addChildren(*TouchSensor993);

CShape* Shape994 = (CShape *)(m_pScene.createNode("Shape"));
Shape994->setUSE("HAnimSiteShape");
HAnimSite992->addChildren(*Shape994);

HAnimSegment954->addChildren(*HAnimSite992);

HAnimJoint953->addChildren(*HAnimSegment954);

CHAnimJoint* HAnimJoint995 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint995->setDEF("hanim_skullbase");
HAnimJoint995->setName("skullbase");
HAnimJoint995->setCenter(new float[3]{0.0044,1.6209,0.0236});
CHAnimSegment* HAnimSegment996 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment996->setDEF("hanim_skull");
HAnimSegment996->setName("skull");
CTransform* Transform997 = (CTransform *)(m_pScene.createNode("Transform"));
Transform997->setTranslation(new float[3]{0.0044,1.6209,0.0236});
CTransform* Transform998 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape999 = (CShape *)(m_pScene.createNode("Shape"));
Shape999->setUSE("HAnimJointShape");
Transform998->addChild(*Shape999);

Transform997->addChildren(*Transform998);

HAnimSegment996->addChildren(*Transform997);

CShape* Shape1000 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1001 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1001->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1002 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1002->setUSE("HAnimSegmentLineColorRGBA");
LineSet1001->setColor(*ColorRGBA1002);

CCoordinate* Coordinate1003 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1003->setPoint(new float[6]{0.0044,1.6209,0.0236,2.2365,1.87,1.9285});
LineSet1001->setCoord(*Coordinate1003);

Shape1000->setGeometry(LineSet1001);

HAnimSegment996->addChildren(*Shape1000);

CShape* Shape1004 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1005 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1005->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1006 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1006->setUSE("HAnimSegmentLineColorRGBA");
LineSet1005->setColor(*ColorRGBA1006);

CCoordinate* Coordinate1007 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1007->setPoint(new float[6]{0.0044,1.6209,0.0236,-2.2535,1.87,1.9285});
LineSet1005->setCoord(*Coordinate1007);

Shape1004->setGeometry(LineSet1005);

HAnimSegment996->addChildren(*Shape1004);

CShape* Shape1008 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1009 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1009->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1010 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1010->setUSE("HAnimSegmentLineColorRGBA");
LineSet1009->setColor(*ColorRGBA1010);

CCoordinate* Coordinate1011 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1011->setPoint(new float[6]{0.0044,1.6209,0.0236,2.1305,1.8444,4.1555});
LineSet1009->setCoord(*Coordinate1011);

Shape1008->setGeometry(LineSet1009);

HAnimSegment996->addChildren(*Shape1008);

CShape* Shape1012 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1013 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1013->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1014 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1014->setUSE("HAnimSegmentLineColorRGBA");
LineSet1013->setColor(*ColorRGBA1014);

CCoordinate* Coordinate1015 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1015->setPoint(new float[6]{0.0044,1.6209,0.0236,-2.1475,1.8444,4.1555});
LineSet1013->setCoord(*Coordinate1015);

Shape1012->setGeometry(LineSet1013);

HAnimSegment996->addChildren(*Shape1012);

CShape* Shape1016 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1017 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1017->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1018 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1018->setUSE("HAnimSegmentLineColorRGBA");
LineSet1017->setColor(*ColorRGBA1018);

CCoordinate* Coordinate1019 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1019->setPoint(new float[6]{0.0044,1.6209,0.0236,0.9581,1.8563,5.2175});
LineSet1017->setCoord(*Coordinate1019);

Shape1016->setGeometry(LineSet1017);

HAnimSegment996->addChildren(*Shape1016);

CShape* Shape1020 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1021 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1021->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1022 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1022->setUSE("HAnimSegmentLineColorRGBA");
LineSet1021->setColor(*ColorRGBA1022);

CCoordinate* Coordinate1023 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1023->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.9751,1.8563,5.2175});
LineSet1021->setCoord(*Coordinate1023);

Shape1020->setGeometry(LineSet1021);

HAnimSegment996->addChildren(*Shape1020);

CShape* Shape1024 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1025 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1025->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1026 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1026->setUSE("HAnimSegmentLineColorRGBA");
LineSet1025->setColor(*ColorRGBA1026);

CCoordinate* Coordinate1027 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1027->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0085,1.7229,1.148});
LineSet1025->setCoord(*Coordinate1027);

Shape1024->setGeometry(LineSet1025);

HAnimSegment996->addChildren(*Shape1024);

CHAnimSite* HAnimSite1028 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1028->setDEF("hanim_l_gonion_pt");
HAnimSite1028->setName("l_gonion_pt");
HAnimSite1028->setTranslation(new float[3]{0.0631,1.553,0.033});
CTouchSensor* TouchSensor1029 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1029->setDescription("HAnimSite l_gonion_pt");
HAnimSite1028->addChildren(*TouchSensor1029);

CShape* Shape1030 = (CShape *)(m_pScene.createNode("Shape"));
Shape1030->setUSE("HAnimSiteShape");
HAnimSite1028->addChildren(*Shape1030);

HAnimSegment996->addChildren(*HAnimSite1028);

CHAnimSite* HAnimSite1031 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1031->setDEF("hanim_menton_pt");
HAnimSite1031->setName("menton_pt");
CTouchSensor* TouchSensor1032 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1032->setDescription("HAnimSite menton_pt");
HAnimSite1031->addChildren(*TouchSensor1032);

CShape* Shape1033 = (CShape *)(m_pScene.createNode("Shape"));
Shape1033->setUSE("HAnimSiteShape");
HAnimSite1031->addChildren(*Shape1033);

HAnimSegment996->addChildren(*HAnimSite1031);

CHAnimSite* HAnimSite1034 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1034->setDEF("hanim_r_gonion_pt");
HAnimSite1034->setName("r_gonion_pt");
HAnimSite1034->setTranslation(new float[3]{-0.052,1.5529,0.0347});
CTouchSensor* TouchSensor1035 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1035->setDescription("HAnimSite r_gonion_pt");
HAnimSite1034->addChildren(*TouchSensor1035);

CShape* Shape1036 = (CShape *)(m_pScene.createNode("Shape"));
Shape1036->setUSE("HAnimSiteShape");
HAnimSite1034->addChildren(*Shape1036);

HAnimSegment996->addChildren(*HAnimSite1034);

CHAnimSite* HAnimSite1037 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1037->setDEF("hanim_supramenton_pt");
HAnimSite1037->setName("supramenton_pt");
HAnimSite1037->setTranslation(new float[3]{0.0061,1.541,0.0805});
CTouchSensor* TouchSensor1038 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1038->setDescription("HAnimSite supramenton_pt");
HAnimSite1037->addChildren(*TouchSensor1038);

CShape* Shape1039 = (CShape *)(m_pScene.createNode("Shape"));
Shape1039->setUSE("HAnimSiteShape");
HAnimSite1037->addChildren(*Shape1039);

HAnimSegment996->addChildren(*HAnimSite1037);

HAnimJoint995->addChildren(*HAnimSegment996);

CHAnimJoint* HAnimJoint1040 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1040->setDEF("hanim_l_eyelid_joint");
HAnimJoint1040->setName("l_eyelid_joint");
HAnimJoint1040->setCenter(new float[3]{2.2365,1.87,1.9285});
HAnimJoint995->addChildren(*HAnimJoint1040);

CHAnimJoint* HAnimJoint1041 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1041->setDEF("hanim_r_eyelid_joint");
HAnimJoint1041->setName("r_eyelid_joint");
HAnimJoint1041->setCenter(new float[3]{-2.2535,1.87,1.9285});
HAnimJoint995->addChildren(*HAnimJoint1041);

CHAnimJoint* HAnimJoint1042 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1042->setDEF("hanim_l_eyeball_joint");
HAnimJoint1042->setName("l_eyeball_joint");
HAnimJoint1042->setCenter(new float[3]{2.1305,1.8444,4.1555});
HAnimJoint995->addChildren(*HAnimJoint1042);

CHAnimJoint* HAnimJoint1043 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1043->setDEF("hanim_r_eyeball_joint");
HAnimJoint1043->setName("r_eyeball_joint");
HAnimJoint1043->setCenter(new float[3]{-2.1475,1.8444,4.1555});
HAnimJoint995->addChildren(*HAnimJoint1043);

CHAnimJoint* HAnimJoint1044 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1044->setDEF("hanim_l_eyebrow_joint");
HAnimJoint1044->setName("l_eyebrow_joint");
HAnimJoint1044->setCenter(new float[3]{0.9581,1.8563,5.2175});
HAnimJoint995->addChildren(*HAnimJoint1044);

CHAnimJoint* HAnimJoint1045 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1045->setDEF("hanim_r_eyebrow_joint");
HAnimJoint1045->setName("r_eyebrow_joint");
HAnimJoint1045->setCenter(new float[3]{-0.9751,1.8563,5.2175});
HAnimJoint995->addChildren(*HAnimJoint1045);

CHAnimJoint* HAnimJoint1046 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1046->setDEF("hanim_temporomandibular");
HAnimJoint1046->setName("temporomandibular");
HAnimJoint1046->setCenter(new float[3]{-0.0085,1.7229,1.148});
HAnimJoint995->addChildren(*HAnimJoint1046);

HAnimJoint953->addChildren(*HAnimJoint995);

HAnimJoint944->addChildren(*HAnimJoint953);

HAnimJoint932->addChildren(*HAnimJoint944);

HAnimJoint923->addChildren(*HAnimJoint932);

HAnimJoint914->addChildren(*HAnimJoint923);

HAnimJoint905->addChildren(*HAnimJoint914);

HAnimJoint896->addChildren(*HAnimJoint905);

HAnimJoint843->addChildren(*HAnimJoint896);

CHAnimJoint* HAnimJoint1047 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1047->setDEF("hanim_l_sternoclavicular");
HAnimJoint1047->setName("l_sternoclavicular");
HAnimJoint1047->setCenter(new float[3]{0.082,1.4488,-0.0353});
CHAnimSegment* HAnimSegment1048 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1048->setDEF("hanim_l_clavicle");
HAnimSegment1048->setName("l_clavicle");
CTransform* Transform1049 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1049->setTranslation(new float[3]{0.082,1.4488,-0.0353});
CTransform* Transform1050 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1051 = (CShape *)(m_pScene.createNode("Shape"));
Shape1051->setUSE("HAnimJointShape");
Transform1050->addChild(*Shape1051);

Transform1049->addChildren(*Transform1050);

HAnimSegment1048->addChildren(*Transform1049);

CShape* Shape1052 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1053 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1053->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1054 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1054->setUSE("HAnimSegmentLineColorRGBA");
LineSet1053->setColor(*ColorRGBA1054);

CCoordinate* Coordinate1055 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1055->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424});
LineSet1053->setCoord(*Coordinate1055);

Shape1052->setGeometry(LineSet1053);

HAnimSegment1048->addChildren(*Shape1052);

HAnimJoint1047->addChildren(*HAnimSegment1048);

CHAnimJoint* HAnimJoint1056 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1056->setDEF("hanim_l_acromioclavicular");
HAnimJoint1056->setName("l_acromioclavicular");
HAnimJoint1056->setCenter(new float[3]{0.0962,1.4269,-0.0424});
CHAnimSegment* HAnimSegment1057 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1057->setDEF("hanim_l_scapula");
HAnimSegment1057->setName("l_scapula");
CTransform* Transform1058 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1058->setTranslation(new float[3]{0.0962,1.4269,-0.0424});
CTransform* Transform1059 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1060 = (CShape *)(m_pScene.createNode("Shape"));
Shape1060->setUSE("HAnimJointShape");
Transform1059->addChild(*Shape1060);

Transform1058->addChildren(*Transform1059);

HAnimSegment1057->addChildren(*Transform1058);

CShape* Shape1061 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1062 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1062->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1063 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1063->setUSE("HAnimSegmentLineColorRGBA");
LineSet1062->setColor(*ColorRGBA1063);

CCoordinate* Coordinate1064 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1064->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387});
LineSet1062->setCoord(*Coordinate1064);

Shape1061->setGeometry(LineSet1062);

HAnimSegment1057->addChildren(*Shape1061);

CHAnimSite* HAnimSite1065 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1065->setDEF("hanim_l_bideltoid_pt");
HAnimSite1065->setName("l_bideltoid_pt");
CTouchSensor* TouchSensor1066 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1066->setDescription("HAnimSite l_bideltoid_pt");
HAnimSite1065->addChildren(*TouchSensor1066);

CShape* Shape1067 = (CShape *)(m_pScene.createNode("Shape"));
Shape1067->setUSE("HAnimSiteShape");
HAnimSite1065->addChildren(*Shape1067);

HAnimSegment1057->addChildren(*HAnimSite1065);

CHAnimSite* HAnimSite1068 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1068->setDEF("hanim_l_humeral_lateral_epicondyles_pt");
HAnimSite1068->setName("l_humeral_lateral_epicondyles_pt");
HAnimSite1068->setTranslation(new float[3]{0.228,1.1482,-0.11});
CTouchSensor* TouchSensor1069 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1069->setDescription("HAnimSite l_humeral_lateral_epicondyles_pt");
HAnimSite1068->addChildren(*TouchSensor1069);

CShape* Shape1070 = (CShape *)(m_pScene.createNode("Shape"));
Shape1070->setUSE("HAnimSiteShape");
HAnimSite1068->addChildren(*Shape1070);

HAnimSegment1057->addChildren(*HAnimSite1068);

HAnimJoint1056->addChildren(*HAnimSegment1057);

CHAnimJoint* HAnimJoint1071 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1071->setDEF("hanim_l_shoulder");
HAnimJoint1071->setName("l_shoulder");
HAnimJoint1071->setCenter(new float[3]{0.2029,1.4376,-0.0387});
CHAnimSegment* HAnimSegment1072 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1072->setDEF("hanim_l_upperarm");
HAnimSegment1072->setName("l_upperarm");
CTransform* Transform1073 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1073->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
CTransform* Transform1074 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1075 = (CShape *)(m_pScene.createNode("Shape"));
Shape1075->setUSE("HAnimJointShape");
Transform1074->addChild(*Shape1075);

Transform1073->addChildren(*Transform1074);

HAnimSegment1072->addChildren(*Transform1073);

CShape* Shape1076 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1077 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1077->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1078 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1078->setUSE("HAnimSegmentLineColorRGBA");
LineSet1077->setColor(*ColorRGBA1078);

CCoordinate* Coordinate1079 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1079->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
LineSet1077->setCoord(*Coordinate1079);

Shape1076->setGeometry(LineSet1077);

HAnimSegment1072->addChildren(*Shape1076);

CHAnimSite* HAnimSite1080 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1080->setDEF("hanim_l_humeral_medial_epicondyles_pt");
HAnimSite1080->setName("l_humeral_medial_epicondyles_pt");
HAnimSite1080->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
CTouchSensor* TouchSensor1081 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1081->setDescription("HAnimSite l_humeral_medial_epicondyles_pt");
HAnimSite1080->addChildren(*TouchSensor1081);

CShape* Shape1082 = (CShape *)(m_pScene.createNode("Shape"));
Shape1082->setUSE("HAnimSiteShape");
HAnimSite1080->addChildren(*Shape1082);

HAnimSegment1072->addChildren(*HAnimSite1080);

CHAnimSite* HAnimSite1083 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1083->setDEF("hanim_l_olecranon_pt");
HAnimSite1083->setName("l_olecranon_pt");
HAnimSite1083->setTranslation(new float[3]{-0.1962,1.1375,-0.1123});
CTouchSensor* TouchSensor1084 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1084->setDescription("HAnimSite l_olecranon_pt");
HAnimSite1083->addChildren(*TouchSensor1084);

CShape* Shape1085 = (CShape *)(m_pScene.createNode("Shape"));
Shape1085->setUSE("HAnimSiteShape");
HAnimSite1083->addChildren(*Shape1085);

HAnimSegment1072->addChildren(*HAnimSite1083);

CHAnimSite* HAnimSite1086 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1086->setDEF("hanim_l_radial_styloid_pt");
HAnimSite1086->setName("l_radial_styloid_pt");
HAnimSite1086->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
CTouchSensor* TouchSensor1087 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1087->setDescription("HAnimSite l_radial_styloid_pt");
HAnimSite1086->addChildren(*TouchSensor1087);

CShape* Shape1088 = (CShape *)(m_pScene.createNode("Shape"));
Shape1088->setUSE("HAnimSiteShape");
HAnimSite1086->addChildren(*Shape1088);

HAnimSegment1072->addChildren(*HAnimSite1086);

CHAnimSite* HAnimSite1089 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1089->setDEF("hanim_l_radiale_pt");
HAnimSite1089->setName("l_radiale_pt");
HAnimSite1089->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
CTouchSensor* TouchSensor1090 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1090->setDescription("HAnimSite l_radiale_pt");
HAnimSite1089->addChildren(*TouchSensor1090);

CShape* Shape1091 = (CShape *)(m_pScene.createNode("Shape"));
Shape1091->setUSE("HAnimSiteShape");
HAnimSite1089->addChildren(*Shape1091);

HAnimSegment1072->addChildren(*HAnimSite1089);

HAnimJoint1071->addChildren(*HAnimSegment1072);

CHAnimJoint* HAnimJoint1092 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1092->setDEF("hanim_l_elbow");
HAnimJoint1092->setName("l_elbow");
HAnimJoint1092->setCenter(new float[3]{0.2014,1.1357,-0.0682});
CHAnimSegment* HAnimSegment1093 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1093->setDEF("hanim_l_forearm");
HAnimSegment1093->setName("l_forearm");
CTransform* Transform1094 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1094->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
CTransform* Transform1095 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1096 = (CShape *)(m_pScene.createNode("Shape"));
Shape1096->setUSE("HAnimJointShape");
Transform1095->addChild(*Shape1096);

Transform1094->addChildren(*Transform1095);

HAnimSegment1093->addChildren(*Transform1094);

CShape* Shape1097 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1098 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1098->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1099 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1099->setUSE("HAnimSegmentLineColorRGBA");
LineSet1098->setColor(*ColorRGBA1099);

CCoordinate* Coordinate1100 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1100->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
LineSet1098->setCoord(*Coordinate1100);

Shape1097->setGeometry(LineSet1098);

HAnimSegment1093->addChildren(*Shape1097);

CHAnimSite* HAnimSite1101 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1101->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite1101->setName("l_ulnar_styloid_pt");
HAnimSite1101->setTranslation(new float[3]{-0.2142,0.8529,-0.0648});
CTouchSensor* TouchSensor1102 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1102->setDescription("HAnimSite l_ulnar_styloid_pt");
HAnimSite1101->addChildren(*TouchSensor1102);

CShape* Shape1103 = (CShape *)(m_pScene.createNode("Shape"));
Shape1103->setUSE("HAnimSiteShape");
HAnimSite1101->addChildren(*Shape1103);

HAnimSegment1093->addChildren(*HAnimSite1101);

HAnimJoint1092->addChildren(*HAnimSegment1093);

CHAnimJoint* HAnimJoint1104 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1104->setDEF("hanim_l_radiocarpal");
HAnimJoint1104->setName("l_radiocarpal");
HAnimJoint1104->setCenter(new float[3]{0.1984,0.8663,-0.0583});
CHAnimSegment* HAnimSegment1105 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1105->setDEF("hanim_l_carpal");
HAnimSegment1105->setName("l_carpal");
CTransform* Transform1106 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1106->setTranslation(new float[3]{0.2,0.85,-0.05});
Transform1106->setRotation(new float[4]{0,0,1,-3.14});
Transform1106->setScale(new float[3]{0.2,0.2,0.2});
CTransform* Transform1107 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1107->setRotation(new float[4]{0,1,0,-1.57});
CShape* Shape1108 = (CShape *)(m_pScene.createNode("Shape"));
Shape1108->setUSE("HAnimJointShape");
Transform1107->addChild(*Shape1108);

Transform1106->addChildren(*Transform1107);

HAnimSegment1105->addChildren(*Transform1106);

CShape* Shape1109 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1110 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1110->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1111 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1111->setUSE("HAnimSegmentLineColorRGBA");
LineSet1110->setColor(*ColorRGBA1111);

CCoordinate* Coordinate1112 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1112->setPoint(new float[6]{0.1984,0.8663,-0.0583,8.0485,0.9213,1.3235});
LineSet1110->setCoord(*Coordinate1112);

Shape1109->setGeometry(LineSet1110);

HAnimSegment1105->addChildren(*Shape1109);

CShape* Shape1113 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1114 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1114->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1115 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1115->setUSE("HAnimSegmentLineColorRGBA");
LineSet1114->setColor(*ColorRGBA1115);

CCoordinate* Coordinate1116 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1116->setPoint(new float[6]{0.1984,0.8663,-0.0583,8.0485,0.9225,0.8386});
LineSet1114->setCoord(*Coordinate1116);

Shape1113->setGeometry(LineSet1114);

HAnimSegment1105->addChildren(*Shape1113);

CShape* Shape1117 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1118 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1118->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1119 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1119->setUSE("HAnimSegmentLineColorRGBA");
LineSet1118->setColor(*ColorRGBA1119);

CCoordinate* Coordinate1120 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1120->setPoint(new float[6]{0.1984,0.8663,-0.0583,8.0395,0.9246,0.2513});
LineSet1118->setCoord(*Coordinate1120);

Shape1117->setGeometry(LineSet1118);

HAnimSegment1105->addChildren(*Shape1117);

CShape* Shape1121 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1122 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1122->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1123 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1123->setUSE("HAnimSegmentLineColorRGBA");
LineSet1122->setColor(*ColorRGBA1123);

CCoordinate* Coordinate1124 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1124->setPoint(new float[6]{0.1984,0.8663,-0.0583,8.0395,0.921,-0.6795});
LineSet1122->setCoord(*Coordinate1124);

Shape1121->setGeometry(LineSet1122);

HAnimSegment1105->addChildren(*Shape1121);

HAnimJoint1104->addChildren(*HAnimSegment1105);

CHAnimJoint* HAnimJoint1125 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1125->setDEF("hanim_l_midcarpal_1");
HAnimJoint1125->setName("l_midcarpal_1");
HAnimJoint1125->setCenter(new float[3]{8.0485,0.9213,1.3235});
CHAnimSegment* HAnimSegment1126 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1126->setDEF("hanim_l_trapezium");
HAnimSegment1126->setName("l_trapezium");
CTransform* Transform1127 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1127->setTranslation(new float[3]{8.0485,0.9213,1.3235});
CTransform* Transform1128 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1129 = (CShape *)(m_pScene.createNode("Shape"));
Shape1129->setUSE("HAnimJointShape");
Transform1128->addChild(*Shape1129);

Transform1127->addChildren(*Transform1128);

HAnimSegment1126->addChildren(*Transform1127);

CShape* Shape1130 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1131 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1131->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1132 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1132->setUSE("HAnimSegmentLineColorRGBA");
LineSet1131->setColor(*ColorRGBA1132);

CCoordinate* Coordinate1133 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1133->setPoint(new float[6]{8.0485,0.9213,1.3235,0.1924,0.8472,-0.0534});
LineSet1131->setCoord(*Coordinate1133);

Shape1130->setGeometry(LineSet1131);

HAnimSegment1126->addChildren(*Shape1130);

HAnimJoint1125->addChildren(*HAnimSegment1126);

CHAnimJoint* HAnimJoint1134 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1134->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint1134->setName("l_carpometacarpal_1");
HAnimJoint1134->setCenter(new float[3]{0.1924,0.8472,-0.0534});
CHAnimSegment* HAnimSegment1135 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1135->setDEF("hanim_l_metacarpal_1");
HAnimSegment1135->setName("l_metacarpal_1");
CTransform* Transform1136 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1136->setTranslation(new float[3]{0.1924,0.8472,-0.0534});
CTransform* Transform1137 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1138 = (CShape *)(m_pScene.createNode("Shape"));
Shape1138->setUSE("HAnimJointShape");
Transform1137->addChild(*Shape1138);

Transform1136->addChildren(*Transform1137);

HAnimSegment1135->addChildren(*Transform1136);

CShape* Shape1139 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1140 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1140->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1141 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1141->setUSE("HAnimSegmentLineColorRGBA");
LineSet1140->setColor(*ColorRGBA1141);

CCoordinate* Coordinate1142 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1142->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246});
LineSet1140->setCoord(*Coordinate1142);

Shape1139->setGeometry(LineSet1140);

HAnimSegment1135->addChildren(*Shape1139);

HAnimJoint1134->addChildren(*HAnimSegment1135);

CHAnimJoint* HAnimJoint1143 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1143->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint1143->setName("l_metacarpophalangeal_1");
HAnimJoint1143->setCenter(new float[3]{0.1951,0.8226,0.0246});
CHAnimSegment* HAnimSegment1144 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1144->setDEF("hanim_l_carpal_proximal_phalanx_1");
HAnimSegment1144->setName("l_carpal_proximal_phalanx_1");
CTransform* Transform1145 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1145->setTranslation(new float[3]{0.1951,0.8226,0.0246});
CTransform* Transform1146 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1147 = (CShape *)(m_pScene.createNode("Shape"));
Shape1147->setUSE("HAnimJointShape");
Transform1146->addChild(*Shape1147);

Transform1145->addChildren(*Transform1146);

HAnimSegment1144->addChildren(*Transform1145);

CShape* Shape1148 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1149 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1149->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1150 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1150->setUSE("HAnimSegmentLineColorRGBA");
LineSet1149->setColor(*ColorRGBA1150);

CCoordinate* Coordinate1151 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1151->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464});
LineSet1149->setCoord(*Coordinate1151);

Shape1148->setGeometry(LineSet1149);

HAnimSegment1144->addChildren(*Shape1148);

CHAnimSite* HAnimSite1152 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1152->setDEF("hanim_l_carpal_distal_phalanx_1_tip");
HAnimSite1152->setName("l_carpal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor1153 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1153->setDescription("HAnimSite l_carpal_distal_phalanx_1_tip");
HAnimSite1152->addChildren(*TouchSensor1153);

CShape* Shape1154 = (CShape *)(m_pScene.createNode("Shape"));
Shape1154->setUSE("HAnimSiteShape");
HAnimSite1152->addChildren(*Shape1154);

HAnimSegment1144->addChildren(*HAnimSite1152);

HAnimJoint1143->addChildren(*HAnimSegment1144);

CHAnimJoint* HAnimJoint1155 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1155->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint1155->setName("l_carpal_interphalangeal_1");
HAnimJoint1155->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint1143->addChildren(*HAnimJoint1155);

HAnimJoint1134->addChildren(*HAnimJoint1143);

HAnimJoint1125->addChildren(*HAnimJoint1134);

HAnimJoint1104->addChildren(*HAnimJoint1125);

CHAnimJoint* HAnimJoint1156 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1156->setDEF("hanim_l_midcarpal_2");
HAnimJoint1156->setName("l_midcarpal_2");
HAnimJoint1156->setCenter(new float[3]{8.0485,0.9225,0.8386});
CHAnimSegment* HAnimSegment1157 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1157->setDEF("hanim_l_trapezoid");
HAnimSegment1157->setName("l_trapezoid");
CTransform* Transform1158 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1158->setTranslation(new float[3]{8.0485,0.9225,0.8386});
CTransform* Transform1159 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1160 = (CShape *)(m_pScene.createNode("Shape"));
Shape1160->setUSE("HAnimJointShape");
Transform1159->addChild(*Shape1160);

Transform1158->addChildren(*Transform1159);

HAnimSegment1157->addChildren(*Transform1158);

CShape* Shape1161 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1162 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1162->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1163 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1163->setUSE("HAnimSegmentLineColorRGBA");
LineSet1162->setColor(*ColorRGBA1163);

CCoordinate* Coordinate1164 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1164->setPoint(new float[6]{8.0485,0.9225,0.8386,0.1983,0.8024,-0.028});
LineSet1162->setCoord(*Coordinate1164);

Shape1161->setGeometry(LineSet1162);

HAnimSegment1157->addChildren(*Shape1161);

CHAnimSite* HAnimSite1165 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1165->setDEF("hanim_l_metacarpal_phalanx_2_pt");
HAnimSite1165->setName("l_metacarpal_phalanx_2_pt");
HAnimSite1165->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
CTouchSensor* TouchSensor1166 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1166->setDescription("HAnimSite l_metacarpal_phalanx_2_pt");
HAnimSite1165->addChildren(*TouchSensor1166);

CShape* Shape1167 = (CShape *)(m_pScene.createNode("Shape"));
Shape1167->setUSE("HAnimSiteShape");
HAnimSite1165->addChildren(*Shape1167);

HAnimSegment1157->addChildren(*HAnimSite1165);

HAnimJoint1156->addChildren(*HAnimSegment1157);

CHAnimJoint* HAnimJoint1168 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1168->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint1168->setName("l_carpometacarpal_2");
HAnimJoint1168->setCenter(new float[3]{0.1983,0.8024,-0.028});
CHAnimSegment* HAnimSegment1169 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1169->setDEF("hanim_l_metacarpal_2");
HAnimSegment1169->setName("l_metacarpal_2");
CTransform* Transform1170 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1170->setTranslation(new float[3]{0.1983,0.8024,-0.028});
CTransform* Transform1171 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1172 = (CShape *)(m_pScene.createNode("Shape"));
Shape1172->setUSE("HAnimJointShape");
Transform1171->addChild(*Shape1172);

Transform1170->addChildren(*Transform1171);

HAnimSegment1169->addChildren(*Transform1170);

CShape* Shape1173 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1174 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1174->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1175 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1175->setUSE("HAnimSegmentLineColorRGBA");
LineSet1174->setColor(*ColorRGBA1175);

CCoordinate* Coordinate1176 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1176->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028});
LineSet1174->setCoord(*Coordinate1176);

Shape1173->setGeometry(LineSet1174);

HAnimSegment1169->addChildren(*Shape1173);

HAnimJoint1168->addChildren(*HAnimSegment1169);

CHAnimJoint* HAnimJoint1177 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1177->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint1177->setName("l_metacarpophalangeal_2");
HAnimJoint1177->setCenter(new float[3]{0.1983,0.7815,-0.028});
CHAnimSegment* HAnimSegment1178 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1178->setDEF("hanim_l_carpal_proximal_phalanx_2 ");
HAnimSegment1178->setName("l_carpal_proximal_phalanx_2 ");
CTransform* Transform1179 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1179->setTranslation(new float[3]{0.1983,0.7815,-0.028});
CTransform* Transform1180 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1181 = (CShape *)(m_pScene.createNode("Shape"));
Shape1181->setUSE("HAnimJointShape");
Transform1180->addChild(*Shape1181);

Transform1179->addChildren(*Transform1180);

HAnimSegment1178->addChildren(*Transform1179);

CShape* Shape1182 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1183 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1183->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1184 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1184->setUSE("HAnimSegmentLineColorRGBA");
LineSet1183->setColor(*ColorRGBA1184);

CCoordinate* Coordinate1185 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1185->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248});
LineSet1183->setCoord(*Coordinate1185);

Shape1182->setGeometry(LineSet1183);

HAnimSegment1178->addChildren(*Shape1182);

HAnimJoint1177->addChildren(*HAnimSegment1178);

CHAnimJoint* HAnimJoint1186 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1186->setDEF("hanim_l_carpal_proximal_interphalangeal_1");
HAnimJoint1186->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint1186->setCenter(new float[3]{0.2017,0.7363,-0.0248});
CHAnimSegment* HAnimSegment1187 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1187->setDEF("hanim_l_carpal_middle_phalanx_1");
HAnimSegment1187->setName("l_carpal_middle_phalanx_2");
CTransform* Transform1188 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1188->setTranslation(new float[3]{0.2017,0.7363,-0.0248});
CTransform* Transform1189 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1190 = (CShape *)(m_pScene.createNode("Shape"));
Shape1190->setUSE("HAnimJointShape");
Transform1189->addChild(*Shape1190);

Transform1188->addChildren(*Transform1189);

HAnimSegment1187->addChildren(*Transform1188);

CShape* Shape1191 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1192 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1192->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1193 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1193->setUSE("HAnimSegmentLineColorRGBA");
LineSet1192->setColor(*ColorRGBA1193);

CCoordinate* Coordinate1194 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1194->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236});
LineSet1192->setCoord(*Coordinate1194);

Shape1191->setGeometry(LineSet1192);

HAnimSegment1187->addChildren(*Shape1191);

CHAnimSite* HAnimSite1195 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1195->setDEF("hanim_l_carpal_distal_phalanx_2_tip");
HAnimSite1195->setName("l_carpal_distal_phalanx_2_tip");
CTouchSensor* TouchSensor1196 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1196->setDescription("HAnimSite l_carpal_distal_phalanx_2_tip");
HAnimSite1195->addChildren(*TouchSensor1196);

CShape* Shape1197 = (CShape *)(m_pScene.createNode("Shape"));
Shape1197->setUSE("HAnimSiteShape");
HAnimSite1195->addChildren(*Shape1197);

HAnimSegment1187->addChildren(*HAnimSite1195);

CHAnimSite* HAnimSite1198 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1198->setDEF("hanim_l_dactylion_pt");
HAnimSite1198->setName("l_dactylion_pt");
HAnimSite1198->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
CTouchSensor* TouchSensor1199 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1199->setDescription("HAnimSite l_dactylion_pt");
HAnimSite1198->addChildren(*TouchSensor1199);

CShape* Shape1200 = (CShape *)(m_pScene.createNode("Shape"));
Shape1200->setUSE("HAnimSiteShape");
HAnimSite1198->addChildren(*Shape1200);

HAnimSegment1187->addChildren(*HAnimSite1198);

HAnimJoint1186->addChildren(*HAnimSegment1187);

CHAnimJoint* HAnimJoint1201 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1201->setDEF("hanim_l_carpal_distal_interphalangeal_1");
HAnimJoint1201->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint1201->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint1186->addChildren(*HAnimJoint1201);

HAnimJoint1177->addChildren(*HAnimJoint1186);

HAnimJoint1168->addChildren(*HAnimJoint1177);

HAnimJoint1156->addChildren(*HAnimJoint1168);

HAnimJoint1104->addChildren(*HAnimJoint1156);

CHAnimJoint* HAnimJoint1202 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1202->setDEF("hanim_l_midcarpal_3");
HAnimJoint1202->setName("l_midcarpal_3");
HAnimJoint1202->setCenter(new float[3]{8.0395,0.9246,0.2513});
CHAnimSegment* HAnimSegment1203 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1203->setDEF("hanim_l_capitate");
HAnimSegment1203->setName("l_capitate");
CTransform* Transform1204 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1204->setTranslation(new float[3]{8.0395,0.9246,0.2513});
CTransform* Transform1205 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1206 = (CShape *)(m_pScene.createNode("Shape"));
Shape1206->setUSE("HAnimJointShape");
Transform1205->addChild(*Shape1206);

Transform1204->addChildren(*Transform1205);

HAnimSegment1203->addChildren(*Transform1204);

CShape* Shape1207 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1208 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1208->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1209 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1209->setUSE("HAnimSegmentLineColorRGBA");
LineSet1208->setColor(*ColorRGBA1209);

CCoordinate* Coordinate1210 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1210->setPoint(new float[6]{8.0395,0.9246,0.2513,0.1987,0.8029,-0.053});
LineSet1208->setCoord(*Coordinate1210);

Shape1207->setGeometry(LineSet1208);

HAnimSegment1203->addChildren(*Shape1207);

CHAnimSite* HAnimSite1211 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1211->setDEF("hanim_l_metacarpal_phalanx_3_pt");
HAnimSite1211->setName("l_metacarpal_phalanx_3_pt");
CTouchSensor* TouchSensor1212 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1212->setDescription("HAnimSite l_metacarpal_phalanx_3_pt");
HAnimSite1211->addChildren(*TouchSensor1212);

CShape* Shape1213 = (CShape *)(m_pScene.createNode("Shape"));
Shape1213->setUSE("HAnimSiteShape");
HAnimSite1211->addChildren(*Shape1213);

HAnimSegment1203->addChildren(*HAnimSite1211);

HAnimJoint1202->addChildren(*HAnimSegment1203);

CHAnimJoint* HAnimJoint1214 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1214->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint1214->setName("l_carpometacarpal_3");
HAnimJoint1214->setCenter(new float[3]{0.1987,0.8029,-0.053});
CHAnimSegment* HAnimSegment1215 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1215->setDEF("hanim_l_metacarpal_3");
HAnimSegment1215->setName("l_metacarpal_3");
CTransform* Transform1216 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1216->setTranslation(new float[3]{0.1987,0.8029,-0.053});
CTransform* Transform1217 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1218 = (CShape *)(m_pScene.createNode("Shape"));
Shape1218->setUSE("HAnimJointShape");
Transform1217->addChild(*Shape1218);

Transform1216->addChildren(*Transform1217);

HAnimSegment1215->addChildren(*Transform1216);

CShape* Shape1219 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1220 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1220->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1221 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1221->setUSE("HAnimSegmentLineColorRGBA");
LineSet1220->setColor(*ColorRGBA1221);

CCoordinate* Coordinate1222 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1222->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053});
LineSet1220->setCoord(*Coordinate1222);

Shape1219->setGeometry(LineSet1220);

HAnimSegment1215->addChildren(*Shape1219);

HAnimJoint1214->addChildren(*HAnimSegment1215);

CHAnimJoint* HAnimJoint1223 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1223->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint1223->setName("l_metacarpophalangeal_3");
HAnimJoint1223->setCenter(new float[3]{0.1987,0.7818,-0.053});
CHAnimSegment* HAnimSegment1224 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1224->setDEF("hanim_l_carpal_proximal_phalanx_2");
HAnimSegment1224->setName("l_carpal_proximal_phalanx_3");
CTransform* Transform1225 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1225->setTranslation(new float[3]{0.1987,0.7818,-0.053});
CTransform* Transform1226 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1227 = (CShape *)(m_pScene.createNode("Shape"));
Shape1227->setUSE("HAnimJointShape");
Transform1226->addChild(*Shape1227);

Transform1225->addChildren(*Transform1226);

HAnimSegment1224->addChildren(*Transform1225);

CShape* Shape1228 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1229 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1229->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1230 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1230->setUSE("HAnimSegmentLineColorRGBA");
LineSet1229->setColor(*ColorRGBA1230);

CCoordinate* Coordinate1231 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1231->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503});
LineSet1229->setCoord(*Coordinate1231);

Shape1228->setGeometry(LineSet1229);

HAnimSegment1224->addChildren(*Shape1228);

HAnimJoint1223->addChildren(*HAnimSegment1224);

CHAnimJoint* HAnimJoint1232 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1232->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint1232->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint1232->setCenter(new float[3]{0.2013,0.7273,-0.0503});
CHAnimSegment* HAnimSegment1233 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1233->setDEF("hanim_l_carpal_middle_phalanx_2");
HAnimSegment1233->setName("l_carpal_middle_phalanx_3");
CTransform* Transform1234 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1234->setTranslation(new float[3]{0.2013,0.7273,-0.0503});
CTransform* Transform1235 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1236 = (CShape *)(m_pScene.createNode("Shape"));
Shape1236->setUSE("HAnimJointShape");
Transform1235->addChild(*Shape1236);

Transform1234->addChildren(*Transform1235);

HAnimSegment1233->addChildren(*Transform1234);

CShape* Shape1237 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1238 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1238->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1239 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1239->setUSE("HAnimSegmentLineColorRGBA");
LineSet1238->setColor(*ColorRGBA1239);

CCoordinate* Coordinate1240 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1240->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494});
LineSet1238->setCoord(*Coordinate1240);

Shape1237->setGeometry(LineSet1238);

HAnimSegment1233->addChildren(*Shape1237);

CHAnimSite* HAnimSite1241 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1241->setDEF("hanim_l_carpal_distal_phalanx_3_tip");
HAnimSite1241->setName("l_carpal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor1242 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1242->setDescription("HAnimSite l_carpal_distal_phalanx_3_tip");
HAnimSite1241->addChildren(*TouchSensor1242);

CShape* Shape1243 = (CShape *)(m_pScene.createNode("Shape"));
Shape1243->setUSE("HAnimSiteShape");
HAnimSite1241->addChildren(*Shape1243);

HAnimSegment1233->addChildren(*HAnimSite1241);

HAnimJoint1232->addChildren(*HAnimSegment1233);

CHAnimJoint* HAnimJoint1244 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1244->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint1244->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint1244->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint1232->addChildren(*HAnimJoint1244);

HAnimJoint1223->addChildren(*HAnimJoint1232);

HAnimJoint1214->addChildren(*HAnimJoint1223);

HAnimJoint1202->addChildren(*HAnimJoint1214);

HAnimJoint1104->addChildren(*HAnimJoint1202);

CHAnimJoint* HAnimJoint1245 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1245->setDEF("hanim_l_midcarpal_4_1");
HAnimJoint1245->setName("l_midcarpal_4_5");
HAnimJoint1245->setCenter(new float[3]{8.0395,0.921,-0.6795});
CHAnimSegment* HAnimSegment1246 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1246->setDEF("hanim_l_hamate");
HAnimSegment1246->setName("l_hamate");
CTransform* Transform1247 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1247->setTranslation(new float[3]{8.0395,0.921,-0.6795});
CTransform* Transform1248 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1249 = (CShape *)(m_pScene.createNode("Shape"));
Shape1249->setUSE("HAnimJointShape");
Transform1248->addChild(*Shape1249);

Transform1247->addChildren(*Transform1248);

HAnimSegment1246->addChildren(*Transform1247);

CShape* Shape1250 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1251 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1251->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1252 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1252->setUSE("HAnimSegmentLineColorRGBA");
LineSet1251->setColor(*ColorRGBA1252);

CCoordinate* Coordinate1253 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1253->setPoint(new float[6]{8.0395,0.921,-0.6795,0.1956,0.8019,-0.0794});
LineSet1251->setCoord(*Coordinate1253);

Shape1250->setGeometry(LineSet1251);

HAnimSegment1246->addChildren(*Shape1250);

CShape* Shape1254 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1255 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1255->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1256 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1256->setUSE("HAnimSegmentLineColorRGBA");
LineSet1255->setColor(*ColorRGBA1256);

CCoordinate* Coordinate1257 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1257->setPoint(new float[6]{8.0395,0.921,-0.6795,0.1925,0.8066,-0.1036});
LineSet1255->setCoord(*Coordinate1257);

Shape1254->setGeometry(LineSet1255);

HAnimSegment1246->addChildren(*Shape1254);

CHAnimSite* HAnimSite1258 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1258->setDEF("hanim_l_metacarpal_phalanx_5_pt");
HAnimSite1258->setName("l_metacarpal_phalanx_5_pt");
HAnimSite1258->setTranslation(new float[3]{0.1929,0.786,-0.1122});
CTouchSensor* TouchSensor1259 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1259->setDescription("HAnimSite l_metacarpal_phalanx_5_pt");
HAnimSite1258->addChildren(*TouchSensor1259);

CShape* Shape1260 = (CShape *)(m_pScene.createNode("Shape"));
Shape1260->setUSE("HAnimSiteShape");
HAnimSite1258->addChildren(*Shape1260);

HAnimSegment1246->addChildren(*HAnimSite1258);

HAnimJoint1245->addChildren(*HAnimSegment1246);

CHAnimJoint* HAnimJoint1261 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1261->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint1261->setName("l_carpometacarpal_4");
HAnimJoint1261->setCenter(new float[3]{0.1956,0.8019,-0.0794});
CHAnimSegment* HAnimSegment1262 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1262->setDEF("hanim_l_metacarpal_4");
HAnimSegment1262->setName("l_metacarpal_4");
CTransform* Transform1263 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1263->setTranslation(new float[3]{0.1956,0.8019,-0.0794});
CTransform* Transform1264 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1265 = (CShape *)(m_pScene.createNode("Shape"));
Shape1265->setUSE("HAnimJointShape");
Transform1264->addChild(*Shape1265);

Transform1263->addChildren(*Transform1264);

HAnimSegment1262->addChildren(*Transform1263);

CShape* Shape1266 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1267 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1267->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1268 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1268->setUSE("HAnimSegmentLineColorRGBA");
LineSet1267->setColor(*ColorRGBA1268);

CCoordinate* Coordinate1269 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1269->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794});
LineSet1267->setCoord(*Coordinate1269);

Shape1266->setGeometry(LineSet1267);

HAnimSegment1262->addChildren(*Shape1266);

HAnimJoint1261->addChildren(*HAnimSegment1262);

CHAnimJoint* HAnimJoint1270 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1270->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint1270->setName("l_metacarpophalangeal_4");
HAnimJoint1270->setCenter(new float[3]{0.1956,0.7815,-0.0794});
CHAnimSegment* HAnimSegment1271 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1271->setDEF("hanim_l_carpal_proximal_phalanx_3");
HAnimSegment1271->setName("l_carpal_proximal_phalanx_4");
CTransform* Transform1272 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1272->setTranslation(new float[3]{0.1956,0.7815,-0.0794});
CTransform* Transform1273 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1274 = (CShape *)(m_pScene.createNode("Shape"));
Shape1274->setUSE("HAnimJointShape");
Transform1273->addChild(*Shape1274);

Transform1272->addChildren(*Transform1273);

HAnimSegment1271->addChildren(*Transform1272);

CShape* Shape1275 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1276 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1276->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1277 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1277->setUSE("HAnimSegmentLineColorRGBA");
LineSet1276->setColor(*ColorRGBA1277);

CCoordinate* Coordinate1278 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1278->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777});
LineSet1276->setCoord(*Coordinate1278);

Shape1275->setGeometry(LineSet1276);

HAnimSegment1271->addChildren(*Shape1275);

HAnimJoint1270->addChildren(*HAnimSegment1271);

CHAnimJoint* HAnimJoint1279 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1279->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint1279->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint1279->setCenter(new float[3]{0.1973,0.7287,-0.0777});
CHAnimSegment* HAnimSegment1280 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1280->setDEF("hanim_l_carpal_middle_phalanx_3");
HAnimSegment1280->setName("l_carpal_middle_phalanx_4");
CTransform* Transform1281 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1281->setTranslation(new float[3]{0.1973,0.7287,-0.0777});
CTransform* Transform1282 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1283 = (CShape *)(m_pScene.createNode("Shape"));
Shape1283->setUSE("HAnimJointShape");
Transform1282->addChild(*Shape1283);

Transform1281->addChildren(*Transform1282);

HAnimSegment1280->addChildren(*Transform1281);

CShape* Shape1284 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1285 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1285->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1286 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1286->setUSE("HAnimSegmentLineColorRGBA");
LineSet1285->setColor(*ColorRGBA1286);

CCoordinate* Coordinate1287 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1287->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767});
LineSet1285->setCoord(*Coordinate1287);

Shape1284->setGeometry(LineSet1285);

HAnimSegment1280->addChildren(*Shape1284);

CHAnimSite* HAnimSite1288 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1288->setDEF("hanim_l_carpal_distal_phalanx_4_tip");
HAnimSite1288->setName("l_carpal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor1289 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1289->setDescription("HAnimSite l_carpal_distal_phalanx_4_tip");
HAnimSite1288->addChildren(*TouchSensor1289);

CShape* Shape1290 = (CShape *)(m_pScene.createNode("Shape"));
Shape1290->setUSE("HAnimSiteShape");
HAnimSite1288->addChildren(*Shape1290);

HAnimSegment1280->addChildren(*HAnimSite1288);

HAnimJoint1279->addChildren(*HAnimSegment1280);

CHAnimJoint* HAnimJoint1291 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1291->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint1291->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint1291->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint1279->addChildren(*HAnimJoint1291);

HAnimJoint1270->addChildren(*HAnimJoint1279);

HAnimJoint1261->addChildren(*HAnimJoint1270);

HAnimJoint1245->addChildren(*HAnimJoint1261);

CHAnimJoint* HAnimJoint1292 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1292->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint1292->setName("l_carpometacarpal_5");
HAnimJoint1292->setCenter(new float[3]{0.1925,0.8066,-0.1036});
CHAnimSegment* HAnimSegment1293 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1293->setDEF("hanim_l_metacarpal_5");
HAnimSegment1293->setName("l_metacarpal_5");
CTransform* Transform1294 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1294->setTranslation(new float[3]{0.1925,0.8066,-0.1036});
CTransform* Transform1295 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1296 = (CShape *)(m_pScene.createNode("Shape"));
Shape1296->setUSE("HAnimJointShape");
Transform1295->addChild(*Shape1296);

Transform1294->addChildren(*Transform1295);

HAnimSegment1293->addChildren(*Transform1294);

CShape* Shape1297 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1298 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1298->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1299 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1299->setUSE("HAnimSegmentLineColorRGBA");
LineSet1298->setColor(*ColorRGBA1299);

CCoordinate* Coordinate1300 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1300->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036});
LineSet1298->setCoord(*Coordinate1300);

Shape1297->setGeometry(LineSet1298);

HAnimSegment1293->addChildren(*Shape1297);

HAnimJoint1292->addChildren(*HAnimSegment1293);

CHAnimJoint* HAnimJoint1301 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1301->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint1301->setName("l_metacarpophalangeal_5");
HAnimJoint1301->setCenter(new float[3]{0.1925,0.7866,-0.1036});
CHAnimSegment* HAnimSegment1302 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1302->setDEF("hanim_l_carpal_proximal_phalanx_4");
HAnimSegment1302->setName("l_carpal_proximal_phalanx_5");
CTransform* Transform1303 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1303->setTranslation(new float[3]{0.1925,0.7866,-0.1036});
CTransform* Transform1304 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1305 = (CShape *)(m_pScene.createNode("Shape"));
Shape1305->setUSE("HAnimJointShape");
Transform1304->addChild(*Shape1305);

Transform1303->addChildren(*Transform1304);

HAnimSegment1302->addChildren(*Transform1303);

CShape* Shape1306 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1307 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1307->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1308 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1308->setUSE("HAnimSegmentLineColorRGBA");
LineSet1307->setColor(*ColorRGBA1308);

CCoordinate* Coordinate1309 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1309->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024});
LineSet1307->setCoord(*Coordinate1309);

Shape1306->setGeometry(LineSet1307);

HAnimSegment1302->addChildren(*Shape1306);

HAnimJoint1301->addChildren(*HAnimSegment1302);

CHAnimJoint* HAnimJoint1310 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1310->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint1310->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint1310->setCenter(new float[3]{0.1938,0.7452,-0.1024});
CHAnimSegment* HAnimSegment1311 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1311->setDEF("hanim_l_carpal_middle_phalanx_4");
HAnimSegment1311->setName("l_carpal_middle_phalanx_5");
CTransform* Transform1312 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1312->setTranslation(new float[3]{0.1938,0.7452,-0.1024});
CTransform* Transform1313 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1314 = (CShape *)(m_pScene.createNode("Shape"));
Shape1314->setUSE("HAnimJointShape");
Transform1313->addChild(*Shape1314);

Transform1312->addChildren(*Transform1313);

HAnimSegment1311->addChildren(*Transform1312);

CShape* Shape1315 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1316 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1316->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1317 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1317->setUSE("HAnimSegmentLineColorRGBA");
LineSet1316->setColor(*ColorRGBA1317);

CCoordinate* Coordinate1318 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1318->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017});
LineSet1316->setCoord(*Coordinate1318);

Shape1315->setGeometry(LineSet1316);

HAnimSegment1311->addChildren(*Shape1315);

CHAnimSite* HAnimSite1319 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1319->setDEF("hanim_l_carpal_distal_phalanx_5_tip");
HAnimSite1319->setName("l_carpal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor1320 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1320->setDescription("HAnimSite l_carpal_distal_phalanx_5_tip");
HAnimSite1319->addChildren(*TouchSensor1320);

CShape* Shape1321 = (CShape *)(m_pScene.createNode("Shape"));
Shape1321->setUSE("HAnimSiteShape");
HAnimSite1319->addChildren(*Shape1321);

HAnimSegment1311->addChildren(*HAnimSite1319);

HAnimJoint1310->addChildren(*HAnimSegment1311);

CHAnimJoint* HAnimJoint1322 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1322->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint1322->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint1322->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint1310->addChildren(*HAnimJoint1322);

HAnimJoint1301->addChildren(*HAnimJoint1310);

HAnimJoint1292->addChildren(*HAnimJoint1301);

HAnimJoint1245->addChildren(*HAnimJoint1292);

HAnimJoint1104->addChildren(*HAnimJoint1245);

HAnimJoint1092->addChildren(*HAnimJoint1104);

HAnimJoint1071->addChildren(*HAnimJoint1092);

HAnimJoint1056->addChildren(*HAnimJoint1071);

HAnimJoint1047->addChildren(*HAnimJoint1056);

HAnimJoint843->addChildren(*HAnimJoint1047);

CHAnimJoint* HAnimJoint1323 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1323->setDEF("hanim_r_sternoclavicular");
HAnimJoint1323->setName("r_sternoclavicular");
HAnimJoint1323->setCenter(new float[3]{-0.0694,1.46,-0.033});
CHAnimSegment* HAnimSegment1324 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1324->setDEF("hanim_r_clavicle");
HAnimSegment1324->setName("r_clavicle");
CTransform* Transform1325 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1325->setTranslation(new float[3]{-0.0694,1.46,-0.033});
CTransform* Transform1326 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1327 = (CShape *)(m_pScene.createNode("Shape"));
Shape1327->setUSE("HAnimJointShape");
Transform1326->addChild(*Shape1327);

Transform1325->addChildren(*Transform1326);

HAnimSegment1324->addChildren(*Transform1325);

CShape* Shape1328 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1329 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1329->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1330 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1330->setUSE("HAnimSegmentLineColorRGBA");
LineSet1329->setColor(*ColorRGBA1330);

CCoordinate* Coordinate1331 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1331->setPoint(new float[6]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401});
LineSet1329->setCoord(*Coordinate1331);

Shape1328->setGeometry(LineSet1329);

HAnimSegment1324->addChildren(*Shape1328);

HAnimJoint1323->addChildren(*HAnimSegment1324);

CHAnimJoint* HAnimJoint1332 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1332->setDEF("hanim_r_acromioclavicular");
HAnimJoint1332->setName("r_acromioclavicular");
HAnimJoint1332->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
CHAnimSegment* HAnimSegment1333 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1333->setDEF("hanim_r_scapula");
HAnimSegment1333->setName("r_scapula");
CTransform* Transform1334 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1334->setTranslation(new float[3]{-0.0836,1.4281,-0.0401});
CTransform* Transform1335 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1336 = (CShape *)(m_pScene.createNode("Shape"));
Shape1336->setUSE("HAnimJointShape");
Transform1335->addChild(*Shape1336);

Transform1334->addChildren(*Transform1335);

HAnimSegment1333->addChildren(*Transform1334);

CShape* Shape1337 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1338 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1338->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1339 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1339->setUSE("HAnimSegmentLineColorRGBA");
LineSet1338->setColor(*ColorRGBA1339);

CCoordinate* Coordinate1340 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1340->setPoint(new float[6]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325});
LineSet1338->setCoord(*Coordinate1340);

Shape1337->setGeometry(LineSet1338);

HAnimSegment1333->addChildren(*Shape1337);

CHAnimSite* HAnimSite1341 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1341->setDEF("hanim_r_bideltoid_pt");
HAnimSite1341->setName("r_bideltoid_pt");
CTouchSensor* TouchSensor1342 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1342->setDescription("HAnimSite r_bideltoid_pt");
HAnimSite1341->addChildren(*TouchSensor1342);

CShape* Shape1343 = (CShape *)(m_pScene.createNode("Shape"));
Shape1343->setUSE("HAnimSiteShape");
HAnimSite1341->addChildren(*Shape1343);

HAnimSegment1333->addChildren(*HAnimSite1341);

CHAnimSite* HAnimSite1344 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1344->setDEF("hanim_r_humeral_lateral_epicondyles_pt");
HAnimSite1344->setName("r_humeral_lateral_epicondyles_pt");
HAnimSite1344->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
CTouchSensor* TouchSensor1345 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1345->setDescription("HAnimSite r_humeral_lateral_epicondyles_pt");
HAnimSite1344->addChildren(*TouchSensor1345);

CShape* Shape1346 = (CShape *)(m_pScene.createNode("Shape"));
Shape1346->setUSE("HAnimSiteShape");
HAnimSite1344->addChildren(*Shape1346);

HAnimSegment1333->addChildren(*HAnimSite1344);

HAnimJoint1332->addChildren(*HAnimSegment1333);

CHAnimJoint* HAnimJoint1347 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1347->setDEF("hanim_r_shoulder");
HAnimJoint1347->setName("r_shoulder");
HAnimJoint1347->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
CHAnimSegment* HAnimSegment1348 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1348->setDEF("hanim_r_upperarm");
HAnimSegment1348->setName("r_upperarm");
CTransform* Transform1349 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1349->setTranslation(new float[3]{-0.1907,1.4407,-0.0325});
CTransform* Transform1350 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1351 = (CShape *)(m_pScene.createNode("Shape"));
Shape1351->setUSE("HAnimJointShape");
Transform1350->addChild(*Shape1351);

Transform1349->addChildren(*Transform1350);

HAnimSegment1348->addChildren(*Transform1349);

CShape* Shape1352 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1353 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1353->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1354 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1354->setUSE("HAnimSegmentLineColorRGBA");
LineSet1353->setColor(*ColorRGBA1354);

CCoordinate* Coordinate1355 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1355->setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062});
LineSet1353->setCoord(*Coordinate1355);

Shape1352->setGeometry(LineSet1353);

HAnimSegment1348->addChildren(*Shape1352);

CHAnimSite* HAnimSite1356 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1356->setDEF("hanim_r_humeral_medial_epicondyles_pt");
HAnimSite1356->setName("r_humeral_medial_epicondyles_pt");
HAnimSite1356->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
CTouchSensor* TouchSensor1357 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1357->setDescription("HAnimSite r_humeral_medial_epicondyles_pt");
HAnimSite1356->addChildren(*TouchSensor1357);

CShape* Shape1358 = (CShape *)(m_pScene.createNode("Shape"));
Shape1358->setUSE("HAnimSiteShape");
HAnimSite1356->addChildren(*Shape1358);

HAnimSegment1348->addChildren(*HAnimSite1356);

CHAnimSite* HAnimSite1359 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1359->setDEF("hanim_r_olecranon_pt");
HAnimSite1359->setName("r_olecranon_pt");
HAnimSite1359->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
CTouchSensor* TouchSensor1360 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1360->setDescription("HAnimSite r_olecranon_pt");
HAnimSite1359->addChildren(*TouchSensor1360);

CShape* Shape1361 = (CShape *)(m_pScene.createNode("Shape"));
Shape1361->setUSE("HAnimSiteShape");
HAnimSite1359->addChildren(*Shape1361);

HAnimSegment1348->addChildren(*HAnimSite1359);

CHAnimSite* HAnimSite1362 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1362->setDEF("hanim_r_radial_styloid_pt");
HAnimSite1362->setName("r_radial_styloid_pt");
HAnimSite1362->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
CTouchSensor* TouchSensor1363 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1363->setDescription("HAnimSite r_radial_styloid_pt");
HAnimSite1362->addChildren(*TouchSensor1363);

CShape* Shape1364 = (CShape *)(m_pScene.createNode("Shape"));
Shape1364->setUSE("HAnimSiteShape");
HAnimSite1362->addChildren(*Shape1364);

HAnimSegment1348->addChildren(*HAnimSite1362);

CHAnimSite* HAnimSite1365 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1365->setDEF("hanim_r_radiale_pt");
HAnimSite1365->setName("r_radiale_pt");
HAnimSite1365->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
CTouchSensor* TouchSensor1366 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1366->setDescription("HAnimSite r_radiale_pt");
HAnimSite1365->addChildren(*TouchSensor1366);

CShape* Shape1367 = (CShape *)(m_pScene.createNode("Shape"));
Shape1367->setUSE("HAnimSiteShape");
HAnimSite1365->addChildren(*Shape1367);

HAnimSegment1348->addChildren(*HAnimSite1365);

HAnimJoint1347->addChildren(*HAnimSegment1348);

CHAnimJoint* HAnimJoint1368 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1368->setDEF("hanim_r_elbow");
HAnimJoint1368->setName("r_elbow");
HAnimJoint1368->setCenter(new float[3]{-0.1949,1.1388,-0.062});
CHAnimSegment* HAnimSegment1369 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1369->setDEF("hanim_r_forearm");
HAnimSegment1369->setName("r_forearm");
CTransform* Transform1370 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1370->setTranslation(new float[3]{-0.1949,1.1388,-0.062});
CTransform* Transform1371 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1372 = (CShape *)(m_pScene.createNode("Shape"));
Shape1372->setUSE("HAnimJointShape");
Transform1371->addChild(*Shape1372);

Transform1370->addChildren(*Transform1371);

HAnimSegment1369->addChildren(*Transform1370);

CShape* Shape1373 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1374 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1374->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1375 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1375->setUSE("HAnimSegmentLineColorRGBA");
LineSet1374->setColor(*ColorRGBA1375);

CCoordinate* Coordinate1376 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1376->setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521});
LineSet1374->setCoord(*Coordinate1376);

Shape1373->setGeometry(LineSet1374);

HAnimSegment1369->addChildren(*Shape1373);

CHAnimSite* HAnimSite1377 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1377->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite1377->setName("r_ulnar_styloid_pt");
HAnimSite1377->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
CTouchSensor* TouchSensor1378 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1378->setDescription("HAnimSite r_ulnar_styloid_pt");
HAnimSite1377->addChildren(*TouchSensor1378);

CShape* Shape1379 = (CShape *)(m_pScene.createNode("Shape"));
Shape1379->setUSE("HAnimSiteShape");
HAnimSite1377->addChildren(*Shape1379);

HAnimSegment1369->addChildren(*HAnimSite1377);

HAnimJoint1368->addChildren(*HAnimSegment1369);

CHAnimJoint* HAnimJoint1380 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1380->setDEF("hanim_r_radiocarpal");
HAnimJoint1380->setName("r_radiocarpal");
HAnimJoint1380->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
CHAnimSegment* HAnimSegment1381 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1381->setDEF("hanim_r_carpal");
HAnimSegment1381->setName("r_carpal");
CTransform* Transform1382 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1382->setTranslation(new float[3]{-0.2,0.85,-0.05});
Transform1382->setRotation(new float[4]{0,0,1,-3.14});
Transform1382->setScale(new float[3]{0.2,0.2,0.2});
CTransform* Transform1383 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1383->setRotation(new float[4]{0,1,0,1.57});
CShape* Shape1384 = (CShape *)(m_pScene.createNode("Shape"));
Shape1384->setUSE("HAnimJointShape");
Transform1383->addChild(*Shape1384);

Transform1382->addChildren(*Transform1383);

HAnimSegment1381->addChildren(*Transform1382);

CShape* Shape1385 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1386 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1386->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1387 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1387->setUSE("HAnimSegmentLineColorRGBA");
LineSet1386->setColor(*ColorRGBA1387);

CCoordinate* Coordinate1388 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1388->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-8.0515,0.9213,1.3235});
LineSet1386->setCoord(*Coordinate1388);

Shape1385->setGeometry(LineSet1386);

HAnimSegment1381->addChildren(*Shape1385);

CShape* Shape1389 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1390 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1390->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1391 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1391->setUSE("HAnimSegmentLineColorRGBA");
LineSet1390->setColor(*ColorRGBA1391);

CCoordinate* Coordinate1392 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1392->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-8.0515,0.9225,0.8386});
LineSet1390->setCoord(*Coordinate1392);

Shape1389->setGeometry(LineSet1390);

HAnimSegment1381->addChildren(*Shape1389);

CShape* Shape1393 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1394 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1394->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1395 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1395->setUSE("HAnimSegmentLineColorRGBA");
LineSet1394->setColor(*ColorRGBA1395);

CCoordinate* Coordinate1396 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1396->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-8.0405,0.9246,0.2513});
LineSet1394->setCoord(*Coordinate1396);

Shape1393->setGeometry(LineSet1394);

HAnimSegment1381->addChildren(*Shape1393);

CShape* Shape1397 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1398 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1398->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1399 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1399->setUSE("HAnimSegmentLineColorRGBA");
LineSet1398->setColor(*ColorRGBA1399);

CCoordinate* Coordinate1400 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1400->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-8.0405,0.921,-0.6795});
LineSet1398->setCoord(*Coordinate1400);

Shape1397->setGeometry(LineSet1398);

HAnimSegment1381->addChildren(*Shape1397);

HAnimJoint1380->addChildren(*HAnimSegment1381);

CHAnimJoint* HAnimJoint1401 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1401->setDEF("hanim_r_midcarpal_1");
HAnimJoint1401->setName("r_midcarpal_1");
HAnimJoint1401->setCenter(new float[3]{-8.0515,0.9213,1.3235});
CHAnimSegment* HAnimSegment1402 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1402->setDEF("hanim_r_trapezium");
HAnimSegment1402->setName("r_trapezium");
CTransform* Transform1403 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1403->setTranslation(new float[3]{-8.0515,0.9213,1.3235});
CTransform* Transform1404 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1405 = (CShape *)(m_pScene.createNode("Shape"));
Shape1405->setUSE("HAnimJointShape");
Transform1404->addChild(*Shape1405);

Transform1403->addChildren(*Transform1404);

HAnimSegment1402->addChildren(*Transform1403);

CShape* Shape1406 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1407 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1407->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1408 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1408->setUSE("HAnimSegmentLineColorRGBA");
LineSet1407->setColor(*ColorRGBA1408);

CCoordinate* Coordinate1409 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1409->setPoint(new float[6]{-8.0515,0.9213,1.3235,-0.1899,0.8502,-0.0473});
LineSet1407->setCoord(*Coordinate1409);

Shape1406->setGeometry(LineSet1407);

HAnimSegment1402->addChildren(*Shape1406);

HAnimJoint1401->addChildren(*HAnimSegment1402);

CHAnimJoint* HAnimJoint1410 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1410->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint1410->setName("r_carpometacarpal_1");
HAnimJoint1410->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
CHAnimSegment* HAnimSegment1411 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1411->setDEF("hanim_r_metacarpal_1");
HAnimSegment1411->setName("r_metacarpal_1");
CTransform* Transform1412 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1412->setTranslation(new float[3]{-0.1899,0.8502,-0.0473});
CTransform* Transform1413 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1414 = (CShape *)(m_pScene.createNode("Shape"));
Shape1414->setUSE("HAnimJointShape");
Transform1413->addChild(*Shape1414);

Transform1412->addChildren(*Transform1413);

HAnimSegment1411->addChildren(*Transform1412);

CShape* Shape1415 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1416 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1416->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1417 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1417->setUSE("HAnimSegmentLineColorRGBA");
LineSet1416->setColor(*ColorRGBA1417);

CCoordinate* Coordinate1418 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1418->setPoint(new float[6]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306});
LineSet1416->setCoord(*Coordinate1418);

Shape1415->setGeometry(LineSet1416);

HAnimSegment1411->addChildren(*Shape1415);

HAnimJoint1410->addChildren(*HAnimSegment1411);

CHAnimJoint* HAnimJoint1419 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1419->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint1419->setName("r_metacarpophalangeal_1");
HAnimJoint1419->setCenter(new float[3]{-0.1874,0.8256,0.0306});
CHAnimSegment* HAnimSegment1420 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1420->setDEF("hanim_r_carpal_proximal_phalanx_1");
HAnimSegment1420->setName("r_carpal_proximal_phalanx_1");
CTransform* Transform1421 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1421->setTranslation(new float[3]{-0.1874,0.8256,0.0306});
CTransform* Transform1422 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1423 = (CShape *)(m_pScene.createNode("Shape"));
Shape1423->setUSE("HAnimJointShape");
Transform1422->addChild(*Shape1423);

Transform1421->addChildren(*Transform1422);

HAnimSegment1420->addChildren(*Transform1421);

CShape* Shape1424 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1425 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1425->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1426 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1426->setUSE("HAnimSegmentLineColorRGBA");
LineSet1425->setColor(*ColorRGBA1426);

CCoordinate* Coordinate1427 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1427->setPoint(new float[6]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506});
LineSet1425->setCoord(*Coordinate1427);

Shape1424->setGeometry(LineSet1425);

HAnimSegment1420->addChildren(*Shape1424);

CHAnimSite* HAnimSite1428 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1428->setDEF("hanim_r_carpal_distal_phalanx_1_tip");
HAnimSite1428->setName("r_carpal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor1429 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1429->setDescription("HAnimSite r_carpal_distal_phalanx_1_tip");
HAnimSite1428->addChildren(*TouchSensor1429);

CShape* Shape1430 = (CShape *)(m_pScene.createNode("Shape"));
Shape1430->setUSE("HAnimSiteShape");
HAnimSite1428->addChildren(*Shape1430);

HAnimSegment1420->addChildren(*HAnimSite1428);

HAnimJoint1419->addChildren(*HAnimSegment1420);

CHAnimJoint* HAnimJoint1431 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1431->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint1431->setName("r_carpal_interphalangeal_1");
HAnimJoint1431->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint1419->addChildren(*HAnimJoint1431);

HAnimJoint1410->addChildren(*HAnimJoint1419);

HAnimJoint1401->addChildren(*HAnimJoint1410);

HAnimJoint1380->addChildren(*HAnimJoint1401);

CHAnimJoint* HAnimJoint1432 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1432->setDEF("hanim_r_midcarpal_2");
HAnimJoint1432->setName("r_midcarpal_2");
HAnimJoint1432->setCenter(new float[3]{-8.0515,0.9225,0.8386});
CHAnimSegment* HAnimSegment1433 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1433->setDEF("hanim_r_trapezoid");
HAnimSegment1433->setName("r_trapezoid");
CTransform* Transform1434 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1434->setTranslation(new float[3]{-8.0515,0.9225,0.8386});
CTransform* Transform1435 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1436 = (CShape *)(m_pScene.createNode("Shape"));
Shape1436->setUSE("HAnimJointShape");
Transform1435->addChild(*Shape1436);

Transform1434->addChildren(*Transform1435);

HAnimSegment1433->addChildren(*Transform1434);

CShape* Shape1437 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1438 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1438->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1439 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1439->setUSE("HAnimSegmentLineColorRGBA");
LineSet1438->setColor(*ColorRGBA1439);

CCoordinate* Coordinate1440 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1440->setPoint(new float[6]{-8.0515,0.9225,0.8386,-0.1961,0.8055,-0.0218});
LineSet1438->setCoord(*Coordinate1440);

Shape1437->setGeometry(LineSet1438);

HAnimSegment1433->addChildren(*Shape1437);

CHAnimSite* HAnimSite1441 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1441->setDEF("hanim_r_metacarpal_phalanx_2_pt");
HAnimSite1441->setName("r_metacarpal_phalanx_2_pt");
HAnimSite1441->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
CTouchSensor* TouchSensor1442 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1442->setDescription("HAnimSite r_metacarpal_phalanx_2_pt");
HAnimSite1441->addChildren(*TouchSensor1442);

CShape* Shape1443 = (CShape *)(m_pScene.createNode("Shape"));
Shape1443->setUSE("HAnimSiteShape");
HAnimSite1441->addChildren(*Shape1443);

HAnimSegment1433->addChildren(*HAnimSite1441);

HAnimJoint1432->addChildren(*HAnimSegment1433);

CHAnimJoint* HAnimJoint1444 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1444->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint1444->setName("r_carpometacarpal_2");
HAnimJoint1444->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
CHAnimSegment* HAnimSegment1445 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1445->setDEF("hanim_r_metacarpal_2");
HAnimSegment1445->setName("r_metacarpal_2");
CTransform* Transform1446 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1446->setTranslation(new float[3]{-0.1961,0.8055,-0.0218});
CTransform* Transform1447 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1448 = (CShape *)(m_pScene.createNode("Shape"));
Shape1448->setUSE("HAnimJointShape");
Transform1447->addChild(*Shape1448);

Transform1446->addChildren(*Transform1447);

HAnimSegment1445->addChildren(*Transform1446);

CShape* Shape1449 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1450 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1450->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1451 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1451->setUSE("HAnimSegmentLineColorRGBA");
LineSet1450->setColor(*ColorRGBA1451);

CCoordinate* Coordinate1452 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1452->setPoint(new float[6]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218});
LineSet1450->setCoord(*Coordinate1452);

Shape1449->setGeometry(LineSet1450);

HAnimSegment1445->addChildren(*Shape1449);

HAnimJoint1444->addChildren(*HAnimSegment1445);

CHAnimJoint* HAnimJoint1453 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1453->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint1453->setName("r_metacarpophalangeal_2");
HAnimJoint1453->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
CHAnimSegment* HAnimSegment1454 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1454->setDEF("hanim_r_carpal_proximal_phalanx_2 ");
HAnimSegment1454->setName("r_carpal_proximal_phalanx_2 ");
CTransform* Transform1455 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1455->setTranslation(new float[3]{-0.1961,0.7846,-0.0218});
CTransform* Transform1456 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1457 = (CShape *)(m_pScene.createNode("Shape"));
Shape1457->setUSE("HAnimJointShape");
Transform1456->addChild(*Shape1457);

Transform1455->addChildren(*Transform1456);

HAnimSegment1454->addChildren(*Transform1455);

CShape* Shape1458 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1459 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1459->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1460 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1460->setUSE("HAnimSegmentLineColorRGBA");
LineSet1459->setColor(*ColorRGBA1460);

CCoordinate* Coordinate1461 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1461->setPoint(new float[6]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185});
LineSet1459->setCoord(*Coordinate1461);

Shape1458->setGeometry(LineSet1459);

HAnimSegment1454->addChildren(*Shape1458);

HAnimJoint1453->addChildren(*HAnimSegment1454);

CHAnimJoint* HAnimJoint1462 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1462->setDEF("hanim_r_carpal_proximal_interphalangeal_1");
HAnimJoint1462->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint1462->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
CHAnimSegment* HAnimSegment1463 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1463->setDEF("hanim_r_carpal_middle_phalanx_1");
HAnimSegment1463->setName("r_carpal_middle_phalanx_2");
CTransform* Transform1464 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1464->setTranslation(new float[3]{-0.1954,0.7393,-0.0185});
CTransform* Transform1465 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1466 = (CShape *)(m_pScene.createNode("Shape"));
Shape1466->setUSE("HAnimJointShape");
Transform1465->addChild(*Shape1466);

Transform1464->addChildren(*Transform1465);

HAnimSegment1463->addChildren(*Transform1464);

CShape* Shape1467 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1468 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1468->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1469 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1469->setUSE("HAnimSegmentLineColorRGBA");
LineSet1468->setColor(*ColorRGBA1469);

CCoordinate* Coordinate1470 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1470->setPoint(new float[6]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173});
LineSet1468->setCoord(*Coordinate1470);

Shape1467->setGeometry(LineSet1468);

HAnimSegment1463->addChildren(*Shape1467);

CHAnimSite* HAnimSite1471 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1471->setDEF("hanim_r_carpal_distal_phalanx_2_tip");
HAnimSite1471->setName("r_carpal_distal_phalanx_2_tip");
CTouchSensor* TouchSensor1472 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1472->setDescription("HAnimSite r_carpal_distal_phalanx_2_tip");
HAnimSite1471->addChildren(*TouchSensor1472);

CShape* Shape1473 = (CShape *)(m_pScene.createNode("Shape"));
Shape1473->setUSE("HAnimSiteShape");
HAnimSite1471->addChildren(*Shape1473);

HAnimSegment1463->addChildren(*HAnimSite1471);

CHAnimSite* HAnimSite1474 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1474->setDEF("hanim_r_dactylion_pt");
HAnimSite1474->setName("r_dactylion_pt");
HAnimSite1474->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
CTouchSensor* TouchSensor1475 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1475->setDescription("HAnimSite r_dactylion_pt");
HAnimSite1474->addChildren(*TouchSensor1475);

CShape* Shape1476 = (CShape *)(m_pScene.createNode("Shape"));
Shape1476->setUSE("HAnimSiteShape");
HAnimSite1474->addChildren(*Shape1476);

HAnimSegment1463->addChildren(*HAnimSite1474);

HAnimJoint1462->addChildren(*HAnimSegment1463);

CHAnimJoint* HAnimJoint1477 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1477->setDEF("hanim_r_carpal_distal_interphalangeal_1");
HAnimJoint1477->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint1477->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint1462->addChildren(*HAnimJoint1477);

HAnimJoint1453->addChildren(*HAnimJoint1462);

HAnimJoint1444->addChildren(*HAnimJoint1453);

HAnimJoint1432->addChildren(*HAnimJoint1444);

HAnimJoint1380->addChildren(*HAnimJoint1432);

CHAnimJoint* HAnimJoint1478 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1478->setDEF("hanim_r_midcarpal_3");
HAnimJoint1478->setName("r_midcarpal_3");
HAnimJoint1478->setCenter(new float[3]{-8.0405,0.9246,0.2513});
CHAnimSegment* HAnimSegment1479 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1479->setDEF("hanim_r_capitate");
HAnimSegment1479->setName("r_capitate");
CTransform* Transform1480 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1480->setTranslation(new float[3]{-8.0405,0.9246,0.2513});
CTransform* Transform1481 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1482 = (CShape *)(m_pScene.createNode("Shape"));
Shape1482->setUSE("HAnimJointShape");
Transform1481->addChild(*Shape1482);

Transform1480->addChildren(*Transform1481);

HAnimSegment1479->addChildren(*Transform1480);

CShape* Shape1483 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1484 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1484->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1485 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1485->setUSE("HAnimSegmentLineColorRGBA");
LineSet1484->setColor(*ColorRGBA1485);

CCoordinate* Coordinate1486 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1486->setPoint(new float[6]{-8.0405,0.9246,0.2513,-0.1972,0.806,-0.0468});
LineSet1484->setCoord(*Coordinate1486);

Shape1483->setGeometry(LineSet1484);

HAnimSegment1479->addChildren(*Shape1483);

CHAnimSite* HAnimSite1487 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1487->setDEF("hanim_r_metacarpal_phalanx_3_pt");
HAnimSite1487->setName("r_metacarpal_phalanx_3_pt");
CTouchSensor* TouchSensor1488 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1488->setDescription("HAnimSite r_metacarpal_phalanx_3_pt");
HAnimSite1487->addChildren(*TouchSensor1488);

CShape* Shape1489 = (CShape *)(m_pScene.createNode("Shape"));
Shape1489->setUSE("HAnimSiteShape");
HAnimSite1487->addChildren(*Shape1489);

HAnimSegment1479->addChildren(*HAnimSite1487);

HAnimJoint1478->addChildren(*HAnimSegment1479);

CHAnimJoint* HAnimJoint1490 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1490->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint1490->setName("r_carpometacarpal_3");
HAnimJoint1490->setCenter(new float[3]{-0.1972,0.806,-0.0468});
CHAnimSegment* HAnimSegment1491 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1491->setDEF("hanim_r_metacarpal_3");
HAnimSegment1491->setName("r_metacarpal_3");
CTransform* Transform1492 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1492->setTranslation(new float[3]{-0.1972,0.806,-0.0468});
CTransform* Transform1493 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1494 = (CShape *)(m_pScene.createNode("Shape"));
Shape1494->setUSE("HAnimJointShape");
Transform1493->addChild(*Shape1494);

Transform1492->addChildren(*Transform1493);

HAnimSegment1491->addChildren(*Transform1492);

CShape* Shape1495 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1496 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1496->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1497 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1497->setUSE("HAnimSegmentLineColorRGBA");
LineSet1496->setColor(*ColorRGBA1497);

CCoordinate* Coordinate1498 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1498->setPoint(new float[6]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468});
LineSet1496->setCoord(*Coordinate1498);

Shape1495->setGeometry(LineSet1496);

HAnimSegment1491->addChildren(*Shape1495);

HAnimJoint1490->addChildren(*HAnimSegment1491);

CHAnimJoint* HAnimJoint1499 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1499->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint1499->setName("r_metacarpophalangeal_3");
HAnimJoint1499->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
CHAnimSegment* HAnimSegment1500 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1500->setDEF("hanim_r_carpal_proximal_phalanx_2");
HAnimSegment1500->setName("r_carpal_proximal_phalanx_3");
CTransform* Transform1501 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1501->setTranslation(new float[3]{-0.1972,0.7849,-0.0468});
CTransform* Transform1502 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1503 = (CShape *)(m_pScene.createNode("Shape"));
Shape1503->setUSE("HAnimJointShape");
Transform1502->addChild(*Shape1503);

Transform1501->addChildren(*Transform1502);

HAnimSegment1500->addChildren(*Transform1501);

CShape* Shape1504 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1505 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1505->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1506 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1506->setUSE("HAnimSegmentLineColorRGBA");
LineSet1505->setColor(*ColorRGBA1506);

CCoordinate* Coordinate1507 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1507->setPoint(new float[6]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441});
LineSet1505->setCoord(*Coordinate1507);

Shape1504->setGeometry(LineSet1505);

HAnimSegment1500->addChildren(*Shape1504);

HAnimJoint1499->addChildren(*HAnimSegment1500);

CHAnimJoint* HAnimJoint1508 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1508->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint1508->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint1508->setCenter(new float[3]{-0.195,0.7304,-0.0441});
CHAnimSegment* HAnimSegment1509 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1509->setDEF("hanim_r_carpal_middle_phalanx_2");
HAnimSegment1509->setName("r_carpal_middle_phalanx_3");
CTransform* Transform1510 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1510->setTranslation(new float[3]{-0.195,0.7304,-0.0441});
CTransform* Transform1511 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1512 = (CShape *)(m_pScene.createNode("Shape"));
Shape1512->setUSE("HAnimJointShape");
Transform1511->addChild(*Shape1512);

Transform1510->addChildren(*Transform1511);

HAnimSegment1509->addChildren(*Transform1510);

CShape* Shape1513 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1514 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1514->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1515 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1515->setUSE("HAnimSegmentLineColorRGBA");
LineSet1514->setColor(*ColorRGBA1515);

CCoordinate* Coordinate1516 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1516->setPoint(new float[6]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432});
LineSet1514->setCoord(*Coordinate1516);

Shape1513->setGeometry(LineSet1514);

HAnimSegment1509->addChildren(*Shape1513);

CHAnimSite* HAnimSite1517 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1517->setDEF("hanim_r_carpal_distal_phalanx_3_tip");
HAnimSite1517->setName("r_carpal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor1518 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1518->setDescription("HAnimSite r_carpal_distal_phalanx_3_tip");
HAnimSite1517->addChildren(*TouchSensor1518);

CShape* Shape1519 = (CShape *)(m_pScene.createNode("Shape"));
Shape1519->setUSE("HAnimSiteShape");
HAnimSite1517->addChildren(*Shape1519);

HAnimSegment1509->addChildren(*HAnimSite1517);

HAnimJoint1508->addChildren(*HAnimSegment1509);

CHAnimJoint* HAnimJoint1520 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1520->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint1520->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint1520->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint1508->addChildren(*HAnimJoint1520);

HAnimJoint1499->addChildren(*HAnimJoint1508);

HAnimJoint1490->addChildren(*HAnimJoint1499);

HAnimJoint1478->addChildren(*HAnimJoint1490);

HAnimJoint1380->addChildren(*HAnimJoint1478);

CHAnimJoint* HAnimJoint1521 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1521->setDEF("hanim_r_midcarpal_4_1");
HAnimJoint1521->setName("r_midcarpal_4_5");
HAnimJoint1521->setCenter(new float[3]{-8.0405,0.921,-0.6795});
CHAnimSegment* HAnimSegment1522 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1522->setDEF("hanim_r_hamate");
HAnimSegment1522->setName("r_hamate");
CTransform* Transform1523 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1523->setTranslation(new float[3]{-8.0405,0.921,-0.6795});
CTransform* Transform1524 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1525 = (CShape *)(m_pScene.createNode("Shape"));
Shape1525->setUSE("HAnimJointShape");
Transform1524->addChild(*Shape1525);

Transform1523->addChildren(*Transform1524);

HAnimSegment1522->addChildren(*Transform1523);

CShape* Shape1526 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1527 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1527->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1528 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1528->setUSE("HAnimSegmentLineColorRGBA");
LineSet1527->setColor(*ColorRGBA1528);

CCoordinate* Coordinate1529 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1529->setPoint(new float[6]{-8.0405,0.921,-0.6795,-0.1951,0.8049,-0.0732});
LineSet1527->setCoord(*Coordinate1529);

Shape1526->setGeometry(LineSet1527);

HAnimSegment1522->addChildren(*Shape1526);

CShape* Shape1530 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1531 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1531->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1532 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1532->setUSE("HAnimSegmentLineColorRGBA");
LineSet1531->setColor(*ColorRGBA1532);

CCoordinate* Coordinate1533 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1533->setPoint(new float[6]{-8.0405,0.921,-0.6795,-0.1926,0.8096,-0.0975});
LineSet1531->setCoord(*Coordinate1533);

Shape1530->setGeometry(LineSet1531);

HAnimSegment1522->addChildren(*Shape1530);

CHAnimSite* HAnimSite1534 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1534->setDEF("hanim_r_metacarpal_phalanx_5_pt");
HAnimSite1534->setName("r_metacarpal_phalanx_5_pt");
HAnimSite1534->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
CTouchSensor* TouchSensor1535 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1535->setDescription("HAnimSite r_metacarpal_phalanx_5_pt");
HAnimSite1534->addChildren(*TouchSensor1535);

CShape* Shape1536 = (CShape *)(m_pScene.createNode("Shape"));
Shape1536->setUSE("HAnimSiteShape");
HAnimSite1534->addChildren(*Shape1536);

HAnimSegment1522->addChildren(*HAnimSite1534);

HAnimJoint1521->addChildren(*HAnimSegment1522);

CHAnimJoint* HAnimJoint1537 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1537->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint1537->setName("r_carpometacarpal_4");
HAnimJoint1537->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
CHAnimSegment* HAnimSegment1538 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1538->setDEF("hanim_r_metacarpal_4");
HAnimSegment1538->setName("r_metacarpal_4");
CTransform* Transform1539 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1539->setTranslation(new float[3]{-0.1951,0.8049,-0.0732});
CTransform* Transform1540 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1541 = (CShape *)(m_pScene.createNode("Shape"));
Shape1541->setUSE("HAnimJointShape");
Transform1540->addChild(*Shape1541);

Transform1539->addChildren(*Transform1540);

HAnimSegment1538->addChildren(*Transform1539);

CShape* Shape1542 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1543 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1543->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1544 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1544->setUSE("HAnimSegmentLineColorRGBA");
LineSet1543->setColor(*ColorRGBA1544);

CCoordinate* Coordinate1545 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1545->setPoint(new float[6]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732});
LineSet1543->setCoord(*Coordinate1545);

Shape1542->setGeometry(LineSet1543);

HAnimSegment1538->addChildren(*Shape1542);

HAnimJoint1537->addChildren(*HAnimSegment1538);

CHAnimJoint* HAnimJoint1546 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1546->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint1546->setName("r_metacarpophalangeal_4");
HAnimJoint1546->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
CHAnimSegment* HAnimSegment1547 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1547->setDEF("hanim_r_carpal_proximal_phalanx_3");
HAnimSegment1547->setName("r_carpal_proximal_phalanx_4");
CTransform* Transform1548 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1548->setTranslation(new float[3]{-0.1951,0.7845,-0.0732});
CTransform* Transform1549 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1550 = (CShape *)(m_pScene.createNode("Shape"));
Shape1550->setUSE("HAnimJointShape");
Transform1549->addChild(*Shape1550);

Transform1548->addChildren(*Transform1549);

HAnimSegment1547->addChildren(*Transform1548);

CShape* Shape1551 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1552 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1552->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1553 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1553->setUSE("HAnimSegmentLineColorRGBA");
LineSet1552->setColor(*ColorRGBA1553);

CCoordinate* Coordinate1554 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1554->setPoint(new float[6]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716});
LineSet1552->setCoord(*Coordinate1554);

Shape1551->setGeometry(LineSet1552);

HAnimSegment1547->addChildren(*Shape1551);

HAnimJoint1546->addChildren(*HAnimSegment1547);

CHAnimJoint* HAnimJoint1555 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1555->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint1555->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint1555->setCenter(new float[3]{-0.192,0.7318,-0.0716});
CHAnimSegment* HAnimSegment1556 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1556->setDEF("hanim_r_carpal_middle_phalanx_3");
HAnimSegment1556->setName("r_carpal_middle_phalanx_4");
CTransform* Transform1557 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1557->setTranslation(new float[3]{-0.192,0.7318,-0.0716});
CTransform* Transform1558 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1559 = (CShape *)(m_pScene.createNode("Shape"));
Shape1559->setUSE("HAnimJointShape");
Transform1558->addChild(*Shape1559);

Transform1557->addChildren(*Transform1558);

HAnimSegment1556->addChildren(*Transform1557);

CShape* Shape1560 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1561 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1561->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1562 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1562->setUSE("HAnimSegmentLineColorRGBA");
LineSet1561->setColor(*ColorRGBA1562);

CCoordinate* Coordinate1563 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1563->setPoint(new float[6]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706});
LineSet1561->setCoord(*Coordinate1563);

Shape1560->setGeometry(LineSet1561);

HAnimSegment1556->addChildren(*Shape1560);

CHAnimSite* HAnimSite1564 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1564->setDEF("hanim_r_carpal_distal_phalanx_4_tip");
HAnimSite1564->setName("r_carpal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor1565 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1565->setDescription("HAnimSite r_carpal_distal_phalanx_4_tip");
HAnimSite1564->addChildren(*TouchSensor1565);

CShape* Shape1566 = (CShape *)(m_pScene.createNode("Shape"));
Shape1566->setUSE("HAnimSiteShape");
HAnimSite1564->addChildren(*Shape1566);

HAnimSegment1556->addChildren(*HAnimSite1564);

HAnimJoint1555->addChildren(*HAnimSegment1556);

CHAnimJoint* HAnimJoint1567 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1567->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint1567->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint1567->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint1555->addChildren(*HAnimJoint1567);

HAnimJoint1546->addChildren(*HAnimJoint1555);

HAnimJoint1537->addChildren(*HAnimJoint1546);

HAnimJoint1521->addChildren(*HAnimJoint1537);

CHAnimJoint* HAnimJoint1568 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1568->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint1568->setName("r_carpometacarpal_5");
HAnimJoint1568->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
CHAnimSegment* HAnimSegment1569 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1569->setDEF("hanim_r_metacarpal_5");
HAnimSegment1569->setName("r_metacarpal_5");
CTransform* Transform1570 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1570->setTranslation(new float[3]{-0.1926,0.8096,-0.0975});
CTransform* Transform1571 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1572 = (CShape *)(m_pScene.createNode("Shape"));
Shape1572->setUSE("HAnimJointShape");
Transform1571->addChild(*Shape1572);

Transform1570->addChildren(*Transform1571);

HAnimSegment1569->addChildren(*Transform1570);

CShape* Shape1573 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1574 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1574->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1575 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1575->setUSE("HAnimSegmentLineColorRGBA");
LineSet1574->setColor(*ColorRGBA1575);

CCoordinate* Coordinate1576 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1576->setPoint(new float[6]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975});
LineSet1574->setCoord(*Coordinate1576);

Shape1573->setGeometry(LineSet1574);

HAnimSegment1569->addChildren(*Shape1573);

HAnimJoint1568->addChildren(*HAnimSegment1569);

CHAnimJoint* HAnimJoint1577 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1577->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint1577->setName("r_metacarpophalangeal_5");
HAnimJoint1577->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
CHAnimSegment* HAnimSegment1578 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1578->setDEF("hanim_r_carpal_proximal_phalanx_4");
HAnimSegment1578->setName("r_carpal_proximal_phalanx_5");
CTransform* Transform1579 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1579->setTranslation(new float[3]{-0.1926,0.7896,-0.0975});
CTransform* Transform1580 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1581 = (CShape *)(m_pScene.createNode("Shape"));
Shape1581->setUSE("HAnimJointShape");
Transform1580->addChild(*Shape1581);

Transform1579->addChildren(*Transform1580);

HAnimSegment1578->addChildren(*Transform1579);

CShape* Shape1582 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1583 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1583->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1584 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1584->setUSE("HAnimSegmentLineColorRGBA");
LineSet1583->setColor(*ColorRGBA1584);

CCoordinate* Coordinate1585 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1585->setPoint(new float[6]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963});
LineSet1583->setCoord(*Coordinate1585);

Shape1582->setGeometry(LineSet1583);

HAnimSegment1578->addChildren(*Shape1582);

HAnimJoint1577->addChildren(*HAnimSegment1578);

CHAnimJoint* HAnimJoint1586 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1586->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint1586->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint1586->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
CHAnimSegment* HAnimSegment1587 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1587->setDEF("hanim_r_carpal_middle_phalanx_4");
HAnimSegment1587->setName("r_carpal_middle_phalanx_5");
CTransform* Transform1588 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1588->setTranslation(new float[3]{-0.1902,0.7483,-0.0963});
CTransform* Transform1589 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape1590 = (CShape *)(m_pScene.createNode("Shape"));
Shape1590->setUSE("HAnimJointShape");
Transform1589->addChild(*Shape1590);

Transform1588->addChildren(*Transform1589);

HAnimSegment1587->addChildren(*Transform1588);

CShape* Shape1591 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1592 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1592->setVertexCount(new int[1]{2});
CColorRGBA* ColorRGBA1593 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1593->setUSE("HAnimSegmentLineColorRGBA");
LineSet1592->setColor(*ColorRGBA1593);

CCoordinate* Coordinate1594 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1594->setPoint(new float[6]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096});
LineSet1592->setCoord(*Coordinate1594);

Shape1591->setGeometry(LineSet1592);

HAnimSegment1587->addChildren(*Shape1591);

CHAnimSite* HAnimSite1595 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1595->setDEF("hanim_r_carpal_distal_phalanx_5_tip");
HAnimSite1595->setName("r_carpal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor1596 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1596->setDescription("HAnimSite r_carpal_distal_phalanx_5_tip");
HAnimSite1595->addChildren(*TouchSensor1596);

CShape* Shape1597 = (CShape *)(m_pScene.createNode("Shape"));
Shape1597->setUSE("HAnimSiteShape");
HAnimSite1595->addChildren(*Shape1597);

HAnimSegment1587->addChildren(*HAnimSite1595);

HAnimJoint1586->addChildren(*HAnimSegment1587);

CHAnimJoint* HAnimJoint1598 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1598->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint1598->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint1598->setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint1586->addChildren(*HAnimJoint1598);

HAnimJoint1577->addChildren(*HAnimJoint1586);

HAnimJoint1568->addChildren(*HAnimJoint1577);

HAnimJoint1521->addChildren(*HAnimJoint1568);

HAnimJoint1380->addChildren(*HAnimJoint1521);

HAnimJoint1368->addChildren(*HAnimJoint1380);

HAnimJoint1347->addChildren(*HAnimJoint1368);

HAnimJoint1332->addChildren(*HAnimJoint1347);

HAnimJoint1323->addChildren(*HAnimJoint1332);

HAnimJoint843->addChildren(*HAnimJoint1323);

HAnimJoint828->addChildren(*HAnimJoint843);

HAnimJoint819->addChildren(*HAnimJoint828);

HAnimJoint810->addChildren(*HAnimJoint819);

HAnimJoint801->addChildren(*HAnimJoint810);

HAnimJoint789->addChildren(*HAnimJoint801);

HAnimJoint768->addChildren(*HAnimJoint789);

HAnimJoint759->addChildren(*HAnimJoint768);

HAnimJoint750->addChildren(*HAnimJoint759);

HAnimJoint735->addChildren(*HAnimJoint750);

HAnimJoint723->addChildren(*HAnimJoint735);

HAnimJoint714->addChildren(*HAnimJoint723);

HAnimJoint705->addChildren(*HAnimJoint714);

HAnimJoint696->addChildren(*HAnimJoint705);

HAnimJoint678->addChildren(*HAnimJoint696);

HAnimJoint669->addChildren(*HAnimJoint678);

HAnimJoint660->addChildren(*HAnimJoint669);

HAnimJoint43->addChildren(*HAnimJoint660);

HAnimHumanoid42->setSkeleton(*HAnimJoint43);

CHAnimSite* HAnimSite1599 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1599->setUSE("hanim_buttocks_standing_wall_contact_point_pt");
HAnimHumanoid42->setSites(*HAnimSite1599);

CHAnimSite* HAnimSite1600 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1600->setUSE("hanim_crotch_pt");
HAnimHumanoid42->setSites(*HAnimSite1600);

CHAnimSite* HAnimSite1601 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1601->setUSE("hanim_l_asis_pt");
HAnimHumanoid42->setSites(*HAnimSite1601);

CHAnimSite* HAnimSite1602 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1602->setUSE("hanim_l_iliocristale_pt");
HAnimHumanoid42->setSites(*HAnimSite1602);

CHAnimSite* HAnimSite1603 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1603->setUSE("hanim_l_psis_pt");
HAnimHumanoid42->setSites(*HAnimSite1603);

CHAnimSite* HAnimSite1604 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1604->setUSE("hanim_l_trochanterion_pt");
HAnimHumanoid42->setSites(*HAnimSite1604);

CHAnimSite* HAnimSite1605 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1605->setUSE("hanim_r_asis_pt");
HAnimHumanoid42->setSites(*HAnimSite1605);

CHAnimSite* HAnimSite1606 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1606->setUSE("hanim_r_iliocristale_pt");
HAnimHumanoid42->setSites(*HAnimSite1606);

CHAnimSite* HAnimSite1607 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1607->setUSE("hanim_r_psis_pt");
HAnimHumanoid42->setSites(*HAnimSite1607);

CHAnimSite* HAnimSite1608 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1608->setUSE("hanim_r_trochanterion_pt");
HAnimHumanoid42->setSites(*HAnimSite1608);

CHAnimSite* HAnimSite1609 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1609->setUSE("hanim_navel_pt");
HAnimHumanoid42->setSites(*HAnimSite1609);

CHAnimSite* HAnimSite1610 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1610->setUSE("hanim_waist_preferred_anterior_pt");
HAnimHumanoid42->setSites(*HAnimSite1610);

CHAnimSite* HAnimSite1611 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1611->setUSE("hanim_waist_preferred_posterior_pt");
HAnimHumanoid42->setSites(*HAnimSite1611);

CHAnimSite* HAnimSite1612 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1612->setUSE("hanim_l_femoral_lateral_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite1612);

CHAnimSite* HAnimSite1613 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1613->setUSE("hanim_l_femoral_medial_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite1613);

CHAnimSite* HAnimSite1614 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1614->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid42->setSites(*HAnimSite1614);

CHAnimSite* HAnimSite1615 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1615->setUSE("hanim_l_suprapatella_pt");
HAnimHumanoid42->setSites(*HAnimSite1615);

CHAnimSite* HAnimSite1616 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1616->setUSE("hanim_r_femoral_lateral_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite1616);

CHAnimSite* HAnimSite1617 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1617->setUSE("hanim_r_femoral_medial_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite1617);

CHAnimSite* HAnimSite1618 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1618->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid42->setSites(*HAnimSite1618);

CHAnimSite* HAnimSite1619 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1619->setUSE("hanim_r_suprapatella_pt");
HAnimHumanoid42->setSites(*HAnimSite1619);

CHAnimSite* HAnimSite1620 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1620->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid42->setSites(*HAnimSite1620);

CHAnimSite* HAnimSite1621 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1621->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid42->setSites(*HAnimSite1621);

CHAnimSite* HAnimSite1622 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1622->setUSE("hanim_l_tibiale_pt");
HAnimHumanoid42->setSites(*HAnimSite1622);

CHAnimSite* HAnimSite1623 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1623->setUSE("hanim_l_calcaneus_posterior_pt");
HAnimHumanoid42->setSites(*HAnimSite1623);

CHAnimSite* HAnimSite1624 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1624->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid42->setSites(*HAnimSite1624);

CHAnimSite* HAnimSite1625 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1625->setUSE("hanim_l_metatarsal_phalanx_1_pt");
HAnimHumanoid42->setSites(*HAnimSite1625);

CHAnimSite* HAnimSite1626 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1626->setUSE("hanim_l_tarsal_distal_phalanx_1_tip");
HAnimHumanoid42->setSites(*HAnimSite1626);

CHAnimSite* HAnimSite1627 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1627->setUSE("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimHumanoid42->setSites(*HAnimSite1627);

CHAnimSite* HAnimSite1628 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1628->setUSE("hanim_l_tarsal_distal_phalanx_3_tip");
HAnimHumanoid42->setSites(*HAnimSite1628);

CHAnimSite* HAnimSite1629 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1629->setUSE("hanim_l_tarsal_distal_phalanx_4_tip");
HAnimHumanoid42->setSites(*HAnimSite1629);

CHAnimSite* HAnimSite1630 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1630->setUSE("hanim_l_metatarsal_phalanx_5_pt");
HAnimHumanoid42->setSites(*HAnimSite1630);

CHAnimSite* HAnimSite1631 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1631->setUSE("hanim_l_tarsal_distal_phalanx_5_tip");
HAnimHumanoid42->setSites(*HAnimSite1631);

CHAnimSite* HAnimSite1632 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1632->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid42->setSites(*HAnimSite1632);

CHAnimSite* HAnimSite1633 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1633->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid42->setSites(*HAnimSite1633);

CHAnimSite* HAnimSite1634 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1634->setUSE("hanim_r_tibiale_pt");
HAnimHumanoid42->setSites(*HAnimSite1634);

CHAnimSite* HAnimSite1635 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1635->setUSE("hanim_r_calcaneus_posterior_pt");
HAnimHumanoid42->setSites(*HAnimSite1635);

CHAnimSite* HAnimSite1636 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1636->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid42->setSites(*HAnimSite1636);

CHAnimSite* HAnimSite1637 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1637->setUSE("hanim_r_metatarsal_phalanx_1_pt");
HAnimHumanoid42->setSites(*HAnimSite1637);

CHAnimSite* HAnimSite1638 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1638->setUSE("hanim_r_tarsal_distal_phalanx_1_tip");
HAnimHumanoid42->setSites(*HAnimSite1638);

CHAnimSite* HAnimSite1639 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1639->setUSE("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimHumanoid42->setSites(*HAnimSite1639);

CHAnimSite* HAnimSite1640 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1640->setUSE("hanim_r_tarsal_distal_phalanx_3_tip");
HAnimHumanoid42->setSites(*HAnimSite1640);

CHAnimSite* HAnimSite1641 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1641->setUSE("hanim_r_tarsal_distal_phalanx_4_tip");
HAnimHumanoid42->setSites(*HAnimSite1641);

CHAnimSite* HAnimSite1642 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1642->setUSE("hanim_r_metatarsal_phalanx_5_pt");
HAnimHumanoid42->setSites(*HAnimSite1642);

CHAnimSite* HAnimSite1643 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1643->setUSE("hanim_r_tarsal_distal_phalanx_5_tip");
HAnimHumanoid42->setSites(*HAnimSite1643);

CHAnimSite* HAnimSite1644 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1644->setUSE("hanim_l_rib10_pt");
HAnimHumanoid42->setSites(*HAnimSite1644);

CHAnimSite* HAnimSite1645 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1645->setUSE("hanim_r_rib10_pt");
HAnimHumanoid42->setSites(*HAnimSite1645);

CHAnimSite* HAnimSite1646 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1646->setUSE("hanim_spine_2_middle_back_pt");
HAnimHumanoid42->setSites(*HAnimSite1646);

CHAnimSite* HAnimSite1647 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1647->setUSE("hanim_substernale_pt");
HAnimHumanoid42->setSites(*HAnimSite1647);

CHAnimSite* HAnimSite1648 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1648->setUSE("hanim_l_thelion_pt");
HAnimHumanoid42->setSites(*HAnimSite1648);

CHAnimSite* HAnimSite1649 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1649->setUSE("hanim_r_thelion_pt");
HAnimHumanoid42->setSites(*HAnimSite1649);

CHAnimSite* HAnimSite1650 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1650->setUSE("hanim_l_chest_midsagittal_plane_pt");
HAnimHumanoid42->setSites(*HAnimSite1650);

CHAnimSite* HAnimSite1651 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1651->setUSE("hanim_mesosternale_pt");
HAnimHumanoid42->setSites(*HAnimSite1651);

CHAnimSite* HAnimSite1652 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1652->setUSE("hanim_r_chest_midsagittal_plane_pt");
HAnimHumanoid42->setSites(*HAnimSite1652);

CHAnimSite* HAnimSite1653 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1653->setUSE("hanim_rear_center_midsagittal_plane_pt");
HAnimHumanoid42->setSites(*HAnimSite1653);

CHAnimSite* HAnimSite1654 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1654->setUSE("hanim_spine_1_middle_back_pt");
HAnimHumanoid42->setSites(*HAnimSite1654);

CHAnimSite* HAnimSite1655 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1655->setUSE("hanim_cervicale_pt");
HAnimHumanoid42->setSites(*HAnimSite1655);

CHAnimSite* HAnimSite1656 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1656->setUSE("hanim_suprasternale_pt");
HAnimHumanoid42->setSites(*HAnimSite1656);

CHAnimSite* HAnimSite1657 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1657->setUSE("hanim_l_neck_base_pt");
HAnimHumanoid42->setSites(*HAnimSite1657);

CHAnimSite* HAnimSite1658 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1658->setUSE("hanim_r_neck_base_pt");
HAnimHumanoid42->setSites(*HAnimSite1658);

CHAnimSite* HAnimSite1659 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1659->setUSE("hanim_l_acromion_pt");
HAnimHumanoid42->setSites(*HAnimSite1659);

CHAnimSite* HAnimSite1660 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1660->setUSE("hanim_l_axilla_distal_pt");
HAnimHumanoid42->setSites(*HAnimSite1660);

CHAnimSite* HAnimSite1661 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1661->setUSE("hanim_l_axilla_posterior_folds_pt");
HAnimHumanoid42->setSites(*HAnimSite1661);

CHAnimSite* HAnimSite1662 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1662->setUSE("hanim_l_axilla_proximal_pt");
HAnimHumanoid42->setSites(*HAnimSite1662);

CHAnimSite* HAnimSite1663 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1663->setUSE("hanim_l_clavicale_pt");
HAnimHumanoid42->setSites(*HAnimSite1663);

CHAnimSite* HAnimSite1664 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1664->setUSE("hanim_r_acromion_pt");
HAnimHumanoid42->setSites(*HAnimSite1664);

CHAnimSite* HAnimSite1665 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1665->setUSE("hanim_r_axilla_distal_pt");
HAnimHumanoid42->setSites(*HAnimSite1665);

CHAnimSite* HAnimSite1666 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1666->setUSE("hanim_r_axilla_posterior_folds_pt");
HAnimHumanoid42->setSites(*HAnimSite1666);

CHAnimSite* HAnimSite1667 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1667->setUSE("hanim_r_axilla_proximal_pt");
HAnimHumanoid42->setSites(*HAnimSite1667);

CHAnimSite* HAnimSite1668 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1668->setUSE("hanim_r_clavicale_pt");
HAnimHumanoid42->setSites(*HAnimSite1668);

CHAnimSite* HAnimSite1669 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1669->setUSE("hanim_adams_apple_pt");
HAnimHumanoid42->setSites(*HAnimSite1669);

CHAnimSite* HAnimSite1670 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1670->setUSE("hanim_glabella_pt");
HAnimHumanoid42->setSites(*HAnimSite1670);

CHAnimSite* HAnimSite1671 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1671->setUSE("hanim_l_ectocanthus_pt");
HAnimHumanoid42->setSites(*HAnimSite1671);

CHAnimSite* HAnimSite1672 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1672->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid42->setSites(*HAnimSite1672);

CHAnimSite* HAnimSite1673 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1673->setUSE("hanim_l_tragion_pt");
HAnimHumanoid42->setSites(*HAnimSite1673);

CHAnimSite* HAnimSite1674 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1674->setUSE("hanim_nuchale_pt");
HAnimHumanoid42->setSites(*HAnimSite1674);

CHAnimSite* HAnimSite1675 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1675->setUSE("hanim_opisthocranion_pt");
HAnimHumanoid42->setSites(*HAnimSite1675);

CHAnimSite* HAnimSite1676 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1676->setUSE("hanim_r_ectocanthus_pt");
HAnimHumanoid42->setSites(*HAnimSite1676);

CHAnimSite* HAnimSite1677 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1677->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid42->setSites(*HAnimSite1677);

CHAnimSite* HAnimSite1678 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1678->setUSE("hanim_r_tragion_pt");
HAnimHumanoid42->setSites(*HAnimSite1678);

CHAnimSite* HAnimSite1679 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1679->setUSE("hanim_sellion_pt");
HAnimHumanoid42->setSites(*HAnimSite1679);

CHAnimSite* HAnimSite1680 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1680->setUSE("hanim_skull_vertex_pt");
HAnimHumanoid42->setSites(*HAnimSite1680);

CHAnimSite* HAnimSite1681 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1681->setUSE("hanim_l_gonion_pt");
HAnimHumanoid42->setSites(*HAnimSite1681);

CHAnimSite* HAnimSite1682 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1682->setUSE("hanim_menton_pt");
HAnimHumanoid42->setSites(*HAnimSite1682);

CHAnimSite* HAnimSite1683 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1683->setUSE("hanim_r_gonion_pt");
HAnimHumanoid42->setSites(*HAnimSite1683);

CHAnimSite* HAnimSite1684 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1684->setUSE("hanim_supramenton_pt");
HAnimHumanoid42->setSites(*HAnimSite1684);

CHAnimSite* HAnimSite1685 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1685->setUSE("hanim_l_bideltoid_pt");
HAnimHumanoid42->setSites(*HAnimSite1685);

CHAnimSite* HAnimSite1686 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1686->setUSE("hanim_l_humeral_lateral_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite1686);

CHAnimSite* HAnimSite1687 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1687->setUSE("hanim_l_humeral_medial_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite1687);

CHAnimSite* HAnimSite1688 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1688->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid42->setSites(*HAnimSite1688);

CHAnimSite* HAnimSite1689 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1689->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid42->setSites(*HAnimSite1689);

CHAnimSite* HAnimSite1690 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1690->setUSE("hanim_l_radiale_pt");
HAnimHumanoid42->setSites(*HAnimSite1690);

CHAnimSite* HAnimSite1691 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1691->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid42->setSites(*HAnimSite1691);

CHAnimSite* HAnimSite1692 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1692->setUSE("hanim_l_carpal_distal_phalanx_1_tip");
HAnimHumanoid42->setSites(*HAnimSite1692);

CHAnimSite* HAnimSite1693 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1693->setUSE("hanim_l_metacarpal_phalanx_2_pt");
HAnimHumanoid42->setSites(*HAnimSite1693);

CHAnimSite* HAnimSite1694 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1694->setUSE("hanim_l_carpal_distal_phalanx_2_tip");
HAnimHumanoid42->setSites(*HAnimSite1694);

CHAnimSite* HAnimSite1695 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1695->setUSE("hanim_l_dactylion_pt");
HAnimHumanoid42->setSites(*HAnimSite1695);

CHAnimSite* HAnimSite1696 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1696->setUSE("hanim_l_metacarpal_phalanx_3_pt");
HAnimHumanoid42->setSites(*HAnimSite1696);

CHAnimSite* HAnimSite1697 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1697->setUSE("hanim_l_carpal_distal_phalanx_3_tip");
HAnimHumanoid42->setSites(*HAnimSite1697);

CHAnimSite* HAnimSite1698 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1698->setUSE("hanim_l_metacarpal_phalanx_5_pt");
HAnimHumanoid42->setSites(*HAnimSite1698);

CHAnimSite* HAnimSite1699 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1699->setUSE("hanim_l_carpal_distal_phalanx_4_tip");
HAnimHumanoid42->setSites(*HAnimSite1699);

CHAnimSite* HAnimSite1700 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1700->setUSE("hanim_l_carpal_distal_phalanx_5_tip");
HAnimHumanoid42->setSites(*HAnimSite1700);

CHAnimSite* HAnimSite1701 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1701->setUSE("hanim_r_bideltoid_pt");
HAnimHumanoid42->setSites(*HAnimSite1701);

CHAnimSite* HAnimSite1702 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1702->setUSE("hanim_r_humeral_lateral_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite1702);

CHAnimSite* HAnimSite1703 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1703->setUSE("hanim_r_humeral_medial_epicondyles_pt");
HAnimHumanoid42->setSites(*HAnimSite1703);

CHAnimSite* HAnimSite1704 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1704->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid42->setSites(*HAnimSite1704);

CHAnimSite* HAnimSite1705 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1705->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid42->setSites(*HAnimSite1705);

CHAnimSite* HAnimSite1706 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1706->setUSE("hanim_r_radiale_pt");
HAnimHumanoid42->setSites(*HAnimSite1706);

CHAnimSite* HAnimSite1707 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1707->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid42->setSites(*HAnimSite1707);

CHAnimSite* HAnimSite1708 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1708->setUSE("hanim_r_carpal_distal_phalanx_1_tip");
HAnimHumanoid42->setSites(*HAnimSite1708);

CHAnimSite* HAnimSite1709 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1709->setUSE("hanim_r_metacarpal_phalanx_2_pt");
HAnimHumanoid42->setSites(*HAnimSite1709);

CHAnimSite* HAnimSite1710 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1710->setUSE("hanim_r_carpal_distal_phalanx_2_tip");
HAnimHumanoid42->setSites(*HAnimSite1710);

CHAnimSite* HAnimSite1711 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1711->setUSE("hanim_r_dactylion_pt");
HAnimHumanoid42->setSites(*HAnimSite1711);

CHAnimSite* HAnimSite1712 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1712->setUSE("hanim_r_metacarpal_phalanx_3_pt");
HAnimHumanoid42->setSites(*HAnimSite1712);

CHAnimSite* HAnimSite1713 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1713->setUSE("hanim_r_carpal_distal_phalanx_3_tip");
HAnimHumanoid42->setSites(*HAnimSite1713);

CHAnimSite* HAnimSite1714 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1714->setUSE("hanim_r_metacarpal_phalanx_5_pt");
HAnimHumanoid42->setSites(*HAnimSite1714);

CHAnimSite* HAnimSite1715 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1715->setUSE("hanim_r_carpal_distal_phalanx_4_tip");
HAnimHumanoid42->setSites(*HAnimSite1715);

CHAnimSite* HAnimSite1716 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1716->setUSE("hanim_r_carpal_distal_phalanx_5_tip");
HAnimHumanoid42->setSites(*HAnimSite1716);

CHAnimSegment* HAnimSegment1717 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1717->setUSE("hanim_sacrum");
HAnimHumanoid42->setSegments(*HAnimSegment1717);

CHAnimSegment* HAnimSegment1718 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1718->setUSE("hanim_pelvis");
HAnimHumanoid42->setSegments(*HAnimSegment1718);

CHAnimSegment* HAnimSegment1719 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1719->setUSE("hanim_l_thigh");
HAnimHumanoid42->setSegments(*HAnimSegment1719);

CHAnimSegment* HAnimSegment1720 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1720->setUSE("hanim_l_calf");
HAnimHumanoid42->setSegments(*HAnimSegment1720);

CHAnimSegment* HAnimSegment1721 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1721->setUSE("hanim_l_talus");
HAnimHumanoid42->setSegments(*HAnimSegment1721);

CHAnimSegment* HAnimSegment1722 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1722->setUSE("hanim_l_navicular");
HAnimHumanoid42->setSegments(*HAnimSegment1722);

CHAnimSegment* HAnimSegment1723 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1723->setUSE("hanim_l_cuneiform_1");
HAnimHumanoid42->setSegments(*HAnimSegment1723);

CHAnimSegment* HAnimSegment1724 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1724->setUSE("hanim_l_metatarsal_1");
HAnimHumanoid42->setSegments(*HAnimSegment1724);

CHAnimSegment* HAnimSegment1725 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1725->setUSE("hanim_l_tarsal_proximal_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1725);

CHAnimSegment* HAnimSegment1726 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1726->setUSE("hanim_l_cuneiform_2");
HAnimHumanoid42->setSegments(*HAnimSegment1726);

CHAnimSegment* HAnimSegment1727 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1727->setUSE("hanim_l_metatarsal_2");
HAnimHumanoid42->setSegments(*HAnimSegment1727);

CHAnimSegment* HAnimSegment1728 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1728->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid42->setSegments(*HAnimSegment1728);

CHAnimSegment* HAnimSegment1729 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1729->setUSE("hanim_l_tarsal_middle_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1729);

CHAnimSegment* HAnimSegment1730 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1730->setUSE("hanim_l_cuneiform_3");
HAnimHumanoid42->setSegments(*HAnimSegment1730);

CHAnimSegment* HAnimSegment1731 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1731->setUSE("hanim_l_metatarsal_3");
HAnimHumanoid42->setSegments(*HAnimSegment1731);

CHAnimSegment* HAnimSegment1732 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1732->setUSE("hanim_l_tarsal_proximal_phalanx_3");
HAnimHumanoid42->setSegments(*HAnimSegment1732);

CHAnimSegment* HAnimSegment1733 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1733->setUSE("hanim_l_tarsal_middle_phalanx_2");
HAnimHumanoid42->setSegments(*HAnimSegment1733);

CHAnimSegment* HAnimSegment1734 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1734->setUSE("hanim_l_calcaneus");
HAnimHumanoid42->setSegments(*HAnimSegment1734);

CHAnimSegment* HAnimSegment1735 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1735->setUSE("hanim_l_cuboid");
HAnimHumanoid42->setSegments(*HAnimSegment1735);

CHAnimSegment* HAnimSegment1736 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1736->setUSE("hanim_l_metatarsal_4");
HAnimHumanoid42->setSegments(*HAnimSegment1736);

CHAnimSegment* HAnimSegment1737 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1737->setUSE("hanim_l_tarsal_proximal_phalanx_4");
HAnimHumanoid42->setSegments(*HAnimSegment1737);

CHAnimSegment* HAnimSegment1738 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1738->setUSE("hanim_l_tarsal_middle_phalanx_3");
HAnimHumanoid42->setSegments(*HAnimSegment1738);

CHAnimSegment* HAnimSegment1739 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1739->setUSE("hanim_l_metatarsal_5");
HAnimHumanoid42->setSegments(*HAnimSegment1739);

CHAnimSegment* HAnimSegment1740 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1740->setUSE("hanim_l_tarsal_proximal_phalanx_5");
HAnimHumanoid42->setSegments(*HAnimSegment1740);

CHAnimSegment* HAnimSegment1741 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1741->setUSE("hanim_l_tarsal_middle_phalanx_4");
HAnimHumanoid42->setSegments(*HAnimSegment1741);

CHAnimSegment* HAnimSegment1742 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1742->setUSE("hanim_r_thigh");
HAnimHumanoid42->setSegments(*HAnimSegment1742);

CHAnimSegment* HAnimSegment1743 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1743->setUSE("hanim_r_calf");
HAnimHumanoid42->setSegments(*HAnimSegment1743);

CHAnimSegment* HAnimSegment1744 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1744->setUSE("hanim_r_talus");
HAnimHumanoid42->setSegments(*HAnimSegment1744);

CHAnimSegment* HAnimSegment1745 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1745->setUSE("hanim_r_navicular");
HAnimHumanoid42->setSegments(*HAnimSegment1745);

CHAnimSegment* HAnimSegment1746 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1746->setUSE("hanim_r_cuneiform_1");
HAnimHumanoid42->setSegments(*HAnimSegment1746);

CHAnimSegment* HAnimSegment1747 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1747->setUSE("hanim_r_metatarsal_1");
HAnimHumanoid42->setSegments(*HAnimSegment1747);

CHAnimSegment* HAnimSegment1748 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1748->setUSE("hanim_r_tarsal_proximal_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1748);

CHAnimSegment* HAnimSegment1749 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1749->setUSE("hanim_r_cuneiform_2");
HAnimHumanoid42->setSegments(*HAnimSegment1749);

CHAnimSegment* HAnimSegment1750 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1750->setUSE("hanim_r_metatarsal_2");
HAnimHumanoid42->setSegments(*HAnimSegment1750);

CHAnimSegment* HAnimSegment1751 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1751->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid42->setSegments(*HAnimSegment1751);

CHAnimSegment* HAnimSegment1752 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1752->setUSE("hanim_r_tarsal_middle_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1752);

CHAnimSegment* HAnimSegment1753 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1753->setUSE("hanim_r_cuneiform_3");
HAnimHumanoid42->setSegments(*HAnimSegment1753);

CHAnimSegment* HAnimSegment1754 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1754->setUSE("hanim_r_metatarsal_3");
HAnimHumanoid42->setSegments(*HAnimSegment1754);

CHAnimSegment* HAnimSegment1755 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1755->setUSE("hanim_r_tarsal_proximal_phalanx_3");
HAnimHumanoid42->setSegments(*HAnimSegment1755);

CHAnimSegment* HAnimSegment1756 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1756->setUSE("hanim_r_tarsal_middle_phalanx_2");
HAnimHumanoid42->setSegments(*HAnimSegment1756);

CHAnimSegment* HAnimSegment1757 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1757->setUSE("hanim_r_calcaneus");
HAnimHumanoid42->setSegments(*HAnimSegment1757);

CHAnimSegment* HAnimSegment1758 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1758->setUSE("hanim_r_cuboid");
HAnimHumanoid42->setSegments(*HAnimSegment1758);

CHAnimSegment* HAnimSegment1759 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1759->setUSE("hanim_r_metatarsal_4");
HAnimHumanoid42->setSegments(*HAnimSegment1759);

CHAnimSegment* HAnimSegment1760 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1760->setUSE("hanim_r_tarsal_proximal_phalanx_4");
HAnimHumanoid42->setSegments(*HAnimSegment1760);

CHAnimSegment* HAnimSegment1761 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1761->setUSE("hanim_r_tarsal_middle_phalanx_3");
HAnimHumanoid42->setSegments(*HAnimSegment1761);

CHAnimSegment* HAnimSegment1762 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1762->setUSE("hanim_r_metatarsal_5");
HAnimHumanoid42->setSegments(*HAnimSegment1762);

CHAnimSegment* HAnimSegment1763 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1763->setUSE("hanim_r_tarsal_proximal_phalanx_5");
HAnimHumanoid42->setSegments(*HAnimSegment1763);

CHAnimSegment* HAnimSegment1764 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1764->setUSE("hanim_r_tarsal_middle_phalanx_4");
HAnimHumanoid42->setSegments(*HAnimSegment1764);

CHAnimSegment* HAnimSegment1765 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1765->setUSE("hanim_l5");
HAnimHumanoid42->setSegments(*HAnimSegment1765);

CHAnimSegment* HAnimSegment1766 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1766->setUSE("hanim_l4");
HAnimHumanoid42->setSegments(*HAnimSegment1766);

CHAnimSegment* HAnimSegment1767 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1767->setUSE("hanim_l3");
HAnimHumanoid42->setSegments(*HAnimSegment1767);

CHAnimSegment* HAnimSegment1768 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1768->setUSE("hanim_l2");
HAnimHumanoid42->setSegments(*HAnimSegment1768);

CHAnimSegment* HAnimSegment1769 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1769->setUSE("hanim_l1");
HAnimHumanoid42->setSegments(*HAnimSegment1769);

CHAnimSegment* HAnimSegment1770 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1770->setUSE("hanim_t12");
HAnimHumanoid42->setSegments(*HAnimSegment1770);

CHAnimSegment* HAnimSegment1771 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1771->setUSE("hanim_t11");
HAnimHumanoid42->setSegments(*HAnimSegment1771);

CHAnimSegment* HAnimSegment1772 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1772->setUSE("hanim_t10");
HAnimHumanoid42->setSegments(*HAnimSegment1772);

CHAnimSegment* HAnimSegment1773 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1773->setUSE("hanim_t9");
HAnimHumanoid42->setSegments(*HAnimSegment1773);

CHAnimSegment* HAnimSegment1774 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1774->setUSE("hanim_t8");
HAnimHumanoid42->setSegments(*HAnimSegment1774);

CHAnimSegment* HAnimSegment1775 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1775->setUSE("hanim_t7");
HAnimHumanoid42->setSegments(*HAnimSegment1775);

CHAnimSegment* HAnimSegment1776 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1776->setUSE("hanim_t6");
HAnimHumanoid42->setSegments(*HAnimSegment1776);

CHAnimSegment* HAnimSegment1777 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1777->setUSE("hanim_t5");
HAnimHumanoid42->setSegments(*HAnimSegment1777);

CHAnimSegment* HAnimSegment1778 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1778->setUSE("hanim_t4");
HAnimHumanoid42->setSegments(*HAnimSegment1778);

CHAnimSegment* HAnimSegment1779 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1779->setUSE("hanim_t3");
HAnimHumanoid42->setSegments(*HAnimSegment1779);

CHAnimSegment* HAnimSegment1780 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1780->setUSE("hanim_t2");
HAnimHumanoid42->setSegments(*HAnimSegment1780);

CHAnimSegment* HAnimSegment1781 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1781->setUSE("hanim_t1");
HAnimHumanoid42->setSegments(*HAnimSegment1781);

CHAnimSegment* HAnimSegment1782 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1782->setUSE("hanim_c7");
HAnimHumanoid42->setSegments(*HAnimSegment1782);

CHAnimSegment* HAnimSegment1783 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1783->setUSE("hanim_c6");
HAnimHumanoid42->setSegments(*HAnimSegment1783);

CHAnimSegment* HAnimSegment1784 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1784->setUSE("hanim_c5");
HAnimHumanoid42->setSegments(*HAnimSegment1784);

CHAnimSegment* HAnimSegment1785 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1785->setUSE("hanim_c4");
HAnimHumanoid42->setSegments(*HAnimSegment1785);

CHAnimSegment* HAnimSegment1786 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1786->setUSE("hanim_c3");
HAnimHumanoid42->setSegments(*HAnimSegment1786);

CHAnimSegment* HAnimSegment1787 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1787->setUSE("hanim_c2");
HAnimHumanoid42->setSegments(*HAnimSegment1787);

CHAnimSegment* HAnimSegment1788 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1788->setUSE("hanim_c1");
HAnimHumanoid42->setSegments(*HAnimSegment1788);

CHAnimSegment* HAnimSegment1789 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1789->setUSE("hanim_skull");
HAnimHumanoid42->setSegments(*HAnimSegment1789);

CHAnimSegment* HAnimSegment1790 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1790->setUSE("hanim_l_clavicle");
HAnimHumanoid42->setSegments(*HAnimSegment1790);

CHAnimSegment* HAnimSegment1791 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1791->setUSE("hanim_l_scapula");
HAnimHumanoid42->setSegments(*HAnimSegment1791);

CHAnimSegment* HAnimSegment1792 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1792->setUSE("hanim_l_upperarm");
HAnimHumanoid42->setSegments(*HAnimSegment1792);

CHAnimSegment* HAnimSegment1793 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1793->setUSE("hanim_l_forearm");
HAnimHumanoid42->setSegments(*HAnimSegment1793);

CHAnimSegment* HAnimSegment1794 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1794->setUSE("hanim_l_carpal");
HAnimHumanoid42->setSegments(*HAnimSegment1794);

CHAnimSegment* HAnimSegment1795 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1795->setUSE("hanim_l_trapezium");
HAnimHumanoid42->setSegments(*HAnimSegment1795);

CHAnimSegment* HAnimSegment1796 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1796->setUSE("hanim_l_metacarpal_1");
HAnimHumanoid42->setSegments(*HAnimSegment1796);

CHAnimSegment* HAnimSegment1797 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1797->setUSE("hanim_l_carpal_proximal_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1797);

CHAnimSegment* HAnimSegment1798 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1798->setUSE("hanim_l_trapezoid");
HAnimHumanoid42->setSegments(*HAnimSegment1798);

CHAnimSegment* HAnimSegment1799 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1799->setUSE("hanim_l_metacarpal_2");
HAnimHumanoid42->setSegments(*HAnimSegment1799);

CHAnimSegment* HAnimSegment1800 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1800->setUSE("hanim_l_carpal_proximal_phalanx_2 ");
HAnimHumanoid42->setSegments(*HAnimSegment1800);

CHAnimSegment* HAnimSegment1801 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1801->setUSE("hanim_l_carpal_middle_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1801);

CHAnimSegment* HAnimSegment1802 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1802->setUSE("hanim_l_capitate");
HAnimHumanoid42->setSegments(*HAnimSegment1802);

CHAnimSegment* HAnimSegment1803 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1803->setUSE("hanim_l_metacarpal_3");
HAnimHumanoid42->setSegments(*HAnimSegment1803);

CHAnimSegment* HAnimSegment1804 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1804->setUSE("hanim_l_carpal_proximal_phalanx_2");
HAnimHumanoid42->setSegments(*HAnimSegment1804);

CHAnimSegment* HAnimSegment1805 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1805->setUSE("hanim_l_carpal_middle_phalanx_2");
HAnimHumanoid42->setSegments(*HAnimSegment1805);

CHAnimSegment* HAnimSegment1806 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1806->setUSE("hanim_l_hamate");
HAnimHumanoid42->setSegments(*HAnimSegment1806);

CHAnimSegment* HAnimSegment1807 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1807->setUSE("hanim_l_metacarpal_4");
HAnimHumanoid42->setSegments(*HAnimSegment1807);

CHAnimSegment* HAnimSegment1808 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1808->setUSE("hanim_l_carpal_proximal_phalanx_3");
HAnimHumanoid42->setSegments(*HAnimSegment1808);

CHAnimSegment* HAnimSegment1809 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1809->setUSE("hanim_l_carpal_middle_phalanx_3");
HAnimHumanoid42->setSegments(*HAnimSegment1809);

CHAnimSegment* HAnimSegment1810 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1810->setUSE("hanim_l_metacarpal_5");
HAnimHumanoid42->setSegments(*HAnimSegment1810);

CHAnimSegment* HAnimSegment1811 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1811->setUSE("hanim_l_carpal_proximal_phalanx_4");
HAnimHumanoid42->setSegments(*HAnimSegment1811);

CHAnimSegment* HAnimSegment1812 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1812->setUSE("hanim_l_carpal_middle_phalanx_4");
HAnimHumanoid42->setSegments(*HAnimSegment1812);

CHAnimSegment* HAnimSegment1813 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1813->setUSE("hanim_r_clavicle");
HAnimHumanoid42->setSegments(*HAnimSegment1813);

CHAnimSegment* HAnimSegment1814 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1814->setUSE("hanim_r_scapula");
HAnimHumanoid42->setSegments(*HAnimSegment1814);

CHAnimSegment* HAnimSegment1815 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1815->setUSE("hanim_r_upperarm");
HAnimHumanoid42->setSegments(*HAnimSegment1815);

CHAnimSegment* HAnimSegment1816 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1816->setUSE("hanim_r_forearm");
HAnimHumanoid42->setSegments(*HAnimSegment1816);

CHAnimSegment* HAnimSegment1817 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1817->setUSE("hanim_r_carpal");
HAnimHumanoid42->setSegments(*HAnimSegment1817);

CHAnimSegment* HAnimSegment1818 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1818->setUSE("hanim_r_trapezium");
HAnimHumanoid42->setSegments(*HAnimSegment1818);

CHAnimSegment* HAnimSegment1819 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1819->setUSE("hanim_r_metacarpal_1");
HAnimHumanoid42->setSegments(*HAnimSegment1819);

CHAnimSegment* HAnimSegment1820 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1820->setUSE("hanim_r_carpal_proximal_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1820);

CHAnimSegment* HAnimSegment1821 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1821->setUSE("hanim_r_trapezoid");
HAnimHumanoid42->setSegments(*HAnimSegment1821);

CHAnimSegment* HAnimSegment1822 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1822->setUSE("hanim_r_metacarpal_2");
HAnimHumanoid42->setSegments(*HAnimSegment1822);

CHAnimSegment* HAnimSegment1823 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1823->setUSE("hanim_r_carpal_proximal_phalanx_2 ");
HAnimHumanoid42->setSegments(*HAnimSegment1823);

CHAnimSegment* HAnimSegment1824 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1824->setUSE("hanim_r_carpal_middle_phalanx_1");
HAnimHumanoid42->setSegments(*HAnimSegment1824);

CHAnimSegment* HAnimSegment1825 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1825->setUSE("hanim_r_capitate");
HAnimHumanoid42->setSegments(*HAnimSegment1825);

CHAnimSegment* HAnimSegment1826 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1826->setUSE("hanim_r_metacarpal_3");
HAnimHumanoid42->setSegments(*HAnimSegment1826);

CHAnimSegment* HAnimSegment1827 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1827->setUSE("hanim_r_carpal_proximal_phalanx_2");
HAnimHumanoid42->setSegments(*HAnimSegment1827);

CHAnimSegment* HAnimSegment1828 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1828->setUSE("hanim_r_carpal_middle_phalanx_2");
HAnimHumanoid42->setSegments(*HAnimSegment1828);

CHAnimSegment* HAnimSegment1829 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1829->setUSE("hanim_r_hamate");
HAnimHumanoid42->setSegments(*HAnimSegment1829);

CHAnimSegment* HAnimSegment1830 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1830->setUSE("hanim_r_metacarpal_4");
HAnimHumanoid42->setSegments(*HAnimSegment1830);

CHAnimSegment* HAnimSegment1831 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1831->setUSE("hanim_r_carpal_proximal_phalanx_3");
HAnimHumanoid42->setSegments(*HAnimSegment1831);

CHAnimSegment* HAnimSegment1832 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1832->setUSE("hanim_r_carpal_middle_phalanx_3");
HAnimHumanoid42->setSegments(*HAnimSegment1832);

CHAnimSegment* HAnimSegment1833 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1833->setUSE("hanim_r_metacarpal_5");
HAnimHumanoid42->setSegments(*HAnimSegment1833);

CHAnimSegment* HAnimSegment1834 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1834->setUSE("hanim_r_carpal_proximal_phalanx_4");
HAnimHumanoid42->setSegments(*HAnimSegment1834);

CHAnimSegment* HAnimSegment1835 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1835->setUSE("hanim_r_carpal_middle_phalanx_4");
HAnimHumanoid42->setSegments(*HAnimSegment1835);

CHAnimJoint* HAnimJoint1836 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1836->setUSE("hanim_humanoid_root");
HAnimHumanoid42->addJoints(*HAnimJoint1836);

CHAnimJoint* HAnimJoint1837 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1837->setUSE("hanim_sacroiliac");
HAnimHumanoid42->addJoints(*HAnimJoint1837);

CHAnimJoint* HAnimJoint1838 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1838->setUSE("hanim_l_hip");
HAnimHumanoid42->addJoints(*HAnimJoint1838);

CHAnimJoint* HAnimJoint1839 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1839->setUSE("hanim_l_knee");
HAnimHumanoid42->addJoints(*HAnimJoint1839);

CHAnimJoint* HAnimJoint1840 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1840->setUSE("hanim_l_talocrural");
HAnimHumanoid42->addJoints(*HAnimJoint1840);

CHAnimJoint* HAnimJoint1841 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1841->setUSE("hanim_l_talocalcaneonavicular");
HAnimHumanoid42->addJoints(*HAnimJoint1841);

CHAnimJoint* HAnimJoint1842 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1842->setUSE("hanim_l_cuneonavicular_1");
HAnimHumanoid42->addJoints(*HAnimJoint1842);

CHAnimJoint* HAnimJoint1843 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1843->setUSE("hanim_l_tarsometatarsal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1843);

CHAnimJoint* HAnimJoint1844 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1844->setUSE("hanim_l_metatarsophalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1844);

CHAnimJoint* HAnimJoint1845 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1845->setUSE("hanim_l_tarsal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1845);

CHAnimJoint* HAnimJoint1846 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1846->setUSE("hanim_l_cuneonavicular_2");
HAnimHumanoid42->addJoints(*HAnimJoint1846);

CHAnimJoint* HAnimJoint1847 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1847->setUSE("hanim_l_tarsometatarsal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1847);

CHAnimJoint* HAnimJoint1848 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1848->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1848);

CHAnimJoint* HAnimJoint1849 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1849->setUSE("hanim_l_tarsal_proximal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1849);

CHAnimJoint* HAnimJoint1850 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1850->setUSE("hanim_l_tarsal_distal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1850);

CHAnimJoint* HAnimJoint1851 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1851->setUSE("hanim_l_cuneonavicular_3");
HAnimHumanoid42->addJoints(*HAnimJoint1851);

CHAnimJoint* HAnimJoint1852 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1852->setUSE("hanim_l_tarsometatarsal_3 ");
HAnimHumanoid42->addJoints(*HAnimJoint1852);

CHAnimJoint* HAnimJoint1853 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1853->setUSE("hanim_l_metatarsophalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1853);

CHAnimJoint* HAnimJoint1854 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1854->setUSE("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1854);

CHAnimJoint* HAnimJoint1855 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1855->setUSE("hanim_l_tarsal_distal_interphalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1855);

CHAnimJoint* HAnimJoint1856 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1856->setUSE("hanim_l_calcaneocuboid");
HAnimHumanoid42->addJoints(*HAnimJoint1856);

CHAnimJoint* HAnimJoint1857 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1857->setUSE("hanim_l_transversetarsal");
HAnimHumanoid42->addJoints(*HAnimJoint1857);

CHAnimJoint* HAnimJoint1858 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1858->setUSE("hanim_l_tarsometatarsal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1858);

CHAnimJoint* HAnimJoint1859 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1859->setUSE("hanim_l_metatarsophalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1859);

CHAnimJoint* HAnimJoint1860 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1860->setUSE("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1860);

CHAnimJoint* HAnimJoint1861 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1861->setUSE("hanim_l_tarsal_distal_interphalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1861);

CHAnimJoint* HAnimJoint1862 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1862->setUSE("hanim_l_tarsometatarsal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1862);

CHAnimJoint* HAnimJoint1863 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1863->setUSE("hanim_l_metatarsophalangeal_5");
HAnimHumanoid42->addJoints(*HAnimJoint1863);

CHAnimJoint* HAnimJoint1864 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1864->setUSE("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1864);

CHAnimJoint* HAnimJoint1865 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1865->setUSE("hanim_l_tarsal_distal_interphalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1865);

CHAnimJoint* HAnimJoint1866 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1866->setUSE("hanim_r_hip");
HAnimHumanoid42->addJoints(*HAnimJoint1866);

CHAnimJoint* HAnimJoint1867 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1867->setUSE("hanim_r_knee");
HAnimHumanoid42->addJoints(*HAnimJoint1867);

CHAnimJoint* HAnimJoint1868 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1868->setUSE("hanim_r_talocrural");
HAnimHumanoid42->addJoints(*HAnimJoint1868);

CHAnimJoint* HAnimJoint1869 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1869->setUSE("hanim_r_talocalcaneonavicular");
HAnimHumanoid42->addJoints(*HAnimJoint1869);

CHAnimJoint* HAnimJoint1870 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1870->setUSE("hanim_r_cuneonavicular_1");
HAnimHumanoid42->addJoints(*HAnimJoint1870);

CHAnimJoint* HAnimJoint1871 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1871->setUSE("hanim_r_tarsometatarsal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1871);

CHAnimJoint* HAnimJoint1872 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1872->setUSE("hanim_r_metatarsophalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1872);

CHAnimJoint* HAnimJoint1873 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1873->setUSE("hanim_r_tarsal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1873);

CHAnimJoint* HAnimJoint1874 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1874->setUSE("hanim_r_cuneonavicular_2");
HAnimHumanoid42->addJoints(*HAnimJoint1874);

CHAnimJoint* HAnimJoint1875 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1875->setUSE("hanim_r_tarsometatarsal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1875);

CHAnimJoint* HAnimJoint1876 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1876->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1876);

CHAnimJoint* HAnimJoint1877 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1877->setUSE("hanim_r_tarsal_proximal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1877);

CHAnimJoint* HAnimJoint1878 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1878->setUSE("hanim_r_tarsal_distal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1878);

CHAnimJoint* HAnimJoint1879 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1879->setUSE("hanim_r_cuneonavicular_3");
HAnimHumanoid42->addJoints(*HAnimJoint1879);

CHAnimJoint* HAnimJoint1880 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1880->setUSE("hanim_r_tarsometatarsal_3 ");
HAnimHumanoid42->addJoints(*HAnimJoint1880);

CHAnimJoint* HAnimJoint1881 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1881->setUSE("hanim_r_metatarsophalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1881);

CHAnimJoint* HAnimJoint1882 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1882->setUSE("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1882);

CHAnimJoint* HAnimJoint1883 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1883->setUSE("hanim_r_tarsal_distal_interphalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1883);

CHAnimJoint* HAnimJoint1884 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1884->setUSE("hanim_r_calcaneocuboid");
HAnimHumanoid42->addJoints(*HAnimJoint1884);

CHAnimJoint* HAnimJoint1885 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1885->setUSE("hanim_r_transversetarsal");
HAnimHumanoid42->addJoints(*HAnimJoint1885);

CHAnimJoint* HAnimJoint1886 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1886->setUSE("hanim_r_tarsometatarsal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1886);

CHAnimJoint* HAnimJoint1887 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1887->setUSE("hanim_r_metatarsophalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1887);

CHAnimJoint* HAnimJoint1888 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1888->setUSE("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1888);

CHAnimJoint* HAnimJoint1889 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1889->setUSE("hanim_r_tarsal_distal_interphalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1889);

CHAnimJoint* HAnimJoint1890 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1890->setUSE("hanim_r_tarsometatarsal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1890);

CHAnimJoint* HAnimJoint1891 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1891->setUSE("hanim_r_metatarsophalangeal_5");
HAnimHumanoid42->addJoints(*HAnimJoint1891);

CHAnimJoint* HAnimJoint1892 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1892->setUSE("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1892);

CHAnimJoint* HAnimJoint1893 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1893->setUSE("hanim_r_tarsal_distal_interphalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1893);

CHAnimJoint* HAnimJoint1894 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1894->setUSE("hanim_vl5");
HAnimHumanoid42->addJoints(*HAnimJoint1894);

CHAnimJoint* HAnimJoint1895 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1895->setUSE("hanim_vl4");
HAnimHumanoid42->addJoints(*HAnimJoint1895);

CHAnimJoint* HAnimJoint1896 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1896->setUSE("hanim_vl3");
HAnimHumanoid42->addJoints(*HAnimJoint1896);

CHAnimJoint* HAnimJoint1897 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1897->setUSE("hanim_vl2");
HAnimHumanoid42->addJoints(*HAnimJoint1897);

CHAnimJoint* HAnimJoint1898 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1898->setUSE("hanim_vl1");
HAnimHumanoid42->addJoints(*HAnimJoint1898);

CHAnimJoint* HAnimJoint1899 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1899->setUSE("hanim_vt12");
HAnimHumanoid42->addJoints(*HAnimJoint1899);

CHAnimJoint* HAnimJoint1900 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1900->setUSE("hanim_vt11");
HAnimHumanoid42->addJoints(*HAnimJoint1900);

CHAnimJoint* HAnimJoint1901 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1901->setUSE("hanim_vt10");
HAnimHumanoid42->addJoints(*HAnimJoint1901);

CHAnimJoint* HAnimJoint1902 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1902->setUSE("hanim_vt9");
HAnimHumanoid42->addJoints(*HAnimJoint1902);

CHAnimJoint* HAnimJoint1903 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1903->setUSE("hanim_vt8");
HAnimHumanoid42->addJoints(*HAnimJoint1903);

CHAnimJoint* HAnimJoint1904 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1904->setUSE("hanim_vt7");
HAnimHumanoid42->addJoints(*HAnimJoint1904);

CHAnimJoint* HAnimJoint1905 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1905->setUSE("hanim_vt6");
HAnimHumanoid42->addJoints(*HAnimJoint1905);

CHAnimJoint* HAnimJoint1906 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1906->setUSE("hanim_vt5");
HAnimHumanoid42->addJoints(*HAnimJoint1906);

CHAnimJoint* HAnimJoint1907 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1907->setUSE("hanim_vt4");
HAnimHumanoid42->addJoints(*HAnimJoint1907);

CHAnimJoint* HAnimJoint1908 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1908->setUSE("hanim_vt3");
HAnimHumanoid42->addJoints(*HAnimJoint1908);

CHAnimJoint* HAnimJoint1909 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1909->setUSE("hanim_vt2");
HAnimHumanoid42->addJoints(*HAnimJoint1909);

CHAnimJoint* HAnimJoint1910 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1910->setUSE("hanim_vt1");
HAnimHumanoid42->addJoints(*HAnimJoint1910);

CHAnimJoint* HAnimJoint1911 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1911->setUSE("hanim_vc7");
HAnimHumanoid42->addJoints(*HAnimJoint1911);

CHAnimJoint* HAnimJoint1912 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1912->setUSE("hanim_vc6");
HAnimHumanoid42->addJoints(*HAnimJoint1912);

CHAnimJoint* HAnimJoint1913 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1913->setUSE("hanim_vc5");
HAnimHumanoid42->addJoints(*HAnimJoint1913);

CHAnimJoint* HAnimJoint1914 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1914->setUSE("hanim_vc4");
HAnimHumanoid42->addJoints(*HAnimJoint1914);

CHAnimJoint* HAnimJoint1915 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1915->setUSE("hanim_vc3");
HAnimHumanoid42->addJoints(*HAnimJoint1915);

CHAnimJoint* HAnimJoint1916 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1916->setUSE("hanim_vc2");
HAnimHumanoid42->addJoints(*HAnimJoint1916);

CHAnimJoint* HAnimJoint1917 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1917->setUSE("hanim_vc1");
HAnimHumanoid42->addJoints(*HAnimJoint1917);

CHAnimJoint* HAnimJoint1918 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1918->setUSE("hanim_skullbase");
HAnimHumanoid42->addJoints(*HAnimJoint1918);

CHAnimJoint* HAnimJoint1919 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1919->setUSE("hanim_l_eyelid_joint");
HAnimHumanoid42->addJoints(*HAnimJoint1919);

CHAnimJoint* HAnimJoint1920 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1920->setUSE("hanim_r_eyelid_joint");
HAnimHumanoid42->addJoints(*HAnimJoint1920);

CHAnimJoint* HAnimJoint1921 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1921->setUSE("hanim_l_eyeball_joint");
HAnimHumanoid42->addJoints(*HAnimJoint1921);

CHAnimJoint* HAnimJoint1922 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1922->setUSE("hanim_r_eyeball_joint");
HAnimHumanoid42->addJoints(*HAnimJoint1922);

CHAnimJoint* HAnimJoint1923 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1923->setUSE("hanim_l_eyebrow_joint");
HAnimHumanoid42->addJoints(*HAnimJoint1923);

CHAnimJoint* HAnimJoint1924 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1924->setUSE("hanim_r_eyebrow_joint");
HAnimHumanoid42->addJoints(*HAnimJoint1924);

CHAnimJoint* HAnimJoint1925 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1925->setUSE("hanim_temporomandibular");
HAnimHumanoid42->addJoints(*HAnimJoint1925);

CHAnimJoint* HAnimJoint1926 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1926->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid42->addJoints(*HAnimJoint1926);

CHAnimJoint* HAnimJoint1927 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1927->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid42->addJoints(*HAnimJoint1927);

CHAnimJoint* HAnimJoint1928 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1928->setUSE("hanim_l_shoulder");
HAnimHumanoid42->addJoints(*HAnimJoint1928);

CHAnimJoint* HAnimJoint1929 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1929->setUSE("hanim_l_elbow");
HAnimHumanoid42->addJoints(*HAnimJoint1929);

CHAnimJoint* HAnimJoint1930 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1930->setUSE("hanim_l_radiocarpal");
HAnimHumanoid42->addJoints(*HAnimJoint1930);

CHAnimJoint* HAnimJoint1931 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1931->setUSE("hanim_l_midcarpal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1931);

CHAnimJoint* HAnimJoint1932 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1932->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1932);

CHAnimJoint* HAnimJoint1933 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1933->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1933);

CHAnimJoint* HAnimJoint1934 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1934->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1934);

CHAnimJoint* HAnimJoint1935 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1935->setUSE("hanim_l_midcarpal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1935);

CHAnimJoint* HAnimJoint1936 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1936->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1936);

CHAnimJoint* HAnimJoint1937 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1937->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1937);

CHAnimJoint* HAnimJoint1938 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1938->setUSE("hanim_l_carpal_proximal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1938);

CHAnimJoint* HAnimJoint1939 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1939->setUSE("hanim_l_carpal_distal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1939);

CHAnimJoint* HAnimJoint1940 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1940->setUSE("hanim_l_midcarpal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1940);

CHAnimJoint* HAnimJoint1941 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1941->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1941);

CHAnimJoint* HAnimJoint1942 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1942->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1942);

CHAnimJoint* HAnimJoint1943 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1943->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1943);

CHAnimJoint* HAnimJoint1944 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1944->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1944);

CHAnimJoint* HAnimJoint1945 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1945->setUSE("hanim_l_midcarpal_4_1");
HAnimHumanoid42->addJoints(*HAnimJoint1945);

CHAnimJoint* HAnimJoint1946 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1946->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1946);

CHAnimJoint* HAnimJoint1947 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1947->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1947);

CHAnimJoint* HAnimJoint1948 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1948->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1948);

CHAnimJoint* HAnimJoint1949 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1949->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1949);

CHAnimJoint* HAnimJoint1950 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1950->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid42->addJoints(*HAnimJoint1950);

CHAnimJoint* HAnimJoint1951 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1951->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid42->addJoints(*HAnimJoint1951);

CHAnimJoint* HAnimJoint1952 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1952->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1952);

CHAnimJoint* HAnimJoint1953 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1953->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1953);

CHAnimJoint* HAnimJoint1954 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1954->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid42->addJoints(*HAnimJoint1954);

CHAnimJoint* HAnimJoint1955 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1955->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid42->addJoints(*HAnimJoint1955);

CHAnimJoint* HAnimJoint1956 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1956->setUSE("hanim_r_shoulder");
HAnimHumanoid42->addJoints(*HAnimJoint1956);

CHAnimJoint* HAnimJoint1957 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1957->setUSE("hanim_r_elbow");
HAnimHumanoid42->addJoints(*HAnimJoint1957);

CHAnimJoint* HAnimJoint1958 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1958->setUSE("hanim_r_radiocarpal");
HAnimHumanoid42->addJoints(*HAnimJoint1958);

CHAnimJoint* HAnimJoint1959 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1959->setUSE("hanim_r_midcarpal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1959);

CHAnimJoint* HAnimJoint1960 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1960->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1960);

CHAnimJoint* HAnimJoint1961 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1961->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1961);

CHAnimJoint* HAnimJoint1962 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1962->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1962);

CHAnimJoint* HAnimJoint1963 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1963->setUSE("hanim_r_midcarpal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1963);

CHAnimJoint* HAnimJoint1964 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1964->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1964);

CHAnimJoint* HAnimJoint1965 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1965->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1965);

CHAnimJoint* HAnimJoint1966 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1966->setUSE("hanim_r_carpal_proximal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1966);

CHAnimJoint* HAnimJoint1967 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1967->setUSE("hanim_r_carpal_distal_interphalangeal_1");
HAnimHumanoid42->addJoints(*HAnimJoint1967);

CHAnimJoint* HAnimJoint1968 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1968->setUSE("hanim_r_midcarpal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1968);

CHAnimJoint* HAnimJoint1969 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1969->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1969);

CHAnimJoint* HAnimJoint1970 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1970->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1970);

CHAnimJoint* HAnimJoint1971 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1971->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1971);

CHAnimJoint* HAnimJoint1972 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1972->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid42->addJoints(*HAnimJoint1972);

CHAnimJoint* HAnimJoint1973 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1973->setUSE("hanim_r_midcarpal_4_1");
HAnimHumanoid42->addJoints(*HAnimJoint1973);

CHAnimJoint* HAnimJoint1974 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1974->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1974);

CHAnimJoint* HAnimJoint1975 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1975->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1975);

CHAnimJoint* HAnimJoint1976 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1976->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1976);

CHAnimJoint* HAnimJoint1977 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1977->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid42->addJoints(*HAnimJoint1977);

CHAnimJoint* HAnimJoint1978 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1978->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid42->addJoints(*HAnimJoint1978);

CHAnimJoint* HAnimJoint1979 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1979->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid42->addJoints(*HAnimJoint1979);

CHAnimJoint* HAnimJoint1980 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1980->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1980);

CHAnimJoint* HAnimJoint1981 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1981->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid42->addJoints(*HAnimJoint1981);

CCoordinate* Coordinate1982 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
HAnimHumanoid42->setSkinCoord(*Coordinate1982);

group->addChildren(*HAnimHumanoid42);

X3D0->setScene(*Scene10);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
